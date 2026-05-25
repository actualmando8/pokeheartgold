/* Decompiled from asm/unk_0205FD20.s */
#include "global.h"

void sub_0205FD20(void) {
}




void sub_0205FD30(void) {
    sub_0205F5E8(2);
    sub_0205FE0C(r4);
    sub_0205FE24(r4);
    sub_0205FE48(r4);
    MapObject_GetFlagsBitsMask(r4, 0x10);
    sub_02062400(r4);
    MapObject_CheckMovementPaused(r4);
    sub_0205FD98(r4);
    sub_02063A1C(r4);
    sub_0205F430(r4);
    sub_0205FE6C(r4);
    sub_0205FEA4(r4);
}




void sub_0205FD98(void) {
    MapObject_CheckSingleMovement();
    MapObject_GetFlagsBitsMask(r4, (6 << 0xa));
    MapObject_GetMovement(r4);
    MapObject_GetMovement(r4);
    MapObject_GetFlags(r4);
    // tst r2, r1
    // tst r1, r0
    // tst r0, r1
    sub_0205F8D0(r4, (2 << 0xa), r0);
}




void sub_0205FE0C(void) {
    MapObject_GetFlagsBitsMask((1 << 0xc));
    sub_02061070(r4);
}




void sub_0205FE24(void) {
    MapObject_GetFlagsBitsMask((2 << 0xa));
    sub_02061108(r4);
    MapObject_SetFlag2(r4);
}




void sub_0205FE48(void) {
    // push {r4, lr}
    // mov r1, #4
    // add r4, r0, #0
    // bl MapObject_GetFlagsBitsMask
    // cmp r0, #0
    // beq _0205FE5C
    // add r0, r4, #0
    // bl sub_0205FEDC
    // ldr r1, _0205FE68 ; =0x00010004
    // add r0, r4, #0
    // bl MapObject_ClearFlagsBits
    // pop {r4, pc}
    // nop
    // _0205FE68: .word 0x00010004
    // TODO: decompile
}




void sub_0205FE6C(void) {
    // push {r4, lr}
    // mov r1, #1
    // lsl r1, r1, #0x10
    // add r4, r0, #0
    // bl MapObject_GetFlagsBitsMask
    // cmp r0, #0
    // beq _0205FE84
    // add r0, r4, #0
    // bl sub_02060020
    // b _0205FE96
    // add r0, r4, #0
    // mov r1, #4
    // bl MapObject_GetFlagsBitsMask
    // cmp r0, #0
    // beq _0205FE96
    // add r0, r4, #0
    // bl sub_0205FF6C
    // ldr r1, _0205FEA0 ; =0x00010004
    // add r0, r4, #0
    // bl MapObject_ClearFlagsBits
    // pop {r4, pc}
    // _0205FEA0: .word 0x00010004
    // TODO: decompile
}




void sub_0205FEA4(void) {
    // push {r4, lr}
    // mov r1, #2
    // lsl r1, r1, #0x10
    // add r4, r0, #0
    // bl MapObject_GetFlagsBitsMask
    // cmp r0, #0
    // beq _0205FEBC
    // add r0, r4, #0
    // bl sub_02060114
    // b _0205FECE
    // add r0, r4, #0
    // mov r1, #8
    // bl MapObject_GetFlagsBitsMask
    // cmp r0, #0
    // beq _0205FECE
    // add r0, r4, #0
    // bl sub_0206008C
    // ldr r1, _0205FED8 ; =0x00020008
    // add r0, r4, #0
    // bl MapObject_ClearFlagsBits
    // pop {r4, pc}
    // _0205FED8: .word 0x00020008
    // TODO: decompile
}




void sub_0205FEDC(void) {
    sub_02061108();
    sub_0205F73C(r5);
    sub_0205F504(r5);
    sub_0205F514(r5);
    ov01_021F9318(r5);
    sub_02060AB8(r5, r6, r4, r0);
    sub_020601BC(r5, r6, r4, r7);
    sub_0206039C(r5, r6, r4, r7);
    sub_020603DC(r5, r6, r4, r7);
    sub_020601A4(r5, r6, r4, r7);
    sub_02060698(r5, r6, r4, r7);
    sub_02060700(r5, r6, r4, r7);
    sub_020607D8(r5, r6, r4, r7);
}




void sub_0205FF6C(void) {
    sub_02061108();
    sub_0205F73C(r5);
    sub_0205F504(r5);
    sub_0205F514(r5);
    ov01_021F9318(r5);
    sub_02060AB8(r5, r6, r4, r0);
    sub_02060274(r5, r6, r4, r7);
    sub_02060328(r5, r6, r4, r7);
    sub_0206039C(r5, r6, r4, r7);
    sub_020603F8(r5, r6, r4, r7);
    sub_020606CC(r5, r6, r4, r7);
    sub_02060704(r5, r6, r4, r7);
    sub_02060708(r5, r6, r4, r7);
    sub_02060770(r5, r6, r4, r7);
    sub_020607D8(r5, r6, r4, r7);
    sub_02060AF0(r5, r6, r4, r7);
}




void sub_02060020(void) {
    sub_02061108();
    sub_0205F73C(r5);
    sub_0205F504(r5);
    sub_0205F514(r5);
    ov01_021F9318(r5);
    sub_02060AB8(r5, r6, r4, r0);
    sub_020603F8(r5, r6, r4, r7);
    sub_020607D8(r5, r6, r4, r7);
    sub_020603D0(r5, r6, r4, r7);
    sub_02060AF0(r5, r6, r4, r7);
}




void sub_0206008C(void) {
    sub_0205F514();
    sub_0205F51C(r5, ((r0 << 0x18) >> 0x18));
    sub_02061108(r5);
    sub_0205F73C(r5);
    sub_0205F504(r5);
    sub_0205F514(r5);
    ov01_021F9318(r5);
    sub_020601A4(r5, r6, r4, r0);
    sub_0206073C(r5, r6, r4, r7);
    sub_020607A4(r5, r6, r4, r7);
    sub_0206039C(r5, r6, r4, r7);
    sub_020609D4(r5, r6, r4, r7);
    sub_02060530(r5, r6, r4, r7);
}




void sub_02060114(void) {
    sub_02061108();
    sub_0205F73C(r5);
    sub_0205F504(r5);
    sub_0205F514(r5);
    ov01_021F9318(r5);
    sub_020601A4(r5, r6, r4, r0);
    sub_0206073C(r5, r6, r4, r7);
    sub_020607A4(r5, r6, r4, r7);
    sub_0206039C(r5, r6, r4, r7);
    sub_020609D4(r5, r6, r4, r7);
    sub_02060530(r5, r6, r4, r7);
    sub_02060274(r5, r6, r4, r7);
    sub_0206064C(r5, r6, r4, r7);
}




void sub_020601A4(void) {
}




void sub_020601BC(void) {
    MapObject_GetID();
    MetatileBehavior_IsEncounterGrass(r6);
    MapObject_TestFlagsBits(r5, (2 << 8));
    ov01_021FF070(r5, 0);
    MapObject_GetID(r5);
    ov01_022055DC(r5);
    MapObject_GetFacingDirection(r5);
    MapObject_GetFieldSystem(r5);
    // add r4, #0xfe
    // add r1, sp, #8
    // add r2, sp, #4
    ov01_02205604(r5);
    // ldr r1, [sp, #8]
    // ldr r2, [sp, #4]
    GetMetatileBehavior(r6);
    MetatileBehavior_IsEncounterGrass(((r0 << 0x18) >> 0x18));
    // str r0, [sp]
    // ldr r2, [sp, #8]
    // ldr r3, [sp, #4]
    ov01_021FF0E4(r5, 0);
    sub_0205B6F4(((r4 << 0x18) >> 0x18));
    // str r0, [sp]
    // ldr r2, [sp, #8]
    // ldr r3, [sp, #4]
    ov01_021FF964(r5, 0);
}




void sub_02060274(void) {
    MapObject_GetID();
    MetatileBehavior_IsEncounterGrass(r6);
    MapObject_TestFlagsBits(r5, (2 << 8));
    ov01_021FF070(r5, 1);
    MapObject_GetID(r5);
    ov01_022055DC(r5);
    MapObject_GetFacingDirection(r5);
    MapObject_GetFieldSystem(r5);
    // add r4, #0xfe
    // add r1, sp, #8
    // add r2, sp, #4
    ov01_02205604(r5);
    // ldr r1, [sp, #8]
    // ldr r2, [sp, #4]
    GetMetatileBehavior(r6);
    MetatileBehavior_IsEncounterGrass(((r0 << 0x18) >> 0x18));
    // str r1, [sp]
    // ldr r2, [sp, #8]
    // ldr r3, [sp, #4]
    ov01_021FF0E4(r5, 1);
    sub_0205B6F4(((r4 << 0x18) >> 0x18));
    // str r1, [sp]
    // ldr r2, [sp, #8]
    // ldr r3, [sp, #4]
    ov01_021FF964(r5, 1);
}




void sub_02060328(void) {
    // ldrh r0, [r4]
    sub_0205BA94(r2);
    // ldrh r0, [r4]
    ov01_021FE3E8(r5);
    ov01_021FE3F4(r5);
    sub_02060EA4(r5, r6);
    // ldrh r0, [r4]
    ov01_021FE3C4(r5);
    ov01_021FE3D0(r5);
    sub_02060ED4(r5, r6);
    ov01_021FE3DC(r5);
}




void sub_0206039C(void) {
    sub_0205B7A4(r1);
    MapObject_CheckFlag26(r4);
    ov01_021FF4FC(r4, 1);
    MapObject_SetFlag26(r4, 1);
    MapObject_SetFlag26(r4, 0);
}




void sub_020603D0(void) {
}




void sub_020603DC(void) {
    sub_0205F524();
    sub_020603F8(r5, r4, ((r0 << 0x18) >> 0x18), r6);
}




void sub_020603F8(void) {
    MapObject_GetManager();
    sub_0205F610();
    // ldrh r0, [r7]
    MetatileBehavior_IsEncounterGrass(r4);
    sub_0205B6F4(r4);
    MetatileBehavior_IsEncounterGrass(r6);
    sub_0205B6F4(r6);
    sub_02060E54(r5, r4);
    sub_0205B984(r4);
    sub_0205B7A4(r4);
    sub_02060EBC(r5, r4);
    sub_0205B8AC(r4);
    sub_0205BA70(r4);
    MapObject_SetFlagsBits(r5, (1 << 0x14));
    MapObject_GetFlagsBitsMask(r5, (2 << 0xe));
    ov01_021FD684(r5);
    MapObject_SetFlagsBits(r5, (2 << 0xe));
    MetatileBehavior_IsEncounterGrass(r4);
    sub_0205B6F4(r4);
    sub_02060E54(r5, r4);
    sub_0205B984(r4);
    sub_0205B7A4(r4);
    sub_02060EBC(r5, r4);
    sub_0205B8AC(r4);
    sub_0205BA70(r4);
    MapObject_SetFlagsBits(r5, (1 << 0x14));
    MapObject_GetFlagsBitsMask(r5, (2 << 0xe));
    ov01_021FD640(r5);
    MapObject_SetFlagsBits(r5, (2 << 0xe));
}




void sub_02060530(void) {
    MapObject_GetManager();
    sub_0205F610();
    // ldrh r0, [r6]
    sub_0205F524(r5);
    MetatileBehavior_IsEncounterGrass(r4);
    sub_0205B6F4(r4);
    MetatileBehavior_IsEncounterGrass(((r6 << 0x18) >> 0x18));
    sub_0205B6F4(((r6 << 0x18) >> 0x18));
    sub_02060E54(r5, r4);
    sub_0205B984(r4);
    sub_0205B7A4(r4);
    sub_02060EBC(r5, r4);
    sub_0205B8AC(r4);
    sub_0205BA70(r4);
    MapObject_SetFlagsBits(r5, (1 << 0x14));
    MapObject_ClearFlagsBits(r5, (1 << 0x14));
    MetatileBehavior_IsEncounterGrass(r4);
    sub_0205B6F4(r4);
    sub_02060E54(r5, r4);
    sub_0205B984(r4);
    sub_0205B7A4(r4);
    sub_02060EBC(r5, r4);
    sub_0205B8AC(r4);
    sub_0205BA70(r4);
    MapObject_SetFlagsBits(r5, (1 << 0x14));
    MapObject_ClearFlagsBits(r5, (1 << 0x14));
}




void sub_0206064C(void) {
    sub_02060E54();
    sub_0205B7A4(r4);
    sub_0205B828(r4);
    sub_0205B8AC(r4);
    sub_02060EBC(r5, r4);
    MapObject_CheckVisible(r5);
    ov01_021FF74C(r5);
}




void sub_02060698(void) {
    MapObject_GetID();
    sub_0205B6F4(r6);
    MapObject_TestFlagsBits(r5, (2 << 8));
    ov01_021FF8F0(r5, 0);
}




void sub_020606CC(void) {
    MapObject_GetID();
    sub_0205B6F4(r6);
    MapObject_TestFlagsBits(r5, (2 << 8));
    ov01_021FF8F0(r5, 1);
}




void sub_02060700(void) {
    // bx lr
    // TODO: decompile
}




void sub_02060704(void) {
    // bx lr
    // TODO: decompile
}




void sub_02060708(void) {
    sub_0205B984(r2);
    MapObject_GetPreviousXCoord(r5);
    MapObject_GetPreviousYCoord(r5);
    MapObject_GetPreviousZCoord(r5);
    ov01_021FECA0(r5, r4, r6, r0);
}




void sub_0206073C(void) {
    sub_0205B984(r1);
    MapObject_GetXCoord(r5);
    MapObject_GetYCoord(r5);
    MapObject_GetZCoord(r5);
    ov01_021FECA0(r5, r4, r6, r0);
}




void sub_02060770(void) {
    sub_0205B8AC(r2);
    MapObject_GetPreviousXCoord(r5);
    MapObject_GetPreviousYCoord(r5);
    MapObject_GetPreviousZCoord(r5);
    ov01_021FEE04(r5, r4, r6, r0);
}




void sub_020607A4(void) {
    sub_0205B8AC(r1);
    MapObject_GetXCoord(r5);
    MapObject_GetYCoord(r5);
    MapObject_GetZCoord(r5);
    ov01_021FEE04(r5, r4, r6, r0);
}




void sub_020607D8(void) {
    // ldrh r1, [r3]
    MapObject_CheckFlag24(((r1 << 0x13) >> 0x1e));
    sub_0205BA6C();
    MapObject_GetID(r5);
    ov01_022055DC(r5);
    MapObject_CheckFlag24(r5);
    sub_0205B9B8(r6);
    sub_02060FA8(r5, 1);
    // str r0, [sp, #0xc]
    sub_02060FA8(r5, 3);
    // str r0, [sp, #8]
    sub_02060FA8(r5, 2);
    // str r0, [sp, #4]
    ov01_022056C4(r5, 4);
    // str r0, [sp]
    ov01_022056C4(r5, 5);
    // ldr r0, [sp, #0xc]
    sub_0205B9B8((r0 << 0x18));
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #8]
    sub_0205B9B8();
    // ldr r0, [sp, #8]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #4]
    sub_0205B9B8();
    // ldr r0, [sp, #4]
    // str r0, [sp, #0x10]
    // ldr r0, [sp]
    sub_0205B9B8();
    // ldr r0, [sp]
    // str r0, [sp, #0x10]
    sub_0205B9B8(r7);
    // str r7, [sp, #0x10]
    // ldr r4, [sp, #0x10]
    sub_0205BA6C();
    MapObject_SetFlag24(r5, 1);
    sub_0205BA70(r4);
    sub_0205B984(r4, 5);
    ov01_021FDF88(r5, 4);
    MapObject_CheckFlag24(r5);
    sub_0205B9B8(r6);
    sub_02060FA8(r5, 1);
    sub_0205B9B8(((r0 << 0x18) >> 0x18));
    sub_0205BA6C();
    MapObject_SetFlag24(r5, 1);
    sub_0205BA70(r4);
    sub_0205B984(r4, 2);
    ov01_021FDF88(r5, 1);
    MapObject_CheckFlag24(r5);
    sub_0205B9B8(r6);
    sub_02060FA8(r5, 1);
    sub_0205B9B8(((r0 << 0x18) >> 0x18));
    sub_0205BA6C();
    MapObject_SetFlag24(r5, 1);
    sub_0205BA70(r4);
    sub_0205B984(r4, 2);
    ov01_021FDA74(r5, 1);
}




void sub_020609D4(void) {
    // ldrh r1, [r3]
    MapObject_CheckFlag24(((r1 << 0x13) >> 0x1e));
    MapObject_GetID(r5);
    ov01_022055DC(r5);
    sub_02060FA8(r5, 1);
    // str r0, [sp, #8]
    sub_02060FA8(r5, 3);
    // str r0, [sp, #4]
    sub_02060FA8(r5, 2);
    // str r0, [sp]
    ov01_022056C4(r5, 4);
    ov01_022056C4(r5, 5);
    // ldr r0, [sp, #8]
    sub_0205B9B8((r0 << 0x18));
    // ldr r0, [sp, #4]
    sub_0205B9B8();
    // ldr r0, [sp]
    sub_0205B9B8();
    sub_0205B9B8(r7);
    sub_0205B9B8(r6);
    MapObject_SetFlag24(r5, 0);
    sub_02060FA8(r5, 1);
    sub_0205B9B8(((r0 << 0x18) >> 0x18));
    MapObject_SetFlag24(r5, 0);
}




void sub_02060AB8(void) {
    sub_0205BA24(r1);
    MapObject_SetFlag28(r5, 1);
    MapObject_CheckFlag28(r5);
    sub_0205BA30(r4);
    MapObject_SetFlag28(r5, 0);
}




void sub_02060AF0(void) {
    // bx lr
    // TODO: decompile
}




void sub_02060AF4(void) {
    // ldr r7, [sp, #0x28]
    // str r1, [sp, #4]
    // str r3, [sp, #8]
    sub_02060D94(r2, r3, r7);
    // orr r4, r0
    MapObject_GetFieldSystem(r6);
    // add r1, sp, #0xc
    // str r1, [sp]
    // ldr r1, [sp, #4]
    sub_020549A8(r5, r7);
    // orr r4, r0
    // add r1, sp, #0xc
    // ldrsb r0, [r1, r0]
    // orr r4, r0
    // ldr r3, [sp, #0x2c]
    sub_02060DEC(r6, r5, r7);
    // orr r4, r0
    sub_0203993C(2);
    sub_0203401C();
    // ldr r2, [sp, #8]
    sub_02060BFC(r6, r5, r7);
    // orr r4, r0
    // ldr r2, [sp, #8]
    sub_02060CA8(r6, r5, r7);
    // orr r4, r0
}




void sub_02060B90(void) {
    // add r1, sp, #8
    MapObject_CopyPositionVector();
    // ldr r0, [sp, #0x28]
    // str r4, [sp]
    // str r0, [sp, #4]
    // add r1, sp, #8
    sub_02060AF4(r5, r6, r7);
}




void sub_02060BB8(void) {
    MapObject_GetXCoord();
    GetDeltaXByFacingDirection(r4);
    MapObject_GetYCoord(r5);
    // str r0, [sp, #4]
    MapObject_GetZCoord(r5);
    // str r0, [sp, #8]
    GetDeltaYByFacingDirection(r4);
    // str r4, [sp]
    // ldr r4, [sp, #8]
    // ldr r2, [sp, #4]
    // add r1, r6, r7
    // add r3, r4, r3
    sub_02060B90(r5, r0);
}




void sub_02060BFC(void) {
    // str r0, [sp]
    MapObject_GetManager();
    MapObjectManager_GetObjects2();
    // str r0, [sp, #8]
    MapObjectManager_GetObjectCount(r5);
    // str r0, [sp, #4]
    // ldr r0, [sp, #8]
    // ldr r1, [sp]
    MapObject_GetFlagsBitsMask(1);
    // ldr r0, [sp, #8]
    MapObject_GetFlagsBitsMask((1 << 0x12));
    // ldr r0, [sp, #8]
    MapObject_GetXCoord();
    // ldr r0, [sp, #8]
    MapObject_GetZCoord();
    // ldr r0, [sp, #8]
    MapObject_GetYCoord();
    // sub r0, r0, r6
    // bpl _02060C5E
    // neg r0, r0
    // ldr r0, [sp, #8]
    MapObject_GetPreviousXCoord(1);
    // ldr r0, [sp, #8]
    MapObject_GetPreviousZCoord();
    // ldr r0, [sp, #8]
    MapObject_GetYCoord();
    // sub r0, r0, r6
    // bpl _02060C8A
    // neg r0, r0
    // add r0, sp, #8
    MapObjectArray_NextObject(1);
    // ldr r0, [sp, #4]
    // str r0, [sp, #4]
}




void sub_02060CA8(void) {
    // str r0, [sp]
    MapObject_GetManager();
    MapObjectManager_GetObjects2();
    // str r0, [sp, #4]
    MapObjectManager_GetObjectCount(r7);
    // ldr r0, [sp, #4]
    // ldr r1, [sp]
    MapObject_GetFlagsBitsMask(1);
    // ldr r0, [sp, #4]
    MapObject_GetXCoord();
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #4]
    MapObject_GetZCoord();
    // ldr r1, [sp, #0xc]
    // str r0, [sp, #8]
    // ldr r0, [sp, #4]
    MapObject_GetYCoord();
    // sub r0, r0, r4
    // bpl _02060D00
    // neg r0, r0
    // ldr r0, [sp, #4]
    MapObject_GetPreviousXCoord(1);
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #4]
    MapObject_GetPreviousZCoord();
    // ldr r1, [sp, #0xc]
    // str r0, [sp, #8]
    // ldr r0, [sp, #4]
    MapObject_GetYCoord();
    // sub r0, r0, r4
    // bpl _02060D30
    // neg r0, r0
    // ldr r0, [sp, #4]
    MapObject_GetID(1);
    // ldr r0, [sp, #4]
    ov01_022055DC();
    // ldr r0, [sp, #4]
    MapObject_CheckVisible();
    // ldr r0, [sp, #4]
    // add r1, sp, #0xc
    // add r2, sp, #8
    ov01_02205664();
    // ldr r0, [sp, #0xc]
    // ldr r0, [sp, #8]
    // ldr r0, [sp, #4]
    MapObject_GetYCoord();
    // sub r0, r0, r4
    // bpl _02060D7A
    // neg r0, r0
    // add r0, sp, #4
    MapObjectArray_NextObject(1);
}




void sub_02060D94(void) {
    MapObject_GetInitialX();
    MapObject_GetXRange(r6);
    // mvn r1, r1
    // add r1, r7, r0
    // sub r0, r7, r0
    MapObject_GetInitialZ(r6, 0);
    MapObject_GetYRange(r6);
    // mvn r1, r1
    // add r1, r5, r0
    // sub r0, r5, r0
}




void sub_02060DEC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r4, r0, #0
    // add r6, r1, #0
    // add r7, r2, #0
    // add r5, r3, #0
    // bl sub_0205F8D0
    // cmp r0, #0
    // bne _02060E46
    // add r0, r4, #0
    // bl MapObject_GetFieldSystem
    // str r0, [sp]
    // add r0, r4, #0
    // bl sub_0205F504
    // lsl r0, r0, #0x18
    // lsr r4, r0, #0x18
    // ldr r0, [sp]
    // add r1, r6, #0
    // add r2, r7, #0
    // bl GetMetatileBehavior
    // add r6, r0, #0
    // bl sub_0205BA6C
    // cmp r6, r0
    // bne _02060E28
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r1, _02060E4C ; =_020FD4CC
    // lsl r5, r5, #2
    // ldr r1, [r1, r5]
    // add r0, r4, #0
    // blx r1
    // cmp r0, #1
    // beq _02060E42
    // ldr r1, _02060E50 ; =_020FD4BC
    // add r0, r6, #0
    // ldr r1, [r1, r5]
    // blx r1
    // cmp r0, #1
    // bne _02060E46
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02060E4C: .word _020FD4CC
    // _02060E50: .word _020FD4BC
    // TODO: decompile
}




BOOL sub_02060E54(void) {
    sub_0205BA54(((r1 << 0x18) >> 0x18));
    MapObject_CheckFlag28(r5);
    MetatileBehavior_IsSurfableWater(((r4 << 0x18) >> 0x18));
    sub_0205B78C(((r4 << 0x18) >> 0x18));
    MapObject_GetSpriteID(r5);
    // sub r0, #0xb2
}




void sub_02060EA4(void) {
}




void sub_02060EBC(void) {
}




void sub_02060ED4(void) {
}




void sub_02060EEC(void) {
    MapObject_CheckFlag28();
    sub_0205BA30(((r4 << 0x18) >> 0x18));
}




void GetDeltaXByFacingDirection(void) {
    // lsl r1, r0, #2
    // ldr r0, _02060F14 ; =_020FD4AC
    // ldr r0, [r0, r1]
    // bx lr
    // _02060F14: .word _020FD4AC
    // TODO: decompile
}




void GetDeltaYByFacingDirection(void) {
    // lsl r1, r0, #2
    // ldr r0, _02060F20 ; =_020FD49C
    // ldr r0, [r0, r1]
    // bx lr
    // _02060F20: .word _020FD49C
    // TODO: decompile
}




void sub_02060F24(void) {
}




void sub_02060F78(void) {
}




void sub_02060FA8(void) {
    MapObject_GetXCoord();
    GetDeltaXByFacingDirection(r5);
    MapObject_GetZCoord(r4);
    // str r0, [sp]
    GetDeltaYByFacingDirection(r5);
    MapObject_GetFieldSystem(r4);
    // ldr r2, [sp]
    // add r1, r6, r7
    // add r2, r2, r5
    GetMetatileBehavior();
}




void sub_02060FE0(void) {
    MapObject_GetXCoord();
    GetDeltaXByFacingDirection(r5);
    MapObject_GetZCoord(r4);
    // str r0, [sp]
    GetDeltaYByFacingDirection(r5);
    MapObject_GetFieldSystem(r4);
    // ldr r2, [sp]
    // add r1, r6, r7
    // add r2, r2, r5
    sub_020548EC();
}




void sub_0206101C(void) {
    // add r1, sp, #0
    MapObject_CopyPositionVector();
    // add r0, r5, r5
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0206103C: ; jump table
    // ldr r0, [sp, #8]
    // sub r0, r0, r4
    // str r0, [sp, #8]
    // ldr r0, [sp, #8]
    // add r0, r0, r4
    // str r0, [sp, #8]
    // ldr r0, [sp]
    // sub r0, r0, r4
    // str r0, [sp]
    // ldr r0, [sp]
    // add r0, r0, r4
    // str r0, [sp]
    // add r1, sp, #0
    MapObject_SetPositionVector(r6);
}




void sub_02061070(void) {
    // add r1, sp, #0xc
    MapObject_CopyPositionVector();
    // add r3, sp, #0xc
    // ldmia r3!, {r0, r1}
    // add r2, sp, #0
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    MapObject_CheckIgnoreHeights(r5);
    MapObject_ClearFlagsBits(r5, (1 << 0xc));
    MapObject_CheckFlag29(r5);
    MapObject_GetFieldSystem(r5);
    // add r1, sp, #0
    sub_02061248(r4);
    // ldr r0, [sp, #4]
    // add r1, sp, #0xc
    // str r0, [sp, #0x10]
    MapObject_SetPositionVector(r5);
    MapObject_GetYCoord(r5);
    MapObject_SetPreviousY(r5, r0);
    // ldr r1, [sp, #0x10]
    // asr r2, r1, #3
    // asr r1, r2, #0xb
    // add r1, r2, r1
    // asr r1, r1, #0xc
    MapObject_SetCurrentY(r5, (r1 >> 0x14));
    MapObject_ClearFlagsBits(r5, (1 << 0xc));
    MapObject_SetFlagsBits(r5, (1 << 0xc));
}




void sub_02061108(void) {
    sub_0205BA6C();
    sub_0205F8D0(r5);
    MapObject_GetPreviousXCoord(r5);
    MapObject_GetPreviousZCoord(r5);
    MapObject_GetFieldSystem(r5);
    GetMetatileBehavior(r4, r6);
    MapObject_GetXCoord(r5);
    MapObject_GetZCoord(r5);
    GetMetatileBehavior(r7, r4, r0);
    sub_0205F50C(r5, r6);
    sub_0205F4FC(r5, r4);
    MetatileBehavior_IsNone(r4);
    MapObject_SetFlagsBits(r5, (2 << 0xa));
    MapObject_ClearFlagsBits(r5, (2 << 0xa));
}




void sub_02061190(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _020611A0: ; jump table
    // sub r0, r0, r2
    *((u32*)(r1 + 8)) = *((u32*)(r1 + 8));
    // add r0, r0, r2
    *((u32*)(r1 + 8)) = *((u32*)(r1 + 8));
    // sub r0, r0, r2
    // str r0, [r1]
    // add r0, r0, r2
    // str r0, [r1]
}




void sub_020611C8(void) {
    // add r3, r3, r0
    // str r3, [r2]
    // add r0, r1, r0
    *((u32*)(r2 + 8)) = (2 << 0xe);
}




void sub_020611DC(void) {
    MapObject_GetMovement();
    // sub r0, #0x33
    sub_0205F430(r4);
}




void sub_020611F4(void) {
    // lsl r1, r0, #2
    // ldr r0, _020611FC ; =_020FD4DC
    // ldr r0, [r0, r1]
    // bx lr
    // _020611FC: .word _020FD4DC
    // TODO: decompile
}




void sub_02061200(void) {
    // cmp r0, r2
    // ble _02061208
    // mov r0, #2
    // bx lr
    // cmp r0, r2
    // bge _02061210
    // mov r0, #3
    // bx lr
    // cmp r1, r3
    // bgt _02061218
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // TODO: decompile
}




u32 sub_0206121C(void) {
    // add r1, sp, #4
    // str r1, [sp]
    sub_02054940(*((u32*)(r1 + 4)), *((u32*)r1), *((u32*)(r1 + 8)));
    // add r1, sp, #4
    // ldrb r1, [r1]
    *((u32*)(r4 + 4)) = 0;
}




void sub_02061248(void) {
    // add r1, sp, #4
    // str r1, [sp]
    sub_02054940(*((u32*)(r1 + 4)), *((u32*)r1), *((u32*)(r1 + 8)));
    // add r1, sp, #4
    // ldrb r1, [r1]
    *((u32*)(r5 + 4)) = 0;
}



