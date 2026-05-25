#!/usr/bin/env python3
"""Automatically fix common build errors in the decompilation project."""

import subprocess
import re
import sys
import os

def run_build():
    """Run make and return the output."""
    result = subprocess.run(
        ["make", "-j1"],
        capture_output=True,
        text=True,
        cwd="/home/mandito/Desktop/projects/pokeheartgold"
    )
    return result.stdout + result.stderr

def find_errors(output):
    """Extract error lines from build output."""
    errors = []
    for line in output.split('\n'):
        # Match patterns like: src\file.c:123: error message
        match = re.search(r'([^:]+)\.([ch]):(\d+):\s*(.+)', line)
        if match:
            filepath, ext, line_num, message = match.groups()
            # Normalize path
            filepath = filepath.replace('\\', '/')
            if not filepath.startswith('/'):
                filepath = f"/home/mandito/Desktop/projects/pokeheartgold/{filepath}"
            errors.append((filepath, ext, int(line_num), message.strip()))
    return errors

def fix_missing_include(errors):
    """Fix 'cannot be opened' errors by replacing types.h with global.h."""
    fixed = 0
    for filepath, ext, line_num, message in errors:
        if "cannot be opened" in message and ext == 'h':
            with open(filepath, 'r') as f:
                content = f.read()
            # Replace #include "types.h" with #include "global.h"
            if '#include "types.h"' in content:
                content = content.replace('#include "types.h"', '#include "global.h"')
                with open(filepath, 'w') as f:
                    f.write(content)
                print(f"  Fixed: {filepath} - replaced types.h with global.h")
                fixed += 1
    return fixed

def fix_undefined_struct(errors):
    """Fix 'undefined identifier' for struct types by adding forward declarations."""
    fixed = 0
    struct_pattern = re.compile(r"undefined identifier '(\w+)'")
    for filepath, ext, line_num, message in errors:
        match = struct_pattern.search(message)
        if match and ext == 'h':
            struct_name = match.group(1)
            if struct_name.startswith('UnkStruct') or struct_name.startswith('s'):
                with open(filepath, 'r') as f:
                    content = f.read()
                forward_decl = f"typedef struct {struct_name} {struct_name};\n"
                if forward_decl.strip() not in content:
                    # Add after #define guard
                    lines = content.split('\n')
                    for i, line in enumerate(lines):
                        if line.startswith('#define') and 'H' in line:
                            lines.insert(i + 1, '\n' + forward_decl.strip())
                            break
                    with open(filepath, 'w') as f:
                        f.write('\n'.join(lines))
                    print(f"  Fixed: {filepath} - added forward decl for {struct_name}")
                    fixed += 1
    return fixed

def main():
    print("Running build to detect errors...")
    output = run_build()
    
    if "Error" not in output:
        print("Build successful!")
        return 0
    
    errors = find_errors(output)
    if not errors:
        print("Build failed but no parseable errors found.")
        print(output[-500:])
        return 1
    
    print(f"Found {len(errors)} errors:")
    for filepath, ext, line_num, message in errors[:10]:
        rel = filepath.replace("/home/mandito/Desktop/projects/pokeheartgold/", "")
        print(f"  {rel}:{line_num}: {message[:80]}")
    
    total_fixed = 0
    total_fixed += fix_missing_include(errors)
    total_fixed += fix_undefined_struct(errors)
    
    print(f"Fixed {total_fixed} errors automatically.")
    return 1 if total_fixed > 0 else 0

if __name__ == "__main__":
    sys.exit(main())
