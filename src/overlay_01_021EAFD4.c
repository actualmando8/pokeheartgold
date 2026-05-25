/* Decompiled from asm/overlay_01_021EAFD4.s */
#include "global.h"

void * ov01_021EAFD4(void) {
    Heap_Alloc(4, (0x63 << 2));
    GF_AssertFail();
    *((u16*)(r4 + 0x1c)) = 0;
    *((u16*)(r4 + 0x1e)) = 0;
    *((u32*)(r4 + 8)) = 0;
    *((u32*)(r4 + 0x10)) = 0;
    *((u32*)(r4 + 0x18)) = 0;
    *((u32*)(r4 + 0x14)) = 0;
    // add r2, #0x18
    // str r1, [r4, r0]
}



u32 ov01_021EB00C(void) {
    // str r1, [sp]
    // str r0, [r5]
    // ldr r1, [sp]
}




s32 ov01_021EB058(void) {
    // str r1, [sp]
    // str r2, [sp, #4]
    // str r3, [sp, #8]
    // mvn r0, r0
    // add r1, #0x18
    // ldr r0, [sp]
    // mvn r0, r0
    // str r0, [sp, #0xc]
    // add r0, #8
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #4]
    // ldr r0, [sp]
    // add r1, r1, r7
    sub_020208DC(r0, (*((u32*)(r0 + 4)) + 4));
    // ldr r1, [sp, #0xc]
    // str r0, [r1, r6]
    // mvn r0, r0
    // ldr r0, [sp]
    // add r1, r1, r7
    sub_020209E0(0, (*((u32*)(r5 + 4)) + 4));
    // add r1, r5, r6
    *((u32*)(r1 + 0xc)) = r0;
    // ldr r2, [sp, #4]
    // add r0, sp, #0x10
    sprintf(ov01_02209898);
    // add r1, r0, r7
    // add r0, r5, r6
    *((u32*)((*((u32*)(r5 + 4)) + 4) + 0x18)) = r1;
    // ldr r1, [sp, #4]
    // ldr r0, [sp, #8]
    // add r7, #0x14
    NARC_AllocAndReadWholeMember((*((u32*)(r5 + 4)) + 4), (r1 + 1), 4);
    // str r0, [r7, r6]
    NNS_G3dGetTex(*((u32*)(r7 + r6)));
    // add r1, r5, r6
    *((u32*)(r1 + 0x10)) = r0;
}




void ov01_021EB114(void) {
    // add r5, #8
    // add r0, r1, r0
    // add r0, r1, r0
    // add r1, r1, r2
    // add r5, #0x18
}




void ov01_021EB18C(void) {
    // add r0, r5, r4
    // add r1, #0x18
    // str r0, [r1, r4]
    // add r0, r5, r4
}




void ov01_021EB1BC(void) {
}




void ov01_021EB1DC(void) {
}



