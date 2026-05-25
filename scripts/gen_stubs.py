#!/usr/bin/env python3
"""Generate stub C files from remaining .s files for incremental decompilation."""
import os, re, glob, sys

def extract_functions(sfile):
    """Extract function names and addresses from assembly file."""
    with open(sfile) as f:
        content = f.read()
    
    funcs = []
    # Match thumb_func_start and arm_func_start
    for m in re.finditer(r'(?:thumb|arm)_func_start\s+(\w+)', content):
        name = m.group(1)
        # Find address
        addr_m = re.search(r'\w+:?\s*;\s*0x([0-9A-Fa-f]+)', content[m.start():m.start()+200])
        addr = f"0x{addr_m.group(1)}" if addr_m else "0x00000000"
        funcs.append((name, addr))
    
    # Also extract data sections
    data = []
    for m in re.finditer(r'^(\w+):\s*;\s*0x([0-9A-Fa-f]+)', content, re.MULTILINE):
        name, addr = m.group(1), f"0x{m.group(2)}"
        if name not in [f[0] for f in funcs]:
            data.append((name, addr))
    
    return funcs, data

def generate_stub(sfile, funcs, data):
    """Generate a stub C file."""
    name = os.path.basename(sfile).replace('.s', '')
    lines = [f'/* Auto-generated stub for {name} - incomplete decompilation */\n']
    lines.append('#include "global.h"\n')
    
    # Forward declarations
    for fname, addr in funcs:
        lines.append(f'/* {addr} */')
        lines.append(f'void {fname}(void);\n')
    
    # Stub implementations
    for fname, addr in funcs:
        lines.append(f'/* {addr} - TODO: decompile */')
        lines.append(f'void {fname}(void) {{')
        lines.append(f'    // ASM: Original at {addr}')
        lines.append(f'}}\n')
    
    # Data
    if data:
        lines.append('/* Data */\n')
        for dname, addr in data:
            lines.append(f'/* {addr} */')
            lines.append(f'u8 {dname}[0]; // TODO: determine size\n')
    
    return '\n'.join(lines)

def main():
    s_files = sorted(glob.glob('asm/*.s'))
    count = 0
    for sfile in s_files:
        name = os.path.basename(sfile).replace('.s', '')
        cfile = f'src/{name}.c'
        # Skip if C file already exists
        if os.path.exists(cfile):
            continue
        
        funcs, data = extract_functions(sfile)
        if not funcs and not data:
            continue
        
        stub = generate_stub(sfile, funcs, data)
        with open(cfile, 'w') as f:
            f.write(stub)
        count += 1
        print(f'Created {cfile} ({len(funcs)} funcs, {len(data)} data)')
    
    print(f'\nCreated {count} stub files')

if __name__ == '__main__':
    main()