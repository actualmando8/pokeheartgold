/* Decompiled from asm/overlay_44.s */
#include "global.h"

void ov44_02229EE0(void) {
    // ldr r0, [r0, r1]
}





u8 ov44_02229EF8(void) {
}





u8 ov44_02229EFC(void) {
}





void ov44_02229F00(void) {
    // sub r1, #0x14
    // sub r0, #0x16
    // sub r0, #0x12
}





void ov44_02229F44(void) {
    // sub r0, #0x12
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02229F56: ; jump table
}





void ov44_02229F74(void) {
    // sub r0, #0x12
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02229F88: ; jump table
}





void ov44_02229FB4(void) {
    // sub r0, #9
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02229FC6: ; jump table
}





void ov44_02229FDC(void) {
    // sub r4, #0xf
    // add r0, r4, r4
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02229FFE: ; jump table
}





void ov44_0222A020(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222A030: ; jump table
}





void ov44_0222A048(void) {
    // sub r4, #0x12
    // add r0, r4, r4
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222A076: ; jump table
}





void ov44_0222A090(void) {
    // sub r0, #0xc
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222A0A2: ; jump table
}





void ov44_0222A0B4(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222A0C6: ; jump table
}





void ov44_0222A168(void) {
    // str r0, [sp]
    // ldr r0, [sp]
}





void ov44_0222A1B4(void) {
    // sub r1, #0x12
    // sub r4, #0x14
}





void ov44_0222A1FC(void) {
    // str r0, [sp, #4]
    Main_SetVBlankIntrCB(0, 0);
    HBlankInterruptDisable();
    GfGfx_DisableEngineAPlanes();
    GfGfx_DisableEngineBPlanes();
    // and r1, r0
    // str r1, [r2]
    // and r0, r1
    // str r0, [r2]
    SetKeyRepeatTimers(4, 8, 0x04001000);
    NARC_New(0x58, 0x35);
    // str r0, [sp, #0x20]
    BgConfig_Alloc(0x35);
    // ldr r1, [sp, #4]
    // str r0, [r1, r2]
    MessageFormat_New(0x35, (0x57 << 2));
    // ldr r1, [sp, #4]
    // str r0, [r1, r2]
    NewMsgDataFromNarc(0, 0x1b, 0x0000030A, 0x35);
    // ldr r1, [sp, #4]
    // str r0, [r1, r2]
    NewMsgDataFromNarc(0, 0x1b, (0x32 << 4), 0x35);
    // ldr r1, [sp, #4]
    // str r0, [r1, r2]
    ov44_0222A830((0x5b << 2));
    // ldr r0, [sp, #4]
    ov44_0222A850(*((u32*)(r0 + (0x57 << 2))), (0x57 << 2));
    // ldr r0, [sp, #4]
    // ldr r1, [sp, #0x20]
    ov44_0222AEC0();
    // ldr r0, [sp, #4]
    // add r0, r0, r1
    MI_CpuFill8(0, (0x33 << 4));
    // ldr r0, [sp, #0x20]
    // add r2, sp, #0x2c
    GfGfxLoader_GetPlttDataFromOpenNarc(5, 0x35);
    // ldr r0, [sp, #0x2c]
    // ldr r1, [sp, #4]
    // add r1, r1, r2
    MIi_CpuCopy16(*((u32*)(r0 + 0xc)), 0x80);
    // ldr r0, [sp, #0x2c]
    // ldr r1, [sp, #4]
    // add r1, r1, r2
    MIi_CpuCopy16(*((u32*)(r0 + 0xc)), 0x80);
    Heap_Free(r4);
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #4]
    // add r0, r0, r1
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #4]
    // sub r1, #0x80
    // add r0, r0, r1
    // str r0, [sp, #8]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x1c]
    // ldr r0, [sp, #4]
    // add r0, r0, r1
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #0x18]
    GF_AssertFail((0 + 1), ((0 + 1) << 5));
    // ldr r0, [sp, #0x24]
    // ldr r0, [sp, #0xc]
    // ldr r0, [sp, #8]
    // ldr r0, [sp, #0x14]
    // asr r0, r0, #8
    // str r0, [sp, #0x28]
    // ldr r3, [sp, #0x28]
    // str r0, [sp]
    BlendPalette((r0 + 2), (r0 + 2), 1);
    // ldr r0, [sp, #0xc]
    // add r0, #0x20
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x18]
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x10]
    // ldr r1, [sp, #0x14]
    // add r1, r1, r0
    // str r1, [sp, #0x14]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #8]
    // add r0, #0x20
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x1c]
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #4]
    // add r0, r0, r1
    DC_FlushRange((1 + 1), (0x2a << 4));
    // ldr r0, [sp, #4]
    // str r2, [r0, r1]
    // str r3, [r0, r2]
    // ldr r1, [sp, #4]
    // add r1, r1, r2
    SysTask_CreateOnVBlankQueue(ov44_0222A40C, 0x00000D6C, 0x14, 0);
    // ldr r1, [sp, #4]
    // str r0, [r1, r2]
    Main_SetVBlankIntrCB(ov44_0222A7F8, 0x00000D68);
    ov44_0222AFE8();
    // ldr r0, [sp, #4]
    // ldr r1, [sp, #0x20]
    ov44_0222B030();
    // ldr r0, [sp, #4]
    ov44_0222B0A4();
    *((u8*)(gSystem + 9)) = 1;
    GfGfx_SwapDisplay(gSystem, 1);
    // ldr r0, [sp, #0x20]
    NARC_Delete();
}





void ov44_0222A40C(void) {
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





void ov44_0222A4B4(void) {
    OverlayManager_GetArgs(*((u32*)r1));
    sub_02039998();
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222A4EA: ; jump table
    Heap_Create(3, 0x80, (0x80 << 9));
    Heap_Create(3, 0x80, (0x80 << 9));
    HandleLoadOverlay(FS_OVERLAY_ID, 2);
    Heap_Create(3, 0x35, (7 << 0x10));
    Heap_Create(3, 0x35, (0xa << 0x10));
    OverlayManager_CreateAndGetData(r5, (0x43 << 6), 0x35);
    MI_CpuFill8(0, (0x43 << 6));
    GF_CreateVramTransferManager(0x20, 0x35);
    // str r0, [r5, r1]
    // sub r0, #0x20
    // sub r1, #0x20
    // str r2, [r5, r0]
    sub_0202C6F4(*((u32*)(r5 + (6 << 6))), (6 << 6), *((u32*)r4));
    // str r0, [r5]
    // str r0, [r5, r1]
    // sub r0, #8
    // str r2, [r5, r0]
    // sub r2, #9
    // add r1, #0x1c
    // str r2, [r5, r1]
    GfGfx_EngineATogglePlanes(0xf, 0, 8);
    GfGfx_EngineBTogglePlanes(0xf, 0);
    ov44_0222ADF8(r5);
    ov44_0222A1FC(r5);
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 1, 1, 0);
    sub_02039998();
    sub_0203A880();
    LoadDwcOverlay();
    sub_02039FD8(0x35);
    sub_02021148(4);
    GF_AssertFail();
    // str r0, [r6]
    OverlayManager_GetData((*((u32*)r6) + 1));
    // str r0, [r6]
}





void ov44_0222A60C(void) {
    OverlayManager_GetData();
    IsPaletteFadeFinished(*((u32*)r5));
    // str r0, [r5]
    // str r2, [r3]
    // blx r6
    // str r0, [r5]
    IsPaletteFadeFinished(1, *((u32*)(r4 + (0xd2 << 2))), _022368A0);
    SpriteList_RenderAndAnimateSprites(*((u32*)(r4 + (0x19 << 4))));
    // add r0, r4, r0
    ov44_02231BB0((0xe3 << 2));
    // add r0, r4, r0
    ov44_02231C60((0xe3 << 2));
}





void ov44_0222A68C(void) {
    Main_SetVBlankIntrCB(0, 0);
    SysTask_Destroy(*((u32*)(r5 + 0x00000D68)));
    // str r1, [r5, r0]
    // str r1, [r5, r0]
    // add r0, r5, r0
    ov44_02231BB0((0xe3 << 2), 0);
    // add r0, r5, r0
    ov44_02231B4C((0xe3 << 2));
    ov44_0222F98C(r5);
    ov44_0222FA28(r5);
    // add r0, r5, r0
    ov44_0222ABB8(0x00000B0C);
    sub_020135AC(*((u32*)(r5 + (0xb3 << 2))));
    Destroy2DGfxResObjMan(*((u32*)(r5 + (0xaf << 2))));
    SpriteList_Delete(*((u32*)(r5 + (0x19 << 4))));
    OamManager_Free();
    ObjCharTransfer_Destroy();
    ObjPlttTransfer_Destroy();
    ov44_0222B164(r5);
    ov44_0222AE74(*((u32*)(r5 + (0x57 << 2))));
    DestroyMsgData(*((u32*)(r5 + (0x5b << 2))));
    DestroyMsgData(*((u32*)(r5 + (0x5a << 2))));
    MessageFormat_Delete(*((u32*)(r5 + (0x59 << 2))));
    UnloadOverlayByID(FS_OVERLAY_ID);
}





void ov44_0222A758(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222A7C2: ; jump table
}





void ov44_0222A7F8(void) {
    DoScheduledBgGpuUpdates(*((u32*)(r0 + (0x57 << 2))));
    GF_RunVramTransferTasks();
    OamManager_ApplyAndResetBuffers();
    SetMasterBrightnessNeutral(0);
    SetMasterBrightnessNeutral(1);
    // strh r1, [r4, r0]
}





void ov44_0222A830(void) {
}





void ov44_0222A850(void) {
    // add r3, sp, #0xe0
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    SetBothScreensModesAndDisable(r3, r3);
    // add r3, sp, #0xc4
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 0, r3, 0);
    BG_ClearCharDataRange(0, 0x20, 0, 0x35);
    BgClearTilemapBufferAndCommit(r4, 0);
    // add r3, sp, #0xa8
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 1, r3, 0);
    BG_ClearCharDataRange(1, 0x20, 0, 0x35);
    BgClearTilemapBufferAndCommit(r4, 1);
    // add r3, sp, #0x8c
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 2, r3, 0);
    BG_ClearCharDataRange(2, 0x20, 0, 0x35);
    BgClearTilemapBufferAndCommit(r4, 2);
    // add r3, sp, #0x70
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 3, r3, 0);
    BG_ClearCharDataRange(3, 0x20, 0, 0x35);
    BgClearTilemapBufferAndCommit(r4, 3);
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
    InitBgFromTemplate(r4, 6, r3, 0);
    BgClearTilemapBufferAndCommit(r4, 6);
    // add r3, sp, #0
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 7, r3, 0);
    BgClearTilemapBufferAndCommit(r4, 7);
    BG_ClearCharDataRange(0, 0x20, 0, 0x35);
    BG_ClearCharDataRange(1, 0x20, 0, 0x35);
    BG_ClearCharDataRange(2, 0x20, 0, 0x35);
    BG_ClearCharDataRange(3, 0x20, 0, 0x35);
    BG_ClearCharDataRange(4, 0x20, 0, 0x35);
    BG_ClearCharDataRange(5, 0x20, 0, 0x35);
    BG_ClearCharDataRange(6, 0x20, 0, 0x35);
    BG_ClearCharDataRange(7, 0x20, 0, 0x35);
    SetBgPriority(0, 3);
    SetBgPriority(1, 1);
    SetBgPriority(3, 0);
    SetBgPriority(2, 0);
    // strh r1, [r0]
    // strh r1, [r0]
}





void ov44_0222AA94(void) {
    // add r2, r0, r2
    // str r1, [r2, r0]
    GF_AssertFail(0x00000A88, (0 << 2), *((u32*)(r0 + 0x00000A88)));
}





void ov44_0222AAC0(void) {
    // add r1, r0, r1
    // str r2, [r1, r0]
    GF_AssertFail(0x00000A88, (0 << 2), 0, *((u32*)(r0 + 0x00000A88)));
}





void ov44_0222AAEC(void) {
    // str r0, [sp]
    ov44_02231EF4(*((u32*)(r0 + 0x00000A88)));
    // ldr r0, [sp]
    // add r1, r0, r1
}





void ov44_0222AB24(void) {
    // str r0, [sp]
    // add r3, #0xf2
    // str r4, [sp, #4]
    // str r0, [sp]
    // str r4, [sp, #4]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r4, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r4, [sp, #0xc]
    // add r3, #0xc
    // str r4, [sp]
    // str r4, [sp]
    // str r0, [r5]
}





void ov44_0222ABB8(void) {
    // str r0, [r4]
}





void ov44_0222ABDC(void) {
    // str r2, [sp]
    // str r2, [sp, #4]
    // add r2, #0xc
    // str r2, [sp, #8]
    // ldr r2, [sp, #0x34]
    // str r2, [sp, #0xc]
    // str r2, [sp, #0x10]
    // add r3, sp, #0x20
    // str r2, [sp, #0x14]
    // str r1, [sp, #0x18]
    // str r1, [sp]
    // str r1, [sp, #4]
    // ldr r1, [sp, #0x38]
    // add r3, sp, #0x20
    // add r0, r0, r1
    // str r0, [sp, #8]
}





void ov44_0222AC54(void) {
    // ldr r5, [sp, #0x24]
    // add r5, r5, r5
    // add r5, pc
    // asr r5, r5, #0x10
    // add pc, r5
    // _0222AC6C: ; jump table
    // add r6, sp, #0x10
    // str r6, [sp]
    // str r5, [sp, #4]
    // str r4, [sp, #8]
}





void ov44_0222ACE8(void) {
    // str r5, [sp]
    // str r5, [sp, #4]
    // str r2, [sp, #8]
    // str r3, [sp, #0xc]
    // str r2, [sp, #0x10]
    // str r2, [sp, #0x14]
    // ldr r2, [sp, #0x28]
    // ldr r1, [sp, #0x2c]
    // add r1, r2, r1
}





void ov44_0222AD34(void) {
    // ldr r5, [sp, #0x18]
    // add r5, r5, r5
    // add r5, pc
    // asr r5, r5, #0x10
    // add pc, r5
    // _0222AD4C: ; jump table
    // str r5, [sp]
    // str r4, [sp, #4]
}





void ov44_0222ADC4(void) {
    // cmp r0, #4
    // bhs _0222ADCC
    // mov r0, #8
    // bx lr
    // mov r0, #0xd
    // bx lr
    // TODO: decompile
}





void ov44_0222ADD0(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
}





void ov44_0222ADF8(void) {
    // str r0, [r4, r1]
    // add r1, #8
    // str r0, [r4, r1]
    // str r0, [r4, r1]
    // str r0, [r4, r1]
    // str r1, [r4, r0]
}





void ov44_0222AE44(void) {
    // ldr r0, [r4, r0]
    // ldr r0, [r4, r0]
    // ldr r0, [r4, r0]
    // ldr r0, [r4, r0]
}





void ov44_0222AE74(void) {
}





void ov44_0222AEC0(void) {
    GfGfx_EngineATogglePlanes(1, 1);
    GfGfx_EngineATogglePlanes(2, 1);
    GfGfx_EngineATogglePlanes(4, 1);
    GfGfx_EngineATogglePlanes(8, 1);
    GfGfx_EngineBTogglePlanes(1, 1);
    // str r2, [sp]
    // str r0, [sp, #4]
    GfGfxLoader_GXLoadPalFromOpenNarc(r5, 3, 0, 0);
    // str r3, [sp]
    // str r0, [sp, #4]
    GfGfxLoader_GXLoadPalFromOpenNarc(r5, 3, 4, 0);
    LoadFontPal1(0, (0x1a << 4), 0x35);
    LoadFontPal1(0, (6 << 6), 0x35);
    // str r3, [sp]
    // str r3, [sp, #4]
    // str r3, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharDataFromOpenNarc(r5, 2, r4, 0);
    // str r3, [sp]
    // str r3, [sp, #4]
    // str r3, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnDataFromOpenNarc(r5, 6, r4, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharDataFromOpenNarc(r5, 0xb, r4, 4);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnDataFromOpenNarc(r5, 0xc, r4, 4);
    Save_PlayerData_GetOptionsAddr(*((u32*)(r6 + (0x16 << 4))));
    Options_GetFrame();
    // str r0, [sp]
    // str r0, [sp, #4]
    LoadUserFrameGfx2(r4, 2, 0x000001E2, 0xa);
    // str r0, [sp]
    // str r0, [sp, #4]
    LoadUserFrameGfx1(r4, 2, 0x000001D9, 0xb);
    // str r0, [sp]
    // str r0, [sp, #4]
    LoadUserFrameGfx1(r4, 1, 0x000001D9, 0xb);
}





void ov44_0222AFE8(void) {
    // add r3, sp, #0
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    ObjCharTransfer_InitEx(r3, 0x00200010, 0x10);
    ObjPlttTransfer_Init(0x14, 0x35);
    ObjCharTransfer_ClearBuffers();
    ObjPlttTransfer_Reset();
    G2dRenderer_SetObjCharTransferReservedRegion(1, 0x00200010);
    G2dRenderer_SetPlttTransferReservedRegion(1);
}





void ov44_0222B030(void) {
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // str r2, [sp, #0x10]
    // add r1, r6, r1
    // str r0, [r6, r1]
    // add r0, r6, r0
    // str r0, [r5, r7]
    // str r0, [r6, r1]
}





void ov44_0222B0A4(void) {
}





void ov44_0222B0B0(void) {
    // add r0, r4, r0
    WindowIsInUse((0x2f << 4));
    // add r0, r4, r0
    sub_0200E5D4((0x2f << 4), 0);
    // add r0, r4, r0
    RemoveWindow((0x2f << 4));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // sub r0, #0x6e
    // add r1, r4, r1
    AddWindowParameterized(*((u32*)(r4 + 0x000001CA)), (0x2f << 4), 3, 5);
    // add r0, r4, r0
    FillWindowPixelBuffer((0x2f << 4), 0);
    // add r2, #0x10
    ReadMsgDataIntoString(*((u32*)(r4 + (0x5a << 2))), 0x15, *((u32*)(r4 + (0x5a << 2))));
    FontID_String_GetCenterAlignmentX(0, *((u32*)(r4 + (0x5e << 2))), 0, 0xb0);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r0, r4, r2
    AddTextPrinterParameterizedWithColor(0x000F0E00, 1, *((u32*)(r4 + ((0x2f << 4) >> 1))), r0);
    // add r0, r4, r0
    ScheduleWindowCopyToVram((0x2f << 4));
}





void ov44_0222B164(void) {
    // add r0, r4, r0
    // add r0, r4, r0
    // add r0, r4, r0
    // add r0, r4, r0
    // add r0, r4, r0
    // add r0, r4, r0
    // add r0, r4, r0
    // add r0, r4, r0
    // add r0, r4, r0
    // add r0, r4, r0
    // str r1, [r4, r0]
    // add r0, r4, r0
    // add r0, r4, r0
}





void ov44_0222B228(void) {
    sub_02039998();
    ov00_021E6EBC();
    ov44_0222F780(r5, r0);
    sub_020398C8();
    *((u32*)(r5 + 4)) = r0;
    ov44_02229F00(r5, *((u32*)(r5 + 4)));
    ov44_0222F818(r5, 0x10);
    sub_020343E4();
    sub_02039378();
    sub_020398C8();
    *((u32*)(r5 + 4)) = r0;
    // add r1, #0x22
    // add r0, #0x21
    // strb r1, [r0]
    // str r1, [r5, r0]
    // sub r0, #0x14
    // str r1, [r5, r0]
    ov44_0222F510(r5, 0x4d, 0);
    sub_020398D4(1, 1);
    sub_02037AC0(0x10);
    // str r1, [r5, r0]
    Sound_SetSceneAndPlayBGM(0xb, 0x0000047D, 1);
    ov44_0222B0B0(r5);
    sub_0202C08C(*((u32*)r5));
    DWC_CheckHasProfile();
    SetBgPriority(0, 3);
    SetBgPriority(1, 0);
    SetBgPriority(3, 0);
    SetBgPriority(2, 1);
    ov44_0222F66C(r5, 0x12);
    ov44_02231A28(*((u32*)(r5 + (0x57 << 2))), ov44_02235384, 0);
    // str r0, [r5, r1]
    // str r1, [r5, r0]
    sub_0202C08C(*((u32*)r5), 6);
    DWC_CheckValidConsole();
    ov44_0222F66C(r5, 0x14);
    // str r1, [r5, r0]
    ov44_0222F510(r5, 0x11, 1);
    // str r1, [r5, r0]
}





void ov44_0222B36C(void) {
    TextPrinterCheckActive(((*((u32*)(r0 + (6 << 6))) << 0x18) >> 0x18));
    ov44_02231A28(*((u32*)(r5 + (0x57 << 2))), ov44_0223537C, 0);
    // str r0, [r5, r1]
    // str r1, [r5, r0]
}





void ov44_0222B3A8(void) {
    YesNoPrompt_HandleInput(*((u32*)(r0 + (0x62 << 2))));
    YesNoPrompt_Destroy(*((u32*)(r5 + (0x62 << 2))));
    sub_020396FC(*((u32*)(r5 + (0x16 << 4))), 0x000004A4);
    *((u32*)(r5 + 4)) = r0;
    ov44_0222F510(r5, 0x17, 1);
    GF_AssertFail(*((u32*)(r5 + (0x63 << 2))));
    // add r0, r5, r1
    // sub r1, #0xee
    WaitingIcon_New((0x2d << 4));
    // str r0, [r5, r1]
    // str r1, [r5, r0]
    YesNoPrompt_Destroy(*((u32*)(r5 + (0x62 << 2))), 0xe);
    // str r1, [r5, r0]
}





void ov44_0222B42C(void) {
    // tst r0, r1
    System_GetTouchNew(3, *((u32*)(gSystem + 0x48)));
    ov44_0222F66C(r5, 0x15);
    SetBgPriority(3, 0);
    SetBgPriority(2, 1);
    SetBgPriority(1, 0);
    SetBgPriority(0, 3);
    ov44_02231A28(*((u32*)(r5 + (0x57 << 2))), ov44_02235384, 1);
    // str r0, [r5, r1]
    // str r1, [r5, r0]
}





void ov44_0222B494(void) {
    YesNoPrompt_HandleInput(*((u32*)(r0 + (0x62 << 2))));
    YesNoPrompt_Destroy(*((u32*)(r5 + (0x62 << 2))));
    // add r0, r5, r0
    ClearFrameAndWindow2((3 << 8), 0);
    // add r0, r5, r0
    RemoveWindow((3 << 8));
    ov44_0222F66C(r5, 0x16);
    ov44_02231A28(*((u32*)(r5 + (0x57 << 2))), ov44_02235384, 1);
    // str r0, [r5, r1]
    // str r1, [r5, r0]
    YesNoPrompt_Destroy(*((u32*)(r5 + (0x62 << 2))), 5);
    // add r0, r5, r0
    ClearFrameAndWindow2((3 << 8), 0);
    // add r0, r5, r0
    RemoveWindow((3 << 8));
    // str r1, [r5, r0]
}





void ov44_0222B528(void) {
    YesNoPrompt_HandleInput(*((u32*)(r0 + (0x62 << 2))));
    YesNoPrompt_Destroy(*((u32*)(r5 + (0x62 << 2))));
    SetBgPriority(3, 0);
    SetBgPriority(2, 0);
    SetBgPriority(1, 1);
    SetBgPriority(0, 3);
    // add r0, r5, r0
    ClearFrameAndWindow2((3 << 8), 0);
    // add r0, r5, r0
    RemoveWindow((3 << 8));
    sub_0202C03C(*((u32*)r5));
    SaveArray_Get(*((u32*)(r5 + (0x16 << 4))), 0x1f);
    sub_02031710();
    Save_Frontier_GetStatic(*((u32*)(r5 + (0x16 << 4))));
    sub_02031188();
    // str r1, [r5, r0]
    sub_020396FC(*((u32*)(r5 + (0x16 << 4))), 0x000004A4);
    *((u32*)(r5 + 4)) = r0;
    ov44_0222F510(r5, 0x17, 1);
    GF_AssertFail(*((u32*)(r5 + (0x63 << 2))));
    // add r0, r5, r1
    // sub r1, #0xee
    WaitingIcon_New((0x2d << 4));
    // str r0, [r5, r1]
    // str r1, [r5, r0]
    YesNoPrompt_Destroy(*((u32*)(r5 + (0x62 << 2))), 1);
    SetBgPriority(3, 0);
    SetBgPriority(2, 0);
    SetBgPriority(1, 1);
    SetBgPriority(0, 3);
    // add r0, r5, r0
    ClearFrameAndWindow2((3 << 8), 0);
    // add r0, r5, r0
    RemoveWindow((3 << 8));
    ov44_0222F66C(r5, 0x14);
    // str r1, [r5, r0]
}





void ov44_0222B64C(void) {
    YesNoPrompt_HandleInput(*((u32*)(r0 + (0x62 << 2))));
    YesNoPrompt_Destroy(*((u32*)(r5 + (0x62 << 2))));
    SetBgPriority(0, 3);
    SetBgPriority(1, 1);
    SetBgPriority(3, 0);
    SetBgPriority(2, 0);
    // add r0, r5, r0
    ClearFrameAndWindow2((3 << 8), 0);
    // add r0, r5, r0
    RemoveWindow((3 << 8));
    // str r1, [r5, r0]
    sub_020396FC(*((u32*)(r5 + (0x16 << 4))), 0x000004A4);
    *((u32*)(r5 + 4)) = r0;
    ov44_0222F510(r5, 0x17, 1);
    GF_AssertFail(*((u32*)(r5 + (0x63 << 2))));
    // add r0, r5, r1
    // sub r1, #0xee
    WaitingIcon_New((0x2d << 4));
    // str r0, [r5, r1]
    // str r1, [r5, r0]
    YesNoPrompt_Destroy(*((u32*)(r5 + (0x62 << 2))), 1);
    SetBgPriority(0, 3);
    SetBgPriority(1, 1);
    SetBgPriority(3, 0);
    SetBgPriority(2, 0);
    // add r0, r5, r0
    ClearFrameAndWindow2((3 << 8), 0);
    // add r0, r5, r0
    RemoveWindow((3 << 8));
    // str r1, [r5, r0]
}





void ov44_0222B744(void) {
    // str r1, [r5, r0]
}





void ov44_0222B778(void) {
    // str r1, [sp]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0xc]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0xc]
    // strh r0, [r1, r4]
    // add r1, r1, r4
    // ldr r0, [sp, #4]
    // ldr r0, [sp, #0x14]
    // ldr r0, [sp, #0x14]
    // ldr r0, [sp, #0x10]
    // ldr r1, [sp]
    // ldr r0, [sp, #0x14]
    // ldr r0, [sp, #0x14]
    // ldr r0, [sp, #8]
    // ldr r0, [sp, #8]
    // add r1, #0x20
    // strb r0, [r1]
    // add r0, #0x21
    // strb r1, [r0]
    // add r0, #0x22
    // strb r1, [r0]
    // add r0, #0x24
}





void ov44_0222B870(void) {
    // add r1, r5, r4
    *((u8*)(r1 + 0xc)) = 0;
    ov44_02231974(0);
    ov44_02231958(r5, r4);
    ov44_02229F00(r5, r0);
    // add r0, r5, r6
    *((u8*)(r0 + 0xc)) = (r4 + 1);
    ov44_02230048(r5, (r4 + 1));
    ov44_02230028(r5, (r4 + 1));
}





void ov44_0222B8E0(void) {
    // str r4, [sp, #0xc]
    // str r0, [sp]
    // add r0, #0x21
    // add r0, #0xcc
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [sp]
    // ldr r1, [sp, #8]
    // ldr r1, [sp, #4]
    // add r0, r5, r0
    // ldr r1, [sp, #8]
    // ldr r1, [sp, #4]
    // add r0, r5, r0
    // ldr r0, [sp]
    // add r0, #0x21
    // add r0, #0xcc
    // str r1, [r0]
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0xc]
}





void ov44_0222B9A0(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r1, [r4, r0]
    // add r0, r5, r5
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222BA22: ; jump table
    // str r1, [r4, r0]
    // str r1, [r4, r0]
    // str r1, [r4, r0]
    // str r1, [r4, r0]
}





void ov44_0222BA6C(void) {
    // tst r0, r1
    System_GetTouchNew(3, *((u32*)(gSystem + 0x48)));
    // add r0, r5, r0
    WindowIsInUse((3 << 8));
    // add r0, r5, r0
    ClearFrameAndWindow2((3 << 8), 0);
    // add r0, r5, r0
    RemoveWindow((3 << 8));
    // str r1, [r5, r0]
}





void ov44_0222BAB8(void) {
    // str r3, [r0, r2]
}





void ov44_0222BAC4(void) {
    // str r3, [r0, r2]
}





void ov44_0222BAD0(void) {
    // str r1, [r5, r0]
    // tst r0, r1
    System_GetTouchNew(3, *((u32*)(gSystem + 0x48)));
    // add r0, r5, r0
    WindowIsInUse((3 << 8));
    // add r0, r5, r0
    ClearFrameAndWindow2((3 << 8), 0);
    // add r0, r5, r0
    RemoveWindow((3 << 8));
    ov44_0222F510(r5, 0x58, 0);
    // str r1, [r5, r0]
}





void ov44_0222BB38(void) {
    TextPrinterCheckActive(((*((u32*)(r0 + (6 << 6))) << 0x18) >> 0x18));
    // and r0, r1
    // asr r0, r0, #0xf
    // str r0, [sp]
    // add r2, #0x7d
    Std_CreateYesNoMenu(*((u32*)(r5 + (0x57 << 2))), ov44_0223538C, (0x57 << 2), 0xb);
    ov44_02231A28(*((u32*)(r5 + (0x57 << 2))), ov44_02235374, 0);
    // str r0, [r5, r1]
    // str r1, [r5, r0]
}





void ov44_0222BBA4(void) {
    // and r0, r1
    // asr r0, r0, #0xf
    Handle2dMenuInput_DeleteOnFinish(*((u32*)(r0 + (0x61 << 2))), 0x35);
    // mvn r1, r1
    sub_02039330(r4, 0);
    ov44_0222F818(r5, 0x10);
    // str r1, [r5, r0]
    ov44_0222F818(r5, 0x10);
    sub_02039330();
    sub_020343E4();
    // str r1, [r5, r0]
    // str r1, [r5, r0]
    YesNoPrompt_HandleInput(*((u32*)(r5 + (0x62 << 2))), 0x22);
    YesNoPrompt_Destroy(*((u32*)(r5 + (0x62 << 2))));
    sub_02039330();
    ov44_0222F818(r5, 0x10);
    // str r1, [r5, r0]
    YesNoPrompt_Destroy(*((u32*)(r5 + (0x62 << 2))), 0xd);
    ov44_0222F818(r5, 0x10);
    sub_02039330();
    sub_020343E4();
    // str r1, [r5, r0]
    // str r1, [r5, r0]
    ov44_0222F7BC(r5, 0x22);
}





void ov44_0222BC78(void) {
    sub_02034DB8();
    // add r0, r5, r0
    ov44_02231BB0((0xe3 << 2));
    sub_0200FBF4(0, 0);
    sub_0200FBF4(1, 0);
    // add r0, r5, r0
    ov44_02231B4C((0xe3 << 2));
    // str r1, [r3, r0]
    thunk_ClearMainOAM(0x35, 0, (0 + 1), (r5 + 4));
    thunk_ClearSubOAM(0x35);
    ov44_0222F98C(r5);
    ov44_0222FA28(r5);
    // add r0, r5, r0
    WindowIsInUse((0x2f << 4));
    // add r0, r5, r0
    sub_0200E5D4((0x2f << 4), 0);
    // add r0, r5, r0
    RemoveWindow((0x2f << 4));
    // add r0, r5, r0
    WindowIsInUse((0x2e << 4));
    // add r0, r5, r0
    RemoveWindow((0x2e << 4));
    BgClearTilemapBufferAndCommit(*((u32*)(r5 + (0x57 << 2))), 3);
    NARC_New(0x58, 0x35);
    ov44_0222AEC0(r5, r0);
    NARC_Delete(r6);
    // str r1, [r5, r0]
    *((u8*)(gSystem + 9)) = 1;
    GfGfx_SwapDisplay(gSystem, 1);
    BgSetPosTextAndCommit(*((u32*)(r5 + (0x57 << 2))), 0, 0, 0);
    BgSetPosTextAndCommit(*((u32*)(r5 + (0x57 << 2))), 0, 3, 0);
    // strh r1, [r5, r0]
    // add r0, r5, r0
    RemoveWindow((0x31 << 4), 1);
    DestroyListMenu(*((u32*)(r5 + (0x15 << 4))), 0, 0);
    // str r1, [r5, r0]
    ListMenuItems_Delete(*((u32*)(r5 + ((0x15 << 4) - 4))), 0);
    // str r1, [r5, r0]
    // add r0, #0xc
    MI_CpuFill8(r5, 0, 0x20);
    // add r0, #0x2c
    MI_CpuFill8(r5, 0, 0x20);
    // add r0, #0x4c
    MI_CpuFill8(r5, 0, 0x80);
    // add r0, #0xcc
    MI_CpuFill8(r5, 0, 0x80);
    ov44_0222B0B0(r5);
    sub_020396FC(*((u32*)(r5 + (0x16 << 4))), 0x000004A4);
    *((u32*)(r5 + 4)) = r0;
    ov44_0222F510(r5, 0x17, 1);
    GF_AssertFail(*((u32*)(r5 + (0x63 << 2))));
    // add r0, r5, r1
    // sub r1, #0xee
    WaitingIcon_New((0x2d << 4));
    // str r0, [r5, r1]
    // str r1, [r5, r0]
}





void ov44_0222BE3C(void) {
    // str r1, [r5, r0]
    // add r0, r5, r1
    // sub r1, #0xee
    // str r0, [r5, r1]
    // sub r0, #0x20
    // str r1, [r5, r0]
    // str r0, [r5, r1]
}





void ov44_0222BEE0(void) {
    // str r1, [r5, r0]
    // sub r0, #0x20
    // str r1, [r5, r0]
    // str r0, [r5, r1]
}





void ov44_0222BF6C(void) {
    // sub r0, #0x20
    // str r1, [r5, r0]
    // str r0, [r5, r1]
}





void ov44_0222BFF0(void) {
    // str r1, [r5, r0]
    // str r0, [r5, r1]
    // str r0, [r5, r1]
}





void ov44_0222C060(void) {
    // str r1, [r5, r0]
    // add r0, #0x20
    // str r1, [r5, r0]
}





void ov44_0222C084(void) {
    // tst r0, r1
    System_GetTouchNew(3, *((u32*)(gSystem + 0x48)));
    // sub r0, #8
    // str r2, [r5, r0]
    // sub r1, #0xc
    // str r0, [r5, r1]
    sub_02039330(0x22, (0xd5 << 2), 0xa);
    sub_0202C2F8(*((u32*)r5));
    ov44_0222F510(r5, 0x1a, 1);
    // str r1, [r5, r0]
    // add r0, #0x14
    // str r1, [r5, r0]
    ov44_0222B778(r5, 0x10);
    ov44_0222B870(r5);
    ov44_0222ADD0();
    // str r0, [r5, r1]
    // sub r1, #0x48
    // add r0, r5, r1
    WindowIsInUse((0xd2 << 2));
    // add r0, r5, r0
    ClearFrameAndWindow2((3 << 8), 0);
    // add r0, r5, r0
    RemoveWindow((3 << 8));
}





void ov44_0222C120(void) {
    Save_PlayerData_GetProfile(*((u32*)(r0 + (0x16 << 4))));
    PlayerProfile_GetPlayerName_NewString(0x35);
    // add r0, r5, r0
    WindowIsInUse((0x2e << 4));
    String_Delete(r4);
    // add r0, r5, r0
    FillWindowPixelBuffer((0x2e << 4), 0);
    PlayerProfile_GetTrainerGender(r6);
    // str r0, [sp, #0x10]
    // str r1, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x10]
    // str r0, [sp, #8]
    // add r0, r5, r0
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor((0x2e << 4), 0, r4, 0x20);
    String_Delete(r4);
    ov44_02229F00(r5, *((u32*)(r5 + 4)));
    // add r1, sp, #0x10
    ov44_0223120C();
    ov00_021E6EBC();
    // mvn r1, r1
    // add r2, #8
    ReadMsgDataIntoString(*((u32*)(r5 + (0x5a << 2))), r6, *((u32*)(r5 + (0x5a << 2))));
    ov00_021E6EBC();
    sub_0202C090(*((u32*)r5), r0, 8);
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x10]
    ov00_021E6EBC((0xc1 << 0xa));
    sub_0202C254(*((u32*)r5), r0);
    CopyU16ArrayToString(*((u32*)(r5 + (0x17 << 4))), r0);
    // add r2, #8
    ReadMsgDataIntoString(*((u32*)(r5 + (0x5a << 2))), r6, *((u32*)(r5 + (0x5a << 2))));
    // str r1, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x10]
    // str r0, [sp, #8]
    // add r0, r5, r2
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(0xff, 0, *((u32*)(r5 + ((0x2e << 4) >> 1))), 0x66);
    // str r2, [sp]
    // str r4, [sp, #4]
    // add r1, r5, r1
    ov44_0222AC54(*((u32*)(r5 + (0x57 << 2))), 0x00000B0C, 1, 2);
    // add r0, #0x21
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r1, r5, r1
    ov44_0222ABDC(*((u32*)(r5 + (0x57 << 2))), 0x00000B0C, 1, 0x1a);
    // add r0, r5, r0
    ScheduleWindowCopyToVram((0x2e << 4));
}





void ov44_0222C288(void) {
}





void ov44_0222C29C(void) {
    // add r0, r4, r0
    WindowIsInUse((0x2e << 4));
    // add r0, r4, r0
    RemoveWindow((0x2e << 4));
    // add r0, r4, r0
    WindowIsInUse((0x2f << 4));
    // add r0, r4, r0
    sub_0200E5D4((0x2f << 4), 0);
    // add r0, r4, r0
    RemoveWindow((0x2f << 4));
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // sub r0, #0x36
    // add r1, r4, r1
    AddWindowParameterized(*((u32*)(r4 + 0x00000192)), (0x2e << 4), 3, 1);
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r1, r4, r1
    // str r0, [sp, #0x10]
    // sub r0, #0x45
    AddWindowParameterized(*((u32*)(r4 + 0x000001A1)), (0x2f << 4), 1, 1);
    // add r0, r4, r0
    FillWindowPixelBuffer((0x2f << 4), 0xf);
    // add r0, r4, r0
    ScheduleWindowCopyToVram((0x2f << 4));
    // add r0, r4, r0
    DrawFrameAndWindow1((0x2f << 4), 0, 0x000001D9, 0xb);
}





void ov44_0222C35C(void) {
    IsPaletteFadeFinished();
    sub_020393C8(r7);
    sub_020392A0();
    ov00_021E5CBC(sub_02078D24);
    // str r1, [r5, r0]
    NARC_New(0x58, 0x35);
    // add r1, r5, r1
    ov44_0222AB24(*((u32*)(r5 + (0x57 << 2))), 0x00000B0C, r0, 0x35);
    ov44_0222F8F0(r5);
    ov44_0222F7BC(r5);
    BgClearTilemapBufferAndCommit(*((u32*)(r5 + (0x57 << 2))), 3);
    // add r0, r5, r0
    RemoveWindow((0x31 << 4));
    DestroyListMenu(*((u32*)(r5 + (0x15 << 4))), 0, 0);
    // str r1, [r5, r0]
    ListMenuItems_Delete(*((u32*)(r5 + ((0x15 << 4) - 4))), 0);
    // str r1, [r5, r0]
    // add r0, r5, r0
    ov44_02231BB0((0xe3 << 2), 0);
    sub_0202C318(*((u32*)r5));
    // strh r0, [r5, r1]
    // str r4, [sp]
    // str r0, [sp, #4]
    // add r0, r5, r0
    ov44_02231A7C((0xe3 << 2), 0x35, r6, *((u32*)(r5 + (0x57 << 2))));
    // add r0, r5, r0
    ov44_02231D9C((0xe3 << 2), r4);
    ov44_0222AA94(r5, r0);
    ov44_0222F98C(r5);
    ov44_0222F9A0(r5, r6, 0x35);
    ov44_02230060(r5, 0x35);
    ov44_0222F7BC(r5);
    ov44_0222B870(r5);
    ov44_0222C29C(r5);
    ov44_0222F818(r5, 0x10);
    sub_02039B58();
    // mvn r1, r1
    // str r1, [r5, r0]
    NARC_Delete(r6, 0);
    *((u8*)(gSystem + 9)) = 0;
    GfGfx_SwapDisplay(gSystem, 0);
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 1, 1, 0);
    // str r1, [r5, r0]
    sub_020398D4(0, 0);
}





void ov44_0222C4EC(void) {
}





void ov44_0222C500(void) {
    // mvn r1, r1
    // add r0, #0x21
}





void ov44_0222C524(void) {
    ov44_0222B870();
    // str r0, [sp, #8]
    // str r0, [sp, #4]
    // str r0, [sp]
    // add r0, #0xc
    // add r1, #0x2c
    memcmp(r5, r5, 0x20);
    // add r7, r5, r4
    // add r1, #0x2c
    // add r3, r5, r0
    ov44_0222AAEC(r5, *((u8*)r7), 1, *((u8*)(r3 + 0xc)));
    // add r0, r5, r0
    ov44_02231E94((0xe3 << 2), r0);
    ov44_0222AAC0(r5, r6);
    // add r1, r5, r4
    // add r1, #0x2c
    ov44_02230028(r5, *((u8*)r1));
    // add r1, r5, r4
    // add r1, #0x2c
    ov44_0222F970(r5, *((u8*)r1), 0x35);
    // str r0, [sp]
    // add r3, r5, r2
    // add r3, #0x2c
    ov44_02231958(r5, (*((u8*)(r7 + 0xc)) - 1), (0 + 1), *((u8*)r3));
    // add r6, r5, r4
    // add r0, r5, r0
    ov44_02231E08((0xe3 << 2), *((u8*)(r0 + 0x1d)), *((u8*)(r6 + 0xc)));
    // str r0, [sp, #0xc]
    ov44_0222FFF4(r5, *((u8*)(r7 + 0xc)), 2);
    // ldr r1, [sp, #0xc]
    ov44_0222AA94(r5);
    // str r0, [sp, #4]
    ov44_0222FFF4(r5, *((u8*)(r6 + 0xc)), 1);
    *((u8*)(r6 + 0xc)) = 0;
    // add r0, #0x2c
    // add r1, #0xc
    memcpy(r5, r5, 0x20);
    ov44_02230080(r5);
    // ldr r0, [sp, #4]
    PlaySE(0x0000064E);
    // ldr r0, [sp]
    PlaySE(0x0000064E);
    // ldr r0, [sp, #8]
}





void ov44_0222C658(void) {
}





void ov44_0222C670(void) {
}





void ov44_0222C684(void) {
    IsPaletteFadeFinished();
    sub_020393C8(r5);
    ov44_0222B9A0(r4);
    sub_020390C4(r5);
    ov00_021E6EBC();
    ov44_0222F780(r4, r0);
    ov44_0222F510(r4, 0x12, r7);
    // str r1, [r4, r0]
    ov44_0222F818(r4, 0x10);
    sub_02039358();
    ov44_0222C670(r4, 0x35);
    ov44_0222FBA0(r4);
    // add r0, r4, r0
    ov44_02232008((0xe3 << 2));
    // add r0, r4, r0
    ov44_02231D98((0xe3 << 2));
    ov00_021E709C();
    // tst r0, r1
    ov44_0222F8C0(r4, *((u32*)(gSystem + 0x48)));
    ov44_0222F510(r4, 0x5a, r7);
    ov44_0222F510(r4, 0x5b, r7);
    PlaySE(0x000005DD);
    ov44_0222C120(r4);
    // str r1, [r4, r0]
    ov44_0222F950(r4, 0x35);
    ov44_0222FA80(r4, 0x35);
    ov44_0222AAEC(r4, r0);
    // add r0, r4, r0
    ov44_02231D48((0xe3 << 2), r0);
    // add r0, r4, r0
    ov44_02231D8C((0xe3 << 2));
    // add r0, r4, r0
    ov44_02231D8C((0xe3 << 2));
    ov44_0222C4EC(r4);
    // mvn r0, r0
    PlaySE(0x00000623, *((u32*)(r4 + (0x37 << 4))));
    // str r1, [r4, r0]
    // mvn r0, r0
    ov00_021E709C(0, *((u32*)(r4 + (0x37 << 4))));
    // mvn r1, r1
    ov00_021E709C(0);
    // str r0, [r4, r1]
    ov44_0222F780(r4, *((u32*)(r4 + (0x37 << 4))));
    ov44_0222F510(r4, 0x4c, 0);
    // add r0, #0x21
    ov00_021E70B8(*((u8*)*((u32*)(r4 + 4))));
    // str r1, [r4, r0]
    // mvn r0, r0
    ov00_021E709C(0, *((u32*)(r4 + (0x37 << 4))));
    // mvn r1, r1
    ov00_021E70B8(0, 0);
    ov44_0222F780(r4, *((u32*)(r4 + (0x37 << 4))));
    ov44_0222F510(r4, 0x12, 0);
    sub_02039358();
    // str r1, [r4, r0]
    ov00_021E7080(r5, 0x1b);
    ov00_021E709C();
    // mvn r1, r1
    ov00_021E70B8(0, 0);
    ov44_02229F00(r4, *((u32*)(r4 + 4)));
    // mvn r1, r1
    // tst r1, r2
    ov44_02229FDC(2, *((u32*)(gSystem + 0x48)));
    PlaySE(0x000005DD);
    // str r1, [r4, r0]
    ov44_0222F950(r4, 0x35);
    // add r0, r4, r0
    ov44_02231BB4((0xe3 << 2));
    // add r0, r4, r0
    ov44_02232018((0xe3 << 2));
    // add r0, r7, r7
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222C8D8: ; jump table
    PlaySE(0x000005DD);
    ov44_02229FDC(r6);
    // str r1, [r4, r0]
    // str r1, [r4, r0]
    // str r1, [r4, r0]
    ov44_0222F510(r4, 0x19, 1);
    ov44_0222F950(r4, 0x35);
    PlaySE(0x000005DD);
    ov44_02229FDC(r6);
    // add r0, r4, r0
    ov44_02231FCC((0xe3 << 2));
    // str r1, [r4, r0]
    sub_020392A0((0xd2 << 2), 0x27);
    // add r0, r4, r0
    ov44_02231FCC((0xe3 << 2));
    // str r1, [r4, r0]
    ov44_0222F950(r4, 0x35);
    PlaySE(0x000005DD);
    ov44_02229FDC(r6);
    // str r1, [r4, r0]
    ov44_0222F950(r4, 0x35);
    GF_AssertFail(r5);
}





void ov44_0222C9AC(void) {
    // str r1, [r5, r0]
    // str r1, [r5, r0]
}





void ov44_0222C9F4(void) {
    ov44_02231958((*((u16*)(r0 + 0x00000382)) - 1));
    // add r0, #0x21
    ov44_02229F00(r5, r0);
    // str r1, [r5, r0]
    // add r0, #8
    // str r1, [r5, r0]
    sub_020390C4((0xd << 6), 0x46);
    ov00_021E6EBC();
    ov44_0222F780(r5, r0);
    ov44_0222F510(r5, 0xf, 0);
    // str r1, [r5, r0]
    sub_020390C4((0xd2 << 2), 0x1b);
    ov00_021E6EBC();
    ov44_0222F780(r5, r0);
    ov44_0222F510(r5, 0x12, 0);
    // str r1, [r5, r0]
    sub_020390C4((0xd2 << 2), 0x1b);
    sub_02039264();
    ov00_021E6EBC();
    ov44_0222F780(r5, r0);
    ov44_0222F510(r5, 0x13, 0);
    // str r1, [r5, r0]
    sub_020393C8((0xd2 << 2), 0x1b);
    ov44_0222B9A0(r5);
    ov00_021E6EBC();
    ov44_0222F780(r5, r0);
    ov44_0222F510(r5, 0x10, 0);
    // str r1, [r5, r0]
    ov00_021E6EBC((0xd2 << 2), 0x1b);
    ov44_0222F780(r5, r0);
    ov44_0222F510(r5, 0x10, 0);
    // str r1, [r5, r0]
    sub_020390C4((0xd2 << 2), 0x1b);
    ov44_0222F7BC(r5);
    ov44_0222F818(r5, 1);
    // str r0, [r5, r1]
    // add r1, #0x3a
    sub_0202C4B0(*((u32*)r5), (*((u16*)(r5 + (0xd2 << 2))) - 1));
}





void ov44_0222CB34(void) {
    // str r1, [r5, r0]
    // mvn r1, r1
}





void ov44_0222CB7C(void) {
    sub_020393C8();
    ov44_0222B9A0(r5);
    ov00_021E6EBC(r4);
    ov44_0222F510(r5, 0x13, 0);
    // str r1, [r5, r0]
    ov00_021E6EBC(r4, 0x1b);
    ov44_02231958(r5, r0);
    ov44_02229F00(r5, r0);
    ov00_021E6EBC();
    ov44_0222F780(r5, r0);
    ov44_0222F510(r5, 0x10, 0);
    // str r1, [r5, r0]
    TextPrinterCheckActive(((*((u32*)(r5 + (6 << 6))) << 0x18) >> 0x18), 0x1b);
    // tst r0, r1
    System_GetTouchNew(3, *((u32*)(gSystem + 0x48)));
    ov44_0222F7BC(r5);
    // str r1, [r5, r0]
    ov44_0222CC34(r5, r4);
}





void ov44_0222CC34(void) {
    ov00_021E6EBC();
    ov44_0222F510(r5, 0x13, 0);
    // str r1, [r5, r0]
    ov00_021E6EBC(r6, 0x1b);
    ov44_02231958(r5, r0);
    ov44_02229F00(r5, r0);
    ov44_0222C670(r5, 0x35);
    ov44_0222FBA0(r5);
    sub_020390C4();
    ov00_021E6EBC();
    ov44_0222F780(r5, r0);
    ov44_0222F510(r5, 0xf, 0);
    // str r1, [r5, r0]
    sub_020390C4((0xd2 << 2), 0x1b);
    ov00_021E6EBC();
    ov44_0222F780(r5, r0);
    ov44_0222F510(r5, 0x12, 0);
    // str r1, [r5, r0]
    sub_020390C4((0xd2 << 2), 0x1b);
    sub_02039264();
    ov00_021E6EBC();
    ov44_0222F780(r5, r0);
    ov44_0222F510(r5, 0x13, 0);
    // str r1, [r5, r0]
    sub_020393C8((0xd2 << 2), 0x1b);
    ov44_0222B9A0(r5);
    ov00_021E6EBC();
    ov44_0222F780(r5, r0);
    ov44_0222F510(r5, 0x10, 0);
    // str r1, [r5, r0]
    // tst r0, r1
    System_GetTouchNew(3, *((u32*)(gSystem + 0x48)));
    ov44_0222F510(r5, 0x14, 0);
    // str r1, [r5, r0]
    ov00_021E7078((0xd2 << 2), 0x19);
    // str r2, [sp]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // add r1, r5, r1
    ov44_0222ABDC(*((u32*)(r5 + (0x57 << 2))), 0x00000B0C, 1, 2);
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r1, r5, r1
    ov44_0222ABDC(*((u32*)(r5 + (0x57 << 2))), 1, 2);
}





void ov44_0222CDAC(void) {
    sub_020393C8();
    ov44_0222B9A0(r5);
    TextPrinterCheckActive(((*((u32*)(r5 + (6 << 6))) << 0x18) >> 0x18));
    ov00_021E6EBC();
    // mvn r1, r1
    ov00_021E6EBC(0);
    sub_0202C4B0(*((u32*)r5), r0);
    // and r0, r1
    // asr r0, r0, #0xf
    // str r0, [sp]
    // add r2, #0x7d
    Std_CreateYesNoMenu(*((u32*)(r5 + (0x57 << 2))), ov44_0223538C, (0x57 << 2), 0xb);
    ov44_02231A14(*((u32*)(r5 + (0x57 << 2))), ov44_02235374, 0);
    // str r0, [r5, r1]
    // str r1, [r5, r0]
}





void ov44_0222CE40(void) {
    // and r0, r1
    // asr r0, r0, #0xf
    Handle2dMenuInput_DeleteOnFinish(*((u32*)(r0 + (0x61 << 2))), 0x35);
    // mvn r1, r1
    sub_020390C4(0);
    sub_02039264();
    sub_020373B4(0);
    ov44_0222F7BC(r5);
    ov44_0222F818(r5, 0x10);
    Clear2dMenuWindowAndDelete(*((u32*)(r5 + (0x61 << 2))), 0x35);
    // mvn r0, r0
    // str r0, [r5, r1]
    // sub r0, #0x14
    // str r2, [r5, r0]
    // sub r1, #0x28
    // str r0, [r5, r1]
    sub_020393C8(0x41, (0x37 << 4), 0x14);
    ov44_0222B9A0(r5);
    sub_020393C8(r4);
    ov44_0222F818(r5, 0x10);
    sub_020393B4();
    // mvn r0, r0
    // str r0, [r5, r1]
    // sub r0, #0x14
    // str r2, [r5, r0]
    // sub r1, #0x28
    // str r0, [r5, r1]
    ov44_0222B9A0(r5, (0x37 << 4), 0x14);
    // str r1, [r5, r0]
    YesNoPrompt_HandleInput(*((u32*)(r5 + (0x62 << 2))), 0x18);
    YesNoPrompt_Destroy(*((u32*)(r5 + (0x62 << 2))));
    sub_020393C8();
    ov44_0222F818(r5, 0x10);
    sub_020393B4();
    // mvn r0, r0
    // str r0, [r5, r1]
    // sub r0, #0x14
    // str r2, [r5, r0]
    // sub r1, #0x28
    // str r0, [r5, r1]
    ov44_0222B9A0(r5, (0x37 << 4), 0x14);
    YesNoPrompt_Destroy(*((u32*)(r5 + (0x62 << 2))));
    // str r1, [r5, r0]
    sub_020390C4((0xd2 << 2), 0x18);
    sub_02039264();
    sub_020373B4(0);
    ov44_0222F7BC(r5);
    ov44_0222F818(r5, 0x10);
    YesNoPrompt_Destroy(*((u32*)(r5 + (0x62 << 2))));
    // mvn r0, r0
    // str r0, [r5, r1]
    // sub r0, #0x14
    // str r2, [r5, r0]
    // sub r1, #0x28
    // str r0, [r5, r1]
    sub_020393C8(0x41, (0x37 << 4), 0x14);
    ov44_0222B9A0(r5);
    ov44_0222F7BC(r5);
}





void ov44_0222CFE0(void) {
    sub_020393C8();
    ov44_0222B9A0(r5);
    ov44_02229F00(r5, *((u32*)(r5 + 4)));
    ov44_0222F818(r5, 0x10);
    TextPrinterCheckActive(((*((u32*)(r5 + (6 << 6))) << 0x18) >> 0x18));
    // str r1, [r5, r0]
    // str r1, [r5, r0]
    // tst r1, r2
    System_GetTouchNew(*((u32*)(r5 + (0xd7 << 2))), 3, *((u32*)(gSystem + 0x48)));
    ov44_0222F7BC(r5);
    sub_02039358();
    sub_02039B58();
    // add r0, r5, r0
    ov44_02231BB0((0xe3 << 2));
    // str r1, [r5, r0]
    // sub r0, #0x14
    // str r1, [r5, r0]
    ov44_0222F8F0(r5, 0x41);
    ov44_0222C120(r5);
    // mvn r1, r1
    // str r1, [r5, r0]
    // sub r0, #0x28
    // str r1, [r5, r0]
    ov44_022319EC(r5, 0x13);
}





void ov44_0222D0A4(void) {
    sub_020393C8();
    ov44_0222B9A0(r5);
    TextPrinterCheckActive(((*((u32*)(r5 + (6 << 6))) << 0x18) >> 0x18));
    // tst r0, r1
    System_GetTouchNew(3, *((u32*)(gSystem + 0x48)));
    ov44_0222F7BC(r5);
    ov44_0222F818(r5, 0x10);
    sub_02039358();
    // str r1, [r5, r0]
    // sub r0, #0x14
    // str r1, [r5, r0]
}





void ov44_0222D10C(void) {
    sub_020393C8();
    ov44_0222B9A0(r5);
    TextPrinterCheckActive(((*((u32*)(r5 + (6 << 6))) << 0x18) >> 0x18));
    // str r1, [r5, r0]
    // str r1, [r5, r0]
    // tst r1, r2
    System_GetTouchNew(*((u32*)(r5 + (0xd7 << 2))), 3, *((u32*)(gSystem + 0x48)));
    ov44_0222F7BC(r5);
    ov44_0222F818(r5, 0x10);
    sub_02039B58();
    // add r0, r5, r0
    ov44_02231BB0((0xe3 << 2));
    ov44_0222ADD0();
    // str r0, [r5, r1]
    ov44_0222F8F0(r5, (0xd2 << 2));
    ov44_0222C120(r5);
    // mvn r1, r1
    // str r1, [r5, r0]
    // sub r0, #0x28
    // str r1, [r5, r0]
    ov44_022319EC(r5, 0x13);
}





void ov44_0222D1BC(void) {
    // add r0, r1, #0
    // bx lr
    // TODO: decompile
}





void ov44_0222D1C0(void) {
    // add r0, r1, #0
    // bx lr
    // TODO: decompile
}





void ov44_0222D1C4(void) {
    // add r0, r1, #0
    // bx lr
    // TODO: decompile
}





void ov44_0222D1C8(void) {
    // str r1, [r5, r0]
    // tst r0, r1
    System_GetTouchNew(3, *((u32*)(gSystem + 0x48)));
    ov44_0222F510(r5, 0x1a, 1);
    // str r1, [r5, r0]
    // add r0, #0x14
    // str r1, [r5, r0]
}





void ov44_0222D214(void) {
    // add r0, r5, r0
    // str r1, [r5, r0]
}





void ov44_0222D23C(void) {
    // add r0, r5, r0
    ov44_02232018((0xe3 << 2));
    TextPrinterCheckActive(((*((u32*)(r5 + (6 << 6))) << 0x18) >> 0x18));
    // and r0, r1
    // asr r0, r0, #0xf
    // str r0, [sp]
    // add r2, #0x7d
    Std_CreateYesNoMenu(*((u32*)(r5 + (0x57 << 2))), ov44_0223538C, (0x57 << 2), 0xb);
    ov44_02231A14(*((u32*)(r5 + (0x57 << 2))), ov44_02235374, 0);
    // str r0, [r5, r1]
    // str r1, [r5, r0]
}





void ov44_0222D2B0(void) {
    // and r0, r1
    // asr r0, r0, #0xf
    Handle2dMenuInput_DeleteOnFinish(*((u32*)(r0 + (0x61 << 2))), 0x35);
    // add r0, r4, r0
    ov44_02232018((0xe3 << 2));
    // mvn r0, r0
    ov00_021E709C(0, *((u32*)(r4 + (0x37 << 4))));
    // mvn r1, r1
    // add r0, #0x21
    ov00_021E70B8(*((u8*)*((u32*)(r4 + 4))), 0);
    // mvn r0, r0
    Clear2dMenuWindowAndDelete(*((u32*)(r4 + (0x61 << 2))), 0x35);
    // mvn r0, r0
    ov44_0222F818(r4, 0x10);
    sub_02039B58();
    ov44_022319EC(r4);
    ov44_022319EC(r4);
    ov44_022319BC(r4, 1);
    YesNoPrompt_HandleInput(*((u32*)(r4 + (0x62 << 2))));
    // add r0, r4, r0
    ov44_02232018((0xe3 << 2));
    // mvn r0, r0
    ov00_021E709C(0, *((u32*)(r4 + (0x37 << 4))));
    // mvn r1, r1
    // add r0, #0x21
    ov00_021E70B8(*((u8*)*((u32*)(r4 + 4))), 0);
    YesNoPrompt_Destroy(*((u32*)(r4 + (0x62 << 2))));
    ov44_0222F818(r4, 0x10);
    sub_02039B58();
    ov44_022319EC(r4);
    YesNoPrompt_Destroy(*((u32*)(r4 + (0x62 << 2))));
    ov44_022319EC(r4);
    ov44_022319BC(r4, 1);
    // str r1, [r4, r0]
}





void ov44_0222D3DC(void) {
    // add r2, sp, #0x1c
    // str r1, [sp, #0x14]
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    ov44_02229EF8(r0, ov44_022366FC);
    // add r0, sp, #0x1c
    *((u16*)(r0 + 0x10)) = (*((u16*)(r0 + 0x10)) + 1);
    *((u16*)(r0 + 0x12)) = (*((u16*)(r0 + 0x12)) + 1);
    // ldmia r2!, {r0, r2}
    // add r3, r4, r1
    // str r0, [r4, r1]
    *((u32*)(r3 + 4)) = _02236660;
    ov44_02229EE0(r5, (((r7 + 1) - 1) << 3), _02236660);
    // add r0, sp, #0x1c
    *((u16*)(r0 + 0x10)) = (*((u16*)(r0 + 0x10)) + 1);
    *((u16*)(r0 + 0x12)) = (*((u16*)(r0 + 0x12)) + 1);
    // add r3, r4, r1
    // str r0, [r4, r1]
    *((u32*)(r3 + 4)) = *((u32*)(_02236660 + 0x1c));
    ov44_02229EFC(r5, (((r7 + 1) - 1) << 3), *((u32*)(_02236660 + 0x1c)));
    // add r0, sp, #0x1c
    *((u16*)(r0 + 0x10)) = (*((u16*)(r0 + 0x10)) + 1);
    *((u16*)(r0 + 0x12)) = (*((u16*)(r0 + 0x12)) + 1);
    // add r3, r4, r1
    // str r0, [r4, r1]
    *((u32*)(r3 + 4)) = *((u32*)(_02236660 + 0xc));
    // add r0, sp, #0x1c
    *((u16*)(*((u32*)(_02236660 + 8)) + 0x10)) = (*((u16*)(*((u32*)(_02236660 + 8)) + 0x10)) + 1);
    *((u16*)(*((u32*)(_02236660 + 8)) + 0x12)) = (*((u16*)(*((u32*)(_02236660 + 8)) + 0x12)) + 1);
    // str r0, [r4, r1]
    // add r3, r4, r1
    *((u32*)(r3 + 4)) = *((u32*)(_02236660 + 0x14));
    ListMenuItems_New(((r7 + 1) + 1), 0x35, *((u32*)(_02236660 + 0x14)));
    // str r0, [r5, r1]
    // str r0, [sp, #0x18]
    ListMenuItems_AppendFromMsgData(*((u32*)(r5 + (0x55 << 2))), *((u32*)(r5 + (0x5a << 2))), *((u32*)r4), *((u32*)(r4 + 4)));
    // ldr r0, [sp, #0x18]
    // add r4, #8
    // add r0, r5, r0
    WindowIsInUse((0x32 << 4));
    // add r0, r5, r0
    sub_0200E5D4((0x32 << 4), 0);
    // add r0, r5, r0
    RemoveWindow((0x32 << 4));
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    // sub r0, r1, r0
    // str r0, [sp, #0x10]
    // add r1, r5, r1
    AddWindowParameterized(*((u32*)(r5 + (0x57 << 2))), (0x32 << 4), 2, 0x10);
    // add r0, r5, r0
    DrawFrameAndWindow1((0x32 << 4), 1, 0x000001D9, 0xb);
    // str r0, [sp, #0x1c]
    // add r0, r5, r2
    // str r0, [sp, #0x28]
    // add r2, #0x54
    // add r0, sp, #0x1c
    ListMenuInit(*((u32*)(r5 + (0x55 << 2))), 0, *((u16*)(r5 + (0x32 << 4))), 0x35);
    // str r0, [r5, r1]
    // add r0, r5, r0
    ScheduleWindowCopyToVram((0x32 << 4), (0x56 << 2));
    ov44_0222F510(r5, 8, 0);
    // add r0, r5, r0
    ov44_02232018((0xe3 << 2));
    // str r1, [r5, r0]
    // ldr r0, [sp, #0x14]
}





void ov44_0222D594(void) {
    ov44_0222A168();
    // str r0, [sp]
    ov44_0222E02C(r5);
    // add r0, r5, r0
    ov44_02232018((0xe3 << 2));
    sub_020393C8();
    // add r0, r5, r0
    sub_0200E5D4((0x32 << 4), 0);
    // add r0, r5, r0
    RemoveWindow((0x32 << 4));
    // add r2, r5, r2
    DestroyListMenu(*((u32*)(r5 + (0x56 << 2))), 0, (0xdd << 2));
    ListMenuItems_Delete(*((u32*)(r5 + (0x55 << 2))));
    ov44_0222F7BC(r5);
    ov44_0222B9A0(r5);
    TextPrinterCheckActive(((*((u32*)(r5 + (6 << 6))) << 0x18) >> 0x18));
    ov44_0222C500(r5);
    // str r1, [r5, r0]
    // sub r0, #0x28
    // add r0, r5, r0
    sub_0200E5D4((0xd2 << 2), 0);
    // add r0, r5, r0
    RemoveWindow((0x32 << 4));
    // add r2, r5, r2
    DestroyListMenu(*((u32*)(r5 + (0x56 << 2))), 0, (0xdd << 2));
    ListMenuItems_Delete(*((u32*)(r5 + (0x55 << 2))));
    ov44_0222F7BC(r5);
    ListMenu_ProcessInput(*((u32*)(r5 + (0x56 << 2))));
    ov44_0222C500(r5);
    // mvn r4, r4
    // mvn r0, r0
    // str r1, [r5, r0]
    ov44_0222F7BC(r5, 0x13);
    PlaySE(0x000005DD);
    PlaySE(0x000005DD);
    ov44_0222F510(r5, 0x68, 0);
    ov44_0222F510(r5, 0x6a, 0);
    ov44_0222F510(r5, 0x69, 0);
    // str r1, [r5, r0]
    // ldr r0, [sp]
    ov44_0222F510(r5, 0x59, 0);
    // str r1, [r5, r0]
    // ldr r0, [sp]
    ov44_0222F510(r5, 0x67, 0);
    // str r1, [r5, r0]
    // add r0, r5, r0
    sub_0200E5D4((0x32 << 4), 0);
    // add r0, r5, r0
    RemoveWindow((0x32 << 4));
    // add r2, r5, r2
    DestroyListMenu(*((u32*)(r5 + (0x56 << 2))), 0, (0xdd << 2));
    ListMenuItems_Delete(*((u32*)(r5 + (0x55 << 2))));
    ov44_0222D8B0(r5, r4);
    // str r1, [r5, r0]
    ov44_0222F818(r5, r4);
    // str r1, [r5, r0]
    ov44_0222F7BC(r5, 0x13);
    ov44_02229F44(r4);
    // str r1, [r5, r0]
    // sub r1, #0x45
    ov44_0223197C(r5, 0x44, r4);
    ov44_0222A1B4(r4);
    ov44_0222F818(r5, r4);
    ov44_02229F74(r4);
    // str r0, [r5, r1]
    // mvn r1, r1
    ov44_0223197C(r5, 0, r4);
    ov44_0222A1B4(r4);
    ov44_022319BC(r5, r6);
    // add r0, r5, r0
    sub_0200E5D4((0x32 << 4), 0);
    // add r0, r5, r0
    RemoveWindow((0x32 << 4));
    // add r2, r5, r2
    DestroyListMenu(*((u32*)(r5 + (0x56 << 2))), 0, (0xdd << 2));
    ListMenuItems_Delete(*((u32*)(r5 + (0x55 << 2))));
}





void ov44_0222D824(void) {
    // add r0, r5, r0
    // str r1, [r5, r0]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [r5, r0]
}





void ov44_0222D8B0(void) {
    // strh r1, [r5, r0]
    // add r2, sp, #0x14
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // strh r1, [r5, r0]
    // add r2, sp, #0x14
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // add r2, sp, #0x14
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // strh r1, [r5, r0]
    ListMenuItems_New(4, 0x35, ov44_02235528);
    // str r0, [r5, r1]
    ListMenuItems_AppendFromMsgData(*((u32*)(r5 + (0x55 << 2))), *((u32*)(r5 + (0x5a << 2))), *((u32*)r4), *((u32*)(r4 + 4)));
    BufferWiFiPlazaActivityName(*((u32*)(r5 + (0x59 << 2))), 0, r6);
    ReadMsgDataIntoString(*((u32*)(r5 + (0x5a << 2))), *((u32*)r4), *((u32*)(r5 + (0x17 << 4))));
    StringExpandPlaceholders(*((u32*)(r5 + (0x59 << 2))), *((u32*)(r5 + (0x5e << 2))), *((u32*)(r5 + (0x17 << 4))));
    ListMenuItems_AddItem(*((u32*)(r5 + (0x55 << 2))), *((u32*)(r5 + (0x5e << 2))), *((u32*)(r4 + 4)));
    // add r4, #8
    // add r0, r5, r0
    WindowIsInUse((0x32 << 4));
    // add r0, r5, r0
    sub_0200E5D4((0x32 << 4), 0);
    // add r0, r5, r0
    RemoveWindow((0x32 << 4));
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    // sub r0, r1, r0
    // str r0, [sp, #0x10]
    // add r1, r5, r1
    AddWindowParameterized(*((u32*)(r5 + (0x57 << 2))), (0x32 << 4), 2, 0x10);
    // add r0, r5, r0
    DrawFrameAndWindow1((0x32 << 4), 1, 0x000001D9, 0xb);
    // str r0, [sp, #0x14]
    // add r0, r5, r3
    // str r0, [sp, #0x20]
    // add r2, #0x5c
    // add r3, #0x56
    // add r0, sp, #0x14
    // add r2, r5, r2
    ListMenuInit(*((u32*)(r5 + (0x55 << 2))), 0, *((u16*)((*((u16*)(r5 + (0x32 << 4))) << 1) + (0x32 << 4))), 0x35);
    // str r0, [r5, r1]
    // add r0, r5, r0
    ScheduleWindowCopyToVram((0x32 << 4), (0x56 << 2));
}





void ov44_0222DA64(void) {
    // add r0, r5, r0
    ov44_02232018((0xe3 << 2));
    sub_020393C8();
    // add r0, r5, r0
    sub_0200E5D4((0x32 << 4), 0);
    // add r0, r5, r0
    RemoveWindow((0x32 << 4));
    // add r2, r5, r3
    // add r2, r2, r3
    DestroyListMenu(*((u32*)(r5 + (0x56 << 2))), 0, (*((u16*)(r5 + (0x00000376 + 6))) << 1));
    ListMenuItems_Delete(*((u32*)(r5 + (0x55 << 2))));
    ov44_0222F7BC(r5);
    ov44_0222B9A0(r5);
    ov44_0222C500(r5);
    // str r1, [r5, r0]
    // sub r0, #0x28
    // add r0, r5, r0
    sub_0200E5D4((0xd2 << 2), 0);
    // add r0, r5, r0
    RemoveWindow((0x32 << 4));
    // add r2, r5, r3
    // add r2, r2, r3
    DestroyListMenu(*((u32*)(r5 + (0x56 << 2))), 0, (*((u16*)(r5 + (0x00000376 + 6))) << 1));
    ListMenuItems_Delete(*((u32*)(r5 + (0x55 << 2))));
    ov44_0222F7BC(r5);
    TextPrinterCheckActive(((*((u32*)(r5 + (6 << 6))) << 0x18) >> 0x18));
    ListMenu_ProcessInput(*((u32*)(r5 + (0x56 << 2))));
    // mvn r0, r0
    PlaySE(0x000005DD);
    // str r1, [r5, r0]
    PlaySE(0x000005DD, 0x24);
    ov44_0222F818(r5, r4);
    // str r1, [r5, r0]
    ov44_0222F7BC(r5, 0x13);
    ov44_02229F44(r4);
    // str r1, [r5, r0]
    // sub r1, #0x45
    ov44_0223197C(r5, 0x44, r4);
    ov44_0222A1B4(r4);
    ov44_0222F818(r5, r4);
    ov44_02229F74(r4);
    // str r0, [r5, r1]
    ov44_0223197C(r5, (0 - 2), r4);
    sub_02039B7C();
    ov44_022319BC(r5, r7);
    // add r0, r5, r0
    sub_0200E5D4((0x32 << 4), 0);
    // add r0, r5, r0
    RemoveWindow((0x32 << 4));
    // add r2, r5, r3
    // add r2, r2, r3
    DestroyListMenu(*((u32*)(r5 + (0x56 << 2))), 0, (*((u16*)(r5 + (0x00000376 + 6))) << 1));
    ListMenuItems_Delete(*((u32*)(r5 + (0x55 << 2))));
}





void ov44_0222DC18(void) {
    // add r0, r4, r0
    ov44_02231C70((0xe3 << 2));
    ov44_0222AAEC(r4, 0);
    GF_AssertFail();
    ov44_0222AAEC(r4, r5);
    // str r0, [sp]
    ov44_0222F780(r4, (r5 - 1));
    ov44_0222F510(r4, 0x10, 0);
    // str r1, [r4, r0]
    ov44_02231F04(r7, 0x1d);
    // ldr r1, [sp]
    // add r0, r4, r0
    ov44_02231F14((0xe3 << 2), r0);
    ov44_02231958(r4, (r5 - 1));
    ov44_02229F00(r4, r0);
    // strh r5, [r4, r0]
    ov44_0222F780(r4, r7);
    BufferWiFiPlazaActivityName(*((u32*)(r4 + (0x59 << 2))), 1, 0);
    BufferWiFiPlazaActivityName(*((u32*)(r4 + (0x59 << 2))), 1, 1);
    BufferWiFiPlazaActivityName(*((u32*)(r4 + (0x59 << 2))), 1, 2);
    ov44_02229FB4(r5, 0x55);
    ov44_0222A020(r5, 0x52);
    ov44_0222F510(r4, 7, 0);
    // str r1, [r4, r0]
}





void ov44_0222DD64(void) {
    // str r1, [sp, #0x14]
    sub_020393C8();
    ov44_0222B9A0(r5);
    // ldr r0, [sp, #0x14]
    // add r0, r5, r0
    ov44_02231C70((0xe3 << 2));
    ov44_0222AAEC(r5, r0);
    ov44_0222C500(r5);
    // add r0, r5, r0
    ov44_02231F88((0xe3 << 2), r6);
    ov44_0222F7BC(r5);
    // str r1, [r5, r0]
    // ldr r0, [sp, #0x14]
    // add r0, r5, r0
    ov44_02231F88((0xe3 << 2), r6);
    DestroyListMenu(*((u32*)(r5 + (0x56 << 2))), 0, 0);
    ov44_0222F780(r5, (r4 - 1));
    ov44_0222F510(r5, 0x10, 0);
    // str r1, [r5, r0]
    // ldr r0, [sp, #0x14]
    ov44_02231958(r5, (r4 - 1));
    ov44_02229F00(r5, r0);
    // add r1, #0xe
    // add r0, r5, r1
    ov44_02231F88(r6, *((u16*)(r5 + 0x0000037E)));
    ov44_0222F780(r5, (r4 - 1));
    ov44_0222F510(r5, 0x10, 0);
    // str r1, [r5, r0]
    // ldr r0, [sp, #0x14]
    TextPrinterCheckActive(((*((u32*)(r5 + (6 << 6))) << 0x18) >> 0x18), 0x1d);
    // ldr r0, [sp, #0x14]
    // str r0, [sp, #0x1c]
    // add r2, sp, #0x24
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // add r0, r5, r0
    ov44_02231C70((0xe3 << 2), ov44_022354C8);
    ov44_02231958(r5, (r0 - 1));
    ov44_02229F00(r5, r0);
    // add r6, #0x21
    // strh r1, [r5, r0]
    // add r0, #0x21
    // add r0, r1, r0
    // str r0, [sp, #0x18]
    ListMenuItems_New(2, 0x35);
    // str r0, [r5, r1]
    // str r0, [sp, #0x20]
    // add r7, sp, #0x24
    // ldr r0, [sp, #0x20]
    ov44_0222A048(r4, (0x55 << 2));
    *((u16*)(r7 + 0x12)) = (*((u16*)(r7 + 0x12)) - 1);
    *((u16*)(r7 + 0x10)) = (*((u16*)(r7 + 0x10)) - 1);
    // ldr r0, [sp, #0x1c]
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x18]
    ListMenuItems_AppendFromMsgData(*((u32*)(r5 + (0x55 << 2))), *((u32*)(r5 + (0x5a << 2))), 0x24, *((u32*)(r6 + 4)));
    *((u16*)(r7 + 0x12)) = (*((u16*)(r7 + 0x12)) - 1);
    *((u16*)(r7 + 0x10)) = (*((u16*)(r7 + 0x10)) - 1);
    // ldr r0, [sp, #0x1c]
    // str r0, [sp, #0x1c]
    ListMenuItems_AppendFromMsgData(*((u32*)(r5 + (0x55 << 2))), *((u32*)(r5 + (0x5a << 2))), *((u32*)r6), *((u32*)(r6 + 4)));
    ListMenuItems_AppendFromMsgData(*((u32*)(r5 + (0x55 << 2))), *((u32*)(r5 + (0x5a << 2))), *((u32*)r6), *((u32*)(r6 + 4)));
    // ldr r0, [sp, #0x20]
    // add r6, #8
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x1c]
    // sub r0, r1, r0
    // add r0, #0xb
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x1c]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, r5, r1
    AddWindowParameterized(*((u32*)(r5 + (0x57 << 2))), (0x32 << 4), 2, 0x10);
    // add r0, r5, r0
    DrawFrameAndWindow1((0x32 << 4), 1, 0x000001D9, 0xb);
    // str r0, [sp, #0x24]
    // add r0, r5, r0
    // str r0, [sp, #0x30]
    // add r0, sp, #0x24
    ListMenuInit((0x32 << 4), 0, 0, 0x35);
    // str r0, [r5, r1]
    // add r0, r5, r0
    ScheduleWindowCopyToVram((0x32 << 4), (0x56 << 2));
    // str r1, [r5, r0]
    // ldr r0, [sp, #0x14]
}





void ov44_0222DFEC(void) {
    // add r1, #0x29
}





u8 ov44_0222E02C(void) {
}





void ov44_0222E030(void) {
    ov00_021E70B8(0);
    ov44_0222E074();
    IsNighttime();
    Sound_SetScene(0);
    Sound_SetSceneAndPlayBGM(0xb, 0x00000427, 1);
    GF_GetCurrentPlayingBGM();
    GF_GetCurrentPlayingBGM();
    GF_GetVolumeBySeqNo();
    GF_SetVolumeBySeqNo(r4, r0);
}





void ov44_0222E074(void) {
}





void ov44_0222E090(void) {
    // str r1, [sp]
    ListMenu_ProcessInput(*((u32*)(r0 + (0x56 << 2))));
    ov44_0222C500(r5);
    // add r0, r5, r0
    ov44_02231C70((0xe3 << 2));
    ov44_0222AAEC(r5, r0);
    // str r0, [sp, #0x14]
    sub_020393C8();
    // add r0, r5, r0
    sub_0200E5D4((0x32 << 4), 0);
    // add r0, r5, r0
    RemoveWindow((0x32 << 4));
    DestroyListMenu(*((u32*)(r5 + (0x56 << 2))), 0, 0);
    ListMenuItems_Delete(*((u32*)(r5 + (0x55 << 2))));
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp, #0x14]
    // add r0, r5, r0
    ov44_02231F88((0xe3 << 2));
    ov44_0222B9A0(r5);
    // ldr r0, [sp]
    // mvn r0, r0
    // ldr r0, [sp, #0x14]
    DestroyListMenu(*((u32*)(r5 + (0x56 << 2))), 0, 0);
    ov44_0222F780(r5, (r4 - 1));
    ov44_0222F510(r5, 0x10, 0);
    // str r1, [r5, r0]
    ov44_02231958(r5, (r4 - 1));
    ov44_02229F00(r5, r0);
    // add r6, #0x21
    ov44_02229F44(*((u16*)(r5 + 0x0000037E)));
    ov44_0222F780(r5, (r4 - 1));
    ov44_0222F510(r5, 0x10, 0);
    // str r1, [r5, r0]
    // ldr r0, [sp]
    PlaySE(0x000005DD, 0x1d);
    // str r1, [r5, r0]
    PlaySE(0x000005DD, 0x13);
    // str r1, [r5, r0]
    // add r0, #0x3a
    // strh r4, [r5, r0]
    ov44_0222A168(r5, 0x13);
    // str r0, [sp, #0x10]
    ov44_0222E02C(r5);
    // str r0, [sp, #0xc]
    ov44_02231958(r5, (r4 - 1));
    // str r0, [sp, #8]
    // ldr r1, [sp, #8]
    ov44_02229F00(r5);
    // ldr r1, [sp, #8]
    // add r1, #0x21
    // str r1, [sp, #4]
    ov44_02229F44(*((u16*)(r5 + 0x0000037E)));
    // ldr r0, [sp, #4]
    ov44_0222F780(r5, (r4 - 1));
    ov44_0222F510(r5, 0x10, 0);
    // str r1, [r5, r0]
    // ldr r0, [sp, #8]
    ov44_0222DFEC((0xd2 << 2), 0x1d);
    ov44_0222F780(r5, (r4 - 1));
    ov44_0222F510(r5, 0x10, 0);
    // str r1, [r5, r0]
    ov44_0222A090(r7, 0x1d);
    // ldr r0, [sp, #0x10]
    ov44_0222F510(r5, 0x59, 0);
    ov44_0222F510(r5, 0x67, 0);
    // str r1, [r5, r0]
    // ldr r0, [sp, #0xc]
    ov44_0222F510(r5, 0x68, 0);
    ov44_0222F510(r5, 0x6a, 0);
    ov44_0222F510(r5, 0x69, 0);
    // str r1, [r5, r0]
    ov44_02229F44(r7, 0x1d);
    // add r0, #0x21
    // ldr r0, [sp, #4]
    ov44_0222F510(r5, 0x86, 0);
    ov44_0222F510(r5, 0x87, 0);
    ov44_0222A0B4(r7);
    ov44_0222F818(r5, r0);
    // str r1, [r5, r0]
    ov44_0222A0B4(r7, 0x3f);
    ov44_02231974((r4 - 1));
    ov44_0223197C(r5, (r4 - 1), r7);
    // str r1, [r5, r0]
    ov44_0222A1B4(r7, 0x00000708);
    ov44_0222F818(r5, r7);
    ov44_0222F780(r5, (r4 - 1));
    ov44_0222F510(r5, 0x11, 0);
    GF_AssertFail(*((u32*)(r5 + (0x63 << 2))));
    // add r0, r5, r1
    // sub r1, #0xee
    WaitingIcon_New((0x2d << 4));
    // str r0, [r5, r1]
    // str r1, [r5, r0]
    // add r0, #8
    // str r1, [r5, r0]
    ov44_0222F780(r5, (r4 - 1));
    ov44_0222F510(r5, 0x10, 0);
    // str r1, [r5, r0]
    ov44_0222F780(r5, (r4 - 1));
    ov44_0222F510(r5, 0x10, 0);
    // str r1, [r5, r0]
    // str r1, [r5, r0]
    ov44_0222F7BC(r5, 0x36);
    // add r0, r5, r0
    sub_0200E5D4((0x32 << 4), 0);
    // add r0, r5, r0
    RemoveWindow((0x32 << 4));
    DestroyListMenu(*((u32*)(r5 + (0x56 << 2))), 0, 0);
    ListMenuItems_Delete(*((u32*)(r5 + (0x55 << 2))));
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp, #0x14]
    // add r0, r5, r0
    ov44_02231F88((0xe3 << 2));
    // ldr r0, [sp]
}





void ov44_0222E45C(void) {
    // str r1, [r5, r0]
    // add r0, #8
    // str r1, [r5, r0]
    // str r1, [r5, r0]
    // str r1, [r5, r0]
    // str r1, [r5, r0]
    // str r1, [r5, r0]
    // str r1, [r5, r0]
    // str r0, [r5, r1]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [r5, r0]
    // str r1, [r5, r0]
}





void ov44_0222E5D8(void) {
    // add r0, r1, #0
    // bx lr
    // TODO: decompile
}





void ov44_0222E5DC(void) {
    // add r0, r1, #0
    // bx lr
    // TODO: decompile
}





void ov44_0222E5E0(void) {
    // mvn r1, r1
    // str r1, [r5, r0]
    // sub r0, #0x28
    // str r1, [r5, r0]
}





void ov44_0222E62C(void) {
    // add r0, r1, #0
    // bx lr
    // TODO: decompile
}





void ov44_0222E630(void) {
    // add r0, r1, #0
    // bx lr
    // TODO: decompile
}





void ov44_0222E634(void) {
    // add r1, #0x21
    // str r1, [r5, r0]
    // str r1, [r5, r0]
    // str r1, [r5, r0]
    // str r1, [r5, r0]
    // str r1, [r5, r0]
    // str r1, [r5, r0]
    // str r1, [r5, r0]
    // str r1, [r5, r0]
    // str r1, [r5, r0]
    // str r1, [r5, r0]
    // str r1, [r5, r0]
    // str r1, [r5, r0]
    // str r1, [r5, r0]
    // str r1, [r5, r0]
    // str r1, [r5, r0]
    // add r0, #0x14
    // str r1, [r5, r0]
}





void ov44_0222E7C4(void) {
    // str r1, [r5, r0]
    // str r1, [r5, r0]
    // str r1, [r5, r0]
}





void ov44_0222E860(void) {
    // sub r1, #0x14
    // str r1, [r5, r0]
    // sub r0, #0x3c
    // str r1, [r5, r0]
    // str r1, [r5, r0]
    // sub r0, #0x3c
    // str r1, [r5, r0]
    // str r1, [r5, r0]
}





void ov44_0222E908(void) {
    // add r1, sp, #0
    // strh r0, [r1]
    // add r1, sp, #0
    // str r1, [r5, r0]
}





void ov44_0222E948(void) {
    // str r1, [r5, r0]
    // str r1, [r5, r0]
}





void ov44_0222E9C4(void) {
    // str r1, [r5, r0]
}





void ov44_0222E9FC(void) {
    // add r0, r4, r0
}





void ov44_0222EA2C(void) {
    // add r1, sp, #0xc
    // str r2, [r4, r0]
    // sub r0, #0x12
    // str r2, [r4, r0]
    // sub r0, #0x14
    // str r2, [r4, r0]
    // sub r0, #0x16
    // str r2, [r4, r0]
    // sub r0, #0x18
    // str r2, [r4, r0]
    // sub r0, #0x1a
    // str r2, [r4, r0]
    // str r2, [r4, r0]
    // str r2, [r4, r0]
    // str r2, [r4, r0]
    // str r2, [r4, r0]
    // str r2, [r4, r0]
    // str r2, [r4, r0]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
}





void ov44_0222EB90(void) {
    // strb r1, [r5, r0]
    // str r0, [r5, r1]
}





void ov44_0222EBB8(void) {
    // str r3, [r0, r2]
}





void ov44_0222EBC4(void) {
    TextPrinterCheckActive(((*((u32*)(r0 + (6 << 6))) << 0x18) >> 0x18));
    ov44_0222C4EC(r5);
    // str r1, [r5, r0]
    // tst r0, r1
    System_GetTouchNew(3, *((u32*)(gSystem + 0x48)));
    // str r1, [r5, r0]
}





void ov44_0222EC14(void) {
}





void ov44_0222EC2C(void) {
    TextPrinterCheckActive(((*((u32*)(r0 + (6 << 6))) << 0x18) >> 0x18));
    // and r0, r1
    // asr r0, r0, #0xf
    // str r0, [sp]
    // add r2, #0x7d
    Std_CreateYesNoMenu(*((u32*)(r5 + (0x57 << 2))), ov44_0223538C, (0x57 << 2), 0xb);
    ov44_02231A14(*((u32*)(r5 + (0x57 << 2))), ov44_02235374, 0);
    // str r0, [r5, r1]
    // str r1, [r5, r0]
}





void ov44_0222EC98(void) {
    // and r0, r1
    // asr r0, r0, #0xf
    Handle2dMenuInput_DeleteOnFinish(*((u32*)(r0 + (0x61 << 2))), 0x35);
    TextPrinterCheckActive(((*((u32*)(r4 + (6 << 6))) << 0x18) >> 0x18));
    ov44_0222C500(r4);
    // mvn r0, r0
    Clear2dMenuWindowAndDelete(*((u32*)(r4 + (0x61 << 2))), 0x35);
    // mvn r5, r5
    // mvn r0, r0
    ov44_0222F510(r4, 0x1a, 1);
    // str r1, [r4, r0]
    // add r0, #0x14
    // str r1, [r4, r0]
    ov44_0222F7BC(r4, 1);
    // str r1, [r4, r0]
    ov44_022319EC(r4, 0x13);
    YesNoPrompt_HandleInput(*((u32*)(r4 + (0x62 << 2))));
    TextPrinterCheckActive(((*((u32*)(r4 + (6 << 6))) << 0x18) >> 0x18));
    ov44_0222C500(r4);
    YesNoPrompt_Destroy(*((u32*)(r4 + (0x62 << 2))));
    ov44_0222F510(r4, 0x1a, 1);
    // str r1, [r4, r0]
    // add r0, #0x14
    // str r1, [r4, r0]
    YesNoPrompt_Destroy(*((u32*)(r4 + (0x62 << 2))), 1);
    ov44_0222F7BC(r4);
    // str r1, [r4, r0]
    ov44_022319EC(r4, 0x13);
}





void ov44_0222EDB8(void) {
    // str r1, [r5, r0]
    // str r1, [r5, r0]
    // add r0, #0x14
    // str r1, [r5, r0]
}





void ov44_0222EE10(void) {
    // str r0, [r5, r1]
    // sub r0, #0x10
    // str r2, [r5, r0]
    // sub r1, #0x14
    // str r0, [r5, r1]
}





void ov44_0222EE54(void) {
    sub_02037B38(0x10);
    sub_020398D4(0, 1);
    TextPrinterCheckActive(((*((u32*)(r5 + (6 << 6))) << 0x18) >> 0x18));
    // and r0, r1
    // asr r0, r0, #0xf
    // str r0, [sp]
    // add r2, #0x7d
    Std_CreateYesNoMenu(*((u32*)(r5 + (0x57 << 2))), ov44_0223538C, (0x57 << 2), 0xb);
    ov44_02231A28(*((u32*)(r5 + (0x57 << 2))), ov44_02235374, 0);
    // str r0, [r5, r1]
    // str r1, [r5, r0]
}





void ov44_0222EED4(void) {
    TextPrinterCheckActive(((*((u32*)(r0 + (6 << 6))) << 0x18) >> 0x18));
    sub_02039274(r4);
    sub_02039264();
    sub_020390C4();
    // and r0, r1
    // asr r0, r0, #0xf
    Clear2dMenuWindowAndDelete(*((u32*)(r5 + (0x61 << 2))), 0x35);
    YesNoPrompt_Destroy(*((u32*)(r5 + (0x62 << 2))));
    ov44_0222F510(r5, 0x65, 0);
    // str r1, [r5, r0]
    sub_020393C8((0xd2 << 2), 0x1c);
    // and r0, r1
    // asr r0, r0, #0xf
    Clear2dMenuWindowAndDelete(*((u32*)(r5 + (0x61 << 2))), 0x35);
    YesNoPrompt_Destroy(*((u32*)(r5 + (0x62 << 2))));
    ov44_0222B9A0(r5);
    // and r0, r1
    // asr r0, r0, #0xf
    Handle2dMenuInput_DeleteOnFinish(*((u32*)(r5 + (0x61 << 2))), 0x35);
    // mvn r1, r1
    ov44_0222F510(r5, 0x8a, 0);
    GF_AssertFail(*((u32*)(r5 + (0x63 << 2))));
    // add r0, r5, r1
    // sub r1, #0xee
    WaitingIcon_New((0x2d << 4));
    // str r0, [r5, r1]
    // str r0, [r5, r1]
    // sub r0, #0x3c
    // str r2, [r5, r0]
    // sub r1, #0x28
    // str r0, [r5, r1]
    ov44_0222F7BC(r5, (0xe1 << 2), 0x31);
    sub_020343E4();
    sub_020393B4();
    // str r1, [r5, r0]
    // sub r0, #0x14
    // str r1, [r5, r0]
    YesNoPrompt_HandleInput(*((u32*)(r5 + (0x62 << 2))), 0x41);
    YesNoPrompt_Destroy(*((u32*)(r5 + (0x62 << 2))));
    ov44_0222F510(r5, 0x8a, 0);
    GF_AssertFail(*((u32*)(r5 + (0x63 << 2))));
    // add r0, r5, r1
    // sub r1, #0xee
    WaitingIcon_New((0x2d << 4));
    // str r0, [r5, r1]
    // str r0, [r5, r1]
    // sub r0, #0x3c
    // str r2, [r5, r0]
    // sub r1, #0x28
    // str r0, [r5, r1]
    YesNoPrompt_Destroy(*((u32*)(r5 + (0x62 << 2))), (0xe1 << 2), 0x31);
    ov44_0222F7BC(r5);
    sub_020343E4();
    sub_020393B4();
    // str r1, [r5, r0]
    // sub r0, #0x14
    // str r1, [r5, r0]
    sub_020398C8(*((u32*)(r5 + (0xe1 << 2))), 0x41);
    *((u32*)(r5 + 4)) = r0;
    // add r1, #0x22
    // add r0, #0x21
    // strb r1, [r0]
}





void ov44_0222F0AC(void) {
    // add r0, r5, r0
    ov44_02231C70((0xe3 << 2));
    ov44_0222AAEC(r5, r0);
    ov44_0222F780(r5, (r4 - 1));
    ov44_0222F510(r5, 0x10, 0);
    // str r1, [r5, r0]
    ov44_02231958(r5, (r4 - 1));
    ov44_02229F00(r5, r0);
    // add r7, #0x21
    ov44_0222F780(r5, (r4 - 1), 0x0000037E, *((u16*)(r5 + 0x0000037E)));
    ov44_0222F510(r5, 0x10, 0);
    // str r1, [r5, r0]
    TextPrinterCheckActive(((*((u32*)(r5 + (6 << 6))) << 0x18) >> 0x18), 0x1d);
    // and r0, r1
    // asr r0, r0, #0xf
    // str r0, [sp]
    // add r2, #0x7d
    Std_CreateYesNoMenu(*((u32*)(r5 + (0x57 << 2))), ov44_0223538C, (0x57 << 2), 0xb);
    ov44_02231A14(*((u32*)(r5 + (0x57 << 2))), ov44_02235374, 0);
    // str r0, [r5, r1]
    // str r1, [r5, r0]
}





void ov44_0222F194(void) {
    // add r0, r5, r0
    ov44_02231C70((0xe3 << 2));
    ov44_0222AAEC(r5, r0);
    // and r0, r1
    // asr r0, r0, #0xf
    Clear2dMenuWindowAndDelete(*((u32*)(r5 + (0x61 << 2))), 0x35);
    YesNoPrompt_Destroy(*((u32*)(r5 + (0x62 << 2))));
    ov44_0222F780(r5, (r6 - 1));
    ov44_0222F510(r5, 0x10, 0);
    // str r1, [r5, r0]
    ov44_02231958(r5, (r6 - 1));
    ov44_02229F00(r5, r0);
    // add r7, #0x21
    // and r0, r1
    // asr r0, r0, #0xf
    Clear2dMenuWindowAndDelete(*((u32*)(r5 + (0x61 << 2))), 0x35, 0x0000037E, *((u16*)(r5 + 0x0000037E)));
    YesNoPrompt_Destroy(*((u32*)(r5 + (0x62 << 2))));
    ov44_0222F780(r5, (r6 - 1));
    ov44_0222F510(r5, 0x10, 0);
    // str r1, [r5, r0]
    sub_020393C8(r4, 0x1d);
    // and r0, r1
    // asr r0, r0, #0xf
    Clear2dMenuWindowAndDelete(*((u32*)(r5 + (0x61 << 2))), 0x35);
    YesNoPrompt_Destroy(*((u32*)(r5 + (0x62 << 2))));
    ov44_0222B9A0(r5);
    sub_020390C4();
    // and r0, r1
    // asr r0, r0, #0xf
    Clear2dMenuWindowAndDelete(*((u32*)(r5 + (0x61 << 2))), 0x35);
    YesNoPrompt_Destroy(*((u32*)(r5 + (0x62 << 2))));
    ov44_0222F510(r5, 0x12, 0);
    sub_02039358();
    // str r1, [r5, r0]
    // and r0, r1
    // asr r0, r0, #0xf
    Handle2dMenuInput_DeleteOnFinish(*((u32*)(r5 + (0x61 << 2))), 0x35);
    // mvn r1, r1
    ov44_0222A0B4(*((u16*)(r5 + 0x0000037E)), 0);
    ov44_02231974((*((u16*)(r5 + 0x00000382)) - 1));
    ov44_0222F89C(r5);
    ov44_0223197C(r5, (*((u16*)(r5 + 0x00000382)) - 1), r6);
    // str r1, [r5, r0]
    ov44_0222A1B4(r6, 0x00000708);
    sub_020378E4(0);
    ov44_0222F818(r5, r6);
    ov44_0222F780(r5, (*((u16*)(r5 + 0x00000382)) - 1));
    ov44_0222F510(r5, 0x11, 0);
    GF_AssertFail(*((u32*)(r5 + (0x63 << 2))));
    // add r0, r5, r1
    // sub r1, #0xee
    WaitingIcon_New((0x2d << 4));
    // str r0, [r5, r1]
    // str r1, [r5, r0]
    // str r1, [r5, r0]
    // add r0, #8
    // str r1, [r5, r0]
    ov44_0222F7BC(r5, 0x15);
    ov44_0222F818(r5, 0x10);
    ov44_0222F8F0(r5);
    ov44_0222C120(r5);
    // str r1, [r5, r0]
    YesNoPrompt_HandleInput(*((u32*)(r5 + (0x62 << 2))), 0x13);
    YesNoPrompt_Destroy(*((u32*)(r5 + (0x62 << 2))));
    ov44_0222A0B4(*((u16*)(r5 + 0x0000037E)));
    ov44_02231974((*((u16*)(r5 + 0x00000382)) - 1));
    ov44_0222F89C(r5);
    ov44_0223197C(r5, (*((u16*)(r5 + 0x00000382)) - 1), r6);
    // str r1, [r5, r0]
    ov44_0222A1B4(r6, 0x00000708);
    sub_020378E4(0);
    ov44_0222F818(r5, r6);
    ov44_0222F780(r5, (*((u16*)(r5 + 0x00000382)) - 1));
    ov44_0222F510(r5, 0x11, 0);
    GF_AssertFail(*((u32*)(r5 + (0x63 << 2))));
    // add r0, r5, r1
    // sub r1, #0xee
    WaitingIcon_New((0x2d << 4));
    // str r0, [r5, r1]
    // str r1, [r5, r0]
    // str r1, [r5, r0]
    // add r0, #8
    // str r1, [r5, r0]
    YesNoPrompt_Destroy(*((u32*)(r5 + (0x62 << 2))), 0x15);
    ov44_0222F7BC(r5);
    ov44_0222F818(r5, 0x10);
    ov44_0222F8F0(r5);
    ov44_0222C120(r5);
    // str r1, [r5, r0]
}





void ov44_0222F4E0(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
}





void ov44_0222F510(void) {
    Save_PlayerData_GetOptionsAddr(*((u32*)(r0 + (0x16 << 4))));
    Options_GetTextFrameDelay();
    ov44_0222F910(r5);
    // add r0, r5, r0
    WindowIsInUse((3 << 8));
    // add r0, r5, r0
    ClearFrameAndWindow2((3 << 8), 0);
    // add r0, r5, r0
    RemoveWindow((3 << 8));
    // add r0, r5, r0
    WindowIsInUse((0x2d << 4));
    // add r0, r5, r0
    ClearFrameAndWindow2((0x2d << 4), 0);
    // add r0, r5, r0
    RemoveWindow((0x2d << 4));
    TextPrinterCheckActive(((*((u32*)(r5 + (6 << 6))) << 0x18) >> 0x18));
    RemoveTextPrinter(((*((u32*)(r5 + (6 << 6))) << 0x18) >> 0x18));
    // str r1, [r5, r0]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r0, #0x2f
    // add r1, r5, r1
    AddWindowParameterized(*((u32*)(r5 + 0x0000012D)), (0x2d << 4), 2, 2);
    ReadMsgDataIntoString(*((u32*)(r5 + (0x5b << 2))), r6, *((u32*)(r5 + ((0x5b << 2) + 4))));
    // add r2, #8
    ReadMsgDataIntoString(*((u32*)(r5 + (0x5a << 2))), r6, *((u32*)(r5 + (0x5a << 2))));
    // add r1, #0x10
    // add r2, #0xc
    StringExpandPlaceholders(*((u32*)(r5 + (0x59 << 2))), *((u32*)(r5 + (0x59 << 2))), *((u32*)(r5 + (0x59 << 2))));
    // add r0, r5, r0
    FillWindowPixelBuffer((0x2d << 4), 0xf);
    // add r0, r5, r2
    // sub r2, #0xee
    DrawFrameAndWindow2(1, (0x2d << 4), 0xa);
    TextFlags_SetCanABSpeedUpPrint(1);
    TextFlags_SetAutoScrollParam(0);
    TextFlags_SetCanTouchSpeedUpPrint(1);
    // str r3, [sp]
    // str r4, [sp, #4]
    // str r3, [sp, #8]
    // add r0, r5, r0
    AddTextPrinterParameterized((0x2d << 4), 1, *((u32*)(r5 + (0x5d << 2))), 0);
    // str r0, [r5, r1]
    // add r0, r5, r0
    ScheduleWindowCopyToVram((0x2d << 4), (6 << 6));
}





void ov44_0222F66C(void) {
    ov44_0222F910();
    // add r0, r5, r0
    WindowIsInUse((3 << 8));
    // add r0, r5, r0
    ClearFrameAndWindow2((3 << 8), 0);
    // add r0, r5, r0
    RemoveWindow((3 << 8));
    // add r0, r5, r0
    WindowIsInUse((0x2d << 4));
    // add r0, r5, r0
    ClearFrameAndWindow2((0x2d << 4), 0);
    // add r0, r5, r0
    RemoveWindow((0x2d << 4));
    TextPrinterCheckActive(((*((u32*)(r5 + (6 << 6))) << 0x18) >> 0x18));
    RemoveTextPrinter(((*((u32*)(r5 + (6 << 6))) << 0x18) >> 0x18));
    // str r1, [r5, r0]
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r0, #0xf3
    // add r1, r5, r1
    AddWindowParameterized(*((u32*)(r5 + 0x69)), (0xc << 6), 2, 4);
    ReadMsgDataIntoString(*((u32*)(r5 + (0x5b << 2))), r4, *((u32*)(r5 + ((0x5b << 2) + 4))));
    // add r1, #0x10
    // add r2, #0xc
    StringExpandPlaceholders(*((u32*)(r5 + (0x59 << 2))), *((u32*)(r5 + (0x59 << 2))), *((u32*)(r5 + (0x59 << 2))));
    // add r0, r5, r0
    FillWindowPixelBuffer((3 << 8), 0xf);
    // add r0, r5, r0
    DrawFrameAndWindow1((3 << 8), 1, 0x000001D9, 0xb);
    // str r3, [sp]
    // str r2, [sp, #4]
    // str r3, [sp, #8]
    // add r2, #0x75
    // add r0, r5, r0
    AddTextPrinterParameterized((3 << 8), 1, *((u32*)(r5 + 0xff)), 0);
    // str r0, [r5, r1]
    // add r0, r5, r0
    ScheduleWindowCopyToVram(((6 << 6) << 1), (6 << 6));
}





void ov44_0222F780(void) {
    // mvn r0, r0
}





void ov44_0222F7BC(void) {
    // str r1, [r4, r0]
    // add r0, r4, r0
    // add r0, r4, r0
    // add r0, r4, r0
}





void ov44_0222F818(void) {
}





void ov44_0222F830(void) {
}





void ov44_0222F89C(void) {
    // add r0, #0x21
    // add r2, #0x21
    // sub r0, r0, r1
    // strb r0, [r2]
    // add r0, #0x21
}





void ov44_0222F8C0(void) {
    // add r0, #0x22
    // add r2, #0x22
    // sub r0, r0, r1
    // strb r0, [r2]
    // add r0, #0x22
    // add r1, #0x21
    // strb r0, [r1]
    // add r0, #0x22
}





void ov44_0222F8F0(void) {
}





void ov44_0222F910(void) {
    // str r1, [r4, r0]
    // add r0, r4, r0
    // add r0, r4, r0
    // add r0, r4, r0
}





void ov44_0222F950(void) {
    // add r0, r5, r0
}





void ov44_0222F970(void) {
}





void ov44_0222F98C(void) {
    // ldr r1, _0222F99C ; =0x00000B68
    // ldr r0, [r0, r1]
    // cmp r0, #0
    // beq _0222F998
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // _0222F99C: .word 0x00000B68
    // TODO: decompile
}





void ov44_0222F9A0(void) {
    // add r0, r5, r0
    memset(0x00000B1C, 0, (0x92 << 2));
    GfGfx_EngineBTogglePlanes(1, 1);
    GfGfx_EngineBTogglePlanes(2, 1);
    GfGfx_EngineBTogglePlanes(4, 1);
    GfGfx_EngineBTogglePlanes(8, 0);
    // str r4, [sp]
    TouchHitboxController_Create(ov44_022354E8, 8, ov44_0222FC84, r5);
    // str r0, [r5, r1]
    MessageFormat_New(r4, 0x00000B68);
    // str r0, [r5, r1]
    ov44_0222FCBC(r5, r6, r4);
    // str r1, [r5, r0]
    ov44_02230090(r5, 1);
    ov44_022300C8(r5);
}





void ov44_0222FA28(void) {
    ov44_0222F98C();
    ov44_0222FF30(r4);
    TouchHitboxController_Destroy(*((u32*)(r4 + 0x00000B68)));
    // str r1, [r4, r0]
    // sub r0, #0x4c
    MessageFormat_Delete(*((u32*)(r4 + 0x00000B68)), 0);
    // str r1, [r4, r0]
    GfGfx_EngineBTogglePlanes(1, 1);
    GfGfx_EngineBTogglePlanes(2, 0);
    GfGfx_EngineBTogglePlanes(4, 0);
    GfGfx_EngineBTogglePlanes(8, 0);
}





void ov44_0222FA80(void) {
    // add r0, r4, r0
    ov44_02231C8C((0xe3 << 2));
    // add r0, r4, r0
    ov44_02231CE8((0xe3 << 2));
    // strb r1, [r4, r0]
    PlaySE(0x000005E1, (r0 - 3), *((u8*)(r4 + 0x00000B8C)));
    ov44_02230090(r4);
    // strb r1, [r4, r0]
    // str r1, [r4, r0]
    // strb r1, [r4, r0]
    // strb r1, [r4, r0]
    ov44_02230234(r4, r6);
    ov44_02231720(r4);
    // sub r0, #0x27
    TouchHitboxController_IsTriggered(*((u32*)(r4 + 0x00000B8F)), *((u8*)(r4 + 0x00000B8F)));
    ov44_022313C8(r4);
    ov44_022300C8(r4);
    // strb r1, [r4, r0]
    // add r0, #0xfe
    ov44_02231788(r4, 0);
    ov44_0222FBC8(r4, r0);
    // strb r2, [r4, r0]
    // strb r0, [r4, r1]
    // strb r0, [r4, r2]
    // strb r3, [r4, r2]
    // str r3, [r4, r2]
    // strb r0, [r4, r1]
    ov44_02231754(r4, (0x00000B8D + 2), (0x00000B8D + 7), 1);
    PlaySE(0x000005DD);
    PlaySE(0x000005DD);
    ov44_0222FC3C(r4, r5);
    ov44_02230234(r4, r6);
}





void ov44_0222FBA0(void) {
    ov44_022300C8(*((u8*)(r0 + (0x00000B8F + 2))), *((u8*)(r0 + 0x00000B8F)));
    // strb r1, [r4, r0]
}





void ov44_0222FBC8(void) {
    // tst r0, r3
    // tst r0, r2
}





void ov44_0222FC00(void) {
    // ldr r1, _0222FC08 ; =0x00000B8D
    // ldrb r0, [r0, r1]
    // bx lr
    // nop
    // _0222FC08: .word 0x00000B8D
    // TODO: decompile
}





void ov44_0222FC0C(void) {
    ov44_0222F98C();
    // strb r2, [r4, r0]
    // strb r2, [r4, r1]
    // strb r2, [r4, r1]
    // strb r2, [r4, r1]
    // str r2, [r4, r0]
    ov44_02231754(r4, (0x00000B8D + 4), 1);
}





void ov44_0222FC3C(void) {
    // ldrsb r0, [r4, r0]
    // strb r1, [r4, r0]
    // ldrsb r3, [r4, r2]
    // add r0, r4, r2
    // strb r3, [r0]
    // ldrsb r2, [r4, r2]
    // ldrsb r2, [r0, r2]
    // add r1, r2, r1
    // strb r1, [r0]
}





void ov44_0222FC84(void) {
    // add r0, r0, r3
    // add r5, r2, r0
    // sub r3, #0x20
    // strb r1, [r2, r0]
    PlaySE(0x000005DD, (r0 + 1), *((u8*)(r2 + (0x00000B8C + 1))));
}





void ov44_0222FCBC(void) {
    // str r1, [sp, #0x14]
    // str r2, [sp, #0x18]
    BgClearTilemapBufferAndCommit(*((u32*)(r0 + (0x57 << 2))), 4);
    // str r0, [sp]
    // ldr r0, [sp, #0x18]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x14]
    GfGfxLoader_GXLoadPalFromOpenNarc(0x80, 0x11, 4, 0);
    // str r0, [sp]
    // ldr r0, [sp, #0x18]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x14]
    GfGfxLoader_GXLoadPalFromOpenNarc(0xa0, 0x14, 4, 0x80);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x18]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x14]
    GfGfxLoader_LoadCharDataFromOpenNarc(0, 0x10, *((u32*)(r7 + (0x57 << 2))), 4);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x18]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x14]
    GfGfxLoader_LoadCharDataFromOpenNarc(0, 0x13, *((u32*)(r7 + (0x57 << 2))), 6);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x18]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x14]
    GfGfxLoader_LoadScrnDataFromOpenNarc(0, 0x12, *((u32*)(r7 + (0x57 << 2))), 4);
    // ldr r0, [sp, #0x18]
    // str r0, [sp]
    // ldr r0, [sp, #0x14]
    // add r3, r7, r3
    GfGfxLoader_GetScrnDataFromOpenNarc(0x15, 0, 0x00000B24);
    // str r0, [r7, r1]
    ov44_0222FFB4(*((u32*)(r7 + ((0xb2 << 4) + 4))), 0x30);
    // add r5, r7, r0
    // ldr r0, [sp, #0x18]
    // str r0, [sp]
    // ldr r0, [sp, #0x14]
    // add r1, #0x16
    GfGfxLoader_GetScrnDataFromOpenNarc(0x00000B44, 0, 0, r5);
    // str r0, [r4, r1]
    // add r0, #0x1c
    ov44_0222FFB4(*((u32*)(r4 + 0x00000B28)), 0x30);
    // ldr r0, [sp, #0x18]
    // str r0, [sp]
    // ldr r0, [sp, #0x14]
    // add r3, r7, r3
    GfGfxLoader_GetScrnDataFromOpenNarc(0x1d, 0, 0x00000B64);
    // str r0, [r7, r1]
    ov44_0222FFB4(*((u32*)(r7 + ((0xb6 << 4) + 4))), 0x30);
    // ldr r2, [sp, #0x18]
    LoadFontPal1(4, (0x1e << 4));
    // str r0, [sp, #0x1c]
    // add r0, r7, r1
    // str r0, [sp, #0x30]
    // add r1, #0x80
    // str r0, [sp, #0x2c]
    // add r0, r7, r1
    // str r0, [sp, #0x28]
    // ldr r0, [sp, #0x1c]
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #0x30]
    InitWindow(1, 0x00000B98);
    // ldr r0, [sp, #0x1c]
    // sub r1, r1, r2
    // ror r1, r0
    // add r1, r2, r1
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x1c]
    // asr r0, r0, #1
    // ldr r0, [sp, #0x1c]
    // add r1, r0, r1
    // asr r0, r1, #2
    // ldr r0, [sp, #0x20]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x2c]
    // str r0, [sp, #0x10]
    // ldr r1, [sp, #0x30]
    AddWindowParameterized(*((u32*)(r7 + (0x57 << 2))), ((6 * (r0 << 0x1e)) >> 0x1e), 5, (((((6 * (r0 << 0x1e)) << 4) + 4) << 0x18) >> 0x18));
    // ldr r0, [sp, #0x30]
    FillWindowPixelBuffer(0);
    // ldr r0, [sp, #0x30]
    ScheduleWindowCopyToVram();
    // ldr r0, [sp, #0x20]
    // ldr r4, [sp, #0x28]
    // str r0, [sp, #0x34]
    InitWindow(r4);
    // ldr r0, [sp, #0x34]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x24]
    // add r1, r6, r0
    // add r0, #0xda
    // str r0, [sp, #0x10]
    AddWindowParameterized(*((u32*)(r7 + (0x57 << 2))), r4, 5, ((r5 << 0x18) >> 0x18));
    FillWindowPixelBuffer(r4, 0);
    ScheduleWindowCopyToVram(r4);
    // add r4, #0x10
    // add r5, #0xc
    // ldr r0, [sp, #0x30]
    // add r0, #0x10
    // str r0, [sp, #0x30]
    // ldr r0, [sp, #0x2c]
    // add r0, #0x1b
    // str r0, [sp, #0x2c]
    // ldr r0, [sp, #0x28]
    // add r0, #0x20
    // str r0, [sp, #0x28]
    // ldr r0, [sp, #0x24]
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #0x1c]
    // str r0, [sp, #0x1c]
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r3, [sp, #0x10]
    // add r1, r7, r1
    AddWindowParameterized(*((u32*)(r7 + (0x57 << 2))), 0x00000D18, 7, 1);
    // add r0, r7, r0
    FillWindowPixelBuffer(0x00000D18, 0);
    // add r0, r7, r0
    ScheduleWindowCopyToVram(0x00000D18);
    // ldr r1, [sp, #0x14]
    // ldr r2, [sp, #0x18]
    ov44_02231420(r7);
}





void ov44_0222FF30(void) {
    // str r0, [sp]
    ov44_022316B0();
    // str r0, [sp, #4]
    // ldr r0, [sp]
    // add r7, r0, r1
    // add r1, #0x80
    // add r6, r0, r1
    RemoveWindow(r7, 0x00000B98);
    RemoveWindow(r6);
    // add r5, #0x10
    // ldr r0, [sp, #4]
    // add r7, #0x10
    // add r6, #0x20
    // str r0, [sp, #4]
    // ldr r0, [sp]
    // add r0, r0, r1
    RemoveWindow((r0 + 1), 0x00000D18);
    // ldr r0, [sp]
    Heap_Free(*((u32*)(r0 + (0xb2 << 4))), (0xb2 << 4));
    // ldr r4, [sp]
    Heap_Free(*((u32*)(r4 + 0x00000B28)));
    // ldr r0, [sp]
    Heap_Free(*((u32*)(r0 + (0xb6 << 4))), (0xb6 << 4));
}





void ov44_0222FFB4(void) {
    // add r1, #0xc
    // mov ip, r1
    // mov r4, ip
    // add r4, r4, r6
    // add r6, r6, r5
    // strh r6, [r4]
    // add r3, r3, r2
}





void ov44_0222FFF4(void) {
    GF_AssertFail();
    GF_AssertFail();
    GF_AssertFail();
    // add r1, r5, r6
    // strb r4, [r1, r0]
    // add r0, #0x26
    // strb r1, [r5, r0]
}





void ov44_02230028(void) {
}





void ov44_02230048(void) {
}





void ov44_02230060(void) {
    ov44_02230234(0x00000B8F, *((u8*)(r0 + 0x00000B8F)));
    // str r3, [r0, r1]
    ov44_022300C8((r2 + 5), 1);
}





void ov44_02230080(void) {
    // str r2, [r0, r1]
    // strb r2, [r0, r1]
}





void ov44_02230090(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BgTilemapRectChangePalette(*((u32*)(r0 + (0x57 << 2))), 4, 0, 0);
    ScheduleBgTilemapBufferTransfer(*((u32*)(r4 + (0x57 << 2))), 4);
}





void ov44_022300C8(void) {
    // str r2, [r6, r0]
    // str r0, [sp, #0x18]
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r2, [sp, #0xc]
    FillBgTilemapRect(*((u32*)(r0 + (0x57 << 2))), 6, 0, 0);
    // str r0, [sp, #0x18]
    // add r0, r6, r1
    // add r1, #0x80
    // str r0, [sp, #0x14]
    // add r0, r6, r1
    // str r0, [sp, #0x10]
    // sub r0, #0x21
    // add r1, r7, r1
    // add r1, r6, r4
    sub_0202C090(*((u32*)r6), (((*((u8*)(r6 + 0x00000B8C)) << 3) + 1) - 1), 8);
    // str r0, [sp, #0x1c]
    // str r0, [sp, #0x1c]
    // str r0, [sp, #0x1c]
    // asr r0, r7, #1
    // add r0, r7, r0
    // asr r2, r0, #2
    // sub r1, r1, r3
    // ror r1, r0
    // add r0, r3, r1
    // mov ip, r0
    // ldr r0, [sp, #0x18]
    // mov r2, ip
    // ldr r3, [sp, #0x1c]
    // str r0, [sp]
    ov44_02231148(r6, ((r2 << 0x1c) >> 0x18), (((6 * r2) << 0x18) >> 0x18), (((6 * r2) << 0x18) >> 0x18));
    // ldr r0, [sp, #0x1c]
    // ldr r1, [sp, #0x14]
    // str r7, [sp]
    ov44_022312B8(r6, r4, r5);
    // ldr r1, [sp, #0x10]
    // str r7, [sp]
    ov44_02231344(r6, r4, r5);
    // ldr r0, [sp, #0x14]
    FillWindowPixelBuffer(0);
    // ldr r0, [sp, #0x14]
    ScheduleWindowCopyToVram();
    // ldr r5, [sp, #0x10]
    FillWindowPixelBuffer(r5, 0);
    ScheduleWindowCopyToVram(r5);
    // add r5, #0x10
    // ldr r0, [sp, #0x14]
    // add r0, #0x10
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x10]
    // add r0, #0x20
    // str r0, [sp, #0x10]
    ScheduleBgTilemapBufferTransfer(*((u32*)(r6 + (0x57 << 2))), 6);
    GfGfx_EngineBTogglePlanes(2, 1);
    GfGfx_EngineBTogglePlanes(8, 0);
}





void ov44_02230234(void) {
    sub_0202C090(*((u32*)r0), (*((u8*)(r0 + 0x00000B8D)) - 1), 8);
    // ldrsb r1, [r5, r0]
    // sub r0, #0x4c
    // add r1, r5, r1
    // add r2, #0xc
    BG_LoadScreenTilemapData(*((u32*)(r5 + (0x57 << 2))), 6, *((u32*)((r1 << 2) + (0xb9 << 4))), *((u32*)(*((u32*)((r1 << 2) + (0xb9 << 4))) + 8)));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BgTilemapRectChangePalette(*((u32*)(r5 + (0x57 << 2))), 6, 0, 0);
    BgClearTilemapBufferAndCommit(*((u32*)(r5 + (0x57 << 2))), 7);
    ov44_02229EE0(r5);
    ov44_02230FE8(r5);
    // add r0, r5, r0
    FillWindowPixelBuffer(0x00000D18, 0);
    // ldrsb r2, [r5, r2]
    // blx r2
    ScheduleBgTilemapBufferTransfer(*((u32*)(r5 + (0x57 << 2))), 6, *((u32*)(ov44_02236680 + ((0xb9 << 4) << 2))), ((0xb9 << 4) << 2));
    // add r0, r5, r0
    ScheduleWindowCopyToVram(0x00000D18);
    GfGfx_EngineBTogglePlanes(2, 0);
    GfGfx_EngineBTogglePlanes(8, 1);
}





void ov44_02230300(void) {
    sub_0202C090(*((u32*)r0), (*((u8*)(r0 + 0x00000B8D)) - 1), 8);
    // str r0, [sp, #0x14]
    ov44_02231918(r5, r4);
    // add r2, #8
    ReadMsgDataIntoString(*((u32*)(r5 + (0x5a << 2))), 0x2a, *((u32*)(r5 + (0x5a << 2))));
    // sub r2, #8
    StringExpandPlaceholders(*((u32*)(r5 + 0x00000B1C)), *((u32*)(r5 + (0x5e << 2))), *((u32*)(r5 + (0x5e << 2))));
    // str r0, [sp]
    // str r2, [sp, #4]
    // ldr r0, [sp, #0x14]
    // add r2, #0x79
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, r5, r0
    AddTextPrinterParameterizedWithColor(0x00000D18, 1, *((u32*)(r5 + 0xff)), 0x20);
    ov44_02231958(r5, r4);
    // str r0, [sp, #0x10]
    // ldr r1, [sp, #0x10]
    ov44_02229F00(r5);
    // add r1, sp, #0x14
    ov44_0223120C();
    // add r2, #8
    ReadMsgDataIntoString(*((u32*)(r5 + (0x5a << 2))), r0, *((u32*)(r5 + (0x5a << 2))));
    // str r0, [sp]
    // str r2, [sp, #4]
    // ldr r0, [sp, #0x14]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r2, #0x71
    // add r0, r5, r0
    AddTextPrinterParameterizedWithColor(0x00000D18, 0, *((u32*)(r5 + 0xff)), 0x68);
    PlayerProfile_New(0x35);
    sub_0202C298(*((u32*)r5), r4);
    Save_Profile_PlayerName_Set(r6, r0);
    BufferPlayersName(*((u32*)(r5 + 0x00000B1C)), 0, r6);
    Heap_Free(r6);
    // add r2, #0x10
    ReadMsgDataIntoString(*((u32*)(r5 + (0x5a << 2))), 0x2b, *((u32*)(r5 + (0x5a << 2))));
    // str r0, [sp]
    // str r2, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r2, #0x79
    // add r0, r5, r0
    AddTextPrinterParameterizedWithColor(0x00000D18, 0, *((u32*)(r5 + 0xff)), 8);
    // add r2, #0xda
    ReadMsgDataIntoString(*((u32*)(r5 + (0x5a << 2))), 0x96, *((u32*)(r5 + 0x96)));
    // sub r2, #8
    StringExpandPlaceholders(*((u32*)(r5 + 0x00000B1C)), *((u32*)(r5 + (0x5e << 2))), *((u32*)(r5 + (0x5e << 2))));
    FontID_String_GetWidth(0, *((u32*)(r5 + (0x5e << 2))), 0);
    // sub r3, r1, r0
    // str r0, [sp]
    // str r2, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r2, #0x79
    // add r0, r5, r0
    AddTextPrinterParameterizedWithColor(0x00000D18, 0, *((u32*)(r5 + 0xff)));
    // add r2, #0x10
    ReadMsgDataIntoString(*((u32*)(r5 + (0x5a << 2))), 0x2c, *((u32*)(r5 + (0x5a << 2))));
    // str r0, [sp]
    // str r2, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r2, #0x79
    // add r0, r5, r0
    AddTextPrinterParameterizedWithColor(0x00000D18, 0, *((u32*)(r5 + 0xff)), 8);
    sub_0202C090(*((u32*)r5), r4, 1);
    // str r0, [sp]
    // str r0, [sp, #4]
    BufferIntegerAsString(*((u32*)(r5 + 0x00000B1C)), 0, r0, 4);
    // add r2, #8
    ReadMsgDataIntoString(*((u32*)(r5 + (0x5a << 2))), 0x2d, *((u32*)(r5 + (0x5a << 2))));
    // sub r2, #8
    StringExpandPlaceholders(*((u32*)(r5 + 0x00000B1C)), *((u32*)(r5 + (0x5e << 2))), *((u32*)(r5 + (0x5e << 2))));
    // str r0, [sp]
    // str r2, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r2, #0x79
    // add r0, r5, r0
    AddTextPrinterParameterizedWithColor(0x00000D18, 0, *((u32*)(r5 + 0xff)), 0x78);
    sub_0202C090(*((u32*)r5), r4, 2);
    // str r0, [sp]
    // str r0, [sp, #4]
    BufferIntegerAsString(*((u32*)(r5 + 0x00000B1C)), 0, r0, 4);
    ReadMsgDataIntoString(*((u32*)(r5 + (0x5a << 2))), 0x2e, *((u32*)(r5 + (0x2e << 3))));
    // sub r2, #8
    StringExpandPlaceholders(*((u32*)(r5 + 0x00000B1C)), *((u32*)(r5 + (0x5e << 2))), *((u32*)(r5 + (0x5e << 2))));
    FontID_String_GetWidth(0, *((u32*)(r5 + (0x5e << 2))), 0);
    // sub r3, r1, r0
    // str r0, [sp]
    // str r2, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r2, #0x79
    // add r0, r5, r0
    AddTextPrinterParameterizedWithColor(0x00000D18, 0, *((u32*)(r5 + 0xff)));
    ReadMsgDataIntoString(*((u32*)(r5 + (0x5a << 2))), 0x2f, *((u32*)(r5 + (0x2f << 3))));
    // str r0, [sp]
    // str r2, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r2, #0x79
    // add r0, r5, r0
    AddTextPrinterParameterizedWithColor(0x00000D18, 0, *((u32*)(r5 + 0xff)), 8);
    sub_0202C090(*((u32*)r5), r4, 3);
    // str r0, [sp]
    // str r0, [sp, #4]
    BufferIntegerAsString(*((u32*)(r5 + 0x00000B1C)), 0, r0, 4);
    // add r2, #8
    ReadMsgDataIntoString(*((u32*)(r5 + (0x5a << 2))), 0x30, *((u32*)(r5 + (0x5a << 2))));
    // sub r2, #8
    StringExpandPlaceholders(*((u32*)(r5 + 0x00000B1C)), *((u32*)(r5 + (0x5e << 2))), *((u32*)(r5 + (0x5e << 2))));
    FontID_String_GetWidth(0, *((u32*)(r5 + (0x5e << 2))), 0);
    // sub r3, r1, r0
    // str r0, [sp]
    // str r2, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r2, #0x79
    // add r0, r5, r0
    AddTextPrinterParameterizedWithColor(0x00000D18, 0, *((u32*)(r5 + 0xff)));
    ov44_02229EF8(r5);
    // add r2, #0x10
    ReadMsgDataIntoString(*((u32*)(r5 + (0x5a << 2))), 0x31, *((u32*)(r5 + (0x5a << 2))));
    // str r0, [sp]
    // str r2, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r2, #0x79
    // add r0, r5, r0
    AddTextPrinterParameterizedWithColor(0x00000D18, 0, *((u32*)(r5 + 0xff)), 8);
    sub_0202C090(*((u32*)r5), r4, 9);
    // str r0, [sp]
    // str r0, [sp, #4]
    BufferIntegerAsString(*((u32*)(r5 + 0x00000B1C)), 0, r0, 4);
    // add r2, #8
    ReadMsgDataIntoString(*((u32*)(r5 + (0x5a << 2))), 0x32, *((u32*)(r5 + (0x5a << 2))));
    // sub r2, #8
    StringExpandPlaceholders(*((u32*)(r5 + 0x00000B1C)), *((u32*)(r5 + (0x5e << 2))), *((u32*)(r5 + (0x5e << 2))));
    FontID_String_GetWidth(0, *((u32*)(r5 + (0x5e << 2))), 0);
    // sub r3, r1, r0
    // str r0, [sp]
    // str r2, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r2, #0x79
    // add r0, r5, r0
    AddTextPrinterParameterizedWithColor(0x00000D18, 0, *((u32*)(r5 + 0xff)));
    // add r2, #0x10
    ReadMsgDataIntoString(*((u32*)(r5 + (0x5a << 2))), 0x33, *((u32*)(r5 + (0x5a << 2))));
    // str r0, [sp]
    // str r2, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r2, #0x79
    // add r0, r5, r0
    AddTextPrinterParameterizedWithColor(0x00000D18, 0, *((u32*)(r5 + 0xff)), 8);
    sub_0202C090(*((u32*)r5), r4, 6);
    // str r0, [sp]
    // str r0, [sp, #4]
    BufferIntegerAsString(*((u32*)(r5 + 0x00000B1C)), 2, r0, 2);
    sub_0202C090(*((u32*)r5), r4, 4);
    // str r1, [sp]
    // str r0, [sp, #4]
    BufferIntegerAsString(*((u32*)(r5 + 0x00000B1C)), 0, r0, 4);
    sub_0202C090(*((u32*)r5), r4, 5);
    BufferMonthNameAbbr(*((u32*)(r5 + 0x00000B1C)), 1, r0);
    // add r2, #8
    ReadMsgDataIntoString(*((u32*)(r5 + (0x5a << 2))), 0x4a, *((u32*)(r5 + (0x5a << 2))));
    // sub r2, #8
    StringExpandPlaceholders(*((u32*)(r5 + 0x00000B1C)), *((u32*)(r5 + (0x5e << 2))), *((u32*)(r5 + (0x5e << 2))));
    FontID_String_GetWidth(0, *((u32*)(r5 + (0x5e << 2))), 0);
    // sub r3, r1, r0
    // str r0, [sp]
    // str r2, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r2, #0x79
    // add r0, r5, r0
    AddTextPrinterParameterizedWithColor(0x00000D18, 0, *((u32*)(r5 + 0xff)));
    // str r3, [sp]
    // str r7, [sp, #4]
    // add r1, r5, r1
    ov44_0222AC54(*((u32*)(r5 + (0x57 << 2))), 0x00000B0C, 6, 2);
    // ldr r0, [sp, #0x10]
    // add r0, #0x21
    // str r0, [sp, #0x10]
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // add r1, r5, r1
    ov44_0222ABDC(*((u32*)(r5 + (0x57 << 2))), 0x00000B0C, 6, 0x1c);
}





void ov44_022307E0(void) {
    // add r2, #0x10
    ReadMsgDataIntoString(*((u32*)(r0 + (0x5a << 2))), 0x34, *((u32*)(r0 + (0x5a << 2))));
    // str r1, [sp]
    // str r2, [sp, #4]
    // add r2, #0x79
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r0, r5, r0
    AddTextPrinterParameterizedWithColor(0x00000D18, 0, *((u32*)(r5 + 0xff)), 8);
    ov44_02231084(r5, *((u32*)(r5 + (0x5e << 2))), 0, r4);
    // str r0, [sp]
    // str r2, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r2, #0x79
    // add r0, r5, r0
    AddTextPrinterParameterizedWithColor(0x00000D18, 0, *((u32*)(r5 + 0xff)), 8);
    // str r0, [sp]
    // str r0, [sp, #4]
    ov44_02231054(r5, 0x41, 0x71, r4);
    // add r2, #0x10
    ReadMsgDataIntoString(*((u32*)(r5 + (0x5a << 2))), 0x3b, *((u32*)(r5 + (0x5a << 2))));
    // str r0, [sp]
    // str r2, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r2, #0x79
    // add r0, r5, r0
    AddTextPrinterParameterizedWithColor(0x00000D18, 0, *((u32*)(r5 + 0xff)), 8);
    // str r0, [sp]
    // str r0, [sp, #4]
    ov44_02231054(r5, 0x41, 0x70, r4);
}





void ov44_022308B0(void) {
    // add r2, #0x10
    ReadMsgDataIntoString(*((u32*)(r0 + (0x5a << 2))), 0x35, *((u32*)(r0 + (0x5a << 2))));
    // str r1, [sp]
    // str r2, [sp, #4]
    // add r2, #0x79
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r0, r5, r0
    AddTextPrinterParameterizedWithColor(0x00000D18, 0, *((u32*)(r5 + 0xff)), 8);
    // add r2, #0x10
    ReadMsgDataIntoString(*((u32*)(r5 + (0x5a << 2))), 0x3c, *((u32*)(r5 + (0x5a << 2))));
    // str r0, [sp]
    // str r2, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r2, #0x79
    // add r0, r5, r0
    AddTextPrinterParameterizedWithColor(0x00000D18, 0, *((u32*)(r5 + 0xff)), 8);
    // add r2, #0x10
    ReadMsgDataIntoString(*((u32*)(r5 + (0x5a << 2))), 0x3e, *((u32*)(r5 + (0x5a << 2))));
    FontID_String_GetWidth(0, *((u32*)(r5 + (0x5e << 2))), 0);
    // sub r3, r1, r0
    // str r0, [sp]
    // str r2, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r2, #0x79
    // add r0, r5, r0
    AddTextPrinterParameterizedWithColor(0x00000D18, 0, *((u32*)(r5 + 0xff)));
    ov44_02231084(r5, *((u32*)(r5 + (0x5e << 2))), 1, r4);
    // str r0, [sp]
    // str r2, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r2, #0x79
    // add r0, r5, r0
    AddTextPrinterParameterizedWithColor(0x00000D18, 0, *((u32*)(r5 + 0xff)), 8);
    // str r0, [sp]
    // str r0, [sp, #4]
    ov44_02231054(r5, 0x41, 0x73, r4);
    // str r0, [sp]
    // str r0, [sp, #4]
    ov44_02231054(r5, 0x42, 0x75, r4);
    // add r2, #0x10
    ReadMsgDataIntoString(*((u32*)(r5 + (0x5a << 2))), 0x3b, *((u32*)(r5 + (0x5a << 2))));
    // str r0, [sp]
    // str r2, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r2, #0x79
    // add r0, r5, r0
    AddTextPrinterParameterizedWithColor(0x00000D18, 0, *((u32*)(r5 + 0xff)), 8);
    // str r0, [sp]
    // str r0, [sp, #4]
    ov44_02231054(r5, 0x41, 0x72, r4);
    // str r0, [sp]
    // str r0, [sp, #4]
    ov44_02231054(r5, 0x42, 0x74, r4);
    // add r2, #0x10
    ReadMsgDataIntoString(*((u32*)(r5 + (0x5a << 2))), 0x3d, *((u32*)(r5 + (0x5a << 2))));
    // str r0, [sp]
    // str r2, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r2, #0x79
    // add r0, r5, r0
    AddTextPrinterParameterizedWithColor(0x00000D18, 0, *((u32*)(r5 + 0xff)), 8);
    // add r2, #0x10
    ReadMsgDataIntoString(*((u32*)(r5 + (0x5a << 2))), 0x3e, *((u32*)(r5 + (0x5a << 2))));
    FontID_String_GetWidth(0, *((u32*)(r5 + (0x5e << 2))), 0);
    // sub r3, r1, r0
    // str r0, [sp]
    // str r2, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r2, #0x79
    // add r0, r5, r0
    AddTextPrinterParameterizedWithColor(0x00000D18, 0, *((u32*)(r5 + 0xff)));
    ov44_02231084(r5, *((u32*)(r5 + (0x5e << 2))), 2, r4);
    // str r0, [sp]
    // str r2, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r2, #0x79
    // add r0, r5, r0
    AddTextPrinterParameterizedWithColor(0x00000D18, 0, *((u32*)(r5 + 0xff)), 8);
    // str r0, [sp]
    // str r0, [sp, #4]
    ov44_02231054(r5, 0x41, 0x77, r4);
    // str r0, [sp]
    // str r0, [sp, #4]
    ov44_02231054(r5, 0x42, 0x79, r4);
    // add r2, #0x10
    ReadMsgDataIntoString(*((u32*)(r5 + (0x5a << 2))), 0x3b, *((u32*)(r5 + (0x5a << 2))));
    // str r0, [sp]
    // str r2, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r2, #0x79
    // add r0, r5, r0
    AddTextPrinterParameterizedWithColor(0x00000D18, 0, *((u32*)(r5 + 0xff)), 8);
    // str r0, [sp]
    // str r0, [sp, #4]
    ov44_02231054(r5, 0x41, 0x76, r4);
    // str r0, [sp]
    // str r0, [sp, #4]
    ov44_02231054(r5, 0x42, 0x78, r4);
}





void ov44_02230B2C(void) {
    // add r2, #0x10
    ReadMsgDataIntoString(*((u32*)(r0 + (0x5a << 2))), 0x36, *((u32*)(r0 + (0x5a << 2))));
    // str r1, [sp]
    // str r2, [sp, #4]
    // add r2, #0x79
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r0, r5, r0
    AddTextPrinterParameterizedWithColor(0x00000D18, 0, *((u32*)(r5 + 0xff)), 8);
    // add r2, #0x10
    ReadMsgDataIntoString(*((u32*)(r5 + (0x5a << 2))), 0x3f, *((u32*)(r5 + (0x5a << 2))));
    FontID_String_GetWidth(0, *((u32*)(r5 + (0x5e << 2))), 0);
    // sub r3, r0, r1
    // str r0, [sp]
    // str r2, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r2, #0x79
    // add r0, r5, r0
    AddTextPrinterParameterizedWithColor(0x00000D18, 0, *((u32*)(r5 + 0xff)));
    ov44_02231084(r5, *((u32*)(r5 + (0x5e << 2))), 3, r4);
    // str r0, [sp]
    // str r2, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r2, #0x79
    // add r0, r5, r0
    AddTextPrinterParameterizedWithColor(0x00000D18, 0, *((u32*)(r5 + 0xff)), 8);
    // str r0, [sp]
    // str r0, [sp, #4]
    ov44_02231054(r5, 0x44, 0x87, r4);
    // str r0, [sp]
    // str r0, [sp, #4]
    ov44_02231054(r5, 0x43, 0x88, r4);
    // add r2, #0x10
    ReadMsgDataIntoString(*((u32*)(r5 + (0x5a << 2))), 0x3b, *((u32*)(r5 + (0x5a << 2))));
    // str r0, [sp]
    // str r2, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r2, #0x79
    // add r0, r5, r0
    AddTextPrinterParameterizedWithColor(0x00000D18, 0, *((u32*)(r5 + 0xff)), 8);
    // str r0, [sp]
    // str r0, [sp, #4]
    ov44_02231054(r5, 0x44, 0x86, r4);
    // str r0, [sp]
    // str r0, [sp, #4]
    ov44_02231054(r5, 0x43, 0x8a, r4);
}





void ov44_02230C68(void) {
    Save_Frontier_GetStatic(*((u32*)(r0 + (0x16 << 4))));
    // add r2, #0x10
    ReadMsgDataIntoString(*((u32*)(r5 + (0x5a << 2))), 0x37, *((u32*)(r5 + (0x5a << 2))));
    // str r1, [sp]
    // str r2, [sp, #4]
    // add r2, #0x79
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r0, r5, r0
    AddTextPrinterParameterizedWithColor(0x00000D18, 0, *((u32*)(r5 + 0xff)), 8);
    FrontierSave_GetStat(r7, 0x7c, r4);
    GetSpeciesName(r6);
    FontID_String_GetWidth(0, r0, 0);
    // sub r3, r0, r1
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r5, r0
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(0x00000D18, 0, r6);
    String_Delete(r6);
    ov44_02231084(r5, *((u32*)(r5 + (0x5e << 2))), 4, r4);
    // str r0, [sp]
    // str r2, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r2, #0x79
    // add r0, r5, r0
    AddTextPrinterParameterizedWithColor(0x00000D18, 0, *((u32*)(r5 + 0xff)), 8);
    // str r0, [sp]
    // str r0, [sp, #4]
    ov44_02231054(r5, 0x41, 0x7b, r4);
    // add r2, #0x10
    ReadMsgDataIntoString(*((u32*)(r5 + (0x5a << 2))), 0x3b, *((u32*)(r5 + (0x5a << 2))));
    // str r0, [sp]
    // str r2, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r2, #0x79
    // add r0, r5, r0
    AddTextPrinterParameterizedWithColor(0x00000D18, 0, *((u32*)(r5 + 0xff)), 8);
    // str r0, [sp]
    // str r0, [sp, #4]
    ov44_02231054(r5, 0x41, 0x7a, r4);
}





void ov44_02230D8C(void) {
    // add r2, #0x10
    ReadMsgDataIntoString(*((u32*)(r0 + (0x5a << 2))), 0x38, *((u32*)(r0 + (0x5a << 2))));
    // str r1, [sp]
    // str r2, [sp, #4]
    // add r2, #0x79
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r0, r5, r0
    AddTextPrinterParameterizedWithColor(0x00000D18, 0, *((u32*)(r5 + 0xff)), 8);
    ov44_02231084(r5, *((u32*)(r5 + (0x5e << 2))), 5, r4);
    // str r0, [sp]
    // str r2, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r2, #0x79
    // add r0, r5, r0
    AddTextPrinterParameterizedWithColor(0x00000D18, 0, *((u32*)(r5 + 0xff)), 8);
    // str r0, [sp]
    // str r0, [sp, #4]
    ov44_02231054(r5, 0x45, 0x8f, r4);
    // add r2, #0x10
    ReadMsgDataIntoString(*((u32*)(r5 + (0x5a << 2))), 0x3b, *((u32*)(r5 + (0x5a << 2))));
    // str r0, [sp]
    // str r2, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r2, #0x79
    // add r0, r5, r0
    AddTextPrinterParameterizedWithColor(0x00000D18, 0, *((u32*)(r5 + 0xff)), 8);
    // str r0, [sp]
    // str r0, [sp, #4]
    ov44_02231054(r5, 0x45, 0x8e, r4);
}





void ov44_02230E5C(void) {
    sub_0202C6F4(*((u32*)(r0 + (0x16 << 4))));
    // add r2, #0x10
    ReadMsgDataIntoString(*((u32*)(r5 + (0x5a << 2))), 0x46, *((u32*)(r5 + (0x5a << 2))));
    // str r1, [sp]
    // str r2, [sp, #4]
    // add r2, #0x79
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r0, r5, r0
    AddTextPrinterParameterizedWithColor(0x00000D18, 0, *((u32*)(r5 + 0xff)), 8);
    BufferWiFiPlazaActivityName(*((u32*)(r5 + 0x00000B1C)), 0, 0);
    // add r2, #8
    ReadMsgDataIntoString(*((u32*)(r5 + (0x5a << 2))), 0x47, *((u32*)(r5 + (0x5a << 2))));
    // sub r2, #8
    StringExpandPlaceholders(*((u32*)(r5 + 0x00000B1C)), *((u32*)(r5 + (0x5e << 2))), *((u32*)(r5 + (0x5e << 2))));
    // str r0, [sp]
    // str r2, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r2, #0x79
    // add r0, r5, r0
    AddTextPrinterParameterizedWithColor(0x00000D18, 0, *((u32*)(r5 + 0xff)), 8);
    sub_0202C090(r6, r4, 0xa);
    // str r0, [sp]
    ov44_022310C8(r5, 0x48, r0, 0xa4);
    BufferWiFiPlazaActivityName(*((u32*)(r5 + 0x00000B1C)), 0, 1);
    // add r2, #8
    ReadMsgDataIntoString(*((u32*)(r5 + (0x5a << 2))), 0x47, *((u32*)(r5 + (0x5a << 2))));
    // sub r2, #8
    StringExpandPlaceholders(*((u32*)(r5 + 0x00000B1C)), *((u32*)(r5 + (0x5e << 2))), *((u32*)(r5 + (0x5e << 2))));
    // str r0, [sp]
    // str r2, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r2, #0x79
    // add r0, r5, r0
    AddTextPrinterParameterizedWithColor(0x00000D18, 0, *((u32*)(r5 + 0xff)), 8);
    sub_0202C090(r6, r4, 0xb);
    // str r0, [sp]
    ov44_022310C8(r5, 0x48, r0, 0xa4);
    BufferWiFiPlazaActivityName(*((u32*)(r5 + 0x00000B1C)), 0, 2);
    // add r2, #8
    ReadMsgDataIntoString(*((u32*)(r5 + (0x5a << 2))), 0x47, *((u32*)(r5 + (0x5a << 2))));
    // sub r2, #8
    StringExpandPlaceholders(*((u32*)(r5 + 0x00000B1C)), *((u32*)(r5 + (0x5e << 2))), *((u32*)(r5 + (0x5e << 2))));
    // str r0, [sp]
    // str r2, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r2, #0x79
    // add r0, r5, r0
    AddTextPrinterParameterizedWithColor(0x00000D18, 0, *((u32*)(r5 + 0xff)), 8);
    sub_0202C090(r6, r4, 0xc);
    // str r1, [sp]
    ov44_022310C8(r5, 0x48, r0, 0xa4);
}





void ov44_02230FE8(void) {
    // add r2, #0x1a
    // str r7, [sp]
    // str r7, [sp, #4]
    // add r1, #0xc
    // str r1, [sp, #8]
    // str r6, [sp, #0xc]
    // str r6, [sp, #0x10]
    // str r1, [sp, #0x14]
    // str r0, [sp, #0x18]
    CopyToBgTilemapRect(*((u32*)(r0 + (0x57 << 2))), 6, ((0 << 0x18) >> 0x18), 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    BgTilemapRectChangePalette(*((u32*)(r5 + (0x57 << 2))), 6, 0x1a, 0);
}





void ov44_02231054(void) {
    // ldr r0, [sp, #0x1c]
    // ldr r3, [sp, #0x18]
    // str r0, [sp]
}





void ov44_02231084(void) {
    GF_AssertFail();
    Save_Frontier_GetStatic(*((u32*)(r5 + (0x16 << 4))));
    FrontierSave_GetStat(*((u32*)(ov44_022353D0 + (r4 << 2))), r7);
    ReadMsgDataIntoString(*((u32*)(r5 + (0x5a << 2))), 0x3a, r6);
}





void ov44_022310C8(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    BufferIntegerAsString(*((u32*)(r0 + 0x00000B1C)), 0, 4);
    // add r2, #8
    ReadMsgDataIntoString(*((u32*)(r5 + (0x5a << 2))), r6, *((u32*)(r5 + (0x5a << 2))));
    // sub r2, #8
    StringExpandPlaceholders(*((u32*)(r5 + 0x00000B1C)), *((u32*)(r5 + (0x5e << 2))), *((u32*)(r5 + (0x5e << 2))));
    FontID_String_GetWidth(0, *((u32*)(r5 + (0x5e << 2))), 0);
    // sub r3, r4, r0
    // ldr r0, [sp, #0x20]
    // str r0, [sp]
    // str r2, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r2, #0x79
    // add r0, r5, r0
    AddTextPrinterParameterizedWithColor(0x00000D18, 0, *((u32*)(r5 + 0xff)));
}





void ov44_02231148(void) {
    // str r2, [sp, #0x1c]
    // ldr r4, [sp, #0x38]
    GF_AssertFail();
    // str r0, [sp]
    // str r1, [sp, #4]
    // add r0, #0xc
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    // ldr r3, [sp, #0x1c]
    CopyToBgTilemapRect(*((u32*)(r5 + (0x57 << 2))), 6, r7);
    // str r0, [sp]
    // str r1, [sp, #4]
    // add r3, #0xc
    // add r2, r3, r2
    // str r2, [sp, #8]
    // str r2, [sp, #0xc]
    // str r2, [sp, #0x10]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    // ldr r3, [sp, #0x1c]
    CopyToBgTilemapRect(*((u32*)(r5 + (0x57 << 2))), 6, r7, *((u32*)(r5 + 0x00000B24)));
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // ldr r3, [sp, #0x1c]
    BgTilemapRectChangePalette(*((u32*)(r5 + (0x57 << 2))), 6, r7);
}





void ov44_0223120C(void) {
    // str r2, [r1]
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02231220: ; jump table
    // str r2, [r1]
    // str r2, [r1]
    // str r2, [r1]
    // str r2, [r1]
    // str r2, [r1]
}





void ov44_022312B8(void) {
    // str r2, [sp, #0x10]
    FillWindowPixelBuffer(r1, 0);
    // ldr r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // ldr r1, [sp, #0x14]
    sub_0202C090(*((u32*)r5), 8);
    // ldr r1, [sp, #0x14]
    ov44_02231918(r5);
    // add r2, #8
    ReadMsgDataIntoString(*((u32*)(r5 + (0x5a << 2))), 0x2a, *((u32*)(r5 + (0x5a << 2))));
    // sub r2, #8
    StringExpandPlaceholders(*((u32*)(r5 + 0x00000B1C)), *((u32*)(r5 + (0x5e << 2))), *((u32*)(r5 + (0x5e << 2))));
    // str r7, [sp]
    // str r2, [sp, #4]
    // str r4, [sp, #8]
    // str r3, [sp, #0xc]
    // add r2, #0x79
    AddTextPrinterParameterizedWithColor(r6, 1, *((u32*)(r5 + 0xff)), 0);
    ScheduleWindowCopyToVram(r6);
}





void ov44_02231344(void) {
    ov44_02231958((r2 - 1));
    // str r0, [sp, #0xc]
    // ldr r1, [sp, #0xc]
    ov44_02229F00(r6);
    // str r0, [sp, #8]
    FillWindowPixelBuffer(r5, 0);
    // ldr r0, [sp, #8]
    // str r0, [sp]
    // add r1, r6, r1
    ov44_0222AD34(r5, 0x00000B0C, 0, r7);
    // ldr r0, [sp, #0xc]
    // add r0, #0x21
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r1, r6, r1
    ov44_0222ACE8(r5, 0x00000B0C, 0, r7);
    ScheduleWindowCopyToVram(r5);
    // add r5, #0x10
}





void ov44_022313C8(void) {
    // strb r3, [r0, r2]
    // strb r3, [r0, r2]
    // strb r4, [r0, r2]
    // strb r2, [r0, r4]
    // strb r3, [r0, r4]
    // strb r3, [r0, r4]
    // strb r2, [r0, r1]
}





void ov44_02231420(void) {
    // str r2, [sp, #0x2c]
    // add r3, sp, #0x9c
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    GfGfx_EngineBTogglePlanes(0x10, 0, (0x12 - 1));
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x2c]
    // str r0, [sp, #8]
    AddCharResObjFromOpenNarc(*((u32*)(r5 + (0xaf << 2))), r4, 0x2b, 0);
    // str r0, [r5, r1]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x2c]
    // str r0, [sp, #0xc]
    AddPlttResObjFromOpenNarc(*((u32*)(r5 + (0xb << 6))), r4, 0x2c, 0);
    // str r0, [r5, r1]
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x2c]
    // str r0, [sp, #8]
    AddCellOrAnimResObjFromOpenNarc(*((u32*)(r5 + (0xb1 << 2))), r4, 0x29, 0);
    // str r0, [r5, r1]
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x2c]
    // str r0, [sp, #8]
    AddCellOrAnimResObjFromOpenNarc(*((u32*)(r5 + (0xb2 << 2))), r4, 0x2a, 0);
    // str r0, [r5, r1]
    // sub r1, #0xc
    sub_0200AE18(*((u32*)(r5 + 0x00000D34)), 0x00000D34);
    GF_AssertFail();
    sub_0200B00C(*((u32*)(r5 + 0x00000D2C)));
    GF_AssertFail();
    sub_0200A740(*((u32*)(r5 + 0x00000D28)));
    sub_0200A740(*((u32*)(r5 + 0x00000D2C)));
    // str r1, [sp]
    // sub r0, #0x1f
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r2, [sp, #0x14]
    // str r2, [sp, #0x18]
    // add r2, #8
    // add r3, #0xc
    // str r2, [sp, #0x1c]
    // str r2, [sp, #0x20]
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x28]
    // add r0, sp, #0x78
    CreateSpriteResourcesHeader(0, 0x1e, 0x1e, 0x1e);
    // add r4, sp, #0x9c
    // str r0, [sp, #0x34]
    // str r4, [sp, #0x30]
    // str r0, [r4]
    // add r0, sp, #0x78
    *((u32*)(r4 + 4)) = *((u32*)(r5 + (0x19 << 4)));
    // ldr r0, [sp, #0x2c]
    *((u32*)(r4 + 0x2c)) = *((u32*)(r5 + (0x19 << 4)));
    // ldr r0, [sp, #0x30]
    Sprite_CreateAffine(*((u32*)(r5 + (0x19 << 4))));
    // str r0, [r6, r1]
    Sprite_SetAnimCtrlSeq(*((u32*)(r6 + 0x00000D38)), *((u8*)r7));
    // ldr r0, [sp, #0x30]
    // add r4, #0x30
    // add r0, #0x30
    // str r0, [sp, #0x30]
    // ldr r0, [sp, #0x34]
    // str r0, [sp, #0x34]
    // ldr r1, [sp, #0x2c]
    FontID_Alloc(2);
    // add r0, sp, #0x68
    InitWindow();
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r1, sp, #0x68
    AddTextWindowTopLeftCorner(*((u32*)(r5 + (0x57 << 2))), 8, 2);
    // ldr r1, [sp, #0x2c]
    String_New(0x40);
    ReadMsgDataIntoString(*((u32*)(r5 + (0x5a << 2))), 0x49, r0);
    FontID_String_GetCenterAlignmentX(2, r4, 0, 0x40);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r0, sp, #0x68
    AddTextPrinterParameterizedWithColor(0x00010200, 2, r4, r0);
    String_Delete(r4);
    // ldr r1, [sp, #0x2c]
    // add r0, sp, #0x68
    sub_02013910();
    sub_02013948(2);
    // add r3, r5, r3
    sub_02021AC8(1, 2, 0x00000D44);
    GF_AssertFail();
    // str r0, [sp, #0x38]
    // add r0, sp, #0x68
    // str r0, [sp, #0x3c]
    // str r0, [sp, #0x40]
    SpriteTransfer_GetPaletteProxy(*((u32*)(r5 + 0x00000D2C)), 0);
    // str r0, [sp, #0x44]
    // add r0, #0xc
    // str r1, [sp, #0x48]
    // str r0, [sp, #0x4c]
    // mvn r0, r0
    // str r0, [sp, #0x50]
    // add r0, #0x18
    // str r0, [sp, #0x54]
    // str r0, [sp, #0x58]
    // str r0, [sp, #0x5c]
    // str r0, [sp, #0x60]
    // ldr r0, [sp, #0x2c]
    // str r0, [sp, #0x64]
    // add r0, sp, #0x38
    TextOBJ_Create(2, r4);
    // str r0, [r5, r1]
    sub_02013938(r4, (0xd5 << 4));
    // add r0, sp, #0x68
    RemoveWindow();
    FontID_Release(2);
    // ldr r0, [sp, #0x2c]
    // str r0, [sp]
    TouchHitboxController_Create(ov44_02235394, 3, ov44_022317F0, r5);
    // str r0, [r5, r1]
}





void ov44_022316B0(void) {
    TouchHitboxController_Destroy(*((u32*)(r0 + (0xd6 << 4))));
    TextOBJ_Destroy(*((u32*)(r5 + (0xd5 << 4))));
    // add r0, r5, r0
    sub_02021B5C(0x00000D44);
    Sprite_Delete(*((u32*)(r5 + 0x00000D38)));
    sub_0200AEB0(*((u32*)(r5 + 0x00000D28)));
    sub_0200B0A8(*((u32*)(r5 + 0x00000D2C)));
    DestroySingle2DGfxResObj(*((u32*)(r5 + (0xaf << 2))), *((u32*)(r5 + 0x00000D28)));
}





void ov44_02231720(void) {
    // str r1, [r5, r0]
    GfGfx_EngineBTogglePlanes(0x10, 1);
    // str r4, [r5, r0]
    // add r0, r5, r6
    ov44_02231800(0x00000D58, 0);
}





void ov44_02231754(void) {
    // sub r0, #0x18
    Sprite_SetDrawFlag(*((u32*)(r0 + 0x00000D54)), 1);
    TextOBJ_SetSpritesDrawFlag(*((u32*)(r4 + (0xd5 << 4))), 1);
    // str r1, [r4, r0]
    GfGfx_EngineBTogglePlanes(0x10, 0);
}





void ov44_02231788(void) {
    // str r2, [r5, r0]
    // add r0, #8
    // add r1, #0xc
    // str r2, [r5, r0]
    TouchHitboxController_IsTriggered(*((u32*)(r0 + 0x00000D54)), 0x00000D54, 0xff);
    // add r0, r5, r6
    ov44_0223183C(*((u32*)(r5 + 0x00000D54)), 0, *((u32*)(r5 + 0x00000D58)), *((u32*)(r5 + 0x00000D5C)));
}





void ov44_022317F0(void) {
    // str r0, [r2, r3]
    // str r1, [r2, r0]
}





void ov44_02231800(void) {
    // add r6, r5, r0
    Sprite_SetAnimCtrlSeq(*((u32*)(r6 + (r1 << 2))), *((u8*)(_0223535C + r1)));
    Sprite_SetAnimationFrame(*((u32*)(r6 + r7)), 4);
    // mvn r1, r1
    // add r2, #0x18
    sub_020136B4(*((u32*)(r5 + (0x8d << 2))), 0x1f, 0x1f);
}





void ov44_0223183C(void) {
    // str r0, [sp]
    // str r0, [sp, #8]
    // ldr r0, [sp]
    // add r7, r0, r1
    Sprite_GetAnimationFrame(*((u32*)(r7 + (r1 << 2))), (0x87 << 2));
    // str r0, [sp, #4]
    Sprite_SetAnimCtrlSeq(*((u32*)(r7 + r4)), *((u8*)(ov44_02235360 + r5)));
    // ldr r0, [sp, #4]
    Sprite_UpdateAnim(*((u32*)(r7 + r4)), (2 << 0xc));
    Sprite_GetAnimationFrame(*((u32*)(r7 + r4)));
    // ldr r0, [sp]
    // ldrsb r2, [r2, r4]
    // mvn r1, r1
    sub_020136B4(*((u32*)(r0 + (0x8d << 2))), 0x1f, ov44_0223536C);
    // str r0, [sp, #8]
    // str r0, [sp, #8]
    // ldr r0, [sp]
    // add r6, r0, r1
    Sprite_GetAnimationNumber(*((u32*)(r6 + (r5 << 2))), (0x87 << 2));
    Sprite_GetAnimationFrame(*((u32*)(r6 + r4)));
    // str r0, [sp, #0xc]
    Sprite_SetAnimCtrlSeq(*((u32*)(r6 + r4)), *((u8*)(_0223535C + r5)));
    // ldr r1, [sp, #0xc]
    // sub r1, r2, r1
    Sprite_SetAnimationFrame(*((u32*)(r6 + r4)), ((r1 << 0x10) >> 0x10), 4);
    Sprite_UpdateAnim(*((u32*)(r6 + r4)), (2 << 0xc));
    // ldr r0, [sp, #8]
}





void ov44_02231918(void) {
    // mvn r0, r0
    PlayerProfile_New(0x35);
    sub_0202C254(*((u32*)r5), r6);
    Save_Profile_PlayerName_Set(r4, r0);
    BufferPlayersName(*((u32*)(r5 + 0x00000B1C)), 0, r4);
    Heap_Free(r4);
}





void ov44_02231958(void) {
    // add r0, r0, r1
    // add r2, #0x24
    // add r0, r2, r0
}





void ov44_02231974(void) {
}





void ov44_0223197C(void) {
    // add r0, #0x21
}





void ov44_022319BC(void) {
    // str r1, [r5, r0]
    // add r0, r5, r0
    ov44_02231D94((0xe3 << 2), 1);
    ov44_0222F510(r5, 9, 0);
}





void ov44_022319EC(void) {
    // str r2, [r4, r1]
    ov44_0222F7BC(0x00000D64, 0);
    // add r0, r4, r0
    ov44_02231D94((0xe3 << 2), 0);
}





void ov44_02231A14(void) {
}





void ov44_02231A28(void) {
    // str r5, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    // add r1, sp, #0
    // add r1, sp, #0
}





void ov44_02231A7C(void) {
    // str r3, [sp]
    memset(0, 0x000006FC);
    // ldr r0, [sp, #0x24]
    *((u32*)(r5 + 4)) = r4;
    // ldr r0, [sp]
    *((u32*)(r5 + 0x10)) = (r0 - 1);
    // add r0, #0x14
    ov44_02232298(r5, *((u32*)(r5 + 4)), r6);
    ov44_02232334(*((u32*)(r5 + 0x10)), r4);
    ov44_02232E90(r7);
    // add r2, sp, #4
    // strh r0, [r2]
    *((u16*)(r2 + 2)) = (r0 >> 0x10);
    *((u16*)(r2 + 4)) = *((u16*)r2);
    *((u16*)(r2 + 6)) = *((u16*)(r2 + 2));
    ov42_02227EE0(*((u16*)(r2 + 4)), *((u16*)(r2 + 2)), r4);
    // str r0, [r5, r1]
    ov44_02232E9C(r7, 0x000006E4);
    ov42_02227F48(*((u32*)(r5 + 0x000006E4)), r0);
    ov42_02228010(0x30, r4);
    // str r0, [r5, r1]
    // ldr r1, [sp, #0x20]
    ov44_02232204(r5, 0x000006E8, r4);
    // add r0, r5, r0
    ov42_02229394((0x6f << 4));
    ov44_02232248(r5, r4, r6, r7);
    ov44_0223233C(*((u32*)(r5 + 0x10)), r4, r6);
    // add r1, r5, r1
    ov44_02232CCC(r5, (0x6d << 4), r6);
    ov42_02229A40(0x80, r4);
    // str r0, [r5, r1]
    // str r0, [r5]
}





void ov44_02231B4C(void) {
    ov42_02229A78(*((u32*)(r0 + 0x000006F8)));
    ov44_02232288(r4);
    // add r1, r4, r1
    ov44_02232D08(r4, (0x6d << 4));
    ov44_02232028(r4);
    ov44_02232238(r4);
    ov42_02228050(*((u32*)(r4 + 0x000006E8)));
    ov42_02227F28(*((u32*)(r4 + 0x000006E4)));
    // add r0, #0x14
    ov44_022322E8(r4);
    ov44_02232338(*((u32*)(r4 + 0x10)));
    memset(r4, 0, 0x000006FC);
}





void ov44_02231BB0(void) {
    // ldr r0, [r0]
    // bx lr
    // TODO: decompile
}





void ov44_02231BB4(void) {
    ov42_0222807C(*((u32*)(r0 + 0x000006E8)));
    ov44_02232158(r4);
    ov44_02232104(r4);
    // add r0, r4, r1
    // sub r1, #0x24
    ov42_02229358(*((u32*)*((u32*)(r4 + (0x6f << 4)))));
    // add r1, r4, r1
    ov42_02229420(*((u32*)(r4 + 0x000006F4)), (0x000006F4 - 4));
    ov42_022290DC(*((u32*)(r4 + 0x000006EC)));
    ov44_02232194(r4);
    ov44_02232594(r4);
    ov44_02232050(r4);
    ov44_02232604(r4);
    ov44_0223254C(r4);
    // tst r0, r1
    // tst r0, r1
    ov44_02231C70(r4, *((u32*)(gSystem + 0x48)));
    ov44_02232070(r4);
}





void ov44_02231C60(void) {
}





void ov44_02231C70(void) {
}





void ov44_02231C8C(void) {
    GF_AssertFail(*((u32*)(r0 + 0x000006CC)));
    ov42_022282DC(*((u32*)*((u32*)(r4 + 0x000006CC))));
    // add r2, sp, #0
    // strh r0, [r2]
    *((u16*)(r2 + 2)) = (r0 >> 0x10);
    *((u16*)(r2 + 4)) = *((u16*)r2);
    *((u16*)(r2 + 6)) = *((u16*)(r2 + 2));
    // ldrsh r3, [r2, r1]
    // asr r1, r3, #3
    // add r1, r3, r1
    // ldrsh r3, [r2, r3]
    // asr r2, r3, #3
    // add r2, r3, r2
    ov42_02227FDC(*((u32*)(r4 + 0x000006E4)), (((4 >> 0x1c) << 0xc) >> 0x10), (((r2 >> 0x1c) << 0xc) >> 0x10), 6);
}





void ov44_02231CE8(void) {
    GF_AssertFail(*((u32*)(r0 + 0x000006CC)));
    ov42_022282DC(*((u32*)*((u32*)(r4 + 0x000006CC))));
    // add r2, sp, #0
    // strh r0, [r2]
    *((u16*)(r2 + 2)) = (r0 >> 0x10);
    *((u16*)(r2 + 4)) = *((u16*)r2);
    *((u16*)(r2 + 6)) = *((u16*)(r2 + 2));
    // ldrsh r3, [r2, r1]
    // asr r1, r3, #3
    // add r1, r3, r1
    // ldrsh r3, [r2, r3]
    // asr r2, r3, #3
    // add r2, r3, r2
    // asr r2, r2, #4
    ov42_02227FDC(*((u32*)(r4 + 0x000006E4)), (((4 >> 0x1c) << 0xc) >> 0x10), ((((r2 >> 0x1c) + 1) << 0x10) >> 0x10), 6);
}





void ov44_02231D48(void) {
    // add r1, sp, #0
    // strh r0, [r1]
    // add r1, sp, #0
    // mov r4, sp
    // strh r3, [r4]
}





void ov44_02231D8C(void) {
}





void ov44_02231D94(void) {
}





void ov44_02231D98(void) {
    // ldr r0, [r0, #0xc]
    // bx lr
    // TODO: decompile
}





void ov44_02231D9C(void) {
    ov44_02232798();
    // add r1, sp, #0xc
    // str r4, [r5, r0]
    ov44_02232724(r5);
    // str r0, [sp]
    // str r3, [sp, #4]
    // add r2, sp, #0xc
    // str r3, [sp, #8]
    ov44_02232800(r5, r4, 0);
    ov44_02232864(r5, r4);
    ov44_022327C8(r5, r4, 1);
    // add r0, r5, r1
    // sub r1, #0x24
    ov42_02229358(*((u32*)*((u32*)(r5 + (0x6f << 4)))));
    // add r1, r5, r1
    ov42_02229420(*((u32*)(r5 + 0x000006F4)), (0x000006F4 - 4));
}





void ov44_02231E08(void) {
    ov44_02232798();
    // add r1, sp, #0x14
    ov44_02232680(r5, (r6 - 1));
    ov42_022282DC(*((u32*)*((u32*)(r5 + 0x000006CC))));
    // add r1, sp, #0xc
    // strh r0, [r1]
    *((u16*)(r1 + 2)) = (r0 >> 0x10);
    *((u16*)(r1 + 4)) = *((u16*)r1);
    *((u16*)(r1 + 6)) = *((u16*)(r1 + 2));
    // ldrsh r0, [r1, r0]
    // ldrsh r2, [r1, r2]
    // ldrsh r0, [r1, r0]
    // ldrsh r1, [r1, r2]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r2, sp, #0x14
    ov44_02232800(r5, r4, 0xa, r6);
    ov44_02232884(r5, r4);
    ov44_022327C8(r5, r4, 0);
}





void ov44_02231E94(void) {
    ov42_02228188(*((u32*)r1), 6);
    *((u32*)(r4 + 0x10)) = ov44_02232BCC;
    *((u32*)(r4 + 0x18)) = ov44_02232914;
    *((u16*)(r4 + 0xc)) = 2;
    *((u16*)(r4 + 8)) = 0;
    ov42_0222919C(*((u32*)(r4 + 4)), 0);
    ov42_022291A0(*((u32*)(r4 + 4)));
    ov44_02232C6C(r5, 4, r4);
}





void ov44_02231ED4(void) {
    // strb r0, [r4]
}





void ov44_02231EF4(void) {
}





void ov44_02231F04(void) {
}





void ov44_02231F14(void) {
    *((u32*)(r1 + 0x14)) = *((u32*)(r1 + 0x10));
    *((u32*)(r1 + 0x10)) = ov44_02232C48;
    *((u16*)(r1 + 0xe)) = *((u16*)(r1 + 0xc));
    *((u16*)(r1 + 0xc)) = 5;
    ov42_02228188(*((u32*)r1), 4);
    ov44_02232C4C(r6, 0, r4, r0);
    ov42_0222919C(*((u32*)(r5 + 4)), 0);
    ov42_02229218(*((u32*)(r5 + 4)), r4);
    ov42_02228188(*((u32*)r5), 0);
    // add r1, sp, #0
    // strh r0, [r1]
    ov42_02228188(*((u32*)r5), 1);
    // add r1, sp, #0
    *((u16*)(r1 + 2)) = r0;
    // mov r3, sp
    // strh r2, [r3]
    *((u16*)((r3 - 4) + 2)) = *((u16*)(r1 + 2));
    ov42_022291D8(*((u32*)(r5 + 4)), *((u32*)(r3 - 4)), *((u16*)r1), (r3 - 4));
}





void ov44_02231F88(void) {
}





void ov44_02231FA8(void) {
}





void ov44_02231FCC(void) {
    // asr r0, r0, #0x18
    // asr r4, r0, #0x18
    // bmi _02231FEE
    // add r0, r5, r0
}





void ov44_02232008(void) {
    // add r0, r0, r1
}





void ov44_02232018(void) {
    // add r1, r0, r1
}





void ov44_02232028(void) {
    // add r4, r5, r0
    // add r5, #0x1c
    // add r4, #0x1c
}





void ov44_02232050(void) {
}





void ov44_02232070(void) {
    ov42_022282DC(*((u32*)*((u32*)(r0 + 0x000006CC))));
    // add r1, sp, #0
    *((u16*)(r1 + 4)) = r0;
    *((u16*)(r1 + 6)) = (r0 >> 0x10);
    *((u16*)(r1 + 0xc)) = *((u16*)(r1 + 4));
    *((u16*)(r1 + 0xe)) = *((u16*)(r1 + 6));
    ov42_02228188(*((u32*)*((u32*)(r5 + 0x000006CC))), 6);
    // add r0, sp, #0
    // mov r2, sp
    // strh r1, [r2]
    *((u16*)((r2 - 4) + 2)) = *((u16*)(r0 + 0xe));
    ov42_02228270(*((u32*)(r2 - 4)), r0, (r2 - 4));
    // add r2, sp, #0
    // strh r0, [r2]
    *((u16*)(r2 + 2)) = (r0 >> 0x10);
    *((u16*)(r2 + 8)) = *((u16*)r2);
    *((u16*)(r2 + 0xa)) = *((u16*)(r2 + 2));
    // ldrsh r3, [r2, r1]
    // asr r1, r3, #3
    // add r1, r3, r1
    // ldrsh r3, [r2, r3]
    // asr r2, r3, #3
    // add r2, r3, r2
    ov42_02227FDC(*((u32*)(r5 + 0x000006E4)), (((8 >> 0x1c) << 0xc) >> 0x10), (((r2 >> 0x1c) << 0xc) >> 0x10), 0xa);
}





void ov44_02232104(void) {
    // add r1, sp, #8
    ov42_02229AC8(*((u32*)(r0 + 0x000006F8)));
    // add r6, sp, #0
    // add r4, sp, #8
    ov42_02228C80(*((u32*)(r5 + 0x000006E4)), *((u32*)(r5 + 0x000006E8)), r4, r6);
    ov42_02228068(*((u32*)(r5 + 0x000006E8)), r6);
    ov42_02229AC8(*((u32*)(r5 + 0x000006F8)), r4);
}





void ov44_02232158(void) {
    // add r5, r7, r0
    // blx r2
    // add r4, #0x1c
    // add r5, #0x1c
}





void ov44_02232194(void) {
    // add r5, r7, r0
    // blx r2
    // add r4, #0x1c
    // add r5, #0x1c
}





void ov44_022321C4(void) {
    ov42_022283BC(*((u32*)r1), *((u32*)(r0 + 0x000006E8)));
    // add r2, r4, r0
    // add r0, r2, r0
    // add r5, #0x1c
}





void ov44_02232204(void) {
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r4, [sp, #8]
    ov42_02228F24(*((u32*)(r0 + 0x14)), 0, 0x30, r1);
    // str r0, [r5, r1]
    ov42_02229028(*((u32*)(r5 + 0x000006EC)), 2, r4);
}





void ov44_02232238(void) {
    // ldr r1, _02232240 ; =0x000006EC
    // ldr r3, _02232244 ; =ov42_02228F94
    // ldr r0, [r0, r1]
    // bx r3
    // _02232240: .word 0x000006EC
    // _02232244: .word ov42_02228F94
    // TODO: decompile
}





void ov44_02232248(void) {
    // add r2, sp, #0
    // strb r0, [r2]
    // add r0, sp, #0
    // add r2, sp, #0
    // add r1, r1, r3
    *((u8*)(*((u8*)ov44_02235604) + 9)) = *((u8*)(*((u8*)ov44_02235604) + 9));
    // add r0, #0x18
    ov42_022293B8(r0, *((u32*)(r0 + 0x10)), (r2 + 1), r1);
    // str r0, [r5, r1]
}





void ov44_02232288(void) {
    // ldr r1, _02232290 ; =0x000006F4
    // ldr r3, _02232294 ; =ov42_0222940C
    // ldr r0, [r0, r1]
    // bx r3
    // _02232290: .word 0x000006F4
    // _02232294: .word ov42_0222940C
    // TODO: decompile
}





void ov44_02232298(void) {
    // str r2, [sp]
    // str r0, [r7]
    // str r0, [r5, r1]
    // ldr r2, [sp]
}





void ov44_022322E8(void) {
    // ldr r0, [r5, r6]
}





void ov44_02232314(void) {
}





void ov44_0223231C(void) {
}





void ov44_02232324(void) {
}





void ov44_0223232C(void) {
}





void ov44_02232334(void) {
    // bx lr
    // TODO: decompile
}





void ov44_02232338(void) {
    // bx lr
    // TODO: decompile
}





void ov44_0223233C(void) {
    // str r0, [sp]
    // str r5, [sp, #4]
    // str r3, [sp]
    // str r3, [sp, #4]
    // str r3, [sp, #8]
    // str r5, [sp, #0xc]
}





void ov44_0223237C(void) {
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r4, [sp, #8]
    // add r1, #0xfa
    // str r0, [r5, r1]
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r4, [sp, #0xc]
    // add r1, #0xfe
    // str r0, [r5, r1]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r4, [sp, #8]
    // sub r1, #0xc
    // str r0, [r5, r1]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r4, [sp, #8]
    // sub r1, #0xc
    // str r0, [r5, r1]
    // sub r1, #0xc
    // str r1, [sp]
    // sub r0, #0x33
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r2, [sp, #0x10]
    // add r2, #0xfa
    // str r2, [sp, #0x14]
    // add r2, #0xfe
    // str r2, [sp, #0x18]
    // str r2, [sp, #0x1c]
    // add r3, #0x18
    // str r2, [sp, #0x20]
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x28]
    // add r0, r5, r3
}





void ov44_0223247C(void) {
    // add r6, #0x10
}





void ov44_022324B0(void) {
    // add r2, sp, #0
    // stmia r5!, {r0, r1}
    // stmia r5!, {r0, r1}
    // stmia r5!, {r0, r1}
    // stmia r5!, {r0, r1}
    // stmia r5!, {r0, r1}
    // stmia r5!, {r0, r1}
    // str r1, [sp]
    // add r1, r4, r1
    // str r1, [sp, #4]
    // str r1, [sp, #0x28]
    // str r0, [sp, #0x24]
    // str r1, [sp, #0x14]
    // str r1, [sp, #0x18]
    // str r3, [sp, #0x2c]
    // str r0, [r4, r1]
    // add r0, sp, #0
    // str r0, [r4, r1]
}





void ov44_02232530(void) {
    // ldr r0, [r4, r0]
    // ldr r0, [r4, r0]
}





void ov44_0223254C(void) {
    // add r1, sp, #0
    // add r2, sp, #0
    // ldrsh r1, [r2, r0]
    // add r1, #8
    // strh r1, [r2]
    // ldrsh r3, [r2, r1]
    // add r3, #0x20
    // ldrsh r0, [r2, r0]
    // str r0, [sp, #4]
    // ldrsh r0, [r2, r1]
    // add r1, sp, #4
    // str r0, [sp, #8]
}





void ov44_02232594(void) {
    // mov r1, #0x61
    // lsl r1, r1, #2
    // ldr r0, [r0, r1]
    // ldr r3, _022325A0 ; =Sprite_SetDrawFlag
    // mov r1, #0
    // bx r3
    // _022325A0: .word Sprite_SetDrawFlag
    // TODO: decompile
}





void ov44_022325A4(void) {
    // add r1, sp, #0x18
    // ldrsh r0, [r1, r0]
    // add r0, #8
    // asr r0, r0, #4
    // str r0, [sp]
    // ldrsh r0, [r1, r0]
    // add r1, sp, #0
    // str r0, [sp, #4]
}





void ov44_022325F4(void) {
    // mov r1, #0x62
    // lsl r1, r1, #2
    // ldr r0, [r0, r1]
    // ldr r3, _02232600 ; =Sprite_SetDrawFlag
    // mov r1, #0
    // bx r3
    // _02232600: .word Sprite_SetDrawFlag
    // TODO: decompile
}





void ov44_02232604(void) {
    ov42_022282DC(*((u32*)0));
    // add r1, sp, #0
    // strh r0, [r1]
    *((u16*)(r1 + 2)) = (r0 >> 0x10);
    *((u16*)(r1 + 4)) = *((u16*)r1);
    *((u16*)(r1 + 6)) = *((u16*)(r1 + 2));
    ov42_02228188(*((u32*)*((u32*)(r5 + 0x000006CC))), 6);
    // add r2, sp, #0
    // ldrsh r3, [r2, r1]
    // asr r1, r3, #3
    // add r1, r3, r1
    // ldrsh r3, [r2, r3]
    // asr r2, r3, #3
    // add r2, r3, r2
    ov42_02227FDC(*((u32*)(r5 + 0x000006E4)), (((4 >> 0x1c) << 0xc) >> 0x10), (((r2 >> 0x1c) << 0xc) >> 0x10), 6);
}





void ov44_02232680(void) {
    // and r4, r0
    // str r1, [sp]
    ov42_02227F40(*((u32*)(r0 + 0x000006E4)));
    ov42_02227F44(*((u32*)(r5 + 0x000006E4)));
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [sp, #4]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #8]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #8]
    ov42_02227FDC(*((u32*)(r5 + 0x000006E4)), ((0 << 0x10) >> 0x10), ((((((r4 + 7) + 1) << 0x10) >> 0x10) << 0x10) >> 0x10));
    // ldr r1, [sp, #0xc]
    // ldr r2, [sp, #0x10]
    ov42_02227FDC(*((u32*)(r5 + 0x000006E4)), ((r4 << 0x10) >> 0x10));
    // ldr r1, [sp, #0x14]
    // ldr r0, [sp]
    // strh r1, [r0]
    // ldr r0, [sp, #8]
    // ldr r0, [sp]
    *((u16*)(r0 + 2)) = (r0 << 4);
    // ldr r0, [sp, #8]
    // ldr r0, [sp, #4]
    // str r1, [sp, #8]
    GF_AssertFail((r0 + 1));
}





void ov44_02232724(void) {
    // str r1, [sp]
    ov42_02227F40(*((u32*)(r0 + 0x000006E4)));
    ov42_02227F44(*((u32*)(r7 + 0x000006E4)));
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [sp, #4]
    // ldr r0, [sp, #8]
    ov42_02227FDC(*((u32*)(r7 + 0x000006E4)), ((0 << 0x10) >> 0x10), ((0 << 0x10) >> 0x10));
    // ldr r0, [sp]
    // strh r1, [r0]
    // ldr r0, [sp, #8]
    // ldr r0, [sp]
    *((u16*)(r0 + 2)) = (r0 << 4);
    // ldr r0, [sp, #8]
    // ldr r0, [sp, #4]
    // str r1, [sp, #8]
    GF_AssertFail((r0 + 1));
}





void ov44_02232798(void) {
    // add r2, r0, r2
    // add r0, r2, r0
    // add r4, #0x1c
}





void ov44_022327C8(void) {
    ov42_0222903C(*((u32*)(r0 + 0x000006EC)), *((u32*)r1), *((u32*)(r0 + 4)));
    *((u32*)(r5 + 4)) = r0;
    ov42_0222919C(*((u32*)(r5 + 4)), 0);
    ov42_022291A0(*((u32*)(r5 + 4)));
    ov42_02229200(*((u32*)(r5 + 4)), 0);
}





void ov44_02232800(void) {
    // ldrsh r1, [r2, r1]
    // add r5, sp, #0
    // strh r1, [r5]
    // ldrsh r1, [r2, r1]
    *((u16*)(r5 + 2)) = 2;
    // ldr r1, [sp, #0x20]
    *((u16*)(r5 + 4)) = r3;
    *((u16*)(r5 + 6)) = 2;
    // add r1, sp, #8
    *((u16*)(r5 + 8)) = *((u8*)(2 + 0x14));
    *((u16*)(r5 + 0xa)) = *((u16*)(2 + 0x10));
    // add r1, sp, #0
    ov42_022280B8(*((u32*)(r0 + 0x000006E8)), 0x000006E8, *((u8*)(2 + 0x14)));
    // str r0, [r4]
}





void ov44_02232838(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0223284A: ; jump table
}





void ov44_02232864(void) {
    *((u32*)(r1 + 0x10)) = ov44_02232A60;
    *((u32*)(r1 + 0x18)) = ov44_02232910;
    *((u16*)(r1 + 0xc)) = 0;
}





void ov44_02232884(void) {
    *((u32*)(r1 + 0x10)) = ov44_02232B74;
    *((u32*)(r1 + 0x18)) = ov44_02232914;
    *((u16*)(r1 + 8)) = 0x2d;
    *((u16*)(r1 + 0xc)) = 1;
}





void ov44_022328A0(void) {
    *((u32*)(r1 + 0x10)) = ov44_02232BE4;
    *((u32*)(r1 + 0x18)) = ov44_02232910;
    MTRandom(ov44_02232910);
    // and r1, r0
    // add r0, r1, r0
    *((u16*)(r4 + 8)) = (1 << 8);
    *((u16*)(r4 + 0xc)) = 3;
    ov44_02232C6C(r5, 0, r4);
    ov42_0222919C(*((u32*)(r4 + 4)), 1);
}





void ov44_022328E4(void) {
    *((u32*)(r1 + 0x10)) = ov44_02232C30;
    *((u32*)(r1 + 0x18)) = ov44_022329B0;
    *((u16*)(r1 + 8)) = 0x1c;
    *((u16*)(r1 + 0xc)) = 4;
    ov44_02232C6C(4, r1);
    ov42_0222919C(*((u32*)(r4 + 4)), 0);
}





void ov44_02232910(void) {
    // bx lr
    // TODO: decompile
}





void ov44_02232914(void) {
    ov42_022291AC(*((u32*)(r1 + 4)));
    ov42_022291F4(*((u32*)(r4 + 4)));
    ov42_02229200(*((u32*)(r4 + 4)), 1);
    ov42_02228188(*((u32*)r4), 0);
    // add r1, sp, #0
    *((u16*)(r1 + 4)) = r0;
    ov42_02228188(*((u32*)r4), 1);
    // add r1, sp, #0
    *((u16*)(r1 + 6)) = r0;
    // strh r0, [r1]
    *((u16*)(r1 + 2)) = *((u16*)(r1 + 6));
    GF_SinDegNoWrap(*((u16*)(r4 + 8)));
    // asr r1, r0, #0x1f
    // asr r3, r2, #0x14
    _ll_mul(0xFFF40000);
    // add r2, sp, #0
    // add r5, r0, r5
    // adc r1, r6
    // ldrsh r3, [r2, r3]
    // asr r0, r1, #0xc
    // add r0, r3, r0
    *((u16*)(r2 + 6)) = (r1 << 0x14);
    // mov r3, sp
    // strh r1, [r3]
    *((u16*)((6 - 4) + 2)) = *((u16*)(r2 + 6));
    ov42_022291D8(*((u32*)(r4 + 4)), *((u32*)(6 - 4)), (6 - 4));
    // add r1, sp, #0
    // mov r3, sp
    // strh r2, [r3]
    *((u16*)((r3 - 4) + 2)) = *((u16*)(r1 + 2));
    ov42_02229258(*((u32*)(r4 + 4)), *((u32*)(r3 - 4)), *((u16*)r1), (r3 - 4));
}





void ov44_022329B0(void) {
    // add r1, sp, #0
    // add r1, sp, #0
    // strh r0, [r1]
    // ldrsh r0, [r4, r0]
    // sub r0, #0x10
    // asr r0, r0, #0x10
    // asr r1, r0, #0x10
    // add r1, sp, #0
    // ldrsh r3, [r1, r2]
    // asr r2, r0, #0x1f
    // add r6, r6, r0
    // adc r2, r5
    // asr r0, r2, #0xc
    // sub r0, r3, r0
    // add r1, sp, #0
    // mov r3, sp
    // strh r2, [r3]
    // add r1, sp, #0
    // mov r3, sp
    // strh r2, [r3]
}





void ov44_02232A60(void) {
    ov42_02228188(*((u32*)r1), 6);
    ov42_02228188(*((u32*)r6), 4);
    ov42_02228188(*((u32*)r6), 5);
    // tst r0, r1
    ov44_022321C4(r5, r6, r4);
    // str r0, [sp]
    ov44_02232838();
    // ldr r0, [sp]
    ov42_02228188(*((u32*)r0), 4);
    *((u8*)(r6 + 0xa)) = r0;
    *((u8*)(r6 + 0xa)) = 0;
    *((u8*)(r6 + 0xa)) = 0;
    // tst r2, r1
    // tst r2, r0
    ov44_02232C4C(r5, 3, r4, r7);
    ov44_02232C4C(r5, 1, 0, r7);
    // tst r2, r0
    ov44_02232C4C(r5, r4, r7);
    ov44_02232C4C(r5, 1, 1, r7);
    // tst r2, r0
    ov44_02232C4C(r5, r4, r7);
    ov44_02232C4C(r5, 1, 2, r7);
    // tst r0, r2
    ov44_02232C4C(r5, r4, r7);
    ov44_02232C4C(r5, 1, 3, r7);
}





void ov44_02232B74(void) {
    // ldrsh r1, [r4, r0]
    *((u16*)(r1 + 8)) = (r1 - 1);
    // ldrsh r0, [r4, r0]
    ov42_022291B8(*((u32*)(r1 + 4)), (r1 - 1));
    ov42_0222919C(*((u32*)(r4 + 4)), 1);
    ov42_02228188(*((u32*)*((u32*)(r5 + 0x000006CC))), 4);
    ov42_02228188(*((u32*)r4), 4);
    ov44_02232864(r5, r4);
    ov44_02232CA8(r5, r4, *((u8*)(r4 + 0xb)));
}





void ov44_02232BCC(void) {
    // ldrsh r2, [r1, r0]
    // ldrsh r0, [r1, r0]
}





void ov44_02232BE4(void) {
    // ldrsh r1, [r5, r0]
    *((u16*)(r1 + 8)) = (r1 - 1);
    // ldrsh r0, [r5, r0]
    MTRandom(8, (r1 - 1));
    // and r1, r0
    // add r0, r1, r0
    *((u16*)(r5 + 8)) = (1 << 8);
    MTRandom((1 << 8), 0x000003FF);
    // and r4, r1
    ov42_02228188(*((u32*)r5), 4);
    ov44_02232C4C(r6, 0, r4, r0);
}





void ov44_02232C30(void) {
    // ldrsh r2, [r1, r0]
    // ldrsh r0, [r1, r0]
}





u8 ov44_02232C48(void) {
}





void ov44_02232C4C(void) {
}





void ov44_02232C6C(void) {
}





void ov44_02232C94(void) {
    // ldr r1, [r0, #0x18]
    // ldr r0, _02232CA4 ; =ov44_02232914
    // cmp r1, r0
    // beq _02232CA0
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // _02232CA4: .word ov44_02232914
    // TODO: decompile
}





void ov44_02232CA8(void) {
}





void ov44_02232CCC(void) {
    // strb r0, [r5]
    GfGfxLoader_GetPlttDataFromOpenNarc(r2, 0x20, (r1 + 4), *((u32*)(r0 + 4)));
    // str r0, [r4]
    *((u8*)(r4 + 8)) = 0xf;
    *((u8*)(r4 + 9)) = 0;
    *((u16*)(r4 + 0xa)) = *((u16*)(ov44_02235600 + (*((u8*)(r4 + 9)) << 1)));
}





void ov44_02232D08(void) {
}





void ov44_02232D20(void) {
}





void ov44_02232D34(void) {
    // ldrsh r1, [r5, r0]
    *((u16*)(r0 + 0xa)) = (r1 - 1);
    // ldrsh r0, [r5, r0]
    // sub r1, r1, r2
    // ror r1, r0
    // add r0, r2, r1
    *((u8*)(r0 + 9)) = 0x1f;
    *((u16*)(r0 + 0xa)) = *((u16*)(ov44_02235600 + (*((u8*)(r0 + 9)) << 1)));
    // lsl r0, r4
    // tst r0, r1
    ov44_02232E2C(r0, 1, ((*((u8*)(r0 + 9)) + 1) >> 0x1f));
    // add r1, #0xe0
    GF_CreateNewVramTransferTask(0xf, ((r4 + 1) << 1), r0, 2);
}





void ov44_02232DA0(void) {
    // ldrsh r5, [r4, r3]
    *((u16*)(r0 + 0xe)) = ((*((u8*)(r0 + 0xd)) << 2) - 1);
    // ldrsh r3, [r4, r3]
    *((u8*)(r0 + 0x10)) = 0;
    *((u8*)(r0 + 0xd)) = (*((u8*)(r0 + 0xd)) + 1);
    ov44_02232E38(r0, 0, 1, *((u8*)(r0 + 0x10)));
    *((u16*)(r4 + 0xe)) = *((u8*)(ov44_02235610 + (r0 << 2)));
    ov44_02232E2C(r4, *((u8*)(ov44_02235612 + (*((u8*)(r4 + 0xd)) << 2))), (*((u8*)(r4 + 0xd)) << 2));
    // add r1, #0xe0
    GF_CreateNewVramTransferTask(0xf, ((*((u8*)(r4 + 0xc)) + 1) << 1), r0, 2);
}





void ov44_02232E2C(void) {
    // add r0, r2, r0
}





void ov44_02232E38(void) {
    // lsl r2, r1
}





void ov44_02232E54(void) {
}





void ov44_02232E5C(void) {
    // lsl r0, r4
    // eor r0, r1
}





void ov44_02232E80(void) {
}





void ov44_02232E90(void) {
    // lsl r1, r0, #2
    // ldr r0, _02232E98 ; =ov44_02235630
    // ldr r0, [r0, r1]
    // bx lr
    // _02232E98: .word ov44_02235630
    // TODO: decompile
}





void ov44_02232E9C(void) {
    // lsl r1, r0, #2
    // ldr r0, _02232EA4 ; =ov44_0223688C
    // ldr r0, [r0, r1]
    // bx lr
    // _02232EA4: .word ov44_0223688C
    // TODO: decompile
}




