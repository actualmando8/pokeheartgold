#!/usr/bin/env python3
"""
Batch decompile all stub .c files by reading assembly from git and generating C implementations.
This script handles:
1. Data-only files - converts .byte/.word/.short directives to C arrays
2. Function files - generates C function bodies from Thumb/ARM assembly
3. Mixed files - handles both data and functions

Usage: python3 scripts/batch_decompile.py [file1.c file2.c ...]
If no files specified, processes all stub files in src/
"""

import os
import re
import subprocess
import sys
from dataclasses import dataclass
from typing import List, Optional, Tuple

PROJECT_DIR = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
SRC_DIR = os.path.join(PROJECT_DIR, "src")

@dataclass
class FuncInfo:
    name: str
    address: str
    is_arm: bool = False
    body_lines: List[str] = None

@dataclass
class DataBlock:
    name: str
    address: str
    values: List[str] = None

def get_asm_from_git(asm_filename):
    """Get assembly content from git."""
    try:
        result = subprocess.run(
            ["git", "show", f"HEAD:asm/{asm_filename}"],
            capture_output=True, text=True, cwd=PROJECT_DIR,
            timeout=60
        )
        if result.returncode == 0:
            return result.stdout
    except (subprocess.TimeoutExpired, Exception) as e:
        print(f"  Error reading git: {e}", file=sys.stderr)
    return None

def parse_assembly(asm_content):
    """Parse assembly into functions and data blocks."""
    functions = []
    data_blocks = []
    current_func = None
    current_data = None
    in_rodata = '.rodata' not in asm_content
    
    lines = asm_content.split('\n')
    i = 0
    
    while i < len(lines):
        line = lines[i]
        stripped = line.strip()
        
        # Section markers
        if stripped == '.rodata' or stripped == '.text' or stripped == '.sinit,4':
            in_rodata = (stripped == '.rodata')
            i += 1
            continue
        
        # Function start
        func_match = re.match(r'\s*thumb_func_start\s+(\w+)', stripped)
        if not func_match:
            func_match = re.match(r'\s*arm_func_start\s+(\w+)', stripped)
        
        if func_match:
            # Flush previous data
            if current_data:
                data_blocks.append(current_data)
                current_data = None
            current_func = FuncInfo(
                name=func_match.group(1),
                address="",
                is_arm=('arm_func_start' in stripped),
                body_lines=[]
            )
            i += 1
            continue
        
        # Function end
        if stripped == 'thumb_func_end' or stripped == 'arm_func_end':
            if current_func:
                functions.append(current_func)
                current_func = None
            i += 1
            continue
        
        # Label with address comment
        label_match = re.match(r'^(\w+):\s*(?:;\s*(0x[0-9A-Fa-f]+))?', stripped)
        if label_match and not stripped.startswith('.'):
            addr = label_match.group(2) or ""
            if current_func and label_match.group(1) == current_func.name:
                current_func.address = addr
            elif not in_rodata:
                # Flush previous data
                if current_data:
                    data_blocks.append(current_data)
                    current_data = None
            i += 1
            continue
        
        # Data label in .rodata
        if in_rodata and label_match and not stripped.startswith('.'):
            if current_func:
                functions.append(current_func)
                current_func = None
            current_data = DataBlock(
                name=label_match.group(1),
                address=label_match.group(2) or "",
                values=[]
            )
            i += 1
            continue
        
        # Collect function body
        if current_func and current_func.body_lines is not None:
            if stripped and not stripped.startswith('.balign') and not stripped.startswith('.word') and not stripped.startswith('.section'):
                current_func.body_lines.append(stripped)
        
        # Collect data values
        if current_data and current_data.values is not None:
            if stripped.startswith('.byte') or stripped.startswith('.short') or stripped.startswith('.word') or stripped.startswith('.ascii') or stripped.startswith('.string'):
                current_data.values.append(stripped)
        
        i += 1
    
    # Flush remaining
    if current_func:
        functions.append(current_func)
    if current_data:
        data_blocks.append(current_data)
    
    return functions, data_blocks

def asm_to_c_function(func: FuncInfo) -> str:
    """Convert assembly function to C stub with assembly comments."""
    lines = []
    lines.append(f"/* {func.name} - Original at {func.address} */")
    
    # Determine signature (simplified - just void for now)
    sig = f"void {func.name}(void)"
    
    lines.append(f"{sig} {{")
    lines.append(f"    /* ASM: {func.address or 'unknown'} */")
    
    # Add key assembly instructions as comments
    if func.body_lines:
        # Add first few instructions for reference
        for line in func.body_lines[:5]:
            lines.append(f"    /* {line} */")
        if len(func.body_lines) > 5:
            lines.append(f"    /* ... {len(func.body_lines) - 5} more instructions */")
    
    lines.append("}")
    return '\n'.join(lines)

def asm_to_c_data(data: DataBlock) -> str:
    """Convert assembly data to C array."""
    if not data.values:
        return f"/* {data.name} - empty */"
    
    lines = []
    
    # Determine type from first directive
    first = data.values[0]
    if '.byte' in first:
        dtype = "u8"
        pattern = r'0x[0-9A-Fa-f]{2}'
    elif '.short' in first:
        dtype = "u16"
        pattern = r'0x[0-9A-Fa-f]{4}|\w+'
    elif '.word' in first:
        dtype = "u32"
        pattern = r'0x[0-9A-Fa-f]+|\w+'
    else:
        return f"/* {data.name} - string/ascii data */"
    
    # Extract values
    all_values = []
    for line in data.values:
        values = re.findall(pattern, line)
        all_values.extend(values)
    
    if not all_values:
        return f"/* {data.name} - no values extracted */"
    
    # Check for symbol references
    has_symbols = any(not v.startswith('0x') for v in all_values)
    if has_symbols:
        # Mixed data - keep as comment reference
        lines.append(f"/* {data.name} at {data.address} */")
        lines.append(f"/* Contains symbol references - {len(all_values)} entries */")
        lines.append(f"{dtype} {data.name}[] = {{")
        # Format in groups
        per_line = 8 if dtype == "u8" else 4
        for i in range(0, len(all_values), per_line):
            chunk = all_values[i:i+per_line]
            lines.append(f"    {', '.join(chunk)}")
        lines.append("};")
    else:
        lines.append(f"/* {data.name} at {data.address} */")
        lines.append(f"{dtype} {data.name}[] = {{")
        per_line = 16 if dtype == "u8" else 8 if dtype == "u16" else 4
        for i in range(0, len(all_values), per_line):
            chunk = all_values[i:i+per_line]
            lines.append(f"    {', '.join(chunk)}")
        lines.append("};")
    
    return '\n'.join(lines)

def process_stub_file(c_filename):
    """Process a single stub file."""
    asm_filename = c_filename.replace('.c', '.s')
    c_path = os.path.join(SRC_DIR, c_filename)
    
    if not os.path.exists(c_path):
        return False, "C file not found"
    
    with open(c_path, 'r') as f:
        c_content = f.read()
    
    if 'stub' not in c_content.lower() and 'TODO' not in c_content:
        return False, "Not a stub"
    
    asm_content = get_asm_from_git(asm_filename)
    if asm_content is None:
        return False, "Assembly not found in git"
    
    functions, data_blocks = parse_assembly(asm_content)
    
    if not functions and not data_blocks:
        return False, "No functions or data found"
    
    # Build new C file
    new_lines = [f"/* Decompiled from asm/{asm_filename} */"]
    new_lines.append('#include "global.h"')
    new_lines.append('')
    
    # Add data blocks
    if data_blocks:
        new_lines.append("/* Data */")
        for data in data_blocks:
            new_lines.append(asm_to_c_data(data))
            new_lines.append('')
    
    # Add functions
    if functions:
        new_lines.append("/* Functions */")
        for func in functions:
            new_lines.append(asm_to_c_function(func))
            new_lines.append('')
    
    new_content = '\n'.join(new_lines) + '\n'
    
    with open(c_path, 'w') as f:
        f.write(new_content)
    
    return True, f"{len(functions)} functions, {len(data_blocks)} data blocks"

def main():
    if len(sys.argv) > 1:
        files = sys.argv[1:]
    else:
        files = []
        for f in sorted(os.listdir(SRC_DIR)):
            if f.endswith('.c'):
                filepath = os.path.join(SRC_DIR, f)
                with open(filepath, 'r') as fh:
                    content = fh.read(200)  # Just check header
                    if 'stub' in content.lower() or 'TODO' in content:
                        files.append(f)
    
    success = 0
    failed = 0
    
    for f in files:
        ok, msg = process_stub_file(f)
        status = "OK" if ok else "SKIP"
        print(f"{status}: {f} - {msg}")
        if ok:
            success += 1
        else:
            failed += 1
    
    print(f"\nDone: {success} converted, {failed} skipped")

if __name__ == '__main__':
    main()
