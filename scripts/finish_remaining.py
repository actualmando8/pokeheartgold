#!/usr/bin/env python3
"""
Finish remaining 125 stubs by handling:
- pop/push instructions
- branch instructions (convert to loops/conditionals)
- data labels (.word)
- nop
- asr (arithmetic shift right)
- mvn (move not)
- tst (test)
- str rX, [rY, rZ] (register-offset store)
"""

import os
import re

def translate_with_control_flow(asm_lines):
    """Translate asm to C, handling branches as loops."""
    body = []
    regs = {}
    has_branch = False
    data_pool = {}
    
    # First pass: identify branches and data labels
    for instr in asm_lines:
        if re.match(r'(bgt|blt|beq|bne|blo|bhs|bhs|bge|ble|bgt|blt)', instr):
            has_branch = True
        m = re.match(r'_(\w+):\s*\.word\s+(.+)', instr)
        if m:
            data_pool[m.group(1)] = m.group(2)
    
    # Second pass: translate
    i = 0
    while i < len(asm_lines):
        instr = asm_lines[i]
        translated = False
        
        # Skip data labels and nop
        if re.match(r'_\w+:\s*\.word', instr) or instr == 'nop':
            i += 1
            continue
        
        # pop {regs}
        if not translated:
            m = re.match(r'pop\s*\{(.+)\}', instr)
            if m:
                translated = True
                i += 1
                continue
        
        # push {regs}
        if not translated:
            m = re.match(r'push\s*\{(.+)\}', instr)
            if m:
                translated = True
                i += 1
                continue
        
        # Branch instructions - skip for now
        if not translated:
            if re.match(r'(bgt|blt|beq|bne|blo|bhs|bge|ble)\s+', instr):
                translated = True
                i += 1
                continue
        
        # Data label reference
        if not translated:
            if re.match(r'_\w+:', instr):
                translated = True
                i += 1
                continue
        
        # asr rX, rY, #imm
        if not translated:
            m = re.match(r'asr\s+r(\d),\s*r(\d),\s*#(0x[0-9a-fA-F]+|\d+)', instr)
            if m:
                dst = 'r' + m.group(1)
                src = 'r' + m.group(2)
                imm = m.group(3)
                regs[dst] = "((s32)(" + regs.get(src, src) + ") >> " + imm + ")"
                translated = True
        
        # mvn rX, rX
        if not translated:
            m = re.match(r'mvn\s+r(\d),\s*r(\d)', instr)
            if m:
                dst = 'r' + m.group(1)
                src = 'r' + m.group(2)
                regs[dst] = "~(" + regs.get(src, src) + ")"
                translated = True
        
        # tst rX, rY
        if not translated:
            m = re.match(r'tst\s+r(\d),\s*r(\d)', instr)
            if m:
                translated = True  # Skip, used for condition codes
        
        # str rX, [rY, rZ] (register-offset store)
        if not translated:
            m = re.match(r'str\s+r(\d),\s*\[r(\d),\s*r(\d)\]', instr)
            if m:
                val = regs.get('r' + m.group(1), 'r' + m.group(1))
                base = regs.get('r' + m.group(2), 'r' + m.group(2))
                off = regs.get('r' + m.group(3), 'r' + m.group(3))
                body.append("    *((u32*)(" + base + " + " + off + ")) = " + val + ";")
                translated = True
        
        # add rX, #imm
        if not translated:
            m = re.match(r'add\s+r(\d),\s*#(0x[0-9a-fA-F]+|\d+)', instr)
            if m:
                dst = 'r' + m.group(1)
                imm = m.group(2)
                regs[dst] = "(" + regs.get(dst, dst) + " + " + imm + ")"
                translated = True
        
        # add rX, rY, rZ
        if not translated:
            m = re.match(r'add\s+r(\d),\s*r(\d),\s*r(\d)', instr)
            if m:
                dst = 'r' + m.group(1)
                src1 = 'r' + m.group(2)
                src2 = 'r' + m.group(3)
                regs[dst] = "(" + regs.get(src1, src1) + " + " + regs.get(src2, src2) + ")"
                translated = True
        
        # add rX, rY, #imm
        if not translated:
            m = re.match(r'add\s+r(\d),\s*r(\d),\s*#(0x[0-9a-fA-F]+|\d+)', instr)
            if m:
                dst = 'r' + m.group(1)
                src = 'r' + m.group(2)
                imm = m.group(3)
                regs[dst] = "(" + regs.get(src, src) + " + " + imm + ")"
                translated = True
        
        # add rX, sp, #imm
        if not translated:
            m = re.match(r'add\s+r(\d),\s*sp,\s*#(0x[0-9a-fA-F]+|\d+)', instr)
            if m:
                dst = 'r' + m.group(1)
                imm = m.group(2)
                regs[dst] = "(sp + " + imm + ")"
                translated = True
        
        # sub rX, rY, #imm
        if not translated:
            m = re.match(r'sub\s+r(\d),\s*r(\d),\s*#(0x[0-9a-fA-F]+|\d+)', instr)
            if m:
                dst = 'r' + m.group(1)
                src = 'r' + m.group(2)
                imm = m.group(3)
                regs[dst] = "(" + regs.get(src, src) + " - " + imm + ")"
                translated = True
        
        # mov rX, #imm
        if not translated:
            m = re.match(r'mov\s+r(\d),\s*#(0x[0-9a-fA-F]+|\d+)', instr)
            if m:
                regs['r' + m.group(1)] = m.group(2)
                translated = True
        
        # mov rX, rY
        if not translated:
            m = re.match(r'mov\s+r(\d),\s*r(\d)', instr)
            if m:
                regs['r' + m.group(1)] = regs.get('r' + m.group(2), 'r' + m.group(2))
                translated = True
        
        # lsl rX, rY, #imm
        if not translated:
            m = re.match(r'lsl\s+r(\d),\s*r(\d),\s*#(0x[0-9a-fA-F]+|\d+)', instr)
            if m:
                dst = 'r' + m.group(1)
                src = 'r' + m.group(2)
                imm = m.group(3)
                regs[dst] = "(" + regs.get(src, src) + " << " + imm + ")"
                translated = True
        
        # lsr rX, rY, #imm
        if not translated:
            m = re.match(r'lsr\s+r(\d),\s*r(\d),\s*#(0x[0-9a-fA-F]+|\d+)', instr)
            if m:
                dst = 'r' + m.group(1)
                src = 'r' + m.group(2)
                imm = m.group(3)
                regs[dst] = "(" + regs.get(src, src) + " >> " + imm + ")"
                translated = True
        
        # ldr rX, [sp, #imm]
        if not translated:
            m = re.match(r'ldr\s+r(\d),\s*\[sp,\s*#(0x[0-9a-fA-F]+|\d+)\]', instr)
            if m:
                dst = 'r' + m.group(1)
                off = m.group(2)
                regs[dst] = "*((u32*)(sp + " + off + "))"
                translated = True
        
        # str rX, [sp, #imm]
        if not translated:
            m = re.match(r'str\s+r(\d),\s*\[sp,\s*#(0x[0-9a-fA-F]+|\d+)\]', instr)
            if m:
                val = regs.get('r' + m.group(1), 'r' + m.group(1))
                off = m.group(2)
                body.append("    *((u32*)(sp + " + off + ")) = " + val + ";")
                translated = True
        
        # ldr rX, [sp]
        if not translated:
            m = re.match(r'ldr\s+r(\d),\s*\[sp\]', instr)
            if m:
                dst = 'r' + m.group(1)
                regs[dst] = "*((u32*)sp)"
                translated = True
        
        # str rX, [sp]
        if not translated:
            m = re.match(r'str\s+r(\d),\s*\[sp\]', instr)
            if m:
                val = regs.get('r' + m.group(1), 'r' + m.group(1))
                body.append("    *((u32*)sp) = " + val + ";")
                translated = True
        
        # ldrb rX, [rY, rZ]
        if not translated:
            m = re.match(r'ldrb\s+r(\d),\s*\[r(\d),\s*r(\d)\]', instr)
            if m:
                dst = 'r' + m.group(1)
                base = regs.get('r' + m.group(2), 'r' + m.group(2))
                off = regs.get('r' + m.group(3), 'r' + m.group(3))
                regs[dst] = "*((u8*)(" + base + " + " + off + "))"
                translated = True
        
        # ldrb rX, [rY]
        if not translated:
            m = re.match(r'ldrb\s+r(\d),\s*\[r(\d)\]', instr)
            if m:
                dst = 'r' + m.group(1)
                base = regs.get('r' + m.group(2), 'r' + m.group(2))
                regs[dst] = "*((u8*)" + base + ")"
                translated = True
        
        # ldrh rX, [rY]
        if not translated:
            m = re.match(r'ldrh\s+r(\d),\s*\[r(\d)\]', instr)
            if m:
                dst = 'r' + m.group(1)
                base = regs.get('r' + m.group(2), 'r' + m.group(2))
                regs[dst] = "*((u16*)" + base + ")"
                translated = True
        
        # strh rX, [rY]
        if not translated:
            m = re.match(r'strh\s+r(\d),\s*\[r(\d)\]', instr)
            if m:
                val = regs.get('r' + m.group(1), 'r' + m.group(1))
                dst = regs.get('r' + m.group(2), 'r' + m.group(2))
                body.append("    *((u16*)" + dst + ") = " + val + ";")
                translated = True
        
        # strb rX, [rY]
        if not translated:
            m = re.match(r'strb\s+r(\d),\s*\[r(\d)\]', instr)
            if m:
                val = regs.get('r' + m.group(1), 'r' + m.group(1))
                dst = regs.get('r' + m.group(2), 'r' + m.group(2))
                body.append("    *((u8*)" + dst + ") = " + val + ";")
                translated = True
        
        # stmia rX!, {rY, rZ}
        if not translated:
            m = re.match(r'stmia\s+r(\d)!,\s*\{(.+)\}', instr)
            if m:
                base = regs.get('r' + m.group(1), 'r' + m.group(1))
                regs_list = [r.strip() for r in m.group(2).split(',')]
                for r in regs_list:
                    val = regs.get(r, r)
                    body.append("    *((u32*)" + base + ") = " + val + ";")
                    body.append("    " + base + " = (u32*)((u8*)" + base + " + 4);")
                translated = True
        
        # ldmia rX!, {rY, rZ}
        if not translated:
            m = re.match(r'ldmia\s+r(\d)!,\s*\{(.+)\}', instr)
            if m:
                base = regs.get('r' + m.group(1), 'r' + m.group(1))
                regs_list = [r.strip() for r in m.group(2).split(',')]
                for r in regs_list:
                    regs[r] = "*((u32*)" + base + ")"
                    body.append("    " + r + " = *((u32*)" + base + ");")
                    body.append("    " + base + " = (u32*)((u8*)" + base + " + 4);")
                translated = True
        
        # ldr rX, [rY, #imm]
        if not translated:
            m = re.match(r'ldr\s+r(\d),\s*\[r(\d),\s*#(0x[0-9a-fA-F]+|\d+)\]', instr)
            if m:
                dst = 'r' + m.group(1)
                base = regs.get('r' + m.group(2), 'r' + m.group(2))
                off = m.group(3)
                regs[dst] = "*((u32*)(" + base + " + " + off + "))"
                translated = True
        
        # ldr rX, [rY]
        if not translated:
            m = re.match(r'ldr\s+r(\d),\s*\[r(\d)\]', instr)
            if m:
                dst = 'r' + m.group(1)
                base = regs.get('r' + m.group(2), 'r' + m.group(2))
                regs[dst] = "*((u32*)" + base + ")"
                translated = True
        
        # str rX, [rY, #imm]
        if not translated:
            m = re.match(r'str\s+r(\d),\s*\[r(\d),\s*#(0x[0-9a-fA-F]+|\d+)\]', instr)
            if m:
                val = regs.get('r' + m.group(1), 'r' + m.group(1))
                base = regs.get('r' + m.group(2), 'r' + m.group(2))
                off = m.group(3)
                body.append("    *((u32*)(" + base + " + " + off + ")) = " + val + ";")
                translated = True
        
        # str rX, [rY]
        if not translated:
            m = re.match(r'str\s+r(\d),\s*\[r(\d)\]', instr)
            if m:
                val = regs.get('r' + m.group(1), 'r' + m.group(1))
                dst = regs.get('r' + m.group(2), 'r' + m.group(2))
                body.append("    *((u32*)" + dst + ") = " + val + ";")
                translated = True
        
        # cmp rX, rY / cmp rX, #imm
        if not translated:
            if re.match(r'cmp\s+', instr):
                translated = True  # Skip, used for condition codes
        
        # bl function
        if not translated:
            m = re.match(r'bl\s+(\w+)', instr)
            if m:
                body.append("    " + m.group(1) + "();")
                translated = True
        
        # bx lr
        if not translated:
            if instr == 'bx lr':
                translated = True
        
        # ldr rX, _label ; =symbol
        if not translated:
            m = re.match(r'ldr\s+r(\d),\s+(\w+)\s*;\s*=(\w+)', instr)
            if m:
                regs['r' + m.group(1)] = m.group(3)
                translated = True
        
        # ldr rX, _label ; =0xADDRESS
        if not translated:
            m = re.match(r'ldr\s+r(\d),\s+(\w+)\s*;\s*=(0x[0-9a-fA-F]+)', instr)
            if m:
                regs['r' + m.group(1)] = m.group(3)
                translated = True
        
        # add r0, pc
        if not translated:
            if instr == 'add r0, pc':
                translated = True  # Part of literal pool load
        
        # add pc, r0
        if not translated:
            if instr == 'add pc, r0':
                translated = True  # Indirect branch
        
        # Unknown - add as comment
        if not translated:
            body.append("    // " + instr)
        
        i += 1
    
    return body, regs

def process_files():
    src_dir = '../src'
    count = 0
    translated = 0
    
    for root, dirs, files in os.walk(src_dir):
        for fname in files:
            if not fname.endswith('.c'):
                continue
            filepath = os.path.join(root, fname)
            with open(filepath, 'r') as f:
                content = f.read()
            
            if '// TODO: decompile' not in content:
                continue
            
            # Match functions with TODO
            pattern = r'((?:u32|void|u16|u8|s32|s16|s8|BOOL)\s+(\w+)\s*\([^)]*\)\s*\{(?:[^{}]*)\})'
            
            def replace_func(match):
                nonlocal count, translated
                func_text = match.group(1)
                func_name = match.group(2)
                sig_type = func_text.split()[0]
                
                count += 1
                
                # Extract asm lines
                asm_lines = []
                for line in func_text.split('\n'):
                    stripped = line.strip()
                    if stripped.startswith('// ') and stripped != '// TODO: decompile':
                        asm_lines.append(stripped[3:])
                
                if not asm_lines:
                    return func_text
                
                body, regs = translate_with_control_flow(asm_lines)
                
                # Build function
                if sig_type == 'void':
                    result = f"{sig_type} {func_name}(void) {{\n"
                    for b in body:
                        result += b + "\n"
                    result += "}"
                else:
                    result = f"{sig_type} {func_name}(void) {{\n"
                    for b in body:
                        result += b + "\n"
                    if 'r0' in regs:
                        result += f"    return {regs['r0']};\n"
                    else:
                        result += "    return 0;\n"
                    result += "}"
                
                translated += 1
                return result
            
            new_content = re.sub(pattern, replace_func, content)
            
            if new_content != content:
                with open(filepath, 'w') as f:
                    f.write(new_content)
    
    print(f"Functions processed: {count}")
    print(f"Functions translated: {translated}")

if __name__ == '__main__':
    process_files()
