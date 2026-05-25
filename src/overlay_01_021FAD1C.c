/* Decompiled from asm/overlay_01_021FAD1C.s */
#include "global.h"

/* Address: 0x021FAD1C
 * Registers: r0=aMin, r1=bMin, r2=aMax, r3=bMax
 * Compares two ranges and checks if they intersect.
 * Returns 1 if intersection exists, 0 otherwise.
 */
u32 ov01_021FAD1C(u32 *aMin, u32 *bMin, u32 *aMax, u32 *bMax) {
    u32 minA, minB, maxA, maxB;
    
    minA = *aMin;
    minB = *bMin;
    
    if (minA > minB) {
        maxA = bMin;
        maxB = aMin;
    } else {
        maxA = aMin;
        maxB = bMin;
    }
    
    maxA = *aMax;
    maxB = *bMax;
    
    if (maxA > maxB) {
        maxA = bMax;
        maxB = aMax;
    } else {
        maxA = aMax;
        maxB = bMax;
    }
    
    if (*aMax > *aMin)
        return 0;
    if (*bMin > *aMax)
        return 0;
    if (*bMax > *aMin)
        return 0;
    if (*bMin > *aMax)
        return 0;
    
    return 1;
}




void ov01_021FAD6C(void) {
}




void ov01_021FAD9C(void) {
}




void ov01_021FADBC(void) {
}




void ov01_021FADD4(void) {
    *((u32*)r0) = r2;
}




u32 ov01_021FADEC(void) {
    *((u16*)r3) = r0;
    *((u16*)r3) = ((s32)(((r4 + ((s32)((r1 + r5)) >> 1)) + ((s32)((r1 + r5)) >> 1))) >> 1);
    *((u16*)r3) = r0;
    return 0;
}




u32 ov01_021FAE50(void) {
    *((u32*)sp) = r0;
    *((u32*)(sp + 0xe4)) = *((u32*)(sp + 0xe4));
    *((u32*)(sp + 4)) = r1;
    *((u32*)(sp + 0x30)) = r2;
    *((u32*)(sp + 0x34)) = r3;
    *((u32*)(sp + 0x14)) = (sp + 0x28);
    *((u32*)(sp + 0x18)) = (sp + 0x28);
    *((u32*)(sp + 0x10)) = *((u32*)(sp + 0x14));
    *((u32*)(sp + 0x1c)) = *((u32*)(sp + 0x38));
    *((u32*)(sp + 0xc)) = ((s32)(*((u32*)(sp + 0x38))) >> 0x1f);
    // mov ip, r0
    // adc r3, r2
    *((u32*)(sp + 0xc)) = *((u32*)(sp + 0xc));
    // adc r1, r2
    // mov r0, ip
    // neg r0, r0
    *((u32*)(sp + 0x54)) = ((*((u32*)(sp + 0x1c)) + *((u32*)(sp + 0x2c))) + ((*((u32*)(sp + 0x1c)) + *((u32*)(sp + 0x2c))) + *((u32*)(sp + 0x1c))));
    *((u32*)(sp + 0x18)) = *((u32*)(sp + 0x3c));
    // sub r7, r5, r0
    *((u32*)(sp + 0x20)) = *((u32*)(sp + 4));
    *((u32*)(sp + 0x24)) = *((u32*)(sp + 4));
    // sub r0, r1, r0
    *((u32*)*((u32*)(sp + 0xe4))) = *((u32*)(sp + 0x24));
    *((u32*)*((u32*)(sp + 0xe4))) = *((u32*)(sp + 0x54));
    *((u32*)*((u32*)(sp + 0xe4))) = *((u32*)(sp + 0x54));
    return *((u32*)(sp + 0xe4));
}



