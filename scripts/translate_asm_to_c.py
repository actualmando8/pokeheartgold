#!/usr/bin/env python3
"""
Batch translator: Converts #ifdef MWERKS asm() blocks in .c files to C code.
Reads the original assembly from git (asm/*.s), parses Thumb instructions,
and generates C function bodies using pattern matching and register tracking.

Usage: python3 scripts/translate_asm_to_c.py [file1.c file2.c ...]
If no files specified, processes all files with #ifdef MWERKS in src/
"""

import os
import re
import subprocess
import sys
from dataclasses import dataclass, field
from typing import List, Optional, Dict, Tuple, Set

PROJECT_DIR = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
SRC_DIR = os.path.join(PROJECT_DIR, "src")

# Known function signatures from headers
KNOWN_FUNCTIONS = {
    'Heap_Alloc': 'void *Heap_Alloc(enum HeapID heapID, u32 size)',
    'Heap_Free': 'void Heap_Free(void *ptr)',
    'EasyChatManager_New': 'EasyChatManager *EasyChatManager_New(enum HeapID heapID)',
    'EasyChatManager_Delete': 'void EasyChatManager_Delete(EasyChatManager *mgr)',
    'EasyChatManager_ReadWordIntoString': 'void EasyChatManager_ReadWordIntoString(EasyChatManager *mgr, u16 word, String *out)',
    'Pokedex_CheckMonSeenFlag': 'BOOL Pokedex_CheckMonSeenFlag(Pokedex *pokedex, u16 species)',
    'GetECWordIndexByPair': 'u16 GetECWordIndexByPair(u32 category, u32 msgNo)',
    'Save_EasyChat_GetTrendySayingFlag': 'BOOL Save_EasyChat_GetTrendySayingFlag(SaveEasyChat *ec, u32 flag)',
    'Save_EasyChat_GetGreetingsFlag': 'BOOL Save_EasyChat_GetGreetingsFlag(SaveEasyChat *ec, u32 flag)',
    'ManagedSprite_TickFrame': 'void ManagedSprite_TickFrame(ManagedSprite *sprite)',
    'ManagedSprite_SetAnim': 'void ManagedSprite_SetAnim(ManagedSprite *sprite, int anim)',
    'ManagedSprite_SetAffineScale': 'void ManagedSprite_SetAffineScale(ManagedSprite *sprite, u32 scale)',
    'ManagedSprite_OffsetPositionXY': 'void ManagedSprite_OffsetPositionXY(ManagedSprite *sprite, s16 dx, s16 dy)',
    'PlaySE': 'void PlaySE(u32 seId)',
    'String_New': 'String *String_New(u32 capacity)',
    'String_Delete': 'void String_Delete(String *str)',
    'String_Cat': 'void String_Cat(String *dest, String *src)',
    'String16_FormatInteger': 'void String16_FormatInteger(String *str, u32 value, u32 base, u32 flags)',
    'BeginNormalPaletteFade': 'void BeginNormalPaletteFade(u32 direction, u32 numColors, u32 palette, u32 count, u32 speed, u32 type)',
    'IsPaletteFadeFinished': 'BOOL IsPaletteFadeFinished(void)',
    'PaletteData_LoadPalette': 'void PaletteData_LoadPalette(u32 *data, u32 count, u32 dest, u32 src, u32 a4, u32 a5)',
    'NNS_G2dGetUnpackedPaletteData': 'u32 *NNS_G2dGetUnpackedPaletteData(void *palette)',
    'SpriteSystem_DrawSprites': 'void SpriteSystem_DrawSprites(SpriteSystem *sys)',
    'TouchHitboxController_IsTriggered': 'BOOL TouchHitboxController_IsTriggered(void *ctx, u32 flags)',
    'TouchHitboxController_Create': 'void *TouchHitboxController_Create(void *ctx, u32 a1, u32 a2, void *callback)',
    'System_GetTouchHeld': 'u32 System_GetTouchHeld(void)',
}

# Common return types
RETURN_TYPES = {
    'Heap_Alloc': 'void *',
    'Heap_Free': 'void',
    'PlaySE': 'void',
    'String_New': 'String *',
    'String_Delete': 'void',
    'IsPaletteFadeFinished': 'BOOL',
}

@dataclass
class RegisterState:
    """Track register values during translation."""
    values: Dict[str, str] = field(default_factory=dict)
    stack_vars: Dict[str, str] = field(default_factory=dict)
    next_var: int = 0
    
    def get_var(self, prefix='v'):
        v = f"{prefix}{self.next_var}"
        self.next_var += 1
        return v
    
    def get_reg_value(self, reg):
        reg = reg.lower()
        if reg in self.values:
            return self.values[reg]
        if reg == 'r0': return 'r0'
        if reg == 'r1': return 'r1'
        if reg == 'r2': return 'r2'
        if reg == 'r3': return 'r3'
        if reg == 'r4': return 'r4'
        if reg == 'r5': return 'r5'
        if reg == 'r6': return 'r6'
        if reg == 'r7': return 'r7'
        if reg == 'r8': return 'r8'
        if reg == 'r9': return 'r9'
        if reg == 'r10' or reg == 'ip': return 'ip'
        if reg == 'r11' or reg == 'fp': return 'fp'
        if reg == 'r12' or reg == 'sl': return 'sl'
        if reg == 'r13' or reg == 'sp': return 'sp'
        if reg == 'r14' or reg == 'lr': return 'lr'
        if reg == 'r15' or reg == 'pc': return 'pc'
        return reg

def parse_immediate(val):
    """Parse an immediate value."""
    val = val.strip()
    if val.startswith('#'):
        val = val[1:]
    if val.startswith('0x') or val.startswith('0X'):
        return val
    try:
        return str(int(val))
    except ValueError:
        return val

def parse_register(val):
    """Parse a register name, handling aliases."""
    val = val.strip().lower()
    if val == 'ip': return 'r10'
    if val == 'fp': return 'r11'
    if val == 'sl': return 'r12'
    if val == 'sp': return 'sp'
    if val == 'lr': return 'lr'
    if val == 'pc': return 'pc'
    return val

def extract_bl_target(line):
    """Extract function name from bl/blx instruction."""
    m = re.match(r'bl\s+(\w+)', line)
    if m:
        return m.group(1)
    m = re.match(r'blx\s+(\w+)', line)
    if m:
        return m.group(1)
    return None

def is_simple_wrapper(lines):
    """Check if function is a simple wrapper (just calls one function)."""
    bl_calls = [l for l in lines if l.startswith('bl ') or l.startswith('blx ')]
    if len(bl_calls) == 1:
        target = extract_bl_target(bl_calls[0])
        if target and not target.startswith('r') and not target.startswith('_'):
            return target
    return None

def translate_simple_mem_ops(lines):
    """Translate simple memory store/load sequences."""
    stores = []
    for line in lines:
        # str rX, [rY, #imm]
        m = re.match(r'str\s+(\w+),\s*\[(\w+),\s*#(0x[0-9a-fA-F]+|\d+)\]', line)
        if m:
            stores.append(('str', m.group(1), m.group(2), m.group(3)))
            continue
        # strh rX, [rY, #imm]
        m = re.match(r'strh\s+(\w+),\s*\[(\w+),\s*#(0x[0-9a-fA-F]+|\d+)\]', line)
        if m:
            stores.append(('strh', m.group(1), m.group(2), m.group(3)))
            continue
        # strb rX, [rY, #imm]
        m = re.match(r'strb\s+(\w+),\s*\[(\w+),\s*#(0x[0-9a-fA-F]+|\d+)\]', line)
        if m:
            stores.append(('strb', m.group(1), m.group(2), m.group(3)))
            continue
        # ldr rX, [rY, #imm]
        m = re.match(r'ldr\s+(\w+),\s*\[(\w+),\s*#(0x[0-9a-fA-F]+|\d+)\]', line)
        if m:
            stores.append(('ldr', m.group(1), m.group(2), m.group(3)))
            continue
    return stores

def count_instructions(lines):
    """Count actual instructions (not labels, directives, or push/pop)."""
    count = 0
    for line in lines:
        if line.startswith(('push', 'pop', 'bx lr', 'nop', '.balign', '.word', '.short', '.byte')):
            continue
        if line.endswith(':') or line.startswith('_'):
            continue
        count += 1
    return count

def translate_function_to_c(name, address, lines, is_arm=False):
    """Try to translate a function to C. Returns C code or None if too complex."""
    
    # Filter out labels, directives, and prologue/epilogue
    core_lines = []
    for line in lines:
        if line.startswith(('_', '.', 'thumb_func', 'arm_func')):
            continue
        if line.endswith(':') and not line.startswith('bl'):
            continue
        if line.strip() in ('', 'nop'):
            continue
        core_lines.append(line)
    
    # Pattern 1: Simple wrapper
    target = is_simple_wrapper(core_lines)
    if target:
        ret_type = RETURN_TYPES.get(target, 'void')
        if ret_type == 'void':
            return f"void {name}(void) {{\n    {target}();\n}}"
        else:
            return f"{ret_type} {name}(void) {{\n    return {target}();\n}}"
    
    # Pattern 2: Simple memory operations (store constants to struct fields)
    instr_count = count_instructions(core_lines)
    
    # Too complex for auto-translation
    if instr_count > 200:
        return None
    
    # Has loops (branch backwards)
    has_loop = False
    labels = set()
    for line in core_lines:
        if line.endswith(':'):
            labels.add(line[:-1])
        if line.startswith('b') and len(line.split()) >= 2:
            target = line.split()[1]
            if target in labels or target.endswith('b'):
                has_loop = True
    
    if has_loop:
        return None
    
    # Has conditional branches with complex control flow
    branch_count = sum(1 for l in core_lines if l.startswith(('beq ', 'bne ', 'bhi ', 'blo ', 'bhs ', 'bls ', 'bgt ', 'ble ', 'bge ', 'blt ')))
    if branch_count > 4:
        return None
    
    # Try to translate simple straight-line code
    if instr_count <= 50 and branch_count <= 2:
        return translate_straight_line(name, address, core_lines)
    
    return None

def translate_straight_line(name, address, lines):
    """Translate straight-line code (no loops, few branches)."""
    state = RegisterState()
    c_lines = []
    c_lines.append(f"/* {name} - Original at {address} */")
    
    # Determine parameters from register usage
    params = []
    uses_r0 = any('r0' in l for l in lines)
    uses_r1 = any('r1' in l for l in lines)
    uses_r2 = any('r2' in l for l in lines)
    uses_r3 = any('r3' in l for l in lines)
    
    if uses_r0: params.append('void *r0')
    if uses_r1: params.append('u32 r1')
    if uses_r2: params.append('u32 r2')
    if uses_r3: params.append('u32 r3')
    
    param_str = ', '.join(params) if params else 'void'
    
    # Check return value
    returns_value = False
    for line in lines:
        if 'mov r0,' in line or 'mov r0, #' in line:
            returns_value = True
            break
    
    ret_type = 'u32' if returns_value else 'void'
    
    c_lines.append(f"{ret_type} {name}({param_str}) {{")
    
    # Track saved registers
    saved_regs = set()
    for line in lines:
        m = re.match(r'push\s*\{([^}]+)\}', line)
        if m:
            for reg in m.group(1).split(','):
                reg = reg.strip()
                if reg != 'lr':
                    saved_regs.add(reg)
    
    # Translate instructions
    for line in lines:
        if line.startswith(('push', 'pop', 'bx lr', 'add sp', 'sub sp', 'nop')):
            continue
        if line.endswith(':'):
            continue
            
        # str rX, [rY, #imm] -> *(type *)(base + imm) = val
        m = re.match(r'str\s+(\w+),\s*\[(\w+),\s*#(0x[0-9a-fA-F]+|\d+)\]', line)
        if m:
            src = state.get_reg_value(m.group(1))
            base = state.get_reg_value(m.group(2))
            imm = m.group(3)
            c_lines.append(f"    ((u32 *){base})[{imm} / 4] = {src};")
            continue
            
        m = re.match(r'strh\s+(\w+),\s*\[(\w+),\s*#(0x[0-9a-fA-F]+|\d+)\]', line)
        if m:
            src = state.get_reg_value(m.group(1))
            base = state.get_reg_value(m.group(2))
            imm = m.group(3)
            c_lines.append(f"    ((u16 *){base})[{imm} / 2] = {src};")
            continue
            
        m = re.match(r'strb\s+(\w+),\s*\[(\w+),\s*#(0x[0-9a-fA-F]+|\d+)\]', line)
        if m:
            src = state.get_reg_value(m.group(1))
            base = state.get_reg_value(m.group(2))
            imm = m.group(3)
            c_lines.append(f"    ((u8 *){base})[{imm}] = {src};")
            continue
            
        # mov rX, #imm
        m = re.match(r'mov\s+(\w+),\s*#(0x[0-9a-fA-F]+|\d+)', line)
        if m:
            reg = m.group(1)
            val = m.group(2)
            state.values[reg] = val
            continue
            
        # mov rX, rY
        m = re.match(r'mov\s+(\w+),\s*(\w+)', line)
        if m:
            state.values[m.group(1)] = state.get_reg_value(m.group(2))
            continue
            
        # bl function
        m = re.match(r'bl\s+(\w+)', line)
        if m:
            func = m.group(1)
            c_lines.append(f"    {func}();")
            state.values['r0'] = 'ret_val'
            continue
    
    c_lines.append("}")
    return '\n'.join(c_lines)

def extract_asm_blocks(c_content):
    """Extract #ifdef MWERKS asm() blocks from C file."""
    blocks = []
    pattern = r'(void\s+\w+\([^)]*\)\s*\{[^}]*?)#ifdef MWERKS\s+asm\(\s*"([^"]+)"\s*\);\s*#endif\s*\}'
    
    for m in re.finditer(pattern, c_content, re.DOTALL):
        func_header = m.group(1)
        asm_body = m.group(2)
        # Extract function name
        name_m = re.search(r'void\s+(\w+)\s*\(([^)]*)\)', func_header)
        if name_m:
            func_name = name_m.group(1)
            params = name_m.group(2)
            blocks.append({
                'name': func_name,
                'params': params,
                'asm': asm_body,
                'full': m.group(0),
                'start': m.start(),
                'end': m.end(),
            })
    return blocks

def get_original_asm(asm_filename):
    """Get original assembly from git."""
    try:
        result = subprocess.run(
            ["git", "show", f"HEAD:asm/{asm_filename}"],
            capture_output=True, text=True, cwd=PROJECT_DIR, timeout=60
        )
        if result.returncode == 0:
            return result.stdout
    except:
        pass
    return None

def parse_original_functions(asm_content):
    """Parse original assembly into function blocks with full instruction lists."""
    functions = {}
    current = None
    for line in asm_content.split('\n'):
        stripped = line.strip()
        m = re.match(r'\s*(?:thumb|arm)_func_start\s+(\w+)', stripped)
        if m:
            current = {'name': m.group(1), 'lines': [], 'address': ''}
            continue
        if re.match(r'\s*(?:thumb|arm)_func_end', stripped):
            if current:
                functions[current['name']] = current
                current = None
            continue
        if current:
            m2 = re.match(r'^(\w+):\s*(?:;\s*(0x[0-9A-Fa-f]+))?', stripped)
            if m2 and m2.group(1) == current['name']:
                current['address'] = m2.group(2) or ''
            elif stripped and not stripped.startswith(('.balign', '.word', '.short', '.byte', '.section', '.asciz', '.ascii', '.string')):
                if not stripped.endswith(':') or stripped.startswith('bl'):
                    current['lines'].append(stripped)
    if current:
        functions[current['name']] = current
    return functions

def translate_file(c_filename, original_funcs):
    """Translate asm blocks in a C file using original assembly."""
    c_path = os.path.join(SRC_DIR, c_filename)
    
    with open(c_path, 'r') as f:
        content = f.read()
    
    blocks = extract_asm_blocks(content)
    if not blocks:
        return 0, 0
    
    translated = 0
    preserved = 0
    
    # Process blocks in reverse order to maintain positions
    for block in reversed(blocks):
        func_name = block['name']
        orig = original_funcs.get(func_name)
        
        if orig:
            c_code = translate_function_to_c(func_name, orig['address'], orig['lines'])
            if c_code:
                # Replace the asm block with C code
                new_content = content[:block['start']] + c_code + '\n' + content[block['end']:]
                content = new_content
                translated += 1
            else:
                preserved += 1
        else:
            preserved += 1
    
    if translated > 0:
        with open(c_path, 'w') as f:
            f.write(content)
    
    return translated, preserved

def main():
    if len(sys.argv) > 1:
        files = sys.argv[1:]
    else:
        files = []
        for f in sorted(os.listdir(SRC_DIR)):
            if f.endswith('.c'):
                filepath = os.path.join(SRC_DIR, f)
                with open(filepath, 'r') as fh:
                    content = fh.read()
                    if '#ifdef MWERKS' in content:
                        files.append(f)
    
    total_translated = 0
    total_preserved = 0
    processed = 0
    
    for f in files:
        asm_filename = f.replace('.c', '.s')
        asm_content = get_original_asm(asm_filename)
        
        if not asm_content:
            print(f"SKIP: {f} - no assembly found")
            continue
        
        original_funcs = parse_original_functions(asm_content)
        translated, preserved = translate_file(f, original_funcs)
        
        if translated > 0 or preserved > 0:
            status = f"{translated} translated, {preserved} preserved"
            print(f"OK: {f} - {status}")
            total_translated += translated
            total_preserved += preserved
            processed += 1
    
    print(f"\nDone: {processed} files processed, {total_translated} functions translated, {total_preserved} preserved as asm")

if __name__ == '__main__':
    main()
