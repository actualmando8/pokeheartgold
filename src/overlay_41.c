/* Decompiled from asm/overlay_41.s */
#include "global.h"

void ov41_02245EA0(void) {
    // str r0, [r4]
}





void ov41_02245ECC(void) {
}





void ov41_02245EE0(void) {
    // str r0, [r4]
}





void ov41_02245F04(void) {
}





void ov41_02245F14(void) {
    // str r2, [sp]
    ov41_02245F04();
    // add r1, sp, #8
    // add r2, sp, #4
    ov41_02245FA8(r4);
    // ldr r1, [sp, #8]
    // sub r1, r2, r1
    // str r1, [r6]
    // ldr r0, [sp, #4]
    // sub r1, r1, r0
    // ldr r0, [sp]
    // str r1, [r0]
    ov41_022464BC(r7, (*((u32*)r6) - 4), (*((u16*)(gSystem + 0x22)) - 4), 0);
    // ldr r0, [sp]
}





void ov41_02245F9C(void) {
}





void ov41_02245FA8(void) {
    // add r1, sp, #0
    // strh r0, [r1]
    // ldrsh r0, [r1, r0]
    // str r0, [r5]
    // ldrsh r0, [r1, r0]
    // str r0, [r4]
}





void ov41_02245FD8(void) {
    // add r1, sp, #0
    // strh r0, [r1]
    // ldrsh r0, [r1, r0]
    // str r0, [r5]
    // ldrsh r0, [r1, r0]
    // str r0, [r4]
}





void ov41_02246008(void) {
}





void ov41_02246014(void) {
}





void ov41_02246020(void) {
    // add r1, sp, #4
    // add r2, sp, #0
    // ldr r0, [sp, #4]
    // str r0, [r5]
    // str r0, [r5]
    // str r0, [r5]
    // ldr r0, [sp]
    // str r0, [r4]
    // str r0, [r4]
    // str r0, [r4]
}





void ov41_0224607C(void) {
    // add r0, r3, r0
    // add r2, #8
}





void ov41_022460A8(void) {
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // add r1, sp, #0
    // str r2, [sp, #0x14]
    // str r3, [sp, #0x18]
    // add r0, sp, #0
}





void ov41_022460DC(void) {
    // add r1, sp, #0
    // add r1, sp, #0
    // strh r0, [r1]
    // ldrsh r2, [r1, r0]
    // strb r2, [r4]
    // ldrsh r0, [r1, r0]
    // add r0, r2, r0
    // ldrsh r2, [r1, r0]
    // ldrsh r0, [r1, r0]
    // add r0, r2, r0
}





void ov41_02246130(void) {
    ov41_022466D0();
    ov41_022466F0();
    ov41_02246778();
    *((u8*)(gSystem + 9)) = 1;
    GfGfx_SwapDisplay(gSystem, 1);
}





void ov41_02246150(void) {
    *((u8*)(gSystem + 9)) = 0;
    GfGfx_SwapDisplay(gSystem, 0);
    ov41_022467D4();
    ov41_022467C8();
    GX_ResetBankForTex();
}





void ov41_02246170(void) {
    // add r2, sp, #0
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    NARC_New(0x1a, 0xe, ov41_0224BFB4);
    // str r0, [r4, r1]
    // add r1, sp, #0
    ov41_022467E4(r4, (6 << 6));
    ov41_02246CC0(r4, 0xe, (0xa << 0xa), 0x20);
    ov41_02246A50(r4);
    ov41_02246C90(r4, 0xd);
    ov41_02246A94(r4);
    BgConfig_Alloc(0xe);
    *((u32*)(r4 + 0x40)) = r0;
    ov41_022468FC(r4);
}





void ov41_022461D0(void) {
    // ldr r0, [r4, r0]
}





void ov41_0224621C(void) {
}





void ov41_02246250(void) {
}





void ov41_0224626C(void) {
}





void ov41_02246280(void) {
    // str r1, [sp]
    // mvn r0, r0
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r2, [sp, #0x14]
    // str r2, [sp, #0x18]
    // str r2, [sp, #0x1c]
    // str r2, [sp, #0x20]
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x28]
    // add r0, sp, #0x4c
    // str r0, [sp, #0x2c]
    // add r0, sp, #0x4c
    // str r0, [sp, #0x30]
    // str r0, [sp, #0x34]
    // str r0, [sp, #0x38]
    // str r0, [sp, #0x3c]
    // ldr r0, [sp, #0x80]
    // str r0, [sp, #0x40]
    // ldr r0, [sp, #0x84]
    // str r0, [sp, #0x44]
    // str r0, [sp, #0x48]
    // add r0, sp, #0x2c
}





void ov41_022462E4(void) {
    // ldr r4, [sp, #0x1c]
    // str r4, [sp]
    // ldr r4, [sp, #0x18]
    // str r4, [sp, #4]
    // str r4, [sp, #8]
}





void ov41_02246304(void) {
    // ldr r4, [sp, #0x20]
    // str r4, [sp]
    // ldr r4, [sp, #0x18]
    // str r4, [sp, #4]
    // ldr r4, [sp, #0x1c]
    // str r4, [sp, #8]
    // str r4, [sp, #0xc]
}





void ov41_02246328(void) {
}





void ov41_02246344(void) {
}





void ov41_02246360(void) {
}





void ov41_02246374(void) {
}





void ov41_02246388(void) {
}





void ov41_0224639C(void) {
}





void ov41_022463B0(void) {
}





void ov41_022463D4(void) {
}





void ov41_022463DC(void) {
    // add r1, r1, r5
}





void ov41_022463FC(void) {
    // and r1, r2
    // str r1, [r0]
    // add r3, #8
    // add r0, #0xa
    // strh r1, [r3]
    // strh r1, [r0]
}





void ov41_0224642C(void) {
    // and r2, r1
    // str r1, [r0]
    // add r3, #0x48
    // strh r1, [r3]
    // add r3, #0x4a
    // strh r1, [r3]
    // add r1, #0x40
    // strh r2, [r1]
    // add r1, #0x44
    // strh r2, [r1]
    // add r2, #8
    // add r0, #0xa
    // strh r3, [r2]
    // strh r1, [r0]
}





void ov41_02246494(void) {
}





void ov41_022464AC(void) {
}





void ov41_022464BC(void) {
    // add r4, r1, r4
    // sub r2, r2, r5
    // ror r2, r1
    // add r1, r5, r2
    // asr r0, r4, #2
    // add r0, r4, r0
    // asr r0, r0, #3
    // lsl r0, r2
    // lsl r1, r2
    // and r0, r3
}





void ov41_02246518(void) {
}





void ov41_02246544(void) {
    *((u32*)(r0 + 0x40)) = r1;
    // ldmia r3!, {r0, r1}
    // add r2, sp, #0
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    FreeBgTilemapBuffer(*((u32*)(r0 + 0x40)), 2, ov41_0224C018);
    // add r2, sp, #0
    InitBgFromTemplate(*((u32*)(r5 + 0x40)), 2, 0);
    BG_ClearCharDataRange(2, 0x20, 0, r4);
    BgClearTilemapBufferAndCommit(*((u32*)(r5 + 0x40)), 2);
}





void ov41_02246594(void) {
}





void ov41_022465C0(void) {
}





void ov41_022465CC(void) {
}





void ov41_022465D8(void) {
    // str r3, [sp]
    // str r1, [r0]
    // sub r0, #0x10
    // ldr r7, [sp, #0x18]
    // str r1, [r0]
    NNS_G2dSetupSoftwareSpriteCamera(0x04000454, 0);
    // str r0, [r1]
    // str r0, [r1]
    // str r0, [r1]
    // ldr r0, [sp]
    // asr r0, r0, #4
    // ldrsh r0, [r1, r0]
    // ldrsh r1, [r1, r2]
    G3_RotZ(((0 << 1) << 1), FX_SinCosTable_, (((0 << 1) + 1) << 1));
    // str r3, [r0]
    // str r1, [r0]
    // neg r1, r4
    // str r2, [r0]
    *((u32*)(0x0400046C + 4)) = (*((u32*)(r7 + 4)) << 0xc);
    // neg r1, r6
    *((u32*)(0x0400046C + 4)) = ((*((u32*)(r7 + 4)) << 0xc) << 0xc);
    *((u32*)(0x0400046C + 4)) = 0;
    // sub r0, #0x28
    // str r1, [r0]
    ov41_02246830(r5, 0, *((u32*)(r7 + 8)), *((u32*)r7));
    PokepicManager_DrawAll(*((u32*)(r5 + 0x20)));
    // str r1, [r0]
    // str r1, [r0]
}





void ov41_02246670(void) {
    // str r0, [r4, r1]
}





void ov41_02246698(void) {
    // ldr r0, [r4, r0]
}





void ov41_022466B8(void) {
}





void ov41_022466C8(void) {
}





void ov41_022466D0(void) {
}





void ov41_022466F0(void) {
    NNS_G3dInit();
    G3X_InitMtxStack();
    GfGfx_EngineATogglePlanes(1, 1);
    // strh r1, [r0]
    // add r0, #0x58
    // and r1, r2
    // strh r1, [r0]
    // and r3, r1
    // strh r1, [r0]
    // and r1, r3
    // strh r1, [r0]
    // and r3, r1
    // strh r1, [r0]
    // str r0, [sp]
    G3X_SetClearColor(0, 0, (0xFFFFCFFD >> 0x11), 0x3f);
    // str r0, [r2]
    *((u32*)(0x04000540 + 0x40)) = 0xBFFF0000;
    GF_3DVramMan_InitFrameTexVramManager(2, 1, 0x04000540);
    GF_3DVramMan_InitFramePlttVramManager((1 << 0xe), 1);
}





void ov41_02246778(void) {
    // add r3, sp, #0
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    SetBothScreensModesAndDisable(r3, r3);
    // and r1, r0
    // str r0, [r2]
    NNS_G2dInitOamManagerModule((0x10 | *((u32*)(1 << 0x1a))), *((u32*)(1 << 0x1a)), (1 << 0x1a));
    GfGfx_DisableEngineAPlanes();
    GfGfx_DisableEngineBPlanes();
    GfGfx_EngineATogglePlanes(0x1f, 1);
    GfGfx_EngineBTogglePlanes(0x13, 1);
}





void ov41_022467C8(void) {
}





void ov41_022467D4(void) {
}





void ov41_022467E4(void) {
    // str r0, [r5]
}





void ov41_02246820(void) {
}





void ov41_02246830(void) {
}





void ov41_0224683C(void) {
    // str r0, [sp, #4]
    // str r2, [sp]
    // add r7, #0xc
    // str r0, [r1, r2]
    // str r1, [r0, r2]
    // add r4, #8
    // str r0, [r7]
    // ldr r0, [sp, #4]
    // add r6, #8
    // ldr r0, [sp]
    // str r1, [sp, #4]
}





void ov41_0224689C(void) {
    // str r0, [sp, #4]
    // str r2, [sp]
    // add r7, #0x18
    // str r0, [r1, r2]
    // str r1, [r0, r2]
    // add r4, #0xc
    // str r0, [r7]
    // ldr r0, [sp, #4]
    // add r6, #0xc
    // ldr r0, [sp]
    // str r1, [sp, #4]
}





void ov41_022468FC(void) {
    // ldmia r5!, {r0, r1}
    // add r3, sp, #0x70
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(*((u32*)(r0 + 0x40)), 1, r3, 0);
    BG_ClearCharDataRange(1, 0x20, 0, 0xe);
    BgClearTilemapBufferAndCommit(*((u32*)(r4 + 0x40)), 1);
    // add r3, sp, #0x54
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(*((u32*)(r4 + 0x40)), 2, r3, 0);
    BG_ClearCharDataRange(2, 0x20, 0, 0xe);
    BgClearTilemapBufferAndCommit(*((u32*)(r4 + 0x40)), 2);
    // add r3, sp, #0x38
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(*((u32*)(r4 + 0x40)), 3, r3, 0);
    BG_ClearCharDataRange(3, 0x20, 0, 0xe);
    BgClearTilemapBufferAndCommit(*((u32*)(r4 + 0x40)), 3);
    // add r3, sp, #0x1c
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(*((u32*)(r4 + 0x40)), 4, r3, 0);
    BG_ClearCharDataRange(4, 0x20, 0, 0xe);
    BgClearTilemapBufferAndCommit(*((u32*)(r4 + 0x40)), 4);
    // add r3, sp, #0
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(*((u32*)(r4 + 0x40)), 5, r3, 0);
    BG_ClearCharDataRange(5, 0x20, 0, 0xe);
    BgClearTilemapBufferAndCommit(*((u32*)(r4 + 0x40)), 5);
}





void ov41_02246A20(void) {
}





void ov41_02246A50(void) {
}





void ov41_02246A7C(void) {
}





void ov41_02246A94(void) {
    // add r3, sp, #0x14
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    ObjCharTransfer_InitEx(r3, 0x10, 0x10);
    ObjPlttTransfer_Init(5, 0xe);
    ObjCharTransfer_ClearBuffers();
    ObjPlttTransfer_Reset();
    NNS_G2dInitOamManagerModule();
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // str r2, [sp, #0x10]
    OamManager_Create(0, 0x7c, 0, 0x1f);
    // add r1, #0x58
    G2dRenderer_Init(0x30, r4, 0xe);
    *((u32*)(r4 + 0x44)) = r0;
    // add r0, #0x58
    G2dRenderer_SetSubSurfaceCoords(r4, 0, (2 << 0x14));
    Create2DGfxResObjMan(8, 0, 0xe);
    *((u32*)(r4 + 0x48)) = r0;
    Create2DGfxResObjMan(5, 1, 0xe);
    *((u32*)(r4 + 0x4c)) = r0;
    Create2DGfxResObjMan(0x30, 2, 0xe);
    *((u32*)(r4 + 0x50)) = r0;
    Create2DGfxResObjMan(0x30, 3, 0xe);
    *((u32*)(r4 + 0x54)) = r0;
}





void ov41_02246B34(void) {
}





void ov41_02246B5C(void) {
}





void ov41_02246B68(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r1, [sp, #4]
    // add r1, r1, r5
    // str r1, [r0, r5]
    // add r5, #8
    // str r0, [sp]
    // str r1, [r0]
}





void ov41_02246BEC(void) {
    // str r0, [sp, #8]
    // str r0, [sp]
    // add r1, #0xce
    // add r2, #0x64
    // add r1, r1, r7
    // str r1, [r0, r7]
    // str r0, [sp, #4]
    // str r0, [sp]
    // ldr r1, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r1, [sp, #0xc]
    // ldr r2, [sp, #4]
    // ldr r1, [sp, #4]
    // ldr r0, [sp, #0xc]
    // add r1, r1, r7
    // add r0, r0, r7
    // str r1, [r0, r7]
    // add r1, r0, r7
    // ldr r0, [sp, #8]
    // str r0, [sp, #8]
}





void ov41_02246C90(void) {
}





void ov41_02246CB0(void) {
}





void ov41_02246CC0(void) {
    PokepicManager_Create(r1);
    *((u32*)(r5 + 0x20)) = r0;
    // blx r3
    *((u32*)(r5 + 0x24)) = r4;
    // blx r3
    *((u32*)(r5 + 0x28)) = r6;
    // and r2, r3
    PokepicManager_SetCharBaseAddrAndSize(*((u32*)(r5 + 0x20)), ((*((u32*)(r5 + 0x24)) << 0x10) >> 0xd), ((0x7FFF0000 >> 0x10) << 4), *((u32*)(r5 + 0x24)));
    // and r2, r3
    PokepicManager_SetPlttBaseAddrAndSize(*((u32*)(r5 + 0x20)), ((*((u32*)(r5 + 0x28)) << 0x10) >> 0xd), ((0xFFFF0000 >> 0x10) << 3), *((u32*)(r5 + 0x28)));
    *((u32*)(r5 + 0x2c)) = 1;
}





void ov41_02246D2C(void) {
    PokepicManager_Delete(*((u32*)(r0 + 0x20)));
    // blx r1
    // blx r1
    *((u32*)(r4 + 0x2c)) = 0;
}





void ov41_02246D54(void) {
    // str r0, [sp]
    // ldr r1, [sp]
    // ldr r2, [sp]
    // str r0, [r5]
}





void ov41_02246DA8(void) {
    // str r0, [r4]
}





BOOL ov41_02246DE0(void) {
    Heap_Create(3, 0xd, (2 << 0x10));
    Heap_Create(3, 0xe, (1 << 0x12));
    OverlayManager_CreateAndGetData(r5, (0x6f << 4), 0xd);
    memset(0, (0x6f << 4));
    Main_SetVBlankIntrCB(ov41_02247478, r4);
    HBlankInterruptDisable();
    OverlayManager_GetArgs(r5);
    // str r0, [r4, r1]
    MenuInputStateMgr_GetState(*((u32*)(r0 + 0x20)), 0x000006DC);
    // add r1, #0x10
    // str r0, [r4, r1]
    sub_020210BC(0, 0x000006EC);
    sub_02021148(4);
    // add r1, r4, r1
    ov41_02248E84(*((u32*)(r5 + 8)), (0x61 << 2));
    ov41_02247240(r4);
    // add r0, r4, r1
    // sub r1, #0x8d
    ov41_022499B4((0xd7 << 2), 0xd);
    ov41_02245EA0((0xaf << 2), 0xd);
    // str r0, [r4, r1]
    ov41_02247288(r4, *((u32*)r5), 0xa, 0);
    ov41_02247334(r4);
    ov41_02247480(r4, 0);
    ov41_022474D4(r4);
    ov41_0224765C(r4, *((u32*)(r5 + 0xc)));
    // add r1, r4, r0
    // str r1, [sp]
    // sub r0, #0xd0
    // str r1, [sp, #4]
    // add r1, r4, r2
    // sub r2, #0x8c
    // add r0, r4, r0
    // add r2, r4, r2
    ov41_02248F18(0x00000568, 1, (0xfd << 2), r4);
    YesNoPrompt_Create(0xd);
    // str r0, [r4, r1]
    AllocWindows(0xd, 1);
    // str r0, [r4, r2]
    // sub r2, #0xc
    // str r1, [r4, r2]
    Sound_SetSceneAndPlayBGM(0x35, 0, 0);
}





BOOL ov41_02246F08(void) {
    OverlayManager_GetData();
    OverlayManager_GetArgs(r7);
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _02246F30: ; jump table
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    BeginNormalPaletteFade(1, 5, 5, r6);
    // str r0, [r5]
    IsPaletteFadeFinished(2);
    // str r0, [r5]
    TextFlags_SetCanTouchSpeedUpPrint(1);
    // add r0, r4, r0
    ov41_0224AC40(0x00000568, 0x1b, 0xd7, 0x2f);
    // str r0, [r4, r1]
    // str r0, [r5]
    // str r0, [r5]
    TextPrinterCheckActive(((*((u32*)(r4 + (0x6e << 4))) << 0x18) >> 0x18), (0x6e << 4));
    // add r0, r4, r0
    ov41_0224AC80(0x00000568);
    // str r0, [r5]
    // and r1, r0
    // add r0, r4, r0
    ov41_0224AC08(0x00000568, 0x1b, 0xd7, 0x30);
    TextFlags_SetCanTouchSpeedUpPrint(r6);
    // str r0, [r5]
    // add r1, r4, r1
    ov41_022476B8(r4, ((0x6b << 4) + 4));
    // str r0, [r5]
    // add r0, r4, r0
    ov41_02248E44(0x00000498);
    ov41_02247D44(r4);
    // add r0, r4, r0
    ov41_0224ABF0(0x00000568);
    ov41_02247578(r4);
    // str r1, [r4, r0]
    // str r1, [r5]
    // str r1, [r4, r0]
    // add r0, r4, r1
    // sub r1, #0x88
    // add r1, r4, r1
    ov41_0224B4E8((0x000006B4 - 4), 0x0000047C, 0xe);
    // add r1, r4, r1
    ov41_02247828(r4, ((0x6b << 4) + 4));
    // str r0, [r5]
    // str r0, [r5]
    // str r0, [r4, r1]
    ov41_02247D64(r4);
    ov41_02247B7C(r4);
    // str r0, [r4, r1]
    // add r0, r4, r0
    ov41_0224B50C(0x0000047C, (0x6b << 4));
    // add r0, #0x10
    // str r1, [r4, r0]
    // str r0, [r5]
    // add r0, #0x10
    // str r1, [r4, r0]
    // str r0, [r5]
    ov41_02247DF8(r4, r6);
    // str r0, [r4, r1]
    // add r0, r4, r0
    ov41_0224B50C(0x0000047C, (0x6b << 4));
    // str r2, [r4, r0]
    // str r1, [r5]
    // str r2, [r4, r0]
    // add r0, r4, r0
    ov41_0224B518(0x0000047C, 6, r6);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    BeginNormalPaletteFade(1, r6, r6, r6);
    // str r0, [r5]
    IsPaletteFadeFinished((*((u32*)r5) + 1));
    // str r0, [r5]
    // str r1, [r4, r0]
    // add r0, r4, r0
    ov41_0224B518(0x0000047C, 0xa);
    ov41_0224726C(r4);
}





BOOL ov41_02247150(void) {
    OverlayManager_GetData();
    OverlayManager_GetArgs(r6);
    GameStats_AddScore(*((u32*)(r0 + 0x10)), 8);
    // add r1, r4, r1
    ov41_022479A8(*((u32*)(r5 + 4)), (0xfd << 2), *((u32*)(r5 + 0x14)));
    // str r1, [r0]
    // str r1, [r0]
    MenuInputStateMgr_SetState(*((u32*)(r5 + 0x20)), *((u32*)(r4 + 0x000006EC)));
    YesNoPrompt_Destroy(*((u32*)(r4 + 0x000006B8)));
    WindowArray_Delete(*((u32*)(r4 + 0x000006BC)), 1);
    ov41_022476A8(r4);
    // add r0, r4, r0
    ov41_02248F6C(0x00000498);
    ov41_02247568(r4);
    ov41_022474C4(r4);
    ov41_02247310(r4);
    ov41_022473F0(r4);
    ov41_02245ECC(*((u32*)(r4 + (0xd9 << 2))));
    // str r1, [r4, r0]
    // sub r0, #8
    // add r0, r4, r0
    ov41_022499DC((0xd9 << 2), 0);
    ov41_02247274(r4);
    Main_SetVBlankIntrCB(0, 0);
    HBlankInterruptDisable();
    sub_02021238();
    GF_AssertFail();
    OverlayManager_FreeData(r6);
    Heap_Destroy(0xd);
    Heap_Destroy(0xe);
}





void ov41_02247240(void) {
}





void ov41_0224726C(void) {
}





void ov41_02247274(void) {
}





void ov41_02247288(void) {
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x1c]
    // str r0, [sp, #0x20]
    // str r2, [sp, #0x30]
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x28]
    // sub r0, #8
    // add r0, r5, r0
    // add r1, #0x90
    // str r0, [sp, #0x2c]
    // add r0, r5, r1
    // add r1, sp, #0x10
    // add r2, sp, #0
    // add r0, r5, r0
    // add r0, r5, r0
    // add r1, sp, #0
    // add r0, r5, r0
    // add r0, r5, r0
}





void ov41_02247310(void) {
    // add r0, r4, r0
    // add r0, r4, r0
    // add r0, r4, r0
}





void ov41_02247334(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r0, r5, r0
    // str r0, [sp, #0x28]
    // str r1, [sp, #0x14]
    // sub r1, #8
    // add r1, r5, r1
    // str r1, [sp, #0x18]
    // str r1, [sp, #0x1c]
    // str r1, [sp, #0x20]
    // str r1, [sp, #0x24]
    // add r0, r5, r0
    // add r1, sp, #0
    // add r0, r5, r0
    // add r0, r5, r0
    // add r0, r5, r0
    // add r0, r5, r6
    // add r0, r5, r7
    // add r0, r5, r0
}





void ov41_022473F0(void) {
    // add r0, r4, r0
    // add r0, r4, r0
    // add r0, r4, r0
}





void ov41_02247414(void) {
    // strh r1, [r0]
    *((u16*)(0x04000008 + 2)) = (*((u16*)(0x04000008 + 2)) & ~(3));
    *((u16*)(0x04000008 + 4)) = (2 | (*((u16*)(0x04000008 + 4)) & ~(3)));
    *((u16*)(0x04000008 + 6)) = ((*((u16*)(0x04000008 + 6)) & ~(3)) | 3);
    // sub r3, #0x13
    BgSetPosTextAndCommit(*((u32*)(r0 + 0x40)), 3, 3, 3);
    // add r0, r4, r0
    ov41_0224888C((0xda << 2), 0);
    // add r0, r4, r0
    // str r1, [sp]
    ov41_022488D8((0xda << 2), 0, 2, 0);
}





void ov41_02247478(void) {
}





void ov41_02247480(void) {
    // str r2, [sp]
    // str r2, [sp, #4]
    // add r1, #0x79
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    // add r2, #0x7a
    // str r2, [sp, #0x10]
    // str r1, [sp, #0x1c]
    // str r1, [sp, #0x20]
    // str r1, [sp, #0x24]
    // str r1, [sp, #0x2c]
    // str r2, [sp, #0x14]
    // add r0, r0, r1
    // add r1, sp, #0
    // str r2, [sp, #0x18]
    // str r2, [sp, #0x28]
    ov41_02249C7C(0x000004B4, 0);
}





void ov41_022474C4(void) {
    // add r0, r0, r1
}





void ov41_022474D4(void) {
    // add r0, r4, r0
    // add r2, r4, r2
    ov41_0224A27C((0x4e << 4), r0, 0x000006EC);
    // add r0, r4, r0
    // str r1, [sp]
    ov41_0224A5D4((0x4e << 4), 0, ov41_022475B4, r4);
    // str r0, [sp]
    // add r0, r4, r0
    ov41_0224A5D4((0x4e << 4), 1, ov41_022475D4, r4);
    // str r0, [sp]
    // add r0, r4, r0
    ov41_0224A5D4((0x4e << 4), 2, ov41_022475F4, r4);
    // str r0, [sp]
    // add r0, r4, r0
    ov41_0224A5D4((0x4e << 4), 3, ov41_02247628, r4);
    // str r0, [sp]
    // add r0, r4, r0
    ov41_0224A5D4((0x4e << 4), 4, ov41_02247598, r4);
}





void ov41_02247568(void) {
    // add r0, r1, r0
}





void ov41_02247578(void) {
    // add r0, r0, r1
}





void ov41_02247588(void) {
    // add r0, r0, r1
}





void ov41_02247598(void) {
}





void ov41_022475B4(void) {
    // add r0, r4, r0
    // add r0, r4, r0
}





void ov41_022475D4(void) {
    // add r0, r4, r0
    // add r0, r4, r0
}





void ov41_022475F4(void) {
    // add r0, r4, r0
    // add r0, r4, r0
    // str r1, [r4, r0]
}





void ov41_02247628(void) {
    // add r0, r4, r0
    // add r0, r4, r0
    // str r1, [r4, r0]
}





void ov41_0224765C(void) {
    // add r2, sp, #0
    // stmia r5!, {r0, r1}
    // stmia r5!, {r0, r1}
    // stmia r5!, {r0, r1}
    // stmia r5!, {r0, r1}
    // stmia r5!, {r0, r1}
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, #0x48
    // str r0, [sp, #8]
    // str r0, [sp, #0x10]
    // str r3, [sp, #0xc]
    // str r0, [sp, #0x24]
    // add r0, r4, r0
    ov41_0224AA08(0x00000568, r2, 0xf, r1);
}





void ov41_022476A8(void) {
    // add r0, r0, r1
}





void ov41_022476B8(void) {
    CreateSysTaskAndEnvironment(ov41_022476E0, 0x10, 0xa, 0xd);
    SysTask_GetData();
    // str r5, [r0]
    *((u32*)(r0 + 4)) = r4;
    *((u32*)(r0 + 8)) = 0;
    *((u32*)(r0 + 0xc)) = 0;
}





void ov41_022476E0(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _022476FA: ; jump table
    // add r0, r1, r0
    // add r0, r1, r0
    // str r0, [sp]
    // sub r1, #0x18
    // add r0, r1, r0
    // mvn r1, r1
    // str r0, [sp]
    // sub r2, #0x10
    // str r2, [r1]
}





void ov41_02247828(void) {
    CreateSysTaskAndEnvironment(ov41_02247850, 0x10, 0xa, 0xd);
    SysTask_GetData();
    // str r5, [r0]
    *((u32*)(r0 + 4)) = r4;
    *((u32*)(r0 + 8)) = 0;
    *((u32*)(r0 + 0xc)) = 0;
}





void ov41_02247850(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0224786A: ; jump table
    // str r0, [sp]
    // sub r1, #0x18
    // sub r3, #0x2b
    // sub r2, #0xd
    // add r0, r1, r0
    // sub r2, #8
    // str r0, [sp]
    // sub r2, #0x10
    // add r0, r1, r0
    // add r0, r1, r0
    // str r2, [r1]
}





void ov41_022479A8(void) {
    // str r1, [sp]
    // ldr r1, [sp]
    // ldr r2, [sp]
    // add r1, #0x84
    // add r2, #0x78
    // ldr r0, [sp]
    // add r7, #0x14
    // ldr r0, [sp]
    // ldr r1, [sp]
}





void ov41_02247A48(void) {
    // add r0, r3, r0
}





void ov41_02247AB4(void) {
    BgClearTilemapBufferAndCommit(*((u32*)(r0 + 0x40)), 3);
    BgSetPosTextAndCommit(*((u32*)(r4 + 0x40)), 3, 0, 0);
    BgSetPosTextAndCommit(*((u32*)(r4 + 0x40)), 3, 3, 0);
    // add r0, sp, #0
    MI_CpuFill8(0, 0x14);
    // add r3, sp, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    *((u8*)(r3 + 0x10)) = 0x19;
    *((u8*)(r3 + 0x11)) = 4;
    // sub r2, #0x34
    // and r1, r5
    *((u8*)(r3 + 0x12)) = ((*((u8*)(r3 + 0x12)) & ~(0xf)) | 0xf);
    // add r1, sp, #0
    YesNoPrompt_InitFromTemplate(*((u32*)(r4 + 0x000006EC)), 0xf, 0x000006EC);
    ov41_02247D1C(r4, 1);
    // strh r1, [r0]
    *((u16*)(0x04000008 + 2)) = (1 | (*((u16*)(0x04000008 + 2)) & ~(3)));
    *((u16*)(0x04000008 + 4)) = (3 | (*((u16*)(0x04000008 + 4)) & ~(3)));
    *((u16*)(0x04000008 + 6)) = (*((u16*)(0x04000008 + 6)) & ~(3));
}





void ov41_02247B5C(void) {
    YesNoPrompt_Reset(*((u32*)(r0 + 0x000006B8)));
    ov41_02247D3C(r4);
    BgClearTilemapBufferAndCommit(*((u32*)(r4 + 0x40)), 3);
}





void ov41_02247B7C(void) {
    YesNoPrompt_HandleInput(*((u32*)(r0 + 0x000006B8)));
    YesNoPrompt_IsInTouchMode(*((u32*)(r5 + 0x000006B8)));
    // str r0, [r5, r1]
}





void ov41_02247BB8(void) {
    // str r1, [sp, #0x14]
    Options_GetFrame(*((u32*)(r0 + 0x000006DC)));
    LoadFontPal1(0, 0xe0, 0xe);
    // str r4, [sp]
    // add r0, sp, #0x20
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    AddWindowParameterized(*((u32*)(r5 + 0x40)), *((u32*)(r5 + 0x000006BC)), 3, r7);
    FillWindowPixelBuffer(*((u32*)(r5 + 0x000006BC)), 0xf);
    // str r0, [sp]
    // str r0, [sp, #4]
    LoadUserFrameGfx2(*((u32*)(r5 + 0x40)), 3, 0x3c, 8);
    DrawFrameAndWindow2(*((u32*)(r5 + 0x000006BC)), 0, 0x3c, 8);
    NewMsgDataFromNarc(0, 0x1b, 0xd7, 0xd);
    // ldr r1, [sp, #0x14]
    NewString_ReadMsgData();
    // str r3, [sp]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(*((u32*)(r5 + 0x000006BC)), 1, r0, 0);
    String_Delete(r4);
    DestroyMsgData(r6);
    CopyWindowToVram(*((u32*)(r5 + 0x000006BC)));
}





void ov41_02247C7C(void) {
    FillWindowPixelBuffer(*((u32*)(r0 + 0x000006BC)), 0xf);
    NewMsgDataFromNarc(0, 0x1b, 0xd7, 0xd);
    NewString_ReadMsgData(r4);
    String_New((1 << 8), 0xd);
    StringExpandPlaceholders(*((u32*)(r5 + 0x000006E8)), r0, r6);
    // str r3, [sp]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(*((u32*)(r5 + 0x000006BC)), 1, r4, 0);
    String_Delete(r4);
    String_Delete(r6);
    DestroyMsgData(r7);
    CopyWindowToVram(*((u32*)(r5 + 0x000006BC)));
}





void ov41_02247D00(void) {
    ClearWindowTilemapAndCopyToVram(*((u32*)(r0 + 0x000006BC)));
    RemoveWindow(*((u32*)(r4 + 0x000006BC)));
}





void ov41_02247D1C(void) {
}





void ov41_02247D34(void) {
}





void ov41_02247D3C(void) {
}





void ov41_02247D44(void) {
    // add r0, r4, r0
    ov41_022482B4((0xfd << 2));
    // add r0, r4, r0
    ov41_0224AC98(0x00000568, r0);
}





void ov41_02247D64(void) {
    // add r0, sp, #0
    MI_CpuFill8(0, 0x14);
    // add r3, sp, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    *((u8*)(r3 + 0x10)) = 0x19;
    *((u8*)(r3 + 0x11)) = 4;
    // sub r2, #0x34
    // and r1, r5
    *((u8*)(r3 + 0x12)) = ((*((u8*)(r3 + 0x12)) & ~(0xf)) | 0xf);
    YesNoPrompt_Reset(*((u32*)(r4 + 0x000006EC)), 0xf, 0x000006EC);
    // add r1, sp, #0
    YesNoPrompt_InitFromTemplate(*((u32*)(r4 + 0x000006B8)));
    ov41_02247D34(r4, 2);
    // strh r1, [r0]
    *((u16*)(0x04000008 + 2)) = (1 | (*((u16*)(0x04000008 + 2)) & ~(3)));
    *((u16*)(0x04000008 + 4)) = (3 | (*((u16*)(0x04000008 + 4)) & ~(3)));
    *((u16*)(0x04000008 + 6)) = (*((u16*)(0x04000008 + 6)) & ~(3));
}





void ov41_02247DF8(void) {
    YesNoPrompt_HandleInput(*((u32*)(r0 + 0x000006B8)));
    YesNoPrompt_IsInTouchMode(*((u32*)(r5 + 0x000006B8)));
    // str r0, [r5, r1]
}





void ov41_02247E34(void) {
    // str r1, [sp]
    // sub r0, r0, r7
    // str r3, [sp, #4]
    // ldr r4, [sp, #0x2c]
    // ldr r5, [sp, #0x30]
    // add r1, r7, r0
    // add r0, r7, r0
    // str r0, [sp, #8]
    // ldr r0, [sp]
    // str r1, [sp, #0xc]
    // sub r0, r0, r6
    // add r2, r6, r0
    // ldr r1, [sp, #0x28]
    // add r0, r6, r0
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _02247E7A: ; jump table
    // str r7, [r4]
    // str r6, [r5]
    // str r7, [r4]
    // str r2, [r5]
    // str r7, [r4]
    // str r0, [r5]
    // ldr r0, [sp]
    // str r7, [r4]
    // str r0, [r5]
    // ldr r0, [sp, #0xc]
    // str r0, [r4]
    // str r6, [r5]
    // ldr r0, [sp, #0xc]
    // str r0, [r4]
    // str r2, [r5]
    // ldr r1, [sp, #0xc]
    // str r1, [r4]
    // str r0, [r5]
    // ldr r0, [sp, #0xc]
    // str r0, [r4]
    // ldr r0, [sp]
    // str r0, [r5]
    // ldr r0, [sp, #8]
    // str r0, [r4]
    // str r6, [r5]
    // ldr r0, [sp, #8]
    // str r0, [r4]
    // str r2, [r5]
    // ldr r1, [sp, #8]
    // str r1, [r4]
    // str r0, [r5]
    // ldr r0, [sp, #8]
    // str r0, [r4]
    // ldr r0, [sp]
    // str r0, [r5]
    // ldr r0, [sp, #4]
    // str r0, [r4]
    // str r6, [r5]
    // ldr r0, [sp, #4]
    // str r0, [r4]
    // str r2, [r5]
    // ldr r1, [sp, #4]
    // str r1, [r4]
    // str r0, [r5]
    // ldr r0, [sp, #4]
    // str r0, [r4]
    // ldr r0, [sp]
    // str r0, [r5]
}





void ov41_02247F3C(void) {
    // str r0, [r4]
    // add r0, #0x14
    // add r1, #0x78
    // add r4, #0x14
}





void ov41_02247F90(void) {
}





void ov41_02247FAC(void) {
    // ldr r0, [sp, #0x20]
    // str r0, [sp]
    // add r0, #0x78
    // ldr r1, [sp, #0x1c]
    // add r0, #0x78
    // add r4, #0x78
    // ldr r2, [sp, #0x18]
}





void ov41_02247FE0(void) {
}





void ov41_02247FFC(void) {
}





void ov41_02248020(void) {
    // bx r3
    // nop
    // _0224802C: .word ov41_02249A50
}





void ov41_02248030(void) {
}





void ov41_02248038(void) {
}





void ov41_02248044(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r2, [sp, #0x10]
    // str r3, [sp, #0x14]
    // str r1, [sp, #0x18]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x1c]
    // add r0, sp, #0
    // ldr r1, [sp, #0x30]
}





void ov41_022480A4(void) {
}





void ov41_022480C8(void) {
    // bpl _022480DE
}





void ov41_022480E0(void) {
}





void ov41_022480F8(void) {
}





void ov41_02248114(void) {
}





void ov41_02248120(void) {
    // neg r4, r2
    // neg r7, r1
    // ldr r2, [sp, #0x18]
    // add r0, #0x14
    // add r5, #0x14
    // ldr r2, [sp, #0x18]
}





void ov41_02248158(void) {
}





void ov41_02248164(void) {
    // add r6, #0x14
    // sub r5, #8
}





void ov41_022481BC(void) {
}





void ov41_022481D8(void) {
}





void ov41_022481F4(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, #0x14
    // str r0, [sp, #4]
    // ldr r0, [sp, #4]
    // ldr r0, [sp]
    // str r0, [sp, #8]
    // ldr r0, [sp, #8]
}





void ov41_0224825C(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, #0x86
    // str r0, [sp, #8]
    // add r0, #0x87
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x1c]
    // str r0, [sp, #0x20]
    // str r0, [sp, #0x24]
    // add r1, #0x88
    // str r0, [sp, #0x28]
    // str r1, [sp, #0x10]
    // add r0, #0x48
    // add r1, sp, #0
    // str r2, [sp, #0x2c]
}





void ov41_022482A8(void) {
}





void ov41_022482B4(void) {
}





void ov41_022482B8(void) {
    // add r7, #0x14
    // str r1, [sp]
    // str r2, [sp, #4]
    // add r1, sp, #0xc
    // add r2, sp, #8
    // neg r1, r4
    // ldr r0, [sp, #0xc]
    // neg r2, r0
    // neg r1, r5
    // ldr r0, [sp, #8]
    // neg r2, r0
    // ldr r0, [sp]
    // str r4, [r0]
    // ldr r0, [sp, #4]
    // str r5, [r0]
}





void ov41_02248324(void) {
    // str r0, [sp, #0xc]
    // str r2, [sp, #0x14]
    // str r1, [sp, #0x10]
    // add r1, sp, #0x54
    // add r2, sp, #0x50
    // ldr r0, [sp, #0x10]
    // add r1, sp, #0x4c
    // add r2, sp, #0x48
    // add r0, sp, #0x30
    // str r0, [sp]
    // ldr r0, [sp, #0x10]
    // add r1, sp, #0x44
    // add r2, sp, #0x34
    // add r3, sp, #0x40
    // str r0, [sp, #0x20]
    // ldr r6, [sp, #0x54]
    // ldr r0, [sp, #0x4c]
    // ldr r7, [sp, #0x44]
    // add r1, r6, r0
    // ldr r0, [sp, #0x34]
    // sub r0, r1, r0
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x50]
    // ldr r1, [sp, #0x48]
    // str r0, [sp, #0x24]
    // add r1, r0, r1
    // ldr r0, [sp, #0x30]
    // sub r0, r1, r0
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x40]
    // str r0, [sp, #0x28]
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #0x2c]
    // add r0, #0x78
    // str r0, [sp, #0x2c]
    // str r4, [sp]
    // add r0, sp, #0x3c
    // str r0, [sp, #4]
    // add r0, sp, #0x38
    // str r0, [sp, #8]
    // ldr r1, [sp, #0x24]
    // ldr r0, [sp, #0x28]
    // ldr r3, [sp, #0x1c]
    // add r0, r1, r0
    // ldr r1, [sp, #0x18]
    // add r2, r6, r7
    // ldr r0, [sp, #0x2c]
    // ldr r1, [sp, #0x3c]
    // ldr r2, [sp, #0x38]
    // ldr r3, [sp, #0x20]
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp, #0xc]
    // ldr r0, [sp, #0x10]
    // add r1, #0x14
    // str r1, [sp, #0xc]
    // ldr r1, [sp, #0xc]
    // ldr r0, [sp, #0x10]
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp, #0xc]
    // ldr r0, [sp, #0x10]
    // ldr r1, [sp, #0xc]
    // ldr r0, [sp, #0x10]
}





void ov41_02248400(void) {
    // add r1, sp, #0x20
    // add r2, sp, #0x1c
    // add r1, sp, #0x18
    // add r2, sp, #0x14
    // add r0, sp, #4
    // str r0, [sp]
    // add r1, sp, #0x10
    // add r2, sp, #8
    // add r3, sp, #0xc
    // ldr r0, [sp, #0x18]
    // ldr r1, [sp, #0x10]
    // ldr r3, [sp, #0xc]
    // add r2, r0, r1
    // sub r2, r1, r2
    // ldr r1, [sp, #0x20]
    // add r1, r0, r1
    // ldr r0, [sp, #8]
    // sub r1, r1, r0
    // ldr r0, [sp, #0x14]
    // sub r1, #0xf6
    // add r6, r0, r3
    // sub r3, r3, r6
    // ldr r6, [sp, #0x1c]
    // add r6, r0, r6
    // ldr r0, [sp, #4]
    // sub r6, r6, r0
    // sub r6, #0x8f
    // str r2, [r5]
    // neg r0, r1
    // str r0, [r5]
    // str r0, [r5]
    // str r3, [r4]
    // neg r0, r6
    // str r0, [r4]
    // str r0, [r4]
}





void ov41_02248488(void) {
}





void ov41_022484C0(void) {
    // add r5, #0xc
    // add r5, #0xc
}





void ov41_022484E8(void) {
}





void ov41_02248584(void) {
    // str r0, [r5]
    // str r0, [r4]
    // ldr r2, [sp, #0x10]
    // sub r1, r1, r2
    // add r0, r0, r1
    // str r0, [r5]
    // ldr r2, [sp, #0x14]
    // sub r1, r1, r2
    // add r0, r0, r1
    // str r0, [r4]
    // ldr r0, [sp, #0x18]
}





void ov41_022485DC(void) {
    // str r4, [sp, #0x40]
    // str r0, [sp, #0x28]
    // str r0, [sp, #0x2c]
    // str r1, [sp, #0x38]
    // str r1, [sp, #0x3c]
    // str r4, [sp, #0xc]
    // str r0, [sp, #0x44]
    // str r0, [sp, #0xc]
    // add r0, #0x64
    // str r0, [sp, #0xc]
    // str r1, [sp, #0x44]
    // str r0, [sp, #0xc]
    // add r0, #0x64
    // str r0, [sp, #0xc]
    // str r1, [sp, #0x44]
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #0x30]
    // str r1, [sp, #0x34]
    // ldr r0, [sp, #0x34]
    // add r0, sp, #0x28
    // str r0, [sp, #0x10]
    // ldr r1, [sp, #0x10]
    // add r1, r5, r1
    // add r1, r2, r1
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x14]
    // add r1, sp, #0x1c
    // add r2, sp, #0x18
    // ldr r0, [sp, #0x1c]
    // str r0, [sp]
    // ldr r0, [sp, #0x18]
    // add r2, sp, #0x24
    // str r0, [sp, #4]
    // add r3, sp, #0x20
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp, #0x24]
    // ldr r2, [sp, #0x20]
    // ldr r1, [sp, #0x10]
}





void ov41_022486C4(void) {
    // add r1, r5, r1
    // add r1, r2, r1
}





void ov41_022486F0(void) {
}





void ov41_022486F8(void) {
    // add r0, r0, r4
    // add r4, #0x10
    // add r5, #0xc
}





void ov41_02248724(void) {
    // mvn r5, r5
}





void ov41_02248750(void) {
    // str r4, [sp]
    // add r2, r5, r2
    // str r6, [r5]
    // add r0, r5, r0
}





void ov41_02248790(void) {
    // str r1, [sp, #4]
    // str r0, [sp]
    // str r2, [sp, #8]
    // ldr r0, [sp, #4]
    // ldr r0, [sp]
    // add r6, r0, r1
    // ldr r0, [sp, #8]
    // add r0, r4, r7
    // sub r5, r7, r4
    // bpl _022487CC
    // add r5, r5, r0
    // ldr r0, [sp]
    // ldr r1, [sp, #4]
    // ldr r0, [sp]
    // ldr r1, [sp, #4]
}





void ov41_022487F8(void) {
    // str r4, [r5]
    // add r0, r5, r0
}





void ov41_02248820(void) {
}





void ov41_0224883C(void) {
}





void ov41_02248858(void) {
    // str r3, [sp]
    // ldr r3, [sp]
}





void ov41_0224888C(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, #0x81
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x1c]
    // str r0, [sp, #0x20]
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x28]
    // add r1, #0x82
    // str r0, [sp, #0x2c]
    // str r1, [sp, #0x10]
    // add r0, #0x5c
    // add r1, sp, #0
}





void ov41_022488D8(void) {
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, #0x81
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // add r1, #0x82
    // str r0, [sp, #0x1c]
    // str r1, [sp, #0x18]
    // str r0, [sp, #0x20]
    // str r0, [sp, #0x24]
    // str r1, [sp, #0x2c]
    // str r0, [sp, #0x28]
    // str r7, [sp, #0x30]
    // str r1, [sp, #0x34]
    // tst r0, r2
    // tst r0, r2
    // ldr r0, [sp, #0x50]
    // str r3, [sp]
    // str r0, [sp, #4]
    // add r0, #0x5c
    // add r1, sp, #8
}





void ov41_02248940(void) {
}





void ov41_0224894C(void) {
}





void ov41_0224895C(void) {
    // add r3, r5, r0
    // add r3, #0xc
    // ldmia r3!, {r0, r1}
    // add r2, sp, #0
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // ldr r0, [sp, #8]
}





void ov41_02248984(void) {
    // ldr r2, [sp, #8]
}





void ov41_02248998(void) {
    // cmp r0, #0
    // bne _022489A2
}





void ov41_022489A8(void) {
}





void ov41_022489E4(void) {
}





void ov41_02248A08(void) {
}





void ov41_02248A18(void) {
}





void ov41_02248A28(void) {
    // str r0, [r5]
    // add r0, r0, r4
    // add r0, r0, r4
    // add r0, r0, r4
    // add r4, #0x10
}





void ov41_02248A6C(void) {
}





void ov41_02248A94(void) {
    // add r3, r0, r1
    // add r3, #0xc
    // ldmia r3!, {r0, r1}
    // add r2, sp, #0
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // ldr r0, [sp, #8]
    // ldr r1, [sp]
    // add r0, r1, r0
}





void ov41_02248ABC(void) {
    // add r4, r0, r3
    // add r4, #0xc
    // ldmia r4!, {r0, r1}
    // add r3, sp, #0
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // ldr r1, [sp]
    // add r0, r1, r0
}





void ov41_02248AE0(void) {
}





void ov41_02248AFC(void) {
}





void ov41_02248B20(void) {
    // add r0, r0, r4
}





void ov41_02248B48(void) {
    // add r0, r2, r0
    // add r0, #0x10
    // str r0, [r4]
    // add r0, r2, r0
    // add r0, #8
    // str r0, [r5]
}





void ov41_02248B84(void) {
    // str r3, [sp]
    CreateSysTaskAndEnvironment(ov41_02248BFC, 0x30, 0, 0xd);
    SysTask_GetData();
    // str r5, [r4]
    *((u32*)(r0 + 4)) = r6;
    // ldr r0, [sp]
    *((u32*)(r0 + 8)) = r7;
    *((u32*)(r0 + 0xc)) = r0;
    // ldr r0, [sp, #0x18]
    *((u32*)(r0 + 0x10)) = r0;
    *((u32*)(r0 + 0x1c)) = 0;
    ov41_02248AE0(r5, r6, r7);
    *((u32*)(r4 + 0x20)) = r0;
    // ldr r1, [sp]
    // ldr r2, [sp, #0x18]
    ov41_02248AE0(r5);
    *((u32*)(r4 + 0x24)) = r0;
    // add r2, r1, r0
    *((u32*)(r4 + 0x2c)) = r2;
    Heap_Alloc(0xd, (0xc * r2));
    *((u32*)(r4 + 0x28)) = r0;
    GF_AssertFail();
    memset(*((u32*)(r4 + 0x28)), 0, (0xc * *((u32*)(r4 + 0x2c))), *((u32*)(r4 + 0x2c)));
    *((u32*)(r5 + 0x3c)) = 1;
}





void ov41_02248BFC(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02248C18: ; jump table
    // mvn r0, r0
    // str r0, [sp]
    // add r1, #0x14
    // str r1, [sp]
    // sub r2, r2, r3
    // ror r2, r1
    // add r1, r3, r2
    // add r5, #0x20
    // bmi _02248CA2
    // str r0, [r5]
    // add r5, #0x24
    // bmi _02248CEE
    // str r0, [r5]
    // mvn r0, r0
    // str r0, [sp]
}





void ov41_02248D64(void) {
}





void ov41_02248D7C(void) {
    // add r0, r0, r1
    // add r4, #0xc
}





void ov41_02248DA4(void) {
    // add r5, #0xc
}





void ov41_02248DC8(void) {
    // add r1, sp, #4
    // add r2, sp, #0
    // ldr r1, [sp]
    // add r2, r1, r0
    // str r2, [sp]
    // ldr r1, [sp, #4]
    // strb r0, [r4]
}





void ov41_02248E10(void) {
    // sub r0, r4, r1
    // add r0, r5, r0
}





void ov41_02248E28(void) {
    // strb r1, [r3]
    *((u32*)(r0 + 4)) = ov41_02248E80;
    *((u32*)(r0 + 8)) = ov41_02248E80;
    *((u32*)(r0 + 0xc)) = ov41_02248E80;
}





void ov41_02248E44(void) {
    // blx r1
    // blx r1
    // blx r1
    *((u16*)(r0 + 0x14)) = *((u16*)(gSystem + 0x20));
    *((u16*)(r0 + 0x16)) = *((u16*)(gSystem + 0x22));
    *((u8*)(r0 + 0x18)) = *((u16*)(gSystem + 0x26));
}





void ov41_02248E80(void) {
}





void ov41_02248E84(void) {
    // stmia r5!, {r0}
    // str r1, [r2, r0]
    // add r0, r7, r0
    // str r4, [r0, r5]
}





void ov41_02248ED4(void) {
}





void ov41_02248EE8(void) {
    // add r1, r0, r1
}





void ov41_02248EF4(void) {
    // ldr r3, [r0, r2]
}





void ov41_02248F18(void) {
    ov41_02248E28();
    Heap_Alloc(0xd, 0x34);
    // str r0, [r5]
    memset(0, 0x34);
    // ldr r0, [sp, #0x18]
    *((u32*)(*((u32*)r5) + 4)) = r4;
    *((u32*)(*((u32*)r5) + 8)) = r6;
    // str r7, [r1]
    *((u32*)(*((u32*)r5) + 0xc)) = r0;
    // ldr r0, [sp, #0x1c]
    *((u32*)(*((u32*)r5) + 0x2c)) = r0;
    *((u32*)(r5 + 4)) = ov41_02248F80;
    *((u32*)(r5 + 8)) = ov41_022490F0;
    *((u32*)(r5 + 0xc)) = ov41_02249280;
    *((u32*)(r5 + 0x10)) = ov41_02248F6C;
}





void ov41_02248F6C(void) {
}





void ov41_02248F80(void) {
    ov41_022481BC(*((u32*)(*((u32*)r0) + 4)));
    // add r1, sp, #0xc
    // add r2, sp, #8
    ov41_022481F4(*((u32*)(r4 + 4)), *((u32*)(*((u32*)r4) + 0x38)));
    ov41_022480C8(*((u32*)(r4 + 4)), 0);
    ov41_02248030(r6);
    ov41_02249710(*((u32*)r6));
    // add r1, #0x24
    // add r2, #0x28
    ov41_02249B44(r6, r4, r4);
    ov41_02248158(*((u32*)(r4 + 4)));
    // ldr r0, [sp, #8]
    // str r0, [sp]
    // str r7, [sp, #4]
    // ldr r3, [sp, #0xc]
    ov41_022493BC(r4, r6, 1);
    ov41_0224642C();
    ov41_02248820(*((u32*)(r4 + 8)));
    // add r1, sp, #0xc
    // add r2, sp, #8
    ov41_02248858(*((u32*)(r4 + 8)), *((u32*)(*((u32*)r4) + 0x38)));
    ov41_022486F0();
    ov41_02248724(*((u32*)(r4 + 8)));
    // ldr r0, [sp, #8]
    // str r0, [sp]
    // str r2, [sp, #4]
    // ldr r3, [sp, #0xc]
    ov41_022493BC(r4, r6, 0);
    ov41_0224642C();
    *((u32*)(r5 + 8)) = ov41_022490F0;
    *((u32*)(r5 + 0xc)) = ov41_02249280;
    *((u32*)(r5 + 8)) = ov41_022490B0;
    *((u32*)(r5 + 0xc)) = ov41_022490AC;
    ov41_02249390(r5, ov41_02249280);
    *((u32*)(r5 + 8)) = ov41_022492B0;
    *((u32*)(r5 + 0xc)) = ov41_022492E0;
    PlaySE(((0x0000067D << 0x10) >> 0x10), ov41_022492E0);
    ov41_02249574(r4);
}





void ov41_022490AC(void) {
}





void ov41_022490B0(void) {
    // str r0, [sp]
    // add r0, #0x21
    // str r0, [sp, #4]
    // ldrsh r2, [r4, r2]
    // ldrsh r3, [r4, r3]
}





void ov41_022490F0(void) {
    // add r1, sp, #0x18
    // str r1, [sp]
    // add r1, sp, #0x24
    // add r2, sp, #0x20
    // add r3, sp, #0x1c
    ov41_0224946C(*((u32*)(*((u32*)r0) + 0x10)));
    // ldr r1, [sp, #0x1c]
    // ldr r2, [sp, #0x24]
    ov41_022481D8(*((u32*)(r4 + 4)));
    // ldr r1, [sp, #0x18]
    // ldr r2, [sp, #0x24]
    ov41_022481D8(*((u32*)(r4 + 4)));
    // add r5, r5, r0
    // ldr r1, [sp, #0x1c]
    // ldr r2, [sp, #0x20]
    ov41_022481D8(*((u32*)(r4 + 4)));
    // add r5, r5, r0
    // ldr r1, [sp, #0x18]
    // ldr r2, [sp, #0x20]
    ov41_022481D8(*((u32*)(r4 + 4)));
    // add r0, r5, r0
    ov41_022480A4(*((u32*)(r4 + 4)), *((u32*)(r4 + 0x10)), *((u32*)(*((u32*)r4) + 0x38)));
    // ldrsh r0, [r4, r0]
    // str r0, [sp, #0xc]
    // ldrsh r0, [r4, r0]
    // str r0, [sp, #8]
    PlaySE(0x00000682);
    ov41_0224AC08(*((u32*)(r4 + 0xc)), 0x1b, 0xd7, 3);
    // str r0, [sp]
    // add r0, #0x21
    // str r0, [sp, #4]
    // ldr r2, [sp, #0xc]
    // ldr r3, [sp, #8]
    ov41_02249480(r4, 4);
    ov41_02248158(*((u32*)(r4 + 4)));
    ov41_022463FC();
    *((u32*)(r4 + 0x30)) = 0;
    PlaySE(0x000005EA);
    // add r1, sp, #0x24
    // add r0, sp, #0x18
    // str r0, [sp]
    // add r2, sp, #0x20
    // add r3, sp, #0x1c
    ov41_0224942C(r6);
    // ldr r1, [sp, #0x1c]
    // ldr r2, [sp, #0x24]
    ov41_0224883C(*((u32*)(r4 + 8)));
    // ldr r1, [sp, #0x18]
    // ldr r2, [sp, #0x20]
    ov41_0224883C(*((u32*)(r4 + 8)));
    // add r0, r6, r0
    // add r0, #0x20
    // add r1, sp, #0x14
    // add r2, sp, #0x10
    ov41_02249B94(*((u32*)(r4 + 0x10)));
    MTRandom();
    // ldr r2, [sp, #0x14]
    // sub r1, r1, r2
    _u32_div_f(0x6c);
    // add r1, #0xa
    // str r1, [sp, #0xc]
    MTRandom();
    // ldr r2, [sp, #0x10]
    // sub r1, r1, r2
    _u32_div_f(0x7d);
    // add r1, #0x12
    // str r1, [sp, #8]
    // ldrsh r0, [r4, r0]
    // str r0, [sp, #0xc]
    // ldrsh r0, [r4, r0]
    // str r0, [sp, #8]
    PlaySE(0x00000682);
    // add r1, sp, #0xc
    // add r2, sp, #8
    ov41_02249B44(*((u32*)(r4 + 0x10)));
    PlaySE(0x000005EB);
    // add r0, #0x20
    ov41_022484E8(*((u32*)(*((u32*)(r4 + 0x10)) + 4)), *((u32*)r5), *((u32*)(*((u32*)(r4 + 8)) + 4)));
    // add r1, #0x21
    // strb r0, [r1]
    // str r0, [sp]
    // add r0, #0x21
    // str r0, [sp, #4]
    // ldr r2, [sp, #0xc]
    // ldr r3, [sp, #8]
    ov41_02249480(r4, 4);
    ov41_02249418(r4);
}





void ov41_02249280(void) {
    // sub r1, r4, r1
    // sub r2, r3, r2
    ov41_02249AF4(*((u32*)(*((u32*)r0) + 0x10)), *((u32*)(*((u32*)r0) + 0x14)), *((u32*)(*((u32*)r0) + 0x18)), *((u16*)(gSystem + 0x22)));
}





void ov41_022492B0(void) {
    ov41_02248020(*((u32*)(*((u32*)r0) + 4)), *((u32*)(*((u32*)r0) + 0x10)));
    ov41_02248158(*((u32*)(r4 + 4)));
    ov41_022463FC();
    *((u32*)(r4 + 0x30)) = 0;
    PlaySE(0x000005EB);
    ov41_02249418(r4);
}





void ov41_022492E0(void) {
    // str r0, [sp, #4]
    // add r1, sp, #8
    // str r1, [sp]
    // add r1, sp, #0x14
    // add r2, sp, #0xc
    // add r3, sp, #0x10
    ov41_02249BAC(*((u32*)(*((u32*)r0) + 0x10)), 0x0000FFFF, *((u16*)(gSystem + 0x20)));
    // add r1, sp, #0x1c
    // add r2, sp, #0x18
    ov41_02249B94(*((u32*)(r4 + 0x10)));
    // ldr r3, [sp, #0x18]
    // sub r5, r2, r1
    // ldr r2, [sp, #0x1c]
    // sub r6, r1, r0
    // ldr r0, [sp, #0xc]
    // ldr r1, [sp, #0x10]
    // sub r0, r2, r0
    // ldr r2, [sp, #8]
    // add r7, r6, r1
    // sub r2, r3, r2
    // ldr r3, [sp, #0x14]
    // str r2, [sp, #0x18]
    // add r2, r5, r3
    // str r0, [sp, #0x1c]
    // sub r5, r0, r3
    // add r2, r5, r0
    // sub r5, r2, r0
    // sub r6, r0, r1
    // ldr r1, [sp, #0x18]
    // add r0, r6, r1
    // sub r6, r0, r1
    // ldr r0, [sp, #4]
    ov41_022495A4(0x8f, r5, r6);
    // add r1, sp, #0x14
    // add r2, sp, #0x10
    ov41_022482B8(*((u32*)(r4 + 4)));
    // ldr r1, [sp, #0x14]
    // ldr r2, [sp, #0x10]
    // ldr r0, [sp, #4]
    // add r1, r5, r1
    // add r2, r6, r2
    ov41_022495A4();
}





void ov41_02249390(void) {
}





void ov41_022493BC(void) {
    // add r1, sp, #4
    // add r2, sp, #0
    // ldr r0, [sp, #4]
    // ldr r0, [sp]
    // add r0, #0x20
    // strb r6, [r0]
    // ldr r0, [sp, #0x20]
    // add r1, #0x21
    // strb r0, [r1]
    // add r0, #0x21
    // strb r1, [r0]
    // ldr r1, [sp, #0x24]
}





void ov41_02249418(void) {
    // add r1, #0x20
    // strb r2, [r1]
    // add r0, #0x21
    // strb r2, [r0]
}





void ov41_0224942C(void) {
    // add r1, sp, #0xc
    // add r2, sp, #8
    // add r1, sp, #4
    // add r2, sp, #0
    // ldr r0, [sp]
    // str r0, [r5]
    // ldr r1, [sp]
    // ldr r0, [sp, #8]
    // add r0, r1, r0
    // str r0, [r6]
    // ldr r0, [sp, #4]
    // str r0, [r7]
    // ldr r1, [sp, #4]
    // ldr r0, [sp, #0xc]
    // add r1, r1, r0
    // ldr r0, [sp, #0x28]
    // str r1, [r0]
}





void ov41_0224946C(void) {
}





void ov41_02249480(void) {
    // str r3, [sp]
    CreateSysTaskAndEnvironment(ov41_022494F4, 0x2c, 0, 0xd);
    SysTask_GetData();
    // add r1, sp, #8
    // str r0, [r4]
    // add r2, sp, #4
    *((u32*)(r0 + 4)) = *((u32*)(r5 + 0x10));
    *((u32*)(r0 + 0x20)) = r6;
    // ldr r0, [sp]
    *((u32*)(r0 + 0x10)) = r7;
    *((u32*)(r0 + 0x14)) = *((u32*)(r5 + 0x10));
    // ldr r0, [sp, #0x20]
    *((u32*)(r0 + 0x18)) = *((u32*)(r5 + 0x10));
    // ldr r0, [sp, #0x24]
    *((u32*)(r0 + 0x1c)) = *((u32*)(r5 + 0x10));
    // add r0, #0x3c
    *((u32*)(r0 + 0x24)) = *((u32*)(r5 + 8));
    // add r0, #0x30
    *((u32*)(r0 + 0x28)) = r5;
    ov41_02249B44(*((u32*)(r5 + 0x10)));
    // ldr r0, [sp, #8]
    // sub r0, r1, r0
    _s32_div_f(r6);
    *((u32*)(r4 + 8)) = r0;
    // ldr r0, [sp, #4]
    // sub r0, r1, r0
    _s32_div_f(r6);
    *((u32*)(r4 + 0xc)) = r0;
    *((u32*)(r5 + 0x30)) = 0;
}





void ov41_022494F4(void) {
    // add r1, sp, #4
    // add r2, sp, #0
    // ldr r1, [sp, #4]
    // add r0, r1, r0
    // str r0, [sp, #4]
    // ldr r1, [sp]
    // add r0, r1, r0
    // str r0, [sp]
    // bmi _02249532
    // ldr r1, [sp, #4]
    // ldr r2, [sp]
}





void ov41_02249574(void) {
}





void ov41_022495A4(void) {
    // sub r1, r5, r1
    // sub r2, r6, r2
}





void ov41_022495C8(void) {
    // str r2, [sp]
}





void ov41_022495F0(void) {
}





void ov41_02249604(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [r5]
    // add r1, sp, #0x1c
    // add r2, sp, #0x18
    // ldr r1, [sp, #0x1c]
    // add r0, r1, r0
    // asr r0, r0, #1
    // ldr r1, [sp, #0x18]
    // str r0, [sp, #0x1c]
    // add r0, r1, r0
    // asr r0, r0, #1
    // str r0, [sp, #0x18]
    // sub r0, r2, r0
    // ldr r0, [sp, #0x18]
    // add r0, #0x38
    // ldr r0, [sp, #0x1c]
    // sub r0, r1, r0
    // ldr r0, [sp, #0x1c]
    // add r0, #0xc0
    // ldr r0, [sp, #0x18]
    // str r0, [sp]
    // ldr r3, [sp, #0x1c]
    // str r2, [sp]
    // ldr r3, [sp, #0x38]
    // add r1, sp, #0x14
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x14]
    // ldr r0, [sp, #0x3c]
    // ldr r2, [sp, #0x14]
    // add r3, #8
    // ldr r1, [sp, #0x14]
    // ldr r0, [sp, #0x10]
}





void ov41_022496E8(void) {
}





void ov41_02249700(void) {
    // bx r3
    // nop
    // _0224970C: .word Pokepic_SetAttr
}





void ov41_02249710(void) {
}





void ov41_0224971C(void) {
    // add r1, sp, #8
    // add r2, sp, #4
    // ldr r1, [sp, #4]
    // add r0, r1, r0
    // asr r2, r0, #1
    // ldr r1, [sp, #8]
    // str r2, [sp, #4]
    // add r0, r1, r0
    // asr r0, r0, #1
    // str r0, [sp, #8]
    // str r2, [sp]
    // ldr r3, [sp, #8]
}





void ov41_02249768(void) {
}





void ov41_02249774(void) {
}





void ov41_02249780(void) {
}





void ov41_022497A0(void) {
}





void ov41_022497A8(void) {
    ov41_02249768();
    // add r1, sp, #4
    // add r2, sp, #0
    ov41_02249780(r5);
    // add r1, sp, #0xc
    // add r2, sp, #8
    ov41_022497A0(r5);
    // ldr r1, [sp, #0xc]
    // ldr r2, [sp, #4]
    // add r0, r1, r0
    // asr r0, r0, #1
    // sub r1, r2, r0
    // ldr r3, [sp, #8]
    // ldr r0, [sp]
    // add r2, r3, r2
    // asr r2, r2, #1
    // sub r0, r0, r2
    // str r0, [sp]
    // str r1, [sp, #4]
    // sub r1, r2, r1
    // str r1, [r4]
    // ldr r0, [sp]
    // sub r2, r1, r0
    // str r2, [r6]
    ov41_022464BC(r7, *((u32*)r4), *((u16*)(gSystem + 0x20)), 0);
}





void ov41_02249820(void) {
    // add r1, sp, #4
    // add r2, sp, #0
    // add r1, sp, #0xc
    // add r2, sp, #8
    // ldr r1, [sp, #0xc]
    // ldr r2, [sp, #4]
    // add r0, r1, r0
    // asr r0, r0, #1
    // sub r1, r2, r0
    // ldr r3, [sp, #8]
    // str r1, [sp, #4]
    // add r2, r3, r2
    // ldr r0, [sp]
    // asr r2, r2, #1
    // sub r0, r0, r2
    // str r0, [sp]
    // sub r2, r6, r0
    // sub r1, r4, r1
}





void ov41_02249888(void) {
    // strb r2, [r1]
}





void ov41_0224989C(void) {
    // mov ip, r0
    // add r1, r2, r4
    // sub r6, r6, r0
    // ror r6, r5
    // add r5, r0, r6
    // add r0, r1, r0
    // lsl r5, r6
    // asr r1, r0, #1
    // mov r0, ip
    // ldrsb r0, [r0, r1]
    // tst r0, r5
    // add r4, r4, r7
}





void ov41_022498E8(void) {
    // str r0, [sp]
    // str r1, [sp, #4]
    // strb r0, [r1]
    // sub r2, r2, r6
    // str r2, [sp, #8]
    // mov lr, r2
    // ldr r2, [sp, #8]
    // mov ip, r2
    // add r7, r6, r5
    // sub r4, r4, r3
    // ror r4, r2
    // add r2, r3, r4
    // lsl r2, r4
    // add r3, r7, r3
    // ldr r2, [sp]
    // asr r3, r3, #1
    // ldrsb r2, [r2, r3]
    // tst r2, r4
    // mov r2, lr
    // strb r2, [r1]
    // ldr r2, [sp, #8]
    // mov r2, ip
    // sub r3, r2, r0
    // ldr r2, [sp, #4]
    // add r5, r5, r2
}





void ov41_02249978(void) {
    // ldr r4, [sp, #8]
    // sub r4, r2, r4
    // bmi _02249982
    // strb r4, [r0]
    // ldr r4, [sp, #8]
    // add r2, r2, r4
    // sub r2, r1, r3
    // bmi _0224999A
    // add r1, r1, r3
}





void ov41_022499B4(void) {
    // str r0, [r5]
}





void ov41_022499DC(void) {
}





void ov41_022499F0(void) {
    // add r1, #0x10
    // str r6, [r0, r1]
    // add r0, r0, r1
    // add r0, r0, r1
}





void ov41_02249A40(void) {
    // strb r1, [r0]
}





void ov41_02249A50(void) {
}





void ov41_02249A60(void) {
}





void ov41_02249A70(void) {
}





void ov41_02249A90(void) {
}





void ov41_02249AA8(void) {
    // add r4, #0x64
    // add r4, #0x64
}





void ov41_02249AF4(void) {
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    // add r1, sp, #4
    // add r2, sp, #0
    // ldr r1, [sp, #4]
    // ldr r2, [sp]
    // add r0, r1, r0
    // asr r1, r0, #1
    // add r0, r2, r0
    // asr r2, r0, #1
    // str r1, [sp, #4]
    // str r2, [sp]
    // add r1, r5, r1
    // add r2, r4, r2
}





void ov41_02249B44(void) {
    // add r1, sp, #4
    // add r2, sp, #0
    // ldr r1, [sp, #4]
    // add r0, r1, r0
    // asr r2, r0, #1
    // ldr r1, [sp]
    // str r2, [sp, #4]
    // add r0, r1, r0
    // asr r0, r0, #1
    // str r0, [sp]
    // sub r0, r0, r2
    // str r0, [r5]
    // ldr r0, [sp]
    // sub r0, r1, r0
    // str r0, [r4]
}





void ov41_02249B94(void) {
}





void ov41_02249BAC(void) {
    // ldr r4, [sp, #0x18]
    // str r0, [r7]
    // str r0, [r4]
    // add r1, sp, #0
    // add r0, sp, #0
    // str r1, [r6]
    // str r1, [r7]
    // str r1, [r5]
    // str r0, [r4]
}





void ov41_02249BE8(void) {
    // add r1, sp, #4
    // add r2, sp, #0
    // ldr r0, [sp, #4]
    // add r1, r0, r6
    // ldr r0, [sp]
    // str r1, [sp, #4]
    // add r2, r0, r7
    // str r2, [sp]
}





void ov41_02249C20(void) {
    // add r1, sp, #0x20
    // add r2, sp, #0x1c
    // add r1, sp, #0x18
    // add r2, sp, #0x14
    // add r0, sp, #4
    // str r0, [sp]
    // add r1, sp, #0x10
    // add r2, sp, #8
    // add r3, sp, #0xc
    // ldr r1, [sp, #0x14]
    // ldr r0, [sp, #0xc]
    // add r0, r1, r0
    // str r0, [r4]
    // ldr r1, [sp, #0x14]
    // ldr r0, [sp, #0x1c]
    // add r1, r1, r0
    // ldr r0, [sp, #4]
    // sub r0, r1, r0
    // str r0, [r6]
    // ldr r1, [sp, #0x18]
    // ldr r0, [sp, #0x10]
    // add r0, r1, r0
    // str r0, [r7]
    // ldr r1, [sp, #0x18]
    // ldr r0, [sp, #0x20]
    // add r1, r1, r0
    // ldr r0, [sp, #8]
    // sub r1, r1, r0
    // ldr r0, [sp, #0x38]
    // str r1, [r0]
}





void ov41_02249C7C(void) {
    // str r0, [r2]
    // asr r0, r3, #2
    // add r0, r3, r0
    // asr r0, r0, #3
    *((u32*)(r0 + 0xc)) = (*((u32*)r1) >> 0x1d);
    // asr r0, r3, #2
    // add r0, r3, r0
    // asr r0, r0, #3
    *((u32*)(r0 + 0x10)) = ((*((u32*)r1) >> 0x1d) >> 0x1d);
    *((u32*)(r0 + 0x1c)) = *((u32*)(r1 + 0x1c));
    *((u32*)(r0 + 0x20)) = *((u32*)(r1 + 0x24));
    *((u32*)(r0 + 0x24)) = *((u32*)(r1 + 0x20));
    *((u32*)(r0 + 0x28)) = *((u32*)(r1 + 0x28));
    *((u32*)(r0 + 4)) = *((u32*)(r1 + 4));
    *((u32*)(r0 + 8)) = *((u32*)(r1 + 0x10));
    // add r1, #0x14
    // add r2, #0x18
}





void ov41_02249CC4(void) {
}





void ov41_02249CE0(void) {
    // str r2, [r0]
}





void ov41_02249CF8(void) {
    // add r1, r0, r1
    // str r0, [sp]
    // add r3, sp, #0x14
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r2, [sp, #0x14]
}





void ov41_02249D60(void) {
    // str r0, [sp]
    // add r3, sp, #0x14
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r2, [sp, #0x14]
    // strb r0, [r5]
}





void ov41_02249DB4(void) {
    // str r2, [sp]
    // str r3, [sp, #4]
    CreateSysTaskAndEnvironment(ov41_02249F0C, 0x4c, 0, 0xd);
    SysTask_GetData();
    // str r6, [r4]
    // ldmia r7!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [sp, #0x24]
    // ldr r1, [sp, #0x20]
    *((u32*)(r0 + 0x34)) = r0;
    // ldr r0, [sp]
    *((u32*)(r0 + 0x38)) = r1;
    _s32_div_f((6 - 1), (r0 + 4));
    *((u32*)(r4 + 0x3c)) = r0;
    // ldr r0, [sp, #4]
    // ldr r1, [sp, #0x20]
    _s32_div_f();
    *((u32*)(r4 + 0x40)) = r0;
    Bg_GetXpos(*((u32*)r6), *((u32*)(r6 + 0x1c)));
    *((u32*)(r4 + 0x44)) = r0;
    Bg_GetYpos(*((u32*)r6), *((u32*)(r6 + 0x1c)));
    *((u32*)(r4 + 0x48)) = r0;
    *((u32*)(r5 + 0x28)) = 0x80;
    *((u32*)(r5 + 0x24)) = 5;
    // ldr r0, [sp]
    // sub r0, r1, r0
    *((u32*)(r5 + 0x14)) = 5;
    // ldr r0, [sp, #4]
    // sub r0, r1, r0
    *((u32*)(r5 + 0x18)) = 5;
    *((u32*)(r5 + 0x2c)) = 0xe;
    ov41_02249E60(r5, 0, 0);
}





void ov41_02249E40(void) {
    // add r0, #0xc
    // add r2, r2, r1
    // strh r2, [r0]
}





void ov41_02249E60(void) {
    // asr r0, r1, #2
    // add r0, r1, r0
    // asr r0, r0, #3
    // str r0, [sp, #0x18]
    // asr r0, r1, #2
    // add r0, r1, r0
    // asr r0, r0, #3
    // str r0, [sp, #0x14]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp]
    // add r3, sp, #0x24
    // ldr r2, [sp, #0x24]
    // str r0, [sp, #0x20]
    // str r0, [sp, #0x1c]
    // str r0, [sp]
    // ldr r0, [sp, #0x18]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x14]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x20]
    // str r7, [r4]
    // ldr r0, [sp, #0x1c]
    // str r0, [r6]
}





void ov41_02249F0C(void) {
    // bmi _02249F40
    // str r0, [r1]
}





void ov41_02249F7C(void) {
    // ldr r1, [sp, #0x3c]
    // ldr r1, [sp, #0x30]
    // str r0, [sp]
    // ldr r3, [sp, #0x38]
    // str r2, [sp, #4]
    // add r4, #0xc
    // str r4, [sp, #8]
    // str r1, [sp, #0xc]
    // str r1, [sp, #0x10]
    // str r0, [sp, #0x14]
    // str r2, [sp, #0x18]
    // ldr r2, [sp, #0x34]
    // str r0, [sp]
    // ldr r0, [sp, #0x30]
    // ldr r2, [sp, #0x34]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x40]
    // ldr r3, [sp, #0x38]
    // str r0, [sp, #8]
}





void ov41_02249FFC(void) {
    // str r1, [sp, #4]
    // ldr r0, [sp, #0x24]
    Heap_Alloc(0x14);
    // strb r0, [r2]
    // ldr r0, [sp, #0x24]
    // ldr r1, [sp, #4]
    // str r0, [sp]
    GfGfxLoader_GetCharData(r7, (0x14 - 1), 0, (r0 + 4));
    *((u32*)(r4 + 8)) = r0;
    // str r5, [r4]
    // ldr r0, [sp, #0x20]
    *((u32*)(r4 + 0xc)) = r6;
    *((u32*)(r4 + 0x10)) = r0;
    SysTask_CreateOnVWaitQueue(ov41_0224A094, r4, 0x80);
}





void ov41_0224A04C(void) {
    // str r1, [sp]
    // ldr r0, [sp, #0x1c]
    Heap_Alloc(0x14);
    // strb r0, [r2]
    // ldr r1, [sp]
    // ldr r3, [sp, #0x1c]
    GfGfxLoader_GetPlttData(r7, (0x14 - 1), r0);
    *((u32*)(r4 + 4)) = r0;
    *((u32*)(r4 + 8)) = r5;
    // ldr r0, [sp, #0x18]
    *((u32*)(r4 + 0xc)) = r6;
    *((u32*)(r4 + 0x10)) = r0;
    SysTask_CreateOnVWaitQueue(ov41_0224A0D0, r4, 0x80);
}





void ov41_0224A094(void) {
    // str r0, [sp]
}





void ov41_0224A0D0(void) {
}





void ov41_0224A118(void) {
    GF_AssertFail();
    GF_AssertFail();
    Sprite_CreateAffine(*((u32*)r4));
    // str r0, [r5]
    GF_AssertFail();
    *((u32*)(r5 + 4)) = *((u32*)(r4 + 0xc));
    *((u32*)(r5 + 8)) = *((u32*)(r4 + 8));
    *((u32*)(r5 + 0xc)) = *((u32*)(r4 + 4));
    *((u32*)(r5 + 0xc)) = ov41_0224A254;
}





void ov41_0224A15C(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x1c]
    // str r0, [sp, #0x20]
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x28]
    // str r0, [sp, #0x2c]
    // add r0, sp, #0
}





void ov41_0224A1A8(void) {
}





void ov41_0224A1C0(void) {
}





void ov41_0224A1DC(void) {
    // blx r2
}





void ov41_0224A1EC(void) {
    // add r5, #0x20
    ov41_0224A264(r0);
    ov41_0224A270(r5);
    PlaySE(0x0000067C);
    ov41_0224A258(r5);
    ov41_0224A270(r5);
    // add r5, #0x10
}





void ov41_0224A238(void) {
}





void ov41_0224A254(void) {
}





void ov41_0224A258(void) {
}





void ov41_0224A264(void) {
}





void ov41_0224A270(void) {
}





void ov41_0224A27C(void) {
    // add r0, #0x80
    // str r2, [r0]
    FontSystem_NewInit(1, 0xd);
    *((u32*)(r5 + 0x64)) = r0;
    ov41_0224A7F8(r4);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    ov41_0224A6C4(r5, 0, r4, 0x30);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, #0x6c
    ov41_0224A7E0(r5, 0, 0x30, 0x98);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0x10
    ov41_0224A6C4(r5, 1, r4, 8);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, #0x6c
    ov41_0224A7E0(r5, 1, 8, 0x98);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0x20
    ov41_0224A6C4(r5, 2, r4, 0x60);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, #0x6c
    ov41_0224A7E0(r5, 2, 0x60, 0x9c);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0x30
    ov41_0224A6C4(r5, 3, r4, 0x88);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, #0x6c
    ov41_0224A7E0(r5, 3, 0x88, 0x9c);
    FontID_Alloc(2, 0xe);
    // str r0, [sp]
    // str r0, [sp, #4]
    ov41_0224A928(r4, 0x1b, 0xd7, 0);
    // str r6, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r0, #0x40
    ov41_0224A734(r5, 4, r4, *((u32*)(r5 + 0x64)));
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, #0x6c
    ov41_0224A7E0(r5, 4, 0xb8, 0x9c);
    ov41_0224A9B0(r6);
    FontID_Release(2);
    *((u32*)(r5 + 0x60)) = 1;
    ov41_0224A888(r4);
    // add r0, #0x20
    ov41_0224A258(r5);
    // str r0, [sp]
    // add r0, #0x6c
    TouchHitboxController_Create(r5, 5, ov41_0224A60C, r5);
    *((u32*)(r5 + 0x68)) = r0;
}





void ov41_0224A3E4(void) {
    // add r4, #0x10
    // add r0, #0x54
    // add r0, #0x40
}





void ov41_0224A448(void) {
    GF_AssertFail(*((u32*)(r0 + 0x68)));
    // add r0, #0x84
    // add r0, #0x84
    // add r0, #0x84
    // strh r1, [r0]
    // add r1, #0x84
    // eor r2, r1
    // add r0, #0x86
    ov41_0224A60C(*((u16*)r5), *((u8*)(ov41_0224C094 + *((u16*)r5))), r5);
    // tst r2, r0
    // tst r2, r1
    // tst r2, r1
    // tst r2, r1
    // tst r1, r2
    // add r0, #0x86
    // strh r4, [r0]
    // add r0, #0x84
    // strh r1, [r0]
    // add r0, #0x86
    ov41_0224A60C(*((u16*)r5), 0, r5);
}





void ov41_0224A4EC(void) {
    // add r0, #0x84
    // add r0, #0x80
    System_GetTouchHeld(*((u32*)*((u32*)r0)));
    // add r4, #0x80
    // str r1, [r0]
    System_GetTouchHeld(0, 0);
    // add r4, #0x80
    // str r1, [r0]
}





void ov41_0224A54C(void) {
    // add r0, #0x80
}





void ov41_0224A580(void) {
}





void ov41_0224A5A4(void) {
    // str r0, [sp]
    // add r5, #0x10
    // ldr r0, [sp]
    // add r0, #0x40
    // str r0, [sp]
}





void ov41_0224A5D4(void) {
    // ldr r3, [sp, #0x18]
    // add r0, r5, r0
    // add r5, #0x40
    // ldr r3, [sp, #0x18]
}





void ov41_0224A60C(void) {
    // add r0, r6, r6
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0224A624: ; jump table
    ov41_0224A8B0(r2);
    ov41_0224A918(r4, (0x1a << 6), 0, r5);
    ov41_0224A1DC(r4, r5);
    // add r0, #0x10
    ov41_0224A8B0(r4);
    // add r0, #0x10
    ov41_0224A918(r4, (0x1a << 6), 0, r5);
    // add r4, #0x10
    ov41_0224A1DC(r4, r5);
    ov41_0224A1EC(r4, r6, r5);
    // add r0, r4, r0
    ov41_0224A1DC((r6 << 4), r5);
    // add r0, #0x40
    ov41_0224A8B0(r4);
    // add r0, #0x40
    ov41_0224A8D4(r4, r5);
    // add r0, #0x40
    ov41_0224A918(r4, 0x000005E2, 0, r5);
    // add r4, #0x40
    ov41_0224A1DC(r4, r5);
    GF_AssertFail();
}





void ov41_0224A6C4(void) {
    // str r1, [sp]
    // mvn r0, r0
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r2, [sp, #0xc]
    // str r2, [sp, #0x10]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x1c]
    // str r0, [sp, #0x20]
    // str r2, [sp, #0x24]
    // str r2, [sp, #0x28]
    // add r0, sp, #0x5c
    // str r0, [sp, #0x2c]
    // add r0, sp, #0x5c
    // str r0, [sp, #0x30]
    // str r0, [sp, #0x34]
    // ldr r0, [sp, #0xa0]
    // str r1, [sp, #0x54]
    // str r0, [sp, #0x38]
    // str r0, [sp, #0x50]
    // str r0, [sp, #0x58]
    // add r0, sp, #0x2c
    // str r0, [sp, #0x80]
    // str r1, [sp, #0x8c]
    // add r1, sp, #0x80
    // str r2, [sp, #0x3c]
    // str r2, [sp, #0x84]
    // str r2, [sp, #0x88]
}





void ov41_0224A734(void) {
    // str r1, [sp]
    // mvn r0, r0
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r2, [sp, #0xc]
    // str r2, [sp, #0x10]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x1c]
    // str r0, [sp, #0x20]
    // str r2, [sp, #0x24]
    // str r2, [sp, #0x28]
    // add r0, sp, #0x5c
    // str r0, [sp, #0x2c]
    // add r0, sp, #0x5c
    // str r0, [sp, #0x30]
    // ldr r0, [sp, #0xbc]
    // str r2, [sp, #0x58]
    // str r0, [sp, #0x34]
    // ldr r0, [sp, #0xc0]
    // add r2, sp, #0x2c
    // str r2, [sp, #0x80]
    // ldr r2, [sp, #0xb8]
    // str r0, [sp, #0x38]
    // str r1, [sp, #0x50]
    // str r0, [sp, #0x3c]
    // str r1, [sp, #0x54]
    // str r0, [sp, #0x84]
    // str r0, [sp, #0x88]
    // str r0, [sp, #0x9c]
    // str r1, [sp, #0x8c]
    // str r6, [sp, #0x94]
    // str r2, [sp, #0x90]
    // str r0, [sp, #0xa0]
    // str r0, [sp, #0x98]
    // ldr r0, [sp, #0xb8]
    // add r3, #0x14
    // add r1, sp, #0x80
    // str r0, [sp, #0xa4]
}





void ov41_0224A7E0(void) {
    // strb r3, [r0, r1]
    // add r1, r0, r1
    // ldr r0, [sp, #4]
    // add r0, r3, r0
    // ldr r0, [sp]
    // add r0, r2, r0
}





void ov41_0224A7F8(void) {
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // str r4, [sp, #4]
    // ldr r2, [sp, #0xc]
    // str r4, [sp]
    // str r4, [sp]
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r3, [sp, #8]
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
}





void ov41_0224A888(void) {
}





void ov41_0224A8B0(void) {
}





void ov41_0224A8D4(void) {
}





void ov41_0224A918(void) {
}





void ov41_0224A928(void) {
    NewMsgDataFromNarc(0, 0xd);
    GF_AssertFail();
    NewString_ReadMsgData(r7, r4);
    AllocWindows(0xe, 1);
    InitWindow();
    // ldr r2, [sp, #0x28]
    // ldr r3, [sp, #0x2c]
    // str r0, [sp]
    // str r0, [sp, #4]
    AddTextWindowTopLeftCorner(*((u32*)(r6 + 0x40)), r4, ((r2 << 0x18) >> 0x18), ((r3 << 0x18) >> 0x18));
    // ldr r3, [sp, #0x28]
    FontID_String_GetCenterAlignmentX(2, r5, 0, (r3 << 3));
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r4, 2, r5, r0);
    String_Delete(r5);
    DestroyMsgData(r7);
}





void ov41_0224A9B0(void) {
}





void ov41_0224A9BC(void) {
    // add r2, sp, #0
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // ldr r1, [sp]
    // add r0, r1, r0
    // str r0, [sp]
    // ldr r1, [sp, #4]
    // add r0, r1, r0
    // str r0, [sp, #4]
}





void ov41_0224A9F8(void) {
}





void ov41_0224AA08(void) {
    // tst r1, r6
    memset(0, (0x52 << 2));
    // tst r0, r6
    ov41_0224ACA4(r5, *((u32*)r4));
    // tst r1, r0
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, #0x2c
    ov41_0224AD0C(r5, *((u32*)r4), 2, 0x13);
    // tst r0, r6
    // str r0, [sp]
    // add r0, #0x38
    ov41_0224AED8(r5, *((u32*)(r4 + 4)), *((u32*)(r4 + 8)), *((u32*)(r4 + 0x10)));
    // tst r0, r6
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0xa0
    ov41_0224B118(r5, *((u32*)(r4 + 4)), *((u32*)(r4 + 8)), *((u32*)(r4 + 0x1c)));
    // tst r0, r6
    // str r0, [sp]
    // str r2, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // add r0, #0xa9
    // add r0, r5, r0
    ov41_0224AD0C(0x8b, *((u32*)r4), 2, 1);
    FillWindowPixelBuffer(*((u32*)(r5 + (0x4d << 2))), 0xf);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, #0x35
    ov41_0224AE24(*((u32*)(r5 + 0xff)), 0x1b, *((u32*)(r4 + 0x14)), 6);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, #0x35
    ov41_0224AE24(*((u32*)(r5 + 0xff)), 0x1b, *((u32*)(r4 + 0x14)), *((u32*)(r4 + 0x18)));
    DrawFrameAndWindow2(*((u32*)(r5 + (0x4d << 2))), 0, 1, 1);
    *((u32*)(r5 + 0x30)) = *((u32*)(r4 + 4));
    *((u32*)(r5 + 0x34)) = *((u32*)(r4 + 8));
    ov41_0224ACDC(*((u32*)r4), *((u32*)(r4 + 0xc)));
    Options_GetFrame(*((u32*)(r4 + 0xc)));
    // str r0, [r5, r1]
    Options_GetTextFrameDelay(*((u32*)(r4 + 0xc)), (0x4f << 2));
    // str r0, [r5, r1]
    // sub r0, #8
    // sub r1, #8
    // str r0, [r5, r1]
}





void ov41_0224AB40(void) {
    // tst r1, r2
    // str r2, [r4, r1]
    // tst r0, r1
    // str r2, [r4, r1]
    // tst r0, r1
    // add r0, #0x38
    // str r2, [r4, r1]
    // tst r0, r1
    // add r0, #0xa0
    // str r2, [r4, r1]
    // tst r1, r2
    // str r2, [r4, r1]
}





void ov41_0224ABF0(void) {
}





void ov41_0224AC08(void) {
    // tst r0, r1
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
}





void ov41_0224AC40(void) {
    // tst r0, r1
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // add r0, r5, r0
    // str r0, [sp, #0xc]
}





void ov41_0224AC80(void) {
}





void ov41_0224AC98(void) {
}





void ov41_0224ACA4(void) {
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    // str r1, [sp, #0x10]
    // str r1, [sp, #0x1c]
    // str r1, [sp, #0x20]
    // str r1, [sp, #0x2c]
    // add r1, sp, #0
    // str r2, [sp, #0x14]
    // str r2, [sp, #0x18]
    // str r2, [sp, #0x24]
    // str r2, [sp, #0x28]
}





void ov41_0224ACDC(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
}





void ov41_0224AD0C(void) {
    // str r0, [r5]
    // str r0, [sp]
    // ldr r0, [sp, #0x28]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x2c]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x30]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x34]
}





void ov41_0224AD7C(void) {
}





void ov41_0224AD84(void) {
}





void ov41_0224AD90(void) {
    FillWindowPixelBuffer(0xf);
    // ldr r0, [sp, #0x28]
    // str r0, [sp]
    // ldr r0, [sp, #0x2c]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x30]
    // str r0, [sp, #0xc]
    ov41_0224AE24(r5, r4, r6, r7);
    DrawFrameAndWindow2(r5, 0, 1, 1);
}





void ov41_0224ADD8(void) {
    FillWindowPixelBuffer(0xf);
    // ldr r0, [sp, #0x28]
    // str r0, [sp]
    // ldr r0, [sp, #0x2c]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x30]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x34]
    // str r0, [sp, #0x10]
    ov41_0224AE78(r5, r4, r6, r7);
    DrawFrameAndWindow2(r5, 0, 1, 1);
}





void ov41_0224AE24(void) {
    // ldr r0, [sp, #0x24]
    // ldr r3, [sp, #0x20]
    // str r0, [sp]
    // ldr r0, [sp, #0x2c]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x28]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
}





void ov41_0224AE78(void) {
    // ldr r4, [sp, #0x38]
    // str r3, [sp, #0x10]
    // ldr r1, [sp, #0x10]
    // str r0, [r4]
    // ldr r0, [sp, #0x2c]
    // ldr r3, [sp, #0x28]
    // str r0, [sp]
    // ldr r0, [sp, #0x34]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x30]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
}





void ov41_0224AED8(void) {
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    // str r1, [sp, #0x10]
    // str r3, [sp, #0x1c]
    // str r1, [sp, #0x14]
    // ldr r3, [sp, #0x80]
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x18]
    // add r2, sp, #0x48
    // add r0, sp, #0x48
    // str r0, [sp, #0x2c]
    // str r0, [sp, #0x40]
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x3c]
    // str r0, [sp, #0x44]
    // ldr r7, [sp, #0x24]
    // str r5, [sp, #0x28]
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x20]
    // str r0, [sp, #0x34]
    // str r1, [sp, #0x34]
    // add r0, r1, r0
    // str r0, [sp, #0x34]
    // ldr r0, [sp, #0x18]
    // add r5, r0, r1
    // str r4, [sp, #0x30]
    // str r0, [sp, #0x30]
    // add r0, sp, #0x28
    // ldr r0, [sp, #0x1c]
    // add r1, r6, r7
    // add r4, #0x12
    // ldr r0, [sp, #0x20]
    // add r7, #0xa
    // add r0, #0x12
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x24]
    // str r0, [sp, #0x24]
}





void ov41_0224AF8C(void) {
    // add r4, r7, r0
    // add r4, r7, r0
}





void ov41_0224AFD4(void) {
}





void ov41_0224AFF8(void) {
    // ldr r7, [sp, #0x3c]
    // ldr r2, [sp, #0x28]
    // add r0, r7, r2
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r6, [sp, #8]
    // str r3, [sp, #0x10]
    // str r0, [r5]
    // ldr r2, [sp, #0x2c]
    // ldr r1, [sp, #0x10]
    // add r0, r7, r2
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x38]
    // str r0, [sp, #8]
    // str r6, [sp, #0xc]
    // ldr r2, [sp, #0x30]
    // ldr r1, [sp, #0x10]
    // add r0, r7, r2
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r6, [sp, #8]
    // ldr r2, [sp, #0x34]
    // add r0, r7, r2
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r6, [sp, #8]
    // ldr r1, [sp, #0x10]
}





void ov41_0224B084(void) {
}





void ov41_0224B0B8(void) {
    // str r0, [sp, #0x2c]
    // str r0, [sp, #0x30]
    // str r0, [sp, #0x34]
    // str r0, [sp]
    // mvn r0, r0
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r6, [sp, #0x10]
    // ldr r2, [sp, #0x30]
    // str r1, [sp, #0x14]
    // ldr r3, [sp, #0x34]
    // str r1, [sp, #0x18]
    // str r1, [sp, #0x1c]
    // str r1, [sp, #0x20]
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x28]
    // ldr r1, [sp, #0x2c]
}





void ov41_0224B118(void) {
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    // str r1, [sp, #0x10]
    // str r3, [sp, #0x18]
    // str r1, [sp, #0x14]
    // ldr r3, [sp, #0x80]
    ov41_0224AFF8(r2, 0xe);
    // add r2, sp, #0x3c
    ov41_0224B0B8(r7, r5, 0);
    // add r0, sp, #0x3c
    // str r0, [sp, #0x20]
    // str r0, [sp, #0x38]
    // str r4, [sp, #0x1c]
    // str r1, [sp, #0x28]
    // add r0, r1, r0
    // str r2, [sp, #0x34]
    // str r6, [sp, #0x30]
    // str r0, [sp, #0x28]
    // str r4, [sp, #0x24]
    // str r0, [sp, #0x24]
    // add r0, sp, #0x1c
    Sprite_Create((0x67 << 0xc), (0x3a << 0xc), 2);
    *((u32*)(r5 + 0x10)) = r0;
    // add r4, #0x18
    // ldr r0, [sp, #0x18]
    *((u32*)(r7 + 0x1c)) = r0;
    *((u32*)(r7 + 0x20)) = (0x1e * r0);
    // ldr r1, [sp, #0x7c]
    *((u32*)(r7 + 0x2c)) = (0x1e * r0);
    // str r0, [r1]
    *((u32*)(*((u32*)(r7 + 0x2c)) + 8)) = r0;
    // add r0, #0x90
    // str r1, [r0]
    ov41_0224B298(r7, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r1, [sp, #0x78]
    // add r0, #0x18
    ov41_0224AD0C(r7, 0xa, 8);
    FillWindowPixelBuffer(*((u32*)(r7 + 0x18)), 0);
    // str r0, [sp]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    ov41_0224AE24(*((u32*)(r7 + 0x18)), 0x1b, 0xd7, 4);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    ov41_0224AE24(*((u32*)(r7 + 0x18)), 0x1b, 0xd7, 5);
    CopyWindowToVram(*((u32*)(r7 + 0x18)));
}





void ov41_0224B21C(void) {
}





void ov41_0224B250(void) {
}





void ov41_0224B270(void) {
    *((u32*)(r0 + 0x1c)) = *((u32*)*((u32*)(r0 + 0x2c)));
    // add r1, #0x30
    ov41_0224B374(r0, *((u32*)*((u32*)(r0 + 0x2c))));
    PlaySE(0x00000682);
}





void ov41_0224B298(void) {
    // str r0, [sp]
    // ldr r0, [sp]
    // str r0, [sp, #4]
    // ldr r1, [sp, #4]
    // ldr r0, [sp, #4]
    // ldr r0, [sp]
    // sub r0, r0, r1
    // str r0, [sp]
    // add r0, #0x90
    // add r1, #0x90
    // str r0, [r1]
}





void ov41_0224B310(void) {
    // bmi _0224B318
}





void ov41_0224B31C(void) {
    // str r1, [r0]
    // sub r1, r2, r1
}





void ov41_0224B32C(void) {
    // asr r1, r0, #0x1f
    // asr r3, r2, #0x1f
    // add r0, r0, r2
    // adc r1, r3
    // add r0, r0, r1
    // str r0, [r4]
}





void ov41_0224B374(void) {
    // str r0, [sp]
    // str r1, [sp, #4]
    // ldr r4, [sp, #4]
    // str r1, [sp, #0x10]
    // add r0, r1, r0
    // str r0, [sp, #0x10]
    // ldr r6, [sp]
    // str r0, [sp, #8]
    *((u32*)(r4 + 4)) = *((u32*)(r6 + 0x10));
    Sprite_SetAffineOverwriteMode(*((u32*)(r6 + 0x10)), 2);
    // ldr r2, [sp, #8]
    // str r5, [sp, #0xc]
    // add r2, #0xc
    // add r3, sp, #0xc
    // str r0, [sp, #0xc]
    // ldmia r3!, {r0, r1}
    // str r2, [sp, #8]
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // add r5, #0x18
    // ldr r0, [sp]
    // sub r0, r0, r1
    // asr r1, r0, #0x1f
    _ll_mul((0xa << 0xc), *((u32*)(*((u32*)r3) + 0x1c)), 0x00000266, 0);
    // add r4, r0, r2
    // adc r1, r3
    // add r4, r1, r0
    // ldr r0, [sp, #4]
    // add r0, #0x24
    ov41_0224B31C(((2 << 0xa) << 1), (1 << 0xc), (1 << 0xc), 0x10);
    // asr r1, r4, #0x1f
    _ll_mul(r4, (6 << 0xe), 0);
    // add r3, r0, r3
    // adc r1, r2
    // sub r4, r1, r0
    // ldr r0, [sp, #4]
    // add r0, #0x38
    ov41_0224B31C((6 << 0xe), r4, 0, 0x10);
    // ldr r0, [sp, #4]
    // add r0, #0x4c
    ov41_0224B31C(r4, 0, 0x10);
    // ldr r0, [sp, #4]
    // str r1, [r0]
}





void ov41_0224B450(void) {
    // add r0, #0x24
    // add r0, #0x38
    // add r0, #0x4c
    // add r1, sp, #0xc
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // add r1, sp, #0xc
    // add r6, #0xc
    // add r3, sp, #0
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // ldr r1, [sp]
    // sub r0, r1, r0
    // str r0, [sp]
    // ldr r1, [sp, #4]
    // sub r0, r1, r0
    // str r0, [sp, #4]
    // add r6, #0x18
    // add r3, sp, #0
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // ldr r1, [sp, #4]
    // sub r0, r1, r0
    // str r0, [sp, #4]
    // str r0, [r5]
}





void ov41_0224B4E8(void) {
    // stmia r0!, {r1}
    // add r3, #0x48
    // str r3, [sp]
    // add r1, #0x89
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // add r1, sp, #0
    // str r2, [sp, #0xc]
}





void ov41_0224B50C(void) {
}





void ov41_0224B518(void) {
}





void ov41_0224B530(void) {
}





void ov41_0224B554(void) {
    // sub r0, #0x48
    // add r0, r4, r0
}





void ov41_0224B57C(void) {
    // str r1, [r4, r0]
    // sub r0, #8
    // add r0, r4, r0
}





void ov41_0224B5C8(void) {
}





void ov41_0224B5D0(void) {
    // str r1, [r0, r2]
}





void ov41_0224B5D8(void) {
    // add r0, r5, r2
    // str r6, [sp]
    // add r1, #0xac
    // add r2, #0xb0
    // sub r3, r3, r4
    // sub r3, r3, r6
    // str r4, [r5, r0]
    // str r6, [r5, r0]
}





void ov41_0224B630(void) {
    // str r1, [r4, r0]
    // str r0, [r4, r1]
    // add r0, r4, r0
    // str r0, [r4, r1]
    // add r0, r4, r1
    // sub r1, #0x88
    // add r1, r4, r1
    // str r1, [r4, r0]
    // str r1, [r4, r0]
}





void ov41_0224B6CC(void) {
    NARC_New(0x1a, *((u32*)(r1 + 0x68)));
    // str r0, [r5, r1]
    // add r1, sp, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    ov41_02246518(r5, (6 << 6), *((u32*)(r4 + 0x68)));
    // add r1, sp, #0x10
    ov41_0224B938(r5, r4, *((u32*)(r4 + 0x68)));
    // add r1, sp, #0x10
    ov41_02246250(r5);
    // add r0, sp, #0x10
    ov41_022463D4();
}





void ov41_0224B720(void) {
    // add r1, r0, r3
    // str r1, [sp]
    // sub r1, #0x14
    // sub r1, #0xc
    // add r1, r2, r1
    // sub r2, #0x10
    // sub r2, #8
    // add r2, r4, r2
}





void ov41_0224B754(void) {
    // ldr r0, [r4, r0]
    // ldr r0, [r4, r0]
}





void ov41_0224B780(void) {
    // add r2, sp, #0x28
    // stmia r3!, {r0, r1}
    // stmia r3!, {r0, r1}
    // stmia r3!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // str r0, [sp, #0x28]
    // str r0, [sp, #0x2c]
    // str r0, [sp, #0x30]
    // str r0, [sp, #0x34]
    // str r0, [sp, #0x38]
    // str r0, [sp, #0x3c]
    // str r1, [sp, #0x40]
    // sub r1, #8
    // add r1, r5, r1
    // str r1, [sp, #0x44]
    // str r1, [sp, #0x48]
    // add r0, r5, r0
    // str r4, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r5, r1
    // add r1, #0xa4
    // add r2, sp, #0x18
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // str r0, [sp]
    // ldr r1, [sp, #0xc]
    // ldr r2, [sp, #0x10]
    // ldr r3, [sp, #0x14]
    // add r0, r5, r0
}





void ov41_0224B848(void) {
    // add r0, r0, r1
}





void ov41_0224B85C(void) {
    // add r0, r4, r0
    // add r0, r4, r0
}





void ov41_0224B878(void) {
    // add r0, r0, r1
}





void ov41_0224B888(void) {
    // str r2, [r4, r1]
    // str r5, [r4, r2]
    // add r2, #8
    // str r5, [r4, r2]
    // add r2, #0xc
    // str r5, [r4, r2]
    // add r5, #0x14
    // str r2, [r4, r5]
    // add r5, #0x18
    // str r2, [r4, r5]
    // add r5, #0x1c
    // str r2, [r4, r5]
    // add r1, #0x10
    // strh r2, [r4, r1]
    ov41_0224B5D8(*((u32*)(r1 + 0x60)), *((u32*)(r1 + 0x64)), r1);
    // strh r1, [r4, r0]
}





void ov41_0224B8DC(void) {
}





void ov41_0224B8F0(void) {
    // str r0, [r5]
    // add r6, #0x54
    // add r1, r5, r1
    // str r0, [r6]
}





void ov41_0224B938(void) {
}





void ov41_0224B958(void) {
    // str r0, [sp, #4]
    // str r0, [sp, #0x10]
    // str r2, [sp, #8]
    // str r3, [sp, #0xc]
    // str r0, [sp]
    // ldr r1, [sp, #4]
    // ldr r3, [sp, #0xc]
    // add r1, r1, r5
    // ldr r0, [sp, #4]
    // str r1, [r0, r5]
    // ldr r0, [sp, #0x10]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #8]
    // ldr r0, [sp, #0x10]
    // str r0, [sp]
    // ldr r0, [sp, #4]
    // ldr r3, [sp, #0xc]
    // ldr r0, [sp, #4]
    // str r1, [r0]
}





BOOL AccessoryPortrait_Init(void) {
    Heap_Create(3, 0xd, (2 << 0x10));
    Heap_Create(3, 0xe, (1 << 0x12));
    OverlayManager_CreateAndGetData(r4, (0x1a << 4), 0xd);
    memset(0, (0x1a << 4));
    Main_SetVBlankIntrCB(ov41_0224BBF0, r5);
    HBlankInterruptDisable();
    OverlayManager_GetArgs(r4);
    sub_0202B9B8(*((u32*)r0), *((u32*)(r0 + 4)));
    // str r0, [r5]
    *((u32*)(r5 + 8)) = *((u32*)(r4 + 4));
    *((u32*)(r5 + 0xc)) = *((u32*)(r4 + 8));
    ov41_02246130(*((u32*)(r4 + 8)));
    *((u8*)(gSystem + 9)) = 0;
    GfGfx_SwapDisplay(gSystem, 0);
    // add r0, #0x14
    ov41_02246670(r5, 0xe);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, sp, #0
    ov41_0224B530(0xe, *((u32*)r5));
    *((u32*)(r5 + 0x10)) = r0;
    ov41_0224BC04(r5);
    ov41_0224BCA4(r5);
    ov41_0224BCF0(r5);
    ov41_0224BDCC(r5);
    ov41_0224BE5C(r5);
}





BOOL AccessoryPortrait_Main(void) {
    OverlayManager_GetData();
    Thunk_G3X_Reset();
    NNS_G2dSetupSoftwareSpriteCamera();
    ov41_0224B554(*((u32*)(r5 + 0x10)));
    RequestSwap3DBuffers(0, 0);
    // add r5, #0x14
    ov41_022466C8(r5);
    // add r0, r1, r1
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0224BB08: ; jump table
    // str r0, [r4]
    // str r0, [sp]
    // str r2, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 5, 1, 0);
    // str r0, [r4]
    IsPaletteFadeFinished((*((u32*)r4) + 1));
    // str r0, [r4]
    // tst r0, r1
    System_GetTouchNew(3, *((u32*)(gSystem + 0x48)));
    PlaySE(0x000005DD);
    // str r0, [r4]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 2, 0, 0);
    // str r0, [r4]
    IsPaletteFadeFinished((*((u32*)r4) + 1));
}





BOOL AccessoryPortrait_Exit(void) {
    // add r4, #0x14
}





void ov41_0224BBF0(void) {
}





void ov41_0224BC04(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // add r3, sp, #0x10
    // ldr r2, [sp, #0x10]
    // str r3, [sp]
    // str r0, [sp, #4]
    // add r2, #0xc
    // str r0, [sp, #8]
    // ldr r1, [sp, #0x10]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
}





void ov41_0224BCA4(void) {
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
}





void ov41_0224BCF0(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, #0x14
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0x14
    // str r0, [sp]
    // add r0, #0x14
    // str r0, [sp]
    // add r0, #0x14
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, #0x14
    // str r0, [r4, r1]
}





void ov41_0224BD8C(void) {
    // add r0, #0x14
    // add r0, #0x14
    // add r0, #0x14
    // add r0, #0x14
}





void ov41_0224BDCC(void) {
    // str r0, [r4, r1]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
}





void ov41_0224BE34(void) {
    // ldr r0, [r4, r0]
    // ldr r0, [r4, r0]
    // ldr r0, [r4, r0]
}





void ov41_0224BE5C(void) {
    // ldr r0, [r4, r0]
    // ldr r0, [r4, r0]
}





void ov41_0224BE80(void) {
    NewMsgDataFromNarc(0, 0x1b, 0xd7, 0xd);
    // str r0, [sp, #0x10]
    GF_AssertFail();
    MessageFormat_New(0xd);
    Sprite_SetAnimCtrlSeq(*((u32*)(r5 + (0x66 << 2))), 5);
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x1c]
    // add r1, sp, #0x14
    Sprite_SetMatrix(*((u32*)(r5 + (0x66 << 2))));
    String_New(0xc, 0xd);
    sub_0202BE60(*((u32*)r5), r0);
    FontID_String_GetWidth(0, r7, 0);
    // str r0, [sp]
    // add r3, r4, r3
    // asr r4, r3, #1
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // sub r3, r3, r4
    AddTextPrinterParameterizedWithColor(*((u32*)(r5 + (0x67 << 2))), 0, r7, 0x80);
    String_Delete(r7);
    sub_0202BE98(*((u32*)r5));
    BufferECWord(r6, 0, r0);
    String_New(0xc8, 0xd);
    // ldr r0, [sp, #0x10]
    NewString_ReadMsgData(0x2d);
    StringExpandPlaceholders(r6, r4, r0);
    FontID_String_GetWidth(0, r4, 0);
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r5, r3, r5
    // asr r5, r5, #1
    // sub r3, r3, r5
    AddTextPrinterParameterizedWithColor(*((u32*)(r5 + (0x67 << 2))), 0, r4, 0x80);
    String_Delete(r4);
    String_Delete(r7);
    // ldr r0, [sp, #0x10]
    DestroyMsgData();
    MessageFormat_Delete(r6);
}




