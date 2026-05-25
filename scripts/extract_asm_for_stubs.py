#!/usr/bin/env python3
"""
Extract assembly from .s files for remaining stub functions.
Populate empty stubs with asm comments so they can be translated.
"""

import os
import re

def find_asm_for_function(func_name):
    """Search all .s files for the function and extract instructions."""
    asm_dir = '../asm'
    instructions = []
    
    for root, dirs, files in os.walk(asm_dir):
        for fname in files:
            if not fname.endswith('.s'):
                continue
            s_path = os.path.join(root, fname)
            try:
                with open(s_path, 'r') as f:
                    content = f.read()
            except:
                continue
            
            # Look for function label (with . prefix)
            # Pattern: .funcname:\n  instruction\n  instruction\n  ...
            pattern = rf'\.{func_name}\s*:\s*\n'
            pos = content.find('.' + func_name)
            if pos == -1:
                # Try without dot
                pos = content.find(func_name)
                if pos == -1:
                    continue
                # Check if followed by :
                colon_pos = content.find(':', pos)
                if colon_pos == -1 or colon_pos - pos > 10:
                    continue
            
            # Find the start of instructions after the label
            newline_pos = content.find('\n', pos)
            if newline_pos == -1:
                continue
            
            # Extract instructions until next label or end
            instr_start = newline_pos + 1
            instr_end = len(content)
            
            # Find next label
            next_label = re.search(r'\n\.\w+\s*:', content[instr_start:])
            if next_label:
                instr_end = instr_start + next_label.start()
            
            block = content[instr_start:instr_end]
            
            for line in block.split('\n'):
                line = line.strip()
                if not line or line.startswith('.') or line.startswith('#'):
                    continue
                # Extract instruction (remove leading whitespace and labels)
                parts = line.split(None, 1)
                if parts:
                    instr = parts[-1].rstrip(':')  # Remove trailing colon if any
                    if instr and not instr.startswith('.'):
                        instructions.append(instr)
            
            if instructions:
                break
        if instructions:
            break
    
    return instructions

def process_files():
    """Process all files with TODO: decompile."""
    src_dir = '../src'
    total = 0
    filled = 0
    
    for root, dirs, files in os.walk(src_dir):
        for fname in files:
            if not fname.endswith('.c'):
                continue
            filepath = os.path.join(root, fname)
            with open(filepath, 'r') as f:
                content = f.read()
            
            if '// TODO: decompile' not in content:
                continue
            
            # Find empty stubs (no asm comments)
            pattern = r'((?:u32|void|u16|u8|s32|s16|s8|BOOL)\s+(\w+)\s*\([^)]*\)\s*\{\s*\n\s*// TODO: decompile\s*\n\})'
            
            def replace_stub(match):
                nonlocal total, filled
                total += 1
                full = match.group(1)
                sig_type = full.split()[0]
                func_name = match.group(2)
                
                # Check if there are asm comments already
                if len(full.strip().split('\n')) <= 3:
                    # Empty stub, try to fill
                    asm_lines = find_asm_for_function(func_name)
                    if asm_lines:
                        filled += 1
                        body_lines = ["    " + "// " + l for l in asm_lines]
                        body = "\n".join(body_lines)
                        return f"{sig_type} {func_name}(...) {{\n{body}\n    // TODO: decompile\n}}"
            
            new_content = re.sub(pattern, replace_stub, content)
            
            if new_content != content:
                with open(filepath, 'w') as f:
                    f.write(new_content)
    
    print(f"Total empty stubs: {total}")
    print(f"Filled with asm: {filled}")

if __name__ == '__main__':
    process_files()
