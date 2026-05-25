#!/usr/bin/env python3
"""
Finish translating remaining stub functions.
Stubs have format:
    void func(void) {
        // asm_instr1
        // asm_instr2
        // TODO: decompile
    }
"""

import os
import re
import sys

def translate_instructions(asm_lines):
    """Translate assembly instructions to C statements."""
    body = []
    regs = {}
    
    for instr in asm_lines:
        translated = False
        
        # add rX, #imm (implicit r0 in Thumb)
        m = re.match(r'add\s+r(\d),\s*#(0x[0-9a-fA-F]+|\d+)', instr)
        if m:
            dst = 'r' + m.group(1)
            imm = m.group(2)
            regs[dst] = "(" + regs.get(dst, dst) + " + " + imm + ")"
            translated = True
        
        # add rX, rY, rZ (three-operand: rX = rY + rZ)
        if not translated:
            m = re.match(r'add\s+r(\d),\s*r(\d),\s*r(\d)', instr)
            if m:
                dst = 'r' + m.group(1)
                src1 = 'r' + m.group(2)
                src2 = 'r' + m.group(3)
                regs[dst] = "(" + regs.get(src1, src1) + " + " + regs.get(src2, src2) + ")"
                translated = True
        
        # add rX, sp, #imm
        if not translated:
            m = re.match(r'add\s+r(\d),\s*sp,\s*#(0x[0-9a-fA-F]+|\d+)', instr)
            if m:
                dst = 'r' + m.group(1)
                imm = m.group(2)
                regs[dst] = "(sp + " + imm + ")"
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
        
        # sub rX, rY, #imm
        if not translated:
            m = re.match(r'sub\s+r(\d),\s*r(\d),\s*#(0x[0-9a-fA-F]+|\d+)', instr)
            if m:
                dst = 'r' + m.group(1)
                src = 'r' + m.group(2)
                imm = m.group(3)
                regs[dst] = "(" + regs.get(src, src) + " - " + imm + ")"
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
        
        # ldrh rX, [rY, #imm]
        if not translated:
            m = re.match(r'ldrh\s+r(\d),\s*\[r(\d),\s*#(0x[0-9a-fA-F]+|\d+)\]', instr)
            if m:
                dst = 'r' + m.group(1)
                base = regs.get('r' + m.group(2), 'r' + m.group(2))
                off = m.group(3)
                regs[dst] = "*((u16*)(" + base + " + " + off + "))"
                translated = True
        
        # ldrh rX, [rY]
        if not translated:
            m = re.match(r'ldrh\s+r(\d),\s*\[r(\d)\]', instr)
            if m:
                dst = 'r' + m.group(1)
                base = regs.get('r' + m.group(2), 'r' + m.group(2))
                regs[dst] = "*((u16*)" + base + ")"
                translated = True
        
        # ldrb rX, [rY, #imm]
        if not translated:
            m = re.match(r'ldrb\s+r(\d),\s*\[r(\d),\s*#(0x[0-9a-fA-F]+|\d+)\]', instr)
            if m:
                dst = 'r' + m.group(1)
                base = regs.get('r' + m.group(2), 'r' + m.group(2))
                off = m.group(3)
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
        
        # stmia rX!, {rY, rZ, ...}
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
        
        # ldmia rX!, {rY, rZ, ...}
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
        
        # ldr rX, _label ; =symbol (literal pool)
        if not translated:
            m = re.match(r'ldr\s+r(\d),\s+(\w+)\s*;\s*=(\w+)', instr)
            if m:
                dst = 'r' + m.group(1)
                regs[dst] = m.group(3)
                translated = True
        
        # ldr rX, _label ; =0xADDRESS
        if not translated:
            m = re.match(r'ldr\s+r(\d),\s+(\w+)\s*;\s*=(0x[0-9a-fA-F]+)', instr)
            if m:
                dst = 'r' + m.group(1)
                regs[dst] = m.group(3)
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
        
        # bl function_name
        if not translated:
            m = re.match(r'bl\s+(\w+)', instr)
            if m:
                fn = m.group(1)
                body.append("    " + fn + "();")
                translated = True
        
        # bx lr (skip)
        if not translated:
            if instr == 'bx lr':
                translated = True
        
        # cmp rX, rY (skip, used for condition codes)
        if not translated:
            m = re.match(r'cmp\s+r(\d),\s*r(\d)', instr)
            if m:
                translated = True
        
        # Skip unknown
        if not translated:
            body.append("    // " + instr)
    
    return body, regs

def process_file(filepath):
    """Process a single C file, translating stub functions."""
    with open(filepath, 'r') as f:
        content = f.read()
    
    # Pattern to match functions with TODO: decompile
    # Match from function signature to closing brace
    pattern = r'((?:u32|void|u16|u8|s32|s16|s8|BOOL)\s+\w+\s*\([^)]*\)\s*\{(?:[^{}]*)\})'
    
    changed = False
    
    def replace_func(match):
        nonlocal changed
        func_text = match.group(1)
        
        if '// TODO: decompile' not in func_text:
            return func_text
        
        # Extract function signature
        sig_match = re.match(r'((?:u32|void|u16|u8|s32|s16|s8|BOOL)\s+\w+\s*\([^)]*\))', func_text)
        if not sig_match:
            return func_text
        sig = sig_match.group(1)
        ret_type = sig.split()[0]
        func_name = sig.split()[1].split('(')[0]
        
        # Extract assembly lines
        asm_lines = []
        for line in func_text.split('\n'):
            stripped = line.strip()
            if stripped.startswith('// ') and stripped != '// TODO: decompile':
                asm_lines.append(stripped[3:])
        
        if not asm_lines:
            return func_text
        
        body, regs = translate_instructions(asm_lines)
        
        # Build return
        if ret_type == 'void':
            if body:
                result = sig + " {\n" + "\n".join(body) + "\n}"
            else:
                result = sig + " {\n}"
        else:
            if 'r0' in regs:
                body.append("    return " + regs['r0'] + ";")
            else:
                default = "0"
                if ret_type == 'BOOL':
                    default = "FALSE"
                body.append("    return " + default + ";")
            result = sig + " {\n" + "\n".join(body) + "\n}"
        
        changed = True
        return result
    
    new_content = re.sub(pattern, replace_func, content)
    
    if changed:
        with open(filepath, 'w') as f:
            f.write(new_content)
        return True
    return False

def main():
    src_dir = '../src'
    count = 0
    total_funcs = 0
    
    for root, dirs, files in os.walk(src_dir):
        for fname in files:
            if fname.endswith('.c'):
                filepath = os.path.join(root, fname)
                with open(filepath, 'r') as f:
                    content = f.read()
                # Count TODO: decompile markers
                n = content.count('// TODO: decompile')
                total_funcs += n
                
                if process_file(filepath):
                    count += 1
    
    # Count remaining
    remaining = 0
    for root, dirs, files in os.walk(src_dir):
        for fname in files:
            if fname.endswith('.c'):
                filepath = os.path.join(root, fname)
                with open(filepath, 'r') as f:
                    content = f.read()
                remaining += content.count('// TODO: decompile')
    
    print(f"Processed {count} files")
    print(f"Functions translated: {total_funcs - remaining}")
    print(f"Remaining stubs: {remaining}")

if __name__ == '__main__':
    main()
