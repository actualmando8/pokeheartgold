/* Decompiled from asm/overlay_73.s */
#include "global.h"

BOOL ov73_021E5900(void) {
    Main_SetVBlankIntrCB(0, 0);
    HBlankInterruptDisable();
    GfGfx_DisableEngineAPlanes();
    GfGfx_DisableEngineBPlanes();
    // and r1, r0
    // str r1, [r2]
    // and r0, r1
    // str r0, [r2]
    Heap_Create(3, 0x32, (0x41 << 0xc));
    NARC_New(0x54, 0x32);
    OverlayManager_CreateAndGetData(r7, 0x00004A8C, 0x32);
    memset(0, 0x00004A8C);
    BgConfig_Alloc(0x32);
    // str r0, [r4]
    OverlayManager_GetArgs(r7);
    *((u32*)(r4 + 8)) = r0;
    // str r1, [r4, r0]
    MenuInputStateMgr_GetState(*((u32*)(*((u32*)(r4 + 8)) + 0x10)), *((u32*)r0));
    // str r0, [r4, r1]
    MessageFormat_New(0x32, (0xc5 << 2));
    *((u32*)(r4 + 0x24)) = r0;
    NewMsgDataFromNarc(0, 0x1b, 0x000001A6, 0x32);
    *((u32*)(r4 + 0x28)) = r0;
    FontID_Alloc(4, 0x32);
    SetKeyRepeatTimers(4, 8);
    ov73_021E5D00();
    ov73_021E5D20(*((u32*)r4));
    SetMasterBrightnessNeutral(0);
    SetMasterBrightnessNeutral(1);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 0x11, 0x11, 0);
    ov73_021E5F38(r4, r6);
    sub_020210BC();
    sub_02021148(2);
    Main_SetVBlankIntrCB(ov73_021E5CD8, r4);
    ov73_021E5E0C(r4, r6);
    ov73_021E6060();
    ov73_021E6090(r4, r6);
    ov73_021E6184(r4);
    ov73_021E629C(r4, r7);
    ov73_021E7230(r4);
    Sound_SetSceneAndPlayBGM(0x34, 0, 0);
    // and r0, r1
    // strh r0, [r2]
    sub_0208FB64(r4, *((u16*)0x04000304), 0x04000304);
    sub_0203893C();
    sub_02038C1C(3);
    sub_0203769C();
    sub_0205A904(2);
    sub_0203A880();
    // add r1, r4, r1
    ov73_021EA374(*((u32*)(r4 + 0x00004A0C)), (0xe2 << 2));
    SysTask_CreateOnVBlankQueue(ov73_021E5C74, r4, 5);
    *((u32*)(r4 + 0x20)) = r0;
    NARC_Delete(r6);
    // str r0, [r5]
    OverlayManager_GetData((*((u32*)r5) + 1));
    // str r0, [r5]
}




BOOL ov73_021E5AB8(void) {
    OverlayManager_GetData();
    sub_0203769C();
    sub_02033250(*((u32*)(r4 + 0x00004A24)));
    // and r0, r2
    // str r0, [r4, r1]
    // add r0, r1, r1
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021E5AF0: ; jump table
    IsPaletteFadeFinished((*((u16*)(r0 + 6)) << 0x10), *((u32*)r5), *((u32*)(r4 + 0x00004A24)));
    // str r0, [r5]
    sub_0203769C(1);
    ov73_021E746C();
    sub_02037030(0x72, 0, 0);
    // blx r2
    // str r0, [r5]
    // add r0, r4, r0
    ov73_021E735C((0xa6 << 2), 0, 0x00010300, r4);
    ov73_021E762C(r4);
    sub_0203769C();
    ov73_021E7870(r4, 1);
    // str r0, [r5]
    // blx r2
    // str r0, [r5]
    IsPaletteFadeFinished(r4, *((u32*)r5), *((u32*)(_021EA7C0 + (*((u32*)(r4 + (0xc6 << 2))) << 2))));
    SpriteList_RenderAndAnimateSprites(*((u32*)(r4 + 0x50)));
}




BOOL ov73_021E5BAC(void) {
    // str r0, [sp]
    OverlayManager_GetData();
    SysTask_Destroy(*((u32*)(r0 + 0x20)));
    sub_0200AEB0(*((u32*)(r6 + (0x6b << 2))));
    sub_0200B0A8(*((u32*)(r6 + (0x1b << 4))));
    Destroy2DGfxResObjMan(*((u32*)(r6 + (0x5f << 2))));
    SpriteList_Delete(*((u32*)(r6 + 0x50)));
    OamManager_Free();
    ObjCharTransfer_Destroy();
    ObjPlttTransfer_Destroy();
    ov73_021E6400(r6);
    ov73_021E6048(r6);
    ov73_021E5F0C(*((u32*)r6));
    sub_02038C1C(2);
    sub_02037FF0();
    sub_0205AD24(*((u32*)(*((u32*)(r6 + 8)) + 4)));
    sub_02021238();
    FontID_Release(4);
    DestroyMsgData(*((u32*)(r6 + 0x28)));
    MessageFormat_Delete(*((u32*)(r6 + 0x24)));
    MenuInputStateMgr_SetState(*((u32*)(*((u32*)(r6 + 8)) + 0x10)), *((u32*)(r6 + (0xc5 << 2))));
    ov73_021E5ED4(r6);
    // ldr r0, [sp]
    OverlayManager_FreeData();
    // strh r0, [r2]
    sub_0205A904(0, *((u16*)0x04000304), 0x04000304);
    Main_SetVBlankIntrCB(0, 0);
    Heap_Destroy(0x32);
}




void ov73_021E5C74(void) {
    // add r1, #0xc
    *((u32*)(r1 + 8)) = 0;
    *((u32*)(r1 + 4)) = (*((u32*)(r1 + 4)) + 1);
    *((u32*)(r1 + 4)) = 0;
    // add r0, r0, r1
    GX_LoadOBJPltt(*((u32*)(*((u32*)(r1 + 0x10)) + 0xc)), 0, 0x20, ((*((u32*)(r1 + 4)) + 1) << 1));
    *((u32*)(r4 + 0x14)) = (*((u32*)(r4 + 0x14)) + 1);
    // add r0, r4, r0
    ov73_021E72F4((0xde << 2));
}




void ov73_021E5CD8(void) {
    GF_RunVramTransferTasks();
    OamManager_ApplyAndResetBuffers();
    DoScheduledBgGpuUpdates(*((u32*)r4));
    // str r0, [r3, r1]
}




void ov73_021E5D00(void) {
}




void ov73_021E5D20(void) {
    // add r3, sp, #0x70
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    SetBothScreensModesAndDisable(r3, r3);
    // add r3, sp, #0x54
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 4, r3, 0);
    BgClearTilemapBufferAndCommit(r4, 4);
    // add r3, sp, #0x38
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 5, r3, 0);
    BgClearTilemapBufferAndCommit(r4, 5);
    // add r3, sp, #0x1c
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 0, r3, 0);
    BgClearTilemapBufferAndCommit(r4, 0);
    // add r3, sp, #0
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 1, r3, 0);
    BgClearTilemapBufferAndCommit(r4, 1);
    BG_ClearCharDataRange(0, 0x20, 0, 0x32);
    BG_ClearCharDataRange(4, 0x20, 0, 0x32);
}




void ov73_021E5E0C(void) {
    // str r0, [sp]
    // str r1, [sp, #4]
    String_New(8, 0x32);
    *((u32*)(r6 + 0x2c)) = r0;
    // str r1, [r4, r0]
    // str r1, [r4, r0]
    // str r1, [r5, r0]
    // str r1, [r5, r0]
    // add r4, #8
    // str r1, [r5, r0]
    // str r1, [r5, r0]
    // str r1, [r6, r0]
    // add r5, #0x10
    String_New(0xb4, 0x32);
    // ldr r1, [sp]
    *((u32*)(r1 + 0x44)) = r0;
    String_New(0x28, 0x32);
    // ldr r1, [sp]
    *((u32*)(r1 + 0x48)) = r0;
    // ldr r0, [sp]
    // str r2, [r0, r1]
    // ldr r2, [sp]
    ReadMsgDataIntoString(*((u32*)(r0 + 0x28)), 0x11, *((u32*)(0 + 0x48)));
    // ldr r0, [sp]
    // ldr r1, [sp, #4]
    ov73_021E7740();
    sub_0205B4A4(0x32);
    // ldr r1, [sp]
    // str r0, [r1, r2]
    // ldr r2, [sp]
    // ldr r0, [sp]
    *((u32*)(r0 + 0xc)) = 0;
    *((u32*)(r0 + 0x14)) = 0;
    *((u32*)(r0 + 0x10)) = 0;
    // ldr r0, [sp, #4]
    // add r2, #0x1c
    GfGfxLoader_GetPlttDataFromOpenNarc(7, (0xdf << 2), 0x32);
    // ldr r1, [sp]
    *((u32*)(r1 + 0x18)) = r0;
    // str r0, [r1, r2]
    // str r4, [r1, r3]
    // strb r0, [r1, r2]
}




void ov73_021E5ED4(void) {
    // ldr r0, [r6, r0]
}




void ov73_021E5F0C(void) {
}




void ov73_021E5F38(void) {
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r3, [sp]
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
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r3, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // add r3, r5, r3
    // str r0, [r5, r1]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r1, [sp]
    // str r0, [sp, #4]
}




void ov73_021E6048(void) {
}




void ov73_021E6060(void) {
    // add r3, sp, #0
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    ObjCharTransfer_Init(r3, r3);
    ObjPlttTransfer_Init(0x14, 0x32);
    ObjCharTransfer_ClearBuffers();
    ObjPlttTransfer_Reset();
}




void ov73_021E6090(void) {
    // str r1, [sp, #0x14]
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // str r2, [sp, #0x10]
    // add r1, #0x54
    // add r0, #0x54
    // str r0, [r5, r7]
    // str r0, [sp]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // ldr r1, [sp, #0x14]
    // str r0, [r6, r1]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // sub r1, #0x2c
    // str r0, [sp, #0xc]
    // ldr r1, [sp, #0x14]
    // str r0, [r6, r1]
    // str r0, [sp]
    // str r0, [sp, #4]
    // sub r1, #0x2c
    // str r0, [sp, #8]
    // ldr r1, [sp, #0x14]
    // str r0, [r6, r1]
    // str r0, [sp]
    // str r0, [sp, #4]
    // sub r1, #0x2c
    // str r0, [sp, #8]
    // ldr r1, [sp, #0x14]
    // str r0, [r6, r1]
    // sub r1, #0xc
}




void ov73_021E6184(void) {
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r2, [sp, #0x10]
    // str r2, [sp, #0x14]
    // str r2, [sp, #0x18]
    // add r2, #8
    // str r2, [sp, #0x1c]
    // add r2, #0xc
    // add r3, #0x88
    // str r2, [sp, #0x20]
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x28]
    // add r0, r5, r3
    CreateSpriteResourcesHeader(0, 2, 2, 2);
    // str r0, [sp, #0x2c]
    // add r0, r5, r0
    // str r0, [sp, #0x30]
    // str r1, [sp, #0x3c]
    // str r0, [sp, #0x40]
    // str r0, [sp, #0x44]
    // str r0, [sp, #0x48]
    // add r0, sp, #0x2c
    *((u16*)((1 << 0xc) + 0x20)) = 0;
    // str r0, [sp, #0x50]
    // str r0, [sp, #0x54]
    // str r0, [sp, #0x58]
    // str r0, [sp, #0x34]
    // str r0, [sp, #0x38]
    // add r0, sp, #0x2c
    Sprite_CreateAffine((0x1a << 0xe), 0);
    // str r0, [r5, r1]
    Sprite_SetAnimActiveFlag(*((u32*)(r5 + (0x8a << 2))), 1);
    Sprite_SetDrawFlag(*((u32*)(r5 + (0x8a << 2))), 1);
    Sprite_SetDrawPriority(*((u32*)(r5 + (0x8a << 2))), 0x64);
    // str r0, [sp, #0x34]
    // str r0, [sp, #0x38]
    // add r0, sp, #0x2c
    Sprite_CreateAffine((*((u16*)(ov73_021EA560 + 6)) << 0xc));
    // str r0, [r5, r1]
    Sprite_SetAnimActiveFlag(*((u32*)(r5 + (0x8b << 2))), 1);
    // add r1, #0x1b
    Sprite_SetAnimCtrlSeq(*((u32*)(r5 + (0x8b << 2))), ((r6 - 1) << 1));
    Sprite_SetDrawFlag(*((u32*)(r5 + r7)), 0);
    // str r0, [sp, #0x34]
    // str r0, [sp, #0x38]
    GfGfx_EngineATogglePlanes(0x10, 1);
    GfGfx_EngineBTogglePlanes(0x10, 1);
}




void ov73_021E629C(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, r4, r1
    AddWindowParameterized(*((u32*)r0), (0xaa << 2), 0, 2);
    // add r0, r4, r0
    FillWindowPixelBuffer((0xaa << 2), 0xf);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, r4, r1
    AddWindowParameterized(*((u32*)r4), (0xae << 2), 0, 0x10);
    // add r0, r4, r0
    FillWindowPixelBuffer((0xae << 2), 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, r4, r1
    AddWindowParameterized(*((u32*)r4), (0xb2 << 2), 0, 0x18);
    // add r0, r4, r0
    FillWindowPixelBuffer((0xb2 << 2), 0);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r1, [sp, #0x10]
    // add r1, r4, r1
    AddWindowParameterized(*((u32*)r4), (0xb6 << 2), 4, 3);
    // add r0, r4, r0
    ov73_021E63BC((0xb6 << 2), *((u32*)(r4 + 0x48)), 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, r4, r1
    AddWindowParameterized(*((u32*)r4), (0xa6 << 2), 4, 8);
    // add r0, r4, r0
    FillWindowPixelBuffer((0xa6 << 2), 0);
    // add r0, r4, r0
    ov73_021E735C((0xa6 << 2), 0, 0x00010300, r4);
    YesNoPrompt_Create(0x32);
    // str r0, [r4, r1]
}




void ov73_021E63BC(void) {
    // str r1, [sp]
    // str r4, [sp, #4]
    // sub r4, r3, r6
    // str r0, [sp, #8]
    // add r3, r4, r3
    // str r0, [sp, #0xc]
    // asr r3, r3, #1
}




void ov73_021E6400(void) {
    // add r0, r4, r0
    // add r0, r4, r0
    // add r0, r4, r0
    // add r0, r4, r0
    // add r0, r4, r0
}




void ov73_021E6444(void) {
}




void ov73_021E6484(void) {
}




void ov73_021E64B0(void) {
    System_GetTouchHeld(*((u32*)(r0 + (0xc5 << 2))));
    // str r1, [r4, r0]
    System_GetTouchHeld(0, 0);
    // str r1, [r4, r0]
}




void ov73_021E6508(void) {
    ov73_021E64B0();
    TouchscreenHitbox_FindRectAtTouchNew(ov73_021EA534);
    // add r0, sp, #4
    *((u16*)(r0 + 4)) = 0x0000FFD5;
    // add r0, sp, #8
    // str r0, [sp]
    DoesPixelAtScreenXYMatchPtrVal(*((u32*)r5), 1, *((u16*)(gSystem + 0x20)), *((u16*)(gSystem + 0x22)));
    // tst r0, r1
    sub_0203769C(1, *((u32*)(gSystem + 0x48)));
    ov73_021E746C();
    // add r1, #8
    // add r0, sp, #4
    *((u8*)(*((u32*)(r5 + 0x00004A1C)) + 2)) = 1;
    ov73_021E756C(r5, 3, 0);
    ov73_021E670C(r5, 0x16);
    // add r1, sp, #4
    // add r1, #2
    sub_02037030(0x75, 1);
    ov73_021E781C(r5, 0);
    PlaySE(0x000005DC);
    ov73_021E71E4(r5, 0, 1);
    ScheduleBgTilemapBufferTransfer(*((u32*)r5), 1);
    PlaySE(0x000005F2);
    // tst r0, r1
    sub_0203769C(2);
    ov73_021E756C(r5, 4, 0);
    ov73_021E670C(r5, 4);
    PlaySE((0x25 << 6));
    // add r0, #0x28
    // add r1, #0x28
    // str r0, [r5, r1]
    PlaySE(0x000005F2);
    sub_02037454();
    // add r1, #8
    // add r0, sp, #4
    *((u8*)(*((u32*)(r5 + 0x00004A1C)) + 1)) = 1;
    ov73_021E756C(r5, 4, 0);
    ov73_021E670C(r5, 4);
    // add r1, sp, #4
    // add r1, #1
    sub_02037030(0x75, 1);
    ov73_021E781C(r5, 0);
    PlaySE((0x25 << 6));
    ov73_021E71E4(r5, 1, 1);
    ScheduleBgTilemapBufferTransfer(*((u32*)r5), 1);
    PlaySE(0x000005F2);
    sub_0203769C(*((u32*)(r5 + 0x00004A20)));
    sub_02037454();
    // add r0, sp, #4
    // strb r1, [r0]
    // add r1, sp, #4
    sub_02037030(0x75, 0, 1);
    // str r1, [r5, r0]
    ov73_021E71E4(r5, 1, 0);
    ScheduleBgTilemapBufferTransfer(*((u32*)r5), 1);
}




void ov73_021E66F0(void) {
    // bx lr
    // TODO: decompile
}




void ov73_021E66F4(void) {
}




void ov73_021E670C(void) {
    // str r3, [r0, r2]
    // str r1, [r0, r2]
}




void ov73_021E671C(void) {
    ov73_021E75FC(*((u32*)(r0 + 0x4c)));
    // str r2, [r5, r0]
    sub_0203769C(*((u32*)(r5 + (0xc7 << 2))), (0xc7 << 2), *((u32*)(r5 + (0xc7 << 2))));
    ov73_021E71E4(r5, 0, 0);
    // mvn r1, r1
    // str r1, [r5, r0]
    ov73_021E71E4(r5, 1, 0);
    ScheduleBgTilemapBufferTransfer(*((u32*)r5), 1);
    ov73_021E66F0(r5);
}




void ov73_021E6778(void) {
    // str r0, [sp]
    // add r1, sp, #0
    // str r1, [r5, r0]
}




void ov73_021E67A8(void) {
    // add r0, sp, #0
    MI_CpuFill8(0, 0x14);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, sp, #0
    *((u8*)(0xe + 0x10)) = 0x19;
    *((u8*)(0xe + 0x11)) = 6;
    // sub r3, #0x2c
    // and r2, r5
    *((u8*)(0xe + 0x12)) = ((*((u8*)(0xe + 0x12)) & ~(0xf)) | 0xf);
    *((u8*)(0xe + 0x12)) = (*((u8*)(0xe + 0x12)) & ~(0xf0));
    // add r1, sp, #0
    YesNoPrompt_InitFromTemplate(*((u32*)(r4 + (0xc5 << 2))), 0xf0, (*((u8*)(0xe + 0x12)) & ~(0xf0)), (0xc5 << 2));
    // strb r1, [r4, r0]
    sub_0203769C(0x00004A15, 1);
    ov73_021E71E4(r4, 0, 2);
    ov73_021E71E4(r4, 1, 2);
    ScheduleBgTilemapBufferTransfer(*((u32*)r4), 1);
}




void ov73_021E6830(void) {
    YesNoPrompt_IsInTouchMode(*((u32*)(r0 + (0xba << 2))));
    // str r0, [r4, r1]
    // sub r1, #0x2c
    YesNoPrompt_Reset(*((u32*)(r4 + (0xc5 << 2))), (0xc5 << 2));
    // strb r1, [r4, r0]
    sub_0203769C(0x00004A15, 0);
    ov73_021E71E4(r4, 0, 0);
    // mvn r1, r1
    // str r1, [r4, r0]
    ov73_021E71E4(r4, 1, 0);
    ScheduleBgTilemapBufferTransfer(*((u32*)r4), 1);
}




void ov73_021E6890(void) {
    // str r1, [r5, r0]
}




void ov73_021E68AC(void) {
    sub_0203769C();
    // tst r0, r1
    PlaySE(0x000005F2, *((u32*)(gSystem + 0x48)));
    ov73_021E66F0(r5);
    // tst r0, r1
    PlaySE(0x000005F2, *((u32*)(gSystem + 0x48)));
    ov73_021E66F0(r5);
    ov73_021E746C(r6);
    sub_02037454();
    ov73_021E66F0(r5);
    YesNoPrompt_HandleInput(*((u32*)(r5 + (0xba << 2))));
    sub_0203769C();
    // str r0, [sp, #4]
    // add r1, sp, #4
    sub_02037030(0x75, 1);
    ov73_021E781C(r5, 1);
    ov73_021E670C(r5, 0);
    sub_0203769C();
    ov73_021E670C(r5, 0xb);
    ov73_021E756C(r5, 0xe, 0);
    // add r0, sp, #0
    MI_CpuFill8(0, 4);
    // add r0, sp, #0
    *((u8*)(r0 + 2)) = 0;
    sub_0203769C(0);
    // add r1, sp, #0
    // strb r0, [r1]
    // strb r1, [r5, r0]
    // add r0, #0xa
    // strh r1, [r5, r0]
    // str r1, [r5, r0]
    // add r1, sp, #0
    sub_02037030(0x70, 6, 4);
    ov73_021E6830(r5);
    ov73_021E66F0(r5);
}




void ov73_021E69D0(void) {
}




void ov73_021E69E8(void) {
    sub_02037454();
    ov73_021E746C(*((u16*)(r5 + 0x00004A30)));
    // strh r1, [r5, r0]
    // str r1, [r5, r0]
    ov73_021E66F0(r5, 8, *((u16*)(r5 + 0x00004A30)));
    // ldrsh r0, [r5, r0]
    // strh r2, [r5, r0]
    // ldrsh r0, [r5, r0]
    // add r0, sp, #0
    MI_CpuFill8((r1 + 2), 0, 4);
    // add r0, sp, #0
    *((u8*)(r0 + 2)) = 1;
    sub_0203769C(1);
    // add r1, sp, #0
    // strb r0, [r1]
    // add r1, sp, #0
    sub_02037030(0x70, 4);
    // strh r1, [r5, r0]
    // str r1, [r5, r0]
    ov73_021E66F0(r5, 9);
}




void ov73_021E6A70(void) {
    // strb r1, [r5, r2]
    ov73_021E670C(0, 0x00004A28);
    ov73_021E66F0(r5);
}




void ov73_021E6A90(void) {
    // str r1, [r5, r0]
}




void ov73_021E6AAC(void) {
    ov73_021E746C();
    // add r1, #8
    // tst r0, r1
    PlaySE(0x000005F2, *((u32*)(gSystem + 0x48)), *((u32*)(r5 + 0x00004A1C)));
    ov73_021E66F0(r5);
    YesNoPrompt_HandleInput(*((u32*)(r5 + (0xba << 2))));
    ov73_021E6830(r5);
    // str r0, [sp]
    // add r1, sp, #0
    sub_02037030(0x75, 1);
    ov73_021E781C(r5, 1);
    ov73_021E670C(r5, 0);
    ov73_021E71E4(r5, 1, 2);
    ov73_021E71E4(r5, 0, 2);
    sub_0203769C();
    // str r1, [r5, r0]
    ov73_021E746C((0xc6 << 2), 0x18);
    // strb r0, [r5, r1]
    GF_AssertFail(0x00004A2A);
    ov73_021E66F0(r5);
}




void ov73_021E6B6C(void) {
    sub_02037030(0x73, 0, 0);
    // strb r1, [r5, r0]
}




void ov73_021E6B98(void) {
    // add r0, r4, r0
}




void ov73_021E6BC8(void) {
    sub_0203769C();
    sub_02037454();
    sub_02037454();
    // str r1, [r5, r0]
}




void ov73_021E6BF8(void) {
    // add r1, r5, r1
    ov73_021EA3D0(*((u32*)(r0 + 0x00004A0C)), 0x00000F48);
    // str r1, [r5, r0]
}




void ov73_021E6C20(void) {
    *((u8*)(gSystem + 0xc)) = 1;
    GameStats_AddScore(*((u32*)(*((u32*)(r0 + 8)) + 0xc)), 0x13);
    // add r0, r5, r0
    sub_02039EAC((0xdd << 2));
    // str r1, [r5, r0]
}




void ov73_021E6C50(void) {
    sub_0203769C();
    sub_02037454();
    // add r2, r5, r2
    sub_02039EB4(*((u32*)*((u32*)(r5 + 8))), 2, (0xdd << 2));
    StopSE(0x00000657, 8);
    ov73_021E756C(r5, 0xd, 0);
    ov73_021E670C(r5, 0x1d);
    Sprite_SetAnimCtrlSeq(*((u32*)(r5 + (0x8a << 2))), 0);
    *((u32*)(r5 + 0xc)) = 0;
    // str r1, [r5, r0]
    *((u8*)(gSystem + 0xc)) = 0;
    // strb r1, [r5, r0]
}




void ov73_021E6CC0(void) {
    // str r3, [r0, r2]
    // sub r2, #0xc
    // str r3, [r0, r2]
}




void ov73_021E6CDC(void) {
}




void ov73_021E6CFC(void) {
    // str r1, [r5, r0]
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
}




void ov73_021E6D38(void) {
    // str r1, [r5, r0]
}




void ov73_021E6D54(void) {
    ov73_021E746C();
    // add r1, #8
    // tst r0, r1
    PlaySE(0x000005F2, *((u32*)(gSystem + 0x48)), *((u32*)(r5 + 0x00004A1C)));
    ov73_021E66F0(r5);
    YesNoPrompt_HandleInput(*((u32*)(r5 + (0xba << 2))));
    // str r1, [sp]
    // str r1, [r5, r0]
    // add r1, sp, #0
    sub_02037030(0x75, 0, 1);
    ov73_021E781C(r5, 1);
    // str r1, [r5, r0]
    sub_02037030(0x71, 0, 0);
    sub_02034818(0);
    BufferPlayersName(*((u32*)(r5 + 0x24)), 0, r0);
    ov73_021E6830(r5);
    ov73_021E66F0(r5);
}




void ov73_021E6DF8(void) {
    // str r1, [r5, r0]
}




void ov73_021E6E48(void) {
    // str r2, [r0, r1]
    // sub r1, #0xc
    // str r2, [r0, r1]
}




void ov73_021E6E6C(void) {
    // str r1, [r5, r0]
}




void ov73_021E6E8C(void) {
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
}




void ov73_021E6ECC(void) {
    // str r1, [r5, r0]
}




void ov73_021E6EF8(void) {
    // str r1, [r5, r0]
}




void ov73_021E6F1C(void) {
    sub_0203769C();
    ov73_021E71E4(r5, 0, 2);
    // mvn r1, r1
    // str r1, [r5, r0]
    ov73_021E71E4(r5, 1, 2);
    ScheduleBgTilemapBufferTransfer(*((u32*)r5), 1);
    ov73_021E75FC(*((u32*)(r5 + 0x4c)));
    RemoveTextPrinter(((*((u32*)(r5 + 0x4c)) << 0x18) >> 0x18));
    ov73_021E756C(r5, 0xf, 1);
    // str r1, [r5, r0]
    sub_0203769C((0xc6 << 2), 0x14);
    ov73_021E781C(r5, 0);
    sub_02037454();
    // str r0, [r5, r1]
    // add r1, #8
    // str r0, [r5, r1]
    ov73_021E66F0(r5, 0x00004A2C);
}




void ov73_021E6FAC(void) {
    sub_02037454(*((u32*)(r0 + 0x00004A2C)));
    // str r0, [r5, r1]
    // str r1, [r5, r0]
    // add r0, #0xc
    // str r1, [r5, r0]
    ov73_021E66F0(r5, 0, *((u32*)(r5 + 0x00004A2C)));
}




void ov73_021E6FE8(void) {
    sub_02037454(*((u32*)(r0 + 0x00004A2C)));
    // str r0, [r5, r1]
    // str r1, [r5, r0]
    // sub r0, #8
    // str r1, [r5, r0]
    // str r0, [r5, r1]
    // sub r1, #0xc
    // str r0, [r5, r1]
    sub_0203769C(0, (0xc9 << 2), *((u32*)(r5 + 0x00004A2C)));
    ov73_021E781C(r5, 1);
    ov73_021E66F0(r5);
}




void ov73_021E705C(void) {
    ov73_021E761C();
    ov73_021E6830();
    ov73_021E75FC(*((u32*)(r5 + 0x4c)));
    RemoveTextPrinter(((*((u32*)(r5 + 0x4c)) << 0x18) >> 0x18));
    ov73_021E71E4(r5, 1, 2);
    ScheduleBgTilemapBufferTransfer(*((u32*)r5), 1);
    ov73_021E756C(r5, 0xc, 0);
    ov73_021E6830(r5);
    sub_02034818(r6);
    BufferPlayersName(*((u32*)(r5 + 0x24)), 0, r0);
    sub_0203769C();
    ov73_021E6830(r5);
    sub_0203769C();
    // eor r0, r6
    // and r0, r2
    // str r0, [r5, r1]
    // str r4, [r5, r0]
}




void ov73_021E7120(void) {
    sub_02034818(r2);
    BufferPlayersName(*((u32*)(r5 + 0x24)), 0, r0);
    ov73_021E781C(r5, 1);
    // str r4, [r5, r0]
    sub_02037454((0xc6 << 2));
    // str r0, [r5, r1]
    // add r1, #8
    // str r0, [r5, r1]
    sub_0203769C(0, 0x00004A1C);
    // add r1, sp, #0
    // str r2, [sp]
    sub_02037030(0x75, 1);
    sub_02034818(r6);
    BufferPlayersName(*((u32*)(r5 + 0x24)), 0, r0);
    sub_0203769C();
    sub_0203769C();
    // eor r0, r6
    // and r0, r2
    // str r0, [r5, r1]
    // str r4, [r5, r0]
    GF_AssertFail((0xc6 << 2), 0x00004A24, *((u32*)(r5 + 0x00004A24)));
    // str r1, [r5, r0]
    sub_02037454(0x00004A24, 0);
    // str r0, [r5, r1]
}




void ov73_021E71E4(void) {
    // str r4, [sp]
    // str r4, [sp, #4]
    // add r4, #0xc
    // str r4, [sp, #8]
    // str r4, [sp, #0xc]
    // str r2, [sp, #0x10]
    // str r2, [sp, #0x14]
    // str r1, [sp, #0x18]
    CopyToBgTilemapRect(*((u32*)r0), 1, *((u8*)(_021EA51C + r1)), 0x14);
}




void ov73_021E7230(void) {
    sub_0203769C();
    ov73_021E71E4(r4, 0, 0);
    NewString_ReadMsgData(*((u32*)(r4 + 0x28)), 0x15);
    FontID_String_GetWidth(4, r0, 0);
    // sub r3, r1, r0
    // str r1, [sp]
    // add r6, r3, r6
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r0, r4, r0
    // asr r3, r6, #1
    AddTextPrinterParameterizedWithColor((0xae << 2), 4, r5);
    String_Delete(r5);
    // mvn r1, r1
    // str r1, [r4, r0]
    ov73_021E71E4(r4, 1, 0);
    NewString_ReadMsgData(*((u32*)(r4 + 0x28)), 0x16);
    FontID_String_GetWidth(4, r0, 0);
    // sub r3, r1, r0
    // str r1, [sp]
    // add r6, r3, r6
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r0, r4, r0
    // asr r3, r6, #1
    AddTextPrinterParameterizedWithColor((0xb2 << 2), 4, r5);
    String_Delete(r5);
    ScheduleBgTilemapBufferTransfer(*((u32*)r4), 1);
    ScheduleBgTilemapBufferTransfer(*((u32*)r4), 0);
}




void ov73_021E72F4(void) {
    // add r1, #0xa
    // strh r1, [r0]
    // strh r1, [r0]
    // asr r0, r2, #0xb
    // add r0, r2, r0
    // asr r0, r0, #0xc
    // add r0, #0xf
    // add r0, sp, #0
    // strh r2, [r0]
    // add r0, sp, #0
    // add r0, sp, #0
}




void ov73_021E7340(void) {
}




void ov73_021E735C(void) {
    // str r3, [sp, #0x14]
    // str r2, [sp, #0x10]
    sub_0203769C();
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x14]
    ov73_021E7490();
    FillWindowPixelBuffer(r6, 0);
    // ldr r7, [sp, #0x14]
    // str r0, [sp, #0x20]
    PlayerProfile_GetTrainerID_VisibleHalf(*((u32*)(r7 + (0xce << 2))));
    // str r0, [sp, #0x24]
    PlayerName_FlatToString(*((u32*)(r7 + (0xce << 2))), *((u32*)(r4 + 0x2c)));
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x14]
    // ldr r2, [sp, #0x24]
    BufferIntegerAsString(*((u32*)(1 + 0x24)), 0, 5);
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp, #0x14]
    ReadMsgData_ExpandPlaceholders(*((u32*)(r0 + 0x24)), *((u32*)(r1 + 0x28)), 1, 0x32);
    // str r0, [sp, #0x18]
    // ldr r1, [sp, #0x1c]
    // ldr r0, [sp, #0x20]
    // str r5, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r6, 0, *((u32*)(r4 + 0x2c)), 5);
    // str r5, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x18]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r6, 0, 0x46);
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x10]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r6, 0, *((u32*)(r4 + 0x2c)), 5);
    // str r5, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x10]
    // ldr r2, [sp, #0x18]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r6, 0, 0x46);
    // ldr r0, [sp, #0x18]
    String_Delete();
    // ldr r0, [sp, #0x20]
    // add r7, #8
    // add r5, #0x12
    // str r0, [sp, #0x20]
    CopyWindowToVram(r6);
}




void ov73_021E7468(void) {
    // bx lr
    // TODO: decompile
}




void ov73_021E746C(void) {
}




void ov73_021E7488(void) {
}




void ov73_021E7490(void) {
    // str r4, [sp]
    // str r1, [r6, r0]
    sub_02034818(0, *((u32*)(r0 + (0xce << 2))));
    // str r0, [r6, r1]
    // str r1, [r5, r2]
    // str r0, [r5, r1]
    PlayerProfile_GetTrainerID(*((u32*)(r6 + (0xce << 2))), (0x00004A44 + 4), 0x00004A44);
    // str r0, [r5, r1]
    // sub r0, #8
    // str r1, [r5, r0]
    // str r1, [r5, r0]
    // add r6, #8
    // add r5, #0x10
    // str r1, [sp]
    // str r1, [r2, r0]
    // str r1, [r2, r0]
    // eor r1, r6
    // eor r5, r0
    // str r1, [sp]
    // str r1, [r2, r0]
    // str r1, [r2, r0]
    // add r7, #8
    // add r3, #0x10
    // ldr r0, [sp]
}




void ov73_021E756C(void) {
    // add r0, r5, r0
    // add r0, r5, r0
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r3, [sp, #8]
    // add r0, r5, r0
    // str r3, [sp]
    // str r3, [sp, #4]
    // str r3, [sp, #8]
    // add r0, r5, r0
}




void ov73_021E75FC(void) {
}




void ov73_021E761C(void) {
    // add r0, r0, r1
}




void ov73_021E762C(void) {
    // str r0, [sp, #4]
    // add r0, r5, r0
    // str r0, [sp, #0x14]
    // add r0, r5, r0
    // str r4, [sp, #8]
    // str r0, [sp, #0x18]
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021E7664: ; jump table
    GF_AssertFail(*((u32*)(r0 + (0xce << 2))));
    PlayerProfile_GetTrainerGender(*((u32*)(r6 + (0xce << 2))));
    // str r0, [sp, #0xc]
    PlayerProfile_GetAvatar(*((u32*)(r6 + (0xce << 2))));
    // str r0, [sp, #0x10]
    sub_0203769C();
    // ldr r1, [sp, #0xc]
    // add r1, #0x26
    Sprite_SetAnimCtrlSeq(*((u32*)(r5 + (0x8b << 2))), (r1 << 1));
    // ldr r0, [sp, #0xc]
    // ldr r1, [sp, #0x18]
    // str r0, [sp]
    // ldr r0, [sp, #0x14]
    // ldr r3, [sp, #0x10]
    ov73_021E77A4(r4);
    // ldr r1, [sp, #4]
    Sprite_SetAnimCtrlSeq(*((u32*)(r5 + (0x8b << 2))));
    Sprite_SetDrawFlag(*((u32*)(r5 + (0x8b << 2))), 1);
    // str r1, [r5, r0]
    // str r0, [sp, #8]
    sub_0203769C(1, 2);
    PlayerProfile_GetTrainerGender(*((u32*)(r6 + (0xce << 2))));
    // add r1, #0x27
    Sprite_SetAnimCtrlSeq(*((u32*)(r5 + (0x8b << 2))), (r0 << 1));
    Sprite_SetAnimCtrlSeq(*((u32*)(r5 + (0x8b << 2))), r7);
    // str r1, [r5, r0]
    // ldr r0, [sp, #4]
    // add r6, #8
    // str r0, [sp, #4]
    // ldr r0, [sp, #8]
    PlaySE(0x0000064E, 0);
}




void ov73_021E7740(void) {
    // add r2, r5, r2
    // str r0, [r5, r2]
    // add r2, #0xc
    // add r2, r5, r2
    // str r0, [r5, r3]
    // sub r3, #0xc
    // str r0, [sp]
    // add r3, r5, r3
    // str r0, [r5, r3]
    // add r3, #0xc
    // str r0, [sp]
    // add r3, r5, r3
    // str r0, [r5, r1]
}




void ov73_021E77A4(void) {
    // ldr r0, [sp, #0x18]
    SpriteToUnionRoomAvatarIdx(r3);
    // add r0, r1, r0
    GX_LoadOBJ((r0 * (6 << 8)), *((u16*)(ov73_021EA520 + (r5 << 1))), (6 << 8), (r5 << 1));
    // add r0, r6, r0
    GX_LoadOBJPltt((r4 << 5), ((r5 + 7) << 5), 0x20);
}




void ov73_021E77E8(void) {
    // ldr r0, [r4, r0]
    // ldr r0, [r4, r0]
    // ldr r0, [r4, r0]
    // ldr r0, [r4, r0]
}




u8 ov73_021E7818(void) {
}




void ov73_021E781C(void) {
    sub_0203769C();
    // mvn r0, r0
    sub_02038C1C(1);
    sub_02037454();
    // add r0, r4, r0
    sub_02038C1C(5);
    // mvn r0, r0
    // strb r1, [r5, r0]
    // strb r1, [r5, r0]
    // strb r1, [r5, r0]
}




void ov73_021E7870(void) {
    ov73_021E746C();
    // add r0, sp, #0
    // strb r2, [r0]
    // add r1, sp, #0
    sub_02037030(0x75, *((u32*)(r4 + 0x00004A1C)), 1);
    // str r1, [r4, r0]
    // add r0, r5, r5
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021E78BE: ; jump table
    sub_02037454((*((u16*)(1 + 6)) << 0x10), 0);
    sub_02033250();
    // str r1, [r4, r0]
    // sub r1, #0x12
    ov73_021E781C(r4, 0x11);
    ov73_021E6830(r4);
    sub_0205A904(2);
    // add r0, #0x11
    // ldrsb r0, [r4, r0]
    ov73_021E781C(r4, r6);
    ov73_021E781C(r4, 0);
    sub_02037454();
    // str r0, [r4, r1]
    sub_0205A904(9, 0x00004A1C);
    ov73_021E781C(r4, r6);
    ov73_021E746C();
    // str r0, [r4, r1]
}




u8 ov73_021E795C(void) {
}




void ov73_021E7960(void) {
    // add r0, #0x2c
}




void ov73_021E7964(void) {
    // mov ip, r1
    // add r6, #0xdc
    // sub r4, #0x2c
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // sub r6, #0x2c
    // str r0, [r3]
    // add r7, #0x58
    // mov r2, ip
    // ldmia r2!, {r0, r1}
    // mov ip, r2
    // stmia r7!, {r0, r1}
    // mov r0, ip
    // str r0, [r7]
}




void ov73_021E79A8(void) {
    GF_AssertFail();
    // add r3, r4, r0
    // sub r6, #0x2c
    // ldmia r7!, {r0, r1}
    // stmia r6!, {r0, r1}
    // add r3, #0x2c
    // str r0, [r6]
    // add r4, #0xdc
    // add r1, #0xdc
    // strh r0, [r4]
    *((u16*)(r4 + 0x10)) = 0x0000FFFF;
}




void ov73_021E79F4(void) {
    // str r0, [sp]
    // str r0, [sp, #0xc]
    // ldr r0, [sp]
    // str r1, [sp, #4]
    // str r3, [sp, #8]
    // ldr r0, [sp, #8]
    // ldr r1, [sp, #0xc]
    // ldr r0, [sp, #4]
    // add r1, r5, r2
    // ldr r0, [sp, #8]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0xc]
    // ldr r0, [sp]
    // str r1, [sp, #0xc]
}




void ov73_021E7A74(void) {
}




void ov73_021E7A7C(void) {
}




void ov73_021E7A84(void) {
}




void ov73_021E7A8C(void) {
    // push {r4, r5}
    // ldr r4, _021E7ABC ; =ov73_021EA664
    // lsl r5, r0, #2
    // ldr r0, [r4, r5]
    // mov r2, #0
    // ldrb r3, [r0]
    // cmp r3, #0xff
    // beq _021E7AB4
    // add r4, r0, #0
    // ldrb r3, [r0]
    // cmp r1, r3
    // bne _021E7AAA
    // mov r0, #1
    // pop {r4, r5}
    // bx lr
    // add r2, r2, #1
    // ldrb r3, [r4, r2]
    // add r0, r0, #1
    // cmp r3, #0xff
    // bne _021E7A9E
    // mov r0, #0
    // pop {r4, r5}
    // bx lr
    // nop
    // _021E7ABC: .word ov73_021EA664
    // TODO: decompile
}




void ov73_021E7AC0(void) {
    // str r3, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp]
    // str r0, [r5]
    // mov r0, #GAME_VERSION
    // add r0, #8
    // add r3, #0x18
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [sp, #4]
    // add r7, #0x30
    // str r0, [sp, #4]
    // ldr r0, [sp]
    // add r5, #0x48
}




void ov73_021E7B3C(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r2, r6, r2
}




void ov73_021E7B84(void) {
    // add r6, #0xc
    // str r0, [sp]
    // str r3, [sp, #4]
}




void ov73_021E7BC8(void) {
    // str r0, [sp]
    // add r6, #0xcc
    // str r0, [sp, #4]
}




void ov73_021E7C0C(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r2, r6, r2
}




void ov73_021E7C50(void) {
    // str r0, [sp]
    // add r6, #0xc
    // str r0, [sp, #4]
}




void ov73_021E7C94(void) {
    // str r0, [sp]
    // add r6, #0xcc
    // str r0, [sp, #4]
}




void ov73_021E7CD8(void) {
    // mvn r0, r0
    // add r3, r5, r0
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // add r2, #0x48
    // add r3, r5, r0
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // add r1, #0x48
}




void ov73_021E7D54(void) {
}




void ov73_021E7D74(void) {
    // str r0, [sp]
    // ldr r0, [sp, #0x44]
    // str r1, [sp, #4]
    // str r0, [sp, #0x44]
    // ldr r0, [sp, #0x48]
    // str r0, [sp, #0x48]
    // add r0, sp, #0x1c
    // str r3, [sp, #8]
    // ldr r5, [sp, #0x40]
    // str r5, [sp, #0x14]
    // ldr r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0xc]
    // add r0, sp, #0x1c
    // add r0, sp, #0x1c
    // strb r1, [r0, r4]
    // ldr r0, [sp, #8]
    // ldr r2, [sp, #0x44]
    // ldr r2, [sp, #0xc]
    // ldr r0, [sp]
    // ldr r2, [sp, #0x10]
    // ldr r1, [sp, #4]
    // add r2, r3, r2
    // ldr r3, [sp, #0x48]
    // ldr r0, [sp, #0x10]
    // add r0, #0x48
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x18]
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x18]
    // ldr r0, [sp, #0x14]
    // str r0, [sp, #0x14]
}




void ov73_021E7E24(void) {
    // ldr r1, [sp, #0x18]
    // str r3, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // add r0, r0, r1
    ov73_021E7D74(8, r1, r2);
}




BOOL ov73_021E7E4C(void) {
    Main_SetVBlankIntrCB(0, 0);
    HBlankInterruptDisable();
    GfGfx_DisableEngineAPlanes();
    GfGfx_DisableEngineBPlanes();
    // and r1, r0
    // str r1, [r2]
    // and r0, r1
    // str r0, [r2]
    Heap_Create(3, 0x96, (5 << 0x10));
    OverlayManager_CreateAndGetData(r6, 0x000012CC, 0x96);
    memset(0, 0x000012CC);
    BgConfig_Alloc(0x96);
    *((u32*)(r4 + 4)) = r0;
    // add r2, sp, #0
    // str r4, [r0]
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    SetBothScreensModesAndDisable(r2, ov73_021EA68C);
    MessageFormat_New_Custom(0xb, 0x20, 0x96);
    // str r0, [r4, r1]
    NewMsgDataFromNarc(0, 0x1b, 0x0000031F, 0x96);
    // str r0, [r4, r1]
    NewMsgDataFromNarc(0, 0x1b, 0x0000030A, 0x96);
    // str r0, [r4, r1]
    NewMsgDataFromNarc(0, 0x1b, (0x32 << 4), 0x96);
    // str r0, [r4, r1]
    SetKeyRepeatTimers(4, 8);
    ov73_021E8148(r4, r6);
    ov73_021E8454(r4);
    Sound_SetSceneAndPlayBGM(0x34, 0, 0);
    Heap_Alloc(0x96, 0x00020020);
    *((u32*)(r4 + 0x24)) = r0;
    // add r0, #0x1f
    NNS_FndCreateExpHeapEx((r0 & ~(0x1f)), (2 << 0x10), 0);
    *((u32*)(r4 + 0x28)) = r0;
    Sound_SetSceneAndPlayBGM(0xb, 0x0000047D, 1);
    // and r0, r1
    // strh r0, [r2]
    // str r0, [r5]
    LoadDwcOverlay(1, *((u16*)0x04000304), 0x04000304);
    LoadOVY38();
    sub_02034D8C();
    // str r0, [r5]
}




BOOL ov73_021E7FB8(void) {
    OverlayManager_GetData();
    ov00_021ECB40();
    ov72_022378DC();
    ov00_021ECB40();
    // add r0, r1, r1
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021E7FE0: ; jump table
    sub_02034DB8((*((u16*)(r0 + 6)) << 0x10), *((u32*)r4));
    *((u32*)(_021EA940 + 4)) = *((u32*)(r5 + 0x28));
    ov00_021EC294(ov73_021E83F4, ov73_021E841C);
    // str r0, [r4]
    // blx r2
    // str r0, [r4]
    IsPaletteFadeFinished(r5, *((u32*)(ov73_021EA83C + (*((u32*)(r5 + 0x10)) * 0xc))), *((u32*)(r5 + 0x10)));
    // str r0, [r4]
    // blx r2
    // str r0, [r4]
    IsPaletteFadeFinished(r5, *((u32*)(ov73_021EA840 + (*((u32*)(r5 + 0x10)) * 0xc))), *((u32*)(r5 + 0x10)));
    // blx r2
    // str r0, [r4]
    SpriteList_RenderAndAnimateSprites(*((u32*)(r5 + 0x00000BF8)), *((u32*)r4), *((u32*)(ov73_021EA844 + (*((u32*)(r5 + 0x10)) * 0xc))), *((u32*)(r5 + 0x10)));
}




BOOL ov73_021E808C(void) {
    OverlayManager_GetData();
    Heap_Free(*((u32*)(r0 + 0x24)));
    UnloadOVY38();
    UnloadDwcOverlay();
    ov73_021E847C(r4);
    DestroyMsgData(*((u32*)(r4 + 0x00000BDC)));
    DestroyMsgData(*((u32*)(r4 + 0x00000BD8)));
    DestroyMsgData(*((u32*)(r4 + 0x00000BD4)));
    MessageFormat_Delete(*((u32*)(r4 + (0xbd << 4))));
    ov73_021E8164(r4);
    sub_02034DE0();
    Heap_Free(*((u32*)(r4 + 4)));
    OverlayManager_FreeData(r5);
    Main_SetVBlankIntrCB(0, 0);
    Heap_Destroy(0x96);
}




void ov73_021E8100(void) {
    GF_RunVramTransferTasks();
    DoScheduledBgGpuUpdates(*((u32*)(r4 + 4)));
    OamManager_ApplyAndResetBuffers();
    // str r0, [r3, r1]
}




void ov73_021E8128(void) {
}




void ov73_021E8148(void) {
}




void ov73_021E8164(void) {
    // bx lr
    // TODO: decompile
}




void ov73_021E8168(void) {
    // add r3, sp, #0
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    ObjCharTransfer_Init(r3, r3);
    ObjPlttTransfer_Init(0x14, 0x96);
    ObjCharTransfer_ClearBuffers();
    ObjPlttTransfer_Reset();
}




void ov73_021E8198(void) {
    NARC_New(0x64, 0x96);
    // str r0, [sp, #0x14]
    NNS_G2dInitOamManagerModule();
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // str r2, [sp, #0x10]
    OamManager_Create(0, 0x7e, 0, 0x20);
    // add r1, r6, r1
    G2dRenderer_Init(0xa, 0x00000BFC, 0x96);
    // str r0, [r6, r1]
    // add r0, r6, r0
    G2dRenderer_SetSubSurfaceCoords((0x00000BF8 + 4), 0, (1 << 0x14));
    Create2DGfxResObjMan(2, 0, 0x96);
    // str r0, [r5, r7]
    // str r0, [sp]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // ldr r1, [sp, #0x14]
    AddCharResObjFromOpenNarc(*((u32*)(r6 + 0x00000D24)), 0x2e, 1);
    // str r0, [r6, r1]
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // sub r1, #0xc
    // str r0, [sp, #0xc]
    // ldr r1, [sp, #0x14]
    AddPlttResObjFromOpenNarc(*((u32*)(r6 + 0x00000D34)), 0x00000D34, 0xa, 0);
    // str r0, [r6, r1]
    // str r0, [sp]
    // str r0, [sp, #4]
    // sub r1, #0xc
    // str r0, [sp, #8]
    // ldr r1, [sp, #0x14]
    AddCellOrAnimResObjFromOpenNarc(*((u32*)(r6 + 0x00000D38)), 0x00000D38, 0x2f, 1);
    // str r0, [r6, r1]
    // str r0, [sp]
    // str r0, [sp, #4]
    // sub r1, #0xc
    // str r0, [sp, #8]
    // ldr r1, [sp, #0x14]
    AddCellOrAnimResObjFromOpenNarc(*((u32*)(r6 + 0x00000D3C)), 0x00000D3C, 0x30, 1);
    // str r0, [r6, r1]
    // sub r1, #0xc
    sub_0200ACF0(*((u32*)(r6 + (0x35 << 6))), (0x35 << 6));
    sub_0200AF94(*((u32*)(r6 + 0x00000D38)));
    // ldr r0, [sp, #0x14]
    NARC_Delete();
}




void ov73_021E82A8(void) {
    // str r1, [r0]
    *((u32*)(r0 + 4)) = r2;
    *((u32*)(r0 + 0x10)) = 0;
    *((u32*)(r0 + 0x14)) = (1 << 0xc);
    *((u32*)(r0 + 0x18)) = (1 << 0xc);
    *((u32*)(r0 + 0x1c)) = (1 << 0xc);
    *((u16*)(r0 + 0x20)) = 0;
    *((u32*)(r0 + 0x24)) = 1;
    *((u32*)(r0 + 0x28)) = r3;
    *((u32*)(r0 + 0x2c)) = 0x96;
}




void ov73_021E82D4(void) {
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // str r1, [sp, #0x10]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    // add r0, #8
    // str r0, [sp, #0x1c]
    // add r0, #0xc
    // add r2, #0x40
    // str r0, [sp, #0x20]
    // str r1, [sp, #0x24]
    // add r0, r5, r2
    // str r1, [sp, #0x28]
    CreateSpriteResourcesHeader(*((u32*)(r0 + 0x00000D24)), 0, 0, 0);
    // add r0, sp, #0x2c
    // add r2, r5, r2
    ov73_021E82A8(r5, 0x00000D64, 1);
    // str r0, [sp, #0x34]
    // str r0, [sp, #0x38]
    // add r0, sp, #0x2c
    Sprite_CreateAffine((*((u16*)(ov73_021EA684 + 2)) << 0xc));
    // str r0, [r5, r1]
    Sprite_SetAnimActiveFlag(*((u32*)(r5 + (0xdd << 4))), 1);
    Sprite_SetAnimCtrlSeq(*((u32*)(r5 + (0xdd << 4))), r6);
    Sprite_SetDrawFlag(*((u32*)(r5 + r7)), 0);
    GfGfx_EngineATogglePlanes(0x10, 1);
    GfGfx_EngineBTogglePlanes(0x10, 1);
    sub_0203A880();
}




void ov73_021E8390(void) {
    // str r2, [sp, #0xc]
    // str r5, [sp]
    // str r1, [sp, #4]
    // str r6, [sp, #8]
    // add r3, sp, #0
    // add r1, sp, #0
}




void ov73_021E83D4(void) {
}




void ov73_021E83EC(void) {
}




void ov73_021E83F4(void) {
    OS_DisableInterrupts();
    NNS_FndAllocFromExpHeapEx(*((u32*)(_021EA940 + 4)), r5, r4);
    OS_RestoreInterrupts(r6);
}




void ov73_021E841C(void) {
    OS_DisableInterrupts();
    NNS_FndFreeToExpHeap(*((u32*)(_021EA940 + 4)), r5);
    OS_RestoreInterrupts(r4);
}




void ov73_021E8440(void) {
}




void ov73_021E844C(void) {
}




void ov73_021E8454(void) {
    ov73_021E8128();
    ov73_021E8168();
    ov73_021E8198(r4);
    ov73_021E82D4(r4);
    Main_SetVBlankIntrCB(ov73_021E8100, r4);
}




void ov73_021E847C(void) {
    sub_0200AEB0(*((u32*)(r0 + 0x00000D34)));
    sub_0200B0A8(*((u32*)(r6 + 0x00000D38)));
    Destroy2DGfxResObjMan(*((u32*)(r6 + 0x00000D24)));
    SpriteList_Delete(*((u32*)(r6 + 0x00000BF8)));
    // str r1, [r6, r0]
    OamManager_Free(0x00000BF8, 0);
    ObjCharTransfer_Destroy();
    ObjPlttTransfer_Destroy();
}




void ov73_021E84D0(void) {
    ov73_021E8B64();
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 1, 1, 0);
    ov73_021E8628(*((u32*)(r4 + 4)));
    ov73_021E8730(r4);
    ov73_021E8A08(r4);
    GfGfx_EngineATogglePlanes(1, 1);
    GfGfx_EngineATogglePlanes(2, 1);
    GfGfx_EngineBTogglePlanes(1, 1);
    GfGfx_EngineBTogglePlanes(2, 1);
    sub_02039418(*((u32*)(*((u32*)r4) + 0xc)));
    ov73_021EA12C(r4);
    sub_0202D488(*((u32*)*((u32*)r4)), 0);
    // add r1, #0x90
    // str r0, [r1]
    // add r0, #0x90
    // add r0, #0x94
    // str r1, [r0]
    // add r0, #0x9c
    // str r1, [r0]
    // str r1, [r4, r0]
    ov00_021EC5B4(0x00000F0C, 0);
    // str r0, [sp]
    ov73_021E9FF8(r4, *((u32*)(r4 + 0x00000BD8)), 1, 1);
    ov73_021E83EC(r4, 0x2f, 2);
    ov73_021EA15C(r4);
    *((u32*)(r4 + 0x1c)) = 0;
    *((u32*)(r4 + 0x1c)) = 0x33;
}




void ov73_021E85AC(void) {
    ov73_021E8440();
    sub_0203A930();
    // blx r1
    // strh r2, [r5, r1]
    // strh r2, [r5, r1]
}




void ov73_021E85DC(void) {
    SysTask_Destroy(*((u32*)(r0 + 0x00000F98)));
    // str r1, [r4, r0]
    // str r1, [r4, r0]
    ov73_021E8BBC(r4, 0);
    ov73_021E8B20(r4);
    ov73_021E870C(*((u32*)(r4 + 4)));
    // str r1, [r4, r0]
    *((u32*)(r4 + 0x10)) = *((u32*)(r4 + 0x14));
}




void ov73_021E8628(void) {
    // ldmia r5!, {r0, r1}
    // add r3, sp, #0x54
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r0, 0, r3, 0);
    GfGfx_EngineATogglePlanes(1, 0);
    BgClearTilemapBufferAndCommit(r4, 0);
    // add r3, sp, #0x38
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 1, r3, 0);
    GfGfx_EngineATogglePlanes(2, 0);
    // add r3, sp, #0x1c
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 4, r3, 0);
    GfGfx_EngineBTogglePlanes(1, 0);
    BgClearTilemapBufferAndCommit(r4, 4);
    // add r3, sp, #0
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 5, r3, 0);
    GfGfx_EngineBTogglePlanes(2, 0);
    BG_ClearCharDataRange(0, 0x20, 0, 0x96);
    BG_ClearCharDataRange(4, 0x20, 0, 0x96);
}




void ov73_021E870C(void) {
}




void ov73_021E8730(void) {
    // str r0, [sp, #0x10]
    NARC_New(0x58, 0x96);
    // str r2, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #0x2c]
    GfGfxLoader_GXLoadPalFromOpenNarc(3, 0, 0);
    // str r3, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x2c]
    GfGfxLoader_GXLoadPalFromOpenNarc(0x96, 3, 4, 0);
    LoadFontPal1(0, (0x1a << 4), 0x96);
    LoadFontPal1(4, (0x1a << 4), 0x96);
    // ldr r0, [sp, #0x10]
    Options_GetFrame(*((u32*)(*((u32*)r0) + 0x10)));
    // str r0, [sp]
    // str r0, [sp, #4]
    LoadUserFrameGfx2(r4, 0, 1, 0xe);
    // str r1, [sp]
    // str r0, [sp, #4]
    LoadUserFrameGfx1(r4, 0, 0x1f, 0xb);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x2c]
    GfGfxLoader_LoadCharDataFromOpenNarc(0x96, 2, r4, 1);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x2c]
    GfGfxLoader_LoadScrnDataFromOpenNarc(0x96, 6, r4, 1);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x2c]
    GfGfxLoader_LoadCharDataFromOpenNarc(0x96, 0xb, r4, 5);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x2c]
    GfGfxLoader_LoadScrnDataFromOpenNarc(0x96, 0xc, r4, 5);
    BG_SetMaskColor(0, 0);
    BG_SetMaskColor(4, 0);
    // ldr r0, [sp, #0x10]
    // add r0, r0, r1
    MI_CpuFill8(0, (0x33 << 4));
    // ldr r0, [sp, #0x2c]
    // add r2, sp, #0x38
    GfGfxLoader_GetPlttDataFromOpenNarc(5, 0x96);
    // ldr r0, [sp, #0x38]
    // ldr r1, [sp, #0x10]
    // add r1, r1, r2
    MIi_CpuCopy16(*((u32*)(r0 + 0xc)), 0x80);
    // ldr r0, [sp, #0x38]
    // ldr r1, [sp, #0x10]
    // add r1, r1, r2
    MIi_CpuCopy16(*((u32*)(r0 + 0xc)), 0x80);
    Heap_Free(r4);
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x28]
    // ldr r0, [sp, #0x10]
    // add r0, r0, r1
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x10]
    // sub r1, #0x80
    // add r0, r0, r1
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x20]
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x28]
    // ldr r0, [sp, #0x10]
    // add r0, r0, r1
    // str r0, [sp, #0x30]
    // ldr r0, [sp, #0x24]
    GF_AssertFail((0 + 1), ((0 + 1) << 5));
    // ldr r0, [sp, #0x30]
    // ldr r0, [sp, #0x18]
    // ldr r0, [sp, #0x14]
    // ldr r0, [sp, #0x20]
    // asr r0, r0, #8
    // str r0, [sp, #0x34]
    // ldr r3, [sp, #0x34]
    // str r0, [sp]
    BlendPalette((r0 + 2), (r0 + 2), 1);
    // ldr r0, [sp, #0x18]
    // add r0, #0x20
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x24]
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #0x1c]
    // ldr r1, [sp, #0x20]
    // add r1, r1, r0
    // str r1, [sp, #0x20]
    // str r0, [sp, #0x20]
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x14]
    // add r0, #0x20
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x28]
    // str r0, [sp, #0x28]
    // ldr r0, [sp, #0x10]
    // add r0, r0, r1
    DC_FlushRange((1 + 1), (0x2a << 4));
    // ldr r0, [sp, #0x10]
    // str r2, [r0, r1]
    // str r3, [r0, r2]
    // ldr r1, [sp, #0x10]
    // add r1, r1, r2
    SysTask_CreateOnVBlankQueue(ov73_021E8960, 0x00000F9C, 0x14, 0);
    // ldr r1, [sp, #0x10]
    // str r0, [r1, r2]
    // ldr r0, [sp, #0x2c]
    NARC_Delete(0x00000F98);
}




void ov73_021E8960(void) {
    // eor r2, r0
    // strb r2, [r4, r1]
    // tst r0, r2
    // ldrsh r0, [r4, r0]
    // add r2, #0x88
    // add r0, r2, r0
    GX_LoadBGPltt(((0x0000032B - 3) << 5), 0, 0x20);
    // ldrsh r0, [r4, r0]
    // add r1, #0x88
    // add r0, r1, r0
    GXS_LoadBGPltt(((0xca << 2) << 5), 0, 0x20);
    // ldrsb r1, [r4, r0]
    // ldrsh r1, [r4, r1]
    // strh r2, [r4, r1]
    // ldrsh r1, [r4, r1]
    // strh r2, [r4, r1]
    // ldrsb r2, [r4, r0]
    // eor r1, r2
    // strb r1, [r4, r0]
    // ldrsh r1, [r4, r1]
    // strh r2, [r4, r1]
    // ldrsh r1, [r4, r1]
    // strh r2, [r4, r1]
    // ldrsb r1, [r4, r0]
    // eor r1, r2
    // strb r1, [r4, r0]
}




void ov73_021E8A08(void) {
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, r4, r1
    AddWindowParameterized(*((u32*)(r0 + 4)), 0x00000E18, 0, 4);
    // add r0, r4, r0
    FillWindowPixelBuffer(0x00000E18, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, r4, r1
    AddWindowParameterized(*((u32*)(r4 + 4)), 0x00000DF8, 0, 0x1a);
    // add r0, r4, r0
    FillWindowPixelBuffer(0x00000DF8, 0xf);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, r4, r1
    AddWindowParameterized(*((u32*)(r4 + 4)), 0x00000DE8, 0, 0x1a);
    // add r0, r4, r0
    FillWindowPixelBuffer(0x00000DE8, 0xf);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, r4, r1
    AddWindowParameterized(*((u32*)(r4 + 4)), 0x00000E08, 0, 4);
    // add r0, r4, r0
    FillWindowPixelBuffer(0x00000E08, 0);
    // str r3, [sp]
    // str r0, [sp, #4]
    // add r0, r4, r0
    ov73_021EA088(0x00000E08, *((u32*)(r4 + 0x00000BE4)), 0, 1);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, r4, r1
    AddWindowParameterized(*((u32*)(r4 + 4)), 0x00000DD8, 0, 2);
    // add r0, r4, r0
    FillWindowPixelBuffer(0x00000DD8, 0xf);
}




void ov73_021E8B20(void) {
    // add r0, r4, r0
    RemoveWindow(0x00000DD8);
    // add r0, r4, r0
    RemoveWindow(0x00000E08);
    // add r0, r4, r0
    RemoveWindow(0x00000DE8);
    // add r0, r4, r0
    RemoveWindow(0x00000DF8);
    // add r0, r4, r0
    RemoveWindow(0x00000E18);
}




void ov73_021E8B64(void) {
    String_New(0xb4, 0x96);
    // str r0, [r4, r1]
    String_New(4, 0x96);
    // str r0, [r4, r1]
    String_New(3, 0x96);
    // str r0, [r4, r1]
    // sub r1, #0x18
    NewString_ReadMsgData(*((u32*)(r4 + 0x00000BEC)), 0xa);
    // str r0, [r4, r1]
    String_New((1 << 8), 0x96);
    // str r0, [r4, r1]
}




void ov73_021E8BBC(void) {
    String_Delete(*((u32*)(r0 + (0xbf << 4))));
    String_Delete(*((u32*)(r4 + 0x00000BE4)));
    String_Delete(*((u32*)(r4 + 0x00000BEC)));
    String_Delete(*((u32*)(r4 + 0x00000BE8)));
    String_Delete(*((u32*)(r4 + (0xbe << 4))));
}




void ov73_021E8BFC(void) {
    // str r1, [sp]
    ov73_021E9FF8(*((u32*)(r0 + 0x00000BDC)), 0x11, 1);
    ov73_021E83EC(r4, 0x30, 1);
}




void ov73_021E8C2C(void) {
    ov73_021E83D4(*((u32*)(r0 + 0x000012C8)));
    sub_0203946C();
    ov73_021E844C(r4, 0, 0);
    *((u32*)(r4 + 0x1c)) = 0x2e;
    // str r0, [sp]
    ov73_021E9FF8(r4, *((u32*)(r4 + 0x00000BD8)), 1, 1);
    ov73_021E83EC(r4, 0x2f, 2);
    ov73_021EA15C(r4);
}




void ov73_021E8C8C(void) {
    // str r1, [sp]
    ov73_021E9FF8(*((u32*)(r0 + 0x00000BD8)), 0xc, 1);
    ov73_021E83EC(r4, 0x30, 0x34);
}




void ov73_021E8CBC(void) {
    ov73_021E83D4(*((u32*)(r0 + 0x000012C8)));
    ov00_021EC5B4();
    *((u32*)(r4 + 0x1c)) = 0;
    *((u32*)(r4 + 0x1c)) = 0x29;
    ov00_021EC5B4(0x29);
    ov73_021E844C(r4, 0, 0);
    *((u32*)(r4 + 0x1c)) = 0x29;
    *((u32*)(*((u32*)r4) + 0x20)) = 1;
}




void ov73_021E8D0C(void) {
}




void ov73_021E8D2C(void) {
    ov00_021EC60C();
    ov00_021EC5B4();
    ov00_021EC724();
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021E8D52: ; jump table
    // add r0, sp, #4
    ov00_021EC0FC((*((u16*)(r0 + 6)) << 0x10));
    // str r0, [r4, r1]
    // ldr r2, [sp, #4]
    // str r2, [r4, r0]
    ov00_021EC210(((0xf1 << 4) + 4), (0xf1 << 4));
    ov00_021EC8D8();
    ov73_021EA180(r4);
    *((u32*)(r4 + 0x1c)) = 0x37;
    // add r0, sp, #0
    ov00_021EC0FC(0x37);
    ov73_021EA180(r4);
    *((u32*)(r4 + 0x1c)) = 0x35;
    // sub r1, #0x37
    // str r1, [r4, r0]
    // add r0, sp, #8
    ov00_021EC9E0(0x00000F1C, 0x35);
    *((u32*)(r4 + 0x1c)) = 4;
}




void ov73_021E8DB8(void) {
}




void ov73_021E8DC8(void) {
    ov00_021ECDC8();
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021E8DE2: ; jump table
    *((u32*)(r4 + 0x1c)) = 6;
    ov73_021EA180(r4);
    // add r0, sp, #4
    // add r1, sp, #0
    ov00_021EC11C();
    // str r0, [r4, r1]
    // ldr r2, [sp, #4]
    // str r2, [r4, r0]
    ov00_021EC210(((0xf1 << 4) + 4), (0xf1 << 4));
    ov00_021EC8D8();
    *((u32*)(r4 + 0x1c)) = 0x37;
    // ldr r1, [sp]
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _021E8E2C: ; jump table
    *((u32*)(r4 + 0x1c)) = 0x37;
    ov00_021FA0D8(0x37, (*((u16*)(r1 + 6)) << 0x10));
    *((u32*)(r4 + 0x1c)) = 0x37;
    *((u32*)(r4 + 0x1c)) = 0x37;
    ov00_021ED9B4(0x37);
    *((u32*)(r4 + 0x1c)) = 0x37;
    sub_020399EC(0x37);
    // ldr r1, [sp, #4]
    *((u32*)(r4 + 0x1c)) = 0x37;
}




void ov73_021E8E7C(void) {
}




void ov73_021E8EBC(void) {
}




void ov73_021E8ED8(void) {
    ov72_02237B54();
    ov72_02237B74();
    // str r2, [r4, r1]
    // add r2, r2, r2
    // add r2, pc
    // asr r2, r2, #0x10
    // add pc, r2
    // _021E8F00: ; jump table
    ov73_021EA180(r4, 0x00000F94, (*((u16*)((r0 + 7) + 6)) << 0x10));
    ov73_021E83EC(r4, 0xb, 0xd);
    *((u32*)(r4 + 0x1c)) = 0x19;
    *((u32*)(r4 + 0x1c)) = 0x1d;
    // sub r1, #0x78
    // str r0, [r4, r1]
    *((u32*)(r4 + 0x1c)) = 0x35;
    ov73_021EA180(r4);
    // sub r1, #0x78
    // str r0, [r4, r1]
    *((u32*)(r4 + 0x1c)) = 0x35;
    ov73_021EA180(r4);
    // sub r1, #0x78
    // str r0, [r4, r1]
    *((u32*)(r4 + 0x1c)) = 0x35;
    ov73_021EA180(r4);
    // sub r1, #0x78
    // str r0, [r4, r1]
    *((u32*)(r4 + 0x1c)) = 0x35;
    ov73_021EA180(r4);
    ov73_021EA180(r4);
    sub_020399EC();
    // str r1, [r4, r0]
    sub_020399EC((0xe1 << 4), *((u32*)(r4 + 0x00000F94)));
}




void ov73_021E8FB0(void) {
    // add r1, r4, r1
    sub_0203189C(*((u32*)(*((u32*)r0) + 0xc)), 0x00000F24);
    // add r0, r4, r1
    // add r1, #0x64
    // add r1, r4, r1
    ov72_02237CF4(0x00000F24);
    *((u32*)(r4 + 0x1c)) = 0xa;
    // str r1, [r4, r0]
}




void ov73_021E8FE4(void) {
    ov72_02237B54();
    ov72_02237B74();
    // str r1, [r4, r0]
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _021E9010: ; jump table
    ov73_021EA180(r4, (*((u16*)((r0 + 7) + 6)) << 0x10));
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _021E9050: ; jump table
    ov73_021E83EC(r4, 0xb, 0xd);
    *((u32*)(r4 + 0x1c)) = 0x19;
    *((u32*)(r4 + 0x1c)) = 0x1d;
    // sub r0, #0x6c
    // str r5, [r4, r0]
    *((u32*)(r4 + 0x1c)) = 0x35;
    ov73_021EA180(r4);
    // str r5, [r4, r0]
    *((u32*)(r4 + 0x1c)) = 0x35;
    ov73_021EA180(r4);
    ov73_021EA180(r4);
    sub_020399EC();
    // sub r0, #0x78
    // str r5, [r4, r0]
    *((u32*)(r4 + 0x1c)) = 0x35;
    ov73_021EA180(r4);
    // sub r0, #0x78
    // str r5, [r4, r0]
    *((u32*)(r4 + 0x1c)) = 0x35;
    ov73_021EA180(r4);
    // sub r0, #0x78
    // str r5, [r4, r0]
    *((u32*)(r4 + 0x1c)) = 0x35;
    ov73_021EA180(r4);
    // sub r0, #0x78
    // str r5, [r4, r0]
    *((u32*)(r4 + 0x1c)) = 0x35;
    ov73_021EA180(r4);
    ov73_021EA180(r4);
    sub_020399EC();
    // str r1, [r4, r0]
    sub_020399EC((0xe1 << 4), *((u32*)(r4 + 0x00000F94)));
}




void ov73_021E9120(void) {
    // add r0, #0x94
    ov72_02237B80(*((u32*)r0));
    *((u32*)(r4 + 0x1c)) = 0xc;
    // str r1, [r4, r0]
    ov73_021EA15C(r4, 0);
}




void ov73_021E9144(void) {
    ov72_02237B54();
    ov72_02237B74();
    // str r2, [r4, r1]
    // add r2, r2, r2
    // add r2, pc
    // asr r2, r2, #0x10
    // add pc, r2
    // _021E916C: ; jump table
    // sub r1, #0x78
    // str r0, [r4, r1]
    *((u32*)(r4 + 0x1c)) = 0x35;
    // sub r1, #0x78
    // str r0, [r4, r1]
    *((u32*)(r4 + 0x1c)) = 0x35;
    // sub r1, #0x78
    // str r0, [r4, r1]
    *((u32*)(r4 + 0x1c)) = 0x35;
    // sub r1, #0x78
    // str r0, [r4, r1]
    *((u32*)(r4 + 0x1c)) = 0x35;
    // sub r1, #0x78
    // str r0, [r4, r1]
    *((u32*)(r4 + 0x1c)) = 0x35;
    // sub r1, #0x78
    // str r0, [r4, r1]
    *((u32*)(r4 + 0x1c)) = 0x35;
    ov73_021EA180(r4, 0x00000F94, (*((u16*)((r0 + 7) + 6)) << 0x10));
    sub_020399EC();
    // add r1, #0x98
    // str r0, [r1]
    *((u32*)(r4 + 0x1c)) = *((u32*)(r4 + 0x20));
    ov73_021EA180(r4, r4);
    // str r1, [r4, r0]
    sub_020399EC((0xe1 << 4), *((u32*)(r4 + 0x00000F94)));
}




void ov73_021E91F4(void) {
    // str r1, [sp]
    ov73_021E9FF8(*((u32*)(r0 + 0x00000BD4)), 0, 1);
    ov73_021E83EC(r4, 0x2f, 0xe);
}




void ov73_021E9224(void) {
    // add r0, r4, r0
    DrawFrameAndWindow1(0x00000DF8, 0, 0x1f, 0xe);
    // add r2, #0x9c
    // add r0, r4, r0
    ov73_021EA0F0(0x00000DF8, *((u32*)(r4 + 0x00000BE8)), *((u32*)r4), 3);
    ov73_021EA134(r4, 0, 1);
    // add r0, r4, r0
    CopyWindowToVram(0x00000DF8);
    *((u32*)(r4 + 0x1c)) = 0xf;
}




void ov73_021E926C(void) {
    // tst r1, r3
    // add r0, #0x9c
    // add r0, #0x9c
    // str r1, [r0]
    // add r0, #0x9c
    // add r0, #0x98
    // add r0, #0x9c
    // str r1, [r0]
    // add r0, r4, r0
    // add r4, #0x9c
    ov73_021EA0F0(0x00000DF8, *((u32*)(r0 + 0x00000BE8)), *((u32*)r0), 3);
    PlaySE(0x000005DC);
    // tst r1, r3
    // add r0, #0x9c
    // add r0, #0x9c
    // str r1, [r0]
    // add r0, #0x9c
    // add r0, #0x98
    // add r0, #0x9c
    // str r1, [r0]
    // add r0, r4, r0
    // add r4, #0x9c
    ov73_021EA0F0(0x00000DF8, *((u32*)(r4 + 0x00000BE8)), *((u32*)r4), 3);
    PlaySE(0x000005DC);
    // tst r1, r2
    // add r0, sp, #0
    // add r1, sp, #0x10
    ov00_021ECB94(1, *((u32*)(r2 + 0x48)));
    // add r1, #0x94
    // add r2, #0x9c
    // add r3, sp, #0
    sub_0202D720(*((u32*)(*((u32*)r4) + 4)), ((*((u32*)r4) << 0x18) >> 0x18), ((*((u32*)r4) << 0x18) >> 0x18));
    *((u32*)(r4 + 0x1c)) = 0x10;
    ov73_021EA134(r4, 0, 0);
    PlaySE(0x000005DC);
    // tst r1, r2
    ov73_021EA134(0, 0);
    *((u32*)(r4 + 0x1c)) = 0x15;
    PlaySE(0x000005DC);
}




void ov73_021E9378(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r2, #0x9c
    BufferIntegerAsString(*((u32*)(r0 + (0xbd << 4))), 0, *((u32*)r0), 3);
    // str r3, [sp]
    // str r1, [sp, #4]
    // add r2, #0x94
    BufferIntegerAsString(*((u32*)(r4 + (0xbd << 4))), 1, *((u32*)r4), 2);
    // str r0, [sp]
    ov73_021E9F34(r4, *((u32*)(r4 + 0x00000BD4)), 1, 1);
    ov73_021E83EC(r4, 0x2f, 0x11);
    // add r4, #0xa0
    MIi_CpuClearFast(0, r4, 0x00000A38);
}




void ov73_021E93EC(void) {
    // str r1, [sp]
    ov73_021E9F34(*((u32*)(r0 + 0x00000BD4)), 2, 1);
    ov73_021E83EC(r4, 0x2f, 0xd);
}




void ov73_021E941C(void) {
    // add r0, #0x90
    // add r1, #0x9c
    // add r2, #0xa0
    ov72_02237BD0(*((u32*)r0), *((u32*)r0), r0);
    ov73_021EA15C(r4);
    *((u32*)(r4 + 0x1c)) = 0x12;
    // str r1, [r4, r0]
}




void ov73_021E944C(void) {
    ov72_02237B54();
    ov72_02237B74();
    // str r2, [r4, r1]
    // add r2, r2, r2
    // add r2, pc
    // asr r2, r2, #0x10
    // add pc, r2
    // _021E9476: ; jump table
    // add r2, #0x90
    // add r3, #0x9c
    // add r1, #0xa0
    sub_0202D7C0(*((u32*)(*((u32*)r4) + 4)), r4, ((*((u32*)r4) << 0x18) >> 0x18), ((*((u32*)r4) << 0x18) >> 0x18));
    ov73_021E83EC(r4, 0x27, 0x13);
    // add r0, sp, #0
    // add r1, sp, #0x10
    ov00_021ECB94();
    // add r1, #0x94
    // add r4, #0x9c
    // add r3, sp, #0
    sub_0202D678(*((u32*)(*((u32*)r4) + 4)), ((*((u32*)r4) << 0x18) >> 0x18), ((*((u32*)r4) << 0x18) >> 0x18));
    // sub r1, #0x78
    // str r0, [r4, r1]
    *((u32*)(r4 + 0x1c)) = 0x35;
    ov73_021EA180(r4);
    // sub r1, #0x78
    // str r0, [r4, r1]
    *((u32*)(r4 + 0x1c)) = 0x35;
    ov73_021EA180(r4);
    // sub r1, #0x78
    // str r0, [r4, r1]
    *((u32*)(r4 + 0x1c)) = 0xb;
    ov73_021EA180(r4);
    // sub r1, #0x78
    // str r0, [r4, r1]
    *((u32*)(r4 + 0x1c)) = 0x35;
    ov73_021EA180(r4);
    // sub r1, #0x78
    // str r0, [r4, r1]
    *((u32*)(r4 + 0x1c)) = 0x35;
    ov73_021EA180(r4);
    // sub r1, #0x78
    // str r0, [r4, r1]
    *((u32*)(r4 + 0x1c)) = 0x35;
    ov73_021EA180(r4);
    sub_020399EC();
    // str r1, [r4, r0]
    sub_020399EC((0xe1 << 4), *((u32*)(r4 + 0x00000F94)));
}




void ov73_021E955C(void) {
    // str r1, [sp]
    ov73_021E9FF8(*((u32*)(r0 + 0x00000BD4)), 3, 1);
    ov73_021E83EC(r4, 0x2f, 0x2d);
    ov73_021EA180(r4);
    *((u32*)(*((u32*)r4) + 0x20)) = 0;
}




void ov73_021E9598(void) {
    // str r1, [sp]
    ov73_021E9FF8(*((u32*)(r0 + 0x00000BD4)), 7, 1);
    ov73_021E83EC(r4, 0x2f, 0x1a);
    ov73_021EA15C(r4);
}




void ov73_021E95CC(void) {
    sub_0202D568(*((u32*)*((u32*)r0)));
    // add r1, sp, #0
    sub_0202D7F0(*((u32*)(*((u32*)r5) + 4)));
    // add r2, r5, r2
    sub_02069528(*((u32*)(*((u32*)r5) + 0xc)), 1, 0x00000AD8);
    // add r1, sp, #0
    // add r3, r5, r3
    ov72_02237C30(*((u8*)r1), *((u8*)(r1 + 1)), r4, 0x00000AD8);
    *((u32*)(r5 + 0x1c)) = 0x1b;
    // str r1, [r5, r0]
}




void ov73_021E9618(void) {
    ov72_02237B54();
    ov72_02237B74();
    // str r2, [r4, r1]
    // add r2, r2, r2
    // add r2, pc
    // asr r2, r2, #0x10
    // add pc, r2
    // _021E9640: ; jump table
    sub_0202D5DC(*((u32*)*((u32*)r4)), 5, 2);
    ov73_021E83EC(r4, 0x27, 0x1c);
    // sub r1, #0x78
    // str r0, [r4, r1]
    *((u32*)(r4 + 0x1c)) = 0x35;
    ov73_021EA180(r4);
    // sub r1, #0x78
    // str r0, [r4, r1]
    *((u32*)(r4 + 0x1c)) = 0x35;
    ov73_021EA180(r4);
    // sub r1, #0x78
    // str r0, [r4, r1]
    *((u32*)(r4 + 0x1c)) = 0x35;
    ov73_021EA180(r4);
    // sub r1, #0x78
    // str r0, [r4, r1]
    *((u32*)(r4 + 0x1c)) = 0x35;
    ov73_021EA180(r4);
    // sub r1, #0x78
    // str r0, [r4, r1]
    *((u32*)(r4 + 0x1c)) = 0x35;
    ov73_021EA180(r4);
    // sub r1, #0x78
    // str r0, [r4, r1]
    *((u32*)(r4 + 0x1c)) = 0x35;
    ov73_021EA180(r4);
    sub_020399EC();
    // str r1, [r4, r0]
    sub_020399EC((0xe1 << 4), *((u32*)(r4 + 0x00000F94)));
}




void ov73_021E96EC(void) {
    // str r1, [sp]
    ov73_021E9FF8(*((u32*)(r0 + 0x00000BD4)), 8, 1);
    ov73_021E83EC(r4, 0x2f, 0x2d);
    ov73_021EA180(r4);
    *((u32*)(*((u32*)r4) + 0x20)) = 0;
}




void ov73_021E9728(void) {
    // str r1, [sp]
    ov73_021E9FF8(*((u32*)(r0 + 0x00000BD4)), 5, 1);
    ov73_021E83EC(r4, 0x2f, 0x1e);
}




void ov73_021E9758(void) {
    // add r0, #0x94
    // str r1, [r0]
    // add r0, r4, r0
    DrawFrameAndWindow1(0x00000DE8, 0, 0x1f, 0xe);
    // add r2, #0x94
    // add r0, r4, r0
    ov73_021EA0F0(0x00000DE8, *((u32*)(r4 + 0x00000BEC)), *((u32*)r4), 2);
    ov73_021EA134(r4, 1, 1);
    // add r0, r4, r0
    CopyWindowToVram(0x00000DE8);
    *((u32*)(r4 + 0x1c)) = 0x1f;
}




void ov73_021E97A8(void) {
    // tst r1, r3
    // add r0, #0x94
    // add r0, #0x94
    // str r1, [r0]
    // add r0, #0x94
    // add r0, #0x94
    // str r1, [r0]
    // add r0, r4, r0
    // add r4, #0x94
    ov73_021EA0F0(0x00000DE8, *((u32*)(r0 + 0x00000BEC)), *((u32*)r0), 2);
    PlaySE(0x000005DC);
    // tst r1, r3
    // add r0, #0x94
    // add r0, #0x94
    // str r1, [r0]
    // add r0, #0x94
    // add r0, #0x94
    // str r1, [r0]
    // add r0, r4, r0
    // add r4, #0x94
    ov73_021EA0F0(0x00000DE8, *((u32*)(r4 + 0x00000BEC)), *((u32*)r4), 2);
    PlaySE(0x000005DC);
    // tst r1, r2
    ov73_021EA134(0, 0);
    ov73_021E83EC(r4, 0xb, 0x20);
    PlaySE(0x000005DC);
    // tst r1, r2
    ov73_021EA134(0, 0);
    *((u32*)(r4 + 0x1c)) = 0x17;
    PlaySE(0x000005DC);
}




void ov73_021E987C(void) {
    // str r1, [sp]
    ov73_021E9FF8(*((u32*)(r0 + 0x00000BD4)), 6, 1);
    ov73_021E83EC(r4, 0x2f, 0x21);
}




void ov73_021E98AC(void) {
    // add r0, #0x9c
    // str r1, [r0]
    // add r0, r4, r0
    DrawFrameAndWindow1(0x00000DF8, 0, 0x1f, 0xe);
    // add r2, #0x9c
    // add r0, r4, r0
    ov73_021EA0F0(0x00000DF8, *((u32*)(r4 + 0x00000BE8)), *((u32*)r4), 3);
    ov73_021EA134(r4, 0, 1);
    // add r0, r4, r0
    CopyWindowToVram(0x00000DF8);
    *((u32*)(r4 + 0x1c)) = 0x22;
}




void ov73_021E98FC(void) {
    // tst r1, r3
    // add r0, #0x9c
    // add r0, #0x9c
    // str r1, [r0]
    // add r0, #0x9c
    // add r0, #0x98
    // add r0, #0x9c
    // str r1, [r0]
    // add r0, r4, r0
    // add r4, #0x9c
    ov73_021EA0F0(0x00000DF8, *((u32*)(r0 + 0x00000BE8)), *((u32*)r0), 3);
    PlaySE(0x000005DC);
    // tst r1, r3
    // add r0, #0x9c
    // add r0, #0x9c
    // str r1, [r0]
    // add r0, #0x9c
    // add r0, #0x98
    // add r0, #0x9c
    // str r1, [r0]
    // add r0, r4, r0
    // add r4, #0x9c
    ov73_021EA0F0(0x00000DF8, *((u32*)(r4 + 0x00000BE8)), *((u32*)r4), 3);
    PlaySE(0x000005DC);
    // tst r1, r2
    ov73_021EA134(0, 0);
    *((u32*)(r4 + 0x1c)) = 0x23;
    PlaySE(0x000005DC);
    // tst r1, r2
    ov73_021EA134(0, 0);
    *((u32*)(r4 + 0x1c)) = 0x1d;
    PlaySE(0x000005DC);
}




void ov73_021E99D4(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r2, #0x9c
    BufferIntegerAsString(*((u32*)(r0 + (0xbd << 4))), 0, *((u32*)r0), 3);
    // str r3, [sp]
    // str r1, [sp, #4]
    // add r2, #0x94
    BufferIntegerAsString(*((u32*)(r4 + (0xbd << 4))), 1, *((u32*)r4), 2);
    // str r0, [sp]
    ov73_021E9F34(r4, *((u32*)(r4 + 0x00000BD4)), 1, 1);
    ov73_021E83EC(r4, 0x2f, 0x24);
    *((u32*)(r4 + 0x1c)) = 0x24;
}




void ov73_021E9A3C(void) {
    // add r0, #0x94
    // add r1, #0x9c
    // add r2, #0xa0
    ov72_02237BD0(*((u32*)r0), *((u32*)r0), r0);
    *((u32*)(r4 + 0x1c)) = 0x25;
    // str r1, [r4, r0]
    ov73_021EA15C(r4, 0);
}




void ov73_021E9A6C(void) {
    ov72_02237B54();
    ov72_02237B74();
    // str r2, [r4, r1]
    // add r2, r2, r2
    // add r2, pc
    // asr r2, r2, #0x10
    // add pc, r2
    // _021E9A94: ; jump table
    // add r2, #0x94
    // add r3, #0x9c
    // add r1, r4, r1
    sub_0202D8A4(*((u32*)(*((u32*)r4) + 4)), 0x000006DC, ((*((u32*)r4) << 0x18) >> 0x18), ((*((u32*)r4) << 0x18) >> 0x18));
    ov73_021E83EC(r4, 0x27, 0x26);
    // sub r1, #0x78
    // str r0, [r4, r1]
    *((u32*)(r4 + 0x1c)) = 0x35;
    ov73_021EA180(r4);
    // sub r1, #0x78
    // str r0, [r4, r1]
    *((u32*)(r4 + 0x1c)) = 0x35;
    ov73_021EA180(r4);
    // sub r1, #0x78
    // str r0, [r4, r1]
    *((u32*)(r4 + 0x1c)) = 0xb;
    ov73_021EA180(r4);
    // sub r1, #0x78
    // str r0, [r4, r1]
    *((u32*)(r4 + 0x1c)) = 0x35;
    ov73_021EA180(r4);
    *((u32*)(r4 + 0x1c)) = 0xb;
    // sub r1, #0x78
    // str r0, [r4, r1]
    ov73_021EA180(r4, 0xb);
    // sub r1, #0x78
    // str r0, [r4, r1]
    *((u32*)(r4 + 0x1c)) = 0x35;
    ov73_021EA180(r4);
    sub_020399EC();
    // str r1, [r4, r0]
    sub_020399EC((0xe1 << 4), *((u32*)(r4 + 0x00000F94)));
}




void ov73_021E9B58(void) {
    // str r1, [sp]
    ov73_021E9FF8(*((u32*)(r0 + 0x00000BD4)), 3, 1);
    ov73_021E83EC(r4, 0x2f, 0x2d);
    ov73_021EA180(r4);
    *((u32*)(*((u32*)r4) + 0x20)) = 0;
}




void ov73_021E9B94(void) {
}




void ov73_021E9B9C(void) {
}




void ov73_021E9BB4(void) {
}




void ov73_021E9BD4(void) {
    // str r1, [sp]
    ov73_021E9FF8(*((u32*)(r0 + 0x00000BD4)), 4, 1);
    ov73_021E83EC(r4, 0x30, 0x16);
}




void ov73_021E9C04(void) {
    ov73_021E83D4(*((u32*)(r0 + 0x000012C8)));
    *((u32*)(r4 + 0x1c)) = 0xd;
    *((u32*)(r4 + 0x1c)) = 0x29;
    *((u32*)(*((u32*)r4) + 0x20)) = 1;
}




void ov73_021E9C30(void) {
    // str r1, [sp]
    ov73_021E9FF8(*((u32*)(r0 + 0x00000BD4)), 9, 1);
    ov73_021E83EC(r4, 0x30, 0x18);
}




void ov73_021E9C60(void) {
    ov73_021E83D4(*((u32*)(r0 + 0x000012C8)));
    *((u32*)(r4 + 0x1c)) = 0x1d;
    *((u32*)(r4 + 0x1c)) = 0x29;
    *((u32*)(*((u32*)r4) + 0x20)) = 1;
}




void ov73_021E9C8C(void) {
    // str r1, [sp]
    ov73_021E9FF8(*((u32*)(r0 + 0x00000BDC)), 0x1a, 1);
    ov73_021E83EC(r4, 0x2f, 0x2a);
}




u32 ov73_021E9CBC(void) {
}




void ov73_021E9CD8(void) {
    // str r1, [sp]
    ov73_021E9FF8(*((u32*)(r0 + 0x00000BDC)), 0x1b, 1);
    ov73_021E83EC(r4, 0x31, 0x2e);
    // str r1, [r4, r0]
}




u8 ov73_021E9D10(void) {
}




void ov73_021E9D14(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
}




void ov73_021E9D44(void) {
    ov73_021E83D4(*((u32*)(r0 + 0x000012C8)));
    *((u32*)(r4 + 0x1c)) = 0;
    *((u32*)(r4 + 0x1c)) = 0x29;
}




void ov73_021E9D6C(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021E9D88: ; jump table
    ov73_021EA180(r0);
    // str r0, [sp]
    ov73_021E9FF8(r5, *((u32*)(r5 + 0x00000BD4)), r4, 1);
    ov73_021E83EC(r5, 0x2f, 0x36);
}




void ov73_021E9DE0(void) {
    // ldrsh r2, [r4, r1]
    // add r2, r2, r2
    // add r2, pc
    // asr r2, r2, #0x10
    // add pc, r2
    // _021E9DFC: ; jump table
    // sub r1, #0x81
    // str r1, [sp]
    ov73_021E9FF8(*((u32*)(r0 + 0x00000BD4)), 0x10, 1);
    // ldrsh r1, [r4, r0]
    // strh r1, [r4, r0]
    TextPrinterCheckActive(((*((u32*)(r4 + 0x00000BF4)) << 0x18) >> 0x18), (r1 + 1));
    sub_0203946C();
    ov00_021EC8D8();
    // ldrsh r1, [r4, r0]
    // strh r1, [r4, r0]
    // sub r1, #0x81
    // str r1, [sp]
    ov73_021E9FF8((0xf9 << 4), *((u32*)(r4 + 0x00000BD4)), 0x11, 1);
    // ldrsh r1, [r4, r0]
    // strh r1, [r4, r0]
    TextPrinterCheckActive(((*((u32*)(r4 + 0x00000BF4)) << 0x18) >> 0x18), (r1 + 1));
    // ldrsh r1, [r4, r0]
    // strh r1, [r4, r0]
    // ldrsh r1, [r4, r0]
    // strh r1, [r4, r0]
    // ldrsh r0, [r4, r0]
    ov73_021E844C(r4, 0, 0);
    *((u32*)(r4 + 0x1c)) = 0x2e;
}




void ov73_021E9EAC(void) {
}




void ov73_021E9ECC(void) {
    TextPrinterCheckActive(((*((u32*)(r0 + 0x00000BF4)) << 0x18) >> 0x18));
    *((u32*)(r4 + 0x1c)) = *((u32*)(r4 + 0x20));
    // str r1, [r4, r0]
}




void ov73_021E9F00(void) {
    TextPrinterCheckActive(((*((u32*)(r0 + 0x00000BF4)) << 0x18) >> 0x18));
    ov73_021E8390(*((u32*)(r4 + 4)), 0xa, (0x91 << 2));
    // str r0, [r4, r1]
    *((u32*)(r4 + 0x1c)) = *((u32*)(r4 + 0x20));
}




void ov73_021E9F34(void) {
    NewString_ReadMsgData(r1, r2);
    // add r1, #0x10
    StringExpandPlaceholders(*((u32*)(r5 + (0xbd << 4))), *((u32*)(r5 + (0xbd << 4))), r0);
    // add r0, r5, r0
    FillWindowPixelBuffer(0x00000DD8, 0xf);
    // add r0, r5, r0
    DrawFrameAndWindow2(0x00000DD8, 0, 1, 0xe);
    // str r3, [sp]
    // str r4, [sp, #4]
    // str r3, [sp, #8]
    // add r0, r5, r0
    AddTextPrinterParameterized(0x00000DD8, 1, *((u32*)(r5 + (0xbe << 4))), 0);
    // str r0, [r5, r1]
    String_Delete(r6, 0x00000BF4);
}




void ov73_021E9F9C(void) {
    // neg r0, r0
    ov73_021E6A70(*((u32*)(r0 + 0x00000F14)), *((u32*)(r0 + (0x00000F14 + 4))));
    // neg r2, r2
    ov73_021EA218(r4, r0, *((u32*)(r4 + 0x00000F14)));
    *((u32*)(r4 + 0x1c)) = 0x38;
}




void ov73_021E9FC8(void) {
    // tst r0, r1
    // tst r0, r1
    // add r0, r4, r0
    sub_0200E5D4(0x00000E18, 0);
    *((u32*)(r4 + 0x1c)) = 0;
}




void ov73_021E9FF8(void) {
    ReadMsgDataIntoString(r1, r2, *((u32*)(r0 + (0xbe << 4))));
    // add r0, r5, r0
    FillWindowPixelBuffer(0x00000DD8, 0xf);
    // add r0, r5, r0
    DrawFrameAndWindow2(0x00000DD8, 0, 1, 0xe);
    // str r3, [sp]
    // str r4, [sp, #4]
    // str r3, [sp, #8]
    // add r0, r5, r0
    AddTextPrinterParameterized(0x00000DD8, 1, *((u32*)(r5 + (0xbe << 4))), 0);
    // str r0, [r5, r1]
}




void ov73_021EA050(void) {
    // ldr r0, [sp, #0xc]
    // sub r1, r1, r0
    // add r0, r1, r0
    // asr r2, r0, #1
    // ldr r0, [sp, #0xc]
    // sub r2, r1, r0
}




void ov73_021EA088(void) {
    // ldr r3, [sp, #0x24]
    // str r3, [sp]
    // str r3, [sp, #4]
    // ldr r3, [sp, #0x20]
    // str r4, [sp]
    // ldr r0, [sp, #0x24]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
}




void ov73_021EA0BC(void) {
    // ldr r3, [sp, #0x24]
    // str r3, [sp]
    // str r3, [sp, #4]
    // ldr r3, [sp, #0x20]
    // str r4, [sp]
    // ldr r0, [sp, #0x24]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
}




void ov73_021EA0F0(void) {
    FillWindowPixelBuffer(0xf);
    // str r0, [sp]
    String16_FormatInteger(r4, r6, r7, 2);
    // str r3, [sp]
    // str r0, [sp, #4]
    ov73_021EA0BC(r5, r4, 0, 1);
}




void ov73_021EA12C(void) {
}




void ov73_021EA134(void) {
    Sprite_SetDrawFlag(*((u32*)(r0 + (0xdd << 4))), r2);
    Sprite_SetDrawFlag(*((u32*)(r5 + 0x00000DD4)), r4);
}




void ov73_021EA15C(void) {
    // add r0, r4, r0
    WaitingIcon_New(0x00000DD8, 1);
    // str r0, [r4, r1]
}




void ov73_021EA180(void) {
}




void ov73_021EA19C(void) {
    String_New((1 << 8), 0x96);
    ReadMsgDataIntoString(*((u32*)(r5 + 0x00000BDC)), r6, r0);
    // add r1, #0x20
    StringExpandPlaceholders(*((u32*)(r5 + (0xbd << 4))), *((u32*)(r5 + (0xbd << 4))), r4);
    // add r0, r5, r0
    FillWindowPixelBuffer(0x00000E18, 0xf);
    // add r0, r5, r0
    DrawFrameAndWindow1(0x00000E18, 1, 0x1f, 0xb);
    // str r3, [sp]
    // str r3, [sp, #4]
    // str r3, [sp, #8]
    // add r0, r5, r0
    AddTextPrinterParameterized(0x00000E18, 1, *((u32*)(r5 + (0xbf << 4))), 0);
    // str r0, [r5, r1]
    String_Delete(r4, 0x00000BF4);
}




void ov73_021EA218(void) {
    // mvn r0, r0
    // str r0, [sp]
    // str r0, [sp, #4]
    BufferIntegerAsString(*((u32*)(r0 + (0xbd << 4))), 0, 5);
    // add r0, r5, r0
    ClearFrameAndWindow2(0x00000DD8, 1);
    ov73_021EA19C(r5, r4);
}




void ov73_021EA25C(void) {
}




void ov73_021EA268(void) {
}




void ov73_021EA290(void) {
}




void ov73_021EA2A8(void) {
}




void ov73_021EA2B4(void) {
}




void ov73_021EA2E0(void) {
}




void ov73_021EA2FC(void) {
    // str r1, [sp]
}




void ov73_021EA31C(void) {
}




void ov73_021EA324(void) {
    // str r0, [sp]
}




void ov73_021EA348(void) {
}




void ov73_021EA370(void) {
    // bx lr
    // TODO: decompile
}




void ov73_021EA374(void) {
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [sp]
    // blx r1
    // ldr r0, [sp]
    // blx r3
    GF_AssertFail(0, 0x32, 0, *((u32*)(ov73_021EA744 + 4)));
    // ldr r1, [sp, #4]
    MIi_CpuCopyFast(r7, r4);
    Heap_Free(r7);
    // ldr r0, [sp, #4]
    // sub r6, r6, r4
    // add r0, r0, r4
    // str r0, [sp, #4]
    // ldr r0, [sp, #8]
    // add r5, #0xc
    // str r0, [sp, #8]
}




void ov73_021EA3D0(void) {
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x50]
    // ldr r0, [sp]
    // str r0, [sp, #0x54]
    sub_0203769C(0x32);
    // str r0, [sp, #0x5c]
    // str r0, [sp, #0x58]
    // add r0, sp, #0x3c
    // str r0, [sp, #0x60]
    // add r0, sp, #0x28
    // str r0, [sp, #0x64]
    // str r5, [sp, #0x1c]
    // str r5, [sp, #0x20]
    // str r5, [sp, #0x24]
    // ldr r0, [sp]
    // blx r1
    // ldr r1, [sp, #0x1c]
    // add r0, r1, r0
    // add r4, #0xc
    // str r0, [sp, #0x1c]
    // ldr r0, [sp]
    // blx r1
    // ldr r1, [sp, #0x20]
    // add r0, r1, r0
    // add r4, #0xc
    // str r0, [sp, #0x20]
    // ldr r0, [sp]
    // blx r1
    // ldr r1, [sp, #0x24]
    // add r0, r1, r0
    // add r4, #0xc
    // str r0, [sp, #0x24]
    // str r0, [sp, #8]
    // str r0, [sp, #0x10]
    // add r0, sp, #0x1c
    // str r0, [sp, #0xc]
    // ldr r1, [sp, #0x10]
    // ldr r0, [sp]
    // blx r1
    // ldr r1, [sp, #0x14]
    // str r0, [sp, #0x18]
    GF_AssertFail(ov73_021EA744, *((u32*)*((u32*)ov73_021EA744)));
    // ldr r4, [sp, #4]
    sub_02034818(0);
    // ldr r0, [sp, #0x60]
    // add r1, r4, r7
    // str r1, [r0, r5]
    // ldr r1, [sp, #0x60]
    // str r0, [r1, r5]
    // add r4, r4, r0
    // ldr r0, [sp, #8]
    // ldr r4, [sp, #4]
    sub_02034818(0);
    // ldr r0, [sp, #0xc]
    // sub r0, #0x1c
    // add r1, r4, r0
    // ldr r0, [sp, #0x64]
    // str r1, [r0, r5]
    // ldr r1, [sp, #0x64]
    // str r0, [r1, r5]
    // add r4, r4, r0
    // ldr r0, [sp, #0x10]
    // add r0, sp, #0x50
    // blx r1
    // ldr r0, [sp, #0x18]
    // ldr r1, [sp, #0x14]
    // add r7, r7, r0
    // sub r0, r1, r0
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x10]
    // add r0, #0xc
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #8]
    // str r0, [sp, #8]
    // ldr r0, [sp]
    sub_020270C4((((0x2f << 6) + 4) + 1), *((u32*)((0x2f << 6) + 8)));
    sub_0202E43C();
    sub_0202E474(r4);
}



