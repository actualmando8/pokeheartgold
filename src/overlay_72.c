/* Decompiled from asm/overlay_72.s */
#include "global.h"

void ov72_022378C0(void) {
    // str r4, [r3]
    *((u32*)(_0223B820 + 4)) = 0;
    *((u32*)(_0223B820 + 8)) = r0;
    *((u32*)(_0223B820 + 0xc)) = r1;
    *((u32*)(_0223B820 + 0x10)) = r2;
}




void ov72_022378DC(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _022378F4: ; jump table
    ov38_0221BF48((*((u16*)(*((u32*)_0223B820) + 6)) << 0x10), _0223B820);
    // str r1, [r0]
    ov38_0221C014(_0223B820, 0xc);
    ov72_02237D88();
    *((u32*)(_0223B820 + 4)) = r0;
    ov38_0221BFEC(_0223B820);
    // str r1, [r0]
    ov38_0221C020(_0223B820, 0xc);
    // mvn r1, r1
    *((u32*)(_0223B820 + 4)) = 1;
    ov38_0221BFEC(_0223B820, 1);
    ov38_0221BF48();
    // str r1, [r0]
    ov38_0221C014(_0223B820, 0xc);
    ov72_02237D88();
    *((u32*)(_0223B820 + 4)) = r0;
    ov38_0221BFEC(_0223B820);
    // str r1, [r0]
    ov38_0221C020(_0223B820, 0xc);
    *((u32*)(_0223B820 + 4)) = 0;
    // mvn r1, r1
    *((u32*)(_0223B820 + 4)) = 2;
    // mvn r1, r1
    *((u32*)(_0223B820 + 4)) = 1;
    // mvn r1, r1
    *((u32*)(_0223B820 + 4)) = 4;
    ov38_0221BFEC(_0223B820, 4);
    ov38_0221BF48();
    // str r1, [r0]
    ov38_0221C014(_0223B820, 0xc);
    ov72_02237D88();
    *((u32*)(_0223B820 + 4)) = r0;
    ov38_0221BFEC(_0223B820);
    // str r1, [r0]
    // add r2, r2, r2
    // add r2, pc
    // asr r2, r2, #0x10
    // add pc, r2
    // _02237A08: ; jump table
    *((u32*)(_0223B820 + 4)) = 0;
    // sub r1, #0xf
    *((u32*)(_0223B820 + 4)) = 0;
    // sub r1, #0xd
    *((u32*)(_0223B820 + 4)) = 0;
    // sub r1, #0xe
    *((u32*)(_0223B820 + 4)) = 0;
    // mvn r1, r1
    *((u32*)(_0223B820 + 4)) = 4;
    ov38_0221BFEC(_0223B820, 4, (*((u16*)(*((u8*)(ov72_0223B920 + 3)) + 6)) << 0x10));
    ov38_0221BF48();
    // str r1, [r0]
    ov38_0221C014(_0223B820, 0xc);
    ov72_02237D88();
    *((u32*)(_0223B820 + 4)) = r0;
    ov38_0221BFEC(_0223B820);
    // str r1, [r0]
    // add r2, r2, r2
    // add r2, pc
    // asr r2, r2, #0x10
    // add pc, r2
    // _02237A7A: ; jump table
    *((u32*)(_0223B820 + 4)) = 0;
    *((u32*)(_0223B820 + 4)) = 1;
    *((u32*)(_0223B820 + 4)) = 2;
    // sub r1, #0xe
    *((u32*)(_0223B820 + 4)) = 2;
    // mvn r1, r1
    *((u32*)(_0223B820 + 4)) = 4;
    ov38_0221BFEC(_0223B820, 4, (*((u16*)(*((u8*)(ov72_0223B920 + 3)) + 6)) << 0x10));
    ov38_0221BF48();
    // str r1, [r0]
    ov38_0221C014(_0223B820, 0xc);
    ov72_02237D88();
    *((u32*)(_0223B820 + 4)) = r0;
    ov38_0221BFEC(_0223B820);
    // str r1, [r0]
    ov38_0221C020(_0223B820, 0xc);
    *((u32*)(_0223B820 + 4)) = 0;
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02237AFC: ; jump table
    *((u32*)(_0223B820 + 4)) = 0;
    *((u32*)(_0223B820 + 4)) = 1;
    *((u32*)(_0223B820 + 4)) = 2;
    // mvn r1, r1
    *((u32*)(_0223B820 + 4)) = 1;
    // mvn r1, r1
    *((u32*)(_0223B820 + 4)) = 4;
    ov38_0221BFEC(_0223B820, 4);
    // str r0, [r1]
    // sub r0, #0x10
    *((u32*)(r1 + 4)) = 0xc;
    ov38_0221BFEC(0xc);
}




void ov72_02237B54(void) {
    // str r0, [r1]
}




void ov72_02237B74(void) {
    // nop
    // _02237B7C: .word _0223B820
}




void ov72_02237B80(void) {
    ov38_0221BE84();
    *((u8*)(_0223B820 + 0x14)) = (r4 - 1);
    // str r0, [sp]
    ov72_02237D50(_0223B4E0, ov72_0223B834, 1, ov72_0223B923);
    // str r1, [r0]
    // str r1, [r0]
    // sub r1, #0x11
    *((u32*)(_0223B820 + 4)) = 0xc;
    ov38_0221BFEC(_0223B820, 0xc);
}




void ov72_02237BD0(void) {
    *((u32*)(ov72_0223B920 + 8)) = r2;
    ov38_0221BE84(ov72_0223B920);
    *((u8*)(_0223B820 + 0x14)) = (r5 - 1);
    *((u8*)(_0223B820 + 0x15)) = (r4 - 1);
    // str r0, [sp]
    ov72_02237D50(ov72_0223B52C, ov72_0223B834, 2, r6);
    // str r1, [r0]
    // str r1, [r0]
    // sub r1, #0x11
    *((u32*)(_0223B820 + 4)) = 0xc;
    ov38_0221BFEC(_0223B820, 0xc);
}




void ov72_02237C30(void) {
    ov38_0221BE84();
    memcpy(ov72_0223B834, r4, 0xe4);
    *((u8*)(ov72_0223B900 + 0x18)) = (r5 - 1);
    *((u8*)(ov72_0223B900 + 0x19)) = (r6 - 1);
    *((u8*)(ov72_0223B900 + 0x1a)) = r7;
    // strb r0, [r3]
    // str r0, [sp]
    ov72_02237D50(ov72_0223B578, ov72_0223B834, 0xef, ov72_0223B923);
    // str r1, [r0]
    // str r1, [r0]
    // sub r1, #0x11
    *((u32*)(_0223B820 + 4)) = 0xc;
    ov38_0221BFEC(_0223B820, 0xc);
}




void ov72_02237CB0(void) {
    ov38_0221BE84();
    // str r0, [sp]
    ov72_02237D50(ov72_0223B5C4, ov72_0223B834, 0, ov72_0223B923);
    // str r1, [r0]
    // str r1, [r0]
    // sub r1, #0x11
    *((u32*)(_0223B820 + 4)) = 0xc;
    ov38_0221BFEC(_0223B820, 0xc);
}




void ov72_02237CF4(void) {
    // add r0, #0x1c
    OS_GetMacAddress();
    memcpy(ov72_0223B834, r5, 0x64);
    *((u32*)(ov72_0223B920 + 8)) = r4;
    ov38_0221BE84(ov72_0223B920);
    // str r0, [sp]
    ov72_02237D50(ov72_0223B60C, ov72_0223B834, 0x64, *((u32*)(ov72_0223B920 + 8)));
    // str r1, [r0]
    // str r1, [r0]
    // sub r1, #0x11
    *((u32*)(_0223B820 + 4)) = 0xc;
    ov38_0221BFEC(_0223B820, 0xc);
}




void ov72_02237D50(void) {
    // ldr r1, [sp, #0x18]
    // str r3, [sp]
    // str r1, [sp, #4]
    ov38_0221BEA8(*((u32*)(_0223B820 + 8)), r1, r2);
}




void ov72_02237D88(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02237D9A: ; jump table
    // mvn r4, r4
    // mvn r4, r4
    // mvn r4, r4
    // mvn r4, r4
    // mvn r4, r4
    // mvn r4, r4
    // mvn r4, r4
    // mvn r0, r0
    // mvn r4, r4
}




BOOL NintendoWfc_Init(void) {
    Main_SetVBlankIntrCB(0, 0);
    HBlankInterruptDisable();
    GfGfx_DisableEngineAPlanes();
    GfGfx_DisableEngineBPlanes();
    // and r1, r0
    // str r1, [r2]
    // and r0, r1
    // str r0, [r2]
    Heap_Create(3, 0x43, (5 << 0x10));
    LoadDwcOverlay();
    LoadOVY38();
    sub_02039FD8(0x43);
    OverlayManager_CreateAndGetData(r6, 0x000013A4, 0x43);
    memset(0, 0x000013A4);
    BgConfig_Alloc(0x43);
    *((u32*)(r4 + 4)) = r0;
    // add r2, sp, #0
    *((u32*)(ov72_0223B92C + 4)) = r4;
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    SetBothScreensModesAndDisable(r2, ov72_0223B354);
    MessageFormat_New_Custom(0xb, 0x20, 0x43);
    // str r0, [r4, r1]
    NewMsgDataFromNarc(0, 0x1b, 0x00000306, 0x43);
    // str r0, [r4, r1]
    NewMsgDataFromNarc(0, 0x1b, 0x0000030A, 0x43);
    // str r0, [r4, r1]
    NewMsgDataFromNarc(0, 0x1b, (0x32 << 4), 0x43);
    // str r0, [r4, r1]
    SetKeyRepeatTimers(4, 8);
    ov72_02238144(r4, r6);
    ov72_022387D8(r4);
    Sound_SetSceneAndPlayBGM(0x34, 0, 0);
    Heap_Alloc(0x43, 0x00020020);
    *((u32*)(r4 + 0x24)) = r0;
    // add r0, #0x1f
    NNS_FndCreateExpHeapEx((r0 & ~(0x1f)), (2 << 0x10), 0);
    *((u32*)(r4 + 0x28)) = r0;
    Sound_SetSceneAndPlayBGM(0xb, 0x0000047D, 1);
    TextFlags_SetCanTouchSpeedUpPrint(1);
    // strh r0, [r2]
    // str r0, [r5]
    sub_02034D8C(1, *((u16*)0x04000304), 0x04000304);
    FontID_Alloc(4, 0x43);
    // str r0, [r5]
}




BOOL NintendoWfc_Main(void) {
    OverlayManager_GetData();
    ov00_021ECB40();
    ov72_022378DC();
    ov00_021ECB40();
    // add r0, r1, r1
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02237FC4: ; jump table
    sub_02034DB8((*((u16*)(r0 + 6)) << 0x10), *((u32*)r4));
    // str r1, [r0]
    ov00_021EC294(ov72_02238778, ov72_022387A0);
    // str r0, [r4]
    // blx r2
    // str r0, [r4]
    IsPaletteFadeFinished(r5, *((u32*)(ov72_0223B654 + (*((u32*)(r5 + 0x10)) * 0xc))), *((u32*)(r5 + 0x10)));
    // str r0, [r4]
    // blx r2
    // str r0, [r4]
    IsPaletteFadeFinished(r5, *((u32*)(ov72_0223B658 + (*((u32*)(r5 + 0x10)) * 0xc))), *((u32*)(r5 + 0x10)));
    // blx r2
    // str r0, [r4]
    SpriteList_RenderAndAnimateSprites(*((u32*)(r5 + 0x00000BF8)), *((u32*)r4), *((u32*)(ov72_0223B65C + (*((u32*)(r5 + 0x10)) * 0xc))), *((u32*)(r5 + 0x10)));
}




BOOL NintendoWfc_Exit(void) {
    OverlayManager_GetData();
    IsPaletteFadeFinished();
    TextFlags_SetCanTouchSpeedUpPrint(0);
    FontID_Release(4);
    Heap_Free(*((u32*)(r4 + 0x24)));
    UnloadOVY38();
    UnloadDwcOverlay();
    ov72_02238800(r4);
    DestroyMsgData(*((u32*)(r4 + 0x00000BDC)));
    DestroyMsgData(*((u32*)(r4 + 0x00000BD8)));
    DestroyMsgData(*((u32*)(r4 + 0x00000BD4)));
    MessageFormat_Delete(*((u32*)(r4 + (0xbd << 4))));
    ov72_02238160(r4);
    sub_02034DE0();
    Heap_Free(*((u32*)(r4 + 4)));
    OverlayManager_FreeData(r5);
    Main_SetVBlankIntrCB(0, 0);
    Heap_Destroy(0x43);
}




void ov72_022380FC(void) {
    GF_RunVramTransferTasks();
    DoScheduledBgGpuUpdates(*((u32*)(r4 + 4)));
    OamManager_ApplyAndResetBuffers();
    // str r0, [r3, r1]
}




void ov72_02238124(void) {
}




void ov72_02238144(void) {
}




void ov72_02238160(void) {
}




void ov72_02238164(void) {
    // add r3, sp, #0
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    ObjCharTransfer_Init(r3, r3);
    ObjPlttTransfer_Init(0x14, 0x43);
    ObjCharTransfer_ClearBuffers();
    ObjPlttTransfer_Reset();
}




void ov72_02238194(void) {
    NARC_New(0xef, 0x43);
    // str r0, [sp, #0x14]
    NARC_New(0xee, 0x43);
    NNS_G2dInitOamManagerModule();
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // str r2, [sp, #0x10]
    OamManager_Create(0, 0x7e, 0, 0x20);
    // add r1, r5, r1
    G2dRenderer_Init(0x14, 0x00000BFC, 0x43);
    // str r0, [r5, r1]
    // add r0, r5, r0
    G2dRenderer_SetSubSurfaceCoords((0x00000BF8 + 4), 0, (1 << 0x14));
    Create2DGfxResObjMan(3, 0, 0x43);
    // str r0, [r4, r1]
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    AddCharResObjFromOpenNarc(*((u32*)(r5 + 0x00000D24)), r7, 1, 0);
    // str r0, [r5, r1]
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // sub r1, #0xc
    // str r0, [sp, #0xc]
    AddPlttResObjFromOpenNarc(*((u32*)(r5 + 0x00000D34)), r7, 0, 0);
    // str r0, [r5, r1]
    // str r3, [sp]
    // str r2, [sp, #4]
    // sub r1, #0xc
    // str r0, [sp, #8]
    AddCellOrAnimResObjFromOpenNarc(*((u32*)(r5 + 0x00000D38)), r7, 2, 0);
    // str r0, [r5, r1]
    // str r3, [sp]
    // str r2, [sp, #4]
    // sub r1, #0xc
    // str r0, [sp, #8]
    AddCellOrAnimResObjFromOpenNarc(*((u32*)(r5 + 0x00000D3C)), r7, 3, 0);
    // str r0, [r5, r1]
    // str r0, [sp]
    // str r0, [sp, #4]
    // sub r1, #0x1c
    // str r0, [sp, #8]
    AddCharResObjFromOpenNarc(*((u32*)(r5 + (0x35 << 6))), r7, 5, 0);
    // str r0, [r5, r1]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // sub r1, #0x1c
    // str r0, [sp, #0xc]
    AddPlttResObjFromOpenNarc(*((u32*)(r5 + 0x00000D44)), r7, 4, 0);
    // str r0, [r5, r1]
    // str r0, [sp]
    // str r0, [sp, #4]
    // sub r1, #0x1c
    // str r0, [sp, #8]
    AddCellOrAnimResObjFromOpenNarc(*((u32*)(r5 + 0x00000D48)), r7, 6, 0);
    // str r0, [r5, r1]
    // str r0, [sp]
    // str r0, [sp, #4]
    // sub r1, #0x1c
    // str r0, [sp, #8]
    AddCellOrAnimResObjFromOpenNarc(*((u32*)(r5 + 0x00000D4C)), r7, 7, 0);
    // str r0, [r5, r1]
    // str r0, [sp]
    // str r0, [sp, #4]
    // sub r1, #0x2c
    // str r0, [sp, #8]
    // ldr r1, [sp, #0x14]
    AddCharResObjFromOpenNarc(*((u32*)(r5 + (0xd5 << 4))), (0xd5 << 4), 0xc, 0);
    // str r0, [r5, r1]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // sub r1, #0x2c
    // str r0, [sp, #0xc]
    // ldr r1, [sp, #0x14]
    AddPlttResObjFromOpenNarc(*((u32*)(r5 + 0x00000D54)), 0x00000D54, 0xb, 0);
    // str r0, [r5, r1]
    // str r0, [sp]
    // str r0, [sp, #4]
    // sub r1, #0x2c
    // str r0, [sp, #8]
    // ldr r1, [sp, #0x14]
    AddCellOrAnimResObjFromOpenNarc(*((u32*)(r5 + 0x00000D58)), 0x00000D58, 0xd, 0);
    // str r0, [r5, r1]
    // str r0, [sp]
    // str r0, [sp, #4]
    // sub r1, #0x2c
    // str r0, [sp, #8]
    // ldr r1, [sp, #0x14]
    AddCellOrAnimResObjFromOpenNarc(*((u32*)(r5 + 0x00000D5C)), 0x00000D5C, 0xe, 0);
    // str r0, [r5, r1]
    // sub r1, #0x2c
    sub_0200ACF0(*((u32*)(r5 + (0xd6 << 4))), (0xd6 << 4));
    sub_0200ACF0(*((u32*)(r5 + 0x00000D44)));
    sub_0200ACF0(*((u32*)(r5 + 0x00000D54)));
    sub_0200AF94(*((u32*)(r5 + 0x00000D38)));
    sub_0200AF94(*((u32*)(r5 + 0x00000D48)));
    sub_0200AF94(*((u32*)(r5 + 0x00000D58)));
    NARC_Delete(r7);
    // ldr r0, [sp, #0x14]
    NARC_Delete();
}




void ov72_022383DC(void) {
    // str r1, [r0]
    *((u32*)(r0 + 4)) = r2;
    *((u32*)(r0 + 0x10)) = 0;
    *((u32*)(r0 + 0x14)) = (1 << 0xc);
    *((u32*)(r0 + 0x18)) = (1 << 0xc);
    *((u32*)(r0 + 0x1c)) = (1 << 0xc);
    *((u16*)(r0 + 0x20)) = 0;
    *((u32*)(r0 + 0x24)) = 1;
    *((u32*)(r0 + 0x28)) = r3;
    *((u32*)(r0 + 0x2c)) = 0x43;
}




void ov72_02238408(void) {
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
    // add r0, r6, r2
    // str r1, [sp, #0x28]
    CreateSpriteResourcesHeader(*((u32*)(r0 + 0x00000D24)), 0, 0, 0);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r2, [sp, #0x14]
    // str r2, [sp, #0x18]
    // add r2, #8
    // str r2, [sp, #0x1c]
    // add r2, #0xc
    // add r3, #0x64
    // str r2, [sp, #0x20]
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x28]
    // add r0, r6, r3
    CreateSpriteResourcesHeader(0, 1, 1, 1);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r2, [sp, #0x14]
    // str r2, [sp, #0x18]
    // add r2, #8
    // str r2, [sp, #0x1c]
    // add r2, #0xc
    // add r3, #0x88
    // str r2, [sp, #0x20]
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x28]
    // add r0, r6, r3
    CreateSpriteResourcesHeader(0, 2, 2, 2);
    // add r0, sp, #0x2c
    // add r2, r6, r2
    ov72_022383DC(r6, 0x00000D64, 2);
    // str r0, [sp, #0x34]
    // add r0, r1, r0
    // str r0, [sp, #0x38]
    // add r0, sp, #0x2c
    Sprite_CreateAffine((1 << 0x14), (*((u16*)(ov72_0223B364 + 2)) << 0xc));
    // str r0, [r5, r1]
    Sprite_SetAnimActiveFlag(*((u32*)(r5 + 0x00000DF4)), 1);
    Sprite_SetAnimCtrlSeq(*((u32*)(r5 + 0x00000DF4)), 0);
    Sprite_SetDrawFlag(*((u32*)(r5 + 0x00000DF4)), 0);
    // add r0, sp, #0x2c
    // add r2, r6, r2
    ov72_022383DC(r6, 0x00000D88, 2);
    // str r0, [sp, #0x34]
    // str r0, [sp, #0x38]
    // add r0, sp, #0x2c
    Sprite_CreateAffine(0x00151000);
    // str r0, [r6, r1]
    Sprite_SetAnimActiveFlag(*((u32*)(r6 + (0xe << 8))), 1);
    Sprite_SetAnimCtrlSeq(*((u32*)(r6 + (0xe << 8))), 1);
    Sprite_SetDrawFlag(*((u32*)(r6 + (0xe << 8))), 0);
    // str r0, [sp, #0x34]
    // str r0, [sp, #0x38]
    // add r0, sp, #0x2c
    Sprite_CreateAffine(0x00129000);
    // str r0, [r6, r1]
    Sprite_SetAnimActiveFlag(*((u32*)(r6 + 0x00000E04)), 1);
    Sprite_SetAnimCtrlSeq(*((u32*)(r6 + 0x00000E04)), 0);
    Sprite_SetDrawFlag(*((u32*)(r6 + 0x00000E04)), 0);
    // str r0, [sp, #0x34]
    // add r0, r1, r0
    // str r0, [sp, #0x38]
    // add r0, sp, #0x2c
    Sprite_CreateAffine((1 << 0x14), (*((u16*)(ov72_0223B338 + 2)) << 0xc));
    // str r0, [r5, r1]
    Sprite_SetAnimActiveFlag(*((u32*)(r5 + 0x00000E08)), 1);
    Sprite_SetAnimCtrlSeq(*((u32*)(r5 + 0x00000E08)), 3);
    Sprite_SetPriority(*((u32*)(r5 + 0x00000E08)), 1);
    Sprite_SetDrawFlag(*((u32*)(r5 + 0x00000E08)), 0);
    // add r0, sp, #0x2c
    // add r2, r6, r2
    ov72_022383DC(r6, 0x00000DAC, 2);
    // str r0, [sp, #0x34]
    // str r0, [sp, #0x38]
    // add r0, sp, #0x2c
    Sprite_CreateAffine(0x00151000);
    // str r0, [r6, r1]
    Sprite_SetAnimActiveFlag(*((u32*)(r6 + 0x00000E14)), 1);
    Sprite_SetAnimCtrlSeq(*((u32*)(r6 + 0x00000E14)), 1);
    Sprite_SetDrawFlag(*((u32*)(r6 + 0x00000E14)), 0);
    GfGfx_EngineATogglePlanes(0x10, 1);
    GfGfx_EngineBTogglePlanes(0x10, 1);
    sub_0203A880();
}




void ov72_02238668(void) {
}




void ov72_02238680(void) {
}




void ov72_02238688(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r1, sp, #0
}




void ov72_022386F4(void) {
    // add r2, r3, r2
    ov72_02238688(*((u16*)(ov72_0223B3A4 + (r1 << 2))), (1 << 8), *((u16*)(ov72_0223B3A6 + (r1 << 2))));
    Sprite_SetAnimCtrlSeq(r5, 1);
    Sprite_SetAnimCtrlSeq(r5, 2);
}




void ov72_02238730(void) {
}




void ov72_02238750(void) {
    // add r2, r2, r3
    // add r1, r1, r3
    // add r5, #0xf4
    // add r2, r2, r5
    ov72_02238688(*((u16*)((r1 << 2) + ov72_0223B364)), *((u16*)((r1 << 2) + ov72_0223B366)), (r2 * 0xc));
}




void ov72_02238778(void) {
    OS_DisableInterrupts();
    NNS_FndAllocFromExpHeapEx(*((u32*)ov72_0223B92C), r5, r4);
    OS_RestoreInterrupts(r6);
}




void ov72_022387A0(void) {
    OS_DisableInterrupts();
    NNS_FndFreeToExpHeap(*((u32*)ov72_0223B92C), r5);
    OS_RestoreInterrupts(r4);
}




void ov72_022387C4(void) {
}




void ov72_022387D0(void) {
}




void ov72_022387D8(void) {
    ov72_02238124();
    ov72_02238164();
    ov72_02238194(r4);
    ov72_02238408(r4);
    Main_SetVBlankIntrCB(ov72_022380FC, r4);
}




void ov72_02238800(void) {
    sub_0200AEB0(*((u32*)(r0 + 0x00000D34)));
    sub_0200AEB0(*((u32*)(r6 + 0x00000D44)));
    sub_0200B0A8(*((u32*)(r6 + 0x00000D38)));
    sub_0200B0A8(*((u32*)(r6 + 0x00000D48)));
    Destroy2DGfxResObjMan(*((u32*)(r6 + 0x00000D24)));
    SpriteList_Delete(*((u32*)(r6 + 0x00000BF8)));
    // str r1, [r6, r0]
    OamManager_Free(0x00000BF8, 0);
    ObjCharTransfer_Destroy();
    ObjPlttTransfer_Destroy();
}




void ov72_0223886C(void) {
    ov72_02239040();
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 1, 1, 0);
    ov72_022389C8(*((u32*)(r4 + 4)));
    ov72_02238BEC(r4);
    ov72_02238EE4(r4);
    GfGfx_EngineATogglePlanes(1, 1);
    GfGfx_EngineATogglePlanes(2, 1);
    GfGfx_EngineBTogglePlanes(1, 1);
    GfGfx_EngineBTogglePlanes(2, 1);
    sub_0202D488(*((u32*)*((u32*)r4)), 0);
    // add r1, #0x90
    // str r0, [r1]
    // add r0, #0x90
    // add r0, #0x94
    // str r1, [r0]
    // add r0, #0x9c
    // str r1, [r0]
    // str r1, [r4, r0]
    ov00_021EC5B4(0x00000F4C, 0);
    sub_02039418(*((u32*)(*((u32*)r4) + 0xc)), *((u32*)r4));
    // str r0, [sp]
    ov72_0223A350(r4, *((u32*)(r4 + 0x00000BD8)), 1, 1);
    ov72_02238680(r4, 0x2f, 2);
    ov72_0223A420(r4);
    Sys_ClearSleepDisableFlag(4);
    *((u32*)(r4 + 0x1c)) = 0;
    sub_02039418(*((u32*)(*((u32*)r4) + 0xc)));
    *((u32*)(r4 + 0x1c)) = 0x33;
}




void ov72_0223894C(void) {
    ov72_022387C4();
    sub_0203A930();
    // blx r1
    // strh r2, [r5, r1]
    // strh r2, [r5, r1]
}




void ov72_0223897C(void) {
    SysTask_Destroy(*((u32*)(r0 + 0x00000FD8)));
    // str r1, [r4, r0]
    // str r1, [r4, r0]
    ov72_02239098(r4, 0);
    ov72_02238FFC(r4);
    ov72_02238AEC(*((u32*)(r4 + 4)));
    // str r1, [r4, r0]
    *((u32*)(r4 + 0x10)) = *((u32*)(r4 + 0x14));
}




void ov72_022389C8(void) {
    // ldmia r5!, {r0, r1}
    // add r3, sp, #0x70
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r0, 0, r3, 0);
    GfGfx_EngineATogglePlanes(1, 0);
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
    GfGfx_EngineATogglePlanes(2, 0);
    // add r3, sp, #0x38
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
    // add r3, sp, #0x1c
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 5, r3, 0);
    GfGfx_EngineBTogglePlanes(2, 0);
    // add r3, sp, #0
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 6, r3, 0);
    GfGfx_EngineBTogglePlanes(4, 1);
    BgClearTilemapBufferAndCommit(r4, 6);
    BG_ClearCharDataRange(0, 0x20, 0, 0x43);
    BG_ClearCharDataRange(4, 0x20, 0, 0x43);
    BG_ClearCharDataRange(6, 0x20, 0, 0x43);
}




void ov72_02238AEC(void) {
}




void ov72_02238B18(void) {
    NARC_New(0x58, 0x43);
    // str r1, [sp]
    // str r1, [sp, #4]
    GfGfxLoader_GXLoadPalFromOpenNarc(3, 4, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharDataFromOpenNarc(r6, 0xb, r4, 5);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnDataFromOpenNarc(r6, 0xc, r4, 5);
    // str r1, [r5, r0]
    NARC_Delete(r6, 0);
    NARC_New(0xee, 0x43);
    // str r2, [r5, r1]
    // str r1, [sp]
    // str r1, [sp, #4]
    GfGfxLoader_GXLoadPalFromOpenNarc(8, 4, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharDataFromOpenNarc(r6, 9, r4, 5);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnDataFromOpenNarc(r6, 0xa, r4, 5);
    NARC_Delete(r6);
}




void ov72_02238BEC(void) {
    // str r0, [sp, #0x10]
    NARC_New(0x58, 0x43);
    // str r2, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #0x2c]
    GfGfxLoader_GXLoadPalFromOpenNarc(3, 0, 0);
    // str r3, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x2c]
    GfGfxLoader_GXLoadPalFromOpenNarc(0x43, 3, 4, 0);
    LoadFontPal1(0, (0x1a << 4), 0x43);
    LoadFontPal1(4, (0x1a << 4), 0x43);
    // ldr r0, [sp, #0x10]
    Options_GetFrame(*((u32*)(*((u32*)r0) + 0x10)));
    // str r0, [sp]
    // str r0, [sp, #4]
    LoadUserFrameGfx2(r4, 0, 1, 0xe);
    // ldr r0, [sp, #0x10]
    Options_GetFrame(*((u32*)(*((u32*)r0) + 0x10)));
    // str r0, [sp]
    // str r0, [sp, #4]
    LoadUserFrameGfx2(r4, 4, 1, 0xe);
    // str r1, [sp]
    // str r0, [sp, #4]
    LoadUserFrameGfx1(r4, 0, 0x1f, 0xb);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x2c]
    GfGfxLoader_LoadCharDataFromOpenNarc(0x43, 2, r4, 1);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x2c]
    GfGfxLoader_LoadScrnDataFromOpenNarc(0x43, 6, r4, 1);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x2c]
    GfGfxLoader_LoadCharDataFromOpenNarc(0x43, 0xb, r4, 5);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x2c]
    GfGfxLoader_LoadScrnDataFromOpenNarc(0x43, 0xc, r4, 5);
    BG_SetMaskColor(0, 0);
    BG_SetMaskColor(4, 0);
    // ldr r0, [sp, #0x10]
    // add r0, r0, r1
    MI_CpuFill8(0, (0x33 << 4));
    // ldr r0, [sp, #0x2c]
    // add r2, sp, #0x38
    GfGfxLoader_GetPlttDataFromOpenNarc(5, 0x43);
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
    SysTask_CreateOnVBlankQueue(ov72_02238E3C, 0x00000FDC, 0x14, 0);
    // ldr r1, [sp, #0x10]
    // str r0, [r1, r2]
    // ldr r0, [sp, #0x2c]
    NARC_Delete(0x00000FD8);
}




void ov72_02238E3C(void) {
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




void ov72_02238EE4(void) {
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, r4, r1
    AddWindowParameterized(*((u32*)(r0 + 4)), 0x00000E58, 0, 4);
    // add r0, r4, r0
    FillWindowPixelBuffer(0x00000E58, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, r4, r1
    AddWindowParameterized(*((u32*)(r4 + 4)), 0x00000E38, 0, 0x1a);
    // add r0, r4, r0
    FillWindowPixelBuffer(0x00000E38, 0xf);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, r4, r1
    AddWindowParameterized(*((u32*)(r4 + 4)), 0x00000E28, 0, 0x1a);
    // add r0, r4, r0
    FillWindowPixelBuffer(0x00000E28, 0xf);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, r4, r1
    AddWindowParameterized(*((u32*)(r4 + 4)), 0x00000E48, 0, 4);
    // add r0, r4, r0
    FillWindowPixelBuffer(0x00000E48, 0);
    // str r3, [sp]
    // str r0, [sp, #4]
    // add r0, r4, r0
    ov72_0223A3E0(0x00000E48, *((u32*)(r4 + 0x00000BE4)), 0, 1);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, r4, r1
    AddWindowParameterized(*((u32*)(r4 + 4)), 0x00000E18, 0, 2);
    // add r0, r4, r0
    FillWindowPixelBuffer(0x00000E18, 0xf);
}




void ov72_02238FFC(void) {
    // add r0, r4, r0
    RemoveWindow(0x00000E18);
    // add r0, r4, r0
    RemoveWindow(0x00000E48);
    // add r0, r4, r0
    RemoveWindow(0x00000E28);
    // add r0, r4, r0
    RemoveWindow(0x00000E38);
    // add r0, r4, r0
    RemoveWindow(0x00000E58);
}




void ov72_02239040(void) {
    String_New(0xb4, 0x43);
    // str r0, [r4, r1]
    String_New(4, 0x43);
    // str r0, [r4, r1]
    String_New(3, 0x43);
    // str r0, [r4, r1]
    // sub r1, #0x18
    NewString_ReadMsgData(*((u32*)(r4 + 0x00000BEC)), 0xc);
    // str r0, [r4, r1]
    String_New((1 << 8), 0x43);
    // str r0, [r4, r1]
}




void ov72_02239098(void) {
    String_Delete(*((u32*)(r0 + (0xbf << 4))));
    String_Delete(*((u32*)(r4 + 0x00000BE4)));
    String_Delete(*((u32*)(r4 + 0x00000BEC)));
    String_Delete(*((u32*)(r4 + 0x00000BE8)));
    String_Delete(*((u32*)(r4 + (0xbe << 4))));
}




void ov72_022390D8(void) {
    // str r1, [sp]
    ov72_0223A350(*((u32*)(r0 + 0x00000BDC)), 0x11, 1);
    ov72_02238680(r4, 0x30, 1);
}




void ov72_02239108(void) {
    // add r0, r4, r0
    ov72_0223AF48(0x0000136C);
    sub_0203946C();
    ov72_022387D0(r4, 0, 0);
    *((u32*)(r4 + 0x1c)) = 0x2e;
    // str r0, [sp]
    ov72_0223A350(r4, *((u32*)(r4 + 0x00000BD8)), 1, 1);
    ov72_02238680(r4, 0x2f, 2);
    ov72_0223A420(r4);
}




void ov72_02239168(void) {
    // str r1, [sp]
    ov72_0223A350(*((u32*)(r0 + 0x00000BD8)), 0xc, 1);
    ov72_02238680(r4, 0x30, 0x34);
}




void ov72_02239198(void) {
    // add r0, r4, r0
    ov72_0223AF48(0x0000136C);
    ov00_021EC5B4();
    *((u32*)(r4 + 0x1c)) = 0;
    *((u32*)(r4 + 0x1c)) = 0x29;
    ov00_021EC5B4(0x29);
    ov72_022387D0(r4, 0, 0);
    *((u32*)(r4 + 0x1c)) = 0x29;
    *((u32*)(*((u32*)r4) + 0x20)) = 1;
}




void ov72_022391E8(void) {
}




void ov72_02239220(void) {
    ov00_021EC60C();
    ov00_021EC5B4();
    ov00_021EC724();
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02239246: ; jump table
    // add r0, sp, #4
    ov00_021EC0FC((*((u16*)(r0 + 6)) << 0x10));
    // str r0, [r4, r1]
    // ldr r2, [sp, #4]
    // str r2, [r4, r0]
    ov00_021EC210(((0xf5 << 4) + 4), (0xf5 << 4));
    ov00_021EC8D8();
    ov72_0223A444(r4);
    *((u32*)(r4 + 0x1c)) = 0x37;
    // add r0, sp, #0
    ov00_021EC0FC(0x37);
    ov72_0223A444(r4);
    *((u32*)(r4 + 0x1c)) = 0x35;
    // sub r1, #0x37
    // str r1, [r4, r0]
    // add r0, sp, #8
    ov00_021EC9E0(0x00000F5C, 0x35);
    *((u32*)(r4 + 0x1c)) = 4;
}




void ov72_022392AC(void) {
}




void ov72_022392BC(void) {
    ov00_021ECDC8();
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _022392D6: ; jump table
    *((u32*)(r4 + 0x1c)) = 6;
    ov72_0223A444(r4);
    // add r0, sp, #4
    // add r1, sp, #0
    ov00_021EC11C();
    // str r0, [r4, r1]
    // ldr r2, [sp, #4]
    // str r2, [r4, r0]
    ov00_021EC210(((0xf5 << 4) + 4), (0xf5 << 4));
    ov00_021EC8D8();
    *((u32*)(r4 + 0x1c)) = 0x37;
    // ldr r1, [sp]
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _02239320: ; jump table
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




void ov72_02239370(void) {
}




void ov72_022393B0(void) {
}




void ov72_022393CC(void) {
    ov72_02237B54();
    ov72_02237B74();
    // str r2, [r4, r1]
    // add r2, r2, r2
    // add r2, pc
    // asr r2, r2, #0x10
    // add pc, r2
    // _022393F4: ; jump table
    ov72_0223A444(r4, 0x00000FD4, (*((u16*)((r0 + 7) + 6)) << 0x10));
    ov72_02238680(r4, 0xb, 0xd);
    *((u32*)(r4 + 0x1c)) = 0x19;
    *((u32*)(r4 + 0x1c)) = 0x1d;
    // sub r1, #0x78
    // str r0, [r4, r1]
    *((u32*)(r4 + 0x1c)) = 0x35;
    ov72_0223A444(r4);
    // sub r1, #0x78
    // str r0, [r4, r1]
    *((u32*)(r4 + 0x1c)) = 0x35;
    ov72_0223A444(r4);
    // sub r1, #0x78
    // str r0, [r4, r1]
    *((u32*)(r4 + 0x1c)) = 0x35;
    ov72_0223A444(r4);
    // sub r1, #0x78
    // str r0, [r4, r1]
    *((u32*)(r4 + 0x1c)) = 0x35;
    ov72_0223A444(r4);
    ov72_0223A444(r4);
    sub_020399EC();
    // str r1, [r4, r0]
    sub_020399EC((0xe1 << 4), *((u32*)(r4 + 0x00000FD4)));
}




void ov72_022394A4(void) {
    // add r1, r4, r1
    sub_0203189C(*((u32*)(*((u32*)r0) + 0xc)), 0x00000F64);
    // add r0, r4, r1
    // add r1, #0x64
    // add r1, r4, r1
    ov72_02237CF4(0x00000F64);
    *((u32*)(r4 + 0x1c)) = 0xa;
    // str r1, [r4, r0]
}




void ov72_022394D8(void) {
    ov72_02237B54();
    ov72_02237B74();
    // str r1, [r4, r0]
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _02239504: ; jump table
    ov72_0223A444(r4, (*((u16*)((r0 + 7) + 6)) << 0x10));
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _02239544: ; jump table
    ov72_02238680(r4, 0xb, 0xd);
    *((u32*)(r4 + 0x1c)) = 0x19;
    *((u32*)(r4 + 0x1c)) = 0x1d;
    // sub r0, #0x6c
    // str r5, [r4, r0]
    *((u32*)(r4 + 0x1c)) = 0x35;
    ov72_0223A444(r4);
    // str r5, [r4, r0]
    *((u32*)(r4 + 0x1c)) = 0x35;
    ov72_0223A444(r4);
    ov72_0223A444(r4);
    sub_020399EC();
    // sub r0, #0x78
    // str r5, [r4, r0]
    *((u32*)(r4 + 0x1c)) = 0x35;
    ov72_0223A444(r4);
    // sub r0, #0x78
    // str r5, [r4, r0]
    *((u32*)(r4 + 0x1c)) = 0x35;
    ov72_0223A444(r4);
    // sub r0, #0x78
    // str r5, [r4, r0]
    *((u32*)(r4 + 0x1c)) = 0x35;
    ov72_0223A444(r4);
    // sub r0, #0x78
    // str r5, [r4, r0]
    *((u32*)(r4 + 0x1c)) = 0x35;
    ov72_0223A444(r4);
    ov72_0223A444(r4);
    sub_020399EC();
    // str r1, [r4, r0]
    sub_020399EC((0xe1 << 4), *((u32*)(r4 + 0x00000FD4)));
}




void ov72_02239614(void) {
    // add r0, #0x94
    ov72_02237B80(*((u32*)r0));
    *((u32*)(r4 + 0x1c)) = 0xc;
    // str r1, [r4, r0]
    ov72_0223A420(r4, 0);
}




void ov72_02239638(void) {
    ov72_02237B54();
    ov72_02237B74();
    // str r2, [r4, r1]
    // add r2, r2, r2
    // add r2, pc
    // asr r2, r2, #0x10
    // add pc, r2
    // _02239660: ; jump table
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
    ov72_0223A444(r4, 0x00000FD4, (*((u16*)((r0 + 7) + 6)) << 0x10));
    sub_020399EC();
    // add r1, #0x98
    // str r0, [r1]
    *((u32*)(r4 + 0x1c)) = *((u32*)(r4 + 0x20));
    ov72_0223A444(r4, r4);
    // str r1, [r4, r0]
    sub_020399EC((0xe1 << 4), *((u32*)(r4 + 0x00000FD4)));
}




void ov72_022396E8(void) {
    // add r0, #0x98
    // str r0, [sp]
    // str r0, [sp, #4]
    BufferIntegerAsString(*((u32*)(r0 + (0xbd << 4))), 0, *((u32*)r0), 3);
    // str r0, [sp]
    ov72_0223A280(r4, *((u32*)(r4 + 0x00000BD4)), 0xb, 1);
    // str r3, [sp]
    // str r0, [sp, #4]
    BufferIntegerAsString(*((u32*)(r4 + (0xbd << 4))), 0, 2);
    // str r0, [sp]
    ov72_0223A280(r4, *((u32*)(r4 + 0x00000BD4)), 0, 1);
    ov72_02238680(r4, 0x2f, 0xe);
}




u32 ov72_02239760(void) {
}




void ov72_02239784(void) {
    // add r0, sp, #0
    // add r1, sp, #0x10
    // add r0, #0x9c
    // str r4, [r0]
    // add r1, #0x94
    // add r2, #0x9c
    // add r3, sp, #0
}




void ov72_022397E8(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r2, #0x9c
    BufferIntegerAsString(*((u32*)(r0 + (0xbd << 4))), 0, *((u32*)r0), 3);
    // str r3, [sp]
    // str r1, [sp, #4]
    // add r2, #0x94
    BufferIntegerAsString(*((u32*)(r4 + (0xbd << 4))), 1, *((u32*)r4), 2);
    // str r0, [sp]
    ov72_0223A280(r4, *((u32*)(r4 + 0x00000BD4)), 1, 1);
    ov72_02238680(r4, 0x2f, 0x11);
    // add r4, #0xa0
    MIi_CpuClearFast(0, r4, 0x00000A38);
}




void ov72_0223985C(void) {
    // str r1, [sp]
    ov72_0223A280(*((u32*)(r0 + 0x00000BD4)), 2, 1);
    ov72_02238680(r4, 0x2f, 0xd);
}




void ov72_0223988C(void) {
    // add r0, #0x90
    // add r1, #0x9c
    // add r2, #0xa0
    ov72_02237BD0(*((u32*)r0), *((u32*)r0), r0);
    ov72_0223A420(r4);
    *((u32*)(r4 + 0x1c)) = 0x12;
    // str r1, [r4, r0]
}




void ov72_022398BC(void) {
    ov72_02237B54();
    ov72_02237B74();
    // str r2, [r4, r1]
    // add r2, r2, r2
    // add r2, pc
    // asr r2, r2, #0x10
    // add pc, r2
    // _022398E6: ; jump table
    // add r2, #0x90
    // add r3, #0x9c
    // add r1, #0xa0
    sub_0202D7C0(*((u32*)(*((u32*)r4) + 4)), r4, ((*((u32*)r4) << 0x18) >> 0x18), ((*((u32*)r4) << 0x18) >> 0x18));
    ov72_02238680(r4, 0x27, 0x13);
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
    ov72_0223A444(r4);
    // sub r1, #0x78
    // str r0, [r4, r1]
    *((u32*)(r4 + 0x1c)) = 0x35;
    ov72_0223A444(r4);
    // sub r1, #0x78
    // str r0, [r4, r1]
    *((u32*)(r4 + 0x1c)) = 0xb;
    ov72_0223A444(r4);
    // sub r1, #0x78
    // str r0, [r4, r1]
    *((u32*)(r4 + 0x1c)) = 0x35;
    ov72_0223A444(r4);
    // sub r1, #0x78
    // str r0, [r4, r1]
    *((u32*)(r4 + 0x1c)) = 0x35;
    ov72_0223A444(r4);
    // sub r1, #0x78
    // str r0, [r4, r1]
    *((u32*)(r4 + 0x1c)) = 0x35;
    ov72_0223A444(r4);
    sub_020399EC();
    // str r1, [r4, r0]
    sub_020399EC((0xe1 << 4), *((u32*)(r4 + 0x00000FD4)));
}




void ov72_022399CC(void) {
    // str r1, [sp]
    ov72_0223A350(*((u32*)(r0 + 0x00000BD4)), 3, 1);
    ov72_02238680(r4, 0x2f, 0x2d);
    ov72_0223A444(r4);
    *((u32*)(*((u32*)r4) + 0x20)) = 0;
}




void ov72_02239A08(void) {
    // str r1, [sp]
    ov72_0223A350(*((u32*)(r0 + 0x00000BD4)), 7, 1);
    ov72_02238680(r4, 0x2f, 0x1a);
    ov72_0223A420(r4);
}




void ov72_02239A3C(void) {
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




void ov72_02239A88(void) {
    ov72_02237B54();
    ov72_02237B74();
    // str r2, [r4, r1]
    // add r2, r2, r2
    // add r2, pc
    // asr r2, r2, #0x10
    // add pc, r2
    // _02239AB0: ; jump table
    sub_0202D5DC(*((u32*)*((u32*)r4)), 5, 2);
    ov72_02238680(r4, 0x27, 0x1c);
    // sub r1, #0x78
    // str r0, [r4, r1]
    *((u32*)(r4 + 0x1c)) = 0x35;
    ov72_0223A444(r4);
    // sub r1, #0x78
    // str r0, [r4, r1]
    *((u32*)(r4 + 0x1c)) = 0x35;
    ov72_0223A444(r4);
    // sub r1, #0x78
    // str r0, [r4, r1]
    *((u32*)(r4 + 0x1c)) = 0x35;
    ov72_0223A444(r4);
    // sub r1, #0x78
    // str r0, [r4, r1]
    *((u32*)(r4 + 0x1c)) = 0x35;
    ov72_0223A444(r4);
    // sub r1, #0x78
    // str r0, [r4, r1]
    *((u32*)(r4 + 0x1c)) = 0x35;
    ov72_0223A444(r4);
    // sub r1, #0x78
    // str r0, [r4, r1]
    *((u32*)(r4 + 0x1c)) = 0x35;
    ov72_0223A444(r4);
    sub_020399EC();
    // str r1, [r4, r0]
    sub_020399EC((0xe1 << 4), *((u32*)(r4 + 0x00000FD4)));
}




void ov72_02239B5C(void) {
    // str r1, [sp]
    ov72_0223A350(*((u32*)(r0 + 0x00000BD4)), 8, 1);
    ov72_02238680(r4, 0x2f, 0x2d);
    ov72_0223A444(r4);
    *((u32*)(*((u32*)r4) + 0x20)) = 0;
}




void ov72_02239B98(void) {
    // str r1, [sp]
    ov72_0223A350(*((u32*)(r0 + 0x00000BD4)), 5, 1);
    ov72_02238680(r4, 0x2f, 0x1e);
}




u32 ov72_02239BC8(void) {
}




void ov72_02239BEC(void) {
    // add r1, #0x94
    // str r0, [r1]
}




void ov72_02239C14(void) {
    // add r0, #0x98
    // str r0, [sp]
    // str r0, [sp, #4]
    BufferIntegerAsString(*((u32*)(r0 + (0xbd << 4))), 0, *((u32*)r0), 3);
    // str r0, [sp]
    ov72_0223A280(r4, *((u32*)(r4 + 0x00000BD4)), 0xa, 1);
    // str r3, [sp]
    // str r0, [sp, #4]
    BufferIntegerAsString(*((u32*)(r4 + (0xbd << 4))), 0, 2);
    // str r0, [sp]
    ov72_0223A280(r4, *((u32*)(r4 + 0x00000BD4)), 6, 1);
    ov72_02238680(r4, 0x2f, 0x21);
}




u32 ov72_02239C8C(void) {
}




void ov72_02239CB4(void) {
    // add r1, #0x9c
    // str r0, [r1]
}




void ov72_02239CD8(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r2, #0x9c
    BufferIntegerAsString(*((u32*)(r0 + (0xbd << 4))), 0, *((u32*)r0), 3);
    // str r3, [sp]
    // str r1, [sp, #4]
    // add r2, #0x94
    BufferIntegerAsString(*((u32*)(r4 + (0xbd << 4))), 1, *((u32*)r4), 2);
    // str r0, [sp]
    ov72_0223A280(r4, *((u32*)(r4 + 0x00000BD4)), 1, 1);
    ov72_02238680(r4, 0x2f, 0x24);
}




void ov72_02239D3C(void) {
    // add r0, #0x94
    // add r1, #0x9c
    // add r2, #0xa0
    ov72_02237BD0(*((u32*)r0), *((u32*)r0), r0);
    *((u32*)(r4 + 0x1c)) = 0x25;
    // str r1, [r4, r0]
    ov72_0223A420(r4, 0);
}




void ov72_02239D6C(void) {
    ov72_02237B54();
    ov72_02237B74();
    // str r2, [r4, r1]
    // add r2, r2, r2
    // add r2, pc
    // asr r2, r2, #0x10
    // add pc, r2
    // _02239D94: ; jump table
    // add r2, #0x94
    // add r3, #0x9c
    // add r1, r4, r1
    sub_0202D8A4(*((u32*)(*((u32*)r4) + 4)), 0x000006DC, ((*((u32*)r4) << 0x18) >> 0x18), ((*((u32*)r4) << 0x18) >> 0x18));
    ov72_02238680(r4, 0x27, 0x26);
    // sub r1, #0x78
    // str r0, [r4, r1]
    *((u32*)(r4 + 0x1c)) = 0x35;
    ov72_0223A444(r4);
    // sub r1, #0x78
    // str r0, [r4, r1]
    *((u32*)(r4 + 0x1c)) = 0x35;
    ov72_0223A444(r4);
    // sub r1, #0x78
    // str r0, [r4, r1]
    *((u32*)(r4 + 0x1c)) = 0xb;
    ov72_0223A444(r4);
    // sub r1, #0x78
    // str r0, [r4, r1]
    *((u32*)(r4 + 0x1c)) = 0x35;
    ov72_0223A444(r4);
    *((u32*)(r4 + 0x1c)) = 0xb;
    // sub r1, #0x78
    // str r0, [r4, r1]
    ov72_0223A444(r4, 0xb);
    // sub r1, #0x78
    // str r0, [r4, r1]
    *((u32*)(r4 + 0x1c)) = 0x35;
    ov72_0223A444(r4);
    sub_020399EC();
    // str r1, [r4, r0]
    sub_020399EC((0xe1 << 4), *((u32*)(r4 + 0x00000FD4)));
}




void ov72_02239E58(void) {
    // str r1, [sp]
    ov72_0223A350(*((u32*)(r0 + 0x00000BD4)), 3, 1);
    ov72_02238680(r4, 0x2f, 0x2d);
    ov72_0223A444(r4);
    *((u32*)(*((u32*)r4) + 0x20)) = 0;
}




void ov72_02239E94(void) {
}




void ov72_02239E9C(void) {
}




void ov72_02239EB4(void) {
}




void ov72_02239ED4(void) {
    // str r1, [sp]
    ov72_0223A350(*((u32*)(r0 + 0x00000BD4)), 4, 1);
    ov72_02238680(r4, 0x30, 0x16);
}




void ov72_02239F04(void) {
    // add r0, r4, r0
    ov72_0223AF48(0x0000136C);
    *((u32*)(r4 + 0x1c)) = 0xd;
    *((u32*)(r4 + 0x1c)) = 0x29;
    *((u32*)(*((u32*)r4) + 0x20)) = 1;
}




void ov72_02239F30(void) {
    // str r1, [sp]
    ov72_0223A350(*((u32*)(r0 + 0x00000BD4)), 9, 1);
    ov72_02238680(r4, 0x30, 0x18);
}




void ov72_02239F60(void) {
    // add r0, r4, r0
    ov72_0223AF48(0x0000136C);
    *((u32*)(r4 + 0x1c)) = 0x1d;
    *((u32*)(r4 + 0x1c)) = 0x29;
    *((u32*)(*((u32*)r4) + 0x20)) = 1;
}




void ov72_02239F8C(void) {
    // str r1, [sp]
    ov72_0223A350(*((u32*)(r0 + 0x00000BDC)), 0x1a, 1);
    ov72_02238680(r4, 0x2f, 0x2a);
}




u32 ov72_02239FBC(void) {
}




void ov72_02239FD8(void) {
    // str r1, [sp]
    ov72_0223A350(*((u32*)(r0 + 0x00000BDC)), 0x1b, 1);
    ov72_02238680(r4, 0x31, 0x2e);
    // str r1, [r4, r0]
}




u8 ov72_0223A010(void) {
}




void ov72_0223A014(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
}




void ov72_0223A044(void) {
    ov72_02238668(*((u32*)(r0 + 0x00001308)));
    *((u32*)(r4 + 0x1c)) = 0;
    *((u32*)(r4 + 0x1c)) = 0x29;
}




void ov72_0223A06C(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0223A088: ; jump table
    ov72_0223A444(r0);
    // str r0, [sp]
    ov72_0223A350(r5, *((u32*)(r5 + 0x00000BD4)), r4, 1);
    ov72_02238680(r5, 0x2f, 0x36);
}




void ov72_0223A0E0(void) {
    // ldrsh r2, [r4, r1]
    // add r2, r2, r2
    // add r2, pc
    // asr r2, r2, #0x10
    // add pc, r2
    // _0223A0FC: ; jump table
    // sub r1, #0xc1
    // str r1, [sp]
    ov72_0223A350(*((u32*)(r0 + 0x00000BD4)), 0x12, 1);
    // ldrsh r1, [r4, r0]
    // strh r1, [r4, r0]
    TextPrinterCheckActive(((*((u32*)(r4 + 0x00000BF4)) << 0x18) >> 0x18), (r1 + 1));
    sub_0203946C();
    ov00_021EC8D8();
    // ldrsh r1, [r4, r0]
    // strh r1, [r4, r0]
    // sub r1, #0xc1
    // str r1, [sp]
    ov72_0223A350((0xfd << 4), *((u32*)(r4 + 0x00000BD4)), 0x13, 1);
    // ldrsh r1, [r4, r0]
    // strh r1, [r4, r0]
    TextPrinterCheckActive(((*((u32*)(r4 + 0x00000BF4)) << 0x18) >> 0x18), (r1 + 1));
    // ldrsh r1, [r4, r0]
    // strh r1, [r4, r0]
    // ldrsh r1, [r4, r0]
    // strh r1, [r4, r0]
    // ldrsh r0, [r4, r0]
    ov72_022387D0(r4, 0, 0);
    *((u32*)(r4 + 0x1c)) = 0x2e;
}




void ov72_0223A1AC(void) {
}




void ov72_0223A1CC(void) {
    TextPrinterCheckActive(((*((u32*)(r0 + 0x00000BF4)) << 0x18) >> 0x18));
    *((u32*)(r4 + 0x1c)) = *((u32*)(r4 + 0x20));
    // str r1, [r4, r0]
}




void ov72_0223A200(void) {
    TextPrinterCheckActive(((*((u32*)(r0 + 0x00000BF4)) << 0x18) >> 0x18));
    // str r1, [r4, r0]
    // str r2, [r4, r1]
    // add r1, #0x24
    // str r2, [r4, r1]
    // add r1, #0x28
    // strb r2, [r4, r1]
    // add r1, #0x2a
    // strb r2, [r4, r1]
    // add r1, #0x2b
    // strb r2, [r4, r1]
    // add r1, #0x2e
    // strb r2, [r4, r1]
    // add r1, #0x2c
    // strb r2, [r4, r1]
    // add r1, #0x2d
    // strb r2, [r4, r1]
    // add r2, #0xff
    // add r1, #0x30
    // add r0, r4, r0
    // str r2, [r4, r1]
    ov72_0223AF1C((0x00001370 - 4), 0x00001370, 1);
    *((u32*)(r4 + 0x1c)) = *((u32*)(r4 + 0x20));
}




void ov72_0223A280(void) {
    NewString_ReadMsgData(r1, r2);
    // add r1, #0x10
    StringExpandPlaceholders(*((u32*)(r5 + (0xbd << 4))), *((u32*)(r5 + (0xbd << 4))), r0);
    // add r0, r5, r0
    FillWindowPixelBuffer(0x00000E18, 0xf);
    // add r0, r5, r0
    DrawFrameAndWindow2(0x00000E18, 0, 1, 0xe);
    // str r3, [sp]
    // str r4, [sp, #4]
    // str r3, [sp, #8]
    // add r0, r5, r0
    AddTextPrinterParameterized(0x00000E18, 1, *((u32*)(r5 + (0xbe << 4))), 0);
    // str r0, [r5, r1]
    String_Delete(r6, 0x00000BF4);
}




void ov72_0223A2E8(void) {
    // neg r0, r0
    ov00_021E6A70(*((u32*)(r0 + 0x00000F54)), *((u32*)(r0 + (0x00000F54 + 4))));
    // neg r2, r2
    ov72_0223A4DC(r4, r0, *((u32*)(r4 + 0x00000F54)));
    *((u32*)(r4 + 0x1c)) = 0x38;
}




void ov72_0223A314(void) {
    // tst r0, r1
    // tst r0, r1
    // add r0, r4, r0
    sub_0200E5D4(0x00000E58, 0);
    *((u32*)(r4 + 0x1c)) = 0;
}




void ov72_0223A350(void) {
    ReadMsgDataIntoString(r1, r2, *((u32*)(r0 + (0xbe << 4))));
    // add r0, r5, r0
    FillWindowPixelBuffer(0x00000E18, 0xf);
    // add r0, r5, r0
    DrawFrameAndWindow2(0x00000E18, 0, 1, 0xe);
    // str r3, [sp]
    // str r4, [sp, #4]
    // str r3, [sp, #8]
    // add r0, r5, r0
    AddTextPrinterParameterized(0x00000E18, 1, *((u32*)(r5 + (0xbe << 4))), 0);
    // str r0, [r5, r1]
}




void ov72_0223A3A8(void) {
    // ldr r0, [sp, #0xc]
    // sub r1, r1, r0
    // add r0, r1, r0
    // asr r2, r0, #1
    // ldr r0, [sp, #0xc]
    // sub r2, r1, r0
}




void ov72_0223A3E0(void) {
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




void ov72_0223A414(void) {
}




void ov72_0223A41C(void) {
}




void ov72_0223A420(void) {
    // add r0, r4, r0
    WaitingIcon_New(0x00000E18, 1);
    // str r0, [r4, r1]
}




void ov72_0223A444(void) {
}




void ov72_0223A460(void) {
    String_New((1 << 8), 0x43);
    ReadMsgDataIntoString(*((u32*)(r5 + 0x00000BDC)), r6, r0);
    // add r1, #0x20
    StringExpandPlaceholders(*((u32*)(r5 + (0xbd << 4))), *((u32*)(r5 + (0xbd << 4))), r4);
    // add r0, r5, r0
    FillWindowPixelBuffer(0x00000E58, 0xf);
    // add r0, r5, r0
    DrawFrameAndWindow1(0x00000E58, 1, 0x1f, 0xb);
    // str r3, [sp]
    // str r3, [sp, #4]
    // str r3, [sp, #8]
    // add r0, r5, r0
    AddTextPrinterParameterized(0x00000E58, 1, *((u32*)(r5 + (0xbf << 4))), 0);
    // str r0, [r5, r1]
    String_Delete(r4, 0x00000BF4);
}




void ov72_0223A4DC(void) {
    // mvn r0, r0
    // str r0, [sp]
    // str r0, [sp, #4]
    BufferIntegerAsString(*((u32*)(r0 + (0xbd << 4))), 0, 5);
    // add r0, r5, r0
    ClearFrameAndWindow2(0x00000E18, 1);
    ov72_0223A460(r5, r4);
}




void ov72_0223A520(void) {
    // strb r1, [r0, r3]
    // strb r2, [r0, r1]
    // strb r4, [r0, r1]
    // strb r4, [r0, r1]
    // strh r2, [r0, r1]
    // add r3, #0x5c
    // str r2, [r0, r3]
    // strh r4, [r0, r1]
    // add r3, #0x5c
    // str r4, [r0, r3]
    // strb r1, [r0, r3]
    // strb r4, [r0, r2]
    // strb r4, [r0, r2]
    // strb r4, [r0, r2]
    // add r2, #0x52
    // strh r1, [r0, r2]
    // add r3, #0x54
    // strh r2, [r0, r3]
    ov72_022386F4(*((u32*)(r0 + (0xe << 8))), 0, (0xe << 8), 0x00001312);
}




void ov72_0223A588(void) {
    // blx r1
    // ldrsb r0, [r4, r0]
}




void ov72_0223A5B4(void) {
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    BeginNormalPaletteFade(4, 0, 0, 0);
    // strb r1, [r4, r0]
}




void ov72_0223A5E0(void) {
    IsPaletteFadeFinished();
    ov72_0223A680(r4);
    // ldrsh r1, [r4, r2]
    // add r2, #0x58
    ov72_02238730(*((u32*)(r4 + 0x00000E04)), *((u32*)(r4 + 0x00001310)));
    ov72_02238B18(r4, 1);
    ov72_0223ACA8(r4);
    // add r0, r4, r0
    ov72_0223AD20(0x00001328, *((u32*)(r4 + 0x00000BD4)), 0x14);
    // add r0, r4, r0
    ov72_0223AD20(0x00001338, *((u32*)(r4 + 0x00000BD4)), 0x15);
    // add r0, r4, r0
    ov72_0223AD20(0x00001348, *((u32*)(r4 + 0x00000BD4)), 0x16);
    ToggleBgLayer(4, 1);
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r2, [sp, #8]
    BeginNormalPaletteFade(4, 1, 1, 0);
    // strb r1, [r4, r0]
}




void ov72_0223A680(void) {
    Sprite_SetDrawFlag(*((u32*)(r0 + 0x00000DF4)), 1);
    Sprite_SetDrawFlag(*((u32*)(r6 + 0x00000DF8)), 1);
    Sprite_SetDrawFlag(*((u32*)(r6 + 0x00000DFC)), 1);
    ov72_02238750(*((u32*)(r6 + 0x00000DF4)), 0, *((u32*)(r6 + 0x00001368)));
    Sprite_SetDrawFlag(*((u32*)(r6 + (0xe << 8))), 1);
    Sprite_SetDrawFlag(*((u32*)(r6 + 0x00000E04)), 1);
    Sprite_SetDrawFlag(*((u32*)(r6 + 0x00000E08)), 1);
    Sprite_SetDrawFlag(*((u32*)(r6 + 0x00000E0C)), 1);
    Sprite_SetDrawFlag(*((u32*)(r6 + (0xe1 << 4))), 1);
}




void ov72_0223A71C(void) {
}




void ov72_0223A738(void) {
    TouchscreenHitbox_FindRectAtTouchNew(ov72_0223B774, 0x0000130D);
    TouchscreenHitbox_FindRectAtTouchNew(ov72_0223B7B8);
}




void ov72_0223A760(void) {
    // add r3, r3, r4
    // strh r0, [r2]
    // strh r0, [r2]
    *((u16*)(r2 + 2)) = 0;
    *((u16*)(r2 + 2)) = 1;
}




void ov72_0223A7F4(void) {
    // add r2, sp, #0x18
    // add r5, r7, r1
    // ldrsb r5, [r5, r3]
    // stmia r2!, {r5}
    // mvn r1, r1
    // ldrsh r1, [r7, r1]
    // add r1, sp, #0x18
    // str r6, [r1, r2]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // add r6, sp, #0x18
    // add r2, r7, r5
    // ldrsb r1, [r2, r1]
    // ldr r1, [sp, #8]
    // ldr r3, [sp, #4]
    // str r1, [sp, #8]
    // ldr r1, [sp, #4]
    // str r3, [sp, #4]
    // add r3, sp, #0xc
    // str r2, [r3, r1]
    // str r6, [sp]
    // add r5, sp, #0xc
    // add r6, r6, r1
    // ldr r1, [sp]
    // str r1, [sp]
    // mvn r0, r0
}




void ov72_0223A8A0(void) {
    // ldrsb r1, [r0, r1]
    // ldrsb r0, [r0, r1]
    // ldrsb r1, [r0, r1]
    // ldrsb r1, [r0, r1]
    // ldrsb r0, [r0, r1]
}




void ov72_0223A8DC(void) {
}




void ov72_0223A8F0(void) {
    // add r0, r5, r5
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0223A908: ; jump table
    // add r0, r4, r0
    ov72_0223A7F4(0x0000130C, (r1 - 3));
    // mvn r1, r1
    // ldrsh r0, [r4, r1]
    // add r2, r4, r0
    // strb r3, [r2, r0]
    // ldrsh r0, [r4, r1]
    // strh r0, [r4, r1]
    // ldrsh r1, [r4, r2]
    // add r2, #0x58
    ov72_02238730(*((u32*)(r4 + 0x00000E04)), 0x00001310, *((u32*)(r4 + 0x00001310)), (r5 - 3));
    // strb r1, [r4, r0]
    // add r0, r4, r0
    ov72_0223A8DC((0x0000130F - 3), (r5 - 3));
    // strb r0, [r4, r1]
    ov72_022386F4(*((u32*)(r4 + (0xe << 8))), *((u8*)(r4 + 0x0000130F)));
    PlaySE(0x000005DC);
    ov72_0223AED0(r4, *((u8*)(ov72_0223B478 + ((r5 - 3) << 1))), *((u8*)(ov72_0223B479 + ((r5 - 3) << 1))), 3);
    PlaySE(0x000005F2);
    // ldrsh r0, [r4, r1]
    // mvn r3, r3
    // add r2, r4, r0
    // strb r3, [r2, r0]
    // ldrsh r0, [r4, r1]
    // strh r0, [r4, r1]
    // ldrsh r0, [r4, r1]
    // strh r0, [r4, r1]
    // strh r0, [r4, r1]
    PlaySE(0x000005DC, 0x00001310, 0);
    // ldrsh r1, [r4, r2]
    // add r2, #0x58
    ov72_02238730(*((u32*)(r4 + 0x00000E04)), *((u32*)(r4 + 0x00001310)));
    Sprite_SetAnimCtrlSeq(*((u32*)(r4 + 0x00000E08)), 5);
    // strb r0, [r4, r1]
    ov72_022386F4(*((u32*)(r4 + (0xe << 8))), *((u8*)(r4 + 0x0000130F)));
    // add r0, r4, r0
    // mvn r1, r1
    ov72_0223A7F4(0x0000130C, 0);
    // strb r0, [r4, r1]
    // ldrsb r0, [r4, r1]
    // strb r0, [r4, r1]
    // strb r1, [r4, r0]
    PlaySE(0x000005DC, 7);
    Sprite_SetAnimCtrlSeq(*((u32*)(r4 + 0x00000E0C)), 5);
    // strb r0, [r4, r1]
    // mvn r2, r2
    // strb r2, [r4, r0]
    ov72_022386F4(*((u32*)(r4 + (0xe << 8))), *((u8*)(r4 + 0x0000130F)), 0);
    // strb r1, [r4, r0]
    PlaySE(0x000005DC, 7);
    Sprite_SetAnimCtrlSeq(*((u32*)(r4 + (0xe1 << 4))), 5);
}




void ov72_0223AA9C(void) {
    // tst r3, r2
    // add r2, #0x55
    // add r2, r4, r2
    ov72_0223A760(*((u8*)(r0 + 0x0000130F)), 0, 0x0000130F, 0x40);
    // strb r0, [r4, r1]
    ov72_022386F4(*((u32*)(r4 + (0xe << 8))), *((u8*)(r4 + 0x0000130F)));
    PlaySE(0x000005DC);
    // tst r3, r2
    // add r2, #0x55
    // add r2, r4, r2
    ov72_0223A760(*((u8*)(r4 + 0x0000130F)), 1, 0x0000130F, 0x80);
    // strb r0, [r4, r1]
    ov72_022386F4(*((u32*)(r4 + (0xe << 8))), *((u8*)(r4 + 0x0000130F)));
    PlaySE(0x000005DC);
    // tst r3, r2
    // add r2, #0x55
    // add r2, r4, r2
    ov72_0223A760(*((u8*)(r4 + 0x0000130F)), 2, 0x0000130F, 0x20);
    // strb r0, [r4, r1]
    ov72_022386F4(*((u32*)(r4 + (0xe << 8))), *((u8*)(r4 + 0x0000130F)));
    PlaySE(0x000005DC);
    // tst r2, r3
    // add r2, #0x55
    // add r2, r4, r2
    ov72_0223A760(*((u8*)(r4 + 0x0000130F)), 3, 0x0000130F, 0x10);
    // strb r0, [r4, r1]
    ov72_022386F4(*((u32*)(r4 + (0xe << 8))), *((u8*)(r4 + 0x0000130F)));
    PlaySE(0x000005DC);
    // tst r1, r2
    ov72_0223A8F0((*((u8*)(r4 + 0x0000130F)) + 3), *((u32*)(r1 + 0x48)));
    // tst r1, r2
    ov72_0223A8F0(0xd);
}




void ov72_0223AB84(void) {
    // mvn r0, r0
}




void ov72_0223ABB0(void) {
    // add r1, r6, r4
    // ldrsb r1, [r1, r0]
    Sprite_SetAnimCtrlSeq(*((u32*)(r0 + 0x00000DF4)), 0);
    Sprite_SetAnimCtrlSeq(*((u32*)(r5 + 0x00000DF4)), (r1 + 1));
}




u8 ov72_0223ABF4(void) {
}




u8 ov72_0223ABF8(void) {
}




u8 ov72_0223ABFC(void) {
}




void ov72_0223AC00(void) {
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    BeginNormalPaletteFade(4, 0, 0, 0);
    // strb r1, [r4, r0]
}




void ov72_0223AC2C(void) {
    IsPaletteFadeFinished();
    ov72_0223AD94(r4);
    ov72_02238B18(r4, 0);
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r2, [sp, #8]
    BeginNormalPaletteFade(4, 1, 1, 0);
    // strb r1, [r4, r0]
}




void ov72_0223AC6C(void) {
}




void ov72_0223AC88(void) {
}




u8 ov72_0223ACA4(void) {
}




void ov72_0223ACA8(void) {
    // str r0, [sp, #0x14]
    // add r6, r0, r1
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x14]
    AddWindowParameterized(*((u32*)(((0x1f << 0x10) >> 0x10) + 4)), r6, 4, ((*((u32*)ov72_0223B46C) << 0x18) >> 0x18));
    // add r4, #0x40
    // add r6, #0x10
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r2, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp, #0x14]
    // add r1, r1, r3
    AddWindowParameterized(*((u32*)(0x4f + 4)), 4, 2);
}




void ov72_0223AD20(void) {
    NewString_ReadMsgData(r1, r2);
    FillWindowPixelBuffer(r5, 0);
    // str r3, [sp]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r5, 4, r4, 0);
    CopyWindowToVram(r5);
    String_Delete(r4);
}




void ov72_0223AD64(void) {
    // add r5, r6, r0
    ClearWindowTilemapAndCopyToVram(r5);
    RemoveWindow(r5);
    // add r5, #0x10
    // add r0, r6, r0
    RemoveWindow(0x00001318);
}




void ov72_0223AD94(void) {
    ov72_0223AD64();
    Sprite_SetDrawFlag(*((u32*)(r5 + 0x00000DF4)), 0);
    Sprite_SetDrawFlag(*((u32*)(r5 + 0x00000DF8)), 0);
    Sprite_SetDrawFlag(*((u32*)(r5 + 0x00000DFC)), 0);
    Sprite_SetDrawFlag(*((u32*)(r5 + (0xe << 8))), 0);
    Sprite_SetDrawFlag(*((u32*)(r5 + 0x00000E04)), 0);
    Sprite_SetDrawFlag(*((u32*)(r5 + 0x00000E08)), 0);
    Sprite_SetDrawFlag(*((u32*)(r5 + 0x00000E0C)), 0);
    Sprite_SetDrawFlag(*((u32*)(r5 + (0xe1 << 4))), 0);
    Sprite_SetAnimCtrlSeq(*((u32*)(r5 + 0x00000DF4)), 0);
}




void ov72_0223AE20(void) {
    // add r4, r5, r0
    // add r2, r5, r0
    Sprite_SetAnimCtrlSeq(*((u32*)(r2 + 0x00000DF4)));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    BgTilemapRectChangePalette(*((u32*)(r5 + 4)), *((u8*)(r4 + 2)), *((u8*)(r4 + 6)), *((u8*)(r4 + 7)));
    ScheduleBgTilemapBufferTransfer(*((u32*)(r5 + 4)), *((u8*)(r4 + 2)));
}




void ov72_0223AE6C(void) {
    // add r4, r0, r1
    ov72_0223AE20(((*((u16*)(r4 + 8)) << 0x18) >> 0x18));
    *((u8*)(r4 + 1)) = (*((u8*)(r4 + 1)) + 1);
    *((u8*)(r4 + 3)) = (*((u8*)(r4 + 3)) + 1);
    ov72_0223AE20((*((u8*)(r4 + 1)) + 1), ((*((u16*)(r4 + 0xa)) << 0x18) >> 0x18));
    *((u8*)(r4 + 3)) = 0;
    *((u8*)(r4 + 1)) = (*((u8*)(r4 + 1)) + 1);
    *((u8*)(r4 + 3)) = (*((u8*)(r4 + 3)) + 1);
}




void ov72_0223AED0(void) {
    // strb r5, [r0, r4]
    // strb r5, [r0, r6]
    // strb r5, [r0, r6]
    // strb r7, [r0, r6]
    // add r7, #8
    // strh r6, [r0, r7]
    // add r6, #0xa
    // strh r5, [r0, r6]
    // strb r1, [r0, r5]
    // strb r2, [r0, r1]
    // strb r2, [r0, r1]
    // strb r2, [r0, r1]
    // sub r1, #0x45
    // strb r3, [r0, r1]
    // sub r4, #0x46
    // strb r1, [r0, r4]
}




void ov72_0223AF1C(void) {
}




void ov72_0223AF48(void) {
    // add r1, #0x2d
    // blx r1
    // add r4, #0x33
}




void ov72_0223AF70(void) {
    // add r0, #0x2d
    // strb r1, [r0]
}




void ov72_0223AF7C(void) {
    TouchscreenHitbox_FindRectAtTouchNew(ov72_0223B4C8);
    // mvn r0, r0
    PlaySE(0x000005DC);
    // add r0, #0x33
    // strb r1, [r0]
    // add r1, #0x33
    ov72_0223B2FC(r4, *((u8*)r4));
    Sprite_SetAnimCtrlSeq(*((u32*)(r4 + 4)), 3);
    // add r4, #0x2d
    // strb r0, [r4]
    // add r0, #0x33
    // strb r1, [r0]
    // add r1, #0x33
    ov72_0223B2FC(r4, *((u8*)r4));
    Sprite_SetAnimCtrlSeq(*((u32*)(r4 + 4)), 3);
    // add r4, #0x2d
    // strb r0, [r4]
    // tst r1, r0
    // add r0, #0x33
    // strb r1, [r0]
    // add r4, #0x33
    ov72_0223B2FC(r4, *((u8*)r4));
    PlaySE(0x000005DC);
    // tst r1, r0
    // add r0, #0x33
    // strb r1, [r0]
    // add r4, #0x33
    ov72_0223B2FC(r4, *((u8*)r4));
    PlaySE(0x000005DC);
    // tst r1, r2
    Sprite_SetAnimCtrlSeq(*((u32*)(r4 + 4)), 3, 1);
    // add r4, #0x2d
    // strb r0, [r4]
    PlaySE(0x000005DC);
    // tst r0, r1
    // add r0, #0x33
    // strb r2, [r0]
    // add r1, #0x33
    ov72_0223B2FC(r4, *((u8*)r4));
    // add r0, #0x2d
    // strb r1, [r0]
    Sprite_SetAnimCtrlSeq(*((u32*)(r4 + 4)), 3);
    PlaySE(0x000005DC);
}




u8 ov72_0223B084(void) {
}




void ov72_0223B088(void) {
    // add r0, #0x2f
    // add r0, #0x32
}




void ov72_0223B0C4(void) {
    NARC_New(0xef, *((u32*)(r0 + 0x28)));
    // add r1, #0x2f
    // str r0, [sp, #0x14]
    // str r1, [sp]
    // str r1, [sp, #4]
    // add r3, #0x2e
    GfGfxLoader_GXLoadPalFromOpenNarc(0, 0, (*((u8*)r4) << 5));
    // add r1, #0x30
    LoadFontPal0(0, (*((u8*)r4) << 5), *((u32*)(r4 + 0x28)));
    // str r1, [sp]
    // str r1, [sp, #4]
    // add r3, #0x2e
    GfGfxLoader_GXLoadPalFromOpenNarc(0, 4, (*((u8*)r4) << 5));
    // add r1, #0x30
    LoadFontPal0(4, (*((u8*)r4) << 5), *((u32*)(r4 + 0x28)));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r3, #0x2f
    // ldr r0, [sp, #0x14]
    GfGfxLoader_LoadCharDataFromOpenNarc(*((u32*)(r4 + 0x28)), 1, *((u32*)r4), *((u8*)r4));
    // str r0, [sp]
    // ldr r0, [sp, #0x14]
    // add r3, sp, #0x18
    GfGfxLoader_GetScrnDataFromOpenNarc(*((u32*)(r4 + 0x28)), 0xa, 0);
    // add r1, #0x2f
    // str r0, [sp, #0x10]
    GetBgTilemapBuffer(*((u32*)r4), *((u8*)r4));
    // ldr r2, [sp, #0x18]
    // add r2, #0xc
    // add r0, #0x2e
    // and r6, r7
    // strh r0, [r3]
    // add r1, #0x2f
    BgCommitTilemapBufferToVram(*((u32*)r4), *((u8*)r4), (r2 + 2), (r0 + 2));
    // ldr r0, [sp, #0x10]
    Heap_Free();
    // ldr r0, [sp, #0x14]
    NARC_Delete();
    // add r0, #0x2f
    ToggleBgLayer(*((u8*)r4), 1);
    // add r4, #0x32
    ToggleBgLayer(*((u8*)r4), 1);
}




void ov72_0223B1C8(void) {
    NewMsgDataFromNarc(1, 0x1b, 0xbf, *((u32*)(r0 + 0x28)));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0x30
    // str r0, [sp, #0xc]
    // add r0, #0x31
    // add r2, #0x32
    // add r1, #8
    // str r0, [sp, #0x10]
    AddWindowParameterized(*((u32*)r5), r5, *((u8*)r5), 0xc);
    // add r0, #8
    FillWindowPixelBuffer(r5, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0x30
    // str r0, [sp, #0xc]
    // add r0, #0x31
    // add r2, #0x32
    // add r1, #0x18
    // add r0, #0x10
    // str r0, [sp, #0x10]
    AddWindowParameterized(*((u32*)r5), r5, *((u8*)r5), 0xc);
    // add r0, #0x18
    FillWindowPixelBuffer(r5, 0);
    NewString_ReadMsgData(r4, 0x2e);
    NewString_ReadMsgData(r4, 0x2f);
    // str r3, [sp]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #8
    // str r3, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r5, 4, r6, 0);
    // str r3, [sp]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0x18
    // str r3, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r5, 4, r7, 0);
    // add r0, #8
    CopyWindowToVram(r5);
    // add r5, #0x18
    CopyWindowToVram(r5);
    String_Delete(r7);
    String_Delete(r6);
    DestroyMsgData(r4);
}




void ov72_0223B2C0(void) {
}




void ov72_0223B2E4(void) {
}




void ov72_0223B2FC(void) {
    // str r1, [sp]
    // add r1, r2, r1
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // add r1, sp, #0
    Sprite_SetMatrix(*((u32*)(r0 + 4)), 0, *((u32*)(r0 + 0x34)), (r1 << 2));
}



