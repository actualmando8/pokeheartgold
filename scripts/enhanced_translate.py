#!/usr/bin/env python3
"""
Enhanced translator - handles medium-complexity patterns:
- Multi-call linear sequences (no branches/loops)
- Simple if-return patterns  
- Memset-like store sequences
- Functions with simple register manipulations
"""
import os, re, subprocess, sys

PROJECT_DIR = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
SRC_DIR = os.path.join(PROJECT_DIR, "src")
INC_DIR = os.path.join(PROJECT_DIR, "include")

def get_asm(asm_file):
    try:
        r = subprocess.run(["git", "show", f"HEAD:asm/{asm_file}"],
                          capture_output=True, text=True, cwd=PROJECT_DIR, timeout=60)
        return r.stdout if r.returncode == 0 else None
    except: return None

def get_header(c_file):
    h_file = c_file.replace('.c', '.h')
    hpath = os.path.join(INC_DIR, h_file)
    if os.path.exists(hpath):
        with open(hpath) as f:
            return f.read()
    return None

def parse_funcs(asm):
    funcs = []
    cur = None
    in_text = True
    for line in asm.split('\n'):
        s = line.strip()
        if s == '.rodata' or s == '.data' or s == '.bss':
            in_text = False
            continue
        if s == '.text' or s == '.sinit,4':
            in_text = True
            continue
        if not in_text:
            continue
        m = re.match(r'\s*(?:thumb|arm)_func_start\s+(\w+)', s)
        if m:
            cur = {'name': m.group(1), 'lines': [], 'addr': '', 'is_arm': 'arm' in s}
            continue
        if re.match(r'\s*(?:thumb|arm)_func_end', s):
            if cur: funcs.append(cur); cur = None
            continue
        if cur:
            m2 = re.match(r'^(\w+):\s*(?:;\s*(0x[0-9A-Fa-f]+))?', s)
            if m2 and m2.group(1) == cur['name']:
                cur['addr'] = m2.group(2) or ''
            elif s and not s.startswith(('.balign','.word','.short','.byte','.section','.asciz','.ascii','.string')):
                if not s.endswith(':') or s.startswith('bl'):
                    cur['lines'].append(s)
    if cur: funcs.append(cur)
    return funcs

def has_loops(lines):
    """Check if function has loop patterns (backward branches)."""
    loop_patterns = ['blt ', 'blo ', 'bgt ', 'bhi ', 'bge ', 'bhs ', 'bne ', 'beq ']
    for l in lines:
        for p in loop_patterns:
            if l.strip().startswith(p):
                return True
    return False

def has_branches(lines):
    """Check if function has conditional branches (not just return)."""
    branch_count = 0
    for l in lines:
        s = l.strip()
        if s.startswith(('bne ', 'beq ', 'blt ', 'blo ', 'bgt ', 'bhi ', 'bge ', 'bhs ', 'bcs ', 'bcc ')):
            branch_count += 1
    return branch_count > 0

def has_data_refs(lines):
    """Check for data table references."""
    for l in lines:
        if re.match(r'ldr r\d, _\w+', l) and '.word' in ' '.join(lines):
            return True
    return False

def reg_name(r):
    """Map register to a local variable name."""
    reg_map = {
        'r0': 'r0', 'r1': 'r1', 'r2': 'r2', 'r3': 'r3',
        'r4': 'r4', 'r5': 'r5', 'r6': 'r6', 'r7': 'r7',
        'sp': 'sp', 'lr': 'lr', 'pc': 'pc'
    }
    return reg_map.get(r, r)

def parse_imm(val):
    """Parse immediate value."""
    if val.startswith('0x') or val.startswith('0X'):
        return val
    try:
        return str(int(val))
    except:
        return val

def translate_linear_sequence(func):
    """
    Try to translate a linear sequence of function calls and stores.
    Returns C code or None if too complex.
    """
    lines = func['lines']
    name = func['name']
    addr = func['addr']
    
    # Filter out prologue/epilogue
    core = []
    for l in lines:
        s = l.strip()
        if s.startswith(('push', 'pop', 'bx ', 'nop', 'add sp', 'sub sp')):
            continue
        if re.match(r'^\w+:$', s):
            continue
        core.append(s)
    
    # Check for loops - can't handle those
    if has_loops(lines):
        return None
    
    # Check for too many branches
    branch_count = sum(1 for l in core if l.startswith(('bne ', 'beq ', 'blt ', 'blo ', 'bgt ', 'bhi ', 'bge ', 'bhs ')))
    if branch_count > 4:
        return None
    
    # Check for data table references
    if has_data_refs(lines):
        return None
    
    # Count bl calls
    bl_calls = [l for l in core if l.startswith('bl ')]
    if len(bl_calls) > 8:
        return None
    
    # Try to generate C code for linear sequences
    if len(core) <= 20 and len(bl_calls) <= 6:
        return translate_to_c(name, addr, core, lines)
    
    return None

def translate_to_c(name, addr, core, all_lines):
    """
    Translate core instructions to C. Handles:
    - mov/add/sub with immediates
    - bl calls
    - str/ldr/store instructions
    - simple comparisons and branches
    """
    code = []
    code.append(f"/* 0x{addr or '????????'} */")
    
    # Track register assignments
    regs = {}
    saved_regs = []
    for l in all_lines:
        m = re.match(r'push\s*\{([^}]+)\}', l.strip())
        if m:
            saved_regs = [r.strip() for r in m.group(1).split(',')]
    
    # Declare saved registers as locals
    local_decls = []
    for r in saved_regs:
        if r != 'lr':
            local_decls.append(f"    void *{r};")
    
    body = []
    
    i = 0
    while i < len(core):
        line = core[i].strip()
        
        # mov rX, #imm
        m = re.match(r'mov\s+(r\d),\s*#(0x[0-9a-fA-F]+|\d+)', line)
        if m:
            reg, val = m.group(1), parse_imm(m.group(2))
            regs[reg] = val
            body.append(f"    {reg} = {val};")
            i += 1
            continue
        
        # add rX, rY, #imm
        m = re.match(r'add\s+(r\d),\s*(r\d),\s*#(0x[0-9a-fA-F]+|\d+)', line)
        if m:
            dst, src, imm = m.group(1), m.group(2), parse_imm(m.group(3))
            regs[dst] = f"({regs.get(src, src)} + {imm})"
            body.append(f"    {dst} = {regs.get(src, src)} + {imm};")
            i += 1
            continue
            
        # add rX, rY, #0 (copy)
        m = re.match(r'add\s+(r\d),\s*(r\d),\s*#0', line)
        if m:
            dst, src = m.group(1), m.group(2)
            regs[dst] = regs.get(src, src)
            body.append(f"    {dst} = {regs.get(src, src)};")
            i += 1
            continue
        
        # mov rX, rY (via add rX, rY, #0 or just mov)
        m = re.match(r'mov\s+(r\d),\s*(r\d)', line)
        if m:
            dst, src = m.group(1), m.group(2)
            regs[dst] = regs.get(src, src)
            body.append(f"    {dst} = {regs.get(src, src)};")
            i += 1
            continue
        
        # bl function_call
        m = re.match(r'bl\s+(\w+)', line)
        if m:
            target = m.group(1)
            # Check if we have args in r0-r3
            args = []
            for r in ['r0', 'r1', 'r2', 'r3']:
                if r in regs:
                    args.append(regs[r])
                else:
                    args.append(r)
            
            # Only include args that were explicitly set
            arg_hints = []
            for r in ['r0', 'r1', 'r2', 'r3']:
                if r in regs:
                    arg_hints.append(r)
            
            if len(arg_hints) == 0:
                call_str = f"{target}()"
            elif len(arg_hints) == 1 and arg_hints[0] == 'r0':
                call_str = f"{target}({regs.get('r0', 'r0')})"
            elif len(arg_hints) == 2 and 'r0' in arg_hints and 'r1' in arg_hints:
                call_str = f"{target}({regs['r0']}, {regs['r1']})"
            elif len(arg_hints) == 3:
                call_str = f"{target}({regs['r0']}, {regs['r1']}, {regs['r2']})"
            else:
                # Try to infer from mov patterns
                call_str = f"{target}()"
                if 'r0' in regs:
                    call_str = f"{target}({regs['r0']})"
                    if 'r1' in regs:
                        call_str = f"{target}({regs['r0']}, {regs['r1']})"
                        if 'r2' in regs:
                            call_str = f"{target}({regs['r0']}, {regs['r1']}, {regs['r2']})"
            
            # Check return value usage
            regs.clear()  # bl clobbers r0
            body.append(f"    {call_str};")
            i += 1
            continue
        
        # strb rX, [rY, #imm]
        m = re.match(r'strb\s+(r\d),\s*\[(r\d),\s*#(0x[0-9a-fA-F]+|\d+)\]', line)
        if m:
            val_reg, base, off = m.group(1), m.group(2), parse_imm(m.group(3))
            val = regs.get(val_reg, val_reg)
            body.append(f"    ((u8*){regs.get(base, base)})[{off}] = {val};")
            i += 1
            continue
            
        # strh rX, [rY, #imm]
        m = re.match(r'strh\s+(r\d),\s*\[(r\d),\s*#(0x[0-9a-fA-F]+|\d+)\]', line)
        if m:
            val_reg, base, off = m.group(1), m.group(2), parse_imm(m.group(3))
            val = regs.get(val_reg, val_reg)
            body.append(f"    ((u16*){regs.get(base, base)})[{off}] = {val};")
            i += 1
            continue
        
        # str rX, [rY, #imm]
        m = re.match(r'str\s+(r\d),\s*\[(r\d),\s*#(0x[0-9a-fA-F]+|\d+)\]', line)
        if m:
            val_reg, base, off = m.group(1), m.group(2), parse_imm(m.group(3))
            val = regs.get(val_reg, val_reg)
            body.append(f"    ((u32*){regs.get(base, base)})[{off}] = {val};")
            i += 1
            continue
        
        # str rX, [rY]
        m = re.match(r'str\s+(r\d),\s*\[(r\d)\]', line)
        if m:
            val_reg, base = m.group(1), m.group(2)
            val = regs.get(val_reg, val_reg)
            body.append(f"    *(u32*){regs.get(base, base)} = {val};")
            i += 1
            continue
        
        # strb rX, [rY]
        m = re.match(r'strb\s+(r\d),\s*\[(r\d)\]', line)
        if m:
            val_reg, base = m.group(1), m.group(2)
            val = regs.get(val_reg, val_reg)
            body.append(f"    *(u8*){regs.get(base, base)} = {val};")
            i += 1
            continue
        
        # cmp rX, #imm
        m = re.match(r'cmp\s+(r\d),\s*#(0x[0-9a-fA-F]+|\d+)', line)
        if m:
            reg, val = m.group(1), parse_imm(m.group(2))
            # Look ahead for branch
            if i + 1 < len(core):
                next_line = core[i+1].strip()
                if next_line.startswith('beq '):
                    target = next_line[4:].strip()
                    # Check if target is return
                    if i + 2 < len(core) and core[i+2].strip().startswith(('pop', 'bx')):
                        body.append(f"    if ({regs.get(reg, reg)} == {val}) {{")
                        i += 2
                        continue
                    else:
                        body.append(f"    if ({regs.get(reg, reg)} == {val}) {{")
                        body.append(f"        goto {target};")
                        body.append(f"    }}")
                        i += 2
                        continue
                elif next_line.startswith('bne '):
                    target = next_line[4:].strip()
                    if i + 2 < len(core) and core[i+2].strip().startswith(('pop', 'bx')):
                        body.append(f"    if ({regs.get(reg, reg)} != {val}) {{")
                        i += 2
                        continue
                    else:
                        body.append(f"    if ({regs.get(reg, reg)} != {val}) {{")
                        body.append(f"        goto {target};")
                        body.append(f"    }}")
                        i += 2
                        continue
                elif next_line.startswith(('blt ', 'blo ', 'bgt ', 'bhi ')):
                    op = next_line[:3]
                    target = next_line[3:].strip()
                    op_map = {'blt': '<', 'blo': '<', 'bgt': '>', 'bhi': '>'}
                    body.append(f"    if ({regs.get(reg, reg)} {op_map.get(op, '<')} {val}) {{")
                    body.append(f"        goto {target};")
                    body.append(f"    }}")
                    i += 2
                    continue
            
            i += 1
            continue
        
        # mov r0, #0; pop {..., pc} -> return 0
        if line.startswith('mov r0, #') and i + 1 < len(core):
            next_line = core[i+1].strip()
            if 'pc' in next_line and 'pop' in next_line:
                m2 = re.match(r'mov r0, #(0x[0-9a-fA-F]+|\d+)', line)
                if m2:
                    body.append(f"    return {parse_imm(m2.group(1))};")
                    i += 2
                    continue
        
        # Unknown instruction - add as comment
        body.append(f"    /* {line} */")
        i += 1
    
    if not body:
        return None
    
    return f"void {name}(void) {{\n" + "\n".join(local_decls + body) + "\n}"

def translate_func(func):
    """Try to translate a function. Returns (c_code, was_translated)."""
    lines = func['lines']
    name = func['name']
    addr = func['addr']
    
    # Filter boilerplate
    core = [l for l in lines if not l.startswith(('push','pop','bx ','nop','add sp','sub sp'))]
    core = [l for l in core if not re.match(r'^\w+:$', l)]
    core = [l for l in core if not re.match(r'^ldr r\d, _\w+$', l)]
    
    bl_calls = []
    for l in core:
        m = re.match(r'blx?\s+(\w+)', l)
        if m:
            target = m.group(1)
            if not target.startswith('r'):
                bl_calls.append(target)
    
    # Type 1: Single bl call, minimal overhead
    if len(bl_calls) == 1 and len(core) <= 5:
        target = bl_calls[0]
        return f"void {name}(void) {{\n    {target}();\n}}", True
    
    # Type 2: Single bl with arg setup
    if len(bl_calls) == 1 and len(core) <= 12:
        target = bl_calls[0]
        args = []
        for l in core:
            m = re.match(r'mov r(\d), #(0x[0-9a-fA-F]+|\d+)', l)
            if m:
                args.append((int(m.group(1)), m.group(2)))
        if args:
            arg_str = ', '.join(str(v) for _, v in sorted(args))
            return f"void {name}(void) {{\n    {target}({arg_str});\n}}", True
        return f"void {name}(void) {{\n    {target}();\n}}", True
    
    # Type 3: Trampoline (ldr + bx)
    if len(lines) <= 5:
        for l in lines:
            m = re.match(r'ldr r(\w), \w+ ; =(\w+)', l)
            if m and ('bx r' in ' '.join(lines)):
                target = m.group(2)
                return f"void {name}(void) {{\n    {target}();\n}}", True
    
    # Type 4: Multi-call linear sequence (no branches/loops)
    result = translate_linear_sequence(func)
    if result:
        return result, True
    
    # Too complex - preserve as asm
    asm_block = '\\n    '.join(lines)
    return f"""void {name}(void) {{
    /* Original at {addr} */
    /* Requires manual decompilation - {len(lines)} instructions */
    #ifdef MWERKS
    asm(
        "{asm_block}"
    );
    #endif
}}""", False

def process_file(c_file):
    """Process a single file. Returns (translated, total)."""
    path = os.path.join(SRC_DIR, c_file)
    if not os.path.exists(path):
        return 0, 0
    
    with open(path) as f:
        content = f.read()
    
    if '#ifdef MWERKS' not in content:
        return 0, 0
    
    asm_file = c_file.replace('.c', '.s')
    asm = get_asm(asm_file)
    if not asm:
        return 0, 0
    
    funcs = parse_funcs(asm)
    if not funcs:
        return 0, 0
    
    includes = []
    for line in content.split('\n'):
        m = re.match(r'#include\s+"([^"]+)"', line)
        if m:
            includes.append(m.group(1))
    if not includes:
        includes = ['global.h']
    
    header = get_header(c_file)
    
    parts = [f"/* Decompiled from asm/{asm_file} */"]
    for inc in includes:
        parts.append(f'#include "{inc}"')
    parts.append('')
    
    translated = 0
    total = len(funcs)
    
    for func in funcs:
        c_code, was_trans = translate_func(func)
        if was_trans:
            translated += 1
        parts.append(c_code)
        parts.append('')
    
    new_content = '\n'.join(parts)
    
    if translated > 0:
        with open(path, 'w') as f:
            f.write(new_content)
    
    return translated, total

def main():
    r = subprocess.run(["git", "ls-files", "asm/*.s"],
                      capture_output=True, text=True, cwd=PROJECT_DIR)
    asm_files = [f.replace('asm/', '').replace('.s', '.c') for f in r.stdout.strip().split('\n') if f]
    
    total_trans = 0
    total_funcs = 0
    files_done = 0
    
    for cf in sorted(asm_files):
        trans, total = process_file(cf)
        if trans > 0:
            total_trans += trans
            total_funcs += total
            files_done += 1
            pct = 100*trans//total if total else 0
            print(f"  {cf}: {trans}/{total} ({pct}%)")
    
    print(f"\nTotal: {total_trans}/{total_funcs} functions translated in {files_done} files")

if __name__ == '__main__':
    main()
