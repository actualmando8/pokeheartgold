/* Decompiled from asm/overlay_01_02200040.s */
#include "global.h"

void ov01_02200040(void) {
}




void ov01_0220005C(void) {
}




void ov01_0220006C(void) {
    ov01_021F18D4(*((u32*)r0), 9, 0x7c);
    ov01_021F1908(*((u32*)r4), 9, 0x94);
    ov01_021F1930(*((u32*)r4), 0xa, 0x17, 1);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    ov01_021F1758(*((u32*)r4), 0xb, 9, 9);
}




void ov01_022000B4(void) {
}




void ov01_022000DC(void) {
    ov01_021F146C();
    MapObject_GetFieldSystem(r5);
    // str r0, [sp, #0x14]
    // str r4, [sp, #0x18]
    ov01_021F1450(r4, 0xf);
    // str r0, [sp, #0x1c]
    // add r1, sp, #8
    // str r5, [sp, #0x20]
    MapObject_CopyPositionVector(r5);
    MapObject_GetXCoord(r5);
    MapObject_GetZCoord(r5);
    // add r2, sp, #8
    sub_020611C8(r6, r0);
    MapObject_GetPriorityPlusValue(r5, 2);
    // add r1, sp, #0x14
    // str r1, [sp]
    // str r0, [sp, #4]
    // add r2, sp, #8
    ov01_021F1620(r4, ov01_02209294, 0);
}




u32 ov01_02200140(void) {
    // add r2, #0x10
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // add r1, sp, #0
    // add r2, sp, #0
}




void ov01_02200184(void) {
}




void ov01_02200190(void) {
    // asr r1, r0, #0xb
    // add r1, r0, r1
    // asr r0, r1, #0xc
}




void ov01_022001C0(void) {
    // add r1, sp, #0
    // ldr r1, [sp, #8]
    // add r0, r1, r0
    // str r0, [sp, #8]
    // add r1, sp, #0
}



