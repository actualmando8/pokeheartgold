/* Decompiled from asm/overlay_01_021FED9C.s */
#include "global.h"

void ov01_021FED9C(void) {
}



void ov01_021FEDB8(void) {
}



void ov01_021FEDC8(void) {
    // str r2, [sp]
    ov01_021F19F4(*((u32*)r0), (r0 + 4), 0, 0x1e);
    // str r2, [sp]
    // add r4, #0x18
    ov01_021F1A18(*((u32*)r4), r4, 0, 0x87);
}



void ov01_021FEDF0(void) {
}



void ov01_021FEE04(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x1c
    // add r5, r0, #0
    // add r6, r1, #0
    // add r4, r2, #0
    // add r7, r3, #0
    // bl ov01_021F146C
    // mov r1, #7
    // str r0, [sp, #8]
    // bl ov01_021F1450
    // str r0, [sp, #0xc]
    // add r0, r6, #0
    // add r1, r7, #0
    // add r2, sp, #0x10
    // bl sub_020611C8
    // ldr r1, [sp, #0x18]
    // lsl r0, r4, #3
    // add r0, r1, r0
    // str r0, [sp, #0x18]
    // add r0, r5, #0
    // bl MapObject_GetPreviousYCoord
    // lsl r1, r0, #0xf
    // mov r0, #2
    // lsl r0, r0, #0xe
    // sub r0, r1, r0
    // str r0, [sp, #0x14]
    // add r0, r5, #0
    // mov r1, #2
    // bl MapObject_GetPriorityPlusValue
    // add r1, sp, #8
    // str r1, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #8]
    // ldr r1, _021FEE60 ; =ov01_02209124
    // add r2, sp, #0x10
    // mov r3, #0
    // bl ov01_021F1620
    // add sp, #0x1c
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _021FEE60: .word ov01_02209124
    // TODO: decompile
}



void ov01_021FEE64(void) {
    sub_02068D98();
    *((u32*)(r4 + 0x78)) = *((u32*)r0);
    *((u32*)(r4 + 0x7c)) = *((u32*)(r0 + 4));
    // str r0, [sp]
    // add r3, #0x18
    ov01_021F1A34(*((u32*)(r4 + 0x78)), r4, (*((u32*)(r0 + 4)) + 4), *((u32*)(r0 + 4)));
    // add r0, #0x24
    sub_02069998(r4, (*((u32*)(r4 + 0x7c)) + 4), r4);
}



void ov01_021FEE9C(void) {
}



void ov01_021FEEA8(void) {
    sub_02069948(r1);
    ov01_021F1640(r5);
    sub_020698E8(r4, (1 << 0xc), 0);
}



void ov01_021FEED0(void) {
}


