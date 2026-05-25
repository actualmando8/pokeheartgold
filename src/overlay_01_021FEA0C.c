/* Decompiled from asm/overlay_01_021FEA0C.s */
#include "global.h"

void ov01_021FEA0C(void) {
}




void ov01_021FEA20(void) {
}




void ov01_021FEA30(void) {
    // str r1, [r0]
}




void ov01_021FEA38(void) {
}




void ov01_021FEA48(void) {
    // str r0, [sp]
    // add r1, #0x14
    // add r0, #0x28
    // add r1, #0x14
}




void ov01_021FEA7C(void) {
}




void ov01_021FEA90(void) {
}




void ov01_021FEAA0(void) {
}




void ov01_021FEAB0(void) {
    // add r2, sp, #0xc
    // str r1, [r2]
    *((u32*)(r2 + 4)) = 0;
    // str r3, [sp, #8]
    *((u32*)(r2 + 8)) = 0;
    ov01_021F146C(0);
    // ldr r0, [sp, #8]
    // str r4, [sp, #0x1c]
    // str r0, [sp, #0x18]
    MapObject_GetFieldSystem(r5);
    // str r0, [sp, #0x20]
    ov01_021F1450(r4, 5);
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #0x40]
    // str r5, [sp, #0x28]
    // add r1, r1, r0
    // str r1, [sp, #0xc]
    // add r0, r1, r0
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x20]
    // add r1, sp, #0xc
    sub_0206121C((2 << 0xe), (r7 << 0x10));
    // add r1, sp, #0xc
    MapObject_CopyPositionVector(r5);
    MapObject_GetPriorityPlusValue(r5, 2);
    // add r1, sp, #0x18
    // str r1, [sp]
    // str r0, [sp, #4]
    // ldr r3, [sp, #0x40]
    // add r2, sp, #0xc
    ov01_021F1620(r4, ov01_022090FC);
}




void ov01_021FEB30(void) {
}




u32 ov01_021FEB3C(void) {
    // ldmia r6!, {r0, r1}
    // add r3, #0x10
    // stmia r3!, {r0, r1}
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
}




void ov01_021FEB78(void) {
}




void ov01_021FEB8C(void) {
    // add r1, sp, #0xc
    // str r0, [r1]
    // add r1, sp, #0
    // add r1, sp, #0
}




void ov01_021FEBC0(void) {
    *((u32*)(r1 + 8)) = (*((u32*)(r1 + 8)) + 1);
    // ldmia r5!, {r0, r1}
    // add r4, sp, #0
    // stmia r4!, {r0, r1}
    // str r0, [r4]
    // add r4, #0x28
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021FEBF8: ; jump table
    // add r0, sp, #0x18
    sub_02020DA4((*((u16*)(*((u32*)(r1 + 4)) + 6)) << 0x10), 0, ((0x5a << 0x10) >> 0x10), 0);
    // add r1, sp, #0xc
    sub_02068DB8(r6);
    // add r1, sp, #0xc
    // add r2, sp, #0
    // add r3, sp, #0x18
    sub_020699AC(r4);
}



