/* Decompiled from asm/overlay_71.s */
#include "global.h"

BOOL TradeSequence_Init(void) {
    IsPaletteFadeFinished();
    Heap_Create(3, 0x38, (3 << 0xf));
    Heap_Create(3, 0x39, (3 << 0xf));
    ov71_022473E4();
    Sound_SetSceneAndPlayBGM(3, (0xfd << 2), 1);
    OverlayManager_CreateAndGetData(r5, (0x56 << 2), 0x38);
    OverlayManager_GetArgs(r5);
    // str r0, [r4]
    *((u32*)(r4 + 4)) = 0;
    BgConfig_Alloc(0x38);
    *((u32*)(r4 + 8)) = r0;
    String_New((0x19 << 4), 0x38);
    *((u32*)(r4 + 0x14)) = r0;
    NewMsgDataFromNarc(0, 0x1b, 0xb3, 0x38);
    *((u32*)(r4 + 0x10)) = r0;
    MessageFormat_New(0x38);
    *((u32*)(r4 + 0xc)) = r0;
    BufferBoxMonNickname(*((u32*)(r4 + 0xc)), 0, *((u32*)*((u32*)r4)));
    BufferBoxMonNickname(*((u32*)(r4 + 0xc)), 1, *((u32*)(*((u32*)r4) + 4)));
    BufferPlayersName(*((u32*)(r4 + 0xc)), 2, *((u32*)(*((u32*)r4) + 8)));
    ov71_02246B28(*((u32*)(*((u32*)r4) + 4)));
    // str r0, [r4, r1]
    BufferBoxMonNickname(*((u32*)(r4 + 0xc)), 0, *((u32*)r2));
    BufferBoxMonNickname(*((u32*)(r4 + 0xc)), 1, *((u32*)(r2 + 4)));
    ov71_02246B28(*((u32*)(*((u32*)r4) + 4)));
    // str r0, [r4, r1]
    NNS_G2dInitOamManagerModule((0x52 << 2));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // str r1, [sp, #0x10]
    OamManager_Create(0, 0x80, 0, 0x20);
    // add r1, #0x1c
    G2dRenderer_Init(0x40, r4, 0x38);
    *((u32*)(r4 + 0x18)) = r0;
    // add r0, #0x1c
    G2dRenderer_SetSubSurfaceCoords(r4, 0, (0x3a << 0xe));
    GetBoxMonData(*((u32*)*((u32*)r4)), 5, 0);
    // strh r0, [r4, r1]
    GetBoxMonData(*((u32*)(*((u32*)r4) + 4)), 5, 0);
    // strh r0, [r4, r1]
    GetBoxMonData(*((u32*)*((u32*)r4)), 0x70, 0);
    // strh r0, [r4, r1]
    GetBoxMonData(*((u32*)(*((u32*)r4) + 4)), 0x70, 0);
    // strh r0, [r4, r1]
    // str r0, [r4, r1]
    Main_SetVBlankIntrCB(0, 0);
    HBlankInterruptDisable();
    GfGfx_DisableEngineAPlanes();
    GfGfx_DisableEngineBPlanes();
    // and r1, r0
    // str r1, [r2]
    // and r0, r1
    // str r0, [r2]
    SysTask_CreateOnPrintQueue(ov71_02246C48, r4, 1);
    // str r0, [r4, r1]
    // add r1, #0x10
    // str r0, [r4, r1]
}




void ov71_02246B28(void) {
}




BOOL TradeSequence_Exit(void) {
    // ldr r0, [r4, r0]
}




BOOL TradeSequence_Main(void) {
    OverlayManager_GetData();
    // tst r1, r6
    // blx r1
    // str r0, [r4, r1]
    // blx r2
    // blx r1
    // str r1, [r4, r0]
    *((u32*)(r0 + 4)) = (*((u32*)(r0 + 4)) + 1);
    // str r1, [r5]
    *((u32*)(r0 + 4)) = ((*((u32*)(r0 + 4)) << 4) + 1);
    // str r0, [r5]
    ov71_022473F0(0, 0, (*((u32*)(r0 + 4)) << 4), (*((u32*)(r0 + 4)) << 4));
}




void ov71_02246C48(void) {
    SpriteList_RenderAndAnimateSprites(*((u32*)(r1 + 0x18)));
    OamManager_ApplyAndResetBuffers();
    // str r0, [r3, r1]
}




void ov71_02246C6C(void) {
    // add r1, #0xc8
    Heap_Alloc(0x38, 0x38);
    // str r0, [r5]
    // add r2, sp, #4
    GfGfxLoader_GetPlttData(0x59, 6, 0x38);
    MIi_CpuClear16(0, r4, 0x60);
    Heap_Free(r7);
    // add r1, #0xec
    // str r0, [r1]
    // add r1, #0xe8
    // str r0, [r1]
    // add r1, #0xf0
    // str r0, [r1]
    // add r1, #0xf4
    // str r0, [r1]
    // add r1, #0xe4
    // str r5, [r1]
    // add r1, #0xf8
    // str r0, [r1]
    // add r1, #0xfc
    // str r6, [r1]
    // add r1, #0xc4
    // str r2, [r1]
    // str r0, [sp]
    G2x_SetBlendAlpha_(0x04000050, 4, 0xc, 0x10);
    // str r0, [sp]
    G2x_SetBlendAlpha_(0x04001050, 4, 0xc, 0x10);
    SysTask_CreateOnVWaitQueue(ov71_02246D9C, r4, 0x14);
    // add r1, #0xc0
    // str r0, [r1]
    // add r0, #0xc0
    // add r0, #0xe4
    // str r1, [r0]
}




void ov71_02246D40(void) {
    // add r1, #0xe4
    // add r0, #0xe8
    // str r1, [r0]
}




void ov71_02246D54(void) {
    // add r0, #0xe4
    // add r0, #0xc4
    // add r0, #0xe4
    // str r1, [r0]
    // add r0, #0xc0
}




void ov71_02246D9C(void) {
    // add r0, #0xe8
    // add r0, #0xf0
    // add r0, #0xf0
    // str r1, [r0]
    // add r0, #0xf0
    PlaySE(0x000006AD, (*((u32*)r1) - 1));
    // add r0, #0xf0
    // str r1, [r0]
    ov71_02246EAC(r4, 0x1e);
    // add r0, #0xec
    GX_BeginLoadBGExtPltt(*((u32*)r4));
    GXS_BeginLoadBGExtPltt();
    DC_FlushRange(r4, 0x60);
    GX_LoadBGExtPltt(r4, (6 << 0xc), 0x60);
    GXS_LoadBGExtPltt(r4, (6 << 0xc), 0x60);
    GX_EndLoadBGExtPltt();
    GXS_EndLoadBGExtPltt();
    // add r4, #0xec
    // str r0, [r4]
    // add r0, #0xec
    GX_BeginLoadBGExtPltt(*((u32*)r4));
    GXS_BeginLoadBGExtPltt();
    DC_FlushRange(r4, 0x60);
    GX_LoadBGExtPltt(r4, (6 << 0xc), 0x60);
    GXS_LoadBGExtPltt(r4, (6 << 0xc), 0x60);
    GX_EndLoadBGExtPltt();
    GXS_EndLoadBGExtPltt();
    // add r0, #0xec
    // str r1, [r0]
    // add r0, #0xf4
    // add r0, #0xe4
    // str r1, [r0]
    Heap_Free(r4, 0);
    SysTask_Destroy(r5);
}




void ov71_02246E84(void) {
    // strh r4, [r0, r1]
    // strh r3, [r0, r1]
    // add r0, #0xec
    // str r1, [r0]
}




void ov71_02246EAC(void) {
    // add r0, #0xf8
    // add r0, r5, r0
    // add r0, #0xc4
    Heap_Alloc(0x38, 0x18);
    // str r5, [r4]
    // add r0, #0xfc
    // mvn r0, r0
    *((u32*)(r0 + 4)) = 0xf;
    *((u32*)(r0 + 0xc)) = 0;
    *((u32*)(r0 + 8)) = 2;
    // add r0, #0xf8
    *((u32*)(r0 + 0x10)) = *((u32*)r5);
    // add r0, #0xfc
    *((u32*)(r0 + 0x14)) = *((u32*)r5);
    SysTask_CreateOnMainQueue(ov71_02246F90, r0, 0xa);
    // add r1, #0xf8
    // add r1, r5, r1
    // add r1, #0xc4
    // str r0, [r1]
    // add r0, #0xf8
    // add r0, r5, r0
    // add r0, #0xc4
    // add r0, #0xf4
    // add r0, #0xf4
    // str r1, [r0]
    // add r0, #0xf8
    // add r0, #0xf8
    // str r1, [r0]
    // add r0, #0xf8
    // add r5, #0xf8
    // str r0, [r5]
    Heap_Free(r4, (*((u32*)r5) + 1));
}




void ov71_02246F60(void) {
    // add r6, #0xc4
    // str r0, [r6, r4]
    // add r0, #0xf4
    // add r5, #0xf4
    // str r0, [r5]
}




void ov71_02246F90(void) {
    *((u32*)(r1 + 0xc)) = (*((u32*)(r1 + 0xc)) + 1);
    *((u32*)(r1 + 0xc)) = 0;
    ov71_02246E84(*((u32*)r1), *((u32*)(r1 + 4)), (*((u32*)(r1 + 4)) + 1), 0);
    ov71_02246F60(*((u32*)r4), *((u32*)(r4 + 0x10)));
    ov71_02246E84(0x00007FFF);
    *((u32*)(r4 + 4)) = (*((u32*)(r4 + 4)) + 1);
    ov71_02246E84(*((u32*)r4), *((u32*)(r4 + 4)), (*((u32*)(r4 + 4)) + 1));
    ov71_02246F60(*((u32*)r4), *((u32*)(r4 + 0x10)));
    ov71_02246E84((r2 + 1), 0x00007FFF);
    *((u32*)(r4 + 4)) = (*((u32*)(r4 + 4)) - 1);
}




void ov71_02247000(void) {
    // str r0, [sp]
    // str r3, [sp, #4]
    // ldr r5, [sp, #0x28]
    Heap_Alloc(0x38, 0x24);
    // str r0, [r5]
    // ldr r1, [sp]
    // str r1, [r4]
    *((u32*)(r0 + 8)) = r6;
    // ldr r1, [sp, #4]
    *((u32*)(r0 + 0xc)) = r7;
    *((u32*)(r0 + 0x10)) = r1;
    // ldr r1, [sp, #0x20]
    *((u32*)(r0 + 0x14)) = r1;
    *((u32*)(r0 + 0x18)) = 0;
    // ldr r0, [sp, #0x24]
    *((u32*)(r0 + 0x1c)) = 0;
    *((u32*)(r0 + 4)) = r5;
    // str r2, [r5]
    SysTask_CreateOnVBlankQueue(ov71_02247068, r0, 0);
    *((u32*)(r4 + 0x20)) = r0;
    // str r0, [r5]
    Heap_Free(r4);
}




void ov71_02247068(void) {
    // asr r2, r1, #0xc
    // asr r1, r2, #4
    // add r1, r2, r1
    // asr r2, r1, #5
    // add r0, r0, r2
    // str r1, [r0]
    // sub r0, r0, r2
    // str r1, [r0]
    // add r0, r1, r0
}




void ov71_022470DC(void) {
    // add r2, sp, #4
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp]
    SetBgAffine(*((u32*)r0), 2, 0x80);
    // add r2, sp, #4
    // str r0, [sp]
    SetBgAffine(*((u32*)r4), 6, 0x80);
}




void ov71_02247124(void) {
    // ldr r0, [sp, #0x60]
    // str r2, [sp, #0x14]
    // str r3, [sp, #0x18]
    Heap_AllocAtEnd(0x38, (0x32 << 6));
    // str r0, [sp, #0x24]
    // add r2, sp, #0x28
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    AcquireBoxMonLock(*((u32*)(*((u32*)r5) + 4)), ov71_0224BBDC);
    // str r0, [sp, #0x20]
    // add r0, sp, #0x38
    GetBoxmonSpriteCharAndPlttNarcIds(r4, 2, 0);
    GetBoxMonData(r4, 0, 0);
    // str r0, [sp, #0x1c]
    GetBoxMonData(r4, 5, 0);
    // ldr r0, [sp, #0x60]
    // ldr r0, [sp, #0x30]
    // str r0, [sp, #0x30]
    GetBoxMonData(r4, 0x4c, 0);
    // add r6, #0xa7
    // ldr r0, [sp, #0x24]
    // add r1, sp, #0x28
    // str r0, [sp]
    // ldr r0, [sp, #0x1c]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x60]
    // add r3, sp, #0x28
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r6, [sp, #0x10]
    sub_02014510(*((u16*)(r1 + 0x10)), *((u16*)(r1 + 0x12)), 0x38);
    // ldr r0, [sp, #0x24]
    DC_FlushRange(r7);
    // ldr r1, [sp, #0x14]
    // str r0, [sp]
    // ldr r2, [sp, #0x24]
    BG_LoadCharTilesData(*((u32*)(r5 + 8)), ((r1 << 0x18) >> 0x18), r7);
    // ldr r1, [sp, #0x20]
    ReleaseBoxMonLock(r4);
    // ldr r0, [sp, #0x24]
    Heap_Free();
    // ldr r0, [sp, #0x14]
    // str r0, [sp]
    // ldr r3, [sp, #0x18]
    // str r0, [sp, #4]
    // add r1, sp, #0x28
    GfGfxLoader_GXLoadPal(*((u16*)(r1 + 0x10)), *((u16*)(r1 + 0x14)), 0, (r3 << 5));
}




void ov71_02247230(void) {
    // sub r1, #0x3d
    // sub r1, #0x3e
    // str r0, [sp]
    // add r3, sp, #0x1c
    GfGfxLoader_GetScrnData(7, (0x52 << 2), 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x1c]
    // ldr r2, [sp, #0x38]
    // add r0, #0xc
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r3, [sp, #0x3c]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    CopyToBgTilemapRect(*((u32*)(r5 + 8)), ((r4 << 0x18) >> 0x18), ((r2 << 0x18) >> 0x18), ((r3 << 0x18) >> 0x18));
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x38]
    // ldr r3, [sp, #0x3c]
    // str r0, [sp, #8]
    BgTilemapRectChangePalette(*((u32*)(r5 + 8)), ((r4 << 0x18) >> 0x18), ((r2 << 0x18) >> 0x18), ((r3 << 0x18) >> 0x18));
    Heap_Free(r7);
}




void ov71_022472C4(void) {
    // str r0, [sp]
    // add r3, #8
    // str r0, [r5]
    // str r0, [sp]
    // add r3, #0xc
}




void ov71_022472FC(void) {
    // str r0, [r4]
}




void ov71_02247320(void) {
    // str r2, [r0]
    // ldr r2, [sp]
    // add r1, #0x20
    // strb r2, [r1]
}




void ov71_02247340(void) {
    // str r0, [sp]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x28]
    // str r1, [sp, #4]
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x2c]
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x1c]
    // add r0, sp, #0
}




void ov71_02247384(void) {
}




void ov71_02247388(void) {
}




void ov71_0224738C(void) {
}




void ov71_02247390(void) {
}




void ov71_02247398(void) {
}




void ov71_022473A0(void) {
}




void ov71_022473A8(void) {
    // ldrh r0, [r0, r1]
}




void ov71_022473B0(void) {
    // ldrh r0, [r0, r1]
    // nop
    // _022473B8: .word 0x0000014E
}




void ov71_022473BC(void) {
    // ldrh r0, [r0, r1]
}




void ov71_022473C4(void) {
    // ldrh r0, [r0, r1]
    // nop
    // _022473CC: .word 0x00000152
}




void ov71_022473D0(void) {
}




void ov71_022473DC(void) {
}




void ov71_022473E4(void) {
    // str r1, [r0]
}




void ov71_022473F0(void) {
    Heap_Free(*((u32*)ov71_0224C044));
    // str r1, [r0]
}




void ov71_02247424(void) {
    GF_AssertFail(*((u32*)_0224C040));
    // str r1, [r0]
    // str r4, [r0, r1]
}




void ov71_0224744C(void) {
    // str r3, [sp]
    // ldr r3, [sp]
    // add r0, r0, r5
    // add r5, #0x8c
}




void ov71_02247498(void) {
    // add r0, r0, r4
    // add r4, #0x8c
}




void ov71_022474CC(void) {
    // add r0, r0, r4
    // add r4, #0x8c
    // add r1, sp, #0
    // str r2, [sp]
}




void ov71_02247514(void) {
    // add r0, sp, #0x2c
    MTX_Identity33_();
    // add r0, #0x80
    // asr r0, r0, #4
    // ldrsh r1, [r3, r1]
    // ldrsh r2, [r3, r2]
    // add r0, sp, #8
    MTX_RotX33_(*((u16*)r4), ((*((u16*)r4) << 1) << 1), (((*((u16*)r4) << 1) + 1) << 1), FX_SinCosTable_);
    // add r1, sp, #0x2c
    // add r0, sp, #8
    MTX_Concat33(r1);
    // add r0, #0x82
    // asr r0, r0, #4
    // ldrsh r1, [r3, r1]
    // ldrsh r2, [r3, r2]
    // add r0, sp, #8
    MTX_RotY33_(*((u16*)r4), ((*((u16*)r4) << 1) << 1), (((*((u16*)r4) << 1) + 1) << 1), FX_SinCosTable_);
    // add r1, sp, #0x2c
    // add r0, sp, #8
    MTX_Concat33(r1);
    // add r0, #0x84
    // asr r0, r0, #4
    // ldrsh r1, [r3, r1]
    // ldrsh r2, [r3, r2]
    // add r0, sp, #8
    MTX_RotZ33_(*((u16*)r4), ((*((u16*)r4) << 1) << 1), (((*((u16*)r4) << 1) + 1) << 1), FX_SinCosTable_);
    // add r1, sp, #0x2c
    // add r0, sp, #8
    MTX_Concat33(r1);
    // add r0, #0x88
    // str r0, [sp]
    // str r0, [sp, #4]
    NNS_G3dGlbPolygonAttr(0, 0, 0, 0);
    // add r4, #0x74
    // add r1, #0x68
    // add r2, sp, #0x2c
    GF3dRender_DrawModel((r4 + 4), r4, r4);
}




void ov71_022475C4(void) {
    // str r1, [r0]
    // add r2, #0x84
    // strh r1, [r2]
    // ldrsh r3, [r0, r2]
    // add r2, #0x82
    // strh r3, [r2]
    // ldrsh r3, [r0, r2]
    // add r2, #0x80
    // strh r3, [r2]
}




void ov71_022475F8(void) {
}




void ov71_02247610(void) {
    // str r0, [sp]
    // str r3, [sp, #4]
    // add r5, r4, r6
    // str r0, [r4, r6]
    // ldr r1, [sp, #4]
    // add r2, #8
    // add r1, r2, r1
    // add r0, r0, r1
    // ldr r0, [sp, #0x20]
    // ldr r0, [sp, #0x24]
    // ldr r0, [sp, #0x28]
    // add r0, #0x88
    // str r1, [r0]
    // ldr r0, [sp, #0x2c]
}




void ov71_022476B4(void) {
    // add r2, #0x68
    // ldmia r2!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
}




void ov71_022476C4(void) {
    // ldmia r3!, {r0, r1}
    // add r2, #0x68
    // stmia r2!, {r0, r1}
    // str r0, [r2]
}




void ov71_022476D4(void) {
    // add r2, #0x80
    // strh r2, [r1]
    // add r2, #0x82
    // add r0, #0x84
}




void ov71_022476EC(void) {
    // add r2, #0x80
    // strh r3, [r2]
    // add r2, #0x82
    // add r0, #0x84
    // strh r3, [r2]
    // strh r1, [r0]
}




void ov71_02247704(void) {
}




void ov71_02247708(void) {
    // add r2, #0x88
    // str r1, [r2]
}




void ov71_02247730(void) {
}




void ov71_02247738(void) {
    // add r0, sp, #0x28
    MTX_Identity33_();
    // add r0, #0x80
    // asr r0, r0, #4
    // ldrsh r1, [r3, r1]
    // ldrsh r2, [r3, r2]
    // add r0, sp, #4
    MTX_RotX33_(*((u16*)r4), ((*((u16*)r4) << 1) << 1), (((*((u16*)r4) << 1) + 1) << 1), FX_SinCosTable_);
    // add r1, sp, #0x28
    // add r0, sp, #4
    MTX_Concat33(r1);
    // add r0, #0x82
    // asr r0, r0, #4
    // ldrsh r1, [r3, r1]
    // ldrsh r2, [r3, r2]
    // add r0, sp, #4
    MTX_RotY33_(*((u16*)r4), ((*((u16*)r4) << 1) << 1), (((*((u16*)r4) << 1) + 1) << 1), FX_SinCosTable_);
    // add r1, sp, #0x28
    // add r0, sp, #4
    MTX_Concat33(r1);
    // add r0, #0x84
    // asr r0, r0, #4
    // ldrsh r1, [r3, r1]
    // ldrsh r2, [r3, r2]
    // add r0, sp, #4
    MTX_RotZ33_(*((u16*)r4), ((*((u16*)r4) << 1) << 1), (((*((u16*)r4) << 1) + 1) << 1), FX_SinCosTable_);
    // add r1, sp, #0x28
    // add r0, sp, #4
    MTX_Concat33(r1);
    NNS_G3dGeBufferOP_N(0x11, 0, 0);
    Camera_PushLookAtToNNSGlb();
    // add r4, #0x74
    // add r1, #0x68
    // add r2, sp, #0x28
    sub_0201F990(*((u32*)(r4 + 0x5c)), r4, r4);
    // add r1, sp, #0
    // str r2, [sp]
    NNS_G3dGeBufferOP_N(0x12, 1);
}




void ov71_022477EC(void) {
}




void ov71_0224780C(void) {
    // bx r3
    // nop
    // _02247818: .word Camera_SetAnglePos
}




void ov71_0224781C(void) {
    // bx r3
    // nop
    // _02247828: .word Camera_AdjustAngleTarget
}




void ov71_0224782C(void) {
    // bx r3
    // nop
    // _02247838: .word Camera_ApplyPerspectiveType
}




void ov71_0224783C(void) {
    // bx r3
    // nop
    // _02247848: .word Camera_SetPerspectiveAngle
}




void ov71_0224784C(void) {
    Camera_New(0x39);
    // str r0, [r5]
    *((u32*)(r5 + 4)) = r4;
    *((u32*)(r5 + 8)) = r6;
    *((u32*)(r5 + 0xc)) = r7;
    *((u16*)(r5 + 0x10)) = 0;
    *((u16*)(r5 + 0x12)) = 0;
    *((u16*)(r5 + 0x14)) = 0;
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r2, #0x10
    Camera_Init_FromTargetDistanceAndAngle((r5 + 4), (0x4b << 0xe), r5, 0x00000FA4);
    // str r0, [sp, #0x10]
    // str r1, [sp, #0xc]
    // str r1, [sp, #0x14]
    // add r0, sp, #0xc
    Camera_SetLookAtCamUp((1 << 0xc), *((u32*)r5));
    Camera_SetStaticPtr(*((u32*)r5));
    Camera_SetPerspectiveClippingPlane(0, (0xfa << 0xe), *((u32*)r5));
}




void ov71_022478B8(void) {
}




void ov71_022478C8(void) {
    // str r5, [r4]
    // add r1, #0x80
    // str r0, [r1]
}




void ov71_02247924(void) {
    // add r0, #0x58
    // add r0, #0x80
}




void ov71_02247990(void) {
    // blx r2
    // str r0, [r4]
    *((u32*)(r0 + 4)) = 0;
    ov71_022479C8(r0, (r0 + 4), *((u32*)(ov71_0224BC64 + (*((u32*)r1) << 2))), (*((u32*)r1) << 2));
}




void ov71_022479C8(void) {
    // str r2, [sp]
    // add r1, sp, #0
}




void ov71_02247A10(void) {
    GfGfx_SetBanks(ov71_0224BCBC);
    // and r0, r1
    // strh r0, [r2]
    SetBothScreensModesAndDisable(ov71_0224BC74, *((u16*)0x04000304), 0x04000304);
    InitBgFromTemplate(*((u32*)(r4 + 0x54)), 1, ov71_0224BC84, 0);
    InitBgFromTemplate(*((u32*)(r4 + 0x54)), 2, ov71_0224BCA0, 0);
    InitBgFromTemplate(*((u32*)(r4 + 0x54)), 6, ov71_0224BCA0, 0);
    GfGfx_EngineATogglePlanes(1, 1);
    // strh r0, [r2]
    // str r2, [sp]
    BG_FillCharDataRange(*((u32*)(r4 + 0x54)), 1, 0, 1);
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r2, [sp, #0xc]
    FillBgTilemapRect(*((u32*)(r4 + 0x54)), 1, 0, 0);
    ov71_022473D0(*((u32*)r4));
    // str r0, [sp]
    // str r0, [sp, #4]
    LoadUserFrameGfx2(*((u32*)(r4 + 0x54)), 1, 0x6d, 2);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r2, [sp, #0xc]
    // str r2, [sp, #0x10]
    // add r1, #0x58
    AddWindowParameterized(*((u32*)(r4 + 0x54)), r4, 1, 2);
    // add r0, #0x58
    FillWindowPixelBuffer(r4, 0xf);
    // str r3, [sp]
    // str r0, [sp, #4]
    GfGfxLoader_GXLoadPal(0x10, 8, 0, 0x20);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharData(0x59, 0x16, *((u32*)(r4 + 0x54)), 2);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnData(0x59, 0x15, *((u32*)(r4 + 0x54)), 2);
    // str r0, [sp]
    // str r0, [sp, #4]
    GfGfxLoader_GXLoadPal(0x59, 0x17, 0, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharData(0x59, 0x16, *((u32*)(r4 + 0x54)), 6);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnData(0x59, 0x15, *((u32*)(r4 + 0x54)), 6);
    // str r0, [sp]
    // str r0, [sp, #4]
    GfGfxLoader_GXLoadPal(0x59, 0x17, 4, 0);
    BgCommitTilemapBufferToVram(*((u32*)(r4 + 0x54)), 1);
    ov71_02247ED0(r4);
    ov71_0224744C(1, 0, 0, 0);
    *((u32*)(r4 + 0x70)) = r0;
    ov71_02247F9C(r4);
    *((u32*)(r4 + 0x10)) = r0;
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    ov71_02247610(*((u32*)(r4 + 0x70)), 0, 0x59, 0x1b);
    *((u32*)(r4 + 0x74)) = r0;
    // add r0, sp, #0x14
    // add r1, sp, #0x14
    // strh r3, [r0]
    *((u16*)(r0 + 2)) = *((u16*)(ov71_0224BC5C + 2));
    *((u16*)(r0 + 4)) = *((u16*)(ov71_0224BC5C + 4));
    ov71_022476EC(*((u32*)(r4 + 0x74)), *((u16*)(ov71_0224BC5C + 4)), *((u16*)(ov71_0224BC5C + 2)));
    GfGfx_EngineATogglePlanes(0x10, 1);
    GfGfx_EngineBTogglePlanes(0x10, 1);
    ov71_02247FF8(r4);
    // strh r1, [r0]
    sub_0203A880(0x04000050, 0);
    sub_0203A948(1, 0x38);
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 1, 1, 0);
}




void ov71_02247C34(void) {
}




void ov71_02247C60(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02247C7A: ; jump table
    // str r0, [r5]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0xc]
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r3, [sp, #8]
    // add r0, #0x58
    // add r0, #0x58
    // add r0, #0x58
    // str r6, [r5]
    // add r0, #0x80
    // add r1, sp, #0x10
    // add r1, sp, #0x10
    // add r0, #0x58
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r3, [sp, #8]
    // add r0, #0x58
    // add r0, #0x58
    // str r0, [r5]
    // add r0, #0x58
    // str r0, [r5]
}




void ov71_02247DEC(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _02247E06: ; jump table
    PlaySE(0x000006A7, (*((u16*)(*((u32*)r1) + 6)) << 0x10));
    ov71_022480C0(r5, 0, 0x10, 0xc);
    // str r0, [r4]
    ov71_02248110((*((u32*)r4) + 1));
    Pokepic_Delete(*((u32*)(r5 + 0x10)));
    Sprite_SetAnimCtrlSeq(*((u32*)(r5 + 0x40)), 0);
    Sprite_SetDrawFlag(*((u32*)(r5 + 0x40)), 1);
    // str r0, [r4]
    Sprite_IsAnimated(*((u32*)(r5 + 0x40)));
    ov71_02247704(*((u32*)(r5 + 0x74)), 1);
    ov71_022480C0(r5, 0x10, 0, 0x10);
    ov71_0224817C(r5);
    // str r0, [r4]
    ov71_022481D8((*((u32*)r4) + 1));
    ov71_022481C8(r5);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 0, 0, 0);
    // str r0, [r4]
    IsPaletteFadeFinished((*((u32*)r4) + 1));
    ov71_022481C8(r5);
}




void ov71_02247ED0(void) {
    NNS_G3dInit();
    G3X_InitMtxStack();
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
    // str r0, [r1]
    *((u32*)(0x04000540 + 0x40)) = 0xBFFF0000;
    GF_3DVramMan_InitFrameTexVramManager(1, 1);
    GF_3DVramMan_InitFramePlttVramManager((1 << 0xe), 1);
    // blx r3
    // blx r3
    // and r2, r4
    PokepicManager_SetCharBaseAddrAndSize(*((u32*)(r5 + 0xc)), (((1 << 0xe) << 0x10) >> 0xd), ((0x7FFF0000 >> 0x10) << 4), *((u32*)NNS_GfdDefaultFuncAllocPlttVram));
    // and r2, r6
    PokepicManager_SetPlttBaseAddrAndSize(*((u32*)(r5 + 0xc)), ((r6 << 0x10) >> 0xd), ((0xFFFF0000 >> 0x10) << 3));
}




void ov71_02247F9C(void) {
    // add r0, sp, #0x10
    // add r0, #0x80
    // add r1, #0x14
    // str r1, [sp]
    // str r1, [sp, #4]
    // add r0, #0x14
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r3, #0x50
    // add r1, sp, #0x10
}




void ov71_02247FF8(void) {
    // add r0, #0x44
    // add r0, sp, #0x5c
    // add r0, sp, #0x38
    // str r3, [sp]
    // str r2, [sp, #4]
    // str r3, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, sp, #0x38
    // str r0, [sp, #0x10]
    // str r0, [sp]
    // add r0, sp, #0x5c
    // str r0, [sp, #4]
    // str r0, [sp]
    // add r0, sp, #0x14
    // add r1, #0x44
    // add r2, sp, #0x38
    // add r3, sp, #0x5c
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r1, sp, #0x14
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r1, sp, #0x14
}




void ov71_0224809C(void) {
    // add r6, #0x44
}




void ov71_022480C0(void) {
    // str r2, [sp]
    Heap_Alloc(0x39, 0x14);
    // str r5, [r4]
    *((u32*)(r0 + 4)) = (r6 << 0xc);
    // ldr r0, [sp]
    *((u32*)(r0 + 8)) = ((r6 << 0xc) << 0xc);
    // sub r0, r1, r0
    _s32_div_f(*((u32*)(r0 + 4)), r7);
    *((u32*)(r4 + 0xc)) = r0;
    *((u32*)(r4 + 0x10)) = r7;
    SysTask_CreateOnVBlankQueue(ov71_02248140, r4, 0);
    *((u32*)(r5 + 0x78)) = r0;
    G2x_SetBlendBrightness_(0x04000050, 1, r6);
}




void ov71_02248110(void) {
    // cmp r0, #0
    // bne _0224811A
}




void ov71_02248120(void) {
}




void ov71_02248140(void) {
    *((u32*)(r1 + 0x10)) = (*((u32*)(r1 + 0x10)) - 1);
    // add r2, r1, r0
    *((u32*)(r1 + 4)) = r2;
    // asr r2, r2, #0xc
    G2x_SetBlendBrightness_(0x04000050, 1);
    // asr r2, r2, #0xc
    G2x_SetBlendBrightness_(0x04000050, 1, *((u32*)(r4 + 8)));
    ov71_02248120(*((u32*)r4));
}




void ov71_0224817C(void) {
    Heap_Alloc(0x39, 0x30);
    // str r5, [r4]
    *((u32*)(r0 + 4)) = *((u32*)(r5 + 0x74));
    // add r1, #8
    ov71_022476B4(*((u32*)(r5 + 0x74)), r0);
    // add r1, #0x14
    ov71_022476D4(*((u32*)(r4 + 4)), r4);
    *((u32*)(r4 + 0x1c)) = 0x00002F60;
    *((u32*)(r4 + 0x20)) = 0;
    *((u16*)(r4 + 0x2c)) = 0;
    *((u32*)(r4 + 0x24)) = 0;
    *((u32*)(r4 + 0x28)) = 0;
    SysTask_CreateOnMainQueue(ov71_0224820C, r4, 0);
    *((u32*)(r5 + 0x7c)) = r0;
}




void ov71_022481C8(void) {
    // cmp r0, #0
    // bne _022481D2
}




void ov71_022481D8(void) {
}




void ov71_022481EC(void) {
}




void ov71_0224820C(void) {
    // add r0, r1, r0
    *((u32*)(r1 + 0xc)) = *((u32*)(r1 + 0x1c));
    // sub r0, r1, r0
    *((u32*)(r1 + 0x1c)) = (0x1e << 6);
    // sub r0, r1, r0
    *((u32*)(r1 + 0x1c)) = (0x1e << 6);
    *((u32*)(r1 + 0xc)) = 0xFFFFC000;
    _s32_div_f((0x2c * *((u32*)(r1 + 0x1c))), 0x64);
    // neg r1, r0
    *((u32*)(r4 + 0x1c)) = r1;
    *((u32*)(r4 + 0x24)) = 1;
    PlaySE(0x000005E6);
    *((u32*)(r4 + 0x20)) = (*((u32*)(r4 + 0x20)) + 1);
    *((u16*)(r4 + 0x2c)) = 0xb0;
    // ldrsh r0, [r4, r0]
    // add r0, #0x50
    *((u16*)(r4 + 0x2c)) = 0x2c;
    // ldrsh r3, [r4, r0]
    // ldrsh r0, [r4, r2]
    // add r1, #0x14
    // add r0, r3, r0
    *((u16*)(r4 + 0x14)) = 0x14;
    // ldrsh r3, [r4, r0]
    // ldrsh r0, [r4, r2]
    // sub r0, r3, r0
    *((u16*)(r4 + 0x18)) = 0x18;
    ov71_022476EC(*((u32*)(r4 + 4)), r4, 0x2c);
    // ldrsh r3, [r4, r2]
    // add r0, r3, r0
    // add r0, r5, r0
    *((u32*)(r4 + 8)) = (r3 << 2);
    // ldrsh r2, [r4, r2]
    // add r1, #8
    // add r0, r2, r0
    // add r0, r3, r0
    *((u32*)(r4 + 0x10)) = (0x2c << 2);
    ov71_022476C4(*((u32*)(r4 + 4)), r4, 0x2c, *((u32*)(r4 + 0x10)));
    // ldrsh r0, [r4, r0]
    // sub r0, #0xe
    *((u16*)(r4 + 0x2c)) = 0x2c;
    *((u32*)(r4 + 0x28)) = (*((u32*)(r4 + 0x28)) + 1);
    ov71_022481EC(*((u32*)r4));
}




void ov71_022482EC(void) {
    Heap_Alloc(0x39, (0x5b << 2));
    // str r5, [r4]
    *((u32*)(r0 + 4)) = 0;
    ov71_02247384(r5);
    // add r1, #0xc0
    // str r0, [r1]
    // add r0, #0xd4
    // str r1, [r0]
    // add r0, #0xc4
    // str r1, [r0]
    // add r0, #0xcc
    // str r1, [r0]
    // str r1, [r4, r0]
    // str r1, [r4, r0]
    MTRandom(((0x16 << 4) + 4), 0);
    // add r1, #0xbc
    // str r0, [r1]
    // add r0, #0xd0
    // str r2, [r0]
    // str r2, [r4, r0]
    SysTask_CreateOnVWaitQueue(ov71_02248B60, r4, 0);
}




void ov71_02248358(void) {
    // add r0, #0xbc
}




void ov71_022483AC(void) {
    // blx r2
    // str r0, [r4]
    *((u32*)(r0 + 4)) = 0;
    ov71_022483E4(r0, (r0 + 4), *((u32*)(ov71_0224BCFC + (*((u32*)r1) << 2))), (*((u32*)r1) << 2));
}




void ov71_022483E4(void) {
    // add r0, #0xd4
    // add r4, #0xd4
}




void ov71_02248408(void) {
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
}




void ov71_0224843C(void) {
    IsPaletteFadeFinished(*((u32*)r1));
    // str r1, [r0]
    // str r0, [r4]
    // str r2, [r1]
    // add r0, #0xd0
}




void ov71_02248484(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0224849C: ; jump table
    // str r0, [r5]
    // add r0, #0xd8
    // str r0, [r4, r1]
    // add r0, #0xd8
    // add r4, #0xd8
    // str r0, [r5]
    // str r0, [r5]
    // str r0, [r5]
}




void ov71_02248530(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0224854A: ; jump table
    ov71_0224926C(*((u32*)(r0 + (0x16 << 4))), (*((u16*)(*((u32*)r1) + 6)) << 0x10));
    *((u32*)(r4 + 8)) = 0;
    // str r0, [r5]
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    *((u32*)(r4 + 8)) = 0;
    // add r4, #0xc4
    ov71_02246D40(*((u32*)r4));
    // str r0, [r5]
    // add r1, #0xc8
    // add r1, r4, r1
    ov71_02248D0C((*((u32*)r5) + 1), (0x59 << 2));
    // str r0, [r5]
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    PlaySE(0x000006AF);
    ov71_02249254(*((u32*)(r4 + (0x16 << 4))));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 0, 0, 0x00007FFF);
    // str r0, [r5]
    IsPaletteFadeFinished((*((u32*)r5) + 1));
}




void ov71_02248604(void) {
    GfGfx_SetBanks(ov71_0224BD54);
    // and r0, r1
    // strh r0, [r2]
    SetBothScreensModesAndDisable(ov71_0224BCEC, *((u16*)0x04000304), 0x04000304);
    // add r0, #0xc0
    InitBgFromTemplate(*((u32*)r4), 2, ov71_0224BD1C, 1);
    // add r0, #0xc0
    InitBgFromTemplate(*((u32*)r4), 6, ov71_0224BD1C, 1);
    OS_DisableInterrupts();
    // add r0, #0xc0
    InitBgFromTemplate(*((u32*)r4), 3, ov71_0224BD38, 2);
    // add r0, #0xc0
    InitBgFromTemplate(*((u32*)r4), 7, ov71_0224BD38, 2);
    OS_RestoreInterrupts(r5);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r2, #0xc0
    GfGfxLoader_LoadCharData(0x59, 2, *((u32*)r4), 2);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r2, #0xc0
    GfGfxLoader_LoadCharData(0x59, 2, *((u32*)r4), 6);
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r2, #0xc0
    GfGfxLoader_LoadScrnData(0x59, 0, *((u32*)r4), 2);
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r2, #0xc0
    GfGfxLoader_LoadScrnData(0x59, 0, *((u32*)r4), 6);
    ov71_022473A0(*((u32*)r4));
    // str r0, [sp]
    // str r0, [sp, #4]
    GfGfxLoader_GXLoadPal(0x59, 3, 0, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    GfGfxLoader_GXLoadPal(0x59, 3, 4, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    GfGfxLoader_GXLoadPalWithSrcOffset(0x59, 3, 0, *((u16*)(ov71_0224BCE4 + (r5 << 1))));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    GfGfxLoader_GXLoadPalWithSrcOffset(0x59, 3, 4, r5);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r2, #0xc0
    GfGfxLoader_LoadCharData(0x59, 5, *((u32*)r4), 3);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r2, #0xc0
    GfGfxLoader_LoadCharData(0x59, 5, *((u32*)r4), 7);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r2, #0xc0
    GfGfxLoader_LoadScrnData(0x59, 4, *((u32*)r4), 3);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r2, #0xc0
    GfGfxLoader_LoadScrnData(0x59, 4, *((u32*)r4), 7);
    Heap_Alloc(0x39, 0x60);
    MIi_CpuClear32(0, r0, 0x60);
    DC_FlushRange(r5, 0x60);
    GX_BeginLoadBGExtPltt();
    GXS_BeginLoadBGExtPltt();
    GX_LoadBGExtPltt(r5, (6 << 0xc), 0x60);
    GXS_LoadBGExtPltt(r5, (6 << 0xc), 0x60);
    GX_EndLoadBGExtPltt();
    GXS_EndLoadBGExtPltt();
    Heap_Free(r5);
    // add r0, #0xc0
    // mvn r3, r3
    BgSetPosTextAndCommit(*((u32*)r4), 6, 3, 0xff);
    ToggleBgLayer(7, 0);
    GfGfx_EngineATogglePlanes(0x10, 1);
    GfGfx_EngineBTogglePlanes(0x10, 1);
    // add r0, #0xc0
    BgSetPosTextAndCommit(*((u32*)r4), 3, 3, 0);
    // add r0, #0xc8
    ov71_02246C6C(r4, 1);
    // add r1, #0xc4
    // str r0, [r1]
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, #0xd0
    // str r0, [sp, #8]
    // add r0, #0xc0
    ov71_02247000(*((u32*)r4), (0x12 << 6), (1 << 0xc), 1);
    // add r4, #0xcc
    // str r0, [r4]
}




void ov71_0224889C(void) {
    // add r0, #0xc8
    // add r0, #0xc4
    // add r0, #0xc0
    // add r0, #0xc0
    // add r0, #0xc0
    // add r4, #0xc0
}




void ov71_022488E4(void) {
    NNS_G3dInit();
    G3X_InitMtxStack();
    // and r2, r1
    // strh r2, [r0]
    // and r3, r2
    // strh r2, [r0]
    // and r2, r3
    // strh r2, [r0]
    // and r3, r2
    // strh r2, [r0]
    // and r2, r1
    // strh r1, [r0]
    G3X_SetEdgeColorTable(ov71_0224BD0C, (0x20 | *((u16*)0x04000060)), *((u16*)0x04000060), *((u16*)0x04000060));
    // str r1, [sp]
    G3X_SetClearColor(0x000043FF, 0, 0x00007FFF, 0x3f);
    // str r0, [r1]
    *((u32*)(0x04000540 + 0x40)) = 0xBFFF0000;
    GF_3DVramMan_InitFrameTexVramManager(1, 1);
    GF_3DVramMan_InitFramePlttVramManager((1 << 0xe), 1);
    GfGfx_EngineATogglePlanes(1, 1);
    // strh r2, [r1]
    ov71_0224744C(1, 0, 0, 0);
    // add r1, #0xd4
    // str r0, [r1]
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    // add r0, #0xd4
    ov71_02247610(*((u32*)r4), 0, 0x59, 0x1b);
    // add r1, #0xd8
    // str r0, [r1]
    *((u16*)(ov71_0224C0C4 + 4)) = 0x0000EBE0;
    *((u16*)(ov71_0224C0C4 + 6)) = 0;
    *((u16*)(ov71_0224C0C4 + 8)) = 0;
    // add r0, #0xd4
    ov71_0224780C(*((u32*)r4), ov71_0224C0C8);
    // add r4, #0xd8
    ov71_02247730(*((u32*)r4), (7 << 0xa));
}




void ov71_022489F8(void) {
}




void ov71_02248A08(void) {
    // add r0, #0xc
    ov71_022472C4(0x59, 0xb, 0xc);
    // add r0, sp, #0x60
    NNS_G2dInitImagePaletteProxy();
    // add r0, sp, #0x3c
    NNS_G2dInitImageProxy();
    // str r3, [sp]
    // str r2, [sp, #4]
    // str r3, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, sp, #0x3c
    // str r0, [sp, #0x10]
    GfGfxLoader_LoadImageMapping(0x59, 0xd, 1, 0);
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r3, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, sp, #0x3c
    // str r0, [sp, #0x10]
    GfGfxLoader_LoadImageMapping(0x59, 0xd, 1, 0);
    // str r0, [sp]
    // add r0, sp, #0x60
    // str r0, [sp, #4]
    GfGfxLoader_PartiallyLoadPalette(0x59, 0xe, 1, 0);
    // str r0, [sp]
    // add r0, sp, #0x60
    // str r0, [sp, #4]
    GfGfxLoader_PartiallyLoadPalette(0x59, 0xe, 2, 0);
    // str r0, [sp]
    // add r0, sp, #0x18
    // add r1, #0xc
    // add r2, sp, #0x3c
    // add r3, sp, #0x60
    ov71_02247320(1, r7);
    SetMTRNGSeed(0x035947D1);
    // str r0, [sp, #0x14]
    MTRandom(0);
    _u32_div_f(0xe8);
    // add r6, #0xc
    MTRandom();
    _u32_div_f((0x71 << 2));
    // str r0, [sp]
    // sub r5, #0x1c
    // str r0, [sp, #4]
    // add r1, sp, #0x18
    ov71_02247340(*((u32*)r7), r6, r1);
    *((u32*)(r4 + 0x1c)) = r0;
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r5, #0x38
    // add r1, sp, #0x18
    ov71_02247340(*((u32*)r7), r6, r5);
    *((u32*)(r4 + 0x20)) = r0;
    Sprite_SetAnimCtrlSeq(*((u32*)(r4 + 0x1c)), 0);
    Sprite_SetAnimCtrlSeq(*((u32*)(r4 + 0x20)), 1);
    Sprite_SetDrawFlag(*((u32*)(r4 + 0x1c)), 0);
    Sprite_SetDrawFlag(*((u32*)(r4 + 0x20)), 0);
    // ldr r0, [sp, #0x14]
    // add r4, #8
    // str r0, [sp, #0x14]
}




void ov71_02248B24(void) {
    // add r5, #8
    // add r6, #0xc
}




void ov71_02248B54(void) {
    // str r2, [r0, r1]
}




void ov71_02248B60(void) {
    // str r1, [r4, r0]
    // add r0, #0xc0
    // mvn r3, r3
    BgSetPosTextAndCommit(*((u32*)r1), 2, 3, 0xff);
    // add r4, #0xc0
    BgSetPosTextAndCommit(*((u32*)r4), 6, 3, 0);
    ToggleBgLayer(3, 0);
    ToggleBgLayer(7, 1);
    // strh r0, [r2]
    SysTask_Destroy(r5, *((u16*)0x04000304), 0x04000304);
}




void ov71_02248BBC(void) {
    *((u32*)(r2 + 4)) = r0;
    // str r1, [r0]
    // str r7, [r0, r1]
    // str r2, [sp]
    // str r7, [r0, r1]
    *((u32*)(r2 + 8)) = 0;
    Sprite_GetMatrixPtr(*((u32*)(r0 + 0x1c)), ((0x52 << 2) + 4));
    // ldmia r3!, {r0, r1}
    // add r2, #0x58
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // add r5, #8
    // add r6, #0xc
    // ldr r1, [sp]
    SysTask_CreateOnMainQueue(ov71_02248C24, 0, r0);
    // ldr r1, [sp]
    // str r0, [r1]
    // ldr r0, [sp]
    // ldr r0, [sp]
    Heap_Free(*((u32*)*((u32*)r0)), *((u32*)r1));
}




void ov71_02248C24(void) {
    // str r0, [r5, r1]
    // str r0, [r5, r1]
    // add r0, r5, r0
    // str r2, [r5, r0]
    // str r0, [sp, #4]
    // str r5, [sp]
    // add r7, #0x58
    // add r2, r2, r1
    // add r0, #0x5c
    // sub r1, r2, r1
    // str r1, [r0]
    // ldr r0, [sp]
    // add r0, r0, r4
    // add r0, r0, r4
    // add r0, r0, r4
    // add r2, #0x58
    // add r3, sp, #8
    // ldmia r2!, {r0, r1}
    // mov ip, r3
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // ldr r1, [sp, #0xc]
    // add r0, r1, r0
    // str r0, [sp, #0xc]
    // mov r1, ip
    // add r0, r0, r4
    // ldr r0, [sp]
    // add r6, #0xc
    // str r0, [sp]
    // ldr r0, [sp, #4]
    // add r4, #8
    // add r7, #0xc
    // str r0, [sp, #4]
}




void ov71_02248CF4(void) {
    // str r1, [r0]
}




void ov71_02248D0C(void) {
    Heap_Alloc(0x39, (0x17 << 4));
    // str r6, [r4]
    // add r6, #0xc0
    // str r1, [r4, r0]
    Bg_GetYpos(*((u32*)(r0 + (0x55 << 2))), 2);
    // str r1, [r4, r0]
    Bg_GetYpos(*((u32*)(r4 + ((0x56 << 2) - 4))), 6);
    // str r0, [r4, r1]
    // str r2, [r4, r0]
    // add r0, #8
    // str r2, [r4, r0]
    // add r0, #0xc
    // str r5, [r4, r0]
    // add r1, #0x10
    // str r2, [r4, r1]
    SysTask_CreateOnVBlankQueue(ov71_02248D80, r4, 0);
    // str r0, [r5]
    Heap_Free(r4);
}




void ov71_02248D80(void) {
    // sub r0, #0x44
    // add r1, r1, r0
    // str r1, [r4, r0]
    // sub r5, #0xc
    // add r0, r1, r0
    // str r0, [r4, r3]
    // sub r0, #0x10
    // sub r3, r5, r3
    // asr r3, r3, #0xc
    // add r3, #8
    // add r5, #0x10
    // sub r3, r6, r3
    // asr r3, r3, #0xc
    // add r0, #8
    // add r1, #8
    // add r1, r4, r1
}




void ov71_02248E04(void) {
    // str r2, [r1]
}




void ov71_02248E30(void) {
    // str r0, [sp]
    Heap_Alloc(0x39, 0x14);
    // str r0, [r4]
    *((u32*)(r0 + 8)) = (r7 << 0xc);
    // sub r0, r1, r0
    _s32_div_f(*((u32*)r0), r6);
    *((u32*)(r4 + 4)) = r0;
    // ldr r0, [sp]
    *((u32*)(r4 + 0xc)) = r6;
    *((u32*)(r4 + 0x10)) = r0;
    ov71_02247708(r5);
    SysTask_CreateOnMainQueue(ov71_02248E78, r4, 0);
}




void ov71_02248E78(void) {
    // add r1, r1, r0
    // str r1, [r4]
    // asr r1, r1, #0xc
    // asr r1, r1, #0xc
}




void ov71_02248EB4(void) {
    // add r4, #0xdc
    // add r0, #0xd8
    // add r1, #8
    ov71_022476B4(*((u32*)r0), r0);
    // add r0, #0xd8
    // add r1, #0x20
    ov71_022476D4(*((u32*)r5), r4);
    // add r3, #8
    // ldmia r3!, {r0, r1}
    // add r2, #0x14
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // add r0, #0xd4
    *((u32*)(r4 + 4)) = *((u32*)r5);
    // add r0, #0xd8
    // add r5, #0xdc
    // str r0, [r5]
    *((u32*)(r4 + 0x28)) = *((u32*)(r4 + 0xc));
    // sub r0, r0, r1
    _s32_div_f(0xFFFF8000, 0x1e, r4, r4);
    *((u32*)(r4 + 0x2c)) = r0;
    // add r0, #0x80
    // str r1, [r0]
    *((u32*)(r4 + 0x38)) = 0;
    *((u32*)(r4 + 0x3c)) = 0;
    *((u32*)(r4 + 0x40)) = 0;
    *((u32*)(r4 + 0x44)) = 0;
    // add r0, #0x54
    // strh r1, [r0]
    // add r0, #0x56
    // strh r2, [r0]
    // add r0, #0x5a
    // strh r1, [r0]
    *((u32*)(r4 + 0x7c)) = 0;
    // add r3, #0x5c
    // strh r0, [r3]
    // add r3, #0x5e
    // strh r0, [r3]
    // add r3, #0x60
    // strh r0, [r3]
    // add r3, #0x62
    // add r2, #8
    // strh r0, [r3]
    *((u32*)(r4 + 0x78)) = 0;
    ov71_02248F8C(r4, (0xd << 8), 0x1e, r4);
    ov71_02248FC8(r4, (0x29 << 0xc), (5 << 0xe), 0x1e);
    SysTask_CreateOnMainQueue(ov71_02249184, r4, 0);
}




void ov71_02248F8C(void) {
    // ldrsh r0, [r5, r0]
    // sub r0, r4, r0
    // add r1, #0x5a
    // strh r0, [r1]
    // ldrsh r1, [r5, r0]
    // ldrsh r0, [r5, r0]
    // add r1, r1, r0
    // add r0, #0x56
    // strh r1, [r0]
    // add r0, #0x56
    // strh r4, [r0]
    // add r0, #0x58
    // strh r4, [r0]
}




void ov71_02248FC8(void) {
    // sub r0, r4, r0
    // sub r0, r6, r0
    // add r0, r1, r0
    // add r0, r1, r0
}




void ov71_02249004(void) {
    // str r0, [sp]
    // add r1, r5, r0
    // ldrsh r0, [r1, r0]
    // sub r0, r6, r0
    // ldr r1, [sp]
    // add r1, r5, r1
    // add r1, #0x5e
    // strh r0, [r1]
    // add r0, r5, r1
    // add r0, #0x60
    // strh r6, [r0]
    // add r0, r5, r1
    // add r0, #0x62
    // strh r7, [r0]
}




void ov71_0224903C(void) {
    // ldrsh r1, [r5, r0]
    // ldrsh r0, [r5, r0]
    // add r1, r1, r0
    // add r0, #0x56
    // strh r1, [r0]
    // ldrsh r1, [r5, r0]
    // add r0, #0x56
    // strh r1, [r0]
    // ldrsh r1, [r5, r0]
    // ldrsh r0, [r5, r0]
    // add r1, r1, r0
    // add r0, #0x54
    // strh r1, [r0]
    // add r0, #0x54
    // sub r4, r4, r0
    // add r0, r1, r0
    // add r0, r1, r0
    // asr r1, r0, #0x1f
    // asr r3, r6, #0x1f
    // add r3, r0, r3
    // adc r1, r6
    // add r0, r2, r1
    // asr r1, r0, #0x1f
    // asr r3, r6, #0x1f
    // add r4, r0, r4
    // adc r1, r3
    // add r0, r2, r1
    // ldrsh r1, [r5, r0]
    // ldrsh r0, [r5, r0]
    // add r0, r1, r0
    // add r4, #0x62
    // add r4, #0x62
    // add r4, #0x62
    // strh r7, [r4]
    // add r4, #0x62
    // ldrsh r7, [r0, r6]
    // add r4, #0x5c
    // strh r7, [r4]
    // ldrsh r7, [r0, r1]
    // ldrsh r4, [r0, r2]
    // add r7, r7, r4
    // add r4, #0x5c
    // strh r7, [r4]
    // add r0, #8
    // ldrsh r1, [r5, r0]
    // ldrsh r0, [r5, r0]
    // add r0, r1, r0
    // ldrsh r1, [r5, r0]
    // ldrsh r0, [r5, r0]
    // add r0, r1, r0
    // ldrsh r1, [r5, r0]
    // ldrsh r0, [r5, r0]
    // add r0, r1, r0
}




void ov71_02249184(void) {
    // add r0, #0x80
    // add r0, r1, r0
    *((u32*)(r1 + 0x28)) = *((u32*)(r1 + 0x2c));
    *((u32*)(r1 + 0x18)) = *((u32*)(r1 + 0x2c));
    // add r0, #0x80
    // add r0, #0x80
    // str r1, [r0]
    // add r0, #0x80
    *((u32*)(r1 + 0x30)) = (2 << 8);
    *((u32*)(r1 + 0x2c)) = 0;
    ov71_02248FC8(r1, ((2 << 8) << 5), ((2 << 8) << 5), 0x3c);
    ov71_02249004(r4, 0, 0xFFFFF800, 0x1e);
    *((u32*)(r4 + 0x7c)) = 1;
    SysTask_SetFunc(r5, ov71_02249208);
    ov71_0224903C(r4);
    // add r1, #0x14
    ov71_022476C4(*((u32*)r4), r4);
    // add r4, #0x20
    ov71_022476EC(*((u32*)r4), r4);
}




void ov71_02249208(void) {
    // add r1, r1, r0
    // add r0, r0, r1
    // add r1, #0x14
    // add r1, #0x20
}




void ov71_02249254(void) {
}




void ov71_02249260(void) {
}




void ov71_0224926C(void) {
    SysTask_GetData();
    *((u32*)(r0 + 0x78)) = 0;
    // add r0, sp, #0
    *((u16*)(r0 + 4)) = 0;
    *((u16*)(r0 + 2)) = *((u16*)(r0 + 4));
    // strh r1, [r0]
    ov71_0224782C(*((u32*)(r0 + 4)), 1);
    // add r1, sp, #0
    ov71_0224780C(*((u32*)(r4 + 4)));
    *((u32*)(r4 + 0x2c)) = 0x000058CC;
    // sub r0, r1, r0
    *((u32*)(r4 + 0x28)) = (2 << 0x12);
    // add r0, #0x80
    // str r3, [r0]
    *((u32*)(r4 + 0x18)) = *((u32*)(r4 + 0x28));
    ov71_02248FC8(r4, 0, 0, 0x14);
    // ldrsh r2, [r4, r2]
    // neg r2, r2
    ov71_02249004(r4, 1, 0x56, 0x1e);
    // add r2, #0xfe
    ov71_02249004(r4, 2, 2, 0x32);
    ov71_02247730(*((u32*)r4), (2 << 0xc));
    ov71_02247704(*((u32*)r4), 1);
    SysTask_SetFunc(r5, ov71_022492FC);
}




void ov71_022492FC(void) {
    ov71_0224903C(r1);
    // add r0, #0x80
    // add r0, r1, r0
    *((u32*)(r4 + 0x28)) = *((u32*)(r4 + 0x2c));
    *((u32*)(r4 + 0x18)) = *((u32*)(r4 + 0x2c));
    // add r0, #0x80
    // add r0, #0x80
    // str r1, [r0]
    // add r0, #0x80
    SysTask_SetFunc(r5, ov71_02249358);
    // add r1, #0x14
    ov71_022476C4(*((u32*)r4), r4);
    // add r4, #0x20
    ov71_022476EC(*((u32*)r4), r4);
}




void ov71_02249358(void) {
    ov71_0224903C(r1);
    // add r0, #0x80
    // add r0, #0x80
    // str r1, [r0]
    // add r0, #0x80
    // sub r0, r0, r1
    _s32_div_f(0xFFFC5800, 0x35);
    *((u32*)(r4 + 0x2c)) = r0;
    // add r0, #0x80
    // str r1, [r0]
    SysTask_SetFunc(r5, ov71_022493B8);
    // add r1, #0x14
    ov71_022476C4(*((u32*)r4), r4);
    // add r4, #0x20
    ov71_022476EC(*((u32*)r4), r4);
}




void ov71_022493B8(void) {
    ov71_0224903C(r1);
    // add r0, #0x80
    // add r0, r1, r0
    *((u32*)(r4 + 0x28)) = *((u32*)(r4 + 0x2c));
    *((u32*)(r4 + 0x18)) = *((u32*)(r4 + 0x2c));
    // add r0, #0x80
    // add r0, #0x80
    // str r1, [r0]
    // add r0, #0x80
    SysTask_SetFunc(r5, ov71_02249414);
    // add r1, #0x14
    ov71_022476C4(*((u32*)r4), r4);
    // add r4, #0x20
    ov71_022476EC(*((u32*)r4), r4);
}




void ov71_02249414(void) {
    ov71_0224903C(r1);
    // add r0, #0x80
    // add r0, #0x80
    // str r1, [r0]
    // add r0, #0x80
    *((u32*)(r4 + 0x2c)) = (2 << 0x10);
    SysTask_SetFunc(r5, ov71_02249460);
    // add r1, #0x14
    ov71_022476C4(*((u32*)r4), r4);
    // add r4, #0x20
    ov71_022476EC(*((u32*)r4), r4);
}




void ov71_02249460(void) {
    // add r0, r1, r0
    // add r1, #0x14
    // add r1, #0x20
}




void ov71_022494A0(void) {
    // str r5, [r4]
    // add r0, #0x34
}




void ov71_022494D0(void) {
    // add r0, #0x34
}




void ov71_02249500(void) {
    // blx r2
    // str r0, [r4]
    *((u32*)(r0 + 4)) = 0;
    ov71_02249538(r0, (r0 + 4), *((u32*)(ov71_0224BD7C + (*((u32*)r1) << 2))), (*((u32*)r1) << 2));
}




void ov71_02249538(void) {
}




void ov71_02249558(void) {
    ov71_02249670();
    ov71_022497E0(r4);
    ov71_022498F0(r4);
    *((u32*)(r4 + 0xc)) = 0;
    SysTask_CreateOnVWaitQueue(ov71_02249C98, r4, 0);
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 1, 1, 0x00007FFF);
}




void ov71_022495A0(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _022495BA: ; jump table
    *((u32*)(r0 + 8)) = 0;
    // str r0, [r4]
    *((u32*)(r0 + 8)) = (*((u32*)(r0 + 8)) + 1);
    PlaySE(0x000006AB);
    // add r1, #0x34
    ov71_022499A4(r5, r5);
    ov71_02247704(*((u32*)(r5 + 0x2c)), 1);
    // str r0, [r4]
    // add r0, #0x34
    ov71_02249A50(r5);
    PlaySE(0x000006AC);
    Sprite_SetAnimCtrlSeq(*((u32*)(r5 + 0x20)), 3);
    Sprite_SetDrawFlag(*((u32*)(r5 + 0x20)), 1);
    // str r0, [r4]
    Sprite_IsAnimated(*((u32*)(r5 + 0x20)));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 0, 0, 0x00007FFF);
    // str r0, [r4]
    IsPaletteFadeFinished((*((u32*)r4) + 1));
}




void ov71_02249670(void) {
    GfGfx_SetBanks(ov71_0224BDC0);
    // and r0, r1
    // strh r0, [r2]
    SetBothScreensModesAndDisable(ov71_0224BD84, *((u16*)0x04000304), 0x04000304);
    InitBgFromTemplate(*((u32*)(r4 + 0x24)), 3, ov71_0224BDA4, 0);
    InitBgFromTemplate(*((u32*)(r4 + 0x24)), 7, ov71_0224BDA4, 0);
    ov71_022473A0(*((u32*)r4));
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _022496BA: ; jump table
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x10]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharData(0x59, 0x19, *((u32*)(r4 + 0x24)), 3);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharData(0x59, r7, *((u32*)(r4 + 0x24)), 7);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r1, [sp, #0x10]
    GfGfxLoader_LoadScrnData(0x59, *((u32*)(r4 + 0x24)), 3);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r1, [sp, #0x10]
    GfGfxLoader_LoadScrnData(0x59, *((u32*)(r4 + 0x24)), 7);
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    GfGfxLoader_GXLoadPalWithSrcOffset(0x59, r6, 0, r5);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    GfGfxLoader_GXLoadPalWithSrcOffset(0x59, r6, 4, r5);
    // add r3, #0xfd
    BgSetPosTextAndCommit(*((u32*)(r4 + 0x24)), 3, 3, 3);
    BgSetPosTextAndCommit(*((u32*)(r4 + 0x24)), 7, 3, 0);
    GfGfx_EngineATogglePlanes(0x10, 1);
    GfGfx_EngineBTogglePlanes(0x10, 1);
}




void ov71_022497C8(void) {
}




void ov71_022497E0(void) {
    NNS_G3dInit();
    G3X_InitMtxStack();
    // and r2, r1
    // strh r2, [r0]
    // and r3, r2
    // strh r2, [r0]
    // and r2, r3
    // strh r2, [r0]
    // and r3, r2
    // strh r2, [r0]
    // and r2, r1
    // strh r1, [r0]
    G3X_SetEdgeColorTable(ov71_0224BD94, (0x20 | *((u16*)0x04000060)), *((u16*)0x04000060), *((u16*)0x04000060));
    // str r1, [sp]
    G3X_SetClearColor(0x000043FF, 0, 0x00007FFF, 0x3f);
    // str r0, [r1]
    *((u32*)(0x04000540 + 0x40)) = 0xBFFF0000;
    GF_3DVramMan_InitFrameTexVramManager(1, 1);
    GF_3DVramMan_InitFramePlttVramManager((1 << 0xe), 1);
    GfGfx_EngineATogglePlanes(1, 1);
    // strh r2, [r1]
    ov71_0224744C(1, 0, 0, 0);
    *((u32*)(r4 + 0x28)) = r0;
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    ov71_02247610(*((u32*)(r4 + 0x28)), 0, 0x59, 0x1b);
    *((u32*)(r4 + 0x2c)) = r0;
    // add r0, sp, #0x10
    // strh r1, [r0]
    *((u16*)(r0 + 2)) = 0;
    *((u16*)(r0 + 4)) = 0;
    // add r1, sp, #0x10
    ov71_0224780C(*((u32*)(r4 + 0x28)), 0);
    ov71_0224783C(*((u32*)(r4 + 0x28)), 0x000007D2);
    // add r1, sp, #0x18
    ov71_022477EC(*((u32*)(r4 + 0x28)));
}




void ov71_022498E0(void) {
}




void ov71_022498F0(void) {
    // add r0, #0x10
    // add r0, sp, #0x5c
    // add r0, sp, #0x38
    // str r3, [sp]
    // str r2, [sp, #4]
    // str r3, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, sp, #0x38
    // str r0, [sp, #0x10]
    // str r0, [sp]
    // add r0, sp, #0x5c
    // str r0, [sp, #4]
    // str r0, [sp]
    // add r0, sp, #0x14
    // add r1, #0x10
    // add r2, sp, #0x38
    // add r3, sp, #0x5c
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r1, sp, #0x14
}




void ov71_02249970(void) {
    // add r4, #0x10
}




void ov71_02249988(void) {
}




void ov71_02249990(void) {
}




void ov71_022499A4(void) {
    // str r0, [r4]
    *((u32*)(r1 + 0xc)) = *((u32*)(r0 + 0x2c));
    *((u32*)(r1 + 8)) = *((u32*)(r0 + 0x28));
    *((u32*)(r1 + 0x10)) = 0;
    *((u32*)(r1 + 0x14)) = 0xFFF50E00;
    *((u32*)(r1 + 0x18)) = (0xe2 << 0xc);
    // add r1, #0x6c
    // strh r2, [r1]
    // add r1, #0x6e
    // strh r2, [r1]
    *((u32*)(r1 + 0x3c)) = 0x000134C4;
    *((u32*)(r1 + 0x40)) = 0xFFFF4D56;
    *((u32*)(r1 + 0x60)) = 0;
    *((u32*)(r1 + 0x64)) = 0;
    *((u32*)(r1 + 0x68)) = 0;
    *((u16*)(r1 + 0x34)) = (2 << 0xc);
    *((u16*)(r1 + 0x36)) = 0xFFFFE000;
    *((u16*)(r1 + 0x38)) = 0;
    // add r1, #0x34
    ov71_022476EC(*((u32*)(r1 + 0xc)), r1, 0xFFFFF550);
    *((u32*)(r4 + 0x54)) = (1 << 0xc);
    *((u32*)(r4 + 0x44)) = (0x4a << 0xa);
    *((u32*)(r4 + 0x48)) = (0x63 << 0xa);
    *((u32*)(r4 + 0x5c)) = 0;
    ov71_02249A98(r4);
    // add r1, #0x28
    ov71_022476C4(*((u32*)(r4 + 0xc)), r4);
    // add r1, #0x34
    ov71_022476D4(*((u32*)(r4 + 0xc)), r4);
    SysTask_CreateOnMainQueue(ov71_02249B64, r4, 0);
    *((u32*)(r4 + 4)) = r0;
}




void ov71_02249A50(void) {
    // cmp r0, #0
    // bne _02249A5A
}




void ov71_02249A60(void) {
    // ldr r4, [sp, #0x18]
    // sub r0, r1, r0
    // sub r0, r6, r0
    // sub r0, r7, r0
    // ldr r0, [sp, #0x18]
}




void ov71_02249A98(void) {
    // add r0, #0x6c
    // sub r4, r4, r0
    // ldrsh r1, [r5, r0]
    // ldrsh r0, [r5, r0]
    // add r1, r1, r0
    // add r0, #0x6c
    // strh r1, [r0]
    // add r0, r1, r0
    // add r0, r1, r0
    // add r1, r1, r0
    // asr r1, r0, #0x1f
    // asr r3, r6, #0x1f
    // add r2, r0, r2
    // adc r1, r3
    // asr r1, r0, #0x1f
    // asr r3, r6, #0x1f
    // add r2, r0, r2
    // adc r1, r3
    // ldrsh r2, [r5, r0]
    // add r0, r2, r0
    // add r1, #0x34
    // add r5, #0x28
    // add r0, #0x1c
    // add r1, #0x10
}




void ov71_02249B64(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _02249B88: ; jump table
    // add r0, r1, r0
    // add r0, r1, r0
    // add r1, #0x28
    // add r0, r1, r0
    // add r0, r1, r0
    // add r4, #0x28
    // add r0, r1, r0
    // add r0, r1, r0
    // add r1, #0x28
    // str r0, [sp]
    // add r1, #0x28
}




void ov71_02249C90(void) {
}




void ov71_02249C98(void) {
    *((u32*)(r1 + 0xc)) = 0;
    // add r0, sp, #0
    // strh r1, [r0]
    *((u16*)(*((u32*)(r1 + 0xc)) + 2)) = 0;
    *((u16*)(*((u32*)(r1 + 0xc)) + 4)) = 0;
    BgSetPosTextAndCommit(*((u32*)(r1 + 0x24)), 3, 3, 0);
    // add r3, #0xfd
    BgSetPosTextAndCommit(*((u32*)(r4 + 0x24)), 7, 3, 3);
    // add r1, sp, #0
    ov71_0224781C(*((u32*)(r4 + 0x28)));
    // strh r0, [r2]
    SysTask_Destroy(r5, *((u16*)0x04000304), 0x04000304);
}




void ov71_02249CF0(void) {
    // str r5, [r4]
}




void ov71_02249D14(void) {
}




void ov71_02249D28(void) {
    // blx r2
    // str r0, [r4]
    *((u32*)(r0 + 4)) = 0;
}




void ov71_02249D58(void) {
    ov71_02249E6C();
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 1, 1, 0x00007FFF);
}




void ov71_02249D80(void) {
    IsPaletteFadeFinished(*((u32*)r1));
    *((u32*)(r5 + 0x10)) = 0xFFE80000;
    *((u32*)(r5 + 0x14)) = (5 << 0x10);
    *((u32*)(r5 + 0x18)) = 0x00005999;
    *((u32*)(r5 + 0x1c)) = 0xFFFFDDDE;
    *((u32*)(r5 + 8)) = 0x3c;
    *((u32*)(r5 + 0x20)) = 0;
    SysTask_CreateOnVBlankQueue(ov71_02249E24, r5, 0);
    // str r0, [r4]
    PlaySE(0x000006A8);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 0, 0, 0x00007FFF);
    // str r0, [r4]
    IsPaletteFadeFinished((*((u32*)r4) + 1));
}




void ov71_02249E24(void) {
    // add r0, r1, r0
    // add r2, r1, r0
    // asr r1, r1, #0xc
    // asr r2, r2, #0xc
    // mvn r1, r1
}




void ov71_02249E6C(void) {
    GfGfx_SetBanks(ov71_0224BE54);
    // strh r0, [r2]
    SetBothScreensModesAndDisable(ov71_0224BDF0, *((u16*)0x04000304), 0x04000304);
    InitBgFromTemplate(*((u32*)(r4 + 0xc)), 1, ov71_0224BE00, 0);
    InitBgFromTemplate(*((u32*)(r4 + 0xc)), 5, ov71_0224BE00, 0);
    InitBgFromTemplate(*((u32*)(r4 + 0xc)), 2, ov71_0224BE1C, 0);
    InitBgFromTemplate(*((u32*)(r4 + 0xc)), 3, ov71_0224BE38, 0);
    InitBgFromTemplate(*((u32*)(r4 + 0xc)), 7, ov71_0224BE38, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharData(0x59, 0x13, *((u32*)(r4 + 0xc)), 3);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharData(0x59, 0x13, *((u32*)(r4 + 0xc)), 7);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnData(0x59, 0x12, *((u32*)(r4 + 0xc)), 3);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnData(0x59, 0x12, *((u32*)(r4 + 0xc)), 7);
    // str r0, [sp]
    // str r0, [sp, #4]
    GfGfxLoader_GXLoadPal(0x59, 0x14, 0, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    GfGfxLoader_GXLoadPal(0x59, 0x14, 4, 0);
    // str r0, [sp]
    BG_FillCharDataRange(*((u32*)(r4 + 0xc)), 1, 0, 1);
    // str r0, [sp]
    BG_FillCharDataRange(*((u32*)(r4 + 0xc)), 5, 0, 1);
    // str r0, [sp]
    BG_FillCharDataRange(*((u32*)(r4 + 0xc)), 2, 0, 1);
    // str r1, [sp]
    ov71_02247124(*((u32*)r4), 0, 1, 0xe);
    // str r1, [sp]
    ov71_02247124(*((u32*)r4), 0, 5, 0xe);
    // str r0, [sp]
    ov71_02247124(*((u32*)r4), 1, 2, 0xf);
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    FillBgTilemapRect(*((u32*)(r4 + 0xc)), 1, 0xc8, 0);
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    FillBgTilemapRect(*((u32*)(r4 + 0xc)), 5, 0xc8, 0);
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    FillBgTilemapRect(*((u32*)(r4 + 0xc)), 2, 0xc8, 0);
    // str r0, [sp]
    // str r1, [sp, #4]
    ov71_02247230(*((u32*)r4), 0, 1, 0xe);
    // str r0, [sp]
    // str r1, [sp, #4]
    ov71_02247230(*((u32*)r4), 0, 5, 0xe);
    // str r2, [sp]
    // str r0, [sp, #4]
    ov71_02247230(*((u32*)r4), 1, 2, 0xf);
    BgCommitTilemapBufferToVram(*((u32*)(r4 + 0xc)), 1);
    BgCommitTilemapBufferToVram(*((u32*)(r4 + 0xc)), 5);
    BgCommitTilemapBufferToVram(*((u32*)(r4 + 0xc)), 2);
    ov71_0224A0B8(*((u32*)(r4 + 0xc)), 0x50, 0xFFFFFE80);
    GfGfx_EngineATogglePlanes(0x10, 1);
    GfGfx_EngineBTogglePlanes(0x10, 1);
}




void ov71_0224A080(void) {
}




void ov71_0224A0B8(void) {
    // and r4, r3
    // and r3, r6
    BgSetPosTextAndCommit(2, 3, 0x000001FF);
    BgSetPosTextAndCommit(r5, 1, 3, r4);
    // add r4, #0xc0
    BgSetPosTextAndCommit(r5, 5, 3, r4);
}




void ov71_0224A0F0(void) {
    Heap_Alloc(0x39, 0xb0);
    // str r5, [r4]
    *((u32*)(r0 + 4)) = 0;
    ov71_02247384(r5);
    *((u32*)(r4 + 0x24)) = r0;
    *((u32*)(r4 + 0x28)) = 0;
    *((u32*)(r4 + 0xc)) = 0;
    // add r0, #0x34
    ov71_0224A5A8(r4);
    Main_SetVBlankIntrCB(ov71_0224A8B0, r4);
}




void ov71_0224A12C(void) {
    // add r0, #0x34
}




void ov71_0224A15C(void) {
    // blx r2
    // str r0, [r4]
    *((u32*)(r0 + 4)) = 0;
}




void ov71_0224A18C(void) {
    ov71_0224A278();
    ov71_0224A3F0(r4);
    ov71_0224A510(r4);
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 1, 1, 0x00007FFF);
}




void ov71_0224A1C4(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0224A1DE: ; jump table
    IsPaletteFadeFinished((*((u16*)(*((u32*)r1) + 6)) << 0x10));
    Sprite_SetAnimCtrlSeq(*((u32*)(r5 + 0x20)), 3);
    Sprite_SetDrawFlag(*((u32*)(r5 + 0x20)), 1);
    // str r0, [r4]
    Sprite_IsAnimated(*((u32*)(r5 + 0x20)));
    PlaySE(0x000006AA);
    // add r1, #0x34
    ov71_0224A5C4(r5, r5);
    ov71_02247704(*((u32*)(r5 + 0x2c)), 1);
    // str r0, [r4]
    // add r5, #0x34
    ov71_0224A684(r5);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 0, 0, 0x00007FFF);
    // str r0, [r4]
    IsPaletteFadeFinished((*((u32*)r4) + 1));
}




void ov71_0224A278(void) {
    GfGfx_SetBanks(ov71_0224BEC0);
    // strh r0, [r2]
    SetBothScreensModesAndDisable(ov71_0224BE84, *((u16*)0x04000304), 0x04000304);
    InitBgFromTemplate(*((u32*)(r4 + 0x24)), 3, ov71_0224BEA4, 0);
    InitBgFromTemplate(*((u32*)(r4 + 0x24)), 7, ov71_0224BEA4, 0);
    ov71_022473A0(*((u32*)r4));
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0224A2C2: ; jump table
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x10]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharData(0x59, 0x19, *((u32*)(r4 + 0x24)), 3);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharData(0x59, r7, *((u32*)(r4 + 0x24)), 7);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r1, [sp, #0x10]
    GfGfxLoader_LoadScrnData(0x59, *((u32*)(r4 + 0x24)), 3);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r1, [sp, #0x10]
    GfGfxLoader_LoadScrnData(0x59, *((u32*)(r4 + 0x24)), 7);
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    GfGfxLoader_GXLoadPalWithSrcOffset(0x59, r6, 0, r5);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    GfGfxLoader_GXLoadPalWithSrcOffset(0x59, r6, 4, r5);
    BgSetPosTextAndCommit(*((u32*)(r4 + 0x24)), 3, 3, 0);
    // add r3, #0xfd
    BgSetPosTextAndCommit(*((u32*)(r4 + 0x24)), 7, 3, 3);
    GfGfx_EngineATogglePlanes(0x10, 1);
    GfGfx_EngineBTogglePlanes(0x10, 1);
    sub_0203A880();
    sub_0203A948(1, 0x38);
}




void ov71_0224A3D8(void) {
}




void ov71_0224A3F0(void) {
    NNS_G3dInit();
    G3X_InitMtxStack();
    // and r2, r1
    // strh r2, [r0]
    // and r3, r2
    // strh r2, [r0]
    // and r2, r3
    // strh r2, [r0]
    // and r3, r2
    // strh r2, [r0]
    // and r2, r1
    // strh r1, [r0]
    G3X_SetEdgeColorTable(ov71_0224BE94, (0x20 | *((u16*)0x04000060)), *((u16*)0x04000060), *((u16*)0x04000060));
    // str r1, [sp]
    G3X_SetClearColor(0x000043FF, 0, 0x00007FFF, 0x3f);
    // str r0, [r1]
    *((u32*)(0x04000540 + 0x40)) = 0xBFFF0000;
    GF_3DVramMan_InitFrameTexVramManager(1, 1);
    GF_3DVramMan_InitFramePlttVramManager((1 << 0xe), 1);
    GfGfx_EngineATogglePlanes(1, 1);
    // strh r2, [r1]
    ov71_0224744C(1, 0, 0, 0);
    *((u32*)(r4 + 0x28)) = r0;
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    ov71_02247610(*((u32*)(r4 + 0x28)), 0, 0x59, 0x1b);
    *((u32*)(r4 + 0x2c)) = r0;
    // add r0, sp, #0x10
    // strh r1, [r0]
    *((u16*)(r0 + 2)) = 0;
    *((u16*)(r0 + 4)) = 0;
    // add r1, sp, #0x10
    ov71_0224780C(*((u32*)(r4 + 0x28)), 0);
    // add r0, sp, #0x10
    // strh r1, [r0]
    // add r1, sp, #0x10
    ov71_0224781C(*((u32*)(r4 + 0x28)), 0x00001150);
    ov71_0224783C(*((u32*)(r4 + 0x28)), 0x000007D2);
    // add r1, sp, #0x18
    ov71_022477EC(*((u32*)(r4 + 0x28)));
}




void ov71_0224A500(void) {
}




void ov71_0224A510(void) {
    // add r0, #0x10
    // add r0, sp, #0x5c
    // add r0, sp, #0x38
    // str r3, [sp]
    // str r2, [sp, #4]
    // str r3, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, sp, #0x38
    // str r0, [sp, #0x10]
    // str r0, [sp]
    // add r0, sp, #0x5c
    // str r0, [sp, #4]
    // str r0, [sp]
    // add r0, sp, #0x14
    // add r1, #0x10
    // add r2, sp, #0x38
    // add r3, sp, #0x5c
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r1, sp, #0x14
}




void ov71_0224A590(void) {
    // add r4, #0x10
}




void ov71_0224A5A8(void) {
}




void ov71_0224A5B0(void) {
}




void ov71_0224A5C4(void) {
    // str r0, [r4]
    *((u32*)(r1 + 0xc)) = *((u32*)(r0 + 0x2c));
    *((u32*)(r1 + 8)) = *((u32*)(r0 + 0x28));
    *((u32*)(r1 + 0x10)) = 0;
    *((u32*)(r1 + 0x14)) = 0x003D6C00;
    *((u32*)(r1 + 0x18)) = 0xFFE44000;
    // add r1, #0x78
    // strh r2, [r1]
    // add r1, #0x7a
    // strh r2, [r1]
    *((u32*)(r1 + 0x3c)) = 0xFFFEF2C6;
    *((u32*)(r1 + 0x40)) = 0x0000936D;
    *((u32*)(r1 + 0x6c)) = 0;
    *((u32*)(r1 + 0x70)) = 0;
    *((u32*)(r1 + 0x74)) = 0;
    *((u16*)(r1 + 0x34)) = (2 << 0xc);
    *((u16*)(r1 + 0x36)) = 0xFFFFE000;
    *((u16*)(r1 + 0x38)) = 0;
    // add r1, #0x34
    ov71_022476EC(*((u32*)(r1 + 0xc)), r1, 0xFFFFF550);
    *((u32*)(r4 + 0x5c)) = (2 << 8);
    *((u32*)(r4 + 0x44)) = ((2 << 8) << 2);
    *((u32*)(r4 + 0x48)) = ((2 << 8) << 2);
    *((u32*)(r4 + 0x68)) = 0;
    // str r0, [sp]
    ov71_0224A694(r4, (0x4a << 0xa), (0x63 << 0xa), ((2 << 8) << 3));
    ov71_0224A6D8(r4);
    // add r1, #0x28
    ov71_022476C4(*((u32*)(r4 + 0xc)), r4);
    // add r1, #0x34
    ov71_022476D4(*((u32*)(r4 + 0xc)), r4);
    SysTask_CreateOnMainQueue(ov71_0224A7D0, r4, 0);
    *((u32*)(r4 + 4)) = r0;
}




void ov71_0224A684(void) {
    // cmp r0, #0
    // bne _0224A68E
}




void ov71_0224A694(void) {
    // ldr r0, [sp, #0x18]
    // str r0, [sp]
    // ldr r1, [sp]
    // sub r0, r4, r0
    // ldr r1, [sp]
    // sub r0, r6, r0
    // ldr r1, [sp]
    // sub r0, r7, r0
    // ldr r0, [sp, #0x18]
}




void ov71_0224A6D8(void) {
    // add r0, #0x78
    _s32_div_f(*((u16*)r0), 0xb6);
    // sub r4, r4, r0
    // ldrsh r1, [r5, r0]
    // ldrsh r0, [r5, r0]
    // sub r1, r1, r0
    // add r0, #0x78
    // strh r1, [r0]
    *((u32*)(r5 + 0x68)) = (*((u32*)(r5 + 0x68)) - 1);
    // add r0, r1, r0
    *((u32*)(r5 + 0x44)) = *((u32*)(r5 + 0x4c));
    // add r0, r1, r0
    *((u32*)(r5 + 0x48)) = *((u32*)(r5 + 0x50));
    // add r0, r1, r0
    *((u32*)(r5 + 0x44)) = *((u32*)(r5 + 0x54));
    *((u32*)(r5 + 0x48)) = *((u32*)(r5 + 0x58));
    *((u32*)(r5 + 0x5c)) = *((u32*)(r5 + 0x64));
    ov71_02247730(*((u32*)(r5 + 0xc)), *((u32*)(r5 + 0x5c)));
    GF_CosDegNoWrap(((r4 << 0x10) >> 0x10));
    // asr r1, r0, #0x1f
    // asr r3, r6, #0x1f
    _ll_mul(r6);
    // add r2, r0, r2
    // adc r1, r3
    *((u32*)(r5 + 0x1c)) = (((2 << 0xa) >> 0xc) | (r1 << 0x14));
    GF_SinDegNoWrap(((r4 << 0x10) >> 0x10), (((2 << 0xa) >> 0xc) | (r1 << 0x14)), (2 << 0xa), 0);
    // asr r1, r0, #0x1f
    // asr r3, r6, #0x1f
    _ll_mul(r6);
    // add r2, r0, r2
    // adc r1, r3
    *((u32*)(r5 + 0x20)) = (((2 << 0xa) >> 0xc) | (r1 << 0x14));
    *((u32*)(r5 + 0x24)) = 0;
    // ldrsh r2, [r5, r0]
    // sub r0, r2, r0
    *((u16*)(r5 + 0x34)) = (3 << 8);
    // add r1, #0x34
    ov71_022476EC(*((u32*)(r5 + 0xc)), r5, (2 << 0xa), 0);
    // add r5, #0x28
    // add r0, #0x1c
    // add r1, #0x10
    VEC_Add(r5, r5, r5);
    // add r2, #0x10
    // ldmia r2!, {r0, r1}
    // add r5, #0x28
    // stmia r5!, {r0, r1}
    // str r0, [r5]
}




void ov71_0224A7D0(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0224A7F0: ; jump table
    // add r1, #0x28
    // add r0, r1, r0
    // add r0, r1, r0
    // add r4, #0x28
    // add r0, r1, r0
    // add r0, r1, r0
    // add r1, #0x28
}




void ov71_0224A8A8(void) {
}




void ov71_0224A8B0(void) {
    G3X_Reset(*((u32*)(r0 + 0x28)));
    ov71_022474CC(*((u32*)(r4 + 0x28)));
    RequestSwap3DBuffers(0, 0);
    // add r0, sp, #0
    // strh r1, [r0]
    *((u16*)(*((u32*)(r4 + 0xc)) + 2)) = 0;
    *((u16*)(*((u32*)(r4 + 0xc)) + 4)) = 0;
    // add r3, #0xfd
    BgSetPosTextAndCommit(*((u32*)(r4 + 0x24)), 3, 3, 3);
    BgSetPosTextAndCommit(*((u32*)(r4 + 0x24)), 7, 3, 0);
    // add r1, sp, #0
    ov71_0224781C(*((u32*)(r4 + 0x28)));
    // and r0, r1
    // strh r0, [r2]
    *((u32*)(r4 + 0xc)) = 0;
}




void ov71_0224A920(void) {
    // str r5, [r4]
}




void ov71_0224A954(void) {
}




void ov71_0224A98C(void) {
    // blx r2
    // str r0, [r4]
    *((u32*)(r0 + 4)) = 0;
    ov71_0224A9C4(r0, (r0 + 4), *((u32*)(ov71_0224BEF0 + (*((u32*)r1) << 2))), (*((u32*)r1) << 2));
}




void ov71_0224A9C4(void) {
    // ldrsh r1, [r4, r0]
    // add r0, r1, r0
    // add r1, #0x28
}




void ov71_0224A9F8(void) {
    ov71_0224AB7C();
    ov71_0224ADE4(r4);
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 1, 1, 0x00007FFF);
}




void ov71_0224AA28(void) {
    // add r2, r1, r1
    // add r2, pc
    // asr r2, r2, #0x10
    // add pc, r2
    // _0224AA40: ; jump table
    // add r4, #0x30
    // str r0, [r5]
    // add r4, #0x34
    // str r0, [r5]
    // str r0, [r5]
    // add r0, #0x14
    // mvn r1, r1
    // str r0, [r5]
    // add r0, #0x38
    // str r0, [sp]
    // str r0, [r5]
    // str r0, [r5]
}




void ov71_0224AAF8(void) {
    // str r0, [sp]
    // str r3, [sp, #4]
    // add r0, #0x1c
    // str r0, [sp, #8]
    // str r0, [r4]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [r4]
}




void ov71_0224AB7C(void) {
    GfGfx_SetBanks(ov71_0224BF54);
    // strh r0, [r2]
    SetBothScreensModesAndDisable(ov71_0224BEFC, *((u16*)0x04000304), 0x04000304);
    InitBgFromTemplate(*((u32*)(r4 + 0xc)), 2, ov71_0224BF1C, 1);
    InitBgFromTemplate(*((u32*)(r4 + 0xc)), 6, ov71_0224BF1C, 1);
    OS_DisableInterrupts();
    InitBgFromTemplate(*((u32*)(r4 + 0xc)), 3, ov71_0224BF38, 2);
    InitBgFromTemplate(*((u32*)(r4 + 0xc)), 7, ov71_0224BF38, 2);
    OS_RestoreInterrupts(r5);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharData(0x59, 2, *((u32*)(r4 + 0xc)), 2);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharData(0x59, 2, *((u32*)(r4 + 0xc)), 6);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnData(0x59, 1, *((u32*)(r4 + 0xc)), 2);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnData(0x59, 1, *((u32*)(r4 + 0xc)), 6);
    ov71_022473A0(*((u32*)r4));
    // str r0, [sp]
    // str r0, [sp, #4]
    GfGfxLoader_GXLoadPal(0x59, 3, 0, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    GfGfxLoader_GXLoadPal(0x59, 3, 4, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    GfGfxLoader_GXLoadPalWithSrcOffset(0x59, 3, 0, *((u16*)(ov71_0224BEE8 + (r5 << 1))));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    GfGfxLoader_GXLoadPalWithSrcOffset(0x59, 3, 4, r5);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharData(0x59, 5, *((u32*)(r4 + 0xc)), 3);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharData(0x59, 5, *((u32*)(r4 + 0xc)), 7);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnData(0x59, 4, *((u32*)(r4 + 0xc)), 3);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnData(0x59, 4, *((u32*)(r4 + 0xc)), 7);
    Heap_Alloc(0x39, 0x60);
    MIi_CpuClear32(0, r0, 0x60);
    DC_FlushRange(r5, 0x60);
    GX_BeginLoadBGExtPltt();
    GXS_BeginLoadBGExtPltt();
    GX_LoadBGExtPltt(r5, (6 << 0xc), 0x60);
    GXS_LoadBGExtPltt(r5, (6 << 0xc), 0x60);
    GX_EndLoadBGExtPltt();
    GXS_EndLoadBGExtPltt();
    Heap_Free(r5);
    BgSetPosTextAndCommit(*((u32*)(r4 + 0xc)), 2, 3, 0xFFFFFE80);
    // sub r3, #0xc3
    BgSetPosTextAndCommit(*((u32*)(r4 + 0xc)), 6, 3, 3);
    BgSetPosTextAndCommit(*((u32*)(r4 + 0xc)), 3, 3, 0x43);
    ToggleBgLayer(7, 0);
    GfGfx_EngineATogglePlanes(0x10, 1);
    GfGfx_EngineBTogglePlanes(0x10, 1);
}




void ov71_0224ADB0(void) {
}




void ov71_0224ADE4(void) {
    NNS_G3dInit();
    G3X_InitMtxStack();
    // and r2, r1
    // strh r2, [r0]
    // and r3, r2
    // strh r2, [r0]
    // and r2, r3
    // strh r2, [r0]
    // and r3, r2
    // strh r2, [r0]
    // and r2, r1
    // strh r1, [r0]
    G3X_SetEdgeColorTable(ov71_0224BF0C, (0x20 | *((u16*)0x04000060)), *((u16*)0x04000060), *((u16*)0x04000060));
    // str r1, [sp]
    G3X_SetClearColor(0x000043FF, 0, 0x00007FFF, 0x3f);
    // str r0, [r1]
    *((u32*)(0x04000540 + 0x40)) = 0xBFFF0000;
    GF_3DVramMan_InitFrameTexVramManager(1, 1);
    GF_3DVramMan_InitFramePlttVramManager((1 << 0xe), 1);
    GfGfx_EngineATogglePlanes(1, 1);
    // strh r2, [r1]
    ov71_0224744C(1, 0, 0, 0);
    *((u32*)(r4 + 0x20)) = r0;
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    ov71_02247610(*((u32*)(r4 + 0x20)), 0, 0x59, 0x1b);
    *((u32*)(r4 + 0x24)) = r0;
    // strh r1, [r0]
    *((u16*)(ov71_0224C0D0 + 2)) = 0;
    *((u16*)(ov71_0224C0D0 + 4)) = 0;
    ov71_0224780C(*((u32*)(r4 + 0x20)), ov71_0224C0D0);
    ov71_0224782C(*((u32*)(r4 + 0x20)), 1);
    ov71_02247730(*((u32*)(r4 + 0x24)), (2 << 0xc));
    // add r4, #0x28
    ov71_022476D4(*((u32*)(r4 + 0x24)), r4);
}




void ov71_0224AEF4(void) {
}




void ov71_0224AF08(void) {
    Heap_Alloc(0x39, 0x24);
    // str r6, [r4]
    *((u32*)(r0 + 4)) = *((u32*)(r6 + 0xc));
    *((u32*)(r0 + 0xc)) = 0xFFE80000;
    // asr r0, r0, #1
    *((u32*)(r0 + 0x10)) = 0xFFE80000;
    *((u32*)(r0 + 0x14)) = 0x00009999;
    *((u32*)(r0 + 8)) = 0x28;
    *((u32*)(r0 + 0x1c)) = r5;
    SysTask_CreateOnVBlankQueue(ov71_0224AF58, r0, 0);
    // str r0, [r5]
    Heap_Free(r4);
}




void ov71_0224AF58(void) {
    // add r0, r1, r0
    // add r0, r1, r0
    // asr r3, r3, #0xc
    // asr r3, r3, #0xc
}




void ov71_0224AFB8(void) {
    // str r2, [r1]
}




void ov71_0224AFD4(void) {
    Heap_Alloc(0x39, 0x1c);
    // str r5, [r4]
    *((u32*)(r0 + 8)) = *((u32*)(r6 + 0x24));
    // add r1, #0xc
    ov71_022476B4(*((u32*)(r6 + 0x24)), r0);
    // sub r1, r0, r1
    // asr r0, r1, #3
    // add r0, r1, r0
    // asr r0, r0, #4
    *((u32*)(r4 + 0x18)) = ((0x32 << 0xc) >> 0x1c);
    *((u32*)(r4 + 4)) = 0x10;
    SysTask_CreateOnMainQueue(ov71_0224B028, r4, 0);
    // str r0, [r5]
    Heap_Free(r4);
}




void ov71_0224B028(void) {
    // add r0, r1, r0
    // add r1, #0xc
    // add r4, #0xc
}




void ov71_0224B068(void) {
    // str r2, [r1]
}




void ov71_0224B084(void) {
    // str r0, [sp]
    // str r2, [sp, #4]
    // ldr r5, [sp, #0x20]
    Heap_Alloc(0x39, 0x18);
    // str r5, [r4]
    *((u32*)(r0 + 4)) = (r6 << 0xc);
    // ldr r0, [sp, #4]
    *((u32*)(r0 + 0xc)) = ((r6 << 0xc) << 0xc);
    // sub r0, r1, r0
    _s32_div_f(*((u32*)(r0 + 4)), r7);
    *((u32*)(r4 + 8)) = r0;
    // ldr r0, [sp]
    *((u32*)(r4 + 0x10)) = r7;
    *((u32*)(r4 + 0x14)) = r0;
    ov71_02247708(r6);
    SysTask_CreateOnMainQueue(ov71_0224B0E8, r4, 0);
    // str r0, [r5]
    Heap_Free(r4);
    // str r0, [r5]
}




void ov71_0224B0E8(void) {
    // add r2, r2, r0
    // asr r1, r2, #0xc
    // asr r1, r1, #0xc
}




void ov71_0224B11C(void) {
    // str r2, [r1]
}




void ov71_0224B138(void) {
    // str r5, [r4]
    // add r0, #0x80
    // str r1, [r0]
    // add r1, #0x84
    // str r0, [r1]
}




void ov71_0224B198(void) {
    // add r0, #0x80
    // add r0, #0x5c
    // add r0, #0x84
}




void ov71_0224B1FC(void) {
    // blx r2
    // str r0, [r4]
    *((u32*)(r0 + 4)) = 0;
    ov71_0224B234(r0, (r0 + 4), *((u32*)(ov71_0224BF84 + (*((u32*)r1) << 2))), (*((u32*)r1) << 2));
}




void ov71_0224B234(void) {
    // str r2, [sp]
    // add r1, sp, #0
}




void ov71_0224B280(void) {
    GfGfx_SetBanks(ov71_0224BFDC);
    // strh r0, [r2]
    SetBothScreensModesAndDisable(ov71_0224BF94, *((u16*)0x04000304), 0x04000304);
    InitBgFromTemplate(*((u32*)(r4 + 0x58)), 1, ov71_0224BFA4, 0);
    InitBgFromTemplate(*((u32*)(r4 + 0x58)), 2, ov71_0224BFC0, 0);
    GfGfx_EngineATogglePlanes(1, 1);
    // strh r0, [r2]
    // str r2, [sp]
    BG_FillCharDataRange(*((u32*)(r4 + 0x58)), 1, 0, 1);
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r2, [sp, #0xc]
    FillBgTilemapRect(*((u32*)(r4 + 0x58)), 1, 0, 0);
    ov71_022473D0(*((u32*)r4));
    // str r0, [sp]
    // str r0, [sp, #4]
    LoadUserFrameGfx2(*((u32*)(r4 + 0x58)), 1, 0x6d, 2);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r2, [sp, #0xc]
    // str r2, [sp, #0x10]
    // add r1, #0x5c
    AddWindowParameterized(*((u32*)(r4 + 0x58)), r4, 1, 2);
    // add r0, #0x5c
    FillWindowPixelBuffer(r4, 0xf);
    // str r3, [sp]
    // str r0, [sp, #4]
    GfGfxLoader_GXLoadPal(0x10, 8, 0, 0x20);
    BgCommitTilemapBufferToVram(*((u32*)(r4 + 0x58)), 1);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharData(0x59, 0x16, *((u32*)(r4 + 0x58)), 2);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnData(0x59, 0x15, *((u32*)(r4 + 0x58)), 2);
    // str r0, [sp]
    // str r0, [sp, #4]
    GfGfxLoader_GXLoadPal(0x59, 0x17, 0, 0);
    ov71_0224B720(r4);
    ov71_0224744C(1, 0, 0, 0);
    *((u32*)(r4 + 0x74)) = r0;
    ov71_0224B7EC(r4);
    *((u32*)(r4 + 0x14)) = r0;
    Pokepic_SetAttr(6, 1);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    ov71_02247610(*((u32*)(r4 + 0x74)), 0, 0x59, 0x1b);
    *((u32*)(r4 + 0x78)) = r0;
    // add r0, sp, #0x14
    // add r1, sp, #0x14
    // strh r3, [r0]
    *((u16*)(r0 + 2)) = *((u16*)(ov71_0224BF7C + 2));
    *((u16*)(r0 + 4)) = *((u16*)(ov71_0224BF7C + 4));
    ov71_022476EC(*((u32*)(r4 + 0x78)), *((u16*)(ov71_0224BF7C + 4)), *((u16*)(ov71_0224BF7C + 2)));
    ov71_0224B848(r4);
    GfGfx_EngineATogglePlanes(0x10, 1);
    GfGfx_EngineBTogglePlanes(0x10, 1);
    // str r0, [sp]
    G2x_SetBlendAlpha_(0x04000050, 1, 4, 0x10);
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(3, 1, 1, 0);
}




void ov71_0224B450(void) {
}




void ov71_0224B47C(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0224B496: ; jump table
    // add r1, #0x80
    // str r0, [r5]
    // add r0, #0x80
    // str r0, [r5]
    // add r0, #0x84
    // add r1, sp, #0
    // add r1, sp, #0
    // str r0, [r5]
}




void ov71_0224B57C(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0224B596: ; jump table
    *((u32*)(r0 + 8)) = 0;
    // str r0, [r5]
    *((u32*)(r0 + 8)) = (*((u32*)(r0 + 8)) + 1);
    ov71_0224738C(*((u32*)r0), (*((u16*)(*((u32*)r1) + 6)) << 0x10));
    // str r0, [sp, #0xc]
    ov71_02247388(*((u32*)r4));
    ov71_022473DC(*((u32*)r4));
    // ldr r0, [sp, #0xc]
    ReadMsgDataIntoString(5, *((u32*)(r4 + 0x6c)));
    StringExpandPlaceholders(r7, *((u32*)(r4 + 0x70)), *((u32*)(r4 + 0x6c)));
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r3, [sp, #8]
    // add r0, #0x5c
    AddTextPrinterParameterized(r4, 1, *((u32*)(r4 + 0x70)), 0);
    // add r0, #0x5c
    sub_0200E948(r4, 0x6d, 2);
    // add r0, #0x5c
    CopyWindowToVram(r4);
    PlayFanfare(0x000004A4);
    *((u32*)(r4 + 8)) = 0;
    *((u32*)(r4 + 0xc)) = 1;
    // str r6, [r5]
    ov71_0224B6F0(1, 0x3c);
    ov71_0224738C(*((u32*)r4));
    ov71_02247388(*((u32*)r4));
    ReadMsgDataIntoString(r6, 3, *((u32*)(r4 + 0x6c)));
    StringExpandPlaceholders(r7, *((u32*)(r4 + 0x70)), *((u32*)(r4 + 0x6c)));
    // add r0, #0x5c
    FillWindowPixelBuffer(r4, 0xf);
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r3, [sp, #8]
    // add r0, #0x5c
    AddTextPrinterParameterized(r4, 1, *((u32*)(r4 + 0x70)), 0);
    // add r0, #0x5c
    CopyWindowPixelsToVram_TextMode(r4);
    *((u32*)(r4 + 8)) = 0;
    // str r0, [r5]
    ov71_0224B6F0((*((u32*)r5) + 1), 0x3c);
    // add r0, #0x5c
    ClearFrameAndWindow2(r4, 0);
    *((u32*)(r4 + 8)) = 0;
    // str r0, [r5]
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(3, 0, 0, 0);
    // str r0, [r5]
    IsPaletteFadeFinished((*((u32*)r5) + 1));
}




void ov71_0224B6F0(void) {
}




void ov71_0224B720(void) {
    NNS_G3dInit();
    G3X_InitMtxStack();
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
    // str r0, [r1]
    *((u32*)(0x04000540 + 0x40)) = 0xBFFF0000;
    GF_3DVramMan_InitFrameTexVramManager(1, 1);
    GF_3DVramMan_InitFramePlttVramManager((1 << 0xe), 1);
    // blx r3
    // blx r3
    // and r2, r4
    PokepicManager_SetCharBaseAddrAndSize(*((u32*)(r5 + 0x10)), (((1 << 0xe) << 0x10) >> 0xd), ((0x7FFF0000 >> 0x10) << 4), *((u32*)NNS_GfdDefaultFuncAllocPlttVram));
    // and r2, r6
    PokepicManager_SetPlttBaseAddrAndSize(*((u32*)(r5 + 0x10)), ((r6 << 0x10) >> 0xd), ((0xFFFF0000 >> 0x10) << 3));
}




void ov71_0224B7EC(void) {
    // add r0, sp, #0x10
    // add r0, #0x84
    // add r1, #0x18
    // str r1, [sp]
    // str r1, [sp, #4]
    // add r0, #0x18
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r3, #0x50
    // add r1, sp, #0x10
}




void ov71_0224B848(void) {
    // add r0, #0x48
    // add r0, sp, #0x5c
    // add r0, sp, #0x38
    // str r3, [sp]
    // str r2, [sp, #4]
    // str r3, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, sp, #0x38
    // str r0, [sp, #0x10]
    // str r0, [sp]
    // add r0, sp, #0x5c
    // str r0, [sp, #4]
    // str r0, [sp]
    // add r0, sp, #0x14
    // add r1, #0x48
    // add r2, sp, #0x38
    // add r3, sp, #0x5c
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r1, sp, #0x14
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r1, sp, #0x14
}




void ov71_0224B8EC(void) {
    // add r6, #0x48
}




void ov71_0224B910(void) {
    // str r2, [sp]
    Heap_Alloc(0x39, 0x14);
    // str r5, [r4]
    *((u32*)(r0 + 4)) = (r6 << 0xc);
    // ldr r0, [sp]
    *((u32*)(r0 + 8)) = ((r6 << 0xc) << 0xc);
    // sub r0, r1, r0
    _s32_div_f(*((u32*)(r0 + 4)), r7);
    *((u32*)(r4 + 0xc)) = r0;
    *((u32*)(r4 + 0x10)) = r7;
    SysTask_CreateOnVBlankQueue(ov71_0224B990, r4, 0);
    *((u32*)(r5 + 0x7c)) = r0;
    G2x_SetBlendBrightness_(0x04000050, 1, r6);
}




void ov71_0224B960(void) {
    // cmp r0, #0
    // bne _0224B96A
}




void ov71_0224B970(void) {
}




void ov71_0224B990(void) {
    *((u32*)(r1 + 0x10)) = (*((u32*)(r1 + 0x10)) - 1);
    // add r2, r1, r0
    *((u32*)(r1 + 4)) = r2;
    // asr r2, r2, #0xc
    G2x_SetBlendBrightness_(0x04000050, 1);
    // asr r2, r2, #0xc
    G2x_SetBlendBrightness_(0x04000050, 1, *((u32*)(r4 + 8)));
    ov71_0224B970(*((u32*)r4));
}




void ov71_0224B9CC(void) {
    Heap_Alloc(0x39, 0x44);
    *((u32*)(r0 + 4)) = 0;
    // str r6, [r4]
    *((u32*)(r0 + 0x10)) = *((u32*)(r5 + 0x74));
    *((u32*)(r0 + 0x14)) = *((u32*)(r5 + 0x78));
    *((u32*)(r0 + 8)) = r5;
    *((u32*)(r0 + 0x18)) = 0;
    *((u32*)(r0 + 0x1c)) = 0x000018CC;
    *((u32*)(r0 + 0x20)) = 0x14;
    *((u16*)(r0 + 0x3a)) = (1 << 0xc);
    *((u32*)(r0 + 0x40)) = 0;
    ov71_02247708(*((u32*)(r0 + 0x14)), 0);
    ov71_02247704(*((u32*)(r4 + 0x14)), 1);
    // add r1, #0x24
    ov71_022476B4(*((u32*)(r4 + 0x14)), r4);
    // add r1, #0x34
    ov71_022476D4(*((u32*)(r4 + 0x14)), r4);
    SysTask_CreateOnMainQueue(ov71_0224BABC, r4, 0);
    // str r0, [r6]
    Heap_Free(r4);
    // str r0, [r6]
}




void ov71_0224BA48(void) {
    // str r2, [r1]
}




void ov71_0224BA64(void) {
    // ldrsh r2, [r1, r0]
    // ldrsh r0, [r1, r0]
    // add r0, r2, r0
    *((u16*)(r0 + 0x3a)) = 0x3c;
    *((u32*)(r0 + 0x40)) = (*((u32*)(r0 + 0x40)) - 1);
    // ldrsh r0, [r1, r0]
    *((u16*)(r0 + 0x3a)) = 0x3e;
    // ldrsh r2, [r1, r0]
    // ldrsh r0, [r1, r0]
    // add r0, r2, r0
    *((u16*)(r0 + 0x36)) = 0x3a;
    // add r1, #0x34
}




void ov71_0224BAA0(void) {
}




void ov71_0224BABC(void) {
    ov71_0224BA64(r1);
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0224BADA: ; jump table
    // add r0, r1, r0
    *((u32*)(r4 + 0x18)) = *((u32*)(r4 + 0x1c));
    *((u32*)(r4 + 0x20)) = (*((u32*)(r4 + 0x20)) - 1);
    // asr r1, r1, #0xc
    ov71_02247708(*((u32*)(r4 + 0x14)), *((u32*)(r4 + 0x18)));
    ov71_02247708(*((u32*)(r4 + 0x14)), 0x1f);
    *((u32*)(r4 + 4)) = (*((u32*)(r4 + 4)) + 1);
    ov71_0224BAA0(r4, (6 << 6), 0x1e);
    *((u32*)(r4 + 0xc)) = 0;
    *((u32*)(r4 + 4)) = (*((u32*)(r4 + 4)) + 1);
    *((u32*)(r4 + 0xc)) = (*((u32*)(r4 + 0xc)) + 1);
    *((u32*)(r4 + 0x30)) = 0;
    *((u32*)(r4 + 4)) = (*((u32*)(r4 + 4)) + 1);
    // add r0, r1, r0
    *((u32*)(r4 + 0x28)) = *((u32*)(r4 + 0x30));
    // sub r0, r1, r0
    *((u32*)(r4 + 0x30)) = (0x1e << 6);
    // add r1, #0x24
    ov71_022476C4(*((u32*)(r4 + 0x14)), r4);
    PlaySE(0x000005E6, *((u32*)(r4 + 0x28)));
    // mvn r0, r0
    *((u32*)(r4 + 0x30)) = (0 * *((u32*)(r4 + 0x30)));
    ov71_0224B910(*((u32*)(r4 + 8)), 0, 0x10, 8);
    *((u32*)(r4 + 4)) = (*((u32*)(r4 + 4)) + 1);
    // add r1, r1, r0
    *((u32*)(r4 + 0x28)) = *((u32*)(r4 + 0x28));
    *((u32*)(r4 + 0x28)) = (0x13 << 0xc);
    // add r1, #0x24
    ov71_022476C4(*((u32*)(r4 + 0x14)), r4);
    *((u32*)(r4 + 4)) = (*((u32*)(r4 + 4)) + 1);
    ov71_0224B960(*((u32*)(r4 + 8)), *((u32*)(r4 + 0x28)));
    ov71_0224BA48(r5);
}



