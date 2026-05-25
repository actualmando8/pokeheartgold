#!/usr/bin/env python3
"""
Add #ifndef SDK_ASM guards to NitroSDK headers that contain C-specific syntax.
This allows the MWCC assembler (mwasmarm.exe with -gccinc) to skip C code.

Strategy: Find the include guard pattern, then insert SDK_ASM guard right after
the #define line, wrapping all content until the final #endif.
"""
import os
import re
import glob

def needs_guard(content):
    """Check if the file already has SDK_ASM guards or needs them."""
    if 'SDK_ASM' in content:
        return False
    patterns = [r'\btypedef\b', r'\bstatic\s+inline\b', r'\binline\b',
                r'\bstruct\s+\w+\s*\{', r'\benum\b', r'\bunion\b',
                r'^\w+.*\w+\s*\([^)]*\)\s*;',  # function declaration like "void foo(int x);"
                r'^\w+.*\(\s*\)\s*;',  # "int bar();"
                r'\bvolatile\b',
                r'\bconst\s+void\s*\*',
                ]
    for p in patterns:
        if re.search(p, content, re.MULTILINE):
            return True
    return False

def add_guards(content):
    """
    Add SDK_ASM guards. Strategy:
    1. Find the #define HEADER_H line (the second line of the include guard)
    2. Insert '#ifndef SDK_ASM\n' right after it
    3. Insert '\n#endif // SDK_ASM' right before the final #endif
    """
    lines = content.split('\n')
    
    # Find the #define line (include guard)
    define_line = -1
    for i in range(len(lines)):
        if lines[i].strip().startswith('#define '):
            define_line = i
            break
    
    if define_line < 0:
        return content  # No include guard found, skip
    
    # Find the last #endif
    last_endif = -1
    for i in range(len(lines) - 1, -1, -1):
        if lines[i].strip().startswith('#endif'):
            last_endif = i
            break
    
    if last_endif < 0:
        return content  # No closing #endif found
    
    # Insert SDK_ASM guard
    result = lines[:define_line + 1]
    result.append('#ifndef SDK_ASM')
    result.extend(lines[define_line + 1:last_endif])
    result.append('')
    result.append('#endif // SDK_ASM')
    result.extend(lines[last_endif:])
    
    return '\n'.join(result)

def process_file(filepath):
    """Process a single header file."""
    try:
        with open(filepath, 'r', encoding='utf-8', errors='replace') as f:
            content = f.read()
    except:
        return False
    
    if not needs_guard(content):
        return False
    
    new_content = add_guards(content)
    with open(filepath, 'w') as f:
        f.write(new_content)
    return True

def main():
    bases = ['lib/include/nitro/', 'include/nitro/']
    count = 0
    for base in bases:
        if not os.path.exists(base):
            continue
        for filepath in glob.glob(f'{base}/**/*.h', recursive=True):
            if process_file(filepath):
                count += 1
                print(f'  Fixed: {filepath}')
    
    print(f'\nDone. Fixed {count} files.')

if __name__ == '__main__':
    main()
