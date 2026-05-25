/* Decompiled from asm/overlay_15.s */
#include "global.h"

BOOL Bag_Init(void) {
    Main_SetVBlankIntrCB(0, 0);
    HBlankInterruptDisable();
    GfGfx_DisableEngineAPlanes();
    GfGfx_DisableEngineBPlanes();
    // and r2, r1
    // str r2, [r0]
    // add r0, #0x50
    // and r1, r2
    // str r1, [r3]
    // strh r1, [r0]
    // add r3, #0x50
    // strh r1, [r3]
    Heap_Create(3, 6, (0x42 << 0xc), 0x04001000);
    OverlayManager_CreateAndGetData(r5, 0x0000094C, 6);
    memset(0, 0x0000094C);
    OverlayManager_GetArgs(r5);
    // str r0, [r4, r1]
    BagApp_GetSaveStructPtrs(r4, (0x8d << 2));
    BgConfig_Alloc(6);
    // str r0, [r4]
    PlayerProfile_GetTrainerGender(*((u32*)(r4 + (0x8f << 2))));
    // strb r0, [r4, r1]
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    BeginNormalPaletteFade(2, 3, 3, 0);
    SetKeyRepeatTimers(3, 8);
    ov15_021F9DB4(r4);
    ov15_021F9CBC(r4);
    ov15_021FA008(r4);
    ov15_021F9D28(r4);
    ov15_021FA620(r4);
    ov15_021F9984();
    ov15_021F99A4(*((u32*)r4));
    ov15_021F9AE4(r4);
    sub_020210BC();
    sub_02021148(4);
    ov15_021FE020(r4);
    TextFlags_SetCanTouchSpeedUpPrint(1);
    ov15_021FE4C8(r4);
    ov15_021FE528(r4);
    ov15_021FEA5C(r4);
    ov15_021FE874(r4);
    ov15_021F9F08(r4);
    ov15_021FF29C(r4, 0);
    // add r0, #0x64
    // add r0, #0xa
    // add r1, #8
    // add r0, r0, r2
    // add r1, r1, r2
    // add r2, r3, r2
    ov15_021FA044(*((u32*)(r4 + (0x8d << 2))), *((u32*)(r4 + (0x8d << 2))), *((u8*)((*((u8*)*((u32*)(r4 + (0x8d << 2)))) * 0xc) + 0xd)), *((u32*)(r4 + (0x8d << 2))));
    // add r0, #0x64
    // add r0, #0xa
    // add r1, #8
    // add r0, r0, r2
    // add r1, r1, r2
    // add r2, r3, r2
    ov15_021FA070(*((u32*)(r4 + (0x8d << 2))), *((u32*)(r4 + (0x8d << 2))), *((u8*)((*((u8*)*((u32*)(r4 + (0x8d << 2)))) * 0xc) + 0xd)), 6);
    ov15_021FF850(r4);
    ov15_021FA074(r4);
    ov15_021FD574(r4, 0, r0, 0);
    // add r1, #0x64
    // add r1, r3, r1
    // ldrsh r1, [r1, r2]
    // sub r2, #0xb
    ov15_021FF364(r4, (0xc * *((u8*)*((u32*)(r4 + (0x8d << 2))))), 0xa, 0);
    // add r1, #0x64
    ov15_02200030(r4, *((u8*)*((u32*)(r4 + (0x8d << 2)))));
    // add r2, #0x64
    ov15_021FD404(r4, 1, *((u8*)*((u32*)(r4 + (0x8d << 2)))));
    // add r0, #0x64
    // add r3, r3, r2
    // ldrsh r2, [r3, r2]
    ov15_021FF6BC(r4, *((u8*)(*((u32*)(r4 + (0x8d << 2))) + 0xd)), 0xa, 0);
    ov15_021FA074(r4);
    // add r5, #0x64
    // add r1, r1, r3
    ov15_02200140(r4, (r5 + 4), r0, 1);
    // add r0, #0x64
    // add r0, r2, r0
    // add r0, #8
    // str r0, [r4, r1]
    ov15_021FFECC(r4, *((u32*)(r4 + 0x00000644)), *((u32*)(r4 + (0x8d << 2))));
    ov15_021FA170(r4);
    // add r0, #0x65
    // add r0, #0xfc
    ov15_021FF1E0(r4);
    ov15_021FD93C(r4);
    Main_SetVBlankIntrCB(ov15_021F995C, r4);
    Sound_SetSceneAndPlayBGM(0x33, 0, 0);
    sub_0203A964();
    // strh r0, [r2]
    ToggleBgLayer(4, 1, 0x04000304);
}





BOOL Bag_Main(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _021F9624: ; jump table
    // add r0, #0x65
    // str r0, [r4]
    // str r0, [r4]
    // str r0, [r4]
    // str r0, [r4]
    // str r0, [r4]
    // add r0, #0x65
    // str r0, [r4]
    // str r0, [r4]
    // str r0, [r4]
    // str r0, [r4]
    // str r0, [r4]
    // str r0, [r4]
    // str r0, [r4]
    // str r0, [r4]
    // str r0, [r4]
    // str r0, [r4]
    // str r0, [r4]
    // str r0, [r4]
    // str r0, [r4]
    // str r0, [r4]
    // str r0, [r4]
    // str r0, [r4]
    // str r0, [r4]
    // str r0, [r4]
    // str r0, [r4]
    // str r0, [r4]
    // str r0, [r4]
    // str r0, [r4]
    // str r0, [r4]
    // str r0, [r4]
    // str r0, [r4]
    // str r0, [r4]
    // str r0, [r4]
    // str r0, [r4]
    // str r0, [r4]
    // str r0, [r4]
    // str r0, [r4]
    // str r0, [r4]
    // mvn r1, r1
    // str r0, [r4]
    // str r0, [r4]
    // str r0, [r4]
    // str r0, [r4]
    // str r0, [r4]
    // str r0, [r4]
}





BOOL Bag_Exit(void) {
    OverlayManager_GetData();
    ov15_021FDC6C();
    ov15_021FF894(r4);
    Heap_Free(*((u32*)(r4 + 0x0000068C)));
    Heap_Free(*((u32*)(r4 + (0x69 << 4))));
    ov15_021FA0D8(r4);
    ov15_021F9EA8(r4);
    ov15_021FE154(r4);
    ov15_021F9A8C(*((u32*)r4));
    sub_02021238();
    GF_DestroyVramTransferManager();
    ov15_021FEB64(r4);
    ov15_021FE504(r4);
    ov15_021FE8A4(r4);
    ov15_021FA028(r4);
    String_Delete(*((u32*)(r4 + 0x000005E4)));
    DestroyMsgData(*((u32*)(r4 + (0xbf << 2))));
    DestroyMsgData(*((u32*)(r4 + (0xbe << 2))));
    DestroyMsgData(*((u32*)(r4 + (0x2f << 4))));
    MessagePrinter_Delete(*((u32*)(r4 + (0xbb << 2))));
    MessageFormat_Delete(*((u32*)(r4 + (0xbd << 2))));
    NARC_Delete(*((u32*)(r4 + (0x91 << 2))));
    OverlayManager_FreeData(r5);
    sub_02004B10();
    Main_SetVBlankIntrCB(0, 0);
    Heap_Destroy(6);
}





void BagApp_GetSaveStructPtrs(void) {
    // str r0, [r4, r1]
    // str r0, [r4, r1]
    // sub r1, #8
    // str r0, [r4, r1]
}





void BagApp_GetSaveRoamers(void) {
    // ldr r0, [r0, r1]
    // bx r3
    // _021F9938: .word Save_Roamers_Get
}





void BagApp_GetRepelStepCountAddr(void) {
}





void BagApp_SetFlute(void) {
}





void ov15_021F995C(void) {
    DoScheduledBgGpuUpdates(*((u32*)r0));
    GF_RunVramTransferTasks();
    SpriteSystem_TransferOam();
    // str r0, [r3, r1]
}





void ov15_021F9984(void) {
}





void ov15_021F99A4(void) {
    // add r3, sp, #4
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    SetBothScreensModesAndDisable(r3, r3);
    InitBgFromTemplate(r4, 1, ov15_022006CC, 0);
    InitBgFromTemplate(r4, 2, ov15_022006E8, 0);
    InitBgFromTemplate(r4, 3, ov15_02200704, 0);
    BgClearTilemapBufferAndCommit(r4, 1);
    BgClearTilemapBufferAndCommit(r4, 3);
    BG_ClearCharDataRange(1, 0x20, 0, 6);
    InitBgFromTemplate(r4, 4, ov15_02200720, 0);
    InitBgFromTemplate(r4, 5, ov15_0220073C, 0);
    InitBgFromTemplate(r4, 6, ov15_02200758, 0);
    InitBgFromTemplate(r4, 7, ov15_02200774, 0);
    BgClearTilemapBufferAndCommit(r4, 4);
    BgClearTilemapBufferAndCommit(r4, 7);
    BG_ClearCharDataRange(4, 0x20, 0, 6);
    BG_ClearCharDataRange(7, 0x20, 0, 6);
    // str r1, [sp]
    G2x_SetBlendAlpha_(0x04000050, 0, 8, 0);
}





void ov15_021F9A8C(void) {
}





void ov15_021F9AE4(void) {
    NARC_New(0xf, 6);
    // str r0, [r4, r1]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharData(0xf, 7, *((u32*)r4), 2);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnData(0xf, 0x36, *((u32*)r4), 2);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnData(0xf, 0x5e, *((u32*)r4), 3);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnData(0xf, 0x5d, *((u32*)r4), 3);
    // str r2, [sp]
    // str r0, [sp, #4]
    GfGfxLoader_GXLoadPal(0xf, 8, 0, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    GfGfxLoader_GXLoadPal(0xf, 0x11, 0, (0x1a << 4));
    LoadFontPal1(0, (0x16 << 4), 6);
    // str r0, [sp]
    // str r0, [sp, #4]
    LoadUserFrameGfx1(*((u32*)r4), 1, 0x000003F7, 0xe);
    Options_GetFrame(*((u32*)(r4 + (9 << 6))));
    // str r0, [sp]
    // str r0, [sp, #4]
    LoadUserFrameGfx2(*((u32*)r4), 1, 0x000003D9, 0xc);
    // str r3, [sp]
    // str r0, [sp, #4]
    GfGfxLoader_GXLoadPal(0xf, 0x26, 4, 0);
    LoadFontPal1(4, (0x16 << 4), 6);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    GfGfxLoader_LoadCharData(0xf, 0x2e, *((u32*)r4), 6);
    // add r2, r4, r2
    GfGfxLoader_GetPlttData(0xf, 0x28, 0x00000694, 6);
    // str r0, [r4, r2]
    // add r2, #0xc
    // add r2, r4, r2
    GfGfxLoader_GetPlttData(0xf, 0x29, 0x0000068C, 6);
    // str r0, [r4, r1]
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r3, #0xfc
    GfGfxLoader_GXLoadPal(0xf, 8, 4, 4);
    Options_GetFrame(*((u32*)(r4 + (9 << 6))));
    // str r0, [sp]
    // str r0, [sp, #4]
    LoadUserFrameGfx2(*((u32*)r4), 4, 0x000003E2, 0xc);
}





void ov15_021F9C78(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
}





void ov15_021F9CBC(void) {
    NewMsgDataFromNarc(0, 0x1b, 0xa, 6);
    // str r0, [r4, r1]
    MessagePrinter_New(1, 2, 0, 6);
    // str r0, [r4, r1]
    MessageFormat_New(6, (0xbb << 2));
    // str r0, [r4, r1]
    NewMsgDataFromNarc(0, 0x1b, 0xde, 6);
    // str r0, [r4, r2]
    // sub r2, #0xa
    NewMsgDataFromNarc(0, 0x1b, (0xbe << 2), 6);
    // str r0, [r4, r1]
    String_New((1 << 8), 6);
    // str r0, [r4, r1]
}





void ov15_021F9D28(void) {
    // strb r1, [r0, r2]
    // add r5, r6, r5
    // strb r5, [r0, r4]
}





void ov15_021F9D60(void) {
    // add r0, #0x64
    // add r0, r2, r0
}





void ov15_021F9D8C(void) {
    // bx r3
    // nop
    // _021F9D98: .word ReadMsgDataIntoString
}





void ov15_021F9D9C(void) {
}





void ov15_021F9DB4(void) {
    // add r1, #0x64
    // strb r5, [r1]
    // add r3, r4, r0
    // add r0, #0x64
    // strb r2, [r0]
    // add r6, r4, r0
    // add r2, sp, #0
    // add r2, #1
    // add r3, sp, #0
    // add r0, sp, #0
    // add r0, sp, #0
    // add r5, r4, r3
    // add r0, #0x64
    // strb r1, [r0]
}





void ov15_021F9EA8(void) {
    // str r0, [sp]
    // ldrsh r3, [r5, r7]
    // add r5, #0xc
    // add r1, #0x64
    // ldr r1, [sp]
    // add r1, r1, r3
}





void ov15_021F9F08(void) {
    // str r0, [sp]
    // add r0, #0x64
    // add r4, r2, r0
    // ldr r0, [sp]
    // str r0, [sp, #4]
    // add r1, r0, r5
    // ldr r1, [sp]
    // ldr r2, [sp, #4]
    ov15_021F9D9C(*((u32*)(*((u8*)(r4 + 8)) + (0xbf << 2))), *((u32*)((*((u32*)(r0 + (0x8d << 2))) + 4) + (0x35 << 4))), *((u16*)(*((u32*)r4) + 0)), 6);
    // strh r1, [r7, r0]
    // ldr r0, [sp, #4]
    // str r0, [sp, #4]
    *((u8*)(r4 + 9)) = (r6 + 1);
    // ldr r0, [sp]
    // str r0, [sp, #8]
    // add r1, r0, r5
    // ldr r1, [sp]
    // ldr r2, [sp, #8]
    ov15_021F9D8C(*((u32*)(*((u8*)(r4 + 8)) + (0xbe << 2))), *((u32*)(r2 + (0x35 << 4))), *((u16*)(*((u32*)r4) + 0)), 6);
    // strh r1, [r7, r0]
    // ldr r0, [sp, #8]
    // str r0, [sp, #8]
    *((u8*)(r4 + 9)) = (r6 + 1);
    _s32_div_f((*((u8*)(r4 + 9)) - 1), 6);
    // ldrsh r0, [r4, r0]
    *((u16*)(r4 + 6)) = (6 * r0);
}





void ov15_021FA008(void) {
    // str r0, [r5, r6]
}





void ov15_021FA028(void) {
}





void ov15_021FA044(void) {
    // ldrsh r3, [r4, r0]
    // add r0, r3, r0
    // strh r1, [r4]
    // ldrsh r1, [r4, r0]
    // strh r0, [r4]
}





void ov15_021FA070(void) {
}





void ov15_021FA074(void) {
    // add r0, #0x64
    // add r2, r2, r0
    // ldrsh r0, [r2, r0]
    // sub r0, r1, r0
}





void ov15_021FA098(void) {
    _s32_div_f(*((u8*)(r0 + 0x00000672)), 6);
    // add r1, #0x64
    // add r2, r5, r1
    // ldrsh r3, [r2, r1]
    _s32_div_f(r4, 6, (r0 * 6));
}





void ov15_021FA0D8(void) {
    // str r2, [r0, r1]
}





void ov15_021FA0E4(void) {
    // sub r1, #8
    // add r0, #0x64
    // add r0, r3, r0
}





void ov15_021FA104(void) {
    // sub r2, #0xe
}





void ov15_021FA12C(void) {
    // add r1, #0x64
    // add r1, r3, r1
    // ldrsh r4, [r1, r3]
    // add r3, r4, r0
    // sub r3, #8
}





void ov15_021FA170(void) {
    ov15_021FA12C(0x00000644, *((u32*)(r0 + 0x00000644)));
    ov15_021FECA0(r4, (r4 + 4), r0);
    ov15_021FECC4(r4, (r4 + 4));
    ov15_021FECD8(r4, (r4 + 4));
    ov15_021FECC4(r4, (r4 + 4));
}





void ov15_021FA1BC(void) {
    // tst r2, r3
    // str r1, [r5, r0]
    // tst r2, r3
    // str r1, [r5, r0]
    // tst r6, r2
    // str r1, [sp]
    // add r2, sp, #0xc
    // str r4, [sp, #4]
    ov15_021FA73C(0x00000644, 0xe, 0x20, 1);
    // sub r2, #0x21
    ov15_021FA6C0();
    // str r0, [r5, r1]
    // str r3, [r5, r0]
    // tst r3, r2
    // str r1, [sp]
    // add r2, sp, #8
    // add r2, #3
    // str r4, [sp, #4]
    ov15_021FA73C(0x00000644, 0xf, *((u8*)(ov15_02200643 + (*((u32*)(r5 + 0x00000644)) << 2))), 1);
    ov15_021FA6C0(1);
    // str r0, [r5, r1]
    // str r2, [r5, r0]
    // tst r1, r3
    // sub r2, #0x11
    // add r1, #0x64
    ov15_021FA6C0(0x00000644, *((u8*)*((u32*)(r5 + (0x8d << 2)))), *((u32*)(r5 + 0x00000644)), *((u32*)(0x00000644 + 0x48)));
    // str r0, [r5, r1]
    ov15_021FFECC(r5, *((u32*)(r5 + 0x00000644)));
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r2, sp, #8
    // add r2, #2
    ov15_021FA73C(r5, *((u32*)(r5 + 0x00000644)), 1);
    // add r1, #0x64
    // mvn r2, r2
    ov15_021FA6C0(r5, *((u8*)*((u32*)(r5 + (0x8d << 2)))), 0);
    // str r0, [sp]
    // add r2, sp, #8
    // str r0, [sp, #4]
    // add r2, #2
    ov15_021FA73C(r5, r0, 1);
    // add r2, #0xf0
    // tst r1, r2
    // add r1, #0x64
    ov15_021FA6C0(*((u8*)*((u32*)(r5 + (0x8d << 2)))), 1);
    // str r0, [r5, r1]
    ov15_021FFECC(r5, *((u32*)(r5 + 0x00000644)));
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r2, sp, #8
    // add r2, #1
    ov15_021FA73C(r5, *((u32*)(r5 + 0x00000644)), 1);
    // add r1, #0x64
    ov15_021FA6C0(r5, *((u8*)*((u32*)(r5 + (0x8d << 2)))), 1);
    // str r0, [sp]
    // add r2, sp, #8
    // str r0, [sp, #4]
    // add r2, #1
    ov15_021FA73C(r5, r0, 1);
    // add r0, #0x64
    // str r0, [r5, r1]
    PlaySE(0x000005DC, 0x00000644);
    ov15_021FFECC(r5, *((u32*)(r5 + 0x00000644)));
    ov15_021FA0E4(r5, *((u32*)(r5 + 0x00000644)));
    ov15_021FA170(r5);
    // add r0, sp, #8
    // strb r1, [r0]
    ov15_021FAC2C(r5, 0);
    // mvn r0, r0
    ov15_021FA104(r5, r0);
    ov15_021FA68C(r5, r4);
    // mvn r1, r1
    // str r4, [r5, r1]
    ov15_021FFECC(r5, *((u32*)(r5 + 0x00000644)));
    // str r4, [r5, r1]
    ov15_021FFECC(r5, *((u32*)(r5 + 0x00000644)));
    ov15_021FA0E4(r5, *((u32*)(r5 + 0x00000644)));
    // str r0, [sp]
    // add r2, sp, #8
    // str r3, [sp, #4]
    ov15_021FA73C(r5, r4, 1);
    // tst r0, r3
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r2, sp, #8
    ov15_021FA73C(r5, *((u32*)(r5 + 0x00000644)), 1);
    ov15_021FA0E4(r5, *((u32*)(r5 + 0x00000644)));
    // tst r1, r0
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r2, sp, #8
    ov15_021FA73C(r5, 0x10);
    ov15_021FD774(r5, 0);
    ov15_021FA0E4(r5, *((u32*)(r5 + 0x00000644)));
    // add r0, sp, #8
    ov15_021FD810(r5, 0x14, 0x29, 0x1b);
}





void ov15_021FA4F8(void) {
    // add r1, #0x64
    // add r4, r6, r7
    ov15_021FD574(2, 0, 0);
    // ldrsh r1, [r4, r1]
    // sub r2, #8
    ov15_021FF4EC(r5, 6, *((u32*)(r5 + 0x00000644)));
    // sub r1, #8
    ov15_022002B4(r5, *((u32*)(r5 + 0x00000644)));
    ov15_021FB14C(r5);
    // ldrsh r3, [r4, r0]
    // add r2, r3, r2
    // sub r2, #8
    // add r1, #0x66
    // strh r2, [r1]
    // ldrsh r3, [r4, r2]
    // add r2, r3, r2
    // sub r2, #8
    // add r1, r1, r2
    // add r0, #0x3e
    // strh r1, [r5, r0]
}





void ov15_021FA578(void) {
    // add r0, #0x64
    // add r4, r3, r0
    // ldrsh r0, [r4, r0]
    *((u16*)(r4 + 6)) = (6 + 6);
    *((u16*)(r4 + 6)) = 0;
    // ldrsh r0, [r4, r1]
    // bmi _021FA5B4
    *((u16*)(r4 + 6)) = (0 - 6);
    _s32_div_f((*((u8*)(r4 + 9)) - 1), 6, *((u8*)*((u32*)(r0 + (0x8d << 2)))), (*((u32*)(r0 + (0x8d << 2))) + 4));
    *((u16*)(r4 + 6)) = (6 * r0);
    ov15_021FAD80(r5, r4);
    ov15_021FFF34(r5, *((u32*)(r5 + 0x0000066C)));
    ov15_021FA6F4(r5, r4);
    ov15_021FA170(r5);
    // add r0, #0x65
}





void ov15_021FA620(void) {
    // sub r0, r0, r1
    _s32_div_f(0x5a, (*((u8*)(r0 + 0x00000614)) + 1), *((u8*)(r0 + 0x00000614)));
    // strb r1, [r4, r0]
    // strb r1, [r4, r0]
}





void ov15_021FA650(void) {
    // tst r1, r2
    // str r4, [r3]
    // str r1, [r3]
    ov15_021FD574(1, *((u32*)_02201300), *((u32*)_02201480));
}





void ov15_021FA68C(void) {
    // add r0, r5, r4
    // add r2, #0xc
    // add r4, #0xc
    // mvn r0, r0
}





void ov15_021FA6C0(void) {
    // add r5, r5, r6
    // bpl _021FA6D2
    // mvn r1, r1
}





void ov15_021FA6F4(void) {
    // ldrsh r1, [r4, r2]
    // ldrsh r2, [r4, r2]
}





void ov15_021FA73C(void) {
    // add r2, r1, r1
    // add r2, pc
    // asr r2, r2, #0x10
    // add pc, r2
    // _021FA756: ; jump table
    ov15_021FA68C((*((u16*)(r2 + 6)) << 0x10));
    // add r1, #0x64
    // ldr r1, [sp, #0x1c]
    // add r2, #0x64
    // strb r0, [r2]
    ov15_021F9F08(r4, *((u8*)*((u32*)(r4 + (0x8d << 2)))), *((u32*)(r4 + (0x8d << 2))));
    // add r0, #0x64
    // add r5, r2, r0
    ov15_021FA074(r4, *((u8*)*((u32*)(r4 + (0x8d << 2)))), (*((u32*)(r4 + (0x8d << 2))) + 4));
    ov15_021FD574(r4, 0, r0, 0);
    // ldrsh r1, [r5, r2]
    ov15_021FF364(r4, (6 - 7), 0);
    // add r1, #0x64
    ov15_02200030(r4, *((u8*)*((u32*)(r4 + (0x8d << 2)))));
    // ldrsh r2, [r5, r2]
    ov15_021FF6BC(r4, *((u8*)(r5 + 9)), 6, 0);
    ov15_021FA074(r4);
    ov15_02200140(r4, r5, r0, 1);
    // add r2, #0x64
    ov15_021FD404(r4, 1, *((u8*)*((u32*)(r4 + (0x8d << 2)))));
    PlaySE(0x000005DC);
    ov15_021FA170(r4);
    ov15_021FA0E4(r4, *((u32*)(r4 + 0x00000644)));
    ov15_021FDF88(r4);
    // add r1, #0x64
    // add r0, r4, r0
    ov15_021FDAF4(0x00000808, (*((u8*)*((u32*)(r4 + (0x8d << 2)))) + 1), 7);
    // sub r1, #8
    // add r3, #0x64
    // add r3, r0, r3
    // ldrsh r0, [r3, r0]
    // add r0, r0, r1
    // add r2, #0x66
    // strh r0, [r2]
    // strb r6, [r7]
    PlaySE(0x000005DC, *((u32*)(0xc * *((u8*)*((u32*)(r4 + (0x8d << 2)))))), *((u32*)(r4 + (0x8d << 2))), (0xc * *((u8*)*((u32*)(r4 + (0x8d << 2))))));
    ov15_021FA170(r4);
    // add r0, #0x64
    // add r0, r2, r0
    PlaySE(0x000005DC, *((u8*)*((u32*)(r4 + (0x8d << 2)))), *((u32*)(r4 + (0x8d << 2))));
    // str r0, [sp]
    ov15_021FD7D0(r4, 0x12, 9, 8);
    // add r0, #0x64
    // add r0, r2, r0
    PlaySE(0x000005DC, *((u8*)*((u32*)(r4 + (0x8d << 2)))), *((u32*)(r4 + (0x8d << 2))));
    // str r0, [sp]
    ov15_021FD7D0(r4, 0x11, 9, 8);
    // add r2, #0x66
    // strh r3, [r2]
    // add r1, #0x68
    // strh r2, [r1]
    // ldr r1, [sp, #0x1c]
    ov15_021FD774(*((u32*)(r4 + (0x8d << 2))), 5, 0);
    // mov r0, #SEQ_SE_GS_GEARCANCEL>>6
    PlaySE((r0 << 6));
    // str r0, [sp]
    ov15_021FD7D0(r4, 0x13, 9, 8);
}





void ov15_021FA93C(void) {
    // add r4, r5, r0
    System_GetTouchHeld(0x00000619);
    *((u8*)(r4 + 7)) = (0x10 | (*((u8*)(r4 + 7)) & ~(0x70)));
    ov15_021FAC40(r5, (*((u8*)(r4 + 7)) & ~(0x70)));
    // mvn r0, r0
    *((u8*)(r4 + 7)) = (1 | (*((u8*)(r4 + 7)) & ~(0xf)));
    ov15_021FAA18(r5, (*((u8*)(r4 + 7)) & ~(0xf)));
    // mvn r0, r0
    // add r0, #0x64
    // strb r1, [r0]
    *((u8*)(r4 + 1)) = 0;
    *((u8*)(r4 + 2)) = 0;
    *((u8*)(r4 + 1)) = 1;
    *((u8*)(r4 + 2)) = 0;
    *((u8*)(r4 + 1)) = 2;
    // strb r0, [r4]
    *((u8*)(r4 + 7)) = (*((u8*)(r4 + 7)) & ~(0xf));
    *((u8*)(r4 + 7)) = (*((u8*)(r4 + 7)) & ~(0x70));
    *((u8*)(r4 + 4)) = 0;
    // strb r0, [r5, r1]
    ov15_021FF950(r5, (0x67 << 4), (*((u8*)(r4 + 7)) & ~(0x70)));
    // add r0, r5, r0
    ov15_021FDAF4(0x00000808, (*((u8*)(r5 + (0x67 << 4))) + 1), 7);
    ov15_021FAB34(r5);
    ov15_021FF964(r5);
}





void ov15_021FAA18(void) {
    // add r4, r5, r0
    // tst r1, r2
    // sub r0, #0x3d
    PlaySE(1, *((u8*)(r0 + (0x00000619 - 5))), *((u32*)(gSystem + 0x48)));
    // add r0, #0x64
    // strb r1, [r0]
    // strb r0, [r4]
    // strb r1, [r4]
    // add r0, #0x5c
    // strb r1, [r5, r0]
    *((u8*)(r4 + 2)) = 0;
    *((u8*)(r4 + 1)) = 0;
    *((u8*)(r4 + 7)) = (0x10 | (*((u8*)(r4 + 7)) & ~(0x70)));
    *((u8*)(r4 + 7)) = (1 | (*((u8*)(r4 + 7)) & ~(0xf)));
    *((u8*)(r4 + 7)) = (*((u8*)(r4 + 7)) & ~(0x80));
    *((u8*)(r4 + 4)) = 4;
    ov15_021FF950(r5, (*((u8*)(r4 + 7)) & ~(0x80)));
    // tst r1, r2
    // sub r0, #0x3d
    PlaySE(1, *((u8*)(r5 + (1 - 5))));
    // add r0, #0x64
    // strb r1, [r0]
    // strb r2, [r4]
    // add r0, #0x5c
    // strb r0, [r4]
    // add r1, #0x5c
    // strb r0, [r5, r1]
    *((u8*)(r4 + 2)) = 0;
    *((u8*)(r4 + 1)) = 1;
    *((u8*)(r4 + 7)) = (0x10 | (*((u8*)(r4 + 7)) & ~(0x70)));
    *((u8*)(r4 + 7)) = (1 | (*((u8*)(r4 + 7)) & ~(0xf)));
    *((u8*)(r4 + 7)) = (*((u8*)(r4 + 7)) & ~(0x80));
    *((u8*)(r4 + 4)) = 4;
    ov15_021FF950(r5, (*((u8*)(r4 + 7)) & ~(0x80)), (*((u8*)(r4 + 7)) & ~(0xf)));
}





void ov15_021FAB34(void) {
    // add r4, r5, r1
    *((u8*)(r4 + 3)) = 0;
    *((u8*)(r4 + 2)) = (*((u8*)(r4 + 2)) + 1);
    *((u8*)(r4 + 3)) = (*((u8*)(r4 + 3)) + 1);
    // add r1, #0x64
    // strb r2, [r1]
    ov15_021F9F08((*((u8*)(r4 + 3)) + 1), *((u32*)(r0 + (0x8d << 2))), *((u8*)r4));
    // add r2, #0x64
    // add r1, r1, r2
    // ldrsh r1, [r1, r2]
    // sub r2, #0xb
    ov15_021FF364(r5, *((u32*)(r5 + (0x8d << 2))), 0xa, 0);
    ov15_021FA074(r5);
    ov15_021FD574(r5, 0, r0, 0);
    // add r1, #0x64
    ov15_02200030(r5, *((u8*)*((u32*)(r5 + (0x8d << 2)))));
    // add r2, #0x64
    ov15_021FD404(r5, 1, *((u8*)*((u32*)(r5 + (0x8d << 2)))));
    // add r0, #0x64
    // add r0, #0xa
    // add r1, #8
    // add r0, r0, r2
    // add r1, r1, r2
    // add r2, r3, r2
    ov15_021FA044(*((u32*)(r5 + (0x8d << 2))), *((u32*)(r5 + (0x8d << 2))), *((u8*)((*((u8*)*((u32*)(r5 + (0x8d << 2)))) * 0xc) + 0xd)), *((u32*)(r5 + (0x8d << 2))));
    // add r0, #0x64
    // add r0, #0xa
    // add r1, #8
    // add r0, r0, r2
    // add r1, r1, r2
    // add r2, r3, r2
    ov15_021FA070(*((u32*)(r5 + (0x8d << 2))), *((u32*)(r5 + (0x8d << 2))), *((u8*)((*((u8*)*((u32*)(r5 + (0x8d << 2)))) * 0xc) + 0xd)), 6);
    *((u8*)(r4 + 2)) = (*((u8*)(r4 + 2)) + 1);
}





void ov15_021FAC2C(void) {
    // ldr r0, [r0, r1]
    // bx r3
    // nop
    // _021FAC38: .word ov15_02201314
    // _021FAC3C: .word TouchscreenHitbox_FindRectAtTouchNew
}





void ov15_021FAC40(void) {
    // mvn r0, r0
}





void ov15_021FAC48(void) {
    // add r1, #0x64
    // add r3, r3, r1
    // strb r2, [r5, r1]
    // ldrsh r3, [r3, r2]
    // sub r2, #0x2d
    // add r2, r3, r2
    // sub r2, #8
    // strb r2, [r5, r1]
    ov15_021FED60((0x00000671 + 1), *((u32*)(r0 + 0x00000671)), (*((u32*)(r0 + (0x8d << 2))) + 4));
    ov15_021FB114(r5);
    ov15_02200294(r5);
    ov15_021FF560(r5);
    // add r0, r5, r0
    ov15_021FF7AC((0x61 << 2));
    ov15_021FED58(r5);
    // add r0, #0x64
    // add r4, r2, r0
    ov15_021FA074(r5, *((u8*)*((u32*)(r5 + (0x8d << 2)))), (*((u32*)(r5 + (0x8d << 2))) + 4));
    // sub r3, #8
    ov15_021FD574(r5, 1, r0, *((u32*)(r5 + 0x00000644)));
    // ldrsh r1, [r4, r1]
    // sub r2, #8
    ov15_021FF364(r5, 6, *((u32*)(r5 + 0x00000644)), 1);
    // ldrsh r2, [r4, r2]
    ov15_021FF6BC(r5, *((u8*)(r4 + 9)), 6, 0);
    ov15_021FA074(r5);
    ov15_02200140(r5, r4, r0, 0);
    // ldrsh r3, [r4, r2]
    // add r2, r3, r2
    // sub r2, #8
    ov15_022001C4(r5, r4, *((u32*)(r5 + 0x00000644)));
    ov15_021FFECC(r5, *((u32*)(r5 + 0x00000644)));
    // add r0, #0x28
    // sub r1, #8
    // str r1, [r5, r0]
}





void ov15_021FAD28(void) {
    // tst r2, r1
    // sub r0, #8
    // tst r2, r1
    // sub r0, #8
    // tst r2, r1
    // sub r0, #8
    // tst r1, r2
    // sub r0, #8
}





void ov15_021FAD80(void) {
    ov15_021FA074();
    ov15_021FA098(r5);
    ov15_021FD574(r5, 1, r6, r0);
    ov15_021FA098(r5);
    // ldrsh r1, [r4, r1]
    ov15_021FF364(r5, 6, r0, 1);
    ov15_022001C4(r5, r4, *((u8*)(r5 + 0x00000672)));
    // add r0, #0x64
    // add r3, r3, r2
    // ldrsh r2, [r3, r2]
    ov15_021FF6BC(r5, *((u8*)(*((u32*)(r5 + (0x8d << 2))) + 0xd)), 0xa, 0);
}





void ov15_021FADE8(void) {
    // mvn r4, r4
    // add r1, r5, r5
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _021FAE02: ; jump table
    ov15_021FA074((*((u16*)(r1 + 6)) << 0x10));
    // sub r0, #0x90
    PlaySE(0x0000066C);
    PlaySE(0x000005F3);
}





void ov15_021FAE48(void) {
    // add r0, #0x64
    // mvn r4, r4
    // add r7, r2, r0
    ov15_021FAD28(*((u32*)(r0 + 0x0000066C)), *((u8*)*((u32*)(r0 + (0x8d << 2)))), (*((u32*)(r0 + (0x8d << 2))) + 4));
    // add r0, r1, r0
    ov15_021FADE8(r5, ((r0 << 0x10) >> 0x10), 0x0000066C);
    // str r1, [r5, r2]
    ov15_021FFF34(r5, *((u32*)(r5 + r2)));
    PlaySE(0x000005DC);
    ov15_021FAC2C(r5, 2);
    // mvn r0, r0
    ov15_021FADE8(r5, r0);
    ov15_021FFF34(r5, r6);
    ov15_021FADE8(r5, r6);
    // str r6, [r5, r0]
    ov15_021FA074(r5);
    ov15_021FADE8(r5, r6);
    PlaySE(0x000005F3);
    ov15_021FFF34(r5, *((u32*)(r5 + 0x0000066C)));
    // tst r0, r1
    ov15_021FADE8(r5, *((u32*)(r5 + 0x0000066C)));
    // tst r1, r0
    // mvn r0, r0
    // mov r0, #SEQ_SE_GS_GEARCANCEL>>6
    PlaySE(((1 + 1) << 6));
    _s32_div_f(*((u8*)(r5 + 0x00000672)), 6);
    *((u16*)(r7 + 6)) = (6 * r0);
    // str r0, [sp]
    ov15_021FD7D0(r5, 0x13, 9, 8);
    PlaySE(0x000005DC);
    // str r0, [sp]
    ov15_021FD7D0(r5, 0x11, 9, 8);
    PlaySE(0x000005DC);
    // str r0, [sp]
    ov15_021FD7D0(r5, 0x12, 9, 8);
    PlaySE(0x000005DC);
    // ldrsh r2, [r7, r2]
    // add r1, r2, r1
    ov15_021FD810(r5, 0x14, 0x29, 0x21);
    ov15_021FD810(r5, 0x14, 0x2a, 0x21);
}





void ov15_021FAFFC(void) {
    // add r0, #0x64
    // add r5, r1, r0
    // ldrsh r6, [r5, r0]
    // add r2, r6, r2
    // str r0, [sp]
    MoveItemSlotInList(*((u32*)r5), *((u8*)(r0 + (0x0000066C + 6))), ((*((u32*)(r0 + 0x0000066C)) << 0x10) >> 0x10), *((u8*)*((u32*)(r0 + (0x8d << 2)))));
    ov15_021F9F08(r4);
    // add r2, #8
    // sub r0, #0x28
    // str r2, [r4, r0]
    // sub r1, #0x28
    ov15_021FA0E4(r4, *((u32*)(r4 + 0x0000066C)), *((u32*)(r4 + 0x0000066C)));
    ov15_021FB060(r4);
}





void ov15_021FB060(void) {
    // str r3, [r5, r1]
    // strb r3, [r5, r1]
    // strb r3, [r5, r2]
    // str r3, [r5, r1]
    ov15_021FB114((0x00000671 + 3), (0x00000671 + 1), 0);
    ov15_021F9F08(r5);
    // add r0, #0x64
    // add r4, r2, r0
    ov15_021FA074(r5, *((u8*)*((u32*)(r5 + (0x8d << 2)))), (*((u32*)(r5 + (0x8d << 2))) + 4));
    ov15_021FD574(r5, 0, r0, 0);
    // ldrsh r1, [r4, r2]
    ov15_021FF364(r5, (6 - 7), 0);
    // add r1, #0x64
    ov15_02200030(r5, *((u8*)*((u32*)(r5 + (0x8d << 2)))));
    // add r2, #0x64
    ov15_021FD404(r5, 1, *((u8*)*((u32*)(r5 + (0x8d << 2)))));
    // ldrsh r2, [r4, r2]
    ov15_021FF6BC(r5, *((u8*)(r4 + 9)), 6, 0);
    ov15_021FA074(r5);
    ov15_02200140(r5, r4, r0, 1);
    ov15_021FED24(r5);
    ov15_021FFECC(r5, *((u32*)(r5 + 0x00000644)));
}





void ov15_021FB114(void) {
    // add r2, #0x64
    // add r3, r4, r2
    // add r1, #0x1c
    // add r2, #0x10
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXY(*((u32*)(r0 + (0x8d << 2))), 0xb1, (((*((u16*)(*((u8*)*((u32*)(r0 + (0x8d << 2)))) + 4)) - 1) << 4) << 0x10), *((u8*)*((u32*)(r0 + (0x8d << 2)))));
}





void ov15_021FB14C(void) {
    // add r0, sp, #0
    // strb r2, [r0]
    *((u8*)(r0 + 1)) = *((u8*)(_022004EC + 1));
    *((u8*)(r0 + 2)) = *((u8*)(_022004EC + 2));
    *((u8*)(r0 + 3)) = *((u8*)(_022004EC + 3));
    *((u8*)(r0 + 4)) = *((u8*)(_022004EC + 4));
    // add r0, #0x66
    LoadItemDataOrGfx(*((u16*)*((u32*)(r0 + (0x8d << 2)))), 0, 6);
    // add r0, #0x64
    // add r0, r2, r0
    // str r1, [r3, r0]
    // add r0, #0x65
    // add r0, #0x76
    // add r0, r2, r0
    // add r0, #0x64
    // add r0, r1, r0
    // add r0, sp, #0
    // strb r1, [r0]
    GetItemAttr_PreloadedItemData(r0, 6, *((u8*)*((u32*)(r4 + (0x8d << 2)))), (r4 + 4));
    // sub r2, #0x72
    // add r0, #0x66
    // add r2, #0x76
    // add r0, sp, #0
    // strb r1, [r0]
    // add r2, #0x64
    // add r2, r1, r2
    // add r0, sp, #0
    // strb r1, [r0]
    // add r0, sp, #0
    // strb r1, [r0]
    Leftover_CanPlantBerry(*((u32*)(4 + 0x70)), 4, 0x000001C1, *((u8*)((0xc * *((u8*)1)) + 0xc)));
    // add r0, sp, #0
    // strb r1, [r0]
    // sub r0, #0x3e
    // add r1, #0x66
    SoundSys_GetGBSoundsState((0x8d << 2), *((u16*)*((u32*)(r4 + (0x8d << 2)))));
    // add r0, sp, #0
    // strb r1, [r0]
    // add r0, sp, #0
    // strb r1, [r0]
    GetItemAttr_PreloadedItemData(r7, 3);
    // add r0, #0x66
    ItemIdIsNotJohtoBall(*((u16*)*((u32*)(r4 + (0x8d << 2)))));
    // add r0, sp, #0
    *((u8*)(r0 + 2)) = 8;
    // add r0, sp, #0
    *((u8*)(r0 + 1)) = 5;
    GetItemAttr_PreloadedItemData(r7, 4);
    Bag_GetRegisteredItem1(*((u32*)(r4 + (0x8e << 2))));
    // add r2, #0x66
    Bag_GetRegisteredItem2(*((u32*)(r4 + ((0x8d << 2) + 4))), (0x8d << 2), *((u16*)*((u32*)(r4 + (0x8d << 2)))));
    // add r1, #0x66
    // add r0, sp, #0
    *((u8*)(r0 + 1)) = 7;
    // add r0, sp, #0
    *((u8*)(r0 + 1)) = 6;
    // add r1, #0x66
    ov15_021FD3F0(r5, *((u16*)6));
    // add r0, sp, #0
    // strb r1, [r0]
    // add r0, #0x65
    // add r0, sp, #0
    *((u8*)(*((u8*)*((u32*)(r4 + (0x8d << 2)))) + 3)) = 0xc;
    // add r0, sp, #0
    *((u8*)(*((u8*)*((u32*)(r4 + (0x8d << 2)))) + 4)) = 0xb;
    // add r0, sp, #0
    // str r5, [r1, r3]
    // add r1, sp, #0
    ov15_021FEB84(r4, (r4 + 4), 5, (0x7f << 4));
    // add r1, sp, #0
    ov15_021FB380(r4);
    Heap_Free(r7);
}





void ov15_021FB380(void) {
    // str r2, [r5, r1]
    ov15_021FFECC(*((u8*)(ov15_02201468 + *((u32*)(r0 + 0x0000066C)))), *((u32*)(r0 + 0x0000066C)));
    ov15_0220023C(r5, r4);
    // add r0, r5, r0
    // add r1, r5, r1
    ov15_021FF758((0x61 << 2), (3 << 8), *((u8*)r4));
    // add r0, r5, r0
    // add r1, r5, r1
    ov15_021FF758((0x65 << 2), (3 << 8), *((u8*)(r4 + 1)));
    // add r0, r5, r0
    // add r1, r5, r1
    ov15_021FF758((0x69 << 2), (3 << 8), *((u8*)(r4 + 2)));
    // add r0, r5, r0
    // add r1, r5, r1
    ov15_021FF758((0x6d << 2), (3 << 8), *((u8*)(r4 + 3)));
}





void ov15_021FB3F0(void) {
    // tst r2, r0
    // tst r2, r0
    // tst r2, r0
    // tst r0, r2
    // str r4, [r5, r0]
    ov15_021FFECC(r0, *((u8*)(ov15_02201468 + *((u8*)(ov15_0220052B + (*((u32*)(r0 + 0x0000066C)) << 2))))), (*((u32*)(r0 + 0x0000066C)) << 2));
    PlaySE(0x000005DC);
    // mvn r0, r0
    ov15_021FAC2C(r5, 1);
    // mvn r0, r0
    ov15_021FD774(r5, 1);
    // str r6, [r5, r0]
    ov15_021FFECC(r5, *((u8*)(ov15_02201468 + r6)));
    // mov r0, #SEQ_SE_GS_GEARCANCEL>>6
    PlaySE((r0 << 6));
    // mvn r0, r0
    // add r1, r5, r0
    PlaySE(0x000005DC);
    // tst r0, r1
    // add r1, r5, r0
    PlaySE(0x000005DC, *((u32*)(gSystem + 0x48)));
    ov15_021FD774(r5, 0);
    PlaySE(0x000005DC);
    // mvn r0, r0
    // tst r0, r1
    // mov r0, #SEQ_SE_GS_GEARCANCEL>>6
    PlaySE((2 << 6));
    // mvn r0, r0
    // mvn r0, r0
}





void ov15_021FB518(void) {
    ov15_021F9F08();
    // add r0, #0x64
    // add r4, r2, r0
    ov15_021FA074(r5, *((u8*)*((u32*)(r5 + (0x8d << 2)))), (*((u32*)(r5 + (0x8d << 2))) + 4));
    ov15_021FD574(r5, 0, r0, 0);
    // ldrsh r1, [r4, r2]
    ov15_021FF364(r5, (6 - 7), 0);
    // add r1, #0x64
    ov15_02200030(r5, *((u8*)*((u32*)(r5 + (0x8d << 2)))));
    // add r2, #0x64
    ov15_021FD404(r5, 1, *((u8*)*((u32*)(r5 + (0x8d << 2)))));
    // ldrsh r2, [r4, r2]
    ov15_021FF6BC(r5, *((u8*)(r4 + 9)), 6, 0);
    ov15_021FA074(r5);
    ov15_02200140(r5, r4, r0, 0);
    ov15_021FFECC(r5, *((u32*)(r5 + 0x00000644)));
    ov15_021F9C78(r5, 1);
}





void ov15_021FB5AC(void) {
    ov15_021FB3F0();
    // mvn r0, r0
    // str r0, [sp]
    ov15_021FD7D0(r4, 0x13, 9, 8);
    // str r1, [r4, r0]
    // add r1, #0x1c
    // str r0, [sp]
    ov15_021FD7D0(r4, ((r1 << 0x18) >> 0x18), 9, 8);
}





void ov15_021FB604(void) {
    // add r0, r5, r0
    // add r4, #0x64
    // add r1, r1, r3
}





void ov15_021FB654(void) {
    ov15_02200294();
    // add r0, r4, r0
    ov15_021FF7AC((0x61 << 2));
    // add r2, r4, r1
    // blx r1
}





void ov15_021FB680(void) {
    ov15_021FD788(0);
    ov15_021FFF24(r4);
    // add r0, #0x66
    GetItemAttr(*((u16*)*((u32*)(r4 + (0x8d << 2)))), 6, 6);
    GetItemFieldUseFunc(2, ((r0 << 0x10) >> 0x10));
    // blx r1
    // str r0, [sp]
    // sub r2, #8
    // add r2, #0x66
    GetItemUseErrorMessage(*((u32*)(r4 + (0x8f << 2))), *((u32*)(r4 + 0x000005E4)), *((u16*)*((u32*)(r4 + (0x8f << 2)))), *((u32*)(*((u32*)(r4 + (0x8d << 2))) + 0x70)));
    ov15_021FEF48(r4, 0);
    // strb r0, [r4, r1]
    ov15_021FB784(r4, 0x00000616);
}





void ov15_021FB700(void) {
    TextPrinterCheckActive(*((u8*)(r0 + 0x00000616)));
    // tst r0, r1
    // add r0, #0x65
    ov15_021FED3C(r4, *((u32*)(gSystem + 0x48)));
    // add r0, #0x34
    ClearFrameAndWindow2(r4, 1);
    // add r0, #0x34
    ClearWindowTilemapAndScheduleTransfer(r4);
    ScheduleWindowCopyToVram((r4 + 4));
    ov15_021FD788(r4, 1);
    ov15_021FB518(r4);
    // add r0, #0x65
}





void ov15_021FB784(void) {
    // add r1, #0x64
    // add r3, r3, r1
    // strb r2, [r4, r1]
    // str r2, [r4, r0]
    // sub r1, #0x97
    // add r2, #0x66
    TryFormatRegisteredKeyItemUseMessage(*((u32*)*((u32*)(r0 + 0xd))), *((u32*)(r0 + 0x0000067B)), *((u16*)*((u32*)(r0 + 0xd))), 6);
    ov15_021FEF48(r4, 0);
    // strb r0, [r4, r1]
    // add r1, #0x66
    BagApp_TryUseItemInPlace(r4, *((u16*)*((u32*)(r4 + (0x8d << 2)))));
    // str r1, [r4, r0]
    sub_020880CC(1, 6);
    // add r0, #0x68
    // strh r1, [r0]
}





void ov15_021FB820(void) {
    // blx r1
}





void ov15_021FB830(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021FB848: ; jump table
    // add r0, #0x66
    TMHMGetMove(*((u16*)*((u32*)(r0 + (0x8d << 2)))), 0x0000067B);
    BufferMoveName(*((u32*)(r4 + (0xbd << 2))), 0, r0);
    MoveIsHM(r5);
    ReadMsgDataIntoString(*((u32*)(r4 + (0x2f << 4))), 0x3c, *((u32*)(r4 + 0x000005E4)));
    ReadMsgDataIntoString(*((u32*)(r4 + (0x2f << 4))), 0x3b, *((u32*)(r4 + r2)));
    ov15_021FEF48(r4, 0);
    // strb r0, [r4, r1]
    // add r1, #0x65
    // strb r0, [r4, r1]
    // sub r1, #0x65
    TextPrinterCheckActive(*((u8*)(r4 + 0x00000616)), 0x00000616);
    // tst r0, r1
    NewString_ReadMsgData(*((u32*)(r4 + (0x2f << 4))), 0x3d);
    // add r0, #0x34
    FillWindowPixelBuffer(r4, 0xf);
    StringExpandPlaceholders(*((u32*)(r4 + (0xbd << 2))), *((u32*)(r4 + 0x000005E4)), r5);
    String_Delete(r5);
    ov15_021FEF48(r4, 0);
    // strb r0, [r4, r1]
    // add r1, #0x65
    // strb r0, [r4, r1]
    // sub r1, #0x65
    TextPrinterCheckActive(*((u8*)(r4 + 0x00000616)), 0x00000616);
    ov15_021FF004(r4);
    // strb r1, [r4, r0]
    YesNoPrompt_HandleInput(*((u32*)(r4 + 0x00000804)), 3);
    ov15_021FF058(r4);
    sub_020880CC(1, 6);
    // add r0, #0x68
    // strh r1, [r0]
    ov15_021FF058(r4, 0);
    ov15_021FED3C(r4);
    // add r0, #0x34
    ClearFrameAndWindow2(r4, 1);
    // add r0, #0x34
    ClearWindowTilemapAndScheduleTransfer(r4);
    ScheduleWindowCopyToVram((r4 + 4));
    ov15_021FA074(r4);
    // add r5, #0x64
    // add r1, r1, r3
    ov15_02200140(r4, (r5 + 4), r0, 0);
    ov15_021FE868(r4);
    ov15_02200294(r4);
    ov15_021FB518(r4);
    ov15_021FD788(r4, 1);
}





void BagApp_TryUseItemInPlace(void) {
    // sub r2, #0xb8
    BufferPlayersName(*((u32*)(r0 + (0xbd << 2))), 0, *((u32*)(r0 + (0xbd << 2))));
    BufferItemName(*((u32*)(r4 + (0xbd << 2))), 1, r5);
    // mov r1, #msg_0010_00065
    NewString_ReadMsgData(*((u32*)(r4 + (0x2f << 4))));
    BagApp_SetFlute(r4, 1);
    // strh r1, [r4, r0]
    // mov r1, #msg_0010_00064
    NewString_ReadMsgData(*((u32*)(r4 + (0x2f << 4))), 0);
    BagApp_SetFlute(r4, 2);
    // strh r1, [r4, r0]
    BagApp_TryUseRepel(r4, r5);
    BagApp_ToggleGBSounds(r4, r0);
    // strh r1, [r4, r0]
    StringExpandPlaceholders(*((u32*)(r4 + (0xbd << 2))), *((u32*)(r4 + 0x000005E4)), r0);
    String_Delete(r5);
}





void BagApp_TryUseRepel(void) {
    // strh r1, [r4, r0]
    // mov r1, #msg_0010_00063
    // strh r1, [r4, r0]
    // sub r0, #0x680-SEQ_SE_DP_CARD2
    // mov r1, #msg_0010_00062
}





void BagApp_ToggleGBSounds(void) {
    // mov r1, #msg_0010_00105
    // mov r1, #msg_0010_00104
}





void ov15_021FBB28(void) {
    // add r0, #0x64
    // add r1, r2, r3
    // str r0, [sp]
    // add r2, #0x66
    // add r0, #0x64
    // add r0, #0xa
    // add r1, #8
    // add r0, r0, r2
    // add r1, r1, r2
    // add r2, r3, r2
    // add r0, #0x64
    // add r2, r2, r3
    // add r0, #0xa
    // add r1, #8
    // add r0, r0, r3
    // add r1, r1, r3
}





void ov15_021FBBB0(void) {
    ov15_021FEF48(0, *((u8*)(r0 + 0x0000067B)));
    // strb r0, [r5, r1]
    // add r1, #0x65
    // strb r0, [r5, r1]
    // sub r1, #0x65
    TextPrinterCheckActive(*((u8*)(r5 + 0x00000616)), 0x00000616);
    // tst r0, r1
    ov15_021FED3C(r5, *((u32*)(gSystem + 0x48)));
    // add r0, #0x34
    ClearFrameAndWindow2(r5, 1);
    // add r0, #0x34
    ClearWindowTilemapAndScheduleTransfer(r5);
    ov15_021FBB28(r5);
    ov15_021FB518(r5);
    ov15_021FA074(r5);
    // add r4, #0x64
    // add r1, r1, r3
    ov15_02200140(r5, (r4 + 4), r0, 1);
    ov15_021FA170(r5);
    ScheduleWindowCopyToVram((r5 + 4));
    ov15_021FD788(r5, 1);
    // strb r1, [r5, r0]
}





void ov15_021FBC6C(void) {
    // add r0, #0x68
    // strh r1, [r0]
}





void ov15_021FBC8C(void) {
    // add r0, #0x68
    // strh r1, [r0]
}





void ov15_021FBCAC(void) {
    // strh r2, [r4, r1]
    ov15_021FFF24((0x1a << 6), 1);
    // add r0, #0x64
    // add r1, r2, r0
    // add r2, #0x66
    Pocket_GetQuantity(*((u32*)(*((u8*)*((u32*)(r4 + (0x8d << 2)))) + 4)), *((u8*)(*((u8*)*((u32*)(r4 + (0x8d << 2)))) + 0xd)), *((u16*)*((u32*)(r4 + (0x8d << 2)))), 6);
    ov15_021FEEA4(r4);
    ov15_021FD788(r4, 0);
    ov15_021FD574(r4, 3, 0, 0);
    ov15_02200300(r4, 3, *((u16*)(r4 + 0x00000682)));
    ov15_021FEDEC(r4, 3);
    ov15_021FF7C4(r4);
    ov15_021FF29C(r4, 1);
}





void ov15_021FBD28(void) {
    // add r0, r0, r2
    // add r0, r0, r2
}





void ov15_021FBD50(void) {
    ov15_021FAC2C(3);
    ov15_022002EC(*((u16*)(r4 + 0x00000682)));
    // mvn r5, r5
    // mvn r5, r5
    // add r0, r5, r5
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021FBDAC: ; jump table
    // ldrsh r0, [r4, r1]
    ov15_021FBD28((*((u16*)((0 - 3) + 6)) << 0x10), *((u16*)(r4 + ((0x1a << 6) + 2))), 0x64);
    // strh r0, [r4, r1]
    ManagedSprite_SetAnimationFrame(*((u32*)(r4 + (0x2d << 4))), 0);
    ManagedSprite_SetAnim(*((u32*)(r4 + (0x2d << 4))), 0x1a);
    // ldrsh r0, [r4, r1]
    ov15_021FBD28(*((u16*)(r4 + ((0x1a << 6) + 2))), 0xa);
    // strh r0, [r4, r1]
    ManagedSprite_SetAnimationFrame(*((u32*)(r4 + (0xb5 << 2))), 0);
    ManagedSprite_SetAnim(*((u32*)(r4 + (0xb5 << 2))), 0x1a);
    // ldrsh r0, [r4, r1]
    ov15_021FBD28(*((u16*)(r4 + ((0x1a << 6) + 2))), 1);
    // strh r0, [r4, r1]
    ManagedSprite_SetAnimationFrame(*((u32*)(r4 + (0xb6 << 2))), 0);
    ManagedSprite_SetAnim(*((u32*)(r4 + (0xb6 << 2))), 0x1a);
    // ldrsh r0, [r4, r1]
    // mvn r2, r2
    ov15_021FBD28(*((u16*)(r4 + ((0x1a << 6) + 2))), 0x63);
    // strh r0, [r4, r1]
    ManagedSprite_SetAnimationFrame(*((u32*)(r4 + (0xb7 << 2))), 0);
    ManagedSprite_SetAnim(*((u32*)(r4 + (0xb7 << 2))), 0x1c);
    // ldrsh r0, [r4, r1]
    // mvn r2, r2
    ov15_021FBD28(*((u16*)(r4 + ((0x1a << 6) + 2))), 9);
    // strh r0, [r4, r1]
    ManagedSprite_SetAnimationFrame(*((u32*)(r4 + (0x2e << 4))), 0);
    ManagedSprite_SetAnim(*((u32*)(r4 + (0x2e << 4))), 0x1c);
    // ldrsh r0, [r4, r1]
    // mvn r2, r2
    ov15_021FBD28(*((u16*)(r4 + ((0x1a << 6) + 2))), 0);
    // strh r0, [r4, r1]
    ManagedSprite_SetAnimationFrame(*((u32*)(r4 + (0xb9 << 2))), 0);
    ManagedSprite_SetAnim(*((u32*)(r4 + (0xb9 << 2))), 0x1c);
    // add r0, r4, r1
    sub_020881C0(*((u16*)(r4 + ((0x1a << 6) + 2))));
    // tst r0, r1
    // tst r0, r1
    // add r0, r6, r6
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021FBF2E: ; jump table
    ov15_021FEDEC(r4, 3);
    PlaySE(0x00000637);
    PlaySE(0x000005DC);
    // str r0, [sp]
    ov15_021FD7D0(r4, 0x26, 9, 8);
    // mov r0, #SEQ_SE_GS_GEARCANCEL>>6
    PlaySE((r0 << 6));
    // str r0, [sp]
    ov15_021FD7D0(r4, 0x13, 9, 8);
}





u32 ov15_021FBF98(void) {
}





void ov15_021FBFC0(void) {
    // ldr r0, [r4, r0]
    // ldr r0, [r4, r0]
}





void ov15_021FBFF8(void) {
    TextPrinterCheckActive(*((u8*)(r0 + 0x00000616)));
    ov15_021FF004(r4);
}





void ov15_021FC01C(void) {
    YesNoPrompt_HandleInput(*((u32*)(r0 + 0x00000804)));
    // mvn r1, r1
    ov15_021FF058(r5, 0);
    NewString_ReadMsgData(*((u32*)(r5 + (0x2f << 4))), 0x36);
    // ldrsh r0, [r5, r0]
    // sub r2, #0xc0
    // add r2, #0x66
    BufferItemName(*((u32*)(r5 + (0xbd << 2))), 0, *((u16*)*((u32*)(r5 + (0xbd << 2)))));
    // sub r2, #0xc0
    // add r2, #0x66
    BufferItemNamePlural(*((u32*)(r5 + (0xbd << 2))), 0, *((u16*)*((u32*)(r5 + (0xbd << 2)))));
    // str r0, [sp]
    // str r1, [sp, #4]
    // ldrsh r2, [r5, r2]
    BufferIntegerAsString(*((u32*)(r5 + (0xbd << 2))), 1, (0x1a << 6), 3);
    StringExpandPlaceholders(*((u32*)(r5 + (0xbd << 2))), *((u32*)(r5 + 0x000005E4)), r4);
    String_Delete(r4);
    // add r0, #0x34
    FillWindowPixelBuffer(r5, 0xf);
    ov15_021FEF48(r5, 0);
    // strb r0, [r5, r1]
    ov15_021FF058(r5, 0x00000616);
    // add r0, #0x34
    ClearFrameAndWindow2(r5, 1);
    // add r0, #0x34
    ClearWindowTilemapAndScheduleTransfer(r5);
    ScheduleWindowCopyToVram((r5 + 4));
    ov15_021FA074(r5);
    // add r4, #0x64
    // add r1, r1, r3
    ov15_02200140(r5, (r4 + 4), r0, 0);
    ov15_021FE868(r5);
    ov15_021FED3C(r5);
    ov15_021FD788(r5, 1);
    ov15_021FB518(r5);
}





void ov15_021FC140(void) {
    TextPrinterCheckActive(*((u8*)(r0 + 0x00000616)));
    // add r4, #0x34
    ScheduleWindowCopyToVram(r4);
}





void ov15_021FC164(void) {
    TextPrinterCheckActive(*((u8*)(r0 + 0x00000616)));
    // tst r0, r1
    // add r0, #0x34
    ClearFrameAndWindow2(r5, 1);
    // add r0, #0x34
    ClearWindowTilemapAndScheduleTransfer(r5);
    ScheduleWindowCopyToVram((r5 + 4));
    // add r0, #0x64
    // add r1, r2, r3
    // str r0, [sp]
    // add r2, #0x66
    Pocket_TakeItem(*((u32*)(*((u8*)*((u32*)(r5 + (0x8d << 2)))) + 4)), *((u8*)(*((u8*)*((u32*)(r5 + (0x8d << 2)))) + 0xd)), *((u16*)*((u32*)(r5 + (0x8d << 2)))), *((u16*)(r5 + (0x1a << 6))));
    ov15_021F9F08(r5);
    ov15_021FA074(r5);
    // add r4, #0x64
    // add r1, r1, r3
    ov15_02200140(r5, (r4 + 4), r0, 1);
    ov15_021FE868(r5);
    ov15_021FED3C(r5);
    ov15_021FB518(r5);
    ov15_021FA170(r5);
    ov15_021FD788(r5, 1);
}





void ov15_021FC224(void) {
    // add r1, #0x66
    Bag_TryRegisterItem(*((u32*)(r0 + (0x8e << 2))), *((u16*)*((u32*)(r0 + ((0x8e << 2) - 4)))));
    NewString_ReadMsgData(*((u32*)(r5 + (0x2f << 4))), 0x67);
    // add r0, #0x34
    FillWindowPixelBuffer(r5, 0xf);
    StringExpandPlaceholders(*((u32*)(r5 + (0xbd << 2))), *((u32*)(r5 + 0x000005E4)), r4);
    String_Delete(r4);
    ov15_021FEF48(r5, 0);
    ov15_02200294(r5);
    ov15_021FFF24(r5);
    ov15_021FD788(r5, 0);
    ov15_02200294(r5);
    ov15_021FF560(r5);
    // add r0, r5, r0
    ov15_021FF7AC((0x61 << 2));
    ov15_021FA074(r5);
    // add r4, #0x64
    // add r1, r1, r3
    ov15_02200140(r5, (r4 + 4), r0, 0);
    ov15_021FE868(r5);
    ov15_021FED3C(r5);
    ov15_021FB518(r5);
}





void ov15_021FC2E0(void) {
    TextPrinterCheckActive(*((u8*)(r0 + 0x00000616)));
    // tst r0, r1
    // add r0, #0x34
    ClearFrameAndWindow2(r5, 1);
    // add r0, #0x34
    ClearWindowTilemapAndScheduleTransfer(r5);
    ov15_02200294(r5);
    ov15_021FF560(r5);
    // add r0, r5, r0
    ov15_021FF7AC((0x61 << 2));
    ov15_021FA074(r5);
    // add r4, #0x64
    // add r1, r1, r3
    ov15_02200140(r5, (r4 + 4), r0, 0);
    ov15_021FE868(r5);
    ov15_021FED3C(r5);
    ov15_021FB518(r5);
    ov15_021FD788(r5, 1);
}





void ov15_021FC37C(void) {
    // add r1, #0x66
    // add r0, r5, r0
    // add r4, #0x64
    // add r1, r1, r3
}





void ov15_021FC3E0(void) {
}





void ov15_021FC3EC(void) {
    // add r0, #0x68
    // strh r1, [r0]
}





void ov15_021FC41C(void) {
    // tst r2, r3
    // str r1, [r5, r0]
    // tst r2, r3
    // str r1, [r5, r0]
    // tst r6, r2
    // str r1, [sp]
    // add r2, sp, #0xc
    // str r4, [sp, #4]
    ov15_021FA73C(0x00000644, 0xe, 0x20, ((0 + 1) + 1));
    // sub r2, #0x21
    ov15_021FA6C0(0xe);
    // str r0, [r5, r1]
    // str r3, [r5, r0]
    // tst r3, r2
    // str r1, [sp]
    // add r2, sp, #8
    // add r2, #3
    // str r4, [sp, #4]
    ov15_021FA73C(0x00000644, 0xf, *((u8*)(ov15_02200643 + (*((u32*)(r5 + 0x00000644)) << 2))), ((r4 + 1) + 1));
    ov15_021FA6C0(0xe, 1);
    // str r0, [r5, r1]
    // str r2, [r5, r0]
    // tst r1, r3
    // sub r2, #0x11
    // add r1, #0x64
    ov15_021FA6C0(0x00000644, *((u8*)*((u32*)(r5 + (0x8d << 2)))), *((u32*)(r5 + 0x00000644)), *((u32*)(0x00000644 + 0x48)));
    // str r0, [sp]
    // add r2, sp, #8
    // str r0, [sp, #4]
    // add r2, #2
    ov15_021FA73C(r5, r0, 1);
    // add r2, #0xf0
    // tst r1, r2
    // add r1, #0x64
    ov15_021FA6C0(0xe, *((u8*)*((u32*)(r5 + (0x8d << 2)))), 1);
    // str r0, [sp]
    // add r2, sp, #8
    // str r0, [sp, #4]
    // add r2, #1
    ov15_021FA73C(r5, r0, 1);
    // add r0, #0x64
    // str r0, [r5, r1]
    PlaySE(0x000005DC, 0x00000644);
    ov15_021FFECC(r5, *((u32*)(r5 + 0x00000644)));
    ov15_021FA0E4(r5, *((u32*)(r5 + 0x00000644)));
    ov15_021FA170(r5);
    // add r0, sp, #8
    // strb r1, [r0]
    ov15_021FAC2C(r5, 0);
    // mvn r0, r0
    ov15_021FA104(r5, r0);
    ov15_021FA68C(r5, r4);
    // mvn r1, r1
    // str r4, [r5, r1]
    ov15_021FFECC(r5, *((u32*)(r5 + 0x00000644)));
    // str r4, [r5, r1]
    ov15_021FFECC(r5, *((u32*)(r5 + 0x00000644)));
    ov15_021FA0E4(r5, *((u32*)(r5 + 0x00000644)));
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r2, sp, #8
    ov15_021FA73C(r5, r4, 0);
    // add r1, #0x68
    // strh r2, [r1]
    // tst r0, r1
    // str r0, [sp]
    // str r3, [sp, #4]
    // add r2, sp, #8
    ov15_021FA73C(r5, *((u32*)(r5 + 0x00000644)), 4, 0);
    ov15_021FA0E4(r5, *((u32*)(r5 + 0x00000644)));
    // add r0, #0x68
    // strh r1, [r0]
    // tst r1, r0
    // str r0, [sp]
    // add r2, sp, #8
    // str r3, [sp, #4]
    ov15_021FA73C(r5, 0x10, 0);
    // add r0, #0x68
    // strh r1, [r0]
    ov15_021FA0E4(r5, *((u32*)(r5 + 0x00000644)));
    // add r0, sp, #8
    // add r0, #0x66
    GetItemAttr(*((u16*)*((u32*)(r5 + (0x8d << 2)))), 3, 6);
    // add r0, #0x66
    ItemIdIsNotJohtoBall(*((u16*)*((u32*)(r5 + (0x8d << 2)))));
    // sub r2, #0xc0
    // add r2, #0x66
    BufferItemName(*((u32*)(r5 + (0xbd << 2))), 0, *((u16*)*((u32*)(r5 + (0xbd << 2)))));
    NewString_ReadMsgData(*((u32*)(r5 + (0x2f << 4))), 0x2f);
    StringExpandPlaceholders(*((u32*)(r5 + (0xbd << 2))), *((u32*)(r5 + 0x000005E4)), r0);
    String_Delete(r4);
    ov15_021FEF48(r5, 0);
    // strb r0, [r5, r1]
    // add r0, #0x68
    // strh r1, [r0]
    // add r0, #0x68
    // strh r1, [r0]
    ov15_021FD810(r5, 0x14, 0x29, 0x24);
}





void ov15_021FC784(void) {
    TextPrinterCheckActive(*((u8*)(r0 + 0x00000616)));
    // tst r0, r1
    // add r0, #0x34
    ClearFrameAndWindow2(r4, 1);
    // add r0, #0x34
    ClearWindowTilemapAndScheduleTransfer(r4);
    // add r1, #0x64
    // add r1, r3, r1
    // ldrsh r1, [r1, r2]
    // sub r2, #0xb
    ov15_021FF364(r4, (0xc * *((u8*)*((u32*)(r4 + (0x8d << 2))))), 0xa, 0);
}





void ov15_021FC7EC(void) {
    // tst r2, r3
    // str r1, [r5, r0]
    // tst r2, r3
    // str r1, [r5, r0]
    // tst r6, r2
    // str r1, [sp]
    // add r2, sp, #0xc
    // str r4, [sp, #4]
    ov15_021FA73C(0x00000644, 0xe, 0x20, 1);
    // sub r2, #0x21
    ov15_021FA6C0(0x10);
    // str r0, [r5, r1]
    // str r3, [r5, r0]
    // tst r3, r2
    // str r1, [sp]
    // add r2, sp, #8
    // add r2, #3
    // str r4, [sp, #4]
    ov15_021FA73C(0x00000644, 0xf, *((u8*)(ov15_02200643 + (*((u32*)(r5 + 0x00000644)) << 2))), 1);
    ov15_021FA6C0(0x10, 1);
    // str r0, [r5, r1]
    // str r2, [r5, r0]
    // tst r1, r3
    // sub r2, #0x11
    // add r1, #0x64
    ov15_021FA6C0(0x00000644, *((u8*)*((u32*)(r5 + (0x8d << 2)))), *((u32*)(r5 + 0x00000644)), *((u32*)(0x00000644 + 0x48)));
    // str r0, [r5, r1]
    ov15_021FFECC(r5, *((u32*)(r5 + 0x00000644)));
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r2, sp, #8
    // add r2, #2
    ov15_021FA73C(r5, *((u32*)(r5 + 0x00000644)), 1);
    // add r1, #0x64
    // mvn r2, r2
    ov15_021FA6C0(r5, *((u8*)*((u32*)(r5 + (0x8d << 2)))), 0);
    // str r0, [sp]
    // add r2, sp, #8
    // str r0, [sp, #4]
    // add r2, #2
    ov15_021FA73C(r5, r0, 1);
    // add r2, #0xf0
    // tst r1, r2
    // add r1, #0x64
    ov15_021FA6C0(0x10, *((u8*)*((u32*)(r5 + (0x8d << 2)))), 1);
    // str r0, [r5, r1]
    ov15_021FFECC(r5, *((u32*)(r5 + 0x00000644)));
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r2, sp, #8
    // add r2, #1
    ov15_021FA73C(r5, *((u32*)(r5 + 0x00000644)), 1);
    // add r1, #0x64
    ov15_021FA6C0(r5, *((u8*)*((u32*)(r5 + (0x8d << 2)))), 1);
    // str r0, [sp]
    // add r2, sp, #8
    // str r0, [sp, #4]
    // add r2, #1
    ov15_021FA73C(r5, r0, 1);
    // add r0, #0x64
    // str r0, [r5, r1]
    PlaySE(0x000005DC, 0x00000644);
    ov15_021FFECC(r5, *((u32*)(r5 + 0x00000644)));
    ov15_021FA0E4(r5, *((u32*)(r5 + 0x00000644)));
    ov15_021FA170(r5);
    // add r0, sp, #8
    // strb r1, [r0]
    ov15_021FAC2C(r5, 0);
    // mvn r0, r0
    ov15_021FA104(r5, r0);
    ov15_021FA68C(r5, r4);
    // mvn r1, r1
    // str r4, [r5, r1]
    ov15_021FFECC(r5, *((u32*)(r5 + 0x00000644)));
    // str r4, [r5, r1]
    ov15_021FFECC(r5, *((u32*)(r5 + 0x00000644)));
    ov15_021FA0E4(r5, *((u32*)(r5 + 0x00000644)));
    // str r0, [sp]
    // add r2, sp, #8
    // str r3, [sp, #4]
    ov15_021FA73C(r5, r4, 1);
    // add r1, #0x68
    // strh r2, [r1]
    // tst r0, r3
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r2, sp, #8
    ov15_021FA73C(r5, *((u32*)(r5 + 0x00000644)), 5, 1);
    ov15_021FA0E4(r5, *((u32*)(r5 + 0x00000644)));
    // add r0, #0x68
    // strh r1, [r0]
    // tst r0, r1
    // add r2, #0x66
    // strh r1, [r2]
    // add r0, #0x68
    // strh r2, [r0]
    ov15_021FD774(r5, 0, 5);
    // mov r0, #SEQ_SE_GS_GEARCANCEL>>6
    PlaySE((r0 << 6));
    ov15_021FA0E4(r5, *((u32*)(r5 + 0x00000644)));
    // str r0, [sp]
    ov15_021FD7D0(r5, 0x13, 9, 8);
    // add r0, sp, #8
    ov15_021FD810(r5, 0x14, 0x29, 0x22);
}





void ov15_021FCB64(void) {
    // add r1, #0x64
    // add r5, r3, r1
    ov15_021FD574(4, 0, 0);
    // strh r1, [r4, r0]
    // add r0, #0x66
    GetItemAttr(*((u16*)*((u32*)(r4 + (0x8d << 2)))), 0, 6);
    // asr r1, r0, #1
    // str r1, [r4, r0]
    ov15_021FD43C(*((u32*)r4), 5, 0);
    ScheduleBgTilemapBufferTransfer(*((u32*)r4), 5);
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + (0xa5 << 2))), 0);
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + (0xa6 << 2))), 0);
    ov15_02200458(r4, 0);
    ov15_021FD788(r4, 0);
    // ldrsh r1, [r5, r1]
    // sub r2, #8
    ov15_021FF4EC(r4, 6, *((u32*)(r4 + 0x00000644)));
    // sub r1, #8
    ov15_022002B4(r4, *((u32*)(r4 + 0x00000644)));
    // add r2, #0x66
    ov15_021FECA0(r4, (r4 + 4), *((u16*)*((u32*)(r4 + (0x8d << 2)))));
    ov15_021FFF24(r4);
    // add r0, #0x66
    GetItemAttr(*((u16*)*((u32*)(r4 + (0x8d << 2)))), 3, 6);
    NewString_ReadMsgData(*((u32*)(r4 + (0x2f << 4))), 0x4c);
    // sub r2, #0xc0
    // add r2, #0x66
    BufferItemName(*((u32*)(r4 + (0xbd << 2))), 0, *((u16*)*((u32*)(r4 + (0xbd << 2)))));
    StringExpandPlaceholders(*((u32*)(r4 + (0xbd << 2))), *((u32*)(r4 + 0x000005E4)), r5);
    String_Delete(r5);
    ov15_021FEF48(r4, 0);
    // strb r0, [r4, r1]
    ov15_021FF0FC(r4, 0);
    ov15_021FF068(r4);
    ov15_021FEDEC(r4, 2);
    // add r0, #0x64
    // add r1, r2, r0
    // add r2, #0x66
    Pocket_GetQuantity(*((u32*)(*((u8*)*((u32*)(r4 + (0x8d << 2)))) + 4)), *((u8*)(*((u8*)*((u32*)(r4 + (0x8d << 2)))) + 0xd)), *((u16*)*((u32*)(r4 + (0x8d << 2)))), 6);
    NewString_ReadMsgData(*((u32*)(r4 + (0x2f << 4))), 0x4e);
    // str r1, [sp]
    // str r0, [sp, #4]
    // ldrsh r3, [r4, r2]
    BufferIntegerAsString(*((u32*)(r4 + (0xbd << 2))), 0, (*((u32*)(r4 + ((0x1a << 6) + 4))) * r3), 6);
    StringExpandPlaceholders(*((u32*)(r4 + (0xbd << 2))), *((u32*)(r4 + 0x000005E4)), r5);
    String_Delete(r5);
    ov15_021FEF48(r4, 1);
    // strb r0, [r4, r1]
    // ldrsh r3, [r5, r1]
    // add r1, #0x3e
    // add r2, r3, r2
    // sub r2, #8
    // add r0, r0, r2
    // strh r0, [r4, r1]
    NewString_ReadMsgData(*((u32*)(r4 + (0x2f << 4))), 0x4d, (*((u32*)(r4 + 0x00000644)) << 2));
    // sub r2, #0xc0
    // add r2, #0x66
    BufferItemName(*((u32*)(r4 + (0xbd << 2))), 0, *((u16*)*((u32*)(r4 + (0xbd << 2)))));
    StringExpandPlaceholders(*((u32*)(r4 + (0xbd << 2))), *((u32*)(r4 + 0x000005E4)), r5);
    String_Delete(r5);
    ov15_021FEF48(r4, 1);
    // strb r0, [r4, r1]
}





void ov15_021FCD80(void) {
    TextPrinterCheckActive(*((u8*)(r0 + 0x00000616)));
    // strh r1, [r4, r0]
    ov15_021FD574(r4, 4, 0, 0);
    ov15_02200300(r4, 2, *((u16*)(r4 + 0x00000682)));
    ov15_021FF7FC(r4);
    ov15_021FF29C(r4, 1);
    ov15_022004DC(r4, 1);
    ov15_021FFFDC(r4, 0);
}





void ov15_021FCDE4(void) {
    ov15_021FAC2C(4);
    ov15_022002EC(*((u16*)(r4 + 0x00000682)));
    // mvn r6, r6
    // add r0, r6, r6
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021FCE26: ; jump table
    // ldrsh r0, [r4, r1]
    ov15_021FBD28((*((u16*)(r0 + 6)) << 0x10), *((u16*)(r4 + ((0x1a << 6) + 2))), 0xa);
    // strh r0, [r4, r1]
    ManagedSprite_SetAnimationFrame(*((u32*)(r4 + (0x2d << 4))), 0);
    ManagedSprite_SetAnim(*((u32*)(r4 + (0x2d << 4))), 0x1a);
    // ldrsh r0, [r4, r1]
    ov15_021FBD28(*((u16*)(r4 + ((0x1a << 6) + 2))), 1);
    // strh r0, [r4, r1]
    ManagedSprite_SetAnimationFrame(*((u32*)(r4 + (0xb5 << 2))), 0);
    ManagedSprite_SetAnim(*((u32*)(r4 + (0xb5 << 2))), 0x1a);
    // ldrsh r0, [r4, r1]
    // mvn r2, r2
    ov15_021FBD28(*((u16*)(r4 + ((0x1a << 6) + 2))), 9);
    // strh r0, [r4, r1]
    ManagedSprite_SetAnimationFrame(*((u32*)(r4 + (0xb7 << 2))), 0);
    ManagedSprite_SetAnim(*((u32*)(r4 + (0xb7 << 2))), 0x1c);
    // ldrsh r0, [r4, r1]
    // mvn r2, r2
    ov15_021FBD28(*((u16*)(r4 + ((0x1a << 6) + 2))), 0);
    // strh r0, [r4, r1]
    ManagedSprite_SetAnimationFrame(*((u32*)(r4 + (0x2e << 4))), 0);
    ManagedSprite_SetAnim(*((u32*)(r4 + (0x2e << 4))), 0x1c);
    // add r0, r4, r1
    sub_020881C0(*((u16*)(r4 + ((0x1a << 6) + 2))));
    // tst r0, r1
    // tst r0, r1
    // add r0, r5, r5
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021FCF3E: ; jump table
    ov15_021FF068(r4, *((u32*)(gSystem + 0x48)));
    ov15_021FEDEC(r4, 2);
    PlaySE(0x00000637);
    ov15_021FF068(r4);
    ov15_021FEDEC(r4, 2);
    PlaySE(0x00000637);
    PlaySE(0x000005DC);
    // str r0, [sp]
    ov15_021FD7D0(r4, 0x26, 9, 8);
    // mov r0, #SEQ_SE_GS_GEARCANCEL>>6
    PlaySE((r0 << 6));
    // str r0, [sp]
    ov15_021FD7D0(r4, 0x13, 9, 8);
}





void ov15_021FCFC8(void) {
    // add r0, #0x44
    sub_0200E5D4(1);
    ov15_021FF834(r5);
    // add r0, #0x34
    FillWindowPixelBuffer(r5, 0xf);
    NewString_ReadMsgData(*((u32*)(r5 + (0x2f << 4))), 0x4e);
    // str r1, [sp]
    // str r0, [sp, #4]
    // ldrsh r3, [r5, r2]
    BufferIntegerAsString(*((u32*)(r5 + (0xbd << 2))), 0, (*((u32*)(r5 + ((0x1a << 6) + 4))) * r3), 6);
    StringExpandPlaceholders(*((u32*)(r5 + (0xbd << 2))), *((u32*)(r5 + 0x000005E4)), r4);
    String_Delete(r4);
    ov15_021FEF48(r5, 1);
    // strb r0, [r5, r1]
    ov15_02200428(r5, 0x00000616);
    ov15_021FFF24(r5);
    ov15_021FD788(r5, 0);
}





void ov15_021FD058(void) {
    // str r1, [r5, r0]
    // add r0, r5, r0
    sub_0200E5D4((0x85 << 2), 1);
    // add r0, #0x44
    sub_0200E5D4(r5, 1);
    // add r0, #0x34
    ClearFrameAndWindow2(r5, 1);
    // add r0, #0x34
    ClearWindowTilemapAndScheduleTransfer(r5);
    ScheduleWindowCopyToVram((r5 + 4));
    ov15_02200428(r5);
    ov15_021FFF24(r5);
    ov15_021FA074(r5);
    // add r4, #0x64
    // add r1, r1, r3
    ov15_02200140(r5, (r4 + 4), r0, 0);
    ov15_021FE868(r5);
    ov15_021FED3C(r5);
    ov15_021FB518(r5);
    ov15_02200458(r5, 1);
    ov15_021FD788(r5, 1);
}





void ov15_021FD0E8(void) {
    TextPrinterCheckActive(*((u8*)(r0 + 0x00000616)));
    ov15_021FF004(r4);
}





void ov15_021FD10C(void) {
    YesNoPrompt_HandleInput(*((u32*)(r0 + 0x00000804)));
    // mvn r1, r1
    ov15_021FF058(r4, 0);
    NewString_ReadMsgData(*((u32*)(r4 + (0x2f << 4))), 0x4f);
    // ldrsh r0, [r4, r0]
    // sub r2, #0xc0
    // add r2, #0x66
    BufferItemNamePlural(*((u32*)(r4 + (0xbd << 2))), 0, *((u16*)*((u32*)(r4 + (0xbd << 2)))));
    // sub r2, #0xc0
    // add r2, #0x66
    BufferItemName(*((u32*)(r4 + (0xbd << 2))), 0, *((u16*)*((u32*)(r4 + (0xbd << 2)))));
    // str r0, [sp]
    // str r1, [sp, #4]
    // ldrsh r3, [r4, r2]
    BufferIntegerAsString(*((u32*)(r4 + (0xbd << 2))), 1, (*((u32*)(r4 + ((0x1a << 6) + 4))) * r3), 6);
    StringExpandPlaceholders(*((u32*)(r4 + (0xbd << 2))), *((u32*)(r4 + 0x000005E4)), r5);
    String_Delete(r5);
    ov15_021FEF48(r4, 0);
    // strb r0, [r4, r1]
    ov15_021FF058(r4, 0x00000616);
    // str r1, [r4, r0]
    // add r0, r4, r0
    sub_0200E5D4((0x85 << 2), 1);
    // add r0, #0x34
    ClearFrameAndWindow2(r4, 1);
    // add r0, #0x34
    ClearWindowTilemapAndScheduleTransfer(r4);
    ScheduleWindowCopyToVram((r4 + 4));
    ov15_021FA074(r4);
    // add r5, #0x64
    // add r1, r1, r3
    ov15_02200140(r4, (r5 + 4), r0, 0);
    ov15_021FE868(r4);
    ov15_021FED3C(r4);
    ov15_021FB518(r4);
    ov15_02200458(r4, 1);
    ov15_021FD788(r4, 1);
}





void ov15_021FD24C(void) {
    TextPrinterCheckActive(*((u8*)(r0 + 0x00000616)));
    PlaySE(0x00000643);
    // ldrsh r2, [r4, r1]
    PlayerProfile_AddMoney(*((u32*)(r4 + (0x8f << 2))), (*((u32*)(r4 + ((0x1a << 6) + 4))) * r2));
    // ldrsh r0, [r4, r0]
    // add r0, #0x75
    // add r0, #0x75
    // add r1, #0x75
    // strb r0, [r1]
    // add r0, #0x75
    // strb r1, [r0]
    // add r0, #0x64
    // add r1, r2, r3
    // str r0, [sp]
    // add r2, #0x66
    Pocket_TakeItem(*((u32*)(*((u8*)*((u32*)(r4 + (0x8d << 2)))) + 4)), *((u8*)(*((u8*)*((u32*)(r4 + (0x8d << 2)))) + 0xd)), *((u16*)*((u32*)(r4 + (0x8d << 2)))), *((u16*)(r4 + (0x1a << 6))));
    ov15_021F9F08(r4);
    // add r4, #0x34
    ScheduleWindowCopyToVram(r4);
}





void ov15_021FD2FC(void) {
    TextPrinterCheckActive(*((u8*)(r0 + 0x00000616)));
    // tst r0, r1
    // str r1, [r5, r0]
    // add r0, r5, r0
    sub_0200E5D4((0x85 << 2), 1);
    // add r0, #0x34
    ClearFrameAndWindow2(r5, 1);
    // add r0, #0x34
    ClearWindowTilemapAndScheduleTransfer(r5);
    ScheduleWindowCopyToVram((r5 + 4));
    ov15_021FA074(r5);
    // add r4, #0x64
    // add r1, r1, r3
    ov15_02200140(r5, (r4 + 4), r0, 1);
    ov15_021FE868(r5);
    ov15_021FED3C(r5);
    ov15_021FB518(r5);
    ov15_021FA170(r5);
    ov15_02200458(r5, 1);
    ov15_021FD788(r5, 1);
}





void ov15_021FD3AC(void) {
}





void ov15_021FD3C0(void) {
    // add r0, #0x68
    // strh r1, [r0]
}





void ov15_021FD3F0(void) {
    // cmp r0, #4
    // beq _021FD3FC
    // cmp r1, #0x5f
    // blo _021FD400
    // cmp r1, #0x63
    // bhs _021FD400
}





void ov15_021FD404(void) {
    // add r1, r0, r1
    // add r0, r5, r4
    GXS_LoadBGPltt(*((u32*)((r1 << 2) + 0x00000694)), 0, 0x20);
    // add r0, r5, r4
    GXS_LoadBGPltt(0x20, 0x40);
    // add r0, r5, r4
    GXS_LoadBGPltt(0x60, 0x20);
}





void ov15_021FD43C(void) {
    // str r1, [sp, #0x10]
    GetBgTilemapBuffer(((r1 << 0x18) >> 0x18));
    // str r0, [sp, #0x14]
    // add r5, r1, r0
    // ldr r0, [sp, #0x10]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r2, r2, r3
    // ldr r2, [sp, #0x14]
    // add r2, r2, r3
    LoadRectToBgTilemapRect(r6, (((r4 << 5) << 0x18) >> 0x18), *((u8*)(r5 + 1)), *((u8*)(r5 + 3)));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(r6, r4, 0, *((u8*)(r5 + 3)));
    // add r5, #8
}





void ov15_021FD4C0(void) {
    // str r1, [sp, #0x10]
    // str r3, [sp, #0x14]
    GetBgTilemapBuffer(((r1 << 0x18) >> 0x18));
    // str r0, [sp, #0x18]
    // add r5, r1, r0
    // ldr r0, [sp, #0x10]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(r6, ((((r5 - 1) << 3) << 0x18) >> 0x18), 0, *((u8*)r5));
    // ldr r0, [sp, #0x14]
    // mvn r1, r1
    // add r3, r1, r0
    // ldr r0, [sp, #0x14]
    // str r0, [sp]
    // ldr r1, [sp, #0x10]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x18]
    // str r0, [sp, #8]
    // add r2, r2, r4
    LoadRectToBgTilemapRect(r6, ((ov15_02201328 << 0x18) >> 0x18), *((u8*)r3));
    // str r0, [sp]
    // ldr r1, [sp, #0x10]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x18]
    // str r0, [sp, #8]
    // add r2, r2, r4
    LoadRectToBgTilemapRect(r6, ((r1 << 0x18) >> 0x18), *((u8*)r3));
}





void ov15_021FD574(void) {
    // add r0, r5, r5
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021FD59A: ; jump table
    // str r0, [sp]
    // add r3, sp, #4
    // ldr r3, [sp, #4]
    // add r2, #0xc
    // ldr r1, [sp, #4]
    // str r0, [sp]
    // add r3, sp, #4
    // ldr r3, [sp, #4]
    // add r2, #0xc
    // str r0, [sp]
    // add r3, sp, #4
    // ldr r3, [sp, #4]
    // add r2, #0xc
    // ldr r1, [sp, #4]
    // str r0, [sp]
    // add r3, sp, #4
    // ldr r3, [sp, #4]
    // add r2, #0xc
    // str r0, [sp]
    // add r3, sp, #4
    // ldr r3, [sp, #4]
    // add r2, #0xc
    // str r0, [sp]
    // add r3, sp, #4
    // ldr r3, [sp, #4]
    // add r2, #0xc
    // str r0, [sp]
    // add r3, sp, #4
    // ldr r3, [sp, #4]
    // add r2, #0xc
}





void ov15_021FD774(void) {
}





void ov15_021FD788(void) {
    // add r0, #0x74
}





void ov15_021FD7D0(void) {
    // add r0, r0, r4
    // strb r1, [r0]
    // and r1, r2
    // ldr r2, [sp, #8]
}





void ov15_021FD810(void) {
    // add r0, r4, r2
    // strb r1, [r0]
    // add r5, r4, r0
}





void ov15_021FD850(void) {
    // add r4, r0, r5
    // add r1, r0, r1
    // add r1, r0, r1
    // and r1, r2
    // add r1, r0, r1
    // and r1, r2
}





void ov15_021FD93C(void) {
    GF3dRender_InitSimpleManager(6);
    // and r1, r0
    // strh r0, [r2]
    G3X_SetFog(0, 0, 0, 0);
    // str r0, [sp]
    G3X_SetClearColor(0, 0, 0x00007FFF, 0);
    NNS_G3dGlbMaterialColorDiffAmb(0x00003DEF, 0x0000294A, 0);
    NNS_G3dGlbMaterialColorSpecEmi(0x00003DEF, 0x00003DEF, 0);
    // str r0, [sp]
    // str r1, [sp, #4]
    NNS_G3dGlbPolygonAttr(0xf, 0, 3, 0);
    // and r1, r0
    // strh r0, [r2]
    G3X_SetEdgeColorTable(ov15_02201304, *((u16*)0x04000060), 0x04000060);
    SetBgPriority(0, 0);
    GfGfx_EngineATogglePlanes(1, 1);
    Camera_New(6);
    // str r0, [r5, r2]
    // add r0, #0xec
    // add r3, r5, r0
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // add r0, #0xf8
    // add r3, r5, r0
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // sub r1, #0xc
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // sub r2, #8
    // add r2, r5, r2
    Camera_Init_FromTargetDistanceAndAngle(r3, *((u32*)(r5 + 0x0000091C)), 0x0000091C, *((u16*)(r5 + (0x0000091C + 2))));
    // add r2, r5, r0
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // add r0, r5, r0
    ov15_021FDAD0(0x00000808, ov15_0220050C);
    // add r1, #0x64
    // add r0, r5, r0
    ov15_021FDAF4(0x00000808, (*((u8*)*((u32*)(r5 + (0x8d << 2)))) + 1), 7);
    Camera_SetPerspectiveClippingPlane((0x7b << 0xc), 0x006A4000, *((u32*)(r5 + 0x00000818)));
    Camera_SetStaticPtr(*((u32*)(r5 + 0x00000818)));
    NNS_G3dGlbLightVector(0, (1 << 0xc), 0, 0);
    NNS_G3dGlbLightColor(r4, r7);
    ov15_021FDD70(r5);
    GfGfx_EngineATogglePlanes(1, 1);
    // strh r0, [r1]
}





void ov15_021FDAD0(void) {
    // str r3, [r0, r2]
    // str r3, [r0, r1]
    // add r1, #8
    // str r3, [r0, r1]
    // add r1, #0xc
    // strh r3, [r0, r1]
    // add r2, #0xe
    // strh r3, [r0, r2]
}





void ov15_021FDAF4(void) {
    // sub r3, #8
    // sub r3, #0xc
    // str r5, [r0, r3]
    // sub r3, #8
    // str r1, [r0, r3]
    // strh r1, [r0, r4]
    // strh r2, [r0, r1]
    // str r1, [r0, r2]
}





void ov15_021FDB2C(void) {
    // add r1, #0x98
    // add r4, r3, r2
    // add r1, #0x9a
    // add r1, #0x98
    // add r1, #0x98
    // strh r2, [r5, r1]
    // add r1, #0x8c
    // add r0, #0x90
    // str r1, [sp, #8]
    // str r0, [sp, #4]
    // sub r0, r1, r7
    // bpl _021FDB76
    // neg r0, r0
    // mvn r1, r1
    // sub r0, r2, r0
    // mvn r2, r2
    // str r1, [sp]
    // ldr r1, [sp]
    _s32_div_f((*((u32*)(r0 + 0x90)) << 4), (0x0000012A - 2), 0x0000012A, ov15_02200790);
    // add r0, r7, r0
    // str r0, [sp, #0x14]
    // str r1, [sp]
    // ldr r1, [sp]
    _s32_div_f((r0 * r6), (r2 - 2));
    // sub r0, r7, r0
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #8]
    // ldr r1, [sp]
    // add r0, r4, r0
    // ldr r0, [sp, #4]
    // add r0, r4, r0
    // sub r0, r0, r7
    _s32_div_f(*((u16*)((r0 * r6) + 2)));
    // add r0, r7, r0
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #8]
    // ldr r1, [sp]
    // add r0, r4, r0
    // ldr r0, [sp, #4]
    // add r0, r4, r0
    // sub r0, r0, r7
    _s32_div_f(*((u32*)((r0 * r6) + 8)));
    // add r0, r7, r0
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #8]
    // ldr r1, [sp]
    // add r0, r4, r0
    // ldr r0, [sp, #4]
    // add r0, r4, r0
    // sub r0, r0, r7
    _s32_div_f(*((u32*)((r0 * r6) + 0xc)));
    // add r1, r7, r0
    // ldr r2, [sp, #0x14]
    // strh r2, [r5, r0]
    // ldr r2, [sp, #0x10]
    // strh r2, [r5, r3]
    // ldr r2, [sp, #0xc]
    // add r0, #0x24
    // str r2, [r5, r3]
    // str r1, [r5, r0]
    // mvn r2, r2
    // sub r0, #8
    // sub r0, #0xc
    // str r3, [r5, r0]
    // sub r0, #8
    // str r3, [r5, r0]
    // str r2, [r5, r0]
    // strh r0, [r5, r1]
}





void ov15_021FDC6C(void) {
    ov15_021FDF20();
    Camera_Delete(*((u32*)(r4 + 0x00000818)));
    GF3dRender_DeleteSimpleManager();
}





void ov15_021FDC88(void) {
    // add r3, sp, #0x18
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // add r2, sp, #0xc
    // str r0, [r3]
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // add r0, r5, r0
    ov15_021FDB2C(0x00000808, *((u8*)(r0 + 0x00000615)), (4 - 1), ov15_022004F4);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r1, #0xf8
    // str r0, [sp, #8]
    // add r0, #0xec
    // add r2, #0xfc
    // add r0, r5, r0
    // add r2, r5, r2
    Camera_Init_FromTargetDistanceAndAngle(0x00000818, *((u32*)(r5 + 0x00000818)), 0x00000818, *((u16*)(r5 + (0x0000091C + 2))));
    Thunk_G3X_Reset();
    Camera_PushLookAtToNNSGlb();
    // add r4, r5, r0
    // add r0, #0xe4
    // add r0, r4, r0
    // add r0, #0xa0
    ov15_021FDD54(*((u32*)(*((u32*)r4) << 2)));
    // add r0, #0xe4
    // add r0, r4, r0
    // add r0, #0xc0
    ov15_021FDD54(*((u32*)(*((u32*)r4) << 2)));
    // add r0, #0xe0
    ov15_021FDD54(*((u32*)r4));
    // add r1, r5, r1
    // add r2, sp, #0x18
    // add r3, sp, #0xc
    GF3dRender_DrawModel(r4, 0x00000934);
    RequestSwap3DBuffers(0, 0);
}





void ov15_021FDD54(void) {
    // add r2, r2, r1
    // str r2, [r0]
    // str r1, [r0]
}





void ov15_021FDD70(void) {
    NARC_New(0xf, 6);
    // str r0, [sp, #0x10]
    // add r0, r7, r0
    HeapExp_FndInitAllocator(0x00000808, 6, 4);
    // add r4, r7, r0
    // str r0, [sp, #8]
    // str r0, [sp, #4]
    // str r0, [sp]
    // str r0, [sp, #8]
    // str r0, [sp, #4]
    // str r0, [sp]
    // ldr r0, [sp, #0x10]
    NARC_AllocAndReadWholeMember(0x5c, 0x4a, 6);
    *((u32*)(r4 + 0x58)) = r0;
    // add r1, #0x54
    // add r2, #0x58
    GF3dRender_InitObjFromHeader(r4, r4, r4);
    NNS_G3dGetTex(*((u32*)(r4 + 0x58)));
    // str r0, [sp, #0xc]
    NNSi_G3dModifyMatFlag(*((u32*)(r4 + 0x54)), 1, 0x40);
    NNSi_G3dModifyMatFlag(*((u32*)(r4 + 0x54)), 1, 0x80);
    NNSi_G3dModifyMatFlag(*((u32*)(r4 + 0x54)), 1, (1 << 9));
    NNSi_G3dModifyMatFlag(*((u32*)(r4 + 0x54)), 1, (1 << 0xa));
    NNSi_G3dModifyPolygonAttrMask(*((u32*)(r4 + 0x54)), 1, (0x3f << 0x18));
    // ldr r1, [sp, #8]
    // ldr r0, [sp, #0x10]
    // add r1, r1, r6
    NARC_AllocAndReadWholeMember(6);
    *((u32*)(r5 + 0x5c)) = r0;
    NNS_G3dGetAnmByIdx(0);
    // str r0, [sp, #0x14]
    // ldr r1, [sp, #0x14]
    // add r0, r7, r0
    NNS_G3dAllocAnmObj(0x00000808, *((u32*)(r4 + 0x54)));
    // add r1, #0xa0
    // str r0, [r1]
    // add r0, #0xa0
    // ldr r1, [sp, #0x14]
    // ldr r3, [sp, #0xc]
    NNS_G3dAnmObjInit(*((u32*)r5), r5, *((u32*)(r4 + 0x54)));
    // ldr r1, [sp, #4]
    // ldr r0, [sp, #0x10]
    // add r1, r1, r6
    NARC_AllocAndReadWholeMember(6);
    *((u32*)(r5 + 0x7c)) = r0;
    NNS_G3dGetAnmByIdx(0);
    // str r0, [sp, #0x18]
    // ldr r1, [sp, #0x18]
    // add r0, r7, r0
    NNS_G3dAllocAnmObj(0x00000808, *((u32*)(r4 + 0x54)));
    // add r1, #0xc0
    // str r0, [r1]
    // add r0, #0xc0
    // ldr r1, [sp, #0x18]
    // ldr r3, [sp, #0xc]
    NNS_G3dAnmObjInit(*((u32*)r5), r5, *((u32*)(r4 + 0x54)));
    // ldr r0, [sp, #0x10]
    // ldr r1, [sp]
    NARC_AllocAndReadWholeMember(6);
    // add r1, #0x9c
    // str r0, [r1]
    // add r0, #0x9c
    NNS_G3dGetAnmByIdx(*((u32*)r4), 0);
    // add r0, r7, r0
    NNS_G3dAllocAnmObj(0x00000808, r0, *((u32*)(r4 + 0x54)));
    // add r1, #0xe0
    // str r0, [r1]
    // add r0, #0xe0
    // ldr r3, [sp, #0xc]
    NNS_G3dAnmObjInit(*((u32*)r4), r5, *((u32*)(r4 + 0x54)));
    // add r0, #0x64
    // add r0, #0xe4
    // str r1, [r0]
    // add r1, #0xe4
    // add r1, r4, r1
    // add r1, #0xa0
    NNS_G3dRenderObjAddAnmObj(r4, *((u32*)(*((u32*)r4) << 2)));
    // add r1, #0xe4
    // add r1, r4, r1
    // add r1, #0xc0
    NNS_G3dRenderObjAddAnmObj(r4, *((u32*)(*((u32*)r4) << 2)));
    // add r4, #0xe0
    NNS_G3dRenderObjAddAnmObj(r4, *((u32*)r4));
    // ldr r0, [sp, #0x10]
    NARC_Delete();
}





void ov15_021FDF20(void) {
    // add r0, r5, r0
    // str r0, [sp]
    // add r1, #0xa0
    // add r0, r5, r7
    NNS_G3dFreeAnmObj(0x0000081C, *((u32*)0x0000081C));
    // add r1, #0xc0
    // add r0, r5, r7
    NNS_G3dFreeAnmObj(*((u32*)r4));
    Heap_Free(*((u32*)(r4 + 0x5c)));
    Heap_Free(*((u32*)(r4 + 0x7c)));
    // ldr r1, [sp]
    // add r1, #0xe0
    // add r0, r5, r0
    NNS_G3dFreeAnmObj(0x00000808, *((u32*)r1));
    // ldr r0, [sp]
    // add r0, #0x9c
    Heap_Free(*((u32*)r0));
    // ldr r0, [sp]
    Heap_Free(*((u32*)(r0 + 0x58)));
}





void ov15_021FDF88(void) {
    // add r4, r5, r0
    // add r1, #0xe4
    // add r1, r4, r1
    // add r1, #0xc0
    NNS_G3dRenderObjRemoveAnmObj(r4, *((u32*)(*((u32*)r4) << 2)));
    // add r1, #0xe4
    // add r1, r4, r1
    // add r1, #0xa0
    NNS_G3dRenderObjRemoveAnmObj(r4, *((u32*)(*((u32*)r4) << 2)));
    // add r0, #0x64
    // add r0, #0xe4
    // str r1, [r0]
    // add r1, #0xe4
    // add r1, r4, r1
    // add r1, #0xa0
    // str r0, [r1]
    // add r1, #0xe4
    // add r1, r4, r1
    // add r1, #0xc0
    // str r0, [r1]
    // add r1, #0xe0
    // str r0, [r1]
    // add r1, #0xe4
    // add r1, r4, r1
    // add r1, #0xa0
    NNS_G3dRenderObjAddAnmObj(r4, *((u32*)(*((u32*)r4) << 2)));
    // add r1, #0xe4
    // add r1, r4, r1
    // add r1, #0xc0
    NNS_G3dRenderObjAddAnmObj(r4, *((u32*)(*((u32*)r4) << 2)));
}





void ov15_021FE020(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r2, [sp, #0x10]
    AddWindowParameterized(*((u32*)r0), (r0 + 4), 1, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, #0x14
    AddWindowParameterized(*((u32*)r4), r4, 1, 0);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r3, [sp, #8]
    // str r0, [sp, #0xc]
    // str r1, [sp, #0x10]
    // add r1, #0x24
    AddWindowParameterized(*((u32*)r4), r4, 4, 2);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r2, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, #0x34
    AddWindowParameterized(*((u32*)r4), r4, 4, 2);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, #0x44
    AddWindowParameterized(*((u32*)r4), r4, 1, 0x13);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, #0x54
    AddWindowParameterized(*((u32*)r4), r4, 1, 1);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, #0x64
    AddWindowParameterized(*((u32*)r4), r4, 4, 0xa);
    // add r0, #0x64
    FillWindowPixelBuffer(r4, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, #0x74
    AddWindowParameterized(*((u32*)r4), r4, 4, 0x18);
    // add r0, #0x74
    FillWindowPixelBuffer(r4, 0);
    // add r0, #0xb4
    // add r4, #0x10
    // str r1, [r0]
}





void ov15_021FE154(void) {
    // add r0, r4, r0
}





void ov15_021FE17C(void) {
    // add r0, #0xb4
    // add r5, #0xb4
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    AddWindowParameterized(*((u32*)r0), r0, 4, ((*((u32*)ov15_02200908) << 0x18) >> 0x18));
    // add r4, #0xc
    // add r5, #0x10
}





void ov15_021FE1D0(void) {
    // add r0, #0xb4
    // add r4, #0xb4
    // add r0, #0xb4
    // str r7, [r0]
    // add r4, #0x10
    // add r5, #0x10
}





void ov15_021FE204(void) {
    // str r0, [sp, #0x14]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r2, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r1, [sp, #0x14]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x14]
    // add r1, r1, r3
    AddWindowParameterized(*((u32*)0x000002CF), 4, 0xc);
    // ldr r0, [sp, #0x14]
    // add r0, r0, r1
    FillWindowPixelBuffer(0);
    // ldr r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    // add r0, #0xb4
    // str r0, [sp, #0x18]
    // add r0, #0xd
    // ldr r1, [sp, #0x18]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x14]
    // add r1, r1, r7
    AddWindowParameterized(*((u32*)((0x0000031B << 0x10) >> 0x10)), 4, ((*((u32*)ov15_022008E8) << 0x18) >> 0x18));
    // ldr r0, [sp, #0x18]
    // add r0, r0, r7
    FillWindowPixelBuffer(0);
    // add r4, #0x14
    // add r5, #8
    // ldr r0, [sp, #0x14]
    // str r0, [sp, #0x1c]
    // add r0, #0xb4
    // str r0, [sp, #0x1c]
    // add r0, #0x11
    // ldr r1, [sp, #0x1c]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x14]
    // add r1, r1, r7
    AddWindowParameterized(*((u32*)((0x000002FB << 0x10) >> 0x10)), 4, ((*((u32*)ov15_022008D0) << 0x18) >> 0x18));
    // ldr r0, [sp, #0x1c]
    // add r0, r0, r7
    FillWindowPixelBuffer(0);
    // add r5, #8
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp, #0x14]
    // add r1, r1, r2
    AddWindowParameterized(*((u32*)0x0000030D), 4, 0xe);
    // ldr r0, [sp, #0x14]
    // add r0, r0, r1
    FillWindowPixelBuffer(0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r2, [sp, #8]
    // str r3, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp, #0x14]
    // add r1, r1, r4
    AddWindowParameterized(*((u32*)0x0000031B), 4, 0xb);
    // ldr r0, [sp, #0x14]
    // add r0, r0, r1
    FillWindowPixelBuffer(0);
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r2, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r1, [sp, #0x14]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x14]
    // add r4, #0x10
    // add r1, r1, r4
    AddWindowParameterized(*((u32*)0x00000363), 4, 0);
    // ldr r0, [sp, #0x14]
    // add r0, r0, r1
    FillWindowPixelBuffer(0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp, #0x14]
    // add r1, r1, r2
    AddWindowParameterized(*((u32*)0x00000387), 4, 0x18);
    // ldr r0, [sp, #0x14]
    // add r0, r0, r1
    FillWindowPixelBuffer(0);
}





void ov15_021FE3E0(void) {
    // str r0, [sp]
    // ldr r5, [sp]
    // add r6, #0xb4
    // add r0, #0x11
    // add r0, r6, r7
    // add r0, r6, r7
    // str r1, [r5, r0]
    // add r5, #0x10
    // ldr r0, [sp]
    // add r1, #0x60
    // add r0, r0, r1
    // ldr r0, [sp]
    // add r0, r0, r1
    // ldr r0, [sp]
    // str r2, [r0, r1]
    // sub r1, #0x10
    // add r0, r0, r1
    // ldr r0, [sp]
    // str r2, [r0, r1]
    // sub r1, #0x10
    // add r0, r0, r1
    // ldr r0, [sp]
    // str r2, [r0, r1]
    // sub r1, #0x10
    // add r0, r0, r1
    // ldr r0, [sp]
    // add r0, r0, r1
    // ldr r0, [sp]
    // str r5, [r0, r1]
    // add r6, #0xb4
    // add r0, #0xd
    // add r0, r6, r7
    // add r0, r6, r7
    // str r1, [r4, r0]
    // add r4, #0x10
    // ldr r0, [sp]
    // sub r1, #0x10
    // add r0, r0, r1
    // ldr r0, [sp]
    // add r0, r0, r1
    // ldr r0, [sp]
    // str r2, [r0, r1]
}





void ov15_021FE4C8(void) {
    NewMsgDataFromNarc(1, 0x1b, 0xe1, 6);
    NewString_ReadMsgData(r0, 0);
    // add r1, r5, r1
    // str r0, [r1, r7]
    DestroyMsgData(r6, (r4 << 2));
}





void ov15_021FE504(void) {
    // add r0, r5, r0
    String_Delete(*((u32*)((0 << 2) + 0x000005F4)));
}





void ov15_021FE528(void) {
    // str r6, [sp]
    // str r7, [sp, #4]
    // add r2, #0xcd
    // str r7, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r2, #0xf1
    // str r0, [sp, #0xc]
}





void ov15_021FE584(void) {
    // ldr r0, [r5, r0]
}





void ov15_021FE5A4(void) {
    // ldr r0, [r5, r0]
}





void ov15_021FE5C4(void) {
    String_New(0x82, 6);
    GetItemDescIntoString(r6, 6);
    NewString_ReadMsgData(*((u32*)(r5 + (0x2f << 4))), 0x61);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor((r5 + 4), 0, r0, 0x14);
    String_Delete(r4);
}





void ov15_021FE620(void) {
    // add r4, #0x14
    TMHMGetMove(r1);
    // str r0, [sp, #0x10]
    NewString_ReadMsgData(*((u32*)(r5 + (0x2f << 4))), 0x65);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r4, 0, r0, 0);
    String_Delete(r6);
    NewString_ReadMsgData(*((u32*)(r5 + (0x2f << 4))), 0x59);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r4, 0, r0, 0);
    String_Delete(r6);
    NewString_ReadMsgData(*((u32*)(r5 + (0x2f << 4))), 0x5c);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r4, 0, r0, 0x48);
    String_Delete(r6);
    NewString_ReadMsgData(*((u32*)(r5 + (0x2f << 4))), 0x5a);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r4, 0, r0, 0xa8);
    String_Delete(r6);
    NewString_ReadMsgData(*((u32*)(r5 + (0x2f << 4))), 0x5b);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r4, 0, r0, 0xa8);
    String_Delete(r6);
    // ldr r0, [sp, #0x10]
    GetMoveMaxPP(0);
    NewString_ReadMsgData(*((u32*)(r5 + (0x2f << 4))), 0x5d);
    // str r0, [sp]
    // str r0, [sp, #4]
    BufferIntegerAsString(*((u32*)(r5 + (0xbd << 2))), 0, r7, 2);
    StringExpandPlaceholders(*((u32*)(r5 + (0xbd << 2))), *((u32*)(r5 + 0x000005E4)), r6);
    String_Delete(r6);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r4, 0, *((u32*)(r5 + 0x000005E4)), 0x30);
    // ldr r0, [sp, #0x10]
    GetMoveAttr(2);
    NewString_ReadMsgData(*((u32*)(r5 + (0x2f << 4))), 0x19);
    NewString_ReadMsgData(*((u32*)(r5 + (0x2f << 4))), 0x5e);
    // str r1, [sp]
    // str r0, [sp, #4]
    BufferIntegerAsString(*((u32*)(r5 + (0xbd << 2))), 0, r7, 3);
    StringExpandPlaceholders(*((u32*)(r5 + (0xbd << 2))), *((u32*)(r5 + 0x000005E4)), r6);
    String_Delete(r6);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r4, 0, *((u32*)(r5 + 0x000005E4)), 0xe8);
    // ldr r0, [sp, #0x10]
    GetMoveAttr(4);
    NewString_ReadMsgData(*((u32*)(r5 + (0x2f << 4))), 0x19);
    NewString_ReadMsgData(*((u32*)(r5 + (0x2f << 4))), 0x5e);
    // str r1, [sp]
    // str r0, [sp, #4]
    BufferIntegerAsString(*((u32*)(r5 + (0xbd << 2))), 0, r7, 3);
    StringExpandPlaceholders(*((u32*)(r5 + (0xbd << 2))), *((u32*)(r5 + 0x000005E4)), r6);
    String_Delete(r6);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r4, 0, *((u32*)(r5 + 0x000005E4)), 0xe8);
    ScheduleWindowCopyToVram(r4);
}





void ov15_021FE868(void) {
}





void ov15_021FE874(void) {
    NewString_ReadMsgData(*((u32*)(r0 + (0x2f << 4))), 0x27);
    // str r0, [r4, r1]
    NewString_ReadMsgData(*((u32*)(r4 + (0x2f << 4))), 0x26);
    // str r0, [r4, r1]
}





void ov15_021FE8A4(void) {
    String_Delete(*((u32*)(r0 + 0x000005E8)));
    String_Delete(*((u32*)(r4 + 0x000005EC)));
}





void ov15_021FE8C4(void) {
    String_New(0xa, 6);
    // str r1, [sp]
    // str r0, [sp, #4]
    BufferIntegerAsString(*((u32*)(r5 + (0xbd << 2))), 0, r6, 3);
    StringExpandPlaceholders(*((u32*)(r5 + (0xbd << 2))), r4, *((u32*)(r5 + 0x000005EC)));
    FontID_String_GetWidth(0, r4, 0);
    String_Delete(r4);
}





void ov15_021FE914(void) {
    // sub r0, #0x5d
    // sub r0, r1, r0
    // str r1, [sp]
    // str r6, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    sub_0200CE7C(*((u32*)(r0 + (0xbb << 2))), 2, (((0x69 << 2) << 0x10) >> 0x10), 2);
    ov15_021FE8C4(r5, *((u16*)(r7 + 2)), ((r4 << 0x10) >> 0x10), 0x00010200);
    // sub r0, r1, r0
    // str r6, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    PrintUIntOnWindow(*((u32*)(r5 + (0xbb << 2))), (((r0 - 1) << 0x10) >> 0x10), 2, 1);
    ov15_021FE9B0(r5, r6, 0x10);
}





void ov15_021FE990(void) {
    // ldr r0, [r0, r1]
}





void ov15_021FE9B0(void) {
    // add r1, sp, #0x18
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r2, [sp, #8]
    // str r1, [sp, #0xc]
    // str r1, [sp, #0x10]
    // str r0, [sp, #0x14]
    // ldr r1, [sp, #0x18]
}





void ov15_021FE9F0(void) {
    // add r1, sp, #0x18
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r3, [sp, #8]
    // str r1, [sp, #0xc]
    // str r1, [sp, #0x10]
    // str r0, [sp, #0x14]
    // ldr r1, [sp, #0x18]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r3, [sp, #8]
    // str r1, [sp, #0xc]
    // str r1, [sp, #0x10]
    // str r0, [sp, #0x14]
    // ldr r1, [sp, #0x18]
}





void ov15_021FEA5C(void) {
    // str r0, [r4, r1]
    // sub r1, #0x10
    // str r0, [r4, r1]
    // sub r1, #0x14
    // str r0, [r4, r1]
    // sub r1, #0x18
    // str r0, [r4, r1]
    // sub r1, #0x1c
    // str r0, [r4, r1]
    // sub r1, #0x20
    // str r0, [r4, r1]
    // sub r1, #0x24
    // str r0, [r4, r1]
    // sub r1, #0x28
    // str r0, [r4, r1]
    // sub r1, #0x2c
    // str r0, [r4, r1]
    // sub r1, #0x30
    // str r0, [r4, r1]
    // sub r1, #0x34
    // str r0, [r4, r1]
    // sub r1, #0x38
    // str r0, [r4, r1]
    // sub r1, #0x3c
    // str r0, [r4, r1]
    // sub r1, #0x40
    // str r0, [r4, r1]
    // sub r1, #0x44
    // str r0, [r4, r1]
    // sub r1, #0x48
    // str r0, [r4, r1]
}





void ov15_021FEB64(void) {
    // add r0, r5, r0
}





void ov15_021FEB84(void) {
    // add r0, #0x64
    // add r0, r2, r0
    // add r0, #0x14
    FillWindowPixelBuffer(r0, 0, *((u32*)(r0 + (0x8d << 2))));
    // add r1, #0x66
    ov15_021FE620(r5, *((u16*)*((u32*)(r5 + (0x8d << 2)))));
    ScheduleWindowCopyToVram((r5 + 4));
    // add r1, #0x66
    ov15_021FF97C(r5, *((u16*)*((u32*)(r5 + (0x8d << 2)))), 1);
    ov15_021F9C78(r5, 0);
    // add r0, #0x24
    DrawFrameAndWindow2(r5, 1, 0x000003E2, 0xc);
    // add r0, #0x24
    FillWindowPixelBuffer(r5, 0xf);
    // add r0, #0x64
    // add r4, r3, r0
    // add r0, #0x65
    // add r1, #0x66
    ov15_021FD3F0(*((u8*)(r4 + 8)), *((u16*)*((u32*)(r5 + (0x8d << 2)))), *((u8*)*((u32*)(r5 + (0x8d << 2)))), (*((u32*)(r5 + (0x8d << 2))) + 4));
    NewString_ReadMsgData(*((u32*)(r5 + (0x2f << 4))), 0x6a);
    NewString_ReadMsgData(*((u32*)(r5 + (0x2f << 4))), 0x2b);
    String_New(0x6c, 6);
    // ldrsh r2, [r4, r1]
    // add r1, r2, r1
    // sub r1, #8
    ov15_021FE584(r5, *((u32*)(r5 + 0x00000644)), 0);
    StringExpandPlaceholders(*((u32*)(r5 + (0xbd << 2))), r6, r7);
    // str r3, [sp]
    // str r0, [sp, #4]
    // add r0, #0x24
    // str r3, [sp, #8]
    AddTextPrinterParameterized(r5, 1, r6, 0);
    String_Delete(r6);
    String_Delete(r7);
    // add r5, #0x24
    ScheduleWindowCopyToVram(r5);
}





void ov15_021FECA0(void) {
}





void ov15_021FECC4(void) {
}





void ov15_021FECD8(void) {
    // add r2, #0x78
    NewString_ReadMsgData(*((u32*)(r0 + (0x2f << 4))), r2);
    FillWindowPixelBuffer(r5, 0);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r5, 0, r4, 0x14);
    String_Delete(r4);
    ScheduleWindowCopyToVram(r5);
}





void ov15_021FED24(void) {
}





void ov15_021FED3C(void) {
}





void ov15_021FED58(void) {
}





void ov15_021FED60(void) {
    // add r0, #0x24
    FillWindowPixelBuffer(0xff);
    NewString_ReadMsgData(*((u32*)(r5 + (0x2f << 4))), 0x2e);
    String_New(0x82, 6);
    ov15_021FE584(r5, *((u8*)(r5 + 0x00000672)), 0);
    StringExpandPlaceholders(*((u32*)(r5 + (0xbd << 2))), r4, r6);
    // add r0, #0x24
    DrawFrameAndWindow2(r5, 1, 0x000003E2, 0xc);
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0x24
    // str r3, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r5, 1, r4, 0);
    // add r5, #0x24
    ScheduleWindowCopyToVram(r5);
    String_Delete(r4);
    String_Delete(r6);
}





void ov15_021FEDEC(void) {
    // str r1, [sp, #0x10]
    // ldrsh r1, [r5, r0]
    GF_AssertFail((0xfa << 2));
    String_New(2, 6);
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x10]
    // ldrsh r7, [r5, r0]
    // ldr r0, [sp, #0x10]
    // add r5, #0xb4
    _u32_div_f(r7, 0x64);
    // str r0, [sp, #0x18]
    // str r0, [sp]
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp, #0x18]
    String16_FormatInteger(1, 1, 0);
    // ldr r0, [sp, #0x18]
    // sub r7, r7, r1
    _u32_div_f(r4, 0xa);
    // add r0, #0x11
    // str r0, [sp, #0x1c]
    // add r0, r5, r0
    FillWindowPixelBuffer((r6 << 4), 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x1c]
    // ldr r2, [sp, #0x14]
    // add r0, r5, r0
    AddTextPrinterParameterizedWithColor(0, 0, 0);
    // ldr r0, [sp, #0x1c]
    // add r0, r5, r0
    ScheduleWindowCopyToVram();
    // ldr r0, [sp, #0x10]
    // ldr r0, [sp, #0x14]
    String_Delete();
}





void ov15_021FEEA4(void) {
    NewString_ReadMsgData(*((u32*)(r0 + (0x2f << 4))), 0x37);
    // add r0, #0x64
    // add r1, r2, r0
    // ldrsh r0, [r5, r3]
    // ldrsh r2, [r1, r2]
    // sub r3, #0x3c
    // add r1, r2, r1
    // sub r1, #8
    ov15_021FE5A4(r5, *((u32*)(r5 + (0x1a << 6))), 0, (0x1a << 6));
    // ldrsh r2, [r1, r2]
    // sub r3, #0x3c
    // add r1, r2, r1
    // sub r1, #8
    ov15_021FE584(r5, *((u32*)(r5 + r3)), 0);
    // str r0, [sp]
    // str r1, [sp, #4]
    // ldrsh r2, [r5, r2]
    BufferIntegerAsString(*((u32*)(r5 + (0xbd << 2))), 1, (0x1a << 6), 3);
    StringExpandPlaceholders(*((u32*)(r5 + (0xbd << 2))), *((u32*)(r5 + 0x000005E4)), r4);
    String_Delete(r4);
    ov15_021FEF48(r5, 0);
    // strb r0, [r5, r1]
}





void ov15_021FEF48(void) {
    // add r4, #0x34
    GF_AssertFail(*((u32*)(r0 + (0x81 << 2))));
    // add r4, r5, r0
    FillWindowPixelBuffer(r4, 0xf);
    DrawFrameAndWindow2(r4, 1, 0x000003E2, 0xc);
    ScheduleWindowCopyToVram(r4);
    TextFlags_SetCanABSpeedUpPrint(1);
    TextFlags_SetAutoScrollParam(0);
    Options_GetTextFrameDelay(*((u32*)(r5 + (9 << 6))));
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    AddTextPrinterParameterized(r4, 1, *((u32*)(r5 + 0x000005E4)), 0);
}





void ov15_021FEFC4(void) {
    // add r0, r1, r1
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021FEFD6: ; jump table
    GF_IsAnySEPlaying((*((u16*)(r0 + 6)) << 0x10));
    IsFanfarePlaying();
    PlaySE(SEQ_SE_DP_PC_LOGIN);
    IsSEPlaying(SEQ_SE_DP_PC_LOGIN);
}





void ov15_021FF004(void) {
    // add r2, sp, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    *((u8*)(r2 + 0x10)) = 0x19;
    *((u8*)(r2 + 0x11)) = 6;
    *((u8*)(r2 + 0x12)) = (*((u8*)(r2 + 0x12)) & ~(0xf));
    *((u8*)(r2 + 0x12)) = (*((u8*)(r2 + 0x12)) & ~(0xf0));
    *((u8*)(r2 + 0x12)) = (*((u8*)(r2 + 0x12)) & ~(0xf0));
    *((u8*)(r2 + 0x13)) = 0;
    YesNoPrompt_Create(6, 0, (*((u8*)(r2 + 0x12)) & ~(0xf0)));
    // str r0, [r4, r1]
    // add r1, sp, #0
    YesNoPrompt_InitFromTemplate(*((u32*)(r4 + 0x00000804)), 0x00000804);
}





void ov15_021FF058(void) {
    // ldr r0, [r0, r1]
    // bx r3
    // _021FF060: .word 0x00000804
    // _021FF064: .word YesNoPrompt_Destroy
}





void ov15_021FF068(void) {
    // add r0, r5, r6
    FillWindowPixelBuffer(0);
    // add r0, #0xcc
    NewString_ReadMsgData(*((u32*)(r5 + r6)), 0x53);
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldrsh r2, [r5, r2]
    // add r0, #0xd0
    BufferIntegerAsString(*((u32*)(r5 + r6)), 0, ((0x00000684 - 4) * *((u32*)(r5 + 0x00000684))), 6);
    // add r0, #0xd0
    StringExpandPlaceholders(*((u32*)(r5 + r6)), *((u32*)(r5 + 0x000005E4)), r4);
    FontID_String_GetWidth(0, *((u32*)(r5 + 0x000005E4)), 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r0, r5, r6
    AddTextPrinterParameterizedWithColor(0x00010200, 0, *((u32*)(r5 + 0x000005E4)), 0);
    // add r0, r5, r6
    ScheduleWindowCopyToVram();
    String_Delete(r4);
}





void ov15_021FF0FC(void) {
    String_New((1 << 8), 6);
    // add r0, r5, r6
    FillWindowPixelBuffer(0);
    // add r0, #0xdc
    NewString_ReadMsgData(*((u32*)(r5 + r6)), 0x50);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r5, r6
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(0x00010200, 0, r0, 4);
    String_Delete(r7);
    // str r0, [sp]
    // add r0, r5, r6
    // str r3, [sp, #4]
    FillWindowPixelRect(0x48, 0, 0, 0x10);
    NewString_ReadMsgData(*((u32*)(r5 + (0x2f << 4))), 0x51);
    // str r0, [sp, #0x10]
    PlayerProfile_GetMoney(*((u32*)(r5 + (0x8f << 2))));
    // str r0, [sp]
    // str r0, [sp, #4]
    BufferIntegerAsString(*((u32*)(r5 + (0xbd << 2))), 0, r0, 6);
    // ldr r2, [sp, #0x10]
    StringExpandPlaceholders(*((u32*)(r5 + (0xbd << 2))), r4);
    FontID_String_GetWidth(0, r4, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r7, #8
    // str r0, [sp, #8]
    // add r0, r5, r6
    // sub r3, r3, r7
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(0x00010200, 0, r4, 0x44);
    // add r0, r5, r6
    ScheduleWindowCopyToVram();
    // ldr r0, [sp, #0x10]
    String_Delete();
    String_Delete(r4);
}





void ov15_021FF1E0(void) {
    // add r4, #0x54
    FillWindowPixelBuffer(r0, 0xf);
    DrawFrameAndWindow1(r4, 1, 0x000003F7, 0xe);
    NewString_ReadMsgData(*((u32*)(r5 + (0x2f << 4))), 0x73);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    AddTextPrinterParameterized(r4, 0, r0, 0);
    String_Delete(r6);
    NewString_ReadMsgData(*((u32*)(r5 + (0x2f << 4))), 0x74);
    // str r0, [sp]
    // str r0, [sp, #4]
    BufferIntegerAsString(*((u32*)(r5 + (0xbd << 2))), 0, 0, 3);
    StringExpandPlaceholders(*((u32*)(r5 + (0xbd << 2))), *((u32*)(r5 + 0x000005E4)), r6);
    String_Delete(r6);
    FontID_String_GetWidth(0, *((u32*)(r5 + 0x000005E4)), 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // sub r3, r5, r3
    AddTextPrinterParameterized(r4, 0, *((u32*)(r5 + 0x000005E4)), r0);
    ScheduleWindowCopyToVram(r4);
}





void ov15_021FF29C(void) {
    NewString_ReadMsgData(*((u32*)(r0 + (0x2f << 4))), 8);
    // add r0, #0x74
    FillWindowPixelBuffer(r5, 0);
    FontID_String_GetWidth(0, r4, 0);
    // sub r3, r6, r3
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0x74
    // add r3, #8
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r5, 0, r4, (r0 >> 1));
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0x74
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r5, 0, r4, 5);
    // add r5, #0x74
    ScheduleWindowCopyToVram(r5);
    String_Delete(r4);
}





void ov15_021FF320(void) {
    // add r3, r7, r6
}





void ov15_021FF364(void) {
    // str r1, [sp, #0x10]
    // add r0, #0x64
    // str r3, [sp, #0x14]
    // add r0, r2, r0
    // str r0, [sp, #0x24]
    // ldrsh r0, [r0, r1]
    // sub r0, r2, r0
    // str r0, [sp, #0x20]
    // str r1, [sp, #0x20]
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x18]
    // eor r0, r2
    // strb r0, [r5, r1]
    ov15_021FE17C(r0, 0x0000068A, *((u8*)(r0 + 0x0000068A)));
    // ldr r6, [sp, #0x18]
    // str r0, [sp, #0x2c]
    // add r7, #0xb4
    // add r0, r7, r0
    FillWindowPixelBuffer((r6 << 4), 0);
    // add r0, r7, r0
    ClearWindowTilemapAndScheduleTransfer((r4 << 4));
    // ldr r0, [sp, #0x2c]
    // str r0, [sp, #0x2c]
    // add r1, #0x64
    // str r0, [sp, #0x28]
    // ldr r0, [sp, #0x24]
    // ldr r2, [sp, #0x10]
    ov15_021FF320(0, *((u8*)*((u32*)(r5 + (0x8d << 2)))));
    // add r0, #0x64
    // str r0, [sp, #0x1c]
    // add r7, r5, r0
    // str r0, [sp, #0x30]
    // add r0, #0xb4
    // ldr r6, [sp, #0x18]
    // str r0, [sp, #0x30]
    // ldr r0, [sp, #0x24]
    // ldr r1, [sp, #0x1c]
    // ldr r2, [sp, #0x1c]
    // add r1, r0, r1
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp, #0x30]
    // add r1, r1, r2
    // str r4, [sp]
    // ldr r3, [sp, #0x24]
    ov15_021FF570(r5, *((u8*)*((u32*)(r5 + (0x8d << 2)))), *((u32*)(r7 + (0x35 << 4))));
    // ldr r1, [sp, #0x30]
    // add r1, r1, r2
    // str r4, [sp]
    // ldr r3, [sp, #0x24]
    ov15_021FF570(r5, *((u32*)(r7 + (0x35 << 4))));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x30]
    // add r0, r0, r1
    AddTextPrinterParameterizedWithColor(0, 0, *((u32*)(r7 + (0x35 << 4))), 0);
    // ldr r0, [sp, #0x28]
    // ldr r0, [sp, #0x20]
    // str r1, [sp, #0x28]
    // ldr r0, [sp, #0x1c]
    // str r0, [sp, #0x1c]
    // add r0, #0x64
    // add r5, #0xb4
    // ldr r0, [sp, #0x18]
    // add r0, r5, r0
    ScheduleWindowCopyToVram((*((u8*)(ov15_022008C8 + *((u8*)*((u32*)(r5 + (0x8d << 2)))))) << 4), *((u8*)*((u32*)(r5 + (0x8d << 2)))));
    // ldr r0, [sp, #0x18]
    // str r0, [sp, #0x18]
}





void ov15_021FF4EC(void) {
    // add r2, #0x64
    // str r0, [sp, #4]
    // add r7, r7, r1
    // str r0, [sp, #8]
    // add r5, #0xb4
    // add r5, #0x10
    // add r0, #0x64
    // add r3, r6, r2
    // str r7, [sp]
    // ldr r4, [sp, #4]
    // ldr r3, [sp, #8]
    // add r1, r6, r1
    // add r3, r4, r3
    // add r0, r6, r0
}





void ov15_021FF560(void) {
    // add r0, r0, r1
}





void ov15_021FF570(void) {
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r1, 0, 0);
    // ldr r0, [sp, #0x28]
    // add r2, r2, r7
    ov15_021FE914(r5, r6, *((u32*)r4), 0x10);
    // add r0, #0x5b
    // add r3, r3, r7
    ov15_021FF66C(*((u32*)(r5 + (0xbd << 2))), *((u32*)(r5 + ((0xbd << 2) - 4))), r6, *((u16*)(*((u32*)r4) + 2)));
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r6, 0, 0);
    // ldr r0, [sp, #0x28]
    Bag_GetRegisteredItem1(*((u32*)(r5 + (0x8e << 2))));
    ov15_021FE9F0(r5, r6, 0x10, 0);
    Bag_GetRegisteredItem2(*((u32*)(r5 + (0x8e << 2))));
    ov15_021FE9F0(r5, r6, 0x10, 1);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r6, 0, 0);
    // ldr r3, [sp, #0x28]
    // add r3, r4, r3
    ov15_021FF66C(*((u32*)(r5 + (0xbd << 2))), *((u32*)(r5 + ((0xbd << 2) - 4))), r6, *((u16*)((r3 << 2) + 2)));
}





void ov15_021FF66C(void) {
    // str r1, [sp]
    // str r2, [sp, #4]
    BufferIntegerAsString(0, r3, 3);
    ReadMsgData_ExpandPlaceholders(r5, r4, 0x57, 6);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r6, 0, r0, 0x30);
    String_Delete(r4);
}





void ov15_021FF6BC(void) {
    // add r0, r2, r3
    _s32_div_f(6);
    _s32_div_f((1 + 5), 6);
    // add r0, #0x64
    FillWindowPixelBuffer(r4, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    BufferIntegerAsString(*((u32*)(r4 + (0xbd << 2))), 0, (r6 + 1), 3);
    // str r1, [sp]
    // str r1, [sp, #4]
    BufferIntegerAsString(*((u32*)(r4 + (0xbd << 2))), 1, r5, 3);
    ReadMsgData_ExpandPlaceholders(*((u32*)(r4 + (0xbd << 2))), *((u32*)(r4 + ((0xbd << 2) - 4))), 0x16, 6);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0x64
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r4, 0, r0, 0);
    // add r4, #0x64
    ScheduleWindowCopyToVram(r4);
    String_Delete(r5);
}





void ov15_021FF758(void) {
    FillWindowPixelBuffer(0);
    GetWindowWidth(r6);
    FontID_String_GetWidth(0, *((u32*)(r4 + r5)), 0);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // sub r3, r4, r3
    AddTextPrinterParameterizedWithColor(r6, 0, *((u32*)(r4 + r5)), (r0 >> 1));
    ScheduleWindowCopyToVram(r6);
}





void ov15_021FF7AC(void) {
}





void ov15_021FF7C4(void) {
    // str r1, [sp]
    // str r2, [sp, #4]
    // add r2, #0xf5
    // str r0, [sp, #8]
    // add r0, r4, r2
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(0x000F0E00, 0, *((u32*)(r0 + (0xc5 << 2))), 5);
    // add r0, r4, r0
    ScheduleWindowCopyToVram((0x7d << 2));
}





void ov15_021FF7FC(void) {
    // str r1, [sp]
    // str r2, [sp, #4]
    // add r2, #0xf5
    // str r0, [sp, #8]
    // add r0, r4, r2
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(0x000F0E00, 0, *((u32*)(r0 + (0xcd << 2))), 5);
    // add r0, r4, r0
    ScheduleWindowCopyToVram((0x7d << 2));
}





void ov15_021FF834(void) {
    // add r0, r0, r1
}





void ov15_021FF844(void) {
}





void ov15_021FF850(void) {
    // ldr r0, [r4, r0]
}





void ov15_021FF894(void) {
    Sprite_DeleteAndFreeResources(*((u32*)(r0 + (0x25 << 4))));
    SpriteSystem_FreeResourcesAndManager(*((u32*)(r6 + (0x92 << 2))), *((u32*)(r6 + ((0x92 << 2) + 4))));
    SpriteSystem_Free(*((u32*)(r6 + (0x92 << 2))));
    Heap_Free(*((u32*)(r6 + 0x0000069C)));
}





void ov15_021FF8D4(void) {
}





void ov15_021FF8F0(void) {
    GetItemIndexMapping(r2, 1);
    // str r0, [sp]
    // add r0, r4, r0
    // str r0, [sp, #4]
    SpriteSystem_ReplaceCharResObj(*((u32*)(r5 + (0x92 << 2))), *((u32*)(r5 + ((0x92 << 2) + 4))), 0x12, r0);
    GetItemIndexMapping(r6, 2);
    // str r0, [sp]
    // add r0, r4, r0
    // str r0, [sp, #4]
    SpriteSystem_ReplacePlttResObj(*((u32*)(r5 + (0x92 << 2))), *((u32*)(r5 + ((0x92 << 2) + 4))), 0x12, r0);
}





void ov15_021FF950(void) {
    // strb r2, [r0, r1]
    // strb r2, [r0, r1]
}





void ov15_021FF964(void) {
}





void ov15_021FF97C(void) {
    ManagedSprite_SetDrawFlag(*((u32*)(r0 + (0x9b << 2))), r2);
    ManagedSprite_SetDrawFlag(*((u32*)(r5 + (0x27 << 4))), r4);
    TMHMGetMove(r6);
    GetMoveAttr(3);
    GetMoveAttr(r4, 1);
    sub_020776B4((r0 << 0x10));
    sub_02077678(r6);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_ReplaceCharResObj(*((u32*)(r5 + (0x92 << 2))), *((u32*)(r5 + ((0x92 << 2) + 4))), r7, r0);
    sub_0207769C(r6);
    ManagedSprite_SetPaletteOverride(*((u32*)(r5 + (0x9b << 2))), (r0 + 4));
    sub_02077830();
    sub_02077800(r4);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_ReplaceCharResObj(*((u32*)(r5 + (0x92 << 2))), *((u32*)(r5 + ((0x92 << 2) + 4))), r6, r0);
    sub_02077818(r4);
    ManagedSprite_SetPaletteOverride(*((u32*)(r5 + (0x27 << 4))), (r0 + 4));
}





void ov15_021FFA40(void) {
    // add r2, sp, #0x34
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    SpriteSystem_Alloc(6, ov15_022009BC);
    // str r0, [r4, r1]
    SpriteManager_New(*((u32*)(r4 + (0x92 << 2))), (0x92 << 2));
    // add r2, sp, #0x14
    // str r0, [r4, r7]
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // add r3, sp, #0
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    SpriteSystem_Init(*((u32*)(r4 + ((0x93 << 2) - 4))), r2, ov15_022009F4, 0x20);
    SpriteSystem_InitSprites(*((u32*)(r4 + (r7 - 4))), *((u32*)(r4 + ((r7 - 4) + 4))), 0x27);
    // add r2, sp, #0x34
    SpriteSystem_InitManagerWithCapacities(*((u32*)(r4 + (r7 - 4))), *((u32*)(r4 + ((r7 - 4) + 4))));
}





void ov15_021FFAD0(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    SpriteSystem_LoadCharResObj(*((u32*)(r0 + (0x92 << 2))), *((u32*)(r0 + ((0x92 << 2) + 4))), 0xf, 0x1a);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    SpriteSystem_LoadCharResObj(*((u32*)(r5 + (0x92 << 2))), *((u32*)(r5 + ((0x92 << 2) + 4))), 0xf, 6);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    SpriteSystem_LoadCharResObj(*((u32*)(r5 + (0x92 << 2))), *((u32*)(r5 + ((0x92 << 2) + 4))), 0xf, 0x33);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    SpriteSystem_LoadCharResObj(*((u32*)(r5 + (0x92 << 2))), *((u32*)(r5 + ((0x92 << 2) + 4))), 0x3c, 4);
    GetItemIndexMapping(0, 1);
    // str r6, [sp]
    // str r7, [sp, #4]
    // add r0, r4, r0
    // str r0, [sp, #8]
    SpriteSystem_LoadCharResObj(*((u32*)(r5 + (0x92 << 2))), *((u32*)(r5 + (0x93 << 2))), 0x12, r0);
    // str r0, [sp]
    sub_020776B8(*((u32*)(r5 + (0x92 << 2))), *((u32*)(r5 + ((0x92 << 2) + 4))), 1, 0);
    // str r0, [sp]
    sub_02077834(*((u32*)(r5 + (0x92 << 2))), *((u32*)(r5 + ((0x92 << 2) + 4))), 1, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    SpriteSystem_LoadPlttResObj(*((u32*)(r5 + (0x92 << 2))), *((u32*)(r5 + ((0x92 << 2) + 4))), 0xf, 0xf);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    SpriteSystem_LoadPlttResObj(*((u32*)(r5 + (0x92 << 2))), *((u32*)(r5 + ((0x92 << 2) + 4))), 0x3c, 0xa);
    sub_020776EC(*((u32*)(r5 + (0x92 << 2))), *((u32*)(r5 + ((0x92 << 2) + 4))), 1, 0x0000C102);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    SpriteSystem_LoadPlttResObj(*((u32*)(r5 + (0x92 << 2))), *((u32*)(r5 + ((0x92 << 2) + 4))), 0xf, 0x2f);
    GetItemIndexMapping(0, 2);
    // str r6, [sp]
    // str r7, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r4, r0
    // str r0, [sp, #0xc]
    SpriteSystem_LoadPlttResObj(*((u32*)(r5 + (0x92 << 2))), *((u32*)(r5 + (0x93 << 2))), 0x12, r0);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadCellResObj(*((u32*)(r5 + (0x92 << 2))), *((u32*)(r5 + ((0x92 << 2) + 4))), 0xf, 0x19);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadCellResObj(*((u32*)(r5 + (0x92 << 2))), *((u32*)(r5 + ((0x92 << 2) + 4))), 0xf, 5);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadCellResObj(*((u32*)(r5 + (0x92 << 2))), *((u32*)(r5 + ((0x92 << 2) + 4))), 0xf, 0x31);
    GetItemIconCell();
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadCellResObj(*((u32*)(r5 + (0x92 << 2))), *((u32*)(r5 + ((0x92 << 2) + 4))), 0x12, r0);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadCellResObj(*((u32*)(r5 + (0x92 << 2))), *((u32*)(r5 + ((0x92 << 2) + 4))), 0x3c, 5);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadAnimResObj(*((u32*)(r5 + (0x92 << 2))), *((u32*)(r5 + ((0x92 << 2) + 4))), 0xf, 0x15);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadAnimResObj(*((u32*)(r5 + (0x92 << 2))), *((u32*)(r5 + ((0x92 << 2) + 4))), 0xf, 0x18);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadAnimResObj(*((u32*)(r5 + (0x92 << 2))), *((u32*)(r5 + ((0x92 << 2) + 4))), 0xf, 4);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadAnimResObj(*((u32*)(r5 + (0x92 << 2))), *((u32*)(r5 + ((0x92 << 2) + 4))), 0xf, 0x32);
    GetItemIconAnim();
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadAnimResObj(*((u32*)(r5 + (0x92 << 2))), *((u32*)(r5 + ((0x92 << 2) + 4))), 0x12, r0);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadAnimResObj(*((u32*)(r5 + (0x92 << 2))), *((u32*)(r5 + ((0x92 << 2) + 4))), 0x3c, 6);
    sub_0207775C(*((u32*)(r5 + (0x92 << 2))), *((u32*)(r5 + ((0x92 << 2) + 4))), 0x0000C0FE, (0x0000C0FE + 1));
    // add r2, r5, r2
    GfGfxLoader_GetPlttData(0xf, 0x30, (0x6a << 4), 6);
    // str r0, [r5, r1]
}





void ov15_021FFDD8(void) {
    SpriteSystem_NewSpriteWithYOffset(*((u32*)(r0 + (0x92 << 2))), *((u32*)(r0 + (0x93 << 2))), ov15_02200B0C, (1 << 0x14));
    // str r0, [r5, r1]
    // add r4, #0x34
    // add r0, #0x4c
    ManagedSprite_SetPriority(*((u32*)(r6 + (0x25 << 4))), 1);
    ManagedSprite_SetPriority(*((u32*)(r6 + (0xb << 6))), 1);
    ManagedSprite_SetPriority(*((u32*)(r6 + (0x9d << 2))), 1);
    ov15_02200458(r6, 1);
    ManagedSprite_SetDrawFlag(*((u32*)(r6 + (0x25 << 4))), 0);
    ManagedSprite_SetDrawFlag(*((u32*)(r6 + (0x9b << 2))), 0);
    ManagedSprite_SetDrawFlag(*((u32*)(r6 + (0x27 << 4))), 0);
    ManagedSprite_SetDrawFlag(*((u32*)(r6 + (0xb << 6))), 0);
    ManagedSprite_SetDrawFlag(*((u32*)(r6 + (0x2d << 4))), 0);
    ManagedSprite_SetDrawFlag(*((u32*)(r6 + (0xba << 2))), 0);
    ManagedSprite_SetPriority(*((u32*)(r6 + (0xba << 2))), 1);
}





void ov15_021FFEC0(void) {
    // strb r2, [r0, r1]
}





void ov15_021FFECC(void) {
    ManagedSprite_SetPositionXYWithSubscreenOffset(*((u32*)(r0 + (0x2a << 4))), *((u8*)(ov15_02200AB8 + (r1 << 2))), *((u8*)(ov15_02200AB9 + (r1 << 2))), (1 << 0x14));
    ManagedSprite_SetAnim(*((u32*)(r5 + (0x2a << 4))), *((u8*)(ov15_02200ABA + r4)));
    ManagedSprite_SetPaletteOverride(*((u32*)(r5 + (0x2a << 4))), *((u8*)(ov15_02200ABB + r4)));
    ManagedSprite_SetDrawFlag(*((u32*)(r5 + (0x2a << 4))), 1);
}





void ov15_021FFF24(void) {
    // ldr r0, [r0, r1]
    // bx r3
    // _021FFF30: .word ManagedSprite_SetDrawFlag
}





void ov15_021FFF34(void) {
    GF_AssertFail();
    ManagedSprite_SetAnim(*((u32*)(r5 + (0x2a << 4))), *((u8*)(ov15_02200A36 + (r4 << 2))), (r4 << 2));
    // add r0, #0x64
    // add r1, r3, r0
    // ldrsh r0, [r1, r0]
    // add r0, r0, r4
    // add r2, #0x6c
    ManagedSprite_SetAnim(*((u32*)(r5 + (0x8d << 2))), 0xa, (0x8d << 2), *((u8*)(r5 + 0x00000672)));
    // add r2, #0x6c
    ManagedSprite_SetAnim(*((u32*)(r5 + r2)), 0x28);
    // add r2, #0x6c
    ManagedSprite_SetAnim(*((u32*)(r5 + r2)), 0x14);
    ManagedSprite_SetPositionXYWithSubscreenOffset(*((u32*)(r5 + (0x2a << 4))), *((u8*)(ov15_02200A34 + (r4 << 2))), *((u8*)(ov15_02200A35 + (r4 << 2))), (1 << 0x14));
    ManagedSprite_SetPaletteOverride(*((u32*)(r5 + (0x2a << 4))), *((u8*)(ov15_02200A37 + r4)));
}





void ov15_021FFFDC(void) {
    GF_AssertFail();
    ManagedSprite_SetPositionXYWithSubscreenOffset(*((u32*)(r5 + (0x2a << 4))), *((u8*)(ov15_022009D4 + (r4 << 2))), *((u8*)(ov15_022009D5 + (r4 << 2))), (1 << 0x14));
    ManagedSprite_SetAnim(*((u32*)(r5 + (0x2a << 4))), *((u8*)(ov15_022009D6 + r4)));
    ManagedSprite_SetPaletteOverride(*((u32*)(r5 + (0x2a << 4))), *((u8*)(ov15_022009D7 + r4)));
}





void ov15_02200030(void) {
    // add r0, r4, r2
    // add r0, r4, r0
}





void ov15_0220005C(void) {
    // str r0, [sp]
    // str r2, [sp, #4]
    // str r3, [sp, #8]
    // ldr r0, [sp]
    // ldr r0, [sp, #4]
    // add r0, #0x15
    // str r0, [sp, #4]
    // ldr r0, [sp]
    // add r1, r0, r1
    // ldr r0, [sp, #8]
    // ldr r0, [sp]
}





void ov15_022000F4(void) {
    // add r1, #0x64
    // add r1, r3, r1
    // add r0, #0x60
    // add r0, #0x60
}





void ov15_02200140(void) {
    // str r1, [sp]
    // str r2, [sp, #4]
    // str r3, [sp, #8]
    // ldrsh r1, [r6, r1]
    // ldrsh r2, [r6, r2]
    ManagedSprite_SetPositionXYWithSubscreenOffset(*((u32*)(r0 + (0x95 << 2))), 0x34, 0x36, (1 << 0x14));
    // ldr r0, [sp, #4]
    // ldr r0, [sp, #8]
    // ldr r3, [sp]
    // ldrsh r2, [r3, r2]
    // add r2, r2, r4
    // add r3, r7, r2
    ov15_021FF8F0(r7, r4, *((u16*)(r3 + 0x000006A4)));
    ManagedSprite_SetDrawFlag(*((u32*)(r5 + (0x95 << 2))), 1);
    ManagedSprite_SetDrawFlag(*((u32*)(r5 + (0x95 << 2))), 0);
    // add r6, #0x34
    ov15_022000F4(r7);
}





void ov15_022001C4(void) {
    // str r0, [sp]
    // mvn r7, r7
    _s32_div_f(r2, 6);
    // ldrsh r3, [r4, r1]
    _s32_div_f(r5, 6, (r0 * 6));
    // ldr r5, [sp]
    // ldrsh r1, [r4, r1]
    // ldrsh r2, [r4, r2]
    ManagedSprite_SetPositionXYWithSubscreenOffset(*((u32*)(r5 + (0x95 << 2))), 0x34, 0x36, (1 << 0x14));
    ManagedSprite_SetDrawFlag(*((u32*)(r5 + (0x95 << 2))), 1);
    ManagedSprite_SetDrawFlag(*((u32*)(r5 + (0x95 << 2))), 0);
    // add r4, #0x34
    // ldr r0, [sp]
    ov15_022000F4();
}





void ov15_0220023C(void) {
    // ldr r0, [r7, r0]
    // ldrb r0, [r6, r4]
    // ldr r0, [r5, r0]
    // ldr r0, [r5, r0]
    // ldr r0, [r7, r0]
    // ldr r0, [r7, r0]
}





void ov15_02200294(void) {
}





void ov15_022002B4(void) {
    // ldr r0, [r5, r7]
    // ldr r0, [r5, r0]
}





void ov15_022002EC(void) {
    // cmp r0, #0x64
    // bge _022002F4
    // cmp r0, #0xa
    // bge _022002FA
}





void ov15_02200300(void) {
    // str r1, [sp]
    // str r2, [sp, #4]
    // str r0, [sp, #4]
    // ldr r0, [sp]
    // str r1, [sp, #8]
    // add r4, r0, r1
    // add r6, r0, r1
    // add r1, r5, r0
    ManagedSprite_SetDrawFlag(*((u32*)((0x18 * (0x63 - 2)) + (0x2d << 4))), 1, ov15_02200998);
    // add r1, r5, r0
    ManagedSprite_SetAnim(*((u32*)(r1 + (0x2d << 4))), *((u32*)r6));
    // ldr r0, [sp, #8]
    // ldr r0, [sp, #4]
    ov15_022002EC(*((u32*)(ov15_02200998 + r0)), ov15_02200998);
    // ldr r1, [sp]
    ManagedSprite_SetDrawFlag(*((u32*)(r5 + (0x2d << 4))), 0);
    ManagedSprite_SetDrawFlag(*((u32*)(r5 + (0xb7 << 2))), 0);
    // ldr r1, [sp]
    // add r6, r1, r0
    // add r1, r5, r0
    ManagedSprite_SetDrawFlag(*((u32*)(ov15_02200A14 + (0x2d << 4))), 0, (r0 - 1));
    ManagedSprite_SetDrawFlag(*((u32*)(r5 + (0xba << 2))), 1);
    ManagedSprite_SetAnimationFrame(*((u32*)(r5 + (0xba << 2))), 0);
    ManagedSprite_SetAnim(*((u32*)(r5 + (0xba << 2))), 0x25);
    ManagedSprite_SetAnimationFrame(*((u32*)(r5 + (0xa7 << 2))), 0);
    ManagedSprite_SetAnim(*((u32*)(r5 + (0xa7 << 2))), 0x27);
}





void ov15_02200428(void) {
    // str r0, [sp]
    // ldr r0, [sp]
}





void ov15_02200458(void) {
    // add r0, sp, #0
    // add r0, r0, r4
    // add r1, r0, r4
    // add r0, sp, #0
    // strb r1, [r0, r2]
    // add r4, #0xc
    // add r4, sp, #0
}





void ov15_022004DC(void) {
    // ldr r0, [r0, r2]
    // bx r3
    // nop
    // _022004E8: .word ManagedSprite_SetDrawFlag
}




