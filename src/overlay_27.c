/* Decompiled from asm/overlay_27.s */
#include "global.h"

void ov27_02259F80(void) {
    // str r1, [sp, #0x10]
    Heap_Create(3, 8, 0x00018D00);
    GXS_SetGraphicsMode(0);
    GX_SetBankForSubBG(0x80);
    GX_SetBankForSubOBJ((1 << 8));
    // and r1, r0
    // str r0, [r2]
    InitBgFromTemplate(r6, 4, ov27_0225D000, 0);
    InitBgFromTemplate(r6, 5, ov27_0225D01C, 0);
    CreateSysTaskAndEnvironment(ov27_0225A320, (0x15 << 6), 0xa, 8);
    SysTask_GetData();
    *((u32*)(r0 + 8)) = r7;
    // str r0, [r4]
    // ldr r0, [sp, #0x10]
    *((u32*)(r0 + 4)) = r6;
    *((u32*)(r0 + 0xc)) = 0;
    *((u32*)(r0 + 0x10)) = r5;
    ov27_0225BD50(r5);
    // str r0, [r4, r3]
    // str r1, [r4, r3]
    // add r0, r4, r3
    // str r0, [sp]
    // sub r2, #0x20
    // sub r3, #0x10
    // add r2, r4, r2
    // add r3, r4, r3
    ov27_0225AC00(r6, *((u32*)r4), (0x3f << 4), (0x3f << 4));
    FontID_Alloc(4, 8);
    MessageFormat_New(8);
    // str r0, [r4, r1]
    NewMsgDataFromNarc(0, 0x1b, 0xc4, 8);
    // str r0, [r4, r1]
    ov27_0225C10C(r4, 0x000004A8);
    // add r1, #0xd3
    ov27_0225C1AC(r4, *((u8*)r5));
    *((u32*)(r4 + 0x14)) = r0;
    ov27_0225C1EC(r4);
    ov27_0225AD0C(r4);
    ov27_0225B010(r4);
    // add r1, #0xd2
    ov27_0225BB6C(r4, ((*((u8*)*((u32*)(r4 + 0x10))) << 0x1a) >> 0x1a));
    // str r3, [sp]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r4, r2
    // str r3, [sp, #0xc]
    // add r2, #0xe4
    AddTextPrinterParameterizedWithColor(0x000F0100, 4, *((u32*)(r4 + (0x3d << 4))), 0);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r4, r2
    // str r1, [sp, #0xc]
    // add r2, #0xe4
    AddTextPrinterParameterizedWithColor(0x000F0100, 0, *((u32*)(r4 + (0x3e << 4))), 0);
    ov27_0225BCE8(r4);
    ov27_0225BC84(r4);
    ov27_0225A690(r4, 1);
    ov27_0225C0E0(r4);
    // add r0, r4, r0
    ov27_0225BDDC((0x52 << 4), r4);
    // add r0, r5, r0
    MenuInputStateMgr_GetState((0x43 << 2));
    // add r0, #0xd2
    // add r5, #0xd2
    // strb r1, [r5]
    FieldSystem_TaskIsRunning(r5, (*((u8*)r5) & ~(0x80)));
    // add r0, #0xd2
    // add r5, #0xd2
    // strb r0, [r5]
    ov27_0225A714(r4, *((u8*)r5));
    ov27_0225A7FC(r4);
    SpriteList_RenderAndAnimateSprites(*((u32*)(r4 + 0x18)));
    // and r0, r1
    // str r0, [r2]
    GfGfx_EngineBTogglePlanes(1, 1, 0x04001000);
    GfGfx_EngineBTogglePlanes(2, 1);
    GfGfx_EngineBTogglePlanes(4, 0);
    GfGfx_EngineBTogglePlanes(8, 0);
    GfGfx_EngineBTogglePlanes(0x10, 1);
}




void ov27_0225A19C(void) {
    // str r0, [sp]
    // str r1, [sp, #4]
    SysTask_GetData(r1);
    FS_LoadOverlay(0, FS_OVERLAY_ID);
    DSProt_DetectFlashcart(ov27_0225C238);
    Heap_AllocAtEnd(3, (0xfa << 2));
    // add r0, r6, r0
    ov27_0225BEB0((0x52 << 4));
    DestroyMsgData(*((u32*)(r6 + 0x000004A8)));
    MessageFormat_Delete(*((u32*)(r6 + 0x000004AC)));
    sub_0200AEB0(*((u32*)(r6 + (0x55 << 2))));
    // add r5, #0x10
    sub_0200B0A8(*((u32*)(r6 + (0x56 << 2))));
    // add r4, #0x10
    Destroy2DGfxResObjMan(*((u32*)(r6 + (0x51 << 2))));
    DSProt_DetectNotEmulator(ov27_0225C248);
    Heap_AllocAtEnd(3, (0xfa << 2));
    SpriteList_Delete(*((u32*)(r6 + 0x18)));
    // add r4, r6, r0
    RemoveWindow(r4);
    // add r4, #0x10
    // add r0, r6, r0
    RemoveWindow((0x3e << 4));
    // add r0, r6, r0
    RemoveWindow((0x3d << 4));
    ov27_0225BC34(r6);
    FontID_Release(4);
    // ldr r0, [sp, #4]
    DestroySysTaskAndEnvironment();
    // ldr r0, [sp]
    FreeBgTilemapBuffer(5);
    // ldr r0, [sp]
    FreeBgTilemapBuffer(4);
    Heap_Destroy(8);
    DSProt_DetectNotDummy(ov27_0225C24C);
    Heap_AllocAtEnd(3, (0xfa << 2));
    FS_UnloadOverlay(0, FS_OVERLAY_ID);
}




u8 ov27_0225A2C8(void) {
}




void ov27_0225A2CC(void) {
    SysTask_GetData();
    GF_AssertFail();
    // str r0, [r4, r1]
}




void ov27_0225A2EC(void) {
    SysTask_GetData();
    GF_AssertFail();
    GF_AssertFail();
    // str r0, [r4, r1]
}




void ov27_0225A320(void) {
    ov27_0225A89C(*((u32*)(r1 + 0x10)));
    FieldSystem_IsPlayerMovementAllowed(*((u32*)(r5 + 0x10)));
    // add r0, #0xd2
    IsPaletteFadeFinished(((*((u8*)*((u32*)(r5 + 0x10))) << 0x18) >> 0x1f));
    // add r0, #0xd2
    // add r2, #0xd2
    // strb r1, [r2]
    // strh r1, [r0]
    ov27_0225A8E8(r5, r4, *((u32*)(r5 + 0x10)));
    // add r1, r5, r0
    Sprite_TryChangeAnimSeq(*((u32*)(r1 + (0x39 << 4))), 2);
    Sprite_SetAnimCtrlSeq(*((u32*)(r5 + (0xeb << 2))), 2);
    // str r2, [r5, r1]
    Sprite_SetAnimCtrlSeq(*((u32*)(r5 + (0x3b << 4))), 2, (*((u32*)(r5 + 0x0000051C)) & ~(0xc0)));
    // str r2, [r5, r1]
    FieldSystem_TaskIsRunning(*((u32*)(r5 + 0x10)), 0x0000051C, (*((u32*)(r5 + 0x0000051C)) & ~(0xc0)));
    ov27_0225A7FC(r5);
    // add r0, #0xd2
    ov27_0225A86C(r5);
    // add r0, #0xd2
    // add r2, #0xd2
    // strb r1, [r2]
    ov27_0225A66C(r5, (*((u8*)*((u32*)(r5 + 0x10))) & ~(0x3f)), *((u32*)(r5 + 0x10)));
    ov27_0225B4D8(r5);
    TouchscreenHitbox_FindRectAtTouchHeld(ov27_0225CECC);
    TouchscreenHitbox_FindRectAtTouchNew(ov27_0225CECC);
    ov27_0225A530(r5, r6);
    ov27_0225A4D0(r5);
    ov27_0225A48C(r5, r7);
    // add r0, r5, r0
    ov27_0225BDFC((0x52 << 4));
    SpriteList_RenderAndAnimateSprites(*((u32*)(r5 + 0x18)));
}




void ov27_0225A468(void) {
    // sub r1, r1, r2
}




void ov27_0225A48C(void) {
    // eor r4, r1
}




void ov27_0225A4B8(void) {
}




void ov27_0225A4D0(void) {
    // add r0, #0xd2
}




void ov27_0225A530(void) {
    Sprite_GetAnimationNumber(*((u32*)(r0 + (0xf << 6))));
    Sprite_GetDrawFlag(*((u32*)(r5 + (0xf << 6))));
    System_GetTouchNew();
    *((u32*)(gSystem + 0x5c)) = 1;
    Sprite_SetAnimCtrlSeq(*((u32*)(r5 + (0xf << 6))), 6);
    *((u32*)(gSystem + 0x5c)) = 1;
    Sprite_SetAnimCtrlSeq(*((u32*)(r5 + (0xf << 6))), 5);
}




void ov27_0225A594(void) {
    // sub r0, #0xbc
    // add r1, sp, #0
    // ldr r0, [sp]
    // ldr r0, [sp]
}




void ov27_0225A61C(void) {
    // add r0, r5, r0
    FillWindowPixelBuffer((0x3d << 4), 0);
    // str r3, [sp]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r5, r2
    // str r3, [sp, #0xc]
    // add r4, r5, r4
    // add r2, #0xe0
    AddTextPrinterParameterizedWithColor(0x000F0100, 4, *((u32*)((*((u8*)(ov27_0225D108 + r4)) << 2) + (0x3d << 4))), 0);
    Sprite_SetDrawFlag(*((u32*)(r5 + (0xf << 6))), 1);
}




void ov27_0225A66C(void) {
    // str r4, [r5, r0]
}




void ov27_0225A690(void) {
    // str r1, [r4, r2]
    ov27_0225A4D0((1 | (*((u32*)(r0 + 0x0000051C)) & ~(1))), 0x0000051C, (*((u32*)(r0 + 0x0000051C)) & ~(1)));
    ov27_0225A9C0(r4, 1);
    Sprite_SetDrawFlag(*((u32*)(r4 + (0xf << 6))), 1);
    // str r2, [r4, r1]
    // add r0, r4, r0
    FillWindowPixelBuffer((0x3d << 4), 0, (*((u32*)(r4 + 0x0000051C)) & ~(1)));
    // add r0, r4, r0
    CopyWindowToVram((0x3d << 4));
    Sprite_SetDrawFlag(*((u32*)(r4 + (0xf << 6))), 0);
    Sprite_SetDrawFlag(*((u32*)(r4 + (0xef << 2))), 0);
    Sprite_SetDrawFlag(*((u32*)(r4 + (0xf1 << 2))), 0);
    ov27_0225A9C0(r4, 0);
}




void ov27_0225A714(void) {
    // add r0, #0xd2
    // add r0, r4, r0
    // add r0, #0xd2
    // add r4, #0xd2
    // strb r1, [r4]
    // add r0, r4, r0
    // strh r0, [r6]
    // add r0, #0xd2
    // add r0, #0xd2
    // strb r1, [r0]
    // add r0, #0xd2
    // add r4, #0xd2
    // strb r0, [r4]
    // add r0, #0xd2
    // add r4, #0xd2
    // strb r0, [r4]
}




void ov27_0225A7B0(void) {
    sub_0203DF8C(*((u32*)(r0 + 0x10)));
    ov27_0225A66C(r4);
    ov27_0225AAD4(r4);
}




void ov27_0225A7DC(void) {
}




void ov27_0225A7FC(void) {
    // add r2, #0xd2
    // add r2, r2, r2
    // add r2, pc
    // asr r2, r2, #0x10
    // add pc, r2
    // _0225A81C: ; jump table
    // add r0, #0xd2
    // add r2, #0xd2
    // strb r0, [r2]
}




void ov27_0225A86C(void) {
    // mvn r1, r1
    // add r0, r4, r0
}




void ov27_0225A89C(void) {
    // add r0, #0xd2
}




void ov27_0225A8E8(void) {
    // add r1, #0xd2
    // mvn r1, r1
    ov27_0225B398(0);
    Sprite_SetOamMode(*((u32*)(r4 + (0xef << 2))), 1);
    Sprite_SetOamMode(*((u32*)(r4 + (0xf1 << 2))), 1);
    Sprite_SetOamMode(*((u32*)(r4 + (0xeb << 2))), 1);
    Sprite_SetOamMode(*((u32*)(r4 + (0xed << 2))), 1);
    Sprite_SetOamMode(*((u32*)(r4 + (0x3b << 4))), 1);
    Sprite_SetOamMode(*((u32*)(r4 + (0xee << 2))), 1);
    // add r0, #0xd2
    // add r0, r4, r0
    ov27_0225B4AC((0x39 << 4), *((u32*)(r4 + 0x14)));
    // add r0, r4, r0
    // mvn r1, r1
    ov27_0225B4AC((0x39 << 4), 0);
    Sprite_SetOamMode(*((u32*)(r4 + (0xea << 2))), 0);
    // str r0, [sp]
    G2x_SetBlendAlpha_(0x04001050, 0, 0x23, 6);
    // strh r1, [r0]
}




void ov27_0225A9C0(void) {
    // ldr r0, [r5, r0]
    // ldr r0, [r5, r0]
    // ldr r0, [r5, r0]
    // ldr r0, [r5, r0]
    // ldr r0, [r5, r0]
    // ldr r0, [r5, r0]
    // ldr r0, [r5, r0]
    // ldr r0, [r5, r0]
}




void ov27_0225AA60(void) {
    // add r4, r4, r2
}




void ov27_0225AA7C(void) {
    // add r1, r6, r4
    Sprite_SetDrawFlag(*((u32*)(r0 + (0x39 << 4))), *((u8*)(r1 + 0x00000514)));
    // strb r1, [r6, r0]
    ov27_0225BDC8(r6, 1);
    Sprite_SetDrawFlag(*((u32*)(r6 + (0xef << 2))), 0);
    Sprite_SetDrawFlag(*((u32*)(r6 + (0xf1 << 2))), 0);
    // strb r1, [r6, r0]
}




void ov27_0225AAD4(void) {
    // add r0, r5, r0
    ov27_0225AA60(0x00000514, 7);
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r5, r0
    // str r0, [sp, #0xc]
    FieldSystem_ShouldDrawStartMenuIcon(*((u32*)(r5 + 0x10)), 0);
    // add r1, r5, r6
    // str r1, [sp]
    // add r1, r5, r0
    Sprite_SetDrawFlag(*((u32*)(r1 + (0x39 << 4))), 1);
    // add r1, r5, r0
    Sprite_SetAnimCtrlSeq(*((u32*)(r1 + (0x39 << 4))), *((u16*)(r4 + 2)));
    // ldr r0, [sp, #0xc]
    // add r0, r0, r1
    CopyWindowToVram(*((u8*)(r4 + 4)), (*((u8*)(r4 + 4)) << 4));
    // ldr r1, [sp]
    // strb r2, [r1, r0]
    // sub r0, #0xa4
    // strb r1, [r7, r0]
    // add r1, #0xd2
    // add r0, #0xd2
    // strb r1, [r0]
    // ldr r0, [sp, #8]
    // str r0, [sp, #8]
    // add r7, #8
    // ldr r0, [sp, #8]
    // ldr r0, [sp, #4]
    Sprite_SetDrawFlag(*((u32*)(r5 + (0xf2 << 2))), 1, *((u8*)*((u32*)(r5 + 0x10))));
    // add r0, r5, r0
    CopyWindowToVram((0x3e << 4));
    // ldr r1, [sp, #4]
    // ldr r0, [sp, #8]
    // add r0, #0xd3
    // strb r1, [r0]
    // add r1, #0xd3
    ov27_0225C1AC(r5, *((u8*)*((u32*)(r5 + 0x10))));
    *((u32*)(r5 + 0x14)) = r0;
    ov27_0225C1EC(r5);
    ov27_0225BDC8(r5);
    Sprite_SetDrawFlag(*((u32*)(r5 + (0xef << 2))), 1);
    Sprite_SetDrawFlag(*((u32*)(r5 + (0xf1 << 2))), 1);
    Sprite_SetAnimCtrlSeq(*((u32*)(r5 + (0xef << 2))), 0xa);
    // strb r1, [r5, r0]
}




void ov27_0225AC00(void) {
    // str r0, [sp, #0x14]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r2, [sp, #0x14]
    GfGfxLoader_LoadCharData(0xe, *((u32*)(ov27_0225CEF0 + (r1 * 0xc))), 4);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r2, [sp, #0x14]
    GfGfxLoader_LoadScrnData(0xe, *((u32*)(ov27_0225CEF4 + r4)), 4);
    // str r0, [sp]
    // str r0, [sp, #4]
    GfGfxLoader_GXLoadPal(0xe, *((u32*)(ov27_0225CEEC + r4)), 4, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x14]
    AddWindowParameterized(0xd2, r5, 5, 0x18);
    FillWindowPixelBuffer(r5, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x14]
    AddWindowParameterized(0xe2, r6, 5, 9);
    FillWindowPixelBuffer(r6, 0);
    // ldr r5, [sp, #0x30]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x14]
    AddWindowParameterized(((0xf6 << 0x10) >> 0x10), r5, 5, ((*((u32*)ov27_0225D074) << 0x18) >> 0x18));
    FillWindowPixelBuffer(r5, 0);
    // add r6, #0x12
    // add r4, #8
    // add r5, #0x10
}




void ov27_0225AD0C(void) {
    // add r1, #0x1c
    G2dRenderer_Init(0x10, r0, 8);
    *((u32*)(r5 + 0x18)) = r0;
    // add r0, #0x1c
    G2dRenderer_SetSubSurfaceCoords(r5, 0, (1 << 0x14));
    Create2DGfxResObjMan(0xb, 0, 8);
    // str r0, [r4, r7]
    // add r6, r5, r0
    Save_PlayerData_GetProfile(*((u32*)(*((u32*)(r5 + 0x10)) + 0xc)));
    PlayerProfile_GetTrainerGender();
    Save_Bag_Get(*((u32*)(*((u32*)(r5 + 0x10)) + 0xc)));
    // add r1, #0x64
    // str r1, [sp]
    // str r7, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r1, r5, r1
    ov27_0225AEA8(*((u32*)(r5 + 0x10)), (0x51 << 2), r6, r4);
    // add r6, #0x10
    // str r1, [sp]
    // str r0, [sp, #4]
    // add r1, #0xe8
    // str r0, [sp, #8]
    AddCellOrAnimResObjFromNarc(*((u32*)(r5 + 0x64)), 0xe, 0x10, 1);
    // str r0, [r5, r1]
    // str r1, [sp]
    // str r0, [sp, #4]
    // add r1, #0xec
    // str r0, [sp, #8]
    AddCellOrAnimResObjFromNarc(*((u32*)(r5 + 0x64)), 0xe, 0x11, 1);
    // str r0, [r5, r1]
    // str r1, [sp]
    // str r0, [sp, #4]
    // add r1, #0xe7
    // str r0, [sp, #8]
    AddCellOrAnimResObjFromNarc(*((u32*)(r5 + 0x65)), 0xe, 0x44, 1);
    // str r0, [r5, r1]
    // str r1, [sp]
    // str r0, [sp, #4]
    // add r1, #0xeb
    // str r0, [sp, #8]
    AddCellOrAnimResObjFromNarc(*((u32*)(r5 + 0x65)), 0xe, 0x45, 1);
    // str r0, [r5, r1]
    // str r1, [sp]
    // str r0, [sp, #4]
    // add r1, #0xe6
    // str r0, [sp, #8]
    AddCellOrAnimResObjFromNarc(*((u32*)(r5 + 0x66)), 0xe, 0x36, 1);
    // str r0, [r5, r1]
    // str r1, [sp]
    // str r0, [sp, #4]
    // add r1, #0xea
    // str r0, [sp, #8]
    AddCellOrAnimResObjFromNarc(*((u32*)(r5 + 0x66)), 0xe, 0x37, 1);
    // str r0, [r5, r1]
    // add r2, sp, #0x10
    GfGfxLoader_GetPlttData(0xe, 0xe, 8);
    // ldr r0, [sp, #0x10]
    DC_FlushRange(*((u32*)(r0 + 0xc)), 0x40);
    // ldr r0, [sp, #0x10]
    // add r1, r5, r1
    MIi_CpuCopyFast(*((u32*)(r0 + 0xc)), 0x000004CC, 0x40);
    Heap_Free(r4);
}




void ov27_0225AE8C(void) {
    // cmp r0, #1
    // bne _0225AE94
    // cmp r0, #3
    // bne _0225AE9E
    // nop
    // _0225AEA4: .word 0x000001F3
}




void ov27_0225AEA8(void) {
    // mov ip, r0
    // ldr r0, [sp, #0x44]
    // str r1, [sp, #0x10]
    // add r0, r0, r1
    // ldr r7, [sp, #0x40]
    // str r6, [sp, #0x20]
    // str r0, [sp, #0x1c]
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x3c]
    // mov r0, ip
    FieldSystem_BugContest_Get(0x0000FFFF, (*((u8*)(r3 + ov27_0225CFC8)) << 2), *((u16*)(ov27_0225CF94 + (*((u8*)(r3 + ov27_0225CFC8)) << 2))));
    // str r0, [sp, #0x14]
    GF_AssertFail();
    // ldr r0, [sp, #0x14]
    // str r0, [sp, #0x1c]
    // str r0, [sp, #0x18]
    sub_02074490(3);
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x14]
    Pokemon_GetIconNaix(*((u32*)(r0 + 0x10)));
    // str r0, [sp, #0x1c]
    Bag_GetRegisteredItem1(r7, 0x12);
    GetItemIndexMapping(2);
    // str r0, [sp, #0x20]
    Bag_GetRegisteredItem1(r7);
    GetItemIndexMapping(1);
    // str r0, [sp, #0x1c]
    Bag_GetRegisteredItem2(r7, r0);
    GetItemIndexMapping(2);
    // str r0, [sp, #0x20]
    Bag_GetRegisteredItem2(r7);
    GetItemIndexMapping(1);
    // str r0, [sp, #0x20]
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x44]
    ov27_0225AE8C(4, 0x46);
    // str r0, [sp, #0x1c]
    GetItemIndexMapping(((r0 << 0x10) >> 0x10), 2);
    // str r0, [sp, #0x20]
    GetItemIndexMapping(((r5 << 0x10) >> 0x10), 1);
    // ldr r0, [sp, #0x38]
    // ldr r3, [sp, #0x1c]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x10]
    AddCharResObjFromNarc(*((u32*)8), r6, r0);
    // str r0, [r4]
    // ldr r0, [sp, #0x38]
    // ldr r2, [sp, #0x20]
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x18]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x10]
    AddPlttResObjFromNarc(*((u32*)(8 + 4)), r6, 0);
    *((u32*)(r4 + 4)) = r0;
    sub_0200ADA4(*((u32*)r4));
    sub_0200A740(*((u32*)r4));
    sub_0200B00C(*((u32*)(r4 + 4)));
    sub_0200A740(*((u32*)(r4 + 4)));
}




void ov27_0225B010(void) {
    // add r6, r5, r0
    // str r3, [sp]
    // mvn r0, r0
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // add r1, #0x64
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x1c]
    // str r0, [sp, #0x20]
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x28]
    CreateSpriteResourcesHeader(r6, 0, 0, *((u32*)ov27_0225CF3C));
    // add r6, #0x24
    // add r1, sp, #0x3c
    // str r0, [sp, #0x3c]
    // add r7, r5, r0
    // str r0, [sp, #0x2c]
    // str r0, [sp, #0x4c]
    // str r0, [sp, #0x50]
    // str r0, [sp, #0x54]
    // str r0, [sp, #0x58]
    // ldr r0, [sp, #0x2c]
    // str r7, [sp, #0x40]
    *((u16*)(r1 + 0x20)) = (1 << 0xc);
    // str r0, [sp, #0x60]
    // str r0, [sp, #0x64]
    // str r0, [sp, #0x68]
    // str r7, [sp, #0x40]
    _fflt((*((u16*)ov27_0225D038) << 0xc));
    _fadd((0x3f << 0x18), r0);
    _fflt((r0 << 0xc));
    _fsub((0x3f << 0x18));
    _ffix();
    // str r0, [sp, #0x44]
    _fflt((*((u16*)(r6 + 2)) << 0xc));
    _fadd((0x3f << 0x18), r0);
    _fflt((r0 << 0xc));
    _fsub((0x3f << 0x18));
    _ffix();
    // add r0, r0, r1
    // str r0, [sp, #0x48]
    // add r0, sp, #0x3c
    Sprite_CreateAffine((1 << 0x14));
    // str r0, [r4, r1]
    Sprite_SetAnimActiveFlag(*((u32*)(r4 + (0x39 << 4))), 1);
    Sprite_SetPriority(*((u32*)(r4 + (0x39 << 4))), 0);
    Sprite_SetAffineOverwriteMode(*((u32*)(r4 + (0x39 << 4))), 1);
    // ldr r0, [sp, #0x2c]
    // add r7, #0x24
    // str r0, [sp, #0x2c]
    // str r0, [sp, #0x30]
    // add r0, r5, r0
    // add r4, #0x24
    // str r0, [sp, #0x38]
    // ldr r0, [sp, #0x38]
    // str r0, [sp, #0x40]
    _fflt((*((u16*)ov27_0225D05C) << 0xc));
    _fadd(r7, r0);
    _fflt((r0 << 0xc));
    _fsub(r7);
    _ffix();
    // str r0, [sp, #0x44]
    _fflt((*((u16*)(r6 + 2)) << 0xc));
    _fadd(r7, r0);
    _fflt((r0 << 0xc));
    _fsub(r7);
    _ffix();
    // add r0, r0, r1
    // str r0, [sp, #0x48]
    // add r0, sp, #0x3c
    Sprite_CreateAffine((1 << 0x14));
    // str r0, [r4, r1]
    Sprite_SetAnimActiveFlag(*((u32*)(r4 + (0x39 << 4))), 1);
    Sprite_SetPriority(*((u32*)(r4 + (0x39 << 4))), 2);
    // ldr r0, [sp, #0x30]
    // str r0, [sp, #0x30]
    // str r0, [sp, #0x34]
    // str r0, [sp, #0x34]
    // add r0, r5, r0
    // str r0, [sp, #0x40]
    _fflt((0x19 << 0xe), ((*((u32*)(r5 + 0x0000051C)) << 0x1b) >> 0x1c));
    _fadd((0x3f << 0x18), r0);
    _ffix();
    // str r0, [sp, #0x44]
    // ldr r0, [sp, #0x34]
    _fflt((r0 << 0xc));
    _fadd((0x3f << 0x18), r0);
    _fflt((r0 << 0xc));
    _fsub((0x3f << 0x18));
    _ffix();
    // add r0, r0, r1
    // str r0, [sp, #0x48]
    // add r0, sp, #0x3c
    Sprite_CreateAffine((1 << 0x14));
    // str r0, [r5, r1]
    Sprite_SetAnimActiveFlag(*((u32*)(r5 + (0xf3 << 2))), 1);
    Sprite_SetPriority(*((u32*)(r5 + (0xf3 << 2))), 0);
    Sprite_SetAnimCtrlSeq(*((u32*)(r5 + (0xf3 << 2))), 6);
    FieldSystem_BugContest_Get(*((u32*)(r5 + 0x10)));
    GF_AssertFail();
    Sprite_SetPositionXYWithSubscreenOffset(*((u32*)(r5 + (0xea << 2))), 0x68, 0x88, (1 << 0x14));
    Pokemon_GetIconPalette(*((u32*)(r4 + 0x10)));
    Sprite_SetPalOffsetRespectVramOffset(*((u32*)(r5 + (0xea << 2))), r0);
    Sprite_SetAnimCtrlSeq(*((u32*)(r5 + (0xea << 2))), 6);
    Sprite_SetDrawFlag(*((u32*)(r5 + (0xea << 2))), 0);
    Sprite_SetAnimCtrlSeq(*((u32*)(r5 + (0xed << 2))), 0);
    Sprite_SetAnimCtrlSeq(*((u32*)(r5 + (0xee << 2))), 8);
    Sprite_SetAnimCtrlSeq(*((u32*)(r5 + (0xef << 2))), 3);
    Sprite_SetAnimCtrlSeq(*((u32*)(r5 + (0xf << 6))), 5);
    Sprite_SetAnimCtrlSeq(*((u32*)(r5 + (0xf2 << 2))), 0xc);
    Sprite_SetDrawFlag(*((u32*)(r5 + (0xf2 << 2))), 0);
    Sprite_SetPriority(*((u32*)(r5 + (0xf1 << 2))), 1);
    ov27_0225A4B8(r5);
    ov27_0225A9C0(r5, 1);
    ov27_0225AA7C(r5);
}




void ov27_0225B360(void) {
    // add r5, r6, r5
    // add r0, r1, r0
    // mvn r4, r4
    // add r5, r5, r0
}




void ov27_0225B398(void) {
    // str r1, [sp]
    GF_AssertFail();
    // add r7, r6, r0
    // add r0, r0, r1
    // ldr r0, [sp]
    // add r0, r7, r0
    GXS_LoadOBJPltt((0x10 << 1), 0, 0x20);
    // add r5, #0x20
}




void ov27_0225B404(void) {
    // mvn r4, r4
    // tst r2, r1
    // tst r2, r1
    // tst r2, r1
    // tst r1, r2
    // add r2, r5, r2
    ov27_0225B360(*((u32*)(r0 + 0x14)), 3, (0x47 << 4));
    // mvn r1, r1
    *((u32*)(r5 + 0x14)) = r0;
    PlaySE((0x5e << 4), *((u32*)(r5 + 0x14)));
    // add r1, r5, r0
    Sprite_SetAnimCtrlSeq(*((u32*)(r1 + (0x39 << 4))), 3);
    // add r1, r5, r0
    Sprite_SetAnimCtrlSeq(*((u32*)(r1 + (0x39 << 4))), 1);
    ov27_0225B398(r5, *((u32*)(r5 + 0x14)));
    ov27_0225C170(r5, *((u32*)(r5 + 0x14)));
    // add r1, #0xd3
    // strb r0, [r1]
}




void ov27_0225B4AC(void) {
}




void ov27_0225B4D8(void) {
    PlayerAvatar_GetUnk14(*((u32*)(*((u32*)(r0 + 0x10)) + 0x40)));
    // tst r0, r1
    sub_0203769C(((*((u32*)(r5 + 0x0000051C)) << 0x1b) >> 0x1c), *((u32*)(gSystem + 0x48)));
    sub_02058740();
    sub_02058258();
    sub_02056EE0();
    sub_02057A0C();
    sub_02057F18(r4);
    sub_02037958();
    IsPaletteFadeFinished(1);
    TouchscreenHitbox_FindRectAtTouchNew(ov27_0225CF68);
    // add r1, r5, r0
    Save_Bag_Get(*((u32*)(*((u32*)(r5 + 0x10)) + 0xc)));
    // sub r0, #8
    ov27_0225BDAC(r5);
    Bag_GetRegisteredItem1(r6);
    Bag_GetRegisteredItem2(r6);
    // mvn r0, r0
    // strh r1, [r0]
    // add r2, r5, r0
    *((u32*)(r5 + 0x14)) = (r4 - 1);
    ov27_0225C170(r5, (r4 - 1));
    // add r1, #0xd3
    // strb r0, [r1]
    ov27_0225B398(r5, *((u32*)(r5 + 0x14)));
    ov27_0225C170(r5, (r4 - 1));
    // strh r1, [r0]
}




void ov27_0225B630(void) {
    // str r1, [sp, #0x10]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x10]
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
    // ldr r0, [sp, #0x14]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x14]
    // add r7, r5, r0
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
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x18]
    // add r4, r4, r0
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
    // ldr r0, [sp, #0x14]
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
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // ldr r0, [sp, #0x14]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x14]
    // add r7, r5, r0
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
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x18]
    // add r4, r4, r0
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
    // ldr r0, [sp, #0x14]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
}




void ov27_0225BB38(void) {
    FillWindowPixelBuffer(((*((u32*)(ov27_0225CEC4 + (r2 << 2))) << 0x18) >> 0x18), (r2 << 2));
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r4, [sp, #8]
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r5, 0, r6, 3);
}




void ov27_0225BB6C(void) {
    Save_PlayerData_GetProfile(*((u32*)(*((u32*)(r0 + 0x10)) + 0xc)));
    BufferPlayersName(*((u32*)(r5 + 0x000004AC)), 0, r0);
    // add r0, r7, r0
    // add r2, r2, r3
    ReadMsgData_ExpandPlaceholders(*((u32*)(r5 + 0x000004AC)), *((u32*)(r5 + 0x000004A8)), ((*((u16*)(ov27_0225CF94 + 2)) << 0x11) >> 0x11), 8);
    // str r0, [r6, r1]
    // add r6, #8
    NewString_ReadMsgData(*((u32*)(r5 + 0x000004A8)), *((u32*)ov27_0225CED8));
    // str r0, [r6, r1]
    ReadMsgData_ExpandPlaceholders(*((u32*)(r5 + ((0x4b << 4) - 4))), *((u32*)(r5 + (((0x4b << 4) - 4) - 4))), 0xc, 8);
    // str r0, [r5, r1]
    // sub r0, #0x18
    // sub r1, #0x1c
    ReadMsgData_ExpandPlaceholders(*((u32*)(r5 + 0x000004C4)), *((u32*)(r5 + 0x000004C4)), 0xd, 8);
    // str r0, [r5, r1]
}




void ov27_0225BC34(void) {
    String_Delete(*((u32*)(r0 + 0x000004C8)));
    String_Delete(*((u32*)(r5 + 0x000004C4)));
    String_Delete(*((u32*)(r5 + (0x4b << 4))));
    String_Delete(*((u32*)(r5 + 0x00000474)));
    // add r5, #8
}




void ov27_0225BC84(void) {
    // str r0, [sp]
    // add r5, sp, #4
    // ldr r0, [sp]
    // stmia r5!, {r0}
    // ldr r0, [sp]
    // add r4, sp, #4
    // add r5, r0, r1
    // add r5, #0x10
    // ldr r0, [sp]
    // ldr r0, [sp]
    // add r0, r0, r1
}




void ov27_0225BCE8(void) {
    // add r4, r5, r0
    FontID_String_GetWidth(0, *((u32*)(r0 + 0x00000474)), 0);
    // sub r3, r1, r0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r7, r3, r7
    // asr r3, r7, #1
    AddTextPrinterParameterizedWithColor(r4, 0, *((u32*)(r5 + 0x00000474)));
    // add r5, #8
    // add r4, #0x10
}




void ov27_0225BD44(void) {
    // add r0, #0xd2
}




void ov27_0225BD50(void) {
}




void ov27_0225BDAC(void) {
    // ldr r0, [r0, r1]
    // cmp r0, #4
    // bls _0225BDBE
    // nop
    // _0225BDC4: .word 0x0000051C
}




void ov27_0225BDC8(void) {
}




void ov27_0225BDDC(void) {
    // str r0, [r5]
}




void ov27_0225BDFC(void) {
    // asr r1, r0, #2
    // add r1, r0, r1
    // asr r0, r1, #3
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, #0xc
    // add r0, #0xc
    // add r0, #0xc
}




void ov27_0225BEB0(void) {
    // add r0, #0xc
    // add r0, #0xc
    // add r4, #0xc
}




void ov27_0225BED8(void) {
    // ldr r5, [sp, #0x44]
    // str r3, [sp]
    // add r0, sp, #0x28
    // str r1, [sp, #4]
    // add r1, sp, #0x14
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x40]
    // str r0, [sp, #0x10]
    AddWindowParameterized(*((u32*)(r0 + 4)), *((u8*)(r0 + 0x10)), 5, r2);
    // add r0, sp, #0x14
    FillWindowPixelBuffer(0);
    ReadMsgData_ExpandPlaceholders(*((u32*)(r4 + 0x000004AC)), *((u32*)(r4 + (0x000004AC - 4))), r7, 8);
    // mvn r0, r0
    FontID_String_GetWidth(0, r0, 0);
    // add r1, sp, #0x28
    // sub r0, r1, r0
    // asr r1, r0, #0x10
    // add r0, r1, r0
    // asr r5, r0, #0x10
    // add r1, sp, #0x28
    // ldrsh r0, [r1, r0]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, sp, #0x14
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(0x000E0200, 0, r4, r5);
    String_Delete(r4);
    // add r0, sp, #0x14
    CopyWindowToVram();
    // add r0, sp, #0x14
    RemoveWindow();
}




void ov27_0225BF84(void) {
    // str r1, [sp]
    // str r0, [sp, #4]
    BufferIntegerAsString(*((u32*)(r0 + 0x000004AC)), 0, r3, 2);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    ov27_0225BED8(r5, 0x1f, r4, r6);
}




void ov27_0225BFCC(void) {
    GetMonData(*((u32*)(r1 + 0x10)), 0xa1, 0);
    // str r1, [sp]
    // str r0, [sp, #4]
    BufferIntegerAsString(*((u32*)(r4 + 0x000004AC)), 0, r0, 3);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    ov27_0225BED8(r4, 0x21, 0xc, 0x15);
}




void ov27_0225C01C(void) {
    // str r1, [sp]
    // str r2, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    // str r1, [sp, #0x10]
}




void ov27_0225C044(void) {
}




void ov27_0225C06C(void) {
}




void ov27_0225C088(void) {
    FieldSystem_BugContest_Get(*((u32*)(r0 + 0x10)));
    GF_AssertFail();
    BugContest_GetSportBallsAddr(r4);
    ov27_0225BF84(r5, 0xe, 0xe, *((u16*)r0));
    ov27_0225BFCC(r5, r4);
    Sprite_SetDrawFlag(*((u32*)(r5 + (0xea << 2))), ((*((u8*)(r4 + 0x17)) << 0x1f) >> 0x1f));
    // strb r1, [r5, r0]
    // sub r0, #0x7a
    // strb r1, [r5, r0]
}




void ov27_0225C0E0(void) {
    ov27_0225C044(((*((u32*)(r0 + 0x0000051C)) << 0x1b) >> 0x1c));
    ov27_0225C088();
    ov27_0225C06C();
}




void ov27_0225C10C(void) {
    // add r0, r7, r0
    FieldSystem_ShouldDrawStartMenuIcon(*((u32*)(r0 + 0x10)), *((u8*)(0 + (((*((u32*)(r0 + 0x0000051C)) << 0x1b) >> 0x1c) << 3))));
    // add r2, r5, r4
    // strb r0, [r2, r1]
    // add r0, r0, r1
    // add r1, r5, r4
    // strb r2, [r1, r0]
    // add r1, r5, r4
    // sub r0, #0xa4
    // strb r1, [r6, r0]
    // add r6, #8
}




void ov27_0225C170(void) {
    // mvn r4, r4
    // add r0, #8
    // mvn r0, r0
}




void ov27_0225C1AC(void) {
    // mvn r5, r5
    // add r7, #8
    // mvn r1, r1
    // add r0, #0xd3
    // strb r5, [r0]
}




void ov27_0225C1EC(void) {
    // add r1, r4, r0
    // add r0, #0xd3
    // strb r2, [r0]
    // add r1, #0xd3
    // add r3, #8
}




void ov27_0225C238(void) {
    // bx r3
    // nop
    // _0225C244: .word Heap_AllocAtEnd
}




void ov27_0225C248(void) {
}




void ov27_0225C24C(void) {
}




void ov27_0225C250(void) {
    // str r2, [sp]
    // str r3, [sp, #4]
    Heap_Create(3, 8, (3 << 0xf));
    GXS_SetGraphicsMode(0);
    GX_SetBankForSubBG(0x80);
    GX_SetBankForSubOBJ((1 << 8));
    // and r1, r0
    // str r0, [r2]
    InitBgFromTemplate(r5, 4, ov27_0225D370, 0);
    InitBgFromTemplate(r5, 5, ov27_0225D38C, 0);
    InitBgFromTemplate(r5, 6, ov27_0225D3A8, 0);
    BG_ClearCharDataRange(4, 0x20, 0, 4);
    BG_ClearCharDataRange(5, 0x20, 0, 4);
    BG_ClearCharDataRange(6, 0x20, 0, 4);
    BgClearTilemapBufferAndCommit(r5, 4);
    BgClearTilemapBufferAndCommit(r5, 5);
    CreateSysTaskAndEnvironment(ov27_0225C434, (0xe9 << 2), 0xa, 8);
    SysTask_GetData();
    *((u32*)(r0 + 0x1c)) = r6;
    *((u32*)(r0 + 0x14)) = 0;
    *((u32*)(r0 + 0x18)) = r5;
    // ldr r1, [sp]
    *((u32*)(r0 + 0x20)) = r7;
    *((u32*)(r0 + 0x24)) = r1;
    *((u32*)(r0 + 0x48)) = 0;
    // ldr r1, [sp, #4]
    // str r0, [r4]
    *((u32*)(r0 + 4)) = r1;
    // str r0, [r4, r1]
    // str r0, [r4, r1]
    *((u32*)(r0 + 0x34)) = 0;
    *((u32*)(r0 + 0x44)) = 0;
    FontID_Alloc(4, 8);
    // add r1, #0xd2
    ov27_0225C914(r4, ((*((u8*)*((u32*)(r4 + 0x24))) << 0x1a) >> 0x1a));
    ov27_0225C4AC(r4);
    ov27_0225C72C(r4);
    ov27_0225C80C(r4, 0);
    // and r0, r1
    // str r0, [r2]
    GfGfx_EngineBTogglePlanes(1, 1, 0x04001000);
    GfGfx_EngineBTogglePlanes(2, 1);
    GfGfx_EngineBTogglePlanes(4, 1);
    GfGfx_EngineBTogglePlanes(0x10, 1);
    TextFlags_SetCanTouchSpeedUpPrint(1);
}




void ov27_0225C398(void) {
    // str r0, [sp]
    // str r1, [sp, #4]
    // ldr r0, [sp, #4]
    // ldr r0, [sp]
    // ldr r0, [sp]
    // ldr r0, [sp]
}




u8 ov27_0225C418(void) {
}




void ov27_0225C41C(void) {
}




void ov27_0225C434(void) {
    FieldSystem_TaskIsRunning(*((u32*)(r1 + 0x24)));
    // add r1, #0xd2
    // add r1, #0xd2
    // add r0, #0xd2
    // strb r1, [r0]
    // strh r1, [r0]
    // blx r1
    // add r0, #0xd2
    // add r2, #0xd2
    // strb r1, [r2]
    ov01_021F6A9C(*((u32*)(r4 + 0x24)), 0, 0);
    SpriteList_RenderAndAnimateSprites(*((u32*)(r4 + (0x86 << 2))));
}




void ov27_0225C4AC(void) {
    NARC_New(0xef, 8);
    // strh r1, [r2]
    // str r2, [sp]
    // str r2, [sp, #4]
    GfGfxLoader_GXLoadPalFromOpenNarc(0, 4, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharDataFromOpenNarc(r4, 1, *((u32*)(r5 + 0x18)), 6);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnDataFromOpenNarc(r4, 9, *((u32*)(r5 + 0x18)), 6);
    // str r0, [sp]
    // add r3, sp, #0x10
    GfGfxLoader_GetScrnDataFromOpenNarc(r4, 9, 0);
    // ldr r3, [sp, #0x10]
    // add r2, #0xc
    BG_LoadScreenTilemapData(*((u32*)(r5 + 0x18)), 6, r3, *((u32*)(r3 + 8)));
    ScheduleBgTilemapBufferTransfer(*((u32*)(r5 + 0x18)), 6);
    Heap_Free(r6);
    NARC_Delete(r4);
}




void ov27_0225C540(void) {
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
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, #0x28
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, #0x38
    // add r0, #0x28
    // add r0, #0x38
}




void ov27_0225C5E4(void) {
    // add r0, #0x28
    // add r4, #0x38
}




void ov27_0225C618(void) {
    // str r0, [sp, #0x10]
    ov01_021EEF58(*((u32*)(r0 + 0xc)));
    // ldr r0, [sp, #0x10]
    ov01_021EEF60(*((u32*)(r0 + 0xc)));
    NARC_New(0xef, 8);
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    // ldr r2, [sp, #0x10]
    GfGfxLoader_LoadCharDataFromOpenNarc(1, *((u32*)(r2 + 0x18)), 4);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r2, [sp, #0x10]
    GfGfxLoader_LoadScrnDataFromOpenNarc(r4, r6, *((u32*)(r2 + 0x18)), 4);
    NARC_Delete(r4);
    // str r0, [sp, #0x14]
    // ldr r5, [sp, #0x10]
    // add r5, #0x54
    // str r0, [sp, #0x18]
    // ldr r2, [sp, #0x18]
    // ldr r0, [sp, #0x10]
    // add r2, r2, r4
    AddWindow(*((u32*)(((r6 - 2) << 2) + 0x18)), r5, *((u32*)(ov27_0225D4B8 + r2)), ov27_0225D4B8);
    // ldr r0, [sp, #0x14]
    // add r4, #8
    // add r5, #0x10
    // str r0, [sp, #0x14]
    // ldr r4, [sp, #0x10]
    // add r4, #0x54
    FillWindowPixelBuffer(r4, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r4, 4, *((u32*)r7), 0);
    ScheduleWindowCopyToVram(r4);
    // add r4, #0x10
    // add r7, #8
    // ldr r0, [sp, #0x10]
    // str r6, [r0, r1]
}




void ov27_0225C6F8(void) {
    // add r5, #0x54
    // add r5, #0x10
}




void ov27_0225C72C(void) {
    // add r1, r6, r1
    // str r0, [r6, r1]
    // add r0, r6, r0
    // str r0, [r5, r7]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [r6, r1]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // sub r1, #0xc
    // str r0, [sp, #0xc]
    // str r0, [r6, r1]
    // str r0, [sp]
    // str r0, [sp, #4]
    // sub r1, #0xc
    // str r0, [sp, #8]
    // str r0, [r6, r1]
    // str r0, [sp]
    // str r0, [sp, #4]
    // sub r1, #0xc
    // str r0, [sp, #8]
    // str r0, [r6, r1]
    // sub r1, #0xc
}




void ov27_0225C80C(void) {
    // str r1, [sp]
    // sub r0, #0xb
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r2, [sp, #0xc]
    // str r2, [sp, #0x10]
    // str r3, [sp, #0x14]
    // str r3, [sp, #0x18]
    // add r3, #8
    // str r3, [sp, #0x1c]
    // add r3, #0xc
    // add r0, #0x20
    // str r3, [sp, #0x20]
    // str r2, [sp, #0x24]
    // str r2, [sp, #0x28]
    // add r0, r5, r0
    CreateSpriteResourcesHeader((0xd1 << 2), 0xa, 0xa, 0xa);
    // str r0, [sp, #0x2c]
    // str r1, [sp, #0x34]
    // add r2, r2, r1
    // add r0, r5, r0
    // str r0, [sp, #0x30]
    // str r0, [sp, #0x3c]
    // str r2, [sp, #0x38]
    // str r1, [sp, #0x40]
    // str r1, [sp, #0x44]
    // str r1, [sp, #0x48]
    // add r1, sp, #0x2c
    *((u16*)(((1 << 8) << 4) + 0x20)) = 0;
    // str r0, [sp, #0x50]
    // str r0, [sp, #0x54]
    // str r0, [sp, #0x58]
    // add r0, sp, #0x2c
    Sprite_CreateAffine(8, ((1 << 8) << 4), (*((u16*)(ov27_0225D11A + (r4 << 2))) << 0xc));
    // str r0, [r5, r1]
    Sprite_SetAnimCtrlSeq(*((u32*)(r5 + (0xe2 << 2))), 1);
    Sprite_SetAnimActiveFlag(*((u32*)(r5 + (0xe2 << 2))), 1);
    Sprite_SetDrawFlag(*((u32*)(r5 + (0xe2 << 2))), 0);
}




void ov27_0225C8D0(void) {
    NewString_ReadMsgData(r1, r2);
    FillWindowPixelBuffer(r5, 0);
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r5, 4, r4, 0);
    ScheduleWindowCopyToVram(r5);
    String_Delete(r4);
}




void ov27_0225C914(void) {
}




void ov27_0225C930(void) {
}




void ov27_0225C944(void) {
}




void ov27_0225C94C(void) {
    // str r2, [r4, r1]
    // str r0, [r4]
}




void ov27_0225C988(void) {
}




void ov27_0225C994(void) {
    // strh r1, [r0]
    // str r0, [r4]
}




void ov27_0225C9CC(void) {
}




void ov27_0225C9E4(void) {
}




void ov27_0225C9F8(void) {
    *((u32*)(gSystem + 0x5c)) = 1;
}




void ov27_0225CA14(void) {
    // str r1, [r4]
    // str r2, [r4, r1]
    ov27_0225C618((0xe5 << 2), 0);
    Sprite_SetDrawFlag(*((u32*)(r4 + (0xe2 << 2))), 1);
    ov27_0225CD18(r4, *((u32*)(r4 + (0x85 << 2))), *((u32*)(r4 + (0xe5 << 2))));
    // sub r1, #8
    // blx r2
    // strh r1, [r0]
}




void ov27_0225CA68(void) {
    // add r1, r4, r1
    // ldrsb r2, [r2, r1]
    // mvn r1, r1
    // str r2, [r0]
}




void ov27_0225CA98(void) {
    TouchscreenHitbox_FindRectAtTouchNew(*((u32*)(ov27_0225D49C + ((*((u32*)(r0 + (0x85 << 2))) - 2) << 2))), ((*((u32*)(r0 + (0x85 << 2))) - 2) << 2));
    // mvn r1, r1
    // str r0, [r4, r2]
    ov27_0225CD18(r4, *((u32*)(r4 + (0x85 << 2))), *((u32*)(r4 + (0xe5 << 2))));
    PlaySE(0x000005DC);
    // str r0, [r4]
    ov27_0225CD74(r4, *((u32*)(r4 + (0x85 << 2))));
    // sub r1, #8
    // blx r2
    // tst r1, r0
    // add r0, r4, r0
    ov27_0225CA68((0xe5 << 2), *((u32*)(r4 + (0x85 << 2))), 0);
    ov27_0225CD18(r4, *((u32*)(r4 + (0x85 << 2))), *((u32*)(r4 + (0xe5 << 2))));
    PlaySE(0x000005DC);
    // sub r1, #8
    // blx r2
    // tst r1, r0
    // add r0, r4, r0
    ov27_0225CA68((0xe5 << 2), *((u32*)(r4 + (0x85 << 2))), 1);
    ov27_0225CD18(r4, *((u32*)(r4 + (0x85 << 2))), *((u32*)(r4 + (0xe5 << 2))));
    PlaySE(0x000005DC);
    // sub r1, #8
    // blx r2
    // tst r1, r0
    // add r0, r4, r0
    ov27_0225CA68((0xe5 << 2), *((u32*)(r4 + (0x85 << 2))), 2);
    ov27_0225CD18(r4, *((u32*)(r4 + (0x85 << 2))), *((u32*)(r4 + (0xe5 << 2))));
    PlaySE(0x000005DC);
    // sub r1, #8
    // blx r2
    // tst r1, r0
    // add r0, r4, r0
    ov27_0225CA68((0xe5 << 2), *((u32*)(r4 + (0x85 << 2))), 3);
    ov27_0225CD18(r4, *((u32*)(r4 + (0x85 << 2))), *((u32*)(r4 + (0xe5 << 2))));
    PlaySE(0x000005DC);
    // sub r1, #8
    // blx r2
    // tst r1, r0
    ov27_0225CD74(r4, *((u32*)(r4 + (0x85 << 2))), *((u32*)(r4 + (0xe7 << 2))));
    // str r0, [r4]
    PlaySE(0x000005DC);
    // tst r0, r1
    ov01_021EF00C(*((u32*)(r4 + 0xc)), 2);
    // str r0, [r4, r2]
    ov27_0225CD18(r4, *((u32*)(r4 + (0x85 << 2))), *((u32*)(r4 + (0xe5 << 2))));
    ov27_0225CD74(r4, *((u32*)(r4 + (0x85 << 2))));
    // str r0, [r4]
    PlaySE(0x000005DC);
}




void ov27_0225CC90(void) {
    // str r0, [r4]
}




void ov27_0225CCBC(void) {
    // add r0, r0, r1
    // strh r1, [r0]
    // str r0, [r4]
}




void ov27_0225CCE0(void) {
    // str r1, [sp]
    // add r1, r2, r1
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // add r1, sp, #0
    Sprite_SetMatrix(*((u32*)(r0 + (0xe2 << 2))), (0xe2 << 2), *((u16*)(ov27_0225D11A + (r1 << 2))));
}




void ov27_0225CD18(void) {
    // add r2, r2, r0
    // add r0, #0xe8
    // add r3, r3, r1
    // str r3, [sp]
    // add r3, r3, r1
    // add r0, r3, r0
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r1, r3, r1
    Sprite_SetAnimCtrlSeq(*((u32*)(r0 + (0xe2 << 2))), *((u8*)(r2 + ((r1 - 2) * 0x18))), ov27_0225D3C6);
    // add r1, sp, #0
    Sprite_SetMatrix(*((u32*)(r4 + (0xe2 << 2))));
}




void ov27_0225CD74(void) {
    // ldr r0, [r0, r2]
    // mul r3, r1
    // ldrb r1, [r1, r3]
    // bx r3
    // _0225CD8C: .word ov27_0225D3C6
    // _0225CD90: .word Sprite_SetAnimCtrlSeq
}




void ov27_0225CD94(void) {
    TouchscreenHitbox_FindRectAtTouchNew(ov27_0225D120);
    // mvn r1, r1
    // str r0, [r4, r1]
    ov27_0225CCE0(r4, *((u32*)(r4 + (0xe5 << 2))));
    Sprite_SetAnimCtrlSeq(*((u32*)(r4 + (0xe2 << 2))), 3);
    PlaySE(0x000005DC);
    // str r0, [r4]
    // str r0, [r4, r1]
    ov27_0225CCE0(r4, *((u32*)(r4 + (0xe5 << 2))));
    Sprite_SetAnimCtrlSeq(*((u32*)(r4 + (0xe2 << 2))), 3);
    PlaySE(0x000005DC);
    // str r0, [r4]
    // tst r1, r0
    PlaySE(0x000005DC, 0x40);
    // str r0, [r4, r1]
    ov27_0225CCE0(r4, *((u32*)(r4 + (0xe5 << 2))));
    // tst r1, r0
    PlaySE(0x000005DC, 0x80);
    // str r0, [r4, r1]
    ov27_0225CCE0(r4, *((u32*)(r4 + (0xe5 << 2))));
    // tst r1, r2
    Sprite_SetAnimCtrlSeq(*((u32*)(r4 + (0xe2 << 2))), 3, 1);
    // str r0, [r4]
    PlaySE(0x000005DC);
    // tst r0, r1
    // str r2, [r4, r1]
    ov27_0225CCE0(r4, *((u32*)(r4 + (0xe5 << 2))));
    Sprite_SetAnimCtrlSeq(*((u32*)(r4 + (0xe2 << 2))), 3);
    PlaySE(0x000005DC);
    // str r0, [r4]
}




void ov27_0225CEAC(void) {
}



