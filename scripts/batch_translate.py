#!/usr/bin/env python3
"""
Batch translator for asm blocks in .c files.
Phase 1: Translate simple wrapper functions (single bl call)
Phase 2: Translate simple memory operations
Phase 3: Translate functions with basic control flow
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

def classify_func(lines):
    """Classify a function and return (type, translation)."""
    # Filter boilerplate
    core = [l for l in lines if not l.startswith(('push','pop','bx ','nop','add sp','sub sp','ldr r0, _','ldr r1, _','ldr r2, _','ldr r3, _','ldr r4, _','ldr r5, _','ldr r6, _','ldr r7, _'))]
    # Remove label lines
    core = [l for l in core if not re.match(r'^\w+:$', l)]
    
    bl_calls = [(l, l.split()[1].rstrip(',')) for l in core if l.startswith('bl ') or l.startswith('blx ')]
    
    # Type 1: Simple wrapper - just one bl call
    if len(bl_calls) == 1 and len(core) <= 5:
        target = bl_calls[0][1]
        if not target.startswith('r') and not target.startswith('_'):
            return 'wrapper', f'void {{NAME}}(void) {{\n    {target}();\n}}'
    
    # Type 2: Wrapper with one bl + return value setup
    if len(bl_calls) == 1 and len(core) <= 10:
        target = bl_calls[0][1]
        if not target.startswith('r') and not target.startswith('_'):
            # Check if it loads a constant and calls
            has_mov = any(l.startswith('mov r0, #') or l.startswith('mov r1, #') for l in core)
            if has_mov:
                args = []
                for l in core:
                    m = re.match(r'mov r(\d), #(0x[0-9a-fA-F]+|\d+)', l)
                    if m:
                        args.append((int(m.group(1)), m.group(2)))
                arg_str = ', '.join(str(v) for _, v in sorted(args))
                if arg_str:
                    return 'wrapper_args', f'void {{NAME}}(void) {{\n    {target}({arg_str});\n}}'
            return 'wrapper', f'void {{NAME}}(void) {{\n    {target}();\n}}'
    
    return 'complex', None

def translate_file(c_file, all_funcs):
    """Translate simple functions in a .c file."""
    path = os.path.join(SRC_DIR, c_file)
    if not os.path.exists(path):
        return 0, 0
    
    with open(path) as f:
        content = f.read()
    
    if '#ifdef MWERKS' not in content:
        return 0, 0
    
    translated = 0
    total_asm = content.count('#ifdef MWERKS')
    
    for func_info in all_funcs:
        fname = func_info['name']
        ftype, template = classify_func(func_info['lines'])
        
        if ftype == 'complex':
            continue
        
        c_code = template.replace('{{NAME}}', fname)
        
        # Find the asm block for this function
        # Pattern: void funcname(...) { ... #ifdef MWERKS asm(...) #endif }
        pattern = rf'(void\s+{re.escape(fname)}\s*\([^)]*\)\s*\{{)\s*(/\*[^*]*\*/\s*)*#ifdef MWERKS\s+asm\(\s*"[^"]*"\s*\);\s*#endif\s*(\}})'
        
        def replacer(m):
            return m.group(1) + '\n    ' + c_code.replace('void ' + fname + '(void) {', '').replace('}', '').strip() + '\n' + m.group(3)
        
        new_content, n = re.subn(pattern, replacer, content, flags=re.DOTALL)
        if n > 0:
            content = new_content
            translated += 1
    
    if translated > 0:
        with open(path, 'w') as f:
            f.write(content)
    
    return translated, total_asm

def main():
    r = subprocess.run(["git", "ls-files", "asm/*.s"],
                      capture_output=True, text=True, cwd=PROJECT_DIR)
    asm_files = [f.replace('asm/', '').replace('.s', '.c') for f in r.stdout.strip().split('\n') if f]
    
    total_trans = 0
    total_files = 0
    
    for cf in sorted(asm_files):
        asm_file = cf.replace('.c', '.s')
        asm = get_asm(asm_file)
        if not asm:
            continue
        
        funcs = parse_funcs(asm)
        trans, total = translate_file(cf, funcs)
        if trans > 0:
            total_trans += trans
            total_files += 1
            print(f"  {cf}: {trans}/{total} translated")
    
    print(f"\nTotal: {total_trans} functions translated in {total_files} files")

if __name__ == '__main__':
    main()
