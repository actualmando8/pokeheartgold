/* Decompiled from asm/overlay_43.s */
#include "global.h"

BOOL PalPad_Init(void) {
    HandleLoadOverlay(FS_OVERLAY_ID, 2);
    Heap_Create(3, 0x33, (7 << 0x10));
    OverlayManager_CreateAndGetData(r5, 0x000005A4, 0x33);
    memset(0, 0x000005A4);
    OverlayManager_GetArgs(r5);
    // str r0, [r4, r1]
    // sub r0, #0x68
    // add r0, r4, r0
    ov43_0222A290((0x9f << 2), *((u32*)(r4 + (0x9f << 2))), 0x33);
    // add r1, r4, r1
    ov43_0222A48C((r4 + 4), (0x85 << 2), 0x33);
    // add r0, r4, r1
    // sub r1, #0x6c
    // add r1, r4, r1
    ov43_0222AE5C((0xa << 6), (r4 + 4), 0x33);
    // add r0, r4, r1
    // sub r1, #0xac
    // add r1, r4, r1
    ov43_0222B5A8((0xb << 6), (r4 + 4), 0x33);
    // add r0, r4, r0
    // add r1, r4, r1
    ov43_0222CBAC((0xf << 6), (0x85 << 2), (r4 + 4), 0x33);
    // add r0, r4, r0
    // add r1, r4, r1
    ov43_0222CD90((0xf3 << 2), (0x85 << 2), (r4 + 4), 0x33);
    // add r0, r4, r0
    // add r1, r4, r1
    ov43_0222D134(0x00000408, (0x85 << 2), (r4 + 4), 0x33);
    Main_SetVBlankIntrCB(ov43_0222A148, r4);
    HBlankInterruptDisable();
}




BOOL PalPad_Main(void) {
    OverlayManager_GetData();
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02229FDE: ; jump table
    // add r0, r4, r1
    // sub r1, #0x6c
    // add r1, r4, r1
    ov43_0222AE64((*((u16*)(*((u32*)r0) + 6)) << 0x10), (0xa << 6), (r0 + 4), 0x33);
    // add r0, r4, r1
    // sub r1, #0xac
    // add r1, r4, r1
    ov43_0222B5D0((0xb << 6), (r4 + 4), 0x33);
    // str r0, [sp]
    // add r0, r4, r0
    // add r2, r4, r2
    ov43_0222CBB4((0xf << 6), r4, (0x85 << 2), (r4 + 4));
    // add r0, r4, r0
    // add r1, r4, r1
    ov43_0222CD98((0xf3 << 2), (0x85 << 2), (r4 + 4));
    // add r0, r4, r0
    // add r1, r4, r1
    ov43_0222D15C(0x00000408, (0x85 << 2), (r4 + 4), 0x33);
    // str r1, [r4]
    // strb r1, [r4, r0]
    // str r1, [r4, r0]
    // str r0, [r5]
    // str r1, [r4, r0]
    // str r0, [r5]
    ov43_0222A500((r4 + 4), (*((u32*)(r4 + (0x5a << 4))) - 1));
}




BOOL PalPad_Exit(void) {
    OverlayManager_GetData();
    Main_SetVBlankIntrCB(0, 0);
    HBlankInterruptDisable();
    // add r0, r4, r1
    // sub r1, #0x6c
    // add r1, r4, r1
    ov43_0222B098((0xa << 6), (r4 + 4));
    // add r0, r4, r1
    // sub r1, #0xac
    // add r1, r4, r1
    ov43_0222B93C((0xb << 6), (r4 + 4));
    // add r0, r4, r0
    // add r1, r4, r1
    ov43_0222CD34((0xf << 6), (0x85 << 2), (r4 + 4));
    // add r0, r4, r0
    // add r1, r4, r1
    ov43_0222CE0C((0xf3 << 2), (0x85 << 2), (r4 + 4));
    // add r0, r4, r0
    // add r1, r4, r1
    ov43_0222D228(0x00000408, (0x85 << 2), (r4 + 4));
    ov43_0222A520((r4 + 4));
    // add r0, r4, r1
    // add r1, #0x68
    ov43_0222A2F0(*((u32*)(r4 + (0x85 << 2))));
    OverlayManager_FreeData(r5);
    Heap_Destroy(0x33);
    UnloadOverlayByID(FS_OVERLAY_ID);
}




void ov43_0222A148(void) {
}




void ov43_0222A154(void) {
    // add r1, r5, r1
    ov43_0222A48C((r0 + 4), (0x85 << 2), r1);
    // add r0, r5, r1
    // sub r1, #0x6c
    // add r1, r5, r1
    ov43_0222B0A0((0xa << 6), (r5 + 4), r4);
    // add r0, r5, r1
    // sub r1, #0xac
    // add r1, r5, r1
    ov43_0222B944((0xb << 6), (r5 + 4), r4);
    // add r0, r5, r0
    // add r1, r5, r1
    ov43_0222CD3C((0xf << 6), (0x85 << 2), (r5 + 4), r4);
    // add r0, r5, r0
    // add r1, r5, r1
    ov43_0222CE48((0xf3 << 2), (0x85 << 2), (r5 + 4), r4);
    // add r0, r5, r0
    // add r1, r5, r1
    ov43_0222D584(0x00000408, (0x85 << 2), (r5 + 4), r4);
    Main_SetVBlankIntrCB(ov43_0222A148, r5);
    HBlankInterruptDisable();
}




void ov43_0222A1DC(void) {
    Main_SetVBlankIntrCB(0, 0);
    HBlankInterruptDisable();
    // add r0, r4, r1
    // sub r1, #0x6c
    // add r1, r4, r1
    ov43_0222B1D8((0xa << 6), (r4 + 4));
    // add r0, r4, r1
    // sub r1, #0xac
    // add r1, r4, r1
    ov43_0222BAB8((0xb << 6), (r4 + 4));
    // add r0, r4, r0
    // add r1, r4, r1
    ov43_0222CD40((0xf << 6), (0x85 << 2), (r4 + 4));
    // add r0, r4, r0
    // add r1, r4, r1
    ov43_0222D008((0xf3 << 2), (0x85 << 2), (r4 + 4));
    // add r0, r4, r0
    // add r1, r4, r1
    ov43_0222D610(0x00000408, (0x85 << 2), (r4 + 4));
    ov43_0222A520((r4 + 4));
}




void ov43_0222A24C(void) {
    // add r0, sp, #0x18
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, sp, #0x3c
}




void ov43_0222A290(void) {
    // str r0, [r5]
}




void ov43_0222A2F0(void) {
}




void ov43_0222A318(void) {
}




void ov43_0222A320(void) {
    // tst r1, r2
    // str r1, [r0]
}




void ov43_0222A338(void) {
}




void ov43_0222A358(void) {
    // str r0, [sp]
    // str r2, [sp, #4]
    // str r0, [sp, #0x10]
    // str r1, [sp, #0xc]
    // add r1, sp, #0x1c
    // ldr r0, [sp, #0x1c]
    // ldr r0, [sp, #0xc]
    // eor r1, r0
    // ldr r0, [sp, #0x10]
    // eor r0, r7
    // ldr r0, [sp]
    // add r3, sp, #0x18
    // ldr r2, [sp, #4]
}




void ov43_0222A414(void) {
}




void ov43_0222A41C(void) {
}




void ov43_0222A420(void) {
    // add r0, #0x10
    // str r0, [sp]
    // add r6, #0x14
    // add r7, #0x10
    // ldr r0, [sp]
    // add r0, r5, r0
    // ldr r0, [sp]
    // add r1, r5, r0
    // add r1, #0x38
    // str r1, [r6]
    // add r1, r5, r1
    // add r1, #0x38
    // strb r0, [r1]
    // str r0, [r7]
}




void ov43_0222A48C(void) {
    *((u8*)(gSystem + 9)) = 1;
    GfGfx_SwapDisplay(gSystem, 1);
    NARC_New(0x55, r4);
    *((u32*)(r5 + 0x58)) = r0;
    ov43_0222A550();
    ov43_0222A570(r5, r4);
    ov43_0222A690(r5, r4);
    ov43_0222A87C(r5, r4);
    ov43_0222A8C0(r5, r6, r4);
    ov43_0222AC28(r5, r4);
    ov43_0222A998(r5, r4);
    GfGfx_EngineATogglePlanes(0x10, 1);
    TextFlags_SetCanABSpeedUpPrint(1);
    TextFlags_SetAutoScrollParam(0);
    TextFlags_SetCanTouchSpeedUpPrint(0);
}




void ov43_0222A500(void) {
}




void ov43_0222A50C(void) {
}




void ov43_0222A520(void) {
}




void ov43_0222A550(void) {
}




void ov43_0222A570(void) {
    BgConfig_Alloc(r1);
    // add r3, sp, #0x10
    // str r0, [r5]
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    SetBothScreensModesAndDisable(r3, r3);
    InitBgFromTemplate(*((u32*)r5), ((0 << 0x18) >> 0x18), ov43_0222EFFC, 0);
    BG_ClearCharDataRange(((r4 << 0x18) >> 0x18), 0x20, 0, r7);
    BgClearTilemapBufferAndCommit(*((u32*)r5), ((r4 << 0x18) >> 0x18));
    // add r6, #0x1c
    // str r0, [sp]
    // str r7, [sp, #4]
    GfGfxLoader_GXLoadPalFromOpenNarc(*((u32*)(r5 + 0x58)), 5, 0, 0);
    // str r0, [sp]
    // str r7, [sp, #4]
    GfGfxLoader_GXLoadPalFromOpenNarc(*((u32*)(r5 + 0x58)), 4, 4, 0);
    // str r3, [sp]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // str r7, [sp, #0xc]
    GfGfxLoader_LoadCharDataFromOpenNarc(*((u32*)(r5 + 0x58)), 7, *((u32*)r5), 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r7, [sp, #0xc]
    GfGfxLoader_LoadCharDataFromOpenNarc(*((u32*)(r5 + 0x58)), 7, *((u32*)r5), 2);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r7, [sp, #0xc]
    GfGfxLoader_LoadCharDataFromOpenNarc(*((u32*)(r5 + 0x58)), 6, *((u32*)r5), 6);
    // str r3, [sp]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // str r7, [sp, #0xc]
    GfGfxLoader_LoadScrnDataFromOpenNarc(*((u32*)(r5 + 0x58)), 0xa, *((u32*)r5), 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r7, [sp, #0xc]
    GfGfxLoader_LoadScrnDataFromOpenNarc(*((u32*)(r5 + 0x58)), 8, *((u32*)r5), 6);
}




void ov43_0222A66C(void) {
    // str r0, [r5]
}




void ov43_0222A690(void) {
    NNS_G2dInitOamManagerModule();
    GF_CreateVramTransferManager(0x10, r7);
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // str r7, [sp, #0x10]
    OamManager_Create(0, 0x7e, 0, 0x1e);
    // add r3, sp, #0x2c
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r7, [sp, #0x38]
    ObjCharTransfer_InitEx(r3, 0x10, 0x10);
    ObjPlttTransfer_Init(0x40, r7);
    ObjCharTransfer_ClearBuffers();
    ObjPlttTransfer_Reset();
    // add r1, #0xbc
    G2dRenderer_Init(0x40, r6, r7);
    *((u32*)(r6 + 4)) = r0;
    // add r0, #8
    // add r3, #0xbc
    sub_0200B27C(r6, ov43_0222F0FC, 1, r6);
    Create2DGfxResObjMan(0x40, 0, r7);
    // str r0, [r5, r1]
    // str r0, [sp]
    // str r2, [sp, #4]
    // str r7, [sp, #8]
    AddCharResObjFromOpenNarc(*((u32*)(r6 + (0x79 << 2))), *((u32*)(r6 + 0x58)), 1, 1);
    // add r1, #0xac
    // str r0, [r1]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r7, [sp, #0xc]
    AddPlttResObjFromOpenNarc(*((u32*)(r6 + (0x7a << 2))), *((u32*)(r6 + 0x58)), 0, 0);
    // add r1, #0xb0
    // str r0, [r1]
    // str r0, [sp]
    // str r2, [sp, #4]
    // str r7, [sp, #8]
    AddCellOrAnimResObjFromOpenNarc(*((u32*)(r6 + (0x7b << 2))), *((u32*)(r6 + 0x58)), 2, 1);
    // add r1, #0xb4
    // str r0, [r1]
    // str r0, [sp]
    // str r2, [sp, #4]
    // str r7, [sp, #8]
    AddCellOrAnimResObjFromOpenNarc(*((u32*)(r6 + (0x1f << 4))), *((u32*)(r6 + 0x58)), 3, 1);
    // add r1, #0xb8
    // str r0, [r1]
    // add r0, #0xac
    sub_0200ADA4(*((u32*)r6), r6);
    GF_AssertFail();
    // add r0, #0xb0
    sub_0200B00C(*((u32*)r6));
    GF_AssertFail();
    // add r0, #0xac
    sub_0200A740(*((u32*)r6));
    // add r0, #0xb0
    sub_0200A740(*((u32*)r6));
    // str r1, [sp]
    // sub r0, #0x65
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r2, [sp, #0x14]
    // str r2, [sp, #0x18]
    // add r2, #8
    // add r3, #0xc
    // str r2, [sp, #0x1c]
    // add r6, #0x88
    // str r2, [sp, #0x20]
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x28]
    CreateSpriteResourcesHeader(r6, 0x64, 0x64, 0x64);
}




void ov43_0222A81C(void) {
    // add r0, #0xac
    // add r0, #0xb0
    // add r1, #0xac
}




void ov43_0222A87C(void) {
    MessageFormat_New(r1);
    *((u32*)(r5 + 0x50)) = r0;
    NewMsgDataFromNarc(0, 0x1b, 0x0000030B, r4);
    *((u32*)(r5 + 0x54)) = r0;
    FontID_Alloc(4, r4);
}




void ov43_0222A8A8(void) {
}




void ov43_0222A8C0(void) {
    // str r0, [sp]
    // str r4, [sp, #4]
    // add r0, #0x64
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, #0x64
    // add r1, #0x80
    // str r0, [r1]
}




void ov43_0222A960(void) {
}




void ov43_0222A998(void) {
    // str r1, [sp, #8]
    // str r0, [sp, #4]
    // add r6, r0, r1
    // ldr r0, [sp, #8]
    // str r0, [sp]
    // ldr r0, [sp, #4]
    GfGfxLoader_GetScrnDataFromOpenNarc(*((u32*)(r0 + 0x58)), *((u8*)ov43_0222F0C0), 1, r6);
    // str r0, [r5, r1]
}




void ov43_0222A9D8(void) {
}




void ov43_0222A9F4(void) {
    // add r0, #0x84
    TextPrinterCheckActive(((*((u32*)r0) << 0x18) >> 0x18));
    TextFlags_SetCanTouchSpeedUpPrint(0);
    // add r0, #0x84
    RemoveTextPrinter(((*((u32*)r5) << 0x18) >> 0x18));
    FillWindowPixelBuffer(r4, 0);
    ReadMsgDataIntoString(*((u32*)(r5 + 0x54)), r6, *((u32*)(r5 + 0x78)));
    StringExpandPlaceholders(*((u32*)(r5 + 0x50)), *((u32*)(r5 + 0x74)), *((u32*)(r5 + 0x78)));
    TextFlags_SetCanTouchSpeedUpPrint(1);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r4, 1, *((u32*)(r5 + 0x74)), 0);
    // add r5, #0x84
    // str r0, [r5]
    ScheduleWindowCopyToVram(r4);
}




void ov43_0222AA70(void) {
    // add r0, #0x84
    // add r0, #0x84
    // add r4, #0x64
}




void ov43_0222AAA4(void) {
    _ll_udiv(r1, r2, 0x05F5E100, 0);
    // str r0, [sp]
    // str r1, [sp, #4]
    BufferIntegerAsString(*((u32*)(r5 + 0x50)), 1, r0, 4);
    _ll_udiv(r4, r6, 0x00002710, 0);
    _ull_mod(0x00002710, 0);
    // str r1, [sp]
    // str r0, [sp, #4]
    BufferIntegerAsString(*((u32*)(r5 + 0x50)), 2, r0, 4);
    _ull_mod(r4, r6, 0x00002710, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    BufferIntegerAsString(*((u32*)(r5 + 0x50)), 3, r0, 4);
}




void ov43_0222AB20(void) {
}




void ov43_0222AB5C(void) {
}




void ov43_0222AB94(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r1, [sp]
    // str r0, [sp, #4]
}




void ov43_0222ABFC(void) {
}




void ov43_0222AC18(void) {
    // ldr r3, _0222AC24 ; =BufferWiFiPlazaActivityName
    // add r2, r1, #0
    // ldr r0, [r0, #0x50]
    // mov r1, #0
    // bx r3
    // nop
    // _0222AC24: .word BufferWiFiPlazaActivityName
    // TODO: decompile
}




void ov43_0222AC28(void) {
    // str r0, [sp]
    // ldr r5, [sp]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, #0x88
    // str r1, [sp, #4]
    // str r0, [sp, #0xc]
    // ldr r0, [sp]
    // str r0, [r4]
    // ldr r0, [sp, #0xc]
    *((u32*)(ov43_0222F14C + 4)) = *((u32*)(r5 + 4));
    // ldr r0, [sp, #4]
    *((u32*)(ov43_0222F14C + 0x2c)) = *((u32*)(r5 + 4));
    Sprite_CreateAffine(ov43_0222F14C);
    // str r0, [r5, r1]
    Sprite_SetAnimActiveFlag(*((u32*)(r5 + (0x7d << 2))), 1);
    Sprite_SetDrawFlag(*((u32*)(r5 + (0x7d << 2))), 0);
    Sprite_SetAnimCtrlSeq(*((u32*)(r5 + (0x7d << 2))), r6);
    // ldr r0, [sp, #8]
    // add r4, #0x30
    // add r7, #0x30
    // str r0, [sp, #8]
    // ldr r0, [sp]
    *((u32*)(ov43_0222F160 + 0x4c)) = *((u32*)((r0 + 1) + 4));
    // ldr r0, [sp]
    // add r0, #0x88
    *((u32*)(ov43_0222F160 + 0x50)) = *((u32*)((r0 + 1) + 4));
    // ldr r0, [sp, #4]
    *((u32*)(ov43_0222F160 + 0x78)) = *((u32*)((r0 + 1) + 4));
    Sprite_CreateAffine(ov43_0222F1AC, ov43_0222F160);
    // ldr r1, [sp]
    // str r0, [r1, r2]
    Sprite_SetDrawFlag(*((u32*)(r1 + (0x7f << 2))), 0, (0x7f << 2));
    // ldr r0, [sp]
    Sprite_SetAnimCtrlSeq(*((u32*)(r0 + (0x7f << 2))), 1);
}




void ov43_0222ACDC(void) {
    // ldr r0, [r5, r0]
    // ldr r0, [r5, r6]
}




void ov43_0222AD00(void) {
}




void ov43_0222AD20(void) {
}




void ov43_0222AD40(void) {
    // add r5, r0, r2
    // add r1, r1, r7
}




void ov43_0222AD74(void) {
    // ldr r0, [r5, r0]
    // ldr r0, [r5, r0]
}




void ov43_0222AD98(void) {
    // ldr r0, [r5, r0]
    // ldr r0, [r5, r0]
}




void ov43_0222ADB8(void) {
    // add r0, sp, #4
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r0, sp, #4
    // and r2, r3
    // add r1, sp, #4
    // str r0, [sp]
}




void ov43_0222AE2C(void) {
    // str r0, [r5]
}




void ov43_0222AE5C(void) {
}




void ov43_0222AE64(void) {
    // add r3, r3, r3
    // add r3, pc
    // asr r3, r3, #0x10
    // add pc, r3
    // _0222AE82: ; jump table
    ov43_0222B1FC((*((u16*)(*((u8*)(r1 + 8)) + 6)) << 0x10));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r7, [sp, #8]
    BeginNormalPaletteFade(0, 0x11, 0x11, 0);
    *((u8*)(r4 + 8)) = 1;
    IsPaletteFadeFinished(1);
    *((u8*)(r4 + 8)) = 3;
    ov43_0222B1FC(3);
    *((u8*)(r4 + 8)) = 3;
    ov43_0222B374(3);
    // str r0, [sp, #0x10]
    *((u32*)(r5 + 4)) = 2;
    *((u8*)(r4 + 8)) = 4;
    *((u32*)(r5 + 4)) = (*((u32*)(r5 + 4)) - 1);
    *((u32*)(r5 + 4)) = 0;
    ov43_0222B574(4, 0, *((u32*)(r5 + 4)));
    ov43_0222B440(r5, r4);
    *((u8*)(r4 + 8)) = 5;
    ov43_0222B458(r5, r6);
    ov43_0222B4BC(r5, r6, 0x3a, r7);
    *((u8*)(r4 + 8)) = 0xb;
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r7, [sp, #8]
    BeginNormalPaletteFade(0, 0x10, 0x10, 0);
    *((u8*)(r4 + 8)) = (*((u8*)(r4 + 8)) + 1);
    IsPaletteFadeFinished((*((u8*)(r4 + 8)) + 1));
    ov43_0222B1FC(1);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r7, [sp, #8]
    BeginNormalPaletteFade(0, 0x11, 0x11, 0);
    *((u8*)(r4 + 8)) = 8;
    IsPaletteFadeFinished(8);
    PlayerProfile_New(r7);
    // str r0, [sp, #0xc]
    String_cstr(*((u32*)(r4 + 0x58)));
    // ldr r0, [sp, #0xc]
    Save_Profile_PlayerName_Set(r0);
    // ldr r2, [sp, #0xc]
    BufferPlayersName(*((u32*)(r6 + 0x50)), 0);
    // ldr r0, [sp, #0xc]
    Heap_Free();
    // add r1, sp, #0x10
    String_atoi(*((u32*)(r4 + 0x5c)));
    // ldr r0, [sp, #0x10]
    ov43_0222AAA4(r6, r0, r1, r0);
    ov43_0222B4BC(r5, r6, 0x37, r7);
    *((u8*)(r4 + 8)) = 9;
    ov43_0222B4BC(r5, r6, 0x38, r7);
    *((u8*)(r4 + 8)) = 0xb;
    ov43_0222B534(0xb);
    ov43_0222ADB8(r4, r6, 0);
    *((u8*)(r4 + 8)) = 0xa;
    ov43_0222AE2C(r4, r6);
    ov43_0222A358(r4, *((u32*)(r4 + 0x5c)), *((u32*)(r4 + 0x58)));
    ov43_0222B55C(r5, r0);
    *((u8*)(r4 + 8)) = 3;
    ov43_0222B4BC(r5, r6, *((u8*)(ov43_0222F0C8 + r2)), r7);
    *((u8*)(r4 + 8)) = 0xb;
    ov43_0222B55C(r5);
    *((u8*)(r4 + 8)) = 3;
    ov43_0222B534(3);
    // tst r0, r1
    // tst r0, r1
    System_GetTouchNew(2, *((u32*)(gSystem + 0x48)));
    ov43_0222B55C(r5);
    ov43_0222B408(r5, r6);
    *((u8*)(r4 + 8)) = 3;
}




void ov43_0222B098(void) {
}




void ov43_0222B0A0(void) {
    // str r0, [sp, #0x14]
    // add r0, #8
    // str r2, [sp, #0x24]
    // str r3, [sp, #0x18]
    InitWindow();
    // ldr r1, [sp, #0x14]
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x24]
    // add r1, #8
    AddWindowParameterized(*((u32*)1), 3, 4);
    // ldr r0, [sp, #0x14]
    // add r0, #0x20
    InitWindow();
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x24]
    // ldr r1, [sp, #0x14]
    // add r1, #0x20
    AddWindowParameterized(*((u32*)0xac), 1, 2);
    // ldr r0, [sp, #0x14]
    // add r0, #8
    FillWindowPixelBuffer(0);
    // ldr r0, [sp, #0x14]
    // add r0, #0x20
    FillWindowPixelBuffer(0);
    // ldr r1, [sp, #0x18]
    String_New(0x80);
    // ldr r1, [sp, #0x14]
    *((u32*)(r1 + 0x3c)) = r0;
    Save_PlayerData_GetOptionsAddr(*((u32*)(r5 + 4)));
    Options_GetTextFrameDelay();
    // ldr r1, [sp, #0x14]
    *((u32*)(r1 + 0x38)) = r0;
    // ldr r1, [sp, #0x18]
    String_New(0x80);
    // ldr r1, [sp, #0x18]
    String_New(0x80);
    // str r0, [sp, #0x1c]
    Save_PlayerData_GetProfile(*((u32*)(r5 + 4)));
    // ldr r0, [sp, #0x24]
    BufferPlayersName(*((u32*)(r0 + 0x50)), 0, r0);
    // ldr r0, [sp, #0x14]
    // str r0, [sp, #0x20]
    // add r0, #8
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x24]
    // ldr r2, [sp, #0x1c]
    ReadMsgDataIntoString(*((u32*)(r0 + 0x54)), (0 + 1));
    // ldr r0, [sp, #0x24]
    // ldr r2, [sp, #0x1c]
    StringExpandPlaceholders(*((u32*)(r0 + 0x50)), r4);
    FontID_String_GetWidth(4, r4, 0);
    // mov ip, r0
    // str r5, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r6, ip
    // str r0, [sp, #0xc]
    // sub r3, r3, r6
    // ldr r0, [sp, #0x20]
    AddTextPrinterParameterizedWithColor(0, 4, r4, (0xc0 >> 1));
    // add r5, #0x28
    String_Delete(r4);
    // ldr r0, [sp, #0x1c]
    String_Delete();
    // ldr r0, [sp, #0x18]
    // ldr r3, [sp, #0x14]
    // str r0, [sp]
    // ldr r0, [sp, #0x24]
    // add r3, #0x1c
    GfGfxLoader_GetScrnDataFromOpenNarc(*((u32*)(r0 + 0x58)), 0xb, 1);
    // ldr r1, [sp, #0x14]
    *((u32*)(r1 + 0x18)) = r0;
}




void ov43_0222B1D8(void) {
}




void ov43_0222B1FC(void) {
    // add r1, #0x64
    // add r0, #8
    // str r3, [sp]
    // str r0, [sp, #4]
    // add r2, #0xc
    // str r0, [sp, #8]
}




void ov43_0222B278(void) {
    // tst r0, r3
    // str r2, [r1]
    // tst r3, r0
    ov43_0222B3C4(r0, r2, 0, *((u32*)(gSystem + 0x48)));
    PlaySE(0x000005DD);
    // tst r1, r3
    PlaySE(0x000005DD, 2);
    // str r0, [r5]
    // tst r3, r1
    // str r1, [r5]
    // str r1, [r5]
    // tst r1, r3
    // str r1, [r5]
    // str r1, [r5]
    PlaySE(0x000005E5, 0, 1, 0x80);
    ov43_0222B3A4(r5, r4);
    ScheduleBgTilemapBufferTransfer(*((u32*)r4), 2);
}




void ov43_0222B324(void) {
    TouchscreenHitbox_FindHitboxAtTouchNew(ov43_0222EE1A);
    // mvn r1, r1
    // str r1, [r7]
    // str r1, [r6]
    // str r0, [r5]
    PlaySE(0x000005DD, 1);
    ov43_0222B3C4(r5, r4);
    ov43_0222B3A4(r5, r4);
    ScheduleBgTilemapBufferTransfer(*((u32*)r4), 2);
}




void ov43_0222B374(void) {
    // str r3, [sp]
    // add r3, sp, #0
    // ldr r1, [sp]
    // str r1, [r4]
}




void ov43_0222B3A4(void) {
    // add r2, #0x30
    // asr r2, r2, #0x10
}




void ov43_0222B3C4(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
}




void ov43_0222B408(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r7, [sp, #8]
}




void ov43_0222B440(void) {
    // add r2, r0, #0
    // add r0, r1, #0
    // ldr r2, [r2]
    // ldr r1, _0222B450 ; =ov43_0222F0CC
    // ldr r3, _0222B454 ; =ov43_0222A318
    // ldrb r1, [r1, r2]
    // mov r2, #0
    // bx r3
    // _0222B450: .word ov43_0222F0CC
    // _0222B454: .word ov43_0222A318
    // TODO: decompile
}




void ov43_0222B458(void) {
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r2, [sp, #0xc]
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r2, [sp, #0xc]
    // add r5, #8
}




void ov43_0222B4BC(void) {
    String_New(0x80, r3);
    // add r0, #0x20
    FillWindowPixelBuffer(r5, 0xf);
    ReadMsgDataIntoString(*((u32*)(r4 + 0x54)), r7, r6);
    StringExpandPlaceholders(*((u32*)(r4 + 0x50)), *((u32*)(r5 + 0x3c)), r6);
    TextFlags_SetCanTouchSpeedUpPrint(1);
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // add r0, #0x20
    AddTextPrinterParameterizedWithColor(r5, 1, *((u32*)(r5 + 0x3c)), 0);
    *((u32*)(r5 + 0x34)) = r0;
    // add r0, #0x20
    DrawFrameAndWindow2(r5, 1, 0x46, 0xc);
    // add r5, #0x20
    ScheduleWindowCopyToVram(r5);
    String_Delete(r6);
}




void ov43_0222B534(void) {
    // str r0, [r4]
}




void ov43_0222B55C(void) {
}




void ov43_0222B574(void) {
}




void ov43_0222B5A8(void) {
}




void ov43_0222B5D0(void) {
    // str r3, [sp, #0xc]
    // add r5, r5, r5
    // add r5, pc
    // asr r5, r5, #0x10
    // add pc, r5
    // _0222B5F0: ; jump table
    // strh r0, [r6]
    *((u16*)(r0 + 2)) = 0;
    *((u16*)(r0 + 4)) = 0;
    *((u16*)(r0 + 6)) = 0;
    ov43_0222A420(r1);
    // ldr r3, [sp, #0xc]
    ov43_0222BB20(r6, r4, r7);
    *((u8*)(r4 + 8)) = 2;
    ov43_0222BFA4(2);
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222B656: ; jump table
    ov43_0222C53C(r6, r4, 2);
    ov43_0222C53C(r6, r4, 3);
    *((u8*)(r4 + 8)) = 0x17;
    // add r6, #0xf4
    // str r0, [r6]
    *((u8*)(r4 + 8)) = 5;
    ov43_0222BFD4(5);
    *((u8*)(r4 + 8)) = 4;
    ov43_0222C024(4);
    *((u8*)(r4 + 8)) = 2;
    // add r2, #0xf4
    // add r1, #0xf4
    // add r2, #0xf4
    // str r3, [r2]
    // add r1, #0xf4
    // str r2, [r1]
    ov43_0222C620(2, r6, 0, (*((u32*)r6) - 1));
    ov43_0222A41C(r4, r0);
    // ldr r3, [sp, #0xc]
    ov43_0222C148(r6, r4, r7);
    *((u8*)(r4 + 8)) = 6;
    ov43_0222C228(6);
    *((u8*)(r4 + 8)) = r0;
    // add r6, #0xf4
    // str r0, [r6]
    *((u8*)(r4 + 8)) = 8;
    // add r3, #0xf4
    // add r3, #0xf4
    // add r6, #0xf4
    // str r5, [r3]
    ov43_0222BBB8(8, *((u32*)r6));
    ov43_0222A318(r4, 4, 0);
    // ldrsb r2, [r4, r1]
    // asr r0, r2, #2
    // add r0, r2, r0
    // asr r0, r0, #3
    // strh r0, [r6]
    // ldrsb r0, [r4, r1]
    // sub r1, r1, r2
    // ror r1, r0
    // add r0, r2, r1
    *((u16*)(r6 + 4)) = 0x1d;
    *((u8*)(r4 + 8)) = 1;
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 0x10, 0x10, 0);
    ov43_0222C620(r6);
    sub_0202C6F4(*((u32*)(r4 + 4)));
    // add r1, r4, r5
    sub_0202C254(*((u8*)(r1 + 0x18)));
    ov43_0222A414(r4, r0);
    *((u8*)(r4 + 8)) = 0xb;
    IsPaletteFadeFinished(0xb);
    ov43_0222BBB8(r6, r4, r7);
    ov43_0222A318(r4, 2, 4);
    ov43_0222C620(1);
    sub_0202C6F4(*((u32*)(r4 + 4)));
    // add r1, r4, r5
    sub_0202C270(*((u8*)(r1 + 0x18)), *((u32*)(r4 + 0x58)));
    // ldr r3, [sp, #0xc]
    ov43_0222BB20(r6, r4, r7);
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 0x11, 0x11, 0);
    *((u8*)(r4 + 8)) = 0xe;
    IsPaletteFadeFinished(0xe);
    *((u8*)(r4 + 8)) = 2;
    ov43_0222C32C(2);
    *((u8*)(r4 + 8)) = 0x10;
    ov43_0222C358(0x10);
    *((u8*)(r4 + 8)) = 0x11;
    ov43_0222AE2C(r4, r7);
    ov43_0222C600(r6);
    *((u8*)(r4 + 8)) = 0x12;
    ov43_0222C600(r6);
    ov43_0222AD00(r7, 1);
    // ldrsh r2, [r6, r2]
    // add r0, #8
    ov43_0222C890(r6, r7, 4, 0);
    *((u8*)(r4 + 8)) = 2;
    ov43_0222C65C(2, r7);
    *((u8*)(r4 + 8)) = 0x13;
    ov43_0222C714(0x13, r7);
    sub_0202C6F4(*((u32*)(r4 + 4)));
    // str r0, [sp, #0x10]
    ov43_0222C620(r6);
    // str r0, [sp, #0x14]
    // ldr r1, [sp, #0x14]
    // add r5, #0x18
    // ldr r0, [sp, #0x10]
    sub_0202C338(*((u8*)(r4 + r1)));
    Save_Frontier_GetStatic(*((u32*)(r4 + 4)));
    // ldr r1, [sp, #0x14]
    sub_020311AC(*((u8*)(r5 + r1)));
    ov43_0222A420(r4);
    // ldrsh r0, [r6, r0]
    // str r0, [sp]
    // ldr r0, [sp, #0xc]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // ldrsh r3, [r6, r3]
    ov43_0222C378(r6, r4, r7, 0);
    ov43_0222AD00(r7, 1);
    *((u8*)(r4 + 8)) = 0x14;
    ov43_0222C750(0x14, r7);
    *((u8*)(r4 + 8)) = 2;
    ov43_0222C2B0(2);
    *((u8*)(r4 + 8)) = 0x16;
    ov43_0222AD00(r7, 1);
    *((u8*)(r4 + 8)) = 2;
    ov43_0222C5D8(2);
    System_GetTouchNew(*((u32*)(gSystem + 0x48)));
    ov43_0222AD00(r7, 1);
    // ldrsh r2, [r6, r2]
    // add r0, #8
    ov43_0222C890(r6, r7, 4, 0);
    *((u8*)(r4 + 8)) = 2;
    ov43_0222C600(r6);
    ov43_0222BBB8();
    ov43_0222A318(r4, 0, 2);
}




void ov43_0222B93C(void) {
}




void ov43_0222B944(void) {
    // str r0, [sp, #0x18]
    // ldr r4, [sp, #0x18]
    // str r3, [sp, #0x1c]
    // str r0, [sp, #0x28]
    // add r4, #8
    // ldr r0, [sp, #0x1c]
    // str r0, [sp]
    ov43_0222C788(r4, r2, ov43_0222EE08, *((u16*)ov43_0222ED74));
    // ldr r0, [sp, #0x28]
    // add r4, #0x38
    // str r0, [sp, #0x28]
    // ldr r3, [sp, #0x1c]
    ov42_02227060(*((u32*)(r7 + 4)), 0, 0x10);
    // ldr r1, [sp, #0x18]
    // ldr r3, [sp, #0x1c]
    // add r1, #0xb4
    // str r0, [r1]
    // ldr r0, [sp, #0x18]
    // add r0, #0xb4
    ov42_02227228(*((u32*)r0), 1, 2);
    // ldr r1, [sp, #0x18]
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r1, #0xb8
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    ov43_0222A24C(*((u32*)r7), 1, 0x15);
    NewString_ReadMsgData(*((u32*)(r7 + 0x54)), 7);
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x18]
    // add r0, #0xb8
    // str r3, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(0x00010F00, 4, r0, 0);
    String_Delete(r4);
    // str r0, [sp, #0x20]
    // ldr r6, [sp, #0x18]
    // str r0, [sp, #0x24]
    // ldr r1, [sp, #0x1c]
    ListMenuItems_New(4);
    // add r1, #0xe4
    // ldr r5, [sp, #0x24]
    // str r0, [r1]
    // add r0, #0xe4
    ListMenuItems_AppendFromMsgData(*((u32*)r6), *((u32*)(r7 + 0x54)), *((u32*)r5), *((u32*)(r5 + 4)));
    // add r5, #8
    // ldr r0, [sp, #0x24]
    // add r0, #0x20
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #0x20]
    // str r0, [sp, #0x20]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r1, [sp, #0x18]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // add r1, #0xc8
    ov43_0222A24C(*((u32*)r7), 1, 2);
    // ldr r1, [sp, #0x1c]
    String_New(0x80);
    // ldr r1, [sp, #0x18]
    // add r1, #0xd8
    // str r0, [r1]
    // add r3, sp, #0x2c
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // add r7, #0x88
    // str r0, [sp, #0x2c]
    // ldr r0, [sp, #0x1c]
    // str r7, [sp, #0x30]
    // str r0, [sp, #0x58]
    // add r0, sp, #0x2c
    Sprite_CreateAffine(*((u32*)(r7 + 4)), (6 - 1));
    // ldr r1, [sp, #0x18]
    // add r1, #0xf8
    // str r0, [r1]
    // ldr r0, [sp, #0x18]
    // add r0, #0xf8
    // str r0, [sp, #0x18]
    Sprite_SetDrawFlag(*((u32*)r0), 0);
}




void ov43_0222BAB8(void) {
    // add r0, #0xf8
    // add r0, #0xc8
    // add r0, #0xd8
    // add r0, #0xe4
    // add r0, #0xb8
    // add r0, #0xb4
    // add r0, #0xb4
    // add r5, #8
    // add r5, #0x38
}




void ov43_0222BB20(void) {
    // add r1, #0x64
    // str r1, [sp]
    // str r1, [sp, #4]
    // add r1, #0xc
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    // str r1, [sp, #0x10]
    // str r2, [sp, #0x14]
    // str r0, [sp, #0x18]
    // add r0, #0xb8
    // ldrsh r0, [r5, r0]
    // str r0, [sp]
    // str r3, [sp, #4]
    // str r6, [sp, #8]
    // ldrsh r3, [r5, r3]
}




void ov43_0222BBB8(void) {
    // add r0, #0xb8
    // add r5, #8
    // add r2, r4, r7
    // add r5, #0x38
    // str r1, [sp]
    // str r1, [sp, #4]
    // add r1, #0xc
    // str r1, [sp, #8]
    // str r2, [sp, #0xc]
    // str r1, [sp, #0x10]
    // str r3, [sp, #0x14]
    // str r0, [sp, #0x18]
    // str r2, [sp]
    // str r3, [sp, #4]
    // add r1, #0xc
    // str r1, [sp, #8]
    // str r2, [sp, #0xc]
    // str r3, [sp, #0x10]
    // str r1, [sp, #0x14]
    // str r0, [sp, #0x18]
}




void ov43_0222BC78(void) {
    PlaySE(0x000005DD);
    // ldrsh r2, [r5, r2]
    // add r0, #8
    ov43_0222C890(r5, r4, 4, 1);
    // ldrsh r2, [r5, r0]
    PlaySE(0x000005DD);
    // ldrsh r2, [r5, r2]
    // add r0, #8
    ov43_0222C890(r5, r4, 4, 1);
    // ldrsh r3, [r5, r0]
    // add r2, r2, r3
    PlaySE(0x000005DD, *((u32*)(r1 + 0x10)), (r3 << 3));
    // ldrsh r2, [r5, r2]
    // add r0, #8
    ov43_0222C890(r5, r4, 4, 1);
    ov43_0222AD40(r4, 0, 1);
    ov43_0222AD40(r4, 1, 1);
}




void ov43_0222BD18(void) {
    // tst r0, r1
    // str r0, [r6]
    // tst r2, r1
    ov43_0222BC78(r0, r1, r2, 5);
    // tst r1, r2
    *((u16*)(r5 + 4)) = 8;
    // ldrsh r2, [r5, r2]
    // add r0, #8
    ov43_0222C844(r5, r7, 4);
    ov43_0222BC78(r5, r6, r7, 0);
    // ldrsh r1, [r5, r1]
    // str r2, [sp, #8]
    // str r2, [sp, #4]
    // tst r0, r2
    // ldrsh r0, [r5, r0]
    *((u16*)(r5 + 4)) = 6;
    ov43_0222AD00(r7, 1, *((u32*)(r0 + 0x4c)));
    *((u16*)(r5 + 4)) = (r1 - 1);
    *((u16*)(r5 + 4)) = (r1 - 1);
    // tst r0, r2
    *((u16*)(r5 + 4)) = 8;
    *((u16*)(r5 + 4)) = (r1 + 1);
    *((u16*)(r5 + 4)) = (r1 + 1);
    // tst r0, r2
    *((u16*)(r5 + 4)) = (r1 + 4);
    // str r0, [sp, #4]
    // str r0, [sp]
    *((u16*)(r5 + 4)) = (r1 - 4);
    // tst r0, r3
    *((u16*)(r5 + 4)) = (r1 + 4);
    *((u16*)(r5 + 4)) = (r1 - 4);
    // str r0, [sp, #4]
    // str r0, [sp]
    // tst r1, r2
    // str r0, [sp, #4]
    // str r0, [sp]
    // tst r0, r2
    // str r0, [sp, #4]
    // str r0, [sp]
    // ldr r0, [sp, #4]
    // ldr r0, [sp]
    // ldrsh r1, [r5, r0]
    *((u16*)(r5 + 2)) = (0x10 << 5);
    // ldrsh r0, [r5, r0]
    // sub r1, r1, r2
    // ror r1, r0
    // add r0, r2, r1
    // strh r0, [r5]
    ov43_0222BC78(r5, r6, r7, 2);
    // ldrsh r1, [r5, r0]
    *((u16*)(r5 + 2)) = r1;
    // ldrsh r1, [r5, r0]
    // strh r1, [r5]
    // ldrsh r0, [r5, r0]
    // strh r0, [r5]
    ov43_0222BC78(r5, r6, r7, 1);
    PlaySE(0x000005E5);
    // ldrsh r2, [r5, r2]
    // add r0, #8
    ov43_0222C844(r5, r7, 4);
    // ldr r0, [sp, #8]
    *((u16*)(r5 + 6)) = r0;
}




void ov43_0222BEEC(void) {
    TouchscreenHitbox_FindHitboxAtTouchNew(ov43_0222EF60);
    // mvn r1, r1
    // str r1, [r6]
    *((u16*)(r5 + 4)) = 0;
    PlaySE(0x000005E5, 1);
    // ldrsh r2, [r5, r2]
    // add r0, #8
    ov43_0222C844(r5, r4, 4);
    ov43_0222BC78(r5, r7, r4, 5);
    // ldrsh r1, [r5, r1]
    // sub r0, #0xb
    // sub r0, r0, r1
    // asr r1, r0, #0x18
    // str r0, [r6]
    // ldrsh r2, [r5, r0]
    *((u16*)(r5 + 2)) = r2;
    // ldrsh r2, [r5, r0]
    // add r2, r2, r1
    // strh r2, [r5]
    // ldrsh r0, [r5, r0]
    // sub r1, r1, r2
    // ror r1, r0
    // add r0, r2, r1
    // strh r0, [r5]
    ov43_0222BC78(r5, r7, r4, 2);
    // strh r0, [r5]
    ov43_0222BC78(r5, r7, r4, 1);
}




void ov43_0222BFA4(void) {
    // str r3, [sp]
    // add r3, sp, #0
    // ldr r1, [sp]
    // str r1, [r4]
}




void ov43_0222BFD4(void) {
    // add r0, #0xb2
    // ldrsh r0, [r5, r0]
    // str r0, [sp]
    // str r2, [sp, #4]
    // str r3, [sp, #8]
    // ldrsh r3, [r5, r3]
    ov43_0222C378(r0, r2, 0);
    // add r5, #8
    ov43_0222C844(r5, r4, 0xa);
    ov43_0222AD20(r4, 0);
    PlaySE(0x000005E1);
}




void ov43_0222C024(void) {
    // ldrsh r0, [r5, r0]
    // str r1, [sp, #0xc]
    ScheduleSetBgPosText(*((u32*)r2), 2, 0, 0);
    ScheduleSetBgPosText(*((u32*)r4), 3, 0, 0);
    // add r2, sp, #0x10
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // add r0, #8
    GF_SetG2dRendererSurface(r4, r2, ov43_0222F0FC);
    // add r0, #0xb2
    // add r1, #8
    // add r0, r1, r0
    // add r2, r4, r2
    ov43_0222C9A4((0x38 * 1), r4, (2 << 8));
    // ldrsh r0, [r5, r0]
    // ldr r1, [sp, #0xc]
    // str r0, [sp]
    // str r3, [sp, #4]
    // str r6, [sp, #8]
    // ldrsh r3, [r5, r3]
    ov43_0222C378(r5, r4, 0);
    ov43_0222AD20(r4, 1);
    // asr r0, r1, #2
    // add r0, r1, r0
    // asr r6, r0, #3
    // add r0, #0xb2
    // neg r6, r6
    ScheduleSetBgPosText(*((u32*)r4), 2, 0, r6);
    ScheduleSetBgPosText(*((u32*)r4), 3, 0, r6);
    // add r2, sp, #0x10
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldr r1, [sp, #0x10]
    // add r0, r1, r0
    // str r0, [sp, #0x10]
    // add r0, #8
    GF_SetG2dRendererSurface(r4, r2, ov43_0222F0FC);
    // ldrsh r3, [r5, r0]
    // sub r1, r1, r2
    // ror r1, r0
    // add r0, r2, r1
    // add r2, r3, r2
    // asr r0, r2, #1
    // ldrsh r2, [r5, r2]
    // ldrsh r3, [r5, r3]
    // blx r6
    // ldrsh r0, [r5, r0]
    // add r5, #0xb0
    // strh r0, [r5]
}




void ov43_0222C148(void) {
    // str r3, [sp, #0x18]
    sub_0202C6F4(*((u32*)(r1 + 4)));
    // str r0, [sp, #0x1c]
    ov43_0222C620(r6);
    // str r0, [sp, #0x20]
    // ldr r1, [sp, #0x20]
    // add r7, #0x18
    // ldr r0, [sp, #0x1c]
    sub_0202C090(*((u8*)(r5 + r1)), 8);
    // str r0, [sp, #0x24]
    // add r0, sp, #0x28
    MI_CpuFill8(0, 0x18);
    // add r0, sp, #0x28
    // strh r2, [r0]
    *((u16*)(r0 + 2)) = *((u16*)(ov43_0222ED9C + 6));
    *((u16*)(r0 + 4)) = *((u16*)(ov43_0222ED9C + 8));
    *((u16*)(r0 + 6)) = *((u16*)(ov43_0222ED9C + 0xa));
    *((u16*)(r0 + 8)) = *((u16*)(ov43_0222ED9C + 0xc));
    *((u16*)(r0 + 0xa)) = *((u16*)(ov43_0222ED9C + 0xe));
    // ldr r0, [sp, #0x24]
    // add r0, #0xe8
    // str r0, [sp, #0x34]
    // add r0, #0xe4
    // str r0, [sp, #0x34]
    // str r0, [sp, #0x38]
    // add r0, sp, #0x28
    *((u8*)(*((u32*)r4) + 0x14)) = 4;
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // str r1, [sp, #0x10]
    // str r0, [sp, #0x14]
    // add r1, sp, #0x28
    TouchscreenListMenu_CreateWithCallback(*((u32*)(r4 + 0x5c)), 0, ((*((u32*)r5) << 0x18) >> 0x18), 0xd);
    // add r1, #0xec
    // str r0, [r1]
    // ldr r2, [sp, #0x20]
    // ldr r3, [sp, #0x18]
    ov43_0222AB20(r4, *((u32*)(r5 + 4)), *((u8*)(r7 + r2)));
    // ldr r3, [sp, #0x18]
    ov43_0222C550(r6, r4, 0xc);
    ov43_0222AD00(r4, 0);
    // str r0, [sp]
    StartBrightnessTransition(4, 8, 0, 0x3d);
}




void ov43_0222C228(void) {
    // add r0, #0xec
    // mvn r0, r0
    // add r0, #0xec
    // str r0, [r7]
    // add r0, #0xec
    // ldrsh r2, [r5, r2]
    // add r0, #8
}




void ov43_0222C2B0(void) {
    // str r0, [sp]
    // str r3, [sp, #4]
    sub_0202C6F4(*((u32*)(r1 + 4)));
    // str r0, [sp, #0x1c]
    // ldr r0, [sp]
    ov43_0222C620();
    // add r6, #0x18
    // ldr r0, [sp, #0x1c]
    sub_0202C23C(*((u8*)(r5 + r0)));
    DWC_GetFriendKey();
    // str r1, [sp, #0x10]
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x10]
    // eor r0, r2
    // ldr r2, [sp, #0x14]
    // eor r1, r2
    // str r0, [sp, #8]
    // str r0, [sp, #8]
    PlaySE(0x000005DD, 0, 0);
    // ldr r1, [sp, #0x14]
    // ldr r2, [sp, #0x10]
    ov43_0222AAA4(r4);
    // ldr r3, [sp, #4]
    ov43_0222AB20(r4, *((u32*)(r5 + 4)), *((u8*)(r6 + r7)));
    // ldr r0, [sp]
    // ldr r2, [sp, #8]
    // ldr r3, [sp, #4]
    ov43_0222C550(r4);
}




void ov43_0222C32C(void) {
}




void ov43_0222C358(void) {
}




void ov43_0222C378(void) {
    // str r1, [sp, #0x10]
    // ldr r1, [sp, #0x34]
    // ldr r1, [sp, #0x30]
    // strh r7, [r5]
    // ldr r1, [sp, #0x34]
    // add r4, #8
    // str r0, [sp, #0x14]
    // add r0, r4, r0
    // add r2, r6, r2
    // add r0, r6, r0
    // str r0, [sp]
    // ldr r0, [sp, #0x10]
    // add r5, #0xb4
    // add r0, #0x10
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x38]
    // str r7, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp, #0x10]
    // add r0, r4, r0
    // ldr r0, [sp, #0x14]
    // ldr r2, [sp, #0x30]
    // add r0, r4, r0
}




void ov43_0222C3E8(void) {
    // str r2, [sp]
    // str r3, [sp, #4]
    // add r1, #0xc
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    // str r3, [sp, #0x10]
    // str r3, [sp, #0x14]
    // str r0, [sp, #0x18]
    // str r1, [sp]
    // str r1, [sp, #4]
    // add r1, #0xc
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    // str r1, [sp, #0x10]
    // add r2, #0x10
    // str r1, [sp, #0x14]
    // str r0, [sp, #0x18]
}




void ov43_0222C46C(void) {
    // str r1, [sp]
    // str r1, [sp, #4]
    // add r1, #0xc
    // add r2, #0x10
    // str r1, [sp, #8]
    // str r2, [sp, #0xc]
    // str r1, [sp, #0x10]
    // str r1, [sp, #0x14]
    // str r0, [sp, #0x18]
}




void ov43_0222C4B8(void) {
    // str r2, [sp]
    // str r3, [sp, #4]
    // add r1, #0xc
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    // str r3, [sp, #0x10]
    // str r3, [sp, #0x14]
    // str r0, [sp, #0x18]
    // str r1, [sp]
    // str r1, [sp, #4]
    // add r1, #0xc
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    // str r1, [sp, #0x10]
    // add r2, #0x10
    // str r1, [sp, #0x14]
    // str r0, [sp, #0x18]
}




void ov43_0222C53C(void) {
    // add r1, #0xb2
    // strh r2, [r1]
    // add r0, #0xb0
    // strh r1, [r0]
}




void ov43_0222C550(void) {
    // add r0, #0xc8
    FillWindowPixelBuffer(0xf);
    String_New(0x80, r6);
    ReadMsgDataIntoString(*((u32*)(r4 + 0x54)), r7, r0);
    // add r1, #0xd8
    StringExpandPlaceholders(*((u32*)(r4 + 0x50)), *((u32*)r5), r6);
    TextFlags_SetCanTouchSpeedUpPrint(1);
    // str r3, [sp]
    // add r0, #0xe0
    // add r2, #0xd8
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // add r0, #0xc8
    AddTextPrinterParameterizedWithColor(r5, 1, *((u32*)r5), 0);
    // add r1, #0xdc
    // str r0, [r1]
    // add r0, #0xc8
    DrawFrameAndWindow2(r5, 1, 0x46, 0xc);
    // add r5, #0xc8
    ScheduleWindowCopyToVram(r5);
    String_Delete(r6);
}




void ov43_0222C5D8(void) {
    // add r0, #0xdc
    // str r0, [r4]
}




void ov43_0222C600(void) {
}




void ov43_0222C620(void) {
    // ldrsh r1, [r0, r1]
    // ldrsh r0, [r0, r1]
    // add r0, r2, r0
}




void ov43_0222C630(void) {
    PlaySE(0x000005DC);
    PlaySE(0x000005DC);
    PlaySE(0x000005DC);
}




void ov43_0222C65C(void) {
    // add r0, #0xf8
    Sprite_SetDrawFlag(*((u32*)r0), 1);
    ov43_0222AD74(r4, 0, 0xff);
    // add r0, #0xf8
    Sprite_SetAnimCtrlSeq(*((u32*)r5), 4);
    // add r0, #0xfc
    // str r1, [r0]
    // add r0, #0xf8
    Sprite_SetAnimActiveFlag(*((u32*)r5), 1);
    // ldrsh r1, [r5, r0]
    // add r5, #0xf8
    // ldrsh r0, [r0, r3]
    // str r2, [sp]
    // ldrsh r0, [r0, r3]
    // add r1, #0xfc
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #4]
    // add r1, sp, #0
    Sprite_SetMatrix(*((u32*)r5), (ov43_0222EFA2 << 3), (ov43_0222EFA0 << 3), (r1 * 0xa));
    // and r2, r0
    // strh r2, [r1]
    // sub r0, #0xd8
    // strh r3, [r1]
    // and r3, r1
    // str r1, [r4]
    PlaySE((7 << 8), ((0x20 << 0xa) | *((u32*)(0x20 << 0x15))), 0x20, *((u32*)(0x20 << 0x15)));
}




void ov43_0222C714(void) {
    // add r0, #0xf8
    Sprite_IsAnimated(*((u32*)r0));
    // add r0, #0xf8
    Sprite_GetAnimationFrame(*((u32*)r4));
    // add r1, #0xfc
    // sub r1, r0, r1
    // add r4, #0xfc
    // str r0, [r4]
    PlaySE(0x00000628, *((u32*)r4));
}




void ov43_0222C750(void) {
    // and r0, r1
    // str r0, [r2]
    // add r0, #0xf8
    Sprite_SetDrawFlag(*((u32*)r0), 0, (1 << 0x1a));
    // add r5, #0xf8
    Sprite_SetAnimActiveFlag(*((u32*)r5), 0);
    ov43_0222AD74(r4, 1, 0xff);
}




void ov43_0222C788(void) {
    // strh r0, [r5]
    // add r0, #8
    // ldrsh r1, [r4, r0]
    // neg r1, r1
    // ldrsh r3, [r4, r0]
    // neg r3, r3
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r5, #8
}




void ov43_0222C7EC(void) {
}




void ov43_0222C7F8(void) {
    // ldrsh r5, [r0, r1]
    // neg r5, r5
    // ldrsh r3, [r0, r1]
    // neg r3, r3
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r2, #0xc
    // str r0, [sp, #8]
}




void ov43_0222C844(void) {
    ov43_0222AD74(r1, 0, 0xff);
    // add r2, r1, r3
    // ldrsh r1, [r1, r3]
    // ldrsh r2, [r2, r3]
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    Sprite_SetPositionXY(*((u32*)(r4 + (0x7f << 2))), ((ov43_0222EFA0 + 7) << 0x13), ((r2 + 2) << 0x13), 2);
    ov43_0222AD74(r4, 1, 0xff);
}




void ov43_0222C890(void) {
    // str r1, [sp, #0xc]
    // str r2, [sp, #0x10]
    // str r3, [sp, #0x14]
    // ldr r0, [sp, #0x14]
    // ldr r0, [sp, #0x10]
    // ldrsh r3, [r7, r1]
    // neg r3, r3
    // ldrsh r2, [r7, r1]
    // neg r2, r2
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // ldrsh r6, [r5, r6]
    // ldr r0, [sp, #0xc]
    // add r2, r6, r2
    // ldrsh r6, [r5, r6]
    // add r3, r6, r3
    BgTilemapRectChangePalette(*((u32*)((*((u8*)(ov43_0222EFA0 + 7)) << 0x18) >> 0x18)), *((u8*)(ov43_0222EFA0 + 6)), ((r2 << 0x18) >> 0x18), ((r3 << 0x18) >> 0x18));
    // add r5, #0xa
    // ldr r0, [sp, #0xc]
    ScheduleBgTilemapBufferTransfer(*((u32*)r0), 2);
    // ldr r0, [sp, #0xc]
    ScheduleBgTilemapBufferTransfer(*((u32*)r0), 0);
}




void ov43_0222C918(void) {
    // ldr r0, [sp, #0x30]
    // str r0, [sp, #0x30]
    // ldr r0, [sp, #0x34]
    // str r3, [sp, #0x10]
    // str r0, [sp, #0x34]
    // ldr r0, [sp, #0x3c]
    // str r0, [sp, #0x3c]
    // str r0, [sp, #0x14]
    // add r0, #8
    // ldr r0, [sp, #0x38]
    // ldr r1, [sp, #0x34]
    // str r0, [sp, #0x18]
    // add r5, r1, r0
    // ldr r0, [sp, #0x34]
    // ldr r0, [sp, #0x18]
    // add r0, r0, r4
    // ldr r0, [sp, #0x14]
    // str r4, [sp]
    // str r0, [sp, #4]
    // ldr r1, [sp, #0x10]
    // ldr r3, [sp, #0x30]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x3c]
    // str r0, [sp, #0xc]
    // ldr r2, [sp, #0x30]
    // add r6, #8
}




void ov43_0222C9A4(void) {
    // add r0, #8
    // ldrsh r1, [r5, r0]
    // neg r1, r1
    // ldrsh r3, [r5, r0]
    // neg r3, r3
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r2, [sp, #0xc]
    // ldrsh r1, [r5, r0]
    // neg r1, r1
    // ldrsh r3, [r5, r0]
    // neg r3, r3
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r2, [sp, #0xc]
}




void ov43_0222CA30(void) {
}




void ov43_0222CA50(void) {
    // ldr r0, [sp, #0x48]
    // str r0, [sp, #0x18]
    // str r1, [sp, #0x10]
    // ldr r0, [sp, #0x44]
    // ldr r1, [sp, #0x18]
    // str r3, [sp, #0x14]
    // ldr r4, [sp, #0x40]
    sub_0202C090(7);
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x44]
    // ldr r1, [sp, #0x18]
    sub_0202C090(8);
    // ldr r2, [sp, #0x14]
    ov43_0222CB34(r5, r6, r4);
    // ldrsh r1, [r5, r1]
    // ldrsh r2, [r2, r6]
    // add r0, #0xfc
    // add r1, r1, r2
    // add r2, #8
    // add r1, sp, #0x20
    // strh r2, [r1]
    // ldrsh r3, [r5, r2]
    // ldrsh r2, [r2, r6]
    // add r2, r3, r2
    // add r0, r2, r0
    *((u16*)(0 + 2)) = 0xa;
    *((u16*)(0 + 4)) = 8;
    *((u16*)(0 + 6)) = 1;
    // ldr r0, [sp, #0x10]
    // ldr r2, [sp, #0x1c]
    // ldr r3, [sp, #0x4c]
    // add r1, sp, #0x20
    ov42_022272BC(1, 0, (ov43_0222EFA2 << 3));
    // add r1, r5, r1
    *((u32*)((r4 << 2) + 0x18)) = r0;
    // ldr r1, [sp, #0x4c]
    String_New(0x80, (r4 << 2));
    // ldr r0, [sp, #0x44]
    // ldr r1, [sp, #0x18]
    sub_0202C254();
    CopyU16ArrayToString(r6, r0);
    // ldrsh r0, [r0, r3]
    // ldrsh r3, [r4, r3]
    // sub r0, #0x18
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r5, #8
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r5, 4, r6, ((r4 * 0xa) << 3));
    String_Delete(r6);
}




void ov43_0222CB34(void) {
    // ldrsh r5, [r0, r3]
    // neg r5, r5
    // ldrsh r6, [r0, r3]
    // neg r6, r6
    // str r1, [sp]
    // str r1, [sp, #4]
    // add r1, #0xc
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    // str r1, [sp, #0x10]
    // ldrsh r2, [r2, r3]
    // str r1, [sp, #0x14]
    // add r2, r2, r6
    // ldrsh r3, [r6, r3]
    // add r3, r3, r5
    // str r0, [sp, #0x18]
    CopyToBgTilemapRect(*((u32*)r1), 2, ((ov43_0222EFA0 << 0x18) >> 0x18), (((r3 * 0xa) << 0x18) >> 0x18));
    ScheduleBgTilemapBufferTransfer(*((u32*)r4), 2);
}




void ov43_0222CBAC(void) {
}




void ov43_0222CBB4(void) {
    // ldr r6, [sp, #0x30]
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0222CBD4: ; jump table
    ov43_0222CD44(r2, r6);
    *((u32*)(r4 + 4)) = r0;
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    Save_PlayerData_GetOptionsAddr(*((u32*)(r5 + 4)));
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r2, sp, #8
    sub_02085400(r6, 0xc, r0);
    *((u32*)(r4 + 8)) = r0;
    ov43_0222A1DC(r7);
    OverlayManager_New(gOverlayTemplate_NamingScreen, *((u32*)(r4 + 4)), r6);
    // str r0, [r4]
    *((u8*)(r5 + 8)) = 1;
    OverlayManager_Run(*((u32*)r4));
    OverlayManager_Delete(*((u32*)r4));
    OverlayManager_New(_02102620, *((u32*)(r4 + 8)), r6);
    // str r0, [r4]
    *((u8*)(r5 + 8)) = 2;
    ov43_0222A318(r5, 0, 0);
    *((u8*)(r5 + 8)) = 3;
    OverlayManager_Run(*((u32*)r4));
    OverlayManager_Delete(*((u32*)r4));
    ov43_0222A338(r5, *((u32*)(*((u32*)(r4 + 4)) + 0x18)), *((u32*)(*((u32*)(r4 + 8)) + 0x1c)));
    ov43_0222A318(r5, 0, 7);
    *((u8*)(r5 + 8)) = 3;
    NamingScreen_DeleteArgs(*((u32*)(r4 + 4)));
    sub_02085438(*((u32*)(r4 + 8)));
    ov43_0222A154(r7, r6);
    ov43_0222CD44(1, r5, r6);
    *((u32*)(r4 + 4)) = r0;
    ov43_0222A1DC(r7);
    OverlayManager_New(gOverlayTemplate_NamingScreen, *((u32*)(r4 + 4)), r6);
    // str r0, [r4]
    *((u8*)(r5 + 8)) = 5;
    OverlayManager_Run(*((u32*)r4));
    OverlayManager_Delete(*((u32*)r4));
    ov43_0222A318(r5, 1, 0xc);
    ov43_0222A338(r5, *((u32*)(*((u32*)(r4 + 4)) + 0x18)), 0);
    *((u8*)(r5 + 8)) = 6;
    ov43_0222A318(r5, 1, 0xd);
    *((u8*)(r5 + 8)) = 6;
    NamingScreen_DeleteArgs(*((u32*)(r4 + 4)));
    ov43_0222A154(r7, r6);
}




void ov43_0222CD34(void) {
}




void ov43_0222CD3C(void) {
    // bx lr
    // TODO: decompile
}




void ov43_0222CD40(void) {
    // bx lr
    // TODO: decompile
}




void ov43_0222CD44(void) {
    // str r0, [sp]
    // str r2, [sp, #4]
}




void ov43_0222CD90(void) {
}




void ov43_0222CD98(void) {
    ov43_0222D028(*((u8*)(r1 + 8)));
    *((u8*)(r4 + 8)) = 1;
    ov43_0222CE14(1);
    PlaySE(0x000005DD);
    ov43_0222D0F8(r5, r6, 1);
    *((u32*)(r5 + 0x38)) = 4;
    *((u8*)(r4 + 8)) = 2;
    *((u32*)(r5 + 0x38)) = (*((u32*)(r5 + 0x38)) - 1);
    ov43_0222D0F8(2, r6, 0);
    ov43_0222A318(r4, 0, 2);
    ov43_0222D090(r5, r6);
}




void ov43_0222CE0C(void) {
}




void ov43_0222CE14(void) {
    TouchscreenHitbox_FindHitboxAtTouchNew(ov43_0222ED7A);
    // str r0, [r4]
    ov43_0222A320(r4);
    // tst r0, r1
}




void ov43_0222CE48(void) {
    // str r1, [sp, #0x14]
    InitWindow();
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // str r0, [sp, #0x10]
    AddWindowParameterized(*((u32*)r4), r5, 3, 4);
    // add r0, #0x10
    InitWindow(r5);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, #0x10
    AddWindowParameterized(*((u32*)r4), r5, 3, 9);
    // add r0, #0x20
    InitWindow(r5);
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, #0x20
    AddWindowParameterized(*((u32*)r4), r5, 3, 0x15);
    FillWindowPixelBuffer(r5, 0);
    // add r0, #0x10
    FillWindowPixelBuffer(r5, 0);
    // add r0, #0x20
    FillWindowPixelBuffer(r5, 0);
    String_New(0x80, r7);
    String_New(0x80, r7);
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x14]
    sub_0202C6F4(*((u32*)(r0 + 4)));
    sub_0202C08C();
    DWC_CreateFriendKey();
    // str r1, [sp, #0x1c]
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #0x1c]
    // eor r0, r2
    // ldr r2, [sp, #0x24]
    // eor r1, r2
    ReadMsgDataIntoString(*((u32*)(r4 + 0x54)), 0x35, r6);
    FontID_String_GetWidthMultiline(0, r6, 0);
    // sub r0, r1, r0
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r5, 0, r6, (r0 >> 1));
    // ldr r1, [sp, #0x24]
    // ldr r2, [sp, #0x1c]
    ov43_0222AAA4(r4);
    // ldr r2, [sp, #0x20]
    ReadMsgDataIntoString(*((u32*)(r4 + 0x54)), 0x34);
    // ldr r2, [sp, #0x20]
    StringExpandPlaceholders(*((u32*)(r4 + 0x50)), r6);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0x10
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r5, 0, r6, 0);
    ReadMsgDataIntoString(0x36, r6);
    FontID_String_GetWidthMultiline(0, r6, 0);
    // sub r0, r1, r0
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r5, 0, r6, (r0 >> 1));
    ReadMsgDataIntoString(*((u32*)(r4 + 0x54)), 0x33, r6);
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0x20
    // str r3, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r5, 4, r6, 0);
    String_Delete(r6);
    // ldr r0, [sp, #0x20]
    String_Delete();
    // str r7, [sp]
    // add r3, #0x34
    GfGfxLoader_GetScrnDataFromOpenNarc(*((u32*)(r4 + 0x58)), 0xe, 1, r5);
    *((u32*)(r5 + 0x30)) = r0;
}




void ov43_0222D008(void) {
}




void ov43_0222D028(void) {
    // add r1, #0x64
    // str r3, [sp]
    // str r0, [sp, #4]
    // add r2, #0xc
    // str r0, [sp, #8]
    // add r0, #0x10
    // add r5, #0x20
}




void ov43_0222D090(void) {
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r2, [sp, #0xc]
    // add r0, #0x10
    // add r5, #0x20
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r2, [sp, #0xc]
}




void ov43_0222D0F8(void) {
    // add r1, sp, #0xc
    // strb r5, [r1]
    *((u8*)(r1 + 1)) = *((u8*)(_0222ED5C + 2));
    // str r1, [sp]
    // str r1, [sp, #4]
    // add r0, sp, #0xc
    // str r0, [sp, #8]
    BgTilemapRectChangePalette(*((u32*)r1), 2, 0x11, 0x14);
    ScheduleBgTilemapBufferTransfer(*((u32*)r4), 2);
}




void ov43_0222D134(void) {
}




void ov43_0222D15C(void) {
    // str r3, [sp]
    // add r5, r5, r5
    // add r5, pc
    // asr r5, r5, #0x10
    // add pc, r5
    // _0222D178: ; jump table
    *((u16*)(r0 + 0xe)) = 0;
    // strh r0, [r4]
    // ldr r3, [sp]
    ov43_0222D654(r0, r1, r2);
    *((u8*)(r6 + 8)) = 2;
    ov43_0222D47C(2);
    *((u8*)(r6 + 8)) = r0;
    ov43_0222D4C4();
    // ldr r3, [sp]
    ov43_0222D508(r4, r6, r7);
    *((u8*)(r6 + 8)) = 4;
    ov43_0222D508(4);
    *((u8*)(r6 + 8)) = 2;
    *((u16*)(r4 + 0xc)) = (*((u16*)(r4 + 0xc)) - 1);
    ov43_0222DCC4(r6, *((u32*)(r4 + 8)));
    PlaySE(0x000005E5);
    ov43_0222D87C(r4, r7);
    ov43_0222A318(r6, 4, 1);
    *((u16*)(r4 + 0xe)) = 1;
    *((u8*)(r6 + 8)) = 2;
    ov43_0222D778(2, r7);
    ov43_0222A318(r6, 1, 9);
}




void ov43_0222D228(void) {
}




void ov43_0222D230(void) {
    // ldr r0, [r0, #0x10]
    // cmp r0, #1
    // bne _0222D23A
    // mov r0, #8
    // b _0222D23C
    // mov r0, #3
    // sub r0, r0, #1
    // cmp r1, r0
    // bne _0222D246
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // TODO: decompile
}




void ov43_0222D24C(void) {
    // add r1, r3, r3
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0222D262: ; jump table
    // ldrsh r1, [r4, r1]
    ov43_0222D230(0);
    PlaySE(0x000005DD);
    PlaySE(0x000005DD);
    // ldrsh r2, [r4, r2]
    ov43_0222DB28(6, r5, 0);
    // ldrsh r2, [r4, r2]
    ov43_0222DB94(r4, r5, 0);
    *((u32*)(r4 + 8)) = 2;
    // ldrsh r2, [r4, r2]
    ov43_0222DB28(3, r5, 0);
    // ldrsh r2, [r4, r2]
    ov43_0222DB94(r4, r5, 0);
    *((u32*)(r4 + 8)) = 3;
    *((u32*)(r4 + 8)) = 0;
    *((u16*)(r4 + 0xc)) = 4;
    ov43_0222AD40(r5, 2, 1);
    *((u32*)(r4 + 8)) = 1;
    *((u16*)(r4 + 0xc)) = 4;
    ov43_0222AD40(r5, 3, 1);
}




void ov43_0222D2FC(void) {
    // tst r0, r1
    // str r0, [r4]
    // tst r0, r2
    ov43_0222D24C(r0, r1, r2, 1);
    // tst r1, r2
    // tst r2, r0
    // mvn r1, r1
    ov43_0222ED18(r5, 0, (0x20 << 4));
    ov43_0222D24C(r5, r4, r6, 2);
    // tst r3, r2
    // add r2, #0xf0
    // tst r0, r2
    ov43_0222ED18(r5, 1, 0x10, r0);
    ov43_0222D24C(r5, r4, r6, 3);
    // tst r0, r1
    ov43_0222D24C(r5, r4, r6, 4);
    // tst r0, r1
    ov43_0222D24C(r5, r4, r6, 5);
}




void ov43_0222D3B8(void) {
    // str r2, [sp]
    TouchscreenHitbox_FindHitboxAtTouchNew(ov43_0222EE84);
    TouchscreenHitbox_FindHitboxAtTouchNew(ov43_0222EE42);
    // mvn r0, r0
    // str r0, [r6]
    // ldr r2, [sp]
    ov43_0222D24C(r5, r7, 4);
    // str r0, [r6]
    // ldr r2, [sp]
    ov43_0222D24C(r5, r7, 5);
    // asr r1, r1, #0x10
    ov43_0222D230(r5, ((r4 - 2) << 0x10));
    // strh r0, [r5]
    // ldr r2, [sp]
    // str r3, [r6]
    ov43_0222D24C(r5, r7, 1);
    // ldrsh r0, [r5, r0]
    // sub r0, r1, r0
    // asr r4, r0, #0x10
    // str r0, [r6]
    ov43_0222ED18(r5, r4);
    // ldr r2, [sp]
    ov43_0222D24C(r5, r7, 3);
    // ldr r2, [sp]
    ov43_0222D24C(r5, r7, 2);
}




void ov43_0222D47C(void) {
    // str r0, [sp]
    // tst r1, r2
    *((u16*)(r0 + 0xe)) = 0;
    // add r3, sp, #0
    ov43_0222D3B8(r0, r1, r2);
    // ldr r1, [sp]
    // str r1, [r4]
    ov43_0222D2FC(r5, r4, r6);
}




void ov43_0222D4C4(void) {
    *((u32*)(r0 + 4)) = 0;
    ov43_0222AD20(r2, 0);
    // ldrsh r0, [r5, r0]
    // str r0, [sp]
    // str r6, [sp, #4]
    ov43_0222DAE8(r5, r7, r4, 1);
    PlaySE(0x000005E1);
}




void ov43_0222D508(void) {
    // ldrsh r0, [r5, r3]
    // str r0, [sp]
    // str r6, [sp, #4]
    // asr r0, r1, #1
    // add r0, r1, r0
    // asr r3, r0, #2
    // neg r3, r3
}




void ov43_0222D584(void) {
    // str r2, [sp, #8]
    // add r0, #0xf8
    // str r3, [sp, #0xc]
    ov43_0222DD40(r2, r3);
    // ldr r1, [sp, #8]
    ov43_0222DDA0(r7);
    // str r0, [sp, #0x18]
    // add r7, #0x14
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0xc]
    // ldr r3, [sp, #0x14]
    // str r0, [sp]
    // ldr r1, [sp, #8]
    // ldr r2, [sp, #0x10]
    ov43_0222DDF0(r7, *((u32*)r3));
    // ldr r1, [sp, #8]
    // str r0, [sp]
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #4]
    ov43_0222DE14(r7, 0, *((u8*)ov43_0222F0D0));
    // ldr r0, [sp, #0x14]
    // add r7, #0x4c
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x10]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x18]
    // str r0, [sp, #0x18]
}




void ov43_0222D610(void) {
    // str r0, [sp]
    // str r2, [sp, #4]
    // add r5, #0x14
    // add r5, #0x4c
    // ldr r0, [sp]
    // ldr r1, [sp, #4]
    // ldr r0, [sp]
    // add r0, #0xf8
    // str r0, [sp]
}




void ov43_0222D654(void) {
    // ldrsb r2, [r6, r2]
    // add r2, r6, r2
    // add r1, r5, r1
    // str r3, [sp]
    // str r0, [sp, #4]
    // add r2, #0xc
    // str r0, [sp, #8]
    // add r0, #0xfc
    // str r1, [sp]
    // str r0, [sp, #4]
    // add r2, #0xc
    // str r0, [sp, #8]
    // str r3, [sp]
    // str r0, [sp, #4]
    // add r2, #0xc
    // str r0, [sp, #8]
    // ldrsh r0, [r5, r3]
    // str r0, [sp]
    // str r7, [sp, #4]
}




void ov43_0222D778(void) {
    // add r4, #0x14
    // add r4, #0x4c
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r2, [sp, #0xc]
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r2, [sp, #0xc]
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r2, [sp, #0xc]
    // str r1, [sp]
    // str r0, [sp, #4]
    // add r2, #0xc
    // str r0, [sp, #8]
}




void ov43_0222D87C(void) {
    // add r5, #0x14
    // add r5, #0x4c
    // add r4, r7, r0
    // add r4, #0x10
}




void ov43_0222D8B8(void) {
    // str r2, [sp, #0x18]
    // str r3, [sp, #0x1c]
    sub_0202C6F4(*((u32*)(r1 + 4)));
    // ldrsb r1, [r5, r1]
    // str r0, [sp, #0x24]
    // add r1, r5, r1
    sub_0202C090(*((u8*)(0xb + 0x18)), 8);
    // str r0, [sp, #0x20]
    // add r4, r7, r0
    FillWindowPixelBuffer(r4, 0);
    // add r4, #0x10
    // str r1, [sp]
    // str r0, [sp, #4]
    // ldrsb r2, [r5, r2]
    // ldr r0, [sp, #0x18]
    // add r2, r5, r2
    // add r2, #0x38
    BufferIntegerAsString(*((u32*)(1 + 0x50)), 0, (*((u8*)0xb) + 1), 2);
    // str r0, [sp]
    // str r1, [sp, #4]
    // ldr r0, [sp, #0x18]
    BufferIntegerAsString(*((u32*)(0 + 0x50)), 1, *((u32*)(r5 + 0x14)), 2);
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x18]
    // str r0, [sp, #8]
    // add r0, r7, r0
    ov43_0222ECD4((0x46 << 2), r5, 0x12);
    // ldr r0, [sp, #0x20]
    // ldrsb r2, [r5, r2]
    // ldr r0, [sp, #0x18]
    // add r2, r5, r2
    // ldr r3, [sp, #0x1c]
    ov43_0222AB20(*((u32*)(r5 + 4)), *((u8*)(0xb + 0x18)));
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x18]
    // add r0, r7, r0
    // str r4, [sp, #8]
    ov43_0222ECD4((0x4e << 2), r5, 0x11);
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x18]
    // str r0, [sp, #8]
    // add r0, r7, r0
    ov43_0222ECD4((0x5e << 2), r5, 0xf);
    // ldrsb r2, [r5, r2]
    // ldr r0, [sp, #0x18]
    // add r2, r5, r2
    // ldr r3, [sp, #0x1c]
    ov43_0222AB5C(*((u32*)(r5 + 4)), *((u8*)(0xb + 0x18)));
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x18]
    // str r0, [sp, #8]
    // add r0, r7, r0
    ov43_0222ECD4((0x52 << 2), r5, 0x10);
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x18]
    // str r0, [sp, #8]
    // add r0, r7, r0
    ov43_0222ECD4((0x62 << 2), r5, 0x1b);
    // ldrsb r2, [r5, r2]
    // ldr r0, [sp, #0x18]
    // add r2, r5, r2
    ov43_0222AB94(*((u32*)(r5 + 4)), *((u8*)(0xb + 0x18)));
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x18]
    // str r0, [sp, #8]
    // add r0, r7, r0
    ov43_0222ECD4((0x56 << 2), r5, 0x1c);
    // ldrsb r1, [r5, r1]
    // ldr r0, [sp, #0x24]
    // add r1, r5, r1
    sub_0202C090(*((u8*)(0xb + 0x18)), 7);
    // ldr r0, [sp, #0x20]
    GetUnionRoomAvatarAttrBySprite(r0, 1);
    // add r2, sp, #0x28
    sub_02070D84(2);
    // ldr r0, [sp, #0x1c]
    Heap_Alloc((0x32 << 6));
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r4, [sp, #0xc]
    // ldr r0, [sp, #0x28]
    // ldr r1, [sp, #0x3c]
    // ldr r2, [sp, #0x1c]
    sub_020141C4(0xa, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r2, [sp, #8]
    // str r2, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // add r0, r7, r0
    BlitBitmapRectToWindow((0x5a << 2), r4, 0, 0);
    Heap_Free(r4);
    // str r0, [sp]
    // ldr r0, [sp, #0x1c]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x28]
    // ldr r1, [sp, #0x30]
    GfGfxLoader_GXLoadPal(0x20, 4, (0x1e << 4));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x18]
    BgTilemapRectChangePalette(*((u32*)0xf), 4, 4, 4);
    // add r5, r7, r0
    ScheduleWindowCopyToVram(r5);
    // add r5, #0x10
}




void ov43_0222DACC(void) {
}




void ov43_0222DAE8(void) {
    // ldr r2, [sp, #0x20]
    // strh r2, [r5]
    // add r0, r5, r0
    // str r0, [sp]
    // add r5, #0x14
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x24]
    // ldr r3, [sp, #0x20]
    // str r0, [sp, #8]
    // add r0, r5, r0
}




void ov43_0222DB28(void) {
    // add r1, #0x10
    // asr r1, r1, #0x10
    // add r1, #0x38
    // asr r1, r1, #0x10
}




void ov43_0222DB84(void) {
    // ldr r3, _0222DB90 ; =ov43_0222AD74
    // add r0, r1, #0
    // mov r1, #0
    // mov r2, #0xff
    // bx r3
    // nop
    // _0222DB90: .word ov43_0222AD74
    // TODO: decompile
}




void ov43_0222DB94(void) {
    // str r1, [sp]
    // str r1, [sp, #4]
    // add r1, #0xc
    // str r1, [sp, #8]
    // str r2, [sp, #0xc]
    // str r1, [sp, #0x10]
    // str r1, [sp, #0x14]
    // str r0, [sp, #0x18]
    CopyToBgTilemapRect(*((u32*)r1), 2, 0, 0x14);
    // str r1, [sp]
    // str r1, [sp, #4]
    // add r1, #0xc
    // str r1, [sp, #8]
    // str r2, [sp, #0xc]
    // str r3, [sp, #0x10]
    // str r1, [sp, #0x14]
    // str r0, [sp, #0x18]
    CopyToBgTilemapRect(*((u32*)r5), 2, 0, 0x14);
    ScheduleBgTilemapBufferTransfer(*((u32*)r5), 2);
    // add r2, r2, r0
    // add r0, r6, r0
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, #0xc
    // str r0, [sp, #8]
    // str r2, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    CopyToBgTilemapRect(*((u32*)r5), 2, *((u8*)(r4 + ov43_0222EDB8)), 0x14);
    ScheduleBgTilemapBufferTransfer(*((u32*)r5), 2);
}




void ov43_0222DC7C(void) {
    // str r1, [sp]
    // str r1, [sp, #4]
    // add r1, #0xc
    // str r1, [sp, #8]
    // str r2, [sp, #0xc]
    // str r1, [sp, #0x10]
    // str r1, [sp, #0x14]
    // str r0, [sp, #0x18]
}




void ov43_0222DCC4(void) {
    // ldrsb r4, [r5, r0]
    // bpl _0222DCE8
    // add r4, r4, r1
    // add r1, r5, r4
    // add r1, r5, r4
}




void ov43_0222DD40(void) {
    // str r2, [sp, #4]
    // add r0, sp, #8
    // strh r2, [r0]
    // add r4, sp, #8
    *((u16*)(r0 + 2)) = *((u16*)(_0222ED5C + 0x30));
    *((u16*)(r0 + 4)) = *((u16*)(_0222ED5C + 0x32));
    *((u16*)(r0 + 6)) = *((u16*)(_0222ED5C + 0x34));
    // ldr r0, [sp, #4]
    // str r0, [sp]
    GfGfxLoader_GetScrnDataFromOpenNarc(*((u32*)(r1 + 0x58)), *((u16*)r4), 1, (r0 + 4));
    // str r0, [r5]
    // add r5, #8
}




void ov43_0222DD88(void) {
}




void ov43_0222DDA0(void) {
    // add r5, r0, r1
    AddWindow(*((u32*)r1), r5, ov43_0222EF20);
    FillWindowPixelBuffer(r5, 0);
    // add r4, #8
    // add r5, #0x10
}




void ov43_0222DDD0(void) {
    // add r5, r0, r1
    // add r5, #0x10
}




void ov43_0222DDF0(void) {
    // strh r1, [r0]
}




void ov43_0222DE10(void) {
    // bx lr
    // TODO: decompile
}




void ov43_0222DE14(void) {
    // str r1, [sp, #0x18]
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x44]
    // str r3, [sp, #0x1c]
    // ldr r1, [sp, #0x14]
    // add r7, r1, r4
    // ldr r0, [sp, #0x1c]
    // str r0, [sp, #0x20]
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #0x1c]
    // ldr r4, [sp, #0x24]
    // ldr r5, [sp, #0x40]
    // add r0, r0, r4
    // ldr r1, [sp, #0x14]
    // ldrsh r0, [r1, r0]
    // neg r0, r0
    // ldr r2, [sp, #0x14]
    // ldrsh r6, [r2, r1]
    // neg r6, r6
    // add r0, r1, r0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x20]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x18]
    // add r3, r3, r6
    // add r1, r1, r4
    // add r0, r0, r4
    // add r4, #0x10
    // ldr r0, [sp, #0x20]
    // add r0, r0, r2
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x24]
    // ldr r0, [sp, #0x1c]
    // str r1, [sp, #0x24]
}




void ov43_0222DED0(void) {
    // add r0, r5, r4
    // add r6, #0x2c
    // add r0, r5, r4
    // str r1, [r6, r4]
}




void ov43_0222DEF8(void) {
    // add r5, r0, r1
    // add r0, r0, r4
    // add r4, #0x10
}




void ov43_0222DF1C(void) {
    // add r5, r0, r1
    // add r0, r0, r4
    // add r0, r0, r4
    // add r4, #0x10
}




void ov43_0222DF4C(void) {
    ov43_0222DF90(r2);
    // ldr r0, [sp, #0x1c]
    // ldr r3, [sp, #0x20]
    // blx r4
    // ldr r3, [sp, #0x20]
    // blx r4
}




void ov43_0222DF90(void) {
}




void ov43_0222DFB0(void) {
    // str r0, [sp, #0x20]
    sub_0202C6F4(*((u32*)(r1 + 4)));
    // str r0, [sp, #0x28]
    // str r4, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // add r0, #0x80
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x20]
    // str r1, [sp, #0x1c]
    ov43_0222EC58(*((u32*)r4), 0, 0, r5);
    // str r6, [sp, #0x24]
    // ldr r0, [sp, #0x24]
    // str r4, [sp]
    // add r0, #0x14
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r7, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // add r0, #0x80
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x20]
    ov43_0222EC58(0, 0, 2, r5);
    // ldrsb r1, [r5, r1]
    // ldr r0, [sp, #0x28]
    // add r1, r5, r1
    sub_0202C090(*((u8*)(0xb + 0x18)), (r6 + 1));
    ov43_0222ABFC(r4, r0);
    // str r4, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r7, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // add r0, #0x80
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x20]
    ov43_0222EC58(0, 0, 2, r5);
    // ldr r0, [sp, #0x24]
    // add r0, #0x18
    // str r0, [sp, #0x24]
    // str r4, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // add r0, #0x80
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x20]
    // str r1, [sp, #0x1c]
    ov43_0222EC58(*((u32*)r4), 0, 1, r5);
    // ldrsb r1, [r5, r1]
    // ldr r0, [sp, #0x28]
    // add r1, r5, r1
    sub_0202C090(*((u8*)(0xb + 0x18)), 3);
    ov43_0222ABFC(r4, r0);
    // str r4, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r4, #0x80
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x20]
    // str r1, [sp, #0x1c]
    ov43_0222EC58(*((u32*)r4), 0, 3, r5);
    // ldr r0, [sp, #0x20]
    ov43_0222DEF8(0);
}




void ov43_0222E0E8(void) {
    Save_Frontier_GetStatic(*((u32*)(r1 + 4)));
    // str r4, [sp]
    // str r0, [sp, #4]
    // str r2, [sp, #8]
    // str r2, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // add r0, #0x80
    // str r0, [sp, #0x18]
    // str r2, [sp, #0x1c]
    ov43_0222EC58(r6, 2, 0, r5);
    // ldrsb r2, [r5, r2]
    // add r2, r5, r2
    FrontierSave_GetStat(r7, 0x64, *((u8*)(0xb + 0x18)));
    // str r4, [sp]
    // add r0, #0x22
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r1, [sp, #0x10]
    // str r1, [sp, #0x14]
    // add r1, #0x80
    // str r1, [sp, #0x18]
    // str r0, [sp, #0x1c]
    ov43_0222EC58(r6, 2, 1, r5);
    // ldrsb r2, [r5, r2]
    // add r2, r5, r2
    FrontierSave_GetStat(r7, 0x71, *((u8*)(0xb + 0x18)));
    ov43_0222ABFC(r4, r0);
    // str r4, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // add r0, #0x80
    // str r0, [sp, #0x18]
    // str r2, [sp, #0x1c]
    ov43_0222EC58(r6, 2, 1, r5);
    // str r4, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // str r1, [sp, #0x10]
    // str r1, [sp, #0x14]
    // add r1, #0x80
    // str r1, [sp, #0x18]
    // str r0, [sp, #0x1c]
    ov43_0222EC58(r6, 2, 1, r5);
    // ldrsb r2, [r5, r2]
    // add r2, r5, r2
    FrontierSave_GetStat(r7, 0x70, *((u8*)(0xb + 0x18)));
    ov43_0222ABFC(r4, r0);
    // str r4, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r4, #0x80
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    // str r2, [sp, #0x1c]
    ov43_0222EC58(r6, 2, 1, r5);
    ov43_0222DEF8(r6, 2);
}




void ov43_0222E220(void) {
    // str r0, [sp, #0x20]
    Save_Frontier_GetStatic(*((u32*)(r1 + 4)));
    // str r0, [sp, #0x24]
    String_New(0x80, r6);
    String_New(0x80, r6);
    // str r4, [sp]
    // str r0, [sp, #4]
    // str r2, [sp, #8]
    // str r2, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r7, [sp, #0x14]
    // str r6, [sp, #0x18]
    // ldr r0, [sp, #0x20]
    // str r2, [sp, #0x1c]
    ov43_0222EC58(0x00010200, 3, 0, r5);
    // str r4, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r7, [sp, #0x14]
    // str r6, [sp, #0x18]
    // str r1, [sp, #0x1c]
    // ldr r0, [sp, #0x20]
    ov43_0222EC58(0x00010200, 3, 1, r5);
    // str r4, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r7, [sp, #0x14]
    // str r6, [sp, #0x18]
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x20]
    ov43_0222EC58(2, 3, 1, r5);
    // ldrsb r2, [r5, r2]
    // ldr r0, [sp, #0x24]
    // add r2, r5, r2
    FrontierSave_GetStat(0x66, *((u8*)(0xb + 0x18)));
    // str r4, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r7, [sp, #0x14]
    // str r6, [sp, #0x18]
    // str r1, [sp, #0x1c]
    // ldr r0, [sp, #0x20]
    ov43_0222EC58(0x00010200, 3, 2, r5);
    // ldrsb r2, [r5, r2]
    // ldr r0, [sp, #0x24]
    // add r2, r5, r2
    FrontierSave_GetStat(0x73, *((u8*)(0xb + 0x18)));
    ov43_0222ABFC(r4, r0);
    // str r4, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r7, [sp, #0x14]
    // str r6, [sp, #0x18]
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x20]
    ov43_0222EC58(1, 3, 2, r5);
    // ldrsb r2, [r5, r2]
    // ldr r0, [sp, #0x24]
    // add r2, r5, r2
    FrontierSave_GetStat(0x75, *((u8*)(0xb + 0x18)));
    ov43_0222ABFC(r4, r0);
    // str r4, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r7, [sp, #0x14]
    // str r6, [sp, #0x18]
    // str r1, [sp, #0x1c]
    // ldr r0, [sp, #0x20]
    ov43_0222EC58(0x00010200, 3, 2, r5);
    // str r4, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r7, [sp, #0x14]
    // str r6, [sp, #0x18]
    // str r1, [sp, #0x1c]
    // ldr r0, [sp, #0x20]
    ov43_0222EC58(0x00010200, 3, 2, r5);
    // ldrsb r2, [r5, r2]
    // ldr r0, [sp, #0x24]
    // add r2, r5, r2
    FrontierSave_GetStat(0x72, *((u8*)(0xb + 0x18)));
    ov43_0222ABFC(r4, r0);
    // str r4, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r7, [sp, #0x14]
    // str r6, [sp, #0x18]
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x20]
    ov43_0222EC58(1, 3, 2, r5);
    // ldrsb r2, [r5, r2]
    // ldr r0, [sp, #0x24]
    // add r2, r5, r2
    FrontierSave_GetStat(0x74, *((u8*)(0xb + 0x18)));
    ov43_0222ABFC(r4, r0);
    // str r4, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r7, [sp, #0x14]
    // str r6, [sp, #0x18]
    // str r1, [sp, #0x1c]
    // ldr r0, [sp, #0x20]
    ov43_0222EC58(0x00010200, 3, 2, r5);
    // str r4, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r7, [sp, #0x14]
    // str r6, [sp, #0x18]
    // str r1, [sp, #0x1c]
    // ldr r0, [sp, #0x20]
    ov43_0222EC58(0x00010200, 3, 3, r5);
    // str r4, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r7, [sp, #0x14]
    // str r6, [sp, #0x18]
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x20]
    ov43_0222EC58(2, 3, 3, r5);
    // ldrsb r2, [r5, r2]
    // ldr r0, [sp, #0x24]
    // add r2, r5, r2
    FrontierSave_GetStat(0x68, *((u8*)(0xb + 0x18)));
    // str r4, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r7, [sp, #0x14]
    // str r6, [sp, #0x18]
    // str r1, [sp, #0x1c]
    // ldr r0, [sp, #0x20]
    ov43_0222EC58(0x00010200, 3, 4, r5);
    // ldrsb r2, [r5, r2]
    // ldr r0, [sp, #0x24]
    // add r2, r5, r2
    FrontierSave_GetStat(0x77, *((u8*)(0xb + 0x18)));
    ov43_0222ABFC(r4, r0);
    // str r4, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r7, [sp, #0x14]
    // str r6, [sp, #0x18]
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x20]
    ov43_0222EC58(1, 3, 4, r5);
    // ldrsb r2, [r5, r2]
    // ldr r0, [sp, #0x24]
    // add r2, r5, r2
    FrontierSave_GetStat(0x79, *((u8*)(0xb + 0x18)));
    ov43_0222ABFC(r4, r0);
    // str r4, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r7, [sp, #0x14]
    // str r6, [sp, #0x18]
    // str r1, [sp, #0x1c]
    // ldr r0, [sp, #0x20]
    ov43_0222EC58(0x00010200, 3, 4, r5);
    // str r4, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r7, [sp, #0x14]
    // str r6, [sp, #0x18]
    // str r1, [sp, #0x1c]
    // ldr r0, [sp, #0x20]
    ov43_0222EC58(0x00010200, 3, 4, r5);
    // ldrsb r2, [r5, r2]
    // ldr r0, [sp, #0x24]
    // add r2, r5, r2
    FrontierSave_GetStat(0x76, *((u8*)(0xb + 0x18)));
    ov43_0222ABFC(r4, r0);
    // str r4, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r7, [sp, #0x14]
    // str r6, [sp, #0x18]
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x20]
    ov43_0222EC58(1, 3, 4, r5);
    // ldrsb r2, [r5, r2]
    // ldr r0, [sp, #0x24]
    // add r2, r5, r2
    FrontierSave_GetStat(0x78, *((u8*)(0xb + 0x18)));
    ov43_0222ABFC(r4, r0);
    // str r4, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r7, [sp, #0x14]
    // str r6, [sp, #0x18]
    // str r1, [sp, #0x1c]
    // ldr r0, [sp, #0x20]
    ov43_0222EC58(0x00010200, 3, 4, r5);
    // ldr r0, [sp, #0x20]
    ov43_0222DEF8(3);
    String_Delete(r7);
    String_Delete(r6);
}




void ov43_0222E5B4(void) {
    // str r0, [sp, #0x20]
    Save_Frontier_GetStatic(*((u32*)(r1 + 4)));
    // str r0, [sp, #0x24]
    String_New(0x80, r6);
    String_New(0x80, r6);
    // str r4, [sp]
    // str r0, [sp, #4]
    // str r2, [sp, #8]
    // str r2, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r7, [sp, #0x14]
    // str r6, [sp, #0x18]
    // ldr r0, [sp, #0x20]
    // str r2, [sp, #0x1c]
    ov43_0222EC58(0x00010200, 4, 0, r5);
    // str r4, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r7, [sp, #0x14]
    // str r6, [sp, #0x18]
    // ldr r0, [sp, #0x20]
    // str r2, [sp, #0x1c]
    ov43_0222EC58(0x00010200, 4, 0, r5);
    // ldrsb r2, [r5, r2]
    // ldr r0, [sp, #0x24]
    // add r2, r5, r2
    FrontierSave_GetStat(0x6c, *((u8*)(0xb + 0x18)));
    // str r4, [sp]
    // str r0, [sp, #4]
    // str r2, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r7, [sp, #0x14]
    // str r6, [sp, #0x18]
    // ldr r0, [sp, #0x20]
    // str r2, [sp, #0x1c]
    ov43_0222EC58(0x00010200, 4, 0, r5);
    // ldrsb r2, [r5, r2]
    // ldr r0, [sp, #0x24]
    // add r2, r5, r2
    FrontierSave_GetStat(0x87, *((u8*)(0xb + 0x18)));
    ov43_0222ABFC(r4, r0);
    // str r4, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r7, [sp, #0x14]
    // str r6, [sp, #0x18]
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x20]
    ov43_0222EC58(1, 4, 0, r5);
    // ldrsb r2, [r5, r2]
    // ldr r0, [sp, #0x24]
    // add r2, r5, r2
    FrontierSave_GetStat(0x88, *((u8*)(0xb + 0x18)));
    ov43_0222ABFC(r4, r0);
    // str r4, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r7, [sp, #0x14]
    // str r6, [sp, #0x18]
    // ldr r0, [sp, #0x20]
    // str r2, [sp, #0x1c]
    ov43_0222EC58(0x00010200, 4, 0, r5);
    // str r4, [sp]
    // str r0, [sp, #4]
    // str r2, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r7, [sp, #0x14]
    // str r6, [sp, #0x18]
    // ldr r0, [sp, #0x20]
    // str r2, [sp, #0x1c]
    ov43_0222EC58(0x00010200, 4, 0, r5);
    // ldrsb r2, [r5, r2]
    // ldr r0, [sp, #0x24]
    // add r2, r5, r2
    FrontierSave_GetStat(0x86, *((u8*)(0xb + 0x18)));
    ov43_0222ABFC(r4, r0);
    // str r4, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r7, [sp, #0x14]
    // str r6, [sp, #0x18]
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x20]
    ov43_0222EC58(1, 4, 0, r5);
    // ldrsb r2, [r5, r2]
    // ldr r0, [sp, #0x24]
    // add r2, r5, r2
    FrontierSave_GetStat(0x8a, *((u8*)(0xb + 0x18)));
    ov43_0222ABFC(r4, r0);
    // str r4, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r7, [sp, #0x14]
    // str r6, [sp, #0x18]
    // ldr r0, [sp, #0x20]
    // str r2, [sp, #0x1c]
    ov43_0222EC58(0x00010200, 4, 0, r5);
    // ldr r0, [sp, #0x20]
    ov43_0222DEF8(4);
    String_Delete(r7);
    String_Delete(r6);
}




void ov43_0222E78C(void) {
    // str r0, [sp, #0x20]
    // str r3, [sp, #0x24]
    Save_Frontier_GetStatic(*((u32*)(r1 + 4)));
    // str r0, [sp, #0x28]
    // ldr r1, [sp, #0x24]
    String_New(0x80);
    // ldr r1, [sp, #0x24]
    String_New(0x80);
    // str r4, [sp]
    // str r0, [sp, #4]
    // str r2, [sp, #8]
    // str r2, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r7, [sp, #0x14]
    // str r6, [sp, #0x18]
    // ldr r0, [sp, #0x20]
    // str r2, [sp, #0x1c]
    ov43_0222EC58(0x00010200, 5, 0, r5);
    // ldrsb r2, [r5, r2]
    // ldr r0, [sp, #0x28]
    // add r2, r5, r2
    FrontierSave_GetStat(0x7c, *((u8*)(0xb + 0x18)));
    // ldr r1, [sp, #0x24]
    GetSpeciesName();
    // str r0, [sp, #0x2c]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x20]
    // str r1, [sp, #0xc]
    // ldr r2, [sp, #0x2c]
    AddTextPrinterParameterizedWithColor(*((u32*)(0x00010200 + 0x20)), 0, 0);
    // ldr r0, [sp, #0x2c]
    String_Delete();
    // ldrsb r2, [r5, r2]
    // ldr r0, [sp, #0x28]
    // add r2, r5, r2
    FrontierSave_GetStat(0x6a, *((u8*)(0xb + 0x18)));
    // str r4, [sp]
    // str r0, [sp, #4]
    // str r2, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r7, [sp, #0x14]
    // str r6, [sp, #0x18]
    // ldr r0, [sp, #0x20]
    // str r2, [sp, #0x1c]
    ov43_0222EC58(0x00010200, 5, 0, r5);
    // ldrsb r2, [r5, r2]
    // ldr r0, [sp, #0x28]
    // add r2, r5, r2
    FrontierSave_GetStat(0x7b, *((u8*)(0xb + 0x18)));
    ov43_0222ABFC(r4, r0);
    // str r4, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r7, [sp, #0x14]
    // str r6, [sp, #0x18]
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x20]
    ov43_0222EC58(1, 5, 0, r5);
    // str r4, [sp]
    // str r0, [sp, #4]
    // str r2, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r7, [sp, #0x14]
    // str r6, [sp, #0x18]
    // ldr r0, [sp, #0x20]
    // str r2, [sp, #0x1c]
    ov43_0222EC58(0x00010200, 5, 0, r5);
    // ldrsb r2, [r5, r2]
    // ldr r0, [sp, #0x28]
    // add r2, r5, r2
    FrontierSave_GetStat(0x7a, *((u8*)(0xb + 0x18)));
    ov43_0222ABFC(r4, r0);
    // str r4, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r7, [sp, #0x14]
    // str r6, [sp, #0x18]
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x20]
    ov43_0222EC58(1, 5, 0, r5);
    // ldr r0, [sp, #0x20]
    ov43_0222DEF8(5);
    String_Delete(r7);
    String_Delete(r6);
}




void ov43_0222E904(void) {
    // str r0, [sp, #0x20]
    Save_Frontier_GetStatic(*((u32*)(r1 + 4)));
    // str r0, [sp, #0x24]
    String_New(0x80, r6);
    String_New(0x80, r6);
    // str r4, [sp]
    // str r0, [sp, #4]
    // str r2, [sp, #8]
    // str r2, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r7, [sp, #0x14]
    // str r6, [sp, #0x18]
    // ldr r0, [sp, #0x20]
    // str r2, [sp, #0x1c]
    ov43_0222EC58(0x00010200, 6, 0, r5);
    // ldrsb r2, [r5, r2]
    // ldr r0, [sp, #0x24]
    // add r2, r5, r2
    FrontierSave_GetStat(0x6e, *((u8*)(0xb + 0x18)));
    // str r4, [sp]
    // str r0, [sp, #4]
    // str r2, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r7, [sp, #0x14]
    // str r6, [sp, #0x18]
    // ldr r0, [sp, #0x20]
    // str r2, [sp, #0x1c]
    ov43_0222EC58(0x00010200, 6, 0, r5);
    // ldrsb r2, [r5, r2]
    // ldr r0, [sp, #0x24]
    // add r2, r5, r2
    FrontierSave_GetStat(0x8f, *((u8*)(0xb + 0x18)));
    ov43_0222ABFC(r4, r0);
    // str r4, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r7, [sp, #0x14]
    // str r6, [sp, #0x18]
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x20]
    ov43_0222EC58(1, 6, 0, r5);
    // str r4, [sp]
    // str r0, [sp, #4]
    // str r2, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r7, [sp, #0x14]
    // str r6, [sp, #0x18]
    // ldr r0, [sp, #0x20]
    // str r2, [sp, #0x1c]
    ov43_0222EC58(0x00010200, 6, 0, r5);
    // ldrsb r2, [r5, r2]
    // ldr r0, [sp, #0x24]
    // add r2, r5, r2
    FrontierSave_GetStat(0x8e, *((u8*)(0xb + 0x18)));
    ov43_0222ABFC(r4, r0);
    // str r4, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r7, [sp, #0x14]
    // str r6, [sp, #0x18]
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x20]
    ov43_0222EC58(1, 6, 0, r5);
    // ldr r0, [sp, #0x20]
    ov43_0222DEF8(6);
    String_Delete(r7);
    String_Delete(r6);
}




void ov43_0222EA40(void) {
    // str r0, [sp, #0x20]
    Save_Frontier_GetStatic(*((u32*)(r1 + 4)));
    sub_0202C6F4(*((u32*)(r5 + 4)));
    // str r0, [sp, #0x24]
    String_New(0x80, r7);
    String_New(0x80, r7);
    // str r4, [sp]
    // str r0, [sp, #4]
    // str r2, [sp, #8]
    // str r2, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r6, [sp, #0x14]
    // str r7, [sp, #0x18]
    // ldr r0, [sp, #0x20]
    // str r2, [sp, #0x1c]
    ov43_0222EC58(0x00010200, 1, 0, r5);
    ov43_0222AC18(r4, 0);
    // str r4, [sp]
    // str r0, [sp, #4]
    // str r2, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r6, [sp, #0x14]
    // str r7, [sp, #0x18]
    // ldr r0, [sp, #0x20]
    // str r2, [sp, #0x1c]
    ov43_0222EC58(0x00010200, 1, 0, r5);
    // ldrsb r1, [r5, r1]
    // ldr r0, [sp, #0x24]
    // add r1, r5, r1
    sub_0202C090(*((u8*)(0xb + 0x18)), 0xa);
    ov43_0222ABFC(r4, r0);
    // str r4, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r6, [sp, #0x14]
    // str r7, [sp, #0x18]
    // ldr r0, [sp, #0x20]
    // str r2, [sp, #0x1c]
    ov43_0222EC58(0x00010200, 1, 0, r5);
    ov43_0222AC18(r4, 1);
    // str r4, [sp]
    // str r0, [sp, #4]
    // str r2, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r6, [sp, #0x14]
    // str r7, [sp, #0x18]
    // ldr r0, [sp, #0x20]
    // str r2, [sp, #0x1c]
    ov43_0222EC58(0x00010200, 1, 0, r5);
    // ldrsb r1, [r5, r2]
    // ldr r0, [sp, #0x24]
    // add r1, r5, r1
    sub_0202C090(*((u8*)(r1 + 0x18)), 0xb);
    ov43_0222ABFC(r4, r0);
    // str r4, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r6, [sp, #0x14]
    // str r7, [sp, #0x18]
    // ldr r0, [sp, #0x20]
    // str r2, [sp, #0x1c]
    ov43_0222EC58(0x00010200, 1, 0, r5);
    ov43_0222AC18(r4, 2);
    // str r4, [sp]
    // str r0, [sp, #4]
    // str r2, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r6, [sp, #0x14]
    // str r7, [sp, #0x18]
    // ldr r0, [sp, #0x20]
    // str r2, [sp, #0x1c]
    ov43_0222EC58(0x00010200, 1, 0, r5);
    // ldrsb r1, [r5, r1]
    // ldr r0, [sp, #0x24]
    // add r1, r5, r1
    sub_0202C090(*((u8*)(0xb + 0x18)), 0xc);
    ov43_0222ABFC(r4, r0);
    // str r4, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r6, [sp, #0x14]
    // str r7, [sp, #0x18]
    // ldr r0, [sp, #0x20]
    // str r2, [sp, #0x1c]
    ov43_0222EC58(0x00010200, 1, 0, r5);
    // ldr r0, [sp, #0x20]
    ov43_0222DEF8(1);
    String_Delete(r6);
    String_Delete(r7);
}




void ov43_0222EBD8(void) {
    // str r2, [sp]
    // str r1, [sp, #4]
    // str r4, [sp, #8]
    // str r4, [sp, #0xc]
    // str r1, [sp, #0x10]
    // add r2, #0x80
    // str r1, [sp, #0x14]
    // str r1, [sp, #0x18]
    // str r4, [sp, #0x1c]
    ov43_0222EC58(7, 0, r1);
    ov43_0222DEF8(r5, 7);
}




void ov43_0222EC14(void) {
    // ldrsh r2, [r1, r0]
    // neg r2, r2
    // ldrsh r3, [r1, r0]
    // neg r3, r3
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r2, [sp, #0xc]
}




void ov43_0222EC58(void) {
    // ldr r6, [sp, #0x30]
    // str r1, [sp, #0x10]
    // str r2, [sp, #0x14]
    // ldr r1, [sp, #0x34]
    // ldr r2, [sp, #0x48]
    // ldr r4, [sp, #0x44]
    // ldr r5, [sp, #0x38]
    // ldr r2, [sp, #0x48]
    // ldr r0, [sp, #0x4c]
    // sub r5, r5, r0
    // sub r5, r5, r0
    // ldr r0, [sp, #0x3c]
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x40]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x10]
    // add r0, r7, r0
    // ldr r0, [sp, #0x14]
    // add r0, r1, r0
}




void ov43_0222ECD4(void) {
    // add r2, #0x80
    // add r2, #0x80
    // ldr r0, [sp, #0x24]
    // ldr r3, [sp, #0x20]
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x28]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
}




void ov43_0222ED18(void) {
    // ldrsh r3, [r4, r0]
    // ldrsh r0, [r4, r0]
    // add r0, r0, r1
    // strh r1, [r4]
    // ldrsh r3, [r4, r0]
    // ldrsh r3, [r4, r0]
    // add r1, r3, r1
    // strh r1, [r4]
    // ldrsh r0, [r4, r0]
    // add r0, r0, r2
    // strh r0, [r4]
}



