/* Decompiled from asm/overlay_01_021FEEEC.s */
#include "global.h"

void ov01_021FEEEC(void) {
}




void ov01_021FEF08(void) {
}




void ov01_021FEF18(void) {
    ov01_021F18D4(*((u32*)r0), 0, 0x7e);
    ov01_021F18D4(*((u32*)r4), 5, 0x7f);
    ov01_021F1908(*((u32*)r4), 0, 0x8c);
    ov01_021F1908(*((u32*)r4), 3, 0x8d);
    ov01_021F1908(*((u32*)r4), 4, 0x8e);
    ov01_021F1908(*((u32*)r4), 5, 0x8f);
    ov01_021F1930(*((u32*)r4), 0, 0x19, 1);
    ov01_021F1930(*((u32*)r4), 4, 0x10, 1);
    ov01_021F1930(*((u32*)r4), 5, 0, 1);
    ov01_021F1930(*((u32*)r4), 6, 1, 1);
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    ov01_021F1758(*((u32*)r4), 0, 0, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    ov01_021F1758(*((u32*)r4), 5, 5, 3);
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    ov01_021F1758(*((u32*)r4), 6, 5, 4);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    ov01_021F1758(*((u32*)r4), 7, 5, 5);
}




void ov01_021FEFF8(void) {
}




void ov01_021FF070(void) {
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
    ov01_021F1450(r4, 8);
    // str r0, [sp, #0x1c]
    // add r1, sp, #0x2c
    // str r5, [sp, #0x20]
    MapObject_CopyPositionVector(r5);
    MapObject_GetPriorityPlusValue(r5, 2);
    // add r1, sp, #8
    // str r1, [sp]
    // str r0, [sp, #4]
    // add r2, sp, #0x2c
    ov01_021F1620(r4, ov01_02209138, r6);
}




void ov01_021FF0E4(void) {
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
    ov01_021F1450(r7, 8);
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
    ov01_021F1620(r7, ov01_02209138);
}




void ov01_021FF174(void) {
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




void ov01_021FF228(void) {
}




void ov01_021FF234(void) {
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




void ov01_021FF35C(void) {
    // add r1, sp, #0
    // add r1, sp, #0
}




void ov01_021FF394(void) {
    // ldmia r3!, {r0, r1}
    // add r2, #0x10
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // add r0, r1, r0
    // str r0, [sp]
    // add r0, r1, r0
    // str r0, [sp, #8]
    // str r0, [sp, #4]
    // add r1, sp, #0
    // ldr r1, [sp, #4]
    // add r0, r1, r0
    // str r0, [sp, #4]
    // add r1, sp, #0
    // add r2, sp, #0
}




void ov01_021FF418(void) {
}




void ov01_021FF424(void) {
    // str r0, [r4]
}




void ov01_021FF44C(void) {
}



