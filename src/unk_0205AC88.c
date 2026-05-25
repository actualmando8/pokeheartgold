/* Decompiled from asm/unk_0205AC88.s */
#include "global.h"

struct UnkStruct_0205AC88 * sub_0205AC88(void) {
    Heap_Alloc(0x1f, 0x000004E8);
    MIi_CpuClearFast(0, r0, 0x000004E8);
    // str r5, [r4]
    // str r1, [r4, r0]
    SysTask_CreateOnMainQueue(sub_0205AD60, r4, 0xb);
    *((u32*)(r4 + 4)) = r0;
    sub_0205A1F0(r5);
    // str r0, [r4, r1]
    SaveArray_Get(*((u32*)(*((u32*)(r4 + 0x000004D4)) + 0xc)), 8);
    // str r0, [r4, r1]
    *((u32*)(r4 + 8)) = *((u32*)(*((u32*)(r4 + (0x000004D8 - 4))) + 0x40));
    Heap_CreateAtEnd(0xb, 0x57, 0x00002710);
    sub_0205B3B8(0x57);
    // str r0, [r4, r1]
    sub_0205AD24(r4, 0x000004DC);
}




void sub_0205AD0C(void) {
    // add r0, #0x18
}




void sub_0205AD24(void) {
    // add r0, #0x18
}




void sub_0205AD3C(void) {
    SysTask_Destroy(*((u32*)(r0 + 4)));
    sub_0205B3CC(*((u32*)(r4 + 0x000004DC)));
    Heap_Destroy(0x57);
    Heap_Free(r4);
}




void sub_0205AD60(void) {
    FieldSystem_TaskIsRunning(*((u32*)(r1 + 0x000004D4)));
    *((u32*)(r5 + 8)) = *((u32*)(*((u32*)(r5 + 0x000004D4)) + 0x40));
    sub_0205AEA8(r5, r4, *((u32*)(*((u32*)(r5 + 0x000004D4)) + 0x3c)), *((u32*)(r5 + (0x000004D4 + 4))));
    sub_0205AF78(r5, *((u32*)(*((u32*)(r5 + 0x000004D4)) + 0x3c)));
}




void sub_0205AD9C(void) {
    // str r0, [sp]
    // str r3, [sp, #4]
    // ldr r0, [sp]
    // add r0, #0xc
    // str r0, [sp]
    // ldr r0, [sp]
    sub_0205AEA0(_020FC824, *((u16*)(_020FC824 + (r1 << 1))), 3);
    // str r0, [sp, #0xc]
    // add r0, #0x50
    // str r0, [sp, #0xc]
    // add r0, #0x30
    // str r0, [sp, #0xc]
    // ldr r2, [sp]
    // add r2, r2, r3
    // ldr r0, [sp]
    // add r0, #0xc
    // str r0, [sp]
    // ldr r0, [sp]
    sub_0205AEA0(_020FC824, *((u16*)(_020FC824 + (r1 << 1))), 3, (r1 * 0x18));
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #8]
    // ldr r0, [sp]
    // str r0, [sp, #0x10]
    // add r0, #0xc
    // str r0, [sp, #0x10]
    // ldr r0, [sp]
    // add r4, r0, r1
    // ldr r0, [sp, #0xc]
    // add r1, r0, r6
    *((u8*)((r4 + 1) + 0xc)) = 2;
    // and r0, r1
    *((u8*)((r4 + 1) + 0x14)) = 0x7f;
    // ldr r1, [sp, #8]
    // ldr r0, [sp, #4]
    PalPad_PlayerIdIsFriendOrMutual(0x7f, *((u32*)*((u8*)((*((u16*)(_020FC824 + (r1 << 1))) * 0x18) + 0x18))));
    *((u8*)(r4 + 0xe)) = r0;
    // ldr r0, [sp, #0xc]
    // add r0, r0, r6
    // ldr r0, [sp, #0x10]
    sub_0205AEA0(*((u8*)(r0 + 0x18)), r7, 3);
    *((u8*)(r4 + 0xc)) = 0;
    // ldr r0, [sp, #8]
    // str r0, [sp, #8]
}




void sub_0205AEA0(void) {
    // strb r2, [r0, r3]
}




void sub_0205AEA8(void) {
    // str r0, [sp]
    // str r0, [sp, #0x10]
    // add r0, #0xc
    // str r1, [sp, #4]
    // str r3, [sp, #8]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #4]
    // add r7, #0x50
    // str r0, [sp, #0xc]
    // add r0, #0x10
    // str r0, [sp, #0xc]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0xc]
    // ldr r0, [sp, #0xc]
    // ldr r0, [sp, #8]
    // ldr r3, [sp, #8]
    // ldr r0, [sp]
    // ldr r0, [sp, #0x10]
    // ldr r0, [sp, #0x10]
    // ldr r0, [sp]
    // ldr r3, [sp, #8]
    // add r5, #0x18
}




void sub_0205AF78(void) {
    // str r0, [sp]
    // str r1, [sp, #4]
    GF_AssertFail(*((u32*)(r0 + 8)));
    // ldr r0, [sp]
    PlayerAvatar_GetXCoord(*((u32*)(r0 + 8)));
    // str r0, [sp, #0xc]
    // ldr r0, [sp]
    PlayerAvatar_GetZCoord(*((u32*)(r0 + 8)));
    // ldr r4, [sp]
    // str r0, [sp, #8]
    // add r6, #0xc
    // ldr r0, [sp, #4]
    MapObjectManager_GetFirstActiveObjectByID((0 + 1));
    GF_AssertFail();
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0205AFC8: ; jump table
    MapObject_AreBitsSetForMovementScriptInit(r5);
    // ldr r2, [sp, #0xc]
    // ldr r3, [sp, #8]
    sub_0205B13C(r6, r5);
    MapObject_AreBitsSetForMovementScriptInit(r5);
    *((u8*)(r4 + 0xd)) = 0;
    *((u8*)(r4 + 0xc)) = 0;
    sub_0205B0DC(r6, 1);
    MapObject_ClearHeldMovementIfActive(r5);
    MapObject_SetFlag19(r5, 0);
    sub_0205FC94(r5, 3);
    MapObject_SetXRange(r5, 1);
    MapObject_SetYRange(r5, 1);
    *((u8*)(r4 + 0x15)) = 1;
    *((u8*)(r4 + 0xd)) = 2;
    *((u8*)(r4 + 0xc)) = 0;
    MapObject_AreBitsSetForMovementScriptInit(r5);
    sub_0205B218(r6, r5);
    sub_0205B1E4(r6, r5);
    sub_0205B118(r6);
    MapObject_AreBitsSetForMovementScriptInit(r5);
    MapObject_ClearHeldMovementIfActive(r5);
    *((u8*)(r4 + 0xd)) = 4;
    *((u8*)(r4 + 0xc)) = 0;
    *((u8*)(r4 + 0x15)) = 0;
    MapObject_SetVisible(r5, 1);
    MapObject_ClearFlag18(r5, 0);
    *((u8*)(r4 + 0xd)) = 0;
    // add r4, #0x18
    // add r6, #0x18
    // ldr r0, [sp]
    PlayerAvatar_GetMapObject(*((u32*)(0 + 8)));
    // ldr r0, [sp]
    // add r0, r0, r2
    sub_0205B218(r0, 0x000004BC);
    // ldr r0, [sp]
    // add r0, r0, r1
    sub_0205B118(0x000004BC);
}




void sub_0205B0DC(void) {
}




void sub_0205B118(void) {
}




void sub_0205B13C(void) {
    // str r2, [sp, #4]
    // str r3, [sp, #8]
    MapObject_GetInitialX(r1);
    MapObject_GetInitialY(r4);
    // str r0, [sp, #0xc]
    MapObject_GetInitialZ(r4);
    // ldr r0, [sp, #4]
    // ldr r0, [sp, #8]
    PlaySE(0x0000064E);
    sub_0205E3AC(r4, *((u8*)(r5 + 8)));
    sub_0205B0DC(r5, 0);
    // str r0, [sp]
    // ldr r2, [sp, #0xc]
    MapObject_SetPositionFromXYZAndDirection(r4, r7, r6);
    MapObject_SetFacingDirectionDirect(r4, 1);
    MapObject_SetHeldMovement(r4, 0x44);
    MapObject_SetVisible(r4, 0);
    MapObject_ClearFlag18(r4, 1);
    *((u8*)(r5 + 1)) = 1;
    ov01_021FD8E8(r4, 1);
    *((u32*)(r5 + 0x14)) = r0;
    ov01_021FD8E8(r4, 2);
    *((u32*)(r5 + 0x14)) = r0;
    *((u8*)(r5 + 2)) = 0;
}




void sub_0205B1E4(void) {
}




void sub_0205B218(void) {
}




void sub_0205B240(void) {
}




void sub_0205B27C(void) {
    // add r5, #0xc
    // add r5, #0x18
}




void sub_0205B338(void) {
}




void sub_0205B35C(void) {
    // add r5, #0x1c
    // str r1, [r6, r0]
    // str r1, [r6, r0]
}




void sub_0205B380(void) {
}




void sub_0205B3A0(void) {
}




void sub_0205B3B8(void) {
}




void sub_0205B3CC(void) {
}



