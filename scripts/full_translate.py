#!/usr/bin/env python3
"""
Full batch translator: Reads asm from git, generates complete .c files.
Only processes files that currently have #ifdef MWERKS blocks.
Simple wrappers get C bodies; complex functions stay as asm.
"""
import os, re, subprocess, sys

PROJECT_DIR = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
SRC_DIR = os.path.join(PROJECT_DIR, "src")
INC_DIR = os.path.join(PROJECT_DIR, "include")

def get_asm(asm_file):
    try:
        r = subprocess.run(["git", "show", f"HEAD:asm/{asm_file}"],
                          capture_output=True, text=True, cwd=PROJECT_DIR, timeout=60)
        return r.stdout if r.returncode == 0 else None
    except: return None

def get_header(c_file):
    h_file = c_file.replace('.c', '.h')
    hpath = os.path.join(INC_DIR, h_file)
    if os.path.exists(hpath):
        with open(hpath) as f:
            return f.read()
    return None

def parse_funcs(asm):
    funcs = []
    cur = None
    in_text = True
    for line in asm.split('\n'):
        s = line.strip()
        if s == '.rodata' or s == '.data' or s == '.bss':
            in_text = False
            continue
        if s == '.text' or s == '.sinit,4':
            in_text = True
            continue
        if not in_text:
            continue
        m = re.match(r'\s*(?:thumb|arm)_func_start\s+(\w+)', s)
        if m:
            cur = {'name': m.group(1), 'lines': [], 'addr': '', 'is_arm': 'arm' in s}
            continue
        if re.match(r'\s*(?:thumb|arm)_func_end', s):
            if cur: funcs.append(cur); cur = None
            continue
        if cur:
            m2 = re.match(r'^(\w+):\s*(?:;\s*(0x[0-9A-Fa-f]+))?', s)
            if m2 and m2.group(1) == cur['name']:
                cur['addr'] = m2.group(2) or ''
            elif s and not s.startswith(('.balign','.word','.short','.byte','.section','.asciz','.ascii','.string')):
                if not s.endswith(':') or s.startswith('bl'):
                    cur['lines'].append(s)
    if cur: funcs.append(cur)
    return funcs

def translate_func(func):
    """Translate a function. Returns (c_code, was_translated)."""
    lines = func['lines']
    name = func['name']
    addr = func['addr']
    
    # Filter boilerplate
    core = [l for l in lines if not l.startswith(('push','pop','bx ','nop','add sp','sub sp'))]
    core = [l for l in core if not re.match(r'^\w+:$', l)]
    # Remove literal pool loads
    core = [l for l in core if not re.match(r'^ldr r\d, _\w+$', l)]
    
    bl_calls = []
    for l in core:
        m = re.match(r'blx?\s+(\w+)', l)
        if m:
            target = m.group(1)
            if not target.startswith('r'):
                bl_calls.append(target)
    
    # Type 1: Single bl call, minimal overhead
    if len(bl_calls) == 1 and len(core) <= 5:
        target = bl_calls[0]
        return f"void {name}(void) {{\n    {target}();\n}}", True
    
    # Type 2: Single bl with arg setup
    if len(bl_calls) == 1 and len(core) <= 12:
        target = bl_calls[0]
        args = []
        for l in core:
            m = re.match(r'mov r(\d), #(0x[0-9a-fA-F]+|\d+)', l)
            if m:
                args.append((int(m.group(1)), m.group(2)))
        if args:
            arg_str = ', '.join(str(v) for _, v in sorted(args))
            return f"void {name}(void) {{\n    {target}({arg_str});\n}}", True
        return f"void {name}(void) {{\n    {target}();\n}}", True
    
    # Type 3: Trampoline (ldr + bx)
    if len(lines) <= 5:
        for l in lines:
            m = re.match(r'ldr r(\w), \w+ ; =(\w+)', l)
            if m and ('bx r' in ' '.join(lines)):
                target = m.group(2)
                return f"void {name}(void) {{\n    {target}();\n}}", True
    
    # Too complex - preserve as asm
    asm_block = '\\n    '.join(lines)
    return f"""void {name}(void) {{
    /* Original at {addr} */
    /* Requires manual decompilation - {len(lines)} instructions */
    #ifdef MWERKS
    asm(
        "{asm_block}"
    );
    #endif
}}""", False

def process_file(c_file):
    """Process a single file. Returns (translated, total)."""
    path = os.path.join(SRC_DIR, c_file)
    if not os.path.exists(path):
        return 0, 0
    
    with open(path) as f:
        content = f.read()
    
    if '#ifdef MWERKS' not in content:
        return 0, 0
    
    asm_file = c_file.replace('.c', '.s')
    asm = get_asm(asm_file)
    if not asm:
        return 0, 0
    
    funcs = parse_funcs(asm)
    if not funcs:
        return 0, 0
    
    # Get existing includes
    includes = []
    for line in content.split('\n'):
        m = re.match(r'#include\s+"([^"]+)"', line)
        if m:
            includes.append(m.group(1))
    if not includes:
        includes = ['global.h']
    
    # Check header for forward declarations
    header = get_header(c_file)
    
    # Build new file
    parts = [f"/* Decompiled from asm/{asm_file} */"]
    for inc in includes:
        parts.append(f'#include "{inc}"')
    parts.append('')
    
    translated = 0
    total = len(funcs)
    
    for func in funcs:
        c_code, was_trans = translate_func(func)
        if was_trans:
            translated += 1
        parts.append(c_code)
        parts.append('')
    
    new_content = '\n'.join(parts)
    
    # Only write if we translated something
    if translated > 0:
        with open(path, 'w') as f:
            f.write(new_content)
    
    return translated, total

def main():
    r = subprocess.run(["git", "ls-files", "asm/*.s"],
                      capture_output=True, text=True, cwd=PROJECT_DIR)
    asm_files = [f.replace('asm/', '').replace('.s', '.c') for f in r.stdout.strip().split('\n') if f]
    
    total_trans = 0
    total_funcs = 0
    files_done = 0
    
    for cf in sorted(asm_files):
        trans, total = process_file(cf)
        if trans > 0:
            total_trans += trans
            total_funcs += total
            files_done += 1
            pct = 100*trans//total if total else 0
            print(f"  {cf}: {trans}/{total} ({pct}%)")
    
    print(f"\nTotal: {total_trans}/{total_funcs} functions translated in {files_done} files")

if __name__ == '__main__':
    main()
