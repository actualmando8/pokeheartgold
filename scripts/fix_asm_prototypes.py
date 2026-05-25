#!/usr/bin/env python3
"""Add forward declarations for asm functions in NitroSDK source files."""
import re
import subprocess
import sys
import tempfile
import os

def get_no_prototype_errors(filepath):
    """Get list of 'function has no prototype' errors."""
    cmd = [
        'wine', 'tools/mwccarm/2.0/sp2p3/mwccarm.exe',
        '-DSDK_ARM9', '-DSDK_CODE_ARM', '-DSDK_FINALROM',
        '-O4,p', '-sym on', '-enum int', '-lang c99',
        '-Cpp_exceptions off', '-gccext,on', '-proc arm946e',
        '-msgstyle gcc', '-gccinc',
        '-i ./src', '-i ./include', '-i ./include/library', '-i ./files',
        '-I./lib/include/MSL_C', '-I./lib/include',
        '-ipa file', '-interworking', '-inline on,noauto', '-char signed',
        '-W all', '-W pedantic', '-W noimpl_signedunsigned',
        '-W noimplicitconv', '-W nounusedarg', '-W nomissingreturn', '-W error',
        '-c', '-o', '/tmp/test_proto.o', filepath
    ]
    result = subprocess.run(cmd, capture_output=True, text=True)
    errors = []
    for line in result.stderr.split('\n'):
        if 'function has no prototype' in line:
            # Extract filename:line_number
            match = re.search(r'([^:]+):(\d+):', line)
            if match:
                errors.append(int(match.group(2)))
    return errors

def find_asm_functions(content):
    """Find all asm function definitions and their signatures."""
    # Match patterns like: asm type name(params) {
    pattern = r'^(\s*)asm\s+(\w+)\s+(\w+)\s*\(([^)]*)\)\s*\{'
    functions = []
    for match in re.finditer(pattern, content, re.MULTILINE):
        indent = match.group(1)
        return_type = match.group(2)
        name = match.group(3)
        params = match.group(4).strip()
        line_num = content[:match.start()].count('\n') + 1
        functions.append({
            'line': line_num,
            'return_type': return_type,
            'name': name,
            'params': params,
            'full': match.group(0)
        })
    return functions

def fix_file(filepath):
    """Add forward declarations before asm functions."""
    with open(filepath, 'r') as f:
        content = f.read()
    
    errors = get_no_prototype_errors(filepath)
    if not errors:
        print(f"  {os.path.basename(filepath)}: No errors")
        return False
    
    print(f"  {os.path.basename(filepath)}: {len(errors)} errors at lines {errors}")
    
    functions = find_asm_functions(content)
    if not functions:
        print(f"    No asm functions found!")
        return False
    
    # Add forward declarations after #include block
    includes_end = 0
    for i, line in enumerate(content.split('\n')):
        if line.startswith('#include'):
            includes_end = i + 1
    
    if includes_end == 0:
        includes_end = 0
    
    # Build forward declarations
    decls = []
    for func in functions:
        params = func['params'] if func['params'] else 'void'
        decl = f"{func['return_type']} {func['name']}({params});"
        decls.append(decl)
    
    insert_text = '\n' + '\n'.join(decls) + '\n'
    
    lines = content.split('\n')
    lines.insert(includes_end, insert_text)
    new_content = '\n'.join(lines)
    
    with open(filepath, 'w') as f:
        f.write(new_content)
    
    print(f"    Added {len(decls)} forward declarations")
    return True

def main():
    os.chdir('/home/mandito/Desktop/projects/pokeheartgold')
    
    files = [
        'lib/NitroSDK/src/os/os_alarm.c',
        'lib/NitroSDK/src/os/os_arena.c',
        'lib/NitroSDK/src/os/os_init.c',
        'lib/NitroSDK/src/os/os_printf.c',
        'lib/NitroSDK/src/os/os_reset.c',
        'lib/NitroSDK/src/os/os_thread.c',
        'lib/NitroSDK/src/os/os_tick.c',
        'lib/NitroSDK/src/os/os_timer.c',
        'lib/NitroSDK/src/os/os_valarm.c',
    ]
    
    for f in files:
        if os.path.exists(f):
            fix_file(f)

if __name__ == '__main__':
    main()
