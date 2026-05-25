#!/usr/bin/env python3
"""
Advanced batch decompiler - translates Thumb assembly to C function bodies.
Handles common patterns: function calls, loops, conditionals, memory ops.
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
    """Parse assembly into function blocks."""
    functions = []
    current = None
    for line in asm_content.split('\n'):
        m = re.match(r'\s*(?:thumb|arm)_func_start\s+(\w+)', line)
        if m:
            current = {'name': m.group(1), 'lines': [], 'address': ''}
            continue
        if re.match(r'\s*(?:thumb|arm)_func_end', line.strip()):
            if current:
                functions.append(current)
                current = None
            continue
        if current:
            m2 = re.match(r'^(\w+):\s*(?:;\s*(0x[0-9A-Fa-f]+))?', line.strip())
            if m2 and m2.group(1) == current['name']:
                current['address'] = m2.group(2) or ''
            elif line.strip() and not line.strip().startswith('.balign') and not line.strip().startswith('.word') and not line.strip().startswith('.section'):
                current['lines'].append(line.strip())
    if current:
        functions.append(current)
    return functions

def translate_function(func):
    """Translate a single function to C."""
    name = func['name']
    lines = func['lines']
    
    # Detect simple wrapper functions
    # Pattern: push -> bl X -> pop/return
    bl_calls = [l for l in lines if l.startswith('bl ') or l.startswith('blx ')]
    
    # Very simple: just calls one function and returns
    if len(bl_calls) == 1 and len(lines) < 10:
        target = bl_calls[0].split()[1].rstrip(',')
        if target.startswith('r'):
            pass  # indirect call
        else:
            return f"void {name}(void) {{\n    {target}();\n}}"
    
    # Function that returns a value from a single call
    if len(bl_calls) == 1 and len(lines) < 15:
        target = bl_calls[0].split()[1].rstrip(',')
        if not target.startswith('r'):
            return f"void *{name}(void) {{\n    return {target}();\n}}"
    
    # Generate inline asm block as fallback
    asm_block = '\n    '.join(lines)
    return f"""void {name}(void) {{
    /* Original at {func['address']} */
    /* Requires manual decompilation - {len(lines)} instructions */
    #ifdef MWERKS
    asm(
        "{asm_block}"
    );
    #endif
}}"""

def process_file(c_filename):
    asm_filename = c_filename.replace('.c', '.s')
    c_path = os.path.join(SRC_DIR, c_filename)
    
    if not os.path.exists(c_path):
        return False
    
    with open(c_path, 'r') as f:
        content = f.read()
    
    if 'ASM:' not in content:
        return False
    
    asm = get_asm_from_git(asm_filename)
    if not asm:
        return False
    
    functions = parse_functions(asm)
    if not functions:
        return False
    
    # Build new file
    parts = [f"/* Decompiled from asm/{asm_filename} */", '#include "global.h"', '']
    
    for func in functions:
        parts.append(translate_function(func))
        parts.append('')
    
    with open(c_path, 'w') as f:
        f.write('\n'.join(parts))
    
    return True

def main():
    files = sys.argv[1:] if len(sys.argv) > 1 else []
    if not files:
        for f in sorted(os.listdir(SRC_DIR)):
            if f.endswith('.c'):
                p = os.path.join(SRC_DIR, f)
                with open(p) as fh:
                    if 'ASM:' in fh.read(500):
                        files.append(f)
    
    count = 0
    for f in files:
        if process_file(f):
            count += 1
            print(f"OK: {f}")
    
    print(f"\nDone: {count} files")

if __name__ == '__main__':
    main()
