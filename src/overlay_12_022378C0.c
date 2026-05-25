/* Decompiled from asm/overlay_12_022378C0.s */
#include "global.h"

void ov12_02237D00(void) {
    // strb r0, [r5, r1]
    // add r3, sp, #0x14
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // add r2, sp, #0x14
    InitBgFromTemplate(*((u32*)(r0 + 4)), 1, (0xa - 1), 0);
    BgClearTilemapBufferAndCommit(*((u32*)(r5 + 4)), 1);
    // add r2, sp, #0x30
    InitBgFromTemplate(*((u32*)(r5 + 4)), 2, 0);
    BgClearTilemapBufferAndCommit(*((u32*)(r5 + 4)), 2);
    // add r2, sp, #0x4c
    InitBgFromTemplate(*((u32*)(r5 + 4)), 3, 0);
    BgClearTilemapBufferAndCommit(*((u32*)(r5 + 4)), 3);
    // strh r2, [r1]
    GfGfx_EngineATogglePlanes(1, 1, ((*((u16*)0x04000008) & ~(3)) | 1));
    BattleSystem_GetFrame(r5);
    // str r0, [sp]
    // str r0, [sp, #4]
    sub_0200EB80(*((u32*)(r5 + 4)), 1, 1, 0xa);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharData(7, (*((u32*)(r5 + 0x00002404)) + 3), *((u32*)(r5 + 4)), 3);
    ov12_0223B52C(r5);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r3, r6, r3
    // add r3, #0xb0
    // add r2, r3, r2
    PaletteData_LoadNarc(*((u32*)(r5 + 0x28)), 7, r0, 5);
    sub_0200E640(r4);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    PaletteData_LoadNarc(*((u32*)(r5 + 0x28)), 0x26, r0, 5);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    PaletteData_LoadNarc(*((u32*)(r5 + 0x28)), 0x10, 8, 5);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnData(7, 2, *((u32*)(r5 + 4)), 3);
    // and r2, r1
    // str r2, [r0]
    // and r1, r2
    // str r1, [r3]
    // add r2, #0x48
    // add r0, #0x4a
    // strh r3, [r2]
    // strh r2, [r0]
    GfGfx_BothDispOn((1 << 0x1a), 0x3f, (*((u16*)(1 << 0x1a)) & ~(0x3f)), (*((u16*)(1 << 0x1a)) & ~(0x3f)));
    GfGfx_EngineATogglePlanes(0x10, 1);
    GfGfx_EngineBTogglePlanes(0x10, 1);
    Main_SetVBlankIntrCB(ov12_02239730, r5);
    // strb r1, [r5, r0]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    AddWindowParameterized(*((u32*)(r5 + 4)), *((u32*)(r5 + 8)), 1, 2);
    FillWindowPixelBuffer(*((u32*)(r5 + 8)), 0xff);
    DrawFrameAndWindow2(*((u32*)(r5 + 8)), 0, 1, 0xa);
    ov12_0223A620(r5);
}





void ov12_02237ED0(void) {
    GF_AssertFail(*((u8*)(r0 + 0x00002445)));
    // strb r4, [r5, r0]
    UnloadOverlayByID(FS_OVERLAY_ID);
    HandleLoadOverlay(FS_OVERLAY_ID, 2);
    UnloadOverlayByID(FS_OVERLAY_ID);
    HandleLoadOverlay(FS_OVERLAY_ID, 2);
}





void ov12_02237F18(void) {
    OverlayManager_GetData();
    OverlayManager_GetArgs(r5);
    sub_02026E8C();
    GetMainBgPlttAddr();
    MIi_CpuClear16(0, r0, r5);
    sub_02026E9C();
    GetSubBgPlttAddr();
    MIi_CpuClear16(0, r0, r5);
    ov12_02239644();
    // str r0, [r4]
    HBlankInterruptDisable();
    FontID_Alloc(4, 5);
    MessagePrinter_New(0xe, 2, 0xf, 5);
    // str r0, [r4, r1]
    // str r2, [r4, r0]
    PaletteData_Init(5, (0x6a << 2), *((u32*)(r4 + (0x6a << 2))));
    *((u32*)(r4 + 0x28)) = r0;
    PaletteData_SetAutoTransparent(1);
    PaletteData_AllocBuffers(*((u32*)(r4 + 0x28)), 0, (2 << 8), 5);
    PaletteData_AllocBuffers(*((u32*)(r4 + 0x28)), 1, (1 << 9), 5);
    PaletteData_AllocBuffers(*((u32*)(r4 + 0x28)), 2, (7 << 6), 5);
    PaletteData_AllocBuffers(*((u32*)(r4 + 0x28)), 3, (2 << 8), 5);
    BgConfig_Alloc(5);
    *((u32*)(r4 + 4)) = r0;
    AllocWindows(5, 3);
    *((u32*)(r4 + 8)) = r0;
    Heap_Alloc(5, (0x32 << 6));
    // str r0, [r5, r1]
    // add r5, #0x10
    GF_CreateVramTransferManager(0x40, 5);
    NARC_New(7, 5);
    NARC_New(8, 5);
    ov12_0223BFC0(r4);
    BattleSystem_GetTrainerGender(r4, r0);
    // str r0, [sp]
    BattleInput_NewInit(r5, r6, r4, r0);
    // str r0, [r4, r1]
    NARC_Delete(r5, (0x67 << 2));
    NARC_Delete(r6);
    ov12_022387AC(r4, *((u32*)(r4 + 4)));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    AddWindowParameterized(*((u32*)(r4 + 4)), *((u32*)(r4 + 8)), 1, 2);
    FillWindowPixelBuffer(*((u32*)(r4 + 8)), 0xff);
    DrawFrameAndWindow2(*((u32*)(r4 + 8)), 0, 1, 0xa);
    SpriteSystem_Alloc(5);
    // add r1, #0x90
    // str r0, [r1]
    // add r0, #0x90
    SpriteSystem_Init(*((u32*)r4), ov12_0226C060, ov12_0226C018, 0x20);
    G2dRenderer_SetObjCharTransferReservedRegion(1, 0x00100010);
    G2dRenderer_SetPlttTransferReservedRegion(1);
    // add r0, #0x90
    SpriteManager_New(*((u32*)r4));
    // add r1, #0x94
    // str r0, [r1]
    // add r0, #0x90
    // add r1, #0x94
    SpriteSystem_InitSprites(*((u32*)r4), *((u32*)r4), 0x80);
    // add r0, #0x90
    // add r1, #0x94
    SpriteSystem_InitManagerWithCapacities(*((u32*)r4), *((u32*)r4), ov12_0226C02C);
    // add r0, #0x90
    SpriteSystem_GetRenderer(*((u32*)r4));
    G2dRenderer_SetSubSurfaceCoords(0, (0x11 << 0x10));
    BattleInput_LoadDefaultResources(*((u32*)(r4 + (0x67 << 2))));
    NARC_New(7, 5);
    NARC_New(8, 5);
    // str r0, [sp]
    // str r3, [sp, #4]
    BattleInput_ChangeMenu(r6, r0, *((u32*)(r4 + (0x67 << 2))), 0);
    BattleInput_LoadBallGaugeResources(r5, *((u32*)(r4 + (0x67 << 2))));
    NARC_Delete(r6);
    NARC_Delete(r5);
    PokepicManager_Create(5);
    // add r1, #0x88
    // str r0, [r1]
    // add r0, #0x88
    PokepicManager_SetPlttBaseAddrAndSize(*((u32*)r4), 0, 0xc0);
    BattleSystem_HpBar_Init(r4);
    ov12_022396F0();
    ov07_0221BEDC(5);
    // add r1, #0x8c
    // str r0, [r1]
    ov12_022389B8(r4, r4);
    sub_020210BC();
    sub_02021148(4);
    NewMsgDataFromNarc(1, 0x1b, 0xc5, 5);
    *((u32*)(r4 + 0xc)) = r0;
    NewMsgDataFromNarc(1, 0x1b, 3, 5);
    *((u32*)(r4 + 0x10)) = r0;
    MessageFormat_New(5);
    *((u32*)(r4 + 0x14)) = r0;
    String_New((5 << 6), 5);
    *((u32*)(r4 + 0x18)) = r0;
    PaletteData_GetUnfadedBuf(*((u32*)(r4 + 0x28)), 0);
    // add r1, r4, r1
    MIi_CpuCopy16(0x00002228, 0xe0);
    PaletteData_GetUnfadedBuf(*((u32*)(r4 + 0x28)), 2);
    // add r1, r4, r1
    MIi_CpuCopy16(0x00002308, 0xe0);
    ov12_0223B52C(r4);
    // str r1, [sp]
    // str r0, [sp, #4]
    // add r3, r3, r5
    PaletteData_FillPaletteInBuffer(*((u32*)(r4 + 0x28)), 0, 2, ((*((u32*)((r0 << 2) + ov12_0226C1C8)) << 0x10) >> 0x10));
    // str r0, [sp]
    // add r0, #0x40
    // str r0, [sp, #4]
    // add r3, r3, r5
    PaletteData_FillPaletteInBuffer(*((u32*)(r4 + 0x28)), 0, 2, ((*((u32*)(r6 + ov12_0226C1C8)) << 0x10) >> 0x10));
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r3, r3, r5
    PaletteData_FillPaletteInBuffer(*((u32*)(r4 + 0x28)), 2, 2, ((*((u32*)(r6 + ov12_0226C1C8)) << 0x10) >> 0x10));
    // str r0, [sp]
    // str r0, [sp, #4]
    PaletteData_FillPaletteInBuffer(*((u32*)(r4 + 0x28)), 0, 0, 0);
    // str r2, [sp]
    // str r0, [sp, #4]
    PaletteData_FillPaletteInBuffer(*((u32*)(r4 + 0x28)), 1, 0, 0);
    // str r2, [sp]
    // str r0, [sp, #4]
    PaletteData_FillPaletteInBuffer(*((u32*)(r4 + 0x28)), 3, 0, 0x0000FFFF);
    sub_020163E0(*((u32*)(r4 + 0x28)), 0, 0xb, 5);
    // str r0, [r4, r1]
    sub_0201649C(*((u32*)(r4 + (0x1b << 4))), 1);
    SysTask_CreateOnMainQueue(ov12_02239810, r4, 0x0000EA60);
    *((u32*)(r4 + 0x1c)) = r0;
    SysTask_CreateOnMainQueue(ov12_02239854, r4, 0x0000C350);
    *((u32*)(r4 + 0x20)) = r0;
    SysTask_CreateOnVBlankQueue(ov12_0223998C, r4, (0x4b << 4));
    *((u32*)(r4 + 0x24)) = r0;
    // mvn r1, r1
    // str r1, [r4, r0]
    ov12_0223A620(r4, 0x32);
    BattleSystem_GetBagCursor(r4);
    BagCursor_Battle_Init();
    sub_02016EDC(5, 4, 0);
    // str r0, [r4, r1]
    sub_02020654(4, 5);
    // str r0, [r4, r1]
    // tst r0, r1
    // add r2, r7, r5
    // add r2, r4, r5
    // strb r3, [r2, r1]
}





void ov12_02238358(void) {
    OverlayManager_GetData();
    // tst r1, r2
    // tst r2, r3
    // sub r1, #0x10
    BattleContext_Main(*((u32*)(r0 + 0x30)), 0x10, *((u32*)(r0 + 0x0000240C)));
    ov12_02258E54(r4, *((u32*)(r4 + 0x34)));
    BattleContext_Main(r4, *((u32*)(r4 + 0x30)));
    // strb r0, [r4, r1]
    ov12_022621C4(r4, 1);
    ov12_02258E54(r4, *((u32*)(r4 + 0x34)));
    ov12_022621C4(r4, r7);
    BattleContext_Main(r4, *((u32*)(r4 + 0x30)));
    // strb r0, [r4, r1]
    ov12_022621C4(r4, 1);
    ov12_02258E54(r4, *((u32*)(r4 + 0x34)));
    ov12_022621C4(r4, r7);
}





void ov12_0223843C(void) {
    OverlayManager_GetData();
    OverlayManager_GetArgs(r5);
    // str r1, [r7, r2]
    // sub r1, #0x40
    // sub r2, #0x10
    // str r1, [r7, r2]
    // sub r3, #0x40
    // tst r1, r2
    sub_020302A4(0x10, *((u32*)(r4 + 0x0000244C)), 0x0000244C);
    ov12_02237ED0(r4, 0);
    // tst r0, r1
    // add r0, #0xfe
    sub_0200FBF4(0, 0);
    sub_0200FBF4(1, r5);
    BattleSystem_TryChangeForm(r4);
    Party_GetMonByIndex(*((u32*)(r4 + 0x6c)), 0);
    ov12_0223B870(r4, r0);
    // str r0, [sp]
    Party_Copy(*((u32*)(r4 + 0x68)), *((u32*)(r7 + 4)));
    Heap_Free(*((u32*)(r5 + 0x68)));
    // add r1, #0xf8
    PlayerProfile_Copy(*((u32*)(r5 + 0x48)), *((u32*)r6));
    Heap_Free(*((u32*)(r5 + 0x48)));
    // ldr r0, [sp]
    // str r0, [sp]
    sub_020164C4(*((u32*)(r4 + (0x1b << 4))));
    Save_Bag_Copy(*((u32*)(r4 + 0x58)), *((u32*)(r7 + (0x42 << 2))));
    Heap_Free(*((u32*)(r4 + 0x58)));
    Pokedex_Copy(*((u32*)(r4 + 0x60)), *((u32*)(r7 + (0x11 << 4))));
    Heap_Free(*((u32*)(r4 + 0x60)));
    // str r1, [r7, r0]
    // sub r1, #8
    // str r2, [r7, r1]
    // add r1, #0xac
    // add r1, #0xa4
    // str r2, [r7, r1]
    // add r1, #0x98
    // add r1, #0x14
    // str r2, [r7, r1]
    // add r1, #0x9c
    // add r1, #0x20
    // str r2, [r7, r1]
    // add r1, #0x7c
    // add r0, #0x5c
    // str r3, [r7, r1]
    // add r1, #0xc
    // add r2, #0x28
    // and r1, r3
    *((u32*)(r7 + 0x14)) = 0x3f;
    // str r1, [r7, r0]
    ov12_022581D4(r4, *((u32*)(r4 + 0x30)), 4, 0);
    // str r0, [r7, r1]
    ov12_022581D4(r4, *((u32*)(r4 + 0x30)), 3, 0);
    // add r0, r2, r0
    // str r0, [r7, r1]
    ov12_022581D4(r4, *((u32*)(r4 + 0x30)), 6, 0);
    ov12_022581D4(r4, *((u32*)(r4 + 0x30)), 6, 2);
    // add r0, r5, r0
    // add r0, r2, r0
    // str r0, [r7, r1]
    ov12_022581D4(r4, *((u32*)(r4 + 0x30)), 7, 0);
    ov12_022581D4(r4, *((u32*)(r4 + 0x30)), 7, 2);
    // add r0, r5, r0
    // add r0, r2, r0
    // str r0, [r7, r1]
    ov12_022581D4(r4, *((u32*)(r4 + 0x30)), 3, 0);
    // str r0, [r7, r1]
    // add r1, #0x10
    // str r0, [r7, r1]
    Heap_Free(*((u32*)(r4 + (0x1d << 4))), (0x6d << 2));
    // add r5, #0x10
    Heap_Free(*((u32*)(r4 + 0x18)));
    PaletteData_FreeBuffers(*((u32*)(r4 + 0x28)), 0);
    PaletteData_FreeBuffers(*((u32*)(r4 + 0x28)), 1);
    PaletteData_FreeBuffers(*((u32*)(r4 + 0x28)), 2);
    PaletteData_FreeBuffers(*((u32*)(r4 + 0x28)), 3);
    PaletteData_Free(*((u32*)(r4 + 0x28)));
    DestroyMsgData(*((u32*)(r4 + 0xc)));
    DestroyMsgData(*((u32*)(r4 + 0x10)));
    MessageFormat_Delete(*((u32*)(r4 + 0x14)));
    sub_02016F2C(*((u32*)(r4 + (0x72 << 2))));
    sub_02014F84();
    // add r0, #0x8c
    ov07_0221BFE0(*((u32*)r4));
    BattleContext_Delete(*((u32*)(r4 + 0x30)));
    ov12_02258E7C(r4, *((u32*)(r4 + 0x34)), *((u8*)(r4 + 0x000023FD)));
    // add r0, #0x88
    PokepicManager_Delete(*((u32*)r4));
    ov12_02237B6C(r4);
    TextFlags_SetCanABSpeedUpPrint(0);
    TextFlags_SetAutoScrollParam(0);
    TextFlags_SetCanTouchSpeedUpPrint(0);
    WindowArray_Delete(*((u32*)(r4 + 8)), 3);
    Heap_Free(*((u32*)(r4 + 4)));
    Heap_Free(*((u32*)(r4 + (0x22 << 4))));
    Heap_Free(*((u32*)(r4 + (0x89 << 2))));
    MessagePrinter_Delete(*((u32*)(r4 + (0x6a << 2))));
    SysTask_Destroy(*((u32*)(r4 + 0x1c)));
    SysTask_Destroy(*((u32*)(r4 + 0x20)));
    sub_02021238();
    ov12_022396E8(*((u32*)r4));
    SetLCRNGSeed(*((u32*)(r4 + 0x00002434)));
    BattleSystem_GetCriticalHpMusicFlag(r4);
    StopSE(0x00000704, 0);
    sub_0202067C(*((u32*)(r4 + (0x73 << 2))));
    BattleSystem_IsRecordingPaused(r4);
    Sound_SetMasterVolume(0x7f);
    ov12_0226BEF0(*((u32*)(r4 + (0x92 << 6))));
    Heap_Free(r4);
    UnloadOverlayByID(FS_OVERLAY_ID);
    UnloadOverlayByID(FS_OVERLAY_ID);
    sub_02039998();
    UnloadOverlayByID(FS_OVERLAY_ID);
}





void ov12_022387AC(void) {
    GfGfx_DisableEngineAPlanes();
    // add r3, sp, #0x20
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // add r0, sp, #0x20
    GfGfx_SetBanks((5 - 1));
    MIi_CpuClear32(0, (6 << 0x18), (2 << 0x12));
    MIi_CpuClear32(0, (0x62 << 0x14), (2 << 0x10));
    MIi_CpuClear32(0, (0x19 << 0x16), (1 << 0x12));
    MIi_CpuClear32(0, (0x66 << 0x14), (2 << 0x10));
    SetMasterBrightnessNeutral(0);
    SetMasterBrightnessNeutral(1);
    // add r3, sp, #0x10
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    SetBothScreensModesAndDisable(r3, r3);
    // add r3, sp, #0x48
    // strb r0, [r5, r1]
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // add r2, sp, #0x48
    InitBgFromTemplate(r4, 1, (0xa - 1), 0);
    BgClearTilemapBufferAndCommit(r4, 1);
    // add r2, sp, #0x64
    InitBgFromTemplate(r4, 2, 0);
    BgClearTilemapBufferAndCommit(r4, 2);
    // add r2, sp, #0x80
    InitBgFromTemplate(r4, 3, 0);
    BgClearTilemapBufferAndCommit(r4, 3);
    // strh r2, [r1]
    GfGfx_EngineATogglePlanes(1, 1, ((*((u16*)0x04000008) & ~(3)) | 1));
    BgConfig_InitBattleMenuBackgrounds(r4);
    BattleSystem_GetFrame(r5);
    // str r0, [sp]
    // str r0, [sp, #4]
    sub_0200EB80(r4, 1, 1, 0xa);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharData(7, (*((u32*)(r5 + 0x00002404)) + 3), r4, 3);
    ov12_0223B52C(r5);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r2, r3, r2
    // add r2, #0xb0
    // add r2, r2, r6
    PaletteData_LoadNarc(*((u32*)(r5 + 0x28)), 7, (*((u32*)(r5 + 0x00002404)) << 1), 5);
    sub_0200E640(r7);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    PaletteData_LoadNarc(*((u32*)(r5 + 0x28)), 0x26, r0, 5);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    PaletteData_LoadNarc(*((u32*)(r5 + 0x28)), 0x10, 8, 5);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnData(7, 2, r4, 3);
    // and r2, r1
    // str r2, [r0]
    // and r1, r2
    // str r1, [r3]
    // add r2, #0x48
    // add r0, #0x4a
    // strh r3, [r2]
    // strh r2, [r0]
    GfGfx_BothDispOn((1 << 0x1a), 0x3f, (*((u16*)(1 << 0x1a)) & ~(0x3f)), (*((u16*)(1 << 0x1a)) & ~(0x3f)));
    GfGfx_EngineATogglePlanes(0x10, 1);
    GfGfx_EngineBTogglePlanes(0x10, 1);
    Main_SetVBlankIntrCB(ov12_02239730, r5);
}





void ov12_022389B8(void) {
    // add r0, r5, r0
    // add r0, r5, r0
    // str r0, [sp]
    // ldr r1, [sp]
}





void ov12_02238A30(void) {
}





void ov12_02238A64(void) {
    // bx lr
    // TODO: decompile
}





void ov12_02238A68(void) {
    // str r1, [sp, #4]
    *((u32*)(r0 + 0x2c)) = *((u32*)r1);
    PlayerProfile_New(5);
    *((u32*)(r6 + 0x48)) = r0;
    // add r0, #0xf8
    PlayerProfile_Copy(*((u32*)r5), r0);
    *((u32*)(r6 + 0x78)) = *((u32*)(r5 + (0x46 << 2)));
    // ldr r0, [sp, #4]
    // ldr r3, [sp, #4]
    // strh r1, [r4, r0]
    // str r2, [r5, r1]
    GetLCRNGSeed((0x1a << 4), 0x00002468, *((u32*)(r3 + (0x1a << 4))), (r3 + 4));
    // ldr r2, [sp, #4]
    // str r0, [r4, r1]
    // add r2, #0x14
    // str r3, [r4, r2]
    // ldr r2, [sp, #4]
    // add r2, #0x18
    // str r3, [r4, r2]
    // ldr r2, [sp, #4]
    // sub r0, #0x10
    // sub r1, #0x28
    // str r0, [r4, r1]
    Save_Bag_New(5, 0x00002434, 0x00002434, *((u32*)(0x00002434 + (0x67 << 2))));
    *((u32*)(r4 + 0x58)) = r0;
    // ldr r0, [sp, #4]
    Save_Bag_Copy(*((u32*)(r0 + (0x42 << 2))), *((u32*)(r4 + 0x58)));
    Pokedex_New(5);
    *((u32*)(r4 + 0x60)) = r0;
    // ldr r0, [sp, #4]
    Pokedex_Copy(*((u32*)(r0 + (0x11 << 4))), *((u32*)(r4 + 0x60)));
    // ldr r0, [sp, #4]
    *((u32*)(r4 + 0x64)) = *((u32*)(r0 + (0x45 << 2)));
    // ldr r0, [sp, #4]
    // add r2, #0x1c
    // add r0, #0xa0
    // str r2, [r4, r0]
    // ldr r0, [sp, #4]
    // add r2, #0x34
    // add r0, #0xa4
    // str r2, [r4, r0]
    // ldr r0, [sp, #4]
    // sub r2, #8
    *((u32*)(r4 + 0x5c)) = *((u32*)((0x45 << 2) + (0x45 << 2)));
    // ldr r0, [sp, #4]
    // add r2, #0xa4
    // add r0, #0xac
    // str r2, [r4, r0]
    // ldr r0, [sp, #4]
    // add r2, #0x14
    // add r0, #0x98
    // str r2, [r0]
    // ldr r0, [sp, #4]
    // add r2, #0x4c
    // add r3, #0x20
    // str r2, [r4, r0]
    // ldr r2, [sp, #4]
    // add r5, #0x58
    // add r2, #0x9c
    // str r3, [r2]
    // ldr r2, [sp, #4]
    // add r3, #0x7c
    // sub r2, #0x10
    // str r3, [r4, r2]
    // ldr r2, [sp, #4]
    // add r3, #0x3c
    // sub r2, #0x24
    // str r3, [r4, r2]
    // ldr r2, [sp, #4]
    // add r3, #0x38
    // sub r2, #0x20
    // str r3, [r4, r2]
    // ldr r2, [sp, #4]
    // add r3, #0x40
    // sub r2, #0x1c
    // str r3, [r4, r2]
    // ldr r2, [sp, #4]
    // add r3, #0x48
    // sub r2, #0x14
    // str r3, [r4, r2]
    // ldr r2, [sp, #4]
    // add r3, #0x80
    // sub r2, #8
    // str r3, [r4, r2]
    // ldr r2, [sp, #4]
    // add r3, #0x50
    // str r3, [r4, r2]
    // ldr r2, [sp, #4]
    // add r3, #0x54
    // add r2, #0xc
    // str r3, [r4, r2]
    // add r2, #0x54
    // ldr r3, [sp, #4]
    // add r2, #0x54
    // str r3, [r4, r2]
    // add r2, #0x54
    // ldr r3, [sp, #4]
    // add r5, #0xbc
    // add r2, #0x54
    // str r3, [r4, r2]
    // ldr r2, [sp, #4]
    // add r3, #0x60
    // add r0, #8
    // str r2, [r4, r0]
    // ldr r0, [sp, #4]
    // add r1, #0x30
    // str r0, [r4, r1]
    // ldr r0, [sp, #4]
    // sub r1, #0xd8
    GF_AssertFail(*((u32*)(*((u32*)(0x00002424 + (0x45 << 2))) + (0x87 << 2))), (0x87 << 2), *((u32*)(0x00002424 + (0x45 << 2))), (0x45 << 2));
    // ldr r0, [sp, #4]
    // ldr r5, [sp, #4]
    // str r1, [r4, r0]
    // str r0, [sp, #8]
    // str r4, [sp, #0x34]
    // ldr r0, [sp, #0x34]
    // add r0, #0xa0
    // strh r1, [r0]
    // add r3, #0x28
    // add r2, #0xac
    // mov ip, r0
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // mov r0, ip
    // mov ip, r0
    // str r0, [r2]
    // ldr r0, [sp, #0x34]
    // add r6, #0x34
    // str r0, [sp, #0x34]
    // ldr r0, [sp, #8]
    // add r7, #0x34
    // str r0, [sp, #8]
    BattleContext_New(r4, *((u32*)(r5 + 0x18)), r4, r5);
    *((u32*)(r4 + 0x30)) = r0;
    SaveArray_Party_Alloc(5);
    *((u32*)(r6 + 0x68)) = r0;
    // ldr r0, [sp, #4]
    // add r1, r0, r5
    // add r0, r4, r5
    // strb r1, [r0, r7]
    // ldr r6, [sp, #4]
    // str r0, [sp, #0xc]
    Party_GetCount(*((u32*)((r6 + 4) + 4)), *((u8*)(r1 + (0x73 << 2))));
    Party_GetMonByIndex(*((u32*)(r6 + 4)), r5);
    GetMonGender();
    // str r0, [sp, #0x44]
    // add r2, sp, #0x44
    SetMonData(r7, 0x6f);
    Party_GetCount(*((u32*)(r6 + 4)));
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #0xc]
    // tst r1, r0
    sub_02074E5C(r4, 4);
    ov12_0223BFC0(r4);
    // str r0, [sp, #0x38]
    // ldr r1, [sp, #4]
    ov12_0223A664(r4);
    // tst r0, r1
    // add r0, sp, #0x40
    // strb r5, [r0]
    *((u8*)(0x80 + 1)) = *((u8*)ov12_0226C2DC);
    // add r1, sp, #0x40
    ov12_02258D74(r4, *((u8*)ov12_0226C2DC));
    *((u32*)(r7 + 0x34)) = r0;
    *((u32*)(r4 + 0x44)) = (r5 + 1);
    ov12_02260EA4(r4, *((u32*)(r4 + 0x34)));
    // ldr r0, [sp, #4]
    Party_Copy(*((u32*)(r0 + 4)), *((u32*)(r5 + 0x68)));
    // ldr r0, [sp, #4]
    // str r0, [sp, #4]
    // str r0, [sp, #0x10]
    Party_GetCount(*((u32*)(r4 + 0x68)));
    Party_GetMonByIndex(*((u32*)(r7 + 0x68)), r5);
    GetMonData(5, 0);
    GetMonData(r6, 0x4c, 0);
    GetMonData(r6, 0xa3, 0);
    Party_GetCount(*((u32*)(r7 + 0x68)));
    // str r5, [sp]
    // ldr r3, [sp, #0x10]
    ov12_022582B8(r4, *((u32*)(r4 + 0x30)), 2);
    // ldr r0, [sp, #0x10]
    // str r0, [sp, #0x10]
    ov12_02256F28(r4, *((u32*)(r4 + 0x30)));
    // tst r0, r1
    // add r0, sp, #0x40
    // strb r5, [r0]
    // ldr r1, [sp, #0x38]
    ov12_0223BFCC(r4);
    ov12_0223BFCC(r4, ((r5 << 0x10) >> 0x10));
    // add r1, r1, r2
    // add r0, sp, #0x40
    *((u8*)(r0 + 1)) = *((u8*)(r0 + ov12_0226C008));
    // add r1, sp, #0x40
    ov12_02258D74(r4, *((u8*)(r0 + ov12_0226C008)), (r7 << 2));
    *((u32*)(r6 + 0x34)) = r0;
    *((u32*)(r4 + 0x44)) = (r5 + 1);
    ov12_02260EA4(r4, *((u32*)(r4 + 0x34)));
    // ldr r0, [sp, #4]
    Party_Copy(*((u32*)(r0 + 4)), *((u32*)(r5 + 0x68)));
    // ldr r0, [sp, #4]
    // str r0, [sp, #4]
    // str r0, [sp, #0x14]
    Party_GetCount(*((u32*)(r4 + 0x68)));
    Party_GetMonByIndex(*((u32*)(r7 + 0x68)), r5);
    GetMonData(5, 0);
    GetMonData(r6, 0x4c, 0);
    GetMonData(r6, 0xa3, 0);
    Party_GetCount(*((u32*)(r7 + 0x68)));
    // str r5, [sp]
    // ldr r3, [sp, #0x14]
    ov12_022582B8(r4, *((u32*)(r4 + 0x30)), 2);
    // ldr r0, [sp, #0x14]
    // str r0, [sp, #0x14]
    ov12_02256F28(r4, *((u32*)(r4 + 0x30)));
    // tst r0, r1
    // ldr r0, [sp, #0x38]
    // add r6, r1, r0
    // add r0, sp, #0x40
    // strb r5, [r0]
    *((u8*)((2 << 2) + 1)) = *((u8*)r6);
    // add r1, sp, #0x40
    ov12_02258D74(r4, *((u8*)r6));
    *((u32*)(r7 + 0x34)) = r0;
    ov12_02260EA4(r4, r0);
    *((u32*)(r4 + 0x44)) = (r5 + 1);
    // ldr r0, [sp, #4]
    Party_Copy(*((u32*)(r0 + 4)), *((u32*)(r4 + 0x68)));
    // ldr r0, [sp, #4]
    // str r0, [sp, #4]
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x18]
    // and r0, r1
    // str r0, [sp, #0x30]
    // add r7, r4, r0
    Party_GetCount(*((u32*)(r7 + 0x68)), 1);
    Party_GetMonByIndex(*((u32*)(r7 + 0x68)), r6);
    // ldr r1, [sp, #0x18]
    // ldr r3, [sp, #0x30]
    ov12_022581D4(r4, *((u32*)(r4 + 0x30)), 2);
    GetMonData(r5, 5, 0);
    GetMonData(r5, 0x4c, 0);
    GetMonData(r5, 0xa3, 0);
    GetMonData(5, 0);
    GetMonData(r5, 0x4c, 0);
    GetMonData(r5, 0xa3, 0);
    Party_GetCount(*((u32*)(r7 + 0x68)));
    // str r6, [sp]
    // ldr r3, [sp, #0x18]
    ov12_022582B8(r4, *((u32*)(r4 + 0x30)), 2);
    // ldr r0, [sp, #0x18]
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x38]
    // add r6, r1, r0
    // add r0, sp, #0x40
    // strb r5, [r0]
    *((u8*)(((r0 + 1) << 1) + 1)) = *((u8*)r6);
    // add r1, sp, #0x40
    ov12_02258D74(r4, *((u8*)r6));
    *((u32*)(r7 + 0x34)) = r0;
    ov12_02260EA4(r4, r0);
    *((u32*)(r4 + 0x44)) = (r5 + 1);
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #4]
    Party_Copy(*((u32*)(0 + 4)), *((u32*)(r4 + 0x68)));
    Party_GetCount(*((u32*)(r7 + 0x68)));
    Party_GetMonByIndex(*((u32*)(r7 + 0x68)), r5);
    GetMonData(5, 0);
    GetMonData(r6, 0x4c, 0);
    GetMonData(r6, 0xa3, 0);
    Party_GetCount(*((u32*)(r7 + 0x68)));
    // str r5, [sp]
    // ldr r3, [sp, #0x1c]
    ov12_022582B8(r4, *((u32*)(r4 + 0x30)), 2);
    // ldr r0, [sp, #4]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x1c]
    // str r0, [sp, #0x1c]
    ov12_02256F28(r4, *((u32*)(r4 + 0x30)));
    // tst r1, r0
    // add r0, sp, #0x40
    // strb r5, [r0]
    *((u8*)(r0 + 1)) = *((u8*)ov12_0226C2DC);
    // add r1, sp, #0x40
    ov12_02258D74(r4, *((u8*)ov12_0226C2DC));
    *((u32*)(r7 + 0x34)) = r0;
    ov12_02260EA4(r4, r0);
    *((u32*)(r4 + 0x44)) = (r5 + 1);
    // ldr r0, [sp, #4]
    Party_Copy(*((u32*)(r0 + 4)), *((u32*)(r4 + 0x68)));
    // ldr r0, [sp, #4]
    // str r0, [sp, #4]
    BattleSystem_GetPartySize(r4, 0);
    BattleSystem_GetPartyMon(r4, r7, r5);
    GetMonData(5, 0);
    GetMonData(r6, 0x4c, 0);
    GetMonData(r6, 0xa3, 0);
    // ldr r0, [sp, #0x3c]
    GetMonData(5, 0);
    GetMonData(r6, 0x4c, 0);
    GetMonData(r6, 0xa3, 0);
    BattleSystem_GetPartySize(r4, r7);
    // str r5, [sp]
    ov12_022582B8(r4, *((u32*)(r4 + 0x30)), 2, r7);
    // str r5, [sp, #0x3c]
    ov12_02256F28(r4, *((u32*)(r4 + 0x30)));
    // strb r1, [r4, r0]
    // tst r1, r0
    // add r0, sp, #0x40
    // strb r5, [r0]
    *((u8*)(0x000023FC + 1)) = *((u8*)ov12_0226C2DC);
    // add r1, sp, #0x40
    ov12_02258D74(r4, *((u8*)ov12_0226C2DC));
    *((u32*)(r7 + 0x34)) = r0;
    ov12_02260EA4(r4, r0);
    *((u32*)(r4 + 0x44)) = (r5 + 1);
    // ldr r0, [sp, #4]
    Party_Copy(*((u32*)(r0 + 4)), *((u32*)(r4 + 0x68)));
    // ldr r0, [sp, #4]
    // str r0, [sp, #4]
    // str r0, [sp, #0x20]
    Party_GetCount(*((u32*)(r4 + 0x68)));
    Party_GetMonByIndex(*((u32*)(r7 + 0x68)), r5);
    GetMonData(5, 0);
    GetMonData(r6, 0x4c, 0);
    GetMonData(r6, 0xa3, 0);
    Party_GetCount(*((u32*)(r7 + 0x68)));
    // str r5, [sp]
    // ldr r3, [sp, #0x20]
    ov12_022582B8(r4, *((u32*)(r4 + 0x30)), 2);
    // ldr r0, [sp, #0x20]
    // str r0, [sp, #0x20]
    ov12_02256F28(r4, *((u32*)(r4 + 0x30)));
    // strb r1, [r4, r0]
    // tst r0, r1
    // add r0, sp, #0x40
    // strb r5, [r0]
    *((u8*)(0x000023FC + 1)) = *((u8*)ov12_0226C2DC);
    // add r1, sp, #0x40
    ov12_02258D74(r4, *((u8*)ov12_0226C2DC));
    *((u32*)(r7 + 0x34)) = r0;
    ov12_02260EA4(r4, r0);
    *((u32*)(r4 + 0x44)) = (r5 + 1);
    // ldr r0, [sp, #4]
    Party_Copy(*((u32*)(r0 + 4)), *((u32*)(r4 + 0x68)));
    // ldr r0, [sp, #4]
    // str r0, [sp, #4]
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #0x24]
    // and r0, r1
    // str r0, [sp, #0x2c]
    // add r7, r4, r0
    Party_GetCount(*((u32*)(r7 + 0x68)), 1);
    Party_GetMonByIndex(*((u32*)(r7 + 0x68)), r6);
    // ldr r1, [sp, #0x24]
    // ldr r3, [sp, #0x2c]
    ov12_022581D4(r4, *((u32*)(r4 + 0x30)), 2);
    GetMonData(r5, 5, 0);
    GetMonData(r5, 0x4c, 0);
    GetMonData(r5, 0xa3, 0);
    GetMonData(5, 0);
    GetMonData(r5, 0x4c, 0);
    GetMonData(r5, 0xa3, 0);
    Party_GetCount(*((u32*)(r7 + 0x68)));
    // str r6, [sp]
    // ldr r3, [sp, #0x24]
    ov12_022582B8(r4, *((u32*)(r4 + 0x30)), 2);
    // ldr r0, [sp, #0x24]
    // str r0, [sp, #0x24]
    ov12_02256F28(r4, *((u32*)(r4 + 0x30)));
    // strb r1, [r4, r0]
    // add r0, sp, #0x40
    // strb r5, [r0]
    *((u8*)(0x000023FC + 1)) = *((u8*)_0226BFD8);
    // add r1, sp, #0x40
    ov12_02258D74(r4, *((u8*)_0226BFD8));
    *((u32*)(r7 + 0x34)) = r0;
    ov12_02260EA4(r4, r0);
    *((u32*)(r4 + 0x44)) = (r5 + 1);
    // str r0, [sp, #0x28]
    // ldr r0, [sp, #4]
    Party_Copy(*((u32*)(0 + 4)), *((u32*)(r4 + 0x68)));
    Party_GetCount(*((u32*)(r7 + 0x68)));
    Party_GetMonByIndex(*((u32*)(r7 + 0x68)), r5);
    GetMonData(5, 0);
    GetMonData(r6, 0x4c, 0);
    GetMonData(r6, 0xa3, 0);
    Party_GetCount(*((u32*)(r7 + 0x68)));
    // str r5, [sp]
    // ldr r3, [sp, #0x28]
    ov12_022582B8(r4, *((u32*)(r4 + 0x30)), 2);
    // ldr r0, [sp, #4]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x28]
    // str r0, [sp, #0x28]
    ov12_02256F28(r4, *((u32*)(r4 + 0x30)));
    // strb r1, [r4, r0]
    // tst r0, r1
    Party_GetMonByIndex(*((u32*)(r4 + 0x6c)), 0);
    // add r2, #0xf4
    GetMonData(0x90, r4);
    // tst r0, r1
    // add r0, #0xe1
    ov12_022395BC(*((u8*)r4), *((u32*)(r4 + 0x2c)));
    ov12_022395BC(*((u8*)(r4 + 0x00000149)));
    Party_GetCount(*((u32*)(r4 + 0x68)));
    Party_GetMonByIndex(*((u32*)(r4 + 0x68)), r5);
    MonApplyFriendshipMod(3, ((*((u32*)(r4 + r7)) << 0x10) >> 0x10));
    ApplyMonMoodModifier(r6, 2);
    Party_GetCount(*((u32*)(r4 + 0x68)));
    Party_GetCount(*((u32*)(r4 + 0x70)));
    Party_GetMonByIndex(*((u32*)(r4 + 0x70)), r5);
    MonApplyFriendshipMod(3, ((*((u32*)(r4 + r7)) << 0x10) >> 0x10));
    ApplyMonMoodModifier(r6, 2);
    Party_GetCount(*((u32*)(r4 + 0x70)));
    // str r7, [r4, r0]
    // str r2, [r4, r0]
    BattleSystem_GetPlayerProfile(r4, 0, (*((u32*)(r4 + (0x0000247C - 4))) & ~(4)));
    PlayerProfile_GetVersion();
    // str r0, [r4, r6]
    // add r0, #0x80
    // str r7, [r4, r0]
    // add r0, #0x80
    // str r1, [r4, r0]
}





void ov12_022395BC(void) {
    // sub r1, #0x42
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _022395DC: ; jump table
}





void ov12_02239644(void) {
}





void ov12_02239664(void) {
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





void ov12_022396E8(void) {
}





void ov12_022396F0(void) {
    // blx r3
    // blx r3
    GF_AssertFail(0xc0, 0, 0, *((u32*)NNS_GfdDefaultFuncAllocPlttVram));
    GF_AssertFail();
    sub_02014DA0();
}





void ov12_02239730(void) {
    // strb r2, [r4, r1]
    // strh r1, [r0]
    // strh r1, [r0]
    // strb r2, [r4, r1]
    // add r3, sp, #0x28
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // add r0, sp, #0x28
    GfGfx_SetBanks(2, 0x000023FF, (5 - 1));
    // strb r2, [r4, r1]
    // add r3, sp, #0
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // add r0, sp, #0
    GfGfx_SetBanks(4, 0x000023FF, (5 - 1));
    // add r0, #0x88
    PokepicManager_HandleLoadImgAndOrPltt(*((u32*)r4));
    GF_RunVramTransferTasks();
    SpriteSystem_TransferOam();
    PaletteData_PushTransparentBuffers(*((u32*)(r4 + 0x28)));
    DoScheduledBgGpuUpdates(*((u32*)(r4 + 4)));
    // str r0, [r3, r1]
}





void ov12_022397E4(void) {
    PaletteData_PushTransparentBuffers(*((u32*)(r0 + 0xc)));
    GF_RunVramTransferTasks();
    DoScheduledBgGpuUpdates(*((u32*)(r4 + 4)));
    // str r0, [r3, r1]
}





void ov12_02239810(void) {
    sub_020399FC(5, *((u32*)(r1 + 4)));
    ov06_0221BAF0(*((u8*)(r4 + 0x000023FD)));
    // add r0, #0x88
    PokepicManager_DrawAll(*((u32*)r4));
    // add r4, #0x94
    SpriteSystem_DrawSprites(*((u32*)r4));
    SpriteSystem_UpdateTransfer();
    RequestSwap3DBuffers(1, 0);
}





void ov12_02239854(void) {
    BattleSystem_GetMaxBattlers(r1);
    // str r0, [sp]
    BattleSystem_GetCriticalHpMusicFlag(r5);
    BattleSystem_GetBattleType(r5);
    // tst r0, r1
    // tst r0, r4
    // tst r0, r4
    StopSE(0x00000704, r6);
    BattleSystem_SetCriticalHpMusicFlag(r5, 2);
    // ldr r0, [sp]
    BattleSystem_GetOpponentData(r5, r6);
    ov12_02261264();
    BattleSystem_GetBattleSpecial(r5);
    // tst r0, r1
    BattleSystem_GetFieldSide(r5, r4);
    BattleSystem_GetBattleSpecial(r5);
    // tst r0, r1
    OpponentData_GetHpBar(r7, 0x10);
    CalculateHpBarColor(((*((u32*)(r0 + 0x28)) << 0x10) >> 0x10), ((*((u32*)(r0 + 0x2c)) << 0x10) >> 0x10), 0x30);
    MaskOfFlagNo(r4);
    // ldr r0, [sp]
    BattleSystem_GetCriticalHpMusicFlag(r5);
    PlaySE(0x00000704);
    BattleSystem_SetCriticalHpMusicFlag(r5, 1);
    BattleSystem_SetCriticalHpMusicDelay(r5, 4);
    BattleSystem_GetCriticalHpMusicFlag(r5);
    StopSE(0x00000704, 0);
    BattleSystem_SetCriticalHpMusicFlag(r5, 0);
    BattleSystem_GetCriticalHpMusicFlag(r5);
    BattleSystem_GetCriticalHpMusicDelay(r5);
    IsSEPlaying(0x00000704);
    PlaySE(0x00000704, (r4 - 1));
    BattleSystem_SetCriticalHpMusicDelay(r5, 4);
    BattleSystem_SetCriticalHpMusicDelay(r5, ((r1 << 0x18) >> 0x18));
}





void ov12_0223998C(void) {
    // str r0, [r4, r3]
    BgSetPosTextAndCommit(*((u32*)(r1 + 4)), 1, 3, *((u32*)(r1 + 0x00002438)));
    SysTask_Destroy(r5);
}





void ov12_022399BC(void) {
    sub_02039998();
    HandleLoadOverlay(FS_OVERLAY_ID, 2);
}





void ov12_022399D4(void) {
    OverlayManager_CreateAndGetData(0x00001028, 5);
    // str r4, [r5]
    // strb r2, [r5, r0]
    // strb r2, [r5, r1]
    // strh r2, [r5, r0]
    PaletteData_Init(5, (0x00001020 + 1), 0);
    *((u32*)(r5 + 0xc)) = r0;
    PaletteData_SetAutoTransparent(1);
    PaletteData_AllocBuffers(*((u32*)(r5 + 0xc)), 0, (2 << 8), 5);
    // str r1, [sp]
    // str r0, [sp, #4]
    PaletteData_FillPaletteInBuffer(*((u32*)(r5 + 0xc)), 0, 2, 0);
    BgConfig_Alloc(5);
    *((u32*)(r5 + 4)) = r0;
    AllocWindows(5, 1);
    *((u32*)(r5 + 8)) = r0;
    sub_02074EC4(r5);
    GfGfx_DisableEngineAPlanes();
    // add r3, sp, #0x40
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // add r0, sp, #0x40
    GfGfx_SetBanks((5 - 1));
    MIi_CpuClear32(0, (6 << 0x18), (2 << 0x12));
    MIi_CpuClear32(0, (0x62 << 0x14), (2 << 0x10));
    MIi_CpuClear32(0, (0x19 << 0x16), (1 << 0x12));
    MIi_CpuClear32(0, (0x66 << 0x14), (2 << 0x10));
    MIi_CpuClear16(0, (5 << 0x18), (2 << 8));
    // add r3, sp, #0x30
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    SetBothScreensModesAndDisable(r3, r3);
    // add r3, sp, #0x14
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(*((u32*)(r5 + 4)), 1, r3, 0);
    BgClearTilemapBufferAndCommit(*((u32*)(r5 + 4)), 1);
    Options_GetFrame(*((u32*)(r4 + (0x13 << 4))));
    // str r0, [sp]
    // str r0, [sp, #4]
    sub_0200EB80(*((u32*)(r5 + 4)), 1, 1, 0xa);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    PaletteData_LoadNarc(*((u32*)(r5 + 0xc)), 0x10, 8, 5);
    sub_0200E640(r4);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    PaletteData_LoadNarc(*((u32*)(r5 + 0xc)), 0x26, r0, 5);
    // str r1, [sp]
    // str r0, [sp, #4]
    PaletteData_FillPaletteInBuffer(*((u32*)(r5 + 0xc)), 0, 0, 0);
    GfGfx_BothDispOn();
    GfGfx_EngineATogglePlanes(0x10, 1);
    // strh r0, [r2]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    AddWindowParameterized(*((u32*)(r5 + 4)), *((u32*)(r5 + 8)), 1, 2);
    FillWindowPixelBuffer(*((u32*)(r5 + 8)), 0xff);
    DrawFrameAndWindow2(*((u32*)(r5 + 8)), 0, 1, 0xa);
    NewMsgDataFromNarc(1, 0x1b, 0xc5, 5);
    String_New((1 << 8), 5);
    ReadMsgDataIntoString(r4, 0x0000039B, r0);
    // str r3, [sp]
    // str r3, [sp, #4]
    // str r3, [sp, #8]
    AddTextPrinterParameterized(*((u32*)(r5 + 8)), 1, r6, 0);
    String_Delete(r6);
    DestroyMsgData(r4);
    Main_SetVBlankIntrCB(ov12_022397E4, r5);
    // str r0, [sp]
    // str r3, [sp, #4]
    // str r3, [sp, #8]
    PaletteData_BeginPaletteFade(*((u32*)(r5 + 0xc)), 5, 0x0000FFFF, 0);
    WaitingIcon_New(*((u32*)(r5 + 8)), 1);
    // str r0, [r5, r1]
    ov12_0223A7A0(0x00001024);
}





void ov12_02239C28(void) {
    OverlayManager_GetData();
    sub_020399FC(5, *((u32*)(r0 + 4)));
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _02239C52: ; jump table
    SetMasterBrightnessNeutral(0, (*((u16*)(*((u8*)(r4 + 0x00001021)) + 6)) << 0x10));
    sub_02037930(1);
    // strb r1, [r4, r0]
    PaletteData_GetSelectedBuffersBitmask(*((u32*)(r4 + 0xc)), (*((u8*)(r4 + 0x00001021)) + 1));
    // strb r1, [r4, r0]
    sub_02037AC0(0x32, (*((u8*)(r4 + 0x00001021)) + 1));
    // strb r1, [r4, r0]
    sub_02037B38(0x32, (*((u8*)(r4 + 0x00001021)) + 1));
    sub_02037AC0(0x33);
    // strh r1, [r4, r0]
    // strb r1, [r4, r0]
    // strh r1, [r4, r0]
    sub_02039AD8(1, *((u16*)(r4 + 0x00001022)));
    sub_02075074(r4, (5 << 6));
    // strb r1, [r4, r0]
    sub_020750E0(r4, (*((u8*)(r4 + 0x00001021)) + 1));
    sub_02037AC0(0x34);
    // strb r1, [r4, r0]
    sub_02075108(r4, (*((u8*)(r4 + 0x00001021)) + 1));
    // strb r1, [r4, r0]
    sub_0207514C(r4, (*((u8*)(r4 + 0x00001021)) + 1));
    sub_02037AC0(0x35);
    // strb r1, [r4, r0]
    sub_02075178(r4, (*((u8*)(r4 + 0x00001021)) + 1));
    // strb r1, [r4, r0]
    sub_020751B8(r4, (*((u8*)(r4 + 0x00001021)) + 1));
    sub_02037AC0(0x36);
    // strb r1, [r4, r0]
    sub_020751DC(r4, (*((u8*)(r4 + 0x00001021)) + 1));
    // strb r1, [r4, r0]
    sub_02075220(r4, (*((u8*)(r4 + 0x00001021)) + 1));
    sub_02037AC0(0x37);
    // strb r1, [r4, r0]
    sub_02075248(r4, (*((u8*)(r4 + 0x00001021)) + 1));
    // strb r1, [r4, r0]
    sub_0207527C(r4, (*((u8*)(r4 + 0x00001021)) + 1));
    sub_02037AC0(0x38);
    // strb r1, [r4, r0]
    sub_020752D8(r4, (*((u8*)(r4 + 0x00001021)) + 1));
    // strb r1, [r4, r0]
    // tst r1, r2
    // strb r1, [r4, r0]
    sub_0203769C(0x00001021, 0x21, *((u32*)*((u32*)r4)));
    sub_02037AC0(0x39);
    // strb r1, [r4, r0]
    sub_0207531C(r4, 1);
    sub_02037AC0(0x39);
    // strb r1, [r4, r0]
    // strb r1, [r4, r0]
    sub_0203769C((0x00001021 - 1), 1);
    sub_02037B38(0x39);
    // strb r1, [r4, r0]
    sub_02075350(r4, 1, 0x39);
    // strb r1, [r4, r0]
    sub_0203769C(0x00001021, (*((u8*)(r4 + 0x00001021)) + 1));
    sub_02037AC0(0x3a);
    // strb r1, [r4, r0]
    sub_0207531C(r4, 3);
    sub_02037AC0(0x3a);
    // strb r1, [r4, r0]
    // strb r1, [r4, r0]
    sub_0203769C((0x00001021 - 1), 1);
    sub_02037B38(0x3a);
    // strb r1, [r4, r0]
    sub_02075350(r4, 3, 0x3a);
    // strb r1, [r4, r0]
    sub_0203769C(0x00001021, (*((u8*)(r4 + 0x00001021)) + 1));
    sub_02037AC0(0x3b);
    // strb r1, [r4, r0]
    sub_020753A8(r4, 1);
    sub_02037AC0(0x3b);
    // strb r1, [r4, r0]
    // strb r1, [r4, r0]
    sub_0203769C((0x00001021 - 1), 1);
    sub_02037B38(0x3b);
    // strb r1, [r4, r0]
    sub_020753D4(r4, 1, 0x3b);
    // strb r1, [r4, r0]
    sub_0203769C(0x00001021, (*((u8*)(r4 + 0x00001021)) + 1));
    sub_02037AC0(0x3c);
    // strb r1, [r4, r0]
    sub_020753A8(r4, 3);
    sub_02037AC0(0x3c);
    // strb r1, [r4, r0]
    // strb r1, [r4, r0]
    sub_0203769C((0x00001021 - 1), 1);
    sub_02037B38(0x3c);
    // strb r1, [r4, r0]
    sub_020753D4(r4, 3, 0x3c);
    // strb r1, [r4, r0]
    sub_02037454(0x00001021, (*((u8*)(r4 + 0x00001021)) + 1));
    Heap_Free(*((u32*)(r4 + 0x10)), 0x00001020, *((u8*)(r4 + 0x00001020)));
    // strb r3, [r4, r0]
    // strh r3, [r4, r1]
    // strb r2, [r4, r1]
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r3, [sp, #8]
    PaletteData_BeginPaletteFade(*((u32*)(r4 + 0xc)), 5, 0x0000FFFF, 0);
    // strh r2, [r4, r0]
    sub_02039AD8(1, *((u16*)(r4 + (r1 + 2))), (*((u16*)(r4 + (r1 + 2))) + 1));
    PaletteData_GetSelectedBuffersBitmask(*((u32*)(r4 + 0xc)));
    sub_0200F450(*((u32*)(r4 + 0x00001024)));
    sub_02037930(0);
}





void ov12_0223A088(void) {
}





void ov12_0223A0D4(void) {
    OverlayManager_CreateAndGetData(0x00002490, 5);
    OverlayManager_GetArgs(r5);
    MIi_CpuClearFast(0, r4, 0x00002490);
    ov12_02238A68(r4, r5);
    // tst r1, r0
    // tst r1, r2
    // tst r0, r1
    sub_0203A914(*((u32*)(r4 + 0x2c)), 0x80, *((u32*)(r4 + 0x0000240C)));
    HandleLoadOverlay(FS_OVERLAY_ID, 2);
    // tst r0, r1
    Heap_Alloc(5, 0x30);
    // str r0, [r4, r1]
    MIi_CpuClearFast(0, *((u32*)(r4 + (0x71 << 2))), 0x30);
    sub_0203769C();
    sub_020378AC(((r0 << 0x18) >> 0x18));
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0223A166: ; jump table
    // add r0, r4, r0
    *((u32*)(*((u32*)(r4 + (0x71 << 2))) + 4)) = *((u32*)((r5 << 2) + 0x68));
    BattleSystem_GetBattlerIdPartner(r4, r5);
    // add r0, r4, r0
    *((u32*)(*((u32*)(r4 + (0x71 << 2))) + 0xc)) = *((u32*)((r0 << 2) + 0x68));
    BattleSystem_GetBattlerIdPartner(r4, r5);
    // add r0, r4, r0
    *((u32*)(*((u32*)(r4 + (0x71 << 2))) + 4)) = *((u32*)((r0 << 2) + 0x68));
    // add r1, r4, r1
    *((u32*)(*((u32*)(r4 + (0x71 << 2))) + 0xc)) = *((u32*)((r5 << 2) + 0x68));
    *((u32*)(*((u32*)(r4 + (0x71 << 2))) + 0x24)) = 5;
    // add r0, #0x28
    // strb r1, [r0]
    sub_020378AC(r5, 0, 5);
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0223A1DC: ; jump table
    // add r0, #0x29
    // strb r1, [r0]
    // add r0, #0x29
    // strb r1, [r0]
    ov05_0221BA00(*((u32*)(r4 + (0x71 << 2))), 1);
}





void ov12_0223A218(void) {
    // add r0, #0x2b
    // add r0, r0, r5
}





void ov12_0223A260(void) {
    OverlayManager_GetData();
    OverlayManager_GetArgs(r5);
    // tst r1, r0
    // tst r1, r2
    // tst r0, r1
    sub_0203A914(*((u32*)(r4 + 0x2c)), 0x80, *((u32*)(r4 + 0x0000240C)));
    sub_0203769C(0);
    Heap_Alloc(5, 0x30);
    // str r0, [r4, r1]
    MIi_CpuClearFast(0, *((u32*)(r4 + (0x71 << 2))), 0x30);
    // tst r0, r1
    sub_020378AC(0, *((u32*)(r4 + 0x2c)));
    // add r0, r2, r0
    *((u32*)((r0 << 2) + 4)) = *((u32*)(r5 + 0x68));
    sub_020378AC(r6, *((u32*)(r5 + 0x68)), *((u32*)(r4 + (0x71 << 2))));
    PlayerProfile_GetPlayerName_NewString(*((u32*)(r5 + 0x48)), 5);
    // add r1, r2, r1
    *((u32*)((r7 << 2) + 0x14)) = r0;
    *((u32*)(*((u32*)(r4 + (0x71 << 2))) + 0x24)) = 5;
    // add r1, #0x28
    // strb r2, [r1]
    // add r0, #0x29
    // strb r2, [r0]
    sub_020378AC((r5 + 4), *((u32*)(r4 + (0x71 << 2))), 1);
    // add r1, r4, r7
    // add r0, r2, r0
    *((u32*)((r0 << 2) + 4)) = *((u32*)(r1 + 0x68));
    // eor r0, r5
    // str r0, [sp]
    sub_020378AC(1, *((u32*)(r1 + 0x68)), *((u32*)(r4 + (0x71 << 2))));
    // add r1, r4, r6
    // add r0, r1, r0
    *((u32*)((r0 << 2) + 4)) = *((u32*)(r1 + 0x68));
    sub_020378AC(r5, *((u32*)(r4 + (0x71 << 2))), *((u32*)(r1 + 0x68)));
    // add r0, r4, r7
    PlayerProfile_GetPlayerName_NewString(*((u32*)(r0 + 0x48)), 5);
    // add r1, r2, r1
    *((u32*)((r5 << 2) + 0x14)) = r0;
    // ldr r0, [sp]
    sub_020378AC((r5 << 2), *((u32*)(r4 + (0x71 << 2))));
    // add r0, r4, r6
    PlayerProfile_GetPlayerName_NewString(*((u32*)(r0 + 0x48)), 5);
    // add r2, r3, r2
    *((u32*)((r5 << 2) + 0x14)) = r0;
    *((u32*)(*((u32*)(r4 + (0x71 << 2))) + 0x24)) = 5;
    // add r0, #0x28
    // strb r2, [r0]
    // add r0, #0x29
    // strb r2, [r0]
    ov05_0221BA00(*((u32*)(r4 + (0x71 << 2))), (0x71 << 2), 0, *((u32*)(r4 + (0x71 << 2))));
}





void ov12_0223A3A8(void) {
    // add r0, #0x2b
    // add r0, r0, r5
}





void ov12_0223A3F0(void) {
    OverlayManager_GetArgs();
    // tst r1, r0
    // tst r1, r2
    // tst r0, r1
    sub_0203769C(0, 0x80, *((u32*)(r0 + (0x63 << 2))));
    HandleLoadOverlay(FS_OVERLAY_ID, 2);
    Heap_Alloc(5, 0x30);
    // str r6, [r7, r0]
    MIi_CpuClearFast(0, r0, 0x30);
    // str r7, [r6]
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0223A458: ; jump table
    sub_02039998((*((u16*)(*((u32*)(r7 + 0x14)) + 6)) << 0x10));
    GameStats_Inc(*((u32*)(r7 + (0x51 << 2))), 0x16);
    GameStats_Inc(*((u32*)(r7 + (0x51 << 2))), 0x1b);
    sub_02039998();
    GameStats_Inc(*((u32*)(r7 + (0x51 << 2))), 0x17);
    GameStats_Inc(*((u32*)(r7 + (0x51 << 2))), 0x1c);
    sub_02039998();
    GameStats_Inc(*((u32*)(r7 + (0x51 << 2))), 0x18);
    GameStats_Inc(*((u32*)(r7 + (0x51 << 2))), 0x1d);
    // tst r0, r1
    sub_020378AC(0, *((u32*)r7));
    // add r0, r6, r0
    *((u32*)((r0 << 2) + 4)) = *((u32*)(r5 + 4));
    sub_020378AC(r4, *((u32*)(r5 + 4)));
    // str r0, [sp, #8]
    // add r0, #0xf8
    PlayerProfile_GetPlayerName_NewString(*((u32*)r5), 5);
    // ldr r1, [sp, #8]
    // add r1, r6, r1
    *((u32*)((r1 << 2) + 0x14)) = r0;
    *((u32*)(r6 + 0x24)) = 5;
    // add r0, #0x28
    // strb r1, [r0]
    // add r0, #0x29
    // strb r1, [r0]
    // add r0, #0x2a
    // strb r1, [r0]
    // add r0, #0x2a
    // strb r1, [r0]
    // str r0, [sp]
    sub_020378AC((r4 + 1), 3);
    // ldr r1, [sp]
    // add r1, r7, r1
    // add r0, r6, r0
    *((u32*)((r0 << 2) + 4)) = *((u32*)(r1 + 4));
    // eor r0, r4
    // str r0, [sp, #4]
    sub_020378AC(1, *((u32*)(r1 + 4)));
    // add r1, r7, r5
    // add r0, r6, r0
    *((u32*)((r0 << 2) + 4)) = *((u32*)(r1 + 4));
    sub_020378AC(r4, *((u32*)(r1 + 4)));
    // ldr r0, [sp]
    // add r0, r7, r0
    // add r0, #0xf8
    PlayerProfile_GetPlayerName_NewString(*((u32*)r0), 5);
    // add r1, r6, r1
    *((u32*)((r4 << 2) + 0x14)) = r0;
    // ldr r0, [sp, #4]
    sub_020378AC((r4 << 2));
    // add r0, r7, r5
    // add r0, #0xf8
    PlayerProfile_GetPlayerName_NewString(*((u32*)r0), 5);
    // add r1, r6, r1
    *((u32*)((r4 << 2) + 0x14)) = r0;
    *((u32*)(r6 + 0x24)) = 5;
    // add r0, #0x28
    // strb r1, [r0]
    // add r0, #0x29
    // strb r1, [r0]
    // add r0, #0x2a
    // strb r1, [r0]
    // add r0, #0x2a
    // strb r1, [r0]
    // add r0, #0x2c
    // strb r1, [r0]
    ov05_0221BA00(r6, *((u8*)(r7 + 0x000001B2)));
}





void ov12_0223A5E4(void) {
    // add r0, #0x2b
}





void ov12_0223A620(void) {
    // tst r1, r2
    // tst r0, r1
    TextFlags_SetAutoScrollParam(1, *((u32*)(r0 + 0x0000240C)), *((u32*)(r0 + 0x2c)));
    TextFlags_SetCanABSpeedUpPrint(1);
    TextFlags_SetCanTouchSpeedUpPrint(0);
    TextFlags_SetAutoScrollParam(3);
    TextFlags_SetCanABSpeedUpPrint(1);
    TextFlags_SetCanTouchSpeedUpPrint(1);
}





void ov12_0223A664(void) {
    // str r0, [sp]
    // tst r0, r3
    // ldr r0, [sp]
    // sub r2, #0x10
    // strb r1, [r0, r2]
    // add r4, sp, #0x30
    // add r5, sp, #0x20
    // stmia r4!, {r3}
    // stmia r5!, {r2}
    sub_0203769C((0x5f << 2), (1 + 4), *((u32*)(1 + (0x5f << 2))), (0 + 1));
    // str r0, [sp, #0x10]
    sub_02037454();
    // str r0, [sp, #0xc]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #0x14]
    // add r0, sp, #0x30
    // add r2, sp, #0x20
    // str r0, [sp, #8]
    // str r2, [sp, #0x18]
    // mov ip, r0
    // ldr r0, [sp, #4]
    // ldr r0, [sp, #0xc]
    // ldr r1, [sp, #0x18]
    // add r3, r1, r0
    // mov r1, ip
    // add r4, r1, r0
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #8]
    // str r1, [r0]
    // ldr r0, [sp, #0x1c]
    // str r6, [r4]
    // str r0, [r2]
    // str r7, [r3]
    // ldr r0, [sp, #0xc]
    // ldr r0, [sp, #8]
    // str r0, [sp, #8]
    // ldr r0, [sp, #4]
    // ldr r0, [sp, #0x14]
    // str r1, [sp, #4]
    // ldr r1, [sp, #0x30]
    // ldr r0, [sp, #0x10]
    // ldr r0, [sp]
    // strb r2, [r0, r1]
    // ldr r0, [sp]
    // tst r0, r1
    // tst r0, r1
    // ldr r0, [sp, #0x10]
    sub_020378AC(8, *((u32*)((*((u32*)r3) + 4) + 0x2c)), 1, (r3 + 4));
    // ldr r0, [sp, #0x30]
    sub_020378AC();
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0223A74C: ; jump table
    // tst r0, r4
    // ldr r0, [sp]
    // ldr r0, [sp]
    // str r2, [r0, r1]
    // tst r0, r4
    // ldr r0, [sp]
    // ldr r0, [sp]
    // str r2, [r0, r1]
    // ldr r0, [sp]
    // ldr r0, [sp]
    // str r2, [r0, r1]
}





void ov12_0223A7A0(void) {
    // sub r0, r1, r0
    // sub r0, r1, r0
}




