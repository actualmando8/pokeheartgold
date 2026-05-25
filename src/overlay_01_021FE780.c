/* Decompiled from asm/overlay_01_021FE780.s */
#include "global.h"

void ov01_021FE780(void) {
}




void ov01_021FE79C(void) {
}




void ov01_021FE7AC(void) {
    // str r2, [sp]
    // add r0, #0x18
}




void ov01_021FE7D0(void) {
}




void ov01_021FE7DC(void) {
    // add r2, sp, #0x14
    // str r1, [r2]
    *((u32*)(r2 + 4)) = 0;
    *((u32*)(r2 + 8)) = 0;
    // str r3, [sp, #0x20]
    ov01_021F146C(0);
    // str r0, [sp, #0x24]
    ov01_021F1450(4);
    // str r0, [sp, #0x28]
    // ldr r0, [sp, #0x40]
    // str r5, [sp, #0x2c]
    MapObject_GetFieldSystem(r5);
    // add r2, r2, r1
    // str r2, [sp, #0x14]
    // add r1, r2, r1
    // str r1, [sp, #0x1c]
    // add r1, sp, #0x14
    sub_0206121C((2 << 0xe), (r6 << 0x10));
    // add r2, sp, #8
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // add r1, sp, #0x14
    // str r0, [r2]
    MapObject_CopyPositionVector(r5, ov01_022090D0);
    // add r1, sp, #8
    sub_0205F9A0(r5);
    MapObject_GetPriorityPlusValue(r5, 2);
    // add r1, sp, #0x20
    // str r1, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x24]
    // ldr r3, [sp, #0x40]
    // add r2, sp, #0x14
    ov01_021F1620(ov01_022090DC);
}




u32 ov01_021FE868(void) {
    // add r2, #0x24
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
}




void ov01_021FE8B0(void) {
}




void ov01_021FE8C8(void) {
    // str r0, [r5]
    // mvn r1, r1
    // str r0, [r5]
    // add r2, r1, r0
    // neg r0, r0
    // neg r0, r0
    // str r0, [sp, #0xc]
    // add r1, r1, r0
    // str r1, [sp, #0x10]
    // str r0, [sp, #0x14]
    // add r1, sp, #0xc
    // add r1, sp, #0
    // sub r0, r1, r0
    // ldr r2, [sp, #4]
    // add r1, sp, #0
    // add r0, r2, r0
    // str r0, [sp, #4]
}




void ov01_021FE970(void) {
    // mvn r0, r0
    *((u32*)(r1 + 0x14)) = (*((u32*)(r1 + 0x14)) + 1);
    // ldmia r5!, {r0, r1}
    // add r4, sp, #0
    // stmia r4!, {r0, r1}
    // str r0, [r4]
    // add r4, #0x18
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021FE9B2: ; jump table
    // add r0, sp, #0x18
    sub_02020DA4((*((u16*)(*((u32*)(r1 + 8)) + 6)) << 0x10), 0, ((0x5a << 0x10) >> 0x10), 0);
    // add r1, sp, #0xc
    sub_02068DB8(r6);
    // add r1, sp, #0xc
    // add r2, sp, #0
    // add r3, sp, #0x18
    sub_020699AC(r4);
}




void ov01_021FE9F4(void) {
}



