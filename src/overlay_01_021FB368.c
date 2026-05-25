/* Decompiled from asm/overlay_01_021FB368.s */
#include "global.h"

u32 ov01_021FB368(void) {
    // add r3, r5, r3
    // add r2, r4, r2
}



HitboxArray * ov01_021FB3A4(void) {
    Heap_Alloc(r1, 8);
    // mul r1, r5
    Heap_Alloc(r6, 0x18);
    *((u32*)(r4 + 4)) = r0;
    // str r5, [r4]
    // mul r2, r1
    // add r2, r3, r2
    *((u32*)(0 + 0x14)) = 0;
}



void ov01_021FB3E4(void) {
    // ldr r5, [sp, #0x10]
    // mul r4, r0
    // str r1, [r0, r4]
    // ldr r1, [sp, #8]
    // add r0, r0, r4
    *((u32*)(*((u32*)(r5 + 4)) + 4)) = r2;
    // add r0, r0, r4
    *((u32*)(*((u32*)(r5 + 4)) + 8)) = r3;
    // add r0, r0, r4
    *((u32*)(*((u32*)(r5 + 4)) + 0xc)) = r1;
    // ldr r1, [sp, #0xc]
    // add r0, r0, r4
    *((u32*)(*((u32*)(r5 + 4)) + 0x10)) = r1;
    // add r0, r0, r4
    *((u32*)(*((u32*)(r5 + 4)) + 0x14)) = 1;
}



void ov01_021FB418(void) {
}



u32 ov01_021FB42C(void) {
    // str r3, [sp]
    GF_AssertFail();
    // mul r3, r4
    // add r2, r2, r3
    ov01_021FB368(r6, r7, *((u32*)(r5 + 4)), 0x18);
    // ldr r0, [sp]
    // strb r4, [r0]
}



u32 ov01_021FB474(void) {
    GF_AssertFail(*((u32*)r1));
    // mul r6, r0
    // add r0, r0, r6
    GF_AssertFail(*((u32*)(*((u32*)(r4 + 4)) + 0x14)));
    // add r0, r0, r6
}



void ov01_021FB4A0(void) {
}


