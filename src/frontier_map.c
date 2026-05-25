/* Decompiled from asm/frontier_map.s */
#include "global.h"

void FrontierMap_Init(void) {
    Frontier_GetLaunchArgs();
    Save_PlayerData_GetProfile(*((u32*)(r0 + 8)));
    // add r4, #0x20
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
    // strh r0, [r2]
    Heap_Create(3, 0x65, (9 << 0x10), *((u32*)0x04001000));
    Heap_Alloc(0x65, 0xc4);
    MI_CpuFill8(0, 0xc4);
    *((u32*)(r4 + 8)) = r6;
    // add r0, #0xc1
    // strb r5, [r0]
    // add r0, #0x70
    // strh r1, [r0]
    ov80_022392DC(0x65, 0x0000FFFF, (0 + 1), (r4 + 2));
    *((u32*)(r4 + 0xc)) = r0;
    PaletteData_Init(0x65);
    *((u32*)(r4 + 4)) = r0;
    PaletteData_SetAutoTransparent(1);
    PaletteData_AllocBuffers(*((u32*)(r4 + 4)), 0, (2 << 8), 0x65);
    PaletteData_AllocBuffers(*((u32*)(r4 + 4)), 1, (1 << 9), 0x65);
    PaletteData_AllocBuffers(*((u32*)(r4 + 4)), 2, (7 << 6), 0x65);
    PaletteData_AllocBuffers(*((u32*)(r4 + 4)), 3, (2 << 8), 0x65);
    BgConfig_Alloc(0x65);
    // str r0, [r4]
    GF_CreateVramTransferManager(0x40, 0x65);
    SetKeyRepeatTimers(4, 8);
    FrontierMap_SetVramBank(*((u32*)r4), r5);
    FrontierMap_LoadPaletteData(r4);
    ov80_02238FA0(r4);
    sub_020210BC();
    sub_02021148(4);
    ov80_02239384(r4);
    ov80_02239960(0x65);
    *((u32*)(r4 + 0x10)) = r0;
    ov80_02239004(r4, r5, r7);
    SysTask_CreateOnMainQueue(ov80_02238AB0, r4, 0x0000EA60);
    // add r1, #0x94
    // str r0, [r1]
    SysTask_CreateOnMainQueue(ov80_02238ABC, r4, 0x0000EE48);
    // add r1, #0x98
    // str r0, [r1]
    SysTask_CreateOnMainQueue(FrontierMap_Update, r4, 0x00013880);
    // add r1, #0x9c
    // str r0, [r1]
    GfGfx_BothDispOn(r4);
    GfGfx_EngineATogglePlanes(0x10, 1);
    GfGfx_EngineBTogglePlanes(0x10, 1);
    ov80_0222ACA0(r5, 3);
    Sound_SetFieldBGM(((r0 << 0x10) >> 0x10));
    ov80_0222ACA0(r5, 3);
    sub_02055198(0, ((r0 << 0x10) >> 0x10));
    TextFlags_SetAutoScrollParam(1);
    TextFlags_SetCanABSpeedUpPrint(0);
    TextFlags_SetCanTouchSpeedUpPrint(0);
    Main_SetVBlankIntrCB(FrontierMap_VBlank, r4);
    SysTask_CreateOnVBlankQueue(ov80_02238AAC, r4, 0xa);
    // add r1, #0xa0
    // str r0, [r1]
    // add r2, #0xc1
    // add r1, #0x90
    ov80_0222AD9C(r4, r4, *((u8*)r4));
    sub_0203A880();
}




void FrontierMap_Free(void) {
    Frontier_GetLaunchArgs(*((u32*)(r0 + 8)));
    // add r2, #0xc1
    // add r1, #0x90
    ov80_0222ADB4(r4, r4, *((u8*)r4));
    ov80_0223927C(r4);
    GfGfx_EngineATogglePlanes(1, 0);
    GfGfx_EngineATogglePlanes(2, 0);
    FreeBgTilemapBuffer(*((u32*)r4), 1);
    FreeBgTilemapBuffer(*((u32*)r4), 2);
    FreeBgTilemapBuffer(*((u32*)r4), 3);
    ToggleBgLayer(4, 0);
    FreeBgTilemapBuffer(*((u32*)r4), 4);
    ov80_022393E8(r4);
    ov80_02239980(*((u32*)(r4 + 0x10)));
    GF_DestroyVramTransferManager();
    PaletteData_FreeBuffers(*((u32*)(r4 + 4)), 0);
    PaletteData_FreeBuffers(*((u32*)(r4 + 4)), 1);
    PaletteData_FreeBuffers(*((u32*)(r4 + 4)), 2);
    PaletteData_FreeBuffers(*((u32*)(r4 + 4)), 3);
    PaletteData_Free(*((u32*)(r4 + 4)));
    Heap_Free(*((u32*)r4));
    // add r0, #0x94
    SysTask_Destroy(*((u32*)r4));
    // add r0, #0x98
    SysTask_Destroy(*((u32*)r4));
    // add r0, #0x9c
    SysTask_Destroy(*((u32*)r4));
    // add r0, #0xa0
    SysTask_Destroy(*((u32*)r4));
    ov80_0223937C(*((u32*)(r4 + 0xc)));
    sub_02021238();
    Heap_Free(r4);
    // and r1, r0
    // str r1, [r2]
    // and r0, r1
    // str r0, [r2]
    Main_SetVBlankIntrCB(0, 0, 0x04001000);
    HBlankInterruptDisable();
    Heap_Destroy(0x65);
    TextFlags_SetCanABSpeedUpPrint(0);
    TextFlags_SetAutoScrollParam(0);
    TextFlags_SetCanTouchSpeedUpPrint(0);
    sub_0203A914();
    MIi_CpuClear16(0x00007FFF, (5 << 0x18), (2 << 8));
    MIi_CpuClear16(0x00007FFF, 0x05000200, (2 << 8));
    MIi_CpuClear16(0x00007FFF, 0x05000400, (2 << 8));
    MIi_CpuClear16(0x00007FFF, 0x05000600, (2 << 8));
    // strh r1, [r0]
    // strh r1, [r0]
}




void ov80_022389C4(void) {
}




void ov80_02238A18(void) {
    sub_02096864(*((u32*)(r0 + 8)));
    ov42_02228FE0(*((u32*)(r5 + 0x20)), *((u16*)r0), *((u8*)(r0 + 2)), 0x65);
    // add r6, sp, #0
    sub_0209686C(*((u32*)(r5 + 8)), 0);
    ov80_02239900(r6);
    ov80_02239510(r5, r6, r4);
    ov80_02239828(r5);
}




void FrontierMap_VBlank(void) {
    GF_RunVramTransferTasks();
    SpriteSystem_TransferOam();
    PaletteData_PushTransparentBuffers(*((u32*)(r4 + 4)));
    DoScheduledBgGpuUpdates(*((u32*)r4));
    // str r0, [r3, r1]
}




void ov80_02238AAC(void) {
    // bx lr
    // TODO: decompile
}




void ov80_02238AB0(void) {
}




void ov80_02238ABC(void) {
}




void FrontierMap_Update(void) {
    // add r0, #0x1c
    // tst r1, r4
}




void FrontierMap_Scroll(void) {
    // add r0, #0x20
    // add r1, #0x1c
    // add r4, #0x20
    // add r5, #0x1c
}




void ov80_02238B7C(void) {
    Frontier_GetLaunchArgs(*((u32*)(r0 + 8)));
    // add r0, #0x1c
    ov42_022293A8(r5);
    // ldrsh r1, [r5, r1]
    // add r0, r1, r0
    // asr r4, r0, #0x10
    // add r0, #0x1c
    ov42_022293B0(r5, 0xaa);
    // ldrsh r1, [r5, r1]
    // add r0, r1, r0
    // asr r6, r0, #0x10
    _fflt((r4 << 0xc), 0xa8);
    _fadd((0x3f << 0x18), r0);
    // str r0, [sp, #4]
    _fflt((r4 << 0xc));
    _fsub((0x3f << 0x18));
    // str r0, [sp, #4]
    _fflt((r6 << 0xc));
    _fadd((0x3f << 0x18), r0);
    // str r0, [sp]
    _fflt((r6 << 0xc));
    _fsub((0x3f << 0x18));
    // str r0, [sp]
    SpriteSystem_GetRenderer(*((u32*)(r5 + 0x34)));
    // str r0, [sp, #8]
    // ldr r0, [sp]
    _ffix();
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #4]
    _ffix();
    // ldr r0, [sp, #8]
    // ldr r1, [sp, #0xc]
    G2dRenderer_SetMainSurfaceCoords(r0);
    ScheduleSetBgPosText(*((u32*)r5), 3, 0, r6);
    ScheduleSetBgPosText(*((u32*)r5), 3, 3, r4);
    // add r0, #0x20
    ov80_0222ACA0(*((u8*)r7), 9);
    // add r7, #0x20
    ov80_0222ACA0(*((u8*)r7), 0xd);
    ScheduleSetBgPosText(*((u32*)r5), 2, 0, r6);
    ScheduleSetBgPosText(*((u32*)r5), 2, 3, r4);
}




void ov80_02238C78(void) {
    // add r1, sp, #0
    // add r4, sp, #0
    // add r1, sp, #8
    // add r6, sp, #0
    // add r4, sp, #8
}




void FrontierMap_SetVramBank(void) {
    ov80_0222ACA0(r1, 0);
    GfGfx_DisableEngineAPlanes();
    // add r3, sp, #0x2c
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // add r0, sp, #0x2c
    GfGfx_SetBanks((5 - 1));
    MIi_CpuClear32(0, (6 << 0x18), (2 << 0x12));
    MIi_CpuClear32(0, (0x62 << 0x14), (2 << 0x10));
    MIi_CpuClear32(0, (0x19 << 0x16), (1 << 0x12));
    MIi_CpuClear32(0, (0x66 << 0x14), (2 << 0x10));
    // add r3, sp, #0x1c
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r4, [sp, #0x20]
    SetBothScreensModesAndDisable(r3, r3);
    // add r3, sp, #0x54
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // add r1, sp, #0x74
    *((u8*)(r1 + 0xd)) = 0;
    // add r0, sp, #0x94
    *((u8*)(*((u32*)ov80_0223D600) + 9)) = 0;
    *((u8*)(r1 + 0x10)) = 0;
    *((u8*)(*((u32*)ov80_0223D600) + 0xc)) = 0;
    ov80_0222ACA0(r7, 4, 0);
    // add r0, sp, #0x94
    *((u8*)((r0 << 0x10) + 8)) = ((r0 << 0x10) >> 0x10);
    ov80_0222ACA0(r7, 9);
    // add r0, sp, #0x74
    *((u8*)(r0 + 0xc)) = r6;
    // add r2, sp, #0x54
    InitBgFromTemplate(r5, 1, 0);
    BgClearTilemapBufferAndCommit(r5, 1);
    BgSetPosTextAndCommit(r5, 1, 0, 0);
    BgSetPosTextAndCommit(r5, 1, 3, 0);
    // add r2, sp, #0x70
    InitBgFromTemplate(r5, 2, 0);
    BgClearTilemapBufferAndCommit(r5, 2);
    BgSetPosTextAndCommit(r5, 2, 0, 0);
    BgSetPosTextAndCommit(r5, 2, 3, 0);
    // add r2, sp, #0x8c
    InitBgFromTemplate(r5, 3, 0);
    BgClearTilemapBufferAndCommit(r5, 3);
    BgSetPosTextAndCommit(r5, 3, 0, 0);
    BgSetPosTextAndCommit(r5, 3, 3, 0);
    InitBgFromTemplate(r5, 1, 0);
    BgClearTilemapBufferAndCommit(r5, 1);
    BgSetPosTextAndCommit(r5, 1, 0, 0);
    BgSetPosTextAndCommit(r5, 1, 3, 0);
    // add r2, sp, #0x70
    InitBgFromTemplate(r5, 2, 2);
    BgClearTilemapBufferAndCommit(r5, 2);
    BgSetPosTextAndCommit(r5, 2, 0, 0);
    BgSetPosTextAndCommit(r5, 2, 3, 0);
    // add r2, sp, #0x8c
    InitBgFromTemplate(r5, 3, 2);
    BgClearTilemapBufferAndCommit(r5, 3);
    BgSetPosTextAndCommit(r5, 3, 0, 0);
    BgSetPosTextAndCommit(r5, 3, 3, 0);
    // strh r2, [r1]
    GfGfx_EngineATogglePlanes(1, 1, (*((u16*)0x04000008) & ~(3)));
    // add r3, sp, #0
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r5, 4, r3, 0);
    BgClearTilemapBufferAndCommit(r5, 4);
    BgSetPosTextAndCommit(r5, 4, 0, 0);
    BgSetPosTextAndCommit(r5, 4, 3, 0);
}




void FrontierMap_LoadPaletteData(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    PaletteData_LoadNarc(*((u32*)(r0 + 4)), 0x10, 7, 0x65);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    PaletteData_LoadNarc(*((u32*)(r4 + 4)), 0x10, 8, 0x65);
    Frontier_GetLaunchArgs(*((u32*)(r4 + 8)));
    Options_GetFrame(*((u32*)(r0 + 4)));
    // str r0, [sp]
    // str r0, [sp, #4]
    LoadUserFrameGfx2(*((u32*)r4), 1, 0x000003E2, 0xb);
    PaletteData_LoadPaletteSlotFromHardware(*((u32*)(r4 + 4)), 0, 0xb0, 0x20);
    // str r0, [sp]
    // str r0, [sp, #4]
    LoadUserFrameGfx1(*((u32*)r4), 1, 0x000003D9, 0xc);
    PaletteData_LoadPaletteSlotFromHardware(*((u32*)(r4 + 4)), 0, 0xc0, 0x20);
}




void ov80_02238FA0(void) {
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
}




void ov80_02239004(void) {
    ov42_02228010(0x20, 0x65);
    *((u32*)(r5 + 0x14)) = r0;
    ov42_02227EE0(0x10, 0x10, 0x65);
    *((u32*)(r5 + 0x18)) = r0;
    // add r0, #0x1c
    ov42_02229394(r5);
    SpriteManager_GetSpriteList(*((u32*)(r5 + 0x38)));
    ov80_0222A7EC(r6);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    ov42_02228F24(r7, *((u32*)(r5 + 4)), 0x20, r0);
    *((u32*)(r5 + 0x20)) = r0;
    // add r2, sp, #0x20
    // strb r0, [r2]
    ov80_0222ACA0(r4, 5, (r2 + 1), (ov80_0223D554 + 1));
    // add r1, sp, #0x18
    *((u8*)(r1 + 0x10)) = r0;
    ov80_0222ACA0(r4, 6);
    // add r1, sp, #0x18
    *((u8*)(r1 + 0x11)) = r0;
    ov80_0222ACA0(r4, 0xc);
    SpriteSystem_GetRenderer(*((u32*)(r5 + 0x34)));
    // add r2, sp, #0x20
    ov42_022293B8(*((u32*)r5), 0x65);
    *((u32*)(r5 + 0x24)) = r0;
    ov80_0222ACA0(r4, 9);
    ov80_0222ACA0(r4, 9);
    // add r1, sp, #0x18
    *((u8*)(r1 + 0x11)) = r0;
    *((u8*)(r1 + 9)) = 2;
    *((u8*)(r1 + 0xb)) = 1;
    *((u8*)(r1 + 0xc)) = 8;
    *((u8*)(r1 + 0xe)) = 1;
    SpriteSystem_GetRenderer(*((u32*)(r5 + 0x34)), 1);
    // add r2, sp, #0x20
    ov42_022293B8(*((u32*)r5), 0x65);
    *((u32*)(r5 + 0x28)) = r0;
    ov42_02229A40(0x80, 0x65);
    *((u32*)(r5 + 0x2c)) = r0;
    ov42_02229974(0x80, 0x65);
    *((u32*)(r5 + 0x30)) = r0;
    ov42_02227F48(*((u32*)(r5 + 0x18)), ov80_0223D654);
    ov80_0222ACA0(r4, 0);
    ov80_0222ACA0(r4, 5);
    // str r0, [sp, #0x10]
    NARC_New(0x65);
    ov80_0222ACA0(r4, 7);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharDataFromOpenNarc(r6, r0, *((u32*)r5), 3);
    ov80_0222ACA0(r4, 8);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // ldr r1, [sp, #0x10]
    PaletteData_LoadNarc(*((u32*)(r5 + 4)), 0, r0, 0x65);
    ov80_0222ACA0(r4, 8);
    // add r2, sp, #0x1c
    GfGfxLoader_GetPlttDataFromOpenNarc(r6, r0, 0x65);
    // ldr r1, [sp, #0x1c]
    // str r0, [sp, #0x14]
    DC_FlushRange(*((u32*)(r1 + 0xc)), *((u32*)(r1 + 8)));
    GX_BeginLoadBGExtPltt();
    // ldr r0, [sp, #0x1c]
    GX_LoadBGExtPltt(*((u32*)(r0 + 0xc)), (6 << 0xc), (2 << 0xc));
    GX_EndLoadBGExtPltt();
    // ldr r0, [sp, #0x14]
    Heap_Free();
    // str r1, [sp]
    // str r0, [sp, #4]
    PaletteData_FillPaletteInBuffer(*((u32*)(r5 + 4)), 0, 2, 0);
    ov80_0222ACA0(r4, 6);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnDataFromOpenNarc(r6, r0, *((u32*)r5), 3);
    ov80_0222ACA0(r4, 9);
    ov80_0222ACA0(r4, 0xa);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharDataFromOpenNarc(r6, r0, *((u32*)r5), 2);
    ov80_0222ACA0(r4, 9);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnDataFromOpenNarc(r6, r0, *((u32*)r5), 2);
    ov80_0222ACA0(r4, 0xb);
    // add r2, sp, #0x18
    GfGfxLoader_GetPlttDataFromOpenNarc(r6, r0, 0x65);
    // ldr r1, [sp, #0x18]
    DC_FlushRange(*((u32*)(r1 + 0xc)), *((u32*)(r1 + 8)));
    GX_BeginLoadBGExtPltt();
    // ldr r0, [sp, #0x18]
    GX_LoadBGExtPltt(*((u32*)(r0 + 0xc)), (1 << 0xe), ((1 << 0xe) >> 1));
    GX_EndLoadBGExtPltt();
    Heap_Free(r4);
    ScheduleBgTilemapBufferTransfer(*((u32*)r5), 3);
    NARC_Delete(r6);
}




void ov80_0223927C(void) {
    // add r5, #0x3c
}




void ov80_022392DC(void) {
}




void ov80_022392F8(void) {
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




void ov80_0223937C(void) {
}




void ov80_02239384(void) {
    SpriteSystem_Alloc(0x65);
    *((u32*)(r4 + 0x34)) = r0;
    SpriteSystem_Init(ov80_0223D5B8, ov80_0223D570, 0x20);
    G2dRenderer_SetObjCharTransferReservedRegion(1, 0x00200010);
    G2dRenderer_SetPlttTransferReservedRegion(1);
    SpriteManager_New(*((u32*)(r4 + 0x34)));
    *((u32*)(r4 + 0x38)) = r0;
    SpriteSystem_InitSprites(*((u32*)(r4 + 0x34)), *((u32*)(r4 + 0x38)), 0x80);
    SpriteSystem_InitManagerWithCapacities(*((u32*)(r4 + 0x34)), *((u32*)(r4 + 0x38)), ov80_0223D584);
    SpriteSystem_GetRenderer(*((u32*)(r4 + 0x34)));
    G2dRenderer_SetSubSurfaceCoords(0, (2 << 0x14));
}




void ov80_022393E8(void) {
    ov80_02239BE8(*((u32*)(r0 + 0x3c)));
    // add r0, #0x70
    ov80_02239B7C(*((u32*)(r5 + 0x38)), *((u16*)r5));
    // add r0, #0x80
    Sprite_DeleteAndFreeResources(*((u32*)r5));
    // add r1, r4, r1
    SpriteManager_UnloadCharObjById(*((u32*)(r5 + 0x38)), 0x0000C350);
    // add r1, r4, r1
    SpriteManager_UnloadPlttObjById(*((u32*)(r5 + 0x38)), 0x0000C350);
    // add r1, r4, r1
    SpriteManager_UnloadCellObjById(*((u32*)(r5 + 0x38)), 0x0000C350);
    // add r1, r4, r7
    SpriteManager_UnloadAnimObjById(*((u32*)(r5 + 0x38)));
    SpriteSystem_FreeResourcesAndManager(*((u32*)(r5 + 0x34)), *((u32*)(r5 + 0x38)));
    SpriteSystem_Free(*((u32*)(r5 + 0x34)));
}




void ov80_0223947C(void) {
    sub_02096864(*((u32*)(r0 + 8)));
    GF_AssertFail(0x0000FFFF, *((u16*)r0), (r0 + 4), *((u16*)r5));
    // add r1, r7, r2
    // strh r0, [r7, r2]
    *((u16*)(r1 + 2)) = *((u16*)(r5 + 2));
    ov42_02228FE0(*((u32*)(r6 + 0x20)), *((u16*)r5), *((u8*)(r5 + 2)), 0x65);
}




void ov80_022394D8(void) {
    sub_02096864(*((u32*)(r0 + 8)));
    ov42_02229004(*((u32*)(r6 + 0x20)), r5);
    // strh r1, [r7, r0]
}




void ov80_02239510(void) {
    // mvn r1, r1
    // add r0, #0x3c
    // ldrsh r0, [r5, r0]
    // add r1, sp, #8
    // strh r0, [r1]
    // ldrsh r0, [r5, r0]
    // add r1, sp, #8
    // str r0, [sp, #4]
    // ldr r1, [sp, #4]
    // str r5, [sp]
    // ldr r2, [sp, #4]
    // ldr r0, [sp, #4]
}




void ov80_02239590(void) {
    sub_02096868(*((u32*)(r0 + 8)));
    ov42_02228100(*((u32*)(r0 + (0 * 0x3c))), 0, r0);
    // add r0, r4, r5
    ov42_022290C4(*((u32*)(r0 + 4)));
    // add r0, r4, r5
    GF_AssertFail(*((u32*)(r0 + 0x38)));
    // add r0, r4, r5
    MI_CpuFill8(0, 0x3c);
    // add r0, r4, r5
    *((u16*)(r0 + 0xc)) = 0x0000FFFF;
    // add r2, #0x3c
}




void ov80_022395E8(void) {
    // str r2, [r4]
    // add r0, r0, r2
    // str r0, [r6]
    // add r3, #0x3c
}




void ov80_0223962C(void) {
    // add r2, #0x70
    // add r0, r0, r2
    // add r0, #0x70
    // strh r1, [r0]
    GF_AssertFail((0 << 1), 0x0000FFFF);
}




void ov80_0223965C(void) {
    // add r2, #0x70
    // add r0, r0, r1
    // add r0, #0x70
    // strh r2, [r0]
}




void ov80_0223968C(void) {
    // add r7, #0x3c
    // str r0, [sp]
    // ldr r1, [sp]
    // str r0, [sp, #4]
    // str r0, [r7, r1]
    // add r0, r5, r0
    // add r0, #0x5c
    // strh r6, [r0]
    // ldr r0, [sp, #4]
}




void ov80_022396D8(void) {
    // add r5, #0x3c
    // str r0, [r5, r4]
}




void ov80_02239700(void) {
    // add r0, r0, r1
}




void ov80_02239708(void) {
    // lsl r2, r1
    // lsl r3, r1
    // eor r1, r3
    // and r1, r4
}




void ov80_02239734(void) {
    // lsr r2, r1
    // and r0, r2
}




void ov80_02239740(void) {
    // str r0, [sp]
    sub_02096878(*((u32*)(r0 + 8)));
    // ldr r4, [sp]
    // add r4, #0x3c
    // add r1, r4, r2
    // strh r1, [r6, r2]
    // str r0, [sp, #8]
    // add r0, #0x12
    // str r0, [sp, #8]
    // str r0, [sp, #4]
    // add r0, #0x10
    // add r5, #0x16
    // str r4, [sp, #0xc]
    // str r0, [sp, #4]
    ManagedSprite_GetActiveAnim(*((u32*)r4), *((u16*)(r1 + 0x34)), (0 << 1), ((0 + 1) + 1));
    *((u8*)(r6 + 0x15)) = r0;
    ManagedSprite_GetAnimationFrame(*((u32*)r4));
    // and r1, r2
    // and r0, r2
    // strh r0, [r5]
    // ldr r0, [sp]
    ov80_02239734((r0 | 0xFFFFE000), ((r7 << 0x10) >> 0x10), 0x00001FFF);
    // and r1, r2
    // strh r0, [r5]
    ManagedSprite_GetDrawFlag(*((u32*)r4), 0xFFFFDFFF, *((u16*)r5));
    // and r1, r2
    // strh r0, [r5]
    // ldr r0, [sp, #0xc]
    // ldr r1, [sp, #4]
    // ldr r2, [sp, #8]
    *((u8*)(r6 + 0x14)) = *((u16*)((((((r0 << 0x10) >> 0x10) << 0x1f) >> 0x11) | 0xFFFFBFFF) + 0x20));
    ManagedSprite_GetPositionXY(*((u32*)r4), 0xFFFFBFFF, *((u16*)r5));
    // strh r0, [r5]
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #8]
    // add r0, #8
    // str r0, [sp, #8]
    // ldr r0, [sp, #4]
    // add r6, #8
    // add r0, #8
    // add r5, #8
    // str r0, [sp, #4]
}




void ov80_02239828(void) {
    sub_02096878(*((u32*)(r0 + 8)));
    NARC_New(0xb8, 0x65);
    // str r0, [sp, #4]
    // str r1, [sp]
    // ldr r2, [sp, #4]
    ov80_02239AF8(*((u32*)(r7 + 0x34)), *((u32*)(r7 + 0x38)), *((u32*)(r7 + 4)));
    ov80_0223962C(r7, *((u16*)r4));
    // add r4, #0x16
    ov80_0223968C(r7, ((0 << 0x10) >> 0x10), *((u8*)(r5 + 0x14)));
    // ldrsh r1, [r5, r1]
    // ldrsh r2, [r5, r2]
    // str r0, [sp, #8]
    ManagedSprite_SetPositionXY(0x10, 0x12);
    // ldr r0, [sp, #8]
    ManagedSprite_SetDrawFlag(((*((u16*)r4) << 0x11) >> 0x1f));
    ov80_02239708(r7, ((r6 << 0x10) >> 0x10), ((*((u16*)r4) << 0x12) >> 0x1f));
    // ldr r0, [sp, #8]
    ManagedSprite_SetAnim(*((u8*)(r5 + 0x15)));
    // ldr r0, [sp, #8]
    ManagedSprite_SetAnimationFrame(((*((u16*)r4) << 0x13) >> 0x13));
    // add r4, #8
    // add r5, #8
    // ldr r0, [sp, #4]
    NARC_Delete();
    sub_02096884(*((u32*)(r7 + 8)));
}




void ov80_022398E4(void) {
}




void ov80_02239900(void) {
    // add r0, #8
    // strh r2, [r1]
}




void ov80_02239914(void) {
    // str r5, [r0]
    // ldr r3, [sp, #0x10]
    // add r0, #8
    // strh r1, [r0]
}




void ov80_02239938(void) {
    // add r0, #0x3c
}



