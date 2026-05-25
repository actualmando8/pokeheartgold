/* Decompiled from asm/overlay_88.s */
#include "global.h"

void ov88_02258800(void) {
    // push {r4, r5, lr}
    // sub sp, #0xc
    // add r4, r0, #0
    // bl OverlayManager_GetArgs
    // mov r2, #5
    // add r5, r0, #0
    // mov r0, #3
    // mov r1, #0x72
    // lsl r2, r2, #0x10
    // bl Heap_Create
    // mov r1, #0x27
    // add r0, r4, #0
    // lsl r1, r1, #4
    // mov r2, #0x72
    // bl OverlayManager_CreateAndGetData
    // mov r2, #0x27
    // mov r1, #0
    // lsl r2, r2, #4
    // add r4, r0, #0
    // bl memset
    // ldr r0, [r5]
    // mov r1, #0x72
    // str r0, [r4]
    // ldr r0, [r5, #4]
    // str r0, [r4, #4]
    // add r0, r4, #0
    // add r0, #8
    // bl ov88_02258ABC
    // mov r0, #0x53
    // lsl r0, r0, #2
    // add r1, r4, #0
    // add r0, r4, r0
    // add r1, #8
    // mov r2, #0x72
    // bl ov88_02258D64
    // ldr r0, [r4, #4]
    // add r1, r4, #0
    // str r0, [sp]
    // ldr r0, [r5, #8]
    // mov r2, #0x72
    // str r0, [sp, #4]
    // str r2, [sp, #8]
    // add r0, r2, #0
    // add r0, #0xe2
    // add r2, #0xda
    // ldr r3, [r4]
    // add r0, r4, r0
    // add r1, #8
    // add r2, r4, r2
    // bl ov88_02258EA8
    // ldr r0, [r5, #8]
    // add r1, r4, #0
    // str r0, [sp]
    // mov r2, #0x72
    // str r2, [sp, #4]
    // add r0, r2, #0
    // add r0, #0xee
    // add r2, #0xda
    // ldr r3, [r4]
    // add r0, r4, r0
    // add r1, #8
    // add r2, r4, r2
    // bl ov88_022590C0
    // mov r0, #0x59
    // lsl r0, r0, #2
    // add r1, r4, #0
    // add r0, r4, r0
    // add r1, #8
    // mov r2, #0x72
    // bl ov88_022592EC
    // mov r0, #2
    // lsl r0, r0, #8
    // add r1, r4, #0
    // add r0, r4, r0
    // add r1, #8
    // mov r2, #0x72
    // bl ov88_0225967C
    // ldr r0, _022588C0 ; =ov88_02258A64
    // add r1, r4, #0
    // bl Main_SetVBlankIntrCB
    // bl HBlankInterruptDisable
    // mov r0, #1
    // add sp, #0xc
    // pop {r4, r5, pc}
    // _022588C0: .word ov88_02258A64
    // TODO: decompile
}



void ov88_022588C4(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0xc
    // add r6, r0, #0
    // add r5, r1, #0
    // bl OverlayManager_GetData
    // add r4, r0, #0
    // add r0, r6, #0
    // bl OverlayManager_GetArgs
    // add r6, r0, #0
    // ldr r0, [r5]
    // cmp r0, #4
    // bls _022588E2
    // b _022589EA
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _022588EE: ; jump table
    // mov r0, #6
    // str r0, [sp]
    // mov r1, #1
    // str r1, [sp, #4]
    // mov r0, #0x72
    // str r0, [sp, #8]
    // mov r0, #0
    // add r2, r1, #0
    // add r3, r0, #0
    // bl BeginNormalPaletteFade
    // ldr r0, [r6, #8]
    // mov r1, #1
    // bl ov45_0222A520
    // ldr r0, [r5]
    // add r0, r0, #1
    // str r0, [r5]
    // b _022589EA
    // bl IsPaletteFadeFinished
    // cmp r0, #1
    // bne _022589EA
    // ldr r0, [r5]
    // add r0, r0, #1
    // str r0, [r5]
    // b _022589EA
    // ldr r0, _022589F8 ; =gSystem
    // ldr r1, [r0, #0x48]
    // mov r0, #2
    // tst r0, r1
    // bne _0225894A
    // ldr r0, [r6, #8]
    // bl ov45_0222A330
    // cmp r0, #1
    // beq _0225894A
    // bl ov45_0222D844
    // cmp r0, #1
    // bne _02258960
    // ldr r0, [r6, #8]
    // bl ov45_0222A330
    // cmp r0, #1
    // bne _0225895A
    // ldr r0, [r6, #8]
    // bl ov45_0222A4A8
    // mov r0, #3
    // str r0, [r5]
    // b _022589EA
    // mov r0, #0x55
    // lsl r0, r0, #2
    // ldr r1, [r4]
    // ldr r2, [r4, #4]
    // add r0, r4, r0
    // bl ov88_02258EFC
    // cmp r0, #1
    // bne _0225897E
    // mov r0, #2
    // lsl r0, r0, #8
    // add r0, r4, r0
    // mov r1, #1
    // bl ov88_02259818
    // mov r0, #0x16
    // lsl r0, r0, #4
    // ldr r1, [r4]
    // add r0, r4, r0
    // bl ov88_022590D8
    // cmp r0, #1
    // bne _0225899A
    // mov r0, #2
    // lsl r0, r0, #8
    // add r0, r4, r0
    // mov r1, #2
    // bl ov88_02259818
    // mov r0, #0x59
    // lsl r0, r0, #2
    // ldr r1, [r4]
    // ldr r2, [r6, #8]
    // add r0, r4, r0
    // mov r3, #0x72
    // bl ov88_02259404
    // cmp r0, #1
    // bne _022589EA
    // mov r0, #2
    // lsl r0, r0, #8
    // add r0, r4, r0
    // mov r1, #3
    // bl ov88_02259818
    // b _022589EA
    // mov r0, #6
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // mov r0, #0x72
    // str r0, [sp, #8]
    // mov r0, #0
    // add r1, r0, #0
    // add r2, r0, #0
    // add r3, r0, #0
    // bl BeginNormalPaletteFade
    // ldr r0, [r5]
    // add r0, r0, #1
    // str r0, [r5]
    // b _022589EA
    // bl IsPaletteFadeFinished
    // cmp r0, #1
    // bne _022589EA
    // add sp, #0xc
    // mov r0, #1
    // pop {r3, r4, r5, r6, pc}
    // ldr r1, [r6, #8]
    // add r0, r4, #0
    // bl ov88_02258A70
    // mov r0, #0
    // add sp, #0xc
    // pop {r3, r4, r5, r6, pc}
    // _022589F8: .word gSystem
    // TODO: decompile
}



void ov88_022589FC(void) {
    OverlayManager_GetData();
    OverlayManager_GetArgs(r5);
    // add r0, r4, r0
    ov88_022597DC((2 << 8));
    // add r0, r4, r0
    ov88_02258EF8((0x55 << 2));
    // add r0, r4, r0
    ov88_022590D4((0x16 << 4));
    // add r0, r4, r0
    ov88_022593D0((0x59 << 2));
    // add r0, r4, r0
    ov88_02258D84((0x53 << 2));
    Main_SetVBlankIntrCB(0, 0);
    HBlankInterruptDisable();
    // add r4, #8
    ov88_02258AF4(r4);
    OverlayManager_FreeData(r5);
    Heap_Destroy(0x72);
}



void ov88_02258A64(void) {
}



void ov88_02258A70(void) {
    // add r0, r5, r1
    // sub r1, #8
    // add r1, r5, r1
    // add r2, #8
    ov88_02258F60((0x55 << 2), r0);
    // str r4, [sp]
    // add r0, r5, r1
    // sub r1, #0x14
    // add r1, r5, r1
    // add r2, #8
    ov88_02259104((0x16 << 4), r5, *((u32*)r5));
    // add r0, r5, r0
    ov88_022594E0((0x59 << 2));
    // add r0, r5, r0
    ov88_02259800((2 << 8));
    // add r5, #8
    ov88_02258B14(r5);
}



void ov88_02258ABC(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // mov r0, #0xc6
    // add r4, r1, #0
    // bl NARC_New
    // mov r1, #5
    // lsl r1, r1, #6
    // str r0, [r5, r1]
    // mov r0, #0x30
    // add r1, r4, #0
    // bl GF_CreateVramTransferManager
    // ldr r0, _02258AF0 ; =ov88_02259958
    // bl GfGfx_SetBanks
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov88_02258B34
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov88_02258C98
    // pop {r3, r4, r5, pc}
    // nop
    // _02258AF0: .word ov88_02259958
    // TODO: decompile
}



void ov88_02258AF4(void) {
    // ldr r0, [r4, r0]
    NARC_Delete((5 << 6));
    GF_DestroyVramTransferManager();
    ov88_02258C60(r4);
    ov88_02258D38(r4);
}



void ov88_02258B14(void) {
}



void ov88_02258B20(void) {
}



void ov88_02258B34(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // add r5, r0, #0
    // ldr r0, _02258C50 ; =ov88_02259934
    // add r7, r1, #0
    // bl SetBothScreensModesAndDisable
    // add r0, r7, #0
    // bl BgConfig_Alloc
    // str r0, [r5]
    // ldr r0, _02258C54 ; =gSystem + 0x60
    // mov r1, #0
    // strb r1, [r0, #9]
    // bl GfGfx_SwapDisplay
    // mov r0, #0
    // ldr r6, _02258C58 ; =ov88_022599C0
    // ldr r4, _02258C5C ; =ov88_02259944
    // str r0, [sp, #0x10]
    // ldr r1, [r4]
    // ldr r0, [r5]
    // lsl r1, r1, #0x18
    // lsr r1, r1, #0x18
    // add r2, r6, #0
    // mov r3, #0
    // bl InitBgFromTemplate
    // ldr r0, [r4]
    // mov r1, #0x20
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // mov r2, #0
    // add r3, r7, #0
    // bl BG_ClearCharDataRange
    // ldr r1, [r4]
    // ldr r0, [r5]
    // lsl r1, r1, #0x18
    // lsr r1, r1, #0x18
    // bl BgClearTilemapBufferAndCommit
    // ldr r0, [sp, #0x10]
    // add r6, #0x1c
    // add r0, r0, #1
    // add r4, r4, #4
    // str r0, [sp, #0x10]
    // cmp r0, #5
    // blt _02258B5C
    // mov r1, #0
    // str r1, [sp]
    // mov r0, #5
    // str r7, [sp, #4]
    // lsl r0, r0, #6
    // ldr r0, [r5, r0]
    // add r2, r1, #0
    // add r3, r1, #0
    // bl GfGfxLoader_GXLoadPalFromOpenNarc
    // mov r1, #5
    // mov r0, #0
    // lsl r1, r1, #6
    // add r2, r7, #0
    // bl LoadFontPal1
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #5
    // str r7, [sp, #0xc]
    // lsl r0, r0, #6
    // mov r1, #1
    // ldr r0, [r5, r0]
    // ldr r2, [r5]
    // add r3, r1, #0
    // bl GfGfxLoader_LoadCharDataFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #5
    // str r7, [sp, #0xc]
    // lsl r0, r0, #6
    // ldr r0, [r5, r0]
    // ldr r2, [r5]
    // mov r1, #3
    // mov r3, #1
    // bl GfGfxLoader_LoadScrnDataFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #5
    // str r7, [sp, #0xc]
    // lsl r0, r0, #6
    // ldr r0, [r5, r0]
    // ldr r2, [r5]
    // mov r1, #4
    // mov r3, #2
    // bl GfGfxLoader_LoadScrnDataFromOpenNarc
    // mov r1, #0
    // str r1, [sp]
    // mov r0, #5
    // str r7, [sp, #4]
    // lsl r0, r0, #6
    // ldr r0, [r5, r0]
    // mov r2, #4
    // add r3, r1, #0
    // bl GfGfxLoader_GXLoadPalFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #5
    // str r7, [sp, #0xc]
    // lsl r0, r0, #6
    // ldr r0, [r5, r0]
    // ldr r2, [r5]
    // mov r1, #2
    // mov r3, #4
    // bl GfGfxLoader_LoadCharDataFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #5
    // str r7, [sp, #0xc]
    // lsl r0, r0, #6
    // ldr r0, [r5, r0]
    // ldr r2, [r5]
    // mov r1, #6
    // mov r3, #4
    // bl GfGfxLoader_LoadScrnDataFromOpenNarc
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // _02258C50: .word ov88_02259934
    // _02258C54: .word gSystem + 0x60
    // _02258C58: .word ov88_022599C0
    // _02258C5C: .word ov88_02259944
    // TODO: decompile
}



void ov88_02258C60(void) {
    // push {r4, r5, r6, lr}
    // ldr r5, _02258C90 ; =ov88_02259944
    // add r6, r0, #0
    // mov r4, #0
    // ldr r1, [r5]
    // ldr r0, [r6]
    // lsl r1, r1, #0x18
    // lsr r1, r1, #0x18
    // bl FreeBgTilemapBuffer
    // add r4, r4, #1
    // add r5, r5, #4
    // cmp r4, #5
    // blt _02258C68
    // ldr r0, [r6]
    // bl Heap_Free
    // ldr r0, _02258C94 ; =gSystem + 0x60
    // mov r1, #0
    // strb r1, [r0, #9]
    // bl GfGfx_SwapDisplay
    // pop {r4, r5, r6, pc}
    // nop
    // _02258C90: .word ov88_02259944
    // _02258C94: .word gSystem + 0x60
    // TODO: decompile
}



void ov88_02258C98(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // add r5, r0, #0
    // add r6, r1, #0
    // bl NNS_G2dInitOamManagerModule
    // mov r0, #0
    // str r0, [sp]
    // mov r1, #0x7e
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // mov r3, #0x1f
    // str r3, [sp, #0xc]
    // add r2, r0, #0
    // str r6, [sp, #0x10]
    // bl OamManager_Create
    // ldr r0, _02258D30 ; =ov88_02259914
    // ldr r1, _02258D34 ; =0x00200010
    // mov r2, #0x10
    // bl ObjCharTransfer_InitEx
    // mov r0, #0x20
    // add r1, r6, #0
    // bl ObjPlttTransfer_Init
    // bl ObjCharTransfer_ClearBuffers
    // bl ObjPlttTransfer_Reset
    // ldr r1, _02258D34 ; =0x00200010
    // mov r0, #1
    // bl G2dRenderer_SetObjCharTransferReservedRegion
    // mov r0, #1
    // bl G2dRenderer_SetPlttTransferReservedRegion
    // add r1, r5, #0
    // mov r0, #0x20
    // add r1, #8
    // add r2, r6, #0
    // bl G2dRenderer_Init
    // str r0, [r5, #4]
    // add r0, r5, #0
    // mov r2, #1
    // add r0, #8
    // mov r1, #0
    // lsl r2, r2, #0x14
    // bl G2dRenderer_SetSubSurfaceCoords
    // mov r7, #0x13
    // mov r4, #0
    // lsl r7, r7, #4
    // mov r0, #0x20
    // add r1, r4, #0
    // add r2, r6, #0
    // bl Create2DGfxResObjMan
    // str r0, [r5, r7]
    // add r4, r4, #1
    // add r5, r5, #4
    // cmp r4, #4
    // blt _02258D04
    // bl sub_0203A880
    // mov r0, #0x10
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #0x10
    // mov r1, #1
    // bl GfGfx_EngineBTogglePlanes
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // _02258D30: .word ov88_02259914
    // _02258D34: .word 0x00200010
    // TODO: decompile
}



void ov88_02258D38(void) {
    SpriteList_Delete(*((u32*)(r0 + 4)));
    // ldr r0, [r5, r6]
    Destroy2DGfxResObjMan();
    ObjCharTransfer_Destroy();
    ObjPlttTransfer_Destroy();
    OamManager_Free();
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
    // ldrh r1, [r0]
    // str r1, [sp, #0x14]
    // add r3, sp, #0x18
    // str r0, [sp, #0x18]
    CopyToBgTilemapRect(*((u32*)r1), 3, (((r3 + 5) << 0x18) >> 0x18), ((((*((u8*)(r3 + 0x10)) << 1) + 4) << 0x18) >> 0x18));
    ScheduleBgTilemapBufferTransfer(*((u32*)r4), 3);
}



void ov88_02258DE8(void) {
    // ldr r0, [sp, #0x38]
    _u32_div_f(3);
    // str r1, [sp, #0x1c]
    // ldr r0, [sp, #0x38]
    _u32_div_f(3);
    // ldr r1, [sp, #0x44]
    // ldr r1, [sp, #0x3c]
    // str r2, [sp]
    // str r2, [sp, #4]
    // add r2, #0xc
    // str r2, [sp, #8]
    // ldr r2, [sp, #0x1c]
    // str r2, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldrh r0, [r1]
    // add r4, #0x15
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    CopyToBgTilemapRect(*((u32*)r5), 3, (((r7 << 1) << 0x18) >> 0x18), ((((r6 << 1) + 4) << 0x18) >> 0x18));
    // ldr r0, [sp, #0x48]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BgTilemapRectChangePalette(*((u32*)r5), 3, ((r4 << 0x18) >> 0x18), ((r6 << 0x18) >> 0x18));
    // ldr r0, [sp, #0x40]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    BgTilemapRectChangePalette(*((u32*)r5), 3, ((r4 << 0x18) >> 0x18), ((r6 << 0x18) >> 0x18));
    ScheduleBgTilemapBufferTransfer(*((u32*)r5), 3);
}



void ov88_02258EA8(void) {
    // ldr r0, [sp, #0x1c]
    ov45_0222AD4C();
    // strb r1, [r5]
    // str r0, [sp]
    _u32_div_f(0x3c);
    *((u8*)(r5 + 1)) = (r0 + 1);
    *((u8*)(r5 + 2)) = 0;
    // ldr r0, [sp]
    _u32_div_f(0, 0x28);
    *((u32*)(r5 + 8)) = r0;
    *((u8*)(r5 + 4)) = 1;
    *((u16*)(r5 + 6)) = 0;
    *((u8*)(r5 + 5)) = 0;
    // ldr r2, [sp, #0x18]
    ov88_02258EFC(r5, r7);
    ov88_02258F60(r5, r6, r4);
}



void ov88_02258EF8(void) {
    // bx lr
    // TODO: decompile
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
    ov88_02258F74(*((u8*)(r0 + 4)));
    ov88_02258F88();
}



u16 ov88_02258F74(void) {
    *((u16*)(r0 + 6)) = (*((u16*)(r0 + 6)) + 1);
    *((u16*)(r0 + 6)) = 0;
}



void ov88_02258F88(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x24
    // add r4, r0, #0
    // str r1, [sp, #0x10]
    // str r2, [sp, #0x14]
    // ldrb r1, [r4, #1]
    // mov r0, #0x3c
    // ldrb r2, [r4, #2]
    // mul r0, r1
    // ldrb r1, [r4]
    // add r2, r2, r0
    // mov r0, #0xe1
    // lsl r0, r0, #4
    // mul r0, r1
    // ldr r1, [r4, #8]
    // add r0, r2, r0
    // bl _u32_div_f
    // ldrb r1, [r4, #5]
    // add r5, r0, #0
    // cmp r1, #0
    // beq _02259036
    // mov r2, #0
    // strh r2, [r4, #6]
    // strb r2, [r4, #5]
    // mov r0, #4
    // str r0, [sp]
    // mov r0, #0xa
    // str r0, [sp, #4]
    // mov r0, #8
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x14]
    // str r2, [sp, #0xc]
    // ldr r0, [r0]
    // mov r1, #3
    // mov r3, #5
    // bl FillBgTilemapRect
    // ldr r0, [sp, #0x14]
    // mov r1, #3
    // ldr r0, [r0]
    // bl ScheduleBgTilemapBufferTransfer
    // mov r0, #0
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x1c]
    // mov r1, #3
    // sub r6, r1, r0
    // mov r0, #0xa
    // add r7, r6, #0
    // mul r7, r0
    // lsl r0, r6, #0x18
    // lsr r0, r0, #0x18
    // mov r4, #0
    // str r0, [sp, #0x20]
    // mov r0, #9
    // sub r3, r0, r4
    // add r0, r3, r7
    // cmp r0, r5
    // blo _02259022
    // cmp r0, r5
    // bne _02259008
    // mov r2, #1
    // b _02259012
    // cmp r6, #3
    // bne _02259010
    // mov r2, #2
    // b _02259012
    // mov r2, #0
    // ldr r0, [sp, #0x20]
    // lsl r3, r3, #0x18
    // str r0, [sp]
    // ldr r0, [sp, #0x10]
    // ldr r1, [sp, #0x14]
    // lsr r3, r3, #0x18
    // bl ov88_02258D90
    // add r4, r4, #1
    // cmp r4, #0xa
    // blt _02258FF6
    // ldr r0, [sp, #0x1c]
    // add r0, r0, #1
    // str r0, [sp, #0x1c]
    // cmp r0, #4
    // blt _02258FE2
    // add sp, #0x24
    // pop {r4, r5, r6, r7, pc}
    // cmp r5, #0x28
    // bhs _022590B8
    // ldrh r1, [r4, #6]
    // add r1, r1, #1
    // strh r1, [r4, #6]
    // ldrh r6, [r4, #6]
    // mov r1, #0x1b
    // lsr r3, r6, #0x1f
    // lsl r2, r6, #0x1b
    // sub r2, r2, r3
    // ror r2, r1
    // mov r1, #0xa
    // add r7, r3, r2
    // bl _u32_div_f
    // str r1, [sp, #0x18]
    // add r0, r5, #0
    // mov r1, #0xa
    // bl _u32_div_f
    // cmp r7, #0
    // bne _0225909E
    // ldr r2, [r4, #8]
    // mov r1, #0x1e
    // mul r1, r2
    // lsr r4, r1, #2
    // mov r2, #6
    // mov r5, #0
    // add r1, r5, #1
    // add r3, r4, #0
    // mul r3, r1
    // cmp r3, r6
    // bls _02259080
    // ldr r1, _022590BC ; =ov88_02259924
    // lsl r2, r5, #2
    // ldr r2, [r1, r2]
    // b _02259086
    // add r5, r1, #0
    // cmp r1, #4
    // blt _0225906E
    // lsl r0, r0, #0x18
    // ldr r3, [sp, #0x18]
    // lsr r0, r0, #0x18
    // str r0, [sp]
    // lsl r3, r3, #0x18
    // ldr r0, [sp, #0x10]
    // ldr r1, [sp, #0x14]
    // lsr r3, r3, #0x18
    // bl ov88_02258D90
    // add sp, #0x24
    // pop {r4, r5, r6, r7, pc}
    // cmp r7, #0x10
    // bne _022590B8
    // lsl r0, r0, #0x18
    // ldr r3, [sp, #0x18]
    // lsr r0, r0, #0x18
    // str r0, [sp]
    // lsl r3, r3, #0x18
    // ldr r0, [sp, #0x10]
    // ldr r1, [sp, #0x14]
    // mov r2, #3
    // lsr r3, r3, #0x18
    // bl ov88_02258D90
    // add sp, #0x24
    // pop {r4, r5, r6, r7, pc}
    // _022590BC: .word ov88_02259924
    // TODO: decompile
}



void ov88_022590C0(void) {
}



void ov88_022590D4(void) {
    // bx lr
    // TODO: decompile
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
    *((u16*)(r0 + 2)) = 2;
    // strh r0, [r4]
    // ldrsh r0, [r4, r0]
    // str r0, [sp]
    // ldr r3, [sp, #0x10]
    ov88_02259244(r1, r2, r3);
    // ldrsh r1, [r4, r0]
    // strh r1, [r4]
    // ldrsh r1, [r4, r0]
    *((u16*)(r4 + 2)) = 0;
    *((u16*)(r4 + 2)) = 4;
    // strh r0, [r4]
    // ldrsh r0, [r4, r0]
    // str r0, [sp]
    // ldr r3, [sp, #0x10]
    ov88_02259264((r1 + 1), r2, r3);
    // ldrsh r1, [r4, r0]
    // strh r1, [r4]
    // ldrsh r1, [r4, r0]
    *((u16*)(r4 + 2)) = 0;
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
    FillBgTilemapRect(*((u32*)r1), 3, 0, 0x15);
    // str r5, [sp, #0x2c]
    // ldr r0, [sp, #0x2c]
    // str r0, [sp, #0x34]
    // add r1, r4, r5
    ov45_0222DCFC(r6);
    // add r1, r4, r5
    ov45_0222DD08(r6);
    // str r0, [sp, #0x28]
    // add r1, r4, r5
    ov45_0222DD14(r6);
    // str r0, [sp, #0x24]
    // add r1, r4, r5
    ov45_0222DD20(r6);
    // str r0, [sp, #0x20]
    // add r1, r4, r5
    ov45_0222DD2C(r6);
    // str r0, [sp, #0x30]
    // ldr r0, [sp, #0x1c]
    // add r1, r4, r5
    ov45_0222AB28();
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
    ov88_02258DE8(r7, ((r4 << 0x18) >> 0x18));
    // ldr r0, [sp, #0x2c]
    // str r0, [sp, #0x2c]
}



void ov88_02259244(void) {
    // ldr r5, [sp, #0x10]
    // tst r4, r5
    // tst r4, r5
    // str r4, [sp]
    ov88_0225918C();
}



void ov88_02259264(void) {
}



void ov88_02259280(void) {
    // str r3, [sp]
    ov45_0222DDE4(r1, r2, 0);
    // ldr r0, [sp]
    ov45_0222AB28(r0);
    // strb r0, [r5, r4]
    // strb r0, [r5, r4]
}



void ov88_022592B8(void) {
    // str r0, [sp]
    // add r6, #0xa
    // ldr r2, [sp]
    // ldrb r2, [r2, r4]
    // add r1, r6, r5
    // add r2, #0xe0
    // add r2, r7, r2
    GF_CreateNewVramTransferTask(0xf, (r2 << 1), 4);
    GF_AssertFail();
}



void ov88_022592EC(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x24
    // mov r7, #3
    // add r5, r0, #0
    // ldr r6, _022593C4 ; =_02259904
    // str r0, [sp, #0x14]
    // str r1, [sp, #0x18]
    // str r2, [sp, #0x1c]
    // mov r4, #0
    // str r0, [sp, #0x20]
    // lsl r7, r7, #8
    // add r5, #0x60
    // ldr r0, [sp, #0x20]
    // ldr r1, [sp, #0x18]
    // ldr r3, [sp, #0x1c]
    // add r2, r4, #0
    // bl ov88_02259508
    // ldrb r0, [r6]
    // add r1, r5, #0
    // mov r2, #3
    // str r0, [sp]
    // mov r0, #0x1e
    // str r0, [sp, #4]
    // mov r0, #2
    // str r0, [sp, #8]
    // add r0, r4, #7
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #0xc]
    // lsl r0, r7, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x18]
    // mov r3, #1
    // ldr r0, [r0]
    // bl AddWindowParameterized
    // add r0, r5, #0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // add r0, r5, #0
    // bl ScheduleWindowCopyToVram
    // ldr r0, [sp, #0x20]
    // add r4, r4, #1
    // add r0, #0x20
    // str r0, [sp, #0x20]
    // add r7, #0x3c
    // add r6, r6, #1
    // add r5, #0x10
    // cmp r4, #3
    // blt _02259304
    // mov r0, #1
    // ldr r1, [sp, #0x1c]
    // lsl r0, r0, #8
    // bl String_New
    // ldr r1, [sp, #0x14]
    // ldr r2, [sp, #0x14]
    // add r1, #0x90
    // str r0, [r1]
    // mov r1, #5
    // ldr r0, [sp, #0x18]
    // lsl r1, r1, #6
    // ldr r0, [r0, r1]
    // ldr r3, [sp, #0x1c]
    // mov r1, #0
    // add r2, #0x98
    // bl GfGfxLoader_GetPlttDataFromOpenNarc
    // ldr r1, [sp, #0x14]
    // mov r2, #4
    // add r1, #0x94
    // str r0, [r1]
    // ldr r1, [sp, #0x14]
    // mov r0, #0
    // add r1, #0x98
    // ldr r1, [r1]
    // mov r3, #0xfa
    // ldr r1, [r1, #0xc]
    // add r1, #0xee
    // bl BG_LoadPlttData
    // ldr r1, [sp, #0x14]
    // ldr r3, _022593C8 ; =0x0000011A
    // add r1, #0x98
    // ldr r1, [r1]
    // mov r0, #0
    // ldr r1, [r1, #0xc]
    // mov r2, #4
    // add r1, #0xee
    // bl BG_LoadPlttData
    // ldr r1, [sp, #0x14]
    // ldr r3, _022593CC ; =0x0000013A
    // add r1, #0x98
    // str r1, [sp, #0x14]
    // ldr r1, [r1]
    // mov r0, #0
    // ldr r1, [r1, #0xc]
    // mov r2, #4
    // add r1, #0xee
    // bl BG_LoadPlttData
    // add sp, #0x24
    // pop {r4, r5, r6, r7, pc}
    // _022593C4: .word _02259904
    // _022593C8: .word 0x0000011A
    // _022593CC: .word 0x0000013A
    // TODO: decompile
}



void ov88_022593D0(void) {
    // add r0, #0x94
    Heap_Free(*((u32*)r0));
    // add r0, #0x90
    String_Delete(*((u32*)r5));
    // add r4, #0x60
    RemoveWindow(r5);
    ov88_0225954C(r5);
    // add r4, #0x10
    // add r5, #0x20
}



void ov88_02259404(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x28
    // add r6, r0, #0
    // add r5, r1, #0
    // add r0, r2, #0
    // add r1, sp, #0x14
    // str r2, [sp, #4]
    // str r3, [sp, #8]
    // bl ov45_0222AB38
    // mov r0, #2
    // add r4, r6, #0
    // ldr r7, _022594DC ; =ov88_02259910
    // str r0, [sp, #0xc]
    // add r4, #0x40
    // ldrb r0, [r4]
    // cmp r0, #0
    // beq _02259458
    // add r0, r4, #0
    // bl ov88_022595E4
    // cmp r0, #1
    // bne _02259458
    // ldr r0, [sp, #0xc]
    // add r1, r0, #1
    // cmp r1, #3
    // bge _02259452
    // add r0, r6, #0
    // add r0, #0x98
    // ldr r0, [r0]
    // add r3, r4, #0
    // str r0, [sp]
    // lsl r0, r1, #5
    // ldr r1, [r4, #8]
    // ldr r2, [r7, #4]
    // add r0, r6, r0
    // add r3, #0x1c
    // bl ov88_02259560
    // add r0, r4, #0
    // bl ov88_022595DC
    // ldr r0, [sp, #0xc]
    // sub r4, #0x20
    // sub r7, r7, #4
    // sub r0, r0, #1
    // str r0, [sp, #0xc]
    // bpl _02259422
    // ldrb r0, [r6]
    // cmp r0, #0
    // bne _022594D6
    // add r0, r5, #0
    // bl ov45_0222DD44
    // cmp r0, #1
    // bne _022594D6
    // add r7, sp, #0x14
    // add r0, r5, #0
    // bl ov45_0222DD5C
    // add r4, r0, #0
    // ldr r0, [sp, #8]
    // add r3, r6, #0
    // str r0, [sp]
    // add r3, #0x90
    // ldr r3, [r3]
    // add r0, r5, #0
    // add r1, r7, #0
    // add r2, r4, #0
    // bl ov45_0222DD78
    // cmp r0, #1
    // bne _022594C6
    // ldr r3, [sp, #4]
    // add r0, sp, #0x10
    // add r1, r5, #0
    // add r2, r4, #0
    // bl ov88_02259280
    // add r0, r6, #0
    // add r0, #0x98
    // ldr r0, [r0]
    // mov r2, #0x15
    // str r0, [sp]
    // add r0, r6, #0
    // add r6, #0x90
    // ldr r1, [r6]
    // lsl r2, r2, #4
    // add r3, sp, #0x10
    // bl ov88_02259560
    // add r0, r5, #0
    // bl ov45_0222DCE8
    // add sp, #0x28
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r5, #0
    // bl ov45_0222DCE8
    // add r0, r5, #0
    // bl ov45_0222DD44
    // cmp r0, #1
    // beq _02259476
    // mov r0, #0
    // add sp, #0x28
    // pop {r3, r4, r5, r6, r7, pc}
    // _022594DC: .word ov88_02259910
    // TODO: decompile
}



void ov88_022594E0(void) {
    // add r4, #0x60
    // ldrb r0, [r6]
    ov88_022595F8(r0, r0);
    // add r6, #0x20
    // add r4, #0x10
    // add r5, #0x20
}



void ov88_02259508(void) {
    // strb r0, [r5]
    *((u16*)(r0 + 2)) = 0;
    String_New((1 << 8), r3);
    *((u32*)(r5 + 8)) = r0;
    *((u8*)(r5 + 1)) = (r6 + 7);
    // add r5, #0xc
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r3, [sp, #0x10]
    AddWindowParameterized(*((u32*)r4), r5, 3, 0);
}



void ov88_0225954C(void) {
}



void ov88_02259560(void) {
    String_Copy(*((u32*)(r0 + 8)));
    // strb r0, [r5]
    *((u16*)(r5 + 2)) = 0;
    *((u16*)(r5 + 4)) = r6;
    FontID_String_GetWidth(1, r7, 0);
    *((u16*)(r5 + 6)) = r0;
    // add r0, r1, r0
    *((u16*)(r5 + 6)) = (1 << 8);
    GF_AssertFail((0x5a << 4), *((u16*)(r5 + 6)));
    // add r0, #0xc
    FillWindowPixelBuffer(r5, 0);
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r3, [sp, #8]
    // add r0, #0xc
    AddTextPrinterParameterized(r5, 1, *((u32*)(r5 + 8)), 0);
    // ldrb r0, [r4]
    // ldr r1, [sp, #0x20]
    *((u8*)(r5 + 0x1c)) = r0;
    *((u8*)(r5 + 0x1d)) = *((u8*)(r4 + 1));
    *((u8*)(r5 + 0x1e)) = *((u8*)(r4 + 2));
    *((u8*)(r5 + 0x1f)) = *((u8*)(r4 + 3));
    // add r0, #0x1c
    ov88_022592B8(r5, *((u8*)(r5 + 1)));
}



void ov88_022595DC(void) {
}



u16 ov88_022595E4(void) {
    *((u16*)(r0 + 2)) = (*((u16*)(r0 + 2)) + 1);
}



void ov88_022595F8(void) {
    // str r1, [sp, #0x1c]
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x20]
    // mul r0, r1
    _s32_div_f(*((u16*)(r0 + 6)), *((u16*)(r0 + 4)));
    // sub r7, r0, r4
    // sub r6, r4, r0
    // ldr r0, [sp, #0x20]
    // sub r4, r0, r4
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x1c]
    FillWindowPixelRect(0x10, 0, 0, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // str r3, [sp, #0xc]
    // str r1, [sp, #0x10]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x1c]
    BlitBitmapRect(0xf, *((u32*)(r5 + 0x18)), ((r6 << 0x10) >> 0x10), 0);
    // ldr r0, [sp, #0x1c]
    ScheduleWindowCopyToVram();
}



void ov88_0225967C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x40
    // str r1, [sp, #0x18]
    // str r2, [sp, #0x1c]
    // mov r1, #0
    // mov r2, #0x70
    // str r0, [sp, #0x14]
    // bl memset
    // ldr r2, _022597CC ; =0x000002F5
    // ldr r3, [sp, #0x1c]
    // mov r0, #0
    // mov r1, #0x1b
    // bl NewMsgDataFromNarc
    // str r0, [sp, #0x38]
    // ldr r1, [sp, #0x1c]
    // mov r0, #0x80
    // bl String_New
    // str r0, [sp, #0x34]
    // mov r0, #0
    // str r0, [sp, #0x3c]
    // ldr r0, _022597D0 ; =ov88_02259A68
    // ldr r5, _022597D4 ; =ov88_02259980
    // str r0, [sp, #0x28]
    // ldr r0, _022597D8 ; =_02259A60
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #0x14]
    // str r0, [sp, #0x20]
    // add r0, #0x40
    // str r0, [sp, #0x20]
    // ldr r1, [sp, #0x24]
    // ldr r2, [sp, #0x28]
    // ldrh r1, [r1]
    // ldr r0, [sp, #0x20]
    // ldr r2, [r2]
    // bl ov88_0225983C
    // ldrb r0, [r5, #1]
    // ldr r1, [sp, #0x14]
    // mov r2, #0
    // str r0, [sp]
    // ldrb r0, [r5, #2]
    // str r0, [sp, #4]
    // ldrb r0, [r5, #3]
    // str r0, [sp, #8]
    // ldrb r0, [r5, #6]
    // str r0, [sp, #0xc]
    // ldrh r0, [r5, #4]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x18]
    // ldrb r3, [r5]
    // ldr r0, [r0]
    // bl AddWindowParameterized
    // ldr r0, [sp, #0x14]
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // ldr r0, [sp, #0x38]
    // ldr r1, [sp, #0x3c]
    // ldr r2, [sp, #0x34]
    // bl ReadMsgDataIntoString
    // ldr r0, [sp, #0x34]
    // bl String_CountLines
    // str r0, [sp, #0x30]
    // ldr r0, [sp, #0x34]
    // ldrb r6, [r5, #8]
    // bl String_GetLength
    // ldr r1, [sp, #0x1c]
    // add r0, r0, #1
    // bl String_New
    // add r4, r0, #0
    // ldr r0, [sp, #0x30]
    // mov r7, #0
    // cmp r0, #0
    // bls _0225978A
    // ldr r1, [sp, #0x34]
    // add r0, r4, #0
    // add r2, r7, #0
    // bl String_GetLineN
    // ldrb r0, [r5, #9]
    // cmp r0, #0
    // beq _0225973A
    // cmp r0, #1
    // beq _02259740
    // cmp r0, #2
    // beq _02259756
    // b _02259766
    // ldrb r0, [r5, #7]
    // str r0, [sp, #0x2c]
    // b _02259766
    // mov r0, #0
    // add r1, r4, #0
    // add r2, r0, #0
    // bl FontID_String_GetWidthMultiline
    // add r0, r0, #1
    // ldrb r1, [r5, #7]
    // lsr r0, r0, #1
    // sub r0, r1, r0
    // str r0, [sp, #0x2c]
    // b _02259766
    // mov r0, #0
    // add r1, r4, #0
    // add r2, r0, #0
    // bl FontID_String_GetWidthMultiline
    // ldrb r1, [r5, #7]
    // sub r0, r1, r0
    // str r0, [sp, #0x2c]
    // str r6, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, [r5, #0xc]
    // ldr r3, [sp, #0x2c]
    // str r0, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x14]
    // mov r1, #0
    // add r2, r4, #0
    // bl AddTextPrinterParameterizedWithColor
    // ldr r0, [sp, #0x30]
    // add r7, r7, #1
    // add r6, #0x10
    // cmp r7, r0
    // blo _02259720
    // add r0, r4, #0
    // bl String_Delete
    // ldr r0, [sp, #0x14]
    // bl ScheduleWindowCopyToVram
    // ldr r0, [sp, #0x28]
    // add r5, #0x10
    // add r0, r0, #4
    // str r0, [sp, #0x28]
    // ldr r0, [sp, #0x24]
    // add r0, r0, #2
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #0x20]
    // add r0, #0xc
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x14]
    // add r0, #0x10
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x3c]
    // add r0, r0, #1
    // str r0, [sp, #0x3c]
    // cmp r0, #4
    // blt _022596BC
    // ldr r0, [sp, #0x34]
    // bl String_Delete
    // ldr r0, [sp, #0x38]
    // bl DestroyMsgData
    // add sp, #0x40
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _022597CC: .word 0x000002F5
    // _022597D0: .word ov88_02259A68
    // _022597D4: .word ov88_02259980
    // _022597D8: .word _02259A60
    // TODO: decompile
}



void ov88_022597DC(void) {
    // add r4, #0x40
    RemoveWindow(r0);
    ov88_0225985C(r4);
    // add r5, #0x10
    // add r4, #0xc
}



void ov88_02259800(void) {
}



void ov88_02259818(void) {
    GF_AssertFail();
    GF_AssertFail();
    // add r5, #0x40
    // mul r0, r4
    // add r0, r5, r0
    ov88_02259878(0xc);
}



void ov88_0225983C(void) {
}



void ov88_0225985C(void) {
}



void ov88_02259878(void) {
}



void ov88_02259884(void) {
    // strh r0, [r4]
    // ldrh r0, [r4]
    PlaySE(((*((u32*)(r0 + 8)) << 0x10) >> 0x10));
    // add r0, r1, r0
    // asr r3, r0, #1
    // sub r0, #0xe
    _s32_div_f((((*((u16*)(r4 + 2)) << 4) >> 0x1f) << 4), 0xe, 0x10);
    // sub r3, r1, r0
    // add r0, sp, #4
    // strh r1, [r0]
    // str r0, [sp]
    // add r0, sp, #4
    BlendPalette(0x19, (r4 + 4), 1, ((r3 << 0x18) >> 0x18));
    DC_FlushRange((r4 + 4), 2);
    GX_LoadBGPltt((r4 + 4), *((u16*)(r4 + 6)), 2);
    *((u16*)(r4 + 2)) = (*((u16*)(r4 + 2)) + 1);
}


