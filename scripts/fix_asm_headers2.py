#!/usr/bin/env python3
"""
Fix SDK_ASM guards that were incorrectly placed by fix_asm_headers.py.
The previous script placed #endif after the include guard #endif,
which breaks the include guard structure.
"""

import os

WORK_DIR = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))

HEADERS = [
    "lib/include/stdarg.h",
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
    "include/nitro/os/common/printf.h",
    "include/nitro/misc.h",
    "include/nitro/os.h",
    "include/nitro/fx/fx.h",
    "include/nitro/fx/fx_const.h",
]

def fix_header(filepath):
    full_path = os.path.join(WORK_DIR, filepath)
    if not os.path.exists(full_path):
        return False
    
    with open(full_path, 'r', encoding='latin-1') as f:
        content = f.read()
    
    # Check if file has the broken pattern
    if '#endif /* SDK_ASM */' not in content:
        return False
    
    # Find the last #endif (include guard) and move SDK_ASM endif before it
    lines = content.split('\n')
    
    # Remove the trailing #endif /* SDK_ASM */
    if lines[-1].strip() == '#endif /* SDK_ASM */':
        lines = lines[:-1]
    elif lines[-2].strip() == '#endif /* SDK_ASM */':
        lines = lines[:-2] + [lines[-1]]
    
    # Find the last #endif (should be the include guard closing)
    # Insert #endif /* SDK_ASM */ before it
    for i in range(len(lines) - 1, -1, -1):
        stripped = lines[i].strip()
        if stripped == '#endif' or stripped.startswith('#endif'):
            # Insert SDK_ASM endif before this line
            lines.insert(i, '#endif /* SDK_ASM */')
            break
    
    new_content = '\n'.join(lines)
    
    with open(full_path, 'w', encoding='latin-1') as f:
        f.write(new_content)
    
    print(f"  Fixed {filepath}")
    return True

def main():
    print("Fixing SDK_ASM guard placement...")
    for header in HEADERS:
        fix_header(header)
    print("Done.")

if __name__ == '__main__':
    main()
