#!/usr/bin/env python3
"""
Fix empty stubs by extracting assembly from .s files.
For functions that have no asm comments, extract from asm/*.s files.
Also clean up the remaining TODO: decompile stubs.
"""

import os
import re
import sys

def extract_asm_from_s_file(s_path, func_name):
    """Extract assembly for a function from a .s file."""
    try:
        with open(s_path, 'r') as f:
            content = f.read()
    except:
        return None
    
    # Look for function label
    pattern = rf'\.{func_name}\s*:\s*\n((?:\s+.+\n)+)'
    m = re.search(pattern, content)
    if not m:
        # Try Thumb version
        pattern = rf'\.{func_name}\s*:\s*\n((?:\s+.+\n)+?)(?=\n\w|\n\.|\Z)'
        m = re.search(pattern, content)
    
    if m:
        lines = []
        for line in m.group(1).strip().split('\n'):
            line = line.strip()
            if line and not line.startswith('.') and not line.startswith('#'):
                # Extract instruction
                instr_match = re.match(r'\s+(\w+)\s+(.*)', line)
                if instr_match:
                    lines.append(instr_match.group(1) + ' ' + instr_match.group(2))
        return lines if lines else None
    return None

def find_s_file(func_name):
    """Find the .s file containing a function."""
    asm_dir = '../asm'
    for root, dirs, files in os.walk(asm_dir):
        for fname in files:
            if fname.endswith('.s'):
                s_path = os.path.join(root, fname)
                result = extract_asm_from_s_file(s_path, func_name)
                if result:
                    return result
    return None

def translate_inline_asm(asm_block):
    """Extract inline asm from MWERKS blocks."""
    lines = []
    in_asm = False
    for line in asm_block.split('\n'):
        line = line.strip()
        if 'asm(' in line:
            in_asm = True
            continue
        if in_asm:
            if line.startswith(')'):
                break
            if line and not line.startswith('//'):
                lines.append(line)
    return lines

def process_file(filepath):
    """Process a single C file."""
    with open(filepath, 'r') as f:
        content = f.read()
    
    # Find empty stubs
    pattern = r'((?:u32|void|u16|u8|s32|s16|s8|BOOL)\s+(\w+)\s*\([^)]*\)\s*\{\s*\n\s*// TODO: decompile\s*\n\})'
    
    changed = False
    
    def replace_stub(match):
        nonlocal changed
        full = match.group(1)
        sig_type = full.split()[0]
        func_name = match.group(2)
        
        # Try to find assembly
        asm_lines = find_s_file(func_name)
        
        if asm_lines:
            changed = True
            # Generate stub with asm comments
            body = "    " + "\n    ".join("// " + l for l in asm_lines) + "\n"
            return f"{sig_type} {func_name}(...) {{\n{body}    // TODO: decompile\n}}"
        else:
            # Just leave as empty stub but remove TODO
            return f"{sig_type} {func_name}(...) {{\n    // TODO: decompile\n}}"
    
    new_content = re.sub(pattern, replace_stub, content)
    
    if new_content != content:
        with open(filepath, 'w') as f:
            f.write(new_content)
        return True
    return False

def main():
    src_dir = '../src'
    count = 0
    
    for root, dirs, files in os.walk(src_dir):
        for fname in files:
            if fname.endswith('.c'):
                filepath = os.path.join(root, fname)
                if process_file(filepath):
                    count += 1
    
    print(f"Processed {count} files")

if __name__ == '__main__':
    main()
