/* Decompiled from asm/overlay_89.s */
#include "global.h"

void ov89_02258800(void) {
    Main_SetVBlankIntrCB(0, 0);
    HBlankInterruptDisable();
    GfGfx_DisableEngineAPlanes();
    GfGfx_DisableEngineBPlanes();
    // and r0, r2
    // str r0, [r1]
    // and r2, r3
    // str r2, [r0]
    // and r3, r2
    // str r3, [r1]
    // add r1, #0x50
    // and r2, r3
    // str r2, [r0]
    // strh r2, [r1]
    // add r0, #0x50
    // strh r2, [r0]
    Heap_Create(3, 0x7d, (5 << 0x10), *((u32*)0x04001000));
    OverlayManager_CreateAndGetData(r4, 0x000019E4, 0x7d);
    MI_CpuFill8(0, 0x000019E4);
    OverlayManager_GetArgs(r4);
    // str r0, [r5]
    ov45_0222A2C8(*((u32*)r0));
    *((u32*)(r5 + 4)) = r0;
    ov45_0222A2CC(*((u32*)*((u32*)r5)));
    // str r0, [r5, r1]
    ov89_02259E18(r5, 0x000019E0);
    // add r2, r5, r2
    ov89_02259E50(*((u8*)(*((u32*)r5) + 4)), *((u32*)(r5 + 4)), 0x000008D8);
    // str r1, [r5, r0]
    // str r1, [r5, r0]
    ov89_02259D70(0x7d, *((u32*)(r5 + 0x000019D4)));
    *((u32*)(r5 + 0x14)) = r0;
    PaletteData_Init(0x7d);
    *((u32*)(r5 + 0xc)) = r0;
    PaletteData_SetAutoTransparent(1);
    PaletteData_AllocBuffers(*((u32*)(r5 + 0xc)), 0, (2 << 8), 0x7d);
    PaletteData_AllocBuffers(*((u32*)(r5 + 0xc)), 1, (1 << 9), 0x7d);
    PaletteData_AllocBuffers(*((u32*)(r5 + 0xc)), 2, (7 << 6), 0x7d);
    PaletteData_AllocBuffers(*((u32*)(r5 + 0xc)), 3, (2 << 8), 0x7d);
    PaletteData_SetAutoTransparent(*((u32*)(r5 + 0xc)), 1);
    BgConfig_Alloc(0x7d);
    *((u32*)(r5 + 8)) = r0;
    GF_CreateVramTransferManager(0x40, 0x7d);
    SetKeyRepeatTimers(4, 8);
    ov89_0225905C(*((u32*)(r5 + 8)));
    sub_020210BC();
    sub_02021148(4);
    FontID_Alloc(2, 0x7d);
    MessageFormat_New(0x7d);
    *((u32*)(r5 + 0x2c)) = r0;
    NewMsgDataFromNarc(0, 0x1b, 0x000002F2, 0x7d);
    *((u32*)(r5 + 0x30)) = r0;
    FontSystem_NewInit(4, 0x7d);
    *((u32*)(r5 + 0x10)) = r0;
    NARC_New(0xd2, 0x7d);
    // str r0, [r5, r1]
    NARC_New(0x45, 0x7d);
    // str r0, [r5, r1]
    ov89_02259264(r5, *((u32*)(r5 + ((0x59 << 2) - 4))));
    ov89_02259BAC(r5, *((u32*)(r5 + (0x16 << 4))));
    ov89_02259B00(r5);
    ov89_02259CD0(r5);
    String_New((1 << 8), 0x7d);
    // add r1, #0xc4
    // str r0, [r1]
    SpriteSystem_Alloc(0x7d, r5);
    *((u32*)(r5 + 0x1c)) = r0;
    SpriteSystem_Init(ov89_0225CA58, ov89_0225C9EC, 0x20);
    G2dRenderer_SetObjCharTransferReservedRegion(1, 0x00200010);
    G2dRenderer_SetPlttTransferReservedRegion(1);
    SpriteManager_New(*((u32*)(r5 + 0x1c)));
    *((u32*)(r5 + 0x20)) = r0;
    SpriteSystem_InitSprites(*((u32*)(r5 + 0x1c)), *((u32*)(r5 + 0x20)), 0x80);
    SpriteSystem_InitManagerWithCapacities(*((u32*)(r5 + 0x1c)), *((u32*)(r5 + 0x20)), ov89_0225CA00);
    SpriteSystem_GetRenderer(*((u32*)(r5 + 0x1c)));
    G2dRenderer_SetSubSurfaceCoords(0, (0x11 << 0x10));
    sub_0203A880();
    // add r0, r5, r0
    ov89_0225A46C((0x65 << 2), *((u32*)(r5 + 0x000019E0)));
    ov89_02259408(r5, *((u32*)(r5 + (0x16 << 4))));
    ov89_02259734(r5, *((u32*)(r5 + (0x16 << 4))));
    ov89_02259588(r5);
    ov89_022597FC(r5);
    ov89_022598D0(r5);
    YesNoPrompt_Create(0x7d);
    *((u32*)(r5 + 0x24)) = r0;
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 1, 1, 0);
    ov45_0222A520(*((u32*)*((u32*)r5)), 1);
    GfGfx_EngineATogglePlanes(1, 1);
    GfGfx_EngineATogglePlanes(2, 1);
    GfGfx_EngineATogglePlanes(4, 1);
    GfGfx_EngineATogglePlanes(8, 1);
    GfGfx_EngineBTogglePlanes(2, 1);
    GfGfx_EngineBTogglePlanes(4, 1);
    *((u8*)(gSystem + 9)) = 1;
    GfGfx_SwapDisplay(gSystem, 1);
    GfGfx_BothDispOn();
    GfGfx_EngineATogglePlanes(0x10, 1);
    GfGfx_EngineBTogglePlanes(0x10, 1);
    TextFlags_SetCanABSpeedUpPrint(1);
    TextFlags_SetAutoScrollParam(0);
    TextFlags_SetCanTouchSpeedUpPrint(0);
    SysTask_CreateOnMainQueue(ov89_02258FF4, r5, 0x0000EA60);
    *((u32*)(r5 + 0x18)) = r0;
    Main_SetVBlankIntrCB(ov89_0225901C, r5);
}




void ov89_02258B04(void) {
    OverlayManager_GetData();
    // add r1, #0xcc
    // add r0, r4, r0
    ov89_0225A4F4((0x65 << 2), *((u32*)r0), *((u32*)(r0 + 0x000009BC)), *((u8*)(*((u32*)r0) + 4)));
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02258B3C: ; jump table
    // str r1, [r4, r0]
    ov89_0225C8DC(r4, 1);
    // add r1, sp, #0x20
    ov89_02259E28(r4);
    // str r0, [r5]
    IsPaletteFadeFinished((*((u32*)r5) + 1));
    // str r1, [r4, r0]
    // str r0, [r5]
    ov89_0225A41C(r4, 0x00000555);
    // add r6, r4, r6
    // sub r1, #0x3f
    // strb r0, [r6, r1]
    // add r6, r4, r6
    // sub r1, #0x3e
    // strb r0, [r6, r1]
    // sub r1, #0x48
    // add r1, r4, r1
    // add r1, r1, r3
    ov89_02259EC4(r4, (0x92 << 4), *((u32*)(r4 + (0x5b << 2))), (0xc * *((u8*)(r4 + (0x92 << 4)))));
    // add r2, r4, r0
    // add r0, #0x48
    // add r0, r2, r0
    ov89_0225C91C((0xc * *((u8*)(r4 + 0x000008D8))), *((u8*)(r4 + 0x000008D8)));
    // add r0, r4, r1
    // add r1, #0x48
    ov89_0225C84C(*((u8*)(r4 + 0x000008D8)));
    // strb r1, [r4, r0]
    ov89_0225A16C(r4, r0);
    PlaySE(0x000005E5);
    // str r0, [sp]
    // str r1, [sp, #4]
    PaletteData_BlendPalette(*((u32*)(r4 + 0xc)), 0, 9, 1);
    // str r0, [sp]
    // str r0, [sp, #4]
    PaletteData_BlendPalette(*((u32*)(r4 + 0xc)), 2, ((*((u8*)(r4 + 0x00000921)) << 0x14) >> 0x10), 0x10);
    // str r0, [r5]
    // add r0, #0xb4
    FillWindowPixelBuffer(r4, 0xf);
    // add r0, #0xb4
    DrawFrameAndWindow2(r4, 0, 1, 0xe);
    // add r2, #0xc4
    ReadMsgDataIntoString(*((u32*)(r4 + 0x30)), 2, *((u32*)r4));
    Save_PlayerData_GetOptionsAddr(*((u32*)(r4 + 4)));
    Options_GetTextFrameDelay();
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r3, [sp, #8]
    // add r2, #0xc4
    // add r0, #0xb4
    AddTextPrinterParameterized(r4, 1, *((u32*)r4), 0);
    // add r1, #0xc8
    // strb r0, [r1]
    // str r0, [r5]
    // add r0, #0xc8
    TextPrinterCheckActive(*((u8*)r4), r4);
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    // add r0, sp, #0xc
    *((u8*)(0xb + 0x10)) = 0x19;
    *((u8*)(0xb + 0x11)) = 6;
    *((u8*)(0xb + 0x13)) = 0;
    // add r1, sp, #0xc
    YesNoPrompt_InitFromTemplate(*((u32*)(r4 + 0x24)), 0);
    // add r0, #0x28
    // strb r1, [r0]
    // str r0, [r5]
    PaletteData_LoadPaletteSlotFromHardware(*((u32*)(r4 + 0xc)), 0, 0xb0, 0x40);
    YesNoPrompt_HandleInput(*((u32*)(r4 + 0x24)));
    YesNoPrompt_Reset(*((u32*)(r4 + 0x24)));
    // add r0, #0x28
    // strb r1, [r0]
    // add r0, #0xb4
    ClearFrameAndWindow2(r4, 0);
    // str r1, [r4, r0]
    // str r1, [r4, r0]
    // str r0, [r5]
    YesNoPrompt_Reset(*((u32*)(r4 + 0x24)), 3);
    // add r0, #0x28
    // strb r1, [r0]
    // add r0, #0xb4
    ClearFrameAndWindow2(r4, 0);
    // str r1, [sp]
    // str r1, [sp, #4]
    PaletteData_BlendPalette(*((u32*)(r4 + 0xc)), 0, 9, 1);
    // str r0, [sp]
    // str r0, [sp, #4]
    PaletteData_BlendPalette(*((u32*)(r4 + 0xc)), 2, ((*((u8*)(r4 + 0x00000921)) << 0x14) >> 0x10), 0x10);
    // str r0, [r5]
    // add r0, #0xb4
    FillWindowPixelBuffer(r4, 0xf);
    // add r0, #0xb4
    DrawFrameAndWindow2(r4, 0, 1, 0xe);
    // add r2, #0xc4
    ReadMsgDataIntoString(*((u32*)(r4 + 0x30)), 3, *((u32*)r4));
    Save_PlayerData_GetOptionsAddr(*((u32*)(r4 + 4)));
    Options_GetTextFrameDelay();
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r3, [sp, #8]
    // add r2, #0xc4
    // add r0, #0xb4
    AddTextPrinterParameterized(r4, 1, *((u32*)r4), 0);
    // add r1, #0xc8
    // strb r0, [r1]
    // str r0, [r5]
    // add r0, #0xc8
    TextPrinterCheckActive(*((u8*)r4), r4);
    // str r0, [r5]
    // add r0, #0x29
    // add r0, #0x29
    // strb r1, [r0]
    // add r0, #0x29
    // str r0, [r5]
    IsPaletteFadeFinished(9, (*((u8*)r4) + 1));
    sub_0200FB70();
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 0, 0, 0);
    // str r0, [r5]
    IsPaletteFadeFinished((*((u32*)r5) + 1));
    // str r0, [r5]
    ov45_0222EEB8((*((u32*)r5) + 1));
    ov89_0225A21C(r4);
    ov89_0225A398(r4);
    // str r1, [r4, r0]
    // str r1, [r4, r0]
    ov89_02259F9C(r4, 0);
    ov45_0222D844();
    ov45_0222A330(*((u32*)*((u32*)r4)));
    // add r0, #0x28
    YesNoPrompt_Reset(*((u32*)(r4 + 0x24)));
    // str r1, [r4, r0]
    // str r1, [r4, r0]
    ov45_0222D844(0x000009BC, 3);
    // str r0, [r5]
    PlaySE(0x000005F1);
    ov45_0222A4A8(*((u32*)*((u32*)r4)));
    // str r0, [r5]
    ov89_0225A468(r4);
}




void ov89_02258F00(void) {
    // add r0, r4, r0
    // add r0, #0xc4
}




void ov89_02258FF4(void) {
    // add r0, r4, r0
}




void ov89_0225901C(void) {
    // add r0, r4, r0
    ov89_0225A760((0x65 << 2), *((u32*)(r0 + 0x000009BC)));
    GF_RunVramTransferTasks();
    SpriteSystem_TransferOam();
    PaletteData_PushTransparentBuffers(*((u32*)(r4 + 0xc)));
    DoScheduledBgGpuUpdates(*((u32*)(r4 + 8)));
    // str r0, [r3, r1]
}




void ov89_0225905C(void) {
    GfGfx_DisableEngineAPlanes();
    GfGfx_DisableEngineBPlanes();
    // add r3, sp, #0x10
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // add r0, sp, #0x10
    GfGfx_SetBanks((5 - 1));
    MIi_CpuClear32(0, (6 << 0x18), (2 << 0x12));
    MIi_CpuClear32(0, (0x62 << 0x14), (2 << 0x10));
    MIi_CpuClear32(0, (0x19 << 0x16), (1 << 0x12));
    MIi_CpuClear32(0, (0x66 << 0x14), (2 << 0x10));
    // add r3, sp, #0
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    SetBothScreensModesAndDisable(r3, r3);
    // add r3, sp, #0x8c
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // add r2, sp, #0x8c
    InitBgFromTemplate(r4, 1, (0xa - 1), 0);
    BgClearTilemapBufferAndCommit(r4, 1);
    BgSetPosTextAndCommit(r4, 1, 0, 0);
    BgSetPosTextAndCommit(r4, 1, 3, 0);
    // add r2, sp, #0xa8
    InitBgFromTemplate(r4, 2, 0);
    BgClearTilemapBufferAndCommit(r4, 2);
    BgSetPosTextAndCommit(r4, 2, 0, 0);
    BgSetPosTextAndCommit(r4, 2, 3, 0);
    // add r2, sp, #0xc4
    InitBgFromTemplate(r4, 3, 0);
    BgClearTilemapBufferAndCommit(r4, 3);
    BgSetPosTextAndCommit(r4, 3, 0, 0);
    BgSetPosTextAndCommit(r4, 3, 3, 0);
    // strh r0, [r1]
    GfGfx_EngineATogglePlanes(1, 1, (*((u16*)0x04000008) & ~(3)));
    // add r3, sp, #0x38
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // add r2, sp, #0x38
    InitBgFromTemplate(r4, 5, (0xa - 1), 0);
    BgClearTilemapBufferAndCommit(r4, 5);
    BgSetPosTextAndCommit(r4, 5, 0, 0);
    BgSetPosTextAndCommit(r4, 5, 3, 0);
    // add r2, sp, #0x54
    InitBgFromTemplate(r4, 6, 0);
    BgClearTilemapBufferAndCommit(r4, 6);
    BgSetPosTextAndCommit(r4, 6, 0, 0);
    BgSetPosTextAndCommit(r4, 6, 3, 0);
    // add r2, sp, #0x70
    InitBgFromTemplate(r4, 7, 0);
    BgClearTilemapBufferAndCommit(r4, 7);
    BgSetPosTextAndCommit(r4, 7, 0, 0);
    BgSetPosTextAndCommit(r4, 7, 3, 0);
    BG_ClearCharDataRange(5, 0x20, 0, 0x7d);
}




void ov89_02259230(void) {
}




void ov89_02259264(void) {
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
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
    // str r0, [sp]
    // str r0, [sp, #4]
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
    // add r1, r4, r1
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
}




void ov89_02259408(void) {
    // str r6, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    SpriteSystem_LoadPaletteBufferFromOpenNarc(*((u32*)(r0 + 0xc)), 2, *((u32*)(r0 + 0x1c)), *((u32*)(r0 + 0x20)));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    SpriteSystem_LoadCharResObjFromOpenNarc(*((u32*)(r5 + 0x1c)), *((u32*)(r5 + 0x20)), r6, 4);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadCellResObjFromOpenNarc(*((u32*)(r5 + 0x1c)), *((u32*)(r5 + 0x20)), r6, 5);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadAnimResObjFromOpenNarc(*((u32*)(r5 + 0x1c)), *((u32*)(r5 + 0x20)), r6, 6);
    // str r7, [sp]
    // str r0, [sp, #4]
    // add r0, r4, r0
    // str r0, [sp, #8]
    SpriteSystem_LoadCharResObjFromOpenNarc(*((u32*)(r5 + 0x1c)), *((u32*)(r5 + 0x20)), r6, 0x10);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadCellResObjFromOpenNarc(*((u32*)(r5 + 0x1c)), *((u32*)(r5 + 0x20)), r6, 0xf);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadAnimResObjFromOpenNarc(*((u32*)(r5 + 0x1c)), *((u32*)(r5 + 0x20)), r6, 0xe);
    // str r6, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    SpriteSystem_LoadPaletteBufferFromOpenNarc(*((u32*)(r5 + 0xc)), 2, *((u32*)(r5 + 0x1c)), *((u32*)(r5 + 0x20)));
    // add r1, #0x10
    // str r0, [sp]
    // str r0, [sp, #4]
    PaletteData_FillPaletteInBuffer(*((u32*)(r5 + 0xc)), 2, 2, 0x00007FFF);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    SpriteSystem_LoadCharResObjFromOpenNarc(*((u32*)(r5 + 0x1c)), *((u32*)(r5 + 0x20)), r6, 2);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadCellResObjFromOpenNarc(*((u32*)(r5 + 0x1c)), *((u32*)(r5 + 0x20)), r6, 1);
    // str r3, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadAnimResObjFromOpenNarc(*((u32*)(r5 + 0x1c)), *((u32*)(r5 + 0x20)), r6, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    SpriteSystem_LoadPaletteBuffer(*((u32*)(r5 + 0xc)), 2, *((u32*)(r5 + 0x1c)), *((u32*)(r5 + 0x20)));
    // strb r0, [r5, r1]
}




void ov89_02259588(void) {
    // add r3, sp, #0x18
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // add r0, sp, #0x18
    // strh r4, [r0]
    *((u16*)(*((u32*)ov89_0225CB08) + 2)) = 0xb0;
    // add r2, sp, #0x18
    SpriteSystem_NewSprite(*((u32*)(r0 + 0x1c)), *((u32*)(r0 + 0x20)), (6 - 1));
    // str r0, [r5, r1]
    ManagedSprite_SetAnim(*((u32*)(r5 + 0x00000924)), r6);
    Sprite_TickFrame(*((u32*)*((u32*)(r5 + 0x00000924))));
    // add r4, #0x20
    // add r3, sp, #0x18
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // add r0, sp, #0x18
    // strh r4, [r0]
    *((u16*)(*((u32*)ov89_0225CB3C) + 2)) = 0xb0;
    // add r2, sp, #0x18
    SpriteSystem_NewSprite(*((u32*)(r7 + 0x1c)), *((u32*)(r7 + 0x20)), (6 - 1));
    // str r0, [r5, r1]
    ManagedSprite_SetAnim(*((u32*)(r5 + 0x0000093C)), r6);
    Sprite_TickFrame(*((u32*)*((u32*)(r5 + 0x0000093C))));
    // add r4, #0x20
    // add r3, sp, #0x18
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // add r0, sp, #0x18
    // strh r6, [r0]
    *((u16*)(*((u32*)ov89_0225CB70) + 2)) = 0xb0;
    // add r2, sp, #0x18
    // add r0, r5, r0
    // str r0, [sp, #0x2c]
    SpriteSystem_NewSprite(*((u32*)(r7 + 0x1c)), *((u32*)(r7 + 0x20)), (6 - 1));
    // str r0, [r4, r1]
    Sprite_TickFrame(*((u32*)*((u32*)(r4 + 0x00000954))), 0x00000954);
    // add r6, #0x20
    NewString_ReadMsgData(*((u32*)(r7 + 0x30)), 1);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // add r1, r7, r1
    ov89_0225A260(r7, (0x67 << 6), r0, 2);
    TextOBJ_SetSpritesDrawFlag(*((u32*)(r7 + (0x67 << 6))), 1);
    String_Delete(r4);
}




void ov89_022596DC(void) {
    Sprite_DeleteAndFreeResources(*((u32*)(r0 + 0x00000924)));
    Sprite_DeleteAndFreeResources(*((u32*)(r7 + 0x0000093C)));
    Sprite_DeleteAndFreeResources(*((u32*)(r7 + 0x00000954)));
    // add r0, r7, r0
    ov89_0225A354((0x67 << 6));
}




void ov89_02259734(void) {
    // str r6, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    SpriteSystem_LoadPaletteBufferFromOpenNarc(*((u32*)(r0 + 0xc)), 3, *((u32*)(r0 + 0x1c)), *((u32*)(r0 + 0x20)));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    SpriteSystem_LoadCharResObjFromOpenNarc(*((u32*)(r5 + 0x1c)), *((u32*)(r5 + 0x20)), r6, 9);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadCellResObjFromOpenNarc(*((u32*)(r5 + 0x1c)), *((u32*)(r5 + 0x20)), r6, 8);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadAnimResObjFromOpenNarc(*((u32*)(r5 + 0x1c)), *((u32*)(r5 + 0x20)), r6, 7);
    // str r7, [sp]
    // str r0, [sp, #4]
    // add r0, r4, r0
    // str r0, [sp, #8]
    SpriteSystem_LoadCharResObjFromOpenNarc(*((u32*)(r5 + 0x1c)), *((u32*)(r5 + 0x20)), r6, 0xd);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadCellResObjFromOpenNarc(*((u32*)(r5 + 0x1c)), *((u32*)(r5 + 0x20)), r6, 0xc);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadAnimResObjFromOpenNarc(*((u32*)(r5 + 0x1c)), *((u32*)(r5 + 0x20)), r6, 0xb);
}




void ov89_022597FC(void) {
    SpriteSystem_NewSprite(*((u32*)(r0 + 0x1c)), *((u32*)(r0 + 0x20)), ov89_0225CAA0);
    // str r0, [r5, r1]
    Sprite_TickFrame(*((u32*)*((u32*)(r5 + 0x0000096C))), 0x0000096C);
    ManagedSprite_SetDrawFlag(*((u32*)(r5 + 0x0000096C)), 0);
    // add r3, sp, #0
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // add r2, sp, #0
    // add r0, r4, r0
    // str r0, [sp, #0x14]
    SpriteSystem_NewSprite(*((u32*)(r5 + 0x1c)), *((u32*)(r5 + 0x20)), (6 - 1));
    // add r1, r5, r2
    // str r3, [r1, r0]
    // ldrsh r1, [r6, r2]
    // add r3, r6, r2
    // ldrsh r2, [r3, r2]
    ManagedSprite_SetPositionXYWithSubscreenOffset(*((u32*)(r1 + (0x97 << 4))), 2, (0x11 << 0x10));
    // add r1, r5, r0
    Sprite_TickFrame(*((u32*)*((u32*)(r1 + (0x97 << 4)))));
    // add r0, r5, r0
    ManagedSprite_SetDrawFlag(*((u32*)((r4 << 2) + r7)), 0);
}




void ov89_022598A8(void) {
    Sprite_DeleteAndFreeResources(*((u32*)(r0 + 0x0000096C)));
    Sprite_DeleteAndFreeResources(*((u32*)(r5 + (0x97 << 4))));
}




void ov89_022598D0(void) {
    // str r0, [sp, #0x24]
    PaletteData_GetUnfadedBuf(*((u32*)(r0 + 0xc)), 2);
    // str r0, [sp, #0x28]
    PaletteData_GetFadedBuf(*((u32*)(r6 + 0xc)), 2);
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x2c]
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x28]
    // str r6, [sp, #0x20]
    // str r6, [sp, #0x1c]
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x20]
    // ldr r0, [sp, #0x1c]
    ManagedSprite_SetDrawFlag(*((u32*)(*((u16*)(0 + 0x000008DA)) + 0x00000924)), 0, 0x000008DA, 0x000001ED);
    // ldr r0, [sp, #0x1c]
    ManagedSprite_SetDrawFlag(*((u32*)(r0 + 0x0000093C)), 0);
    // ldr r0, [sp, #0x1c]
    ManagedSprite_SetDrawFlag(*((u32*)(r0 + 0x00000954)), 0);
    // ldr r0, [sp, #0x18]
    // add r0, #0x14
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(*((u32*)(r6 + 8)), 2, *((u16*)_0225C9B0), ((r0 << 0x18) >> 0x18));
    // sub r1, #0x89
    // str r1, [sp]
    // str r1, [sp, #4]
    // add r2, #0x7a
    // sub r3, #0x8d
    // str r1, [sp, #8]
    // ldr r1, [sp, #0x20]
    // ldr r4, [sp, #0x1c]
    ov89_02259A3C(*((u8*)(*((u32*)(r6 + 0x000019E0)) + (r2 + 6))), *((u32*)((r2 + 6) + r2)), *((u32*)(r6 + r3)));
    // ldr r0, [sp, #0x20]
    // ldr r0, [sp, #0x14]
    *((u16*)(r0 + 0x22)) = *((u16*)(r0 + 0x000008D8));
    // ldr r0, [sp, #0x20]
    // ldr r0, [sp, #0x10]
    *((u16*)(r0 + 0x22)) = *((u16*)(r0 + 0x000008D8));
    // str r0, [sp]
    // ldr r0, [sp, #0x2c]
    // add r0, #0x11
    // ldr r0, [sp, #0x28]
    // add r0, r0, r1
    // ldr r1, [sp, #0x2c]
    // add r1, #0x21
    // ldr r1, [sp, #0x28]
    // add r1, r1, r2
    BlendPalette(0, (0 << 1), 1, 0xc);
    // ldr r0, [sp, #0x14]
    // add r0, #0x42
    // ldr r0, [sp, #0x10]
    // add r0, #0x42
    // strh r1, [r0]
    // ldr r0, [sp, #0x24]
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #0x2c]
    // strb r0, [r6, r1]
    // ldr r0, [sp, #0x20]
    // add r0, #0xc
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x1c]
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x18]
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x14]
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x10]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x2c]
    // str r0, [sp, #0x2c]
    ov89_0225A1D8(r6, 0);
    ScheduleBgTilemapBufferTransfer(*((u32*)(r6 + 8)), 2);
}




void ov89_02259A3C(void) {
    // ldr r2, [sp, #0x30]
    ov89_0225C88C(0, 0x000001ED);
    // ldr r0, [sp, #0x28]
    // str r2, [sp]
    GfGfxLoader_LoadFromOpenNarc((r4 + 3), 1, 0x7d);
    // add r1, sp, #0xc
    // str r0, [sp, #8]
    NNS_G2dGetUnpackedCharacterData();
    // ldr r0, [sp, #0xc]
    DC_FlushRange(*((u32*)(r0 + 0x14)), (1 << 8));
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #4]
    // add r0, #0x80
    // str r0, [sp, #4]
    // str r0, [sp]
    GfGfxLoader_LoadFromOpenNarc(r5, 0x10, 0, 0x7d);
    // add r1, sp, #0xc
    // str r0, [sp, #8]
    NNS_G2dGetUnpackedCharacterData();
    // ldr r0, [sp, #0xc]
    DC_FlushRange(*((u32*)(r0 + 0x14)), 0x80);
    // ldr r0, [sp, #0xc]
    // str r4, [sp, #4]
    // add r4, #0x40
    // ldr r0, [sp, #0x2c]
    Sprite_GetImageProxy(*((u32*)r6));
    // ldr r0, [sp, #0x2c]
    // ldr r0, [sp, #4]
    // add r1, r5, r1
    MIi_CpuCopy16(*((u32*)(r0 + (r0 << 2))), 0x40);
    // add r5, #0x40
    // add r1, r5, r1
    MIi_CpuCopy16(r4, *((u32*)(r6 + r7)), 0x40);
    // ldr r0, [sp, #8]
    Heap_Free();
}




void ov89_02259B00(void) {
    // ldmia r3!, {r0, r1}
    // add r2, sp, #0x14
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    Camera_New(0x7d, ov89_0225C9C0);
    // add r1, #0xcc
    // str r0, [r1]
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, #0xcc
    // str r0, [sp, #8]
    // add r0, sp, #0x14
    Camera_Init_FromTargetDistanceAndAngle(*((u32*)r5), (0x1f << 0xe), ov89_0225C9B8, 0x00000FA4);
    // add r2, #0xcc
    Camera_SetPerspectiveClippingPlane((1 << 0xc), (0xe1 << 0xe), *((u32*)r5));
    // add r0, #0xcc
    Camera_SetStaticPtr(*((u32*)r5));
    // add r0, #0xcc
    Camera_GetPerspectiveAngle(*((u32*)r5));
    // add r0, #0xcc
    Camera_GetDistance(*((u32*)r5));
    // add r0, sp, #0xc
    // str r0, [sp]
    // add r3, sp, #0x10
    sub_02020E10(r4, r0, 0x00001555);
    // ldr r1, [sp, #0x10]
    // add r0, #0xd0
    // str r1, [r0]
    // ldr r0, [sp, #0xc]
    // add r5, #0xd4
    // str r0, [r5]
}




void ov89_02259BA0(void) {
}




void ov89_02259BAC(void) {
    // add r0, #0xd8
    // add r0, #0xe8
    // add r1, #0xd8
    // add r0, #0xe8
    // add r0, #0xe8
    // add r4, #0xe8
}




void ov89_02259C00(void) {
}




void ov89_02259C0C(void) {
    // str r0, [sp, #0x34]
    // str r0, [sp, #0x38]
    // str r0, [sp, #0x3c]
    // str r0, [sp, #0x28]
    // str r0, [sp, #0x2c]
    // str r0, [sp, #0x30]
    // add r0, sp, #4
    MTX_Identity33_(0);
    Thunk_G3X_Reset();
    // add r0, #0xcc
    Camera_SetStaticPtr(*((u32*)r4));
    // add r1, #0xcc
    Camera_ApplyPerspectiveType(0, *((u32*)r4));
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
    NNS_G3dGeBufferOP_N(0x11, 0, 0);
    // add r0, #0xe8
    sub_020181EC(r4);
    // add r0, r4, r0
    ov89_0225A5A4((0x65 << 2));
    // add r1, sp, #0
    // str r2, [sp]
    NNS_G3dGeBufferOP_N(0x12, 1);
}




void ov89_02259CD0(void) {
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, #0xb4
    AddWindowParameterized(*((u32*)(r0 + 8)), r0, 1, 2);
    // add r0, #0xb4
    FillWindowPixelBuffer(r6, 0xf);
    // add r4, #0x34
    // add r0, r7, r3
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, r1, r0
    // str r0, [sp, #0x10]
    // add r1, r4, r1
    AddWindowParameterized(*((u32*)(r6 + 8)), (0 << 4), 5, *((u8*)(ov89_0225C9CC + (0 << 1))));
    // add r0, r4, r0
    FillWindowPixelBuffer((r5 << 4), 0);
}




void ov89_02259D50(void) {
    // add r0, #0xb4
    // add r5, #0x34
    // add r5, #0x10
}




void ov89_02259D70(void) {
}




void ov89_02259D8C(void) {
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




void ov89_02259E10(void) {
}




void ov89_02259E18(void) {
}




void ov89_02259E28(void) {
}




void ov89_02259E48(void) {
    // add r0, r0, r1
}




void ov89_02259E50(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #4]
    // ldr r0, [sp]
    // strh r0, [r5]
    // add r5, #0xc
}




void ov89_02259EC4(void) {
    // str r1, [sp]
    // str r1, [sp, #4]
    // add r1, #0x30
    // add r1, r4, r1
    ov89_0225A49C((0x59 << 2), r1, *((u32*)(r0 + ((0x59 << 2) - 4))));
    // str r0, [sp, #0xc]
    ov45_0222EC7C(r6);
    // mvn r0, r0
    // add r0, r4, r3
    // mov ip, r0
    // mov r2, ip
    // add r2, r4, r1
    // add r3, #0x10
    // mov r2, ip
    // strh r0, [r2, r1]
    // add r1, r4, r1
    // strh r2, [r1, r0]
    // sub r0, #0x3c
    // add r7, r4, r0
    // str r0, [sp, #0x10]
    // ldr r2, [sp, #0x10]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    ov89_02259A3C(*((u16*)(r5 + 2)), *((u8*)(r5 + 8)), *((u32*)(*((u16*)r5) + *((u16*)r5))), *((u32*)(r4 + ((0x59 << 2) - 4))));
    // ldr r0, [sp, #0x10]
    ManagedSprite_SetDrawFlag(*((u32*)(r7 + r0)), 1);
    // add r0, #0x21
    // add r6, #0x22
    // str r0, [sp]
    // str r0, [sp, #4]
    PaletteData_FillPaletteInBuffer(*((u32*)(r4 + 0xc)), 1, 2, *((u16*)r5));
    PlaySE(0x000005EB);
    // ldr r0, [sp, #0xc]
}




void ov89_02259F9C(void) {
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x14]
    // add r0, sp, #0x24
    ov45_0222EC3C(0);
    // add r1, r6, r3
    // ldr r0, [sp, #0x28]
    // mvn r0, r0
    // str r1, [sp]
    // add r2, #0x34
    ov89_0225C724(*((u32*)(r6 + 0x30)), *((u32*)(r6 + 0x2c)), r6, *((u32*)*((u32*)r6)));
    GetBgTilemapBuffer(*((u32*)(r6 + 8)), 6);
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x1c]
    // add r4, r1, r0
    // add r0, r6, r0
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x1c]
    // ldr r1, [sp, #0x10]
    // add r0, r3, r0
    // ldr r0, [sp, #0x20]
    // add r1, r1, r3
    // add r0, r0, r3
    MIi_CpuCopy16(*((u16*)(ov89_0225CBD8 + *((u16*)(r4 + 4)))), ov89_0225CBD8, (*((u16*)(r4 + 4)) << 1), (*((u16*)(ov89_0225CBD8 + *((u16*)(r4 + 4)))) << 1));
    // add r0, r1, r0
    ScheduleBgTilemapBufferTransfer(*((u32*)(r6 + 8)), 6);
    // ldr r0, [sp, #0x18]
    // str r0, [sp, #0x18]
    // add r0, #0x34
    ov89_0225C818(r6, r7);
    // add r3, r6, r0
    // strh r1, [r3, r2]
    // add r0, #0x10
    // strh r1, [r3, r0]
    // add r0, r6, r0
    // sub r2, #0x2c
    ManagedSprite_SetDrawFlag(*((u32*)((r7 << 2) + 0x0000099C)), 0, 0x0000099C);
    // add r0, r3, r4
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(*((u32*)(r6 + 8)), 6, 0, ((*((u16*)(ov89_0225CBD8 + (r7 << 3))) << 0x18) >> 0x18));
    ScheduleBgTilemapBufferTransfer(*((u32*)(r6 + 8)), 6);
    // ldr r0, [sp, #0x14]
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x28]
    // ldrsh r1, [r3, r2]
    // add r3, r3, r2
    // ldrsh r2, [r3, r2]
    ManagedSprite_SetPositionXYWithSubscreenOffset(*((u32*)(r6 + 0x0000096C)), *((u32*)(r6 + (0x5b << 2))), 2, (0x11 << 0x10));
    ManagedSprite_SetDrawFlag(*((u32*)(r6 + 0x0000096C)), 1);
    // ldr r1, [sp, #0x28]
    // add r1, r6, r0
    // str r2, [r1, r0]
    // add r3, r6, r3
    // strb r0, [r6, r1]
    // ldr r0, [sp, #0x18]
    PlaySE(0x000005E4, 0x000008D3, (0 - 1), *((u32*)((0 << 2) + (0x17 << 4))));
    // ldr r0, [sp, #0x14]
    PlaySE(0x000005E4);
}




void ov89_0225A148(void) {
}




void ov89_0225A160(void) {
}




void ov89_0225A16C(void) {
    // add r3, sp, #0
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // add r1, #0x10
    // add r0, sp, #0
    // strh r1, [r0]
    *((u16*)((0x99 << 4) + 2)) = 0xb0;
    // add r2, sp, #0
    SpriteSystem_NewSprite(*((u32*)(r0 + 0x1c)), *((u32*)(r0 + 0x20)), r0);
    // add r2, r5, r1
    // str r0, [r2, r1]
    ov89_0225A1D8(r5, r6, (r2 + 4));
    PlaySE(0x000005E5);
}




void ov89_0225A1D8(void) {
    // add r0, #0x22
    // add r1, #0x22
    // add r4, #0x11
    // str r0, [sp]
    // add r0, r6, r1
    // add r1, r5, r1
}




void ov89_0225A21C(void) {
    // str r6, [r5, r0]
}




void ov89_0225A260(void) {
    // str r2, [sp, #0x18]
    // str r3, [sp, #0x1c]
    // ldr r4, [sp, #0x9c]
    // ldr r1, [sp, #0x1c]
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x18]
    // add r2, sp, #0x28
    // add r3, sp, #0x24
    // add r0, sp, #0x38
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x24]
    // ldr r0, [sp, #0x20]
    // add r1, sp, #0x38
    // str r3, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x90]
    // ldr r1, [sp, #0x1c]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // str r3, [sp, #0x10]
    // ldr r2, [sp, #0x18]
    // add r0, sp, #0x38
    // str r3, [sp, #0x14]
    // add r0, sp, #0x38
    // add r3, sp, #0x2c
    // ldr r0, [sp, #0xa4]
    // ldr r1, [sp, #0x28]
    // add r0, r1, r0
    // asr r0, r0, #1
    // sub r4, r4, r0
    // str r0, [sp, #0x48]
    // add r0, sp, #0x38
    // str r0, [sp, #0x4c]
    // str r0, [sp, #0x50]
    // ldr r1, [sp, #0x98]
    // str r0, [sp, #0x54]
    // ldr r0, [sp, #0x30]
    // str r1, [sp, #0x58]
    // str r0, [sp, #0x5c]
    // ldr r0, [sp, #0xa0]
    // str r4, [sp, #0x60]
    // sub r0, #8
    // str r0, [sp, #0x64]
    // str r0, [sp, #0x6c]
    // str r0, [sp, #0x70]
    // str r0, [sp, #0x74]
    // add r0, sp, #0x48
    // str r1, [sp, #0x68]
    // ldr r1, [sp, #0x94]
    // ldr r2, [sp, #0xa0]
    // sub r2, #8
    // add r0, sp, #0x38
    // str r6, [r5]
    // add r3, sp, #0x2c
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // ldr r0, [sp, #0x28]
}




void ov89_0225A354(void) {
}




void ov89_0225A368(void) {
    // asr r1, r4, #2
    // add r1, r4, r1
    // asr r5, r1, #3
    // str r4, [r6]
    // str r5, [r7]
}




void ov89_0225A398(void) {
    // add r2, #0x88
    // str r2, [r5, r1]
    // str r0, [r5, r1]
    // str r1, [r5, r0]
    // add r0, #8
    // sub r2, r2, r0
    // str r2, [r5, r0]
    // str r2, [r5, r0]
    // asr r1, r0, #8
    // sub r0, r0, r1
    // add r0, #0xb0
    // asr r7, r0, #0x10
    // asr r1, r1, #0x10
    ManagedSprite_SetPositionXYWithSubscreenOffset(*((u32*)(r0 + 0x00000924)), (0x10 << 0x10), r7, (0x11 << 0x10));
    // add r4, #0x20
}




void ov89_0225A41C(void) {
    GF_AssertFail(*((u32*)(r0 + (0 + 4))), *((u32*)(r0 + 0x000019D4)));
    // str r1, [r5, r0]
    // sub r0, r0, r4
    // str r0, [r5, r1]
    // add r1, #8
    // sub r2, r2, r0
    // asr r0, r2, #1
    // add r0, r2, r0
    // asr r0, r0, #2
    // str r0, [r5, r1]
}




void ov89_0225A468(void) {
    // bx lr
    // TODO: decompile
}




void ov89_0225A46C(void) {
    // ldr r3, _0225A474 ; =MI_CpuFill8
    // mov r1, #0
    // ldr r2, _0225A478 ; =0x00000744
    // bx r3
    // _0225A474: .word MI_CpuFill8
    // _0225A478: .word 0x00000744
    // TODO: decompile
}




void ov89_0225A47C(void) {
}




void ov89_0225A49C(void) {
    // add r6, #0xb4
    // ldr r6, [sp, #0x18]
    // str r6, [sp]
    // ldr r6, [sp, #0x1c]
    // add r5, #0xb4
    // str r6, [sp, #4]
    ov89_0225A7BC(0);
    // str r0, [r5, r4]
}




void ov89_0225A4F4(void) {
    // add r1, #0xb0
    ov89_0225BE84(r0);
    // blx r3
    // strb r1, [r7, r0]
    // add r0, #0xb4
    // and r0, r2
    // str r1, [r5, r0]
    // blx r2
    ov89_0225AC24(r7, *((u32*)r7), 0, (0xc * ((*((u32*)(*((u32*)r7) + (9 << 6))) << 0x10) >> 0x18)));
}




void ov89_0225A5A4(void) {
    // add r0, #0xb4
    // add r0, r7, r0
    // blx r2
    // add r1, #0x1c
    sub_020181EC(*((u32*)r0), *((u32*)r0), *((u32*)((0xc * ((*((u32*)(*((u32*)r0) + (9 << 6))) << 0x10) >> 0x18)) + 4)));
}




void ov89_0225A5EC(void) {
    // str r0, [sp, #0x10]
    // str r0, [sp, #0xc]
    // add r0, #0xb4
    // str r0, [r3, r4]
    // ldr r0, [sp, #0x10]
    // str r0, [sp, #0x10]
    // ldr r4, [sp, #0xc]
    // sub r4, r5, r4
    // add r5, r7, r4
    // str r0, [r5, r4]
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #0xc]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0xc]
    // ldr r0, [sp, #4]
    // sub r0, r1, r0
    // add r1, r7, r0
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x10]
    // str r0, [sp]
    // ldr r1, [sp]
    // add r3, r3, r6
    // blx r3
    // ldr r2, [sp]
    ov89_0225AFC0(*((u32*)(0x7f + (0xad << 2))), ((*((u32*)(*((u32*)(0x7f + (0xad << 2))) + (9 << 6))) << 0x10) >> 0x18), *((u32*)(0x7f + (0xad << 2))), *((u32*)(ov89_0225CDB0 + 8)));
    // and r0, r2
    // ldr r2, [sp]
    // str r0, [r4, r1]
    // ldr r2, [sp]
    ov89_0225AF10(r7, (*((u32*)(((*((u32*)(*((u32*)(r4 + (9 << 6))) + (9 << 6))) >> 0x18) << 0x18) + (9 << 6))) >> 0x18), ((*((u32*)(((*((u32*)(*((u32*)(r4 + (9 << 6))) + (9 << 6))) >> 0x18) << 0x18) + (9 << 6))) << 0x10) >> 0x18));
    // ldr r0, [sp, #8]
    // ldr r0, [sp, #0x10]
    // str r1, [sp, #8]
    // ldr r0, [sp, #4]
    // ldr r0, [sp, #0xc]
    // str r1, [sp, #4]
    // add r0, #0xb4
    ov89_0225AFC0(*((u32*)r7), *((u8*)(r7 + 0x0000073D)), ((*((u32*)(*((u32*)r7) + (9 << 6))) << 0x10) >> 0x18));
    ov89_0225AC24(r7, r4, r5);
    ov89_0225AF9C(r7);
}




void ov89_0225A760(void) {
    // str r1, [sp]
    // add r5, r6, r0
    DC_FlushRange(*((u32*)r5), *((u32*)(*((u32*)r5) + 4)));
    NNS_G3dTexLoad(*((u32*)r5), 1);
    NNS_G3dPlttLoad(*((u32*)r5), 1);
    // str r7, [r5]
    // ldr r0, [sp]
    // ldrsh r1, [r6, r1]
    SetMasterBrightness(0, ((0x1d << 6) + 2));
    // strb r1, [r6, r0]
}




void ov89_0225A7BC(void) {
    // str r1, [sp, #8]
    // str r3, [sp, #0xc]
    Heap_Alloc(0x7d, (0x91 << 2));
    MI_CpuFill8(0, (0x91 << 2));
    // and r1, r0
    // str r0, [r4, r2]
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // sub r2, #0x53
    // str r0, [r3]
    GF_AssertFail(*((u16*)(r4 + 2)), *((u32*)(r4 + (9 << 6))), (9 << 6), r4);
    *((u16*)(r4 + 2)) = 0x84;
    // ldr r0, [sp, #0x34]
    // str r4, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #8]
    // ldr r2, [sp, #0xc]
    // ldr r3, [sp, #0x30]
    // add r1, #0xc
    ov89_0225A878(0x84, r4);
    // add r0, #0x1c
    // add r1, #0xc
    sub_020181B0(r4, r4);
    // add r0, sp, #0x10
    // str r0, [sp]
    // add r3, sp, #0x14
    ov89_0225AC68(r7, *((u8*)(r5 + 9)), *((u8*)(r5 + 0xa)));
    // ldr r1, [sp, #0x14]
    // ldr r2, [sp, #0x10]
    // add r0, #0x1c
    sub_020182A8(r4, (1 << 0x10));
    // add r0, #0x1c
    sub_020182C4(r4, (1 << 0xc), (1 << 0xc), (1 << 0xc));
    // add r0, #0x1c
    sub_020182A0(r4, 0);
}




void ov89_0225A878(void) {
    // str r2, [sp]
    GfGfxLoader_LoadFromOpenNarc(r2, 0x1d, 0, 0x7d);
    // str r0, [r5]
    GF_AssertFail();
    NNS_G3dGetMdlSet(*((u32*)r5));
    *((u32*)(r5 + 4)) = r0;
    // add r1, #8
    // add r1, r1, r2
    // add r0, r0, r1
    *((u32*)(r5 + 8)) = 0;
    NNS_G3dGetTex(*((u32*)r5), *((u32*)0), *((u16*)(r0 + 0xe)));
    *((u32*)(r5 + 0xc)) = r0;
    // ldr r1, [sp, #0x24]
    // ldr r3, [sp, #0x20]
    // str r1, [sp]
    ov89_0225AA24(r4, r6);
    ov89_0225A9B4(*((u32*)(r5 + 0xc)));
    ov89_0225A958(r7, *((u32*)(r5 + 0xc)));
    // add r1, sp, #8
    // add r2, sp, #4
    NNS_G3dTexReleaseTexKey(*((u32*)(r5 + 0xc)));
    // ldr r0, [sp, #8]
    // blx r1
    // ldr r0, [sp, #4]
    // blx r1
    NNS_G3dPlttReleasePlttKey(*((u32*)(r5 + 0xc)), *((u32*)NNS_GfdDefaultFuncFreeTexVram));
    // blx r1
    Heap_Free(*((u32*)r5), *((u32*)NNS_GfdDefaultFuncFreePlttVram));
    // strb r0, [r5]
    GF3dRender_BindModelSet(*((u32*)(r5 + 1)), *((u32*)((r5 + 1) + 0xc)));
}




void ov89_0225A958(void) {
    // add r2, r0, r2
    // str r1, [r2, r0]
}




void ov89_0225A988(void) {
    // add r1, r0, r1
    // str r2, [r1, r0]
}




void ov89_0225A9B4(void) {
    *((u32*)(r0 + 8)) = 0;
    NNS_G3dTexGetRequiredSize(0);
    NNS_G3dPlttGetRequiredSize(r5);
    // blx r3
    // and r1, r2
    // blx r3
    // blx r1
    NNS_G3dTexSetTexKey(r5, r4, 0, *((u32*)NNS_GfdDefaultFuncAllocPlttVram));
    NNS_G3dPlttSetPlttKey(r5, r6);
}




void ov89_0225AA24(void) {
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x38]
    // str r3, [sp, #8]
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #4]
    // add r0, r0, r1
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp, #8]
    // str r2, [sp]
    // add r1, sp, #0x20
    // str r0, [sp, #0x18]
    // str r0, [sp]
    // add r1, sp, #0x20
    // str r0, [sp, #0x18]
    // ldr r1, [sp, #0x1c]
    // ldr r0, [sp, #0x20]
    // ldr r2, [sp, #0x1c]
    // str r1, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x10]
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0225AAA8: ; jump table
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp, #0xc]
    // add r1, #0x80
    // ldr r1, [sp, #0xc]
    // ldr r2, [sp, #0x1c]
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp, #0xc]
    // add r1, #0xa0
    // ldr r1, [sp, #0xc]
    // add r1, #0x20
    // ldr r0, [sp, #0x1c]
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp, #0xc]
    // ldr r1, [sp, #0xc]
    // add r1, #0x40
    // ldr r2, [sp, #0x1c]
    // add r2, #0x20
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp, #0xc]
    // add r1, #0x20
    // ldr r1, [sp, #0xc]
    // add r1, #0x60
    // ldr r2, [sp, #0x1c]
    // add r2, #0x22
    // mov ip, r5
    // tst r3, r4
    // lsl r3, r0
    // strh r3, [r2]
    // tst r3, r4
    // lsl r3, r4
    // strh r3, [r2]
    // mov r0, ip
    // mov ip, r0
    // ldr r0, [sp, #0x10]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #8]
    // ldr r0, [sp, #4]
    // add r0, r0, r1
    // ldr r0, [sp, #0x18]
}




void ov89_0225AB64(void) {
    // str r0, [sp]
    // str r0, [sp, #8]
    // str r0, [sp, #4]
    // ldr r1, [sp]
    // ldr r0, [sp, #8]
    // add r0, r1, r0
    // ldr r1, [sp, #4]
    // ldr r2, [sp]
    // ldr r1, [sp, #8]
    // add r1, r2, r1
    // ldr r3, [sp, #4]
    // ldr r4, [sp]
    // ldr r0, [sp, #8]
    // add r4, r4, r0
    // lsr r6, r1
    // and r6, r5
    // lsl r6, r2
    // stmia r4!, {r0}
    // ldr r2, [sp]
    // ldr r0, [sp, #8]
    // add r0, r2, r0
    // add r0, #0x3c
    // ldr r1, [sp, #4]
    // mov ip, r0
    // mov r2, ip
    // lsr r5, r4
    // and r5, r6
    // lsl r5, r3
    // str r0, [r2]
    // ldr r0, [sp, #4]
}




void ov89_0225AC10(void) {
}




void ov89_0225AC24(void) {
    // add r0, r5, r0
    // add r0, #0xb4
    // str r1, [r0]
}




void ov89_0225AC68(void) {
    // asr r2, r1, #3
    // add r2, r1, r2
    // asr r3, r2, #4
    // ldr r4, [sp, #0x10]
    // str r7, [r5]
    // mov ip, r2
    // sub r6, r6, r2
    // ror r6, r1
    // add r1, r2, r6
    // sub r3, r2, r7
    // asr r2, r3, #3
    // add r2, r3, r2
    // asr r2, r2, #4
    // mov r1, ip
    // add r1, r1, r2
    // str r1, [r5]
    // asr r1, r0, #3
    // add r1, r0, r1
    // asr r6, r1, #4
    // str r3, [r4]
    // sub r7, r7, r1
    // ror r7, r0
    // add r0, r1, r7
    // sub r3, r1, r3
    // asr r1, r3, #3
    // add r1, r3, r1
    // asr r1, r1, #4
    // add r0, r2, r1
    // str r0, [r4]
}




void ov89_0225AD00(void) {
    // lsl r4, r1
    // tst r2, r4
    // str r3, [r0, r2]
    // lsl r4, r5
    // tst r2, r4
    // str r3, [r0, r2]
}




void ov89_0225AD64(void) {
    // lsl r4, r1
    // eor r1, r4
    // and r1, r5
    // str r1, [r0, r2]
    // sub r1, #0x20
    // lsl r4, r1
    // eor r1, r4
    // and r1, r5
    // str r1, [r0, r2]
}




void ov89_0225ADA4(void) {
    ov89_0225C8BC(*((u16*)(r1 + 2)), *((u8*)(r1 + 8)));
    GF_AssertFail();
    // add r1, sp, #0x14
    // add r2, sp, #0x10
    // add r3, sp, #0xc
    sub_020182B0(r4);
    // ldr r2, [sp, #0x14]
    // add r1, r2, r1
    // str r1, [r5]
    // ldr r2, [sp, #0x14]
    // add r1, r2, r1
    *((u32*)(r5 + 4)) = *((u32*)(ov89_0225CD40 + (r7 << 4)));
    // ldr r2, [sp, #0x10]
    // add r1, r2, r1
    *((u32*)(r5 + 8)) = *((u32*)(ov89_0225CD44 + (r7 << 4)));
    // ldr r2, [sp, #0x10]
    // add r0, r2, r0
    *((u32*)(r5 + 0xc)) = *((u32*)(ov89_0225CD48 + (r7 << 4)));
    // add r1, sp, #8
    // add r2, sp, #4
    // add r3, sp, #0
    sub_020182CC(r4, ov89_0225CD48);
    // sub r4, r1, r0
    // ldr r0, [sp, #8]
    // asr r1, r0, #0x1f
    // asr r6, r4, #0x1f
    _ll_mul(*((u32*)r5), *((u32*)(r5 + 4)), 0x64, 0);
    _ll_sdiv((1 << 0xc), 0);
    _ll_mul(r4, r6);
    _ll_sdiv(0x64, 0);
    // sub r0, r0, r4
    // sbc r1, r6
    _ll_sdiv(2, 0);
    // add r1, r1, r0
    *((u32*)(r5 + 4)) = *((u32*)(r5 + 4));
    // sub r0, r1, r0
    // str r0, [r5]
    // sub r4, r1, r0
    // ldr r0, [sp, #4]
    // asr r6, r4, #0x1f
    // asr r1, r0, #0x1f
    _ll_mul(*((u32*)(r5 + 0xc)), *((u32*)(r5 + 8)), 0x64, 0);
    _ll_sdiv((1 << 0xc), 0);
    _ll_mul(r4, r6);
    _ll_sdiv(0x64, 0);
    // sub r0, r0, r4
    // sbc r1, r6
    _ll_sdiv(2, 0);
    // add r1, r1, r0
    *((u32*)(r5 + 8)) = *((u32*)(r5 + 8));
    // sub r0, r1, r0
    *((u32*)(r5 + 0xc)) = r0;
}




void ov89_0225AEA8(void) {
    // ldr r3, [r0]
    // ldr r2, [r1, #4]
    // cmp r3, r2
    // bgt _0225AECC
    // ldr r3, [r1]
    // ldr r2, [r0, #4]
    // cmp r3, r2
    // bgt _0225AECC
    // ldr r3, [r0, #8]
    // ldr r2, [r1, #0xc]
    // cmp r3, r2
    // blt _0225AECC
    // ldr r1, [r1, #8]
    // ldr r0, [r0, #0xc]
    // cmp r1, r0
    // blt _0225AECC
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // TODO: decompile
}




void ov89_0225AED0(void) {
    // add r2, r0, r2
    // and r3, r5
    // str r0, [r1, r4]
    // strb r0, [r2]
    *((u8*)(0x0000053C + 1)) = (*((u8*)(0x0000053C + 1)) + 1);
    GF_AssertFail(((*((u8*)(0x0000053C + 1)) + 1) + 1), (0x0000053C + 4), 0x00FFFFFF);
}




void ov89_0225AF10(void) {
    // add r5, r3, r2
    // strb r1, [r5, r4]
    // add r5, r3, r1
    // strb r1, [r5, r4]
    // add r4, r3, r4
    // ldrsh r4, [r4, r5]
    // strb r0, [r3, r1]
    // add r3, #0xb0
    MI_CpuFill8(r0, 0, 4, r0);
}




void ov89_0225AF7C(void) {
}




void ov89_0225AF9C(void) {
    MI_CpuFill8(0, 0xb0);
    // strb r2, [r4, r0]
    // strb r2, [r4, r1]
    // strb r2, [r4, r0]
}




void ov89_0225AFC0(void) {
    // and r3, r4
    // str r1, [r0, r2]
    // add r0, #0x94
    // sub r2, #0x94
    MI_CpuFill8(0, 0, (9 << 6), *((u32*)(r0 + (9 << 6))));
}




void ov89_0225AFFC(void) {
}




void ov89_0225B010(void) {
    // add r0, #0x94
    // add r0, #0x94
    // str r2, [r0]
    // add r0, #0x94
    // add r4, #0x94
    // add r0, #0x1c
    // add r0, #0x1c
    // str r0, [r5, r1]
}




u8 ov89_0225B078(void) {
}




void ov89_0225B07C(void) {
    // add r4, #0x94
    // str r1, [r4]
    // add r0, #0xc0
    // sub r1, #0xc0
    // add r0, #0x1c
    // sub r0, #0xc0
    // str r0, [r4]
    // add r0, #0x1c
    // add r4, #0xc
    // add r0, #0x1c
}




void ov89_0225B100(void) {
    // add r0, #0x94
    // asr r0, r0, #8
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r4, #0x1c
}




void ov89_0225B148(void) {
}




void ov89_0225B164(void) {
    // add r4, #0x94
    // str r1, [sp]
    // add r0, #0x1c
    // add r1, sp, #0xc
    // add r2, sp, #8
    // add r3, sp, #4
    sub_020182B0(r1);
    // ldr r7, [sp]
    // add r7, #0xc
    sub_020181B0(r4, r7);
    // ldr r1, [sp, #0xc]
    // ldr r2, [sp, #8]
    // ldr r3, [sp, #4]
    sub_020182A8(r5);
    // add r5, #0x78
    // strb r1, [r4, r0]
    // ldr r0, [sp]
    // add r1, sp, #0xc
    // add r0, #0x1c
    // add r2, sp, #8
    // add r3, sp, #4
    sub_020182B0(0x0000016A, (*((u8*)(r4 + 0x0000016A)) + 1));
    // ldr r0, [sp]
    // ldr r1, [sp, #0xc]
    // ldr r3, [sp, #8]
    // sub r1, r1, r2
    // sub r2, r3, r2
    // ldr r3, [sp, #4]
    // add r0, #0x1c
    sub_020182A8((2 << 0xc));
    // add r1, sp, #0xc
    // add r2, sp, #8
    // add r3, sp, #4
    sub_020182B0(r4);
    // ldr r1, [sp, #0xc]
    // ldr r3, [sp, #8]
    // add r1, r1, r2
    // sub r2, r3, r2
    // ldr r3, [sp, #4]
    sub_020182A8(r4, (2 << 0xc));
    // add r0, #0x78
    // add r1, sp, #0xc
    // add r2, sp, #8
    // add r3, sp, #4
    sub_020182B0(r4);
    // ldr r1, [sp, #0xc]
    // ldr r3, [sp, #8]
    // sub r1, r1, r2
    // add r2, r3, r2
    // ldr r3, [sp, #4]
    // add r0, #0x78
    sub_020182A8(r4, (2 << 0xc));
    // add r0, #0xf0
    // add r1, sp, #0xc
    // add r2, sp, #8
    // add r3, sp, #4
    sub_020182B0(r4);
    // ldr r1, [sp, #0xc]
    // ldr r3, [sp, #8]
    // add r1, r1, r2
    // add r2, r3, r2
    // ldr r3, [sp, #4]
    // add r0, #0xf0
    sub_020182A8(r4, (2 << 0xc));
    // strh r1, [r4, r0]
    // ldr r0, [sp]
    // ldr r1, [sp]
    // add r0, #0x1c
    // add r2, r4, r2
    ov89_0225ADA4(1, (*((u16*)(r4 + (0x5a << 2))) + 1), (0x5b << 2), 0);
    // add r6, r4, r0
    // ldr r1, [sp]
    // add r2, r6, r2
    ov89_0225ADA4(r4, ((0 + 1) << 4), 0);
    // add r4, #0x78
}




void ov89_0225B298(void) {
    // add r5, #0x94
    // add r5, #0x78
    // add r6, #0x1c
}




void ov89_0225B2BC(void) {
    // add r6, #0x94
    // add r5, r1, r0
    // add r5, #0x10
}




void ov89_0225B2E8(void) {
    // add r0, #0x94
    // add r4, #0x94
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0225B30C: ; jump table
    // add r0, #0x1c
    sub_020182EC(r1, 2);
    // sub r0, r0, r1
    ov89_0225AB64(*((u32*)(r5 + 0x18)), ((*((u32*)(r5 + (9 << 6))) << 0x10) >> 0x18));
    ov89_0225A958(r7, *((u32*)(r5 + 0x18)));
    // add r0, r6, r0
    // str r2, [r5, r1]
    // str r0, [r4]
    // add r0, #0x1c
    sub_020182E0(r5, (((0x10 << 0xa) << 0x10) >> 0x10), 2);
    // str r2, [r5, r1]
    // add r0, #0x1c
    sub_020182EC(r5, 2, (*((u32*)(r5 + (9 << 6))) & ~(0xf0)));
    // sub r0, r0, r1
    // str r0, [r4]
    // add r0, #0x1c
    sub_020182E0(r5, 0, 2);
    *((u32*)(r4 + 4)) = (*((u32*)(r4 + 4)) + 1);
    *((u32*)(r4 + 4)) = 0;
    // str r0, [r4]
    // add r0, #0x1c
    // add r1, sp, #8
    // add r2, sp, #4
    // add r3, sp, #0
    sub_020182B0(r5);
    // ldr r1, [sp, #8]
    // ldr r3, [sp, #4]
    // sub r2, r3, r2
    // ldr r3, [sp]
    // add r0, #0x1c
    // add r1, r1, r6
    sub_020182A8(r5, ((3 << 0x10) >> 4));
    // add r2, r3, r2
    // ldr r3, [sp]
    // add r0, #0x1c
    // add r1, r1, r6
    sub_020182A8(r5, (r2 >> 4));
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    *((u32*)(r4 + 8)) = 0;
    // add r4, #0xc
    // add r0, #0x1c
    ov89_0225ADA4(r5, r5, r4, 0);
}




void ov89_0225B450(void) {
}




void ov89_0225B46C(void) {
    // add r0, #0x94
    // add r4, #0x94
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0225B490: ; jump table
    // add r0, #0x1c
    sub_020182EC(r1, 2);
    // add r0, r0, r1
    ov89_0225AB64(*((u32*)(r5 + 0x18)), ((*((u32*)(r5 + (9 << 6))) << 0x10) >> 0x18));
    // sub r0, r6, r0
    ov89_0225A958(r7, *((u32*)(r5 + 0x18)));
    // str r0, [r5, r1]
    // str r0, [r4]
    // add r0, #0x1c
    sub_020182E0(r5, r6, 2);
    // str r2, [r5, r1]
    // add r0, #0x1c
    sub_020182EC(r5, 2, (*((u32*)(r5 + (9 << 6))) & ~(0xf0)));
    // add r0, r0, r1
    // str r0, [r4]
    // add r0, #0x1c
    sub_020182E0(r5, 0, 2);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // add r0, #0x1c
    // add r1, sp, #8
    // add r2, sp, #4
    // add r3, sp, #0
    sub_020182B0(r5);
    // ldr r0, [sp, #4]
    *((u32*)(r4 + 0xc)) = r0;
    *((u32*)(r4 + 8)) = 0;
    // str r0, [r4]
    // add r0, #0x1c
    // add r1, sp, #8
    // add r2, sp, #4
    // add r3, sp, #0
    sub_020182B0(r5);
    // ldr r1, [sp, #8]
    // ldr r1, [sp, #4]
    // add r1, r1, r0
    *((u32*)(r4 + 4)) = *((u32*)(r4 + 4));
    // sub r0, r1, r0
    *((u32*)(r4 + 4)) = (0x5a << 0xe);
    GF_SinDegFX32(*((u32*)(r4 + 4)), *((u32*)(r4 + 4)));
    // ldr r3, [sp, #8]
    // sub r1, r3, r1
    // asr r3, r2, #0x1f
    // add r0, #0x1c
    // add r6, r2, r6
    // adc r3, r2
    // add r2, r7, r3
    // ldr r3, [sp]
    sub_020182A8(r5, (1 << 0xc), (((r3 << 0xf) | (r0 >> 0x11)) << 0x14), ((((1 << 0xc) >> 1) >> 0xc) | (((r3 << 0xf) | (r0 >> 0x11)) << 0x14)));
    // add r4, #0x10
    // add r0, #0x1c
    ov89_0225ADA4(r5, r5, r4, 0);
}




void ov89_0225B604(void) {
}




void ov89_0225B620(void) {
    // str r1, [sp]
    // add r4, #0x94
    ov89_0225AD00(0x0000016D, *((u8*)(r1 + 0x0000016D)));
    // strb r0, [r4, r1]
    // ldr r0, [sp]
    // add r1, sp, #0xc
    // add r0, #0x1c
    // add r2, sp, #8
    // add r3, sp, #4
    sub_020182B0((0x5b << 2));
    // ldr r7, [sp]
    // add r7, #0xc
    sub_020181B0(r4, r7);
    // ldr r1, [sp, #0xc]
    // ldr r2, [sp, #8]
    // ldr r3, [sp, #4]
    sub_020182A8(r5);
    sub_020182A0(r5, 0);
    // add r5, #0x78
    // strb r1, [r4, r0]
    // ldr r0, [sp]
    // add r1, sp, #0xc
    // add r0, #0x1c
    // add r2, sp, #8
    // add r3, sp, #4
    sub_020182B0(0x0000016D, (*((u8*)(r4 + 0x0000016D)) + 1));
    // ldr r1, [sp, #0xc]
    // ldr r3, [sp, #8]
    sub_020182A0(r4, 0, (5 << 0x10));
    // add r5, #0x78
    // ldr r0, [sp]
    // add r0, #0x1c
    sub_020182A0(0);
    // strb r1, [r4, r0]
    // ldr r0, [sp]
    // add r2, r3, r2
    // ldr r3, [sp, #4]
    // add r0, #0x1c
    sub_020182A8(0x0000016D, (*((u8*)(r4 + 0x0000016D)) + 1), (r2 >> 5));
    _s32_div_f(*((u16*)(r4 + (0x5a << 2))), 3);
    // ldr r3, [sp, #8]
    // add r2, r3, r2
    // ldr r1, [sp, #0xc]
    // ldr r3, [sp, #4]
    // add r0, r4, r0
    sub_020182A8((0x78 * *((u8*)(r4 + 0x0000016A))), *((u8*)(r4 + 0x0000016A)), (0xa << 0xa));
    // add r0, r4, r0
    sub_020182A0((0x78 * *((u8*)(r4 + 0x0000016A))), 1);
    // strb r1, [r4, r0]
    // strb r1, [r4, r0]
    // strh r1, [r4, r0]
    ov89_0225AD64((0x5a << 2), *((u8*)(r4 + ((*((u16*)(r4 + (0x5a << 2))) + 1) - 1))));
    // ldr r0, [sp]
    // ldr r1, [sp]
    // add r0, #0x1c
    // add r2, r4, r2
    ov89_0225ADA4(1, (0x17 << 4), 0);
}




void ov89_0225B784(void) {
    // add r7, #0x94
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r5, #0x78
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r6, #0x1c
}




void ov89_0225B810(void) {
}




void ov89_0225B82C(void) {
    // add r0, #0x94
    // add r4, #0x94
    // add r0, #0x1c
    // add r1, sp, #8
    // add r2, sp, #4
    // add r3, sp, #0
    sub_020182B0(r1);
    // ldr r0, [sp, #8]
    *((u32*)(r4 + 8)) = r0;
    // str r0, [r4]
    // add r0, #0x1c
    // add r1, sp, #8
    // add r2, sp, #4
    // add r3, sp, #0
    sub_020182B0(r5);
    // ldr r1, [sp, #8]
    // ldr r1, [sp, #4]
    // add r1, r1, r0
    *((u32*)(r4 + 4)) = *((u32*)(r4 + 4));
    // sub r0, r1, r0
    *((u32*)(r4 + 4)) = (0x5a << 0xe);
    GF_SinDegFX32(*((u32*)(r4 + 4)), *((u32*)(r4 + 4)));
    // asr r6, r2, #0x1f
    // add r0, #0x1c
    // add r3, r3, r7
    // adc r6, r2
    // add r1, r1, r3
    // ldr r3, [sp, #4]
    // sub r2, r3, r2
    // ldr r3, [sp]
    sub_020182A8(r5, *((u32*)(r4 + 8)), ((2 << 0xa) << 1), (((r0 << 0xf) >> 0xc) | (((r6 << 0xf) | (r0 >> 0x11)) << 0x14)));
    // add r4, #0xc
    // add r0, #0x1c
    ov89_0225ADA4(r5, r5, r4, 0);
}




void ov89_0225B900(void) {
}




void ov89_0225B91C(void) {
    // add r4, #0x94
    // str r0, [r4]
    // add r1, r1, r0
    // add r0, #0x1c
    // str r1, [r4]
    // add r4, #8
    // add r0, #0x1c
}




void ov89_0225B978(void) {
}




void ov89_0225B994(void) {
    // add r4, #0x94
    // str r1, [sp]
    // add r1, #0xf7
    // add r1, #0xf6
    // strb r0, [r1]
    // ldr r0, [sp]
    // add r1, sp, #0xc
    // add r0, #0x1c
    // add r2, sp, #8
    // add r3, sp, #4
    // ldr r7, [sp]
    // add r7, #0xc
    // ldr r1, [sp, #0xc]
    // ldr r2, [sp, #8]
    // ldr r3, [sp, #4]
    // add r5, #0x78
    // add r0, #0xf4
    // strh r1, [r0]
    // add r0, #0xf7
    // add r0, #0xf7
    // strb r1, [r0]
    // add r0, #0xf4
    // sub r0, #0xa0
    // add r5, #0x78
    // ldr r0, [sp]
    // add r0, #0x1c
    // add r0, #0xf7
    // add r0, #0xf7
    // strb r1, [r0]
    // add r0, #0xf4
    // add r0, #0xf4
    // sub r1, #0xa0
    // strh r1, [r0]
    // add r1, #0xf0
    // add r2, r3, r1
    // add r1, #0xf0
    // str r2, [r1]
    // add r1, #0xf0
    // add r0, #0xf0
    // sub r1, r2, r1
    // str r1, [r0]
    // add r0, #0xf0
    // asr r2, r0, #0x1f
    // add r2, r2, r0
    // adc r3, r1
    // ldr r0, [sp]
    // add r1, sp, #0xc
    // add r0, #0x1c
    // add r2, sp, #8
    // add r3, sp, #4
    // tst r0, r6
    // ldr r1, [sp, #0xc]
    // ldr r2, [sp, #8]
    // ldr r3, [sp, #4]
    // add r1, r1, r7
    // ldr r1, [sp, #0xc]
    // ldr r2, [sp, #8]
    // ldr r3, [sp, #4]
    // sub r1, r1, r7
    // add r5, #0x78
    // add r4, #0xf6
    // ldr r0, [sp]
    // ldr r1, [sp]
    // add r0, #0x1c
    // add r2, #0xf8
    // add r6, #0xf8
    // ldr r1, [sp]
    // add r2, r6, r2
    // add r4, #0x78
}




void ov89_0225BB28(void) {
    // add r5, #0x94
    // add r0, #0xf6
    // add r0, #0xf4
    // asr r0, r0, #8
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r5, #0x78
    // add r6, #0x1c
}




void ov89_0225BB88(void) {
    // add r6, #0x94
    // add r5, r1, r0
    // add r5, #0x10
}




void ov89_0225BBB4(void) {
    // add r4, #0x94
    // str r1, [sp]
    // add r1, #0xf7
    // add r1, #0xf6
    // strb r0, [r1]
    // ldr r0, [sp]
    // add r1, sp, #0xc
    // add r0, #0x1c
    // add r2, sp, #8
    // add r3, sp, #4
    // ldr r7, [sp]
    // add r7, #0xc
    // ldr r1, [sp, #0xc]
    // ldr r2, [sp, #8]
    // ldr r3, [sp, #4]
    // add r5, #0x78
    // add r0, #0xf4
    // strh r1, [r0]
    // add r0, #0xf7
    // add r0, #0xf7
    // strb r1, [r0]
    // add r0, #0xf4
    // sub r0, #0xa0
    // add r5, #0x78
    // ldr r0, [sp]
    // add r0, #0x1c
    // add r0, #0xf7
    // add r0, #0xf7
    // strb r1, [r0]
    // add r0, #0xf4
    // add r0, #0xf4
    // sub r1, #0xa0
    // strh r1, [r0]
    // add r1, #0xf0
    // add r2, r3, r1
    // add r1, #0xf0
    // str r2, [r1]
    // add r1, #0xf0
    // add r0, #0xf0
    // sub r1, r2, r1
    // str r1, [r0]
    // add r0, #0xf0
    // asr r2, r0, #0x1f
    // add r2, r2, r0
    // adc r3, r1
    // ldr r0, [sp]
    // add r1, sp, #0xc
    // add r0, #0x1c
    // add r2, sp, #8
    // add r3, sp, #4
    // tst r0, r6
    // ldr r2, [sp, #8]
    // ldr r1, [sp, #0xc]
    // ldr r3, [sp, #4]
    // add r2, r2, r7
    // ldr r2, [sp, #8]
    // ldr r1, [sp, #0xc]
    // ldr r3, [sp, #4]
    // sub r2, r2, r7
    // add r5, #0x78
    // add r4, #0xf6
    // ldr r0, [sp]
    // ldr r1, [sp]
    // add r0, #0x1c
    // add r2, #0xf8
    // add r6, #0xf8
    // ldr r1, [sp]
    // add r2, r6, r2
    // add r4, #0x78
}




void ov89_0225BD48(void) {
    // add r5, #0x94
    // add r0, #0xf6
    // add r0, #0xf4
    // asr r0, r0, #8
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r5, #0x78
    // add r6, #0x1c
}




void ov89_0225BDA8(void) {
    // add r6, #0x94
    // add r5, r1, r0
    // add r5, #0x10
}




void ov89_0225BDD4(void) {
    // add r4, #0x94
    // str r0, [r4]
    // add r2, r1, r0
    // str r2, [r4]
    // add r0, #0x1c
    // sub r0, r1, r0
    // asr r0, r1, #0xb
    // add r0, r1, r0
    // asr r0, r0, #0xc
    // neg r5, r0
    // add r0, #0x1c
    // add r1, sp, #8
    // add r2, sp, #4
    // add r3, sp, #0
    // ldr r2, [sp, #4]
    // ldr r1, [sp, #8]
    // ldr r3, [sp]
    // add r0, #0x1c
    // add r2, r2, r5
    // add r4, #8
    // add r0, #0x1c
}




void ov89_0225BE68(void) {
}




void ov89_0225BE84(void) {
    // mvn r0, r0
    // ldrsh r5, [r1, r3]
    // add r2, r5, r2
    *((u16*)(r1 + 2)) = (2 << 8);
    // ldrsh r5, [r1, r3]
    *((u16*)(r1 + 2)) = (2 << 0xa);
    // strb r2, [r1]
    // strb r3, [r4, r2]
    // ldrsh r1, [r1, r3]
    // asr r1, r1, #8
    // strh r3, [r4, r0]
    // ldrsh r5, [r1, r3]
    // sub r2, r5, r2
    *((u16*)(r1 + 2)) = (2 << 8);
    // ldrsh r2, [r1, r3]
    *((u16*)(r1 + 2)) = 0;
    *((u8*)(r1 + 1)) = (*((u8*)(r1 + 1)) + 1);
    // strb r3, [r1]
    // strb r2, [r1]
    // strb r3, [r4, r2]
    // ldrsh r1, [r1, r3]
    // asr r1, r1, #8
    // strh r3, [r4, r0]
    // strb r0, [r4, r1]
}




void ov89_0225BF34(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0225BF4C: ; jump table
    Camera_GetDistance(r2);
    // str r0, [r4]
    *((u8*)(r4 + 6)) = (*((u8*)(r4 + 6)) + 1);
    PlaySE(0x000005D5);
    Camera_AdjustDistance(0xFFFFE556, r5);
    // ldrsh r1, [r4, r0]
    *((u16*)(r4 + 4)) = (r1 + 1);
    // ldrsh r0, [r4, r0]
    *((u16*)(r4 + 4)) = 0;
    *((u8*)(r4 + 6)) = (*((u8*)(r4 + 6)) + 1);
    // ldrsh r1, [r4, r0]
    *((u16*)(r4 + 4)) = ((r1 + 1) + 1);
    // ldrsh r0, [r4, r0]
    *((u16*)(r4 + 4)) = 0;
    *((u8*)(r4 + 6)) = (*((u8*)(r4 + 6)) + 1);
    Camera_AdjustDistance(0x00008555, r5);
    // ldrsh r1, [r4, r0]
    *((u16*)(r4 + 4)) = (r1 + 1);
    // ldrsh r0, [r4, r0]
    Camera_GetDistance(r5, (r1 + 1));
    Camera_SetDistance(*((u32*)r4), r5);
}




void ov89_0225BFE4(void) {
    // add r5, #8
    PlaySE(0x000005D5);
    *((u8*)(r5 + 0xc)) = (*((u8*)(r5 + 0xc)) + 1);
    *((u8*)(r5 + 0xd)) = (*((u8*)(r5 + 0xd)) + 1);
    // sub r1, r1, r0
    // sub r1, r0, r1
    *((u32*)(r5 + 4)) = (3 << 0xc);
    // str r0, [r5]
    // sub r0, r1, r0
    // str r0, [r5]
    // sub r0, r0, r1
    // neg r0, r0
    // str r0, [r5]
    // sub r0, r0, r1
    // str r0, [r5]
    *((u32*)(r5 + 4)) = (1 << 0xc);
    // str r0, [r5]
    *((u8*)(r5 + 0xd)) = 0;
    *((u8*)(r5 + 0xe)) = (*((u8*)(r5 + 0xe)) + 1);
    *((u8*)(r5 + 0xc)) = (*((u8*)(r5 + 0xc)) + 1);
    Camera_SetLookAtCamUp(r5, r4, (1 << 0xc));
}




void ov89_0225C090(void) {
    // add r0, sp, #8
    // strh r1, [r0]
    *((u16*)(r0 + 2)) = 0;
    *((u16*)(r0 + 4)) = 0;
    // add r4, #0x18
    *((u16*)(r0 + 6)) = 0;
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0225C0B8: ; jump table
    // add r0, sp, #0
    Camera_GetAngle(r2);
    // add r0, sp, #0
    // strh r1, [r4]
    *((u16*)(r4 + 2)) = *((u16*)(r0 + 2));
    *((u16*)(r4 + 4)) = *((u16*)(r0 + 4));
    *((u16*)(r4 + 6)) = *((u16*)(r0 + 6));
    *((u32*)(r4 + 8)) = *((u16*)(r4 + 2));
    *((u8*)(r4 + 0xe)) = (*((u8*)(r4 + 0xe)) + 1);
    PlaySE(0x000005D5, *((u16*)(r0 + 4)));
    // add r1, sp, #0
    // sub r2, r2, r0
    *((u16*)(r1 + 0xa)) = *((u16*)(r1 + 0xa));
    // sub r0, r1, r0
    *((u32*)(r4 + 8)) = (1 << 0xc);
    // add r0, sp, #8
    Camera_AdjustAnglePos((1 << 0xc), r5, *((u16*)(r1 + 0xa)));
    // sub r0, r1, r0
    *((u8*)(r4 + 0xe)) = (*((u8*)(r4 + 0xe)) + 1);
    // ldrsh r1, [r4, r0]
    *((u16*)(r4 + 0xc)) = (*((u16*)(r4 + 2)) + 1);
    // ldrsh r0, [r4, r0]
    *((u8*)(r4 + 0xe)) = (*((u8*)(r4 + 0xe)) + 1);
    // add r2, sp, #0
    // add r3, r3, r1
    *((u16*)(*((u32*)(r4 + 8)) + 0xa)) = *((u16*)(*((u32*)(r4 + 8)) + 0xa));
    // add r1, r2, r1
    *((u32*)(r4 + 8)) = (2 << 8);
    Camera_AdjustAnglePos((*((u8*)(r4 + 0xe)) + 1), r5, *((u32*)(r4 + 8)), *((u16*)(*((u32*)(r4 + 8)) + 0xa)));
    Camera_SetAnglePos(r4, r5);
}




void ov89_0225C168(void) {
    // add r0, sp, #8
    // strh r1, [r0]
    *((u16*)(r0 + 2)) = 0;
    *((u16*)(r0 + 4)) = 0;
    // add r4, #0x28
    *((u16*)(r0 + 6)) = 0;
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0225C190: ; jump table
    // add r0, sp, #0
    Camera_GetAngle(r2);
    // add r0, sp, #0
    // strh r1, [r4]
    *((u16*)(r4 + 2)) = *((u16*)(r0 + 2));
    *((u16*)(r4 + 4)) = *((u16*)(r0 + 4));
    *((u16*)(r4 + 6)) = *((u16*)(r0 + 6));
    *((u32*)(r4 + 8)) = *((u16*)(r4 + 2));
    *((u8*)(r4 + 0xe)) = (*((u8*)(r4 + 0xe)) + 1);
    PlaySE(0x000005D5, *((u16*)(r0 + 4)));
    // add r1, sp, #0
    // add r2, r2, r0
    *((u16*)(r1 + 0xa)) = *((u16*)(r1 + 0xa));
    // add r0, r1, r0
    *((u32*)(r4 + 8)) = (1 << 0xc);
    // add r0, sp, #8
    Camera_AdjustAnglePos((1 << 0xc), r5, *((u16*)(r1 + 0xa)));
    // add r0, r1, r0
    *((u8*)(r4 + 0xe)) = (*((u8*)(r4 + 0xe)) + 1);
    // ldrsh r1, [r4, r0]
    *((u16*)(r4 + 0xc)) = (*((u16*)(r4 + 2)) + 1);
    // ldrsh r0, [r4, r0]
    *((u8*)(r4 + 0xe)) = (*((u8*)(r4 + 0xe)) + 1);
    // add r2, sp, #0
    // sub r3, r3, r1
    *((u16*)(*((u32*)(r4 + 8)) + 0xa)) = *((u16*)(*((u32*)(r4 + 8)) + 0xa));
    // sub r1, r2, r1
    *((u32*)(r4 + 8)) = (2 << 8);
    Camera_AdjustAnglePos((*((u8*)(r4 + 0xe)) + 1), r5, *((u32*)(r4 + 8)), *((u16*)(*((u32*)(r4 + 8)) + 0xa)));
    Camera_SetAnglePos(r4, r5);
}




void ov89_0225C240(void) {
    // add r0, sp, #8
    // strh r1, [r0]
    *((u16*)(r0 + 2)) = 0;
    *((u16*)(r0 + 4)) = 0;
    // add r4, #0x38
    *((u16*)(r0 + 6)) = 0;
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0225C268: ; jump table
    // add r0, sp, #0
    Camera_GetAngle(r2);
    // add r0, sp, #0
    // strh r1, [r4]
    *((u16*)(r4 + 2)) = *((u16*)(r0 + 2));
    *((u16*)(r4 + 4)) = *((u16*)(r0 + 4));
    *((u16*)(r4 + 6)) = *((u16*)(r0 + 6));
    *((u32*)(r4 + 8)) = *((u16*)r4);
    PlaySE(0x000005D5, *((u16*)(r0 + 4)));
    *((u8*)(r4 + 0xe)) = (*((u8*)(r4 + 0xe)) + 1);
    // add r1, sp, #0
    // add r2, r2, r0
    *((u16*)(r1 + 8)) = *((u16*)(r1 + 8));
    // add r0, r1, r0
    *((u32*)(r4 + 8)) = 0x00000AAA;
    // add r0, sp, #8
    Camera_AdjustAnglePos(0x00000AAA, r5, *((u16*)(r1 + 8)));
    // add r0, r1, r0
    *((u8*)(r4 + 0xe)) = (*((u8*)(r4 + 0xe)) + 1);
    // ldrsh r1, [r4, r0]
    *((u16*)(r4 + 0xc)) = (*((u16*)r4) + 1);
    // ldrsh r0, [r4, r0]
    *((u8*)(r4 + 0xe)) = (*((u8*)(r4 + 0xe)) + 1);
    // add r2, sp, #0
    // sub r3, r3, r1
    *((u16*)(*((u32*)(r4 + 8)) + 8)) = *((u16*)(*((u32*)(r4 + 8)) + 8));
    // sub r1, r2, r1
    *((u32*)(r4 + 8)) = (2 << 8);
    Camera_AdjustAnglePos((*((u8*)(r4 + 0xe)) + 1), r5, *((u32*)(r4 + 8)), *((u16*)(*((u32*)(r4 + 8)) + 8)));
    Camera_SetAnglePos(r4, r5);
}




void ov89_0225C31C(void) {
    // add r1, sp, #8
    // strh r0, [r1]
    *((u16*)(r1 + 2)) = 0;
    *((u16*)(r1 + 4)) = 0;
    // add r4, #0x48
    *((u16*)(r1 + 6)) = 0;
    // add r0, sp, #0
    Camera_GetAngle(*((u8*)(r1 + 0xd)), r2);
    // add r0, sp, #0
    // strh r1, [r4]
    *((u16*)(r4 + 2)) = *((u16*)(r0 + 2));
    *((u16*)(r4 + 4)) = *((u16*)(r0 + 4));
    *((u16*)(r4 + 6)) = *((u16*)(r0 + 6));
    *((u8*)(r4 + 0xd)) = (*((u8*)(r4 + 0xd)) + 1);
    PlaySE(0x000005D5, *((u16*)(r0 + 4)));
    // add r2, r2, r1
    // add r0, #8
    *((u32*)(r4 + 8)) = *((u32*)(r4 + 8));
    // sub r1, r2, r1
    // str r1, [r0]
    *((u8*)(r4 + 0xc)) = (*((u8*)(r4 + 0xc)) + 1);
    *((u8*)(r4 + 0xd)) = (*((u8*)(r4 + 0xd)) + 1);
    *((u32*)(r4 + 8)) = 0;
    GF_SinDegFX32(*((u32*)(r4 + 8)), (0x5a << 0xe), *((u32*)r4));
    // add r1, sp, #0
    *((u16*)(r1 + 8)) = *((u16*)r4);
    // add r3, sp, #8
    *((u16*)(r1 + 0xa)) = *((u16*)(r4 + 2));
    *((u16*)(r1 + 0xc)) = *((u16*)(r4 + 4));
    *((u16*)(r1 + 0xe)) = *((u16*)(r4 + 6));
    // asr r2, r0, #0x1f
    // add r6, r6, r0
    // adc r2, r4
    *((u16*)(r1 + 0xa)) = (((r0 << 0xc) >> 0xc) | (((*((u16*)(r4 + 6)) << 0xc) | (r0 >> 0x14)) << 0x14));
    Camera_SetAngleTarget(r3, r5, (((r0 << 0xc) >> 0xc) | (((*((u16*)(r4 + 6)) << 0xc) | (r0 >> 0x14)) << 0x14)));
}




void ov89_0225C3E8(void) {
    // add r4, #0x58
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0225C402: ; jump table
    Camera_GetDistance(r2);
    // str r0, [r4]
    *((u8*)(r4 + 6)) = (*((u8*)(r4 + 6)) + 1);
    PlaySE(0x000005D5);
    Camera_AdjustDistance(0x00001AAA, r5);
    // ldrsh r1, [r4, r0]
    *((u16*)(r4 + 4)) = (r1 + 1);
    // ldrsh r0, [r4, r0]
    *((u16*)(r4 + 4)) = 0;
    *((u8*)(r4 + 6)) = (*((u8*)(r4 + 6)) + 1);
    // ldrsh r1, [r4, r0]
    *((u16*)(r4 + 4)) = ((r1 + 1) + 1);
    // ldrsh r0, [r4, r0]
    *((u16*)(r4 + 4)) = 0;
    *((u8*)(r4 + 6)) = (*((u8*)(r4 + 6)) + 1);
    Camera_AdjustDistance(0xFFFF7AAB, r5);
    // ldrsh r1, [r4, r0]
    *((u16*)(r4 + 4)) = (r1 + 1);
    // ldrsh r0, [r4, r0]
    Camera_GetDistance(r5, (r1 + 1));
    Camera_SetDistance(*((u32*)r4), r5);
}




void ov89_0225C498(void) {
    // add r1, sp, #0x18
    // str r0, [r1]
    *((u32*)(r1 + 4)) = 0;
    // add r4, #0x60
    *((u32*)(r1 + 8)) = 0;
    // add r0, sp, #0xc
    Camera_GetLookAtCamPos(*((u8*)(r1 + 0x1d)), r2);
    // add r3, sp, #0xc
    // ldmia r3!, {r0, r1}
    // add r2, #0xc
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // add r0, sp, #0
    Camera_GetLookAtCamTarget(*((u32*)r3), r5, r4);
    // add r3, sp, #0
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    *((u8*)(r4 + 0x1d)) = (*((u8*)(r4 + 0x1d)) + 1);
    PlaySE(0x000005D5, r4);
    // add r2, r2, r1
    // add r0, #0x18
    *((u32*)(r4 + 0x18)) = *((u32*)(r4 + 0x18));
    // sub r1, r2, r1
    // str r1, [r0]
    *((u8*)(r4 + 0x1c)) = (*((u8*)(r4 + 0x1c)) + 1);
    *((u8*)(r4 + 0x1d)) = (*((u8*)(r4 + 0x1d)) + 1);
    *((u32*)(r4 + 0x18)) = 0;
    GF_SinDegFX32(*((u32*)(r4 + 0x18)), (0x5a << 0xe), *((u32*)r4));
    // asr r1, r0, #0x1f
    // add r3, r3, r0
    // adc r1, r2
    // str r1, [sp, #0x18]
    Camera_SetLookAtCamTarget(r4, r5, 0, (r0 << 0x10));
    // add r4, #0xc
    Camera_SetLookAtCamPos(r4, r5);
    // add r0, sp, #0x18
    Camera_OffsetLookAtPosAndTarget(r5);
}




void ov89_0225C570(void) {
    // add r1, sp, #0x18
    // str r0, [r1]
    *((u32*)(r1 + 4)) = 0;
    // add r4, #0x80
    *((u32*)(r1 + 8)) = 0;
    // add r0, sp, #0xc
    Camera_GetLookAtCamPos(*((u8*)(r1 + 0x1d)), r2);
    // add r3, sp, #0xc
    // ldmia r3!, {r0, r1}
    // add r2, #0xc
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // add r0, sp, #0
    Camera_GetLookAtCamTarget(*((u32*)r3), r5, r4);
    // add r3, sp, #0
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    *((u8*)(r4 + 0x1d)) = (*((u8*)(r4 + 0x1d)) + 1);
    PlaySE(0x000005D5, r4);
    // add r2, r2, r1
    // add r0, #0x18
    *((u32*)(r4 + 0x18)) = *((u32*)(r4 + 0x18));
    // sub r1, r2, r1
    // str r1, [r0]
    *((u8*)(r4 + 0x1c)) = (*((u8*)(r4 + 0x1c)) + 1);
    *((u8*)(r4 + 0x1d)) = (*((u8*)(r4 + 0x1d)) + 1);
    *((u32*)(r4 + 0x18)) = 0;
    GF_SinDegFX32(*((u32*)(r4 + 0x18)), (0x5a << 0xe), *((u32*)r4));
    // asr r1, r0, #0x1f
    // add r3, r3, r0
    // adc r1, r2
    // str r1, [sp, #0x1c]
    Camera_SetLookAtCamTarget(r4, r5, 0, (r0 << 0xf));
    // add r4, #0xc
    Camera_SetLookAtCamPos(r4, r5);
    // add r0, sp, #0x18
    Camera_OffsetLookAtPosAndTarget(r5);
}




void ov89_0225C648(void) {
    // add r0, sp, #8
    // strh r1, [r0]
    *((u16*)(r0 + 2)) = 0;
    *((u16*)(r0 + 4)) = 0;
    // add r4, #0xa0
    *((u16*)(r0 + 6)) = 0;
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0225C670: ; jump table
    // add r0, sp, #0
    Camera_GetAngle(r2);
    // add r0, sp, #0
    // strh r1, [r4]
    *((u16*)(r4 + 2)) = *((u16*)(r0 + 2));
    *((u16*)(r4 + 4)) = *((u16*)(r0 + 4));
    *((u16*)(r4 + 6)) = *((u16*)(r0 + 6));
    *((u32*)(r4 + 8)) = *((u16*)r4);
    *((u8*)(r4 + 0xe)) = (*((u8*)(r4 + 0xe)) + 1);
    PlaySE(0x000005D5, *((u16*)(r0 + 4)));
    // add r1, sp, #0
    // sub r2, r2, r0
    *((u16*)(r1 + 8)) = *((u16*)(r1 + 8));
    // sub r0, r1, r0
    *((u32*)(r4 + 8)) = 0x00000AAA;
    // add r0, sp, #8
    Camera_AdjustAnglePos(0x00000AAA, r5, *((u16*)(r1 + 8)));
    // sub r0, r1, r0
    *((u8*)(r4 + 0xe)) = (*((u8*)(r4 + 0xe)) + 1);
    // ldrsh r1, [r4, r0]
    *((u16*)(r4 + 0xc)) = (*((u16*)r4) + 1);
    // ldrsh r0, [r4, r0]
    *((u8*)(r4 + 0xe)) = (*((u8*)(r4 + 0xe)) + 1);
    // add r2, sp, #0
    // add r3, r3, r1
    *((u16*)(*((u32*)(r4 + 8)) + 8)) = *((u16*)(*((u32*)(r4 + 8)) + 8));
    // add r1, r2, r1
    *((u32*)(r4 + 8)) = (2 << 8);
    Camera_AdjustAnglePos((*((u8*)(r4 + 0xe)) + 1), r5, *((u32*)(r4 + 8)), *((u16*)(*((u32*)(r4 + 8)) + 8)));
    Camera_SetAnglePos(r4, r5);
}




void ov89_0225C724(void) {
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x40]
    // str r1, [sp, #0x14]
    // str r3, [sp, #0x18]
    ov45_0222EC7C();
    // mvn r0, r0
    // ldr r0, [sp, #0x40]
    ov45_0222EC68(0);
    // mvn r1, r1
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #0x18]
    // ldr r1, [sp, #0x24]
    ov45_0222A578(0);
    GF_AssertFail();
    PlayerProfile_New(0x7d);
    ov45_0222A844(r7, r0, 0x7d);
    PlayerProfile_GetPlayerName_NewString(r6, 0x7d);
    // str r0, [sp, #0x1c]
    PlayerProfile_GetTrainerGender(r6);
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x14]
    // ldr r2, [sp, #0x1c]
    BufferString(2, 0, r0);
    // ldr r0, [sp, #0x10]
    NewString_ReadMsgData(0);
    // str r0, [sp, #0x20]
    String_New(0x40, 0x7d);
    // ldr r0, [sp, #0x14]
    // ldr r2, [sp, #0x20]
    StringExpandPlaceholders(r0);
    // add r0, r4, r5
    FillWindowPixelBuffer(0);
    // ldr r0, [sp, #0x18]
    // ldr r1, [sp, #0x24]
    ov45_0222AB28();
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r4, r5
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(0x00010200, 0, r7, 0);
    // add r0, r4, r5
    CopyWindowToVram();
    // ldr r0, [sp, #0x1c]
    String_Delete();
    // ldr r0, [sp, #0x20]
    String_Delete();
    String_Delete(r7);
    Heap_Free(r6);
}




void ov89_0225C818(void) {
    // add r0, r0, r1
}




void ov89_0225C830(void) {
}




void ov89_0225C84C(void) {
    TouchscreenHitbox_FindRectAtTouchNew(ov89_0225CE50);
    // add r1, r5, r1
    // add r1, #0xee
}




void ov89_0225C88C(void) {
    // ldr r3, _0225C8B0 ; =0x000001E7
    // cmp r0, r3
    // bne _0225C89A
    // cmp r1, #0
    // ble _0225C89A
    // mov r0, #0
    // bx lr
    // ldr r1, _0225C8B4 ; =0x000001ED
    // cmp r0, r1
    // bne _0225C8A8
    // cmp r2, #0
    // bne _0225C8A8
    // mov r0, #0
    // bx lr
    // lsl r1, r0, #2
    // ldr r0, _0225C8B8 ; =ov89_0225CE94
    // ldrb r0, [r0, r1]
    // bx lr
    // _0225C8B0: .word 0x000001E7
    // _0225C8B4: .word 0x000001ED
    // _0225C8B8: .word ov89_0225CE94
    // TODO: decompile
}




void ov89_0225C8BC(void) {
    // ldr r2, _0225C8D4 ; =0x000001E7
    // cmp r0, r2
    // bne _0225C8CA
    // cmp r1, #0
    // ble _0225C8CA
    // mov r0, #2
    // bx lr
    // lsl r1, r0, #2
    // ldr r0, _0225C8D8 ; =ov89_0225CE95
    // ldrb r0, [r0, r1]
    // bx lr
    // nop
    // _0225C8D4: .word 0x000001E7
    // _0225C8D8: .word ov89_0225CE95
    // TODO: decompile
}




void ov89_0225C8DC(void) {
    // ldr r3, _0225C8E8 ; =ov45_0222EE50
    // add r2, r0, #0
    // ldr r0, _0225C8EC ; =ov89_0225D64C
    // mov r1, #3
    // bx r3
    // nop
    // _0225C8E8: .word ov45_0222EE50
    // _0225C8EC: .word ov89_0225D64C
    // TODO: decompile
}




void ov89_0225C8F0(void) {
    // mvn r1, r1
}




void ov89_0225C91C(void) {
}




void ov89_0225C93C(void) {
}




void ov89_0225C960(void) {
}




void ov89_0225C988(void) {
}



