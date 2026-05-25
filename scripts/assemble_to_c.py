#!/usr/bin/env python3
"""
Batch convert assembly files from git to C source files.
Reads assembly from git (HEAD:asm/<file>.s) and generates C implementations.
Handles:
  - Data-only files (.rodata sections with byte/word arrays)
  - Simple function files (translates Thumb/ARM assembly to C stubs with comments)
"""

import os
import re
import subprocess
import sys

PROJECT_DIR = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
SRC_DIR = os.path.join(PROJECT_DIR, "src")

def get_asm_from_git(asm_filename):
    """Get assembly content from git."""
    try:
        result = subprocess.run(
            ["git", "show", f"HEAD:asm/{asm_filename}"],
            capture_output=True, text=True, cwd=PROJECT_DIR,
            timeout=30
        )
        if result.returncode == 0:
            return result.stdout
    except subprocess.TimeoutExpired:
        pass
    return None

def parse_data_section(asm_content):
    """Parse .rodata/data sections and generate C array declarations."""
    lines = asm_content.split('\n')
    c_lines = []
    current_label = None
    current_data = []
    
    i = 0
    while i < len(lines):
        line = lines[i].strip()
        
        # Match label definitions
        label_match = re.match(r'^(\w+):\s*(;.*)?$', line)
        if label_match and not line.startswith('.'):
            # Flush previous data
            if current_label and current_data:
                c_lines.append(format_data_array(current_label, current_data))
            current_label = label_match.group(1)
            current_data = []
            i += 1
            continue
        
        # Parse data directives
        if line.startswith('.byte'):
            values = re.findall(r'0x[0-9A-Fa-f]+', line)
            current_data.extend([f"0x{v[2:]}" for v in values])
        elif line.startswith('.word'):
            values = re.findall(r'0x[0-9A-Fa-f]+|\w+', line)
            # Filter out non-hex symbols
            current_data.extend([v for v in values if v.startswith('0x')])
            # Keep symbol references
            for v in values:
                if not v.startswith('0x') and not v.startswith('.'):
                    current_data.append(v)
        elif line.startswith('.short'):
            values = re.findall(r'0x[0-9A-Fa-f]+', line)
            current_data.extend([f"0x{v[2:]}" for v in values])
        elif line.startswith('.ascii') or line.startswith('.string'):
            # String data
            match = re.match(r'\.(?:ascii|string)\s*"(.*)"', line)
            if match:
                current_data.append(f'/* "{match.group(1)}" */')
        
        i += 1
    
    # Flush last data
    if current_label and current_data:
        c_lines.append(format_data_array(current_label, current_data))
    
    return c_lines

def format_data_array(label, data):
    """Format a data array as C code."""
    if not data:
        return f"/* {label} - empty */"
    
    # Determine type based on data patterns
    all_hex = all(d.startswith('0x') for d in data)
    if not all_hex:
        # Mixed symbols - use u32 array
        return f"/* {label} - contains symbol references, needs manual decomp */"
    
    # Check if values fit in u8
    all_u8 = all(int(d, 16) < 256 for d in data)
    if all_u8 and len(data) > 4:
        dtype = "u8"
    elif len(data) <= 4:
        dtype = "u32"
    else:
        dtype = "u32"
    
    # Format as array
    values_per_line = 16 if dtype == "u8" else 4
    result = [f"{dtype} {label}[] = {{"]
    
    for i in range(0, len(data), values_per_line):
        chunk = data[i:i+values_per_line]
        result.append(f"    {', '.join(chunk)}{'//' if i + values_per_line < len(data) else ''}")
    
    result.append("};")
    return '\n'.join(result)

def has_functions(asm_content):
    """Check if assembly contains function definitions."""
    return bool(re.search(r'thumb_func_start|arm_func_start', asm_content))

def is_data_only(asm_content):
    """Check if assembly is data-only (no functions)."""
    return '.rodata' in asm_content and not has_functions(asm_content)

def process_file(c_filename):
    """Process a single C file, filling in data from assembly."""
    asm_filename = c_filename.replace('.c', '.s')
    c_path = os.path.join(SRC_DIR, c_filename)
    
    if not os.path.exists(c_path):
        return False, "C file not found"
    
    # Check if it's a stub
    with open(c_path, 'r') as f:
        c_content = f.read()
    
    if 'stub' not in c_content.lower():
        return False, "Not a stub"
    
    # Get assembly from git
    asm_content = get_asm_from_git(asm_filename)
    if asm_content is None:
        return False, "Assembly not found in git"
    
    # Handle data-only files
    if is_data_only(asm_content):
        data_lines = parse_data_section(asm_content)
        if data_lines:
            new_content = f'/* Decompiled from asm/{asm_filename} */\n\n#include "global.h"\n\n'
            new_content += '\n\n'.join(data_lines) + '\n'
            with open(c_path, 'w') as f:
                f.write(new_content)
            return True, f"Wrote {len(data_lines)} data arrays"
    
    return False, "Function file - needs manual decomp"

def main():
    if len(sys.argv) > 1:
        # Process specific files
        files = sys.argv[1:]
    else:
        # Find all stub files
        files = []
        for f in os.listdir(SRC_DIR):
            if f.endswith('.c'):
                filepath = os.path.join(SRC_DIR, f)
                with open(filepath, 'r') as fh:
                    if 'stub' in fh.read().lower():
                        files.append(f)
    
    success = 0
    failed = 0
    
    for f in sorted(files):
        ok, msg = process_file(f)
        if ok:
            print(f"OK: {f} - {msg}")
            success += 1
        else:
            print(f"SKIP: {f} - {msg}")
            failed += 1
    
    print(f"\nDone: {success} converted, {failed} skipped")

if __name__ == '__main__':
    main()
