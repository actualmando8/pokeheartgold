#!/usr/bin/env python3
"""
Safe batch translator: Only translates simple wrapper functions.
A simple wrapper is one that:
1. Has exactly one bl/blx call to a known function
2. Has fewer than 15 instructions total
3. Returns the result of that call (or void)

This avoids generating empty function bodies.
"""

import os
import re
import subprocess
import sys

PROJECT_DIR = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
SRC_DIR = os.path.join(PROJECT_DIR, "src")

def get_asm_from_git(asm_filename):
    try:
        result = subprocess.run(
            ["git", "show", f"HEAD:asm/{asm_filename}"],
            capture_output=True, text=True, cwd=PROJECT_DIR, timeout=60
        )
        return result.stdout if result.returncode == 0 else None
    except:
        return None

def parse_functions(asm_content):
    functions = {}
    current = None
    for line in asm_content.split('\n'):
        stripped = line.strip()
        m = re.match(r'\s*(?:thumb|arm)_func_start\s+(\w+)', stripped)
        if m:
            current = {'name': m.group(1), 'lines': [], 'address': ''}
            continue
        if re.match(r'\s*(?:thumb|arm)_func_end', stripped):
            if current:
                functions[current['name']] = current
                current = None
            continue
        if current:
            m2 = re.match(r'^(\w+):\s*(?:;\s*(0x[0-9A-Fa-f]+))?', stripped)
            if m2 and m2.group(1) == current['name']:
                current['address'] = m2.group(2) or ''
            elif stripped and not stripped.startswith(('.balign', '.word', '.short', '.byte', '.section')):
                if not stripped.endswith(':') or stripped.startswith('bl'):
                    current['lines'].append(stripped)
    if current:
        functions[current['name']] = current
    return functions

def is_simple_wrapper(lines):
    """Check if function is a simple single-call wrapper."""
    # Filter out push/pop/bx/nop
    core = [l for l in lines if not l.startswith(('push', 'pop', 'bx ', 'nop', 'add sp', 'sub sp'))]
    
    bl_calls = [l for l in core if l.startswith('bl ') or l.startswith('blx ')]
    
    if len(bl_calls) != 1:
        return None, None, False
    
    target = bl_calls[0].split()[1].rstrip(',')
    if target.startswith('r') or target.startswith('_'):
        return None, None, False
    
    # Check if it just returns r0
    has_mov_r0 = any(l.startswith('mov r0') or l.startswith('add r0') for l in core)
    has_str = any(l.startswith('str ') for l in core)
    has_ldr = any(l.startswith('ldr ') for l in core)
    
    # Simple pass-through: bl X; bx lr (or similar)
    if len(core) <= 4 and not has_str and not has_ldr:
        return target, 'pass_through', True
    
    return None, None, False

def extract_asm_blocks_v2(c_content):
    """Extract asm blocks with better regex."""
    blocks = []
    # Match function with asm block
    pattern = r'(void\s+\w+\([^)]*\)\s*\{[^}]*?#ifdef MWERKS\s+asm\(\s*"([^"]+?)"\s*\);\s*#endif\s*\})'
    for m in re.finditer(pattern, c_content, re.DOTALL):
        func_name_m = re.search(r'void\s+(\w+)\s*\(([^)]*)\)', m.group(1))
        if func_name_m:
            blocks.append({
                'name': func_name_m.group(1),
                'params': func_name_m.group(2),
                'full': m.group(1),
                'start': m.start(),
                'end': m.end(),
            })
    return blocks

def translate_file(c_filename, original_funcs):
    c_path = os.path.join(SRC_DIR, c_filename)
    
    with open(c_path, 'r') as f:
        content = f.read()
    
    blocks = extract_asm_blocks_v2(content)
    if not blocks:
        return 0, 0
    
    translated = 0
    
    for block in reversed(blocks):
        func_name = block['name']
        orig = original_funcs.get(func_name)
        
        if orig:
            target, kind, is_simple = is_simple_wrapper(orig['lines'])
            if is_simple and target:
                # Generate simple wrapper
                c_code = f"void {func_name}(void) {{\n    {target}();\n}}"
                content = content[:block['start']] + c_code + '\n' + content[block['end']:]
                translated += 1
    
    if translated > 0:
        with open(c_path, 'w') as f:
            f.write(content)
    
    return translated, len(blocks) - translated

def main():
    if len(sys.argv) > 1:
        files = sys.argv[1:]
    else:
        files = []
        for f in sorted(os.listdir(SRC_DIR)):
            if f.endswith('.c'):
                filepath = os.path.join(SRC_DIR, f)
                with open(filepath, 'r') as fh:
                    if '#ifdef MWERKS' in fh.read():
                        files.append(f)
    
    total_translated = 0
    total_preserved = 0
    
    for f in files:
        asm_filename = f.replace('.c', '.s')
        asm_content = get_asm_from_git(asm_filename)
        if not asm_content:
            continue
        
        original_funcs = parse_functions(asm_content)
        translated, preserved = translate_file(f, original_funcs)
        
        if translated > 0:
            print(f"OK: {f} - {translated} translated, {preserved} preserved")
            total_translated += translated
            total_preserved += preserved
    
    print(f"\nDone: {total_translated} functions translated, {total_preserved} preserved")

if __name__ == '__main__':
    main()
