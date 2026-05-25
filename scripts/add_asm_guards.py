#!/usr/bin/env python3
import os
import re

game_dir = "include/nitro"

c_patterns = [
    r'^\s*typedef\s',
    r'^\s*(static\s+)?(inline\s+)?(\w+\s+\*?\s+\w+\s*\()',
    r'^\s*enum\s',
    r'^\s*struct\s',
    r'^\s*union\s',
]

def needs_guards(content):
    for pattern in c_patterns:
        if re.search(pattern, content, re.MULTILINE):
            return True
    return False

def add_guards(content):
    lines = content.split('\n')
    content_start = 0
    for i, line in enumerate(lines):
        if line.startswith('#define') and '_H_' in line.upper():
            content_start = i + 1
            break
    if content_start == 0:
        return content
    content_end = len(lines)
    for i in range(len(lines) - 1, content_start, -1):
        if lines[i].strip() == '#endif':
            content_end = i
            break
    new_lines = lines[:content_start]
    new_lines.append('#ifndef SDK_ASM')
    new_lines.extend(lines[content_start:content_end])
    new_lines.append('#endif /* SDK_ASM */')
    new_lines.extend(lines[content_end:])
    return '\n'.join(new_lines)

count = 0
for root, dirs, files in os.walk(game_dir):
    for f in files:
        if not f.endswith('.h'):
            continue
        path = os.path.join(root, f)
        try:
            with open(path, 'r', encoding='utf-8', errors='replace') as fh:
                content = fh.read()
        except:
            continue
        if needs_guards(content):
            new_content = add_guards(content)
            if new_content != content:
                with open(path, 'w') as fh:
                    fh.write(new_content)
                count += 1
                print(f"Guarded: {path}")

print(f"\nTotal files guarded: {count}")
