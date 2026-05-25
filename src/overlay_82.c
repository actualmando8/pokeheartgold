/* Decompiled from asm/overlay_82.s */
#include "global.h"

void ov82_0223DD60(void) {
    HandleLoadOverlay(FS_OVERLAY_ID, 2);
    ov82_0223E9B0();
    Heap_Create(3, 0x69, (2 << 0x10));
    OverlayManager_CreateAndGetData(r4, (0xa1 << 2), 0x69);
    memset(0, (0xa1 << 2));
    BgConfig_Alloc(0x69);
    *((u32*)(r5 + 0x48)) = r0;
    // str r4, [r5]
    OverlayManager_GetArgs(r4);
    // add r0, #0xa0
    // str r1, [r0]
    *((u8*)(r5 + 9)) = *((u8*)(r0 + 4));
    // str r1, [r5, r0]
    // add r0, #0xa0
    Save_PlayerData_GetOptionsAddr(*((u32*)r5), (r0 + 6));
    // add r1, #0x9c
    // str r0, [r1]
    // str r0, [r5, r1]
    // str r2, [r5, r0]
    // add r0, #8
    // str r2, [r5, r0]
    // add r1, #0x68
    *((u16*)(r5 + 0x1c)) = (*((u16*)(r4 + 0x18)) + 1);
    *((u8*)(r5 + 0xd)) = *((u8*)(r4 + 5));
    // strb r0, [r5, r1]
    *((u8*)(r5 + 0x18)) = 0xff;
    *((u8*)(r5 + 0x1f)) = 0x75;
    ov82_0223E9E8(r5, (0x85 << 2), *((u32*)(r4 + 0x14)));
    ov80_0223792C(*((u8*)(r5 + 9)));
    sub_02096910(r5);
    // str r0, [r6]
    TextFlags_SetCanTouchSpeedUpPrint(1);
}




void ov82_0223DE20(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0223DE5E: ; jump table
    // add r4, #0xa8
}




void ov82_0223DF74(void) {
    OverlayManager_GetData();
    // strh r2, [r1]
    ov82_0223E8C4(*((u32*)(r0 + (0x21 << 4))), *((u8*)(r0 + 0xd)));
    OverlayManager_FreeData(r4);
    // strh r0, [r2]
    Main_SetVBlankIntrCB(0, 0, 0x04000304);
    Heap_Destroy(0x69);
    UnloadOverlayByID(FS_OVERLAY_ID);
}




void ov82_0223DFBC(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0223DFD4: ; jump table
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
}




void ov82_0223E070(void) {
    // str r1, [sp]
    // str r1, [sp, #4]
    // add r1, #0x6c
    // add r1, #0x6c
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r4, #0x5c
    // str r2, [sp, #8]
    // str r2, [sp, #0xc]
}




void ov82_0223E0B0(void) {
    // add r0, #0x7c
    // str r0, [sp, #0x10]
    // add r0, #0x7c
    // add r0, #0x7c
    // add r0, #0x7c
    // add r0, #0x7c
    // str r0, [sp, #0x14]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r1, #0x7c
    // str r2, [sp, #0xc]
    // str r6, [sp]
    // str r4, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r1, [sp, #0x14]
    // ldr r2, [sp, #0x10]
    // ldr r1, [sp, #0x14]
}




void ov82_0223E140(void) {
    // str r1, [sp, #0x14]
    // str r2, [sp, #0x18]
    // ldr r5, [sp, #0x4c]
    // str r6, [sp]
    // str r2, [sp, #4]
    // str r2, [sp, #8]
    // str r2, [sp, #0xc]
    // add r2, sp, #0x30
    // ldr r3, [sp, #0x18]
    // str r0, [sp, #0x10]
    // add r1, sp, #0x30
    // ldr r0, [sp, #0x18]
    // add r0, r0, r7
    // str r0, [sp, #0x20]
    // ldr r3, [sp, #0x20]
    // str r6, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x10]
    // ldr r1, [sp, #0x14]
    // add r0, sp, #0x30
    // str r0, [sp, #0x28]
    // add r0, r6, r0
    // str r0, [sp, #0x24]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x10]
    // ldr r1, [sp, #0x14]
    // ldr r3, [sp, #0x18]
    // ldr r0, [sp, #0x24]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r3, [sp, #0x20]
    // add r2, #8
    // ldr r0, [sp, #0x10]
    // ldr r1, [sp, #0x14]
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x18]
    // ldr r0, [sp, #0x1c]
    // str r6, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x10]
    // ldr r1, [sp, #0x14]
    // ldr r0, [sp, #0x24]
    // str r0, [sp]
    // ldr r0, [sp, #0x1c]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x10]
    // ldr r1, [sp, #0x14]
    // ldr r0, [sp, #0x28]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x10]
    // ldr r1, [sp, #0x14]
    // ldr r3, [sp, #0x18]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r3, [sp, #0x20]
    // ldr r0, [sp, #0x10]
    // ldr r1, [sp, #0x14]
}




void ov82_0223E2A4(void) {
    // add r0, #0xa4
    // str r1, [r4, r0]
    // add r0, #0xa4
}




void ov82_0223E2EC(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0223E304: ; jump table
    *((u8*)(r0 + 0xb)) = 0;
    *((u8*)(r0 + 8)) = 1;
    ov82_0223F300(1, *((u32*)(gSystem + 0x48)));
    ov82_0223F53C(r4);
    ov82_0223F488(r4);
    ov80_02237920(*((u8*)(r4 + 0xd)));
    PlaySE(0x000005DD);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 0, 0, 0);
    *((u16*)(r4 + 0x10)) = 1;
    *((u8*)(r4 + 8)) = 7;
    ov82_0223F6E4(r4);
    ov80_02237920(*((u8*)(r4 + 0xd)));
    PlaySE(0x000005F3);
    ov82_0223F6C4(0);
    sub_02030BD0(*((u32*)(r4 + (0x86 << 2))));
    PlaySE(0x000005F3);
    ov80_02237920(*((u8*)(r4 + 0xd)));
    PlaySE(0x000005F3);
    PlaySE(0x000005DD);
    ov80_0223792C(*((u8*)(r4 + 9)));
    ov82_0223F5E0(*((u32*)(r4 + 0x48)), *((u8*)(r4 + 0xd)), 1);
    ScheduleBgTilemapBufferTransfer(*((u32*)(r4 + 0x48)), 3);
    *((u16*)(r4 + 0x14)) = 0;
    *((u8*)(r4 + 8)) = 2;
    // ldrsh r1, [r4, r0]
    *((u16*)(r4 + 0x14)) = (r1 + 1);
    // ldrsh r0, [r4, r0]
    // neg r0, r0
    ov82_0223F948(0x14, (r1 + 1));
    // ldrsh r0, [r4, r0]
    ov80_0223792C(*((u8*)(r4 + 9)));
    ov82_0223F84C(r4);
    *((u8*)(r4 + 8)) = 3;
    // add r0, #0x9c
    Options_GetFrame(*((u32*)r4));
    // add r0, #0x4c
    ov82_0223FD78(r4, r0);
    ov82_0223EF7C(r4, 0, 1);
    *((u8*)(r4 + 0xa)) = r0;
    *((u8*)(r4 + 0x1a)) = *((u8*)(r4 + 0xd));
    *((u8*)(r4 + 0x17)) = 1;
    // add r0, #0x8c
    ov82_0223FE18(*((u32*)1));
    ov82_0223F834(r4);
    ov82_0223F6CC(r4);
    ov82_0223F6E4(r4);
    *((u8*)(r4 + 0x1f)) = *((u8*)(r4 + 0xd));
    *((u8*)(r4 + 8)) = 5;
    StopSE(0x000005DC, 0);
    PlaySE(0x00000623);
    *((u8*)(r4 + 0xd)) = *((u8*)(r4 + 0x1f));
    ov82_0223F834(r4);
    *((u8*)(r4 + 8)) = 4;
    // ldrsh r1, [r4, r0]
    *((u16*)(r4 + 0x14)) = (r1 - 1);
    // ldrsh r0, [r4, r0]
    // neg r0, r0
    ov82_0223F948(0x14, (r1 - 1));
    // ldrsh r0, [r4, r0]
    ov82_0223F8E4(r4);
    *((u8*)(r4 + 8)) = 0;
    *((u8*)(r4 + 8)) = 1;
    GF_AssertFail(1);
    // add r0, #0x9c
    Options_GetFrame(*((u32*)r0));
    // add r0, #0x4c
    ov82_0223FD78(r4, r0);
    // add r0, #0xa0
    Save_PlayerData_GetOptionsAddr(*((u32*)r4));
    Options_GetTextFrameDelay();
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r3, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r3, [sp, #0x14]
    // add r1, #0x4c
    ov82_0223EF1C(r4, r4, 0x20, 1);
    *((u8*)(r4 + 0xa)) = r0;
    // add r0, #0x4c
    CopyWindowToVram(r4);
    *((u8*)(r4 + 8)) = 6;
    TextPrinterCheckActive(*((u8*)(r4 + 0xa)));
    *((u8*)(r4 + 0x1e)) = 1;
    ov82_0223F90C(r4);
    ov82_0223FCFC(*((u32*)(r4 + (0x81 << 2))), 1);
    ov82_0223F5E0(*((u32*)(r4 + 0x48)), 0x13, 0);
    ov82_0223F580(r4, *((u32*)(r4 + 0x48)));
    *((u8*)(r4 + 0xd)) = 0x13;
    ov82_0223F558(r4);
    ov82_0223F570(r4);
    ov82_0223FCBC(*((u32*)(r4 + (0x81 << 2))), r5, r0);
    *((u8*)(r4 + 8)) = 4;
    IsPaletteFadeFinished(4);
    ov82_0223F224(r4);
    ov82_0223E8C4(r4);
    // add r1, #0xa4
    OverlayManager_New(gOverlayTemplate_PokemonSummary, *((u32*)r4), 0x69);
    *((u32*)(r4 + 4)) = r0;
    *((u8*)(r4 + 0xb)) = 1;
}




void ov82_0223E5D4(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0223E5EA: ; jump table
    ov82_0223F6C4(*((u8*)(r0 + 0x1a)), (*((u16*)(*((u8*)(r0 + 8)) + 6)) << 0x10));
    ov82_0223F6E8(r4, 5, r0);
    *((u8*)(r4 + 0x1b)) = 0;
    *((u8*)(r4 + 0x1a)) = 0;
    *((u8*)(r4 + 0x17)) = 0;
    *((u8*)(r4 + 8)) = 1;
    *((u8*)(r4 + 0x1b)) = (*((u8*)(r4 + 0x1b)) - 1);
    *((u8*)(r4 + 0x16)) = 0;
    sub_0203769C(*((u8*)(r4 + 0x18)));
    *((u8*)(r4 + 8)) = 2;
    *((u8*)(r4 + 8)) = 3;
    sub_0203769C(3);
    *((u8*)(r4 + 8)) = 3;
    *((u8*)(r4 + 8)) = 2;
    ov82_0223F948(0);
    *((u16*)(r4 + 0x14)) = 0;
    ov82_0223FCB0(*((u32*)(r4 + (0x82 << 2))), 0);
    // add r0, #0x9c
    Options_GetFrame(*((u32*)r4));
    // add r0, #0x4c
    ov82_0223FD78(r4, r0);
    ov80_0222A7CC(*((u32*)(r4 + 0x24)), 0);
    ov82_0223EF7C(r4, 0xb, 1);
    *((u8*)(r4 + 0xa)) = r0;
    *((u8*)(r4 + 0x1b)) = 0xa;
    ov82_0223F5E0(*((u32*)(r4 + 0x48)), *((u8*)(r4 + (0x9f << 2))), 2);
    ScheduleBgTilemapBufferTransfer(*((u32*)(r4 + 0x48)), 3);
    *((u8*)(r4 + 8)) = 4;
    *((u8*)(r4 + 0xd)) = *((u8*)(r4 + (0x0000027D - 1)));
    ov82_0223F90C(1, 0x0000027D, *((u8*)(r4 + 0x0000027D)));
    ov82_0223F5E0(*((u32*)(r4 + 0x48)), *((u8*)(r4 + (0x9f << 2))), 0);
    ScheduleBgTilemapBufferTransfer(*((u32*)(r4 + 0x48)), 3);
    // strb r2, [r4, r0]
    // strb r1, [r4, r0]
    *((u8*)(r4 + 0x18)) = 0xff;
    *((u8*)(r4 + 0x19)) = 1;
    ov82_0223F5E0(*((u32*)(r4 + 0x48)), *((u8*)(r4 + 0xd)), 1);
    ScheduleBgTilemapBufferTransfer(*((u32*)(r4 + 0x48)), 3);
    ov82_0223F84C(r4);
    *((u8*)(r4 + 8)) = 5;
    // add r0, #0x8c
    ov82_0223FE18(*((u32*)5));
    StopSE(0x000005DC, 0);
    PlaySE(0x00000623);
    ov82_0223F834(r4);
    *((u8*)(r4 + 8)) = 6;
    ov82_0223F834(r4);
    *((u8*)(r4 + 8)) = 7;
    ov82_0223F6E8(7, 6, 1);
    // ldrsh r2, [r4, r1]
    *((u16*)(r4 + 0x14)) = (r2 - 1);
    // ldrsh r0, [r4, r1]
    // neg r0, r0
    ov82_0223F948((r2 - 1), 0x14);
    ov82_0223F6E8(6, 2);
    ov82_0223F8E4(r4);
    // strb r1, [r4, r0]
    *((u8*)(r4 + 0x18)) = 0xff;
    *((u8*)(r4 + 0x19)) = 1;
    sub_02037BEC(1, 0xff);
    sub_02037AC0(0x68);
    *((u8*)(r4 + 8)) = 9;
    sub_02037B38(0x68);
    sub_02037BEC();
    sub_020379A0(0x69);
    *((u8*)(r4 + 0x18)) = 0xff;
}




void ov82_0223E7E8(void) {
}




void ov82_0223E820(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
}




void ov82_0223E888(void) {
    // add r0, #0x4c
}




void ov82_0223E8C4(void) {
    // add r0, #0x8c
    // add r0, #0x94
    // add r0, #0x94
    // add r0, #0x94
    // add r0, #0x94
    // str r1, [r0]
    // add r0, #0xa8
    // add r0, #0x98
    // add r0, #0x4c
}




void ov82_0223E974(void) {
    // ldr r0, [r4, r0]
    // ldr r0, [r4, r0]
}




void ov82_0223E9B0(void) {
    Main_SetVBlankIntrCB(0, 0);
    Main_SetHBlankIntrCB(0, 0);
    GfGfx_DisableEngineAPlanes();
    GfGfx_DisableEngineBPlanes();
    // and r1, r0
    // str r1, [r2]
    // and r0, r1
    // str r0, [r2]
}




void ov82_0223E9E8(void) {
    NARC_New(0xb7, 0x69);
    // str r0, [r5, r1]
    ov82_0223EB3C(r5, (0x22 << 4));
    ov82_0223EB9C(r5);
    NewMsgDataFromNarc(1, 0x1b, 0x000001B9, 0x69);
    *((u32*)(r5 + 0x20)) = r0;
    MessageFormat_New(0x69);
    *((u32*)(r5 + 0x24)) = r0;
    String_New((0x96 << 2), 0x69);
    *((u32*)(r5 + 0x28)) = r0;
    String_New((0x96 << 2), 0x69);
    *((u32*)(r5 + 0x2c)) = r0;
    String_New(0x20, 0x69);
    *((u32*)(r4 + 0x30)) = r0;
    LoadFontPal0(0, (0x1a << 4), 0x69);
    LoadFontPal1(0, (6 << 6), 0x69);
    LoadFontPal0(4, 0x40, 0x69);
    MessagePrinter_New(0xf, 0xe, 0, 0x69);
    // add r1, #0x98
    // str r0, [r1]
    // add r1, #0x4c
    ov82_0223FD2C(*((u32*)(r5 + 0x48)), r5);
    ov82_0223F580(r5, *((u32*)(r5 + 0x48)));
    // and r0, r1
    // strh r0, [r2]
    GfGfx_BothDispOn(0xFFFF7FFF, *((u16*)0x04000304), 0x04000304);
    ov82_0223F558(r5);
    ov82_0223F570(r5);
    // str r0, [sp]
    // add r0, #0xa8
    // str r1, [sp, #4]
    ov82_0223FC48(r5, 0, 1, r4);
    // str r0, [r5, r1]
    // str r3, [sp]
    // str r0, [sp, #4]
    // add r0, #0xa8
    ov82_0223FC48(r5, 1, 1, 0xa0);
    // str r0, [r5, r1]
    // add r1, #0xc
    Party_GetMonByIndex(*((u32*)(r5 + (0x82 << 2))), 0);
    ov82_0223FD18(*((u32*)(r5 + (0x82 << 2))), r0);
    sub_02037474();
    G2dRenderer_SetObjCharTransferReservedRegion(1, 0x10);
    G2dRenderer_SetPlttTransferReservedRegion(1);
    sub_0203A880();
    ov82_0223FDB8(0x69);
    // add r1, #0x8c
    // str r0, [r1]
    Main_SetVBlankIntrCB(ov82_0223EC0C, r5);
}




void ov82_0223EB3C(void) {
    // add r1, #0x94
    // str r0, [r1]
    // add r0, #0x94
    // add r0, #0x94
}




void ov82_0223EB9C(void) {
    // add r4, #0xa8
}




void ov82_0223EBB8(void) {
    // and r0, r1
    // str r0, [r2]
    GfGfx_EngineATogglePlanes(0x1f, 0, (1 << 0x1a));
    GfGfx_EngineBTogglePlanes(0x1f, 0);
    FreeBgTilemapBuffer(r4, 3);
    FreeBgTilemapBuffer(r4, 1);
    FreeBgTilemapBuffer(r4, 0);
    FreeBgTilemapBuffer(r4, 5);
    FreeBgTilemapBuffer(r4, 4);
    Heap_Free(r4);
}




void ov82_0223EC0C(void) {
    // add r0, #0x94
    PaletteData_PushTransparentBuffers(*((u32*)r0));
    DoScheduledBgGpuUpdates(*((u32*)(r4 + 0x48)));
    GF_RunVramTransferTasks();
    OamManager_ApplyAndResetBuffers();
    // str r0, [r3, r1]
}




void ov82_0223EC48(void) {
}




void ov82_0223EC68(void) {
    // add r3, sp, #0x8c
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    SetBothScreensModesAndDisable(r3, r3);
    // add r3, sp, #0x70
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 0, r3, 0);
    BG_ClearCharDataRange(0, 0x20, 0, 0x69);
    BgClearTilemapBufferAndCommit(r4, 0);
    // add r3, sp, #0x54
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 1, r3, 0);
    BG_ClearCharDataRange(1, 0x20, 0, 0x69);
    BgClearTilemapBufferAndCommit(r4, 1);
    // add r3, sp, #0x38
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 3, r3, 0);
    BgClearTilemapBufferAndCommit(r4, 3);
    // add r3, sp, #0x1c
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 5, r3, 0);
    BgClearTilemapBufferAndCommit(r4, 5);
    // add r3, sp, #0
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 4, r3, 0);
    BgClearTilemapBufferAndCommit(r4, 4);
    // strh r2, [r1]
    GfGfx_EngineATogglePlanes(1, 1, (*((u16*)0x04000008) & ~(3)));
}




void ov82_0223ED94(void) {
    ov80_0223792C(*((u8*)(r0 + 9)));
    // and r1, r3
    // str r1, [r0]
    // add r4, #0x48
    // strh r5, [r4]
    // add r4, #0x4a
    // strh r1, [r4]
    // add r1, #0x40
    // strh r2, [r1]
    // add r1, #0x44
    // strh r4, [r1]
    // and r2, r3
    // str r1, [r0]
}




void ov82_0223EDF0(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
}




void ov82_0223EE38(void) {
    // add r2, sp, #0
    // ldr r0, [sp]
    // ldr r0, [sp]
}




void ov82_0223EE6C(void) {
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
}




void ov82_0223EECC(void) {
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // str r3, [sp]
    // str r0, [sp, #4]
}




void ov82_0223EF1C(void) {
    // add r1, sp, #0x38
    // ldr r0, [sp, #0x28]
    // add r2, sp, #0x18
    // str r0, [sp]
    // ldr r0, [sp, #0x2c]
    // str r0, [sp, #4]
    // add r0, sp, #0x38
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r1, sp, #0x3c
}




void ov82_0223EF7C(void) {
    // str r3, [sp]
    // str r1, [sp, #4]
    // str r3, [sp, #8]
    // str r1, [sp, #0xc]
    // str r1, [sp, #0x10]
    // str r2, [sp, #0x14]
    // add r1, #0x4c
    // add r5, #0x4c
}




void ov82_0223EFB4(void) {
}




void ov82_0223EFCC(void) {
    // add r2, sp, #0x10
    // add r1, sp, #0x30
    // add r1, sp, #0x10
    // str r4, [sp]
    // str r4, [sp, #4]
    // add r2, sp, #0x30
    // str r0, [sp, #8]
    // str r4, [sp, #0xc]
}




void ov82_0223F040(void) {
    // str r1, [sp, #0x10]
    // add r1, sp, #0x30
    FillWindowPixelBuffer(r1, *((u8*)(r1 + 0x10)));
    NewMsgDataFromNarc(1, 0x1b, 0x000002DF, 0x69);
    // str r0, [sp, #0x24]
    String_New(0xb, 0x69);
    // str r0, [sp, #0x28]
    // str r0, [sp, #0x20]
    // add r1, sp, #0x30
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x1c]
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x20]
    // add r7, r4, r0
    ov80_02237920(((r7 << 0x18) >> 0x18), (((r6 << 0x18) >> 0x10) | ((r4 << 0x18) >> 8)), ((r4 << 0x18) >> 8));
    String_SetEmpty(r5);
    ov80_02237920(((r7 << 0x18) >> 0x18));
    // ldr r0, [sp, #0x24]
    ReadMsgDataIntoString(r0, r5);
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp, #0x18]
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x1c]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x10]
    AddTextPrinterParameterizedWithColor(0, r5, r6);
    // add r6, #0x40
    // ldr r0, [sp, #0x20]
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x14]
    // add r0, #0x24
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x28]
    // str r0, [sp, #0x28]
    String_Delete(r5);
    // ldr r0, [sp, #0x24]
    DestroyMsgData();
    // ldr r0, [sp, #0x10]
    CopyWindowToVram();
}




void ov82_0223F10C(void) {
    // str r4, [sp]
    // str r3, [sp, #4]
    // ldr r1, [sp, #0x18]
    // add r0, #0x98
    // str r1, [sp, #8]
}




void ov82_0223F134(void) {
    // str r0, [sp, #0x10]
    // str r0, [sp, #0xc]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0xc]
    // add r7, r4, r0
    // ldr r0, [sp, #8]
    // ldr r1, [sp, #4]
    // str r0, [sp]
    // add r5, #0x40
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #8]
    // add r0, #0x24
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x10]
    // str r0, [sp, #0x10]
}




void ov82_0223F1AC(void) {
    // add r1, sp, #0x18
    FillWindowPixelBuffer(r1, *((u8*)(r1 + 0x18)));
    NewMsgDataFromNarc(1, 0x1b, 0x000001B9, 0x69);
    // str r0, [sp, #0x10]
    NewString_ReadMsgData(0x25);
    FillWindowPixelBuffer(r5, 0xf);
    // str r4, [sp]
    // str r4, [sp, #4]
    // add r2, sp, #0x18
    // str r0, [sp, #8]
    // str r4, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r5, *((u8*)(r2 + 0x1c)), r6, r7);
    String_Delete(r6);
    // ldr r0, [sp, #0x10]
    DestroyMsgData();
    CopyWindowToVram(r5);
}




void ov82_0223F224(void) {
    Heap_Alloc(0x69, 0x3c);
    // add r1, #0xa4
    // str r0, [r1]
    // add r0, #0xa4
    memset(*((u32*)r4), 0, 0x3c);
    // add r1, #0xa4
    // str r2, [r1]
    // add r2, #0xa4
    *((u8*)(*((u32*)r4) + 0x11)) = 1;
    // add r2, #0x9c
    // add r2, #0xa4
    *((u32*)(*((u32*)r4) + 4)) = *((u32*)r4);
    // add r2, #0xa4
    *((u8*)(*((u32*)r4) + 0x12)) = 1;
    Party_GetCount(*((u32*)(r4 + (0x85 << 2))), 1, *((u32*)r4), *((u32*)r4));
    // add r1, #0xa4
    *((u8*)(*((u32*)r4) + 0x13)) = r0;
    // add r0, #0xa4
    *((u8*)(*((u32*)r4) + 0x14)) = 0;
    // add r0, #0xa4
    *((u16*)(*((u32*)r4) + 0x18)) = 0;
    // add r0, #0xa0
    SaveArray_IsNatDexEnabled(*((u32*)r4), 0);
    // add r1, #0xa4
    *((u32*)(*((u32*)r4) + 0x1c)) = r0;
    // add r0, #0xa0
    sub_02088288(*((u32*)r4), *((u32*)r4));
    // add r1, #0xa4
    *((u32*)(*((u32*)r4) + 0x2c)) = r0;
    // add r0, #0xa0
    Save_SpecialRibbons_Get(*((u32*)r4), *((u32*)r4));
    // add r1, #0xa4
    *((u32*)(*((u32*)r4) + 0x20)) = r0;
    // add r0, #0xa4
    *((u32*)(*((u32*)r4) + 0x34)) = 0;
    // add r0, #0xa4
    sub_02089D40(*((u32*)r4), _0223FE20);
    // add r0, #0xa0
    Save_PlayerData_GetProfile(*((u32*)r4));
    // add r4, #0xa4
    sub_0208AD34(*((u32*)r4), r0);
}




void ov82_0223F2F8(void) {
}




void ov82_0223F300(void) {
    // tst r1, r2
    ov80_02237920(*((u8*)(r0 + 0xd)), 0x20, *((u32*)(gSystem + 0x48)));
    *((u8*)(r4 + 0xc)) = *((u8*)(r4 + 0xd));
    // sub r2, r2, r3
    // ror r2, r1
    // add r1, r3, r2
    *((u8*)(r4 + 0xd)) = (*((u8*)(r4 + 0xd)) + 3);
    ov80_02237920((*((u8*)(r4 + 0xd)) + 3), 0x1e, (*((u8*)(r4 + 0xd)) << 0x1e), (*((u8*)(r4 + 0xd)) >> 0x1f));
    *((u8*)(r4 + 0xd)) = 0x10;
    *((u8*)(r4 + 0xd)) = (*((u8*)(r4 + 0xd)) - 1);
    // tst r1, r2
    ov80_02237920(*((u8*)(r4 + 0xd)), 0x10, *((u32*)(gSystem + 0x48)));
    *((u8*)(r4 + 0xc)) = *((u8*)(r4 + 0xd));
    // sub r2, r2, r3
    // ror r2, r1
    // add r1, r3, r2
    *((u8*)(r4 + 0xd)) = (*((u8*)(r4 + 0xd)) - 3);
    ov80_02237920((*((u8*)(r4 + 0xd)) - 3), 0x1e, (*((u8*)(r4 + 0xd)) << 0x1e), (*((u8*)(r4 + 0xd)) >> 0x1f));
    *((u8*)(r4 + 0xd)) = 0x13;
    *((u8*)(r4 + 0xd)) = (*((u8*)(r4 + 0xd)) + 1);
    // tst r1, r2
    ov80_02237920(*((u8*)(r4 + 0xd)), 0x40, *((u32*)(gSystem + 0x48)));
    *((u8*)(r4 + 0xc)) = *((u8*)(r4 + 0xd));
    // add r0, #0x10
    *((u8*)(r4 + 0xd)) = *((u8*)(r4 + 0xd));
    ov80_02237920(*((u8*)(r4 + 0xd)));
    *((u8*)(r4 + 0xd)) = 0xd;
    *((u8*)(r4 + 0xd)) = 0xe;
    *((u8*)(r4 + 0xd)) = 0xd;
    *((u8*)(r4 + 0xd)) = 0xe;
    *((u8*)(r4 + 0xd)) = 0xd;
    *((u8*)(r4 + 0xd)) = (*((u8*)(r4 + 0xd)) - 4);
    // tst r1, r2
    ov80_02237920(*((u8*)(r4 + 0xd)), 0x80, *((u32*)(gSystem + 0x48)));
    *((u8*)(r4 + 0xc)) = *((u8*)(r4 + 0xd));
    // sub r0, #0x10
    *((u8*)(r4 + 0xd)) = (*((u8*)(r4 + 0xd)) + 4);
    PlaySE(0x000005DC);
    ov82_0223F558(r4);
    ov82_0223F570(r4);
    ov82_0223FCBC(*((u32*)(r4 + (0x81 << 2))), r5, r0);
    ov80_02237920(*((u8*)(r4 + 0xd)));
    ov82_0223FCFC(*((u32*)(r4 + (0x81 << 2))), 2);
    ov82_0223FCBC(*((u32*)(r4 + (0x81 << 2))), 0x80, 0xa8);
    ov82_0223FCFC(*((u32*)(r4 + (0x81 << 2))), 1);
}




void ov82_0223F488(void) {
    // str r0, [sp]
    // add r2, #0x23
    // add r0, #0x3f
    // add r1, r1, r0
    // ldr r0, [sp]
    *((u8*)((0 << 2) + 0xd)) = 0;
    ov82_0223F558((0 << 2), 0, 3, 3);
    // ldr r0, [sp]
    ov82_0223F570();
    // ldr r0, [sp]
    ov82_0223FCBC(*((u32*)(r0 + (0x81 << 2))), r4, r0);
    // ldr r0, [sp]
    ov80_02237920(*((u8*)(r0 + 0xd)));
    // ldr r0, [sp]
    ov82_0223FCFC(*((u32*)(r0 + (0x81 << 2))), 2);
    // ldr r0, [sp]
    ov82_0223FCBC(*((u32*)(r0 + (0x81 << 2))), 0x80, 0xa8);
    // ldr r0, [sp]
    ov82_0223FCFC(*((u32*)(r0 + (0x81 << 2))), 1);
    // ldr r1, [sp]
    // add r1, #0x90
    // strb r0, [r1]
    // str r1, [sp]
    // add r6, #0x40
    // add r3, #0x24
}




void ov82_0223F53C(void) {
    // tst r2, r1
    // add r0, #0x90
    // strb r2, [r0]
}




void ov82_0223F558(void) {
    // sub r1, r1, r2
    // ror r1, r0
    // add r0, r2, r1
    // add r0, #0x20
}




void ov82_0223F570(void) {
    // add r0, #0x10
}




void ov82_0223F580(void) {
    // ldr r1, [r6, r7]
}




void ov82_0223F5E0(void) {
    // sub r2, r2, r3
    // ror r2, r0
    // add r0, r3, r2
    // str r0, [sp, #0xc]
    // mov ip, r0
    // sub r2, r2, r3
    // ror r2, r0
    // add r6, r3, r2
    // str r0, [sp]
    // str r2, [sp, #4]
    // str r1, [sp, #8]
    // mov r2, ip
    // ldr r0, [sp, #0xc]
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
}




void ov82_0223F6C4(void) {
    // cmp r0, #0x11
    // blo _0223F6CA
    // mov r0, #0x11
    // bx lr
    // TODO: decompile
}




void ov82_0223F6CC(void) {
    // ldrb r1, [r0, #9]
    // cmp r1, #0
    // bne _0223F6E0
    // ldrh r0, [r0, #0x1c]
    // cmp r0, #0x32
    // beq _0223F6DC
    // cmp r0, #0xaa
    // bne _0223F6E0
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // TODO: decompile
}




void ov82_0223F6E4(void) {
    // ldrb r0, [r0, #0x1e]
    // bx lr
    // TODO: decompile
}




void ov82_0223F6E8(void) {
    // add r1, r5, r1
}




void ov82_0223F74C(void) {
}




void ov82_0223F764(void) {
}




void ov82_0223F770(void) {
    // strh r1, [r5, r0]
    // strh r4, [r5, r0]
    sub_0203769C(((0x89 << 2) + 2));
    *((u8*)(r5 + 0x18)) = r4;
    // strh r1, [r5, r0]
    // sub r0, #0x14
    Party_GetMonByIndex(*((u32*)(r5 + (0x8a << 2))), 0);
    GetMonData(0xa1, 0);
    // strh r0, [r5, r1]
}




void ov82_0223F7B4(void) {
    // strb r1, [r4, r0]
    // strb r1, [r4, r0]
    // add r0, #0x14
    // strh r1, [r0]
}




void ov82_0223F808(void) {
    // strh r1, [r0, r3]
    // strh r2, [r0, r1]
}




void ov82_0223F814(void) {
}




void ov82_0223F834(void) {
}




void ov82_0223F84C(void) {
    // add r0, #0x9c
    // add r0, #0x4c
    // add r2, #0x90
    // add r0, #0x8c
}




void ov82_0223F8E4(void) {
    // ldr r0, [r4, r0]
}




void ov82_0223F90C(void) {
    // add r0, #0x4c
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r4, #0x5c
    // str r2, [sp, #8]
    // str r2, [sp, #0xc]
}




void ov82_0223F948(void) {
    // ldr r3, _0223F954 ; =G2x_SetBlendBrightness_
    // add r2, r0, #0
    // ldr r0, _0223F958 ; =0x04000050
    // mov r1, #0x1e
    // bx r3
    // nop
    // _0223F954: .word G2x_SetBlendBrightness_
    // _0223F958: .word 0x04000050
    // TODO: decompile
}




void ov82_0223F95C(void) {
    // str r1, [sp, #0x14]
    ov82_0223FC14();
    NNS_G2dInitOamManagerModule();
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // str r2, [sp, #0x10]
    OamManager_Create(0, 0x80, 0, 0x20);
    G2dRenderer_Init(2, (r5 + 4), 0x69);
    // str r0, [r5]
    Create2DGfxResObjMan(*((u8*)ov82_0223FEEC), 0, 0x69);
    // str r0, [r6, r1]
    // str r0, [sp]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0xc3
    AddCharResObjFromNarc(*((u32*)(r5 + 0x69)), 0xb8, 0xc, 1);
    // str r0, [r5, r1]
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, #0xc7
    AddPlttResObjFromNarc(*((u32*)(r5 + 0x69)), 0xb8, 0x36, 0);
    // str r0, [r5, r1]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0xcb
    AddCellOrAnimResObjFromNarc(*((u32*)(r5 + 0x69)), 0xb8, 0xe, 1);
    // str r0, [r5, r1]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0xcf
    AddCellOrAnimResObjFromNarc(*((u32*)(r5 + 0x69)), 0xb8, 0xd, 1);
    // str r0, [r5, r1]
    NARC_New(0x14, 0x69);
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x14]
    Pokemon_GetIconNaix();
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0xc3
    // ldr r1, [sp, #0x18]
    AddCharResObjFromOpenNarc(*((u32*)(r5 + 0x69)), r0, 0);
    // str r0, [r5, r1]
    sub_02074490((0x53 << 2));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, #0xc7
    AddPlttResObjFromNarc(*((u32*)(r5 + 0x69)), 0x14, r0, 0);
    // str r0, [r5, r1]
    sub_02074498((0x15 << 4));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0xcb
    // ldr r1, [sp, #0x18]
    AddCellOrAnimResObjFromOpenNarc(*((u32*)(r5 + 0x69)), r0, 0);
    // str r0, [r5, r1]
    sub_020744A4((0x55 << 2));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0xcf
    // ldr r1, [sp, #0x18]
    AddCellOrAnimResObjFromOpenNarc(*((u32*)(r5 + 0x69)), r0, 0);
    // str r0, [r5, r1]
    // sub r7, #0x1c
    // sub r6, #0x18
    sub_0200ACF0(*((u32*)(r5 + (0x56 << 2))), (0x56 << 2));
    sub_0200AF94(*((u32*)(r5 + r6)));
    // add r5, #0x10
    GfGfx_EngineBTogglePlanes(0x10, 1);
    GfGfx_EngineATogglePlanes(0x10, 1);
    // ldr r0, [sp, #0x18]
    NARC_Delete();
}




void ov82_0223FB08(void) {
    // str r1, [sp]
    // mvn r0, r0
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r2, [sp, #0x14]
    // str r2, [sp, #0x18]
    // add r2, #8
    // add r0, #0xc
    // str r2, [sp, #0x1c]
    // str r0, [sp, #0x20]
    // str r3, [sp, #0x24]
    // str r3, [sp, #0x28]
    // add r0, sp, #0x5c
    // str r0, [sp, #0x2c]
    // add r0, sp, #0x5c
    // str r0, [sp, #0x30]
    // str r1, [sp, #0x34]
    // str r1, [sp, #0x38]
    // str r1, [sp, #0x3c]
    // str r0, [sp, #0x40]
    // str r0, [sp, #0x44]
    // str r0, [sp, #0x48]
    // add r0, sp, #0x2c
    // str r4, [sp, #0x50]
    // add r0, sp, #0x80
    // str r0, [sp, #0x54]
    // str r0, [sp, #0x54]
    // str r0, [sp, #0x58]
    // add r0, sp, #0x80
    // ldr r1, [sp, #0x38]
    // add r0, r1, r0
    // str r0, [sp, #0x38]
    // add r0, sp, #0x2c
}




void ov82_0223FBBC(void) {
    // add r6, r5, r0
    // add r0, r5, r0
}




void ov82_0223FC14(void) {
    // add r3, sp, #0
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    ObjCharTransfer_InitEx(r3, 0x10, 0x10);
    ObjPlttTransfer_Init(4, 0x69);
    ObjCharTransfer_ClearBuffers();
    ObjPlttTransfer_Reset();
}




void ov82_0223FC48(void) {
    // str r2, [sp, #4]
    // strb r0, [r2]
    // ldr r0, [sp, #0x2c]
    // ldr r2, [sp, #4]
    // str r3, [sp]
    // str r0, [sp, #8]
    // add r0, sp, #0x18
    // add r1, sp, #8
    // str r0, [sp, #0xc]
}




u32 ov82_0223FC9C(void) {
}




void ov82_0223FCB0(void) {
}




void ov82_0223FCBC(void) {
    // add r2, sp, #0
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // str r0, [sp]
    // str r0, [sp, #4]
}




void ov82_0223FCFC(void) {
}




void ov82_0223FD18(void) {
}




void ov82_0223FD2C(void) {
    // add r1, r5, r6
    // add r2, r2, r3
    AddWindow(r0, ov82_0223FF00, (0 << 3));
    // add r0, r5, r6
    FillWindowPixelBuffer(0);
}




void ov82_0223FD5C(void) {
}




void ov82_0223FD78(void) {
    GetWindowBgId();
    // str r0, [sp]
    // str r0, [sp, #4]
    LoadUserFrameGfx2(*((u32*)r4), r0, 0x000003D9, 0xa);
    FillWindowPixelBuffer(r4, 0xf);
    DrawFrameAndWindow2(r4, 0, 0x000003D9, 0xa);
}




void ov82_0223FDB8(void) {
}




void ov82_0223FDC0(void) {
}




void ov82_0223FDC8(void) {
    // add r0, sp, #0
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r5, [sp]
    // str r2, [sp, #4]
    // add r0, sp, #0
    // and r3, r4
    // add r1, sp, #0
}




void ov82_0223FE18(void) {
}



