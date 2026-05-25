/* Decompiled from asm/overlay_01_021FF854.s */
#include "global.h"

void ov01_021FF854(void) {
}




void ov01_021FF870(void) {
}




void ov01_021FF880(void) {
    ov01_021F18D4(*((u32*)r0), 7, 0x7a);
    ov01_021F1908(*((u32*)r4), 7, 0x92);
    ov01_021F1930(*((u32*)r4), 8, 0x15, 1);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    ov01_021F1758(*((u32*)r4), 9, 7, 7);
}




void ov01_021FF8C8(void) {
}




void ov01_021FF8F0(void) {
    ov01_021F146C();
    MapObject_GetXCoord(r5);
    // str r0, [sp, #8]
    MapObject_GetYCoord(r5);
    // str r0, [sp, #0xc]
    MapObject_GetZCoord(r5);
    // str r0, [sp, #0x10]
    // add r0, sp, #8
    *((u16*)(r0 + 0x1c)) = 0;
    *((u16*)(r0 + 0x1e)) = 0;
    // add r0, sp, #0x28
    // strb r1, [r0]
    // str r4, [sp, #0x18]
    ov01_021F1468(r4, (0 - 1));
    // str r0, [sp, #0x14]
    ov01_021F1450(r4, 0xc);
    // str r0, [sp, #0x1c]
    // add r1, sp, #0x2c
    // str r5, [sp, #0x20]
    MapObject_CopyPositionVector(r5);
    MapObject_GetPriorityPlusValue(r5, 2);
    // add r1, sp, #8
    // str r1, [sp]
    // str r0, [sp, #4]
    // add r2, sp, #0x2c
    ov01_021F1620(r4, ov01_02209218, r6);
}




void ov01_021FF964(void) {
    // str r1, [sp, #8]
    ov01_021F146C();
    // str r4, [sp, #0xc]
    MapObject_GetYCoord(r5);
    // str r0, [sp, #0x10]
    // str r6, [sp, #0x14]
    MapObject_GetXCoord(r5);
    // sub r1, r0, r4
    // add r0, sp, #0xc
    *((u16*)(r0 + 0x1c)) = r1;
    MapObject_GetZCoord(r5);
    // sub r1, r0, r6
    // add r0, sp, #0xc
    *((u16*)(r0 + 0x1e)) = r1;
    // ldr r0, [sp, #0x50]
    MapObject_GetFacingDirection(r5);
    // add r1, sp, #0x2c
    // strb r0, [r1]
    // mvn r1, r1
    // add r0, sp, #0x2c
    // strb r1, [r0]
    // str r7, [sp, #0x1c]
    ov01_021F1468(r7, 0);
    // str r0, [sp, #0x18]
    ov01_021F1450(r7, 0xc);
    // str r0, [sp, #0x20]
    // add r1, sp, #0x30
    // str r5, [sp, #0x24]
    MapObject_CopyPositionVector(r5);
    MapObject_GetPriorityPlusValue(r5, 2);
    // add r1, sp, #0xc
    // str r1, [sp]
    // str r0, [sp, #4]
    // ldr r3, [sp, #8]
    // add r2, sp, #0x30
    ov01_021F1620(r7, ov01_02209218);
}




BOOL ov01_021FF9F4(void) {
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
    // ldr r1, [sp, #8]
    // add r0, r1, r0
    // str r0, [sp, #8]
    // add r1, sp, #0
    // add r2, sp, #0
    // str r0, [r4]
}




void ov01_021FFAB0(void) {
}




void ov01_021FFABC(void) {
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
    // str r0, [r4]
    // str r0, [r4]
    // ldrsh r1, [r4, r1]
    // sub r7, r0, r1
    // ldrsh r1, [r4, r1]
    // sub r1, r0, r1
    // ldrsb r1, [r4, r0]
    // sub r0, #0x39
    // ldrsb r1, [r4, r1]
}




void ov01_021FFBD4(void) {
    // add r1, sp, #0
    // add r1, sp, #0
}



