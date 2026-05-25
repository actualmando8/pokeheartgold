/* Decompiled from asm/overlay_01_021FD1B8.s */
#include "global.h"

void ov01_021FD1B8(void) {
}




void ov01_021FD1CC(void) {
}




void ov01_021FD1E8(void) {
    // str r1, [r5]
    // str r2, [sp]
    // add r0, #0x18
}




void ov01_021FD20C(void) {
    // stmia r0!, {r1}
}




void ov01_021FD21C(void) {
    ov01_021FD20C(*((u32*)(r0 + 8)));
    // add r5, #0x6c
}




void * ov01_021FD244(void) {
    // add r0, #0x6c
}



void ov01_021FD258(void) {
    ov01_021F1450(0x14);
    GF_AssertFail();
    *((u32*)(r4 + 4)) = r5;
    ov01_021F1430(r6, (0x6c * r5), 0, 0);
    *((u32*)(r4 + 8)) = r0;
    // str r1, [r0]
    // add r0, #0x6c
}




void ov01_021FD290(void) {
    ov01_021F1450(0x14);
    ov01_021FD244(r4);
    ov01_021FD244(r7, 0x0000FFFF);
    GF_AssertFail();
    ov01_021FD1E8(r4, r6, r5);
}




void * ov01_021FD2CC(void) {
    ov01_021F1450(0x14);
    ov01_021FD244(r4);
    GF_AssertFail();
    // add r4, #0x18
}



void ov01_021FD2EC(void) {
    ov01_021F146C();
    MapObject_GetSpriteID(r5);
    // str r0, [sp, #8]
    // str r4, [sp, #0xc]
    // str r5, [sp, #0x10]
    MapObject_GetPriorityPlusValue(r5, 2);
    // add r1, sp, #8
    // str r1, [sp]
    // str r0, [sp, #4]
    ov01_021F1620(r4, ov01_02208E1C, r6, 0);
}




u32 ov01_021FD328(void) {
    // ldmia r3!, {r0, r1}
    // add r2, #0x1c
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // add r4, #0xc
}




void ov01_021FD378(void) {
}




void ov01_021FD37C(void) {
    // add r1, sp, #0xc
    // add r1, sp, #0
    // ldr r1, [sp]
    // ldr r2, [sp, #0xc]
    // add r0, r1, r0
    // add r0, r2, r0
    // str r0, [sp, #0xc]
    // ldr r1, [sp, #4]
    // ldr r2, [sp, #0x10]
    // add r0, r1, r0
    // add r0, r2, r0
    // str r0, [sp, #0x10]
    // ldr r1, [sp, #8]
    // ldr r2, [sp, #0x14]
    // add r0, r1, r0
    // add r0, r2, r0
    // str r0, [sp, #0x14]
    // add r1, sp, #0xc
}




void ov01_021FD3E0(void) {
}




void ov01_021FD3F8(void) {
    ov01_021FD258(0xc);
    ov01_021FD290(r6, *((u32*)r4), *((u32*)(r4 + 4)));
    // add r4, #8
}



