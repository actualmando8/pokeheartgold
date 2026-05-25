/* Decompiled from asm/overlay_01_021FE200.s */
#include "global.h"

UnkOv01_021FFECC * ov01_021FE200(void) {
    ov01_021F1430(0x00000824, 0, 0);
    // str r5, [r4]
    ov01_021FE230();
}




void ov01_021FE220(void) {
}




void ov01_021FE230(void) {
    // str r0, [sp, #4]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #4]
    // ldr r5, [sp, #4]
    // add r0, r0, r1
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #4]
    // add r0, r0, r1
    // add r5, #0xcc
    // str r0, [sp, #8]
    // str r0, [sp]
    // ldr r0, [sp, #4]
    ov01_021F19F4(*((u32*)0), (0 + 4), 0, *((u32*)ov01_0220901C));
    // ldr r0, [sp, #0xc]
    sub_02069978(r4);
    // str r0, [sp]
    // ldr r0, [sp, #4]
    ov01_021F19F4(*((u32*)0), r5, 0, *((u32*)r6));
    // ldr r0, [sp, #8]
    sub_02069978(r5);
    // ldr r0, [sp, #0xc]
    // add r0, #0x54
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #8]
    // add r4, #0x14
    // add r0, #0x54
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x10]
    // add r5, #0x14
    // str r0, [sp, #0x10]
}




void ov01_021FE2B8(void) {
    // add r5, #0xcc
    // add r4, #0x14
    // add r5, #0x14
}




void ov01_021FE2DC(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021FE2F6: ; jump table
    // add r1, r5, r0
    // add r4, r1, r0
    // add r1, r1, r3
    // add r0, r5, r0
    // add r4, r0, r1
    // add r1, r5, r0
    // add r4, r1, r0
    // add r1, r1, r3
    // add r0, r5, r0
    // add r4, r0, r1
    GF_AssertFail(0x000004DC, (0x54 * *((u32*)((*((u32*)((r2 << 2) + ov01_02209044)) << 2) + ov01_02209044))), *((u32*)((*((u32*)((r2 << 2) + ov01_02209044)) << 2) + ov01_02209044)), ((0x54 * *((u32*)((r2 << 2) + ov01_02209044))) << 4));
}




void ov01_021FE35C(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _021FE370: ; jump table
    // add r4, r1, r0
    // add r1, r1, r3
    // add r4, r0, r1
    // add r0, #0xcc
    // add r4, r0, r1
    // add r1, r1, r3
    // add r0, #0xcc
    // add r4, r0, r1
    GF_AssertFail(((0x14 * r2) + 4), (0x14 * *((u32*)((*((u32*)((r2 << 2) + ov01_02209044)) << 2) + ov01_02209044))), *((u32*)((*((u32*)((r2 << 2) + ov01_02209044)) << 2) + ov01_02209044)), ((r3 << 4) << 4));
}




void ov01_021FE3C4(void) {
}




void ov01_021FE3D0(void) {
}




void ov01_021FE3DC(void) {
}




void ov01_021FE3E8(void) {
}




u8 ov01_021FE3F4(void) {
}




void ov01_021FE3F8(void) {
    MapObject_GetPreviousXCoord();
    // str r0, [sp, #0xc]
    MapObject_GetPreviousZCoord(r5);
    // str r0, [sp, #0x10]
    MapObject_GetPositionVectorYCoord(r5);
    MapObject_GetFacingDirection(r5);
    // str r0, [sp, #0x14]
    MapObject_GetPreviousFacingDirection(r5);
    // str r0, [sp, #0x18]
    MapObject_GetPriorityPlusValue(r5, 2);
    ov01_021F146C(r5);
    // str r0, [sp, #8]
    ov01_021F1450(2);
    // str r0, [sp, #0x1c]
    MapObject_TestFlagsBits(r5, (2 << 8));
    // ldr r0, [sp, #0x1c]
    // ldr r2, [sp, #0x14]
    // ldr r3, [sp, #0x18]
    // str r4, [sp, #0x20]
    ov01_021FE2DC(0, r4);
    // str r0, [sp, #0x28]
    // ldr r0, [sp, #0x1c]
    // ldr r2, [sp, #0x14]
    // ldr r3, [sp, #0x18]
    ov01_021FE35C(r4);
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #0xc]
    // ldr r1, [sp, #0x10]
    // add r2, sp, #0x2c
    sub_020611C8();
    // str r6, [sp, #0x30]
    // add r0, r4, r4
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021FE48E: ; jump table
    // sub r1, r6, r0
    // str r1, [sp, #0x30]
    // ldr r1, [sp, #0x34]
    // sub r0, r1, r0
    // str r0, [sp, #0x34]
    // ldr r1, [sp, #0x34]
    // add r0, r1, r0
    // str r0, [sp, #0x34]
    // sub r0, r6, r0
    // str r0, [sp, #0x30]
    // ldr r1, [sp, #0x34]
    // sub r0, r1, r0
    // str r0, [sp, #0x34]
    // ldr r1, [sp, #0x34]
    // add r0, r1, r0
    // str r0, [sp, #0x34]
    // add r0, sp, #0x20
    // str r0, [sp]
    // ldr r0, [sp, #8]
    // add r2, sp, #0x2c
    // str r7, [sp, #4]
    ov01_021F1620((2 << 0xc), ov01_02208FE0, 0);
}




u32 ov01_021FE4FC(void) {
}




void ov01_021FE524(void) {
    // bx lr
    // TODO: decompile
}




void ov01_021FE528(void) {
    // str r0, [r1]
    // bpl _021FE554
}




void ov01_021FE558(void) {
    // add r1, sp, #0
    // add r1, sp, #0
}



