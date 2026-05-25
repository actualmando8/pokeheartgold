/* Decompiled from asm/overlay_trainer_card_main.s */
#include "global.h"

int TrainerCardMainApp_Init(void) {
    Main_SetVBlankIntrCB(0, 0);
    Main_SetHBlankIntrCB(0, 0);
    GfGfx_DisableEngineAPlanes();
    GfGfx_DisableEngineBPlanes();
    // and r1, r0
    // str r1, [r2]
    // and r0, r1
    // str r0, [r2]
    sub_0200FBF4(0, 0, 0x04001000);
    sub_0200FBF4(1, 0);
    sub_0200FBDC(0);
    sub_0200FBDC(1);
    SetKeyRepeatTimers(4, 8);
    Heap_Create(3, 0x19, (5 << 0x10));
    OverlayManager_CreateAndGetData(r5, 0x00003444, 0x19);
    memset(0, 0x00003444);
    OverlayManager_GetArgs(r5);
    // add r1, #0xe4
    // str r0, [r1]
    // add r0, #0xe4
    // add r0, #0xe8
    // str r1, [r0]
    // add r0, #0xe4
    MenuInputStateMgr_GetState(*((u32*)(*((u32*)r4) + 0x0000066C)), *((u32*)r4));
    // str r0, [r4, r1]
    // add r0, #0xe4
    Save_PlayerData_GetOptionsAddr(*((u32*)(*((u32*)r4) + (0x67 << 4))), *((u32*)r4));
    Options_GetTextFrameDelay();
    // strb r0, [r4, r1]
    Options_GetFrame(r5, 0x0000343E);
    // strb r0, [r4, r1]
    sub_02037474(0x0000343D);
    // strb r0, [r4, r1]
    // add r0, #0xe8
    // add r0, #0x33
    // strb r0, [r4, r1]
    // strb r2, [r4, r1]
    // add r1, #0xe4
    // strb r0, [r4, r2]
    // add r0, #0xe8
    // add r0, #0xf9
    // add r6, #0xe8
    // tst r6, r3
    // add r6, r4, r2
    // strb r1, [r6, r5]
    // add r6, r4, r2
    // strb r0, [r6, r7]
    // add r1, r4, r3
    // strb r2, [r1, r0]
    BgConfig_Alloc(0x19, 1, 0, (0 + 1));
    // str r0, [r4]
    ov51_021E5F64(r4);
    ov51_021E60D4();
    ov51_021E6238(*((u32*)r4));
    ov51_021E6354(r4);
    sub_020210BC();
    sub_02021148(4);
    TextFlags_SetCanTouchSpeedUpPrint(1);
    TextFlags_SetCanABSpeedUpPrint(1);
    Sound_SetSceneAndPlayBGM(0x38, 0, 0);
    // add r0, r4, r0
    ov51_021E7DA4(0x000033A0);
    PlaySE(SEQ_SE_DP_CARD3);
    // add r0, r4, r0
    ov51_021E78F8(0x0000311C);
    // add r1, r4, r2
    // add r2, #0x16
    // add r0, r4, r0
    ov51_021E7AF4(0x0000311C, ((*((u8*)(r4 + 0x00003424)) << 0x1f) >> 0x1f));
    // add r0, r4, r0
    ov51_021E7BD0(0x0000311C);
    ov51_021E6E60(r4);
    // add r0, #0x54
    ov51_021E7664(r4, 1, *((u32*)(r4 + 0x000033CC)));
    // add r0, #0xe4
    // str r1, [r4, r0]
    // add r1, #0xe4
    // str r0, [r2, r1]
    // strb r0, [r4, r1]
    // str r3, [r4, r2]
    // sub r2, #0x98
    // str r0, [r4, r2]
    // strb r0, [r4, r1]
    ov51_021E6C00(0, (0x00003434 + 4), 0x00003434, (0 - 1));
    ov51_021E6734(r4);
    ov51_021E76A4(r4, 0);
    Main_SetVBlankIntrCB(ov51_021E6B88, r4);
    sub_0203A964();
    GF_SndHandleSetPlayerVolume(1, 0x2a);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(2, 3, 3, 0);
    // add r4, #0xe8
    GfGfx_EngineATogglePlanes(4, 0);
}





int TrainerCardMainApp_Main(void) {
    OverlayManager_GetData();
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _021E5DAE: ; jump table
    IsPaletteFadeFinished((*((u16*)(*((u32*)r5) + 6)) << 0x10));
    // str r0, [r5]
    ov51_021E6B44(1);
    // strb r1, [r4, r0]
    // str r0, [r5]
    // add r0, r4, r0
    ov51_021E7D44(0x0000311C, 1, 3, 1);
    // strb r1, [r4, r0]
    // str r0, [r5]
    // add r0, r4, r0
    ov51_021E7D44(0x0000311C, 0, 1, 1);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    BeginNormalPaletteFade(1, 4, 4, 0);
    // str r0, [r5]
    // add r1, #0xe8
    ov51_021E6DA8(r4, ((*((u8*)(*((u32*)r4) + 4)) << 0x1e) >> 0x1f));
    IsPaletteFadeFinished();
    ov51_021E6888(1);
    // str r0, [r5]
    ov51_021E67A4(1);
    // str r0, [r5]
    // str r0, [r5]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    BeginNormalPaletteFade(1, 4, 4, 0);
    // add r0, #0xe4
    // str r2, [r1, r0]
    // str r0, [r5]
    // strb r1, [r4, r0]
    // strb r1, [r4, r0]
    SpriteList_RenderAndAnimateSprites(*((u32*)(r4 + 0x0000311C)), 0, 1);
}





int TrainerCardMainApp_Exit(void) {
    OverlayManager_GetData();
    ov51_021E6C00();
    ov51_021E6038(r4);
    // add r0, r4, r0
    ov51_021E7CA4(0x0000311C);
    Heap_Free(*((u32*)(r4 + 0x000030EC)));
    Heap_Free(*((u32*)(r4 + 0x000033B8)));
    Heap_Free(*((u32*)(r4 + 0x000033B0)));
    ov51_021E6EF0(r4);
    ov51_021E6644(*((u32*)r4));
    sub_02021238();
    TextFlags_SetCanTouchSpeedUpPrint(0);
    TextFlags_SetCanABSpeedUpPrint(0);
    // add r0, #0xe4
    MenuInputStateMgr_SetState(*((u32*)(*((u32*)r4) + 0x0000066C)), *((u32*)(r4 + 0x0000310C)));
    OverlayManager_FreeData(r5);
    Main_SetVBlankIntrCB(0, 0);
    Heap_Destroy(0x19);
    GF_SndHandleSetPlayerVolume(1, 0x7f);
}





void ov51_021E5F64(void) {
    FontID_Alloc(4, 0x19);
    NewMsgDataFromNarc(0, 0x1b, 0x000002D7, 0x19);
    // str r0, [r5, r1]
    String_New(4, 0x19);
    // str r0, [r5, r1]
    String_New(0x20, 0x19);
    // str r0, [r5, r1]
    String_New(0xa, 0x19);
    // str r0, [r5, r1]
    String_New(5, 0x19);
    // str r0, [r5, r2]
    // sub r0, #8
    ReadMsgDataIntoString(*((u32*)(r5 + 0x000033CC)), 0xb, *((u32*)(r5 + 0x000033CC)));
    // add r1, #0xe
    NewString_ReadMsgData(*((u32*)(r5 + 0x000033C4)), 0);
    // str r0, [r4, r7]
    // add r1, #0x11
    NewString_ReadMsgData(*((u32*)(r5 + 0x000033C4)), 0);
    // str r0, [r6, r7]
    NewString_ReadMsgData(*((u32*)(r5 + 0x000033C4)), 0);
    // str r0, [r6, r7]
}





void ov51_021E6038(void) {
    String_Delete(*((u32*)(r0 + 0x000033EC)));
    String_Delete(*((u32*)(r6 + 0x000033E8)));
    String_Delete(*((u32*)(r6 + 0x000033E4)));
    String_Delete(*((u32*)(r6 + 0x000033E0)));
    String_Delete(*((u32*)(r6 + 0x000033DC)));
    String_Delete(*((u32*)(r6 + 0x000033D8)));
    String_Delete(*((u32*)(r6 + 0x000033CC)));
    String_Delete(*((u32*)(r6 + 0x000033D4)));
    String_Delete(*((u32*)(r6 + 0x000033D0)));
    String_Delete(*((u32*)(r6 + 0x000033C8)));
    DestroyMsgData(*((u32*)(r6 + 0x000033C4)));
    FontID_Release(4);
}





void ov51_021E60D4(void) {
}





void ov51_021E60F4(void) {
    // add r0, #0xf9
    // add r4, sp, #0x4c
    // ldmia r5!, {r0, r1}
    // stmia r4!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r4!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r4!, {r0, r1}
    GF_AssertFail(((r2 << 0x18) >> 0x18), r4, r0);
    // ldr r1, [sp, #0x4c]
    // add r4, sp, #0x34
    // ldmia r5!, {r0, r1}
    // stmia r4!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r4!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r4!, {r0, r1}
    GF_AssertFail((r3 << 2), 6, r4);
    // ldr r1, [sp, #0x34]
    // add r4, sp, #0x1c
    // ldmia r5!, {r0, r1}
    // stmia r4!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r4!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r4!, {r0, r1}
    GF_AssertFail((r3 << 2), *((u32*)(r2 + (r3 << 2))), r4);
    // ldr r1, [sp, #0x1c]
    // add r4, sp, #4
    // ldmia r5!, {r0, r1}
    // stmia r4!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r4!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r4!, {r0, r1}
    GF_AssertFail((r3 << 2), *((u32*)(r2 + (r3 << 2))), r4);
    // ldr r1, [sp, #4]
    GF_AssertFail((r3 << 2), *((u32*)(r2 + (r3 << 2))));
    // add r2, sp, #0
    GfGfxLoader_GetPlttData(0x31, 0, 0x19);
    // ldr r0, [sp]
    DC_FlushRange(*((u32*)(r0 + 0xc)), (2 << 8));
    // ldr r0, [sp]
    // add r0, #0x20
    // add r2, #0xe0
    GXS_LoadBGPltt(*((u32*)(r0 + 0xc)), 0x20, 0x20);
    // add r0, r5, r1
    GXS_LoadBGPltt((0x1e << 4), 0x20);
    Heap_Free(r4);
}





void ov51_021E6200(void) {
    // add r2, sp, #0
    // ldr r0, [sp]
    // add r0, r5, r4
    // add r0, r5, r4
}





void ov51_021E6238(void) {
    // strh r0, [r2]
    // add r3, sp, #0xa8
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    SetBothScreensModesAndDisable(r3, *((u16*)0x04000304), r3);
    // add r3, sp, #0x8c
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 7, r3, 2);
    BgClearTilemapBufferAndCommit(r4, 7);
    // add r3, sp, #0x54
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // add r2, sp, #0x54
    InitBgFromTemplate(r4, 4, (7 - 1), 0);
    BgClearTilemapBufferAndCommit(r4, 4);
    // add r2, sp, #0x70
    InitBgFromTemplate(r4, 5, 0);
    BgClearTilemapBufferAndCommit(r4, 5);
    // add r3, sp, #0x38
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 6, r3, 2);
    BgClearTilemapBufferAndCommit(r4, 6);
    // add r3, sp, #0x1c
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 2, r3, 0);
    BgClearTilemapBufferAndCommit(r4, 2);
    // add r3, sp, #0
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 3, r3, 0);
    BgClearTilemapBufferAndCommit(r4, 3);
}





void ov51_021E6354(void) {
    // add r2, sp, #0x20
    GfGfxLoader_GetPlttData(0x31, 0, 0x19);
    // ldr r0, [sp, #0x20]
    DC_FlushRange(*((u32*)(r0 + 0xc)), (2 << 8));
    // ldr r0, [sp, #0x20]
    GXS_LoadBGPltt(*((u32*)(r0 + 0xc)), 0, (2 << 8));
    Heap_Free(r5);
    // add r0, #0xe8
    ov51_021E60F4(*((u8*)(*((u32*)r4) + 3)), ((*((u8*)(*((u32*)r4) + 4)) << 0x1c) >> 0x1f), *((u8*)*((u32*)r4)));
    // add r2, sp, #0x1c
    GfGfxLoader_GetPlttData(0x31, 0x1c, 0x19);
    // ldr r0, [sp, #0x1c]
    DC_FlushRange(*((u32*)(r0 + 0xc)), (2 << 8));
    // ldr r0, [sp, #0x1c]
    GX_LoadBGPltt(*((u32*)(r0 + 0xc)), 0, (2 << 8));
    Heap_Free(r5);
    // add r0, #0xe8
    // str r2, [sp]
    GfGfxLoader_LoadFromNarc(0x31, 0x2c, 0, 0x19);
    // str r0, [r4, r1]
    GF_AssertFail(*((u32*)(r4 + 0x000030EC)), 0x000030EC);
    // add r1, r4, r1
    NNS_G2dGetUnpackedBGCharacterData(*((u32*)(r4 + 0x000030EC)), (0x000030EC + 4));
    GF_AssertFail();
    // add r0, #0xe8
    // str r0, [sp]
    // add r3, r4, r3
    GfGfxLoader_GetScrnData(0x31, 0x36, 0, 0x000033B4);
    // str r0, [r4, r1]
    // str r0, [sp]
    // add r3, r4, r3
    GfGfxLoader_GetScrnData(0x31, 0x37, 0);
    // str r0, [r4, r1]
    // str r2, [sp]
    GfGfxLoader_LoadFromNarc(0x31, *((u32*)(ov51_021E7F08 + (0x000033B0 << 2))), 0, 0x19);
    // str r0, [r4, r1]
    GF_AssertFail(*((u32*)(r4 + 0x000030EC)), 0x000030EC);
    // add r1, r4, r1
    NNS_G2dGetUnpackedBGCharacterData(*((u32*)(r4 + 0x000030EC)), (0x000030EC + 4));
    GF_AssertFail();
    // str r0, [sp]
    // add r3, r4, r3
    GfGfxLoader_GetScrnData(0x31, 0x3d, 0, 0x000033B4);
    // str r0, [r4, r1]
    // add r0, #0xe8
    ov51_021E6200(*((u8*)(*((u32*)r4) + 5)), 0x000033B0);
    ov51_021E6C6C(r4);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharData(0x31, 0x29, *((u32*)r4), 6);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnData(0x31, 0x2f, *((u32*)r4), 6);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharData(0x31, 0x2a, *((u32*)r4), 5);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnData(0x31, 0x31, *((u32*)r4), 5);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharData(0x31, 0x2b, *((u32*)r4), 2);
    // str r0, [sp]
    // add r3, r4, r3
    GfGfxLoader_GetScrnData(0x31, 0x35, 0, 0x000033BC);
    // str r0, [r4, r1]
    // add r1, #0x82
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnData(0x31, 0x34, *((u32*)r4), 2);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnData(0x31, 0x33, *((u32*)r4), 2);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnData(0x31, 0x32, *((u32*)r4), 3);
    // add r0, #0xe8
    // sub r1, #0x7e
    // str r3, [sp]
    // str r1, [sp, #4]
    // add r1, #0xc
    // str r1, [sp, #8]
    // str r2, [sp, #0xc]
    // str r2, [sp, #0x10]
    // str r1, [sp, #0x14]
    // str r0, [sp, #0x18]
    CopyToBgTilemapRect(*((u32*)r4), 2, 0, 7);
    // add r0, #0xe8
    // str r2, [sp]
    // str r1, [sp, #4]
    // add r1, #0xc
    // str r1, [sp, #8]
    // str r2, [sp, #0xc]
    // str r2, [sp, #0x10]
    // str r1, [sp, #0x14]
    // str r0, [sp, #0x18]
    CopyToBgTilemapRect(*((u32*)r4), 2, 0, 0xe);
    BgCommitTilemapBufferToVram(*((u32*)r4), 2);
    // add r0, #0xe8
    // add r4, #0xec
    // add r0, #0x68
    ov51_021E6CF0(*((u32*)r4), r4);
}





void ov51_021E6644(void) {
}





void ov51_021E66C0(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnData(0x31, 0x2f, *((u32*)r0), 6);
    ov51_021E74D4((r4 + 4), 7, 0xa);
    BgClearTilemapBufferAndCommit(*((u32*)r4), 7);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnData(0x31, 0x30, *((u32*)r4), 6);
    ov51_021E74D4((r4 + 4), 0, 6);
    ov51_021E6CCC(r4);
    BgClearTilemapBufferAndCommit(*((u32*)r4), 7);
}





void ov51_021E6734(void) {
    ov51_021E66C0();
    // add r0, r4, r0
    ov51_021E7D44(0x0000311C, 0, 0, 1);
    ov51_021E6C6C(r4);
    ov51_021E76EC(r4, 1);
    // add r2, #0xec
    ov51_021E6D44(*((u32*)r4), 7, r4);
    ov51_021E76EC(r4, 0);
    // add r2, #0xe8
    ov51_021E6F18(r4, (r4 + 4), *((u32*)r4));
    // add r2, #0xe8
    ov51_021E7208(r4, (r4 + 4), *((u32*)r4));
    ov51_021E71D0(r4, (r4 + 4));
}





void ov51_021E67A4(void) {
    // add r2, r2, r2
    // add r2, pc
    // asr r2, r2, #0x10
    // add pc, r2
    // _021E67BC: ; jump table
    ov51_021E77A0(0, (*((u16*)(*((u8*)(r0 + 0x00003436)) + 6)) << 0x10));
    // strb r1, [r4, r0]
    TextPrinterCheckActive(*((u8*)(r4 + ((*((u8*)(r4 + 0x00003436)) + 1) + 6))), (*((u8*)(r4 + 0x00003436)) + 1));
    ov51_021E7804(r4, 0);
    ov51_021E6E10(r4, 1);
    // strb r1, [r4, r0]
    ov51_021E786C(0x00003436, 0);
    ov51_021E6E10(r4, 0);
    // add r0, #0xe8
    ov51_021E77A0(r4, 1);
    // strb r1, [r4, r0]
    TextPrinterCheckActive(*((u8*)(r4 + ((*((u8*)(r4 + 0x00003436)) + 1) + 6))), (*((u8*)(r4 + 0x00003436)) + 1));
    ov51_021E7804(r4, 1);
    // strb r1, [r4, r0]
    ov51_021E786C(0x00003436, 1);
    ov51_021E6E10(r4, 0);
}





void ov51_021E6888(void) {
    // add r2, r2, r2
    // add r2, pc
    // asr r2, r2, #0x10
    // add pc, r2
    // _021E68A4: ; jump table
    // sub r1, #0xa2
    // str r0, [r4, r1]
    // str r2, [r4, r1]
    // str r2, [r4, r0]
    // add r0, #0x80
    // str r0, [r4, r1]
    // add r2, #0x80
    // str r2, [r4, r0]
    PlaySE(SEQ_SE_DP_CARD5, 0x000030FC, *((u32*)(r0 + (0x000030FC + 4))));
    // strb r1, [r4, r0]
    // sub r3, #0xa2
    // sub r3, r3, r7
    // lsl r0, r3
    // sub r0, r2, r0
    // str r0, [r4, r6]
    // str r0, [r4, r6]
    // strb r0, [r4, r1]
    // str r1, [r4, r0]
    // str r1, [r4, r0]
    // eor r1, r3
    // str r1, [r4, r2]
    ov51_021E66C0(0x00003394, 1, 0x000030F4, *((u32*)(r4 + 0x000030F4)));
    // strb r1, [r4, r0]
    ov51_021E6C6C(0x00003436, *((u32*)(r4 + 0x000030F4)));
    ov51_021E76EC(r4, 1);
    // add r2, #0xec
    ov51_021E6D44(*((u32*)r4), 7, r4);
    ov51_021E76EC(r4, r5);
    // strb r1, [r4, r0]
    ov51_021E71D0(0x00003436, (r4 + 4));
    // strb r1, [r4, r0]
    // sub r0, #0xa2
    // sub r0, #0xa2
    // str r2, [r4, r0]
    // sub r0, #0xa2
    // sub r1, #0xa2
    // str r0, [r4, r1]
    // sub r2, r2, r6
    // lsl r6, r2
    // add r1, r1, r6
    // str r1, [r4, r3]
    // str r1, [r4, r3]
    // str r1, [r4, r3]
    // str r1, [r4, r0]
    // strb r0, [r4, r1]
}





void ov51_021E69EC(void) {
    FX_Inv(*((u32*)(r0 + 0x000030FC)));
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    FX_Inv(*((u32*)(r4 + (0x31 << 8))));
    // str r0, [sp, #0x14]
    OS_WaitVBlankIntr();
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r1, sp, #8
    G2x_SetBGyAffine_(0x04001020, 0x80, 0x60);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r1, sp, #8
    G2x_SetBGyAffine_(0x04001030, 0x80, 0x60);
    // strb r2, [r4, r1]
}





void ov51_021E6A54(void) {
    // tst r2, r1
    PlaySE(SEQ_SE_DP_SELECT, *((u32*)(gSystem + 0x48)), 0x0000343A);
    // tst r0, r1
    // mov r0, #SEQ_SE_GS_GEARCANCEL>>6
    PlaySE((2 << 6));
    // tst r0, r1
}





void ov51_021E6AAC(void) {
    System_GetTouchNew();
    TouchscreenHitbox_TouchNewIsIn(_021E7DB8);
    // str r0, [r4]
    // mov r0, #SEQ_SE_GS_GEARCANCEL>>6
    PlaySE((1 << 6));
    TouchscreenHitbox_TouchNewIsIn(ov51_021E7DBC);
    // str r0, [r4]
    PlaySE(SEQ_SE_DP_SELECT);
    TouchscreenHitbox_TouchNewIsIn(ov51_021E7DC0);
    // strb r2, [r5, r0]
    // strb r1, [r5, r0]
    // str r0, [r4]
}





void ov51_021E6B44(void) {
    // str r1, [sp]
    // str r2, [r4, r1]
    // add r1, sp, #0
    ov51_021E6AAC(0x00003108, (0 - 1));
    // ldr r1, [sp]
    // str r2, [r4, r1]
    ov51_021E6A54(r4, 0x0000310C, 1);
    // str r2, [r4, r1]
}





void ov51_021E6B88(void) {
    // neg r5, r0
    BgSetPosTextAndCommit(*((u32*)r0), 5, 0, r5);
    BgSetPosTextAndCommit(*((u32*)r4), 5, 3, r5);
    BgSetPosTextAndCommit(*((u32*)r4), 3, 0, r5);
    BgSetPosTextAndCommit(*((u32*)r4), 3, 3, r5);
    ov51_021E69EC(r4);
    DoScheduledBgGpuUpdates(*((u32*)r4));
    GF_RunVramTransferTasks();
    OamManager_ApplyAndResetBuffers();
    // str r0, [r3, r1]
}





void ov51_021E6C00(void) {
    FX_Inv((1 << 0xc));
    FX_Inv((1 << 0xc));
    // str r4, [sp, #8]
    // str r1, [sp, #0xc]
    // str r1, [sp, #0x10]
    // str r0, [sp, #0x14]
    OS_WaitVBlankIntr(0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r1, sp, #8
    G2x_SetBGyAffine_(0x04001020, 0x80, 0x60);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r1, sp, #8
    G2x_SetBGyAffine_(0x04001030, 0x80, 0x60);
    OS_WaitVBlankIntr();
    // str r3, [sp]
    // add r1, sp, #8
    // str r3, [sp, #4]
    G2x_SetBGyAffine_(0x04000030, 0x80, 0);
}





void ov51_021E6C6C(void) {
    // str r0, [sp]
    BG_LoadCharTilesData(*((u32*)r0), 7, *((u32*)(*((u32*)(r0 + 0x000030F0)) + 0x14)), *((u32*)(*((u32*)(r0 + 0x000030F0)) + 0x10)));
    // str r1, [sp]
    // str r1, [sp, #4]
    // add r1, #0xc
    // str r1, [sp, #8]
    // str r2, [sp, #0xc]
    // str r3, [sp, #0x10]
    // str r1, [sp, #0x14]
    // str r0, [sp, #0x18]
    CopyToBgTilemapRect(*((u32*)r4), 7, 0x15, 5);
    BgCommitTilemapBufferToVram(*((u32*)r4), 7);
}





void ov51_021E6CCC(void) {
}





void ov51_021E6CF0(void) {
    // asr r3, r4, #2
    // add r3, r4, r3
    // asr r3, r3, #3
    // sub r5, r5, r6
    // ror r5, r3
    // add r3, r6, r5
    // asr r5, r4, #5
    // add r5, r4, r5
    // asr r5, r5, #6
    // add r3, r0, r3
    // sub r6, r6, r7
    // ror r6, r5
    // add r5, r7, r6
    // asr r6, r5
    // and r3, r6
    // strb r3, [r1, r4]
}





void ov51_021E6D44(void) {
    // str r1, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #4]
    // add r5, #0xc
    // add r5, r1, r5
    // add r6, r5, r6
    // ldr r0, [sp, #4]
}





void ov51_021E6DA8(void) {
    // add r1, #0xe8
    // sub r2, #0x71
    ov51_021E757C((r0 + 4), *((u32*)r0), *((u32*)(r0 + 0x00003439)));
    // add r0, #0x54
    ov51_021E7664(r4, 1, *((u32*)(r4 + 0x000033CC)));
    // sub r2, #0x6d
    // add r0, #0x54
    ov51_021E7664(r4, 0, *((u32*)(r4 + r2)));
    _s32_div_f((*((u8*)(r4 + 0x00003439)) + 1), 0x1e);
    // strb r1, [r4, r0]
}





void ov51_021E6E10(void) {
    // add r0, r5, r0
    ov51_021E7D44(0x0000311C, 1, 2, 0);
    // add r0, r5, r0
    ov51_021E7D44(0x0000311C, 0, 0, 0);
    // add r0, r5, r0
    ov51_021E7D44(1, 2, 1);
    // add r0, r5, r0
    ov51_021E7D44(0x0000311C, 0, 0, 1);
    ov51_021E78D0(r5, r4);
}





void ov51_021E6E60(void) {
    // add r1, r6, r1
    // add r2, r7, r2
    AddWindow(*((u32*)r0), (0 << 4), (0 << 3));
    // str r2, [sp]
    BG_FillCharDataRange(*((u32*)r5), 7, 0, 1);
    // str r2, [sp]
    BG_FillCharDataRange(*((u32*)r5), 4, 0, 1);
    // str r0, [sp]
    // str r0, [sp, #4]
    LoadUserFrameGfx2(*((u32*)r5), 4, 0x000003E1, 0xd);
    LoadFontPal0(4, (7 << 6), 0x19);
    YesNoPrompt_Create(0x19);
    // str r0, [r5, r1]
    ScheduleBgTilemapBufferTransfer(*((u32*)r5), 7);
    ScheduleBgTilemapBufferTransfer(*((u32*)r5), 4);
}





void ov51_021E6EF0(void) {
    // add r0, r4, r0
}





void ov51_021E6F18(void) {
    // str r0, [sp, #0x20]
    // str r0, [sp, #0x24]
    // add r0, r6, r0
    FillWindowPixelBuffer((0 << 4), 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r3, r7, r2
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x24]
    // add r0, r6, r0
    AddTextPrinterParameterizedWithColor(0, 0, *((u32*)(r3 + 0x000033EC)), 0);
    String_New(0x20, 0x19);
    // str r0, [sp, #0x1c]
    // str r0, [sp, #0x18]
    MessageFormat_New_Custom(6, 0x20, 0x19);
    // str r0, [sp, #0x14]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    ov51_021E74F4(r6, 0x60, 0, 0);
    // add r1, #8
    CopyU16ArrayToString(*((u32*)(r7 + 0x000033D0)), r5);
    // str r0, [sp]
    // add r0, #0x10
    ov51_021E7540(r6, 0x68, 0, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    BufferIntegerAsString(r4, 5, *((u32*)(r5 + 0x1c)), 6);
    // ldr r0, [sp, #0x20]
    // ldr r2, [sp, #0x1c]
    ReadMsgDataIntoString(0x13);
    // ldr r1, [sp, #0x18]
    // ldr r2, [sp, #0x1c]
    StringExpandPlaceholders(r4);
    // ldr r1, [sp, #0x18]
    FontID_String_GetWidth(0, 0);
    // sub r3, r1, r0
    // str r1, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x18]
    // str r0, [sp, #8]
    // add r0, #0x20
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r6, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    BufferIntegerAsString(r4, 5, *((u32*)(r5 + 0x20)), 3);
    // ldr r0, [sp, #0x20]
    // ldr r2, [sp, #0x1c]
    ReadMsgDataIntoString(0x1a);
    // ldr r1, [sp, #0x18]
    // ldr r2, [sp, #0x1c]
    StringExpandPlaceholders(r4);
    // ldr r1, [sp, #0x18]
    FontID_String_GetWidth(0, 0);
    // sub r3, r1, r0
    // str r1, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x18]
    // str r0, [sp, #8]
    // add r0, #0x30
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r6, 0);
    // ldr r0, [sp, #0x14]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r0, #0x40
    ov51_021E74F4(r6, 0x88, 0, 0);
    GetIGTHours(*((u32*)(r5 + 0x18)));
    // str r0, [sp]
    // str r0, [sp, #4]
    BufferIntegerAsString(r4, 0, r0, 3);
    GetIGTMinutes(*((u32*)(r5 + 0x18)));
    // str r3, [sp]
    // str r1, [sp, #4]
    BufferIntegerAsString(r4, 1, r0, 2);
    // ldr r0, [sp, #0x20]
    // ldr r2, [sp, #0x1c]
    ReadMsgDataIntoString(0x15);
    // str r0, [sp]
    // str r0, [sp, #4]
    BufferIntegerAsString(r4, 0, *((u16*)(r5 + 0x2a)), 3);
    // str r3, [sp]
    // str r1, [sp, #4]
    // add r2, #0x2e
    BufferIntegerAsString(r4, 1, *((u8*)r5), 2);
    // ldr r0, [sp, #0x20]
    // ldr r2, [sp, #0x1c]
    ReadMsgDataIntoString(0x14);
    // ldr r1, [sp, #0x18]
    // ldr r2, [sp, #0x1c]
    StringExpandPlaceholders(r4);
    // ldr r1, [sp, #0x18]
    FontID_String_GetWidth(0, 0);
    // sub r3, r1, r0
    // str r1, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x18]
    // str r0, [sp, #8]
    // add r0, #0x50
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r6, 0);
    // str r1, [sp]
    // str r0, [sp, #4]
    // add r2, #0x2f
    BufferIntegerAsString(r4, 2, *((u8*)r5), 2);
    // add r2, #0x30
    BufferMonthNameAbbr(r4, 3, *((u8*)r5));
    // str r3, [sp]
    // str r0, [sp, #4]
    // add r5, #0x31
    BufferIntegerAsString(r4, 4, *((u8*)r5), 2);
    // ldr r0, [sp, #0x20]
    // ldr r2, [sp, #0x1c]
    ReadMsgDataIntoString(0x16);
    // ldr r1, [sp, #0x18]
    // ldr r2, [sp, #0x1c]
    StringExpandPlaceholders(r4);
    // ldr r1, [sp, #0x18]
    FontID_String_GetWidth(0, 0);
    // sub r3, r1, r0
    // str r1, [sp]
    // str r0, [sp, #4]
    // add r6, #0x60
    // str r0, [sp, #8]
    // ldr r2, [sp, #0x18]
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r6, 0);
    // ldr r0, [sp, #0x1c]
    String_Delete();
    MessageFormat_Delete(r4);
}





void ov51_021E71D0(void) {
    // add r4, #0x70
    CopyWindowToVram(r1, 0x000030F4);
    // add r4, #0x10
    CopyWindowToVram(r4);
    // add r4, #0x10
}





void ov51_021E7208(void) {
    // str r0, [sp, #0x14]
    // str r2, [sp, #0x18]
    // str r0, [sp, #0x1c]
    // add r0, r5, r7
    FillWindowPixelBuffer(*((u32*)(r0 + 0x000033C4)), 0);
    // str r6, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x14]
    // str r0, [sp, #8]
    // add r3, r2, r3
    // str r6, [sp, #0xc]
    // add r0, r5, r7
    AddTextPrinterParameterizedWithColor(0x00010200, r6, *((u32*)((r4 << 2) + 0x000033EC)), r6);
    String_New(0x20, 0x19);
    // ldr r0, [sp, #0x14]
    MessageFormat_New_Custom(6, 0x20, 0x19);
    // ldr r1, [sp, #0x18]
    // add r1, #0x33
    // str r1, [sp]
    // str r2, [sp, #4]
    // ldr r2, [sp, #0x18]
    // add r2, #0x32
    BufferIntegerAsString(2, *((u8*)1), 2);
    // ldr r2, [sp, #0x18]
    // add r2, #0x33
    BufferMonthNameAbbr(r6, 3, *((u8*)r2));
    // ldr r2, [sp, #0x18]
    // str r3, [sp]
    // str r0, [sp, #4]
    // add r2, #0x34
    BufferIntegerAsString(r6, 4, *((u8*)r2), 2);
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x18]
    BufferIntegerAsString(r6, 0, *((u16*)(r2 + 0x2c)), 3);
    // ldr r2, [sp, #0x18]
    // str r3, [sp]
    // str r1, [sp, #4]
    // add r2, #0x35
    BufferIntegerAsString(r6, 1, *((u8*)r2), 2);
    // ldr r0, [sp, #0x1c]
    ReadMsgDataIntoString(0x16, r7);
    StringExpandPlaceholders(r6, r4, r7);
    // ldr r0, [sp, #0x1c]
    ReadMsgDataIntoString(0xc, r7);
    // str r1, [sp]
    // str r0, [sp, #4]
    BufferString(r6, 0, r7, 0);
    // str r3, [sp]
    // str r0, [sp, #4]
    BufferString(r6, 1, r7, 0);
    // ldr r0, [sp, #0x1c]
    ReadMsgDataIntoString(0x19, r4);
    FontID_String_GetWidth(0, r4, 0);
    // sub r3, r1, r0
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0x70
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r5, 0, r4);
    // ldr r0, [sp, #0x1c]
    ReadMsgDataIntoString(0x14, r7);
    StringExpandPlaceholders(r6, r4, r7);
    FontID_String_GetWidth(0, r4, 0);
    // sub r3, r1, r0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0x70
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r5, 0, r4);
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x18]
    BufferIntegerAsString(r6, 5, *((u32*)(r2 + 0x38)), 6);
    // ldr r0, [sp, #0x1c]
    ReadMsgDataIntoString(0x1b, r7);
    StringExpandPlaceholders(r6, r4, r7);
    FontID_String_GetWidth(0, r4, 0);
    // sub r3, r1, r0
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0x80
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r5, 0, r4);
    // ldr r0, [sp, #0x1c]
    ReadMsgDataIntoString(0x17, r4);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0x90
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r5, 0, r4, 0x70);
    // ldr r0, [sp, #0x18]
    // str r4, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r0, #0x90
    ov51_021E74F4(r5, 0xe0, 0, 0);
    // ldr r0, [sp, #0x1c]
    ReadMsgDataIntoString(0x18, r4);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0x90
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r5, 0, r4, 0xb0);
    // ldr r0, [sp, #0x18]
    // str r4, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r0, #0x90
    ov51_021E74F4(r5, 0xe0, 0x40, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x18]
    BufferIntegerAsString(r6, 5, *((u32*)(r2 + 0x44)), 6);
    // ldr r0, [sp, #0x1c]
    ReadMsgDataIntoString(0x1b, r7);
    StringExpandPlaceholders(r6, r4, r7);
    FontID_String_GetWidth(0, r4, 0);
    // sub r3, r1, r0
    // str r1, [sp]
    // str r0, [sp, #4]
    // add r5, #0xa0
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r5, 0, r4);
    String_Delete(r7);
    MessageFormat_Delete(r6);
}





void ov51_021E74D4(void) {
    // add r0, r5, r0
}





void ov51_021E74F4(void) {
    // str r0, [sp]
    // add r2, sp, #0x18
    // ldr r0, [sp, #0x28]
    // ldr r1, [sp, #0x2c]
    // ldr r3, [sp, #0x34]
    String16_FormatInteger(1, *((u8*)(r2 + 0x18)));
    // ldr r1, [sp, #0x28]
    FontID_String_GetWidth(0, 0);
    // add r3, r3, r4
    // str r6, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x28]
    // str r0, [sp, #8]
    // sub r3, r5, r3
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r7, 0, r0);
}





void ov51_021E7540(void) {
    // ldr r1, [sp, #0x28]
    FontID_String_GetWidth(0, 0);
    // add r3, r3, r4
    // str r6, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x28]
    // str r0, [sp, #8]
    // sub r3, r5, r3
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r7, 0, r0);
}





void ov51_021E757C(void) {
    GF_AssertFail(*((u32*)(r1 + 0x18)));
    GetIGTHours(*((u32*)(r5 + 0x18)));
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, #0x50
    FillWindowPixelRect(r7, 0, 0xb8, 0);
    NewMsgDataFromNarc(0, 0x1b, 0x000002D7, 0x19);
    // str r0, [sp, #0x10]
    String_New(0x20, 0x19);
    String_New(0x20, 0x19);
    // str r0, [sp, #0x14]
    MessageFormat_New_Custom(2, 0x20, 0x19);
    GetIGTHours(*((u32*)(r5 + 0x18)));
    // str r0, [sp]
    // str r0, [sp, #4]
    BufferIntegerAsString(r6, 0, r0, 3);
    GetIGTMinutes(*((u32*)(r5 + 0x18)));
    // str r3, [sp]
    // str r1, [sp, #4]
    BufferIntegerAsString(r6, 1, r0, 2);
    // ldr r0, [sp, #0x10]
    // ldr r2, [sp, #0x14]
    ReadMsgDataIntoString(0x15);
    // ldr r2, [sp, #0x14]
    StringExpandPlaceholders(r6, r4);
    FontID_String_GetWidth(0, r4, 0);
    // sub r3, r1, r0
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // add r7, #0x50
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r7, 0, r4);
    // ldr r0, [sp, #0x10]
    DestroyMsgData();
    String_Delete(r4);
    // ldr r0, [sp, #0x14]
    String_Delete();
    MessageFormat_Delete(r6);
}





void ov51_021E7664(void) {
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r3, [sp, #8]
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(0, 0xcd);
    // str r1, [sp]
    // str r1, [sp, #4]
    FillWindowPixelRect(0, 0xcd, 0);
    CopyWindowToVram(r4);
}





void ov51_021E76A4(void) {
    FontID_String_GetWidth(4, *((u32*)(r0 + 0x000033D8)), 0);
    // sub r4, r1, r0
    // add r0, #0xd4
    FillWindowPixelBuffer(r5, 0);
    // str r1, [sp]
    // str r2, [sp, #4]
    // str r0, [sp, #8]
    // str r2, [sp, #0xc]
    // add r0, #0xd4
    AddTextPrinterParameterizedWithColor(r5, 4, *((u32*)(r5 + 0x000033D8)), (r4 >> 1));
}





void ov51_021E76EC(void) {
    // add r4, #0xc4
    FillWindowPixelBuffer(r0, 0);
    FontID_String_GetWidth(4, *((u32*)(r5 + 0x000033E0)), 0);
    // sub r3, r1, r0
    // str r1, [sp]
    // str r2, [sp, #4]
    // str r0, [sp, #8]
    // str r2, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r4, 4, *((u32*)(r5 + 0x000033E0)), (r3 >> 1));
    // add r0, r5, r0
    ov51_021E7D44(0x0000311C, 1, 2, 1);
    FillWindowPixelBuffer(r4, 0);
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r4, 0, *((u32*)(r5 + 0x000033DC)), 0);
    // add r0, r5, r0
    ov51_021E7D44(0x0000311C, 1, 4, 1);
}





void ov51_021E77A0(void) {
    // add r0, #0xb4
    DrawFrameAndWindow2(1, 0x000003E1, 0xd);
    // add r0, #0xb4
    FillWindowPixelBuffer(r5, 0xf);
    // str r3, [sp]
    // add r4, r5, r4
    // str r0, [sp, #4]
    // sub r2, #0x5a
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // add r0, #0xb4
    AddTextPrinterParameterizedWithColor(r5, 1, *((u32*)((r4 << 2) + 0x0000343E)), 0);
    // strb r0, [r5, r1]
    ScheduleBgTilemapBufferTransfer(*((u32*)r5), 4);
}





void ov51_021E7804(void) {
    // add r0, sp, #0
    MI_CpuFill8(0, 0x14);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, sp, #0
    *((u8*)(0xb + 0x10)) = 0x1a;
    *((u8*)(0xb + 0x11)) = 6;
    // and r2, r3
    *((u8*)(0xb + 0x12)) = ((*((u8*)(0xb + 0x12)) & ~(0xf)) | 0xf);
    *((u8*)(0xb + 0x12)) = (*((u8*)(0xb + 0x12)) & ~(0xf0));
    // add r1, sp, #0
    YesNoPrompt_InitFromTemplate(*((u32*)(r4 + (0xcf << 6))), 0xf0, (*((u8*)(0xb + 0x12)) & ~(0xf0)), ((*((u32*)(r4 + 0x0000310C)) << 0x18) >> 0x18));
    ScheduleBgTilemapBufferTransfer(*((u32*)r4), 4);
}





void ov51_021E786C(void) {
    YesNoPrompt_HandleInput(*((u32*)(r0 + (0xcf << 6))));
    // mvn r0, r0
    YesNoPrompt_IsInTouchMode(*((u32*)(r5 + (0xcf << 6))));
    // str r0, [r5, r1]
    YesNoPrompt_Reset(*((u32*)(r5 + (0xcf << 6))), 0x0000310C);
    // add r0, #0xb4
    ClearFrameAndWindow2(r5, 0);
    ScheduleBgTilemapBufferTransfer(*((u32*)r5), 4);
}





void ov51_021E78D0(void) {
    // add r0, #0xd4
    // add r4, #0xc4
    // add r0, #0xd4
    // add r4, #0xc4
}





void ov51_021E78F8(void) {
    // str r0, [sp, #0x14]
    // and r3, r1
    // str r0, [r2]
    // and r1, r0
    // str r0, [r2]
    ov51_021E7D68((0x10 | 0xFFCFFFEF), 0xFFCFFFEF, 0x04001000, *((u32*)(1 << 0x1a)));
    NNS_G2dInitOamManagerModule();
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // str r2, [sp, #0x10]
    OamManager_Create(0, 0x80, 0, 0x20);
    // ldr r1, [sp, #0x14]
    G2dRenderer_Init(0x21, (r1 + 4), 0x19);
    // ldr r1, [sp, #0x14]
    // str r0, [r1]
    G2dRenderer_SetSubSurfaceCoords((r1 + 4), 0, (0xe << 0x10));
    // ldr r5, [sp, #0x14]
    Create2DGfxResObjMan(*((u8*)ov51_021E7FB8), 0, 0x19);
    // str r0, [r5, r1]
    Create2DGfxResObjMan(*((u8*)r4), r6, 0x19);
    // str r0, [r5, r7]
    // str r1, [sp, #0x24]
    // str r0, [sp, #0x28]
    // add r2, sp, #0x1c
    // strb r0, [r2]
    // ldr r4, [sp, #0x14]
    // add r7, sp, #0x24
    // add r6, sp, #0x1c
    // str r5, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    AddCharResObjFromNarc(*((u32*)((r4 + 1) + (0x4b << 2))), 0x31, *((u8*)(r6 + 1)), 0);
    // str r0, [r4, r1]
    // str r5, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // sub r0, #0x1c
    AddPlttResObjFromNarc(*((u32*)(r4 + (0x53 << 2))), 0x31, *((u8*)(r6 + 1)), 0);
    // str r0, [r4, r1]
    // str r5, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // sub r0, #0x1c
    AddCellOrAnimResObjFromNarc(*((u32*)(r4 + (0x15 << 4))), 0x31, *((u8*)(r6 + 2)), 0);
    // str r0, [r4, r1]
    // str r5, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // sub r0, #0x1c
    AddCellOrAnimResObjFromNarc(*((u32*)(r4 + (0x55 << 2))), 0x31, *((u8*)(r6 + 3)), 0);
    // str r0, [r4, r1]
    // sub r0, #0xc
    sub_0200ACF0(*((u32*)(r4 + (0x56 << 2))), (0x56 << 2));
    sub_0200AF94(*((u32*)(r4 + (0x15 << 4))));
    // add r4, #0x10
    // add r3, sp, #0x2c
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    NARC_New(0x31, 0x19, (8 - 1));
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x14]
    // add r7, r0, r1
    // ldr r0, [sp, #0x14]
    // add r1, sp, #0x2c
    // add r5, r0, r6
    // ldr r0, [sp, #0x18]
    NARC_AllocAndReadWholeMember(*((u32*)((0x8e << 2) + (0 << 2))), 0x19);
    // str r0, [r5, r1]
    // add r1, r7, r6
    NNS_G2dGetUnpackedPaletteData(*((u32*)(r5 + (0x7e << 2))), (0x7e << 2));
    Heap_Free(*((u32*)(r5 + (0x8e << 2))));
    GF_AssertFail();
    GF_AssertFail();
    // ldr r0, [sp, #0x18]
    NARC_Delete(((r4 + 1) << 0x18));
    GfGfx_EngineATogglePlanes(0x10, 1);
    GfGfx_EngineBTogglePlanes(0x10, 1);
}





void ov51_021E7AF4(void) {
    // str r1, [sp, #0x2c]
    // str r2, [sp, #0x30]
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    // add r0, #8
    // add r2, #0xc
    // str r0, [sp, #0x1c]
    // str r0, [sp, #0x20]
    // str r1, [sp, #0x24]
    // str r1, [sp, #0x28]
    // add r0, sp, #0x64
    CreateSpriteResourcesHeader(*((u32*)(r0 + (0x4b << 2))), 0, 0, 0);
    // str r0, [sp, #0x34]
    // add r0, sp, #0x64
    // str r0, [sp, #0x38]
    // str r7, [sp, #0x3c]
    // str r7, [sp, #0x40]
    // str r7, [sp, #0x44]
    // str r0, [sp, #0x48]
    // str r0, [sp, #0x4c]
    // str r0, [sp, #0x50]
    // add r0, sp, #0x34
    *((u16*)((1 << 0xc) + 0x20)) = 0;
    // str r0, [sp, #0x58]
    // str r0, [sp, #0x5c]
    // str r0, [sp, #0x60]
    // ldr r0, [sp, #0x30]
    // str r0, [sp, #0x3c]
    // add r0, r7, r0
    // str r0, [sp, #0x40]
    // add r0, sp, #0x34
    Sprite_CreateAffine((*((u32*)(ov51_021E801C + 4)) << 0xc));
    // str r0, [r5, r1]
    Sprite_SetAnimActiveFlag(*((u32*)(r5 + (0x5b << 2))), 1);
    Sprite_SetAnimCtrlSeq(*((u32*)(r5 + (0x5b << 2))), r4);
    // ldr r0, [sp, #0x2c]
    // ldr r0, [sp, #0x30]
    Sprite_SetDrawFlag(*((u32*)(r5 + (0x5b << 2))), 0);
    // add r6, #8
}





void ov51_021E7BD0(void) {
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r1, [sp, #0x10]
    // str r2, [sp, #0x14]
    // str r2, [sp, #0x18]
    // add r2, #8
    // add r3, #0xc
    // str r2, [sp, #0x1c]
    // str r2, [sp, #0x20]
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x28]
    // add r0, sp, #0x5c
    CreateSpriteResourcesHeader(0, 1, 1, 1);
    // str r0, [sp, #0x2c]
    // add r0, sp, #0x5c
    // str r0, [sp, #0x30]
    // str r6, [sp, #0x34]
    // str r6, [sp, #0x38]
    // str r6, [sp, #0x3c]
    // str r0, [sp, #0x40]
    // str r0, [sp, #0x44]
    // str r0, [sp, #0x48]
    // add r0, sp, #0x2c
    *((u16*)((1 << 0xc) + 0x20)) = 0;
    // str r0, [sp, #0x54]
    // str r6, [sp, #0x50]
    // str r0, [sp, #0x58]
    // str r0, [sp, #0x34]
    // add r0, r1, r0
    // str r0, [sp, #0x38]
    // add r0, sp, #0x2c
    Sprite_CreateAffine((0xe << 0x10), (*((u8*)(ov51_021E80A4 + 1)) << 0xc));
    // str r0, [r5, r1]
    Sprite_SetAnimActiveFlag(*((u32*)(r5 + (0x1f << 4))), 1);
    Sprite_SetAnimCtrlSeq(*((u32*)(r5 + (0x1f << 4))), *((u8*)r7));
    // sub r1, r1, r6
    Sprite_SetDrawPriority(*((u32*)(r5 + (0x1f << 4))), 2);
    Sprite_SetDrawFlag(*((u32*)(r5 + (0x1f << 4))), 0);
}





void ov51_021E7CA4(void) {
    // add r0, r5, r0
    Heap_Free(*((u32*)((0 << 2) + (0x7e << 2))));
    sub_0200AEB0(*((u32*)(r5 + (0x53 << 2))));
    sub_0200AEB0(*((u32*)(r5 + (0x57 << 2))));
    sub_0200B0A8(*((u32*)(r5 + (0x15 << 4))));
    sub_0200B0A8(*((u32*)(r5 + (0x16 << 4))));
    // add r6, r5, r0
    Destroy2DGfxResObjMan(*((u32*)(r6 + (0x4b << 2))));
    Destroy2DGfxResObjMan(*((u32*)(r6 + r7)));
    G2dRenderer_SetSubSurfaceCoords((r5 + 4), 0, (3 << 0x12));
    SpriteList_Delete(*((u32*)r5));
    OamManager_Free();
    ObjCharTransfer_Destroy();
    ObjPlttTransfer_Destroy();
    // and r1, r0
    // str r0, [r2]
}





void ov51_021E7D44(void) {
    // add r5, r0, r3
}





void ov51_021E7D68(void) {
    // add r3, sp, #0
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    ObjCharTransfer_Init(r3, r3);
    ObjPlttTransfer_Init(2, 0x19);
    ObjCharTransfer_ClearBuffers();
    ObjPlttTransfer_Reset();
    thunk_ClearMainOAM(0x19);
    thunk_ClearSubOAM(0x19);
}





void ov51_021E7DA4(void) {
    // strb r2, [r0]
}




