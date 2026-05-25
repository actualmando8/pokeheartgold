#!/usr/bin/env python3
"""Add SDK_ASM guards around specific C constructs in game headers."""
import os
import re

game_dir = "include/nitro"

def process_file(path):
    with open(path, 'r', encoding='utf-8', errors='replace') as f:
        content = f.read()
    
    original = content
    
    # Guard typedef lines
    content = re.sub(
        r'(^\s*typedef\s.*?;)',
        r'#ifndef SDK_ASM\n\1\n#endif',
        content,
        flags=re.MULTILINE
    )
    
    # Guard function declarations (but not in comments)
    content = re.sub(
        r'(^\s*(static\s+)?(inline\s+)?(\w[\w\s\*]*\s+\w+\s*\([^)]*\)\s*;))',
        r'#ifndef SDK_ASM\n\1\n#endif',
        content,
        flags=re.MULTILINE
    )
    
    # Guard static inline function blocks
    def guard_inline_func(match):
        body = match.group(0)
        return f'#ifndef SDK_ASM\n{body}\n#endif'
    
    content = re.sub(
        r'^\s*static\s+inline\s+.*?\{[^}]*\}',
        guard_inline_func,
        content,
        flags=re.MULTILINE | re.DOTALL
    )
    
    if content != original:
        with open(path, 'w') as f:
            f.write(content)
        return True
    return False

count = 0
for root, dirs, files in os.walk(game_dir):
    for f in files:
        if not f.endswith('.h'):
            continue
        path = os.path.join(root, f)
        if process_file(path):
            count += 1
            print(f"Fixed: {path}")

print(f"\nTotal: {count}")
