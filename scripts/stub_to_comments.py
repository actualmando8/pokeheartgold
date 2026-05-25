#!/usr/bin/env python3
"""
Convert #ifdef MWERKS asm blocks to C stubs with asm as comments.
Line-by-line parser for robustness.
"""
import os, re

PROJECT_DIR = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
SRC_DIR = os.path.join(PROJECT_DIR, "src")

def process_file(c_file):
    """Convert asm blocks to commented stubs."""
    path = os.path.join(SRC_DIR, c_file)
    if not os.path.exists(path):
        return 0
    
    with open(path) as f:
        lines = f.readlines()
    
    if not any('#ifdef MWERKS' in l for l in lines):
        return 0
    
    result = []
    i = 0
    converted = 0
    
    while i < len(lines):
        line = lines[i]
        
        # Check if we're entering a function with asm
        if re.match(r'\s*(?:void|u8|u16|u32|s8|s16|s32|BOOL)\s+\w+\s*\(', line):
            # Collect the function header
            func_header = line.rstrip('\n')
            i += 1
            
            # Collect comments and look for asm block
            comments = []
            found_asm = False
            asm_lines = []
            brace_count = 1  # opening brace from header or next line
            
            # Check if header has opening brace
            if '{' in func_header:
                pass
            else:
                while i < len(lines) and '{' not in lines[i]:
                    func_header += lines[i].rstrip('\n')
                    i += 1
                if i < len(lines):
                    func_header += lines[i].rstrip('\n')
                    i += 1
            
            # Now collect function body
            body_lines = []
            while i < len(lines) and brace_count > 0:
                l = lines[i].rstrip('\n')
                if '{' in l:
                    brace_count += l.count('{')
                if '}' in l:
                    brace_count -= l.count('}')
                
                if '#ifdef MWERKS' in l:
                    found_asm = True
                    i += 1
                    # Collect asm string
                    while i < len(lines):
                        al = lines[i].rstrip('\n')
                        if '#endif' in al:
                            i += 1
                            break
                        # Extract asm from string
                        m = re.search(r'"([^"]*)"', al)
                        if m:
                            asm_lines.extend(m.group(1).split('\\n'))
                        i += 1
                    continue
                
                body_lines.append(l)
                i += 1
            
            if found_asm:
                converted += 1
                # Generate stub with asm as comments
                close = "}"
                result.append(func_header)
                for instr in asm_lines:
                    instr = instr.strip()
                    if instr and not instr.endswith(':'):
                        result.append(f"    // {instr}")
                    elif instr.endswith(':') and not instr.startswith('bl'):
                        result.append(f"    // --- {instr} ---")
                result.append(f"    // TODO: decompile")
                result.append(close)
                result.append("")
            else:
                # Keep original
                result.append(func_header)
                result.extend(body_lines)
                result.append("")
            continue
        
        result.append(line.rstrip('\n') if line.endswith('\n') else line)
        i += 1
    
    if converted > 0:
        with open(path, 'w') as f:
            f.write('\n'.join(result) + '\n')
    
    return converted

def main():
    total = 0
    files = 0
    for f in sorted(os.listdir(SRC_DIR)):
        if f.endswith('.c'):
            c = process_file(f)
            if c > 0:
                total += c
                files += 1
                print(f"  {f}: {c} functions")
    print(f"\nTotal: {total} functions in {files} files")

if __name__ == '__main__':
    main()
