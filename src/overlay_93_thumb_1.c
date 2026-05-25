/* Decompiled from asm/overlay_93_thumb_1.s */
#include "global.h"

void ov93_0225C540(void) {
}




void ov93_0225C574(void) {
    OverlayManager_GetData();
    OverlayManager_GetArgs(r6);
    ov93_0225C730(r5);
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0225C5AA: ; jump table
    // add r0, #0x31
    // strb r1, [r0]
    OverlayManager_New(ov93_02262A08, r5, 0x75);
    *((u32*)(r5 + 0x28)) = r0;
    // str r0, [r4]
    OverlayManager_Run(*((u32*)(r5 + 0x28)));
    OverlayManager_Delete(*((u32*)(r5 + 0x28)));
    *((u32*)(r5 + 0x28)) = 0;
    // str r0, [r4]
    // add r0, #0x31
    // strb r1, [r0]
    OverlayManager_New(_022629F8, r5, 0x75);
    *((u32*)(r5 + 0x28)) = r0;
    // str r0, [r4]
    OverlayManager_Run(*((u32*)(r5 + 0x28)));
    OverlayManager_Delete(*((u32*)(r5 + 0x28)));
    *((u32*)(r5 + 0x28)) = 0;
    // str r0, [r4]
    // add r6, #0x38
    ov00_021E6A4C(*((u8*)r6));
    // add r0, #0x31
    // strb r1, [r0]
    OverlayManager_New(ov93_02262A08, r5, 0x75);
    *((u32*)(r5 + 0x28)) = r0;
    // str r0, [r4]
    OverlayManager_Run(*((u32*)(r5 + 0x28)));
    OverlayManager_Delete(*((u32*)(r5 + 0x28)));
    *((u32*)(r5 + 0x28)) = 0;
    // str r1, [r4]
    // str r0, [r4]
    sub_020398D4(0, 1);
    sub_02037AC0(0xde);
    // str r0, [r4]
    sub_02037B38(0xde);
    sub_02037454();
    sub_020347A0();
    // str r0, [r4]
}




u32 ov93_0225C6C0(void) {
}




void ov93_0225C6D8(void) {
    // add r0, r6, r5
    // add r0, #0x2c
    // strb r4, [r0]
    // add r1, r6, r4
    // add r1, #0x2c
    // strb r0, [r1]
    // add r0, #0x30
    // strb r5, [r0]
    // add r0, #0x38
    // add r0, #0x3c
    // strb r1, [r0]
    // str r7, [sp]
    // add r1, #0x39
    // add r7, #0x38
}




void ov93_0225C730(void) {
    // add r1, #0x3d
    // add r0, #0x3d
    // strb r1, [r0]
    // add r0, #0x3d
}




void ov93_0225C768(void) {
    Main_SetVBlankIntrCB(0, 0);
    GfGfx_DisableEngineAPlanes();
    GfGfx_DisableEngineBPlanes();
    // and r1, r2
    // str r1, [r0]
    // and r2, r3
    // str r2, [r1]
    // and r3, r2
    // str r3, [r0]
    // add r0, #0x50
    // and r2, r3
    // str r2, [r1]
    // str r3, [sp]
    G2x_SetBlendAlpha_((1 << 0x1a), 1, 0x3f, 0x10);
    // str r0, [sp]
    G2x_SetBlendAlpha_(0x04001050, 8, 0x1f, 0xd);
    OverlayManager_CreateAndGetData(r4, 0x00003850, 0x75);
    MI_CpuFill8(0, 0x00003850);
    // add r0, #0xa8
    HeapExp_FndInitAllocator(r5, 0x75, 0x20);
    ov93_0225CF14(0x75);
    // add r1, #0x98
    // str r0, [r1]
    OverlayManager_GetArgs(r4, r5);
    // str r0, [r5]
    ov93_022626FC(r5);
    PaletteData_Init(0x75);
    // add r1, #0x8c
    // str r0, [r1]
    // add r0, #0x8c
    PaletteData_SetAutoTransparent(*((u32*)r5), 1);
    // add r0, #0x8c
    PaletteData_AllocBuffers(*((u32*)r5), 0, (2 << 8), 0x75);
    // add r0, #0x8c
    PaletteData_AllocBuffers(*((u32*)r5), 1, (1 << 9), 0x75);
    // add r0, #0x8c
    PaletteData_AllocBuffers(*((u32*)r5), 2, (7 << 6), 0x75);
    // add r0, #0x8c
    PaletteData_AllocBuffers(*((u32*)r5), 3, (2 << 8), 0x75);
    BgConfig_Alloc(0x75);
    *((u32*)(r5 + 0x2c)) = r0;
    GF_CreateVramTransferManager(0x40, 0x75);
    SetKeyRepeatTimers(4, 8);
    ov93_0225D1D8(*((u32*)(r5 + 0x2c)));
    sub_020210BC();
    sub_02021148(4);
    ov93_0225CFC0(r5);
    SpriteSystem_Alloc(0x75);
    *((u32*)(r5 + 0x24)) = r0;
    SpriteSystem_Init(ov93_02262AA8, ov93_02262A7C, 0x20);
    G2dRenderer_SetObjCharTransferReservedRegion(1, 0x00100010);
    G2dRenderer_SetPlttTransferReservedRegion(1);
    SpriteManager_New(*((u32*)(r5 + 0x24)));
    *((u32*)(r5 + 0x28)) = r0;
    SpriteSystem_InitSprites(*((u32*)(r5 + 0x24)), *((u32*)(r5 + 0x28)), 0xe0);
    SpriteSystem_InitManagerWithCapacities(*((u32*)(r5 + 0x24)), *((u32*)(r5 + 0x28)), ov93_02262A90);
    SpriteSystem_GetRenderer(*((u32*)(r5 + 0x24)));
    G2dRenderer_SetSubSurfaceCoords(0, (0x16 << 0x10));
    ov93_0225D674(r5);
    NewMsgDataFromNarc(0, 0x1b, 0xc, 0x75);
    // add r1, #0x80
    // str r0, [r1]
    MessageFormat_New(0x75, r5);
    // add r1, #0x84
    // str r0, [r1]
    String_New((5 << 6), 0x75);
    // add r1, #0x88
    // str r0, [r1]
    FontSystem_NewInit(0x13, 0x75);
    // add r1, #0x90
    // str r0, [r1]
    // add r1, r5, r1
    ov93_02261310(r5, 0x00001468);
    NARC_New(0xc9, 0x75);
    ov93_0225DB2C(r5, r0);
    ov93_0225DBC8(r5, r4);
    ov93_0225D380(r5);
    ov93_0225D78C(r5, r4);
    ov93_0225DA40(r5, r4);
    ov93_0225DD2C(r5, r4);
    NARC_Delete(r4);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0x8c
    PaletteData_LoadNarc(*((u32*)r5), 0x10, 7, 0x75);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0x8c
    PaletteData_LoadNarc(*((u32*)r5), 0x10, 7, 0x75);
    ov93_0225D4EC(r5);
    ov93_0225D5AC(r5, 0);
    ov93_0225D468(r5);
    sub_0203A880();
    ov93_0225E7B0(r5);
    // add r1, #0xd4
    // str r0, [r1]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 0x1b, 0x1b, 0);
    SysTask_CreateOnMainQueue(ov93_0225D07C, r5, 0x0000EA60);
    // add r1, #0x94
    // str r0, [r1]
    *((u8*)(gSystem + 9)) = 1;
    GfGfx_SwapDisplay(gSystem, 1);
    GfGfx_BothDispOn();
    GfGfx_EngineATogglePlanes(0x10, 1);
    GfGfx_EngineBTogglePlanes(0x10, 1);
    TextFlags_SetAutoScrollParam(1);
    TextFlags_SetCanABSpeedUpPrint(0);
    TextFlags_SetCanTouchSpeedUpPrint(0);
    SpriteManager_GetSpriteList(*((u32*)(r5 + 0x28)));
    ov90_02258BD4(0x75);
    *((u32*)(r5 + 0x1c)) = r0;
    ov90_02258C74();
    // add r0, #0x8c
    PaletteData_LoadPaletteSlotFromHardware(*((u32*)r5), 2, ((r0 << 0x14) >> 0x10), 0x60);
    Main_SetVBlankIntrCB(ov93_0225CEA0, r5);
    // add r0, #0x3c
    ov00_021E69A8(0x75);
}




void ov93_0225CA8C(void) {
    OverlayManager_GetData();
    // add r2, #0x3d
    // add r0, #0x3e
    IsPaletteFadeFinished(*((u8*)*((u32*)r0)), *((u32*)r0), *((u8*)*((u32*)r0)));
    sub_0200FB70();
    sub_0200FC20(0);
    // and r0, r1
    // str r0, [r2]
    // add r0, #0x3e
    // add r1, #0x3e
    // strb r0, [r1]
    ov90_02258B98(*((u32*)r4), *((u32*)r4), (1 << 0x1a));
    // add r2, r2, r2
    // add r2, pc
    // asr r2, r2, #0x10
    // add pc, r2
    // _0225CB08: ; jump table
    IsPaletteFadeFinished(0, (*((u16*)(*((u32*)r5) + 6)) << 0x10));
    // str r0, [r5]
    sub_02037AC0(0xd3);
    // str r0, [r5]
    sub_02037B38(0xd3);
    // str r0, [r5]
    ov93_022627A4((*((u32*)r5) + 1));
    // str r0, [r5]
    // add r1, #0x30
    ov93_0225E10C((*((u32*)r5) + 1), *((u8*)r1), *((u32*)(r4 + 8)));
    // str r0, [r5]
    ov93_02262250((*((u32*)r5) + 1), *((u32*)(r4 + (0xbf << 6))));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 0x1a, 0x1a, 0);
    // str r0, [r5]
    ov93_0225E764(r4);
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0225CBB2: ; jump table
    // and r2, r1
    // str r1, [r0]
    // add r1, #0x42
    // strh r2, [r1]
    // add r1, #0x46
    // strh r2, [r1]
    // add r3, #0x48
    // and r2, r1
    // strh r1, [r3]
    // add r0, #0x4a
    // strh r1, [r0]
    ov93_02262310(r4, (0x20 | ((*((u16*)(1 << 0x1a)) & ~(0x3f)) | 0x1f)), ((*((u16*)(1 << 0x1a)) & ~(0x3f)) | 0x1f), (1 << 0x1a));
    *((u32*)(r4 + 0x20)) = 2;
    // add r1, r4, r1
    ov93_02262374(r4, 0x0000174C);
    // str r1, [r4, r0]
    *((u32*)(r4 + 0x20)) = 0;
    ov90_02258C8C(*((u32*)(r4 + 0x1c)), 1);
    *((u32*)(r4 + 0x20)) = 4;
    ov90_02258CE0(*((u32*)(r4 + 0x1c)));
    // str r1, [r4, r0]
    // strb r1, [r4, r0]
    *((u32*)(r4 + 0x20)) = 5;
    ov93_0225D4B8(r4, 0);
    ov93_0225D5AC(r4, 1);
    ov90_02258CB0(*((u32*)(r4 + 0x1c)));
    *((u32*)(r4 + 0x20)) = 7;
    ov90_02258CE0(*((u32*)(r4 + 0x1c)));
    *((u32*)(r4 + 0x20)) = 8;
    ov93_0225E4B0(r4);
    ov93_0225E370(r4);
    ov93_0225E300(r4);
    // str r1, [r4, r0]
    // str r2, [r4, r0]
    IsPaletteFadeFinished((0x00002FB8 - 4), 0x00002FB8, (*((u32*)(r4 + (0x00002FB8 - 4))) + 1));
    // add r0, #0x9c
    ov93_0225E7AC(*((u32*)r4));
    // str r1, [r4, r0]
}




void ov93_0225CD10(void) {
    OverlayManager_GetData();
    *((u32*)(*((u32*)r0) + 0x24)) = *((u32*)(r0 + 0x00002FD0));
    ov90_02258C38(*((u32*)(r0 + 0x1c)), *((u32*)(r0 + 0x00002FD0)));
    ov93_022602E4(r4);
    ov93_02260608(r4);
    Main_SetVBlankIntrCB(0, 0);
    ov93_0225D6E0(r4);
    ov93_0225D9E8(r4);
    ov93_0225DAF8(r4);
    ov93_0225DBC4(r4);
    ov93_0225DD28(r4);
    ov93_0225DED0(r4);
    // add r1, #0xd4
    ov93_0225E860(r4, *((u32*)r4));
    // add r5, #0x30
    RemoveWindow(r4);
    // add r5, #0x10
    GfGfx_EngineATogglePlanes(1, 0);
    GfGfx_EngineATogglePlanes(2, 0);
    FreeBgTilemapBuffer(*((u32*)(r4 + 0x2c)), 1);
    FreeBgTilemapBuffer(*((u32*)(r4 + 0x2c)), 2);
    FreeBgTilemapBuffer(*((u32*)(r4 + 0x2c)), 3);
    FreeBgTilemapBuffer(*((u32*)(r4 + 0x2c)), 4);
    FreeBgTilemapBuffer(*((u32*)(r4 + 0x2c)), 5);
    FreeBgTilemapBuffer(*((u32*)(r4 + 0x2c)), 6);
    FreeBgTilemapBuffer(*((u32*)(r4 + 0x2c)), 7);
    // add r0, #0x90
    sub_020135AC(*((u32*)r4));
    SpriteSystem_FreeResourcesAndManager(*((u32*)(r4 + 0x24)), *((u32*)(r4 + 0x28)));
    SpriteSystem_Free(*((u32*)(r4 + 0x24)));
    GF_DestroyVramTransferManager();
    // add r0, #0x8c
    PaletteData_FreeBuffers(*((u32*)r4), 0);
    // add r0, #0x8c
    PaletteData_FreeBuffers(*((u32*)r4), 1);
    // add r0, #0x8c
    PaletteData_FreeBuffers(*((u32*)r4), 2);
    // add r0, #0x8c
    PaletteData_FreeBuffers(*((u32*)r4), 3);
    // add r0, #0x8c
    PaletteData_Free(*((u32*)r4));
    // add r0, #0x88
    String_Delete(*((u32*)r4));
    // add r0, #0x84
    MessageFormat_Delete(*((u32*)r4));
    // add r0, #0x80
    DestroyMsgData(*((u32*)r4));
    Heap_Free(*((u32*)(r4 + 0x2c)));
    ov93_0225D064(r4);
    // add r0, #0x94
    SysTask_Destroy(*((u32*)r4));
    // and r1, r0
    // str r1, [r2]
    // add r4, #0x98
    // and r0, r1
    // str r0, [r2]
    ov93_0225CFB8(*((u32*)r4), *((u32*)0x04001000), 0x04001000);
    sub_02021238();
    OverlayManager_FreeData(r7);
    TextFlags_SetCanABSpeedUpPrint(0);
    TextFlags_SetAutoScrollParam(0);
    TextFlags_SetCanTouchSpeedUpPrint(0);
    sub_0203A914();
}




void ov93_0225CEA0(void) {
    // add r1, #0xd4
    ov93_0225EA50(*((u32*)r0));
    GF_RunVramTransferTasks();
    SpriteSystem_TransferOam();
    // add r0, #0x8c
    PaletteData_PushTransparentBuffers(*((u32*)r4));
    ToggleBgLayer(7, 1);
    // strb r1, [r4, r0]
    ToggleBgLayer(7, 0);
    // strb r1, [r4, r0]
    DoScheduledBgGpuUpdates(*((u32*)(r4 + 0x2c)), 0);
    // str r0, [r3, r1]
}




void ov93_0225CF14(void) {
}




void ov93_0225CF34(void) {
    GfGfx_EngineATogglePlanes(1, 1);
    // strh r1, [r0]
    // add r0, #0x58
    // and r2, r1
    // strh r2, [r0]
    // and r3, r2
    // strh r2, [r0]
    // and r3, r2
    // strh r3, [r0]
    // sub r2, #0x1c
    // and r3, r1
    // strh r1, [r0]
    // and r1, r2
    // strh r1, [r0]
    G3X_SetFog(0, 0, 0, 0);
    // str r0, [sp]
    G3X_SetClearColor(0, 0, 0x00007FFF, 0x3f);
    // str r1, [r0]
}




void ov93_0225CFB8(void) {
}




void ov93_0225CFC0(void) {
    // ldmia r3!, {r0, r1}
    // add r2, sp, #0xc
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    Camera_New(0x75, ov93_02262A38);
    // add r1, #0x9c
    // str r0, [r1]
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, #0x9c
    // str r0, [sp, #8]
    // add r0, sp, #0xc
    Camera_Init_FromTargetDistanceAndAngle(*((u32*)r4), (0x7b << 0xc), ov93_02262A18, 0x00000FA4);
    // add r2, #0x9c
    Camera_SetPerspectiveClippingPlane((1 << 0xc), (0xe1 << 0xe), *((u32*)r4));
    // add r0, #0x9c
    Camera_SetStaticPtr(*((u32*)r4));
    Camera_New(0x75);
    // add r1, #0xa0
    // str r0, [r1]
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, #0xa0
    // str r0, [sp, #8]
    // add r0, sp, #0xc
    Camera_Init_FromTargetDistanceAndAngle(*((u32*)r4), (5 << 0x10), ov93_02262A18, 0x00000FA4);
    // add r4, #0xa0
    Camera_SetPerspectiveClippingPlane((1 << 0xc), (0xe1 << 0xe), *((u32*)r4));
}




void ov93_0225D064(void) {
}




void ov93_0225D07C(void) {
    // str r0, [sp, #0x34]
    // str r0, [sp, #0x38]
    // str r0, [sp, #0x3c]
    // str r0, [sp, #0x28]
    // str r0, [sp, #0x2c]
    // str r0, [sp, #0x30]
    // add r0, sp, #4
    MTX_Identity33_(0);
    // add r1, r4, r1
    ov93_02262034(r4, 0x000015A8);
    // add r1, r4, r1
    ov93_02261354(r4, 0x00001468);
    // add r1, r4, r1
    ov93_02261D1C(r4, 0x00001560);
    ov93_0225FFF8(r4);
    // add r2, r4, r2
    ov93_0225FE80(r4, *((u32*)(r4 + 0x2c)), 0x00001428);
    ov93_02260660(r4);
    ov93_0225E03C(r4);
    ov93_02260A30(r4);
    Thunk_G3X_Reset();
    // add r0, #0x9c
    Camera_SetStaticPtr(*((u32*)r4));
    // add r1, #0x9c
    Camera_ApplyPerspectiveType(1, *((u32*)r4));
    Camera_PushLookAtToNNSGlb();
    NNS_G3dGlbLightVector(0, 0, 0xFFFFF000, 0);
    NNS_G3dGlbLightColor(0, 0x0000739C);
    NNS_G3dGlbMaterialColorDiffAmb(0x00007FFF, 0x00007FFF, 0);
    NNS_G3dGlbMaterialColorSpecEmi(0x00007FFF, 0x00007FFF, 0);
    // add r0, sp, #0x28
    NNS_G3dGlbSetBaseTrans();
    // add r0, sp, #4
    MI_Copy36B(NNS_G3dGlb);
    // add r0, sp, #0x34
    *((u32*)(NNS_G3dGlb + 0x7c)) = (*((u32*)(NNS_G3dGlb + 0x7c)) & ~(0xa4));
    NNS_G3dGlbSetBaseScale(0xa4, NNS_G3dGlb, (*((u32*)(NNS_G3dGlb + 0x7c)) & ~(0xa4)));
    NNS_G3dGlbFlushP();
    // add r1, #0xd4
    ov93_0225E898(r4, *((u32*)r4));
    NNS_G3dGeBufferOP_N(0x11, 0, 0);
    // add r0, r4, r0
    sub_020181EC(0x000013B0);
    // add r0, #0xe8
    sub_020181EC(r4);
    ov93_0225E0A4(r4);
    // add r1, sp, #0
    // str r2, [sp]
    NNS_G3dGeBufferOP_N(0x12, 1);
    Thunk_G3X_Reset();
    sub_0201543C();
    Thunk_G3X_Reset();
    sub_02015460();
    SpriteSystem_DrawSprites(*((u32*)(r4 + 0x28)));
    SpriteSystem_UpdateTransfer();
    RequestSwap3DBuffers(0, 0);
    sub_020399FC(0x75, *((u32*)(r4 + 0x2c)));
}




void ov93_0225D1D8(void) {
    GfGfx_DisableEngineAPlanes();
    // add r3, sp, #0x10
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // add r0, sp, #0x10
    GfGfx_SetBanks((5 - 1));
    MIi_CpuClear32(0, (6 << 0x18), (2 << 0x12));
    MIi_CpuClear32(0, (0x62 << 0x14), (2 << 0x10));
    MIi_CpuClear32(0, (0x19 << 0x16), (1 << 0x12));
    MIi_CpuClear32(0, (0x66 << 0x14), (2 << 0x10));
    // add r3, sp, #0
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    SetBothScreensModesAndDisable(r3, r3);
    // add r3, sp, #0x38
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // add r2, sp, #0x38
    InitBgFromTemplate(r5, 1, (0xa - 1), 0);
    BgClearTilemapBufferAndCommit(r5, 1);
    BgSetPosTextAndCommit(r5, 1, 0, 0);
    BgSetPosTextAndCommit(r5, 1, 3, 0);
    // add r2, sp, #0x54
    InitBgFromTemplate(r5, 2, 0);
    BgClearTilemapBufferAndCommit(r5, 2);
    BgSetPosTextAndCommit(r5, 2, 0, 0);
    BgSetPosTextAndCommit(r5, 2, 3, 0);
    // add r2, sp, #0x70
    InitBgFromTemplate(r5, 3, 0);
    BgClearTilemapBufferAndCommit(r5, 3);
    BgSetPosTextAndCommit(r5, 3, 0, 0);
    BgSetPosTextAndCommit(r5, 3, 3, 0);
    // strh r0, [r1]
    GfGfx_EngineATogglePlanes(1, 1, (*((u16*)0x04000008) & ~(3)));
    InitBgFromTemplate(r5, (((0 + 4) << 0x18) >> 0x18), ov93_02262B94, 0);
    InitBgFromTemplate(r5, (((r4 + 4) << 0x18) >> 0x18), r6, 1);
    BG_ClearCharDataRange((((r4 + 4) << 0x18) >> 0x18), 0x20, 0, 0x75);
    BgClearTilemapBufferAndCommit(r5, (((r4 + 4) << 0x18) >> 0x18));
    BgSetPosTextAndCommit(r5, (((r4 + 4) << 0x18) >> 0x18), 0, 0);
    BgSetPosTextAndCommit(r5, (((r4 + 4) << 0x18) >> 0x18), 3, 0);
    // add r6, #0x1c
    ToggleBgLayer(7, 0);
}




void ov93_0225D380(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, #0x30
    AddWindowParameterized(*((u32*)(r0 + 0x2c)), r0, 1, 0xb);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, #0x40
    AddWindowParameterized(*((u32*)(r4 + 0x2c)), r4, 4, 0x12);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, #0x50
    AddWindowParameterized(*((u32*)(r4 + 0x2c)), r4, 4, 0x15);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, #0x60
    AddWindowParameterized(*((u32*)(r4 + 0x2c)), r4, 4, 1);
    // add r0, #0x40
    FillWindowPixelBuffer(r4, 0xf);
    // add r0, #0x50
    FillWindowPixelBuffer(r4, 0xf);
    // add r0, #0x60
    FillWindowPixelBuffer(r4, 0xf);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r2, [sp, #8]
    // str r0, [sp, #0xc]
    // add r1, #0x70
    // str r0, [sp, #0x10]
    AddWindowParameterized(*((u32*)(r4 + 0x2c)), r4, 4, 2);
    // add r4, #0x70
    FillWindowPixelBuffer(r4, 0xf);
}




void ov93_0225D468(void) {
    // add r0, #0x70
    DrawFrameAndWindow1(1, (0x35 << 4), 6);
    // add r0, #0x80
    NewString_ReadMsgData(*((u32*)r5), 3);
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0x70
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r5, 0, r0, 0);
    String_Delete(r4);
    // add r5, #0x70
    ScheduleWindowCopyToVram(r5);
}




void ov93_0225D4B8(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(*((u32*)(r0 + 0x2c)), 4, 0x000003FF, 1);
    ScheduleBgTilemapBufferTransfer(*((u32*)(r4 + 0x2c)), 4);
}




void ov93_0225D4EC(void) {
    sub_0203769C();
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x18]
    // add r0, #0x30
    // str r0, [sp, #0x18]
    // ldr r2, [sp, #0x10]
    // add r1, r0, r4
    // add r1, #0x2c
    ov90_022588CC(*((u32*)r5), *((u8*)r1));
    PlayerProfile_GetPlayerName_NewString(0x75);
    // add r1, r1, r4
    // add r1, #0x2c
    ov93_0225E3C4(r5, *((u8*)*((u32*)r5)));
    // str r0, [sp, #0x14]
    // add r1, r0, r4
    // add r1, #0x2c
    ov90_022588A4(*((u32*)r5), *((u8*)r1));
    FontID_String_GetWidth(0, r6, 0);
    // add r1, r0, r1
    // asr r2, r1, #1
    // sub r3, r1, r2
    // tst r0, r1
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r7, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, #0x30
    // add r1, r0, r1
    // ldr r0, [sp, #0x14]
    // ldr r0, [sp, #0x18]
    // add r0, r0, r1
    AddTextPrinterParameterizedWithColor(*((u8*)(ov93_02262A68 + (*((u8*)*((u32*)r5)) << 2))), 0, r6, (r3 - 1));
    Heap_Free(r6);
    // add r0, #0x30
}




void ov93_0225D5AC(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(*((u32*)(r0 + 0x2c)), 4, 0x000003FF, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // str r3, [sp, #0xc]
    FillBgTilemapRect(*((u32*)(r4 + 0x2c)), 4, 0x000003FF, 0x11);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(*((u32*)(r4 + 0x2c)), 4, 0x000003FF, 0x14);
    // add r0, #0x30
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(*((u32*)(r4 + 0x2c)), 4, 0x000003FF, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(*((u32*)(r4 + 0x2c)), 4, 0x000003FF, 0x14);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // str r3, [sp, #0xc]
    FillBgTilemapRect(*((u32*)(r4 + 0x2c)), 4, 0x000003FF, 0x11);
    ScheduleBgTilemapBufferTransfer(*((u32*)(r4 + 0x2c)), 4);
}




void ov93_0225D674(void) {
    sub_02014DA0();
    Heap_Alloc(0x75, (0x12 << 0xa));
    // str r0, [sp]
    // str r0, [sp, #4]
    sub_02014DB4(ov93_0225D744, ov93_0225D768, r0, (0x12 << 0xa));
    // add r1, #0xa4
    // str r0, [r1]
    // add r0, #0xa4
    sub_02015524(*((u32*)r4), r4);
    Camera_SetPerspectiveClippingPlane((1 << 0xc), (0xe1 << 0xe), r0);
    sub_02015264(0xd5, 0, 0x75);
    // add r4, #0xa4
    sub_0201526C(*((u32*)r4), r0, 0xa, 1);
}




void ov93_0225D6E0(void) {
}




void ov93_0225D700(void) {
    // add r0, #0xa4
    // add r0, #0xa4
    // add r0, #0xa4
}




void ov93_0225D744(void) {
    // blx r3
    GF_AssertFail(0, *((u32*)NNS_GfdDefaultFuncAllocTexVram));
    sub_02015354(r4);
}




void ov93_0225D768(void) {
    // blx r3
    GF_AssertFail(1, *((u32*)NNS_GfdDefaultFuncAllocPlttVram));
    sub_02015394(r4);
}




void ov93_0225D78C(void) {
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r1, [sp, #0x2c]
    // str r0, [sp, #0x14]
    // add r0, #0x8c
    SpriteSystem_LoadPaletteBufferFromOpenNarc(*((u32*)r0), 2, *((u32*)(r0 + 0x24)), *((u32*)(r0 + 0x28)));
    // add r0, #0x80
    NewString_ReadMsgData(*((u32*)r5), 2);
    FontID_String_GetWidth(0, r0, 0);
    // sub r0, r1, r0
    // str r6, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // str r1, [sp, #0x10]
    // add r1, #0x24
    // str r1, [sp, #0x14]
    // str r1, [sp, #0x18]
    // str r0, [sp, #0x1c]
    // str r0, [sp, #0x20]
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x28]
    // add r2, #0x90
    // add r3, r5, r3
    ov93_02261EB8(*((u32*)(r5 + 0x2c)), *((u32*)(r5 + 0x28)), *((u32*)r5), 0x0000169C);
    String_Delete(r6);
    // add r0, #0x80
    NewString_ReadMsgData(*((u32*)r5), 0);
    // str r0, [sp, #0x30]
    // add r0, #0x80
    NewString_ReadMsgData(*((u32*)r5), 1);
    // str r0, [sp, #0x38]
    // str r0, [sp, #0x34]
    // add r7, r5, r0
    // add r0, #0x14
    // add r6, r5, r0
    // ldr r0, [sp, #0x30]
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r2, #0x90
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r4, [sp, #0x14]
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x1c]
    // str r0, [sp, #0x20]
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x28]
    ov93_02261EB8(*((u32*)(r5 + 0x2c)), *((u32*)(r5 + 0x28)), *((u32*)r5), r7);
    // ldr r0, [sp, #0x38]
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r2, #0x90
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r4, [sp, #0x14]
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x1c]
    // str r0, [sp, #0x20]
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x28]
    ov93_02261EB8(*((u32*)(r5 + 0x2c)), *((u32*)(r5 + 0x28)), *((u32*)r5), r6);
    // ldr r0, [sp, #0x34]
    // add r7, #0x28
    // add r6, #0x28
    // str r0, [sp, #0x34]
    // ldr r0, [sp, #0x30]
    String_Delete((r0 + 1));
    // ldr r0, [sp, #0x38]
    String_Delete();
    // add r0, r5, r0
    ov93_02261FC8(0x000015A8);
    ov93_02262250(r5);
    // ldr r0, [sp, #0x2c]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // add r0, #0x8c
    SpriteSystem_LoadPaletteBufferFromOpenNarc(*((u32*)r5), 2, *((u32*)(r5 + 0x24)), *((u32*)(r5 + 0x28)));
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x2c]
    // str r0, [sp, #8]
    SpriteSystem_LoadCharResObjFromOpenNarc(*((u32*)(r5 + 0x24)), *((u32*)(r5 + 0x28)), 0x18);
    // str r0, [sp]
    // ldr r2, [sp, #0x2c]
    // str r0, [sp, #4]
    SpriteSystem_LoadCellResObjFromOpenNarc(*((u32*)(r5 + 0x24)), *((u32*)(r5 + 0x28)), 0x1a);
    // str r0, [sp]
    // ldr r2, [sp, #0x2c]
    // str r0, [sp, #4]
    SpriteSystem_LoadAnimResObjFromOpenNarc(*((u32*)(r5 + 0x24)), *((u32*)(r5 + 0x28)), 0x19);
    ov93_02262230(r5);
    // str r0, [r5, r1]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // add r0, #0x8c
    SpriteSystem_LoadPaletteBuffer(*((u32*)r5), 2, *((u32*)(r5 + 0x24)), *((u32*)(r5 + 0x28)));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    SpriteSystem_LoadCharResObj(*((u32*)(r5 + 0x24)), *((u32*)(r5 + 0x28)), 0xc8, 0x15);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadCellResObj(*((u32*)(r5 + 0x24)), *((u32*)(r5 + 0x28)), 0xc8, 0x16);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadAnimResObj(*((u32*)(r5 + 0x24)), *((u32*)(r5 + 0x28)), 0xc8, 0x17);
    ov93_02262344(r5);
    // str r0, [r5, r1]
}




void ov93_0225D9E8(void) {
    // add r4, r7, r0
    // add r0, #0x14
    // add r5, r7, r0
    ov93_02261FB0(r4);
    ov93_02261FB0(r5);
    // add r4, #0x28
    // add r5, #0x28
    // add r0, r7, r0
    ov93_02261FB0(0x0000169C);
    ov93_02262310(r7);
    ov93_02262338(r7, *((u32*)(r7 + 0x000015A8)));
    ov93_02262368(r7, *((u32*)(r7 + 0x0000174C)));
}




void ov93_0225DA40(void) {
    // str r4, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // add r0, #0x8c
    SpriteSystem_LoadPaletteBufferFromOpenNarc(*((u32*)r0), 3, *((u32*)(r0 + 0x24)), *((u32*)(r0 + 0x28)));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    SpriteSystem_LoadCharResObjFromOpenNarc(*((u32*)(r5 + 0x24)), *((u32*)(r5 + 0x28)), r4, 0x14);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadCellResObjFromOpenNarc(*((u32*)(r5 + 0x24)), *((u32*)(r5 + 0x28)), r4, 0x16);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadAnimResObjFromOpenNarc(*((u32*)(r5 + 0x24)), *((u32*)(r5 + 0x28)), r4, 0x15);
    ov93_022609E0(r5);
    // add r1, r5, r1
    ov93_022610B0(r5, 0x00001458);
    // add r1, r5, r1
    ov93_02261164(r5, 0x00001468);
    // add r1, r5, r1
    ov93_02261BBC(r5, 0x00001560);
    ov93_02260CF8(r5);
    ov93_02260E1C(r5);
}




void ov93_0225DAF8(void) {
    ov93_02260A14();
    // add r1, r4, r1
    ov93_0226114C(r4, 0x00001458);
    // add r1, r4, r1
    ov93_022612E0(r4, 0x00001468);
    // add r1, r4, r1
    ov93_02261C3C(r4, 0x00001560);
}




void ov93_0225DB2C(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0x8c
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r1, [sp]
    // add r5, #0x8c
    // str r0, [sp, #4]
}




void ov93_0225DBC4(void) {
    // bx lr
    // TODO: decompile
}




void ov93_0225DBC8(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0x8c
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, #0x8c
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, #0x30
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, #0x8c
    // str r3, [sp]
    // str r1, [sp, #4]
    // add r5, #0x8c
}




void ov93_0225DD28(void) {
    // bx lr
    // TODO: decompile
}




void ov93_0225DD2C(void) {
    // str r0, [sp, #8]
    // str r0, [sp, #0x10]
    // add r0, #0xd8
    // str r1, [sp, #0xc]
    // str r0, [sp, #0x10]
    sub_0203769C();
    // ldr r0, [sp, #8]
    ov93_0225E45C(r0);
    // ldr r0, [sp, #0x10]
    // ldr r1, [sp, #0xc]
    sub_02018030(0x14, *((u32*)(ov93_02262AF0 + (r0 * 0x14))), 0x75);
    // ldr r0, [sp, #0x10]
    // ldr r1, [sp, #0x10]
    // add r0, #0x10
    sub_020181B0();
    // ldr r0, [sp, #0x10]
    // add r0, #0x10
    sub_020182A8(r7, 0xFFFE7000, r7);
    // ldr r0, [sp, #0x10]
    // add r0, #0x10
    sub_020182C4((1 << 0xc), (1 << 0xc), (1 << 0xc));
    // ldr r0, [sp, #0x10]
    // add r0, #0x10
    sub_020182A0(1);
    // ldr r0, [sp, #0x10]
    // ldr r1, [sp, #0xc]
    // add r0, #0x88
    sub_02018030(*((u32*)(ov93_02262AF4 + r4)), 0x75);
    // ldr r0, [sp, #0x10]
    // ldr r1, [sp, #0xc]
    // add r0, #0x98
    sub_02018030(*((u32*)(ov93_02262AF8 + r4)), 0x75);
    // ldr r0, [sp, #0x10]
    // ldr r1, [sp, #0xc]
    // add r0, #0xa8
    sub_02018030(*((u32*)(ov93_02262AFC + r4)), 0x75);
    // ldr r0, [sp, #0x10]
    // ldr r1, [sp, #0xc]
    // add r0, #0xb8
    sub_02018030(*((u32*)(ov93_02262B00 + r4)), 0x75);
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x10]
    // add r0, r0, r1
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #8]
    // str r0, [sp, #0x24]
    // add r0, #0xa8
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #0x10]
    // str r0, [sp, #0x20]
    // add r0, #0x88
    // str r0, [sp, #0x20]
    // ldr r4, [sp, #0x20]
    // ldr r5, [sp, #0x14]
    // ldr r6, [sp, #0x10]
    // str r0, [sp, #0x18]
    // str r0, [sp]
    // ldr r0, [sp, #0x24]
    // ldr r3, [sp, #0x18]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0xc]
    // add r3, #0x23
    sub_020180BC(r5, r4);
    // ldr r3, [sp, #0x24]
    sub_020180E8(r5, r4, *((u32*)(r6 + (0x51 << 2))));
    sub_02018198(r5, 0);
    // ldr r0, [sp, #0x18]
    // add r4, #0x10
    // add r5, #0x90
    // add r6, #0x90
    // str r0, [sp, #0x18]
    // ldr r1, [sp, #0x14]
    // add r0, r1, r0
    // str r0, [sp, #0x14]
    // ldr r1, [sp, #0x10]
    // add r0, r1, r0
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x1c]
    // str r0, [sp, #0x1c]
    // ldr r1, [sp, #8]
    // add r0, r1, r0
    // ldr r1, [sp, #0xc]
    sub_02018030(0x000013A0, 0x1e, 0x75);
    // ldr r1, [sp, #8]
    // add r0, r1, r0
    // add r0, #0x10
    // add r1, r2, r1
    sub_020181B0(0x000013A0, 0x000013A0, r1);
    // ldr r1, [sp, #8]
    // add r0, r1, r0
    // add r0, #0x10
    sub_020182A8(0x000013A0, 0, 0xFFFE7000, 0);
    // ldr r1, [sp, #8]
    // add r0, r1, r0
    // add r0, #0x10
    sub_020182C4(0x000013A0, (1 << 0xc), (1 << 0xc), (1 << 0xc));
    // ldr r1, [sp, #8]
    // add r0, r1, r0
    // add r0, #0x10
    sub_020182A0(0x000013A0, 1);
}




void ov93_0225DED0(void) {
    // add r6, #0xd8
    // str r0, [sp]
    sub_02018068(r0);
    // add r5, #0x88
    sub_02018068(r6);
    // add r5, #0x10
    // str r0, [sp, #4]
    // add r7, r6, r0
    // ldr r6, [sp]
    // add r6, #0xa8
    sub_020180F8(r7, r6);
    // add r5, #0x90
    // add r7, r7, r0
    // ldr r0, [sp, #4]
    // str r0, [sp, #4]
    // ldr r0, [sp]
    // add r0, r0, r1
    sub_02018068(((9 << 6) + 1), 0x000013A0);
}




void ov93_0225DF38(void) {
    // add r5, #0xd8
    // str r0, [sp, #4]
    // add r0, #0x88
    // str r0, [sp, #4]
    // mov ip, r0
    // add r1, r5, r1
    // add r4, #0xc8
    // add r0, r0, r1
    // add r0, #0xcc
    // add r6, r0, r7
    // ldr r1, [sp, #4]
    // mov r2, ip
    // add r0, r6, r4
    // add r1, r1, r2
    sub_020181B0(r0, (0 << 3), 0, (9 << 6));
    // add r0, r6, r4
    sub_020182A8(0, 0xFFFE7000, 0);
    // add r0, r6, r4
    sub_020182C4((1 << 0xc), (1 << 0xc), (1 << 0xc));
    // add r0, r6, r4
    sub_020182A0(1);
    // add r0, r5, r0
    // add r0, r0, r7
    // str r0, [sp]
    // add r0, r0, r4
    sub_02018198((0x51 << 2), 0);
    // ldr r1, [sp]
    // add r0, r6, r4
    // add r1, r1, r4
    sub_020181D4();
    // add r0, r5, r7
    // add r0, r0, r4
    // add r0, #0xc8
    // str r1, [r0]
    PlaySE(0x00000591, 1);
    // add r1, r1, r3
}




void ov93_0225E008(void) {
    // add r0, r1, r0
    // add r4, #0xd8
    // add r0, #0xcc
    // add r3, #0xb4
    // add r1, r4, r3
    // add r0, r0, r6
    // add r1, r1, r6
    // add r0, r0, r5
    // add r1, r1, r5
    // add r0, r4, r6
    // add r0, r0, r5
    // add r0, #0xc8
    // str r1, [r0]
}




void ov93_0225E03C(void) {
    // str r0, [sp]
    // str r0, [sp, #8]
    // add r0, #0xd8
    // str r0, [sp, #8]
    // add r0, r0, r1
    // str r0, [sp, #4]
    // ldr r4, [sp, #8]
    // ldr r5, [sp, #4]
    // add r0, #0xc8
    // ldr r0, [sp]
    // add r4, #0x90
    // add r5, #0x90
    // ldr r1, [sp, #8]
    // add r0, r1, r0
    // str r0, [sp, #8]
    // ldr r1, [sp, #4]
    // add r0, r1, r0
    // str r0, [sp, #4]
}




void ov93_0225E0A4(void) {
    // str r0, [sp]
    // add r0, #0xd8
    // str r0, [sp]
    // ldr r7, [sp]
    // str r0, [sp, #4]
    // add r7, #0xcc
    // ldr r4, [sp]
    // add r0, #0xc8
    // add r4, #0x90
    // add r5, #0x90
    // ldr r1, [sp]
    // add r0, r1, r0
    // str r0, [sp]
    // add r7, r7, r0
    // ldr r0, [sp, #4]
    // str r0, [sp, #4]
}




void ov93_0225E0F4(void) {
}




void ov93_0225E10C(void) {
    // add r4, #0x30
    // add r1, #0x2c
    // add r1, r5, r2
    // add r1, #0x2c
}




void ov93_0225E144(void) {
    // str r1, [sp]
    ov93_0225E1E0();
    // add r6, r4, r0
    // ldr r0, [sp]
    _s32_div_f(*((u32*)(r6 + (0x00002F04 << 2))), 0x3c);
    // ldr r2, [sp]
    // add r1, r4, r1
    // add r2, r1, r3
    // add r4, r2, r1
    // str r0, [r6, r7]
    GF_AssertFail(*((u32*)(r2 + (0x14 * r1))), (0x14 * r1), ((0x4b << 4) * r2));
    // ldmia r5!, {r0, r1}
    // stmia r4!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r4!, {r0, r1}
    // str r0, [r4]
}




void ov93_0225E1A0(void) {
    // add r5, r6, r0
    _s32_div_f(*((u32*)(r5 + (r1 << 2))), 0x3c);
    // add r2, r6, r0
    // add r0, r2, r0
    // add r0, r0, r2
    // str r1, [r5, r4]
}




void ov93_0225E1E0(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0225E1F8: ; jump table
    GF_AssertFail(*((u32*)(r0 + 0x00002EF0)));
    // add r2, r5, r0
    // ldmia r4!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
}




void ov93_0225E230(void) {
    ov93_0225E27C();
    _s32_div_f(*((u32*)(r5 + 0x00002F24)), 0x3c);
    // add r2, r5, r0
    // add r6, r2, r0
    // str r3, [r5, r1]
    GF_AssertFail(*((u32*)(r2 + (0x14 * r1))), 0x00002F24, (*((u32*)(r5 + 0x00002F24)) + 1));
    // ldmia r4!, {r0, r1}
    // stmia r6!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r6!, {r0, r1}
    // str r0, [r6]
}




void ov93_0225E27C(void) {
    // add r3, r1, r1
    // add r3, pc
    // asr r3, r3, #0x10
    // add pc, r3
    // _0225E292: ; jump table
    // add r3, r0, r3
    // ldmia r2!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r2!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    GF_AssertFail(1, *((u32*)r1), r1, 0x00002EDC);
}




void ov93_0225E2D4(void) {
    _s32_div_f(*((u32*)(r0 + 0x00002F28)), 0x3c);
    // add r3, r4, r0
    // add r0, r3, r2
}




void ov93_0225E300(void) {
    // str r0, [r5, r2]
    // sub r1, #0xe8
    // sub r2, #0xe8
    // add r1, r5, r2
    ov93_02262724(0, *((u32*)(r0 + 0x00002FC4)), 0x00002FC4);
    // str r1, [r5, r0]
    ov93_0225E2D4(0, 0);
    ov93_02262724(r5, r0);
    // str r0, [r4]
    // str r1, [r5, r0]
}




void ov93_0225E370(void) {
    // add r1, r5, r1
    ov93_022627C0(0x00002EF0);
    // add r0, #0x30
    // add r1, r1, r4
    // add r1, #0x2c
    ov93_0225E1A0(r5, *((u8*)*((u32*)r5)));
    ov93_022627C0(r5, r0);
    // add r0, #0x30
}




void ov93_0225E3B8(void) {
    // ldr r1, _0225E3C0 ; =0x00002FC8
    // ldr r0, [r0, r1]
    // bx lr
    // nop
    // _0225E3C0: .word 0x00002FC8
    // TODO: decompile
}




void ov93_0225E3C4(void) {
    sub_0203769C();
    // add r2, r2, r1
    // add r2, #0x2c
    // add r2, r2, r1
    // add r2, #0x2c
    // add r2, #0x30
    GF_AssertFail(1, (0 + 1), *((u8*)*((u32*)r5)));
    // add r2, #0x30
    // add r2, r0, r2
    // str r1, [sp]
    // add r2, #0x30
    // add r2, r0, r2
    // str r1, [sp, #4]
    // add r2, #0x30
    // ldr r1, [sp, #4]
    // ldr r0, [sp]
    // sub r0, r1, r0
    // bpl _0225E454
    // add r0, r0, r2
}




void ov93_0225E45C(void) {
    // add r0, #0x30
    // add r0, #0x2c
}




void ov93_0225E48C(void) {
    GF_AssertFail(*((u32*)(r0 + 0x00002FD4)));
    // str r4, [r5, r0]
    // str r6, [r5, r0]
}




void ov93_0225E4B0(void) {
    // add r2, r2, r2
    // add r2, pc
    // asr r2, r2, #0x10
    // add pc, r2
    // _0225E4CA: ; jump table
    // sub r0, #8
    sub_02037AC0(((*((u32*)(r0 + 0x00002FD8)) << 0x18) >> 0x18), 1, (*((u16*)(*((u32*)(r0 + 0x00002FD4)) + 6)) << 0x10));
    ov93_0225E0F4(r4);
    // str r1, [r4, r0]
}




void ov93_0225E548(void) {
    sub_02037B38(((0 << 0x18) >> 0x18), *((u32*)(r0 + 0x00002FD4)));
    // str r1, [r4, r0]
}




void ov93_0225E584(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0225E59A: ; jump table
}




void ov93_0225E61C(void) {
    // add r0, #0x20
    // sub r0, #0xd8
    // sub r1, #0xc4
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0225E65E: ; jump table
    ov93_0225FDF4(*((u32*)(r0 + 0x00002FC8)), 0x00002FB4, *((u32*)(r0 + 0x00002FB4)));
    ov93_02262884(r5, *((u32*)(r5 + 0x00002FC8)), r0, *((u8*)(r4 + 0x18)));
    *((u32*)(r4 + 0xc)) = (*((u32*)(r4 + 0xc)) + 1);
    ov93_0225E548(r5, *((u8*)(r4 + 0x18)));
    *((u8*)(r4 + 0x18)) = (*((u8*)(r4 + 0x18)) + 1);
    *((u32*)(r4 + 0xc)) = (*((u32*)(r4 + 0xc)) + 1);
    // str r1, [r5, r0]
    ov93_0225E3B8(r5, (*((u32*)(r5 + 0x00002FC8)) + 1));
    ov93_02262830(r5, r0, *((u8*)(r4 + 0x18)));
    *((u32*)(r4 + 0xc)) = (*((u32*)(r4 + 0xc)) + 1);
    ov93_0225E548(r5, *((u8*)(r4 + 0x18)));
    *((u8*)(r4 + 0x18)) = (*((u8*)(r4 + 0x18)) + 1);
    *((u32*)(r4 + 0xc)) = 0;
}




void ov93_0225E6F8(void) {
    // add r2, r1, r1
    // add r2, pc
    // asr r2, r2, #0x10
    // add pc, r2
    // _0225E70E: ; jump table
}




void ov93_0225E764(void) {
    ov93_0225E0F4();
    // add r0, #0xb8
    // add r4, #0xb8
    // blx r2
    // str r0, [r4]
    *((u32*)(r5 + 0xc)) = 0;
    *((u32*)(r5 + 0x14)) = 0;
    *((u32*)(r5 + 0x10)) = 0;
}




void ov93_0225E7AC(void) {
    // bx lr
    // TODO: decompile
}




void ov93_0225E7B0(void) {
    // str r1, [r4, r0]
    // str r1, [r4, r0]
    // str r1, [r4, r0]
    // str r1, [r4, r0]
    // str r1, [r4, r0]
    // str r1, [r4, r0]
    // str r1, [r4, r0]
    // str r1, [r4, r0]
    // str r1, [r4, r0]
    // str r0, [r4, r1]
    // str r1, [r4, r0]
}




void ov93_0225E860(void) {
    // ldr r0, [r4, r0]
    // ldr r0, [r4, r0]
    // ldr r0, [r4, r0]
}




void ov93_0225E898(void) {
    // str r0, [r4, r1]
    // sub r2, #0x38
    // str r3, [r4, r2]
    // sub r2, #0x34
    // str r3, [r4, r2]
    // add r2, #8
    // sub r2, #0x30
    // str r3, [r4, r2]
    // add r0, #0xc
    // sub r1, #0x2c
    // str r0, [r4, r1]
    // str r2, [r4, r1]
    // str r2, [r4, r0]
    // add r0, #8
    // str r2, [r4, r0]
    // add r1, #0xc
    // str r2, [r4, r1]
    // sub r0, #0x38
    // str r3, [r4, r0]
    // sub r0, #0x34
    // str r3, [r4, r0]
    // sub r0, #0x30
    // sub r1, #0x2c
    // str r3, [r4, r0]
    // str r0, [r4, r1]
    ov93_0225F370(r1, (0x83 << 2), gSystem, *((u16*)(gSystem + 0x26)));
    ov93_0225EB38(r4);
    // strb r1, [r4, r0]
    ov93_0225F44C(r4, 0);
    ov93_0225EB70(r4);
    ov93_0225FB6C(r4, *((u32*)(r4 + (0x8d << 2))));
    // ldrsh r1, [r4, r0]
    // add r1, #8
    // strh r1, [r4, r0]
    // ldrsh r1, [r4, r0]
    // strh r1, [r4, r0]
    ov93_0225EDFC(r4, 0x1e);
    // add r0, #0x18
    // add r2, #0xdc
    ov93_0225EDB8(r4, *((u32*)(r4 + (0x91 << 2))), (0x91 << 2));
    // strh r1, [r4, r0]
    // add r0, #0xd
    // strb r1, [r4, r0]
    PlaySE(0x0000058E, r7);
    ov93_0225EDE8(r4);
    // strh r1, [r4, r0]
    ov93_0225EA6C(r4, *((u32*)(r4 + (0x91 << 2))));
    _s32_div_f((0x19 * r0), 0x64);
    // add r6, r6, r0
    // add r3, sp, #0
    ov93_02260F14(r5, *((u32*)(r5 + 0x00002FC8)), r6);
    // add r1, sp, #0
    ov93_02260F3C(r5);
    // add r1, sp, #0
    ov93_0225FEC4(r5);
    ov93_0225EA98(r4, *((u32*)(r4 + (0x91 << 2))));
    ov93_0225EAE0(r5, r4, *((u32*)(r4 + (0x91 << 2))), r7);
    // str r1, [r4, r0]
}




void ov93_0225EA50(void) {
}




void ov93_0225EA6C(void) {
    // cmp r1, #0x62
    // blt _0225EA76
    // mov r2, #0x4b
    // lsl r2, r2, #4
    // b _0225EA7A
    // mov r2, #0xa
    // mul r2, r1
    // mov r1, #0x27
    // lsl r1, r1, #4
    // ldr r0, [r0, r1]
    // ldr r3, _0225EA90 ; =_s32_div_f
    // lsl r1, r0, #2
    // ldr r0, _0225EA94 ; =ov93_022630D8
    // ldr r0, [r0, r1]
    // mov r1, #0x64
    // mul r0, r2
    // bx r3
    // nop
    // _0225EA90: .word _s32_div_f
    // _0225EA94: .word ov93_022630D8
    // TODO: decompile
}




void ov93_0225EA98(void) {
    // add r3, r3, r1
    // str r3, [r0, r1]
    // add r3, r3, r1
    // str r3, [r0, r1]
    // str r3, [r0, r1]
    // str r2, [r0, r1]
}




void ov93_0225EAE0(void) {
    ov93_0225D700(0, *((u32*)(r1 + (0x91 << 2))));
    PlaySE(0x00000592);
    ov93_0225D700(2, *((u32*)(r1 + 0x20)));
    PlaySE((0x59 << 4));
    ov93_0225D700(1);
    PlaySE((0x59 << 4));
}




void ov93_0225EB38(void) {
    // str r2, [r4, r1]
    // str r2, [r4, r1]
    // sub r2, r2, r0
    // str r2, [r4, r0]
    // str r2, [r4, r0]
}




void ov93_0225EB70(void) {
    // add r1, sp, #0x1c
    // str r0, [sp, #0x1c]
    NNS_G3dGeBufferOP_N(0x32, 1);
    // add r1, sp, #0x18
    // str r0, [sp, #0x18]
    NNS_G3dGeBufferOP_N(0x33, 1);
    NNS_G3dGeBufferOP_N(0x11, 0, 0);
    // str r0, [sp, #0x2c]
    // str r0, [sp, #0x30]
    // add r1, sp, #0x2c
    // str r0, [sp, #0x34]
    NNS_G3dGeBufferOP_N(0x1c, 3);
    // ldrsh r0, [r5, r0]
    _s32_div_f((((0x99 << 2) + 6) * *((u32*)(r5 + (0x99 << 2)))), 0x64);
    // add r6, r4, r0
    // add r0, #8
    // add r1, #0xc
    // ldrsh r2, [r5, r0]
    // ldrsh r0, [r5, r1]
    // add r0, r2, r0
    _s32_div_f(((0x26 << 4) * *((u32*)(r5 + (0x26 << 4)))), 0x64);
    // add r0, r4, r0
    // str r0, [sp, #0x20]
    // str r0, [sp, #0x28]
    // add r1, sp, #0x20
    // str r6, [sp, #0x24]
    NNS_G3dGeBufferOP_N(0x1b, 3);
    // str r0, [sp, #0x14]
    // add r1, sp, #0x14
    NNS_G3dGeBufferOP_N(0x10, 1);
    NNS_G3dGeBufferOP_N(0x15, 0, 0);
    // str r0, [sp, #0x10]
    // add r1, sp, #0x10
    NNS_G3dGeBufferOP_N(0x10, 1);
    ov93_0225EE4C(1, 1);
    ov93_0225EE98();
    // and r1, r0
    // str r0, [sp, #0xc]
    // add r1, sp, #0xc
    NNS_G3dGeBufferOP_N(0x2a, ((*((u32*)(*((u32*)(r5 + 4)) + 8)) << 0x10) >> 0x10), 1);
    // str r0, [sp, #8]
    // add r1, sp, #8
    NNS_G3dGeBufferOP_N(0x2b, 1);
    // add r1, sp, #4
    // str r0, [sp, #4]
    NNS_G3dGeBufferOP_N(0x29, 1);
    ov93_0225EFAC(r5);
    // add r1, sp, #0
    // str r2, [sp]
    NNS_G3dGeBufferOP_N(0x12, 1);
    NNS_G3dGeFlushBuffer();
}




void ov93_0225EC98(void) {
    // str r0, [r5]
    // str r0, [sp]
    // str r0, [r5, r1]
    // str r0, [r5, r1]
    // add r0, r6, r7
    // add r0, r6, r7
    // ldr r0, [sp]
    // str r0, [r5, r1]
    // str r4, [r5, r0]
    // add r1, r2, r1
    // sub r1, r1, r0
}




void ov93_0225ED3C(void) {
    // add r1, #8
}




void ov93_0225ED60(void) {
    // add r0, r1, r0
    _s32_div_f(((r1 << 1) << 0xa), (0x32 << 4));
    // add r0, #0x80
    // asr r3, r0, #8
    // str r0, [sp]
    // add r2, #8
    BlendPalette(*((u32*)(r4 + (0x93 << 2))), *((u32*)(r4 + ((0x93 << 2) + 4))), ((*((u32*)(r4 + (0x93 << 2))) << 0xf) >> 0x10), ((0x10 << 0x18) >> 0x18));
    DC_FlushRange(*((u32*)(r4 + (0x25 << 4))), *((u32*)(r4 + ((0x25 << 4) + 4))));
    // strb r1, [r4, r0]
}




void ov93_0225EDB8(void) {
    // add r1, r3, r1
    // str r1, [r0, r2]
    // add r1, #0xc4
    // add r1, #0xc4
    // str r1, [r0, r2]
}




void ov93_0225EDE8(void) {
    // str r2, [r0, r1]
}




void ov93_0225EDFC(void) {
    // ldrsh r1, [r4, r2]
    // add r1, #0xd
    // add r1, #0xd
    // strb r3, [r4, r1]
    // add r1, #0xd
    // sub r2, #0xc
    // add r1, r2, r1
    // asr r1, r1, #1
    ov93_0225ED60((*((u32*)(r0 + (0x9a << 2))) >> 0x1f), *((u32*)(r0 + (0x9a << 2))), (*((u8*)(r0 + (0x9a << 2))) + 1));
    // sub r2, #0xc
    ov93_0225ED60(*((u32*)(r4 + r2)));
    // strb r1, [r4, r0]
}




void ov93_0225EE4C(void) {
    // str r0, [sp, #4]
    // add r1, sp, #4
    NNS_G3dGeBufferOP_N(0x30, (0 << 0xf), 1);
    // str r0, [sp]
    // add r1, sp, #0
    NNS_G3dGeBufferOP_N(0x31, (0 << 0xf), 1);
}



