/* Decompiled from asm/overlay_01_021FEC38.s */
#include "global.h"

void ov01_021FEC38(void) {
}




void ov01_021FEC54(void) {
}




void ov01_021FEC64(void) {
    // str r2, [sp]
    // str r2, [sp]
    // add r4, #0x18
}




void ov01_021FEC8C(void) {
}




void ov01_021FECA0(void) {
    MapObject_TestFlagsBits((2 << 8));
    ov01_021F146C(r5);
    // str r0, [sp, #8]
    ov01_021F1450(6);
    // str r0, [sp, #0xc]
    // add r2, sp, #0x10
    sub_020611C8(r6, r7);
    // ldr r2, [sp, #0x18]
    // add r0, r1, r0
    // add r0, r2, r0
    // str r0, [sp, #0x18]
    MapObject_GetPreviousYCoord(r5, (r4 << 3));
    // sub r0, r1, r0
    // str r0, [sp, #0x14]
    MapObject_GetPriorityPlusValue(r5, 2);
    // add r1, sp, #8
    // str r1, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #8]
    // add r2, sp, #0x10
    ov01_021F1620(ov01_02209110, 0);
}




void ov01_021FED14(void) {
    // str r0, [sp]
    // add r3, #0x18
    // add r0, #0x24
}




void ov01_021FED4C(void) {
}




void ov01_021FED58(void) {
}




void ov01_021FED80(void) {
}



