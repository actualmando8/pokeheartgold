/* Decompiled from asm/overlay_74_thumb.s */
#include "global.h"

void ov74_02228C84(void) {
    // push {r3, r4}
    // ldr r4, _02228CAC ; =ov74_0223BD68
    // ldr r1, _02228CB0 ; =0x00000123
    // mov r3, #0
    // ldrh r2, [r4, #2]
    // cmp r0, r2
    // bne _02228C9C
    // ldr r0, _02228CAC ; =ov74_0223BD68
    // lsl r1, r3, #2
    // ldrh r0, [r0, r1]
    // pop {r3, r4}
    // bx lr
    // add r3, r3, #1
    // add r4, r4, #4
    // cmp r3, r1
    // blo _02228C8C
    // mov r0, #0x3f
    // pop {r3, r4}
    // bx lr
    // nop
    // _02228CAC: .word ov74_0223BD68
    // _02228CB0: .word 0x00000123
    // TODO: decompile
}



void ov74_IntToWstring5(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // ldr r1, _02228D1C ; =0x00002710
    // add r0, r4, #0
    // bl _s32_div_f
    // add r0, #0x30
    // strh r0, [r5]
    // ldr r1, _02228D1C ; =0x00002710
    // add r0, r4, #0
    // bl _s32_div_f
    // add r4, r1, #0
    // mov r1, #0xfa
    // add r0, r4, #0
    // lsl r1, r1, #2
    // bl _s32_div_f
    // add r0, #0x30
    // mov r1, #0xfa
    // strh r0, [r5, #2]
    // add r0, r4, #0
    // lsl r1, r1, #2
    // bl _s32_div_f
    // add r4, r1, #0
    // add r0, r4, #0
    // mov r1, #0x64
    // bl _s32_div_f
    // add r0, #0x30
    // strh r0, [r5, #4]
    // add r0, r4, #0
    // mov r1, #0x64
    // bl _s32_div_f
    // add r4, r1, #0
    // add r0, r4, #0
    // mov r1, #0xa
    // bl _s32_div_f
    // add r0, #0x30
    // strh r0, [r5, #6]
    // add r0, r4, #0
    // mov r1, #0xa
    // bl _s32_div_f
    // add r4, r1, #0
    // add r4, #0x30
    // strh r4, [r5, #8]
    // pop {r3, r4, r5, pc}
    // _02228D1C: .word 0x00002710
    // TODO: decompile
}



void ov74_02228D20(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r7, r0, #0
    // ldr r0, [r7, #0x10]
    // bl PlayerProfile_GetNamePtr
    // ldr r5, _02228D58 ; =ov74_0223D080
    // add r4, r0, #0
    // mov r6, #0
    // ldrh r0, [r4]
    // bl ov74_02228C84
    // strh r0, [r5]
    // add r6, r6, #1
    // add r4, r4, #2
    // add r5, r5, #2
    // cmp r6, #8
    // blt _02228D30
    // ldr r0, [r7, #0x10]
    // bl PlayerProfile_GetTrainerID_VisibleHalf
    // add r1, r0, #0
    // ldr r0, _02228D5C ; =ov74_0223D090
    // bl ov74_IntToWstring5
    // ldr r0, _02228D60 ; =ov74_0223D080
    // mov r1, #0
    // strh r1, [r0, #0x1a]
    // pop {r3, r4, r5, r6, r7, pc}
    // _02228D58: .word ov74_0223D080
    // _02228D5C: .word ov74_0223D090
    // _02228D60: .word ov74_0223D080
    // TODO: decompile
}



void ov74_02228D64(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x48
    // ldr r5, _02228E90 ; =_0223B340
    // add r4, r0, #0
    // add r3, sp, #0x20
    // mov r2, #5
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // sub r2, r2, #1
    // bne _02228D70
    // ldr r3, _02228E94 ; =_0223B330
    // add r2, sp, #0x10
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // add r0, sp, #0x20
    // bl GfGfx_SetBanks
    // add r0, sp, #0x10
    // bl SetBothScreensModesAndDisable
    // mov r1, #0
    // str r1, [sp]
    // mov r3, #0xf
    // ldr r0, [r4, #4]
    // mov r2, #1
    // lsl r3, r3, #0xc
    // bl ov74_02235308
    // mov r0, #1
    // lsl r0, r0, #0xe
    // str r0, [sp]
    // mov r1, #1
    // mov r3, #0x3e
    // ldr r0, [r4, #4]
    // add r2, r1, #0
    // lsl r3, r3, #0xa
    // bl ov74_02235308
    // mov r0, #0
    // str r0, [sp]
    // mov r3, #0x1e
    // ldr r0, [r4, #4]
    // mov r1, #4
    // mov r2, #1
    // lsl r3, r3, #0xa
    // bl ov74_02235308
    // mov r0, #1
    // lsl r0, r0, #0xe
    // str r0, [sp]
    // mov r3, #7
    // ldr r0, [r4, #4]
    // mov r1, #5
    // mov r2, #1
    // lsl r3, r3, #0xc
    // bl ov74_02235308
    // bl ResetAllTextPrinters
    // mov r0, #0
    // ldr r2, [r4]
    // add r1, r0, #0
    // bl LoadFontPal0
    // mov r1, #0
    // str r1, [sp]
    // ldr r0, [r4]
    // mov r2, #1
    // str r0, [sp, #4]
    // ldr r0, [r4, #4]
    // add r3, r2, #0
    // bl LoadUserFrameGfx1
    // ldr r0, [r4, #0x14]
    // bl Options_GetFrame
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp]
    // ldr r0, [r4]
    // mov r1, #0
    // str r0, [sp, #4]
    // ldr r0, [r4, #4]
    // mov r2, #0xa
    // mov r3, #2
    // bl LoadUserFrameGfx2
    // mov r0, #0x20
    // str r0, [sp]
    // ldr r0, [r4]
    // mov r1, #0
    // str r0, [sp, #4]
    // mov r0, #0x71
    // add r3, r0, #0
    // add r2, r1, #0
    // add r3, #0x8f
    // bl GfGfxLoader_GXLoadPal
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #5
    // lsl r0, r0, #0xa
    // mov r1, #1
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // ldr r0, [r4]
    // add r3, r1, #0
    // str r0, [sp, #0xc]
    // ldr r2, [r4, #4]
    // mov r0, #0x71
    // bl GfGfxLoader_LoadCharData
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #6
    // lsl r0, r0, #8
    // str r0, [sp, #4]
    // mov r3, #1
    // str r3, [sp, #8]
    // ldr r0, [r4]
    // mov r1, #2
    // str r0, [sp, #0xc]
    // ldr r2, [r4, #4]
    // mov r0, #0x71
    // bl GfGfxLoader_LoadScrnData
    // mov r0, #0x20
    // str r0, [sp]
    // mov r0, #0x18
    // str r0, [sp, #4]
    // mov r0, #8
    // str r0, [sp, #8]
    // mov r2, #0
    // ldr r0, [r4, #4]
    // mov r1, #1
    // add r3, r2, #0
    // bl BgTilemapRectChangePalette
    // ldr r0, [r4, #4]
    // mov r1, #1
    // bl BgCommitTilemapBufferToVram
    // add r0, r4, #0
    // bl ov74_02228E98
    // add sp, #0x48
    // pop {r3, r4, r5, pc}
    // nop
    // _02228E90: .word _0223B340
    // _02228E94: .word _0223B330
    // TODO: decompile
}



void ov74_02228E98(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r3, #0xfc
    GfGfxLoader_GXLoadPal(0x71, 0, 4, 4);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharData(0x71, 1, *((u32*)(r4 + 4)), 4);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnData(0x71, 2, *((u32*)(r4 + 4)), 4);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BgTilemapRectChangePalette(*((u32*)(r4 + 4)), 4, 0, 0);
    BgCommitTilemapBufferToVram(*((u32*)(r4 + 4)), 4);
}



void ov74_02228F14(void) {
    // push {r3, r4, lr}
    // sub sp, #0x5c
    // add r4, r0, #0
    // add r0, #0x18
    // bl WindowIsInUse
    // cmp r0, #0
    // bne _02228F5E
    // mov r0, #1
    // str r0, [sp]
    // add r1, r4, #0
    // str r0, [sp, #4]
    // add r0, sp, #8
    // add r1, #0x18
    // mov r2, #0
    // mov r3, #0x11
    // bl ov74_02235414
    // mov r3, #0x51
    // lsl r3, r3, #2
    // ldr r3, [r4, r3]
    // add r0, sp, #8
    // mov r1, #0x16
    // mov r2, #0x10
    // bl ov74_02235464
    // mov r0, #2
    // str r0, [sp]
    // ldr r0, [r4, #4]
    // add r1, sp, #8
    // mov r2, #5
    // mov r3, #4
    // bl ov74_02235568
    // add sp, #0x5c
    // mov r0, #1
    // pop {r3, r4, pc}
    // ldr r0, _02228F88 ; =gSystem
    // ldr r1, [r0, #0x48]
    // mov r0, #3
    // tst r0, r1
    // beq _02228F80
    // add r0, r4, #0
    // add r0, #0x18
    // mov r1, #0
    // bl sub_0200E5D4
    // add r4, #0x18
    // add r0, r4, #0
    // bl RemoveWindow
    // add sp, #0x5c
    // mov r0, #0
    // pop {r3, r4, pc}
    // mov r0, #1
    // add sp, #0x5c
    // pop {r3, r4, pc}
    // nop
    // _02228F88: .word gSystem
    // TODO: decompile
}



void ov74_02228F8C(void) {
    // push {r4, lr}
    // sub sp, #8
    // add r4, r0, #0
    // mov r0, #0xa
    // str r0, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // add r0, r4, #0
    // add r1, r4, #0
    // add r0, #0x48
    // add r1, #0x28
    // mov r2, #0
    // mov r3, #0xf7
    // bl ov74_02235414
    // mov r3, #0x51
    // lsl r3, r3, #2
    // add r0, r4, #0
    // ldr r3, [r4, r3]
    // add r0, #0x48
    // mov r1, #0x1b
    // mov r2, #4
    // bl ov74_02235464
    // add r0, r4, #0
    // mov r1, #1
    // add r0, #0x48
    // add r2, r1, #0
    // bl ov74_0223546C
    // mov r0, #0x48
    // str r0, [sp]
    // add r1, r4, #0
    // ldr r0, [r4, #4]
    // add r1, #0x48
    // mov r2, #2
    // mov r3, #0x13
    // bl ov74_02235568
    // add r0, r4, #0
    // add r0, #0x48
    // bl ov74_02235634
    // mov r1, #0x51
    // lsl r1, r1, #2
    // ldr r2, [r4, r1]
    // mov r3, #0xf7
    // add r0, r2, r0
    // str r0, [r4, r1]
    // mov r0, #1
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, r4, #0
    // add r1, r4, #0
    // add r0, #0x9c
    // add r1, #0x18
    // mov r2, #0
    // bl ov74_02235414
    // mov r3, #0x51
    // lsl r3, r3, #2
    // add r0, r4, #0
    // ldr r3, [r4, r3]
    // add r0, #0x9c
    // mov r1, #0x1e
    // mov r2, #4
    // bl ov74_02235464
    // add r0, r4, #0
    // add r0, #0x9c
    // mov r1, #0
    // mov r2, #1
    // bl ov74_0223546C
    // mov r0, #0xb
    // str r0, [sp]
    // add r1, r4, #0
    // mov r2, #1
    // ldr r0, [r4, #4]
    // add r1, #0x9c
    // add r3, r2, #0
    // bl ov74_02235568
    // add r0, r4, #0
    // add r0, #0x9c
    // bl ov74_02235634
    // mov r1, #0x51
    // lsl r1, r1, #2
    // ldr r2, [r4, r1]
    // add r0, r2, r0
    // str r0, [r4, r1]
    // bl ov74_0223563C
    // bl ov74_02235690
    // mov r0, #0xc
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // mov r0, #0x71
    // mov r1, #0xe
    // mov r2, #0xb
    // mov r3, #0xd
    // bl ov74_02235728
    // mov r0, #1
    // str r0, [sp]
    // ldr r1, _02229080 ; =0x00003170
    // mov r0, #0
    // ldr r1, [r4, r1]
    // mov r2, #0x80
    // mov r3, #0x4c
    // bl ov74_02235930
    // ldr r1, _02229080 ; =0x00003170
    // str r0, [r4, r1]
    // add r0, r4, #0
    // bl ov74_02229084
    // add sp, #8
    // pop {r4, pc}
    // _02229080: .word 0x00003170
    // TODO: decompile
}



void ov74_02229084(void) {
    MessageFormat_New(*((u32*)r0));
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, #0xf0
    // add r1, #0x38
    ov74_02235414(r5, r5, 0, 0xf7);
    // ldr r3, [r5, r3]
    // add r0, #0xf0
    ov74_02235464(r5, 0x1a, 4, (0x51 << 2));
    // add r0, #0xf0
    ov74_0223546C(r5, 0, 1);
    // str r4, [r5, r0]
    BufferPlayersName(r4, 0, *((u32*)(r5 + 0x10)));
    PlayerProfile_GetTrainerID_VisibleHalf(*((u32*)(r5 + 0x10)));
    // str r0, [sp]
    // str r1, [sp, #4]
    BufferIntegerAsString(r4, 1, r0, 5);
    // str r0, [sp]
    // add r1, #0xf0
    ov74_02235568(*((u32*)(r5 + 4)), r5, 3, 0xd);
    // add r1, #0xf8
    // str r0, [r1]
    GetFontAttribute(0, 1);
    // add r0, #0xf0
    ov74_02235474(r5, 0, r0);
    // str r2, [sp]
    // sub r2, #0x47
    // add r1, #0xf0
    ov74_02235568(*((u32*)(r5 + 4)), r5, 0x46, 0x46);
    // add r0, sp, #0x10
    OS_GetMacAddress();
    // add r0, sp, #0x10
    ov74_022311F4();
    // add r1, sp, #0x1c
    // add r2, sp, #0x18
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    ov74_02231238();
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x1c]
    BufferIntegerAsString(r4, 0, 4);
    // str r0, [sp]
    // str r1, [sp, #4]
    // ldr r2, [sp, #0x18]
    BufferIntegerAsString(r4, 1, 4);
    // add r0, #0xfc
    // str r1, [r0]
    // str r2, [sp]
    // add r5, #0xf0
    // sub r2, #0x48
    ov74_02235568(*((u32*)(r5 + 4)), r5, 0x47, 0x47);
    MessageFormat_Delete(r4);
}



void ov74_02229190(void) {
    OverlayManager_GetData();
    ov74_022359BC();
    // add r0, #0x18
    WindowIsInUse(r4);
    // add r0, #0x18
    ClearWindowTilemapAndCopyToVram(r4);
    // add r0, #0x18
    RemoveWindow(r4);
    // add r0, #0x28
    ClearWindowTilemapAndCopyToVram(r4);
    // add r0, #0x28
    RemoveWindow(r4);
    // add r0, #0x38
    ClearWindowTilemapAndCopyToVram(r4);
    // add r0, #0x38
    RemoveWindow(r4);
    FreeBgTilemapBuffer(*((u32*)(r4 + 4)), 0);
    FreeBgTilemapBuffer(*((u32*)(r4 + 4)), 1);
    FreeBgTilemapBuffer(*((u32*)(r4 + 4)), 4);
    FreeBgTilemapBuffer(*((u32*)(r4 + 4)), 5);
    Heap_Free(*((u32*)(r4 + 4)));
}



void ov74_02229200(void) {
    // push {r3, r4, r5, lr}
    // mov r3, #2
    // ldr r2, _02229288 ; =0x000034DC
    // mov r1, #0x53
    // lsl r3, r3, #0x10
    // add r5, r0, #0
    // bl ov74_022352D0
    // add r4, r0, #0
    // mov r0, #0x53
    // str r0, [r4]
    // bl BgConfig_Alloc
    // str r0, [r4, #4]
    // add r0, r5, #0
    // bl OverlayManager_GetArgs
    // ldr r0, [r0, #8]
    // str r0, [r4, #8]
    // bl Save_PlayerData_GetProfile
    // str r0, [r4, #0x10]
    // ldr r0, [r4, #8]
    // bl Save_Pokedex_Get
    // str r0, [r4, #0xc]
    // ldr r0, [r4, #8]
    // bl Save_PlayerData_GetOptionsAddr
    // str r0, [r4, #0x14]
    // ldr r0, [r4]
    // bl ov74_022352A0
    // ldr r0, [r4, #8]
    // bl Save_MysteryGift_Get
    // ldr r1, _0222928C ; =0x00003174
    // mov r2, #0x53
    // str r0, [r4, r1]
    // mov r0, #9
    // lsl r2, r2, #2
    // str r0, [r4, r2]
    // add r0, r2, #0
    // mov r1, #0x28
    // sub r0, #8
    // str r1, [r4, r0]
    // add r1, r2, #0
    // mov r0, #0
    // add r1, #8
    // str r0, [r4, r1]
    // add r1, r2, #0
    // add r1, #0x10
    // str r0, [r4, r1]
    // add r2, #0xc
    // str r0, [r4, r2]
    // mov r2, #0x57
    // mov r1, #0x59
    // lsl r2, r2, #4
    // bl Heap_Create
    // ldr r1, _02229290 ; =0x0000047E
    // mov r0, #9
    // mov r2, #1
    // bl Sound_SetSceneAndPlayBGM
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // nop
    // _02229288: .word 0x000034DC
    // _0222928C: .word 0x00003174
    // _02229290: .word 0x0000047E
    // TODO: decompile
}



void ov74_02229294(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #4
    // add r5, r1, #0
    // add r6, r0, #0
    // bl OverlayManager_GetData
    // ldr r1, [r5]
    // add r4, r0, #0
    // cmp r1, #0xd
    // bhi _022292FA
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _022292B4: ; jump table
    // bl ov74_02228D64
    // ldr r0, [r4, #0xc]
    // bl Pokedex_IsEnabled
    // cmp r0, #0
    // bne _022292EC
    // mov r0, #1
    // add r1, r0, #0
    // add r2, r5, #0
    // mov r3, #0xd
    // bl ov74_0223539C
    // b _02229434
    // mov r0, #2
    // str r0, [r5]
    // b _02229434
    // bl ov74_02228F14
    // cmp r0, #0
    // beq _022292FC
    // b _02229434
    // mov r0, #1
    // bl ov74_02235390
    // mov r0, #0
    // mov r1, #0xc
    // add r2, r5, #0
    // mov r3, #0xd
    // bl ov74_0223539C
    // b _02229434
    // bl ov74_02228F8C
    // ldr r0, _02229440 ; =0x00003174
    // ldr r0, [r4, r0]
    // bl SaveMysteryGift_FindAvailable
    // cmp r0, #0
    // bne _0222934C
    // add r0, r4, #0
    // mov r1, #1
    // add r0, #0x98
    // str r1, [r0]
    // mov r0, #0x16
    // str r0, [sp]
    // add r1, r4, #0
    // ldr r0, [r4, #4]
    // add r1, #0x48
    // mov r2, #2
    // mov r3, #0x13
    // bl ov74_02235568
    // ldr r1, _02229444 ; =0x0000317C
    // add r2, r5, #0
    // str r0, [r4, r1]
    // mov r0, #1
    // mov r1, #3
    // mov r3, #0xd
    // bl ov74_0223539C
    // b _02229434
    // mov r0, #0x53
    // mov r1, #7
    // lsl r0, r0, #2
    // str r1, [r4, r0]
    // mov r0, #1
    // mov r1, #4
    // add r2, r5, #0
    // mov r3, #0xd
    // bl ov74_0223539C
    // b _02229434
    // ldr r0, _02229444 ; =0x0000317C
    // ldr r0, [r4, r0]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // bl TextPrinterCheckActive
    // cmp r0, #0
    // bne _02229434
    // ldr r0, _02229448 ; =gSystem
    // ldr r1, [r0, #0x48]
    // mov r0, #1
    // tst r1, r0
    // beq _02229434
    // bl ov74_02235390
    // mov r0, #0
    // mov r1, #0xc
    // add r2, r5, #0
    // mov r3, #0xd
    // bl ov74_0223539C
    // b _02229434
    // bl ov74_0222962C
    // mov r1, #0x15
    // lsl r1, r1, #4
    // str r0, [r4, r1]
    // ldr r0, [r4, r1]
    // cmp r0, #5
    // bne _022293B2
    // mov r0, #1
    // bl ov74_02235390
    // mov r0, #0
    // mov r1, #0xc
    // add r2, r5, #0
    // mov r3, #0xd
    // bl ov74_0223539C
    // b _02229434
    // cmp r0, #4
    // bne _02229434
    // mov r0, #1
    // bl ov74_02235390
    // mov r0, #0
    // mov r1, #0xc
    // add r2, r5, #0
    // mov r3, #0xd
    // bl ov74_0223539C
    // b _02229434
    // bl ov74_02228E98
    // mov r0, #1
    // add r1, r0, #0
    // bl GfGfx_EngineBTogglePlanes
    // mov r0, #2
    // mov r1, #0
    // bl GfGfx_EngineBTogglePlanes
    // mov r1, #0xc6
    // lsl r1, r1, #6
    // ldr r0, [r4, #4]
    // add r1, r4, r1
    // mov r2, #0x53
    // bl ov74_0222EC08
    // mov r0, #1
    // mov r1, #6
    // add r2, r5, #0
    // mov r3, #0xd
    // bl ov74_0223539C
    // ldr r1, _0222944C ; =0x000032D2
    // mov r0, #4
    // ldrb r2, [r4, r1]
    // bic r2, r0
    // strb r2, [r4, r1]
    // b _02229434
    // ldr r0, _02229448 ; =gSystem
    // ldr r0, [r0, #0x48]
    // cmp r0, #0
    // beq _02229434
    // mov r0, #0
    // mov r1, #0xb
    // add r2, r5, #0
    // mov r3, #0xd
    // bl ov74_0223539C
    // b _02229434
    // mov r0, #0
    // bl OS_ResetSystem
    // b _02229434
    // add r0, r6, #0
    // bl ov74_02229190
    // add sp, #4
    // mov r0, #1
    // pop {r3, r4, r5, r6, pc}
    // add r0, r5, #0
    // bl ov74_022353FC
    // bl ov74_022358BC
    // mov r0, #0
    // add sp, #4
    // pop {r3, r4, r5, r6, pc}
    // nop
    // _02229440: .word 0x00003174
    // _02229444: .word 0x0000317C
    // _02229448: .word gSystem
    // _0222944C: .word 0x000032D2
    // TODO: decompile
}



void ov74_02229450(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r0, #0x59
    // bl Heap_Destroy
    // ldr r0, _02229474 ; =FS_OVERLAY_ID(intro_title)
    // ldr r1, _02229478 ; =gApplication_TitleScreen
    // bl RegisterMainOverlay
    // add r0, r4, #0
    // bl OverlayManager_FreeData
    // mov r0, #0x53
    // bl Heap_Destroy
    // mov r0, #1
    // pop {r4, pc}
    // nop
    // _02229474: .word FS_OVERLAY_ID(intro_title)
    // _02229478: .word gApplication_TitleScreen
    // TODO: decompile
}



void ov74_0222947C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x20
    // add r5, r0, #0
    // mov r0, #0xc6
    // lsl r0, r0, #6
    // add r4, r5, r0
    // mov r2, #0xd6
    // add r0, r4, #0
    // mov r1, #0
    // lsl r2, r2, #2
    // bl MI_CpuFill8
    // ldr r3, [r5]
    // mov r0, #1
    // mov r1, #0x1b
    // mov r2, #0xf7
    // bl NewMsgDataFromNarc
    // add r6, r0, #0
    // ldr r0, [r5]
    // bl MessageFormat_New
    // mov r1, #0xc6
    // mov r2, #7
    // lsl r1, r1, #6
    // strh r2, [r5, r1]
    // ldr r3, [r5]
    // add r1, r6, #0
    // mov r2, #0x4e
    // str r0, [sp]
    // bl ReadMsgData_ExpandPlaceholders
    // mov r1, #0x41
    // lsl r1, r1, #2
    // add r7, r0, #0
    // add r1, r4, r1
    // mov r2, #0x24
    // bl CopyStringToU16Array
    // add r0, r7, #0
    // bl String_Delete
    // mov r0, #8
    // bl ov74_02235A68
    // add r7, r0, #0
    // mov r0, #7
    // bl ov74_02235A68
    // str r0, [sp, #4]
    // mov r0, #0xc
    // bl ov74_02235A68
    // str r0, [sp, #8]
    // mov r0, #0xa
    // bl ov74_02235A68
    // str r0, [sp, #0xc]
    // mov r0, #0xb
    // bl ov74_02235A68
    // ldr r1, [sp, #0xc]
    // mov r2, #0x53
    // orr r1, r0
    // ldr r0, [sp, #8]
    // lsl r2, r2, #2
    // orr r1, r0
    // ldr r0, [sp, #4]
    // mov r3, #1
    // orr r0, r1
    // orr r0, r7
    // str r0, [r4, r2]
    // mov r1, #1
    // add r0, r2, #4
    // strh r1, [r4, r0]
    // add r0, r2, #6
    // add r1, r0, #0
    // ldrb r1, [r4, r1]
    // bic r1, r3
    // add r3, r0, #0
    // strb r1, [r4, r3]
    // add r1, r0, #0
    // ldrb r1, [r4, r1]
    // mov r3, #2
    // bic r1, r3
    // add r3, r0, #0
    // strb r1, [r4, r3]
    // add r1, r0, #0
    // ldrb r3, [r4, r1]
    // mov r1, #4
    // orr r3, r1
    // add r1, r0, #0
    // strb r3, [r4, r1]
    // ldrb r3, [r4, r1]
    // mov r1, #8
    // orr r3, r1
    // add r1, r0, #0
    // strb r3, [r4, r1]
    // ldrb r2, [r4, r0]
    // mov r1, #0x20
    // bic r2, r1
    // strb r2, [r4, r0]
    // ldr r0, [sp]
    // ldr r3, [r5]
    // add r1, r6, #0
    // mov r2, #0x4d
    // bl ReadMsgData_ExpandPlaceholders
    // mov r1, #0x55
    // lsl r1, r1, #2
    // add r7, r0, #0
    // add r1, r4, r1
    // mov r2, #0xfa
    // bl CopyStringToU16Array
    // add r0, r7, #0
    // bl String_Delete
    // mov r0, #0xd2
    // lsl r0, r0, #2
    // mov r1, #0
    // ldr r3, _022295C0 ; =0x000001EA
    // strb r1, [r4, r0]
    // add r2, r0, #2
    // strh r3, [r4, r2]
    // add r2, r0, #4
    // strh r1, [r4, r2]
    // add r2, r0, #6
    // strh r1, [r4, r2]
    // add r0, #8
    // strb r1, [r4, r0]
    // add r0, sp, #0x10
    // bl GF_RTC_CopyDate
    // add r0, sp, #0x10
    // bl RTC_ConvertDateToDay
    // mov r1, #0xd5
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // ldr r0, [sp]
    // bl MessageFormat_Delete
    // add r0, r6, #0
    // bl DestroyMsgData
    // ldr r0, _022295C4 ; =0x00003174
    // add r1, r4, #0
    // ldr r0, [r5, r0]
    // mov r2, #3
    // bl SaveMysteryGift_TryInsertGift
    // mov r0, #1
    // mov r1, #0
    // bl GfGfx_EngineBTogglePlanes
    // ldr r0, [r5, #4]
    // add r1, r4, #0
    // bl ov74_02235DC4
    // add sp, #0x20
    // pop {r3, r4, r5, r6, r7, pc}
    // _022295C0: .word 0x000001EA
    // _022295C4: .word 0x00003174
    // TODO: decompile
}



void ov74_022295C8(void) {
    // str r1, [r0, r2]
}



void ov74_022295D0(void) {
    // push {r3, r4, r5, lr}
    // add r5, r1, #0
    // mov r1, #0x16
    // lsl r1, r1, #4
    // add r4, r3, #0
    // ldr r3, [r0, r1]
    // sub r3, r3, #1
    // str r3, [r0, r1]
    // ldr r0, [r0, r1]
    // cmp r0, #0
    // bne _022295F2
    // bl ov74_02231008
    // mov r0, #0x17
    // str r0, [r5]
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // cmp r2, #0
    // beq _0222960A
    // bl ov74_02230FD4
    // cmp r0, #0
    // bne _0222960A
    // bl ov74_02231008
    // mov r0, #0x16
    // str r0, [r5]
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // cmp r4, #0
    // beq _02229622
    // ldr r0, _02229628 ; =gSystem
    // ldr r0, [r0, #0x48]
    // tst r0, r4
    // beq _02229622
    // bl ov74_02231008
    // mov r0, #0x1a
    // str r0, [r5]
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // nop
    // _02229628: .word gSystem
    // TODO: decompile
}



void ov74_0222962C(void) {
    // push {r3, r4, r5, lr}
    // mov r5, #0x57
    // lsl r5, r5, #2
    // add r4, r0, #0
    // sub r0, r5, #4
    // ldr r0, [r4, r0]
    // cmp r0, #1
    // bne _02229652
    // bl ov74_02230E7C
    // mov r1, #3
    // sub r0, r1, r0
    // bl sub_0203A930
    // bl ov74_02230D28
    // mov r0, #1
    // bl ov74_022310B8
    // ldr r0, [r4, r5]
    // cmp r0, #0x1e
    // bls _0222965A
    // b _02229B52
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _02229666: ; jump table
    // add r0, r4, #0
    // bl ov74_02228D20
    // bl sub_02034D8C
    // mov r0, #0x52
    // mov r1, #1
    // lsl r0, r0, #2
    // str r1, [r4, r0]
    // str r1, [r4, r5]
    // b _02229B52
    // bl sub_02034DB8
    // cmp r0, #0
    // beq _02229772
    // mov r1, #0x5b
    // lsl r1, r1, #2
    // ldr r0, _022299FC ; =ov74_0223BD5C
    // add r1, r4, r1
    // bl ov74_02230A84
    // mov r0, #0x56
    // mov r1, #1
    // lsl r0, r0, #2
    // str r1, [r4, r0]
    // bl sub_0203A880
    // mov r0, #2
    // str r0, [r4, r5]
    // b _02229B52
    // bl ov74_02230D6C
    // mov r1, #0x19
    // add r0, r4, #0
    // lsl r1, r1, #6
    // bl ov74_022295C8
    // add r0, r4, #0
    // add r0, #0x28
    // mov r1, #0xa
    // bl WaitingIcon_New
    // ldr r1, _02229A00 ; =0x000034D8
    // str r0, [r4, r1]
    // mov r0, #3
    // str r0, [r4, r5]
    // b _02229B52
    // bl ov74_02230E94
    // cmp r0, #0
    // beq _0222971E
    // sub r1, r0, #1
    // mov r0, #0x59
    // lsl r0, r0, #2
    // str r1, [r4, r0]
    // ldr r1, _02229A04 ; =0x00000708
    // add r0, r4, #0
    // bl ov74_022295C8
    // mov r0, #4
    // str r0, [r4, r5]
    // add r0, r4, #0
    // add r1, r4, r5
    // mov r2, #0
    // mov r3, #2
    // bl ov74_022295D0
    // b _02229B52
    // mov r0, #0x59
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl ov74_02230DB8
    // cmp r0, #0
    // beq _02229750
    // mov r0, #0x59
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl ov74_02230DF4
    // mov r0, #7
    // str r0, [r4, r5]
    // mov r0, #0x16
    // ldr r1, _02229A04 ; =0x00000708
    // lsl r0, r0, #4
    // str r1, [r4, r0]
    // add r0, r4, #0
    // add r1, r4, r5
    // mov r2, #0
    // mov r3, #2
    // bl ov74_022295D0
    // b _02229B52
    // add r0, r4, #0
    // add r1, r4, r5
    // mov r2, #0
    // mov r3, #2
    // bl ov74_022295D0
    // bl ov74_02230FD4
    // cmp r0, #0
    // bne _02229774
    // b _02229B52
    // mov r0, #0x1d
    // str r0, [r4, r5]
    // b _02229B52
    // mov r0, #0x1f
    // str r0, [sp]
    // add r1, r4, #0
    // ldr r0, [r4, #4]
    // add r1, #0x48
    // mov r2, #2
    // mov r3, #0x13
    // bl ov74_02235568
    // ldr r0, _02229A08 ; =0x00003170
    // mov r1, #0
    // ldr r0, [r4, r0]
    // bl Sprite_SetDrawFlag
    // ldr r0, _02229A00 ; =0x000034D8
    // ldr r0, [r4, r0]
    // bl sub_0200F450
    // ldr r0, _02229A00 ; =0x000034D8
    // mov r1, #0
    // str r1, [r4, r0]
    // ldr r0, _02229A0C ; =SEQ_SE_DP_SELECT
    // bl PlaySE
    // mov r0, #0x16
    // ldr r1, _02229A04 ; =0x00000708
    // lsl r0, r0, #4
    // str r1, [r4, r0]
    // mov r0, #0x1e
    // str r0, [r4, r5]
    // b _02229B52
    // ldr r0, _02229A10 ; =gSystem
    // ldr r1, [r0, #0x48]
    // mov r0, #1
    // tst r0, r1
    // beq _022297C6
    // mov r0, #8
    // str r0, [r4, r5]
    // add r0, r4, #0
    // add r1, r4, r5
    // mov r2, #1
    // mov r3, #2
    // bl ov74_022295D0
    // b _02229B52
    // bl ov74_02230EB4
    // mov r0, #9
    // str r0, [r4, r5]
    // mov r0, #0x16
    // ldr r1, _02229A04 ; =0x00000708
    // lsl r0, r0, #4
    // str r1, [r4, r0]
    // add r0, r4, #0
    // add r1, r4, r5
    // mov r2, #1
    // mov r3, #2
    // bl ov74_022295D0
    // b _02229B52
    // bl ov74_02230F40
    // cmp r0, #0
    // beq _0222982E
    // bl ov74_02230EE8
    // mov r0, #0xa
    // str r0, [r4, r5]
    // mov r1, #0x32
    // mov r0, #0x16
    // lsl r1, r1, #6
    // lsl r0, r0, #4
    // str r1, [r4, r0]
    // mov r0, #0x23
    // str r0, [sp]
    // add r1, r4, #0
    // ldr r0, [r4, #4]
    // add r1, #0x48
    // mov r2, #2
    // mov r3, #0x13
    // bl ov74_02235568
    // ldr r0, _02229A0C ; =SEQ_SE_DP_SELECT
    // bl PlaySE
    // ldr r0, _02229A00 ; =0x000034D8
    // mov r1, #0
    // str r1, [r4, r0]
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // add r0, r4, #0
    // add r1, r4, r5
    // mov r2, #1
    // mov r3, #2
    // bl ov74_022295D0
    // b _02229B52
    // bl ov74_02230F40
    // cmp r0, #0
    // beq _0222986A
    // mov r0, #0x49
    // str r0, [sp]
    // add r1, r4, #0
    // ldr r0, [r4, #4]
    // add r1, #0x48
    // mov r2, #2
    // mov r3, #0x13
    // bl ov74_02235568
    // ldr r0, _02229A08 ; =0x00003170
    // mov r1, #1
    // ldr r0, [r4, r0]
    // bl Sprite_SetDrawFlag
    // add r0, r4, #0
    // bl ov74_02229084
    // mov r0, #0xb
    // str r0, [r4, r5]
    // add r0, r4, #0
    // add r1, r4, r5
    // mov r2, #1
    // mov r3, #2
    // bl ov74_022295D0
    // b _02229B52
    // ldr r0, _02229A14 ; =ov74_0223C1F4
    // mov r1, #0x2a
    // mov r2, #1
    // bl ov74_02230F14
    // mov r0, #0xc
    // str r0, [r4, r5]
    // mov r1, #0x32
    // mov r0, #0x16
    // lsl r1, r1, #6
    // lsl r0, r0, #4
    // str r1, [r4, r0]
    // b _02229B52
    // bl ov74_02230F6C
    // cmp r0, #0
    // beq _022298B8
    // mov r0, #0xd
    // str r0, [r4, r5]
    // mov r0, #0x16
    // mov r1, #0x3c
    // lsl r0, r0, #4
    // str r1, [r4, r0]
    // mov r0, #0x49
    // str r0, [sp]
    // add r1, r4, #0
    // ldr r0, [r4, #4]
    // add r1, #0x48
    // mov r2, #2
    // mov r3, #0x13
    // bl ov74_02235568
    // add r0, r4, #0
    // add r1, r4, r5
    // mov r2, #1
    // mov r3, #2
    // bl ov74_022295D0
    // b _02229B52
    // mov r0, #0x16
    // lsl r0, r0, #4
    // ldr r1, [r4, r0]
    // sub r1, r1, #1
    // str r1, [r4, r0]
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // bne _02229938
    // mov r0, #0x4a
    // str r0, [sp]
    // add r1, r4, #0
    // ldr r0, [r4, #4]
    // add r1, #0x48
    // mov r2, #2
    // mov r3, #0x13
    // bl ov74_02235568
    // add r0, r4, #0
    // add r0, #0x28
    // mov r1, #0xa
    // bl WaitingIcon_New
    // ldr r1, _02229A00 ; =0x000034D8
    // str r0, [r4, r1]
    // add r0, r4, #0
    // bl ov74_0222947C
    // ldr r0, [r4, #8]
    // bl ov74_022360A0
    // mov r0, #0xe
    // str r0, [r4, r5]
    // b _02229B52
    // bl ov74_022360B0
    // cmp r0, #1
    // bne _02229938
    // mov r0, #0xf
    // str r0, [r4, r5]
    // bl OS_GetTickLo
    // mov r1, #0x36
    // bl _s32_div_f
    // mov r0, #0x16
    // add r1, r1, #6
    // lsl r0, r0, #4
    // str r1, [r4, r0]
    // b _02229B52
    // mov r0, #0x16
    // lsl r0, r0, #4
    // ldr r1, [r4, r0]
    // sub r1, r1, #1
    // str r1, [r4, r0]
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // beq _0222993A
    // b _02229B52
    // mov r0, #0x10
    // str r0, [r4, r5]
    // b _02229B52
    // ldr r0, _02229A14 ; =ov74_0223C1F4
    // mov r1, #0x2a
    // mov r2, #2
    // bl ov74_02230F14
    // mov r0, #0x11
    // str r0, [r4, r5]
    // mov r1, #0x4b
    // mov r0, #0x16
    // lsl r1, r1, #4
    // lsl r0, r0, #4
    // str r1, [r4, r0]
    // b _02229B52
    // bl ov74_02230F98
    // cmp r0, #0
    // beq _02229976
    // bl ov74_02236128
    // mov r0, #0x12
    // str r0, [r4, r5]
    // mov r1, #0x32
    // mov r0, #0x16
    // lsl r1, r1, #4
    // lsl r0, r0, #4
    // str r1, [r4, r0]
    // b _02229B52
    // mov r0, #0x16
    // lsl r0, r0, #4
    // ldr r1, [r4, r0]
    // sub r1, r1, #1
    // str r1, [r4, r0]
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // bne _02229996
    // bl ov74_02231008
    // mov r0, #0x17
    // mov r1, #0x78
    // str r0, [r4, r5]
    // add r0, r1, #0
    // add r0, #0xe8
    // str r1, [r4, r0]
    // bl ov74_02230FD4
    // cmp r0, #0
    // bne _02229A48
    // bl ov74_02231008
    // mov r0, #0x16
    // mov r1, #0x78
    // str r0, [r4, r5]
    // add r0, r1, #0
    // add r0, #0xe8
    // str r1, [r4, r0]
    // b _02229B52
    // bl ov74_0223615C
    // cmp r0, #3
    // bne _022299CA
    // bl ov74_02231008
    // mov r0, #0x16
    // mov r1, #0x78
    // str r0, [r4, r5]
    // add r0, r1, #0
    // add r0, #0xe8
    // str r1, [r4, r0]
    // b _02229A18
    // bl ov74_0223615C
    // cmp r0, #2
    // beq _022299D8
    // bl ov74_022360B0
    // b _02229A18
    // bl ov74_02230F6C
    // cmp r0, #0
    // bne _022299E8
    // bl ov74_02230FD4
    // cmp r0, #0
    // bne _02229A18
    // mov r0, #0x13
    // str r0, [r4, r5]
    // mov r0, #0x16
    // mov r1, #1
    // lsl r0, r0, #4
    // str r1, [r4, r0]
    // bl ov74_02231008
    // b _02229B52
    // nop
    // _022299FC: .word ov74_0223BD5C
    // _02229A00: .word 0x000034D8
    // _02229A04: .word 0x00000708
    // _02229A08: .word 0x00003170
    // _02229A0C: .word SEQ_SE_DP_SELECT
    // _02229A10: .word gSystem
    // _02229A14: .word ov74_0223C1F4
    // mov r0, #0x16
    // lsl r0, r0, #4
    // ldr r1, [r4, r0]
    // sub r1, r1, #1
    // str r1, [r4, r0]
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // bne _02229A38
    // bl ov74_02231008
    // mov r0, #0x17
    // str r0, [r4, r5]
    // mov r0, #0x16
    // mov r1, #0xa
    // lsl r0, r0, #4
    // str r1, [r4, r0]
    // mov r0, #0x16
    // lsl r0, r0, #4
    // ldr r1, [r4, r0]
    // sub r1, r1, #1
    // str r1, [r4, r0]
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // beq _02229A4A
    // b _02229B52
    // mov r0, #0x14
    // str r0, [r4, r5]
    // mov r0, #0x4b
    // str r0, [sp]
    // add r1, r4, #0
    // ldr r0, [r4, #4]
    // add r1, #0x48
    // mov r2, #2
    // mov r3, #0x13
    // bl ov74_02235568
    // ldr r0, _02229B58 ; =0x00003170
    // mov r1, #0
    // ldr r0, [r4, r0]
    // bl Sprite_SetDrawFlag
    // ldr r0, _02229B5C ; =0x000034D8
    // ldr r0, [r4, r0]
    // bl sub_0200F450
    // ldr r0, _02229B60 ; =SEQ_SE_DP_SELECT
    // bl PlaySE
    // ldr r0, _02229B5C ; =0x000034D8
    // mov r1, #0
    // str r1, [r4, r0]
    // b _02229B52
    // bl ov74_02231048
    // cmp r0, #0
    // beq _02229B52
    // mov r0, #0x52
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // cmp r0, #1
    // bne _02229AA2
    // bl sub_02034DE0
    // bl sub_0203A914
    // mov r0, #0x52
    // mov r1, #0
    // lsl r0, r0, #2
    // str r1, [r4, r0]
    // ldr r0, _02229B64 ; =gSystem
    // ldr r1, [r0, #0x48]
    // mov r0, #1
    // tst r0, r1
    // beq _02229B52
    // mov r0, #0x1b
    // str r0, [r4, r5]
    // mov r0, #4
    // pop {r3, r4, r5, pc}
    // mov r0, #0x17
    // str r0, [r4, r5]
    // mov r0, #0x4c
    // str r0, [sp]
    // add r1, r4, #0
    // ldr r0, [r4, #4]
    // add r1, #0x48
    // mov r2, #2
    // mov r3, #0x13
    // bl ov74_02235568
    // ldr r0, _02229B58 ; =0x00003170
    // mov r1, #0
    // ldr r0, [r4, r0]
    // bl Sprite_SetDrawFlag
    // ldr r0, _02229B5C ; =0x000034D8
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // beq _02229AE0
    // bl sub_0200F450
    // ldr r0, _02229B5C ; =0x000034D8
    // mov r1, #0
    // str r1, [r4, r0]
    // mov r0, #0x1c
    // str r0, [r4, r5]
    // b _02229B52
    // bl ov74_02231048
    // cmp r0, #0
    // beq _02229B52
    // mov r0, #0x52
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // cmp r0, #1
    // bne _02229B0E
    // bl sub_02034DE0
    // bl sub_0203A914
    // mov r0, #0x52
    // mov r1, #0
    // lsl r0, r0, #2
    // str r1, [r4, r0]
    // ldr r0, _02229B64 ; =gSystem
    // ldr r1, [r0, #0x48]
    // mov r0, #1
    // tst r0, r1
    // beq _02229B52
    // mov r0, #0
    // bl OS_ResetSystem
    // b _02229B52
    // bl ov74_02231048
    // cmp r0, #0
    // beq _02229B52
    // mov r0, #0x52
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // cmp r0, #1
    // bne _02229B52
    // bl sub_02034DE0
    // bl sub_0203A914
    // mov r0, #0x52
    // mov r1, #0
    // lsl r0, r0, #2
    // str r1, [r4, r0]
    // ldr r0, _02229B5C ; =0x000034D8
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // beq _02229B4E
    // bl sub_0200F450
    // mov r0, #5
    // pop {r3, r4, r5, pc}
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // nop
    // _02229B58: .word 0x00003170
    // _02229B5C: .word 0x000034D8
    // _02229B60: .word SEQ_SE_DP_SELECT
    // _02229B64: .word gSystem
    // TODO: decompile
}



void ov74_02229B68(void) {
    // push {r4, lr}
    // ldr r1, _02229BB8 ; =ov74_0223D0A4
    // add r4, r0, #0
    // ldr r1, [r1]
    // cmp r1, #0
    // bne _02229BB4
    // bl ov74_02229E14
    // mov r1, #0xf5
    // mov r0, #0xf
    // lsl r1, r1, #2
    // bl Heap_Alloc
    // ldr r1, _02229BB8 ; =ov74_0223D0A4
    // mov r2, #0xf5
    // str r0, [r1]
    // mov r1, #0
    // lsl r2, r2, #2
    // bl MI_CpuFill8
    // ldr r0, _02229BB8 ; =ov74_0223D0A4
    // mov r1, #0x32
    // ldr r0, [r0]
    // mov r2, #0xa
    // strh r1, [r0, #0x24]
    // ldr r0, _02229BBC ; =ov74_02229CB8
    // mov r1, #0
    // bl SysTask_CreateOnMainQueue
    // ldr r1, _02229BB8 ; =ov74_0223D0A4
    // ldr r2, [r1]
    // str r0, [r2, #0x1c]
    // ldr r0, [r1]
    // str r4, [r0]
    // ldr r0, [r1]
    // add r0, r0, #4
    // bl sub_0203778C
    // pop {r4, pc}
    // nop
    // _02229BB8: .word ov74_0223D0A4
    // _02229BBC: .word ov74_02229CB8
    // TODO: decompile
}



void ov74_02229BC0(void) {
    // ldr r2, _02229BCC ; =ov74_0223D0A4
    // ldr r3, [r2]
    // str r0, [r3, #0x20]
    // ldr r0, [r2]
    // strh r1, [r0, #0x24]
    // bx lr
    // _02229BCC: .word ov74_0223D0A4
    // TODO: decompile
}



void ov74_02229BD0(void) {
    // push {r4, lr}
    // bl sub_0203769C
    // bl sub_020373B4
    // cmp r0, #0
    // beq _02229BFE
    // mov r4, #0
    // ldr r1, _02229C00 ; =ov74_0223D0A4
    // ldr r0, _02229C04 ; =0x000003C1
    // add r3, r4, #0
    // ldr r2, [r1]
    // add r2, r2, r4
    // add r4, r4, #1
    // strb r3, [r2, r0]
    // cmp r4, #0x10
    // blt _02229BE6
    // bl sub_02034434
    // ldr r0, _02229C08 ; =ov74_02229C0C
    // mov r1, #0
    // bl ov74_02229BC0
    // pop {r4, pc}
    // _02229C00: .word ov74_0223D0A4
    // _02229C04: .word 0x000003C1
    // _02229C08: .word ov74_02229C0C
    // TODO: decompile
}



void ov74_02229C0C(void) {
    // push {r4, r5, r6, lr}
    // mov r4, #0
    // ldr r6, _02229C40 ; =ov74_0223D0A4
    // add r5, r4, #0
    // ldr r0, [r6]
    // add r0, r0, r5
    // ldr r0, [r0, #0x28]
    // cmp r0, #0
    // bne _02229C36
    // lsl r0, r4, #0x10
    // lsr r0, r0, #0x10
    // bl sub_020373B4
    // cmp r0, #1
    // bne _02229C36
    // add r0, r4, #0
    // bl sub_02034818
    // ldr r1, [r6]
    // add r1, r1, r5
    // str r0, [r1, #0x28]
    // add r4, r4, #1
    // add r5, r5, #4
    // cmp r4, #0x10
    // blt _02229C14
    // pop {r4, r5, r6, pc}
    // _02229C40: .word ov74_0223D0A4
    // TODO: decompile
}



void ov74_02229C44(void) {
    // push {r3, lr}
    // bl sub_02034DB8
    // cmp r0, #0
    // beq _02229C56
    // ldr r0, _02229C58 ; =ov74_02229C5C
    // mov r1, #0
    // bl ov74_02229BC0
    // pop {r3, pc}
    // _02229C58: .word ov74_02229C5C
    // TODO: decompile
}



void ov74_02229C5C(void) {
    // bx lr
    // TODO: decompile
}



void ov74_02229C60(void) {
    // push {r3, lr}
    // ldr r0, _02229C78 ; =ov74_0223D0A4
    // ldr r0, [r0]
    // add r0, #0x27
    // ldrb r0, [r0]
    // bl sub_02037E1C
    // ldr r0, _02229C7C ; =ov74_02229C80
    // mov r1, #0
    // bl ov74_02229BC0
    // pop {r3, pc}
    // _02229C78: .word ov74_0223D0A4
    // _02229C7C: .word ov74_02229C80
    // TODO: decompile
}



void ov74_02229C80(void) {
    // push {r3, lr}
    // bl sub_02037EC8
    // cmp r0, #0
    // beq _02229CA8
    // ldr r0, _02229CAC ; =ov74_0223D0A4
    // mov r2, #0
    // ldr r1, [r0]
    // mov r0, #0xf
    // lsl r0, r0, #6
    // strb r2, [r1, r0]
    // bl sub_02034434
    // mov r0, #0xab
    // bl sub_02037AC0
    // ldr r0, _02229CB0 ; =ov74_02229CB4
    // mov r1, #0
    // bl ov74_02229BC0
    // pop {r3, pc}
    // nop
    // _02229CAC: .word ov74_0223D0A4
    // _02229CB0: .word ov74_02229CB4
    // TODO: decompile
}



void ov74_02229CB4(void) {
    // bx lr
    // TODO: decompile
}



void ov74_02229CB8(void) {
    // push {r3, lr}
    // ldr r1, _02229CDC ; =ov74_0223D0A4
    // ldr r2, [r1]
    // cmp r2, #0
    // bne _02229CC8
    // bl SysTask_Destroy
    // pop {r3, pc}
    // ldr r1, [r2, #0x20]
    // cmp r1, #0
    // beq _02229CD8
    // add r2, #0x26
    // ldrb r0, [r2]
    // cmp r0, #0
    // bne _02229CD8
    // blx r1
    // pop {r3, pc}
    // nop
    // _02229CDC: .word ov74_0223D0A4
    // TODO: decompile
}



void ov74_02229CE0(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // add r6, r2, #0
    // bl sub_02037474
    // cmp r0, #0
    // bne _02229D06
    // add r0, r4, #0
    // add r1, r6, #0
    // bl sub_02038114
    // add r0, r5, #0
    // bl ov74_02229B68
    // ldr r0, _02229D08 ; =ov74_02229BD0
    // mov r1, #0
    // bl ov74_02229BC0
    // pop {r4, r5, r6, pc}
    // _02229D08: .word ov74_02229BD0
    // TODO: decompile
}



void ov74_02229D0C(void) {
    // add r3, r0, #0
    // add r2, r1, #0
    // add r1, r3, #0
    // ldr r3, _02229D18 ; =sub_02037088
    // mov r0, #0x16
    // bx r3
    // _02229D18: .word sub_02037088
    // TODO: decompile
}



void ov74_02229D1C(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // bl sub_02037474
    // cmp r0, #0
    // bne _02229D48
    // bl ov74_0222CD7C
    // bl OverlayManager_GetArgs
    // ldr r0, [r0, #8]
    // add r1, r4, #0
    // bl sub_02038148
    // add r0, r5, #0
    // bl ov74_02229B68
    // ldr r0, _02229D4C ; =ov74_02229C44
    // mov r1, #0
    // bl ov74_02229BC0
    // pop {r3, r4, r5, pc}
    // nop
    // _02229D4C: .word ov74_02229C44
    // TODO: decompile
}



void ov74_02229D50(void) {
    // ldr r1, _02229D60 ; =ov74_0223D0A4
    // ldr r3, _02229D64 ; =ov74_02229BC0
    // ldr r1, [r1]
    // add r1, #0x27
    // strb r0, [r1]
    // ldr r0, _02229D68 ; =ov74_02229C60
    // mov r1, #0
    // bx r3
    // _02229D60: .word ov74_0223D0A4
    // _02229D64: .word ov74_02229BC0
    // _02229D68: .word ov74_02229C60
    // TODO: decompile
}



void ov74_02229D6C(void) {
    sub_020358D0(0);
    // add r0, #0x4c
    // ldrh r0, [r0]
    // add r5, #0x8c
    memcpy(r5, r0, 0x50);
    // mvn r0, r0
}



void ov74_02229DA0(void) {
    // ldr r1, _02229DB8 ; =ov74_0223D0A4
    // ldr r2, [r1]
    // add r1, r2, #0
    // add r1, #0x27
    // ldrb r1, [r1]
    // cmp r1, r0
    // bne _02229DB6
    // mov r0, #0xf
    // mov r1, #1
    // lsl r0, r0, #6
    // strb r1, [r2, r0]
    // bx lr
    // _02229DB8: .word ov74_0223D0A4
    // TODO: decompile
}



void ov74_02229DBC(void) {
    // ldr r0, _02229DC8 ; =ov74_0223D0A4
    // ldr r1, [r0]
    // mov r0, #0xf
    // lsl r0, r0, #6
    // ldrb r0, [r1, r0]
    // bx lr
    // _02229DC8: .word ov74_0223D0A4
    // TODO: decompile
}



void ov74_02229DCC(void) {
}



void ov74_02229DD4(void) {
    // ldr r0, _02229DDC ; =ov74_0223D0A4
    // ldr r0, [r0]
    // add r0, #0x68
    // bx lr
    // _02229DDC: .word ov74_0223D0A4
    // TODO: decompile
}



void ov74_02229DE0(void) {
    // ldr r1, _02229DF0 ; =ov74_0223D0A4
    // mov r2, #1
    // ldr r1, [r1]
    // add r1, r1, r0
    // ldr r0, _02229DF4 ; =0x000003C1
    // strb r2, [r1, r0]
    // bx lr
    // nop
    // _02229DF0: .word ov74_0223D0A4
    // _02229DF4: .word 0x000003C1
    // TODO: decompile
}



void ov74_02229DF8(void) {
    // push {r3, lr}
    // ldr r1, _02229E10 ; =ov74_0223D0A4
    // mov r0, #0xf
    // ldr r1, [r1]
    // bl Heap_FreeExplicit
    // ldr r0, _02229E10 ; =ov74_0223D0A4
    // mov r1, #0
    // str r1, [r0]
    // bl sub_02037E9C
    // pop {r3, pc}
    // _02229E10: .word ov74_0223D0A4
    // TODO: decompile
}



void ov74_02229E14(void) {
    // ldr r3, _02229E20 ; =sub_0203410C
    // add r2, r0, #0
    // ldr r0, _02229E24 ; =_0223B368
    // mov r1, #2
    // bx r3
    // nop
    // _02229E20: .word sub_0203410C
    // _02229E24: .word _0223B368
    // TODO: decompile
}



void ov74_02229E28(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // cmp r1, #1
    // ldr r0, _02229E5C ; =0x000029F0
    // bne _02229E48
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // bne _02229E58
    // add r0, r4, #0
    // add r0, #0x18
    // mov r1, #1
    // bl WaitingIcon_New
    // ldr r1, _02229E5C ; =0x000029F0
    // str r0, [r4, r1]
    // pop {r4, pc}
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // beq _02229E52
    // bl sub_0200F478
    // ldr r0, _02229E5C ; =0x000029F0
    // mov r1, #0
    // str r1, [r4, r0]
    // pop {r4, pc}
    // nop
    // _02229E5C: .word 0x000029F0
    // TODO: decompile
}



void ov74_02229E60(void) {
}



void ov74_02229E68(void) {
    OverlayManager_GetData();
    ov74_022359BC();
    ListMenuItems_Delete(*((u32*)(r7 + 0x7c)));
    DestroyListMenu(*((u32*)(r7 + 0x78)), 0, 0);
    // add r0, #0x18
    ClearWindowTilemapAndCopyToVram(r7);
    // add r0, #0x18
    RemoveWindow(r7);
    // add r0, #0x58
    WindowIsInUse(r7);
    // add r0, #0x58
    ClearWindowTilemapAndCopyToVram(r7);
    // add r0, #0x58
    RemoveWindow(r7);
    // add r5, #0x28
    ClearWindowTilemapAndCopyToVram(r7);
    RemoveWindow(r5);
    // add r4, #0x10
    // add r5, #0x10
    FreeBgTilemapBuffer(*((u32*)r7), 0);
    FreeBgTilemapBuffer(*((u32*)r7), 1);
    FreeBgTilemapBuffer(*((u32*)r7), 4);
    FreeBgTilemapBuffer(*((u32*)r7), 5);
    Heap_Free(*((u32*)r7));
}



void ov74_02229F04(void) {
    ov74_0223563C();
    ov74_02235690();
    // str r0, [sp]
    // str r0, [sp, #4]
    ov74_02235728(0x71, 0xe, 0xb, 0xd);
}



void ov74_02229F28(void) {
    // push {r3, r4, lr}
    // sub sp, #4
    // add r4, r0, #0
    // mov r0, #0
    // mvn r0, r0
    // cmp r1, r0
    // beq _02229F4E
    // str r1, [sp]
    // ldr r1, _02229F5C ; =0x000005C4
    // mov r0, #0
    // ldr r1, [r4, r1]
    // mov r2, #0x80
    // mov r3, #0x64
    // bl ov74_02235930
    // ldr r1, _02229F5C ; =0x000005C4
    // add sp, #4
    // str r0, [r4, r1]
    // pop {r3, r4, pc}
    // ldr r0, _02229F5C ; =0x000005C4
    // mov r1, #0
    // ldr r0, [r4, r0]
    // bl Sprite_SetDrawFlag
    // add sp, #4
    // pop {r3, r4, pc}
    // _02229F5C: .word 0x000005C4
    // TODO: decompile
}



void ov74_02229F60(void) {
    WindowIsInUse();
    sub_0200E5D4(r5, r4);
}



void ov74_02229F78(void) {
    WindowIsInUse();
    ClearFrameAndWindow2(r5, r4);
}



void ov74_02229F90(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // bl OverlayManager_GetData
    // add r4, r0, #0
    // ldr r0, _02229FE8 ; =0x000015D4
    // ldr r0, [r4, r0]
    // cmp r0, #2
    // beq _02229FAE
    // add r1, r4, #0
    // add r0, r5, #0
    // add r1, #0x18
    // mov r2, #3
    // bl ov74_0222AA18
    // add r0, r4, #0
    // add r0, #0x48
    // mov r1, #0
    // bl ov74_02229F60
    // ldr r0, _02229FE8 ; =0x000015D4
    // ldr r0, [r4, r0]
    // cmp r0, #2
    // beq _02229FDE
    // add r0, r4, #0
    // mov r1, #0xf
    // bl ov74_02229D1C
    // ldr r1, _02229FEC ; =0x00001C20
    // ldr r0, _02229FF0 ; =0x00000434
    // str r1, [r4, r0]
    // bl sub_0203A880
    // add r0, r4, #0
    // mov r1, #1
    // bl ov74_02229E28
    // mov r0, #7
    // pop {r3, r4, r5, pc}
    // mov r0, #0x13
    // add r4, #0x84
    // str r0, [r4]
    // pop {r3, r4, r5, pc}
    // nop
    // _02229FE8: .word 0x000015D4
    // _02229FEC: .word 0x00001C20
    // _02229FF0: .word 0x00000434
    // TODO: decompile
}



void ov74_02229FF4(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // bl OverlayManager_GetData
    // add r4, r0, #0
    // add r0, #0x80
    // ldr r1, [r0]
    // cmp r1, #1
    // bne _0222A00A
    // mov r0, #0x31
    // pop {r3, r4, r5, pc}
    // sub r0, r1, #2
    // cmp r0, #2
    // bhi _0222A014
    // mov r0, #0x31
    // pop {r3, r4, r5, pc}
    // cmp r1, #5
    // bne _0222A01C
    // mov r0, #0x31
    // pop {r3, r4, r5, pc}
    // ldr r0, _0222A070 ; =0x000015D4
    // ldr r0, [r4, r0]
    // cmp r0, #1
    // bne _0222A02C
    // ldr r0, _0222A074 ; =0x00000438
    // ldr r0, [r4, r0]
    // bl ov74_02229D50
    // add r1, r4, #0
    // add r0, r5, #0
    // add r1, #0x18
    // mov r2, #6
    // bl ov74_0222AA18
    // add r0, r4, #0
    // add r0, #0x48
    // mov r1, #0
    // bl ov74_02229F60
    // ldr r0, _0222A070 ; =0x000015D4
    // ldr r0, [r4, r0]
    // cmp r0, #1
    // bne _0222A05A
    // add r0, r4, #0
    // mov r1, #0
    // bl ov74_02229F28
    // add r0, r4, #0
    // mov r1, #1
    // bl ov74_02229E28
    // ldr r0, _0222A070 ; =0x000015D4
    // ldr r0, [r4, r0]
    // cmp r0, #1
    // bne _0222A06C
    // mov r0, #0xab
    // bl sub_02037AC0
    // mov r0, #9
    // pop {r3, r4, r5, pc}
    // mov r0, #0x15
    // pop {r3, r4, r5, pc}
    // _0222A070: .word 0x000015D4
    // _0222A074: .word 0x00000438
    // TODO: decompile
}



void ov74_0222A078(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // bl OverlayManager_GetData
    // add r4, r0, #0
    // ldr r0, _0222A0DC ; =0x000015D4
    // add r5, r4, #0
    // add r6, r4, #0
    // ldr r0, [r4, r0]
    // add r5, #0xdc
    // add r6, #0x8c
    // cmp r0, #1
    // beq _0222A096
    // cmp r0, #3
    // beq _0222A0BC
    // b _0222A0D6
    // mov r0, #0
    // add r1, r0, #0
    // add r2, r0, #0
    // bl ov74_02229DD4
    // mov r2, #0xd6
    // add r1, r0, #0
    // add r0, r5, #0
    // lsl r2, r2, #2
    // bl memcpy
    // add r0, r4, #0
    // add r4, #0xdc
    // add r0, #0x8c
    // add r1, r4, #0
    // mov r2, #0x54
    // bl ov74_02235F58
    // b _0222A0D6
    // ldr r7, _0222A0E0 ; =0x000005D4
    // mov r2, #0xd6
    // add r1, r4, r7
    // add r0, r5, #0
    // add r1, #0x50
    // lsl r2, r2, #2
    // bl memcpy
    // add r0, r6, #0
    // add r1, r4, r7
    // mov r2, #0x50
    // bl memcpy
    // add r0, r5, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0222A0DC: .word 0x000015D4
    // _0222A0E0: .word 0x000005D4
    // TODO: decompile
}



void ov74_0222A0E4(void) {
    // ldrh r1, [r0]
    // add r0, #8
    GetMonData(1, 0x98, 0);
}



void ov74_0222A130(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _0222A168 ; =0x000029EC
    // ldr r1, [r4, r0]
    // cmp r1, #1
    // bne _0222A142
    // mov r1, #0
    // sub r0, r0, #4
    // str r1, [r4, r0]
    // bl ov74_022360B0
    // sub r0, r0, #2
    // cmp r0, #1
    // bhi _0222A164
    // add r0, r4, #0
    // add r0, #0xdc
    // bl ov74_0222A0E4
    // cmp r0, #1
    // beq _0222A15E
    // ldr r0, _0222A16C ; =SEQ_SE_DP_SAVE
    // bl PlaySE
    // ldr r0, _0222A170 ; =0x000029E8
    // mov r1, #0
    // str r1, [r4, r0]
    // pop {r4, pc}
    // nop
    // _0222A168: .word 0x000029EC
    // _0222A16C: .word SEQ_SE_DP_SAVE
    // _0222A170: .word 0x000029E8
    // TODO: decompile
}



void ov74_0222A174(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x18
    // add r6, r0, #0
    // bl OverlayManager_GetData
    // add r4, r0, #0
    // add r5, r0, #0
    // str r0, [sp, #4]
    // add r0, r6, #0
    // add r4, #0x8c
    // add r5, #0xdc
    // bl OverlayManager_GetArgs
    // ldr r0, [r0, #8]
    // str r0, [sp]
    // add r0, r4, #0
    // add r0, #0x4e
    // ldrb r0, [r0]
    // lsl r0, r0, #0x1d
    // lsr r0, r0, #0x1f
    // bne _0222A1A2
    // mov r6, #0
    // b _0222A1CE
    // mov r1, #0x35
    // add r2, r4, #0
    // mov r0, #0
    // lsl r1, r1, #4
    // strb r0, [r5, r1]
    // add r2, #0x4e
    // ldrb r2, [r2]
    // mov r6, #1
    // lsl r2, r2, #0x1b
    // lsr r2, r2, #0x1f
    // bne _0222A1BC
    // sub r1, #8
    // strb r0, [r5, r1]
    // add r0, sp, #8
    // bl GF_RTC_CopyDate
    // add r0, sp, #8
    // bl RTC_ConvertDateToDay
    // mov r1, #0xd5
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // ldr r0, [sp]
    // bl Save_MysteryGift_Get
    // add r1, r4, #0
    // add r1, #0x4c
    // ldrh r1, [r1]
    // add r7, r0, #0
    // bl SaveMysteryGift_ReceivedFlagSet
    // add r4, #0x4e
    // ldrb r0, [r4]
    // lsl r0, r0, #0x1d
    // lsr r0, r0, #0x1f
    // cmp r0, #1
    // bne _0222A204
    // ldrh r0, [r5]
    // cmp r0, #3
    // bne _0222A204
    // ldr r1, [r5, #4]
    // ldr r0, _0222A234 ; =0x00000215
    // cmp r1, r0
    // bne _0222A204
    // add r0, r7, #0
    // add r1, r5, #0
    // bl SaveMysteryGift_TrySetSpecialCard
    // b _0222A21C
    // cmp r6, #0
    // bne _0222A214
    // add r0, r7, #0
    // add r1, r5, #0
    // mov r2, #3
    // bl SaveMysteryGift_TryInsertGift
    // b _0222A21C
    // add r0, r7, #0
    // add r1, r5, #0
    // bl SaveMysteryGift_TryInsertCard
    // ldr r0, [sp]
    // bl ov74_022360A0
    // ldr r1, _0222A238 ; =0x000029EC
    // ldr r0, [sp, #4]
    // mov r2, #0
    // str r2, [r0, r1]
    // ldr r2, _0222A23C ; =ov74_0222A130
    // sub r1, r1, #4
    // str r2, [r0, r1]
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // _0222A234: .word 0x00000215
    // _0222A238: .word 0x000029EC
    // _0222A23C: .word ov74_0222A130
    // TODO: decompile
}



void ov74_0222A240(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0x14
    // add r6, r0, #0
    // add r4, r1, #0
    // bl OverlayManager_GetData
    // cmp r4, #0
    // bne _0222A254
    // mov r5, #4
    // b _0222A258
    // mov r5, #0
    // mvn r5, r5
    // ldr r1, [r0, #0x48]
    // add r4, r0, #0
    // add r4, #0x48
    // cmp r1, #0
    // bne _0222A282
    // mov r1, #0xa
    // str r1, [sp]
    // mov r1, #6
    // str r1, [sp, #4]
    // mov r1, #4
    // str r1, [sp, #8]
    // mov r2, #0
    // mov r1, #0x6b
    // str r2, [sp, #0xc]
    // lsl r1, r1, #2
    // str r1, [sp, #0x10]
    // ldr r0, [r0]
    // add r1, r4, #0
    // mov r3, #0x17
    // bl AddWindowParameterized
    // add r0, r4, #0
    // mov r1, #1
    // mov r2, #0x1f
    // mov r3, #3
    // bl DrawFrameAndWindow1
    // ldr r1, _0222A2A0 ; =ov74_0223C260
    // add r0, r6, #0
    // mov r2, #2
    // add r3, r4, #0
    // str r5, [sp]
    // bl ov74_0222A89C
    // add sp, #0x14
    // pop {r3, r4, r5, r6, pc}
    // _0222A2A0: .word ov74_0223C260
    // TODO: decompile
}



void ov74_0222A2A4(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // bl OverlayManager_GetData
    // add r4, r0, #0
    // add r0, #0x48
    // mov r1, #0
    // bl ov74_02229F60
    // add r0, r4, #0
    // add r0, #0x58
    // mov r1, #0
    // bl ov74_02229F60
    // ldr r0, _0222A2DC ; =0x000015D4
    // ldr r0, [r4, r0]
    // cmp r0, #1
    // bne _0222A2D0
    // add r0, r4, #0
    // mov r1, #0
    // bl ov74_02229E28
    // bl sub_0203A914
    // add r0, r5, #0
    // bl ov74_0222A5CC
    // pop {r3, r4, r5, pc}
    // _0222A2DC: .word 0x000015D4
    // TODO: decompile
}



void ov74_0222A2E0(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0x14
    // add r6, r0, #0
    // bl OverlayManager_GetData
    // add r5, r0, #0
    // bl ov74_02235230
    // cmp r0, #0
    // beq _0222A2F8
    // mov r1, #2
    // b _0222A2FA
    // mov r1, #1
    // ldr r0, _0222A354 ; =0x000015D4
    // str r1, [r5, r0]
    // add r0, r5, #0
    // add r0, #0x38
    // mov r1, #0
    // bl ov74_02229F60
    // add r4, r5, #0
    // ldr r0, [r5, #0x48]
    // add r4, #0x48
    // cmp r0, #0
    // bne _0222A332
    // mov r0, #0xa
    // str r0, [sp]
    // mov r0, #6
    // str r0, [sp, #4]
    // mov r0, #4
    // str r0, [sp, #8]
    // mov r2, #0
    // mov r0, #0x6b
    // str r2, [sp, #0xc]
    // lsl r0, r0, #2
    // str r0, [sp, #0x10]
    // ldr r0, [r5]
    // add r1, r4, #0
    // mov r3, #0x17
    // bl AddWindowParameterized
    // add r0, r4, #0
    // mov r1, #1
    // mov r2, #0x1f
    // mov r3, #3
    // bl DrawFrameAndWindow1
    // mov r2, #2
    // ldr r1, _0222A358 ; =ov74_0223C250
    // add r0, r6, #0
    // add r3, r4, #0
    // str r2, [sp]
    // bl ov74_0222A89C
    // mov r0, #5
    // add sp, #0x14
    // pop {r3, r4, r5, r6, pc}
    // nop
    // _0222A354: .word 0x000015D4
    // _0222A358: .word ov74_0223C250
    // TODO: decompile
}



void ov74_0222A35C(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0x14
    // add r6, r0, #0
    // bl OverlayManager_GetData
    // add r4, r0, #0
    // ldr r0, _0222A3C4 ; =0x000015D4
    // mov r1, #4
    // str r1, [r4, r0]
    // add r0, r4, #0
    // add r0, #0x38
    // mov r1, #0
    // bl ov74_02229F60
    // add r5, r4, #0
    // ldr r0, [r4, #0x48]
    // add r5, #0x48
    // cmp r0, #0
    // bne _0222A3A2
    // mov r0, #0xa
    // str r0, [sp]
    // mov r0, #6
    // str r0, [sp, #4]
    // mov r0, #4
    // str r0, [sp, #8]
    // mov r2, #0
    // mov r0, #0x6b
    // str r2, [sp, #0xc]
    // lsl r0, r0, #2
    // str r0, [sp, #0x10]
    // ldr r0, [r4]
    // add r1, r5, #0
    // mov r3, #0x17
    // bl AddWindowParameterized
    // add r0, r5, #0
    // mov r1, #1
    // mov r2, #0x1f
    // mov r3, #3
    // bl DrawFrameAndWindow1
    // mov r0, #0x50
    // str r0, [sp]
    // ldr r1, _0222A3C8 ; =ov74_0223C220
    // add r0, r6, #0
    // mov r2, #2
    // add r3, r5, #0
    // bl ov74_0222A89C
    // mov r0, #5
    // add sp, #0x14
    // pop {r3, r4, r5, r6, pc}
    // _0222A3C4: .word 0x000015D4
    // _0222A3C8: .word ov74_0223C220
    // TODO: decompile
}



void ov74_0222A3CC(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0x14
    // add r6, r0, #0
    // bl OverlayManager_GetData
    // add r4, r0, #0
    // ldr r0, _0222A434 ; =0x000015D4
    // mov r1, #3
    // str r1, [r4, r0]
    // add r0, r4, #0
    // add r0, #0x38
    // mov r1, #0
    // bl ov74_02229F60
    // add r5, r4, #0
    // ldr r0, [r4, #0x48]
    // add r5, #0x48
    // cmp r0, #0
    // bne _0222A412
    // mov r0, #0xa
    // str r0, [sp]
    // mov r0, #6
    // str r0, [sp, #4]
    // mov r0, #4
    // str r0, [sp, #8]
    // mov r2, #0
    // mov r0, #0x6b
    // str r2, [sp, #0xc]
    // lsl r0, r0, #2
    // str r0, [sp, #0x10]
    // ldr r0, [r4]
    // add r1, r5, #0
    // mov r3, #0x17
    // bl AddWindowParameterized
    // add r0, r5, #0
    // mov r1, #1
    // mov r2, #0x1f
    // mov r3, #3
    // bl DrawFrameAndWindow1
    // mov r0, #0x4f
    // str r0, [sp]
    // ldr r1, _0222A438 ; =ov74_0223C230
    // add r0, r6, #0
    // mov r2, #2
    // add r3, r5, #0
    // bl ov74_0222A89C
    // mov r0, #5
    // add sp, #0x14
    // pop {r3, r4, r5, r6, pc}
    // _0222A434: .word 0x000015D4
    // _0222A438: .word ov74_0223C230
    // TODO: decompile
}



void ov74_0222A43C(void) {
    // push {r4, r5, lr}
    // sub sp, #0x14
    // add r5, r0, #0
    // bl OverlayManager_GetData
    // add r4, r0, #0
    // ldr r1, [r0, #0x48]
    // add r4, #0x48
    // cmp r1, #0
    // bne _0222A470
    // mov r1, #0xa
    // str r1, [sp]
    // mov r1, #6
    // str r1, [sp, #4]
    // mov r1, #4
    // str r1, [sp, #8]
    // mov r2, #0
    // mov r1, #0x6b
    // str r2, [sp, #0xc]
    // lsl r1, r1, #2
    // str r1, [sp, #0x10]
    // ldr r0, [r0]
    // add r1, r4, #0
    // mov r3, #0x17
    // bl AddWindowParameterized
    // add r0, r4, #0
    // mov r1, #1
    // mov r2, #0x1f
    // mov r3, #3
    // bl DrawFrameAndWindow1
    // mov r0, #4
    // str r0, [sp]
    // ldr r1, _0222A490 ; =ov74_0223C240
    // add r0, r5, #0
    // mov r2, #2
    // add r3, r4, #0
    // bl ov74_0222A89C
    // add sp, #0x14
    // pop {r4, r5, pc}
    // _0222A490: .word ov74_0223C240
    // TODO: decompile
}



void ov74_0222A494(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // bl OverlayManager_GetData
    // add r4, r0, #0
    // add r0, #0x48
    // mov r1, #0
    // bl ov74_02229F60
    // add r0, r4, #0
    // add r0, #0x58
    // mov r1, #0
    // bl ov74_02229F60
    // bl sub_0203A914
    // ldr r0, _0222A4C8 ; =0x000015D4
    // ldr r0, [r4, r0]
    // cmp r0, #1
    // bne _0222A4C0
    // bl ov74_02229DF8
    // add r0, r5, #0
    // bl ov74_0222A5CC
    // pop {r3, r4, r5, pc}
    // _0222A4C8: .word 0x000015D4
    // TODO: decompile
}



void ov74_0222A4CC(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // bl OverlayManager_GetData
    // add r4, r0, #0
    // add r1, r4, #0
    // add r0, r5, #0
    // add r1, #0x18
    // mov r2, #3
    // bl ov74_0222AA18
    // add r0, r4, #0
    // add r0, #0x48
    // mov r1, #0
    // bl ov74_02229F60
    // add r0, r4, #0
    // mov r1, #1
    // bl ov74_02229E28
    // ldr r0, _0222A500 ; =ov74_0223D0A8
    // mov r1, #0x25
    // str r1, [r0, #0x10]
    // mov r0, #0x20
    // pop {r3, r4, r5, pc}
    // nop
    // _0222A500: .word ov74_0223D0A8
    // TODO: decompile
}



void ov74_0222A504(void) {
    OverlayManager_GetData();
    // add r0, #0x80
    // add r0, #0x48
    ov74_02229F60(r0, 0);
    // add r4, #0x18
    ov74_0222AA18(r5, r4, 7);
}



void ov74_0222A538(void) {
    // push {r3, lr}
    // ldr r0, _0222A55C ; =ov74_0223D0A8
    // ldr r0, [r0, #0x10]
    // cmp r0, #0x28
    // beq _0222A54A
    // cmp r0, #0x29
    // beq _0222A54A
    // cmp r0, #0x30
    // bne _0222A558
    // bl ov74_022365FC
    // cmp r0, #0
    // beq _0222A558
    // ldr r0, _0222A55C ; =ov74_0223D0A8
    // mov r1, #0x2b
    // str r1, [r0, #0x10]
    // mov r0, #0x24
    // pop {r3, pc}
    // _0222A55C: .word ov74_0223D0A8
    // TODO: decompile
}



void ov74_0222A560(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // bl OverlayManager_GetData
    // add r4, r0, #0
    // add r1, r4, #0
    // add r0, r5, #0
    // add r1, #0x18
    // mov r2, #3
    // bl ov74_0222AA18
    // add r0, r4, #0
    // mov r1, #1
    // bl ov74_02229E28
    // add r0, r4, #0
    // add r0, #0x48
    // mov r1, #0
    // bl ov74_02229F60
    // add r0, r4, #0
    // mov r1, #1
    // bl ov74_02229E28
    // mov r1, #1
    // ldr r0, _0222A5A4 ; =0x000015E0
    // lsl r1, r1, #0xc
    // str r1, [r4, r0]
    // ldr r0, _0222A5A8 ; =0x0000267C
    // mov r1, #0
    // str r1, [r4, r0]
    // mov r0, #0x1b
    // pop {r3, r4, r5, pc}
    // nop
    // _0222A5A4: .word 0x000015E0
    // _0222A5A8: .word 0x0000267C
    // TODO: decompile
}



u32 ov74_0222A5AC(void) {
}



void ov74_0222A5CC(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0x14
    // add r6, r0, #0
    // bl OverlayManager_GetData
    // add r5, r0, #0
    // ldr r0, [r5, #4]
    // bl Save_MysteryGift_Get
    // ldr r0, _0222A648 ; =0x000005C8
    // ldr r1, [r5, r0]
    // cmp r1, #0x1e
    // bne _0222A5F2
    // mov r1, #1
    // add r0, r0, #4
    // str r1, [r5, r0]
    // add r0, r5, #0
    // bl ov74_0222CE10
    // add r0, r5, #0
    // add r0, #0x28
    // mov r1, #0
    // bl ov74_02229F60
    // add r4, r5, #0
    // ldr r0, [r5, #0x38]
    // add r4, #0x38
    // cmp r0, #0
    // bne _0222A626
    // mov r0, #9
    // str r0, [sp]
    // mov r0, #0x10
    // str r0, [sp, #4]
    // mov r0, #8
    // str r0, [sp, #8]
    // mov r2, #0
    // mov r0, #0x49
    // str r2, [sp, #0xc]
    // lsl r0, r0, #2
    // str r0, [sp, #0x10]
    // ldr r0, [r5]
    // add r1, r4, #0
    // mov r3, #0xf
    // bl AddWindowParameterized
    // add r0, r4, #0
    // mov r1, #1
    // mov r2, #0x1f
    // mov r3, #3
    // bl DrawFrameAndWindow1
    // mov r0, #1
    // str r0, [sp]
    // ldr r1, _0222A64C ; =ov74_0223C2B0
    // add r0, r6, #0
    // mov r2, #4
    // add r3, r4, #0
    // bl ov74_0222A89C
    // mov r0, #4
    // add sp, #0x14
    // pop {r3, r4, r5, r6, pc}
    // _0222A648: .word 0x000005C8
    // _0222A64C: .word ov74_0223C2B0
    // TODO: decompile
}



void ov74_0222A650(void) {
    // push {r4, lr}
    // bl OverlayManager_GetData
    // ldr r1, _0222A680 ; =0x000005C8
    // add r4, r0, #0
    // ldr r2, [r4, r1]
    // cmp r2, #0x1e
    // bne _0222A66A
    // mov r2, #1
    // add r1, r1, #4
    // str r2, [r4, r1]
    // bl ov74_0222CE10
    // ldr r2, _0222A684 ; =0x000015D8
    // mov r0, #0
    // ldr r2, [r4, r2]
    // mov r1, #0x36
    // mov r3, #2
    // bl ov74_0223539C
    // mov r0, #0
    // mvn r0, r0
    // pop {r4, pc}
    // nop
    // _0222A680: .word 0x000005C8
    // _0222A684: .word 0x000015D8
    // TODO: decompile
}



void ov74_0222A688(void) {
    // push {r4, lr}
    // bl OverlayManager_GetData
    // ldr r1, _0222A6B8 ; =0x000005C8
    // add r4, r0, #0
    // ldr r2, [r4, r1]
    // cmp r2, #0x1e
    // bne _0222A6A2
    // mov r2, #1
    // add r1, r1, #4
    // str r2, [r4, r1]
    // bl ov74_0222CE10
    // ldr r2, _0222A6BC ; =0x000015D8
    // mov r0, #0
    // ldr r2, [r4, r2]
    // mov r1, #0x37
    // mov r3, #2
    // bl ov74_0223539C
    // mov r0, #0
    // mvn r0, r0
    // pop {r4, pc}
    // nop
    // _0222A6B8: .word 0x000005C8
    // _0222A6BC: .word 0x000015D8
    // TODO: decompile
}



void ov74_0222A6C0(void) {
    // push {r4, lr}
    // bl OverlayManager_GetData
    // add r4, r0, #0
    // ldr r0, _0222A6F0 ; =0x000005C8
    // ldr r1, [r4, r0]
    // cmp r1, #0x1e
    // bne _0222A6D6
    // mov r1, #1
    // add r0, r0, #4
    // str r1, [r4, r0]
    // mov r0, #1
    // bl ov74_02235390
    // ldr r2, _0222A6F4 ; =0x000015D8
    // mov r0, #0
    // ldr r2, [r4, r2]
    // mov r1, #0x35
    // mov r3, #2
    // bl ov74_0223539C
    // mov r0, #0
    // mvn r0, r0
    // pop {r4, pc}
    // _0222A6F0: .word 0x000005C8
    // _0222A6F4: .word 0x000015D8
    // TODO: decompile
}



void ov74_0222A6F8(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x1c
    // add r5, r3, #0
    // ldr r3, _0222A740 ; =_0223B3A0
    // add r7, r0, #0
    // add r4, r1, #0
    // add r6, r2, #0
    // add r2, sp, #0
    // ldmia r3!, {r0, r1}
    // mov ip, r2
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // lsr r1, r6, #0xb
    // str r0, [r2]
    // add r0, sp, #0
    // strb r1, [r0, #0x12]
    // lsr r1, r5, #0xe
    // strb r1, [r0, #0x13]
    // lsl r1, r4, #0x18
    // add r0, r7, #0
    // lsr r1, r1, #0x18
    // mov r2, ip
    // mov r3, #0
    // bl InitBgFromTemplate
    // lsl r1, r4, #0x18
    // add r0, r7, #0
    // lsr r1, r1, #0x18
    // bl BgClearTilemapBufferAndCommit
    // add sp, #0x1c
    // pop {r4, r5, r6, r7, pc}
    // _0222A740: .word _0223B3A0
    // TODO: decompile
}



void ov74_0222A744(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x10
    // ldr r5, _0222A79C ; =_0223B390
    // add r3, sp, #0
    // add r4, r0, #0
    // add r2, r3, #0
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // add r0, r2, #0
    // bl SetBothScreensModesAndDisable
    // mov r1, #0
    // mov r2, #0xf
    // add r0, r4, #0
    // lsl r2, r2, #0xc
    // add r3, r1, #0
    // bl ov74_0222A6F8
    // mov r1, #1
    // mov r2, #0x3e
    // add r0, r4, #0
    // lsl r2, r2, #0xa
    // lsl r3, r1, #0xf
    // bl ov74_0222A6F8
    // mov r2, #0xe
    // add r0, r4, #0
    // mov r1, #4
    // lsl r2, r2, #0xa
    // mov r3, #0
    // bl ov74_0222A6F8
    // mov r2, #0x1e
    // mov r3, #1
    // add r0, r4, #0
    // mov r1, #5
    // lsl r2, r2, #0xa
    // lsl r3, r3, #0xe
    // bl ov74_0222A6F8
    // add sp, #0x10
    // pop {r3, r4, r5, pc}
    // _0222A79C: .word _0223B390
    // TODO: decompile
}



void ov74_0222A7A0(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r3, #0xfc
    GfGfxLoader_GXLoadPal(0x71, 0, 4, 4);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharData(0x71, 1, r4, 5);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnData(0x71, 2, r4, 5);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BgTilemapRectChangePalette(r4, 5, 0, 0);
    BgCommitTilemapBufferToVram(r4, 5);
}



void ov74_0222A81C(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r3, #0x8f
    GfGfxLoader_GXLoadPal(0x71, 0, 0, 0x71);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharData(0x71, 1, r4, 1);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r3, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnData(0x71, 2, r4, 1);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BgTilemapRectChangePalette(r4, 1, 0, 0);
    BgCommitTilemapBufferToVram(r4, 1);
    ov74_0222A7A0(r4);
}



void ov74_0222A89C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x28
    // str r0, [sp]
    // add r5, r1, #0
    // add r7, r2, #0
    // str r3, [sp, #4]
    // bl OverlayManager_GetData
    // add r4, r0, #0
    // ldr r0, [r4, #0x7c]
    // cmp r0, #0
    // beq _0222A8B8
    // bl ListMenuItems_Delete
    // add r0, r7, #0
    // mov r1, #0x54
    // bl ListMenuItems_New
    // str r0, [r4, #0x7c]
    // mov r0, #0
    // mov r1, #0x1b
    // mov r2, #0xf7
    // mov r3, #0x54
    // bl NewMsgDataFromNarc
    // mov r6, #0
    // str r0, [r4, #0x10]
    // cmp r7, #0
    // ble _0222A8EA
    // ldr r0, [r4, #0x7c]
    // ldr r1, [r4, #0x10]
    // ldr r2, [r5]
    // ldr r3, [r5, #4]
    // bl ListMenuItems_AppendFromMsgData
    // add r6, r6, #1
    // add r5, #8
    // cmp r6, r7
    // blt _0222A8D6
    // ldr r0, [r4, #0x10]
    // bl DestroyMsgData
    // ldr r3, _0222A948 ; =ov74_0223C270
    // add r2, sp, #8
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldr r0, [r4, #0x7c]
    // str r0, [sp, #8]
    // add r0, sp, #8
    // strh r7, [r0, #0x12]
    // ldrh r1, [r0, #0x12]
    // strh r1, [r0, #0x10]
    // ldr r0, [sp, #4]
    // str r0, [sp, #0x14]
    // ldr r0, [r4, #0x78]
    // cmp r0, #0
    // beq _0222A922
    // mov r1, #0
    // add r2, r1, #0
    // bl DestroyListMenu
    // mov r1, #0
    // add r0, sp, #8
    // add r2, r1, #0
    // mov r3, #0x54
    // bl ListMenuInit
    // str r0, [r4, #0x78]
    // mov r0, #0
    // ldr r2, [sp, #0x40]
    // mvn r0, r0
    // cmp r2, r0
    // beq _0222A944
    // add r4, #0x18
    // ldr r0, [sp]
    // add r1, r4, #0
    // bl ov74_0222AA18
    // add sp, #0x28
    // pop {r3, r4, r5, r6, r7, pc}
    // _0222A948: .word ov74_0223C270
    // TODO: decompile
}



void ov74_0222A94C(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x44
    // str r0, [sp, #0x14]
    // add r7, r1, #0
    // str r2, [sp, #0x20]
    // bl OverlayManager_GetData
    // str r0, [sp, #0x1c]
    // ldr r0, [r0, #4]
    // mov r5, #0
    // bl Save_MysteryGift_Get
    // ldr r1, _0222AA10 ; =ov74_0223C220
    // ldr r4, [sp, #0x1c]
    // ldr r2, [r1, #0x70]
    // ldr r1, [r1, #0x74]
    // str r0, [sp, #0x18]
    // add r4, #0x28
    // add r5, r5, #1
    // str r2, [sp, #0x24]
    // str r1, [sp, #0x28]
    // bl SaveMysteryGift_HasAnyCard
    // cmp r0, #0
    // beq _0222A992
    // lsl r6, r5, #3
    // add r0, sp, #0x24
    // add r1, r0, r6
    // ldr r0, _0222AA10 ; =ov74_0223C220
    // add r5, r5, #1
    // ldr r3, [r0, #0x78]
    // ldr r2, [r0, #0x7c]
    // add r0, sp, #0x24
    // str r3, [r0, r6]
    // str r2, [r1, #4]
    // ldr r0, [sp, #0x18]
    // bl SaveMysteryGift_SpecialCardTagIsValid
    // cmp r0, #0
    // beq _0222A9B0
    // lsl r6, r5, #3
    // add r0, sp, #0x24
    // add r1, r0, r6
    // ldr r0, _0222AA14 ; =ov74_0223C2A0
    // add r5, r5, #1
    // ldr r3, [r0]
    // ldr r2, [r0, #4]
    // add r0, sp, #0x24
    // str r3, [r0, r6]
    // str r2, [r1, #4]
    // lsl r6, r5, #3
    // add r0, sp, #0x24
    // add r1, r0, r6
    // ldr r0, _0222AA14 ; =ov74_0223C2A0
    // ldr r3, [r0, #8]
    // ldr r2, [r0, #0xc]
    // add r0, sp, #0x24
    // str r3, [r0, r6]
    // str r2, [r1, #4]
    // ldr r0, [r4]
    // cmp r0, #0
    // bne _0222A9EE
    // mov r0, #7
    // str r0, [sp]
    // mov r0, #0x14
    // str r0, [sp, #4]
    // add r0, r5, #1
    // lsl r0, r0, #0x19
    // lsr r0, r0, #0x18
    // str r0, [sp, #8]
    // mov r2, #0
    // lsl r0, r7, #0x10
    // str r2, [sp, #0xc]
    // lsr r0, r0, #0x10
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x1c]
    // add r1, r4, #0
    // ldr r0, [r0]
    // mov r3, #6
    // bl AddWindowParameterized
    // add r0, r4, #0
    // mov r1, #1
    // mov r2, #0x1f
    // mov r3, #3
    // bl DrawFrameAndWindow1
    // ldr r0, [sp, #0x20]
    // add r1, sp, #0x24
    // str r0, [sp]
    // ldr r0, [sp, #0x14]
    // add r2, r5, #1
    // add r3, r4, #0
    // bl ov74_0222A89C
    // add sp, #0x44
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _0222AA10: .word ov74_0223C220
    // _0222AA14: .word ov74_0223C2A0
    // TODO: decompile
}



void ov74_0222AA18(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // add r5, r1, #0
    // add r7, r2, #0
    // bl OverlayManager_GetData
    // add r4, r0, #0
    // mov r0, #1
    // mov r1, #0x1b
    // mov r2, #0xf7
    // mov r3, #0x54
    // bl NewMsgDataFromNarc
    // str r0, [r4, #0x10]
    // mov r0, #0x54
    // bl MessageFormat_New
    // str r0, [r4, #0xc]
    // mov r0, #1
    // mov r1, #6
    // bl GetFontAttribute
    // add r1, r0, #0
    // add r0, r5, #0
    // bl FillWindowPixelBuffer
    // ldr r6, [r4, #0x14]
    // cmp r6, #0
    // bne _0222AA60
    // ldr r0, [r4, #0xc]
    // ldr r1, [r4, #0x10]
    // add r2, r7, #0
    // mov r3, #0x54
    // bl ReadMsgData_ExpandPlaceholders
    // add r6, r0, #0
    // mov r3, #0
    // str r3, [sp]
    // ldr r0, [r4, #0x68]
    // mov r1, #1
    // str r0, [sp, #4]
    // ldr r0, _0222AAA8 ; =0x0001020F
    // add r2, r6, #0
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // add r0, r5, #0
    // bl AddTextPrinterParameterizedWithColor
    // str r0, [r4, #0x6c]
    // ldr r0, [r4, #0x14]
    // cmp r0, #0
    // bne _0222AA86
    // add r0, r6, #0
    // bl String_Delete
    // add r0, r5, #0
    // mov r1, #0
    // mov r2, #1
    // mov r3, #2
    // bl DrawFrameAndWindow2
    // ldr r0, [r4, #0x10]
    // bl DestroyMsgData
    // ldr r0, [r4, #0xc]
    // bl MessageFormat_Delete
    // mov r0, #0xff
    // str r0, [r4, #0x68]
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0222AAA8: .word 0x0001020F
    // TODO: decompile
}



void ov74_0222AAAC(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x10
    // add r5, r1, #0
    // add r6, r2, #0
    // bl OverlayManager_GetData
    // mov r0, #0x25
    // mov r1, #0x54
    // bl String_New
    // add r1, r6, #0
    // mov r2, #0x24
    // add r4, r0, #0
    // bl CopyU16ArrayToStringN
    // mov r0, #0
    // mov r1, #6
    // bl GetFontAttribute
    // add r1, r0, #0
    // add r0, r5, #0
    // bl FillWindowPixelBuffer
    // mov r1, #0
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0222AB08 ; =0x0001020F
    // add r2, r4, #0
    // str r0, [sp, #8]
    // add r0, r5, #0
    // add r3, r1, #0
    // str r1, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r5, #0
    // mov r1, #0
    // mov r2, #0x1f
    // mov r3, #3
    // bl DrawFrameAndWindow1
    // add r0, r4, #0
    // bl String_Delete
    // add sp, #0x10
    // pop {r4, r5, r6, pc}
    // _0222AB08: .word 0x0001020F
    // TODO: decompile
}



void ov74_0222AB0C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r7, r0, #0
    // add r5, r1, #0
    // add r6, r2, #0
    // bl OverlayManager_GetData
    // ldr r0, [r0, #0x78]
    // bl ListMenu_ProcessInput
    // add r4, r0, #0
    // mov r0, #1
    // mvn r0, r0
    // cmp r4, r0
    // beq _0222AB30
    // add r0, r0, #1
    // cmp r4, r0
    // beq _0222AB66
    // b _0222AB4A
    // ldr r0, _0222AB68 ; =SEQ_SE_DP_SELECT
    // bl PlaySE
    // cmp r6, #0
    // beq _0222AB66
    // add r0, r7, #0
    // blx r6
    // mov r1, #0
    // mvn r1, r1
    // cmp r0, r1
    // beq _0222AB66
    // str r0, [r5]
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, _0222AB68 ; =SEQ_SE_DP_SELECT
    // bl PlaySE
    // cmp r4, #0
    // beq _0222AB66
    // ldr r0, _0222AB6C ; =ov74_0223D0A8
    // str r4, [r0, #8]
    // add r0, r7, #0
    // blx r4
    // mov r1, #0
    // mvn r1, r1
    // cmp r0, r1
    // beq _0222AB66
    // str r0, [r5]
    // pop {r3, r4, r5, r6, r7, pc}
    // _0222AB68: .word SEQ_SE_DP_SELECT
    // _0222AB6C: .word ov74_0223D0A8
    // TODO: decompile
}



void ov74_0222AB70(void) {
    // push {r4, r5, lr}
    // sub sp, #0x14
    // add r5, r0, #0
    // add r4, r1, #0
    // bl ResetAllTextPrinters
    // mov r0, #0
    // add r1, r0, #0
    // mov r2, #0x54
    // bl LoadFontPal0
    // mov r0, #0
    // mov r1, #0x20
    // mov r2, #0x54
    // bl LoadFontPal0
    // ldr r0, [r4, #8]
    // bl Options_GetFrame
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp]
    // mov r0, #0x54
    // str r0, [sp, #4]
    // ldr r0, [r4]
    // mov r1, #0
    // mov r2, #1
    // mov r3, #2
    // bl LoadUserFrameGfx2
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #0x54
    // str r0, [sp, #4]
    // ldr r0, [r4]
    // mov r1, #0
    // mov r2, #0x1f
    // mov r3, #3
    // bl LoadUserFrameGfx1
    // mov r0, #5
    // ldr r1, _0222AC18 ; =0x00007D8C
    // lsl r0, r0, #0x18
    // strh r1, [r0]
    // add r0, r4, #0
    // add r0, #0x18
    // bl WindowIsInUse
    // cmp r0, #0
    // bne _0222ABF4
    // mov r0, #0x13
    // str r0, [sp]
    // mov r0, #0x1b
    // str r0, [sp, #4]
    // mov r0, #4
    // str r0, [sp, #8]
    // mov r2, #0
    // add r1, r4, #0
    // str r2, [sp, #0xc]
    // mov r0, #0x28
    // str r0, [sp, #0x10]
    // ldr r0, [r4]
    // add r1, #0x18
    // mov r3, #2
    // bl AddWindowParameterized
    // add r1, r4, #0
    // add r0, r5, #0
    // add r1, #0x18
    // mov r2, #0
    // bl ov74_0222AA18
    // add r0, r5, #0
    // mov r1, #0xc4
    // mov r2, #0
    // bl ov74_0222A94C
    // ldr r0, [r4]
    // bl ov74_0222A81C
    // mov r0, #1
    // add sp, #0x14
    // pop {r4, r5, pc}
    // nop
    // _0222AC18: .word 0x00007D8C
    // TODO: decompile
}



void ov74_0222AC1C(void) {
    // push {r4, r5, r6, lr}
    // add r6, r0, #0
    // add r5, r1, #0
    // bl OverlayManager_GetData
    // add r4, r0, #0
    // ldr r1, _0222ACC8 ; =0x000015E0
    // add r0, r6, #0
    // add r1, r4, r1
    // bl ov74_02236AE0
    // cmp r0, #4
    // bhi _0222ACC4
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222AC42: ; jump table
    // ldr r1, _0222ACCC ; =0x00001658
    // add r0, r4, #0
    // mov r2, #0xea
    // add r0, #0x8c
    // add r1, r4, r1
    // lsl r2, r2, #2
    // bl memcpy
    // add r0, r4, #0
    // mov r1, #0
    // bl ov74_02229E28
    // add r0, r4, #0
    // mov r1, #0x1b
    // add r0, #0x84
    // str r1, [r0]
    // mov r0, #0x13
    // str r0, [r5]
    // ldr r0, _0222ACD0 ; =0x000015DC
    // mov r1, #0
    // str r1, [r4, r0]
    // pop {r4, r5, r6, pc}
    // add r0, r4, #0
    // mov r1, #0
    // bl ov74_02229E28
    // ldr r0, _0222ACD0 ; =0x000015DC
    // mov r1, #0
    // str r1, [r4, r0]
    // mov r0, #0x11
    // str r0, [r5]
    // pop {r4, r5, r6, pc}
    // mov r0, #0x9a
    // lsl r0, r0, #6
    // add r0, r4, r0
    // bl ClearWindowTilemapAndCopyToVram
    // mov r0, #0x9a
    // lsl r0, r0, #6
    // add r0, r4, r0
    // bl RemoveWindow
    // ldr r0, [r4]
    // mov r1, #0
    // bl BgClearTilemapBufferAndCommit
    // ldr r0, _0222ACD4 ; =SEQ_SE_DP_SELECT
    // bl PlaySE
    // add r0, r6, #0
    // mov r1, #0xc4
    // mov r2, #0
    // bl ov74_0222A94C
    // mov r0, #0x10
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #3
    // str r0, [r5]
    // pop {r4, r5, r6, pc}
    // nop
    // _0222ACC8: .word 0x000015E0
    // _0222ACCC: .word 0x00001658
    // _0222ACD0: .word 0x000015DC
    // _0222ACD4: .word SEQ_SE_DP_SELECT
    // TODO: decompile
}



void ov74_0222ACD8(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0x5c
    // add r5, r0, #0
    // ldr r0, _0222AD64 ; =0x0000266C
    // ldr r4, [r5, r0]
    // mov r0, #0
    // mvn r0, r0
    // cmp r4, r0
    // bne _0222ACEC
    // mov r4, #0xb
    // mov r0, #0x10
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // ldr r0, [r5]
    // mov r1, #0
    // bl BgClearTilemapBufferAndCommit
    // mov r0, #0x54
    // bl MessageFormat_New
    // mov r1, #2
    // str r1, [sp]
    // mov r1, #1
    // str r1, [sp, #4]
    // ldr r2, _0222AD68 ; =0x00002670
    // mov r1, #0
    // ldr r2, [r5, r2]
    // mov r3, #5
    // add r6, r0, #0
    // bl BufferIntegerAsString
    // mov r0, #0x1f
    // mov r1, #0x9a
    // str r0, [sp]
    // mov r0, #3
    // lsl r1, r1, #6
    // mov r3, #0x32
    // str r0, [sp, #4]
    // add r0, sp, #8
    // add r1, r5, r1
    // mov r2, #1
    // lsl r3, r3, #4
    // bl ov74_02235414
    // add r0, sp, #8
    // mov r1, #0x18
    // mov r2, #0x10
    // mov r3, #0x64
    // bl ov74_02235464
    // add r0, sp, #8
    // mov r1, #0
    // mov r2, #1
    // bl ov74_0223546C
    // str r6, [sp, #0x1c]
    // str r4, [sp]
    // mov r2, #4
    // ldr r0, [r5]
    // add r1, sp, #8
    // add r3, r2, #0
    // bl ov74_02235568
    // add r0, r6, #0
    // bl MessageFormat_Delete
    // add sp, #0x5c
    // pop {r3, r4, r5, r6, pc}
    // nop
    // _0222AD64: .word 0x0000266C
    // _0222AD68: .word 0x00002670
    // TODO: decompile
}



void ov74_0222AD6C(void) {
    OverlayManager_GetData();
    // add r0, #0x80
    // add r1, #0x18
    ov74_0222ADBC(r5, r0, 9, 0x34);
    // add r1, #0x18
    ov74_0222ADBC(r5, r4, 0x33);
}



void ov74_0222ADBC(void) {
    // str r0, [sp]
    OverlayManager_GetData();
    NewMsgDataFromNarc(1, 0x1b, 0xf7, 0x54);
    // str r0, [sp, #4]
    MessageFormat_New(0x54);
    // ldr r1, [sp, #4]
    // str r0, [sp, #8]
    ReadMsgData_ExpandPlaceholders(r5, 0x54);
    *((u32*)(r4 + 0x14)) = r0;
    *((u32*)(r4 + 0x68)) = 1;
    // ldr r0, [sp]
    ov74_0222AA18(1, r6, r5);
    // ldr r0, [sp, #8]
    *((u32*)(r4 + 0x74)) = r7;
    MessageFormat_Delete();
    // ldr r0, [sp, #4]
    DestroyMsgData();
    TextPrinterCheckActive(((*((u32*)(r4 + 0x6c)) << 0x18) >> 0x18));
    String_Delete(*((u32*)(r4 + 0x14)));
    *((u32*)(r4 + 0x14)) = 0;
    *((u32*)(r4 + 0x68)) = 0;
}



void ov74_0222AE3C(void) {
    // push {r3, lr}
    // ldr r1, _0222AE68 ; =0x000015D4
    // ldr r0, [r0, r1]
    // cmp r0, #4
    // bhi _0222AE64
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222AE52: ; jump table
    // bl ov74_02229DF8
    // bl sub_0203A914
    // pop {r3, pc}
    // nop
    // _0222AE68: .word 0x000015D4
    // TODO: decompile
}



void ov74_0222AE6C(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // bl ov74_0222CD88
    // mov r0, #3
    // mov r1, #0x54
    // lsl r2, r0, #0x10
    // bl Heap_Create
    // ldr r1, _0222AF14 ; =0x000029F8
    // add r0, r5, #0
    // mov r2, #0x54
    // bl OverlayManager_CreateAndGetData
    // ldr r2, _0222AF14 ; =0x000029F8
    // mov r1, #0
    // add r4, r0, #0
    // bl memset
    // mov r0, #0x54
    // bl BgConfig_Alloc
    // str r0, [r4]
    // bl GfGfx_DisableEngineAPlanes
    // bl GfGfx_DisableEngineBPlanes
    // bl ov74_0222FCA4
    // ldr r0, [r4]
    // bl ov74_0222A744
    // mov r0, #0
    // add r1, r0, #0
    // bl sub_0200FBF4
    // mov r0, #1
    // mov r1, #0
    // bl sub_0200FBF4
    // ldr r1, _0222AF18 ; =0x0000047E
    // mov r0, #0xa
    // mov r2, #1
    // bl Sound_SetSceneAndPlayBGM
    // mov r0, #0x54
    // bl ov74_0223512C
    // bl ov74_02235230
    // cmp r0, #0
    // beq _0222AEE8
    // ldr r0, _0222AF1C ; =0x000015D4
    // mov r1, #2
    // str r1, [r4, r0]
    // ldr r0, _0222AF20 ; =gGameVersion
    // ldrb r0, [r0]
    // bl sub_0201A4B0
    // mov r0, #1
    // bl ov74_02236034
    // ldr r0, _0222AF24 ; =0x000005C8
    // mov r1, #0x1d
    // str r1, [r4, r0]
    // add r0, r5, #0
    // bl OverlayManager_GetArgs
    // ldr r0, [r0, #8]
    // str r0, [r4, #4]
    // bl Save_PlayerData_GetOptionsAddr
    // str r0, [r4, #8]
    // mov r0, #0xff
    // mov r2, #0x57
    // str r0, [r4, #0x68]
    // mov r0, #0
    // mov r1, #0x59
    // lsl r2, r2, #4
    // bl Heap_Create
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // nop
    // _0222AF14: .word 0x000029F8
    // _0222AF18: .word 0x0000047E
    // _0222AF1C: .word 0x000015D4
    // _0222AF20: .word gGameVersion
    // _0222AF24: .word 0x000005C8
    // TODO: decompile
}



void ov74_0222AF28(void) {
    // push {r4, r5, lr}
    // sub sp, #0x2c
    // add r4, r0, #0
    // ldr r0, _0222B0C0 ; =0x00004E21
    // mov r3, #1
    // str r0, [sp]
    // str r3, [sp, #4]
    // mov r1, #0x54
    // str r1, [sp, #8]
    // ldr r0, [r4, #0xc]
    // add r1, #0xd8
    // ldr r0, [r0, r1]
    // mov r1, #0x71
    // mov r2, #0x2b
    // bl AddCharResObjFromNarc
    // str r0, [r4, #0x58]
    // ldr r0, _0222B0C0 ; =0x00004E21
    // mov r1, #0x54
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // ldr r0, [r4, #0xc]
    // add r1, #0xdc
    // ldr r0, [r0, r1]
    // mov r1, #0x71
    // mov r2, #0x28
    // mov r3, #0
    // bl AddPlttResObjFromNarc
    // str r0, [r4, #0x5c]
    // ldr r0, _0222B0C0 ; =0x00004E21
    // mov r1, #0x54
    // str r0, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // ldr r0, [r4, #0xc]
    // add r1, #0xe0
    // ldr r0, [r0, r1]
    // mov r1, #0x71
    // mov r2, #0x2a
    // mov r3, #1
    // bl AddCellOrAnimResObjFromNarc
    // str r0, [r4, #0x60]
    // ldr r0, _0222B0C0 ; =0x00004E21
    // mov r1, #0x54
    // str r0, [sp]
    // mov r0, #3
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // ldr r0, [r4, #0xc]
    // add r1, #0xe4
    // ldr r0, [r0, r1]
    // mov r1, #0x71
    // mov r2, #0x29
    // mov r3, #1
    // bl AddCellOrAnimResObjFromNarc
    // str r0, [r4, #0x64]
    // ldr r0, _0222B0C4 ; =0x00004E22
    // mov r1, #0x54
    // str r0, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // ldr r0, [r4, #0xc]
    // add r1, #0xd8
    // ldr r0, [r0, r1]
    // mov r1, #0x71
    // mov r2, #0x2b
    // mov r3, #1
    // bl AddCharResObjFromNarc
    // str r0, [r4, #0x70]
    // ldr r0, _0222B0C4 ; =0x00004E22
    // mov r1, #0x54
    // str r0, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // ldr r0, [r4, #0xc]
    // add r1, #0xdc
    // ldr r0, [r0, r1]
    // mov r1, #0x71
    // mov r2, #0x28
    // mov r3, #0
    // bl AddPlttResObjFromNarc
    // str r0, [r4, #0x74]
    // ldr r0, _0222B0C4 ; =0x00004E22
    // mov r1, #0x54
    // str r0, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // ldr r0, [r4, #0xc]
    // add r1, #0xe0
    // ldr r0, [r0, r1]
    // mov r1, #0x71
    // mov r2, #0x2a
    // mov r3, #1
    // bl AddCellOrAnimResObjFromNarc
    // str r0, [r4, #0x78]
    // ldr r0, _0222B0C4 ; =0x00004E22
    // mov r1, #0x54
    // str r0, [sp]
    // mov r0, #3
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // ldr r0, [r4, #0xc]
    // add r1, #0xe4
    // ldr r0, [r0, r1]
    // mov r1, #0x71
    // mov r2, #0x29
    // mov r3, #1
    // bl AddCellOrAnimResObjFromNarc
    // str r0, [r4, #0x7c]
    // ldr r0, [r4, #0x58]
    // bl sub_0200ACF0
    // ldr r0, [r4, #0x70]
    // bl sub_0200ACF0
    // ldr r0, [r4, #0x5c]
    // bl sub_0200B00C
    // ldr r0, [r4, #0x74]
    // bl sub_0200B00C
    // mov r0, #0
    // mov r5, #0x4b
    // ldr r2, [r4, #0xc]
    // ldr r1, _0222B0C0 ; =0x00004E21
    // mvn r0, r0
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // lsl r5, r5, #2
    // ldr r3, [r2, r5]
    // str r3, [sp, #0x14]
    // add r3, r5, #4
    // ldr r3, [r2, r3]
    // str r3, [sp, #0x18]
    // add r3, r5, #0
    // add r3, #8
    // ldr r3, [r2, r3]
    // add r5, #0xc
    // str r3, [sp, #0x1c]
    // ldr r2, [r2, r5]
    // add r3, r1, #0
    // str r2, [sp, #0x20]
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x28]
    // add r0, r4, #0
    // add r0, #0x10
    // add r2, r1, #0
    // bl CreateSpriteResourcesHeader
    // ldr r2, [r4, #0xc]
    // ldr r1, _0222B0C4 ; =0x00004E22
    // mov r0, #0
    // mov r5, #0x4b
    // add r4, #0x10
    // str r1, [sp]
    // mvn r0, r0
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // lsl r5, r5, #2
    // ldr r3, [r2, r5]
    // add r4, #0x24
    // str r3, [sp, #0x14]
    // add r3, r5, #4
    // ldr r3, [r2, r3]
    // str r3, [sp, #0x18]
    // add r3, r5, #0
    // add r3, #8
    // ldr r3, [r2, r3]
    // add r5, #0xc
    // str r3, [sp, #0x1c]
    // ldr r2, [r2, r5]
    // add r3, r1, #0
    // str r2, [sp, #0x20]
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x28]
    // add r0, r4, #0
    // add r2, r1, #0
    // bl CreateSpriteResourcesHeader
    // add sp, #0x2c
    // pop {r4, r5, pc}
    // _0222B0C0: .word 0x00004E21
    // _0222B0C4: .word 0x00004E22
    // TODO: decompile
}



void ov74_0222B0C8(void) {
    // add r0, #0x10
    // str r2, [sp]
    // mul r2, r3
    // add r0, r0, r2
    // str r0, [sp, #4]
    // str r2, [sp, #0x10]
    // str r3, [sp, #0x14]
    // str r3, [sp, #0x18]
    // str r3, [sp, #0x1c]
    // add r0, sp, #0
    *((u16*)(r0 + 0x20)) = 0;
    // str r0, [sp, #8]
    // str r0, [sp, #0x24]
    // str r2, [sp, #0xc]
    // str r1, [sp, #0x28]
    // str r0, [sp, #0x2c]
    // add r0, r2, r0
    // str r0, [sp, #0xc]
    // add r0, sp, #0
    Sprite_CreateAffine(((1 << 0xc) << 8), ((1 << 0xc) << 5), (1 << 0xc));
    Sprite_SetAnimActiveFlag(1);
    Sprite_SetPriority(r4, 0);
    Sprite_SetAnimCtrlSeq(r4, 0);
    Sprite_SetDrawFlag(r4, 1);
}



void ov74_0222B144(void) {
    // push {r4, lr}
    // mov r1, #1
    // add r4, r0, #0
    // bl ov74_0222B0C8
    // ldr r1, _0222B198 ; =0x00003014
    // str r0, [r4, r1]
    // ldr r0, [r4, r1]
    // mov r1, #2
    // bl Sprite_TryChangeAnimSeq
    // ldr r0, _0222B198 ; =0x00003014
    // mov r1, #0
    // ldr r0, [r4, r0]
    // bl Sprite_SetAnimationFrame
    // ldr r0, _0222B198 ; =0x00003014
    // mov r1, #0
    // ldr r0, [r4, r0]
    // bl Sprite_SetDrawFlag
    // ldr r0, _0222B198 ; =0x00003014
    // mov r1, #0
    // ldr r0, [r4, r0]
    // bl Sprite_SetDrawPriority
    // ldr r0, _0222B198 ; =0x00003014
    // mov r1, #2
    // ldr r0, [r4, r0]
    // bl Sprite_SetAffineOverwriteMode
    // ldr r0, _0222B198 ; =0x00003014
    // ldr r0, [r4, r0]
    // bl Sprite_GetMatrixPtr
    // mov r1, #2
    // lsl r1, r1, #0x12
    // str r1, [r0]
    // mov r1, #6
    // lsl r1, r1, #0x10
    // str r1, [r0, #4]
    // pop {r4, pc}
    // _0222B198: .word 0x00003014
    // TODO: decompile
}



void ov74_0222B19C(void) {
    // push {r4, lr}
    // mov r1, #2
    // add r4, r0, #0
    // bl ov74_0222B0C8
    // ldr r1, _0222B1F0 ; =0x00003060
    // str r0, [r4, r1]
    // ldr r0, [r4, r1]
    // mov r1, #4
    // bl Sprite_TryChangeAnimSeq
    // ldr r0, _0222B1F0 ; =0x00003060
    // mov r1, #0
    // ldr r0, [r4, r0]
    // bl Sprite_SetAnimationFrame
    // ldr r0, _0222B1F0 ; =0x00003060
    // mov r1, #0
    // ldr r0, [r4, r0]
    // bl Sprite_SetDrawFlag
    // ldr r0, _0222B1F0 ; =0x00003060
    // mov r1, #0
    // ldr r0, [r4, r0]
    // bl Sprite_SetDrawPriority
    // ldr r0, _0222B1F0 ; =0x00003060
    // mov r1, #2
    // ldr r0, [r4, r0]
    // bl Sprite_SetAffineOverwriteMode
    // ldr r0, _0222B1F0 ; =0x00003060
    // ldr r0, [r4, r0]
    // bl Sprite_GetMatrixPtr
    // mov r1, #2
    // lsl r1, r1, #0x12
    // str r1, [r0]
    // lsl r1, r1, #1
    // str r1, [r0, #4]
    // pop {r4, pc}
    // nop
    // _0222B1F0: .word 0x00003060
    // TODO: decompile
}



void ov74_0222B1F4(void) {
}



void ov74_0222B20C(void) {
}



void ov74_0222B224(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // mov r6, #2
    // ldr r7, _0222B27C ; =0x00001854
    // str r0, [sp]
    // mov r4, #0
    // add r5, r0, #0
    // lsl r6, r6, #0xc
    // add r0, r5, #0
    // add r0, #0x94
    // ldr r0, [r0]
    // cmp r0, #0
    // beq _0222B242
    // add r1, r6, #0
    // bl Sprite_UpdateAnim
    // ldr r0, [r5, r7]
    // cmp r0, #0
    // beq _0222B24E
    // add r1, r6, #0
    // bl Sprite_UpdateAnim
    // add r4, r4, #1
    // add r5, #0x4c
    // cmp r4, #0x50
    // blt _0222B232
    // ldr r1, _0222B280 ; =0x00003014
    // ldr r0, [sp]
    // ldr r0, [r0, r1]
    // cmp r0, #0
    // beq _0222B268
    // mov r1, #2
    // lsl r1, r1, #0xc
    // bl Sprite_UpdateAnim
    // ldr r1, _0222B284 ; =0x00003060
    // ldr r0, [sp]
    // ldr r0, [r0, r1]
    // cmp r0, #0
    // beq _0222B27A
    // mov r1, #2
    // lsl r1, r1, #0xc
    // bl Sprite_UpdateAnim
    // pop {r3, r4, r5, r6, r7, pc}
    // _0222B27C: .word 0x00001854
    // _0222B280: .word 0x00003014
    // _0222B284: .word 0x00003060
    // TODO: decompile
}



void ov74_0222B288(void) {
    ov74_0222B0C8(r0, 1);
    // add r1, #0x94
    // str r0, [r1]
    // add r0, #0x94
    Sprite_TryChangeAnimSeq(*((u32*)r5), 1);
    // add r0, #0x94
    Sprite_SetAnimationFrame(*((u32*)r5), 0);
    // add r5, #0x4c
}



void ov74_0222B2C4(void) {
    ov74_0222B0C8(r0, 1);
    // add r1, #0x94
    // str r0, [r1]
    // add r0, #0x94
    Sprite_TryChangeAnimSeq(*((u32*)r5), 1);
    // add r0, #0x94
    Sprite_SetAnimationFrame(*((u32*)r5), 0);
    // add r0, #0x94
    // str r7, [r0]
    // add r5, #0x4c
}



void ov74_0222B30C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r0, #0
    // ldr r7, _0222B340 ; =0x00001854
    // mov r4, #0
    // add r5, r6, #0
    // add r0, r6, #0
    // mov r1, #2
    // bl ov74_0222B0C8
    // ldr r1, _0222B340 ; =0x00001854
    // str r0, [r5, r1]
    // add r0, r1, #0
    // ldr r0, [r5, r0]
    // mov r1, #5
    // bl Sprite_TryChangeAnimSeq
    // ldr r0, [r5, r7]
    // mov r1, #0
    // bl Sprite_SetAnimationFrame
    // add r4, r4, #1
    // add r5, #0x4c
    // cmp r4, #0x50
    // blt _0222B316
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0222B340: .word 0x00001854
    // TODO: decompile
}



void ov74_0222B344(void) {
    // add r0, #0x94
    Sprite_Delete(*((u32*)r0));
    // add r0, #0x94
    // str r6, [r0]
    // add r0, #0xd0
    SysTask_Destroy(*((u32*)r5));
    // add r5, #0x4c
}



void ov74_0222B374(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // mov r4, #0
    // ldr r7, _0222B39C ; =0x00001890
    // add r5, r0, #0
    // add r6, r4, #0
    // ldr r0, _0222B3A0 ; =0x00001854
    // ldr r0, [r5, r0]
    // bl Sprite_Delete
    // ldr r0, _0222B3A0 ; =0x00001854
    // str r6, [r5, r0]
    // ldr r0, [r5, r7]
    // bl SysTask_Destroy
    // add r4, r4, #1
    // add r5, #0x4c
    // cmp r4, #0x50
    // blt _0222B37E
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0222B39C: .word 0x00001890
    // _0222B3A0: .word 0x00001854
    // TODO: decompile
}



void ov74_0222B3A4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0xb8
    // add r5, r0, #0
    // str r0, [sp]
    // add r0, #0x88
    // ldr r3, _0222B5E8 ; =_0223B3BC
    // mov r4, #0
    // add r7, sp, #0x64
    // str r0, [sp]
    // add r2, sp, #0x10
    // mov r6, #0xa
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // sub r6, r6, #1
    // bne _0222B3BA
    // ldr r0, [r3]
    // str r0, [r2]
    // mov r2, #2
    // add r0, r5, #0
    // mov r1, #6
    // lsl r2, r2, #0x12
    // add r0, #0x98
    // str r2, [r0]
    // add r0, r5, #0
    // lsl r1, r1, #0x10
    // add r0, #0x9c
    // str r1, [r0]
    // add r0, r5, #0
    // lsr r1, r2, #5
    // add r0, #0xa4
    // str r1, [r0]
    // mov r1, #5
    // add r0, r5, #0
    // lsl r1, r1, #0xc
    // add r0, #0xa8
    // str r1, [r0]
    // lsr r2, r4, #0x1f
    // lsl r1, r4, #0x1e
    // sub r1, r1, r2
    // mov r0, #0x1e
    // ror r1, r0
    // add r0, r5, #0
    // add r1, r2, r1
    // add r0, #0xb4
    // str r1, [r0]
    // add r0, r5, #0
    // mov r1, #0
    // add r0, #0xbc
    // str r1, [r0]
    // add r0, r5, #0
    // add r0, #0x8c
    // str r1, [r0]
    // add r0, r4, #0
    // mov r1, #0xa
    // bl _s32_div_f
    // add r0, r0, #4
    // cmp r0, #0
    // ble _0222B42C
    // lsl r0, r0, #0xc
    // bl _fflt
    // add r1, r0, #0
    // mov r0, #0x3f
    // lsl r0, r0, #0x18
    // bl _fadd
    // b _0222B43A
    // lsl r0, r0, #0xc
    // bl _fflt
    // mov r1, #0x3f
    // lsl r1, r1, #0x18
    // bl _fsub
    // bl _ffix
    // add r1, r5, #0
    // add r1, #0xa4
    // str r0, [r1]
    // cmp r4, #0x32
    // ble _0222B462
    // bl LCRandom
    // mov r1, #5
    // bl _s32_div_f
    // mov r0, #0x41
    // lsl r0, r0, #2
    // add r0, r4, r0
    // add r1, r0, r1
    // add r0, r5, #0
    // add r0, #0xb8
    // str r1, [r0]
    // b _0222B4EC
    // cmp r4, #0x28
    // ble _0222B47E
    // bl LCRandom
    // mov r1, #5
    // bl _s32_div_f
    // add r0, r4, #0
    // add r0, #0xfa
    // add r1, r0, r1
    // add r0, r5, #0
    // add r0, #0xb8
    // str r1, [r0]
    // b _0222B4EC
    // cmp r4, #0x1e
    // ble _0222B49A
    // bl LCRandom
    // mov r1, #5
    // bl _s32_div_f
    // add r0, r4, #0
    // add r0, #0xf0
    // add r1, r0, r1
    // add r0, r5, #0
    // add r0, #0xb8
    // str r1, [r0]
    // b _0222B4EC
    // cmp r4, #0x19
    // ble _0222B4B6
    // bl LCRandom
    // mov r1, #5
    // bl _s32_div_f
    // add r0, r4, #0
    // add r0, #0xe6
    // add r1, r0, r1
    // add r0, r5, #0
    // add r0, #0xb8
    // str r1, [r0]
    // b _0222B4EC
    // cmp r4, #0x14
    // ble _0222B4D2
    // bl LCRandom
    // mov r1, #5
    // bl _s32_div_f
    // add r0, r4, #0
    // add r0, #0xdc
    // add r1, r0, r1
    // add r0, r5, #0
    // add r0, #0xb8
    // str r1, [r0]
    // b _0222B4EC
    // add r6, sp, #0x10
    // add r3, sp, #0x64
    // mov r2, #0xa
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // sub r2, r2, #1
    // bne _0222B4D8
    // ldr r0, [r6]
    // str r0, [r3]
    // add r0, r5, #0
    // ldr r1, [r7]
    // add r0, #0xb8
    // str r1, [r0]
    // add r0, r5, #0
    // add r0, #0xb8
    // ldr r0, [r0]
    // add r1, r0, #1
    // lsr r0, r1, #0x1f
    // add r0, r1, r0
    // asr r0, r0, #1
    // bl _dflt
    // add r2, r0, #0
    // add r3, r1, #0
    // ldr r0, _0222B5EC ; =0x66666666
    // ldr r1, _0222B5F0 ; =0x3FE66666
    // bl _dmul
    // bl _dfix
    // add r1, r5, #0
    // add r1, #0xb8
    // str r0, [r1]
    // add r0, r5, #0
    // add r0, #0xb8
    // ldr r0, [r0]
    // add r1, r0, #1
    // add r0, r5, #0
    // add r0, #0xb8
    // str r1, [r0]
    // add r0, r5, #0
    // mov r1, #0xf
    // add r0, #0xc0
    // str r1, [r0]
    // add r0, r5, #0
    // add r0, #0xc0
    // ldr r1, [r0]
    // add r0, r5, #0
    // add r0, #0xc8
    // str r1, [r0]
    // add r0, r5, #0
    // add r0, #0xc0
    // ldr r1, [r0]
    // add r0, r5, #0
    // add r0, #0xcc
    // str r1, [r0]
    // add r0, r5, #0
    // add r0, #0x94
    // ldr r0, [r0]
    // bl Sprite_GetMatrixPtr
    // add r3, r0, #0
    // ldmia r3!, {r0, r1}
    // add r2, sp, #4
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // str r0, [r2]
    // bl LCRandom
    // mov r1, #0xe0
    // bl _s32_div_f
    // add r1, #0x10
    // cmp r1, #0
    // ble _0222B586
    // bl LCRandom
    // mov r1, #0xe0
    // bl _s32_div_f
    // add r1, #0x10
    // lsl r0, r1, #0xc
    // bl _fflt
    // add r1, r0, #0
    // mov r0, #0x3f
    // lsl r0, r0, #0x18
    // bl _fadd
    // b _0222B5A0
    // bl LCRandom
    // mov r1, #0xe0
    // bl _s32_div_f
    // add r1, #0x10
    // lsl r0, r1, #0xc
    // bl _fflt
    // mov r1, #0x3f
    // lsl r1, r1, #0x18
    // bl _fsub
    // bl _ffix
    // str r0, [sp, #4]
    // mov r0, #0
    // str r0, [sp, #8]
    // add r0, r5, #0
    // add r0, #0x94
    // ldr r0, [r0]
    // add r1, sp, #4
    // bl Sprite_SetMatrix
    // add r0, r5, #0
    // add r0, #0x94
    // ldr r0, [r0]
    // mov r1, #0
    // bl Sprite_SetDrawFlag
    // ldr r0, _0222B5F4 ; =ov74_0222BA48
    // ldr r1, [sp]
    // mov r2, #6
    // bl SysTask_CreateOnMainQueue
    // add r1, r5, #0
    // add r1, #0xd0
    // str r0, [r1]
    // ldr r0, [sp]
    // add r4, r4, #1
    // add r0, #0x4c
    // add r5, #0x4c
    // add r7, r7, #4
    // str r0, [sp]
    // cmp r4, #0x50
    // bge _0222B5E4
    // b _0222B3C6
    // add sp, #0xb8
    // pop {r3, r4, r5, r6, r7, pc}
    // _0222B5E8: .word _0223B3BC
    // _0222B5EC: .word 0x66666666
    // _0222B5F0: .word 0x3FE66666
    // _0222B5F4: .word ov74_0222BA48
    // TODO: decompile
}



void ov74_0222B5F8(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // add r7, r5, #0
    // mov r4, #0
    // add r7, #0x88
    // add r0, r5, #0
    // add r0, #0x94
    // ldr r0, [r0]
    // cmp r0, #0
    // bne _0222B610
    // b _0222B74C
    // add r1, r5, #0
    // mov r0, #2
    // add r1, #0x98
    // lsl r0, r0, #0x12
    // str r0, [r1]
    // add r1, r5, #0
    // mov r0, #6
    // add r1, #0x9c
    // lsl r0, r0, #0x10
    // str r0, [r1]
    // add r1, r5, #0
    // add r1, #0xa4
    // lsr r0, r0, #3
    // str r0, [r1]
    // add r1, r5, #0
    // mov r0, #1
    // add r1, #0xa8
    // lsl r0, r0, #0xc
    // str r0, [r1]
    // add r1, r5, #0
    // add r1, #0xb4
    // mov r0, #0xff
    // str r0, [r1]
    // add r1, r5, #0
    // add r1, #0xbc
    // mov r0, #0
    // str r0, [r1]
    // add r1, r5, #0
    // add r1, #0x8c
    // str r0, [r1]
    // add r1, r5, #0
    // add r1, #0x90
    // str r0, [r1]
    // cmp r4, #0x1e
    // ble _0222B66A
    // bl LCRandom
    // mov r1, #0xa
    // bl _s32_div_f
    // add r0, r5, #0
    // add r1, #0xf
    // add r0, #0xb8
    // str r1, [r0]
    // b _0222B6AC
    // cmp r4, #0x14
    // ble _0222B682
    // bl LCRandom
    // mov r1, #0xa
    // bl _s32_div_f
    // add r0, r5, #0
    // add r1, #0xa
    // add r0, #0xb8
    // str r1, [r0]
    // b _0222B6AC
    // cmp r4, #0xa
    // ble _0222B69A
    // bl LCRandom
    // mov r1, #5
    // bl _s32_div_f
    // add r0, r5, #0
    // add r1, #0xa
    // add r0, #0xb8
    // str r1, [r0]
    // b _0222B6AC
    // bl LCRandom
    // mov r1, #5
    // bl _s32_div_f
    // add r0, r5, #0
    // add r1, r1, #5
    // add r0, #0xb8
    // str r1, [r0]
    // add r1, r5, #0
    // add r1, #0xb8
    // mov r0, #0
    // str r0, [r1]
    // add r0, r5, #0
    // add r0, #0xc0
    // ldr r1, [r0]
    // add r0, r5, #0
    // add r0, #0xc8
    // str r1, [r0]
    // add r0, r5, #0
    // add r0, #0xc0
    // ldr r1, [r0]
    // add r0, r5, #0
    // add r0, #0xcc
    // str r1, [r0]
    // bl LCRandom
    // mov r1, #0x5a
    // lsl r1, r1, #2
    // bl _s32_div_f
    // str r1, [sp]
    // bl LCRandom
    // lsr r2, r0, #0x1f
    // lsl r1, r0, #0x1b
    // sub r1, r1, r2
    // mov r0, #0x1b
    // ror r1, r0
    // ldr r0, [sp]
    // add r6, r2, r1
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // add r6, #0x40
    // bl GF_SinDeg
    // add r1, r5, #0
    // add r1, #0x98
    // ldr r1, [r1]
    // mul r0, r6
    // add r0, r1, r0
    // str r0, [sp, #4]
    // ldr r0, [sp]
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // bl GF_CosDeg
    // add r1, r5, #0
    // add r1, #0x9c
    // ldr r1, [r1]
    // mul r0, r6
    // add r0, r1, r0
    // str r0, [sp, #8]
    // add r0, r5, #0
    // add r0, #0x94
    // ldr r0, [r0]
    // add r1, sp, #4
    // bl Sprite_SetMatrix
    // add r0, r5, #0
    // add r0, #0x94
    // ldr r0, [r0]
    // mov r1, #1
    // bl Sprite_TryChangeAnimSeq
    // add r0, r5, #0
    // add r0, #0x94
    // ldr r0, [r0]
    // mov r1, #0
    // bl Sprite_SetDrawFlag
    // ldr r0, _0222B75C ; =ov74_0222BA48
    // add r1, r7, #0
    // mov r2, #6
    // bl SysTask_CreateOnMainQueue
    // add r1, r5, #0
    // add r1, #0xd0
    // str r0, [r1]
    // add r4, r4, #1
    // add r5, #0x4c
    // add r7, #0x4c
    // cmp r4, #0x50
    // bge _0222B758
    // b _0222B604
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // _0222B75C: .word ov74_0222BA48
    // TODO: decompile
}



void ov74_0222B760(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // add r5, r0, #0
    // ldr r0, _0222B928 ; =0x00001848
    // mov r4, #0
    // add r6, r5, r0
    // mov r1, #2
    // ldr r0, _0222B92C ; =0x00001858
    // lsl r1, r1, #0x12
    // str r1, [r5, r0]
    // mov r1, #6
    // lsl r1, r1, #0x12
    // add r0, r0, #4
    // str r1, [r5, r0]
    // mov r1, #1
    // ldr r0, _0222B930 ; =0x00001864
    // lsl r1, r1, #0xe
    // str r1, [r5, r0]
    // mov r1, #5
    // lsl r1, r1, #0xc
    // add r0, r0, #4
    // str r1, [r5, r0]
    // lsr r2, r4, #0x1f
    // lsl r1, r4, #0x1f
    // sub r1, r1, r2
    // mov r0, #0x1f
    // ror r1, r0
    // add r0, r2, r1
    // add r1, r0, #4
    // ldr r0, _0222B934 ; =0x00001874
    // str r1, [r5, r0]
    // mov r1, #0
    // add r0, #8
    // str r1, [r5, r0]
    // ldr r0, _0222B938 ; =0x0000184C
    // str r1, [r5, r0]
    // bl LCRandom
    // lsr r2, r0, #0x1f
    // lsl r1, r0, #0x1e
    // sub r1, r1, r2
    // mov r0, #0x1e
    // ror r1, r0
    // add r0, r2, r1
    // add r1, r0, #2
    // ldr r0, _0222B93C ; =0x00001884
    // str r1, [r5, r0]
    // add r0, r4, #0
    // mov r1, #0x1e
    // bl _s32_div_f
    // add r0, r0, #4
    // cmp r0, #0
    // ble _0222B7DE
    // lsl r0, r0, #0xc
    // bl _fflt
    // add r1, r0, #0
    // mov r0, #0x3f
    // lsl r0, r0, #0x18
    // bl _fadd
    // b _0222B7EC
    // lsl r0, r0, #0xc
    // bl _fflt
    // mov r1, #0x3f
    // lsl r1, r1, #0x18
    // bl _fsub
    // bl _ffix
    // ldr r1, _0222B930 ; =0x00001864
    // cmp r4, #0x3c
    // str r0, [r5, r1]
    // ble _0222B812
    // mov r0, #0x62
    // mov r1, #5
    // lsl r0, r0, #6
    // str r1, [r5, r0]
    // bl LCRandom
    // mov r1, #0xa
    // bl _s32_div_f
    // ldr r0, _0222B940 ; =0x00001878
    // add r1, #0x46
    // str r1, [r5, r0]
    // b _0222B8C0
    // cmp r4, #0x32
    // ble _0222B830
    // mov r0, #0x62
    // mov r1, #5
    // lsl r0, r0, #6
    // str r1, [r5, r0]
    // bl LCRandom
    // mov r1, #0xa
    // bl _s32_div_f
    // ldr r0, _0222B940 ; =0x00001878
    // add r1, #0x3c
    // str r1, [r5, r0]
    // b _0222B8C0
    // cmp r4, #0x28
    // ble _0222B84E
    // mov r0, #0x62
    // mov r1, #5
    // lsl r0, r0, #6
    // str r1, [r5, r0]
    // bl LCRandom
    // mov r1, #5
    // bl _s32_div_f
    // ldr r0, _0222B940 ; =0x00001878
    // add r1, #0x32
    // str r1, [r5, r0]
    // b _0222B8C0
    // cmp r4, #0x1e
    // ble _0222B86C
    // mov r0, #0x62
    // mov r1, #5
    // lsl r0, r0, #6
    // str r1, [r5, r0]
    // bl LCRandom
    // mov r1, #0xa
    // bl _s32_div_f
    // ldr r0, _0222B940 ; =0x00001878
    // add r1, #0x28
    // str r1, [r5, r0]
    // b _0222B8C0
    // cmp r4, #0x14
    // ble _0222B88A
    // mov r0, #0x62
    // mov r1, #5
    // lsl r0, r0, #6
    // str r1, [r5, r0]
    // bl LCRandom
    // mov r1, #0xa
    // bl _s32_div_f
    // ldr r0, _0222B940 ; =0x00001878
    // add r1, #0x1e
    // str r1, [r5, r0]
    // b _0222B8C0
    // cmp r4, #0xa
    // ble _0222B8A8
    // mov r0, #0x62
    // mov r1, #5
    // lsl r0, r0, #6
    // str r1, [r5, r0]
    // bl LCRandom
    // mov r1, #5
    // bl _s32_div_f
    // ldr r0, _0222B940 ; =0x00001878
    // add r1, #0x14
    // str r1, [r5, r0]
    // b _0222B8C0
    // mov r0, #0x62
    // mov r1, #5
    // lsl r0, r0, #6
    // str r1, [r5, r0]
    // bl LCRandom
    // mov r1, #5
    // bl _s32_div_f
    // ldr r0, _0222B940 ; =0x00001878
    // add r1, #0xa
    // str r1, [r5, r0]
    // mov r0, #0x62
    // lsl r0, r0, #6
    // ldr r1, [r5, r0]
    // add r0, #8
    // str r1, [r5, r0]
    // mov r0, #0x62
    // lsl r0, r0, #6
    // ldr r1, [r5, r0]
    // add r0, #0xc
    // str r1, [r5, r0]
    // ldr r0, _0222B944 ; =0x00001854
    // ldr r0, [r5, r0]
    // bl Sprite_GetMatrixPtr
    // add r3, r0, #0
    // add r2, sp, #0
    // ldmia r3!, {r0, r1}
    // add r7, r2, #0
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // add r1, r7, #0
    // str r0, [r2]
    // mov r0, #2
    // lsl r0, r0, #0x12
    // str r0, [sp]
    // mov r0, #6
    // lsl r0, r0, #0x12
    // str r0, [sp, #4]
    // ldr r0, _0222B944 ; =0x00001854
    // ldr r0, [r5, r0]
    // bl Sprite_SetMatrix
    // ldr r0, _0222B944 ; =0x00001854
    // mov r1, #1
    // ldr r0, [r5, r0]
    // bl Sprite_SetDrawFlag
    // ldr r0, _0222B948 ; =ov74_0222BA48
    // add r1, r6, #0
    // mov r2, #6
    // bl SysTask_CreateOnMainQueue
    // ldr r1, _0222B94C ; =0x00001890
    // add r4, r4, #1
    // str r0, [r5, r1]
    // add r5, #0x4c
    // add r6, #0x4c
    // cmp r4, #0x50
    // bge _0222B924
    // b _0222B76C
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // _0222B928: .word 0x00001848
    // _0222B92C: .word 0x00001858
    // _0222B930: .word 0x00001864
    // _0222B934: .word 0x00001874
    // _0222B938: .word 0x0000184C
    // _0222B93C: .word 0x00001884
    // _0222B940: .word 0x00001878
    // _0222B944: .word 0x00001854
    // _0222B948: .word ov74_0222BA48
    // _0222B94C: .word 0x00001890
    // TODO: decompile
}



void ov74_0222B950(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x18
    // add r5, r1, #0
    // mov r1, #0
    // add r4, r2, #0
    // add r6, r3, #0
    // str r1, [sp]
    // str r1, [sp, #4]
    // bl _fflt
    // add r1, r4, #0
    // bl _fsub
    // str r0, [sp, #8]
    // add r0, r5, #0
    // bl _fflt
    // add r1, r6, #0
    // bl _fsub
    // str r0, [sp, #0xc]
    // mov r0, #0
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #8]
    // add r1, r0, #0
    // bl _fmul
    // add r4, r0, #0
    // ldr r0, [sp, #0xc]
    // add r1, r0, #0
    // bl _fmul
    // add r1, r0, #0
    // add r0, r4, #0
    // bl _fadd
    // mov r1, #0
    // add r4, r0, #0
    // bl _fgr
    // ldr r0, _0222BA44 ; =0x45800000
    // bls _0222B9B8
    // add r1, r4, #0
    // bl _fmul
    // add r1, r0, #0
    // mov r0, #0x3f
    // lsl r0, r0, #0x18
    // bl _fadd
    // b _0222B9C6
    // add r1, r4, #0
    // bl _fmul
    // mov r1, #0x3f
    // lsl r1, r1, #0x18
    // bl _fsub
    // bl _ffix
    // bl FX_Sqrt
    // bl _fflt
    // ldr r1, _0222BA44 ; =0x45800000
    // bl _fdiv
    // ldr r1, [sp, #0x30]
    // add r4, r0, #0
    // bl _fls
    // blo _0222B9FE
    // add r1, sp, #0x18
    // mov r0, #0x1c
    // ldrsh r0, [r1, r0]
    // bl _fflt
    // add r1, r4, #0
    // bl _fgr
    // bhi _0222B9FE
    // mov r0, #0
    // add r1, r4, #0
    // bl _feq
    // bne _0222BA04
    // add sp, #0x18
    // mov r0, #0
    // pop {r4, r5, r6, pc}
    // ldr r0, [sp, #8]
    // ldr r1, [sp, #0x30]
    // bl _fmul
    // add r1, r4, #0
    // bl _fdiv
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0xc]
    // ldr r1, [sp, #0x30]
    // bl _fmul
    // add r1, r4, #0
    // bl _fdiv
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x10]
    // ldr r1, [sp]
    // bl _fadd
    // ldr r1, [sp, #0x28]
    // str r0, [r1]
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp, #4]
    // bl _fadd
    // ldr r1, [sp, #0x2c]
    // str r0, [r1]
    // mov r0, #1
    // add sp, #0x18
    // pop {r4, r5, r6, pc}
    // nop
    // _0222BA44: .word 0x45800000
    // TODO: decompile
}



void ov74_0222BA48(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x24
    // add r5, r1, #0
    // ldr r0, [r5, #0x30]
    // cmp r0, #0
    // ldr r0, [r5, #0xc]
    // beq _0222BA66
    // mov r1, #0
    // bl Sprite_SetAnimationFrame
    // ldr r0, [r5, #0x30]
    // add sp, #0x24
    // sub r0, r0, #1
    // str r0, [r5, #0x30]
    // pop {r4, r5, r6, r7, pc}
    // mov r1, #1
    // bl Sprite_SetDrawFlag
    // ldr r0, [r5, #0xc]
    // bl Sprite_GetMatrixPtr
    // add r3, r0, #0
    // ldmia r3!, {r0, r1}
    // add r2, sp, #0x18
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // str r0, [r2]
    // ldr r0, [sp, #0x18]
    // bl _fflt
    // ldr r1, _0222BD90 ; =0x45800000
    // bl _fdiv
    // add r6, r0, #0
    // ldr r0, [sp, #0x1c]
    // bl _fflt
    // ldr r1, _0222BD90 ; =0x45800000
    // bl _fdiv
    // add r7, r0, #0
    // ldr r0, [r5, #0x1c]
    // bl _fflt
    // ldr r1, _0222BD90 ; =0x45800000
    // bl _fdiv
    // add r4, r0, #0
    // ldr r0, [r5, #0x20]
    // bl _fflt
    // ldr r1, _0222BD90 ; =0x45800000
    // bl _fdiv
    // bl _ffix
    // add r1, sp, #0x14
    // str r1, [sp]
    // add r1, sp, #0x10
    // str r1, [sp, #4]
    // str r4, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [r5, #0x10]
    // ldr r1, [r5, #0x14]
    // lsl r0, r0, #4
    // lsl r1, r1, #4
    // asr r0, r0, #0x10
    // asr r1, r1, #0x10
    // add r2, r6, #0
    // add r3, r7, #0
    // bl ov74_0222B950
    // cmp r0, #0
    // beq _0222BB5A
    // ldr r0, [r5, #0x24]
    // cmp r0, #0
    // bne _0222BB5A
    // ldr r0, [sp, #0x14]
    // mov r1, #0
    // bl _fgr
    // ldr r0, _0222BD90 ; =0x45800000
    // bls _0222BB00
    // ldr r1, [sp, #0x14]
    // bl _fmul
    // add r1, r0, #0
    // mov r0, #0x3f
    // lsl r0, r0, #0x18
    // bl _fadd
    // b _0222BB0E
    // ldr r1, [sp, #0x14]
    // bl _fmul
    // mov r1, #0x3f
    // lsl r1, r1, #0x18
    // bl _fsub
    // bl _ffix
    // ldr r1, [sp, #0x18]
    // add r0, r1, r0
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x10]
    // mov r1, #0
    // bl _fgr
    // ldr r0, _0222BD90 ; =0x45800000
    // bls _0222BB36
    // ldr r1, [sp, #0x10]
    // bl _fmul
    // add r1, r0, #0
    // mov r0, #0x3f
    // lsl r0, r0, #0x18
    // bl _fadd
    // b _0222BB44
    // ldr r1, [sp, #0x10]
    // bl _fmul
    // mov r1, #0x3f
    // lsl r1, r1, #0x18
    // bl _fsub
    // bl _ffix
    // ldr r1, [sp, #0x1c]
    // add r0, r1, r0
    // str r0, [sp, #0x1c]
    // ldr r0, [r5, #0xc]
    // add r1, sp, #0x18
    // bl Sprite_SetMatrix
    // add sp, #0x24
    // pop {r4, r5, r6, r7, pc}
    // ldr r0, [r5, #0x24]
    // cmp r0, #0
    // beq _0222BB68
    // cmp r0, #1
    // beq _0222BBDE
    // add sp, #0x24
    // pop {r4, r5, r6, r7, pc}
    // ldr r1, [r5, #0x10]
    // ldr r0, [sp, #0x18]
    // sub r0, r1, r0
    // cmp r0, #0
    // ble _0222BB84
    // lsl r0, r0, #0xc
    // bl _fflt
    // add r1, r0, #0
    // mov r0, #0x3f
    // lsl r0, r0, #0x18
    // bl _fadd
    // b _0222BB92
    // lsl r0, r0, #0xc
    // bl _fflt
    // mov r1, #0x3f
    // lsl r1, r1, #0x18
    // bl _fsub
    // add r4, r0, #0
    // ldr r1, [r5, #0x14]
    // ldr r0, [sp, #0x1c]
    // sub r0, r1, r0
    // cmp r0, #0
    // ble _0222BBB0
    // lsl r0, r0, #0xc
    // bl _fflt
    // add r1, r0, #0
    // mov r0, #0x3f
    // lsl r0, r0, #0x18
    // bl _fadd
    // b _0222BBBE
    // lsl r0, r0, #0xc
    // bl _fflt
    // mov r1, #0x3f
    // lsl r1, r1, #0x18
    // bl _fsub
    // bl _ffix
    // add r6, r0, #0
    // add r0, r4, #0
    // bl _ffix
    // add r1, r0, #0
    // add r0, r6, #0
    // bl FX_Atan2Idx
    // str r0, [r5, #0x28]
    // ldr r0, [r5, #0x24]
    // add sp, #0x24
    // add r0, r0, #1
    // str r0, [r5, #0x24]
    // pop {r4, r5, r6, r7, pc}
    // ldr r0, [r5, #4]
    // cmp r0, #0x14
    // bge _0222BBEA
    // add r0, r0, #1
    // str r0, [r5, #4]
    // b _0222BBEE
    // mov r0, #1
    // str r0, [r5, #8]
    // ldr r0, [r5, #0x28]
    // add r0, #8
    // str r0, [r5, #0x28]
    // ldr r0, [r5, #0x2c]
    // cmp r0, #0
    // bne _0222BC44
    // ldr r0, [r5, #0x34]
    // mov r1, #0x5a
    // add r0, #8
    // lsl r1, r1, #2
    // str r0, [r5, #0x34]
    // bl _s32_div_f
    // lsl r0, r1, #0x10
    // str r1, [r5, #0x34]
    // lsr r0, r0, #0x10
    // bl GF_CosDeg
    // ldr r1, [r5, #0x38]
    // mul r0, r1
    // asr r0, r0, #0xc
    // str r0, [r5, #0x40]
    // ldr r0, [r5, #0x28]
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // bl GF_SinDeg
    // ldr r1, [r5, #0x40]
    // ldr r2, [r5, #0x10]
    // mul r0, r1
    // add r0, r2, r0
    // str r0, [sp, #0x18]
    // ldr r0, [r5, #0x28]
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // bl GF_CosDeg
    // ldr r1, [r5, #0x44]
    // ldr r2, [r5, #0x14]
    // mul r0, r1
    // add r0, r2, r0
    // str r0, [sp, #0x1c]
    // b _0222BEBC
    // cmp r0, #1
    // bne _0222BC92
    // ldr r0, [r5, #0x34]
    // mov r1, #0x5a
    // add r0, #8
    // lsl r1, r1, #2
    // str r0, [r5, #0x34]
    // bl _s32_div_f
    // lsl r0, r1, #0x10
    // str r1, [r5, #0x34]
    // lsr r0, r0, #0x10
    // bl GF_SinDeg
    // ldr r1, [r5, #0x38]
    // mul r0, r1
    // asr r0, r0, #0xc
    // str r0, [r5, #0x44]
    // ldr r0, [r5, #0x28]
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // bl GF_SinDeg
    // ldr r1, [r5, #0x40]
    // ldr r2, [r5, #0x10]
    // mul r0, r1
    // add r0, r2, r0
    // str r0, [sp, #0x18]
    // ldr r0, [r5, #0x28]
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // bl GF_CosDeg
    // ldr r1, [r5, #0x44]
    // ldr r2, [r5, #0x14]
    // mul r0, r1
    // add r0, r2, r0
    // str r0, [sp, #0x1c]
    // b _0222BEBC
    // cmp r0, #2
    // bne _0222BCF0
    // ldr r0, [r5, #0x34]
    // mov r1, #0x5a
    // add r0, #8
    // lsl r1, r1, #2
    // str r0, [r5, #0x34]
    // bl _s32_div_f
    // lsl r0, r1, #0x10
    // str r1, [r5, #0x34]
    // lsr r0, r0, #0x10
    // bl GF_SinDeg
    // ldr r1, [r5, #0x38]
    // mul r0, r1
    // asr r0, r0, #0xc
    // str r0, [r5, #0x44]
    // ldr r0, [r5, #0x28]
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // bl GF_SinDeg
    // ldr r1, [r5, #0x40]
    // ldr r3, [r5, #0x10]
    // add r2, r1, #0
    // mul r2, r0
    // mov r0, #0
    // mvn r0, r0
    // mul r0, r2
    // add r0, r3, r0
    // str r0, [sp, #0x18]
    // ldr r0, [r5, #0x28]
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // bl GF_CosDeg
    // ldr r1, [r5, #0x44]
    // ldr r3, [r5, #0x14]
    // add r2, r1, #0
    // mul r2, r0
    // mov r0, #0
    // mvn r0, r0
    // mul r0, r2
    // add r0, r3, r0
    // str r0, [sp, #0x1c]
    // b _0222BEBC
    // cmp r0, #3
    // bne _0222BD4E
    // ldr r0, [r5, #0x34]
    // mov r1, #0x5a
    // add r0, #8
    // lsl r1, r1, #2
    // str r0, [r5, #0x34]
    // bl _s32_div_f
    // lsl r0, r1, #0x10
    // str r1, [r5, #0x34]
    // lsr r0, r0, #0x10
    // bl GF_CosDeg
    // ldr r1, [r5, #0x38]
    // mul r0, r1
    // asr r0, r0, #0xc
    // str r0, [r5, #0x40]
    // ldr r0, [r5, #0x28]
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // bl GF_SinDeg
    // ldr r1, [r5, #0x40]
    // ldr r3, [r5, #0x10]
    // add r2, r1, #0
    // mul r2, r0
    // mov r0, #0
    // mvn r0, r0
    // mul r0, r2
    // add r0, r3, r0
    // str r0, [sp, #0x18]
    // ldr r0, [r5, #0x28]
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // bl GF_CosDeg
    // ldr r1, [r5, #0x44]
    // ldr r3, [r5, #0x14]
    // add r2, r1, #0
    // mul r2, r0
    // mov r0, #0
    // mvn r0, r0
    // mul r0, r2
    // add r0, r3, r0
    // str r0, [sp, #0x1c]
    // b _0222BEBC
    // cmp r0, #4
    // bne _0222BD94
    // ldr r1, [r5, #0x38]
    // cmp r1, #0x60
    // bge _0222BD5E
    // ldr r0, [r5, #0x3c]
    // add r0, r1, r0
    // str r0, [r5, #0x38]
    // ldr r0, [r5, #0x38]
    // str r0, [r5, #0x40]
    // ldr r0, [r5, #0x38]
    // str r0, [r5, #0x44]
    // ldr r0, [r5, #0x28]
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // bl GF_SinDeg
    // ldr r1, [r5, #0x40]
    // ldr r2, [r5, #0x10]
    // mul r0, r1
    // add r0, r2, r0
    // str r0, [sp, #0x18]
    // ldr r0, [r5, #0x28]
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // bl GF_CosDeg
    // ldr r1, [r5, #0x44]
    // ldr r2, [r5, #0x14]
    // mul r0, r1
    // add r0, r2, r0
    // str r0, [sp, #0x1c]
    // b _0222BEBC
    // _0222BD90: .word 0x45800000
    // cmp r0, #5
    // bne _0222BDE6
    // ldr r1, [r5, #0x38]
    // cmp r1, #0x60
    // bge _0222BDA4
    // ldr r0, [r5, #0x3c]
    // add r0, r1, r0
    // str r0, [r5, #0x38]
    // ldr r0, [r5, #0x38]
    // str r0, [r5, #0x40]
    // ldr r0, [r5, #0x38]
    // str r0, [r5, #0x44]
    // ldr r0, [r5, #0x28]
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // bl GF_SinDeg
    // ldr r1, [r5, #0x40]
    // ldr r3, [r5, #0x10]
    // add r2, r1, #0
    // mul r2, r0
    // mov r0, #0
    // mvn r0, r0
    // mul r0, r2
    // add r0, r3, r0
    // str r0, [sp, #0x18]
    // ldr r0, [r5, #0x28]
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // bl GF_CosDeg
    // ldr r1, [r5, #0x44]
    // ldr r3, [r5, #0x14]
    // add r2, r1, #0
    // mul r2, r0
    // mov r0, #0
    // mvn r0, r0
    // mul r0, r2
    // add r0, r3, r0
    // str r0, [sp, #0x1c]
    // b _0222BEBC
    // mov r0, #0xa
    // str r0, [r5, #4]
    // mov r0, #2
    // ldr r1, [r5, #0x1c]
    // lsl r0, r0, #0xa
    // add r0, r1, r0
    // str r0, [r5, #0x1c]
    // ldr r0, [sp, #0x18]
    // bl _fflt
    // ldr r1, _0222BED4 ; =0x45800000
    // bl _fdiv
    // add r4, r0, #0
    // ldr r0, [sp, #0x1c]
    // bl _fflt
    // ldr r1, _0222BED4 ; =0x45800000
    // bl _fdiv
    // add r6, r0, #0
    // ldr r0, [r5, #0x1c]
    // bl _fflt
    // ldr r1, _0222BED4 ; =0x45800000
    // bl _fdiv
    // add r1, sp, #0x14
    // str r1, [sp]
    // add r1, sp, #0x10
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // ldr r0, [r5, #0x10]
    // ldr r1, [r5, #0x14]
    // lsl r0, r0, #4
    // lsl r1, r1, #4
    // asr r0, r0, #0x10
    // asr r1, r1, #0x10
    // add r2, r4, #0
    // add r3, r6, #0
    // bl ov74_0222B950
    // cmp r0, #0
    // beq _0222BEB8
    // ldr r0, [sp, #0x14]
    // mov r1, #0
    // bl _fgr
    // ldr r0, _0222BED4 ; =0x45800000
    // bls _0222BE60
    // ldr r1, [sp, #0x14]
    // bl _fmul
    // add r1, r0, #0
    // mov r0, #0x3f
    // lsl r0, r0, #0x18
    // bl _fadd
    // b _0222BE6E
    // ldr r1, [sp, #0x14]
    // bl _fmul
    // mov r1, #0x3f
    // lsl r1, r1, #0x18
    // bl _fsub
    // bl _ffix
    // ldr r1, [sp, #0x18]
    // add r0, r1, r0
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x10]
    // mov r1, #0
    // bl _fgr
    // ldr r0, _0222BED4 ; =0x45800000
    // bls _0222BE96
    // ldr r1, [sp, #0x10]
    // bl _fmul
    // add r1, r0, #0
    // mov r0, #0x3f
    // lsl r0, r0, #0x18
    // bl _fadd
    // b _0222BEA4
    // ldr r1, [sp, #0x10]
    // bl _fmul
    // mov r1, #0x3f
    // lsl r1, r1, #0x18
    // bl _fsub
    // bl _ffix
    // ldr r1, [sp, #0x1c]
    // add r0, r1, r0
    // str r0, [sp, #0x1c]
    // ldr r0, [r5, #0xc]
    // add r1, sp, #0x18
    // bl Sprite_SetMatrix
    // b _0222BEBC
    // mov r0, #1
    // str r0, [r5, #8]
    // mov r1, #0x5a
    // ldr r0, [r5, #0x28]
    // lsl r1, r1, #2
    // bl _s32_div_f
    // str r1, [r5, #0x28]
    // ldr r0, [r5, #0xc]
    // add r1, sp, #0x18
    // bl Sprite_SetMatrix
    // add sp, #0x24
    // pop {r4, r5, r6, r7, pc}
    // _0222BED4: .word 0x45800000
    // TODO: decompile
}



void ov74_0222BED8(void) {
    // add r3, r0, #0
    // mov r2, #8
    // ldrsb r2, [r3, r2]
    // ldr r3, _0222BEE8 ; =G2x_SetBlendBrightness_
    // ldr r0, _0222BEEC ; =0x04000050
    // mov r1, #0x22
    // bx r3
    // nop
    // _0222BEE8: .word G2x_SetBlendBrightness_
    // _0222BEEC: .word 0x04000050
    // TODO: decompile
}



void ov74_0222BEF0(void) {
    // add r3, r0, #0
    // mov r2, #8
    // ldrsb r2, [r3, r2]
    // ldr r3, _0222BF00 ; =G2x_SetBlendBrightness_
    // ldr r0, _0222BF04 ; =0x04001050
    // mov r1, #0x22
    // bx r3
    // nop
    // _0222BF00: .word G2x_SetBlendBrightness_
    // _0222BF04: .word 0x04001050
    // TODO: decompile
}



void ov74_0222BF08(void) {
}



void ov74_0222BF18(void) {
}



void ov74_0222BF2C(void) {
    // ldrsb r1, [r0, r1]
    // sub r1, r1, r2
    *((u8*)(r0 + 8)) = 8;
    *((u8*)(r0 + 8)) = 0;
    // add r1, r1, r2
    // bpl _0222BF64
    *((u8*)(r0 + 8)) = 0;
    *((u8*)(r0 + 8)) = 0;
    // ldrsb r1, [r0, r3]
    // sub r2, r1, r2
    // sub r1, #0x18
    *((u8*)(r0 + 8)) = r2;
    // sub r3, #0x18
    *((u8*)(r0 + 8)) = 8;
    // ldrsb r1, [r0, r1]
    // add r1, r1, r2
    *((u8*)(r0 + 8)) = 8;
    *((u8*)(r0 + 8)) = 0x10;
    ov74_0222BF08(0x10, 8);
}



void ov74_0222BFA0(void) {
    // ldrsb r1, [r0, r1]
    // sub r1, r1, r2
    *((u8*)(r0 + 8)) = 8;
    *((u8*)(r0 + 8)) = 0;
    // add r1, r1, r2
    // bpl _0222BFD8
    *((u8*)(r0 + 8)) = 0;
    *((u8*)(r0 + 8)) = 0;
    // ldrsb r1, [r0, r3]
    // sub r2, r1, r2
    // sub r1, #0x18
    *((u8*)(r0 + 8)) = r2;
    // sub r3, #0x18
    *((u8*)(r0 + 8)) = 8;
    // ldrsb r1, [r0, r1]
    // add r1, r1, r2
    *((u8*)(r0 + 8)) = 8;
    *((u8*)(r0 + 8)) = 0x10;
    ov74_0222BED8(0x10, 8);
}



void ov74_0222C014(void) {
}



void ov74_0222C04C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r4, r1, #0
    // ldr r1, [r4]
    // cmp r1, #9
    // bls _0222C058
    // b _0222C2BC
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _0222C064: ; jump table
    // add r0, r4, #0
    // bl ov74_0222C014
    // mov r0, #1
    // str r0, [r4]
    // b _0222C2D0
    // add r0, r4, #0
    // mov r1, #1
    // mov r2, #2
    // bl ov74_0222BF2C
    // cmp r0, #0
    // bne _0222C094
    // b _0222C2D0
    // mov r0, #2
    // str r0, [r4]
    // b _0222C2D0
    // mov r5, #0
    // mov r6, #1
    // add r0, r5, #0
    // add r1, r4, #0
    // add r3, r5, #0
    // add r2, r1, #0
    // add r2, #0x90
    // ldr r2, [r2]
    // cmp r2, #0
    // beq _0222C0B2
    // add r5, r5, #1
    // b _0222C0B4
    // add r6, r3, #0
    // add r0, r0, #1
    // add r1, #0x4c
    // cmp r0, #0x50
    // blt _0222C0A4
    // cmp r5, #0x32
    // ble _0222C0CC
    // ldr r0, _0222C2D8 ; =0x00003014
    // mov r1, #4
    // ldr r0, [r4, r0]
    // bl Sprite_TryChangeAnimSeq
    // b _0222C0EA
    // cmp r5, #0x1e
    // ble _0222C0DC
    // ldr r0, _0222C2D8 ; =0x00003014
    // mov r1, #3
    // ldr r0, [r4, r0]
    // bl Sprite_TryChangeAnimSeq
    // b _0222C0EA
    // cmp r5, #7
    // ble _0222C0EA
    // ldr r0, _0222C2D8 ; =0x00003014
    // mov r1, #1
    // ldr r0, [r4, r0]
    // bl Sprite_SetDrawFlag
    // cmp r6, #0
    // bne _0222C0F2
    // cmp r5, #0x4f
    // bne _0222C1A8
    // mov r0, #3
    // str r0, [r4]
    // add r0, r4, #0
    // bl ov74_0222B344
    // b _0222C2D0
    // ldr r0, _0222C2DC ; =0x000030A0
    // ldr r0, [r4, r0]
    // ldr r0, [r0]
    // cmp r0, #2
    // bne _0222C1A8
    // add r0, r4, #0
    // bl ov74_0222B2C4
    // add r0, r4, #0
    // bl ov74_0222B5F8
    // mov r0, #2
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // bl ov74_0222BF18
    // mov r0, #4
    // str r0, [r4]
    // b _0222C2D0
    // mov r5, #0
    // mov r6, #1
    // add r1, r5, #0
    // add r2, r4, #0
    // add r0, r5, #0
    // add r3, r2, #0
    // add r3, #0x94
    // ldr r3, [r3]
    // cmp r3, #0
    // beq _0222C14A
    // add r3, r2, #0
    // add r3, #0x90
    // ldr r3, [r3]
    // cmp r3, #0
    // beq _0222C148
    // add r5, r5, #1
    // b _0222C14A
    // add r6, r0, #0
    // add r1, r1, #1
    // add r2, #0x4c
    // cmp r1, #0x50
    // blt _0222C130
    // mov r1, #2
    // add r0, r4, #0
    // add r2, r1, #0
    // bl ov74_0222BFA0
    // cmp r6, #0
    // bne _0222C164
    // cmp r5, #0x13
    // bne _0222C1A8
    // ldr r0, _0222C2E0 ; =SEQ_SE_DP_SAVE
    // bl PlaySE
    // mov r0, #5
    // str r0, [r4]
    // add r0, r4, #0
    // bl ov74_0222B344
    // add r0, r4, #0
    // bl ov74_0222B19C
    // b _0222C2D0
    // mov r1, #2
    // add r0, r4, #0
    // add r2, r1, #0
    // bl ov74_0222BFA0
    // cmp r0, #0
    // beq _0222C1A8
    // add r0, r4, #0
    // mov r1, #1
    // mov r2, #2
    // bl ov74_0222BFA0
    // mov r0, #6
    // str r0, [r4]
    // b _0222C2D0
    // add r0, r4, #0
    // mov r1, #1
    // mov r2, #2
    // bl ov74_0222BFA0
    // cmp r0, #0
    // bne _0222C1AA
    // b _0222C2D0
    // ldr r0, _0222C2D8 ; =0x00003014
    // ldr r0, [r4, r0]
    // bl Sprite_GetMatrixPtr
    // add r5, r0, #0
    // ldr r0, _0222C2E4 ; =0x00003060
    // ldr r0, [r4, r0]
    // bl Sprite_GetMatrixPtr
    // mov r1, #0xe
    // ldr r2, [r5, #4]
    // lsl r1, r1, #0x10
    // cmp r2, r1
    // bge _0222C1CE
    // mov r1, #2
    // lsl r1, r1, #0xe
    // add r1, r2, r1
    // str r1, [r5, #4]
    // mov r1, #3
    // ldr r2, [r5, #4]
    // lsl r1, r1, #0x12
    // sub r2, r2, r1
    // cmp r2, #0
    // ble _0222C2D0
    // ldr r2, [r0, #4]
    // lsl r1, r1, #1
    // cmp r2, r1
    // bge _0222C202
    // mov r1, #2
    // lsl r1, r1, #0xe
    // add r1, r2, r1
    // str r1, [r0, #4]
    // ldr r0, _0222C2E4 ; =0x00003060
    // ldr r0, [r4, r0]
    // bl Sprite_GetDrawFlag
    // cmp r0, #0
    // bne _0222C2D0
    // ldr r0, _0222C2E4 ; =0x00003060
    // mov r1, #1
    // ldr r0, [r4, r0]
    // bl Sprite_SetDrawFlag
    // b _0222C2D0
    // mov r0, #7
    // str r0, [r4]
    // add r0, r4, #0
    // bl ov74_0222B1F4
    // add r0, r4, #0
    // bl ov74_0222B30C
    // add r0, r4, #0
    // bl ov74_0222B760
    // mov r0, #2
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // b _0222C2D0
    // mov r5, #0
    // ldr r0, _0222C2E8 ; =0x00001850
    // mov r6, #1
    // add r2, r5, #0
    // add r3, r4, #0
    // add r7, r5, #0
    // ldr r1, [r3, r0]
    // cmp r1, #0
    // beq _0222C238
    // add r5, r5, #1
    // b _0222C23A
    // add r6, r7, #0
    // add r2, r2, #1
    // add r3, #0x4c
    // cmp r2, #0x50
    // blt _0222C22E
    // cmp r5, #7
    // ble _0222C250
    // add r0, r4, #0
    // mov r1, #2
    // mov r2, #1
    // bl ov74_0222BF2C
    // cmp r5, #0x32
    // ble _0222C260
    // ldr r0, _0222C2E4 ; =0x00003060
    // mov r1, #0
    // ldr r0, [r4, r0]
    // bl Sprite_SetDrawFlag
    // b _0222C27E
    // cmp r5, #0x1e
    // ble _0222C270
    // ldr r0, _0222C2E4 ; =0x00003060
    // mov r1, #2
    // ldr r0, [r4, r0]
    // bl Sprite_TryChangeAnimSeq
    // b _0222C27E
    // cmp r5, #7
    // ble _0222C27E
    // ldr r0, _0222C2E4 ; =0x00003060
    // mov r1, #3
    // ldr r0, [r4, r0]
    // bl Sprite_TryChangeAnimSeq
    // cmp r6, #0
    // beq _0222C2D0
    // mov r0, #8
    // str r0, [r4]
    // add r0, r4, #0
    // bl ov74_0222B374
    // add r0, r4, #0
    // bl ov74_0222B20C
    // b _0222C2D0
    // add r0, r4, #0
    // mov r1, #2
    // mov r2, #1
    // bl ov74_0222BF2C
    // cmp r0, #0
    // beq _0222C2D0
    // mov r0, #9
    // str r0, [r4]
    // b _0222C2D0
    // add r0, r4, #0
    // mov r1, #0
    // mov r2, #2
    // bl ov74_0222BF2C
    // cmp r0, #0
    // beq _0222C2D0
    // mov r0, #0xff
    // str r0, [r4]
    // b _0222C2D0
    // ldr r1, _0222C2DC ; =0x000030A0
    // mov r2, #0
    // ldr r1, [r4, r1]
    // str r2, [r1]
    // bl SysTask_Destroy
    // add r0, r4, #0
    // bl Heap_Free
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r4, #0
    // bl ov74_0222B224
    // pop {r3, r4, r5, r6, r7, pc}
    // _0222C2D8: .word 0x00003014
    // _0222C2DC: .word 0x000030A0
    // _0222C2E0: .word SEQ_SE_DP_SAVE
    // _0222C2E4: .word 0x00003060
    // _0222C2E8: .word 0x00001850
    // TODO: decompile
}



void ov74_0222C2EC(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // add r6, r0, #0
    // add r5, r1, #0
    // bl OverlayManager_GetData
    // add r4, r0, #0
    // bl CTRDG_IsExisting
    // ldr r0, _0222C640 ; =0x000005C8
    // ldr r0, [r4, r0]
    // cmp r0, #0x1d
    // beq _0222C30C
    // add r0, r4, #0
    // bl ov74_0222CE10
    // ldr r3, [r5]
    // cmp r3, #0x3a
    // bls _0222C316
    // bl _0222CD3A
    // add r0, r3, r3
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222C322: ; jump table
    // mov r0, #0x54
    // bl ov74_022352A0
    // ldr r0, _0222C644 ; =0x000015D8
    // str r5, [r4, r0]
    // mov r0, #1
    // str r0, [r5]
    // bl _0222CD3A
    // add r0, r6, #0
    // add r1, r4, #0
    // bl ov74_0222AB70
    // add r0, r4, #0
    // bl ov74_02229F04
    // mov r0, #1
    // mov r1, #3
    // add r2, r5, #0
    // mov r3, #2
    // bl ov74_0223539C
    // bl _0222CD3A
    // add r0, r5, #0
    // bl ov74_022353FC
    // bl _0222CD3A
    // ldr r2, _0222C648 ; =ov74_0222A6C0
    // add r0, r6, #0
    // add r1, r5, #0
    // bl ov74_0222AB0C
    // bl _0222CD3A
    // ldr r2, _0222C64C ; =ov74_0222A5AC
    // add r0, r6, #0
    // add r1, r5, #0
    // bl ov74_0222AB0C
    // bl _0222CD3A
    // ldr r2, _0222C650 ; =ov74_0222A2A4
    // add r0, r6, #0
    // add r1, r5, #0
    // bl ov74_0222AB0C
    // bl _0222CD3A
    // add r0, r6, #0
    // add r1, r5, #0
    // bl ov74_0222AC1C
    // bl _0222CD3A
    // add r0, r4, #0
    // bl ov74_0222CEE0
    // ldr r0, _0222C654 ; =ov74_0223D0A8
    // ldr r0, [r0, #0x10]
    // cmp r0, #0x2d
    // bne _0222C4A0
    // add r0, r4, #0
    // mov r1, #0
    // bl ov74_02229E28
    // add r0, r6, #0
    // bl ov74_0222A078
    // add r1, r4, #0
    // ldr r0, [r4, #4]
    // add r1, #0x8c
    // bl ov74_0222FD98
    // add r1, r4, #0
    // add r1, #0x80
    // str r0, [r1]
    // add r0, r4, #0
    // add r0, #0x80
    // ldr r0, [r0]
    // cmp r0, #1
    // bne _0222C44C
    // add r0, r4, #0
    // mov r1, #0
    // bl ov74_02229E28
    // mov r0, #0x31
    // str r0, [r5]
    // b _0222C4A0
    // add r0, r4, #0
    // add r0, #0x58
    // bl WindowIsInUse
    // cmp r0, #0
    // bne _0222C47A
    // mov r0, #2
    // str r0, [sp]
    // mov r0, #0x1a
    // str r0, [sp, #4]
    // mov r0, #4
    // str r0, [sp, #8]
    // mov r2, #0
    // mov r0, #0x71
    // add r1, r4, #0
    // str r2, [sp, #0xc]
    // lsl r0, r0, #2
    // str r0, [sp, #0x10]
    // ldr r0, [r4]
    // add r1, #0x58
    // mov r3, #3
    // bl AddWindowParameterized
    // bl ov74_02236988
    // add r1, r4, #0
    // add r2, r0, #0
    // add r0, r6, #0
    // add r1, #0x58
    // bl ov74_0222AAAC
    // add r1, r4, #0
    // add r0, r6, #0
    // add r1, #0x18
    // mov r2, #4
    // bl ov74_0222AA18
    // add r0, r6, #0
    // bl ov74_0222A43C
    // mov r0, #0x1f
    // str r0, [r5]
    // ldr r0, _0222C654 ; =ov74_0223D0A8
    // ldr r0, [r0, #0x10]
    // sub r0, #0x2e
    // cmp r0, #1
    // bls _0222C4AE
    // bl _0222CD3A
    // bl ov74_0222CEC0
    // mov r0, #0x11
    // str r0, [r5]
    // bl _0222CD3A
    // ldr r2, _0222C658 ; =ov74_0222A538
    // add r0, r6, #0
    // add r1, r5, #0
    // bl ov74_0222AB0C
    // add r0, r4, #0
    // bl ov74_0222CEE0
    // bl _0222CD3A
    // add r0, r6, #0
    // bl ov74_0222A078
    // add r7, r0, #0
    // add r0, r4, #0
    // mov r1, #1
    // bl ov74_02229E28
    // add r0, r4, #0
    // mov r1, #1
    // bl ov74_02229F28
    // add r0, r7, #0
    // bl ov74_0222A0E4
    // cmp r0, #1
    // bne _0222C53A
    // add r0, r6, #0
    // bl ov74_0222A174
    // ldr r0, _0222C65C ; =0x000029F4
    // mov r1, #1
    // str r1, [r4, r0]
    // add r0, r4, #0
    // sub r1, r1, #2
    // bl ov74_02229F28
    // add r0, r4, #0
    // add r0, #0x58
    // mov r1, #0
    // bl ov74_02229F60
    // ldr r1, _0222C660 ; =0x000030A4
    // mov r0, #0x54
    // bl Heap_Alloc
    // ldr r2, _0222C660 ; =0x000030A4
    // mov r1, #0
    // add r6, r0, #0
    // bl memset
    // ldr r0, _0222C65C ; =0x000029F4
    // add r1, r4, r0
    // ldr r0, _0222C664 ; =0x000030A0
    // str r1, [r6, r0]
    // bl ov74_02235708
    // str r0, [r6, #0xc]
    // ldr r0, _0222C668 ; =ov74_0222C04C
    // add r1, r6, #0
    // mov r2, #5
    // bl SysTask_CreateOnMainQueue
    // b _0222C548
    // ldr r0, [r4]
    // add r1, r7, #0
    // bl ov74_02235DC4
    // add r0, r6, #0
    // bl ov74_0222A174
    // mov r0, #0x22
    // str r0, [r5]
    // b _0222CD3A
    // ldr r0, _0222C65C ; =0x000029F4
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // bne _0222C5DC
    // add r1, r4, #0
    // add r0, r6, #0
    // add r1, #0x18
    // mov r2, #8
    // mov r3, #0x38
    // bl ov74_0222ADBC
    // str r0, [r5]
    // mov r0, #1
    // add r1, r0, #0
    // bl GfGfx_EngineATogglePlanes
    // b _0222CD3A
    // bl ov74_0223615C
    // add r7, r0, #0
    // cmp r7, #4
    // bne _0222C57E
    // bl ov74_02236128
    // cmp r7, #2
    // bne _0222C5D8
    // add r0, r4, #0
    // mov r1, #0
    // bl ov74_02229E28
    // mov r1, #0
    // add r0, r4, #0
    // mvn r1, r1
    // bl ov74_02229F28
    // add r0, r4, #0
    // add r0, #0x18
    // mov r1, #0
    // bl ov74_02229F78
    // ldr r0, [r4]
    // mov r1, #0
    // bl BgClearTilemapBufferAndCommit
    // mov r0, #1
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // add r6, r4, #0
    // add r6, #0xdc
    // add r0, r6, #0
    // bl ov74_0222A0E4
    // cmp r0, #1
    // bne _0222C5CC
    // ldr r0, [r4]
    // add r1, r6, #0
    // bl ov74_02235DC4
    // ldr r0, _0222C65C ; =0x000029F4
    // mov r1, #2
    // str r1, [r4, r0]
    // b _0222C5D2
    // ldr r0, _0222C66C ; =SEQ_SE_DP_UG_020
    // bl PlaySE
    // mov r0, #0x23
    // str r0, [r5]
    // b _0222CD3A
    // cmp r7, #3
    // beq _0222C5DE
    // b _0222CD3A
    // add r0, r4, #0
    // mov r1, #0
    // bl ov74_02229E28
    // mov r1, #0
    // add r0, r4, #0
    // mvn r1, r1
    // bl ov74_02229F28
    // add r0, r4, #0
    // add r0, #0xda
    // ldrb r1, [r0]
    // mov r0, #4
    // mov r2, #0x1b
    // bic r1, r0
    // add r0, r4, #0
    // add r0, #0xda
    // strb r1, [r0]
    // add r1, r4, #0
    // add r0, r6, #0
    // add r1, #0x18
    // mov r3, #0x38
    // bl ov74_0222ADBC
    // str r0, [r5]
    // b _0222CD3A
    // add r0, r4, #0
    // bl ov74_0222CEE0
    // ldr r0, _0222C654 ; =ov74_0223D0A8
    // ldr r1, [r0, #0x10]
    // add r0, r1, #0
    // sub r0, #0x2d
    // cmp r0, #2
    // bhi _0222C704
    // cmp r1, #0x2f
    // bne _0222C62C
    // bl ov74_0222CEC0
    // add r0, r6, #0
    // bl ov74_0222A494
    // str r0, [r5]
    // b _0222CD3A
    // add r0, r4, #0
    // bl ov74_02229D6C
    // ldr r1, _0222C670 ; =0x00000438
    // b _0222C674
    // _0222C640: .word 0x000005C8
    // _0222C644: .word 0x000015D8
    // _0222C648: .word ov74_0222A6C0
    // _0222C64C: .word ov74_0222A5AC
    // _0222C650: .word ov74_0222A2A4
    // _0222C654: .word ov74_0223D0A8
    // _0222C658: .word ov74_0222A538
    // _0222C65C: .word 0x000029F4
    // _0222C660: .word 0x000030A4
    // _0222C664: .word 0x000030A0
    // _0222C668: .word ov74_0222C04C
    // _0222C66C: .word SEQ_SE_DP_UG_020
    // _0222C670: .word 0x00000438
    // str r0, [r4, r1]
    // mov r0, #0
    // ldr r1, [r4, r1]
    // mvn r0, r0
    // cmp r1, r0
    // beq _0222C6EC
    // add r0, r4, #0
    // mov r1, #0
    // bl ov74_02229E28
    // add r1, r4, #0
    // ldr r0, [r4, #4]
    // add r1, #0x8c
    // bl ov74_0222FD98
    // add r1, r4, #0
    // add r1, #0x80
    // str r0, [r1]
    // add r0, r4, #0
    // add r0, #0x58
    // bl WindowIsInUse
    // cmp r0, #0
    // bne _0222C6C6
    // mov r0, #2
    // str r0, [sp]
    // mov r0, #0x1a
    // str r0, [sp, #4]
    // mov r0, #4
    // str r0, [sp, #8]
    // mov r2, #0
    // mov r0, #0x71
    // add r1, r4, #0
    // str r2, [sp, #0xc]
    // lsl r0, r0, #2
    // str r0, [sp, #0x10]
    // ldr r0, [r4]
    // add r1, #0x58
    // mov r3, #3
    // bl AddWindowParameterized
    // add r1, r4, #0
    // add r2, r4, #0
    // add r0, r6, #0
    // add r1, #0x58
    // add r2, #0x8c
    // bl ov74_0222AAAC
    // add r1, r4, #0
    // add r0, r6, #0
    // add r1, #0x18
    // mov r2, #4
    // bl ov74_0222AA18
    // add r0, r6, #0
    // mov r1, #0
    // bl ov74_0222A240
    // mov r0, #8
    // str r0, [r5]
    // ldr r0, _0222CA14 ; =gSystem
    // ldr r1, [r0, #0x48]
    // mov r0, #2
    // tst r0, r1
    // bne _0222C706
    // ldr r0, _0222CA18 ; =0x00000434
    // ldr r1, [r4, r0]
    // sub r1, r1, #1
    // str r1, [r4, r0]
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // beq _0222C706
    // b _0222CD3A
    // add r0, r4, #0
    // mov r1, #0
    // bl ov74_02229E28
    // bl ov74_02229DF8
    // bl sub_0203A914
    // mov r0, #0x11
    // str r0, [r5]
    // b _0222CD3A
    // ldr r2, _0222CA1C ; =ov74_0222A494
    // add r0, r6, #0
    // add r1, r5, #0
    // bl ov74_0222AB0C
    // b _0222CD3A
    // bl sub_0203769C
    // add r7, r0, #0
    // beq _0222C780
    // lsl r0, r7, #0x10
    // lsr r0, r0, #0x10
    // bl sub_020373B4
    // cmp r0, #0
    // beq _0222C780
    // mov r0, #0xab
    // bl sub_02037B38
    // cmp r0, #1
    // bne _0222C7B0
    // add r0, r4, #0
    // mov r1, #0
    // bl ov74_02229E28
    // mov r0, #1
    // add r1, r0, #0
    // bl sub_020398D4
    // add r1, r4, #0
    // add r0, r6, #0
    // add r1, #0x18
    // mov r2, #7
    // bl ov74_0222AA18
    // add r0, r4, #0
    // mov r1, #1
    // bl ov74_02229F28
    // add r0, r4, #0
    // mov r1, #1
    // bl ov74_02229E28
    // mov r1, #0x96
    // ldr r0, _0222CA18 ; =0x00000434
    // lsl r1, r1, #2
    // str r1, [r4, r0]
    // mov r0, #0xa
    // str r0, [r5]
    // b _0222C7B0
    // cmp r7, #0
    // beq _0222C7B0
    // lsl r0, r7, #0x10
    // lsr r0, r0, #0x10
    // bl sub_020373B4
    // cmp r0, #0
    // bne _0222C7B0
    // bl ov74_02229DF8
    // bl sub_0203A914
    // mov r1, #0
    // add r0, r4, #0
    // mvn r1, r1
    // bl ov74_02229F28
    // add r0, r4, #0
    // mov r1, #0
    // bl ov74_02229E28
    // mov r0, #0x10
    // str r0, [r5]
    // b _0222CD3A
    // ldr r0, _0222CA14 ; =gSystem
    // ldr r1, [r0, #0x48]
    // mov r0, #2
    // tst r0, r1
    // bne _0222C7C8
    // ldr r0, _0222CA18 ; =0x00000434
    // ldr r1, [r4, r0]
    // sub r1, r1, #1
    // str r1, [r4, r0]
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // bne _0222C8B8
    // bl ov74_02229DF8
    // bl sub_0203A914
    // mov r1, #0
    // add r0, r4, #0
    // mvn r1, r1
    // bl ov74_02229F28
    // add r0, r4, #0
    // mov r1, #0
    // bl ov74_02229E28
    // mov r0, #0x11
    // str r0, [r5]
    // b _0222CD3A
    // bl ov74_02229DBC
    // cmp r0, #0
    // beq _0222C7F4
    // mov r0, #0xb
    // str r0, [r5]
    // bl sub_0203769C
    // ldr r1, _0222CA14 ; =gSystem
    // ldr r2, [r1, #0x48]
    // mov r1, #2
    // tst r1, r2
    // bne _0222C820
    // ldr r1, _0222CA18 ; =0x00000434
    // ldr r2, [r4, r1]
    // sub r2, r2, #1
    // str r2, [r4, r1]
    // ldr r1, [r4, r1]
    // cmp r1, #0
    // beq _0222C820
    // cmp r0, #0
    // beq _0222C8B8
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // bl sub_020373B4
    // cmp r0, #0
    // bne _0222C8B8
    // add r0, r4, #0
    // mov r1, #0
    // bl ov74_02229E28
    // bl ov74_02229DF8
    // bl sub_0203A914
    // mov r0, #0x11
    // str r0, [r5]
    // b _0222CD3A
    // add r0, r6, #0
    // bl ov74_0222A078
    // add r1, r0, #0
    // ldr r0, [r4]
    // bl ov74_02235DC4
    // mov r0, #0
    // add r1, r0, #0
    // bl sub_020398D4
    // add r0, r6, #0
    // bl ov74_0222A174
    // mov r0, #0xc
    // str r0, [r5]
    // b _0222CD3A
    // bl sub_0203769C
    // cmp r0, #0
    // beq _0222C896
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // bl sub_020373B4
    // cmp r0, #0
    // bne _0222C896
    // bl ov74_02229DF8
    // ldr r0, _0222CA20 ; =0x000029EC
    // mov r1, #1
    // str r1, [r4, r0]
    // bl ov74_02236140
    // add r0, r4, #0
    // mov r1, #0
    // bl ov74_02229E28
    // bl sub_0203A914
    // mov r1, #0
    // add r0, r4, #0
    // mvn r1, r1
    // bl ov74_02229F28
    // mov r0, #0xe
    // str r0, [r5]
    // b _0222CD3A
    // bl ov74_0223615C
    // cmp r0, #4
    // bne _0222C8B0
    // mov r0, #0x93
    // bl sub_02037AC0
    // mov r0, #0xd
    // str r0, [r5]
    // ldr r0, _0222CA24 ; =0x0000043C
    // mov r1, #0x78
    // str r1, [r4, r0]
    // b _0222CD3A
    // bl ov74_0223615C
    // cmp r0, #3
    // beq _0222C8BA
    // b _0222CD3A
    // bl ov74_02236140
    // add r0, r4, #0
    // add r0, #0xda
    // ldrb r1, [r0]
    // mov r0, #4
    // bic r1, r0
    // add r0, r4, #0
    // add r0, #0xda
    // strb r1, [r0]
    // add r0, r4, #0
    // mov r1, #0
    // bl ov74_02229E28
    // add r1, r4, #0
    // add r0, r6, #0
    // add r1, #0x18
    // mov r2, #0x1b
    // mov r3, #0x38
    // bl ov74_0222ADBC
    // str r0, [r5]
    // b _0222CD3A
    // mov r0, #0x93
    // bl sub_02037B38
    // cmp r0, #1
    // bne _0222C902
    // bl ov74_02236128
    // ldr r0, _0222CA24 ; =0x0000043C
    // mov r1, #0xa
    // str r1, [r4, r0]
    // mov r0, #0xf
    // str r0, [r5]
    // b _0222CD3A
    // ldr r0, _0222CA24 ; =0x0000043C
    // ldr r1, [r4, r0]
    // sub r1, r1, #1
    // str r1, [r4, r0]
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // bne _0222CA0C
    // bl ov74_02236140
    // add r0, r4, #0
    // add r0, #0xda
    // ldrb r1, [r0]
    // mov r0, #4
    // bic r1, r0
    // add r0, r4, #0
    // add r0, #0xda
    // strb r1, [r0]
    // add r0, r4, #0
    // mov r1, #0
    // bl ov74_02229E28
    // add r1, r4, #0
    // add r0, r6, #0
    // add r1, #0x18
    // mov r2, #0x1b
    // mov r3, #0x38
    // bl ov74_0222ADBC
    // str r0, [r5]
    // b _0222CD3A
    // add r0, r4, #0
    // add r0, #0x58
    // mov r1, #0
    // bl ov74_02229F60
    // add r0, r4, #0
    // add r0, #0xda
    // ldrb r1, [r0]
    // mov r0, #4
    // mov r2, #0x1d
    // bic r1, r0
    // add r0, r4, #0
    // add r0, #0xda
    // strb r1, [r0]
    // add r1, r4, #0
    // add r0, r6, #0
    // add r1, #0x18
    // mov r3, #0x38
    // bl ov74_0222ADBC
    // str r0, [r5]
    // b _0222CD3A
    // ldr r0, _0222CA24 ; =0x0000043C
    // ldr r1, [r4, r0]
    // sub r1, r1, #1
    // str r1, [r4, r0]
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // bne _0222CA0C
    // add r0, r4, #0
    // mov r1, #0
    // bl ov74_02229E28
    // bl ov74_02229DF8
    // bl sub_0203A914
    // ldr r0, _0222CA28 ; =SEQ_SE_DP_UG_020
    // bl PlaySE
    // mov r1, #0
    // add r0, r4, #0
    // mvn r1, r1
    // bl ov74_02229F28
    // add r1, r4, #0
    // add r0, r6, #0
    // add r1, #0x18
    // mov r2, #8
    // mov r3, #0x38
    // bl ov74_0222ADBC
    // str r0, [r5]
    // b _0222CD3A
    // ldr r0, _0222CA2C ; =SEQ_SE_DP_SELECT
    // bl PlaySE
    // add r1, r4, #0
    // add r0, r6, #0
    // add r1, #0x18
    // mov r2, #0x19
    // bl ov74_0222AA18
    // add r0, r4, #0
    // add r0, #0x58
    // mov r1, #0
    // bl ov74_02229F60
    // mov r0, #0x12
    // str r0, [r5]
    // b _0222CD3A
    // ldr r0, _0222CA30 ; =0x000015DC
    // ldr r1, [r4, r0]
    // cmp r1, #0
    // beq _0222C9DA
    // sub r1, r1, #1
    // str r1, [r4, r0]
    // b _0222CD3A
    // add r0, r4, #0
    // mov r1, #0
    // bl ov74_02229E28
    // ldr r0, _0222CA2C ; =SEQ_SE_DP_SELECT
    // bl PlaySE
    // add r1, r4, #0
    // add r0, r6, #0
    // add r1, #0x18
    // mov r2, #0x18
    // bl ov74_0222AA18
    // add r0, r4, #0
    // add r0, #0x58
    // mov r1, #0
    // bl ov74_02229F60
    // mov r0, #0x12
    // str r0, [r5]
    // b _0222CD3A
    // ldr r0, _0222CA14 ; =gSystem
    // ldr r0, [r0, #0x48]
    // cmp r0, #0
    // bne _0222CA0E
    // b _0222CD3A
    // ldr r0, _0222CA2C ; =SEQ_SE_DP_SELECT
    // b _0222CA34
    // nop
    // _0222CA14: .word gSystem
    // _0222CA18: .word 0x00000434
    // _0222CA1C: .word ov74_0222A494
    // _0222CA20: .word 0x000029EC
    // _0222CA24: .word 0x0000043C
    // _0222CA28: .word SEQ_SE_DP_UG_020
    // _0222CA2C: .word SEQ_SE_DP_SELECT
    // _0222CA30: .word 0x000015DC
    // bl PlaySE
    // add r0, r6, #0
    // mov r1, #0xc4
    // mov r2, #0
    // bl ov74_0222A94C
    // mov r0, #3
    // str r0, [r5]
    // b _0222CD3A
    // ldr r0, _0222CD54 ; =0x000015DC
    // ldr r1, [r4, r0]
    // cmp r1, #0
    // beq _0222CA56
    // sub r1, r1, #1
    // str r1, [r4, r0]
    // b _0222CD3A
    // add r0, r4, #0
    // add r0, #0x84
    // ldr r0, [r0]
    // cmp r0, #0x1b
    // beq _0222CA6C
    // add r0, r4, #0
    // mov r1, #0xea
    // add r0, #0x8c
    // lsl r1, r1, #2
    // bl ov74_02235258
    // add r1, r4, #0
    // ldr r0, [r4, #4]
    // add r1, #0x8c
    // bl ov74_0222FD98
    // add r1, r4, #0
    // add r1, #0x80
    // str r0, [r1]
    // add r0, r4, #0
    // add r0, #0x80
    // ldr r0, [r0]
    // cmp r0, #1
    // bne _0222CA94
    // add r0, r4, #0
    // mov r1, #0
    // bl ov74_02229E28
    // mov r0, #0x31
    // str r0, [r5]
    // b _0222CD3A
    // add r0, r4, #0
    // add r0, #0x58
    // bl WindowIsInUse
    // cmp r0, #0
    // bne _0222CAC2
    // mov r0, #2
    // str r0, [sp]
    // mov r0, #0x1a
    // str r0, [sp, #4]
    // mov r0, #4
    // str r0, [sp, #8]
    // mov r2, #0
    // mov r0, #0x71
    // add r1, r4, #0
    // str r2, [sp, #0xc]
    // lsl r0, r0, #2
    // str r0, [sp, #0x10]
    // ldr r0, [r4]
    // add r1, #0x58
    // mov r3, #3
    // bl AddWindowParameterized
    // add r1, r4, #0
    // add r2, r4, #0
    // add r0, r6, #0
    // add r1, #0x58
    // add r2, #0x8c
    // bl ov74_0222AAAC
    // add r1, r4, #0
    // add r0, r6, #0
    // add r1, #0x18
    // mov r2, #4
    // bl ov74_0222AA18
    // add r0, r6, #0
    // mov r1, #0
    // bl ov74_0222A240
    // mov r0, #0x14
    // str r0, [r5]
    // b _0222CD3A
    // ldr r2, _0222CD58 ; =ov74_0222A494
    // add r0, r6, #0
    // add r1, r5, #0
    // bl ov74_0222AB0C
    // b _0222CD3A
    // mov r0, #0x16
    // str r0, [r5]
    // b _0222CD3A
    // add r0, r6, #0
    // bl ov74_0222A078
    // add r1, r0, #0
    // ldr r0, [r4]
    // bl ov74_02235DC4
    // add r1, r4, #0
    // add r0, r6, #0
    // add r1, #0x18
    // mov r2, #7
    // bl ov74_0222AA18
    // add r0, r4, #0
    // mov r1, #1
    // bl ov74_02229F28
    // add r0, r4, #0
    // mov r1, #1
    // bl ov74_02229E28
    // ldr r0, _0222CD5C ; =0x0000043C
    // mov r1, #0x3c
    // str r1, [r4, r0]
    // mov r0, #0x17
    // str r0, [r5]
    // b _0222CD3A
    // ldr r0, _0222CD5C ; =0x0000043C
    // ldr r1, [r4, r0]
    // sub r1, r1, #1
    // str r1, [r4, r0]
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // bne _0222CC18
    // add r0, r6, #0
    // bl ov74_0222A174
    // mov r0, #0x18
    // str r0, [r5]
    // b _0222CD3A
    // bl ov74_0223615C
    // cmp r0, #4
    // bne _0222CB58
    // bl ov74_02236128
    // bl ov74_0223615C
    // cmp r0, #2
    // bne _0222CB90
    // ldr r0, _0222CD5C ; =0x0000043C
    // mov r1, #1
    // str r1, [r4, r0]
    // add r0, r4, #0
    // mov r1, #0
    // bl ov74_02229E28
    // mov r1, #0
    // add r0, r4, #0
    // mvn r1, r1
    // bl ov74_02229F28
    // ldr r0, _0222CD60 ; =SEQ_SE_DP_UG_020
    // bl PlaySE
    // add r1, r4, #0
    // add r0, r6, #0
    // add r1, #0x18
    // mov r2, #8
    // mov r3, #0x19
    // bl ov74_0222ADBC
    // str r0, [r5]
    // b _0222CD3A
    // bl ov74_0223615C
    // cmp r0, #3
    // bne _0222CC18
    // mov r1, #0
    // add r0, r4, #0
    // mvn r1, r1
    // bl ov74_02229F28
    // add r0, r4, #0
    // add r0, #0xda
    // ldrb r1, [r0]
    // mov r0, #4
    // mov r2, #0x1b
    // bic r1, r0
    // add r0, r4, #0
    // add r0, #0xda
    // strb r1, [r0]
    // add r1, r4, #0
    // add r0, r6, #0
    // add r1, #0x18
    // mov r3, #0x38
    // bl ov74_0222ADBC
    // str r0, [r5]
    // b _0222CD3A
    // ldr r0, _0222CD5C ; =0x0000043C
    // ldr r1, [r4, r0]
    // sub r1, r1, #1
    // str r1, [r4, r0]
    // ldr r1, [r4, r0]
    // cmp r1, #0
    // bne _0222CC18
    // mov r1, #1
    // lsl r1, r1, #0x10
    // str r1, [r4, r0]
    // mov r0, #0x38
    // str r0, [r5]
    // b _0222CD3A
    // add r0, r4, #0
    // add r0, #0x80
    // ldr r0, [r0]
    // cmp r0, #5
    // beq _0222CBEE
    // add r0, r4, #0
    // bl ov74_0222AE3C
    // add r0, r6, #0
    // bl ov74_0222AD6C
    // str r0, [r5]
    // add r0, r4, #0
    // add r0, #0x48
    // mov r1, #0
    // bl ov74_02229F60
    // b _0222CD3A
    // mov r1, #0
    // add r0, r6, #0
    // add r2, r1, #0
    // bl ov74_0222ADBC
    // str r0, [r5]
    // b _0222CD3A
    // ldr r0, _0222CD64 ; =gSystem
    // ldr r0, [r0, #0x48]
    // cmp r0, #0
    // bne _0222CC1A
    // b _0222CD3A
    // add r0, r4, #0
    // add r0, #0x58
    // mov r1, #0
    // bl ov74_02229F60
    // add r0, r6, #0
    // bl ov74_0222A5AC
    // str r0, [r5]
    // b _0222CD3A
    // add r0, r6, #0
    // mov r1, #1
    // bl ov74_0222A240
    // mov r0, #8
    // str r0, [r5]
    // add r0, r4, #0
    // mov r1, #0
    // add r0, #0x80
    // str r1, [r0]
    // b _0222CD3A
    // add r0, r6, #0
    // bl ov74_02229E68
    // mov r0, #0x11
    // mov r1, #0
    // lsl r0, r0, #6
    // str r1, [r4, r0]
    // add sp, #0x14
    // mov r0, #1
    // pop {r4, r5, r6, r7, pc}
    // add r0, r6, #0
    // bl ov74_02229E68
    // mov r1, #0x11
    // mov r0, #1
    // lsl r1, r1, #6
    // add sp, #0x14
    // str r0, [r4, r1]
    // pop {r4, r5, r6, r7, pc}
    // add r0, r6, #0
    // bl ov74_02229E68
    // mov r0, #0x11
    // mov r1, #2
    // lsl r0, r0, #6
    // str r1, [r4, r0]
    // add sp, #0x14
    // mov r0, #1
    // pop {r4, r5, r6, r7, pc}
    // ldr r0, _0222CD64 ; =gSystem
    // ldr r0, [r0, #0x48]
    // cmp r0, #0
    // beq _0222CD3A
    // ldr r0, _0222CD68 ; =SEQ_SE_DP_SELECT
    // bl PlaySE
    // add r0, r4, #0
    // add r0, #0xda
    // ldrb r0, [r0]
    // lsl r0, r0, #0x1d
    // lsr r0, r0, #0x1f
    // cmp r0, #1
    // bne _0222CCAA
    // ldr r2, _0222CD6C ; =0x000015D8
    // mov r0, #0
    // ldr r2, [r4, r2]
    // mov r1, #0x39
    // mov r3, #2
    // bl ov74_0223539C
    // b _0222CD3A
    // mov r0, #1
    // bl ov74_02235390
    // ldr r2, _0222CD6C ; =0x000015D8
    // mov r0, #0
    // ldr r2, [r4, r2]
    // mov r1, #0x3a
    // mov r3, #2
    // bl ov74_0223539C
    // b _0222CD3A
    // ldr r0, [r4]
    // bl ov74_0222A7A0
    // mov r0, #1
    // mov r1, #0
    // bl GfGfx_EngineBTogglePlanes
    // mov r0, #2
    // mov r1, #1
    // bl GfGfx_EngineBTogglePlanes
    // add r0, r4, #0
    // add r0, #0xda
    // ldrb r0, [r0]
    // lsl r0, r0, #0x1d
    // lsr r0, r0, #0x1f
    // cmp r0, #1
    // bne _0222CD08
    // add r0, r4, #0
    // add r0, #0xdc
    // ldrh r0, [r0]
    // cmp r0, #3
    // bne _0222CD08
    // add r0, r4, #0
    // add r0, #0xe0
    // ldr r1, [r0]
    // ldr r0, _0222CD70 ; =0x00000215
    // cmp r1, r0
    // bne _0222CD08
    // add r1, r4, #0
    // ldr r0, [r4]
    // add r1, #0xdc
    // mov r2, #0x54
    // bl ov74_0222FC50
    // b _0222CD14
    // add r1, r4, #0
    // ldr r0, [r4]
    // add r1, #0xdc
    // mov r2, #0x54
    // bl ov74_0222EC08
    // ldr r2, _0222CD6C ; =0x000015D8
    // mov r0, #1
    // ldr r2, [r4, r2]
    // mov r1, #0x38
    // mov r3, #2
    // bl ov74_0223539C
    // add r0, r4, #0
    // add r0, #0xda
    // ldrb r1, [r0]
    // mov r0, #4
    // bic r1, r0
    // add r0, r4, #0
    // add r0, #0xda
    // strb r1, [r0]
    // b _0222CD3A
    // mov r0, #0
    // bl OS_ResetSystem
    // ldr r0, _0222CD74 ; =0x000029E8
    // ldr r1, [r4, r0]
    // cmp r1, #0
    // beq _0222CD46
    // add r0, r4, #0
    // blx r1
    // ldr r0, _0222CD78 ; =0x000029F4
    // ldr r0, [r4, r0]
    // bl ov74_022358C8
    // mov r0, #0
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // _0222CD54: .word 0x000015DC
    // _0222CD58: .word ov74_0222A494
    // _0222CD5C: .word 0x0000043C
    // _0222CD60: .word SEQ_SE_DP_UG_020
    // _0222CD64: .word gSystem
    // _0222CD68: .word SEQ_SE_DP_SELECT
    // _0222CD6C: .word 0x000015D8
    // _0222CD70: .word 0x00000215
    // _0222CD74: .word 0x000029E8
    // _0222CD78: .word 0x000029F4
    // TODO: decompile
}



void ov74_0222CD7C(void) {
    // ldr r0, _0222CD84 ; =ov74_0223D0A8
    // ldr r0, [r0]
    // bx lr
    // nop
    // _0222CD84: .word ov74_0223D0A8
    // TODO: decompile
}



void ov74_0222CD88(void) {
    // ldr r1, _0222CD90 ; =ov74_0223D0A8
    // str r0, [r1]
    // bx lr
    // nop
    // _0222CD90: .word ov74_0223D0A8
    // TODO: decompile
}



void ov74_0222CD94(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // bl OverlayManager_GetData
    // add r4, r0, #0
    // mov r0, #0x11
    // lsl r0, r0, #6
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // bne _0222CDB2
    // ldr r0, _0222CDF8 ; =FS_OVERLAY_ID(intro_title)
    // ldr r1, _0222CDFC ; =gApplication_TitleScreen
    // bl RegisterMainOverlay
    // b _0222CDCC
    // cmp r0, #1
    // bne _0222CDC0
    // ldr r0, _0222CE00 ; =FS_OVERLAY_ID(OVY_74)
    // ldr r1, _0222CE04 ; =_0223B410
    // bl RegisterMainOverlay
    // b _0222CDCC
    // cmp r0, #2
    // bne _0222CDCC
    // ldr r0, _0222CE00 ; =FS_OVERLAY_ID(OVY_74)
    // ldr r1, _0222CE08 ; =_0223B420
    // bl RegisterMainOverlay
    // mov r0, #0x59
    // bl Heap_Destroy
    // add r0, r5, #0
    // bl OverlayManager_FreeData
    // mov r0, #0x54
    // bl Heap_Destroy
    // ldr r0, _0222CE0C ; =0x000015D4
    // ldr r0, [r4, r0]
    // cmp r0, #2
    // bne _0222CDEC
    // mov r0, #0
    // bl sub_0201A4B0
    // mov r0, #0
    // bl ov74_02236034
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // nop
    // _0222CDF8: .word FS_OVERLAY_ID(intro_title)
    // _0222CDFC: .word gApplication_TitleScreen
    // _0222CE00: .word FS_OVERLAY_ID(OVY_74)
    // _0222CE04: .word _0223B410
    // _0222CE08: .word _0223B420
    // _0222CE0C: .word 0x000015D4
    // TODO: decompile
}



void ov74_0222CE10(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _0222CE64 ; =0x000005C8
    // ldr r0, [r4, r0]
    // cmp r0, #0x1c
    // beq _0222CE26
    // cmp r0, #0x1d
    // beq _0222CE62
    // cmp r0, #0x1e
    // beq _0222CE3A
    // pop {r4, pc}
    // ldr r0, [r4, #4]
    // bl sub_02038D28
    // ldr r0, _0222CE68 ; =0x000005CC
    // mov r1, #0x78
    // str r1, [r4, r0]
    // mov r1, #0x1e
    // sub r0, r0, #4
    // str r1, [r4, r0]
    // pop {r4, pc}
    // bl sub_02038D80
    // mov r1, #1
    // tst r0, r1
    // beq _0222CE4A
    // mov r0, #0x5d
    // lsl r0, r0, #4
    // str r1, [r4, r0]
    // ldr r0, _0222CE68 ; =0x000005CC
    // ldr r1, [r4, r0]
    // sub r1, r1, #1
    // str r1, [r4, r0]
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // bne _0222CE62
    // bl sub_02038D64
    // ldr r0, _0222CE64 ; =0x000005C8
    // mov r1, #0x1d
    // str r1, [r4, r0]
    // pop {r4, pc}
    // _0222CE64: .word 0x000005C8
    // _0222CE68: .word 0x000005CC
    // TODO: decompile
}



void ov74_0222CE6C(void) {
    // cmp r0, #4
    // bhi _0222CEB8
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222CE7C: ; jump table
    // ldr r0, _0222CEBC ; =ov74_0223D0A8
    // mov r1, #0x28
    // str r1, [r0, #0x10]
    // bx lr
    // ldr r0, _0222CEBC ; =ov74_0223D0A8
    // mov r1, #0x29
    // str r1, [r0, #0x10]
    // bx lr
    // ldr r0, _0222CEBC ; =ov74_0223D0A8
    // mov r1, #0x2a
    // str r1, [r0, #0x10]
    // bx lr
    // ldr r0, _0222CEBC ; =ov74_0223D0A8
    // ldr r1, [r0, #0x10]
    // cmp r1, #0x2a
    // bne _0222CEAC
    // mov r1, #0x2c
    // str r1, [r0, #0x10]
    // bx lr
    // mov r1, #0x2f
    // str r1, [r0, #0x10]
    // bx lr
    // ldr r0, _0222CEBC ; =ov74_0223D0A8
    // mov r1, #0x30
    // str r1, [r0, #0x10]
    // bx lr
    // nop
    // _0222CEBC: .word ov74_0223D0A8
    // TODO: decompile
}



void ov74_0222CEC0(void) {
    // push {r3, lr}
    // bl sub_02034DE0
    // ldr r0, _0222CEDC ; =ov74_0223D0A8
    // ldr r0, [r0, #4]
    // bl Heap_Free
    // bl sub_0203A914
    // ldr r0, _0222CEDC ; =ov74_0223D0A8
    // mov r1, #0
    // str r1, [r0, #4]
    // pop {r3, pc}
    // nop
    // _0222CEDC: .word ov74_0223D0A8
    // TODO: decompile
}



void ov74_0222CEE0(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _0222CFEC ; =ov74_0223D0A8
    // ldr r0, [r0, #0x10]
    // cmp r0, #0x2c
    // bne _0222CF06
    // bl ov74_0222CEC0
    // bl ov74_022368D4
    // cmp r0, #0
    // beq _0222CF00
    // ldr r0, _0222CFEC ; =ov74_0223D0A8
    // mov r1, #0x2d
    // str r1, [r0, #0x10]
    // b _0222CF06
    // ldr r0, _0222CFEC ; =ov74_0223D0A8
    // mov r1, #0x2e
    // str r1, [r0, #0x10]
    // ldr r0, _0222CFEC ; =ov74_0223D0A8
    // ldr r0, [r0, #0x10]
    // cmp r0, #0x25
    // beq _0222CF22
    // cmp r0, #0x26
    // beq _0222CF22
    // cmp r0, #0x27
    // beq _0222CF22
    // cmp r0, #0x28
    // beq _0222CF22
    // cmp r0, #0x29
    // beq _0222CF22
    // cmp r0, #0x2b
    // bne _0222CF2E
    // bl WM_GetLinkLevel
    // mov r1, #3
    // sub r0, r1, r0
    // bl sub_0203A930
    // ldr r1, _0222CFEC ; =ov74_0223D0A8
    // ldr r0, [r1, #0x10]
    // sub r0, #0x25
    // cmp r0, #0xb
    // bhi _0222CFA8
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222CF44: ; jump table
    // bl sub_02034D8C
    // ldr r0, _0222CFEC ; =ov74_0223D0A8
    // mov r1, #0x26
    // str r1, [r0, #0x10]
    // b _0222CFA8
    // bl sub_02034DB8
    // cmp r0, #1
    // bne _0222CFA8
    // ldr r0, _0222CFEC ; =ov74_0223D0A8
    // mov r1, #0
    // str r1, [r0, #0xc]
    // bl ov74_02236980
    // add r1, r0, #0
    // mov r0, #0x54
    // bl Heap_Alloc
    // add r2, r0, #0
    // ldr r0, _0222CFEC ; =ov74_0223D0A8
    // ldr r1, _0222CFF0 ; =ov74_0222CE6C
    // str r2, [r0, #4]
    // ldr r0, _0222CFF4 ; =0x000005D4
    // add r0, r4, r0
    // bl ov74_02236680
    // ldr r0, _0222CFEC ; =ov74_0223D0A8
    // mov r1, #0x27
    // str r1, [r0, #0x10]
    // bl sub_0203A880
    // b _0222CFA8
    // ldr r0, [r1, #0xc]
    // add r0, r0, #1
    // str r0, [r1, #0xc]
    // b _0222CFA8
    // pop {r4, pc}
    // ldr r0, _0222CFF8 ; =gSystem
    // ldr r1, [r0, #0x48]
    // mov r0, #2
    // tst r0, r1
    // beq _0222CFE8
    // ldr r0, _0222CFEC ; =ov74_0223D0A8
    // ldr r0, [r0, #0x10]
    // sub r0, #0x28
    // cmp r0, #8
    // bhi _0222CFE8
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222CFC8: ; jump table
    // bl ov74_022365FC
    // cmp r0, #0
    // beq _0222CFE8
    // ldr r0, _0222CFEC ; =ov74_0223D0A8
    // mov r1, #0x2b
    // str r1, [r0, #0x10]
    // pop {r4, pc}
    // nop
    // _0222CFEC: .word ov74_0223D0A8
    // _0222CFF0: .word ov74_0222CE6C
    // _0222CFF4: .word 0x000005D4
    // _0222CFF8: .word gSystem
    // TODO: decompile
}



void ov74_0222CFFC(void) {
    ov74_0222D024();
    ov74_0223563C();
    ov74_02235690();
    // str r0, [sp]
    // str r0, [sp, #4]
    ov74_02235728(0x71, 0x13, 0x10, 0x12);
}



void ov74_0222D024(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _0222D088 ; =0x00002DC4
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // beq _0222D034
    // bl Sprite_Delete
    // ldr r0, _0222D08C ; =0x00002DC8
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // beq _0222D040
    // bl Sprite_Delete
    // ldr r0, _0222D08C ; =0x00002DC8
    // mov r1, #0
    // str r1, [r4, r0]
    // ldr r2, [r4, r0]
    // sub r1, r0, #4
    // str r2, [r4, r1]
    // add r0, r0, #4
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // beq _0222D058
    // bl Sprite_Delete
    // ldr r0, _0222D090 ; =0x00002DD0
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // beq _0222D064
    // bl Sprite_Delete
    // ldr r0, _0222D094 ; =0x00002DD4
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // beq _0222D070
    // bl Sprite_Delete
    // ldr r1, _0222D094 ; =0x00002DD4
    // mov r0, #0
    // str r0, [r4, r1]
    // ldr r2, [r4, r1]
    // sub r0, r1, #4
    // str r2, [r4, r0]
    // ldr r0, [r4, r0]
    // sub r1, #8
    // str r0, [r4, r1]
    // bl ov74_022359BC
    // pop {r4, pc}
    // _0222D088: .word 0x00002DC4
    // _0222D08C: .word 0x00002DC8
    // _0222D090: .word 0x00002DD0
    // _0222D094: .word 0x00002DD4
    // TODO: decompile
}



void ov74_0222D098(void) {
    // push {r3, r4, lr}
    // sub sp, #4
    // ldr r1, _0222D0E0 ; =0x00003D4C
    // add r4, r0, #0
    // mov r0, #0
    // str r0, [r4, r1]
    // mov r1, #1
    // str r1, [sp]
    // ldr r1, _0222D0E4 ; =0x00002DC4
    // mov r2, #0x48
    // ldr r1, [r4, r1]
    // mov r3, #0xa8
    // bl ov74_02235930
    // ldr r1, _0222D0E4 ; =0x00002DC4
    // str r0, [r4, r1]
    // ldr r0, [r4, r1]
    // mov r1, #2
    // bl Sprite_SetPriority
    // mov r0, #0
    // ldr r1, _0222D0E8 ; =0x00002DC8
    // str r0, [sp]
    // ldr r1, [r4, r1]
    // mov r2, #0xb8
    // mov r3, #0xa8
    // bl ov74_02235930
    // ldr r1, _0222D0E8 ; =0x00002DC8
    // str r0, [r4, r1]
    // ldr r0, [r4, r1]
    // mov r1, #2
    // bl Sprite_SetPriority
    // add sp, #4
    // pop {r3, r4, pc}
    // _0222D0E0: .word 0x00003D4C
    // _0222D0E4: .word 0x00002DC4
    // _0222D0E8: .word 0x00002DC8
    // TODO: decompile
}



void ov74_0222D0EC(void) {
    WindowIsInUse();
    sub_0200E5D4(r5, r4);
}



void ov74_0222D104(void) {
    WindowIsInUse();
    ClearFrameAndWindow2(r5, r4);
}



void ov74_0222D11C(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x24
    // add r5, r0, #0
    // ldr r0, _0222D1C4 ; =0x00002BCC
    // add r4, r1, #0
    // ldr r0, [r5, r0]
    // add r7, r2, #0
    // str r3, [sp]
    // cmp r0, #0
    // beq _0222D134
    // bl ListMenuItems_Delete
    // ldr r0, _0222D1C8 ; =0x00002BC8
    // ldr r0, [r5, r0]
    // cmp r0, #0
    // beq _0222D144
    // mov r1, #0
    // add r2, r1, #0
    // bl DestroyListMenu
    // add r0, r7, #0
    // mov r1, #0x55
    // bl ListMenuItems_New
    // ldr r1, _0222D1C4 ; =0x00002BCC
    // mov r2, #0xf7
    // str r0, [r5, r1]
    // mov r0, #0
    // mov r1, #0x1b
    // mov r3, #0x55
    // bl NewMsgDataFromNarc
    // ldr r1, _0222D1CC ; =0x00002A04
    // mov r6, #0
    // str r0, [r5, r1]
    // cmp r7, #0
    // ble _0222D17E
    // ldr r0, _0222D1C4 ; =0x00002BCC
    // ldr r1, _0222D1CC ; =0x00002A04
    // ldr r0, [r5, r0]
    // ldr r1, [r5, r1]
    // ldr r2, [r4]
    // ldr r3, [r4, #4]
    // bl ListMenuItems_AppendFromMsgData
    // add r6, r6, #1
    // add r4, #8
    // cmp r6, r7
    // blt _0222D166
    // ldr r0, _0222D1CC ; =0x00002A04
    // ldr r0, [r5, r0]
    // bl DestroyMsgData
    // ldr r4, _0222D1D0 ; =ov74_0223C320
    // add r3, sp, #4
    // add r2, r3, #0
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, _0222D1C4 ; =0x00002BCC
    // mov r1, #0
    // ldr r0, [r5, r0]
    // mov r3, #0x55
    // str r0, [sp, #4]
    // add r0, sp, #4
    // strh r7, [r0, #0x10]
    // ldr r0, [sp]
    // str r0, [sp, #0x10]
    // add r0, r2, #0
    // ldr r2, [sp, #0x38]
    // lsl r2, r2, #0x10
    // lsr r2, r2, #0x10
    // bl ListMenuInit
    // ldr r1, _0222D1C8 ; =0x00002BC8
    // str r0, [r5, r1]
    // add sp, #0x24
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _0222D1C4: .word 0x00002BCC
    // _0222D1C8: .word 0x00002BC8
    // _0222D1CC: .word 0x00002A04
    // _0222D1D0: .word ov74_0223C320
    // TODO: decompile
}



void ov74_0222D1D4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // add r7, r1, #0
    // mov r0, #1
    // mov r1, #0x1b
    // mov r2, #0xf7
    // mov r3, #0x55
    // bl NewMsgDataFromNarc
    // add r4, r0, #0
    // mov r0, #0x55
    // bl MessageFormat_New
    // add r6, r0, #0
    // mov r0, #1
    // mov r1, #6
    // bl GetFontAttribute
    // add r1, r0, #0
    // add r0, r5, #0
    // bl FillWindowPixelBuffer
    // add r0, r6, #0
    // add r1, r4, #0
    // add r2, r7, #0
    // mov r3, #0x55
    // bl ReadMsgData_ExpandPlaceholders
    // add r7, r0, #0
    // mov r3, #0
    // str r3, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0222D244 ; =0x00010200
    // mov r1, #1
    // str r0, [sp, #8]
    // add r0, r5, #0
    // add r2, r7, #0
    // str r3, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r5, #0
    // bl CopyWindowToVram
    // add r0, r7, #0
    // bl String_Delete
    // add r0, r4, #0
    // bl DestroyMsgData
    // add r0, r6, #0
    // bl MessageFormat_Delete
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // _0222D244: .word 0x00010200
    // TODO: decompile
}



void ov74_0222D248(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    GfGfxLoader_GXLoadPal(0x71, 0xf, 0, (0xf << 5));
    // str r0, [sp]
    // str r0, [sp, #4]
    GfGfxLoader_GXLoadPal(0x71, 0x14, 0, (6 << 6));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r3, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharData(0x71, 0x15, r4, 1);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r3, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnData(0x71, 0x16, r4, 1);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BgTilemapRectChangePalette(r4, 1, 0, 0);
    BgCommitTilemapBufferToVram(r4, 1);
}



void ov74_0222D2D4(void) {
    // push {r4, lr}
    // bl OverlayManager_GetData
    // add r4, r0, #0
    // bl ov74_0222D448
    // ldr r0, _0222D300 ; =0x00002BD0
    // mov r1, #0x2f
    // add r0, r4, r0
    // bl ov74_0222D1D4
    // ldr r3, _0222D304 ; =0x00002BE0
    // add r0, r4, #0
    // add r1, r4, r3
    // add r3, #0x10
    // ldr r3, [r4, r3]
    // mov r2, #0xa
    // bl ov74_0222D9E0
    // mov r0, #0xe
    // pop {r4, pc}
    // nop
    // _0222D300: .word 0x00002BD0
    // _0222D304: .word 0x00002BE0
    // TODO: decompile
}



void ov74_0222D308(void) {
    // push {r4, lr}
    // bl OverlayManager_GetData
    // add r4, r0, #0
    // bl ov74_0222D448
    // ldr r1, _0222D34C ; =0x00002BA0
    // ldr r0, [r4, r1]
    // add r1, #0x20
    // ldr r1, [r4, r1]
    // bl SaveMysteryGift_HasAnyGift
    // cmp r0, #1
    // ldr r0, _0222D350 ; =0x00002BD0
    // bne _0222D330
    // add r0, r4, r0
    // mov r1, #0x3f
    // bl ov74_0222D1D4
    // b _0222D338
    // add r0, r4, r0
    // mov r1, #0x3e
    // bl ov74_0222D1D4
    // ldr r3, _0222D354 ; =0x00002BE0
    // add r0, r4, #0
    // add r1, r4, r3
    // add r3, #0x10
    // ldr r3, [r4, r3]
    // mov r2, #9
    // bl ov74_0222D9E0
    // mov r0, #0xc
    // pop {r4, pc}
    // _0222D34C: .word 0x00002BA0
    // _0222D350: .word 0x00002BD0
    // _0222D354: .word 0x00002BE0
    // TODO: decompile
}



void ov74_0222D358(void) {
    // push {r4, lr}
    // bl OverlayManager_GetData
    // add r4, r0, #0
    // bl ov74_0222D448
    // ldr r0, _0222D400 ; =0x00002BD0
    // mov r1, #0x40
    // add r0, r4, r0
    // bl ov74_0222D1D4
    // ldr r0, _0222D400 ; =0x00002BD0
    // mov r1, #0x13
    // add r0, r4, r0
    // bl WaitingIcon_New
    // ldr r1, _0222D404 ; =0x00003D50
    // str r0, [r4, r1]
    // ldr r1, _0222D408 ; =0x00002BA0
    // ldr r0, [r4, r1]
    // add r1, #0x20
    // ldr r1, [r4, r1]
    // bl SaveMysteryGift_HasAnyGift
    // cmp r0, #1
    // ldr r1, _0222D408 ; =0x00002BA0
    // bne _0222D39A
    // ldr r0, [r4, r1]
    // add r1, #0x20
    // ldr r1, [r4, r1]
    // bl SaveMysteryGift_ReceiveGiftAndClearCardByIndex
    // b _0222D3A4
    // ldr r0, [r4, r1]
    // add r1, #0x20
    // ldr r1, [r4, r1]
    // bl SaveMysteryGift_DeleteWonderCardByIndex
    // ldr r0, _0222D40C ; =0x00002BA4
    // ldr r0, [r4, r0]
    // bl SaveGameNormal
    // ldr r0, _0222D404 ; =0x00003D50
    // ldr r0, [r4, r0]
    // bl sub_0200F450
    // ldr r0, _0222D408 ; =0x00002BA0
    // ldr r0, [r4, r0]
    // bl SaveMysteryGift_HasAnyCard
    // cmp r0, #0
    // bne _0222D3C4
    // mov r0, #0x1b
    // pop {r4, pc}
    // mov r1, #0xaf
    // lsl r1, r1, #6
    // ldr r1, [r4, r1]
    // add r0, r4, #0
    // mov r2, #1
    // bl ov74_0222DAF8
    // mov r1, #0xaf
    // lsl r1, r1, #6
    // str r0, [r4, r1]
    // add r1, #0x10
    // add r0, r4, r1
    // mov r1, #0x25
    // bl ov74_0222D1D4
    // ldr r3, _0222D410 ; =0x00002BE0
    // add r0, r4, #0
    // add r1, r4, r3
    // add r3, #0x10
    // ldr r3, [r4, r3]
    // mov r2, #8
    // bl ov74_0222D9E0
    // add r0, r4, #0
    // mov r1, #1
    // mov r2, #0
    // bl ov74_0222D824
    // mov r0, #5
    // pop {r4, pc}
    // _0222D400: .word 0x00002BD0
    // _0222D404: .word 0x00003D50
    // _0222D408: .word 0x00002BA0
    // _0222D40C: .word 0x00002BA4
    // _0222D410: .word 0x00002BE0
    // TODO: decompile
}



void ov74_0222D414(void) {
    // push {r4, lr}
    // bl OverlayManager_GetData
    // add r4, r0, #0
    // bl ov74_0222D448
    // ldr r0, _0222D440 ; =0x00002BD0
    // mov r1, #0x25
    // add r0, r4, r0
    // bl ov74_0222D1D4
    // ldr r3, _0222D444 ; =0x00002BE0
    // add r0, r4, #0
    // add r1, r4, r3
    // add r3, #0x10
    // ldr r3, [r4, r3]
    // mov r2, #8
    // bl ov74_0222D9E0
    // mov r0, #5
    // pop {r4, pc}
    // nop
    // _0222D440: .word 0x00002BD0
    // _0222D444: .word 0x00002BE0
    // TODO: decompile
}



void ov74_0222D448(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _0222D484 ; =0x00002BCC
    // ldr r0, [r4, r0]
    // bl ListMenuItems_Delete
    // mov r1, #0
    // ldr r0, _0222D484 ; =0x00002BCC
    // add r2, r1, #0
    // str r1, [r4, r0]
    // sub r0, r0, #4
    // ldr r0, [r4, r0]
    // bl DestroyListMenu
    // ldr r0, _0222D488 ; =0x00002BC8
    // mov r1, #0
    // str r1, [r4, r0]
    // add r0, #0x18
    // add r0, r4, r0
    // bl ov74_0222D0EC
    // ldr r0, _0222D48C ; =0x00002BE0
    // add r0, r4, r0
    // bl ClearWindowTilemapAndCopyToVram
    // ldr r0, _0222D48C ; =0x00002BE0
    // add r0, r4, r0
    // bl RemoveWindow
    // pop {r4, pc}
    // _0222D484: .word 0x00002BCC
    // _0222D488: .word 0x00002BC8
    // _0222D48C: .word 0x00002BE0
    // TODO: decompile
}



u8 ov74_0222D490(void) {
}



void ov74_0222D494(void) {
    String_New(0x25, *((u32*)r0));
    // ldr r2, [r5, r1]
    // sub r1, #0xc
    // add r2, r5, r2
    // ldr r2, [r2, r1]
    // add r1, r2, r1
    CopyU16ArrayToStringN((0x41 << 2), 0x24);
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r4, [sp, #8]
    // str r3, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r7, 1, r6, 0);
    String_Delete(r6);
}



void ov74_0222D4E4(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x10
    // add r4, r0, #0
    // mov r0, #0xaf
    // lsl r0, r0, #6
    // add r6, r1, #0
    // ldr r1, [r4, r0]
    // add r5, r2, #0
    // lsl r2, r1, #2
    // add r3, r4, r2
    // add r2, r0, #0
    // sub r2, #0xc
    // ldr r3, [r3, r2]
    // ldr r2, _0222D558 ; =0x00000152
    // ldrb r2, [r3, r2]
    // lsl r2, r2, #0x1c
    // lsr r2, r2, #0x1f
    // bne _0222D50C
    // mov r2, #0x28
    // b _0222D522
    // sub r0, #0x20
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // beq _0222D51C
    // bl SaveMysteryGift_HasAnyGift
    // cmp r0, #1
    // bne _0222D520
    // mov r2, #0x26
    // b _0222D522
    // mov r2, #0x27
    // mov r1, #0x2a
    // lsl r1, r1, #8
    // ldr r0, [r4, r1]
    // add r1, r1, #4
    // ldr r1, [r4, r1]
    // ldr r3, [r4]
    // bl ReadMsgData_ExpandPlaceholders
    // add r4, r0, #0
    // mov r3, #0
    // str r3, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // str r5, [sp, #8]
    // add r0, r6, #0
    // mov r1, #1
    // add r2, r4, #0
    // str r3, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r4, #0
    // bl String_Delete
    // mov r0, #1
    // add sp, #0x10
    // pop {r4, r5, r6, pc}
    // nop
    // _0222D558: .word 0x00000152
    // TODO: decompile
}



void ov74_0222D55C(void) {
    // ldr r2, [r4, r1]
    // sub r1, #0xc
    // add r2, r4, r2
    // ldr r2, [r2, r1]
    // ldr r1, [r2, r1]
    // add r0, sp, #8
    RTC_ConvertDayToDate((0xd5 << 2), (r2 << 2));
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r3, [sp, #8]
    // add r2, r3, r2
    // ldr r0, [r4, r0]
    BufferIntegerAsString((0x2a << 8), 0, (0x7d << 4), 4);
    // ldr r0, [r4, r0]
    // ldr r2, [sp, #0xc]
    BufferMonthNameAbbr((0x2a << 8), 1);
    // str r1, [sp]
    // str r0, [sp, #4]
    // ldr r0, [r4, r0]
    // ldr r2, [sp, #0x10]
    BufferIntegerAsString((0x2a << 8), 2, 2);
}



void ov74_0222D5C4(void) {
    String_New(0xfb, 0x55);
    // ldr r2, [r5, r1]
    // sub r1, #0xc
    // add r2, r5, r2
    // ldr r2, [r2, r1]
    // add r1, r2, r1
    CopyU16ArrayToStringN((0x55 << 2), 0xfa);
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r4, [sp, #8]
    // str r3, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r7, 1, r6, 0);
    String_Delete(r6);
}



void ov74_0222D614(void) {
    // ldr r1, [r3, r0]
    // sub r0, #0xc
    // add r1, r3, r1
    // ldr r1, [r1, r0]
    // ldrb r2, [r1, r0]
    // ldr r0, [r3, r1]
    // ldr r1, [r3, r1]
    ReadMsgData_ExpandPlaceholders((0xd2 << 2), ((0x2a << 8) + 4), 0x34, 0x55);
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r5, [sp, #8]
    // str r3, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r6, 1, r0, 0);
    String_Delete(r4);
    // str r1, [sp]
    // str r0, [sp, #4]
    // ldr r0, [r3, r0]
    BufferIntegerAsString((0x2a << 8), 0, 3);
}



void ov74_0222D690(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x34
    // add r5, r0, #0
    // mov r0, #0
    // add r7, r1, #0
    // add r1, r0, #1
    // ldr r0, _0222D764 ; =ov74_0223C2D0
    // ldr r2, _0222D764 ; =ov74_0223C2D0
    // ldr r0, [r0, #0x30]
    // ldr r2, [r2, #0x34]
    // str r0, [sp, #0x14]
    // mov r0, #0xaf
    // lsl r0, r0, #6
    // str r2, [sp, #0x18]
    // ldr r2, [r5, r0]
    // sub r0, #0xc
    // lsl r2, r2, #2
    // add r2, r5, r2
    // ldr r2, [r2, r0]
    // mov r0, #0xd2
    // lsl r0, r0, #2
    // ldrb r0, [r2, r0]
    // add r4, r1, #0
    // add r6, sp, #0x14
    // cmp r0, #0
    // beq _0222D6D6
    // ldr r0, _0222D764 ; =ov74_0223C2D0
    // ldr r2, _0222D764 ; =ov74_0223C2D0
    // ldr r0, [r0, #0x38]
    // add r4, r1, #1
    // lsl r1, r1, #3
    // ldr r2, [r2, #0x3c]
    // add r3, r6, r1
    // str r0, [r6, r1]
    // str r2, [r3, #4]
    // ldr r0, _0222D764 ; =ov74_0223C2D0
    // ldr r2, _0222D764 ; =ov74_0223C2D0
    // ldr r0, [r0, #0x40]
    // lsl r1, r4, #3
    // add r6, sp, #0x14
    // str r0, [r6, r1]
    // ldr r2, [r2, #0x44]
    // add r3, r6, r1
    // add r0, r4, #1
    // lsl r1, r0, #3
    // str r2, [r3, #4]
    // ldr r0, _0222D764 ; =ov74_0223C2D0
    // ldr r2, _0222D764 ; =ov74_0223C2D0
    // ldr r0, [r0, #0x48]
    // ldr r2, [r2, #0x4c]
    // str r0, [r6, r1]
    // add r3, r6, r1
    // ldr r0, _0222D768 ; =0x00002B9C
    // str r2, [r3, #4]
    // ldr r6, [r5, r0]
    // add r0, r7, #0
    // bl ClearWindowTilemapAndCopyToVram
    // add r0, r7, #0
    // bl RemoveWindow
    // add r1, r4, #2
    // mov r0, #4
    // sub r0, r0, r1
    // ldr r1, [r6, #8]
    // lsl r0, r0, #1
    // add r1, r1, r0
    // lsl r1, r1, #0x18
    // lsr r1, r1, #0x18
    // str r1, [sp]
    // ldr r1, [r6, #0xc]
    // mov r2, #2
    // lsl r1, r1, #0x18
    // lsr r1, r1, #0x18
    // str r1, [sp, #4]
    // ldr r1, [r6, #0x10]
    // sub r0, r1, r0
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #8]
    // mov r0, #0xf
    // str r0, [sp, #0xc]
    // ldr r0, _0222D76C ; =0x00002B98
    // add r1, r7, #0
    // ldr r0, [r5, r0]
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp, #0x10]
    // ldr r0, _0222D770 ; =0x000029FC
    // ldr r3, [r6, #4]
    // ldr r0, [r5, r0]
    // lsl r3, r3, #0x18
    // lsr r3, r3, #0x18
    // bl AddWindowParameterized
    // mov r0, #0
    // str r0, [sp]
    // add r0, r5, #0
    // add r1, sp, #0x14
    // add r2, r4, #2
    // add r3, r7, #0
    // bl ov74_0222D11C
    // mov r0, #1
    // add sp, #0x34
    // pop {r4, r5, r6, r7, pc}
    // _0222D764: .word ov74_0223C2D0
    // _0222D768: .word 0x00002B9C
    // _0222D76C: .word 0x00002B98
    // _0222D770: .word 0x000029FC
    // TODO: decompile
}



void ov74_0222D774(void) {
}



void ov74_0222D78C(void) {
}



void ov74_0222D7A4(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, _0222D7C8 ; =0x00002BD0
    // add r4, r1, #0
    // add r0, r5, r0
    // mov r1, #2
    // bl ov74_0222D1D4
    // mov r0, #0
    // str r0, [sp]
    // ldr r1, _0222D7CC ; =ov74_0223C2E0
    // add r0, r5, #0
    // mov r2, #2
    // add r3, r4, #0
    // bl ov74_0222D11C
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // _0222D7C8: .word 0x00002BD0
    // _0222D7CC: .word ov74_0223C2E0
    // TODO: decompile
}



void ov74_0222D7D0(void) {
}



void ov74_0222D7F0(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, r1, 0);
    // str r0, [r4]
    // str r6, [r5, r0]
}



void ov74_0222D824(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x34
    // add r5, r0, #0
    // ldr r3, [r5]
    // str r2, [sp, #0x14]
    // mov r0, #1
    // mov r1, #0x1b
    // mov r2, #0xf7
    // ldr r4, _0222D9C8 ; =ov74_0223C340
    // bl NewMsgDataFromNarc
    // ldr r1, _0222D9CC ; =0x00002A04
    // str r0, [r5, r1]
    // ldr r0, [r5]
    // bl MessageFormat_New
    // mov r1, #0x2a
    // lsl r1, r1, #8
    // str r0, [r5, r1]
    // ldr r1, _0222D9D0 ; =0x00002BC4
    // ldr r0, [sp, #0x14]
    // str r0, [r5, r1]
    // ldr r1, [sp, #0x14]
    // add r0, r5, #0
    // bl ov74_0222DB70
    // mov r0, #0
    // str r0, [sp, #0x30]
    // ldr r0, _0222D9D4 ; =0x00002A08
    // add r7, r4, #0
    // str r5, [sp, #0x1c]
    // add r6, r5, r0
    // ldr r1, [r7]
    // ldr r0, [sp, #0x14]
    // cmp r0, r1
    // beq _0222D886
    // cmp r1, #2
    // beq _0222D886
    // ldr r1, [sp, #0x1c]
    // ldr r0, _0222D9D4 ; =0x00002A08
    // ldr r0, [r1, r0]
    // cmp r0, #0
    // beq _0222D886
    // add r0, r6, #0
    // bl ClearWindowTilemapAndCopyToVram
    // add r0, r6, #0
    // bl RemoveWindow
    // ldr r0, [sp, #0x1c]
    // add r7, #0x30
    // add r0, #0x10
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x30]
    // add r6, #0x10
    // add r0, r0, #1
    // str r0, [sp, #0x30]
    // cmp r0, #0x13
    // blo _0222D864
    // mov r0, #0x31
    // str r0, [sp, #0x2c]
    // mov r0, #0
    // str r0, [sp, #0x18]
    // ldr r0, _0222D9D4 ; =0x00002A08
    // str r5, [sp, #0x24]
    // str r5, [sp, #0x20]
    // add r6, r5, r0
    // ldr r1, [r4]
    // ldr r0, [sp, #0x14]
    // cmp r0, r1
    // bne _0222D98A
    // ldr r1, [sp, #0x24]
    // ldr r0, _0222D9D4 ; =0x00002A08
    // ldr r0, [r1, r0]
    // cmp r0, #0
    // bne _0222D8FA
    // ldr r2, [sp, #0x2c]
    // ldr r1, [sp, #0x20]
    // ldr r0, _0222D9D8 ; =0x00002B48
    // str r2, [r1, r0]
    // ldr r0, [r4, #8]
    // add r1, r6, #0
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp]
    // ldr r0, [r4, #0xc]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #4]
    // ldr r0, [r4, #0x10]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #8]
    // mov r0, #0xf
    // str r0, [sp, #0xc]
    // add r0, r2, #0
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp, #0x10]
    // ldr r0, _0222D9DC ; =0x000029FC
    // ldr r3, [r4, #4]
    // ldr r0, [r5, r0]
    // lsl r3, r3, #0x18
    // mov r2, #0
    // lsr r3, r3, #0x18
    // bl AddWindowParameterized
    // ldr r0, [r4, #0x14]
    // ldr r1, [r4, #0x1c]
    // lsl r0, r0, #0x18
    // lsl r1, r1, #0x18
    // lsr r0, r0, #0x18
    // lsr r1, r1, #0x18
    // bl GetFontAttribute
    // add r1, r0, #0
    // add r0, r6, #0
    // bl FillWindowPixelBuffer
    // ldr r0, [r4, #0x18]
    // ldr r3, [r4, #0x24]
    // str r0, [sp, #0x28]
    // ldr r2, [sp, #0x28]
    // add r0, r5, #0
    // add r1, r6, #0
    // blx r3
    // cmp r0, #1
    // bne _0222D976
    // ldr r2, [r4, #0x20]
    // cmp r2, #0
    // beq _0222D976
    // mov r0, #0x2a
    // ldr r1, _0222D9CC ; =0x00002A04
    // lsl r0, r0, #8
    // ldr r0, [r5, r0]
    // ldr r1, [r5, r1]
    // ldr r3, [r5]
    // bl ReadMsgData_ExpandPlaceholders
    // add r7, r0, #0
    // mov r0, #0
    // ldr r3, [r4, #0x28]
    // mvn r0, r0
    // cmp r3, r0
    // bne _0222D956
    // ldr r3, [r4, #0xc]
    // ldr r0, [r4, #0x14]
    // add r1, r7, #0
    // mov r2, #0
    // lsl r3, r3, #3
    // bl FontID_String_GetCenterAlignmentX
    // add r3, r0, #0
    // ldr r0, [r4, #0x2c]
    // add r2, r7, #0
    // str r0, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x28]
    // str r0, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // ldr r1, [r4, #0x14]
    // add r0, r6, #0
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r7, #0
    // bl String_Delete
    // add r0, r6, #0
    // bl CopyWindowToVram
    // ldr r1, [r4, #0xc]
    // ldr r0, [r4, #0x10]
    // add r2, r1, #0
    // mul r2, r0
    // ldr r0, [sp, #0x2c]
    // add r0, r0, r2
    // str r0, [sp, #0x2c]
    // ldr r0, [sp, #0x24]
    // add r4, #0x30
    // add r0, #0x10
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #0x20]
    // add r6, #0x10
    // add r0, r0, #4
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x18]
    // add r0, r0, #1
    // str r0, [sp, #0x18]
    // cmp r0, #0x13
    // blo _0222D8AA
    // ldr r0, _0222D9CC ; =0x00002A04
    // ldr r0, [r5, r0]
    // bl DestroyMsgData
    // mov r0, #0x2a
    // lsl r0, r0, #8
    // ldr r0, [r5, r0]
    // bl MessageFormat_Delete
    // ldr r0, [sp, #0x14]
    // cmp r0, #0
    // bne _0222D9C2
    // add r0, r5, #0
    // bl ov74_0222DCD4
    // add sp, #0x34
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _0222D9C8: .word ov74_0223C340
    // _0222D9CC: .word 0x00002A04
    // _0222D9D0: .word 0x00002BC4
    // _0222D9D4: .word 0x00002A08
    // _0222D9D8: .word 0x00002B48
    // _0222D9DC: .word 0x000029FC
    // TODO: decompile
}



void ov74_0222D9E0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x18
    // add r5, r0, #0
    // add r7, r3, #0
    // mov r3, #0x30
    // ldr r0, _0222DAE0 ; =ov74_0223C340
    // mul r3, r2
    // add r6, r1, #0
    // add r4, r0, r3
    // ldr r0, [r6]
    // cmp r0, #0
    // bne _0222DA2A
    // ldr r0, [r4, #8]
    // mov r2, #2
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp]
    // ldr r0, [r4, #0xc]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #4]
    // ldr r0, [r4, #0x10]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #8]
    // mov r0, #0xf
    // str r0, [sp, #0xc]
    // lsl r0, r7, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp, #0x10]
    // ldr r0, _0222DAE4 ; =0x000029FC
    // ldr r3, [r4, #4]
    // ldr r0, [r5, r0]
    // lsl r3, r3, #0x18
    // lsr r3, r3, #0x18
    // bl AddWindowParameterized
    // ldr r1, [r4, #0x1c]
    // add r0, r6, #0
    // lsl r1, r1, #0x18
    // lsr r1, r1, #0x18
    // bl FillWindowPixelBuffer
    // ldr r0, [r4, #0x20]
    // cmp r0, #0
    // beq _0222DA58
    // mov r0, #1
    // mov r1, #0x1b
    // mov r2, #0xf7
    // mov r3, #0x55
    // bl NewMsgDataFromNarc
    // ldr r1, _0222DAE8 ; =0x00002A04
    // str r0, [r5, r1]
    // mov r0, #0x55
    // bl MessageFormat_New
    // mov r1, #0x2a
    // lsl r1, r1, #8
    // str r0, [r5, r1]
    // ldr r0, _0222DAEC ; =0x00002B98
    // ldr r2, _0222DAF0 ; =0x00010200
    // str r7, [r5, r0]
    // add r0, r0, #4
    // str r4, [r5, r0]
    // ldr r3, [r4, #0x24]
    // add r0, r5, #0
    // add r1, r6, #0
    // blx r3
    // ldr r2, [r4, #0x20]
    // cmp r2, #0
    // beq _0222DAB2
    // mov r1, #0x2a
    // lsl r1, r1, #8
    // ldr r0, [r5, r1]
    // add r1, r1, #4
    // ldr r1, [r5, r1]
    // mov r3, #0x55
    // bl ReadMsgData_ExpandPlaceholders
    // str r0, [sp, #0x14]
    // mov r3, #0
    // str r3, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, [r4, #0x18]
    // ldr r2, [sp, #0x14]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // ldr r1, [r4, #0x14]
    // add r0, r6, #0
    // bl AddTextPrinterParameterizedWithColor
    // ldr r0, [sp, #0x14]
    // bl String_Delete
    // ldr r0, _0222DAE8 ; =0x00002A04
    // ldr r0, [r5, r0]
    // bl DestroyMsgData
    // mov r0, #0x2a
    // lsl r0, r0, #8
    // ldr r0, [r5, r0]
    // bl MessageFormat_Delete
    // ldr r0, _0222DAF4 ; =0x00002BD0
    // add r0, r5, r0
    // cmp r6, r0
    // bne _0222DAC8
    // add r0, r6, #0
    // mov r1, #0
    // mov r2, #0x13
    // mov r3, #0xa
    // bl DrawFrameAndWindow2
    // b _0222DAD4
    // add r0, r6, #0
    // mov r1, #0
    // mov r2, #0xa
    // mov r3, #0xe
    // bl DrawFrameAndWindow1
    // ldr r1, [r4, #0xc]
    // ldr r0, [r4, #0x10]
    // mul r0, r1
    // add r0, r7, r0
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // _0222DAE0: .word ov74_0223C340
    // _0222DAE4: .word 0x000029FC
    // _0222DAE8: .word 0x00002A04
    // _0222DAEC: .word 0x00002B98
    // _0222DAF0: .word 0x00010200
    // _0222DAF4: .word 0x00002BD0
    // TODO: decompile
}



void ov74_0222DAF8(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // add r6, r2, #0
    // add r7, r4, #0
    // add r4, r4, r6
    // cmp r4, #3
    // bne _0222DB0A
    // mov r4, #0
    // mov r0, #0
    // mvn r0, r0
    // cmp r4, r0
    // bne _0222DB14
    // mov r4, #2
    // cmp r7, r4
    // beq _0222DB26
    // ldr r0, _0222DB2C ; =0x00002BA0
    // add r1, r4, #0
    // ldr r0, [r5, r0]
    // bl SaveMysteryGift_CardTagIsValid
    // cmp r0, #0
    // beq _0222DB02
    // add r0, r4, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0222DB2C: .word 0x00002BA0
    // TODO: decompile
}



void ov74_0222DB30(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r4, r2, #0
    // mov r2, #1
    // add r5, r0, #0
    // str r2, [sp]
    // add r6, r3, #0
    // ldr r3, [r5]
    // mov r0, #0x71
    // bl GfGfxLoader_LoadFromNarc
    // add r1, sp, #4
    // add r7, r0, #0
    // bl NNS_G2dGetUnpackedScreenData
    // ldr r0, _0222DB6C ; =0x000029FC
    // ldr r2, [sp, #4]
    // lsl r1, r4, #0x18
    // ldr r0, [r5, r0]
    // lsr r1, r1, #0x18
    // add r2, #0xc
    // add r3, r6, #0
    // bl BG_LoadScreenTilemapData
    // add r0, r7, #0
    // bl Heap_Free
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0222DB6C: .word 0x000029FC
    // TODO: decompile
}



void ov74_0222DB70(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // mov r0, #1
    // lsl r0, r0, #8
    // str r0, [sp]
    // ldr r0, [r5]
    // mov r2, #0
    // add r4, r1, #0
    // str r0, [sp, #4]
    // mov r0, #0x71
    // mov r1, #3
    // add r3, r2, #0
    // bl GfGfxLoader_GXLoadPal
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #3
    // lsl r0, r0, #0xc
    // str r0, [sp, #4]
    // mov r3, #1
    // str r3, [sp, #8]
    // ldr r0, [r5]
    // ldr r2, _0222DC5C ; =0x000029FC
    // str r0, [sp, #0xc]
    // ldr r2, [r5, r2]
    // mov r0, #0x71
    // mov r1, #6
    // bl GfGfxLoader_LoadCharData
    // cmp r4, #0
    // beq _0222DBB6
    // cmp r4, #1
    // beq _0222DBD6
    // b _0222DBF4
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #6
    // lsl r0, r0, #8
    // str r0, [sp, #4]
    // mov r3, #1
    // str r3, [sp, #8]
    // ldr r0, [r5]
    // ldr r2, _0222DC5C ; =0x000029FC
    // str r0, [sp, #0xc]
    // ldr r2, [r5, r2]
    // mov r0, #0x71
    // mov r1, #4
    // bl GfGfxLoader_LoadScrnData
    // b _0222DBF4
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #6
    // lsl r0, r0, #8
    // str r0, [sp, #4]
    // mov r3, #1
    // str r3, [sp, #8]
    // ldr r0, [r5]
    // ldr r2, _0222DC5C ; =0x000029FC
    // str r0, [sp, #0xc]
    // ldr r2, [r5, r2]
    // mov r0, #0x71
    // mov r1, #5
    // bl GfGfxLoader_LoadScrnData
    // mov r0, #0x20
    // str r0, [sp]
    // ldr r0, [r5]
    // mov r1, #0
    // str r0, [sp, #4]
    // mov r0, #0x71
    // add r3, r0, #0
    // add r2, r1, #0
    // add r3, #0xef
    // bl GfGfxLoader_GXLoadPal
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #2
    // lsl r0, r0, #8
    // str r0, [sp, #4]
    // mov r1, #1
    // str r1, [sp, #8]
    // ldr r0, [r5]
    // ldr r2, _0222DC5C ; =0x000029FC
    // str r0, [sp, #0xc]
    // ldr r2, [r5, r2]
    // mov r0, #0x71
    // mov r3, #3
    // bl GfGfxLoader_LoadCharData
    // mov r2, #3
    // add r0, r5, #0
    // mov r1, #2
    // lsl r3, r2, #9
    // bl ov74_0222DB30
    // mov r0, #0x20
    // str r0, [sp]
    // mov r0, #0x18
    // str r0, [sp, #4]
    // mov r0, #0xb
    // str r0, [sp, #8]
    // ldr r0, _0222DC5C ; =0x000029FC
    // mov r2, #0
    // ldr r0, [r5, r0]
    // mov r1, #3
    // add r3, r2, #0
    // bl BgTilemapRectChangePalette
    // ldr r0, _0222DC5C ; =0x000029FC
    // mov r1, #3
    // ldr r0, [r5, r0]
    // bl BgCommitTilemapBufferToVram
    // add sp, #0x10
    // pop {r3, r4, r5, pc}
    // _0222DC5C: .word 0x000029FC
    // TODO: decompile
}



void ov74_0222DC60(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r7, r0, #0
    // add r5, r1, #0
    // add r6, r2, #0
    // bl OverlayManager_GetData
    // ldr r1, _0222DCC8 ; =0x00002BC8
    // ldr r0, [r0, r1]
    // bl ListMenu_ProcessInput
    // add r4, r0, #0
    // mov r0, #1
    // mvn r0, r0
    // cmp r4, r0
    // beq _0222DC86
    // add r0, r0, #1
    // cmp r4, r0
    // beq _0222DCC4
    // b _0222DCA0
    // ldr r0, _0222DCCC ; =SEQ_SE_DP_SELECT
    // bl PlaySE
    // cmp r6, #0
    // beq _0222DCC4
    // add r0, r7, #0
    // blx r6
    // mov r1, #0
    // mvn r1, r1
    // cmp r0, r1
    // beq _0222DCC4
    // str r0, [r5]
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, _0222DCCC ; =SEQ_SE_DP_SELECT
    // bl PlaySE
    // cmp r4, #0
    // beq _0222DCC4
    // cmp r4, #0x1f
    // bhs _0222DCB2
    // str r4, [r5]
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, _0222DCD0 ; =ov74_0223D0BC
    // str r4, [r0]
    // add r0, r7, #0
    // blx r4
    // mov r1, #0
    // mvn r1, r1
    // cmp r0, r1
    // beq _0222DCC4
    // str r0, [r5]
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0222DCC8: .word 0x00002BC8
    // _0222DCCC: .word SEQ_SE_DP_SELECT
    // _0222DCD0: .word ov74_0223D0BC
    // TODO: decompile
}



void ov74_0222DCD4(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x1c
    // ldr r1, _0222DDF0 ; =0x00002DCC
    // add r6, r0, #0
    // ldr r0, [r6, r1]
    // cmp r0, #0
    // bne _0222DD34
    // add r0, r1, #4
    // ldr r0, [r6, r0]
    // cmp r0, #0
    // bne _0222DD34
    // add r1, #8
    // ldr r0, [r6, r1]
    // cmp r0, #0
    // bne _0222DD34
    // bl ov74_0223567C
    // cmp r0, #1
    // bne _0222DD00
    // add r0, r6, #0
    // bl ov74_0222D024
    // bl ov74_0223563C
    // bl ov74_02235690
    // mov r0, #0x1c
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // mov r0, #0x71
    // mov r1, #0x1e
    // mov r2, #0x1b
    // mov r3, #0x1d
    // bl ov74_02235728
    // bl sub_02074490
    // add r1, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, [r6]
    // mov r2, #1
    // str r0, [sp, #4]
    // mov r0, #0x14
    // mov r3, #0x60
    // bl GfGfxLoader_GXLoadPal
    // mov r0, #0xb2
    // mov r4, #0
    // str r0, [sp, #0x10]
    // str r4, [sp, #0xc]
    // add r5, r6, #0
    // mov r7, #0x64
    // mov r0, #0xaf
    // lsl r0, r0, #6
    // ldr r0, [r6, r0]
    // lsl r0, r0, #2
    // add r1, r6, r0
    // ldr r0, _0222DDF4 ; =0x00002BB4
    // ldr r0, [r1, r0]
    // add r1, r0, r4
    // ldr r0, _0222DDF8 ; =0x0000034A
    // ldrh r0, [r1, r0]
    // str r0, [sp, #8]
    // cmp r0, #0
    // bne _0222DD6A
    // ldr r0, _0222DDF0 ; =0x00002DCC
    // ldr r0, [r5, r0]
    // cmp r0, #0
    // beq _0222DDD4
    // mov r1, #0
    // bl Sprite_SetDrawFlag
    // b _0222DDD4
    // ldr r0, [sp, #0xc]
    // ldr r1, _0222DDF0 ; =0x00002DCC
    // add r0, #0xa
    // str r0, [sp]
    // ldr r1, [r5, r1]
    // ldr r2, [sp, #0x10]
    // mov r0, #0
    // mov r3, #0x10
    // bl ov74_02235930
    // ldr r1, _0222DDF0 ; =0x00002DCC
    // str r0, [r5, r1]
    // mov r1, #0
    // ldr r0, [sp, #8]
    // add r2, r1, #0
    // bl GetMonIconNaixEx
    // add r1, r0, #0
    // ldr r0, [r6]
    // mov r2, #0
    // str r0, [sp]
    // mov r0, #0x14
    // add r3, sp, #0x18
    // bl GfGfxLoader_GetCharData
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x18]
    // mov r1, #2
    // ldr r0, [r0, #0x14]
    // lsl r1, r1, #8
    // bl DC_FlushRange
    // ldr r0, [sp, #0x18]
    // mov r2, #2
    // ldr r0, [r0, #0x14]
    // lsl r1, r7, #5
    // lsl r2, r2, #8
    // bl GX_LoadOBJ
    // mov r1, #0
    // ldr r0, [sp, #8]
    // add r2, r1, #0
    // bl GetMonIconPaletteEx
    // add r1, r0, #0
    // ldr r0, _0222DDF0 ; =0x00002DCC
    // add r1, r1, #3
    // ldr r0, [r5, r0]
    // bl Sprite_SetPaletteOverride
    // ldr r0, [sp, #0x14]
    // bl Heap_Free
    // ldr r0, [sp, #0xc]
    // add r4, r4, #2
    // add r0, r0, #1
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x10]
    // add r5, r5, #4
    // add r0, #0x19
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0xc]
    // add r7, #0x10
    // cmp r0, #3
    // blt _0222DD40
    // add sp, #0x1c
    // pop {r4, r5, r6, r7, pc}
    // _0222DDF0: .word 0x00002DCC
    // _0222DDF4: .word 0x00002BB4
    // _0222DDF8: .word 0x0000034A
    // TODO: decompile
}



void ov74_0222DDFC(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r0, #3
    // mov r1, #0x55
    // lsl r2, r0, #0x10
    // bl Heap_Create
    // ldr r1, _0222DE60 ; =0x00003D54
    // add r0, r4, #0
    // mov r2, #0x55
    // bl OverlayManager_CreateAndGetData
    // ldr r2, _0222DE60 ; =0x00003D54
    // mov r1, #0
    // add r4, r0, #0
    // bl memset
    // mov r0, #0x55
    // bl BgConfig_Alloc
    // ldr r1, _0222DE64 ; =0x000029FC
    // str r0, [r4, r1]
    // mov r0, #0x55
    // str r0, [r4]
    // mov r0, #0
    // add r1, r0, #0
    // bl sub_0200FBF4
    // mov r0, #1
    // mov r1, #0
    // bl sub_0200FBF4
    // mov r0, #0xaf
    // mov r1, #2
    // lsl r0, r0, #6
    // str r1, [r4, r0]
    // mov r1, #1
    // add r0, #0x7c
    // str r1, [r4, r0]
    // mov r0, #0x55
    // bl ov74_022352A0
    // mov r2, #0x57
    // mov r0, #0
    // mov r1, #0x59
    // lsl r2, r2, #4
    // bl Heap_Create
    // mov r0, #1
    // pop {r4, pc}
    // _0222DE60: .word 0x00003D54
    // _0222DE64: .word 0x000029FC
    // TODO: decompile
}



void ov74_0222DE68(void) {
    // push {r4, lr}
    // add r4, r1, #0
    // bl sub_02014AA0
    // mov r0, #3
    // lsl r0, r0, #0xa
    // ldr r0, [r4, r0]
    // bl sub_02014A60
    // ldr r1, _0222DE88 ; =0x04000010
    // mov r2, #8
    // mov r3, #1
    // bl sub_02014AB0
    // pop {r4, pc}
    // nop
    // _0222DE88: .word 0x04000010
    // TODO: decompile
}



void ov74_0222DE8C(void) {
    // push {r3, r4, r5, lr}
    // ldr r4, _0222DEE0 ; =0x00003130
    // ldr r5, _0222DEE4 ; =0x00000C14
    // add r4, r0, r4
    // add r0, r5, #0
    // str r1, [r4, r5]
    // sub r0, #0xc
    // str r2, [r4, r0]
    // add r0, r5, #0
    // sub r0, #8
    // sub r5, #0x14
    // str r3, [r4, r0]
    // ldr r0, [r4, r5]
    // cmp r0, #0
    // bne _0222DEBE
    // mov r2, #6
    // lsl r2, r2, #8
    // mov r0, #0x55
    // add r1, r4, #0
    // add r2, r4, r2
    // bl sub_02014A08
    // mov r1, #3
    // lsl r1, r1, #0xa
    // str r0, [r4, r1]
    // ldr r0, _0222DEE8 ; =0x00000C04
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // bne _0222DED6
    // mov r2, #1
    // ldr r0, _0222DEEC ; =ov74_0222DE68
    // add r1, r4, #0
    // lsl r2, r2, #0xa
    // bl SysTask_CreateOnVBlankQueue
    // ldr r1, _0222DEE8 ; =0x00000C04
    // str r0, [r4, r1]
    // mov r0, #0xc1
    // mov r1, #1
    // lsl r0, r0, #4
    // str r1, [r4, r0]
    // pop {r3, r4, r5, pc}
    // _0222DEE0: .word 0x00003130
    // _0222DEE4: .word 0x00000C14
    // _0222DEE8: .word 0x00000C04
    // _0222DEEC: .word ov74_0222DE68
    // TODO: decompile
}



void ov74_0222DEF0(void) {
    // push {r4, lr}
    // ldr r1, _0222DF24 ; =0x00003130
    // add r4, r0, r1
    // mov r0, #3
    // lsl r0, r0, #0xa
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // beq _0222DF04
    // bl sub_02014A38
    // ldr r0, _0222DF28 ; =0x00000C04
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // beq _0222DF10
    // bl SysTask_Destroy
    // mov r0, #3
    // mov r1, #0
    // lsl r0, r0, #0xa
    // str r1, [r4, r0]
    // add r0, r0, #4
    // str r1, [r4, r0]
    // bl sub_02014AA0
    // pop {r4, pc}
    // nop
    // _0222DF24: .word 0x00003130
    // _0222DF28: .word 0x00000C04
    // TODO: decompile
}



void ov74_0222DF2C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // ldr r1, _0222E034 ; =0x00003130
    // mov r5, #0x15
    // add r4, r0, r1
    // mov r0, #0xc1
    // lsl r0, r0, #4
    // ldr r1, [r4, r0]
    // lsl r5, r5, #0xe
    // cmp r1, #0
    // bne _0222DF44
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // add r1, r0, #4
    // ldr r1, [r4, r1]
    // cmp r1, #1
    // bne _0222DF92
    // add r1, r0, #0
    // sub r1, #8
    // ldr r2, [r4, r1]
    // sub r1, r0, #4
    // ldr r1, [r4, r1]
    // add r2, r2, r1
    // add r1, r0, #0
    // sub r1, #8
    // str r2, [r4, r1]
    // sub r1, r0, #4
    // ldr r2, [r4, r1]
    // add r1, r2, #0
    // add r2, r2, r1
    // sub r1, r0, #4
    // str r2, [r4, r1]
    // add r1, r0, #0
    // sub r1, #8
    // ldr r2, [r4, r1]
    // asr r1, r2, #0xb
    // lsr r1, r1, #0x14
    // add r1, r2, r1
    // asr r2, r1, #0xc
    // mov r1, #0xfa
    // lsl r1, r1, #2
    // cmp r2, r1
    // ble _0222DFCC
    // mov r2, #0
    // add r1, r0, #0
    // str r2, [r4, r0]
    // sub r1, #8
    // str r2, [r4, r1]
    // sub r0, r0, #4
    // mov r5, #0xa8
    // str r2, [r4, r0]
    // b _0222DFCC
    // add r1, r0, #0
    // sub r1, #8
    // ldr r2, [r4, r1]
    // sub r1, r0, #4
    // ldr r1, [r4, r1]
    // sub r2, r2, r1
    // add r1, r0, #0
    // sub r1, #8
    // str r2, [r4, r1]
    // sub r1, r0, #4
    // ldr r2, [r4, r1]
    // lsr r1, r2, #0x1f
    // add r1, r2, r1
    // asr r2, r1, #1
    // sub r1, r0, #4
    // str r2, [r4, r1]
    // mov r2, #1
    // ldr r1, [r4, r1]
    // lsl r2, r2, #0xa
    // cmp r1, r2
    // bge _0222DFCC
    // mov r1, #0
    // lsl r3, r2, #2
    // add r2, r0, #0
    // str r1, [r4, r0]
    // sub r2, #8
    // str r3, [r4, r2]
    // sub r0, r0, #4
    // str r1, [r4, r0]
    // mov r0, #3
    // lsl r0, r0, #0xa
    // ldr r0, [r4, r0]
    // bl sub_02014A4C
    // add r2, r0, #0
    // mov r0, #0x54
    // add r3, r0, #0
    // add r3, #0xfc
    // asr r1, r5, #0xb
    // lsr r1, r1, #0x14
    // add r1, r5, r1
    // asr r1, r1, #0xc
    // bpl _0222DFEA
    // mov r1, #0
    // cmp r1, #0xa8
    // ble _0222DFF0
    // mov r1, #0xa8
    // lsl r6, r3, #1
    // add r7, r2, r6
    // sub r6, r1, r0
    // strh r6, [r7, #6]
    // ldrh r6, [r7, #6]
    // sub r1, r0, r1
    // add r3, r3, #4
    // strh r6, [r7, #2]
    // mov r6, #0xa8
    // sub r6, r6, r0
    // lsl r6, r6, #3
    // add r6, r2, r6
    // strh r1, [r6, #6]
    // ldrh r1, [r6, #6]
    // add r0, r0, #1
    // strh r1, [r6, #2]
    // ldr r1, _0222E038 ; =0x00000C08
    // ldr r1, [r4, r1]
    // add r5, r5, r1
    // cmp r0, #0xa8
    // blt _0222DFDE
    // mov r1, #6
    // add r0, r2, #0
    // lsl r1, r1, #8
    // bl DC_FlushRange
    // mov r0, #3
    // lsl r0, r0, #0xa
    // ldr r0, [r4, r0]
    // bl sub_02014A8C
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0222E034: .word 0x00003130
    // _0222E038: .word 0x00000C08
    // TODO: decompile
}



void ov74_0222E03C(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl ov74_022360B0
    // sub r0, r0, #2
    // cmp r0, #1
    // bhi _0222E056
    // ldr r0, _0222E058 ; =SEQ_SE_DP_SAVE
    // bl PlaySE
    // ldr r0, _0222E05C ; =0x00003D48
    // mov r1, #0
    // str r1, [r4, r0]
    // pop {r4, pc}
    // _0222E058: .word SEQ_SE_DP_SAVE
    // _0222E05C: .word 0x00003D48
    // TODO: decompile
}



void ov74_0222E060(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r0, #0xaf
    // lsl r0, r0, #6
    // ldr r0, [r4, r0]
    // cmp r0, #3
    // blt _0222E072
    // bl GF_AssertFail
    // mov r0, #0x1b
    // bl SaveSubstruct_AssertCRC
    // mov r0, #0xaf
    // lsl r0, r0, #6
    // ldr r1, [r4, r0]
    // sub r0, #0xc
    // lsl r1, r1, #2
    // add r1, r4, r1
    // ldr r2, [r1, r0]
    // mov r0, #0x35
    // lsl r0, r0, #4
    // ldrb r1, [r2, r0]
    // cmp r1, #0xff
    // beq _0222E094
    // add r1, r1, #1
    // strb r1, [r2, r0]
    // mov r0, #0xaf
    // lsl r0, r0, #6
    // ldr r1, [r4, r0]
    // sub r0, #0xc
    // lsl r1, r1, #2
    // add r1, r4, r1
    // ldr r2, [r1, r0]
    // mov r0, #0xd2
    // lsl r0, r0, #2
    // ldrb r1, [r2, r0]
    // cmp r1, #0xff
    // beq _0222E0B0
    // sub r1, r1, #1
    // strb r1, [r2, r0]
    // mov r0, #0x1b
    // bl SaveSubstruct_UpdateCRC
    // ldr r0, _0222E0C8 ; =0x00002BA4
    // ldr r0, [r4, r0]
    // bl ov74_022360A0
    // ldr r1, _0222E0CC ; =ov74_0222E03C
    // ldr r0, _0222E0D0 ; =0x00003D48
    // str r1, [r4, r0]
    // pop {r4, pc}
    // nop
    // _0222E0C8: .word 0x00002BA4
    // _0222E0CC: .word ov74_0222E03C
    // _0222E0D0: .word 0x00003D48
    // TODO: decompile
}



void ov74_0222E0D4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r7, r2, #0
    // ldr r2, _0222E1D4 ; =gSystem
    // add r6, r1, #0
    // ldr r3, [r2, #0x48]
    // ldr r1, _0222E1D8 ; =0x00003D4C
    // add r5, r0, #0
    // mov r2, #0x10
    // ldr r0, [r5, r1]
    // tst r2, r3
    // beq _0222E0F2
    // cmp r0, #1
    // beq _0222E0F2
    // mov r2, #1
    // str r2, [r5, r1]
    // ldr r1, _0222E1D4 ; =gSystem
    // ldr r2, [r1, #0x48]
    // mov r1, #0x20
    // tst r1, r2
    // beq _0222E108
    // ldr r1, _0222E1D8 ; =0x00003D4C
    // ldr r2, [r5, r1]
    // cmp r2, #0
    // beq _0222E108
    // mov r2, #0
    // str r2, [r5, r1]
    // ldr r1, _0222E1D8 ; =0x00003D4C
    // ldr r1, [r5, r1]
    // cmp r0, r1
    // beq _0222E138
    // cmp r1, #0
    // bne _0222E118
    // mov r1, #1
    // b _0222E11A
    // mov r1, #0
    // ldr r0, _0222E1DC ; =0x00002DC4
    // ldr r0, [r5, r0]
    // bl Sprite_SetAnimCtrlSeq
    // ldr r0, _0222E1D8 ; =0x00003D4C
    // ldr r0, [r5, r0]
    // cmp r0, #0
    // beq _0222E12E
    // mov r1, #1
    // b _0222E130
    // mov r1, #0
    // ldr r0, _0222E1E0 ; =0x00002DC8
    // ldr r0, [r5, r0]
    // bl Sprite_SetAnimCtrlSeq
    // ldr r0, _0222E1D4 ; =gSystem
    // mov r4, #0
    // ldr r1, [r0, #0x48]
    // mov r0, #2
    // add r2, r1, #0
    // tst r2, r0
    // beq _0222E14A
    // add r4, r0, #0
    // b _0222E17A
    // mov r0, #1
    // and r1, r0
    // beq _0222E160
    // cmp r6, #0
    // beq _0222E160
    // ldr r2, _0222E1D8 ; =0x00003D4C
    // ldr r2, [r5, r2]
    // cmp r2, #0
    // bne _0222E160
    // add r4, r0, #0
    // b _0222E17A
    // cmp r1, #0
    // beq _0222E170
    // ldr r0, _0222E1D8 ; =0x00003D4C
    // ldr r0, [r5, r0]
    // cmp r0, #1
    // bne _0222E170
    // mov r4, #2
    // b _0222E17A
    // cmp r1, #0
    // beq _0222E17A
    // cmp r6, #0
    // bne _0222E17A
    // mov r4, #3
    // cmp r4, #1
    // bne _0222E1B2
    // ldr r0, _0222E1E4 ; =SEQ_SE_DP_SELECT
    // bl PlaySE
    // mov r0, #0xab
    // bl sub_02037AC0
    // mov r3, #0xa
    // ldr r1, _0222E1E8 ; =0x00002C34
    // mov r0, #1
    // str r0, [r5, r1]
    // mov r0, #0x16
    // sub r1, #0x64
    // str r0, [r7]
    // add r0, r5, #0
    // add r1, r5, r1
    // mov r2, #0x11
    // lsl r3, r3, #6
    // bl ov74_0222D9E0
    // ldr r0, _0222E1EC ; =0x00002BD0
    // mov r1, #0x13
    // add r0, r5, r0
    // bl WaitingIcon_New
    // ldr r1, _0222E1F0 ; =0x00003D50
    // str r0, [r5, r1]
    // cmp r4, #2
    // bne _0222E1C6
    // ldr r0, _0222E1E4 ; =SEQ_SE_DP_SELECT
    // bl PlaySE
    // add r0, r5, #0
    // add r1, r7, #0
    // mov r2, #0x14
    // bl ov74_0222EB28
    // cmp r4, #3
    // bne _0222E1D0
    // ldr r0, _0222E1E4 ; =SEQ_SE_DP_SELECT
    // bl PlaySE
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0222E1D4: .word gSystem
    // _0222E1D8: .word 0x00003D4C
    // _0222E1DC: .word 0x00002DC4
    // _0222E1E0: .word 0x00002DC8
    // _0222E1E4: .word SEQ_SE_DP_SELECT
    // _0222E1E8: .word 0x00002C34
    // _0222E1EC: .word 0x00002BD0
    // _0222E1F0: .word 0x00003D50
    // TODO: decompile
}



void ov74_0222E1F4(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #8
    // add r5, r1, #0
    // add r6, r0, #0
    // bl OverlayManager_GetData
    // ldr r1, [r5]
    // add r4, r0, #0
    // cmp r1, #0x1e
    // bls _0222E20A
    // b _0222E79C
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _0222E216: ; jump table
    // add r0, r6, #0
    // bl OverlayManager_GetArgs
    // ldr r1, [r0, #8]
    // ldr r0, _0222E5A4 ; =0x00002BA4
    // str r1, [r4, r0]
    // ldr r0, [r4, r0]
    // bl Save_MysteryGift_Get
    // ldr r1, _0222E5A8 ; =0x00002BA0
    // str r0, [r4, r1]
    // add r0, r1, #4
    // ldr r0, [r4, r0]
    // bl Save_PlayerData_GetOptionsAddr
    // ldr r1, _0222E5AC ; =0x00002BA8
    // str r0, [r4, r1]
    // ldr r0, [r4, r1]
    // bl Options_GetFrame
    // ldr r1, _0222E5B0 ; =0x00002BAC
    // str r0, [r4, r1]
    // sub r1, #0xc
    // ldr r0, [r4, r1]
    // mov r1, #0
    // bl SaveMysteryGift_CardGetByIdx
    // ldr r1, _0222E5B4 ; =0x00002BB4
    // str r0, [r4, r1]
    // sub r1, #0x14
    // ldr r0, [r4, r1]
    // mov r1, #1
    // bl SaveMysteryGift_CardGetByIdx
    // ldr r1, _0222E5B8 ; =0x00002BB8
    // str r0, [r4, r1]
    // sub r1, #0x18
    // ldr r0, [r4, r1]
    // mov r1, #2
    // bl SaveMysteryGift_CardGetByIdx
    // ldr r1, _0222E5BC ; =0x00002BBC
    // mov r2, #1
    // str r0, [r4, r1]
    // add r1, r1, #4
    // ldr r1, [r4, r1]
    // add r0, r4, #0
    // bl ov74_0222DAF8
    // mov r1, #0xaf
    // lsl r1, r1, #6
    // str r0, [r4, r1]
    // mov r0, #1
    // str r0, [r5]
    // b _0222E79C
    // bl ov74_0222FCA4
    // ldr r0, _0222E5C0 ; =0x000029FC
    // ldr r0, [r4, r0]
    // bl ov74_0222FCC4
    // mov r0, #2
    // str r0, [r5]
    // b _0222E79C
    // bl ResetAllTextPrinters
    // add r0, r4, #0
    // mov r1, #0
    // bl ov74_0222DB70
    // mov r1, #0x1e
    // mov r0, #0
    // lsl r1, r1, #4
    // mov r2, #0x55
    // bl LoadFontPal0
    // mov r1, #0
    // str r1, [sp]
    // mov r0, #0x55
    // str r0, [sp, #4]
    // ldr r0, _0222E5C0 ; =0x000029FC
    // mov r2, #1
    // ldr r0, [r4, r0]
    // mov r3, #0xd
    // bl LoadUserFrameGfx1
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #0x55
    // str r0, [sp, #4]
    // ldr r0, _0222E5C0 ; =0x000029FC
    // mov r1, #0
    // ldr r0, [r4, r0]
    // mov r2, #0xa
    // mov r3, #0xe
    // bl LoadUserFrameGfx1
    // ldr r0, _0222E5B0 ; =0x00002BAC
    // mov r1, #0
    // ldr r0, [r4, r0]
    // mov r2, #0x13
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp]
    // mov r0, #0x55
    // str r0, [sp, #4]
    // ldr r0, _0222E5C0 ; =0x000029FC
    // mov r3, #0xa
    // ldr r0, [r4, r0]
    // bl LoadUserFrameGfx2
    // add r0, r4, #0
    // mov r1, #1
    // mov r2, #0
    // bl ov74_0222D824
    // add r0, r4, #0
    // mov r1, #1
    // mov r2, #3
    // add r3, r5, #0
    // bl ov74_0222D7F0
    // b _0222E79C
    // mov r1, #0xaf
    // lsl r1, r1, #6
    // ldr r6, [r4, r1]
    // ldr r1, _0222E5C4 ; =gSystem
    // mov r2, #0x40
    // ldr r1, [r1, #0x48]
    // add r3, r1, #0
    // tst r3, r2
    // beq _0222E368
    // add r1, r6, #0
    // sub r2, #0x41
    // bl ov74_0222DAF8
    // add r6, r0, #0
    // b _0222E3A4
    // mov r2, #0x80
    // tst r2, r1
    // beq _0222E37A
    // add r1, r6, #0
    // mov r2, #1
    // bl ov74_0222DAF8
    // add r6, r0, #0
    // b _0222E3A4
    // mov r0, #2
    // tst r0, r1
    // beq _0222E394
    // ldr r0, _0222E5C8 ; =SEQ_SE_DP_SELECT
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #0
    // mov r2, #0x1d
    // add r3, r5, #0
    // bl ov74_0222D7F0
    // b _0222E3A4
    // mov r0, #1
    // tst r0, r1
    // beq _0222E3A4
    // ldr r0, _0222E5C8 ; =SEQ_SE_DP_SELECT
    // bl PlaySE
    // mov r0, #4
    // str r0, [r5]
    // mov r0, #0xaf
    // lsl r0, r0, #6
    // ldr r0, [r4, r0]
    // cmp r0, r6
    // bne _0222E3B0
    // b _0222E79C
    // ldr r0, _0222E5CC ; =SEQ_SE_DP_CARD2
    // bl PlaySE
    // mov r0, #0xaf
    // lsl r0, r0, #6
    // str r6, [r4, r0]
    // add r0, r4, #0
    // mov r1, #1
    // mov r2, #0
    // bl ov74_0222D824
    // b _0222E79C
    // ldr r1, _0222E5D0 ; =0x00002BD0
    // mov r3, #0xa
    // add r1, r4, r1
    // mov r2, #7
    // lsl r3, r3, #6
    // bl ov74_0222D9E0
    // ldr r3, _0222E5D4 ; =0x00002BF0
    // mov r2, #8
    // add r1, r3, #0
    // str r0, [r4, r3]
    // sub r1, #0x10
    // ldr r3, [r4, r3]
    // add r0, r4, #0
    // add r1, r4, r1
    // bl ov74_0222D9E0
    // mov r0, #5
    // str r0, [r5]
    // b _0222E79C
    // add r0, r6, #0
    // add r1, r5, #0
    // mov r2, #0
    // bl ov74_0222DC60
    // ldr r0, _0222E5C4 ; =gSystem
    // ldr r1, [r0, #0x48]
    // mov r0, #2
    // tst r0, r1
    // beq _0222E4C2
    // ldr r0, _0222E5C8 ; =SEQ_SE_DP_SELECT
    // bl PlaySE
    // mov r0, #0xb
    // str r0, [r5]
    // b _0222E79C
    // ldr r0, _0222E5CC ; =SEQ_SE_DP_CARD2
    // bl PlaySE
    // mov r0, #0x10
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // ldr r0, _0222E5D0 ; =0x00002BD0
    // mov r1, #0
    // add r0, r4, r0
    // bl ov74_0222D104
    // ldr r0, _0222E5D8 ; =0x00002BE0
    // mov r1, #0
    // add r0, r4, r0
    // bl ov74_0222D0EC
    // mov r1, #1
    // add r0, r4, #0
    // lsl r2, r1, #0xc
    // mov r3, #0x66
    // bl ov74_0222DE8C
    // mov r0, #7
    // str r0, [r5]
    // b _0222E79C
    // bl ov74_0222DF2C
    // cmp r0, #0
    // beq _0222E4C2
    // mov r1, #1
    // add r0, r4, #0
    // add r2, r1, #0
    // bl ov74_0222D824
    // ldr r2, _0222E5DC ; =0x00708000
    // add r0, r4, #0
    // mov r1, #0
    // lsr r3, r2, #1
    // bl ov74_0222DE8C
    // mov r0, #8
    // str r0, [r5]
    // b _0222E79C
    // bl ov74_0222DF2C
    // ldr r0, _0222E5C4 ; =gSystem
    // ldr r1, [r0, #0x48]
    // mov r0, #3
    // tst r0, r1
    // beq _0222E4C2
    // ldr r0, _0222E5CC ; =SEQ_SE_DP_CARD2
    // bl PlaySE
    // mov r1, #1
    // add r0, r4, #0
    // lsl r2, r1, #0xc
    // mov r3, #0x66
    // bl ov74_0222DE8C
    // mov r0, #9
    // str r0, [r5]
    // b _0222E79C
    // bl ov74_0222DF2C
    // cmp r0, #0
    // beq _0222E4C2
    // add r0, r4, #0
    // mov r1, #1
    // mov r2, #0
    // bl ov74_0222D824
    // ldr r2, _0222E5DC ; =0x00708000
    // add r0, r4, #0
    // mov r1, #0
    // lsr r3, r2, #1
    // bl ov74_0222DE8C
    // mov r0, #0x10
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #0xa
    // str r0, [r5]
    // b _0222E79C
    // bl ov74_0222DF2C
    // cmp r0, #0
    // bne _0222E4C4
    // b _0222E79C
    // ldr r0, _0222E5D0 ; =0x00002BD0
    // mov r1, #0
    // add r0, r4, r0
    // mov r2, #0x13
    // mov r3, #0xa
    // bl DrawFrameAndWindow2
    // ldr r0, _0222E5D8 ; =0x00002BE0
    // mov r1, #0
    // add r0, r4, r0
    // mov r2, #0xa
    // mov r3, #0xe
    // bl DrawFrameAndWindow1
    // mov r0, #0x10
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // add r0, r4, #0
    // bl ov74_0222DEF0
    // mov r0, #5
    // str r0, [r5]
    // b _0222E79C
    // bl ov74_0222D448
    // ldr r0, _0222E5D0 ; =0x00002BD0
    // mov r1, #0
    // add r0, r4, r0
    // bl ov74_0222D104
    // ldr r0, _0222E5D0 ; =0x00002BD0
    // add r0, r4, r0
    // bl ClearWindowTilemapAndCopyToVram
    // ldr r0, _0222E5D0 ; =0x00002BD0
    // add r0, r4, r0
    // bl RemoveWindow
    // mov r0, #3
    // str r0, [r5]
    // b _0222E79C
    // ldr r2, _0222E5E0 ; =ov74_0222D414
    // add r0, r6, #0
    // add r1, r5, #0
    // bl ov74_0222DC60
    // b _0222E79C
    // ldr r2, _0222E5E0 ; =ov74_0222D414
    // add r0, r6, #0
    // add r1, r5, #0
    // bl ov74_0222DC60
    // b _0222E79C
    // ldr r1, _0222E5D8 ; =0x00002BE0
    // ldr r2, _0222E5E4 ; =0x00010200
    // add r1, r4, r1
    // bl ov74_0222D7A4
    // mov r0, #0xe
    // str r0, [r5]
    // b _0222E79C
    // mov r1, #0
    // mov r2, #0x11
    // add r3, r5, #0
    // bl ov74_0222D7F0
    // b _0222E79C
    // bl ov74_0222D448
    // ldr r0, _0222E5D0 ; =0x00002BD0
    // mov r1, #0
    // add r0, r4, r0
    // bl ov74_0222D104
    // ldr r0, _0222E5D0 ; =0x00002BD0
    // add r0, r4, r0
    // bl ClearWindowTilemapAndCopyToVram
    // ldr r0, _0222E5D0 ; =0x00002BD0
    // add r0, r4, r0
    // bl RemoveWindow
    // add r0, r4, #0
    // mov r1, #0
    // mov r2, #3
    // bl ov74_0222D824
    // ldr r0, _0222E5C0 ; =0x000029FC
    // ldr r0, [r4, r0]
    // bl ov74_0222D248
    // add r0, r4, #0
    // bl ov74_0222CFFC
    // add r0, r4, #0
    // bl ov74_0222D098
    // mov r0, #0x12
    // str r0, [r5]
    // b _0222E79C
    // bl ov74_0222E7EC
    // bl sub_0203A880
    // add r0, r4, #0
    // mov r1, #1
    // mov r2, #0x13
    // add r3, r5, #0
    // bl ov74_0222D7F0
    // b _0222E79C
    // _0222E5A4: .word 0x00002BA4
    // _0222E5A8: .word 0x00002BA0
    // _0222E5AC: .word 0x00002BA8
    // _0222E5B0: .word 0x00002BAC
    // _0222E5B4: .word 0x00002BB4
    // _0222E5B8: .word 0x00002BB8
    // _0222E5BC: .word 0x00002BBC
    // _0222E5C0: .word 0x000029FC
    // _0222E5C4: .word gSystem
    // _0222E5C8: .word SEQ_SE_DP_SELECT
    // _0222E5CC: .word SEQ_SE_DP_CARD2
    // _0222E5D0: .word 0x00002BD0
    // _0222E5D4: .word 0x00002BF0
    // _0222E5D8: .word 0x00002BE0
    // _0222E5DC: .word 0x00708000
    // _0222E5E0: .word ov74_0222D414
    // _0222E5E4: .word 0x00010200
    // mov r6, #0
    // add r0, r6, #0
    // bl sub_020373B4
    // cmp r0, #0
    // beq _0222E63A
    // add r0, r4, #0
    // add r0, #0x90
    // bl sub_020358B8
    // ldr r1, _0222E7C0 ; =0x00002B08
    // add r0, r4, #0
    // add r1, r4, r1
    // bl ov74_0222E8B4
    // add r6, r0, #0
    // bne _0222E62A
    // ldr r0, _0222E7C4 ; =0x00002C30
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // beq _0222E62A
    // ldr r0, _0222E7C0 ; =0x00002B08
    // mov r1, #0
    // add r0, r4, r0
    // bl FillWindowPixelBuffer
    // ldr r0, _0222E7C0 ; =0x00002B08
    // add r0, r4, r0
    // bl CopyWindowToVram
    // ldr r0, _0222E7C4 ; =0x00002C30
    // mov r1, #0
    // str r1, [r4, r0]
    // ldr r1, _0222E7C8 ; =0x00002AF8
    // add r0, r4, #0
    // add r1, r4, r1
    // add r2, r6, #0
    // bl ov74_0222EA88
    // ldr r0, _0222E7C4 ; =0x00002C30
    // str r6, [r4, r0]
    // add r0, r4, #0
    // add r1, r6, #0
    // add r2, r5, #0
    // bl ov74_0222E0D4
    // b _0222E79C
    // mov r1, #0
    // mov r2, #0x15
    // add r3, r5, #0
    // bl ov74_0222D7F0
    // b _0222E79C
    // bl ov74_0222D024
    // ldr r0, _0222E7CC ; =0x00002BD0
    // mov r1, #0
    // add r0, r4, r0
    // bl ov74_0222D104
    // ldr r0, _0222E7D0 ; =0x00002BE0
    // mov r1, #0
    // add r0, r4, r0
    // bl ov74_0222D0EC
    // add r0, r4, #0
    // mov r1, #1
    // mov r2, #0
    // bl ov74_0222D824
    // mov r1, #0x1e
    // mov r0, #0
    // lsl r1, r1, #4
    // mov r2, #0x55
    // bl LoadFontPal0
    // add r0, r4, #0
    // mov r1, #1
    // mov r2, #4
    // add r3, r5, #0
    // bl ov74_0222D7F0
    // b _0222E79C
    // bl sub_02037D78
    // cmp r0, #0
    // beq _0222E698
    // b _0222E79C
    // mov r0, #0xb1
    // lsl r0, r0, #6
    // ldr r0, [r4, r0]
    // str r0, [r5]
    // b _0222E79C
    // ldr r0, _0222E7D4 ; =0x00002C34
    // ldr r1, [r4, r0]
    // sub r1, r1, #1
    // str r1, [r4, r0]
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // bne _0222E79C
    // ldr r1, _0222E7D8 ; =0x00002DD8
    // add r0, r4, #0
    // ldr r2, [r4]
    // add r0, #0x90
    // add r1, r4, r1
    // bl ov74_02235ED0
    // ldr r0, _0222E7D8 ; =0x00002DD8
    // mov r1, #0xd6
    // add r0, r4, r0
    // lsl r1, r1, #2
    // bl ov74_02229D0C
    // add r0, r4, #0
    // bl ov74_0222E060
    // mov r0, #0x18
    // str r0, [r5]
    // b _0222E79C
    // bl ov74_0223615C
    // cmp r0, #4
    // bne _0222E79C
    // mov r0, #0x93
    // bl sub_02037AC0
    // mov r0, #1
    // add r1, r0, #0
    // bl sub_020398D4
    // mov r0, #0x19
    // str r0, [r5]
    // b _0222E79C
    // bl ov74_0222E898
    // cmp r0, #0
    // beq _0222E704
    // mov r0, #0x93
    // bl sub_02037B38
    // cmp r0, #1
    // bne _0222E79C
    // mov r0, #0
    // add r1, r0, #0
    // bl sub_020398D4
    // bl ov74_02236128
    // ldr r1, _0222E7CC ; =0x00002BD0
    // mov r3, #0xa
    // add r0, r4, #0
    // add r1, r4, r1
    // mov r2, #0x12
    // lsl r3, r3, #6
    // bl ov74_0222D9E0
    // ldr r0, _0222E7DC ; =0x00003D50
    // ldr r0, [r4, r0]
    // bl sub_0200F450
    // add r0, r4, #0
    // add r1, r5, #0
    // mov r2, #0x1a
    // bl ov74_0222EB28
    // b _0222E79C
    // ldr r0, _0222E7E0 ; =gSystem
    // ldr r1, [r0, #0x48]
    // mov r0, #3
    // tst r0, r1
    // beq _0222E79C
    // mov r0, #0x14
    // str r0, [r5]
    // b _0222E79C
    // ldr r0, _0222E7E0 ; =gSystem
    // ldr r1, [r0, #0x48]
    // mov r0, #3
    // tst r0, r1
    // beq _0222E79C
    // ldr r0, _0222E7CC ; =0x00002BD0
    // mov r1, #0
    // add r0, r4, r0
    // bl ov74_0222D104
    // ldr r0, _0222E7CC ; =0x00002BD0
    // add r0, r4, r0
    // bl ClearWindowTilemapAndCopyToVram
    // ldr r0, _0222E7CC ; =0x00002BD0
    // add r0, r4, r0
    // bl RemoveWindow
    // mov r0, #3
    // str r0, [r5]
    // b _0222E79C
    // mov r1, #0
    // mov r2, #0x1d
    // add r3, r5, #0
    // bl ov74_0222D7F0
    // b _0222E79C
    // bl IsPaletteFadeFinished
    // cmp r0, #0
    // beq _0222E79C
    // mov r0, #0xb1
    // lsl r0, r0, #6
    // ldr r0, [r4, r0]
    // str r0, [r5]
    // b _0222E79C
    // bl ov74_0222D024
    // add r0, r4, #0
    // bl ov74_0222DEF0
    // add sp, #8
    // mov r0, #1
    // pop {r4, r5, r6, pc}
    // ldr r0, _0222E7E4 ; =0x00002C44
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // beq _0222E7A8
    // bl SpriteList_RenderAndAnimateSprites
    // bl ov74_022358BC
    // ldr r0, _0222E7E8 ; =0x00003D48
    // ldr r1, [r4, r0]
    // cmp r1, #0
    // beq _0222E7B8
    // add r0, r4, #0
    // blx r1
    // mov r0, #0
    // add sp, #8
    // pop {r4, r5, r6, pc}
    // nop
    // _0222E7C0: .word 0x00002B08
    // _0222E7C4: .word 0x00002C30
    // _0222E7C8: .word 0x00002AF8
    // _0222E7CC: .word 0x00002BD0
    // _0222E7D0: .word 0x00002BE0
    // _0222E7D4: .word 0x00002C34
    // _0222E7D8: .word 0x00002DD8
    // _0222E7DC: .word 0x00003D50
    // _0222E7E0: .word gSystem
    // _0222E7E4: .word 0x00002C44
    // _0222E7E8: .word 0x00003D48
    // TODO: decompile
}



void ov74_0222E7EC(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // mov r0, #0xaf
    // lsl r0, r0, #6
    // ldr r1, [r5, r0]
    // mov r2, #0xd6
    // lsl r1, r1, #2
    // add r1, r5, r1
    // sub r0, #0xc
    // ldr r4, [r1, r0]
    // add r0, r5, #0
    // add r0, #0xe0
    // add r1, r4, #0
    // lsl r2, r2, #2
    // bl memcpy
    // mov r1, #0x41
    // add r0, r5, #0
    // lsl r1, r1, #2
    // add r0, #0x90
    // add r1, r4, r1
    // mov r2, #0x50
    // bl memcpy
    // ldr r0, _0222E854 ; =0x00000428
    // mov r1, #0
    // strb r1, [r5, r0]
    // add r0, r5, #0
    // add r0, #0xde
    // ldrb r1, [r0]
    // mov r0, #0x10
    // mov r2, #0xf
    // bic r1, r0
    // add r0, r5, #0
    // add r0, #0xde
    // strb r1, [r0]
    // add r0, r5, #0
    // add r0, #0xde
    // ldrb r1, [r0]
    // mov r0, #0x20
    // orr r1, r0
    // add r0, r5, #0
    // add r0, #0xde
    // strb r1, [r0]
    // ldr r1, _0222E858 ; =0x00002BA4
    // add r0, r5, #4
    // ldr r1, [r5, r1]
    // bl ov74_02229CE0
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // nop
    // _0222E854: .word 0x00000428
    // _0222E858: .word 0x00002BA4
    // TODO: decompile
}



void ov74_0222E85C(void) {
    // push {r3, r4}
    // ldr r3, [r0]
    // ldr r1, [r0, #4]
    // add r2, r0, #0
    // mov r4, #0
    // cmp r1, r3
    // bge _0222E870
    // add r3, r1, #0
    // mov r4, #1
    // add r2, r0, #4
    // ldr r1, [r0, #8]
    // cmp r1, r3
    // bge _0222E87E
    // add r2, r0, #0
    // add r3, r1, #0
    // mov r4, #2
    // add r2, #8
    // ldr r1, [r0, #0xc]
    // cmp r1, r3
    // bge _0222E88A
    // add r2, r0, #0
    // mov r4, #3
    // add r2, #0xc
    // ldr r0, _0222E894 ; =0x3FFF0001
    // str r0, [r2]
    // add r0, r4, #1
    // pop {r3, r4}
    // bx lr
    // _0222E894: .word 0x3FFF0001
    // TODO: decompile
}



void ov74_0222E898(void) {
}



void ov74_0222E8B4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x48
    // add r5, r0, #0
    // mov r6, #0
    // mov r0, #1
    // str r1, [sp, #0x10]
    // add r7, r6, #0
    // str r0, [sp, #0x24]
    // add r4, r5, #4
    // ldr r0, [sp, #0x24]
    // bl sub_02034818
    // cmp r0, #0
    // bne _0222E8E8
    // ldr r0, _0222EA70 ; =0x00002C08
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // beq _0222E8DA
    // add r7, r7, #1
    // ldr r0, _0222EA70 ; =0x00002C08
    // mov r1, #0
    // str r1, [r4, r0]
    // ldr r1, _0222EA74 ; =0x3FFF0001
    // add r0, #0x14
    // str r1, [r4, r0]
    // b _0222E910
    // ldr r1, _0222EA70 ; =0x00002C08
    // ldr r1, [r4, r1]
    // cmp r1, r0
    // beq _0222E90E
    // ldr r1, _0222EA70 ; =0x00002C08
    // add r7, r7, #1
    // str r0, [r4, r1]
    // add r0, r1, #0
    // add r1, #0x34
    // ldr r1, [r5, r1]
    // add r0, #0x34
    // add r2, r1, #1
    // ldr r0, [r5, r0]
    // ldr r1, _0222EA78 ; =0x00002C3C
    // add r6, r6, #1
    // str r2, [r5, r1]
    // sub r1, #0x20
    // str r0, [r4, r1]
    // b _0222E910
    // add r6, r6, #1
    // ldr r0, [sp, #0x24]
    // add r4, r4, #4
    // add r0, r0, #1
    // str r0, [sp, #0x24]
    // cmp r0, #5
    // blt _0222E8C6
    // cmp r7, #0
    // bne _0222E926
    // add sp, #0x48
    // add r0, r6, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r1, _0222EA7C ; =0x00002C20
    // ldr r0, [r5, r1]
    // str r0, [sp, #0x38]
    // add r0, r1, #4
    // ldr r0, [r5, r0]
    // str r0, [sp, #0x3c]
    // add r0, r1, #0
    // add r0, #8
    // ldr r0, [r5, r0]
    // add r1, #0xc
    // str r0, [sp, #0x40]
    // ldr r0, [r5, r1]
    // str r0, [sp, #0x44]
    // add r0, sp, #0x38
    // bl ov74_0222E85C
    // str r0, [sp, #0x28]
    // add r0, sp, #0x38
    // bl ov74_0222E85C
    // str r0, [sp, #0x2c]
    // add r0, sp, #0x38
    // bl ov74_0222E85C
    // str r0, [sp, #0x30]
    // add r0, sp, #0x38
    // bl ov74_0222E85C
    // str r0, [sp, #0x34]
    // mov r0, #0x55
    // bl MessageFormat_New
    // add r4, r0, #0
    // mov r0, #1
    // mov r1, #0x1b
    // mov r2, #0xf7
    // mov r3, #0x55
    // bl NewMsgDataFromNarc
    // str r0, [sp, #0x1c]
    // mov r5, #0
    // ldr r0, [sp, #0x10]
    // add r1, r5, #0
    // bl FillWindowPixelBuffer
    // add r0, r5, #0
    // str r0, [sp, #0x14]
    // cmp r6, #0
    // ble _0222EA54
    // add r0, sp, #0x28
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x18]
    // ldr r0, [r0]
    // bl sub_02034818
    // add r7, r0, #0
    // beq _0222EA44
    // add r0, r4, #0
    // mov r1, #0
    // add r2, r7, #0
    // bl BufferPlayersName
    // ldr r1, [sp, #0x1c]
    // add r0, r4, #0
    // mov r2, #0x36
    // mov r3, #0x55
    // bl ReadMsgData_ExpandPlaceholders
    // str r0, [sp, #0x20]
    // add r0, r7, #0
    // bl PlayerProfile_GetTrainerGender
    // cmp r0, #0
    // str r5, [sp]
    // bne _0222E9D6
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0222EA80 ; =0x00050600
    // mov r1, #0
    // str r0, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x10]
    // ldr r2, [sp, #0x20]
    // add r3, r1, #0
    // bl AddTextPrinterParameterizedWithColor
    // b _0222E9F0
    // mov r0, #0xff
    // str r0, [sp, #4]
    // mov r0, #0xc1
    // lsl r0, r0, #0xa
    // str r0, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // mov r1, #0
    // ldr r0, [sp, #0x10]
    // ldr r2, [sp, #0x20]
    // add r3, r1, #0
    // bl AddTextPrinterParameterizedWithColor
    // ldr r0, [sp, #0x20]
    // bl String_Delete
    // add r0, r7, #0
    // bl PlayerProfile_GetTrainerID
    // add r2, r0, #0
    // mov r0, #2
    // str r0, [sp]
    // mov r0, #1
    // lsl r2, r2, #0x10
    // str r0, [sp, #4]
    // add r0, r4, #0
    // mov r1, #0
    // lsr r2, r2, #0x10
    // mov r3, #5
    // bl BufferIntegerAsString
    // ldr r1, [sp, #0x1c]
    // add r0, r4, #0
    // mov r2, #0x37
    // mov r3, #0x55
    // bl ReadMsgData_ExpandPlaceholders
    // add r7, r0, #0
    // str r5, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0222EA84 ; =0x000E0F00
    // mov r1, #0
    // str r0, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x10]
    // add r2, r7, #0
    // mov r3, #0x50
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r7, #0
    // bl String_Delete
    // add r5, #0x18
    // ldr r0, [sp, #0x18]
    // add r0, r0, #4
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x14]
    // add r0, r0, #1
    // str r0, [sp, #0x14]
    // cmp r0, r6
    // blt _0222E98C
    // cmp r6, #0
    // beq _0222EA5E
    // ldr r0, [sp, #0x10]
    // bl CopyWindowToVram
    // ldr r0, [sp, #0x1c]
    // bl DestroyMsgData
    // add r0, r4, #0
    // bl MessageFormat_Delete
    // add r0, r6, #0
    // add sp, #0x48
    // pop {r3, r4, r5, r6, r7, pc}
    // _0222EA70: .word 0x00002C08
    // _0222EA74: .word 0x3FFF0001
    // _0222EA78: .word 0x00002C3C
    // _0222EA7C: .word 0x00002C20
    // _0222EA80: .word 0x00050600
    // _0222EA84: .word 0x000E0F00
    // TODO: decompile
}



void ov74_0222EA88(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // ldr r0, _0222EB1C ; =0x00002BF4
    // add r4, r1, #0
    // str r2, [r5, r0]
    // mov r0, #1
    // mov r1, #0x1b
    // mov r2, #0xf7
    // mov r3, #0x55
    // bl NewMsgDataFromNarc
    // ldr r1, _0222EB20 ; =0x00002A04
    // str r0, [r5, r1]
    // mov r0, #0x55
    // bl MessageFormat_New
    // mov r1, #0x2a
    // lsl r1, r1, #8
    // str r0, [r5, r1]
    // add r0, r4, #0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // mov r3, #1
    // str r3, [sp]
    // mov r0, #0x2a
    // ldr r2, _0222EB1C ; =0x00002BF4
    // str r3, [sp, #4]
    // lsl r0, r0, #8
    // ldr r0, [r5, r0]
    // ldr r2, [r5, r2]
    // mov r1, #0
    // bl BufferIntegerAsString
    // mov r1, #0x2a
    // lsl r1, r1, #8
    // ldr r0, [r5, r1]
    // add r1, r1, #4
    // ldr r1, [r5, r1]
    // mov r2, #0x39
    // mov r3, #0x55
    // bl ReadMsgData_ExpandPlaceholders
    // add r6, r0, #0
    // mov r3, #0
    // str r3, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0222EB24 ; =0x00010200
    // mov r1, #1
    // str r0, [sp, #8]
    // add r0, r4, #0
    // add r2, r6, #0
    // str r3, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r4, #0
    // bl CopyWindowToVram
    // add r0, r6, #0
    // bl String_Delete
    // ldr r0, _0222EB20 ; =0x00002A04
    // ldr r0, [r5, r0]
    // bl DestroyMsgData
    // mov r0, #0x2a
    // lsl r0, r0, #8
    // ldr r0, [r5, r0]
    // bl MessageFormat_Delete
    // add sp, #0x10
    // pop {r4, r5, r6, pc}
    // _0222EB1C: .word 0x00002BF4
    // _0222EB20: .word 0x00002A04
    // _0222EB24: .word 0x00010200
    // TODO: decompile
}



void ov74_0222EB28(void) {
    ov74_02229DF8();
    sub_0203A914();
    // str r6, [r5, r0]
    // str r0, [r4]
}



void ov74_0222EB44(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // str r0, [sp]
    // bl OverlayManager_GetData
    // add r7, r0, #0
    // ldr r0, _0222EBF0 ; =0x00002A08
    // mov r6, #0
    // add r4, r7, #0
    // add r5, r7, r0
    // ldr r0, _0222EBF0 ; =0x00002A08
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // beq _0222EB6A
    // add r0, r5, #0
    // bl ClearWindowTilemapAndCopyToVram
    // add r0, r5, #0
    // bl RemoveWindow
    // add r6, r6, #1
    // add r4, #0x10
    // add r5, #0x10
    // cmp r6, #0x13
    // blo _0222EB56
    // ldr r0, _0222EBF4 ; =0x00002BD0
    // ldr r1, [r7, r0]
    // cmp r1, #0
    // beq _0222EB8A
    // add r0, r7, r0
    // bl ClearWindowTilemapAndCopyToVram
    // ldr r0, _0222EBF4 ; =0x00002BD0
    // add r0, r7, r0
    // bl RemoveWindow
    // ldr r0, _0222EBF8 ; =0x00002BE0
    // ldr r1, [r7, r0]
    // cmp r1, #0
    // beq _0222EBA0
    // add r0, r7, r0
    // bl ClearWindowTilemapAndCopyToVram
    // ldr r0, _0222EBF8 ; =0x00002BE0
    // add r0, r7, r0
    // bl RemoveWindow
    // ldr r0, _0222EBFC ; =0x000029FC
    // mov r1, #0
    // ldr r0, [r7, r0]
    // bl FreeBgTilemapBuffer
    // ldr r0, _0222EBFC ; =0x000029FC
    // mov r1, #1
    // ldr r0, [r7, r0]
    // bl FreeBgTilemapBuffer
    // ldr r0, _0222EBFC ; =0x000029FC
    // mov r1, #2
    // ldr r0, [r7, r0]
    // bl FreeBgTilemapBuffer
    // ldr r0, _0222EBFC ; =0x000029FC
    // mov r1, #3
    // ldr r0, [r7, r0]
    // bl FreeBgTilemapBuffer
    // ldr r0, _0222EBFC ; =0x000029FC
    // ldr r0, [r7, r0]
    // bl Heap_Free
    // ldr r0, _0222EC00 ; =FS_OVERLAY_ID(OVY_74)
    // ldr r1, _0222EC04 ; =gApp_MainMenu_SelectOption_MysteryGift
    // bl RegisterMainOverlay
    // mov r0, #0x59
    // bl Heap_Destroy
    // ldr r0, [sp]
    // bl OverlayManager_FreeData
    // mov r0, #0x55
    // bl Heap_Destroy
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0222EBF0: .word 0x00002A08
    // _0222EBF4: .word 0x00002BD0
    // _0222EBF8: .word 0x00002BE0
    // _0222EBFC: .word 0x000029FC
    // _0222EC00: .word FS_OVERLAY_ID(OVY_74)
    // _0222EC04: .word gApp_MainMenu_SelectOption_MysteryGift
    // TODO: decompile
}



void ov74_0222EC08(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r0, #0
    // add r7, r1, #0
    // add r5, r2, #0
    // bl ov74_0222FCC4
    // ldr r1, _0222EC54 ; =0x00003D54
    // add r0, r5, #0
    // bl Heap_AllocAtEnd
    // ldr r2, _0222EC54 ; =0x00003D54
    // mov r1, #0
    // add r4, r0, #0
    // bl memset
    // ldr r0, _0222EC58 ; =0x000029FC
    // mov r1, #0x1e
    // str r6, [r4, r0]
    // mov r0, #0
    // lsl r1, r1, #4
    // add r2, r5, #0
    // str r5, [r4]
    // bl LoadFontPal0
    // ldr r0, _0222EC5C ; =0x00002BB4
    // mov r2, #0
    // str r7, [r4, r0]
    // add r0, #0xc
    // str r2, [r4, r0]
    // add r0, r4, #0
    // mov r1, #1
    // bl ov74_0222D824
    // add r0, r4, #0
    // bl Heap_Free
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0222EC54: .word 0x00003D54
    // _0222EC58: .word 0x000029FC
    // _0222EC5C: .word 0x00002BB4
    // TODO: decompile
}



void ov74_0222EC60(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _0222ECC8 ; =0x00002D7C
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // beq _0222EC70
    // bl Sprite_Delete
    // mov r0, #0xb6
    // lsl r0, r0, #6
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // beq _0222EC7E
    // bl Sprite_Delete
    // mov r0, #0xb6
    // mov r1, #0
    // lsl r0, r0, #6
    // str r1, [r4, r0]
    // ldr r2, [r4, r0]
    // sub r1, r0, #4
    // str r2, [r4, r1]
    // add r0, r0, #4
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // beq _0222EC98
    // bl Sprite_Delete
    // ldr r0, _0222ECCC ; =0x00002D88
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // beq _0222ECA4
    // bl Sprite_Delete
    // ldr r0, _0222ECD0 ; =0x00002D8C
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // beq _0222ECB0
    // bl Sprite_Delete
    // ldr r1, _0222ECD0 ; =0x00002D8C
    // mov r0, #0
    // str r0, [r4, r1]
    // ldr r2, [r4, r1]
    // sub r0, r1, #4
    // str r2, [r4, r0]
    // ldr r0, [r4, r0]
    // sub r1, #8
    // str r0, [r4, r1]
    // bl ov74_022359BC
    // pop {r4, pc}
    // _0222ECC8: .word 0x00002D7C
    // _0222ECCC: .word 0x00002D88
    // _0222ECD0: .word 0x00002D8C
    // TODO: decompile
}



void ov74_0222ECD4(void) {
    WindowIsInUse();
    sub_0200E5D4(r5, r4);
}



void ov74_0222ECEC(void) {
    WindowIsInUse();
    ClearFrameAndWindow2(r5, r4);
}



void ov74_0222ED04(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x24
    // add r5, r0, #0
    // mov r0, #0xaf
    // lsl r0, r0, #6
    // ldr r0, [r5, r0]
    // add r4, r1, #0
    // add r7, r2, #0
    // str r3, [sp]
    // cmp r0, #0
    // beq _0222ED1E
    // bl ListMenuItems_Delete
    // ldr r0, _0222EDB4 ; =0x00002BBC
    // ldr r0, [r5, r0]
    // cmp r0, #0
    // beq _0222ED2E
    // mov r1, #0
    // add r2, r1, #0
    // bl DestroyListMenu
    // add r0, r7, #0
    // mov r1, #0x55
    // bl ListMenuItems_New
    // mov r1, #0xaf
    // lsl r1, r1, #6
    // str r0, [r5, r1]
    // mov r0, #0
    // mov r1, #0x1b
    // mov r2, #0xf7
    // mov r3, #0x55
    // bl NewMsgDataFromNarc
    // ldr r1, _0222EDB8 ; =0x00002A04
    // mov r6, #0
    // str r0, [r5, r1]
    // cmp r7, #0
    // ble _0222ED6C
    // mov r0, #0xaf
    // ldr r1, _0222EDB8 ; =0x00002A04
    // lsl r0, r0, #6
    // ldr r0, [r5, r0]
    // ldr r1, [r5, r1]
    // ldr r2, [r4]
    // ldr r3, [r4, #4]
    // bl ListMenuItems_AppendFromMsgData
    // add r6, r6, #1
    // add r4, #8
    // cmp r6, r7
    // blt _0222ED52
    // ldr r0, _0222EDB8 ; =0x00002A04
    // ldr r0, [r5, r0]
    // bl DestroyMsgData
    // ldr r4, _0222EDBC ; =ov74_0223C6E0
    // add r3, sp, #4
    // add r2, r3, #0
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // mov r0, #0xaf
    // lsl r0, r0, #6
    // ldr r0, [r5, r0]
    // mov r1, #0
    // str r0, [sp, #4]
    // add r0, sp, #4
    // strh r7, [r0, #0x10]
    // ldr r0, [sp]
    // mov r3, #0x55
    // str r0, [sp, #0x10]
    // add r0, r2, #0
    // ldr r2, [sp, #0x38]
    // lsl r2, r2, #0x10
    // lsr r2, r2, #0x10
    // bl ListMenuInit
    // ldr r1, _0222EDB4 ; =0x00002BBC
    // str r0, [r5, r1]
    // add sp, #0x24
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _0222EDB4: .word 0x00002BBC
    // _0222EDB8: .word 0x00002A04
    // _0222EDBC: .word ov74_0223C6E0
    // TODO: decompile
}



void ov74_0222EDC0(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r0, #0xaf
    // lsl r0, r0, #6
    // ldr r0, [r4, r0]
    // bl ListMenuItems_Delete
    // mov r0, #0xaf
    // mov r1, #0
    // lsl r0, r0, #6
    // str r1, [r4, r0]
    // sub r0, r0, #4
    // ldr r0, [r4, r0]
    // add r2, r1, #0
    // bl DestroyListMenu
    // ldr r0, _0222EE00 ; =0x00002BBC
    // mov r1, #0
    // str r1, [r4, r0]
    // add r0, #0x18
    // add r0, r4, r0
    // bl ov74_0222ECD4
    // ldr r0, _0222EE04 ; =0x00002BD4
    // add r0, r4, r0
    // bl ClearWindowTilemapAndCopyToVram
    // ldr r0, _0222EE04 ; =0x00002BD4
    // add r0, r4, r0
    // bl RemoveWindow
    // pop {r4, pc}
    // _0222EE00: .word 0x00002BBC
    // _0222EE04: .word 0x00002BD4
    // TODO: decompile
}



u8 ov74_0222EE08(void) {
}



void ov74_0222EE0C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // add r7, r1, #0
    // ldr r1, [r5]
    // mov r0, #0x25
    // add r4, r2, #0
    // bl String_New
    // ldr r1, _0222EE54 ; =0x00002BB4
    // add r6, r0, #0
    // ldr r2, [r5, r1]
    // mov r1, #0x41
    // lsl r1, r1, #2
    // add r1, r2, r1
    // mov r2, #0x24
    // bl CopyU16ArrayToStringN
    // mov r3, #0
    // str r3, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // str r4, [sp, #8]
    // add r0, r7, #0
    // mov r1, #1
    // add r2, r6, #0
    // str r3, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r6, #0
    // bl String_Delete
    // mov r0, #1
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0222EE54: .word 0x00002BB4
    // TODO: decompile
}



void ov74_0222EE58(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x10
    // add r3, r0, #0
    // ldr r0, _0222EEAC ; =0x00002BB4
    // add r6, r1, #0
    // ldr r1, [r3, r0]
    // mov r0, #0x35
    // lsl r0, r0, #4
    // ldrb r0, [r1, r0]
    // add r5, r2, #0
    // cmp r0, #0
    // bne _0222EE74
    // mov r2, #0x51
    // b _0222EE76
    // mov r2, #0x52
    // mov r1, #0x2a
    // lsl r1, r1, #8
    // ldr r0, [r3, r1]
    // add r1, r1, #4
    // ldr r1, [r3, r1]
    // ldr r3, [r3]
    // bl ReadMsgData_ExpandPlaceholders
    // add r4, r0, #0
    // mov r3, #0
    // str r3, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // str r5, [sp, #8]
    // add r0, r6, #0
    // mov r1, #1
    // add r2, r4, #0
    // str r3, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r4, #0
    // bl String_Delete
    // mov r0, #1
    // add sp, #0x10
    // pop {r4, r5, r6, pc}
    // nop
    // _0222EEAC: .word 0x00002BB4
    // TODO: decompile
}



void ov74_0222EEB0(void) {
    // push {r4, lr}
    // sub sp, #0x18
    // ldr r1, _0222EF14 ; =0x00002BB4
    // add r4, r0, #0
    // ldr r2, [r4, r1]
    // mov r1, #0xd5
    // lsl r1, r1, #2
    // ldr r1, [r2, r1]
    // add r0, sp, #8
    // bl RTC_ConvertDayToDate
    // mov r0, #2
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // mov r0, #0x2a
    // lsl r0, r0, #8
    // mov r2, #0x7d
    // ldr r3, [sp, #8]
    // lsl r2, r2, #4
    // add r2, r3, r2
    // ldr r0, [r4, r0]
    // mov r1, #0
    // mov r3, #4
    // bl BufferIntegerAsString
    // mov r3, #2
    // mov r0, #0x2a
    // str r3, [sp]
    // mov r1, #1
    // str r1, [sp, #4]
    // lsl r0, r0, #8
    // ldr r0, [r4, r0]
    // ldr r2, [sp, #0xc]
    // bl BufferIntegerAsString
    // mov r1, #2
    // str r1, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // mov r0, #0x2a
    // lsl r0, r0, #8
    // ldr r0, [r4, r0]
    // ldr r2, [sp, #0x10]
    // add r3, r1, #0
    // bl BufferIntegerAsString
    // mov r0, #1
    // add sp, #0x18
    // pop {r4, pc}
    // _0222EF14: .word 0x00002BB4
    // TODO: decompile
}



void ov74_0222EF18(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // add r7, r1, #0
    // mov r0, #0xfb
    // mov r1, #0x55
    // add r4, r2, #0
    // bl String_New
    // ldr r1, _0222EF60 ; =0x00002BB4
    // add r6, r0, #0
    // ldr r2, [r5, r1]
    // mov r1, #0x55
    // lsl r1, r1, #2
    // add r1, r2, r1
    // mov r2, #0xfa
    // bl CopyU16ArrayToStringN
    // mov r3, #0
    // str r3, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // str r4, [sp, #8]
    // add r0, r7, #0
    // mov r1, #1
    // add r2, r6, #0
    // str r3, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r6, #0
    // bl String_Delete
    // mov r0, #0
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0222EF60: .word 0x00002BB4
    // TODO: decompile
}



u8 ov74_0222EF64(void) {
}



void ov74_0222EF68(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0x24
    // add r5, r0, #0
    // ldr r0, _0222EFE0 ; =ov74_0223C6D0
    // add r6, r1, #0
    // ldr r1, [r0, #4]
    // ldr r2, [r0]
    // str r1, [sp, #0x18]
    // ldr r1, [r0, #8]
    // ldr r0, [r0, #0xc]
    // str r2, [sp, #0x14]
    // str r0, [sp, #0x20]
    // ldr r0, _0222EFE4 ; =0x00002B9C
    // str r1, [sp, #0x1c]
    // ldr r4, [r5, r0]
    // add r0, r6, #0
    // bl ClearWindowTilemapAndCopyToVram
    // add r0, r6, #0
    // bl RemoveWindow
    // ldr r0, [r4, #8]
    // add r1, r6, #0
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp]
    // ldr r0, [r4, #0xc]
    // mov r2, #2
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #4]
    // ldr r0, [r4, #0x10]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #8]
    // mov r0, #0xf
    // str r0, [sp, #0xc]
    // ldr r0, _0222EFE8 ; =0x00002B98
    // ldr r0, [r5, r0]
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp, #0x10]
    // ldr r0, _0222EFEC ; =0x000029FC
    // ldr r3, [r4, #4]
    // ldr r0, [r5, r0]
    // lsl r3, r3, #0x18
    // lsr r3, r3, #0x18
    // bl AddWindowParameterized
    // mov r0, #0
    // str r0, [sp]
    // add r0, r5, #0
    // add r1, sp, #0x14
    // mov r2, #2
    // add r3, r6, #0
    // bl ov74_0222ED04
    // mov r0, #1
    // add sp, #0x24
    // pop {r3, r4, r5, r6, pc}
    // _0222EFE0: .word ov74_0223C6D0
    // _0222EFE4: .word 0x00002B9C
    // _0222EFE8: .word 0x00002B98
    // _0222EFEC: .word 0x000029FC
    // TODO: decompile
}



void ov74_0222EFF0(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0xc
    // add r5, r0, #0
    // mov r0, #6
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // mov r0, #0x55
    // str r0, [sp, #8]
    // add r6, r2, #0
    // mov r0, #0
    // add r4, r3, #0
    // add r2, r1, #0
    // add r3, r0, #0
    // bl BeginNormalPaletteFade
    // cmp r4, #0
    // beq _0222F018
    // mov r0, #0x1c
    // str r0, [r4]
    // ldr r0, _0222F020 ; =0x00002BF8
    // str r6, [r5, r0]
    // add sp, #0xc
    // pop {r3, r4, r5, r6, pc}
    // _0222F020: .word 0x00002BF8
    // TODO: decompile
}



void ov74_0222F024(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x34
    // add r5, r0, #0
    // ldr r3, [r5]
    // str r2, [sp, #0x14]
    // mov r0, #1
    // mov r1, #0x1b
    // mov r2, #0xf7
    // ldr r4, _0222F1A4 ; =ov74_0223C700
    // bl NewMsgDataFromNarc
    // ldr r1, _0222F1A8 ; =0x00002A04
    // str r0, [r5, r1]
    // ldr r0, [r5]
    // bl MessageFormat_New
    // mov r1, #0x2a
    // lsl r1, r1, #8
    // str r0, [r5, r1]
    // ldr r1, _0222F1AC ; =0x00002BB8
    // ldr r0, [sp, #0x14]
    // str r0, [r5, r1]
    // ldr r1, [sp, #0x14]
    // add r0, r5, #0
    // bl ov74_0222F314
    // mov r0, #0
    // str r0, [sp, #0x2c]
    // ldr r0, _0222F1B0 ; =0x00002A08
    // add r7, r4, #0
    // str r5, [sp, #0x1c]
    // add r6, r5, r0
    // ldr r1, [r7]
    // ldr r0, [sp, #0x14]
    // cmp r0, r1
    // beq _0222F086
    // cmp r1, #2
    // beq _0222F086
    // ldr r1, [sp, #0x1c]
    // ldr r0, _0222F1B0 ; =0x00002A08
    // ldr r0, [r1, r0]
    // cmp r0, #0
    // beq _0222F086
    // add r0, r6, #0
    // bl ClearWindowTilemapAndCopyToVram
    // add r0, r6, #0
    // bl RemoveWindow
    // ldr r0, [sp, #0x1c]
    // add r7, #0x30
    // add r0, #0x10
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x2c]
    // add r6, #0x10
    // add r0, r0, #1
    // str r0, [sp, #0x2c]
    // cmp r0, #0xb
    // blo _0222F064
    // mov r0, #0
    // str r0, [sp, #0x18]
    // ldr r0, _0222F1B0 ; =0x00002A08
    // mov r7, #0x31
    // str r5, [sp, #0x24]
    // str r5, [sp, #0x20]
    // add r6, r5, r0
    // ldr r1, [r4]
    // ldr r0, [sp, #0x14]
    // cmp r0, r1
    // bne _0222F166
    // ldr r1, [sp, #0x24]
    // ldr r0, _0222F1B0 ; =0x00002A08
    // ldr r0, [r1, r0]
    // cmp r0, #0
    // bne _0222F0F4
    // ldr r1, [sp, #0x20]
    // ldr r0, _0222F1B4 ; =0x00002B48
    // mov r2, #0
    // str r7, [r1, r0]
    // ldr r0, [r4, #8]
    // add r1, r6, #0
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp]
    // ldr r0, [r4, #0xc]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #4]
    // ldr r0, [r4, #0x10]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #8]
    // mov r0, #0xf
    // str r0, [sp, #0xc]
    // lsl r0, r7, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp, #0x10]
    // ldr r0, _0222F1B8 ; =0x000029FC
    // ldr r3, [r4, #4]
    // ldr r0, [r5, r0]
    // lsl r3, r3, #0x18
    // lsr r3, r3, #0x18
    // bl AddWindowParameterized
    // ldr r0, [r4, #0x14]
    // ldr r1, [r4, #0x1c]
    // lsl r0, r0, #0x18
    // lsl r1, r1, #0x18
    // lsr r0, r0, #0x18
    // lsr r1, r1, #0x18
    // bl GetFontAttribute
    // add r1, r0, #0
    // add r0, r6, #0
    // bl FillWindowPixelBuffer
    // ldr r0, [r4, #0x18]
    // ldr r3, [r4, #0x24]
    // str r0, [sp, #0x28]
    // ldr r2, [sp, #0x28]
    // add r0, r5, #0
    // add r1, r6, #0
    // blx r3
    // cmp r0, #1
    // bne _0222F158
    // ldr r2, [r4, #0x20]
    // cmp r2, #0
    // beq _0222F158
    // mov r0, #0x2a
    // ldr r1, _0222F1A8 ; =0x00002A04
    // lsl r0, r0, #8
    // ldr r0, [r5, r0]
    // ldr r1, [r5, r1]
    // ldr r3, [r5]
    // bl ReadMsgData_ExpandPlaceholders
    // str r0, [sp, #0x30]
    // ldr r0, [r4, #0x2c]
    // ldr r2, [sp, #0x30]
    // str r0, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x28]
    // str r0, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // ldr r1, [r4, #0x14]
    // ldr r3, [r4, #0x28]
    // add r0, r6, #0
    // bl AddTextPrinterParameterizedWithColor
    // ldr r0, [sp, #0x30]
    // bl String_Delete
    // add r0, r6, #0
    // bl CopyWindowToVram
    // ldr r1, [r4, #0xc]
    // ldr r0, [r4, #0x10]
    // mul r0, r1
    // add r7, r7, r0
    // ldr r0, [sp, #0x24]
    // add r4, #0x30
    // add r0, #0x10
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #0x20]
    // add r6, #0x10
    // add r0, r0, #4
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x18]
    // add r0, r0, #1
    // str r0, [sp, #0x18]
    // cmp r0, #0xb
    // blo _0222F0A8
    // ldr r0, _0222F1A8 ; =0x00002A04
    // ldr r0, [r5, r0]
    // bl DestroyMsgData
    // mov r0, #0x2a
    // lsl r0, r0, #8
    // ldr r0, [r5, r0]
    // bl MessageFormat_Delete
    // ldr r0, [sp, #0x14]
    // cmp r0, #0
    // bne _0222F19E
    // add r0, r5, #0
    // bl ov74_0222F478
    // add sp, #0x34
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _0222F1A4: .word ov74_0223C700
    // _0222F1A8: .word 0x00002A04
    // _0222F1AC: .word 0x00002BB8
    // _0222F1B0: .word 0x00002A08
    // _0222F1B4: .word 0x00002B48
    // _0222F1B8: .word 0x000029FC
    // TODO: decompile
}



void ov74_0222F1BC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x18
    // add r5, r0, #0
    // add r7, r3, #0
    // mov r3, #0x30
    // ldr r0, _0222F2BC ; =ov74_0223C700
    // mul r3, r2
    // add r6, r1, #0
    // add r4, r0, r3
    // ldr r0, [r6]
    // cmp r0, #0
    // bne _0222F206
    // ldr r0, [r4, #8]
    // mov r2, #2
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp]
    // ldr r0, [r4, #0xc]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #4]
    // ldr r0, [r4, #0x10]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #8]
    // mov r0, #0xf
    // str r0, [sp, #0xc]
    // lsl r0, r7, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp, #0x10]
    // ldr r0, _0222F2C0 ; =0x000029FC
    // ldr r3, [r4, #4]
    // ldr r0, [r5, r0]
    // lsl r3, r3, #0x18
    // lsr r3, r3, #0x18
    // bl AddWindowParameterized
    // ldr r1, [r4, #0x1c]
    // add r0, r6, #0
    // lsl r1, r1, #0x18
    // lsr r1, r1, #0x18
    // bl FillWindowPixelBuffer
    // ldr r0, [r4, #0x20]
    // cmp r0, #0
    // beq _0222F234
    // mov r0, #1
    // mov r1, #0x1b
    // mov r2, #0xf7
    // mov r3, #0x55
    // bl NewMsgDataFromNarc
    // ldr r1, _0222F2C4 ; =0x00002A04
    // str r0, [r5, r1]
    // mov r0, #0x55
    // bl MessageFormat_New
    // mov r1, #0x2a
    // lsl r1, r1, #8
    // str r0, [r5, r1]
    // ldr r0, _0222F2C8 ; =0x00002B98
    // ldr r2, _0222F2CC ; =0x00010200
    // str r7, [r5, r0]
    // add r0, r0, #4
    // str r4, [r5, r0]
    // ldr r3, [r4, #0x24]
    // add r0, r5, #0
    // add r1, r6, #0
    // blx r3
    // ldr r2, [r4, #0x20]
    // cmp r2, #0
    // beq _0222F28E
    // mov r1, #0x2a
    // lsl r1, r1, #8
    // ldr r0, [r5, r1]
    // add r1, r1, #4
    // ldr r1, [r5, r1]
    // mov r3, #0x55
    // bl ReadMsgData_ExpandPlaceholders
    // str r0, [sp, #0x14]
    // mov r3, #0
    // str r3, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, [r4, #0x18]
    // ldr r2, [sp, #0x14]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // ldr r1, [r4, #0x14]
    // add r0, r6, #0
    // bl AddTextPrinterParameterizedWithColor
    // ldr r0, [sp, #0x14]
    // bl String_Delete
    // ldr r0, _0222F2C4 ; =0x00002A04
    // ldr r0, [r5, r0]
    // bl DestroyMsgData
    // mov r0, #0x2a
    // lsl r0, r0, #8
    // ldr r0, [r5, r0]
    // bl MessageFormat_Delete
    // ldr r0, _0222F2D0 ; =0x00002BC4
    // add r0, r5, r0
    // cmp r6, r0
    // bne _0222F2A4
    // add r0, r6, #0
    // mov r1, #0
    // mov r2, #0x13
    // mov r3, #0xa
    // bl DrawFrameAndWindow2
    // b _0222F2B0
    // add r0, r6, #0
    // mov r1, #0
    // mov r2, #0xa
    // mov r3, #0xe
    // bl DrawFrameAndWindow1
    // ldr r1, [r4, #0xc]
    // ldr r0, [r4, #0x10]
    // mul r0, r1
    // add r0, r7, r0
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // _0222F2BC: .word ov74_0223C700
    // _0222F2C0: .word 0x000029FC
    // _0222F2C4: .word 0x00002A04
    // _0222F2C8: .word 0x00002B98
    // _0222F2CC: .word 0x00010200
    // _0222F2D0: .word 0x00002BC4
    // TODO: decompile
}



void ov74_0222F2D4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r4, r2, #0
    // mov r2, #1
    // add r5, r0, #0
    // str r2, [sp]
    // add r6, r3, #0
    // ldr r3, [r5]
    // mov r0, #0x71
    // bl GfGfxLoader_LoadFromNarc
    // add r1, sp, #4
    // add r7, r0, #0
    // bl NNS_G2dGetUnpackedScreenData
    // ldr r0, _0222F310 ; =0x000029FC
    // ldr r2, [sp, #4]
    // lsl r1, r4, #0x18
    // ldr r0, [r5, r0]
    // lsr r1, r1, #0x18
    // add r2, #0xc
    // add r3, r6, #0
    // bl BG_LoadScreenTilemapData
    // add r0, r7, #0
    // bl Heap_Free
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0222F310: .word 0x000029FC
    // TODO: decompile
}



void ov74_0222F314(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // mov r0, #1
    // lsl r0, r0, #8
    // str r0, [sp]
    // ldr r0, [r5]
    // mov r2, #0
    // add r4, r1, #0
    // str r0, [sp, #4]
    // mov r0, #0x71
    // mov r1, #7
    // add r3, r2, #0
    // bl GfGfxLoader_GXLoadPal
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #3
    // lsl r0, r0, #0xc
    // str r0, [sp, #4]
    // mov r3, #1
    // str r3, [sp, #8]
    // ldr r0, [r5]
    // ldr r2, _0222F400 ; =0x000029FC
    // str r0, [sp, #0xc]
    // ldr r2, [r5, r2]
    // mov r0, #0x71
    // mov r1, #0xa
    // bl GfGfxLoader_LoadCharData
    // cmp r4, #0
    // beq _0222F35A
    // cmp r4, #1
    // beq _0222F37A
    // b _0222F398
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #6
    // lsl r0, r0, #8
    // str r0, [sp, #4]
    // mov r3, #1
    // str r3, [sp, #8]
    // ldr r0, [r5]
    // ldr r2, _0222F400 ; =0x000029FC
    // str r0, [sp, #0xc]
    // ldr r2, [r5, r2]
    // mov r0, #0x71
    // mov r1, #8
    // bl GfGfxLoader_LoadScrnData
    // b _0222F398
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #6
    // lsl r0, r0, #8
    // str r0, [sp, #4]
    // mov r3, #1
    // str r3, [sp, #8]
    // ldr r0, [r5]
    // ldr r2, _0222F400 ; =0x000029FC
    // str r0, [sp, #0xc]
    // ldr r2, [r5, r2]
    // mov r0, #0x71
    // mov r1, #9
    // bl GfGfxLoader_LoadScrnData
    // mov r0, #0x20
    // str r0, [sp]
    // ldr r0, [r5]
    // mov r1, #0
    // str r0, [sp, #4]
    // mov r0, #0x71
    // add r3, r0, #0
    // add r2, r1, #0
    // add r3, #0xef
    // bl GfGfxLoader_GXLoadPal
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #2
    // lsl r0, r0, #8
    // str r0, [sp, #4]
    // mov r1, #1
    // str r1, [sp, #8]
    // ldr r0, [r5]
    // ldr r2, _0222F400 ; =0x000029FC
    // str r0, [sp, #0xc]
    // ldr r2, [r5, r2]
    // mov r0, #0x71
    // mov r3, #3
    // bl GfGfxLoader_LoadCharData
    // mov r2, #3
    // add r0, r5, #0
    // mov r1, #2
    // lsl r3, r2, #9
    // bl ov74_0222F2D4
    // mov r0, #0x20
    // str r0, [sp]
    // mov r0, #0x18
    // str r0, [sp, #4]
    // mov r0, #0xb
    // str r0, [sp, #8]
    // ldr r0, _0222F400 ; =0x000029FC
    // mov r2, #0
    // ldr r0, [r5, r0]
    // mov r1, #3
    // add r3, r2, #0
    // bl BgTilemapRectChangePalette
    // ldr r0, _0222F400 ; =0x000029FC
    // mov r1, #3
    // ldr r0, [r5, r0]
    // bl BgCommitTilemapBufferToVram
    // add sp, #0x10
    // pop {r3, r4, r5, pc}
    // _0222F400: .word 0x000029FC
    // TODO: decompile
}



void ov74_0222F404(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r7, r0, #0
    // add r5, r1, #0
    // add r6, r2, #0
    // bl OverlayManager_GetData
    // ldr r1, _0222F46C ; =0x00002BBC
    // ldr r0, [r0, r1]
    // bl ListMenu_ProcessInput
    // add r4, r0, #0
    // mov r0, #1
    // mvn r0, r0
    // cmp r4, r0
    // beq _0222F42A
    // add r0, r0, #1
    // cmp r4, r0
    // beq _0222F468
    // b _0222F444
    // ldr r0, _0222F470 ; =SEQ_SE_DP_SELECT
    // bl PlaySE
    // cmp r6, #0
    // beq _0222F468
    // add r0, r7, #0
    // blx r6
    // mov r1, #0
    // mvn r1, r1
    // cmp r0, r1
    // beq _0222F468
    // str r0, [r5]
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, _0222F470 ; =SEQ_SE_DP_SELECT
    // bl PlaySE
    // cmp r4, #0
    // beq _0222F468
    // cmp r4, #0x1f
    // bhs _0222F456
    // str r4, [r5]
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, _0222F474 ; =ov74_0223D0C0
    // str r4, [r0]
    // add r0, r7, #0
    // blx r4
    // mov r1, #0
    // mvn r1, r1
    // cmp r0, r1
    // beq _0222F468
    // str r0, [r5]
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0222F46C: .word 0x00002BBC
    // _0222F470: .word SEQ_SE_DP_SELECT
    // _0222F474: .word ov74_0223D0C0
    // TODO: decompile
}



void ov74_0222F478(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x1c
    // ldr r1, _0222F58C ; =0x00002D84
    // add r7, r0, #0
    // ldr r0, [r7, r1]
    // cmp r0, #0
    // bne _0222F4D8
    // add r0, r1, #4
    // ldr r0, [r7, r0]
    // cmp r0, #0
    // bne _0222F4D8
    // add r1, #8
    // ldr r0, [r7, r1]
    // cmp r0, #0
    // bne _0222F4D8
    // bl ov74_0223567C
    // cmp r0, #1
    // bne _0222F4A4
    // add r0, r7, #0
    // bl ov74_0222EC60
    // bl ov74_0223563C
    // bl ov74_02235690
    // mov r0, #0x1c
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // mov r0, #0x71
    // mov r1, #0x1e
    // mov r2, #0x1b
    // mov r3, #0x1d
    // bl ov74_02235728
    // bl sub_02074490
    // add r1, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, [r7]
    // mov r2, #1
    // str r0, [sp, #4]
    // mov r0, #0x14
    // mov r3, #0x60
    // bl GfGfxLoader_GXLoadPal
    // mov r0, #0xb2
    // mov r4, #0
    // str r0, [sp, #0x10]
    // str r4, [sp, #0xc]
    // add r5, r7, #0
    // mov r6, #0x64
    // ldr r0, _0222F590 ; =0x00002BB4
    // ldr r0, [r7, r0]
    // add r1, r0, r4
    // ldr r0, _0222F594 ; =0x0000034A
    // ldrh r0, [r1, r0]
    // str r0, [sp, #8]
    // cmp r0, #0
    // bne _0222F504
    // ldr r0, _0222F58C ; =0x00002D84
    // ldr r0, [r5, r0]
    // cmp r0, #0
    // beq _0222F56E
    // mov r1, #0
    // bl Sprite_SetDrawFlag
    // b _0222F56E
    // ldr r0, [sp, #0xc]
    // ldr r1, _0222F58C ; =0x00002D84
    // add r0, #0xa
    // str r0, [sp]
    // ldr r1, [r5, r1]
    // ldr r2, [sp, #0x10]
    // mov r0, #0
    // mov r3, #0x10
    // bl ov74_02235930
    // ldr r1, _0222F58C ; =0x00002D84
    // str r0, [r5, r1]
    // mov r1, #0
    // ldr r0, [sp, #8]
    // add r2, r1, #0
    // bl GetMonIconNaixEx
    // add r1, r0, #0
    // ldr r0, [r7]
    // mov r2, #0
    // str r0, [sp]
    // mov r0, #0x14
    // add r3, sp, #0x18
    // bl GfGfxLoader_GetCharData
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x18]
    // mov r1, #2
    // ldr r0, [r0, #0x14]
    // lsl r1, r1, #8
    // bl DC_FlushRange
    // ldr r0, [sp, #0x18]
    // mov r2, #2
    // ldr r0, [r0, #0x14]
    // lsl r1, r6, #5
    // lsl r2, r2, #8
    // bl GX_LoadOBJ
    // mov r1, #0
    // ldr r0, [sp, #8]
    // add r2, r1, #0
    // bl GetMonIconPaletteEx
    // add r1, r0, #0
    // ldr r0, _0222F58C ; =0x00002D84
    // add r1, r1, #3
    // ldr r0, [r5, r0]
    // bl Sprite_SetPaletteOverride
    // ldr r0, [sp, #0x14]
    // bl Heap_Free
    // ldr r0, [sp, #0xc]
    // add r4, r4, #2
    // add r0, r0, #1
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x10]
    // add r5, r5, #4
    // add r0, #0x19
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0xc]
    // add r6, #0x10
    // cmp r0, #3
    // blt _0222F4E4
    // add sp, #0x1c
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _0222F58C: .word 0x00002D84
    // _0222F590: .word 0x00002BB4
    // _0222F594: .word 0x0000034A
    // TODO: decompile
}



void ov74_0222F598(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r0, #3
    // mov r1, #0x55
    // lsl r2, r0, #0x10
    // bl Heap_Create
    // ldr r1, _0222F5F4 ; =0x00003D0C
    // add r0, r4, #0
    // mov r2, #0x55
    // bl OverlayManager_CreateAndGetData
    // ldr r2, _0222F5F4 ; =0x00003D0C
    // mov r1, #0
    // add r4, r0, #0
    // bl memset
    // mov r0, #0x55
    // bl BgConfig_Alloc
    // ldr r1, _0222F5F8 ; =0x000029FC
    // str r0, [r4, r1]
    // mov r0, #0x55
    // str r0, [r4]
    // mov r0, #0
    // add r1, r0, #0
    // bl sub_0200FBF4
    // mov r0, #1
    // mov r1, #0
    // bl sub_0200FBF4
    // ldr r0, _0222F5FC ; =0x00002BF4
    // mov r1, #1
    // str r1, [r4, r0]
    // mov r0, #0x55
    // bl ov74_022352A0
    // mov r2, #0x57
    // mov r0, #0
    // mov r1, #0x59
    // lsl r2, r2, #4
    // bl Heap_Create
    // mov r0, #1
    // pop {r4, pc}
    // _0222F5F4: .word 0x00003D0C
    // _0222F5F8: .word 0x000029FC
    // _0222F5FC: .word 0x00002BF4
    // TODO: decompile
}



void ov74_0222F600(void) {
    // push {r4, lr}
    // add r4, r1, #0
    // bl sub_02014AA0
    // mov r0, #3
    // lsl r0, r0, #0xa
    // ldr r0, [r4, r0]
    // bl sub_02014A60
    // ldr r1, _0222F620 ; =0x04000010
    // mov r2, #8
    // mov r3, #1
    // bl sub_02014AB0
    // pop {r4, pc}
    // nop
    // _0222F620: .word 0x04000010
    // TODO: decompile
}



void ov74_0222F624(void) {
    // push {r3, r4, r5, lr}
    // ldr r4, _0222F678 ; =0x000030E8
    // ldr r5, _0222F67C ; =0x00000C14
    // add r4, r0, r4
    // add r0, r5, #0
    // str r1, [r4, r5]
    // sub r0, #0xc
    // str r2, [r4, r0]
    // add r0, r5, #0
    // sub r0, #8
    // sub r5, #0x14
    // str r3, [r4, r0]
    // ldr r0, [r4, r5]
    // cmp r0, #0
    // bne _0222F656
    // mov r2, #6
    // lsl r2, r2, #8
    // mov r0, #0x55
    // add r1, r4, #0
    // add r2, r4, r2
    // bl sub_02014A08
    // mov r1, #3
    // lsl r1, r1, #0xa
    // str r0, [r4, r1]
    // ldr r0, _0222F680 ; =0x00000C04
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // bne _0222F66E
    // mov r2, #1
    // ldr r0, _0222F684 ; =ov74_0222F600
    // add r1, r4, #0
    // lsl r2, r2, #0xa
    // bl SysTask_CreateOnVBlankQueue
    // ldr r1, _0222F680 ; =0x00000C04
    // str r0, [r4, r1]
    // mov r0, #0xc1
    // mov r1, #1
    // lsl r0, r0, #4
    // str r1, [r4, r0]
    // pop {r3, r4, r5, pc}
    // _0222F678: .word 0x000030E8
    // _0222F67C: .word 0x00000C14
    // _0222F680: .word 0x00000C04
    // _0222F684: .word ov74_0222F600
    // TODO: decompile
}



void ov74_0222F688(void) {
    // push {r4, lr}
    // ldr r1, _0222F6BC ; =0x000030E8
    // add r4, r0, r1
    // mov r0, #3
    // lsl r0, r0, #0xa
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // beq _0222F69C
    // bl sub_02014A38
    // ldr r0, _0222F6C0 ; =0x00000C04
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // beq _0222F6A8
    // bl SysTask_Destroy
    // mov r0, #3
    // mov r1, #0
    // lsl r0, r0, #0xa
    // str r1, [r4, r0]
    // add r0, r0, #4
    // str r1, [r4, r0]
    // bl sub_02014AA0
    // pop {r4, pc}
    // nop
    // _0222F6BC: .word 0x000030E8
    // _0222F6C0: .word 0x00000C04
    // TODO: decompile
}



void ov74_0222F6C4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // ldr r1, _0222F7CC ; =0x000030E8
    // mov r5, #0x15
    // add r4, r0, r1
    // mov r0, #0xc1
    // lsl r0, r0, #4
    // ldr r1, [r4, r0]
    // lsl r5, r5, #0xe
    // cmp r1, #0
    // bne _0222F6DC
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // add r1, r0, #4
    // ldr r1, [r4, r1]
    // cmp r1, #1
    // bne _0222F72A
    // add r1, r0, #0
    // sub r1, #8
    // ldr r2, [r4, r1]
    // sub r1, r0, #4
    // ldr r1, [r4, r1]
    // add r2, r2, r1
    // add r1, r0, #0
    // sub r1, #8
    // str r2, [r4, r1]
    // sub r1, r0, #4
    // ldr r2, [r4, r1]
    // add r1, r2, #0
    // add r2, r2, r1
    // sub r1, r0, #4
    // str r2, [r4, r1]
    // add r1, r0, #0
    // sub r1, #8
    // ldr r2, [r4, r1]
    // asr r1, r2, #0xb
    // lsr r1, r1, #0x14
    // add r1, r2, r1
    // asr r2, r1, #0xc
    // mov r1, #0xfa
    // lsl r1, r1, #2
    // cmp r2, r1
    // ble _0222F764
    // mov r2, #0
    // add r1, r0, #0
    // str r2, [r4, r0]
    // sub r1, #8
    // str r2, [r4, r1]
    // sub r0, r0, #4
    // mov r5, #0xa8
    // str r2, [r4, r0]
    // b _0222F764
    // add r1, r0, #0
    // sub r1, #8
    // ldr r2, [r4, r1]
    // sub r1, r0, #4
    // ldr r1, [r4, r1]
    // sub r2, r2, r1
    // add r1, r0, #0
    // sub r1, #8
    // str r2, [r4, r1]
    // sub r1, r0, #4
    // ldr r2, [r4, r1]
    // lsr r1, r2, #0x1f
    // add r1, r2, r1
    // asr r2, r1, #1
    // sub r1, r0, #4
    // str r2, [r4, r1]
    // mov r2, #1
    // ldr r1, [r4, r1]
    // lsl r2, r2, #0xa
    // cmp r1, r2
    // bge _0222F764
    // mov r1, #0
    // lsl r3, r2, #2
    // add r2, r0, #0
    // str r1, [r4, r0]
    // sub r2, #8
    // str r3, [r4, r2]
    // sub r0, r0, #4
    // str r1, [r4, r0]
    // mov r0, #3
    // lsl r0, r0, #0xa
    // ldr r0, [r4, r0]
    // bl sub_02014A4C
    // add r2, r0, #0
    // mov r0, #0x54
    // add r3, r0, #0
    // add r3, #0xfc
    // asr r1, r5, #0xb
    // lsr r1, r1, #0x14
    // add r1, r5, r1
    // asr r1, r1, #0xc
    // bpl _0222F782
    // mov r1, #0
    // cmp r1, #0xa8
    // ble _0222F788
    // mov r1, #0xa8
    // lsl r6, r3, #1
    // add r7, r2, r6
    // sub r6, r1, r0
    // strh r6, [r7, #6]
    // ldrh r6, [r7, #6]
    // sub r1, r0, r1
    // add r3, r3, #4
    // strh r6, [r7, #2]
    // mov r6, #0xa8
    // sub r6, r6, r0
    // lsl r6, r6, #3
    // add r6, r2, r6
    // strh r1, [r6, #6]
    // ldrh r1, [r6, #6]
    // add r0, r0, #1
    // strh r1, [r6, #2]
    // ldr r1, _0222F7D0 ; =0x00000C08
    // ldr r1, [r4, r1]
    // add r5, r5, r1
    // cmp r0, #0xa8
    // blt _0222F776
    // mov r1, #6
    // add r0, r2, #0
    // lsl r1, r1, #8
    // bl DC_FlushRange
    // mov r0, #3
    // lsl r0, r0, #0xa
    // ldr r0, [r4, r0]
    // bl sub_02014A8C
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0222F7CC: .word 0x000030E8
    // _0222F7D0: .word 0x00000C08
    // TODO: decompile
}



void ov74_0222F7D4(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #8
    // add r5, r1, #0
    // add r6, r0, #0
    // bl OverlayManager_GetData
    // ldr r1, [r5]
    // add r4, r0, #0
    // cmp r1, #0x1e
    // bls _0222F7EA
    // b _0222FB2C
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _0222F7F6: ; jump table
    // add r0, r6, #0
    // bl OverlayManager_GetArgs
    // ldr r1, [r0, #8]
    // ldr r0, _0222FB50 ; =0x00002BA4
    // str r1, [r4, r0]
    // ldr r0, [r4, r0]
    // bl Save_MysteryGift_Get
    // ldr r1, _0222FB54 ; =0x00002BA0
    // str r0, [r4, r1]
    // add r0, r1, #4
    // ldr r0, [r4, r0]
    // bl Save_PlayerData_GetOptionsAddr
    // ldr r1, _0222FB58 ; =0x00002BA8
    // str r0, [r4, r1]
    // ldr r0, [r4, r1]
    // bl Options_GetFrame
    // ldr r1, _0222FB5C ; =0x00002BAC
    // str r0, [r4, r1]
    // sub r1, #0xc
    // ldr r0, [r4, r1]
    // mov r1, #4
    // bl SaveMysteryGift_CardGetByIdx
    // ldr r1, _0222FB60 ; =0x00002BB4
    // str r0, [r4, r1]
    // mov r0, #1
    // str r0, [r5]
    // b _0222FB2C
    // bl ov74_0222FCA4
    // ldr r0, _0222FB64 ; =0x000029FC
    // ldr r0, [r4, r0]
    // bl ov74_0222FCC4
    // mov r0, #2
    // str r0, [r5]
    // b _0222FB2C
    // bl ResetAllTextPrinters
    // add r0, r4, #0
    // mov r1, #0
    // bl ov74_0222F314
    // mov r1, #0x1e
    // mov r0, #0
    // lsl r1, r1, #4
    // mov r2, #0x55
    // bl LoadFontPal0
    // mov r1, #0
    // str r1, [sp]
    // mov r0, #0x55
    // str r0, [sp, #4]
    // ldr r0, _0222FB64 ; =0x000029FC
    // mov r2, #1
    // ldr r0, [r4, r0]
    // mov r3, #0xd
    // bl LoadUserFrameGfx1
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #0x55
    // str r0, [sp, #4]
    // ldr r0, _0222FB64 ; =0x000029FC
    // mov r1, #0
    // ldr r0, [r4, r0]
    // mov r2, #0xa
    // mov r3, #0xe
    // bl LoadUserFrameGfx1
    // ldr r0, _0222FB5C ; =0x00002BAC
    // mov r1, #0
    // ldr r0, [r4, r0]
    // mov r2, #0x13
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp]
    // mov r0, #0x55
    // str r0, [sp, #4]
    // ldr r0, _0222FB64 ; =0x000029FC
    // mov r3, #0xa
    // ldr r0, [r4, r0]
    // bl LoadUserFrameGfx2
    // add r0, r4, #0
    // mov r1, #1
    // mov r2, #0
    // bl ov74_0222F024
    // add r0, r4, #0
    // mov r1, #1
    // mov r2, #3
    // add r3, r5, #0
    // bl ov74_0222EFF0
    // b _0222FB2C
    // ldr r0, _0222FB68 ; =gSystem
    // ldr r1, [r0, #0x48]
    // mov r0, #2
    // tst r0, r1
    // beq _0222F91A
    // ldr r0, _0222FB6C ; =SEQ_SE_DP_SELECT
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #0
    // mov r2, #0x1d
    // add r3, r5, #0
    // bl ov74_0222EFF0
    // b _0222FB2C
    // mov r0, #1
    // tst r0, r1
    // bne _0222F922
    // b _0222FB2C
    // ldr r0, _0222FB6C ; =SEQ_SE_DP_SELECT
    // bl PlaySE
    // mov r0, #4
    // str r0, [r5]
    // b _0222FB2C
    // ldr r1, _0222FB70 ; =0x00002BC4
    // mov r3, #0xa
    // add r1, r4, r1
    // mov r2, #7
    // lsl r3, r3, #6
    // bl ov74_0222F1BC
    // ldr r3, _0222FB74 ; =0x00002BE4
    // mov r2, #8
    // add r1, r3, #0
    // str r0, [r4, r3]
    // sub r1, #0x10
    // ldr r3, [r4, r3]
    // add r0, r4, #0
    // add r1, r4, r1
    // bl ov74_0222F1BC
    // mov r0, #5
    // str r0, [r5]
    // b _0222FB2C
    // add r0, r6, #0
    // add r1, r5, #0
    // mov r2, #0
    // bl ov74_0222F404
    // ldr r0, _0222FB68 ; =gSystem
    // ldr r1, [r0, #0x48]
    // mov r0, #2
    // tst r0, r1
    // beq _0222FA28
    // ldr r0, _0222FB6C ; =SEQ_SE_DP_SELECT
    // bl PlaySE
    // mov r0, #0xb
    // str r0, [r5]
    // b _0222FB2C
    // ldr r0, _0222FB78 ; =SEQ_SE_DP_CARD2
    // bl PlaySE
    // mov r0, #0x10
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // ldr r0, _0222FB70 ; =0x00002BC4
    // mov r1, #0
    // add r0, r4, r0
    // bl ov74_0222ECEC
    // ldr r0, _0222FB7C ; =0x00002BD4
    // mov r1, #0
    // add r0, r4, r0
    // bl ov74_0222ECD4
    // mov r1, #1
    // add r0, r4, #0
    // lsl r2, r1, #0xc
    // mov r3, #0x66
    // bl ov74_0222F624
    // mov r0, #7
    // str r0, [r5]
    // b _0222FB2C
    // bl ov74_0222F6C4
    // cmp r0, #0
    // beq _0222FA28
    // mov r1, #1
    // add r0, r4, #0
    // add r2, r1, #0
    // bl ov74_0222F024
    // ldr r2, _0222FB80 ; =0x00708000
    // add r0, r4, #0
    // mov r1, #0
    // lsr r3, r2, #1
    // bl ov74_0222F624
    // mov r0, #8
    // str r0, [r5]
    // b _0222FB2C
    // bl ov74_0222F6C4
    // ldr r0, _0222FB68 ; =gSystem
    // ldr r1, [r0, #0x48]
    // mov r0, #3
    // tst r0, r1
    // beq _0222FA28
    // ldr r0, _0222FB78 ; =SEQ_SE_DP_CARD2
    // bl PlaySE
    // mov r1, #1
    // add r0, r4, #0
    // lsl r2, r1, #0xc
    // mov r3, #0x66
    // bl ov74_0222F624
    // mov r0, #9
    // str r0, [r5]
    // b _0222FB2C
    // bl ov74_0222F6C4
    // cmp r0, #0
    // beq _0222FA28
    // add r0, r4, #0
    // mov r1, #1
    // mov r2, #0
    // bl ov74_0222F024
    // ldr r2, _0222FB80 ; =0x00708000
    // add r0, r4, #0
    // mov r1, #0
    // lsr r3, r2, #1
    // bl ov74_0222F624
    // mov r0, #0x10
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #0xa
    // str r0, [r5]
    // b _0222FB2C
    // bl ov74_0222F6C4
    // cmp r0, #0
    // bne _0222FA2A
    // b _0222FB2C
    // ldr r0, _0222FB70 ; =0x00002BC4
    // mov r1, #0
    // add r0, r4, r0
    // mov r2, #0x13
    // mov r3, #0xa
    // bl DrawFrameAndWindow2
    // ldr r0, _0222FB7C ; =0x00002BD4
    // mov r1, #0
    // add r0, r4, r0
    // mov r2, #0xa
    // mov r3, #0xe
    // bl DrawFrameAndWindow1
    // mov r0, #0x10
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // add r0, r4, #0
    // bl ov74_0222F688
    // mov r0, #5
    // str r0, [r5]
    // b _0222FB2C
    // bl ov74_0222EDC0
    // ldr r0, _0222FB70 ; =0x00002BC4
    // mov r1, #0
    // add r0, r4, r0
    // bl ov74_0222ECEC
    // ldr r0, _0222FB70 ; =0x00002BC4
    // add r0, r4, r0
    // bl ClearWindowTilemapAndCopyToVram
    // ldr r0, _0222FB70 ; =0x00002BC4
    // add r0, r4, r0
    // bl RemoveWindow
    // mov r0, #3
    // str r0, [r5]
    // b _0222FB2C
    // mov r1, #0
    // mov r2, #0x15
    // add r3, r5, #0
    // bl ov74_0222EFF0
    // b _0222FB2C
    // bl ov74_0222EC60
    // ldr r0, _0222FB70 ; =0x00002BC4
    // mov r1, #0
    // add r0, r4, r0
    // bl ov74_0222ECEC
    // ldr r0, _0222FB7C ; =0x00002BD4
    // mov r1, #0
    // add r0, r4, r0
    // bl ov74_0222ECD4
    // add r0, r4, #0
    // mov r1, #1
    // mov r2, #0
    // bl ov74_0222F024
    // mov r1, #0x1e
    // mov r0, #0
    // lsl r1, r1, #4
    // mov r2, #0x55
    // bl LoadFontPal0
    // add r0, r4, #0
    // mov r1, #1
    // mov r2, #4
    // add r3, r5, #0
    // bl ov74_0222EFF0
    // b _0222FB2C
    // bl sub_02037D78
    // cmp r0, #0
    // bne _0222FB2C
    // ldr r0, _0222FB84 ; =0x00002BF8
    // ldr r0, [r4, r0]
    // str r0, [r5]
    // b _0222FB2C
    // ldr r0, _0222FB68 ; =gSystem
    // ldr r1, [r0, #0x48]
    // mov r0, #3
    // tst r0, r1
    // beq _0222FB2C
    // ldr r0, _0222FB70 ; =0x00002BC4
    // mov r1, #0
    // add r0, r4, r0
    // bl ov74_0222ECEC
    // ldr r0, _0222FB70 ; =0x00002BC4
    // add r0, r4, r0
    // bl ClearWindowTilemapAndCopyToVram
    // ldr r0, _0222FB70 ; =0x00002BC4
    // add r0, r4, r0
    // bl RemoveWindow
    // mov r0, #3
    // str r0, [r5]
    // b _0222FB2C
    // mov r1, #0
    // mov r2, #0x1d
    // add r3, r5, #0
    // bl ov74_0222EFF0
    // b _0222FB2C
    // bl IsPaletteFadeFinished
    // cmp r0, #0
    // beq _0222FB2C
    // ldr r0, _0222FB84 ; =0x00002BF8
    // ldr r0, [r4, r0]
    // str r0, [r5]
    // b _0222FB2C
    // bl ov74_0222EC60
    // add r0, r4, #0
    // bl ov74_0222F688
    // add sp, #8
    // mov r0, #1
    // pop {r4, r5, r6, pc}
    // ldr r0, _0222FB88 ; =0x00002BFC
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // beq _0222FB38
    // bl SpriteList_RenderAndAnimateSprites
    // bl ov74_022358BC
    // mov r0, #0x3d
    // lsl r0, r0, #8
    // ldr r1, [r4, r0]
    // cmp r1, #0
    // beq _0222FB4A
    // add r0, r4, #0
    // blx r1
    // mov r0, #0
    // add sp, #8
    // pop {r4, r5, r6, pc}
    // _0222FB50: .word 0x00002BA4
    // _0222FB54: .word 0x00002BA0
    // _0222FB58: .word 0x00002BA8
    // _0222FB5C: .word 0x00002BAC
    // _0222FB60: .word 0x00002BB4
    // _0222FB64: .word 0x000029FC
    // _0222FB68: .word gSystem
    // _0222FB6C: .word SEQ_SE_DP_SELECT
    // _0222FB70: .word 0x00002BC4
    // _0222FB74: .word 0x00002BE4
    // _0222FB78: .word SEQ_SE_DP_CARD2
    // _0222FB7C: .word 0x00002BD4
    // _0222FB80: .word 0x00708000
    // _0222FB84: .word 0x00002BF8
    // _0222FB88: .word 0x00002BFC
    // TODO: decompile
}



void ov74_0222FB8C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // str r0, [sp]
    // bl OverlayManager_GetData
    // add r7, r0, #0
    // ldr r0, _0222FC38 ; =0x00002A08
    // mov r6, #0
    // add r4, r7, #0
    // add r5, r7, r0
    // ldr r0, _0222FC38 ; =0x00002A08
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // beq _0222FBB2
    // add r0, r5, #0
    // bl ClearWindowTilemapAndCopyToVram
    // add r0, r5, #0
    // bl RemoveWindow
    // add r6, r6, #1
    // add r4, #0x10
    // add r5, #0x10
    // cmp r6, #0xb
    // blo _0222FB9E
    // ldr r0, _0222FC3C ; =0x00002BC4
    // ldr r1, [r7, r0]
    // cmp r1, #0
    // beq _0222FBD2
    // add r0, r7, r0
    // bl ClearWindowTilemapAndCopyToVram
    // ldr r0, _0222FC3C ; =0x00002BC4
    // add r0, r7, r0
    // bl RemoveWindow
    // ldr r0, _0222FC40 ; =0x00002BD4
    // ldr r1, [r7, r0]
    // cmp r1, #0
    // beq _0222FBE8
    // add r0, r7, r0
    // bl ClearWindowTilemapAndCopyToVram
    // ldr r0, _0222FC40 ; =0x00002BD4
    // add r0, r7, r0
    // bl RemoveWindow
    // ldr r0, _0222FC44 ; =0x000029FC
    // mov r1, #0
    // ldr r0, [r7, r0]
    // bl FreeBgTilemapBuffer
    // ldr r0, _0222FC44 ; =0x000029FC
    // mov r1, #1
    // ldr r0, [r7, r0]
    // bl FreeBgTilemapBuffer
    // ldr r0, _0222FC44 ; =0x000029FC
    // mov r1, #2
    // ldr r0, [r7, r0]
    // bl FreeBgTilemapBuffer
    // ldr r0, _0222FC44 ; =0x000029FC
    // mov r1, #3
    // ldr r0, [r7, r0]
    // bl FreeBgTilemapBuffer
    // ldr r0, _0222FC44 ; =0x000029FC
    // ldr r0, [r7, r0]
    // bl Heap_Free
    // ldr r0, _0222FC48 ; =FS_OVERLAY_ID(OVY_74)
    // ldr r1, _0222FC4C ; =gApp_MainMenu_SelectOption_MysteryGift
    // bl RegisterMainOverlay
    // mov r0, #0x59
    // bl Heap_Destroy
    // ldr r0, [sp]
    // bl OverlayManager_FreeData
    // mov r0, #0x55
    // bl Heap_Destroy
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0222FC38: .word 0x00002A08
    // _0222FC3C: .word 0x00002BC4
    // _0222FC40: .word 0x00002BD4
    // _0222FC44: .word 0x000029FC
    // _0222FC48: .word FS_OVERLAY_ID(OVY_74)
    // _0222FC4C: .word gApp_MainMenu_SelectOption_MysteryGift
    // TODO: decompile
}



void ov74_0222FC50(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r0, #0
    // add r7, r1, #0
    // add r5, r2, #0
    // bl ov74_0222FCC4
    // ldr r1, _0222FC98 ; =0x00003D0C
    // add r0, r5, #0
    // bl Heap_AllocAtEnd
    // ldr r2, _0222FC98 ; =0x00003D0C
    // mov r1, #0
    // add r4, r0, #0
    // bl memset
    // ldr r0, _0222FC9C ; =0x000029FC
    // mov r1, #0x1e
    // str r6, [r4, r0]
    // mov r0, #0
    // lsl r1, r1, #4
    // add r2, r5, #0
    // str r5, [r4]
    // bl LoadFontPal0
    // ldr r0, _0222FCA0 ; =0x00002BB4
    // mov r1, #1
    // str r7, [r4, r0]
    // add r0, r4, #0
    // mov r2, #0
    // bl ov74_0222F024
    // add r0, r4, #0
    // bl Heap_Free
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0222FC98: .word 0x00003D0C
    // _0222FC9C: .word 0x000029FC
    // _0222FCA0: .word 0x00002BB4
    // TODO: decompile
}



void ov74_0222FCA4(void) {
}



void ov74_0222FCC4(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x80
    // ldr r5, _0222FD84 ; =_0223B430
    // add r3, sp, #0x70
    // add r4, r0, #0
    // add r2, r3, #0
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // add r0, r2, #0
    // bl SetBothScreensModesAndDisable
    // ldr r5, _0222FD88 ; =_0223B45C
    // add r3, sp, #0x54
    // ldmia r5!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // mov r1, #0
    // str r0, [r3]
    // add r0, r4, #0
    // add r3, r1, #0
    // bl InitBgFromTemplate
    // add r0, r4, #0
    // mov r1, #0
    // bl BgClearTilemapBufferAndCommit
    // ldr r5, _0222FD8C ; =_0223B494
    // add r3, sp, #0x38
    // ldmia r5!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // mov r1, #1
    // str r0, [r3]
    // add r0, r4, #0
    // mov r3, #0
    // bl InitBgFromTemplate
    // add r0, r4, #0
    // mov r1, #1
    // bl BgClearTilemapBufferAndCommit
    // ldr r5, _0222FD90 ; =_0223B478
    // add r3, sp, #0x1c
    // ldmia r5!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // mov r1, #2
    // str r0, [r3]
    // add r0, r4, #0
    // mov r3, #0
    // bl InitBgFromTemplate
    // add r0, r4, #0
    // mov r1, #2
    // bl BgClearTilemapBufferAndCommit
    // ldr r5, _0222FD94 ; =_0223B440
    // add r3, sp, #0
    // ldmia r5!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // mov r1, #3
    // str r0, [r3]
    // add r0, r4, #0
    // mov r3, #0
    // bl InitBgFromTemplate
    // add r0, r4, #0
    // mov r1, #3
    // bl BgClearTilemapBufferAndCommit
    // add sp, #0x80
    // pop {r3, r4, r5, pc}
    // nop
    // _0222FD84: .word _0223B430
    // _0222FD88: .word _0223B45C
    // _0222FD8C: .word _0223B494
    // _0222FD90: .word _0223B478
    // _0222FD94: .word _0223B440
    // TODO: decompile
}



void ov74_0222FD98(void) {
    // TODO: decompile
}



void ov74_0222FE4C(void) {
}



void ov74_0222FE5C(void) {
}



void ov74_0222FE68(void) {
}



void ov74_0222FE78(void) {
    ov74_0223107C();
    ov74_0223105C();
    ov74_02231724(*((u32*)(r0 + 0x1c)));
    *((u32*)(r4 + 0x1c)) = 1;
}



void ov74_0222FEA0(void) {
    ov74_0223115C();
    *((u8*)(r0 + 8)) = 0;
    *((u8*)(r0 + 0xa)) = 0;
    // add r0, #0xc
}



void ov74_0222FEC8(void) {
    // push {r3, lr}
    // bl ov74_0223115C
    // add r1, r0, #0
    // add r1, #0x62
    // ldrh r3, [r1]
    // mov r2, #1
    // add r1, r3, #0
    // tst r1, r2
    // beq _0222FEEE
    // add r1, r0, #0
    // add r1, #0x62
    // ldrh r3, [r1]
    // mov r1, #1
    // add r0, #0x62
    // bic r3, r1
    // strh r3, [r0]
    // add r0, r2, #0
    // pop {r3, pc}
    // mov r1, #0x40
    // add r2, r3, #0
    // tst r2, r1
    // beq _0222FF08
    // add r1, r0, #0
    // add r1, #0x62
    // ldrh r2, [r1]
    // mov r1, #0x40
    // add r0, #0x62
    // bic r2, r1
    // strh r2, [r0]
    // mov r0, #7
    // pop {r3, pc}
    // lsl r1, r1, #6
    // tst r1, r3
    // beq _0222FF20
    // add r1, r0, #0
    // add r1, #0x62
    // ldrh r2, [r1]
    // ldr r1, _0222FF24 ; =0xFFFFEFFF
    // add r0, #0x62
    // and r1, r2
    // strh r1, [r0]
    // mov r0, #0xd
    // pop {r3, pc}
    // mov r0, #0
    // pop {r3, pc}
    // _0222FF24: .word 0xFFFFEFFF
    // TODO: decompile
}



void ov74_0222FF28(void) {
    ov74_0223115C();
    // add r0, #0x60
    // strb r1, [r0]
    WM_GetAllowedChannel(1);
    // add r1, #0x62
    // strh r0, [r1]
    // add r0, #0x62
    // ldrh r1, [r0]
    // add r0, #0x61
    // strb r1, [r0]
    // add r4, #0x64
    // strb r0, [r4]
}



void ov74_0222FF68(void) {
}



void ov74_0222FF80(void) {
}



void ov74_0222FFAC(void) {
    ov74_022310C4();
    WM_GetAllowedChannel();
    // mov ip, r2
    // sub r5, r5, r6
    // ror r5, r4
    // add r5, r6, r5
    // lsl r6, r5
    // tst r5, r6
    // mov r0, ip
    // add r0, r0, r1
    // sub r1, r1, r2
    // ror r1, r0
    // add r0, r2, r1
    *((u16*)(r7 + 4)) = (0x1c + 1);
}



void ov74_0222FFFC(void) {
    ov74_0223144C(*((u16*)(r0 + 4)));
    ov74_02231448(*((u16*)(r4 + 2)));
    ov74_0222FE4C();
}



void ov74_02230018(void) {
    ov74_0223144C(*((u16*)(r0 + 8)));
    ov74_02231448(*((u16*)(r4 + 2)));
}



void ov74_02230030(void) {
    ov74_02231070(2);
    ov74_0223107C();
    ov74_022314BC();
    ov74_02231070(2);
    ov74_022316E8();
    ov74_022314BC();
    ov74_02231070(2);
    ov74_02231448();
    ov74_022314BC();
}



void ov74_02230070(void) {
    ov74_0223107C(*((u16*)(r0 + 2)));
    WM_Finish();
    ov74_02231070(0xc);
    ov74_0223113C(1);
    ov74_02231070(1);
    ov74_02231448();
    ov74_02231070(4);
}



void ov74_022300A8(void) {
    ov74_0223115C(*((u16*)(r0 + 2)));
    // add r0, #0x61
    // ldrb r0, [r0]
    // add r0, #0x61
    // strb r1, [r0]
    // add r0, #0x64
    // strb r1, [r0]
    ov74_0222FEC8(r0, *((u16*)(r5 + 8)));
    ov74_022314DC();
    ov74_0222FE4C();
    // add r4, #0x61
    // ldrb r0, [r4]
    ov74_0222FF68();
    ov74_02231508();
    ov74_0222FE4C();
    ov74_0222FE4C();
    ov74_02231448();
    ov74_0222FE4C();
}



void ov74_02230110(void) {
    ov74_0222FE78(*((u16*)(r0 + 2)));
    ov74_02231544();
    ov74_0222FE4C();
    ov74_02231448();
    ov74_0222FE4C();
}



void ov74_02230138(void) {
    ov74_0223144C(*((u16*)(r0 + 8)));
    ov74_0223115C(*((u16*)(r5 + 2)));
    ov74_02231070(8);
    ov74_0222FE78();
    // add r0, #0x60
    // ldrb r0, [r0]
    // add r0, #0x60
    // strb r1, [r0]
    ov74_02231670(*((u16*)(r5 + 8)), 2);
    ov74_0222FE4C();
    ov74_0223110C(0);
    ov74_0223115C();
    ov74_02231458();
    // add r4, #0x60
    // ldrb r0, [r4]
    // add r4, #0x14
    ov74_022311AC();
    ov74_022311BC(((*((u32*)(r5 + 0x14)) << 0x18) >> 0x18));
    ov74_022311CC(((*((u32*)r4) << 0x14) >> 0x1c));
    ov74_0223115C((*((u32*)(r4 + 4)) >> 0x10));
    // add r0, #0xa
    ov74_0222FE5C(r5);
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0xa
    ov74_0222FE68(r5);
    // add r1, sp, #0
    // strh r0, [r1]
    // ldrh r0, [r1]
    // ldr r2, [sp, #8]
    *((u16*)(r1 + 2)) = r0;
    // mul r1, r0
    // add r1, r4, r1
    *((u16*)(0xc + 6)) = *((u16*)(r5 + 0x10));
    *((u8*)(0xc + 0xa)) = 1;
    // mul r1, r0
    // str r2, [r4, r1]
    // add r0, sp, #0
    // add r1, r4, r1
    *((u16*)(0xc + 4)) = *((u16*)(1 + 2));
    *((u16*)(0xc + 6)) = *((u16*)(r5 + 0x10));
    *((u8*)(0xc + 0xa)) = 1;
    // add r3, #0xc
    ov74_0222FEA0(*((u16*)(r5 + 0x10)), 0xc, r4);
    ov74_02231448();
    ov74_0222FE4C();
}



void ov74_0223026C(void) {
    // str r0, [sp]
    ov74_02231154();
    ov74_0222FE5C((r4 + 4));
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    ov74_0222FE68((r4 + 4));
    // add r2, sp, #4
    // strh r0, [r2]
    // ldrh r0, [r2]
    // ldr r6, [sp, #0xc]
    *((u16*)(r2 + 2)) = r0;
    // add r5, #0x34
    // ldrh r5, [r5]
    // mul r1, r0
    // ldr r0, [sp, #0xc]
    // str r0, [r7, r1]
    // add r0, r7, r1
    // add r5, #0x58
    // ldrh r0, [r5]
    // strh r0, [r3]
    // add r3, r7, r1
    // add r4, #0x70
    // add r3, #0x1c
    // ldrh r0, [r4]
    // strh r0, [r3]
    // add r0, sp, #4
    // add r1, r7, r1
    *((u16*)(0x38 + 0x34)) = *((u16*)(1 + 2));
    // ldr r0, [sp]
    // add r1, #0x36
    // strb r0, [r1]
    // add r1, #0x38
}



void ov74_0223030C(void) {
    ov74_0222FFAC();
    ov74_02231560();
    ov74_0222FE4C();
}



void ov74_02230320(void) {
    // push {r4, r5, r6, lr}
    // add r6, r0, #0
    // bl ov74_02231100
    // add r4, r0, #0
    // bl ov74_02231154
    // add r5, r0, #0
    // bl ov74_0222FE78
    // cmp r0, #0
    // beq _0223033C
    // mov r0, #1
    // pop {r4, r5, r6, pc}
    // mov r1, #0
    // add r2, r1, #0
    // add r3, r5, #0
    // ldr r0, [r3]
    // cmp r0, #0
    // beq _0223034C
    // mov r1, #1
    // b _02230354
    // add r2, r2, #1
    // add r3, #0x38
    // cmp r2, #8
    // blt _02230342
    // cmp r1, #0
    // beq _02230372
    // mov r0, #7
    // lsl r0, r0, #6
    // ldrh r0, [r5, r0]
    // cmp r0, #0
    // bne _02230372
    // bl ov74_0223161C
    // cmp r0, #0
    // bne _0223036E
    // bl ov74_0222FE4C
    // mov r0, #1
    // pop {r4, r5, r6, pc}
    // add r0, r4, #0
    // mov r1, #0xc0
    // bl DC_InvalidateRange
    // bl ov74_02231154
    // bl ov74_02231454
    // ldrh r0, [r6, #0x36]
    // cmp r0, #8
    // blo _022303FC
    // bl ov74_022311A0
    // ldr r1, [r4, #0x44]
    // cmp r1, r0
    // bne _022303FC
    // add r5, r4, #0
    // add r5, #0x50
    // bl ov74_022311AC
    // ldr r1, [r4, #0x50]
    // lsl r1, r1, #0x18
    // lsr r1, r1, #0x18
    // cmp r1, r0
    // bne _022303FC
    // bl ov74_022311BC
    // ldr r1, [r5]
    // lsl r1, r1, #0x14
    // lsr r1, r1, #0x1c
    // cmp r1, r0
    // bhi _022303FC
    // bl ov74_022311CC
    // ldr r1, [r5, #4]
    // lsr r1, r1, #0x10
    // cmp r1, r0
    // bne _022303FC
    // add r0, r6, #0
    // add r1, r4, #0
    // bl ov74_0223026C
    // cmp r0, #0
    // beq _022303EC
    // bl ov74_02231154
    // ldr r1, _02230400 ; =0x000001C2
    // ldrb r2, [r0, r1]
    // add r2, r2, #1
    // strb r2, [r0, r1]
    // ldrb r0, [r0, r1]
    // cmp r0, #0x1c
    // bls _022303FC
    // bl ov74_0223161C
    // cmp r0, #0
    // bne _022303FC
    // bl ov74_0222FE4C
    // mov r0, #1
    // pop {r4, r5, r6, pc}
    // bl ov74_0223161C
    // cmp r0, #0
    // bne _022303F8
    // bl ov74_0222FE4C
    // mov r0, #1
    // pop {r4, r5, r6, pc}
    // mov r0, #0
    // pop {r4, r5, r6, pc}
    // _02230400: .word 0x000001C2
    // TODO: decompile
}



void ov74_02230404(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldrh r0, [r4, #8]
    // bl ov74_0223144C
    // ldrh r0, [r4, #2]
    // cmp r0, #0
    // bne _0223046A
    // bl ov74_02231100
    // bl ov74_02231450
    // mov r0, #6
    // bl ov74_02231070
    // bl ov74_0222FE78
    // cmp r0, #0
    // bne _02230472
    // bl ov74_02231094
    // cmp r0, #1
    // bne _02230444
    // bl ov74_02231154
    // ldr r2, _02230474 ; =0x000001C3
    // mov r1, #0xf0
    // ldrb r3, [r0, r2]
    // bic r3, r1
    // mov r1, #0x10
    // orr r1, r3
    // strb r1, [r0, r2]
    // ldrh r0, [r4, #8]
    // cmp r0, #4
    // beq _02230458
    // cmp r0, #5
    // bne _0223045E
    // add r0, r4, #0
    // bl ov74_02230320
    // cmp r0, #0
    // bne _02230472
    // bl ov74_0223030C
    // pop {r4, pc}
    // ldrh r0, [r4, #2]
    // bl ov74_02231448
    // bl ov74_0222FE4C
    // pop {r4, pc}
    // bl ov74_02231448
    // bl ov74_0222FE4C
    // pop {r4, pc}
    // _02230474: .word 0x000001C3
    // TODO: decompile
}



void ov74_02230478(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #8
    // bl ov74_02231100
    // add r4, r0, #0
    // bl ov74_02231154
    // add r6, r0, #0
    // bl ov74_02231054
    // bl ov74_0222FE78
    // cmp r0, #0
    // beq _0223049A
    // add sp, #8
    // mov r0, #1
    // pop {r4, r5, r6, pc}
    // add r0, r4, #0
    // mov r1, #0xc0
    // bl DC_InvalidateRange
    // bl ov74_02231154
    // bl ov74_02231454
    // ldrh r0, [r4, #0x3c]
    // cmp r0, #8
    // blo _02230514
    // bl ov74_022311A0
    // ldr r1, [r4, #0x44]
    // cmp r1, r0
    // bne _02230514
    // add r5, r4, #0
    // add r5, #0x50
    // bl ov74_022311AC
    // ldr r1, [r4, #0x50]
    // lsl r1, r1, #0x18
    // lsr r1, r1, #0x18
    // cmp r1, r0
    // bne _02230514
    // bl ov74_022311BC
    // ldr r1, [r5]
    // lsl r1, r1, #0x14
    // lsr r1, r1, #0x1c
    // cmp r1, r0
    // bhi _02230514
    // bl ov74_022311CC
    // ldr r1, [r5, #4]
    // lsr r1, r1, #0x10
    // cmp r1, r0
    // bne _02230514
    // add r0, r4, #4
    // bl ov74_0222FE5C
    // ldr r1, _0223051C ; =0x000001C3
    // str r0, [sp]
    // ldrb r1, [r6, r1]
    // str r0, [sp, #4]
    // lsl r1, r1, #0x1c
    // lsr r2, r1, #0x1c
    // mov r1, #0x38
    // mul r1, r2
    // ldr r1, [r6, r1]
    // cmp r1, r0
    // bne _02230514
    // bl ov74_0223161C
    // cmp r0, #0
    // bne _0223050E
    // bl ov74_0222FE4C
    // add sp, #8
    // mov r0, #1
    // pop {r4, r5, r6, pc}
    // mov r0, #0
    // add sp, #8
    // pop {r4, r5, r6, pc}
    // nop
    // _0223051C: .word 0x000001C3
    // TODO: decompile
}



void ov74_02230520(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldrh r0, [r4, #8]
    // bl ov74_0223144C
    // ldrh r0, [r4, #2]
    // cmp r0, #0
    // bne _02230580
    // bl ov74_02231154
    // ldr r2, _0223058C ; =0x000001C3
    // mov r1, #0xf0
    // ldrb r3, [r0, r2]
    // bic r3, r1
    // mov r1, #0x20
    // orr r1, r3
    // strb r1, [r0, r2]
    // mov r0, #6
    // bl ov74_02231070
    // bl ov74_0222FE78
    // cmp r0, #0
    // bne _02230588
    // ldrh r0, [r4, #8]
    // cmp r0, #4
    // beq _02230562
    // cmp r0, #5
    // bne _02230574
    // bl ov74_02230478
    // cmp r0, #0
    // bne _02230588
    // bl ov74_0222FFAC
    // bl ov74_02231584
    // cmp r0, #0
    // bne _02230588
    // bl ov74_0222FE4C
    // pop {r4, pc}
    // ldrh r0, [r4, #2]
    // bl ov74_02231448
    // bl ov74_0222FE4C
    // pop {r4, pc}
    // bl ov74_02231448
    // bl ov74_0222FE4C
    // pop {r4, pc}
    // nop
    // _0223058C: .word 0x000001C3
    // TODO: decompile
}



void ov74_02230590(void) {
    // push {r3, lr}
    // ldrh r0, [r0, #2]
    // cmp r0, #0
    // bne _022305D4
    // mov r0, #7
    // bl ov74_02231070
    // bl ov74_0222FE78
    // cmp r0, #0
    // bne _022305DC
    // bl ov74_02231094
    // cmp r0, #1
    // bne _022305DC
    // bl ov74_02231154
    // ldr r1, _022305E0 ; =0x000001C3
    // ldrb r0, [r0, r1]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x1c
    // cmp r0, #2
    // bne _022305DC
    // bl ov74_02231638
    // cmp r0, #0
    // bne _022305CC
    // bl ov74_0222FE4C
    // pop {r3, pc}
    // mov r0, #3
    // bl ov74_02231070
    // pop {r3, pc}
    // bl ov74_02231448
    // bl ov74_0222FE4C
    // pop {r3, pc}
    // nop
    // _022305E0: .word 0x000001C3
    // TODO: decompile
}



void ov74_022305E4(void) {
    ov74_0223144C(*((u16*)(r0 + 8)));
    ov74_02231070(9);
    ov74_0222FE78();
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02230614: ; jump table
    ov74_0223110C(*((u16*)(r4 + 0xa)));
    ov74_02231124(1);
    ov74_02231130(0);
    ov74_02231670();
    ov74_0222FE4C();
    ov74_02231118();
    ov74_02231130(1);
    ov74_02231124(0);
    ov74_02231448(*((u16*)(r4 + 2)));
    ov74_0222FE4C();
    ov74_02231448();
    ov74_0222FE4C();
}



void ov74_02230674(void) {
    ov74_02231094();
    ov74_0222FF28();
    ov74_0222FEC8();
    ov74_022314DC();
    ov74_0223115C();
    // add r0, #0x60
    // strb r1, [r0]
    ov74_02231070(3, 1);
    ov74_0222FE4C();
    ov74_0222FF80();
    ov74_02231560();
    ov74_0222FE4C();
    ov74_02231070(3);
}



void ov74_022306C8(void) {
    ov74_0223144C(*((u16*)(r0 + 4)));
    // ldrh r0, [r4]
    ov74_0222FE78(*((u16*)(r4 + 2)));
    ov74_02231094();
    ov74_02231070(0xa);
    ov74_02231070(0xb);
    ov74_0222FE4C();
}



void ov74_02230714(void) {
    ov74_02231184();
    DC_FlushRange(*((u32*)(r6 + 0xc)), *((u16*)(r6 + 0x10)));
    MI_CpuCopy8(*((u32*)(r6 + 0xc)), *((u32*)(r4 + 0xc)), *((u16*)(r6 + 0x10)));
    ov74_022311AC();
    ov74_022311BC(((*((u32*)r5) << 0x18) >> 0x18));
    ov74_022313F0(*((u32*)(r4 + 0xc)), ((*((u32*)r5) << 0x14) >> 0x1c));
    ov74_0223145C(*((u32*)(r4 + 0xc)), ((*((u32*)(r5 + 8)) << 0x18) >> 0x18));
    ov74_02231424(*((u32*)(r4 + 0xc)));
    *((u8*)(r4 + 0x19)) = 2;
    *((u8*)(r4 + 0x19)) = 0;
}



void ov74_0223078C(void) {
    ov74_02231184();
    ov74_02231094();
    DC_FlushRange(*((u32*)(r6 + 0xc)), *((u16*)(r6 + 0x10)));
    MI_CpuCopy8(*((u32*)(r6 + 0xc)), *((u32*)(r4 + 0xc)), *((u16*)(r6 + 0x10)));
    ov74_022311AC();
    ov74_022311BC(((*((u32*)r5) << 0x18) >> 0x18));
    ov74_022313F0(*((u32*)(r4 + 0xc)), ((*((u32*)r5) << 0x14) >> 0x1c));
    ov74_0223115C(((*((u32*)(r5 + 8)) << 0x18) >> 0x18));
    // mul r1, r2
    // add r1, r0, r1
    *((u8*)(0xc + 8)) = 1;
    *((u8*)(0xc + 9)) = 3;
    *((u8*)(r4 + 0x1a)) = 0xb4;
    *((u8*)(r4 + 0x19)) = 0;
    // add r3, #0xc
}



void ov74_02230818(void) {
    // push {r4, r5, r6, lr}
    // add r6, r0, #0
    // bl ov74_02231184
    // add r4, r0, #0
    // ldrb r0, [r4, #0x1c]
    // cmp r0, #0xfd
    // bne _02230830
    // add r0, r6, #0
    // bl ov74_0223078C
    // pop {r4, r5, r6, pc}
    // ldrb r0, [r4, #0x19]
    // cmp r0, #1
    // beq _0223083C
    // ldrb r0, [r4, #0x19]
    // cmp r0, #3
    // bne _022308D8
    // ldrb r0, [r4, #0x1b]
    // cmp r0, #0
    // bne _022308D8
    // ldrh r1, [r6, #0x10]
    // ldr r0, [r6, #0xc]
    // ldr r5, [r4, #0xc]
    // bl DC_FlushRange
    // ldrh r2, [r6, #0x10]
    // ldr r0, [r6, #0xc]
    // ldr r1, [r4, #0xc]
    // bl MI_CpuCopy8
    // bl ov74_022311AC
    // ldr r1, [r5]
    // lsl r1, r1, #0x18
    // lsr r1, r1, #0x18
    // cmp r1, r0
    // bne _022308D8
    // bl ov74_022311BC
    // ldr r1, [r5]
    // lsl r1, r1, #0x14
    // lsr r1, r1, #0x1c
    // cmp r1, r0
    // bhi _022308D8
    // ldr r0, [r4, #0xc]
    // bl ov74_022313F0
    // ldr r0, [r5, #8]
    // lsl r0, r0, #0x18
    // lsr r1, r0, #0x18
    // ldrb r0, [r4, #0x1c]
    // cmp r1, r0
    // bne _022308D8
    // ldr r0, [r4, #0xc]
    // bl ov74_0223145C
    // mov r0, #0
    // strb r0, [r4, #0x19]
    // ldr r0, [r4, #0xc]
    // bl ov74_02231424
    // cmp r0, #0
    // beq _022308CA
    // ldr r0, [r5, #8]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // cmp r0, #0xfd
    // bne _022308AA
    // add r0, r6, #0
    // bl ov74_0223078C
    // b _022308BC
    // ldr r2, [r5, #0xc]
    // ldr r1, [r4, #0xc]
    // lsl r0, r2, #0x18
    // lsr r0, r0, #0x18
    // add r0, r1, r0
    // ldr r1, [r4, #4]
    // lsr r2, r2, #8
    // bl MI_CpuCopy8
    // ldr r1, [r5, #8]
    // ldr r0, _022308DC ; =0xFFFF00FF
    // and r0, r1
    // str r0, [r5, #8]
    // mov r0, #4
    // strb r0, [r4, #0x1b]
    // pop {r4, r5, r6, pc}
    // ldr r1, [r5, #8]
    // ldr r0, _022308DC ; =0xFFFF00FF
    // and r1, r0
    // mov r0, #1
    // lsl r0, r0, #8
    // orr r0, r1
    // str r0, [r5, #8]
    // pop {r4, r5, r6, pc}
    // nop
    // _022308DC: .word 0xFFFF00FF
    // TODO: decompile
}



void ov74_022308E0(void) {
    ov74_0223144C(*((u16*)(r0 + 4)));
    ov74_02231064(*((u16*)(r4 + 4)));
    ov74_02231184();
    ov74_02230714(r4);
    ov74_02230818(r4);
    ov74_02231124(1);
    ov74_02231130(0);
    ov74_02231118();
    ov74_02231130(1);
    ov74_02231064();
    ov74_0222FEA0(*((u16*)(r4 + 0x12)));
    ov74_02231124(0);
}



void ov74_02230964(void) {
    ov74_0222FE78(*((u16*)(r0 + 2)));
    ov74_02230674();
    ov74_02231448();
    ov74_02231070(4);
}



void ov74_02230988(void) {
    ov74_022314BC(*((u16*)(r0 + 2)));
    ov74_02231070(2);
    ov74_02231448();
    ov74_0222FE4C();
}



void ov74_022309AC(void) {
    ov74_0223110C(0);
    ov74_0223107C();
    ov74_02231744();
    ov74_02231070(3);
    ov74_02231704();
    ov74_02231070(3);
    ov74_02231448();
    ov74_02231070(4);
}



void ov74_022309F0(void) {
    ov74_02231070(0xc);
    ov74_0223113C(1);
    ov74_02231448();
    ov74_02231070(4);
}



void ov74_02230A14(void) {
    // push {r3, lr}
    // ldr r0, _02230A30 ; =ov74_0222FFFC
    // bl WM_SetIndCallback
    // cmp r0, #0
    // beq _02230A2A
    // mov r0, #4
    // bl ov74_02231070
    // mov r0, #0
    // pop {r3, pc}
    // mov r0, #1
    // pop {r3, pc}
    // nop
    // _02230A30: .word ov74_0222FFFC
    // TODO: decompile
}



void ov74_02230A34(void) {
    ov74_02231064();
    ov74_022314A0();
}



void ov74_02230A4C(void) {
    ov74_02231054();
    DC_FlushRange(r5, r4);
    ov74_02231460(r5, r4, r6);
}



void ov74_02230A74(void) {
}



void ov74_02230A7C(void) {
}



void ov74_02230A84(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r7, r1, #0
    // add r5, r0, #0
    // bl ov74_02231054
    // bl ov74_0223105C
    // add r4, r0, #0
    // mov r0, #0x1f
    // add r1, r7, #0
    // and r1, r0
    // beq _02230AA2
    // mov r0, #0x20
    // sub r0, r0, r1
    // add r7, r7, r0
    // mov r1, #0
    // strb r1, [r4]
    // strb r1, [r4, #1]
    // strb r1, [r4, #2]
    // mov r0, #4
    // strb r0, [r4, #3]
    // ldr r0, _02230BA8 ; =0x00400131
    // str r0, [r4, #4]
    // mov r0, #0xf
    // strh r1, [r4, #0xc]
    // lsl r0, r0, #8
    // str r7, [r4, #0x34]
    // add r7, r7, r0
    // str r7, [r4, #0x38]
    // bl ov74_02230A74
    // str r0, [r4, #0x2c]
    // add r7, r7, r0
    // str r7, [r4, #0x3c]
    // bl ov74_02230A7C
    // add r7, r7, r0
    // str r0, [r4, #0x30]
    // add r0, r7, #0
    // str r7, [r4, #0x28]
    // add r0, #0xc0
    // str r0, [r4, #0x24]
    // ldr r0, [r4, #0x34]
    // mov r1, #2
    // add r7, #0xe0
    // bl WM_Init
    // bl ov74_02230A14
    // str r0, [r4, #0x10]
    // mov r2, #0
    // str r2, [r4, #0x14]
    // str r2, [r4, #0x18]
    // str r2, [r4, #0x1c]
    // str r2, [r4, #0x20]
    // ldr r0, [r4, #0x40]
    // mov r6, #0xff
    // bic r0, r6
    // add r3, r0, #0
    // mov r1, #0xf
    // orr r3, r1
    // ldr r0, _02230BAC ; =0xFFFFF0FF
    // add r1, #0xf1
    // and r0, r3
    // orr r1, r0
    // ldr r0, _02230BB0 ; =0xFFFF0FFF
    // and r1, r0
    // mov r0, #1
    // lsl r0, r0, #0xc
    // orr r0, r1
    // str r0, [r4, #0x40]
    // ldr r3, [r5]
    // ldr r1, [r4, #0x44]
    // lsl r3, r3, #0x18
    // lsr r3, r3, #0x18
    // lsl r3, r3, #0x18
    // add r0, r4, #0
    // bic r1, r6
    // lsr r3, r3, #0x18
    // orr r3, r1
    // ldr r1, _02230BAC ; =0xFFFFF0FF
    // str r3, [r4, #0x44]
    // and r1, r3
    // ldr r3, [r5]
    // add r0, #0x44
    // lsl r3, r3, #0x14
    // lsr r3, r3, #0x1c
    // lsl r3, r3, #0x1c
    // lsr r3, r3, #0x14
    // orr r3, r1
    // ldr r1, _02230BB0 ; =0xFFFF0FFF
    // str r3, [r4, #0x44]
    // and r1, r3
    // ldr r3, [r5]
    // lsl r3, r3, #0x10
    // lsr r3, r3, #0x1c
    // lsl r3, r3, #0x1c
    // lsr r3, r3, #0x10
    // orr r1, r3
    // str r1, [r4, #0x44]
    // ldr r1, [r0]
    // ldr r3, [r5]
    // lsl r1, r1, #0x10
    // lsr r3, r3, #0x10
    // lsr r1, r1, #0x10
    // lsl r3, r3, #0x10
    // orr r1, r3
    // str r1, [r0]
    // ldr r0, [r5, #8]
    // ldr r1, [r5, #4]
    // add r3, r4, #0
    // b _02230B7C
    // ldrh r6, [r0]
    // add r5, r3, #0
    // add r5, #0x48
    // strh r6, [r5]
    // add r5, r3, #0
    // ldrh r6, [r1]
    // add r5, #0x60
    // add r3, r3, #2
    // strh r6, [r5]
    // add r2, r2, #1
    // add r0, r0, #2
    // add r1, r1, #2
    // cmp r0, #0
    // beq _02230B84
    // cmp r2, #0xc
    // blo _02230B64
    // ldr r1, [r4, #0x40]
    // ldr r0, [r4, #0x44]
    // str r1, [r4, #0x78]
    // str r0, [r4, #0x7c]
    // bl ov74_02231194
    // bl ov74_02231184
    // str r7, [r0, #8]
    // ldr r0, [r4, #0x2c]
    // add r7, r7, r0
    // bl ov74_02231184
    // str r7, [r0, #0xc]
    // bl WM_GetNextTgid
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02230BA8: .word 0x00400131
    // _02230BAC: .word 0xFFFFF0FF
    // _02230BB0: .word 0xFFFF0FFF
    // TODO: decompile
}



void ov74_02230BB4(void) {
    // push {r3, r4, r5, lr}
    // bl ov74_02231184
    // add r4, r0, #0
    // ldrb r0, [r4, #0x19]
    // cmp r0, #1
    // bne _02230BD2
    // ldrb r0, [r4, #0x1a]
    // sub r0, r0, #1
    // strb r0, [r4, #0x1a]
    // ldrb r0, [r4, #0x1a]
    // cmp r0, #0
    // bne _02230C08
    // mov r0, #0
    // strb r0, [r4, #0x19]
    // ldrb r0, [r4, #0x19]
    // cmp r0, #0
    // bne _02230C08
    // bl ov74_02231260
    // mov r1, #0x40
    // sub r5, r1, r0
    // ldrb r0, [r4, #0x1c]
    // add r2, r5, #0
    // mov r3, #3
    // str r0, [sp]
    // ldr r0, [r4, #8]
    // ldr r1, [r4, #4]
    // bl ov74_022312C0
    // bl ov74_02231260
    // add r1, r0, #0
    // ldr r0, [r4, #8]
    // ldr r2, _02230C0C ; =0x0000FFFF
    // add r1, r5, r1
    // bl ov74_02230A4C
    // mov r0, #1
    // strb r0, [r4, #0x19]
    // mov r0, #0x3c
    // strb r0, [r4, #0x1a]
    // pop {r3, r4, r5, pc}
    // nop
    // _02230C0C: .word 0x0000FFFF
    // TODO: decompile
}



void ov74_02230C10(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // bl ov74_02231184
    // add r4, r0, #0
    // ldrb r0, [r4, #0x19]
    // cmp r0, #0
    // bne _02230CC6
    // ldrb r0, [r4, #0x1c]
    // cmp r0, #0xfd
    // bne _02230C88
    // bl ov74_0223115C
    // add r5, r0, #0
    // mov r1, #0
    // add r2, r5, #0
    // ldrb r0, [r2, #9]
    // cmp r0, #0
    // beq _02230C6E
    // add r6, r1, #0
    // mov r0, #0xc
    // mul r6, r0
    // add r0, r5, r6
    // ldrh r0, [r0, #6]
    // mov r1, #1
    // mov r2, #0
    // lsl r1, r0
    // lsl r0, r1, #0x10
    // lsr r7, r0, #0x10
    // mov r0, #0xfd
    // str r0, [sp]
    // ldr r0, [r4, #8]
    // ldr r1, [r4, #4]
    // add r3, r2, #0
    // bl ov74_022312C0
    // bl ov74_02231260
    // add r1, r0, #0
    // ldr r0, [r4, #8]
    // add r2, r7, #0
    // bl ov74_02230A4C
    // add r5, #9
    // ldrb r0, [r5, r6]
    // sub r0, r0, #1
    // strb r0, [r5, r6]
    // pop {r3, r4, r5, r6, r7, pc}
    // add r1, r1, #1
    // add r2, #0xc
    // cmp r1, #8
    // blt _02230C2E
    // ldrb r0, [r4, #0x1a]
    // sub r0, r0, #1
    // strb r0, [r4, #0x1a]
    // ldrb r0, [r4, #0x1a]
    // cmp r0, #0
    // bne _02230CC6
    // mov r0, #2
    // strb r0, [r4, #0x19]
    // pop {r3, r4, r5, r6, r7, pc}
    // bl ov74_02231260
    // bl ov74_02230A74
    // ldr r0, [r4, #0xc]
    // ldr r0, [r0, #8]
    // lsl r0, r0, #0x10
    // lsr r3, r0, #0x18
    // bne _02230CAA
    // ldrb r0, [r4, #0x1b]
    // cmp r0, #0
    // bne _02230CA6
    // mov r0, #2
    // strb r0, [r4, #0x19]
    // pop {r3, r4, r5, r6, r7, pc}
    // sub r0, r0, #1
    // strb r0, [r4, #0x1b]
    // ldrb r0, [r4, #0x1c]
    // mov r2, #0
    // str r0, [sp]
    // ldr r0, [r4, #8]
    // ldr r1, [r4, #4]
    // bl ov74_022312C0
    // bl ov74_02231260
    // add r1, r0, #0
    // ldr r0, [r4, #8]
    // ldr r2, _02230CC8 ; =0x0000FFFF
    // bl ov74_02230A4C
    // pop {r3, r4, r5, r6, r7, pc}
    // _02230CC8: .word 0x0000FFFF
    // TODO: decompile
}



void ov74_02230CCC(void) {
    ov74_02231184();
    ov74_02230BB4(*((u8*)(r0 + 0x18)));
    ov74_02230C10();
}



void ov74_02230CEC(void) {
    ov74_02231154();
    ov74_02231064();
    // ldrh r1, [r4, r0]
    // strh r1, [r4, r0]
    ov74_02230CCC((7 << 6), (r1 - 1));
}



void ov74_02230D18(void) {
    ov74_02231064();
    ov74_02230CCC();
}



void ov74_02230D28(void) {
    ov74_02231064();
    ov74_0223107C();
    ov74_02231064();
    ov74_02231724();
    ov74_02231094();
    ov74_02230CEC();
    ov74_02230D18();
    ov74_0223105C();
    ov74_02231064();
}



void ov74_02230D6C(void) {
}



void ov74_02230D80(void) {
    // push {r4, lr}
    // bl ov74_02231094
    // mov r4, #0
    // cmp r0, #1
    // bne _02230DAE
    // bl ov74_02231154
    // ldr r1, _02230DB4 ; =0x000001C3
    // ldrb r1, [r0, r1]
    // lsl r1, r1, #0x18
    // lsr r1, r1, #0x1c
    // cmp r1, #1
    // bne _02230DAE
    // add r2, r4, #0
    // ldr r1, [r0]
    // cmp r1, #0
    // beq _02230DA6
    // add r4, r4, #1
    // add r2, r2, #1
    // add r0, #0x38
    // cmp r2, #8
    // blo _02230D9E
    // add r0, r4, #0
    // pop {r4, pc}
    // nop
    // _02230DB4: .word 0x000001C3
    // TODO: decompile
}



void ov74_02230DB8(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl ov74_02231094
    // cmp r0, #1
    // bne _02230DEA
    // bl ov74_02231064
    // cmp r0, #7
    // bne _02230DEA
    // bl ov74_02231154
    // ldr r1, _02230DF0 ; =0x000001C3
    // ldrb r1, [r0, r1]
    // lsl r1, r1, #0x18
    // lsr r1, r1, #0x1c
    // cmp r1, #1
    // bne _02230DEA
    // mov r1, #0x38
    // mul r1, r4
    // ldr r0, [r0, r1]
    // cmp r0, #0
    // beq _02230DEA
    // mov r0, #1
    // pop {r4, pc}
    // mov r0, #0
    // pop {r4, pc}
    // nop
    // _02230DF0: .word 0x000001C3
    // TODO: decompile
}



void ov74_02230DF4(void) {
    // push {r3, r4, r5, lr}
    // add r4, r0, #0
    // bl ov74_02231094
    // cmp r0, #1
    // bne _02230E3E
    // bl ov74_02231064
    // cmp r0, #7
    // bne _02230E3E
    // bl ov74_02231154
    // ldr r2, _02230E40 ; =0x000001C3
    // ldrb r3, [r0, r2]
    // lsl r1, r3, #0x18
    // lsr r1, r1, #0x1c
    // cmp r1, #1
    // bne _02230E3E
    // mov r1, #0x38
    // add r5, r4, #0
    // mul r5, r1
    // ldr r5, [r0, r5]
    // cmp r5, #0
    // beq _02230E3E
    // mov r5, #0xf
    // lsl r4, r4, #0x18
    // bic r3, r5
    // lsr r5, r4, #0x18
    // mov r4, #0xf
    // and r4, r5
    // orr r3, r4
    // strb r3, [r0, r2]
    // mov r2, #0x78
    // lsl r1, r1, #3
    // strh r2, [r0, r1]
    // bl ov74_02231584
    // pop {r3, r4, r5, pc}
    // _02230E40: .word 0x000001C3
    // TODO: decompile
}



void ov74_02230E44(void) {
    ov74_02231094();
    ov74_0223115C();
    // add r1, #0x60
    // ldrb r1, [r1]
    // add r0, #0xc
}



void ov74_02230E7C(void) {
    ov74_0223105C();
    WM_GetLinkLevel(0);
}



void ov74_02230E94(void) {
    ov74_02231094();
    ov74_02230D80();
    ov74_02230E44();
}



void ov74_02230EB4(void) {
    ov74_02231184();
    ov74_022311DC();
    ov74_02231094();
    *((u8*)(r5 + 0x18)) = 1;
    *((u8*)(r5 + 0x19)) = 0;
    // add r4, #8
    // str r4, [r5]
    *((u32*)(r5 + 4)) = r4;
    *((u32*)(r5 + 0x10)) = 0;
    *((u32*)(r5 + 0x14)) = 0;
    *((u8*)(r5 + 0x1a)) = 0x78;
    *((u8*)(r5 + 0x1b)) = 0;
    *((u8*)(r5 + 0x1c)) = 0xfd;
}



void ov74_02230EE8(void) {
}



void ov74_02230F14(void) {
    ov74_02231184();
    *((u8*)(r0 + 0x18)) = 2;
    *((u8*)(r0 + 0x19)) = 3;
    // str r5, [r0]
    *((u32*)(r0 + 4)) = r5;
    *((u32*)(r0 + 0x10)) = r6;
    *((u32*)(r0 + 0x14)) = 0;
    *((u8*)(r0 + 0x1a)) = 0x78;
    *((u8*)(r0 + 0x1b)) = 0;
    *((u8*)(r0 + 0x1c)) = r4;
}



void ov74_02230F40(void) {
    ov74_02231094();
    ov74_02231064();
    ov74_02231184();
}



void ov74_02230F6C(void) {
    ov74_02231094();
    ov74_02231064();
    ov74_02231184();
}



void ov74_02230F98(void) {
    ov74_02231094();
    ov74_02231064();
    ov74_02231184();
}



void ov74_02230FD4(void) {
    ov74_02231094();
    ov74_0223115C();
    // add r0, #0xc
    ov74_02231118(0, *((u8*)(r0 + 0xa)), (0 + 1));
}



void ov74_02231008(void) {
    ov74_02231088(0xc);
    ov74_02231064();
    WM_Finish();
    ov74_0223113C(1);
    ov74_02231118();
    ov74_0223105C();
    ov74_02231724();
    *((u32*)(r4 + 0x1c)) = 1;
}



void ov74_02231048(void) {
}



void ov74_02231054(void) {
    // ldr r0, _02231058 ; =ov74_0223C920
    // bx lr
    // _02231058: .word ov74_0223C920
    // TODO: decompile
}



void ov74_0223105C(void) {
    // ldr r0, _02231060 ; =ov74_0223D0C4
    // bx lr
    // _02231060: .word ov74_0223D0C4
    // TODO: decompile
}



void ov74_02231064(void) {
}



void ov74_02231070(void) {
}



void ov74_0223107C(void) {
}



void ov74_02231088(void) {
}



void ov74_02231094(void) {
}



void ov74_022310A0(void) {
}



void ov74_022310AC(void) {
}



void ov74_022310B8(void) {
}



void ov74_022310C4(void) {
}



void ov74_022310D0(void) {
}



void ov74_022310DC(void) {
}



void ov74_022310E8(void) {
}



void ov74_022310F4(void) {
}



void ov74_02231100(void) {
}



void ov74_0223110C(void) {
}



void ov74_02231118(void) {
}



void ov74_02231124(void) {
}



void ov74_02231130(void) {
}



void ov74_0223113C(void) {
}



void ov74_02231148(void) {
}



void ov74_02231154(void) {
}



void ov74_0223115C(void) {
}



void ov74_02231164(void) {
    ov74_02231154();
    MI_CpuFill8(0, (0x71 << 2));
    // add r0, #0xa8
    // strh r1, [r4, r0]
}



void ov74_02231184(void) {
}



void ov74_02231194(void) {
}



void ov74_022311A0(void) {
}



void ov74_022311AC(void) {
}



void ov74_022311BC(void) {
}



void ov74_022311CC(void) {
}



u8 ov74_022311D8(void) {
}



void ov74_022311DC(void) {
}



void ov74_022311E8(void) {
}



void ov74_022311F4(void) {
    // str r2, [sp]
    // add r3, sp, #0
    // add r1, r0, r2
    // strb r1, [r3]
    // ldr r0, [sp]
}



void ov74_02231214(void) {
    // add r1, sp, #0
    // strh r2, [r1]
    // add r3, sp, #0
    // ldrb r1, [r0, r2]
    // strb r1, [r3]
    // add r1, sp, #0
    // ldrsh r0, [r1, r0]
}



void ov74_02231238(void) {
    // push {r4, r5, r6, lr}
    // add r5, r1, #0
    // ldr r1, _0223125C ; =0x00002710
    // add r6, r0, #0
    // add r4, r2, #0
    // bl _u32_div_f
    // str r1, [r5]
    // ldr r1, _0223125C ; =0x00002710
    // add r0, r6, #0
    // bl _u32_div_f
    // ldr r1, _0223125C ; =0x00002710
    // bl _u32_div_f
    // str r1, [r4]
    // pop {r4, r5, r6, pc}
    // nop
    // _0223125C: .word 0x00002710
    // TODO: decompile
}



u8 ov74_02231260(void) {
}



void ov74_02231264(void) {
}



void ov74_0223127C(void) {
    // push {r4, r5, r6, r7}
    // add r3, r0, #0
    // mov r0, #0
    // lsr r1, r1, #2
    // beq _022312B2
    // ldr r4, _022312B8 ; =0x00269EC3
    // ldr r5, _022312BC ; =0x5D588B65
    // ldr r6, _022312BC ; =0x5D588B65
    // mul r5, r3
    // ldr r3, _022312B8 ; =0x00269EC3
    // add r0, r0, #1
    // add r3, r5, r3
    // lsr r5, r3, #0x10
    // mul r6, r3
    // add r3, r6, r4
    // lsl r5, r5, #0x10
    // lsr r7, r3, #0x10
    // lsr r5, r5, #0x10
    // lsl r7, r7, #0x10
    // ldr r6, [r2]
    // lsl r5, r5, #0x10
    // lsr r7, r7, #0x10
    // orr r5, r7
    // eor r5, r6
    // stmia r2!, {r5}
    // cmp r0, r1
    // blo _02231288
    // add r0, r3, #0
    // pop {r4, r5, r6, r7}
    // bx lr
    // _022312B8: .word 0x00269EC3
    // _022312BC: .word 0x5D588B65
    // TODO: decompile
}



void ov74_022312C0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // add r7, r1, #0
    // add r6, r2, #0
    // str r3, [sp]
    // bl ov74_022311DC
    // add r4, r0, #0
    // ldr r0, [r5]
    // mov r1, #0xff
    // bic r0, r1
    // ldr r1, [r4]
    // lsl r1, r1, #0x18
    // lsr r1, r1, #0x18
    // lsl r1, r1, #0x18
    // lsr r1, r1, #0x18
    // orr r1, r0
    // ldr r0, _022313E4 ; =0xFFFFF0FF
    // str r1, [r5]
    // and r0, r1
    // ldr r1, [r4]
    // lsl r1, r1, #0x14
    // lsr r1, r1, #0x1c
    // lsl r1, r1, #0x1c
    // lsr r1, r1, #0x14
    // orr r1, r0
    // ldr r0, _022313E8 ; =0xFFFF0FFF
    // str r1, [r5]
    // and r0, r1
    // ldr r1, [r4]
    // lsl r1, r1, #0x10
    // lsr r1, r1, #0x1c
    // lsl r1, r1, #0x1c
    // lsr r1, r1, #0x10
    // orr r0, r1
    // str r0, [r5]
    // bl ov74_02231264
    // ldr r1, [r5]
    // lsl r0, r0, #0x10
    // lsl r1, r1, #0x10
    // lsr r0, r0, #0x10
    // lsr r1, r1, #0x10
    // lsl r0, r0, #0x10
    // orr r0, r1
    // str r0, [r5]
    // ldr r2, [r4, #4]
    // ldr r1, [r5, #4]
    // lsl r2, r2, #0x18
    // lsr r2, r2, #0x18
    // mov r0, #0xff
    // lsl r2, r2, #0x18
    // bic r1, r0
    // lsr r2, r2, #0x18
    // orr r2, r1
    // ldr r1, _022313E4 ; =0xFFFFF0FF
    // str r2, [r5, #4]
    // and r1, r2
    // ldr r2, [r4, #4]
    // lsl r2, r2, #0x14
    // lsr r2, r2, #0x1c
    // lsl r2, r2, #0x1c
    // lsr r2, r2, #0x14
    // orr r2, r1
    // ldr r1, _022313E8 ; =0xFFFF0FFF
    // str r2, [r5, #4]
    // and r1, r2
    // ldr r2, [r4, #4]
    // lsl r2, r2, #0x10
    // lsr r2, r2, #0x1c
    // lsl r2, r2, #0x1c
    // lsr r2, r2, #0x10
    // orr r1, r2
    // lsl r1, r1, #0x10
    // lsr r1, r1, #0x10
    // str r1, [r5, #4]
    // ldr r1, [r5, #8]
    // bic r1, r0
    // ldr r0, [sp, #0x18]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // orr r1, r0
    // ldr r0, _022313EC ; =0xFFFF00FF
    // and r0, r1
    // ldr r1, [sp]
    // lsl r1, r1, #0x18
    // lsr r1, r1, #0x10
    // orr r0, r1
    // str r0, [r5, #8]
    // mov r0, #0
    // add r1, r7, #0
    // add r2, r6, #0
    // bl SVC_GetCRC16
    // ldr r1, [r5, #8]
    // lsl r0, r0, #0x10
    // lsl r1, r1, #0x10
    // lsr r1, r1, #0x10
    // orr r0, r1
    // str r0, [r5, #8]
    // bl ov74_02231260
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // lsl r0, r0, #0x18
    // ldr r1, [r5, #0xc]
    // mov r2, #0xff
    // bic r1, r2
    // lsr r0, r0, #0x18
    // orr r0, r1
    // lsl r0, r0, #0x18
    // lsr r1, r0, #0x18
    // lsl r0, r6, #8
    // orr r0, r1
    // str r0, [r5, #0xc]
    // cmp r6, #0
    // beq _022313BE
    // ldr r1, [r5, #0xc]
    // add r0, r7, #0
    // lsl r1, r1, #0x18
    // lsr r1, r1, #0x18
    // add r1, r5, r1
    // add r2, r6, #0
    // bl MI_CpuCopy8
    // add r0, r5, #0
    // bl ov74_0223145C
    // ldr r0, [r4]
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x1c
    // cmp r0, #1
    // bne _022313E2
    // ldr r1, [r5, #0xc]
    // ldr r0, [r5]
    // lsl r1, r1, #0x18
    // lsr r1, r1, #0x18
    // add r1, r6, r1
    // lsr r0, r0, #0x10
    // sub r1, r1, #4
    // add r2, r5, #4
    // bl ov74_0223127C
    // pop {r3, r4, r5, r6, r7, pc}
    // _022313E4: .word 0xFFFFF0FF
    // _022313E8: .word 0xFFFF0FFF
    // _022313EC: .word 0xFFFF00FF
    // TODO: decompile
}



void ov74_022313F0(void) {
    ov74_022311DC();
    ov74_0223127C((*((u32*)r4) >> 0x10), 0xc, (r4 + 4));
    // add r4, #0x10
    // add r1, r2, r1
    // sub r1, #0x10
    ov74_0223127C((*((u32*)(r4 + 0xc)) >> 8), r4);
}



void ov74_02231424(void) {
    // add r1, r4, r1
    SVC_GetCRC16(0, ((*((u32*)(r0 + 0xc)) << 0x18) >> 0x18), (*((u32*)(r0 + 0xc)) >> 8));
}



void ov74_02231448(void) {
    // bx lr
    // TODO: decompile
}



void ov74_0223144C(void) {
    // bx lr
    // TODO: decompile
}



void ov74_02231450(void) {
    // bx lr
    // TODO: decompile
}



void ov74_02231454(void) {
    // bx lr
    // TODO: decompile
}



void ov74_02231458(void) {
    // bx lr
    // TODO: decompile
}



void ov74_0223145C(void) {
    // bx lr
    // TODO: decompile
}



void ov74_02231460(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0xc
    // add r6, r0, #0
    // add r5, r1, #0
    // add r4, r2, #0
    // bl ov74_022310AC
    // lsl r0, r0, #0x10
    // lsl r3, r5, #0x10
    // lsr r0, r0, #0x10
    // str r4, [sp]
    // str r0, [sp, #4]
    // mov r0, #2
    // str r0, [sp, #8]
    // ldr r0, _0223149C ; =ov74_02230018
    // mov r1, #0
    // add r2, r6, #0
    // lsr r3, r3, #0x10
    // bl WM_SetMPDataToPortEx
    // cmp r0, #2
    // beq _02231496
    // bl ov74_02231448
    // add sp, #0xc
    // mov r0, #0
    // pop {r3, r4, r5, r6, pc}
    // mov r0, #1
    // add sp, #0xc
    // pop {r3, r4, r5, r6, pc}
    // _0223149C: .word ov74_02230018
    // TODO: decompile
}



void ov74_022314A0(void) {
    // push {r3, lr}
    // ldr r0, _022314B8 ; =ov74_02230030
    // bl WM_Enable
    // cmp r0, #2
    // beq _022314B4
    // bl ov74_02231448
    // mov r0, #0
    // pop {r3, pc}
    // mov r0, #1
    // pop {r3, pc}
    // _022314B8: .word ov74_02230030
    // TODO: decompile
}



void ov74_022314BC(void) {
    // push {r3, lr}
    // ldr r0, _022314D8 ; =ov74_02230070
    // bl WM_Disable
    // cmp r0, #2
    // beq _022314D4
    // bl ov74_02231448
    // bl OS_Terminate
    // mov r0, #0
    // pop {r3, pc}
    // mov r0, #1
    // pop {r3, pc}
    // _022314D8: .word ov74_02230070
    // TODO: decompile
}



void ov74_022314DC(void) {
    // push {r3, lr}
    // add r3, r0, #0
    // mov r0, #0x1e
    // str r0, [sp]
    // lsl r3, r3, #0x10
    // ldr r0, _02231504 ; =ov74_022300A8
    // mov r1, #3
    // mov r2, #0x11
    // lsr r3, r3, #0x10
    // bl WM_MeasureChannel
    // cmp r0, #2
    // beq _022314FE
    // bl ov74_02231448
    // mov r0, #0
    // pop {r3, pc}
    // mov r0, #1
    // pop {r3, pc}
    // nop
    // _02231504: .word ov74_022300A8
    // TODO: decompile
}



void ov74_02231508(void) {
    // push {r3, r4, r5, lr}
    // bl ov74_02231054
    // add r5, r0, #0
    // bl ov74_022311DC
    // add r4, r0, #0
    // bl ov74_0223115C
    // add r0, #0x64
    // ldrb r0, [r0]
    // strh r0, [r5, #0x32]
    // str r4, [r5]
    // bl ov74_022311D8
    // strh r0, [r5, #4]
    // ldr r0, _02231540 ; =ov74_02230110
    // add r1, r5, #0
    // bl WM_SetParentParameter
    // cmp r0, #2
    // beq _0223153C
    // bl ov74_02231448
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // _02231540: .word ov74_02230110
    // TODO: decompile
}



void ov74_02231544(void) {
    // push {r3, lr}
    // ldr r0, _0223155C ; =ov74_02230138
    // bl WM_StartParent
    // cmp r0, #2
    // beq _02231558
    // bl ov74_02231448
    // mov r0, #0
    // pop {r3, pc}
    // mov r0, #1
    // pop {r3, pc}
    // _0223155C: .word ov74_02230138
    // TODO: decompile
}



void ov74_02231560(void) {
    // push {r3, lr}
    // bl ov74_022310C4
    // add r1, r0, #0
    // ldr r0, _02231580 ; =ov74_02230404
    // bl WM_StartScan
    // cmp r0, #2
    // beq _0223157A
    // bl ov74_02231448
    // mov r0, #0
    // pop {r3, pc}
    // mov r0, #1
    // pop {r3, pc}
    // nop
    // _02231580: .word ov74_02230404
    // TODO: decompile
}



void ov74_02231584(void) {
    // push {r3, r4, r5, lr}
    // bl ov74_022310C4
    // add r4, r0, #0
    // bl ov74_02231154
    // ldr r2, _02231614 ; =0x000001C3
    // mov r3, #0x38
    // ldrb r1, [r0, r2]
    // lsl r1, r1, #0x1c
    // lsr r1, r1, #0x1c
    // add r5, r1, #0
    // mul r5, r3
    // add r1, r0, r5
    // add r1, #0x34
    // ldrb r1, [r1]
    // strb r1, [r4, #8]
    // ldrb r1, [r0, r2]
    // lsl r1, r1, #0x1c
    // lsr r1, r1, #0x1c
    // add r5, r1, #0
    // mul r5, r3
    // add r1, r0, r5
    // add r1, #0x35
    // ldrb r1, [r1]
    // strb r1, [r4, #9]
    // ldrb r1, [r0, r2]
    // lsl r1, r1, #0x1c
    // lsr r1, r1, #0x1c
    // add r5, r1, #0
    // mul r5, r3
    // ldrb r1, [r0, r5]
    // strb r1, [r4, #0xa]
    // ldrb r1, [r0, r2]
    // lsl r1, r1, #0x1c
    // lsr r1, r1, #0x1c
    // add r5, r1, #0
    // mul r5, r3
    // add r1, r0, r5
    // ldrb r1, [r1, #1]
    // strb r1, [r4, #0xb]
    // ldrb r1, [r0, r2]
    // lsl r1, r1, #0x1c
    // lsr r1, r1, #0x1c
    // add r5, r1, #0
    // mul r5, r3
    // add r1, r0, r5
    // ldrb r1, [r1, #2]
    // strb r1, [r4, #0xc]
    // ldrb r1, [r0, r2]
    // lsl r1, r1, #0x1c
    // lsr r1, r1, #0x1c
    // add r2, r1, #0
    // mul r2, r3
    // add r0, r0, r2
    // ldrb r0, [r0, #3]
    // strb r0, [r4, #0xd]
    // bl ov74_022310C4
    // add r1, r0, #0
    // ldr r0, _02231618 ; =ov74_02230520
    // bl WM_StartScan
    // cmp r0, #2
    // beq _0223160E
    // bl ov74_02231448
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // nop
    // _02231614: .word 0x000001C3
    // _02231618: .word ov74_02230520
    // TODO: decompile
}



void ov74_0223161C(void) {
    // push {r3, lr}
    // ldr r0, _02231634 ; =ov74_02230590
    // bl WM_EndScan
    // cmp r0, #2
    // beq _02231630
    // bl ov74_02231448
    // mov r0, #0
    // pop {r3, pc}
    // mov r0, #1
    // pop {r3, pc}
    // _02231634: .word ov74_02230590
    // TODO: decompile
}



void ov74_02231638(void) {
    // push {r3, r4, lr}
    // sub sp, #4
    // bl ov74_022311E8
    // add r4, r0, #0
    // bl ov74_02231100
    // add r1, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, _0223166C ; =ov74_022305E4
    // add r2, r4, #0
    // mov r3, #1
    // bl WM_StartConnectEx
    // cmp r0, #2
    // beq _02231664
    // bl ov74_02231448
    // add sp, #4
    // mov r0, #0
    // pop {r3, r4, pc}
    // mov r0, #1
    // add sp, #4
    // pop {r3, r4, pc}
    // nop
    // _0223166C: .word ov74_022305E4
    // TODO: decompile
}



void ov74_02231670(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // ldr r1, _022316E0 ; =ov74_022308E0
    // mov r0, #4
    // mov r2, #0
    // bl WM_SetPortCallback
    // cmp r0, #0
    // beq _0223168C
    // bl ov74_02231448
    // add sp, #8
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // bl ov74_02231054
    // ldrh r0, [r0, #0x16]
    // cmp r0, #0
    // bne _0223169A
    // mov r5, #1
    // b _0223169C
    // mov r5, #0
    // bl ov74_022310F4
    // add r6, r0, #0
    // bl ov74_022310DC
    // add r4, r0, #0
    // bl ov74_022310E8
    // add r7, r0, #0
    // bl ov74_022310D0
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // lsl r0, r5, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp, #4]
    // lsl r2, r4, #0x10
    // ldr r0, _022316E4 ; =ov74_022306C8
    // add r1, r6, #0
    // lsr r2, r2, #0x10
    // add r3, r7, #0
    // bl WM_StartMP
    // cmp r0, #2
    // beq _022316DA
    // bl ov74_02231448
    // add sp, #8
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #1
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // _022316E0: .word ov74_022308E0
    // _022316E4: .word ov74_022306C8
    // TODO: decompile
}



void ov74_022316E8(void) {
    // push {r3, lr}
    // ldr r0, _02231700 ; =ov74_02230964
    // bl WM_PowerOn
    // cmp r0, #2
    // beq _022316FC
    // bl ov74_02231448
    // mov r0, #0
    // pop {r3, pc}
    // mov r0, #1
    // pop {r3, pc}
    // _02231700: .word ov74_02230964
    // TODO: decompile
}



void ov74_02231704(void) {
    // push {r3, lr}
    // ldr r0, _02231720 ; =ov74_02230988
    // bl WM_PowerOff
    // cmp r0, #2
    // beq _0223171C
    // bl ov74_02231448
    // bl OS_Terminate
    // mov r0, #0
    // pop {r3, pc}
    // mov r0, #1
    // pop {r3, pc}
    // _02231720: .word ov74_02230988
    // TODO: decompile
}



void ov74_02231724(void) {
    // push {r3, lr}
    // ldr r0, _02231740 ; =ov74_022309AC
    // bl WM_Reset
    // cmp r0, #2
    // beq _0223173C
    // bl ov74_02231448
    // bl OS_Terminate
    // mov r0, #0
    // pop {r3, pc}
    // mov r0, #1
    // pop {r3, pc}
    // _02231740: .word ov74_022309AC
    // TODO: decompile
}



void ov74_02231744(void) {
    // push {r3, lr}
    // ldr r0, _02231760 ; =ov74_022309F0
    // bl WM_End
    // cmp r0, #2
    // beq _0223175C
    // bl ov74_02231448
    // bl OS_Terminate
    // mov r0, #0
    // pop {r3, pc}
    // mov r0, #1
    // pop {r3, pc}
    // _02231760: .word ov74_022309F0
    // TODO: decompile
}



void ov74_02231764(void) {
    // cmp r0, #0
    // bgt _0223176C
    // mov r0, #1
    // bx lr
    // cmp r0, #0xfb
    // bgt _02231774
    // mov r0, #0
    // bx lr
    // ldr r1, _0223178C ; =0x00000115
    // cmp r0, r1
    // bge _0223177E
    // mov r0, #1
    // bx lr
    // add r1, #0x86
    // cmp r0, r1
    // ble _02231788
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // _0223178C: .word 0x00000115
    // TODO: decompile
}



void ov74_02231790(void) {
    PmAgbCartridge_GetVersionInternal();
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _022317A8: ; jump table
    // mov r0, #VERSION_RUBY
    // str r0, [r4]
    // mov r0, #VERSION_SAPPHIRE
    // str r0, [r4]
    // mov r0, #VERSION_LEAFGREEN
    // str r0, [r4]
    // mov r0, #VERSION_FIRERED
    // str r0, [r4]
    // mov r0, #VERSION_EMERALD
    // str r0, [r4]
    // mvn r0, r0
    // str r0, [r4]
}



void ov74_022317D8(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x10
    // ldr r1, _0223192C ; =0x0000E890
    // add r5, r0, #0
    // add r4, r5, r1
    // ldr r1, [r4]
    // cmp r1, #9
    // bls _022317EA
    // b _02231924
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _022317F6: ; jump table
    // bl ov74_0223195C
    // ldr r0, [r5, #0x10]
    // bl Save_MigratedPokemon_Get
    // add r5, r0, #0
    // bl ov74_02233F68
    // add r1, r0, #0
    // add r0, r5, #0
    // bl MigratedPokemon_RecordMigration
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // b _02231924
    // bl OS_GetTick
    // mov r2, #0x78
    // mov r3, #0
    // bl _ull_mod
    // add r0, r0, #1
    // str r0, [r4, #4]
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // b _02231924
    // ldr r0, [r4, #4]
    // sub r0, r0, #1
    // str r0, [r4, #4]
    // bne _02231924
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // b _02231924
    // ldr r0, [r5, #0x10]
    // mov r1, #2
    // bl Save_PrepareForAsyncWrite
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // b _02231924
    // ldr r0, [r5, #0x10]
    // bl Save_WriteFileAsync
    // cmp r0, #3
    // bne _02231872
    // add sp, #0x10
    // mov r0, #0xc
    // pop {r3, r4, r5, pc}
    // cmp r0, #1
    // bne _02231924
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // b _02231924
    // mov r0, #0
    // add r1, r0, #0
    // add r2, sp, #0
    // mov r3, #0x10
    // bl CTRDG_ReadAgbFlash
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // b _02231924
    // bl ov74_02233E8C
    // cmp r0, #0
    // bne _022318A6
    // mov r0, #1
    // bl Sys_ClearSleepDisableFlag
    // add sp, #0x10
    // mov r0, #0xc
    // pop {r3, r4, r5, pc}
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // b _02231924
    // bl ov74_02233F14
    // cmp r0, #9
    // beq _02231924
    // bl ov74_02233F14
    // cmp r0, #0xb
    // bne _022318C6
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // b _02231924
    // bl ov74_02233ED4
    // cmp r0, #8
    // bne _02231924
    // mov r0, #1
    // bl Sys_ClearSleepDisableFlag
    // add sp, #0x10
    // mov r0, #0xc
    // pop {r3, r4, r5, pc}
    // ldr r0, [r5, #0x10]
    // bl Save_WriteFileAsync
    // cmp r0, #3
    // bne _022318EA
    // add sp, #0x10
    // mov r0, #0xc
    // pop {r3, r4, r5, pc}
    // cmp r0, #2
    // bne _022318DA
    // bl ov74_02233ED4
    // mov r0, #1
    // bl Sys_SetSleepDisableFlag
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // b _02231924
    // bl ov74_02233ED4
    // cmp r0, #8
    // bne _02231914
    // mov r0, #1
    // bl Sys_ClearSleepDisableFlag
    // add sp, #0x10
    // mov r0, #0xc
    // pop {r3, r4, r5, pc}
    // cmp r0, #0
    // bne _02231924
    // mov r0, #1
    // bl Sys_ClearSleepDisableFlag
    // add sp, #0x10
    // mov r0, #0xb
    // pop {r3, r4, r5, pc}
    // mov r0, #0xa
    // add sp, #0x10
    // pop {r3, r4, r5, pc}
    // nop
    // _0223192C: .word 0x0000E890
    // TODO: decompile
}



void ov74_02231930(void) {
}



void ov74_0223195C(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xf4
    // add r7, r0, #0
    // ldr r0, [r7, #0x10]
    // bl Save_MigratedPokemon_Get
    // str r0, [sp]
    // add r0, sp, #8
    // bl Mon_GetBoxMon
    // add r6, r0, #0
    // mov r4, #0
    // add r5, r7, #0
    // ldr r0, _022319F4 ; =0x0000E880
    // mov r1, #0x3d
    // lsl r1, r1, #4
    // ldr r0, [r7, r0]
    // ldr r2, [r5, r1]
    // mov r1, #0x96
    // lsl r1, r1, #4
    // add r0, r0, #4
    // mul r1, r2
    // add r0, r0, r1
    // mov r1, #0xf3
    // lsl r1, r1, #2
    // ldr r2, [r5, r1]
    // mov r1, #0x50
    // mul r1, r2
    // add r0, r0, r1
    // add r1, r6, #0
    // bl MigrateBoxMon
    // ldr r0, [sp]
    // add r1, r6, #0
    // add r2, r4, #0
    // bl MigratedPokemon_CopyBoxPokemonToSlot
    // add r4, r4, #1
    // add r5, #0xc
    // cmp r4, #6
    // blt _02231976
    // mov r5, #0
    // add r0, sp, #4
    // strh r5, [r0]
    // add r4, r7, #0
    // sub r6, r5, #1
    // mov r0, #0xf3
    // lsl r0, r0, #2
    // ldr r2, [r4, r0]
    // add r0, r0, #4
    // ldr r1, [r4, r0]
    // cmp r2, r6
    // beq _022319E6
    // cmp r1, #0xe
    // beq _022319E6
    // ldr r0, _022319F4 ; =0x0000E880
    // mov r3, #0x96
    // ldr r0, [r7, r0]
    // lsl r3, r3, #4
    // mul r3, r1
    // add r0, r0, #4
    // mov r1, #0x50
    // mul r1, r2
    // add r0, r0, r3
    // add r0, r0, r1
    // mov r1, #0xb
    // add r2, sp, #4
    // bl ov74_022348B0
    // add r5, r5, #1
    // add r4, #0xc
    // cmp r5, #6
    // blt _022319B8
    // add sp, #0xf4
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _022319F4: .word 0x0000E880
    // TODO: decompile
}



void ov74_022319F8(void) {
    // tst r2, r0
    FontID_String_GetWidth(1, 0);
    // sub r1, r1, r0
    // add r0, r1, r0
    // asr r0, r0, #1
}



void ov74_02231A1C(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x24
    // add r5, r1, #0
    // ldr r7, [r5, #0x44]
    // add r6, r0, #0
    // add r4, r2, #0
    // cmp r7, #0
    // bne _02231A2E
    // mov r7, #0xff
    // ldr r1, [r5]
    // ldr r0, [r1]
    // cmp r0, #0
    // bne _02231A6C
    // ldr r0, [r5, #0xc]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp]
    // ldr r0, [r5, #0x10]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #4]
    // ldr r0, [r5, #0x14]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #8]
    // mov r0, #0xf
    // str r0, [sp, #0xc]
    // ldr r0, [r5, #0x20]
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp, #0x10]
    // ldr r2, [r5, #0x24]
    // ldr r3, [r5, #8]
    // lsl r2, r2, #0x18
    // lsl r3, r3, #0x18
    // ldr r0, [r6, #0x20]
    // lsr r2, r2, #0x18
    // lsr r3, r3, #0x18
    // bl AddWindowParameterized
    // mov r0, #2
    // tst r0, r4
    // bne _02231A7E
    // ldr r1, [r5, #0x30]
    // ldr r0, [r5]
    // lsl r1, r1, #0x18
    // lsr r1, r1, #0x18
    // bl FillWindowPixelBuffer
    // mov r0, #0
    // ldr r1, [r5, #0x34]
    // mvn r0, r0
    // cmp r1, r0
    // beq _02231B0E
    // ldr r2, _02231BB0 ; =0x0000012D
    // mov r0, #1
    // mov r1, #0x1b
    // mov r3, #0x4c
    // bl NewMsgDataFromNarc
    // str r0, [sp, #0x18]
    // ldr r0, [r5, #0x40]
    // str r0, [sp, #0x14]
    // cmp r0, #0
    // bne _02231AA6
    // mov r0, #0x4c
    // bl MessageFormat_New
    // str r0, [sp, #0x14]
    // ldr r0, _02231BB4 ; =0x00012608
    // ldr r0, [r6, r0]
    // bl String_SetEmpty
    // ldr r0, _02231BB4 ; =0x00012608
    // ldr r1, [r5, #0x34]
    // ldr r0, [r6, r0]
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x18]
    // bl NewString_ReadMsgData
    // str r0, [sp, #0x20]
    // ldr r1, _02231BB4 ; =0x00012608
    // ldr r0, [sp, #0x14]
    // ldr r1, [r6, r1]
    // ldr r2, [sp, #0x20]
    // bl StringExpandPlaceholders
    // ldr r0, [sp, #0x20]
    // bl String_Delete
    // ldr r1, [sp, #0x1c]
    // add r0, r5, #0
    // add r2, r4, #0
    // bl ov74_022319F8
    // add r3, r0, #0
    // ldr r0, [r5, #0x1c]
    // ldr r2, [sp, #0x1c]
    // str r0, [sp]
    // str r7, [sp, #4]
    // ldr r0, [r5, #0x2c]
    // str r0, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // ldr r0, [r5]
    // ldr r1, [r5, #0x28]
    // bl AddTextPrinterParameterizedWithColor
    // str r0, [r5, #0x48]
    // ldr r0, [r5, #0x40]
    // cmp r0, #0
    // bne _02231B02
    // ldr r0, [sp, #0x14]
    // bl MessageFormat_Delete
    // ldr r0, [sp, #0x18]
    // bl DestroyMsgData
    // mov r0, #0
    // mvn r0, r0
    // str r0, [r5, #0x34]
    // ldr r1, [r5, #0x38]
    // cmp r1, #0
    // beq _02231B4A
    // ldr r0, _02231BB8 ; =0x0001260C
    // mov r2, #0x40
    // ldr r6, [r6, r0]
    // add r0, r6, #0
    // bl CopyU16ArrayToStringN
    // add r0, r5, #0
    // add r1, r6, #0
    // add r2, r4, #0
    // bl ov74_022319F8
    // add r3, r0, #0
    // ldr r0, [r5, #0x1c]
    // add r2, r6, #0
    // str r0, [sp]
    // str r7, [sp, #4]
    // ldr r0, [r5, #0x2c]
    // str r0, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // ldr r0, [r5]
    // ldr r1, [r5, #0x28]
    // bl AddTextPrinterParameterizedWithColor
    // str r0, [r5, #0x48]
    // mov r0, #0
    // str r0, [r5, #0x38]
    // ldr r1, [r5, #0x3c]
    // cmp r1, #0
    // beq _02231B78
    // add r0, r5, #0
    // add r2, r4, #0
    // bl ov74_022319F8
    // add r3, r0, #0
    // ldr r0, [r5, #0x1c]
    // str r0, [sp]
    // str r7, [sp, #4]
    // ldr r0, [r5, #0x2c]
    // str r0, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // ldr r0, [r5]
    // ldr r1, [r5, #0x28]
    // ldr r2, [r5, #0x3c]
    // bl AddTextPrinterParameterizedWithColor
    // str r0, [r5, #0x48]
    // mov r0, #0
    // str r0, [r5, #0x3c]
    // mov r0, #4
    // tst r0, r4
    // bne _02231B84
    // ldr r0, [r5]
    // bl CopyWindowToVram
    // mov r0, #8
    // tst r0, r4
    // beq _02231BAC
    // mov r0, #0x10
    // tst r0, r4
    // ldr r0, [r5]
    // beq _02231BA0
    // ldr r2, _02231BBC ; =0x000003D2
    // mov r1, #0
    // mov r3, #0xd
    // bl DrawFrameAndWindow2
    // add sp, #0x24
    // pop {r4, r5, r6, r7, pc}
    // mov r2, #0x3f
    // mov r1, #0
    // lsl r2, r2, #4
    // mov r3, #0xe
    // bl DrawFrameAndWindow1
    // add sp, #0x24
    // pop {r4, r5, r6, r7, pc}
    // _02231BB0: .word 0x0000012D
    // _02231BB4: .word 0x00012608
    // _02231BB8: .word 0x0001260C
    // _02231BBC: .word 0x000003D2
    // TODO: decompile
}



void ov74_02231BC0(void) {
    // push {r4, lr}
    // sub sp, #0x10
    // ldr r4, _02231BEC ; =_0223B4E8
    // add r3, sp, #0
    // add r2, r3, #0
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // add r0, r2, #0
    // bl ObjCharTransfer_Init
    // mov r0, #0x14
    // mov r1, #0x4c
    // bl ObjPlttTransfer_Init
    // bl ObjCharTransfer_ClearBuffers
    // bl ObjPlttTransfer_Reset
    // add sp, #0x10
    // pop {r4, pc}
    // _02231BEC: .word _0223B4E8
    // TODO: decompile
}



void ov74_02231BF0(void) {
    NNS_G2dInitOamManagerModule();
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // str r2, [sp, #0x10]
    OamManager_Create(0, 0x7e, 0, 0x20);
    // add r1, #0x2c
    G2dRenderer_Init(0x50, r6, 0x4c);
    *((u32*)(r6 + 0x28)) = r0;
    // add r0, #0x2c
    G2dRenderer_SetSubSurfaceCoords(r6, 0, (1 << 0x14));
    Create2DGfxResObjMan(3, 0, 0x4c);
    // str r0, [r5, r7]
    // str r0, [sp]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [r6, r0]
    AddCharResObjFromNarc((0x55 << 2), 0x71, 0x1e, 1);
    // str r0, [r6, r1]
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // sub r1, #0x14
    // str r0, [sp, #0xc]
    // ldr r0, [r6, r1]
    AddPlttResObjFromNarc(0x4c, 0x71, 0x1b, 0);
    // str r0, [r6, r1]
    // str r0, [sp]
    // str r0, [sp, #4]
    // sub r1, #0x14
    // str r0, [sp, #8]
    // ldr r0, [r6, r1]
    AddCellOrAnimResObjFromNarc(0x4c, 0x71, 0x1d, 1);
    // str r0, [r6, r1]
    // str r0, [sp]
    // str r0, [sp, #4]
    // sub r1, #0x14
    // str r0, [sp, #8]
    // ldr r0, [r6, r1]
    AddCellOrAnimResObjFromNarc(0x4c, 0x71, 0x1c, 1);
    // str r0, [r6, r1]
    // sub r1, #0xc
    // ldr r0, [r6, r1]
    sub_0200ACF0((0x5e << 2));
    // ldr r0, [r6, r0]
    sub_0200AF94((0x17 << 4));
    sub_02074490();
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r3, #0xff
    GfGfxLoader_GXLoadPal(0x14, r0, 1, 1);
}



void ov74_02231CFC(void) {
    // str r1, [sp]
    // str r2, [sp, #4]
    // str r2, [sp, #8]
    // str r1, [sp, #0xc]
    // str r1, [sp, #0x10]
    // ldr r2, [r0, r3]
    // str r2, [sp, #0x14]
    // ldr r2, [r0, r2]
    // str r2, [sp, #0x18]
    // add r2, #8
    // ldr r2, [r0, r2]
    // str r2, [sp, #0x1c]
    // add r2, #0xc
    // ldr r2, [r0, r2]
    // add r3, #0x30
    // str r2, [sp, #0x20]
    // str r1, [sp, #0x24]
    // add r0, r0, r3
    // str r1, [sp, #0x28]
    CreateSpriteResourcesHeader(0, 0, 0);
    GfGfx_EngineATogglePlanes(0x10, 1);
}



void ov74_02231D48(void) {
    // str r2, [r0]
    // add r1, r1, r2
    *((u32*)(r0 + 4)) = r1;
    *((u32*)(r0 + 0x10)) = 0;
    *((u32*)(r0 + 0x14)) = (1 << 0xc);
    *((u32*)(r0 + 0x18)) = (1 << 0xc);
    *((u32*)(r0 + 0x1c)) = (1 << 0xc);
    *((u16*)(r0 + 0x20)) = 0;
    *((u32*)(r0 + 0x24)) = 0x14;
    *((u32*)(r0 + 0x28)) = r3;
    *((u32*)(r0 + 0x2c)) = 0x4c;
}



void ov74_02231D70(void) {
    // ldr r3, _02231D8C ; =0x0000E880
    // ldr r0, [r0, r3]
    // add r3, r0, #4
    // mov r0, #0x96
    // lsl r0, r0, #4
    // mul r0, r1
    // add r1, r3, r0
    // mov r0, #0x50
    // mul r0, r2
    // add r0, r1, r0
    // ldr r3, _02231D90 ; =AGB_GetBoxMonData
    // mov r1, #0xb
    // mov r2, #0
    // bx r3
    // _02231D8C: .word 0x0000E880
    // _02231D90: .word AGB_GetBoxMonData
    // TODO: decompile
}



void ov74_02231D94(void) {
    // ldr r3, _02231DB0 ; =0x0000E880
    // ldr r0, [r0, r3]
    // add r3, r0, #4
    // mov r0, #0x96
    // lsl r0, r0, #4
    // mul r0, r1
    // add r1, r3, r0
    // mov r0, #0x50
    // mul r0, r2
    // add r0, r1, r0
    // ldr r3, _02231DB4 ; =AGB_GetBoxMonData
    // mov r1, #0x2d
    // mov r2, #0
    // bx r3
    // _02231DB0: .word 0x0000E880
    // _02231DB4: .word AGB_GetBoxMonData
    // TODO: decompile
}



void ov74_02231DB8(void) {
    // ldr r3, _02231DD4 ; =0x0000E880
    // ldr r0, [r0, r3]
    // add r3, r0, #4
    // mov r0, #0x96
    // lsl r0, r0, #4
    // mul r0, r1
    // add r1, r3, r0
    // mov r0, #0x50
    // mul r0, r2
    // add r0, r1, r0
    // mov r1, #0
    // ldr r3, _02231DD8 ; =AGB_GetBoxMonData
    // add r2, r1, #0
    // bx r3
    // _02231DD4: .word 0x0000E880
    // _02231DD8: .word AGB_GetBoxMonData
    // TODO: decompile
}



void ov74_02231DDC(void) {
    // ldr r5, [sp, #8]
    // add r4, r5, r4
    // asr r4, r4, #1
    // sub r5, r2, r4
    // strb r5, [r0]
    // add r5, r3, r5
    // asr r5, r5, #1
    // sub r3, r1, r5
    *((u8*)(r0 + 2)) = r3;
    // add r2, r2, r4
    *((u8*)(r0 + 1)) = r2;
    // add r1, r1, r5
    *((u8*)(r0 + 3)) = r1;
}



void ov74_02231E00(void) {
    Heap_AllocAtEnd(r3, (1 << 0xc));
    ReadWholeNarcMemberByIdPair(r5, r6);
    NNS_G2dGetUnpackedBGCharacterData(r4, r7);
    Heap_Free(r4);
}



void ov74_02231E38(void) {
}



void ov74_02231E54(void) {
    // push {r4, lr}
    // add r3, r1, #0
    // mov r4, #0
    // cmp r0, #0xc9
    // beq _02231E66
    // ldr r1, _02231EC0 ; =0x00000182
    // cmp r0, r1
    // beq _02231E90
    // b _02231EBA
    // mov r4, #3
    // lsl r0, r4, #8
    // add r2, r3, #0
    // and r0, r3
    // lsr r1, r0, #6
    // lsl r0, r4, #0x18
    // and r2, r4
    // and r0, r3
    // lsl r4, r4, #0x10
    // and r3, r4
    // lsr r0, r0, #0x12
    // lsr r3, r3, #0xc
    // orr r0, r3
    // orr r0, r1
    // orr r0, r2
    // mov r1, #0x1c
    // bl _u32_div_f
    // lsl r0, r1, #0x18
    // lsr r4, r0, #0x18
    // b _02231EBA
    // cmp r2, #5
    // bhi _02231EAC
    // add r0, r2, r2
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _02231EA0: ; jump table
    // mov r4, #0
    // b _02231EBA
    // mov r4, #1
    // b _02231EBA
    // mov r4, #2
    // b _02231EBA
    // mov r4, #3
    // add r0, r4, #0
    // pop {r4, pc}
    // nop
    // _02231EC0: .word 0x00000182
    // TODO: decompile
}



void ov74_02231EC4(void) {
    TranslateAgbSpecies();
    ov74_02231E54(r6, r7);
    GetMonIconNaixEx(r4, r5, r0);
    // add r2, sp, #0
    ov74_02231E00(0x14, r0, 0x4c);
    // ldr r0, [sp]
    DC_FlushRange(*((u32*)(r0 + 0x14)), (2 << 8));
    // ldr r1, [sp, #0x18]
    // ldr r0, [sp]
    // add r1, #0x64
    GX_LoadOBJ(*((u32*)(r0 + 0x14)), ((r1 << 4) << 5), (2 << 8));
    GetMonIconPaletteEx(r4, r7, r5);
    // ldr r0, [sp, #0x1c]
    // add r1, #8
    Sprite_SetPaletteOverride(r0);
    Heap_Free(r6);
}



void ov74_02231F30(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r7, r1, #0
    // ldr r1, _02231FAC ; =ov74_0223D338
    // str r2, [sp]
    // ldr r2, [r1]
    // mov r1, #0x83
    // add r5, r3, #0
    // lsl r1, r1, #2
    // mul r1, r5
    // add r4, r2, r1
    // ldr r1, [sp, #0x20]
    // add r6, r0, #0
    // cmp r1, #0
    // beq _02231FA4
    // bl ov74_02231764
    // cmp r0, #0
    // bne _02231F60
    // add r0, r6, #0
    // bl TranslateAgbSpecies
    // add r6, r0, #0
    // b _02231F62
    // mov r6, #0
    // ldr r2, [sp]
    // add r0, r6, #0
    // add r1, r7, #0
    // bl GetMonIconNaixEx
    // ldr r2, [sp, #0x24]
    // ldr r3, [sp, #0x28]
    // add r1, sp, #4
    // bl ov74_02231E38
    // ldr r0, [sp, #4]
    // add r1, r4, #0
    // mov r2, #2
    // ldr r0, [r0, #0x14]
    // add r1, #0xc
    // lsl r2, r2, #8
    // bl MIi_CpuCopyFast
    // lsl r0, r5, #4
    // add r0, #0x64
    // lsl r0, r0, #5
    // str r0, [r4]
    // ldr r0, [sp, #0x20]
    // ldr r1, [sp]
    // str r0, [r4, #8]
    // add r0, r6, #0
    // add r2, r7, #0
    // bl GetMonIconPaletteEx
    // add r0, #8
    // add sp, #8
    // str r0, [r4, #4]
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #0
    // str r0, [r4, #8]
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // _02231FAC: .word ov74_0223D338
    // TODO: decompile
}



void ov74_02231FB0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // ldr r0, _02231FF0 ; =ov74_0223D338
    // mov r6, #2
    // lsl r6, r6, #8
    // add r7, r6, #0
    // ldr r5, [r0]
    // mov r4, #0
    // add r7, #0xc
    // ldr r0, [r5, #8]
    // cmp r0, #0
    // beq _02231FE4
    // add r0, r5, #0
    // add r0, #0xc
    // add r1, r6, #0
    // bl DC_FlushRange
    // add r0, r5, #0
    // ldr r1, [r5]
    // add r0, #0xc
    // add r2, r6, #0
    // bl GX_LoadOBJ
    // ldr r0, [r5, #8]
    // ldr r1, [r5, #4]
    // bl Sprite_SetPaletteOverride
    // add r4, r4, #1
    // add r5, r5, r7
    // cmp r4, #0x1e
    // blt _02231FC0
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02231FF0: .word ov74_0223D338
    // TODO: decompile
}



void ov74_02231FF4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x20
    // add r6, r0, #0
    // mov r0, #0x14
    // mov r1, #0x4c
    // bl NARC_New
    // mov r1, #1
    // str r0, [sp, #0x10]
    // mov r0, #0x4c
    // lsl r1, r1, #0xc
    // bl Heap_AllocAtEnd
    // mov r7, #0
    // str r0, [sp, #0x14]
    // str r7, [sp, #0xc]
    // add r5, r6, #0
    // ldr r0, _02232140 ; =0x0000E880
    // ldr r1, _02232144 ; =0x0000E884
    // ldr r0, [r6, r0]
    // ldr r2, [r6, r1]
    // mov r1, #0x96
    // lsl r1, r1, #4
    // mul r1, r2
    // add r0, r0, #4
    // add r1, r0, r1
    // ldr r0, [sp, #0xc]
    // mov r2, #0
    // add r0, r1, r0
    // mov r1, #5
    // bl AGB_GetBoxMonData
    // cmp r0, #0
    // beq _022320DA
    // ldr r1, _02232144 ; =0x0000E884
    // add r0, r6, #0
    // ldr r1, [r6, r1]
    // add r2, r7, #0
    // bl ov74_02231D70
    // ldr r1, _02232144 ; =0x0000E884
    // str r0, [sp, #0x1c]
    // ldr r1, [r6, r1]
    // add r0, r6, #0
    // add r2, r7, #0
    // bl ov74_02231D94
    // ldr r1, _02232144 ; =0x0000E884
    // str r0, [sp, #0x18]
    // ldr r1, [r6, r1]
    // add r0, r6, #0
    // add r2, r7, #0
    // bl ov74_02231DB8
    // add r4, r0, #0
    // ldr r0, [sp, #0x1c]
    // bl TranslateAgbSpecies
    // ldr r2, _02232148 ; =gSystem + 0x60
    // add r1, r4, #0
    // ldrb r2, [r2, #0xa]
    // bl ov74_02231E54
    // add r4, r0, #0
    // mov r0, #0x6a
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // ldr r1, [sp, #0x18]
    // str r0, [sp]
    // ldr r0, [sp, #0x14]
    // add r2, r4, #0
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x10]
    // add r3, r7, #0
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x1c]
    // bl ov74_02231F30
    // mov r0, #0x6a
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #1
    // bl Sprite_SetDrawFlag
    // ldr r0, _02232140 ; =0x0000E880
    // ldr r1, _02232144 ; =0x0000E884
    // ldr r0, [r6, r0]
    // ldr r2, [r6, r1]
    // mov r1, #0x96
    // lsl r1, r1, #4
    // mul r1, r2
    // add r0, r0, #4
    // add r1, r0, r1
    // ldr r0, [sp, #0xc]
    // mov r2, #0
    // add r0, r1, r0
    // mov r1, #0xc
    // bl AGB_GetBoxMonData
    // cmp r0, #0
    // beq _022320CC
    // mov r0, #0x6b
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #1
    // bl Sprite_SetDrawFlag
    // b _0223210A
    // mov r0, #0x6b
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #0
    // bl Sprite_SetDrawFlag
    // b _0223210A
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp, #0x18]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x10]
    // add r2, r4, #0
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x1c]
    // add r3, r7, #0
    // bl ov74_02231F30
    // mov r0, #0x6a
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #0
    // bl Sprite_SetDrawFlag
    // mov r0, #0x6b
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #0
    // bl Sprite_SetDrawFlag
    // ldr r0, [sp, #0xc]
    // add r7, r7, #1
    // add r0, #0x50
    // add r5, #0xc
    // str r0, [sp, #0xc]
    // cmp r7, #0x1e
    // bge _0223211A
    // b _02232016
    // ldr r0, [sp, #0x14]
    // bl Heap_Free
    // ldr r0, [sp, #0x10]
    // bl NARC_Delete
    // ldr r1, _0223214C ; =ov74_02231FB0
    // ldr r0, _02232150 ; =0x00012604
    // str r1, [r6, r0]
    // ldr r1, _02232144 ; =0x0000E884
    // add r0, r6, #0
    // ldr r1, [r6, r1]
    // bl ov74_02232678
    // add r0, r6, #0
    // bl ov74_0223262C
    // add sp, #0x20
    // pop {r3, r4, r5, r6, r7, pc}
    // _02232140: .word 0x0000E880
    // _02232144: .word 0x0000E884
    // _02232148: .word gSystem + 0x60
    // _0223214C: .word ov74_02231FB0
    // _02232150: .word 0x00012604
    // TODO: decompile
}



void ov74_02232154(void) {
    // add r0, sp, #0x14
    // add r2, r5, r2
    ov74_02231D48(r0, (0x61 << 2), 1);
    // str r0, [sp, #8]
    // str r4, [sp, #0xc]
    // add r7, r5, r0
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #8]
    // str r0, [sp, #4]
    // str r0, [sp]
    // ldr r2, [sp, #8]
    ov74_02231DDC(r7, 0x1c, 0x1c);
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #4]
    // str r0, [sp, #0x20]
    // ldr r0, [r5, r0]
    // add r0, sp, #0x14
    Sprite_CreateAffine((0x6a << 2));
    // str r0, [r5, r1]
    // ldr r0, [r5, r0]
    Sprite_SetAnimActiveFlag((0x6a << 2), 1);
    // ldr r0, [r5, r0]
    // add r1, #0xa
    Sprite_SetAnimCtrlSeq((0x6a << 2), r4);
    // ldr r0, [r5, r0]
    Sprite_SetPriority((0x6a << 2), 1);
    // ldr r0, [r5, r0]
    Sprite_SetDrawFlag((0x6a << 2), 1);
    // ldr r0, [r5, r0]
    // add r1, #0x64
    Sprite_SetDrawPriority((0x6a << 2), r4);
    // ldr r1, [sp, #0x1c]
    // add r0, r1, r0
    // str r0, [sp, #0x1c]
    // ldr r1, [sp, #0x20]
    // add r0, r1, r0
    // str r0, [sp, #0x20]
    // ldr r0, [r5, r0]
    // add r0, sp, #0x14
    Sprite_CreateAffine((0x6b << 2));
    // str r0, [r5, r1]
    // ldr r0, [r5, r0]
    Sprite_SetAnimActiveFlag((0x6b << 2), 1);
    // ldr r0, [r5, r0]
    Sprite_SetAnimCtrlSeq((0x6b << 2), 0x28);
    // ldr r0, [r5, r0]
    Sprite_SetPriority((0x6b << 2), 1);
    // ldr r0, [r5, r0]
    Sprite_SetDrawFlag((0x6b << 2), 0);
    // ldr r0, [r5, r0]
    Sprite_SetDrawPriority((0x6b << 2), r4);
    // add r5, #0xc
    // ldr r0, [sp, #0x10]
    // add r6, #0x28
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #8]
    // add r0, #0x18
    // str r0, [sp, #8]
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #0xc]
}



void ov74_02232284(void) {
    // add r0, sp, #0
    // add r2, r6, r2
    ov74_02231D48(r0, (0x61 << 2), 1);
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x24]
    // add r0, sp, #0
    Sprite_CreateAffine(0xa);
    Sprite_SetAnimActiveFlag(1);
    Sprite_SetAnimCtrlSeq(r4, r7);
    Sprite_SetPriority(r4, 1);
    // ldr r1, [sp, #0x48]
    Sprite_SetDrawFlag(r4);
}



void ov74_022322D8(void) {
    // str r0, [sp]
    // add r0, r6, r0
    ov74_02231DDC((0xe2 << 2), 0xe4, 0xb0, 0x32);
    // str r0, [sp]
    ov74_02232284(r6, 0xe4, 0xb0, 6);
    // str r0, [r6, r1]
    // sub r1, #8
    // add r0, r6, r1
    // str r3, [sp]
    ov74_02231DDC(0xb0, 0xb0, 0x20);
    // str r0, [sp]
    ov74_02232284(r6, 0xb0, 0xb0, 3);
    // str r0, [r6, r1]
    // sub r1, #0x1c
    // add r0, r6, r1
    // str r3, [sp]
    ov74_02231DDC(0x18, 0xb0, 0x20);
    // str r0, [sp]
    ov74_02232284(r6, 0x18, 0xb0, 0);
    // str r0, [r6, r1]
    // sub r1, #0x24
    // strb r0, [r6, r1]
    // str r0, [sp]
    ov74_02232284(r6, 0, 0x40, 9);
    // str r0, [r5, r1]
    // mvn r1, r1
    // str r1, [r5, r0]
    // str r1, [r5, r0]
    // add r4, #0x24
    // add r5, #0xc
    // str r1, [r6, r0]
}



void ov74_02232398(void) {
    // push {r3, lr}
    // ldr r3, _022323CC ; =0x0000E880
    // ldr r2, [r0, r3]
    // add r3, r3, #4
    // ldr r3, [r0, r3]
    // mov r0, #0x96
    // lsl r0, r0, #4
    // add r2, r2, #4
    // mul r0, r3
    // add r2, r2, r0
    // mov r0, #0x50
    // mul r0, r1
    // add r0, r2, r0
    // mov r1, #0x41
    // mov r2, #0
    // bl AGB_GetBoxMonData
    // mov r1, #0x67
    // lsl r1, r1, #2
    // cmp r0, r1
    // bne _022323C6
    // mov r0, #1
    // pop {r3, pc}
    // mov r0, #0
    // pop {r3, pc}
    // nop
    // _022323CC: .word 0x0000E880
    // TODO: decompile
}



void ov74_022323D0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // ldr r3, _0223241C ; =0x0000E880
    // mov r5, #0
    // ldr r2, [r0, r3]
    // add r3, r3, #4
    // ldr r3, [r0, r3]
    // mov r0, #0x96
    // lsl r0, r0, #4
    // add r2, r2, #4
    // mul r0, r3
    // add r4, r2, r0
    // mov r0, #0x50
    // add r6, r1, #0
    // mul r6, r0
    // add r7, r5, #0
    // add r1, r5, #0
    // add r0, r4, r6
    // add r1, #0xd
    // add r2, r7, #0
    // bl AGB_GetBoxMonData
    // ldr r3, _02232420 ; =ov74_0223C998
    // add r2, r0, #0
    // mov r1, #0
    // ldr r0, [r3]
    // cmp r2, r0
    // bne _0223240A
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // add r1, r1, #1
    // add r3, r3, #4
    // cmp r1, #8
    // blo _02232400
    // add r5, r5, #1
    // cmp r5, #4
    // blt _022323EE
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // _0223241C: .word 0x0000E880
    // _02232420: .word ov74_0223C998
    // TODO: decompile
}



void ov74_02232424(void) {
    // push {r3, lr}
    // ldr r3, _02232468 ; =0x0000E880
    // ldr r2, [r0, r3]
    // add r3, r3, #4
    // ldr r3, [r0, r3]
    // mov r0, #0x96
    // lsl r0, r0, #4
    // add r2, r2, #4
    // mul r0, r3
    // add r2, r2, r0
    // mov r0, #0x50
    // mul r0, r1
    // add r0, r2, r0
    // mov r1, #0xc
    // mov r2, #0
    // bl AGB_GetBoxMonData
    // ldr r1, _0223246C ; =ov74_0223C9A8
    // ldrh r1, [r1, #0x30]
    // cmp r1, #0
    // beq _02232462
    // ldr r2, _02232470 ; =ov74_0223C9D8
    // ldrh r1, [r2]
    // cmp r0, r1
    // bne _0223245A
    // mov r0, #1
    // pop {r3, pc}
    // add r2, r2, #2
    // ldrh r1, [r2]
    // cmp r1, #0
    // bne _02232450
    // mov r0, #0
    // pop {r3, pc}
    // nop
    // _02232468: .word 0x0000E880
    // _0223246C: .word ov74_0223C9A8
    // _02232470: .word ov74_0223C9D8
    // TODO: decompile
}



void ov74_02232474(void) {
    // push {r3, lr}
    // ldr r3, _0223249C ; =0x0000E880
    // ldr r2, [r0, r3]
    // add r3, r3, #4
    // ldr r3, [r0, r3]
    // mov r0, #0x96
    // lsl r0, r0, #4
    // add r2, r2, #4
    // mul r0, r3
    // add r2, r2, r0
    // mov r0, #0x50
    // mul r0, r1
    // add r0, r2, r0
    // mov r1, #0xb
    // mov r2, #0
    // bl AGB_GetBoxMonData
    // bl ov74_02231764
    // pop {r3, pc}
    // _0223249C: .word 0x0000E880
    // TODO: decompile
}



void ov74_022324A0(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // add r4, r0, #0
    // mov r0, #0x6a
    // lsl r0, r0, #2
    // add r0, r4, r0
    // str r0, [sp]
    // add r6, r1, #0
    // mov r0, #0xc
    // mul r0, r6
    // ldr r1, [sp]
    // str r0, [sp, #4]
    // ldr r0, [r1, r0]
    // cmp r0, #0
    // beq _022324CC
    // bl Sprite_GetDrawFlag
    // cmp r0, #0
    // bne _022324CC
    // add sp, #0x14
    // mov r0, #3
    // pop {r4, r5, r6, r7, pc}
    // mov r5, #0
    // mov r7, #0x3d
    // mvn r5, r5
    // mov r2, #0
    // add r3, r4, #0
    // lsl r7, r7, #4
    // b _022324F4
    // ldr r0, _02232628 ; =0x0000E884
    // ldr r1, [r4, r0]
    // ldr r0, [r3, r7]
    // cmp r1, r0
    // bne _022324F0
    // mov r0, #0xf3
    // lsl r0, r0, #2
    // ldr r0, [r3, r0]
    // cmp r6, r0
    // bne _022324F0
    // add r5, r2, #0
    // add r3, #0xc
    // add r2, r2, #1
    // mov r0, #0
    // mvn r0, r0
    // cmp r5, r0
    // bne _02232500
    // cmp r2, #6
    // blt _022324DA
    // add r0, r4, #0
    // add r1, r6, #0
    // bl ov74_02232398
    // cmp r0, #1
    // bne _02232512
    // add sp, #0x14
    // mov r0, #4
    // pop {r4, r5, r6, r7, pc}
    // add r0, r4, #0
    // add r1, r6, #0
    // bl ov74_022323D0
    // cmp r0, #1
    // bne _02232524
    // add sp, #0x14
    // mov r0, #5
    // pop {r4, r5, r6, r7, pc}
    // add r0, r4, #0
    // add r1, r6, #0
    // bl ov74_02232424
    // cmp r0, #1
    // bne _02232536
    // add sp, #0x14
    // mov r0, #6
    // pop {r4, r5, r6, r7, pc}
    // add r0, r4, #0
    // add r1, r6, #0
    // bl ov74_02232474
    // cmp r0, #1
    // bne _02232548
    // add sp, #0x14
    // mov r0, #7
    // pop {r4, r5, r6, r7, pc}
    // mov r0, #0
    // mvn r0, r0
    // cmp r5, r0
    // bne _022325F0
    // mov r0, #0x41
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // cmp r0, #6
    // bne _02232560
    // add sp, #0x14
    // mov r0, #0
    // pop {r4, r5, r6, r7, pc}
    // mov r5, #0
    // mov r0, #0xf3
    // add r3, r4, #0
    // lsl r0, r0, #2
    // sub r1, r5, #1
    // ldr r2, [r3, r0]
    // cmp r2, r1
    // bne _022325E6
    // ldr r1, [sp]
    // ldr r0, [sp, #4]
    // ldr r0, [r1, r0]
    // bl Sprite_GetMatrixPtr
    // add r1, r0, #0
    // mov r0, #0xc
    // add r7, r5, #0
    // mul r7, r0
    // mov r0, #0xf2
    // lsl r0, r0, #2
    // add r5, r4, r0
    // ldr r0, [r5, r7]
    // bl Sprite_SetMatrix
    // ldr r0, [r5, r7]
    // bl Sprite_GetMatrixPtr
    // add r3, r0, #0
    // add r2, sp, #8
    // ldmia r3!, {r0, r1}
    // mov ip, r2
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // mov r1, #2
    // str r0, [r2]
    // ldr r0, [sp, #8]
    // lsl r1, r1, #0xe
    // sub r0, r0, r1
    // str r0, [sp, #8]
    // ldr r0, [sp, #0xc]
    // lsr r1, r1, #1
    // sub r0, r0, r1
    // str r0, [sp, #0xc]
    // ldr r0, [r5, r7]
    // mov r1, ip
    // bl Sprite_SetMatrix
    // ldr r0, [r5, r7]
    // mov r1, #1
    // bl Sprite_SetDrawFlag
    // mov r1, #0xf3
    // add r3, r4, r7
    // lsl r1, r1, #2
    // ldr r0, _02232628 ; =0x0000E884
    // str r6, [r3, r1]
    // ldr r2, [r4, r0]
    // add r0, r1, #4
    // str r2, [r3, r0]
    // add r0, r1, #0
    // add r0, #0x44
    // ldr r0, [r4, r0]
    // add r1, #0x44
    // add r0, r0, #1
    // str r0, [r4, r1]
    // add sp, #0x14
    // mov r0, #1
    // pop {r4, r5, r6, r7, pc}
    // add r5, r5, #1
    // add r3, #0xc
    // cmp r5, #6
    // blt _0223256A
    // b _02232622
    // mov r0, #0xc
    // add r6, r5, #0
    // mul r6, r0
    // mov r0, #0xf2
    // add r1, r4, r6
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // mov r1, #0
    // bl Sprite_SetDrawFlag
    // mov r2, #0
    // mov r1, #0xf3
    // mvn r2, r2
    // add r0, r4, r6
    // lsl r1, r1, #2
    // str r2, [r0, r1]
    // add r0, r1, #0
    // add r0, #0x44
    // ldr r0, [r4, r0]
    // add r1, #0x44
    // sub r0, r0, #1
    // str r0, [r4, r1]
    // add sp, #0x14
    // mov r0, #2
    // pop {r4, r5, r6, r7, pc}
    // mov r0, #0
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // _02232628: .word 0x0000E884
    // TODO: decompile
}



void ov74_0223262C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r0, #0
    // mov r4, #0
    // add r5, r6, #0
    // sub r7, r4, #1
    // mov r0, #0xf3
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // cmp r0, r7
    // beq _0223265C
    // ldr r0, _02232674 ; =0x0000E884
    // ldr r1, [r6, r0]
    // mov r0, #0x3d
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // cmp r1, r0
    // bne _0223265C
    // mov r0, #0xf2
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #1
    // bl Sprite_SetDrawFlag
    // b _02232668
    // mov r0, #0xf2
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #0
    // bl Sprite_SetDrawFlag
    // add r4, r4, #1
    // add r5, #0xc
    // cmp r4, #6
    // blt _02232636
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02232674: .word 0x0000E884
    // TODO: decompile
}



void ov74_02232678(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x60
    // add r5, r0, #0
    // mov r0, #0
    // add r4, r1, #0
    // add r3, sp, #0x14
    // add r1, r0, #0
    // mov r2, #4
    // stmia r3!, {r0, r1}
    // stmia r3!, {r0, r1}
    // sub r2, r2, #1
    // bne _02232688
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // ldr r0, _022326F0 ; =0x00000478
    // add r0, r5, r0
    // str r0, [sp, #0x14]
    // mov r0, #6
    // str r0, [sp, #0x1c]
    // mov r0, #0x15
    // str r0, [sp, #0x20]
    // mov r0, #0xd
    // str r0, [sp, #0x24]
    // mov r0, #2
    // str r0, [sp, #0x28]
    // sub r0, r0, #3
    // str r0, [sp, #0x48]
    // mov r0, #0
    // str r0, [sp, #0x2c]
    // str r0, [sp, #0x30]
    // mov r0, #1
    // str r0, [sp, #0x38]
    // str r0, [sp, #0x3c]
    // ldr r0, _022326F4 ; =0x00010200
    // str r0, [sp, #0x40]
    // mov r0, #0xa0
    // str r0, [sp, #0x34]
    // bl PmAgbCartridge_GetLanguage
    // add r3, r0, #0
    // ldr r0, _022326F8 ; =0x0000E880
    // mov r2, #9
    // ldr r1, [r5, r0]
    // ldr r0, _022326FC ; =0x00008344
    // add r1, r1, r0
    // lsl r0, r4, #3
    // add r0, r4, r0
    // add r0, r1, r0
    // add r1, sp, #0
    // bl ConvertRSStringToDPStringInternational
    // add r0, sp, #0
    // str r0, [sp, #0x4c]
    // add r0, r5, #0
    // add r1, sp, #0x14
    // mov r2, #1
    // bl ov74_02231A1C
    // add sp, #0x60
    // pop {r3, r4, r5, pc}
    // _022326F0: .word 0x00000478
    // _022326F4: .word 0x00010200
    // _022326F8: .word 0x0000E880
    // _022326FC: .word 0x00008344
    // TODO: decompile
}



void ov74_02232700(void) {
    GetBgTilemapBuffer(*((u32*)(r0 + 0x20)), 2);
    AGB_GetBoxMonData(r6, 8, 0);
    // tst r3, r0
    // add r6, #0x80
    // add r6, #0x60
    // add r3, #0xd6
    // strh r6, [r3]
    BgCommitTilemapBufferToVram(*((u32*)(r5 + 0x20)), 2, (0 + 1), r4);
}



void ov74_02232758(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x78
    // add r5, r0, #0
    // mov r0, #0
    // add r4, r1, #0
    // add r3, sp, #0x2c
    // add r1, r0, #0
    // mov r2, #4
    // stmia r3!, {r0, r1}
    // stmia r3!, {r0, r1}
    // sub r2, r2, #1
    // bne _02232768
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // mov r1, #0x20
    // str r1, [sp, #0x3c]
    // mov r1, #1
    // ldr r0, _02232908 ; =0x00000488
    // str r1, [sp, #0x50]
    // str r1, [sp, #0x54]
    // mov r1, #0xbc
    // str r1, [sp, #0x4c]
    // ldr r1, _0223290C ; =0x000F0200
    // add r0, r5, r0
    // str r1, [sp, #0x58]
    // mov r1, #0x2c
    // str r0, [sp, #0x2c]
    // mov r0, #0
    // str r1, [sp, #0x60]
    // mov r1, #0x90
    // mov r2, #4
    // str r1, [sp, #0x44]
    // str r0, [sp, #0x34]
    // str r0, [sp, #0x38]
    // str r0, [sp, #0x64]
    // str r0, [sp, #0x48]
    // add r0, r5, #0
    // add r1, sp, #0x2c
    // str r2, [sp, #0x40]
    // bl ov74_02231A1C
    // mov r0, #0x2b
    // str r0, [sp, #0x60]
    // mov r0, #0x50
    // str r0, [sp, #0x44]
    // mov r0, #8
    // str r0, [sp, #0x48]
    // add r0, r5, #0
    // add r1, sp, #0x2c
    // mov r2, #6
    // bl ov74_02231A1C
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov74_02232700
    // cmp r4, #0
    // bne _022327D6
    // ldr r0, [sp, #0x2c]
    // bl CopyWindowToVram
    // add sp, #0x78
    // pop {r3, r4, r5, r6, r7, pc}
    // add r2, sp, #0x1c
    // add r0, r4, #0
    // mov r1, #2
    // add r2, #2
    // bl AGB_GetBoxMonData
    // add r0, r4, #0
    // mov r1, #3
    // mov r2, #0
    // bl AGB_GetBoxMonData
    // add r3, r0, #0
    // add r0, sp, #0x1c
    // add r0, #2
    // add r1, sp, #8
    // mov r2, #0xb
    // bl ConvertRSStringToDPStringInternational
    // add r0, sp, #8
    // str r0, [sp, #0x64]
    // mov r0, #0
    // mvn r0, r0
    // str r0, [sp, #0x60]
    // mov r0, #8
    // str r0, [sp, #0x44]
    // mov r0, #0
    // str r0, [sp, #0x48]
    // add r0, r5, #0
    // add r1, sp, #0x2c
    // mov r2, #6
    // bl ov74_02231A1C
    // mov r0, #0x40
    // mov r1, #0x4c
    // bl String_New
    // add r6, r0, #0
    // mov r0, #1
    // mov r1, #0x1b
    // mov r2, #0xed
    // mov r3, #0x4c
    // bl NewMsgDataFromNarc
    // add r7, r0, #0
    // add r0, r4, #0
    // mov r1, #0xb
    // mov r2, #0
    // bl AGB_GetBoxMonData
    // bl TranslateAgbSpecies
    // str r0, [sp, #4]
    // ldr r1, [sp, #4]
    // add r0, r7, #0
    // add r2, r6, #0
    // bl ReadMsgDataIntoString
    // mov r0, #0
    // mvn r0, r0
    // str r0, [sp, #0x60]
    // mov r0, #0x10
    // str r0, [sp, #0x44]
    // str r0, [sp, #0x48]
    // add r0, r5, #0
    // add r1, sp, #0x2c
    // mov r2, #6
    // str r6, [sp, #0x68]
    // bl ov74_02231A1C
    // add r0, r7, #0
    // bl DestroyMsgData
    // add r0, r6, #0
    // bl String_Delete
    // add r0, r4, #0
    // mov r1, #0xc
    // mov r2, #0
    // bl AGB_GetBoxMonData
    // cmp r0, #0
    // beq _022328B8
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // bl UpConvertItemId_Gen3to4
    // add r7, r0, #0
    // mov r0, #0x40
    // mov r1, #0x4c
    // bl String_New
    // lsl r1, r7, #0x10
    // lsr r1, r1, #0x10
    // mov r2, #0x4c
    // add r6, r0, #0
    // bl GetItemNameIntoString
    // mov r0, #0
    // mvn r0, r0
    // str r0, [sp, #0x60]
    // mov r0, #0x98
    // str r0, [sp, #0x44]
    // mov r0, #0x10
    // str r0, [sp, #0x48]
    // add r0, r5, #0
    // add r1, sp, #0x2c
    // mov r2, #6
    // str r6, [sp, #0x68]
    // bl ov74_02231A1C
    // add r0, r6, #0
    // bl String_Delete
    // add r0, r4, #0
    // bl ov74_02234A0C
    // add r6, r0, #0
    // mov r0, #0xa
    // mov r1, #0x4c
    // bl String_New
    // mov r3, #1
    // add r1, r6, #0
    // mov r2, #3
    // add r4, r0, #0
    // str r3, [sp]
    // bl String16_FormatInteger
    // mov r0, #0
    // mvn r0, r0
    // str r0, [sp, #0x60]
    // mov r0, #0x64
    // str r0, [sp, #0x44]
    // mov r0, #8
    // str r0, [sp, #0x48]
    // add r0, r5, #0
    // add r1, sp, #0x2c
    // mov r2, #2
    // str r4, [sp, #0x68]
    // bl ov74_02231A1C
    // add r0, r4, #0
    // bl String_Delete
    // ldr r0, [sp, #4]
    // mov r1, #0
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // bl PlayCry
    // add sp, #0x78
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02232908: .word 0x00000488
    // _0223290C: .word 0x000F0200
    // TODO: decompile
}



void ov74_02232910(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, r1, 0);
    // str r0, [r4]
    *((u32*)(r5 + 0x24)) = r6;
}



void ov74_02232940(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0xc
    // add r5, r0, #0
    // mov r0, #6
    // str r0, [sp]
    // mov r0, #1
    // add r4, r3, #0
    // str r0, [sp, #4]
    // mov r0, #0x4c
    // add r6, r2, #0
    // str r0, [sp, #8]
    // ldr r3, _02232970 ; =0x00007FFF
    // mov r0, #0
    // add r2, r1, #0
    // bl BeginNormalPaletteFade
    // cmp r4, #0
    // beq _02232968
    // mov r0, #0x17
    // str r0, [r4]
    // str r6, [r5, #0x24]
    // add sp, #0xc
    // pop {r3, r4, r5, r6, pc}
    // nop
    // _02232970: .word 0x00007FFF
    // TODO: decompile
}



void ov74_02232974(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x80
    // ldr r5, _02232A34 ; =_0223B4F8
    // add r3, sp, #0x70
    // add r4, r0, #0
    // add r2, r3, #0
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // add r0, r2, #0
    // bl SetBothScreensModesAndDisable
    // ldr r5, _02232A38 ; =_0223B508
    // add r3, sp, #0x54
    // ldmia r5!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // mov r1, #0
    // str r0, [r3]
    // add r0, r4, #0
    // add r3, r1, #0
    // bl InitBgFromTemplate
    // add r0, r4, #0
    // mov r1, #0
    // bl BgClearTilemapBufferAndCommit
    // ldr r5, _02232A3C ; =_0223B524
    // add r3, sp, #0x38
    // ldmia r5!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // mov r1, #1
    // str r0, [r3]
    // add r0, r4, #0
    // mov r3, #0
    // bl InitBgFromTemplate
    // add r0, r4, #0
    // mov r1, #1
    // bl BgClearTilemapBufferAndCommit
    // ldr r5, _02232A40 ; =_0223B540
    // add r3, sp, #0x1c
    // ldmia r5!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // mov r1, #2
    // str r0, [r3]
    // add r0, r4, #0
    // mov r3, #0
    // bl InitBgFromTemplate
    // add r0, r4, #0
    // mov r1, #2
    // bl BgClearTilemapBufferAndCommit
    // ldr r5, _02232A44 ; =_0223B55C
    // add r3, sp, #0
    // ldmia r5!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // mov r1, #3
    // str r0, [r3]
    // add r0, r4, #0
    // mov r3, #0
    // bl InitBgFromTemplate
    // add r0, r4, #0
    // mov r1, #3
    // bl BgClearTilemapBufferAndCommit
    // add sp, #0x80
    // pop {r3, r4, r5, pc}
    // nop
    // _02232A34: .word _0223B4F8
    // _02232A38: .word _0223B508
    // _02232A3C: .word _0223B524
    // _02232A40: .word _0223B540
    // _02232A44: .word _0223B55C
    // TODO: decompile
}



void ov74_02232A48(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x38
    // ldr r5, _02232AC0 ; =_0223B578
    // add r4, r0, #0
    // add r3, sp, #0x10
    // mov r2, #5
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // sub r2, r2, #1
    // bne _02232A54
    // add r0, sp, #0x10
    // bl GfGfx_SetBanks
    // ldr r0, [r4, #0x20]
    // bl ov74_02232974
    // ldr r0, _02232AC4 ; =gSystem + 0x60
    // mov r1, #1
    // strb r1, [r0, #9]
    // bl GfGfx_SwapDisplay
    // bl ResetAllTextPrinters
    // mov r1, #0x1e
    // mov r0, #0
    // lsl r1, r1, #4
    // mov r2, #0x4c
    // bl LoadFontPal0
    // mov r0, #0xc0
    // str r0, [sp]
    // mov r0, #0x4c
    // mov r2, #0
    // str r0, [sp, #4]
    // mov r0, #0x71
    // mov r1, #0x17
    // add r3, r2, #0
    // bl GfGfxLoader_GXLoadPal
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #5
    // lsl r0, r0, #0xa
    // str r0, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // mov r0, #0x4c
    // str r0, [sp, #0xc]
    // ldr r2, [r4, #0x20]
    // mov r0, #0x71
    // mov r1, #0x1a
    // mov r3, #2
    // bl GfGfxLoader_LoadCharData
    // mov r0, #2
    // mov r1, #0x4c
    // bl FontID_Alloc
    // add sp, #0x38
    // pop {r3, r4, r5, pc}
    // _02232AC0: .word _0223B578
    // _02232AC4: .word gSystem + 0x60
    // TODO: decompile
}



void ov74_02232AC8(void) {
    // push {r4, lr}
    // sub sp, #0x10
    // add r4, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #6
    // lsl r0, r0, #8
    // str r0, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // mov r0, #0x4c
    // str r0, [sp, #0xc]
    // ldr r2, [r4, #0x20]
    // mov r0, #0x71
    // mov r1, #0x18
    // mov r3, #2
    // bl GfGfxLoader_LoadScrnData
    // mov r0, #0x20
    // str r0, [sp]
    // mov r0, #0x18
    // str r0, [sp, #4]
    // mov r2, #0
    // ldr r1, [r4]
    // ldr r0, _02232B14 ; =ov74_0223C960
    // add r3, r2, #0
    // ldrb r0, [r0, r1]
    // mov r1, #2
    // str r0, [sp, #8]
    // ldr r0, [r4, #0x20]
    // bl BgTilemapRectChangePalette
    // ldr r0, [r4, #0x20]
    // mov r1, #2
    // bl BgCommitTilemapBufferToVram
    // add sp, #0x10
    // pop {r4, pc}
    // _02232B14: .word ov74_0223C960
    // TODO: decompile
}



void ov74_02232B18(void) {
    // push {r4, lr}
    // sub sp, #8
    // mov r1, #7
    // add r4, r0, #0
    // mov r0, #0
    // lsl r1, r1, #6
    // mov r2, #0x4c
    // bl LoadFontPal0
    // mov r1, #0
    // mov r2, #0x3f
    // str r1, [sp]
    // mov r0, #0x4c
    // str r0, [sp, #4]
    // ldr r0, [r4, #0x20]
    // lsl r2, r2, #4
    // mov r3, #0xe
    // bl LoadUserFrameGfx1
    // ldr r0, [r4, #0x1c]
    // ldr r2, _02232BC0 ; =0x000003D2
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp]
    // mov r0, #0x4c
    // str r0, [sp, #4]
    // ldr r0, [r4, #0x20]
    // mov r1, #0
    // mov r3, #0xd
    // bl LoadUserFrameGfx2
    // ldr r0, _02232BC4 ; =0x0000042C
    // mov r1, #0
    // add r0, r4, r0
    // mov r2, #0x4c
    // bl memset
    // ldr r0, _02232BC8 ; =0x00000498
    // mov r3, #0x1b
    // add r1, r0, #0
    // add r2, r4, r0
    // sub r1, #0x6c
    // str r2, [r4, r1]
    // add r1, r0, #0
    // mov r2, #2
    // sub r1, #0x64
    // str r2, [r4, r1]
    // add r1, r0, #0
    // mov r2, #1
    // sub r1, #0x60
    // str r2, [r4, r1]
    // add r1, r0, #0
    // sub r1, #0x5c
    // str r3, [r4, r1]
    // add r1, r0, #0
    // mov r3, #4
    // sub r1, #0x58
    // str r3, [r4, r1]
    // add r3, r0, #0
    // mov r1, #0
    // sub r3, #0x48
    // str r1, [r4, r3]
    // add r3, r0, #0
    // sub r3, #0x44
    // str r2, [r4, r3]
    // add r3, r0, #0
    // sub r3, #0x4c
    // str r2, [r4, r3]
    // add r2, r0, #0
    // ldr r3, _02232BCC ; =0x0001020F
    // sub r2, #0x40
    // str r3, [r4, r2]
    // add r2, r0, #0
    // ldr r3, _02232BD0 ; =0x000F020F
    // sub r2, #0x3c
    // str r3, [r4, r2]
    // add r2, r0, #0
    // sub r2, #0x34
    // str r1, [r4, r2]
    // sub r0, #0x30
    // str r1, [r4, r0]
    // add sp, #8
    // pop {r4, pc}
    // nop
    // _02232BC0: .word 0x000003D2
    // _02232BC4: .word 0x0000042C
    // _02232BC8: .word 0x00000498
    // _02232BCC: .word 0x0001020F
    // _02232BD0: .word 0x000F020F
    // TODO: decompile
}



void ov74_02232BD4(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x4c
    // add r6, r0, #0
    // mov r7, #0x6b
    // mov r5, #0
    // add r4, r6, #0
    // lsl r7, r7, #2
    // mov r0, #0x6a
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl Sprite_SetDrawFlag
    // ldr r0, [r4, r7]
    // mov r1, #0
    // bl Sprite_SetDrawFlag
    // add r5, r5, #1
    // add r4, #0xc
    // cmp r5, #0x1e
    // blt _02232BE2
    // mov r7, #0xf2
    // mov r5, #0
    // add r4, r6, #0
    // lsl r7, r7, #2
    // ldr r0, [r4, r7]
    // mov r1, #0
    // bl Sprite_SetDrawFlag
    // add r5, r5, #1
    // add r4, #0xc
    // cmp r5, #6
    // blt _02232C06
    // mov r0, #0xe6
    // lsl r0, r0, #2
    // ldr r0, [r6, r0]
    // mov r1, #0
    // bl Sprite_SetDrawFlag
    // mov r0, #0xee
    // lsl r0, r0, #2
    // ldr r0, [r6, r0]
    // mov r1, #0
    // bl Sprite_SetDrawFlag
    // mov r0, #0xea
    // lsl r0, r0, #2
    // ldr r0, [r6, r0]
    // mov r1, #0
    // bl Sprite_SetDrawFlag
    // mov r2, #0x61
    // lsl r2, r2, #2
    // add r0, sp, #0x1c
    // add r1, r6, #0
    // add r2, r6, r2
    // mov r3, #1
    // bl ov74_02231D48
    // mov r0, #0x1c
    // mov r7, #0
    // str r0, [sp, #0x10]
    // add r4, r6, #0
    // add r5, r6, #0
    // ldr r0, [sp, #0x10]
    // lsl r0, r0, #0xc
    // str r0, [sp, #0x24]
    // mov r0, #0x8e
    // lsl r0, r0, #0xc
    // str r0, [sp, #0x28]
    // add r0, sp, #0x1c
    // bl Sprite_CreateAffine
    // ldr r1, _02232D94 ; =0x00000414
    // str r0, [r4, r1]
    // add r0, r1, #0
    // ldr r0, [r4, r0]
    // mov r1, #1
    // bl Sprite_SetAnimActiveFlag
    // ldr r0, _02232D94 ; =0x00000414
    // add r1, r7, #0
    // ldr r0, [r4, r0]
    // add r1, #0xa
    // bl Sprite_SetAnimCtrlSeq
    // ldr r0, _02232D94 ; =0x00000414
    // mov r1, #1
    // ldr r0, [r4, r0]
    // bl Sprite_SetPriority
    // ldr r0, _02232D94 ; =0x00000414
    // mov r1, #1
    // ldr r0, [r4, r0]
    // bl Sprite_SetDrawFlag
    // mov r1, #0x3d
    // mov r2, #0xf3
    // lsl r1, r1, #4
    // lsl r2, r2, #2
    // ldr r1, [r5, r1]
    // ldr r2, [r5, r2]
    // add r0, r6, #0
    // bl ov74_02231D70
    // mov r1, #0x3d
    // mov r2, #0xf3
    // lsl r1, r1, #4
    // lsl r2, r2, #2
    // str r0, [sp, #0x14]
    // ldr r1, [r5, r1]
    // ldr r2, [r5, r2]
    // add r0, r6, #0
    // bl ov74_02231D94
    // mov r1, #0x3d
    // mov r2, #0xf3
    // lsl r1, r1, #4
    // lsl r2, r2, #2
    // str r0, [sp, #0x18]
    // ldr r1, [r5, r1]
    // ldr r2, [r5, r2]
    // add r0, r6, #0
    // bl ov74_02231DB8
    // add r2, r0, #0
    // ldr r0, _02232D94 ; =0x00000414
    // str r7, [sp]
    // ldr r0, [r4, r0]
    // ldr r3, _02232D98 ; =gSystem + 0x60
    // str r0, [sp, #4]
    // ldrb r3, [r3, #0xa]
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp, #0x18]
    // bl ov74_02231EC4
    // ldr r0, [sp, #0x10]
    // add r7, r7, #1
    // add r0, #0x28
    // str r0, [sp, #0x10]
    // add r4, r4, #4
    // add r5, #0xc
    // cmp r7, #6
    // blt _02232C54
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #6
    // lsl r0, r0, #8
    // str r0, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // mov r0, #0x4c
    // str r0, [sp, #0xc]
    // ldr r2, [r6, #0x20]
    // mov r0, #0x71
    // mov r1, #0x19
    // mov r3, #2
    // bl GfGfxLoader_LoadScrnData
    // mov r0, #0x20
    // str r0, [sp]
    // mov r0, #0x18
    // str r0, [sp, #4]
    // mov r2, #0
    // ldr r1, [r6]
    // ldr r0, _02232D9C ; =ov74_0223C960
    // add r3, r2, #0
    // ldrb r0, [r0, r1]
    // mov r1, #2
    // str r0, [sp, #8]
    // ldr r0, [r6, #0x20]
    // bl BgTilemapRectChangePalette
    // ldr r0, [r6, #0x20]
    // mov r1, #2
    // bl BgCommitTilemapBufferToVram
    // mov r0, #2
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // mov r1, #7
    // mov r0, #0
    // lsl r1, r1, #6
    // mov r2, #0x4c
    // bl LoadFontPal0
    // mov r1, #0
    // mov r2, #0x3f
    // str r1, [sp]
    // mov r0, #0x4c
    // str r0, [sp, #4]
    // ldr r0, [r6, #0x20]
    // lsl r2, r2, #4
    // mov r3, #0xe
    // bl LoadUserFrameGfx1
    // ldr r0, [r6, #0x1c]
    // ldr r2, _02232DA0 ; =0x000003D2
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp]
    // mov r0, #0x4c
    // str r0, [sp, #4]
    // ldr r0, [r6, #0x20]
    // mov r1, #0
    // mov r3, #0xd
    // bl LoadUserFrameGfx2
    // add r0, r6, #0
    // bl ov74_02232B18
    // mov r1, #0x46
    // mov r0, #0xa
    // lsl r1, r1, #4
    // str r0, [r6, r1]
    // sub r1, #0x34
    // add r0, r6, #0
    // add r1, r6, r1
    // mov r2, #0x18
    // bl ov74_02231A1C
    // add sp, #0x4c
    // pop {r4, r5, r6, r7, pc}
    // _02232D94: .word 0x00000414
    // _02232D98: .word gSystem + 0x60
    // _02232D9C: .word ov74_0223C960
    // _02232DA0: .word 0x000003D2
    // TODO: decompile
}



void ov74_02232DA4(void) {
    ClearFrameAndWindow2(0);
    ClearWindowTilemapAndCopyToVram(r4);
    RemoveWindow(r4);
}



void ov74_02232DC4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r0, #0
    // ldr r7, _02232E34 ; =0x00000414
    // mov r4, #0
    // add r5, r6, #0
    // ldr r0, [r5, r7]
    // bl Sprite_Delete
    // add r4, r4, #1
    // add r5, r5, #4
    // cmp r4, #6
    // blt _02232DCE
    // mov r0, #2
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // ldr r0, _02232E38 ; =0x00000498
    // add r0, r6, r0
    // bl ov74_02232DA4
    // mov r0, #0xe6
    // lsl r0, r0, #2
    // ldr r0, [r6, r0]
    // mov r1, #1
    // bl Sprite_SetDrawFlag
    // mov r0, #0xee
    // lsl r0, r0, #2
    // ldr r0, [r6, r0]
    // mov r1, #1
    // bl Sprite_SetDrawFlag
    // mov r0, #0xea
    // lsl r0, r0, #2
    // ldr r0, [r6, r0]
    // mov r1, #1
    // bl Sprite_SetDrawFlag
    // mov r0, #0xf3
    // mov r5, #0
    // lsl r0, r0, #2
    // add r4, r6, #0
    // sub r3, r5, #1
    // mov r2, #0xe
    // add r1, r0, #4
    // str r3, [r4, r0]
    // str r2, [r4, r1]
    // add r5, r5, #1
    // add r4, #0xc
    // cmp r5, #6
    // blt _02232E1E
    // mov r0, #0x41
    // mov r1, #0
    // lsl r0, r0, #4
    // str r1, [r6, r0]
    // pop {r3, r4, r5, r6, r7, pc}
    // _02232E34: .word 0x00000414
    // _02232E38: .word 0x00000498
    // TODO: decompile
}



void ov74_02232E3C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r0, #0
    // mov r0, #0
    // add r1, r0, #0
    // bl Main_SetVBlankIntrCB
    // mov r7, #0x6a
    // mov r4, #0
    // add r5, r6, #0
    // lsl r7, r7, #2
    // ldr r0, [r5, r7]
    // cmp r0, #0
    // beq _02232E5A
    // bl Sprite_Delete
    // mov r0, #0x6b
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // cmp r0, #0
    // beq _02232E68
    // bl Sprite_Delete
    // add r4, r4, #1
    // add r5, #0xc
    // cmp r4, #0x1e
    // blt _02232E50
    // mov r7, #0xf2
    // mov r5, #0
    // add r4, r6, #0
    // lsl r7, r7, #2
    // ldr r0, [r4, r7]
    // cmp r0, #0
    // beq _02232E82
    // bl Sprite_Delete
    // add r5, r5, #1
    // add r4, #0xc
    // cmp r5, #6
    // blt _02232E78
    // mov r0, #0xe6
    // lsl r0, r0, #2
    // ldr r0, [r6, r0]
    // cmp r0, #0
    // beq _02232E98
    // bl Sprite_Delete
    // mov r0, #0xee
    // lsl r0, r0, #2
    // ldr r0, [r6, r0]
    // cmp r0, #0
    // beq _02232EA6
    // bl Sprite_Delete
    // mov r0, #0xea
    // lsl r0, r0, #2
    // ldr r0, [r6, r0]
    // cmp r0, #0
    // beq _02232EB4
    // bl Sprite_Delete
    // ldr r0, _02232F48 ; =0x00000478
    // add r0, r6, r0
    // bl ov74_02232DA4
    // ldr r0, _02232F4C ; =0x00000488
    // add r0, r6, r0
    // bl ov74_02232DA4
    // ldr r0, _02232F50 ; =0x00000498
    // add r0, r6, r0
    // bl ov74_02232DA4
    // mov r0, #2
    // bl FontID_Release
    // mov r0, #0x5b
    // lsl r0, r0, #2
    // ldr r0, [r6, r0]
    // bl sub_0200AEB0
    // mov r0, #0x17
    // lsl r0, r0, #4
    // ldr r0, [r6, r0]
    // bl sub_0200B0A8
    // mov r7, #0x55
    // mov r5, #0
    // add r4, r6, #0
    // lsl r7, r7, #2
    // ldr r0, [r4, r7]
    // bl Destroy2DGfxResObjMan
    // add r5, r5, #1
    // add r4, r4, #4
    // cmp r5, #6
    // blt _02232EEE
    // ldr r0, [r6, #0x28]
    // bl SpriteList_Delete
    // mov r0, #0
    // str r0, [r6, #0x28]
    // bl OamManager_Free
    // bl ObjCharTransfer_Destroy
    // bl ObjPlttTransfer_Destroy
    // ldr r0, _02232F54 ; =0x0000E88C
    // ldr r0, [r6, r0]
    // bl YesNoPrompt_Destroy
    // ldr r0, _02232F58 ; =gSystem + 0x60
    // mov r1, #0
    // strb r1, [r0, #9]
    // bl GfGfx_SwapDisplay
    // ldr r0, [r6, #0x20]
    // mov r1, #0
    // bl FreeBgTilemapBuffer
    // ldr r0, [r6, #0x20]
    // mov r1, #1
    // bl FreeBgTilemapBuffer
    // ldr r0, [r6, #0x20]
    // mov r1, #2
    // bl FreeBgTilemapBuffer
    // ldr r0, [r6, #0x20]
    // mov r1, #3
    // bl FreeBgTilemapBuffer
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02232F48: .word 0x00000478
    // _02232F4C: .word 0x00000488
    // _02232F50: .word 0x00000498
    // _02232F54: .word 0x0000E88C
    // _02232F58: .word gSystem + 0x60
    // TODO: decompile
}



void ov74_02232F5C(void) {
    // push {lr}
    // sub sp, #0x14
    // ldr r1, [r0, #0x20]
    // mov r3, #0
    // str r1, [sp]
    // mov r1, #2
    // lsl r1, r1, #8
    // str r1, [sp, #8]
    // mov r1, #8
    // str r1, [sp, #0xc]
    // str r3, [sp, #4]
    // mov r1, #0x19
    // add r2, sp, #0
    // strb r1, [r2, #0x10]
    // mov r1, #7
    // strb r1, [r2, #0x11]
    // strb r3, [r2, #0x13]
    // ldrb r3, [r2, #0x12]
    // mov r1, #0xf0
    // bic r3, r1
    // mov r1, #0x10
    // orr r1, r3
    // strb r1, [r2, #0x12]
    // ldr r1, _02232F98 ; =0x0000E88C
    // ldr r0, [r0, r1]
    // add r1, sp, #0
    // bl YesNoPrompt_InitFromTemplate
    // add sp, #0x14
    // pop {pc}
    // _02232F98: .word 0x0000E88C
    // TODO: decompile
}



void ov74_02232F9C(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x18
    // add r5, r0, #0
    // bl ov74_02233F84
    // add r4, r0, #0
    // bl PmAgbCartridge_GetLanguage
    // add r3, r0, #0
    // add r0, r4, #0
    // add r1, sp, #8
    // mov r2, #8
    // bl ConvertRSStringToDPStringInternational
    // mov r0, #0x4c
    // bl MessageFormat_New
    // add r4, r0, #0
    // mov r0, #8
    // mov r1, #0x4c
    // bl String_New
    // add r1, sp, #8
    // add r6, r0, #0
    // bl CopyU16ArrayToString
    // mov r1, #1
    // str r1, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // add r0, r4, #0
    // add r2, r6, #0
    // mov r3, #0
    // bl BufferString
    // add r0, r5, #0
    // bl ov74_02232B18
    // ldr r0, [r5]
    // mov r2, #0x18
    // lsl r1, r0, #2
    // ldr r0, _02233020 ; =ov74_0223C980
    // ldr r0, [r0, r1]
    // mov r1, #0x46
    // lsl r1, r1, #4
    // str r0, [r5, r1]
    // add r0, r1, #0
    // add r0, #0xc
    // sub r1, #0x34
    // str r4, [r5, r0]
    // add r0, r5, #0
    // add r1, r5, r1
    // bl ov74_02231A1C
    // add r0, r6, #0
    // bl String_Delete
    // add r0, r4, #0
    // bl MessageFormat_Delete
    // add r0, r5, #0
    // bl ov74_02232F5C
    // add sp, #0x18
    // pop {r4, r5, r6, pc}
    // nop
    // _02233020: .word ov74_0223C980
    // TODO: decompile
}



void ov74_02233024(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _02233054 ; =0x00012604
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // beq _02233038
    // blx r0
    // ldr r0, _02233054 ; =0x00012604
    // mov r1, #0
    // str r1, [r4, r0]
    // bl GF_RunVramTransferTasks
    // bl OamManager_ApplyAndResetBuffers
    // ldr r0, [r4, #0x20]
    // bl DoScheduledBgGpuUpdates
    // ldr r3, _02233058 ; =0x027E0000
    // ldr r1, _0223305C ; =0x00003FF8
    // mov r0, #1
    // ldr r2, [r3, r1]
    // orr r0, r2
    // str r0, [r3, r1]
    // pop {r4, pc}
    // _02233054: .word 0x00012604
    // _02233058: .word 0x027E0000
    // _0223305C: .word 0x00003FF8
    // TODO: decompile
}



void ov74_02233060(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // str r0, [sp]
    // ldr r0, [r0, #0x10]
    // bl Save_MigratedPokemon_Get
    // mov r6, #0
    // str r0, [sp, #8]
    // str r6, [sp, #4]
    // add r7, r6, #0
    // mov r4, #0
    // add r5, r4, #0
    // ldr r1, [sp]
    // ldr r0, _022330CC ; =0x0000E880
    // mov r2, #0
    // ldr r0, [r1, r0]
    // mov r1, #5
    // add r0, r0, #4
    // add r0, r0, r7
    // add r0, r0, r5
    // bl AGB_GetBoxMonData
    // cmp r0, #0
    // beq _02233092
    // add r6, r6, #1
    // add r4, r4, #1
    // add r5, #0x50
    // cmp r4, #0x1e
    // blt _02233078
    // mov r0, #0x96
    // lsl r0, r0, #4
    // add r7, r7, r0
    // ldr r0, [sp, #4]
    // add r0, r0, #1
    // str r0, [sp, #4]
    // cmp r0, #0xe
    // blt _02233074
    // cmp r6, #6
    // bge _022330B4
    // add sp, #0xc
    // mov r0, #5
    // pop {r4, r5, r6, r7, pc}
    // ldr r0, [sp, #8]
    // bl MigratedPokemon_CountPokemon
    // cmp r0, #0
    // beq _022330C4
    // add sp, #0xc
    // mov r0, #6
    // pop {r4, r5, r6, r7, pc}
    // mov r0, #0
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _022330CC: .word 0x0000E880
    // TODO: decompile
}



void ov74_022330D0(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // ldr r1, [r5, #4]
    // cmp r1, #0
    // beq _0223310C
    // bl ov74_02232B18
    // mov r0, #1
    // bl TextFlags_SetCanTouchSpeedUpPrint
    // ldr r0, _0223312C ; =ov74_0223C9B8
    // lsl r1, r4, #2
    // ldr r0, [r0, r1]
    // mov r1, #0x46
    // lsl r1, r1, #4
    // str r0, [r5, r1]
    // add r0, r1, #0
    // sub r1, #0x34
    // mov r2, #1
    // add r0, #0x10
    // str r2, [r5, r0]
    // add r0, r5, #0
    // add r1, r5, r1
    // mov r2, #0x18
    // bl ov74_02231A1C
    // mov r0, #0
    // str r0, [r5, #4]
    // b _02233126
    // ldr r0, _02233130 ; =0x00000474
    // ldr r0, [r5, r0]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // bl TextPrinterCheckActive
    // cmp r0, #0
    // bne _02233126
    // mov r0, #0
    // bl TextFlags_SetCanTouchSpeedUpPrint
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // nop
    // _0223312C: .word ov74_0223C9B8
    // _02233130: .word 0x00000474
    // TODO: decompile
}



void ov74_02233134(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // ldr r1, [r5, #4]
    // cmp r1, #0
    // beq _02233170
    // bl ov74_02232B18
    // mov r0, #1
    // bl TextFlags_SetCanTouchSpeedUpPrint
    // ldr r0, _02233194 ; =ov74_0223C9B8
    // lsl r1, r4, #2
    // ldr r0, [r0, r1]
    // mov r1, #0x46
    // lsl r1, r1, #4
    // str r0, [r5, r1]
    // add r0, r1, #0
    // sub r1, #0x34
    // mov r2, #1
    // add r0, #0x10
    // str r2, [r5, r0]
    // add r0, r5, #0
    // add r1, r5, r1
    // mov r2, #0x18
    // bl ov74_02231A1C
    // mov r0, #0
    // str r0, [r5, #4]
    // b _02233190
    // ldr r0, _02233198 ; =0x00000474
    // ldr r0, [r5, r0]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // bl TextPrinterCheckActive
    // cmp r0, #0
    // bne _02233190
    // add r0, r5, #0
    // bl ov74_02232F5C
    // mov r0, #0
    // bl TextFlags_SetCanTouchSpeedUpPrint
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // _02233194: .word ov74_0223C9B8
    // _02233198: .word 0x00000474
    // TODO: decompile
}



void ov74_0223319C(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // mov r1, #0
    // ldr r2, [r5, #8]
    // mvn r1, r1
    // cmp r2, r1
    // beq _022331DE
    // bl ov74_02232B18
    // mov r0, #1
    // bl TextFlags_SetCanTouchSpeedUpPrint
    // mov r1, #0x46
    // ldr r0, [r5, #8]
    // lsl r1, r1, #4
    // str r0, [r5, r1]
    // add r0, r1, #0
    // add r0, #0x10
    // sub r1, #0x34
    // str r4, [r5, r0]
    // add r0, r5, #0
    // add r1, r5, r1
    // mov r2, #0x18
    // bl ov74_02231A1C
    // mov r0, #0
    // mvn r0, r0
    // str r0, [r5, #8]
    // ldr r0, _02233220 ; =SEQ_SE_DP_SELECT
    // bl PlaySE
    // b _0223321C
    // cmp r4, #0
    // beq _022331FC
    // ldr r0, _02233224 ; =0x00000474
    // ldr r0, [r5, r0]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // bl TextPrinterCheckActive
    // cmp r0, #0
    // bne _0223321C
    // mov r0, #0
    // bl TextFlags_SetCanTouchSpeedUpPrint
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // ldr r0, _02233228 ; =gSystem + 0x40
    // ldrh r0, [r0, #0x24]
    // cmp r0, #0
    // bne _0223320C
    // ldr r0, _0223322C ; =gSystem
    // ldr r0, [r0, #0x48]
    // cmp r0, #0
    // beq _0223321C
    // mov r0, #0
    // bl TextFlags_SetCanTouchSpeedUpPrint
    // ldr r0, _02233220 ; =SEQ_SE_DP_SELECT
    // bl PlaySE
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // _02233220: .word SEQ_SE_DP_SELECT
    // _02233224: .word 0x00000474
    // _02233228: .word gSystem + 0x40
    // _0223322C: .word gSystem
    // TODO: decompile
}



void ov74_02233230(void) {
    // push {r3, r4, r5, lr}
    // mov r2, #0xe
    // add r5, r0, #0
    // mov r0, #3
    // mov r1, #0x4c
    // lsl r2, r2, #0xe
    // bl Heap_Create
    // ldr r1, _022332D8 ; =0x00012610
    // add r0, r5, #0
    // mov r2, #0x4c
    // bl OverlayManager_CreateAndGetData
    // ldr r2, _022332D8 ; =0x00012610
    // mov r1, #0
    // add r4, r0, #0
    // bl memset
    // mov r0, #0x4c
    // bl BgConfig_Alloc
    // str r0, [r4, #0x20]
    // mov r0, #0x4c
    // bl YesNoPrompt_Create
    // ldr r1, _022332DC ; =0x0000E88C
    // str r0, [r4, r1]
    // mov r0, #0
    // add r1, r0, #0
    // bl sub_0200FBF4
    // mov r0, #1
    // mov r1, #0
    // bl sub_0200FBF4
    // add r0, r5, #0
    // bl OverlayManager_GetArgs
    // ldr r0, [r0, #8]
    // str r0, [r4, #0x10]
    // bl Save_PlayerData_GetProfile
    // str r0, [r4, #0x14]
    // ldr r0, [r4, #0x10]
    // bl Save_PlayerData_GetOptionsAddr
    // str r0, [r4, #0x18]
    // bl Options_GetFrame
    // str r0, [r4, #0x1c]
    // mov r0, #6
    // lsl r0, r0, #6
    // mov r1, #0x4c
    // bl String_New
    // ldr r1, _022332E0 ; =0x00012608
    // str r0, [r4, r1]
    // mov r0, #6
    // lsl r0, r0, #6
    // mov r1, #0x4c
    // bl String_New
    // ldr r1, _022332E4 ; =0x0001260C
    // mov r2, #1
    // str r0, [r4, r1]
    // ldr r1, _022332E8 ; =0x0000047E
    // mov r0, #9
    // bl Sound_SetSceneAndPlayBGM
    // bl OS_IsTickAvailable
    // cmp r0, #0
    // bne _022332C6
    // bl OS_InitTick
    // bl ov74_02236074
    // ldr r0, _022332EC ; =0x0000E89C
    // add r1, r4, r0
    // ldr r0, _022332F0 ; =ov74_0223D338
    // str r1, [r0]
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // nop
    // _022332D8: .word 0x00012610
    // _022332DC: .word 0x0000E88C
    // _022332E0: .word 0x00012608
    // _022332E4: .word 0x0001260C
    // _022332E8: .word 0x0000047E
    // _022332EC: .word 0x0000E89C
    // _022332F0: .word ov74_0223D338
    // TODO: decompile
}



void ov74_022332F4(void) {
    // TODO: decompile
}



void ov74_022338D4(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // bl OverlayManager_GetData
    // add r4, r0, #0
    // ldr r0, _02233914 ; =0x00012608
    // ldr r0, [r4, r0]
    // bl String_Delete
    // ldr r0, _02233918 ; =0x0001260C
    // ldr r0, [r4, r0]
    // bl String_Delete
    // ldr r0, [r4, #0x20]
    // bl Heap_Free
    // ldr r0, _0223391C ; =FS_OVERLAY_ID(intro_title)
    // ldr r1, _02233920 ; =gApplication_TitleScreen
    // bl RegisterMainOverlay
    // add r0, r5, #0
    // bl OverlayManager_FreeData
    // mov r0, #0x4c
    // bl Heap_Destroy
    // mov r0, #0
    // bl ov74_02236034
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // nop
    // _02233914: .word 0x00012608
    // _02233918: .word 0x0001260C
    // _0223391C: .word FS_OVERLAY_ID(intro_title)
    // _02233920: .word gApplication_TitleScreen
    // TODO: decompile
}



void PmAgbCartridgeHasFlash(void) {
}



void PmAgbCartridgeGetOffsets(void) {
    // push {r3, lr}
    // ldr r1, _02233994 ; =ov74_0223D33C
    // str r0, [r1, #8]
    // ldr r0, _02233998 ; =sPmAgbCartridgeSpec
    // ldr r0, [r0]
    // cmp r0, #0
    // beq _0223394A
    // mov r0, #0xc
    // pop {r3, pc}
    // ldr r0, _0223399C ; =sPmAgbRomCodeMappings
    // mov r1, #0x1e
    // bl IdentifyPmAgbCartridge
    // cmp r0, #0
    // bne _02233992
    // ldr r0, _02233998 ; =sPmAgbCartridgeSpec
    // ldr r0, [r0]
    // ldrb r0, [r0, #4]
    // cmp r0, #0
    // bne _0223397A
    // mov r0, #0x89
    // ldr r1, _022339A0 ; =sPmAgbRomHeader + 0x68
    // lsl r0, r0, #4
    // str r0, [r1, #0x20]
    // mov r0, #0xeb
    // lsl r0, r0, #6
    // str r0, [r1, #0x24]
    // ldr r2, _022339A4 ; =0x00001220
    // ldr r0, _02233994 ; =ov74_0223D33C
    // str r2, [r0, #0x68]
    // mov r0, #9
    // str r0, [r1, #0x30]
    // b _02233984
    // ldr r0, _022339A8 ; =0x08000100
    // ldr r1, _022339AC ; =sPmAgbRomHeader
    // mov r2, #0xfc
    // bl CTRDG_CpuCopy32
    // bl PmAgbCartridgeHasFlash
    // cmp r0, #0
    // bne _02233990
    // mov r0, #3
    // pop {r3, pc}
    // mov r0, #0
    // pop {r3, pc}
    // _02233994: .word ov74_0223D33C
    // _02233998: .word sPmAgbCartridgeSpec
    // _0223399C: .word sPmAgbRomCodeMappings
    // _022339A0: .word sPmAgbRomHeader + 0x68
    // _022339A4: .word 0x00001220
    // _022339A8: .word 0x08000100
    // _022339AC: .word sPmAgbRomHeader
    // TODO: decompile
}



void PmAgbCartridgeUnlinkSpec(void) {
    // ldr r0, _022339B8 ; =sPmAgbCartridgeSpec
    // mov r1, #0
    // str r1, [r0]
    // bx lr
    // _022339B8: .word sPmAgbCartridgeSpec
    // TODO: decompile
}



void PmAgbCartridge_GetVersionInternal(void) {
    // ldr r0, _022339C4 ; =sPmAgbCartridgeSpec
    // ldr r0, [r0]
    // ldrb r0, [r0, #5]
    // bx lr
    // _022339C4: .word sPmAgbCartridgeSpec
    // TODO: decompile
}



void PmAgbCartridge_GetLanguage(void) {
    // ldr r0, _022339D0 ; =sPmAgbCartridgeSpec
    // ldr r0, [r0]
    // ldrh r0, [r0, #6]
    // bx lr
    // _022339D0: .word sPmAgbCartridgeSpec
    // TODO: decompile
}



void IdentifyPmAgbCartridge(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0xc0
    // add r5, r0, #0
    // add r4, r1, #0
    // ldr r0, _02233A80 ; =sPmAgbCartridgeSpec
    // mov r1, #0
    // str r1, [r0]
    // bl CTRDG_IsAgbCartridge
    // cmp r0, #0
    // bne _022339F0
    // add sp, #0xc0
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // bl CTRDG_GetAgbGameCode
    // mov r2, #0
    // cmp r4, #0
    // ble _02233A14
    // add r3, r5, #0
    // ldr r1, [r3]
    // cmp r0, r1
    // bne _02233A0C
    // lsl r0, r2, #3
    // add r1, r5, r0
    // ldr r0, _02233A80 ; =sPmAgbCartridgeSpec
    // str r1, [r0]
    // b _02233A14
    // add r2, r2, #1
    // add r3, #8
    // cmp r2, r4
    // blt _022339FC
    // ldr r0, _02233A80 ; =sPmAgbCartridgeSpec
    // ldr r0, [r0]
    // cmp r0, #0
    // bne _02233A22
    // add sp, #0xc0
    // mov r0, #2
    // pop {r3, r4, r5, pc}
    // mov r0, #1
    // bl CTRDG_Enable
    // add r4, sp, #0
    // mov r0, #2
    // lsl r0, r0, #0x1a
    // add r1, r4, #0
    // mov r2, #0xc0
    // bl CTRDG_CpuCopy32
    // ldr r3, _02233A84 ; =sAgbCartNintendoLogo
    // mov r2, #0
    // add r0, r4, r2
    // ldrb r1, [r3]
    // ldrb r0, [r0, #4]
    // cmp r1, r0
    // beq _02233A4A
    // add sp, #0xc0
    // mov r0, #4
    // pop {r3, r4, r5, pc}
    // add r2, r2, #1
    // add r3, r3, #1
    // cmp r2, #0x9c
    // blo _02233A3A
    // mov r2, #0
    // mov r1, #0xa0
    // ldrb r0, [r4, r1]
    // add r1, r1, #1
    // add r0, r2, r0
    // lsl r0, r0, #0x18
    // lsr r2, r0, #0x18
    // cmp r1, #0xbc
    // ble _02233A56
    // add r2, #0x19
    // neg r0, r2
    // lsl r0, r0, #0x18
    // add r4, #0xbd
    // lsr r1, r0, #0x18
    // ldrb r0, [r4]
    // cmp r0, r1
    // beq _02233A7A
    // add sp, #0xc0
    // mov r0, #4
    // pop {r3, r4, r5, pc}
    // mov r0, #0
    // add sp, #0xc0
    // pop {r3, r4, r5, pc}
    // _02233A80: .word sPmAgbCartridgeSpec
    // _02233A84: .word sAgbCartNintendoLogo
    // TODO: decompile
}



void ov74_02233A88(void) {
    // add r2, r2, r1
    // add r0, r1, r0
}



void ov74_02233AB8(void) {
}



void ov74_02233ACC(void) {
    // cmp r0, #0
    // bne _02233ADA
    // ldr r0, _02233B00 ; =sPmAgbRomHeader + 0x68
    // ldr r0, [r0, #0x20]
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // bx lr
    // cmp r0, #4
    // bne _02233AEE
    // ldr r0, _02233B00 ; =sPmAgbRomHeader + 0x68
    // ldr r1, [r0, #0x24]
    // mov r0, #0xba
    // lsl r0, r0, #6
    // sub r0, r1, r0
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // bx lr
    // cmp r0, #0xd
    // bne _02233AF8
    // mov r0, #0x7d
    // lsl r0, r0, #4
    // bx lr
    // mov r0, #0x3e
    // lsl r0, r0, #6
    // bx lr
    // nop
    // _02233B00: .word sPmAgbRomHeader + 0x68
    // TODO: decompile
}



void ov74_02233B04(void) {
    // cmp r0, #0
    // bne _02233B14
    // ldr r0, _02233B54 ; =ov74_0223D33C
    // ldr r1, [r0, #8]
    // mov r0, #1
    // lsl r0, r0, #0xc
    // add r0, r1, r0
    // bx lr
    // cmp r0, #1
    // blt _02233B32
    // cmp r0, #4
    // bgt _02233B32
    // ldr r1, _02233B54 ; =ov74_0223D33C
    // ldr r2, [r1, #8]
    // mov r1, #2
    // lsl r1, r1, #0xc
    // add r2, r2, r1
    // sub r1, r0, #1
    // mov r0, #0x3e
    // lsl r0, r0, #6
    // mul r0, r1
    // add r0, r2, r0
    // bx lr
    // cmp r0, #5
    // blt _02233B50
    // cmp r0, #0xe
    // bge _02233B50
    // ldr r1, _02233B54 ; =ov74_0223D33C
    // ldr r2, [r1, #8]
    // mov r1, #6
    // lsl r1, r1, #0xc
    // add r2, r2, r1
    // sub r1, r0, #5
    // mov r0, #0x3e
    // lsl r0, r0, #6
    // mul r0, r1
    // add r0, r2, r0
    // bx lr
    // mov r0, #0
    // bx lr
    // _02233B54: .word ov74_0223D33C
    // TODO: decompile
}



void ov74_02233B58(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // mov r6, #0
    // add r5, r1, #0
    // str r6, [sp, #4]
    // add r1, r2, #0
    // str r6, [r1]
    // ldr r1, _02233BEC ; =ov74_0223D33C
    // add r7, r0, #0
    // str r6, [r1, #4]
    // mov r1, #0xe
    // str r2, [sp]
    // add r4, r6, #0
    // mul r7, r1
    // add r0, r4, #0
    // mov r1, #0xe
    // bl _s32_div_f
    // add r0, r1, r7
    // add r1, r5, #0
    // bl ov74_02233AB8
    // mov r1, #1
    // add r0, r5, #0
    // lsl r1, r1, #0xc
    // bl DC_FlushRange
    // ldr r0, _02233BF0 ; =0x00000FF8
    // ldr r1, [r5, r0]
    // ldr r0, _02233BF4 ; =0x08012025
    // cmp r1, r0
    // bne _02233BC6
    // mov r0, #1
    // str r0, [sp, #4]
    // ldr r0, _02233BF8 ; =0x00000FF4
    // ldrh r0, [r5, r0]
    // bl ov74_02233ACC
    // add r1, r0, #0
    // add r0, r5, #0
    // bl ov74_02233A88
    // ldr r1, _02233BFC ; =0x00000FF6
    // ldrh r1, [r5, r1]
    // cmp r1, r0
    // bne _02233BC6
    // ldr r0, _02233C00 ; =0x00000FFC
    // ldr r1, [r5, r0]
    // ldr r0, [sp]
    // str r1, [r0]
    // ldr r0, _02233BF8 ; =0x00000FF4
    // ldrh r1, [r5, r0]
    // mov r0, #1
    // lsl r0, r1
    // orr r6, r0
    // add r4, r4, #1
    // cmp r4, #0xe
    // blt _02233B74
    // ldr r0, [sp, #4]
    // cmp r0, #0
    // beq _02233BE4
    // ldr r0, _02233C04 ; =0x00003FFF
    // cmp r6, r0
    // bne _02233BDE
    // add sp, #8
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // add sp, #8
    // mov r0, #0xff
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #0
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02233BEC: .word ov74_0223D33C
    // _02233BF0: .word 0x00000FF8
    // _02233BF4: .word 0x08012025
    // _02233BF8: .word 0x00000FF4
    // _02233BFC: .word 0x00000FF6
    // _02233C00: .word 0x00000FFC
    // _02233C04: .word 0x00003FFF
    // TODO: decompile
}



void ov74_02233C08(void) {
    // add r2, sp, #4
    ov74_02233B58(0, r0);
    // add r2, sp, #0
    ov74_02233B58(1, r7);
    // ldr r0, [sp, #4]
    // mvn r1, r1
    // ldr r3, [sp]
    // ldr r3, [sp]
    // mvn r1, r1
    // str r3, [r4]
    // str r0, [r5]
    // str r0, [r4]
    // str r0, [r5]
    // ldr r1, [sp]
    // str r1, [r4]
    // str r0, [r5]
    // str r0, [r4]
    // str r0, [r5]
    // ldr r1, [sp, #4]
    // str r1, [r4]
    // str r0, [r5]
    // str r0, [r5]
    // ldr r0, [sp]
    // str r0, [r4]
    // str r0, [r5]
    // str r0, [r5]
    // str r0, [r4]
    // str r0, [r5]
    // str r0, [r4]
    // str r0, [r5]
}



void ov74_02233CE4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // ldr r0, _02233D98 ; =ov74_0223D33C
    // ldr r1, _02233D9C ; =ov74_0223D33C
    // ldr r0, [r0, #8]
    // ldr r2, _02233DA0 ; =ov74_0223D34C
    // bl ov74_02233C08
    // cmp r0, #1
    // beq _02233D0E
    // cmp r0, #0
    // beq _02233D06
    // cmp r0, #2
    // beq _02233D0A
    // cmp r0, #0xff
    // bne _02233D0E
    // mov r0, #5
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #7
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #6
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r7, _02233D98 ; =ov74_0223D33C
    // ldr r0, [r7]
    // cmp r0, #1
    // bhi _02233D92
    // mov r6, #0
    // ldr r5, [r7, #8]
    // add r4, r6, #0
    // ldr r1, [r7]
    // mov r0, #0xe
    // mul r0, r1
    // add r0, r4, r0
    // add r1, r5, #0
    // bl ov74_02233AB8
    // ldr r0, _02233DA4 ; =0x00000FF8
    // ldr r1, [r5, r0]
    // ldr r0, _02233DA8 ; =0x08012025
    // cmp r1, r0
    // bne _02233D7E
    // ldr r0, _02233DAC ; =0x00000FF4
    // ldrh r0, [r5, r0]
    // bl ov74_02233ACC
    // add r1, r0, #0
    // add r0, r5, #0
    // bl ov74_02233A88
    // ldr r1, _02233DB0 ; =0x00000FF6
    // ldrh r1, [r5, r1]
    // cmp r1, r0
    // bne _02233D7E
    // ldr r0, _02233DB4 ; =0x00000FFC
    // mov r1, #1
    // ldr r0, [r5, r0]
    // str r0, [r7, #0x10]
    // ldr r0, _02233DAC ; =0x00000FF4
    // ldrh r0, [r5, r0]
    // lsl r1, r0
    // orr r6, r1
    // bl ov74_02233ACC
    // str r0, [sp]
    // ldr r0, _02233DAC ; =0x00000FF4
    // ldrh r0, [r5, r0]
    // bl ov74_02233B04
    // add r1, r0, #0
    // ldr r2, [sp]
    // add r0, r5, #0
    // bl MIi_CpuCopy32
    // ldr r0, _02233DAC ; =0x00000FF4
    // ldrh r0, [r5, r0]
    // cmp r0, #0
    // bne _02233D7E
    // str r4, [r7, #0xc]
    // add r4, r4, #1
    // cmp r4, #0xe
    // blt _02233D1C
    // ldr r0, _02233DB8 ; =0x00003FFF
    // cmp r6, r0
    // bne _02233D8E
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #4
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #6
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02233D98: .word ov74_0223D33C
    // _02233D9C: .word ov74_0223D33C
    // _02233DA0: .word ov74_0223D34C
    // _02233DA4: .word 0x00000FF8
    // _02233DA8: .word 0x08012025
    // _02233DAC: .word 0x00000FF4
    // _02233DB0: .word 0x00000FF6
    // _02233DB4: .word 0x00000FFC
    // _02233DB8: .word 0x00003FFF
    // TODO: decompile
}



void ov74_02233DBC(void) {
    // push {r4, r5, r6, lr}
    // add r6, r0, #0
    // ldr r0, _02233E38 ; =ov74_0223D33C
    // mov r2, #1
    // ldr r5, [r0, #8]
    // str r2, [r0, #0x14]
    // mov r0, #0
    // add r1, r5, #0
    // lsl r2, r2, #0xc
    // bl MIi_CpuClear32
    // add r0, r6, #0
    // bl ov74_02233ACC
    // add r4, r0, #0
    // add r0, r6, #0
    // bl ov74_02233B04
    // add r1, r5, #0
    // add r2, r4, #0
    // bl MIi_CpuCopy32
    // ldr r0, _02233E38 ; =ov74_0223D33C
    // ldr r1, [r0, #0x10]
    // ldr r0, _02233E3C ; =0x00000FFC
    // str r1, [r5, r0]
    // add r1, r0, #0
    // sub r1, #8
    // strh r6, [r5, r1]
    // ldr r1, _02233E40 ; =0x08012025
    // sub r0, r0, #4
    // str r1, [r5, r0]
    // add r0, r6, #0
    // bl ov74_02233ACC
    // add r1, r0, #0
    // add r0, r5, #0
    // bl ov74_02233A88
    // ldr r1, _02233E44 ; =0x00000FF6
    // strh r0, [r5, r1]
    // ldr r0, _02233E38 ; =ov74_0223D33C
    // mov r1, #0xe
    // ldr r0, [r0, #0xc]
    // add r0, r6, r0
    // add r0, r0, #1
    // bl _s32_div_f
    // ldr r0, _02233E48 ; =sPmAgbCartridgeSpec
    // ldr r3, _02233E4C ; =ov74_02233E50
    // ldr r2, [r0, #4]
    // mov r0, #0xe
    // mul r0, r2
    // add r0, r1, r0
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // add r1, r5, #0
    // mov r2, #4
    // bl CTRDG_WriteAndVerifyAgbFlashAsync
    // pop {r4, r5, r6, pc}
    // nop
    // _02233E38: .word ov74_0223D33C
    // _02233E3C: .word 0x00000FFC
    // _02233E40: .word 0x08012025
    // _02233E44: .word 0x00000FF6
    // _02233E48: .word sPmAgbCartridgeSpec
    // _02233E4C: .word ov74_02233E50
    // TODO: decompile
}



void ov74_02233E50(void) {
    // ldr r0, [r0, #8]
    // cmp r0, #0
    // bne _02233E7C
    // ldr r1, _02233E88 ; =ov74_0223D33C
    // ldr r0, [r1, #4]
    // add r0, r0, #1
    // str r0, [r1, #4]
    // cmp r0, #0xe
    // blt _02233E6A
    // mov r0, #0
    // str r0, [r1, #4]
    // str r0, [r1, #0x14]
    // bx lr
    // cmp r0, #0xd
    // bne _02233E76
    // mov r0, #2
    // str r0, [r1, #0x14]
    // mov r0, #0
    // bx lr
    // mov r0, #3
    // str r0, [r1, #0x14]
    // b _02233E82
    // ldr r0, _02233E88 ; =ov74_0223D33C
    // mov r1, #4
    // str r1, [r0, #0x14]
    // mov r0, #0
    // bx lr
    // nop
    // _02233E88: .word ov74_0223D33C
    // TODO: decompile
}



void ov74_02233E8C(void) {
    // push {r3, lr}
    // ldr r1, _02233ECC ; =ov74_0223D33C
    // ldr r0, [r1, #4]
    // cmp r0, #0
    // bne _02233EB2
    // ldr r1, [r1]
    // cmp r1, #1
    // bne _02233EA2
    // mov r2, #0
    // ldr r1, _02233ED0 ; =sPmAgbCartridgeSpec
    // b _02233EA6
    // ldr r1, _02233ED0 ; =sPmAgbCartridgeSpec
    // mov r2, #1
    // str r2, [r1, #4]
    // ldr r1, _02233ECC ; =ov74_0223D33C
    // ldr r2, [r1, #0x10]
    // add r2, r2, #1
    // str r2, [r1, #0x10]
    // b _02233EB6
    // mov r0, #0
    // pop {r3, pc}
    // ldr r1, _02233ED0 ; =sPmAgbCartridgeSpec
    // ldr r1, [r1, #4]
    // cmp r1, #0
    // bge _02233EC2
    // mov r0, #0
    // pop {r3, pc}
    // bl ov74_02233DBC
    // mov r0, #1
    // pop {r3, pc}
    // nop
    // _02233ECC: .word ov74_0223D33C
    // _02233ED0: .word sPmAgbCartridgeSpec
    // TODO: decompile
}



void ov74_02233ED4(void) {
    // push {r3, lr}
    // ldr r1, _02233F10 ; =ov74_0223D33C
    // ldr r0, [r1, #0x14]
    // cmp r0, #4
    // bhi _02233F0C
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _02233EEA: ; jump table
    // ldr r0, [r1, #4]
    // bl ov74_02233DBC
    // mov r0, #0
    // pop {r3, pc}
    // ldr r0, [r1, #4]
    // bl ov74_02233DBC
    // mov r0, #0xa
    // pop {r3, pc}
    // mov r0, #8
    // pop {r3, pc}
    // mov r0, #0
    // pop {r3, pc}
    // _02233F10: .word ov74_0223D33C
    // TODO: decompile
}



void ov74_02233F14(void) {
    // ldr r0, _02233F48 ; =ov74_0223D33C
    // ldr r0, [r0, #0x14]
    // cmp r0, #4
    // bhi _02233F42
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _02233F28: ; jump table
    // mov r0, #0xb
    // bx lr
    // mov r0, #0xa
    // bx lr
    // mov r0, #9
    // bx lr
    // mov r0, #8
    // bx lr
    // mov r0, #0
    // bx lr
    // nop
    // _02233F48: .word ov74_0223D33C
    // TODO: decompile
}



void ov74_02233F4C(void) {
    // ldr r0, _02233F58 ; =ov74_0223D33C
    // ldr r1, [r0, #8]
    // mov r0, #6
    // lsl r0, r0, #0xc
    // add r0, r1, r0
    // bx lr
    // _02233F58: .word ov74_0223D33C
    // TODO: decompile
}



void ov74_02233F5C(void) {
}



void ov74_02233F68(void) {
}



void ov74_02233F84(void) {
}



void ov74_02233F8C(void) {
    _u32_div_f(r1, 0x18);
    // add r0, r1, r1
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02233FAC: ; jump table
    // add r4, #0x20
    // add r0, r5, r5
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02233FF0: ; jump table
    // add r6, #0xc
    // add r6, #0x18
    // add r6, #0x24
    // add r4, #0x20
    // add r0, r5, r5
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02234020: ; jump table
    // add r6, #0xc
    // add r6, #0x24
    // add r6, #0x18
    // add r4, #0x20
    // add r0, r5, r5
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02234050: ; jump table
    // add r6, #0x18
    // add r6, #0xc
    // add r6, #0x24
    // add r4, #0x20
    // add r0, r5, r5
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02234080: ; jump table
    // add r6, #0x24
    // add r6, #0xc
    // add r6, #0x18
    // add r4, #0x20
    // add r0, r5, r5
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _022340B0: ; jump table
    // add r6, #0x18
    // add r6, #0x24
    // add r6, #0xc
    // add r4, #0x20
    // add r0, r5, r5
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _022340E0: ; jump table
    // add r6, #0x24
    // add r6, #0x18
    // add r6, #0xc
    // add r4, #0x20
    // add r0, r5, r5
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02234112: ; jump table
    // add r6, #0xc
    // add r6, #0x18
    // add r6, #0x24
    // add r4, #0x20
    // add r0, r5, r5
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02234142: ; jump table
    // add r6, #0xc
    // add r6, #0x24
    // add r6, #0x18
    // add r4, #0x20
    // add r0, r5, r5
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02234172: ; jump table
    // add r6, #0x18
    // add r6, #0xc
    // add r6, #0x24
    // add r4, #0x20
    // add r0, r5, r5
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _022341A2: ; jump table
    // add r6, #0x24
    // add r6, #0xc
    // add r6, #0x18
    // add r4, #0x20
    // add r0, r5, r5
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _022341D2: ; jump table
    // add r6, #0x18
    // add r6, #0x24
    // add r6, #0xc
    // add r4, #0x20
    // add r0, r5, r5
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02234202: ; jump table
    // add r6, #0x24
    // add r6, #0x18
    // add r6, #0xc
    // add r4, #0x20
    // add r0, r5, r5
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02234234: ; jump table
    // add r6, #0xc
    // add r6, #0x18
    // add r6, #0x24
    // add r4, #0x20
    // add r0, r5, r5
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02234264: ; jump table
    // add r6, #0xc
    // add r6, #0x24
    // add r6, #0x18
    // add r4, #0x20
    // add r0, r5, r5
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02234294: ; jump table
    // add r6, #0x18
    // add r6, #0xc
    // add r6, #0x24
    // add r4, #0x20
    // add r0, r5, r5
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _022342C4: ; jump table
    // add r6, #0x24
    // add r6, #0xc
    // add r6, #0x18
    // add r4, #0x20
    // add r0, r5, r5
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _022342F4: ; jump table
    // add r6, #0x18
    // add r6, #0x24
    // add r6, #0xc
    // add r4, #0x20
    // add r0, r5, r5
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02234324: ; jump table
    // add r6, #0x24
    // add r6, #0x18
    // add r6, #0xc
    // add r4, #0x20
    // add r0, r5, r5
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02234356: ; jump table
    // add r6, #0xc
    // add r6, #0x18
    // add r6, #0x24
    // add r4, #0x20
    // add r0, r5, r5
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02234386: ; jump table
    // add r6, #0xc
    // add r6, #0x24
    // add r6, #0x18
    // add r4, #0x20
    // add r0, r5, r5
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _022343B6: ; jump table
    // add r6, #0x18
    // add r6, #0xc
    // add r6, #0x24
    // add r4, #0x20
    // add r0, r5, r5
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _022343E6: ; jump table
    // add r6, #0x24
    // add r6, #0xc
    // add r6, #0x18
    // add r4, #0x20
    // add r0, r5, r5
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02234416: ; jump table
    // add r6, #0x18
    // add r6, #0x24
    // add r6, #0xc
    // add r4, #0x20
    // add r0, r5, r5
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02234446: ; jump table
    // add r6, #0x24
    // add r6, #0x18
    // add r6, #0xc
}



void ov74_02234468(void) {
    // add r4, #0x20
    // eor r2, r1
    // str r2, [r4]
    // eor r1, r2
    // stmia r4!, {r1}
}



void ov74_02234488(void) {
    // add r4, #0x20
    // eor r2, r1
    // str r2, [r4]
    // eor r1, r2
    // stmia r4!, {r1}
}



void ov74_022344A8(void) {
    // str r0, [sp]
    ov74_02233F8C(*((u32*)r0), 0);
    // ldr r0, [sp]
    ov74_02233F8C(*((u32*)r0), 1);
    // ldr r0, [sp]
    ov74_02233F8C(*((u32*)r0), 2);
    // ldr r0, [sp]
    ov74_02233F8C(*((u32*)r0), 3);
    // ldrh r2, [r5]
    // add r2, r4, r2
    // ldrh r1, [r6]
    // add r1, r4, r1
    // ldrh r1, [r7]
    // add r1, r4, r1
    // ldrh r1, [r0]
    // add r1, r4, r1
}



void AGB_GetBoxMonData(void) {
    // str r1, [sp]
    // str r4, [sp, #0xc]
    // str r4, [sp, #8]
    // str r4, [sp, #4]
    ov74_02233F8C(*((u32*)r0), 0);
    // str r0, [sp, #0xc]
    ov74_02233F8C(r6, *((u32*)r6), 1);
    // str r0, [sp, #8]
    ov74_02233F8C(r6, *((u32*)r6), 2);
    // str r0, [sp, #4]
    ov74_02233F8C(r6, *((u32*)r6), 3);
    ov74_02234468(r6);
    ov74_022344A8(r6);
    // bic r0, r1
    // orr r0, r1
    *((u8*)(r6 + 0x13)) = *((u8*)(r6 + 0x13));
    // orr r0, r1
    *((u8*)(r6 + 0x13)) = 4;
    // orr r0, r1
    *((u32*)(r5 + 4)) = (1 << 0x1e);
    // ldr r0, [sp]
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _022345BA: ; jump table
    // add r0, r6, r4
    // strb r0, [r7, r4]
    // strb r0, [r7, r4]
    // add r0, r6, r4
    // strb r0, [r7, r4]
    // strb r0, [r7, r4]
    // ldr r0, [sp, #0xc]
    // ldrh r4, [r0]
    // ldr r0, [sp, #0xc]
    // ldr r0, [sp, #0xc]
    // ldr r0, [sp, #0xc]
    // ldr r0, [sp, #0xc]
    // ldr r0, [sp]
    // sub r0, #0xd
    // ldr r0, [sp, #8]
    // ldrh r4, [r0, r1]
    // ldr r1, [sp]
    // ldr r0, [sp, #8]
    // sub r1, #0x11
    // add r0, r0, r1
    // ldr r0, [sp, #4]
    // ldrb r4, [r0]
    // ldr r0, [sp, #4]
    // ldr r0, [sp, #4]
    // ldr r0, [sp, #4]
    // ldr r0, [sp, #4]
    // ldr r0, [sp, #4]
    // ldr r0, [sp, #4]
    // ldr r0, [sp, #4]
    // ldr r0, [sp, #4]
    // ldr r0, [sp, #4]
    // ldr r0, [sp, #4]
    // ldr r0, [sp, #4]
    // ldr r0, [sp, #0xc]
    // ldrh r4, [r0]
    // orr r0, r4
    // orr r0, r1
    // orr r0, r2
    // orr r0, r3
    // orr r4, r0
    // ldr r0, [sp]
    ov74_02234488(r6, (((*((u32*)(r5 + 4)) << 0x11) >> 0x1b) << 0xa), (((*((u32*)(r5 + 4)) << 0xc) >> 0x1b) << 0xf), (((*((u32*)(r5 + 4)) << 7) >> 0x1b) << 0x14));
}



void ov74_022348B0(void) {
    ov74_02233F8C(*((u32*)r0), 0);
    ov74_02233F8C(r4, *((u32*)r4), 1);
    ov74_02233F8C(r4, *((u32*)r4), 2);
    ov74_02233F8C(r4, *((u32*)r4), 3);
    // str r0, [sp]
    ov74_02234468(r4);
    ov74_022344A8(r4);
    // bic r1, r0
    // orr r0, r1
    *((u8*)(r4 + 0x13)) = 1;
    // orr r0, r1
    *((u8*)(r4 + 0x13)) = 4;
    // ldr r0, [sp]
    // orr r1, r0
    // ldr r0, [sp]
    *((u32*)((1 << 0x1e) + 4)) = *((u32*)(4 + 4));
    ov74_02234488(r4, *((u32*)(4 + 4)));
    // add r0, r6, r6
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02234934: ; jump table
    // ldrb r1, [r5, r2]
    // add r0, r4, r2
    *((u8*)((*((u16*)(r0 + 6)) << 0x10) + 8)) = r1;
    // ldrb r0, [r5]
    *((u8*)(r4 + 0x12)) = (*((u16*)(r0 + 6)) << 0x10);
    // ldrb r2, [r5]
    // bic r0, r1
    // and r1, r2
    // orr r0, r1
    *((u8*)(r4 + 0x13)) = *((u8*)(r4 + 0x13));
    // bic r0, r1
    // ldrb r1, [r5]
    // orr r0, r1
    *((u8*)(r4 + 0x13)) = *((u8*)(r4 + 0x13));
    // bic r0, r1
    // ldrb r1, [r5]
    // orr r0, r1
    *((u8*)(r4 + 0x13)) = *((u8*)(r4 + 0x13));
    // ldrb r1, [r5, r2]
    // add r0, r4, r2
    *((u8*)(*((u8*)(r4 + 0x13)) + 0x14)) = ((4 << 0x1f) >> 0x1d);
    // ldrb r1, [r5]
    // add r0, r1, r0
    // strh r0, [r7]
    // ldrh r0, [r7]
    // orr r0, r1
    *((u8*)(r4 + 0x13)) = 2;
    // bic r1, r0
    *((u8*)(r4 + 0x13)) = *((u8*)(r4 + 0x13));
    ov74_022344A8(r4, *((u8*)(r4 + 0x13)), (0 + 1));
    *((u16*)(r4 + 0x1c)) = r0;
    ov74_02234488(r4);
}



void TranslateAgbSpecies(void) {
    // ldr r1, _02234A00 ; =0x00000115
    // cmp r0, r1
    // blt _022349FC
    // ldr r3, _02234A04 ; =ov74_0223CC5C
    // mov r2, #0
    // ldrh r1, [r3]
    // cmp r0, r1
    // bne _022349F4
    // ldr r0, _02234A08 ; =ov74_0223CC5E
    // lsl r1, r2, #2
    // ldrh r0, [r0, r1]
    // bx lr
    // add r2, r2, #1
    // add r3, r3, #4
    // cmp r2, #0x90
    // blo _022349E6
    // bx lr
    // nop
    // _02234A00: .word 0x00000115
    // _02234A04: .word ov74_0223CC5C
    // _02234A08: .word ov74_0223CC5E
    // TODO: decompile
}



void ov74_02234A0C(void) {
    AGB_GetBoxMonData(0xb, 0);
    TranslateAgbSpecies();
    AGB_GetBoxMonData(r5, 0x19, 0);
    CalcLevelBySpeciesAndExp(((r4 << 0x10) >> 0x10), r0);
}



void AGB_GetBoxMonAbility(void) {
    // push {r4, r5, r6, lr}
    // add r4, r0, #0
    // add r0, r1, #0
    // mov r1, #5
    // mov r2, #0
    // bl GetBoxMonData
    // lsl r0, r0, #0x10
    // lsr r5, r0, #0x10
    // add r0, r4, #0
    // mov r1, #0x2e
    // mov r2, #0
    // bl AGB_GetBoxMonData
    // add r6, r0, #0
    // add r0, r5, #0
    // mov r1, #0x19
    // bl GetMonBaseStat
    // cmp r0, #0
    // beq _02234A8E
    // ldr r2, _02234A98 ; =ov74_0223CBA0
    // mov r4, #0
    // ldrh r1, [r2]
    // cmp r5, r1
    // bne _02234A72
    // add r0, r5, #0
    // mov r1, #0x18
    // bl GetMonBaseStat
    // b _02234A7A
    // add r4, r4, #1
    // add r2, r2, #2
    // cmp r4, #0x5e
    // blo _02234A62
    // cmp r4, #0x5e
    // bne _02234A96
    // mov r1, #1
    // tst r1, r6
    // bne _02234A96
    // add r0, r5, #0
    // mov r1, #0x18
    // bl GetMonBaseStat
    // pop {r4, r5, r6, pc}
    // add r0, r5, #0
    // mov r1, #0x18
    // bl GetMonBaseStat
    // pop {r4, r5, r6, pc}
    // _02234A98: .word ov74_0223CBA0
    // TODO: decompile
}



void MigrateBoxMon(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x30
    // add r4, r1, #0
    // add r6, r0, #0
    // add r0, r4, #0
    // bl ZeroBoxMonData
    // add r0, r4, #0
    // bl AcquireBoxMonLock
    // mov r1, #0
    // str r0, [sp]
    // add r0, r6, #0
    // add r2, r1, #0
    // bl AGB_GetBoxMonData
    // str r0, [sp, #8]
    // add r0, r4, #0
    // mov r1, #0
    // add r2, sp, #8
    // bl SetBoxMonData
    // add r0, r6, #0
    // mov r1, #0xb
    // mov r2, #0
    // bl AGB_GetBoxMonData
    // str r0, [sp, #8]
    // bl TranslateAgbSpecies
    // str r0, [sp, #8]
    // add r0, r4, #0
    // mov r1, #5
    // add r2, sp, #8
    // bl SetBoxMonData
    // add r0, r6, #0
    // mov r1, #0xc
    // mov r2, #0
    // bl AGB_GetBoxMonData
    // str r0, [sp, #8]
    // cmp r0, #0
    // beq _02234AFE
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // bl UpConvertItemId_Gen3to4
    // str r0, [sp, #8]
    // add r0, r4, #0
    // mov r1, #6
    // add r2, sp, #8
    // bl SetBoxMonData
    // add r0, r6, #0
    // mov r1, #1
    // mov r2, #0
    // bl AGB_GetBoxMonData
    // str r0, [sp, #8]
    // add r0, r4, #0
    // mov r1, #7
    // add r2, sp, #8
    // bl SetBoxMonData
    // add r0, r6, #0
    // mov r1, #0x19
    // mov r2, #0
    // bl AGB_GetBoxMonData
    // str r0, [sp, #8]
    // add r0, r4, #0
    // mov r1, #8
    // add r2, sp, #8
    // bl SetBoxMonData
    // mov r0, #0x46
    // str r0, [sp, #8]
    // add r0, r4, #0
    // mov r1, #9
    // add r2, sp, #8
    // bl SetBoxMonData
    // add r0, r6, #0
    // add r1, r4, #0
    // bl AGB_GetBoxMonAbility
    // str r0, [sp, #8]
    // add r0, r4, #0
    // mov r1, #0xa
    // add r2, sp, #8
    // bl SetBoxMonData
    // add r0, r6, #0
    // mov r1, #8
    // mov r2, #0
    // bl AGB_GetBoxMonData
    // str r0, [sp, #8]
    // add r0, r4, #0
    // mov r1, #0xb
    // add r2, sp, #8
    // bl SetBoxMonData
    // add r0, r6, #0
    // mov r1, #3
    // mov r2, #0
    // bl AGB_GetBoxMonData
    // str r0, [sp, #4]
    // add r0, r4, #0
    // mov r1, #0xc
    // add r2, sp, #4
    // bl SetBoxMonData
    // add r0, r6, #0
    // mov r1, #0x1a
    // mov r2, #0
    // bl AGB_GetBoxMonData
    // str r0, [sp, #8]
    // add r0, r4, #0
    // mov r1, #0xd
    // add r2, sp, #8
    // bl SetBoxMonData
    // add r0, r6, #0
    // mov r1, #0x1b
    // mov r2, #0
    // bl AGB_GetBoxMonData
    // str r0, [sp, #8]
    // add r0, r4, #0
    // mov r1, #0xe
    // add r2, sp, #8
    // bl SetBoxMonData
    // add r0, r6, #0
    // mov r1, #0x1c
    // mov r2, #0
    // bl AGB_GetBoxMonData
    // str r0, [sp, #8]
    // add r0, r4, #0
    // mov r1, #0xf
    // add r2, sp, #8
    // bl SetBoxMonData
    // add r0, r6, #0
    // mov r1, #0x1d
    // mov r2, #0
    // bl AGB_GetBoxMonData
    // str r0, [sp, #8]
    // add r0, r4, #0
    // mov r1, #0x10
    // add r2, sp, #8
    // bl SetBoxMonData
    // add r0, r6, #0
    // mov r1, #0x1e
    // mov r2, #0
    // bl AGB_GetBoxMonData
    // str r0, [sp, #8]
    // add r0, r4, #0
    // mov r1, #0x11
    // add r2, sp, #8
    // bl SetBoxMonData
    // add r0, r6, #0
    // mov r1, #0x1f
    // mov r2, #0
    // bl AGB_GetBoxMonData
    // str r0, [sp, #8]
    // add r0, r4, #0
    // mov r1, #0x12
    // add r2, sp, #8
    // bl SetBoxMonData
    // add r0, r6, #0
    // mov r1, #0x16
    // mov r2, #0
    // bl AGB_GetBoxMonData
    // str r0, [sp, #8]
    // add r0, r4, #0
    // mov r1, #0x13
    // add r2, sp, #8
    // bl SetBoxMonData
    // add r0, r6, #0
    // mov r1, #0x17
    // mov r2, #0
    // bl AGB_GetBoxMonData
    // str r0, [sp, #8]
    // add r0, r4, #0
    // mov r1, #0x14
    // add r2, sp, #8
    // bl SetBoxMonData
    // add r0, r6, #0
    // mov r1, #0x18
    // mov r2, #0
    // bl AGB_GetBoxMonData
    // str r0, [sp, #8]
    // add r0, r4, #0
    // mov r1, #0x15
    // add r2, sp, #8
    // bl SetBoxMonData
    // add r0, r6, #0
    // mov r1, #0x21
    // mov r2, #0
    // bl AGB_GetBoxMonData
    // str r0, [sp, #8]
    // add r0, r4, #0
    // mov r1, #0x16
    // add r2, sp, #8
    // bl SetBoxMonData
    // add r0, r6, #0
    // mov r1, #0x2f
    // mov r2, #0
    // bl AGB_GetBoxMonData
    // str r0, [sp, #8]
    // add r0, r4, #0
    // mov r1, #0x17
    // add r2, sp, #8
    // bl SetBoxMonData
    // add r0, r6, #0
    // mov r1, #0x30
    // mov r2, #0
    // bl AGB_GetBoxMonData
    // str r0, [sp, #8]
    // add r0, r4, #0
    // mov r1, #0x18
    // add r2, sp, #8
    // bl SetBoxMonData
    // mov r5, #0
    // add r7, r5, #0
    // add r1, r5, #0
    // add r0, r6, #0
    // add r1, #0xd
    // mov r2, #0
    // bl AGB_GetBoxMonData
    // add r1, r5, #0
    // str r0, [sp, #8]
    // add r0, r4, #0
    // add r1, #0x36
    // add r2, sp, #8
    // bl SetBoxMonData
    // add r0, r6, #0
    // mov r1, #0x15
    // mov r2, #0
    // bl AGB_GetBoxMonData
    // mov r1, #3
    // lsl r1, r7
    // str r0, [sp, #8]
    // and r0, r1
    // lsr r0, r7
    // add r1, r5, #0
    // str r0, [sp, #8]
    // add r0, r4, #0
    // add r1, #0x3e
    // add r2, sp, #8
    // bl SetBoxMonData
    // add r1, r5, #0
    // add r0, r4, #0
    // add r1, #0x42
    // mov r2, #0
    // bl GetBoxMonData
    // add r1, r5, #0
    // str r0, [sp, #8]
    // add r0, r4, #0
    // add r1, #0x3a
    // add r2, sp, #8
    // bl SetBoxMonData
    // add r5, r5, #1
    // add r7, r7, #2
    // cmp r5, #4
    // blt _02234C8E
    // add r0, r6, #0
    // mov r1, #0x27
    // mov r2, #0
    // bl AGB_GetBoxMonData
    // str r0, [sp, #8]
    // add r0, r4, #0
    // mov r1, #0x46
    // add r2, sp, #8
    // bl SetBoxMonData
    // add r0, r6, #0
    // mov r1, #0x28
    // mov r2, #0
    // bl AGB_GetBoxMonData
    // str r0, [sp, #8]
    // add r0, r4, #0
    // mov r1, #0x47
    // add r2, sp, #8
    // bl SetBoxMonData
    // add r0, r6, #0
    // mov r1, #0x29
    // mov r2, #0
    // bl AGB_GetBoxMonData
    // str r0, [sp, #8]
    // add r0, r4, #0
    // mov r1, #0x48
    // add r2, sp, #8
    // bl SetBoxMonData
    // add r0, r6, #0
    // mov r1, #0x2a
    // mov r2, #0
    // bl AGB_GetBoxMonData
    // str r0, [sp, #8]
    // add r0, r4, #0
    // mov r1, #0x49
    // add r2, sp, #8
    // bl SetBoxMonData
    // add r0, r6, #0
    // mov r1, #0x2b
    // mov r2, #0
    // bl AGB_GetBoxMonData
    // str r0, [sp, #8]
    // add r0, r4, #0
    // mov r1, #0x4a
    // add r2, sp, #8
    // bl SetBoxMonData
    // add r0, r6, #0
    // mov r1, #0x2c
    // mov r2, #0
    // bl AGB_GetBoxMonData
    // str r0, [sp, #8]
    // add r0, r4, #0
    // mov r1, #0x4b
    // add r2, sp, #8
    // bl SetBoxMonData
    // add r0, r6, #0
    // mov r1, #0x2d
    // mov r2, #0
    // bl AGB_GetBoxMonData
    // str r0, [sp, #8]
    // add r0, r4, #0
    // mov r1, #0x4c
    // add r2, sp, #8
    // bl SetBoxMonData
    // add r0, r6, #0
    // mov r1, #0x32
    // mov r2, #0
    // bl AGB_GetBoxMonData
    // add r7, r0, #0
    // cmp r7, #4
    // bgt _02234DB2
    // mov r5, #0
    // cmp r7, #0
    // ble _02234DB2
    // mov r0, #1
    // add r1, r5, #0
    // str r0, [sp, #8]
    // add r0, r4, #0
    // add r1, #0x4e
    // add r2, sp, #8
    // bl SetBoxMonData
    // add r5, r5, #1
    // cmp r5, r7
    // blt _02234D9C
    // add r0, r6, #0
    // mov r1, #0x33
    // mov r2, #0
    // bl AGB_GetBoxMonData
    // add r7, r0, #0
    // cmp r7, #4
    // bgt _02234DDE
    // mov r5, #0
    // cmp r7, #0
    // ble _02234DDE
    // mov r0, #1
    // add r1, r5, #0
    // str r0, [sp, #8]
    // add r0, r4, #0
    // add r1, #0x52
    // add r2, sp, #8
    // bl SetBoxMonData
    // add r5, r5, #1
    // cmp r5, r7
    // blt _02234DC8
    // add r0, r6, #0
    // mov r1, #0x34
    // mov r2, #0
    // bl AGB_GetBoxMonData
    // add r7, r0, #0
    // cmp r7, #4
    // bgt _02234E0A
    // mov r5, #0
    // cmp r7, #0
    // ble _02234E0A
    // mov r0, #1
    // add r1, r5, #0
    // str r0, [sp, #8]
    // add r0, r4, #0
    // add r1, #0x56
    // add r2, sp, #8
    // bl SetBoxMonData
    // add r5, r5, #1
    // cmp r5, r7
    // blt _02234DF4
    // add r0, r6, #0
    // mov r1, #0x35
    // mov r2, #0
    // bl AGB_GetBoxMonData
    // add r7, r0, #0
    // cmp r7, #4
    // bgt _02234E36
    // mov r5, #0
    // cmp r7, #0
    // ble _02234E36
    // mov r0, #1
    // add r1, r5, #0
    // str r0, [sp, #8]
    // add r0, r4, #0
    // add r1, #0x5a
    // add r2, sp, #8
    // bl SetBoxMonData
    // add r5, r5, #1
    // cmp r5, r7
    // blt _02234E20
    // add r0, r6, #0
    // mov r1, #0x36
    // mov r2, #0
    // bl AGB_GetBoxMonData
    // add r7, r0, #0
    // cmp r7, #4
    // bgt _02234E62
    // mov r5, #0
    // cmp r7, #0
    // ble _02234E62
    // mov r0, #1
    // add r1, r5, #0
    // str r0, [sp, #8]
    // add r0, r4, #0
    // add r1, #0x5e
    // add r2, sp, #8
    // bl SetBoxMonData
    // add r5, r5, #1
    // cmp r5, r7
    // blt _02234E4C
    // add r0, r6, #0
    // mov r1, #0x43
    // mov r2, #0
    // bl AGB_GetBoxMonData
    // str r0, [sp, #8]
    // add r0, r4, #0
    // mov r1, #0x62
    // add r2, sp, #8
    // bl SetBoxMonData
    // add r0, r6, #0
    // mov r1, #0x44
    // mov r2, #0
    // bl AGB_GetBoxMonData
    // str r0, [sp, #8]
    // add r0, r4, #0
    // mov r1, #0x63
    // add r2, sp, #8
    // bl SetBoxMonData
    // add r0, r6, #0
    // mov r1, #0x45
    // mov r2, #0
    // bl AGB_GetBoxMonData
    // str r0, [sp, #8]
    // add r0, r4, #0
    // mov r1, #0x64
    // add r2, sp, #8
    // bl SetBoxMonData
    // add r0, r6, #0
    // mov r1, #0x46
    // mov r2, #0
    // bl AGB_GetBoxMonData
    // str r0, [sp, #8]
    // add r0, r4, #0
    // mov r1, #0x65
    // add r2, sp, #8
    // bl SetBoxMonData
    // add r0, r6, #0
    // mov r1, #0x47
    // mov r2, #0
    // bl AGB_GetBoxMonData
    // str r0, [sp, #8]
    // add r0, r4, #0
    // mov r1, #0x66
    // add r2, sp, #8
    // bl SetBoxMonData
    // add r0, r6, #0
    // mov r1, #0x48
    // mov r2, #0
    // bl AGB_GetBoxMonData
    // str r0, [sp, #8]
    // add r0, r4, #0
    // mov r1, #0x67
    // add r2, sp, #8
    // bl SetBoxMonData
    // add r0, r6, #0
    // mov r1, #0x49
    // mov r2, #0
    // bl AGB_GetBoxMonData
    // str r0, [sp, #8]
    // add r0, r4, #0
    // mov r1, #0x68
    // add r2, sp, #8
    // bl SetBoxMonData
    // add r0, r6, #0
    // mov r1, #0x4a
    // mov r2, #0
    // bl AGB_GetBoxMonData
    // str r0, [sp, #8]
    // add r0, r4, #0
    // mov r1, #0x69
    // add r2, sp, #8
    // bl SetBoxMonData
    // add r0, r6, #0
    // mov r1, #0x4b
    // mov r2, #0
    // bl AGB_GetBoxMonData
    // str r0, [sp, #8]
    // add r0, r4, #0
    // mov r1, #0x6a
    // add r2, sp, #8
    // bl SetBoxMonData
    // add r0, r6, #0
    // mov r1, #0x4c
    // mov r2, #0
    // bl AGB_GetBoxMonData
    // str r0, [sp, #8]
    // add r0, r4, #0
    // mov r1, #0x6b
    // add r2, sp, #8
    // bl SetBoxMonData
    // add r0, r6, #0
    // mov r1, #0x4d
    // mov r2, #0
    // bl AGB_GetBoxMonData
    // str r0, [sp, #8]
    // add r0, r4, #0
    // mov r1, #0x6c
    // add r2, sp, #8
    // bl SetBoxMonData
    // add r0, r6, #0
    // mov r1, #0x4e
    // mov r2, #0
    // bl AGB_GetBoxMonData
    // str r0, [sp, #8]
    // add r0, r4, #0
    // mov r1, #0x6d
    // add r2, sp, #8
    // bl SetBoxMonData
    // add r0, r6, #0
    // mov r1, #0x50
    // mov r2, #0
    // bl AGB_GetBoxMonData
    // str r0, [sp, #8]
    // add r0, r4, #0
    // mov r1, #0x6e
    // add r2, sp, #8
    // bl SetBoxMonData
    // add r0, r4, #0
    // bl GetBoxMonGender
    // str r0, [sp, #8]
    // add r0, r4, #0
    // mov r1, #0x6f
    // add r2, sp, #8
    // bl SetBoxMonData
    // add r0, r4, #0
    // mov r1, #5
    // mov r2, #0
    // bl GetBoxMonData
    // cmp r0, #0xc9
    // bne _02234FDE
    // mov r1, #0
    // add r0, r6, #0
    // add r2, r1, #0
    // bl AGB_GetBoxMonData
    // add r3, r0, #0
    // mov r7, #3
    // lsl r0, r7, #8
    // and r0, r3
    // lsr r1, r0, #6
    // lsl r0, r7, #0x18
    // and r0, r3
    // lsr r5, r0, #0x12
    // lsl r0, r7, #0x10
    // and r0, r3
    // lsr r0, r0, #0xc
    // add r2, r3, #0
    // orr r0, r5
    // orr r0, r1
    // and r2, r7
    // str r3, [sp, #8]
    // orr r0, r2
    // mov r1, #0x1c
    // bl _u32_div_f
    // str r1, [sp, #8]
    // add r0, r4, #0
    // mov r1, #0x70
    // add r2, sp, #8
    // bl SetBoxMonData
    // add r0, r4, #0
    // mov r1, #5
    // mov r2, #0
    // bl GetBoxMonData
    // ldr r1, _02235120 ; =0x00000182
    // cmp r0, r1
    // bne _0223502E
    // ldr r0, _02235124 ; =gSystem + 0x60
    // ldrb r0, [r0, #0xa]
    // cmp r0, #5
    // bhi _0223500E
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _02235002: ; jump table
    // mov r0, #0
    // str r0, [sp, #8]
    // b _02235024
    // mov r0, #1
    // str r0, [sp, #8]
    // b _02235024
    // mov r0, #2
    // str r0, [sp, #8]
    // b _02235024
    // mov r0, #3
    // str r0, [sp, #8]
    // add r0, r4, #0
    // mov r1, #0x70
    // add r2, sp, #8
    // bl SetBoxMonData
    // add r0, r6, #0
    // mov r1, #2
    // add r2, sp, #0x24
    // bl AGB_GetBoxMonData
    // ldr r3, [sp, #4]
    // add r0, sp, #0x24
    // add r1, sp, #0xc
    // mov r2, #0xc
    // bl ConvertRSStringToDPStringInternational
    // add r0, r4, #0
    // mov r1, #0x76
    // add r2, sp, #0xc
    // bl SetBoxMonData
    // add r0, r6, #0
    // mov r1, #3
    // mov r2, #0
    // bl AGB_GetBoxMonData
    // ldr r1, _02235128 ; =gGameLanguage
    // ldrb r1, [r1]
    // cmp r1, r0
    // beq _0223506E
    // mov r0, #1
    // str r0, [sp, #8]
    // add r0, r4, #0
    // mov r1, #0x4d
    // add r2, sp, #8
    // bl SetBoxMonData
    // add r0, r6, #0
    // mov r1, #0x25
    // mov r2, #0
    // bl AGB_GetBoxMonData
    // str r0, [sp, #8]
    // add r0, r4, #0
    // mov r1, #0x7a
    // add r2, sp, #8
    // bl SetBoxMonData
    // add r0, r6, #0
    // mov r1, #7
    // add r2, sp, #0x24
    // bl AGB_GetBoxMonData
    // ldr r3, [sp, #4]
    // add r0, sp, #0x24
    // add r1, sp, #0xc
    // mov r2, #8
    // bl ConvertRSStringToDPStringInternational
    // add r0, r4, #0
    // mov r1, #0x90
    // add r2, sp, #0xc
    // bl SetBoxMonData
    // add r0, r6, #0
    // mov r1, #0x23
    // mov r2, #0
    // bl AGB_GetBoxMonData
    // str r0, [sp, #8]
    // add r0, r4, #0
    // mov r1, #0x99
    // add r2, sp, #8
    // bl SetBoxMonData
    // add r0, r6, #0
    // mov r1, #0x22
    // mov r2, #0
    // bl AGB_GetBoxMonData
    // str r0, [sp, #8]
    // add r0, r4, #0
    // mov r1, #0x9a
    // add r2, sp, #8
    // bl SetBoxMonData
    // add r0, r6, #0
    // mov r1, #0x26
    // mov r2, #0
    // bl AGB_GetBoxMonData
    // str r0, [sp, #8]
    // add r0, r4, #0
    // mov r1, #0x9b
    // add r2, sp, #8
    // bl SetBoxMonData
    // add r0, r6, #0
    // mov r1, #0x24
    // mov r2, #0
    // bl AGB_GetBoxMonData
    // str r0, [sp, #8]
    // add r0, r4, #0
    // mov r1, #0x9c
    // add r2, sp, #8
    // bl SetBoxMonData
    // add r0, r6, #0
    // mov r1, #0x31
    // mov r2, #0
    // bl AGB_GetBoxMonData
    // str r0, [sp, #8]
    // add r0, r4, #0
    // mov r1, #0x9d
    // add r2, sp, #8
    // bl SetBoxMonData
    // ldr r1, [sp]
    // add r0, r4, #0
    // bl ReleaseBoxMonLock
    // add sp, #0x30
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02235120: .word 0x00000182
    // _02235124: .word gSystem + 0x60
    // _02235128: .word gGameLanguage
    // TODO: decompile
}



void ov74_0223512C(void) {
    // ldr r1, _02235134 ; =ov74_0223D450
    // str r0, [r1]
    // bx lr
    // nop
    // _02235134: .word ov74_0223D450
    // TODO: decompile
}



void ov74_02235138(void) {
    // add r1, r0, #0
    // ldr r0, _02235144 ; =ov74_0223D450
    // ldr r3, _02235148 ; =Heap_Alloc
    // ldr r0, [r0]
    // bx r3
    // nop
    // _02235144: .word ov74_0223D450
    // _02235148: .word Heap_Alloc
    // TODO: decompile
}



void ov74_0223514C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x1fc
    // sub sp, #0x1fc
    // sub sp, #0x130
    // bl CTRDG_GetAgbGameCode
    // lsr r1, r0, #0x18
    // lsl r1, r1, #0x18
    // lsr r2, r1, #0x18
    // lsr r1, r0, #0x10
    // lsl r3, r0, #0x18
    // lsr r0, r0, #8
    // lsl r0, r0, #0x18
    // lsl r1, r1, #0x18
    // lsr r0, r0, #8
    // lsr r1, r1, #0x10
    // orr r0, r3
    // orr r0, r1
    // add r6, r2, #0
    // orr r6, r0
    // ldr r0, _022351E0 ; =ov74_0223CE9C
    // mov r4, #0
    // ldr r0, [r0]
    // cmp r0, #0
    // bls _022351D6
    // ldr r5, _022351E4 ; =ov74_0223CE9C
    // add r7, sp, #0x80
    // ldr r0, [r5]
    // cmp r6, r0
    // bne _022351CC
    // mov r0, #1
    // bl CTRDG_Enable
    // mov r0, #0x81
    // ldr r2, _022351E8 ; =0x000004A8
    // lsl r0, r0, #0x14
    // add r1, r7, #0
    // bl CTRDG_CpuCopy8
    // ldr r0, _022351EC ; =0x08020000
    // add r1, sp, #0
    // mov r2, #0x80
    // bl CTRDG_CpuCopy8
    // mov r0, #0
    // bl CTRDG_Enable
    // ldr r0, _022351F0 ; =ov74_02235138
    // ldr r1, _022351F4 ; =Heap_Free
    // bl CRYPTO_SetAllocator
    // ldr r1, _022351E8 ; =0x000004A8
    // ldr r3, _022351F8 ; =_0223B690
    // add r0, r7, #0
    // add r2, sp, #0
    // bl CRYPTO_VerifySignature
    // cmp r0, #0
    // beq _022351CC
    // add sp, #0x1fc
    // add sp, #0x1fc
    // add sp, #0x130
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // add r5, r5, #4
    // ldr r0, [r5]
    // add r4, r4, #1
    // cmp r4, r0
    // blo _02235182
    // mov r0, #0
    // add sp, #0x1fc
    // add sp, #0x1fc
    // add sp, #0x130
    // pop {r3, r4, r5, r6, r7, pc}
    // _022351E0: .word ov74_0223CE9C
    // _022351E4: .word ov74_0223CE9C
    // _022351E8: .word 0x000004A8
    // _022351EC: .word 0x08020000
    // _022351F0: .word ov74_02235138
    // _022351F4: .word Heap_Free
    // _022351F8: .word _0223B690
    // TODO: decompile
}



void ov74_022351FC(void) {
    // push {r3, lr}
    // bl CTRDG_Init
    // bl CTRDG_IsAgbCartridge
    // cmp r0, #0
    // bne _0223520E
    // mov r0, #0
    // pop {r3, pc}
    // bl CTRDG_GetAgbMakerCode
    // ldr r1, _0223522C ; =0x00003130
    // cmp r0, r1
    // beq _0223521C
    // mov r0, #0
    // pop {r3, pc}
    // bl ov74_0223514C
    // cmp r0, #0
    // beq _02235228
    // mov r0, #1
    // pop {r3, pc}
    // mov r0, #0
    // pop {r3, pc}
    // _0223522C: .word 0x00003130
    // TODO: decompile
}



void ov74_02235230(void) {
    ov74_022351FC();
    CTRDG_Enable(1);
    // add r1, sp, #0
    CTRDG_Read32((0x81 << 0x14));
    CTRDG_Enable(0);
    // ldr r0, [sp]
}



void ov74_02235258(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // bl ov74_022351FC
    // cmp r0, #0
    // bne _0223526A
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // cmp r4, #0
    // bne _02235274
    // bl ov74_02235230
    // add r4, r0, #0
    // mov r0, #1
    // bl CTRDG_Enable
    // ldr r0, _0223529C ; =0x08100100
    // add r1, r5, #0
    // add r2, r4, #0
    // bl CTRDG_CpuCopy16
    // add r4, r0, #0
    // mov r0, #0
    // bl CTRDG_Enable
    // bl CTRDG_IsExisting
    // cmp r0, #0
    // bne _02235298
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // add r0, r4, #0
    // pop {r3, r4, r5, pc}
    // _0223529C: .word 0x08100100
    // TODO: decompile
}



void ov74_022352A0(void) {
    // push {r3, r4, r5, r6}
    // add r4, r0, #0
    // mov r0, #0
    // ldr r6, _022352C8 ; =ov74_0223D454
    // add r1, r0, #0
    // add r2, r0, #0
    // add r3, r0, #0
    // mov r5, #0x75
    // stmia r6!, {r0, r1, r2, r3}
    // stmia r6!, {r0, r1, r2, r3}
    // sub r5, r5, #1
    // bne _022352B0
    // stmia r6!, {r0, r1}
    // ldr r0, _022352CC ; =ov74_0223D454
    // mov r1, #1
    // str r1, [r0, #4]
    // str r4, [r0, #8]
    // pop {r3, r4, r5, r6}
    // bx lr
    // nop
    // _022352C8: .word ov74_0223D454
    // _022352CC: .word ov74_0223D454
    // TODO: decompile
}



void ov74_022352D0(void) {
}



void ov74_02235308(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x1c
    // ldr r5, _0223538C ; =_0223B720
    // add r6, r3, #0
    // add r7, r0, #0
    // add r4, r1, #0
    // ldmia r5!, {r0, r1}
    // add r3, sp, #0
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // cmp r2, #4
    // str r0, [r3]
    // add r0, sp, #0
    // strb r2, [r0, #0x10]
    // bhi _02235362
    // add r0, r2, r2
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0223533A: ; jump table
    // mov r0, #2
    // lsl r0, r0, #0xa
    // str r0, [sp, #8]
    // b _02235362
    // mov r0, #1
    // lsl r0, r0, #0xc
    // str r0, [sp, #8]
    // b _02235362
    // mov r0, #1
    // lsl r0, r0, #0xc
    // str r0, [sp, #8]
    // b _02235362
    // mov r0, #2
    // lsl r0, r0, #0xc
    // str r0, [sp, #8]
    // lsr r1, r6, #0xb
    // add r0, sp, #0
    // strb r1, [r0, #0x12]
    // ldr r1, [sp, #0x30]
    // add r2, sp, #0
    // lsr r1, r1, #0xe
    // strb r1, [r0, #0x13]
    // lsl r1, r4, #0x18
    // add r0, r7, #0
    // lsr r1, r1, #0x18
    // mov r3, #0
    // bl InitBgFromTemplate
    // lsl r1, r4, #0x18
    // add r0, r7, #0
    // lsr r1, r1, #0x18
    // bl BgClearTilemapBufferAndCommit
    // add sp, #0x1c
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _0223538C: .word _0223B720
    // TODO: decompile
}



void ov74_02235390(void) {
    // ldr r1, _02235398 ; =ov74_0223D454
    // str r0, [r1, #0x10]
    // bx lr
    // nop
    // _02235398: .word ov74_0223D454
    // TODO: decompile
}



void ov74_0223539C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // str r0, [sp, #0xc]
    // ldr r0, _022353F0 ; =ov74_0223D454
    // add r5, r1, #0
    // ldr r0, [r0, #0x10]
    // add r4, r2, #0
    // add r6, r3, #0
    // ldr r7, _022353F4 ; =ov74_0223D454
    // cmp r0, #0
    // bne _022353CC
    // mov r0, #6
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // ldr r0, [r7, #8]
    // ldr r1, [sp, #0xc]
    // str r0, [sp, #8]
    // mov r0, #0
    // add r2, r1, #0
    // add r3, r0, #0
    // bl BeginNormalPaletteFade
    // b _022353E4
    // mov r0, #6
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // ldr r0, [r7, #8]
    // ldr r1, [sp, #0xc]
    // str r0, [sp, #8]
    // ldr r3, _022353F8 ; =0x00007FFF
    // mov r0, #0
    // add r2, r1, #0
    // bl BeginNormalPaletteFade
    // cmp r4, #0
    // beq _022353EA
    // str r6, [r4]
    // str r5, [r7, #0xc]
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // _022353F0: .word ov74_0223D454
    // _022353F4: .word ov74_0223D454
    // _022353F8: .word 0x00007FFF
    // TODO: decompile
}



void ov74_022353FC(void) {
}



void ov74_02235414(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r4, r1, #0
    // add r6, r2, #0
    // mov r1, #0
    // mov r2, #0x54
    // add r5, r0, #0
    // add r7, r3, #0
    // bl memset
    // mov r0, #1
    // str r0, [r5, #4]
    // str r0, [r5, #8]
    // sub r0, r0, #2
    // str r0, [r5, #0x4c]
    // str r4, [r5, #0x10]
    // str r6, [r5, #0x30]
    // ldr r0, [sp, #0x18]
    // str r7, [r5, #0x34]
    // str r0, [r5, #0x38]
    // ldr r0, [sp, #0x1c]
    // mov r2, #0
    // str r0, [r5, #0x3c]
    // str r2, [r5, #0x2c]
    // ldr r0, _02235460 ; =0x0001020F
    // str r2, [r5, #0x40]
    // str r0, [r5, #0x44]
    // add r0, r5, #0
    // mov r1, #0xf
    // add r0, #0x48
    // strb r1, [r0]
    // str r2, [r5]
    // str r2, [r5, #0x24]
    // str r2, [r5, #0x20]
    // str r2, [r5, #0x14]
    // mov r0, #0xff
    // str r0, [r5, #0x50]
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02235460: .word 0x0001020F
    // TODO: decompile
}



void ov74_02235464(void) {
}



void ov74_0223546C(void) {
}



void ov74_02235474(void) {
}



void ov74_0223547C(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // add r5, r0, #0
    // mov r0, #0
    // mvn r0, r0
    // ldr r4, _02235564 ; =ov74_0223D454
    // cmp r1, r0
    // beq _0223555A
    // ldr r0, [r5, #0x4c]
    // cmp r0, r1
    // beq _0223555A
    // str r1, [r5, #0x4c]
    // ldr r0, [r5, #8]
    // cmp r0, #1
    // bne _022354A6
    // add r1, r5, #0
    // add r1, #0x48
    // ldrb r1, [r1]
    // ldr r0, [r5, #0x10]
    // bl FillWindowPixelBuffer
    // mov r0, #0
    // ldr r1, [r5, #0x4c]
    // mvn r0, r0
    // cmp r1, r0
    // beq _0223555A
    // ldr r2, [r5, #0x34]
    // ldr r3, [r4, #8]
    // mov r0, #1
    // mov r1, #0x1b
    // bl NewMsgDataFromNarc
    // ldr r6, [r5, #0x14]
    // str r0, [sp, #0x10]
    // cmp r6, #0
    // bne _022354CC
    // ldr r0, [r4, #8]
    // bl MessageFormat_New
    // add r6, r0, #0
    // ldr r1, [sp, #0x10]
    // ldr r2, [r5, #0x4c]
    // ldr r3, [r4, #8]
    // add r0, r6, #0
    // bl ReadMsgData_ExpandPlaceholders
    // add r4, r0, #0
    // ldr r0, [r5, #0xc]
    // cmp r0, #0
    // bne _02235500
    // ldr r0, [r5, #0x24]
    // add r2, r4, #0
    // str r0, [sp]
    // ldr r0, [r5, #0x50]
    // str r0, [sp, #4]
    // ldr r0, [r5, #0x44]
    // str r0, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // ldr r0, [r5, #0x10]
    // ldr r1, [r5, #0x40]
    // ldr r3, [r5, #0x20]
    // bl AddTextPrinterParameterizedWithColor
    // add r7, r0, #0
    // b _02235542
    // ldr r0, [r5, #0x40]
    // mov r1, #2
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // bl GetFontAttribute
    // add r2, r0, #0
    // ldr r0, [r5, #0x40]
    // add r1, r4, #0
    // bl FontID_String_GetWidth
    // add r7, r0, #0
    // ldr r0, [r5, #0x10]
    // bl GetWindowWidth
    // lsl r0, r0, #3
    // sub r3, r0, r7
    // ldr r0, [r5, #0x24]
    // add r2, r4, #0
    // str r0, [sp]
    // ldr r0, [r5, #0x50]
    // str r0, [sp, #4]
    // ldr r0, [r5, #0x44]
    // str r0, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // ldr r0, [r5, #0x10]
    // ldr r1, [r5, #0x40]
    // bl AddTextPrinterParameterizedWithColor
    // add r7, r0, #0
    // mov r0, #0
    // str r0, [r5, #0xc]
    // add r0, r4, #0
    // bl String_Delete
    // ldr r0, [r5, #0x14]
    // cmp r0, #0
    // bne _02235554
    // add r0, r6, #0
    // bl MessageFormat_Delete
    // ldr r0, [sp, #0x10]
    // bl DestroyMsgData
    // mov r0, #0xff
    // str r0, [r5, #0x50]
    // add r0, r7, #0
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // _02235564: .word ov74_0223D454
    // TODO: decompile
}



void ov74_02235568(void) {
    // str r2, [sp]
    // str r2, [sp, #4]
    // str r2, [sp, #8]
    // str r2, [sp, #0xc]
    // str r2, [sp, #0x10]
    AddWindowParameterized(*((u32*)(r1 + 0x10)), ((*((u32*)(r1 + 0x2c)) << 0x18) >> 0x18), ((r2 << 0x18) >> 0x18));
    // ldr r1, [sp, #0x28]
    ov74_0223547C(r4);
    // mvn r0, r0
    SetWindowX(r1, ((r6 << 0x18) >> 0x18));
    // mvn r0, r0
    SetWindowY(*((u32*)(r4 + 0x10)), ((r5 << 0x18) >> 0x18));
    // ldr r1, [sp, #0x28]
    ov74_0223547C(r4);
    DrawFrameAndWindow1(*((u32*)(r4 + 0x10)), 0, ((*((u32*)(r4 + 0x38)) << 0x10) >> 0x10), ((*((u32*)(r4 + 0x3c)) << 0x18) >> 0x18));
    DrawFrameAndWindow2(*((u32*)(r4 + 0x10)), 0, ((*((u32*)(r4 + 0x38)) << 0x10) >> 0x10), ((*((u32*)(r4 + 0x3c)) << 0x18) >> 0x18));
    CopyWindowToVram(*((u32*)(r4 + 0x10)));
}



void ov74_02235634(void) {
    // mul r0, r1
}



void ov74_0223563C(void) {
    // push {r4, lr}
    // sub sp, #0x10
    // ldr r4, _02235674 ; =_0223B710
    // add r3, sp, #0
    // add r2, r3, #0
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, _02235678 ; =ov74_0223D454
    // mov r1, #0x10
    // ldr r0, [r0, #8]
    // str r0, [sp, #0xc]
    // add r0, r2, #0
    // add r2, r1, #0
    // bl ObjCharTransfer_InitEx
    // ldr r1, _02235678 ; =ov74_0223D454
    // mov r0, #0x1e
    // ldr r1, [r1, #8]
    // bl ObjPlttTransfer_Init
    // bl ObjCharTransfer_ClearBuffers
    // bl ObjPlttTransfer_Reset
    // add sp, #0x10
    // pop {r4, pc}
    // _02235674: .word _0223B710
    // _02235678: .word ov74_0223D454
    // TODO: decompile
}



void ov74_0223567C(void) {
    // ldr r0, _0223568C ; =ov74_0223D454
    // ldr r0, [r0, #0x34]
    // cmp r0, #0
    // beq _02235688
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // _0223568C: .word ov74_0223D454
    // TODO: decompile
}



void ov74_02235690(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // ldr r6, _022356F8 ; =ov74_0223D454
    // bl NNS_G2dInitOamManagerModule
    // mov r0, #0
    // str r0, [sp]
    // mov r1, #0x7e
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // mov r3, #0x20
    // ldr r2, _022356FC ; =ov74_0223D454
    // str r3, [sp, #0xc]
    // ldr r2, [r2, #8]
    // str r2, [sp, #0x10]
    // add r2, r0, #0
    // bl OamManager_Create
    // ldr r2, _022356FC ; =ov74_0223D454
    // ldr r1, _02235700 ; =ov74_0223D48C
    // ldr r2, [r2, #8]
    // mov r0, #0x80
    // bl G2dRenderer_Init
    // ldr r1, _022356FC ; =ov74_0223D454
    // mov r2, #1
    // str r0, [r1, #0x34]
    // ldr r0, _02235700 ; =ov74_0223D48C
    // mov r1, #0
    // lsl r2, r2, #0x14
    // bl G2dRenderer_SetSubSurfaceCoords
    // mov r1, #3
    // mov r7, #0x16
    // ldr r0, _02235704 ; =ov74_0223D654
    // lsl r1, r1, #0x12
    // str r1, [r0, #0x10]
    // mov r4, #0
    // add r5, r6, #0
    // lsl r7, r7, #4
    // ldr r2, [r6, #8]
    // mov r0, #0x20
    // add r1, r4, #0
    // bl Create2DGfxResObjMan
    // str r0, [r5, r7]
    // add r4, r4, #1
    // add r5, r5, #4
    // cmp r4, #6
    // blt _022356E0
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // _022356F8: .word ov74_0223D454
    // _022356FC: .word ov74_0223D454
    // _02235700: .word ov74_0223D48C
    // _02235704: .word ov74_0223D654
    // TODO: decompile
}



void ov74_02235708(void) {
}



void ov74_02235728(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x38
    // ldr r4, [sp, #0x54]
    // add r6, r0, #0
    // mov ip, r1
    // str r2, [sp, #0x2c]
    // str r3, [sp, #0x30]
    // ldr r5, _02235894 ; =ov74_0223D454
    // cmp r4, #0
    // bne _02235740
    // mov r7, #1
    // b _02235742
    // mov r7, #2
    // mov r0, #1
    // str r0, [sp, #0x34]
    // cmp r6, #0x12
    // bne _0223574E
    // mov r0, #0
    // str r0, [sp, #0x34]
    // mov r1, #0
    // mvn r1, r1
    // mov r0, ip
    // cmp r0, r1
    // beq _0223577C
    // str r4, [sp]
    // str r7, [sp, #4]
    // ldr r0, [r5, #8]
    // ldr r3, [sp, #0x34]
    // str r0, [sp, #8]
    // mov r0, #0x16
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // add r1, r6, #0
    // mov r2, ip
    // bl AddCharResObjFromNarc
    // mov r1, #0x18
    // mul r1, r4
    // add r2, r5, r1
    // mov r1, #0x5e
    // lsl r1, r1, #2
    // str r0, [r2, r1]
    // mov r1, #0
    // ldr r0, [sp, #0x2c]
    // mvn r1, r1
    // cmp r0, r1
    // beq _022357AE
    // str r4, [sp]
    // str r7, [sp, #4]
    // mov r0, #3
    // str r0, [sp, #8]
    // ldr r0, [r5, #8]
    // ldr r2, [sp, #0x2c]
    // str r0, [sp, #0xc]
    // mov r0, #0x59
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // add r1, r6, #0
    // mov r3, #0
    // bl AddPlttResObjFromNarc
    // mov r1, #0x18
    // mul r1, r4
    // add r2, r5, r1
    // mov r1, #0x5f
    // lsl r1, r1, #2
    // str r0, [r2, r1]
    // mov r1, #0
    // ldr r0, [sp, #0x30]
    // mvn r1, r1
    // cmp r0, r1
    // beq _022357DE
    // str r4, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // ldr r0, [r5, #8]
    // ldr r2, [sp, #0x30]
    // str r0, [sp, #8]
    // mov r0, #0x5a
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // ldr r3, [sp, #0x34]
    // add r1, r6, #0
    // bl AddCellOrAnimResObjFromNarc
    // mov r1, #0x18
    // add r2, r4, #0
    // mul r2, r1
    // add r2, r5, r2
    // lsl r1, r1, #4
    // str r0, [r2, r1]
    // mov r0, #0
    // ldr r2, [sp, #0x50]
    // mvn r0, r0
    // cmp r2, r0
    // beq _0223580C
    // str r4, [sp]
    // mov r0, #3
    // str r0, [sp, #4]
    // ldr r0, [r5, #8]
    // ldr r3, [sp, #0x34]
    // str r0, [sp, #8]
    // mov r0, #0x5b
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // add r1, r6, #0
    // bl AddCellOrAnimResObjFromNarc
    // mov r1, #0x18
    // mul r1, r4
    // add r2, r5, r1
    // mov r1, #0x61
    // lsl r1, r1, #2
    // str r0, [r2, r1]
    // mov r0, #0x18
    // add r6, r4, #0
    // mul r6, r0
    // mov r0, #0x5e
    // add r1, r5, r6
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // bl sub_0200ACF0
    // mov r0, #0x5f
    // add r1, r5, r6
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // bl sub_0200B00C
    // mov r0, #0
    // mov r2, #0x16
    // str r4, [sp]
    // mvn r0, r0
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // lsl r2, r2, #4
    // ldr r1, [r5, r2]
    // add r3, r4, #0
    // str r1, [sp, #0x14]
    // add r1, r2, #4
    // ldr r1, [r5, r1]
    // str r1, [sp, #0x18]
    // add r1, r2, #0
    // add r1, #8
    // ldr r1, [r5, r1]
    // str r1, [sp, #0x1c]
    // add r1, r2, #0
    // add r1, #0xc
    // ldr r1, [r5, r1]
    // add r2, #0x48
    // str r1, [sp, #0x20]
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x28]
    // mov r0, #0x24
    // add r1, r5, r2
    // mul r0, r4
    // add r0, r1, r0
    // add r1, r4, #0
    // add r2, r4, #0
    // bl CreateSpriteResourcesHeader
    // cmp r4, #0
    // bne _0223587E
    // mov r0, #0x10
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // b _02235886
    // mov r0, #0x10
    // mov r1, #1
    // bl GfGfx_EngineBTogglePlanes
    // ldr r0, _02235898 ; =ov74_02235A74
    // mov r1, #0
    // bl Main_SetVBlankIntrCB
    // add sp, #0x38
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02235894: .word ov74_0223D454
    // _02235898: .word ov74_02235A74
    // TODO: decompile
}



void ov74_0223589C(void) {
}



void ov74_022358BC(void) {
}



void ov74_022358C8(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, _02235928 ; =ov74_0223D654
    // ldr r4, _0223592C ; =ov74_0223D454
    // ldr r0, [r0, #8]
    // cmp r0, #0
    // beq _0223591C
    // mov r0, #0x83
    // lsl r0, r0, #2
    // ldr r1, [r4, r0]
    // cmp r1, #0
    // bne _02235918
    // sub r0, r0, #4
    // ldr r0, [r4, r0]
    // bl Sprite_GetDrawFlag
    // cmp r0, #0
    // bne _022358FC
    // cmp r5, #0
    // bne _022358FC
    // mov r0, #0x82
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #1
    // bl Sprite_SetDrawFlag
    // mov r0, #0x82
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl Sprite_GetMatrixPtr
    // mov r1, #6
    // ldr r2, [r0, #4]
    // lsl r1, r1, #0x12
    // cmp r2, r1
    // bge _0223591C
    // lsr r1, r1, #7
    // add r1, r2, r1
    // str r1, [r0, #4]
    // b _0223591C
    // sub r1, r1, #1
    // str r1, [r4, r0]
    // ldr r0, [r4, #0x34]
    // cmp r0, #0
    // beq _02235926
    // bl SpriteList_RenderAndAnimateSprites
    // pop {r3, r4, r5, pc}
    // _02235928: .word ov74_0223D654
    // _0223592C: .word ov74_0223D454
    // TODO: decompile
}



void ov74_02235930(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x30
    // add r4, r1, #0
    // ldr r1, _022359B8 ; =ov74_0223D454
    // bne _02235992
    // ldr r4, [r1, #0x34]
    // lsl r2, r2, #0xc
    // str r4, [sp]
    // mov r4, #0x6a
    // lsl r4, r4, #2
    // add r5, r1, r4
    // mov r4, #0x24
    // mul r4, r0
    // add r4, r5, r4
    // str r4, [sp, #4]
    // mov r4, #1
    // lsl r4, r4, #0xc
    // mov r5, #0
    // str r5, [sp, #0x10]
    // str r4, [sp, #0x14]
    // str r4, [sp, #0x18]
    // str r4, [sp, #0x1c]
    // add r4, sp, #0
    // strh r5, [r4, #0x20]
    // str r2, [sp, #8]
    // lsl r2, r3, #0xc
    // str r2, [sp, #0xc]
    // mov r2, #0xa
    // str r2, [sp, #0x24]
    // cmp r0, #0
    // bne _02235972
    // mov r2, #1
    // b _02235974
    // mov r2, #2
    // ldr r0, [r1, #8]
    // str r2, [sp, #0x28]
    // str r0, [sp, #0x2c]
    // cmp r2, #2
    // bne _0223598A
    // mov r0, #0x21
    // lsl r0, r0, #4
    // ldr r2, [sp, #0xc]
    // ldr r0, [r1, r0]
    // add r0, r2, r0
    // str r0, [sp, #0xc]
    // add r0, sp, #0
    // bl Sprite_CreateAffine
    // add r4, r0, #0
    // add r0, r4, #0
    // mov r1, #1
    // bl Sprite_SetAnimActiveFlag
    // add r0, r4, #0
    // mov r1, #0
    // bl Sprite_SetPriority
    // ldr r1, [sp, #0x40]
    // add r0, r4, #0
    // bl Sprite_SetAnimCtrlSeq
    // add r0, r4, #0
    // mov r1, #1
    // bl Sprite_SetDrawFlag
    // add r0, r4, #0
    // add sp, #0x30
    // pop {r3, r4, r5, pc}
    // _022359B8: .word ov74_0223D454
    // TODO: decompile
}



void ov74_022359BC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // ldr r0, _02235A5C ; =ov74_0223D654
    // ldr r4, _02235A60 ; =ov74_0223D454
    // ldr r0, [r0, #8]
    // cmp r0, #0
    // beq _022359DA
    // mov r0, #0x82
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl Sprite_Delete
    // mov r0, #0x82
    // mov r1, #0
    // lsl r0, r0, #2
    // str r1, [r4, r0]
    // mov r1, #0x51
    // ldr r0, _02235A64 ; =ov74_0223D488
    // lsl r1, r1, #2
    // ldr r0, [r0, r1]
    // cmp r0, #0
    // beq _022359EA
    // bl sub_0200AEB0
    // mov r1, #0x57
    // ldr r0, _02235A64 ; =ov74_0223D488
    // lsl r1, r1, #2
    // ldr r0, [r0, r1]
    // cmp r0, #0
    // beq _022359FA
    // bl sub_0200AEB0
    // mov r1, #0x52
    // ldr r0, _02235A64 ; =ov74_0223D488
    // lsl r1, r1, #2
    // ldr r0, [r0, r1]
    // cmp r0, #0
    // beq _02235A0A
    // bl sub_0200B0A8
    // mov r1, #0x16
    // ldr r0, _02235A64 ; =ov74_0223D488
    // lsl r1, r1, #4
    // ldr r0, [r0, r1]
    // cmp r0, #0
    // beq _02235A1A
    // bl sub_0200B0A8
    // mov r4, #0
    // mov r7, #0x4b
    // ldr r5, _02235A64 ; =ov74_0223D488
    // add r6, r4, #0
    // lsl r7, r7, #2
    // mov r0, #0x4b
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // bl Destroy2DGfxResObjMan
    // str r6, [r5, r7]
    // add r4, r4, #1
    // add r5, r5, #4
    // cmp r4, #6
    // blt _02235A24
    // ldr r0, _02235A64 ; =ov74_0223D488
    // ldr r0, [r0]
    // bl SpriteList_Delete
    // ldr r0, _02235A64 ; =ov74_0223D488
    // mov r1, #0
    // str r1, [r0]
    // bl OamManager_Free
    // bl ObjCharTransfer_Destroy
    // bl ObjPlttTransfer_Destroy
    // mov r0, #0
    // add r1, r0, #0
    // bl Main_SetVBlankIntrCB
    // pop {r3, r4, r5, r6, r7, pc}
    // _02235A5C: .word ov74_0223D654
    // _02235A60: .word ov74_0223D454
    // _02235A64: .word ov74_0223D488
    // TODO: decompile
}



void ov74_02235A68(void) {
    // sub r0, #0xa
    // lsl r1, r0
}



void ov74_02235A74(void) {
    // push {r4, lr}
    // ldr r0, _02235AB0 ; =ov74_0223E2D4
    // ldr r4, _02235AB4 ; =ov74_0223D454
    // ldr r0, [r0, #0x24]
    // cmp r0, #0
    // beq _02235A8E
    // ldr r1, _02235AB8 ; =0x00000EA4
    // add r0, r4, #0
    // ldr r1, [r4, r1]
    // blx r1
    // ldr r0, _02235AB8 ; =0x00000EA4
    // mov r1, #0
    // str r1, [r4, r0]
    // bl GF_RunVramTransferTasks
    // bl OamManager_ApplyAndResetBuffers
    // ldr r0, [r4]
    // cmp r0, #0
    // beq _02235AA0
    // bl DoScheduledBgGpuUpdates
    // ldr r3, _02235ABC ; =0x027E0000
    // ldr r1, _02235AC0 ; =0x00003FF8
    // mov r0, #1
    // ldr r2, [r3, r1]
    // orr r0, r2
    // str r0, [r3, r1]
    // pop {r4, pc}
    // nop
    // _02235AB0: .word ov74_0223E2D4
    // _02235AB4: .word ov74_0223D454
    // _02235AB8: .word 0x00000EA4
    // _02235ABC: .word 0x027E0000
    // _02235AC0: .word 0x00003FF8
    // TODO: decompile
}



void ov74_02235AC4(void) {
    // push {r4}
    // sub sp, #0x24
    // ldr r4, _02235B10 ; =_0223B73C
    // add r3, sp, #0
    // mov r2, #0x22
    // ldrb r1, [r4]
    // add r4, r4, #1
    // strb r1, [r3]
    // add r3, r3, #1
    // sub r2, r2, #1
    // bne _02235ACE
    // add r1, sp, #0
    // ldrb r2, [r1]
    // mov r3, #0
    // sub r1, r3, #1
    // cmp r2, r1
    // beq _02235B08
    // add r4, sp, #0
    // sub r1, r3, #1
    // ldrb r2, [r4]
    // cmp r0, r2
    // bne _02235AFE
    // add r0, sp, #0
    // lsl r1, r3, #1
    // add r0, #1
    // add sp, #0x24
    // ldrb r0, [r0, r1]
    // pop {r4}
    // bx lr
    // add r4, r4, #2
    // ldrb r2, [r4]
    // add r3, r3, #1
    // cmp r2, r1
    // bne _02235AEA
    // mov r0, #0
    // add sp, #0x24
    // pop {r4}
    // bx lr
    // _02235B10: .word _0223B73C
    // TODO: decompile
}



void ov74_02235B14(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x28
    // add r6, r1, #0
    // str r0, [sp, #0x20]
    // add r0, r6, #0
    // add r5, r2, #0
    // add r7, r3, #0
    // ldr r4, [sp, #0x44]
    // bl GetMonGender
    // str r0, [sp, #0x24]
    // add r0, r6, #0
    // bl MonIsShiny
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp]
    // lsl r0, r7, #0x18
    // ldr r2, [sp, #0x24]
    // lsr r0, r0, #0x18
    // str r0, [sp, #4]
    // mov r0, #0
    // lsl r1, r5, #0x10
    // lsl r2, r2, #0x18
    // str r0, [sp, #8]
    // add r0, r4, #0
    // lsr r1, r1, #0x10
    // lsr r2, r2, #0x18
    // mov r3, #2
    // bl GetMonSpriteCharAndPlttNarcIdsEx
    // mov r1, #0
    // add r0, r6, #0
    // add r2, r1, #0
    // bl GetMonData
    // mov r3, #0
    // str r3, [sp]
    // mov r1, #0xa
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // ldr r1, [sp, #0x40]
    // ldr r2, _02235BCC ; =ov74_0223D454
    // str r1, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r3, [sp, #0x14]
    // mov r0, #2
    // str r0, [sp, #0x18]
    // str r5, [sp, #0x1c]
    // ldrh r0, [r4]
    // ldrh r1, [r4, #2]
    // ldr r2, [r2, #8]
    // bl sub_02014494
    // mov r1, #0x32
    // ldr r0, [sp, #0x40]
    // lsl r1, r1, #6
    // bl DC_FlushRange
    // ldr r0, [sp, #0x20]
    // bl Sprite_GetImageProxy
    // mov r1, #2
    // bl NNS_G2dGetImageLocation
    // mov r2, #0x32
    // add r1, r0, #0
    // lsl r2, r2, #6
    // ldr r0, [sp, #0x40]
    // add r1, r1, r2
    // bl GXS_LoadOBJ
    // ldr r0, [sp, #0x20]
    // bl Sprite_GetPaletteProxy
    // mov r1, #2
    // bl NNS_G2dGetImagePaletteLocation
    // add r3, r0, #0
    // mov r0, #0x20
    // str r0, [sp]
    // ldr r0, _02235BCC ; =ov74_0223D454
    // mov r2, #5
    // ldr r0, [r0, #8]
    // add r3, #0x60
    // str r0, [sp, #4]
    // ldrh r0, [r4]
    // ldrh r1, [r4, #4]
    // bl GfGfxLoader_GXLoadPal
    // add sp, #0x28
    // pop {r3, r4, r5, r6, r7, pc}
    // _02235BCC: .word ov74_0223D454
    // TODO: decompile
}



void ov74_02235BD0(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    ov74_02235728(0x71, 0x27, 0x24, 0x26);
    ov74_0223589C(0, (1 << 0x14));
    // str r3, [sp]
    // ldr r1, [r4, r1]
    ov74_02235930(1, (0x82 << 2), 0x80, 0);
    // str r0, [r4, r1]
}



void ov74_02235C10(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #8
    // add r5, r0, #0
    // mov r0, #0xc
    // str r0, [sp]
    // mov r0, #1
    // add r4, r1, #0
    // add r6, r2, #0
    // str r0, [sp, #4]
    // mov r0, #0x34
    // mov r1, #0xa
    // mov r2, #0
    // mov r3, #0xb
    // bl ov74_02235728
    // mov r1, #1
    // mov r0, #0
    // lsl r1, r1, #0x14
    // bl ov74_0223589C
    // mov r0, #1
    // mov r1, #0x82
    // str r0, [sp]
    // lsl r1, r1, #2
    // ldr r1, [r5, r1]
    // mov r2, #0x80
    // mov r3, #0
    // bl ov74_02235930
    // mov r2, #0x82
    // lsl r2, r2, #2
    // add r6, #8
    // str r0, [r5, r2]
    // cmp r4, #7
    // bgt _02235C68
    // cmp r4, #1
    // blt _02235CDA
    // beq _02235C6C
    // cmp r4, #2
    // beq _02235CA2
    // cmp r4, #7
    // beq _02235CC0
    // add sp, #8
    // pop {r4, r5, r6, pc}
    // cmp r4, #0xd
    // bne _02235CDA
    // add r0, r6, #0
    // mov r1, #5
    // mov r2, #0
    // bl GetMonData
    // add r4, r0, #0
    // add r0, r6, #0
    // mov r1, #0x70
    // mov r2, #0
    // bl GetMonData
    // mov r1, #0x85
    // lsl r1, r1, #2
    // add r3, r0, #0
    // add r0, r5, r1
    // str r0, [sp]
    // ldr r0, _02235CE0 ; =0x00000E94
    // sub r1, #0xc
    // add r0, r5, r0
    // str r0, [sp, #4]
    // ldr r0, [r5, r1]
    // add r1, r6, #0
    // add r2, r4, #0
    // bl ov74_02235B14
    // add sp, #8
    // pop {r4, r5, r6, pc}
    // add r0, r2, #0
    // add r0, #0xc
    // add r0, r5, r0
    // str r0, [sp]
    // ldr r0, _02235CE0 ; =0x00000E94
    // add r1, r6, #0
    // add r0, r5, r0
    // str r0, [sp, #4]
    // ldr r0, [r5, r2]
    // sub r2, #0x1a
    // mov r3, #0
    // bl ov74_02235B14
    // add sp, #8
    // pop {r4, r5, r6, pc}
    // add r0, r2, #0
    // add r0, #0xc
    // add r0, r5, r0
    // str r0, [sp]
    // ldr r0, _02235CE0 ; =0x00000E94
    // add r1, r6, #0
    // add r0, r5, r0
    // str r0, [sp, #4]
    // ldr r0, [r5, r2]
    // sub r2, #0x1a
    // mov r3, #1
    // bl ov74_02235B14
    // add sp, #8
    // pop {r4, r5, r6, pc}
    // nop
    // _02235CE0: .word 0x00000E94
    // TODO: decompile
}



void ov74_02235CE4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r5, r0, #0
    // cmp r1, #0xf
    // bhi _02235D36
    // add r0, r1, r1
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _02235CFA: ; jump table
    // ldr r4, [r2, #4]
    // b _02235D36
    // ldr r4, _02235D90 ; =0x000001C6
    // b _02235D36
    // mov r4, #0x71
    // lsl r4, r4, #2
    // b _02235D36
    // ldr r4, _02235D94 ; =0x000001C7
    // b _02235D36
    // ldr r4, _02235D98 ; =0x000001D3
    // b _02235D36
    // ldr r4, _02235D9C ; =0x000001BA
    // b _02235D36
    // ldr r4, _02235DA0 ; =0x000001F5
    // lsl r0, r4, #0x10
    // lsr r0, r0, #0x10
    // mov r1, #1
    // bl GetItemIndexMapping
    // add r7, r0, #0
    // lsl r0, r4, #0x10
    // lsr r0, r0, #0x10
    // mov r1, #2
    // bl GetItemIndexMapping
    // add r4, r0, #0
    // bl GetItemIconCell
    // add r6, r0, #0
    // bl GetItemIconAnim
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // mov r0, #0x12
    // add r1, r7, #0
    // add r2, r4, #0
    // add r3, r6, #0
    // bl ov74_02235728
    // mov r1, #1
    // mov r0, #0
    // lsl r1, r1, #0x14
    // bl ov74_0223589C
    // mov r3, #0
    // mov r1, #0x82
    // str r3, [sp]
    // lsl r1, r1, #2
    // ldr r1, [r5, r1]
    // mov r0, #1
    // mov r2, #0x80
    // bl ov74_02235930
    // mov r1, #0x82
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // _02235D90: .word 0x000001C6
    // _02235D94: .word 0x000001C7
    // _02235D98: .word 0x000001D3
    // _02235D9C: .word 0x000001BA
    // _02235DA0: .word 0x000001F5
    // TODO: decompile
}



void ov74_02235DA4(void) {
}



void ov74_02235DC4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x18
    // add r6, r1, #0
    // ldrh r4, [r6]
    // add r5, r0, #0
    // add r0, r4, #0
    // bl ov74_02235AC4
    // add r7, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #5
    // lsl r0, r0, #0xa
    // str r0, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // ldr r0, _02235EC0 ; =ov74_0223D454
    // mov r1, #0x22
    // ldr r0, [r0, #8]
    // add r2, r5, #0
    // str r0, [sp, #0xc]
    // mov r0, #0x71
    // mov r3, #5
    // bl GfGfxLoader_LoadCharData
    // mov r2, #1
    // ldr r3, _02235EC0 ; =ov74_0223D454
    // str r2, [sp]
    // ldr r3, [r3, #8]
    // mov r0, #0x71
    // mov r1, #0x23
    // bl GfGfxLoader_LoadFromNarc
    // add r1, sp, #0x14
    // str r0, [sp, #0x10]
    // bl NNS_G2dGetUnpackedScreenData
    // ldr r2, [sp, #0x14]
    // mov r3, #6
    // add r0, r5, #0
    // mov r1, #5
    // add r2, #0xc
    // lsl r3, r3, #8
    // bl BG_LoadScreenTilemapData
    // ldr r0, [sp, #0x10]
    // bl Heap_Free
    // mov r0, #0x20
    // str r0, [sp]
    // mov r0, #0x18
    // mov r2, #0
    // add r7, #8
    // str r0, [sp, #4]
    // lsl r0, r7, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #8]
    // add r0, r5, #0
    // mov r1, #5
    // add r3, r2, #0
    // bl BgTilemapRectChangePalette
    // add r0, r5, #0
    // mov r1, #5
    // bl ScheduleBgTilemapBufferTransfer
    // ldr r1, _02235EC4 ; =ov74_02235DA4
    // ldr r0, _02235EC8 ; =ov74_0223E2D4
    // cmp r4, #0xf
    // str r1, [r0, #0x24]
    // ldr r0, _02235EC0 ; =ov74_0223D454
    // str r5, [r0]
    // bhi _02235EAE
    // add r0, r4, r4
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _02235E62: ; jump table
    // ldr r0, _02235ECC ; =ov74_0223D454
    // add r1, r4, #0
    // add r2, r6, #0
    // bl ov74_02235BD0
    // b _02235EAE
    // mov r1, #0x83
    // ldr r0, _02235ECC ; =ov74_0223D454
    // mov r2, #0x78
    // lsl r1, r1, #2
    // str r2, [r0, r1]
    // ldr r0, _02235ECC ; =ov74_0223D454
    // add r1, r4, #0
    // add r2, r6, #0
    // bl ov74_02235C10
    // b _02235EAE
    // ldr r0, _02235ECC ; =ov74_0223D454
    // add r1, r4, #0
    // add r2, r6, #0
    // bl ov74_02235CE4
    // mov r1, #0x82
    // ldr r0, _02235ECC ; =ov74_0223D454
    // lsl r1, r1, #2
    // ldr r0, [r0, r1]
    // mov r1, #0
    // bl Sprite_SetDrawFlag
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // _02235EC0: .word ov74_0223D454
    // _02235EC4: .word ov74_02235DA4
    // _02235EC8: .word ov74_0223E2D4
    // _02235ECC: .word ov74_0223D454
    // TODO: decompile
}



void ov74_02235ED0(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // add r7, r1, #0
    // mov r1, #2
    // add r5, r0, #0
    // add r0, r2, #0
    // lsl r1, r1, #8
    // str r2, [sp]
    // bl Heap_Alloc
    // ldr r1, _02235F50 ; =0x0000A001
    // add r4, r0, #0
    // bl MATHi_CRC16InitTableRev
    // add r0, r4, #0
    // add r1, r5, #0
    // mov r2, #0x50
    // bl MATH_CalcCRC16
    // add r6, r0, #0
    // add r0, r4, #0
    // bl Heap_Free
    // add r0, sp, #4
    // bl OS_GetMacAddress
    // add r0, sp, #4
    // ldrh r1, [r0, #2]
    // mov r2, #0
    // add r3, sp, #4
    // strh r1, [r0, #6]
    // ldr r1, _02235F54 ; =0x0000D679
    // strh r6, [r0, #2]
    // ldrh r0, [r3]
    // add r2, r2, #1
    // eor r0, r1
    // strh r0, [r3]
    // ldrh r1, [r3]
    // add r3, r3, #2
    // cmp r2, #4
    // blt _02235F12
    // mov r1, #0x41
    // ldr r0, [sp]
    // lsl r1, r1, #2
    // bl Heap_Alloc
    // add r1, sp, #4
    // mov r2, #8
    // add r4, r0, #0
    // bl CRYPTO_RC4Init
    // add r5, #0x50
    // mov r2, #0xd6
    // add r0, r4, #0
    // add r1, r5, #0
    // lsl r2, r2, #2
    // add r3, r7, #0
    // bl CRYPTO_RC4Encrypt
    // add r0, r4, #0
    // bl Heap_Free
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // _02235F50: .word 0x0000A001
    // _02235F54: .word 0x0000D679
    // TODO: decompile
}



void ov74_02235F58(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // add r7, r1, #0
    // mov r1, #2
    // add r5, r0, #0
    // add r0, r2, #0
    // lsl r1, r1, #8
    // str r2, [sp]
    // bl Heap_Alloc
    // ldr r1, _02235FF0 ; =0x0000A001
    // add r4, r0, #0
    // bl MATHi_CRC16InitTableRev
    // add r0, r4, #0
    // add r1, r5, #0
    // mov r2, #0x50
    // bl MATH_CalcCRC16
    // add r6, r0, #0
    // add r0, r4, #0
    // bl Heap_Free
    // mov r0, #0
    // bl sub_02035754
    // ldrb r2, [r0, #4]
    // add r1, sp, #4
    // mov r3, #0
    // strb r2, [r1]
    // ldrb r2, [r0, #5]
    // strb r2, [r1, #1]
    // ldrb r2, [r0, #6]
    // strb r2, [r1, #2]
    // ldrb r2, [r0, #7]
    // strb r2, [r1, #3]
    // ldrb r2, [r0, #8]
    // strb r2, [r1, #4]
    // ldrb r0, [r0, #9]
    // strb r0, [r1, #5]
    // add r0, sp, #4
    // ldrh r2, [r0, #2]
    // strh r2, [r0, #6]
    // ldr r2, _02235FF4 ; =0x0000D679
    // strh r6, [r0, #2]
    // ldrh r0, [r1]
    // add r3, r3, #1
    // eor r0, r2
    // strh r0, [r1]
    // ldrh r2, [r1]
    // add r1, r1, #2
    // cmp r3, #4
    // blt _02235FB2
    // mov r1, #0x41
    // ldr r0, [sp]
    // lsl r1, r1, #2
    // bl Heap_Alloc
    // add r1, sp, #4
    // mov r2, #8
    // add r4, r0, #0
    // bl CRYPTO_RC4Init
    // add r5, #0x50
    // mov r2, #0xd6
    // add r0, r4, #0
    // add r1, r5, #0
    // lsl r2, r2, #2
    // add r3, r7, #0
    // bl CRYPTO_RC4Encrypt
    // add r0, r4, #0
    // bl Heap_Free
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // _02235FF0: .word 0x0000A001
    // _02235FF4: .word 0x0000D679
    // TODO: decompile
}



void ov74_02235FF8(void) {
}



void ov74_02236010(void) {
    // push {r3, lr}
    // ldr r0, _02236030 ; =0x027FFFA8
    // ldrh r1, [r0]
    // mov r0, #2
    // lsl r0, r0, #0xe
    // and r0, r1
    // asr r0, r0, #0xf
    // bne _0223602C
    // bl CTRDG_IsAgbCartridge
    // cmp r0, #0
    // bne _0223602C
    // bl CTRDG_TerminateForPulledOut
    // pop {r3, pc}
    // nop
    // _02236030: .word 0x027FFFA8
    // TODO: decompile
}



void ov74_02236034(void) {
    // push {r3, lr}
    // cmp r0, #1
    // bne _0223605C
    // ldr r1, _02236068 ; =0x04000208
    // ldrh r0, [r1]
    // mov r0, #0
    // strh r0, [r1]
    // lsr r0, r1, #0xd
    // ldr r1, _0223606C ; =ov74_02236010
    // bl OS_SetIrqFunction
    // mov r0, #2
    // lsl r0, r0, #0xc
    // bl OS_EnableIrqMask
    // ldr r1, _02236068 ; =0x04000208
    // ldrh r0, [r1]
    // mov r0, #1
    // strh r0, [r1]
    // pop {r3, pc}
    // mov r0, #2
    // lsl r0, r0, #0xc
    // bl OS_DisableIrqMask
    // pop {r3, pc}
    // nop
    // _02236068: .word 0x04000208
    // _0223606C: .word ov74_02236010
    // TODO: decompile
}



void ov74_02236070(void) {
    // bx lr
    // TODO: decompile
}



void ov74_02236074(void) {
    // push {r3, lr}
    // ldr r1, _02236098 ; =0x04000208
    // ldrh r0, [r1]
    // mov r0, #0
    // strh r0, [r1]
    // lsr r0, r1, #0xd
    // ldr r1, _0223609C ; =ov74_02236070
    // bl OS_SetIrqFunction
    // mov r0, #2
    // lsl r0, r0, #0xc
    // bl OS_EnableIrqMask
    // ldr r1, _02236098 ; =0x04000208
    // ldrh r0, [r1]
    // mov r0, #1
    // strh r0, [r1]
    // pop {r3, pc}
    // _02236098: .word 0x04000208
    // _0223609C: .word ov74_02236070
    // TODO: decompile
}



void ov74_022360A0(void) {
    // ldr r1, _022360AC ; =ov74_0223D454
    // str r0, [r1, #0x18]
    // mov r0, #0
    // str r0, [r1, #0x14]
    // bx lr
    // nop
    // _022360AC: .word ov74_0223D454
    // TODO: decompile
}



void ov74_022360B0(void) {
    // push {r3, r4, r5, lr}
    // ldr r0, _02236120 ; =ov74_0223D454
    // ldr r4, _02236124 ; =ov74_0223D454
    // ldr r0, [r0, #0x14]
    // cmp r0, #4
    // bhi _0223611C
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _022360C8: ; jump table
    // mov r0, #4
    // bl sub_0201A728
    // ldr r0, [r4, #0x18]
    // mov r1, #2
    // bl Save_PrepareForAsyncWrite
    // ldr r0, [r4, #0x14]
    // add r0, r0, #1
    // str r0, [r4, #0x14]
    // b _0223611C
    // ldr r0, [r4, #0x18]
    // bl Save_WriteFileAsync
    // add r5, r0, #0
    // cmp r5, #3
    // bne _022360FA
    // mov r0, #3
    // str r0, [r4, #0x14]
    // b _0223610C
    // cmp r5, #2
    // bne _02236104
    // mov r0, #2
    // str r0, [r4, #0x14]
    // b _0223610C
    // cmp r5, #1
    // bne _0223610C
    // mov r0, #4
    // str r0, [r4, #0x14]
    // sub r0, r5, #2
    // cmp r0, #1
    // bhi _02236118
    // mov r0, #4
    // bl sub_0201A738
    // add r0, r5, #0
    // pop {r3, r4, r5, pc}
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // _02236120: .word ov74_0223D454
    // _02236124: .word ov74_0223D454
    // TODO: decompile
}



void ov74_02236128(void) {
    // ldr r0, _02236138 ; =ov74_0223D454
    // ldr r1, _0223613C ; =ov74_0223D454
    // ldr r0, [r0, #0x14]
    // cmp r0, #4
    // bne _02236136
    // mov r0, #1
    // str r0, [r1, #0x14]
    // bx lr
    // _02236138: .word ov74_0223D454
    // _0223613C: .word ov74_0223D454
    // TODO: decompile
}



void ov74_02236140(void) {
    // push {r3, lr}
    // ldr r0, _02236158 ; =ov74_0223D454
    // ldr r0, [r0, #0x18]
    // bl Save_Cancel
    // ldr r0, _02236158 ; =ov74_0223D454
    // mov r1, #3
    // str r1, [r0, #0x14]
    // mov r0, #4
    // bl sub_0201A738
    // pop {r3, pc}
    // _02236158: .word ov74_0223D454
    // TODO: decompile
}



void ov74_0223615C(void) {
    // ldr r0, _02236164 ; =ov74_0223D454
    // ldr r0, [r0, #0x14]
    // bx lr
    // nop
    // _02236164: .word ov74_0223D454
    // TODO: decompile
}



void ov74_02236168(void) {
    // push {r4, lr}
    // ldr r1, _022361A4 ; =ov74_0223E2FC
    // add r4, r0, #0
    // ldr r2, [r1, #4]
    // cmp r2, #0
    // beq _02236184
    // ldr r3, [r1]
    // ldr r1, _022361A8 ; =0x00001150
    // ldr r0, _022361AC ; =ov74_0223D00C
    // ldr r1, [r3, r1]
    // lsl r3, r1, #2
    // ldr r1, _022361B0 ; =ov74_0223CFE4
    // ldr r1, [r1, r3]
    // blx r2
    // ldr r3, _022361A4 ; =ov74_0223E2FC
    // ldr r1, _022361A8 ; =0x00001150
    // ldr r0, [r3]
    // str r4, [r0, r1]
    // ldr r2, [r3, #4]
    // cmp r2, #0
    // beq _022361A0
    // ldr r3, [r3]
    // ldr r0, _022361B4 ; =ov74_0223D014
    // ldr r1, [r3, r1]
    // lsl r3, r1, #2
    // ldr r1, _022361B0 ; =ov74_0223CFE4
    // ldr r1, [r1, r3]
    // blx r2
    // pop {r4, pc}
    // nop
    // _022361A4: .word ov74_0223E2FC
    // _022361A8: .word 0x00001150
    // _022361AC: .word ov74_0223D00C
    // _022361B0: .word ov74_0223CFE4
    // _022361B4: .word ov74_0223D014
    // TODO: decompile
}



void ov74_022361B8(void) {
    // ldr r1, _022361CC ; =ov74_0223E2FC
    // ldr r3, [r1]
    // ldr r1, _022361D0 ; =0x00001150
    // ldr r2, [r3, r1]
    // sub r2, #9
    // cmp r2, #1
    // bls _022361CA
    // add r1, r1, #4
    // str r0, [r3, r1]
    // bx lr
    // _022361CC: .word ov74_0223E2FC
    // _022361D0: .word 0x00001150
    // TODO: decompile
}



void ov74_022361D4(void) {
    // push {r4, lr}
    // ldr r0, _02236240 ; =ov74_0223E2FC
    // ldr r1, [r0]
    // ldr r0, _02236244 ; =0x00001150
    // ldr r0, [r1, r0]
    // cmp r0, #4
    // bne _022361E6
    // bl OS_Terminate
    // mov r0, #2
    // bl ov74_02236168
    // ldr r3, _02236240 ; =ov74_0223E2FC
    // ldr r0, _02236248 ; =0x0000FFFF
    // ldr r2, [r3]
    // ldr r1, _0223624C ; =0x00000FCC
    // strh r0, [r2, r1]
    // sub r2, r1, #2
    // ldr r4, [r3]
    // sub r1, r1, #4
    // strh r0, [r4, r2]
    // ldr r2, [r3]
    // strh r0, [r2, r1]
    // bl ov74_02236258
    // cmp r0, #0
    // bne _02236224
    // mov r0, #9
    // bl ov74_02236168
    // ldr r0, _02236240 ; =ov74_0223E2FC
    // ldr r1, [r0]
    // ldr r0, _02236250 ; =0x0000117C
    // ldr r1, [r1, r0]
    // cmp r1, #0
    // beq _02236220
    // mov r0, #4
    // blx r1
    // mov r0, #0
    // pop {r4, pc}
    // ldr r1, _02236240 ; =ov74_0223E2FC
    // ldr r0, _02236254 ; =0x00001158
    // ldr r2, [r1]
    // mov r3, #2
    // strh r3, [r2, r0]
    // ldr r1, [r1]
    // add r0, #0x24
    // ldr r1, [r1, r0]
    // cmp r1, #0
    // beq _0223623C
    // mov r0, #0
    // blx r1
    // mov r0, #1
    // pop {r4, pc}
    // _02236240: .word ov74_0223E2FC
    // _02236244: .word 0x00001150
    // _02236248: .word 0x0000FFFF
    // _0223624C: .word 0x00000FCC
    // _02236250: .word 0x0000117C
    // _02236254: .word 0x00001158
    // TODO: decompile
}



void ov74_02236258(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // ldr r0, _02236330 ; =ov74_0223E2FC
    // ldr r1, [r0]
    // ldr r0, _02236334 ; =0x00001150
    // ldr r0, [r1, r0]
    // cmp r0, #2
    // beq _0223626C
    // bl OS_Terminate
    // mov r0, #0
    // bl WM_GetAllowedChannel
    // add r4, r0, #0
    // mov r0, #2
    // lsl r0, r0, #0xe
    // cmp r4, r0
    // bne _02236284
    // mov r0, #3
    // bl ov74_022361B8
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // cmp r4, #0
    // bne _02236292
    // mov r0, #0x16
    // bl ov74_022361B8
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, _02236330 ; =ov74_0223E2FC
    // ldr r2, [r0]
    // ldr r0, _02236338 ; =0x00001176
    // ldrh r1, [r2, r0]
    // cmp r1, #0x10
    // blo _022362D4
    // sub r1, #0x10
    // mov r5, #0
    // mov r7, #0xd
    // mov r6, #1
    // b _022362BA
    // add r0, r1, #1
    // add r1, r7, #0
    // bl _s32_div_f
    // add r0, r6, #0
    // lsl r0, r1
    // tst r0, r4
    // bne _022362BE
    // add r5, r5, #1
    // cmp r5, #0xd
    // blt _022362A8
    // ldr r2, _02236330 ; =ov74_0223E2FC
    // add r4, r1, #0
    // ldr r3, [r2]
    // ldr r0, _02236338 ; =0x00001176
    // add r4, #0x10
    // strh r4, [r3, r0]
    // add r3, r1, #1
    // ldr r1, [r2]
    // ldr r0, _0223633C ; =0x00000FC4
    // strh r3, [r1, r0]
    // b _022362D8
    // ldr r0, _0223633C ; =0x00000FC4
    // strh r1, [r2, r0]
    // ldr r2, _02236330 ; =ov74_0223E2FC
    // ldr r0, _02236340 ; =0x00000FC6
    // ldr r1, [r2]
    // mov r3, #0xdc
    // strh r3, [r1, r0]
    // add r1, r0, #0
    // ldr r3, [r2]
    // sub r1, #0xc6
    // add r1, r3, r1
    // sub r0, r0, #6
    // str r1, [r3, r0]
    // ldr r1, [r2]
    // ldr r0, _02236344 ; =0x00001158
    // ldrh r0, [r1, r0]
    // cmp r0, #3
    // bne _0223630E
    // mov r5, #0
    // ldr r0, _02236348 ; =0x00001170
    // ldr r1, _0223634C ; =0x00000FC8
    // b _0223630A
    // ldr r3, [r2]
    // add r4, r3, r5
    // ldrb r3, [r4, r0]
    // add r5, r5, #1
    // strb r3, [r4, r1]
    // cmp r5, #6
    // blt _02236300
    // ldr r1, _02236330 ; =ov74_0223E2FC
    // ldr r0, _02236350 ; =ov74_02236354
    // ldr r2, [r1]
    // mov r1, #0x3f
    // lsl r1, r1, #6
    // add r1, r2, r1
    // bl WM_StartScan
    // cmp r0, #2
    // beq _0223632A
    // bl ov74_022361B8
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02236330: .word ov74_0223E2FC
    // _02236334: .word 0x00001150
    // _02236338: .word 0x00001176
    // _0223633C: .word 0x00000FC4
    // _02236340: .word 0x00000FC6
    // _02236344: .word 0x00001158
    // _02236348: .word 0x00001170
    // _0223634C: .word 0x00000FC8
    // _02236350: .word ov74_02236354
    // TODO: decompile
}



void ov74_02236354(void) {
    // push {r3, r4, r5, lr}
    // add r4, r0, #0
    // ldrh r0, [r4, #2]
    // cmp r0, #0
    // beq _0223637A
    // bl ov74_022361B8
    // mov r0, #9
    // bl ov74_02236168
    // ldr r0, _02236468 ; =ov74_0223E2FC
    // ldr r1, [r0]
    // ldr r0, _0223646C ; =0x0000117C
    // ldr r1, [r1, r0]
    // cmp r1, #0
    // beq _02236466
    // mov r0, #4
    // blx r1
    // pop {r3, r4, r5, pc}
    // ldr r0, _02236468 ; =ov74_0223E2FC
    // ldr r1, [r0]
    // ldr r0, _02236470 ; =0x00001150
    // ldr r0, [r1, r0]
    // cmp r0, #2
    // beq _022363A6
    // bl ov74_0223648C
    // cmp r0, #0
    // bne _02236466
    // mov r0, #9
    // bl ov74_02236168
    // ldr r0, _02236468 ; =ov74_0223E2FC
    // ldr r1, [r0]
    // ldr r0, _0223646C ; =0x0000117C
    // ldr r1, [r1, r0]
    // cmp r1, #0
    // beq _02236466
    // mov r0, #4
    // blx r1
    // pop {r3, r4, r5, pc}
    // ldrh r0, [r4, #8]
    // cmp r0, #3
    // beq _02236466
    // cmp r0, #4
    // beq _02236448
    // cmp r0, #5
    // bne _02236448
    // mov r0, #0xf
    // lsl r0, r0, #8
    // add r0, r1, r0
    // mov r1, #0xc0
    // bl DC_InvalidateRange
    // ldrh r0, [r4, #0x36]
    // cmp r0, #8
    // blo _022363CE
    // ldr r1, [r4, #0x3c]
    // ldr r0, _02236474 ; =0x00400318
    // cmp r1, r0
    // beq _022363E0
    // ldr r0, _02236468 ; =ov74_0223E2FC
    // ldr r3, [r0, #4]
    // cmp r3, #0
    // beq _02236448
    // ldr r0, _02236478 ; =ov74_0223D018
    // ldr r1, [r4, #0x3c]
    // ldr r2, _02236474 ; =0x00400318
    // blx r3
    // b _02236448
    // ldr r1, _02236468 ; =ov74_0223E2FC
    // ldrh r3, [r4, #0x12]
    // ldr r2, [r1]
    // ldr r0, _0223647C ; =0x0000116C
    // str r3, [r2, r0]
    // ldr r1, [r1]
    // sub r0, #0x14
    // ldrh r0, [r1, r0]
    // cmp r0, #2
    // bne _0223642C
    // add r0, r4, #0
    // add r0, #0x48
    // bl ov74_022366E8
    // ldr r2, _02236468 ; =ov74_0223E2FC
    // ldr r1, _02236480 ; =0x00001170
    // mov r0, #0
    // add r3, r4, r0
    // ldrb r5, [r3, #0xa]
    // ldr r3, [r2]
    // add r3, r3, r0
    // add r0, r0, #1
    // strb r5, [r3, r1]
    // cmp r0, #6
    // blt _02236402
    // ldr r1, _02236468 ; =ov74_0223E2FC
    // ldr r0, _02236484 ; =0x00001176
    // ldr r3, [r1]
    // ldrh r2, [r3, r0]
    // sub r2, #0xf
    // strh r2, [r3, r0]
    // ldr r1, [r1]
    // add r0, r0, #6
    // ldr r1, [r1, r0]
    // cmp r1, #0
    // beq _0223642C
    // mov r0, #1
    // blx r1
    // add r4, #0x48
    // add r0, r4, #0
    // bl ov74_02236768
    // cmp r0, #0
    // beq _02236448
    // ldr r0, _02236468 ; =ov74_0223E2FC
    // mov r2, #4
    // ldr r1, [r0]
    // ldr r0, _02236488 ; =0x00001158
    // strh r2, [r1, r0]
    // bl ov74_022365FC
    // pop {r3, r4, r5, pc}
    // bl ov74_02236258
    // cmp r0, #0
    // bne _02236466
    // mov r0, #9
    // bl ov74_02236168
    // ldr r0, _02236468 ; =ov74_0223E2FC
    // ldr r1, [r0]
    // ldr r0, _0223646C ; =0x0000117C
    // ldr r1, [r1, r0]
    // cmp r1, #0
    // beq _02236466
    // mov r0, #4
    // blx r1
    // pop {r3, r4, r5, pc}
    // _02236468: .word ov74_0223E2FC
    // _0223646C: .word 0x0000117C
    // _02236470: .word 0x00001150
    // _02236474: .word 0x00400318
    // _02236478: .word ov74_0223D018
    // _0223647C: .word 0x0000116C
    // _02236480: .word 0x00001170
    // _02236484: .word 0x00001176
    // _02236488: .word 0x00001158
    // TODO: decompile
}



void ov74_0223648C(void) {
    // push {r3, lr}
    // ldr r0, _022364A4 ; =ov74_022364A8
    // bl WM_EndScan
    // cmp r0, #2
    // beq _022364A0
    // bl ov74_022361B8
    // mov r0, #0
    // pop {r3, pc}
    // mov r0, #1
    // pop {r3, pc}
    // _022364A4: .word ov74_022364A8
    // TODO: decompile
}



void ov74_022364A8(void) {
    ov74_022361B8(*((u16*)(r0 + 2)));
    ov74_02236168(1);
}



void ov74_022364C0(void) {
    // push {r3, lr}
    // ldrh r0, [r0, #2]
    // cmp r0, #0
    // beq _022364D0
    // mov r0, #0xa
    // bl ov74_02236168
    // pop {r3, pc}
    // mov r0, #0
    // bl ov74_02236168
    // ldr r0, _022364E8 ; =ov74_0223E2FC
    // ldr r1, [r0]
    // ldr r0, _022364EC ; =0x0000117C
    // ldr r1, [r1, r0]
    // cmp r1, #0
    // beq _022364E6
    // mov r0, #3
    // blx r1
    // pop {r3, pc}
    // _022364E8: .word ov74_0223E2FC
    // _022364EC: .word 0x0000117C
    // TODO: decompile
}



void ov74_022364F0(void) {
}



void ov74_02236514(void) {
    // push {r3, lr}
    // ldrh r0, [r0, #2]
    // cmp r0, #8
    // bne _02236532
    // mov r0, #9
    // bl ov74_02236168
    // ldr r0, _02236534 ; =ov74_0223E2FC
    // ldr r1, [r0]
    // ldr r0, _02236538 ; =0x0000117C
    // ldr r1, [r1, r0]
    // cmp r1, #0
    // beq _02236532
    // mov r0, #4
    // blx r1
    // pop {r3, pc}
    // _02236534: .word ov74_0223E2FC
    // _02236538: .word 0x0000117C
    // TODO: decompile
}



void ov74_0223653C(void) {
    // push {r3, lr}
    // mov r0, #3
    // bl ov74_02236168
    // ldr r0, _02236568 ; =ov74_0223E2FC
    // ldr r1, _0223656C ; =ov74_02236570
    // ldr r0, [r0]
    // mov r2, #2
    // bl WM_Initialize
    // cmp r0, #2
    // beq _02236562
    // bl ov74_022361B8
    // mov r0, #0xa
    // bl ov74_02236168
    // mov r0, #0
    // pop {r3, pc}
    // mov r0, #1
    // pop {r3, pc}
    // nop
    // _02236568: .word ov74_0223E2FC
    // _0223656C: .word ov74_02236570
    // TODO: decompile
}



void ov74_02236570(void) {
    // push {r3, lr}
    // ldrh r0, [r0, #2]
    // cmp r0, #0
    // beq _02236584
    // bl ov74_022361B8
    // mov r0, #0xa
    // bl ov74_02236168
    // pop {r3, pc}
    // ldr r0, _022365A8 ; =ov74_02236514
    // bl WM_SetIndCallback
    // cmp r0, #0
    // beq _0223659A
    // bl ov74_022361B8
    // mov r0, #0xa
    // bl ov74_02236168
    // pop {r3, pc}
    // mov r0, #1
    // bl ov74_02236168
    // bl ov74_022361D4
    // pop {r3, pc}
    // nop
    // _022365A8: .word ov74_02236514
    // TODO: decompile
}



void ov74_022365AC(void) {
    // push {r3, lr}
    // ldr r0, _022365EC ; =ov74_0223E2FC
    // ldr r1, [r0]
    // ldr r0, _022365F0 ; =0x00001150
    // ldr r0, [r1, r0]
    // cmp r0, #1
    // beq _022365BE
    // bl OS_Terminate
    // mov r0, #3
    // bl ov74_02236168
    // ldr r0, _022365F4 ; =ov74_022364C0
    // bl WM_End
    // cmp r0, #2
    // beq _022365E8
    // mov r0, #9
    // bl ov74_02236168
    // ldr r0, _022365EC ; =ov74_0223E2FC
    // ldr r1, [r0]
    // ldr r0, _022365F8 ; =0x0000117C
    // ldr r1, [r1, r0]
    // cmp r1, #0
    // beq _022365E4
    // mov r0, #4
    // blx r1
    // mov r0, #0
    // pop {r3, pc}
    // mov r0, #1
    // pop {r3, pc}
    // _022365EC: .word ov74_0223E2FC
    // _022365F0: .word 0x00001150
    // _022365F4: .word ov74_022364C0
    // _022365F8: .word 0x0000117C
    // TODO: decompile
}



void ov74_022365FC(void) {
    // push {r3, lr}
    // ldr r0, _02236618 ; =ov74_0223E2FC
    // ldr r1, [r0]
    // ldr r0, _0223661C ; =0x00001150
    // ldr r0, [r1, r0]
    // cmp r0, #1
    // bne _02236610
    // bl ov74_022365AC
    // pop {r3, pc}
    // bl ov74_02236620
    // pop {r3, pc}
    // nop
    // _02236618: .word ov74_0223E2FC
    // _0223661C: .word 0x00001150
    // TODO: decompile
}



void ov74_02236620(void) {
    // push {r3, lr}
    // mov r0, #3
    // bl ov74_02236168
    // ldr r0, _02236640 ; =ov74_02236644
    // bl WM_Reset
    // cmp r0, #2
    // beq _0223663A
    // bl ov74_022361B8
    // mov r0, #0
    // pop {r3, pc}
    // mov r0, #1
    // pop {r3, pc}
    // nop
    // _02236640: .word ov74_02236644
    // TODO: decompile
}



void ov74_02236644(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldrh r0, [r4, #2]
    // cmp r0, #0
    // beq _0223666C
    // mov r0, #9
    // bl ov74_02236168
    // ldrh r0, [r4, #2]
    // bl ov74_022361B8
    // ldr r0, _02236678 ; =ov74_0223E2FC
    // ldr r1, [r0]
    // ldr r0, _0223667C ; =0x0000117C
    // ldr r1, [r1, r0]
    // cmp r1, #0
    // beq _02236676
    // mov r0, #4
    // blx r1
    // pop {r4, pc}
    // mov r0, #1
    // bl ov74_02236168
    // bl ov74_022365AC
    // pop {r4, pc}
    // _02236678: .word ov74_0223E2FC
    // _0223667C: .word 0x0000117C
    // TODO: decompile
}



void ov74_02236680(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r7, r0, #0
    // add r2, #0x1f
    // mov r0, #0x1f
    // bic r2, r0
    // ldr r4, _022366DC ; =ov74_0223E2FC
    // ldr r3, _022366E0 ; =0x00001150
    // str r2, [r4]
    // mov r0, #0
    // str r0, [r2, r3]
    // add r2, r3, #0
    // ldr r5, [r4]
    // mov r6, #1
    // add r2, #8
    // strh r6, [r5, r2]
    // add r2, r3, #0
    // ldr r5, [r4]
    // add r2, #0x28
    // str r7, [r5, r2]
    // add r2, r3, #0
    // ldr r5, [r4]
    // add r2, #0xc
    // strh r0, [r5, r2]
    // add r2, r3, #0
    // ldr r5, [r4]
    // add r2, #0xe
    // strh r0, [r5, r2]
    // add r2, r3, #0
    // ldr r5, [r4]
    // add r2, #0x2c
    // str r1, [r5, r2]
    // add r2, r3, #0
    // ldr r5, [r4]
    // mov r1, #0x10
    // add r2, #0x26
    // strh r1, [r5, r2]
    // ldr r5, [r4]
    // ldr r2, _022366E4 ; =0x00001048
    // sub r1, #0x11
    // str r0, [r5, r2]
    // ldr r0, [r4]
    // add r3, #0x1c
    // str r1, [r0, r3]
    // bl ov74_022364F0
    // pop {r3, r4, r5, r6, r7, pc}
    // _022366DC: .word ov74_0223E2FC
    // _022366E0: .word 0x00001150
    // _022366E4: .word 0x00001048
    // TODO: decompile
}



void ov74_022366E8(void) {
    // push {r4, r5, r6, lr}
    // ldr r3, _02236758 ; =ov74_0223E2FC
    // ldr r1, _0223675C ; =0x00001048
    // ldr r2, [r3]
    // mov r4, #0
    // str r4, [r2, r1]
    // ldr r1, [r3]
    // ldr r2, _02236760 ; =0x00001158
    // mov r4, #3
    // strh r4, [r1, r2]
    // ldrh r5, [r0]
    // ldr r4, [r3]
    // add r1, r2, #2
    // strh r5, [r4, r1]
    // ldr r4, [r0, #4]
    // add r0, r2, #0
    // ldr r1, [r3]
    // add r0, #8
    // str r4, [r1, r0]
    // ldr r4, [r3]
    // add r2, #8
    // ldr r0, [r4, r2]
    // mov r1, #0x68
    // sub r0, r0, #1
    // bl _u32_div_f
    // ldr r2, _02236764 ; =0x0000115C
    // add r0, r0, #1
    // strh r0, [r4, r2]
    // ldr r4, _02236758 ; =ov74_0223E2FC
    // mov r0, #0
    // ldr r3, [r4]
    // add r1, r2, #2
    // strh r0, [r3, r1]
    // add r1, r2, #0
    // ldr r3, [r4]
    // add r1, #8
    // str r0, [r3, r1]
    // ldr r1, [r4]
    // ldrh r2, [r1, r2]
    // cmp r2, #0
    // ble _02236754
    // mov r2, #0x46
    // lsl r2, r2, #6
    // add r3, r2, #0
    // add r6, r0, #0
    // sub r3, #0x24
    // add r1, r1, r0
    // strb r6, [r1, r2]
    // ldr r1, [r4]
    // add r0, r0, #1
    // ldrh r5, [r1, r3]
    // cmp r0, r5
    // blt _02236746
    // pop {r4, r5, r6, pc}
    // nop
    // _02236758: .word ov74_0223E2FC
    // _0223675C: .word 0x00001048
    // _02236760: .word 0x00001158
    // _02236764: .word 0x0000115C
    // TODO: decompile
}



void ov74_02236768(void) {
    // push {r3, r4, r5, lr}
    // add r4, r0, #0
    // ldr r0, _02236884 ; =ov74_0223E2FC
    // ldrh r1, [r4]
    // ldr r3, [r0]
    // ldr r0, _02236888 ; =0x0000115A
    // ldrh r2, [r3, r0]
    // cmp r2, r1
    // bne _02236784
    // add r0, r0, #6
    // ldr r1, [r3, r0]
    // ldr r0, [r4, #4]
    // cmp r1, r0
    // beq _022367B0
    // ldr r0, _02236884 ; =ov74_0223E2FC
    // ldr r3, [r0]
    // ldr r0, _0223688C ; =0x00001164
    // ldr r2, [r3, r0]
    // add r1, r2, #1
    // str r1, [r3, r0]
    // cmp r2, #0x10
    // blo _022367AC
    // add r0, r4, #0
    // bl ov74_022366E8
    // ldr r0, _02236884 ; =ov74_0223E2FC
    // ldr r1, [r0]
    // ldr r0, _02236890 ; =0x0000117C
    // ldr r1, [r1, r0]
    // cmp r1, #0
    // beq _022367B0
    // mov r0, #5
    // blx r1
    // b _022367B0
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // ldrh r3, [r4, #2]
    // ldr r0, _02236894 ; =0x0000FFFF
    // cmp r3, r0
    // bne _022367D8
    // ldr r1, _02236884 ; =ov74_0223E2FC
    // add r4, #8
    // ldr r2, [r1]
    // mov r1, #0xfe
    // lsl r1, r1, #4
    // add r1, r2, r1
    // add r0, r4, #0
    // mov r2, #0x68
    // bl MIi_CpuCopy32
    // ldr r0, _02236884 ; =ov74_0223E2FC
    // mov r2, #1
    // ldr r1, [r0]
    // ldr r0, _02236898 ; =0x00001048
    // str r2, [r1, r0]
    // b _02236880
    // ldr r1, _02236884 ; =ov74_0223E2FC
    // ldr r0, _0223689C ; =0x00001168
    // ldr r2, [r1]
    // str r3, [r2, r0]
    // ldr r3, [r1]
    // add r1, r0, #0
    // sub r1, #0xc
    // ldrh r2, [r4, #2]
    // ldrh r1, [r3, r1]
    // cmp r2, r1
    // blo _02236800
    // add r0, #0x14
    // ldr r1, [r3, r0]
    // cmp r1, #0
    // beq _022367FA
    // mov r0, #4
    // blx r1
    // mov r0, #9
    // bl ov74_02236168
    // ldr r0, _02236884 ; =ov74_0223E2FC
    // mov r2, #0x46
    // ldr r1, [r0]
    // lsl r2, r2, #6
    // ldrh r3, [r4, #2]
    // add r5, r1, r2
    // ldrb r1, [r5, r3]
    // cmp r1, #0
    // bne _02236880
    // mov r1, #1
    // strb r1, [r5, r3]
    // ldr r5, [r0]
    // add r0, r2, #0
    // sub r0, #0x24
    // ldrh r0, [r5, r0]
    // ldrh r1, [r4, #2]
    // sub r0, r0, #1
    // cmp r1, r0
    // bne _02236844
    // add r3, r1, #0
    // add r1, r2, #0
    // sub r1, #8
    // sub r2, #0x20
    // mov r0, #0x68
    // ldr r1, [r5, r1]
    // mul r3, r0
    // ldr r2, [r5, r2]
    // add r4, #8
    // add r0, r4, #0
    // add r1, r1, r3
    // sub r2, r2, r3
    // bl MIi_CpuCopy32
    // b _02236858
    // add r4, #8
    // sub r2, #8
    // add r0, r4, #0
    // ldr r4, [r5, r2]
    // mov r2, #0x68
    // add r3, r1, #0
    // mul r3, r2
    // add r1, r4, r3
    // bl MIi_CpuCopy32
    // ldr r1, _02236884 ; =ov74_0223E2FC
    // ldr r0, _022368A0 ; =0x0000115E
    // ldr r3, [r1]
    // ldrh r2, [r3, r0]
    // add r2, r2, #1
    // strh r2, [r3, r0]
    // ldr r3, [r1]
    // sub r1, r0, #2
    // ldrh r2, [r3, r0]
    // ldrh r1, [r3, r1]
    // cmp r2, r1
    // bne _02236880
    // add r0, #0x1e
    // ldr r1, [r3, r0]
    // cmp r1, #0
    // beq _0223687C
    // mov r0, #2
    // blx r1
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // _02236884: .word ov74_0223E2FC
    // _02236888: .word 0x0000115A
    // _0223688C: .word 0x00001164
    // _02236890: .word 0x0000117C
    // _02236894: .word 0x0000FFFF
    // _02236898: .word 0x00001048
    // _0223689C: .word 0x00001168
    // _022368A0: .word 0x0000115E
    // TODO: decompile
}



void ov74_022368A4(void) {
    // ldrh r4, [r0, r4]
    // add r2, r2, r4
    // asr r2, r2, #0xf
    // orr r2, r4
}



void ov74_022368D4(void) {
    // push {r4, lr}
    // sub sp, #8
    // ldr r0, _02236968 ; =ov74_0223E2FC
    // add r1, sp, #0
    // ldr r4, [r0]
    // ldr r0, _0223696C ; =0x00001170
    // add r3, r4, r0
    // ldrh r2, [r3]
    // sub r0, #0x16
    // strh r2, [r1]
    // ldrh r2, [r3, #2]
    // strh r2, [r1, #6]
    // ldrh r2, [r3, #4]
    // add r3, sp, #0
    // strh r2, [r1, #4]
    // ldrh r0, [r4, r0]
    // ldr r2, _02236970 ; =0x00003FA2
    // strh r0, [r1, #2]
    // mov r1, #0
    // ldrh r0, [r3]
    // add r1, r1, #1
    // eor r0, r2
    // strh r0, [r3]
    // ldrh r2, [r3]
    // add r3, r3, #2
    // cmp r1, #4
    // blt _022368FA
    // ldr r0, _02236968 ; =ov74_0223E2FC
    // mov r2, #8
    // ldr r1, [r0]
    // ldr r0, _02236974 ; =0x0000104C
    // add r0, r1, r0
    // add r1, sp, #0
    // bl CRYPTO_RC4Init
    // ldr r0, _02236968 ; =ov74_0223E2FC
    // ldr r2, _02236978 ; =0x00001178
    // ldr r3, [r0]
    // ldr r0, _02236974 ; =0x0000104C
    // ldr r1, [r3, r2]
    // sub r2, #0x18
    // ldr r2, [r3, r2]
    // add r0, r3, r0
    // add r3, r1, #0
    // bl CRYPTO_RC4Encrypt
    // ldr r1, _02236968 ; =ov74_0223E2FC
    // ldr r2, _02236974 ; =0x0000104C
    // ldr r1, [r1]
    // mov r0, #0
    // add r1, r1, r2
    // lsr r2, r2, #4
    // bl MIi_CpuClear32
    // ldr r0, _02236968 ; =ov74_0223E2FC
    // ldr r1, _02236978 ; =0x00001178
    // ldr r2, [r0]
    // ldr r0, [r2, r1]
    // sub r1, #0x18
    // ldr r1, [r2, r1]
    // bl ov74_022368A4
    // ldr r1, _02236968 ; =ov74_0223E2FC
    // ldr r2, [r1]
    // ldr r1, _0223697C ; =0x0000115A
    // ldrh r1, [r2, r1]
    // cmp r1, r0
    // bne _02236962
    // add sp, #8
    // mov r0, #1
    // pop {r4, pc}
    // mov r0, #0
    // add sp, #8
    // pop {r4, pc}
    // _02236968: .word ov74_0223E2FC
    // _0223696C: .word 0x00001170
    // _02236970: .word 0x00003FA2
    // _02236974: .word 0x0000104C
    // _02236978: .word 0x00001178
    // _0223697C: .word 0x0000115A
    // TODO: decompile
}



void ov74_02236980(void) {
    // ldr r0, _02236984 ; =0x000016A0
    // bx lr
    // _02236984: .word 0x000016A0
    // TODO: decompile
}



void ov74_02236988(void) {
    // ldr r0, _022369A0 ; =ov74_0223E2FC
    // ldr r2, [r0]
    // ldr r0, _022369A4 ; =0x00001048
    // ldr r1, [r2, r0]
    // cmp r1, #0
    // beq _0223699A
    // sub r0, #0x68
    // add r0, r2, r0
    // bx lr
    // mov r0, #0
    // bx lr
    // nop
    // _022369A0: .word ov74_0223E2FC
    // _022369A4: .word 0x00001048
    // TODO: decompile
}



void ov74_022369A8(void) {
    // add r1, #0x24
    // bic r1, r0
    // add r1, #0x20
    Heap_Alloc(0x54);
    // add r2, #0x20
    // bic r2, r1
    // str r0, [r1]
}



void ov74_022369C8(void) {
}



void ov74_022369D8(void) {
    // push {r4, lr}
    // sub sp, #8
    // add r4, r0, #0
    // add r0, sp, #0
    // add r1, sp, #4
    // bl ov00_021EC11C
    // ldr r0, [sp]
    // ldr r1, [sp, #4]
    // neg r0, r0
    // bl ov00_021E6A70
    // ldr r2, _02236A20 ; =0x0000266C
    // str r0, [r4, r2]
    // ldr r0, [sp]
    // neg r1, r0
    // add r0, r2, #4
    // str r1, [r4, r0]
    // add r0, r2, #0
    // ldr r1, [sp, #4]
    // add r0, #8
    // str r1, [r4, r0]
    // sub r0, r2, #4
    // mov r1, #1
    // str r1, [r4, r0]
    // ldr r0, _02236A24 ; =ov74_0223E304
    // add r2, #0x10
    // str r1, [r0, #0x10]
    // mov r1, #0
    // add r0, r4, #0
    // str r1, [r4, r2]
    // bl ov74_02229E60
    // ldr r0, _02236A28 ; =0x0000100F
    // add sp, #8
    // pop {r4, pc}
    // _02236A20: .word 0x0000266C
    // _02236A24: .word ov74_0223E304
    // _02236A28: .word 0x0000100F
    // TODO: decompile
}



void ov74_02236A2C(void) {
    ov00_021EC724();
    // add r0, sp, #0
    ov00_021EC9E0();
}



void ov74_02236A54(void) {
    // push {r3, r4}
    // ldr r3, _02236A6C ; =ov74_0223E304
    // mov r4, #0
    // str r4, [r3]
    // str r4, [r3, #0xc]
    // ldr r3, _02236A70 ; =0x00001650
    // str r2, [r0, r3]
    // ldr r0, _02236A74 ; =0x00001012
    // str r0, [r1]
    // pop {r3, r4}
    // bx lr
    // nop
    // _02236A6C: .word ov74_0223E304
    // _02236A70: .word 0x00001650
    // _02236A74: .word 0x00001012
    // TODO: decompile
}



void ov74_02236A78(void) {
    // push {r3, r4, r5, lr}
    // add r4, r2, #0
    // ldr r2, _02236A9C ; =ov74_0223E304
    // mov r5, #0
    // str r5, [r2, #4]
    // str r1, [r2, #8]
    // ldr r1, _02236AA0 ; =0x00001650
    // str r3, [r0, r1]
    // ldr r0, _02236AA4 ; =0x00001013
    // str r0, [r4]
    // ldr r0, _02236AA8 ; =ov74_02236ABC
    // bl ov00_021ED308
    // cmp r0, #0
    // bne _02236A9A
    // ldr r0, [sp, #0x10]
    // str r0, [r4]
    // pop {r3, r4, r5, pc}
    // _02236A9C: .word ov74_0223E304
    // _02236AA0: .word 0x00001650
    // _02236AA4: .word 0x00001013
    // _02236AA8: .word ov74_02236ABC
    // TODO: decompile
}



void ov74_02236AAC(void) {
    // ldr r0, _02236AB8 ; =ov74_0223E304
    // mov r2, #1
    // str r2, [r0]
    // str r1, [r0, #0xc]
    // bx lr
    // nop
    // _02236AB8: .word ov74_0223E304
    // TODO: decompile
}



void ov74_02236ABC(void) {
    // ldr r0, _02236AC4 ; =ov74_0223E304
    // mov r1, #1
    // str r1, [r0, #4]
    // bx lr
    // _02236AC4: .word ov74_0223E304
    // TODO: decompile
}



void ov74_02236AC8(void) {
}



void ov74_02236AE0(void) {
    // push {r3, r4, r5, lr}
    // add r5, r1, #0
    // bl OverlayManager_GetData
    // add r4, r0, #0
    // ldr r0, _02236DE8 ; =0x0000267C
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // beq _02236B00
    // blx r0
    // cmp r0, #1
    // bne _02236B00
    // add r0, r4, #0
    // bl ov74_022369D8
    // str r0, [r5]
    // mov r3, #1
    // ldr r0, [r5]
    // lsl r3, r3, #0xc
    // sub r0, r0, r3
    // cmp r0, #0x13
    // bls _02236B0E
    // b _02236F0A
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _02236B1A: ; jump table
    // bl sub_02034D8C
    // bl LoadDwcOverlay
    // bl LoadOVY38
    // mov r0, #3
    // bl sub_02039FD8
    // ldr r0, _02236DEC ; =0x00001001
    // str r0, [r5]
    // b _02236F0A
    // bl sub_02034DB8
    // cmp r0, #0
    // beq _02236C3E
    // ldr r0, _02236DF0 ; =ov74_022369A8
    // ldr r1, _02236DF4 ; =ov74_022369C8
    // bl ov00_021EC294
    // ldr r0, [r4, #4]
    // bl sub_020394A0
    // ldr r0, _02236DF8 ; =0x00001002
    // str r0, [r5]
    // b _02236F0A
    // ldr r0, _02236DFC ; =0x000015E8
    // mov r1, #2
    // add r0, r4, r0
    // mov r2, #1
    // mov r3, #0x14
    // bl ov00_021EC3F0
    // mov r0, #2
    // bl ov00_021EC454
    // bl ov00_021EC4A4
    // bl sub_0203A880
    // ldr r0, _02236E00 ; =0x00001003
    // mov r1, #0
    // str r0, [r5]
    // ldr r0, _02236E04 ; =0x00002678
    // str r1, [r4, r0]
    // b _02236F0A
    // bl ov00_021EC60C
    // bl ov00_021EC5B4
    // cmp r0, #0
    // beq _02236BD6
    // add r0, r4, #0
    // bl ov74_02236A2C
    // cmp r0, #1
    // bne _02236BCE
    // ldr r0, _02236E04 ; =0x00002678
    // ldr r0, [r4, r0]
    // cmp r0, #1
    // bne _02236BC8
    // ldr r0, _02236E08 ; =ov74_0223E304
    // mov r1, #3
    // str r1, [r0, #8]
    // ldr r0, _02236E0C ; =0x0000100D
    // str r0, [r5]
    // b _02236BD6
    // ldr r0, _02236E10 ; =0x00001004
    // str r0, [r5]
    // b _02236BD6
    // add r0, r4, #0
    // bl ov74_022369D8
    // str r0, [r5]
    // ldr r0, _02236E14 ; =gSystem
    // ldr r1, [r0, #0x48]
    // mov r0, #2
    // tst r0, r1
    // beq _02236C3E
    // ldr r0, _02236E04 ; =0x00002678
    // mov r1, #1
    // str r1, [r4, r0]
    // b _02236F0A
    // bl ov00_021ECD04
    // cmp r0, #0
    // bne _02236BFA
    // add r0, r4, #0
    // bl ov74_022369D8
    // str r0, [r5]
    // b _02236F0A
    // ldr r0, _02236E18 ; =0x00001005
    // str r0, [r5]
    // b _02236F0A
    // bl ov00_021ECDC8
    // cmp r0, #3
    // bne _02236C14
    // ldr r0, _02236E1C ; =0x00001006
    // ldr r1, _02236E20 ; =ov00_021ECB40
    // str r0, [r5]
    // ldr r0, _02236DE8 ; =0x0000267C
    // str r1, [r4, r0]
    // b _02236C34
    // cmp r0, #4
    // bne _02236C26
    // add r0, r4, #0
    // bl ov74_022369D8
    // str r0, [r5]
    // bl ov00_021EC8D8
    // b _02236C34
    // cmp r0, #5
    // bne _02236C34
    // ldr r0, _02236E08 ; =ov74_0223E304
    // mov r1, #3
    // str r1, [r0, #8]
    // ldr r0, _02236E0C ; =0x0000100D
    // str r0, [r5]
    // ldr r0, _02236E14 ; =gSystem
    // ldr r1, [r0, #0x48]
    // mov r0, #2
    // tst r0, r1
    // bne _02236C40
    // b _02236F0A
    // bl ov00_021ECEC0
    // b _02236F0A
    // ldr r0, _02236E24 ; =ov74_02236AAC
    // ldr r1, _02236E28 ; =ov74_0223D038
    // ldr r2, _02236E2C ; =ov74_0223D040
    // bl ov00_021ED1F0
    // cmp r0, #0
    // bne _02236C5E
    // add r0, r4, #0
    // bl ov74_022369D8
    // str r0, [r5]
    // b _02236F0A
    // ldr r2, _02236E30 ; =0x00001007
    // add r0, r4, #0
    // add r1, r5, #0
    // bl ov74_02236A54
    // b _02236F0A
    // ldr r0, _02236E04 ; =0x00002678
    // ldr r0, [r4, r0]
    // cmp r0, #1
    // bne _02236C82
    // add r3, #0xc
    // add r0, r4, #0
    // mov r1, #3
    // add r2, r5, #0
    // str r3, [sp]
    // bl ov74_02236A78
    // b _02236F0A
    // ldr r0, _02236E34 ; =ov74_0223D054
    // add r1, r0, #0
    // add r2, r0, #0
    // bl ov00_021ED354
    // cmp r0, #0
    // bne _02236C9A
    // add r0, r4, #0
    // bl ov74_022369D8
    // str r0, [r5]
    // b _02236F0A
    // ldr r0, _02236E38 ; =0x00001008
    // str r0, [r5]
    // b _02236F0A
    // ldr r0, _02236E3C ; =0x00001654
    // add r0, r4, r0
    // bl ov00_021ED388
    // cmp r0, #0
    // bne _02236CB6
    // add r0, r4, #0
    // bl ov74_022369D8
    // str r0, [r5]
    // b _02236F0A
    // ldr r2, _02236E40 ; =0x00001009
    // add r0, r4, #0
    // add r1, r5, #0
    // bl ov74_02236A54
    // b _02236F0A
    // ldr r0, _02236E3C ; =0x00001654
    // ldr r0, [r4, r0]
    // cmp r0, #1
    // beq _02236CDA
    // add r3, #0xd
    // add r0, r4, #0
    // mov r1, #2
    // add r2, r5, #0
    // str r3, [sp]
    // bl ov74_02236A78
    // b _02236F0A
    // ldr r0, _02236E44 ; =ov74_0223E318
    // mov r1, #0
    // mov r2, #0xa
    // bl ov00_021ED3AC
    // cmp r0, #0
    // bne _02236CF2
    // add r0, r4, #0
    // bl ov74_022369D8
    // str r0, [r5]
    // b _02236F0A
    // ldr r2, _02236E48 ; =0x0000100A
    // add r0, r4, #0
    // add r1, r5, #0
    // bl ov74_02236A54
    // b _02236F0A
    // ldr r1, _02236E4C ; =0x00001658
    // ldr r0, _02236E44 ; =ov74_0223E318
    // add r1, r4, r1
    // add r2, r3, #0
    // bl ov00_021ED3F4
    // cmp r0, #0
    // bne _02236D18
    // add r0, r4, #0
    // bl ov74_022369D8
    // str r0, [r5]
    // b _02236F0A
    // ldr r0, _02236E50 ; =0x0000100B
    // mov r1, #0
    // str r0, [r5]
    // ldr r0, _02236E54 ; =0x00002664
    // str r1, [r4, r0]
    // b _02236F0A
    // ldr r0, _02236E08 ; =ov74_0223E304
    // ldr r1, [r0]
    // cmp r1, #0
    // bne _02236D72
    // ldr r0, _02236E14 ; =gSystem
    // ldr r1, [r0, #0x48]
    // mov r0, #2
    // tst r0, r1
    // beq _02236D46
    // add r3, #0xc
    // add r0, r4, #0
    // mov r1, #3
    // add r2, r5, #0
    // str r3, [sp]
    // bl ov74_02236A78
    // b _02236F0A
    // ldr r1, _02236E58 ; =0x0000265C
    // add r0, r4, r1
    // add r1, r1, #4
    // add r1, r4, r1
    // bl ov00_021ED444
    // cmp r0, #1
    // bne _02236DD0
    // ldr r1, _02236E58 ; =0x0000265C
    // mov r0, #0x64
    // ldr r2, [r4, r1]
    // add r1, r1, #4
    // ldr r1, [r4, r1]
    // mul r0, r2
    // bl _u32_div_f
    // ldr r1, _02236E54 ; =0x00002664
    // ldr r2, [r4, r1]
    // cmp r2, r0
    // beq _02236DD0
    // str r0, [r4, r1]
    // b _02236F0A
    // ldr r0, [r0, #0xc]
    // cmp r0, #0
    // beq _02236D82
    // add r0, r4, #0
    // bl ov74_022369D8
    // str r0, [r5]
    // b _02236F0A
    // ldr r0, _02236E04 ; =0x00002678
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // bne _02236D9A
    // add r3, #0xd
    // add r0, r4, #0
    // mov r1, #1
    // add r2, r5, #0
    // str r3, [sp]
    // bl ov74_02236A78
    // b _02236F0A
    // add r3, #0xd
    // add r0, r4, #0
    // mov r1, #3
    // add r2, r5, #0
    // str r3, [sp]
    // bl ov74_02236A78
    // b _02236F0A
    // bl ov00_021ED428
    // cmp r0, #0
    // bne _02236DB8
    // ldr r0, _02236E0C ; =0x0000100D
    // str r0, [r5]
    // b _02236F0A
    // ldr r0, _02236DE8 ; =0x0000267C
    // mov r1, #0
    // str r1, [r4, r0]
    // bl ov74_02236AC8
    // ldr r0, _02236E08 ; =ov74_0223E304
    // ldr r0, [r0, #8]
    // pop {r3, r4, r5, pc}
    // bl ov00_021EC938
    // cmp r0, #1
    // beq _02236DD2
    // b _02236F0A
    // ldr r0, _02236DE8 ; =0x0000267C
    // mov r1, #0
    // str r1, [r4, r0]
    // bl ov74_02236AC8
    // ldr r0, _02236E08 ; =ov74_0223E304
    // ldr r0, [r0, #8]
    // pop {r3, r4, r5, pc}
    // ldr r0, _02236E08 ; =ov74_0223E304
    // b _02236E5C
    // nop
    // _02236DE8: .word 0x0000267C
    // _02236DEC: .word 0x00001001
    // _02236DF0: .word ov74_022369A8
    // _02236DF4: .word ov74_022369C8
    // _02236DF8: .word 0x00001002
    // _02236DFC: .word 0x000015E8
    // _02236E00: .word 0x00001003
    // _02236E04: .word 0x00002678
    // _02236E08: .word ov74_0223E304
    // _02236E0C: .word 0x0000100D
    // _02236E10: .word 0x00001004
    // _02236E14: .word gSystem
    // _02236E18: .word 0x00001005
    // _02236E1C: .word 0x00001006
    // _02236E20: .word ov00_021ECB40
    // _02236E24: .word ov74_02236AAC
    // _02236E28: .word ov74_0223D038
    // _02236E2C: .word ov74_0223D040
    // _02236E30: .word 0x00001007
    // _02236E34: .word ov74_0223D054
    // _02236E38: .word 0x00001008
    // _02236E3C: .word 0x00001654
    // _02236E40: .word 0x00001009
    // _02236E44: .word ov74_0223E318
    // _02236E48: .word 0x0000100A
    // _02236E4C: .word 0x00001658
    // _02236E50: .word 0x0000100B
    // _02236E54: .word 0x00002664
    // _02236E58: .word 0x0000265C
    // ldr r0, [r0, #0x10]
    // cmp r0, #1
    // bne _02236F0A
    // add r0, r4, #0
    // bl ov74_0222ACD8
    // ldr r0, _02236F10 ; =0x00002674
    // ldr r0, [r4, r0]
    // sub r0, r0, #5
    // cmp r0, #1
    // bhi _02236E84
    // ldr r3, _02236F14 ; =0x00001010
    // add r0, r4, #0
    // str r3, [sp]
    // mov r1, #3
    // add r2, r5, #0
    // add r3, r3, #1
    // bl ov74_02236A78
    // b _02236F0A
    // ldr r0, _02236F18 ; =0x00001011
    // str r0, [r5]
    // b _02236F0A
    // bl ov00_021EC8D8
    // ldr r0, _02236F14 ; =0x00001010
    // str r0, [r5]
    // b _02236F0A
    // ldr r0, _02236F1C ; =gSystem
    // ldr r1, [r0, #0x48]
    // mov r0, #1
    // tst r0, r1
    // beq _02236F0A
    // ldr r0, _02236F20 ; =0x0000267C
    // mov r1, #0
    // str r1, [r4, r0]
    // bl ov00_021EC210
    // bl ov74_02236AC8
    // mov r0, #4
    // pop {r3, r4, r5, pc}
    // ldr r0, _02236F24 ; =ov74_0223E304
    // ldr r1, [r0]
    // cmp r1, #1
    // bne _02236ED4
    // mov r1, #0
    // str r1, [r0]
    // ldr r0, [r0, #0xc]
    // cmp r0, #0
    // beq _02236ECC
    // add r0, r4, #0
    // bl ov74_022369D8
    // str r0, [r5]
    // b _02236F0A
    // ldr r0, _02236F28 ; =0x00001650
    // ldr r0, [r4, r0]
    // str r0, [r5]
    // b _02236F0A
    // ldr r0, _02236F1C ; =gSystem
    // ldr r1, [r0, #0x48]
    // mov r0, #2
    // tst r0, r1
    // beq _02236F0A
    // ldr r0, _02236F2C ; =0x00002678
    // mov r1, #1
    // str r1, [r4, r0]
    // b _02236F0A
    // ldr r0, _02236F24 ; =ov74_0223E304
    // ldr r1, [r0, #4]
    // cmp r1, #1
    // bne _02236EFA
    // mov r1, #0
    // str r1, [r0, #4]
    // ldr r0, _02236F28 ; =0x00001650
    // ldr r0, [r4, r0]
    // str r0, [r5]
    // b _02236F0A
    // ldr r0, _02236F1C ; =gSystem
    // ldr r1, [r0, #0x48]
    // mov r0, #2
    // tst r0, r1
    // beq _02236F0A
    // ldr r0, _02236F2C ; =0x00002678
    // mov r1, #1
    // str r1, [r4, r0]
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // nop
    // _02236F10: .word 0x00002674
    // _02236F14: .word 0x00001010
    // _02236F18: .word 0x00001011
    // _02236F1C: .word gSystem
    // _02236F20: .word 0x0000267C
    // _02236F24: .word ov74_0223E304
    // _02236F28: .word 0x00001650
    // _02236F2C: .word 0x00002678
    // TODO: decompile
}



void ov74_02236F30(void) {
    // cmp r0, #1
    // bne _02236F38
    // mov r0, #1
    // b _02236F3A
    // ldr r0, _02236F40 ; =0x000001DE
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // bx lr
    // _02236F40: .word 0x000001DE
    // TODO: decompile
}



void ov74_02236F44(void) {
    // cmp r0, #7
    // bhi _02236F64
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _02236F54: ; jump table
    // mov r0, #0xea
    // bx lr
    // mov r0, #0x6d
    // lsl r0, r0, #2
    // bx lr
    // ldr r0, _02236F78 ; =0x000001B7
    // bx lr
    // ldr r0, _02236F7C ; =0x000001B6
    // bx lr
    // nop
    // _02236F78: .word 0x000001B7
    // _02236F7C: .word 0x000001B6
    // TODO: decompile
}



void ov74_02236F80(void) {
    // cmp r0, #7
    // bhi _02236FA0
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _02236F90: ; jump table
    // mov r0, #0xeb
    // bx lr
    // ldr r0, _02236FB4 ; =0x000001B5
    // bx lr
    // mov r0, #0x6e
    // lsl r0, r0, #2
    // bx lr
    // mov r0, #0x6d
    // lsl r0, r0, #2
    // bx lr
    // _02236FB4: .word 0x000001B5
    // TODO: decompile
}



void ConvertRSStringToDPStringInternational(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // add r5, r3, #0
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r2, [sp, #8]
    // cmp r5, #1
    // beq _02236FCC
    // mov r2, #1
    // b _02236FCE
    // mov r2, #0
    // ldr r0, [sp, #8]
    // mov r6, #0
    // sub r0, r0, #1
    // str r0, [sp, #0xc]
    // beq _02237056
    // ldr r1, _02237064 ; =_0223B760
    // lsl r0, r2, #1
    // ldr r4, [sp, #4]
    // add r7, r1, r0
    // ldr r0, [sp]
    // ldrb r0, [r0, r6]
    // cmp r0, #0xff
    // beq _02237056
    // cmp r0, #0xf7
    // blo _0223701A
    // ldr r0, [sp, #8]
    // sub r3, r0, #1
    // cmp r3, #0xa
    // blo _02236FF6
    // mov r3, #0xa
    // mov r1, #0
    // cmp r3, #0
    // ble _0223700C
    // mov r0, #0x6b
    // ldr r2, [sp, #4]
    // lsl r0, r0, #2
    // add r1, r1, #1
    // strh r0, [r2]
    // add r2, r2, #2
    // cmp r1, r3
    // blt _02237002
    // ldr r0, [sp, #4]
    // ldr r2, _02237068 ; =0x0000FFFF
    // lsl r1, r1, #1
    // strh r2, [r0, r1]
    // add sp, #0x10
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // lsl r0, r0, #2
    // ldrh r0, [r7, r0]
    // cmp r0, #1
    // beq _0223702C
    // cmp r0, #0xea
    // beq _02237036
    // cmp r0, #0xeb
    // beq _02237040
    // b _0223704A
    // add r0, r5, #0
    // bl ov74_02236F30
    // strh r0, [r4]
    // b _0223704C
    // add r0, r5, #0
    // bl ov74_02236F44
    // strh r0, [r4]
    // b _0223704C
    // add r0, r5, #0
    // bl ov74_02236F80
    // strh r0, [r4]
    // b _0223704C
    // strh r0, [r4]
    // ldr r0, [sp, #0xc]
    // add r6, r6, #1
    // add r4, r4, #2
    // cmp r6, r0
    // blo _02236FE0
    // ldr r2, _02237068 ; =0x0000FFFF
    // ldr r0, [sp, #4]
    // lsl r1, r6, #1
    // strh r2, [r0, r1]
    // mov r0, #1
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // _02237064: .word _0223B760
    // _02237068: .word 0x0000FFFF
    // TODO: decompile
}


