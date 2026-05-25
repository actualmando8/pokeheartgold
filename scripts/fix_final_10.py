#!/usr/bin/env python3
"""
Manually fix the final 10 remaining stub functions.
These have complex control flow with branches.
"""

import re

# Manual decompilations for the 10 remaining functions
FIXES = {
    'src/overlay_01_021FAD1C.c': {
        'ov01_021FAD1C': '''u32 ov01_021FAD1C(u32 *aMin, u32 *bMin, u32 *aMax, u32 *bMax) {
    u32 a0, b0, a1, b1;
    
    a0 = *aMin;
    b0 = *bMin;
    
    if (a0 > b0) {
        a1 = bMin;
        b1 = aMin;
    } else {
        a1 = aMin;
        b1 = bMin;
    }
    
    a0 = *aMax;
    b0 = *bMax;
    
    if (a0 > b0) {
        a1 = bMax;
        b1 = aMax;
    } else {
        a1 = aMax;
        b1 = bMax;
    }
    
    /* Check intersection */
    if (*aMax > *aMin)
        return 0;
    if (*bMin > *aMax)
        return 0;
    if (*bMax > *aMin)
        return 0;
    if (*bMin > *aMax)
        return 0;
    
    return 1;
}''',
    },
    
    'src/overlay_03.c': {
        'ov03_02256B40': '''u32 ov03_02256B40(int a1) {
    u16 i;
    u32 result;
    
    if (a1 < 3) {
        result = 0;
        for (i = 0; i < (u16)a1; i++) {
            if (*((u16*)a1) != 0xFFFF)
                break;
            a1 += 2;
        }
    } else {
        result = 0xFF00;
        for (i = 0; i < result; i++) {
            if (*((u16*)a1) != 0xFFFF)
                break;
            a1 += 2;
        }
    }
    
    return i;
}''',
    },
    
    'src/overlay_112.c': {
        'ov112_021EFD50': '''u32 ov112_021EFD50(u32 a1, u32 a2) {
    u32 i;
    
    for (i = 0; i < 0xA; i++) {
        u16 v = *((u16*)(a1 + 0x9DB8));
        if (v == 0)
            break;
        a2++;
        a1 += 4;
    }
    
    if (*((u8*)(a1 + 0xAABC)) & 0x80) {
        u16 v = *((u16*)(a1 + 0xB002));
        if (v == 0)
            return a2;
        a2++;
    }
    
    return a2;
}''',
    },
    
    'src/overlay_18.c': {
        'ov18_021F8850': '''u32 ov18_021F8850(u32 a1, u32 a2) {
    u32 i;
    u16 count = *((u16*)(a1 + 0x7B4));
    
    if (count <= 0)
        return 0;
    
    if (a2 == 0) {
        u16 v = *((u16*)a1);
        if (v == a2)
            return a1;
        return 0;
    }
    
    for (i = 0; i < count; i++) {
        if (*((u16*)(a1 + i * 4)) == a2)
            return a1;
        a1 += 4;
    }
    
    return 0;
}''',
    },
    
    'src/overlay_45_thumb.c': {
        'ov45_0222B28C': '''u32 ov45_0222B28C(u32 a1, u32 a2) {
    u32 i;
    
    if (a2 <= 0)
        return 0;
    
    for (i = 0; i < a2; i++) {
        if (*((u16*)a1) != 0xFFFF)
            return 1;
        a1 += 2;
    }
    
    return 0;
}''',
    },
    
    'src/overlay_73.c': {
        'ov73_021E7A8C': '''u32 ov73_021E7A8C(u32 a1, u32 a2) {
    u32 i;
    u32 *data = (u32*)ov73_021EA664;
    u32 *ptr = (u32*)data[a1];
    
    if (*((u8*)ptr) != 0xFF) {
        if (*((u8*)ptr) == a2)
            return 1;
    }
    
    for (i = 0; ; i++) {
        u8 v = *((u8*)(ptr + i));
        if (v == 0xFF)
            return 0;
        if (v == a2)
            return 1;
    }
}''',
    },
    
    'src/overlay_74_thumb.c': {
        'ov74_02228C84': '''u32 ov74_02228C84(u32 a1, u32 a2) {
    u32 i;
    u16 count = *((u16*)(ov74_0223BD68 + 2));
    
    if (a1 == count)
        return *((u16*)ov74_0223BD68);
    
    for (i = 0; i < 0x123; i++) {
        u16 v = *((u16*)(ov74_0223BD68 + i * 4));
        if (v == a1)
            return i;
    }
    
    return 0x3F;
}''',
    },
    
    'src/unk_02004A44.c': {
        'GBSounds_GetGBSeqNoByDSSeqNo': '''u32 GBSounds_GetGBSeqNoByDSSeqNo(u32 a1) {
    u32 i;
    
    for (i = 0; i < 0x88; i++) {
        u16 seq = *((u16*)(_020F5730 + i * 4));
        if (seq == a1) {
            u16 result = *((u16*)(_020F5730 + 2 + i * 4));
            return result;
        }
    }
    
    return 0;
}''',
    },
    
    'src/unk_02013534.c': {
        'sub_02013AF8': '''u32 sub_02013AF8(u32 a1, u32 a2) {
    u32 i;
    
    for (i = 0; i < 0xC; i++) {
        u8 lo = *((u8*)(_020F5F2C + i * 2));
        u8 hi = *((u8*)(_020F5F2C + i * 2 + 1));
        if (lo <= a1 && hi <= a2)
            return i;
    }
    
    return 0xC;
}''',
    },
    
    'src/unk_02034354.c': {
        'sub_020347A0': '''u32 sub_020347A0(void) {
    u32 i;
    u32 *ptr = *(_021D4130);
    
    for (i = 0; i < 8; i++) {
        u8 v = *((u8*)(ptr + 0xE7 * 4));
        if (v == 2 || v == 3) {
            i++;
            ptr++;
        }
    }
    
    return i;
}''',
    },
}

def apply_fixes():
    import os
    base = os.path.dirname(os.path.abspath(__file__))
    for filepath, funcs in FIXES.items():
        fullpath = os.path.join(base, '..', filepath)
        with open(fullpath, 'r') as f:
            content = f.read()
        
        for func_name, replacement in funcs.items():
            # Find the function with TODO: decompile
            pattern = rf'(void {func_name}\s*\([^)]*\)\s*\{{[^}}]*// TODO: decompile\s*\n\}})'
            m = re.search(pattern, content, re.DOTALL)
            if m:
                content = content.replace(m.group(1), replacement)
                print(f"Fixed {func_name} in {filepath}")
            else:
                # Try u32 signature
                pattern = rf'(u32 {func_name}\s*\([^)]*\)\s*\{{[^}}]*// TODO: decompile\s*\n\}})'
                m = re.search(pattern, content, re.DOTALL)
                if m:
                    content = content.replace(m.group(1), replacement)
                    print(f"Fixed {func_name} in {filepath}")
                else:
                    print(f"NOT FOUND: {func_name} in {filepath}")
        
        with open(fullpath, 'w') as f:
            f.write(content)

if __name__ == '__main__':
    apply_fixes()
