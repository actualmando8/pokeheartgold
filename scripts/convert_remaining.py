#!/usr/bin/env python3
"""
Convert remaining asm blocks to cleaner stubs.
For functions we can't translate, generate proper stubs with
the asm preserved as comments for manual decompilation.
"""
import os, re

PROJECT_DIR = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
SRC_DIR = os.path.join(PROJECT_DIR, "src")
INC_DIR = os.path.join(PROJECT_DIR, "include")

def get_header(c_file):
    h_file = c_file.replace('.c', '.h')
    hpath = os.path.join(INC_DIR, h_file)
    if os.path.exists(hpath):
        with open(hpath) as f:
            return f.read()
    return None

def extract_signature(header, func_name):
    """Extract function signature from header."""
    if not header:
        return None
    for line in header.split('\n'):
        line = line.strip()
        if func_name in line and ('(' in line and ')' in line):
            # Remove trailing ; or {
            line = line.rstrip(';').rstrip()
            return line
    return None

def process_file(c_file):
    """Process a file, converting asm blocks to stubs where possible."""
    path = os.path.join(SRC_DIR, c_file)
    if not os.path.exists(path):
        return 0, 0
    
    with open(path) as f:
        content = f.read()
    
    if '#ifdef MWERKS' not in content:
        return 0, 0
    
    # Find all asm blocks
    asm_pattern = re.compile(
        r'(void|u8|u16|u32|s8|s16|s32|BOOL)\s+(\w+)\s*\([^)]*\)\s*\{[^}]*'
        r'//#ifdef MWERKS\s*asm\(\s*"\s*([^"]+)"\s*\);?\s*#endif\s*\})',
        re.DOTALL
    )
    
    # Simpler approach: find function blocks with asm
    func_pattern = re.compile(
        r'((?:void|u8|u16|u32|s8|s16|s32|BOOL)\s+\w+\s*\([^)]*\)\s*\{)'
        r'(\s*/\*[^*]*\*/\s*)*'
        r'(//#ifdef MWERKS\s+asm\(\s*"[^"]*"\s*\);?\s*#endif)',
        re.DOTALL
    )
    
    # Even simpler: just count and report
    asm_count = content.count('#ifdef MWERKS')
    if asm_count == 0:
        return 0, 0
    
    # Try to get header signatures
    header = get_header(c_file)
    
    # Parse functions from the file
    funcs = re.findall(
        r'(void|u8|u16|u32|s8|s16|s32|BOOL)\s+(\w+)\s*\(([^)]*)\)\s*\{',
        content
    )
    
    converted = 0
    for ret_type, name, params in funcs:
        # Check if this function has asm
        func_block = re.search(
            rf'{re.escape(name)}\s*\([^)]*\)\s*\{{[^}}]*#ifdef MWERKS',
            content, re.DOTALL
        )
        if func_block:
            # Extract asm
            asm_match = re.search(
                rf'{re.escape(name)}[^{{]*\{{[^}}]*asm\(\s*"([^"]+)"',
                content, re.DOTALL
            )
            if asm_match:
                converted += 1
    
    return converted, asm_count

def main():
    total_converted = 0
    total_asm = 0
    files_processed = 0
    
    for root, dirs, files in os.walk(SRC_DIR):
        for f in sorted(files):
            if f.endswith('.c'):
                conv, asm = process_file(f)
                if asm > 0:
                    total_converted += conv
                    total_asm += asm
                    files_processed += 1
    
    print(f"Files with asm: {files_processed}")
    print(f"Total asm blocks: {total_asm}")
    print(f"Functions with asm: {total_converted}")

if __name__ == '__main__':
    main()
