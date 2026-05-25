/* Decompiled from asm/overlay_40.s */
#include "global.h"

void ov40_0222B6E0(void) {
    Main_SetVBlankIntrCB(0, 0);
    HBlankInterruptDisable();
    GfGfx_DisableEngineAPlanes();
    GfGfx_DisableEngineBPlanes();
    // and r1, r0
    // str r1, [r2]
    // and r0, r1
    // str r0, [r2]
    GF_CreateVramTransferManager(4, 0x6d, 0x04001000);
    NARC_New(0xbf, 0x6d);
    *((u32*)(r4 + 0x14)) = r0;
    BgConfig_Alloc(0x6d);
    *((u32*)(r4 + 0x24)) = r0;
    PaletteData_Init(0x6d);
    *((u32*)(r4 + 0x28)) = r0;
    // str r0, [sp]
    // str r1, [sp, #4]
    GF_3DVramMan_Create(0x6d, 0, 1, 0);
    *((u32*)(r4 + 0x60)) = r0;
    PokepicManager_Create(0x6d);
    *((u32*)(r4 + 0x64)) = r0;
    NNS_G2dSetupSoftwareSpriteCamera();
    PaletteData_SetAutoTransparent(*((u32*)(r4 + 0x28)), 1);
    PaletteData_AllocBuffers(*((u32*)(r4 + 0x28)), 0, (2 << 8), 0x6d);
    PaletteData_AllocBuffers(*((u32*)(r4 + 0x28)), 1, (1 << 9), 0x6d);
    PaletteData_AllocBuffers(*((u32*)(r4 + 0x28)), 2, (2 << 8), 0x6d);
    PaletteData_AllocBuffers(*((u32*)(r4 + 0x28)), 3, (2 << 8), 0x6d);
    ov40_0222BA90(*((u32*)(r4 + 0x24)));
    ov40_0222BC68(r4);
    sub_020210BC();
    sub_02021148(4);
    *((u32*)(r4 + 0x44)) = 1;
    ov40_0222C360(r4);
    TextFlags_SetCanTouchSpeedUpPrint(1);
    Main_SetVBlankIntrCB(ov40_0222BD04, r4);
    ov40_0223D544(r4);
    G2dRenderer_SetObjCharTransferReservedRegion(1, 0x00200010);
    G2dRenderer_SetPlttTransferReservedRegion(1);
    G2dRenderer_SetObjCharTransferReservedRegion(2, 0x00200010);
    G2dRenderer_SetPlttTransferReservedRegion(2);
    sub_0203A880();
    sub_0203A948(1, 0x6d);
    sub_0203A4AC(0x6d);
    // add r1, sp, #0x10
    NNS_G2dGetUnpackedPaletteData();
    // str r0, [sp]
    // ldr r1, [sp, #0x10]
    PaletteData_LoadPalette(*((u32*)(r4 + 0x28)), *((u32*)(r1 + 0xc)), 2, 0xe0);
    // str r0, [sp]
    // ldr r1, [sp, #0x10]
    PaletteData_LoadPalette(*((u32*)(r4 + 0x28)), *((u32*)(r1 + 0xc)), 3, 0xe0);
    Heap_Free(r5);
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x20]
    // str r0, [sp, #0x24]
    // mov r5, sp
    // str r0, [sp, #4]
    // sub r5, #0x10
    // str r0, [sp, #8]
    // add r3, sp, #0x14
    // str r1, [sp, #0x1c]
    // str r0, [sp, #0xc]
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // ldmia r5!, {r0, r1, r2, r3}
    sub_02087284(*((u32*)r3), 1, r5);
    // str r0, [r4, r1]
    // add r1, #0x5c
    sub_02087878(*((u32*)(r4 + (0x6f << 4))), *((u8*)r4));
    sub_020878B0(*((u32*)(r4 + (0x6f << 4))), 0);
    sub_020879E0(*((u32*)(r4 + (0x6f << 4))), 0);
    // str r0, [sp, #0x1c]
    // str r0, [sp, #0x24]
    // mov r5, sp
    // str r0, [sp, #4]
    // sub r5, #0x10
    // str r0, [sp, #8]
    // add r3, sp, #0x14
    // str r0, [sp, #0xc]
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // ldmia r5!, {r0, r1, r2, r3}
    sub_02087284(*((u32*)r3), r5);
    // str r0, [r4, r1]
    // add r1, #0x5c
    sub_02087878(*((u32*)(r4 + 0x000006F4)), *((u8*)r4));
    sub_020878B0(*((u32*)(r4 + 0x000006F4)), 0);
    sub_020879E0(*((u32*)(r4 + 0x000006F4)), 0);
    FontSystem_NewInit(0x14, 0x6d);
    *((u32*)(r4 + 0x50)) = r0;
    NewMsgDataFromNarc(0, 0x1b, 0xd, 0x6d);
    *((u32*)(r4 + 0x48)) = r0;
    NewMsgDataFromNarc(0, 0x1b, 0x1a, 0x6d);
    *((u32*)(r4 + 0x4c)) = r0;
    ov40_0222FCCC(r4);
    sub_02088030(r4);
    ov40_0222C4F8(r4);
    ov40_0222FBF8(r4);
}





void ov40_0222B934(void) {
    GfGfx_EngineATogglePlanes(1, 0);
    GfGfx_EngineATogglePlanes(2, 0);
    GfGfx_EngineATogglePlanes(4, 0);
    GfGfx_EngineATogglePlanes(8, 0);
    GfGfx_EngineBTogglePlanes(1, 0);
    GfGfx_EngineBTogglePlanes(2, 0);
    GfGfx_EngineBTogglePlanes(4, 0);
    GfGfx_EngineBTogglePlanes(8, 0);
    FreeBgTilemapBuffer(*((u32*)(r5 + 0x24)), 0);
    FreeBgTilemapBuffer(*((u32*)(r5 + 0x24)), 1);
    FreeBgTilemapBuffer(*((u32*)(r5 + 0x24)), 2);
    FreeBgTilemapBuffer(*((u32*)(r5 + 0x24)), 3);
    FreeBgTilemapBuffer(*((u32*)(r5 + 0x24)), 4);
    FreeBgTilemapBuffer(*((u32*)(r5 + 0x24)), 5);
    FreeBgTilemapBuffer(*((u32*)(r5 + 0x24)), 6);
    FreeBgTilemapBuffer(*((u32*)(r5 + 0x24)), 7);
    Heap_Free(*((u32*)(r5 + 0x24)));
    PaletteData_FreeBuffers(*((u32*)(r5 + 0x28)), 0);
    PaletteData_FreeBuffers(*((u32*)(r5 + 0x28)), 1);
    PaletteData_FreeBuffers(*((u32*)(r5 + 0x28)), 2);
    PaletteData_FreeBuffers(*((u32*)(r5 + 0x28)), 3);
    PaletteData_Free(*((u32*)(r5 + 0x28)));
    Save_Misc_Get(*((u32*)(r5 + (0x83 << 4))));
    // add r1, #0x5c
    sub_0202AC1C(*((u8*)r5));
    NARC_Delete(*((u32*)(r5 + 0x14)));
    SysTask_Destroy(*((u32*)(r5 + 0x0000416C)));
    SpriteSystem_FreeResourcesAndManager(*((u32*)(r5 + 0x18)), *((u32*)(r5 + 0x1c)));
    SpriteSystem_Free(*((u32*)(r5 + 0x18)));
    sub_0203A914();
    sub_02021238();
    TouchHitboxController_Destroy(*((u32*)(r5 + 0x2c)));
    TextFlags_SetCanTouchSpeedUpPrint(0);
    Heap_Free(*((u32*)(r5 + 0x0000087C)));
    Heap_Free(*((u32*)(r4 + 0x0000088C)));
    sub_020135AC(*((u32*)(r5 + 0x50)));
    DestroyMsgData(*((u32*)(r5 + 0x48)));
    DestroyMsgData(*((u32*)(r5 + 0x4c)));
    GF_3DVramMan_Delete(*((u32*)(r5 + 0x60)));
    PokepicManager_Delete(*((u32*)(r5 + 0x64)));
    ov40_0223D600(r5);
    Main_SetVBlankIntrCB(0, 0);
    GF_DestroyVramTransferManager();
}





void ov40_0222BA90(void) {
    GfGfx_DisableEngineAPlanes();
    // add r3, sp, #0x2c
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    SetBothScreensModesAndDisable(r3, r3);
    // add r3, sp, #4
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // add r0, sp, #4
    GfGfx_SetBanks((5 - 1));
    MIi_CpuClear32(0, (6 << 0x18), (2 << 0x12));
    MIi_CpuClear32(0, (0x62 << 0x14), (2 << 0x10));
    MIi_CpuClear32(0, (0x19 << 0x16), (1 << 0x12));
    MIi_CpuClear32(0, (0x66 << 0x14), (2 << 0x10));
    InitBgFromTemplate(r4, 0, ov40_02244CC8, 0);
    InitBgFromTemplate(r4, 1, ov40_02244CE4, 0);
    InitBgFromTemplate(r4, 2, ov40_02244D00, 0);
    InitBgFromTemplate(r4, 3, ov40_02244D1C, 0);
    BgClearTilemapBufferAndCommit(r4, 0);
    BgClearTilemapBufferAndCommit(r4, 1);
    BgClearTilemapBufferAndCommit(r4, 2);
    BgClearTilemapBufferAndCommit(r4, 3);
    InitBgFromTemplate(r4, 4, ov40_02244D38, 0);
    InitBgFromTemplate(r4, 5, ov40_02244D54, 0);
    InitBgFromTemplate(r4, 6, ov40_02244D70, 0);
    InitBgFromTemplate(r4, 7, ov40_02244D8C, 0);
    BgClearTilemapBufferAndCommit(r4, 4);
    BgClearTilemapBufferAndCommit(r4, 5);
    BgClearTilemapBufferAndCommit(r4, 6);
    BgClearTilemapBufferAndCommit(r4, 7);
    GfGfx_EngineATogglePlanes(1, 0);
    GfGfx_EngineATogglePlanes(2, 1);
    GfGfx_EngineATogglePlanes(4, 0);
    GfGfx_EngineATogglePlanes(8, 0);
    GfGfx_EngineATogglePlanes(0x10, 1);
    GfGfx_EngineBTogglePlanes(1, 0);
    GfGfx_EngineBTogglePlanes(2, 1);
    GfGfx_EngineBTogglePlanes(4, 0);
    GfGfx_EngineBTogglePlanes(8, 0);
    GfGfx_EngineBTogglePlanes(0x10, 1);
    ov40_0222BC44(1);
    // str r0, [sp]
    G2x_SetBlendAlpha_(0x04000050, 4, 0x12, 7);
    // str r0, [sp]
    G2x_SetBlendAlpha_(0x04001050, 4, 0x12, 7);
}





void ov40_0222BC44(void) {
    *((u8*)(gSystem + 9)) = r0;
}





void ov40_0222BC54(void) {
}





void ov40_0222BC68(void) {
    SpriteSystem_Alloc(0x6d);
    // add r2, sp, #0x2c
    *((u32*)(r4 + 0x18)) = r0;
    // ldmia r5!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r2!, {r0, r1}
    // add r5, sp, #0x18
    // ldmia r6!, {r0, r1}
    // stmia r5!, {r0, r1}
    // ldmia r6!, {r0, r1}
    // stmia r5!, {r0, r1}
    // str r0, [r5]
    SpriteSystem_Init(*((u32*)(r4 + 0x18)), r2, ov40_02244C80, 0x20);
    // add r2, sp, #0
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    SpriteManager_New(*((u32*)(r4 + 0x18)), ov40_02244C68);
    *((u32*)(r4 + 0x1c)) = r0;
    SpriteSystem_InitSprites(*((u32*)(r4 + 0x18)), *((u32*)(r4 + 0x1c)), 0xc0);
    GF_AssertFail();
    // add r2, sp, #0
    SpriteSystem_InitManagerWithCapacities(*((u32*)(r4 + 0x18)), *((u32*)(r4 + 0x1c)));
    GF_AssertFail();
    SpriteSystem_GetRenderer(*((u32*)(r4 + 0x18)));
    G2dRenderer_SetSubSurfaceCoords(0, (1 << 0x14));
}





void ov40_0222BD04(void) {
    GF_RunVramTransferTasks();
    PaletteData_PushTransparentBuffers(*((u32*)(r4 + 0x28)));
    DoScheduledBgGpuUpdates(*((u32*)(r4 + 0x24)));
    // str r0, [r3, r1]
}





void ov40_0222BD30(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0222BD4A: ; jump table
    // blx r1
    ov40_0222BF64(r0, 1, r0, r1);
    ov40_0222BF80(r4, 0);
    ov40_0222BF80(r4, 1);
    // blx r1
    ov40_0222BF64(r4, 0x10, r0, r5);
    // blx r1
    ov40_0222BF64(r4, 0x10, r0, r5);
    // blx r1
    ov40_0222BF64(r4, 0x10, r0, r5);
    // blx r1
    ov40_0222BF64(r4, 0x10, r0, r5);
    // blx r1
    ov40_0222BF64(r4, 0x10, r0, r5);
    // blx r1
    ov40_0222BF64(r4, 0x10, r0, r5);
    // blx r1
    ov40_0222BF64(r4, 0x10, r0, r5);
    // blx r1
    ov40_0222BF64(r4, 0x10, r0, r5);
    // blx r1
    ov40_0222BF64(r4, 0x10, r0, r5);
    // blx r1
    ov40_0222BF64(r4, 0x10, r0, r5);
    // blx r1
    ov40_0222BF64(r4, 0x10, r0, r5);
    // blx r1
    ov40_0222BF64(r4, 0x10, r0, r5);
    // blx r1
    ov40_0222BF64(r4, 0x10, r0, r5);
    ov40_0222BF64(0xff, 1, r5);
    // blx r1
    ov40_0222BF64(r4, 0x10, r0, r5);
    ov40_02230D20();
    Thunk_G3X_Reset(1);
    PokepicManager_DrawAll(*((u32*)(r4 + 0x64)));
    RequestSwap3DBuffers(1, 0);
    ov40_0223D5E8(r4);
}





void ov40_0222BF64(void) {
    // str r1, [r3]
}





void ov40_0222BF80(void) {
}





void ov40_0222BF8C(void) {
}





void ov40_0222BF94(void) {
    sub_02088030();
    ov40_0222CE7C(r4);
    // str r1, [r4, r0]
}





void ov40_0222BFB0(void) {
    // add r5, r0, r4
    // str r1, [r5, r4]
    // add r1, #0xc
    // add r5, r5, r4
    // add r4, r0, r1
    // sub r1, #0x14
    // str r5, [r4, r1]
    // add r4, #0xc
    // add r1, r1, r5
    // str r1, [r0, r3]
    // str r1, [r0, r2]
    // add r2, #0xc
    // str r4, [r0, r2]
    ov40_0222BF94(0, *((u32*)(r0 + 0x00000818)), 0x000006D8, 0x00000818);
}





void ov40_0222C018(void) {
}





void ov40_0222C03C(void) {
    // add r2, r2, r3
    // add r2, r2, r2
    // add r2, pc
    // asr r2, r2, #0x10
    // add pc, r2
    // _0222C060: ; jump table
    // add r1, #0x50
    sub_02087A84(*((u32*)(r0 + 0x00000818)), 0, 0, (0x24 * *((u32*)(r0 + 0x000006E4))));
    ov40_0222BF80(r4, 2);
    ov40_0222BF64(2, 1, *((u32*)(r4 + 0x10)));
    ov40_0222BF64(3, 1, *((u32*)(r4 + 0x10)));
    ov40_0222BF64(4, 1, *((u32*)(r4 + 0x10)));
    ov40_0222BF64(5, 1, *((u32*)(r4 + 0x10)));
    ov40_0222BF64(6, 1, *((u32*)(r4 + 0x10)));
    ov40_0222BF64(7, 1, *((u32*)(r4 + 0x10)));
    ov40_0222BF64(8, 1, *((u32*)(r4 + 0x10)));
    ov40_0222BF64(9, 1, *((u32*)(r4 + 0x10)));
    ov40_0222BF64(0xa, 1, *((u32*)(r4 + 0x10)));
    ov40_0222BF64(0xb, 1, *((u32*)(r4 + 0x10)));
    ov40_0222BF64(0xc, 1, *((u32*)(r4 + 0x10)));
    ov40_0222BF64(0xd, 1, *((u32*)(r4 + 0x10)));
    ov40_0222BF64(0xe, 1, *((u32*)(r4 + 0x10)));
    ov40_0222BF64(0xf, 1, *((u32*)(r4 + 0x10)));
    ov40_0222BF64(0x11, 1, *((u32*)(r4 + 0x10)));
}





void ov40_0222C15C(void) {
    // add r2, r2, r3
    // add r2, r2, r2
    // add r2, pc
    // asr r2, r2, #0x10
    // add pc, r2
    // _0222C184: ; jump table
    // add r1, r5, r0
    ov40_0222DD9C(r0, 0x0000010D, (*((u16*)(*((u32*)r0) + 6)) << 0x10), (0x24 * *((u32*)(r0 + 0x000006E4))));
    // add r1, #0x18
    Save_FashionData_Get(*((u32*)(r5 + r1)));
    sub_0202B9B8(r4);
    sub_0202BC10();
    ov40_0222DD9C(r5, 0x00000122);
    ov40_0222DD94();
    ov40_0222DD9C(r5, 0x00000111);
    // add r1, #0x64
    ov40_0222DD9C(0x81, 0x0000270F);
    PlaySE(0x0000057C);
    PlaySE(0x0000057B);
}





void ov40_0222C23C(void) {
    // str r5, [r4, r0]
    ov40_0222C15C(r2);
    // add r1, r4, r0
    // add r2, sp, #0
    // add r1, sp, #0
    // add r1, #2
    ov40_0222D294(*((u32*)(r1 + 0x000005FC)));
    // add r3, sp, #0
    // ldrsh r1, [r3, r1]
    // ldrsh r2, [r3, r2]
    // add r1, #0x10
    // asr r1, r1, #0x10
    sub_02087948(*((u32*)(r4 + (0x6f << 4))), (2 << 0x10), 0);
    // add r3, sp, #0
    // ldrsh r1, [r3, r1]
    // ldrsh r2, [r3, r2]
    // add r1, #0x10
    // asr r1, r1, #0x10
    sub_020878B8(*((u32*)(r4 + (0x6f << 4))), (2 << 0x10), 0);
    // add r0, r6, r5
    // add r0, #0x54
    // str r5, [r4, r0]
    // add r1, r5, r2
    ov40_0222BF80(r4, *((u32*)(*((u32*)(r4 + 0x000006E4)) + 0x14)), (*((u32*)(r4 + 0x000006E4)) * 0x24), 0x24);
    // add r1, r3, r1
    // add r0, #0x50
    sub_02087A84(*((u32*)(r4 + 0x00000818)), 0, 0, *((u32*)(r4 + 0x00000818)));
    ov40_0222C434(r4);
    sub_020879E0(*((u32*)(r4 + (0x6f << 4))), 1);
    ov40_0222DFE8(r4, 0xc1, *((u32*)(r4 + 0x0000086C)));
    ov40_0222DFE8(r4, 0x0000012D);
    // add r1, #0x30
    ov40_0222DE40(r4);
    // str r1, [r4, r0]
}





void ov40_0222C360(void) {
    // add r2, #0x30
    // str r2, [r3, r0]
    // add r3, #0x28
    // str r0, [sp]
    // add r0, #0x30
    TouchHitboxController_Create(r0, 5, ov40_0222C23C, r0);
    *((u32*)(r4 + 0x2c)) = r0;
}





void ov40_0222C39C(void) {
    // str r0, [sp]
    // ldr r5, [sp]
    // str r4, [sp, #4]
    // add r7, sp, #8
    // ldr r1, [sp]
    // strb r6, [r0]
    *((u8*)(*((u32*)(r5 + 0x0000060C)) + 1)) = 0;
    *((u8*)(*((u32*)(r5 + 0x0000060C)) + 2)) = 0;
    *((u8*)(*((u32*)(r5 + 0x0000060C)) + 3)) = 0;
    // add r1, sp, #8
    // add r1, #2
    // add r2, sp, #8
    ManagedSprite_GetPositionXY(*((u32*)(r5 + 0x000005FC)), 0x00000818);
    // ldrsh r1, [r7, r0]
    // sub r1, #0x10
    // strb r1, [r0]
    // ldrsh r1, [r7, r0]
    // add r1, #0x10
    *((u8*)(*((u32*)(r5 + 0x0000060C)) + 1)) = r1;
    // ldrsh r1, [r7, r0]
    *((u8*)(*((u32*)(r5 + 0x0000060C)) + 2)) = r1;
    // ldrsh r1, [r7, r0]
    // add r1, #0xa0
    *((u8*)(*((u32*)(r5 + 0x0000060C)) + 3)) = r1;
    // ldr r0, [sp, #4]
    // add r4, #0x24
    // add r5, #0x28
    // str r0, [sp, #4]
}





void ov40_0222C434(void) {
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    ManagedSprite_GetPositionXY(*((u32*)(r0 + 0x000005FC)));
    // strb r4, [r0]
    *((u8*)(*((u32*)(r5 + 0x0000060C)) + 1)) = r4;
    *((u8*)(*((u32*)(r5 + 0x0000060C)) + 2)) = r4;
    // add r5, #0x28
    *((u8*)(*((u32*)(r5 + r7)) + 3)) = r4;
}





void ov40_0222C474(void) {
}





void ov40_0222C480(void) {
    // str r1, [r4, r0]
    // str r1, [r4, r0]
    GF_AssertFail(0x000006D8, 0);
    // add r1, r4, r0
    // str r1, [r4, r0]
}





void ov40_0222C4B8(void) {
    // str r3, [r0, r1]
    // str r2, [r0, r1]
    // str r2, [r0, r1]
}





void ov40_0222C4DC(void) {
    // ldr r1, _0222C4E4 ; =0x00000838
    // ldr r0, [r0, r1]
    // bx lr
    // nop
    // _0222C4E4: .word 0x00000838
    // TODO: decompile
}





void ov40_0222C4E8(void) {
    // str r3, [r0, r2]
    // str r1, [r0, r2]
}





void ov40_0222C4F8(void) {
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
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
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
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp]
}





void ov40_0222C6C8(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
}





void ov40_0222C710(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
}





void ov40_0222C750(void) {
    // str r0, [sp, #0x18]
    ov40_0222DB30(2);
    // str r4, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    SpriteSystem_LoadPaletteBufferFromOpenNarc(r7, 2, r6, r5);
    // ldr r0, [sp, #0x18]
    ov40_0222DB30(2);
    // str r4, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    SpriteSystem_LoadPaletteBufferFromOpenNarc(r7, 3, r6, r5);
    // str r4, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    SpriteSystem_LoadPaletteBufferFromOpenNarc(r7, 2, r6, r5);
    // str r4, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    SpriteSystem_LoadPaletteBufferFromOpenNarc(r7, 3, r6, r5);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    SpriteSystem_LoadCharResObjFromOpenNarc(r6, r5, r4, 0x41);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    SpriteSystem_LoadCharResObjFromOpenNarc(r6, r5, r4, 0x41);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadCellResObjFromOpenNarc(r6, r5, r4, 0x2e);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadAnimResObjFromOpenNarc(r6, r5, r4, 0x2f);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadCellResObjFromOpenNarc(r6, r5, r4, 0x2e);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadAnimResObjFromOpenNarc(r6, r5, r4, 0x2f);
}





void ov40_0222C884(void) {
    // str r0, [sp]
    // add r4, sp, #0x28
    // str r0, [sp, #0x18]
    // ldr r0, [sp]
    // add r2, sp, #0x20
    // str r0, [sp, #0x14]
    *((u16*)(r2 + 0x2c)) = 0;
    *((u16*)(r2 + 0x2e)) = 0;
    *((u16*)(r2 + 0x30)) = 0;
    *((u16*)(r2 + 0x32)) = 0;
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x54]
    // str r0, [sp, #0x5c]
    // ldr r0, [sp, #0x10]
    // str r0, [sp, #0x7c]
    // str r0, [sp, #0x58]
    // str r1, [sp, #0x78]
    // str r0, [sp, #0x60]
    // str r0, [sp, #0x64]
    // str r0, [sp, #0x68]
    // str r0, [sp, #0x6c]
    // str r0, [sp, #0x70]
    // str r0, [sp, #0x74]
    // add r0, sp, #0x40
    // str r0, [sp, #0xc]
    // str r4, [sp, #8]
    *((u16*)(r2 + 0x20)) = *((u16*)(ov40_02244DA8 + 0x22));
    // add r6, sp, #0x20
    *((u16*)(r2 + 0x22)) = *((u16*)(ov40_02244DA8 + 0x24));
    *((u16*)(r2 + 0x24)) = *((u16*)(ov40_02244DA8 + 0x26));
    *((u16*)(r2 + 0x26)) = *((u16*)(ov40_02244DA8 + 0x28));
    *((u16*)(r2 + 0x28)) = *((u16*)(ov40_02244DA8 + 0x2a));
    *((u16*)(r2 + 0x2a)) = *((u16*)(ov40_02244DA8 + 0x2c));
    // ldmia r5!, {r0, r1}
    // stmia r4!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r4!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r4!, {r0, r1}
    // ldr r4, [sp]
    // strb r0, [r2]
    *((u8*)(r2 + 1)) = *((u8*)(ov40_02244DA8 + 1));
    *((u8*)(r2 + 2)) = *((u8*)(ov40_02244DA8 + 2));
    *((u8*)(r2 + 3)) = *((u8*)(ov40_02244DA8 + 3));
    *((u8*)(r2 + 4)) = *((u8*)(ov40_02244DA8 + 4));
    *((u8*)(r2 + 5)) = *((u8*)(ov40_02244DA8 + 5));
    // add r0, r0, r1
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x10]
    _s32_div_f(r4, 3, ov40_02244DA8);
    // str r0, [sp, #0x1c]
    // str r0, [sp, #0x5c]
    // str r0, [sp, #0x60]
    // str r0, [sp, #0x64]
    // str r0, [sp, #0x68]
    // str r0, [sp, #0x6c]
    // str r0, [sp, #0x5c]
    // str r0, [sp, #0x60]
    // str r0, [sp, #0x64]
    // str r0, [sp, #0x68]
    // str r0, [sp, #0x6c]
    // ldr r0, [sp, #0x18]
    // ldr r1, [sp, #0x14]
    // add r2, sp, #0x4c
    SpriteSystem_NewSprite(0x00002710);
    // ldr r2, [sp, #0xc]
    // str r0, [r5, r1]
    // ldrsh r1, [r2, r1]
    ov40_0222D288(*((u32*)(r5 + 0x000006F8)), 0, 0x60);
    ManagedSprite_TickFrame(*((u32*)(r5 + 0x000006F8)));
    ManagedSprite_SetAffineOverwriteMode(*((u32*)(r5 + 0x000006F8)), 2);
    // ldr r1, [sp, #8]
    ManagedSprite_SetAffineScale(*((u32*)(r5 + 0x000006F8)), *((u32*)r1), (0xfe << 0x16));
    // str r1, [r4, r0]
    // ldr r1, [sp, #0x1c]
    // sub r0, #0xf
    // strb r1, [r4, r0]
    // str r1, [r4, r0]
    // ldr r0, [sp, #8]
    // str r1, [r4, r0]
    // ldrsb r0, [r6, r0]
    // add r1, #0xa
    // str r1, [r4, r0]
    // ldr r0, [sp, #0x10]
    // str r1, [r4, r0]
    // ldrsb r1, [r6, r0]
    // add r1, #8
    // strh r1, [r4, r0]
    // mvn r1, r1
    // str r1, [r4, r0]
    // ldrsb r1, [r6, r0]
    // add r1, #8
    // sub r1, r0, r1
    // strh r1, [r4, r0]
    // strb r1, [r4, r0]
    // ldr r1, [sp, #4]
    SysTask_CreateOnVBlankQueue(ov40_0222D048, 1, 5);
    // str r0, [r4, r1]
    // ldr r0, [sp, #0xc]
    // add r4, #0x30
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #8]
    // str r0, [sp, #8]
    // ldr r0, [sp, #4]
    // add r0, #0x30
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x10]
    // str r0, [sp, #0x10]
    // ldr r0, [sp]
    // sub r1, #0x28
    // ldr r4, [sp]
    // add r5, r2, r1
    ov40_0222D048(*((u32*)(r4 + (7 << 8))), r5, r4);
    // add r4, #0x30
    // add r5, #0x30
}





void ov40_0222CA8C(void) {
    // str r0, [sp]
    Sprite_DeleteAndFreeResources(*((u32*)(r0 + 0x000006F8)));
    // ldr r0, [sp]
    // add r7, #0x30
    // str r0, [sp]
}





void ov40_0222CABC(void) {
}





void ov40_0222CAD8(void) {
    // str r1, [sp, #0x10]
    // str r1, [sp, #0xc]
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222CAF8: ; jump table
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x10]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0xc]
    SpriteSystem_LoadCharResObjFromOpenNarc(0x00002711, *((u32*)(r0 + 0x1c)), 0x30);
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x10]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0xc]
    SpriteSystem_LoadCharResObjFromOpenNarc(0x00002712, r7, r6);
    // str r0, [sp]
    // ldr r2, [sp, #0x10]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0xc]
    SpriteSystem_LoadCellResObjFromOpenNarc(0x00002711, r7, r4);
    // str r0, [sp]
    // ldr r2, [sp, #0x10]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0xc]
    SpriteSystem_LoadCellResObjFromOpenNarc(0x00002712, r7, r4);
    // str r0, [sp]
    // ldr r2, [sp, #0x10]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0xc]
    SpriteSystem_LoadAnimResObjFromOpenNarc(0x00002711, r7, r5);
    // str r0, [sp]
    // ldr r2, [sp, #0x10]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0xc]
    SpriteSystem_LoadAnimResObjFromOpenNarc(0x00002712, r7, r5);
}





void ov40_0222CBC0(void) {
    SpriteManager_UnloadCharObjById(*((u32*)(r0 + 0x1c)), 0x00002711);
    SpriteManager_UnloadCharObjById(*((u32*)(r4 + 0x1c)), 0x00002712);
}





void ov40_0222CBE0(void) {
    // add r4, r6, r0
    // sub r2, r2, r3
    // add r2, #0xd9
    // asr r2, r2, #0x10
    ov40_0222D288(*((u32*)r4), 0x32, ((5 << 4) << 0x10), *((u32*)(r0 + (0x6e << 4))));
    // sub r2, #0x2c
    sub_020136B4(*((u32*)(r5 + 0x00000548)), 0x24, 0x24);
    // add r4, #0x28
    // add r5, #0x28
    // add r7, sp, #0
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    ov40_0222D294(*((u32*)(r6 + 0x00000534)));
    // strh r0, [r7]
    ManagedSprite_SetPaletteOverrideOffset(*((u32*)(r4 + 0x00000534)), 1);
    // ldrsh r0, [r7, r0]
    // sub r1, r1, r5
    // sub r0, r0, r1
    *((u16*)(r7 + 2)) = 2;
    // sub r1, r0, r5
    // sub r2, r2, r1
    // add r1, #0x19
    // add r0, r0, r1
    // strh r0, [r7]
    ManagedSprite_SetPaletteOverrideOffset(*((u32*)(r4 + 0x00000534)), 2, 5);
    // ldrsh r1, [r7, r1]
    // ldrsh r2, [r7, r2]
    ov40_0222D288(*((u32*)(r4 + 0x00000534)), 2, 0);
    // add r4, #0x28
}





void ov40_0222CCAC(void) {
    // add r4, r5, r0
    // add r2, sp, #0x18
    // str r0, [sp, #0xc]
    // str r0, [sp, #8]
    // str r0, [sp, #4]
    *((u16*)(r2 + 4)) = 0x2a;
    // sub r0, r0, r3
    // add r0, #0xc9
    *((u16*)(r2 + 6)) = (5 << 4);
    // sub r0, r0, r1
    // add r0, #0xc9
    *((u16*)(r2 + 6)) = (4 << 4);
    // str r0, [sp, #0x10]
    // add r0, sp, #0x18
    *((u16*)(0 + 8)) = 0;
    // ldr r1, [sp, #0x10]
    *((u16*)(0 + 0xa)) = 0;
    // str r1, [sp, #0x4c]
    // str r0, [sp, #0x24]
    // str r1, [sp, #0x30]
    // str r0, [sp, #0x48]
    // str r1, [sp, #0x14]
    // str r1, [sp, #0x34]
    // ldr r7, [sp, #0x10]
    // str r2, [sp, #0x2c]
    // str r2, [sp, #0x28]
    // str r1, [sp, #0x38]
    // str r1, [sp, #0x3c]
    // str r0, [sp, #0x40]
    // str r0, [sp, #0x44]
    // str r0, [sp, #0x2c]
    // ldr r1, [sp, #8]
    // str r0, [sp, #0x30]
    // str r0, [sp, #0x34]
    // add r2, sp, #0x1c
    // str r0, [sp, #0x38]
    // str r0, [sp, #0x3c]
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #0xc]
    SpriteSystem_NewSprite(*((u8*)(ov40_02244DC0 + 5)), 0x00002711, 1, *((u32*)(r0 + (0x6e << 4))));
    // str r0, [r4]
    ManagedSprite_TickFrame();
    ManagedSprite_SetDrawFlag(*((u32*)r4), 1);
    // add r2, sp, #0x18
    // ldrsh r1, [r2, r1]
    // add r1, #8
    // ldrsh r2, [r3, r2]
    // asr r1, r1, #0x10
    ov40_0222D288(*((u32*)r4), (4 << 0x10), 6, r2);
    // str r0, [sp, #0x2c]
    // ldr r1, [sp, #8]
    // str r0, [sp, #0x30]
    // ldr r0, [sp, #0x14]
    // add r2, sp, #0x1c
    // str r0, [sp, #0x34]
    // str r0, [sp, #0x38]
    // str r0, [sp, #0x3c]
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #0xc]
    SpriteSystem_NewSprite(*((u8*)r6));
    // add r1, #0xc8
    // str r0, [r1]
    // add r0, #0xc8
    ManagedSprite_TickFrame(*((u32*)r4), r4);
    // add r2, sp, #0x18
    // add r0, #0xc8
    // ldrsh r1, [r2, r1]
    // ldrsh r2, [r3, r2]
    ov40_0222D288(*((u32*)r4), 4, 6, r2);
    // add r0, #0xc8
    ManagedSprite_SetDrawFlag(*((u32*)r4), *((u32*)(*((u32*)(r5 + 0x00000818)) + r7)));
    // ldr r0, [sp, #0x10]
    // add r4, #0x28
    // add r7, #0x24
    // str r0, [sp, #0x10]
    // add r7, sp, #0x18
    // add r1, sp, #0x18
    // add r1, #2
    // add r2, sp, #0x18
    ov40_0222D294(*((u32*)(r5 + 0x00000534)));
    // strh r0, [r7]
    ManagedSprite_SetPaletteOverrideOffset(*((u32*)(r6 + 0x00000534)), 1);
    // ldrsh r0, [r7, r0]
    // sub r1, r1, r4
    // sub r0, r0, r1
    *((u16*)(r7 + 2)) = 2;
    // sub r1, r0, r4
    // sub r2, r2, r1
    // add r1, #0x19
    // add r0, r0, r1
    // strh r0, [r7]
    ManagedSprite_SetPaletteOverrideOffset(*((u32*)(r6 + 0x00000534)), 2, 5);
    // ldrsh r1, [r7, r1]
    // ldrsh r2, [r7, r2]
    ov40_0222D288(*((u32*)(r6 + 0x00000534)), 2, 0);
    // add r6, #0x28
    // str r0, [sp]
    // ldr r0, [sp, #4]
    PaletteData_BlendPalettes(((*((u32*)(r5 + 0x58)) << 0x10) >> 0x10), 2, 0xc, 0x10);
}





void ov40_0222CE7C(void) {
    // str r4, [sp]
    // add r7, r5, r0
    ManagedSprite_SetDrawFlag(*((u32*)(r0 + 0x000005FC)), *((u32*)(*((u32*)(r0 + 0x00000818)) + 0)));
    // add r1, r0, r4
    ManagedSprite_SetAnim(*((u32*)(r6 + 0x000005FC)), *((u32*)(r1 + 0xc)));
    // add r3, r2, r4
    ov40_0222D3E8(r5, r7, *((u32*)(r3 + 8)));
    // ldr r0, [sp]
    // add r4, #0x24
    // add r6, #0x28
    // add r7, #0x28
    // str r0, [sp]
}





void ov40_0222CED8(void) {
    // sub r6, #0x14
    sub_02013FD0(*((u32*)(r0 + (0x61 << 4))), *((u32*)*((u32*)(r0 + 0x000005FC))));
    sub_02013FD0(*((u32*)(r5 + r7)), *((u32*)*((u32*)(r5 + r6))));
    // add r5, #0x28
}





void ov40_0222CF10(void) {
    // str r0, [sp]
    // add r6, r7, r0
    ManagedSprite_SetAnim(*((u32*)(r0 + 0x00000534)), *((u32*)(*((u32*)(r0 + 0x000006C4)) + 0xc)));
    ov40_0222D3E8(r7, r6, *((u32*)(*((u32*)(r4 + 0x000006C4)) + 8)), *((u32*)(r4 + 0x000006C4)));
    // sub r2, #0x2c
    sub_020136B4(*((u32*)(r5 + 0x00000548)), 0x24, 0x24);
    TextOBJ_SetSpritesDrawFlag(*((u32*)(r5 + 0x00000548)), 1);
    ManagedSprite_SetDrawFlag(*((u32*)(r5 + 0x00000534)), 1);
    // ldr r0, [sp]
    // str r0, [sp]
    // add r5, #0x28
    // ldr r0, [sp]
    // add r6, #0x28
}





void ov40_0222CF94(void) {
    // add r5, r0, r1
    Sprite_DeleteAndFreeResources(*((u32*)r5), 0x00000534);
    // add r0, #0xc8
    Sprite_DeleteAndFreeResources(*((u32*)r5));
    // add r5, #0x28
}





void ov40_0222CFBC(void) {
    TextOBJ_SetSpritesDrawFlag(*((u32*)(r0 + 0x00000548)), 0);
    ManagedSprite_SetDrawFlag(*((u32*)(r5 + 0x00000534)), 0);
    TextOBJ_SetSpritesDrawFlag(*((u32*)(r5 + r0)), r4);
    ManagedSprite_SetDrawFlag(*((u32*)(r5 + 0x00000534)), r4);
    TextOBJ_SetSpritesDrawFlag(*((u32*)(r5 + (0x61 << 4))), 0);
    ManagedSprite_SetDrawFlag(*((u32*)(r5 + 0x000005FC)), 0);
    TextOBJ_SetSpritesDrawFlag(*((u32*)(r5 + (0x61 << 4))), r4);
    ManagedSprite_SetDrawFlag(*((u32*)(r5 + 0x000005FC)), r4);
    // add r5, #0x28
}





void ov40_0222D048(void) {
    // sub r1, r1, r2
    // ror r1, r0
    // add r0, r2, r1
    *((u32*)(r1 + 0x1c)) = 0x1f;
    // add r1, r0, r0
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0222D078: ; jump table
    *((u32*)(r1 + 0x2c)) = (*((u32*)(r1 + 0x2c)) + 1);
    *((u32*)(r1 + 0x28)) = 0;
    *((u32*)(r1 + 0x28)) = (*((u32*)(r1 + 0x28)) + 1);
    *((u32*)(r1 + 0x2c)) = ((*((u32*)(r1 + 0x28)) + 1) + 1);
    *((u32*)(r1 + 0x28)) = 0;
    // add r1, sp, #0x24
    // add r2, sp, #0x20
    ManagedSprite_GetSpritePositionFxXY(*((u32*)r1), *((u32*)(r1 + 0x28)), ((*((u32*)(r1 + 0x1c)) + 1) >> 0x1f));
    // add r1, sp, #0x1c
    // add r2, sp, #0x18
    ManagedSprite_GetSpritePositionFxXY(*((u32*)(r4 + 4)));
    _s32_div_f((0x0000FFFF * *((u32*)(r4 + 0x20))), (0x5a << 2));
    GF_SinDeg(((r0 << 0x10) >> 0x10));
    // ldrsb r1, [r4, r1]
    // ldr r2, [sp, #0x24]
    // neg r1, r1
    // add r0, r2, r0
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x1c]
    // add r0, #0x20
    *((u32*)(r4 + 0x20)) = *((u32*)(r4 + 0x20));
    _s32_div_f(*((u32*)(r4 + 0x20)), (0x5a << 2));
    *((u32*)(r4 + 0x20)) = r1;
    // ldr r1, [sp, #0x24]
    // ldr r2, [sp, #0x20]
    ManagedSprite_SetPositonFxXY(*((u32*)r4));
    // ldr r1, [sp, #0x1c]
    // ldr r2, [sp, #0x18]
    ManagedSprite_SetPositonFxXY(*((u32*)(r4 + 4)));
    *((u32*)(r4 + 0x28)) = (*((u32*)(r4 + 0x28)) + 1);
    // add r2, sp, #0x28
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // add r2, sp, #0
    // add r1, sp, #4
    // add r2, #2
    ManagedSprite_GetPositionXY(*((u32*)r4), ov40_02244DD8);
    // add r1, sp, #4
    // add r2, sp, #0
    ManagedSprite_GetPositionXY(*((u32*)(r4 + 4)));
    // ldrsh r2, [r4, r0]
    // add r1, sp, #0
    // ldrsh r0, [r1, r0]
    // sub r0, r2, r0
    *((u16*)(r4 + 0x14)) = 4;
    // ldrsh r0, [r4, r0]
    _s32_div_f(0x14, *((u32*)(r4 + 0x24)));
    *((u16*)(r4 + 0x14)) = r0;
    *((u32*)(r4 + 0x28)) = (*((u32*)(r4 + 0x28)) + 1);
    // ldrsh r1, [r4, r0]
    // add r0, sp, #0
    *((u16*)(0x16 + 4)) = r1;
    // add r0, sp, #0x28
    *((u32*)(r4 + 0x20)) = *((u32*)(*((u8*)(r4 + 0x19)) + (*((u8*)(r4 + 0x19)) << 2)));
    *((u32*)(r4 + 0x2c)) = (*((u32*)(r4 + 0x2c)) + 1);
    *((u32*)(r4 + 0x28)) = 0;
    // add r1, sp, #0
    // ldrsh r2, [r1, r0]
    // ldrsh r0, [r4, r0]
    // add r0, r2, r0
    *((u16*)((*((u8*)(r4 + 0x19)) << 2) + 4)) = 0x14;
    *((u32*)(r4 + 0x28)) = (*((u32*)(r4 + 0x28)) + 1);
    // add r3, sp, #0
    // ldrsh r1, [r3, r1]
    // ldrsh r2, [r3, r2]
    ManagedSprite_SetPositionXY(*((u32*)r4), 4, 2);
    // add r3, sp, #0
    // ldrsh r1, [r3, r1]
    // ldrsh r2, [r3, r2]
    ManagedSprite_SetPositionXY(*((u32*)(r4 + 4)), 4, 0);
    // add r1, #0xc
    // add r2, sp, #0x10
    ManagedSprite_GetSpritePositionFxXY(*((u32*)r4), r4);
    *((u32*)(r4 + 0x28)) = (*((u32*)(r4 + 0x28)) + 1);
    // add r1, sp, #0x14
    // add r2, sp, #0x10
    ManagedSprite_GetSpritePositionFxXY(*((u32*)r4));
    // add r1, sp, #0xc
    // add r2, sp, #8
    ManagedSprite_GetSpritePositionFxXY(*((u32*)(r4 + 4)));
    _s32_div_f((0x0000FFFF * *((u32*)(r4 + 0x20))), (0x5a << 2));
    GF_SinDeg(((r0 << 0x10) >> 0x10));
    // ldrsb r2, [r4, r2]
    // neg r3, r2
    // add r0, r0, r2
    // add r0, r1, r0
    // str r0, [sp, #0x14]
    // str r0, [sp, #0xc]
    // sub r1, r1, r2
    // ror r1, r0
    // add r0, r2, r1
    *((u32*)(r4 + 0x20)) = ((*((u32*)(r4 + 0x20)) - 4) + 4);
    _s32_div_f(*((u32*)(r4 + 0x20)), (0x5a << 2), (*((u8*)(r4 + 0x19)) >> 0x1f));
    *((u32*)(r4 + 0x20)) = r1;
    // ldr r1, [sp, #0x14]
    // ldr r2, [sp, #0x10]
    ManagedSprite_SetPositonFxXY(*((u32*)r4));
    // ldr r1, [sp, #0xc]
    // ldr r2, [sp, #8]
    ManagedSprite_SetPositonFxXY(*((u32*)(r4 + 4)));
    _fgr(*((u32*)(r4 + 0x10)), 0x3DCCCCCD);
    _fsub(*((u32*)(r4 + 0x10)), 0x3DCCCCCD);
    *((u32*)(r4 + 0x10)) = r0;
    ManagedSprite_SetAffineScale(*((u32*)r4), *((u32*)(r4 + 0x10)), (0xfe << 0x16));
    ManagedSprite_SetAffineScale(*((u32*)(r4 + 4)), *((u32*)(r4 + 0x10)), (0xfe << 0x16));
}





void ov40_0222D288(void) {
}





void ov40_0222D294(void) {
}





void ov40_0222D2A0(void) {
    // str r2, [sp, #0x2c]
    // str r1, [sp, #0x30]
    // str r1, [sp, #0x24]
    // str r0, [sp, #0x28]
    // str r0, [sp, #0x1c]
    // add r0, r6, r1
    // sub r1, #0xc8
    // str r0, [sp, #0x14]
    // add r0, r6, r1
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x14]
    // str r0, [sp, #0x34]
    // ldr r0, [sp, #0x10]
    // add r4, sp, #0x34
    // str r0, [sp, #0x38]
    // str r0, [sp, #0x18]
    // add r0, sp, #0x24
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x1c]
    // add r5, sp, #0x2c
    // add r0, r1, r0
    // str r0, [sp, #8]
    // add r7, sp, #0x3c
    InitWindow(r7, ov40_02244DC0, *((u32*)(ov40_02244DA8 + 8)));
    // str r0, [sp]
    // str r0, [sp, #4]
    AddTextWindowTopLeftCorner(*((u32*)(r6 + 0x24)), r7, 0x14, 2);
    sub_02013910(r7, 0x6d);
    *((u32*)(*((u32*)r4) + 0x18)) = r0;
    sub_02013688(r7, *((u32*)r5), 0x6d);
    // add r3, #0x1c
    sub_02021AC8(1, *((u32*)r5), *((u32*)r4));
    // add r1, sp, #0x20
    // add r1, #2
    // add r2, sp, #0x20
    ManagedSprite_GetPositionXY(*((u32*)*((u32*)r4)));
    // str r7, [sp, #0x50]
    // str r0, [sp, #0x4c]
    SpriteManager_GetSpriteList(*((u32*)(r6 + 0x1c)));
    // str r0, [sp, #0x54]
    // ldr r1, [sp, #0xc]
    SpriteManager_FindPlttResourceProxy(*((u32*)(r6 + 0x1c)), *((u32*)r1));
    // str r0, [sp, #0x58]
    // add r1, sp, #0x20
    // str r0, [sp, #0x5c]
    // str r0, [sp, #0x60]
    // ldrsh r0, [r1, r0]
    // add r0, #0x24
    // str r0, [sp, #0x64]
    // ldrsh r0, [r1, r0]
    // sub r0, #8
    // str r0, [sp, #0x68]
    // str r0, [sp, #0x6c]
    // ldr r0, [sp, #8]
    // str r0, [sp, #0x70]
    // str r0, [sp, #0x74]
    // str r0, [sp, #0x78]
    // add r0, sp, #0x4c
    TextOBJ_Create(0x6d, *((u32*)(*((u32*)r4) + 0x18)));
    *((u32*)(*((u32*)r4) + 0x14)) = r0;
    sub_020138E0(*((u32*)(*((u32*)r4) + 0x14)), 1);
    RemoveWindow(r7);
    TextOBJ_SetSpritesDrawFlag(*((u32*)(*((u32*)r4) + 0x14)), 0);
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #8]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x18]
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x14]
    // add r0, #0x28
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x10]
    // add r0, #0x28
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x1c]
    // str r0, [sp, #0x1c]
}





void ov40_0222D3E8(void) {
    // str r1, [sp, #0x10]
    // add r3, r4, r1
    NewString_ReadMsgData(*((u32*)(r0 + 0x48)), r2);
    ov40_0222DAB0(0x6d);
    NewString_ReadMsgData(*((u32*)(r4 + 0x48)), 7);
    // add r1, r4, r0
    sub_020315B8(*((u32*)(r1 + 0x0000088C)), 0x6d);
    // str r0, [sp, #0x14]
    // ldr r1, [sp, #0x14]
    ov40_02230DCC(r4);
    String_New(0xff, 0x6d);
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x14]
    BufferString(r6, 0, 0);
    StringExpandPlaceholders(r6, r5, r7);
    String_Delete(r7);
    // ldr r0, [sp, #0x14]
    String_Delete();
    MessageFormat_Delete(r6);
    // add r3, r4, r1
    NewString_ReadMsgData(r2);
    ov40_0222DAB0(0x6d);
    NewString_ReadMsgData(*((u32*)(r4 + 0x48)), 7);
    // add r1, r4, r0
    sub_020315B8(*((u32*)(r1 + 0x0000088C)), 0x6d);
    // str r0, [sp, #0x18]
    // ldr r1, [sp, #0x18]
    ov40_02230DCC(r4);
    String_New(0xff, 0x6d);
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x18]
    BufferString(r6, 0, 0);
    StringExpandPlaceholders(r6, r5, r7);
    String_Delete(r7);
    // ldr r0, [sp, #0x18]
    String_Delete();
    MessageFormat_Delete(r6);
    NewString_ReadMsgData(r2);
    // add r0, sp, #0x1c
    InitWindow();
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r1, sp, #0x1c
    AddTextWindowTopLeftCorner(*((u32*)(r4 + 0x24)), 0x14, 2);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, sp, #0x1c
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(0x000E0D00, 0, r5, 0);
    // ldr r0, [sp, #0x10]
    // ldr r1, [sp, #0x10]
    // add r2, sp, #0x1c
    TextOBJ_CopyFromBGWindow(*((u32*)(r0 + 0x14)), *((u32*)(r1 + 0x18)), 0x6d);
    String_Delete(r5);
    // add r0, sp, #0x1c
    RemoveWindow();
}





void ov40_0222D55C(void) {
    // str r1, [sp]
    // add r7, r0, r1
    // sub r1, #0xc8
    // add r6, r0, r1
    // str r7, [sp, #4]
    // str r6, [sp, #8]
    // add r5, sp, #4
    sub_02013938(*((u32*)(*((u32*)r5) + 0x18)), 0x000005FC);
    TextOBJ_Destroy(*((u32*)(*((u32*)r5) + 0x14)));
    // add r0, #0x1c
    sub_02021B5C(*((u32*)r5));
    // ldr r0, [sp]
    // add r7, #0x28
    // add r6, #0x28
    // str r0, [sp]
}





void ov40_0222D5AC(void) {
    // add r0, sp, #0xc
    InitWindow();
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r1, sp, #0xc
    AddTextWindowTopLeftCorner(*((u32*)(r4 + 0x10)), 0x14, 2);
    // add r0, sp, #0xc
    sub_02013910(0x6d);
    *((u32*)(r5 + 0xc)) = r0;
    // add r0, sp, #0xc
    sub_02013688(r7, 0x6d);
    // add r3, #0x10
    sub_02021AC8(1, r7, r5);
    // add r1, sp, #8
    // add r1, #2
    // add r2, sp, #8
    ManagedSprite_GetPositionXY(*((u32*)(r5 + 4)));
    // str r0, [sp, #0x1c]
    // add r0, sp, #0xc
    // str r0, [sp, #0x20]
    SpriteManager_GetSpriteList(*((u32*)(r4 + 8)));
    // str r0, [sp, #0x24]
    SpriteManager_FindPlttResourceProxy(*((u32*)(r4 + 8)), r6);
    // str r0, [sp, #0x28]
    // add r1, sp, #8
    // str r0, [sp, #0x2c]
    // str r0, [sp, #0x30]
    // ldrsh r0, [r1, r0]
    // add r0, #0x24
    // str r0, [sp, #0x34]
    // ldrsh r1, [r1, r0]
    // sub r1, #8
    // str r0, [sp, #0x40]
    // str r1, [sp, #0x38]
    // str r0, [sp, #0x48]
    // str r7, [sp, #0x44]
    // str r1, [sp, #0x3c]
    // add r0, sp, #0x1c
    TextOBJ_Create(0x6d, *((u32*)(r5 + 0xc)));
    *((u32*)(r5 + 8)) = r0;
    sub_020138E0(1);
    // add r0, sp, #0xc
    RemoveWindow();
    TextOBJ_SetSpritesDrawFlag(*((u32*)(r5 + 8)), 0);
}





void ov40_0222D66C(void) {
    NewString_ReadMsgData(*((u32*)(r1 + 0x34)), r2);
    // add r0, sp, #0x10
    InitWindow();
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r1, sp, #0x10
    AddTextWindowTopLeftCorner(*((u32*)(r4 + 0x10)), 0x14, 2);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r0, sp, #0x10
    AddTextPrinterParameterizedWithColor(0x000E0D00, 0, r6, 0);
    // add r2, sp, #0x10
    TextOBJ_CopyFromBGWindow(*((u32*)(r5 + 8)), *((u32*)(r5 + 0xc)), 0x6d);
    String_Delete(r6);
    // add r0, sp, #0x10
    RemoveWindow();
}





void ov40_0222D6D0(void) {
}





void ov40_0222D6EC(void) {
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    SpriteSystem_LoadCharResObjFromOpenNarc(*((u32*)(r0 + 0x18)), *((u32*)(r0 + 0x1c)), *((u32*)(r0 + 0x14)), 0x31);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadCellResObjFromOpenNarc(r4, r5, r6, 0x1a);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadAnimResObjFromOpenNarc(r4, r5, r6, 0x1b);
}





void ov40_0222D73C(void) {
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    SpriteSystem_LoadCharResObjFromOpenNarc(*((u32*)(r0 + 0x18)), *((u32*)(r0 + 0x1c)), *((u32*)(r0 + 0x14)), 0x7a);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadCellResObjFromOpenNarc(r4, r5, r6, 0x7b);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadAnimResObjFromOpenNarc(r4, r5, r6, 0x7c);
}





void ov40_0222D78C(void) {
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    SpriteSystem_LoadCharResObjFromOpenNarc(*((u32*)(r0 + 0x18)), *((u32*)(r0 + 0x1c)), *((u32*)(r0 + 0x14)), 0x1e);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadCellResObjFromOpenNarc(r4, r5, r6, 0x20);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadAnimResObjFromOpenNarc(r4, r5, r6, 0x1f);
}





void ov40_0222D7DC(void) {
    SpriteManager_UnloadCharObjById(*((u32*)(r0 + 0x1c)), 0x00002E94);
    SpriteManager_UnloadCellObjById(*((u32*)(r4 + 0x1c)), 0x00002E94);
    SpriteManager_UnloadAnimObjById(*((u32*)(r4 + 0x1c)), 0x00002E94);
}





void ov40_0222D800(void) {
    // add r0, sp, #0
    // strh r3, [r0]
    *((u16*)(r0 + 2)) = 0x60;
    *((u16*)(r0 + 4)) = 0;
    *((u16*)(r0 + 6)) = 0;
    // str r0, [sp, #8]
    // str r0, [sp, #0x2c]
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x28]
    // str r3, [sp, #0xc]
    // str r1, [sp, #0x10]
    // str r3, [sp, #0x30]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x1c]
    // str r0, [sp, #0x20]
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x18]
    // add r2, sp, #0
    SpriteSystem_NewSprite(*((u32*)(r0 + 0x18)), *((u32*)(r0 + 0x1c)), r0, 0);
    ManagedSprite_SetPaletteOverride(2);
    ManagedSprite_SetAnim(r4, 0);
    ManagedSprite_TickFrame(r4);
}





void ov40_0222D874(void) {
}





void ov40_0222D88C(void) {
}





void ov40_0222D8C8(void) {
    ov40_0222CAD8();
    ov40_0222C480(r4);
    sub_02088030(r4);
    ov40_0222CCAC(r4);
    ov40_0222CFBC(r4, 1);
    ov40_0222CE7C(r4);
    ov40_0222CED8(r4);
    ov40_0222CBE0(r4);
    ov40_0222CF10(r4);
    // str r1, [r4, r0]
}





void ov40_0222D910(void) {
    // str r0, [r5]
    // str r0, [r4]
    // ldr r0, [sp, #0x20]
    // str r0, [sp]
    G2x_SetBlendAlpha_(0x04000050, r2, r3, *((u32*)r0));
    // ldr r1, [sp, #0x18]
    // str r0, [sp]
    // ldr r2, [sp, #0x1c]
    G2x_SetBlendAlpha_(0x04001050, *((u32*)r5));
    // ldr r0, [sp, #0x20]
    // str r0, [sp]
    G2x_SetBlendAlpha_(0x04000050, r6, r7, *((u32*)r5));
    // ldr r0, [sp, #0x20]
    // ldr r1, [sp, #0x18]
    // str r0, [sp]
    // ldr r2, [sp, #0x1c]
    G2x_SetBlendAlpha_(0x04001050, *((u32*)r5));
}





void ov40_0222D980(void) {
    // ldr r0, [sp, #0x20]
    // str r0, [sp]
    G2x_SetBlendAlpha_(0x04000050, r2, r3, *((u32*)r0));
    // ldr r1, [sp, #0x18]
    // str r0, [sp]
    // ldr r2, [sp, #0x1c]
    G2x_SetBlendAlpha_(0x04001050, *((u32*)r5));
    // ldr r0, [sp, #0x20]
    // str r0, [sp]
    G2x_SetBlendAlpha_(0x04000050, r6, r7, *((u32*)r5));
    // ldr r0, [sp, #0x20]
    // ldr r1, [sp, #0x18]
    // str r0, [sp]
    // ldr r2, [sp, #0x1c]
    G2x_SetBlendAlpha_(0x04001050, *((u32*)r5));
}





void ov40_0222D9E8(void) {
}





void ov40_0222DA00(void) {
    // str r2, [r0]
    // str r2, [r1]
    // str r2, [r0]
    // str r2, [r1]
    // strh r5, [r2]
    // strh r5, [r2]
    // strh r5, [r2]
    // strh r1, [r0]
}





void ov40_0222DA84(void) {
    // str r1, [r0]
    // str r1, [r0]
}





void ov40_0222DAA8(void) {
}





void ov40_0222DAB0(void) {
    // ldr r3, _0222DABC ; =MessageFormat_New_Custom
    // add r2, r0, #0
    // mov r0, #4
    // mov r1, #0x40
    // bx r3
    // nop
    // _0222DABC: .word MessageFormat_New_Custom
    // TODO: decompile
}





void ov40_0222DAC0(void) {
    // ldmia r4!, {r0, r1}
    // add r3, sp, #0
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // add r5, #0x5c
    // str r0, [r3]
}





void ov40_0222DAF0(void) {
    // ldmia r4!, {r0, r1}
    // add r3, sp, #0
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // add r5, #0x5c
}





void ov40_0222DB30(void) {
    // add r3, sp, #0x58
    // ldmia r4!, {r0, r1}
    // str r3, [sp]
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // add r3, sp, #0x3c
    // ldmia r4!, {r0, r1}
    // mov ip, r3
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // add r3, sp, #0x20
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // add r3, sp, #4
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // add r5, #0x5c
    // str r0, [r3]
    // add r1, r2, r2
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0222DBA4: ; jump table
    // ldr r0, [sp]
    // mov r0, ip
    GF_AssertFail(*((u32*)(r3 + (*((u32*)(r3 + (*((u32*)(*((u32*)(*((u8*)r0) + (*((u8*)r0) << 2))) + (*((u32*)(*((u8*)r0) + (*((u8*)r0) << 2))) << 2))) << 2))) << 2))), (*((u32*)(*((u8*)r0) + (*((u8*)r0) << 2))) << 2), r1);
    // ldr r0, [sp, #0x58]
}





void ov40_0222DBEC(void) {
    // str r1, [sp, #0x18]
    ov40_0222DB30(3);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    PaletteData_LoadNarc(r4, 0xbf, r0, 0x6d);
    ov40_0222DB30(r5, 3);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    PaletteData_LoadNarc(r4, 0xbf, r0, 0x6d);
    ov40_0222DB30(r5, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    PaletteData_LoadNarc(r4, 0xbf, r0, 0x6d);
    ov40_0222DB30(r5, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    PaletteData_LoadNarc(r4, 0xbf, r0, 0x6d);
    // add r1, #0x5c
    sub_0208763C(*((u32*)(r5 + (0x6f << 4))), *((u8*)r5));
    // add r1, #0x5c
    sub_0208763C(*((u32*)(r5 + (0x6f << 4))), *((u8*)r5));
    SpriteManager_UnloadPlttObjById(r7, 0x0000270F);
    SpriteManager_UnloadPlttObjById(r7, 0x00002710);
    ov40_0222DB30(r5, 2);
    // str r6, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r2, [sp, #0x18]
    // str r0, [sp, #0x14]
    SpriteSystem_LoadPaletteBufferFromOpenNarc(r4, 2, r7);
    ov40_0222DB30(r5, 2);
    // str r6, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r2, [sp, #0x18]
    // str r0, [sp, #0x14]
    SpriteSystem_LoadPaletteBufferFromOpenNarc(r4, 3, r7);
}





void ov40_0222DD08(void) {
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r0 + 0x28)), 2, 0x0000FFFF, 0);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 0, 0x0000FFFF, 0);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 3, 0x0000FFFF, 0);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 1, 0x0000FFFF, 0);
}





void ov40_0222DD68(void) {
}





void ov40_0222DD8C(void) {
    // str r1, [r0, r2]
}





void ov40_0222DD94(void) {
    // ldr r0, [r0, r1]
}





void ov40_0222DD9C(void) {
    // str r2, [r5, r1]
    ov40_0222C6C8(6, 0);
    // strh r1, [r0]
    SetBgPriority(6, 0);
    // add r0, r5, r4
    InitWindow();
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, r5, r4
    AddWindowParameterized(*((u32*)(r5 + 0x24)), 6, 1);
    NewString_ReadMsgData(*((u32*)(r5 + 0x48)), r6);
    // add r0, r5, r4
    FillWindowPixelBuffer(0xcc);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r5, r4
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(0x000F0D0C, 0, r6, 0);
    // add r0, r5, r4
    ScheduleWindowCopyToVram();
    String_Delete(r6);
    OS_WaitVBlankIntr();
    GfGfx_EngineBTogglePlanes(4, 1);
}





void ov40_0222DE40(void) {
    // str r1, [r4, r0]
    // add r0, r4, r0
    ClearWindowTilemapAndCopyToVram(((0x8a << 4) + 4), 0);
    // add r0, r4, r0
    RemoveWindow(0x000008A4);
    BgClearTilemapBufferAndCommit(*((u32*)(r4 + 0x24)), 6);
    GfGfx_EngineBTogglePlanes(4, 0);
    SetBgPriority(6, 2);
    // str r0, [sp]
    G2x_SetBlendAlpha_(0x04000050, 4, 0x12, 7);
    // str r0, [sp]
    G2x_SetBlendAlpha_(0x04001050, 4, 0x12, 7);
}





void ov40_0222DEAC(void) {
    // add r0, r4, r0
    ClearWindowTilemapAndCopyToVram(0x000008A4);
    // add r0, r4, r0
    RemoveWindow(0x000008A4);
    GfGfx_EngineATogglePlanes(4, 0);
}





void ov40_0222DED0(void) {
    // str r2, [r5, r1]
    ov40_0222C6C8(2, 0);
    GfGfx_EngineATogglePlanes(4, 1);
    // add r0, r5, r4
    InitWindow();
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, r5, r4
    AddWindowParameterized(*((u32*)(r5 + 0x24)), 2, 1);
    NewString_ReadMsgData(*((u32*)(r5 + 0x48)), r6);
    // add r0, r5, r4
    FillWindowPixelBuffer(0xcc);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r5, r4
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(0x000F0D0C, 0, r6, 0);
    // add r0, r5, r4
    ScheduleWindowCopyToVram();
    String_Delete(r6);
}





void ov40_0222DF60(void) {
    NewString_ReadMsgData(*((u32*)(r0 + 0x48)));
    // add r0, r5, r6
    FillWindowPixelBuffer(0xcc);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r5, r6
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(0x000F0D0C, 0, r4, 0);
    // add r0, r5, r6
    ScheduleWindowCopyToVram();
    String_Delete(r4);
}





void ov40_0222DFB0(void) {
    // str r1, [r4, r0]
    // add r0, r4, r0
    ClearWindowTilemapAndCopyToVram(((0x8a << 4) + 4), 0);
    // add r0, r4, r0
    RemoveWindow(0x000008A4);
    BgClearTilemapBufferAndCommit(*((u32*)(r4 + 0x24)), 2);
    GfGfx_EngineATogglePlanes(4, 0);
}





void ov40_0222DFE8(void) {
    // sub r0, #8
    // str r1, [r5, r0]
    // sub r0, #8
    // str r1, [r5, r0]
    // strh r1, [r0]
    SetBgPriority(6, 0);
    ov40_0222C6C8(r5, 6, 0);
    GfGfx_EngineBTogglePlanes(4, 1);
    // add r0, r5, r4
    InitWindow();
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, r5, r4
    AddWindowParameterized(*((u32*)(r5 + 0x24)), 6, 1);
    NewString_ReadMsgData(*((u32*)(r5 + 0x48)), r6);
    // add r0, r5, r4
    FillWindowPixelBuffer(0xcc);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r5, r4
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(0x000F0D0C, 0, r6, 0);
    // add r0, r5, r4
    ScheduleWindowCopyToVram();
    String_Delete(r6);
}





void ov40_0222E09C(void) {
    // str r0, [sp, #0x14]
    // add r2, sp, #0x88
    // strh r0, [r2]
    // add r3, sp, #0x58
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [sp, #0x24]
    // ldr r4, [sp, #0x14]
    // str r0, [sp, #0x28]
    // add r0, sp, #0x58
    // add r4, #0xc
    // str r0, [sp, #0x1c]
    // add r5, sp, #0x88
    // ldr r1, [sp, #0x1c]
    NewString_ReadMsgData(*((u32*)(r1 + 0x48)), *((u32*)(0x28 - 1)), (6 - 1), (ov40_02244F40 + 2));
    InitWindow(r4);
    // ldrsh r0, [r5, r0]
    // str r0, [sp]
    // ldrsh r0, [r5, r0]
    // str r0, [sp, #4]
    // ldrsh r0, [r5, r0]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x24]
    // str r0, [sp, #0x10]
    // ldrsh r3, [r5, r3]
    AddWindowParameterized(*((u32*)(r7 + 0x24)), r4, 2, ((0 << 0x18) >> 0x18));
    FillWindowPixelBuffer(r4, 0);
    ov40_022306C0(r4, r6);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r4, 0, r6, r0);
    ScheduleWindowCopyToVram(r4);
    // ldrsh r1, [r5, r0]
    // ldrsh r0, [r5, r0]
    // ldr r0, [sp, #0x24]
    // add r0, r0, r2
    // str r0, [sp, #0x24]
    String_Delete(r6, (r1 * 6));
    // ldr r0, [sp, #0x1c]
    // add r4, #0x10
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x28]
    // add r5, #8
    // str r0, [sp, #0x28]
    // ldr r0, [sp, #0x14]
    // str r0, [sp, #0x20]
    ov40_0222DAB0(0x6d);
    // ldr r5, [sp, #0x14]
    // ldr r0, [sp, #0x20]
    // add r5, #0xc
    sub_020315B8(0x6d);
    // str r0, [sp, #0x2c]
    // ldr r1, [sp, #0x2c]
    ov40_02230DCC(r7);
    NewString_ReadMsgData(*((u32*)(r7 + 0x48)), 0xd);
    // str r0, [sp, #0x30]
    String_New(0xff, 0x6d);
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x2c]
    BufferString(r4, 0, 0);
    // ldr r2, [sp, #0x30]
    StringExpandPlaceholders(r4, r6);
    FillWindowPixelBuffer(r5, 0);
    ov40_022306C0(r5, r6);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r5, 0, r6, r0);
    ScheduleWindowCopyToVram(r5);
    // ldr r0, [sp, #0x2c]
    String_Delete();
    // ldr r0, [sp, #0x30]
    String_Delete();
    String_Delete(r6);
    MessageFormat_ResetBuffers(r4);
    // ldr r0, [sp, #0x20]
    sub_020316F0();
    // str r0, [sp, #0x34]
    // ldr r5, [sp, #0x14]
    // add r5, #0x2c
    NewString_ReadMsgData(*((u32*)(r7 + 0x48)), 0xf);
    // str r0, [sp, #0x38]
    // ldr r0, [sp, #0x20]
    sub_020315B8(0x6d);
    // str r0, [sp, #0x3c]
    // ldr r1, [sp, #0x3c]
    ov40_02230DCC(r7);
    String_New(0xff, 0x6d);
    // ldr r2, [sp, #0x34]
    BufferMonthNameAbbr(r4, 0);
    // ldr r2, [sp, #0x38]
    StringExpandPlaceholders(r4, r6);
    FillWindowPixelBuffer(r5, 0);
    ov40_022306C0(r5, r6);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r5, 0, r6, r0);
    ScheduleWindowCopyToVram(r5);
    // ldr r0, [sp, #0x38]
    String_Delete();
    // ldr r0, [sp, #0x3c]
    String_Delete();
    String_Delete(r6);
    MessageFormat_ResetBuffers(r4);
    // ldr r5, [sp, #0x14]
    // add r5, #0x3c
    NewString_ReadMsgData(*((u32*)(r7 + 0x48)), 0x10);
    FillWindowPixelBuffer(r5, 0);
    ov40_022306C0(r5, r6);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r5, 0, r6, r0);
    ScheduleWindowCopyToVram(r5);
    String_Delete(r6);
    // ldr r0, [sp, #0x20]
    sub_02031620();
    // ldr r0, [sp, #0x20]
    sub_0203162C();
    // ldr r5, [sp, #0x14]
    // str r0, [sp, #0x40]
    // add r5, #0x4c
    FillWindowPixelBuffer(r5, 0);
    NewString_ReadMsgData(*((u32*)(r7 + 0x48)), 0x15);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r5, 0, r0, 0);
    ScheduleWindowCopyToVram(r5);
    String_Delete(r6);
    String_New(0xff, 0x6d);
    // str r0, [sp, #0x44]
    NewString_ReadMsgData(*((u32*)(r7 + 0x48)), 0x16);
    // str r0, [sp, #0x48]
    BufferCountryName(r4, 0, r6);
    // ldr r1, [sp, #0x44]
    // ldr r2, [sp, #0x48]
    StringExpandPlaceholders(r4);
    // str r1, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x44]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r5, 0, 0);
    ScheduleWindowCopyToVram(r5);
    // ldr r0, [sp, #0x44]
    String_Delete();
    // ldr r0, [sp, #0x48]
    String_Delete();
    // ldr r0, [sp, #0x40]
    // ldr r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    // add r0, #0x5c
    // str r0, [sp, #0x18]
    FillWindowPixelBuffer(0);
    String_New(0xff, 0x6d);
    NewString_ReadMsgData(*((u32*)(r7 + 0x48)), 0x17);
    // str r0, [sp, #0x4c]
    // ldr r3, [sp, #0x40]
    BufferCityName(r4, 0, r6);
    // ldr r2, [sp, #0x4c]
    StringExpandPlaceholders(r4, r5);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x18]
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(0x000F0D00, 0, r5, 4);
    // ldr r0, [sp, #0x18]
    ScheduleWindowCopyToVram();
    String_Delete(r5);
    // ldr r0, [sp, #0x4c]
    String_Delete();
    MessageFormat_ResetBuffers(r4);
    // ldr r5, [sp, #0x14]
    // add r5, #0x6c
    NewString_ReadMsgData(*((u32*)(r7 + 0x48)), 0x11);
    FillWindowPixelBuffer(r5, 0);
    ov40_022306C0(r5, r6);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r5, 0, r6, r0);
    ScheduleWindowCopyToVram(r5);
    String_Delete(r6);
    // ldr r0, [sp, #0x14]
    // add r1, sp, #0x50
    // add r0, #0x7c
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x20]
    sub_0203164C(0x6d);
    // add r0, sp, #0x50
    MailMsg_GetExpandedString(0x6d);
    // ldr r0, [sp, #0x14]
    FillWindowPixelBuffer(0);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x14]
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(0x000F0D00, 0, r5, 0);
    // ldr r0, [sp, #0x14]
    ScheduleWindowCopyToVram();
    String_Delete(r5);
    MessageFormat_Delete(r4);
}





void ov40_0222E4A4(void) {
    // add r5, #0xc
    // add r5, #0x10
}





void ov40_0222E4C4(void) {
}





void ov40_0222E4D4(void) {
    SpriteManager_UnloadCharObjById(*((u32*)(r1 + 0x1c)), 0x000186A0);
    SpriteManager_UnloadPlttObjById(*((u32*)(r5 + 0x1c)), 0x000186A0);
    SpriteManager_UnloadCellObjById(*((u32*)(r5 + 0x1c)), 0x000186A0);
    SpriteManager_UnloadAnimObjById(*((u32*)(r5 + 0x1c)), 0x000186A0);
    Sprite_DeleteAndFreeResources(*((u32*)(r4 + 4)));
    *((u32*)(r4 + 4)) = 0;
}





void ov40_0222E510(void) {
    // str r1, [sp, #0x18]
    sub_02074490(r1);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    SpriteSystem_LoadPaletteBuffer(r7, 2, r6, r4);
    // str r0, [sp, #0x1c]
    sub_0207449C();
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadCellResObj(r6, r4, 0x14, r0);
    sub_020744A8();
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadAnimResObj(r6, r4, 0x14, r0);
    sub_020315E0(*((u32*)r5));
    sub_020315F0(*((u32*)r5));
    // str r0, [sp, #0x20]
    sub_02031610(*((u32*)r5));
    // str r0, [sp, #0x24]
    // ldr r1, [sp, #0x24]
    // ldr r2, [sp, #0x20]
    GetMonIconNaixEx(r7);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    SpriteSystem_LoadCharResObjAtEndWithHardwareMappingType(r6, r4, 0x14, r0);
    // add r0, sp, #0x28
    // strh r1, [r0]
    *((u16*)(r0 + 2)) = 0x3c;
    *((u16*)(r0 + 4)) = 0;
    *((u16*)(r0 + 6)) = 0;
    // str r0, [sp, #0x3c]
    // str r0, [sp, #0x40]
    // str r0, [sp, #0x44]
    // str r0, [sp, #0x48]
    // str r1, [sp, #0x38]
    // str r0, [sp, #0x4c]
    // str r0, [sp, #0x50]
    // ldr r0, [sp, #0x18]
    // ldr r1, [sp, #0x18]
    // str r2, [sp, #0x30]
    // str r2, [sp, #0x34]
    // str r2, [sp, #0x54]
    // str r2, [sp, #0x58]
    // add r2, sp, #0x28
    SpriteSystem_NewSprite(*((u32*)((1 - 2) + 0x18)), *((u32*)(1 + 0x1c)), 0);
    *((u32*)(r5 + 4)) = r0;
    // ldr r1, [sp, #0x20]
    // ldr r2, [sp, #0x24]
    GetMonIconPaletteEx(r7);
    // ldr r1, [sp, #0x1c]
    // add r1, r1, r2
    ManagedSprite_SetPaletteOverrideOffset(*((u32*)(r5 + 4)), r0);
    ManagedSprite_SetAnim(*((u32*)(r5 + 4)), 1);
}





void ov40_0222E618(void) {
}





void ov40_0222E624(void) {
    SpriteManager_UnloadCharObjById(*((u32*)(r1 + 0x1c)), 0x0002869F);
    SpriteManager_UnloadPlttObjById(*((u32*)(r4 + 0x1c)), 0x0002869F);
    SpriteManager_UnloadCellObjById(*((u32*)(r4 + 0x1c)), 0x0002869F);
    SpriteManager_UnloadAnimObjById(*((u32*)(r4 + 0x1c)), 0x0002869F);
    Sprite_DeleteAndFreeResources(*((u32*)(r5 + 8)));
}





void ov40_0222E658(void) {
    GF_AssertFail();
    // add r0, r0, r1
    // add r0, r0, r2
}





void ov40_0222E690(void) {
    // str r0, [sp, #0x20]
    // str r1, [sp, #0x18]
    sub_020315D0(*((u32*)r0));
    // ldr r1, [sp, #0x18]
    // str r1, [sp, #0x24]
    // ldr r1, [sp, #0x18]
    // str r0, [sp, #0x20]
    sub_02031700(*((u32*)r5), *((u32*)(*((u32*)(r1 + 0x28)) + 0x0000086C)), 0x0000086C);
    // str r0, [sp, #0x1c]
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x1c]
    ov40_0222E658(0, 2);
    // ldr r0, [sp, #0x1c]
    ov40_0222E658(3);
    // str r0, [sp, #0x20]
    // str r0, [sp]
    // str r7, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x24]
    SpriteSystem_LoadPaletteBuffer(0x0002869F, 2, r6, r4);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadCellResObj(r6, r4, 0xb3, 9);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadAnimResObj(r6, r4, 0xb3, 0xa);
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r3, [sp, #0x20]
    // str r0, [sp, #8]
    SpriteSystem_LoadCharResObjAtEndWithHardwareMappingType(r6, r4, 0xb3);
    // add r0, sp, #0x28
    // strh r1, [r0]
    *((u16*)(r0 + 2)) = 0x3c;
    *((u16*)(r0 + 4)) = 0;
    *((u16*)(r0 + 6)) = 0;
    // str r0, [sp, #0x3c]
    // str r0, [sp, #0x40]
    // str r0, [sp, #0x44]
    // str r0, [sp, #0x48]
    // str r1, [sp, #0x38]
    // str r0, [sp, #0x4c]
    // str r0, [sp, #0x50]
    // ldr r0, [sp, #0x18]
    // ldr r1, [sp, #0x18]
    // str r2, [sp, #0x30]
    // str r2, [sp, #0x34]
    // str r2, [sp, #0x54]
    // str r2, [sp, #0x58]
    // add r2, sp, #0x28
    SpriteSystem_NewSprite(*((u32*)((1 - 2) + 0x18)), *((u32*)(1 + 0x1c)), 0);
    *((u32*)(r5 + 8)) = r0;
    ManagedSprite_SetAnim(1);
    ManagedSprite_TickFrame(*((u32*)(r5 + 8)));
}





void ov40_0222E79C(void) {
}





void ov40_0222E7B8(void) {
}





void ov40_0222E7DC(void) {
}





void ov40_0222E7F0(void) {
    sub_02031620(*((u32*)(r1 + 0x0000088C)));
    // str r0, [sp, #0x10]
    sub_0203162C(*((u32*)(r4 + 0x0000088C)));
    // ldr r0, [sp, #0x10]
    // add r5, #0x18
    NewString_ReadMsgData(*((u32*)(r4 + 0x48)), 0x7d);
    // str r0, [sp, #0x14]
    ov40_0222DAB0(0x6d);
    String_New(0xff, 0x6d);
    // str r0, [sp, #0x14]
    NewString_ReadMsgData(*((u32*)(r4 + 0x48)), 0x17);
    // ldr r2, [sp, #0x10]
    BufferCityName(r7, 0, r6);
    // ldr r1, [sp, #0x14]
    StringExpandPlaceholders(r7, r4);
    String_New(0xff, 0x6d);
    // str r0, [sp, #0x14]
    NewString_ReadMsgData(*((u32*)(r4 + 0x48)), 0x16);
    // ldr r2, [sp, #0x10]
    BufferCountryName(r7, 0);
    // ldr r1, [sp, #0x14]
    StringExpandPlaceholders(r7, r4);
    String_Delete(r4);
    MessageFormat_Delete(r7);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r2, [sp, #0x14]
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r5, 0, 0);
    ScheduleWindowCopyToVram(r5);
    // ldr r0, [sp, #0x14]
    String_Delete();
}





void ov40_0222E8C4(void) {
    // str r0, [sp, #0x18]
    // add r0, #0x18
    // str r0, [sp, #0x18]
    // str r1, [sp, #0x14]
    *((u32*)(r0 + 4)) = *((u32*)(r2 + 4));
    // str r0, [r5]
    *((u32*)(r0 + 0xc)) = 0;
    *((u32*)(r0 + 0x10)) = *((u32*)(r2 + 0x24));
    *((u32*)(r0 + 0x28)) = r2;
    *((u32*)(r0 + 0x34)) = *((u32*)(r1 + 0x48));
    _s32_div_f(*((u32*)(r0 + 4)), *((u32*)(r0 + 0x10)));
    *((u32*)(r5 + 0x14)) = (r0 + 1);
    *((u32*)(r5 + 0x10)) = *((u32*)(r5 + 4));
    *((u32*)(r5 + 0x40)) = (*((u32*)(r5 + 4)) - 1);
    *((u32*)(r5 + 0x44)) = (*((u32*)(r5 + 0x10)) - 1);
    // ldr r0, [sp, #0x18]
    InitWindow((*((u32*)(r5 + 0x10)) - 1), *((u32*)(r5 + 4)));
    // ldr r1, [sp, #0x18]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x14]
    AddWindowParameterized(*((u32*)(((*((u32*)(r4 + 0x1c)) << 0x10) >> 0x10) + 0x24)), ((*((u32*)(r4 + 0x20)) << 0x18) >> 0x18), ((*((u32*)(r4 + 0xc)) << 0x18) >> 0x18));
    // ldr r0, [sp, #0x18]
    FillWindowPixelBuffer(0);
    NewString_ReadMsgData(*((u32*)(r5 + 0x34)), *((u32*)(*((u32*)r4) + 0)));
    // str r0, [sp, #0x1c]
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x1c]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x18]
    AddTextPrinterParameterizedWithColor(0, 0, 0);
    // ldr r0, [sp, #0x1c]
    String_Delete();
    // ldr r1, [sp, #0x14]
    ov40_0222E7F0(r5);
    // add r6, #0x10
    // ldr r0, [sp, #0x18]
    ScheduleWindowCopyToVram(*((u32*)(r5 + 0x10)));
}





void ov40_0222E9B8(void) {
    // str r0, [sp, #0x20]
    // add r0, #0x18
    // str r0, [sp, #0x20]
    // str r1, [sp, #0x14]
    *((u32*)(r0 + 4)) = *((u32*)(r3 + 4));
    // str r0, [r4]
    *((u32*)(r0 + 0xc)) = 0;
    *((u32*)(r0 + 0x10)) = *((u32*)(r3 + 0x24));
    *((u32*)(r0 + 0x28)) = r3;
    *((u32*)(r0 + 0x34)) = r2;
    *((u32*)(r0 + 0x34)) = *((u32*)(r1 + 0x48));
    _s32_div_f(*((u32*)(r0 + 4)), *((u32*)(r0 + 0x10)));
    *((u32*)(r4 + 0x14)) = (r0 + 1);
    // add r0, r1, r0
    // asr r0, r0, #1
    *((u32*)(r4 + 0x40)) = (*((u32*)(r4 + 0x10)) >> 0x1f);
    // add r0, r1, r0
    // asr r0, r0, #1
    *((u32*)(r4 + 0x44)) = (*((u32*)(r4 + 0x10)) >> 0x1f);
    *((u32*)(r4 + 0x10)) = *((u32*)(r4 + 4));
    *((u32*)(r4 + 0x40)) = (*((u32*)(r4 + 4)) - 1);
    *((u32*)(r4 + 0x44)) = (*((u32*)(r4 + 0x10)) - 1);
    // ldr r0, [sp, #0x20]
    InitWindow((*((u32*)(r4 + 0x10)) - 1), *((u32*)(r4 + 4)));
    // ldr r1, [sp, #0x20]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x14]
    AddWindowParameterized(*((u32*)(((*((u32*)(r5 + 0x1c)) << 0x10) >> 0x10) + 0x24)), ((*((u32*)(r5 + 0x20)) << 0x18) >> 0x18), ((*((u32*)(r5 + 0xc)) << 0x18) >> 0x18));
    // ldr r0, [sp, #0x20]
    FillWindowPixelBuffer(0);
    NewString_ReadMsgData(*((u32*)(r4 + 0x34)), *((u32*)(*((u32*)r5) + 0)));
    // str r0, [sp, #0x24]
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x24]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x20]
    AddTextPrinterParameterizedWithColor(0, 0, 0);
    // ldr r0, [sp, #0x24]
    String_Delete();
    // add r7, #0x10
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x14]
    // str r0, [sp, #0x1c]
    String_New(0xff, 0x6d);
    String_New(0xff, 0x6d);
    // str r0, [sp, #0x2c]
    // ldr r0, [sp, #0x14]
    NewString_ReadMsgData(*((u32*)(r0 + 0x48)), 0x63);
    // str r0, [sp, #0x28]
    // ldr r1, [sp, #0x18]
    // str r0, [sp]
    // ldr r0, [sp, #0x2c]
    String16_FormatInteger(1, (r1 + 1), 2, 1);
    // ldr r2, [sp, #0x1c]
    CopyU16ArrayToString(r7, *((u32*)(r2 + 0x00002608)));
    // ldr r0, [sp, #0x14]
    ov40_02230DCC(r7);
    // ldr r1, [sp, #0x2c]
    FontID_String_GetWidth(0, 0);
    // mov ip, r0
    // str r5, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x2c]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x20]
    // mov r6, ip
    // sub r3, r3, r6
    AddTextPrinterParameterizedWithColor(0, 0, 0x10);
    // str r5, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x28]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x20]
    AddTextPrinterParameterizedWithColor(0, 0, 0x10);
    // str r5, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x20]
    AddTextPrinterParameterizedWithColor(0, 0, r7, 0x16);
    String_Delete(r7);
    // ldr r0, [sp, #0x2c]
    String_Delete();
    // ldr r0, [sp, #0x28]
    String_Delete();
    // ldr r0, [sp, #0x1c]
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x18]
    // add r5, #0x18
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x20]
    ScheduleWindowCopyToVram(((r0 + 4) + 1), *((u32*)(r4 + 0x10)));
}





void ov40_0222EB9C(void) {
    // ldr r0, [sp, #0x2f4]
    // str r0, [sp, #0x2f4]
    // ldr r0, [sp, #0x2f8]
    // str r1, [sp, #0x14]
    // str r0, [sp, #0x2f8]
    // str r0, [sp, #0x40]
    // add r6, sp, #0x264
    // stmia r6!, {r0, r1}
    // stmia r6!, {r0, r1}
    // stmia r6!, {r0, r1}
    // str r0, [sp, #0x50]
    // add r0, #0x18
    // str r0, [sp, #0x50]
    *((u32*)(r0 + 4)) = *((u32*)(r3 + 4));
    // str r0, [r4]
    *((u32*)(r0 + 0xc)) = 0;
    *((u32*)(r0 + 0x10)) = *((u32*)(r3 + 0x24));
    *((u32*)(r0 + 0x28)) = r3;
    *((u32*)(r0 + 0x34)) = r2;
    // ldr r0, [sp, #0x14]
    *((u32*)(r0 + 0x34)) = *((u32*)(*((u32*)(r3 + 0x24)) + 0x48));
    _s32_div_f(*((u32*)(r0 + 4)), *((u32*)(r0 + 0x10)), (7 - 1));
    *((u32*)(r4 + 0x14)) = (r0 + 1);
    *((u32*)(r4 + 0x10)) = *((u32*)(r4 + 4));
    *((u32*)(r4 + 0x40)) = (*((u32*)(r4 + 4)) - 1);
    *((u32*)(r4 + 0x44)) = (*((u32*)(r4 + 0x10)) - 1);
    // add r0, r1, r0
    // asr r0, r0, #1
    *((u32*)(r4 + 0x40)) = (*((u32*)(r4 + 0x10)) >> 0x1f);
    // add r0, r1, r0
    // asr r0, r0, #1
    *((u32*)(r4 + 0x44)) = (*((u32*)(r4 + 0x10)) >> 0x1f);
    // ldr r0, [sp, #0x50]
    InitWindow((*((u32*)(r4 + 0x10)) >> 0x1f), *((u32*)(r4 + 0x10)));
    // ldr r1, [sp, #0x50]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x14]
    AddWindowParameterized(*((u32*)(((*((u32*)(r5 + 0x1c)) << 0x10) >> 0x10) + 0x24)), ((*((u32*)(r5 + 0x20)) << 0x18) >> 0x18), ((*((u32*)(r5 + 0xc)) << 0x18) >> 0x18));
    // ldr r0, [sp, #0x50]
    FillWindowPixelBuffer(0);
    ov40_0222DAB0(0x6d);
    // add r2, sp, #0x58
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // str r0, [sp, #0x38]
    // str r0, [sp, #0x3c]
    // str r0, [sp, #0x264]
    // ldr r0, [sp, #0x2f4]
    // add r3, sp, #0x268
    // mov ip, r0
    // add r0, r0, r2
    // ldr r0, [sp, #0x3c]
    // str r1, [sp, #0x54]
    // eor r1, r0
    // ldr r0, [sp, #0x38]
    // eor r0, r7
    // ldr r0, [sp, #0x40]
    // str r0, [r3]
    // ldr r0, [sp, #0x54]
    // str r7, [sp, #0x38]
    // str r0, [sp, #0x3c]
    // str r6, [r3]
    // str r6, [sp, #0x40]
    // mov r0, ip
    // add r2, #0x10
    // str r0, [sp, #0x18]
    // add r0, sp, #0x264
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x2f4]
    // ldr r6, [sp, #0x18]
    // str r0, [sp, #0x1c]
    // add r0, #0x58
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp, #0x1c]
    NewString_ReadMsgData(*((u32*)(*((u32*)(r4 + 0x10)) + 0x48)), *((u32*)(*((u32*)*((u32*)(r4 + 0x28))) + 0xc)), 0x10, (ov40_02244E10 + 4));
    // str r0, [sp, #0x4c]
    String_New(0xff, 0x6d);
    // str r0, [sp, #0x48]
    String_New(0xff, 0x6d);
    String_New(0xff, 0x6d);
    // str r0, [sp, #0x34]
    // ldr r0, [sp, #0x2f4]
    // add r1, r1, r6
    NewString_ReadMsgData(*((u32*)(r4 + 0x34)), *((u32*)(*((u32*)*((u32*)(r4 + 0x28))) + 4)));
    // str r0, [sp, #0x44]
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x44]
    BufferString(r5, 1, 0);
    // add r0, r0, r6
    // str r0, [sp, #0x30]
    String_New(0xff, 0x6d);
    // str r0, [sp, #0x44]
    // ldr r2, [sp, #0x30]
    BufferMonthNameAbbr(r5, 1);
    // add r0, r0, r6
    // str r0, [sp, #0x2c]
    String_New(0xff, 0x6d);
    // str r0, [sp, #0x44]
    // ldr r0, [sp, #0x2c]
    // add r2, sp, #0x64
    GetSpeciesNameIntoArray(0x6d);
    // ldr r0, [sp, #0x44]
    // add r1, sp, #0x64
    CopyU16ArrayToString();
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x44]
    BufferString(r5, 1, 0);
    // add r1, r0, r6
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x28]
    // ldr r0, [sp, #0x24]
    // ldr r1, [sp, #0x28]
    ov40_022307B0(*((u32*)(r1 + 0xc)));
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x34]
    // ldr r1, [sp, #0x24]
    // ldr r2, [sp, #0x28]
    String16_FormatUnsignedLongLong(1, r0);
    // str r0, [sp]
    // ldr r1, [sp, #0x20]
    // ldr r0, [sp, #0x48]
    String16_FormatInteger(1, (*((u32*)r1) + 1), 2, 1);
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x48]
    BufferString(r5, 0, 0);
    // ldr r2, [sp, #0x4c]
    StringExpandPlaceholders(r5, r7);
    // ldr r0, [sp, #0x18]
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x50]
    AddTextPrinterParameterizedWithColor(0, 0, r7, 0);
    // ldr r0, [sp, #0x2f8]
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x34]
    BufferString(r5, 2, 0);
    // ldr r2, [sp, #0x2f8]
    StringExpandPlaceholders(r5, r7);
    // ldr r0, [sp, #0x18]
    // add r1, #0x10
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x50]
    AddTextPrinterParameterizedWithColor(0, 0, r7, 0x10);
    // ldr r0, [sp, #0x4c]
    String_Delete();
    // ldr r0, [sp, #0x48]
    String_Delete();
    // ldr r0, [sp, #0x44]
    String_Delete();
    String_Delete(r7);
    // ldr r0, [sp, #0x34]
    String_Delete();
    MessageFormat_ResetBuffers(r5);
    // ldr r0, [sp, #0x20]
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x18]
    // add r6, #0x10
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x50]
    ScheduleWindowCopyToVram(((r0 + 4) + 1), *((u32*)(r4 + 0x10)));
    MessageFormat_Delete(r5);
}





void ov40_0222EED0(void) {
    // str r0, [sp, #0x14]
    // add r0, #0x18
    // str r0, [sp, #0x14]
    *((u32*)(r0 + 4)) = *((u32*)(r2 + 4));
    // str r0, [r6]
    *((u32*)(r0 + 0xc)) = 0;
    *((u32*)(r0 + 0x10)) = *((u32*)(r2 + 0x24));
    *((u32*)(r0 + 0x28)) = r2;
    *((u32*)(r0 + 0x34)) = *((u32*)(r1 + 0x48));
    _s32_div_f(*((u32*)(r0 + 4)), *((u32*)(r0 + 0x10)));
    *((u32*)(r6 + 0x14)) = (r0 + 1);
    // add r0, r1, r0
    // asr r0, r0, #1
    *((u32*)(r6 + 0x40)) = (*((u32*)(r6 + 0x10)) >> 0x1f);
    // add r0, r1, r0
    // asr r0, r0, #1
    *((u32*)(r6 + 0x44)) = (*((u32*)(r6 + 0x10)) >> 0x1f);
    *((u32*)(r6 + 0x10)) = *((u32*)(r6 + 4));
    *((u32*)(r6 + 0x40)) = (*((u32*)(r6 + 4)) - 1);
    *((u32*)(r6 + 0x44)) = (*((u32*)(r6 + 0x10)) - 1);
    *((u32*)(r6 + 0x48)) = 1;
    // ldr r0, [sp, #0x14]
    InitWindow(1, *((u32*)(r6 + 4)));
    // ldr r1, [sp, #0x14]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    AddWindowParameterized(*((u32*)(r4 + 0x24)), ((*((u32*)(r7 + 0x20)) << 0x18) >> 0x18), ((*((u32*)(r7 + 0xc)) << 0x18) >> 0x18));
    // ldr r0, [sp, #0x14]
    FillWindowPixelBuffer(0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x14]
    AddTextPrinterParameterizedWithColor(0, 0, *((u32*)r5), 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x14]
    AddTextPrinterParameterizedWithColor(0, 0, *((u32*)(r5 + 4)), 0x88);
    // add r5, #8
    // ldr r0, [sp, #0x14]
    ScheduleWindowCopyToVram(*((u32*)(r6 + 0x10)));
}





void ov40_0222EFD8(void) {
    // add r7, #0x18
    FillWindowPixelBuffer(r0, 0);
    // sub r0, r2, r3
    // sub r3, r1, r3
    // sub r0, r1, r0
    // add r4, r4, r0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r7, 0, *((u32*)r4), 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r7, 0, *((u32*)(r4 + 4)), 0x88);
    // add r4, #8
    CopyWindowToVram(r7);
    *((u32*)(r5 + 0xc)) = *((u32*)(r5 + 0x38));
}





void ov40_0222F09C(void) {
    // ldr r0, [sp, #0x2f8]
    // str r1, [sp, #0x10]
    // str r0, [sp, #0x2f8]
    // ldrsh r1, [r4, r0]
    // str r3, [sp, #0x14]
    // str r0, [sp, #0x58]
    // add r0, #0x18
    // str r0, [sp, #0x58]
    ov40_0222DAB0(0x6d, *((u32*)(r0 + 0x10)));
    // ldr r0, [sp, #0x58]
    FillWindowPixelBuffer(0);
    // str r0, [sp, #0x44]
    // str r0, [sp, #0x40]
    // ldrsh r0, [r4, r0]
    // add r3, sp, #0x26c
    // str r0, [sp, #0x18]
    // add r0, r0, r1
    // str r0, [sp, #0x34]
    // ldr r0, [sp, #0x44]
    // stmia r3!, {r0, r1}
    // stmia r3!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [sp, #0x34]
    // str r1, [sp, #0x34]
    // sub r0, r1, r0
    // str r0, [sp, #0x18]
    // add r2, sp, #0x60
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // str r0, [sp, #0x38]
    // str r0, [sp, #0x3c]
    // str r0, [sp, #0x26c]
    // ldr r0, [sp, #0x14]
    // add r3, sp, #0x270
    // mov ip, r0
    // add r0, r0, r2
    // ldr r0, [sp, #0x3c]
    // str r1, [sp, #0x5c]
    // eor r1, r0
    // ldr r0, [sp, #0x38]
    // eor r0, r7
    // ldr r0, [sp, #0x40]
    // str r0, [r3]
    // ldr r0, [sp, #0x5c]
    // str r7, [sp, #0x38]
    // str r0, [sp, #0x3c]
    // str r6, [r3]
    // str r6, [sp, #0x40]
    // mov r0, ip
    // add r2, #0x10
    // ldr r1, [sp, #0x18]
    // ldr r0, [sp, #0x34]
    // add r1, sp, #0x26c
    // add r0, r1, r0
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x14]
    // str r0, [sp, #0x1c]
    // add r0, #0x58
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x10]
    // ldr r1, [sp, #0x1c]
    NewString_ReadMsgData(*((u32*)((*((u32*)(*((u32*)*((u32*)(r4 + 0x28))) + 0xc)) << 2) + 0x48)), *((u32*)(*((u32*)*((u32*)(r4 + 0x28))) + 0xc)), 0x10, (ov40_02244E1C + 4));
    // str r0, [sp, #0x54]
    String_New(0xff, 0x6d);
    // str r0, [sp, #0x50]
    String_New(0xff, 0x6d);
    String_New(0xff, 0x6d);
    // str r0, [sp, #0x48]
    // ldr r0, [sp, #0x14]
    // add r1, r1, r6
    NewString_ReadMsgData(*((u32*)(r4 + 0x34)), *((u32*)(*((u32*)*((u32*)(r4 + 0x28))) + 4)));
    // str r0, [sp, #0x4c]
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x4c]
    BufferString(r5, 1, 0);
    // add r0, r0, r6
    // str r0, [sp, #0x30]
    String_New(0xff, 0x6d);
    // str r0, [sp, #0x4c]
    // ldr r2, [sp, #0x30]
    BufferMonthNameAbbr(r5, 1);
    // add r0, r0, r6
    // str r0, [sp, #0x2c]
    String_New(0xff, 0x6d);
    // str r0, [sp, #0x4c]
    // ldr r0, [sp, #0x2c]
    // add r2, sp, #0x6c
    GetSpeciesNameIntoArray(0x6d);
    // ldr r0, [sp, #0x4c]
    // add r1, sp, #0x6c
    CopyU16ArrayToString();
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x4c]
    BufferString(r5, 1, 0);
    // add r1, r0, r6
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x28]
    // ldr r0, [sp, #0x24]
    // ldr r1, [sp, #0x28]
    ov40_022307B0(*((u32*)(r1 + 0xc)));
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x48]
    // ldr r1, [sp, #0x24]
    // ldr r2, [sp, #0x28]
    String16_FormatUnsignedLongLong(1, r0);
    // str r0, [sp]
    // ldr r1, [sp, #0x20]
    // ldr r0, [sp, #0x50]
    String16_FormatInteger(1, (*((u32*)r1) + 1), 2, 1);
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x50]
    BufferString(r5, 0, 0);
    // ldr r2, [sp, #0x54]
    StringExpandPlaceholders(r5, r7);
    // ldr r0, [sp, #0x44]
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x58]
    AddTextPrinterParameterizedWithColor(0, 0, r7, 0);
    // ldr r0, [sp, #0x2f8]
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x48]
    BufferString(r5, 2, 0);
    // ldr r2, [sp, #0x2f8]
    StringExpandPlaceholders(r5, r7);
    // ldr r0, [sp, #0x44]
    // add r1, #0x10
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x58]
    AddTextPrinterParameterizedWithColor(0, 0, r7, 0x10);
    // ldr r0, [sp, #0x44]
    // str r0, [sp, #0x44]
    // ldr r0, [sp, #0x54]
    String_Delete((r0 + 1));
    // ldr r0, [sp, #0x50]
    String_Delete();
    // ldr r0, [sp, #0x4c]
    String_Delete();
    String_Delete(r7);
    // ldr r0, [sp, #0x48]
    String_Delete();
    MessageFormat_ResetBuffers(r5);
    // ldr r0, [sp, #0x20]
    // add r6, #0x10
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x18]
    // ldr r0, [sp, #0x34]
    // str r1, [sp, #0x18]
    // ldr r0, [sp, #0x58]
    ScheduleWindowCopyToVram((r0 + 4), ((r0 + 4) + 1));
    MessageFormat_Delete(r5);
    // ldrsh r0, [r4, r0]
    *((u32*)(r4 + 0xc)) = 8;
}





void ov40_0222F38C(void) {
    // str r0, [sp, #0x1c]
    // ldr r6, [sp, #0x1c]
    // add r0, r0, r4
    TouchscreenHitbox_TouchNewIsIn(*((u32*)(*((u32*)(r0 + 0x28)) + 0x28)));
    ov40_02230944(r7);
    // ldrsh r1, [r5, r1]
    // add r1, r1, r6
    // add r0, r0, r1
    // str r0, [sp, #0x1c]
    // ldrsh r1, [r5, r0]
    // ldr r0, [sp, #0x1c]
    // ldr r0, [sp, #0x1c]
    // str r0, [sp, #0x18]
    // add r0, #0x18
    // str r0, [sp, #0x18]
    FillWindowPixelBuffer(r5, 0);
    // ldrsh r0, [r5, r0]
    // str r0, [sp, #0x10]
    // add r0, r0, r2
    // str r0, [sp, #0x14]
    // sub r0, r1, r2
    // str r0, [sp, #0x10]
    // str r1, [sp, #0x14]
    // ldr r1, [sp, #0x10]
    // ldr r0, [sp, #0x14]
    NewString_ReadMsgData(*((u32*)(r5 + 0x34)), *((u32*)(*((u32*)*((u32*)(r5 + 0x28))) + (*((u32*)(r5 + 4)) << 4))), *((u32*)(r5 + 0x10)));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x18]
    AddTextPrinterParameterizedWithColor(0, 0, r0, 0);
    String_Delete(r7);
    // ldr r0, [sp, #0x10]
    // ldr r0, [sp, #0x14]
    // add r4, #0x10
    // str r1, [sp, #0x10]
    // ldr r0, [sp, #0x18]
    CopyWindowToVram((r0 + 1));
    // ldrsh r0, [r5, r0]
    *((u32*)(r5 + 0xc)) = 8;
    // ldr r0, [sp, #0x1c]
}





void ov40_0222F488(void) {
    // str r1, [sp, #0x14]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x10]
    // ldr r0, [sp, #0x10]
    // str r0, [sp, #0x28]
    // add r0, #0x18
    // str r0, [sp, #0x28]
    FillWindowPixelBuffer(0, 0);
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x10]
    // ldr r1, [sp, #0x10]
    // ldr r1, [sp, #0x10]
    // sub r1, r2, r0
    // str r1, [sp, #0x1c]
    // ldr r1, [sp, #0x10]
    // sub r0, r1, r0
    // ldr r0, [sp, #0x10]
    // sub r0, r1, r0
    // str r0, [sp, #0x1c]
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x10]
    // ldr r0, [sp, #0x1c]
    // ldr r0, [sp, #0x14]
    // add r0, r0, r1
    // str r0, [sp, #0x18]
    String_New(0xff, 0x6d, *((u32*)(*((u32*)(r1 + 0x3c)) + 0x38)));
    String_New(0xff, 0x6d);
    // ldr r0, [sp, #0x14]
    NewString_ReadMsgData(*((u32*)(r0 + 0x48)), 0x63);
    // str r0, [sp, #0x24]
    // str r0, [sp]
    // ldr r2, [sp, #0x1c]
    // ldr r1, [sp, #0x20]
    // add r1, r2, r1
    String16_FormatInteger(r7, (r1 + 1), 2, 1);
    // ldr r2, [sp, #0x18]
    CopyU16ArrayToString(r5, *((u32*)(r2 + 0x00002608)));
    // ldr r0, [sp, #0x14]
    ov40_02230DCC(r5);
    FontID_String_GetWidth(0, r7, 0);
    // mov ip, r0
    // str r4, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // mov r6, ip
    // ldr r0, [sp, #0x28]
    // sub r3, r3, r6
    AddTextPrinterParameterizedWithColor(0, 0, r7, 0x10);
    // str r4, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x24]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x28]
    AddTextPrinterParameterizedWithColor(0, 0, 0x10);
    // str r4, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x28]
    AddTextPrinterParameterizedWithColor(0, 0, r5, 0x16);
    String_Delete(r5);
    String_Delete(r7);
    // ldr r0, [sp, #0x24]
    String_Delete();
    // ldr r0, [sp, #0x18]
    // add r4, #0x18
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x20]
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x10]
    // ldr r0, [sp, #0x20]
    // ldr r0, [sp, #0x28]
    CopyWindowToVram(((r0 + 4) + 1), *((u32*)(((r0 + 4) + 1) + 0x10)));
    // ldr r0, [sp, #0x10]
    *((u32*)(r0 + 0xc)) = *((u32*)(r0 + 0x38));
}





void ov40_0222F5EC(void) {
    *((u32*)(r0 + 0x38)) = (*((u32*)(r0 + 0x38)) - 1);
    PlaySE(0x00000572);
    *((u32*)(r5 + 0x38)) = (*((u32*)(r5 + 0x38)) + 1);
    PlaySE(0x00000572, *((u32*)(r5 + 0x38)));
    // asr r4, r0, #0x10
    // sub r0, r0, r2
    // asr r4, r2, #0x10
    // sub r0, r1, r0
    // add r0, r4, r0
    // asr r4, r0, #0x10
    // asr r4, r0, #0x10
    // sub r0, r1, r2
    // add r0, r4, r0
    // asr r4, r0, #0x10
    // asr r4, r0, #0x10
    // asr r4, r1, #0x10
    // sub r1, r1, r2
    // sub r0, r0, r1
    // add r0, r4, r0
    // asr r4, r0, #0x10
    GF_AssertFail(((*((u32*)(r5 + 0x38)) << 0x10) << 0x10), (*((u32*)(r5 + 4)) - 1), *((u32*)(r5 + 0x40)));
    *((u32*)(r5 + 0x3c)) = r4;
    // sub r0, r1, r2
    // asr r3, r0, #0x10
    // sub r2, r0, r2
    // sub r0, r0, r1
    // asr r3, r0, #0x10
    *((u16*)(r5 + 8)) = 0;
    ov40_0222F8C0(r5, *((u32*)(r5 + 0x10)), (*((u32*)(r5 + 0x40)) + 1), 0);
}





void ov40_0222F6D0(void) {
    // ldrsh r0, [r4, r2]
    // add r1, r0, r1
    *((u16*)(r0 + 8)) = r1;
    // ldrsh r1, [r4, r2]
    *((u16*)(r0 + 8)) = 0;
    *((u16*)(r0 + 8)) = 0;
    // ldrsh r1, [r4, r1]
    // add r1, r1, r3
    // sub r1, r2, r3
    *((u16*)(r0 + 8)) = 8;
    // ldrsh r1, [r4, r1]
    PlaySE(0x00000572, 8, *((u32*)(r0 + 4)), *((u32*)(r0 + 0x10)));
    ov40_0222F878(r4);
}





void ov40_0222F720(void) {
}





void ov40_0222F734(void) {
}





void ov40_0222F740(void) {
    // str r0, [sp, #0x10]
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // str r6, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0xc]
    // ldr r2, [sp, #0x10]
    SpriteSystem_LoadCharResObjFromOpenNarc(0x00030D40, *((u32*)(r1 + 0x1c)), 0x7f);
    // str r0, [sp]
    // ldr r2, [sp, #0x10]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0xc]
    SpriteSystem_LoadCellResObjFromOpenNarc(0x00030D40, r7, 0x7e);
    // str r0, [sp]
    // ldr r2, [sp, #0x10]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0xc]
    SpriteSystem_LoadAnimResObjFromOpenNarc(0x00030D40, r7, 0x7d);
    // add r0, sp, #0x14
    // strh r1, [r0]
    *((u16*)(r0 + 2)) = 0x60;
    *((u16*)(r0 + 4)) = 0;
    *((u16*)(r0 + 6)) = 0;
    // str r0, [sp, #0x1c]
    // str r0, [sp, #0x40]
    // str r0, [sp, #0x38]
    // str r0, [sp, #0x3c]
    // str r1, [sp, #0x20]
    // str r6, [sp, #0x24]
    // str r1, [sp, #0x44]
    // str r0, [sp, #0x28]
    // str r0, [sp, #0x30]
    // str r0, [sp, #0x34]
    // str r0, [sp, #0x2c]
    // str r0, [sp, #0x2c]
    // add r2, sp, #0x14
    SpriteSystem_NewSprite(*((u32*)(r4 + 0x18)), *((u32*)(r4 + 0x1c)));
    *((u32*)(r5 + 0x2c)) = r0;
    // add r2, sp, #0x14
    SpriteSystem_NewSprite(*((u32*)(r4 + 0x18)), *((u32*)(r4 + 0x1c)));
    *((u32*)(r5 + 0x30)) = r0;
    ManagedSprite_SetPaletteOverride(*((u32*)(r5 + 0x2c)), 2);
    ManagedSprite_SetPaletteOverride(*((u32*)(r5 + 0x30)), 2);
    ManagedSprite_SetAnim(*((u32*)(r5 + 0x2c)), 0);
    ManagedSprite_SetAnim(*((u32*)(r5 + 0x30)), 0);
    ManagedSprite_TickFrame(*((u32*)(r5 + 0x2c)));
    ManagedSprite_TickFrame(*((u32*)(r5 + 0x30)));
    ManagedSprite_SetFlipMode(*((u32*)(r5 + 0x30)), 2);
    ManagedSprite_SetPositionXY(*((u32*)(r5 + 0x2c)), 0x80, 0x18);
    ManagedSprite_SetPositionXY(*((u32*)(r5 + 0x30)), 0x80, 0x78);
    ManagedSprite_SetPositionXY(0x80, 0x58);
    ManagedSprite_SetPositionXY(*((u32*)(r5 + 0x30)), 0x80, 0xb8);
    ov40_0222F878(r5);
}





void ov40_0222F858(void) {
}





void ov40_0222F878(void) {
    // ldrsh r0, [r4, r0]
    // ldrsh r1, [r4, r0]
    // add r1, r1, r0
}





void ov40_0222F8C0(void) {
    // ldrsh r0, [r4, r0]
    // ldrsh r1, [r4, r0]
    // add r1, r1, r0
}





void ov40_0222F920(void) {
    SpriteManager_UnloadCharObjById(*((u32*)(r1 + 0x1c)), 0x00030D40);
    SpriteManager_UnloadCellObjById(*((u32*)(r4 + 0x1c)), 0x00030D40);
    SpriteManager_UnloadAnimObjById(*((u32*)(r4 + 0x1c)), 0x00030D40);
    Sprite_DeleteAndFreeResources(*((u32*)(r5 + 0x2c)));
    Sprite_DeleteAndFreeResources(*((u32*)(r5 + 0x30)));
}





void ov40_0222F950(void) {
    // add r0, sp, #0
    // strh r3, [r0]
    *((u16*)(r0 + 2)) = 0x60;
    *((u16*)(r0 + 4)) = 0;
    *((u16*)(r0 + 6)) = 0;
    // str r0, [sp, #8]
    // str r0, [sp, #0x2c]
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x28]
    // str r3, [sp, #0xc]
    // str r2, [sp, #0x10]
    // str r3, [sp, #0x30]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x1c]
    // str r0, [sp, #0x20]
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x18]
    // add r2, sp, #0
    SpriteSystem_NewSprite(*((u32*)(r1 + 0x18)), *((u32*)(r1 + 0x1c)), 0);
    ManagedSprite_SetPaletteOverride(2);
    ManagedSprite_SetAnim(r5, r4);
    ManagedSprite_TickFrame(r5);
}





void ov40_0222F9C0(void) {
}





void ov40_0222F9D4(void) {
}





void ov40_0222F9E0(void) {
}





void ov40_0222FA18(void) {
}





void ov40_0222FA24(void) {
}





void ov40_0222FA2C(void) {
    // sub r4, r1, r2
    // mvn r2, r2
}





void ov40_0222FA5C(void) {
}





void ov40_0222FA88(void) {
    // add r0, sp, #4
    // add r1, sp, #0
    System_GetTouchHeldCoords();
    ManagedSprite_TickTwoFrames(*((u32*)(r5 + 0x18)));
    ManagedSprite_TickTwoFrames(*((u32*)(r5 + 0x1c)));
    *((u32*)(r5 + 4)) = 0;
    // str r0, [r5]
    *((u32*)(r5 + 8)) = 0;
    *((u32*)(r5 + 0xc)) = 0;
    *((u16*)(r5 + 0x10)) = 0;
    TouchscreenHitbox_TouchHeldIsIn(ov40_02244E08);
    TouchscreenHitbox_TouchHeldIsIn(ov40_02244E0C);
    *((u32*)(r5 + 4)) = 1;
    // ldr r0, [sp, #4]
    *((u32*)(r5 + 8)) = 1;
    // ldr r0, [sp]
    *((u32*)(r5 + 0xc)) = 1;
    // str r0, [r5]
    // str r0, [r5]
    // ldr r1, [sp]
    ov40_0222FA2C(r5);
    *((u32*)(r5 + 4)) = 0;
    // str r0, [r5]
    *((u32*)(r5 + 8)) = 0;
    *((u32*)(r5 + 0xc)) = 0;
}





void ov40_0222FB28(void) {
    // ldr r0, [r0, r1]
}





void ov40_0222FB40(void) {
    // add r2, sp, #4
    sub_0202FBF0(*((u32*)(r0 + (0x83 << 4))), 0x7e);
    // sub r1, #0x84
    // str r1, [sp]
    // add r1, #0x80
    // add r2, #0xe4
    sub_02030814(*((u32*)(r4 + 0x000008B4)), *((u32*)(r4 + 0x000008B4)), *((u32*)(r4 + 0x000008B4)), 0);
}





void ov40_0222FB74(void) {
}





void ov40_0222FB90(void) {
    // str r1, [r3, r2]
    // str r1, [r3, r0]
    // add r1, r3, r2
}





void ov40_0222FBB4(void) {
    // ldr r0, [r0, r1]
}





void ov40_0222FBBC(void) {
    ov40_02230958(r1);
    // str r1, [r4, r0]
    PokepicManager_HandleLoadImgAndOrPltt(*((u32*)(r4 + 0x64)), 1);
    SpriteSystem_DrawSprites(*((u32*)(r4 + 0x1c)));
    SpriteSystem_TransferOam();
    // str r1, [r4, r0]
}





void ov40_0222FBF8(void) {
}





void ov40_0222FC14(void) {
    // add r0, r3, r4
    // str r0, [sp]
    // add r3, r3, r4
    ov40_02244AB0(*((u32*)(r0 + (0x00000836 - 6))), r0);
}





void ov40_0222FC40(void) {
    // str r1, [r0, r2]
}





void ov40_0222FC4C(void) {
    // add r7, r2, r3
    // str r0, [sp]
    ov40_0223D540(*((u32*)r1), r0, 0x000008B4);
    // add r1, r7, r1
    ov39_0222801C(0x00001D54, 0x1e);
    // str r0, [r7, r1]
    // ldr r5, [sp]
    // add r6, r0, r1
    GF_AssertFail(*((u32*)(r5 + 0x00002608)), (0x9a << 6));
    MI_CpuCopy8(*((u32*)(r5 + 0x00002608)), r6, 0xe4);
    // ldr r1, [sp]
    // add r2, r1, r4
    // add r0, #0xa7
    // strb r0, [r2, r1]
    // add r6, #0xe4
}





void ov40_0222FCCC(void) {
    // str r5, [sp]
    // add r2, sp, #4
    sub_0202FC90(*((u32*)(r0 + (0x83 << 4))), 0x6d, 0);
    // ldr r0, [sp, #4]
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222FCFC: ; jump table
    // str r7, [r4, r0]
    // add r0, #0x10
    // str r7, [r4, r0]
    sub_020314A4(0x6d);
    // str r0, [r4, r1]
    // sub r1, #0x5c
    sub_020314C4(*((u32*)(r4 + 0x0000088C)), *((u32*)(r6 + 0x0000088C)));
    // str r1, [r4, r0]
    // add r0, #0x10
    // str r1, [r4, r0]
    sub_020314A4(0x6d, 0);
    // str r0, [r4, r1]
    // sub r1, #0x5c
    sub_020314C4(*((u32*)(r4 + 0x0000088C)), *((u32*)(r6 + 0x0000088C)));
    // str r1, [r4, r0]
    // add r0, #0x10
    // str r1, [r4, r0]
    sub_020314A4(0x6d, 0);
    // str r0, [r4, r1]
    // sub r1, #0x5c
    sub_020314C4(*((u32*)(r4 + 0x0000088C)), *((u32*)(r6 + 0x0000088C)));
    sub_0203077C(0x6d);
    // str r0, [r4, r1]
    sub_020314A4(0x6d, 0x0000087C);
    // str r0, [r4, r1]
    // sub r1, #0x5c
    sub_020314C4(*((u32*)(r4 + 0x0000088C)), *((u32*)(r6 + 0x0000088C)));
    sub_020307AC(0x6d);
    // str r0, [r4, r1]
    sub_0202FC48(0x0000088C);
    sub_0202FC24();
}





void ov40_0222FDC4(void) {
    Heap_Free(*((u32*)(r0 + 0x0000087C)));
    // str r6, [r5, r0]
    Heap_Free(*((u32*)(r5 + 0x0000088C)));
    // str r7, [r5, r0]
}





void ov40_0222FE00(void) {
    sub_02074490();
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    SpriteSystem_LoadPaletteBuffer(r6, 2, r4, r5);
    sub_0207449C();
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadCellResObj(r4, r5, 0x14, r0);
    sub_020744A8();
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadAnimResObj(r4, r5, 0x14, r0);
}





void ov40_0222FE68(void) {
    SpriteManager_UnloadPlttObjById(*((u32*)(r0 + 0x1c)), 0x000186A0);
    SpriteManager_UnloadCellObjById(*((u32*)(r4 + 0x1c)), 0x000186A0);
    SpriteManager_UnloadAnimObjById(*((u32*)(r4 + 0x1c)), 0x000186A0);
}





void ov40_0222FE8C(void) {
}





void ov40_0222FE98(void) {
}





void ov40_0222FEA0(void) {
    // str r1, [sp, #0xc]
    // ldr r0, [sp, #0x60]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x64]
    // ldr r2, [sp, #0x10]
    // str r0, [sp, #0x14]
    // ldr r1, [sp, #0x14]
    GetMonIconNaixEx(r3);
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0xc]
    // add r0, r5, r0
    // str r0, [sp, #8]
    SpriteSystem_LoadCharResObjFromOpenNarcWithHardwareMappingType(r7, r6, r0);
    // add r0, sp, #0x18
    // strh r1, [r0]
    // sub r2, #0x30
    *((u16*)(r0 + 2)) = 0;
    *((u16*)(r0 + 4)) = 0;
    *((u16*)(r0 + 6)) = 0;
    // str r0, [sp, #0x28]
    // str r1, [sp, #0x20]
    // str r1, [sp, #0x24]
    // str r1, [sp, #0x44]
    // str r1, [sp, #0x48]
    // str r0, [sp, #0x3c]
    // add r2, r5, r1
    // str r2, [sp, #0x2c]
    // str r0, [sp, #0x40]
    // str r1, [sp, #0x30]
    // str r1, [sp, #0x34]
    // str r1, [sp, #0x38]
    // add r2, sp, #0x18
    SpriteSystem_NewSprite(r7, r6, 0);
    // ldr r1, [sp, #0x10]
    // ldr r2, [sp, #0x14]
    GetMonIconPaletteEx(r4);
    ManagedSprite_SetPaletteOverrideOffset(r5, (r0 + 4));
    ManagedSprite_SetAnim(r5, 1);
    ManagedSprite_TickFrame(r5);
}





void ov40_0222FF48(void) {
    // add r1, r1, r2
    SpriteManager_UnloadCharObjById(*((u32*)(r0 + 0x1c)), 0x000186A0);
    Sprite_DeleteAndFreeResources(r4);
}





void ov40_0222FF64(void) {
}





void ov40_0222FF74(void) {
    // str r0, [sp, #0x14]
    // add r2, sp, #0x74
    // strh r0, [r2]
    // add r2, sp, #0x5c
    // str r2, [sp, #0x20]
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldr r5, [sp, #0x14]
    // str r0, [sp, #0x3c]
    // str r0, [sp, #0x40]
    // add r4, sp, #0x74
    // add r5, #0x3c
    // ldrsh r0, [r4, r0]
    // ldr r1, [sp, #0x20]
    NewString_ReadMsgData(*((u32*)(r1 + 0x48)), *((u32*)(0x14 - 1)), (r2 + 2), ov40_02244E28);
    InitWindow(r5);
    // ldrsh r0, [r4, r0]
    // str r0, [sp]
    // ldrsh r0, [r4, r0]
    // str r0, [sp, #4]
    // ldrsh r0, [r4, r0]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x3c]
    // str r0, [sp, #0x10]
    // ldrsh r3, [r4, r3]
    AddWindowParameterized(*((u32*)(r7 + 0x24)), r5, 2, ((0 << 0x18) >> 0x18));
    FillWindowPixelBuffer(r5, 0);
    ov40_022306C0(r5, r6);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r5, 0, r6, r0);
    ScheduleWindowCopyToVram(r5);
    // ldrsh r1, [r4, r0]
    // ldrsh r0, [r4, r0]
    // ldr r0, [sp, #0x3c]
    // add r0, r0, r2
    // str r0, [sp, #0x3c]
    String_Delete(r6, (r1 * 6));
    // ldr r0, [sp, #0x20]
    // add r4, #8
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x40]
    // add r5, #0x10
    // str r0, [sp, #0x40]
    // ldr r0, [sp, #0x14]
    ov40_0222DAB0(0x6d);
    // ldr r5, [sp, #0x14]
    // add r5, #0x3c
    sub_020315B8(r6, 0x6d);
    // str r0, [sp, #0x44]
    // ldr r1, [sp, #0x44]
    ov40_02230DCC(r7);
    NewString_ReadMsgData(*((u32*)(r7 + 0x48)), 7);
    // str r0, [sp, #0x48]
    String_New(0xff, 0x6d);
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x44]
    BufferString(r4, 0, 0);
    // ldr r2, [sp, #0x48]
    StringExpandPlaceholders(r4, r6);
    FillWindowPixelBuffer(r5, 0);
    ov40_022306C0(r5, r6);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r5, 0, r6, r0);
    ScheduleWindowCopyToVram(r5);
    // ldr r0, [sp, #0x44]
    String_Delete();
    // ldr r0, [sp, #0x48]
    String_Delete();
    String_Delete(r6);
    MessageFormat_ResetBuffers(r4);
    // ldr r0, [sp, #0x14]
    sub_0203088C(*((u32*)(r0 + 4)), 3, 0);
    // ldr r5, [sp, #0x14]
    // add r1, #0x84
    // add r5, #0x4c
    NewString_ReadMsgData(*((u32*)(r7 + 0x48)), r0);
    FillWindowPixelBuffer(r5, 0);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r5, 0, r6, 0);
    ScheduleWindowCopyToVram(r5);
    String_Delete(r6);
    MessageFormat_ResetBuffers(r4);
    // ldr r0, [sp, #0x14]
    sub_0203088C(*((u32*)(r0 + 4)), 2, 0);
    // str r0, [sp, #0x4c]
    // ldr r5, [sp, #0x14]
    // add r5, #0x5c
    String_New(0xff, 0x6d);
    // str r0, [sp, #0x50]
    NewString_ReadMsgData(*((u32*)(r7 + 0x48)), 9);
    // str r0, [sp, #0x54]
    String_New(0xff, 0x6d);
    // str r0, [sp]
    // ldr r0, [sp, #0x50]
    // ldr r1, [sp, #0x4c]
    String16_FormatInteger(1, 4, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x50]
    BufferString(r4, 0, 0);
    // ldr r2, [sp, #0x54]
    StringExpandPlaceholders(r4, r6);
    FillWindowPixelBuffer(r5, 0);
    ov40_022306C0(r5, r6);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r5, 0, r6, r0);
    ScheduleWindowCopyToVram(r5);
    // ldr r0, [sp, #0x50]
    String_Delete();
    // ldr r0, [sp, #0x54]
    String_Delete();
    String_Delete(r6);
    MessageFormat_ResetBuffers(r4);
    // ldr r5, [sp, #0x14]
    // add r5, #0x6c
    FillWindowPixelBuffer(r5, 0);
    ScheduleWindowCopyToVram(r5);
    // ldr r0, [sp, #0x14]
    sub_0203088C(*((u32*)(r0 + 4)), 4, 0);
    // str r1, [sp, #0x1c]
    String_New(0xff, 0x6d);
    // str r0, [sp, #0x38]
    String_New(0xff, 0x6d);
    // str r0, [sp, #0x34]
    String_New(0xff, 0x6d);
    // str r0, [sp, #0x30]
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp, #0x1c]
    // add r0, #0x7c
    // str r0, [sp, #0x14]
    _ull_mod(r5, 0x000186A0, 0);
    // str r0, [sp, #0x2c]
    _ll_udiv(r5, r6, 0x000186A0, 0);
    // str r0, [sp, #0x58]
    _ull_mod(0x000186A0, 0);
    // str r0, [sp, #0x28]
    // ldr r0, [sp, #0x58]
    _ll_udiv(r6, 0x000186A0, 0);
    // str r0, [sp, #0x24]
    _u32_div_f(0xa);
    _u32_div_f(0xa);
    // ldr r0, [sp, #0x1c]
    // eor r1, r0
    // eor r0, r2
    NewString_ReadMsgData(*((u32*)(r7 + 0x48)), 0xc, 0);
    NewString_ReadMsgData(*((u32*)(r7 + 0x48)), 0xb);
    String_New(0xff, 0x6d);
    // str r0, [sp]
    // ldr r0, [sp, #0x38]
    // ldr r1, [sp, #0x2c]
    String16_FormatInteger(1, 5, 2);
    // str r0, [sp]
    // ldr r0, [sp, #0x34]
    // ldr r1, [sp, #0x28]
    String16_FormatInteger(1, 5, 2);
    // str r0, [sp]
    // ldr r0, [sp, #0x30]
    // ldr r1, [sp, #0x24]
    String16_FormatInteger(1, 2, 2);
    // str r0, [sp]
    // ldr r2, [sp, #0x38]
    // str r1, [sp, #4]
    BufferString(r4, 2, 0);
    // str r1, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x34]
    BufferString(r4, 1, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x30]
    BufferString(r4, 0, 0);
    StringExpandPlaceholders(r4, r5, r6);
    // ldr r0, [sp, #0x14]
    FillWindowPixelBuffer(0);
    // ldr r0, [sp, #0x14]
    ov40_022306C0(r5);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x14]
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(0x000F0D00, 0, r5, r0);
    // ldr r0, [sp, #0x14]
    ScheduleWindowCopyToVram();
    // ldr r0, [sp, #0x38]
    String_Delete();
    // ldr r0, [sp, #0x34]
    String_Delete();
    // ldr r0, [sp, #0x30]
    String_Delete();
    String_Delete(r6);
    String_Delete(r5);
    MessageFormat_ResetBuffers(r4);
    MessageFormat_Delete(r4);
}





void ov40_02230398(void) {
    // add r5, #0x3c
    // add r5, #0x10
}





void ov40_022303B8(void) {
    // sub r1, #0xe
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _022303DC: ; jump table
}





void ov40_02230404(void) {
}





void ov40_02230410(void) {
}





void ov40_02230424(void) {
    // str r0, [sp, #0x18]
    // str r1, [sp, #0x1c]
    // str r0, [sp, #0x44]
    // add r2, sp, #0xe0
    // strh r0, [r2]
    // ldr r0, [sp, #0x1c]
    // str r0, [sp, #0x3c]
    // ldr r0, [sp, #0x1c]
    // str r0, [sp, #0x38]
    // ldr r0, [sp, #0x1c]
    sub_02074490(*((u32*)(*((u32*)(*((u16*)ov40_02244F90) + 0x18)) + 0x1c)), (0x30 - 1), (r2 + 2), (ov40_02244F90 + 2));
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r2, [sp, #0x3c]
    // str r0, [sp, #0x14]
    // ldr r3, [sp, #0x38]
    SpriteSystem_LoadPaletteBuffer(r4, 2);
    sub_0207449C();
    // str r0, [sp]
    // ldr r1, [sp, #0x38]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x3c]
    SpriteSystem_LoadCellResObj(0x000186A0, 0x14, r0);
    sub_020744A8();
    // str r0, [sp]
    // ldr r1, [sp, #0x38]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x3c]
    SpriteSystem_LoadAnimResObj(0x000186A0, 0x14, r0);
    // str r0, [sp, #0x34]
    // str r0, [sp, #0x2c]
    // ldr r0, [sp, #0x18]
    // str r6, [sp, #0x30]
    // str r6, [sp, #0x40]
    ov40_02230404(6);
    // str r0, [sp, #0x34]
    // str r0, [sp, #0x2c]
    // str r0, [sp, #0x40]
    // ldr r4, [sp, #0x30]
    // ldr r0, [sp, #0x2c]
    // add r0, sp, #0x7c
    // add r5, r0, r1
    // add r0, sp, #0x4c
    // add r7, r0, r1
    // str r0, [r5]
    // ldr r0, [sp, #0x18]
    sub_0203088C(*((u32*)(0xff + 4)), 0, r4);
    // str r0, [sp, #0x48]
    // ldr r0, [sp, #0x18]
    sub_0203088C(*((u32*)(r0 + 4)), 1, r4);
    // ldr r1, [sp, #0x48]
    // stmia r5!, {r1}
    // stmia r7!, {r0}
    // ldr r0, [sp, #0x2c]
    // ldr r1, [sp, #0x2c]
    // add r1, sp, #0x7c
    // add r3, r1, r2
    // add r1, sp, #0x4c
    // add r4, r1, r2
    // stmia r3!, {r2}
    // ldr r1, [sp, #0x2c]
    // stmia r4!, {r2}
    // ldr r1, [sp, #0x30]
    // ldr r0, [sp, #0x34]
    // add r0, r1, r0
    // str r0, [sp, #0x30]
    // ldr r1, [sp, #0x2c]
    // ldr r0, [sp, #0x34]
    // add r0, r1, r0
    // str r0, [sp, #0x2c]
    // add r0, sp, #0x7c
    // str r0, [sp, #0x28]
    // ldr r0, [sp, #0x40]
    // add r2, sp, #0xe0
    // ldr r5, [sp, #0x18]
    // add r7, sp, #0x4c
    // add r4, r2, r1
    // ldr r0, [sp, #0x18]
    *((u32*)(((r6 + 1) + 1) + 0xc)) = 0;
    // ldr r0, [sp, #0x28]
    // str r0, [sp, #0x20]
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #0x20]
    // ldr r2, [sp, #0x24]
    GetMonIconNaixEx(*((u32*)r7), 0, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r1, [sp, #0x44]
    // add r0, r1, r0
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x3c]
    // ldr r1, [sp, #0x38]
    SpriteSystem_LoadCharResObjAtEndWithHardwareMappingType(0x000186A0, 0x14, r0);
    // ldrsh r1, [r4, r0]
    // add r0, sp, #0xac
    // add r2, sp, #0xac
    // add r1, #8
    // strh r1, [r0]
    // ldrsh r1, [r4, r0]
    // add r0, sp, #0xac
    // sub r1, #0xc
    *((u16*)(2 + 2)) = r1;
    *((u16*)(2 + 4)) = 0;
    *((u16*)(2 + 6)) = 0;
    // str r0, [sp, #0xb4]
    // str r0, [sp, #0xb8]
    // str r0, [sp, #0xbc]
    // str r0, [sp, #0xd8]
    // str r0, [sp, #0xdc]
    // ldr r1, [sp, #0x44]
    // add r0, r1, r0
    // str r0, [sp, #0xc0]
    // ldr r1, [sp, #0x1c]
    // str r0, [sp, #0xc4]
    // str r0, [sp, #0xc8]
    // str r0, [sp, #0xcc]
    // mvn r0, r0
    // str r0, [sp, #0xd0]
    // str r0, [sp, #0xd4]
    // ldr r0, [sp, #0x1c]
    SpriteSystem_NewSprite(*((u32*)(0 + 0x18)), *((u32*)(0 + 0x1c)));
    *((u32*)(r5 + 0xc)) = r0;
    // ldr r0, [sp, #0x20]
    // ldr r1, [sp, #0x24]
    GetMonIconPaletteEx(0);
    ManagedSprite_SetPaletteOverrideOffset(*((u32*)(r5 + 0xc)), (r0 + 4));
    ManagedSprite_SetAnim(*((u32*)(r5 + 0xc)), 1);
    ManagedSprite_TickFrame(*((u32*)(r5 + 0xc)));
    // sub r1, r1, r6
    ManagedSprite_SetDrawPriority(*((u32*)(r5 + 0xc)), 0xc);
    // ldr r0, [sp, #0x44]
    // str r0, [sp, #0x44]
    // ldr r0, [sp, #0x18]
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x28]
    // str r0, [sp, #0x28]
}





void ov40_02230638(void) {
}





void ov40_0223064C(void) {
    // str r0, [sp]
    SpriteManager_UnloadPlttObjById(*((u32*)(r1 + 0x1c)), 0x000186A0);
    SpriteManager_UnloadCellObjById(*((u32*)(r6 + 0x1c)), 0x000186A0);
    SpriteManager_UnloadAnimObjById(*((u32*)(r6 + 0x1c)), 0x000186A0);
    // ldr r5, [sp]
    // add r1, r4, r1
    SpriteManager_UnloadCharObjById(*((u32*)(r6 + 0x1c)), 0x000186A0);
    Sprite_DeleteAndFreeResources(*((u32*)(r5 + 0xc)));
    *((u32*)(r5 + 0xc)) = r7;
    // ldr r0, [sp]
    ov40_02230398(r6);
}





void ov40_022306A0(void) {
}





void ov40_022306C0(void) {
    // sub r1, r0, r4
    // add r0, r1, r0
    // asr r0, r0, #1
}





void ov40_022306E0(void) {
    // strh r2, [r0, r1]
    // strh r2, [r0, r1]
}





void ov40_022306F0(void) {
    Save_Misc_Get(*((u32*)(r0 + (0x83 << 4))));
    // add r1, sp, #4
    // str r1, [sp]
    // add r2, sp, #0xc
    // add r3, sp, #8
    sub_0202AC38((*((u32*)(r5 + 0x0000086C)) + 2));
    // add r0, sp, #4
    // mvn r2, r2
    // str r0, [sp]
    sub_0202AC60(r4, (*((u32*)(r5 + 0x0000086C)) + 2), 0, 0);
}





void ov40_02230738(void) {
}





void ov40_0223077C(void) {
}





void ov40_022307B0(void) {
    // sub r2, r2, r0
    // sbc r3, r1
    // sub r3, r3, r0
    // sbc r2, r1
}





void ov40_022307DC(void) {
}





void ov40_022307FC(void) {
    // str r1, [r4, r2]
    SysTask_Destroy(*((u32*)(r1 + 0x00004160)), 0x00004160);
    // str r2, [r4, r0]
    // str r2, [r4, r1]
    sub_02087A54(*((u32*)(r4 + (0x00004160 + 4))), (0x00004160 - 4), 0);
    sub_02087A08(*((u32*)(r4 + 0x00004164)), 0, 0);
    sub_020878B0(*((u32*)(r4 + 0x00004164)), 0);
    sub_020879E0(*((u32*)(r4 + 0x00004164)), 0);
    // asr r1, r0, #0x10
    sub_02087A08(*((u32*)(r4 + (r2 + 4))), r1);
}





void ov40_02230864(void) {
    // add r0, #0xc
    SysTask_Destroy(*((u32*)(r0 + 0x0000415C)), *((u32*)(r0 + 0x0000415C)));
    // str r1, [r4, r0]
    // str r1, [r4, r0]
    // str r1, [r4, r0]
    // str r1, [r4, r0]
    // add r0, sp, #4
    // add r1, sp, #0
    System_GetTouchNewCoords((0x0000415C + 4), 0);
    sub_02087A30(*((u32*)(r4 + 0x00004164)));
    sub_020878B0(*((u32*)(r4 + 0x00004164)), 1);
    sub_020879E0(*((u32*)(r4 + 0x00004164)), 1);
    // ldr r1, [sp, #4]
    // ldr r2, [sp]
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    sub_020878B8(*((u32*)(r4 + 0x00004164)), (r1 << 0x10), (r2 << 0x10));
    // ldr r1, [sp, #4]
    // ldr r2, [sp]
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    sub_02087948(*((u32*)(r4 + 0x00004164)), (r1 << 0x10), (r2 << 0x10));
    SysTask_CreateOnMainQueue(ov40_022307FC, r4, (1 << 0xc));
    // str r0, [r4, r2]
    ov40_022307FC(*((u32*)(r4 + 0x00004168)), r4, 0x00004168);
    // sub r0, #0xc
    // str r1, [r4, r0]
    sub_020879E0(*((u32*)(r4 + (r2 - 4))), 0);
    GF_AssertFail();
}





void ov40_02230944(void) {
    ov40_02230864();
    PlaySE(0x0000057B);
}





void ov40_02230958(void) {
    // ldr r1, _02230960 ; =0x00000528
    // ldr r0, [r0, r1]
    // bx lr
    // nop
    // _02230960: .word 0x00000528
    // TODO: decompile
}





void ov40_02230964(void) {
    // str r1, [r0, r2]
}





void ov40_02230970(void) {
    // add r1, #0x14
    // add r5, #0x14
    // add r3, sp, #8
    // ldrsh r1, [r3, r1]
    // ldrsh r2, [r3, r2]
    // add r3, sp, #8
    // ldrsh r1, [r3, r1]
    // ldrsh r2, [r3, r2]
    // ldr r1, [sp, #0x2c]
    // ldr r1, [sp, #0x28]
}





void ov40_022309CC(void) {
}





void ov40_022309DC(void) {
    // str r2, [r5, r3]
    // str r4, [r5, r2]
    // add r2, #8
    // str r4, [r5, r2]
    // add r3, #0x18
    // str r2, [r5, r3]
    // add r0, r1, r1
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02230A22: ; jump table
    // add r4, #0x3e
    // add r4, #0x3f
    // add r4, #0x40
    GF_AssertFail((*((u16*)(r3 + 6)) << 0x10), r2, 1, 0x00000504);
    // add r0, r1, r1
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02230A92: ; jump table
    // add r4, #0x41
    // add r4, #0x42
    // add r4, #0x43
    // add r4, #0x44
    // add r4, #0x45
    // add r4, #0x46
    // add r4, #0x47
    // add r4, #0x48
    // add r4, #0x49
    // add r4, #0x4a
    GF_AssertFail((*((u16*)(r0 + 6)) << 0x10));
    // add r0, r6, r6
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02230AE6: ; jump table
    // add r0, r1, r1
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02230B08: ; jump table
    GF_AssertFail((*((u16*)((*((u16*)(r0 + 6)) << 0x10) + 6)) << 0x10));
    // add r0, r1, r1
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02230B40: ; jump table
    GF_AssertFail((*((u16*)(r0 + 6)) << 0x10));
    // add r0, r1, r1
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02230B6E: ; jump table
    GF_AssertFail((*((u16*)(r0 + 6)) << 0x10));
    // add r0, r1, r1
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02230BAE: ; jump table
    GF_AssertFail((*((u16*)(r0 + 6)) << 0x10));
    GF_AssertFail();
    // add r0, r1, r1
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02230BFC: ; jump table
    GF_AssertFail((*((u16*)(r0 + 6)) << 0x10));
    // add r0, r1, r1
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02230C36: ; jump table
    GF_AssertFail((*((u16*)(r0 + 6)) << 0x10));
    // add r0, r1, r1
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02230C7C: ; jump table
    GF_AssertFail((*((u16*)(r0 + 6)) << 0x10));
    // add r0, r1, r1
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02230CB0: ; jump table
    GF_AssertFail((*((u16*)(r0 + 6)) << 0x10));
    GF_AssertFail();
    // str r4, [r5, r0]
}





void ov40_02230CDC(void) {
    // str r5, [r4, r7]
    // str r6, [r4, r5]
    // add r5, #8
    // str r6, [r4, r5]
    // add r5, #0x10
    // str r6, [r4, r5]
    // add r7, #0x14
    // str r6, [r4, r7]
    ov40_022309DC();
    // str r0, [r4, r1]
    // add r1, #0xc
    // str r0, [r4, r1]
    // str r1, [r0]
}





void ov40_02230D20(void) {
    // str r1, [r4, r0]
    ov40_0222DED0((0x00000514 + 4), *((u32*)(r0 + (0x00000514 - 4))), 0x00000514);
    // str r1, [r4, r0]
    System_GetTouchNew(0x00000514, (*((u32*)(r4 + 0x00000514)) + 1));
    ov40_0222DFB0(r4);
    // str r1, [r4, r0]
    // str r1, [r4, r0]
    // sub r2, #8
    // str r1, [r0]
}





void ov40_02230D94(void) {
    sub_0203088C(*((u32*)((r0 + 4) + 0x0000087C)), 4, 0);
    // eor r1, r7
    // eor r0, r6
}





void ov40_02230DCC(void) {
    // ldr r1, [r4, r1]
    // ldr r1, [r4, r1]
}





void ov40_02230E08(void) {
}





void ov40_02230E34(void) {
    // add r0, r5, r4
    InitWindow();
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r2, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, r5, r4
    AddWindowParameterized(*((u32*)(r5 + 0x24)), 2, 8);
    // add r0, r5, r4
    FillWindowPixelBuffer(0);
    NewString_ReadMsgData(*((u32*)(r5 + 0x48)), 0xc0);
    // add r0, r5, r4
    ov40_022306C0(r0);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r5, r4
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(0x00010E00, 0, r6, r0);
    String_Delete(r6);
    // add r0, r5, r4
    ScheduleWindowCopyToVram();
    GfGfx_EngineATogglePlanes(4, 1);
}





void ov40_02230EB4(void) {
    // add r0, r4, r0
    ClearWindowTilemapAndCopyToVram(0x000008A4);
    // add r0, r4, r0
    RemoveWindow(0x000008A4);
    GfGfx_EngineATogglePlanes(4, 0);
}





void ov40_02230ED8(void) {
    // add r2, r1, r1
    // add r2, pc
    // asr r2, r2, #0x10
    // add pc, r2
    // _02230EF2: ; jump table
    ov40_0222C4DC(*((u32*)(r0 + 8)), (*((u16*)(r2 + 6)) << 0x10));
    ov40_0222BF80(r4, 1);
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 1, 1, 0);
    ov40_0222DAF0(r4);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 2, 0x0000FFFE, 0x10);
    ov40_0222DAF0(r4);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 0, 0x0000BFFF, 0x10);
    ov40_0222DAF0(r4);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 3, 0x00003FFE, 0x10);
    ov40_0222DAF0(r4);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 1, 0x0000FFFF, 0x10);
    sub_02087A30(*((u32*)(r4 + 0x000006F4)));
    sub_02087A30(*((u32*)(r4 + (0x6f << 4))));
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    IsPaletteFadeFinished((*((u32*)(r4 + 8)) + 1));
    sub_02087948(*((u32*)(r4 + 0x000006F4)), 0x80, 0x10);
    sub_020878B8(*((u32*)(r4 + 0x000006F4)), 0x80, 0xd8);
    sub_020879E0(*((u32*)(r4 + 0x000006F4)), 1);
    sub_020878B0(*((u32*)(r4 + 0x000006F4)), 1);
    PlaySE(0x00000576);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    *((u32*)(r4 + 0xc)) = (*((u32*)(r4 + 0xc)) + 1);
    *((u32*)(r4 + 0xc)) = 0;
    // sub r2, #0x90
    sub_02087948(*((u32*)(r4 + (0x6f << 4))), 0x80, 0x80);
    sub_020878B8(*((u32*)(r4 + (0x6f << 4))), 0x80, 0x60);
    sub_020879E0(*((u32*)(r4 + (0x6f << 4))), 1);
    sub_020878B0(*((u32*)(r4 + (0x6f << 4))), 1);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    *((u32*)(r4 + 0xc)) = (*((u32*)(r4 + 0xc)) + 1);
    ov40_02230E34((*((u32*)(r4 + 8)) + 1), (*((u32*)(r4 + 0xc)) + 1));
    sub_020879E0(*((u32*)(r4 + 0x000006F4)), 0);
    *((u32*)(r4 + 0xc)) = 0;
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    *((u32*)(r4 + 0xc)) = (*((u32*)(r4 + 0xc)) + 4);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 0, (0xf << 0xc), ((*((u32*)(r4 + 0xc)) << 0x18) >> 0x18));
    *((u32*)(r4 + 8)) = (r1 + 1);
    *((u32*)(r4 + 0xc)) = (*((u32*)(r4 + 0xc)) - 4);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 0, (0xf << 0xc), ((*((u32*)(r4 + 0xc)) << 0x18) >> 0x18));
    *((u32*)(r4 + 8)) = (r1 + 1);
    System_GetTouchHeld((r1 + 1));
    ov40_02230EB4(r4);
    sub_020879E0(*((u32*)(r4 + (0x6f << 4))), 0);
    sub_02087A54(*((u32*)(r4 + 0x000006F4)));
    sub_02087A54(*((u32*)(r4 + (0x6f << 4))));
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    ov40_0222BF80(r4, 1);
}





void ov40_02231100(void) {
    ov40_02230964(1);
    ov40_0222C750(r4);
    ov40_0222C884(r4);
    ov40_0222CAD8(r4);
    ov40_0222CCAC(r4);
    ov40_0222D2A0(r4);
    ov40_0222CE7C(r4);
    ov40_0222CF10(r4);
    ov40_02230964(r4, 0);
    ov40_0222C4DC(r4);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnDataFromOpenNarc(*((u32*)(r4 + 0x14)), 0x45, *((u32*)(r4 + 0x24)), 5);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnDataFromOpenNarc(*((u32*)(r4 + 0x14)), 0x37, *((u32*)(r4 + 0x24)), 5);
    sub_02087948(*((u32*)(r4 + (0x6f << 4))), 0x80, 0xe0);
    sub_020878B8(*((u32*)(r4 + (0x6f << 4))), 0x80, 0xe0);
    sub_020879E0(*((u32*)(r4 + (0x6f << 4))), 0);
    sub_020878B0(*((u32*)(r4 + (0x6f << 4))), 1);
    ov40_0222BF64(r4, *((u32*)(r4 + 0x0000083C)), 1, *((u32*)(r4 + 0x10)));
    PlaySE(0x00000573);
    *((u32*)(r4 + 0xc)) = 0x10;
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    ov40_0222C4DC((*((u32*)(r4 + 8)) + 1));
    IsPaletteFadeFinished();
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    *((u32*)(r4 + 0xc)) = (*((u32*)(r4 + 0xc)) - 2);
    ov40_0222DAF0(r4);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 2, 0x0000FFFE, ((*((u32*)(r4 + 0xc)) << 0x18) >> 0x18));
    ov40_0222DAF0(r4);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 0, 0x0000FFFF, ((*((u32*)(r4 + 0xc)) << 0x18) >> 0x18));
    ov40_0222DAF0(r4);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 3, 0x00003FFE, ((*((u32*)(r4 + 0xc)) << 0x18) >> 0x18));
    ov40_0222DAF0(r4);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 1, 0x0000FFFF, ((*((u32*)(r4 + 0xc)) << 0x18) >> 0x18));
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 1, 2, 0x10);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 2, 0xc, 0x10);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnDataFromOpenNarc(*((u32*)(r4 + 0x14)), 0x45, *((u32*)(r4 + 0x24)), 5);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnDataFromOpenNarc(*((u32*)(r4 + 0x14)), 0x37, *((u32*)(r4 + 0x24)), 5);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    ov40_0222BF80((*((u32*)(r4 + 8)) + 1), 2);
}





void ov40_0223131C(void) {
    // str r0, [sp]
    // sub r3, r3, r5
    // str r0, [sp]
    // str r0, [sp]
}





void ov40_022313F0(void) {
    ov40_0223142C();
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    ov40_0222D294(*((u32*)(r5 + 0x000005FC)));
    // add r3, sp, #0
    // ldrsh r1, [r3, r1]
    // ldrsh r2, [r3, r2]
    // add r1, #0x10
    // asr r1, r1, #0x10
    sub_020878B8(*((u32*)(r5 + (0x6f << 4))), (2 << 0x10), 0);
}





void ov40_0223142C(void) {
    Heap_Alloc(0x6d, 0x54);
    MI_CpuFill8(0, 0x54);
    // str r4, [r5, r0]
    // add r0, #0x50
    // strb r1, [r0]
    // add r3, #0x50
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r5 + 0x28)), 2, 0xc, *((u8*)r4));
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x14]
    // str r0, [sp, #4]
    // ldr r0, [sp, #4]
    // str r0, [r4]
    *((u32*)(r4 + 4)) = 0x5a;
    // sub r0, r0, r1
    // add r0, r7, r0
    *((u16*)(r4 + 8)) = (5 << 4);
    // sub r2, r2, r3
    // add r2, #0xa9
    // asr r2, r2, #0x10
    ov40_0222D288(*((u32*)(r5 + 0x000005FC)), 0x2a, ((5 << 4) << 0x10), *((u32*)(r5 + (0x6e << 4))));
    // add r1, #0xc
    // add r2, sp, #0x20
    ManagedSprite_GetSpritePositionFxXY(*((u32*)(r6 + 0x000005FC)), r4);
    // sub r2, r2, r3
    // add r2, #0xa9
    ManagedSprite_SetPositonFxXY(*((u32*)(r6 + 0x000005FC)), *((u32*)(r4 + 0xc)), ((5 << 4) << 0xc), *((u32*)(r5 + (0x6e << 4))));
    // sub r2, #0x2c
    sub_020136B4(*((u32*)(r6 + (0x61 << 4))), 0x24, 0x24);
    TextOBJ_SetSpritesDrawFlag(*((u32*)(r6 + (0x61 << 4))), 1);
    // ldr r0, [sp, #4]
    // add r4, #0x10
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x14]
    // add r7, #0x24
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x14]
    // add r6, #0x28
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    // add r0, #0x50
    // add r0, #0x50
    // add r3, #0x50
    // add r0, #0x50
    // strb r1, [r0]
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r5 + 0x28)), 2, 0xc, *((u8*)*((u32*)(r5 + (0x86 << 4)))));
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r7, sp, #0x18
    // str r0, [r4]
    // add r1, sp, #0x1c
    // add r1, #2
    // add r2, sp, #0x1c
    ov40_0222D294(*((u32*)(r5 + 0x000005FC)), *((u32*)(r5 + (0x6e << 4))));
    // ldrsh r0, [r4, r0]
    // ldrsh r2, [r7, r1]
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #0xc]
    // sub r1, #8
    // sub r2, #8
    *((u16*)(r7 + 4)) = r2;
    *((u16*)(r7 + 4)) = (8 + 1);
    // ldrsh r0, [r7, r0]
    // str r0, [sp, #8]
    _s32_div_f((0x0000FFFF * *((u32*)(r4 + 4))), (0x5a << 2));
    GF_SinDeg(((r0 << 0x10) >> 0x10));
    *((u32*)(r4 + 4)) = (*((u32*)(r4 + 4)) - 4);
    // add r1, r2, r1
    // ldr r2, [sp, #8]
    ManagedSprite_SetPositonFxXY(*((u32*)(r6 + 0x000005FC)), (r0 << 4), *((u32*)(r4 + 0xc)));
    // sub r2, #0x2c
    sub_020136B4(*((u32*)(r6 + (0x61 << 4))), 0x24, 0x24);
    // ldr r0, [sp, #0x10]
    // add r4, #0x10
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x10]
    // add r6, #0x28
    // ldr r0, [sp, #0xc]
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    // add r0, r5, r0
    // sub r1, #0xe8
    // add r1, sp, #0x18
    // add r1, #2
    // add r2, sp, #0x18
    ov40_0222D294(*((u32*)((0x28 * *((u32*)(r5 + 0x000006E4))) + 0x000006E4)), 0x000006E4, *((u32*)(r5 + 0x000006E4)));
    // add r2, sp, #0x18
    // ldrsh r1, [r2, r1]
    // ldrsh r2, [r2, r3]
    // add r1, #0x10
    // asr r1, r1, #0x10
    sub_02087948(*((u32*)(r5 + (0x6f << 4))), (2 << 0x10), 0);
    // add r2, sp, #0x18
    // ldrsh r1, [r2, r1]
    // ldrsh r2, [r2, r3]
    // add r1, #0x10
    // asr r1, r1, #0x10
    sub_020878B8(*((u32*)(r5 + (0x6f << 4))), (2 << 0x10), 0);
    sub_020879E0(*((u32*)(r5 + (0x6f << 4))), 0);
    ov40_0222C39C(r5);
    Heap_Free(r4);
}





void ov40_0223169C(void) {
    System_GetTouchNew();
    ov40_0222DE40(r4);
    ov40_02231700(*((u32*)r4));
    PlaySE(0x0000057B);
    ov40_0222BF80(r4, 7);
    PlaySE(0x0000057B);
    ov40_0222BF80(r4, 8);
    ov40_0222C474(r4);
}





void ov40_02231700(void) {
    TouchscreenHitbox_TouchHeldIsIn(ov40_02245100);
    TouchscreenHitbox_TouchHeldIsIn(ov40_02245104);
}





void ov40_0223172C(void) {
}





void ov40_02231748(void) {
    *((u32*)(r0 + 0x54)) = 0;
    *((u32*)(r0 + 0xc)) = 0;
    sub_020879E0(*((u32*)(r0 + (0x6f << 4))), 0);
    sub_020879E0(*((u32*)(r4 + 0x000006F4)), 0);
    ov40_02230964(r4, 1);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    *((u32*)(r4 + 0xc)) = (*((u32*)(r4 + 0xc)) + 2);
    ov40_0222DAF0((*((u32*)(r4 + 8)) + 1), (*((u32*)(r4 + 0xc)) + 2));
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 2, 0x0000FFFE, ((*((u32*)(r4 + 0xc)) << 0x18) >> 0x18));
    ov40_0222DAF0(r4);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 0, 0x0000FFFF, ((*((u32*)(r4 + 0xc)) << 0x18) >> 0x18));
    ov40_0222DAF0(r4);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 3, 0x00003FFE, ((*((u32*)(r4 + 0xc)) << 0x18) >> 0x18));
    ov40_0222DAF0(r4);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 1, 0x0000FFFF, ((*((u32*)(r4 + 0xc)) << 0x18) >> 0x18));
    *((u32*)(r4 + 0xc)) = 0x10;
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    *((u32*)(r4 + 0xc)) = (*((u32*)(r4 + 0xc)) - 4);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 0, 0, 0);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    IsPaletteFadeFinished((*((u32*)(r4 + 8)) + 1));
    ov40_02230964(r4, 0);
}





void ov40_02231868(void) {
    // ldr r0, [r4, r0]
}





void ov40_0223189C(void) {
    // ldr r0, [r4, r0]
}





void ov40_022318C8(void) {
    // ldrsh r1, [r4, r0]
    // ldrsh r0, [r4, r0]
    // sub r0, r1, r0
    // ldrsh r1, [r4, r0]
    // ldrsh r0, [r4, r0]
    // sub r0, r1, r0
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    // add r1, sp, #0
    // ldrsh r0, [r4, r0]
    // ldrsh r0, [r4, r0]
    // strh r0, [r1]
    // ldrsh r2, [r1, r0]
    // ldrsh r0, [r4, r0]
    // add r0, r2, r0
    // ldrsh r2, [r1, r0]
    // ldrsh r0, [r4, r0]
    // add r0, r2, r0
    // strh r0, [r1]
    // add r3, sp, #0
    // ldrsh r1, [r3, r1]
    // ldrsh r2, [r3, r2]
    // add r1, #0x10
    // asr r1, r1, #0x10
    // str r1, [r0]
    // add r3, sp, #0
    // ldrsh r1, [r3, r1]
    // ldrsh r2, [r3, r2]
    // sub r2, #0x2c
    // str r1, [r0]
}





void ov40_022319A4(void) {
    Heap_Alloc(0x6d, 0x10);
    // str r0, [sp, #4]
    MI_CpuFill8(0, 0x10);
    // ldr r0, [sp, #4]
    // str r0, [r4, r1]
    *((u32*)(r0 + 8)) = 0;
    // ldr r0, [sp, #4]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #4]
    // str r0, [sp, #0x10]
    // add r0, #0xc
    // str r0, [sp, #0x10]
    Heap_Alloc(0x6d, 0x34);
    memset(0, 0x34);
    ov40_0222D294(*((u32*)(r6 + 0x000005FC)), r5, (r5 + 2));
    *((u32*)(r5 + 0x20)) = *((u32*)(r6 + 0x000005FC));
    *((u32*)(r5 + 0x24)) = *((u32*)(r6 + (0x61 << 4)));
    // ldr r0, [sp, #0xc]
    *((u32*)(r5 + 0x2c)) = *((u32*)(r6 + (0x61 << 4)));
    // ldr r0, [sp, #0x10]
    *((u32*)(r5 + 0x30)) = *((u32*)(r6 + (0x61 << 4)));
    *((u32*)(r5 + 0x28)) = *((u32*)(r4 + (0x6f << 4)));
    // ldrsh r0, [r5, r0]
    *((u16*)(r5 + 4)) = 0;
    // mvn r0, r0
    *((u16*)(r5 + 6)) = 0x2f;
    *((u8*)(r5 + 0x1c)) = 8;
    *((u32*)(r5 + 0x28)) = 0;
    // ldrsh r0, [r5, r0]
    *((u16*)(r5 + 4)) = 0;
    // sub r0, r0, r1
    // add r0, #0xcd
    *((u16*)(r5 + 6)) = (5 << 4);
    // ldrsh r0, [r5, r0]
    *((u16*)(r5 + 6)) = 0xdd;
    *((u8*)(r5 + 0x1c)) = 8;
    SysTask_CreateOnMainQueue(ov40_022318C8, r5, (2 << 0xc));
    // add r6, #0x28
    // ldr r0, [sp, #4]
    // str r1, [r0]
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // str r0, [sp, #8]
    // ldr r0, [sp, #8]
    // ldr r3, [sp, #8]
    // str r1, [r0]
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 2, 0xc, ((*((u32*)r3) << 0x18) >> 0x18));
    // ldr r0, [sp, #8]
    // ldr r0, [sp, #8]
    // ldr r0, [sp, #8]
    *((u32*)(*((u32*)(*((u32*)(r0 + 0xc)) + 8)) + 8)) = 1;
    // add r0, r4, r0
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #8]
    // str r0, [sp, #0x14]
    Heap_Alloc(0x6d, 0x34);
    memset(0, 0x34);
    ov40_0222D294(*((u32*)(r6 + 0x00000534)), r5, (r5 + 2));
    *((u32*)(r5 + 0x20)) = *((u32*)(r6 + 0x00000534));
    *((u32*)(r5 + 0x24)) = *((u32*)(r6 + 0x00000548));
    // ldr r0, [sp, #0x14]
    *((u32*)(r5 + 0x2c)) = *((u32*)(r6 + 0x00000548));
    *((u32*)(r5 + 0x28)) = 0;
    // ldrsh r0, [r5, r0]
    *((u16*)(r5 + 4)) = 0;
    // ldrsh r0, [r5, r0]
    *((u16*)(r5 + 4)) = 0;
    *((u16*)(r5 + 6)) = 0xa9;
    // add r1, r3, r1
    ManagedSprite_SetAnim(*((u32*)(r6 + 0x00000534)), *((u32*)((0x24 * *((u32*)(r4 + 0x000006E4))) + 0xc)), *((u32*)(r4 + 0x000006E4)), *((u32*)(r4 + 0x00000818)));
    // ldr r1, [sp, #0x18]
    // mov ip, r0
    // add r1, r1, r2
    // mov r2, ip
    // add r3, r2, r3
    ov40_0222D3E8(r4, *((u32*)(r4 + 0x000006D8)), *((u32*)((*((u32*)(r4 + 0x000006E4)) * 0x24) + 8)), (*((u32*)(r4 + 0x000006E4)) * 0x24));
    // add r1, r4, r0
    TextOBJ_SetSpritesDrawFlag(*((u32*)(*((u32*)(r4 + 0x000006D8)) + 0x00000548)), 1);
    ManagedSprite_SetDrawFlag(*((u32*)(r6 + 0x00000534)), 1);
    // ldrsh r0, [r5, r0]
    *((u16*)(r5 + 4)) = (0 - 4);
    // sub r2, r0, r7
    // sub r2, r1, r2
    // add r1, #0x19
    // add r0, r0, r1
    *((u16*)(r5 + 6)) = (r2 << 4);
    *((u8*)(r5 + 0x1c)) = 4;
    SysTask_CreateOnMainQueue(ov40_022318C8, r5, (2 << 0xc));
    // add r6, #0x28
    // ldr r0, [sp, #8]
    *((u32*)(*((u32*)(r4 + 0x000006D8)) + 4)) = *((u32*)(*((u32*)(r4 + 0x000006D8)) + 0xc));
    *((u32*)(*((u32*)(r4 + 0x000006D8)) + 0xc)) = 0;
    ManagedSprite_SetPaletteOverrideOffset(*((u32*)(r4 + 0x00000534)), 1);
    ManagedSprite_SetPaletteOverrideOffset(*((u32*)(r6 + 0x00000534)), 2);
    // add r6, #0x28
    // ldr r0, [sp, #8]
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // ldr r0, [sp, #8]
    *((u32*)((*((u32*)(r4 + 8)) + 1) + 4)) = 0;
    // add r1, r3, r1
    ov40_0222C03C((*((u32*)(r4 + 8)) + 1), *((u32*)((0x24 * *((u32*)(r4 + 0x000006E4))) + 0x20)), *((u32*)(r4 + 0x000006E4)), *((u32*)(r4 + 0x00000818)));
    ov40_0222BF80(5);
    ov40_0222BFB0(r4);
    Heap_Free(*((u32*)(r4 + (0x86 << 4))));
}





void ov40_02231C78(void) {
    Heap_Alloc(0x6d, 0x10);
    // str r0, [sp, #8]
    MI_CpuFill8(0, 0x10);
    // ldr r0, [sp, #8]
    // str r0, [r5, r1]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #8]
    // add r0, #0xc
    // str r0, [sp, #8]
    Heap_Alloc(0x6d, 0x34);
    memset(0, 0x34);
    ov40_0222D294(*((u32*)(r7 + 0x00000534)), r4, (r4 + 2));
    *((u32*)(r4 + 0x20)) = *((u32*)(r7 + 0x00000534));
    *((u32*)(r4 + 0x24)) = *((u32*)(r7 + 0x00000548));
    // ldr r0, [sp, #0xc]
    *((u32*)(r4 + 0x2c)) = *((u32*)(r7 + 0x00000548));
    // ldr r0, [sp, #8]
    *((u32*)(r4 + 0x30)) = *((u32*)(r7 + 0x00000548));
    *((u32*)(r4 + 0x28)) = 0;
    // ldrsh r0, [r4, r0]
    *((u16*)(r4 + 4)) = 0;
    *((u32*)(r4 + 0x28)) = *((u32*)(r5 + (0x6f << 4)));
    // ldrsh r0, [r4, r0]
    *((u16*)(r4 + 4)) = 0;
    // ldrsh r0, [r4, r0]
    *((u16*)(r4 + 4)) = (0 + 4);
    // sub r2, r0, r6
    // sub r0, r0, r2
    // add r1, #0x1d
    // add r0, r1, r0
    *((u16*)(r4 + 6)) = (r2 << 4);
    *((u8*)(r4 + 0x1c)) = 4;
    SysTask_CreateOnMainQueue(ov40_022318C8, r4, (2 << 0xc));
    // add r7, #0x28
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    // str r0, [sp, #4]
    // ldr r0, [sp, #4]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #4]
    // str r0, [sp, #0x14]
    // add r0, #0xc
    // str r0, [sp, #0x14]
    Heap_Alloc(0x6d, 0x34);
    memset(0, 0x34);
    ov40_0222D294(*((u32*)(r6 + 0x000005FC)), r4, (r4 + 2));
    *((u32*)(r4 + 0x20)) = *((u32*)(r6 + 0x000005FC));
    *((u32*)(r4 + 0x24)) = *((u32*)(r6 + (0x61 << 4)));
    // ldr r0, [sp, #0x10]
    *((u32*)(r4 + 0x2c)) = *((u32*)(r6 + (0x61 << 4)));
    // ldr r0, [sp, #0x14]
    *((u32*)(r4 + 0x30)) = *((u32*)(r6 + (0x61 << 4)));
    *((u32*)(r4 + 0x28)) = 0;
    // ldrsh r0, [r4, r0]
    *((u16*)(r4 + 4)) = 0;
    // sub r0, r0, r1
    // add r0, #0xcd
    *((u16*)(r4 + 6)) = (5 << 4);
    // ldrsh r0, [r4, r0]
    *((u16*)(r4 + 6)) = 0xdd;
    *((u8*)(r4 + 0x1c)) = 8;
    SysTask_CreateOnMainQueue(ov40_022318C8, r4, (2 << 0xc));
    // add r6, #0x28
    // ldr r0, [sp, #4]
    // str r4, [r0]
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    // str r1, [r5, r0]
    ManagedSprite_SetPaletteOverrideOffset(*((u32*)(r5 + 0x00000534)), 1);
    ManagedSprite_SetPaletteOverrideOffset(*((u32*)(r6 + 0x00000534)), 2);
    // add r6, #0x28
    // str r0, [r4]
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r5 + 0x28)), 2, 0xc, ((*((u32*)*((u32*)(r5 + (0x86 << 4)))) << 0x18) >> 0x18));
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    *((u32*)(r4 + 4)) = 0;
    ov40_0222C018(0);
    Heap_Free(*((u32*)(r5 + (0x86 << 4))));
    ov40_0222BF80(r5, 5);
}





void ov40_02231EA4(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02231EBE: ; jump table
    *((u32*)(r0 + 0x54)) = 0;
    // add r0, #0x5c
    // add r0, #0x5c
    // add r0, #0x5c
    // strb r1, [r0]
    ov40_0222DAC0(r0, 6);
    *((u32*)(r4 + 0x58)) = r0;
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // add r0, #0x54
    ov40_0222DA84(r4, 1);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 2, 0x0000FFFF, ((*((u32*)(r4 + 0x54)) << 0x18) >> 0x18));
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 0, 0x0000FFFF, ((*((u32*)(r4 + 0x54)) << 0x18) >> 0x18));
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 3, 0x0000FFFF, ((*((u32*)(r4 + 0x54)) << 0x18) >> 0x18));
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 1, 0x0000FFFF, ((*((u32*)(r4 + 0x54)) << 0x18) >> 0x18));
    GfGfx_EngineATogglePlanes(0x10, 0);
    GfGfx_EngineBTogglePlanes(0x10, 0);
    // add r1, #0x5c
    ov40_0222DBEC(r4, *((u8*)r4));
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 2, 0x0000FFFF, ((*((u32*)(r4 + 0x54)) << 0x18) >> 0x18));
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 0, 0x0000FFFF, ((*((u32*)(r4 + 0x54)) << 0x18) >> 0x18));
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 3, 0x0000FFFF, ((*((u32*)(r4 + 0x54)) << 0x18) >> 0x18));
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 1, 0x0000FFFF, ((*((u32*)(r4 + 0x54)) << 0x18) >> 0x18));
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    GfGfx_EngineATogglePlanes(0x10, 1);
    GfGfx_EngineBTogglePlanes(0x10, 1);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // add r0, #0x54
    ov40_0222DA84(r4, 0);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 2, 0x0000FFFF, ((*((u32*)(r4 + 0x54)) << 0x18) >> 0x18));
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 0, 0x0000FFFF, ((*((u32*)(r4 + 0x54)) << 0x18) >> 0x18));
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 3, 0x0000FFFF, ((*((u32*)(r4 + 0x54)) << 0x18) >> 0x18));
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 1, 0x0000FFFF, ((*((u32*)(r4 + 0x54)) << 0x18) >> 0x18));
    ov40_0222BF80(r4, 0);
}





void ov40_02232094(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _022320AE: ; jump table
    *((u32*)(r0 + 0x54)) = 0;
    // add r0, #0x5c
    // add r0, #0x5c
    // strb r1, [r0]
    // add r0, #0x5c
    _s32_div_f(*((u8*)r0), 7);
    // add r0, #0x5c
    // strb r1, [r0]
    ov40_0222DAC0(r4);
    *((u32*)(r4 + 0x58)) = r0;
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // add r0, #0x54
    ov40_0222DA84(r4, 1);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 2, 0x0000FFFF, ((*((u32*)(r4 + 0x54)) << 0x18) >> 0x18));
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 0, 0x0000FFFF, ((*((u32*)(r4 + 0x54)) << 0x18) >> 0x18));
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 3, 0x0000FFFF, ((*((u32*)(r4 + 0x54)) << 0x18) >> 0x18));
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 1, 0x0000FFFF, ((*((u32*)(r4 + 0x54)) << 0x18) >> 0x18));
    GfGfx_EngineATogglePlanes(0x10, 0);
    GfGfx_EngineBTogglePlanes(0x10, 0);
    // add r1, #0x5c
    ov40_0222DBEC(r4, *((u8*)r4));
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 2, 0x0000FFFF, ((*((u32*)(r4 + 0x54)) << 0x18) >> 0x18));
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 0, 0x0000FFFF, ((*((u32*)(r4 + 0x54)) << 0x18) >> 0x18));
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 3, 0x0000FFFF, ((*((u32*)(r4 + 0x54)) << 0x18) >> 0x18));
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 1, 0x0000FFFF, ((*((u32*)(r4 + 0x54)) << 0x18) >> 0x18));
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    GfGfx_EngineATogglePlanes(0x10, 1);
    GfGfx_EngineBTogglePlanes(0x10, 1);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // add r0, #0x54
    ov40_0222DA84(r4, 0);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 2, 0x0000FFFF, ((*((u32*)(r4 + 0x54)) << 0x18) >> 0x18));
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 0, 0x0000FFFF, ((*((u32*)(r4 + 0x54)) << 0x18) >> 0x18));
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 3, 0x0000FFFF, ((*((u32*)(r4 + 0x54)) << 0x18) >> 0x18));
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 1, 0x0000FFFF, ((*((u32*)(r4 + 0x54)) << 0x18) >> 0x18));
    *((u32*)(r4 + 0x54)) = 0;
    ov40_0222BF80(r4, 0);
}





void ov40_02232288(void) {
    // str r4, [r5, r0]
}





void ov40_022322E0(void) {
    // add r0, #8
    ov40_0222DA84(*((u32*)(r0 + (0x86 << 4))), 1);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r5 + 0x28)), 2, 0xc, ((*((u32*)(r4 + 8)) << 0x18) >> 0x18));
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r5 + 0x28)), 3, 0xc, ((*((u32*)(r4 + 8)) << 0x18) >> 0x18));
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r5 + 0x28)), 1, 2, ((*((u32*)(r4 + 8)) << 0x18) >> 0x18));
    ov40_02230964(1);
    ov40_0222D874(r5);
    ov40_02230964(r5, 0);
    SetBgPriority(0, 0);
    SetBgPriority(1, 3);
    SetBgPriority(2, 0);
    SetBgPriority(3, 2);
    SetBgPriority(4, 0);
    SetBgPriority(5, 3);
    SetBgPriority(6, 1);
    SetBgPriority(7, 2);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharDataFromOpenNarc(*((u32*)(r5 + 0x14)), 0x3e, *((u32*)(r5 + 0x24)), 3);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharDataFromOpenNarc(*((u32*)(r5 + 0x14)), 0x3e, *((u32*)(r5 + 0x24)), 7);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    ov40_0222FB90((*((u32*)(r5 + 8)) + 1), 0);
    ov40_0222C4DC(r5);
    // add r1, r5, r1
    // add r0, #0x10
    sub_0203088C(*((u32*)((*((u32*)(r5 + 0x0000086C)) << 2) + 0x0000086C)), 5, 1);
    // eor r1, r3
    // eor r0, r2
    ov40_02233044(r5, 1, 0);
    // str r1, [r4, r0]
    ov40_0222BF80(r5, 9);
    // str r1, [r4, r0]
    ov40_0222BF80(r5, 6);
    ov40_0222BF80(r5, 2);
}





void ov40_02232470(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0223248E: ; jump table
    ov40_02233044((*((u16*)(*((u32*)(r0 + 8)) + 6)) << 0x10));
    ov40_022307DC(r4, 6, 7);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    ov40_02232F50((*((u32*)(r4 + 8)) + 1));
    // str r0, [sp]
    TouchHitboxController_Create(ov40_02245134, 3, ov40_02232ED4, r4);
    // str r0, [r5, r1]
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    ov40_02230964((*((u32*)(r4 + 8)) + 1), 1);
    // add r0, #0x9c
    ov40_02230638(r5, r4);
    // add r0, #0x9c
    ov40_02230410(r5);
    ov40_022307DC(r4, r0, 3);
    // add r5, #0x9c
    ov40_022306A0(r5, 0);
    ov40_02230964(r4, 0);
    GfGfx_EngineATogglePlanes(8, 1);
    GfGfx_EngineBTogglePlanes(8, 1);
    GfGfx_EngineATogglePlanes(4, 0);
    GfGfx_EngineBTogglePlanes(4, 0);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // add r0, #8
    ov40_0222DA84(r5, 0);
    ov40_0222DA00(r5, (r5 + 4), 0, 0);
    // add r0, #0x9c
    ov40_022306A0(r5, 1);
    ov40_02232F88(r4);
    GfGfx_EngineATogglePlanes(4, 1);
    GfGfx_EngineBTogglePlanes(4, 1);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 3, 0xc, ((*((u32*)(r5 + 8)) << 0x18) >> 0x18));
    ov40_0222BF80(r4, 3);
}





void ov40_02232598(void) {
}





void ov40_022325B0(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _022325CC: ; jump table
    // add r4, #0x9c
    // add r4, #0x10
    // add r0, #0x10
    // add r4, #0x10
    // add r0, #0x9c
    // add r0, #0x9c
    // add r4, #0x9c
    // add r4, #0x10
    // add r4, #0x9c
    // eor r1, r0
    // add r1, #0x79
}





void ov40_022326DC(void) {
    // add r0, r4, r6
    InitWindow((0x86 << 4));
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, r4, r6
    AddWindowParameterized(*((u32*)(r5 + 0x24)), 6, 4);
    // add r0, r4, r6
    FillWindowPixelBuffer(0);
    NewString_ReadMsgData(*((u32*)(r5 + 0x48)), 0x82);
    // add r0, r4, r6
    ov40_022306C0(r0);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r4, r6
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(0x000F0D00, 0, r7, r0);
    String_Delete(r7);
    // add r0, r4, r6
    ScheduleWindowCopyToVram();
    // add r6, #0x10
    // add r0, r4, r6
    InitWindow();
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, r4, r6
    AddWindowParameterized(*((u32*)(r5 + 0x24)), 6, 0x12);
    // add r0, r4, r6
    FillWindowPixelBuffer(0);
    NewString_ReadMsgData(*((u32*)(r5 + 0x48)), 0x83);
    // add r0, r4, r6
    ov40_022306C0(r0);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r4, r6
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(0x000F0D00, 0, r5, r0);
    String_Delete(r5);
    // add r0, r4, r6
    ScheduleWindowCopyToVram();
}





void ov40_022327BC(void) {
    // add r0, r4, r0
    // add r0, r4, r0
    // add r0, r4, r0
    // add r0, r4, r0
}





void ov40_022327F0(void) {
    // add r2, r2, r2
    // add r2, pc
    // asr r2, r2, #0x10
    // add pc, r2
    // _02232810: ; jump table
    TouchHitboxController_Destroy(*((u32*)(*((u32*)(r0 + (0x86 << 4))) + (0x5d << 2))), (0x86 << 4), (*((u16*)(*((u32*)(r0 + 8)) + 6)) << 0x10));
    GfGfx_EngineBTogglePlanes(4, 0);
    GfGfx_EngineATogglePlanes(4, 0);
    ov40_02230964(r4, 1);
    // add r0, #0x9c
    ov40_0223064C(r5, r4);
    // add r0, #0x10
    ov40_0222E7B8(r5, r4);
    ov40_02230964(r4, 0);
    ov40_02232FCC(r4);
    // str r1, [r5, r0]
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // add r0, #8
    ov40_0222DA84(r5, 1);
    ov40_0222DA00(r5, (r5 + 4), 1, 0);
    ov40_02230964(r4, 1);
    ov40_022330B8(r4);
    ov40_02230964(r4, 0);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 3, 0xc, ((*((u32*)(r5 + 8)) << 0x18) >> 0x18));
    ov40_022326DC();
    ov40_0222DED0(r4, (0x4a << 2));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnDataFromOpenNarc(*((u32*)(r4 + 0x14)), 0x54, *((u32*)(r4 + 0x24)), 7);
    GfGfx_EngineATogglePlanes(8, 1);
    GfGfx_EngineBTogglePlanes(8, 1);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // add r0, #8
    ov40_0222DA84(r5, 0);
    ov40_0222DA00(r5, (r5 + 4), 0, 2);
    GfGfx_EngineATogglePlanes(4, 1);
    GfGfx_EngineBTogglePlanes(4, 1);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 3, 0xc, ((*((u32*)(r5 + 8)) << 0x18) >> 0x18));
    TouchscreenHitbox_TouchNewIsIn(ov40_0224512C);
    // str r1, [r5, r0]
    ov40_02230944(r4, 1);
    Save_NumModifiedPCBoxesIsMany(*((u32*)(r4 + (0x83 << 4))));
    ov40_0222DF60(r4, 0x0000012A);
    ov40_0222DF60(r4, 0x0000012B);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    TouchscreenHitbox_TouchNewIsIn(ov40_02245130);
    // str r1, [r5, r0]
    ov40_02230944(r4, 2);
    *((u32*)(r4 + 8)) = 6;
    // sub r1, #0x30
    SaveGameNormal(*((u32*)(r4 + r1)));
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    ov40_0222DFB0((*((u32*)(r4 + 8)) + 1));
    ov40_022327BC(r4);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // add r0, #8
    ov40_0222DA84(r5, 1);
    ov40_0222DA00(r5, (r5 + 4), 1, 2);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 3, 0xc, ((*((u32*)(r5 + 8)) << 0x18) >> 0x18));
    ov40_0222BF80(r4, 7);
    // str r1, [r5, r0]
    *((u32*)(r5 + 0xc)) = 0;
    ov40_0222BF80(r4, 2);
}





void ov40_02232A48(void) {
    ov40_0222DED0(0x0000012B);
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 1, 1, 0);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    IsPaletteFadeFinished((*((u32*)(r4 + 8)) + 1));
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // sub r0, #8
    // sub r1, #0x44
    // str r0, [sp]
    // add r2, sp, #0xc
    sub_0202FC90(*((u32*)(r4 + 0x00000874)), 0x6d, 0);
    // add r1, #0x3c
    ov40_02244BBC(*((u32*)(r4 + (0x83 << 4))), *((u32*)(r4 + (0x83 << 4))));
    sub_0202FC24();
    ov40_0222FDC4(r4);
    ov40_0222FCCC(r4);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    ov40_0222DFB0((*((u32*)(r4 + 8)) + 1));
    ov40_02233044(r4);
    ov40_0222BF80(r4, 9);
}





void ov40_02232AF8(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 0, 0, 0);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    IsPaletteFadeFinished((*((u32*)(r5 + 8)) + 1));
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    ov40_02230964((*((u32*)(r5 + 8)) + 1), 1);
    // add r0, #0x9c
    ov40_0223064C(r4, r5);
    // add r0, #0x10
    ov40_0222E7B8(r4, r5);
    ov40_02230964(r5, 0);
    TouchHitboxController_Destroy(*((u32*)(r4 + (0x5d << 2))));
    ov40_02232FCC(r5);
    ov40_022330B8(r5);
    ov40_02230964(r5, 1);
    ov40_0222D8C8(r5);
    ov40_02230964(r5, 0);
    ov40_0222C4E8(r5, *((u32*)*((u32*)(r5 + 0x10))));
    sub_02087A84(*((u32*)(r5 + 0x00000868)), 1, 0);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    Heap_Free(r4);
}





void ov40_02232BD8(void) {
    // add r4, #0x9c
    // add r4, #0x10
    // add r0, #8
    // str r0, [sp]
    // add r0, #8
    // add r0, #8
    // str r0, [sp]
    // str r0, [sp]
    // str r0, [sp]
}





void ov40_02232D44(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _02232D64: ; jump table
    ov40_022307DC(6, 7);
    GfGfx_EngineATogglePlanes(8, 1);
    GfGfx_EngineBTogglePlanes(8, 1);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    ov40_02232F50((*((u32*)(r4 + 8)) + 1));
    // str r0, [sp]
    TouchHitboxController_Create(ov40_02245134, 3, ov40_02232ED4, r4);
    // str r0, [r5, r1]
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    ov40_02230964((*((u32*)(r4 + 8)) + 1), 1);
    // add r0, #0x9c
    ov40_02230638(r5, r4);
    // add r0, #0x9c
    ov40_02230410(r5);
    ov40_022307DC(r4, r0, 3);
    // add r5, #0x9c
    ov40_022306A0(r5, 0);
    ov40_02230964(r4, 0);
    GfGfx_EngineATogglePlanes(8, 1);
    GfGfx_EngineBTogglePlanes(8, 1);
    GfGfx_EngineATogglePlanes(4, 0);
    GfGfx_EngineBTogglePlanes(4, 0);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // add r0, #8
    ov40_0222DA84(r5, 0);
    ov40_0222DA00(r5, (r5 + 4), 0, 0);
    // add r0, #0x9c
    ov40_022306A0(r5, 1);
    ov40_02232F88(r4);
    GfGfx_EngineATogglePlanes(4, 1);
    GfGfx_EngineBTogglePlanes(4, 1);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // str r1, [r5, r0]
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 3, 0xc, ((*((u32*)(r5 + 8)) << 0x18) >> 0x18));
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 1, 1, 0);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    IsPaletteFadeFinished((*((u32*)(r4 + 8)) + 1));
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // str r1, [r4, r0]
    ov40_0222C4B8(r4, (*((u32*)(r4 + 0x000006D8)) + 1));
    ov40_0222BF80(r4, 3);
}





void ov40_02232ED4(void) {
    ov40_02230944(r2, (0x86 << 4));
    ov40_0222BF80(r5, 4);
    ov40_02230944(r5);
    // add r4, #0xa0
    sub_0203088C(*((u32*)r4), 5, 0);
    // eor r1, r3
    // eor r0, r2
    ov40_0222BF80(r5, 7, 1, 0);
    ov40_0222BF80(r5, 5);
    ov40_02230944(r5);
    ov40_0222BF80(r5, 8);
}





void ov40_02232F50(void) {
    // add r2, #0xc
    // add r4, r0, r2
    // add r2, #0x2c
    // add r2, #0x9c
    // str r4, [r2]
    // add r2, #0xc
    // add r3, #0x1c
    // add r0, r0, r2
    // add r1, #0xa0
    // str r0, [r1]
}





void ov40_02232F88(void) {
    // add r0, r4, r6
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, r4, r6
}





void ov40_02232FCC(void) {
    // add r0, r4, r0
    // add r0, r4, r0
}





void ov40_02232FEC(void) {
    // add r0, r4, r6
    FillWindowPixelBuffer((0x86 << 4), 0);
    NewString_ReadMsgData(*((u32*)(r5 + 0x48)), r7);
    // add r0, r4, r6
    ov40_022306C0(r0);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r4, r6
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(0x000F0D00, 0, r5, r0);
    String_Delete(r5);
    // add r0, r4, r6
    ScheduleWindowCopyToVram();
}





void ov40_02233044(void) {
    // str r0, [r4, r1]
    // add r0, r4, r0
    // add r1, #0x14
    // add r5, #0x14
    // add r0, r4, r0
    // sub r2, #0x2c
}





void ov40_022330B8(void) {
    // add r0, r4, r0
}





void ov40_022330E0(void) {
    // add r0, #0xbc
    // add r0, #0xbc
    // add r4, #0xc0
    // sub r2, #0x2c
}





void ov40_0223311C(void) {
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    SpriteSystem_LoadCharResObjFromOpenNarc(*((u32*)(r0 + 0x18)), *((u32*)(r0 + 0x1c)), *((u32*)(r0 + 0x14)), 0x32);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadCellResObjFromOpenNarc(r4, r5, r6, 0x1c);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadAnimResObjFromOpenNarc(r4, r5, r6, 0x1d);
}





void ov40_0223316C(void) {
    // add r1, #0xbc
    // str r0, [r1]
    // add r0, #0xb8
    // add r1, #0x14
    // add r0, #0xb8
    // add r1, #0x14
    // add r0, #0xbc
    // add r0, #0xc0
    // sub r2, #0x2c
    // add r0, #0xc0
    // add r1, #0x98
    // str r0, [r1]
    // add r0, #0x98
    // add r0, #0x98
    // add r4, #0x98
}





void ov40_0223320C(void) {
    // add r0, #0xb8
    // add r0, #0xbc
    // add r4, #0x98
}





void ov40_02233238(void) {
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x24]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharDataFromOpenNarc(*((u32*)(r0 + 0x14)), 0x3e, *((u32*)(r0 + 0x24)), 6);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnDataFromOpenNarc(r7, 0x44, r5, 6);
    // ldr r0, [sp, #0x18]
    ov40_0222DB30(0);
    // str r7, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x24]
    SpriteSystem_LoadPaletteBufferFromOpenNarc(0x0000726C, 3, r6, r4);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    SpriteSystem_LoadCharResObjFromOpenNarc(r6, r4, r7, 0x42);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadCellResObjFromOpenNarc(r6, r4, r7, 0x47);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadAnimResObjFromOpenNarc(r6, r4, r7, 0x48);
    // ldr r0, [sp, #0x18]
    ov40_0222DB30(1);
    // str r7, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x24]
    SpriteSystem_LoadPaletteBufferFromOpenNarc(0x00006E7A, 2, r6, r4);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    SpriteSystem_LoadCharResObjFromOpenNarc(r6, r4, r7, 0x40);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadCellResObjFromOpenNarc(r6, r4, r7, 0x26);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadAnimResObjFromOpenNarc(r6, r4, r7, 0x27);
    // add r2, sp, #0x3c
    // ldmia r3!, {r0, r1}
    // str r2, [sp, #0x20]
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // add r2, sp, #0x28
    // ldmia r3!, {r0, r1}
    // str r2, [sp, #0x1c]
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // str r7, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r0, r5, r0
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x24]
    SpriteSystem_LoadPaletteBufferFromOpenNarc(0x00004705, 2, r6, r4);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, r5, r0
    // str r0, [sp, #8]
    SpriteSystem_LoadCharResObjFromOpenNarc(r6, r4, r7, 0x5b);
    // str r0, [sp]
    // ldr r0, [sp, #0x20]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r0, r5, r0
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x24]
    SpriteSystem_LoadPaletteBuffer(0x00004705, 2, r6, r4);
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r3, [sp, #0x1c]
    // add r0, r5, r0
    // str r0, [sp, #8]
    SpriteSystem_LoadCharResObjAtEndWithHardwareMappingType(r6, r4, 0xb3, *((u32*)r3));
    // ldr r0, [sp, #0x20]
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x1c]
    // str r0, [sp, #0x1c]
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadCellResObj(r6, r4, 0xb3, 9);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadAnimResObj(r6, r4, 0xb3, 0xa);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadCellResObjFromOpenNarc(r6, r4, r7, 0x59);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadAnimResObjFromOpenNarc(r6, r4, r7, 0x5a);
    // ldr r0, [sp, #0x18]
    sub_020315D0(*((u32*)(r0 + 0x0000088C)), 0x0000088C);
    // ldr r1, [sp, #0x18]
    // str r0, [sp]
    // str r6, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    SpriteSystem_LoadPaletteBuffer(*((u32*)(r1 + 0x28)), 2, *((u32*)(r1 + 0x18)), *((u32*)(r1 + 0x1c)));
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadCellResObj(r4, r5, 0xb3, 9);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadAnimResObj(r4, r5, 0xb3, 0xa);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    SpriteSystem_LoadCharResObjAtEndWithHardwareMappingType(r4, r5, 0xb3, r7);
}





void ov40_022334F8(void) {
    // add r7, r1, r2
    // asr r4, r6, #0xa
    // and r4, r2
    // and r2, r6
    // asr r6, r6, #5
    // and r2, r6
    // add r2, r4, r6
    // add r2, r5, r2
    // asr r5, r2, #8
    // strh r2, [r3]
}





void ov40_02233550(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp]
    Save_VarsFlags_Get(*((u32*)(*((u32*)(r0 + 0x28)) + (0x83 << 4))), (0x83 << 4));
    Save_VarsFlags_GetBattleTowerPrintProgress();
    // str r0, [sp, #0x30]
    Save_VarsFlags_GetBattleFactoryPrintProgress(r4);
    // str r0, [sp, #0x34]
    Save_VarsFlags_GetBattleArcadePrintProgress(r4);
    // str r0, [sp, #0x38]
    Save_VarsFlags_GetBattleCastlePrintProgress(r4);
    // str r0, [sp, #0x3c]
    Save_VarsFlags_GetBattleHallPrintProgress(r4);
    // str r0, [sp, #0x40]
    // ldmia r3!, {r0, r1}
    // add r2, sp, #8
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // add r4, sp, #0x30
    // add r5, sp, #0x1c
    // str r0, [r2]
    // add r3, sp, #8
    // ldmia r3!, {r0, r1}
    // add r2, sp, #0x1c
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // ldr r0, [sp]
    PaletteData_GetFadedBuf(*((u32*)((*((u32*)r4) - 2) + 0x28)), 2, ov40_02245174);
    ov40_022334F8((((*((u32*)r5) + 4) << 0x14) >> 0x10), 0x10);
    // ldr r0, [sp, #4]
    PaletteData_SetAutoTransparent(1);
}





void ov40_022335F4(void) {
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x1c]
    // add r1, sp, #0x20
    *((u16*)(r1 + 0x28)) = (0x86 << 4);
    *((u16*)(r1 + 0x2a)) = (1 << 8);
    // ldr r0, [sp, #0x1c]
    // ldr r5, [sp, #0x1c]
    *((u16*)(r1 + 0x2c)) = (1 << 8);
    *((u16*)(r1 + 0x2e)) = (1 << 8);
    // str r0, [sp, #0x50]
    // ldr r0, [sp, #0x1c]
    // str r0, [sp, #0x54]
    // str r0, [sp, #0x74]
    // str r0, [sp, #0x78]
    // str r0, [sp, #0x6c]
    // str r0, [sp, #0x70]
    // str r1, [sp, #0x58]
    // str r0, [sp, #0x5c]
    // str r0, [sp, #0x60]
    // str r0, [sp, #0x64]
    // str r0, [sp, #0x68]
    // add r2, sp, #0x48
    SpriteSystem_NewSprite(*((u32*)(r0 + 0x18)), *((u32*)(r0 + 0x1c)));
    *((u32*)(r4 + 0x40)) = r0;
    ManagedSprite_SetAnim(1);
    ManagedSprite_TickFrame(*((u32*)(r4 + 0x40)));
    ManagedSprite_SetAffineScale(*((u32*)(r4 + 0x40)), *((u32*)(r4 + 4)), *((u32*)(r4 + 4)));
    // add r0, r5, r0
    // str r0, [sp, #0x5c]
    // str r0, [sp, #0x60]
    // str r0, [sp, #0x64]
    // str r0, [sp, #0x68]
    // str r0, [sp, #0x64]
    // str r0, [sp, #0x68]
    // add r2, sp, #0x48
    SpriteSystem_NewSprite(*((u32*)(r7 + 0x18)), *((u32*)(r7 + 0x1c)));
    *((u32*)(r4 + 0x54)) = r0;
    ManagedSprite_SetAnim(*((u32*)(r4 + 0x54)), 0);
    ManagedSprite_SetAnim(1);
    ManagedSprite_TickFrame(*((u32*)(r4 + 0x54)));
    ManagedSprite_SetAffineScale(*((u32*)(r4 + 0x54)), *((u32*)(r4 + 4)), *((u32*)(r4 + 4)));
    // add r1, #0xa
    ManagedSprite_SetPaletteOverride(*((u32*)(r4 + 0x54)), r5);
    // str r0, [sp, #0x5c]
    // str r0, [sp, #0x60]
    // str r0, [sp, #0x64]
    // str r0, [sp, #0x68]
    // mvn r0, r0
    // str r0, [sp, #0x6c]
    // str r0, [sp, #0x70]
    // str r0, [sp, #0x50]
    Save_VarsFlags_Get(*((u32*)(r7 + (0x83 << 4))));
    Save_VarsFlags_GetBattleTowerPrintProgress();
    // str r0, [sp, #0x7c]
    Save_VarsFlags_GetBattleFactoryPrintProgress(r4);
    // str r0, [sp, #0x80]
    Save_VarsFlags_GetBattleArcadePrintProgress(r4);
    // str r0, [sp, #0x84]
    Save_VarsFlags_GetBattleCastlePrintProgress(r4);
    // str r0, [sp, #0x88]
    Save_VarsFlags_GetBattleHallPrintProgress(r4);
    // str r0, [sp, #0x8c]
    // str r0, [sp, #4]
    // add r0, sp, #0x7c
    // str r0, [sp, #0x10]
    // ldmia r2!, {r0, r1}
    // add r3, sp, #0x20
    // stmia r3!, {r0, r1}
    // ldmia r2!, {r0, r1}
    // stmia r3!, {r0, r1}
    // add r5, sp, #0x34
    // str r0, [r3]
    // add r2, sp, #0x48
    SpriteSystem_NewSprite(*((u32*)(r7 + 0x18)), *((u32*)(r7 + 0x1c)), ov40_022451B0);
    *((u32*)(r4 + 0x68)) = r0;
    // ldr r0, [sp, #0x10]
    ManagedSprite_SetAnim(*((u32*)(r4 + 0x68)), 5);
    ManagedSprite_SetPaletteOverride(*((u32*)(r4 + 0x68)), 9);
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 0x54)), 0);
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 0x40)), 0);
    // add r3, sp, #0x20
    // ldmia r3!, {r0, r1}
    // add r2, sp, #0x34
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    ManagedSprite_SetAnim(*((u32*)(r4 + 0x68)), *((u32*)r5));
    ManagedSprite_SetPaletteOverride(*((u32*)(r4 + 0x68)), (*((u32*)r5) + 4));
    ManagedSprite_TickFrame(*((u32*)(r4 + 0x68)));
    ManagedSprite_SetAffineScale(*((u32*)(r4 + 0x68)), *((u32*)(r4 + 4)), *((u32*)(r4 + 4)));
    // ldr r0, [sp, #0x10]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #4]
    // str r0, [sp, #4]
    // str r0, [sp, #0x5c]
    // str r0, [sp, #0x60]
    // str r0, [sp, #0x64]
    // str r0, [sp, #0x68]
    // mvn r0, r0
    // str r0, [sp, #0x6c]
    // str r0, [sp, #0x70]
    // str r0, [sp, #0x58]
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x50]
    // add r0, #0x90
    // str r0, [sp]
    // ldr r0, [sp, #0x18]
    // add r5, sp, #0x90
    // str r0, [sp, #8]
    // ldr r0, [sp]
    _s32_div_f(*((u32*)r6), (0xfa << 2));
    // str r0, [r5]
    // ldr r0, [sp]
    _s32_div_f(r4);
    // str r1, [sp]
    _s32_div_f(r4, 0xa);
    // ldr r0, [sp, #0x18]
    // ldr r0, [sp, #0x1c]
    // str r0, [sp, #0x1c]
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #8]
    // str r0, [sp, #8]
    // str r0, [sp, #0xa0]
    // str r0, [sp, #0xc]
    // add r5, sp, #0x90
    // str r0, [sp, #0x14]
    // add r2, sp, #0x48
    SpriteSystem_NewSprite(*((u32*)(r7 + 0x18)), *((u32*)(r7 + 0x1c)));
    *((u32*)(r4 + 0x7c)) = r0;
    // ldr r1, [sp, #0xc]
    // ldr r0, [sp, #0x1c]
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 0x7c)), 0);
    ManagedSprite_SetAnim(*((u32*)(r4 + 0x7c)), *((u32*)r5));
    // ldr r1, [sp, #0x14]
    // asr r1, r1, #0x10
    ov40_0222D288(*((u32*)(r4 + 0x7c)), (r1 << 0x10), 0x48);
    ManagedSprite_TickFrame(*((u32*)(r4 + 0x7c)));
    // ldr r0, [sp, #0x14]
    // add r0, #0x10
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #0xc]
    // add r0, #0x88
    ManagedSprite_SetDrawFlag(*((u32*)r6), 1);
    // add r0, #0x8c
    ManagedSprite_SetDrawFlag(*((u32*)r6), 1);
    ManagedSprite_SetAffineOverwriteMode(*((u32*)(r6 + 0x40)), 2);
    ManagedSprite_SetAffineOverwriteMode(*((u32*)(r6 + 0x54)), r7);
    ManagedSprite_SetAffineOverwriteMode(*((u32*)(r6 + 0x68)), 2);
}





void ov40_022338D0(void) {
    // add r1, r4, r1
    SpriteManager_UnloadCharObjById(*((u32*)(r0 + 0x1c)), 0x00004705);
    // add r1, r4, r1
    SpriteManager_UnloadPlttObjById(*((u32*)(r5 + 0x1c)), 0x00004705);
    Sprite_DeleteAndFreeResources(*((u32*)(r6 + 0x54)));
    SpriteManager_UnloadCellObjById(*((u32*)(r5 + 0x1c)), 0x00004705);
    SpriteManager_UnloadAnimObjById(*((u32*)(r5 + 0x1c)), 0x00004705);
    SpriteManager_UnloadCellObjById(*((u32*)(r5 + 0x1c)), 0x00004706);
    SpriteManager_UnloadAnimObjById(*((u32*)(r5 + 0x1c)), 0x00004706);
    Sprite_DeleteAndFreeResources(*((u32*)(r7 + 0x40)));
    SpriteManager_UnloadCharObjById(*((u32*)(r5 + 0x1c)), 0x0002869F);
    SpriteManager_UnloadPlttObjById(*((u32*)(r5 + 0x1c)), 0x0002869F);
    SpriteManager_UnloadCellObjById(*((u32*)(r5 + 0x1c)), 0x0002869F);
    SpriteManager_UnloadAnimObjById(*((u32*)(r5 + 0x1c)), 0x0002869F);
    Sprite_DeleteAndFreeResources(*((u32*)(r7 + 0x68)));
    SpriteManager_UnloadCharObjById(*((u32*)(r5 + 0x1c)), 0x00006E7A);
    SpriteManager_UnloadPlttObjById(*((u32*)(r5 + 0x1c)), 0x00006E7A);
    SpriteManager_UnloadCellObjById(*((u32*)(r5 + 0x1c)), 0x00006E7A);
    SpriteManager_UnloadAnimObjById(*((u32*)(r5 + 0x1c)), 0x00006E7A);
    Sprite_DeleteAndFreeResources(*((u32*)(r7 + 0x7c)));
    SpriteManager_UnloadCharObjById(*((u32*)(r5 + 0x1c)), 0x0000726C);
    SpriteManager_UnloadPlttObjById(*((u32*)(r5 + 0x1c)), 0x0000726C);
    SpriteManager_UnloadCellObjById(*((u32*)(r5 + 0x1c)), 0x0000726C);
    SpriteManager_UnloadAnimObjById(*((u32*)(r5 + 0x1c)), 0x0000726C);
}





void ov40_022339CC(void) {
    // str r0, [sp]
    // add r0, #0x14
    *((u32*)(*((u32*)(r0 + (0x86 << 4))) + 0x2c)) = *((u32*)(*((u32*)(r0 + (0x86 << 4))) + 0x2c));
    _s32_div_f(*((u32*)(*((u32*)(r0 + (0x86 << 4))) + 0x2c)), (0x5a << 2));
    *((u32*)(r5 + 0x2c)) = r1;
    // ldr r0, [sp]
    // ldr r1, [sp]
    // add r0, #0xd4
    // add r1, #0xd8
    ov40_0222DA00(0, 0);
    // ldr r5, [sp]
    // add r4, sp, #4
    // ldr r0, [sp]
    _fadd(*((u32*)(r5 + 4)), 0x3D4CCCCD);
    ManagedSprite_SetAffineOverwriteMode(*((u32*)(r5 + 0x40)), 0);
    ManagedSprite_SetAffineOverwriteMode(*((u32*)(r5 + 0x54)), 0);
    ManagedSprite_SetAffineOverwriteMode(*((u32*)(r5 + 0x68)), 0);
    *((u32*)(r5 + 4)) = (0xfe << 0x16);
    GF_SinDeg(((*((u32*)(r5 + 0x2c)) << 0x10) >> 0x10));
    GF_CosDeg(((*((u32*)(r5 + 0x2c)) << 0x10) >> 0x10), *((u32*)(r5 + 0x18)));
    // sub r2, r0, r2
    // add r1, r7, r1
    ManagedSprite_SetPositonFxXY(*((u32*)(r5 + 0x68)), (2 << 0x12), (*((u32*)(r5 + 0x18)) * r0));
    // add r1, sp, #4
    // add r1, #2
    // add r2, sp, #4
    ManagedSprite_GetPositionXY(*((u32*)(r5 + 0x68)));
    // ldrsh r1, [r4, r1]
    // ldrsh r2, [r4, r2]
    // sub r1, #0x20
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXY(*((u32*)(r5 + 0x40)), (2 << 0x10), ((0 - 2) << 0x10));
    // ldrsh r1, [r4, r1]
    // ldrsh r2, [r4, r2]
    // add r1, #0x10
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXY(*((u32*)(r5 + 0x54)), (2 << 0x10), ((0 - 2) << 0x10));
    ManagedSprite_SetAffineScale(*((u32*)(r5 + 0x68)), *((u32*)(r5 + 4)), *((u32*)(r5 + 4)));
    ManagedSprite_SetAffineScale(*((u32*)(r5 + 0x40)), *((u32*)(r5 + 4)), *((u32*)(r5 + 4)));
    ManagedSprite_SetAffineScale(*((u32*)(r5 + 0x54)), *((u32*)(r5 + 4)), *((u32*)(r5 + 4)));
    // ldr r0, [sp]
}





void ov40_02233AEC(void) {
    // str r0, [sp]
    // add r0, #0x14
    *((u32*)(*((u32*)(r0 + (0x86 << 4))) + 0x2c)) = *((u32*)(*((u32*)(r0 + (0x86 << 4))) + 0x2c));
    _s32_div_f(*((u32*)(*((u32*)(r0 + (0x86 << 4))) + 0x2c)), (0x5a << 2));
    *((u32*)(r5 + 0x2c)) = r1;
    // ldr r0, [sp]
    // ldr r4, [sp]
    ManagedSprite_SetAffineOverwriteMode(*((u32*)((r4 + 1) + 0x40)), 2);
    ManagedSprite_SetAffineOverwriteMode(*((u32*)(r4 + 0x54)), r7);
    ManagedSprite_SetAffineOverwriteMode(*((u32*)(r4 + 0x68)), 2);
    // ldr r0, [sp]
    // ldr r1, [sp]
    // add r0, #0xd4
    // add r1, #0xd8
    ov40_0222DA00(1, 0);
    // ldr r5, [sp]
    // add r4, sp, #4
    // ldr r0, [sp]
    _fsub(*((u32*)(r5 + 4)), 0x3D4CCCCD);
    *((u32*)(r5 + 4)) = r0;
    ManagedSprite_SetDrawFlag(*((u32*)(r5 + 0x68)), 0);
    ManagedSprite_SetDrawFlag(*((u32*)(r5 + 0x40)), 0);
    ManagedSprite_SetDrawFlag(*((u32*)(r5 + 0x54)), 0);
    GF_SinDeg(((*((u32*)(r5 + 0x2c)) << 0x10) >> 0x10));
    // sub r7, r0, r2
    GF_CosDeg(((*((u32*)(r5 + 0x2c)) << 0x10) >> 0x10), *((u32*)(r5 + 0x18)), (*((u32*)(r5 + 0x18)) * r0));
    // sub r2, r0, r2
    ManagedSprite_SetPositonFxXY(*((u32*)(r5 + 0x68)), r7, (*((u32*)(r5 + 0x18)) * r0));
    // add r1, sp, #4
    // add r1, #2
    // add r2, sp, #4
    ManagedSprite_GetPositionXY(*((u32*)(r5 + 0x68)));
    // ldrsh r1, [r4, r1]
    // ldrsh r2, [r4, r2]
    // sub r1, #0x20
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXY(*((u32*)(r5 + 0x40)), (2 << 0x10), ((0 - 2) << 0x10));
    // ldrsh r1, [r4, r1]
    // ldrsh r2, [r4, r2]
    // add r1, #0x10
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXY(*((u32*)(r5 + 0x54)), (2 << 0x10), ((0 - 2) << 0x10));
    ManagedSprite_SetAffineScale(*((u32*)(r5 + 0x68)), *((u32*)(r5 + 4)), *((u32*)(r5 + 4)));
    ManagedSprite_SetAffineScale(*((u32*)(r5 + 0x40)), *((u32*)(r5 + 4)), *((u32*)(r5 + 4)));
    ManagedSprite_SetAffineScale(*((u32*)(r5 + 0x54)), *((u32*)(r5 + 4)), *((u32*)(r5 + 4)));
    // ldr r0, [sp]
}





void ov40_02233C3C(void) {
    // add r6, sp, #0
    // ldrsh r1, [r4, r1]
    // ldrsh r2, [r4, r2]
    ManagedSprite_SetPositonFxXY(*((u32*)(*((u32*)(r0 + (0x86 << 4))) + 0x68)), (0 << 0xc), (2 << 0xc));
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    ManagedSprite_GetPositionXY(*((u32*)(r5 + 0x68)));
    // ldrsh r1, [r6, r1]
    // ldrsh r2, [r6, r2]
    // sub r1, #0x20
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXY(*((u32*)(r5 + 0x40)), (2 << 0x10), ((0 - 2) << 0x10));
    // ldrsh r1, [r6, r1]
    // ldrsh r2, [r6, r2]
    // add r1, #0x10
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXY(*((u32*)(r5 + 0x54)), (2 << 0x10), ((0 - 2) << 0x10));
}





void ov40_02233CAC(void) {
    Heap_Alloc(0x6d, 0xdc);
    MI_CpuFill8(0, 0xdc);
    // str r5, [r4, r0]
    // str r0, [r5]
    *((u32*)(r5 + 0x18)) = 0x34;
    *((u32*)(r5 + 0x18)) = 0x40;
    *((u32*)(r5 + 0x2c)) = 0;
    *((u32*)(r5 + 4)) = 0x3E4CCCCD;
    // add r2, #0x48
    BgClearTilemapBufferAndCommit(*((u32*)(r4 + 0x24)), 3, 0, 0x3E4CCCCD);
    BgClearTilemapBufferAndCommit(*((u32*)(r4 + 0x24)), 2);
    BgClearTilemapBufferAndCommit(*((u32*)(r4 + 0x24)), 7);
    BgClearTilemapBufferAndCommit(*((u32*)(r4 + 0x24)), 6);
    // add r0, #0xd4
    // add r1, #0xd8
    ov40_0222D9E8(r5, r5, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, #0xd4
    // add r1, #0xd8
    // str r2, [sp, #8]
    ov40_0222D980(r5, r5, 0, 0);
    PlaySE(0x00000579);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02233D68: ; jump table
    ov40_0222DA84(*((u32*)(r4 + (0x86 << 4))), 1);
    Save_FrontierData_Get(*((u32*)(r4 + (0x83 << 4))));
    FrontierData_BattlePointAction(0, 0);
    // add r1, #0x90
    // str r0, [r1]
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 2, 0xc, ((*((u32*)r5) << 0x18) >> 0x18));
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 3, 0xc, ((*((u32*)r5) << 0x18) >> 0x18));
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 1, 2, ((*((u32*)r5) << 0x18) >> 0x18));
    ov40_02230964(r4, 1);
    ov40_0222D874(r4);
    ov40_02230964(r4, 0);
    ov40_0222FB90(r4, 0);
    sub_020879E0(*((u32*)(r4 + (0x6f << 4))), 0);
    ov40_02230738();
    SetBgPriority(6, 2);
    ov40_02233238(r4);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 3, 0x1c, ((*((u32*)r5) << 0x18) >> 0x18));
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    ov40_0222FBB4(r4);
    ov40_02230964(r4, 1);
    ov40_0223316C(r4);
    ov40_022335F4(r4);
    ov40_02233550(r4);
    ov40_02230964(r4, 0);
    GfGfx_EngineBTogglePlanes(8, 1);
    GfGfx_EngineBTogglePlanes(4, 1);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    ov40_022339CC(r4);
    // add r0, #0xd4
    // add r1, #0xd8
    ov40_0222DA00(r5, r5, 0, 0);
    ov40_0222DA84(r5, 0);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    ov40_02233C3C(r4);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 3, 0x1c, ((*((u32*)r5) << 0x18) >> 0x18));
    ov40_0222BF80(r4, 1);
}





void ov40_02233EE8(void) {
    // add r0, sp, #4
    // add r1, sp, #0
    System_GetTouchNewCoords();
    // ldr r0, [sp, #4]
    // ldr r0, [sp]
    PlaySE(0x0000057B);
    ov40_0222BF80(r4, 2);
}





void ov40_02233F28(void) {
    // add r1, r0, r0
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _02233F46: ; jump table
    PlaySE(0x0000057A, (*((u16*)(r1 + 6)) << 0x10));
    // str r0, [r5]
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 3, 0x1c, ((*((u32*)r5) << 0x18) >> 0x18));
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 1, 0x00004018, ((*((u32*)r5) << 0x18) >> 0x18));
    ov40_02233AEC(r4);
    // str r0, [r5]
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    *((u32*)(r4 + 8)) = ((*((u32*)(r4 + 8)) + 1) + 1);
    ov40_02230964(r4, 1);
    ov40_022338D0(r4);
    ov40_0223320C(r4);
    ov40_02230964(r4, 0);
    GfGfx_EngineATogglePlanes(8, 0);
    GfGfx_EngineATogglePlanes(4, 0);
    GfGfx_EngineBTogglePlanes(8, 0);
    GfGfx_EngineBTogglePlanes(4, 0);
    // str r0, [r5]
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    ov40_0222BC44(1);
    ov40_02230964(r4, 1);
    ov40_0222D88C(r4);
    ov40_02230964(r4, 0);
    BgClearTilemapBufferAndCommit(*((u32*)(r4 + 0x24)), 2);
    BgClearTilemapBufferAndCommit(*((u32*)(r4 + 0x24)), 6);
    BgClearTilemapBufferAndCommit(*((u32*)(r4 + 0x24)), 3);
    BgClearTilemapBufferAndCommit(*((u32*)(r4 + 0x24)), 7);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // str r0, [r5]
    *((u32*)(r4 + 8)) = ((*((u32*)r5) - 2) + 1);
    ov40_0222DAA8(r5, *((u32*)r5));
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 2, 0xc, ((*((u32*)r5) << 0x18) >> 0x18));
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 3, 0x1c, ((*((u32*)r5) << 0x18) >> 0x18));
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 1, 2, ((*((u32*)r5) << 0x18) >> 0x18));
    ov40_0222DA84(r5, 0);
    // str r0, [sp]
    G2x_SetBlendAlpha_(0x04000050, 4, 0x12, 7);
    // str r0, [sp]
    G2x_SetBlendAlpha_(0x04001050, 4, 0x12, 7);
    Heap_Free(r5);
    ov40_0222DD08(r4);
    ov40_0222DAA8(r5);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 2, 0xc, 0x10);
    ov40_0222BF64(r4, 1, 1, *((u32*)(r4 + 0x10)));
    ov40_0222BF80(r4, 5);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 3, 0xc, ((*((u32*)r5) << 0x18) >> 0x18));
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 1, 2, ((*((u32*)r5) << 0x18) >> 0x18));
}





void ov40_0223414C(void) {
    Heap_Alloc(0x6d, (0xba << 2));
    memset(0, (0xba << 2));
    // str r4, [r5, r0]
    HandleLoadOverlay(FS_OVERLAY_ID, 2);
    // str r0, [r4, r1]
    // str r2, [r4, r0]
    // add r0, #8
    // str r2, [r4, r0]
    // add r1, #0xc
    // str r0, [r4, r1]
    sub_0202B998(0x6d, (0x86 << 2), 0x10);
    // str r0, [r4, r1]
    sub_020314A4(0x6d, (0x8e << 2));
    // str r0, [r4, r1]
    BgClearTilemapBufferAndCommit(*((u32*)(r5 + 0x24)), 2);
    BgClearTilemapBufferAndCommit(*((u32*)(r5 + 0x24)), 3);
    BgClearTilemapBufferAndCommit(*((u32*)(r5 + 0x24)), 6);
    BgClearTilemapBufferAndCommit(*((u32*)(r5 + 0x24)), 7);
    ov40_0222D9E8(r4, (r4 + 4), 0);
    ov40_0222BF80(r5, 1);
}





void ov40_022341E0(void) {
    // add r0, #8
    // str r0, [sp]
    // str r0, [sp]
    // str r0, [sp]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
}





void ov40_02234330(void) {
    ov40_02235940(*((u32*)(r0 + 8)));
    ov40_022307DC(r5, 0x23, 3);
    ov40_022307DC(r5, 0x25, 7);
    GfGfx_EngineBTogglePlanes(8, 1);
    GfGfx_EngineATogglePlanes(8, 1);
    ov40_02230964(r5, 1);
    Save_FashionData_Get(*((u32*)(r5 + (0x83 << 4))));
    sub_0202B9B8(0);
    // str r0, [r4, r1]
    // sub r0, #0x14
    // add r0, r4, r0
    ov41_0224B530((0x8b << 2), *((u32*)(r4 + (0x8b << 2))));
    // str r0, [r4, r1]
    ov41_0224B5D0(*((u32*)(r4 + (0x8a << 2))), 1);
    ov40_02230964(r5, 0);
    GfGfx_EngineATogglePlanes(4, 0);
    GfGfx_EngineATogglePlanes(1, 0);
    Main_SetVBlankIntrCB(ov40_02235900, r5);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    PaletteData_LoadPaletteSlotFromHardware(*((u32*)(r5 + 0x28)), 0, 0, (2 << 8));
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    // add r0, #8
    ov40_0222DA84(r4, 0);
    ov40_0222DA00(r4, (r4 + 4), 0, 0);
    GfGfx_EngineATogglePlanes(4, 1);
    GfGfx_EngineATogglePlanes(1, 1);
    ov40_02235B4C(r5);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r5 + 0x28)), 3, 0xc, ((*((u32*)(r4 + 8)) << 0x18) >> 0x18));
    ov40_0222BF80(3);
    Thunk_G3X_Reset(*((u32*)(r4 + (0x8a << 2))));
    ov41_0224B554(*((u32*)(r4 + (0x8a << 2))));
    RequestSwap3DBuffers(0, 0);
}





void ov40_02234470(void) {
    TouchscreenHitbox_TouchNewIsIn(ov40_022451C8);
    ov40_02230944(r5);
    ov40_0222BF80(r5, 5);
    TouchscreenHitbox_TouchNewIsIn(ov40_022451CC);
    ov40_02230944(r5);
    ov40_0222BF80(r5, 4);
    Thunk_G3X_Reset(*((u32*)(r4 + (0x8a << 2))));
    ov41_0224B554(*((u32*)(r4 + (0x8a << 2))));
    RequestSwap3DBuffers(0, 0);
}





void ov40_022344D8(void) {
    ov40_0223D5CC((0x86 << 4));
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02234506: ; jump table
    SetBgPriority(0, 1);
    SetBgPriority(1, 3);
    SetBgPriority(2, 2);
    SetBgPriority(3, 1);
    SetBgPriority(4, 1);
    SetBgPriority(5, 3);
    SetBgPriority(6, 2);
    SetBgPriority(7, 1);
    Heap_Free(*((u32*)(r5 + (0x8e << 2))));
    sub_020314BC(*((u32*)(r5 + (0x25 << 4))));
    BgClearTilemapBufferAndCommit(*((u32*)(r4 + 0x24)), 2);
    BgClearTilemapBufferAndCommit(*((u32*)(r4 + 0x24)), 6);
    ov40_02236130(r4);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // add r0, #8
    ov40_0222DA84(r5, 1);
    ov40_0222DA00(r5, (r5 + 4), 1, 0);
    ov40_02230964(r4, 1);
    ov40_02235B10(r4);
    ov40_02230964(r4, 0);
    BgClearTilemapBufferAndCommit(*((u32*)(r4 + 0x24)), 3);
    BgClearTilemapBufferAndCommit(*((u32*)(r4 + 0x24)), 7);
    BgSetPosTextAndCommit(*((u32*)(r4 + 0x24)), 2, 0, 0);
    SetBgPriority(2, 0);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 3, 0xc, ((*((u32*)(r5 + 8)) << 0x18) >> 0x18));
    ov40_0223077C(r4, *((u32*)(r4 + (0x6f << 4))), 0x80, 0x60);
    sub_020879E0(*((u32*)(r4 + (0x6f << 4))), 1);
    sub_02087A08(*((u32*)(r4 + (0x6f << 4))), 0x18, 0x18);
    ov40_0222DED0(r4, 0x0000011E);
    sub_020314A4(0x6d);
    // str r0, [r5, r1]
    sub_020314C4(*((u32*)(r5 + (0xb7 << 2))), *((u32*)(r4 + (0x83 << 4))));
    PlaySE(0x0000057D);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    ov40_0223D540(r4);
    // sub r2, #0xb0
    ov39_022273B0(*((u32*)(r5 + (0xb7 << 2))), *((u32*)(r5 + (0xb7 << 2))));
    sub_020314BC(*((u32*)(r5 + (0xb7 << 2))));
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    ov40_0222DFB0(r4);
    ov40_0223D540(r4);
    // add r1, sp, #4
    ov39_02227D44();
    StopSE(0x0000057D, 0);
    // ldr r3, [sp, #4]
    ov40_02230CDC(r4, 0, *((u32*)(r3 + 0xc)), *((u32*)(r3 + 4)));
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    StopSE((*((u32*)(r4 + 8)) + 1), 0);
    ov40_0222FB28(r4, 0x24);
    PlaySE(0x00000577);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    sub_020879E0(*((u32*)(r4 + (0x6f << 4))), 0);
    sub_02087A08(*((u32*)(r4 + (0x6f << 4))), 0, 0);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    ov40_02230964(r4, 1);
    // add r5, #8
    ov40_0222DAA8(r5);
    ov40_0222D88C(r4);
    ov40_02230964(r4, 0);
    BgClearTilemapBufferAndCommit(*((u32*)(r4 + 0x24)), 2);
    BgClearTilemapBufferAndCommit(*((u32*)(r4 + 0x24)), 6);
    BgClearTilemapBufferAndCommit(*((u32*)(r4 + 0x24)), 3);
    BgClearTilemapBufferAndCommit(*((u32*)(r4 + 0x24)), 7);
    ov40_0222FB90(r4, 1);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    ov40_0222FBB4(r4);
    // add r0, #8
    ov40_0222DA84(r5, 0);
    ov41_0224B57C(*((u32*)(r5 + (0x8a << 2))));
    ov40_0222BC54(r4);
    SetBgPriority(2, 0);
    ov40_02235994();
    ov40_0222DD08(r4);
    // add r0, #8
    ov40_0222DAA8(r5);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 2, 0xc, 0x10);
    ov40_0222BF64(r4, 1, 1, *((u32*)(r4 + 0x10)));
    ov40_0222BF80(r4, 5);
    Heap_Free(r5);
    UnloadOverlayByID(FS_OVERLAY_ID);
    Main_SetVBlankIntrCB(ov40_0222BD04, r4);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 1, 2, ((*((u32*)(r5 + 8)) << 0x18) >> 0x18));
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 3, 0xc, ((*((u32*)(r5 + 8)) << 0x18) >> 0x18));
}





void ov40_0223480C(void) {
    SetBgPriority(0, 1);
    SetBgPriority(1, 3);
    SetBgPriority(2, 2);
    SetBgPriority(3, 1);
    SetBgPriority(4, 1);
    SetBgPriority(5, 3);
    SetBgPriority(6, 2);
    SetBgPriority(7, 1);
    Heap_Free(*((u32*)(r4 + (0x8e << 2))));
    sub_020314BC(*((u32*)(r4 + (0x25 << 4))));
    BgClearTilemapBufferAndCommit(*((u32*)(r5 + 0x24)), 2);
    BgClearTilemapBufferAndCommit(*((u32*)(r5 + 0x24)), 6);
    ov40_02236130(r5);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    // add r0, #8
    ov40_0222DA84(r4, 1);
    ov40_0222DA00(r4, (r4 + 4), 1, 0);
    ov40_02230964(r5, 1);
    ov40_02235B10(r5);
    ov40_02230964(r5, 0);
    BgClearTilemapBufferAndCommit(*((u32*)(r5 + 0x24)), 3);
    BgClearTilemapBufferAndCommit(*((u32*)(r5 + 0x24)), 7);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r5 + 0x28)), 3, 0xc, ((*((u32*)(r4 + 8)) << 0x18) >> 0x18));
    // add r4, #8
    ov40_0222DAA8(r4);
    ov40_02230964(r5, 1);
    ov40_0222D88C(r5);
    ov40_02230964(r5, 0);
    BgClearTilemapBufferAndCommit(*((u32*)(r5 + 0x24)), 2);
    BgClearTilemapBufferAndCommit(*((u32*)(r5 + 0x24)), 6);
    BgClearTilemapBufferAndCommit(*((u32*)(r5 + 0x24)), 3);
    BgClearTilemapBufferAndCommit(*((u32*)(r5 + 0x24)), 7);
    ov40_0222FB90(r5, 1);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    ov40_0222FBB4((*((u32*)(r5 + 8)) + 1));
    // add r0, #8
    ov40_0222DA84(r4, 0);
    ov40_02230964(r5, 1);
    ov41_0224B57C(*((u32*)(r4 + (0x8a << 2))));
    ov40_0222BC54(r5);
    SetBgPriority(2, 0);
    ov40_02235994();
    ov40_02230964(r5, 0);
    ov40_0222DD08(r5);
    // add r0, #8
    ov40_0222DAA8(r4);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r5 + 0x28)), 2, 0xc, 0x10);
    ov40_0222BF64(r5, 1, 1, *((u32*)(r5 + 0x10)));
    ov40_0222BF80(r5, 5);
    Heap_Free(r4);
    UnloadOverlayByID(FS_OVERLAY_ID);
    Main_SetVBlankIntrCB(ov40_0222BD04, r5);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r5 + 0x28)), 1, 2, ((*((u32*)(r4 + 8)) << 0x18) >> 0x18));
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r5 + 0x28)), 3, 0xc, ((*((u32*)(r4 + 8)) << 0x18) >> 0x18));
}





void ov40_02234A14(void) {
}





void ov40_02234A38(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _02234A56: ; jump table
    ov40_022307DC(0x3c, 7);
    GfGfx_EngineATogglePlanes(8, 1);
    GfGfx_EngineBTogglePlanes(8, 1);
    GfGfx_EngineATogglePlanes(4, 1);
    GfGfx_EngineBTogglePlanes(4, 1);
    // str r0, [sp]
    TouchHitboxController_Create(ov40_02245708, 9, ov40_02235FD0, r4);
    // str r0, [r5, r1]
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // add r0, #8
    ov40_0222DA84(r5, 0);
    ov40_0222DA00(r5, (r5 + 4), 0, 0);
    ov40_0222DED0(r4, 0x72);
    ov40_02235FFC(r4);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 3, 0xc, ((*((u32*)(r5 + 8)) << 0x18) >> 0x18));
    TouchHitboxController_IsTriggered(*((u32*)(r5 + (0x1d << 4))));
    TouchscreenHitbox_TouchNewIsIn(ov40_022451C4);
    ov40_02230944(r4);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    ov40_0223610C((*((u32*)(r4 + 8)) + 1));
    TouchHitboxController_Destroy(*((u32*)(r5 + (0x1d << 4))));
    ov40_0222DFB0(r4);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    ov40_0222DA00(r5, (r5 + 4), 1, 2);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // add r0, #8
    ov40_0222DA84(r5, 1);
    ov40_0222DA00(r5, (r5 + 4), 1, 2);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 3, 0xc, ((*((u32*)(r5 + 8)) << 0x18) >> 0x18));
    ov40_0222BF80(r4, 4);
    ov40_0222BF80(r4, 5);
}





void ov40_02234BBC(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _02234BDC: ; jump table
    ov40_022359B4(1);
    ov40_022307DC(r4, 0x3a, 7);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    ov40_0222DA00(r5, (r5 + 4), 0, 2);
    ov40_0222DED0(r4, 0x72);
    ov40_02230964(r4, 1);
    // add r0, r4, r0
    ov40_0222F9D4(0x0000047C, r4);
    // add r2, r5, r0
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // str r2, [r5, r0]
    // sub r0, #0x14
    // add r1, #8
    // str r0, [r5, r1]
    // add r0, r4, r0
    ov40_0222F734(0x0000049C, (0x7a << 2), *((u32*)(r5 + (0x7a << 2))), ov40_022451F4);
    // add r3, #0xc
    // add r0, r4, r0
    // add r3, r5, r3
    ov40_0222E9B8(0x0000049C, r4, *((u32*)(r5 + (0x1e << 4))), (0x1e << 4));
    // add r0, r4, r1
    // add r1, #0x20
    // add r1, r4, r1
    ov40_0222FA5C(0x0000047C);
    // add r0, r4, r0
    ov40_0222F740(0x0000049C, r4, 2);
    ov40_02230964(r4, 0);
    // str r1, [r5, r0]
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // add r0, r4, r0
    ov40_0222FA88(0x0000047C, 0);
    // add r0, r4, r1
    // sub r1, #0x10
    // ldrsh r1, [r4, r1]
    ov40_0222F6D0(0x0000049C);
    // add r0, r4, r0
    ov40_0222F38C(0x0000049C, r4);
    // str r0, [r5, r1]
    ov40_02230944(r4, (0x2e << 4));
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    TouchscreenHitbox_TouchNewIsIn(ov40_022451C4);
    ov40_02230944(r4);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    ov40_0222DFB0((*((u32*)(r4 + 8)) + 1));
    ov40_02230964(r4, 1);
    // add r0, r4, r0
    ov40_0222FA24(0x0000047C);
    // add r0, r4, r0
    ov40_0222F720(0x0000049C);
    // add r0, r4, r0
    ov40_0222F920(0x0000049C, r4);
    ov40_02230964(r4, 0);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // add r0, #8
    ov40_0222DA84(r5, 1);
    ov40_0222DA00(r5, (r5 + 4), 1, 0);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 3, 0xc, ((*((u32*)(r5 + 8)) << 0x18) >> 0x18));
    ov40_02235FA0(r4);
    ov40_0222BF80(r4, 6);
    ov40_0222BF80(r4, 3);
}





void ov40_02234D94(void) {
    SetBgPriority(0, 1);
    SetBgPriority(1, 3);
    SetBgPriority(2, 2);
    SetBgPriority(3, 1);
    SetBgPriority(4, 1);
    SetBgPriority(5, 3);
    SetBgPriority(6, 2);
    SetBgPriority(7, 1);
    Heap_Free(*((u32*)(r4 + (0x8e << 2))));
    sub_020314BC(*((u32*)(r4 + (0x25 << 4))));
    BgClearTilemapBufferAndCommit(*((u32*)(r5 + 0x24)), 2);
    BgClearTilemapBufferAndCommit(*((u32*)(r5 + 0x24)), 6);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    // add r0, #8
    ov40_0222DA84(r4, 1);
    ov40_0222DA00(r4, (r4 + 4), 1, 0);
    ov40_02230964(r5, 1);
    ov40_02235B10(r5);
    ov40_02230964(r5, 0);
    BgClearTilemapBufferAndCommit(*((u32*)(r5 + 0x24)), 3);
    BgClearTilemapBufferAndCommit(*((u32*)(r5 + 0x24)), 7);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r5 + 0x28)), 3, 0xc, ((*((u32*)(r4 + 8)) << 0x18) >> 0x18));
    // add r4, #8
    ov40_0222DAA8(r4);
    ov40_02230964(r5, 1);
    ov40_0222D88C(r5);
    ov40_02230964(r5, 0);
    BgClearTilemapBufferAndCommit(*((u32*)(r5 + 0x24)), 2);
    BgClearTilemapBufferAndCommit(*((u32*)(r5 + 0x24)), 6);
    BgClearTilemapBufferAndCommit(*((u32*)(r5 + 0x24)), 3);
    BgClearTilemapBufferAndCommit(*((u32*)(r5 + 0x24)), 7);
    ov40_0222FB90(r5, 1);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    ov40_0222FBB4((*((u32*)(r5 + 8)) + 1));
    // add r0, #8
    ov40_0222DA84(r4, 0);
    ov40_02230964(r5, 1);
    ov41_0224B57C(*((u32*)(r4 + (0x8a << 2))));
    ov40_0222BC54(r5);
    SetBgPriority(2, 0);
    ov40_02235994();
    ov40_02230964(r5, 0);
    ov40_0222DD08(r5);
    // add r0, #8
    ov40_0222DAA8(r4);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r5 + 0x28)), 2, 0xc, 0x10);
    ov40_0222BF64(r5, 1, 1, *((u32*)(r5 + 0x10)));
    ov40_0222BF80(r5, 5);
    Heap_Free(r4);
    UnloadOverlayByID(FS_OVERLAY_ID);
    Main_SetVBlankIntrCB(ov40_0222BD04, r5);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r5 + 0x28)), 1, 2, ((*((u32*)(r4 + 8)) << 0x18) >> 0x18));
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r5 + 0x28)), 3, 0xc, ((*((u32*)(r4 + 8)) << 0x18) >> 0x18));
}





void ov40_02234F98(void) {
    ov40_0223D5CC((0x86 << 4));
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02234FC2: ; jump table
    ov40_0223077C(r4, *((u32*)(r4 + (0x6f << 4))), 0x80, 0x60);
    sub_020879E0(*((u32*)(r4 + (0x6f << 4))), 1);
    sub_02087A08(*((u32*)(r4 + (0x6f << 4))), 0x18, 0x18);
    ov40_0222DED0(r4, 0x0000011F);
    PlaySE(0x0000057D);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    ov40_0223D540(r4);
    ov39_022273F8(*((u32*)(r5 + (0x2e << 4))));
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    ov40_0222DFB0(r4);
    ov40_0223D540(r4);
    // add r1, sp, #0
    ov39_02227D44();
    StopSE(0x0000057D, 0);
    // ldr r3, [sp]
    ov40_02230CDC(r4, 1, *((u32*)(r3 + 0xc)), *((u32*)(r3 + 4)));
    // str r1, [r5, r0]
    *((u32*)(r4 + 0xc)) = 0;
    sub_020879E0(*((u32*)(r4 + (0x6f << 4))), 0);
    ov40_0222BF80(r4, 3);
    StopSE(0);
    PlaySE(0x00000577);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    GfGfx_EngineATogglePlanes(1, 0);
    GfGfx_EngineATogglePlanes(4, 0);
    GfGfx_EngineBTogglePlanes(4, 0);
    sub_020879E0(*((u32*)(r4 + (0x6f << 4))), 0);
    sub_02087A08(*((u32*)(r4 + (0x6f << 4))), 0, 0);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // sub r0, #0xb0
    // str r2, [r5, r0]
    // sub r1, #0xb4
    // str r2, [r5, r1]
    ov40_0222BF80(r4, 7, 0);
    ov40_0222DED0(r4, 0x00000125);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    *((u32*)(r4 + 0xc)) = 0;
    *((u32*)(r4 + 0xc)) = (*((u32*)(r4 + 0xc)) + 1);
    System_GetTouchNew((*((u32*)(r4 + 0xc)) + 1));
    *((u32*)(r4 + 0xc)) = 0;
    ov40_0222DFB0(r4);
    ov40_0222BF80(r4, 3);
}





void ov40_0223512C(void) {
    *((u32*)(*((u32*)(r0 + (0x86 << 4))) + 0xc)) = 0;
    // add r2, r4, r0
    // add r0, #8
    // add r0, #0x80
    ov39_02227080(*((u32*)(r2 + (0x8d << 2))), *((u32*)(*((u32*)(r0 + (0x86 << 4))) + ((0x8d << 2) + 4))));
    // add r0, r4, r1
    // add r1, #0x20
    ov41_0224B530(*((u32*)(r4 + (0x86 << 2))));
    // str r0, [r4, r1]
    ov41_0224B5D0(*((u32*)(r4 + (0x8a << 2))), 0);
    ov40_02235940();
    ov40_022307DC(r5, 0x23, 3);
    ov40_022307DC(r5, 0x24, 7);
    GfGfx_EngineBTogglePlanes(8, 1);
    GfGfx_EngineBTogglePlanes(4, 1);
    GfGfx_EngineATogglePlanes(8, 1);
    GfGfx_EngineATogglePlanes(4, 0);
    GfGfx_EngineATogglePlanes(1, 0);
    Main_SetVBlankIntrCB(ov40_02235900, r5);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    PaletteData_LoadPaletteSlotFromHardware(*((u32*)(r5 + 0x28)), 0, 0, (2 << 8));
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    // add r0, #8
    ov40_0222DA84(r4, 0);
    ov40_0222DA00(r4, (r4 + 4), 0, 0);
    ov41_0224B5D0(*((u32*)(r4 + (0x8a << 2))), 1);
    GfGfx_EngineATogglePlanes(4, 1);
    GfGfx_EngineATogglePlanes(1, 1);
    ov40_02235C7C(r5, *((u32*)(r4 + (0x8d << 2))));
    ov40_022358C0(r5);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r5 + 0x28)), 3, 0xc, ((*((u32*)(r4 + 8)) << 0x18) >> 0x18));
    ov40_0222BF80(8);
    Thunk_G3X_Reset(*((u32*)(r4 + (0x8a << 2))));
    ov41_0224B554(*((u32*)(r4 + (0x8a << 2))));
    RequestSwap3DBuffers(0, 0);
}





void ov40_0223527C(void) {
    TouchscreenHitbox_TouchNewIsIn(ov40_022451C4);
    ov40_02230944(r5);
    ov40_0222BF80(r5, 9);
    TouchscreenHitbox_TouchNewIsIn(ov40_022451D0);
    ov40_02230944(r5);
    ov40_0222BF80(r5, 0xa);
    TouchscreenHitbox_TouchNewIsIn(ov40_022451D4);
    // add r0, #0xb0
    // str r0, [r4, r1]
    ov40_02230944(r5, (0x8d << 2));
    ov40_0222BF80(r5, 0xb);
    TouchscreenHitbox_TouchNewIsIn(ov40_022451D8);
    // str r0, [r4, r1]
    // add r1, #0xb0
    _s32_div_f(*((u32*)(r4 + (0x8d << 2))), *((u32*)(r4 + (0x8d << 2))));
    // str r1, [r4, r0]
    ov40_02230944(r5);
    ov40_0222BF80(r5, 0xb);
    Thunk_G3X_Reset(*((u32*)(r4 + (0x8a << 2))));
    ov41_0224B554(*((u32*)(r4 + (0x8a << 2))));
    RequestSwap3DBuffers(0, 0);
}





void ov40_0223534C(void) {
    // add r0, r4, r0
    // add r0, #8
    // str r1, [r4, r0]
    // str r0, [sp]
}





void ov40_02235434(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _02235452: ; jump table
    // add r0, r4, r0
    // str r1, [r4, r0]
    // add r2, r4, r0
    // add r0, #8
    // add r1, #0x1c
    // add r0, r4, r0
    // add r0, r4, r0
    // add r2, r4, r0
    // add r0, #8
    // add r0, #0x80
    // add r0, r4, r1
    // add r1, #0x20
    // str r0, [r4, r1]
    // add r0, r4, r0
    // eor r1, r0
    // add r1, #0x79
}





void ov40_02235644(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _02235662: ; jump table
    // add r0, r4, r0
    // str r1, [r4, r0]
    // add r2, r4, r0
    // add r0, #8
    // add r0, #0x80
    // add r0, r4, r1
    // add r1, #0x20
    // str r0, [r4, r1]
    // add r2, r4, r0
    // add r0, #8
    // add r1, #0x1c
    // add r0, r4, r0
    // add r0, r4, r0
    // add r0, r4, r0
}





void ov40_0223584C(void) {
    // add r0, #0xd0
    // add r4, #0xd0
}





void ov40_02235868(void) {
    // add r4, #0xd0
    FillWindowPixelBuffer(*((u32*)(r0 + (0x86 << 4))), 0);
    NewString_ReadMsgData(*((u32*)(r5 + 0x48)), r6);
    ov40_022306C0(r4, r0);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r4, 0, r5, r0);
    String_Delete(r5);
    ScheduleWindowCopyToVram(r4);
}





void ov40_022358C0(void) {
    // add r4, #0xd0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
}





void ov40_02235900(void) {
    ov41_0224B5C8(*((u32*)(*((u32*)(r0 + (0x86 << 4))) + (0x8a << 2))), *((u32*)(r0 + (0x86 << 4))));
    GF_RunVramTransferTasks();
    PaletteData_PushTransparentBuffers(*((u32*)(r4 + 0x28)));
    DoScheduledBgGpuUpdates(*((u32*)(r4 + 0x24)));
    // str r0, [r3, r1]
}





void ov40_02235940(void) {
    // and r2, r1
    // str r1, [r0]
    // add r4, #0x48
    // strh r1, [r4]
    // add r4, #0x4a
    // strh r1, [r4]
    // add r1, #0x40
    // strh r2, [r1]
    // add r0, #0x44
    // strh r1, [r0]
}





void ov40_02235994(void) {
    // and r1, r0
    // str r1, [r2]
    // and r0, r1
    // str r0, [r2]
}





void ov40_022359B4(void) {
    // sub r2, #0x2c
    // sub r2, #0x2c
}





void ov40_02235A30(void) {
    // str r0, [r4, r1]
    // str r0, [r4, r1]
    // sub r1, #0x20
    // add r0, r4, r1
    // add r1, #0x14
    // add r0, r4, r0
    // add r1, #0x14
    // add r0, r4, r0
    // add r1, #0x14
    // add r0, r4, r0
    // add r1, #0x14
    // sub r2, #0x2c
    // sub r2, #0x2c
}





void ov40_02235B10(void) {
    // add r0, r4, r0
    // add r0, r4, r0
}





void ov40_02235B4C(void) {
    // add r0, #0x10
    WindowIsInUse(*((u32*)(r0 + (0x86 << 4))));
    // str r0, [sp, #0x20]
    // add r0, #0x10
    // str r0, [sp, #0x20]
    InitWindow(r6);
    // str r0, [sp]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r1, [sp, #0x20]
    AddWindowParameterized(*((u32*)(r5 + 0x24)), 2, 0x10);
    // ldr r0, [sp, #0x20]
    FillWindowPixelBuffer(0);
    ov40_0222DAB0(0x6d);
    // str r0, [sp, #0x18]
    String_New(0xff, 0x6d);
    NewString_ReadMsgData(*((u32*)(r5 + 0x48)), 0x38);
    // str r0, [sp, #0x1c]
    String_New(0xff, 0x6d);
    sub_0202BE60(*((u32*)(r6 + (0x8b << 2))), r0);
    ov40_02230DCC(r5, r4);
    sub_0202BE98(*((u32*)(r6 + (0x8b << 2))));
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x18]
    BufferString(2, 0, r4, 0);
    // ldr r0, [sp, #0x18]
    BufferECWord(1, r5);
    // ldr r0, [sp, #0x18]
    // ldr r2, [sp, #0x1c]
    StringExpandPlaceholders(r7);
    String_CountLines(r7);
    // str r0, [sp, #0x14]
    String_GetLineN(r4, r7, 0);
    FontID_String_GetWidth(0, r4, 0);
    // sub r0, r1, r0
    // str r6, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x20]
    AddTextPrinterParameterizedWithColor(0, 0, r4, (r0 >> 1));
    // ldr r0, [sp, #0x14]
    // add r6, #0x10
    // ldr r0, [sp, #0x20]
    ScheduleWindowCopyToVram();
    String_Delete(r4);
    // ldr r0, [sp, #0x1c]
    String_Delete();
    String_Delete(r7);
    // ldr r0, [sp, #0x18]
    MessageFormat_Delete();
}





void ov40_02235C7C(void) {
    // add r0, #0x10
    WindowIsInUse(*((u32*)(r0 + (0x86 << 4))));
    // str r0, [sp, #0x20]
    // add r0, #0x10
    // str r0, [sp, #0x20]
    InitWindow(r6);
    // str r0, [sp]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r1, [sp, #0x20]
    AddWindowParameterized(*((u32*)(r5 + 0x24)), 2, 0x10);
    // ldr r0, [sp, #0x20]
    FillWindowPixelBuffer(0);
    ov40_0222DAB0(0x6d);
    // str r0, [sp, #0x18]
    String_New(0xff, 0x6d);
    NewString_ReadMsgData(*((u32*)(r5 + 0x48)), 0x38);
    // str r0, [sp, #0x1c]
    String_New(0xff, 0x6d);
    sub_0202BE60(*((u32*)(r6 + (0x8e << 2))), r0);
    ov40_02230DCC(r5, r4);
    sub_0202BE98(*((u32*)(r6 + (0x8e << 2))));
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x18]
    BufferString(2, 0, r4, 0);
    // ldr r0, [sp, #0x18]
    BufferECWord(1, r5);
    // ldr r0, [sp, #0x18]
    // ldr r2, [sp, #0x1c]
    StringExpandPlaceholders(r7);
    String_CountLines(r7);
    // str r0, [sp, #0x14]
    String_GetLineN(r4, r7, 0);
    FontID_String_GetWidth(0, r4, 0);
    // sub r0, r1, r0
    // str r6, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x20]
    AddTextPrinterParameterizedWithColor(0, 0, r4, (r0 >> 1));
    // ldr r0, [sp, #0x14]
    // add r6, #0x10
    // ldr r0, [sp, #0x20]
    ScheduleWindowCopyToVram();
    String_Delete(r4);
    // ldr r0, [sp, #0x1c]
    String_Delete();
    String_Delete(r7);
    // ldr r0, [sp, #0x18]
    MessageFormat_Delete();
}





void ov40_02235DAC(void) {
    // str r0, [sp, #8]
    // ldr r1, [sp, #8]
    // add r2, sp, #0xc
    ov40_0222DD68(0x6d, ov40_02245CD4);
    // str r0, [sp, #4]
    Save_Pokedex_Get(*((u32*)(r5 + (0x83 << 4))));
    // str r0, [sp]
    // ldr r0, [sp, #4]
    // add r5, r0, r1
    // ldr r0, [sp]
    Pokedex_CheckMonSeenFlag(*((u16*)r5));
    // strh r0, [r5]
    // ldr r0, [sp, #4]
    // add r2, r0, r1
    // str r0, [sp, #8]
    // ldr r0, [sp, #4]
    Heap_Free(1, *((u16*)r2), (r2 + 2));
    // ldr r0, [sp, #8]
}





void ov40_02235E34(void) {
    // str r0, [sp]
    // add r2, r4, r2
    ov40_0222DD68(0x6d, 0, (0x76 << 2));
    // str r0, [r4, r2]
    // add r2, r4, r2
    ov40_0222DD68(0x6d, 0, ((0x77 << 2) - 4));
    // str r0, [sp, #8]
    Save_Pokedex_Get(*((u32*)(r5 + (0x83 << 4))));
    // str r0, [sp, #4]
    // ldr r7, [sp]
    // str r1, [r4, r0]
    // ldr r0, [sp, #8]
    // add r5, r0, r1
    // ldr r0, [sp, #4]
    Pokedex_CheckMonSeenFlag(r7, *((u16*)r5));
    // strh r0, [r5]
    // str r1, [r4, r0]
    // ldr r1, [sp]
    // ldr r1, [sp, #8]
    // add r2, r1, r2
    // strh r1, [r5, r3]
    // ldr r1, [sp]
    // str r1, [sp]
    // ldr r1, [sp, #8]
    // add r5, r1, r6
    // strh r3, [r2, r6]
    // ldr r0, [sp, #8]
    Heap_Free(((0 + 1) + 1), ((0x77 << 2) - 4), *((u32*)(r4 + ((0x77 << 2) - 4))), *((u16*)*((u32*)(r4 + (0x77 << 2)))));
    Heap_Alloc(0x6d, (*((u32*)(r4 + (0x75 << 2))) << 4));
    // str r0, [r4, r2]
    // sub r2, #0x14
    MI_CpuFill8(*((u32*)(r4 + (0x7a << 2))), 0, (*((u32*)(r4 + (0x7a << 2))) << 4));
    // sub r0, #0x14
    // str r1, [r6, r3]
    // add r6, r6, r3
    *((u32*)(*((u32*)(r4 + (0x7a << 2))) + 4)) = *((u16*)(*((u32*)(r4 + (0x77 << 2))) + 0));
    // add r3, #0x10
    NewMsgDataFromNarc(0, 0x1b, 0xed, 0x6d);
    // str r0, [r4, r1]
    // str r2, [r4, r0]
}





void ov40_02235FA0(void) {
    // str r1, [r4, r0]
}





void ov40_02235FD0(void) {
    ov40_02235DAC(r2, r0);
    PlaySE(0x0000057C);
    ov40_02235E34(r4, r5);
}





void ov40_02235FFC(void) {
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x28]
    // ldr r0, [sp, #0x14]
    // add r4, #0xd0
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x24]
    // sub r0, r1, r0
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x20]
    // sub r0, r1, r0
    InitWindow(*((u32*)(1 + (0x86 << 4))), (*((u8*)(ov40_02245708 + 1)) >> 3));
    // ldr r0, [sp, #0x20]
    // str r0, [sp]
    // ldr r0, [sp, #0x1c]
    // str r0, [sp, #4]
    // str r6, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x28]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x14]
    // ldr r3, [sp, #0x24]
    AddWindowParameterized(*((u32*)(((0xe << 0x10) >> 0x10) + 0x24)), r4, 6);
    FillWindowPixelBuffer(r4, 0);
    // ldr r0, [sp, #0x14]
    // add r1, #0x44
    NewString_ReadMsgData(*((u32*)(r0 + 0x48)), r7);
    // str r0, [sp, #0x2c]
    // ldr r1, [sp, #0x2c]
    ov40_022306C0(r4);
    // sub r1, #0x10
    // str r0, [sp, #0x30]
    // add r0, r1, r0
    // asr r0, r0, #1
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x14]
    ov40_02235DAC(((r6 << 3) >> 0x1f), r7);
    // ldr r0, [sp, #0x18]
    // ldr r2, [sp, #0x2c]
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r3, [sp, #0x30]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r4, 0);
    // ldr r0, [sp, #0x18]
    // ldr r2, [sp, #0x2c]
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r3, [sp, #0x30]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r4, 0);
    ScheduleWindowCopyToVram(r4);
    // ldr r0, [sp, #0x2c]
    String_Delete();
    // ldr r0, [sp, #0x1c]
    // ldr r0, [sp, #0x28]
    // add r0, r0, r1
    // str r0, [sp, #0x28]
    // add r4, #0x10
}





void ov40_0223610C(void) {
    // add r5, #0xd0
    // add r5, #0x10
}





void ov40_02236130(void) {
    // add r0, #0x10
    // add r0, #0x10
    // add r4, #0x10
}





void ov40_02236158(void) {
    // bx lr
    // TODO: decompile
}





void ov40_0223615C(void) {
    // add r1, r4, r1
    // str r0, [r4, r1]
}





void ov40_02236184(void) {
    sub_020314A4(0x6d, (0x86 << 4));
    // str r0, [r4, r1]
    // add r2, r4, r0
    ov39_022271C0(*((u32*)(r2 + (0xe3 << 2))), *((u32*)(r4 + 0x00002ED8)));
}





void ov40_022361B0(void) {
    // mov r1, #0x86
    // lsl r1, r1, #4
    // ldr r1, [r0, r1]
    // ldr r0, _022361C0 ; =0x00002ED8
    // ldr r3, _022361C4 ; =sub_020314BC
    // ldr r0, [r1, r0]
    // bx r3
    // nop
    // _022361C0: .word 0x00002ED8
    // _022361C4: .word sub_020314BC
    // TODO: decompile
}





void ov40_022361C8(void) {
    // mov r2, #0
    // ldrh r1, [r0, #0x28]
    // cmp r1, #0
    // beq _022361D4
    // mov r0, #1
    // bx lr
    // add r2, r2, #1
    // add r0, r0, #2
    // cmp r2, #0x1e
    // blt _022361CA
    // mov r0, #0
    // bx lr
    // TODO: decompile
}





void ov40_022361E0(void) {
    // add r3, r0, r1
    // str r2, [r0, r1]
    // str r3, [r0, r1]
}





void ov40_02236230(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0223624A: ; jump table
    ov40_02230944(r2, (0x86 << 4));
    // str r1, [r4, r0]
    ov40_0222BF80(r5, 4);
    ov40_02230944(r5);
    // str r1, [r4, r0]
    _s32_div_f(*((u32*)(r4 + (0x1a << 4))), 0x12);
    // str r1, [r4, r0]
    ov40_0222BF80(r5, 4);
    ov40_02230944(r5);
    ov40_0222BF80(r5, 9);
    ov40_02230944(r5);
    ov40_022361C8((r4 + 4));
    ov40_0222BF80(r5, 5);
    ov40_02237030(r5, 0x0000010F);
}





void ov40_022362E4(void) {
    // str r5, [r6, r0]
}





void ov40_02236320(void) {
    // str r5, [r6, r0]
}





void ov40_0223635C(void) {
    ov40_02230944(r2, (0x86 << 4));
    ov40_0222BF80(r5, 7);
    ov40_0222BF80(r5, 8);
    ov40_02230944(r5);
    ov40_0222BF80(r5, 9);
    ov40_02230944(r5);
    ov40_0222BF80(r5, 6);
}





void ov40_022363BC(void) {
    ov40_02230944(r2, (0x86 << 4));
    // str r1, [r4, r0]
    _s32_div_f(*((u32*)(r4 + (0x1b << 4))), 0x1e);
    // str r1, [r4, r0]
    ov40_022361E0(r4);
    _s32_div_f(*((u32*)(r4 + (0x1b << 4))), 6);
    // str r1, [r4, r0]
    _s32_div_f(*((u32*)(r4 + (0x1b << 4))), 6);
    // str r0, [r4, r2]
    // add r1, #0x6e
    // add r2, #0x34
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    sub_020878B8(*((u32*)(r5 + (0x6f << 4))), ((0x18 * *((u32*)(r4 + (0x00002F6C - 4)))) << 0x10), ((0x16 * *((u32*)(r4 + 0x00002F6C))) << 0x10), *((u32*)(r4 + 0x00002F6C)));
    ov40_02230964(r5, 1);
    ov40_02237564(r5);
    ov40_02237474(r5);
    ov40_02230964(r5, 0);
    ov40_022371E4(r5, *((u32*)(r4 + (0x1b << 4))));
    // add r1, r4, r1
    // sub r0, #0x58
    // lsl r1, r2
    ov40_022371D4(*((u32*)(r4 + (0x1b << 4))), 1, *((u32*)(r4 + (0x1b << 4))));
    // sub r1, #0x54
    // add r0, r4, r0
    // add r2, r4, r2
    PlayCry(*((u16*)((*((u32*)(r4 + (0x1b << 4))) << 1) + 0x2c)), *((u8*)(*((u32*)(r4 + (0x1b << 4))) + (0x1b << 4))), *((u32*)(r4 + (0x1b << 4))));
    ov40_02230944(r5);
    sub_020879E0(*((u32*)(r5 + (0x6f << 4))), 0);
    sub_02087A08(*((u32*)(r5 + (0x6f << 4))), 0, 0);
    ov40_0222BF80(r5, 0xb);
}





void ov40_022364D0(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // sub r0, #0x2c
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // add r1, r4, r1
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // sub r0, #0x2c
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // add r1, r4, r1
}





void ov40_02236534(void) {
    // add r0, r4, r0
    // add r0, r4, r0
}





void ov40_0223655C(void) {
    // str r2, [r0, r1]
}





void ov40_02236578(void) {
    // str r0, [sp]
}





void ov40_022365A0(void) {
    Heap_Alloc(0x6d, 0x00002F70);
    memset(0, 0x00002F70);
    // str r4, [r5, r0]
    BgClearTilemapBufferAndCommit(*((u32*)(r5 + 0x24)), 2);
    BgClearTilemapBufferAndCommit(*((u32*)(r5 + 0x24)), 3);
    BgClearTilemapBufferAndCommit(*((u32*)(r5 + 0x24)), 6);
    BgClearTilemapBufferAndCommit(*((u32*)(r5 + 0x24)), 7);
    SaveArray_PCStorage_Get(*((u32*)(r5 + (0x83 << 4))));
    // str r0, [r4]
    ov40_02236578(*((u32*)(r5 + (0x83 << 4))), *((u32*)r4), *((u32*)(r4 + (0x1a << 4))), (r4 + 4));
    ov40_0223655C(r4);
    // add r0, r4, r1
    // add r1, r4, r1
    ov40_0222D9E8(((0x69 << 2) + 4), 0);
    // str r0, [sp]
    TouchHitboxController_Create(ov40_022452CC, 4, ov40_02236230, r5);
    // str r0, [r4, r1]
    // str r0, [sp]
    TouchHitboxController_Create(ov40_022452F4, 7, ov40_022362E4, r5);
    // str r0, [r4, r1]
    // str r0, [sp]
    TouchHitboxController_Create(ov40_022452F4, 7, ov40_02236320, r5);
    // str r0, [r4, r1]
    // str r0, [sp]
    TouchHitboxController_Create(ov40_02245284, 3, ov40_0223635C, r5);
    // str r0, [r4, r1]
    // str r0, [sp]
    TouchHitboxController_Create(ov40_0224526C, 2, ov40_022363BC, r5);
    // str r0, [r4, r1]
    sub_020314A4(0x6d, (0xd << 6));
    // str r0, [r4, r1]
    sub_020314C4(*((u32*)(r4 + (0xe1 << 2))), *((u32*)(r5 + (0x83 << 4))));
    ov40_0222BF80(r5, 1);
}





void ov40_022366CC(void) {
    // add r0, r4, r0
    // str r0, [sp]
    // str r0, [sp]
    // str r0, [sp]
}





void ov40_022367B8(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _022367D8: ; jump table
    // str r2, [sp]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r5, r1
    // add r1, r5, r1
    ov40_0222D980(1, ((0x69 << 2) + 4), 8, 0x12);
    ov40_02230964(r4, 1);
    ov40_02237564(r4);
    ov40_02237410(r4);
    ov40_022371A0(r4);
    ov40_02230964(r4, 0);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // add r0, r5, r1
    // add r1, r5, r1
    ov40_0222DA00((*((u32*)(r4 + 8)) + 1), ((0x69 << 2) + 4), 1, 1);
    ov40_02236578(*((u32*)(r4 + (0x83 << 4))), *((u32*)r5), *((u32*)(r5 + (0x1a << 4))), (r5 + 4));
    ov40_0223655C(r5);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    ov40_02230964((*((u32*)(r4 + 8)) + 1), 1);
    ov40_02237644(r4);
    ov40_02237548(r4, 1);
    ov40_022373E4(r4, 0);
    ov40_02230964(r4, 0);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // add r0, r5, r1
    // add r1, r5, r1
    ov40_0222DA00((*((u32*)(r4 + 8)) + 1), ((0x69 << 2) + 4), 0, 1);
    ov40_022371E4(r4, *((u32*)(r5 + (0x1b << 4))));
    ov40_02237144(r4);
    ov40_02237030(r4, 0x0000010E);
    ov40_02237548(r4, 0);
    ov40_022373E4(r4, 1);
    GfGfx_EngineATogglePlanes(1, 1);
    // strh r1, [r0]
    ov40_0222BF80(r4, 3);
}





void ov40_022368EC(void) {
    // sub r2, #0x2c
    // sub r2, #0x2c
}





void ov40_02236968(void) {
    sub_020879E0(*((u32*)(r0 + 0x000006F4)), 0);
    // add r0, r4, r0
    ov40_0222DA84((0x6b << 2), 1);
    // add r0, r4, r1
    // add r1, r4, r1
    ov40_0222DA00(((0x69 << 2) + 4), 1, 2);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnDataFromOpenNarc(*((u32*)(r5 + 0x14)), 0x4f, *((u32*)(r5 + 0x24)), 7);
    ov40_02236F38(r5);
    ov40_022368EC(r5, 1);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r5 + 0x28)), 3, 0xc, ((*((u32*)(r4 + (0x6b << 2))) << 0x18) >> 0x18));
    // add r0, r4, r0
    ov40_0222DA84((0x6b << 2), 0);
    // add r0, r4, r1
    // add r1, r4, r1
    ov40_0222DA00(((0x69 << 2) + 4), 0, 2);
    GfGfx_EngineBTogglePlanes(4, 1);
    ov40_0222BF80(r5, 6);
    ov40_02237030(r5, (0x11 << 4));
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r5 + 0x28)), 3, 0xc, ((*((u32*)(r4 + (0x6b << 2))) << 0x18) >> 0x18));
}





void ov40_02236A58(void) {
}





void ov40_02236A70(void) {
    ov40_0223D5CC((0x86 << 4));
    // add r1, r0, r0
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _02236A9E: ; jump table
    ov40_02236FE0(r4, (*((u16*)(r1 + 6)) << 0x10));
    sub_020879E0(*((u32*)(r4 + 0x000006F4)), 0);
    GfGfx_EngineBTogglePlanes(4, 0);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // str r2, [sp]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r5, r1
    // add r1, r5, r1
    ov40_0222D980(1, ((0x69 << 2) + 4), 8, 0x12);
    ov40_02237564(r4);
    ov40_02230964(r4, 1);
    ov40_02237410(r4);
    ov40_02230964(r4, 0);
    ov40_022371A0(r4);
    GfGfx_EngineATogglePlanes(4, 0);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // add r0, r5, r0
    ov40_0222DA84((0x6b << 2), 1);
    // add r0, r5, r1
    // add r1, r5, r1
    ov40_0222DA00(((0x69 << 2) + 4), 1, 0);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 3, 0xc, ((*((u32*)(r5 + (0x6b << 2))) << 0x18) >> 0x18));
    *((u32*)(r4 + 8)) = (r0 + 1);
    ov40_0223077C(r4, *((u32*)(r4 + (0x6f << 4))), 0x80, 0x60);
    sub_020879E0(*((u32*)(r4 + (0x6f << 4))), 1);
    sub_02087A08(*((u32*)(r4 + (0x6f << 4))), 0x18, 0x18);
    ov40_0222DED0(r4, (0x12 << 4));
    PlaySE(0x0000057D);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    ov40_0223D540(r4);
    // str r1, [sp]
    ov39_02227420(*((u32*)(r5 + (0xe << 6))), *((u32*)(r5 + ((0xe << 6) + 4))), *((u32*)r5));
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    ov40_0222DFB0(r4);
    ov40_0223D540(r4);
    // add r1, sp, #0xc
    ov39_02227D44();
    StopSE(0x0000057D, 0);
    // ldr r3, [sp, #0xc]
    ov40_02230CDC(r4, 2, *((u32*)(r3 + 0xc)), *((u32*)(r3 + 4)));
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    StopSE((*((u32*)(r4 + 8)) + 1), 0);
    ov40_0222FB28(r4, 0x25);
    ov40_0222DD8C(r4, 1);
    PlaySE(0x00000577);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    sub_020879E0(*((u32*)(r4 + (0x6f << 4))), 0);
    sub_02087A08(*((u32*)(r4 + (0x6f << 4))), 0, 0);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    ov40_0222BF80(r4, 0xa);
}





void ov40_02236C64(void) {
    sub_020879E0(*((u32*)(r0 + 0x000006F4)), 0);
    ov40_02236FE0(r5);
    GfGfx_EngineBTogglePlanes(4, 0);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    // add r0, r4, r0
    ov40_0222DA84((0x6b << 2), 1);
    // add r0, r4, r1
    // add r1, r4, r1
    ov40_0222DA00(((0x69 << 2) + 4), 1, 2);
    ov40_022368EC(r5, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnDataFromOpenNarc(*((u32*)(r5 + 0x14)), 0x4d, *((u32*)(r5 + 0x24)), 7);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r5 + 0x28)), 3, 0xc, ((*((u32*)(r4 + (0x6b << 2))) << 0x18) >> 0x18));
    // add r0, r4, r0
    ov40_0222DA84((0x6b << 2), 0);
    // add r0, r4, r1
    // add r1, r4, r1
    ov40_0222DA00(((0x69 << 2) + 4), 0, 2);
    ov40_02237030(r5, 0x0000010E);
    ov40_0222BF80(r5, 3);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r5 + 0x28)), 3, 0xc, ((*((u32*)(r4 + (0x6b << 2))) << 0x18) >> 0x18));
}





void ov40_02236D60(void) {
    // str r2, [sp]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r4, r1
    // add r1, r4, r1
    // add r0, r4, r0
    // add r0, r4, r1
    // add r1, r4, r1
    // str r0, [sp]
}





void ov40_02236E18(void) {
    // str r2, [sp]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r4, r1
    // add r1, r4, r1
    // add r0, r4, r0
    // add r0, r4, r1
    // add r1, r4, r1
    // str r0, [sp]
}





void ov40_02236EB4(void) {
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x14]
    // add r0, #0xb3
    // add r4, r1, r0
    InitWindow(r4, *((u32*)(0 + (0x86 << 4))));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x14]
    AddWindowParameterized(*((u32*)(((r6 << 0x10) >> 0x10) + 0x24)), r4, 2, *((u8*)r5));
    FillWindowPixelBuffer(r4, ((*((u32*)r7) << 0x18) >> 0x18));
    ScheduleWindowCopyToVram(r4);
    // add r4, #0x10
    // add r6, r6, r0
    // ldr r0, [sp, #0x18]
    // str r0, [sp, #0x18]
}





void ov40_02236F38(void) {
    // str r0, [sp, #0x14]
    // add r4, r1, r0
    InitWindow(r4, *((u32*)(r0 + (0x86 << 4))));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x14]
    AddWindowParameterized(*((u32*)(((r6 << 0x10) >> 0x10) + 0x24)), r4, 6, *((u8*)r5));
    // ldr r0, [sp, #0x14]
    // add r1, #0x3c
    NewString_ReadMsgData(*((u32*)(r0 + 0x48)), r7);
    // str r0, [sp, #0x18]
    // ldr r1, [sp, #0x18]
    ov40_022306C0(r4);
    // str r0, [sp, #0x1c]
    FillWindowPixelBuffer(r4, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x18]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r3, [sp, #0x1c]
    AddTextPrinterParameterizedWithColor(r4, 0);
    ScheduleWindowCopyToVram(r4);
    // ldr r0, [sp, #0x18]
    String_Delete();
    // add r4, #0x10
    // add r6, r6, r0
}





void ov40_02236FE0(void) {
    // add r5, r1, r0
    // add r5, #0x10
}





void ov40_02237008(void) {
    // add r5, r1, r0
    // add r5, #0x10
}





void ov40_02237030(void) {
    NewString_ReadMsgData(*((u32*)(r0 + 0x48)), (0x86 << 4));
    // add r0, r5, r6
    FillWindowPixelBuffer(0xcc);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r5, r6
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(0x000F0D00, 0, r4, 0);
    // add r0, r5, r6
    ScheduleWindowCopyToVram();
    String_Delete(r4);
}





void ov40_0223707C(void) {
    // add r1, #0x1c
    NewString_ReadMsgData(*((u32*)(r0 + 0x48)), *((u32*)(*((u32*)(r0 + (0x86 << 4))) + (0xe << 6))));
    // str r0, [sp, #0x10]
    String_New(0xff, 0x6d);
    String_New(0xff, 0x6d);
    ov40_0222DAB0(0x6d);
    // str r0, [sp, #0x14]
    // add r2, r4, r1
    CopyU16ArrayToString(r6, *((u32*)(r2 + (0xe3 << 2))));
    ov40_02230DCC(r5, r6);
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x14]
    BufferString(2, 0, r6, 0);
    // ldr r0, [sp, #0x14]
    // ldr r2, [sp, #0x10]
    StringExpandPlaceholders(r7);
    // add r0, r4, r0
    FillWindowPixelBuffer((0x75 << 2), 0xcc);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r4, r0
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor((0x75 << 2), 0, r7, 0);
    // add r0, r4, r0
    ScheduleWindowCopyToVram((0x75 << 2));
    // ldr r0, [sp, #0x10]
    String_Delete();
    String_Delete(r6);
    String_Delete(r7);
    // ldr r0, [sp, #0x14]
    MessageFormat_Delete();
}





void ov40_02237144(void) {
    String_New(0xff, 0x6d);
    CopyU16ArrayToString((r5 + 4));
    // add r0, r5, r6
    FillWindowPixelBuffer(0);
    // add r0, r5, r6
    ov40_022306C0(r4);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r5, r6
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(0x000F0100, 0, r4, r0);
    // add r0, r5, r6
    ScheduleWindowCopyToVram();
    String_Delete(r4);
}





void ov40_022371A0(void) {
    // add r4, r1, r0
    FillWindowPixelBuffer(r4, ((*((u32*)ov40_02245290) << 0x18) >> 0x18));
    ScheduleWindowCopyToVram(r4);
    // add r4, #0x10
}





void ov40_022371D4(void) {
    // and r0, r1
}





void ov40_022371E4(void) {
    // add r0, r4, r7
    FillWindowPixelBuffer(0);
    // add r0, r4, r0
    // add r0, r4, r7
    ScheduleWindowCopyToVram((r5 << 1));
    String_New(0xff, 0x6d);
    // sub r2, #0x5c
    // add r2, #0x58
    // lsl r1, r2
    ov40_022371D4(*((u32*)(r4 + r7)), 1, *((u32*)(r4 + r7)));
    // add r6, #0x3a
    // add r2, sp, #0x10
    GetSpeciesNameIntoArray(r7, 0x6d);
    // add r1, sp, #0x10
    CopyU16ArrayToString(r5);
    // add r0, r4, r7
    ov40_022306C0(r5);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r4, r7
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(0x000F0D00, 0, r5, r0);
    // add r0, r4, r7
    ScheduleWindowCopyToVram();
    String_Delete(r5);
}





void ov40_02237284(void) {
    // str r1, [sp, #0x24]
    // str r1, [sp, #0x20]
    // str r1, [sp, #0x1c]
    sub_02074490(*((u32*)(r0 + 0x1c)));
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r2, [sp, #0x20]
    // str r0, [sp, #0x14]
    // ldr r3, [sp, #0x1c]
    SpriteSystem_LoadPaletteBuffer(r4, 2);
    sub_0207449C();
    // str r0, [sp]
    // ldr r1, [sp, #0x1c]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x20]
    SpriteSystem_LoadCellResObj(0x000186A0, 0x14, r0);
    sub_020744A8();
    // str r0, [sp]
    // ldr r1, [sp, #0x1c]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x20]
    SpriteSystem_LoadAnimResObj(0x000186A0, 0x14, r0);
    // ldr r7, [sp, #0x24]
    // ldr r0, [sp, #0x24]
    // add r1, r0, r4
    // ldr r1, [sp, #0x24]
    // str r0, [sp, #0x18]
    // lsl r1, r4
    ov40_022371D4(*((u32*)(r1 + (0x56 << 2))), 1);
    // str r0, [sp, #0x28]
    // ldr r1, [sp, #0x28]
    // ldr r2, [sp, #0x18]
    GetMonIconNaixEx(r6);
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r1, [sp, #0x1c]
    // add r0, r4, r0
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x20]
    SpriteSystem_LoadCharResObjAtEndWithHardwareMappingType(0x000186A0, 0x14, r0);
    _s32_div_f(r4, 6);
    // add r2, #0x6e
    // add r0, sp, #0x2c
    // strh r2, [r0]
    _s32_div_f(r4, 6, (r1 * 0x18));
    // add r1, #0x30
    // add r0, sp, #0x2c
    *((u16*)(r0 + 2)) = (0x16 * r0);
    *((u16*)(r0 + 4)) = 0;
    *((u16*)(r0 + 6)) = 0;
    // str r0, [sp, #0x34]
    // str r0, [sp, #0x38]
    // str r0, [sp, #0x3c]
    // str r0, [sp, #0x58]
    // str r0, [sp, #0x5c]
    // add r2, sp, #0x2c
    // add r0, r4, r0
    // str r0, [sp, #0x40]
    // str r0, [sp, #0x44]
    // str r0, [sp, #0x48]
    // str r0, [sp, #0x4c]
    // str r0, [sp, #0x50]
    // str r0, [sp, #0x54]
    // ldr r0, [sp, #0x20]
    // ldr r1, [sp, #0x1c]
    SpriteSystem_NewSprite((0 - 1), 0);
    // str r0, [r5, r1]
    // ldr r1, [sp, #0x18]
    // ldr r2, [sp, #0x28]
    GetMonIconPaletteEx(r6, (0xad << 2));
    ManagedSprite_SetPaletteOverrideOffset(*((u32*)(r5 + (0xad << 2))), (r0 + 4));
    ManagedSprite_SetAnim(*((u32*)(r5 + (0xad << 2))), 1);
    // sub r1, r1, r4
    ManagedSprite_SetDrawPriority(*((u32*)(r5 + (0xad << 2))), 0x1e);
}





void ov40_022373E4(void) {
    // ldr r4, [r0, r1]
    // ldr r0, [r5, r0]
}





void ov40_02237410(void) {
    SpriteManager_UnloadPlttObjById(*((u32*)(r0 + 0x1c)), 0x000186A0);
    SpriteManager_UnloadCellObjById(*((u32*)(r7 + 0x1c)), 0x000186A0);
    SpriteManager_UnloadAnimObjById(*((u32*)(r7 + 0x1c)), 0x000186A0);
    // add r1, r6, r1
    SpriteManager_UnloadCharObjById(*((u32*)(r7 + 0x1c)), 0x000186A0);
    Sprite_DeleteAndFreeResources(*((u32*)(r5 + (0xad << 2))));
    // str r1, [r5, r0]
}





void ov40_02237474(void) {
    // str r0, [sp, #0x10]
    // add r1, r4, r1
    // add r3, #0xe0
    // add r5, r4, r2
    // str r3, [sp, #0x14]
    // sub r3, #0x54
    // add r3, r4, r3
    // str r1, [r4, r0]
    // sub r0, #0x58
    // lsl r1, r2
    ov40_022371D4(*((u32*)(*((u32*)(r0 + (0x86 << 4))) + (0xcb << 2))), 1, *((u32*)(*((u32*)(r0 + (0x86 << 4))) + (0x1b << 4))), (*((u32*)(*((u32*)(r0 + (0x86 << 4))) + (0x1b << 4))) << 1));
    AllocAndLoadMonPersonal(0x000001EE, 0x6d);
    // str r0, [sp, #0x18]
    GetGenderBySpeciesAndPersonality(r5, r6);
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x14]
    CalcShininessByOtIdAndPersonality(r6);
    // str r0, [sp, #0x20]
    // ldr r1, [sp, #0x1c]
    // str r6, [sp]
    GetMonPicHeightBySpeciesGenderForm(r5, 2, ((r7 << 0x18) >> 0x18));
    // ldr r0, [sp, #0x20]
    // ldr r2, [sp, #0x1c]
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, sp, #0x24
    // str r6, [sp, #8]
    GetMonSpriteCharAndPlttNarcIdsEx(((r7 << 0x18) >> 0x18), r5, 2);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x10]
    // add r1, sp, #0x24
    PokepicManager_CreatePokepic(*((u32*)(0 + 0x64)), 0x2a, 0x5b);
    // str r0, [r4, r1]
    // ldr r0, [sp, #0x18]
    FreeMonPersonal((0xcb << 2));
}





void ov40_02237548(void) {
}





void ov40_02237564(void) {
}





void ov40_0223757C(void) {
    // sub r0, #0x30
    SaveArray_PCStorage_Get(*((u32*)(r0 + (0x86 << 4))));
    // strb r1, [r4, r0]
    // strb r1, [r4, r0]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r1, r2, r1
    // add r1, #0x8a
    GfGfxLoader_LoadCharDataFromOpenNarc(*((u32*)(r5 + 0x14)), (*((u8*)(r4 + 0x0000017A)) << 1), *((u32*)(r5 + 0x24)), 3);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r1, r2, r1
    // add r1, #0x8c
    GfGfxLoader_LoadScrnDataFromOpenNarc(*((u32*)(r5 + 0x14)), (*((u8*)(r4 + 0x0000017A)) << 1), *((u32*)(r5 + 0x24)), 3);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r2, #0xbb
    // add r2, r3, r2
    // add r2, #0x8b
    PaletteData_LoadFromNarc(*((u32*)(r5 + 0x28)), 0xbf, (*((u8*)(r4 + 0xbf)) << 1), 0x6d);
    ov40_02237474(r5);
    ov40_02237284(r5);
    ov40_022371E4(r5, *((u32*)(r4 + (0x1b << 4))));
    ov40_02237144(r5);
    ov40_02237030(r5, 0x0000010E);
}





void ov40_02237644(void) {
    // sub r0, #0x30
    SaveArray_PCStorage_Get(*((u32*)(r0 + (0x86 << 4))));
    // strb r2, [r4, r1]
    // sub r1, #0x18
    PCStorage_IsBonusWallpaperUnlocked(*((u8*)(r4 + 0x0000017A)), 0);
    // strb r1, [r4, r0]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r1, r2, r1
    // add r1, #0x8a
    GfGfxLoader_LoadCharDataFromOpenNarc(*((u32*)(r5 + 0x14)), (*((u8*)(r4 + 0x0000017A)) << 1), *((u32*)(r5 + 0x24)), 3);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r1, r2, r1
    // add r1, #0x8c
    GfGfxLoader_LoadScrnDataFromOpenNarc(*((u32*)(r5 + 0x14)), (*((u8*)(r4 + 0x0000017A)) << 1), *((u32*)(r5 + 0x24)), 3);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r2, #0xbb
    // add r2, r3, r2
    // add r2, #0x8b
    PaletteData_LoadFromNarc(*((u32*)(r5 + 0x28)), 0xbf, (*((u8*)(r4 + 0xbf)) << 1), 0x6d);
    ov40_02237474(r5);
    ov40_02237284(r5);
}





void ov40_022376FC(void) {
    ov40_0222C710(2);
    ov40_02230964(r5, 1);
    ov40_02236EB4(r5);
    ov40_0223757C(r5);
    ov40_02237548(r5, 1);
    ov40_022373E4(r5, 0);
    ov40_02230964(r5, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharDataFromOpenNarc(*((u32*)(r5 + 0x14)), 0x3e, *((u32*)(r5 + 0x24)), 7);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnDataFromOpenNarc(*((u32*)(r5 + 0x14)), 0x4d, *((u32*)(r5 + 0x24)), 7);
    GfGfx_EngineATogglePlanes(8, 1);
    GfGfx_EngineBTogglePlanes(8, 1);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    // add r0, r4, r1
    // add r1, r4, r1
    ov40_0222DA00((*((u32*)(r5 + 8)) + 1), ((0x69 << 2) + 4), 0, 0);
    ov40_02237548(r5, 0);
    ov40_022373E4(r5, 1);
    GfGfx_EngineATogglePlanes(1, 1);
    GfGfx_EngineATogglePlanes(4, 1);
    // strh r1, [r0]
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    // add r0, r4, r0
    ov40_0222DA84((0x6b << 2), 0);
    // add r0, #0x14
    // str r1, [r4, r0]
    ov40_0222BF80(r5, 3);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r5 + 0x28)), 3, 0xc, ((*((u32*)(r4 + (0x6b << 2))) << 0x18) >> 0x18));
}





void ov40_02237820(void) {
}





void ov40_02237838(void) {
    ov40_02237410(*((u32*)(r0 + 8)));
    ov40_02237564(r5);
    ov40_02237008(r5);
    ov40_02236534(r5);
    sub_020878B0(*((u32*)(r5 + 0x000006F4)), 0);
    sub_020879E0(*((u32*)(r5 + 0x000006F4)), 0);
    ov40_0222FB90(r5, 1);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    ov40_0222FBB4((*((u32*)(r5 + 8)) + 1));
    TouchHitboxController_Destroy(*((u32*)(r7 + (0x33 << 4))));
    // add r0, r7, r0
    ov40_0222DAA8((0x6b << 2));
    ov40_0222D88C(r5);
    BgClearTilemapBufferAndCommit(*((u32*)(r5 + 0x24)), 2);
    BgClearTilemapBufferAndCommit(*((u32*)(r5 + 0x24)), 6);
    BgClearTilemapBufferAndCommit(*((u32*)(r5 + 0x24)), 3);
    BgClearTilemapBufferAndCommit(*((u32*)(r5 + 0x24)), 7);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    // add r0, r7, r0
    ov40_0222DA84((0x6b << 2), 0);
    ov40_0222DD08(r5);
    // add r0, r7, r0
    ov40_0222DAA8((0x6b << 2));
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r5 + 0x28)), 2, 0xc, 0x10);
    ov40_0222BF64(r5, 1, 1, *((u32*)(r5 + 0x10)));
    ov40_0222BF80(r5, 5);
    sub_020314BC(*((u32*)(r7 + (0xe1 << 2))));
    Heap_Free(r7);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r5 + 0x28)), 1, 2, ((*((u32*)(r7 + (0x6b << 2))) << 0x18) >> 0x18));
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r5 + 0x28)), 3, 0xc, ((*((u32*)(r7 + (0x6b << 2))) << 0x18) >> 0x18));
}





void ov40_02237978(void) {
    ov40_02230964(1);
    ov40_0222C710(r5, 2);
    ov40_02236EB4(r5);
    ov40_02237030(r5, 0x00000113);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharDataFromOpenNarc(*((u32*)(r5 + 0x14)), 0x3e, *((u32*)(r5 + 0x24)), 7);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnDataFromOpenNarc(*((u32*)(r5 + 0x14)), 0x4f, *((u32*)(r5 + 0x24)), 7);
    ov40_02236F38(r5);
    ov40_022368EC(r5, 1);
    ov40_02230964(r5, 0);
    GfGfx_EngineATogglePlanes(8, 1);
    GfGfx_EngineBTogglePlanes(8, 1);
    GfGfx_EngineATogglePlanes(4, 0);
    GfGfx_EngineBTogglePlanes(4, 0);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    // add r0, r4, r1
    // add r1, r4, r1
    ov40_0222DA00((*((u32*)(r5 + 8)) + 1), ((0x69 << 2) + 4), 0, 0);
    GfGfx_EngineATogglePlanes(1, 1);
    GfGfx_EngineATogglePlanes(4, 1);
    GfGfx_EngineBTogglePlanes(4, 1);
    // strh r1, [r0]
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    // add r0, r4, r0
    ov40_0222DA84((0x6b << 2), 0);
    // add r0, #0xc
    // str r1, [r4, r0]
    ov40_0222BF80(r5, 3);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r5 + 0x28)), 3, 0xc, ((*((u32*)(r4 + (0x6b << 2))) << 0x18) >> 0x18));
}





void ov40_02237AA8(void) {
}





void ov40_02237AC0(void) {
    // str r0, [sp, #0x14]
    // str r1, [sp, #0x24]
    // str r1, [sp, #0x18]
    // add r6, sp, #0x20
    // str r2, [sp, #0x20]
    // add r4, r0, r1
    InitWindow(r4, (0x8d << 2), *((u32*)(ov40_02245268 + 0x14)));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x14]
    AddWindowParameterized(*((u32*)(((r7 << 0x10) >> 0x10) + 0x24)), r4, 6, *((u8*)r5));
    FillWindowPixelBuffer(r4, 0);
    // ldr r0, [sp, #0x14]
    NewString_ReadMsgData(*((u32*)(r0 + 0x48)), *((u32*)r6));
    // str r0, [sp, #0x1c]
    // ldr r1, [sp, #0x1c]
    ov40_022306C0(r4);
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x1c]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r4, 0, r0);
    ScheduleWindowCopyToVram(r4);
    // add r7, r7, r0
    // ldr r0, [sp, #0x1c]
    String_Delete((*((u8*)(r5 + 3)) * *((u8*)(r5 + 2))), *((u8*)(r5 + 2)));
    // ldr r0, [sp, #0x18]
    // add r4, #0x10
    // str r0, [sp, #0x18]
}





void ov40_02237B7C(void) {
    // add r0, r4, r6
    FillWindowPixelBuffer((0x86 << 4), 0);
    NewString_ReadMsgData(*((u32*)(r5 + 0x48)), r7);
    // add r0, r4, r6
    ov40_022306C0(r0);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r4, r6
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(0x000F0D00, 0, r5, r0);
    String_Delete(r5);
    // add r0, r4, r6
    ScheduleWindowCopyToVram();
}





void ov40_02237BD4(void) {
    // add r0, r4, r6
    InitWindow((0x86 << 4));
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, r4, r6
    AddWindowParameterized(*((u32*)(r5 + 0x24)), 6, 0xc);
    // add r0, r4, r6
    FillWindowPixelBuffer(0);
    NewString_ReadMsgData(*((u32*)(r5 + 0x48)), 0x22);
    FontID_String_GetWidthMultiline(0, r0, 0);
    // sub r0, r1, r0
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r4, r6
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(0x000F0D00, 0, r5, (r0 >> 1));
    // add r0, r4, r6
    ScheduleWindowCopyToVram();
    String_Delete(r5);
}





void ov40_02237C54(void) {
    // add r0, r4, r0
    // add r0, r4, r0
}





void ov40_02237C74(void) {
    // add r5, r1, r0
    // add r5, #0x10
}





void ov40_02237C9C(void) {
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x24]
    // add r4, r0, r1
    InitWindow(r4, (0x6d << 2));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x20]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x14]
    AddWindowParameterized(*((u32*)(((0xe << 0x10) >> 0x10) + 0x24)), r4, 2, *((u8*)r5));
    FillWindowPixelBuffer(r4, 0);
    // ldr r0, [sp, #0x14]
    // ldr r2, [sp, #0x24]
    // add r1, r2, r1
    NewString_ReadMsgData(*((u32*)(r0 + 0x48)), 0x00000136, *((u32*)(r2 + (0xe << 6))));
    ov40_022306C0(r4, r0);
    // str r0, [sp, #0x1c]
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x18]
    // ldr r3, [sp, #0x1c]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r4, 0, r6);
    String_Delete(r6);
    ScheduleWindowCopyToVram(r4);
    // ldr r0, [sp, #0x20]
    // add r4, #0x10
    // add r0, r0, r2
    // str r0, [sp, #0x20]
}





void ov40_02237D6C(void) {
    // add r5, r1, r0
    // add r5, #0x10
}





void ov40_02237D94(void) {
    ov40_0223D5CC((0x86 << 4));
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02237DC2: ; jump table
    sub_020879E0(*((u32*)(r4 + 0x000006F4)), 0);
    ov40_02237008(r4);
    ov40_02236FE0(r4);
    BgClearTilemapBufferAndCommit(*((u32*)(r4 + 0x24)), 2);
    // str r2, [sp]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r5, r1
    // add r1, r5, r1
    ov40_0222D980(1, ((0x69 << 2) + 4), 8, 0x12);
    GfGfx_EngineATogglePlanes(4, 0);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // add r0, r5, r0
    ov40_0222DA84((0x6b << 2), 1);
    // add r0, r5, r1
    // add r1, r5, r1
    ov40_0222DA00(((0x69 << 2) + 4), 1, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharDataFromOpenNarc(*((u32*)(r4 + 0x14)), 0x3e, *((u32*)(r4 + 0x24)), 3);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnDataFromOpenNarc(*((u32*)(r4 + 0x14)), 3, *((u32*)(r4 + 0x24)), 3);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnDataFromOpenNarc(*((u32*)(r4 + 0x14)), 0x4e, *((u32*)(r4 + 0x24)), 7);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 3, 0xc, ((*((u32*)(r5 + (0x6b << 2))) << 0x18) >> 0x18));
    ov40_0223077C(r4, *((u32*)(r4 + (0x6f << 4))), 0x80, 0x60);
    sub_020879E0(*((u32*)(r4 + (0x6f << 4))), 1);
    sub_02087A08(*((u32*)(r4 + (0x6f << 4))), 0x18, 0x18);
    ov40_0222DED0(r4, 0x00000121);
    PlaySE(0x0000057D);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    ov40_0223D540(r4);
    ov39_0222748C(*((u32*)(r5 + (0xe << 6))));
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    ov40_0222DFB0(r4);
    ov40_0223D540(r4);
    // add r1, sp, #0x10
    ov39_02227D44();
    StopSE(0x0000057D, 0);
    // ldr r3, [sp, #0x10]
    ov40_02230CDC(r4, 3, *((u32*)(r3 + 0xc)), *((u32*)(r3 + 4)));
    // str r1, [r5, r0]
    // str r1, [r5, r0]
    ov40_02230964(r4, 1);
    ov40_02236EB4(r4);
    sub_020879E0(*((u32*)(r4 + 0x000006F4)), 0);
    sub_020878B0(*((u32*)(r4 + (0x6f << 4))), 0);
    sub_020879E0(*((u32*)(r4 + (0x6f << 4))), 0);
    sub_02087A08(*((u32*)(r4 + (0x6f << 4))), 0, 0);
    GfGfx_EngineATogglePlanes(4, 0);
    BgClearTilemapBufferAndCommit(*((u32*)(r4 + 0x24)), 3);
    ov40_02230964(r4, 0);
    *((u32*)(r4 + 8)) = 7;
    StopSE(7, 0);
    PlaySE(0x00000577);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    sub_020879E0(*((u32*)(r4 + (0x6f << 4))), 0);
    sub_02087A08(*((u32*)(r4 + (0x6f << 4))), 0, 0);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    *((u32*)(r4 + 0xc)) = 0;
    ov40_0222DED0(r4, 0x00000126);
    *((u32*)(r4 + 8)) = 0xff;
    *((u32*)(r4 + 0xc)) = (*((u32*)(r4 + 0xc)) + 1);
    System_GetTouchNew((*((u32*)(r4 + 0xc)) + 1));
    *((u32*)(r4 + 0xc)) = 0;
    ov40_0222DFB0(r4);
    // str r1, [r5, r0]
    ov40_02230964(r4, 1);
    ov40_02236EB4(r4);
    sub_020879E0(*((u32*)(r4 + 0x000006F4)), 0);
    sub_020878B0(*((u32*)(r4 + (0x6f << 4))), 0);
    sub_020879E0(*((u32*)(r4 + (0x6f << 4))), 0);
    sub_02087A08(*((u32*)(r4 + (0x6f << 4))), 0, 0);
    GfGfx_EngineATogglePlanes(4, 0);
    BgClearTilemapBufferAndCommit(*((u32*)(r4 + 0x24)), 3);
    ov40_02230964(r4, 0);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // add r0, r5, r1
    // add r1, r5, r1
    ov40_0222DA00((*((u32*)(r4 + 8)) + 1), ((0x69 << 2) + 4), 1, 0);
    GfGfx_EngineATogglePlanes(4, 0);
    GfGfx_EngineBTogglePlanes(4, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnDataFromOpenNarc(*((u32*)(r4 + 0x14)), 0x4f, *((u32*)(r4 + 0x24)), 7);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // add r0, r5, r0
    ov40_0222DA84((0x6b << 2), 0);
    // add r0, r5, r1
    // add r1, r5, r1
    ov40_0222DA00(((0x69 << 2) + 4), 0, 2);
    ov40_0222C710(r4, 2);
    ov40_02237030(r4, 0x00000113);
    ov40_02236F38(r4);
    GfGfx_EngineATogglePlanes(4, 1);
    GfGfx_EngineBTogglePlanes(4, 1);
    ov40_0222BF80(r4, 3);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 3, 0xc, ((*((u32*)(r5 + (0x6b << 2))) << 0x18) >> 0x18));
    // add r0, r5, r0
    ov40_0222DA84((0x6b << 2), 0);
    // add r0, r5, r1
    // add r1, r5, r1
    ov40_0222DA00(((0x69 << 2) + 4), 0, 0);
    ov40_02237C9C(r4);
    ov40_02238290(r4);
    ov40_02230964(r4, 1);
    // add r2, r5, r0
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // add r1, #0xf4
    // str r2, [r5, r0]
    // add r0, r4, r1
    ov40_0222F9E0(0x00002EB0, r4, 2, ov40_02245310);
    // add r0, r4, r0
    ov40_0222F734(0x0000049C);
    // add r2, r5, r3
    // sub r3, #0xa0
    // add r0, r4, r0
    // add r3, r5, r3
    ov40_0222EED0(0x0000049C, r4, 0x00002EAC);
    // add r0, r4, r1
    // add r1, #0x20
    // add r1, r4, r1
    ov40_0222FA5C(0x0000047C);
    // add r0, r4, r0
    ov40_0222F740(0x0000049C, r4, 1);
    // add r0, r4, r0
    ov40_0222F858(0x0000049C, 0x38, 0xb0);
    ov40_02230964(r4, 0);
    ov40_02237AC0(r4);
    GfGfx_EngineBTogglePlanes(4, 1);
    GfGfx_EngineATogglePlanes(4, 1);
    // add r3, #0x44
    // asr r3, r3, #0x10
    ov40_0223077C(r4, *((u32*)(r4 + (0x6f << 4))), 0x10, ((0x18 * *((u32*)(r4 + 0x000004D8))) << 0x10));
    sub_020879E0(*((u32*)(r4 + (0x6f << 4))), 1);
    sub_02087A08(*((u32*)(r4 + (0x6f << 4))), 0xc, 0xc);
    ov40_0222BF80(r4, 5);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 3, 0xc, ((*((u32*)(r5 + (0x6b << 2))) << 0x18) >> 0x18));
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 2, 0xc, ((*((u32*)(r5 + (0x6b << 2))) << 0x18) >> 0x18));
}





void ov40_02238290(void) {
    // str r0, [sp]
    String_New(0x14, 0x6d);
    // str r0, [r4, r1]
    CopyU16ArrayToString(*((u32*)(r4 + 0x00002E10)), *((u32*)(r5 + (0xe3 << 2))));
    // ldr r0, [sp]
    ov40_02230DCC(*((u32*)(r4 + 0x00002E10)));
    String_New(0x1e, 0x6d);
    // str r0, [r4, r1]
    // add r1, #0x80
    CopyU16ArrayToString(*((u32*)(r4 + 0x00002E0C)), *((u32*)(r5 + (0xe3 << 2))));
    // add r4, #8
}





void ov40_02238304(void) {
    String_Delete(*((u32*)(*((u32*)(r0 + (0x86 << 4))) + 0x00002E0C)), (0x86 << 4));
    // str r7, [r5, r0]
    String_Delete(*((u32*)(r5 + 0x00002E10)));
    // str r1, [r5, r0]
    // add r5, #8
}





void ov40_02238358(void) {
    // add r0, r5, r0
    ov40_0222FA88(0x0000047C);
    // add r0, r5, r1
    // sub r1, #0x10
    // ldrsh r1, [r5, r1]
    ov40_0222F5EC(0x0000049C);
    // add r0, r5, r0
    // add r2, r4, r2
    ov40_0222EFD8(0x0000049C, r5, 0x00002E0C);
    // add r2, #0x44
    // asr r2, r2, #0x10
    sub_020878EC(*((u32*)(r5 + (0x6f << 4))), 0x10, ((0x18 * *((u32*)(r5 + 0x000004D8))) << 0x10), *((u32*)(r5 + 0x000004D8)));
    TouchHitboxController_IsTriggered(*((u32*)(r4 + (0xcf << 2))));
}





void ov40_022383C8(void) {
    ov40_02238304(*((u32*)(r0 + 8)));
    ov40_02237C74(r5);
    ov40_02237D6C(r5);
    ov40_02230964(r5, 1);
    // add r0, r5, r0
    ov40_0222FA24(0x0000047C);
    // add r0, r5, r0
    ov40_0222F720(0x0000049C);
    // add r0, r5, r0
    ov40_0222F920(0x0000049C, r5);
    ov40_02230964(r5, 0);
    ov40_02230964(r5, 1);
    // add r0, r4, r0
    ov40_0222E7B8(0x00002ED8, r5);
    ov40_022361B0(r5);
    ov40_02230964(r5, 0);
    // str r1, [r4, r0]
    ov40_02230964(r5, 1);
    ov40_02236EB4(r5);
    ov40_0223707C(r5, 0xff);
    sub_020879E0(*((u32*)(r5 + 0x000006F4)), 0);
    sub_020878B0(*((u32*)(r5 + (0x6f << 4))), 0);
    sub_020879E0(*((u32*)(r5 + (0x6f << 4))), 0);
    sub_02087A08(*((u32*)(r5 + (0x6f << 4))), 0, 0);
    GfGfx_EngineATogglePlanes(4, 0);
    BgClearTilemapBufferAndCommit(*((u32*)(r5 + 0x24)), 3);
    ov40_02230964(r5, 0);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    // add r0, r4, r1
    // add r1, r4, r1
    ov40_0222DA00((*((u32*)(r5 + 8)) + 1), ((0x69 << 2) + 4), 1, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnDataFromOpenNarc(*((u32*)(r5 + 0x14)), 0x4f, *((u32*)(r5 + 0x24)), 7);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    // add r0, r4, r1
    // add r1, r4, r1
    ov40_0222DA00((*((u32*)(r5 + 8)) + 1), ((0x69 << 2) + 4), 0, 2);
    ov40_0222C710(r5, 2);
    GfGfx_EngineATogglePlanes(4, 1);
    GfGfx_EngineBTogglePlanes(4, 1);
    ov40_02237030(r5, 0x00000113);
    ov40_02236F38(r5);
    ov40_0222BF80(r5, 3);
}





void ov40_0223854C(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0223856C: ; jump table
    ov40_02237C74((*((u16*)(*((u32*)(r0 + 8)) + 6)) << 0x10));
    ov40_02237D6C(r4);
    ov40_02230964(r4, 1);
    // add r0, r4, r0
    ov40_0222FA24(0x0000047C);
    // add r0, r4, r0
    ov40_0222F720(0x0000049C);
    // add r0, r4, r0
    ov40_0222F920(0x0000049C, r4);
    ov40_02230964(r4, 0);
    ov40_02230964(r4, 1);
    // add r0, r5, r0
    ov40_0222E7B8(0x00002ED8, r4);
    ov40_022361B0(r4);
    ov40_02230964(r4, 0);
    sub_020879E0(*((u32*)(r4 + 0x000006F4)), 0);
    sub_020878B0(*((u32*)(r4 + (0x6f << 4))), 0);
    sub_020879E0(*((u32*)(r4 + (0x6f << 4))), 0);
    sub_02087A08(*((u32*)(r4 + (0x6f << 4))), 0, 0);
    GfGfx_EngineATogglePlanes(4, 0);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // add r0, r5, r1
    // add r1, r5, r1
    ov40_0222DA00((*((u32*)(r4 + 8)) + 1), ((0x69 << 2) + 4), 1, 0);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    ov40_02230964((*((u32*)(r4 + 8)) + 1), 1);
    // add r1, r5, r0
    // add r6, #0x80
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    ov40_0223655C(r5, (0x33 - 1), (r5 + 4));
    ov40_0222C710(r4, 2);
    ov40_02236EB4(r4);
    ov40_0223757C(r4);
    ov40_0223707C(r4, 0xff);
    ov40_02237548(r4, 1);
    ov40_022373E4(r4, 0);
    ov40_02230964(r4, 0);
    GfGfx_EngineBTogglePlanes(4, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnDataFromOpenNarc(*((u32*)(r4 + 0x14)), 0x4b, *((u32*)(r4 + 0x24)), 7);
    GfGfx_EngineATogglePlanes(8, 1);
    GfGfx_EngineBTogglePlanes(8, 1);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // add r0, r5, r1
    // add r1, r5, r1
    ov40_0222DA00((*((u32*)(r4 + 8)) + 1), ((0x69 << 2) + 4), 0, 0);
    ov40_02237548(r4, 0);
    ov40_022373E4(r4, 1);
    ov40_02237BD4(r4);
    GfGfx_EngineBTogglePlanes(4, 1);
    GfGfx_EngineATogglePlanes(1, 1);
    GfGfx_EngineATogglePlanes(4, 1);
    // strh r1, [r0]
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // add r0, r5, r0
    ov40_0222DA84((0x6b << 2), 0);
    // add r0, #0x14
    // str r1, [r5, r0]
    ov40_0223655C(r5, *((u32*)(r5 + (0x33 << 4))));
    _s32_div_f(*((u32*)(r5 + (0x1b << 4))), 6);
    // str r1, [r5, r0]
    _s32_div_f(*((u32*)(r5 + (0x1b << 4))), 6);
    // str r0, [r5, r3]
    // add r2, #0x6e
    // add r3, #0x34
    // asr r2, r2, #0x10
    // asr r3, r3, #0x10
    ov40_0223077C(r4, *((u32*)(r4 + (0x6f << 4))), ((0x18 * *((u32*)(r5 + (0x00002F6C - 4)))) << 0x10), ((0x16 * *((u32*)(r5 + 0x00002F6C))) << 0x10));
    sub_020879E0(*((u32*)(r4 + (0x6f << 4))), 1);
    sub_02087A08(*((u32*)(r4 + (0x6f << 4))), 0xc, 0xc);
    // add r1, r5, r1
    // sub r0, #0x58
    // lsl r1, r2
    ov40_022371D4(*((u32*)(r5 + (0x1b << 4))), 1, *((u32*)(r5 + (0x1b << 4))));
    // sub r1, #0x54
    // add r0, r5, r0
    // add r2, r5, r2
    PlayCry(*((u16*)((*((u32*)(r5 + (0x1b << 4))) << 1) + 0x2c)), *((u8*)(*((u32*)(r5 + (0x1b << 4))) + (0x1b << 4))), *((u32*)(r5 + (0x1b << 4))));
    ov40_0222BF80(r4, 0xa);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 3, 0xc, ((*((u32*)(r5 + (0x6b << 2))) << 0x18) >> 0x18));
}





void ov40_02238820(void) {
}





void ov40_02238838(void) {
    // str r2, [sp]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r4, r1
    // add r1, r4, r1
    ov40_0222D980(1, ((0x69 << 2) + 4), 8, 0x12);
    ov40_02237564(r5);
    ov40_02237410(r5);
    ov40_022371A0(r5);
    BgClearTilemapBufferAndCommit(*((u32*)(r5 + 0x24)), 2);
    ov40_02237008(r5);
    ov40_02237C54(r5);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    // str r1, [r4, r0]
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    // add r0, r4, r1
    // add r1, r4, r1
    ov40_0222DA00((*((u32*)(r5 + 8)) + 1), ((0x69 << 2) + 4), 1, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharDataFromOpenNarc(*((u32*)(r5 + 0x14)), 0x3e, *((u32*)(r5 + 0x24)), 3);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnDataFromOpenNarc(*((u32*)(r5 + 0x14)), 3, *((u32*)(r5 + 0x24)), 3);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnDataFromOpenNarc(*((u32*)(r5 + 0x14)), 0x4e, *((u32*)(r5 + 0x24)), 7);
    GfGfx_EngineBTogglePlanes(4, 0);
    GfGfx_EngineATogglePlanes(4, 0);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    // add r0, r4, r1
    // add r1, r4, r1
    ov40_0222DA00((*((u32*)(r5 + 8)) + 1), ((0x69 << 2) + 4), 0, 0);
    ov40_02230964(r5, 1);
    sub_020879E0(*((u32*)(r5 + (0x6f << 4))), 1);
    ov40_02237C9C(r5);
    ov40_02237AC0(r5);
    // add r0, r5, r0
    ov40_0222F9E0(0x0000047C, r5, 2);
    // add r2, r4, r3
    // sub r3, #0xa0
    // add r0, r5, r0
    // add r3, r4, r3
    ov40_0222EED0(0x0000049C, r5, 0x00002EAC);
    // add r0, r5, r1
    // add r1, #0x20
    // add r1, r5, r1
    ov40_0222FA5C(0x0000047C);
    // add r0, r5, r0
    ov40_0222F740(0x0000049C, r5, 1);
    // add r0, r5, r0
    ov40_0222F858(0x0000049C, 0x38, 0xb0);
    // add r3, #0x44
    // asr r3, r3, #0x10
    ov40_0223077C(r5, *((u32*)(r5 + (0x6f << 4))), 0x10, ((0x18 * *((u32*)(r5 + 0x000004D8))) << 0x10));
    sub_020879E0(*((u32*)(r5 + (0x6f << 4))), 1);
    sub_02087A08(*((u32*)(r5 + (0x6f << 4))), 0xc, 0xc);
    // add r0, r5, r0
    ov40_0222FA88(0x0000047C);
    // add r0, r5, r1
    // sub r1, #0x10
    // ldrsh r1, [r5, r1]
    ov40_0222F5EC(0x0000049C);
    // add r0, r5, r0
    // add r2, r4, r2
    ov40_0222EFD8(0x0000049C, r5, 0x00002E0C);
    // add r2, #0x44
    // asr r2, r2, #0x10
    sub_020878EC(*((u32*)(r5 + (0x6f << 4))), 0x10, ((0x18 * *((u32*)(r5 + 0x000004D8))) << 0x10), *((u32*)(r5 + 0x000004D8)));
    ov40_02230964(r5, 0);
    GfGfx_EngineATogglePlanes(4, 1);
    GfGfx_EngineBTogglePlanes(4, 1);
    ov40_0222BF80(r5, 5);
}





void ov40_02238A50(void) {
    sub_020879E0(*((u32*)(r0 + (0x6f << 4))), 0);
    ov40_02237D6C(r5);
    // add r0, r5, r0
    ov40_0222FA24(0x0000047C);
    // add r0, r5, r0
    ov40_0222F720(0x0000049C);
    // add r0, r5, r0
    ov40_0222F920(0x0000049C, r5);
    // str r1, [r4, r0]
    BgClearTilemapBufferAndCommit(*((u32*)(r5 + 0x24)), 2);
    // str r2, [sp]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r4, r1
    // add r1, r4, r1
    ov40_0222D980(1, ((0x69 << 2) + 4), 8, 0x12);
    GfGfx_EngineATogglePlanes(4, 0);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    // add r0, r4, r1
    // add r1, r4, r1
    ov40_0222DA00((*((u32*)(r5 + 8)) + 1), ((0x69 << 2) + 4), 1, 1);
    ov40_02236184(r5, *((u32*)(r5 + 0x000004D4)));
    ov40_02230964(r5, 1);
    // add r0, r4, r0
    ov40_0222E79C(0x00002ED8, r5);
    // add r0, r4, r0
    ov40_0222E7DC(0x00002ED8, 0);
    ov40_02230964(r5, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharDataFromOpenNarc(*((u32*)(r5 + 0x14)), 0x3e, *((u32*)(r5 + 0x24)), 3);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnDataFromOpenNarc(*((u32*)(r5 + 0x14)), 0x50, *((u32*)(r5 + 0x24)), 3);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    // add r0, r4, r1
    // add r1, r4, r1
    ov40_0222DA00((*((u32*)(r5 + 8)) + 1), ((0x69 << 2) + 4), 0, 1);
    // add r0, r4, r0
    ov40_0222E7DC(0x00002ED8, 1);
    // add r1, #0x79
    ov40_02237B7C(r5, *((u32*)(r4 + 0x00002F64)));
    GfGfx_EngineBTogglePlanes(4, 1);
    GfGfx_EngineATogglePlanes(4, 1);
    ov40_0222BF80(r5, 5);
}





void ov40_02238BB0(void) {
    // str r1, [r4, r0]
    *((u32*)(r0 + 8)) = (*((u32*)(r0 + 8)) + 1);
    ov40_02230964((*((u32*)(r0 + 8)) + 1), 1);
    // add r0, r4, r0
    ov40_0222E7B8(0x00002ED8, r5);
    ov40_022361B0(r5);
    ov40_02230964(r5, 0);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    // add r0, r4, r1
    // add r1, r4, r1
    ov40_0222DA00((*((u32*)(r5 + 8)) + 1), ((0x69 << 2) + 4), 1, 1);
    BgClearTilemapBufferAndCommit(*((u32*)(r5 + 0x24)), 2);
    GfGfx_EngineATogglePlanes(4, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharDataFromOpenNarc(*((u32*)(r5 + 0x14)), 0x3e, *((u32*)(r5 + 0x24)), 3);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnDataFromOpenNarc(*((u32*)(r5 + 0x14)), 3, *((u32*)(r5 + 0x24)), 3);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    // add r0, r4, r1
    // add r1, r4, r1
    ov40_0222DA00((*((u32*)(r5 + 8)) + 1), ((0x69 << 2) + 4), 0, 1);
    ov40_02230964(r5, 1);
    // add r1, #0x79
    ov40_02237B7C(r5, *((u32*)(r4 + 0x00002F64)));
    ov40_02237C9C(r5);
    // add r0, r5, r0
    ov40_0222F9E0(0x0000047C, r5, 2);
    // add r2, r4, r3
    // sub r3, #0xa0
    // add r0, r5, r0
    // add r3, r4, r3
    ov40_0222EED0(0x0000049C, r5, 0x00002EAC);
    // add r0, r5, r1
    // add r1, #0x20
    // add r1, r5, r1
    ov40_0222FA5C(0x0000047C);
    // add r0, r5, r0
    ov40_0222F740(0x0000049C, r5, 1);
    // add r0, r5, r0
    ov40_0222F858(0x0000049C, 0x38, 0xb0);
    // add r0, r5, r0
    ov40_0222FA88(0x0000047C);
    // add r0, r5, r1
    // sub r1, #0x10
    // ldrsh r1, [r5, r1]
    ov40_0222F5EC(0x0000049C);
    // add r0, r5, r0
    // add r2, r4, r2
    ov40_0222EFD8(0x0000049C, r5, 0x00002E0C);
    // add r2, #0x44
    // asr r2, r2, #0x10
    sub_020878EC(*((u32*)(r5 + (0x6f << 4))), 0x10, ((0x18 * *((u32*)(r5 + 0x000004D8))) << 0x10), *((u32*)(r5 + 0x000004D8)));
    sub_020879E0(*((u32*)(r5 + (0x6f << 4))), 1);
    GfGfx_EngineATogglePlanes(4, 1);
    ov40_02230964(r5, 0);
    ov40_0222BF80(r5, 5);
}





void ov40_02238D5C(void) {
    ov40_02230964(1);
    ov40_02237008(r5);
    ov40_02236534(r5);
    sub_020878B0(*((u32*)(r5 + 0x000006F4)), 0);
    sub_020879E0(*((u32*)(r5 + 0x000006F4)), 0);
    sub_020878B0(*((u32*)(r5 + (0x6f << 4))), 1);
    sub_020879E0(*((u32*)(r5 + (0x6f << 4))), 0);
    ov40_02230964(r5, 0);
    ov40_0222FB90(r5, 1);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    ov40_0222FBB4((*((u32*)(r5 + 8)) + 1));
    TouchHitboxController_Destroy(*((u32*)(r7 + (0x33 << 4))));
    // add r0, r7, r0
    ov40_0222DAA8((0x6b << 2));
    ov40_0222D88C(r5);
    BgClearTilemapBufferAndCommit(*((u32*)(r5 + 0x24)), 2);
    BgClearTilemapBufferAndCommit(*((u32*)(r5 + 0x24)), 6);
    BgClearTilemapBufferAndCommit(*((u32*)(r5 + 0x24)), 3);
    BgClearTilemapBufferAndCommit(*((u32*)(r5 + 0x24)), 7);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    // add r0, r7, r0
    ov40_0222DA84((0x6b << 2), 0);
    ov40_0222DD08(r5);
    // add r0, r7, r0
    ov40_0222DAA8((0x6b << 2));
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r5 + 0x28)), 2, 0xc, 0x10);
    ov40_0222BF64(r5, 1, 1, *((u32*)(r5 + 0x10)));
    ov40_0222BF80(r5, 5);
    sub_020314BC(*((u32*)(r7 + (0xe1 << 2))));
    Heap_Free(r7);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r5 + 0x28)), 1, 2, ((*((u32*)(r7 + (0x6b << 2))) << 0x18) >> 0x18));
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r5 + 0x28)), 3, 0xc, ((*((u32*)(r7 + (0x6b << 2))) << 0x18) >> 0x18));
}





void ov40_02238EB8(void) {
    // bx lr
    // TODO: decompile
}





void ov40_02238EBC(void) {
    // str r1, [r4, r0]
    ov40_0223D540((0xe2 << 2), 0, (0x86 << 4));
    // add r1, r4, r1
    ov39_02227F14((0xe3 << 2), 0x14);
    // str r0, [r4, r1]
    // add r1, #0x54
    // add r0, r4, r0
    // add r1, r4, r1
    MI_CpuCopy8(((0xe2 << 2) + 4), (0xe2 << 2), 0x00002A30);
}





void ov40_02238F00(void) {
    // add r2, r4, r0
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // str r1, [r4, r0]
    // add r2, r4, r0
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // add r1, #0x5e
    NewString_ReadMsgData(*((u32*)(r0 + 0x4c)), *((u8*)(*((u32*)(*((u32*)(r0 + (0x86 << 4))) + 0x00000714)) + ((0x72 << 2) * *((u32*)(*((u32*)(r0 + (0x86 << 4))) + 0xc))))), *((u32*)(*((u32*)(r0 + (0x86 << 4))) + 0xc)), *((u32*)(*((u32*)(r0 + (0x86 << 4))) + 0x00000714)));
    // str r0, [r4, r1]
    // str r0, [r4, r1]
    // add r2, r3, r2
    // add r0, r4, r0
    // add r2, r0, r2
    // str r2, [r4, r0]
    ov40_02230964(r5, 1, ((*((u32*)(r4 + 0xc)) << 2) << 6), *((u32*)(r4 + 0xc)));
    // add r0, r5, r0
    ov40_0222F734(0x0000049C);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r5, r0
    // add r3, r4, r3
    ov40_0222EB9C(0x0000049C, r5, *((u32*)(r4 + (0x00000748 - 4))), 0x00000B0C);
    // add r0, r5, r1
    // add r1, #0x20
    // add r1, r5, r1
    ov40_0222FA5C(0x0000047C);
    // add r0, r5, r0
    ov40_0222F740(0x0000049C, r5, 1);
    // add r0, r5, r0
    ov40_0222F858(0x0000049C, 0x70, 0xb8);
    ov40_02230964(r5, 0);
}





void ov40_02238FF4(void) {
    // add r1, #0xe0
    // str r1, [r4, r0]
    // sub r1, #0xdc
    // add r1, r4, r1
    // str r1, [r4, r0]
    // str r6, [sp]
    // add r0, r1, r0
    // add r0, r4, r0
    // add r2, r5, r0
    // str r1, [r2, r0]
    // sub r0, #0x34
    // add r0, r2, r0
    // add r0, r6, r0
    ov40_0222E658(*((u8*)((0x48 * *((u32*)(*((u32*)(r0 + (0x86 << 4))) + 0xc))) + 4)), 4, *((u32*)(*((u32*)(r0 + (0x86 << 4))) + 0x0000074C)));
    // add r1, r2, r1
    // add r1, r4, r1
    // add r2, r5, r1
    // str r0, [r2, r1]
    // asr r0, r6, #0x1f
    // add r1, r2, r1
    // add r1, r4, r1
    // add r2, r5, r1
    // str r6, [r2, r1]
    // str r0, [r2, r1]
    // add r0, r1, r0
    // add r0, r4, r0
    // add r2, r5, r0
    // str r1, [r2, r0]
    // sub r0, #0x38
    // add r0, r2, r0
    // add r0, r6, r0
    ov40_0222E658(*((u8*)(((0x72 << 2) * *((u32*)(r4 + 0xc))) + 4)), 4, *((u32*)(r4 + 0x0000074C)));
    // add r1, r2, r1
    // add r1, r4, r1
    // add r2, r5, r1
    // str r0, [r2, r1]
    // sub r1, #0x3c
    // add r2, r2, r1
    // ldr r1, [sp]
    // add r1, r1, r2
    // add r1, #0x14
    // ldmia r1!, {r2, r3}
    // add r0, r0, r1
    // add r0, r4, r0
    // add r1, r5, r0
    // add r0, r1, r0
    // stmia r0!, {r2, r3}
    // add r0, r1, r0
    // add r0, r4, r0
    // add r3, r0, r5
    // sub r0, r2, r0
    // sbc r1, r7
    // str r1, [r3, r0]
    // str r1, [r3, r0]
    // ldr r0, [sp]
    // add r0, #8
    // add r5, #0x10
    // str r0, [sp]
    // add r2, r3, r2
    // add r2, r4, r2
    // add r5, r0, r2
    // str r3, [r5, r2]
    // sub r2, #0x34
    // add r2, r2, r5
    // add r3, r3, r5
    // add r2, r1, r2
    // add r3, r4, r3
    // add r5, r0, r3
    // str r2, [r5, r3]
    // asr r3, r1, #0x1f
    // add r2, r5, r2
    // add r2, r4, r2
    // add r2, r0, r2
    // str r1, [r2, r5]
    // str r3, [r2, r5]
    // add r2, r3, r2
    // add r2, r4, r2
    // add r5, r0, r2
    // str r3, [r5, r2]
    // sub r2, #0x38
    // add r2, r2, r5
    // add r2, r1, r2
    // add r3, r3, r5
    // add r2, #0x94
    // add r3, r4, r3
    // add r5, r0, r3
    // str r2, [r5, r3]
    // sub r2, #0x3c
    // add r2, r2, r3
    // add r6, r7, r2
    // add r6, #0xa0
    // ldmia r6!, {r2, r3}
    // add r5, r5, r6
    // add r5, r4, r5
    // add r6, r0, r5
    // add r5, r6, r5
    // stmia r5!, {r2, r3}
    // add r2, r3, r2
    // add r2, r4, r2
    // add r5, r2, r0
    // str r6, [sp, #0xc]
    // sub r3, r3, r6
    // ldr r3, [sp, #0xc]
    // sbc r2, r3
    // str r3, [r5, r2]
    // str r3, [r5, r2]
    // add r0, #0x10
    // add r7, #8
    // str r7, [sp, #0x10]
    // add r2, r3, r2
    // add r2, r4, r2
    // add r5, r0, r2
    // str r3, [r5, r2]
    // sub r2, #0x34
    // add r2, r2, r5
    // add r3, r3, r5
    // add r2, r1, r2
    // add r3, r4, r3
    // add r5, r0, r3
    // str r2, [r5, r3]
    // asr r3, r7, #0x1f
    // add r2, r5, r2
    // add r2, r4, r2
    // add r2, r0, r2
    // str r7, [r2, r5]
    // str r3, [r2, r5]
    // add r2, r3, r2
    // add r2, r4, r2
    // add r5, r0, r2
    // str r3, [r5, r2]
    // sub r2, #0x38
    // add r2, r2, r5
    // add r5, r1, r2
    // add r3, r3, r5
    // add r3, r4, r3
    // add r5, r0, r3
    // str r2, [r5, r3]
    // str r2, [sp, #4]
    // sub r2, #0x3c
    // ldr r5, [sp, #4]
    // add r3, r2, r3
    // ldr r2, [sp, #0x10]
    // add r3, r2, r3
    // add r5, r3, r2
    // ldmia r5!, {r2, r3}
    // ldr r5, [sp, #4]
    // add r5, r5, r6
    // add r5, r4, r5
    // add r6, r0, r5
    // add r5, r6, r5
    // stmia r5!, {r2, r3}
    // add r2, r3, r2
    // add r2, r4, r2
    // add r3, r2, r0
    // str r3, [sp, #8]
    // mov ip, r2
    // sub r2, r5, r2
    // mov r2, ip
    // sbc r3, r2
    // ldr r3, [sp, #8]
    // str r5, [r3, r2]
    // str r5, [r3, r2]
    // ldr r2, [sp, #0x10]
    // add r2, #8
    // add r0, #0x10
    // str r2, [sp, #0x10]
}





void ov40_02239340(void) {
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x14]
    // add r4, #0x84
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x14]
    AddWindowParameterized(*((u32*)(((1 << 0x10) >> 0x10) + 0x24)), *((u32*)(0 + (0x86 << 4))), 6, ((*((u32*)ov40_022453B8) << 0x18) >> 0x18));
    // add r6, r6, r0
    FillWindowPixelBuffer(r4, 0);
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp, #0x18]
    // add r1, #0x50
    NewString_ReadMsgData(*((u32*)(r0 + 0x48)));
    ov40_022306C0(r4, r0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r4, 0, r7, r0);
    ScheduleWindowCopyToVram(r4);
    String_Delete(r7);
    // ldr r0, [sp, #0x18]
    // add r4, #0x10
    // add r5, #0x10
    // str r0, [sp, #0x18]
}





void ov40_022393F4(void) {
    // add r5, #0x84
    // add r5, #0x10
}





void ov40_02239418(void) {
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x1c]
    // ldr r4, [sp, #0x1c]
    // str r0, [sp, #0x18]
    // add r4, #0x24
    InitWindow(r4, (0x86 << 4));
    // ldr r0, [sp, #0x1c]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x14]
    AddWindowParameterized(*((u32*)(((r7 << 0x10) >> 0x10) + 0x24)), r4, 2, ((*((u32*)r6) << 0x18) >> 0x18));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x14]
    AddWindowParameterized(*((u32*)(((r7 << 0x10) >> 0x10) + 0x24)), r4, 2, ((*((u32*)r5) << 0x18) >> 0x18));
    // add r7, r7, r0
    FillWindowPixelBuffer(r4, 0);
    // ldr r0, [sp, #0x14]
    NewString_ReadMsgData(*((u32*)(r0 + 0x48)), 0x43);
    // str r0, [sp, #0x20]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r2, [sp, #0x20]
    AddTextPrinterParameterizedWithColor(r4, 0, 0);
    ScheduleWindowCopyToVram(r4);
    // ldr r0, [sp, #0x20]
    String_Delete();
    // ldr r0, [sp, #0x18]
    // add r4, #0x10
    // add r6, #0x10
    // add r5, #0x10
    // str r0, [sp, #0x18]
}





void ov40_02239514(void) {
    // add r5, #0x24
    // add r5, #0x10
}





void ov40_02239538(void) {
    GF_AssertFail();
    GF_AssertFail(0x0000FFFF, *((u32*)(ov40_02245CE8 + (r5 << 2))));
    Save_GameStats_Get(*((u32*)(r4 + (0x83 << 4))));
    GameStats_GetCapped(*((u32*)(r6 + r5)));
}





void ov40_02239574(void) {
    String_New(0xff, 0x6d);
    // str r0, [sp, #0x14]
    ov40_0222DAB0(0x6d);
    // add r0, #0x24
    FillWindowPixelBuffer(r4, 0);
    NewString_ReadMsgData(*((u32*)(r5 + 0x4c)), (*((u8*)(*((u32*)(r4 + 0x00000718)) + (0x48 * *((u32*)(r4 + 0xc))))) - 1), (0x48 * *((u32*)(r4 + 0xc))), *((u32*)(r4 + 0xc)));
    NewString_ReadMsgData((*((u8*)(*((u32*)(r4 + 0x00000714)) + ((0x72 << 2) * *((u32*)(r4 + 0xc))))) - 1), ((0x72 << 2) * *((u32*)(r4 + 0xc))), *((u32*)(r4 + 0xc)));
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0x24
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r4, 0, r0, 0);
    // add r0, #0x24
    ScheduleWindowCopyToVram(r4);
    String_Delete(r7);
    // add r0, #0x34
    FillWindowPixelBuffer(r4, 0);
    // add r1, #0x52
    NewString_ReadMsgData(*((u32*)(r5 + 0x48)), *((u32*)(r4 + 0x14)));
    NewString_ReadMsgData(0x5b);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0x34
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r4, 0, r0, 0);
    // add r0, #0x34
    ScheduleWindowCopyToVram(r4);
    String_Delete(r7);
    sub_020315B8(*((u32*)(r5 + 0x0000088C)), 0x6d);
    // str r0, [sp, #0x18]
    // ldr r1, [sp, #0x18]
    ov40_02230DCC(r5);
    sub_02031700(*((u32*)(r5 + 0x0000088C)));
    // str r0, [sp, #0x20]
    NewString_ReadMsgData(*((u32*)(r5 + 0x48)), 0x55);
    // ldr r0, [sp, #0x20]
    ov40_0222E658(4);
    NewString_ReadMsgData(*((u32*)(r4 + 0x00000744)), r0);
    // str r0, [sp, #0x1c]
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x1c]
    BufferString(r6, 0, 0);
    sub_020316F0(*((u32*)(r5 + 0x0000088C)));
    // str r0, [sp, #0x24]
    NewString_ReadMsgData(*((u32*)(r5 + 0x48)), 0x56);
    String_New(0xff, 0x6d);
    // str r0, [sp, #0x1c]
    // ldr r2, [sp, #0x24]
    BufferMonthNameAbbr(r6, 0);
    sub_020315E0(*((u32*)(r5 + 0x0000088C)));
    // str r0, [sp, #0x10]
    sub_02031610(*((u32*)(r5 + 0x0000088C)));
    // str r0, [sp, #0x28]
    NewString_ReadMsgData(*((u32*)(r5 + 0x48)), 0x57);
    // ldr r0, [sp, #0x28]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x10]
    String_New(0xff, 0x6d);
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x10]
    // add r2, sp, #0x2c
    GetSpeciesNameIntoArray(0x6d);
    // ldr r0, [sp, #0x1c]
    // add r1, sp, #0x2c
    CopyU16ArrayToString();
    NewString_ReadMsgData(*((u32*)(r5 + 0x48)), 0x15);
    // str r0, [sp, #0x1c]
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x1c]
    BufferString(r6, 0, 0);
    // str r1, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x18]
    BufferString(r6, 1, 0);
    // ldr r1, [sp, #0x14]
    StringExpandPlaceholders(r6, r7);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r2, [sp, #0x14]
    // add r0, #0x34
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r4, 0, 0);
    // add r4, #0x34
    ScheduleWindowCopyToVram(r4);
    String_Delete(r7);
    // ldr r0, [sp, #0x1c]
    String_Delete();
    // ldr r0, [sp, #0x14]
    String_Delete();
    // ldr r0, [sp, #0x18]
    String_Delete();
    MessageFormat_ResetBuffers(r6);
    MessageFormat_Delete(r6);
}





void ov40_022397BC(void) {
    // add r0, #0xa8
    // add r0, #0xac
    // add r0, #0xc4
    // add r0, #0xa8
    // add r0, #0xac
    // add r0, #0xc4
    // add r0, #0xac
    // sub r2, #0x2c
    // add r4, #0xc8
    // sub r2, #0x2c
}





void ov40_02239838(void) {
    // add r1, #0xa8
    // str r0, [r1]
    // add r1, #0xc4
    // str r0, [r1]
    // add r0, #0xa4
    // add r1, #0x14
    // add r0, #0xc0
    // add r1, #0x14
    // add r0, #0xa4
    // add r1, #0x14
    // add r0, #0xc0
    // add r1, #0x14
    // add r0, #0xa8
    // add r0, #0xc4
    // add r0, #0xac
    // sub r2, #0x2c
    // add r0, #0xc8
    // sub r2, #0x2c
    // add r0, #0xac
    // add r4, #0xc8
}





void ov40_022398F8(void) {
    // add r0, #0xa4
    // add r0, #0xc0
    // add r0, #0xa8
    // add r4, #0xc4
}





void ov40_0223992C(void) {
    // ldmia r5!, {r0, r1}
    // add r4, sp, #0
    // stmia r4!, {r0, r1}
    // str r0, [r4]
    *((u32*)(r0 + 0x20)) = *((u32*)(r4 + (*((u32*)(r0 + 0x14)) << 2)));
}





void ov40_02239954(void) {
    // ldr r4, [r5, r2]
}





void ov40_022399B8(void) {
    Heap_Alloc(0x6d, 0x00000B38);
    memset(0, 0x00000B38);
    // str r4, [r5, r0]
    // add r0, #0xc
    *((u32*)(r4 + 0x1c)) = *((u32*)(r5 + (0x86 << 4)));
    *((u32*)(r4 + 0x10)) = 3;
    sub_02087E1C(r5);
    *((u32*)(r4 + 0x10)) = (*((u32*)(r4 + 0x10)) - 1);
    *((u32*)(r4 + 0x18)) = 3;
    ov40_0223992C(r4);
    // str r1, [r4, r0]
    BgClearTilemapBufferAndCommit(*((u32*)(r5 + 0x24)), 2);
    BgClearTilemapBufferAndCommit(*((u32*)(r5 + 0x24)), 3);
    BgClearTilemapBufferAndCommit(*((u32*)(r5 + 0x24)), 6);
    BgClearTilemapBufferAndCommit(*((u32*)(r5 + 0x24)), 7);
    ov40_0222D9E8(r4, (r4 + 4), 0);
    // str r0, [sp]
    TouchHitboxController_Create(ov40_022453AC, 3, ov40_02239954, r5);
    // add r4, #0xdc
    // str r0, [r4]
    ov40_0222BF80(r5, 1);
}





void ov40_02239A58(void) {
    // add r0, #8
    // str r0, [sp]
    // str r0, [sp]
    // str r0, [sp]
}





void ov40_02239B58(void) {
    ov40_0223D5CC((0x86 << 4));
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02239B86: ; jump table
    ov40_0223077C(r4, *((u32*)(r4 + (0x6f << 4))), 0x80, 0x60);
    sub_020879E0(*((u32*)(r4 + (0x6f << 4))), 1);
    sub_02087A08(*((u32*)(r4 + (0x6f << 4))), 0x18, 0x18);
    ov40_0222DED0(r4, 0x00000117);
    PlaySE(0x0000057D);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    ov40_0223D540(r4);
    ov39_022274B4();
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    ov40_0223D540(r4);
    // add r1, sp, #4
    ov39_02227D44();
    StopSE(0x0000057D, 0);
    ov40_0222DFB0(r4);
    // ldr r3, [sp, #4]
    ov40_02230CDC(r4, 4, *((u32*)(r3 + 0xc)), *((u32*)(r3 + 4)));
    sub_020879E0(*((u32*)(r4 + (0x6f << 4))), 0);
    *((u32*)(r4 + 8)) = 5;
    // add r1, r5, r0
    // add r0, #0xc
    // str r1, [r5, r0]
    Save_PlayerData_GetIGTAddr(*((u32*)(r4 + (0x83 << 4))));
    GetIGTHours();
    // strh r0, [r5, r1]
    Save_PlayerData_GetIGTAddr(*((u32*)(r4 + (0x83 << 4))), 0x00000728);
    GetIGTMinutes();
    // strb r0, [r5, r1]
    Save_PlayerData_GetIGTAddr(*((u32*)(r4 + (0x83 << 4))), 0x0000072A);
    GetIGTSeconds();
    // strb r0, [r5, r1]
    // sub r0, #0xf
    // strb r2, [r5, r0]
    // sub r0, #0xf
    // add r0, #9
    // strb r2, [r5, r0]
    // sub r0, #0xf
    // add r0, #0x11
    // strb r2, [r5, r0]
    ov40_02239538(r4, (*((u8*)(r5 + (0x0000072B + 1))) - 1), *((u8*)(*((u32*)(r5 + 0x0000072B)) + 2)));
    // str r0, [r5, r1]
    ov40_02239538(r4, (*((u8*)(r5 + ((0x73 << 4) + 4))) - 1));
    // str r0, [r5, r1]
    ov40_02239538(r4, (*((u8*)(r5 + (0x00000738 + 4))) - 1));
    // str r0, [r5, r1]
    StopSE(0x0000057D, 0);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    ov40_0223D540(r4);
    // add r2, r5, r2
    ov39_022274D4(*((u32*)(r4 + 0x0000088C)), 0x0000072C);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    ov40_0222DFB0(r4);
    ov40_0223D540(r4);
    // add r1, sp, #4
    ov39_02227D44();
    StopSE(0x0000057D, 0);
    // ldr r3, [sp, #4]
    ov40_02230CDC(r4, 5, *((u32*)(r3 + 0xc)), *((u32*)(r3 + 4)));
    sub_020879E0(*((u32*)(r4 + (0x6f << 4))), 0);
    *((u32*)(r4 + 8)) = 5;
    // add r1, #0x48
    // add r2, #0x90
    ov40_02230CDC(r4, 5, 0, 0);
    // str r1, [r4, r0]
    sub_020879E0(*((u32*)(r4 + (0x6f << 4))), 0);
    *((u32*)(r4 + 8)) = 5;
    StopSE(0x0000057D, 0);
    PlaySE(0x00000577);
    *((u32*)(r4 + 8)) = 0xff;
    ov40_02230964(r4, 1);
    ov40_022398F8(r4);
    // add r0, #0xdc
    TouchHitboxController_Destroy(*((u32*)r5));
    // add r5, #8
    ov40_0222DAA8(r5);
    ov40_0222D88C(r4);
    ov40_02230964(r4, 0);
    BgClearTilemapBufferAndCommit(*((u32*)(r4 + 0x24)), 2);
    BgClearTilemapBufferAndCommit(*((u32*)(r4 + 0x24)), 6);
    BgClearTilemapBufferAndCommit(*((u32*)(r4 + 0x24)), 3);
    BgClearTilemapBufferAndCommit(*((u32*)(r4 + 0x24)), 7);
    ov40_0222FB90(r4, 1);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    ov40_0222FBB4(r4);
    // add r0, #8
    ov40_0222DA84(r5, 0);
    ov40_0222DD08(r4);
    // add r0, #8
    ov40_0222DAA8(r5);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 2, 0xc, 0x10);
    ov40_0222BF64(r4, 1, 1, *((u32*)(r4 + 0x10)));
    ov40_0222BF80(r4, 5);
    Heap_Free(r5);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 1, 2, ((*((u32*)(r5 + 8)) << 0x18) >> 0x18));
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 3, 0xc, ((*((u32*)(r5 + 8)) << 0x18) >> 0x18));
    ov40_02238FF4(r4);
    sub_020879E0(*((u32*)(r4 + (0x6f << 4))), 0);
    sub_02087A08(*((u32*)(r4 + (0x6f << 4))), 0, 0);
    ov40_0222BF80(r4, 5);
}





void ov40_02239EFC(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharDataFromOpenNarc(*((u32*)(r0 + 0x14)), 0x3e, *((u32*)(r0 + 0x24)), 3);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharDataFromOpenNarc(*((u32*)(r5 + 0x14)), 0x3e, *((u32*)(r5 + 0x24)), 7);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnDataFromOpenNarc(*((u32*)(r5 + 0x14)), 0x21, *((u32*)(r5 + 0x24)), 3);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnDataFromOpenNarc(*((u32*)(r5 + 0x14)), 0x22, *((u32*)(r5 + 0x24)), 7);
    ov40_02239418(r5);
    ov40_02239574(r5);
    ov40_02230964(r5, 1);
    // add r0, r5, r0
    ov40_0222F9E0(0x0000047C, r5, 2);
    ov40_02238F00(r5);
    ov40_02230964(r5, 0);
    ov40_02239340(r5);
    GfGfx_EngineATogglePlanes(8, 1);
    GfGfx_EngineBTogglePlanes(8, 1);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    // add r0, #8
    ov40_0222DA84(r4, 0);
    ov40_0222DA00(r4, (r4 + 4), 0, 0);
    GfGfx_EngineATogglePlanes(4, 1);
    GfGfx_EngineBTogglePlanes(4, 1);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r5 + 0x28)), 3, 0xc, ((*((u32*)(r4 + 8)) << 0x18) >> 0x18));
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r5 + 0x28)), 2, 0xc, ((*((u32*)(r4 + 8)) << 0x18) >> 0x18));
    ov40_0222BF80(6);
}





void ov40_0223A034(void) {
    // add r0, r5, r0
    ov40_0222FA88(0x0000047C);
    // add r0, r5, r1
    // sub r1, #0x10
    // ldrsh r1, [r5, r1]
    ov40_0222F6D0(0x0000049C);
    // str r0, [sp]
    // add r0, r5, r0
    ov40_0222F09C(0x0000049C, r5, *((u32*)(r4 + 0xc)), *((u32*)(r4 + 0x14)));
    // add r4, #0xdc
    TouchHitboxController_IsTriggered(*((u32*)r4));
}





void ov40_0223A080(void) {
    ov40_02230964(1);
    // add r0, r5, r0
    ov40_0222FA24(0x0000047C);
    // add r0, r5, r0
    ov40_0222F720(0x0000049C);
    String_Delete(*((u32*)(r4 + 0x00000748)));
    // add r0, r5, r0
    ov40_0222F920(0x0000049C, r5);
    ov40_02230964(r5, 0);
    sub_020879E0(*((u32*)(r5 + 0x000006F4)), 0);
    GfGfx_EngineBTogglePlanes(4, 0);
    GfGfx_EngineATogglePlanes(4, 0);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    // add r0, #8
    ov40_0222DA84(r4, 1);
    ov40_0222DA00(r4, (r4 + 4), 1, 0);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r5 + 0x28)), 3, 0xc, ((*((u32*)(r4 + 8)) << 0x18) >> 0x18));
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r5 + 0x28)), 2, 0xc, ((*((u32*)(r4 + 8)) << 0x18) >> 0x18));
    ov40_0222BF80(8);
}





void ov40_0223A158(void) {
    // add r4, #0xdc
    // add r4, #8
    // add r0, #8
    // add r0, #8
    // str r0, [sp]
    // str r0, [sp]
    // str r0, [sp]
}





void ov40_0223A274(void) {
}





void ov40_0223A280(void) {
    ov40_02238FF4(*((u32*)(r0 + 8)));
    ov40_0223992C(r4);
    ov40_02239514(r5);
    // add r0, r5, r0
    ov40_0222F720(0x0000049C);
    String_Delete(*((u32*)(r4 + 0x00000748)));
    // add r0, r5, r0
    ov40_0222F920(0x0000049C, r5);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    ov40_0222DA00(r4, (r4 + 4), 1, 1);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    ov40_0222DA00(r4, (r4 + 4), 0, 1);
    ov40_02239418(r5);
    ov40_02239574(r5);
    ov40_02238F00(r5);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    ov40_0222BF80((*((u32*)(r5 + 8)) + 1), 6);
}





void ov40_0223A324(void) {
    // add r1, r4, r0
    // add r0, #0xc
    // str r1, [r4, r0]
    ov40_0223D540((0x71 << 4), *((u32*)r1), (0x86 << 4));
    // add r1, r4, r1
    ov39_02227F74(0x0000071C);
    // sub r1, #0xc
    // add r1, r4, r1
    MI_CpuCopy8(*((u32*)(r4 + 0x0000071C)), 0x0000071C, 4);
}





void ov40_0223A360(void) {
    // add r1, #0xe0
    // str r1, [r4, r0]
    // sub r1, #0xdc
    // add r1, r4, r1
    // str r1, [r4, r0]
    ov40_0223D540((0x00000714 + 4), 0x00000714, (0x86 << 4));
    // add r1, r4, r2
    // add r2, r4, r2
    ov39_02227FA8((0x00000714 + 4));
    // add r1, #0xe0
    MI_CpuCopy8(*((u32*)(r4 + 0x00000714)), r4, 0x00000558);
    // sub r1, #0xe0
    // add r1, r4, r1
    MI_CpuCopy8(*((u32*)(r4 + 0x00000718)), 0x00000718, 0xd8);
}





void ov40_0223A3BC(void) {
    // add r3, sp, #0xc
    // strh r1, [r3]
    // str r1, [sp, #8]
    // str r0, [sp, #4]
    // ldr r0, [sp, #8]
    // str r0, [sp]
    // ldr r0, [sp]
    // ldr r4, [sp, #4]
    // add r0, sp, #0xc
    // add r5, r0, r1
    // ldrsh r1, [r5, r1]
    // ldrsh r2, [r5, r2]
    ManagedSprite_SetPositionXY(*((u32*)((ov40_0224557C + 2) + 0x00002090)), 0, 2, (r3 + 2));
    // add r4, #8
    // ldr r0, [sp, #4]
    // add r0, #0x30
    // str r0, [sp, #4]
    // ldr r0, [sp]
    // str r0, [sp]
    // ldr r0, [sp, #8]
    // str r0, [sp, #8]
}





void ov40_0223A430(void) {
    // str r0, [r4, r1]
    // str r0, [r4, r1]
    // sub r1, #0x20
    // add r0, r4, r1
    // add r1, #0x14
    // add r0, r4, r0
    // add r1, #0x14
    // add r0, r4, r0
    // add r1, #0x14
    // add r0, r4, r0
    // add r1, #0x14
    // sub r2, #0x2c
    // sub r2, #0x2c
}





void ov40_0223A510(void) {
    // sub r0, #0x44
    // str r0, [sp, #0x14]
    ov40_0222DAB0(0x6d, *((u32*)(r0 + 0x000008A4)));
    String_New(0xff, 0x6d);
    // ldr r0, [sp, #0x14]
    sub_020315B8(0x6d);
    // str r0, [sp, #0x18]
    // ldr r1, [sp, #0x18]
    ov40_02230DCC(r5);
    NewString_ReadMsgData(*((u32*)(r5 + 0x48)), r4);
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x18]
    BufferString(r7, 0, 0);
    StringExpandPlaceholders(r7, r6, r4);
    // ldr r0, [sp, #0x18]
    String_Delete();
    String_Delete(r4);
    MessageFormat_Delete(r7);
    // add r1, r5, r0
    // sub r0, #0x18
    // str r0, [sp, #0x10]
    ov40_0222DAB0(0x6d);
    String_New(0xff, 0x6d);
    // ldr r0, [sp, #0x10]
    sub_020315B8(0x6d);
    // str r0, [sp, #0x1c]
    // ldr r1, [sp, #0x1c]
    ov40_02230DCC(r5);
    NewString_ReadMsgData(*((u32*)(r5 + 0x48)), r4);
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x1c]
    BufferString(r7, 0, 0);
    StringExpandPlaceholders(r7, r6, r4);
    // ldr r0, [sp, #0x1c]
    String_Delete();
    String_Delete(r4);
    MessageFormat_Delete(r7);
    NewString_ReadMsgData(*((u32*)(r5 + 0x48)));
    // add r0, r5, r0
    FillWindowPixelBuffer(0x000008A4, 0xcc);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r5, r0
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(0x000008A4, 0, r6, 0);
    // add r0, r5, r0
    ScheduleWindowCopyToVram(0x000008A4);
    String_Delete(r6);
}





void ov40_0223A640(void) {
    ov40_0223D5CC((0x86 << 4));
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0223A66E: ; jump table
    BgClearTilemapBufferAndCommit(*((u32*)(r4 + 0x24)), 2);
    BgClearTilemapBufferAndCommit(*((u32*)(r4 + 0x24)), 6);
    // add r0, r5, r0
    ov40_022306A0((0x22 << 4), 0);
    // add r0, r5, r0
    ov40_0222E7DC((0x65 << 2), 0);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // add r0, #8
    ov40_0222DA84(r5, 1);
    ov40_0222DA00(r5, (r5 + 4), 1, 0);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 3, 0xc, ((*((u32*)(r5 + 8)) << 0x18) >> 0x18));
    ov40_0222DED0(r4, 0x75);
    ov40_0223077C(r4, *((u32*)(r4 + (0x6f << 4))), 0x80, 0x60);
    sub_020879E0(*((u32*)(r4 + (0x6f << 4))), 1);
    sub_02087A08(*((u32*)(r4 + (0x6f << 4))), 0x18, 0x18);
    // str r1, [r5, r0]
    PlaySE(0x0000057D, 0);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    ov40_0223D540(r4);
    // add r2, r4, r1
    // add r1, #0xd8
    // add r2, #0xdc
    ov39_02227720(*((u32*)*((u32*)(r2 + 0x00002608))), *((u32*)*((u32*)(r2 + 0x00002608))));
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    ov40_0222DFB0(r4);
    ov40_0223D540(r4);
    // add r1, sp, #4
    ov39_02227D44();
    StopSE(0x0000057D, 0);
    // ldr r3, [sp, #4]
    ov40_02230CDC(r4, 8, *((u32*)(r3 + 0xc)), *((u32*)(r3 + 4)));
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // str r1, [r5, r0]
    StopSE(0x00002038, 0);
    *((u32*)(r4 + 8)) = 0xff;
    // str r2, [r5, r1]
    // add r2, r4, r1
    // add r1, r2, r1
    // str r1, [r4, r2]
    // add r1, #0x3c
    // add r1, #0x85
    // str r3, [r5, r1]
    // add r0, #0x85
    // add r2, #0x40
    // add r1, r4, r2
    MI_CpuCopy8(*((u32*)(r5 + 0xff)), 0xff, 0x00001D4C, *((u32*)(r4 + 0x00000878)));
    sub_020879E0(*((u32*)(r4 + (0x6f << 4))), 0);
    sub_02087A08(*((u32*)(r4 + (0x6f << 4))), 0, 0);
    PlaySE(0x00000577);
    ov40_0222BF80(r4, *((u32*)(r5 + 0x00002034)));
    ov40_0222FC40(r4, 1);
    ov40_0222BF80(r4, 0x14);
}





void ov40_0223A83C(void) {
    // ldr r4, [r0, r1]
    // ldr r0, [r4, r0]
    // ldr r0, [r4, r0]
}





void ov40_0223A85C(void) {
}





void ov40_0223A874(void) {
    // add r0, #8
    // str r0, [sp]
}





void ov40_0223A924(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0223A944: ; jump table
    GfGfx_EngineBTogglePlanes(4, 0);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // add r0, #8
    ov40_0222DA84(r5, 1);
    ov40_0222DA00(r5, (r5 + 4), 1, 2);
    BgClearTilemapBufferAndCommit(*((u32*)(r4 + 0x24)), 6);
    ov40_0223A510(r4, 0x00000116, 0);
    ov40_022306E0(r4);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 3, 0xc, ((*((u32*)(r5 + 8)) << 0x18) >> 0x18));
    // add r3, r4, r2
    ov40_0222FC14(*((u32*)(r5 + 0x00002028)), *((u8*)(r3 + 0x0000413C)));
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    ov40_0223077C((*((u32*)(r4 + 8)) + 1), *((u32*)(r4 + (0x6f << 4))), 0x80, 0x60);
    sub_020879E0(*((u32*)(r4 + (0x6f << 4))), 1);
    sub_02087A08(*((u32*)(r4 + (0x6f << 4))), 0x18, 0x18);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    PlaySE(0x0000057D);
    ov40_0223D5CC();
    ov40_0223A510(r4, (0x46 << 2), 0);
    sub_020307F8();
    sub_0203088C(4, 0);
    ov40_0223D540(r4);
    ov39_0222774C(r6, r5);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    ov40_0223D5CC((*((u32*)(r4 + 8)) + 1));
    ov40_0223D540(r4);
    // add r1, sp, #4
    ov39_02227D44();
    StopSE(0x0000057D, 0);
    StopSE(0);
    PlaySE(0x00000577);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    ov40_0223A510(r4, 0x00000119, 0);
    System_GetTouchNew();
    ov40_0222DEAC(r4);
    ov40_02230964(r4, 1);
    ov40_0223B44C(r4);
    ov40_02230964(r4, 0);
    sub_020879E0(*((u32*)(r4 + (0x6f << 4))), 0);
    sub_02087A08(*((u32*)(r4 + (0x6f << 4))), 0, 0);
    ov40_0222FDC4(r4);
    ov40_0222FCCC(r4);
    // add r0, r4, r0
    ov40_0222F734(0x0000049C);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    TouchHitboxController_Destroy(*((u32*)(r5 + (0x62 << 2))));
    TouchHitboxController_Destroy(*((u32*)(r5 + (0x63 << 2))));
    TouchHitboxController_Destroy(*((u32*)(r5 + (0x19 << 4))));
    ov40_0223A83C(r4);
    // add r5, #8
    ov40_0222DAA8(r5);
    ov40_02230964(r4, 1);
    ov40_0222D88C(r4);
    ov40_02230964(r4, 0);
    sub_0203A948(1, 0x6d);
    ov40_0222FB90(r4, 1);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    ov40_0222FBB4(r4);
    // add r0, #8
    ov40_0222DA84(r5, 0);
    ov40_0222DD08(r4);
    // add r0, #8
    ov40_0222DAA8(r5);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 2, 0xc, 0x10);
    ov40_0222BF64(r4, 1, 1, *((u32*)(r4 + 0x10)));
    ov40_0222BF80(r4, 5);
    BgClearTilemapBufferAndCommit(*((u32*)(r4 + 0x24)), 2);
    BgClearTilemapBufferAndCommit(*((u32*)(r4 + 0x24)), 6);
    BgClearTilemapBufferAndCommit(*((u32*)(r4 + 0x24)), 3);
    BgClearTilemapBufferAndCommit(*((u32*)(r4 + 0x24)), 7);
    Heap_Free(r5);
    sub_0202FC48();
    sub_0202FC24();
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 1, 2, ((*((u32*)(r5 + 8)) << 0x18) >> 0x18));
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 3, 0xc, ((*((u32*)(r5 + 8)) << 0x18) >> 0x18));
}





void ov40_0223AC24(void) {
    // add r0, #8
    ov40_0222DA84(*((u32*)(r0 + (0x86 << 4))), 1);
    ov40_0222DA00(r4, (r4 + 4), 1, 2);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnDataFromOpenNarc(*((u32*)(r5 + 0x14)), 0x54, *((u32*)(r5 + 0x24)), 7);
    ov40_0223A510(r5, 0x66, *((u32*)(r4 + 0x00002028)));
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r5 + 0x28)), 3, 0xc, ((*((u32*)(r4 + 8)) << 0x18) >> 0x18));
    ov40_0222DA00(r4, (r4 + 4), 0, 2);
    ov40_0223CD58(r5);
    GfGfx_EngineBTogglePlanes(4, 1);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    ov40_0222BF80((*((u32*)(r5 + 8)) + 1), 0xf);
}





void ov40_0223ACD0(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0223ACF0: ; jump table
    BgClearTilemapBufferAndCommit(*((u32*)(r0 + 0x24)), 2);
    BgClearTilemapBufferAndCommit(*((u32*)(r4 + 0x24)), 6);
    GfGfx_EngineBTogglePlanes(4, 0);
    GfGfx_EngineATogglePlanes(4, 0);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // add r0, #8
    ov40_0222DA84(r5, 1);
    ov40_0222DA00(r5, (r5 + 4), 1, 0);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 3, 0xc, ((*((u32*)(r5 + 8)) << 0x18) >> 0x18));
    // add r0, #0xc
    // add r0, r5, r0
    // add r1, #0x14
    ov40_0222D66C((0x45 << 2), r4, 3);
    // add r0, r5, r0
    // add r1, #0x14
    ov40_0222D66C((0x13 << 4), r4, 0x5e);
    ManagedSprite_SetAnim(*((u32*)(r5 + (0x46 << 2))), 0);
    ManagedSprite_SetAnim(*((u32*)(r5 + (0x4d << 2))), 3);
    ov40_0223CCA0(r4);
    ov40_0223CD14(r4);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharDataFromOpenNarc(*((u32*)(r4 + 0x14)), 0x3e, *((u32*)(r4 + 0x24)), 3);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharDataFromOpenNarc(*((u32*)(r4 + 0x14)), 0x3e, *((u32*)(r4 + 0x24)), 7);
    ov40_02230964(r4, 1);
    // add r0, r5, r0
    ov40_0223064C((0x22 << 4), r4);
    // add r0, r5, r0
    ov40_02230638((0x22 << 4), r4);
    // add r0, r5, r0
    ov40_022306A0((0x22 << 4), 0);
    // add r0, r5, r0
    ov40_02230410((0x22 << 4));
    ov40_022307DC(r4, r0, 3);
    // add r0, r5, r0
    ov40_0222E7B8((0x65 << 2), r4);
    // add r0, r5, r0
    ov40_0222E79C((0x65 << 2), r4);
    // add r0, r5, r0
    ov40_0222E7DC((0x65 << 2), 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnDataFromOpenNarc(*((u32*)(r4 + 0x14)), 0x50, *((u32*)(r4 + 0x24)), 3);
    ov40_02230964(r4, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnDataFromOpenNarc(*((u32*)(r4 + 0x14)), 6, *((u32*)(r4 + 0x24)), 7);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // add r0, #8
    ov40_0222DA84(r5, 0);
    ov40_0222DA00(r5, (r5 + 4), 0, 0);
    // add r0, r5, r0
    ov40_022306A0((0x22 << 4), 1);
    // add r0, r5, r0
    ov40_0222E7DC((0x65 << 2), 1);
    GfGfx_EngineBTogglePlanes(4, 1);
    GfGfx_EngineATogglePlanes(4, 1);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 3, 0xc, ((*((u32*)(r5 + 8)) << 0x18) >> 0x18));
    // add r5, r4, r1
    // sub r1, #0x78
    // str r5, [r6, r1]
    // add r5, #0xe4
    ov40_0222BF80(r4, 7, 0x00004138, *((u32*)(r4 + 0x00004138)));
}





void ov40_0223AF24(void) {
}





void ov40_0223AF3C(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0223AF5C: ; jump table
    BgClearTilemapBufferAndCommit(*((u32*)(r0 + 0x24)), 2);
    BgClearTilemapBufferAndCommit(*((u32*)(r4 + 0x24)), 6);
    GfGfx_EngineBTogglePlanes(4, 0);
    GfGfx_EngineATogglePlanes(4, 0);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // add r0, #8
    ov40_0222DA84(r5, 1);
    ov40_0222DA00(r5, (r5 + 4), 1, 0);
    ov40_02230964(r4, 1);
    ov40_0223B44C(r4);
    ov40_02230964(r4, 0);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 3, 0xc, ((*((u32*)(r5 + 8)) << 0x18) >> 0x18));
    ov40_0223A430();
    // add r0, r5, r0
    // add r1, #0x14
    ov40_0222D66C((0x45 << 2), r4, 3);
    // add r0, r5, r0
    // add r1, #0x14
    ov40_0222D66C((0x13 << 4), r4, 0x5e);
    ManagedSprite_SetAnim(*((u32*)(r5 + (0x46 << 2))), 0);
    ManagedSprite_SetAnim(*((u32*)(r5 + (0x4d << 2))), 3);
    ov40_0223CD14(r4);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharDataFromOpenNarc(*((u32*)(r4 + 0x14)), 0x3e, *((u32*)(r4 + 0x24)), 3);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharDataFromOpenNarc(*((u32*)(r4 + 0x14)), 0x3e, *((u32*)(r4 + 0x24)), 7);
    ov40_02230964(r4, 1);
    // add r0, r5, r0
    ov40_02230638((0x22 << 4), r4);
    // add r0, r5, r0
    ov40_022306A0((0x22 << 4), 0);
    // add r0, r5, r0
    ov40_02230410((0x22 << 4));
    ov40_022307DC(r4, r0, 3);
    // add r0, r5, r0
    ov40_0222E79C((0x65 << 2), r4);
    // add r0, r5, r0
    ov40_0222E7DC((0x65 << 2), 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnDataFromOpenNarc(*((u32*)(r4 + 0x14)), 0x50, *((u32*)(r4 + 0x24)), 3);
    ov40_02230964(r4, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnDataFromOpenNarc(*((u32*)(r4 + 0x14)), 6, *((u32*)(r4 + 0x24)), 7);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // add r0, #8
    ov40_0222DA84(r5, 0);
    ov40_0222DA00(r5, (r5 + 4), 0, 0);
    // add r0, r5, r0
    ov40_022306A0((0x22 << 4), 1);
    // add r0, r5, r0
    ov40_0222E7DC((0x65 << 2), 1);
    GfGfx_EngineBTogglePlanes(4, 1);
    GfGfx_EngineATogglePlanes(4, 1);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 3, 0xc, ((*((u32*)(r5 + 8)) << 0x18) >> 0x18));
    // add r5, r4, r1
    // sub r1, #0x78
    // str r5, [r6, r1]
    // add r5, #0xe4
    ov40_0222BF80(r4, 7, 0x00004138, *((u32*)(r4 + 0x00004138)));
}





void ov40_0223B190(void) {
    // add r0, r4, r0
    // add r0, r4, r0
    // add r0, #8
    // add r0, r4, r0
    // add r1, #0x14
    // add r0, r4, r0
    // add r1, #0x14
    // str r0, [sp]
}





void ov40_0223B29C(void) {
    // add r4, r5, r1
    // str r0, [sp, #0x10]
    NewString_ReadMsgData(*((u32*)(r1 + 0x48)), 8);
    ov40_0222DAB0(0x6d);
    NewString_ReadMsgData(*((u32*)(r5 + 0x48)), 7);
    // str r0, [sp, #0x14]
    sub_020315B8(*((u32*)(r4 + r6)), 0x6d);
    ov40_02230DCC(r5, r0);
    String_New(0xff, 0x6d);
    // str r0, [sp]
    // str r0, [sp, #4]
    BufferString(r7, 0, r6, 0);
    // ldr r2, [sp, #0x14]
    StringExpandPlaceholders(r7, r4);
    // ldr r0, [sp, #0x14]
    String_Delete();
    String_Delete(r6);
    MessageFormat_Delete(r7);
    // add r0, sp, #0x18
    InitWindow();
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r1, sp, #0x18
    AddTextWindowTopLeftCorner(*((u32*)(r5 + 0x24)), 0x14, 2);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, sp, #0x18
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(0x000E0D00, 0, r4, 0);
    // ldr r0, [sp, #0x10]
    // ldr r1, [sp, #0x10]
    // add r2, sp, #0x18
    TextOBJ_CopyFromBGWindow(*((u32*)(r0 + 8)), *((u32*)(r1 + 0xc)), 0x6d);
    String_Delete(r4);
    // add r0, sp, #0x18
    RemoveWindow();
}





void ov40_0223B374(void) {
    // str r0, [sp]
    // add r2, sp, #0x20
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // add r2, sp, #0x10
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldr r0, [sp]
    ov40_0222D78C(2, ov40_022454D0);
    // add r5, r4, r0
    // add r0, sp, #0x20
    // str r0, [sp, #8]
    // str r0, [sp, #4]
    // ldr r0, [sp]
    // str r0, [sp, #0xc]
    // add r0, #0x14
    // add r7, sp, #0x10
    // str r0, [sp, #0xc]
    // ldr r0, [sp]
    ov40_0222D800(0x69, 2);
    // str r0, [r4, r1]
    // ldr r1, [sp, #0xc]
    ov40_0222D5AC(r5, (0x46 << 2), 2);
    // ldr r2, [sp, #8]
    // ldr r1, [sp, #0xc]
    ov40_0222D66C(r5, *((u32*)r2));
    // ldr r1, [sp]
    ov40_0223B29C(r5, (r6 + 1));
    // ldr r2, [sp, #4]
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXY(*((u32*)(r4 + (0x46 << 2))), 0x32, (r2 << 0x10));
    ManagedSprite_SetAnim(*((u32*)(r4 + (0x46 << 2))), *((u32*)r7));
    // sub r2, #0x2c
    sub_020136B4(*((u32*)(r4 + (0x47 << 2))), 0x24, 0x24);
    TextOBJ_SetSpritesDrawFlag(*((u32*)(r4 + (0x47 << 2))), 1);
    // ldr r0, [sp, #8]
    // str r0, [sp, #8]
    // ldr r0, [sp, #4]
    // add r4, #0x1c
    // add r0, #0x24
    // add r5, #0x1c
    // str r0, [sp, #4]
}





void ov40_0223B44C(void) {
    // str r0, [sp]
    // add r4, r5, r0
    // add r4, #0x1c
    // add r5, #0x1c
    // ldr r0, [sp]
}





void ov40_0223B480(void) {
    // add r0, r4, r0
    // add r0, r4, r0
}





void ov40_0223B4BC(void) {
    // sub r2, #0x2c
    // sub r2, #0x2c
}





void ov40_0223B538(void) {
    // add r5, #0x14
    ClearWindowTilemapAndCopyToVram(*((u32*)(r0 + (0x86 << 4))), (0x86 << 4));
    RemoveWindow(r5);
    // add r5, #0x10
    // str r1, [r6, r0]
}





void ov40_0223B574(void) {
    // add r5, #0x94
    ClearWindowTilemapAndCopyToVram(*((u32*)(r0 + (0x86 << 4))), (0x86 << 4));
    RemoveWindow(r5);
    // add r5, #0x10
    // str r1, [r6, r0]
}





void ov40_0223B5B0(void) {
    Heap_Alloc(0x6d, 0x0000217C);
    memset(0, 0x0000217C);
    // str r4, [r5, r0]
    // add r0, #0xc
    *((u32*)(r4 + 0xc)) = 0;
    *((u32*)(r4 + 0xc)) = 1;
    *((u32*)(r4 + 0xc)) = 2;
    BgClearTilemapBufferAndCommit(*((u32*)(r5 + 0x24)), 2);
    BgClearTilemapBufferAndCommit(*((u32*)(r5 + 0x24)), 3);
    BgClearTilemapBufferAndCommit(*((u32*)(r5 + 0x24)), 6);
    BgClearTilemapBufferAndCommit(*((u32*)(r5 + 0x24)), 7);
    ov40_0222D9E8(r4, (r4 + 4), 0);
    ov40_0222BF80(r5, 1);
}





void ov40_0223B62C(void) {
    // add r0, #8
    // str r0, [sp]
    // str r0, [sp]
    // str r0, [sp]
}





void ov40_0223B75C(void) {
    ov40_0223D5CC((0x86 << 4));
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0223B78A: ; jump table
    ov40_0223077C(r4, *((u32*)(r4 + (0x6f << 4))), 0x80, 0x60);
    sub_020879E0(*((u32*)(r4 + (0x6f << 4))), 1);
    sub_02087A08(*((u32*)(r4 + (0x6f << 4))), 0x18, 0x18);
    // sub r0, r0, r1
    // sub r1, #0x15
    ov40_0222DED0(r4, (0x4b << 2));
    // sub r1, #8
    ov40_0222DED0(r4);
    PlaySE(0x0000057D);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    *((u32*)(r5 + 0xc)) = 0;
    ov40_0223D540(r4, *((u32*)(r4 + 0x0000086C)));
    ov39_022276A4();
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    *((u32*)(r5 + 0xc)) = 1;
    ov40_0223D540(r4);
    ov39_022276E0();
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    *((u32*)(r5 + 0xc)) = 2;
    sub_02087E1C(r4);
    ov40_0223D540(r4);
    ov39_02227648();
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    ov40_0223D540(r4);
    ov39_022275E8();
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    GF_AssertFail((*((u32*)(r4 + 8)) + 1));
    ov40_0222DFB0(r4);
    ov40_0223D540(r4);
    // add r1, sp, #4
    ov39_02227D44();
    StopSE(0x0000057D, 0);
    // ldr r3, [sp, #4]
    ov40_02230CDC(r4, 7, *((u32*)(r3 + 0xc)), *((u32*)(r3 + 4)));
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    StopSE((*((u32*)(r4 + 8)) + 1), 0);
    PlaySE(0x00000577);
    ov40_02230CDC(r4, 5, 0, 0);
    // str r1, [r4, r0]
    sub_020879E0(*((u32*)(r4 + (0x6f << 4))), 0);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    *((u32*)(r4 + 8)) = 0xff;
    sub_020879E0(*((u32*)(r4 + (0x6f << 4))), 0);
    sub_02087A08(*((u32*)(r4 + (0x6f << 4))), 0, 0);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // add r0, #8
    ov40_0222DA84(r5, 1);
    ov40_0222DA00(r5, (r5 + 4), 1, 0);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 3, 0xc, ((*((u32*)(r5 + 8)) << 0x18) >> 0x18));
    ov40_02230964(r4, 1);
    ov40_0223B480(r4);
    ov40_0222D88C(r4);
    ov40_02230964(r4, 0);
    sub_0203A948(1, 0x6d);
    ov40_0222FB90(r4, 1);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    ov40_0222FBB4(r4);
    // add r0, #8
    ov40_0222DA84(r5, 0);
    ov40_0222DD08(r4);
    // add r0, #8
    ov40_0222DAA8(r5);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 2, 0xc, 0x10);
    ov40_0222BF64(r4, 1, 1, *((u32*)(r4 + 0x10)));
    ov40_0222BF80(r4, 5);
    BgClearTilemapBufferAndCommit(*((u32*)(r4 + 0x24)), 2);
    BgClearTilemapBufferAndCommit(*((u32*)(r4 + 0x24)), 6);
    BgClearTilemapBufferAndCommit(*((u32*)(r4 + 0x24)), 3);
    BgClearTilemapBufferAndCommit(*((u32*)(r4 + 0x24)), 7);
    Heap_Free(r5);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 1, 2, ((*((u32*)(r5 + 8)) << 0x18) >> 0x18));
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 3, 0xc, ((*((u32*)(r5 + 8)) << 0x18) >> 0x18));
    sub_020879E0(*((u32*)(r4 + (0x6f << 4))), 0);
    sub_02087A08(*((u32*)(r4 + (0x6f << 4))), 0, 0);
    ov40_0222BF80(r4, 3);
}





void ov40_0223BA70(void) {
    // ldmia r3!, {r0, r1}
    // add r2, sp, #0x14
    // stmia r2!, {r0, r1}
    // add r6, #0x14
    // str r0, [r2]
    InitWindow(*((u32*)(r0 + (0x86 << 4))), ov40_022454A4);
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    AddWindowParameterized(*((u32*)(r5 + 0x24)), r6, 2, 3);
    FillWindowPixelBuffer(r6, 0);
    // add r1, sp, #0x14
    NewString_ReadMsgData(*((u32*)(r5 + 0x48)), *((u32*)(*((u32*)(r4 + 0xc)) + (*((u32*)(r4 + 0xc)) << 2))), (*((u32*)(r4 + 0xc)) << 2));
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r6, 0, r0, 0);
    ScheduleWindowCopyToVram(r6);
    String_Delete(r7);
    // add r6, #0x94
    InitWindow(r4);
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, #0xf2
    // str r0, [sp, #0x10]
    AddWindowParameterized(*((u32*)(r5 + 0x24)), r6, 6, 0xb);
    FillWindowPixelBuffer(r6, 0);
    NewString_ReadMsgData(*((u32*)(r5 + 0x48)), 0x5f);
    FontID_String_GetWidthMultiline(0, r0, 0);
    // sub r0, r1, r0
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r6, 0, r5, (r0 >> 1));
    ScheduleWindowCopyToVram(r6);
    String_Delete(r5);
    // str r1, [r4, r0]
    // str r1, [r4, r0]
}





void ov40_0223BB74(void) {
    sub_0202FC48(*((u32*)(r0 + 8)));
    sub_0202FC24();
    // add r2, r4, r0
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // str r1, [r4, r0]
    // str r1, [r4, r0]
    ov40_0222FE00(r5, *((u32*)(r5 + 0x00004138)), ov40_022454F0);
    ov40_0222FE8C(0x6d);
    // str r0, [r4, r1]
    // add r1, #8
    // str r0, [r4, r1]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharDataFromOpenNarc(*((u32*)(r5 + 0x14)), 0x3e, *((u32*)(r5 + 0x24)), 3);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharDataFromOpenNarc(*((u32*)(r5 + 0x14)), 0x3e, *((u32*)(r5 + 0x24)), 7);
    ov40_022307DC(r5, 4, 3);
    ov40_022307DC(r5, 7, 7);
    GfGfx_EngineBTogglePlanes(8, 1);
    GfGfx_EngineATogglePlanes(8, 1);
    GfGfx_EngineATogglePlanes(4, 0);
    GfGfx_EngineBTogglePlanes(4, 0);
    ov40_0223B4BC(r5, 1);
    ov40_0223BA70(r5);
    ov40_02230964(r5, 1);
    // add r0, r5, r0
    ov40_0222F9D4(0x0000047C, r5);
    // add r0, r5, r0
    // add r3, r4, r3
    ov40_0222E9B8(0x0000049C, r5, 0, 0x00002054);
    // str r0, [r5, r1]
    // sub r0, #0x68
    // sub r1, #0x48
    // add r0, r5, r0
    // add r1, r5, r1
    ov40_0222FA5C(0x000004E4, 0x000004E4);
    // add r0, r5, r0
    ov40_0222F740(0x0000049C, r5, 1);
    // add r0, r5, r0
    ov40_0222F858(0x0000049C, 0x40, 0xb8);
    // add r0, r5, r0
    ov40_0222F488(0x0000049C, r5);
    ov40_02230964(r5, 0);
    ov40_02230964(r5, 1);
    ov40_0223D008(r5);
    ov40_0223D1AC(r5, 0);
    ov40_02230964(r5, 0);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    // add r0, #8
    ov40_0222DA84(r4, 0);
    ov40_0222DA00(r4, (r4 + 4), 0, 0);
    GfGfx_EngineATogglePlanes(4, 1);
    GfGfx_EngineBTogglePlanes(4, 1);
    ov40_0223D1AC(r5, 1);
    // add r3, #0x4c
    // asr r3, r3, #0x10
    ov40_0223077C(r5, *((u32*)(r5 + (0x6f << 4))), 0x10, ((0x18 * *((u32*)(r5 + 0x000004D8))) << 0x10));
    sub_020879E0(*((u32*)(r5 + (0x6f << 4))), 1);
    sub_02087A08(*((u32*)(r5 + (0x6f << 4))), 0xc, 0xc);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r5 + 0x28)), 3, 0xc, ((*((u32*)(r4 + 8)) << 0x18) >> 0x18));
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r5 + 0x28)), 2, 0xc, ((*((u32*)(r4 + 8)) << 0x18) >> 0x18));
    ov40_0222BF80(4);
}





void ov40_0223BD98(void) {
    // add r0, r5, r0
    ov40_0222FA88(0x0000047C, *((u32*)(r0 + 8)));
    // add r0, r5, r1
    // sub r1, #0x10
    // ldrsh r1, [r5, r1]
    ov40_0222F5EC(0x0000049C);
    // add r0, r5, r0
    ov40_0222F488(0x0000049C, r5);
    // add r2, #0x4c
    // asr r2, r2, #0x10
    sub_020878EC(*((u32*)(r5 + (0x6f << 4))), 0x10, ((0x18 * *((u32*)(r5 + 0x000004D8))) << 0x10), *((u32*)(r5 + 0x000004D8)));
    ov40_0223D244(r5);
    TouchscreenHitbox_TouchNewIsIn(ov40_02245494);
    ov40_02230944(r5);
    // add r1, r5, r0
    // str r1, [r4, r0]
    *((u32*)(r4 + 0x10)) = 0;
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    TouchscreenHitbox_TouchNewIsIn(ov40_02245498, 6);
    ov40_02230944(r5);
    // str r1, [r4, r0]
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    // add r0, r5, r0
    ov40_0222FA24(0x0000047C, 5);
    // add r0, r5, r0
    ov40_0222F720(0x0000049C);
    // add r0, r5, r0
    ov40_0222F920(0x0000049C, r5);
    ov40_0222FE98(*((u32*)(r4 + (0x82 << 6))));
    ov40_0223D1F0(r5);
    ov40_0222FE68(r5);
    ov40_0223B538(r5);
    ov40_0223B574(r5);
    sub_020879E0(*((u32*)(r5 + (0x6f << 4))), 0);
    sub_02087A08(*((u32*)(r5 + (0x6f << 4))), 0, 0);
    // add r0, r5, r0
    ov40_0222FA18(0x0000047C);
    // add r0, r5, r0
    ov40_0222F734(0x0000049C);
    // str r1, [r4, r0]
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    // add r0, #8
    ov40_0222DA84(r4, 1);
    ov40_0222DA00(r4, (r4 + 4), 1, 0);
    ov40_0223B4BC(r5, 0);
    // add r0, r4, r0
    // add r1, #0x14
    ov40_0222D66C((0x45 << 2), r5, 3);
    // add r0, r4, r0
    // add r1, #0x14
    ov40_0222D66C((0x13 << 4), r5, 0x5e);
    ManagedSprite_SetAnim(*((u32*)(r4 + (0x46 << 2))), 0);
    ManagedSprite_SetAnim(*((u32*)(r4 + (0x4d << 2))), 3);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r5 + 0x28)), 3, 0xc, ((*((u32*)(r4 + 8)) << 0x18) >> 0x18));
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r5 + 0x28)), 2, 0xc, ((*((u32*)(r4 + 8)) << 0x18) >> 0x18));
    ov40_0222BF80(*((u32*)(r4 + 0x00002034)));
}





void ov40_0223BF88(void) {
    // add r0, #8
    // str r0, [sp]
    // add r4, #8
    // add r0, #8
    // add r0, #8
    // str r0, [sp]
    // str r0, [sp]
    // str r0, [sp]
}





void ov40_0223C0D8(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0223C0F6: ; jump table
    ov40_022307DC(6, 7);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    ov40_0223CFA8((*((u32*)(r4 + 8)) + 1));
    // str r0, [sp]
    TouchHitboxController_Create(ov40_022454E0, 4, ov40_0223CE64, r4);
    // str r0, [r5, r1]
    // str r0, [sp]
    TouchHitboxController_Create(ov40_022454B0, 4, ov40_0223CF00, r4);
    // str r0, [r5, r1]
    // str r0, [sp]
    TouchHitboxController_Create(ov40_0224549C, 2, ov40_0223CF70, r4);
    // str r0, [r5, r1]
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    ov40_02230964((*((u32*)(r4 + 8)) + 1), 1);
    // add r0, r5, r0
    ov40_02230638((0x22 << 4), r4);
    // add r0, r5, r0
    ov40_02230410((0x22 << 4));
    ov40_022307DC(r4, r0, 3);
    // add r0, r5, r0
    ov40_022306A0((0x22 << 4), 0);
    ov40_02230964(r4, 0);
    GfGfx_EngineATogglePlanes(8, 1);
    GfGfx_EngineBTogglePlanes(8, 1);
    GfGfx_EngineATogglePlanes(4, 0);
    GfGfx_EngineBTogglePlanes(4, 0);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // add r0, #8
    ov40_0222DA84(r5, 0);
    ov40_0222DA00(r5, (r5 + 4), 0, 0);
    // add r0, r5, r0
    ov40_022306A0((0x22 << 4), 1);
    ov40_0223CD14(r4);
    GfGfx_EngineATogglePlanes(4, 1);
    GfGfx_EngineBTogglePlanes(4, 1);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 3, 0xc, ((*((u32*)(r5 + 8)) << 0x18) >> 0x18));
    ov40_0222BF80(r4, 7);
}





void ov40_0223C240(void) {
}





void ov40_0223C258(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0223C276: ; jump table
    // add r0, r4, r0
    // add r0, r4, r0
    // add r0, r4, r0
    // add r0, r4, r0
    // add r0, r4, r0
    // add r0, r4, r0
    // add r0, r4, r0
    // add r0, r4, r0
    // add r0, r4, r0
    // eor r1, r0
    // add r1, #0x79
}





void ov40_0223C3A4(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 0, 0, 0);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    IsPaletteFadeFinished((*((u32*)(r5 + 8)) + 1));
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    ov40_02230964((*((u32*)(r5 + 8)) + 1), 1);
    // add r0, r4, r0
    ov40_0223064C((0x22 << 4), r5);
    // add r0, r4, r0
    ov40_0222E7B8((0x65 << 2), r5);
    TouchHitboxController_Destroy(*((u32*)(r4 + (0x62 << 2))));
    TouchHitboxController_Destroy(*((u32*)(r4 + (0x63 << 2))));
    TouchHitboxController_Destroy(*((u32*)(r4 + (0x19 << 4))));
    ov40_0223A83C(r5);
    ov40_0223CCA0(r5);
    ov40_0223D504(r5);
    ov40_02230964(r5, 0);
    ov40_02230964(r5, 1);
    ov40_0222D8C8(r5);
    ov40_02230964(r5, 0);
    ov40_0222C4E8(r5, *((u32*)*((u32*)(r5 + 0x10))));
    sub_02087A84(*((u32*)(r5 + 0x00000868)), 1, 0);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    Heap_Free(r4);
}





void ov40_0223C498(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0223C4B8: ; jump table
    ov40_02230738((*((u16*)(*((u32*)(r0 + 8)) + 6)) << 0x10));
    ov40_0222D9E8(r5, (r5 + 4), 0);
    // add r3, r4, r0
    // sub r7, #0x78
    // str r3, [r6, r7]
    // add r3, #0xe4
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharDataFromOpenNarc(*((u32*)(r4 + 0x14)), 0x3e, *((u32*)(r4 + 0x24)), 3);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharDataFromOpenNarc(*((u32*)(r4 + 0x14)), 0x3e, *((u32*)(r4 + 0x24)), 7);
    ov40_022307DC(r4, 6, 7);
    GfGfx_EngineATogglePlanes(8, 1);
    GfGfx_EngineBTogglePlanes(8, 1);
    // add r0, r5, r0
    // add r1, #0x14
    ov40_0222D66C((0x45 << 2), r4, 3);
    // add r0, r5, r0
    // add r1, #0x14
    ov40_0222D66C((0x13 << 4), r4, 0x5e);
    ManagedSprite_SetAnim(*((u32*)(r5 + (0x46 << 2))), 0);
    ManagedSprite_SetAnim(*((u32*)(r5 + (0x4d << 2))), 3);
    // str r1, [r5, r0]
    // ldrsh r1, [r4, r1]
    // str r1, [r5, r0]
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    ov40_0223CFA8((*((u32*)(r4 + 8)) + 1), 0x000004A4);
    // str r0, [sp]
    TouchHitboxController_Create(ov40_022454E0, 4, ov40_0223CE64, r4);
    // str r0, [r5, r1]
    // str r0, [sp]
    TouchHitboxController_Create(ov40_022454B0, 4, ov40_0223CF00, r4);
    // str r0, [r5, r1]
    // str r0, [sp]
    TouchHitboxController_Create(ov40_0224549C, 2, ov40_0223CF70, r4);
    // str r0, [r5, r1]
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    ov40_02230964((*((u32*)(r4 + 8)) + 1), 1);
    // add r0, r5, r0
    ov40_02230638((0x22 << 4), r4);
    // add r0, r5, r0
    ov40_02230410((0x22 << 4));
    ov40_022307DC(r4, r0, 3);
    // add r0, r5, r0
    ov40_022306A0((0x22 << 4), 0);
    ov40_02230964(r4, 0);
    GfGfx_EngineATogglePlanes(8, 1);
    GfGfx_EngineBTogglePlanes(8, 1);
    GfGfx_EngineATogglePlanes(4, 0);
    GfGfx_EngineBTogglePlanes(4, 0);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // add r0, #8
    ov40_0222DA84(r5, 0);
    ov40_0222DA00(r5, (r5 + 4), 0, 0);
    // add r0, r5, r0
    ov40_022306A0((0x22 << 4), 1);
    ov40_0223CD14(r4);
    GfGfx_EngineATogglePlanes(4, 1);
    GfGfx_EngineBTogglePlanes(4, 1);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 3, 0xc, ((*((u32*)(r5 + 8)) << 0x18) >> 0x18));
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 1, 1, 0);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    IsPaletteFadeFinished((*((u32*)(r4 + 8)) + 1));
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // str r1, [r4, r0]
    ov40_0222C4B8(r4, (*((u32*)(r4 + 0x000006D8)) + 1));
    ov40_0222BF80(r4, 7);
}





void ov40_0223C710(void) {
    // sub r1, #0x44
    ov40_0222C6C8(2);
    GfGfx_EngineATogglePlanes(4, 1);
    // add r0, r5, r0
    InitWindow(0x000008A4);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, r5, r1
    AddWindowParameterized(*((u32*)(r5 + 0x24)), 0x000008A4, 2, 1);
    // str r0, [sp, #0x14]
    ov40_0222DAB0(0x6d);
    String_New(0xff, 0x6d);
    // ldr r0, [sp, #0x14]
    sub_020315B8(0x6d);
    // str r0, [sp, #0x18]
    // ldr r1, [sp, #0x18]
    ov40_02230DCC(r5);
    NewString_ReadMsgData(*((u32*)(r5 + 0x48)), r4);
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x18]
    BufferString(r7, 0, 0);
    StringExpandPlaceholders(r7, r6, r4);
    // ldr r0, [sp, #0x18]
    String_Delete();
    String_Delete(r4);
    MessageFormat_Delete(r7);
    NewString_ReadMsgData(*((u32*)(r5 + 0x48)), r4);
    // add r0, r5, r0
    FillWindowPixelBuffer(0x000008A4, 0xcc);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r5, r0
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(0x000008A4, 0, r6, 0);
    // add r0, r5, r0
    ScheduleWindowCopyToVram(0x000008A4);
    String_Delete(r6);
}





void ov40_0223C80C(void) {
    sub_020307F8((0x86 << 4));
    sub_0203088C(4, 0);
    ov40_02230D94(r4, r0, r1, r0);
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0223C84A: ; jump table
    ov40_02230964(r4, 1);
    // add r0, r5, r0
    ov40_0223064C((0x22 << 4), r4);
    // add r0, r5, r0
    ov40_0222E7B8((0x65 << 2), r4);
    ov40_0223CCA0(r4);
    ov40_02230964(r4, 0);
    ov40_02230964(r4, 1);
    ov40_0223D504(r4);
    ov40_02230964(r4, 0);
    GfGfx_EngineATogglePlanes(4, 0);
    GfGfx_EngineBTogglePlanes(4, 0);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // add r0, #8
    ov40_0222DA84(r5, 1);
    ov40_0222DA00(r5, (r5 + 4), 1, 0);
    ov40_02230964(r4, 1);
    ov40_0223B374(r4);
    ov40_02230964(r4, 0);
    BgClearTilemapBufferAndCommit(*((u32*)(r4 + 0x24)), 3);
    BgClearTilemapBufferAndCommit(*((u32*)(r4 + 0x24)), 7);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 3, 0xc, ((*((u32*)(r5 + 8)) << 0x18) >> 0x18));
    ov40_0222DED0(r4, 0x00000115);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    System_GetTouchNew((*((u32*)(r4 + 8)) + 1));
    ov40_0222DFB0(r4);
    BgClearTilemapBufferAndCommit(*((u32*)(r4 + 0x24)), 2);
    BgClearTilemapBufferAndCommit(*((u32*)(r4 + 0x24)), 6);
    GfGfx_EngineBTogglePlanes(4, 0);
    GfGfx_EngineATogglePlanes(4, 0);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // add r0, #8
    ov40_0222DA84(r5, 1);
    ov40_0222DA00(r5, (r5 + 4), 1, 0);
    ov40_02230964(r4, 1);
    ov40_0223B44C(r4);
    ov40_02230964(r4, 0);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 3, 0xc, ((*((u32*)(r5 + 8)) << 0x18) >> 0x18));
    ov40_02230964(r4, 1);
    ov40_0223A430(r4);
    ov40_02230964(r4, 0);
    // add r0, r5, r0
    // add r1, #0x14
    ov40_0222D66C((0x45 << 2), r4, 3);
    // add r0, r5, r0
    // add r1, #0x14
    ov40_0222D66C((0x13 << 4), r4, 0x5e);
    ManagedSprite_SetAnim(*((u32*)(r5 + (0x46 << 2))), 0);
    ManagedSprite_SetAnim(*((u32*)(r5 + (0x4d << 2))), 3);
    ov40_0223CD14(r4);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharDataFromOpenNarc(*((u32*)(r4 + 0x14)), 0x3e, *((u32*)(r4 + 0x24)), 3);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharDataFromOpenNarc(*((u32*)(r4 + 0x14)), 0x3e, *((u32*)(r4 + 0x24)), 7);
    ov40_02230964(r4, 1);
    // add r0, r5, r0
    ov40_02230638((0x22 << 4), r4);
    // add r0, r5, r0
    ov40_022306A0((0x22 << 4), 0);
    // add r0, r5, r0
    ov40_02230410((0x22 << 4));
    ov40_022307DC(r4, r0, 3);
    // add r0, r5, r0
    ov40_0222E79C((0x65 << 2), r4);
    // add r0, r5, r0
    ov40_0222E7DC((0x65 << 2), 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnDataFromOpenNarc(*((u32*)(r4 + 0x14)), 0x50, *((u32*)(r4 + 0x24)), 3);
    ov40_02230964(r4, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnDataFromOpenNarc(*((u32*)(r4 + 0x14)), 6, *((u32*)(r4 + 0x24)), 7);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // add r0, #8
    ov40_0222DA84(r5, 0);
    ov40_0222DA00(r5, (r5 + 4), 0, 0);
    // add r0, r5, r0
    ov40_022306A0((0x22 << 4), 1);
    // add r0, r5, r0
    ov40_0222E7DC((0x65 << 2), 1);
    GfGfx_EngineBTogglePlanes(4, 1);
    GfGfx_EngineATogglePlanes(4, 1);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 3, 0xc, ((*((u32*)(r5 + 8)) << 0x18) >> 0x18));
    // add r5, r4, r1
    // sub r1, #0x78
    // str r5, [r6, r1]
    // add r5, #0xe4
    ov40_0222BF80(r4, 7, 0x00004138, *((u32*)(r4 + 0x00004138)));
    ov40_02230964(r4, 1);
    // add r0, r5, r0
    ov40_0223064C((0x22 << 4), r4);
    // add r0, r5, r0
    ov40_0222E7B8((0x65 << 2), r4);
    ov40_02230964(r4, 0);
    ov40_02230964(r4, 1);
    ov40_0223D504(r4);
    ov40_02230964(r4, 0);
    ov40_0223CCA0(r4);
    GfGfx_EngineATogglePlanes(4, 0);
    GfGfx_EngineBTogglePlanes(4, 0);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // add r0, #8
    ov40_0222DA84(r5, 1);
    ov40_0222DA00(r5, (r5 + 4), 1, 0);
    ov40_02230964(r4, 1);
    ov40_0223B374(r4);
    ov40_02230964(r4, 0);
    BgClearTilemapBufferAndCommit(*((u32*)(r4 + 0x24)), 3);
    BgClearTilemapBufferAndCommit(*((u32*)(r4 + 0x24)), 7);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 3, 0xc, ((*((u32*)(r5 + 8)) << 0x18) >> 0x18));
    // add r0, #8
    ov40_0222DA84(r5, 0);
    ov40_0222DA00(r5, (r5 + 4), 0, 1);
    ov40_0223C710(r4, 0x64, 0);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 3, 0xc, ((*((u32*)(r5 + 8)) << 0x18) >> 0x18));
    ov40_0222BF80(r4, 0xc);
}





void ov40_0223CCA0(void) {
    // add r0, #0x94
    // add r4, #0x94
}





void ov40_0223CCBC(void) {
    // add r4, #0x94
    FillWindowPixelBuffer(*((u32*)(r0 + (0x86 << 4))), 0);
    NewString_ReadMsgData(*((u32*)(r5 + 0x48)), r6);
    ov40_022306C0(r4, r0);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r4, 0, r5, r0);
    String_Delete(r5);
    ScheduleWindowCopyToVram(r4);
}





void ov40_0223CD14(void) {
    // add r6, #0x94
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, #0x79
}





void ov40_0223CD58(void) {
    // add r6, #0x94
    InitWindow(*((u32*)(r0 + (0x86 << 4))));
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    AddWindowParameterized(*((u32*)(r5 + 0x24)), r6, 6, 4);
    FillWindowPixelBuffer(r6, 0);
    NewString_ReadMsgData(*((u32*)(r5 + 0x48)), 0x82);
    ov40_022306C0(r6, r0);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r6, 0, r7, r0);
    String_Delete(r7);
    ScheduleWindowCopyToVram(r6);
    // add r4, #0xa4
    InitWindow(r4);
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    AddWindowParameterized(*((u32*)(r5 + 0x24)), r4, 6, 0x12);
    FillWindowPixelBuffer(r4, 0);
    NewString_ReadMsgData(*((u32*)(r5 + 0x48)), 0x83);
    ov40_022306C0(r4, r0);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r4, 0, r5, r0);
    String_Delete(r5);
    ScheduleWindowCopyToVram(r4);
}





void ov40_0223CE38(void) {
    // add r0, #0x94
    // add r0, #0x94
    // add r0, #0xa4
    // add r4, #0xa4
}





void ov40_0223CE64(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0223CE82: ; jump table
    ov40_02230944(r2, (0x86 << 4));
    ov40_0222BF80(r4, 8);
    ov40_02230944(r4);
    sub_0202FC48();
    ov40_0222BF80(r4, 9);
    // str r1, [r5, r0]
    ov40_0222BF80(r4, 0x12);
    ov40_02230944(r4);
    sub_0202FC48();
    ov40_0222BF80(r4, 0xb);
    // str r1, [r5, r0]
    ov40_0222BF80(r4, 0x12);
    ov40_02230944(r4);
    ov40_0222BF80(r4, 0xa);
}





void ov40_0223CF00(void) {
    // add r1, r0, r0
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0223CF1E: ; jump table
    // add r2, #0x2c
    // str r1, [r3, r0]
    // add r0, r4, r0
    ov40_0222BF80(r2, 0xe, (0x86 << 4), *((u32*)(r2 + (0x86 << 4))));
    ov40_0222BF80(r4, 0x11);
    ov40_02230944(r4);
    ov40_02230944(r4);
    ov40_0222DEAC(r4);
    ov40_0222BF80(r4, 0xd);
}





void ov40_0223CF70(void) {
}





void ov40_0223CFA8(void) {
    sub_020314A4(0x6d);
    // str r0, [r4, r1]
    // add r2, r5, r0
    ov39_022271C0(*((u32*)(r2 + 0x00002608)), *((u32*)(r4 + (0x65 << 2))));
    // add r0, #0x8c
    // str r1, [r4, r0]
    sub_02030920(0x6d, *((u32*)(r4 + (0x65 << 2))));
    // str r0, [r4, r1]
    // add r2, r5, r0
    // add r0, #0x80
    MI_CpuCopy8(*((u32*)(r2 + 0x00002608)), *((u32*)(r4 + (0x89 << 2))), 0x64);
}





void ov40_0223D008(void) {
    // str r0, [sp, #8]
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #8]
    // ldrsh r2, [r0, r1]
    // add r4, sp, #0x50
    // ldmia r5!, {r0, r1}
    // stmia r4!, {r0, r1}
    // add r0, sp, #0x38
    // str r1, [r0]
    *((u32*)(*((u32*)(r0 + (0x86 << 4))) + 4)) = 0;
    *((u32*)(*((u32*)(r0 + (0x86 << 4))) + 8)) = 0;
    *((u32*)(*((u32*)(r0 + (0x86 << 4))) + 0xc)) = 0;
    *((u32*)(*((u32*)(r0 + (0x86 << 4))) + 0x10)) = 0;
    *((u32*)(*((u32*)(r0 + (0x86 << 4))) + 0x14)) = 0;
    // add r0, sp, #0x20
    // str r1, [r0]
    *((u32*)(*((u32*)(r0 + (0x86 << 4))) + 4)) = 0;
    *((u32*)(*((u32*)(r0 + (0x86 << 4))) + 8)) = 0;
    *((u32*)(*((u32*)(r0 + (0x86 << 4))) + 0xc)) = 0;
    *((u32*)(*((u32*)(r0 + (0x86 << 4))) + 0x10)) = 0;
    *((u32*)(*((u32*)(r0 + (0x86 << 4))) + 0x14)) = 0;
    // str r1, [sp, #0x18]
    // ldr r0, [sp, #8]
    // add r0, r0, r1
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x14]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x10]
    // add r0, #0x80
    ov40_022303B8(*((u32*)(*((u32*)(r0 + (0x86 << 4))) + 0x00002608)), 0x00002608, (6 - 1));
    // add r2, sp, #0x38
    // add r4, sp, #0x20
    // stmia r2!, {r3}
    // stmia r4!, {r3}
    // add r0, sp, #0x50
    // str r1, [sp, #0x1c]
    // add r0, r0, r1
    // add r1, sp, #0x38
    // add r2, sp, #0x20
    // ldr r5, [sp, #0x10]
    // add r4, r5, r4
    // add r4, #0x80
    // stmia r1!, {r4}
    // ldr r5, [sp, #0x10]
    // add r4, r4, r6
    // add r4, #0x98
    // stmia r2!, {r4}
    // ldr r0, [sp, #0x10]
    // add r0, #0x80
    ov40_022303B8(*((u32*)((0 + 4) + 0x00002608)), 0x00002608, (0 + 1));
    // ldr r0, [sp, #0x1c]
    // add r1, sp, #0x50
    // add r0, r1, r0
    // add r1, sp, #0x38
    // add r2, sp, #0x20
    // add r0, #0xc
    // add r1, r1, r4
    // add r2, r2, r4
    // ldr r5, [sp, #0x10]
    // add r4, r5, r4
    // add r4, #0x80
    // stmia r1!, {r4}
    // ldr r5, [sp, #0x10]
    // add r4, r4, r6
    // add r4, #0x98
    // stmia r2!, {r4}
    // ldr r5, [sp, #0xc]
    // add r6, sp, #0x38
    // add r4, sp, #0x20
    // ldr r2, [sp, #0x14]
    // str r2, [r5, r1]
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x14]
    // ldr r0, [sp, #8]
    ov40_0222FEA0(0, *((u32*)(*((u32*)(r2 + 0x00002088)) + (0x82 << 6))), *((u32*)(*((u32*)(r5 + 0x00002608)) + 0x0000208C)), *((u32*)*((u32*)r0)));
    // str r0, [r5, r1]
    // sub r1, r1, r7
    ManagedSprite_SetDrawPriority(*((u32*)(r5 + 0x00002090)), 6);
    // ldr r1, [sp, #0x14]
    // add r5, #8
    // str r2, [r1, r0]
    // ldr r0, [sp, #0x10]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0xc]
    // add r0, #0x30
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x18]
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #8]
    ov40_0223A3BC(((0x00002088 + 4) + 1), (*((u32*)(r1 + 0x00002088)) + 1));
}





void ov40_0223D1AC(void) {
    // str r1, [sp, #4]
    // str r0, [sp]
    // ldr r5, [sp]
    ManagedSprite_SetDrawFlag(*((u32*)(r5 + 0x00002090)), r1);
    // add r5, #8
    // ldr r0, [sp]
    // add r0, #0x30
    // str r0, [sp]
    // ldr r0, [sp, #4]
    // str r0, [sp, #4]
}





void ov40_0223D1F0(void) {
    // str r0, [sp, #4]
    // str r0, [sp]
    // ldr r5, [sp]
    ov40_0222FF48(r0, *((u32*)(r5 + 0x0000208C)), *((u32*)(r5 + 0x00002090)));
    // str r7, [r5, r0]
    // add r5, #8
    // ldr r0, [sp]
    // add r0, #0x30
    // str r0, [sp]
    // ldr r0, [sp, #4]
    // str r0, [sp, #4]
}





void ov40_0223D244(void) {
    // str r1, [sp, #0x20]
    // ldr r2, [sp, #0x20]
    // add r1, sp, #0x8c
    // str r2, [r1]
    *((u32*)(0 + 4)) = r2;
    *((u32*)(0 + 8)) = r2;
    *((u32*)(0 + 0xc)) = r2;
    *((u32*)(0 + 0x10)) = r2;
    *((u32*)(0 + 0x14)) = r2;
    // str r1, [sp, #0x1c]
    // ldrsh r1, [r1, r2]
    // str r0, [sp, #8]
    ov40_02230964(1, 0x000004A4, *((u32*)(*((u32*)(r0 + (0x86 << 4))) + 0x00002084)));
    // ldr r0, [sp, #0x1c]
    // ldr r0, [sp, #8]
    // ldrsh r0, [r0, r1]
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x20]
    // ldr r0, [sp, #0x1c]
    // add r4, r0, r1
    // add r5, sp, #0x8c
    // ldr r0, [sp, #8]
    ov40_0222FF64(0x00002090, *((u32*)(r4 + 0x0000208C)), *((u32*)(r4 + 0x00002090)));
    // str r0, [r5]
    // str r7, [r4, r0]
    // add r4, #8
    // ldr r0, [sp, #0x20]
    // ldr r7, [sp, #0x1c]
    // str r0, [sp, #0xc]
    // add r7, #0xc0
    // add r3, #0x30
    // add r5, #0x2c
    // str r6, [r1, r3]
    // str r6, [r1, r5]
    // add r1, #8
    // ldr r0, [sp, #0xc]
    // sub r7, #0x30
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r7, [sp, #0x1c]
    // mov ip, r0
    // add r7, #0x30
    // sub r2, #0x30
    // sub r4, #0x34
    // str r5, [r0, r2]
    // str r5, [r0, r4]
    // add r0, #8
    // mov r0, ip
    // add r7, #0x30
    // mov ip, r0
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #8]
    // ldrsh r1, [r0, r1]
    // ldr r0, [sp, #0x10]
    // add r4, sp, #0x5c
    // add r2, r1, r0
    // ldmia r5!, {r0, r1}
    // stmia r4!, {r0, r1}
    // add r0, sp, #0x44
    // str r4, [r0]
    *((u32*)(4 + 4)) = 0;
    *((u32*)(4 + 8)) = 0;
    *((u32*)(4 + 0xc)) = 0;
    *((u32*)(4 + 0x10)) = 0;
    *((u32*)(4 + 0x14)) = 0;
    // add r0, sp, #0x2c
    // str r4, [r0]
    *((u32*)(4 + 4)) = 0;
    *((u32*)(4 + 8)) = 0;
    *((u32*)(4 + 0xc)) = 0;
    *((u32*)(4 + 0x10)) = 0;
    *((u32*)(4 + 0x14)) = 0;
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #8]
    // add r1, r0, r1
    // ldr r0, [sp, #0x14]
    // str r1, [sp, #0x24]
    // add r0, #0x80
    ov40_022303B8(*((u32*)(0x00002608 + (0x00002090 << 2))), 0x00002608, 0x00002090, (6 - 1));
    // str r0, [sp, #0x18]
    // add r1, sp, #0x44
    // add r2, sp, #0x2c
    // stmia r1!, {r6}
    // stmia r2!, {r6}
    // add r1, sp, #0x5c
    // add r2, r1, r0
    // str r0, [sp, #0x28]
    // ldr r1, [sp, #8]
    // ldr r0, [sp, #0x14]
    // add r3, sp, #0x44
    // add r5, sp, #0x2c
    // add r4, r1, r0
    // add r0, r1, r0
    // add r0, #0x80
    // stmia r3!, {r0}
    // add r0, r0, r7
    // add r0, #0x98
    // stmia r5!, {r0}
    // ldr r0, [sp, #0x18]
    // str r0, [sp, #0x18]
    // ldr r1, [sp, #0x24]
    // ldr r0, [sp, #0x14]
    // add r0, #0x80
    ov40_022303B8(*((u32*)(*((u32*)(1 + 0x00002608)) + (*((u8*)*((u32*)(1 + 0x00002608))) + 1))), *((u32*)(1 + 0x00002608)), (r2 + 4));
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x28]
    // add r1, sp, #0x5c
    // add r2, r1, r0
    // ldr r0, [sp, #0x18]
    // add r0, sp, #0x44
    // add r3, r0, r1
    // add r0, sp, #0x2c
    // add r2, #0xc
    // add r5, r0, r1
    // add r0, r1, r0
    // add r0, #0x80
    // stmia r3!, {r0}
    // add r0, r0, r7
    // add r0, #0x98
    // stmia r5!, {r0}
    // ldr r0, [sp, #0x18]
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x10]
    // ldr r0, [sp, #0x1c]
    // add r7, sp, #0x44
    // add r6, sp, #0x2c
    // add r4, r0, r1
    // ldr r2, [sp, #0x1c]
    // str r2, [r4, r1]
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x1c]
    // ldr r0, [sp, #8]
    ov40_0222FEA0(0, *((u32*)(*((u32*)((r2 + 4) + 0x00002088)) + (0x82 << 6))), *((u32*)(r4 + 0x0000208C)), *((u32*)*((u32*)r2)));
    // str r0, [r4, r1]
    // sub r1, r1, r5
    ManagedSprite_SetDrawPriority(*((u32*)(r4 + 0x00002090)), 6);
    // ldr r1, [sp, #0x1c]
    // add r4, #8
    // str r2, [r1, r0]
    // ldr r0, [sp, #8]
    ov40_0223A3BC(0x00002088, (*((u32*)(r1 + 0x00002088)) + 1));
    // ldr r0, [sp, #8]
    // ldrsh r2, [r0, r1]
    // ldr r0, [sp, #0x1c]
    // str r2, [r0, r1]
    // add r4, sp, #0x8c
    // ldr r0, [sp, #8]
    // add r1, r1, r6
    SpriteManager_UnloadCharObjById(*((u32*)(r0 + 0x1c)), *((u32*)r4));
    // ldr r0, [sp, #8]
    ov40_02230964(0);
}





void ov40_0223D504(void) {
    // add r0, r4, r0
    // add r0, r4, r0
}





void ov40_0223D540(void) {
    // add r0, #0x68
}





void ov40_0223D544(void) {
    Save_SysInfo_Get(*((u32*)(r0 + (0x83 << 4))));
    Save_SysInfo_GetDwcProfileId();
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r1, sp, #0
    // str r0, [sp, #8]
    // str r4, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r4, [sp, #0x3c]
    // str r0, [sp, #0x14]
    // add r4, #0x68
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x1c]
    // str r0, [sp, #0x20]
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x28]
    // str r0, [sp, #0x2c]
    // str r0, [sp, #0x30]
    // str r0, [sp, #0x34]
    // str r0, [sp, #0x38]
    ov39_02227208(r4);
}





void ov40_0223D5CC(void) {
    // ldr r1, [r0, r1]
}





void ov40_0223D5E8(void) {
    // ldr r1, [r0, r1]
}





void ov40_0223D600(void) {
    // ldr r1, [r0, r1]
}





void ov40_0223D618(void) {
    // add r3, sp, #0xc
    // strh r1, [r3]
    // str r1, [sp, #8]
    // str r0, [sp, #4]
    // ldr r0, [sp, #8]
    // str r0, [sp]
    // ldr r0, [sp]
    // ldr r4, [sp, #4]
    // add r0, sp, #0xc
    // add r5, r0, r1
    // ldrsh r1, [r5, r1]
    // ldrsh r2, [r5, r2]
    ManagedSprite_SetPositionXY(*((u32*)((ov40_02245948 + 2) + 0x0000051C)), 0, 2, (r3 + 2));
    // add r4, #8
    // ldr r0, [sp, #4]
    // add r0, #0x30
    // str r0, [sp, #4]
    // ldr r0, [sp]
    // str r0, [sp]
    // ldr r0, [sp, #8]
    // str r0, [sp, #8]
}





void ov40_0223D68C(void) {
    // str r0, [sp, #8]
    // str r0, [sp, #0x14]
    // add r3, sp, #0x50
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // add r1, sp, #0x38
    // str r0, [r1]
    *((u32*)((0x86 << 4) + 4)) = 0;
    *((u32*)((0x86 << 4) + 8)) = 0;
    *((u32*)((0x86 << 4) + 0xc)) = 0;
    *((u32*)((0x86 << 4) + 0x10)) = 0;
    *((u32*)((0x86 << 4) + 0x14)) = 0;
    // add r1, sp, #0x20
    // str r0, [r1]
    *((u32*)((0x86 << 4) + 4)) = 0;
    *((u32*)((0x86 << 4) + 8)) = 0;
    *((u32*)((0x86 << 4) + 0xc)) = 0;
    *((u32*)((0x86 << 4) + 0x10)) = 0;
    *((u32*)((0x86 << 4) + 0x14)) = 0;
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #8]
    // ldrsh r0, [r0, r1]
    // ldr r0, [sp, #8]
    // add r0, r0, r1
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x14]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x10]
    // add r0, #0x80
    ov40_022303B8(*((u32*)(0 + 0x00002608)), 0x00002608, (6 - 1));
    // add r2, sp, #0x38
    // add r4, sp, #0x20
    // stmia r2!, {r3}
    // stmia r4!, {r3}
    // add r0, sp, #0x50
    // str r1, [sp, #0x1c]
    // add r0, r0, r1
    // add r1, sp, #0x38
    // add r2, sp, #0x20
    // ldr r5, [sp, #0x10]
    // add r4, r5, r4
    // add r4, #0x80
    // stmia r1!, {r4}
    // ldr r5, [sp, #0x10]
    // add r4, r4, r6
    // add r4, #0x98
    // stmia r2!, {r4}
    // ldr r0, [sp, #0x10]
    // add r0, #0x80
    ov40_022303B8(*((u32*)((0 + 4) + 0x00002608)), 0x00002608, (0 + 1));
    // ldr r0, [sp, #0x1c]
    // add r1, sp, #0x50
    // add r0, r1, r0
    // add r1, sp, #0x38
    // add r2, sp, #0x20
    // add r0, #0xc
    // add r1, r1, r4
    // add r2, r2, r4
    // ldr r5, [sp, #0x10]
    // add r4, r5, r4
    // add r4, #0x80
    // stmia r1!, {r4}
    // ldr r5, [sp, #0x10]
    // add r4, r4, r6
    // add r4, #0x98
    // stmia r2!, {r4}
    // ldr r5, [sp, #0xc]
    // add r6, sp, #0x38
    // add r4, sp, #0x20
    // ldr r2, [sp, #0x14]
    // str r2, [r5, r1]
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x14]
    // ldr r0, [sp, #8]
    ov40_0222FEA0(0, *((u32*)(*((u32*)(r2 + 0x00000514)) + 0x0000050C)), *((u32*)(*((u32*)(r5 + 0x00002608)) + 0x00000518)), *((u32*)*((u32*)r0)));
    // str r0, [r5, r1]
    // sub r1, r1, r7
    ManagedSprite_SetDrawPriority(*((u32*)(r5 + 0x0000051C)), 6);
    // ldr r1, [sp, #0x14]
    // add r5, #8
    // str r2, [r1, r0]
    // ldr r0, [sp, #0x10]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0xc]
    // add r0, #0x30
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x18]
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #8]
    ov40_0223D618(((0x00000514 + 4) + 1), (*((u32*)(r1 + 0x00000514)) + 1));
}





void ov40_0223D830(void) {
    // str r1, [sp, #4]
    // str r0, [sp]
    // ldr r5, [sp]
    ManagedSprite_SetDrawFlag(*((u32*)(r5 + 0x0000051C)), r1);
    // add r5, #8
    // ldr r0, [sp]
    // add r0, #0x30
    // str r0, [sp]
    // ldr r0, [sp, #4]
    // str r0, [sp, #4]
}





void ov40_0223D874(void) {
    // str r1, [sp]
    ov40_02230964(1);
    // str r0, [sp, #4]
    // ldr r5, [sp]
    ov40_0222FF48(r6, *((u32*)(r5 + 0x00000518)), *((u32*)(r5 + 0x0000051C)));
    // str r7, [r5, r0]
    // add r5, #8
    // ldr r0, [sp]
    // add r0, #0x30
    // str r0, [sp]
    // ldr r0, [sp, #4]
    // str r0, [sp, #4]
    ov40_02230964(r6, 0);
}





void ov40_0223D8D4(void) {
    // str r1, [sp, #0x20]
    // ldr r2, [sp, #0x20]
    // add r1, sp, #0x8c
    // str r2, [r1]
    *((u32*)(0 + 4)) = r2;
    *((u32*)(0 + 8)) = r2;
    *((u32*)(0 + 0xc)) = r2;
    *((u32*)(0 + 0x10)) = r2;
    *((u32*)(0 + 0x14)) = r2;
    // str r1, [sp, #0x1c]
    // sub r2, #0x6c
    // ldrsh r1, [r1, r2]
    // str r0, [sp, #8]
    ov40_02230964(1, (0x51 << 4), *((u32*)(*((u32*)(r0 + (0x86 << 4))) + (0x51 << 4))));
    // ldr r0, [sp, #0x1c]
    // ldr r0, [sp, #8]
    // sub r1, #0x6c
    // ldrsh r0, [r0, r1]
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x20]
    // ldr r0, [sp, #0x1c]
    // add r4, r0, r1
    // add r5, sp, #0x8c
    // ldr r0, [sp, #8]
    ov40_0222FF64(0x0000051C, *((u32*)(r4 + 0x00000518)), *((u32*)(r4 + 0x0000051C)));
    // str r0, [r5]
    // str r7, [r4, r0]
    // add r4, #8
    // ldr r0, [sp, #0x20]
    // ldr r7, [sp, #0x1c]
    // str r0, [sp, #0xc]
    // add r7, #0xc0
    // add r3, #0x30
    // add r5, #0x2c
    // str r6, [r1, r3]
    // str r6, [r1, r5]
    // add r1, #8
    // ldr r0, [sp, #0xc]
    // sub r7, #0x30
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r7, [sp, #0x1c]
    // mov ip, r0
    // add r7, #0x30
    // sub r2, #0x30
    // sub r4, #0x34
    // str r5, [r0, r2]
    // str r5, [r0, r4]
    // add r0, #8
    // mov r0, ip
    // add r7, #0x30
    // mov ip, r0
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #8]
    // ldrsh r1, [r0, r1]
    // ldr r0, [sp, #0x10]
    // add r4, sp, #0x5c
    // add r2, r1, r0
    // ldmia r5!, {r0, r1}
    // stmia r4!, {r0, r1}
    // add r0, sp, #0x44
    // str r4, [r0]
    *((u32*)(4 + 4)) = 0;
    *((u32*)(4 + 8)) = 0;
    *((u32*)(4 + 0xc)) = 0;
    *((u32*)(4 + 0x10)) = 0;
    *((u32*)(4 + 0x14)) = 0;
    // add r0, sp, #0x2c
    // str r4, [r0]
    *((u32*)(4 + 4)) = 0;
    *((u32*)(4 + 8)) = 0;
    *((u32*)(4 + 0xc)) = 0;
    *((u32*)(4 + 0x10)) = 0;
    *((u32*)(4 + 0x14)) = 0;
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #8]
    // add r1, r0, r1
    // ldr r0, [sp, #0x14]
    // str r1, [sp, #0x24]
    // add r0, #0x80
    ov40_022303B8(*((u32*)(0x00002608 + (0x0000051C << 2))), 0x00002608, 0x0000051C, (6 - 1));
    // str r0, [sp, #0x18]
    // add r1, sp, #0x44
    // add r2, sp, #0x2c
    // stmia r1!, {r6}
    // stmia r2!, {r6}
    // add r1, sp, #0x5c
    // add r2, r1, r0
    // str r0, [sp, #0x28]
    // ldr r1, [sp, #8]
    // ldr r0, [sp, #0x14]
    // add r3, sp, #0x44
    // add r5, sp, #0x2c
    // add r4, r1, r0
    // add r0, r1, r0
    // add r0, #0x80
    // stmia r3!, {r0}
    // add r0, r0, r7
    // add r0, #0x98
    // stmia r5!, {r0}
    // ldr r0, [sp, #0x18]
    // str r0, [sp, #0x18]
    // ldr r1, [sp, #0x24]
    // ldr r0, [sp, #0x14]
    // add r0, #0x80
    ov40_022303B8(*((u32*)(*((u32*)(1 + 0x00002608)) + (*((u8*)*((u32*)(1 + 0x00002608))) + 1))), *((u32*)(1 + 0x00002608)), (r2 + 4));
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x28]
    // add r1, sp, #0x5c
    // add r2, r1, r0
    // ldr r0, [sp, #0x18]
    // add r0, sp, #0x44
    // add r3, r0, r1
    // add r0, sp, #0x2c
    // add r2, #0xc
    // add r5, r0, r1
    // add r0, r1, r0
    // add r0, #0x80
    // stmia r3!, {r0}
    // add r0, r0, r7
    // add r0, #0x98
    // stmia r5!, {r0}
    // ldr r0, [sp, #0x18]
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x10]
    // ldr r0, [sp, #0x1c]
    // add r7, sp, #0x44
    // add r6, sp, #0x2c
    // add r4, r0, r1
    // ldr r2, [sp, #0x1c]
    // str r2, [r4, r1]
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x1c]
    // ldr r0, [sp, #8]
    ov40_0222FEA0(0, *((u32*)(*((u32*)((r2 + 4) + 0x00000514)) + 0x0000050C)), *((u32*)(r4 + 0x00000518)), *((u32*)*((u32*)r2)));
    // str r0, [r4, r1]
    // sub r1, r1, r5
    ManagedSprite_SetDrawPriority(*((u32*)(r4 + 0x0000051C)), 6);
    // ldr r1, [sp, #0x1c]
    // add r4, #8
    // str r2, [r1, r0]
    // ldr r0, [sp, #8]
    ov40_0223D618(0x00000514, (*((u32*)(r1 + 0x00000514)) + 1));
    // ldr r0, [sp, #8]
    // ldrsh r2, [r0, r1]
    // ldr r0, [sp, #0x1c]
    // add r1, #0x6c
    // str r2, [r0, r1]
    // add r4, sp, #0x8c
    // ldr r0, [sp, #8]
    // add r1, r1, r6
    SpriteManager_UnloadCharObjById(*((u32*)(r0 + 0x1c)), *((u32*)r4));
    // ldr r0, [sp, #8]
    ov40_02230964(0);
}





void ov40_0223DB94(void) {
    // mov r1, #0x86
    // lsl r1, r1, #4
    // ldr r0, [r0, r1]
    // mov r2, #0x13
    // lsl r2, r2, #6
    // ldrh r3, [r0, r2]
    // ldr r1, _0223DBD0 ; =0x0000FFFF
    // cmp r3, r1
    // beq _0223DBAA
    // mov r0, #1
    // bx lr
    // add r1, r2, #2
    // ldrb r1, [r0, r1]
    // cmp r1, #0xff
    // beq _0223DBB6
    // mov r0, #1
    // bx lr
    // add r1, r2, #3
    // ldrb r1, [r0, r1]
    // cmp r1, #0xff
    // bne _0223DBC6
    // add r1, r2, #4
    // ldrb r0, [r0, r1]
    // cmp r0, #0xff
    // beq _0223DBCA
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // nop
    // _0223DBD0: .word 0x0000FFFF
    // TODO: decompile
}





void ov40_0223DBD4(void) {
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x20]
    // add r4, sp, #0x3c
    // ldmia r6!, {r0, r1}
    // stmia r4!, {r0, r1}
    // add r4, sp, #0x24
    // ldmia r6!, {r0, r1}
    // stmia r4!, {r0, r1}
    // ldmia r6!, {r0, r1}
    // stmia r4!, {r0, r1}
    // ldmia r6!, {r0, r1}
    // stmia r4!, {r0, r1}
    // ldr r0, [sp, #0x20]
    // str r3, [r0, r1]
    // add r5, sp, #0x3c
    // str r2, [sp, #0x18]
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x20]
    // ldr r0, [sp, #0x20]
    // add r4, r0, r1
    InitWindow(r4, 0x00000614, r4, 6);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x14]
    AddWindowParameterized(*((u32*)(((r7 << 0x10) >> 0x10) + 0x24)), r4, 2, ((*((u32*)r5) << 0x18) >> 0x18));
    FillWindowPixelBuffer(r4, 0);
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp, #0x18]
    NewString_ReadMsgData(*((u32*)(r0 + 0x48)), *((u32*)r1));
    // add r7, r7, r0
    ov40_022306C0(r4, r0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r4, 0, r6, 0);
    ScheduleWindowCopyToVram(r4);
    String_Delete(r6);
    // ldr r0, [sp, #0x18]
    // ldr r1, [sp, #0x20]
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x1c]
    // add r4, #0x10
    // str r0, [sp, #0x1c]
    // add r5, #0x10
    // ldr r0, [sp, #0x1c]
}





void ov40_0223DCF0(void) {
    // add r0, r6, r7
    FillWindowPixelBuffer((0x86 << 4), 0);
    NewString_ReadMsgData(*((u32*)(r5 + 0x48)), 0x7d);
    // sub r0, #0xfa
    // sub r4, #0x55
    NewString_ReadMsgData(*((u32*)(r5 + 0x48)), r0);
    // add r4, #0x84
    NewString_ReadMsgData(r0);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r6, r7
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(0x000F0D00, 0, r0, 0);
    // add r0, r6, r7
    ScheduleWindowCopyToVram();
    String_Delete(r4);
}





void ov40_0223DD68(void) {
    // add r0, r4, r7
    FillWindowPixelBuffer((0x86 << 4), 0);
    NewString_ReadMsgData(*((u32*)(r5 + 0x48)), 0x7d);
    String_New(0xff, 0x6d);
    // add r2, sp, #0x10
    GetSpeciesNameIntoArray(r6, 0x6d);
    // add r1, sp, #0x10
    CopyU16ArrayToString(r5);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r4, r7
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(0x000F0D00, 0, r5, 0);
    // add r0, r4, r7
    ScheduleWindowCopyToVram();
    String_Delete(r5);
}





void ov40_0223DDE8(void) {
    // str r1, [sp, #0x10]
    // add r0, r7, r0
    FillWindowPixelBuffer(0x00000664, 0);
    // ldr r0, [sp, #0x10]
    NewString_ReadMsgData(*((u32*)(r5 + 0x48)), 0x7d);
    // str r0, [sp, #0x14]
    ov40_0222DAB0(0x6d);
    String_New(0xff, 0x6d);
    // str r0, [sp, #0x14]
    NewString_ReadMsgData(*((u32*)(r5 + 0x48)), 0x17);
    // ldr r2, [sp, #0x10]
    BufferCityName(r6, 0, r4);
    // ldr r1, [sp, #0x14]
    StringExpandPlaceholders(r6, r5);
    String_New(0xff, 0x6d);
    // str r0, [sp, #0x14]
    NewString_ReadMsgData(*((u32*)(r5 + 0x48)), 0x16);
    // ldr r2, [sp, #0x10]
    BufferCountryName(r6, 0);
    // ldr r1, [sp, #0x14]
    StringExpandPlaceholders(r6, r5);
    String_Delete(r5);
    MessageFormat_Delete(r6);
    // str r1, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x14]
    // str r0, [sp, #8]
    // add r0, r7, r0
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(0x00000664, 0, 0);
    // add r0, r7, r0
    ScheduleWindowCopyToVram(0x00000664);
    // ldr r0, [sp, #0x14]
    String_Delete();
}





void ov40_0223DEB8(void) {
    NewString_ReadMsgData(*((u32*)(r0 + 0x48)), 0x0000014D);
    // add r0, r5, r6
    FillWindowPixelBuffer(0);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r5, r6
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(0x000F0D00, 0, r4, 0);
    // add r0, r5, r6
    ScheduleWindowCopyToVram();
    String_Delete(r4);
}





void ov40_0223DF1C(void) {
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x1c]
    // add r4, sp, #0x2c
    // ldmia r5!, {r0, r1}
    // stmia r4!, {r0, r1}
    // add r3, sp, #0x20
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    GF_AssertFail(*((u32*)ov40_0224565C), (0x86 << 4), r1, (6 - 1));
    // ldr r0, [sp, #0x1c]
    // str r6, [r0, r1]
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x1c]
    // sub r1, #0xc4
    // add r7, sp, #0x20
    // add r6, #0xfd
    // add r4, r0, r1
    // add r5, sp, #0x2c
    InitWindow(r4, 0x00000798);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x14]
    AddWindowParameterized(*((u32*)(((r6 << 0x10) >> 0x10) + 0x24)), r4, 6, ((*((u32*)r5) << 0x18) >> 0x18));
    FillWindowPixelBuffer(r4, 0);
    // add r4, #0x10
    // add r6, r6, r0
    // ldr r0, [sp, #0x18]
    // add r5, #0x10
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x1c]
    // add r5, r0, r1
    // ldr r0, [sp, #0x14]
    NewString_ReadMsgData(*((u32*)(((*((u32*)(r5 + 0xc)) * *((u32*)(r5 + 8))) + 1) + 0x48)), *((u32*)r7));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r5, 0, r0, 0);
    ScheduleWindowCopyToVram(r5);
    String_Delete(r4);
    // add r5, #0x10
    // ldr r0, [sp, #0x14]
    ov40_0223DEB8();
}





void ov40_0223E024(void) {
    // sub r1, #0xcc
    // add r5, r6, r0
    ClearWindowTilemapAndCopyToVram(r5, (0x86 << 4));
    RemoveWindow(r5);
    // add r5, #0x10
    // str r1, [r6, r0]
}





void ov40_0223E064(void) {
    // sub r1, #0xc8
    // add r5, r6, r0
    // add r7, #0xc4
    ClearWindowTilemapAndCopyToVram(r5, (0x86 << 4));
    RemoveWindow(r5);
    // add r5, #0x10
    // str r1, [r6, r0]
}





void ov40_0223E0A4(void) {
    // add r0, r4, r6
    InitWindow((0x86 << 4));
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, r4, r6
    AddWindowParameterized(*((u32*)(r5 + 0x24)), 2, 3);
    // add r0, r4, r6
    FillWindowPixelBuffer(0);
    NewString_ReadMsgData(*((u32*)(r5 + 0x48)), 0x7e);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r4, r6
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(0x000F0D00, 0, r0, 0);
    // add r0, r4, r6
    ScheduleWindowCopyToVram();
    String_Delete(r7);
    // add r6, #0xc0
    // add r0, r4, r6
    InitWindow();
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, #0xf2
    // str r0, [sp, #0x10]
    // add r1, r4, r6
    AddWindowParameterized(*((u32*)(r5 + 0x24)), 6, 0xb);
    // add r0, r4, r6
    FillWindowPixelBuffer(0);
    NewString_ReadMsgData(*((u32*)(r5 + 0x48)), 0x5f);
    FontID_String_GetWidthMultiline(0, r0, 0);
    // sub r0, r1, r0
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r4, r6
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(0x000F0D00, 0, r5, (r0 >> 1));
    // add r0, r4, r6
    ScheduleWindowCopyToVram();
    String_Delete(r5);
    // str r1, [r4, r0]
    // str r1, [r4, r0]
}





void ov40_0223E190(void) {
    ov40_02230738(*((u32*)(r0 + 8)));
    ov40_0222D9E8(r4, (r4 + 4), 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharDataFromOpenNarc(*((u32*)(r5 + 0x14)), 0x3e, *((u32*)(r5 + 0x24)), 3);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharDataFromOpenNarc(*((u32*)(r5 + 0x14)), 0x3e, *((u32*)(r5 + 0x24)), 7);
    ov40_022307DC(r5, 0x38, 3);
    ov40_022307DC(r5, 0x3b, 7);
    GfGfx_EngineATogglePlanes(8, 1);
    GfGfx_EngineBTogglePlanes(8, 1);
    ov40_02242110(r5);
    ov40_022420B4(r5, 0);
    // str r1, [r4, r0]
    // str r0, [sp]
    TouchHitboxController_Create(ov40_022456C4, 5, ov40_02241D10, r5);
    // str r0, [r4, r1]
    // str r0, [sp]
    TouchHitboxController_Create(ov40_02245708, 9, ov40_02241E14, r5);
    // add r5, #8
    // str r0, [r4, r1]
    // str r0, [r5]
    // add r0, #8
    ov40_0222DA84(r4, 0);
    ov40_0222DA00(r4, (r4 + 4), 0, 0);
    ov40_0222DED0(r5, 0x7c);
    // strh r1, [r4, r0]
    // strb r2, [r4, r1]
    // strb r2, [r4, r1]
    // strb r2, [r4, r0]
    ov40_0223DBD4(r5, 0, 0xff);
    ov40_0223DF1C(r5, 0);
    ov40_0223DD68(r5, *((u16*)(r4 + (0x13 << 6))));
    ov40_0223DCF0(r5, *((u8*)(r4 + 0x000004C2)));
    ov40_0223DDE8(r5, *((u8*)(r4 + 0x000004C3)), *((u8*)(r4 + (0x000004C3 + 1))));
    GfGfx_EngineATogglePlanes(4, 1);
    GfGfx_EngineBTogglePlanes(4, 1);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r5 + 0x28)), 3, 0xc, ((*((u32*)(r4 + 8)) << 0x18) >> 0x18));
    ov40_0222BF80(3);
}





void ov40_0223E324(void) {
}





void ov40_0223E33C(void) {
    ov40_0223E024(*((u32*)(r0 + 8)));
    ov40_0223E064(r5);
    ov40_0222DFB0(r5);
    TouchHitboxController_Destroy(*((u32*)(r4 + 0x00000608)));
    TouchHitboxController_Destroy(*((u32*)(r4 + 0x0000060C)));
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    // add r0, #8
    ov40_0222DA84(r4, 1);
    ov40_0222DA00(r4, (r4 + 4), 1, 0);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r5 + 0x28)), 3, 0xc, ((*((u32*)(r4 + 8)) << 0x18) >> 0x18));
    ov40_02230964(1);
    ov40_022421FC(r5);
    ov40_0222D88C(r5);
    ov40_02230964(r5, 0);
    ov40_0222FB90(r5, 1);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    ov40_0222FBB4((*((u32*)(r5 + 8)) + 1));
    // add r0, #8
    ov40_0222DA84(r4, 0);
    ov40_0222DD08(r5);
    // add r0, #8
    ov40_0222DAA8(r4);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r5 + 0x28)), 2, 0xc, 0x10);
    ov40_0222BF64(r5, 1, 1, *((u32*)(r5 + 0x10)));
    ov40_0222BF80(r5, 5);
    BgClearTilemapBufferAndCommit(*((u32*)(r5 + 0x24)), 2);
    BgClearTilemapBufferAndCommit(*((u32*)(r5 + 0x24)), 6);
    BgClearTilemapBufferAndCommit(*((u32*)(r5 + 0x24)), 3);
    BgClearTilemapBufferAndCommit(*((u32*)(r5 + 0x24)), 7);
    Heap_Free(r4);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r5 + 0x28)), 1, 2, ((*((u32*)(r4 + 8)) << 0x18) >> 0x18));
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r5 + 0x28)), 3, 0xc, ((*((u32*)(r4 + 8)) << 0x18) >> 0x18));
}





void ov40_0223E494(void) {
    ov40_0223E064(*((u32*)(r0 + 8)));
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    // add r0, #8
    ov40_0222DA84(r4, 1);
    ov40_0222DA00(r4, (r4 + 4), 1, 2);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r5 + 0x28)), 3, 0xc, ((*((u32*)(r4 + 8)) << 0x18) >> 0x18));
    ov40_0222BF80(6);
    ov40_0222BF80(7);
    ov40_0222BF80(0xa);
}





void ov40_0223E520(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0223E53E: ; jump table
    ov40_0222DF60(0x71);
    // strb r0, [r5, r1]
    ov40_0223DCF0(r4, *((u8*)(r5 + 0x000004C2)));
    ov40_022420B4(r4, 1);
    ov40_022307DC(r4, 0x3d, 7);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // add r0, #8
    ov40_0222DA84(r5, 0);
    ov40_0222DA00(r5, (r5 + 4), 0, 2);
    ov40_02230964(r4, 1);
    // add r0, r4, r0
    ov40_0222F9D4(0x0000047C, r4);
    // add r0, r4, r0
    ov40_0222F734(0x0000049C);
    sub_02087E1C(r4);
    // add r0, r4, r0
    ov40_0222E8C4(0x0000049C, r4, ov40_02245784);
    // add r0, r4, r0
    ov40_0222E8C4(r4, ov40_02245758);
    // add r0, r4, r1
    // add r1, #0x20
    // add r1, r4, r1
    ov40_0222FA5C(0x0000047C);
    // add r0, r4, r0
    ov40_0222F740(0x0000049C, r4, 2);
    ov40_02230964(r4, 0);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 3, 0xc, ((*((u32*)(r5 + 8)) << 0x18) >> 0x18));
    // add r0, r4, r0
    ov40_0222FA88(0x0000047C);
    // add r0, r4, r1
    // sub r1, #0x10
    // ldrsh r1, [r4, r1]
    ov40_0222F6D0(0x0000049C);
    // add r0, r4, r0
    ov40_0222F38C(0x0000049C, r4);
    // strb r1, [r5, r0]
    ov40_0223DCF0(r4, r0);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    TouchscreenHitbox_TouchNewIsIn(ov40_02245650);
    ov40_02230944(r4);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // add r0, r4, r0
    ov40_0222FA24(0x0000047C);
    // add r0, r4, r0
    ov40_0222F720(0x0000049C);
    // add r0, r4, r0
    ov40_0222F920(0x0000049C, r4);
    // add r0, r4, r0
    ov40_0222FA18(0x0000047C);
    // add r0, r4, r0
    ov40_0222F734(0x0000049C);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // add r0, #8
    ov40_0222DA84(r5, 1);
    ov40_0222DA00(r5, (r5 + 4), 1, 2);
    ov40_022420B4(r4, 0);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 3, 0xc, ((*((u32*)(r5 + 8)) << 0x18) >> 0x18));
    ov40_0222BF80(r4, 0xb);
}





void ov40_0223E6EC(void) {
    ov40_0222DF60(0x72);
    // strh r0, [r4, r1]
    ov40_0223DD68(r5, *((u16*)(r4 + (0x13 << 6))));
    ov40_022420B4(r5, 1);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    ov40_0222BF80(r5, 8);
}





void ov40_0223E730(void) {
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x28]
    // ldr r0, [sp, #0x14]
    // add r4, r1, r0
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x24]
    // sub r0, r1, r0
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x20]
    // sub r0, r1, r0
    InitWindow(r4, (*((u8*)(ov40_02245708 + 1)) >> 3));
    // ldr r0, [sp, #0x20]
    // str r0, [sp]
    // ldr r0, [sp, #0x1c]
    // str r0, [sp, #4]
    // str r6, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x28]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x14]
    // ldr r3, [sp, #0x24]
    AddWindowParameterized(*((u32*)(((0xe << 0x10) >> 0x10) + 0x24)), r4, 6);
    FillWindowPixelBuffer(r4, 0);
    // ldr r0, [sp, #0x14]
    // add r1, #0x44
    NewString_ReadMsgData(*((u32*)(r0 + 0x48)), r7);
    // str r0, [sp, #0x2c]
    // ldr r1, [sp, #0x2c]
    ov40_022306C0(r4);
    // sub r1, #0x10
    // str r0, [sp, #0x30]
    // add r0, r1, r0
    // asr r0, r0, #1
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x14]
    ov40_0223EBB8(((r6 << 3) >> 0x1f), r7);
    // ldr r0, [sp, #0x18]
    // ldr r2, [sp, #0x2c]
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r3, [sp, #0x30]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r4, 0);
    // ldr r0, [sp, #0x18]
    // ldr r2, [sp, #0x2c]
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r3, [sp, #0x30]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r4, 0);
    ScheduleWindowCopyToVram(r4);
    // ldr r0, [sp, #0x2c]
    String_Delete();
    // ldr r0, [sp, #0x1c]
    // ldr r0, [sp, #0x28]
    // add r0, r0, r1
    // str r0, [sp, #0x28]
    // add r4, #0x10
}





void ov40_0223E848(void) {
    // add r5, r1, r0
    ClearWindowTilemapAndCopyToVram(r5, *((u32*)(r0 + (0x86 << 4))));
    RemoveWindow(r5);
    // add r5, #0x10
}





void ov40_0223E870(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0223E88C: ; jump table
    ov40_022307DC(0x3c, 7);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // add r0, #8
    ov40_0222DA84(r5, 0);
    ov40_0222DA00(r5, (r5 + 4), 0, 2);
    ov40_0223E730(r4);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 3, 0xc, ((*((u32*)(r5 + 8)) << 0x18) >> 0x18));
    TouchHitboxController_IsTriggered(*((u32*)(r5 + 0x0000060C)));
    TouchscreenHitbox_TouchNewIsIn(ov40_02245650);
    ov40_02230944(r4);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    ov40_0223E848((*((u32*)(r4 + 8)) + 1));
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    ov40_0222DA00(r5, (r5 + 4), 1, 2);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // add r0, #8
    ov40_0222DA84(r5, 1);
    ov40_0222DA00(r5, (r5 + 4), 1, 2);
    ov40_022420B4(r4, 0);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 3, 0xc, ((*((u32*)(r5 + 8)) << 0x18) >> 0x18));
    ov40_0222BF80(r4, 9);
    ov40_0222BF80(r4, 0xb);
}





void ov40_0223E9A4(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0223E9C4: ; jump table
    ov40_0222DF60(0x72);
    ov40_022420B4(r4, 1);
    ov40_022307DC(r4, 0x3a, 7);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    ov40_0222DA00(r5, (r5 + 4), 0, 2);
    ov40_02230964(r4, 1);
    // add r0, r4, r0
    ov40_0222F9D4(0x0000047C, r4);
    // add r2, r5, r0
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // str r2, [r5, r0]
    // sub r0, #0x14
    // add r0, #8
    // sub r1, #0x40
    // str r2, [r5, r0]
    // add r0, r4, r1
    ov40_0222F734(0x000004DC, 0x000004DC, *((u32*)(r5 + 0x000004DC)), ov40_022457DC);
    // add r2, #0x38
    // add r0, r4, r3
    // add r3, #0x44
    // add r3, r5, r3
    ov40_0222E9B8(r4, *((u32*)(r5 + 0x0000049C)), 0x0000049C);
    // str r0, [r4, r1]
    // sub r0, #0x68
    // sub r1, #0x48
    // add r0, r4, r0
    // add r1, r4, r1
    ov40_0222FA5C(0x000004E4, 0x000004E4);
    // add r0, r4, r0
    ov40_0222F740(0x0000049C, r4, 2);
    ov40_02230964(r4, 0);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // add r0, r4, r0
    ov40_0222FA88(0x0000047C);
    // add r0, r4, r1
    // sub r1, #0x10
    // ldrsh r1, [r4, r1]
    ov40_0222F6D0(0x0000049C);
    // add r0, r4, r0
    ov40_0222F38C(0x0000049C, r4);
    // strh r1, [r5, r0]
    ov40_0223DD68(r4, r0);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    TouchscreenHitbox_TouchNewIsIn(ov40_02245650);
    // strh r1, [r5, r0]
    ov40_02230944(r4, 0x0000FFFF);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // add r0, r4, r0
    ov40_0222FA24(0x0000047C);
    // add r0, r4, r0
    ov40_0222F720(0x0000049C);
    // add r0, r4, r0
    ov40_0222F920(0x0000049C, r4);
    // add r0, r4, r0
    ov40_0222FA18(0x0000047C);
    // add r0, r4, r0
    ov40_0222F734(0x0000049C);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // add r0, #8
    ov40_0222DA84(r5, 1);
    ov40_0222DA00(r5, (r5 + 4), 1, 2);
    ov40_022420B4(r4, 0);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 3, 0xc, ((*((u32*)(r5 + 8)) << 0x18) >> 0x18));
    ov40_0222DA00(r5, (r5 + 4), 1, 2);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    ov40_0223EDA8(r4);
    ov40_0222BF80(r4, 0xb);
    ov40_0222BF80(r4, 8);
}





void ov40_0223EBB8(void) {
    // str r0, [sp, #8]
    // ldr r1, [sp, #8]
    // add r2, sp, #0xc
    ov40_0222DD68(0x6d, ov40_02245E44);
    // str r0, [sp, #4]
    Save_Pokedex_Get(*((u32*)(r5 + (0x83 << 4))));
    // str r0, [sp]
    // ldr r0, [sp, #4]
    // add r5, r0, r1
    // ldr r0, [sp]
    Pokedex_CheckMonSeenFlag(*((u16*)r5));
    // strh r0, [r5]
    // ldr r0, [sp, #4]
    // add r2, r0, r1
    // str r0, [sp, #8]
    // ldr r0, [sp, #4]
    Heap_Free(1, *((u16*)r2), (r2 + 2));
    // ldr r0, [sp, #8]
}





void ov40_0223EC40(void) {
    // str r0, [sp]
    // add r2, r4, r2
    ov40_0222DD68(0x6d, 0, 0x000004CC);
    // str r0, [r4, r2]
    // add r2, r4, r2
    ov40_0222DD68(0x6d, 0, ((0x4d << 4) - 4));
    // str r0, [sp, #8]
    Save_Pokedex_Get(*((u32*)(r5 + (0x83 << 4))));
    // str r0, [sp, #4]
    // ldr r7, [sp]
    // str r1, [r4, r0]
    // ldr r0, [sp, #8]
    // add r5, r0, r1
    // ldr r0, [sp, #4]
    Pokedex_CheckMonSeenFlag(r7, *((u16*)r5));
    // strh r0, [r5]
    // str r1, [r4, r0]
    // ldr r1, [sp]
    // ldr r1, [sp, #8]
    // add r2, r1, r2
    // strh r1, [r5, r3]
    // ldr r1, [sp]
    // str r1, [sp]
    // ldr r1, [sp, #8]
    // add r5, r1, r6
    // strh r3, [r2, r6]
    // ldr r0, [sp, #8]
    Heap_Free(((0 + 1) + 1), ((0x4d << 4) - 4), *((u32*)(r4 + ((0x4d << 4) - 4))), *((u16*)*((u32*)(r4 + (0x4d << 4)))));
    Heap_Alloc(0x6d, (*((u32*)(r4 + 0x000004C8)) << 4));
    // str r0, [r4, r2]
    // sub r2, #0x14
    MI_CpuFill8(*((u32*)(r4 + 0x000004DC)), 0, (*((u32*)(r4 + 0x000004DC)) << 4));
    // sub r0, #0x14
    // str r1, [r6, r3]
    // add r6, r6, r3
    *((u32*)(*((u32*)(r4 + 0x000004DC)) + 4)) = *((u16*)(*((u32*)(r4 + (0x4d << 4))) + 0));
    // add r3, #0x10
    NewMsgDataFromNarc(0, 0x1b, 0xed, 0x6d);
    // str r0, [r4, r1]
    // str r2, [r4, r0]
}





void ov40_0223EDA8(void) {
    DestroyMsgData(*((u32*)(*((u32*)(r0 + (0x86 << 4))) + 0x000004D4)), (0x86 << 4));
    Heap_Free(*((u32*)(r4 + 0x000004DC)));
    Heap_Free(*((u32*)(r4 + (0x4d << 4))));
    // str r1, [r4, r0]
}





void ov40_0223EDE0(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0223EDFE: ; jump table
    ov40_0222DF60(0x73);
    // strb r1, [r5, r2]
    // strb r1, [r5, r0]
    ov40_0223DDE8(r4, *((u8*)(r5 + 0x000004C3)), *((u8*)(r5 + (0x000004C3 + 1))));
    ov40_022420B4(r4, 1);
    ov40_022307DC(r4, 0x39, 7);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // add r0, #8
    ov40_0222DA84(r5, 0);
    ov40_0222DA00(r5, (r5 + 4), 0, 2);
    ov40_02230964(r4, 1);
    // add r0, r4, r0
    ov40_0222F9D4(0x0000047C, r4);
    // add r0, r4, r0
    ov40_0222E8C4(0x0000049C, r4, ov40_0224572C);
    // add r0, r4, r1
    // add r1, #0x20
    // add r1, r4, r1
    ov40_0222FA5C(0x0000047C);
    // add r0, r4, r0
    ov40_0222F740(0x0000049C, r4, 2);
    ov40_02230964(r4, 0);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 3, 0xc, ((*((u32*)(r5 + 8)) << 0x18) >> 0x18));
    // add r0, r4, r0
    ov40_0222FA88(0x0000047C);
    // add r0, r4, r1
    // sub r1, #0x10
    // ldrsh r1, [r4, r1]
    ov40_0222F6D0(0x0000049C);
    // add r0, r4, r0
    ov40_0222F38C(0x0000049C, r4);
    sub_02031620(*((u32*)(r4 + 0x0000088C)));
    // strb r0, [r5, r1]
    sub_0203162C(*((u32*)(r4 + 0x0000088C)), 0x000004C3);
    // strb r0, [r5, r2]
    ov40_0223DDE8(r4, *((u8*)(r5 + (0x000004C4 - 1))), *((u8*)(r5 + 0x000004C4)));
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    TouchscreenHitbox_TouchNewIsIn(ov40_02245650);
    ov40_02230944(r4);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // add r0, r4, r0
    ov40_0222FA24(0x0000047C);
    // add r0, r4, r0
    ov40_0222F720(0x0000049C);
    // add r0, r4, r0
    ov40_0222F920(0x0000049C, r4);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // add r0, #8
    ov40_0222DA84(r5, 1);
    ov40_0222DA00(r5, (r5 + 4), 1, 2);
    ov40_022420B4(r4, 0);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 3, 0xc, ((*((u32*)(r5 + 8)) << 0x18) >> 0x18));
    ov40_0222BF80(r4, 0xb);
}





void ov40_0223EFA4(void) {
    // add r0, #8
    // str r0, [sp]
}





void ov40_0223F028(void) {
    ov40_0223D5CC((0x86 << 4));
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0223F054: ; jump table
    ov40_0222DF60(r4, 0x75);
    PlaySE(0x0000057D);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    sub_02087E1C(r4);
    ov40_0223D540(r4);
    // str r1, [sp]
    ov39_02227590(*((u16*)(r5 + (0x000004C4 - 4))), ((r6 << 0x18) >> 0x18), *((u8*)(r5 + (0x000004C4 - 1))));
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    ov40_0223D540(r4);
    // add r1, sp, #4
    ov39_02227D44();
    StopSE(0x0000057D, 0);
    // ldr r3, [sp, #4]
    ov40_022309DC(r4, 7, *((u32*)(r3 + 0xc)), *((u32*)(r3 + 4)));
    // str r1, [r4, r0]
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    StopSE((*((u32*)(r4 + 8)) + 1), 0);
    // str r1, [r4, r0]
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    ov40_0222DF60(r4, *((u32*)(r4 + (0x51 << 4))));
    PlaySE(0x0000057C);
    PlaySE(0x00000577);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // add r0, r4, r0
    ov40_0222F734(0x0000049C);
    ov40_0222BF80(r4, 3);
    ov40_0222BF80(r4, 0xd);
}





void ov40_0223F16C(void) {
    ov40_0223E024(*((u32*)(r0 + 8)));
    ov40_0223E064(r5);
    ov40_0222DFB0(r5);
    TouchHitboxController_Destroy(*((u32*)(r4 + 0x00000608)));
    TouchHitboxController_Destroy(*((u32*)(r4 + 0x0000060C)));
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    // add r0, #8
    ov40_0222DA84(r4, 1);
    ov40_0222DA00(r4, (r4 + 4), 1, 0);
    ov40_022420B4(r5, 1);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r5 + 0x28)), 3, 0xc, ((*((u32*)(r4 + 8)) << 0x18) >> 0x18));
    ov40_0222BF80(0xe);
}





void ov40_0223F200(void) {
    sub_0202FC48(*((u32*)(r0 + 8)));
    sub_0202FC24();
    // add r2, r4, r0
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // str r1, [r4, r0]
    // str r1, [r4, r0]
    ov40_0222FE00(r5, *((u32*)(r5 + 0x00004138)), ov40_022457B0);
    ov40_0222FE8C(0x6d);
    // str r0, [r4, r1]
    ov40_022307DC(r5, 4, 3);
    ov40_022307DC(r5, 7, 7);
    GfGfx_EngineATogglePlanes(4, 0);
    GfGfx_EngineBTogglePlanes(4, 0);
    ov40_0223E0A4(r5);
    ov40_02230964(r5, 1);
    // add r0, r5, r0
    ov40_0222F9D4(0x0000047C, r5);
    // add r0, r5, r3
    // add r3, #0x44
    // add r3, r4, r3
    ov40_0222E9B8(r5, 0, 0x0000049C);
    // str r0, [r5, r1]
    // sub r0, #0x68
    // sub r1, #0x48
    // add r0, r5, r0
    // add r1, r5, r1
    ov40_0222FA5C(0x000004E4, 0x000004E4);
    ov40_02230964(r5, 0);
    ov40_02230964(r5, 1);
    // add r0, r5, r0
    ov40_0222F740(0x0000049C, r5, 1);
    // add r0, r5, r0
    ov40_0222F858(0x0000049C, 0x40, 0xb8);
    // add r0, r5, r0
    ov40_0222F488(0x0000049C, r5);
    ov40_02230964(r5, 0);
    ov40_02230964(r5, 1);
    ov40_0223D68C(r5);
    ov40_0223D830(r5, 0);
    ov40_02230964(r5, 0);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    // add r0, #8
    ov40_0222DA84(r4, 0);
    ov40_0222DA00(r4, (r4 + 4), 0, 0);
    GfGfx_EngineATogglePlanes(4, 1);
    GfGfx_EngineBTogglePlanes(4, 1);
    ov40_0223D830(r5, 1);
    // add r3, #0x4c
    // asr r3, r3, #0x10
    ov40_0223077C(r5, *((u32*)(r5 + (0x6f << 4))), 0x10, ((0x18 * *((u32*)(r5 + 0x000004D8))) << 0x10));
    sub_020879E0(*((u32*)(r5 + (0x6f << 4))), 1);
    sub_02087A08(*((u32*)(r5 + (0x6f << 4))), 0xc, 0xc);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r5 + 0x28)), 3, 0xc, ((*((u32*)(r4 + 8)) << 0x18) >> 0x18));
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r5 + 0x28)), 2, 0xc, ((*((u32*)(r4 + 8)) << 0x18) >> 0x18));
    ov40_0222BF80(0xf);
}





void ov40_0223F3E4(void) {
    // add r0, r5, r0
    ov40_0222FA88(0x0000047C, *((u32*)(r0 + 8)));
    // add r0, r5, r1
    // sub r1, #0x10
    // ldrsh r1, [r5, r1]
    ov40_0222F5EC(0x0000049C);
    // add r0, r5, r0
    ov40_0222F488(0x0000049C, r5);
    // add r2, #0x4c
    // asr r2, r2, #0x10
    sub_020878EC(*((u32*)(r5 + (0x6f << 4))), 0x10, ((0x18 * *((u32*)(r5 + 0x000004D8))) << 0x10), *((u32*)(r5 + 0x000004D8)));
    ov40_0223D8D4(r5);
    TouchscreenHitbox_TouchNewIsIn(ov40_0224564C);
    ov40_02230944(r5);
    *((u32*)(r4 + 0xc)) = 0x11;
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    TouchscreenHitbox_TouchNewIsIn(ov40_02245650);
    ov40_02230944(r5);
    *((u32*)(r4 + 0xc)) = 0x10;
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    // add r0, r5, r0
    ov40_0222FA24(0x0000047C);
    // add r0, r5, r0
    ov40_0222F720(0x0000049C);
    // add r0, r5, r0
    ov40_0222F920(0x0000049C, r5);
    ov40_0222FE98(*((u32*)(r4 + 0x0000050C)));
    ov40_0223D874(r5);
    ov40_0222FE68(r5);
    ov40_0223E024(r5);
    ov40_0223E064(r5);
    sub_020879E0(*((u32*)(r5 + (0x6f << 4))), 0);
    sub_02087A08(*((u32*)(r5 + (0x6f << 4))), 0, 0);
    // add r0, r5, r0
    ov40_0222FA18(0x0000047C);
    // add r0, r5, r0
    ov40_0222F734(0x0000049C);
    // str r1, [r4, r0]
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    // add r0, #8
    ov40_0222DA84(r4, 1);
    ov40_0222DA00(r4, (r4 + 4), 1, 0);
    ov40_022420B4(r5, 0);
    // add r0, #0x10
    // add r1, #0x14
    ov40_0222D66C(r4, r5, 3);
    // add r0, #0x2c
    // add r1, #0x14
    ov40_0222D66C(r4, r5, 0x5e);
    ManagedSprite_SetAnim(*((u32*)(r4 + 0x14)), 0);
    ManagedSprite_SetAnim(*((u32*)(r4 + 0x30)), 3);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r5 + 0x28)), 3, 0xc, ((*((u32*)(r4 + 8)) << 0x18) >> 0x18));
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r5 + 0x28)), 2, 0xc, ((*((u32*)(r4 + 8)) << 0x18) >> 0x18));
    ov40_0222BF80(*((u32*)(r4 + 0xc)));
}





void ov40_0223F59C(void) {
    ov40_022307DC(0x38, 3);
    ov40_022307DC(r5, 0x3b, 7);
    ov40_022420B4(r5, 0);
    // str r0, [sp]
    TouchHitboxController_Create(ov40_022456C4, 5, ov40_02241D10, r5);
    // str r0, [r4, r1]
    // str r0, [sp]
    TouchHitboxController_Create(ov40_02245708, 9, ov40_02241E14, r5);
    // str r0, [r4, r1]
    ov40_0223DF1C(r5, 0);
    GfGfx_EngineATogglePlanes(4, 0);
    GfGfx_EngineBTogglePlanes(4, 0);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    // add r0, #8
    ov40_0222DA84(r4, 0);
    ov40_0222DA00(r4, (r4 + 4), 0, 0);
    ov40_0222DED0(r5, 0x7c);
    ov40_0223DBD4(r5, 0);
    ov40_0223DD68(r5, *((u16*)(r4 + (0x13 << 6))));
    ov40_0223DCF0(r5, *((u8*)(r4 + 0x000004C2)));
    ov40_0223DDE8(r5, *((u8*)(r4 + 0x000004C3)), *((u8*)(r4 + (0x000004C3 + 1))));
    GfGfx_EngineATogglePlanes(4, 1);
    GfGfx_EngineBTogglePlanes(4, 1);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r5 + 0x28)), 3, 0xc, ((*((u32*)(r4 + 8)) << 0x18) >> 0x18));
    ov40_0222BF80(3);
}





void ov40_0223F6BC(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0223F6DA: ; jump table
    ov40_022307DC(6, 7);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    ov40_022408AC((*((u32*)(r4 + 8)) + 1));
    // str r0, [sp]
    TouchHitboxController_Create(ov40_022456B4, 4, ov40_02241E40, r4);
    // str r0, [r5, r1]
    // str r0, [sp]
    TouchHitboxController_Create(ov40_02245674, 4, ov40_02241ED4, r4);
    // str r0, [r5, r1]
    // str r0, [sp]
    TouchHitboxController_Create(ov40_02245654, 2, ov40_02241F3C, r4);
    // str r0, [r5, r1]
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // str r2, [r5, r1]
    ov40_02230964((*((u32*)(r4 + 8)) + 1), 1, 0);
    // add r0, r5, r0
    ov40_02230638((0x43 << 2), r4);
    // add r0, r5, r0
    ov40_02230410((0x43 << 2));
    ov40_022307DC(r4, r0, 3);
    // add r0, r5, r0
    ov40_022306A0((0x43 << 2), 0);
    ov40_02230964(r4, 0);
    GfGfx_EngineATogglePlanes(8, 1);
    GfGfx_EngineBTogglePlanes(8, 1);
    GfGfx_EngineATogglePlanes(4, 0);
    GfGfx_EngineBTogglePlanes(4, 0);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // add r0, #8
    ov40_0222DA84(r5, 0);
    ov40_0222DA00(r5, (r5 + 4), 0, 0);
    // add r0, r5, r0
    ov40_022306A0((0x43 << 2), 1);
    ov40_02241AB0(r4);
    GfGfx_EngineATogglePlanes(4, 1);
    GfGfx_EngineBTogglePlanes(4, 1);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 3, 0xc, ((*((u32*)(r5 + 8)) << 0x18) >> 0x18));
    ov40_0222BF80(r4, 0x12);
}





void ov40_0223F830(void) {
}





void ov40_0223F848(void) {
}





void ov40_0223F860(void) {
    // ldr r4, [r0, r1]
}





void ov40_0223F880(void) {
    TouchHitboxController_Destroy(*((u32*)(*((u32*)(r0 + (0x86 << 4))) + 0x00000608)), *((u32*)(r0 + 8)));
    TouchHitboxController_Destroy(*((u32*)(r4 + 0x0000060C)));
    TouchHitboxController_Destroy(*((u32*)(r4 + (0x61 << 4))));
    GfGfx_EngineBTogglePlanes(4, 0);
    GfGfx_EngineATogglePlanes(4, 0);
    ov40_02240910(r5);
    ov40_02230964(r5, 1);
    // sub r0, #0xc0
    // add r0, r4, r0
    ov40_0223064C((0x73 << 2), r5);
    // add r4, #0x80
    ov40_0222E7B8(r4, r5);
    ov40_02230964(r5, 0);
    ov40_02241A34(r5);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    // add r0, #8
    ov40_0222DA84(r4, 1);
    ov40_0222DA00(r4, (r4 + 4), 1, 0);
    // add r0, #0x10
    // add r1, #0x14
    ov40_0222D66C(r4, r5, 3);
    // add r0, #0x2c
    // add r1, #0x14
    ov40_0222D66C(r4, r5, 0x6f);
    ManagedSprite_SetAnim(*((u32*)(r4 + 0x14)), 0);
    ManagedSprite_SetAnim(*((u32*)(r4 + 0x30)), 1);
    ov40_022420B4(r5, 1);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r5 + 0x28)), 3, 0xc, ((*((u32*)(r4 + 8)) << 0x18) >> 0x18));
    ov40_0222BF80(0xe);
}





void ov40_0223F984(void) {
    sub_020307F8((0x86 << 4));
    sub_0203088C(4, 0);
    ov40_02230D94(r4, r0, r1, r0);
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0223F9C2: ; jump table
    ov40_02230964(r4, 1);
    // sub r0, #0xc0
    // add r0, r5, r0
    ov40_0223064C((0x73 << 2), r4);
    // add r5, #0x80
    ov40_0222E7B8(r5, r4);
    ov40_02241A34(r4);
    ov40_02230964(r4, 0);
    GfGfx_EngineATogglePlanes(4, 0);
    GfGfx_EngineBTogglePlanes(4, 0);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // add r0, #8
    ov40_0222DA84(r5, 1);
    ov40_0222DA00(r5, (r5 + 4), 1, 0);
    ov40_02230964(r4, 1);
    ov40_022421FC(r4);
    ov40_02241054(r4);
    ov40_02230964(r4, 0);
    BgClearTilemapBufferAndCommit(*((u32*)(r4 + 0x24)), 3);
    BgClearTilemapBufferAndCommit(*((u32*)(r4 + 0x24)), 7);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 3, 0xc, ((*((u32*)(r5 + 8)) << 0x18) >> 0x18));
    ov40_0222DED0(r4, 0x00000115);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    System_GetTouchNew((*((u32*)(r4 + 8)) + 1));
    ov40_02241114(r4);
    ov40_0222DFB0(r4);
    BgClearTilemapBufferAndCommit(*((u32*)(r4 + 0x24)), 2);
    BgClearTilemapBufferAndCommit(*((u32*)(r4 + 0x24)), 6);
    GfGfx_EngineBTogglePlanes(4, 0);
    GfGfx_EngineATogglePlanes(4, 0);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    ov40_02230964(r4, 1);
    ov40_02242110(r4);
    // add r0, #0x10
    // add r1, #0x14
    ov40_0222D66C(r5, r4, 3);
    // add r0, #0x2c
    // add r1, #0x14
    ov40_0222D66C(r5, r4, 0x5e);
    ManagedSprite_SetAnim(*((u32*)(r5 + 0x14)), 0);
    ManagedSprite_SetAnim(*((u32*)(r5 + 0x30)), 3);
    ov40_02230964(r4, 0);
    ov40_02241AB0(r4);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharDataFromOpenNarc(*((u32*)(r4 + 0x14)), 0x3e, *((u32*)(r4 + 0x24)), 3);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharDataFromOpenNarc(*((u32*)(r4 + 0x14)), 0x3e, *((u32*)(r4 + 0x24)), 7);
    ov40_02230964(r4, 1);
    // sub r0, #0xc0
    // add r0, r5, r0
    ov40_02230638((0x73 << 2), r4);
    // add r0, r5, r0
    ov40_022306A0((0x43 << 2), 0);
    // add r0, r5, r0
    ov40_02230410((0x43 << 2));
    ov40_022307DC(r4, r0, 3);
    // add r0, #0x80
    ov40_0222E79C(r5, r4);
    // add r5, #0x80
    ov40_0222E7DC(r5, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnDataFromOpenNarc(*((u32*)(r4 + 0x14)), 0x50, *((u32*)(r4 + 0x24)), 3);
    ov40_02230964(r4, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnDataFromOpenNarc(*((u32*)(r4 + 0x14)), 6, *((u32*)(r4 + 0x24)), 7);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // add r0, #8
    ov40_0222DA84(r5, 0);
    ov40_0222DA00(r5, (r5 + 4), 0, 0);
    // sub r0, #0xc0
    // add r0, r5, r0
    ov40_022306A0((0x73 << 2), 1);
    // add r0, #0x80
    ov40_0222E7DC(r5, 1);
    GfGfx_EngineBTogglePlanes(4, 1);
    GfGfx_EngineATogglePlanes(4, 1);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 3, 0xc, ((*((u32*)(r5 + 8)) << 0x18) >> 0x18));
    // add r5, r4, r1
    // sub r1, #0x78
    // str r5, [r6, r1]
    // add r5, #0xe4
    ov40_0222BF80(r4, 0x12, 0x00004138, *((u32*)(r4 + 0x00004138)));
    ov40_02242378(r4);
    ov40_0222BF80(r4, 0x17);
}





void ov40_0223FCA0(void) {
}





void ov40_0223FCB8(void) {
    ov40_02242AEC();
    // add r5, r4, r1
    // sub r1, #0x78
    // str r5, [r6, r1]
    // add r5, #0xe4
    ov40_0222BF80(r4, 0x12, 0x00004138, *((u32*)(r4 + 0x00004138)));
}





void ov40_0223FCF8(void) {
    ov40_022428D4();
    // add r5, r4, r1
    // sub r1, #0x78
    // str r5, [r6, r1]
    // add r5, #0xe4
    ov40_0222BF80(r4, 0x12, 0x00004138, *((u32*)(r4 + 0x00004138)));
}





void ov40_0223FD38(void) {
}





void ov40_0223FD50(void) {
}





void ov40_0223FD68(void) {
}





void ov40_0223FD80(void) {
}





void ov40_0223FD8C(void) {
    ov40_0223D5CC((0x86 << 4));
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0223FDBA: ; jump table
    BgClearTilemapBufferAndCommit(*((u32*)(r4 + 0x24)), 2);
    BgClearTilemapBufferAndCommit(*((u32*)(r4 + 0x24)), 6);
    // sub r0, #0xc0
    // add r0, r5, r0
    ov40_022306A0((0x73 << 2), 0);
    // add r0, #0x80
    ov40_0222E7DC(r5, 0);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // add r0, #8
    ov40_0222DA84(r5, 1);
    ov40_0222DA00(r5, (r5 + 4), 1, 0);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 3, 0xc, ((*((u32*)(r5 + 8)) << 0x18) >> 0x18));
    ov40_0222DED0(r4, 0x75);
    ov40_0223077C(r4, *((u32*)(r4 + (0x6f << 4))), 0x80, 0x60);
    sub_020879E0(*((u32*)(r4 + (0x6f << 4))), 1);
    sub_02087A08(*((u32*)(r4 + (0x6f << 4))), 0x18, 0x18);
    // str r1, [r5, r0]
    // add r0, #0xc5
    PlaySE(0x000004B8, 0);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    ov40_0223D540(r4);
    // add r2, r4, r1
    // add r1, #0xd8
    // add r2, #0xdc
    ov39_02227720(*((u32*)*((u32*)(r2 + 0x00002608))), *((u32*)*((u32*)(r2 + 0x00002608))));
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    ov40_0223D540(r4);
    // add r1, sp, #4
    ov39_02227D44();
    StopSE(0x0000057D, 0);
    ov40_0222DFB0(r4);
    // ldr r3, [sp, #4]
    ov40_02230CDC(r4, 8, *((u32*)(r3 + 0xc)), *((u32*)(r3 + 4)));
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // str r1, [r5, r0]
    StopSE(0x000004B8, 0);
    *((u32*)(r4 + 8)) = 0xff;
    // str r1, [r5, r0]
    // add r2, r4, r1
    // add r1, #0x1c
    // add r2, r2, r1
    // str r2, [r4, r1]
    // add r2, #0x3c
    // str r3, [r5, r2]
    // add r1, #0x40
    // add r1, r4, r1
    MI_CpuCopy8(*((u32*)(r5 + (0x000004B8 + 4))), 0x00000878, 0x00001D4C, *((u32*)(r4 + 0x00000878)));
    sub_020879E0(*((u32*)(r4 + (0x6f << 4))), 0);
    sub_02087A08(*((u32*)(r4 + (0x6f << 4))), 0, 0);
    // add r0, #0xbf
    PlaySE(0x000004B8, *((u32*)(r5 + 0x000004B8)));
    ov40_0222DFB0(r4);
    ov40_0222BF80(r4, *((u32*)(r5 + 0xc)));
    ov40_0222FC40(r4, 1);
    ov40_0222DFB0(r4);
    ov40_0222BF80(r4, 0x1f);
}





void ov40_0223FF8C(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0223FFAC: ; jump table
    ov40_02230738((*((u16*)(*((u32*)(r0 + 8)) + 6)) << 0x10));
    ov40_0222D9E8(r5, (r5 + 4), 0);
    // add r3, r4, r0
    // sub r7, #0x78
    // str r3, [r6, r7]
    // add r3, #0xe4
    // add r1, r4, r0
    // strb r1, [r5, r0]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharDataFromOpenNarc(*((u32*)(r4 + 0x14)), 0x3e, *((u32*)(r4 + 0x24)), 3);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharDataFromOpenNarc(*((u32*)(r4 + 0x14)), 0x3e, *((u32*)(r4 + 0x24)), 7);
    ov40_022307DC(r4, 6, 7);
    GfGfx_EngineATogglePlanes(8, 1);
    GfGfx_EngineBTogglePlanes(8, 1);
    ov40_02242110(r4);
    ov40_022420B4(r4, 0);
    // add r0, #0x10
    // add r1, #0x14
    ov40_0222D66C(r5, r4, 3);
    // add r0, #0x2c
    // add r1, #0x14
    ov40_0222D66C(r5, r4, 0x5e);
    ManagedSprite_SetAnim(*((u32*)(r5 + 0x14)), 0);
    ManagedSprite_SetAnim(*((u32*)(r5 + 0x30)), 3);
    // strh r0, [r5, r1]
    // strb r2, [r5, r0]
    // strb r2, [r5, r0]
    // strb r2, [r5, r0]
    // add r2, #0xf5
    // add r0, #0x54
    // str r2, [r5, r0]
    // sub r0, #0x1c
    // ldrsh r0, [r4, r0]
    // add r1, #0x50
    // str r0, [r5, r1]
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    ov40_022408AC((*((u32*)(r4 + 8)) + 1), (0x13 << 6), 0xff);
    // str r0, [sp]
    TouchHitboxController_Create(ov40_022456B4, 4, ov40_02241E40, r4);
    // str r0, [r5, r1]
    // str r0, [sp]
    TouchHitboxController_Create(ov40_02245674, 4, ov40_02241ED4, r4);
    // str r0, [r5, r1]
    // str r0, [sp]
    TouchHitboxController_Create(ov40_02245654, 2, ov40_02241F3C, r4);
    // str r0, [r5, r1]
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    ov40_02230964((*((u32*)(r4 + 8)) + 1), 1);
    // add r0, r5, r0
    ov40_02230638((0x43 << 2), r4);
    // add r0, r5, r0
    ov40_02230410((0x43 << 2));
    ov40_022307DC(r4, r0, 3);
    // add r0, r5, r0
    ov40_022306A0((0x43 << 2), 0);
    ov40_02230964(r4, 0);
    GfGfx_EngineATogglePlanes(8, 1);
    GfGfx_EngineBTogglePlanes(8, 1);
    GfGfx_EngineATogglePlanes(4, 0);
    GfGfx_EngineBTogglePlanes(4, 0);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // add r0, #8
    ov40_0222DA84(r5, 0);
    ov40_0222DA00(r5, (r5 + 4), 0, 0);
    // add r0, r5, r0
    ov40_022306A0((0x43 << 2), 1);
    ov40_02241AB0(r4);
    GfGfx_EngineATogglePlanes(4, 1);
    GfGfx_EngineBTogglePlanes(4, 1);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 3, 0xc, ((*((u32*)(r5 + 8)) << 0x18) >> 0x18));
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 1, 1, 0);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    IsPaletteFadeFinished((*((u32*)(r4 + 8)) + 1));
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // str r1, [r4, r0]
    ov40_0222C4B8(r4, (*((u32*)(r4 + 0x000006D8)) + 1));
    ov40_0222BF80(r4, 0x12);
}





void ov40_02240238(void) {
    // str r4, [r5, r0]
}





void ov40_02240290(void) {
    // add r0, #8
    // str r0, [sp]
    // str r0, [sp]
    // str r0, [sp]
    // add r1, #0xc
}





void ov40_02240418(void) {
    // add r4, r6, r2
    // str r0, [sp, #0xc]
    // sub r1, #0x30
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    Save_PlayerData_GetOptionsAddr(*((u32*)(r0 + (0x86 << 4))), (0x86 << 4), *((u32*)(r0 + 8)));
    // add r2, sp, #0xc
    ov40_02242FAC(0x6d, 0xc, r0);
    // str r0, [r6, r1]
    // str r0, [r4, r2]
    // str r3, [r4, r0]
    // add r0, #8
    // str r3, [r4, r0]
    // add r0, #0xc
    // str r3, [r4, r0]
    // add r0, #0x10
    // str r3, [r4, r0]
    // add r0, #0x88
    // add r7, r4, r0
    // ldmia r3!, {r0, r1}
    // stmia r7!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r7!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r7!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r7!, {r0, r1}
    // add r2, #0xb4
    // str r5, [r4, r2]
    ov40_02241FD0(r5, 0x000004AC, (0x22 << 4), *((u32*)(r6 + 0x000004AC)));
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    // str r2, [sp]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    ov40_0222D910(r6, (r6 + 4), 8, 0x12);
    GfGfx_EngineATogglePlanes(8, 1);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    // add r0, #8
    ov40_0222DA84(r6, 0);
    ov40_0222DA00(r6, (r6 + 4), 0, 0);
    ov40_0222DD9C(r5, 0x70);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r5 + 0x28)), 2, 0xc, ((*((u32*)(r6 + 8)) << 0x18) >> 0x18));
    ov40_0222BF80(3);
}





void ov40_02240520(void) {
    // add r0, r1, r0
}





void ov40_02240544(void) {
    // add r3, r4, r1
    ov40_0222DE40((0x75 << 2), *((u32*)(r0 + 8)));
    // str r2, [sp]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    ov40_0222D980(r4, (r4 + 4), 8, 0x12);
    ov40_02242FF8(*((u32*)(r4 + 0x000004AC)));
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    // add r0, #8
    ov40_0222DA84(r4, 1);
    ov40_0222DA00(r4, (r4 + 4), 1, 0);
    GfGfx_EngineATogglePlanes(8, 0);
    ov40_02242084(r5);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r5 + 0x28)), 2, 0xc, ((*((u32*)(r4 + 8)) << 0x18) >> 0x18));
    // add r1, #0xf4
    ov40_0222BF80(6);
    ov40_0222BF80(5);
}





void ov40_022405F0(void) {
    // add r4, #8
    // add r0, #8
    // add r0, #8
    // str r0, [sp]
    // str r0, [sp]
    // str r0, [sp]
}





void ov40_022406C8(void) {
    // add r6, r5, r1
    // add r2, r1, r1
    // add r2, pc
    // asr r2, r2, #0x10
    // add pc, r2
    // _022406EE: ; jump table
    ov40_0222DD9C(0x75, (*((u16*)(r2 + 6)) << 0x10));
    ov40_0223077C(r4, *((u32*)(r4 + 0x000006F4)), 0x80, 0x60);
    sub_020879E0(*((u32*)(r4 + 0x000006F4)), 1);
    sub_02087A08(*((u32*)(r4 + 0x000006F4)), 0x18, 0x18);
    // str r1, [r5, r0]
    // add r0, #0xc5
    PlaySE(0x000004B8, 0);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    ov40_0223D5CC((*((u32*)(r4 + 8)) + 1));
    ov40_0223D540(r4);
    ov39_02227720(*((u32*)(r6 + (0xb3 << 2))), *((u32*)(r6 + ((0xb3 << 2) + 4))));
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    ov40_0223D5CC((*((u32*)(r4 + 8)) + 1));
    ov40_0222DE40(r4);
    ov40_0223D540(r4);
    // add r1, sp, #0
    ov39_02227D44();
    StopSE(0x0000057D, 0);
    // strh r1, [r0]
    // ldr r3, [sp]
    ov40_02230CDC(r4, 8, *((u32*)(r3 + 0xc)), *((u32*)(r3 + 4)));
    ov40_0222FB90(r4, 0);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // str r1, [r5, r0]
    StopSE(0x000004B8, 0);
    *((u32*)(r4 + 8)) = 0xff;
    // str r1, [r5, r0]
    // add r0, #0xbf
    PlaySE(0x000004B8, 1);
    // add r0, r4, r0
    // str r0, [r4, r1]
    // add r0, #0x3c
    // add r1, #0x40
    // str r2, [r5, r0]
    // add r1, r4, r1
    MI_CpuCopy8(*((u32*)(r5 + 0x000004BC)), 0x00000878, 0x00001D4C);
    sub_020879E0(*((u32*)(r4 + 0x000006F4)), 0);
    sub_02087A08(*((u32*)(r4 + 0x000006F4)), 0, 0);
    ov40_0222FB90(1);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    *((u32*)(r4 + 8)) = (r1 + 1);
    ov40_0222BF80(r4, 7);
    ov40_0222BF80(r4, 5);
}





void ov40_0224085C(void) {
    sub_020314A4(0x6d, (0x86 << 4));
    // add r1, #0x80
    // str r0, [r1]
    // add r1, #0x80
    ov39_022271C0(*((u32*)(r4 + 0x000004BC)), *((u32*)r4));
    // add r0, #0x80
    // str r1, [r4, r0]
    sub_02030920(0x6d, *((u32*)r4));
    // str r0, [r4, r1]
    // add r0, #0x80
    MI_CpuCopy8(*((u32*)(r4 + 0x000004BC)), *((u32*)(r4 + (0x11 << 4))), 0x64);
}





void ov40_022408AC(void) {
    sub_020314A4(0x6d);
    // add r1, #0x80
    // str r0, [r1]
    // add r1, r5, r0
    // add r1, #0x80
    ov39_022271C0(*((u32*)(r4 + 0x00002608)), *((u32*)r4));
    // add r0, #0x80
    // str r1, [r4, r0]
    sub_02030920(0x6d, *((u32*)r4));
    // str r0, [r4, r1]
    // add r2, r5, r0
    // add r0, #0x80
    MI_CpuCopy8(*((u32*)(r2 + 0x00002608)), *((u32*)(r4 + (0x11 << 4))), 0x64);
}





void ov40_02240910(void) {
    // add r4, #0x80
}





void ov40_0224092C(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0224094C: ; jump table
    ov40_0222FB90(0);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    ov40_0222FBB4((*((u32*)(r4 + 8)) + 1));
    // str r2, [sp]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    ov40_0222D980(r5, (r5 + 4), 8, 0x12);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharDataFromOpenNarc(*((u32*)(r4 + 0x14)), 0x3e, *((u32*)(r4 + 0x24)), 3);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharDataFromOpenNarc(*((u32*)(r4 + 0x14)), 0x3e, *((u32*)(r4 + 0x24)), 7);
    ov40_022307DC(r4, 6, 7);
    SetBgPriority(0, 1);
    SetBgPriority(1, 3);
    SetBgPriority(2, 0);
    SetBgPriority(3, 1);
    SetBgPriority(4, 1);
    SetBgPriority(5, 3);
    SetBgPriority(6, 0);
    SetBgPriority(7, 2);
    ov40_0224085C(r4);
    ov40_02242110(r4);
    // str r0, [sp]
    TouchHitboxController_Create(ov40_022456B4, 4, ov40_02241C10, r4);
    // str r0, [r5, r1]
    // str r0, [sp]
    TouchHitboxController_Create(ov40_02245674, 4, ov40_02241C70, r4);
    // str r0, [r5, r1]
    // str r0, [sp]
    TouchHitboxController_Create(ov40_02245654, 2, ov40_02241CD8, r4);
    // str r0, [r5, r1]
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    ov40_02230964((*((u32*)(r4 + 8)) + 1), 1);
    // str r1, [r5, r0]
    // sub r0, #0xc0
    // add r0, r5, r0
    ov40_02230638((0x73 << 2), r4);
    // add r0, r5, r0
    ov40_02230410((0x43 << 2));
    ov40_022307DC(r4, r0, 3);
    // add r0, r5, r0
    ov40_022306A0((0x43 << 2), 0);
    ov40_02230964(r4, 0);
    GfGfx_EngineATogglePlanes(8, 1);
    GfGfx_EngineBTogglePlanes(8, 1);
    GfGfx_EngineATogglePlanes(4, 0);
    GfGfx_EngineBTogglePlanes(4, 0);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // add r0, #8
    ov40_0222DA84(r5, 0);
    ov40_0222DA00(r5, (r5 + 4), 0, 0);
    // add r0, r5, r0
    ov40_022306A0((0x43 << 2), 1);
    ov40_02241AB0(r4);
    GfGfx_EngineATogglePlanes(4, 1);
    GfGfx_EngineBTogglePlanes(4, 1);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 3, 0xc, ((*((u32*)(r5 + 8)) << 0x18) >> 0x18));
    ov40_0222BF80(r4, 8);
}





void ov40_02240B40(void) {
}





void ov40_02240B58(void) {
}





void ov40_02240B70(void) {
    // ldr r4, [r0, r1]
}





void ov40_02240B90(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _02240BAE: ; jump table
    TouchHitboxController_Destroy(*((u32*)(*((u32*)(r0 + (0x86 << 4))) + 0x00000608)), (*((u16*)(*((u32*)(r0 + 8)) + 6)) << 0x10));
    TouchHitboxController_Destroy(*((u32*)(r5 + 0x0000060C)));
    TouchHitboxController_Destroy(*((u32*)(r5 + (0x61 << 4))));
    GfGfx_EngineBTogglePlanes(4, 0);
    GfGfx_EngineATogglePlanes(4, 0);
    ov40_02240910(r4);
    ov40_02230964(r4, 1);
    // sub r0, #0xc0
    // add r0, r5, r0
    ov40_0223064C((0x73 << 2), r4);
    // add r5, #0x80
    ov40_0222E7B8(r5, r4);
    ov40_02230964(r4, 0);
    ov40_02241A34(r4);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // add r0, #8
    ov40_0222DA84(r5, 1);
    ov40_0222DA00(r5, (r5 + 4), 1, 0);
    ov40_022421FC(r4);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 3, 0xc, ((*((u32*)(r5 + 8)) << 0x18) >> 0x18));
    // add r5, #8
    ov40_0222DAA8(r5);
    ov40_02230964(r4, 1);
    ov40_0222D88C(r4);
    ov40_02230964(r4, 0);
    ov40_0222FB90(r4, 1);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    ov40_0222FBB4((*((u32*)(r4 + 8)) + 1));
    // add r0, #8
    ov40_0222DA84(r5, 0);
    ov40_0222DD08(r4);
    // add r0, #8
    ov40_0222DAA8(r5);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 2, 0xc, 0x10);
    ov40_0222BF64(r4, 1, 1, *((u32*)(r4 + 0x10)));
    ov40_0222BF80(r4, 5);
    Heap_Free(r5);
    BgClearTilemapBufferAndCommit(*((u32*)(r4 + 0x24)), 2);
    BgClearTilemapBufferAndCommit(*((u32*)(r4 + 0x24)), 6);
    BgClearTilemapBufferAndCommit(*((u32*)(r4 + 0x24)), 3);
    BgClearTilemapBufferAndCommit(*((u32*)(r4 + 0x24)), 7);
    sub_0202FC48();
    sub_0202FC24();
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 1, 2, ((*((u32*)(r5 + 8)) << 0x18) >> 0x18));
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 3, 0xc, ((*((u32*)(r5 + 8)) << 0x18) >> 0x18));
}





void ov40_02240D50(void) {
    // add r4, r5, r1
    // str r0, [sp, #0x10]
    NewString_ReadMsgData(*((u32*)(r1 + 0x48)), 8);
    ov40_0222DAB0(0x6d);
    NewString_ReadMsgData(*((u32*)(r5 + 0x48)), 7);
    // str r0, [sp, #0x14]
    sub_020315B8(*((u32*)(r4 + r6)), 0x6d);
    ov40_02230DCC(r5, r0);
    String_New(0xff, 0x6d);
    // str r0, [sp]
    // str r0, [sp, #4]
    BufferString(r7, 0, r6, 0);
    // ldr r2, [sp, #0x14]
    StringExpandPlaceholders(r7, r4);
    // ldr r0, [sp, #0x14]
    String_Delete();
    String_Delete(r6);
    MessageFormat_Delete(r7);
    // add r0, sp, #0x18
    InitWindow();
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r1, sp, #0x18
    AddTextWindowTopLeftCorner(*((u32*)(r5 + 0x24)), 0x14, 2);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, sp, #0x18
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(0x000E0D00, 0, r4, 0);
    // ldr r0, [sp, #0x10]
    // ldr r1, [sp, #0x10]
    // add r2, sp, #0x18
    TextOBJ_CopyFromBGWindow(*((u32*)(r0 + 8)), *((u32*)(r1 + 0xc)), 0x6d);
    String_Delete(r4);
    // add r0, sp, #0x18
    RemoveWindow();
}





void ov40_02240E28(void) {
    // sub r1, #0x44
    ov40_0222C6C8(2);
    GfGfx_EngineATogglePlanes(4, 1);
    // add r0, r5, r0
    InitWindow(0x000008A4);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, r5, r1
    AddWindowParameterized(*((u32*)(r5 + 0x24)), 0x000008A4, 2, 1);
    // add r6, #0x80
    // str r0, [sp, #0x14]
    ov40_0222DAB0(0x6d);
    String_New(0xff, 0x6d);
    // ldr r0, [sp, #0x14]
    sub_020315B8(0x6d);
    // str r0, [sp, #0x18]
    // ldr r1, [sp, #0x18]
    ov40_02230DCC(r5);
    NewString_ReadMsgData(*((u32*)(r5 + 0x48)), r4);
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x18]
    BufferString(r7, 0, 0);
    StringExpandPlaceholders(r7, r6, r4);
    // ldr r0, [sp, #0x18]
    String_Delete();
    String_Delete(r4);
    MessageFormat_Delete(r7);
    NewString_ReadMsgData(*((u32*)(r5 + 0x48)), r4);
    // add r0, r5, r0
    FillWindowPixelBuffer(0x000008A4, 0xcc);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r5, r0
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(0x000008A4, 0, r6, 0);
    // add r0, r5, r0
    ScheduleWindowCopyToVram(0x000008A4);
    String_Delete(r6);
}





void ov40_02240F24(void) {
    // sub r0, #0x44
    // add r0, #0x80
    // str r0, [sp, #0x14]
    ov40_0222DAB0(0x6d);
    String_New(0xff, 0x6d);
    // ldr r0, [sp, #0x14]
    sub_020315B8(0x6d);
    // str r0, [sp, #0x18]
    // ldr r1, [sp, #0x18]
    ov40_02230DCC(r5);
    NewString_ReadMsgData(*((u32*)(r5 + 0x48)), r4);
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x18]
    BufferString(r7, 0, 0);
    StringExpandPlaceholders(r7, r6, r4);
    // ldr r0, [sp, #0x18]
    String_Delete();
    String_Delete(r4);
    MessageFormat_Delete(r7);
    // add r1, r5, r0
    // sub r0, #0x18
    // str r0, [sp, #0x10]
    ov40_0222DAB0(0x6d);
    String_New(0xff, 0x6d);
    // ldr r0, [sp, #0x10]
    sub_020315B8(0x6d);
    // str r0, [sp, #0x1c]
    // ldr r1, [sp, #0x1c]
    ov40_02230DCC(r5);
    NewString_ReadMsgData(*((u32*)(r5 + 0x48)), r4);
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x1c]
    BufferString(r7, 0, 0);
    StringExpandPlaceholders(r7, r6, r4);
    // ldr r0, [sp, #0x1c]
    String_Delete();
    String_Delete(r4);
    MessageFormat_Delete(r7);
    NewString_ReadMsgData(*((u32*)(r5 + 0x48)));
    // add r0, r5, r0
    FillWindowPixelBuffer(0x000008A4, 0xcc);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r5, r0
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(0x000008A4, 0, r6, 0);
    // add r0, r5, r0
    ScheduleWindowCopyToVram(0x000008A4);
    String_Delete(r6);
}





void ov40_02241054(void) {
    // str r0, [sp]
    // add r2, sp, #0x20
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // add r2, sp, #0x10
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldr r0, [sp]
    ov40_0222D78C(2, ov40_02245694);
    // add r0, sp, #0x20
    // str r0, [sp, #8]
    // str r0, [sp, #4]
    // ldr r0, [sp]
    // str r0, [sp, #0xc]
    // add r0, #0x14
    // add r5, #0x10
    // add r7, sp, #0x10
    // str r0, [sp, #0xc]
    // ldr r0, [sp]
    ov40_0222D800(0x69, 2);
    *((u32*)(r4 + 0x14)) = r0;
    // ldr r1, [sp, #0xc]
    ov40_0222D5AC(r5, 2);
    // ldr r2, [sp, #8]
    // ldr r1, [sp, #0xc]
    ov40_0222D66C(r5, *((u32*)r2));
    // ldr r1, [sp]
    ov40_02240D50(r5, (r6 + 1));
    // ldr r2, [sp, #4]
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXY(*((u32*)(r4 + 0x14)), 0x32, (r2 << 0x10));
    ManagedSprite_SetAnim(*((u32*)(r4 + 0x14)), *((u32*)r7));
    // sub r2, #0x2c
    sub_020136B4(*((u32*)(r4 + 0x18)), 0x24, 0x24);
    TextOBJ_SetSpritesDrawFlag(*((u32*)(r4 + 0x18)), 1);
    // ldr r0, [sp, #8]
    // str r0, [sp, #8]
    // ldr r0, [sp, #4]
    // add r4, #0x1c
    // add r0, #0x24
    // add r5, #0x1c
    // str r0, [sp, #4]
}





void ov40_02241114(void) {
    // add r4, #0x10
    // add r4, #0x1c
    // add r5, #0x1c
}





void ov40_02241144(void) {
    sub_020307F8((0x86 << 4));
    sub_0203088C(4, 0);
    ov40_02230D94(r4, r0, r1, r0);
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02241180: ; jump table
    ov40_02230964(r4, 1);
    // sub r0, #0xc0
    // add r0, r5, r0
    ov40_0223064C((0x73 << 2), r4);
    // add r5, #0x80
    ov40_0222E7B8(r5, r4);
    ov40_02230964(r4, 0);
    ov40_02241A34(r4);
    GfGfx_EngineATogglePlanes(4, 0);
    GfGfx_EngineBTogglePlanes(4, 0);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // add r0, #8
    ov40_0222DA84(r5, 1);
    ov40_0222DA00(r5, (r5 + 4), 1, 0);
    ov40_02230964(r4, 1);
    ov40_022421FC(r4);
    ov40_02241054(r4);
    ov40_02230964(r4, 0);
    BgClearTilemapBufferAndCommit(*((u32*)(r4 + 0x24)), 3);
    BgClearTilemapBufferAndCommit(*((u32*)(r4 + 0x24)), 7);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 3, 0xc, ((*((u32*)(r5 + 8)) << 0x18) >> 0x18));
    ov40_0222DED0(r4, 0x00000115);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    System_GetTouchNew((*((u32*)(r4 + 8)) + 1));
    ov40_0222DFB0(r4);
    BgClearTilemapBufferAndCommit(*((u32*)(r4 + 0x24)), 2);
    BgClearTilemapBufferAndCommit(*((u32*)(r4 + 0x24)), 6);
    GfGfx_EngineBTogglePlanes(4, 0);
    GfGfx_EngineATogglePlanes(4, 0);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // add r0, #8
    ov40_0222DA84(r5, 1);
    ov40_0222DA00(r5, (r5 + 4), 1, 0);
    ov40_02241114(r4);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 3, 0xc, ((*((u32*)(r5 + 8)) << 0x18) >> 0x18));
    TouchHitboxController_Destroy(*((u32*)(r5 + 0x00000608)));
    TouchHitboxController_Destroy(*((u32*)(r5 + 0x0000060C)));
    TouchHitboxController_Destroy(*((u32*)(r5 + (0x61 << 4))));
    // add r5, #8
    ov40_0222DAA8(r5);
    ov40_02230964(r4, 1);
    ov40_02240910(r4);
    ov40_0222D88C(r4);
    ov40_02230964(r4, 0);
    ov40_0222FB90(r4, 1);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    ov40_0222FBB4(r4);
    // add r0, #8
    ov40_0222DA84(r5, 0);
    ov40_0222DD08(r4);
    // add r0, #8
    ov40_0222DAA8(r5);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 2, 0xc, 0x10);
    ov40_0222BF64(r4, 1, 1, *((u32*)(r4 + 0x10)));
    ov40_0222BF80(r4, 5);
    Heap_Free(r5);
    BgClearTilemapBufferAndCommit(*((u32*)(r4 + 0x24)), 2);
    BgClearTilemapBufferAndCommit(*((u32*)(r4 + 0x24)), 6);
    BgClearTilemapBufferAndCommit(*((u32*)(r4 + 0x24)), 3);
    BgClearTilemapBufferAndCommit(*((u32*)(r4 + 0x24)), 7);
    sub_0202FC48();
    sub_0202FC24();
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 1, 2, ((*((u32*)(r5 + 8)) << 0x18) >> 0x18));
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 3, 0xc, ((*((u32*)(r5 + 8)) << 0x18) >> 0x18));
    ov40_02242378(r4);
    ov40_0222BF80(r4, 0xd);
}





void ov40_022413EC(void) {
}





void ov40_02241404(void) {
}





void ov40_0224141C(void) {
}





void ov40_02241434(void) {
}





void ov40_0224144C(void) {
}





void ov40_02241464(void) {
}





void ov40_0224147C(void) {
}





void ov40_02241488(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _022414A8: ; jump table
    ov40_0222FBB4((*((u16*)(*((u32*)(r0 + 8)) + 6)) << 0x10));
    ov40_0222D9E8(r5, (r5 + 4), 0);
    // strb r1, [r5, r0]
    // add r2, r4, r0
    // str r2, [r5, r1]
    // str r1, [r4, r0]
    ov40_0222FB40(r4, *((u32*)(r5 + 0x000004BC)));
    ov40_0224085C(r4);
    BgClearTilemapBufferAndCommit(*((u32*)(r4 + 0x24)), 2);
    BgClearTilemapBufferAndCommit(*((u32*)(r4 + 0x24)), 6);
    GfGfx_EngineBTogglePlanes(4, 0);
    GfGfx_EngineATogglePlanes(4, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharDataFromOpenNarc(*((u32*)(r4 + 0x14)), 0x3e, *((u32*)(r4 + 0x24)), 3);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharDataFromOpenNarc(*((u32*)(r4 + 0x14)), 0x3e, *((u32*)(r4 + 0x24)), 7);
    ov40_0222FB90(r4, 0);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    ov40_0222FBB4((*((u32*)(r4 + 8)) + 1));
    ov40_0222DA00(r5, (r5 + 4), 0, 1);
    SetBgPriority(0, 1);
    SetBgPriority(1, 3);
    SetBgPriority(2, 0);
    SetBgPriority(3, 1);
    SetBgPriority(4, 1);
    SetBgPriority(5, 3);
    SetBgPriority(6, 0);
    SetBgPriority(7, 2);
    // str r0, [sp]
    TouchHitboxController_Create(ov40_022456B4, 4, ov40_02241C10, r4);
    // str r0, [r5, r1]
    // str r0, [sp]
    TouchHitboxController_Create(ov40_02245674, 4, ov40_02241C70, r4);
    // str r0, [r5, r1]
    // str r0, [sp]
    TouchHitboxController_Create(ov40_02245654, 2, ov40_02241CD8, r4);
    // str r0, [r5, r1]
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    ov40_02242110((*((u32*)(r4 + 8)) + 1), (0x61 << 4));
    ov40_02241AB0(r4);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharDataFromOpenNarc(*((u32*)(r4 + 0x14)), 0x3e, *((u32*)(r4 + 0x24)), 3);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharDataFromOpenNarc(*((u32*)(r4 + 0x14)), 0x3e, *((u32*)(r4 + 0x24)), 7);
    ov40_02230964(r4, 1);
    // sub r0, #0xc0
    // add r0, r5, r0
    ov40_02230638((0x73 << 2), r4);
    // add r0, r5, r0
    ov40_022306A0((0x43 << 2), 0);
    // add r0, r5, r0
    ov40_02230410((0x43 << 2));
    ov40_022307DC(r4, r0, 3);
    // add r0, #0x80
    ov40_0222E79C(r5, r4);
    // add r5, #0x80
    ov40_0222E7DC(r5, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnDataFromOpenNarc(*((u32*)(r4 + 0x14)), 0x50, *((u32*)(r4 + 0x24)), 3);
    ov40_02230964(r4, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnDataFromOpenNarc(*((u32*)(r4 + 0x14)), 6, *((u32*)(r4 + 0x24)), 7);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    *((u32*)(r5 + 8)) = 0;
    ov40_0222DA00(r5, (r5 + 4), 0, 0);
    // sub r0, #0xc0
    // add r0, r5, r0
    ov40_022306A0((0x73 << 2), 1);
    // add r0, #0x80
    ov40_0222E7DC(r5, 1);
    GfGfx_EngineBTogglePlanes(4, 1);
    GfGfx_EngineATogglePlanes(4, 1);
    GfGfx_EngineBTogglePlanes(8, 1);
    GfGfx_EngineATogglePlanes(8, 1);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 3, 0xc, ((*((u32*)(r5 + 8)) << 0x18) >> 0x18));
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 1, 1, 0);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    IsPaletteFadeFinished((*((u32*)(r4 + 8)) + 1));
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // str r1, [r4, r0]
    ov40_0222C4B8(r4, (*((u32*)(r4 + 0x000006D8)) + 1));
    ov40_0222BF80(r4, 8);
}





void ov40_022417A4(void) {
    // ldr r1, [r4, r1]
    // ldr r0, [r4, r0]
    // ldr r0, [r4, r0]
}





void ov40_022417DC(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _022417FC: ; jump table
    ov40_0222DED0(0x77);
    PlaySE(0x0000057D);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    ov40_0223D5CC((*((u32*)(r4 + 8)) + 1));
    // str r3, [sp]
    // add r2, sp, #4
    sub_0202FC90(*((u32*)(r4 + (0x83 << 4))), 0x6d, 0);
    sub_020314A4(0x6d);
    // str r0, [r5, r1]
    sub_020314C4(*((u32*)(r5 + (0x1d << 4))), *((u32*)(r4 + (0x83 << 4))));
    ov40_0223D540(r4);
    ov39_02227534(*((u32*)(r5 + (0x1d << 4))));
    sub_020314BC(*((u32*)(r5 + (0x1d << 4))));
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    ov40_0223D5CC((*((u32*)(r4 + 8)) + 1));
    sub_0202FC24(0);
    ov40_0222DFB0(r4);
    ov40_0223D540(r4);
    // add r1, sp, #8
    ov39_02227D44();
    StopSE(0x0000057D, 0);
    // ldr r3, [sp, #8]
    ov40_02230CDC(r4, 6, *((u32*)(r3 + 0xc)), *((u32*)(r3 + 4)));
    sub_020879E0(*((u32*)(r4 + (0x6f << 4))), 0);
    sub_02087A08(*((u32*)(r4 + (0x6f << 4))), 0, 0);
    *((u32*)(r4 + 8)) = 0xff;
    ov40_0222DED0(r4, 0x77);
    ov40_02242E4C(r5, r4);
    StopSE(0x0000057D, 0);
    PlaySE(0x00000577);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    System_GetTouchNew((*((u32*)(r4 + 8)) + 1));
    ov40_0222DFB0(r4);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    sub_020879E0(*((u32*)(r4 + (0x6f << 4))), 0);
    sub_02087A08(*((u32*)(r4 + (0x6f << 4))), 0, 0);
    ov40_0222FB28(r4, 0x23);
    ov40_0222BF80(r4, 4);
}





void ov40_02241948(void) {
    // add r4, #8
    // add r0, #8
    // add r0, #8
    // str r0, [sp]
    // str r0, [sp]
    // str r0, [sp]
}





void ov40_02241A34(void) {
    // add r0, r4, r0
    ClearWindowTilemapAndCopyToVram(0x000006D4, (0x86 << 4));
    // add r0, r4, r0
    RemoveWindow(0x000006D4);
}





void ov40_02241A54(void) {
    // add r0, r4, r6
    FillWindowPixelBuffer((0x86 << 4), 0);
    NewString_ReadMsgData(*((u32*)(r5 + 0x48)), r7);
    // add r0, r4, r6
    ov40_022306C0(r0);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r4, r6
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(0x000F0D00, 0, r5, r0);
    String_Delete(r5);
    // add r0, r4, r6
    ScheduleWindowCopyToVram();
}





void ov40_02241AB0(void) {
    // add r0, r4, r6
    InitWindow((0x86 << 4));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, r4, r6
    AddWindowParameterized(*((u32*)(r5 + 0x24)), 6, 8);
    // add r1, #0x79
    ov40_02241A54(r5, *((u32*)(r4 + (0x73 << 2))));
}





void ov40_02241AFC(void) {
    // add r0, r4, r6
    InitWindow((0x86 << 4));
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, r4, r6
    AddWindowParameterized(*((u32*)(r5 + 0x24)), 6, 4);
    // add r0, r4, r6
    FillWindowPixelBuffer(0);
    NewString_ReadMsgData(*((u32*)(r5 + 0x48)), 0x82);
    // add r0, r4, r6
    ov40_022306C0(r0);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r4, r6
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(0x000F0D00, 0, r7, r0);
    String_Delete(r7);
    // add r0, r4, r6
    ScheduleWindowCopyToVram();
    // add r6, #0x10
    // add r0, r4, r6
    InitWindow();
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, r4, r6
    AddWindowParameterized(*((u32*)(r5 + 0x24)), 6, 0x12);
    // add r0, r4, r6
    FillWindowPixelBuffer(0);
    NewString_ReadMsgData(*((u32*)(r5 + 0x48)), 0x83);
    // add r0, r4, r6
    ov40_022306C0(r0);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r4, r6
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(0x000F0D00, 0, r5, r0);
    String_Delete(r5);
    // add r0, r4, r6
    ScheduleWindowCopyToVram();
}





void ov40_02241BDC(void) {
    // add r0, r4, r0
    ClearWindowTilemapAndCopyToVram(0x000006D4, (0x86 << 4));
    // add r0, r4, r0
    RemoveWindow(0x000006D4);
    // add r0, r4, r0
    ClearWindowTilemapAndCopyToVram(0x000006E4);
    // add r0, r4, r0
    RemoveWindow(0x000006E4);
}





void ov40_02241C10(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02241C28: ; jump table
}





void ov40_02241C70(void) {
    // add r1, r0, r0
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _02241C8E: ; jump table
    // str r1, [r3, r0]
    // add r2, #0x2c
    // add r0, r4, r0
}





void ov40_02241CD8(void) {
}





void ov40_02241D10(void) {
    // add r1, r6, r6
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _02241D30: ; jump table
    ov40_02230944(r2, (*((u16*)(r1 + 6)) << 0x10));
    // strb r6, [r5, r0]
    ov40_0222BF80(r4, 5);
    ov40_02230944(r4);
    // strb r6, [r5, r0]
    ov40_0222BF80(r4, 5);
    // add r0, #0x2c
    sub_02031620(*((u32*)(r4 + r0)));
    ov40_02230944(r4);
    PlaySE(0x0000057C);
    ov40_0222DF60(r4, 0x80);
    sub_02031620(*((u32*)(r4 + 0x0000088C)), *((u8*)(r5 + 0x000004C3)));
    // strb r0, [r5, r1]
    sub_0203162C(*((u32*)(r4 + 0x0000088C)), 0x000004C3);
    // strb r0, [r5, r1]
    // strb r1, [r5, r0]
    // strb r1, [r5, r0]
    ov40_0223DDE8(r4, *((u8*)(r5 + 0x000004C3)), *((u8*)(r5 + (0x000004C3 + 1))));
    ov40_0223DEB8(r4);
    ov40_02230944(r4);
    ov40_0222BF80(r4, 4);
    ov40_02230944(r4);
    ov40_0223DB94(r4);
    PlaySE(0x0000057C);
    ov40_0222DF60(r4, 0x74);
    ov40_0222BF80(r4, 0xc);
}





void ov40_02241E14(void) {
    ov40_0223EBB8(r2, r0);
    PlaySE(0x0000057C);
    ov40_0223EC40(r4, r5);
}





void ov40_02241E40(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02241E5E: ; jump table
}





void ov40_02241ED4(void) {
    // add r1, r0, r0
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _02241EF2: ; jump table
    // str r1, [r3, r0]
    // add r2, #0x2c
    // add r0, r4, r0
}





void ov40_02241F3C(void) {
}





void ov40_02241F74(void) {
    // sub r2, #0x2c
    // sub r2, #0x2c
}





void ov40_02241FD0(void) {
    // add r0, #0x10
    // add r1, #0x14
    // add r0, #0x2c
    // add r1, #0x14
    // add r0, #0x10
    // add r1, #0x14
    // add r0, #0x2c
    // add r1, #0x14
    // sub r2, #0x2c
    // sub r2, #0x2c
}





void ov40_02242084(void) {
    // add r0, #0x10
    // add r0, #0x2c
}





void ov40_022420B4(void) {
    // sub r2, #0x2c
    // sub r2, #0x2c
}





void ov40_02242110(void) {
    ov40_0222D6EC(2);
    ov40_0222D800(r5, 2);
    *((u32*)(r4 + 0x14)) = r0;
    ov40_0222D800(r5, 2);
    *((u32*)(r4 + 0x30)) = r0;
    // add r0, #0x10
    // add r1, #0x14
    ov40_0222D5AC(r4, r5, 2);
    // add r0, #0x2c
    // add r1, #0x14
    ov40_0222D5AC(r4, r5, 2);
    // add r0, #0x10
    // add r1, #0x14
    ov40_0222D66C(r4, r5, 3);
    // add r0, #0x2c
    // add r1, #0x14
    ov40_0222D66C(r4, r5, 0x6f);
    ManagedSprite_SetAnim(*((u32*)(r4 + 0x14)), 0);
    ManagedSprite_SetAnim(*((u32*)(r4 + 0x30)), 1);
    // add r0, #0x10
    // add r1, #0x14
    ov40_0222D66C(r4, r5, 3);
    // add r0, #0x2c
    // add r1, #0x14
    ov40_0222D66C(r4, r5, 0x5e);
    ManagedSprite_SetAnim(*((u32*)(r4 + 0x14)), 0);
    ManagedSprite_SetAnim(*((u32*)(r4 + 0x30)), 3);
    ManagedSprite_SetPositionXY(*((u32*)(r4 + 0x14)), 0x20, 0xe8);
    ManagedSprite_SetPositionXY(*((u32*)(r4 + 0x30)), 0x80, 0xe8);
    // sub r2, #0x2c
    sub_020136B4(*((u32*)(r4 + 0x18)), 0x24, 0x24);
    // sub r2, #0x2c
    sub_020136B4(*((u32*)(r4 + 0x34)), 0x24, 0x24);
    TextOBJ_SetSpritesDrawFlag(*((u32*)(r4 + 0x18)), 1);
    TextOBJ_SetSpritesDrawFlag(*((u32*)(r4 + 0x34)), 1);
    ov40_022420B4(r5, 0);
}





void ov40_022421FC(void) {
    // add r0, #0x10
    // add r0, #0x2c
}





void ov40_0224222C(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0224224A: ; jump table
    // sub r0, #0xc0
    // add r0, r4, r0
    // add r4, #0x80
    // add r0, #0x80
    // add r4, #0x80
    // sub r0, #0xc0
    // add r0, r4, r0
    // add r0, r4, r0
    // add r0, r4, r0
    // add r4, #0x80
    // sub r0, #0xc0
    // add r0, r4, r0
    // eor r0, r2
    // str r0, [r4, r1]
    // add r1, #0x79
}





void ov40_02242378(void) {
    // sub r0, #0xc0
    // add r0, r4, r0
    // add r4, #0x80
    // add r0, #8
    // str r0, [sp]
    // add r0, #8
    // str r0, [sp]
}





void ov40_02242490(void) {
    // add r0, #8
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp]
}





void ov40_0224253C(void) {
    // add r0, #8
    // str r0, [sp]
}





void ov40_022425E8(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _02242608: ; jump table
    GfGfx_EngineBTogglePlanes(4, 0, (0x86 << 4));
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // add r0, #8
    ov40_0222DA84(r5, 1);
    ov40_0222DA00(r5, (r5 + 4), 1, 2);
    BgClearTilemapBufferAndCommit(*((u32*)(r4 + 0x24)), 6);
    ov40_02240F24(r4, 0x00000116, 0);
    ov40_022306E0(r4);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 3, 0xc, ((*((u32*)(r5 + 8)) << 0x18) >> 0x18));
    // sub r2, #0xc4
    ov40_0222FC14(*((u32*)(r5 + (0x72 << 2))), *((u8*)(r5 + r2)));
    // strb r1, [r5, r0]
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    ov40_0223077C((*((u32*)(r4 + 8)) + 1), *((u32*)(r4 + (0x6f << 4))), 0x80, 0x60);
    sub_020879E0(*((u32*)(r4 + (0x6f << 4))), 1);
    sub_02087A08(*((u32*)(r4 + (0x6f << 4))), 0x18, 0x18);
    PlaySE(0x0000057D);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    ov40_0223D5CC((*((u32*)(r4 + 8)) + 1));
    ov40_02240F24(r4, (0x46 << 2), 0);
    sub_020307F8();
    sub_0203088C(4, 0);
    ov40_0223D540(r4);
    ov39_0222774C(r6, r5);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    ov40_0223D5CC((*((u32*)(r4 + 8)) + 1));
    ov40_0223D540(r4);
    // add r1, sp, #4
    ov39_02227D44();
    StopSE(0x0000057D, 0);
    StopSE(0);
    PlaySE(0x00000577);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    ov40_02240F24(r4, 0x00000119, 0);
    System_GetTouchNew();
    ov40_0222DEAC(r4);
    ov40_02241114(r4);
    sub_020879E0(*((u32*)(r4 + (0x6f << 4))), 0);
    sub_02087A08(*((u32*)(r4 + (0x6f << 4))), 0, 0);
    ov40_0222FDC4(r4);
    ov40_0222FCCC(r4);
    // add r0, r4, r0
    ov40_0222F734(0x0000049C);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    TouchHitboxController_Destroy(*((u32*)(r5 + 0x00000608)));
    TouchHitboxController_Destroy(*((u32*)(r5 + 0x0000060C)));
    TouchHitboxController_Destroy(*((u32*)(r5 + (0x61 << 4))));
    // add r5, #8
    ov40_0222DAA8(r5);
    ov40_02230964(r4, 1);
    ov40_02240910(r4);
    ov40_0222D88C(r4);
    ov40_02230964(r4, 0);
    sub_0203A948(1, 0x6d);
    ov40_0222FB90(r4, 1);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    ov40_0222FBB4(r4);
    // add r0, #8
    ov40_0222DA84(r5, 0);
    ov40_0222DD08(r4);
    // add r0, #8
    ov40_0222DAA8(r5);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 2, 0xc, 0x10);
    ov40_0222BF64(r4, 1, 1, *((u32*)(r4 + 0x10)));
    ov40_0222BF80(r4, 5);
    Heap_Free(r5);
    BgClearTilemapBufferAndCommit(*((u32*)(r4 + 0x24)), 2);
    BgClearTilemapBufferAndCommit(*((u32*)(r4 + 0x24)), 6);
    BgClearTilemapBufferAndCommit(*((u32*)(r4 + 0x24)), 3);
    BgClearTilemapBufferAndCommit(*((u32*)(r4 + 0x24)), 7);
    sub_0202FC48();
    sub_0202FC24();
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 1, 2, ((*((u32*)(r5 + 8)) << 0x18) >> 0x18));
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 3, 0xc, ((*((u32*)(r5 + 8)) << 0x18) >> 0x18));
}





void ov40_022428D4(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _022428F4: ; jump table
    // add r0, #8
    // str r0, [sp]
    // add r0, #0xc
    // add r0, #0x10
    // add r1, #0x14
    // add r0, #0x2c
    // add r1, #0x14
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // sub r0, #0xc0
    // add r0, r5, r0
    // add r0, r5, r0
    // add r0, r5, r0
    // add r0, r5, r0
    // add r0, #0x80
    // add r0, #0x80
    // add r5, #0x80
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, #8
    // sub r0, #0xc0
    // add r0, r5, r0
    // add r0, #0x80
    // str r0, [sp]
}





void ov40_02242AEC(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _02242B0C: ; jump table
    ov40_0222DEAC((*((u16*)(*((u32*)(r0 + 8)) + 6)) << 0x10));
    BgClearTilemapBufferAndCommit(*((u32*)(r4 + 0x24)), 2);
    BgClearTilemapBufferAndCommit(*((u32*)(r4 + 0x24)), 6);
    GfGfx_EngineBTogglePlanes(4, 0);
    GfGfx_EngineATogglePlanes(4, 0);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // add r0, #8
    ov40_0222DA84(r5, 1);
    ov40_0222DA00(r5, (r5 + 4), 1, 0);
    ov40_02241114(r4);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 3, 0xc, ((*((u32*)(r5 + 8)) << 0x18) >> 0x18));
    ov40_02242110();
    // add r0, #0x10
    // add r1, #0x14
    ov40_0222D66C(r5, r4, 3);
    // add r0, #0x2c
    // add r1, #0x14
    ov40_0222D66C(r5, r4, 0x5e);
    ManagedSprite_SetAnim(*((u32*)(r5 + 0x14)), 0);
    ManagedSprite_SetAnim(*((u32*)(r5 + 0x30)), 3);
    ov40_02241AB0(r4);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharDataFromOpenNarc(*((u32*)(r4 + 0x14)), 0x3e, *((u32*)(r4 + 0x24)), 3);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharDataFromOpenNarc(*((u32*)(r4 + 0x14)), 0x3e, *((u32*)(r4 + 0x24)), 7);
    ov40_02230964(r4, 1);
    // sub r0, #0xc0
    // add r0, r5, r0
    ov40_02230638((0x73 << 2), r4);
    // add r0, r5, r0
    ov40_022306A0((0x43 << 2), 0);
    // add r0, r5, r0
    ov40_02230410((0x43 << 2));
    ov40_022307DC(r4, r0, 3);
    // add r0, #0x80
    ov40_0222E79C(r5, r4);
    // add r5, #0x80
    ov40_0222E7DC(r5, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnDataFromOpenNarc(*((u32*)(r4 + 0x14)), 0x50, *((u32*)(r4 + 0x24)), 3);
    ov40_02230964(r4, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnDataFromOpenNarc(*((u32*)(r4 + 0x14)), 6, *((u32*)(r4 + 0x24)), 7);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // add r0, #8
    ov40_0222DA84(r5, 0);
    ov40_0222DA00(r5, (r5 + 4), 0, 0);
    // sub r0, #0xc0
    // add r0, r5, r0
    ov40_022306A0((0x73 << 2), 1);
    // add r0, #0x80
    ov40_0222E7DC(r5, 1);
    GfGfx_EngineBTogglePlanes(4, 1);
    GfGfx_EngineATogglePlanes(4, 1);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 3, 0xc, ((*((u32*)(r5 + 8)) << 0x18) >> 0x18));
}





void ov40_02242CFC(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 0, 0, 0);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    IsPaletteFadeFinished((*((u32*)(r5 + 8)) + 1));
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    ov40_02230964((*((u32*)(r5 + 8)) + 1), 1);
    // sub r0, #0xc0
    // add r0, r4, r0
    ov40_0223064C((0x73 << 2), r5);
    // add r0, #0x80
    ov40_0222E7B8(r4, r5);
    ov40_02230964(r5, 0);
    TouchHitboxController_Destroy(*((u32*)(r4 + 0x00000608)));
    TouchHitboxController_Destroy(*((u32*)(r4 + 0x0000060C)));
    TouchHitboxController_Destroy(*((u32*)(r4 + (0x61 << 4))));
    ov40_02230964(r5, 1);
    ov40_02240910(r5);
    ov40_02241A34(r5);
    ov40_022421FC(r5);
    ov40_0222D8C8(r5);
    ov40_02230964(r5, 0);
    ov40_0222C4E8(r5, *((u32*)*((u32*)(r5 + 0x10))));
    sub_02087A84(*((u32*)(r5 + 0x00000868)), 1, 0);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
}





void ov40_02242DF0(void) {
    // str r0, [r4, r2]
    // str r1, [r4, r0]
}





void ov40_02242E14(void) {
    ov40_0223D540(*((u32*)r1));
    // add r1, r4, r1
    ov39_022280D4(0x000008B4);
    ov40_0222FB40(r4);
    // add r0, #0xa7
    // strb r1, [r4, r0]
}





void ov40_02242E48(void) {
    // bx lr
    // TODO: decompile
}





void ov40_02242E4C(void) {
    ov40_0222DAB0(0x6d);
    // str r4, [sp, #0x14]
    String_New(0xff, 0x6d);
    // str r0, [sp, #0x18]
    String_New(0xff, 0x6d);
    // str r0, [sp, #0x1c]
    String_New(0xff, 0x6d);
    // str r0, [sp, #0x20]
    _ll_udiv(r7, r4, 0x000186A0, 0);
    // str r0, [sp, #0x24]
    NewString_ReadMsgData(*((u32*)(r5 + 0x48)), 0x00000127);
    // str r0, [sp, #0x28]
    String_New(0xff, 0x6d);
    // str r0, [sp, #0x2c]
    // ldr r1, [sp, #0x14]
    _ull_mod(r7, 0x000186A0, 0);
    // str r0, [sp]
    // ldr r0, [sp, #0x18]
    String16_FormatInteger(1, r0, 5, 2);
    // ldr r0, [sp, #0x24]
    _ull_mod(r4, 0x000186A0, 0);
    // str r0, [sp]
    // ldr r0, [sp, #0x1c]
    String16_FormatInteger(1, r0, 5, 2);
    // ldr r0, [sp, #0x24]
    _ll_udiv(r4, 0x000186A0, 0);
    // str r0, [sp]
    // ldr r0, [sp, #0x20]
    String16_FormatInteger(1, r0, 2, 2);
    // str r0, [sp]
    // ldr r2, [sp, #0x18]
    // str r1, [sp, #4]
    BufferString(r6, 2, 0);
    // str r1, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x1c]
    BufferString(r6, 1, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x20]
    BufferString(r6, 0, 0);
    // ldr r1, [sp, #0x2c]
    // ldr r2, [sp, #0x28]
    StringExpandPlaceholders(r6);
    // add r0, r5, r0
    FillWindowPixelBuffer(0x000008A4, 0xcc);
    // str r1, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x2c]
    // str r0, [sp, #8]
    // add r0, r5, r0
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(0x000008A4, 0, 0);
    // add r0, r5, r0
    ScheduleWindowCopyToVram(0x000008A4);
    // ldr r0, [sp, #0x18]
    String_Delete();
    // ldr r0, [sp, #0x1c]
    String_Delete();
    // ldr r0, [sp, #0x20]
    String_Delete();
    // ldr r0, [sp, #0x28]
    String_Delete();
    // ldr r0, [sp, #0x2c]
    String_Delete();
    MessageFormat_ResetBuffers(r6);
    MessageFormat_Delete(r6);
}





void ov40_02242FAC(void) {
    // str r0, [sp]
    // ldr r1, [sp]
    // str r6, [r4]
    // add r0, r4, r0
}





void ov40_02242FF8(void) {
}





void ov40_0224301C(void) {
    // str r4, [r0, r3]
    // str r1, [r0, r2]
    // add r1, #8
    // str r3, [r0, r1]
    // add r1, #0xc
    // str r3, [r0, r1]
    // add r1, #0x10
    // str r3, [r0, r1]
    // add r1, #0x14
    // str r3, [r0, r1]
    // add r3, r0, r1
    // sub r1, #0x24
    // add r1, #8
    // str r3, [r0, r1]
    // add r3, r0, r1
    // sub r1, #0x22
    // add r2, #0xc
    // str r1, [r0, r2]
    // add r3, r0, r1
    // sub r1, #0x28
    // add r1, #0xc
    // str r3, [r0, r1]
    // add r3, r0, r1
    // sub r1, #0x26
    // add r2, #0x10
    // str r1, [r0, r2]
}





void ov40_022430A0(void) {
    // str r1, [r3, r2]
    // sub r4, #0xb4
    // strh r5, [r3, r4]
    // add r4, #0x14
    // sub r4, #0xb2
    // strh r5, [r3, r4]
    // add r4, #0x14
    // sub r4, #0xb0
    // strh r5, [r3, r4]
    // add r4, #0x14
    // add r4, #0x18
    // add r5, r5, r3
    // sub r4, #0xae
    // strh r5, [r3, r4]
    // add r4, #0x14
    // add r4, #0x18
    // add r5, r5, r3
    // sub r4, #0xac
    // strh r5, [r3, r4]
    // add r4, #0x1c
    // add r5, #0x14
    // add r6, #0x18
    // sub r2, #0xaa
    // add r3, r3, r5
    // add r4, r4, r3
    // str r0, [sp]
    // strh r4, [r3, r2]
    ov40_0224301C(1, (0xa6 << 2), r0);
    // ldr r1, [sp]
    // add r3, #0xa8
    // ldr r2, [sp]
    // add r5, r5, r2
    // ldr r2, [sp]
    // str r5, [r2, r4]
    // add r3, sp, #8
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [sp]
    // add r3, sp, #8
    // add r0, r3, r0
    // ldr r5, [sp]
    // strh r3, [r5, r2]
    // ldr r0, [sp]
    // add r1, r0, r1
    // strh r2, [r1, r0]
    // ldr r1, [sp]
    // add r0, r0, r6
    // str r6, [r2, r5]
    // add r2, #0x1c
    // ldr r0, [sp]
    // mov ip, r5
    // str r0, [sp, #4]
    // ldr r2, [sp, #4]
    // mov r0, ip
    // ldr r0, [sp]
    // add r3, r0, r3
    // mov r0, ip
    *((u32*)(0 + 4)) = (*((u32*)(((0 + 1) << 1) + (0xab << 2))) + 1);
    // add r2, #0x1c
    // add r4, #0x1c
    // ldr r0, [sp, #4]
    // ldr r1, [sp]
    // str r0, [sp, #4]
    // mov r0, ip
    // mov ip, r0
}





void ov40_0224320C(void) {
    // str r1, [r0, r2]
    // str r3, [r0, r1]
    // add r1, #8
    // str r3, [r0, r1]
    // add r2, #0xc
    // str r3, [r0, r2]
}





void ov40_02243224(void) {
}





void ov40_0224326C(void) {
    // ldr r0, [r4, r0]
}





void ov40_02243284(void) {
    // str r0, [r4, r1]
}





void ov40_022432AC(void) {
    ov40_02243E80(0, 0);
    // ldrsh r1, [r4, r1]
    // ldrsh r2, [r4, r2]
    ManagedSprite_OffsetPositionXY(*((u32*)(r5 + 0xc)), 0x14, 0x16);
    *((u8*)(r4 + 0x18)) = (*((u8*)(r4 + 0x18)) - 1);
    ManagedSprite_SetAffineScale(*((u32*)(r4 + 0xc)), *((u32*)(r7 + (*((u8*)(r4 + 0x19)) << 2))), *((u32*)(r7 + (*((u8*)(r4 + 0x19)) << 2))));
    *((u8*)(r4 + 0x19)) = (*((u8*)(r4 + 0x19)) + 1);
    ManagedSprite_SetAffineOverwriteMode(*((u32*)(r4 + 0xc)), 2);
    ManagedSprite_SetAffineScale(*((u32*)(r4 + 0xc)), *((u32*)(ov40_02245E58 + (*((u8*)(r4 + 0x19)) << 2))), *((u32*)(ov40_02245E58 + (*((u8*)(r4 + 0x19)) << 2))));
    *((u8*)(r4 + 0x19)) = (*((u8*)(r4 + 0x19)) + 1);
    ManagedSprite_SetAffineOverwriteMode(*((u32*)(r4 + 0xc)), 2);
    // add r4, #0x1c
    // ldrsh r1, [r4, r1]
    // ldrsh r2, [r4, r2]
    ManagedSprite_OffsetPositionXY(*((u32*)(r5 + (0x57 << 2))), (0x59 << 2), 0x00000166);
    // strb r1, [r4, r0]
    // add r4, #0x1c
    // add r4, r5, r0
    ov40_02244054(*((u32*)r4), *((u32*)(r4 + 8)));
    ManagedSprite_SetAnim(*((u32*)(r4 + 0xc)), r0);
    ManagedSprite_TickFrame(*((u32*)(r4 + 0xc)));
    // add r4, #0x1c
    // add r4, r5, r0
    ov40_02244054(*((u32*)r4), *((u32*)(r4 + 8)));
    ManagedSprite_SetAnim(*((u32*)(r4 + 0xc)), r0);
    ManagedSprite_TickFrame(*((u32*)(r4 + 0xc)));
    // add r4, #0x1c
    // str r1, [r5, r0]
    // str r1, [r5, r0]
    // add r0, #0x14
    // add r1, #0x18
    // add r4, r5, r0
    ManagedSprite_SetAffineOverwriteMode(*((u32*)(r4 + 0xc)), 1);
    ManagedSprite_SetAffineScale(*((u32*)(r4 + 0xc)), *((u32*)(r7 + (r0 << 2))), *((u32*)(r7 + (r0 << 2))));
    *((u8*)(r4 + 0x19)) = (*((u8*)(r4 + 0x19)) + 1);
    // add r4, #0x1c
    // add r4, r5, r0
    ManagedSprite_SetAffineOverwriteMode(*((u32*)(r4 + 0xc)), 1);
    ManagedSprite_SetAffineScale(*((u32*)(r4 + 0xc)), *((u32*)(r7 + (r0 << 2))), *((u32*)(r7 + (r0 << 2))));
    *((u8*)(r4 + 0x19)) = (*((u8*)(r4 + 0x19)) + 1);
    // add r4, #0x1c
    // str r0, [r5, r1]
    // str r2, [r5, r0]
    ov40_022441F8(((2 << 8) - 4), (2 << 8), (*((u32*)(r5 + ((2 << 8) - 4))) + 1));
    ov40_022439CC(r5, *((u32*)(r5 + ((0xa9 << 2) - 4))));
    ov40_02243EB0(r5, r0);
    ov40_022439F4(r5, *((u32*)(r5 + (r1 - 4))));
    ov40_02243EB0(r5, r0);
    ov40_02243E80(r5, 0, 1);
    ov40_022439B8(r5);
    ov40_0224320C(r5, 1);
}





void ov40_02243538(void) {
    // blx r1
    ov40_02243F88(r0, *((u32*)(ov40_02245C18 + (*((u32*)(r0 + (0x7d << 2))) << 2))), (*((u32*)(r0 + (0x7d << 2))) << 2));
}





void ov40_0224355C(void) {
    String_New(0x64, 0x6d);
    // str r0, [sp, #4]
    // str r0, [r7, r1]
    // str r6, [r7, r0]
    // add r0, #8
    // sub r1, #0xc4
    // str r6, [r7, r0]
    // add r5, r7, r0
    // str r0, [r4]
    ov40_02244054(1, *((u32*)(r7 + 8)));
    ManagedSprite_SetAnim(*((u32*)(r4 + 0xc)), r0);
    // str r0, [sp, #8]
    _ll_mul(*((u32*)r5), *((u32*)(r5 + 4)), 0xa, 0);
    // str r0, [r5]
    *((u32*)(r5 + 4)) = r1;
    // ldr r1, [sp, #8]
    // add r2, r2, r1
    // str r2, [r5]
    // adc r0, r1
    *((u32*)(r5 + 4)) = *((u32*)(r5 + 4));
    // str r0, [sp]
    // ldr r0, [sp, #4]
    // ldr r1, [sp, #8]
    String16_FormatInteger(1, 0x00000000, 1, 1);
    // ldr r1, [sp, #4]
    String_Cat(*((u32*)(r7 + (0xb << 6))));
    // add r4, #0x1c
    // ldr r0, [sp, #4]
    String_Delete(*((u32*)(r7 + (0x81 << 2))));
    ov40_0224320C(r7, 3);
}





void ov40_02243614(void) {
    // sub r1, #0x80
    // str r2, [r5, r1]
    // sub r1, #0x80
    // add r1, r5, r1
    // add r1, #0x94
    // str r2, [r5, r1]
    // add r1, #0x98
    // str r3, [r5, r1]
    // add r0, #0x9c
    // str r2, [r5, r0]
    // sub r0, #0x80
    // str r0, [r5, r4]
    // add r1, r5, r4
    // add r0, r5, r4
    // add r0, r5, r4
    // add r1, r5, r4
    // add r0, r5, r4
    // add r0, r5, r4
    // str r2, [r5, r1]
    // str r3, [r5, r0]
    // add r1, #8
    // str r2, [r5, r1]
    // str r1, [r5, r0]
    // str r1, [r5, r0]
    // str r1, [r5, r0]
}





void ov40_022436D4(void) {
    // add r1, r4, r1
    *((u32*)(r0 + 0x10)) = (0x8e << 2);
    // add r2, #0x1c
    // add r3, sp, #4
    // strh r1, [r3]
    // add r2, sp, #4
    // add r1, r2, r1
    // add r2, r4, r2
    // mvn r7, r7
    // mvn r5, r5
    // mvn r6, r6
    // ldrsh r5, [r1, r5]
    // ldrsh r6, [r1, r6]
    // sub r6, r5, r6
    // strb r6, [r2, r5]
    // mvn r5, r5
    // mvn r6, r6
    // ldrsh r5, [r1, r5]
    // ldrsh r6, [r1, r6]
    // sub r6, r5, r6
    // strb r6, [r2, r5]
    // mvn r5, r5
    // mvn r6, r6
    // ldrsh r5, [r1, r5]
    // ldrsh r6, [r1, r6]
    // add r6, r5, r6
    // strb r6, [r2, r5]
    // mvn r5, r5
    // ldrsh r6, [r1, r5]
    // ldrsh r5, [r1, r7]
    // add r1, #8
    // add r5, r6, r5
    // strb r5, [r2, r3]
    // strb r3, [r4, r0]
    // strb r2, [r4, r1]
    // strb r2, [r4, r1]
    // strb r1, [r4, r5]
    // strb r3, [r4, r5]
    // strb r1, [r4, r3]
    // strb r2, [r4, r1]
    // strb r2, [r4, r1]
    // sub r0, #0x58
    // str r1, [sp]
    // add r0, r4, r0
    TouchHitboxController_Create((0x29 << 4), 0x18, ov40_022437C0, r0);
    // str r0, [r4, r1]
}





void ov40_022437C0(void) {
    // add r0, #0xa4
    // add r2, #0xa4
    // str r0, [r4, r2]
    // add r2, r4, r0
    // str r1, [r4, r0]
    // str r5, [r4, r0]
    // str r1, [r4, r0]
    // str r1, [r4, r0]
    PlaySE(0x0000057B, *((u32*)((0x7d << 2) + 4)), (0x7d << 2));
    // strh r1, [r4, r0]
    // strh r1, [r4, r0]
    // strh r1, [r4, r0]
    // strh r1, [r4, r0]
    // sub r0, #0xc
    _u32_div_f(r5, 5);
    // strh r1, [r4, r0]
    // sub r0, #0xc
    _u32_div_f(r5, 5);
    // strh r0, [r4, r1]
    PlaySE(0x0000057B, 0x000001BA);
    // sub r0, #0xb
    // str r0, [r4, r6]
    // add r1, r4, r6
    ov40_02244054(*((u32*)(r4 + (*((u32*)(r4 + (0x62 << 2))) * 0x1c))), *((u32*)(r1 + 8)));
    // add r0, r4, r6
    ManagedSprite_SetAnim(*((u32*)(r0 + 0xc)), r0);
    ov40_02243E80(r4, 1, 1);
    // sub r5, #0xc
    ov40_02243EEC(r4, r5);
    ov40_02243E80(r4, 1, 0);
    ov40_02243E80(r4, 2, 1);
    ov40_02243F38(r4, r5, 2);
    ManagedSprite_SetAnim(*((u32*)(r4 + (0x73 << 2))), 3);
    // add r0, r4, r6
    // add r1, #0x98
    // str r2, [r4, r1]
    // add r1, #0x9c
    // str r2, [r4, r1]
    // add r0, #0xa0
    // str r2, [r4, r0]
    // add r3, r4, r3
    // add r1, #0x98
    // str r2, [r4, r1]
    // add r1, #0x9c
    // str r3, [r4, r1]
    // add r0, #0xa0
    // str r1, [r4, r0]
    // add r2, #0x98
    // str r3, [r4, r2]
    // add r0, #0x9c
    // str r1, [r4, r0]
    PlaySE(0x0000057B, 0, (0x81 << 2), 2);
    ov40_02243614(r4);
    PlaySE();
    ov40_0224355C(r4);
}





void ov40_0224395C(void) {
    // str r1, [r4, r0]
}





void ov40_022439B8(void) {
    // str r3, [r0, r2]
    // str r3, [r0, r1]
    // add r2, #8
    // str r3, [r0, r2]
}





void ov40_022439CC(void) {
    // add r0, #0x1c
}





void ov40_022439F4(void) {
    // add r0, #0x1c
}





void ov40_02243A28(void) {
    // add r1, #0xc
    // str r1, [sp, #0x18]
    // add r1, #8
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharDataFromOpenNarc(*((u32*)(r0 + ((0x89 << 2) - 4))), 0x36, *((u32*)(r0 + (0x89 << 2))), 3);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnDataFromOpenNarc(r4, 0x2b, r7, 3);
    // str r4, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x18]
    SpriteSystem_LoadPaletteBufferFromOpenNarc((0xfa << 2), 2, r6, r5);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    SpriteSystem_LoadCharResObjFromOpenNarc(r6, r5, r4, 0x28);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadCellResObjFromOpenNarc(r6, r5, r4, 0x29);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadAnimResObjFromOpenNarc(r6, r5, r4, 0x2a);
    // str r4, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x18]
    SpriteSystem_LoadPaletteBufferFromOpenNarc(0x000003E9, 2, r6, r5);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    SpriteSystem_LoadCharResObjFromOpenNarc(r6, r5, r4, 0x57);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadCellResObjFromOpenNarc(r6, r5, r4, 0x55);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadAnimResObjFromOpenNarc(r6, r5, r4, 0x56);
}





void ov40_02243B48(void) {
    // add r4, #0x1c
    // add r5, #0x1c
}





void ov40_02243B94(void) {
    Sprite_DeleteAndFreeResources(*((u32*)(r0 + 0xc)));
    // add r5, #0x1c
    Sprite_DeleteAndFreeResources(*((u32*)(r6 + (0x57 << 2))));
    // add r4, #0x1c
    Sprite_DeleteAndFreeResources(*((u32*)(r6 + (0x65 << 2))));
    // add r4, #0x1c
    SpriteManager_UnloadCharObjById(*((u32*)(r6 + (0x8a << 2))), (0xfa << 2));
    SpriteManager_UnloadPlttObjById(*((u32*)(r6 + (0x8a << 2))), (0xfa << 2));
    SpriteManager_UnloadCellObjById(*((u32*)(r6 + (0x8a << 2))), (0xfa << 2));
    SpriteManager_UnloadAnimObjById(*((u32*)(r6 + (0x8a << 2))), (0xfa << 2));
    SpriteManager_UnloadCharObjById(*((u32*)(r6 + (0x8a << 2))), 0x000003E9);
    SpriteManager_UnloadPlttObjById(*((u32*)(r6 + (0x8a << 2))), 0x000003E9);
    SpriteManager_UnloadCellObjById(*((u32*)(r6 + (0x8a << 2))), 0x000003E9);
    SpriteManager_UnloadAnimObjById(*((u32*)(r6 + (0x8a << 2))), 0x000003E9);
}





void ov40_02243C54(void) {
    // str r0, [sp]
    // str r0, [sp, #0xc]
    // ldr r1, [sp]
    // ldr r7, [sp, #0xc]
    // str r1, [sp, #8]
    // ldr r1, [sp]
    // add r2, sp, #0x10
    // str r1, [sp, #4]
    // sub r1, #0xf4
    // strh r1, [r2]
    // ldr r1, [sp, #0xc]
    // sub r0, #0x20
    // str r1, [sp, #0x18]
    // ldr r1, [sp, #0xc]
    // str r1, [sp, #0x3c]
    // str r1, [sp, #0x40]
    // str r1, [sp, #0x1c]
    // str r1, [sp, #0x24]
    // str r1, [sp, #0x28]
    // str r1, [sp, #0x2c]
    // str r1, [sp, #0x30]
    // str r1, [sp, #0x34]
    // str r1, [sp, #0x38]
    // ldr r1, [sp]
    // str r2, [sp, #0x20]
    // ldr r0, [sp, #0xc]
    // add r0, r0, r1
    // add r2, sp, #0x10
    // ldr r0, [sp, #8]
    // ldr r1, [sp, #4]
    // str r0, [r4, r1]
    // asr r1, r1, #0x10
    // ldr r0, [sp, #0xc]
    // add r4, #0x1c
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #8]
    // ldr r1, [sp, #4]
    // asr r1, r1, #0x10
    // add r5, #0x1c
    // ldr r1, [sp]
    // add r6, #8
}





void ov40_02243D64(void) {
    // add r0, sp, #0
    // strh r2, [r0]
    *((u16*)(((0x89 << 2) + 4) + 2)) = 0;
    *((u16*)(((0x89 << 2) + 4) + 4)) = 0;
    *((u16*)(((0x89 << 2) + 4) + 6)) = 0;
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x1c]
    // str r0, [sp, #0x20]
    // str r1, [sp, #0x10]
    // str r2, [sp, #8]
    // str r2, [sp, #0x2c]
    // str r2, [sp, #0x30]
    // str r2, [sp, #0xc]
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x28]
    // add r2, sp, #0
    SpriteSystem_NewSprite(*((u32*)(r0 + (0x89 << 2))), *((u32*)(r0 + ((0x89 << 2) + 4))), 0);
    // str r0, [r5, r1]
    // add r2, sp, #0
    SpriteSystem_NewSprite(r6, r4);
    // str r0, [r5, r1]
    // add r2, sp, #0
    SpriteSystem_NewSprite(r6, r4);
    // str r0, [r5, r1]
    ov40_02243EB0(r5, 0);
    ManagedSprite_SetAnim(*((u32*)(r5 + (0x65 << 2))), 0);
    ManagedSprite_TickFrame(*((u32*)(r5 + (0x65 << 2))));
    // strh r1, [r5, r2]
    // strh r1, [r5, r0]
    // sub r2, #0x14
    // str r0, [r5, r2]
    ov40_02243EEC(r5, 0, (0x6e << 2));
    // sub r1, #0xc
    ManagedSprite_SetAnim(*((u32*)(r5 + (0x1b << 4))), *((u32*)(r5 + (0x1b << 4))));
    ManagedSprite_TickFrame(*((u32*)(r5 + (0x1b << 4))));
    ManagedSprite_SetOamMode(*((u32*)(r5 + (0x1b << 4))), 1);
    // strh r1, [r5, r2]
    // strh r1, [r5, r0]
    // sub r2, #0x14
    // str r0, [r5, r2]
    ov40_02243EEC(r5, 0, (0x75 << 2));
    // sub r1, #0xc
    ManagedSprite_SetAnim(*((u32*)(r5 + (0x73 << 2))), *((u32*)(r5 + (0x73 << 2))));
    ManagedSprite_TickFrame(*((u32*)(r5 + (0x73 << 2))));
    ManagedSprite_SetOamMode(*((u32*)(r5 + (0x73 << 2))), 1);
    ov40_02243E80(r5, 1, 0);
    ov40_02243E80(r5, 2, 0);
}





void ov40_02243E80(void) {
    // add r1, r0, r2
    // add r1, r0, r2
}





void ov40_02243EB0(void) {
    // add r0, r4, r0
    // str r1, [r4, r2]
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    // add r3, sp, #0
    // ldrsh r2, [r3, r2]
    // ldrsh r1, [r3, r1]
    // add r2, #0x10
    // asr r2, r2, #0x10
}





void ov40_02243EEC(void) {
    // add r1, #0xc
    // add r3, r3, r1
    // add r1, #0x8a
    // add r1, #0x8b
    // add r4, r4, r1
    // add r1, r4, r1
    // add r4, #0x88
    // add r2, #0x89
    // asr r1, r1, #0x10
    // asr r1, r1, #0x10
    // add r3, r4, r2
    // add r2, r3, r2
    // asr r2, r2, #0x10
    // sub r2, #8
    // asr r2, r2, #0x10
}





void ov40_02243F38(void) {
    // add r1, #0xc
    // add r0, r3, r0
    // add r3, r3, r1
    // add r1, #0xa6
    // add r1, #0xa7
    // add r4, r4, r1
    // add r1, r4, r1
    // add r4, #0xa4
    // add r2, #0xa5
    // asr r1, r1, #0x10
    // asr r1, r1, #0x10
    // add r3, r4, r2
    // add r2, r3, r2
    // asr r2, r2, #0x10
    // sub r2, #8
    // asr r2, r2, #0x10
}





void ov40_02243F88(void) {
    // add r4, #0x1c
    // add r4, #0x1c
}





void ov40_02244054(void) {
    // add r0, r2, r0
}





void ov40_02244060(void) {
    // add r4, #0x1c
}





void ov40_022440A0(void) {
    // str r1, [sp, #4]
    // str r0, [sp]
    // ldr r0, [sp]
    // str r4, [sp, #8]
    // add r2, r0, r2
    // sub r0, #0x2c
    // ldrsh r5, [r2, r0]
    // ldr r0, [sp]
    // ldr r7, [sp]
    // ldr r1, [sp]
    // add r5, #0x14
    // asr r5, r0, #0x10
    // add r5, #0x20
    // asr r5, r0, #0x10
    // add r5, #0x14
    // asr r5, r0, #0x10
    // add r5, #8
    // asr r5, r0, #0x10
    // add r1, sp, #0xc
    // add r1, #2
    // add r2, sp, #0xc
    // ldr r0, [sp, #4]
    // add r3, sp, #0xc
    // ldrsh r2, [r3, r2]
    // add r1, sp, #0xc
    // ldrsh r0, [r1, r0]
    // sub r1, r5, r0
    // add r0, r1, r0
    // asr r0, r0, #1
    // ldr r0, [sp, #8]
    // add r1, sp, #0xc
    // add r1, #2
    // add r2, sp, #0xc
    // ldr r1, [sp]
    // add r5, #8
    // asr r5, r0, #0x10
    // add r5, #0x14
    // asr r5, r0, #0x10
    // add r5, #8
    // asr r5, r0, #0x10
    // ldr r0, [sp, #4]
    // add r3, sp, #0xc
    // ldrsh r2, [r3, r2]
    // add r1, sp, #0xc
    // ldrsh r0, [r1, r0]
    // sub r1, r5, r0
    // add r0, r1, r0
    // asr r1, r0, #1
    // strh r1, [r6, r0]
    // strh r1, [r6, r0]
    // strb r1, [r6, r0]
    // ldr r0, [sp, #8]
    // add r6, #0x1c
    // str r0, [sp, #8]
    // ldr r1, [sp]
    // add r7, #0x1c
}





void ov40_022441F8(void) {
    // str r0, [sp]
    // str r0, [sp]
    // add r2, sp, #4
    // add r1, sp, #4
    // add r2, #2
    // add r1, sp, #4
    // ldrsh r0, [r1, r0]
    // sub r1, r0, r7
    // strb r1, [r0]
    // add r1, sp, #4
    // ldrsh r1, [r1, r0]
    // ldr r0, [sp]
    // sub r1, r1, r0
    // add r1, sp, #4
    // ldrsh r0, [r1, r0]
    // add r1, r0, r7
    // add r1, sp, #4
    // ldrsh r1, [r1, r0]
    // ldr r0, [sp]
    // add r1, r1, r0
    // add r5, #0x1c
}





void ov40_0224428C(void) {
    ov40_0222C6C8(2, r1);
    // add r0, r4, r5
    InitWindow();
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, r4, r5
    AddWindowParameterized(*((u32*)(r4 + 0x24)), 2, 1);
}





void ov40_022442CC(void) {
    // add r0, r4, r0
    ClearWindowTilemapAndCopyToVram(0x000008A4);
    // add r0, r4, r0
    RemoveWindow(0x000008A4);
    GfGfx_EngineATogglePlanes(4, 0);
}





void ov40_022442F0(void) {
    // str r1, [sp, #0x10]
    // add r1, r5, r0
    // sub r0, #0x18
    ov40_0222DAB0(0x6d, 0x0000011A);
    String_New(0xff, 0x6d);
    sub_020315B8(r7, 0x6d);
    // str r0, [sp, #0x14]
    // ldr r1, [sp, #0x14]
    ov40_02230DCC(r5);
    // ldr r1, [sp, #0x10]
    NewString_ReadMsgData(*((u32*)(r5 + 0x48)));
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x14]
    BufferString(r6, 0, 0);
    StringExpandPlaceholders(r6, r4, r7);
    // ldr r0, [sp, #0x14]
    String_Delete();
    String_Delete(r7);
    MessageFormat_Delete(r6);
    NewString_ReadMsgData(*((u32*)(r5 + 0x48)));
    // add r0, r5, r0
    FillWindowPixelBuffer(0x000008A4, 0xcc);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r5, r0
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(0x000008A4, 0, r4, 0);
    // add r0, r5, r0
    ScheduleWindowCopyToVram(0x000008A4);
    String_Delete(r4);
}





void ov40_022443B4(void) {
    // add r6, #0x10
    InitWindow(*((u32*)(r0 + (0x86 << 4))));
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    AddWindowParameterized(*((u32*)(r5 + 0x24)), r6, 6, 4);
    FillWindowPixelBuffer(r6, 0);
    NewString_ReadMsgData(*((u32*)(r5 + 0x48)), 0x82);
    ov40_022306C0(r6, r0);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r6, 0, r7, r0);
    String_Delete(r7);
    ScheduleWindowCopyToVram(r6);
    // add r4, #0x20
    InitWindow(r4);
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    AddWindowParameterized(*((u32*)(r5 + 0x24)), r4, 6, 0x12);
    FillWindowPixelBuffer(r4, 0);
    NewString_ReadMsgData(*((u32*)(r5 + 0x48)), 0x83);
    ov40_022306C0(r4, r0);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r4, 0, r5, r0);
    String_Delete(r5);
    ScheduleWindowCopyToVram(r4);
}





void ov40_02244494(void) {
    // add r0, #0x10
    // add r0, #0x10
    // add r0, #0x20
    // add r4, #0x20
}





void ov40_022444C0(void) {
    // str r4, [r5, r0]
}





void ov40_02244514(void) {
    // add r0, #8
    // str r0, [sp]
    // str r0, [sp]
    // str r0, [sp]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
}





void ov40_0224462C(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0224464C: ; jump table
    ov40_022443B4((*((u16*)(*((u32*)(r0 + 8)) + 6)) << 0x10));
    ov40_0224428C(r4, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnDataFromOpenNarc(*((u32*)(r4 + 0x14)), 0x54, *((u32*)(r4 + 0x24)), 7);
    GfGfx_EngineATogglePlanes(8, 1);
    GfGfx_EngineBTogglePlanes(8, 1);
    GfGfx_EngineATogglePlanes(4, 0);
    GfGfx_EngineBTogglePlanes(4, 0);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // add r0, #8
    ov40_0222DA84(r5, 0);
    ov40_0222DA00(r5, (r5 + 4), 0, 2);
    ov40_022442F0(r4, 0x0000011A, *((u32*)(r4 + 0x0000086C)));
    GfGfx_EngineATogglePlanes(4, 1);
    GfGfx_EngineBTogglePlanes(4, 1);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 3, 0xc, ((*((u32*)(r5 + 8)) << 0x18) >> 0x18));
    TouchscreenHitbox_TouchNewIsIn(ov40_02245CA0);
    ov40_02230944(r4);
    ov40_022442F0(r4, 0x0000011B, 0);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    TouchscreenHitbox_TouchNewIsIn(ov40_02245CA4);
    ov40_02230944(r4);
    *((u32*)(r5 + 0xc)) = 1;
    ov40_022442CC(r4);
    *((u32*)(r4 + 8)) = 4;
    TouchscreenHitbox_TouchNewIsIn(ov40_02245CA0);
    ov40_02230944(r4);
    ov40_022306E0(r4);
    *((u32*)(r5 + 0xc)) = 0;
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    TouchscreenHitbox_TouchNewIsIn(ov40_02245CA4);
    ov40_02230944(r4);
    ov40_022442CC(r4);
    *((u32*)(r5 + 0xc)) = 1;
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    ov40_02244494((*((u32*)(r4 + 8)) + 1));
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // add r0, #8
    ov40_0222DA84(r5, 1);
    ov40_0222DA00(r5, (r5 + 4), 1, 0);
    ov40_0222BF80(r4, 3);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 3, 0xc, ((*((u32*)(r5 + 8)) << 0x18) >> 0x18));
    ov40_022306F0();
    ov40_0222FDC4(r4);
    ov40_0222FCCC(r4);
    ov40_022442F0(r4, 0x0000011D, 0);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    ov40_0222BF80(r4, 3);
    System_GetTouchNew();
    ov40_022442CC(r4);
    ov40_0222BF80(r4, 3);
}





void ov40_0224483C(void) {
    // add r0, #8
    // add r0, #8
    // str r0, [sp]
    // str r0, [sp]
    // str r0, [sp]
}





void ov40_02244920(void) {
    // add r0, #0xaa
    // str r1, [sp]
    // str r2, [sp, #4]
    // add r1, sp, #0x28
    // add r2, sp, #0x24
    // ldr r1, [sp, #4]
    // ldr r1, [sp, #4]
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #4]
    // ldr r1, [sp, #0x28]
    // str r0, [sp, #0x20]
    // ldr r0, [sp]
    // mvn r7, r7
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x10]
    // add r0, #0x3c
    // str r0, [sp, #0x10]
    // str r0, [sp, #0xc]
    // ldr r2, [sp, #0x14]
    // add r2, #0xe
    // mvn r0, r0
    // ldr r0, [sp, #0x1c]
    // ldr r1, [sp, #4]
    // ldr r0, [sp, #0x1c]
    // ldr r1, [sp, #0x10]
    // ldr r1, [sp, #0xc]
    // ldr r2, [sp, #0x1c]
    // ldr r0, [sp, #0x1c]
    // ldr r1, [sp, #4]
    // ldr r0, [sp, #0x1c]
    // ldr r1, [sp, #0x10]
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp, #0x28]
    // add r0, #0x34
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x10]
    // add r0, #0x34
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0xc]
    // add r0, #0x34
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x20]
    // str r0, [sp, #0x20]
    // str r0, [sp, #8]
    // ldr r0, [sp]
    // str r0, [sp, #0x18]
    // ldr r0, [sp]
    // ldr r2, [sp, #0x1c]
    // ldr r0, [sp, #0x18]
    // ldr r0, [sp]
    // ldr r1, [sp, #0x28]
    // str r0, [sp]
    // ldr r0, [sp, #8]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x1c]
}





void ov40_02244A84(void) {
}





void ov40_02244AB0(void) {
    GF_AssertFail(*((u32*)_021D2AF8), *((u16*)r3));
    // add r0, #0xab
    // strb r5, [r0]
    // add r0, #0xcc
    // strh r2, [r0]
    // add r1, #0x84
    SaveArray_CalcCRC16(r7, *((u32*)_021D2AF8), 0x58);
    // add r1, #0xe4
    // strh r0, [r1]
    // add r0, #0xe8
    // sub r1, #0xe8
    // eor r2, r3
    // add r2, r3, r2
    sub_02030250(*((u32*)_021D2AF8), 0x00001D4C, (0x0000FFFF << 0x10), *((u16*)(*((u32*)_021D2AF8) + 0x00001D4C)));
    // strh r0, [r4]
    // ldr r3, [sp, #0x18]
    sub_0202FDA4((*((u16*)r4) + 1), *((u32*)_021D2AF8), r6);
}





void ov40_02244B3C(void) {
    GF_AssertFail(*((u32*)_021D2AF8));
    // add r0, #0xe8
    // sub r1, #0xe8
    // eor r2, r3
    // add r2, r3, r2
    sub_02030250(*((u32*)_021D2AF8), 0x00001D4C, (0x0000FFFF << 0x10), *((u16*)(*((u32*)_021D2AF8) + 0x00001D4C)));
}





void ov40_02244B70(void) {
    GF_AssertFail(*((u32*)_021D2AF8), *((u16*)r3));
    // add r0, #0xdc
    // str r5, [r0]
    // add r1, #0xe0
    // str r6, [r1]
    // strh r0, [r4]
    // ldr r3, [sp, #0x10]
    sub_0202FDA4((*((u16*)r4) + 1), *((u32*)_021D2AF8), 0);
}





void ov40_02244BBC(void) {
    GF_AssertFail(*((u32*)_021D2AF8));
    // add r0, #0xab
    // strb r2, [r0]
    // add r0, #0xcc
    // strh r2, [r0]
    // add r1, #0x84
    SaveArray_CalcCRC16(r5, *((u32*)_021D2AF8), 0x58);
    // add r2, #0xe4
    // strh r0, [r2]
    // add r0, #0xe8
    // sub r1, #0xe8
    // eor r3, r2
    // add r2, r2, r3
    sub_02030250(*((u32*)_021D2AF8), 0x00001D4C, *((u16*)(*((u32*)_021D2AF8) + 0x00001D4C)), (0x0000FFFF << 0x10));
    sub_0201A728(8);
    sub_02027134(r5, *((u32*)_021D2AF8), r4);
    SaveGameNormal(r5);
    sub_0201A738(8);
}




