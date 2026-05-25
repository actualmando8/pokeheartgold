#!/usr/bin/env python3
"""Fix NitroSDK build errors by adding missing forward declarations and fixing type mismatches."""
import subprocess
import re
import sys

def get_build_error():
    """Run make and extract the first real error."""
    result = subprocess.run(
        ["make", "-j1"],
        capture_output=True,
        text=True,
        cwd="/home/mandito/Desktop/projects/pokeheartgold"
    )
    lines = result.stderr.split('\n')
    if not lines:
        lines = result.stdout.split('\n')
    
    # Find the error line
    for i, line in enumerate(lines):
        if 'Errors caused tool to abort' in line:
            # Look backwards for the actual error
            for j in range(i-1, max(i-10, -1), -1):
                err = lines[j].strip()
                if err and 'lib\\' in err:
                    return err
    return None

def fix_missing_prototypes():
    """Add forward declarations for functions used before definition."""
    # Common missing prototypes in NitroSDK sources
    fixes = {
        'lib/NitroSDK/src/os/os_alarm.c': [
            ('#include <nitro.h>', '#include <nitro.h>\n\nvoid OSi_SetTimerReserved(s32 timerNum);'),
        ],
    }
    for filepath, replacements in fixes.items():
        with open(filepath, 'r') as f:
            content = f.read()
        for old, new in replacements:
            if old in content and new not in content:
                content = content.replace(old, new, 1)
                with open(filepath, 'w') as f:
                    f.write(content)
                print(f"Fixed {filepath}")

if __name__ == '__main__':
    error = get_build_error()
    if error:
        print(f"Error: {error}")
    else:
        print("Build succeeded!")
