/* Decompiled from asm/overlay_01_021FE590.s */
#include "global.h"

void ov01_021FE590(void) {
}




void ov01_021FE5A4(void) {
}




void ov01_021FE5B4(void) {
    // str r1, [r0]
}




void ov01_021FE5BC(void) {
}




void ov01_021FE5CC(void) {
    *((u32*)(r0 + 4)) = 1;
    ov01_021F18D4(*((u32*)(r0 + 8)), 0xb, 0x80);
    ov01_021F1908(*((u32*)(r4 + 8)), 0xb, 0x95);
    ov01_021F1930(*((u32*)(r4 + 8)), 0xc, 0x1a, 1);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    ov01_021F1758(*((u32*)(r4 + 8)), 0xd, 0xb, 0xb);
}




void ov01_021FE61C(void) {
}




void ov01_021FE64C(void) {
}




void ov01_021FE65C(void) {
}




void ov01_021FE66C(void) {
    ov01_021F146C();
    // add r1, sp, #0x14
    ov01_021F93AC(r5);
    // ldr r1, [sp, #0x1c]
    // add r0, r1, r0
    // str r0, [sp, #0x1c]
    // str r4, [sp, #8]
    ov01_021F1450(r4, 0x10);
    // str r0, [sp, #0xc]
    // add r0, sp, #8
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r2, sp, #0x14
    ov01_021F1620(r4, ov01_02209084, 0);
}




u32 ov01_021FE6B4(void) {
    // ldmia r3!, {r0, r1}
    // add r2, #0xc
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // add r1, sp, #0
    // add r2, sp, #0
}




void ov01_021FE6F4(void) {
}




void ov01_021FE70C(void) {
    // ldmia r5!, {r0, r1}
    // add r3, sp, #0
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    *((u32*)(r1 + 8)) = 0;
    *((u32*)(r1 + 4)) = (*((u32*)(r1 + 4)) + 1);
    ov01_021F1640(r0, 0, r0);
    sub_02023F1C(*((u32*)(r4 + 0x18)));
    // add r1, sp, #0
    sub_02023F04(*((u32*)(r4 + 0x18)), *((u32*)(*((u32*)(r4 + 4)) + (*((u32*)(r4 + 4)) << 2))), (*((u32*)(r4 + 4)) << 2));
    *((u32*)(r4 + 8)) = 1;
}




void ov01_021FE768(void) {
}



