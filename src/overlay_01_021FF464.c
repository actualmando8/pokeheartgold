/* Decompiled from asm/overlay_01_021FF464.s */
#include "global.h"

void ov01_021FF464(void) {
}




void ov01_021FF480(void) {
}




void ov01_021FF490(void) {
    ov01_021F18D4(*((u32*)r0), 3, 0x77);
    ov01_021F1908(*((u32*)r4), 2, 0x90);
    ov01_021F1930(*((u32*)r4), 2, 0x12, 1);
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    ov01_021F1758(*((u32*)r4), 3, 3, 2);
}




void ov01_021FF4D4(void) {
}




void ov01_021FF4FC(void) {
    ov01_021F146C();
    MapObject_GetFieldSystem(r5);
    // str r0, [sp, #0x14]
    // str r4, [sp, #0x18]
    ov01_021F1450(r4, 0xa);
    // str r0, [sp, #0x1c]
    // add r1, sp, #8
    // str r0, [r1]
    *((u32*)(r1 + 4)) = 0;
    *((u32*)(r1 + 8)) = 0;
    // str r5, [sp, #0x20]
    MapObject_GetPriorityPlusValue(r5, 2);
    // add r1, sp, #0x14
    // str r1, [sp]
    // str r0, [sp, #4]
    // add r2, sp, #8
    ov01_021F1620(r4, ov01_022091C0, r6);
}




u32 ov01_021FF54C(void) {
    // add r2, sp, #0
    // str r1, [r2]
    // add r2, #0x14
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // add r1, sp, #0
    // add r2, sp, #0
}




void ov01_021FF5B8(void) {
}




void ov01_021FF5C4(void) {
    // asr r1, r0, #0xb
    // add r1, r0, r1
    // asr r0, r1, #0xc
}




void ov01_021FF658(void) {
    // add r1, sp, #0xc
    // add r1, sp, #0
    // ldr r1, [sp, #0xc]
    // ldr r0, [sp]
    // add r0, r1, r0
    // str r0, [sp, #0xc]
    // ldr r1, [sp, #0x14]
    // ldr r0, [sp, #8]
    // add r1, r1, r0
    // str r1, [sp, #0x14]
    // add r0, r1, r0
    // str r0, [sp, #0x14]
    // add r1, sp, #0xc
}



