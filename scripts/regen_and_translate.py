#!/usr/bin/env python3
"""
Regenerate all stub .c files from asm/*.s in git, then translate simple functions.
"""
import os, re, subprocess, sys

PROJECT_DIR = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
SRC_DIR = os.path.join(PROJECT_DIR, "src")

def get_asm(asm_file):
    try:
        r = subprocess.run(["git", "show", f"HEAD:asm/{asm_file}"],
                          capture_output=True, text=True, cwd=PROJECT_DIR, timeout=60)
        return r.stdout if r.returncode == 0 else None
    except: return None

def parse_funcs(asm):
    funcs = []
    cur = None
    for line in asm.split('\n'):
        s = line.strip()
        m = re.match(r'\s*(?:thumb|arm)_func_start\s+(\w+)', s)
        if m:
            cur = {'name': m.group(1), 'lines': [], 'addr': ''}
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

def is_simple_wrapper(lines):
    core = [l for l in lines if not l.startswith(('push','pop','bx ','nop','add sp','sub sp'))]
    bls = [l for l in core if l.startswith('bl ') or l.startswith('blx ')]
    if len(bls) != 1: return None
    t = bls[0].split()[1].rstrip(',')
    if t.startswith('r') or t.startswith('_'): return None
    if len(core) <= 4: return t
    return None

def regen_file(c_file):
    asm_file = c_file.replace('.c', '.s')
    asm = get_asm(asm_file)
    if not asm: return 0
    funcs = parse_funcs(asm)
    if not funcs: return 0
    
    lines = [f"/* Decompiled from asm/{asm_file} */", '#include "global.h"', '']
    translated = 0
    
    for f in funcs:
        target = is_simple_wrapper(f['lines'])
        if target:
            lines.append(f"void {f['name']}(void) {{")
            lines.append(f"    {target}();")
            lines.append("}")
            lines.append('')
            translated += 1
        else:
            asm_block = '\n    '.join(f['lines'])
            lines.append(f"void {f['name']}(void) {{")
            lines.append(f"    /* Original at {f['addr']} */")
            lines.append(f"    /* Requires manual decompilation - {len(f['lines'])} instructions */")
            lines.append("    #ifdef MWERKS")
            lines.append(f'    asm(')
            lines.append(f'        "{asm_block}"')
            lines.append("    );")
            lines.append("    #endif")
            lines.append("}")
            lines.append('')
    
    path = os.path.join(SRC_DIR, c_file)
    with open(path, 'w') as fh:
        fh.write('\n'.join(lines))
    return translated

def main():
    # Get all asm files from git
    r = subprocess.run(["git", "ls-files", "asm/*.s"],
                      capture_output=True, text=True, cwd=PROJECT_DIR)
    asm_files = [f.replace('asm/', '').replace('.s', '.c') for f in r.stdout.strip().split('\n') if f]
    
    # Phase 1: Regenerate only empty/untracked files
    regen_total = 0
    regen_trans = 0
    for cf in sorted(asm_files):
        path = os.path.join(SRC_DIR, cf)
        # Only regenerate if file is empty or doesn't exist
        if not os.path.exists(path) or os.path.getsize(path) < 50:
            t = regen_file(cf)
            regen_total += 1
            regen_trans += t
    
    # Phase 2: Translate simple wrappers in ALL files with asm blocks
    trans_total = 0
    for cf in sorted(asm_files):
        path = os.path.join(SRC_DIR, cf)
        if not os.path.exists(path) or os.path.getsize(path) < 50:
            continue
        with open(path) as fh:
            content = fh.read()
        if '#ifdef MWERKS' not in content:
            continue
        # Try to translate simple wrappers
        asm_file = cf.replace('.c', '.s')
        asm = get_asm(asm_file)
        if not asm:
            continue
        funcs = parse_funcs(asm)
        modified = False
        new_content = content
        for f in funcs:
            target = is_simple_wrapper(f['lines'])
            if target:
                # Find and replace the asm block for this function
                pattern = rf'void\s+{re.escape(f["name"])}\s*\([^)]*\)\s*\{{[^}}]*#ifdef MWERKS[^}}]*#endif\s*\}}'
                replacement = f'void {f["name"]}(void) {{\n    {target}();\n}}'
                new_content, n = re.subn(pattern, replacement, new_content, flags=re.DOTALL)
                if n > 0:
                    trans_total += 1
                    modified = True
        if modified:
            with open(path, 'w') as fh:
                fh.write(new_content)
    
    print(f"Phase 1: Regenerated {regen_total} files, {regen_trans} simple funcs")
    print(f"Phase 2: Translated {trans_total} simple wrapper funcs in existing files")

if __name__ == '__main__':
    main()
