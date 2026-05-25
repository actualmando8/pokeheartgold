/* Decompiled from asm/overlay_01_021FD41C.s */
#include "global.h"

void ov01_021FD41C(void) {
}




void ov01_021FD440(void) {
}




void ov01_021FD458(void) {
    ov01_021F1468(*((u32*)(r0 + 0x20)));
    MapObjectManager_GetPriority(*((u32*)(r0 + 0x3c)));
    SysTask_CreateOnMainQueue(ov01_021FD4F4, r4, (r0 - 1));
    *((u32*)(r4 + 0x24)) = r0;
}




void ov01_021FD47C(void) {
}




void ov01_021FD488(void) {
    // add r2, #0x14
    // ldmia r2!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
}




void ov01_021FD498(void) {
    // asr r1, r0, #0xb
    // add r1, r0, r1
    // asr r0, r1, #0xc
}




void ov01_021FD4A4(void) {
    *((u32*)(r0 + 0x10)) = *((u32*)(ov01_02208EB4 + (*((u32*)(r0 + 4)) << 2)));
    // add r3, r1, r3
    // ldmia r3!, {r0, r1}
    // add r2, #0x14
    // stmia r2!, {r0, r1}
    // str r0, [r2]
}




void ov01_021FD4D0(void) {
    // add r2, r3, r2
    // str r2, [r0]
    // str r1, [r0]
    // sub r2, r3, r2
    // str r2, [r0]
    // str r1, [r0]
}




void ov01_021FD4F4(void) {
    GF_RTC_GetTimeOfDay();
    *((u32*)(r5 + 4)) = r0;
    ov01_021FD4A4(r5, r0);
    ov01_021FD498(*((u32*)(r5 + 0x10)));
    ov01_021FD624(r5, r0);
    // str r0, [r5]
    // str r0, [r5]
    // add r2, sp, #4
    // add r3, r0, r1
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // ldr r1, [sp, #4]
    // add r0, #0x14
    ov01_021FD4D0(r5, (r4 * 0xc), 0x10);
    // ldr r0, [sp, #8]
    // str r0, [sp]
    // ldr r1, [sp]
    // add r0, #0x18
    ov01_021FD4D0(r5, 0x10);
    // ldr r7, [sp, #0xc]
    // add r0, #0x1c
    ov01_021FD4D0(r5, r7, 0x10);
    // add r0, #0x10
    ov01_021FD4D0(r5, r6, (2 << 8));
    ov01_021FD498(*((u32*)(r5 + 0x10)));
    ov01_021FD624(r5, r0);
    // ldr r1, [sp, #4]
    // ldr r0, [sp]
    *((u32*)(r5 + 4)) = r4;
    // str r0, [r5]
}




void ov01_021FD5CC(void) {
    // str r0, [sp, #4]
    // add r4, #0x28
    // add r5, #0x78
    // str r0, [sp]
    // ldr r0, [sp, #4]
    ov01_021F19F4(*((u32*)(0 + 0x20)), r0, 0, *((u32*)ov01_02208E90));
    sub_02069978(r5, r4);
    // add r4, #0x14
    // add r5, #0x54
}




void ov01_021FD60C(void) {
}




void ov01_021FD624(void) {
}




void ov01_021FD640(void) {
    ov01_021F146C();
    // str r4, [sp, #0x14]
    ov01_021F1450(0);
    // str r0, [sp, #0x18]
    // add r1, sp, #8
    // str r5, [sp, #0x1c]
    MapObject_CopyPositionVector(r5);
    MapObject_GetPriorityPlusValue(r5, 2);
    // add r1, sp, #0x14
    // str r1, [sp]
    // str r0, [sp, #4]
    // add r2, sp, #8
    ov01_021F1620(r4, ov01_02208EA0, 0);
}




void ov01_021FD684(void) {
    ov01_021F146C();
    // str r4, [sp, #0x14]
    ov01_021F1450(0);
    // str r0, [sp, #0x18]
    // add r1, sp, #8
    // str r5, [sp, #0x1c]
    MapObject_CopyPositionVector(r5);
    MapObject_GetPriorityPlusValue(r5, 2);
    // add r1, sp, #0x14
    // str r1, [sp]
    // str r0, [sp, #4]
    // add r2, sp, #8
    ov01_021F1620(r4, ov01_02208EC8, 3);
}




void ov01_021FD6C8(void) {
    // ldmia r3!, {r0, r1}
    // add r2, #0x14
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // str r0, [r4]
}




void ov01_021FD714(void) {
    // bx lr
    // TODO: decompile
}




void ov01_021FD718(void) {
    sub_0205F0F8(*((u32*)(r1 + 0x1c)), *((u32*)r1), *((u32*)(r1 + 4)), *((u32*)(r1 + 8)));
    ov01_021F1640(r5);
    sub_0205F5E8(r6, 8);
    ov01_021F1640(r5);
    *((u32*)(r4 + 0xc)) = 0;
    MapObject_TestFlagsBits(r6, 0x00100200);
    *((u32*)(r4 + 0xc)) = 1;
    // add r1, sp, #0
    MapObject_CopyPositionVector(r6);
    // add r1, sp, #0
    sub_02068DA8(r5);
}




void ov01_021FD784(void) {
    // ldmia r3!, {r0, r1}
    // add r2, #0x14
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // str r0, [r4]
}




void ov01_021FD7D4(void) {
    // add r5, sp, #0
    // ldmia r6!, {r0, r1}
    // stmia r5!, {r0, r1}
    // add r1, sp, #0x24
    // str r0, [r5]
    ov01_021FD488(*((u32*)(r1 + 0x18)), r1, (4 - 1));
    // add r1, sp, #0x30
    sub_02068DB8(r4);
    // ldr r1, [sp, #0x30]
    // sub r1, r1, r0
    // str r1, [sp, #0x30]
    // ldr r2, [sp, #0x34]
    // sub r1, r2, r1
    // str r1, [sp, #0x34]
    // ldr r1, [sp, #0x38]
    // add r5, #0x78
    // add r0, r1, r0
    // str r0, [sp, #0x38]
    // add r1, sp, #0x30
    // add r2, sp, #0x24
    // add r3, sp, #0
    sub_020699AC(r5, ((2 << 0xa) << 3));
}




void ov01_021FD838(void) {
    // add r4, sp, #0xc
    // ldmia r5!, {r0, r1}
    // stmia r4!, {r0, r1}
    // add r1, sp, #0x30
    // str r0, [r4]
    // add r5, #0x78
    ov01_021FD488(*((u32*)(r1 + 0x18)), r1, (4 - 1));
    ov01_021F8F88(r4);
    // add r1, sp, #0x3c
    sub_02068DB8(r6);
    // ldr r1, [sp, #0x3c]
    // sub r1, r1, r0
    // str r1, [sp, #0x3c]
    // ldr r2, [sp, #0x40]
    // sub r1, r2, r1
    // str r1, [sp, #0x40]
    // ldr r1, [sp, #0x44]
    // add r0, r1, r0
    // str r0, [sp, #0x44]
    MapObject_GetFacingDirection(r4, ((2 << 0xa) << 3));
    // add r1, sp, #0x3c
    ov01_021FD9CC();
    MapObject_CopyPositionVector(r4);
    // add r1, sp, #0
    ov01_021F8FA0(r4);
    // ldr r1, [sp, #0x3c]
    // ldr r0, [sp]
    // ldr r3, [sp, #0x40]
    // add r2, r1, r0
    // ldr r1, [sp, #0x44]
    // ldr r0, [sp, #8]
    // str r2, [sp, #0x3c]
    // add r0, r1, r0
    // sub r2, r2, r1
    // str r2, [sp, #0x3c]
    // sub r2, r3, r2
    // str r0, [sp, #0x44]
    // add r0, r0, r1
    // str r2, [sp, #0x40]
    // str r0, [sp, #0x44]
    // add r1, sp, #0x3c
    // add r2, sp, #0x30
    // add r3, sp, #0xc
    sub_020699AC(r5, ((2 << 0xa) << 1), ((2 << 0xa) << 3));
}




void ov01_021FD8E8(void) {
    ov01_021F146C();
    // str r6, [sp, #0x14]
    ov01_021F1450(0);
    // str r0, [sp, #0x18]
    // add r1, sp, #8
    // str r5, [sp, #0x1c]
    MapObject_CopyPositionVector(r5);
    MapObject_GetPriorityPlusValue(r5, 2);
    // add r1, sp, #0x14
    // str r1, [sp]
    // str r0, [sp, #4]
    // add r2, sp, #8
    ov01_021F1620(r6, ov01_02208EDC, r4);
}




void ov01_021FD92C(void) {
    sub_0205F0F8(*((u32*)(r1 + 0x1c)), *((u32*)r1), *((u32*)(r1 + 4)), *((u32*)(r1 + 8)));
    ov01_021F1640(r5);
    *((u32*)(r4 + 0xc)) = 0;
    MapObject_TestFlagsBits(r6, 0x00100200);
    *((u32*)(r4 + 0xc)) = 1;
    // add r1, sp, #0
    MapObject_CopyPositionVector(r6);
    // add r1, sp, #0
    sub_02068DA8(r5);
}




void ov01_021FD980(void) {
    // add r1, sp, #0
    // add r5, #0x78
    // ldr r1, [sp]
    // sub r1, r1, r0
    // str r1, [sp]
    // ldr r2, [sp, #4]
    // sub r1, r2, r1
    // str r1, [sp, #4]
    // ldr r1, [sp, #8]
    // add r0, r1, r0
    // str r0, [sp, #8]
    // add r0, r5, r4
    // add r1, sp, #0
}




void ov01_021FD9CC(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021FD9DC: ; jump table
    // add r0, r2, r0
    // sub r0, r2, r0
    // add r0, r2, r0
    // str r0, [r1]
    // sub r0, r2, r0
    // str r0, [r1]
}



