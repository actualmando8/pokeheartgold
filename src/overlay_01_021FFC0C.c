/* Decompiled from asm/overlay_01_021FFC0C.s */
#include "global.h"

void ov01_021FFC0C(void) {
}




void ov01_021FFC28(void) {
}




void ov01_021FFC38(void) {
    ov01_021F18D4(*((u32*)r0), 8, 0x7b);
    ov01_021F1908(*((u32*)r4), 8, 0x93);
    ov01_021F1930(*((u32*)r4), 9, 0x16, 1);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    ov01_021F1758(*((u32*)r4), 0xa, 8, 8);
}




void ov01_021FFC80(void) {
}




u32 ov01_021FFCA8(void) {
    // add r3, #0x18
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // str r0, [sp]
    // str r0, [sp, #8]
    // str r0, [sp, #4]
    // add r1, sp, #0
    // ldr r1, [sp]
    // add r0, r1, r0
    // str r0, [sp]
    // ldr r1, [sp, #4]
    // sub r0, r1, r0
    // str r0, [sp, #4]
    // ldr r1, [sp, #8]
    // add r0, r1, r0
    // str r0, [sp, #8]
    // add r1, sp, #0
    // add r2, sp, #0
    // str r0, [r4]
}




void ov01_021FFD64(void) {
}




void ov01_021FFD70(void) {
    // add r1, sp, #0xc
    // add r1, sp, #0
    // str r0, [sp]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x10]
    // str r0, [sp, #4]
    // ldr r0, [sp, #4]
    // add r1, sp, #0xc
    // str r0, [sp, #0x10]
    // asr r1, r0, #0xb
    // add r1, r0, r1
    // asr r0, r1, #0xc
    // str r0, [r5]
    // str r0, [r5]
    // ldrsb r1, [r5, r0]
    // sub r0, #0x39
    // ldrsb r1, [r5, r1]
}




void ov01_021FFE98(void) {
    // add r1, sp, #0
    // add r1, sp, #0
}



