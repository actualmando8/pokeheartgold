#!/usr/bin/env python3
"""
Decompile stub functions with asm comments to C code.
Reads the // comments and generates C code.
"""
import os, re

PROJECT_DIR = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
SRC_DIR = os.path.join(PROJECT_DIR, "src")
INC_DIR = os.path.join(PROJECT_DIR, "include")

def get_header(c_file):
    h_file = c_file.replace('.c', '.h')
    hpath = os.path.join(INC_DIR, h_file)
    if os.path.exists(hpath):
        with open(hpath) as f:
            return f.read()
    return None

def extract_signature(header, func_name):
    if not header:
        return None
    for line in header.split('\n'):
        line = line.strip()
        if func_name in line and '(' in line:
            return line.rstrip(';').rstrip()
    return None

def decompile_asm_to_c(asm_lines, func_name, header):
    """Try to decompile assembly instructions to C code."""
    # Get signature from header
    sig = extract_signature(header, func_name)
    
    # Parse instructions
    instructions = []
    for line in asm_lines:
        line = line.strip().lstrip('/').strip()
        if line.startswith('TODO'):
            continue
        if line:
            instructions.append(line)
    
    if not instructions:
        return None
    
    # Check for patterns we can handle
    
    # Pattern 1: Simple function call chain
    bl_calls = [l for l in instructions if l.startswith('bl ')]
    has_branch = any(l.startswith(('bne ', 'beq ', 'blt ', 'blo ', 'bgt ', 'bhi ', 'bge ', 'bhs ', 'ble ', 'bls ')) for l in instructions)
    has_loop = any(l.startswith(('blt ', 'blo ')) for l in instructions)
    has_data_ref = any('.word' in l for l in instructions)
    
    # Filter out prologue/epilogue
    core = [l for l in instructions if not l.startswith(('push', 'pop', 'bx ', 'nop', 'add sp', 'sub sp'))]
    core = [l for l in core if not re.match(r'^\w+:$', l)]
    
    # Simple return value
    if len(core) == 1 and core[0].startswith('mov r0, #'):
        val = core[0].split('#')[1].strip()
        try:
            v = int(val, 0)
            if v <= 0xff:
                return f"u8 {func_name}(void) {{\n    return {val};\n}}"
            elif v <= 0xffff:
                return f"u16 {func_name}(void) {{\n    return {val};\n}}"
        except:
            pass
        return f"u32 {func_name}(void) {{\n    return {val};\n}}"
    
    # Can't handle loops, branches, or data refs
    if has_loop or has_branch or has_data_ref:
        return None
    
    # Try to translate linear sequences
    body = []
    regs = {}
    
    for instr in core:
        # mov rX, #imm
        m = re.match(r'mov\s+r(\d),\s*#(0x[0-9a-fA-F]+|\d+)', instr)
        if m:
            regs[f'r{m.group(1)}'] = m.group(2)
            continue
        
        # add rX, rY, #0
        m = re.match(r'add\s+r(\d),\s*r(\d),\s*#0', instr)
        if m:
            regs[f'r{m.group(1)}'] = regs.get(f'r{m.group(2)}', f'r{m.group(2)}')
            continue
        
        # add rX, rY, #imm
        m = re.match(r'add\s+r(\d),\s*r(\d),\s*#(0x[0-9a-fA-F]+|\d+)', instr)
        if m:
            regs[f'r{m.group(1)}'] = f"({regs.get(f'r{m.group(2)}', f'r{m.group(2)}')} + {m.group(3)})"
            continue
        
        # mov rX, rY
        m = re.match(r'mov\s+r(\d),\s*r(\d)', instr)
        if m:
            regs[f'r{m.group(1)}'] = regs.get(f'r{m.group(2)}', f'r{m.group(2)}')
            continue
        
        # ldr rX, [rY, #imm]
        m = re.match(r'ldr\s+r(\d),\s*\[r(\d),\s*#(0x[0-9a-fA-F]+|\d+)\]', instr)
        if m:
            regs[f'r{m.group(1)}'] = f"*((u32*)({regs.get(f'r{m.group(2)}', f'r{m.group(2)}')} + {m.group(3)}))"
            continue
        
        # ldrb rX, [rY, #imm]
        m = re.match(r'ldrb\s+r(\d),\s*\[r(\d),\s*#(0x[0-9a-fA-F]+|\d+)\]', instr)
        if m:
            regs[f'r{m.group(1)}'] = f"*((u8*)({regs.get(f'r{m.group(2)}', f'r{m.group(2)}')} + {m.group(3)}))"
            continue
        
        # str rX, [rY, #imm]
        m = re.match(r'str\s+r(\d),\s*\[r(\d),\s*#(0x[0-9a-fA-F]+|\d+)\]', instr)
        if m:
            val_r = f'r{m.group(1)}'
            base_r = f'r{m.group(2)}'
            val = regs.get(val_r, val_r)
            base = regs.get(base_r, base_r)
            body.append(f"    *((u32*)({base} + {m.group(3)})) = {val};")
            continue
        
        # strb rX, [rY, #imm]
        m = re.match(r'strb\s+r(\d),\s*\[r(\d),\s*#(0x[0-9a-fA-F]+|\d+)\]', instr)
        if m:
            val_r = f'r{m.group(1)}'
            base_r = f'r{m.group(2)}'
            val = regs.get(val_r, val_r)
            base = regs.get(base_r, base_r)
            body.append(f"    *((u8*)({base} + {m.group(3)})) = {val};")
            continue
        
        # strh rX, [rY, #imm]
        m = re.match(r'strh\s+r(\d),\s*\[r(\d),\s*#(0x[0-9a-fA-F]+|\d+)\]', instr)
        if m:
            val_r = f'r{m.group(1)}'
            base_r = f'r{m.group(2)}'
            val = regs.get(val_r, val_r)
            base = regs.get(base_r, base_r)
            body.append(f"    *((u16*)({base} + {m.group(3)})) = {val};")
            continue
        
        # bl function
        m = re.match(r'bl\s+(\w+)', instr)
        if m:
            target = m.group(1)
            args = []
            for r in ['r0', 'r1', 'r2', 'r3']:
                if r in regs:
                    args.append(regs[r])
            if args:
                body.append(f"    {target}({', '.join(args)});")
            else:
                body.append(f"    {target}();")
            regs.clear()
            continue
        
        # cmp (skip)
        if instr.startswith('cmp '):
            continue
        
        # Unknown - can't translate
        return None
    
    if not body:
        return None
    
    ret_type = 'void'
    if sig:
        ret_type = sig.split(func_name)[0].strip()
    
    return f"{ret_type} {func_name}(void) {{\n" + "\n".join(body) + "\n}"

def process_file(c_file):
    """Process a file, decompiling stubs."""
    path = os.path.join(SRC_DIR, c_file)
    if not os.path.exists(path):
        return 0
    
    with open(path) as f:
        content = f.read()
    
    if '// TODO: decompile' not in content:
        return 0
    
    header = get_header(c_file)
    
    # Find all stub functions - line by line approach
    lines = content.split('\n')
    result = []
    i = 0
    converted = 0
    
    while i < len(lines):
        line = lines[i]
        # Check for function header
        m = re.match(r'((?:void|u8|u16|u32|s8|s16|s32|BOOL)\s+(\w+)\s*\([^)]*\)\s*\{)', line)
        if m:
            full_header = m.group(1)
            func_name = m.group(2)
            i += 1
            
            # Collect asm comments
            asm_lines = []
            while i < len(lines):
                l = lines[i].strip()
                if l == '}':
                    i += 1
                    break
                if l.startswith('//'):
                    asm_lines.append(l)
                i += 1
            
            # Try to decompile
            result_str = decompile_asm_to_c(asm_lines, func_name, header)
            if result_str:
                converted += 1
                result.append(result_str)
            else:
                # Keep original
                result.append(full_header)
                for al in asm_lines:
                    result.append(f"    {al}")
                result.append("}")
            result.append("")
            continue
        
        result.append(line)
        i += 1
    
    new_content = '\n'.join(result)
    
    if converted > 0:
        with open(path, 'w') as f:
            f.write(new_content)
    
    return converted

def main():
    total = 0
    files = 0
    for f in sorted(os.listdir(SRC_DIR)):
        if f.endswith('.c'):
            c = process_file(f)
            if c > 0:
                total += c
                files += 1
                print(f"  {f}: {c} functions")
    print(f"\nTotal: {total} functions in {files} files")

if __name__ == '__main__':
    main()
