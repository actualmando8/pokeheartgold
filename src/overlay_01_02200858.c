/* Decompiled from asm/overlay_01_02200858.s */
#include "global.h"

void ov01_02200858(void) {
}




void ov01_02200874(void) {
}




void ov01_02200884(void) {
    // str r2, [sp]
    // add r0, #0x18
}




void ov01_022008A8(void) {
}




void ov01_022008B4(void) {
    // add r2, sp, #8
    // str r1, [r2]
    *((u32*)(r2 + 4)) = 0;
    *((u32*)(r2 + 8)) = 0;
    PlayerAvatar_GetMapObject(0);
    ov01_021F146C();
    // str r6, [sp, #0x14]
    ov01_021F1450(3);
    // str r0, [sp, #0x18]
    // str r5, [sp, #0x1c]
    MapObject_GetPriorityPlusValue(r4, 2);
    // add r1, sp, #0x14
    // str r1, [sp]
    // str r0, [sp, #4]
    // add r2, sp, #8
    ov01_021F1620(r6, ov01_02209340, 0);
}




u32 ov01_02200900(void) {
    // ldmia r3!, {r0, r1}
    // add r2, #0x24
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // mvn r1, r1
}




void ov01_02200938(void) {
    // bx lr
    // TODO: decompile
}




u32 ov01_0220093C(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp]
    // str r0, [r5]
    // ldr r0, [sp, #4]
    // str r0, [r5]
    // str r0, [sp, #8]
    // ldr r1, [sp, #8]
    // add r0, r4, r7
    // add r1, r1, r2
    // add r2, sp, #0xc
    // add r1, sp, #0x18
    // ldr r0, [sp, #0x1c]
    // add r1, sp, #0xc
    // str r0, [sp, #0x10]
    // ldr r0, [sp]
    // sub r1, r1, r2
    // ror r1, r0
    // add r0, r2, r1
}




void ov01_02200A08(void) {
    // mvn r0, r0
    // add r4, sp, #0
    // ldmia r5!, {r0, r1}
    // stmia r4!, {r0, r1}
    // str r0, [r4]
    // add r0, r4, r0
    // add r5, #0x18
    // add r4, r0, r3
    // add r0, r1, r1
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02200A56: ; jump table
    // add r2, #0xf6
    // add r0, sp, #0x18
    sub_02020DA4((*((u16*)((*((u32*)(r1 + 4)) * 0x18) + 6)) << 0x10), 0, ((0x5a << 0x10) >> 0x10), 0);
    // add r1, sp, #0xc
    sub_02068DB8(r6);
    // ldr r1, [sp, #0xc]
    // add r2, sp, #0
    // add r0, r1, r0
    // str r0, [sp, #0xc]
    // ldr r1, [sp, #0x10]
    // add r3, sp, #0x18
    // add r0, r1, r0
    // str r0, [sp, #0x10]
    // ldr r1, [sp, #0x14]
    // add r0, r1, r0
    // str r0, [sp, #0x14]
    // add r1, sp, #0xc
    sub_020699AC(r5);
}




u32 ov01_02200AB0(void) {
    // mvn r0, r0
}



