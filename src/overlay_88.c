/* Decompiled from asm/overlay_88.s */
#include "global.h"

void * ov88_02258800(void) {
    OverlayManager_GetArgs();
    Heap_Create(3, 0x72, (5 << 0x10));
    OverlayManager_CreateAndGetData(r4, (0x27 << 4), 0x72);
    memset(0, (0x27 << 4));
    // str r0, [r4]
    *((u32*)(r4 + 4)) = *((u32*)(r5 + 4));
    // add r0, #8
    ov88_02258ABC(r4, 0x72);
    // add r0, r4, r0
    // add r1, #8
    ov88_02258D64((0x53 << 2), r4, 0x72);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r2, [sp, #8]
    // add r0, #0xe2
    // add r2, #0xda
    // add r0, r4, r0
    // add r1, #8
    // add r2, r4, r2
    ov88_02258EA8(0x72, r4, 0x72, *((u32*)r4));
    // str r0, [sp]
    // str r2, [sp, #4]
    // add r0, #0xee
    // add r2, #0xda
    // add r0, r4, r0
    // add r1, #8
    // add r2, r4, r2
    ov88_022590C0(0x72, r4, 0x72, *((u32*)r4));
    // add r0, r4, r0
    // add r1, #8
    ov88_022592EC((0x59 << 2), r4, 0x72);
    // add r0, r4, r0
    // add r1, #8
    ov88_0225967C((2 << 8), r4, 0x72);
    Main_SetVBlankIntrCB(ov88_02258A64, r4);
    HBlankInterruptDisable();
}




int ov88_022588C4(void) {
    OverlayManager_GetData();
    OverlayManager_GetArgs(r6);
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _022588EE: ; jump table
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 1, 1, 0);
    ov45_0222A520(*((u32*)(r6 + 8)), 1);
    // str r0, [r5]
    IsPaletteFadeFinished((*((u32*)r5) + 1));
    // str r0, [r5]
    // tst r0, r1
    ov45_0222A330(*((u32*)(r6 + 8)), *((u32*)(gSystem + 0x48)));
    ov45_0222D844();
    ov45_0222A330(*((u32*)(r6 + 8)));
    ov45_0222A4A8(*((u32*)(r6 + 8)));
    // str r0, [r5]
    // add r0, r4, r0
    ov88_02258EFC((0x55 << 2), *((u32*)r4), *((u32*)(r4 + 4)));
    // add r0, r4, r0
    ov88_02259818((2 << 8), 1);
    // add r0, r4, r0
    ov88_022590D8((0x16 << 4), *((u32*)r4));
    // add r0, r4, r0
    ov88_02259818((2 << 8), 2);
    // add r0, r4, r0
    ov88_02259404((0x59 << 2), *((u32*)r4), *((u32*)(r6 + 8)), 0x72);
    // add r0, r4, r0
    ov88_02259818((2 << 8), 3);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 0, 0, 0);
    // str r0, [r5]
    IsPaletteFadeFinished((*((u32*)r5) + 1));
    ov88_02258A70(r4, *((u32*)(r6 + 8)));
}




void ov88_022589FC(void) {
    // add r0, r4, r0
    // add r0, r4, r0
    // add r0, r4, r0
    // add r0, r4, r0
    // add r0, r4, r0
    // add r4, #8
}




void ov88_02258A64(void) {
}




void ov88_02258A70(void) {
    // add r0, r5, r1
    // sub r1, #8
    // add r1, r5, r1
    // add r2, #8
    // str r4, [sp]
    // add r0, r5, r1
    // sub r1, #0x14
    // add r1, r5, r1
    // add r2, #8
    // add r0, r5, r0
    // add r0, r5, r0
    // add r5, #8
}




void ov88_02258ABC(void) {
    NARC_New(0xc6);
    // str r0, [r5, r1]
    GF_CreateVramTransferManager(0x30, r4);
    GfGfx_SetBanks(ov88_02259958);
    ov88_02258B34(r5, r4);
    ov88_02258C98(r5, r4);
}




void ov88_02258AF4(void) {
    // ldr r0, [r4, r0]
}




void ov88_02258B14(void) {
}




void ov88_02258B20(void) {
}




void ov88_02258B34(void) {
    SetBothScreensModesAndDisable(ov88_02259934);
    BgConfig_Alloc(r7);
    // str r0, [r5]
    *((u8*)(gSystem + 9)) = 0;
    GfGfx_SwapDisplay(gSystem, 0);
    // str r0, [sp, #0x10]
    InitBgFromTemplate(*((u32*)r5), ((*((u32*)ov88_02259944) << 0x18) >> 0x18), ov88_022599C0, 0);
    BG_ClearCharDataRange(((*((u32*)r4) << 0x18) >> 0x18), 0x20, 0, r7);
    BgClearTilemapBufferAndCommit(*((u32*)r5), ((*((u32*)r4) << 0x18) >> 0x18));
    // ldr r0, [sp, #0x10]
    // add r6, #0x1c
    // str r0, [sp, #0x10]
    // str r1, [sp]
    // str r7, [sp, #4]
    GfGfxLoader_GXLoadPalFromOpenNarc(*((u32*)(r5 + (5 << 6))), 0, 0, 0);
    LoadFontPal1(0, (5 << 6), r7);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r7, [sp, #0xc]
    GfGfxLoader_LoadCharDataFromOpenNarc(*((u32*)(r5 + (5 << 6))), 1, *((u32*)r5), 1);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r7, [sp, #0xc]
    GfGfxLoader_LoadScrnDataFromOpenNarc(*((u32*)(r5 + (5 << 6))), 3, *((u32*)r5), 1);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r7, [sp, #0xc]
    GfGfxLoader_LoadScrnDataFromOpenNarc(*((u32*)(r5 + (5 << 6))), 4, *((u32*)r5), 2);
    // str r1, [sp]
    // str r7, [sp, #4]
    GfGfxLoader_GXLoadPalFromOpenNarc(*((u32*)(r5 + (5 << 6))), 0, 4, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r7, [sp, #0xc]
    GfGfxLoader_LoadCharDataFromOpenNarc(*((u32*)(r5 + (5 << 6))), 2, *((u32*)r5), 4);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r7, [sp, #0xc]
    GfGfxLoader_LoadScrnDataFromOpenNarc(*((u32*)(r5 + (5 << 6))), 6, *((u32*)r5), 4);
}




void ov88_02258C60(void) {
    FreeBgTilemapBuffer(*((u32*)r0), ((*((u32*)ov88_02259944) << 0x18) >> 0x18));
    Heap_Free(*((u32*)r6));
    *((u8*)(gSystem + 9)) = 0;
    GfGfx_SwapDisplay(gSystem, 0);
}




void ov88_02258C98(void) {
    NNS_G2dInitOamManagerModule();
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // str r6, [sp, #0x10]
    OamManager_Create(0, 0x7e, 0, 0x1f);
    ObjCharTransfer_InitEx(ov88_02259914, 0x00200010, 0x10);
    ObjPlttTransfer_Init(0x20, r6);
    ObjCharTransfer_ClearBuffers();
    ObjPlttTransfer_Reset();
    G2dRenderer_SetObjCharTransferReservedRegion(1, 0x00200010);
    G2dRenderer_SetPlttTransferReservedRegion(1);
    // add r1, #8
    G2dRenderer_Init(0x20, r5, r6);
    *((u32*)(r5 + 4)) = r0;
    // add r0, #8
    G2dRenderer_SetSubSurfaceCoords(r5, 0, (1 << 0x14));
    Create2DGfxResObjMan(0x20, 0, r6);
    // str r0, [r5, r7]
    sub_0203A880();
    GfGfx_EngineATogglePlanes(0x10, 1);
    GfGfx_EngineBTogglePlanes(0x10, 1);
}




void ov88_02258D38(void) {
    // ldr r0, [r5, r6]
}




void ov88_02258D64(void) {
}




void ov88_02258D84(void) {
}




void ov88_02258D90(void) {
    // str r1, [sp]
    // str r1, [sp, #4]
    // add r1, #0xc
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    // str r1, [sp, #0x10]
    // str r1, [sp, #0x14]
    // add r3, sp, #0x18
    // str r0, [sp, #0x18]
}




void ov88_02258DE8(void) {
    // ldr r0, [sp, #0x38]
    // str r1, [sp, #0x1c]
    // ldr r0, [sp, #0x38]
    // ldr r1, [sp, #0x44]
    // ldr r1, [sp, #0x3c]
    // str r2, [sp]
    // str r2, [sp, #4]
    // add r2, #0xc
    // str r2, [sp, #8]
    // ldr r2, [sp, #0x1c]
    // str r2, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r4, #0x15
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x48]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x40]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
}




void ov88_02258EA8(void) {
    // ldr r0, [sp, #0x1c]
    // strb r1, [r5]
    // str r0, [sp]
    // ldr r0, [sp]
    // ldr r2, [sp, #0x18]
}




void ov88_02258EF8(void) {
}




int ov88_02258EFC(void) {
    // add r1, sp, #8
    ov45_0222DCF4(r1);
    *((u8*)(r5 + 4)) = r4;
    *((u8*)(r5 + 5)) = 1;
    // add r1, sp, #8
    // add r2, sp, #4
    ov45_0222D594(r6);
    // add r0, sp, #4
    // add r2, sp, #0
    ov45_0222D594(r5);
    // add r0, sp, #0
    // ldrb r0, [r0]
    *((u8*)(r5 + 5)) = 1;
    // ldr r0, [sp, #4]
    // str r0, [r5]
}



void ov88_02258F60(void) {
}




u16 ov88_02258F74(void) {
}




void ov88_02258F88(void) {
    // str r1, [sp, #0x10]
    // str r2, [sp, #0x14]
    // add r2, r2, r0
    // add r0, r2, r0
    _u32_div_f(((0xe1 << 4) * *((u8*)r0)), *((u32*)(r0 + 8)), *((u8*)(r0 + 2)));
    *((u16*)(r4 + 6)) = 0;
    *((u8*)(r4 + 5)) = 0;
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x14]
    // str r2, [sp, #0xc]
    FillBgTilemapRect(*((u32*)8), 3, 0, 5);
    // ldr r0, [sp, #0x14]
    ScheduleBgTilemapBufferTransfer(*((u32*)r0), 3);
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x1c]
    // sub r6, r1, r0
    // str r0, [sp, #0x20]
    // sub r3, r0, r4
    // add r0, r3, r7
    // ldr r0, [sp, #0x20]
    // str r0, [sp]
    // ldr r0, [sp, #0x10]
    // ldr r1, [sp, #0x14]
    ov88_02258D90(9, 3, 0, ((r3 << 0x18) >> 0x18));
    // ldr r0, [sp, #0x1c]
    // str r0, [sp, #0x1c]
    *((u16*)((r4 + 1) + 6)) = (*((u16*)((r4 + 1) + 6)) + 1);
    // sub r2, r2, r3
    // ror r2, r1
    // add r7, r3, r2
    _u32_div_f((r0 + 1), 0xa, (*((u16*)((r4 + 1) + 6)) << 0x1b), (*((u16*)((r4 + 1) + 6)) >> 0x1f));
    // str r1, [sp, #0x18]
    _u32_div_f(r5, 0xa);
    // ldr r3, [sp, #0x18]
    // str r0, [sp]
    // ldr r0, [sp, #0x10]
    // ldr r1, [sp, #0x14]
    ov88_02258D90(((r0 << 0x18) >> 0x18), ov88_02259924, *((u32*)(ov88_02259924 + (0 << 2))), (((((0x1e * *((u32*)(r4 + 8))) >> 2) * (0 + 1)) << 0x18) >> 0x18));
    // ldr r3, [sp, #0x18]
    // str r0, [sp]
    // ldr r0, [sp, #0x10]
    // ldr r1, [sp, #0x14]
    ov88_02258D90(((r0 << 0x18) >> 0x18), 3, ((r3 << 0x18) >> 0x18));
}




void ov88_022590C0(void) {
}




void ov88_022590D4(void) {
}




int ov88_022590D8(void) {
    ov45_0222DD38(r1);
    *((u16*)(r4 + 2)) = 1;
    *((u16*)(r4 + 2)) = 3;
}



void ov88_02259104(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0225911C: ; jump table
    // strh r0, [r4]
    // ldrsh r0, [r4, r0]
    // str r0, [sp]
    // ldr r3, [sp, #0x10]
    // ldrsh r1, [r4, r0]
    // strh r1, [r4]
    // ldrsh r1, [r4, r0]
    // strh r0, [r4]
    // ldrsh r0, [r4, r0]
    // str r0, [sp]
    // ldr r3, [sp, #0x10]
    // ldrsh r1, [r4, r0]
    // strh r1, [r4]
    // ldrsh r1, [r4, r0]
}




void ov88_0225918C(void) {
    // str r0, [sp, #0x14]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0x1c]
    // str r2, [sp, #0xc]
    // str r1, [sp, #0x18]
    // ldr r7, [sp, #0x50]
    // str r5, [sp, #0x2c]
    // ldr r0, [sp, #0x2c]
    // str r0, [sp, #0x34]
    // add r1, r4, r5
    // add r1, r4, r5
    // str r0, [sp, #0x28]
    // add r1, r4, r5
    // str r0, [sp, #0x24]
    // add r1, r4, r5
    // str r0, [sp, #0x20]
    // add r1, r4, r5
    // str r0, [sp, #0x30]
    // ldr r0, [sp, #0x1c]
    // add r1, r4, r5
    // ldr r1, [sp, #0x30]
    // str r1, [sp]
    // ldr r1, [sp, #0x28]
    // str r1, [sp, #4]
    // ldr r1, [sp, #0x24]
    // ldr r3, [sp, #0x34]
    // str r1, [sp, #8]
    // ldr r1, [sp, #0x20]
    // str r1, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp, #0x18]
    // ldr r0, [sp, #0x2c]
    // str r0, [sp, #0x2c]
}




void ov88_02259244(void) {
    // ldr r5, [sp, #0x10]
    // tst r4, r5
    // tst r4, r5
    // str r4, [sp]
}




void ov88_02259264(void) {
}




void ov88_02259280(void) {
    // str r3, [sp]
    // ldr r0, [sp]
    // strb r0, [r5, r4]
    // strb r0, [r5, r4]
}




void ov88_022592B8(void) {
    // str r0, [sp]
    // add r6, #0xa
    // ldr r2, [sp]
    // add r1, r6, r5
    // add r2, #0xe0
    // add r2, r7, r2
}




void ov88_022592EC(void) {
    // str r0, [sp, #0x14]
    // str r1, [sp, #0x18]
    // str r2, [sp, #0x1c]
    // str r0, [sp, #0x20]
    // add r5, #0x60
    // ldr r0, [sp, #0x20]
    // ldr r1, [sp, #0x18]
    // ldr r3, [sp, #0x1c]
    ov88_02259508(0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x18]
    AddWindowParameterized(*((u32*)((r7 << 0x10) >> 0x10)), r5, 3, 1);
    FillWindowPixelBuffer(r5, 0);
    ScheduleWindowCopyToVram(r5);
    // ldr r0, [sp, #0x20]
    // add r0, #0x20
    // str r0, [sp, #0x20]
    // add r7, #0x3c
    // add r5, #0x10
    // ldr r1, [sp, #0x1c]
    String_New((1 << 8));
    // ldr r1, [sp, #0x14]
    // ldr r2, [sp, #0x14]
    // add r1, #0x90
    // str r0, [r1]
    // ldr r0, [sp, #0x18]
    // ldr r3, [sp, #0x1c]
    // add r2, #0x98
    GfGfxLoader_GetPlttDataFromOpenNarc(*((u32*)(r0 + (5 << 6))), 0);
    // ldr r1, [sp, #0x14]
    // add r1, #0x94
    // str r0, [r1]
    // ldr r1, [sp, #0x14]
    // add r1, #0x98
    // add r1, #0xee
    BG_LoadPlttData(0, *((u32*)(*((u32*)r1) + 0xc)), 4, 0xfa);
    // ldr r1, [sp, #0x14]
    // add r1, #0x98
    // add r1, #0xee
    BG_LoadPlttData(0, *((u32*)(*((u32*)r1) + 0xc)), 4, 0x0000011A);
    // ldr r1, [sp, #0x14]
    // add r1, #0x98
    // str r1, [sp, #0x14]
    // add r1, #0xee
    BG_LoadPlttData(0, *((u32*)(*((u32*)r1) + 0xc)), 4, 0x0000013A);
}




void ov88_022593D0(void) {
    // add r0, #0x94
    // add r0, #0x90
    // add r4, #0x60
    // add r4, #0x10
    // add r5, #0x20
}




int ov88_02259404(void) {
    // add r1, sp, #0x14
    // str r2, [sp, #4]
    // str r3, [sp, #8]
    ov45_0222AB38(r2);
    // str r0, [sp, #0xc]
    // add r4, #0x40
    ov88_022595E4(r6);
    // ldr r0, [sp, #0xc]
    // add r0, #0x98
    // str r0, [sp]
    // add r0, r6, r0
    // add r3, #0x1c
    ov88_02259560(((r0 + 1) << 5), *((u32*)(r4 + 8)), *((u32*)(r7 + 4)), r4);
    ov88_022595DC(r4);
    // ldr r0, [sp, #0xc]
    // sub r4, #0x20
    // str r0, [sp, #0xc]
    // bpl _02259422
    ov45_0222DD44(r5);
    // add r7, sp, #0x14
    ov45_0222DD5C(r5);
    // ldr r0, [sp, #8]
    // str r0, [sp]
    // add r3, #0x90
    ov45_0222DD78(r5, r7, r0, *((u32*)r6));
    // ldr r3, [sp, #4]
    // add r0, sp, #0x10
    ov88_02259280(r5, r4);
    // add r0, #0x98
    // str r0, [sp]
    // add r6, #0x90
    // add r3, sp, #0x10
    ov88_02259560(r6, *((u32*)r6), (0x15 << 4));
    ov45_0222DCE8(r5);
    ov45_0222DCE8(r5);
    ov45_0222DD44(r5);
}




void ov88_022594E0(void) {
    // add r4, #0x60
    // add r6, #0x20
    // add r4, #0x10
    // add r5, #0x20
}




void ov88_02259508(void) {
    // strb r0, [r5]
    // add r5, #0xc
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r3, [sp, #0x10]
}




void ov88_0225954C(void) {
}




void ov88_02259560(void) {
    // strb r0, [r5]
    // add r0, r1, r0
    // add r0, #0xc
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r3, [sp, #8]
    // add r0, #0xc
    // ldr r1, [sp, #0x20]
    // add r0, #0x1c
}




void ov88_022595DC(void) {
}




u16 ov88_022595E4(void) {
}




void ov88_022595F8(void) {
    // str r1, [sp, #0x1c]
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x20]
    // sub r7, r0, r4
    // sub r6, r4, r0
    // ldr r0, [sp, #0x20]
    // sub r4, r0, r4
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x1c]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // str r3, [sp, #0xc]
    // str r1, [sp, #0x10]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x1c]
    // ldr r0, [sp, #0x1c]
}




void ov88_0225967C(void) {
    // str r1, [sp, #0x18]
    // str r2, [sp, #0x1c]
    // str r0, [sp, #0x14]
    memset(0, 0x70);
    // ldr r3, [sp, #0x1c]
    NewMsgDataFromNarc(0, 0x1b, 0x000002F5);
    // str r0, [sp, #0x38]
    // ldr r1, [sp, #0x1c]
    String_New(0x80);
    // str r0, [sp, #0x34]
    // str r0, [sp, #0x3c]
    // str r0, [sp, #0x28]
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #0x14]
    // str r0, [sp, #0x20]
    // add r0, #0x40
    // str r0, [sp, #0x20]
    // ldr r1, [sp, #0x24]
    // ldr r2, [sp, #0x28]
    // ldr r0, [sp, #0x20]
    ov88_0225983C(_02259A60, *((u16*)r1), *((u32*)r2));
    // ldr r1, [sp, #0x14]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x18]
    AddWindowParameterized(*((u32*)*((u16*)(r5 + 4))), 0, *((u8*)r5));
    // ldr r0, [sp, #0x14]
    FillWindowPixelBuffer(0);
    // ldr r0, [sp, #0x38]
    // ldr r1, [sp, #0x3c]
    // ldr r2, [sp, #0x34]
    ReadMsgDataIntoString();
    // ldr r0, [sp, #0x34]
    String_CountLines();
    // str r0, [sp, #0x30]
    // ldr r0, [sp, #0x34]
    String_GetLength();
    // ldr r1, [sp, #0x1c]
    String_New((r0 + 1));
    // ldr r0, [sp, #0x30]
    // ldr r1, [sp, #0x34]
    String_GetLineN(r0, 0);
    // str r0, [sp, #0x2c]
    FontID_String_GetWidthMultiline(0, r4, 0);
    // sub r0, r1, r0
    // str r0, [sp, #0x2c]
    FontID_String_GetWidthMultiline(0, r4, 0);
    // sub r0, r1, r0
    // str r0, [sp, #0x2c]
    // str r6, [sp]
    // str r0, [sp, #4]
    // ldr r3, [sp, #0x2c]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x14]
    AddTextPrinterParameterizedWithColor(0, 0, r4);
    // ldr r0, [sp, #0x30]
    // add r6, #0x10
    String_Delete(r4);
    // ldr r0, [sp, #0x14]
    ScheduleWindowCopyToVram();
    // ldr r0, [sp, #0x28]
    // add r5, #0x10
    // str r0, [sp, #0x28]
    // ldr r0, [sp, #0x24]
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #0x20]
    // add r0, #0xc
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x14]
    // add r0, #0x10
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x3c]
    // str r0, [sp, #0x3c]
    // ldr r0, [sp, #0x34]
    String_Delete((((r0 + 4) + 2) + 1));
    // ldr r0, [sp, #0x38]
    DestroyMsgData();
}




void ov88_022597DC(void) {
    // add r4, #0x40
    // add r5, #0x10
    // add r4, #0xc
}




void ov88_02259800(void) {
}




void ov88_02259818(void) {
    // add r5, #0x40
    // add r0, r5, r0
}




void ov88_0225983C(void) {
}




void ov88_0225985C(void) {
}




void ov88_02259878(void) {
}




void ov88_02259884(void) {
    // strh r0, [r4]
    // add r0, r1, r0
    // asr r3, r0, #1
    // sub r0, #0xe
    // sub r3, r1, r0
    // add r0, sp, #4
    // strh r1, [r0]
    // str r0, [sp]
    // add r0, sp, #4
}



