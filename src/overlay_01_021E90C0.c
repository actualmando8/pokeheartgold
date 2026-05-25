/* Decompiled from asm/overlay_01_021E90C0.s */
#include "global.h"

void ov01_021E90C0(void) {
}




void ov01_021E90D4(void) {
}




void ov01_021E90DC(void) {
}




BOOL ov01_021E90E4(void) {
    // add r1, r0, r0
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _021E9106: ; jump table
    *((u32*)(r1 + 0x10)) = 0;
    *((u8*)(r1 + 0xd)) = 0;
    // str r0, [sp]
    // str r2, [sp, #4]
    // add r0, sp, #0x48
    // str r0, [sp, #8]
    sub_02054A60(*((u32*)(r1 + 4)), *((u32*)(r1 + 8)), (1 - 2), (1 - 2));
    *((u8*)(r4 + 0xc)) = 1;
    // str r0, [sp, #0x24]
    ov01_021FB904(*((u32*)(r6 + 0x34)));
    // str r0, [sp, #0x1c]
    // str r0, [sp]
    // add r3, sp, #0x48
    sub_02054D10(r6, 4, 4);
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x1c]
    // add r2, sp, #0x30
    NARC_ReadWholeMember(*((u32*)r0));
    // add r0, sp, #0x2c
    // ldr r1, [sp, #0x18]
    // add r2, sp, #0x48
    // add r3, sp, #0x2c
    sub_02054AE4(r6, *((u32*)(r1 + (r7 << 2))));
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #0x18]
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x18]
    Heap_Free(*((u32*)(1 + r5)));
    // ldr r0, [sp, #0x24]
    // ldr r1, [sp, #0x20]
    ov01_021E8BAC(*((u32*)(r6 + 0x54)));
    ov01_021FB9E0(*((u32*)(r6 + 0x34)));
    // str r0, [sp, #0x28]
    // ldr r0, [sp, #0x2c]
    ov01_021F3B38();
    // ldr r0, [sp, #0x2c]
    ov01_021F3B3C();
    // str r5, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x28]
    // str r0, [sp, #8]
    // str r7, [sp, #0xc]
    // str r2, [sp, #0x10]
    // str r0, [sp, #0x14]
    // ldr r3, [sp, #0x20]
    ov01_021E8DE8(*((u32*)(r6 + 0x54)), *((u32*)(r6 + 0x58)), 1);
    ov01_021E90B0(*((u32*)(r6 + 0x58)), 1, 1);
    // ldr r0, [sp, #0x20]
    ov01_021E9700(1);
    *((u16*)(r4 + 0x1e)) = r0;
    // str r0, [r4]
    // str r0, [r4]
    ov01_021E8F30(*((u32*)(r6 + 0x58)), 1);
    ov01_021EA1F4(r6, r0);
    Camera_ClearFixedTarget(*((u32*)(r6 + 0x24)));
    *((u32*)(r4 + 0x10)) = 1;
    GetDoorSE(r6, r5, 1);
    ov01_021E8E98(*((u32*)(r6 + 0x58)), 1, 0, r0);
    // str r0, [r4]
    ov01_021E8F10(*((u32*)(r6 + 0x58)), 1);
    // str r0, [r4]
    PlayerAvatar_GetMapObject(*((u32*)(r6 + 0x40)));
    MapObject_SetHeldMovement(0xc);
    FollowMon_IsActive(r6);
    ov01_022057C4(r6);
    MapObject_GetPreviousXCoord(r5);
    MapObject_GetPreviousZCoord(r5);
    // add r3, #0xe4
    ov01_02205990(0xc, r7, r0, r6);
    // str r0, [r4]
    PlayerAvatar_GetMapObject(*((u32*)(r6 + 0x40)));
    MapObject_IsMovementPaused();
    FollowMon_IsActive(r6);
    FollowMon_GetMapObject(r6);
    MapObject_IsMovementPaused();
    MapObject_ClearHeldMovementIfActive(r5);
    MapObject_ClearHeldMovementIfActive(r7);
    // str r0, [r4]
    // str r0, [r4]
    PlayerAvatar_GetMapObject(*((u32*)(r6 + 0x40)));
    MapObject_SetVisible(1);
    Camera_SetPerspectiveClippingPlane((0x96 << 0xc), 0x00456000, *((u32*)(r6 + 0x24)));
    CreateCameraTranslationWrapper(4, *((u32*)(r6 + 0x24)));
    *((u32*)(r4 + 0x18)) = r0;
    // add r1, r3, r1
    SetCameraTranslationPath((0x14 * *((u16*)(r4 + 0x1e))), 0x18, ov01_02206428);
    // str r0, [r4]
    IsCameraTranslationFinished(*((u32*)(r4 + 0x18)));
    DeleteCameraTranslationWrapper(*((u32*)(r4 + 0x18)));
    *((u16*)(r4 + 0x1c)) = 1;
    // str r0, [r4]
    // add r4, #0xd
    ov01_021E95CC(*((u32*)(r6 + 0x24)), r4);
}




BOOL ov01_021E9374(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021E9390: ; jump table
    *((u32*)(r1 + 0x10)) = 0;
    *((u8*)(r1 + 0xd)) = 0;
    // str r0, [sp]
    // str r2, [sp, #4]
    // add r0, sp, #0x48
    // str r0, [sp, #8]
    sub_02054A60(*((u32*)(r1 + 4)), *((u32*)(r1 + 8)), (1 - 2), 0);
    *((u8*)(r6 + 0xc)) = 1;
    // str r0, [sp, #0x24]
    ov01_021FB904(*((u32*)(r4 + 0x34)));
    // str r0, [sp, #0x1c]
    // str r0, [sp]
    // add r3, sp, #0x48
    sub_02054D10(r4, 4, 4);
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x1c]
    // add r2, sp, #0x30
    NARC_ReadWholeMember(*((u32*)r0));
    // add r0, sp, #0x2c
    // ldr r1, [sp, #0x18]
    // add r2, sp, #0x48
    // add r3, sp, #0x2c
    sub_02054AE4(r4, *((u32*)(r1 + (r7 << 2))));
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #0x18]
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x18]
    Heap_Free(*((u32*)(1 + r5)));
    // ldr r0, [sp, #0x24]
    // ldr r1, [sp, #0x20]
    ov01_021E8BAC(*((u32*)(r4 + 0x54)));
    ov01_021E636C(1);
    // str r0, [r6]
    ov01_021FB9E0(*((u32*)(r4 + 0x34)));
    // str r0, [sp, #0x28]
    // ldr r0, [sp, #0x2c]
    ov01_021F3B38();
    // ldr r0, [sp, #0x2c]
    ov01_021F3B3C();
    // str r5, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x28]
    // str r0, [sp, #8]
    // str r7, [sp, #0xc]
    // str r2, [sp, #0x10]
    // str r0, [sp, #0x14]
    // ldr r3, [sp, #0x20]
    ov01_021E8DE8(*((u32*)(r4 + 0x54)), *((u32*)(r4 + 0x58)), 1);
    ov01_021E636C(1);
    // str r0, [r6]
    Camera_GetPerspectiveAngle(*((u32*)(r4 + 0x24)));
    *((u16*)(r6 + 0xe)) = r0;
    // ldr r1, [sp, #0x20]
    ov01_021EA1F4(r4);
    Camera_AdjustPerspectiveAngle(0x0000FFA0, *((u32*)(r4 + 0x24)));
    // str r0, [r6]
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r3, [sp, #8]
    // str r0, [sp, #0xc]
    NewFieldFadeEnvironment(*((u32*)(r4 + 0x10)), 0, 9, 1);
    ov01_021E8F30(*((u32*)(r4 + 0x58)), 1);
    ov01_021EA1F4(r4, r0);
    *((u32*)(r6 + 0x10)) = 1;
    GetDoorSE(r4, r5, 1);
    ov01_021E8E98(*((u32*)(r4 + 0x58)), 1, 0, r0);
    // str r0, [r6]
    ov01_021E8F10(*((u32*)(r4 + 0x58)), 1);
    PlayerAvatar_GetMapObject(*((u32*)(r4 + 0x40)));
    MapObject_SetVisible(0);
    // str r0, [r6]
    PlayerAvatar_GetMapObject(*((u32*)(r4 + 0x40)));
    MapObject_SetHeldMovement(0xd);
    // str r0, [r6]
    PlayerAvatar_GetMapObject(*((u32*)(r4 + 0x40)));
    MapObject_IsMovementPaused();
    MapObject_ClearHeldMovementIfActive(r5);
    ov01_02205790(r4, 1);
    ov01_021E8F30(*((u32*)(r4 + 0x58)), 1);
    GetDoorSE(r4, r0, 0);
    ov01_021E8E98(*((u32*)(r4 + 0x58)), 1, 1, r0);
    // str r0, [r6]
    ov01_021E8F10(*((u32*)(r4 + 0x58)), 1);
    IsPaletteFadeFinished();
    Camera_GetPerspectiveAngle(*((u32*)(r4 + 0x24)));
    ov01_021E8ED0(*((u32*)(r4 + 0x54)), *((u32*)(r4 + 0x58)), 1);
    IsPaletteFadeFinished(1);
    // add r6, #0xd
    ov01_021E9610(*((u32*)(r4 + 0x24)), r6);
}




void ov01_021E95CC(void) {
    // sub r0, #0x60
    // sub r0, r0, r4
    // neg r0, r4
    // strb r0, [r5]
}




void ov01_021E9610(void) {
    // sub r0, #0x60
    // add r0, r0, r4
    // strb r0, [r5]
}




void GetDoorSE(void) {
    ov01_021FB904(*((u32*)(r0 + 0x34)));
    // add r2, sp, #0
    NARC_ReadWholeMember(r5);
    // add r0, sp, #0
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021E967E: ; jump table
    GF_AssertFail(SEQ_SE_GS_HIKIDO_OPEN);
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021E96BC: ; jump table
    GF_AssertFail(SEQ_SE_GS_HIKIDO_CLOSE);
}




void ov01_021E9700(void) {
    // cmp r0, #0x3d
    // beq _021E970C
    // cmp r0, #0xe0
    // beq _021E9710
    // b _021E9712
    // b _021E9712
    // nop
    // _021E9718: .word 0x0000FFFF
}




void ov01_021E971C(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021E973A: ; jump table
    // add r2, sp, #0x20
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [sp]
    // str r2, [sp, #4]
    // add r0, sp, #0x30
    // str r0, [sp, #8]
    sub_02054A60(*((u32*)(r1 + 4)), *((u32*)(r1 + 8)), (1 - 2), 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, sp, #0x30
    // str r0, [sp, #8]
    sub_02054A60(*((u32*)(r4 + 4)), *((u32*)(r4 + 8)), 0, 0);
    *((u8*)(r4 + 0xc)) = 2;
    // add r0, sp, #0x1c
    // str r0, [sp]
    // add r0, sp, #0x18
    // str r0, [sp, #4]
    // add r1, sp, #0x20
    // add r3, sp, #0x30
    sub_02054B74(r6, 4);
    ov01_021FB9E0(*((u32*)(r6 + 0x34)));
    // ldr r0, [sp, #0x1c]
    ov01_021F3B38();
    // ldr r0, [sp, #0x1c]
    ov01_021F3B3C();
    // str r5, [sp]
    // str r0, [sp, #4]
    // str r7, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // ldr r3, [sp, #0x18]
    ov01_021E8DE8(*((u32*)(r6 + 0x54)), *((u32*)(r6 + 0x58)), 2);
    GF_AssertFail();
    PlayerAvatar_GetMapObject(*((u32*)(r6 + 0x40)));
    MapObject_AreBitsSetForMovementScriptInit();
    MapObject_SetHeldMovement(r5, 0x49);
    GF_AssertFail();
    // str r0, [r4]
    ov01_021E636C(1);
    ov01_021E8E98(*((u32*)(r6 + 0x58)), 2, 0, SEQ_SE_DP_ESUKA);
    PlayerAvatar_GetMapObject(*((u32*)(r6 + 0x40)));
    MapObject_AreBitsSetForMovementScriptInit();
    MapObject_SetHeldMovement(r6, 0xa);
    GF_AssertFail();
    // str r0, [r4]
    PlayerAvatar_GetMapObject(*((u32*)(r6 + 0x40)));
    MapObject_AreBitsSetForMovementScriptInit();
    MapObject_SetHeldMovement(r5, 0x4a);
    // str r0, [r4]
    PlayerAvatar_GetMapObject(*((u32*)(r6 + 0x40)));
    MapObject_AreBitsSetForMovementScriptInit();
    MapObject_SetHeldMovement(r6, 0xa);
    // str r0, [r4]
    PlayerAvatar_GetMapObject(*((u32*)(r6 + 0x40)));
    MapObject_IsMovementPaused();
    MapObject_ClearHeldMovementIfActive(r7);
    ov01_02205790(r6, r5);
    // str r0, [r4]
    ov01_021E8F10(*((u32*)(r6 + 0x58)), 2);
    IsPaletteFadeFinished();
    ov01_021E8ED0(*((u32*)(r6 + 0x54)), *((u32*)(r6 + 0x58)), 2);
    StopSE(SEQ_SE_DP_ESUKA, 0);
}




BOOL ov01_021E98F0(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021E990E: ; jump table
    // add r2, sp, #0x24
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [sp]
    // str r2, [sp, #4]
    // add r0, sp, #0x34
    // str r0, [sp, #8]
    sub_02054A60(*((u32*)(r1 + 4)), *((u32*)(r1 + 8)), (1 - 2), 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, sp, #0x34
    // str r0, [sp, #8]
    sub_02054A60(*((u32*)(r4 + 4)), *((u32*)(r4 + 8)), 0, 0);
    *((u8*)(r4 + 0xc)) = 2;
    // add r0, sp, #0x20
    // str r0, [sp]
    // add r0, sp, #0x1c
    // str r0, [sp, #4]
    // add r1, sp, #0x24
    // add r3, sp, #0x34
    sub_02054B74(r6, 4);
    ov01_021FB9E0(*((u32*)(r6 + 0x34)));
    // ldr r0, [sp, #0x20]
    ov01_021F3B38();
    // ldr r0, [sp, #0x20]
    ov01_021F3B3C();
    // str r5, [sp]
    // str r0, [sp, #4]
    // str r7, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // ldr r3, [sp, #0x1c]
    ov01_021E8DE8(*((u32*)(r6 + 0x54)), *((u32*)(r6 + 0x58)), 2);
    GF_AssertFail();
    PlayerAvatar_GetMapObject(*((u32*)(r6 + 0x40)));
    MapObject_AreBitsSetForMovementScriptInit();
    MapObject_SetHeldMovement(r5, 0x49);
    GF_AssertFail();
    // str r0, [r4]
    ov01_021E8E98(*((u32*)(r6 + 0x58)), 2, 0, SEQ_SE_DP_ESUKA);
    PlayerAvatar_GetMapObject(*((u32*)(r6 + 0x40)));
    MapObject_AreBitsSetForMovementScriptInit();
    MapObject_SetHeldMovement(r7, 0xb);
    FollowMon_IsActive(r6);
    MapObject_GetPreviousXCoord(r7);
    // str r0, [sp, #0x18]
    MapObject_GetPreviousZCoord(r7);
    // add r6, #0xe4
    // ldr r1, [sp, #0x18]
    ov01_02205990(r5, r0, r6);
    GF_AssertFail();
    // str r0, [r4]
    PlayerAvatar_GetMapObject(*((u32*)(r6 + 0x40)));
    MapObject_AreBitsSetForMovementScriptInit();
    MapObject_SetHeldMovement(r5, 0x4a);
    ov01_021E636C(0);
    // str r0, [r4]
    PlayerAvatar_GetMapObject(*((u32*)(r6 + 0x40)));
    MapObject_IsMovementPaused();
    MapObject_ClearHeldMovementIfActive(r5);
    // str r0, [r4]
    ov01_021E8F10(*((u32*)(r6 + 0x58)), 2);
    IsPaletteFadeFinished();
    ov01_021E8ED0(*((u32*)(r6 + 0x54)), *((u32*)(r6 + 0x58)), 2);
    StopSE(SEQ_SE_DP_ESUKA, 0);
}




void ov01_021E9ABC(void) {
    // ldrb r1, [r4]
}




void ov01_021E9AE8(void) {
    // str r3, [sp, #0x18]
    // str r0, [sp]
    // str r3, [sp, #4]
    // add r0, sp, #0x44
    // str r0, [sp, #8]
    // str r0, [sp]
    // add r3, sp, #0x44
    // str r0, [sp, #0x1c]
    // str r4, [sp, #0x24]
    // add r2, sp, #0x2c
    // add r0, sp, #0x28
    // ldr r1, [sp, #0x1c]
    // add r2, sp, #0x44
    // add r3, sp, #0x28
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #0x1c]
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x1c]
    // ldr r0, [sp, #0x24]
    // ldr r1, [sp, #0x20]
    // ldr r0, [sp, #0x28]
    // ldr r0, [sp, #0x28]
    // str r4, [sp]
    // str r0, [sp, #4]
    // str r6, [sp, #8]
    // str r5, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // ldr r2, [sp, #0x18]
    // ldr r3, [sp, #0x20]
}




void ov01_021E9BB8(void) {
}




void ov01_021E9BDC(void) {
}




void ov01_021E9C00(void) {
    Heap_AllocAtEnd(4, 1);
    // strb r4, [r2]
    TaskManager_Call(*((u32*)(r5 + 0x10)), ov01_021E9ABC, r0);
}




void ov01_021E9C20(void) {
    // bx r3
    // _021E9C2C: .word ov01_021E8ED0
}




void ov01_021E9C30(void) {
}




void ov01_021E9C40(void) {
    TaskManager_GetFieldSystem();
    TaskManager_GetEnvironment(r5);
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021E9C68: ; jump table
    PlayerAvatar_GetMapObject(*((u32*)(r4 + 0x40)));
    // str r0, [sp, #0x28]
    *((u32*)(r6 + 0x10)) = 0;
    *((u8*)(r6 + 0xd)) = 0;
    Camera_GetPerspectiveAngle(*((u32*)(r4 + 0x24)));
    *((u16*)(r6 + 0xe)) = r0;
    Camera_AdjustPerspectiveAngle(0x0000FFA0, *((u32*)(r4 + 0x24)));
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 1, 1, 0x00007FFF);
    *((u32*)(r6 + 0x10)) = 1;
    PlayerAvatar_GetFacingDirection(*((u32*)(r4 + 0x40)));
    *((u8*)(r6 + 0xc)) = 1;
    // str r2, [sp]
    // str r0, [sp, #0x24]
    // str r1, [sp, #4]
    // add r0, sp, #0x4c
    // str r0, [sp, #8]
    // ldr r3, [sp, #0x24]
    sub_02054A60(*((u32*)(r6 + 4)), *((u32*)(r6 + 8)), (3 - 4));
    ov01_021FB904(*((u32*)(r4 + 0x34)));
    // str r0, [sp, #0x1c]
    // str r0, [sp]
    // add r3, sp, #0x4c
    sub_02054D10(r4, 4, 4);
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x1c]
    // add r2, sp, #0x34
    NARC_ReadWholeMember(*((u32*)r0));
    // add r0, sp, #0x30
    // ldr r1, [sp, #0x18]
    // add r2, sp, #0x4c
    // add r3, sp, #0x30
    sub_02054AE4(r4, *((u32*)(r1 + (r7 << 2))));
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #0x18]
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x18]
    Heap_Free(*((u32*)(1 + r5)));
    // ldr r0, [sp, #0x24]
    // ldr r1, [sp, #0x20]
    ov01_021E8BAC(*((u32*)(r4 + 0x54)));
    ov01_021FB9E0(*((u32*)(r4 + 0x34)));
    // str r0, [sp, #0x2c]
    // ldr r0, [sp, #0x30]
    ov01_021F3B38();
    // ldr r0, [sp, #0x30]
    ov01_021F3B3C();
    // str r5, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x2c]
    // str r0, [sp, #8]
    // str r7, [sp, #0xc]
    // str r2, [sp, #0x10]
    // str r0, [sp, #0x14]
    // ldr r3, [sp, #0x20]
    ov01_021E8DE8(*((u32*)(r4 + 0x54)), *((u32*)(r4 + 0x58)), 1);
    // str r0, [r6]
    PlayerAvatar_GetFacingDirection(*((u32*)(r4 + 0x40)));
    // ldr r0, [sp, #0x28]
    MapObject_SetVisible(1);
    // str r0, [r6]
    // ldr r0, [sp, #0x28]
    MapObject_SetVisible(1, 0);
    // str r0, [r6]
    PlayerAvatar_GetMapObject(*((u32*)(r4 + 0x40)));
    MapObject_SetVisible(0);
    MapObject_SetHeldMovement(r5, 0xd);
    // str r0, [r6]
    PlayerAvatar_GetMapObject(*((u32*)(r4 + 0x40)));
    MapObject_IsMovementPaused();
    MapObject_ClearHeldMovementIfActive(r5);
    // str r0, [r6]
    IsPaletteFadeFinished((*((u32*)r6) + 1));
    Camera_GetPerspectiveAngle(*((u32*)(r4 + 0x24)));
    ov01_021E8F30(*((u32*)(r4 + 0x58)), 1);
    GetDoorSE(r4, r0, 1);
    ov01_021E8E98(*((u32*)(r4 + 0x58)), 1, 0, r0);
    // str r0, [r6]
    ov01_021E8F10(*((u32*)(r4 + 0x58)), 1);
    PlayerAvatar_GetMapObject(*((u32*)(r4 + 0x40)));
    MapObject_SetVisible(0);
    // str r0, [r6]
    PlayerAvatar_GetMapObject(*((u32*)(r4 + 0x40)));
    MapObject_SetHeldMovement(0xd);
    // str r0, [r6]
    PlayerAvatar_GetMapObject(*((u32*)(r4 + 0x40)));
    MapObject_IsMovementPaused();
    MapObject_ClearHeldMovementIfActive(r5);
    ov01_02205790(r4, 1);
    ov01_021E8F30(*((u32*)(r4 + 0x58)), 1);
    GetDoorSE(r4, r0, 0);
    ov01_021E8E98(*((u32*)(r4 + 0x58)), 1, 1, r0);
    // str r0, [r6]
    ov01_021E8F10(*((u32*)(r4 + 0x58)), 1);
    IsPaletteFadeFinished();
    Camera_GetPerspectiveAngle(*((u32*)(r4 + 0x24)));
    ov01_021E8ED0(*((u32*)(r4 + 0x54)), *((u32*)(r4 + 0x58)), 1);
    // add r6, #0xd
    ov01_021E9610(*((u32*)(r4 + 0x24)), r6);
}




BOOL ov01_021E9EEC(void) {
    TaskManager_GetFieldSystem();
    TaskManager_GetEnvironment(r5);
    PlayerAvatar_GetMapObject(*((u32*)(r4 + 0x40)));
    MapObject_SetVisible(1);
    *((u32*)(r5 + 4)) = 0;
    *((u8*)(r5 + 1)) = 0;
    PlaySE(SEQ_SE_DP_KAIDAN2);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 0, 0, 0x00007FFF);
    *((u32*)(r5 + 4)) = 1;
    // strb r0, [r5]
    IsPaletteFadeFinished((*((u8*)r5) + 1));
    Heap_Free(r5);
    ov01_021E95CC(*((u32*)(r4 + 0x24)), (r5 + 1));
}




BOOL ov01_021E9F78(void) {
    TaskManager_GetFieldSystem();
    TaskManager_GetEnvironment(r5);
    *((u32*)(r0 + 4)) = 0;
    *((u8*)(r0 + 1)) = 0;
    PlaySE(SEQ_SE_DP_KAIDAN2);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    NewFieldFadeEnvironment(r5, 0, 0x10, 0);
    *((u32*)(r4 + 4)) = 1;
    // strb r0, [r4]
    IsPaletteFadeFinished((*((u8*)r4) + 1));
    Heap_Free(r4);
    ov01_021E95CC(*((u32*)(r6 + 0x24)), (r4 + 1));
}




BOOL ov01_021E9FF8(void) {
    // str r0, [sp, #0x10]
    TaskManager_GetFieldSystem();
    // ldr r0, [sp, #0x10]
    TaskManager_GetEnvironment();
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021EA01E: ; jump table
    PlayerAvatar_GetMapObject(*((u32*)(r5 + 0x40)));
    // str r0, [sp, #0x14]
    PlayerAvatar_GetFacingDirection(*((u32*)(r5 + 0x40)));
    // ldr r0, [sp, #0x14]
    MapObject_SetVisible((r0 << 0x18), 1);
    // ldr r0, [sp, #0x14]
    MapObject_SetVisible(1, 0);
    // strb r0, [r4]
    *((u32*)(r4 + 4)) = 0;
    *((u8*)(r4 + 1)) = 0;
    Camera_GetPerspectiveAngle(*((u32*)(r5 + 0x24)));
    *((u16*)(r4 + 2)) = r0;
    Camera_AdjustPerspectiveAngle(0x0000FFA0, *((u32*)(r5 + 0x24)));
    // add r0, r7, r7
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021EA07A: ; jump table
    GF_AssertFail((*((u16*)(r0 + 6)) << 0x10));
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r3, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x10]
    NewFieldFadeEnvironment(0xb, 0, r6, 1);
    *((u32*)(r4 + 4)) = 1;
    PlayerAvatar_GetMapObject(*((u32*)(r5 + 0x40)));
    MapObject_SetVisible(0);
    MapObject_SetHeldMovement(r6, 0xd);
    // strb r0, [r4]
    PlayerAvatar_GetMapObject(*((u32*)(r5 + 0x40)));
    MapObject_IsMovementPaused();
    MapObject_ClearHeldMovementIfActive(r6);
    // strb r0, [r4]
    IsPaletteFadeFinished((*((u8*)r4) + 1));
    Camera_GetPerspectiveAngle(*((u32*)(r5 + 0x24)));
    Heap_Free(r4, *((u16*)(r4 + 2)));
    ov01_021E9610(*((u32*)(r5 + 0x24)), (r4 + 1));
}




BOOL ov01_021EA128(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021EA14E: ; jump table
    // strb r0, [r4]
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r2, [sp, #8]
    // str r0, [sp, #0xc]
    // strb r0, [r4]
    // strb r0, [r4]
}




void ov01_021EA1F4(void) {
}




void ov01_021EA220(void) {
    GF_AssertFail();
    Heap_Alloc(4, 0x14);
    *((u32*)(r0 + 0xc)) = r5;
    ov01_021EA3E0(*((u32*)(ov01_02206450 + (r6 << 2))), (r0 + 4));
    // str r0, [r4]
    *((u32*)(r4 + 8)) = 0;
    GF_RTC_TimeToSec(0);
    // add r1, r0, r1
    // asr r3, r1, #1
    *((u32*)(r4 + 8)) = 0;
    // add r2, #0x30
    *((u32*)(r4 + 0x10)) = 1;
    ov01_021EA398(r4, (0 + 1), *((u32*)(r4 + 4)));
}




void ov01_021EA284(void) {
    // str r0, [r4]
}




void ov01_021EA2A4(void) {
    // add r1, r0, r1
    // asr r0, r1, #1
    // bmi _021EA2CE
}




void ov01_021EA300(void) {
    // str r0, [sp, #4]
    // ldr r0, [sp, #4]
    // lsl r0, r4
    // tst r0, r1
    // ldrsh r0, [r5, r0]
    // str r0, [sp]
    // ldrsh r2, [r5, r2]
    // ldrsh r3, [r5, r3]
    // str r0, [sp]
    // ldr r1, [sp, #4]
    // ldr r1, [sp, #4]
    // ldr r1, [sp, #4]
    // ldr r1, [sp, #4]
}




void ov01_021EA398(void) {
    // add r0, r2, r0
}




void ov01_021EA3B0(void) {
}




void ov01_021EA3E0(void) {
    // str r1, [sp]
    Sys_AllocAndReadFile(4, r0, r0);
    // str r0, [sp, #0x14]
    // str r1, [sp, #8]
    // add r5, sp, #0x11c
    Ascii_GetDelim(r5, 0xd);
    // ldrsb r1, [r5, r4]
    // ldrsb r1, [r5, r6]
    // ldrsb r1, [r5, r7]
    Ascii_GetDelim(r5, 0xd);
    Ascii_GetDelim(r5, 0xd);
    Ascii_GetDelim(r5, 0xd);
    Ascii_GetDelim(r5, 0xd);
    Ascii_GetDelim(r5, 0xd);
    Ascii_GetDelim(r5, 0xd);
    Ascii_GetDelim(r5, 0xd);
    Ascii_GetDelim(r5, 0xd);
    Ascii_GetDelim(r5, 0xd);
    // ldr r1, [sp, #8]
    // str r1, [sp, #8]
    // ldrsb r1, [r5, r1]
    // ldrsb r1, [r5, r1]
    // ldrsb r1, [r5, r1]
    // ldr r0, [sp, #8]
    Heap_Alloc(4, (r0 * 0x30));
    // ldr r1, [sp]
    // str r0, [r1]
    MI_CpuFill8(0, r4);
    // str r1, [sp, #0x18]
    // ldr r1, [sp, #8]
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp, #0x18]
    // str r1, [sp, #0x10]
    // ldr r1, [sp]
    // ldr r1, [sp, #0x10]
    // add r4, r5, r1
    // add r1, sp, #0x11c
    Ascii_GetDelim(0, 0xd);
    // str r0, [sp, #4]
    // add r0, sp, #0x11c
    // add r1, sp, #0x1c
    Ascii_GetDelim(0x2c);
    // add r0, sp, #0x1c
    Ascii_StrToL();
    // ldr r1, [sp, #0x10]
    // str r0, [r5, r1]
    // add r6, #0xe
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #4]
    // ldr r1, [sp, #0xc]
    ov01_021EA578((r4 + 6), r4);
    // str r0, [sp, #4]
    // lsl r0, r7
    *((u8*)(r4 + 4)) = (1 | *((u8*)(r4 + 4)));
    *((u16*)(r5 + 6)) = 0;
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #4]
    // add r1, #0x26
    ov01_021EA668((0 + 2), r4);
    // add r1, #0x28
    ov01_021EA668(r4);
    // add r1, #0x2a
    ov01_021EA668(r4);
    // add r4, #0x2c
    ov01_021EA668(r4);
    // add r1, sp, #0x11c
    Ascii_GetDelim(0xd);
    // ldr r1, [sp, #0x10]
    // add r1, #0x30
    // str r1, [sp, #0x10]
    // ldr r1, [sp, #0x18]
    // ldr r1, [sp, #8]
    // str r2, [sp, #0x18]
    // ldr r1, [sp, #0x14]
    Heap_FreeExplicit(4, (r1 + 1));
    // ldr r0, [sp, #8]
}




void ov01_021EA564(void) {
}




void ov01_021EA578(void) {
    // str r1, [sp, #4]
    // add r1, sp, #0x11c
    Ascii_GetDelim(0xd);
    // str r0, [sp]
    // add r0, sp, #0x11c
    // add r1, sp, #0x1c
    Ascii_GetDelim(0x2c);
    // add r0, sp, #0x1c
    Ascii_StrToL();
    // add r5, sp, #8
    // add r1, sp, #0x1c
    Ascii_GetDelim(r4, 0x2c);
    // add r0, sp, #0x1c
    Ascii_StrToL();
    // strh r0, [r5]
    // add r1, sp, #8
    // ldr r0, [sp, #4]
    // add r5, sp, #0x10
    // strh r1, [r0]
    // add r1, sp, #0x1c
    Ascii_GetDelim(r4, (((*((u16*)(r1 + 2)) << 5) | *((u16*)r1)) | (*((u16*)(r1 + 4)) << 0xa)), 0x2c);
    // add r0, sp, #0x1c
    Ascii_StrToL();
    // stmia r5!, {r0}
    // ldr r0, [sp, #0x10]
    // strh r0, [r7]
    // ldr r0, [sp, #0x14]
    *((u16*)(r7 + 2)) = r0;
    // ldr r0, [sp, #0x18]
    *((u16*)(r7 + 4)) = r0;
    // ldrsh r1, [r7, r0]
    // strh r0, [r7]
    // ldrsh r1, [r7, r0]
    // strh r0, [r7]
    // ldrsh r2, [r7, r0]
    *((u16*)(r7 + 2)) = (2 << 0xb);
    // ldrsh r1, [r7, r0]
    *((u16*)(r7 + 2)) = 0xFFFFF000;
    // ldrsh r2, [r7, r0]
    *((u16*)(r7 + 4)) = (4 << 0xa);
    // ldrsh r1, [r7, r0]
    *((u16*)(r7 + 4)) = 0xFFFFF000;
    // ldr r0, [sp, #4]
    // strh r1, [r0]
    // ldr r0, [sp]
}




void ov01_021EA668(void) {
    // str r1, [sp, #4]
    // add r1, sp, #0x10c
    // add r1, #2
    // add r6, sp, #0x10c
    // add r7, sp, #0xc
    // str r0, [sp]
    // add r6, #2
    // add r5, sp, #8
    // add r7, #2
    // strh r0, [r5]
    // add r0, sp, #8
    // ldr r0, [sp, #4]
    // strh r1, [r0]
    // ldr r0, [sp]
}




void LoadAreaOrDungeonLightTxt(void) {
    GF_AssertFail();
    // add r1, sp, #0
    ov01_021EA3E0(*((u32*)(ov01_02206450 + (r4 << 2))), (r4 << 2));
    GF_RTC_TimeToSec();
    // add r1, r0, r1
    // asr r3, r1, #1
    // ldr r2, [sp]
    // add r2, #0x30
    // ldr r1, [sp]
    // add r0, r1, r0
    ov01_021EA300((0x30 * 0), r6);
    // add r0, sp, #0
    ov01_021EA564();
}



