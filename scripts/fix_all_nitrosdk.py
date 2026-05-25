#!/usr/bin/env python3
"""Automatically add forward declarations for all functions in NitroSDK files."""
import re
import subprocess
import os

os.chdir('/home/mandito/Desktop/projects/pokeheartgold')

def get_compilation_errors(filepath):
    """Get 'function has no prototype' line numbers."""
    cmd = (
        'wine tools/mwccarm/2.0/sp2p3/mwccarm.exe '
        '-DSDK_ARM9 -DSDK_CODE_ARM -DSDK_FINALROM '
        '-O4,p -sym on -enum int -lang c99 '
        '-Cpp_exceptions off -gccext,on -proc arm946e '
        '-msgstyle gcc -gccinc '
        '-i ./src -i ./include -i ./include/library -i ./files '
        '-I./lib/include/MSL_C -I./lib/include '
        '-ipa file -interworking -inline on,noauto -char signed '
        '-W all -W pedantic -W noimpl_signedunsigned '
        '-W noimplicitconv -W nounusedarg -W nomissingreturn -W error '
        f'-c -o /tmp/test_proto.o {filepath}'
    )
    result = subprocess.run(cmd, shell=True, stdout=subprocess.PIPE, stderr=subprocess.STDOUT, text=True)
    # Wine outputs errors to stdout when merged
    output = result.stdout
    lines = set()
    for line in output.split('\n'):
        if 'function has no prototype' in line:
            m = re.search(r'([^:]+):(\d+):', line)
            if m:
                lines.add(int(m.group(2)))
    return lines

def extract_all_functions(content):
    """Extract all function definitions (non-asm, non-static, non-inline)."""
    funcs = []
    lines = content.split('\n')
    skip_keywords = {'static', 'inline', 'asm', 'extern', 'if', 'else', 'for', 'while',
                     'switch', 'case', 'return', 'break', 'continue', 'do', 'typedef',
                     'struct', 'enum', 'union', '#ifdef', '#ifndef', '#endif', '#else', '#define'}
    
    for i, line in enumerate(lines):
        stripped = line.strip()
        if not stripped or stripped.startswith(('#', '//', '/*', '*')):
            continue
        # Match function definition: type name(params) {
        m = re.match(r'^(\w[\w\s\*]+?)\s+(\w+)\s*\(([^)]*)\)\s*\{?\s*$', stripped)
        if m:
            ret = m.group(1).strip()
            name = m.group(2)
            params = m.group(3).strip()
            # Skip if return type is a keyword
            if ret in skip_keywords or name in skip_keywords:
                continue
            # Skip static/inline/asm/extern
            if stripped.startswith(('static ', 'inline ', 'asm ', 'extern ', '__declspec')):
                continue
            if not params:
                params = 'void'
            funcs.append((ret, name, params))
    return funcs

def add_forward_decls(filepath):
    """Add forward declarations for functions that need them."""
    errors = get_compilation_errors(filepath)
    if not errors:
        return False
    
    with open(filepath, 'r') as f:
        content = f.read()
    
    funcs = extract_all_functions(content)
    if not funcs:
        print(f"  {os.path.basename(filepath)}: No functions found")
        return False
    
    # Build declarations
    decls = []
    seen = set()
    for ret, name, params in funcs:
        key = f"{ret} {name}"
        if key not in seen:
            decls.append(f"{key}({params});")
            seen.add(key)
    
    if not decls:
        return False
    
    # Find insert point (after last #include)
    lines = content.split('\n')
    insert_pos = 0
    for i, line in enumerate(lines):
        if line.startswith('#include'):
            insert_pos = i + 1
    
    decl_text = '\n' + '\n'.join(decls) + '\n'
    lines.insert(insert_pos, decl_text)
    
    with open(filepath, 'w') as f:
        f.write('\n'.join(lines))
    
    print(f"  {os.path.basename(filepath)}: Added {len(decls)} decls for {len(errors)} errors")
    return True

# List of files to fix
files = [
    'lib/NitroSDK/src/os/os_alarm.c',
    'lib/NitroSDK/src/os/os_alloc.c',
    'lib/NitroSDK/src/os/os_arena.c',
    'lib/NitroSDK/src/os/os_cache.c',
    'lib/NitroSDK/src/os/os_context.c',
    'lib/NitroSDK/src/os/os_interrupt.c',
    'lib/NitroSDK/src/os/os_irqHandler.c',
    'lib/NitroSDK/src/os/os_irqTable.c',
    'lib/NitroSDK/src/os/os_ownerInfo.c',
    'lib/NitroSDK/src/os/os_printf.c',
    'lib/NitroSDK/src/os/os_reset.c',
    'lib/NitroSDK/src/os/os_spinLock.c',
    'lib/NitroSDK/src/os/os_thread.c',
    'lib/NitroSDK/src/os/os_timer.c',
    'lib/NitroSDK/src/gx/gx.c',
    'lib/NitroSDK/src/gx/g2.c',
    'lib/NitroSDK/src/gx/g3.c',
    'lib/NitroSDK/src/gx/g3b.c',
    'lib/NitroSDK/src/gx/g3imm.c',
    'lib/NitroSDK/src/gx/g3x.c',
    'lib/NitroSDK/src/gx/g3_util.c',
    'lib/NitroSDK/src/gx/gxstate.c',
    'lib/NitroSDK/src/gx/gxasm.c',
    'lib/NitroSDK/src/gx/gx_bgcnt.c',
    'lib/NitroSDK/src/gx/gx_load2d.c',
    'lib/NitroSDK/src/gx/gx_load3d.c',
    'lib/NitroSDK/src/gx/gx_vramcnt.c',
    'lib/NitroSDK/src/fx/fx.c',
    'lib/NitroSDK/src/fx/fx_atanidx.c',
    'lib/NitroSDK/src/fx/fx_cp.c',
    'lib/NitroSDK/src/fx/fx_mtx22.c',
    'lib/NitroSDK/src/fx/fx_mtx33.c',
    'lib/NitroSDK/src/fx/fx_mtx43.c',
    'lib/NitroSDK/src/fx/fx_mtx44.c',
    'lib/NitroSDK/src/fx/fx_sincos.c',
    'lib/NitroSDK/src/fx/fx_trig.c',
    'lib/NitroSDK/src/fx/fx_vec.c',
    'lib/NitroSDK/src/mi/mi_compress.c',
    'lib/NitroSDK/src/mi/mi_dma.c',
    'lib/NitroSDK/src/mi/mi_dma_card.c',
    'lib/NitroSDK/src/mi/mi_dma_gxcommand.c',
    'lib/NitroSDK/src/mi/mi_dma_hblank.c',
    'lib/NitroSDK/src/mi/mi_init.c',
    'lib/NitroSDK/src/mi/mi_memory.c',
    'lib/NitroSDK/src/mb/mb.c',
    'lib/NitroSDK/src/nitro/nitro.c',
    'lib/NitroSDK/src/nnsys/nnsys.c',
    'lib/NitroSDK/src/wifi/wifi.c',
    'lib/NitroSDK/src/crt0.s',
    'lib/NitroSDK/src/jn_spl/jn_spl.c',
    'lib/NitroSDK/src/libVCT/libVCT.c',
    'lib/NitroSDK/src/msl/msl.c',
]

for f in files:
    if os.path.exists(f):
        add_forward_decls(f)

print("\nDone.")
