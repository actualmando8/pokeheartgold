#!/usr/bin/env python3
"""Fix specific headers that fail the assembler by wrapping C content in SDK_ASM guards."""
import os
import re

HEADERS = [
    "include/nitro/mi/exMemory.h",
    "include/nitro/mi/wram.h",
    "include/nitro/mi/uncompress.h",
    "include/nitro/card/common.h",
    "include/nitro/card/backup.h",
    "include/nitro/card/rom.h",
    "include/nitro/mi/stream.h",
    "include/nitro/mi/uncomp_stream.h",
    "include/nitro/mi/endian.h",
    "include/nitro/fs/overlay.h",
]

def fix_header(path):
    with open(path, 'r', encoding='utf-8', errors='replace') as f:
        content = f.read()
    
    # Find include guard
    m = re.search(r'#define\s+(\w+)\s*\n', content)
    if not m:
        print(f"  SKIP: No include guard in {path}")
        return False
    
    guard_name = m.group(1)
    define_pos = m.end()
    
    # Find the closing #endif for the include guard
    lines = content.split('\n')
    end_pos = len(lines)
    brace_count = 1
    for i in range(len(lines) - 1, define_pos - 1, -1):
        if lines[i].strip() == '#endif':
            end_pos = i
            break
    
    # Build new content
    new_lines = lines[:define_pos]
    new_lines.append('#ifndef SDK_ASM')
    new_lines.extend(lines[define_pos:end_pos])
    new_lines.append('#endif /* SDK_ASM */')
    new_lines.extend(lines[end_pos:])
    
    new_content = '\n'.join(new_lines)
    
    if new_content != content:
        with open(path, 'w') as f:
            f.write(new_content)
        print(f"  Fixed: {path}")
        return True
    return False

for h in HEADERS:
    if os.path.exists(h):
        fix_header(h)
    else:
        print(f"  MISSING: {h}")
