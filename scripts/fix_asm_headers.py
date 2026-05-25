#!/usr/bin/env python3
"""
Add SDK_ASM guards to C headers that the assembler can't process.
The assembler uses -gccinc which runs the C preprocessor, but then
tries to assemble the output. C constructs like typedef, int, struct,
union are not valid assembly instructions.

This script wraps C-specific content in #ifndef SDK_ASM guards.
"""

import os
import re
import sys

WORK_DIR = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))

# Headers that need SDK_ASM guards
HEADERS_TO_FIX = [
    # lib/include headers
    "lib/include/stdarg.h",
    "lib/include/stdio.h",
    "lib/include/stddef.h",
    "lib/include/stdint.h",
    "lib/include/size_t.h",
    "lib/include/wchar_t.h",
    "lib/include/va_list.h",
    "lib/include/ansi_parms.h",
    "lib/include/file_struc.h",
    "lib/include/ansi_files.h",
    "lib/include/console_io.h",
    "lib/include/char_io.h",
    "lib/include/buffer_io.h",
    "lib/include/strtold.h",
    "lib/include/strtoul.h",
    "lib/include/wcstold.h",
    "lib/include/thread_local_data_pthreads.h",
    # include/nitro headers
    "include/nitro/os/common/printf.h",
    "include/nitro/misc.h",
    "include/nitro/os.h",
    "include/nitro/fx/fx.h",
    "include/nitro/fx/fx_const.h",
]

def needs_sdk_asm_guard(content):
    """Check if the file content has C constructs that need guarding."""
    c_keywords = [r'\btypedef\b', r'\bint\b', r'\bstruct\b', r'\bunion\b', 
                  r'\benum\b', r'\bextern\b', r'\bvoid\b', r'\bchar\b',
                  r'\bfloat\b', r'\bdouble\b', r'\blong\b', r'\bshort\b',
                  r'\bsigned\b', r'\bunsigned\b', r'\bconst\b', r'\bstatic\b']
    for kw in c_keywords:
        if re.search(kw, content):
            return True
    return False

def add_sdk_asm_guard(filepath):
    """Add #ifndef SDK_ASM guard to a header file."""
    full_path = os.path.join(WORK_DIR, filepath)
    if not os.path.exists(full_path):
        print(f"  Skipping {filepath} (not found)")
        return False
    
    with open(full_path, 'r', encoding='latin-1') as f:
        content = f.read()
    
    # Check if already has SDK_ASM guard
    if 'SDK_ASM' in content:
        print(f"  Skipping {filepath} (already has SDK_ASM guard)")
        return False
    
    if not needs_sdk_asm_guard(content):
        print(f"  Skipping {filepath} (no C constructs found)")
        return False
    
    # Find the header guard (first #define after #ifndef)
    lines = content.split('\n')
    
    # Find the include guard define line
    guard_line = -1
    for i, line in enumerate(lines):
        if line.startswith('#define') and i > 0:
            guard_line = i
            break
    
    if guard_line < 0:
        print(f"  Skipping {filepath} (no include guard found)")
        return False
    
    # Insert #ifndef SDK_ASM after the include guard
    new_lines = lines[:guard_line+1]
    new_lines.append('#ifndef SDK_ASM')
    new_lines.extend(lines[guard_line+1:])
    new_lines.append('#endif /* SDK_ASM */')
    
    new_content = '\n'.join(new_lines)
    
    with open(full_path, 'w', encoding='latin-1') as f:
        f.write(new_content)
    
    print(f"  Fixed {filepath}")
    return True

def main():
    print("Adding SDK_ASM guards to C headers...")
    fixed = 0
    for header in HEADERS_TO_FIX:
        if add_sdk_asm_guard(header):
            fixed += 1
    print(f"\nFixed {fixed} headers")

if __name__ == '__main__':
    main()
