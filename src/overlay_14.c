/* Decompiled from asm/overlay_14.s */
#include "global.h"

BOOL PCBox_Init(void) {
    Heap_Create(3, 9, (1 << 0x10));
    OverlayManager_CreateAndGetData(r5, 0x38, 9);
    MI_CpuFill8(0, 0x38);
    OverlayManager_GetArgs(r5);
    // str r0, [r4]
    SaveArray_PCStorage_Get(*((u32*)r0));
    *((u32*)(r4 + 4)) = r0;
    PCStorage_GetActiveBox();
    *((u8*)(r4 + 0x1f)) = r0;
    SaveArray_Party_Get(*((u32*)*((u32*)r4)));
    *((u32*)(r4 + 8)) = r0;
    Save_Bag_Get(*((u32*)*((u32*)r4)));
    *((u32*)(r4 + 0xc)) = r0;
    Save_PlayerData_GetOptionsAddr(*((u32*)*((u32*)r4)));
    *((u32*)(r4 + 0x10)) = r0;
    // add r0, #0x21
    // strb r1, [r0]
    *((u32*)(r4 + 0x2c)) = 0;
    *((u32*)(r4 + 0x30)) = 0xb;
}




BOOL PCBox_Main(void) {
    OverlayManager_GetData();
    ov14_021EAF8C(r4);
}




u32 PCBox_Exit(void) {
}




void ov14_021E59AC(void) {
    // push {r4, lr}
    // add r4, r1, #0
    // ldr r0, [r4, #0x34]
    // ldr r1, [r0, #4]
    // cmp r1, #0
    // beq _021E59C6
    // add r0, r4, #0
    // blx r1
    // cmp r0, #0
    // bne _021E59C6
    // ldr r0, [r4, #0x34]
    // mov r1, #0
    // str r1, [r0, #4]
    // add r0, r4, #0
    // bl ov14_021E5A14
    // ldr r0, [r4, #0x34]
    // ldr r0, [r0, #0x18]
    // bl PaletteData_PushTransparentBuffers
    // ldr r0, [r4, #0x34]
    // ldr r0, [r0, #0x14]
    // bl DoScheduledBgGpuUpdates
    // ldr r0, [r4, #0x34]
    // bl ov14_021F29C4
    // ldr r1, [r4, #0x34]
    // ldr r0, _021E5A08 ; =0x000088D2
    // ldrh r0, [r1, r0]
    // cmp r0, #0
    // bne _021E59FA
    // mov r0, #0xbe
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // bl SpriteSystem_DrawSprites
    // bl SpriteSystem_TransferOam
    // ldr r3, _021E5A0C ; =0x027E0000
    // ldr r1, _021E5A10 ; =0x00003FF8
    // mov r0, #1
    // ldr r2, [r3, r1]
    // orr r0, r2
    // str r0, [r3, r1]
    // pop {r4, pc}
    // _021E5A08: .word 0x000088D2
    // _021E5A0C: .word 0x027E0000
    // _021E5A10: .word 0x00003FF8
    // TODO: decompile
}




void ov14_021E5A14(void) {
    // ldr r0, [r1, r0]
    sub_02019978((0x2f << 4), 0x10);
    // ldr r0, [r1, r0]
    sub_02019978((0x2f << 4), 0x10);
    ov14_021F3BC0(*((u32*)(r4 + 0x34)));
}




void ov14_021E5A44(void) {
}




void ov14_021E5A50(void) {
}




void ov14_021E5A54(void) {
}




void ov14_021E5A60(void) {
    // ldr r3, _021E5A68 ; =GfGfx_SetBanks
    // ldr r0, _021E5A6C ; =ov14_021F7CE4
    // bx r3
    // nop
    // _021E5A68: .word GfGfx_SetBanks
    // _021E5A6C: .word ov14_021F7CE4
    // TODO: decompile
}




void ov14_021E5A70(void) {
    // push {r4, r5, lr}
    // sub sp, #0xd4
    // add r4, r0, #0
    // mov r0, #0xa
    // bl BgConfig_Alloc
    // ldr r1, [r4, #0x34]
    // add r3, sp, #0xc4
    // ldr r5, _021E5BE0 ; =ov14_021F7BC8
    // str r0, [r1, #0x14]
    // add r2, r3, #0
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // add r0, r2, #0
    // bl SetBothScreensModesAndDisable
    // ldr r5, _021E5BE4 ; =ov14_021F7C20
    // add r3, sp, #0xa8
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
    // ldr r0, [r4, #0x34]
    // add r3, r1, #0
    // ldr r0, [r0, #0x14]
    // bl InitBgFromTemplate
    // ldr r0, [r4, #0x34]
    // mov r1, #0
    // ldr r0, [r0, #0x14]
    // bl BgClearTilemapBufferAndCommit
    // mov r0, #0
    // mov r1, #0x20
    // add r2, r0, #0
    // mov r3, #0xa
    // bl BG_ClearCharDataRange
    // ldr r5, _021E5BE8 ; =ov14_021F7C3C
    // add r3, sp, #0x8c
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
    // ldr r0, [r4, #0x34]
    // mov r3, #0
    // ldr r0, [r0, #0x14]
    // bl InitBgFromTemplate
    // ldr r0, [r4, #0x34]
    // mov r1, #1
    // ldr r0, [r0, #0x14]
    // bl BgClearTilemapBufferAndCommit
    // mov r0, #1
    // mov r1, #0x20
    // mov r2, #0
    // mov r3, #0xa
    // bl BG_ClearCharDataRange
    // ldr r5, _021E5BEC ; =ov14_021F7C74
    // add r3, sp, #0x70
    // ldmia r5!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // str r0, [r3]
    // ldr r0, [r4, #0x34]
    // mov r1, #2
    // ldr r0, [r0, #0x14]
    // mov r3, #0
    // bl InitBgFromTemplate
    // ldr r5, _021E5BF0 ; =ov14_021F7C90
    // add r3, sp, #0x54
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
    // ldr r0, [r4, #0x34]
    // mov r3, #0
    // ldr r0, [r0, #0x14]
    // bl InitBgFromTemplate
    // ldr r5, _021E5BF4 ; =ov14_021F7C58
    // add r3, sp, #0x38
    // ldmia r5!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // mov r1, #4
    // str r0, [r3]
    // ldr r0, [r4, #0x34]
    // mov r3, #0
    // ldr r0, [r0, #0x14]
    // bl InitBgFromTemplate
    // ldr r0, [r4, #0x34]
    // mov r1, #4
    // ldr r0, [r0, #0x14]
    // bl BgClearTilemapBufferAndCommit
    // mov r0, #4
    // mov r1, #0x20
    // mov r2, #0
    // mov r3, #0xa
    // bl BG_ClearCharDataRange
    // ldr r5, _021E5BF8 ; =ov14_021F7CAC
    // add r3, sp, #0x1c
    // ldmia r5!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // mov r1, #5
    // str r0, [r3]
    // ldr r0, [r4, #0x34]
    // mov r3, #0
    // ldr r0, [r0, #0x14]
    // bl InitBgFromTemplate
    // ldr r5, _021E5BFC ; =ov14_021F7CC8
    // add r3, sp, #0
    // ldmia r5!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // mov r1, #6
    // str r0, [r3]
    // ldr r0, [r4, #0x34]
    // mov r3, #0
    // ldr r0, [r0, #0x14]
    // bl InitBgFromTemplate
    // ldr r0, [r4, #0x34]
    // mov r1, #6
    // ldr r0, [r0, #0x14]
    // bl BgClearTilemapBufferAndCommit
    // mov r0, #6
    // mov r1, #0x20
    // mov r2, #0
    // mov r3, #0xa
    // bl BG_ClearCharDataRange
    // add sp, #0xd4
    // pop {r4, r5, pc}
    // nop
    // _021E5BE0: .word ov14_021F7BC8
    // _021E5BE4: .word ov14_021F7C20
    // _021E5BE8: .word ov14_021F7C3C
    // _021E5BEC: .word ov14_021F7C74
    // _021E5BF0: .word ov14_021F7C90
    // _021E5BF4: .word ov14_021F7C58
    // _021E5BF8: .word ov14_021F7CAC
    // _021E5BFC: .word ov14_021F7CC8
    // TODO: decompile
}




void ov14_021E5C00(void) {
}




void ov14_021E5C54(void) {
    // str r3, [sp]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharData(0x13, 0xe, *((u32*)(*((u32*)(r0 + 0x34)) + 0x14)), 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r3, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharData(0x13, 0xe, *((u32*)(*((u32*)(r4 + 0x34)) + 0x14)), 1);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharData(0x13, 3, *((u32*)(*((u32*)(r4 + 0x34)) + 0x14)), 2);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnData(0x13, 2, *((u32*)(*((u32*)(r4 + 0x34)) + 0x14)), 2);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharData(0x13, 1, *((u32*)(*((u32*)(r4 + 0x34)) + 0x14)), 3);
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnData(0x13, 0, *((u32*)(*((u32*)(r4 + 0x34)) + 0x14)), 3);
    // str r0, [sp]
    // str r0, [sp, #4]
    GfGfxLoader_GXLoadPal(0x13, 4, 0, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharData(0x13, 6, *((u32*)(*((u32*)(r4 + 0x34)) + 0x14)), 5);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnData(0x13, 5, *((u32*)(*((u32*)(r4 + 0x34)) + 0x14)), 5);
    // str r3, [sp]
    // str r0, [sp, #4]
    GfGfxLoader_GXLoadPal(0x13, 7, 4, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharData(0x13, 6, *((u32*)(*((u32*)(r4 + 0x34)) + 0x14)), 6);
}




void ov14_021E5D78(void) {
    NewMsgDataFromNarc(0, 0x1b, 0x18, 0xa);
    *((u32*)(*((u32*)(r4 + 0x34)) + 0x20)) = r0;
    MessagePrinter_New(1, 2, 0, 0xa);
    *((u32*)(*((u32*)(r4 + 0x34)) + 0x1c)) = r0;
    MessageFormat_New(0xa, *((u32*)(r4 + 0x34)));
    *((u32*)(*((u32*)(r4 + 0x34)) + 0x24)) = r0;
    String_New((1 << 0xa), 0xa);
    *((u32*)(*((u32*)(r4 + 0x34)) + 0x28)) = r0;
}




void ov14_021E5DB8(void) {
}




void ov14_021E5DE0(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // mov r0, #0xfa
    // ldr r4, [r5, #0x34]
    // lsl r0, r0, #2
    // str r0, [sp]
    // sub r0, #0xe8
    // str r0, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // mov r0, #0xa
    // str r0, [sp, #0xc]
    // ldr r2, [r4, #0x14]
    // mov r0, #0x13
    // mov r1, #0x40
    // mov r3, #0
    // bl GfGfxLoader_LoadCharData
    // mov r0, #0xfa
    // lsl r0, r0, #2
    // str r0, [sp]
    // sub r0, #0xe8
    // str r0, [sp, #4]
    // mov r3, #1
    // str r3, [sp, #8]
    // mov r0, #0xa
    // str r0, [sp, #0xc]
    // ldr r2, [r4, #0x14]
    // mov r0, #0x13
    // mov r1, #0x40
    // bl GfGfxLoader_LoadCharData
    // mov r0, #0x40
    // str r0, [sp]
    // mov r0, #0xa
    // mov r3, #6
    // str r0, [sp, #4]
    // mov r0, #0x13
    // mov r1, #0x41
    // mov r2, #0
    // lsl r3, r3, #6
    // bl GfGfxLoader_GXLoadPal
    // ldr r0, [r5, #0x10]
    // bl Options_GetFrame
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp]
    // mov r3, #0xa
    // str r3, [sp, #4]
    // ldr r0, [r4, #0x14]
    // ldr r2, _021E5E70 ; =0x0000038E
    // mov r1, #0
    // bl LoadUserFrameGfx2
    // mov r1, #0x16
    // mov r0, #0
    // lsl r1, r1, #4
    // mov r2, #0xa
    // bl LoadFontPal1
    // mov r1, #0x1e
    // mov r0, #4
    // lsl r1, r1, #4
    // mov r2, #0xa
    // bl LoadFontPal0
    // add sp, #0x10
    // pop {r3, r4, r5, pc}
    // nop
    // _021E5E70: .word 0x0000038E
    // TODO: decompile
}




void ov14_021E5E74(void) {
    PaletteData_Init(0xa);
    *((u32*)(*((u32*)(r4 + 0x34)) + 0x18)) = r0;
    PaletteData_AllocBuffers(*((u32*)(*((u32*)(r4 + 0x34)) + 0x18)), 0, (2 << 8), 0xa);
}




void ov14_021E5E94(void) {
}




void ov14_021E5EAC(void) {
    // push {r3, lr}
    // cmp r0, #1
    // bne _021E5EC4
    // mov r0, #0xa
    // str r0, [sp]
    // ldr r0, _021E5ECC ; =0x04000050
    // mov r1, #0
    // mov r2, #0x2a
    // mov r3, #6
    // bl G2x_SetBlendAlpha_
    // pop {r3, pc}
    // ldr r0, _021E5ECC ; =0x04000050
    // mov r1, #0
    // strh r1, [r0]
    // pop {r3, pc}
    // _021E5ECC: .word 0x04000050
    // TODO: decompile
}




void ov14_021E5ED0(void) {
}




void ov14_021E5EE8(void) {
    // ldr r1, [r0, #0x34]
    // ldr r0, _021E5EF4 ; =0x00000434
    // ldr r3, _021E5EF8 ; =YesNoPrompt_Destroy
    // ldr r0, [r1, r0]
    // bx r3
    // nop
    // _021E5EF4: .word 0x00000434
    // _021E5EF8: .word YesNoPrompt_Destroy
    // TODO: decompile
}




void ov14_021E5EFC(void) {
    // str r2, [sp]
    // str r4, [sp, #8]
    // str r2, [sp, #0xc]
    // str r5, [sp, #4]
    // add r2, sp, #0
    *((u8*)(8 + 0x10)) = 0x19;
    *((u8*)(8 + 0x11)) = 0xc;
    // bic r6, r3
    *((u8*)(8 + 0x12)) = *((u8*)(8 + 0x12));
    // add r4, #0x88
    // bic r3, r6
    // orr r1, r3
    *((u8*)(8 + 0x12)) = ((((r1 << 0x18) >> 0x18) << 0x1c) >> 0x18);
    *((u8*)(8 + 0x13)) = 0;
    // add r1, sp, #0
    // ldr r0, [r0, r4]
    YesNoPrompt_InitFromTemplate(*((u32*)(r0 + 0x34)), ((((r1 << 0x18) >> 0x18) << 0x1c) >> 0x18), 8, *((u8*)(8 + 0x12)));
}




void ov14_021E5F4C(void) {
    // push {r4, r5, lr}
    // sub sp, #0xc
    // add r5, r0, #0
    // ldr r0, [r5, #0x34]
    // ldr r1, _021E6044 ; =0x000088D4
    // add r4, r0, r1
    // ldrb r1, [r4, #2]
    // cmp r1, #0
    // beq _021E5F68
    // cmp r1, #1
    // beq _021E5FC0
    // cmp r1, #2
    // beq _021E602C
    // b _021E603E
    // ldrb r1, [r4]
    // lsl r2, r1, #0x1f
    // lsr r2, r2, #0x1f
    // bne _021E5F8A
    // lsl r1, r1, #0x18
    // lsr r1, r1, #0x19
    // lsl r1, r1, #2
    // add r1, r0, r1
    // mov r0, #0xbf
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // ldrb r1, [r4, #1]
    // lsl r1, r1, #0x1c
    // lsr r1, r1, #0x1c
    // bl ManagedSprite_SetPaletteOverride
    // b _021E5FB8
    // ldrb r1, [r4, #6]
    // str r1, [sp]
    // ldrb r1, [r4, #7]
    // str r1, [sp, #4]
    // ldrb r1, [r4, #1]
    // lsl r1, r1, #0x1c
    // lsr r1, r1, #0x1c
    // str r1, [sp, #8]
    // ldrb r1, [r4]
    // ldrb r2, [r4, #4]
    // ldrb r3, [r4, #5]
    // lsl r1, r1, #0x18
    // ldr r0, [r0, #0x14]
    // lsr r1, r1, #0x19
    // bl BgTilemapRectChangePalette
    // ldrb r1, [r4]
    // ldr r0, [r5, #0x34]
    // lsl r1, r1, #0x18
    // ldr r0, [r0, #0x14]
    // lsr r1, r1, #0x19
    // bl ScheduleBgTilemapBufferTransfer
    // ldrb r0, [r4, #2]
    // add r0, r0, #1
    // strb r0, [r4, #2]
    // b _021E603E
    // ldrb r0, [r4, #3]
    // add r0, r0, #1
    // strb r0, [r4, #3]
    // ldrb r0, [r4, #3]
    // cmp r0, #4
    // bne _021E603E
    // ldrb r0, [r4]
    // lsl r1, r0, #0x1f
    // lsr r1, r1, #0x1f
    // bne _021E5FF0
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x19
    // ldr r1, [r5, #0x34]
    // lsl r0, r0, #2
    // add r1, r1, r0
    // mov r0, #0xbf
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // ldrb r1, [r4, #1]
    // lsl r1, r1, #0x18
    // lsr r1, r1, #0x1c
    // bl ManagedSprite_SetPaletteOverride
    // b _021E6020
    // ldrb r0, [r4, #6]
    // str r0, [sp]
    // ldrb r0, [r4, #7]
    // str r0, [sp, #4]
    // ldrb r0, [r4, #1]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x1c
    // str r0, [sp, #8]
    // ldrb r1, [r4]
    // ldr r0, [r5, #0x34]
    // ldrb r2, [r4, #4]
    // lsl r1, r1, #0x18
    // ldrb r3, [r4, #5]
    // ldr r0, [r0, #0x14]
    // lsr r1, r1, #0x19
    // bl BgTilemapRectChangePalette
    // ldrb r1, [r4]
    // ldr r0, [r5, #0x34]
    // lsl r1, r1, #0x18
    // ldr r0, [r0, #0x14]
    // lsr r1, r1, #0x19
    // bl ScheduleBgTilemapBufferTransfer
    // mov r0, #0
    // strb r0, [r4, #3]
    // ldrb r0, [r4, #2]
    // add r0, r0, #1
    // strb r0, [r4, #2]
    // b _021E603E
    // ldrb r0, [r4, #3]
    // add r0, r0, #1
    // strb r0, [r4, #3]
    // ldrb r0, [r4, #3]
    // cmp r0, #2
    // bne _021E603E
    // add sp, #0xc
    // mov r0, #0
    // pop {r4, r5, pc}
    // mov r0, #1
    // add sp, #0xc
    // pop {r4, r5, pc}
    // _021E6044: .word 0x000088D4
    // TODO: decompile
}




void ov14_021E6048(void) {
    GridInputHandler_IsButtonInputMode(*((u32*)(*((u32*)(r0 + 0x34)) + 0x2c)));
    MenuInputStateMgr_SetState(*((u32*)(*((u32*)r4) + 4)), 0);
    MenuInputStateMgr_SetState(*((u32*)(r0 + 4)), 1);
}




void ov14_021E6070(void) {
    ov14_021E60C0(*((u8*)(r0 + 0x1f)), r1);
    GetBoxMonData(0, r5, r4);
}




void ov14_021E6094(void) {
    ov14_021E60C0(*((u8*)(r0 + 0x1f)), r1);
    SetBoxMonData(r6, r7);
    PCStorage_SetBoxModified(*((u32*)(r5 + 4)), *((u8*)(r5 + 0x1f)));
}




void ov14_021E60C0(void) {
    // sub r4, #0x1e
    Party_GetCount(*((u32*)(r0 + 8)));
    Party_GetMonByIndex(*((u32*)(r5 + 8)), r4);
    Mon_GetBoxMon();
    PCStorage_GetMonByIndexPair(*((u32*)(r5 + 4)));
}




void ov14_021E6100(void) {
    PCStorage_DeleteBoxMonByIndexPair(*((u32*)(r0 + 4)));
    // sub r2, #0x1e
    Party_RemoveMon(*((u32*)(r0 + 8)), r2);
}




void ov14_021E611C(void) {
    ov14_021E60C0(*((u8*)(r0 + 0x1f)), *((u32*)(r1 + 4)));
    CopyBoxPokemonToPokemon(*((u32*)r6));
    // sub r7, #0x1e
    Party_GetMonByIndex(*((u32*)(r5 + 8)), *((u32*)(r4 + 4)));
    CopyPokemonToPokemon(*((u32*)r4));
    // add r0, sp, #0
    // strb r1, [r0]
    // mov r1, #MON_DATA_MOOD
    // add r2, sp, #0
    SetMonData(*((u32*)r4), 0);
    Party_SafeCopyMonToSlot_ResetAprijuiceModifiers(*((u32*)(r5 + 8)), r7, *((u32*)r6));
    Mon_GetBoxMon(*((u32*)r4));
    PCStorage_PlaceMonInBoxByIndexPair(*((u32*)(r5 + 4)), *((u8*)(r5 + 0x1f)), *((u32*)(r4 + 8)), r0);
    ov14_021F4958(r5, *((u8*)(r5 + 0x1f)));
    ov14_021F4A20(r5, *((u8*)(r5 + 0x1f)));
}




void ov14_021E6184(void) {
}




void ov14_021E61BC(void) {
    // sub r1, #0x1e
    Party_GetMonByIndex(*((u32*)(r0 + 8)), *((u32*)(r1 + 4)));
    // add r1, sp, #0
    // strb r2, [r1]
    // mov r1, #MON_DATA_MOOD
    // add r2, sp, #0
    SetMonData(0);
    Mon_GetBoxMon(r6);
    PCStorage_PlaceMonInBoxByIndexPair(*((u32*)(r5 + 4)), *((u8*)(r5 + 0x1f)), *((u32*)(r4 + 8)), r0);
    ov14_021E6100(r5, *((u8*)(r5 + 0x1f)), *((u32*)(r4 + 4)));
    ov14_021F4958(r5, *((u8*)(r5 + 0x1f)));
    ov14_021F4A20(r5, *((u8*)(r5 + 0x1f)));
}




void ov14_021E6210(void) {
    // sub r7, #0x1e
    // sub r4, #0x1e
    Party_GetMonByIndex(*((u32*)(r0 + 8)), *((u32*)(r1 + 4)));
    CopyPokemonToPokemon(*((u32*)r6));
    // add r1, sp, #4
    // add r1, #1
    Party_GetMonAprijuiceModifiers(*((u32*)(r5 + 8)), r7);
    // add r1, sp, #0
    Party_GetMonAprijuiceModifiers(*((u32*)(r5 + 8)), r4);
    Party_GetMonByIndex(*((u32*)(r5 + 8)), r4);
    Party_SafeCopyMonToSlot_ResetAprijuiceModifiers(*((u32*)(r5 + 8)), r7, r0);
    Party_SafeCopyMonToSlot_ResetAprijuiceModifiers(*((u32*)(r5 + 8)), r4, *((u32*)r6));
    // add r1, sp, #0
    Party_SetMonAprijuiceModifiers(*((u32*)(r5 + 8)), r7);
    // add r1, sp, #4
    // add r1, #1
    Party_SetMonAprijuiceModifiers(*((u32*)(r5 + 8)), r4);
}




void ov14_021E627C(void) {
    // sub r6, #0x1e
    Party_GetMonByIndex(*((u32*)(r0 + 8)), *((u32*)(r1 + 4)));
    CopyPokemonToPokemon(*((u32*)r4));
    // add r1, sp, #0
    Party_GetMonAprijuiceModifiers(*((u32*)(r5 + 8)), r6);
    ov14_021E6100(r5, *((u8*)(r5 + 0x1f)), *((u32*)(r4 + 4)));
    Party_AddMon(*((u32*)(r5 + 8)), *((u32*)r4));
    Party_GetCount(*((u32*)(r5 + 8)));
    // add r1, sp, #0
    Party_SetMonAprijuiceModifiers(*((u32*)(r5 + 8)), (r0 - 1));
}




void ov14_021E62C8(void) {
}




void ov14_021E6318(void) {
    ov14_021E6464(*((u32*)(r1 + 8)));
    // sub r1, #0x1e
    Party_GetMonByIndex(*((u32*)(r5 + 8)), *((u32*)(r4 + 4)));
    CopyPokemonToPokemon(*((u32*)r4));
    GetMonData(*((u32*)r4), 5, 0);
    Mon_UpdateShayminForm(*((u32*)r4), 0);
    Mon_GetBoxMon(*((u32*)r4));
    PCStorage_PlaceMonInBoxFirstEmptySlot(*((u32*)(r5 + 4)), r6, r0);
    ov14_021E6100(r5, *((u8*)(r5 + 0x1f)), *((u32*)(r4 + 4)));
    ov14_021F4958(r5, r6);
    ov14_021F4A20(r5, r6);
}




void ov14_021E637C(void) {
    // add r0, #0xe4
    Party_GetCount(*((u32*)(r0 + 8)));
    // add r1, #0xe8
    // tst r1, r3
    ov14_021E6464(r5, *((u32*)r4), *((u32*)r4));
    // add r0, #0xe4
    ov14_021E62C8(r5, r4);
    // sub r1, #0x1e
    // add r1, r4, r1
    ov14_021E6318(r5, (r1 << 5));
    // add r1, #0xe4
    PCStorage_SwapMonsInBoxByIndexPair(*((u32*)(r5 + 4)), *((u8*)(r5 + 0x1f)), *((u32*)r4));
    ov14_021F4958(r5, *((u8*)(r5 + 0x1f)));
    ov14_021F4A20(r5, *((u8*)(r5 + 0x1f)));
    // sub r3, #0x1e
    // add r4, #0x20
    ov14_021E611C(r5, r4, r4);
    ov14_021E6184(r5, r4);
    ov14_021E6070(r5, r3, 0xac, 0);
    // add r1, #0x20
    ov14_021E611C(r5, r4, r4);
    // add r1, #0xe4
    // sub r1, #0x1e
    // add r1, r4, r1
    ov14_021E61BC(r5, (*((u32*)r4) << 5));
    // sub r3, #0x1e
    ov14_021E6210(r5, r4);
    // sub r2, #0x1e
    // add r1, r4, r1
    ov14_021E627C(r5, (r2 << 5));
}




void ov14_021E6464(void) {
}




void ov14_021E6480(void) {
    Party_GetCount(*((u32*)(r0 + 8)));
    Party_GetMonByIndex(*((u32*)(r5 + 8)), r4);
    GetMonData(0x4c, 0);
    GetMonData(r6, 0xa3, 0);
    Party_GetCount(*((u32*)(r5 + 8)));
}




void ov14_021E64D0(void) {
    // push {r3, r4, r5, lr}
    // mov r1, #5
    // mov r2, #0
    // add r4, r0, #0
    // bl GetBoxMonData
    // lsl r0, r0, #0x10
    // lsr r1, r0, #0x10
    // ldr r0, _021E6544 ; =0x000001ED
    // cmp r1, r0
    // bne _021E6510
    // add r0, r4, #0
    // mov r1, #0x70
    // mov r2, #0
    // bl GetBoxMonData
    // lsl r0, r0, #0x10
    // lsr r5, r0, #0x10
    // add r0, r4, #0
    // bl BoxMon_UpdateArceusForm
    // add r0, r4, #0
    // mov r1, #0x70
    // mov r2, #0
    // bl GetBoxMonData
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // cmp r5, r0
    // beq _021E6540
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // sub r0, r0, #6
    // cmp r1, r0
    // bne _021E6540
    // add r0, r4, #0
    // mov r1, #0x70
    // mov r2, #0
    // bl GetBoxMonData
    // lsl r0, r0, #0x10
    // lsr r5, r0, #0x10
    // add r0, r4, #0
    // bl BoxMon_UpdateGiratinaForm
    // add r0, r4, #0
    // mov r1, #0x70
    // mov r2, #0
    // bl GetBoxMonData
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // cmp r5, r0
    // beq _021E6540
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // _021E6544: .word 0x000001ED
    // TODO: decompile
}




void ov14_021E6548(void) {
    // push {r4, r5, r6, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // cmp r4, #0x1e
    // bhs _021E6556
    // cmp r2, #0x1e
    // blo _021E65BC
    // cmp r4, #0x1e
    // blo _021E655E
    // cmp r2, #0x1e
    // bhs _021E65BC
    // cmp r4, #0x1e
    // blo _021E6564
    // add r4, r2, #0
    // add r0, r5, #0
    // add r1, r4, #0
    // mov r2, #5
    // mov r3, #0
    // bl ov14_021E6070
    // mov r1, #0x7b
    // lsl r1, r1, #2
    // cmp r0, r1
    // bne _021E65BC
    // add r0, r5, #0
    // add r1, r4, #0
    // mov r2, #0x70
    // mov r3, #0
    // bl ov14_021E6070
    // cmp r0, #0
    // beq _021E65BC
    // ldrb r1, [r5, #0x1f]
    // add r0, r5, #0
    // add r2, r4, #0
    // bl ov14_021E60C0
    // mov r1, #0
    // bl BoxMon_UpdateShayminForm
    // ldr r3, [r5, #0x34]
    // ldrb r1, [r5, #0x1f]
    // add r6, r3, r4
    // ldr r3, _021E65C0 ; =0x00004094
    // add r0, r5, #0
    // ldrb r3, [r6, r3]
    // add r2, r4, #0
    // bl ov14_021F2ED0
    // add r0, r5, #0
    // add r0, #0x21
    // ldrb r0, [r0]
    // cmp r0, r4
    // bne _021E65BC
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov14_021E7588
    // pop {r4, r5, r6, pc}
    // nop
    // _021E65C0: .word 0x00004094
    // TODO: decompile
}




void ov14_021E65C4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r5, r0, #0
    // ldr r0, [r5, #0x34]
    // ldr r6, [r0, #0xc]
    // add r0, r6, #0
    // add r0, #0xe0
    // ldr r0, [r0]
    // cmp r0, #8
    // bne _021E665E
    // mov r7, #0
    // ldr r0, [r6, #0xc]
    // cmp r0, #0
    // beq _021E6650
    // ldr r1, [r6, #4]
    // ldr r0, [r5, #0x34]
    // add r2, r0, r1
    // ldr r0, _021E66F0 ; =0x00004094
    // ldrb r4, [r2, r0]
    // ldr r0, [r6, #8]
    // mov r2, #0x80
    // tst r2, r0
    // add r2, sp, #4
    // bne _021E6604
    // add r3, r5, #0
    // add r3, #0x22
    // ldrb r3, [r3]
    // add r1, sp, #4
    // add r1, #2
    // bl ov14_021F2F88
    // b _021E6634
    // cmp r1, #0x1e
    // blo _021E661A
    // add r3, r5, #0
    // add r3, #0x22
    // ldrb r3, [r3]
    // add r1, sp, #4
    // mov r0, #0x23
    // add r1, #2
    // bl ov14_021F2F88
    // b _021E662A
    // add r3, r5, #0
    // add r3, #0x22
    // ldrb r3, [r3]
    // add r0, r1, #0
    // add r1, sp, #4
    // add r1, #2
    // bl ov14_021F2F88
    // ldr r0, [r5, #0x34]
    // add r1, r4, #0
    // mov r2, #0
    // bl ov14_021F2A18
    // ldr r1, [r5, #0x34]
    // lsl r0, r4, #2
    // add r1, r1, r0
    // mov r0, #0xbf
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // add r2, sp, #4
    // mov r1, #2
    // ldrsh r1, [r2, r1]
    // add r3, r2, #0
    // mov r2, #0
    // ldrsh r2, [r3, r2]
    // bl ManagedSprite_SetPositionXY
    // add r7, r7, #1
    // add r6, #0x20
    // cmp r7, #7
    // blo _021E65DA
    // add sp, #8
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r6, #0
    // add r0, #0xe0
    // ldr r0, [r0]
    // add r4, r6, #0
    // add r1, r0, #1
    // add r0, r6, #0
    // add r0, #0xe0
    // str r1, [r0]
    // mov r0, #0
    // str r0, [sp]
    // add r7, sp, #4
    // ldr r0, [r4, #0xc]
    // cmp r0, #0
    // beq _021E66DE
    // ldr r1, [r5, #0x34]
    // ldr r0, [r4, #4]
    // add r1, r1, r0
    // ldr r0, _021E66F0 ; =0x00004094
    // ldrb r0, [r1, r0]
    // mov r1, #0x18
    // ldrsh r3, [r4, r1]
    // add r1, r6, #0
    // add r1, #0xe0
    // ldr r2, [r1]
    // ldr r1, [r4, #0x10]
    // mov ip, r0
    // mov r0, #0x1c
    // mul r1, r2
    // lsr r1, r1, #0x10
    // ldrsh r0, [r4, r0]
    // mul r1, r3
    // add r0, r0, r1
    // strh r0, [r7, #2]
    // mov r1, #0x1a
    // ldrsh r3, [r4, r1]
    // add r1, r6, #0
    // add r1, #0xe0
    // ldr r2, [r1]
    // ldr r1, [r4, #0x14]
    // mov r0, #0x1e
    // mul r1, r2
    // lsr r1, r1, #0x10
    // ldrsh r0, [r4, r0]
    // mul r1, r3
    // mov r2, #0
    // add r0, r0, r1
    // strh r0, [r7]
    // mov r1, ip
    // ldr r0, [r5, #0x34]
    // lsl r1, r1, #2
    // add r1, r0, r1
    // mov r0, #0xbf
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // mov r1, #2
    // ldrsh r1, [r7, r1]
    // ldrsh r2, [r7, r2]
    // bl ManagedSprite_SetPositionXY
    // ldr r0, [r5, #0x34]
    // ldr r1, [r4, #4]
    // mov r2, #0
    // bl ov14_021F3190
    // ldr r0, [sp]
    // add r4, #0x20
    // add r0, r0, #1
    // str r0, [sp]
    // cmp r0, #7
    // blo _021E6674
    // mov r0, #1
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // _021E66F0: .word 0x00004094
    // TODO: decompile
}




void ov14_021E66F4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r5, r0, #0
    // ldr r0, [r5, #0x34]
    // ldr r4, [r0, #0xc]
    // add r0, r4, #0
    // add r0, #0xe0
    // ldr r0, [r0]
    // cmp r0, #8
    // bne _021E676E
    // mov r6, #0
    // ldr r0, [r4, #0xc]
    // cmp r0, #0
    // beq _021E6760
    // ldr r1, [r5, #0x34]
    // ldr r0, [r4, #4]
    // add r3, r5, #0
    // add r1, r1, r0
    // ldr r0, _021E6810 ; =0x00004094
    // add r3, #0x22
    // ldrb r7, [r1, r0]
    // add r1, sp, #4
    // ldrb r3, [r3]
    // ldr r0, [r4, #8]
    // add r1, #2
    // add r2, sp, #4
    // bl ov14_021F2F88
    // add r0, r5, #0
    // add r0, #0x21
    // ldrb r1, [r0]
    // ldr r0, [r4, #8]
    // cmp r1, r0
    // beq _021E6744
    // add r1, sp, #4
    // mov r0, #0
    // ldrsh r1, [r1, r0]
    // add r0, sp, #4
    // add r1, #0x90
    // strh r1, [r0]
    // ldr r1, [r5, #0x34]
    // lsl r0, r7, #2
    // add r1, r1, r0
    // mov r0, #0xbf
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // add r2, sp, #4
    // mov r1, #2
    // ldrsh r1, [r2, r1]
    // add r3, r2, #0
    // mov r2, #0
    // ldrsh r2, [r3, r2]
    // bl ManagedSprite_SetPositionXY
    // add r6, r6, #1
    // add r4, #0x20
    // cmp r6, #7
    // blo _021E670A
    // add sp, #8
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r4, #0
    // add r0, #0xe0
    // ldr r0, [r0]
    // add r1, r0, #1
    // add r0, r4, #0
    // add r0, #0xe0
    // str r1, [r0]
    // mov r1, #0
    // add r0, r4, #0
    // ldr r2, [r0, #0xc]
    // cmp r2, #0
    // beq _021E6802
    // add r2, r5, #0
    // add r2, #0x21
    // ldrb r3, [r2]
    // ldr r2, [r0, #8]
    // cmp r3, r2
    // bne _021E6802
    // lsl r6, r1, #5
    // add r0, r4, #4
    // str r0, [sp]
    // ldr r1, [r5, #0x34]
    // ldr r0, [r0, r6]
    // add r1, r1, r0
    // ldr r0, _021E6810 ; =0x00004094
    // ldrb r3, [r1, r0]
    // add r0, r4, r6
    // mov r1, #0x1c
    // ldrsh r7, [r0, r1]
    // mov r1, #0x18
    // ldrsh r1, [r0, r1]
    // mov ip, r1
    // add r1, r4, #0
    // add r1, #0xe0
    // ldr r2, [r1]
    // ldr r1, [r0, #0x10]
    // add r4, #0xe0
    // mul r1, r2
    // lsr r1, r1, #0x10
    // mov r2, ip
    // mul r1, r2
    // add r1, r7, r1
    // add r7, sp, #4
    // strh r1, [r7, #2]
    // mov r1, #0x1e
    // ldrsh r2, [r0, r1]
    // mov r1, #0x1a
    // ldrsh r1, [r0, r1]
    // ldr r4, [r4]
    // ldr r0, [r0, #0x14]
    // mul r0, r4
    // lsr r0, r0, #0x10
    // mul r0, r1
    // add r0, r2, r0
    // strh r0, [r7]
    // mov r2, #0
    // ldr r1, [r5, #0x34]
    // lsl r0, r3, #2
    // add r1, r1, r0
    // mov r0, #0xbf
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // mov r1, #2
    // ldrsh r1, [r7, r1]
    // ldrsh r2, [r7, r2]
    // bl ManagedSprite_SetPositionXY
    // ldr r1, [sp]
    // ldr r0, [r5, #0x34]
    // ldr r1, [r1, r6]
    // mov r2, #0
    // bl ov14_021F3190
    // b _021E680A
    // add r1, r1, #1
    // add r0, #0x20
    // cmp r1, #7
    // blo _021E6780
    // mov r0, #1
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // _021E6810: .word 0x00004094
    // TODO: decompile
}




void ov14_021E6814(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r6, r0, #0
    // ldr r0, [r6, #0x34]
    // ldr r5, [r0, #0xc]
    // add r0, r5, #0
    // add r0, #0xe0
    // ldr r0, [r0]
    // cmp r0, #8
    // bne _021E6876
    // mov r4, #0
    // ldr r0, [r5, #0xc]
    // cmp r0, #0
    // beq _021E6868
    // ldr r1, [r6, #0x34]
    // ldr r0, [r5, #4]
    // add r3, r6, #0
    // add r1, r1, r0
    // ldr r0, _021E6908 ; =0x00004094
    // add r3, #0x22
    // ldrb r7, [r1, r0]
    // add r1, sp, #4
    // ldrb r3, [r3]
    // ldr r0, [r5, #8]
    // add r1, #2
    // add r2, sp, #4
    // bl ov14_021F2F88
    // add r2, sp, #4
    // ldr r1, [r6, #0x34]
    // lsl r0, r7, #2
    // add r1, r1, r0
    // mov r0, #0xbf
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // mov r1, #2
    // ldrsh r1, [r2, r1]
    // add r3, r2, #0
    // mov r2, #0
    // ldrsh r2, [r3, r2]
    // bl ManagedSprite_SetPositionXY
    // add r4, r4, #1
    // add r5, #0x20
    // cmp r4, #7
    // blo _021E682A
    // add sp, #8
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r5, #0
    // add r0, #0xe0
    // ldr r0, [r0]
    // add r4, r5, #0
    // add r1, r0, #1
    // add r0, r5, #0
    // add r0, #0xe0
    // str r1, [r0]
    // mov r0, #0
    // str r0, [sp]
    // add r7, sp, #4
    // ldr r0, [r4, #0xc]
    // cmp r0, #0
    // beq _021E68F6
    // ldr r1, [r6, #0x34]
    // ldr r0, [r4, #4]
    // add r1, r1, r0
    // ldr r0, _021E6908 ; =0x00004094
    // ldrb r0, [r1, r0]
    // mov r1, #0x18
    // ldrsh r3, [r4, r1]
    // add r1, r5, #0
    // add r1, #0xe0
    // ldr r2, [r1]
    // ldr r1, [r4, #0x10]
    // mov ip, r0
    // mov r0, #0x1c
    // mul r1, r2
    // lsr r1, r1, #0x10
    // ldrsh r0, [r4, r0]
    // mul r1, r3
    // add r0, r0, r1
    // strh r0, [r7, #2]
    // mov r1, #0x1a
    // ldrsh r3, [r4, r1]
    // add r1, r5, #0
    // add r1, #0xe0
    // ldr r2, [r1]
    // ldr r1, [r4, #0x14]
    // mov r0, #0x1e
    // mul r1, r2
    // lsr r1, r1, #0x10
    // ldrsh r0, [r4, r0]
    // mul r1, r3
    // mov r2, #0
    // add r0, r0, r1
    // strh r0, [r7]
    // mov r1, ip
    // ldr r0, [r6, #0x34]
    // lsl r1, r1, #2
    // add r1, r0, r1
    // mov r0, #0xbf
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // mov r1, #2
    // ldrsh r1, [r7, r1]
    // ldrsh r2, [r7, r2]
    // bl ManagedSprite_SetPositionXY
    // ldr r0, [r6, #0x34]
    // ldr r1, [r4, #4]
    // ldr r2, [r4, #8]
    // bl ov14_021F31E0
    // ldr r0, [sp]
    // add r4, #0x20
    // add r0, r0, #1
    // str r0, [sp]
    // cmp r0, #7
    // blo _021E688C
    // mov r0, #1
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // _021E6908: .word 0x00004094
    // TODO: decompile
}




void ov14_021E690C(void) {
    ov14_021E6070(r2, 0xac, 0);
    // tst r0, r4
    ov14_021E6464(r5, r4);
    // str r0, [sp]
    // ldr r1, [sp]
    PCStorage_CountMonsAndEggsInBox(*((u32*)(r5 + 4)), *((u8*)(r5 + 0x1f)));
    // eor r4, r0
    // str r0, [sp]
    ov14_021E6070(r5, r4, 0xac, 0);
    // sub r1, #0x1e
    ov14_021E6480(r5, r6);
    // ldr r0, [sp]
    ov14_021E6070(r5, r4, 0x4c, 0);
    // sub r6, #0x1e
    Party_GetMonByIndex(*((u32*)(r5 + 8)), r6);
    GetMonData(6, 0);
    ItemIdIsMail(((r0 << 0x10) >> 0x10));
    GetMonData(r4, 0xa2, 0);
    // sub r1, #0x1e
    Party_GetMonByIndex(*((u32*)(r5 + 8)), r4);
    GetMonData(6, 0);
    ItemIdIsMail(((r0 << 0x10) >> 0x10));
    GetMonData(r7, 0xa2, 0);
    ov14_021E6070(r5, r6, 0x4c, 0);
    // sub r4, #0x1e
    ov14_021E6480(r5, r4);
}




void ov14_021E6A3C(void) {
    ov14_021E6070(r2, 0xac, 0);
    // sub r1, #0x1e
    ov14_021E6480(r5, r4);
    // sub r4, #0x1e
    Party_GetMonByIndex(*((u32*)(r5 + 8)), r4);
    GetMonData(6, 0);
    ItemIdIsMail(((r0 << 0x10) >> 0x10));
    GetMonData(r4, 0xa2, 0);
}




void ov14_021E6AA0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r2, #0
    // add r4, r1, #0
    // add r1, r6, #0
    // mov r2, #0xac
    // mov r3, #0
    // add r5, r0, #0
    // bl ov14_021E6070
    // cmp r0, #0
    // bne _021E6ABA
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r5, #0
    // add r1, r6, #0
    // mov r2, #0x4c
    // mov r3, #0
    // bl ov14_021E6070
    // cmp r0, #0
    // beq _021E6ACE
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r5, #0
    // add r1, r4, #0
    // mov r2, #6
    // mov r3, #0
    // bl ov14_021E6070
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // bl ItemIdIsMail
    // cmp r0, #1
    // bne _021E6AEC
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r5, #0
    // add r1, r6, #0
    // mov r2, #6
    // mov r3, #0
    // bl ov14_021E6070
    // lsl r0, r0, #0x10
    // lsr r7, r0, #0x10
    // add r0, r7, #0
    // bl ItemIdIsMail
    // cmp r0, #1
    // bne _021E6B0A
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [sp]
    // cmp r0, #0x70
    // bne _021E6B26
    // add r0, r5, #0
    // add r1, r6, #0
    // mov r2, #5
    // mov r3, #0
    // bl ov14_021E6070
    // ldr r1, _021E6B44 ; =0x000001E7
    // cmp r0, r1
    // beq _021E6B26
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // cmp r7, #0x70
    // bne _021E6B40
    // add r0, r5, #0
    // add r1, r4, #0
    // mov r2, #5
    // mov r3, #0
    // bl ov14_021E6070
    // ldr r1, _021E6B44 ; =0x000001E7
    // cmp r0, r1
    // beq _021E6B40
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // _021E6B44: .word 0x000001E7
    // TODO: decompile
}




void ov14_021E6B48(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // ldr r0, [r5, #0x34]
    // ldr r1, [r4, #4]
    // add r2, r0, r1
    // ldr r1, _021E6C08 ; =0x00004094
    // ldrb r1, [r2, r1]
    // add r2, r4, #0
    // add r2, #0x1e
    // lsl r1, r1, #2
    // add r1, r0, r1
    // mov r0, #0xbf
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // add r1, r4, #0
    // add r1, #0x1c
    // bl ManagedSprite_GetPositionXY
    // ldr r2, [r4, #8]
    // mov r0, #0x80
    // tst r0, r2
    // bne _021E6B88
    // add r5, #0x22
    // ldrb r3, [r5]
    // add r1, sp, #0
    // add r0, r2, #0
    // add r1, #2
    // add r2, sp, #0
    // bl ov14_021F2F88
    // b _021E6B98
    // mov r1, #0x7f
    // and r1, r2
    // add r2, sp, #0
    // ldr r0, [r5, #0x34]
    // add r2, #2
    // add r3, sp, #0
    // bl ov14_021F4940
    // mov r0, #0x1c
    // add r2, sp, #0
    // mov r1, #2
    // ldrsh r5, [r4, r0]
    // ldrsh r3, [r2, r1]
    // cmp r5, r3
    // bgt _021E6BB2
    // mov r3, #1
    // strh r3, [r4, #0x18]
    // ldrsh r1, [r2, r1]
    // ldrsh r0, [r4, r0]
    // sub r0, r1, r0
    // b _021E6BBC
    // sub r3, r1, #3
    // strh r3, [r4, #0x18]
    // ldrsh r3, [r4, r0]
    // ldrsh r0, [r2, r1]
    // sub r0, r3, r0
    // lsl r1, r0, #0x10
    // asr r0, r1, #2
    // lsr r0, r0, #0x1d
    // add r0, r1, r0
    // asr r0, r0, #3
    // str r0, [r4, #0x10]
    // mov r0, #0x1e
    // add r2, sp, #0
    // mov r1, #0
    // ldrsh r5, [r4, r0]
    // ldrsh r3, [r2, r1]
    // cmp r5, r3
    // bgt _021E6BEE
    // mov r3, #1
    // strh r3, [r4, #0x1a]
    // ldrsh r1, [r2, r1]
    // ldrsh r0, [r4, r0]
    // sub r0, r1, r0
    // lsl r1, r0, #0x10
    // asr r0, r1, #2
    // lsr r0, r0, #0x1d
    // add r0, r1, r0
    // asr r0, r0, #3
    // str r0, [r4, #0x14]
    // pop {r3, r4, r5, pc}
    // sub r3, r1, #1
    // strh r3, [r4, #0x1a]
    // ldrsh r3, [r4, r0]
    // ldrsh r0, [r2, r1]
    // sub r0, r3, r0
    // lsl r1, r0, #0x10
    // asr r0, r1, #2
    // lsr r0, r0, #0x1d
    // add r0, r1, r0
    // asr r0, r0, #3
    // str r0, [r4, #0x14]
    // pop {r3, r4, r5, pc}
    // nop
    // _021E6C08: .word 0x00004094
    // TODO: decompile
}




void ov14_021E6C0C(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #4
    // add r5, r0, #0
    // add r4, r1, #0
    // ldr r0, [r5, #0x34]
    // ldr r1, [r4, #8]
    // add r2, r0, r1
    // ldr r1, _021E6CC4 ; =0x00004094
    // ldrb r6, [r2, r1]
    // ldr r2, [r4, #4]
    // add r2, r0, r2
    // ldrb r1, [r2, r1]
    // add r2, r4, #0
    // add r2, #0x1e
    // lsl r1, r1, #2
    // add r1, r0, r1
    // mov r0, #0xbf
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // add r1, r4, #0
    // add r1, #0x1c
    // bl ManagedSprite_GetPositionXY
    // ldr r1, [r5, #0x34]
    // lsl r0, r6, #2
    // add r1, r1, r0
    // mov r0, #0xbf
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    // bl ManagedSprite_GetPositionXY
    // mov r0, #0x1c
    // add r2, sp, #0
    // mov r1, #2
    // ldrsh r5, [r4, r0]
    // ldrsh r3, [r2, r1]
    // cmp r5, r3
    // bgt _021E6C6A
    // mov r3, #1
    // strh r3, [r4, #0x18]
    // ldrsh r1, [r2, r1]
    // ldrsh r0, [r4, r0]
    // sub r0, r1, r0
    // b _021E6C74
    // sub r3, r1, #3
    // strh r3, [r4, #0x18]
    // ldrsh r3, [r4, r0]
    // ldrsh r0, [r2, r1]
    // sub r0, r3, r0
    // lsl r1, r0, #0x10
    // asr r0, r1, #2
    // lsr r0, r0, #0x1d
    // add r0, r1, r0
    // asr r0, r0, #3
    // str r0, [r4, #0x10]
    // mov r0, #0x1e
    // add r2, sp, #0
    // mov r1, #0
    // ldrsh r5, [r4, r0]
    // ldrsh r3, [r2, r1]
    // cmp r5, r3
    // bgt _021E6CA8
    // mov r3, #1
    // strh r3, [r4, #0x1a]
    // ldrsh r1, [r2, r1]
    // ldrsh r0, [r4, r0]
    // add sp, #4
    // sub r0, r1, r0
    // lsl r1, r0, #0x10
    // asr r0, r1, #2
    // lsr r0, r0, #0x1d
    // add r0, r1, r0
    // asr r0, r0, #3
    // str r0, [r4, #0x14]
    // pop {r3, r4, r5, r6, pc}
    // sub r3, r1, #1
    // strh r3, [r4, #0x1a]
    // ldrsh r3, [r4, r0]
    // ldrsh r0, [r2, r1]
    // sub r0, r3, r0
    // lsl r1, r0, #0x10
    // asr r0, r1, #2
    // lsr r0, r0, #0x1d
    // add r0, r1, r0
    // asr r0, r0, #3
    // str r0, [r4, #0x14]
    // add sp, #4
    // pop {r3, r4, r5, r6, pc}
    // nop
    // _021E6CC4: .word 0x00004094
    // TODO: decompile
}




void ov14_021E6CC8(void) {
}




void ov14_021E6CF8(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x18
    // add r6, r0, #0
    // str r2, [sp, #4]
    // ldr r2, [r6, #0x34]
    // str r1, [sp]
    // ldr r0, [r2, #0xc]
    // mov r1, #1
    // str r0, [sp, #0x14]
    // ldr r0, _021E6F38 ; =0x000040C4
    // str r1, [r2, r0]
    // mov r1, #0
    // ldr r2, [sp, #0x14]
    // add r0, r1, #0
    // str r0, [r2, #4]
    // str r0, [r2, #8]
    // str r0, [r2, #0xc]
    // add r1, r1, #1
    // add r2, #0x20
    // cmp r1, #7
    // blo _021E6D14
    // ldr r1, [sp, #0x14]
    // ldr r0, [sp, #4]
    // add r1, #0xec
    // str r0, [r1]
    // cmp r0, #0xff
    // beq _021E6D40
    // ldr r1, [sp]
    // cmp r1, r0
    // beq _021E6D40
    // ldr r2, [sp, #4]
    // add r0, r6, #0
    // bl ov14_021E690C
    // cmp r0, #0
    // bne _021E6D66
    // ldr r0, [sp, #0x14]
    // mov r1, #0xff
    // add r0, #0xe4
    // str r1, [r0]
    // ldr r0, [sp, #0x14]
    // add r0, #0xe8
    // str r1, [r0]
    // ldr r1, [sp]
    // ldr r0, [sp, #0x14]
    // str r1, [r0, #4]
    // str r1, [r0, #8]
    // mov r1, #1
    // str r1, [r0, #0xc]
    // ldr r1, [sp, #0x14]
    // add r0, r6, #0
    // bl ov14_021E6B48
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r1, [sp, #0x14]
    // ldr r0, [sp]
    // add r1, #0xe4
    // str r0, [r1]
    // ldr r1, [sp, #0x14]
    // ldr r0, [sp, #4]
    // add r1, #0xe8
    // str r0, [r1]
    // ldr r0, [r6, #8]
    // bl Party_GetCount
    // add r7, r0, #0
    // ldr r0, [sp, #4]
    // mov r1, #0x80
    // tst r0, r1
    // beq _021E6E06
    // ldr r0, [sp]
    // cmp r0, #0x1e
    // bhs _021E6DAE
    // add r1, r0, #0
    // ldr r0, [sp, #0x14]
    // str r1, [r0, #4]
    // ldr r1, [sp, #4]
    // str r1, [r0, #8]
    // mov r1, #1
    // str r1, [r0, #0xc]
    // ldr r1, [sp, #0x14]
    // add r0, r6, #0
    // bl ov14_021E6B48
    // ldr r1, [r6, #0x34]
    // ldr r0, _021E6F38 ; =0x000040C4
    // mov r2, #0
    // str r2, [r1, r0]
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // str r0, [sp, #0x10]
    // sub r0, #0x1e
    // add r5, r0, #1
    // str r0, [sp, #0x10]
    // cmp r5, #6
    // bhs _021E6DE0
    // ldr r0, [sp, #0x14]
    // lsl r1, r5, #5
    // add r4, r0, r1
    // mov r7, #1
    // add r0, r5, #0
    // add r0, #0x1e
    // str r0, [r4, #4]
    // add r0, r5, #0
    // add r0, #0x1d
    // str r0, [r4, #8]
    // add r0, r6, #0
    // add r1, r4, #0
    // str r7, [r4, #0xc]
    // bl ov14_021E6B48
    // add r5, r5, #1
    // add r4, #0x20
    // cmp r5, #6
    // blo _021E6DC2
    // ldr r0, [sp, #0x10]
    // lsl r1, r0, #5
    // ldr r0, [sp, #0x14]
    // add r1, r0, r1
    // ldr r0, [sp]
    // str r0, [r1, #4]
    // ldr r0, [sp, #4]
    // str r0, [r1, #8]
    // mov r0, #1
    // str r0, [r1, #0xc]
    // add r0, r6, #0
    // bl ov14_021E6B48
    // ldr r1, [r6, #0x34]
    // ldr r0, _021E6F38 ; =0x000040C4
    // mov r2, #0
    // str r2, [r1, r0]
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [sp]
    // cmp r0, #0x1e
    // bhs _021E6E44
    // ldr r0, [sp, #4]
    // cmp r0, #0x1e
    // bhs _021E6E20
    // ldr r1, [sp]
    // ldr r2, [sp, #4]
    // add r0, r6, #0
    // bl ov14_021E6CC8
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // sub r0, #0x1e
    // cmp r0, r7
    // bhs _021E6E34
    // ldr r1, [sp]
    // ldr r2, [sp, #4]
    // add r0, r6, #0
    // bl ov14_021E6CC8
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // add r7, #0x1e
    // ldr r1, [sp]
    // add r0, r6, #0
    // add r2, r7, #0
    // bl ov14_021E6CC8
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [sp, #4]
    // cmp r0, #0x1e
    // bhs _021E6ED2
    // ldr r1, [sp, #4]
    // add r0, r6, #0
    // mov r2, #0xac
    // mov r3, #0
    // bl ov14_021E6070
    // cmp r0, #0
    // beq _021E6E68
    // ldr r1, [sp]
    // ldr r2, [sp, #4]
    // add r0, r6, #0
    // bl ov14_021E6CC8
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [sp]
    // str r0, [sp, #8]
    // sub r0, #0x1e
    // add r5, r0, #1
    // str r0, [sp, #8]
    // cmp r5, r7
    // bhs _021E6E9C
    // ldr r0, [sp, #0x14]
    // lsl r1, r5, #5
    // add r4, r0, r1
    // add r0, r5, #0
    // add r0, #0x1e
    // str r0, [r4, #4]
    // add r0, r5, #0
    // add r0, #0x1d
    // str r0, [r4, #8]
    // mov r0, #1
    // str r0, [r4, #0xc]
    // add r0, r6, #0
    // add r1, r4, #0
    // bl ov14_021E6B48
    // add r5, r5, #1
    // add r4, #0x20
    // cmp r5, r7
    // blo _021E6E7C
    // ldr r0, [sp, #8]
    // lsl r1, r0, #5
    // ldr r0, [sp, #0x14]
    // add r1, r0, r1
    // ldr r0, [sp]
    // str r0, [r1, #4]
    // ldr r0, [sp, #4]
    // str r0, [r1, #8]
    // mov r0, #1
    // str r0, [r1, #0xc]
    // add r0, r6, #0
    // bl ov14_021E6B48
    // lsl r1, r7, #5
    // ldr r0, [sp, #0x14]
    // add r7, #0x1d
    // add r1, r0, r1
    // ldr r0, [sp, #4]
    // str r0, [r1, #4]
    // str r7, [r1, #8]
    // mov r0, #1
    // str r0, [r1, #0xc]
    // add r0, r6, #0
    // bl ov14_021E6B48
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // sub r0, #0x1e
    // cmp r0, r7
    // bhs _021E6EE6
    // ldr r1, [sp]
    // ldr r2, [sp, #4]
    // add r0, r6, #0
    // bl ov14_021E6CC8
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [sp]
    // str r0, [sp, #0xc]
    // sub r0, #0x1e
    // add r5, r0, #1
    // str r0, [sp, #0xc]
    // cmp r5, r7
    // bhs _021E6F1A
    // ldr r0, [sp, #0x14]
    // lsl r1, r5, #5
    // add r4, r0, r1
    // add r0, r5, #0
    // add r0, #0x1e
    // str r0, [r4, #4]
    // add r0, r5, #0
    // add r0, #0x1d
    // str r0, [r4, #8]
    // mov r0, #1
    // str r0, [r4, #0xc]
    // add r0, r6, #0
    // add r1, r4, #0
    // bl ov14_021E6B48
    // add r5, r5, #1
    // add r4, #0x20
    // cmp r5, r7
    // blo _021E6EFA
    // ldr r0, [sp, #0xc]
    // add r7, #0x1d
    // lsl r1, r0, #5
    // ldr r0, [sp, #0x14]
    // add r1, r0, r1
    // ldr r0, [sp]
    // str r0, [r1, #4]
    // str r7, [r1, #8]
    // mov r0, #1
    // str r0, [r1, #0xc]
    // add r0, r6, #0
    // bl ov14_021E6B48
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // _021E6F38: .word 0x000040C4
    // TODO: decompile
}




void ov14_021E6F3C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // add r6, r0, #0
    // str r2, [sp, #4]
    // ldr r2, [r6, #0x34]
    // str r1, [sp]
    // ldr r0, [r2, #0xc]
    // mov r1, #1
    // str r0, [sp, #0xc]
    // ldr r0, _021E7030 ; =0x000040C4
    // str r1, [r2, r0]
    // mov r1, #0
    // ldr r2, [sp, #0xc]
    // add r0, r1, #0
    // str r0, [r2, #4]
    // str r0, [r2, #8]
    // str r0, [r2, #0xc]
    // add r1, r1, #1
    // add r2, #0x20
    // cmp r1, #7
    // blo _021E6F58
    // ldr r0, [sp, #4]
    // cmp r0, #0xff
    // beq _021E6F7A
    // ldr r1, [sp]
    // ldr r2, [sp, #4]
    // add r0, r6, #0
    // bl ov14_021E6A3C
    // cmp r0, #0
    // bne _021E6FA0
    // ldr r0, [sp, #0xc]
    // mov r1, #0xff
    // add r0, #0xe4
    // str r1, [r0]
    // ldr r0, [sp, #0xc]
    // add r0, #0xe8
    // str r1, [r0]
    // ldr r1, [sp]
    // ldr r0, [sp, #0xc]
    // str r1, [r0, #4]
    // str r1, [r0, #8]
    // mov r1, #1
    // str r1, [r0, #0xc]
    // ldr r1, [sp, #0xc]
    // add r0, r6, #0
    // bl ov14_021E6B48
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r1, [sp, #0xc]
    // ldr r0, [sp]
    // add r1, #0xe4
    // str r0, [r1]
    // ldr r1, [sp, #0xc]
    // ldr r0, [sp, #4]
    // add r1, #0xe8
    // str r0, [r1]
    // ldr r0, [r6, #8]
    // bl Party_GetCount
    // add r7, r0, #0
    // ldr r0, [sp, #4]
    // cmp r0, #0x1e
    // bhs _021E702C
    // ldr r0, [sp]
    // str r0, [sp, #8]
    // sub r0, #0x1e
    // add r5, r0, #1
    // str r0, [sp, #8]
    // cmp r5, r7
    // bhs _021E6FF2
    // ldr r0, [sp, #0xc]
    // lsl r1, r5, #5
    // add r4, r0, r1
    // add r0, r5, #0
    // add r0, #0x1e
    // str r0, [r4, #4]
    // add r0, r5, #0
    // add r0, #0x1d
    // str r0, [r4, #8]
    // mov r0, #1
    // str r0, [r4, #0xc]
    // add r0, r6, #0
    // add r1, r4, #0
    // bl ov14_021E6C0C
    // add r5, r5, #1
    // add r4, #0x20
    // cmp r5, r7
    // blo _021E6FD2
    // ldr r0, [sp, #8]
    // lsl r1, r0, #5
    // ldr r0, [sp, #0xc]
    // add r1, r0, r1
    // ldr r0, [sp]
    // str r0, [r1, #4]
    // ldr r0, [sp, #4]
    // str r0, [r1, #8]
    // mov r0, #1
    // str r0, [r1, #0xc]
    // add r0, r6, #0
    // bl ov14_021E6C0C
    // lsl r1, r7, #5
    // ldr r0, [sp, #0xc]
    // add r7, #0x1d
    // add r1, r0, r1
    // ldr r0, [sp, #4]
    // str r0, [r1, #4]
    // str r7, [r1, #8]
    // mov r0, #1
    // str r0, [r1, #0xc]
    // add r0, r6, #0
    // bl ov14_021E6C0C
    // ldr r1, [r6, #0x34]
    // ldr r0, _021E7030 ; =0x000040C4
    // mov r2, #0
    // str r2, [r1, r0]
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // _021E7030: .word 0x000040C4
    // TODO: decompile
}




void ov14_021E7034(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // add r7, r2, #0
    // ldr r2, [r5, #0x34]
    // ldr r0, _021E70AC ; =0x000040C4
    // add r6, r1, #0
    // ldr r4, [r2, #0xc]
    // mov r1, #1
    // str r1, [r2, r0]
    // mov r0, #0
    // add r1, r4, #0
    // add r3, r0, #0
    // str r3, [r1, #4]
    // str r3, [r1, #8]
    // str r3, [r1, #0xc]
    // add r0, r0, #1
    // add r1, #0x20
    // cmp r0, #7
    // blo _021E704C
    // cmp r7, #0xff
    // beq _021E706C
    // add r0, r5, #0
    // add r1, r7, #0
    // mov r2, #0xac
    // bl ov14_021E6070
    // cmp r0, #0
    // beq _021E708C
    // add r0, r4, #0
    // mov r1, #0xff
    // add r0, #0xe4
    // str r1, [r0]
    // add r0, r4, #0
    // add r0, #0xe8
    // str r1, [r0]
    // str r6, [r4, #4]
    // str r6, [r4, #8]
    // mov r0, #1
    // str r0, [r4, #0xc]
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov14_021E6B48
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r4, #0
    // add r0, #0xe4
    // str r6, [r0]
    // add r4, #0xe8
    // str r7, [r4]
    // ldr r0, [r5, #8]
    // bl Party_GetCount
    // add r2, r0, #0
    // add r0, r5, #0
    // add r1, r6, #0
    // add r2, #0x1e
    // bl ov14_021E6CC8
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021E70AC: .word 0x000040C4
    // TODO: decompile
}




void ov14_021E70B0(void) {
    // add r0, r2, r0
    // add r4, #0x20
}




void ov14_021E70E0(void) {
    // str r1, [sp]
    // sub r1, #0x1e
    // str r1, [sp]
    // add r0, #0x1e
    *((u32*)(*((u32*)(*((u32*)(r0 + 0x34)) + 0xc)) + 4)) = 0;
    *((u32*)(*((u32*)(*((u32*)(r0 + 0x34)) + 0xc)) + 8)) = 0;
    *((u32*)(*((u32*)(*((u32*)(r0 + 0x34)) + 0xc)) + 0xc)) = 0;
    // add r3, #0x20
    // add r0, r7, r0
    *((u32*)(((0 + 1) << 5) + 0xc)) = 0;
    // ldr r0, [sp]
    // add r4, r7, r0
    // add r0, #0x1d
    *((u32*)(r4 + 8)) = (((0 + 1) << 5) + 1);
    *((u32*)(r4 + 0xc)) = 1;
    ov14_021E6B48(r0, r4, (0 + 1), *((u32*)(*((u32*)(r0 + 0x34)) + 0xc)));
    // add r4, #0x20
    // ldr r0, [sp]
    // add r1, r7, r1
    *((u32*)((r0 << 5) + 8)) = 0x23;
    *((u32*)((r0 << 5) + 0xc)) = 1;
    ov14_021E6B48(r6, (r0 << 5));
}




void ov14_021E7148(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r4, r1, #0
    // ldr r7, _021E71C0 ; =0x00004094
    // add r5, r0, #0
    // mov r2, #0
    // add r3, r4, #0
    // add r6, sp, #0
    // ldr r0, [r3, #0xc]
    // cmp r0, #0
    // beq _021E7168
    // ldr r1, [r5, #0x34]
    // ldr r0, [r3, #4]
    // add r0, r1, r0
    // ldrb r0, [r0, r7]
    // strb r0, [r6]
    // add r2, r2, #1
    // add r3, #0x20
    // add r6, r6, #1
    // cmp r2, #7
    // blo _021E7158
    // mov r7, #0
    // add r6, sp, #0
    // ldr r0, [r4, #0xc]
    // cmp r0, #0
    // beq _021E71B2
    // ldr r1, [r4, #8]
    // mov r0, #0x80
    // tst r0, r1
    // bne _021E719A
    // ldr r2, [r5, #0x34]
    // ldrb r0, [r6]
    // add r2, r2, r1
    // ldr r1, _021E71C0 ; =0x00004094
    // strb r0, [r2, r1]
    // ldr r0, [r5, #0x34]
    // ldr r1, [r4, #8]
    // mov r2, #1
    // bl ov14_021F3190
    // b _021E71B2
    // ldr r0, [r4, #4]
    // cmp r0, #0x1e
    // blo _021E71A8
    // ldrb r2, [r6]
    // ldr r1, [r5, #0x34]
    // ldr r0, _021E71C4 ; =0x000040B7
    // strb r2, [r1, r0]
    // ldr r0, [r5, #0x34]
    // ldr r1, [r4, #4]
    // mov r2, #1
    // bl ov14_021F3190
    // add r7, r7, #1
    // add r4, #0x20
    // add r6, r6, #1
    // cmp r7, #7
    // blo _021E7176
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // _021E71C0: .word 0x00004094
    // _021E71C4: .word 0x000040B7
    // TODO: decompile
}




void ov14_021E71C8(void) {
    // ldr r3, _021E71E4 ; =ov14_021F7BC0
    // mov r2, #0
    // ldrh r1, [r3]
    // cmp r0, r1
    // bne _021E71D6
    // add r0, r2, #0
    // bx lr
    // add r2, r2, #1
    // add r3, r3, #2
    // cmp r2, #4
    // blo _021E71CC
    // mov r0, #0
    // mvn r0, r0
    // bx lr
    // _021E71E4: .word ov14_021F7BC0
    // TODO: decompile
}




void ov14_021E71E8(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r4, r0, #0
    // mov r0, #0xa
    // mov r1, #0xc
    // bl Heap_AllocAtEnd
    // ldr r2, [r4, #0x34]
    // ldr r1, _021E725C ; =0x000088DC
    // str r0, [r2, r1]
    // ldr r0, [r4, #0x34]
    // ldr r6, [r0, r1]
    // add r1, r4, #0
    // add r1, #0x21
    // ldrb r1, [r1]
    // add r2, r0, r1
    // ldr r1, _021E7260 ; =0x00004094
    // ldrb r1, [r2, r1]
    // lsl r1, r1, #2
    // add r1, r0, r1
    // mov r0, #0xbf
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // str r0, [r6]
    // mov r0, #0
    // strh r0, [r6, #4]
    // strb r0, [r6, #6]
    // add r0, r4, #0
    // ldrb r1, [r4, #0x1f]
    // add r4, #0x21
    // ldrb r2, [r4]
    // bl ov14_021E60C0
    // mov r5, #0
    // add r4, r0, #0
    // sub r7, r5, #1
    // add r1, r5, #0
    // add r0, r4, #0
    // add r1, #0x36
    // mov r2, #0
    // bl GetBoxMonData
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // bl ov14_021E71C8
    // cmp r0, r7
    // beq _021E7254
    // ldrb r2, [r6, #6]
    // mov r1, #1
    // lsl r1, r0
    // add r0, r2, #0
    // orr r0, r1
    // strb r0, [r6, #6]
    // pop {r3, r4, r5, r6, r7, pc}
    // add r5, r5, #1
    // cmp r5, #4
    // blo _021E722E
    // pop {r3, r4, r5, r6, r7, pc}
    // _021E725C: .word 0x000088DC
    // _021E7260: .word 0x00004094
    // TODO: decompile
}




void ov14_021E7264(void) {
    // ldr r1, [r0, #0x34]
    // ldr r0, _021E7270 ; =0x000088DC
    // ldr r3, _021E7274 ; =Heap_Free
    // ldr r0, [r1, r0]
    // bx r3
    // nop
    // _021E7270: .word 0x000088DC
    // _021E7274: .word Heap_Free
    // TODO: decompile
}




void ov14_021E7278(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r7, r0, #0
    // ldr r1, [r7, #0x34]
    // ldr r0, _021E7350 ; =0x000088DC
    // ldr r4, [r1, r0]
    // ldr r0, _021E7354 ; =0x00000222
    // ldrh r5, [r4, #4]
    // cmp r5, r0
    // bne _021E728E
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #0x87
    // lsl r0, r0, #2
    // cmp r5, r0
    // bhs _021E72CE
    // add r0, r5, #0
    // mov r1, #0x1e
    // bl _s32_div_f
    // add r6, r0, #0
    // add r0, r5, #0
    // mov r1, #0x1e
    // bl _s32_div_f
    // ldrb r0, [r7, #0x1f]
    // add r2, r1, #0
    // cmp r6, r0
    // bne _021E72C2
    // add r0, r7, #0
    // add r0, #0x21
    // ldrb r0, [r0]
    // cmp r2, r0
    // bne _021E72C2
    // mov r6, #0
    // b _021E72EA
    // add r0, r7, #0
    // add r1, r6, #0
    // bl ov14_021E60C0
    // add r6, r0, #0
    // b _021E72EA
    // sub r2, r5, r0
    // add r0, r7, #0
    // add r0, #0x21
    // ldrb r0, [r0]
    // sub r0, #0x1e
    // cmp r2, r0
    // bne _021E72E0
    // mov r6, #0
    // b _021E72EA
    // add r0, r7, #0
    // mov r1, #0xff
    // bl ov14_021E60C0
    // add r6, r0, #0
    // cmp r6, #0
    // beq _021E732E
    // add r0, r6, #0
    // mov r1, #0xac
    // mov r2, #0
    // bl GetBoxMonData
    // cmp r0, #0
    // beq _021E732E
    // mov r5, #0
    // add r1, r5, #0
    // add r0, r6, #0
    // add r1, #0x36
    // mov r2, #0
    // bl GetBoxMonData
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // bl ov14_021E71C8
    // mov r1, #0
    // mvn r1, r1
    // cmp r0, r1
    // beq _021E7328
    // mov r1, #1
    // lsl r1, r0
    // mov r0, #0xff
    // ldrb r2, [r4, #6]
    // eor r0, r1
    // and r0, r2
    // strb r0, [r4, #6]
    // add r5, r5, #1
    // cmp r5, #4
    // blo _021E72FE
    // ldrh r0, [r4, #4]
    // add r0, r0, #1
    // strh r0, [r4, #4]
    // ldrh r5, [r4, #4]
    // ldr r0, _021E7354 ; =0x00000222
    // cmp r5, r0
    // bne _021E7340
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [sp]
    // add r0, r0, #1
    // str r0, [sp]
    // cmp r0, #0xf
    // blo _021E7292
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021E7350: .word 0x000088DC
    // _021E7354: .word 0x00000222
    // TODO: decompile
}




void ov14_021E7358(void) {
    GetBoxMonData(0xac, 0);
    Heap_Alloc(0xa, 0x1c);
    // str r7, [r6]
    GetBoxMonData(r7, 5, 0);
    *((u16*)(r6 + 4)) = r0;
    GetBoxMonData(r7, 6, 0);
    *((u16*)(r6 + 6)) = r0;
    GetBoxMonData(r7, 0, 0);
    *((u32*)(r6 + 8)) = r0;
    GetBoxMonData(r7, 0xb1, 0);
    *((u8*)(r6 + 0xc)) = r0;
    GetBoxMonData(r7, 0xb2, 0);
    *((u8*)(r6 + 0xd)) = r0;
    GetBoxMonData(r7, 0xa, 0);
    *((u8*)(r6 + 0xe)) = r0;
    GetBoxMonNature(r7);
    *((u8*)(r6 + 0xf)) = r0;
    GetBoxMonData(r7, 0xb, 0);
    *((u16*)(r6 + 0x10)) = r0;
    GetBoxMonData(r7, 0xa1, 0);
    // bic r1, r2
    // and r0, r2
    // orr r0, r1
    *((u8*)(r6 + 0x12)) = 0x7f;
    GetBoxMonData(r7, 0x4c, 0);
    // bic r1, r2
    // orr r0, r1
    *((u8*)(r6 + 0x12)) = ((((r0 << 0x18) >> 0x18) << 0x1f) >> 0x18);
    GetBoxMonGender(r7, *((u8*)(r6 + 0x12)), 0x80);
    // add r2, #0x13
    // bic r1, r3
    // and r0, r3
    // orr r0, r1
    *((u8*)(r6 + 0x13)) = r0;
    // ldrb r1, [r2]
    // orr r0, r1
    // strb r0, [r2]
    // bic r1, r0
    *((u8*)(r6 + 0x13)) = *((u8*)(r6 + 0x13));
    // add r1, #0x36
    GetBoxMonData(r7, 0, 0, 0x7f);
    *((u16*)(r5 + 0x14)) = r0;
}




void ov14_021E7468(void) {
}




void ov14_021E7470(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // str r1, [sp]
    // bl ov14_021F5404
    // mov r7, #0x2f
    // add r6, r0, #0
    // mov r4, #0
    // lsl r7, r7, #4
    // ldr r2, [r5, #0x34]
    // add r3, r6, r4
    // ldr r0, [r2, r7]
    // add r2, #0x30
    // lsl r3, r3, #4
    // mov r1, #0x10
    // add r2, r2, r3
    // bl sub_02019A60
    // add r4, r4, #1
    // cmp r4, #4
    // blo _021E7482
    // mov r0, #0x2f
    // ldr r1, [r5, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E88A4
    // ldr r1, [sp]
    // add r0, r5, #0
    // mov r2, #2
    // bl ov14_021F36DC
    // ldr r0, [r5, #0x34]
    // ldr r1, _021E74EC ; =0x000088D0
    // mov r2, #1
    // ldrh r1, [r0, r1]
    // eor r1, r2
    // add r1, r1, #2
    // bl ov14_021F2A18
    // ldr r0, [r5, #0x34]
    // ldr r1, _021E74EC ; =0x000088D0
    // mov r2, #0
    // ldrh r1, [r0, r1]
    // add r1, r1, #2
    // bl ov14_021F2A18
    // ldr r0, [r5, #0x34]
    // ldr r1, [sp]
    // bl ov14_021F3D70
    // ldr r1, [sp]
    // add r0, r5, #0
    // bl ov14_021F5368
    // ldr r1, [sp]
    // add r0, r5, #0
    // ldrh r1, [r1, #0x10]
    // bl ov14_021E895C
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021E74EC: .word 0x000088D0
    // TODO: decompile
}




void ov14_021E74F0(void) {
    // push {r4, r5, r6, lr}
    // add r4, r1, #0
    // ldrh r1, [r4, #6]
    // add r5, r0, #0
    // cmp r1, #0
    // beq _021E7534
    // bl ov14_021F5564
    // add r6, r0, #0
    // mov r0, #0x2f
    // ldr r2, [r5, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r2, r0]
    // add r2, #0x30
    // lsl r3, r6, #4
    // mov r1, #0x10
    // add r2, r2, r3
    // bl sub_02019A60
    // mov r0, #0x2f
    // add r3, r6, #1
    // ldr r2, [r5, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r2, r0]
    // add r2, #0x30
    // lsl r3, r3, #4
    // mov r1, #0x10
    // add r2, r2, r3
    // bl sub_02019A60
    // ldrh r1, [r4, #6]
    // ldr r0, [r5, #0x34]
    // bl ov14_021F38B0
    // mov r0, #0x2f
    // ldr r1, [r5, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8944
    // add r0, r5, #0
    // add r1, r4, #0
    // mov r2, #2
    // bl ov14_021F36DC
    // ldr r0, [r5, #0x34]
    // ldr r1, _021E7584 ; =0x000088D0
    // mov r2, #1
    // ldrh r1, [r0, r1]
    // eor r1, r2
    // add r1, r1, #2
    // bl ov14_021F2A18
    // ldr r0, [r5, #0x34]
    // ldr r1, _021E7584 ; =0x000088D0
    // mov r2, #0
    // ldrh r1, [r0, r1]
    // add r1, r1, #2
    // bl ov14_021F2A18
    // ldr r0, [r5, #0x34]
    // add r1, r4, #0
    // bl ov14_021F3D70
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov14_021F5368
    // ldrh r1, [r4, #0x10]
    // add r0, r5, #0
    // bl ov14_021E895C
    // pop {r4, r5, r6, pc}
    // nop
    // _021E7584: .word 0x000088D0
    // TODO: decompile
}




void ov14_021E7588(void) {
    ov14_021E60C0(*((u8*)(r0 + 0x1f)), r1);
    AcquireBoxMonLock();
    ov14_021E7358(r4);
    ov14_021E74F0(r5, r0);
    ov14_021E7470(r5, r6);
    ov14_021E7468(r6);
    ov14_021E765C(r5);
    ReleaseBoxMonLock(r4, r7);
    ReleaseBoxMonLock(r4, r7);
    ov14_021E765C(r5);
}




void ov14_021E75F4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // add r2, r1, #0
    // ldrb r1, [r5, #0x1f]
    // bl ov14_021E60C0
    // add r4, r0, #0
    // bl AcquireBoxMonLock
    // add r7, r0, #0
    // add r0, r4, #0
    // bl ov14_021E7358
    // add r6, r0, #0
    // add r0, r5, #0
    // add r1, r6, #0
    // mov r2, #2
    // bl ov14_021F36DC
    // ldr r0, [r5, #0x34]
    // ldr r1, _021E7658 ; =0x000088D0
    // mov r2, #1
    // ldrh r1, [r0, r1]
    // eor r1, r2
    // add r1, r1, #2
    // bl ov14_021F2A18
    // ldr r0, [r5, #0x34]
    // ldr r1, _021E7658 ; =0x000088D0
    // mov r2, #0
    // ldrh r1, [r0, r1]
    // add r1, r1, #2
    // bl ov14_021F2A18
    // ldr r0, [r5, #0x34]
    // add r1, r6, #0
    // bl ov14_021F3D70
    // add r0, r5, #0
    // add r1, r6, #0
    // bl ov14_021F5368
    // add r0, r6, #0
    // bl ov14_021E7468
    // add r0, r4, #0
    // add r1, r7, #0
    // bl ReleaseBoxMonLock
    // pop {r3, r4, r5, r6, r7, pc}
    // _021E7658: .word 0x000088D0
    // TODO: decompile
}




void ov14_021E765C(void) {
    ov14_021F2A18(*((u32*)(r0 + 0x34)), 2, 0);
    ov14_021F2A18(*((u32*)(r4 + 0x34)), 3, 0);
    ov14_021F2A18(*((u32*)(r4 + 0x34)), 0xd, 0);
    ov14_021F2A18(*((u32*)(r4 + 0x34)), 0xe, 0);
    ov14_021F53C0(*((u32*)(r4 + 0x34)));
    ov14_021E895C(r4, 0);
    // ldr r0, [r1, r0]
    ov14_021E8944((0x2f << 4), *((u32*)(r4 + 0x34)));
    // ldr r0, [r1, r0]
    ov14_021E88A4((0x2f << 4));
}




void ov14_021E76B8(void) {
}




void ov14_021E76D0(void) {
    // str r0, [sp]
    // add r1, #0x10
    // add r3, sp, #4
    GfGfxLoader_GetCharData(0x13, 1);
    // ldr r3, [sp, #4]
    // str r4, [sp]
    BG_LoadCharTilesData(*((u32*)(*((u32*)(r5 + 0x34)) + 0x14)), 3, *((u32*)(r3 + 0x14)), *((u32*)(r3 + 0x10)));
    // str r0, [sp]
    // ldr r1, [sp, #4]
    // add r4, #0x15
    // add r1, r2, r1
    ov14_021F5718(r5, (0x2a << 4), r4, 0x15);
    Heap_Free(r6);
}




void ov14_021E7720(void) {
}




void ov14_021E7740(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x34
    // str r0, [sp, #0x10]
    // mov r0, #0xa
    // str r2, [sp, #0x14]
    // str r3, [sp, #0x18]
    // str r0, [sp]
    // mov r0, #0x13
    // mov r1, #0xf
    // mov r2, #1
    // add r3, sp, #0x30
    // bl GfGfxLoader_GetScrnData
    // str r0, [sp, #0x28]
    // ldr r0, [sp, #0x30]
    // str r0, [sp, #0x24]
    // add r0, #0xc
    // str r0, [sp, #0x24]
    // mov r0, #0
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x48]
    // lsl r0, r0, #0xc
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x20]
    // mov r1, #0x15
    // mul r1, r0
    // ldr r0, [sp, #0x24]
    // lsl r1, r1, #1
    // add r6, r0, r1
    // ldr r0, [sp, #0x20]
    // ldr r4, [sp, #0x14]
    // add r0, r0, #1
    // lsl r0, r0, #0x18
    // mov r5, #0
    // lsr r7, r0, #0x18
    // lsl r0, r5, #1
    // ldrh r1, [r6, r0]
    // ldr r0, _021E7800 ; =0x00000FFF
    // lsl r3, r4, #0x18
    // and r1, r0
    // ldr r0, [sp, #0x1c]
    // add r2, sp, #0x2c
    // add r1, r0, r1
    // ldr r0, [sp, #0x18]
    // lsr r3, r3, #0x18
    // add r1, r0, r1
    // add r0, sp, #0x2c
    // strh r1, [r0]
    // str r7, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x10]
    // mov r1, #3
    // ldr r0, [r0, #0x34]
    // ldr r0, [r0, #0x14]
    // bl LoadRectToBgTilemapRect
    // add r4, r4, #1
    // cmp r4, #0x40
    // blo _021E77BC
    // mov r4, #0
    // add r0, r5, #1
    // lsl r0, r0, #0x18
    // lsr r5, r0, #0x18
    // cmp r5, #0x15
    // blo _021E7786
    // ldr r0, [sp, #0x20]
    // add r0, r0, #1
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #0x20]
    // cmp r0, #0x14
    // blo _021E776E
    // ldr r0, [sp, #0x28]
    // bl Heap_Free
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // mov r0, #0x14
    // str r0, [sp, #8]
    // mov r0, #0x11
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x10]
    // lsl r3, r4, #0x18
    // ldr r0, [r0, #0x34]
    // ldr r2, _021E7804 ; =0x00001001
    // ldr r0, [r0, #0x14]
    // mov r1, #3
    // lsr r3, r3, #0x18
    // bl FillBgTilemapRect
    // add sp, #0x34
    // pop {r4, r5, r6, r7, pc}
    // _021E7800: .word 0x00000FFF
    // _021E7804: .word 0x00001001
    // TODO: decompile
}




void ov14_021E7808(void) {
    ov14_021E76D0();
    // ldr r2, [sp, #0x18]
    ov14_021E7720(r5, r4);
    // ldr r0, [sp, #0x18]
    // str r0, [sp]
    ov14_021E7740(r5, r4, r6, r7);
    ScheduleBgTilemapBufferTransfer(*((u32*)(*((u32*)(r5 + 0x34)) + 0x14)), 3);
}




void ov14_021E783C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // cmp r2, #0
    // bne _021E785A
    // ldr r4, [r0, #0x34]
    // ldr r2, _021E78A4 ; =0x00000448
    // ldrsb r3, [r4, r2]
    // sub r3, #0x17
    // strb r3, [r4, r2]
    // ldr r4, [r0, #0x34]
    // ldrsb r3, [r4, r2]
    // cmp r3, #0
    // bge _021E7874
    // add r3, #0x40
    // strb r3, [r4, r2]
    // b _021E7874
    // cmp r2, #1
    // bne _021E7874
    // ldr r4, [r0, #0x34]
    // ldr r2, _021E78A4 ; =0x00000448
    // ldrsb r3, [r4, r2]
    // add r3, #0x17
    // strb r3, [r4, r2]
    // ldr r4, [r0, #0x34]
    // ldrsb r3, [r4, r2]
    // cmp r3, #0x40
    // blt _021E7874
    // sub r3, #0x40
    // strb r3, [r4, r2]
    // ldr r6, [r0, #0x34]
    // ldr r2, _021E78A8 ; =0x00000449
    // ldrb r2, [r6, r2]
    // cmp r2, #0
    // bne _021E7886
    // mov r3, #0x97
    // lsl r3, r3, #2
    // mov r5, #0xe
    // b _021E788A
    // mov r3, #0xb8
    // mov r5, #0xf
    // ldr r7, _021E78A8 ; =0x00000449
    // mov r2, #1
    // ldrb r4, [r6, r7]
    // eor r2, r4
    // strb r2, [r6, r7]
    // str r5, [sp]
    // ldr r4, [r0, #0x34]
    // sub r2, r7, #1
    // ldrsb r2, [r4, r2]
    // bl ov14_021E7808
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021E78A4: .word 0x00000448
    // _021E78A8: .word 0x00000449
    // TODO: decompile
}




void ov14_021E78AC(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // add r5, r0, #0
    // add r7, r1, #0
    // ldr r0, [r5, #0x34]
    // ldr r1, _021E7928 ; =0x00000449
    // ldrb r1, [r0, r1]
    // cmp r1, #0
    // bne _021E78C6
    // mov r6, #0x97
    // lsl r6, r6, #2
    // mov r4, #0xe
    // b _021E78CA
    // mov r6, #0xb8
    // mov r4, #0xf
    // ldr r1, _021E7928 ; =0x00000449
    // ldr r3, _021E7928 ; =0x00000449
    // ldrb r2, [r0, r1]
    // mov r1, #1
    // sub r3, r3, #1
    // eor r2, r1
    // ldr r1, _021E7928 ; =0x00000449
    // strb r2, [r0, r1]
    // ldr r2, [r5, #0x34]
    // add r0, r5, #0
    // ldrsb r2, [r2, r3]
    // add r1, r7, #0
    // add r3, r6, #0
    // bl ov14_021E76D0
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #0x20
    // str r0, [sp, #4]
    // lsl r0, r4, #0x14
    // lsr r0, r0, #0x10
    // str r0, [sp, #8]
    // ldr r0, [r5, #0x34]
    // add r2, r7, #0
    // ldr r0, [r0, #0x18]
    // mov r1, #0x13
    // add r2, #0x28
    // mov r3, #0xa
    // bl PaletteData_LoadNarc
    // str r4, [sp]
    // ldr r3, [r5, #0x34]
    // ldr r2, _021E792C ; =0x00000448
    // add r0, r5, #0
    // ldrsb r2, [r3, r2]
    // add r1, r7, #0
    // add r3, r6, #0
    // bl ov14_021E7740
    // ldr r0, [r5, #0x34]
    // mov r1, #3
    // ldr r0, [r0, #0x14]
    // bl ScheduleBgTilemapBufferTransfer
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _021E7928: .word 0x00000449
    // _021E792C: .word 0x00000448
    // TODO: decompile
}




void ov14_021E7930(void) {
}




void ov14_021E7940(void) {
    // ldrb r3, [r2]
}




void ov14_021E7960(void) {
    // push {r3, r4, r5, lr}
    // ldr r2, _021E79A8 ; =_021F7BBC
    // add r5, r0, #0
    // add r4, r1, #0
    // bl ov14_021E7940
    // cmp r0, #1
    // bne _021E79A4
    // cmp r5, #0xc
    // bge _021E7978
    // mov r5, #0
    // b _021E798E
    // cmp r5, #0x9c
    // blt _021E7980
    // mov r5, #5
    // b _021E798E
    // sub r5, #0xc
    // add r0, r5, #0
    // mov r1, #0x18
    // bl _s32_div_f
    // lsl r0, r0, #0x10
    // asr r5, r0, #0x10
    // sub r4, #0x28
    // add r0, r4, #0
    // mov r1, #0x18
    // bl _s32_div_f
    // lsl r0, r0, #0x10
    // asr r1, r0, #0x10
    // mov r0, #6
    // mul r0, r1
    // add r0, r5, r0
    // pop {r3, r4, r5, pc}
    // mov r0, #0xff
    // pop {r3, r4, r5, pc}
    // _021E79A8: .word _021F7BBC
    // TODO: decompile
}




void ov14_021E79AC(void) {
    ov14_021E7940(r0, r1, r2);
    // add r4, #0x1e
}




void ov14_021E79D8(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // ldr r5, _021E7A04 ; =ov14_021F7BD8
    // add r6, r0, #0
    // add r7, r1, #0
    // mov r4, #0
    // add r0, r6, #0
    // add r1, r7, #0
    // add r2, r5, #0
    // bl ov14_021E7940
    // cmp r0, #1
    // bne _021E79F6
    // add r4, #0x80
    // add r0, r4, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // add r4, r4, #1
    // add r5, r5, #4
    // cmp r4, #6
    // blo _021E79E2
    // mov r0, #0xff
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021E7A04: .word ov14_021F7BD8
    // TODO: decompile
}




void ov14_021E7A08(void) {
    // ldr r0, [r1, r0]
    // add r1, sp, #4
    // add r1, #2
    // add r2, sp, #4
    ManagedSprite_GetPositionXY((0xca << 2), *((u32*)(r0 + 0x34)));
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    ov14_021F2F88(r5, r6);
    // ldr r0, [sp, #0x20]
    // add r1, sp, #0
    // ldrsh r0, [r1, r0]
    // add r0, #8
    *((u16*)(r1 + 2)) = 2;
    // ldrsh r0, [r1, r0]
    // add r0, #8
    // ldrsh r0, [r1, r0]
    // strh r0, [r1]
    // strh r5, [r4]
    *((u16*)(r4 + 2)) = r7;
    // and r0, r2
    *((u32*)(r4 + 0x18)) = 3;
    *((u32*)(r4 + 4)) = r6;
    // add r3, sp, #0
    // ldrsh r0, [r3, r0]
    // ldrsh r2, [r3, r2]
    // add r1, #0x18
    // bic r5, r3
    // orr r3, r5
    // str r3, [r1]
    // sub r0, r2, r0
    // bic r5, r3
    // str r5, [r1]
    // sub r0, r0, r2
    // asr r0, r1, #2
    // add r0, r1, r0
    // asr r0, r0, #3
    *((u32*)(r4 + 0x10)) = (2 >> 0x1d);
    // add r3, sp, #0
    // ldrsh r0, [r3, r0]
    // ldrsh r1, [r3, r1]
    // orr r3, r5
    *((u32*)(r4 + 0x18)) = 2;
    // sub r0, r1, r0
    // bic r5, r3
    *((u32*)(r4 + 0x18)) = *((u32*)(r4 + 0x18));
    // sub r0, r0, r1
    // asr r0, r3, #2
    // add r0, r3, r0
    // asr r0, r0, #3
    *((u32*)(r4 + 0x14)) = (0 >> 0x1d);
    *((u32*)(r4 + 8)) = (6 << 8);
    *((u32*)(r4 + 0xc)) = (4 << 8);
}




void ov14_021E7AD4(void) {
}




void ov14_021E7AE4(void) {
}




void ov14_021E7B04(void) {
    // ldrh r1, [r4]
    ov14_021F396C(*((u32*)(r0 + 0x34)), *((u32*)(*((u32*)(*((u32*)(r0 + 0x34)) + 0xc)) + 4)), (*((u32*)(*((u32*)(*((u32*)(r0 + 0x34)) + 0xc)) + 0x18)) >> 2));
    ov14_021F39A0(*((u32*)(r4 + 4)));
    ov14_021F3B5C(*((u32*)(r5 + 0x34)));
    // add r0, r1, r0
    // sub r0, r1, r0
    *((u32*)(r4 + 8)) = *((u32*)(r4 + 0x10));
    // add r0, r1, r0
    // sub r0, r1, r0
    *((u32*)(r4 + 0xc)) = *((u32*)(r4 + 0x14));
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    ov14_021F395C(*((u32*)(r5 + 0x34)), (*((u32*)(r4 + 8)) << 8), (*((u32*)(r4 + 0xc)) << 8));
    ov14_021F3B5C(*((u32*)(r5 + 0x34)));
    // and r2, r0
    // orr r0, r2
    *((u32*)(r4 + 0x18)) = (((*((u32*)(r4 + 0x18)) >> 2) + 1) << 2);
}




void ov14_021E7B8C(void) {
}




void ov14_021E7B98(void) {
}




void ov14_021E7BA4(void) {
    sub_0201956C(*((u32*)(*((u32*)(r0 + 0x34)) + 0x14)), 2, 0x11, 0xa);
    // str r0, [r2, r1]
    // str r0, [sp]
    // ldr r0, [r0, r1]
    sub_020195F4(*((u32*)(r4 + 0x34)), 0xd, 1, 0x20);
    // str r0, [sp]
    // ldr r0, [r1, r0]
    sub_020195F4((0x2f << 4), 1, 1, 0xb);
    // str r0, [sp]
    // ldr r0, [r1, r0]
    sub_020195F4((0x2f << 4), 2, 0, 0xb);
    // str r0, [sp]
    // ldr r0, [r1, r0]
    sub_020195F4((0x2f << 4), 0xc, 0, 0xb);
    ov14_021F6244(*((u32*)(r4 + 0x34)));
    ov14_021F62CC(*((u32*)(r4 + 0x34)));
    ov14_021F62E4(*((u32*)(r4 + 0x34)));
    ov14_021F62FC(*((u32*)(r4 + 0x34)));
    ov14_021F6314(r4);
    // str r0, [sp]
    // ldr r0, [r1, r0]
    sub_020195F4((0x2f << 4), 0, 0, 0x20);
    // ldr r0, [r1, r0]
    ov14_021E7D8C((0x2f << 4), 0, 0xc);
    // str r0, [sp]
    // ldr r0, [r1, r0]
    sub_020195F4((0x2f << 4), 0, 1, 0x20);
    // ldr r0, [r1, r0]
    ov14_021E7D8C((0x2f << 4), 0, 0xb);
    // ldr r0, [r1, r0]
    ov14_021E7D8C((0x2f << 4), 0xd, 0xd);
    // ldr r0, [r1, r0]
    ov14_021E7D8C((0x2f << 4), 1, 9);
    // ldr r0, [r1, r0]
    ov14_021E81A8((0x2f << 4), 1);
    ov14_021F63F0(*((u32*)(r4 + 0x34)));
    // str r0, [sp]
    // ldr r0, [r1, r0]
    sub_020195F4((0x2f << 4), 0x10, 6, 0x20);
    // ldr r0, [r1, r0]
    sub_020196E8((0x2f << 4), 0x10, 0, 0x18);
    // ldr r0, [r1, r0]
    ov14_021E7D8C((0x2f << 4), 0x10, 0x55);
    // str r0, [sp]
    // ldr r0, [r1, r0]
    sub_020195F4((0x2f << 4), 0x10, 6, 0xc);
    // ldr r0, [r1, r0]
    sub_020196E8((0x2f << 4), 0x10, 0x20, 0xc);
    // ldr r0, [r1, r0]
    ov14_021E7D8C((0x2f << 4), 0x10, 0x56);
    // ldr r0, [r1, r0]
    ov14_021E7D8C((0x2f << 4), 2, 0xa);
    ov14_021F63C8(*((u32*)(r4 + 0x34)));
    // ldr r0, [r1, r0]
    ov14_021E8394((0x2f << 4), *((u32*)(r4 + 0x34)));
    // ldr r0, [r1, r0]
    ov14_021E85AC((0x2f << 4), *((u32*)(r4 + 0x34)));
    // ldr r0, [r1, r0]
    ov14_021E8600((0x2f << 4), *((u32*)(r4 + 0x34)));
}




void ov14_021E7D7C(void) {
    // mov r1, #0x2f
    // lsl r1, r1, #4
    // ldr r3, _021E7D88 ; =sub_020195C0
    // ldr r0, [r0, r1]
    // bx r3
    // nop
    // _021E7D88: .word sub_020195C0
    // TODO: decompile
}




void ov14_021E7D8C(void) {
}




void ov14_021E7D9C(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // mov r0, #0x2f
    // ldr r1, [r5, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // mov r1, #2
    // bl sub_02019B08
    // lsr r2, r4, #1
    // lsl r1, r2, #1
    // add r1, r2, r1
    // add r1, r1, #2
    // lsl r1, r1, #0x18
    // lsr r2, r1, #0x18
    // mov r1, #0xb
    // mul r1, r2
    // lsl r1, r1, #1
    // add r1, r0, r1
    // lsl r0, r4, #0x1f
    // lsr r0, r0, #0x1d
    // add r0, r0, #3
    // lsl r0, r0, #0x18
    // ldr r3, [r5, #0x34]
    // ldr r2, _021E7DF4 ; =0x000040C0
    // lsr r0, r0, #0x17
    // ldr r3, [r3, r2]
    // mov r2, #1
    // lsl r2, r4
    // tst r2, r3
    // bne _021E7DE0
    // add r4, #0xb
    // b _021E7DE2
    // add r4, #0x2b
    // lsl r2, r4, #0x10
    // lsr r4, r2, #0x10
    // mov r2, #0xf
    // ldrh r3, [r1, r0]
    // lsl r2, r2, #0xc
    // and r2, r3
    // add r2, r2, r4
    // strh r2, [r1, r0]
    // pop {r3, r4, r5, pc}
    // _021E7DF4: .word 0x000040C0
    // TODO: decompile
}




void ov14_021E7DF8(void) {
}




void ov14_021E7E10(void) {
    // push {r4, r5, r6, lr}
    // add r4, r0, #0
    // ldr r5, [r4, #0x34]
    // ldr r6, _021E7E3C ; =0x000040C0
    // mov r2, #1
    // ldr r3, [r5, r6]
    // lsl r2, r1
    // eor r2, r3
    // str r2, [r5, r6]
    // bl ov14_021E7D9C
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // mov r1, #2
    // mov r2, #0x15
    // mov r3, #6
    // bl sub_020196E8
    // pop {r4, r5, r6, pc}
    // nop
    // _021E7E3C: .word 0x000040C0
    // TODO: decompile
}




void ov14_021E7E40(void) {
    sub_020196E8(2, 0x15, 0x18);
    // str r0, [sp]
    sub_020198FC(r4, 2, 0, (0 - 1));
}




void ov14_021E7E64(void) {
}




void ov14_021E7E78(void) {
}




void ov14_021E7E88(void) {
}




void ov14_021E7E98(void) {
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    FillBgTilemapRect(*((u32*)(*((u32*)(r0 + 0x34)) + 0x14)), 1, 0, 2);
}




void ov14_021E7EC0(void) {
}




void ov14_021E7ED0(void) {
}




void ov14_021E7EE0(void) {
    // add r2, sp, #4
    // add r2, #1
    // add r3, sp, #4
    sub_02019B1C(1);
    // add r0, sp, #4
    // ldrsb r0, [r0, r2]
    // str r0, [sp]
    sub_020198FC(r4, 1, 0, (1 - 2));
    // add r5, sp, #4
    // ldrsb r0, [r5, r0]
    // ldrsb r3, [r5, r3]
    // add r3, #0xf
    // asr r3, r3, #0x18
    sub_020196E8(r4, 0xa, 0x18, (0 << 0x18));
    // ldrsb r0, [r0, r2]
    // sub r3, #0xb
    // str r0, [sp]
    sub_020198FC(r4, 0xa, 0, 0xa);
}




void ov14_021E7F4C(void) {
    // add r2, sp, #4
    // add r2, #1
    // add r3, sp, #4
    sub_02019B1C(1);
    // add r0, sp, #4
    // ldrsb r1, [r0, r2]
    // sub r0, r0, r1
    // str r0, [sp]
    sub_020198FC(r4, 1, 0, 1);
    // add r5, sp, #4
    // ldrsb r0, [r5, r0]
    // ldrsb r3, [r5, r3]
    // add r3, #0xf
    // asr r3, r3, #0x18
    sub_020196E8(r4, 0xa, 0x18, (0 << 0x18));
    // ldrsb r1, [r0, r2]
    // sub r0, r0, r1
    // str r0, [sp]
    sub_020198FC(r4, 0xa, 0, 1);
}




void ov14_021E7FB8(void) {
    // add r2, sp, #4
    // add r2, #1
    // add r3, sp, #4
    sub_02019B1C(1);
    // add r0, sp, #4
    // ldrsb r1, [r0, r2]
    // sub r0, r0, r1
    // str r0, [sp]
    sub_020198FC(r4, 1, 0, 1);
}




void ov14_021E7FEC(void) {
    // add r2, sp, #4
    // add r2, #1
    // add r3, sp, #4
    sub_02019B1C(1);
    // add r0, sp, #4
    // ldrsb r0, [r0, r2]
    // str r0, [sp]
    sub_020198FC(r4, 1, 0, (1 - 2));
}




void ov14_021E8020(void) {
    // str r1, [sp]
    sub_020198FC(1, 1, 0);
    // str r0, [sp]
    sub_020198FC(r4, 0xa, 1, 0);
}




void ov14_021E8048(void) {
}




void ov14_021E805C(void) {
    // str r1, [sp]
    sub_020198FC(1, (1 - 2), 0);
    sub_020196E8(r4, 0xa, 0x2b, 0x15);
    // str r0, [sp]
    // sub r2, #0xb
    sub_020198FC(r4, 0xa, 0xa, 0);
}




void ov14_021E8094(void) {
}




void ov14_021E80A8(void) {
    // ldr r0, [r1, r0]
    // add r2, sp, #0
    // add r3, sp, #0
    // add r2, #3
    // add r3, #2
    sub_02019B1C((0x2f << 4), 1);
    // ldr r0, [r1, r0]
    sub_02019978((0x2f << 4), 1);
    // ldr r0, [r1, r0]
    sub_02019978((0x2f << 4), 0xa);
    // ldr r0, [r1, r0]
    sub_02019978((0x2f << 4), 0xf);
    // add r2, sp, #0
    // ldr r0, [r1, r0]
    // add r2, #1
    // add r3, sp, #0
    sub_02019B1C((0x2f << 4), 1);
    // add r0, sp, #0
    // ldrsb r2, [r0, r1]
    // ldrsb r1, [r0, r1]
    // ldrsb r2, [r0, r1]
    // ldrsb r0, [r0, r1]
    ov14_021F32E0(r5, 0);
}




void ov14_021E813C(void) {
    // ldr r0, [r1, r0]
    // add r2, sp, #0
    // add r3, sp, #0
    // add r2, #3
    // add r3, #2
    sub_02019B1C((0x2f << 4), 1);
    // ldr r0, [r1, r0]
    sub_02019978((0x2f << 4), 1);
    // add r2, sp, #0
    // ldr r0, [r1, r0]
    // add r2, #1
    // add r3, sp, #0
    sub_02019B1C((0x2f << 4), 1);
    // add r1, sp, #0
    // ldrsb r2, [r1, r0]
    // ldrsb r0, [r1, r0]
    // ldrsb r2, [r1, r0]
    // ldrsb r0, [r1, r0]
    ov14_021F32E0(r5);
}




void ov14_021E81A8(void) {
}




void ov14_021E81B4(void) {
    sub_020196E8(0xd, 0, (0 - 7));
    // str r0, [sp]
    sub_020198FC(r4, 0xd, 0, 1);
}




void ov14_021E81D8(void) {
    sub_020196E8(0xd, 0, 0);
    // str r0, [sp]
    sub_020198FC(r4, 0xd, 0, (0 - 1));
}




void ov14_021E81FC(void) {
    ov14_021F5C84(0);
    // ldr r0, [r1, r0]
    sub_020196E8((0x2f << 4), 8, 0, 0x15);
}




void ov14_021E821C(void) {
}




void ov14_021E8234(void) {
}




void ov14_021E8248(void) {
}




void ov14_021E825C(void) {
    ov14_021F5E94(0);
    // ldr r0, [r1, r0]
    sub_020196E8((0x2f << 4), 9, 0xc, 0x15);
}




void ov14_021E827C(void) {
}




void ov14_021E8294(void) {
}




void ov14_021E82A8(void) {
}




void ov14_021E82BC(void) {
    ov14_021F5EB4(0);
    // ldr r0, [r1, r0]
    sub_020196E8((0x2f << 4), 0xa, 0x18, 0x15);
}




void ov14_021E82DC(void) {
    ov14_021F5EC4(0);
    // ldr r0, [r1, r0]
    sub_020196E8((0x2f << 4), 0xa, 0x18, 0x15);
}




void ov14_021E82FC(void) {
}




void ov14_021E8314(void) {
}




void ov14_021E8328(void) {
    sub_020196E8(0xa, 0x18, 0x18);
    // str r0, [sp]
    sub_020198FC(r4, 0xa, 0, (0 - 1));
}




void ov14_021E834C(void) {
}




void ov14_021E8368(void) {
}




void ov14_021E8394(void) {
    // asr r3, r3, #0x18
    sub_020196E8(r0, (0 + 3), 0x20, (5 << 0x18));
    sub_020196E8(r6, 0xb, 0x18, 0x18);
}




void ov14_021E83C4(void) {
    // asr r3, r3, #0x18
    sub_020196E8(r0, (0 + 3), 0x15, (5 << 0x18));
    sub_020196E8(r6, 0xb, 0x18, 0x15);
}




void ov14_021E83F4(void) {
    sub_0201980C(r0, (0 + 3));
    // asr r3, r3, #0x18
    sub_020196E8(r6, (r4 + 3), r7, (r5 << 0x18));
    sub_0201980C(r6, 0xb);
    sub_020196E8(r6, 0xb, 0x18, 0x18);
}




void ov14_021E8434(void) {
    // add r2, sp, #4
    // add r2, #1
    // add r3, sp, #4
    sub_02019B1C(3);
    // add r6, sp, #4
    // ldrsb r0, [r6, r0]
    // ldrsb r0, [r6, r7]
    // sub r0, #0x15
    // str r0, [sp]
    // mvn r2, r2
    sub_020198FC(r5, (0 + 3), 0, 0);
    // add r2, sp, #4
    // add r2, #1
    // add r3, sp, #4
    sub_02019B1C(r5, 0xb);
    // add r0, sp, #4
    // ldrsb r0, [r0, r2]
    // sub r3, #0xc
    // sub r0, #0x15
    // str r0, [sp]
    sub_020198FC(r5, 0xb, 0, 0xb);
}




void ov14_021E84A4(void) {
    // add r2, sp, #4
    // add r2, #1
    // add r3, sp, #4
    sub_02019B1C(3);
    // add r6, sp, #4
    // ldrsb r0, [r6, r0]
    // ldrsb r0, [r6, r0]
    // sub r0, r7, r0
    // str r0, [sp]
    sub_020198FC(r5, (0 + 3), 1, 0);
    // add r2, sp, #4
    // add r2, #1
    // add r3, sp, #4
    sub_02019B1C(r5, 0xb);
    // add r0, sp, #4
    // ldrsb r1, [r0, r2]
    // sub r0, r0, r1
    // str r0, [sp]
    sub_020198FC(r5, 0xb, 0, 1);
}




void ov14_021E8514(void) {
    sub_02019978(r0, (0 + 3));
    sub_02019978(r5, 0xb);
}




void ov14_021E8544(void) {
}




void ov14_021E8560(void) {
    sub_020196E8(0xc, 0x20, 0xe);
    // str r0, [sp]
    // sub r2, #0xd
    sub_020198FC(r4, 0xc, 0xc, 0);
}




void ov14_021E8588(void) {
    sub_020196E8(0xc, 0x15, 0xe);
    // str r0, [sp]
    sub_020198FC(r4, 0xc, 1, 0);
}




void ov14_021E85AC(void) {
}




void ov14_021E85BC(void) {
}




void ov14_021E85D0(void) {
}




void ov14_021E85E4(void) {
}




void ov14_021E8600(void) {
}




void ov14_021E8610(void) {
}




void ov14_021E8620(void) {
}




void ov14_021E8634(void) {
}




void ov14_021E8648(void) {
}




void ov14_021E8664(void) {
    ov14_021E82DC();
    // ldr r0, [r1, r0]
    sub_0201980C((0x2f << 4), 8);
    // ldr r0, [r1, r0]
    sub_0201980C((0x2f << 4), 9);
    // ldr r0, [r1, r0]
    sub_020196E8((0x2f << 4), 8, 0, 0x18);
    // ldr r0, [r1, r0]
    sub_020196E8((0x2f << 4), 9, 0xc, 0x18);
    // ldr r0, [r1, r0]
    sub_020196E8((0x2f << 4), 0, 0, 0);
    ov14_021F57B8(r4);
    ov14_021F4720(r4);
    ov14_021F4848(r4);
    ov14_021F48B4(r4);
    ov14_021F47B8(r4, 0x30);
}




void ov14_021E86E0(void) {
    sub_020196E8(0, 0, (0 - 6));
    // str r0, [sp]
    sub_020198FC(r4, 0, 0, 1);
}




void ov14_021E8704(void) {
}




void ov14_021E8718(void) {
}




void ov14_021E8740(void) {
    ov14_021E8664();
    ov14_021F6070(r4);
    // ldr r0, [r1, r0]
    ov14_021E8718((0x2f << 4), *((u32*)(r4 + 0x34)));
}




void ov14_021E875C(void) {
    sub_020196E8(0xc, 0x20, 8);
    sub_020196E8(r4, 6, 0x20, 0xe);
    sub_020196E8(r4, 7, 0x20, 0x11);
    // str r0, [sp]
    // sub r2, #0xd
    sub_020198FC(r4, 0xc, 0xc, 0);
    // str r0, [sp]
    sub_020198FC(r4, 6, (6 - 7), 0);
    // str r0, [sp]
    // sub r2, #8
    sub_020198FC(r4, 7, 7, 0);
}




void ov14_021E87BC(void) {
    // str r1, [sp]
    sub_020198FC(0xc, 1, 0);
    // str r0, [sp]
    sub_020198FC(r4, 6, 1, 0);
    // str r0, [sp]
    sub_020198FC(r4, 7, 1, 0);
}




void ov14_021E87F4(void) {
    // ldr r0, [r1, r0]
    sub_0201980C((0x2f << 4), 8);
    // ldr r0, [r1, r0]
    sub_0201980C((0x2f << 4), 9);
    ov14_021E821C(r4);
    ov14_021E827C(r4);
}




void ov14_021E8824(void) {
    // push {r3, lr}
    // ldr r1, _021E8848 ; =0x0000044E
    // ldrb r1, [r0, r1]
    // lsl r1, r1, #0x19
    // lsr r1, r1, #0x1d
    // beq _021E8846
    // mov r1, #0xc
    // str r1, [sp]
    // mov r1, #0x2f
    // lsl r1, r1, #4
    // ldr r0, [r0, r1]
    // mov r1, #0x10
    // add r2, r1, #0
    // sub r2, #0x11
    // mov r3, #0
    // bl sub_020198FC
    // pop {r3, pc}
    // _021E8848: .word 0x0000044E
    // TODO: decompile
}




void ov14_021E884C(void) {
    // push {r3, lr}
    // ldr r1, _021E8870 ; =0x0000044E
    // ldrb r1, [r0, r1]
    // lsl r1, r1, #0x19
    // lsr r1, r1, #0x1d
    // beq _021E886C
    // mov r1, #0xc
    // str r1, [sp]
    // mov r1, #0x2f
    // lsl r1, r1, #4
    // ldr r0, [r0, r1]
    // mov r1, #0x10
    // mov r2, #1
    // mov r3, #0
    // bl sub_020198FC
    // pop {r3, pc}
    // nop
    // _021E8870: .word 0x0000044E
    // TODO: decompile
}




void ov14_021E8874(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _021E88A0 ; =0x0000044E
    // ldrb r0, [r4, r0]
    // lsl r0, r0, #0x19
    // lsr r0, r0, #0x1d
    // beq _021E889E
    // mov r0, #0x2f
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #0x10
    // bl sub_0201980C
    // mov r0, #0x2f
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #0x10
    // mov r2, #0x14
    // mov r3, #0xc
    // bl sub_020196E8
    // pop {r4, pc}
    // _021E88A0: .word 0x0000044E
    // TODO: decompile
}




void ov14_021E88A4(void) {
}




void ov14_021E88BC(void) {
    // add r2, sp, #4
    // add r2, #1
    // add r3, sp, #4
    sub_02019B1C(0x10);
    // add r0, sp, #4
    // ldrsb r1, [r0, r2]
    // sub r1, r0, r1
    // sub r0, r0, r1
    // str r0, [sp]
    // sub r3, #0x11
    sub_020198FC(r4, 0x10, 0, 0x10);
}




void ov14_021E88F8(void) {
    // add r2, sp, #4
    // add r2, #1
    // add r3, sp, #4
    sub_02019B1C(0x10);
    // add r0, sp, #4
    // ldrsb r1, [r0, r2]
    // sub r0, r0, r1
    // str r0, [sp]
    sub_020198FC(r4, 0x10, 0, 1);
}




void ov14_021E892C(void) {
}




void ov14_021E8944(void) {
}




void ov14_021E895C(void) {
    // lsl r0, r4
    // tst r0, r6
    // add r0, #0x3a
    // add r0, #0x1a
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r3, #0xf
    FillBgTilemapRect(*((u32*)(*((u32*)(r0 + 0x34)) + 0x14)), 5, ((0 << 0x10) >> 0x10), ((0 << 0x18) >> 0x18));
    ScheduleBgTilemapBufferTransfer(*((u32*)(*((u32*)(r5 + 0x34)) + 0x14)), 5);
}




void ov14_021E89B8(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // mov r0, #9
    // mov r1, #0x3c
    // bl Heap_Alloc
    // str r0, [r5, #0x18]
    // add r4, r0, #0
    // add r0, r5, #0
    // add r0, #0x21
    // ldrb r0, [r0]
    // cmp r0, #0x1e
    // bhs _021E89EE
    // ldrb r1, [r5, #0x1f]
    // add r0, r5, #0
    // mov r2, #0
    // bl ov14_021E60C0
    // str r0, [r4]
    // mov r0, #2
    // strb r0, [r4, #0x11]
    // mov r0, #0x1e
    // strb r0, [r4, #0x13]
    // add r0, r5, #0
    // add r0, #0x21
    // ldrb r0, [r0]
    // b _021E8A06
    // ldr r0, [r5, #8]
    // str r0, [r4]
    // mov r0, #1
    // strb r0, [r4, #0x11]
    // ldr r0, [r5, #8]
    // bl Party_GetCount
    // strb r0, [r4, #0x13]
    // add r0, r5, #0
    // add r0, #0x21
    // ldrb r0, [r0]
    // sub r0, #0x1e
    // strb r0, [r4, #0x14]
    // ldr r0, [r5, #0x10]
    // str r0, [r4, #4]
    // ldr r0, [r5]
    // ldr r0, [r0]
    // bl Save_PlayerData_GetProfile
    // add r1, r0, #0
    // add r0, r4, #0
    // bl sub_0208AD34
    // mov r0, #0
    // strb r0, [r4, #0x12]
    // ldr r1, _021E8A74 ; =ov14_021F7D0C
    // add r0, r4, #0
    // bl sub_02089D40
    // mov r0, #0
    // strb r0, [r4, #0x16]
    // strb r0, [r4, #0x17]
    // strh r0, [r4, #0x18]
    // ldr r0, [r5]
    // ldr r0, [r0]
    // bl SaveArray_IsNatDexEnabled
    // str r0, [r4, #0x1c]
    // ldr r0, [r5]
    // ldr r0, [r0]
    // bl Save_SpecialRibbons_Get
    // str r0, [r4, #0x20]
    // mov r0, #0
    // str r0, [r4, #0x24]
    // str r0, [r4, #0x28]
    // ldr r0, [r5]
    // ldr r0, [r0]
    // bl sub_02088288
    // str r0, [r4, #0x2c]
    // ldr r0, [r5]
    // ldr r0, [r0]
    // bl sub_0208828C
    // str r0, [r4, #0x34]
    // ldr r0, [r5]
    // add r1, r4, #0
    // ldr r0, [r0, #4]
    // mov r2, #9
    // str r0, [r4, #0x30]
    // ldr r0, _021E8A78 ; =gOverlayTemplate_PokemonSummary
    // bl OverlayManager_New
    // str r0, [r5, #0x14]
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // _021E8A74: .word ov14_021F7D0C
    // _021E8A78: .word gOverlayTemplate_PokemonSummary
    // TODO: decompile
}




void ov14_021E8A7C(void) {
    // add r1, #0x27
    // ldrb r1, [r1]
    // add r1, #0x21
    // ldrb r1, [r1]
    // add r1, #0x21
    // strb r2, [r1]
    // add r2, #0x1e
    // add r1, #0x21
    // strb r2, [r1]
    // add r1, #0x21
    // ldrb r1, [r1]
    PCStorage_SetBoxModified(*((u32*)(r0 + 4)), *((u8*)(r0 + 0x1f)), *((u8*)(*((u32*)(r0 + 0x18)) + 0x14)));
    Heap_Free(*((u32*)(r4 + 0x18)));
}




void ov14_021E8ACC(void) {
    // push {r3, r4, lr}
    // sub sp, #4
    // add r4, r0, #0
    // ldr r0, [r4]
    // ldr r0, [r0]
    // bl Save_Bag_Get
    // ldr r1, _021E8B10 ; =ov14_021F7D14
    // mov r2, #9
    // bl Bag_CreateView
    // str r0, [r4, #0x18]
    // ldr r1, [r4]
    // mov r2, #1
    // ldr r0, [r1, #4]
    // mov r3, #0
    // str r0, [sp]
    // ldr r0, [r4, #0x18]
    // ldr r1, [r1]
    // bl sub_0207789C
    // ldr r0, _021E8B14 ; =FS_OVERLAY_ID(OVY_15)
    // mov r1, #2
    // bl HandleLoadOverlay
    // ldr r0, _021E8B18 ; =ov15_022008B8
    // ldr r1, [r4, #0x18]
    // mov r2, #9
    // bl OverlayManager_New
    // str r0, [r4, #0x14]
    // mov r0, #0
    // add sp, #4
    // pop {r3, r4, pc}
    // _021E8B10: .word ov14_021F7D14
    // _021E8B14: .word FS_OVERLAY_ID(OVY_15)
    // _021E8B18: .word ov15_022008B8
    // TODO: decompile
}




void ov14_021E8B1C(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _021E8B38 ; =FS_OVERLAY_ID(OVY_15)
    // bl UnloadOverlayByID
    // ldr r0, [r4, #0x18]
    // bl BagView_GetItemId
    // strh r0, [r4, #0x1c]
    // ldr r0, [r4, #0x18]
    // bl Heap_Free
    // mov r0, #0
    // pop {r4, pc}
    // _021E8B38: .word FS_OVERLAY_ID(OVY_15)
    // TODO: decompile
}




void ov14_021E8B3C(void) {
    // push {r4, lr}
    // sub sp, #8
    // add r4, r0, #0
    // ldr r0, [r4, #0x10]
    // mov r1, #2
    // str r0, [sp]
    // ldr r0, [r4]
    // mov r2, #0
    // ldr r0, [r0, #4]
    // mov r3, #8
    // str r0, [sp, #4]
    // mov r0, #9
    // bl NamingScreen_CreateArgs
    // str r0, [r4, #0x18]
    // add r1, r4, #0
    // add r1, #0x25
    // ldr r2, [r4, #0x18]
    // ldrb r1, [r1]
    // ldr r0, [r4, #4]
    // ldr r2, [r2, #0x18]
    // bl PCStorage_GetBoxName
    // ldr r0, _021E8B7C ; =gOverlayTemplate_NamingScreen
    // ldr r1, [r4, #0x18]
    // mov r2, #9
    // bl OverlayManager_New
    // str r0, [r4, #0x14]
    // mov r0, #0
    // add sp, #8
    // pop {r4, pc}
    // _021E8B7C: .word gOverlayTemplate_NamingScreen
    // TODO: decompile
}




u32 ov14_021E8B80(void) {
}




void ov14_021E8BA4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // mov r0, #0x2f
    // ldr r4, [r5, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // bl ov14_021E8514
    // add r6, r0, #0
    // mov r0, #0x2f
    // ldr r1, [r5, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // mov r1, #8
    // bl sub_02019978
    // add r7, r0, #0
    // mov r0, #0x2f
    // ldr r1, [r5, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // mov r1, #9
    // bl sub_02019978
    // str r0, [sp]
    // mov r0, #0x2f
    // ldr r1, [r5, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // mov r1, #0xa
    // bl sub_02019978
    // str r0, [sp, #4]
    // ldrh r0, [r4, #0x10]
    // cmp r0, #0
    // beq _021E8BF4
    // cmp r0, #1
    // beq _021E8CCC
    // b _021E8D0C
    // add r0, sp, #0xc
    // add r1, sp, #8
    // bl System_GetTouchHeldCoords
    // cmp r0, #0
    // bne _021E8C86
    // add r0, r5, #0
    // add r0, #0x24
    // ldrb r0, [r0]
    // mov r6, #0xff
    // cmp r0, #0
    // beq _021E8C24
    // ldr r1, [r5, #0x34]
    // ldr r2, _021E8D14 ; =0x000040B8
    // ldr r0, [r1, r2]
    // add r2, r2, #4
    // ldr r1, [r1, r2]
    // lsl r0, r0, #0x10
    // lsl r1, r1, #0x10
    // asr r0, r0, #0x10
    // asr r1, r1, #0x10
    // bl ov14_021E79D8
    // add r6, r0, #0
    // cmp r6, #0xff
    // bne _021E8C40
    // ldr r1, [r5, #0x34]
    // ldr r2, _021E8D14 ; =0x000040B8
    // ldr r0, [r1, r2]
    // add r2, r2, #4
    // ldr r1, [r1, r2]
    // lsl r0, r0, #0x10
    // lsl r1, r1, #0x10
    // asr r0, r0, #0x10
    // asr r1, r1, #0x10
    // bl ov14_021E7960
    // add r6, r0, #0
    // add r1, r5, #0
    // add r1, #0x21
    // ldrb r1, [r1]
    // add r0, r5, #0
    // add r2, r6, #0
    // bl ov14_021E6CF8
    // add r0, r5, #0
    // mov r1, #0
    // bl ov14_021F40E8
    // mov r0, #0x80
    // tst r0, r6
    // bne _021E8C6E
    // add r1, r5, #0
    // add r1, #0x21
    // ldrb r1, [r1]
    // add r0, r5, #0
    // bl ov14_021E70B0
    // add r1, r5, #0
    // add r1, #0x21
    // strb r0, [r1]
    // mov r0, #0x2f
    // ldr r1, [r5, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8434
    // ldr r0, [r5, #0x34]
    // bl ov14_021E8824
    // mov r0, #1
    // strh r0, [r4, #0x10]
    // b _021E8D0C
    // add r1, r5, #0
    // add r1, #0x21
    // ldrb r1, [r1]
    // ldr r0, [r5, #0x34]
    // add r2, r0, r1
    // ldr r1, _021E8D18 ; =0x00004094
    // ldrb r1, [r2, r1]
    // ldr r2, [sp, #8]
    // lsl r1, r1, #2
    // add r1, r0, r1
    // mov r0, #0xbf
    // lsl r0, r0, #2
    // lsl r2, r2, #0x10
    // ldr r0, [r1, r0]
    // ldr r1, [sp, #0xc]
    // asr r2, r2, #0x10
    // sub r2, #8
    // lsl r1, r1, #0x10
    // lsl r2, r2, #0x10
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    // bl ManagedSprite_SetPositionXY
    // add r0, r5, #0
    // bl ov14_021F4174
    // ldr r2, [sp, #0xc]
    // ldr r1, [r5, #0x34]
    // ldr r0, _021E8D14 ; =0x000040B8
    // str r2, [r1, r0]
    // ldr r2, [sp, #8]
    // ldr r1, [r5, #0x34]
    // add r0, r0, #4
    // str r2, [r1, r0]
    // b _021E8D0C
    // add r0, r5, #0
    // bl ov14_021E65C4
    // cmp r0, #0
    // bne _021E8D0C
    // cmp r6, #0
    // bne _021E8D0C
    // cmp r7, #0
    // bne _021E8D0C
    // ldr r0, [sp]
    // cmp r0, #0
    // bne _021E8D0C
    // ldr r0, [sp, #4]
    // cmp r0, #0
    // bne _021E8D0C
    // ldr r1, [r4, #0xc]
    // add r0, r5, #0
    // bl ov14_021E7148
    // add r0, r5, #0
    // bl ov14_021F4174
    // ldr r2, [r5, #0x34]
    // ldr r1, _021E8D1C ; =0x000040C4
    // add r0, r5, #0
    // ldr r1, [r2, r1]
    // bl ov14_021F40E8
    // mov r0, #0
    // add sp, #0x10
    // strh r0, [r4, #0x10]
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #1
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021E8D14: .word 0x000040B8
    // _021E8D18: .word 0x00004094
    // _021E8D1C: .word 0x000040C4
    // TODO: decompile
}




void ov14_021E8D20(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // add r4, r0, #0
    // mov r0, #0x2f
    // ldr r5, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // bl ov14_021E8514
    // add r7, r0, #0
    // ldrh r0, [r5, #0x10]
    // cmp r0, #0
    // bne _021E8D5C
    // add r1, r4, #0
    // add r1, #0x21
    // ldrb r1, [r1]
    // ldr r0, [r4, #0x34]
    // add r2, r0, r1
    // ldr r1, _021E8FC0 ; =0x00004094
    // ldrb r1, [r2, r1]
    // add r2, sp, #0
    // lsl r1, r1, #2
    // add r1, r0, r1
    // mov r0, #0xbf
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // add r1, sp, #0
    // add r1, #2
    // bl ManagedSprite_GetPositionXY
    // add r0, r4, #0
    // bl ov14_021E80A8
    // add r6, r0, #0
    // ldrh r0, [r5, #0x10]
    // cmp r0, #5
    // bls _021E8D6C
    // b _021E8FB8
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _021E8D78: ; jump table
    // ldr r0, [r4, #0x34]
    // ldr r1, _021E8FC4 ; =0x0000044A
    // ldrb r2, [r0, r1]
    // cmp r2, #1
    // bne _021E8DA8
    // cmp r6, #0
    // bne _021E8DA8
    // mov r2, #2
    // strb r2, [r0, r1]
    // add r0, r4, #0
    // mov r1, #0x28
    // bl ov14_021F69F0
    // add r0, r4, #0
    // mov r1, #1
    // mov r2, #0
    // bl ov14_021F3488
    // add r0, sp, #8
    // add r1, sp, #4
    // bl System_GetTouchHeldCoords
    // cmp r0, #0
    // bne _021E8EA8
    // add r1, r4, #0
    // add r1, #0x21
    // ldrb r1, [r1]
    // ldr r0, [r4, #0x34]
    // add r3, sp, #0
    // add r2, r0, r1
    // ldr r1, _021E8FC0 ; =0x00004094
    // ldrb r1, [r2, r1]
    // mov r2, #0
    // ldrsh r2, [r3, r2]
    // lsl r1, r1, #2
    // add r1, r0, r1
    // mov r0, #0xbf
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // mov r1, #2
    // ldrsh r1, [r3, r1]
    // bl ManagedSprite_SetPositionXY
    // ldr r1, [r4, #0x34]
    // ldr r0, _021E8FC4 ; =0x0000044A
    // ldr r2, _021E8FC8 ; =0x000040B8
    // ldrb r0, [r1, r0]
    // cmp r0, #2
    // bne _021E8DFA
    // ldr r0, [r1, r2]
    // add r2, r2, #4
    // ldr r1, [r1, r2]
    // lsl r0, r0, #0x10
    // lsl r1, r1, #0x10
    // asr r0, r0, #0x10
    // asr r1, r1, #0x10
    // bl ov14_021E7960
    // b _021E8E0E
    // ldr r0, [r1, r2]
    // add r2, r2, #4
    // ldr r1, [r1, r2]
    // lsl r0, r0, #0x10
    // lsl r1, r1, #0x10
    // ldr r2, _021E8FCC ; =ov14_021F7BF0
    // asr r0, r0, #0x10
    // asr r1, r1, #0x10
    // bl ov14_021E79AC
    // add r1, r4, #0
    // add r1, #0x21
    // ldrb r1, [r1]
    // add r2, r0, #0
    // add r0, r4, #0
    // bl ov14_021E6CF8
    // add r0, r4, #0
    // mov r1, #0
    // bl ov14_021F40E8
    // add r1, r4, #0
    // add r1, #0x21
    // ldrb r1, [r1]
    // add r0, r4, #0
    // bl ov14_021E70B0
    // add r1, r4, #0
    // add r1, #0x21
    // strb r0, [r1]
    // add r0, r4, #0
    // add r0, #0x21
    // ldrb r0, [r0]
    // cmp r0, #0x1e
    // bhs _021E8E44
    // mov r2, #0
    // b _021E8E46
    // mov r2, #1
    // ldr r1, [r4, #0x34]
    // ldr r0, _021E8FD0 ; =0x000040C4
    // str r2, [r1, r0]
    // add r0, r4, #0
    // add r0, #0x21
    // ldrb r1, [r0]
    // cmp r1, #0x1e
    // bhs _021E8E84
    // add r0, r4, #0
    // mov r2, #0xac
    // mov r3, #0
    // bl ov14_021E6070
    // cmp r0, #0
    // bne _021E8E6A
    // mov r0, #3
    // strh r0, [r5, #0x10]
    // b _021E8FB8
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E7EE0
    // add r0, r4, #0
    // mov r1, #0xff
    // bl ov14_021E7588
    // mov r0, #1
    // strh r0, [r5, #0x10]
    // b _021E8FB8
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E7FEC
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8434
    // ldr r0, [r4, #0x34]
    // bl ov14_021E8824
    // mov r0, #1
    // strh r0, [r5, #0x10]
    // b _021E8FB8
    // cmp r7, #0
    // bne _021E8ED8
    // ldr r0, [r4, #0x34]
    // ldr r1, _021E8FC4 ; =0x0000044A
    // ldrb r1, [r0, r1]
    // cmp r1, #0
    // bne _021E8ED8
    // ldr r2, [sp, #8]
    // cmp r2, #0x10
    // blo _021E8EC6
    // ldr r1, [sp, #4]
    // cmp r1, #0x30
    // blo _021E8EC6
    // cmp r2, #0x68
    // blo _021E8ED8
    // ldr r1, _021E8FC4 ; =0x0000044A
    // mov r2, #1
    // strb r2, [r0, r1]
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E7FB8
    // add r1, r4, #0
    // add r1, #0x21
    // ldrb r1, [r1]
    // ldr r0, [r4, #0x34]
    // add r2, r0, r1
    // ldr r1, _021E8FC0 ; =0x00004094
    // ldrb r1, [r2, r1]
    // ldr r2, [sp, #4]
    // lsl r1, r1, #2
    // add r1, r0, r1
    // mov r0, #0xbf
    // lsl r0, r0, #2
    // lsl r2, r2, #0x10
    // ldr r0, [r1, r0]
    // ldr r1, [sp, #8]
    // asr r2, r2, #0x10
    // sub r2, #8
    // lsl r1, r1, #0x10
    // lsl r2, r2, #0x10
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    // bl ManagedSprite_SetPositionXY
    // add r0, r4, #0
    // bl ov14_021F4174
    // ldr r2, [sp, #8]
    // ldr r1, [r4, #0x34]
    // ldr r0, _021E8FC8 ; =0x000040B8
    // str r2, [r1, r0]
    // ldr r2, [sp, #4]
    // ldr r1, [r4, #0x34]
    // add r0, r0, #4
    // str r2, [r1, r0]
    // b _021E8FB8
    // add r0, r4, #0
    // bl ov14_021E6814
    // cmp r0, #0
    // bne _021E8FB8
    // cmp r7, #0
    // bne _021E8FB8
    // cmp r6, #0
    // bne _021E8FB8
    // ldr r1, [r5, #0xc]
    // add r0, r4, #0
    // bl ov14_021E7148
    // add r0, r4, #0
    // add r0, #0x21
    // ldrb r0, [r0]
    // cmp r0, #0x1e
    // bhs _021E8F4A
    // add r0, r4, #0
    // mov r1, #0xff
    // add r0, #0x21
    // strb r1, [r0]
    // add r0, r4, #0
    // bl ov14_021F4174
    // ldr r2, [r4, #0x34]
    // ldr r1, _021E8FD0 ; =0x000040C4
    // add r0, r4, #0
    // ldr r1, [r2, r1]
    // bl ov14_021F40E8
    // mov r0, #5
    // strh r0, [r5, #0x10]
    // b _021E8FB8
    // add r0, r4, #0
    // bl ov14_021E66F4
    // cmp r0, #0
    // bne _021E8FB8
    // ldr r1, [r5, #0xc]
    // add r0, r4, #0
    // bl ov14_021E7148
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E7EE0
    // add r0, r4, #0
    // mov r1, #0xff
    // bl ov14_021E7588
    // mov r0, #0xff
    // add r4, #0x21
    // strb r0, [r4]
    // ldrh r0, [r5, #0x10]
    // add r0, r0, #1
    // strh r0, [r5, #0x10]
    // b _021E8FB8
    // cmp r6, #0
    // bne _021E8FB8
    // mov r0, #5
    // strh r0, [r5, #0x10]
    // b _021E8FB8
    // mov r1, #1
    // add r0, r4, #0
    // add r2, r1, #0
    // bl ov14_021F3488
    // ldr r2, [r4, #0x34]
    // ldr r1, _021E8FC4 ; =0x0000044A
    // mov r0, #0
    // strb r0, [r2, r1]
    // add sp, #0xc
    // strh r0, [r5, #0x10]
    // pop {r4, r5, r6, r7, pc}
    // mov r0, #1
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _021E8FC0: .word 0x00004094
    // _021E8FC4: .word 0x0000044A
    // _021E8FC8: .word 0x000040B8
    // _021E8FCC: .word ov14_021F7BF0
    // _021E8FD0: .word 0x000040C4
    // TODO: decompile
}




void ov14_021E8FD4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r5, r0, #0
    // mov r0, #0x2f
    // ldr r4, [r5, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #0xe
    // bl sub_02019978
    // add r6, r0, #0
    // mov r0, #0x2f
    // ldr r1, [r5, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // mov r1, #0xf
    // bl sub_02019978
    // add r7, r0, #0
    // ldrh r0, [r4, #0x10]
    // cmp r0, #0
    // beq _021E900C
    // cmp r0, #1
    // beq _021E90F8
    // cmp r0, #2
    // bne _021E900A
    // b _021E914E
    // b _021E9180
    // add r0, sp, #4
    // add r1, sp, #0
    // bl System_GetTouchHeldCoords
    // cmp r0, #0
    // bne _021E90B2
    // add r0, r5, #0
    // add r0, #0x24
    // ldrb r0, [r0]
    // mov r6, #0xff
    // cmp r0, #0
    // beq _021E903C
    // ldr r1, [r5, #0x34]
    // ldr r2, _021E9188 ; =0x000040B8
    // ldr r0, [r1, r2]
    // add r2, r2, #4
    // ldr r1, [r1, r2]
    // lsl r0, r0, #0x10
    // lsl r1, r1, #0x10
    // asr r0, r0, #0x10
    // asr r1, r1, #0x10
    // bl ov14_021E79D8
    // add r6, r0, #0
    // cmp r6, #0xff
    // bne _021E9058
    // ldr r1, [r5, #0x34]
    // ldr r2, _021E9188 ; =0x000040B8
    // ldr r0, [r1, r2]
    // add r2, r2, #4
    // ldr r1, [r1, r2]
    // lsl r0, r0, #0x10
    // lsl r1, r1, #0x10
    // asr r0, r0, #0x10
    // asr r1, r1, #0x10
    // bl ov14_021E7960
    // add r6, r0, #0
    // cmp r6, #0xff
    // bne _021E9076
    // ldr r1, [r5, #0x34]
    // ldr r2, _021E9188 ; =0x000040B8
    // ldr r0, [r1, r2]
    // add r2, r2, #4
    // ldr r1, [r1, r2]
    // lsl r0, r0, #0x10
    // lsl r1, r1, #0x10
    // ldr r2, _021E918C ; =ov14_021F7C08
    // asr r0, r0, #0x10
    // asr r1, r1, #0x10
    // bl ov14_021E79AC
    // add r6, r0, #0
    // add r1, r5, #0
    // add r1, #0x21
    // ldrb r1, [r1]
    // add r0, r5, #0
    // add r2, r6, #0
    // bl ov14_021E6CF8
    // add r0, r5, #0
    // mov r1, #0
    // bl ov14_021F40E8
    // mov r0, #0x80
    // tst r0, r6
    // bne _021E90A4
    // add r1, r5, #0
    // add r1, #0x21
    // ldrb r1, [r1]
    // add r0, r5, #0
    // bl ov14_021E70B0
    // add r1, r5, #0
    // add r1, #0x21
    // strb r0, [r1]
    // ldr r0, [r5, #0x34]
    // bl ov14_021E884C
    // ldrh r0, [r4, #0x10]
    // add r0, r0, #1
    // strh r0, [r4, #0x10]
    // b _021E9180
    // add r1, r5, #0
    // add r1, #0x21
    // ldrb r1, [r1]
    // ldr r0, [r5, #0x34]
    // add r2, r0, r1
    // ldr r1, _021E9190 ; =0x00004094
    // ldrb r1, [r2, r1]
    // ldr r2, [sp]
    // lsl r1, r1, #2
    // add r1, r0, r1
    // mov r0, #0xbf
    // lsl r0, r0, #2
    // lsl r2, r2, #0x10
    // ldr r0, [r1, r0]
    // ldr r1, [sp, #4]
    // asr r2, r2, #0x10
    // sub r2, #8
    // lsl r1, r1, #0x10
    // lsl r2, r2, #0x10
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    // bl ManagedSprite_SetPositionXY
    // add r0, r5, #0
    // bl ov14_021F4174
    // ldr r2, [sp, #4]
    // ldr r1, [r5, #0x34]
    // ldr r0, _021E9188 ; =0x000040B8
    // str r2, [r1, r0]
    // ldr r2, [sp]
    // ldr r1, [r5, #0x34]
    // add r0, r0, #4
    // str r2, [r1, r0]
    // b _021E9180
    // cmp r6, #0
    // bne _021E914E
    // cmp r7, #0
    // bne _021E914E
    // ldr r6, [r4, #0xc]
    // add r0, r6, #0
    // add r0, #0xe8
    // ldr r1, [r0]
    // cmp r1, #0xff
    // beq _021E913C
    // mov r0, #0x80
    // tst r0, r1
    // beq _021E913C
    // add r0, r6, #0
    // add r0, #0xe4
    // ldr r0, [r0]
    // cmp r0, #0x1e
    // blo _021E9148
    // ldr r0, [r5, #8]
    // bl Party_GetCount
    // add r6, #0xe4
    // ldr r1, [r6]
    // sub r0, r0, #1
    // sub r1, #0x1e
    // cmp r1, r0
    // bhs _021E9148
    // mov r0, #0x2f
    // ldr r1, [r5, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8620
    // b _021E9148
    // mov r0, #0x2f
    // ldr r1, [r5, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8620
    // ldrh r0, [r4, #0x10]
    // add r0, r0, #1
    // strh r0, [r4, #0x10]
    // add r0, r5, #0
    // bl ov14_021E65C4
    // cmp r0, #0
    // bne _021E9180
    // cmp r7, #0
    // bne _021E9180
    // ldrh r0, [r4, #0x10]
    // cmp r0, #2
    // bne _021E9180
    // ldr r1, [r4, #0xc]
    // add r0, r5, #0
    // bl ov14_021E7148
    // add r0, r5, #0
    // bl ov14_021F4174
    // add r0, r5, #0
    // mov r1, #0
    // bl ov14_021F40E8
    // mov r0, #0
    // add sp, #8
    // strh r0, [r4, #0x10]
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #1
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021E9188: .word 0x000040B8
    // _021E918C: .word ov14_021F7C08
    // _021E9190: .word 0x00004094
    // TODO: decompile
}




void ov14_021E9194(void) {
    // ldr r0, [r4, r0]
    sub_02019978((0x2f << 4), 0xa);
    // add r1, #0x21
    // ldrb r1, [r1]
    ov14_021E70E0(r5, r5);
    *((u16*)(r4 + 0x10)) = (*((u16*)(r4 + 0x10)) + 1);
    ov14_021E65C4(r5);
    ov14_021E7148(r5, *((u32*)(r4 + 0xc)));
    *((u16*)(r4 + 0x10)) = 0;
}




void ov14_021E91E0(void) {
    Party_GetCount(*((u32*)(r0 + 8)), *((u16*)(*((u32*)(r0 + 0x34)) + 0x10)));
    // add r1, #0x21
    // ldrb r1, [r1]
    // add r2, #0x1e
    ov14_021E6CF8(r5, r5, r0);
    ov14_021F40E8(r5, 0);
    *((u16*)(r4 + 0x10)) = (*((u16*)(r4 + 0x10)) + 1);
    ov14_021E65C4((*((u16*)(r4 + 0x10)) + 1));
    ov14_021E7148(r5, *((u32*)(r4 + 0xc)));
    *((u16*)(r4 + 0x10)) = 0;
}




void ov14_021E9234(void) {
    // add r1, sp, #0
    // add r2, sp, #4
    // str r0, [sp]
    // str r0, [sp, #4]
    PCStorage_FindFirstEmptySlot(*((u32*)(r0 + 4)), *((u16*)(*((u32*)(r0 + 0x34)) + 0x10)));
    // add r1, #0x21
    // ldrb r1, [r1]
    // ldr r2, [sp, #4]
    ov14_021E6CF8(r5, r5);
    ov14_021F40E8(r5, 0);
    // add r5, #0x21
    // strb r0, [r5]
    *((u16*)(r4 + 0x10)) = (*((u16*)(r4 + 0x10)) + 1);
    ov14_021E65C4((*((u16*)(r4 + 0x10)) + 1));
    // add r1, #0xe4
    ov14_021F34C8(*((u32*)(r5 + 0x34)), *((u32*)*((u32*)(r4 + 0xc))), 1);
    ov14_021E7148(r5, r6);
    *((u16*)(r4 + 0x10)) = 0;
}




void ov14_021E92AC(void) {
    GridInputHandler_IsButtonInputMode(*((u32*)(*((u32*)(r0 + 0x34)) + 0x2c)), *((u32*)(r0 + 0x34)));
    GridInputHandler_SetButtonInputMode(*((u32*)(*((u32*)(r5 + 0x34)) + 0x2c)), 1);
    *((u16*)(*((u32*)(r5 + 0x34)) + 0x12)) = 0;
    *((u16*)(*((u32*)(r5 + 0x34)) + 0x10)) = 0;
    ScheduleSetBgPosText(*((u32*)(*((u32*)(r5 + 0x34)) + 0x14)), 3, 2, 8);
    ov14_021F3210(r5, 8);
    // ldr r0, [r1, r0]
    sub_02019978((0x2f << 4), 0xe);
    // ldr r0, [r1, r0]
    sub_02019978((0x2f << 4), 0xa);
    // ldr r0, [r1, r0]
    sub_02019978((0x2f << 4), 8);
    // ldr r0, [r1, r0]
    sub_02019978((0x2f << 4), 9);
    // ldr r0, [r1, r0]
    sub_020199E4((0x2f << 4), 0xb);
    // ldr r0, [r1, r0]
    ov14_021E8514((0x2f << 4), *((u32*)(r5 + 0x34)));
    // ldr r0, [r1, r0]
    sub_020199E4((0x2f << 4), 0xb);
    // ldr r0, [r1, r0]
    ov14_021E8328((0x2f << 4), *((u32*)(r5 + 0x34)));
    *((u16*)(*((u32*)(r5 + 0x34)) + 0x12)) = (*((u16*)(*((u32*)(r5 + 0x34)) + 0x12)) + 1);
}




void ov14_021E9370(void) {
    GridInputHandler_IsButtonInputMode(*((u32*)(*((u32*)(r0 + 0x34)) + 0x2c)), *((u32*)(r0 + 0x34)));
    GridInputHandler_SetButtonInputMode(*((u32*)(*((u32*)(r5 + 0x34)) + 0x2c)), 1);
    *((u16*)(*((u32*)(r5 + 0x34)) + 0x12)) = 0;
    *((u16*)(*((u32*)(r5 + 0x34)) + 0x10)) = 0;
    ScheduleSetBgPosText(*((u32*)(*((u32*)(r5 + 0x34)) + 0x14)), 3, 1, 8);
    // mvn r1, r1
    ov14_021F3210(r5, 7);
    // ldr r0, [r1, r0]
    sub_02019978((0x2f << 4), 0xe);
    // ldr r0, [r1, r0]
    sub_02019978((0x2f << 4), 0xa);
    // ldr r0, [r1, r0]
    sub_02019978((0x2f << 4), 8);
    // ldr r0, [r1, r0]
    sub_02019978((0x2f << 4), 9);
    // ldr r0, [r1, r0]
    sub_020199E4((0x2f << 4), 0xb);
    // ldr r0, [r1, r0]
    ov14_021E8514((0x2f << 4), *((u32*)(r5 + 0x34)));
    // ldr r0, [r1, r0]
    sub_020199E4((0x2f << 4), 0xb);
    // ldr r0, [r1, r0]
    ov14_021E8328((0x2f << 4), *((u32*)(r5 + 0x34)));
    *((u16*)(*((u32*)(r5 + 0x34)) + 0x12)) = (*((u16*)(*((u32*)(r5 + 0x34)) + 0x12)) + 1);
}




void ov14_021E9434(void) {
}




void ov14_021E9450(void) {
    // ldr r0, [r1, r0]
    ov14_021E8514((0x2f << 4), *((u32*)(r0 + 0x34)));
    // ldr r0, [r1, r0]
    sub_02019978((0x2f << 4), 8);
    // ldr r0, [r1, r0]
    sub_02019978((0x2f << 4), 9);
    // ldr r0, [r1, r0]
    sub_02019978((0x2f << 4), 0xa);
}




void ov14_021E94A8(void) {
    // ldr r1, [r0, #0x34]
    // mov r0, #0x2f
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // ldr r3, _021E94B8 ; =sub_02019978
    // mov r1, #2
    // bx r3
    // nop
    // _021E94B8: .word sub_02019978
    // TODO: decompile
}




void ov14_021E94BC(void) {
    // ldr r0, [r1, r0]
    sub_02019978((0x2f << 4), 8);
    // ldr r0, [r1, r0]
    sub_02019978((0x2f << 4), 9);
    // ldr r0, [r1, r0]
    sub_02019978((0x2f << 4), 0xa);
    // ldr r0, [r1, r0]
    sub_02019978((0x2f << 4), 0xb);
}




void ov14_021E9518(void) {
}




void ov14_021E952C(void) {
    ov14_021E80A8();
    // ldr r0, [r1, r0]
    ov14_021E8514((0x2f << 4), *((u32*)(r4 + 0x34)));
}




void ov14_021E954C(void) {
}




void ov14_021E9554(void) {
    // ldr r0, [r1, r0]
    sub_02019978((0x2f << 4), 0);
    // ldr r0, [r1, r0]
    sub_02019978((0x2f << 4), 0xf);
    ov14_021F47B8(r5, 8);
}




void ov14_021E9590(void) {
    // ldr r0, [r1, r0]
    sub_02019978((0x2f << 4), 0);
    // mvn r1, r1
    ov14_021F47B8(r4, 7);
}




void ov14_021E95B4(void) {
    // ldr r1, [r0, #0x34]
    // mov r0, #0x2f
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // ldr r3, _021E95C4 ; =sub_02019978
    // mov r1, #0xa
    // bx r3
    // nop
    // _021E95C4: .word sub_02019978
    // TODO: decompile
}




void ov14_021E95C8(void) {
    ov14_021E9434(*((u16*)(*((u32*)(r0 + 0x34)) + 0x10)));
    *((u16*)(r4 + 0x10)) = (*((u16*)(r4 + 0x10)) + 1);
    // ldr r0, [r4, r0]
    sub_02019978((0x2f << 4), 0xc);
    *((u16*)(r4 + 0x10)) = 0;
}




void ov14_021E9604(void) {
    // ldr r1, [r0, #0x34]
    // mov r0, #0x2f
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // ldr r3, _021E9614 ; =sub_02019978
    // mov r1, #0xc
    // bx r3
    // nop
    // _021E9614: .word sub_02019978
    // TODO: decompile
}




void ov14_021E9618(void) {
    // ldr r0, [r1, r0]
    sub_02019978((0x2f << 4), 0xc);
    // ldr r0, [r1, r0]
    sub_02019978((0x2f << 4), 6);
    // ldr r0, [r1, r0]
    sub_02019978((0x2f << 4), 7);
}




void ov14_021E9660(void) {
    ov14_021E9618(*((u16*)(*((u32*)(r0 + 0x34)) + 0x10)));
    *((u16*)(r4 + 0x10)) = (*((u16*)(r4 + 0x10)) + 1);
    ov14_021F44B4(r4, 8);
    // ldr r0, [r1, r0]
    sub_02019978((0x2f << 4), 0xd);
    *((u16*)(r4 + 0x10)) = 0;
}




void ov14_021E96A8(void) {
    // mvn r1, r1
    ov14_021F44B4(*((u32*)(r0 + 0x34)), 7);
    // ldr r0, [r1, r0]
    sub_02019978((0x2f << 4), 0xd);
}




void ov14_021E96C8(void) {
    // ldr r0, [r6, r0]
    sub_02019B08((0x2f << 4), 0);
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021E96F2: ; jump table
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r5, [sp, #8]
    // str r1, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r2, [sp, #0x14]
    // str r0, [sp, #0x18]
    CopyToBgTilemapRect(*((u32*)(*((u32*)(r4 + 0x34)) + 0x14)), 0, 0, 9);
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r5, [sp, #8]
    // str r1, [sp, #0xc]
    // str r1, [sp, #0x10]
    // str r2, [sp, #0x14]
    // str r0, [sp, #0x18]
    CopyToBgTilemapRect(*((u32*)(*((u32*)(r4 + 0x34)) + 0x14)), 0, 0, 8);
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r5, [sp, #8]
    // str r1, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r2, [sp, #0x14]
    // str r0, [sp, #0x18]
    CopyToBgTilemapRect(*((u32*)(*((u32*)(r4 + 0x34)) + 0x14)), 0, 0, 0xa);
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r5, [sp, #8]
    // str r1, [sp, #0xc]
    // str r1, [sp, #0x10]
    // str r2, [sp, #0x14]
    // str r3, [sp, #0x18]
    CopyToBgTilemapRect(*((u32*)(*((u32*)(r4 + 0x34)) + 0x14)), 0, 0, 7);
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r5, [sp, #8]
    // str r1, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r2, [sp, #0x14]
    // str r0, [sp, #0x18]
    CopyToBgTilemapRect(*((u32*)(*((u32*)(r4 + 0x34)) + 0x14)), 0, 0, 0xa);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(*((u32*)(*((u32*)(r4 + 0x34)) + 0x14)), 0, 0, 0);
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r5, [sp, #8]
    // str r1, [sp, #0xc]
    // str r1, [sp, #0x10]
    // str r2, [sp, #0x14]
    // str r0, [sp, #0x18]
    CopyToBgTilemapRect(*((u32*)(*((u32*)(r4 + 0x34)) + 0x14)), 0, 0, 6);
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r5, [sp, #8]
    // str r1, [sp, #0xc]
    // str r1, [sp, #0x10]
    // str r2, [sp, #0x14]
    // str r0, [sp, #0x18]
    CopyToBgTilemapRect(*((u32*)(*((u32*)(r4 + 0x34)) + 0x14)), 0, 0, 5);
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r5, [sp, #8]
    // str r1, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r2, [sp, #0x14]
    // str r0, [sp, #0x18]
    CopyToBgTilemapRect(*((u32*)(*((u32*)(r4 + 0x34)) + 0x14)), 0, 0, 0xc);
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r5, [sp, #8]
    // str r1, [sp, #0xc]
    // str r1, [sp, #0x10]
    // str r2, [sp, #0x14]
    // str r0, [sp, #0x18]
    CopyToBgTilemapRect(*((u32*)(*((u32*)(r4 + 0x34)) + 0x14)), 0, 0, 4);
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r5, [sp, #8]
    // str r1, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r2, [sp, #0x14]
    // str r0, [sp, #0x18]
    CopyToBgTilemapRect(*((u32*)(*((u32*)(r4 + 0x34)) + 0x14)), 0, 0, 0xd);
    ScheduleBgTilemapBufferTransfer(*((u32*)(*((u32*)(r4 + 0x34)) + 0x14)), 0);
    *((u16*)(r6 + 0x10)) = 0;
    *((u16*)(r6 + 0x10)) = (0 + 1);
}




void ov14_021E98AC(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(*((u32*)(*((u32*)(r0 + 0x34)) + 0x14)), 0, 0, 0);
    // sub r0, r0, r1
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(*((u32*)(*((u32*)(r5 + 0x34)) + 0x14)), 0, 0, 0);
    ScheduleBgTilemapBufferTransfer(*((u32*)(*((u32*)(r5 + 0x34)) + 0x14)), 0);
    *((u16*)(r4 + 0x10)) = 0;
    *((u16*)(r4 + 0x10)) = (0 + 1);
}




void ov14_021E9920(void) {
    // ldr r0, [r4, r0]
    sub_02019978((0x2f << 4), 0xf);
    // ldr r0, [r1, r0]
    ov14_021E85BC((0x2f << 4), *((u32*)(r5 + 0x34)));
    *((u16*)(r4 + 0x10)) = (*((u16*)(r4 + 0x10)) + 1);
    // ldr r0, [r4, r0]
    sub_02019978((0x2f << 4), 0xe);
    *((u16*)(r4 + 0x10)) = 0;
}




void ov14_021E9970(void) {
    // ldr r0, [r1, r0]
    sub_02019978((0x2f << 4), 0xf);
    // ldr r0, [r1, r0]
    sub_02019978((0x2f << 4), 0xe);
}




void ov14_021E99A0(void) {
    // ldr r0, [r4, r0]
    sub_02019978((0x2f << 4), 0xe);
    // ldr r0, [r1, r0]
    ov14_021E8620((0x2f << 4), *((u32*)(r5 + 0x34)));
    *((u16*)(r4 + 0x10)) = (*((u16*)(r4 + 0x10)) + 1);
    // ldr r0, [r4, r0]
    sub_02019978((0x2f << 4), 0xf);
    *((u16*)(r4 + 0x10)) = 0;
}




void ov14_021E99F0(void) {
    // ldr r0, [r1, r0]
    sub_02019978((0x2f << 4), 0xc);
    // ldr r0, [r1, r0]
    sub_02019978((0x2f << 4), 0xa);
}




void ov14_021E9A24(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // add r4, r0, #0
    // ldr r5, [r4, #0x34]
    // ldrh r0, [r5, #0x10]
    // cmp r0, #1
    // bhi _021E9A52
    // add r0, r4, #0
    // add r0, #0x21
    // ldrb r0, [r0]
    // add r2, sp, #4
    // add r1, r5, r0
    // ldr r0, _021E9C78 ; =0x00004094
    // ldrb r0, [r1, r0]
    // lsl r0, r0, #2
    // add r1, r5, r0
    // mov r0, #0xbf
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // add r1, sp, #4
    // add r1, #2
    // bl ManagedSprite_GetPositionXY
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8514
    // add r7, r0, #0
    // add r0, r4, #0
    // bl ov14_021E813C
    // add r6, r0, #0
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // mov r1, #0xa
    // bl sub_02019978
    // str r0, [sp]
    // ldrh r0, [r5, #0x10]
    // cmp r0, #7
    // bls _021E9A80
    // b _021E9C70
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _021E9A8C: ; jump table
    // mov r0, #1
    // strh r0, [r5, #0x10]
    // ldr r0, [r4, #0x34]
    // ldr r1, _021E9C7C ; =0x0000044A
    // ldrb r2, [r0, r1]
    // cmp r2, #1
    // bne _021E9ABA
    // cmp r6, #0
    // bne _021E9ABA
    // mov r2, #2
    // strb r2, [r0, r1]
    // add r0, r4, #0
    // mov r1, #0x28
    // bl ov14_021F69F0
    // add r0, sp, #0xc
    // add r1, sp, #8
    // bl System_GetTouchHeldCoords
    // cmp r0, #0
    // ldr r0, [r4, #0x34]
    // bne _021E9B68
    // add r1, r4, #0
    // add r1, #0x21
    // ldrb r1, [r1]
    // add r3, sp, #4
    // add r2, r0, r1
    // ldr r1, _021E9C78 ; =0x00004094
    // ldrb r1, [r2, r1]
    // mov r2, #0
    // ldrsh r2, [r3, r2]
    // lsl r1, r1, #2
    // add r1, r0, r1
    // mov r0, #0xbf
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // mov r1, #2
    // ldrsh r1, [r3, r1]
    // bl ManagedSprite_SetPositionXY
    // ldr r1, [r4, #0x34]
    // ldr r0, _021E9C7C ; =0x0000044A
    // mov r2, #0xff
    // ldrb r0, [r1, r0]
    // cmp r0, #2
    // bne _021E9B0E
    // ldr r2, _021E9C80 ; =0x000040B8
    // ldr r0, [r1, r2]
    // add r2, r2, #4
    // ldr r1, [r1, r2]
    // lsl r0, r0, #0x10
    // lsl r1, r1, #0x10
    // asr r0, r0, #0x10
    // asr r1, r1, #0x10
    // bl ov14_021E7960
    // add r2, r0, #0
    // add r1, r4, #0
    // add r1, #0x21
    // ldrb r1, [r1]
    // add r0, r4, #0
    // bl ov14_021E6F3C
    // add r0, r4, #0
    // mov r1, #0
    // bl ov14_021F40E8
    // add r1, r4, #0
    // add r1, #0x21
    // ldrb r1, [r1]
    // add r0, r4, #0
    // bl ov14_021E70B0
    // add r1, r4, #0
    // add r1, #0x21
    // strb r0, [r1]
    // add r0, r4, #0
    // add r0, #0x21
    // ldrb r0, [r0]
    // cmp r0, #0x1e
    // bhs _021E9B44
    // mov r0, #5
    // strh r0, [r5, #0x10]
    // b _021E9C70
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E7FEC
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8434
    // ldr r0, [r4, #0x34]
    // bl ov14_021E8824
    // mov r0, #2
    // strh r0, [r5, #0x10]
    // b _021E9C70
    // ldr r1, _021E9C7C ; =0x0000044A
    // ldrb r1, [r0, r1]
    // cmp r1, #0
    // bne _021E9B9C
    // cmp r7, #0
    // bne _021E9B9C
    // ldr r1, [sp]
    // cmp r1, #0
    // bne _021E9B9C
    // ldr r2, [sp, #0xc]
    // cmp r2, #0x10
    // blo _021E9B8A
    // ldr r1, [sp, #8]
    // cmp r1, #0x30
    // blo _021E9B8A
    // cmp r2, #0x68
    // blo _021E9B9C
    // ldr r1, _021E9C7C ; =0x0000044A
    // mov r2, #1
    // strb r2, [r0, r1]
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E7FB8
    // add r1, r4, #0
    // add r1, #0x21
    // ldrb r1, [r1]
    // ldr r0, [r4, #0x34]
    // add r2, r0, r1
    // ldr r1, _021E9C78 ; =0x00004094
    // ldrb r1, [r2, r1]
    // ldr r2, [sp, #8]
    // lsl r1, r1, #2
    // add r1, r0, r1
    // mov r0, #0xbf
    // lsl r0, r0, #2
    // lsl r2, r2, #0x10
    // ldr r0, [r1, r0]
    // ldr r1, [sp, #0xc]
    // asr r2, r2, #0x10
    // sub r2, #8
    // lsl r1, r1, #0x10
    // lsl r2, r2, #0x10
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    // bl ManagedSprite_SetPositionXY
    // add r0, r4, #0
    // bl ov14_021F4174
    // ldr r2, [sp, #0xc]
    // ldr r1, [r4, #0x34]
    // ldr r0, _021E9C80 ; =0x000040B8
    // str r2, [r1, r0]
    // ldr r2, [sp, #8]
    // ldr r1, [r4, #0x34]
    // add r0, r0, #4
    // str r2, [r1, r0]
    // b _021E9C70
    // add r0, r4, #0
    // bl ov14_021E65C4
    // cmp r0, #0
    // bne _021E9C70
    // cmp r6, #0
    // bne _021E9C70
    // cmp r7, #0
    // bne _021E9C70
    // ldr r1, [r5, #0xc]
    // add r0, r4, #0
    // bl ov14_021E7148
    // add r0, r4, #0
    // bl ov14_021F4174
    // ldr r2, [r4, #0x34]
    // ldr r1, _021E9C84 ; =0x000040C4
    // add r0, r4, #0
    // ldr r1, [r2, r1]
    // bl ov14_021F40E8
    // mov r0, #7
    // strh r0, [r5, #0x10]
    // b _021E9C70
    // add r0, r4, #0
    // bl ov14_021E66F4
    // cmp r0, #0
    // bne _021E9C70
    // ldr r1, [r5, #0xc]
    // add r0, r4, #0
    // bl ov14_021E7148
    // add r0, r4, #0
    // bl ov14_021E765C
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E7EE0
    // mov r0, #0xff
    // add r4, #0x21
    // strb r0, [r4]
    // mov r0, #6
    // strh r0, [r5, #0x10]
    // b _021E9C70
    // cmp r6, #0
    // bne _021E9C70
    // mov r0, #7
    // strh r0, [r5, #0x10]
    // b _021E9C70
    // mov r1, #1
    // add r0, r4, #0
    // add r2, r1, #0
    // bl ov14_021F3488
    // add r0, r4, #0
    // mov r1, #2
    // mov r2, #0
    // bl ov14_021F3488
    // ldr r2, [r4, #0x34]
    // ldr r1, _021E9C7C ; =0x0000044A
    // mov r0, #0
    // strb r0, [r2, r1]
    // add sp, #0x10
    // strh r0, [r5, #0x10]
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #1
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021E9C78: .word 0x00004094
    // _021E9C7C: .word 0x0000044A
    // _021E9C80: .word 0x000040B8
    // _021E9C84: .word 0x000040C4
    // TODO: decompile
}




void ov14_021E9C88(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // add r4, r0, #0
    // mov r0, #0x2f
    // ldr r5, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // bl ov14_021E8514
    // str r0, [sp]
    // add r0, r4, #0
    // bl ov14_021E80A8
    // add r6, r0, #0
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // mov r1, #0xa
    // bl sub_02019978
    // add r7, r0, #0
    // ldrh r0, [r5, #0x10]
    // cmp r0, #8
    // bls _021E9CBC
    // b _021E9F04
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _021E9CC8: ; jump table
    // mov r0, #1
    // strh r0, [r5, #0x10]
    // ldr r0, [r4, #0x34]
    // ldr r1, _021E9F0C ; =0x0000044A
    // ldrb r2, [r0, r1]
    // cmp r2, #1
    // bne _021E9CF8
    // cmp r6, #0
    // bne _021E9CF8
    // mov r2, #2
    // strb r2, [r0, r1]
    // add r0, r4, #0
    // mov r1, #0x28
    // bl ov14_021F69F0
    // add r0, sp, #0xc
    // add r1, sp, #8
    // bl System_GetTouchHeldCoords
    // cmp r0, #0
    // ldr r0, _021E9F0C ; =0x0000044A
    // bne _021E9D78
    // ldr r1, [r4, #0x34]
    // mov r2, #0xff
    // ldrb r0, [r1, r0]
    // cmp r0, #2
    // bne _021E9D28
    // ldr r2, _021E9F10 ; =0x000040B8
    // ldr r0, [r1, r2]
    // add r2, r2, #4
    // ldr r1, [r1, r2]
    // lsl r0, r0, #0x10
    // lsl r1, r1, #0x10
    // ldr r2, _021E9F14 ; =ov14_021F7C08
    // asr r0, r0, #0x10
    // asr r1, r1, #0x10
    // bl ov14_021E79AC
    // add r2, r0, #0
    // add r1, r4, #0
    // add r1, #0x21
    // ldrb r1, [r1]
    // add r0, r4, #0
    // bl ov14_021E7034
    // add r0, r4, #0
    // mov r1, #0
    // bl ov14_021F40E8
    // add r1, r4, #0
    // add r1, #0x21
    // ldrb r1, [r1]
    // add r0, r4, #0
    // bl ov14_021E70B0
    // add r1, r4, #0
    // add r1, #0x21
    // strb r0, [r1]
    // add r0, r4, #0
    // add r0, #0x21
    // ldrb r0, [r0]
    // cmp r0, #0x1e
    // blo _021E9D5E
    // mov r0, #5
    // strh r0, [r5, #0x10]
    // b _021E9F04
    // ldr r1, [r4, #0x34]
    // ldr r0, _021E9F0C ; =0x0000044A
    // ldrb r0, [r1, r0]
    // cmp r0, #0
    // beq _021E9D72
    // mov r0, #0x2f
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E7F4C
    // mov r0, #2
    // strh r0, [r5, #0x10]
    // b _021E9F04
    // ldr r1, [r4, #0x34]
    // ldrb r0, [r1, r0]
    // cmp r0, #0
    // bne _021E9DEA
    // ldr r0, [sp]
    // cmp r0, #0
    // bne _021E9DEA
    // cmp r7, #0
    // bne _021E9DEA
    // add r0, r4, #0
    // add r3, r4, #0
    // add r0, #0x21
    // add r3, #0x22
    // add r1, sp, #4
    // ldrb r0, [r0]
    // ldrb r3, [r3]
    // add r1, #2
    // add r2, sp, #4
    // bl ov14_021F2F88
    // add r1, sp, #4
    // mov r0, #2
    // ldrsh r3, [r1, r0]
    // ldr r2, [sp, #0xc]
    // add r0, r3, #0
    // sub r0, #0x10
    // cmp r2, r0
    // blo _021E9DCA
    // add r3, #0x10
    // cmp r2, r3
    // bhs _021E9DCA
    // mov r0, #0
    // ldrsh r2, [r1, r0]
    // ldr r1, [sp, #8]
    // add r0, r2, #0
    // sub r0, #0x10
    // cmp r1, r0
    // blo _021E9DCA
    // add r2, #0x10
    // cmp r1, r2
    // blo _021E9DEA
    // ldr r1, [r4, #0x34]
    // ldr r0, _021E9F0C ; =0x0000044A
    // mov r2, #1
    // strb r2, [r1, r0]
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E7ED0
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E7EE0
    // add r1, r4, #0
    // add r1, #0x21
    // ldrb r1, [r1]
    // ldr r0, [r4, #0x34]
    // add r2, r0, r1
    // ldr r1, _021E9F18 ; =0x00004094
    // ldrb r1, [r2, r1]
    // ldr r2, [sp, #8]
    // lsl r1, r1, #2
    // add r1, r0, r1
    // mov r0, #0xbf
    // lsl r0, r0, #2
    // lsl r2, r2, #0x10
    // ldr r0, [r1, r0]
    // ldr r1, [sp, #0xc]
    // asr r2, r2, #0x10
    // sub r2, #8
    // lsl r1, r1, #0x10
    // lsl r2, r2, #0x10
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    // bl ManagedSprite_SetPositionXY
    // add r0, r4, #0
    // bl ov14_021F4174
    // ldr r2, [sp, #0xc]
    // ldr r1, [r4, #0x34]
    // ldr r0, _021E9F10 ; =0x000040B8
    // str r2, [r1, r0]
    // ldr r2, [sp, #8]
    // ldr r1, [r4, #0x34]
    // add r0, r0, #4
    // str r2, [r1, r0]
    // b _021E9F04
    // cmp r6, #0
    // bne _021E9E4A
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8434
    // ldr r0, [r4, #0x34]
    // bl ov14_021E8824
    // mov r0, #3
    // strh r0, [r5, #0x10]
    // add r0, r4, #0
    // bl ov14_021E65C4
    // cmp r0, #0
    // bne _021E9E80
    // ldrh r0, [r5, #0x10]
    // cmp r0, #4
    // bne _021E9E80
    // ldr r0, [sp]
    // cmp r0, #0
    // bne _021E9E80
    // ldr r1, [r5, #0xc]
    // add r0, r4, #0
    // bl ov14_021E7148
    // add r0, r4, #0
    // bl ov14_021F4174
    // ldr r2, [r4, #0x34]
    // ldr r1, _021E9F1C ; =0x000040C4
    // add r0, r4, #0
    // ldr r1, [r2, r1]
    // bl ov14_021F40E8
    // mov r0, #8
    // strh r0, [r5, #0x10]
    // b _021E9F04
    // ldrh r0, [r5, #0x10]
    // cmp r0, #3
    // bne _021E9F04
    // mov r0, #4
    // strh r0, [r5, #0x10]
    // b _021E9F04
    // add r0, r4, #0
    // bl ov14_021E65C4
    // cmp r0, #0
    // bne _021E9F04
    // ldr r1, [r5, #0xc]
    // add r0, r4, #0
    // bl ov14_021E7148
    // add r0, r4, #0
    // mov r1, #0xff
    // add r0, #0x21
    // strb r1, [r0]
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E7F4C
    // ldrh r0, [r5, #0x10]
    // add r0, r0, #1
    // strh r0, [r5, #0x10]
    // b _021E9F04
    // cmp r6, #0
    // bne _021E9F04
    // add r0, r4, #0
    // bl ov14_021E765C
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8328
    // ldrh r0, [r5, #0x10]
    // add r0, r0, #1
    // strh r0, [r5, #0x10]
    // b _021E9F04
    // cmp r7, #0
    // bne _021E9F04
    // mov r0, #8
    // strh r0, [r5, #0x10]
    // b _021E9F04
    // add r0, r4, #0
    // mov r1, #1
    // mov r2, #0
    // bl ov14_021F3488
    // add r0, r4, #0
    // mov r1, #2
    // mov r2, #0
    // bl ov14_021F3488
    // ldr r2, [r4, #0x34]
    // ldr r1, _021E9F0C ; =0x0000044A
    // mov r0, #0
    // strb r0, [r2, r1]
    // add sp, #0x10
    // strh r0, [r5, #0x10]
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #1
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021E9F0C: .word 0x0000044A
    // _021E9F10: .word 0x000040B8
    // _021E9F14: .word ov14_021F7C08
    // _021E9F18: .word 0x00004094
    // _021E9F1C: .word 0x000040C4
    // TODO: decompile
}




void ov14_021E9F20(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r1, [r5, #0x34]
    // mov r0, #0x2f
    // lsl r0, r0, #4
    // ldr r4, [r1, #0xc]
    // ldr r0, [r1, r0]
    // mov r1, #0xf
    // bl sub_02019978
    // ldr r1, [r4, #4]
    // lsr r2, r1, #2
    // bne _021E9F98
    // mov r0, #0x32
    // ldr r1, [r5, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // ldrb r1, [r4]
    // ldrb r2, [r4, #1]
    // bl ManagedSprite_SetPositionXY
    // ldr r0, [r5, #0x34]
    // ldr r1, _021EA060 ; =0x0000044B
    // ldrb r1, [r0, r1]
    // cmp r1, #1
    // bne _021E9F94
    // ldr r1, [r5]
    // ldr r1, [r1, #8]
    // cmp r1, #3
    // bne _021E9F72
    // ldrb r2, [r4, #1]
    // mov r1, #0xca
    // lsl r1, r1, #2
    // ldr r0, [r0, r1]
    // add r2, #8
    // lsl r2, r2, #0x10
    // ldrb r1, [r4]
    // asr r2, r2, #0x10
    // bl ManagedSprite_SetPositionXY
    // b _021E9F94
    // add r5, #0x21
    // ldrb r1, [r5]
    // add r2, r0, r1
    // ldr r1, _021EA064 ; =0x00004094
    // ldrb r1, [r2, r1]
    // ldrb r2, [r4, #1]
    // lsl r1, r1, #2
    // add r1, r0, r1
    // mov r0, #0xbf
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // add r2, r2, #4
    // lsl r2, r2, #0x10
    // ldrb r1, [r4]
    // asr r2, r2, #0x10
    // bl ManagedSprite_SetPositionXY
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // mov r0, #3
    // and r1, r0
    // sub r0, r2, #1
    // lsl r0, r0, #2
    // orr r0, r1
    // str r0, [r4, #4]
    // mov r0, #0x32
    // ldr r1, [r5, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    // bl ManagedSprite_GetPositionXY
    // ldr r0, [r4, #4]
    // add r1, sp, #0
    // lsl r0, r0, #0x1f
    // lsr r0, r0, #0x1f
    // bne _021E9FCA
    // mov r0, #2
    // ldrsh r2, [r1, r0]
    // ldrb r0, [r4, #2]
    // add r0, r2, r0
    // b _021E9FD2
    // mov r0, #2
    // ldrsh r2, [r1, r0]
    // ldrb r0, [r4, #2]
    // sub r0, r2, r0
    // strh r0, [r1, #2]
    // ldr r0, [r4, #4]
    // add r1, sp, #0
    // lsl r0, r0, #0x1e
    // lsr r0, r0, #0x1f
    // bne _021E9FE8
    // mov r0, #0
    // ldrsh r2, [r1, r0]
    // ldrb r0, [r4, #3]
    // add r0, r2, r0
    // b _021E9FF0
    // mov r0, #0
    // ldrsh r2, [r1, r0]
    // ldrb r0, [r4, #3]
    // sub r0, r2, r0
    // strh r0, [r1]
    // mov r0, #0x32
    // ldr r1, [r5, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // add r3, sp, #0
    // mov r1, #2
    // mov r2, #0
    // ldrsh r1, [r3, r1]
    // ldrsh r2, [r3, r2]
    // bl ManagedSprite_SetPositionXY
    // ldr r0, [r5, #0x34]
    // ldr r1, _021EA060 ; =0x0000044B
    // ldrb r1, [r0, r1]
    // cmp r1, #1
    // bne _021EA05C
    // ldr r1, [r5]
    // add r3, sp, #0
    // ldr r1, [r1, #8]
    // cmp r1, #3
    // bne _021EA036
    // mov r2, #0
    // mov r1, #0xca
    // ldrsh r2, [r3, r2]
    // lsl r1, r1, #2
    // ldr r0, [r0, r1]
    // mov r1, #2
    // add r2, #8
    // lsl r2, r2, #0x10
    // ldrsh r1, [r3, r1]
    // asr r2, r2, #0x10
    // bl ManagedSprite_SetPositionXY
    // b _021EA05C
    // add r5, #0x21
    // ldrb r1, [r5]
    // add r2, r0, r1
    // ldr r1, _021EA064 ; =0x00004094
    // ldrb r1, [r2, r1]
    // mov r2, #0
    // ldrsh r2, [r3, r2]
    // lsl r1, r1, #2
    // add r1, r0, r1
    // mov r0, #0xbf
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // mov r1, #2
    // add r2, r2, #4
    // lsl r2, r2, #0x10
    // ldrsh r1, [r3, r1]
    // asr r2, r2, #0x10
    // bl ManagedSprite_SetPositionXY
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // _021EA060: .word 0x0000044B
    // _021EA064: .word 0x00004094
    // TODO: decompile
}




void ov14_021EA068(void) {
    // ldr r0, [r5, r0]
    sub_02019978((0x2f << 4), 0xa);
    *((u16*)(r5 + 0x10)) = (*((u16*)(r5 + 0x10)) + 1);
    // ldr r0, [r5, r0]
    ov14_021E8514((0x2f << 4));
    ov14_021E9F20(r6);
    *((u16*)(r5 + 0x10)) = 0;
}




void ov14_021EA0B8(void) {
    // ldr r0, [r4, r0]
    sub_02019978((0x2f << 4), 8);
    // ldr r0, [r1, r0]
    sub_02019978((0x2f << 4), 9);
    // ldr r0, [r1, r0]
    sub_02019978((0x2f << 4), 0xa);
    *((u16*)(r4 + 0x10)) = (*((u16*)(r4 + 0x10)) + 1);
    ov14_021E9F20((*((u16*)(r4 + 0x10)) + 1));
    // ldr r0, [r1, r0]
    ov14_021E8514((0x2f << 4), *((u32*)(r5 + 0x34)));
    *((u16*)(r4 + 0x10)) = 0;
}




void ov14_021EA130(void) {
    // ldr r0, [r5, r0]
    ov14_021E8514((0x2f << 4));
    ov14_021E9F20(r6);
    *((u16*)(r5 + 0x10)) = (*((u16*)(r5 + 0x10)) + 1);
    // ldr r0, [r5, r0]
    sub_02019978((0x2f << 4), 0xa);
    *((u16*)(r5 + 0x10)) = 0;
}




void ov14_021EA180(void) {
    ov14_021E9F20(*((u16*)(*((u32*)(r0 + 0x34)) + 0x10)));
    ov14_021E9434(r5);
    *((u16*)(r4 + 0x10)) = (*((u16*)(r4 + 0x10)) + 1);
    // ldr r0, [r4, r0]
    sub_02019978((0x2f << 4), 8);
    // ldr r0, [r1, r0]
    sub_02019978((0x2f << 4), 9);
    // ldr r0, [r1, r0]
    sub_02019978((0x2f << 4), 0xa);
    *((u16*)(r4 + 0x10)) = 0;
}




void ov14_021EA1F0(void) {
    // push {r3, r4, lr}
    // sub sp, #4
    // add r4, r0, #0
    // ldr r0, [r4, #0x34]
    // mov r1, #9
    // mov r2, #0xa
    // bl ov14_021F29E4
    // mov r0, #0x32
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    // bl ManagedSprite_GetPositionXY
    // add r1, r4, #0
    // add r1, #0x21
    // ldrb r1, [r1]
    // ldr r0, [r4, #0x34]
    // add r3, sp, #0
    // add r2, r0, r1
    // ldr r1, _021EA250 ; =0x00004094
    // ldrb r1, [r2, r1]
    // mov r2, #0
    // ldrsh r2, [r3, r2]
    // lsl r1, r1, #2
    // add r1, r0, r1
    // mov r0, #0xbf
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // mov r1, #2
    // add r2, r2, #4
    // lsl r2, r2, #0x10
    // ldrsh r1, [r3, r1]
    // asr r2, r2, #0x10
    // bl ManagedSprite_SetPositionXY
    // ldr r0, [r4, #0x34]
    // add r4, #0x21
    // ldrb r1, [r4]
    // mov r2, #0
    // bl ov14_021F3190
    // add sp, #4
    // pop {r3, r4, pc}
    // nop
    // _021EA250: .word 0x00004094
    // TODO: decompile
}




void ov14_021EA254(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #4
    // add r5, r0, #0
    // mov r0, #0x2f
    // ldr r4, [r5, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #0xf
    // bl sub_02019978
    // ldrh r0, [r4, #0x10]
    // cmp r0, #3
    // bhi _021EA36E
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _021EA27A: ; jump table
    // mov r1, #9
    // ldr r0, [r5, #0x34]
    // add r2, r1, #0
    // bl ov14_021F29E4
    // ldrh r0, [r4, #0x10]
    // add r0, r0, #1
    // strh r0, [r4, #0x10]
    // ldrh r0, [r4, #0x12]
    // cmp r0, #4
    // bne _021EA2A4
    // mov r0, #0
    // strh r0, [r4, #0x12]
    // ldrh r0, [r4, #0x10]
    // add r0, r0, #1
    // strh r0, [r4, #0x10]
    // b _021EA36E
    // mov r0, #0x32
    // ldr r1, [r5, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    // bl ManagedSprite_GetPositionXY
    // mov r0, #0x32
    // add r3, sp, #0
    // mov r2, #0
    // ldrsh r2, [r3, r2]
    // ldr r1, [r5, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // mov r1, #2
    // add r2, r2, #2
    // lsl r2, r2, #0x10
    // ldrsh r1, [r3, r1]
    // asr r2, r2, #0x10
    // bl ManagedSprite_SetPositionXY
    // ldrh r0, [r4, #0x12]
    // add r0, r0, #1
    // strh r0, [r4, #0x12]
    // b _021EA36E
    // ldr r0, [r5, #0x34]
    // mov r1, #9
    // mov r2, #0xa
    // bl ov14_021F29E4
    // ldrh r0, [r4, #0x10]
    // add r0, r0, #1
    // strh r0, [r4, #0x10]
    // ldrh r0, [r4, #0x12]
    // cmp r0, #4
    // bne _021EA2FA
    // mov r0, #0
    // strh r0, [r4, #0x12]
    // add sp, #4
    // strh r0, [r4, #0x10]
    // pop {r3, r4, r5, r6, pc}
    // mov r0, #0x32
    // ldr r1, [r5, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    // bl ManagedSprite_GetPositionXY
    // mov r0, #0x32
    // add r3, sp, #0
    // mov r2, #0
    // ldrsh r2, [r3, r2]
    // ldr r1, [r5, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // mov r1, #2
    // sub r2, r2, #2
    // lsl r2, r2, #0x10
    // ldrsh r1, [r3, r1]
    // asr r2, r2, #0x10
    // bl ManagedSprite_SetPositionXY
    // add r1, r5, #0
    // add r1, #0x21
    // ldrb r1, [r1]
    // ldr r0, [r5, #0x34]
    // add r2, r0, r1
    // ldr r1, _021EA374 ; =0x00004094
    // ldrb r1, [r2, r1]
    // add r2, sp, #0
    // lsl r6, r1, #2
    // add r1, r0, r6
    // mov r0, #0xbf
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // add r1, sp, #0
    // add r1, #2
    // bl ManagedSprite_GetPositionXY
    // ldr r0, [r5, #0x34]
    // add r3, sp, #0
    // mov r2, #0
    // add r1, r0, r6
    // mov r0, #0xbf
    // ldrsh r2, [r3, r2]
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // mov r1, #2
    // sub r2, r2, #2
    // lsl r2, r2, #0x10
    // ldrsh r1, [r3, r1]
    // asr r2, r2, #0x10
    // bl ManagedSprite_SetPositionXY
    // ldrh r0, [r4, #0x12]
    // add r0, r0, #1
    // strh r0, [r4, #0x12]
    // mov r0, #1
    // add sp, #4
    // pop {r3, r4, r5, r6, pc}
    // _021EA374: .word 0x00004094
    // TODO: decompile
}




void ov14_021EA378(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // mov r0, #0x2f
    // ldr r4, [r5, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #0xf
    // bl sub_02019978
    // ldrh r0, [r4, #0x10]
    // cmp r0, #0
    // beq _021EA396
    // cmp r0, #1
    // beq _021EA3DC
    // b _021EA3FE
    // mov r1, #9
    // ldr r0, [r5, #0x34]
    // add r2, r1, #0
    // bl ov14_021F29E4
    // ldr r1, [r5, #0x34]
    // ldr r0, _021EA404 ; =0x0000044C
    // ldrb r6, [r1, r0]
    // cmp r6, #0x25
    // blo _021EA3B0
    // cmp r6, #0x2a
    // bhi _021EA3B0
    // add r6, #0x5b
    // add r1, r5, #0
    // add r1, #0x21
    // ldrb r1, [r1]
    // add r0, r5, #0
    // add r2, r6, #0
    // bl ov14_021E6CF8
    // mov r0, #0x80
    // tst r0, r6
    // bne _021EA3D6
    // add r1, r5, #0
    // add r1, #0x21
    // ldrb r1, [r1]
    // add r0, r5, #0
    // bl ov14_021E70B0
    // add r1, r5, #0
    // add r1, #0x21
    // strb r0, [r1]
    // ldrh r0, [r4, #0x10]
    // add r0, r0, #1
    // strh r0, [r4, #0x10]
    // add r0, r5, #0
    // bl ov14_021E65C4
    // cmp r0, #0
    // bne _021EA3FE
    // ldr r1, [r4, #0xc]
    // add r0, r5, #0
    // bl ov14_021E7148
    // ldr r0, [r5, #0x34]
    // mov r1, #9
    // mov r2, #8
    // bl ov14_021F29E4
    // mov r0, #0
    // strh r0, [r4, #0x10]
    // pop {r4, r5, r6, pc}
    // mov r0, #1
    // pop {r4, r5, r6, pc}
    // nop
    // _021EA404: .word 0x0000044C
    // TODO: decompile
}




void ov14_021EA408(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // ldr r4, [r5, #0x34]
    // ldrh r1, [r4, #0x10]
    // cmp r1, #0
    // beq _021EA41E
    // cmp r1, #1
    // beq _021EA448
    // cmp r1, #2
    // beq _021EA48A
    // b _021EA4C0
    // ldr r0, _021EA4C4 ; =0x000088C8
    // ldrh r0, [r4, r0]
    // cmp r0, #0
    // beq _021EA442
    // add r0, r4, #0
    // mov r1, #1
    // bl ov14_021F391C
    // ldr r0, [r5, #0x34]
    // mov r1, #0xb
    // mov r2, #1
    // bl ov14_021F29E4
    // ldr r0, [r5, #0x34]
    // mov r1, #0xb
    // mov r2, #1
    // bl ov14_021F2A18
    // ldrh r0, [r4, #0x10]
    // add r0, r0, #1
    // strh r0, [r4, #0x10]
    // mov r0, #0x2f
    // ldr r1, [r5, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // mov r1, #8
    // bl sub_02019978
    // add r6, r0, #0
    // mov r0, #0x2f
    // ldr r1, [r5, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // mov r1, #9
    // bl sub_02019978
    // add r7, r0, #0
    // mov r0, #0x2f
    // ldr r1, [r5, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // mov r1, #0xa
    // bl sub_02019978
    // cmp r6, #0
    // bne _021EA4C0
    // cmp r7, #0
    // bne _021EA4C0
    // cmp r0, #0
    // bne _021EA4C0
    // ldrh r0, [r4, #0x10]
    // add r0, r0, #1
    // strh r0, [r4, #0x10]
    // b _021EA4C0
    // bl ov14_021E9F20
    // add r6, r0, #0
    // mov r0, #0x2f
    // ldr r1, [r5, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8514
    // cmp r6, #0
    // bne _021EA4C0
    // cmp r0, #0
    // bne _021EA4C0
    // ldr r0, [r5, #0x34]
    // ldr r1, _021EA4C4 ; =0x000088C8
    // ldrh r1, [r0, r1]
    // cmp r1, #0
    // beq _021EA4BA
    // mov r1, #0
    // bl ov14_021F391C
    // ldr r0, [r5, #0x34]
    // bl ov14_021F3B3C
    // mov r0, #0
    // strh r0, [r4, #0x10]
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // _021EA4C4: .word 0x000088C8
    // TODO: decompile
}




void ov14_021EA4C8(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r4, r0, #0
    // mov r0, #0x2f
    // ldr r5, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // bl ov14_021E8514
    // add r6, r0, #0
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // mov r1, #8
    // bl sub_02019978
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // mov r1, #9
    // bl sub_02019978
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // mov r1, #0xa
    // bl sub_02019978
    // ldrh r0, [r5, #0x10]
    // cmp r0, #0xa
    // bls _021EA50E
    // b _021EA664
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _021EA51A: ; jump table
    // ldr r0, [r4, #0x34]
    // ldr r1, _021EA66C ; =0x000088C8
    // ldrh r1, [r0, r1]
    // cmp r1, #0
    // beq _021EA55A
    // mov r1, #1
    // bl ov14_021F391C
    // ldr r0, [r4, #0x34]
    // mov r1, #0xb
    // mov r2, #1
    // bl ov14_021F29E4
    // ldr r0, [r4, #0x34]
    // mov r1, #0xb
    // mov r2, #1
    // bl ov14_021F2A18
    // mov r0, #1
    // strh r0, [r5, #0x10]
    // b _021EA664
    // mov r1, #0x2f
    // lsl r1, r1, #4
    // ldr r0, [r0, r1]
    // bl ov14_021E8434
    // mov r0, #0xa
    // strh r0, [r5, #0x10]
    // b _021EA664
    // ldr r0, [r4, #0x34]
    // mov r1, #0xb
    // bl ov14_021F2A04
    // cmp r0, #1
    // beq _021EA664
    // ldr r0, [r4, #0x34]
    // mov r1, #0
    // bl ov14_021F391C
    // ldr r0, [r4, #0x34]
    // bl ov14_021F3B3C
    // mov r0, #2
    // strh r0, [r5, #0x10]
    // add r0, sp, #4
    // add r1, sp, #0
    // bl System_GetTouchHeldCoords
    // cmp r0, #0
    // bne _021EA608
    // ldr r1, [r4, #0x34]
    // ldr r2, _021EA670 ; =0x000040B8
    // ldr r0, [r1, r2]
    // add r2, r2, #4
    // ldr r1, [r1, r2]
    // lsl r0, r0, #0x10
    // lsl r1, r1, #0x10
    // asr r0, r0, #0x10
    // asr r1, r1, #0x10
    // bl ov14_021E7960
    // lsl r0, r0, #0x10
    // lsr r6, r0, #0x10
    // add r7, r6, #0
    // cmp r6, #0xff
    // bne _021EA5BC
    // add r0, r4, #0
    // add r0, #0x21
    // ldrb r6, [r0]
    // b _021EA5D4
    // add r1, r4, #0
    // add r1, #0x21
    // ldrb r1, [r1]
    // add r0, r4, #0
    // add r2, r6, #0
    // bl ov14_021E6AA0
    // cmp r0, #0
    // bne _021EA5D4
    // add r0, r4, #0
    // add r0, #0x21
    // ldrb r6, [r0]
    // add r0, r4, #0
    // add r0, #0x21
    // ldrb r0, [r0]
    // cmp r6, r0
    // ldr r1, [r4, #0x34]
    // bne _021EA5EC
    // mov r0, #0x2f
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8434
    // b _021EA5F6
    // mov r0, #0x2f
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E88F8
    // add r0, r4, #0
    // add r1, r7, #0
    // add r2, r6, #0
    // mov r3, #2
    // bl ov14_021E7AD4
    // mov r0, #3
    // strh r0, [r5, #0x10]
    // b _021EA664
    // ldr r1, [sp, #4]
    // ldr r2, [sp]
    // lsl r1, r1, #0x10
    // lsl r2, r2, #0x10
    // ldr r0, [r4, #0x34]
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    // bl ov14_021F395C
    // ldr r0, [r4, #0x34]
    // bl ov14_021F3B5C
    // ldr r2, [sp, #4]
    // ldr r1, [r4, #0x34]
    // ldr r0, _021EA670 ; =0x000040B8
    // str r2, [r1, r0]
    // ldr r2, [sp]
    // ldr r1, [r4, #0x34]
    // add r0, r0, #4
    // str r2, [r1, r0]
    // b _021EA664
    // add r0, r4, #0
    // bl ov14_021E7B8C
    // cmp r0, #0
    // bne _021EA664
    // mov r0, #0xa
    // strh r0, [r5, #0x10]
    // b _021EA664
    // cmp r6, #0
    // bne _021EA664
    // ldr r0, [r4, #0x34]
    // ldr r1, _021EA66C ; =0x000088C8
    // ldrh r1, [r0, r1]
    // cmp r1, #0
    // beq _021EA65C
    // mov r1, #0
    // bl ov14_021F391C
    // ldr r0, [r4, #0x34]
    // bl ov14_021F3B3C
    // mov r0, #0
    // add sp, #8
    // strh r0, [r5, #0x10]
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #1
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021EA66C: .word 0x000088C8
    // _021EA670: .word 0x000040B8
    // TODO: decompile
}




void ov14_021EA674(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // ldr r4, [r5, #0x34]
    // ldrh r0, [r4, #0x10]
    // cmp r0, #0
    // beq _021EA68A
    // cmp r0, #1
    // beq _021EA6AA
    // cmp r0, #2
    // beq _021EA6C8
    // b _021EA720
    // ldr r0, _021EA724 ; =0x000088C8
    // ldrh r0, [r4, r0]
    // cmp r0, #0
    // beq _021EA6A4
    // add r0, r4, #0
    // mov r1, #1
    // bl ov14_021F391C
    // ldr r0, [r5, #0x34]
    // mov r1, #0xb
    // mov r2, #2
    // bl ov14_021F29E4
    // ldrh r0, [r4, #0x10]
    // add r0, r0, #1
    // strh r0, [r4, #0x10]
    // add r0, r5, #0
    // bl ov14_021E9F20
    // add r6, r0, #0
    // add r0, r5, #0
    // bl ov14_021E9434
    // cmp r6, #0
    // bne _021EA720
    // cmp r0, #0
    // bne _021EA720
    // ldrh r0, [r4, #0x10]
    // add r0, r0, #1
    // strh r0, [r4, #0x10]
    // b _021EA720
    // mov r0, #0x2f
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #8
    // bl sub_02019978
    // add r6, r0, #0
    // mov r0, #0x2f
    // ldr r1, [r5, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // mov r1, #9
    // bl sub_02019978
    // add r7, r0, #0
    // mov r0, #0x2f
    // ldr r1, [r5, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // mov r1, #0xa
    // bl sub_02019978
    // cmp r6, #0
    // bne _021EA720
    // cmp r7, #0
    // bne _021EA720
    // cmp r0, #0
    // bne _021EA720
    // ldr r0, [r5, #0x34]
    // ldr r1, _021EA724 ; =0x000088C8
    // ldrh r1, [r0, r1]
    // cmp r1, #0
    // beq _021EA71A
    // mov r1, #0
    // bl ov14_021F391C
    // ldr r0, [r5, #0x34]
    // mov r1, #0xb
    // mov r2, #0
    // bl ov14_021F2A18
    // mov r0, #0
    // strh r0, [r4, #0x10]
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // _021EA724: .word 0x000088C8
    // TODO: decompile
}




void ov14_021EA728(void) {
    ov14_021F2A04(*((u32*)(r0 + 0x34)), 0xb);
    // add r0, #0x21
    // ldrb r1, [r0]
    // ldrh r2, [r0]
    // add r0, #0x21
    // strb r2, [r0]
    ov14_021E7AD4(r5, r1, 2);
    *((u16*)(r4 + 0x10)) = 1;
    ov14_021E7B8C(1);
    *((u16*)(r4 + 0x10)) = 0;
}




void ov14_021EA778(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r4, r0, #0
    // mov r0, #0x2f
    // ldr r5, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // mov r1, #0xe
    // bl sub_02019978
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // mov r1, #0xf
    // bl sub_02019978
    // ldrh r0, [r5, #0x10]
    // cmp r0, #6
    // bhi _021EA7E8
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _021EA7AC: ; jump table
    // ldr r0, [r4, #0x34]
    // mov r1, #1
    // bl ov14_021F391C
    // ldr r0, [r4, #0x34]
    // mov r1, #0xb
    // mov r2, #1
    // bl ov14_021F29E4
    // ldr r0, [r4, #0x34]
    // mov r1, #0xb
    // mov r2, #1
    // bl ov14_021F2A18
    // mov r0, #1
    // strh r0, [r5, #0x10]
    // b _021EA914
    // ldr r0, [r4, #0x34]
    // mov r1, #0xb
    // bl ov14_021F2A04
    // cmp r0, #0
    // beq _021EA7EA
    // b _021EA914
    // ldr r0, [r4, #0x34]
    // mov r1, #0
    // bl ov14_021F391C
    // ldr r0, [r4, #0x34]
    // bl ov14_021F3B3C
    // mov r0, #2
    // strh r0, [r5, #0x10]
    // b _021EA914
    // add r0, sp, #4
    // add r1, sp, #0
    // bl System_GetTouchHeldCoords
    // cmp r0, #0
    // bne _021EA87C
    // ldr r1, [r4, #0x34]
    // ldr r2, _021EA91C ; =0x000040B8
    // ldr r0, [r1, r2]
    // add r2, r2, #4
    // ldr r1, [r1, r2]
    // lsl r0, r0, #0x10
    // lsl r1, r1, #0x10
    // asr r0, r0, #0x10
    // asr r1, r1, #0x10
    // bl ov14_021E7960
    // lsl r0, r0, #0x10
    // lsr r6, r0, #0x10
    // cmp r6, #0xff
    // bne _021EA844
    // ldr r1, [r4, #0x34]
    // ldr r2, _021EA91C ; =0x000040B8
    // ldr r0, [r1, r2]
    // add r2, r2, #4
    // ldr r1, [r1, r2]
    // lsl r0, r0, #0x10
    // lsl r1, r1, #0x10
    // ldr r2, _021EA920 ; =ov14_021F7C08
    // asr r0, r0, #0x10
    // asr r1, r1, #0x10
    // bl ov14_021E79AC
    // lsl r0, r0, #0x10
    // lsr r6, r0, #0x10
    // add r7, r6, #0
    // cmp r6, #0xff
    // bne _021EA852
    // add r0, r4, #0
    // add r0, #0x21
    // ldrb r6, [r0]
    // b _021EA86A
    // add r1, r4, #0
    // add r1, #0x21
    // ldrb r1, [r1]
    // add r0, r4, #0
    // add r2, r6, #0
    // bl ov14_021E6AA0
    // cmp r0, #0
    // bne _021EA86A
    // add r0, r4, #0
    // add r0, #0x21
    // ldrb r6, [r0]
    // add r0, r4, #0
    // add r1, r7, #0
    // add r2, r6, #0
    // mov r3, #2
    // bl ov14_021E7AD4
    // mov r0, #3
    // strh r0, [r5, #0x10]
    // b _021EA914
    // ldr r1, [sp, #4]
    // ldr r2, [sp]
    // lsl r1, r1, #0x10
    // lsl r2, r2, #0x10
    // ldr r0, [r4, #0x34]
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    // bl ov14_021F395C
    // ldr r0, [r4, #0x34]
    // bl ov14_021F3B5C
    // ldr r2, [sp, #4]
    // ldr r1, [r4, #0x34]
    // ldr r0, _021EA91C ; =0x000040B8
    // str r2, [r1, r0]
    // ldr r2, [sp]
    // ldr r1, [r4, #0x34]
    // add r0, r0, #4
    // str r2, [r1, r0]
    // b _021EA914
    // add r0, r4, #0
    // bl ov14_021E7B8C
    // cmp r0, #0
    // bne _021EA914
    // ldr r0, _021EA924 ; =0x000005EA
    // bl PlaySE
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8620
    // mov r0, #4
    // strh r0, [r5, #0x10]
    // b _021EA914
    // ldr r0, [r4, #0x34]
    // mov r1, #1
    // bl ov14_021F391C
    // ldr r0, [r4, #0x34]
    // mov r1, #0xb
    // mov r2, #2
    // bl ov14_021F29E4
    // add r0, r4, #0
    // mov r1, #0
    // bl ov14_021F40E8
    // mov r0, #5
    // strh r0, [r5, #0x10]
    // b _021EA914
    // ldr r0, [r4, #0x34]
    // mov r1, #0xb
    // bl ov14_021F2A04
    // cmp r0, #0
    // bne _021EA914
    // ldr r0, [r4, #0x34]
    // mov r1, #0xb
    // mov r2, #0
    // bl ov14_021F2A18
    // ldr r0, [r4, #0x34]
    // mov r1, #0
    // bl ov14_021F391C
    // mov r0, #6
    // strh r0, [r5, #0x10]
    // b _021EA914
    // mov r0, #0
    // add sp, #8
    // strh r0, [r5, #0x10]
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #1
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021EA91C: .word 0x000040B8
    // _021EA920: .word ov14_021F7C08
    // _021EA924: .word 0x000005EA
    // TODO: decompile
}




void ov14_021EA928(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r4, [r5, #0x34]
    // ldrh r1, [r4, #0x10]
    // cmp r1, #6
    // bhi _021EA9FC
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _021EA940: ; jump table
    // add r0, r4, #0
    // mov r1, #1
    // bl ov14_021F391C
    // ldr r0, [r5, #0x34]
    // mov r1, #0xb
    // mov r2, #1
    // bl ov14_021F29E4
    // ldr r0, [r5, #0x34]
    // mov r1, #0xb
    // mov r2, #1
    // bl ov14_021F2A18
    // mov r0, #1
    // strh r0, [r4, #0x10]
    // b _021EA9FC
    // add r0, r4, #0
    // mov r1, #0xb
    // bl ov14_021F2A04
    // cmp r0, #0
    // bne _021EA9FC
    // ldr r0, [r5, #0x34]
    // mov r1, #0
    // bl ov14_021F391C
    // mov r0, #2
    // strh r0, [r4, #0x10]
    // b _021EA9FC
    // add r1, r5, #0
    // ldr r2, [r4, #0xc]
    // add r1, #0x21
    // ldrb r1, [r1]
    // ldrh r2, [r2]
    // add r5, #0x21
    // mov r3, #2
    // strb r2, [r5]
    // add r2, r1, #0
    // bl ov14_021E7AD4
    // mov r0, #3
    // strh r0, [r4, #0x10]
    // b _021EA9FC
    // bl ov14_021E7B8C
    // cmp r0, #0
    // bne _021EA9FC
    // ldr r0, _021EAA00 ; =0x000005EA
    // bl PlaySE
    // mov r0, #4
    // strh r0, [r4, #0x10]
    // b _021EA9FC
    // add r0, r4, #0
    // mov r1, #1
    // bl ov14_021F391C
    // ldr r0, [r5, #0x34]
    // mov r1, #0xb
    // mov r2, #2
    // bl ov14_021F29E4
    // mov r0, #5
    // strh r0, [r4, #0x10]
    // b _021EA9FC
    // add r0, r4, #0
    // mov r1, #0xb
    // bl ov14_021F2A04
    // cmp r0, #0
    // bne _021EA9FC
    // ldr r0, [r5, #0x34]
    // mov r1, #0xb
    // mov r2, #0
    // bl ov14_021F2A18
    // ldr r0, [r5, #0x34]
    // mov r1, #0
    // bl ov14_021F391C
    // mov r0, #6
    // strh r0, [r4, #0x10]
    // b _021EA9FC
    // mov r0, #0
    // strh r0, [r4, #0x10]
    // pop {r3, r4, r5, pc}
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // _021EAA00: .word 0x000005EA
    // TODO: decompile
}




void ov14_021EAA04(void) {
    // ldr r0, [r4, r0]
    sub_02019978((0x2f << 4), 0xf);
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021EAA2A: ; jump table
    ov14_021F391C(*((u32*)(r5 + 0x34)), 1);
    ov14_021F29E4(*((u32*)(r5 + 0x34)), 0xb, 1);
    ov14_021F2A18(*((u32*)(r5 + 0x34)), 0xb, 1);
    *((u16*)(r4 + 0x10)) = (*((u16*)(r4 + 0x10)) + 1);
    ov14_021F2A04(*((u32*)(r5 + 0x34)), 0xb);
    ov14_021F391C(*((u32*)(r5 + 0x34)), 0);
    *((u16*)(r4 + 0x10)) = (*((u16*)(r4 + 0x10)) + 1);
    ov14_021F29E4(*((u32*)(r5 + 0x34)), 9, 9);
    *((u16*)(r4 + 0x10)) = (*((u16*)(r4 + 0x10)) + 1);
    *((u16*)(r4 + 0x12)) = 0;
    *((u16*)(r4 + 0x10)) = (*((u16*)(r4 + 0x10)) + 1);
    // ldr r0, [r1, r0]
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    ManagedSprite_GetPositionXY((0x32 << 4), *((u32*)(r5 + 0x34)));
    // add r3, sp, #0
    // ldrsh r2, [r3, r2]
    // ldr r0, [r1, r0]
    // ldrsh r1, [r3, r1]
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXY((0x32 << 4), 2, ((0 + 2) << 0x10));
    *((u16*)(r4 + 0x12)) = (*((u16*)(r4 + 0x12)) + 1);
    ov14_021F29E4(*((u32*)(r5 + 0x34)), 9, 0xa);
    *((u16*)(r4 + 0x10)) = (*((u16*)(r4 + 0x10)) + 1);
    *((u16*)(r4 + 0x12)) = 0;
    *((u16*)(r4 + 0x10)) = 0;
    // ldr r0, [r1, r0]
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    ManagedSprite_GetPositionXY((0x32 << 4), *((u32*)(r5 + 0x34)));
    // add r3, sp, #0
    // ldrsh r2, [r3, r2]
    // ldr r0, [r1, r0]
    // ldrsh r1, [r3, r1]
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXY((0x32 << 4), 2, ((0 - 2) << 0x10));
    // ldr r0, [r1, r0]
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    ManagedSprite_GetPositionXY((0xca << 2), *((u32*)(r5 + 0x34)));
    // add r3, sp, #0
    // ldrsh r2, [r3, r2]
    // ldr r0, [r1, r0]
    // ldrsh r1, [r3, r1]
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXY((0xca << 2), 2, ((0 - 2) << 0x10));
    *((u16*)(r4 + 0x12)) = (*((u16*)(r4 + 0x12)) + 1);
}




void ov14_021EAB54(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021EAB6C: ; jump table
    ov14_021F29E4(*((u32*)(r0 + 0x34)), 9, 9);
    *((u16*)(r4 + 0x10)) = 1;
    *((u16*)(r4 + 0x12)) = 0;
    *((u16*)(r4 + 0x10)) = 2;
    // ldr r0, [r1, r0]
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    ManagedSprite_GetPositionXY((0xca << 2), *((u32*)(r5 + 0x34)));
    // add r3, sp, #0
    // ldrsh r2, [r3, r2]
    // ldr r0, [r1, r0]
    // ldrsh r1, [r3, r1]
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXY((0xca << 2), 2, ((0 + 2) << 0x10));
    *((u16*)(r4 + 0x12)) = (*((u16*)(r4 + 0x12)) + 1);
    ov14_021F29E4(r4, 9, 8);
    ov14_021F391C(*((u32*)(r5 + 0x34)), 1);
    ov14_021F29E4(*((u32*)(r5 + 0x34)), 0xb, 2);
    *((u16*)(r4 + 0x10)) = 3;
    ov14_021F2A04(r4, 0xb);
    ov14_021F391C(*((u32*)(r5 + 0x34)), 0);
    ov14_021F2A18(*((u32*)(r5 + 0x34)), 0xb, 0);
    *((u16*)(r4 + 0x10)) = 4;
    ov14_021F29E4(r4, 9, 8);
    *((u16*)(r4 + 0x10)) = 0;
}




void ov14_021EAC24(void) {
    // push {r3, r4, r5, lr}
    // add r4, r0, #0
    // mov r0, #0x2f
    // ldr r5, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // mov r1, #0xf
    // bl sub_02019978
    // ldrh r0, [r5, #0x10]
    // cmp r0, #4
    // bhi _021EACCC
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _021EAC48: ; jump table
    // mov r1, #9
    // ldr r0, [r4, #0x34]
    // add r2, r1, #0
    // bl ov14_021F29E4
    // ldr r2, [r4, #0x34]
    // ldr r1, _021EACD0 ; =0x000088CA
    // add r0, r4, #0
    // ldrh r1, [r2, r1]
    // mov r2, #2
    // bl ov14_021E7AE4
    // mov r0, #1
    // strh r0, [r5, #0x10]
    // b _021EACCC
    // add r0, r4, #0
    // bl ov14_021E7B98
    // cmp r0, #0
    // bne _021EACCC
    // mov r0, #2
    // strh r0, [r5, #0x10]
    // b _021EACCC
    // ldr r0, [r4, #0x34]
    // mov r1, #1
    // bl ov14_021F391C
    // ldr r0, [r4, #0x34]
    // mov r1, #0xb
    // mov r2, #2
    // bl ov14_021F29E4
    // mov r0, #3
    // strh r0, [r5, #0x10]
    // b _021EACCC
    // ldr r0, [r4, #0x34]
    // mov r1, #0xb
    // bl ov14_021F2A04
    // cmp r0, #0
    // bne _021EACCC
    // ldr r0, [r4, #0x34]
    // mov r1, #0
    // bl ov14_021F391C
    // ldr r0, [r4, #0x34]
    // mov r1, #0xb
    // mov r2, #0
    // bl ov14_021F2A18
    // mov r0, #4
    // strh r0, [r5, #0x10]
    // b _021EACCC
    // ldr r0, [r4, #0x34]
    // mov r1, #9
    // mov r2, #8
    // bl ov14_021F29E4
    // mov r0, #0
    // strh r0, [r5, #0x10]
    // pop {r3, r4, r5, pc}
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // _021EACD0: .word 0x000088CA
    // TODO: decompile
}




void ov14_021EACD4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r4, r0, #0
    // mov r0, #0x2f
    // ldr r5, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // bl ov14_021E8514
    // add r7, r0, #0
    // add r0, r4, #0
    // bl ov14_021E80A8
    // add r6, r0, #0
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // mov r1, #0xa
    // bl sub_02019978
    // ldrh r0, [r5, #0x10]
    // cmp r0, #0xa
    // bhi _021EAD6C
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _021EAD10: ; jump table
    // ldr r0, [r4, #0x34]
    // ldr r1, _021EAEF8 ; =0x000088C8
    // ldrh r1, [r0, r1]
    // cmp r1, #0
    // beq _021EAD50
    // mov r1, #1
    // bl ov14_021F391C
    // ldr r0, [r4, #0x34]
    // mov r1, #0xb
    // mov r2, #1
    // bl ov14_021F29E4
    // ldr r0, [r4, #0x34]
    // mov r1, #0xb
    // mov r2, #1
    // bl ov14_021F2A18
    // mov r0, #1
    // strh r0, [r5, #0x10]
    // b _021EAEF0
    // mov r1, #0x2f
    // lsl r1, r1, #4
    // ldr r0, [r0, r1]
    // bl ov14_021E8434
    // mov r0, #0xa
    // strh r0, [r5, #0x10]
    // b _021EAEF0
    // ldr r0, [r4, #0x34]
    // mov r1, #0xb
    // bl ov14_021F2A04
    // cmp r0, #1
    // bne _021EAD6E
    // b _021EAEF0
    // ldr r0, [r4, #0x34]
    // mov r1, #0
    // bl ov14_021F391C
    // ldr r0, [r4, #0x34]
    // bl ov14_021F3B3C
    // mov r0, #2
    // strh r0, [r5, #0x10]
    // ldr r0, [r4, #0x34]
    // ldr r1, _021EAEFC ; =0x0000044A
    // ldrb r2, [r0, r1]
    // cmp r2, #1
    // bne _021EADA4
    // cmp r6, #0
    // bne _021EADA4
    // mov r2, #2
    // strb r2, [r0, r1]
    // add r0, r4, #0
    // mov r1, #0x28
    // bl ov14_021F69F0
    // add r0, r4, #0
    // mov r1, #0x81
    // mov r2, #0
    // bl ov14_021F3488
    // add r0, sp, #4
    // add r1, sp, #0
    // bl System_GetTouchHeldCoords
    // cmp r0, #0
    // bne _021EAE60
    // ldr r1, [r4, #0x34]
    // ldr r0, _021EAEFC ; =0x0000044A
    // ldr r2, _021EAF00 ; =0x000040B8
    // ldrb r0, [r1, r0]
    // cmp r0, #2
    // bne _021EADD0
    // ldr r0, [r1, r2]
    // add r2, r2, #4
    // ldr r1, [r1, r2]
    // lsl r0, r0, #0x10
    // lsl r1, r1, #0x10
    // asr r0, r0, #0x10
    // asr r1, r1, #0x10
    // bl ov14_021E7960
    // b _021EADE4
    // ldr r0, [r1, r2]
    // add r2, r2, #4
    // ldr r1, [r1, r2]
    // lsl r0, r0, #0x10
    // lsl r1, r1, #0x10
    // ldr r2, _021EAF04 ; =ov14_021F7BF0
    // asr r0, r0, #0x10
    // asr r1, r1, #0x10
    // bl ov14_021E79AC
    // lsl r0, r0, #0x10
    // lsr r6, r0, #0x10
    // add r7, r6, #0
    // cmp r6, #0xff
    // bne _021EADF6
    // add r0, r4, #0
    // add r0, #0x21
    // ldrb r6, [r0]
    // b _021EAE0E
    // add r1, r4, #0
    // add r1, #0x21
    // ldrb r1, [r1]
    // add r0, r4, #0
    // add r2, r6, #0
    // bl ov14_021E6AA0
    // cmp r0, #0
    // bne _021EAE0E
    // add r0, r4, #0
    // add r0, #0x21
    // ldrb r6, [r0]
    // add r0, r4, #0
    // add r0, #0x21
    // ldrb r0, [r0]
    // cmp r6, r0
    // ldr r1, [r4, #0x34]
    // bne _021EAE44
    // mov r0, #0x2f
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8434
    // ldr r0, [r4, #0x34]
    // ldr r1, _021EAEFC ; =0x0000044A
    // ldrb r1, [r0, r1]
    // cmp r1, #0
    // beq _021EAE4E
    // mov r1, #0x2f
    // lsl r1, r1, #4
    // ldr r0, [r0, r1]
    // bl ov14_021E7FEC
    // mov r1, #1
    // add r0, r4, #0
    // add r2, r1, #0
    // bl ov14_021F3488
    // b _021EAE4E
    // mov r0, #0x2f
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E88F8
    // add r0, r4, #0
    // add r1, r7, #0
    // add r2, r6, #0
    // mov r3, #1
    // bl ov14_021E7AD4
    // mov r0, #3
    // strh r0, [r5, #0x10]
    // b _021EAEF0
    // cmp r7, #0
    // bne _021EAE90
    // ldr r0, [r4, #0x34]
    // ldr r1, _021EAEFC ; =0x0000044A
    // ldrb r1, [r0, r1]
    // cmp r1, #0
    // bne _021EAE90
    // ldr r2, [sp, #4]
    // cmp r2, #0x10
    // blo _021EAE7E
    // ldr r1, [sp]
    // cmp r1, #0x30
    // blo _021EAE7E
    // cmp r2, #0x68
    // blo _021EAE90
    // ldr r1, _021EAEFC ; =0x0000044A
    // mov r2, #1
    // strb r2, [r0, r1]
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E7FB8
    // ldr r1, [sp, #4]
    // ldr r2, [sp]
    // lsl r1, r1, #0x10
    // lsl r2, r2, #0x10
    // ldr r0, [r4, #0x34]
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    // bl ov14_021F395C
    // ldr r0, [r4, #0x34]
    // bl ov14_021F3B5C
    // ldr r2, [sp, #4]
    // ldr r1, [r4, #0x34]
    // ldr r0, _021EAF00 ; =0x000040B8
    // str r2, [r1, r0]
    // ldr r2, [sp]
    // ldr r1, [r4, #0x34]
    // add r0, r0, #4
    // str r2, [r1, r0]
    // b _021EAEF0
    // add r0, r4, #0
    // bl ov14_021E7B8C
    // cmp r0, #0
    // bne _021EAEF0
    // mov r0, #0xa
    // strh r0, [r5, #0x10]
    // b _021EAEF0
    // cmp r7, #0
    // bne _021EAEF0
    // cmp r6, #0
    // bne _021EAEF0
    // ldr r0, [r4, #0x34]
    // ldr r1, _021EAEF8 ; =0x000088C8
    // ldrh r1, [r0, r1]
    // cmp r1, #0
    // beq _021EAEE8
    // mov r1, #0
    // bl ov14_021F391C
    // ldr r0, [r4, #0x34]
    // bl ov14_021F3B3C
    // mov r0, #0
    // add sp, #8
    // strh r0, [r5, #0x10]
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #1
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021EAEF8: .word 0x000088C8
    // _021EAEFC: .word 0x0000044A
    // _021EAF00: .word 0x000040B8
    // _021EAF04: .word ov14_021F7BF0
    // TODO: decompile
}




void ov14_021EAF08(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // ldr r4, [r5, #0x34]
    // bl ov14_021E80A8
    // add r6, r0, #0
    // ldrh r0, [r4, #0x10]
    // cmp r0, #0
    // beq _021EAF20
    // cmp r0, #1
    // beq _021EAF70
    // b _021EAF84
    // ldr r0, [r5, #0x34]
    // mov r1, #0xb
    // bl ov14_021F2A04
    // cmp r0, #0
    // bne _021EAF84
    // add r0, r5, #0
    // add r0, #0x21
    // ldrb r1, [r0]
    // ldr r0, [r4, #0xc]
    // mov r3, #1
    // ldrh r2, [r0]
    // add r0, r5, #0
    // add r0, #0x21
    // strb r2, [r0]
    // add r0, r5, #0
    // add r2, r1, #0
    // bl ov14_021E7AD4
    // ldr r2, [r5, #0x34]
    // ldr r0, _021EAF88 ; =0x0000044A
    // ldrb r1, [r2, r0]
    // cmp r1, #0
    // beq _021EAF6A
    // mov r1, #0
    // strb r1, [r2, r0]
    // mov r0, #0x2f
    // ldr r1, [r5, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E7FEC
    // mov r1, #1
    // add r0, r5, #0
    // add r2, r1, #0
    // bl ov14_021F3488
    // mov r0, #1
    // strh r0, [r4, #0x10]
    // b _021EAF84
    // add r0, r5, #0
    // bl ov14_021E7B8C
    // cmp r0, #0
    // bne _021EAF84
    // cmp r6, #0
    // bne _021EAF84
    // mov r0, #0
    // strh r0, [r4, #0x10]
    // pop {r4, r5, r6, pc}
    // mov r0, #1
    // pop {r4, r5, r6, pc}
    // _021EAF88: .word 0x0000044A
    // TODO: decompile
}




void ov14_021EAF8C(void) {
    // push {r4, lr}
    // add r4, r1, #0
    // ldr r1, [r4]
    // lsl r2, r1, #2
    // ldr r1, _021EAFA8 ; =ov14_021F7D9C
    // ldr r1, [r1, r2]
    // blx r1
    // str r0, [r4]
    // cmp r0, #0xb3
    // beq _021EAFA4
    // mov r0, #1
    // pop {r4, pc}
    // mov r0, #0
    // pop {r4, pc}
    // _021EAFA8: .word ov14_021F7D9C
    // TODO: decompile
}




void ov14_021EAFAC(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r0, #0
    // add r1, r0, #0
    // bl Main_SetVBlankIntrCB
    // bl HBlankInterruptDisable
    // mov r0, #0
    // bl GfGfx_EngineASetPlanes
    // mov r0, #0
    // bl GfGfx_EngineBSetPlanes
    // ldr r0, _021EB0C8 ; =0x04000050
    // mov r1, #0
    // strh r1, [r0]
    // ldr r0, _021EB0CC ; =0x04001050
    // strh r1, [r0]
    // bl sub_020210BC
    // mov r0, #4
    // bl sub_02021148
    // ldr r2, _021EB0D0 ; =0x04000304
    // ldr r0, _021EB0D4 ; =0xFFFF7FFF
    // ldrh r1, [r2]
    // and r0, r1
    // strh r0, [r2]
    // mov r2, #2
    // mov r0, #3
    // mov r1, #0xa
    // lsl r2, r2, #0x12
    // bl Heap_Create
    // ldr r1, _021EB0D8 ; =0x000088E0
    // mov r0, #0xa
    // bl Heap_Alloc
    // ldr r2, _021EB0D8 ; =0x000088E0
    // mov r1, #0
    // str r0, [r4, #0x34]
    // bl MI_CpuFill8
    // mov r0, #2
    // mov r1, #0xa
    // bl NARC_New
    // mov r1, #0x45
    // ldr r2, [r4, #0x34]
    // lsl r1, r1, #4
    // str r0, [r2, r1]
    // mov r0, #0x14
    // mov r1, #0xa
    // bl NARC_New
    // ldr r2, [r4, #0x34]
    // ldr r1, _021EB0DC ; =0x00000454
    // str r0, [r2, r1]
    // bl ov14_021E5A60
    // add r0, r4, #0
    // bl ov14_021E5A70
    // add r0, r4, #0
    // bl ov14_021E5E74
    // add r0, r4, #0
    // bl ov14_021E5C54
    // add r0, r4, #0
    // bl ov14_021E5D78
    // add r0, r4, #0
    // bl ov14_021E5DE0
    // add r0, r4, #0
    // bl ov14_021F4ED0
    // add r0, r4, #0
    // bl ov14_021F297C
    // add r0, r4, #0
    // bl ov14_021F2F20
    // add r0, r4, #0
    // bl ov14_021F2F3C
    // ldrb r1, [r4, #0x1f]
    // add r0, r4, #0
    // bl ov14_021E7930
    // add r1, r0, #0
    // add r0, r4, #0
    // mov r2, #2
    // bl ov14_021E783C
    // add r0, r4, #0
    // bl ov14_021E7BA4
    // ldr r0, [r4]
    // ldr r0, [r0, #8]
    // cmp r0, #1
    // beq _021EB08C
    // cmp r0, #0
    // beq _021EB08C
    // add r0, r4, #0
    // bl ov14_021E81FC
    // add r0, r4, #0
    // bl ov14_021E825C
    // add r0, r4, #0
    // bl ov14_021E82BC
    // add r0, r4, #0
    // bl ov14_021E5ED0
    // add r0, r4, #0
    // bl ov14_021F5620
    // add r0, r4, #0
    // bl ov14_021F566C
    // add r0, r4, #0
    // bl ov14_021F49C8
    // add r0, r4, #0
    // bl ov14_021F6A44
    // ldr r0, _021EB0E0 ; =ov14_021E59AC
    // add r1, r4, #0
    // mov r2, #0
    // bl SysTask_CreateOnVBlankQueue
    // ldr r1, [r4, #0x34]
    // str r0, [r1]
    // mov r0, #1
    // bl ov14_021E5EAC
    // ldr r0, [r4, #0x30]
    // pop {r4, pc}
    // _021EB0C8: .word 0x04000050
    // _021EB0CC: .word 0x04001050
    // _021EB0D0: .word 0x04000304
    // _021EB0D4: .word 0xFFFF7FFF
    // _021EB0D8: .word 0x000088E0
    // _021EB0DC: .word 0x00000454
    // _021EB0E0: .word ov14_021E59AC
    // TODO: decompile
}




void ov14_021EB0E4(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl ov14_021E6048
    // ldr r0, [r4, #0x34]
    // ldr r0, [r0]
    // bl SysTask_Destroy
    // add r0, r4, #0
    // bl ov14_021F6B10
    // add r0, r4, #0
    // bl ov14_021E5EE8
    // ldr r0, [r4, #0x34]
    // bl ov14_021E7D7C
    // ldr r0, [r4, #0x34]
    // bl ov14_021F29AC
    // add r0, r4, #0
    // bl ov14_021F4F00
    // add r0, r4, #0
    // bl ov14_021E5DB8
    // add r0, r4, #0
    // bl ov14_021E5E94
    // add r0, r4, #0
    // bl ov14_021E5C00
    // ldr r1, [r4, #0x34]
    // ldr r0, _021EB164 ; =0x00000454
    // ldr r0, [r1, r0]
    // bl NARC_Delete
    // mov r0, #0x45
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl NARC_Delete
    // bl sub_02021238
    // ldr r1, _021EB168 ; =0x04000050
    // mov r0, #0
    // strh r0, [r1]
    // ldr r1, _021EB16C ; =0x04001050
    // strh r0, [r1]
    // bl GfGfx_EngineASetPlanes
    // mov r0, #0
    // bl GfGfx_EngineBSetPlanes
    // ldr r0, [r4, #0x34]
    // bl Heap_Free
    // mov r0, #0xa
    // bl Heap_Destroy
    // ldr r0, [r4, #0x30]
    // pop {r4, pc}
    // nop
    // _021EB164: .word 0x00000454
    // _021EB168: .word 0x04000050
    // _021EB16C: .word 0x04001050
    // TODO: decompile
}




void ov14_021EB170(void) {
}




void ov14_021EB18C(void) {
}




void ov14_021EB1A4(void) {
    // ldr r3, [r0, #0x34]
    // ldr r1, _021EB1BC ; =0x00000444
    // ldr r2, [r3, r1]
    // cmp r2, #0
    // bne _021EB1B2
    // ldr r0, [r0, #0x30]
    // bx lr
    // sub r0, r2, #1
    // str r0, [r3, r1]
    // mov r0, #4
    // bx lr
    // nop
    // _021EB1BC: .word 0x00000444
    // TODO: decompile
}




void ov14_021EB1C0(void) {
    // push {r3, lr}
    // ldr r1, [r0, #0x34]
    // ldr r1, [r1, #4]
    // cmp r1, #0
    // bne _021EB1D6
    // ldr r1, [r0, #0x30]
    // lsl r2, r1, #2
    // ldr r1, _021EB1DC ; =ov14_021F7D9C
    // ldr r1, [r1, r2]
    // blx r1
    // pop {r3, pc}
    // mov r0, #5
    // pop {r3, pc}
    // nop
    // _021EB1DC: .word ov14_021F7D9C
    // TODO: decompile
}




void ov14_021EB1E0(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl System_GetTouchNew
    // cmp r0, #1
    // bne _021EB1F6
    // ldr r0, _021EB210 ; =0x000005DD
    // bl PlaySE
    // ldr r0, [r4, #0x30]
    // pop {r4, pc}
    // ldr r0, _021EB214 ; =gSystem
    // ldr r1, [r0, #0x48]
    // mov r0, #3
    // tst r0, r1
    // beq _021EB20A
    // ldr r0, _021EB210 ; =0x000005DD
    // bl PlaySE
    // ldr r0, [r4, #0x30]
    // pop {r4, pc}
    // mov r0, #6
    // pop {r4, pc}
    // nop
    // _021EB210: .word 0x000005DD
    // _021EB214: .word gSystem
    // TODO: decompile
}




void ov14_021EB218(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r1, [r4, #0x34]
    // ldr r0, _021EB26C ; =0x00000434
    // ldr r0, [r1, r0]
    // bl YesNoPrompt_HandleInput
    // cmp r0, #1
    // beq _021EB230
    // cmp r0, #2
    // beq _021EB24C
    // b _021EB268
    // ldr r1, [r4, #0x34]
    // ldr r0, _021EB26C ; =0x00000434
    // ldr r0, [r1, r0]
    // bl YesNoPrompt_Reset
    // ldr r2, [r4, #0x34]
    // ldr r1, _021EB270 ; =0x00000438
    // add r0, r4, #0
    // ldrh r1, [r2, r1]
    // lsl r2, r1, #3
    // ldr r1, _021EB274 ; =ov14_021F7D74
    // ldr r1, [r1, r2]
    // blx r1
    // pop {r4, pc}
    // ldr r1, [r4, #0x34]
    // ldr r0, _021EB26C ; =0x00000434
    // ldr r0, [r1, r0]
    // bl YesNoPrompt_Reset
    // ldr r2, [r4, #0x34]
    // ldr r1, _021EB270 ; =0x00000438
    // add r0, r4, #0
    // ldrh r1, [r2, r1]
    // lsl r2, r1, #3
    // ldr r1, _021EB278 ; =ov14_021F7D78
    // ldr r1, [r1, r2]
    // blx r1
    // pop {r4, pc}
    // mov r0, #7
    // pop {r4, pc}
    // _021EB26C: .word 0x00000434
    // _021EB270: .word 0x00000438
    // _021EB274: .word ov14_021F7D74
    // _021EB278: .word ov14_021F7D78
    // TODO: decompile
}




void ov14_021EB27C(void) {
}




void ov14_021EB290(void) {
    // push {r3, lr}
    // ldrb r2, [r0, #0x1e]
    // mov r1, #0xc
    // add r3, r2, #0
    // mul r3, r1
    // ldr r1, _021EB2A4 ; =ov14_021F7D50
    // ldr r1, [r1, r3]
    // blx r1
    // mov r0, #0xa
    // pop {r3, pc}
    // _021EB2A4: .word ov14_021F7D50
    // TODO: decompile
}




void ov14_021EB2A8(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4, #0x14]
    // bl OverlayManager_Run
    // cmp r0, #0
    // bne _021EB2BA
    // mov r0, #0xa
    // pop {r4, pc}
    // ldr r0, [r4, #0x14]
    // bl OverlayManager_Delete
    // ldrb r2, [r4, #0x1e]
    // mov r1, #0xc
    // add r0, r4, #0
    // add r3, r2, #0
    // mul r3, r1
    // ldr r1, _021EB2E4 ; =ov14_021F7D50 + 4
    // ldr r1, [r1, r3]
    // blx r1
    // ldrb r1, [r4, #0x1e]
    // mov r0, #0xc
    // add r2, r1, #0
    // mul r2, r0
    // ldr r0, _021EB2E8 ; =ov14_021F7D50 + 8
    // ldr r0, [r0, r2]
    // str r0, [r4, #0x30]
    // mov r0, #0
    // pop {r4, pc}
    // nop
    // _021EB2E4: .word ov14_021F7D50 + 4
    // _021EB2E8: .word ov14_021F7D50 + 8
    // TODO: decompile
}




void ov14_021EB2EC(void) {
    // push {r3, r4, r5, lr}
    // add r4, r0, #0
    // ldr r0, _021EB384 ; =0x0000060C
    // bl PlaySE
    // ldr r0, [r4]
    // ldr r0, [r0, #8]
    // cmp r0, #3
    // bhi _021EB37A
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _021EB30A: ; jump table
    // add r0, r4, #0
    // bl ov14_021F0BF4
    // mov r1, #0
    // add r0, r4, #0
    // add r2, r1, #0
    // mov r3, #0x27
    // bl ov14_021F685C
    // ldr r0, [r4, #0x34]
    // mov r1, #0
    // bl ov14_021F43F4
    // mov r1, #1
    // add r0, r4, #0
    // add r2, r1, #0
    // bl ov14_021F3488
    // add r0, r4, #0
    // mov r1, #0x1e
    // bl ov14_021E7588
    // mov r5, #0x5b
    // b _021EB37A
    // mov r1, #0
    // add r0, r4, #0
    // add r2, r1, #0
    // mov r3, #0x27
    // bl ov14_021F685C
    // add r0, r4, #0
    // mov r1, #0
    // bl ov14_021E7588
    // mov r5, #0x51
    // b _021EB37A
    // add r0, r4, #0
    // mov r1, #0
    // bl ov14_021E7588
    // mov r5, #0xc
    // b _021EB37A
    // add r0, r4, #0
    // mov r1, #0x81
    // mov r2, #1
    // bl ov14_021F3488
    // add r0, r4, #0
    // mov r1, #0
    // bl ov14_021E7588
    // mov r5, #0x75
    // add r0, r4, #0
    // add r1, r5, #0
    // bl ov14_021F01D8
    // pop {r3, r4, r5, pc}
    // _021EB384: .word 0x0000060C
    // TODO: decompile
}




void ov14_021EB388(void) {
    // push {r3, r4, r5, lr}
    // add r4, r0, #0
    // bl ov14_021F6A14
    // add r5, r0, #0
    // mov r0, #0
    // mvn r0, r0
    // cmp r5, r0
    // beq _021EB490
    // add r0, r4, #0
    // add r1, r5, #0
    // mov r2, #0xac
    // mov r3, #0
    // bl ov14_021E6070
    // cmp r0, #0
    // beq _021EB3F4
    // ldr r0, _021EB6E4 ; =0x000005EB
    // bl PlaySE
    // ldr r2, [r4, #0x34]
    // ldr r1, _021EB6E8 ; =0x000040B8
    // add r0, r2, r1
    // add r1, r1, #4
    // add r1, r2, r1
    // bl System_GetTouchNewCoords
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8544
    // cmp r0, #0
    // bne _021EB3D8
    // ldr r1, _021EB6EC ; =ov14_021F7D3C
    // add r0, r4, #0
    // mov r2, #5
    // bl ov14_021F5EE4
    // add r0, r4, #0
    // add r1, r5, #0
    // bl ov14_021E7588
    // ldr r0, [r4, #0x34]
    // mov r1, #9
    // mov r2, #0
    // bl ov14_021F2A18
    // add r0, r4, #0
    // add r1, r5, #0
    // bl ov14_021F039C
    // pop {r3, r4, r5, pc}
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8544
    // cmp r0, #1
    // bne _021EB470
    // add r0, r4, #0
    // add r0, #0x21
    // ldrb r5, [r0]
    // ldr r0, [r4, #0x34]
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_GetNextInput
    // add r2, r0, #0
    // ldr r0, [r4, #0x34]
    // add r1, r5, #0
    // bl ov14_021F7AC4
    // ldr r0, [r4, #0x34]
    // add r1, r5, #0
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_SetNextInput
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E84A4
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8248
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E82A8
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8328
    // ldr r0, [r4, #0x34]
    // bl ov14_021E884C
    // add r0, r4, #0
    // mov r1, #0
    // bl ov14_021F40E8
    // ldr r1, _021EB6F0 ; =ov14_021EA180
    // add r0, r4, #0
    // mov r2, #0x4a
    // bl ov14_021F0234
    // pop {r3, r4, r5, pc}
    // ldr r0, [r4, #0x34]
    // lsl r1, r5, #0x18
    // ldr r0, [r0, #0x2c]
    // lsr r1, r1, #0x18
    // bl GridInputHandler_SetNextInput
    // ldr r0, [r4, #0x34]
    // mov r1, #1
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_SetButtonInputMode
    // add r0, r4, #0
    // bl ov14_021E765C
    // mov r0, #0xc
    // pop {r3, r4, r5, pc}
    // add r0, r4, #0
    // bl ov14_021F6F94
    // mov r1, #2
    // add r5, r0, #0
    // mvn r1, r1
    // cmp r5, r1
    // bhi _021EB4DC
    // blo _021EB4A4
    // b _021EB684
    // cmp r5, #0x29
    // bhi _021EB4D0
    // sub r0, #0x1e
    // bmi _021EB4DA
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _021EB4B8: ; jump table
    // mov r0, #3
    // mvn r0, r0
    // cmp r5, r0
    // bne _021EB4DA
    // b _021EB714
    // b _021EB750
    // add r0, r1, #1
    // cmp r5, r0
    // bhi _021EB4E8
    // bne _021EB4E6
    // b _021EB6E0
    // b _021EB750
    // add r0, r1, #2
    // cmp r5, r0
    // bne _021EB4F0
    // b _021EB63A
    // b _021EB750
    // ldr r0, _021EB6F4 ; =0x000005DD
    // bl PlaySE
    // add r0, r4, #0
    // bl ov14_021E76B8
    // add r0, r4, #0
    // bl ov14_021F1128
    // pop {r3, r4, r5, pc}
    // ldr r0, _021EB6F8 ; =0x000005DC
    // bl PlaySE
    // add r0, r4, #0
    // bl ov14_021E76B8
    // ldr r0, [r4, #0x34]
    // mov r1, #9
    // mov r2, #0
    // bl ov14_021F2A18
    // ldr r0, [r4, #0x34]
    // mov r1, #0x1e
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_SetNextInput
    // add r0, r4, #0
    // mov r1, #0xc
    // bl ov14_021F028C
    // pop {r3, r4, r5, pc}
    // ldr r0, _021EB6F8 ; =0x000005DC
    // bl PlaySE
    // add r0, r4, #0
    // bl ov14_021E76B8
    // ldr r0, [r4, #0x34]
    // mov r1, #9
    // mov r2, #0
    // bl ov14_021F2A18
    // ldr r0, [r4, #0x34]
    // mov r1, #0x1e
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_SetNextInput
    // add r0, r4, #0
    // mov r1, #0xc
    // bl ov14_021F0314
    // pop {r3, r4, r5, pc}
    // ldr r0, _021EB6FC ; =0x00000632
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #8
    // mov r2, #0x95
    // bl ov14_021F2270
    // pop {r3, r4, r5, pc}
    // ldr r0, _021EB6FC ; =0x00000632
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #0
    // add r0, #0x2a
    // strb r1, [r0]
    // add r0, r4, #0
    // add r0, #0x2b
    // strb r1, [r0]
    // add r0, r4, #0
    // mov r1, #9
    // mov r2, #0x96
    // bl ov14_021F2330
    // pop {r3, r4, r5, pc}
    // ldr r0, _021EB6F4 ; =0x000005DD
    // bl PlaySE
    // bl System_GetTouchNew
    // cmp r0, #0
    // bne _021EB5A2
    // add r0, r4, #0
    // mov r1, #1
    // add r0, #0x2a
    // strb r1, [r0]
    // add r0, r4, #0
    // add r0, #0x21
    // ldrb r1, [r0]
    // add r0, r4, #0
    // add r0, #0x2b
    // strb r1, [r0]
    // add r0, r4, #0
    // mov r1, #3
    // mov r2, #0xb2
    // bl ov14_021F2330
    // pop {r3, r4, r5, pc}
    // ldr r0, _021EB6F4 ; =0x000005DD
    // bl PlaySE
    // mov r0, #0x25
    // str r0, [r4, #0x2c]
    // add r0, r4, #0
    // mov r1, #4
    // mov r2, #0x97
    // bl ov14_021F2270
    // pop {r3, r4, r5, pc}
    // ldr r0, _021EB6F4 ; =0x000005DD
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #5
    // mov r2, #0x98
    // bl ov14_021F2270
    // pop {r3, r4, r5, pc}
    // ldr r0, _021EB6F4 ; =0x000005DD
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #6
    // mov r2, #0x99
    // bl ov14_021F2270
    // pop {r3, r4, r5, pc}
    // ldr r0, _021EB6F4 ; =0x000005DD
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #7
    // mov r2, #0x9b
    // bl ov14_021F2270
    // pop {r3, r4, r5, pc}
    // ldr r0, _021EB6F8 ; =0x000005DC
    // bl PlaySE
    // add r0, r4, #0
    // add r0, #0x21
    // ldrb r5, [r0]
    // ldr r0, [r4, #0x34]
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_GetNextInput
    // add r2, r0, #0
    // ldr r0, [r4, #0x34]
    // add r1, r5, #0
    // bl ov14_021F7AC4
    // ldr r0, [r4, #0x34]
    // add r1, r5, #0
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_SetNextInput
    // add r0, r4, #0
    // mov r1, #0xb
    // mov r2, #0x9c
    // bl ov14_021F2270
    // pop {r3, r4, r5, pc}
    // ldr r0, [r4, #0x34]
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_GetNextInput
    // cmp r0, #0x1e
    // bne _021EB66C
    // ldr r0, _021EB700 ; =gSystem
    // ldr r1, [r0, #0x48]
    // mov r0, #0x20
    // tst r0, r1
    // beq _021EB666
    // ldr r0, _021EB6F8 ; =0x000005DC
    // bl PlaySE
    // add r0, r4, #0
    // bl ov14_021E76B8
    // add r0, r4, #0
    // mov r1, #0xc
    // bl ov14_021F028C
    // pop {r3, r4, r5, pc}
    // mov r0, #0x10
    // tst r0, r1
    // bne _021EB66E
    // b _021EB79E
    // ldr r0, _021EB6F8 ; =0x000005DC
    // bl PlaySE
    // add r0, r4, #0
    // bl ov14_021E76B8
    // add r0, r4, #0
    // mov r1, #0xc
    // bl ov14_021F0314
    // pop {r3, r4, r5, pc}
    // ldr r0, [r4, #0x34]
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_GetNextInput
    // add r1, r0, #0
    // cmp r1, #0x1e
    // bhs _021EB69A
    // add r0, r4, #0
    // bl ov14_021E7588
    // b _021EB6B8
    // cmp r1, #0x24
    // beq _021EB6B8
    // cmp r1, #0x25
    // beq _021EB6B8
    // cmp r1, #0x26
    // beq _021EB6B8
    // cmp r1, #0x27
    // beq _021EB6B8
    // cmp r1, #0x28
    // beq _021EB6B8
    // cmp r1, #0x29
    // beq _021EB6B8
    // add r0, r4, #0
    // bl ov14_021E765C
    // ldr r0, _021EB6F8 ; =0x000005DC
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #0x4a
    // bl ov14_021F0244
    // pop {r3, r4, r5, pc}
    // ldr r0, _021EB6F4 ; =0x000005DD
    // bl PlaySE
    // add r0, r4, #0
    // bl ov14_021E765C
    // add r0, r4, #0
    // mov r1, #0xa
    // mov r2, #0x93
    // bl ov14_021F2270
    // pop {r3, r4, r5, pc}
    // ldr r0, _021EB6F4 ; =0x000005DD
    // b _021EB704
    // _021EB6E4: .word 0x000005EB
    // _021EB6E8: .word 0x000040B8
    // _021EB6EC: .word ov14_021F7D3C
    // _021EB6F0: .word ov14_021EA180
    // _021EB6F4: .word 0x000005DD
    // _021EB6F8: .word 0x000005DC
    // _021EB6FC: .word 0x00000632
    // _021EB700: .word gSystem
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #0xa
    // mov r2, #0x94
    // bl ov14_021F2270
    // pop {r3, r4, r5, pc}
    // ldr r0, [r4, #0x34]
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_GetNextInput
    // add r1, r0, #0
    // cmp r1, #0x1e
    // bhs _021EB72A
    // add r0, r4, #0
    // bl ov14_021E7588
    // b _021EB748
    // cmp r1, #0x24
    // beq _021EB748
    // cmp r1, #0x25
    // beq _021EB748
    // cmp r1, #0x26
    // beq _021EB748
    // cmp r1, #0x27
    // beq _021EB748
    // cmp r1, #0x28
    // beq _021EB748
    // cmp r1, #0x29
    // beq _021EB748
    // add r0, r4, #0
    // bl ov14_021E765C
    // ldr r0, _021EB7A4 ; =0x000005DC
    // bl PlaySE
    // b _021EB79E
    // add r0, r4, #0
    // add r1, r5, #0
    // mov r2, #0xac
    // mov r3, #0
    // bl ov14_021E6070
    // cmp r0, #0
    // beq _021EB79E
    // ldr r0, _021EB7A8 ; =0x000005DD
    // bl PlaySE
    // ldr r1, _021EB7AC ; =ov14_021F7D3C
    // add r0, r4, #0
    // mov r2, #5
    // bl ov14_021F5EE4
    // add r0, r4, #0
    // add r1, r5, #0
    // bl ov14_021E7588
    // ldr r0, [r4, #0x34]
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_GetNextInput
    // add r2, r0, #0
    // ldr r0, [r4, #0x34]
    // mov r1, #0x24
    // bl ov14_021F7AC4
    // ldr r0, [r4, #0x34]
    // mov r1, #0x24
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_SetNextInput
    // add r0, r4, #0
    // add r1, r5, #0
    // bl ov14_021F0530
    // pop {r3, r4, r5, pc}
    // mov r0, #0xc
    // pop {r3, r4, r5, pc}
    // nop
    // _021EB7A4: .word 0x000005DC
    // _021EB7A8: .word 0x000005DD
    // _021EB7AC: .word ov14_021F7D3C
    // TODO: decompile
}




void ov14_021EB7B0(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _021EB7E0 ; =0x000005EA
    // bl PlaySE
    // add r0, r4, #0
    // bl ov14_021E637C
    // add r0, r4, #0
    // bl ov14_021F08F0
    // ldr r0, [r4, #0x34]
    // mov r1, #0x24
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_SetNextInput
    // ldr r0, [r4, #0x34]
    // mov r1, #1
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_SetButtonInputMode
    // mov r0, #0xc
    // pop {r4, pc}
    // nop
    // _021EB7E0: .word 0x000005EA
    // TODO: decompile
}




void ov14_021EB7E4(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, [r5, #0x34]
    // mov r1, #0x25
    // bl ov14_021F6688
    // ldr r0, [r5]
    // ldr r0, [r0, #8]
    // cmp r0, #0
    // beq _021EB81E
    // cmp r0, #1
    // beq _021EB800
    // cmp r0, #2
    // b _021EB83C
    // ldr r1, _021EB8AC ; =ov14_021F7D2C
    // add r0, r5, #0
    // mov r2, #4
    // bl ov14_021F5EE4
    // add r1, r5, #0
    // add r1, #0x21
    // ldrb r1, [r1]
    // add r0, r5, #0
    // mov r2, #1
    // mov r3, #0x27
    // bl ov14_021F685C
    // mov r4, #0x5a
    // b _021EB856
    // ldr r1, _021EB8B0 ; =ov14_021F7D1C
    // add r0, r5, #0
    // mov r2, #4
    // bl ov14_021F5EE4
    // add r1, r5, #0
    // add r1, #0x21
    // ldrb r1, [r1]
    // add r0, r5, #0
    // mov r2, #1
    // mov r3, #0x27
    // bl ov14_021F685C
    // mov r4, #0x72
    // b _021EB856
    // ldr r1, _021EB8B4 ; =ov14_021F7D3C
    // add r0, r5, #0
    // mov r2, #5
    // bl ov14_021F5EE4
    // add r0, r5, #0
    // add r0, #0x21
    // ldrb r0, [r0]
    // cmp r0, #0x1e
    // bhs _021EB854
    // mov r4, #0x4d
    // b _021EB856
    // mov r4, #0x4e
    // ldr r0, [r5, #0x34]
    // ldr r2, _021EB8B8 ; =0x0000044E
    // ldrb r3, [r0, r2]
    // lsl r1, r3, #0x18
    // lsr r1, r1, #0x1f
    // cmp r1, #1
    // bne _021EB892
    // mov r1, #0x80
    // bic r3, r1
    // strb r3, [r0, r2]
    // add r0, r5, #0
    // add r0, #0x21
    // ldrb r0, [r0]
    // cmp r0, #0x1e
    // blo _021EB880
    // add r0, r5, #0
    // mov r1, #2
    // mov r2, #0
    // bl ov14_021F3488
    // b _021EB892
    // ldr r0, [r5, #0x34]
    // mov r1, #1
    // bl ov14_021F43F4
    // add r0, r5, #0
    // mov r1, #1
    // mov r2, #0
    // bl ov14_021F3488
    // mov r0, #0x2f
    // ldr r1, [r5, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8434
    // ldr r1, _021EB8BC ; =ov14_021E9434
    // add r0, r5, #0
    // add r2, r4, #0
    // bl ov14_021F0234
    // pop {r3, r4, r5, pc}
    // nop
    // _021EB8AC: .word ov14_021F7D2C
    // _021EB8B0: .word ov14_021F7D1C
    // _021EB8B4: .word ov14_021F7D3C
    // _021EB8B8: .word 0x0000044E
    // _021EB8BC: .word ov14_021E9434
    // TODO: decompile
}




void ov14_021EB8C0(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r1, r5, #0
    // add r1, #0x21
    // ldrb r1, [r1]
    // bl ov14_021E7588
    // add r0, r5, #0
    // add r0, #0x26
    // ldrb r0, [r0]
    // cmp r0, #0
    // bne _021EB9D4
    // ldr r0, [r5]
    // ldr r0, [r0, #8]
    // cmp r0, #1
    // bne _021EB8EC
    // ldr r1, _021EBAD8 ; =ov14_021F7D2C
    // add r0, r5, #0
    // mov r2, #4
    // bl ov14_021F5EE4
    // b _021EB954
    // cmp r0, #0
    // bne _021EB90E
    // ldr r0, [r5, #0x34]
    // mov r1, #0
    // bl ov14_021F43F4
    // mov r1, #1
    // add r0, r5, #0
    // add r2, r1, #0
    // bl ov14_021F3488
    // ldr r1, _021EBADC ; =ov14_021F7D1C
    // add r0, r5, #0
    // mov r2, #4
    // bl ov14_021F5EE4
    // b _021EB954
    // add r0, r5, #0
    // add r0, #0x21
    // ldrb r0, [r0]
    // cmp r0, #0x1e
    // blo _021EB934
    // mov r1, #1
    // add r0, r5, #0
    // add r2, r1, #0
    // bl ov14_021F3488
    // add r0, r5, #0
    // add r0, #0x24
    // ldrb r0, [r0]
    // cmp r0, #0
    // beq _021EB944
    // add r0, r5, #0
    // bl ov14_021E8664
    // b _021EB944
    // add r0, r5, #0
    // add r0, #0x24
    // ldrb r0, [r0]
    // cmp r0, #0
    // beq _021EB944
    // add r0, r5, #0
    // bl ov14_021E8664
    // ldr r1, _021EBAE0 ; =ov14_021F7D3C
    // add r0, r5, #0
    // mov r2, #5
    // bl ov14_021F5EE4
    // add r0, r5, #0
    // bl ov14_021E87F4
    // mov r0, #0x2f
    // ldr r1, [r5, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E83C4
    // add r0, r5, #0
    // add r0, #0x21
    // ldrb r1, [r0]
    // ldr r0, [r5]
    // cmp r1, #0x1e
    // bhs _021EB984
    // ldr r0, [r0, #8]
    // cmp r0, #1
    // bne _021EB980
    // add r0, r5, #0
    // mov r2, #1
    // mov r3, #0x27
    // bl ov14_021F685C
    // mov r4, #0x51
    // b _021EB9BE
    // mov r4, #0xc
    // b _021EB9BE
    // ldr r0, [r0, #8]
    // cmp r0, #0
    // bne _021EB9A4
    // add r0, r5, #0
    // bl ov14_021F0BF4
    // add r1, r5, #0
    // add r1, #0x21
    // ldrb r1, [r1]
    // add r0, r5, #0
    // mov r2, #1
    // mov r3, #0x27
    // bl ov14_021F685C
    // mov r4, #0x5b
    // b _021EB9BE
    // add r0, r5, #0
    // bl ov14_021F0B70
    // ldr r0, [r5, #0x34]
    // mov r1, #0
    // bl ov14_021F43F4
    // add r0, r5, #0
    // mov r1, #5
    // mov r2, #9
    // bl ov14_021F6AC0
    // mov r4, #0x24
    // add r0, r5, #0
    // bl ov14_021F3F6C
    // ldr r0, [r5]
    // ldr r0, [r0, #8]
    // cmp r0, #3
    // beq _021EBACC
    // ldr r0, [r5, #0x34]
    // bl ov14_021E8874
    // b _021EBACC
    // add r0, r5, #0
    // bl ov14_021F0BB4
    // mov r0, #0x2f
    // ldr r1, [r5, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8610
    // add r0, r5, #0
    // bl ov14_021F4720
    // add r0, r5, #0
    // bl ov14_021F4848
    // add r0, r5, #0
    // bl ov14_021F48B4
    // add r0, r5, #0
    // bl ov14_021F57B8
    // mov r0, #0x2f
    // ldr r1, [r5, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E86E0
    // add r0, r5, #0
    // bl ov14_021E9554
    // cmp r0, #0
    // bne _021EBA0A
    // add r0, r5, #0
    // add r0, #0x27
    // ldrb r0, [r0]
    // cmp r0, #0
    // bne _021EBA2E
    // add r2, r5, #0
    // add r2, #0x21
    // ldrb r2, [r2]
    // add r0, r5, #0
    // mov r1, #4
    // bl ov14_021F6AC0
    // b _021EBA4A
    // add r2, r5, #0
    // add r2, #0x28
    // ldrb r2, [r2]
    // add r0, r5, #0
    // mov r1, #4
    // bl ov14_021F6AC0
    // ldr r1, [r5, #0x34]
    // ldr r0, _021EBAE4 ; =0x0000044B
    // mov r2, #1
    // strb r2, [r1, r0]
    // add r0, r5, #0
    // bl ov14_021EA1F0
    // add r0, r5, #0
    // add r0, #0x25
    // ldrb r0, [r0]
    // mov r1, #6
    // bl _s32_div_f
    // ldr r2, [r5, #0x34]
    // ldr r0, _021EBAE8 ; =0x0000043C
    // add r1, #0x25
    // str r1, [r2, r0]
    // ldr r0, [r5]
    // ldr r0, [r0, #8]
    // cmp r0, #3
    // bne _021EBA7E
    // add r0, r5, #0
    // mov r1, #0x81
    // mov r2, #1
    // bl ov14_021F3488
    // add r0, r5, #0
    // mov r1, #0x82
    // mov r2, #1
    // bl ov14_021F3488
    // mov r4, #0x82
    // b _021EBA8E
    // add r0, r5, #0
    // add r0, #0x27
    // ldrb r0, [r0]
    // cmp r0, #0
    // bne _021EBA8C
    // mov r4, #0x29
    // b _021EBA8E
    // mov r4, #0x73
    // ldr r0, [r5]
    // ldr r0, [r0, #8]
    // cmp r0, #3
    // beq _021EBAA6
    // add r0, r5, #0
    // add r0, #0x27
    // ldrb r0, [r0]
    // cmp r0, #0
    // beq _021EBAA6
    // ldr r0, [r5, #0x34]
    // bl ov14_021E8874
    // add r0, r5, #0
    // add r0, #0x29
    // ldrb r0, [r0]
    // cmp r0, #1
    // bne _021EBAB8
    // ldr r0, [r5, #0x34]
    // mov r1, #0
    // bl ov14_021F43F4
    // add r0, r5, #0
    // mov r1, #0
    // add r0, #0x26
    // strb r1, [r0]
    // add r0, r5, #0
    // add r0, #0x28
    // strb r1, [r0]
    // add r0, r5, #0
    // add r0, #0x27
    // strb r1, [r0]
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov14_021F01D8
    // pop {r3, r4, r5, pc}
    // nop
    // _021EBAD8: .word ov14_021F7D2C
    // _021EBADC: .word ov14_021F7D1C
    // _021EBAE0: .word ov14_021F7D3C
    // _021EBAE4: .word 0x0000044B
    // _021EBAE8: .word 0x0000043C
    // TODO: decompile
}




void ov14_021EBAEC(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r1, #9
    // mov r2, #0xa
    // bl ov14_021F6AC0
    // add r0, r4, #0
    // add r0, #0x25
    // ldrb r0, [r0]
    // mov r1, #6
    // bl _s32_div_f
    // ldr r2, [r4, #0x34]
    // ldr r0, _021EBB38 ; =0x0000043C
    // str r1, [r2, r0]
    // add r0, r4, #0
    // bl ov14_021E8740
    // add r0, r4, #0
    // mov r1, #0
    // mov r2, #0x27
    // bl ov14_021F6844
    // ldr r0, [r4]
    // ldr r0, [r0, #8]
    // cmp r0, #3
    // bne _021EBB2C
    // add r0, r4, #0
    // mov r1, #0x81
    // mov r2, #1
    // bl ov14_021F3488
    // add r0, r4, #0
    // mov r1, #0x3d
    // bl ov14_021F01D8
    // pop {r4, pc}
    // nop
    // _021EBB38: .word 0x0000043C
    // TODO: decompile
}




void ov14_021EBB3C(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #4
    // add r5, r0, #0
    // add r1, r5, #0
    // add r1, #0x21
    // ldrb r1, [r1]
    // cmp r1, #0x1e
    // blo _021EBB62
    // bl ov14_021F0B70
    // ldr r0, [r5, #0x34]
    // mov r1, #0
    // bl ov14_021F43F4
    // mov r1, #1
    // add r0, r5, #0
    // add r2, r1, #0
    // bl ov14_021F3488
    // ldr r0, [r5]
    // ldr r0, [r0, #8]
    // cmp r0, #3
    // beq _021EBB70
    // add r0, r5, #0
    // bl ov14_021F3F6C
    // ldr r0, [r5]
    // ldr r0, [r0, #8]
    // sub r0, r0, #2
    // cmp r0, #1
    // bhi _021EBB8C
    // add r0, r5, #0
    // bl ov14_021E87F4
    // mov r0, #0x2f
    // ldr r1, [r5, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E82FC
    // ldrh r0, [r5, #0x1c]
    // cmp r0, #0
    // bne _021EBC04
    // ldr r0, [r5]
    // ldr r0, [r0, #8]
    // cmp r0, #3
    // bne _021EBBD2
    // add r0, r5, #0
    // mov r1, #0
    // bl ov14_021F5FBC
    // add r0, r5, #0
    // add r0, #0x21
    // ldrb r0, [r0]
    // cmp r0, #0x1e
    // bhs _021EBBBA
    // add r0, r5, #0
    // mov r1, #0x81
    // mov r2, #1
    // bl ov14_021F3488
    // mov r4, #0x75
    // b _021EBBF6
    // add r0, r5, #0
    // mov r1, #0x82
    // mov r2, #1
    // bl ov14_021F3488
    // add r0, r5, #0
    // mov r1, #7
    // mov r2, #8
    // bl ov14_021F6AC0
    // mov r4, #0x8b
    // b _021EBBF6
    // ldr r1, _021EBDBC ; =ov14_021F7D3C
    // add r0, r5, #0
    // mov r2, #5
    // bl ov14_021F5EE4
    // add r0, r5, #0
    // add r0, #0x21
    // ldrb r0, [r0]
    // cmp r0, #0x1e
    // bhs _021EBBEA
    // mov r4, #0xc
    // b _021EBBF6
    // add r0, r5, #0
    // mov r1, #5
    // mov r2, #0xa
    // bl ov14_021F6AC0
    // mov r4, #0x24
    // mov r0, #0x2f
    // ldr r1, [r5, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E83C4
    // b _021EBD82
    // mov r4, #0
    // cmp r0, #0x70
    // bne _021EBC24
    // add r1, r5, #0
    // add r1, #0x21
    // ldrb r1, [r1]
    // add r0, r5, #0
    // mov r2, #5
    // add r3, r4, #0
    // bl ov14_021E6070
    // ldr r1, _021EBDC0 ; =0x000001E7
    // cmp r0, r1
    // beq _021EBC24
    // mov r4, #1
    // b _021EBC72
    // add r2, r5, #0
    // add r2, #0x21
    // ldrb r1, [r5, #0x1f]
    // ldrb r2, [r2]
    // add r0, r5, #0
    // bl ov14_021E60C0
    // add r1, r5, #0
    // add r1, #0x21
    // add r3, r5, #0
    // add r6, r0, #0
    // ldrb r1, [r1]
    // add r0, r5, #0
    // mov r2, #6
    // add r3, #0x1c
    // bl ov14_021E6094
    // add r0, r6, #0
    // bl ov14_021E64D0
    // cmp r0, #1
    // bne _021EBC66
    // add r0, r5, #0
    // add r0, #0x21
    // ldrb r2, [r0]
    // ldr r3, [r5, #0x34]
    // ldrb r1, [r5, #0x1f]
    // add r6, r3, r2
    // ldr r3, _021EBDC4 ; =0x00004094
    // add r0, r5, #0
    // ldrb r3, [r6, r3]
    // bl ov14_021F2ED0
    // ldrh r1, [r5, #0x1c]
    // ldr r0, [r5, #0xc]
    // mov r2, #1
    // mov r3, #0xa
    // bl Bag_TakeItem
    // add r0, r5, #0
    // add r0, #0x21
    // ldrb r2, [r0]
    // ldr r0, [r5]
    // cmp r2, #0x1e
    // blo _021EBC9C
    // ldr r0, [r0, #8]
    // cmp r0, #3
    // bne _021EBC90
    // add r0, r5, #0
    // mov r1, #7
    // sub r2, #0x1e
    // bl ov14_021F6AC0
    // b _021EBCD6
    // add r0, r5, #0
    // mov r1, #5
    // mov r2, #0xa
    // bl ov14_021F6AC0
    // b _021EBCD6
    // ldr r0, [r0, #8]
    // cmp r0, #3
    // bne _021EBCD6
    // ldr r0, [r5, #0x34]
    // add r1, r2, #0
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_SetNextInput
    // add r1, r5, #0
    // ldr r0, [r5, #0x34]
    // add r1, #0x21
    // ldrb r1, [r1]
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_GetDpadBox
    // add r1, sp, #0
    // add r1, #1
    // add r2, sp, #0
    // bl DpadMenuBox_GetPosition
    // mov r0, #0x32
    // ldr r1, [r5, #0x34]
    // lsl r0, r0, #4
    // add r2, sp, #0
    // ldr r0, [r1, r0]
    // ldrb r1, [r2, #1]
    // ldrb r2, [r2]
    // bl ManagedSprite_SetPositionXY
    // ldr r0, [r5, #0x34]
    // mov r1, #9
    // mov r2, #0
    // bl ov14_021F2A18
    // ldr r0, [r5]
    // ldr r0, [r0, #8]
    // cmp r0, #3
    // bne _021EBD78
    // cmp r4, #0
    // bne _021EBD50
    // ldrh r2, [r5, #0x1c]
    // ldr r0, [r5, #0x34]
    // ldr r1, _021EBDC8 ; =0x000088C8
    // strh r2, [r0, r1]
    // ldr r0, [r5, #0x34]
    // ldrh r1, [r0, r1]
    // bl ov14_021F3844
    // ldr r0, [r5, #0x34]
    // mov r1, #0xb
    // mov r2, #1
    // bl ov14_021F2A18
    // add r0, r5, #0
    // add r0, #0x21
    // ldrb r0, [r0]
    // cmp r0, #0x1e
    // blo _021EBD2A
    // add r0, r5, #0
    // mov r1, #0x82
    // mov r2, #1
    // bl ov14_021F3488
    // add r1, r5, #0
    // add r1, #0x21
    // ldrb r1, [r1]
    // ldr r0, [r5, #0x34]
    // mov r2, #1
    // bl ov14_021F396C
    // b _021EBD42
    // add r0, r5, #0
    // mov r1, #0x81
    // mov r2, #1
    // bl ov14_021F3488
    // add r1, r5, #0
    // add r1, #0x21
    // ldrb r1, [r1]
    // ldr r0, [r5, #0x34]
    // mov r2, #0
    // bl ov14_021F396C
    // ldr r0, [r5, #0x34]
    // bl ov14_021F39D0
    // ldr r0, [r5, #0x34]
    // bl ov14_021F3B3C
    // b _021EBD74
    // mov r0, #0
    // strh r0, [r5, #0x1c]
    // add r0, r5, #0
    // add r0, #0x21
    // ldrb r0, [r0]
    // cmp r0, #0x1e
    // blo _021EBD6A
    // add r0, r5, #0
    // mov r1, #0x82
    // mov r2, #1
    // bl ov14_021F3488
    // b _021EBD74
    // add r0, r5, #0
    // mov r1, #0x81
    // mov r2, #1
    // bl ov14_021F3488
    // mov r4, #0x7d
    // b _021EBD82
    // cmp r4, #1
    // bne _021EBD80
    // mov r0, #0
    // strh r0, [r5, #0x1c]
    // mov r4, #0x12
    // add r1, r5, #0
    // add r1, #0x21
    // ldrb r1, [r1]
    // add r0, r5, #0
    // bl ov14_021E7588
    // ldr r0, [r5]
    // ldr r0, [r0, #8]
    // cmp r0, #3
    // beq _021EBD9E
    // ldr r0, [r5, #0x34]
    // bl ov14_021E8874
    // b _021EBDB0
    // ldrh r0, [r5, #0x1c]
    // cmp r0, #0
    // beq _021EBDB0
    // mov r0, #0x2f
    // ldr r1, [r5, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E892C
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov14_021F01D8
    // add sp, #4
    // pop {r3, r4, r5, r6, pc}
    // _021EBDBC: .word ov14_021F7D3C
    // _021EBDC0: .word 0x000001E7
    // _021EBDC4: .word 0x00004094
    // _021EBDC8: .word 0x000088C8
    // TODO: decompile
}




void ov14_021EBDCC(void) {
}




void ov14_021EBDE0(void) {
}




void ov14_021EBDE8(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // add r1, r4, #0
    // add r1, #0x21
    // ldrb r1, [r1]
    // mov r2, #0xb
    // mov r3, #0
    // bl ov14_021E6070
    // ldr r2, [r4, #0x34]
    // ldr r1, _021EBE24 ; =0x000040C0
    // str r0, [r2, r1]
    // add r0, r4, #0
    // bl ov14_021E7DF8
    // ldr r0, [r4, #0x34]
    // bl ov14_021F638C
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E7E40
    // ldr r1, _021EBE28 ; =ov14_021E94A8
    // add r0, r4, #0
    // mov r2, #0x15
    // bl ov14_021F0234
    // pop {r4, pc}
    // _021EBE24: .word 0x000040C0
    // _021EBE28: .word ov14_021E94A8
    // TODO: decompile
}




u32 ov14_021EBE2C(void) {
}




void ov14_021EBE68(void) {
    // push {r3, r4, lr}
    // sub sp, #4
    // add r4, r0, #0
    // ldr r0, [r4, #0x34]
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_HandleInput_AllowHold
    // mov r1, #3
    // mvn r1, r1
    // cmp r0, r1
    // bhi _021EBEA0
    // bhs _021EBF72
    // cmp r0, #7
    // bhi _021EBF78
    // add r1, r0, r0
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _021EBE90: ; jump table
    // mov r1, #2
    // mvn r1, r1
    // cmp r0, r1
    // bhi _021EBEAC
    // beq _021EBF60
    // b _021EBF78
    // add r1, r1, #1
    // cmp r0, r1
    // beq _021EBF4C
    // b _021EBF78
    // ldr r0, _021EBF80 ; =0x000005DD
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #0
    // bl ov14_021E7E10
    // b _021EBF78
    // ldr r0, _021EBF80 ; =0x000005DD
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #1
    // bl ov14_021E7E10
    // b _021EBF78
    // ldr r0, _021EBF80 ; =0x000005DD
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #2
    // bl ov14_021E7E10
    // b _021EBF78
    // ldr r0, _021EBF80 ; =0x000005DD
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #3
    // bl ov14_021E7E10
    // b _021EBF78
    // ldr r0, _021EBF80 ; =0x000005DD
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #4
    // bl ov14_021E7E10
    // b _021EBF78
    // ldr r0, _021EBF80 ; =0x000005DD
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #5
    // bl ov14_021E7E10
    // b _021EBF78
    // ldr r1, [r4, #0x34]
    // ldr r0, _021EBF84 ; =0x000040C0
    // mov r2, #0xb
    // ldr r1, [r1, r0]
    // add r0, sp, #0
    // strb r1, [r0]
    // add r1, r4, #0
    // add r1, #0x21
    // ldrb r1, [r1]
    // add r0, r4, #0
    // add r3, sp, #0
    // bl ov14_021E6094
    // add r1, sp, #0
    // ldrb r1, [r1]
    // add r0, r4, #0
    // bl ov14_021E895C
    // ldr r0, _021EBF80 ; =0x000005DD
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #0
    // mov r2, #0x9a
    // bl ov14_021F23F0
    // add sp, #4
    // pop {r3, r4, pc}
    // ldr r0, _021EBF88 ; =0x000005DC
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #1
    // mov r2, #0x9a
    // bl ov14_021F23F0
    // add sp, #4
    // pop {r3, r4, pc}
    // ldr r0, _021EBF88 ; =0x000005DC
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #0x18
    // bl ov14_021F0244
    // add sp, #4
    // pop {r3, r4, pc}
    // ldr r0, _021EBF88 ; =0x000005DC
    // bl PlaySE
    // mov r0, #0x16
    // add sp, #4
    // pop {r3, r4, pc}
    // nop
    // _021EBF80: .word 0x000005DD
    // _021EBF84: .word 0x000040C0
    // _021EBF88: .word 0x000005DC
    // TODO: decompile
}




void ov14_021EBF8C(void) {
    // ldr r3, _021EBF94 ; =ov14_021F0234
    // ldr r1, _021EBF98 ; =ov14_021E94BC
    // mov r2, #0xe
    // bx r3
    // _021EBF94: .word ov14_021F0234
    // _021EBF98: .word ov14_021E94BC
    // TODO: decompile
}




void ov14_021EBF9C(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r1, r5, #0
    // add r1, #0x21
    // ldrb r1, [r1]
    // cmp r1, #0x1e
    // blo _021EC070
    // mov r1, #2
    // mov r2, #1
    // bl ov14_021F3488
    // add r1, r5, #0
    // add r1, #0x21
    // ldrb r1, [r1]
    // ldr r0, [r5, #0x34]
    // mov r2, #0
    // bl ov14_021F34C8
    // add r0, r5, #0
    // add r0, #0x21
    // ldrb r4, [r0]
    // add r0, r5, #0
    // sub r4, #0x1e
    // add r1, r4, #0
    // bl ov14_021E6480
    // cmp r0, #0
    // bne _021EBFF8
    // ldr r0, _021EC0E4 ; =0x000005F3
    // bl PlaySE
    // add r0, r5, #0
    // mov r1, #6
    // mov r2, #0x25
    // bl ov14_021F67B0
    // ldr r3, [r5, #0x34]
    // ldr r1, _021EC0E8 ; =0x0000044E
    // mov r0, #0x80
    // ldrb r2, [r3, r1]
    // orr r0, r2
    // strb r0, [r3, r1]
    // mov r0, #0xe
    // str r0, [r5, #0x30]
    // mov r0, #6
    // pop {r3, r4, r5, pc}
    // ldr r0, [r5, #8]
    // add r1, r4, #0
    // bl Party_GetMonByIndex
    // mov r1, #6
    // mov r2, #0
    // add r4, r0, #0
    // bl GetMonData
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // bl ItemIdIsMail
    // cmp r0, #1
    // bne _021EC03C
    // ldr r0, _021EC0E4 ; =0x000005F3
    // bl PlaySE
    // add r0, r5, #0
    // mov r1, #0
    // mov r2, #6
    // mov r3, #0x25
    // bl ov14_021F685C
    // ldr r3, [r5, #0x34]
    // ldr r1, _021EC0E8 ; =0x0000044E
    // mov r0, #0x80
    // ldrb r2, [r3, r1]
    // orr r0, r2
    // strb r0, [r3, r1]
    // mov r0, #0xe
    // str r0, [r5, #0x30]
    // mov r0, #6
    // pop {r3, r4, r5, pc}
    // add r0, r4, #0
    // mov r1, #0xa2
    // mov r2, #0
    // bl GetMonData
    // cmp r0, #0
    // beq _021EC090
    // ldr r0, _021EC0E4 ; =0x000005F3
    // bl PlaySE
    // add r0, r5, #0
    // mov r1, #0
    // mov r2, #5
    // mov r3, #0x25
    // bl ov14_021F685C
    // ldr r3, [r5, #0x34]
    // ldr r1, _021EC0E8 ; =0x0000044E
    // mov r0, #0x80
    // ldrb r2, [r3, r1]
    // orr r0, r2
    // strb r0, [r3, r1]
    // mov r0, #0xe
    // str r0, [r5, #0x30]
    // mov r0, #6
    // pop {r3, r4, r5, pc}
    // ldr r0, [r5, #0x34]
    // mov r1, #0
    // bl ov14_021F43F4
    // mov r1, #1
    // add r0, r5, #0
    // add r2, r1, #0
    // bl ov14_021F3488
    // add r1, r5, #0
    // add r1, #0x21
    // ldrb r1, [r1]
    // ldr r0, [r5, #0x34]
    // mov r2, #0
    // bl ov14_021F34C8
    // add r2, r5, #0
    // add r2, #0x21
    // ldrb r1, [r5, #0x1f]
    // ldrb r2, [r2]
    // add r0, r5, #0
    // bl ov14_021E60C0
    // mov r1, #0x4c
    // mov r2, #0
    // bl GetBoxMonData
    // cmp r0, #0
    // beq _021EC0CE
    // ldr r0, _021EC0E4 ; =0x000005F3
    // bl PlaySE
    // add r0, r5, #0
    // mov r1, #3
    // mov r2, #0x25
    // bl ov14_021F67B0
    // ldr r3, [r5, #0x34]
    // ldr r1, _021EC0E8 ; =0x0000044E
    // mov r0, #0x80
    // ldrb r2, [r3, r1]
    // orr r0, r2
    // strb r0, [r3, r1]
    // mov r0, #0xe
    // str r0, [r5, #0x30]
    // mov r0, #6
    // pop {r3, r4, r5, pc}
    // add r0, r5, #0
    // mov r1, #0
    // mov r2, #0x25
    // bl ov14_021F67B0
    // add r0, r5, #0
    // mov r1, #1
    // bl ov14_021F0254
    // pop {r3, r4, r5, pc}
    // nop
    // _021EC0E4: .word 0x000005F3
    // _021EC0E8: .word 0x0000044E
    // TODO: decompile
}




void ov14_021EC0EC(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl ov14_021E7278
    // ldr r1, [r4, #0x34]
    // ldr r0, _021EC124 ; =0x000088DC
    // ldr r0, [r1, r0]
    // bl ov14_021F3380
    // cmp r0, #0
    // bne _021EC120
    // ldr r1, [r4, #0x34]
    // ldr r0, _021EC124 ; =0x000088DC
    // ldr r0, [r1, r0]
    // ldrb r1, [r0, #6]
    // cmp r1, #0
    // beq _021EC112
    // mov r0, #0x1e
    // pop {r4, pc}
    // bl ov14_021F33E8
    // add r0, r4, #0
    // bl ov14_021E7264
    // mov r0, #0x1b
    // pop {r4, pc}
    // mov r0, #0x1a
    // pop {r4, pc}
    // _021EC124: .word 0x000088DC
    // TODO: decompile
}




void ov14_021EC128(void) {
}




void ov14_021EC13C(void) {
}




void ov14_021EC150(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // add r2, r4, #0
    // add r2, #0x21
    // ldrb r1, [r4, #0x1f]
    // ldrb r2, [r2]
    // bl ov14_021E6100
    // ldr r0, [r4, #0x34]
    // mov r1, #0x25
    // bl ov14_021F6654
    // add r0, r4, #0
    // bl ov14_021E765C
    // add r0, r4, #0
    // add r0, #0x21
    // ldrb r0, [r0]
    // cmp r0, #0x1e
    // bhs _021EC200
    // ldrb r1, [r4, #0x1f]
    // add r0, r4, #0
    // bl ov14_021F4958
    // ldrb r1, [r4, #0x1f]
    // add r0, r4, #0
    // bl ov14_021F4A20
    // ldr r0, [r4]
    // ldr r0, [r0, #8]
    // cmp r0, #1
    // bne _021EC1A2
    // mov r1, #0
    // add r0, r4, #0
    // add r2, r1, #0
    // mov r3, #0x27
    // bl ov14_021F685C
    // mov r0, #0x51
    // str r0, [r4, #0x30]
    // b _021EC1BE
    // mov r0, #0xc
    // str r0, [r4, #0x30]
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8248
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E82A8
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8328
    // add r1, r4, #0
    // ldr r0, [r4, #0x34]
    // add r1, #0x21
    // ldrb r1, [r1]
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_SetNextInput
    // ldr r0, [r4, #0x34]
    // mov r1, #1
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_SetButtonInputMode
    // ldr r0, [r4, #0x34]
    // mov r1, #1
    // bl ov14_021F43F4
    // add r0, r4, #0
    // mov r1, #1
    // mov r2, #0
    // bl ov14_021F3488
    // add r0, r4, #0
    // mov r1, #0xff
    // add r0, #0x21
    // strb r1, [r0]
    // ldr r1, _021EC234 ; =ov14_021E9450
    // b _021EC22A
    // add r0, r4, #0
    // bl ov14_021F08BC
    // add r0, r4, #0
    // mov r1, #1
    // add r0, #0x22
    // strb r1, [r0]
    // mov r0, #0x21
    // str r0, [r4, #0x30]
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8328
    // add r0, r4, #0
    // mov r1, #2
    // mov r2, #0
    // bl ov14_021F3488
    // ldr r1, _021EC238 ; =ov14_021E9194
    // ldr r2, [r4, #0x30]
    // add r0, r4, #0
    // bl ov14_021F0234
    // pop {r4, pc}
    // _021EC234: .word ov14_021E9450
    // _021EC238: .word ov14_021E9194
    // TODO: decompile
}




void ov14_021EC23C(void) {
    ov14_021F08F0();
    // add r0, #0x24
    // ldrb r0, [r0]
    ov14_021F57B8(r4);
    // add r1, #0x21
    // ldrb r1, [r1]
    ov14_021E7588(r4, r4);
    // add r1, #0x21
    // ldrb r1, [r1]
    // sub r1, #0x1e
    GridInputHandler_SetNextInput(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)), ((r4 << 0x18) >> 0x18));
    GridInputHandler_SetButtonInputMode(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)), 1);
    // add r0, #0x21
    // strb r1, [r0]
    ov14_021F685C(r4, 0, 0, 0x27);
}




void ov14_021EC2A4(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r1, [r4, #0x34]
    // ldr r0, _021EC2E8 ; =0x000088DC
    // ldr r0, [r1, r0]
    // bl ov14_021F33B0
    // cmp r0, #0
    // bne _021EC2E4
    // ldr r1, [r4, #0x34]
    // ldr r0, _021EC2E8 ; =0x000088DC
    // ldr r0, [r1, r0]
    // bl ov14_021F33FC
    // add r0, r4, #0
    // bl ov14_021E7264
    // add r0, r4, #0
    // bl ov14_021F3F6C
    // add r0, r4, #0
    // mov r1, #4
    // mov r2, #0x25
    // bl ov14_021F67B0
    // ldr r0, [r4, #0x34]
    // bl ov14_021E8824
    // mov r0, #0x1f
    // str r0, [r4, #0x30]
    // mov r0, #6
    // pop {r4, pc}
    // mov r0, #0x1e
    // pop {r4, pc}
    // _021EC2E8: .word 0x000088DC
    // TODO: decompile
}




void ov14_021EC2EC(void) {
}




void ov14_021EC300(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r1, #1
    // bl ov14_021F40E8
    // add r0, r4, #0
    // add r0, #0x21
    // ldrb r0, [r0]
    // cmp r0, #0x1e
    // bhs _021EC328
    // ldr r0, [r4, #0x34]
    // mov r1, #1
    // bl ov14_021F43F4
    // add r0, r4, #0
    // mov r1, #1
    // mov r2, #0
    // bl ov14_021F3488
    // b _021EC332
    // add r0, r4, #0
    // mov r1, #2
    // mov r2, #0
    // bl ov14_021F3488
    // ldr r1, _021EC340 ; =ov14_021E9450
    // add r0, r4, #0
    // mov r2, #0xe
    // bl ov14_021F0234
    // pop {r4, pc}
    // nop
    // _021EC340: .word ov14_021E9450
    // TODO: decompile
}




void ov14_021EC344(void) {
}




void ov14_021EC354(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // mov r1, #1
    // bl ov14_021E81A8
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E7EC0
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E7EE0
    // ldr r0, [r4, #0x34]
    // bl ov14_021F63F0
    // ldr r0, [r4, #0x34]
    // bl ov14_021F63A8
    // add r0, r4, #0
    // mov r1, #0
    // bl ov14_021F5EC4
    // add r0, r4, #0
    // bl ov14_021F2FDC
    // ldr r1, _021EC3A4 ; =ov14_021E9518
    // add r0, r4, #0
    // mov r2, #0x23
    // bl ov14_021F0234
    // pop {r4, pc}
    // _021EC3A4: .word ov14_021E9518
    // TODO: decompile
}




void ov14_021EC3A8(void) {
    ov14_021E7588(0x1e);
    ov14_021F6AC0(r4, 7, 0);
    ov14_021F6AC0(r4, 5, 0);
}




void ov14_021EC3D8(void) {
    // push {r3, r4, r5, lr}
    // add r4, r0, #0
    // bl ov14_021F6A24
    // add r5, r0, #0
    // mov r0, #0
    // mvn r0, r0
    // cmp r5, r0
    // beq _021EC4D4
    // add r1, r5, #0
    // add r0, r4, #0
    // add r1, #0x1e
    // mov r2, #0xac
    // mov r3, #0
    // bl ov14_021E6070
    // cmp r0, #0
    // beq _021EC44A
    // ldr r0, _021EC6F4 ; =0x000005EB
    // bl PlaySE
    // ldr r2, [r4, #0x34]
    // ldr r1, _021EC6F8 ; =0x000040B8
    // add r0, r2, r1
    // add r1, r1, #4
    // add r1, r2, r1
    // bl System_GetTouchNewCoords
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8544
    // cmp r0, #0
    // bne _021EC42A
    // ldr r1, _021EC6FC ; =ov14_021F7D3C
    // add r0, r4, #0
    // mov r2, #5
    // bl ov14_021F5EE4
    // add r1, r5, #0
    // add r0, r4, #0
    // add r1, #0x1e
    // bl ov14_021E7588
    // ldr r0, [r4, #0x34]
    // mov r1, #9
    // mov r2, #0
    // bl ov14_021F2A18
    // add r5, #0x1e
    // add r0, r4, #0
    // add r1, r5, #0
    // bl ov14_021F0594
    // pop {r3, r4, r5, pc}
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8544
    // cmp r0, #1
    // bne _021EC4B4
    // add r0, r4, #0
    // add r0, #0x21
    // ldrb r0, [r0]
    // sub r0, #0x1e
    // lsl r0, r0, #0x18
    // lsr r5, r0, #0x18
    // ldr r0, [r4, #0x34]
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_GetNextInput
    // add r2, r0, #0
    // ldr r0, [r4, #0x34]
    // add r1, r5, #0
    // bl ov14_021F7AC4
    // ldr r0, [r4, #0x34]
    // add r1, r5, #0
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_SetNextInput
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E84A4
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8328
    // ldr r0, [r4, #0x34]
    // bl ov14_021E884C
    // add r0, r4, #0
    // mov r1, #0
    // bl ov14_021F40E8
    // ldr r1, _021EC700 ; =ov14_021EA180
    // add r0, r4, #0
    // mov r2, #0x4c
    // bl ov14_021F0234
    // pop {r3, r4, r5, pc}
    // ldr r0, [r4, #0x34]
    // lsl r1, r5, #0x18
    // ldr r0, [r0, #0x2c]
    // lsr r1, r1, #0x18
    // bl GridInputHandler_SetNextInput
    // ldr r0, [r4, #0x34]
    // mov r1, #1
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_SetButtonInputMode
    // add r0, r4, #0
    // bl ov14_021E765C
    // mov r0, #0x24
    // pop {r3, r4, r5, pc}
    // add r0, r4, #0
    // bl ov14_021F7388
    // mov r1, #2
    // add r5, r0, #0
    // mvn r1, r1
    // cmp r5, r1
    // bhi _021EC51E
    // bhs _021EC5CA
    // cmp r5, #0xd
    // bhi _021EC512
    // add r0, r5, r5
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _021EC4F6: ; jump table
    // mov r0, #3
    // mvn r0, r0
    // cmp r5, r0
    // bne _021EC51C
    // b _021EC65C
    // b _021EC69A
    // add r0, r1, #1
    // cmp r5, r0
    // bhi _021EC528
    // beq _021EC610
    // b _021EC69A
    // add r0, r1, #2
    // cmp r5, r0
    // bne _021EC530
    // b _021EC6EE
    // b _021EC69A
    // ldr r0, _021EC704 ; =0x000005DD
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #0
    // add r0, #0x2a
    // strb r1, [r0]
    // add r0, r4, #0
    // add r0, #0x2b
    // strb r1, [r0]
    // add r0, r4, #0
    // mov r2, #0x9d
    // bl ov14_021F2490
    // pop {r3, r4, r5, pc}
    // ldr r0, _021EC704 ; =0x000005DD
    // bl PlaySE
    // bl System_GetTouchNew
    // cmp r0, #0
    // bne _021EC566
    // add r0, r4, #0
    // mov r1, #2
    // add r0, #0x2a
    // strb r1, [r0]
    // add r0, r4, #0
    // add r0, #0x21
    // ldrb r1, [r0]
    // add r0, r4, #0
    // add r0, #0x2b
    // strb r1, [r0]
    // add r0, r4, #0
    // mov r1, #3
    // mov r2, #0x9d
    // bl ov14_021F2330
    // pop {r3, r4, r5, pc}
    // ldr r0, _021EC704 ; =0x000005DD
    // bl PlaySE
    // mov r0, #9
    // str r0, [r4, #0x2c]
    // add r0, r4, #0
    // mov r1, #4
    // mov r2, #0x97
    // bl ov14_021F2270
    // pop {r3, r4, r5, pc}
    // ldr r0, _021EC704 ; =0x000005DD
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #5
    // mov r2, #0x98
    // bl ov14_021F2270
    // pop {r3, r4, r5, pc}
    // ldr r0, _021EC704 ; =0x000005DD
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #6
    // mov r2, #0x99
    // bl ov14_021F2270
    // pop {r3, r4, r5, pc}
    // ldr r0, _021EC704 ; =0x000005DD
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #7
    // mov r2, #0x9b
    // bl ov14_021F2270
    // pop {r3, r4, r5, pc}
    // ldr r0, [r4, #0x34]
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_GetNextInput
    // add r1, r0, #0
    // cmp r1, #5
    // bhi _021EC5E2
    // add r0, r4, #0
    // add r1, #0x1e
    // bl ov14_021E7588
    // b _021EC600
    // cmp r1, #8
    // beq _021EC600
    // cmp r1, #9
    // beq _021EC600
    // cmp r1, #0xa
    // beq _021EC600
    // cmp r1, #0xb
    // beq _021EC600
    // cmp r1, #0xc
    // beq _021EC600
    // cmp r1, #0xd
    // beq _021EC600
    // add r0, r4, #0
    // bl ov14_021E765C
    // ldr r0, _021EC708 ; =0x000005DC
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #0x4c
    // bl ov14_021F0244
    // pop {r3, r4, r5, pc}
    // ldr r0, _021EC70C ; =0x00000633
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #0xa
    // mov r2, #0x9f
    // bl ov14_021F2270
    // pop {r3, r4, r5, pc}
    // ldr r0, _021EC708 ; =0x000005DC
    // bl PlaySE
    // add r0, r4, #0
    // add r0, #0x21
    // ldrb r0, [r0]
    // sub r0, #0x1e
    // lsl r0, r0, #0x18
    // lsr r5, r0, #0x18
    // ldr r0, [r4, #0x34]
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_GetNextInput
    // add r2, r0, #0
    // ldr r0, [r4, #0x34]
    // add r1, r5, #0
    // bl ov14_021F7AC4
    // ldr r0, [r4, #0x34]
    // add r1, r5, #0
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_SetNextInput
    // add r0, r4, #0
    // mov r1, #0xb
    // mov r2, #0x9e
    // bl ov14_021F2270
    // pop {r3, r4, r5, pc}
    // ldr r0, [r4, #0x34]
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_GetNextInput
    // add r1, r0, #0
    // cmp r1, #5
    // bhi _021EC674
    // add r0, r4, #0
    // add r1, #0x1e
    // bl ov14_021E7588
    // b _021EC692
    // cmp r1, #8
    // beq _021EC692
    // cmp r1, #9
    // beq _021EC692
    // cmp r1, #0xa
    // beq _021EC692
    // cmp r1, #0xb
    // beq _021EC692
    // cmp r1, #0xc
    // beq _021EC692
    // cmp r1, #0xd
    // beq _021EC692
    // add r0, r4, #0
    // bl ov14_021E765C
    // ldr r0, _021EC708 ; =0x000005DC
    // bl PlaySE
    // b _021EC6EE
    // add r1, r5, #0
    // add r0, r4, #0
    // add r1, #0x1e
    // mov r2, #0xac
    // mov r3, #0
    // bl ov14_021E6070
    // cmp r0, #0
    // beq _021EC6EE
    // ldr r0, _021EC704 ; =0x000005DD
    // bl PlaySE
    // ldr r1, _021EC6FC ; =ov14_021F7D3C
    // add r0, r4, #0
    // mov r2, #5
    // bl ov14_021F5EE4
    // add r1, r5, #0
    // add r0, r4, #0
    // add r1, #0x1e
    // bl ov14_021E7588
    // ldr r0, [r4, #0x34]
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_GetNextInput
    // add r2, r0, #0
    // ldr r0, [r4, #0x34]
    // mov r1, #8
    // bl ov14_021F7AC4
    // ldr r0, [r4, #0x34]
    // mov r1, #8
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_SetNextInput
    // add r5, #0x1e
    // add r0, r4, #0
    // add r1, r5, #0
    // bl ov14_021F07F0
    // pop {r3, r4, r5, pc}
    // mov r0, #0x24
    // pop {r3, r4, r5, pc}
    // nop
    // _021EC6F4: .word 0x000005EB
    // _021EC6F8: .word 0x000040B8
    // _021EC6FC: .word ov14_021F7D3C
    // _021EC700: .word ov14_021EA180
    // _021EC704: .word 0x000005DD
    // _021EC708: .word 0x000005DC
    // _021EC70C: .word 0x00000633
    // TODO: decompile
}




void ov14_021EC710(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E7F4C
    // ldr r1, _021EC72C ; =ov14_021E9518
    // add r0, r4, #0
    // mov r2, #0x26
    // bl ov14_021F0234
    // pop {r4, pc}
    // _021EC72C: .word ov14_021E9518
    // TODO: decompile
}




void ov14_021EC730(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl ov14_021E7E98
    // ldr r0, [r4, #0x34]
    // mov r1, #1
    // bl ov14_021F43F4
    // add r0, r4, #0
    // mov r1, #0
    // bl ov14_021F5C84
    // add r0, r4, #0
    // mov r1, #0
    // bl ov14_021F5E94
    // add r0, r4, #0
    // add r0, #0x24
    // ldrb r0, [r0]
    // cmp r0, #0
    // bne _021EC762
    // add r0, r4, #0
    // mov r1, #0
    // bl ov14_021F5EB4
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8248
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E82A8
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8328
    // ldr r0, [r4]
    // ldr r0, [r0, #8]
    // cmp r0, #3
    // bne _021EC7AE
    // add r0, r4, #0
    // mov r1, #0x81
    // mov r2, #1
    // bl ov14_021F3488
    // add r0, r4, #0
    // mov r1, #6
    // mov r2, #0x21
    // bl ov14_021F6AC0
    // ldr r1, _021EC7D0 ; =ov14_021E94BC
    // add r0, r4, #0
    // mov r2, #0x75
    // bl ov14_021F0234
    // pop {r4, pc}
    // add r0, r4, #0
    // mov r1, #1
    // mov r2, #0
    // bl ov14_021F3488
    // add r0, r4, #0
    // mov r1, #3
    // mov r2, #0x21
    // bl ov14_021F6AC0
    // ldr r1, _021EC7D0 ; =ov14_021E94BC
    // add r0, r4, #0
    // mov r2, #0xc
    // bl ov14_021F0234
    // pop {r4, pc}
    // nop
    // _021EC7D0: .word ov14_021E94BC
    // TODO: decompile
}




void ov14_021EC7D4(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // ldr r0, [r5, #0x34]
    // ldr r4, [r0, #0xc]
    // add r1, r4, #0
    // add r1, #0xe4
    // ldr r6, [r1]
    // mov r1, #0x28
    // bl ov14_021F6654
    // ldr r0, _021EC850 ; =0x000005EA
    // bl PlaySE
    // add r0, r5, #0
    // bl ov14_021E637C
    // add r1, r4, #0
    // add r1, #0xe4
    // add r4, #0xe8
    // ldr r1, [r1]
    // ldr r2, [r4]
    // add r0, r5, #0
    // bl ov14_021E6548
    // add r0, r5, #0
    // bl ov14_021F08F0
    // add r0, r5, #0
    // add r0, #0x21
    // ldrb r0, [r0]
    // cmp r0, #0xff
    // ldr r0, [r5, #0x34]
    // bne _021EC838
    // add r1, r6, #0
    // sub r1, #0x1e
    // lsl r1, r1, #0x18
    // ldr r0, [r0, #0x2c]
    // lsr r1, r1, #0x18
    // bl GridInputHandler_SetNextInput
    // ldr r0, [r5, #0x34]
    // mov r1, #1
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_SetButtonInputMode
    // add r0, r5, #0
    // add r1, r6, #0
    // bl ov14_021E7588
    // b _021EC84A
    // ldr r0, [r0, #0x2c]
    // mov r1, #8
    // bl GridInputHandler_SetNextInput
    // ldr r0, [r5, #0x34]
    // mov r1, #1
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_SetButtonInputMode
    // mov r0, #0x24
    // pop {r4, r5, r6, pc}
    // nop
    // _021EC850: .word 0x000005EA
    // TODO: decompile
}




void ov14_021EC854(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // add r0, #0x25
    // ldrb r0, [r0]
    // mov r1, #6
    // bl _s32_div_f
    // ldr r2, [r4, #0x34]
    // ldr r0, _021EC8CC ; =0x0000043C
    // add r1, #0x25
    // str r1, [r2, r0]
    // add r0, r4, #0
    // add r0, #0x2a
    // ldrb r0, [r0]
    // cmp r0, #0
    // beq _021EC8A2
    // add r2, r4, #0
    // add r2, #0x2b
    // ldrb r2, [r2]
    // add r0, r4, #0
    // mov r1, #4
    // bl ov14_021F6AC0
    // add r0, r4, #0
    // add r0, #0x2b
    // ldrb r1, [r0]
    // add r0, r4, #0
    // add r0, #0x21
    // strb r1, [r0]
    // add r1, r4, #0
    // add r1, #0x2b
    // ldrb r1, [r1]
    // add r0, r4, #0
    // bl ov14_021F1580
    // mov r1, #0
    // add r4, #0x2a
    // strb r1, [r4]
    // pop {r4, pc}
    // add r2, r4, #0
    // add r2, #0x2b
    // ldrb r2, [r2]
    // add r0, r4, #0
    // mov r1, #4
    // bl ov14_021F6AC0
    // add r1, r4, #0
    // add r1, #0x2b
    // ldrb r1, [r1]
    // add r0, r4, #0
    // bl ov14_021E7588
    // ldr r0, [r4]
    // ldr r0, [r0, #8]
    // cmp r0, #3
    // bne _021EC8C8
    // mov r0, #0x82
    // pop {r4, pc}
    // mov r0, #0x29
    // pop {r4, pc}
    // _021EC8CC: .word 0x0000043C
    // TODO: decompile
}




void ov14_021EC8D0(void) {
    // push {r3, r4, r5, lr}
    // add r4, r0, #0
    // bl ov14_021F6A34
    // add r5, r0, #0
    // mov r0, #0
    // mvn r0, r0
    // cmp r5, r0
    // beq _021EC97E
    // add r1, r5, #0
    // add r0, r4, #0
    // add r1, #0x1e
    // mov r2, #0xac
    // mov r3, #0
    // bl ov14_021E6070
    // cmp r0, #0
    // beq _021EC928
    // ldr r0, _021ECC30 ; =0x000005EB
    // bl PlaySE
    // ldr r2, [r4, #0x34]
    // ldr r1, _021ECC34 ; =0x000040B8
    // add r0, r2, r1
    // add r1, r1, #4
    // add r1, r2, r1
    // bl System_GetTouchNewCoords
    // add r1, r5, #0
    // add r0, r4, #0
    // add r1, #0x1e
    // bl ov14_021E7588
    // ldr r0, [r4, #0x34]
    // mov r1, #9
    // mov r2, #0
    // bl ov14_021F2A18
    // add r5, #0x1e
    // add r0, r4, #0
    // add r1, r5, #0
    // bl ov14_021F083C
    // pop {r3, r4, r5, pc}
    // add r0, r4, #0
    // bl ov14_021E765C
    // ldr r0, [r4, #0x34]
    // add r5, #0x1e
    // lsl r1, r5, #0x18
    // ldr r0, [r0, #0x2c]
    // lsr r1, r1, #0x18
    // bl GridInputHandler_SetNextInput
    // ldr r0, [r4, #0x34]
    // mov r1, #1
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_SetButtonInputMode
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E85E4
    // cmp r0, #1
    // bne _021EC960
    // add r0, r4, #0
    // mov r1, #0x29
    // bl ov14_021F0EE8
    // pop {r3, r4, r5, pc}
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8648
    // cmp r0, #1
    // bne _021EC97A
    // add r0, r4, #0
    // mov r1, #0x29
    // bl ov14_021F0D34
    // pop {r3, r4, r5, pc}
    // mov r0, #0x29
    // pop {r3, r4, r5, pc}
    // bl ov14_021F6A14
    // add r5, r0, #0
    // mov r0, #0
    // mvn r0, r0
    // cmp r5, r0
    // beq _021ECA20
    // add r0, r4, #0
    // add r1, r5, #0
    // mov r2, #0xac
    // mov r3, #0
    // bl ov14_021E6070
    // cmp r0, #0
    // beq _021EC9CC
    // ldr r0, _021ECC30 ; =0x000005EB
    // bl PlaySE
    // ldr r2, [r4, #0x34]
    // ldr r1, _021ECC34 ; =0x000040B8
    // add r0, r2, r1
    // add r1, r1, #4
    // add r1, r2, r1
    // bl System_GetTouchNewCoords
    // add r0, r4, #0
    // add r1, r5, #0
    // bl ov14_021E7588
    // ldr r0, [r4, #0x34]
    // mov r1, #9
    // mov r2, #0
    // bl ov14_021F2A18
    // add r0, r4, #0
    // add r1, r5, #0
    // bl ov14_021F083C
    // pop {r3, r4, r5, pc}
    // add r0, r4, #0
    // bl ov14_021E765C
    // ldr r0, [r4, #0x34]
    // lsl r1, r5, #0x18
    // ldr r0, [r0, #0x2c]
    // lsr r1, r1, #0x18
    // bl GridInputHandler_SetNextInput
    // ldr r0, [r4, #0x34]
    // mov r1, #1
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_SetButtonInputMode
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E85E4
    // cmp r0, #1
    // bne _021ECA02
    // add r0, r4, #0
    // mov r1, #0x29
    // bl ov14_021F0EE8
    // pop {r3, r4, r5, pc}
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8648
    // cmp r0, #1
    // bne _021ECA1C
    // add r0, r4, #0
    // mov r1, #0x29
    // bl ov14_021F0D34
    // pop {r3, r4, r5, pc}
    // mov r0, #0x29
    // pop {r3, r4, r5, pc}
    // add r0, r4, #0
    // bl ov14_021F7B7C
    // cmp r0, #1
    // bne _021ECA68
    // ldr r0, [r4, #0x34]
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_GetNextInput
    // add r5, r0, #0
    // add r0, r4, #0
    // add r1, r5, #0
    // mov r2, #0xac
    // mov r3, #0
    // bl ov14_021E6070
    // cmp r0, #0
    // beq _021ECA64
    // ldr r0, _021ECC38 ; =0x000005DD
    // bl PlaySE
    // add r0, r4, #0
    // add r0, #0x21
    // strb r5, [r0]
    // add r0, r4, #0
    // mov r1, #1
    // add r0, #0x26
    // strb r1, [r0]
    // add r0, r4, #0
    // mov r1, #0xf
    // mov r2, #0x97
    // bl ov14_021F2330
    // pop {r3, r4, r5, pc}
    // mov r0, #0x29
    // pop {r3, r4, r5, pc}
    // add r0, r4, #0
    // bl ov14_021F70C0
    // mov r1, #2
    // add r5, r0, #0
    // mvn r1, r1
    // cmp r5, r1
    // bhi _021ECAAE
    // blo _021ECA7C
    // b _021ECC6A
    // cmp r5, #0x2d
    // bhi _021ECAA4
    // sub r0, #0x24
    // bmi _021ECAAC
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _021ECA90: ; jump table
    // mov r0, #3
    // mvn r0, r0
    // cmp r5, r0
    // beq _021ECAC0
    // b _021ECD70
    // add r0, r1, #1
    // cmp r5, r0
    // bhi _021ECABA
    // bne _021ECAB8
    // b _021ECD1A
    // b _021ECD70
    // add r0, r1, #2
    // cmp r5, r0
    // bne _021ECAC2
    // b _021ECD98
    // b _021ECD70
    // ldr r0, _021ECC38 ; =0x000005DD
    // bl PlaySE
    // add r0, r4, #0
    // bl ov14_021E76B8
    // add r0, r4, #0
    // mov r1, #0
    // bl ov14_021F0D58
    // pop {r3, r4, r5, pc}
    // ldr r0, _021ECC38 ; =0x000005DD
    // bl PlaySE
    // add r0, r4, #0
    // bl ov14_021E76B8
    // add r0, r4, #0
    // mov r1, #1
    // bl ov14_021F0D58
    // pop {r3, r4, r5, pc}
    // ldr r0, _021ECC38 ; =0x000005DD
    // bl PlaySE
    // add r0, r4, #0
    // bl ov14_021E76B8
    // add r0, r4, #0
    // mov r1, #2
    // bl ov14_021F0D58
    // pop {r3, r4, r5, pc}
    // ldr r0, _021ECC38 ; =0x000005DD
    // bl PlaySE
    // add r0, r4, #0
    // bl ov14_021E76B8
    // add r0, r4, #0
    // mov r1, #3
    // bl ov14_021F0D58
    // pop {r3, r4, r5, pc}
    // ldr r0, _021ECC38 ; =0x000005DD
    // bl PlaySE
    // add r0, r4, #0
    // bl ov14_021E76B8
    // add r0, r4, #0
    // mov r1, #4
    // bl ov14_021F0D58
    // pop {r3, r4, r5, pc}
    // ldr r0, _021ECC38 ; =0x000005DD
    // bl PlaySE
    // add r0, r4, #0
    // bl ov14_021E76B8
    // add r0, r4, #0
    // mov r1, #5
    // bl ov14_021F0D58
    // pop {r3, r4, r5, pc}
    // ldr r0, _021ECC3C ; =0x000005DC
    // bl PlaySE
    // add r0, r4, #0
    // bl ov14_021E76B8
    // mov r1, #0
    // add r0, r4, #0
    // mvn r1, r1
    // bl ov14_021F1004
    // add r0, r4, #0
    // add r0, #0x25
    // ldrb r0, [r0]
    // mov r1, #6
    // bl _s32_div_f
    // ldr r0, [r4, #0x34]
    // add r1, #0x25
    // lsl r1, r1, #0x18
    // ldr r0, [r0, #0x2c]
    // lsr r1, r1, #0x18
    // bl GridInputHandler_SetNextInput
    // ldr r0, [r4, #0x34]
    // mov r1, #1
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_SetButtonInputMode
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E85E4
    // cmp r0, #1
    // bne _021ECB9C
    // add r0, r4, #0
    // mov r1, #0x29
    // bl ov14_021F0EE8
    // pop {r3, r4, r5, pc}
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8648
    // cmp r0, #1
    // bne _021ECBB6
    // add r0, r4, #0
    // mov r1, #0x29
    // bl ov14_021F0D34
    // pop {r3, r4, r5, pc}
    // mov r0, #0x29
    // pop {r3, r4, r5, pc}
    // ldr r0, _021ECC3C ; =0x000005DC
    // bl PlaySE
    // add r0, r4, #0
    // bl ov14_021E76B8
    // add r0, r4, #0
    // mov r1, #1
    // bl ov14_021F1004
    // add r0, r4, #0
    // add r0, #0x25
    // ldrb r0, [r0]
    // mov r1, #6
    // bl _s32_div_f
    // ldr r0, [r4, #0x34]
    // add r1, #0x25
    // lsl r1, r1, #0x18
    // ldr r0, [r0, #0x2c]
    // lsr r1, r1, #0x18
    // bl GridInputHandler_SetNextInput
    // ldr r0, [r4, #0x34]
    // mov r1, #1
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_SetButtonInputMode
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E85E4
    // cmp r0, #1
    // bne _021ECC0C
    // add r0, r4, #0
    // mov r1, #0x29
    // bl ov14_021F0EE8
    // pop {r3, r4, r5, pc}
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8648
    // cmp r0, #1
    // bne _021ECC26
    // add r0, r4, #0
    // mov r1, #0x29
    // bl ov14_021F0D34
    // pop {r3, r4, r5, pc}
    // mov r0, #0x29
    // pop {r3, r4, r5, pc}
    // ldr r0, _021ECC3C ; =0x000005DC
    // b _021ECC40
    // nop
    // _021ECC30: .word 0x000005EB
    // _021ECC34: .word 0x000040B8
    // _021ECC38: .word 0x000005DD
    // _021ECC3C: .word 0x000005DC
    // bl PlaySE
    // add r0, r4, #0
    // add r0, #0x25
    // ldrb r0, [r0]
    // mov r1, #6
    // bl _s32_div_f
    // ldr r0, [r4, #0x34]
    // add r1, #0x25
    // lsl r1, r1, #0x18
    // ldr r0, [r0, #0x2c]
    // lsr r1, r1, #0x18
    // bl GridInputHandler_SetNextInput
    // add r0, r4, #0
    // mov r1, #0xe
    // mov r2, #0xa0
    // bl ov14_021F2270
    // pop {r3, r4, r5, pc}
    // ldr r0, [r4, #0x34]
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_GetNextInput
    // add r1, r0, #0
    // cmp r1, #0x25
    // bhs _021ECCC4
    // add r0, r4, #0
    // bl ov14_021E7588
    // cmp r0, #1
    // ldr r1, [r4, #0x34]
    // bne _021ECCA8
    // mov r0, #0x2f
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8648
    // cmp r0, #0
    // bne _021ECCE6
    // add r0, r4, #0
    // mov r1, #0
    // bl ov14_021F6408
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8620
    // b _021ECCE6
    // mov r0, #0x2f
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8648
    // cmp r0, #1
    // bne _021ECCE6
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8634
    // b _021ECCE6
    // add r0, r4, #0
    // bl ov14_021E765C
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8648
    // cmp r0, #1
    // bne _021ECCE6
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8634
    // ldr r0, _021ECD9C ; =0x000005DC
    // bl PlaySE
    // ldr r0, [r4, #0x34]
    // ldr r0, [r0, #8]
    // cmp r0, #0
    // beq _021ECD98
    // add r0, r4, #0
    // mov r1, #0x4b
    // bl ov14_021F0244
    // pop {r3, r4, r5, pc}
    // ldr r0, _021ECDA0 ; =0x00000633
    // bl PlaySE
    // ldr r0, [r4, #0x34]
    // mov r1, #9
    // mov r2, #8
    // bl ov14_021F29E4
    // add r0, r4, #0
    // mov r1, #1
    // mov r2, #0xa1
    // bl ov14_021F2490
    // pop {r3, r4, r5, pc}
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E85E4
    // cmp r0, #0
    // bne _021ECD3C
    // ldr r0, _021ECDA0 ; =0x00000633
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #1
    // mov r2, #0xa1
    // bl ov14_021F2490
    // pop {r3, r4, r5, pc}
    // ldr r0, _021ECD9C ; =0x000005DC
    // bl PlaySE
    // add r0, r4, #0
    // add r0, #0x25
    // ldrb r0, [r0]
    // mov r1, #6
    // bl _s32_div_f
    // ldr r0, [r4, #0x34]
    // add r1, #0x25
    // lsl r1, r1, #0x18
    // ldr r0, [r0, #0x2c]
    // lsr r1, r1, #0x18
    // bl GridInputHandler_SetNextInput
    // ldr r0, [r4, #0x34]
    // mov r1, #1
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_SetButtonInputMode
    // add r0, r4, #0
    // mov r1, #0x29
    // bl ov14_021F0EE8
    // pop {r3, r4, r5, pc}
    // add r0, r4, #0
    // add r1, r5, #0
    // mov r2, #0xac
    // mov r3, #0
    // bl ov14_021E6070
    // cmp r0, #0
    // beq _021ECD98
    // ldr r0, _021ECDA4 ; =0x000005EB
    // bl PlaySE
    // add r0, r4, #0
    // add r1, r5, #0
    // bl ov14_021E7588
    // add r0, r4, #0
    // add r1, r5, #0
    // bl ov14_021F1580
    // pop {r3, r4, r5, pc}
    // mov r0, #0x29
    // pop {r3, r4, r5, pc}
    // _021ECD9C: .word 0x000005DC
    // _021ECDA0: .word 0x00000633
    // _021ECDA4: .word 0x000005EB
    // TODO: decompile
}




void ov14_021ECDA8(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // ldr r0, [r5, #0x34]
    // ldr r7, [r0, #0xc]
    // add r0, r7, #0
    // add r0, #0xe8
    // ldr r6, [r0]
    // add r0, r7, #0
    // add r0, #0xec
    // ldr r4, [r0]
    // ldr r0, _021ECF50 ; =0x000005EA
    // bl PlaySE
    // add r0, r5, #0
    // bl ov14_021E637C
    // mov r0, #0x80
    // and r0, r6
    // str r0, [sp]
    // bne _021ECDE0
    // add r1, r7, #0
    // add r1, #0xe4
    // add r7, #0xe8
    // ldr r1, [r1]
    // ldr r2, [r7]
    // add r0, r5, #0
    // bl ov14_021E6548
    // add r0, r5, #0
    // bl ov14_021F08F0
    // add r1, r5, #0
    // ldr r0, [r5, #0x34]
    // add r1, #0x21
    // ldrb r1, [r1]
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_SetNextInput
    // add r0, r5, #0
    // add r0, #0x24
    // ldrb r0, [r0]
    // cmp r0, #0
    // beq _021ECE04
    // add r0, r5, #0
    // bl ov14_021F57B8
    // add r1, r5, #0
    // add r1, #0x21
    // ldrb r1, [r1]
    // add r0, r5, #0
    // mov r2, #0xac
    // mov r3, #0
    // bl ov14_021E6070
    // cmp r0, #0
    // bne _021ECE20
    // add r0, r5, #0
    // bl ov14_021E765C
    // b _021ECF40
    // cmp r6, #0xff
    // beq _021ECE3A
    // ldr r0, [sp]
    // cmp r0, #0
    // bne _021ECE2C
    // b _021ECF40
    // add r1, r5, #0
    // add r1, #0x21
    // ldrb r1, [r1]
    // add r0, r5, #0
    // bl ov14_021E7588
    // b _021ECF40
    // add r0, r5, #0
    // add r0, #0x21
    // ldrb r6, [r0]
    // cmp r6, #0x1e
    // blo _021ECECE
    // cmp r4, r6
    // beq _021ECECE
    // sub r6, #0x1e
    // ldr r0, [r5, #8]
    // add r1, r6, #0
    // bl Party_GetMonByIndex
    // mov r1, #6
    // mov r2, #0
    // add r7, r0, #0
    // bl GetMonData
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // bl ItemIdIsMail
    // cmp r0, #1
    // bne _021ECE82
    // ldr r0, _021ECF54 ; =0x000005F3
    // bl PlaySE
    // add r0, r5, #0
    // mov r1, #0
    // mov r2, #6
    // mov r3, #0x25
    // bl ov14_021F685C
    // mov r0, #0x2c
    // str r0, [r5, #0x30]
    // mov r0, #6
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r7, #0
    // mov r1, #0xa2
    // mov r2, #0
    // bl GetMonData
    // cmp r0, #0
    // beq _021ECEAA
    // ldr r0, _021ECF54 ; =0x000005F3
    // bl PlaySE
    // add r0, r5, #0
    // mov r1, #0
    // mov r2, #5
    // mov r3, #0x25
    // bl ov14_021F685C
    // mov r0, #0x2c
    // str r0, [r5, #0x30]
    // mov r0, #6
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r5, #0
    // add r1, r6, #0
    // bl ov14_021E6480
    // cmp r0, #0
    // bne _021ECECE
    // ldr r0, _021ECF54 ; =0x000005F3
    // bl PlaySE
    // add r0, r5, #0
    // mov r1, #6
    // mov r2, #0x25
    // bl ov14_021F67B0
    // mov r0, #0x2c
    // str r0, [r5, #0x30]
    // mov r0, #6
    // pop {r3, r4, r5, r6, r7, pc}
    // cmp r4, #0xff
    // beq _021ECF40
    // mov r0, #0x80
    // tst r0, r4
    // beq _021ECF40
    // add r0, r5, #0
    // add r0, #0x25
    // ldrb r0, [r0]
    // mov r1, #6
    // bl _s32_div_f
    // mov r2, #0x80
    // add r3, r4, #0
    // eor r3, r2
    // mov r2, #6
    // mul r2, r0
    // ldrb r1, [r5, #0x1f]
    // add r0, r3, r2
    // cmp r1, r0
    // beq _021ECF40
    // add r0, r5, #0
    // add r0, #0x21
    // ldrb r1, [r0]
    // cmp r1, #0x1e
    // bhs _021ECF0E
    // add r0, r5, #0
    // mov r1, #0
    // mov r2, #4
    // mov r3, #0x25
    // bl ov14_021F685C
    // b _021ECF32
    // add r0, r5, #0
    // sub r1, #0x1e
    // bl ov14_021E6480
    // cmp r0, #1
    // bne _021ECF28
    // add r0, r5, #0
    // mov r1, #0
    // mov r2, #4
    // mov r3, #0x25
    // bl ov14_021F685C
    // b _021ECF32
    // add r0, r5, #0
    // mov r1, #6
    // mov r2, #0x25
    // bl ov14_021F67B0
    // ldr r0, _021ECF54 ; =0x000005F3
    // bl PlaySE
    // mov r0, #0x2c
    // str r0, [r5, #0x30]
    // mov r0, #6
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [r5, #0x34]
    // mov r1, #1
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_SetButtonInputMode
    // mov r0, #0x29
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021ECF50: .word 0x000005EA
    // _021ECF54: .word 0x000005F3
    // TODO: decompile
}




void ov14_021ECF58(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // ldr r0, [r5, #0x34]
    // ldr r4, [r0, #0xc]
    // add r0, r4, #0
    // add r0, #0xe8
    // ldr r6, [r0]
    // ldr r0, _021ED1A0 ; =0x000005EA
    // bl PlaySE
    // add r0, r5, #0
    // bl ov14_021E637C
    // mov r0, #0x80
    // tst r0, r6
    // bne _021ECF88
    // add r1, r4, #0
    // add r1, #0xe4
    // add r4, #0xe8
    // ldr r1, [r1]
    // ldr r2, [r4]
    // add r0, r5, #0
    // bl ov14_021E6548
    // add r0, r5, #0
    // bl ov14_021F08F0
    // add r0, r5, #0
    // add r0, #0x24
    // ldrb r0, [r0]
    // cmp r0, #0
    // beq _021ECF9E
    // add r0, r5, #0
    // bl ov14_021F57B8
    // ldr r0, [r5, #0x34]
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_GetNextInput
    // add r4, r0, #0
    // ldr r1, [r5, #0x34]
    // ldr r0, _021ED1A4 ; =0x000088CC
    // ldr r0, [r1, r0]
    // cmp r0, #0
    // bne _021ECFC0
    // cmp r6, #0xff
    // bne _021ECFC0
    // add r0, r5, #0
    // add r0, #0x21
    // ldrb r6, [r0]
    // cmp r4, r6
    // bne _021ECFC2
    // b _021ED15C
    // cmp r6, #0x1e
    // blo _021ED0B2
    // sub r6, #0x1e
    // ldr r0, [r5, #8]
    // add r1, r6, #0
    // bl Party_GetMonByIndex
    // mov r1, #6
    // mov r2, #0
    // add r7, r0, #0
    // bl GetMonData
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // bl ItemIdIsMail
    // cmp r0, #1
    // bne _021ED022
    // ldr r0, _021ED1A8 ; =0x000005F3
    // bl PlaySE
    // add r1, r5, #0
    // ldr r0, [r5, #0x34]
    // add r1, #0x21
    // ldrb r1, [r1]
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_SetNextInput
    // ldr r0, [r5, #0x34]
    // mov r1, #0
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_SetButtonInputMode
    // ldr r0, [r5, #0x34]
    // mov r1, #9
    // mov r2, #8
    // bl ov14_021F29E4
    // add r0, r5, #0
    // mov r1, #0
    // mov r2, #6
    // mov r3, #0x25
    // bl ov14_021F685C
    // mov r0, #0x2c
    // str r0, [r5, #0x30]
    // mov r0, #6
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r7, #0
    // mov r1, #0xa2
    // mov r2, #0
    // bl GetMonData
    // cmp r0, #0
    // beq _021ED06C
    // ldr r0, _021ED1A8 ; =0x000005F3
    // bl PlaySE
    // add r1, r5, #0
    // ldr r0, [r5, #0x34]
    // add r1, #0x21
    // ldrb r1, [r1]
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_SetNextInput
    // ldr r0, [r5, #0x34]
    // mov r1, #0
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_SetButtonInputMode
    // ldr r0, [r5, #0x34]
    // mov r1, #9
    // mov r2, #8
    // bl ov14_021F29E4
    // add r0, r5, #0
    // mov r1, #0
    // mov r2, #5
    // mov r3, #0x25
    // bl ov14_021F685C
    // mov r0, #0x2c
    // str r0, [r5, #0x30]
    // mov r0, #6
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r5, #0
    // add r1, r6, #0
    // bl ov14_021E6480
    // cmp r0, #0
    // bne _021ED0B2
    // ldr r0, _021ED1A8 ; =0x000005F3
    // bl PlaySE
    // add r1, r5, #0
    // ldr r0, [r5, #0x34]
    // add r1, #0x21
    // ldrb r1, [r1]
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_SetNextInput
    // ldr r0, [r5, #0x34]
    // mov r1, #0
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_SetButtonInputMode
    // ldr r0, [r5, #0x34]
    // mov r1, #9
    // mov r2, #8
    // bl ov14_021F29E4
    // add r0, r5, #0
    // mov r1, #6
    // mov r2, #0x25
    // bl ov14_021F67B0
    // mov r0, #0x2c
    // str r0, [r5, #0x30]
    // mov r0, #6
    // pop {r3, r4, r5, r6, r7, pc}
    // cmp r4, #0x25
    // blo _021ED142
    // cmp r4, #0x2a
    // bhi _021ED142
    // add r0, r5, #0
    // add r0, #0x25
    // ldrb r0, [r0]
    // mov r1, #6
    // bl _s32_div_f
    // add r3, r4, #0
    // mov r2, #6
    // ldrb r1, [r5, #0x1f]
    // sub r3, #0x25
    // mul r2, r0
    // add r0, r3, r2
    // cmp r1, r0
    // beq _021ED142
    // add r0, r5, #0
    // add r0, #0x21
    // ldrb r1, [r0]
    // cmp r1, #0x1e
    // bhs _021ED0EE
    // add r0, r5, #0
    // mov r1, #0
    // mov r2, #4
    // mov r3, #0x25
    // bl ov14_021F685C
    // b _021ED112
    // add r0, r5, #0
    // sub r1, #0x1e
    // bl ov14_021E6480
    // cmp r0, #1
    // bne _021ED108
    // add r0, r5, #0
    // mov r1, #0
    // mov r2, #4
    // mov r3, #0x25
    // bl ov14_021F685C
    // b _021ED112
    // add r0, r5, #0
    // mov r1, #6
    // mov r2, #0x25
    // bl ov14_021F67B0
    // ldr r0, _021ED1A8 ; =0x000005F3
    // bl PlaySE
    // add r1, r5, #0
    // ldr r0, [r5, #0x34]
    // add r1, #0x21
    // ldrb r1, [r1]
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_SetNextInput
    // ldr r0, [r5, #0x34]
    // mov r1, #0
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_SetButtonInputMode
    // ldr r0, [r5, #0x34]
    // mov r1, #9
    // mov r2, #8
    // bl ov14_021F29E4
    // mov r0, #0x2c
    // str r0, [r5, #0x30]
    // mov r0, #6
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r5, #0
    // add r0, #0x2a
    // ldrb r0, [r0]
    // cmp r0, #0
    // bne _021ED15C
    // ldr r0, [r5, #0x34]
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_GetNextInput
    // add r1, r0, #0
    // add r0, r5, #0
    // bl ov14_021E7588
    // add r0, r5, #0
    // add r0, #0x2a
    // ldrb r0, [r0]
    // cmp r0, #0
    // beq _021ED17E
    // ldr r0, [r5, #0x34]
    // mov r1, #9
    // mov r2, #8
    // bl ov14_021F29E4
    // add r0, r5, #0
    // bl ov14_021E76B8
    // add r0, r5, #0
    // bl ov14_021F0CD8
    // pop {r3, r4, r5, r6, r7, pc}
    // cmp r4, #0x25
    // blo _021ED192
    // cmp r4, #0x2a
    // bhi _021ED192
    // ldr r0, [r5, #0x34]
    // mov r1, #9
    // mov r2, #0xe
    // bl ov14_021F29E4
    // b _021ED19C
    // ldr r0, [r5, #0x34]
    // mov r1, #9
    // mov r2, #8
    // bl ov14_021F29E4
    // mov r0, #0x29
    // pop {r3, r4, r5, r6, r7, pc}
    // _021ED1A0: .word 0x000005EA
    // _021ED1A4: .word 0x000088CC
    // _021ED1A8: .word 0x000005F3
    // TODO: decompile
}




void ov14_021ED1AC(void) {
    ov14_021F6688(*((u32*)(r0 + 0x34)), 0x25);
    // add r0, #0x2a
    // ldrb r0, [r0]
    ov14_021F29E4(*((u32*)(r4 + 0x34)), 9, 8);
    ov14_021E76B8(r4);
    ov14_021F0CD8(r4);
    GridInputHandler_SetButtonInputMode(*((u32*)(r0 + 0x2c)), 1);
}




void ov14_021ED1E8(void) {
    ov14_021F63B8(*((u32*)(r0 + 0x34)));
    ov14_021F3488(r4, 0x81, 1);
    ov14_021F3488(r4, 1, 0);
    // add r1, #0x2b
    // ldrb r1, [r1]
    ov14_021E6070(r4, r4, 0xac, 0);
    ov14_021F6408(r4, 0);
    // ldr r0, [r1, r0]
    ov14_021E8620((0x2f << 4), *((u32*)(r4 + 0x34)));
    // add r0, #0x24
    // strb r1, [r0]
    // add r0, #0x29
    // strb r1, [r0]
    // add r0, #0x25
    // strb r1, [r0]
    ov14_021F1058(r4, 0x28);
}




void ov14_021ED258(void) {
    ov14_021F63A8(*((u32*)(r0 + 0x34)));
    ov14_021F6AC0(r4, 7, 0);
    GridInputHandler_GetNextInput(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)));
    // add r1, #0x1e
    ov14_021E7588(r4, r0);
    // add r0, #0x2a
    // ldrb r0, [r0]
    // add r2, #0x2b
    // ldrb r2, [r2]
    // sub r2, #0x1e
    ov14_021F6AC0(r4, 5, r4);
    ov14_021F6AC0(r4, 5, 0);
    GridInputHandler_GetNextInput(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)));
    // add r1, #0x1e
    ov14_021E7588(r4, r0);
}




void ov14_021ED2C8(void) {
    // ldrb r2, [r0, #0x1f]
    // add r1, r0, #0
    // add r1, #0x25
    // strb r2, [r1]
    // ldr r3, _021ED2D8 ; =ov14_021F1058
    // mov r1, #0x30
    // bx r3
    // nop
    // _021ED2D8: .word ov14_021F1058
    // TODO: decompile
}




void ov14_021ED2DC(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // mov r1, #1
    // bl ov14_021E81A8
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E7ED0
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E7EE0
    // ldr r0, [r4, #0x34]
    // bl ov14_021F63F0
    // ldr r0, [r4, #0x34]
    // bl ov14_021F63B8
    // add r0, r4, #0
    // bl ov14_021F3044
    // add r0, r4, #0
    // mov r1, #0
    // bl ov14_021F6408
    // add r1, r4, #0
    // add r1, #0x2b
    // ldrb r1, [r1]
    // add r0, r4, #0
    // mov r2, #0xac
    // mov r3, #0
    // bl ov14_021E6070
    // cmp r0, #0
    // beq _021ED340
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8620
    // ldr r1, _021ED34C ; =ov14_021E9518
    // add r0, r4, #0
    // mov r2, #0x28
    // bl ov14_021F0234
    // pop {r4, pc}
    // _021ED34C: .word ov14_021E9518
    // TODO: decompile
}




void ov14_021ED350(void) {
}




void ov14_021ED35C(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // add r1, r4, #0
    // add r1, #0x29
    // ldrb r1, [r1]
    // cmp r1, #1
    // bne _021ED370
    // bl ov14_021F0C58
    // pop {r4, pc}
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E7F4C
    // ldr r1, _021ED388 ; =ov14_021E9518
    // add r0, r4, #0
    // mov r2, #0x33
    // bl ov14_021F0234
    // pop {r4, pc}
    // _021ED388: .word ov14_021E9518
    // TODO: decompile
}




void ov14_021ED38C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // ldr r1, [r5]
    // ldr r1, [r1, #8]
    // cmp r1, #3
    // bne _021ED3A0
    // mov r7, #6
    // mov r6, #0x22
    // mov r4, #0x75
    // b _021ED3BC
    // add r1, r5, #0
    // add r1, #0x2a
    // ldrb r1, [r1]
    // mov r7, #3
    // mov r6, #0x22
    // mov r4, #0xc
    // cmp r1, #0
    // beq _021ED3BC
    // add r1, r5, #0
    // add r1, #0x2b
    // ldrb r6, [r1]
    // add r1, r6, #0
    // bl ov14_021E7588
    // add r0, r5, #0
    // add r1, r7, #0
    // add r2, r6, #0
    // bl ov14_021F6AC0
    // add r0, r5, #0
    // mov r1, #0
    // bl ov14_021F5C84
    // add r0, r5, #0
    // mov r1, #0
    // bl ov14_021F5E94
    // add r0, r5, #0
    // mov r1, #0
    // bl ov14_021F5EB4
    // mov r0, #0x2f
    // ldr r1, [r5, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8248
    // mov r0, #0x2f
    // ldr r1, [r5, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E82A8
    // mov r0, #0x2f
    // ldr r1, [r5, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8328
    // ldr r1, _021ED410 ; =ov14_021E94BC
    // add r0, r5, #0
    // add r2, r4, #0
    // bl ov14_021F0234
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021ED410: .word ov14_021E94BC
    // TODO: decompile
}




void ov14_021ED414(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4, #0x34]
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_HandleInput_AllowHold
    // mov r1, #3
    // mvn r1, r1
    // cmp r0, r1
    // bhi _021ED454
    // blo _021ED42C
    // b _021ED57C
    // cmp r0, #0xb
    // bhi _021ED45E
    // add r1, r0, r0
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _021ED43C: ; jump table
    // mov r1, #2
    // mvn r1, r1
    // cmp r0, r1
    // bhi _021ED460
    // beq _021ED55E
    // b _021ED5A0
    // add r1, r1, #1
    // cmp r0, r1
    // bne _021ED468
    // b _021ED58E
    // b _021ED5A0
    // ldr r0, _021ED5A4 ; =0x000005DD
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #0
    // bl ov14_021F1170
    // pop {r4, pc}
    // ldr r0, _021ED5A4 ; =0x000005DD
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #1
    // bl ov14_021F1170
    // pop {r4, pc}
    // ldr r0, _021ED5A4 ; =0x000005DD
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #2
    // bl ov14_021F1170
    // pop {r4, pc}
    // ldr r0, _021ED5A4 ; =0x000005DD
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #3
    // bl ov14_021F1170
    // pop {r4, pc}
    // ldr r0, _021ED5A4 ; =0x000005DD
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #4
    // bl ov14_021F1170
    // pop {r4, pc}
    // ldr r0, _021ED5A4 ; =0x000005DD
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #5
    // bl ov14_021F1170
    // pop {r4, pc}
    // ldr r0, _021ED5A8 ; =0x000005DC
    // bl PlaySE
    // mov r1, #0
    // add r0, r4, #0
    // mvn r1, r1
    // bl ov14_021F11F8
    // pop {r4, pc}
    // ldr r0, _021ED5A8 ; =0x000005DC
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #1
    // bl ov14_021F11F8
    // pop {r4, pc}
    // ldr r0, [r4, #0x34]
    // mov r1, #9
    // mov r2, #8
    // bl ov14_021F29E4
    // add r0, r4, #0
    // add r0, #0x25
    // ldrb r1, [r4, #0x1f]
    // ldrb r0, [r0]
    // cmp r1, r0
    // bne _021ED514
    // ldr r0, _021ED5AC ; =0x000005F3
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #0xc
    // mov r2, #0x3d
    // bl ov14_021F2270
    // pop {r4, pc}
    // ldr r0, _021ED5A8 ; =0x000005DC
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #0xc
    // mov r2, #0xa2
    // bl ov14_021F2270
    // pop {r4, pc}
    // ldr r0, [r4, #0x34]
    // mov r1, #9
    // mov r2, #8
    // bl ov14_021F29E4
    // ldr r0, _021ED5A4 ; =0x000005DD
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #6
    // mov r2, #0xa3
    // bl ov14_021F2270
    // pop {r4, pc}
    // ldr r0, [r4, #0x34]
    // mov r1, #9
    // mov r2, #8
    // bl ov14_021F29E4
    // ldr r0, _021ED5A4 ; =0x000005DD
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #7
    // mov r2, #0xa4
    // bl ov14_021F2270
    // pop {r4, pc}
    // ldr r0, _021ED5A8 ; =0x000005DC
    // bl PlaySE
    // ldr r0, [r4, #0x34]
    // ldr r0, [r0, #8]
    // cmp r0, #0
    // beq _021ED5A0
    // ldr r0, _021ED5A8 ; =0x000005DC
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #0x3e
    // bl ov14_021F0244
    // pop {r4, pc}
    // ldr r0, _021ED5A8 ; =0x000005DC
    // bl PlaySE
    // b _021ED5A0
    // ldr r0, [r4, #0x34]
    // mov r1, #9
    // mov r2, #8
    // bl ov14_021F29E4
    // ldr r0, _021ED5A8 ; =0x000005DC
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #0xa
    // mov r2, #0x39
    // bl ov14_021F2270
    // pop {r4, pc}
    // mov r0, #0x3d
    // pop {r4, pc}
    // _021ED5A4: .word 0x000005DD
    // _021ED5A8: .word 0x000005DC
    // _021ED5AC: .word 0x000005F3
    // TODO: decompile
}




void ov14_021ED5B0(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4]
    // ldr r1, [r4, #0x34]
    // ldr r0, [r0, #8]
    // cmp r0, #1
    // bne _021ED5DA
    // mov r0, #0x2f
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E834C
    // cmp r0, #0
    // bne _021ED5FC
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8314
    // b _021ED5FC
    // mov r0, #0x2f
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8234
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8294
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8314
    // ldr r1, _021ED608 ; =ov14_021E94BC
    // add r0, r4, #0
    // mov r2, #0x35
    // bl ov14_021F0234
    // pop {r4, pc}
    // _021ED608: .word ov14_021E94BC
    // TODO: decompile
}




void ov14_021ED60C(void) {
    // ldrb r2, [r0, #0x1f]
    // add r1, r0, #0
    // add r1, #0x25
    // strb r2, [r1]
    // ldr r3, _021ED61C ; =ov14_021F1058
    // mov r1, #0x36
    // bx r3
    // nop
    // _021ED61C: .word ov14_021F1058
    // TODO: decompile
}




void ov14_021ED620(void) {
}




void ov14_021ED62C(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl ov14_021F6070
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E875C
    // ldr r1, _021ED64C ; =ov14_021E9618
    // add r0, r4, #0
    // mov r2, #0x38
    // bl ov14_021F0234
    // pop {r4, pc}
    // _021ED64C: .word ov14_021E9618
    // TODO: decompile
}




void ov14_021ED650(void) {
    ov14_021F6AC0(9, *((u32*)(r0 + 0x2c)));
    ov14_021F29E4(*((u32*)(r4 + 0x34)), 9, 0xe);
    ov14_021F29E4(9, 8);
    ov14_021F6844(r4, 0, 0x27);
}




void ov14_021ED684(void) {
}




void ov14_021ED6A4(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E87BC
    // ldr r1, _021ED6C0 ; =ov14_021E9618
    // add r0, r4, #0
    // mov r2, #0x3b
    // bl ov14_021F0234
    // pop {r4, pc}
    // _021ED6C0: .word ov14_021E9618
    // TODO: decompile
}




void ov14_021ED6C4(void) {
}




void ov14_021ED6D0(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4, #0x34]
    // mov r1, #9
    // mov r2, #8
    // bl ov14_021F29E4
    // ldr r0, [r4, #0x34]
    // mov r1, #9
    // mov r2, #0
    // bl ov14_021F2A18
    // add r0, r4, #0
    // mov r1, #0
    // bl ov14_021F5EB4
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8328
    // ldr r0, [r4]
    // ldr r0, [r0, #8]
    // cmp r0, #1
    // bne _021ED71A
    // add r0, r4, #0
    // mov r1, #2
    // mov r2, #0x1e
    // bl ov14_021F6AC0
    // ldr r1, _021ED758 ; =ov14_021E95B4
    // add r0, r4, #0
    // mov r2, #0x52
    // bl ov14_021F0234
    // pop {r4, pc}
    // cmp r0, #3
    // bne _021ED72A
    // add r0, r4, #0
    // mov r1, #6
    // mov r2, #0x1e
    // bl ov14_021F6AC0
    // b _021ED734
    // add r0, r4, #0
    // mov r1, #3
    // mov r2, #0x1e
    // bl ov14_021F6AC0
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8248
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E82A8
    // ldr r1, _021ED75C ; =ov14_021E94BC
    // add r0, r4, #0
    // mov r2, #0x4d
    // bl ov14_021F0234
    // pop {r4, pc}
    // _021ED758: .word ov14_021E95B4
    // _021ED75C: .word ov14_021E94BC
    // TODO: decompile
}




void ov14_021ED760(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // add r1, r4, #0
    // add r1, #0x25
    // ldrb r1, [r1]
    // bl ov14_021E7930
    // ldr r2, [r4, #0x34]
    // ldr r1, _021ED7B0 ; =0x0000044D
    // strb r0, [r2, r1]
    // add r0, r4, #0
    // bl ov14_021F4428
    // add r0, r4, #0
    // bl ov14_021F4530
    // add r0, r4, #0
    // bl ov14_021F459C
    // add r0, r4, #0
    // bl ov14_021F58B8
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E87BC
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E81B4
    // ldr r1, _021ED7B4 ; =ov14_021E9660
    // add r0, r4, #0
    // mov r2, #0x40
    // bl ov14_021F0234
    // pop {r4, pc}
    // _021ED7B0: .word 0x0000044D
    // _021ED7B4: .word ov14_021E9660
    // TODO: decompile
}




void ov14_021ED7B8(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl ov14_021F6094
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8560
    // ldr r1, _021ED7D8 ; =ov14_021E95C8
    // add r0, r4, #0
    // mov r2, #0x41
    // bl ov14_021F0234
    // pop {r4, pc}
    // _021ED7D8: .word ov14_021E95C8
    // TODO: decompile
}




void ov14_021ED7DC(void) {
    // push {r4, r5, r6, lr}
    // add r4, r0, #0
    // ldr r1, [r4, #0x34]
    // ldr r2, _021ED81C ; =0x0000044D
    // ldrb r3, [r1, r2]
    // lsr r6, r3, #0x1f
    // lsl r5, r3, #0x1e
    // sub r5, r5, r6
    // mov r3, #0x1e
    // ror r5, r3
    // add r3, r2, #0
    // add r5, r6, r5
    // sub r3, #0x11
    // str r5, [r1, r3]
    // ldr r3, [r4, #0x34]
    // sub r2, #0x11
    // ldr r2, [r3, r2]
    // mov r1, #0xa
    // bl ov14_021F6AC0
    // ldr r0, [r4, #0x34]
    // mov r1, #9
    // mov r2, #0xe
    // bl ov14_021F29E4
    // add r0, r4, #0
    // mov r1, #1
    // mov r2, #0x27
    // bl ov14_021F6844
    // mov r0, #0x42
    // pop {r4, r5, r6, pc}
    // _021ED81C: .word 0x0000044D
    // TODO: decompile
}




void ov14_021ED820(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4, #0x34]
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_HandleInput_AllowHold
    // mov r1, #2
    // mvn r1, r1
    // cmp r0, r1
    // bhi _021ED856
    // bhs _021ED8E0
    // cmp r0, #7
    // bhi _021ED914
    // add r1, r0, r0
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _021ED846: ; jump table
    // mov r1, #1
    // mvn r1, r1
    // cmp r0, r1
    // beq _021ED902
    // b _021ED914
    // ldr r0, _021ED918 ; =0x000005DD
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #0
    // bl ov14_021F129C
    // mov r0, #0x42
    // pop {r4, pc}
    // ldr r0, _021ED918 ; =0x000005DD
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #1
    // bl ov14_021F129C
    // mov r0, #0x42
    // pop {r4, pc}
    // ldr r0, _021ED918 ; =0x000005DD
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #2
    // bl ov14_021F129C
    // mov r0, #0x42
    // pop {r4, pc}
    // ldr r0, _021ED918 ; =0x000005DD
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #3
    // bl ov14_021F129C
    // mov r0, #0x42
    // pop {r4, pc}
    // ldr r0, _021ED91C ; =0x000005DC
    // bl PlaySE
    // mov r1, #0
    // add r0, r4, #0
    // mvn r1, r1
    // bl ov14_021F1228
    // mov r0, #0x42
    // pop {r4, pc}
    // ldr r0, _021ED91C ; =0x000005DC
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #1
    // bl ov14_021F1228
    // mov r0, #0x42
    // pop {r4, pc}
    // ldr r0, [r4, #0x34]
    // mov r1, #9
    // mov r2, #8
    // bl ov14_021F29E4
    // add r0, r4, #0
    // bl ov14_021F131C
    // pop {r4, pc}
    // ldr r0, _021ED91C ; =0x000005DC
    // bl PlaySE
    // ldr r0, [r4, #0x34]
    // ldr r0, [r0, #8]
    // cmp r0, #0
    // beq _021ED914
    // add r0, r4, #0
    // mov r1, #0x49
    // bl ov14_021F0244
    // pop {r4, pc}
    // ldr r0, [r4, #0x34]
    // mov r1, #9
    // mov r2, #8
    // bl ov14_021F29E4
    // ldr r0, _021ED91C ; =0x000005DC
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #0xa
    // mov r2, #0xa6
    // bl ov14_021F2270
    // pop {r4, pc}
    // mov r0, #0x42
    // pop {r4, pc}
    // _021ED918: .word 0x000005DD
    // _021ED91C: .word 0x000005DC
    // TODO: decompile
}




void ov14_021ED920(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8588
    // ldr r1, _021ED93C ; =ov14_021E9604
    // add r0, r4, #0
    // mov r2, #0x44
    // bl ov14_021F0234
    // pop {r4, pc}
    // _021ED93C: .word ov14_021E9604
    // TODO: decompile
}




void ov14_021ED940(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E81D8
    // ldr r1, _021ED95C ; =ov14_021E96A8
    // add r0, r4, #0
    // mov r2, #0x45
    // bl ov14_021F0234
    // pop {r4, pc}
    // _021ED95C: .word ov14_021E96A8
    // TODO: decompile
}




void ov14_021ED960(void) {
}




void ov14_021ED96C(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r2, [r4, #0x34]
    // ldr r1, _021ED9A8 ; =0x0000044D
    // ldrb r1, [r2, r1]
    // bl ov14_021E78AC
    // ldr r1, [r4, #0x34]
    // ldr r0, _021ED9A8 ; =0x0000044D
    // ldrb r2, [r1, r0]
    // ldr r0, [r4, #4]
    // cmp r2, #0x10
    // bhs _021ED98E
    // ldrb r1, [r4, #0x1f]
    // bl PCStorage_SetBoxWallpaper
    // b _021ED996
    // ldrb r1, [r4, #0x1f]
    // add r2, #0x10
    // bl PCStorage_SetBoxWallpaper
    // add r0, r4, #0
    // bl ov14_021F4530
    // ldrb r1, [r4, #0x1f]
    // add r0, r4, #0
    // bl ov14_021F4958
    // mov r0, #0x48
    // pop {r4, pc}
    // _021ED9A8: .word 0x0000044D
    // TODO: decompile
}




void ov14_021ED9AC(void) {
    // push {r3, r4, lr}
    // sub sp, #0xc
    // add r4, r0, #0
    // ldr r0, [r4, #0x34]
    // mov r1, #0
    // mov r3, #2
    // ldr r0, [r0, #0x18]
    // add r2, r1, #0
    // lsl r3, r3, #8
    // bl PaletteData_LoadPaletteSlotFromHardware
    // mov r3, #0
    // mov r2, #3
    // str r3, [sp]
    // mov r0, #0x10
    // str r0, [sp, #4]
    // ldr r0, _021ED9E8 ; =0x00007FFF
    // mov r1, #1
    // str r0, [sp, #8]
    // ldr r0, [r4, #0x34]
    // lsl r2, r2, #0xe
    // ldr r0, [r0, #0x18]
    // bl PaletteData_BeginPaletteFade
    // mov r0, #0x46
    // str r0, [r4, #0x30]
    // mov r0, #3
    // add sp, #0xc
    // pop {r3, r4, pc}
    // nop
    // _021ED9E8: .word 0x00007FFF
    // TODO: decompile
}




void ov14_021ED9EC(void) {
    // push {r3, r4, lr}
    // sub sp, #0xc
    // add r4, r0, #0
    // mov r0, #0x10
    // str r0, [sp]
    // mov r3, #0
    // ldr r0, _021EDA18 ; =0x00007FFF
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [r4, #0x34]
    // mov r2, #3
    // ldr r0, [r0, #0x18]
    // mov r1, #1
    // lsl r2, r2, #0xe
    // bl PaletteData_BeginPaletteFade
    // mov r0, #0x42
    // str r0, [r4, #0x30]
    // mov r0, #3
    // add sp, #0xc
    // pop {r3, r4, pc}
    // nop
    // _021EDA18: .word 0x00007FFF
    // TODO: decompile
}




void ov14_021EDA1C(void) {
}




void ov14_021EDA3C(void) {
}




void ov14_021EDA4C(void) {
    // push {r3, r4, r5, lr}
    // add r4, r0, #0
    // bl ov14_021F6A14
    // add r5, r0, #0
    // mov r0, #0
    // mvn r0, r0
    // cmp r5, r0
    // beq _021EDB3C
    // add r0, r4, #0
    // add r1, r5, #0
    // mov r2, #0xac
    // mov r3, #0
    // bl ov14_021E6070
    // cmp r0, #0
    // beq _021EDAB8
    // ldr r2, [r4, #0x34]
    // ldr r1, _021EDDA4 ; =0x000040B8
    // add r0, r2, r1
    // add r1, r1, #4
    // add r1, r2, r1
    // bl System_GetTouchNewCoords
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8544
    // cmp r0, #0
    // bne _021EDA96
    // ldr r1, _021EDDA8 ; =ov14_021F7D2C
    // add r0, r4, #0
    // mov r2, #4
    // bl ov14_021F5EE4
    // ldr r0, _021EDDAC ; =0x000005EB
    // bl PlaySE
    // add r0, r4, #0
    // add r1, r5, #0
    // bl ov14_021E7588
    // ldr r0, [r4, #0x34]
    // mov r1, #9
    // mov r2, #0
    // bl ov14_021F2A18
    // add r0, r4, #0
    // add r1, r5, #0
    // bl ov14_021F0418
    // pop {r3, r4, r5, pc}
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8544
    // cmp r0, #1
    // bne _021EDB1C
    // add r0, r4, #0
    // add r0, #0x21
    // ldrb r5, [r0]
    // ldr r0, [r4, #0x34]
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_GetNextInput
    // add r2, r0, #0
    // ldr r0, [r4, #0x34]
    // add r1, r5, #0
    // bl ov14_021F7AC4
    // ldr r0, [r4, #0x34]
    // add r1, r5, #0
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_SetNextInput
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E84A4
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8328
    // ldr r0, [r4, #0x34]
    // bl ov14_021E884C
    // add r0, r4, #0
    // mov r1, #0
    // bl ov14_021F40E8
    // ldr r1, _021EDDB0 ; =ov14_021EA130
    // add r0, r4, #0
    // mov r2, #0x59
    // bl ov14_021F0234
    // pop {r3, r4, r5, pc}
    // ldr r0, [r4, #0x34]
    // lsl r1, r5, #0x18
    // ldr r0, [r0, #0x2c]
    // lsr r1, r1, #0x18
    // bl GridInputHandler_SetNextInput
    // ldr r0, [r4, #0x34]
    // mov r1, #1
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_SetButtonInputMode
    // add r0, r4, #0
    // bl ov14_021E765C
    // mov r0, #0x51
    // pop {r3, r4, r5, pc}
    // add r0, r4, #0
    // bl ov14_021F6E8C
    // mov r1, #2
    // add r5, r0, #0
    // mvn r1, r1
    // cmp r5, r1
    // bhi _021EDB82
    // blo _021EDB50
    // b _021EDCBA
    // cmp r5, #0x26
    // bhi _021EDB76
    // sub r0, #0x1e
    // bmi _021EDB80
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _021EDB64: ; jump table
    // mov r0, #3
    // mvn r0, r0
    // cmp r5, r0
    // bne _021EDB80
    // b _021EDD6C
    // b _021EDDC4
    // add r0, r1, #1
    // cmp r5, r0
    // bhi _021EDB8E
    // bne _021EDB8C
    // b _021EDD12
    // b _021EDDC4
    // add r0, r1, #2
    // cmp r5, r0
    // bne _021EDB96
    // b _021EDD24
    // b _021EDDC4
    // ldr r0, [r4, #8]
    // bl Party_GetCount
    // cmp r0, #6
    // beq _021EDBAA
    // ldr r0, _021EDDB4 ; =0x000005DD
    // bl PlaySE
    // b _021EDBB0
    // ldr r0, _021EDDB8 ; =0x000005F3
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #4
    // mov r2, #0xa7
    // bl ov14_021F2270
    // pop {r3, r4, r5, pc}
    // ldr r0, _021EDDB4 ; =0x000005DD
    // bl PlaySE
    // mov r0, #0x23
    // str r0, [r4, #0x2c]
    // add r0, r4, #0
    // mov r1, #5
    // mov r2, #0x97
    // bl ov14_021F2270
    // pop {r3, r4, r5, pc}
    // ldr r0, _021EDDB4 ; =0x000005DD
    // bl PlaySE
    // ldr r0, [r4, #0x34]
    // mov r1, #0x27
    // bl ov14_021F6654
    // add r0, r4, #0
    // mov r1, #6
    // mov r2, #0x99
    // bl ov14_021F2270
    // pop {r3, r4, r5, pc}
    // ldr r0, _021EDDB4 ; =0x000005DD
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #7
    // mov r2, #0x9b
    // bl ov14_021F2270
    // pop {r3, r4, r5, pc}
    // add r0, r4, #0
    // add r0, #0x21
    // ldrb r5, [r0]
    // ldr r0, [r4, #0x34]
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_GetNextInput
    // add r2, r0, #0
    // ldr r0, [r4, #0x34]
    // add r1, r5, #0
    // bl ov14_021F7AC4
    // ldr r0, [r4, #0x34]
    // add r1, r5, #0
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_SetNextInput
    // ldr r0, _021EDDBC ; =0x000005DC
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #0xb
    // mov r2, #0xa8
    // bl ov14_021F2270
    // pop {r3, r4, r5, pc}
    // ldr r0, _021EDDB4 ; =0x000005DD
    // bl PlaySE
    // add r0, r4, #0
    // bl ov14_021E76B8
    // ldr r0, [r4, #0x34]
    // mov r1, #0x27
    // bl ov14_021F6654
    // add r0, r4, #0
    // bl ov14_021F1128
    // pop {r3, r4, r5, pc}
    // ldr r0, _021EDDBC ; =0x000005DC
    // bl PlaySE
    // add r0, r4, #0
    // bl ov14_021E76B8
    // ldr r0, [r4, #0x34]
    // mov r1, #9
    // mov r2, #0
    // bl ov14_021F2A18
    // ldr r0, [r4, #0x34]
    // mov r1, #0x1e
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_SetNextInput
    // mov r1, #0
    // add r0, r4, #0
    // add r2, r1, #0
    // mov r3, #0x27
    // bl ov14_021F685C
    // add r0, r4, #0
    // mov r1, #0x51
    // bl ov14_021F028C
    // pop {r3, r4, r5, pc}
    // ldr r0, _021EDDBC ; =0x000005DC
    // bl PlaySE
    // add r0, r4, #0
    // bl ov14_021E76B8
    // ldr r0, [r4, #0x34]
    // mov r1, #9
    // mov r2, #0
    // bl ov14_021F2A18
    // ldr r0, [r4, #0x34]
    // mov r1, #0x1e
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_SetNextInput
    // mov r1, #0
    // add r0, r4, #0
    // add r2, r1, #0
    // mov r3, #0x27
    // bl ov14_021F685C
    // add r0, r4, #0
    // mov r1, #0x51
    // bl ov14_021F0314
    // pop {r3, r4, r5, pc}
    // ldr r0, [r4, #0x34]
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_GetNextInput
    // add r1, r0, #0
    // cmp r1, #0x1e
    // bhs _021EDCD0
    // add r0, r4, #0
    // bl ov14_021E7588
    // b _021EDCEA
    // cmp r1, #0x22
    // beq _021EDCEA
    // cmp r1, #0x23
    // beq _021EDCEA
    // cmp r1, #0x24
    // beq _021EDCEA
    // cmp r1, #0x25
    // beq _021EDCEA
    // cmp r1, #0x26
    // beq _021EDCEA
    // add r0, r4, #0
    // bl ov14_021E765C
    // ldr r0, _021EDDBC ; =0x000005DC
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #0x58
    // bl ov14_021F0244
    // pop {r3, r4, r5, pc}
    // ldr r0, _021EDDB4 ; =0x000005DD
    // bl PlaySE
    // add r0, r4, #0
    // bl ov14_021E765C
    // add r0, r4, #0
    // mov r1, #0xa
    // mov r2, #0x93
    // bl ov14_021F2270
    // pop {r3, r4, r5, pc}
    // ldr r0, _021EDDB4 ; =0x000005DD
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #0xa
    // mov r2, #0x94
    // bl ov14_021F2270
    // pop {r3, r4, r5, pc}
    // ldr r0, [r4, #0x34]
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_GetNextInput
    // cmp r0, #0x1e
    // bne _021EDE12
    // ldr r0, _021EDDC0 ; =gSystem
    // ldr r1, [r0, #0x48]
    // mov r0, #0x20
    // tst r0, r1
    // beq _021EDD50
    // ldr r0, _021EDDBC ; =0x000005DC
    // bl PlaySE
    // add r0, r4, #0
    // bl ov14_021E76B8
    // add r0, r4, #0
    // mov r1, #0x51
    // bl ov14_021F028C
    // pop {r3, r4, r5, pc}
    // mov r0, #0x10
    // tst r0, r1
    // beq _021EDE12
    // ldr r0, _021EDDBC ; =0x000005DC
    // bl PlaySE
    // add r0, r4, #0
    // bl ov14_021E76B8
    // add r0, r4, #0
    // mov r1, #0x51
    // bl ov14_021F0314
    // pop {r3, r4, r5, pc}
    // ldr r0, [r4, #0x34]
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_GetNextInput
    // add r1, r0, #0
    // cmp r1, #0x1e
    // bhs _021EDD82
    // add r0, r4, #0
    // bl ov14_021E7588
    // b _021EDD9C
    // cmp r1, #0x22
    // beq _021EDD9C
    // cmp r1, #0x23
    // beq _021EDD9C
    // cmp r1, #0x24
    // beq _021EDD9C
    // cmp r1, #0x25
    // beq _021EDD9C
    // cmp r1, #0x26
    // beq _021EDD9C
    // add r0, r4, #0
    // bl ov14_021E765C
    // ldr r0, _021EDDBC ; =0x000005DC
    // bl PlaySE
    // b _021EDE12
    // _021EDDA4: .word 0x000040B8
    // _021EDDA8: .word ov14_021F7D2C
    // _021EDDAC: .word 0x000005EB
    // _021EDDB0: .word ov14_021EA130
    // _021EDDB4: .word 0x000005DD
    // _021EDDB8: .word 0x000005F3
    // _021EDDBC: .word 0x000005DC
    // _021EDDC0: .word gSystem
    // add r0, r4, #0
    // add r1, r5, #0
    // mov r2, #0xac
    // mov r3, #0
    // bl ov14_021E6070
    // cmp r0, #0
    // beq _021EDE12
    // ldr r0, _021EDE18 ; =0x000005DD
    // bl PlaySE
    // ldr r1, _021EDE1C ; =ov14_021F7D2C
    // add r0, r4, #0
    // mov r2, #4
    // bl ov14_021F5EE4
    // add r0, r4, #0
    // add r1, r5, #0
    // bl ov14_021E7588
    // ldr r0, [r4, #0x34]
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_GetNextInput
    // add r2, r0, #0
    // ldr r0, [r4, #0x34]
    // mov r1, #0x22
    // bl ov14_021F7AC4
    // ldr r0, [r4, #0x34]
    // mov r1, #0x22
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_SetNextInput
    // add r0, r4, #0
    // add r1, r5, #0
    // bl ov14_021F04D4
    // pop {r3, r4, r5, pc}
    // mov r0, #0x51
    // pop {r3, r4, r5, pc}
    // nop
    // _021EDE18: .word 0x000005DD
    // _021EDE1C: .word ov14_021F7D2C
    // TODO: decompile
}




void ov14_021EDE20(void) {
}




void ov14_021EDE38(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl ov14_021F3044
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E7ED0
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E7EE0
    // add r0, r4, #0
    // mov r1, #2
    // add r0, #0x22
    // strb r1, [r0]
    // ldr r1, _021EDE6C ; =ov14_021E9518
    // add r0, r4, #0
    // mov r2, #0x54
    // bl ov14_021F0234
    // pop {r4, pc}
    // _021EDE6C: .word ov14_021E9518
    // TODO: decompile
}




void ov14_021EDE70(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl ov14_021F08BC
    // ldr r1, _021EDE84 ; =ov14_021E91E0
    // add r0, r4, #0
    // mov r2, #0x55
    // bl ov14_021F0234
    // pop {r4, pc}
    // _021EDE84: .word ov14_021E91E0
    // TODO: decompile
}




void ov14_021EDE88(void) {
    // push {r3, r4, lr}
    // sub sp, #4
    // add r4, r0, #0
    // ldr r0, _021EDF00 ; =0x000005EA
    // bl PlaySE
    // add r1, r4, #0
    // ldr r0, [r4, #0x34]
    // add r1, #0x21
    // ldrb r1, [r1]
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_SetNextInput
    // add r1, r4, #0
    // ldr r0, [r4, #0x34]
    // add r1, #0x21
    // ldrb r1, [r1]
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_GetDpadBox
    // add r1, sp, #0
    // add r1, #1
    // add r2, sp, #0
    // bl DpadMenuBox_GetPosition
    // mov r0, #0x32
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // add r2, sp, #0
    // ldr r0, [r1, r0]
    // ldrb r1, [r2, #1]
    // ldrb r2, [r2]
    // bl ManagedSprite_SetPositionXY
    // add r0, r4, #0
    // mov r1, #0xff
    // add r0, #0x21
    // strb r1, [r0]
    // add r0, r4, #0
    // bl ov14_021E637C
    // add r0, r4, #0
    // bl ov14_021F08F0
    // add r0, r4, #0
    // bl ov14_021E765C
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E7F4C
    // ldr r1, _021EDF04 ; =ov14_021E9518
    // add r0, r4, #0
    // mov r2, #0x56
    // bl ov14_021F0234
    // add sp, #4
    // pop {r3, r4, pc}
    // _021EDF00: .word 0x000005EA
    // _021EDF04: .word ov14_021E9518
    // TODO: decompile
}




void ov14_021EDF08(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8328
    // ldr r1, _021EDF24 ; =ov14_021E95B4
    // add r0, r4, #0
    // mov r2, #0x52
    // bl ov14_021F0234
    // pop {r4, pc}
    // _021EDF24: .word ov14_021E95B4
    // TODO: decompile
}




void ov14_021EDF28(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, [r5, #0x34]
    // ldr r0, [r0, #0xc]
    // add r0, #0xe4
    // ldr r4, [r0]
    // ldr r0, _021EDF8C ; =0x000005EA
    // bl PlaySE
    // add r0, r5, #0
    // bl ov14_021E637C
    // add r0, r5, #0
    // bl ov14_021F08F0
    // ldr r0, [r5, #0x34]
    // mov r1, #0x28
    // bl ov14_021F6678
    // add r0, r5, #0
    // add r0, #0x21
    // ldrb r1, [r0]
    // cmp r1, #0xff
    // bne _021EDF66
    // mov r1, #0
    // add r0, r5, #0
    // add r2, r1, #0
    // mov r3, #0x27
    // bl ov14_021F685C
    // b _021EDF72
    // add r0, r5, #0
    // mov r2, #1
    // mov r3, #0x27
    // bl ov14_021F685C
    // mov r4, #0x22
    // ldr r0, [r5, #0x34]
    // lsl r1, r4, #0x18
    // ldr r0, [r0, #0x2c]
    // lsr r1, r1, #0x18
    // bl GridInputHandler_SetNextInput
    // ldr r0, [r5, #0x34]
    // mov r1, #1
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_SetButtonInputMode
    // mov r0, #0x51
    // pop {r3, r4, r5, pc}
    // _021EDF8C: .word 0x000005EA
    // TODO: decompile
}




void ov14_021EDF90(void) {
}




void ov14_021EDFA0(void) {
    // push {r3, r4, r5, lr}
    // add r4, r0, #0
    // bl ov14_021F6A24
    // add r5, r0, #0
    // mov r0, #0
    // mvn r0, r0
    // cmp r5, r0
    // beq _021EE0A4
    // add r1, r5, #0
    // add r0, r4, #0
    // add r1, #0x1e
    // mov r2, #0xac
    // mov r3, #0
    // bl ov14_021E6070
    // cmp r0, #0
    // beq _021EE012
    // ldr r2, [r4, #0x34]
    // ldr r1, _021EE254 ; =0x000040B8
    // add r0, r2, r1
    // add r1, r1, #4
    // add r1, r2, r1
    // bl System_GetTouchNewCoords
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8544
    // cmp r0, #0
    // bne _021EDFEC
    // ldr r1, _021EE258 ; =ov14_021F7D1C
    // add r0, r4, #0
    // mov r2, #4
    // bl ov14_021F5EE4
    // ldr r0, _021EE25C ; =0x000005EB
    // bl PlaySE
    // add r1, r5, #0
    // add r0, r4, #0
    // add r1, #0x1e
    // bl ov14_021E7588
    // ldr r0, [r4, #0x34]
    // mov r1, #9
    // mov r2, #0
    // bl ov14_021F2A18
    // add r5, #0x1e
    // add r0, r4, #0
    // add r1, r5, #0
    // bl ov14_021F0660
    // pop {r3, r4, r5, pc}
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8544
    // cmp r0, #1
    // bne _021EE084
    // add r0, r4, #0
    // add r0, #0x21
    // ldrb r0, [r0]
    // sub r0, #0x1e
    // lsl r0, r0, #0x18
    // lsr r5, r0, #0x18
    // ldr r0, [r4, #0x34]
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_GetNextInput
    // add r2, r0, #0
    // ldr r0, [r4, #0x34]
    // add r1, r5, #0
    // bl ov14_021F7AC4
    // ldr r0, [r4, #0x34]
    // add r1, r5, #0
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_SetNextInput
    // add r0, r4, #0
    // mov r1, #0
    // bl ov14_021F5EB4
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E84A4
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8328
    // ldr r0, [r4, #0x34]
    // bl ov14_021E884C
    // add r0, r4, #0
    // mov r1, #0
    // bl ov14_021F40E8
    // ldr r1, _021EE260 ; =ov14_021EA130
    // add r0, r4, #0
    // mov r2, #0x70
    // bl ov14_021F0234
    // pop {r3, r4, r5, pc}
    // ldr r0, [r4, #0x34]
    // lsl r1, r5, #0x18
    // ldr r0, [r0, #0x2c]
    // lsr r1, r1, #0x18
    // bl GridInputHandler_SetNextInput
    // ldr r0, [r4, #0x34]
    // mov r1, #1
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_SetButtonInputMode
    // add r0, r4, #0
    // bl ov14_021E765C
    // mov r0, #0x5b
    // pop {r3, r4, r5, pc}
    // add r0, r4, #0
    // bl ov14_021F6BC0
    // mov r1, #2
    // add r5, r0, #0
    // mvn r1, r1
    // cmp r5, r1
    // bhi _021EE0E8
    // bhs _021EE1AA
    // cmp r5, #0xb
    // bhi _021EE0DE
    // add r0, r5, r5
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _021EE0C6: ; jump table
    // mov r0, #3
    // mvn r0, r0
    // cmp r5, r0
    // beq _021EE18A
    // b _021EE1FA
    // add r0, r1, #1
    // cmp r5, r0
    // bhi _021EE0F2
    // beq _021EE1E8
    // b _021EE1FA
    // add r0, r1, #2
    // cmp r5, r0
    // bne _021EE0FA
    // b _021EE24E
    // b _021EE1FA
    // ldr r0, _021EE264 ; =0x000005DD
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #4
    // mov r2, #0xa9
    // bl ov14_021F2270
    // pop {r3, r4, r5, pc}
    // ldr r0, _021EE264 ; =0x000005DD
    // bl PlaySE
    // mov r0, #8
    // str r0, [r4, #0x2c]
    // add r0, r4, #0
    // mov r1, #5
    // mov r2, #0x97
    // bl ov14_021F2270
    // pop {r3, r4, r5, pc}
    // ldr r0, _021EE264 ; =0x000005DD
    // bl PlaySE
    // ldr r0, [r4, #0x34]
    // mov r1, #0x27
    // bl ov14_021F6654
    // add r0, r4, #0
    // mov r1, #6
    // mov r2, #0x99
    // bl ov14_021F2270
    // pop {r3, r4, r5, pc}
    // ldr r0, _021EE264 ; =0x000005DD
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #7
    // mov r2, #0x9b
    // bl ov14_021F2270
    // pop {r3, r4, r5, pc}
    // add r0, r4, #0
    // add r0, #0x21
    // ldrb r0, [r0]
    // sub r0, #0x1e
    // lsl r0, r0, #0x18
    // lsr r5, r0, #0x18
    // ldr r0, [r4, #0x34]
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_GetNextInput
    // add r2, r0, #0
    // ldr r0, [r4, #0x34]
    // add r1, r5, #0
    // bl ov14_021F7AC4
    // ldr r0, [r4, #0x34]
    // add r1, r5, #0
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_SetNextInput
    // ldr r0, _021EE268 ; =0x000005DC
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #0xb
    // mov r2, #0xaa
    // bl ov14_021F2270
    // pop {r3, r4, r5, pc}
    // ldr r0, [r4, #0x34]
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_GetNextInput
    // add r1, r0, #0
    // cmp r1, #6
    // bhi _021EE1A0
    // add r0, r4, #0
    // add r1, #0x1e
    // bl ov14_021E7588
    // ldr r0, _021EE268 ; =0x000005DC
    // bl PlaySE
    // mov r0, #0x5b
    // pop {r3, r4, r5, pc}
    // ldr r0, [r4, #0x34]
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_GetNextInput
    // add r1, r0, #0
    // cmp r1, #6
    // bhi _021EE1C0
    // add r0, r4, #0
    // add r1, #0x1e
    // bl ov14_021E7588
    // ldr r0, _021EE268 ; =0x000005DC
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #0x6f
    // bl ov14_021F0244
    // pop {r3, r4, r5, pc}
    // ldr r0, _021EE264 ; =0x000005DD
    // bl PlaySE
    // add r0, r4, #0
    // bl ov14_021E765C
    // add r0, r4, #0
    // mov r1, #0xa
    // mov r2, #0x93
    // bl ov14_021F2270
    // pop {r3, r4, r5, pc}
    // ldr r0, _021EE264 ; =0x000005DD
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #0xa
    // mov r2, #0x94
    // bl ov14_021F2270
    // pop {r3, r4, r5, pc}
    // add r1, r5, #0
    // add r0, r4, #0
    // add r1, #0x1e
    // mov r2, #0xac
    // mov r3, #0
    // bl ov14_021E6070
    // cmp r0, #0
    // beq _021EE24E
    // ldr r0, _021EE264 ; =0x000005DD
    // bl PlaySE
    // ldr r1, _021EE258 ; =ov14_021F7D1C
    // add r0, r4, #0
    // mov r2, #4
    // bl ov14_021F5EE4
    // add r1, r5, #0
    // add r0, r4, #0
    // add r1, #0x1e
    // bl ov14_021E7588
    // ldr r0, [r4, #0x34]
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_GetNextInput
    // add r2, r0, #0
    // ldr r0, [r4, #0x34]
    // mov r1, #7
    // bl ov14_021F7AC4
    // ldr r0, [r4, #0x34]
    // mov r1, #7
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_SetNextInput
    // add r5, #0x1e
    // add r0, r4, #0
    // add r1, r5, #0
    // bl ov14_021F0794
    // pop {r3, r4, r5, pc}
    // mov r0, #0x5b
    // pop {r3, r4, r5, pc}
    // nop
    // _021EE254: .word 0x000040B8
    // _021EE258: .word ov14_021F7D1C
    // _021EE25C: .word 0x000005EB
    // _021EE260: .word ov14_021EA130
    // _021EE264: .word 0x000005DD
    // _021EE268: .word 0x000005DC
    // TODO: decompile
}




void ov14_021EE26C(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r1, r5, #0
    // add r1, #0x21
    // ldrb r4, [r1]
    // sub r4, #0x1e
    // add r1, r4, #0
    // bl ov14_021E6480
    // cmp r0, #0
    // bne _021EE29A
    // ldr r0, _021EE320 ; =0x000005F3
    // bl PlaySE
    // add r0, r5, #0
    // mov r1, #6
    // mov r2, #0x25
    // bl ov14_021F67B0
    // mov r0, #0x5d
    // str r0, [r5, #0x30]
    // mov r0, #6
    // pop {r3, r4, r5, pc}
    // ldr r0, [r5, #8]
    // add r1, r4, #0
    // bl Party_GetMonByIndex
    // mov r1, #6
    // mov r2, #0
    // add r4, r0, #0
    // bl GetMonData
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // bl ItemIdIsMail
    // cmp r0, #1
    // bne _021EE2D2
    // ldr r0, _021EE320 ; =0x000005F3
    // bl PlaySE
    // add r0, r5, #0
    // mov r1, #0
    // mov r2, #6
    // mov r3, #0x25
    // bl ov14_021F685C
    // mov r0, #0x5d
    // str r0, [r5, #0x30]
    // mov r0, #6
    // pop {r3, r4, r5, pc}
    // add r0, r4, #0
    // mov r1, #0xa2
    // mov r2, #0
    // bl GetMonData
    // cmp r0, #0
    // beq _021EE2FA
    // ldr r0, _021EE320 ; =0x000005F3
    // bl PlaySE
    // add r0, r5, #0
    // mov r1, #0
    // mov r2, #5
    // mov r3, #0x25
    // bl ov14_021F685C
    // mov r0, #0x5d
    // str r0, [r5, #0x30]
    // mov r0, #6
    // pop {r3, r4, r5, pc}
    // ldrb r1, [r5, #0x1f]
    // add r0, r5, #0
    // add r0, #0x25
    // strb r1, [r0]
    // add r0, r5, #0
    // mov r1, #2
    // mov r2, #1
    // bl ov14_021F3488
    // add r0, r5, #0
    // bl ov14_021F40DC
    // ldr r1, _021EE324 ; =ov14_021E96C8
    // add r0, r5, #0
    // mov r2, #0x5e
    // bl ov14_021F0234
    // pop {r3, r4, r5, pc}
    // nop
    // _021EE320: .word 0x000005F3
    // _021EE324: .word ov14_021E96C8
    // TODO: decompile
}




void ov14_021EE328(void) {
    // ldr r3, _021EE330 ; =ov14_021F0234
    // ldr r1, _021EE334 ; =ov14_021E9450
    // mov r2, #0xe
    // bx r3
    // _021EE330: .word ov14_021F0234
    // _021EE334: .word ov14_021E9450
    // TODO: decompile
}




void ov14_021EE338(void) {
}




void ov14_021EE35C(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl ov14_021F60A8
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8560
    // ldr r1, _021EE37C ; =ov14_021E95C8
    // add r0, r4, #0
    // mov r2, #0x60
    // bl ov14_021F0234
    // pop {r4, pc}
    // _021EE37C: .word ov14_021E95C8
    // TODO: decompile
}




void ov14_021EE380(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // add r0, #0x25
    // ldrb r0, [r0]
    // mov r1, #6
    // bl _s32_div_f
    // ldr r0, [r4, #0x34]
    // ldr r2, _021EE3C4 ; =0x0000043C
    // str r1, [r0, r2]
    // ldr r3, [r4, #0x34]
    // add r0, r4, #0
    // ldr r2, [r3, r2]
    // mov r1, #1
    // bl ov14_021F6AC0
    // ldr r0, [r4, #0x34]
    // mov r1, #9
    // mov r2, #0xe
    // bl ov14_021F29E4
    // ldr r0, [r4, #0x34]
    // mov r1, #0x25
    // bl ov14_021F6654
    // add r0, r4, #0
    // mov r1, #0
    // mov r2, #3
    // mov r3, #0x27
    // bl ov14_021F685C
    // mov r0, #0x61
    // pop {r4, pc}
    // nop
    // _021EE3C4: .word 0x0000043C
    // TODO: decompile
}




void ov14_021EE3C8(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4, #0x34]
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_HandleInput_AllowHold
    // mov r1, #2
    // mvn r1, r1
    // cmp r0, r1
    // bhi _021EE402
    // bhs _021EE472
    // cmp r0, #9
    // bhi _021EE4A4
    // add r1, r0, r0
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _021EE3EE: ; jump table
    // mov r1, #1
    // mvn r1, r1
    // cmp r0, r1
    // beq _021EE494
    // b _021EE4A4
    // add r0, r4, #0
    // mov r1, #0
    // bl ov14_021F1448
    // pop {r4, pc}
    // add r0, r4, #0
    // mov r1, #1
    // bl ov14_021F1448
    // pop {r4, pc}
    // add r0, r4, #0
    // mov r1, #2
    // bl ov14_021F1448
    // pop {r4, pc}
    // add r0, r4, #0
    // mov r1, #3
    // bl ov14_021F1448
    // pop {r4, pc}
    // add r0, r4, #0
    // mov r1, #4
    // bl ov14_021F1448
    // pop {r4, pc}
    // add r0, r4, #0
    // mov r1, #5
    // bl ov14_021F1448
    // pop {r4, pc}
    // ldr r0, _021EE4A8 ; =0x000005DC
    // bl PlaySE
    // mov r1, #0
    // add r0, r4, #0
    // mvn r1, r1
    // bl ov14_021F1504
    // pop {r4, pc}
    // ldr r0, _021EE4A8 ; =0x000005DC
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #1
    // bl ov14_021F1504
    // pop {r4, pc}
    // add r0, r4, #0
    // bl ov14_021F1540
    // pop {r4, pc}
    // ldr r0, _021EE4A8 ; =0x000005DC
    // bl PlaySE
    // ldr r0, [r4, #0x34]
    // ldr r0, [r0, #8]
    // cmp r0, #0
    // beq _021EE4A4
    // add r0, r4, #0
    // mov r1, #0x71
    // bl ov14_021F0244
    // pop {r4, pc}
    // ldr r0, [r4, #0x34]
    // mov r1, #9
    // mov r2, #8
    // bl ov14_021F29E4
    // ldr r0, _021EE4A8 ; =0x000005DC
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #0
    // bl ov14_021F1534
    // pop {r4, pc}
    // mov r0, #0x61
    // pop {r4, pc}
    // _021EE4A8: .word 0x000005DC
    // TODO: decompile
}




void ov14_021EE4AC(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4, #0x34]
    // mov r1, #9
    // mov r2, #0
    // bl ov14_021F2A18
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8588
    // ldr r1, _021EE4D4 ; =ov14_021E9604
    // add r0, r4, #0
    // mov r2, #0x63
    // bl ov14_021F0234
    // pop {r4, pc}
    // nop
    // _021EE4D4: .word ov14_021E9604
    // TODO: decompile
}




void ov14_021EE4D8(void) {
}




void ov14_021EE4E4(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl ov14_021F4CA0
    // ldr r1, _021EE4F8 ; =ov14_021E98AC
    // add r0, r4, #0
    // mov r2, #0x65
    // bl ov14_021F0234
    // pop {r4, pc}
    // _021EE4F8: .word ov14_021E98AC
    // TODO: decompile
}




u32 ov14_021EE4FC(void) {
}




void ov14_021EE538(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4, #0x34]
    // mov r1, #9
    // mov r2, #8
    // bl ov14_021F29E4
    // ldr r0, [r4, #0x34]
    // mov r1, #9
    // mov r2, #0
    // bl ov14_021F2A18
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8588
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8314
    // ldr r1, _021EE574 ; =ov14_021E99F0
    // add r0, r4, #0
    // mov r2, #0x67
    // bl ov14_021F0234
    // pop {r4, pc}
    // _021EE574: .word ov14_021E99F0
    // TODO: decompile
}




void ov14_021EE578(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // add r1, r4, #0
    // add r1, #0x25
    // ldrb r1, [r1]
    // ldr r0, [r4, #4]
    // bl PCStorage_CountMonsAndEggsInBox
    // cmp r0, #0x1e
    // bne _021EE5A0
    // add r0, r4, #0
    // mov r1, #0
    // mov r2, #4
    // mov r3, #0x25
    // bl ov14_021F685C
    // mov r0, #0x5e
    // str r0, [r4, #0x30]
    // mov r0, #6
    // pop {r4, pc}
    // add r0, r4, #0
    // mov r1, #2
    // mov r2, #0
    // bl ov14_021F3488
    // ldr r0, [r4, #0x34]
    // mov r1, #0x27
    // bl ov14_021F6654
    // add r0, r4, #0
    // bl ov14_021F4CA0
    // ldr r1, _021EE5C4 ; =ov14_021E98AC
    // add r0, r4, #0
    // mov r2, #0x68
    // bl ov14_021F0234
    // pop {r4, pc}
    // _021EE5C4: .word ov14_021E98AC
    // TODO: decompile
}




void ov14_021EE5C8(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8048
    // ldr r1, _021EE5E4 ; =ov14_021E952C
    // add r0, r4, #0
    // mov r2, #0x69
    // bl ov14_021F0234
    // pop {r4, pc}
    // _021EE5E4: .word ov14_021E952C
    // TODO: decompile
}




void ov14_021EE5E8(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // add r1, r4, #0
    // add r1, #0x25
    // ldrb r2, [r4, #0x1f]
    // ldrb r1, [r1]
    // strb r1, [r4, #0x1f]
    // add r1, r4, #0
    // add r1, #0x25
    // ldrb r1, [r1]
    // cmp r2, r1
    // bne _021EE604
    // mov r0, #0x6a
    // pop {r4, pc}
    // cmp r2, r1
    // ldrb r1, [r4, #0x1f]
    // bls _021EE62E
    // bl ov14_021F2DE8
    // ldrb r1, [r4, #0x1f]
    // add r0, r4, #0
    // bl ov14_021E7930
    // add r1, r0, #0
    // add r0, r4, #0
    // mov r2, #0
    // bl ov14_021E783C
    // ldr r0, [r4, #0x34]
    // mov r1, #0
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_SetButtonInputMode
    // ldr r1, _021EE65C ; =ov14_021E92AC
    // b _021EE650
    // bl ov14_021F2DE8
    // ldrb r1, [r4, #0x1f]
    // add r0, r4, #0
    // bl ov14_021E7930
    // add r1, r0, #0
    // add r0, r4, #0
    // mov r2, #1
    // bl ov14_021E783C
    // ldr r0, [r4, #0x34]
    // mov r1, #0
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_SetButtonInputMode
    // ldr r1, _021EE660 ; =ov14_021E9370
    // add r0, r4, #0
    // mov r2, #0x6a
    // bl ov14_021F0234
    // pop {r4, pc}
    // nop
    // _021EE65C: .word ov14_021E92AC
    // _021EE660: .word ov14_021E9370
    // TODO: decompile
}




void ov14_021EE664(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // add r1, r4, #0
    // mov r2, #2
    // add r1, #0x22
    // strb r2, [r1]
    // bl ov14_021F08BC
    // ldr r1, _021EE680 ; =ov14_021E9234
    // add r0, r4, #0
    // mov r2, #0x6b
    // bl ov14_021F0234
    // pop {r4, pc}
    // _021EE680: .word ov14_021E9234
    // TODO: decompile
}




void ov14_021EE684(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, [r5, #0x34]
    // ldr r4, [r0, #0xc]
    // ldr r0, _021EE6C8 ; =0x000005EA
    // bl PlaySE
    // add r0, r5, #0
    // bl ov14_021E637C
    // add r1, r4, #0
    // add r1, #0xe4
    // add r4, #0xe8
    // ldr r1, [r1]
    // ldr r2, [r4]
    // add r0, r5, #0
    // bl ov14_021E6548
    // add r0, r5, #0
    // bl ov14_021F08F0
    // mov r0, #0x2f
    // ldr r1, [r5, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8094
    // ldr r1, _021EE6CC ; =ov14_021E954C
    // add r0, r5, #0
    // mov r2, #0x6c
    // bl ov14_021F0234
    // pop {r3, r4, r5, pc}
    // nop
    // _021EE6C8: .word 0x000005EA
    // _021EE6CC: .word ov14_021E954C
    // TODO: decompile
}




void ov14_021EE6D0(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r1, #0
    // bl ov14_021F5EB4
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8328
    // ldr r1, _021EE6F4 ; =ov14_021E95B4
    // add r0, r4, #0
    // mov r2, #0x6d
    // bl ov14_021F0234
    // pop {r4, pc}
    // nop
    // _021EE6F4: .word ov14_021E95B4
    // TODO: decompile
}




u32 ov14_021EE6F8(void) {
}




void ov14_021EE728(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, [r5, #0x34]
    // ldr r4, [r0, #0xc]
    // ldr r0, _021EE7B0 ; =0x000005EA
    // bl PlaySE
    // add r0, r5, #0
    // bl ov14_021E637C
    // add r1, r4, #0
    // add r1, #0xe4
    // add r4, #0xe8
    // ldr r1, [r1]
    // ldr r2, [r4]
    // add r0, r5, #0
    // bl ov14_021E6548
    // add r0, r5, #0
    // bl ov14_021F08F0
    // ldr r0, [r5, #0x34]
    // mov r1, #0x28
    // bl ov14_021F6678
    // add r0, r5, #0
    // add r0, #0x21
    // ldrb r1, [r0]
    // cmp r1, #0xff
    // bne _021EE78E
    // mov r1, #0
    // add r0, r5, #0
    // add r2, r1, #0
    // mov r3, #0x27
    // bl ov14_021F685C
    // ldr r0, [r5, #0x34]
    // mov r1, #0
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_SetNextInput
    // ldr r0, [r5, #0x34]
    // mov r1, #1
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_SetButtonInputMode
    // add r0, r5, #0
    // mov r1, #0x1e
    // bl ov14_021E7588
    // b _021EE7AC
    // add r0, r5, #0
    // mov r2, #1
    // mov r3, #0x27
    // bl ov14_021F685C
    // ldr r0, [r5, #0x34]
    // mov r1, #7
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_SetNextInput
    // ldr r0, [r5, #0x34]
    // mov r1, #1
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_SetButtonInputMode
    // mov r0, #0x5b
    // pop {r3, r4, r5, pc}
    // _021EE7B0: .word 0x000005EA
    // TODO: decompile
}




void ov14_021EE7B4(void) {
}




void ov14_021EE7C4(void) {
}




void ov14_021EE7D4(void) {
}




void ov14_021EE7E4(void) {
}




u32 ov14_021EE7F4(void) {
}




void ov14_021EE810(void) {
}




void ov14_021EE820(void) {
}




void ov14_021EE830(void) {
}




void ov14_021EE840(void) {
}




void ov14_021EE850(void) {
}




u32 ov14_021EE860(void) {
}




void ov14_021EE87C(void) {
    // push {r3, r4, r5, lr}
    // add r4, r0, #0
    // bl ov14_021F6A14
    // add r5, r0, #0
    // mov r0, #0
    // mvn r0, r0
    // cmp r5, r0
    // beq _021EE976
    // add r0, r4, #0
    // add r1, r5, #0
    // mov r2, #0xac
    // mov r3, #0
    // bl ov14_021E6070
    // cmp r0, #0
    // beq _021EE8CE
    // ldr r0, _021EEBDC ; =0x000005EB
    // bl PlaySE
    // ldr r2, [r4, #0x34]
    // ldr r1, _021EEBE0 ; =0x000040B8
    // add r0, r2, r1
    // add r1, r1, #4
    // add r1, r2, r1
    // bl System_GetTouchNewCoords
    // add r0, r4, #0
    // add r1, r5, #0
    // bl ov14_021E7588
    // ldr r0, [r4, #0x34]
    // mov r1, #9
    // mov r2, #0
    // bl ov14_021F2A18
    // add r0, r4, #0
    // add r1, r5, #0
    // bl ov14_021F18B0
    // pop {r3, r4, r5, pc}
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8544
    // cmp r0, #1
    // bne _021EE956
    // add r0, r4, #0
    // add r0, #0x21
    // ldrb r5, [r0]
    // ldr r0, [r4, #0x34]
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_GetNextInput
    // add r2, r0, #0
    // ldr r0, [r4, #0x34]
    // add r1, r5, #0
    // bl ov14_021F7AC4
    // ldr r0, [r4, #0x34]
    // add r1, r5, #0
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_SetNextInput
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E84A4
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8248
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E82A8
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8328
    // add r0, r4, #0
    // bl ov14_021F40DC
    // ldr r1, [r4, #0x34]
    // ldr r0, _021EEBE4 ; =0x000088C8
    // ldrh r0, [r1, r0]
    // cmp r0, #0
    // beq _021EE94A
    // mov r0, #0x2f
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E88F8
    // ldr r1, _021EEBE8 ; =ov14_021EA674
    // add r0, r4, #0
    // mov r2, #0x76
    // bl ov14_021F0234
    // pop {r3, r4, r5, pc}
    // ldr r0, [r4, #0x34]
    // lsl r1, r5, #0x18
    // ldr r0, [r0, #0x2c]
    // lsr r1, r1, #0x18
    // bl GridInputHandler_SetNextInput
    // ldr r0, [r4, #0x34]
    // mov r1, #1
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_SetButtonInputMode
    // add r0, r4, #0
    // bl ov14_021E765C
    // mov r0, #0x75
    // pop {r3, r4, r5, pc}
    // add r0, r4, #0
    // bl ov14_021F74B0
    // mov r1, #2
    // add r5, r0, #0
    // mvn r1, r1
    // cmp r5, r1
    // bhi _021EE9BA
    // blo _021EE98A
    // b _021EEB08
    // cmp r5, #0x25
    // bhi _021EE9AE
    // sub r0, #0x1e
    // bmi _021EE9B8
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _021EE99E: ; jump table
    // mov r0, #3
    // mvn r0, r0
    // cmp r5, r0
    // bne _021EE9B8
    // b _021EEB66
    // b _021EEB92
    // add r0, r1, #1
    // cmp r5, r0
    // bhi _021EE9C6
    // bne _021EE9C4
    // b _021EEB54
    // b _021EEB92
    // add r0, r1, #2
    // cmp r5, r0
    // beq _021EEABE
    // b _021EEB92
    // ldr r0, _021EEBEC ; =0x000005DD
    // bl PlaySE
    // add r0, r4, #0
    // bl ov14_021E76B8
    // ldr r0, [r4, #0x34]
    // mov r1, #0xb
    // mov r2, #0
    // bl ov14_021F2A18
    // add r0, r4, #0
    // bl ov14_021F1128
    // pop {r3, r4, r5, pc}
    // ldr r0, _021EEBF0 ; =0x000005DC
    // bl PlaySE
    // add r0, r4, #0
    // bl ov14_021E76B8
    // ldr r0, [r4, #0x34]
    // mov r1, #0xb
    // mov r2, #0
    // bl ov14_021F2A18
    // ldr r0, [r4, #0x34]
    // mov r1, #9
    // mov r2, #0
    // bl ov14_021F2A18
    // ldr r0, [r4, #0x34]
    // mov r1, #0x1e
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_SetNextInput
    // add r0, r4, #0
    // mov r1, #0x75
    // bl ov14_021F028C
    // pop {r3, r4, r5, pc}
    // ldr r0, _021EEBF0 ; =0x000005DC
    // bl PlaySE
    // add r0, r4, #0
    // bl ov14_021E76B8
    // ldr r0, [r4, #0x34]
    // mov r1, #0xb
    // mov r2, #0
    // bl ov14_021F2A18
    // ldr r0, [r4, #0x34]
    // mov r1, #9
    // mov r2, #0
    // bl ov14_021F2A18
    // ldr r0, [r4, #0x34]
    // mov r1, #0x1e
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_SetNextInput
    // add r0, r4, #0
    // mov r1, #0x75
    // bl ov14_021F0314
    // pop {r3, r4, r5, pc}
    // ldr r0, _021EEBF4 ; =0x00000632
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #8
    // mov r2, #0xab
    // bl ov14_021F2270
    // pop {r3, r4, r5, pc}
    // ldr r0, _021EEBF4 ; =0x00000632
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #9
    // mov r2, #0xac
    // bl ov14_021F2330
    // pop {r3, r4, r5, pc}
    // ldr r0, _021EEBEC ; =0x000005DD
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #7
    // mov r2, #0xad
    // bl ov14_021F2270
    // pop {r3, r4, r5, pc}
    // ldr r0, _021EEBF0 ; =0x000005DC
    // bl PlaySE
    // add r0, r4, #0
    // add r0, #0x21
    // ldrb r5, [r0]
    // ldr r0, [r4, #0x34]
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_GetNextInput
    // add r2, r0, #0
    // ldr r0, [r4, #0x34]
    // add r1, r5, #0
    // bl ov14_021F7AC4
    // ldr r0, [r4, #0x34]
    // add r1, r5, #0
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_SetNextInput
    // add r0, r4, #0
    // mov r1, #0xb
    // mov r2, #0xae
    // bl ov14_021F2270
    // pop {r3, r4, r5, pc}
    // ldr r0, [r4, #0x34]
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_GetNextInput
    // cmp r0, #0x1e
    // beq _021EEACC
    // b _021EEBD6
    // ldr r0, _021EEBF8 ; =gSystem
    // ldr r1, [r0, #0x48]
    // mov r0, #0x20
    // tst r0, r1
    // beq _021EEAEC
    // ldr r0, _021EEBF0 ; =0x000005DC
    // bl PlaySE
    // add r0, r4, #0
    // bl ov14_021E76B8
    // add r0, r4, #0
    // mov r1, #0x75
    // bl ov14_021F028C
    // pop {r3, r4, r5, pc}
    // mov r0, #0x10
    // tst r0, r1
    // beq _021EEBD6
    // ldr r0, _021EEBF0 ; =0x000005DC
    // bl PlaySE
    // add r0, r4, #0
    // bl ov14_021E76B8
    // add r0, r4, #0
    // mov r1, #0x75
    // bl ov14_021F0314
    // pop {r3, r4, r5, pc}
    // ldr r0, [r4, #0x34]
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_GetNextInput
    // add r1, r0, #0
    // cmp r1, #0x1e
    // bhs _021EEB1E
    // add r0, r4, #0
    // bl ov14_021E7588
    // b _021EEB2C
    // cmp r1, #0x24
    // beq _021EEB2C
    // cmp r1, #0x25
    // beq _021EEB2C
    // add r0, r4, #0
    // bl ov14_021E765C
    // ldr r0, _021EEBF0 ; =0x000005DC
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #0x76
    // bl ov14_021F0244
    // pop {r3, r4, r5, pc}
    // ldr r0, _021EEBEC ; =0x000005DD
    // bl PlaySE
    // add r0, r4, #0
    // bl ov14_021E765C
    // add r0, r4, #0
    // mov r1, #0xa
    // mov r2, #0x93
    // bl ov14_021F2270
    // pop {r3, r4, r5, pc}
    // ldr r0, _021EEBEC ; =0x000005DD
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #0xa
    // mov r2, #0x94
    // bl ov14_021F2270
    // pop {r3, r4, r5, pc}
    // ldr r0, [r4, #0x34]
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_GetNextInput
    // add r1, r0, #0
    // cmp r1, #0x1e
    // bhs _021EEB7C
    // add r0, r4, #0
    // bl ov14_021E7588
    // b _021EEB8A
    // cmp r1, #0x24
    // beq _021EEB8A
    // cmp r1, #0x25
    // beq _021EEB8A
    // add r0, r4, #0
    // bl ov14_021E765C
    // ldr r0, _021EEBF0 ; =0x000005DC
    // bl PlaySE
    // b _021EEBD6
    // add r0, r4, #0
    // add r1, r5, #0
    // mov r2, #0xac
    // mov r3, #0
    // bl ov14_021E6070
    // cmp r0, #0
    // beq _021EEBD6
    // ldr r0, _021EEBEC ; =0x000005DD
    // bl PlaySE
    // add r0, r4, #0
    // add r1, r5, #0
    // bl ov14_021E7588
    // ldr r0, [r4, #0x34]
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_GetNextInput
    // add r2, r0, #0
    // ldr r0, [r4, #0x34]
    // mov r1, #0x24
    // bl ov14_021F7AC4
    // ldr r0, [r4, #0x34]
    // mov r1, #0x24
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_SetNextInput
    // add r0, r4, #0
    // add r1, r5, #0
    // bl ov14_021F1808
    // pop {r3, r4, r5, pc}
    // mov r0, #0x75
    // pop {r3, r4, r5, pc}
    // nop
    // _021EEBDC: .word 0x000005EB
    // _021EEBE0: .word 0x000040B8
    // _021EEBE4: .word 0x000088C8
    // _021EEBE8: .word ov14_021EA674
    // _021EEBEC: .word 0x000005DD
    // _021EEBF0: .word 0x000005DC
    // _021EEBF4: .word 0x00000632
    // _021EEBF8: .word gSystem
    // TODO: decompile
}




void ov14_021EEBFC(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4, #0x34]
    // mov r1, #0xb
    // bl ov14_021F2A44
    // cmp r0, #1
    // bne _021EEC30
    // add r0, r4, #0
    // bl ov14_021F40DC
    // ldr r0, [r4, #0x34]
    // mov r1, #1
    // bl ov14_021F391C
    // ldr r0, [r4, #0x34]
    // mov r1, #0xb
    // mov r2, #2
    // bl ov14_021F29E4
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E88F8
    // ldr r0, [r4, #0x34]
    // mov r1, #0x25
    // bl ov14_021F6654
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8328
    // add r0, r4, #0
    // add r0, #0x21
    // ldrb r0, [r0]
    // cmp r0, #0x1e
    // bhs _021EEC72
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8248
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E82A8
    // add r0, r4, #0
    // mov r1, #0x81
    // mov r2, #1
    // bl ov14_021F3488
    // b _021EEC7C
    // add r0, r4, #0
    // mov r1, #0x82
    // mov r2, #1
    // bl ov14_021F3488
    // ldr r1, _021EEC88 ; =ov14_021E9450
    // add r0, r4, #0
    // mov r2, #0x7b
    // bl ov14_021F0234
    // pop {r4, pc}
    // _021EEC88: .word ov14_021E9450
    // TODO: decompile
}




void ov14_021EEC8C(void) {
}




void ov14_021EEC9C(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r0, #0x21
    // ldrb r0, [r0]
    // cmp r0, #0x1e
    // blo _021EED0C
    // ldr r1, [r5, #0x34]
    // ldr r0, _021EED20 ; =0x000088C8
    // ldrh r0, [r1, r0]
    // bl ItemIdIsMail
    // cmp r0, #1
    // bne _021EED0C
    // add r0, r5, #0
    // add r0, #0x21
    // ldrb r0, [r0]
    // sub r0, #0x1e
    // lsl r0, r0, #0x10
    // lsr r4, r0, #0x10
    // ldr r0, [r5, #0x34]
    // lsl r1, r4, #0x18
    // ldr r0, [r0, #0x2c]
    // lsr r1, r1, #0x18
    // bl GridInputHandler_SetNextInput
    // ldr r0, [r5, #0x34]
    // add r1, r4, #0
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_GetDpadBox
    // add r1, sp, #0
    // add r1, #1
    // add r2, sp, #0
    // bl DpadMenuBox_GetPosition
    // mov r0, #0x32
    // ldr r1, [r5, #0x34]
    // lsl r0, r0, #4
    // add r2, sp, #0
    // ldr r0, [r1, r0]
    // ldrb r1, [r2, #1]
    // ldrb r2, [r2]
    // bl ManagedSprite_SetPositionXY
    // ldr r0, _021EED24 ; =0x000005F3
    // bl PlaySE
    // add r0, r5, #0
    // mov r1, #4
    // mov r2, #0x25
    // bl ov14_021F68C0
    // mov r0, #0x77
    // str r0, [r5, #0x30]
    // mov r0, #6
    // pop {r3, r4, r5, pc}
    // add r0, r5, #0
    // mov r1, #2
    // mov r2, #0x25
    // bl ov14_021F68C0
    // add r0, r5, #0
    // mov r1, #2
    // bl ov14_021F0254
    // pop {r3, r4, r5, pc}
    // _021EED20: .word 0x000088C8
    // _021EED24: .word 0x000005F3
    // TODO: decompile
}




void ov14_021EED28(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, [r5, #0x34]
    // mov r1, #0xb
    // bl ov14_021F2A04
    // cmp r0, #0
    // bne _021EEDAE
    // add r0, r5, #0
    // add r0, #0x21
    // ldrb r4, [r0]
    // cmp r4, #0x1e
    // blo _021EED48
    // sub r4, #0x1e
    // lsl r0, r4, #0x10
    // lsr r4, r0, #0x10
    // ldr r0, [r5, #0x34]
    // lsl r1, r4, #0x18
    // ldr r0, [r0, #0x2c]
    // lsr r1, r1, #0x18
    // bl GridInputHandler_SetNextInput
    // ldr r0, [r5, #0x34]
    // add r1, r4, #0
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_GetDpadBox
    // add r1, sp, #0
    // add r1, #1
    // add r2, sp, #0
    // bl DpadMenuBox_GetPosition
    // mov r0, #0x32
    // ldr r1, [r5, #0x34]
    // lsl r0, r0, #4
    // add r2, sp, #0
    // ldr r0, [r1, r0]
    // ldrb r1, [r2, #1]
    // ldrb r2, [r2]
    // bl ManagedSprite_SetPositionXY
    // ldr r0, [r5, #0x34]
    // mov r1, #0
    // bl ov14_021F391C
    // ldr r0, [r5, #0x34]
    // mov r1, #0xb
    // mov r2, #0
    // bl ov14_021F2A18
    // add r0, r5, #0
    // mov r1, #3
    // mov r2, #0x25
    // bl ov14_021F68C0
    // add r0, r5, #0
    // mov r1, #0
    // bl ov14_021F5FBC
    // ldr r1, [r5, #0x34]
    // ldr r0, _021EEDB4 ; =0x000088C8
    // mov r2, #0
    // strh r2, [r1, r0]
    // mov r0, #0x77
    // str r0, [r5, #0x30]
    // mov r0, #6
    // pop {r3, r4, r5, pc}
    // mov r0, #0x79
    // pop {r3, r4, r5, pc}
    // nop
    // _021EEDB4: .word 0x000088C8
    // TODO: decompile
}




void ov14_021EEDB8(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r1, r5, #0
    // add r1, #0x21
    // ldrb r4, [r1]
    // cmp r4, #0x1e
    // bhs _021EEDEA
    // mov r0, #0x2f
    // ldr r1, [r5, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8248
    // mov r0, #0x2f
    // ldr r1, [r5, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E82A8
    // add r0, r5, #0
    // mov r1, #0x81
    // mov r2, #1
    // bl ov14_021F3488
    // b _021EEDF8
    // sub r4, #0x1e
    // lsl r1, r4, #0x10
    // lsr r4, r1, #0x10
    // mov r1, #0x82
    // mov r2, #1
    // bl ov14_021F3488
    // mov r0, #0x2f
    // ldr r1, [r5, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8328
    // ldr r0, [r5, #0x34]
    // lsl r1, r4, #0x18
    // ldr r0, [r0, #0x2c]
    // lsr r1, r1, #0x18
    // bl GridInputHandler_SetNextInput
    // ldr r0, [r5, #0x34]
    // add r1, r4, #0
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_GetDpadBox
    // add r1, sp, #0
    // add r1, #1
    // add r2, sp, #0
    // bl DpadMenuBox_GetPosition
    // mov r0, #0x32
    // ldr r1, [r5, #0x34]
    // lsl r0, r0, #4
    // add r2, sp, #0
    // ldr r0, [r1, r0]
    // ldrb r1, [r2, #1]
    // ldrb r2, [r2]
    // bl ManagedSprite_SetPositionXY
    // add r0, r5, #0
    // bl ov14_021F40DC
    // ldr r0, [r5, #0x34]
    // mov r1, #1
    // bl ov14_021F391C
    // ldr r0, [r5, #0x34]
    // mov r1, #0xb
    // mov r2, #2
    // bl ov14_021F29E4
    // mov r0, #0x2f
    // ldr r1, [r5, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E88F8
    // ldr r0, [r5, #0x34]
    // mov r1, #0x25
    // bl ov14_021F6654
    // add r0, r5, #0
    // add r0, #0x21
    // ldrb r0, [r0]
    // cmp r0, #0x1e
    // bhs _021EEE78
    // add r0, r5, #0
    // mov r1, #0x81
    // mov r2, #1
    // bl ov14_021F3488
    // b _021EEE82
    // add r0, r5, #0
    // mov r1, #0x82
    // mov r2, #1
    // bl ov14_021F3488
    // ldr r1, _021EEE90 ; =ov14_021E9450
    // add r0, r5, #0
    // mov r2, #0x7b
    // bl ov14_021F0234
    // pop {r3, r4, r5, pc}
    // nop
    // _021EEE90: .word ov14_021E9450
    // TODO: decompile
}




void ov14_021EEE94(void) {
    ov14_021F2A04(*((u32*)(r0 + 0x34)), 0xb);
    ov14_021F391C(*((u32*)(r4 + 0x34)), 0);
    ov14_021F2A18(*((u32*)(r4 + 0x34)), 0xb, 0);
    ov14_021F2A18(*((u32*)(r4 + 0x34)), 9, 1);
    // add r4, #0x21
    // ldrb r0, [r4]
}




void ov14_021EEED4(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r0, #0x21
    // ldrb r4, [r0]
    // cmp r4, #0x1e
    // blo _021EEEE6
    // sub r4, #0x1e
    // lsl r0, r4, #0x10
    // lsr r4, r0, #0x10
    // ldr r0, [r5, #0x34]
    // lsl r1, r4, #0x18
    // ldr r0, [r0, #0x2c]
    // lsr r1, r1, #0x18
    // bl GridInputHandler_SetNextInput
    // ldr r0, [r5, #0x34]
    // add r1, r4, #0
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_GetDpadBox
    // add r1, sp, #0
    // add r1, #1
    // add r2, sp, #0
    // bl DpadMenuBox_GetPosition
    // mov r0, #0x32
    // ldr r1, [r5, #0x34]
    // lsl r0, r0, #4
    // add r2, sp, #0
    // ldr r0, [r1, r0]
    // ldrb r1, [r2, #1]
    // ldrb r2, [r2]
    // bl ManagedSprite_SetPositionXY
    // ldr r0, _021EEF30 ; =0x000005F3
    // bl PlaySE
    // add r0, r5, #0
    // mov r1, #5
    // mov r2, #0x25
    // bl ov14_021F68C0
    // mov r0, #0x77
    // str r0, [r5, #0x30]
    // mov r0, #6
    // pop {r3, r4, r5, pc}
    // _021EEF30: .word 0x000005F3
    // TODO: decompile
}




void ov14_021EEF34(void) {
    // add r0, #0x21
    // ldrb r4, [r0]
    // sub r4, #0x1e
    GridInputHandler_SetNextInput(*((u32*)(*((u32*)(r0 + 0x34)) + 0x2c)), ((((r4 << 0x10) >> 0x10) << 0x18) >> 0x18));
    GridInputHandler_GetDpadBox(*((u32*)(*((u32*)(r5 + 0x34)) + 0x2c)), r4);
    // add r1, sp, #0
    // add r1, #1
    // add r2, sp, #0
    DpadMenuBox_GetPosition();
    // add r2, sp, #0
    // ldr r0, [r1, r0]
    // ldrb r2, [r2]
    ManagedSprite_SetPositionXY((0x32 << 4), *((u8*)(r2 + 1)));
    ov14_021F6768(r5, *((u16*)(r5 + 0x1c)), 0x25);
    *((u32*)(r5 + 0x30)) = 0x77;
}




void ov14_021EEF8C(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r2, [r5, #0x34]
    // add r0, #0x21
    // ldr r4, [r2, #0xc]
    // ldrb r0, [r0]
    // ldrh r1, [r4]
    // cmp r1, r0
    // beq _021EEFA6
    // ldr r0, _021EF01C ; =0x000088C8
    // ldrh r0, [r2, r0]
    // cmp r0, #0
    // bne _021EEFE2
    // add r0, r5, #0
    // bl ov14_021F1F38
    // ldr r1, [r5, #0x34]
    // ldr r0, _021EF01C ; =0x000088C8
    // ldrh r0, [r1, r0]
    // cmp r0, #0
    // beq _021EEFCA
    // ldr r0, _021EF020 ; =0x000005EA
    // bl PlaySE
    // add r1, r5, #0
    // add r1, #0x21
    // ldrb r1, [r1]
    // ldr r0, [r5, #0x34]
    // mov r2, #0
    // bl ov14_021F34C8
    // ldr r0, [r5, #0x34]
    // mov r1, #0x24
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_SetNextInput
    // ldr r0, [r5, #0x34]
    // mov r1, #1
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_SetButtonInputMode
    // mov r0, #0x75
    // pop {r3, r4, r5, pc}
    // ldr r0, _021EF020 ; =0x000005EA
    // bl PlaySE
    // ldrh r1, [r4]
    // ldr r0, [r5, #0x34]
    // mov r2, #0
    // bl ov14_021F34C8
    // add r1, r5, #0
    // add r1, #0x21
    // ldrb r1, [r1]
    // ldr r0, [r5, #0x34]
    // mov r2, #1
    // bl ov14_021F34C8
    // add r0, r5, #0
    // bl ov14_021F40DC
    // ldr r0, [r5, #0x34]
    // mov r1, #1
    // bl ov14_021F391C
    // ldr r0, [r5, #0x34]
    // mov r1, #0xb
    // mov r2, #2
    // bl ov14_021F29E4
    // mov r0, #0x7f
    // pop {r3, r4, r5, pc}
    // _021EF01C: .word 0x000088C8
    // _021EF020: .word 0x000005EA
    // TODO: decompile
}




void ov14_021EF024(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // ldr r0, [r5, #0x34]
    // mov r1, #0xb
    // bl ov14_021F2A04
    // cmp r0, #1
    // bne _021EF038
    // mov r0, #0x7f
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [r5, #0x34]
    // mov r1, #0
    // bl ov14_021F391C
    // ldr r0, [r5, #0x34]
    // mov r1, #0xb
    // mov r2, #0
    // bl ov14_021F2A18
    // ldr r0, [r5, #0x34]
    // mov r2, #6
    // ldr r4, [r0, #0xc]
    // add r0, r5, #0
    // ldrh r1, [r4]
    // mov r3, #0
    // bl ov14_021E6070
    // lsl r0, r0, #0x10
    // lsr r7, r0, #0x10
    // ldrh r1, [r4]
    // ldr r6, [r5, #0x34]
    // ldr r3, _021EF17C ; =0x000088C8
    // add r0, r5, #0
    // mov r2, #6
    // add r3, r6, r3
    // bl ov14_021E6094
    // ldrb r1, [r5, #0x1f]
    // ldrh r2, [r4]
    // add r0, r5, #0
    // bl ov14_021E60C0
    // bl ov14_021E64D0
    // cmp r0, #1
    // bne _021EF092
    // ldrh r2, [r4]
    // ldr r3, [r5, #0x34]
    // ldrb r1, [r5, #0x1f]
    // add r6, r3, r2
    // ldr r3, _021EF180 ; =0x00004094
    // add r0, r5, #0
    // ldrb r3, [r6, r3]
    // bl ov14_021F2ED0
    // ldrh r1, [r4]
    // add r0, r5, #0
    // bl ov14_021E7588
    // add r1, r5, #0
    // ldr r0, [r5, #0x34]
    // ldr r3, _021EF17C ; =0x000088C8
    // add r1, #0x21
    // strh r7, [r0, r3]
    // ldr r6, [r5, #0x34]
    // ldrb r1, [r1]
    // add r0, r5, #0
    // mov r2, #6
    // add r3, r6, r3
    // bl ov14_021E6094
    // add r2, r5, #0
    // add r2, #0x21
    // ldrb r1, [r5, #0x1f]
    // ldrb r2, [r2]
    // add r0, r5, #0
    // bl ov14_021E60C0
    // bl ov14_021E64D0
    // cmp r0, #1
    // bne _021EF0DE
    // add r0, r5, #0
    // add r0, #0x21
    // ldrb r2, [r0]
    // ldr r3, [r5, #0x34]
    // ldrb r1, [r5, #0x1f]
    // add r6, r3, r2
    // ldr r3, _021EF180 ; =0x00004094
    // add r0, r5, #0
    // ldrb r3, [r6, r3]
    // bl ov14_021F2ED0
    // ldr r1, [r5, #0x34]
    // ldr r0, _021EF17C ; =0x000088C8
    // ldrh r0, [r1, r0]
    // cmp r0, #0
    // bne _021EF13E
    // ldrh r1, [r4]
    // add r0, r5, #0
    // add r0, #0x21
    // strb r1, [r0]
    // add r0, r5, #0
    // bl ov14_021F1F38
    // mov r0, #0x2f
    // ldr r1, [r5, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8248
    // mov r0, #0x2f
    // ldr r1, [r5, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E82A8
    // mov r0, #0x2f
    // ldr r1, [r5, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8328
    // add r1, r5, #0
    // ldr r0, [r5, #0x34]
    // add r1, #0x21
    // ldrb r1, [r1]
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_SetNextInput
    // ldr r0, [r5, #0x34]
    // mov r1, #1
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_SetButtonInputMode
    // ldr r1, _021EF184 ; =ov14_021E94BC
    // add r0, r5, #0
    // mov r2, #0x75
    // bl ov14_021F0234
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, _021EF188 ; =0x000005EB
    // bl PlaySE
    // ldr r0, [r5, #0x34]
    // ldr r1, _021EF17C ; =0x000088C8
    // ldrh r1, [r0, r1]
    // bl ov14_021F3844
    // ldr r0, [r5, #0x34]
    // mov r1, #1
    // bl ov14_021F391C
    // ldr r0, [r5, #0x34]
    // mov r1, #0xb
    // mov r2, #1
    // bl ov14_021F29E4
    // ldr r0, [r5, #0x34]
    // mov r1, #0xb
    // mov r2, #1
    // bl ov14_021F2A18
    // ldr r0, [r5, #0x34]
    // bl ov14_021F39D0
    // ldr r1, _021EF18C ; =ov14_021EA728
    // add r0, r5, #0
    // mov r2, #0x80
    // bl ov14_021F0234
    // pop {r3, r4, r5, r6, r7, pc}
    // _021EF17C: .word 0x000088C8
    // _021EF180: .word 0x00004094
    // _021EF184: .word ov14_021E94BC
    // _021EF188: .word 0x000005EB
    // _021EF18C: .word ov14_021EA728
    // TODO: decompile
}




void ov14_021EF190(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, [r5, #0x34]
    // mov r2, #0
    // ldr r4, [r0, #0xc]
    // ldrh r1, [r4]
    // bl ov14_021F34C8
    // ldr r0, _021EF1E8 ; =0x000005EA
    // bl PlaySE
    // add r0, r5, #0
    // bl ov14_021F40DC
    // ldr r0, [r5, #0x34]
    // mov r1, #1
    // bl ov14_021F391C
    // ldr r0, [r5, #0x34]
    // mov r1, #0xb
    // mov r2, #2
    // bl ov14_021F29E4
    // add r1, r5, #0
    // ldr r0, [r5, #0x34]
    // add r1, #0x21
    // ldrb r1, [r1]
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_SetNextInput
    // ldr r0, [r5, #0x34]
    // mov r1, #1
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_SetButtonInputMode
    // add r0, r5, #0
    // ldrh r1, [r4]
    // add r0, #0x21
    // strb r1, [r0]
    // add r0, r5, #0
    // bl ov14_021F1F38
    // mov r0, #0x81
    // pop {r3, r4, r5, pc}
    // _021EF1E8: .word 0x000005EA
    // TODO: decompile
}




void ov14_021EF1EC(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4, #0x34]
    // mov r1, #0xb
    // bl ov14_021F2A04
    // cmp r0, #1
    // bne _021EF200
    // mov r0, #0x81
    // pop {r4, pc}
    // ldr r0, [r4, #0x34]
    // mov r1, #0
    // bl ov14_021F391C
    // ldr r0, [r4, #0x34]
    // mov r1, #0xb
    // mov r2, #0
    // bl ov14_021F2A18
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8248
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E82A8
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8328
    // ldr r1, _021EF244 ; =ov14_021E94BC
    // add r0, r4, #0
    // mov r2, #0x75
    // bl ov14_021F0234
    // pop {r4, pc}
    // nop
    // _021EF244: .word ov14_021E94BC
    // TODO: decompile
}




void ov14_021EF248(void) {
    // push {r3, r4, r5, lr}
    // add r4, r0, #0
    // bl ov14_021F6A34
    // add r5, r0, #0
    // mov r0, #0
    // mvn r0, r0
    // cmp r5, r0
    // beq _021EF2E2
    // add r1, r5, #0
    // add r0, r4, #0
    // add r1, #0x1e
    // mov r2, #0xac
    // mov r3, #0
    // bl ov14_021E6070
    // cmp r0, #0
    // beq _021EF28C
    // add r1, r5, #0
    // add r0, r4, #0
    // add r1, #0x1e
    // bl ov14_021E7588
    // ldr r0, [r4, #0x34]
    // mov r1, #9
    // mov r2, #0
    // bl ov14_021F2A18
    // add r5, #0x1e
    // add r0, r4, #0
    // add r1, r5, #0
    // bl ov14_021F19F0
    // pop {r3, r4, r5, pc}
    // add r0, r4, #0
    // bl ov14_021E765C
    // ldr r0, [r4, #0x34]
    // add r5, #0x1e
    // lsl r1, r5, #0x18
    // ldr r0, [r0, #0x2c]
    // lsr r1, r1, #0x18
    // bl GridInputHandler_SetNextInput
    // ldr r0, [r4, #0x34]
    // mov r1, #1
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_SetButtonInputMode
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E85E4
    // cmp r0, #1
    // bne _021EF2C4
    // add r0, r4, #0
    // mov r1, #0x82
    // bl ov14_021F0EE8
    // pop {r3, r4, r5, pc}
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8648
    // cmp r0, #1
    // bne _021EF2DE
    // add r0, r4, #0
    // mov r1, #0x82
    // bl ov14_021F0D34
    // pop {r3, r4, r5, pc}
    // mov r0, #0x82
    // pop {r3, r4, r5, pc}
    // bl ov14_021F6A14
    // add r5, r0, #0
    // mov r0, #0
    // mvn r0, r0
    // cmp r5, r0
    // beq _021EF370
    // add r0, r4, #0
    // add r1, r5, #0
    // mov r2, #0xac
    // mov r3, #0
    // bl ov14_021E6070
    // cmp r0, #0
    // beq _021EF31C
    // add r0, r4, #0
    // add r1, r5, #0
    // bl ov14_021E7588
    // ldr r0, [r4, #0x34]
    // mov r1, #9
    // mov r2, #0
    // bl ov14_021F2A18
    // add r0, r4, #0
    // add r1, r5, #0
    // bl ov14_021F19F0
    // pop {r3, r4, r5, pc}
    // add r0, r4, #0
    // bl ov14_021E765C
    // ldr r0, [r4, #0x34]
    // lsl r1, r5, #0x18
    // ldr r0, [r0, #0x2c]
    // lsr r1, r1, #0x18
    // bl GridInputHandler_SetNextInput
    // ldr r0, [r4, #0x34]
    // mov r1, #1
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_SetButtonInputMode
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E85E4
    // cmp r0, #1
    // bne _021EF352
    // add r0, r4, #0
    // mov r1, #0x82
    // bl ov14_021F0EE8
    // pop {r3, r4, r5, pc}
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8648
    // cmp r0, #1
    // bne _021EF36C
    // add r0, r4, #0
    // mov r1, #0x82
    // bl ov14_021F0D34
    // pop {r3, r4, r5, pc}
    // mov r0, #0x82
    // pop {r3, r4, r5, pc}
    // add r0, r4, #0
    // bl ov14_021F7B7C
    // cmp r0, #1
    // bne _021EF3B8
    // ldr r0, [r4, #0x34]
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_GetNextInput
    // add r5, r0, #0
    // add r0, r4, #0
    // add r1, r5, #0
    // mov r2, #0xac
    // mov r3, #0
    // bl ov14_021E6070
    // cmp r0, #0
    // beq _021EF3B4
    // ldr r0, _021EF6C8 ; =0x000005DD
    // bl PlaySE
    // add r0, r4, #0
    // add r0, #0x21
    // strb r5, [r0]
    // add r0, r4, #0
    // mov r1, #1
    // add r0, #0x26
    // strb r1, [r0]
    // add r0, r4, #0
    // mov r1, #0xf
    // mov r2, #0x97
    // bl ov14_021F2330
    // pop {r3, r4, r5, pc}
    // mov r0, #0x82
    // pop {r3, r4, r5, pc}
    // add r0, r4, #0
    // bl ov14_021F70C0
    // mov r1, #2
    // add r5, r0, #0
    // mvn r1, r1
    // cmp r5, r1
    // bhi _021EF3FE
    // blo _021EF3CC
    // b _021EF5A6
    // cmp r5, #0x2d
    // bhi _021EF3F4
    // sub r0, #0x24
    // bmi _021EF3FC
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _021EF3E0: ; jump table
    // mov r0, #3
    // mvn r0, r0
    // cmp r5, r0
    // beq _021EF410
    // b _021EF6A2
    // add r0, r1, #1
    // cmp r5, r0
    // bhi _021EF40A
    // bne _021EF408
    // b _021EF64C
    // b _021EF6A2
    // add r0, r1, #2
    // cmp r5, r0
    // bne _021EF412
    // b _021EF6C4
    // b _021EF6A2
    // ldr r0, _021EF6C8 ; =0x000005DD
    // bl PlaySE
    // add r0, r4, #0
    // bl ov14_021E76B8
    // add r0, r4, #0
    // mov r1, #0
    // bl ov14_021F0D58
    // pop {r3, r4, r5, pc}
    // ldr r0, _021EF6C8 ; =0x000005DD
    // bl PlaySE
    // add r0, r4, #0
    // bl ov14_021E76B8
    // add r0, r4, #0
    // mov r1, #1
    // bl ov14_021F0D58
    // pop {r3, r4, r5, pc}
    // ldr r0, _021EF6C8 ; =0x000005DD
    // bl PlaySE
    // add r0, r4, #0
    // bl ov14_021E76B8
    // add r0, r4, #0
    // mov r1, #2
    // bl ov14_021F0D58
    // pop {r3, r4, r5, pc}
    // ldr r0, _021EF6C8 ; =0x000005DD
    // bl PlaySE
    // add r0, r4, #0
    // bl ov14_021E76B8
    // add r0, r4, #0
    // mov r1, #3
    // bl ov14_021F0D58
    // pop {r3, r4, r5, pc}
    // ldr r0, _021EF6C8 ; =0x000005DD
    // bl PlaySE
    // add r0, r4, #0
    // bl ov14_021E76B8
    // add r0, r4, #0
    // mov r1, #4
    // bl ov14_021F0D58
    // pop {r3, r4, r5, pc}
    // ldr r0, _021EF6C8 ; =0x000005DD
    // bl PlaySE
    // add r0, r4, #0
    // bl ov14_021E76B8
    // add r0, r4, #0
    // mov r1, #5
    // bl ov14_021F0D58
    // pop {r3, r4, r5, pc}
    // ldr r0, _021EF6CC ; =0x000005DC
    // bl PlaySE
    // add r0, r4, #0
    // bl ov14_021E76B8
    // mov r1, #0
    // add r0, r4, #0
    // mvn r1, r1
    // bl ov14_021F1004
    // add r0, r4, #0
    // add r0, #0x25
    // ldrb r0, [r0]
    // mov r1, #6
    // bl _s32_div_f
    // ldr r0, [r4, #0x34]
    // add r1, #0x25
    // lsl r1, r1, #0x18
    // ldr r0, [r0, #0x2c]
    // lsr r1, r1, #0x18
    // bl GridInputHandler_SetNextInput
    // ldr r0, [r4, #0x34]
    // mov r1, #1
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_SetButtonInputMode
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E85E4
    // cmp r0, #1
    // bne _021EF4EC
    // add r0, r4, #0
    // mov r1, #0x82
    // bl ov14_021F0EE8
    // pop {r3, r4, r5, pc}
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8648
    // cmp r0, #1
    // bne _021EF506
    // add r0, r4, #0
    // mov r1, #0x82
    // bl ov14_021F0D34
    // pop {r3, r4, r5, pc}
    // mov r0, #0x82
    // pop {r3, r4, r5, pc}
    // ldr r0, _021EF6CC ; =0x000005DC
    // bl PlaySE
    // add r0, r4, #0
    // bl ov14_021E76B8
    // add r0, r4, #0
    // mov r1, #1
    // bl ov14_021F1004
    // add r0, r4, #0
    // add r0, #0x25
    // ldrb r0, [r0]
    // mov r1, #6
    // bl _s32_div_f
    // ldr r0, [r4, #0x34]
    // add r1, #0x25
    // lsl r1, r1, #0x18
    // ldr r0, [r0, #0x2c]
    // lsr r1, r1, #0x18
    // bl GridInputHandler_SetNextInput
    // ldr r0, [r4, #0x34]
    // mov r1, #1
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_SetButtonInputMode
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E85E4
    // cmp r0, #1
    // bne _021EF55C
    // add r0, r4, #0
    // mov r1, #0x82
    // bl ov14_021F0EE8
    // pop {r3, r4, r5, pc}
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8648
    // cmp r0, #1
    // bne _021EF576
    // add r0, r4, #0
    // mov r1, #0x82
    // bl ov14_021F0D34
    // pop {r3, r4, r5, pc}
    // mov r0, #0x82
    // pop {r3, r4, r5, pc}
    // ldr r0, _021EF6CC ; =0x000005DC
    // bl PlaySE
    // add r0, r4, #0
    // add r0, #0x25
    // ldrb r0, [r0]
    // mov r1, #6
    // bl _s32_div_f
    // ldr r0, [r4, #0x34]
    // add r1, #0x25
    // lsl r1, r1, #0x18
    // ldr r0, [r0, #0x2c]
    // lsr r1, r1, #0x18
    // bl GridInputHandler_SetNextInput
    // add r0, r4, #0
    // mov r1, #0xe
    // mov r2, #0xaf
    // bl ov14_021F2270
    // pop {r3, r4, r5, pc}
    // ldr r0, [r4, #0x34]
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_GetNextInput
    // add r1, r0, #0
    // cmp r1, #0x24
    // bhs _021EF600
    // add r0, r4, #0
    // bl ov14_021E7588
    // cmp r0, #1
    // ldr r1, [r4, #0x34]
    // bne _021EF5E4
    // mov r0, #0x2f
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8648
    // cmp r0, #0
    // bne _021EF622
    // add r0, r4, #0
    // mov r1, #0
    // bl ov14_021F6408
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8620
    // b _021EF622
    // mov r0, #0x2f
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8648
    // cmp r0, #1
    // bne _021EF622
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8634
    // b _021EF622
    // add r0, r4, #0
    // bl ov14_021E765C
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8648
    // cmp r0, #1
    // bne _021EF622
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8634
    // ldr r0, _021EF6CC ; =0x000005DC
    // bl PlaySE
    // ldr r0, [r4, #0x34]
    // ldr r0, [r0, #8]
    // cmp r0, #0
    // beq _021EF6C4
    // add r0, r4, #0
    // mov r1, #0x83
    // bl ov14_021F0244
    // pop {r3, r4, r5, pc}
    // ldr r0, _021EF6D0 ; =0x00000633
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #1
    // mov r2, #0xa1
    // bl ov14_021F2490
    // pop {r3, r4, r5, pc}
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E85E4
    // cmp r0, #0
    // bne _021EF66E
    // ldr r0, _021EF6D0 ; =0x00000633
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #1
    // mov r2, #0xa1
    // bl ov14_021F2490
    // pop {r3, r4, r5, pc}
    // ldr r0, _021EF6CC ; =0x000005DC
    // bl PlaySE
    // add r0, r4, #0
    // add r0, #0x25
    // ldrb r0, [r0]
    // mov r1, #6
    // bl _s32_div_f
    // ldr r0, [r4, #0x34]
    // add r1, #0x25
    // lsl r1, r1, #0x18
    // ldr r0, [r0, #0x2c]
    // lsr r1, r1, #0x18
    // bl GridInputHandler_SetNextInput
    // ldr r0, [r4, #0x34]
    // mov r1, #1
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_SetButtonInputMode
    // add r0, r4, #0
    // mov r1, #0x82
    // bl ov14_021F0EE8
    // pop {r3, r4, r5, pc}
    // add r0, r4, #0
    // add r1, r5, #0
    // mov r2, #0xac
    // mov r3, #0
    // bl ov14_021E6070
    // cmp r0, #0
    // beq _021EF6C4
    // add r0, r4, #0
    // add r1, r5, #0
    // bl ov14_021E7588
    // add r0, r4, #0
    // add r1, r5, #0
    // bl ov14_021F1B4C
    // pop {r3, r4, r5, pc}
    // mov r0, #0x82
    // pop {r3, r4, r5, pc}
    // _021EF6C8: .word 0x000005DD
    // _021EF6CC: .word 0x000005DC
    // _021EF6D0: .word 0x00000633
    // TODO: decompile
}




void ov14_021EF6D4(void) {
}




void ov14_021EF6E4(void) {
    ov14_021F40DC();
    // ldr r0, [r1, r0]
    ov14_021E88F8((0x2f << 4), *((u32*)(r4 + 0x34)));
}




void ov14_021EF6FC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // ldr r1, [r5, #0x34]
    // mov r0, #0x2f
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // ldr r4, [r1, #0xc]
    // mov r1, #0x10
    // bl sub_020199E4
    // cmp r0, #0
    // beq _021EF718
    // mov r0, #0x85
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r5, #0
    // add r0, #0x21
    // ldrh r1, [r4]
    // ldrb r0, [r0]
    // cmp r1, r0
    // bne _021EF784
    // add r0, r5, #0
    // ldrh r4, [r4, #2]
    // bl ov14_021F1F38
    // add r1, r5, #0
    // add r1, #0x21
    // ldrb r1, [r1]
    // ldr r0, [r5, #0x34]
    // mov r2, #0
    // bl ov14_021F34C8
    // add r1, r5, #0
    // ldr r0, [r5, #0x34]
    // add r1, #0x21
    // ldrb r1, [r1]
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_SetNextInput
    // ldr r1, [r5, #0x34]
    // ldr r0, _021EF898 ; =0x000088C8
    // ldrh r0, [r1, r0]
    // bl ItemIdIsMail
    // cmp r0, #1
    // bne _021EF776
    // add r0, r5, #0
    // add r0, #0x21
    // ldrb r0, [r0]
    // cmp r4, r0
    // beq _021EF776
    // ldr r0, _021EF89C ; =0x000005F3
    // bl PlaySE
    // add r0, r5, #0
    // mov r1, #0x25
    // bl ov14_021F6730
    // mov r0, #0x87
    // str r0, [r5, #0x30]
    // mov r0, #6
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [r5, #0x34]
    // mov r1, #1
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_SetButtonInputMode
    // mov r0, #0x82
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [r5, #0x34]
    // mov r2, #0
    // bl ov14_021F34C8
    // add r1, r5, #0
    // add r1, #0x21
    // ldrb r1, [r1]
    // ldr r0, [r5, #0x34]
    // mov r2, #1
    // bl ov14_021F34C8
    // ldrh r1, [r4]
    // add r0, r5, #0
    // mov r2, #6
    // mov r3, #0
    // bl ov14_021E6070
    // lsl r0, r0, #0x10
    // lsr r7, r0, #0x10
    // ldrh r1, [r4]
    // ldr r6, [r5, #0x34]
    // ldr r3, _021EF898 ; =0x000088C8
    // add r0, r5, #0
    // mov r2, #6
    // add r3, r6, r3
    // bl ov14_021E6094
    // ldrb r1, [r5, #0x1f]
    // ldrh r2, [r4]
    // add r0, r5, #0
    // bl ov14_021E60C0
    // bl ov14_021E64D0
    // cmp r0, #1
    // bne _021EF7DE
    // ldrh r2, [r4]
    // ldr r3, [r5, #0x34]
    // ldrb r1, [r5, #0x1f]
    // add r6, r3, r2
    // ldr r3, _021EF8A0 ; =0x00004094
    // add r0, r5, #0
    // ldrb r3, [r6, r3]
    // bl ov14_021F2ED0
    // ldrh r1, [r4]
    // add r0, r5, #0
    // bl ov14_021E7588
    // ldrh r1, [r4]
    // ldr r0, [r5, #0x34]
    // lsl r1, r1, #0x18
    // ldr r0, [r0, #0x2c]
    // lsr r1, r1, #0x18
    // bl GridInputHandler_SetNextInput
    // add r1, r5, #0
    // ldr r0, [r5, #0x34]
    // ldr r3, _021EF898 ; =0x000088C8
    // add r1, #0x21
    // strh r7, [r0, r3]
    // ldr r6, [r5, #0x34]
    // ldrb r1, [r1]
    // add r0, r5, #0
    // mov r2, #6
    // add r3, r6, r3
    // bl ov14_021E6094
    // add r2, r5, #0
    // add r2, #0x21
    // ldrb r1, [r5, #0x1f]
    // ldrb r2, [r2]
    // add r0, r5, #0
    // bl ov14_021E60C0
    // bl ov14_021E64D0
    // cmp r0, #1
    // bne _021EF838
    // add r0, r5, #0
    // add r0, #0x21
    // ldrb r2, [r0]
    // ldr r3, [r5, #0x34]
    // ldrb r1, [r5, #0x1f]
    // add r6, r3, r2
    // ldr r3, _021EF8A0 ; =0x00004094
    // add r0, r5, #0
    // ldrb r3, [r6, r3]
    // bl ov14_021F2ED0
    // ldr r0, [r5, #0x34]
    // ldr r1, _021EF898 ; =0x000088C8
    // ldrh r1, [r0, r1]
    // cmp r1, #0
    // bne _021EF85E
    // ldrh r1, [r4]
    // add r0, r5, #0
    // add r0, #0x21
    // strb r1, [r0]
    // add r0, r5, #0
    // bl ov14_021F1F38
    // ldr r0, [r5, #0x34]
    // mov r1, #1
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_SetButtonInputMode
    // mov r0, #0x82
    // pop {r3, r4, r5, r6, r7, pc}
    // bl ov14_021F3844
    // ldr r0, [r5, #0x34]
    // mov r1, #1
    // bl ov14_021F391C
    // ldr r0, [r5, #0x34]
    // mov r1, #0xb
    // mov r2, #1
    // bl ov14_021F29E4
    // ldr r0, [r5, #0x34]
    // mov r1, #0xb
    // mov r2, #1
    // bl ov14_021F2A18
    // ldr r0, [r5, #0x34]
    // bl ov14_021F39D0
    // ldr r0, _021EF8A4 ; =0x000005EB
    // bl PlaySE
    // ldr r1, _021EF8A8 ; =ov14_021EA928
    // add r0, r5, #0
    // mov r2, #0x86
    // bl ov14_021F0234
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021EF898: .word 0x000088C8
    // _021EF89C: .word 0x000005F3
    // _021EF8A0: .word 0x00004094
    // _021EF8A4: .word 0x000005EB
    // _021EF8A8: .word ov14_021EA928
    // TODO: decompile
}




void ov14_021EF8AC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // ldr r0, [r5, #0x34]
    // mov r2, #0
    // ldr r7, [r0, #0xc]
    // ldrh r1, [r7]
    // bl ov14_021F34C8
    // add r0, r5, #0
    // add r0, #0x21
    // ldrb r6, [r0]
    // add r0, r5, #0
    // ldrh r4, [r7, #2]
    // ldrh r1, [r7]
    // add r0, #0x21
    // strb r1, [r0]
    // add r0, r5, #0
    // bl ov14_021F1F38
    // ldr r3, [r5, #0x34]
    // ldr r1, _021EF918 ; =0x000088C8
    // mov r2, #0
    // ldrh r0, [r3, r1]
    // strh r2, [r3, r1]
    // bl ItemIdIsMail
    // cmp r0, #1
    // bne _021EF908
    // cmp r4, r6
    // beq _021EF908
    // ldr r0, _021EF91C ; =0x000005F3
    // bl PlaySE
    // ldr r0, [r5, #0x34]
    // mov r1, #0
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_SetButtonInputMode
    // add r0, r5, #0
    // mov r1, #0x25
    // bl ov14_021F6730
    // mov r0, #0x87
    // str r0, [r5, #0x30]
    // mov r0, #6
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [r5, #0x34]
    // mov r1, #1
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_SetButtonInputMode
    // mov r0, #0x82
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021EF918: .word 0x000088C8
    // _021EF91C: .word 0x000005F3
    // TODO: decompile
}




u32 ov14_021EF920(void) {
}




void ov14_021EF93C(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // bl ov14_021F7A50
    // add r4, r0, #0
    // ldr r0, [r5, #0x34]
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_IsButtonInputMode
    // cmp r0, #0
    // bne _021EF956
    // mov r4, #1
    // mvn r4, r4
    // cmp r4, #0x24
    // bhi _021EF95E
    // beq _021EF990
    // b _021EF9A0
    // add r0, r4, #4
    // cmp r0, #3
    // bhi _021EF9A0
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _021EF970: ; jump table
    // ldr r0, _021EF9B4 ; =0x000005DC
    // bl PlaySE
    // add r0, r5, #0
    // mov r1, #0x89
    // bl ov14_021F0244
    // pop {r3, r4, r5, pc}
    // ldr r0, _021EF9B4 ; =0x000005DC
    // bl PlaySE
    // b _021EF9B0
    // ldr r0, _021EF9B8 ; =0x000005EA
    // bl PlaySE
    // add r0, r5, #0
    // mov r1, #0xff
    // bl ov14_021F1C4C
    // pop {r3, r4, r5, pc}
    // ldr r0, _021EF9B8 ; =0x000005EA
    // bl PlaySE
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov14_021F1C4C
    // pop {r3, r4, r5, pc}
    // mov r0, #0x88
    // pop {r3, r4, r5, pc}
    // _021EF9B4: .word 0x000005DC
    // _021EF9B8: .word 0x000005EA
    // TODO: decompile
}




void ov14_021EF9BC(void) {
}




void ov14_021EF9CC(void) {
    // push {r4, r5, r6, lr}
    // add r4, r0, #0
    // ldr r0, [r4, #0x34]
    // ldr r1, _021EFB48 ; =0x0000044C
    // mov r2, #0
    // ldrb r1, [r0, r1]
    // bl ov14_021F34C8
    // ldr r0, [r4, #0x34]
    // ldr r2, _021EFB48 ; =0x0000044C
    // ldr r3, _021EFB4C ; =0x000088CA
    // ldrb r1, [r0, r2]
    // ldrh r5, [r0, r3]
    // cmp r1, r5
    // bne _021EFA12
    // mov r5, #0
    // sub r1, r3, #2
    // strh r5, [r0, r1]
    // ldr r1, [r4, #0x34]
    // add r0, r4, #0
    // ldrb r1, [r1, r2]
    // bl ov14_021E7588
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8620
    // ldr r1, _021EFB50 ; =ov14_021E9970
    // add r0, r4, #0
    // mov r2, #0x82
    // bl ov14_021F0234
    // pop {r4, r5, r6, pc}
    // add r0, r4, #0
    // mov r2, #6
    // mov r3, #0
    // bl ov14_021E6070
    // lsl r0, r0, #0x10
    // lsr r5, r0, #0x10
    // ldr r3, [r4, #0x34]
    // ldr r1, _021EFB48 ; =0x0000044C
    // ldr r6, _021EFB54 ; =0x000088C8
    // ldrb r1, [r3, r1]
    // add r0, r4, #0
    // mov r2, #6
    // add r3, r3, r6
    // bl ov14_021E6094
    // ldr r3, [r4, #0x34]
    // ldr r2, _021EFB48 ; =0x0000044C
    // ldrb r1, [r4, #0x1f]
    // ldrb r2, [r3, r2]
    // add r0, r4, #0
    // bl ov14_021E60C0
    // bl ov14_021E64D0
    // cmp r0, #1
    // bne _021EFA5C
    // ldr r3, [r4, #0x34]
    // ldr r0, _021EFB48 ; =0x0000044C
    // ldrb r1, [r4, #0x1f]
    // ldrb r2, [r3, r0]
    // add r0, r4, #0
    // add r6, r3, r2
    // ldr r3, _021EFB58 ; =0x00004094
    // ldrb r3, [r6, r3]
    // bl ov14_021F2ED0
    // ldr r2, [r4, #0x34]
    // ldr r1, _021EFB48 ; =0x0000044C
    // add r0, r4, #0
    // ldrb r1, [r2, r1]
    // bl ov14_021E7588
    // ldr r3, _021EFB54 ; =0x000088C8
    // ldr r0, [r4, #0x34]
    // add r1, r3, #2
    // strh r5, [r0, r3]
    // ldr r5, [r4, #0x34]
    // add r0, r4, #0
    // ldrh r1, [r5, r1]
    // mov r2, #6
    // add r3, r5, r3
    // bl ov14_021E6094
    // ldr r3, [r4, #0x34]
    // ldr r2, _021EFB4C ; =0x000088CA
    // ldrb r1, [r4, #0x1f]
    // ldrh r2, [r3, r2]
    // add r0, r4, #0
    // bl ov14_021E60C0
    // bl ov14_021E64D0
    // cmp r0, #1
    // bne _021EFAA8
    // ldr r3, [r4, #0x34]
    // ldr r0, _021EFB4C ; =0x000088CA
    // ldrb r1, [r4, #0x1f]
    // ldrh r2, [r3, r0]
    // add r0, r4, #0
    // add r5, r3, r2
    // ldr r3, _021EFB58 ; =0x00004094
    // ldrb r3, [r5, r3]
    // bl ov14_021F2ED0
    // ldr r2, [r4, #0x34]
    // ldr r0, _021EFB54 ; =0x000088C8
    // ldrh r0, [r2, r0]
    // cmp r0, #0
    // bne _021EFAC8
    // mov r0, #0x2f
    // lsl r0, r0, #4
    // ldr r0, [r2, r0]
    // bl ov14_021E8620
    // ldr r1, _021EFB50 ; =ov14_021E9970
    // add r0, r4, #0
    // mov r2, #0x82
    // bl ov14_021F0234
    // pop {r4, r5, r6, pc}
    // ldr r0, _021EFB5C ; =0x0000044B
    // mov r1, #1
    // strb r1, [r2, r0]
    // ldr r0, [r4, #0x34]
    // mov r1, #0xb
    // mov r2, #0
    // bl ov14_021F2A18
    // ldr r0, [r4, #0x34]
    // ldr r1, _021EFB48 ; =0x0000044C
    // mov r2, #2
    // ldrb r1, [r0, r1]
    // bl ov14_021F39A0
    // ldr r0, [r4, #0x34]
    // ldr r1, _021EFB54 ; =0x000088C8
    // ldrh r1, [r0, r1]
    // bl ov14_021F3844
    // ldr r2, [r4, #0x34]
    // ldr r1, _021EFB54 ; =0x000088C8
    // add r0, r4, #0
    // ldrh r1, [r2, r1]
    // bl ov14_021F5564
    // add r5, r0, #0
    // mov r0, #0x2f
    // ldr r3, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r3, r0]
    // add r3, #0x30
    // lsl r2, r5, #4
    // mov r1, #0x10
    // add r2, r3, r2
    // bl sub_02019A60
    // mov r0, #0x2f
    // add r3, r5, #1
    // ldr r2, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r2, r0]
    // add r2, #0x30
    // lsl r3, r3, #4
    // mov r1, #0x10
    // add r2, r2, r3
    // bl sub_02019A60
    // ldr r0, [r4, #0x34]
    // ldr r1, _021EFB54 ; =0x000088C8
    // ldrh r1, [r0, r1]
    // bl ov14_021F38B0
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E88BC
    // ldr r1, _021EFB60 ; =ov14_021EAA04
    // add r0, r4, #0
    // mov r2, #0x88
    // bl ov14_021F0234
    // pop {r4, r5, r6, pc}
    // _021EFB48: .word 0x0000044C
    // _021EFB4C: .word 0x000088CA
    // _021EFB50: .word ov14_021E9970
    // _021EFB54: .word 0x000088C8
    // _021EFB58: .word 0x00004094
    // _021EFB5C: .word 0x0000044B
    // _021EFB60: .word ov14_021EAA04
    // TODO: decompile
}




void ov14_021EFB64(void) {
    // push {r3, r4, r5, lr}
    // add r4, r0, #0
    // bl ov14_021F6A24
    // add r5, r0, #0
    // mov r0, #0
    // mvn r0, r0
    // cmp r5, r0
    // beq _021EFC52
    // add r1, r5, #0
    // add r0, r4, #0
    // add r1, #0x1e
    // mov r2, #0xac
    // mov r3, #0
    // bl ov14_021E6070
    // cmp r0, #0
    // beq _021EFBBC
    // ldr r0, _021EFDC8 ; =0x000005EB
    // bl PlaySE
    // ldr r2, [r4, #0x34]
    // ldr r1, _021EFDCC ; =0x000040B8
    // add r0, r2, r1
    // add r1, r1, #4
    // add r1, r2, r1
    // bl System_GetTouchNewCoords
    // add r1, r5, #0
    // add r0, r4, #0
    // add r1, #0x1e
    // bl ov14_021E7588
    // ldr r0, [r4, #0x34]
    // mov r1, #9
    // mov r2, #0
    // bl ov14_021F2A18
    // add r5, #0x1e
    // add r0, r4, #0
    // add r1, r5, #0
    // bl ov14_021F1D6C
    // pop {r3, r4, r5, pc}
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8544
    // cmp r0, #1
    // bne _021EFC32
    // add r0, r4, #0
    // add r0, #0x21
    // ldrb r0, [r0]
    // sub r0, #0x1e
    // lsl r0, r0, #0x18
    // lsr r5, r0, #0x18
    // ldr r0, [r4, #0x34]
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_GetNextInput
    // add r2, r0, #0
    // ldr r0, [r4, #0x34]
    // add r1, r5, #0
    // bl ov14_021F7AC4
    // ldr r0, [r4, #0x34]
    // add r1, r5, #0
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_SetNextInput
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E84A4
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8328
    // add r0, r4, #0
    // bl ov14_021F40DC
    // ldr r1, [r4, #0x34]
    // ldr r0, _021EFDD0 ; =0x000088C8
    // ldrh r0, [r1, r0]
    // cmp r0, #0
    // beq _021EFC26
    // mov r0, #0x2f
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E88F8
    // ldr r1, _021EFDD4 ; =ov14_021EA674
    // add r0, r4, #0
    // mov r2, #0x8c
    // bl ov14_021F0234
    // pop {r3, r4, r5, pc}
    // ldr r0, [r4, #0x34]
    // lsl r1, r5, #0x18
    // ldr r0, [r0, #0x2c]
    // lsr r1, r1, #0x18
    // bl GridInputHandler_SetNextInput
    // ldr r0, [r4, #0x34]
    // mov r1, #1
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_SetButtonInputMode
    // add r0, r4, #0
    // bl ov14_021E765C
    // mov r0, #0x8b
    // pop {r3, r4, r5, pc}
    // add r0, r4, #0
    // bl ov14_021F75C8
    // mov r1, #2
    // add r5, r0, #0
    // mvn r1, r1
    // cmp r5, r1
    // bhi _021EFC92
    // bhs _021EFCCA
    // cmp r5, #9
    // bhi _021EFC88
    // add r0, r5, r5
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _021EFC74: ; jump table
    // mov r0, #3
    // mvn r0, r0
    // cmp r5, r0
    // beq _021EFD4C
    // b _021EFD7A
    // add r0, r1, #1
    // cmp r5, r0
    // bhi _021EFC9C
    // beq _021EFD00
    // b _021EFD7A
    // add r0, r1, #2
    // cmp r5, r0
    // bne _021EFCA4
    // b _021EFDC4
    // b _021EFD7A
    // ldr r0, _021EFDD8 ; =0x000005DD
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #0
    // mov r2, #0xb0
    // bl ov14_021F2490
    // pop {r3, r4, r5, pc}
    // ldr r0, _021EFDD8 ; =0x000005DD
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #7
    // mov r2, #0xad
    // bl ov14_021F2270
    // pop {r3, r4, r5, pc}
    // ldr r0, [r4, #0x34]
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_GetNextInput
    // add r1, r0, #0
    // cmp r1, #5
    // bhi _021EFCE2
    // add r0, r4, #0
    // add r1, #0x1e
    // bl ov14_021E7588
    // b _021EFCF0
    // cmp r1, #8
    // beq _021EFCF0
    // cmp r1, #9
    // beq _021EFCF0
    // add r0, r4, #0
    // bl ov14_021E765C
    // ldr r0, _021EFDDC ; =0x000005DC
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #0x8c
    // bl ov14_021F0244
    // pop {r3, r4, r5, pc}
    // ldr r0, _021EFDE0 ; =0x00000633
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #0xa
    // mov r2, #0x9f
    // bl ov14_021F2270
    // pop {r3, r4, r5, pc}
    // ldr r0, _021EFDDC ; =0x000005DC
    // bl PlaySE
    // add r0, r4, #0
    // add r0, #0x21
    // ldrb r0, [r0]
    // sub r0, #0x1e
    // lsl r0, r0, #0x18
    // lsr r5, r0, #0x18
    // ldr r0, [r4, #0x34]
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_GetNextInput
    // add r2, r0, #0
    // ldr r0, [r4, #0x34]
    // add r1, r5, #0
    // bl ov14_021F7AC4
    // ldr r0, [r4, #0x34]
    // add r1, r5, #0
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_SetNextInput
    // add r0, r4, #0
    // mov r1, #0xb
    // mov r2, #0xb1
    // bl ov14_021F2270
    // pop {r3, r4, r5, pc}
    // ldr r0, [r4, #0x34]
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_GetNextInput
    // add r1, r0, #0
    // cmp r1, #5
    // bhi _021EFD64
    // add r0, r4, #0
    // add r1, #0x1e
    // bl ov14_021E7588
    // b _021EFD72
    // cmp r1, #8
    // beq _021EFD72
    // cmp r1, #9
    // beq _021EFD72
    // add r0, r4, #0
    // bl ov14_021E765C
    // ldr r0, _021EFDDC ; =0x000005DC
    // bl PlaySE
    // b _021EFDC4
    // add r1, r5, #0
    // add r0, r4, #0
    // add r1, #0x1e
    // mov r2, #0xac
    // mov r3, #0
    // bl ov14_021E6070
    // cmp r0, #0
    // beq _021EFDC4
    // ldr r0, _021EFDD8 ; =0x000005DD
    // bl PlaySE
    // add r1, r5, #0
    // add r0, r4, #0
    // add r1, #0x1e
    // bl ov14_021E7588
    // ldr r0, [r4, #0x34]
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_GetNextInput
    // add r2, r0, #0
    // ldr r0, [r4, #0x34]
    // mov r1, #8
    // bl ov14_021F7AC4
    // ldr r0, [r4, #0x34]
    // mov r1, #8
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_SetNextInput
    // add r5, #0x1e
    // add r0, r4, #0
    // add r1, r5, #0
    // bl ov14_021F1CDC
    // pop {r3, r4, r5, pc}
    // mov r0, #0x8b
    // pop {r3, r4, r5, pc}
    // _021EFDC8: .word 0x000005EB
    // _021EFDCC: .word 0x000040B8
    // _021EFDD0: .word 0x000088C8
    // _021EFDD4: .word ov14_021EA674
    // _021EFDD8: .word 0x000005DD
    // _021EFDDC: .word 0x000005DC
    // _021EFDE0: .word 0x00000633
    // TODO: decompile
}




void ov14_021EFDE4(void) {
}




void ov14_021EFDF4(void) {
    // push {r3, r4, r5, lr}
    // add r4, r0, #0
    // ldr r0, [r4, #0x34]
    // add r1, r4, #0
    // ldr r5, [r0, #0xc]
    // add r1, #0x21
    // ldrh r2, [r5]
    // ldrb r1, [r1]
    // cmp r2, r1
    // beq _021EFE10
    // ldr r1, _021EFEF0 ; =0x000088C8
    // ldrh r1, [r0, r1]
    // cmp r1, #0
    // bne _021EFEB0
    // add r0, r4, #0
    // ldrh r5, [r5, #2]
    // bl ov14_021F1F38
    // ldr r0, [r4, #0x34]
    // ldr r1, _021EFEF4 ; =0x0000044A
    // ldrb r1, [r0, r1]
    // cmp r1, #0
    // bne _021EFE6C
    // ldr r1, _021EFEF0 ; =0x000088C8
    // ldrh r0, [r0, r1]
    // bl ItemIdIsMail
    // cmp r0, #1
    // bne _021EFE7A
    // add r0, r4, #0
    // add r0, #0x21
    // ldrb r0, [r0]
    // cmp r5, r0
    // beq _021EFE7A
    // ldr r0, _021EFEF8 ; =0x000005F3
    // bl PlaySE
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // mov r1, #7
    // bl sub_0201980C
    // add r1, r4, #0
    // add r1, #0x21
    // ldrb r1, [r1]
    // ldr r0, [r4, #0x34]
    // mov r2, #0
    // bl ov14_021F34C8
    // add r0, r4, #0
    // mov r1, #7
    // mov r2, #0x28
    // bl ov14_021F68C0
    // mov r0, #0x92
    // str r0, [r4, #0x30]
    // mov r0, #6
    // pop {r3, r4, r5, pc}
    // mov r1, #0x28
    // bl ov14_021F6654
    // ldr r1, [r4, #0x34]
    // ldr r0, _021EFEF4 ; =0x0000044A
    // mov r2, #0
    // strb r2, [r1, r0]
    // ldr r1, [r4, #0x34]
    // ldr r0, _021EFEF0 ; =0x000088C8
    // ldrh r0, [r1, r0]
    // cmp r0, #0
    // beq _021EFE98
    // ldr r0, _021EFEFC ; =0x000005EA
    // bl PlaySE
    // add r1, r4, #0
    // add r1, #0x21
    // ldrb r1, [r1]
    // ldr r0, [r4, #0x34]
    // mov r2, #0
    // bl ov14_021F34C8
    // ldr r0, [r4, #0x34]
    // mov r1, #8
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_SetNextInput
    // ldr r0, [r4, #0x34]
    // mov r1, #1
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_SetButtonInputMode
    // mov r0, #0x8b
    // pop {r3, r4, r5, pc}
    // mov r1, #0x28
    // bl ov14_021F6654
    // ldr r0, _021EFEFC ; =0x000005EA
    // bl PlaySE
    // ldrh r1, [r5]
    // ldr r0, [r4, #0x34]
    // mov r2, #0
    // bl ov14_021F34C8
    // add r1, r4, #0
    // add r1, #0x21
    // ldrb r1, [r1]
    // ldr r0, [r4, #0x34]
    // mov r2, #1
    // bl ov14_021F34C8
    // add r0, r4, #0
    // bl ov14_021F40DC
    // ldr r0, [r4, #0x34]
    // mov r1, #1
    // bl ov14_021F391C
    // ldr r0, [r4, #0x34]
    // mov r1, #0xb
    // mov r2, #2
    // bl ov14_021F29E4
    // mov r0, #0x8e
    // pop {r3, r4, r5, pc}
    // _021EFEF0: .word 0x000088C8
    // _021EFEF4: .word 0x0000044A
    // _021EFEF8: .word 0x000005F3
    // _021EFEFC: .word 0x000005EA
    // TODO: decompile
}




void ov14_021EFF00(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // ldr r0, [r5, #0x34]
    // mov r1, #0xb
    // bl ov14_021F2A04
    // cmp r0, #1
    // bne _021EFF14
    // mov r0, #0x8e
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [r5, #0x34]
    // mov r1, #0
    // bl ov14_021F391C
    // ldr r0, [r5, #0x34]
    // mov r1, #0xb
    // mov r2, #0
    // bl ov14_021F2A18
    // ldr r0, [r5, #0x34]
    // mov r2, #6
    // ldr r4, [r0, #0xc]
    // add r0, r5, #0
    // ldrh r1, [r4]
    // mov r3, #0
    // bl ov14_021E6070
    // lsl r0, r0, #0x10
    // lsr r7, r0, #0x10
    // ldrh r1, [r4]
    // ldr r6, [r5, #0x34]
    // ldr r3, _021F0084 ; =0x000088C8
    // add r0, r5, #0
    // mov r2, #6
    // add r3, r6, r3
    // bl ov14_021E6094
    // ldrb r1, [r5, #0x1f]
    // ldrh r2, [r4]
    // add r0, r5, #0
    // bl ov14_021E60C0
    // bl ov14_021E64D0
    // cmp r0, #1
    // bne _021EFF6E
    // ldrh r2, [r4]
    // ldr r3, [r5, #0x34]
    // ldrb r1, [r5, #0x1f]
    // add r6, r3, r2
    // ldr r3, _021F0088 ; =0x00004094
    // add r0, r5, #0
    // ldrb r3, [r6, r3]
    // bl ov14_021F2ED0
    // ldrh r1, [r4]
    // add r0, r5, #0
    // bl ov14_021E7588
    // add r1, r5, #0
    // ldr r0, [r5, #0x34]
    // ldr r3, _021F0084 ; =0x000088C8
    // add r1, #0x21
    // strh r7, [r0, r3]
    // ldr r6, [r5, #0x34]
    // ldrb r1, [r1]
    // add r0, r5, #0
    // mov r2, #6
    // add r3, r6, r3
    // bl ov14_021E6094
    // add r2, r5, #0
    // add r2, #0x21
    // ldrb r1, [r5, #0x1f]
    // ldrb r2, [r2]
    // add r0, r5, #0
    // bl ov14_021E60C0
    // bl ov14_021E64D0
    // cmp r0, #1
    // bne _021EFFBA
    // add r0, r5, #0
    // add r0, #0x21
    // ldrb r2, [r0]
    // ldr r3, [r5, #0x34]
    // ldrb r1, [r5, #0x1f]
    // add r6, r3, r2
    // ldr r3, _021F0088 ; =0x00004094
    // add r0, r5, #0
    // ldrb r3, [r6, r3]
    // bl ov14_021F2ED0
    // ldr r0, [r5, #0x34]
    // ldr r1, _021F0084 ; =0x000088C8
    // ldrh r1, [r0, r1]
    // cmp r1, #0
    // bne _021F0046
    // ldr r1, _021F008C ; =0x0000044A
    // ldrb r2, [r0, r1]
    // cmp r2, #0
    // bne _021F0006
    // ldrh r1, [r4]
    // add r0, r5, #0
    // add r0, #0x21
    // strb r1, [r0]
    // add r0, r5, #0
    // bl ov14_021F1F38
    // add r1, r5, #0
    // add r1, #0x21
    // ldrb r1, [r1]
    // ldr r0, [r5, #0x34]
    // sub r1, #0x1e
    // lsl r1, r1, #0x18
    // ldr r0, [r0, #0x2c]
    // lsr r1, r1, #0x18
    // bl GridInputHandler_SetNextInput
    // mov r0, #0x2f
    // ldr r1, [r5, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8328
    // ldr r1, _021F0090 ; =ov14_021E94BC
    // add r0, r5, #0
    // mov r2, #0x8f
    // bl ov14_021F0234
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r2, #0
    // strb r2, [r0, r1]
    // add r0, r5, #0
    // bl ov14_021F1F38
    // add r1, r5, #0
    // add r1, #0x21
    // ldrb r1, [r1]
    // ldr r0, [r5, #0x34]
    // sub r1, #0x1e
    // lsl r1, r1, #0x18
    // ldr r0, [r0, #0x2c]
    // lsr r1, r1, #0x18
    // bl GridInputHandler_SetNextInput
    // mov r0, #0x2f
    // ldr r1, [r5, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E7EE0
    // mov r1, #1
    // add r0, r5, #0
    // add r2, r1, #0
    // bl ov14_021F3488
    // ldr r1, _021F0094 ; =ov14_021E9518
    // add r0, r5, #0
    // mov r2, #0x8f
    // bl ov14_021F0234
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, _021F0098 ; =0x000005EB
    // bl PlaySE
    // ldr r0, [r5, #0x34]
    // ldr r1, _021F0084 ; =0x000088C8
    // ldrh r1, [r0, r1]
    // bl ov14_021F3844
    // ldr r0, [r5, #0x34]
    // mov r1, #1
    // bl ov14_021F391C
    // ldr r0, [r5, #0x34]
    // mov r1, #0xb
    // mov r2, #1
    // bl ov14_021F29E4
    // ldr r0, [r5, #0x34]
    // mov r1, #0xb
    // mov r2, #1
    // bl ov14_021F2A18
    // ldr r0, [r5, #0x34]
    // bl ov14_021F39D0
    // ldr r1, _021F009C ; =ov14_021EAF08
    // add r0, r5, #0
    // mov r2, #0x90
    // bl ov14_021F0234
    // pop {r3, r4, r5, r6, r7, pc}
    // _021F0084: .word 0x000088C8
    // _021F0088: .word 0x00004094
    // _021F008C: .word 0x0000044A
    // _021F0090: .word ov14_021E94BC
    // _021F0094: .word ov14_021E9518
    // _021F0098: .word 0x000005EB
    // _021F009C: .word ov14_021EAF08
    // TODO: decompile
}




u32 ov14_021F00A0(void) {
}




void ov14_021F00BC(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, [r5, #0x34]
    // mov r2, #0
    // ldr r4, [r0, #0xc]
    // ldrh r1, [r4]
    // bl ov14_021F34C8
    // ldr r0, _021F011C ; =0x000005EA
    // bl PlaySE
    // add r0, r5, #0
    // bl ov14_021F40DC
    // ldr r0, [r5, #0x34]
    // mov r1, #1
    // bl ov14_021F391C
    // ldr r0, [r5, #0x34]
    // mov r1, #0xb
    // mov r2, #2
    // bl ov14_021F29E4
    // add r0, r5, #0
    // add r0, #0x21
    // ldrb r0, [r0]
    // cmp r0, #0x1e
    // bhs _021F00FC
    // ldrh r1, [r4]
    // add r0, r5, #0
    // add r0, #0x21
    // strb r1, [r0]
    // add r1, r5, #0
    // add r1, #0x21
    // ldrb r1, [r1]
    // ldr r0, [r5, #0x34]
    // sub r1, #0x1e
    // lsl r1, r1, #0x18
    // ldr r0, [r0, #0x2c]
    // lsr r1, r1, #0x18
    // bl GridInputHandler_SetNextInput
    // add r0, r5, #0
    // bl ov14_021F1F38
    // mov r0, #0x91
    // pop {r3, r4, r5, pc}
    // nop
    // _021F011C: .word 0x000005EA
    // TODO: decompile
}




void ov14_021F0120(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4, #0x34]
    // mov r1, #0xb
    // bl ov14_021F2A04
    // cmp r0, #1
    // bne _021F0134
    // mov r0, #0x91
    // pop {r4, pc}
    // ldr r0, [r4, #0x34]
    // mov r1, #0
    // bl ov14_021F391C
    // ldr r0, [r4, #0x34]
    // mov r1, #0xb
    // mov r2, #0
    // bl ov14_021F2A18
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8328
    // ldr r1, _021F0160 ; =ov14_021E94BC
    // add r0, r4, #0
    // mov r2, #0x8f
    // bl ov14_021F0234
    // pop {r4, pc}
    // nop
    // _021F0160: .word ov14_021E94BC
    // TODO: decompile
}




void ov14_021F0164(void) {
    ov14_021F6654(*((u32*)(r0 + 0x34)), 0x28);
    // ldr r0, [r1, r0]
    sub_020197F4((0x2f << 4), 7);
    GridInputHandler_SetNextInput(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)), 8);
    GridInputHandler_SetButtonInputMode(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)), 1);
}




void ov14_021F0198(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _021F01B4 ; =0x000005F3
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #5
    // mov r2, #0x25
    // bl ov14_021F68C0
    // mov r0, #0xe
    // str r0, [r4, #0x30]
    // mov r0, #6
    // pop {r4, pc}
    // _021F01B4: .word 0x000005F3
    // TODO: decompile
}




void ov14_021F01B8(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _021F01D4 ; =0x000005F3
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #0x25
    // bl ov14_021F6724
    // mov r0, #0xe
    // str r0, [r4, #0x30]
    // mov r0, #6
    // pop {r4, pc}
    // nop
    // _021F01D4: .word 0x000005F3
    // TODO: decompile
}




void ov14_021F01D8(void) {
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 1, 1, 0);
    // str r4, [r1, r0]
}




void ov14_021F0204(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 0, 0, 0);
    // str r4, [r1, r0]
}




void ov14_021F0234(void) {
}




void ov14_021F0244(void) {
}




void ov14_021F0254(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // cmp r4, #1
    // bne _021F0266
    // mov r1, #1
    // bl ov14_021E5EFC
    // b _021F026C
    // mov r1, #0
    // bl ov14_021E5EFC
    // ldr r1, [r5, #0x34]
    // ldr r0, _021F0278 ; =0x00000438
    // strh r4, [r1, r0]
    // mov r0, #7
    // pop {r3, r4, r5, pc}
    // nop
    // _021F0278: .word 0x00000438
    // TODO: decompile
}




void ov14_021F027C(void) {
    // ldr r3, _021F0288 ; =ov14_021F0204
    // strb r1, [r0, #0x1e]
    // mov r1, #9
    // str r1, [r0, #0x30]
    // mov r1, #1
    // bx r3
    // _021F0288: .word ov14_021F0204
    // TODO: decompile
}




void ov14_021F028C(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldrb r0, [r5, #0x1f]
    // add r4, r1, #0
    // cmp r0, #0
    // bne _021F029C
    // mov r0, #0x11
    // b _021F029E
    // sub r0, r0, #1
    // strb r0, [r5, #0x1f]
    // ldrb r1, [r5, #0x1f]
    // add r0, r5, #0
    // bl ov14_021F2DE8
    // ldrb r1, [r5, #0x1f]
    // add r0, r5, #0
    // bl ov14_021E7930
    // add r1, r0, #0
    // add r0, r5, #0
    // mov r2, #0
    // bl ov14_021E783C
    // ldr r0, [r5, #0x34]
    // mov r1, #0
    // mov r2, #2
    // bl ov14_021F29E4
    // mov r0, #0x2f
    // ldr r1, [r5, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8544
    // cmp r0, #1
    // bne _021F0302
    // mov r0, #0x2f
    // ldr r1, [r5, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E84A4
    // ldr r0, [r5]
    // ldr r0, [r0, #8]
    // sub r0, r0, #2
    // cmp r0, #1
    // bhi _021F0302
    // mov r0, #0x2f
    // ldr r1, [r5, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8248
    // mov r0, #0x2f
    // ldr r1, [r5, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E82A8
    // ldr r1, _021F0310 ; =ov14_021E92AC
    // add r0, r5, #0
    // add r2, r4, #0
    // bl ov14_021F0234
    // pop {r3, r4, r5, pc}
    // nop
    // _021F0310: .word ov14_021E92AC
    // TODO: decompile
}




void ov14_021F0314(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldrb r0, [r5, #0x1f]
    // add r4, r1, #0
    // cmp r0, #0x11
    // bne _021F0324
    // mov r0, #0
    // b _021F0326
    // add r0, r0, #1
    // strb r0, [r5, #0x1f]
    // ldrb r1, [r5, #0x1f]
    // add r0, r5, #0
    // bl ov14_021F2DE8
    // ldrb r1, [r5, #0x1f]
    // add r0, r5, #0
    // bl ov14_021E7930
    // add r1, r0, #0
    // add r0, r5, #0
    // mov r2, #1
    // bl ov14_021E783C
    // ldr r0, [r5, #0x34]
    // mov r1, #1
    // mov r2, #4
    // bl ov14_021F29E4
    // mov r0, #0x2f
    // ldr r1, [r5, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8544
    // cmp r0, #1
    // bne _021F038A
    // mov r0, #0x2f
    // ldr r1, [r5, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E84A4
    // ldr r0, [r5]
    // ldr r0, [r0, #8]
    // sub r0, r0, #2
    // cmp r0, #1
    // bhi _021F038A
    // mov r0, #0x2f
    // ldr r1, [r5, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8248
    // mov r0, #0x2f
    // ldr r1, [r5, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E82A8
    // ldr r1, _021F0398 ; =ov14_021E9370
    // add r0, r5, #0
    // add r2, r4, #0
    // bl ov14_021F0234
    // pop {r3, r4, r5, pc}
    // nop
    // _021F0398: .word ov14_021E9370
    // TODO: decompile
}




void ov14_021F039C(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // add r0, #0x21
    // strb r1, [r0]
    // add r1, r4, #0
    // add r1, #0x21
    // ldrb r1, [r1]
    // ldr r0, [r4, #0x34]
    // mov r2, #0
    // bl ov14_021F3190
    // add r0, r4, #0
    // bl ov14_021F3F6C
    // add r0, r4, #0
    // bl ov14_021F08BC
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8544
    // cmp r0, #0
    // bne _021F03F2
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8234
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8294
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8314
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E84A4
    // add r0, r4, #0
    // mov r1, #0
    // add r0, #0x22
    // strb r1, [r0]
    // ldr r1, _021F0414 ; =ov14_021E8BA4
    // add r0, r4, #0
    // mov r2, #0xd
    // bl ov14_021F0234
    // pop {r4, pc}
    // nop
    // _021F0414: .word ov14_021E8BA4
    // TODO: decompile
}




void ov14_021F0418(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // add r0, #0x21
    // strb r1, [r0]
    // add r1, r4, #0
    // add r1, #0x21
    // ldrb r1, [r1]
    // ldr r0, [r4, #0x34]
    // mov r2, #0
    // bl ov14_021F3190
    // add r0, r4, #0
    // bl ov14_021F3F6C
    // add r0, r4, #0
    // bl ov14_021F3044
    // mov r1, #1
    // add r0, r4, #0
    // add r2, r1, #0
    // bl ov14_021F3488
    // add r0, r4, #0
    // mov r1, #2
    // mov r2, #1
    // bl ov14_021F3488
    // add r1, r4, #0
    // add r1, #0x21
    // ldrb r1, [r1]
    // ldr r0, [r4, #0x34]
    // mov r2, #0
    // bl ov14_021F34C8
    // add r1, r4, #0
    // add r1, #0x21
    // ldrb r1, [r1]
    // add r0, r4, #0
    // mov r2, #1
    // mov r3, #0x27
    // bl ov14_021F685C
    // ldr r0, [r4, #8]
    // bl Party_GetCount
    // cmp r0, #6
    // beq _021F0482
    // add r0, r4, #0
    // mov r1, #0x28
    // mov r2, #1
    // bl ov14_021F6928
    // b _021F048C
    // add r0, r4, #0
    // mov r1, #0x28
    // mov r2, #3
    // bl ov14_021F6928
    // add r0, r4, #0
    // bl ov14_021F08BC
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E84A4
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8544
    // cmp r0, #0
    // bne _021F04BA
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8314
    // add r0, r4, #0
    // mov r1, #2
    // add r0, #0x22
    // strb r1, [r0]
    // ldr r1, _021F04D0 ; =ov14_021E9C88
    // add r0, r4, #0
    // mov r2, #0x57
    // bl ov14_021F0234
    // pop {r4, pc}
    // nop
    // _021F04D0: .word ov14_021E9C88
    // TODO: decompile
}




void ov14_021F04D4(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // add r0, #0x21
    // strb r1, [r0]
    // add r1, r4, #0
    // add r1, #0x21
    // ldrb r1, [r1]
    // ldr r0, [r4, #0x34]
    // mov r2, #1
    // bl ov14_021F3190
    // add r0, r4, #0
    // bl ov14_021F3F6C
    // add r1, r4, #0
    // add r1, #0x21
    // ldrb r1, [r1]
    // add r0, r4, #0
    // mov r2, #1
    // mov r3, #0x27
    // bl ov14_021F685C
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8434
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8314
    // ldr r0, [r4, #0x34]
    // bl ov14_021E8824
    // ldr r1, _021F052C ; =ov14_021EA068
    // add r0, r4, #0
    // mov r2, #0x58
    // bl ov14_021F0234
    // pop {r4, pc}
    // nop
    // _021F052C: .word ov14_021EA068
    // TODO: decompile
}




void ov14_021F0530(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // add r0, #0x21
    // strb r1, [r0]
    // add r1, r4, #0
    // add r1, #0x21
    // ldrb r1, [r1]
    // ldr r0, [r4, #0x34]
    // mov r2, #1
    // bl ov14_021F3190
    // add r0, r4, #0
    // bl ov14_021F3F6C
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8434
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8234
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8294
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8314
    // ldr r0, [r4, #0x34]
    // bl ov14_021E8824
    // ldr r1, _021F0590 ; =ov14_021EA0B8
    // add r0, r4, #0
    // mov r2, #0x4a
    // bl ov14_021F0234
    // pop {r4, pc}
    // nop
    // _021F0590: .word ov14_021EA0B8
    // TODO: decompile
}




void ov14_021F0594(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // add r0, #0x21
    // add r1, r5, #0
    // strb r4, [r0]
    // add r1, #0x21
    // ldrb r1, [r1]
    // ldr r0, [r5, #0x34]
    // mov r2, #0
    // bl ov14_021F3190
    // add r0, r5, #0
    // bl ov14_021F3F6C
    // add r1, r4, #0
    // ldr r0, [r5, #8]
    // sub r1, #0x1e
    // bl Party_GetMonByIndex
    // sub r4, #0x1e
    // add r6, r0, #0
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov14_021E6480
    // cmp r0, #0
    // bne _021F05E4
    // ldrb r1, [r5, #0x1f]
    // ldr r0, [r5, #4]
    // bl PCStorage_CountMonsInBox
    // cmp r0, #0
    // bne _021F05E4
    // add r0, r5, #0
    // mov r1, #0x28
    // mov r2, #8
    // bl ov14_021F6928
    // b _021F062A
    // add r0, r6, #0
    // mov r1, #6
    // mov r2, #0
    // bl GetMonData
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // bl ItemIdIsMail
    // cmp r0, #1
    // bne _021F0606
    // add r0, r5, #0
    // mov r1, #0x28
    // mov r2, #6
    // bl ov14_021F6928
    // b _021F062A
    // add r0, r6, #0
    // mov r1, #0xa2
    // mov r2, #0
    // bl GetMonData
    // cmp r0, #0
    // beq _021F0620
    // add r0, r5, #0
    // mov r1, #0x28
    // mov r2, #7
    // bl ov14_021F6928
    // b _021F062A
    // add r0, r5, #0
    // mov r1, #0x28
    // mov r2, #0
    // bl ov14_021F6928
    // add r0, r5, #0
    // bl ov14_021F08BC
    // mov r0, #0x2f
    // ldr r1, [r5, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E84A4
    // mov r0, #0x2f
    // ldr r1, [r5, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8314
    // add r0, r5, #0
    // mov r1, #1
    // add r0, #0x22
    // strb r1, [r0]
    // ldr r1, _021F065C ; =ov14_021E8D20
    // add r0, r5, #0
    // mov r2, #0x27
    // bl ov14_021F0234
    // pop {r4, r5, r6, pc}
    // _021F065C: .word ov14_021E8D20
    // TODO: decompile
}




void ov14_021F0660(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // str r1, [sp]
    // add r1, r5, #0
    // ldr r0, [sp]
    // add r1, #0x21
    // strb r0, [r1]
    // mov r4, #0x1e
    // mov r7, #1
    // mov r6, #0
    // add r0, r5, #0
    // add r0, #0x21
    // ldrb r0, [r0]
    // cmp r4, r0
    // ldr r0, [r5, #0x34]
    // bne _021F068A
    // add r1, r4, #0
    // add r2, r6, #0
    // bl ov14_021F3190
    // b _021F0692
    // add r1, r4, #0
    // add r2, r7, #0
    // bl ov14_021F3190
    // add r4, r4, #1
    // cmp r4, #0x24
    // blo _021F0674
    // add r0, r5, #0
    // bl ov14_021F3F6C
    // add r0, r5, #0
    // mov r1, #2
    // mov r2, #1
    // bl ov14_021F3488
    // add r1, r5, #0
    // add r1, #0x21
    // ldrb r1, [r1]
    // ldr r0, [r5, #0x34]
    // mov r2, #0
    // bl ov14_021F34C8
    // add r1, r5, #0
    // add r1, #0x21
    // ldrb r1, [r1]
    // add r0, r5, #0
    // mov r2, #1
    // mov r3, #0x27
    // bl ov14_021F685C
    // ldr r1, [sp]
    // ldr r0, [r5, #8]
    // sub r1, #0x1e
    // bl Party_GetMonByIndex
    // ldr r1, [sp]
    // add r4, r0, #0
    // sub r1, #0x1e
    // add r0, r5, #0
    // str r1, [sp]
    // bl ov14_021E6480
    // cmp r0, #0
    // bne _021F06EE
    // add r0, r5, #0
    // mov r1, #0x28
    // mov r2, #8
    // bl ov14_021F6928
    // b _021F074C
    // add r0, r4, #0
    // mov r1, #6
    // mov r2, #0
    // bl GetMonData
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // bl ItemIdIsMail
    // cmp r0, #1
    // bne _021F0710
    // add r0, r5, #0
    // mov r1, #0x28
    // mov r2, #6
    // bl ov14_021F6928
    // b _021F074C
    // add r0, r4, #0
    // mov r1, #0xa2
    // mov r2, #0
    // bl GetMonData
    // cmp r0, #0
    // beq _021F072A
    // add r0, r5, #0
    // mov r1, #0x28
    // mov r2, #7
    // bl ov14_021F6928
    // b _021F074C
    // ldrb r1, [r5, #0x1f]
    // ldr r0, [r5, #4]
    // bl PCStorage_CountEmptySpotsInBox
    // cmp r0, #0
    // bne _021F0742
    // add r0, r5, #0
    // mov r1, #0x28
    // mov r2, #2
    // bl ov14_021F6928
    // b _021F074C
    // add r0, r5, #0
    // mov r1, #0x28
    // mov r2, #0
    // bl ov14_021F6928
    // add r0, r5, #0
    // bl ov14_021F08BC
    // mov r0, #0x2f
    // ldr r1, [r5, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E84A4
    // mov r0, #0x2f
    // ldr r1, [r5, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8544
    // cmp r0, #0
    // bne _021F077A
    // mov r0, #0x2f
    // ldr r1, [r5, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8314
    // add r0, r5, #0
    // mov r1, #1
    // add r0, #0x22
    // strb r1, [r0]
    // ldr r1, _021F0790 ; =ov14_021E9A24
    // add r0, r5, #0
    // mov r2, #0x6e
    // bl ov14_021F0234
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021F0790: .word ov14_021E9A24
    // TODO: decompile
}




void ov14_021F0794(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // add r0, #0x21
    // strb r1, [r0]
    // add r1, r4, #0
    // add r1, #0x21
    // ldrb r1, [r1]
    // ldr r0, [r4, #0x34]
    // mov r2, #1
    // bl ov14_021F3190
    // add r0, r4, #0
    // bl ov14_021F3F6C
    // add r1, r4, #0
    // add r1, #0x21
    // ldrb r1, [r1]
    // add r0, r4, #0
    // mov r2, #1
    // mov r3, #0x27
    // bl ov14_021F685C
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8434
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8314
    // ldr r0, [r4, #0x34]
    // bl ov14_021E8824
    // ldr r1, _021F07EC ; =ov14_021EA068
    // add r0, r4, #0
    // mov r2, #0x6f
    // bl ov14_021F0234
    // pop {r4, pc}
    // nop
    // _021F07EC: .word ov14_021EA068
    // TODO: decompile
}




void ov14_021F07F0(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // add r0, #0x21
    // strb r1, [r0]
    // add r1, r4, #0
    // add r1, #0x21
    // ldrb r1, [r1]
    // ldr r0, [r4, #0x34]
    // mov r2, #1
    // bl ov14_021F3190
    // add r0, r4, #0
    // bl ov14_021F3F6C
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8434
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8314
    // ldr r0, [r4, #0x34]
    // bl ov14_021E8824
    // ldr r1, _021F0838 ; =ov14_021EA0B8
    // add r0, r4, #0
    // mov r2, #0x4c
    // bl ov14_021F0234
    // pop {r4, pc}
    // nop
    // _021F0838: .word ov14_021EA0B8
    // TODO: decompile
}




void ov14_021F083C(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // add r0, #0x21
    // strb r1, [r0]
    // add r1, r4, #0
    // add r1, #0x21
    // ldrb r1, [r1]
    // ldr r0, [r4, #0x34]
    // mov r2, #0
    // bl ov14_021F3190
    // add r0, r4, #0
    // bl ov14_021F3F6C
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E85E4
    // cmp r0, #1
    // ldr r1, [r4, #0x34]
    // bne _021F0876
    // mov r0, #0x2f
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E85D0
    // b _021F0890
    // mov r0, #0x2f
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8648
    // cmp r0, #1
    // bne _021F0890
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8634
    // ldr r0, [r4, #0x34]
    // bl ov14_021E8824
    // add r0, r4, #0
    // mov r1, #0
    // bl ov14_021F6408
    // add r0, r4, #0
    // bl ov14_021F08BC
    // add r0, r4, #0
    // mov r1, #2
    // add r0, #0x22
    // strb r1, [r0]
    // ldr r1, _021F08B8 ; =ov14_021E8FD4
    // add r0, r4, #0
    // mov r2, #0x2a
    // bl ov14_021F0234
    // pop {r4, pc}
    // _021F08B8: .word ov14_021E8FD4
    // TODO: decompile
}




void ov14_021F08BC(void) {
    Heap_Alloc(0xa, 0xf0);
    // str r0, [sp]
    AllocMonZeroed(0xa);
    // str r0, [r5]
    // add r5, #0x20
    // ldr r0, [sp]
    // add r0, #0xe0
    // str r1, [r0]
    // ldr r0, [sp]
    *((u32*)(*((u32*)(r7 + 0x34)) + 0xc)) = r0;
}




void ov14_021F08F0(void) {
    Heap_Free(*((u32*)*((u32*)(*((u32*)(r0 + 0x34)) + 0xc))));
    // add r5, #0x20
    Heap_Free(r6);
}




void ov14_021F0910(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r1, r5, #0
    // add r1, #0x21
    // ldrb r1, [r1]
    // mov r2, #0x4c
    // mov r3, #0
    // bl ov14_021E6070
    // cmp r0, #0
    // beq _021F0948
    // ldr r0, [r5, #0x34]
    // mov r1, #9
    // mov r2, #0
    // bl ov14_021F2A18
    // mov r0, #0x2f
    // ldr r1, [r5, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E84A4
    // ldr r1, _021F09B8 ; =ov14_021E9450
    // add r0, r5, #0
    // mov r2, #0x4f
    // bl ov14_021F0234
    // pop {r3, r4, r5, pc}
    // add r1, r5, #0
    // add r1, #0x21
    // ldrb r1, [r1]
    // add r0, r5, #0
    // mov r2, #6
    // mov r3, #0
    // bl ov14_021E6070
    // add r4, r0, #0
    // bne _021F096A
    // mov r0, #0x26
    // str r0, [r5, #0x2c]
    // add r0, r5, #0
    // mov r1, #1
    // bl ov14_021F027C
    // pop {r3, r4, r5, pc}
    // ldr r0, [r5, #0x34]
    // mov r1, #9
    // mov r2, #0
    // bl ov14_021F2A18
    // lsl r0, r4, #0x10
    // lsr r0, r0, #0x10
    // bl ItemIdIsMail
    // cmp r0, #1
    // ldr r1, [r5, #0x34]
    // bne _021F0998
    // mov r0, #0x2f
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E84A4
    // ldr r1, _021F09B8 ; =ov14_021E9450
    // add r0, r5, #0
    // mov r2, #0x50
    // bl ov14_021F0234
    // pop {r3, r4, r5, pc}
    // mov r0, #0x2f
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E83F4
    // add r0, r5, #0
    // add r1, r4, #0
    // mov r2, #0x25
    // bl ov14_021F6704
    // add r0, r5, #0
    // mov r1, #0
    // bl ov14_021F0254
    // pop {r3, r4, r5, pc}
    // nop
    // _021F09B8: .word ov14_021E9450
    // TODO: decompile
}




void ov14_021F09BC(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r1, [r4]
    // ldr r1, [r1, #8]
    // cmp r1, #0
    // beq _021F09D0
    // cmp r1, #1
    // beq _021F09DA
    // cmp r1, #2
    // b _021F09E4
    // mov r1, #0
    // mov r2, #9
    // bl ov14_021F6AC0
    // b _021F0A04
    // mov r1, #2
    // mov r2, #0x24
    // bl ov14_021F6AC0
    // b _021F0A04
    // add r0, r4, #0
    // add r0, #0x21
    // ldrb r0, [r0]
    // cmp r0, #0x1e
    // bhs _021F09FA
    // add r0, r4, #0
    // mov r1, #3
    // mov r2, #0x27
    // bl ov14_021F6AC0
    // b _021F0A04
    // add r0, r4, #0
    // mov r1, #5
    // mov r2, #0xb
    // bl ov14_021F6AC0
    // ldr r0, [r4, #0x34]
    // mov r1, #9
    // mov r2, #0
    // bl ov14_021F2A18
    // ldr r0, [r4, #0x34]
    // mov r1, #0x26
    // bl ov14_021F6654
    // add r0, r4, #0
    // add r0, #0x24
    // ldrb r0, [r0]
    // cmp r0, #0
    // beq _021F0A26
    // add r0, r4, #0
    // bl ov14_021F57B8
    // add r0, r4, #0
    // add r0, #0x21
    // ldrb r0, [r0]
    // cmp r0, #0x1e
    // bhs _021F0A3A
    // add r0, r4, #0
    // mov r1, #1
    // mov r2, #0
    // bl ov14_021F3488
    // add r0, r4, #0
    // mov r1, #2
    // mov r2, #0
    // bl ov14_021F3488
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E7E64
    // ldr r0, [r4]
    // ldr r0, [r0, #8]
    // cmp r0, #2
    // bne _021F0A6E
    // add r0, r4, #0
    // add r0, #0x21
    // ldrb r0, [r0]
    // cmp r0, #0x1e
    // bhs _021F0A6E
    // ldr r1, _021F0A7C ; =ov14_021E94A8
    // add r0, r4, #0
    // mov r2, #0x17
    // bl ov14_021F0234
    // pop {r4, pc}
    // ldr r1, _021F0A7C ; =ov14_021E94A8
    // add r0, r4, #0
    // mov r2, #0xe
    // bl ov14_021F0234
    // pop {r4, pc}
    // nop
    // _021F0A7C: .word ov14_021E94A8
    // TODO: decompile
}




void ov14_021F0A80(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4, #0x34]
    // mov r1, #9
    // mov r2, #0
    // bl ov14_021F2A18
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E84A4
    // ldr r1, _021F0AA8 ; =ov14_021E9434
    // add r0, r4, #0
    // mov r2, #0x13
    // bl ov14_021F0234
    // pop {r4, pc}
    // nop
    // _021F0AA8: .word ov14_021E9434
    // TODO: decompile
}




void ov14_021F0AAC(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4, #0x34]
    // mov r1, #9
    // mov r2, #0
    // bl ov14_021F2A18
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E84A4
    // ldr r1, _021F0AD4 ; =ov14_021E9450
    // add r0, r4, #0
    // mov r2, #0x19
    // bl ov14_021F0234
    // pop {r4, pc}
    // nop
    // _021F0AD4: .word ov14_021E9450
    // TODO: decompile
}




void ov14_021F0AD8(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r1, #1
    // add r0, #0x23
    // strb r1, [r0]
    // ldr r0, [r4, #0x34]
    // mov r1, #0
    // bl ov14_021F43F4
    // mov r1, #1
    // add r0, r4, #0
    // add r2, r1, #0
    // bl ov14_021F3488
    // ldr r0, [r4, #0x34]
    // mov r1, #9
    // mov r2, #0
    // bl ov14_021F2A18
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8234
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8294
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8314
    // ldr r1, _021F0B30 ; =ov14_021E94BC
    // add r0, r4, #0
    // mov r2, #0x22
    // bl ov14_021F0234
    // pop {r4, pc}
    // nop
    // _021F0B30: .word ov14_021E94BC
    // TODO: decompile
}




void ov14_021F0B34(void) {
    // add r0, #0x23
    // strb r2, [r0]
    ov14_021F2A18(*((u32*)(r0 + 0x34)), 9, 0);
    // ldr r0, [r1, r0]
    ov14_021E8544((0x2f << 4), *((u32*)(r4 + 0x34)));
    ov14_021EC710(r4);
    ov14_021E76B8(r4);
    ov14_021F1100(r4, 0x25);
}




void ov14_021F0B70(void) {
    // ldr r0, [r1, r0]
    ov14_021E81A8((0x2f << 4), 1);
    ov14_021F63F0(*((u32*)(r4 + 0x34)));
    ov14_021F63A8(*((u32*)(r4 + 0x34)));
    // ldr r0, [r1, r0]
    ov14_021E8368((0x2f << 4), *((u32*)(r4 + 0x34)));
    ov14_021E82DC(r4);
    // ldr r0, [r1, r0]
    ov14_021E7E78((0x2f << 4), *((u32*)(r4 + 0x34)));
    ov14_021F30B0(r4);
}




void ov14_021F0BB4(void) {
    // ldr r0, [r1, r0]
    ov14_021E81A8((0x2f << 4), 1);
    ov14_021F63F0(*((u32*)(r4 + 0x34)));
    ov14_021F63B8(*((u32*)(r4 + 0x34)));
    // ldr r0, [r1, r0]
    ov14_021E8368((0x2f << 4), *((u32*)(r4 + 0x34)));
    // ldr r0, [r1, r0]
    ov14_021E7E88((0x2f << 4), *((u32*)(r4 + 0x34)));
    ov14_021F311C(r4);
}




void ov14_021F0BF4(void) {
    ov14_021F30B0();
    // ldr r0, [r1, r0]
    ov14_021E7E78((0x2f << 4), *((u32*)(r4 + 0x34)));
}




void ov14_021F0C0C(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r1, #0xff
    // add r0, #0x21
    // strb r1, [r0]
    // ldr r0, [r4, #0x34]
    // mov r1, #9
    // mov r2, #0
    // bl ov14_021F2A18
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8020
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8544
    // cmp r0, #1
    // bne _021F0C48
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E84A4
    // ldr r1, _021F0C54 ; =ov14_021E952C
    // add r0, r4, #0
    // mov r2, #0x2d
    // bl ov14_021F0234
    // pop {r4, pc}
    // _021F0C54: .word ov14_021E952C
    // TODO: decompile
}




void ov14_021F0C58(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // add r1, r4, #0
    // mov r2, #0xff
    // add r1, #0x21
    // strb r2, [r1]
    // mov r1, #1
    // add r2, r1, #0
    // bl ov14_021F3488
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E805C
    // ldr r1, _021F0C84 ; =ov14_021E954C
    // add r0, r4, #0
    // mov r2, #0x2e
    // bl ov14_021F0234
    // pop {r4, pc}
    // _021F0C84: .word ov14_021E954C
    // TODO: decompile
}




void ov14_021F0C88(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r1, #1
    // add r0, #0x24
    // strb r1, [r0]
    // add r0, r4, #0
    // mov r2, #0
    // add r0, #0x29
    // strb r2, [r0]
    // ldr r0, [r4, #0x34]
    // mov r1, #9
    // bl ov14_021F2A18
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8234
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8294
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8314
    // ldr r1, _021F0CD4 ; =ov14_021E94BC
    // add r0, r4, #0
    // mov r2, #0x2f
    // bl ov14_021F0234
    // pop {r4, pc}
    // nop
    // _021F0CD4: .word ov14_021E94BC
    // TODO: decompile
}




void ov14_021F0CD8(void) {
    // add r0, #0x24
    // strb r1, [r0]
    ov14_021F29E4(*((u32*)(r0 + 0x34)), 9, 8);
    ov14_021F2A18(*((u32*)(r4 + 0x34)), 9, 0);
    // ldr r0, [r1, r0]
    ov14_021E85E4((0x2f << 4), *((u32*)(r4 + 0x34)));
    ov14_021F0EE8(r4, 0x31);
    // ldr r0, [r1, r0]
    ov14_021E8648((0x2f << 4), *((u32*)(r4 + 0x34)));
    ov14_021F0D34(r4, 0x31);
    ov14_021F1090(r4, 0x32);
}




void ov14_021F0D34(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // mov r0, #0x2f
    // ldr r1, [r5, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8634
    // ldr r1, _021F0D54 ; =ov14_021E9970
    // add r0, r5, #0
    // add r2, r4, #0
    // bl ov14_021F0234
    // pop {r3, r4, r5, pc}
    // nop
    // _021F0D54: .word ov14_021E9970
    // TODO: decompile
}




void ov14_021F0D58(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // ldr r0, [r5]
    // add r6, r1, #0
    // ldr r0, [r0, #8]
    // cmp r0, #3
    // bne _021F0D6A
    // mov r4, #0x82
    // b _021F0D6C
    // mov r4, #0x29
    // add r0, r5, #0
    // add r0, #0x25
    // ldrb r7, [r0]
    // mov r1, #6
    // add r0, r7, #0
    // bl _s32_div_f
    // mov r1, #6
    // mul r1, r0
    // add r1, r6, r1
    // cmp r1, r7
    // beq _021F0D96
    // add r0, r5, #0
    // add r0, #0x25
    // strb r1, [r0]
    // add r0, r5, #0
    // bl ov14_021F48B4
    // add r0, r5, #0
    // bl ov14_021F57B8
    // add r0, r5, #0
    // add r0, #0x25
    // ldrb r1, [r0]
    // ldrb r0, [r5, #0x1f]
    // cmp r1, r0
    // bne _021F0E4E
    // mov r0, #0x2f
    // ldr r1, [r5, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E85E4
    // cmp r0, #1
    // bne _021F0DEA
    // add r0, r5, #0
    // add r0, #0x25
    // ldrb r0, [r0]
    // mov r1, #6
    // bl _s32_div_f
    // ldr r0, [r5, #0x34]
    // add r1, #0x25
    // lsl r1, r1, #0x18
    // ldr r0, [r0, #0x2c]
    // lsr r1, r1, #0x18
    // bl GridInputHandler_SetNextInput
    // ldr r0, [r5, #0x34]
    // mov r1, #1
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_SetButtonInputMode
    // ldr r0, [r5, #0x34]
    // mov r1, #9
    // mov r2, #0xe
    // bl ov14_021F29E4
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov14_021F0EE8
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #0x2f
    // ldr r1, [r5, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8648
    // cmp r0, #1
    // bne _021F0E40
    // add r0, r5, #0
    // add r0, #0x25
    // ldrb r0, [r0]
    // mov r1, #6
    // bl _s32_div_f
    // ldr r0, [r5, #0x34]
    // add r1, #0x25
    // lsl r1, r1, #0x18
    // ldr r0, [r0, #0x2c]
    // lsr r1, r1, #0x18
    // bl GridInputHandler_SetNextInput
    // ldr r0, [r5, #0x34]
    // mov r1, #1
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_SetButtonInputMode
    // ldr r0, [r5, #0x34]
    // mov r1, #9
    // mov r2, #0xe
    // bl ov14_021F29E4
    // mov r0, #0x2f
    // ldr r1, [r5, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8634
    // ldr r1, _021F0EE0 ; =ov14_021E9970
    // add r0, r5, #0
    // add r2, r4, #0
    // bl ov14_021F0234
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [r5, #0x34]
    // mov r1, #9
    // mov r2, #0xe
    // bl ov14_021F29E4
    // add r0, r4, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [r5, #0x34]
    // mov r1, #0x2d
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_SetNextInput
    // ldr r0, [r5, #0x34]
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_IsButtonInputMode
    // cmp r0, #1
    // bne _021F0E9E
    // ldr r0, [r5, #0x34]
    // mov r1, #0x2d
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_GetDpadBox
    // add r1, sp, #0
    // add r1, #1
    // add r2, sp, #0
    // bl DpadMenuBox_GetPosition
    // mov r0, #0x32
    // ldr r1, [r5, #0x34]
    // lsl r0, r0, #4
    // add r2, sp, #0
    // ldr r0, [r1, r0]
    // ldrb r1, [r2, #1]
    // ldrb r2, [r2]
    // bl ManagedSprite_SetPositionXY
    // ldr r0, [r5, #0x34]
    // mov r1, #9
    // mov r2, #8
    // bl ov14_021F29E4
    // ldr r0, [r5, #0x34]
    // mov r1, #9
    // mov r2, #1
    // bl ov14_021F2A18
    // mov r0, #0x2f
    // ldr r1, [r5, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E85E4
    // cmp r0, #1
    // bne _021F0EB2
    // add r0, r4, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r5, #0
    // bl ov14_021F604C
    // mov r0, #0x2f
    // ldr r1, [r5, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8648
    // cmp r0, #1
    // bne _021F0ED4
    // mov r0, #0x2f
    // ldr r1, [r5, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8634
    // ldr r1, _021F0EE4 ; =ov14_021E9920
    // add r0, r5, #0
    // add r2, r4, #0
    // bl ov14_021F0234
    // pop {r3, r4, r5, r6, r7, pc}
    // _021F0EE0: .word ov14_021E9970
    // _021F0EE4: .word ov14_021E9920
    // TODO: decompile
}




void ov14_021F0EE8(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // mov r0, #0x2f
    // ldr r1, [r5, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E85D0
    // ldr r1, _021F0F08 ; =ov14_021E9970
    // add r0, r5, #0
    // add r2, r4, #0
    // bl ov14_021F0234
    // pop {r3, r4, r5, pc}
    // nop
    // _021F0F08: .word ov14_021E9970
    // TODO: decompile
}




void ov14_021F0F0C(void) {
    // push {r4, r5, r6, lr}
    // add r4, r0, #0
    // add r2, r4, #0
    // add r2, #0x25
    // add r5, r1, #0
    // ldrb r1, [r4, #0x1f]
    // ldrb r2, [r2]
    // strb r2, [r4, #0x1f]
    // add r2, r4, #0
    // add r2, #0x25
    // ldrb r2, [r2]
    // cmp r1, r2
    // ldrb r1, [r4, #0x1f]
    // bls _021F0F42
    // bl ov14_021F2DE8
    // ldrb r1, [r4, #0x1f]
    // add r0, r4, #0
    // bl ov14_021E7930
    // add r1, r0, #0
    // add r0, r4, #0
    // mov r2, #0
    // bl ov14_021E783C
    // ldr r6, _021F0FFC ; =ov14_021E92AC
    // b _021F0F5A
    // bl ov14_021F2DE8
    // ldrb r1, [r4, #0x1f]
    // add r0, r4, #0
    // bl ov14_021E7930
    // add r1, r0, #0
    // add r0, r4, #0
    // mov r2, #1
    // bl ov14_021E783C
    // ldr r6, _021F1000 ; =ov14_021E9370
    // cmp r5, #4
    // bhi _021F0FF0
    // add r0, r5, r5
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _021F0F6A: ; jump table
    // add r0, r4, #0
    // bl ov14_021F4848
    // add r0, r4, #0
    // add r0, #0x23
    // ldrb r0, [r0]
    // cmp r0, #0
    // bne _021F0F8A
    // mov r0, #0xc
    // str r0, [r4, #0x30]
    // b _021F0FF0
    // mov r0, #0x24
    // str r0, [r4, #0x30]
    // b _021F0FF0
    // add r0, r4, #0
    // bl ov14_021F4848
    // mov r0, #0x3d
    // str r0, [r4, #0x30]
    // b _021F0FF0
    // mov r0, #0x47
    // str r0, [r4, #0x30]
    // b _021F0FF0
    // add r0, r4, #0
    // bl ov14_021F4848
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E85E4
    // cmp r0, #1
    // bne _021F0FC4
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E85D0
    // mov r0, #0x29
    // str r0, [r4, #0x30]
    // b _021F0FF0
    // add r0, r4, #0
    // bl ov14_021F4848
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E85E4
    // cmp r0, #1
    // bne _021F0FEC
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E85D0
    // mov r0, #0x82
    // str r0, [r4, #0x30]
    // ldr r2, [r4, #0x30]
    // add r0, r4, #0
    // add r1, r6, #0
    // bl ov14_021F0234
    // pop {r4, r5, r6, pc}
    // _021F0FFC: .word ov14_021E92AC
    // _021F1000: .word ov14_021E9370
    // TODO: decompile
}




void ov14_021F1004(void) {
    // add r0, #0x25
    // ldrb r1, [r0]
    // mul r0, r4
    // add r1, r1, r0
    // bpl _021F101A
    // add r1, #0x12
    // sub r1, #0x12
    // add r0, #0x25
    // strb r1, [r0]
    ov14_021F49E0(r0);
    ov14_021F48B4(r5);
    ov14_021F4848(r5);
    ov14_021F57B8(r5);
    ov14_021F29E4(*((u32*)(r5 + 0x34)), 5, 4);
    ov14_021F29E4(4, 2);
}




void ov14_021F1058(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // bl ov14_021F4720
    // add r0, r5, #0
    // bl ov14_021F4848
    // add r0, r5, #0
    // bl ov14_021F48B4
    // add r0, r5, #0
    // bl ov14_021F57B8
    // mov r0, #0x2f
    // ldr r1, [r5, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E86E0
    // ldr r1, _021F108C ; =ov14_021E9554
    // add r0, r5, #0
    // add r2, r4, #0
    // bl ov14_021F0234
    // pop {r3, r4, r5, pc}
    // _021F108C: .word ov14_021E9554
    // TODO: decompile
}




void ov14_021F1090(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // mov r0, #0x2f
    // ldr r1, [r5, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8704
    // ldr r1, _021F10B0 ; =ov14_021E9590
    // add r0, r5, #0
    // add r2, r4, #0
    // bl ov14_021F0234
    // pop {r3, r4, r5, pc}
    // nop
    // _021F10B0: .word ov14_021E9590
    // TODO: decompile
}




void ov14_021F10B4(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // mov r1, #0
    // bl ov14_021F5EC4
    // mov r0, #0x2f
    // ldr r1, [r5, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8328
    // ldr r1, _021F10D8 ; =ov14_021E95B4
    // add r0, r5, #0
    // add r2, r4, #0
    // bl ov14_021F0234
    // pop {r3, r4, r5, pc}
    // _021F10D8: .word ov14_021E95B4
    // TODO: decompile
}




void ov14_021F10DC(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // mov r0, #0x2f
    // ldr r1, [r5, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8314
    // ldr r1, _021F10FC ; =ov14_021E95B4
    // add r0, r5, #0
    // add r2, r4, #0
    // bl ov14_021F0234
    // pop {r3, r4, r5, pc}
    // nop
    // _021F10FC: .word ov14_021E95B4
    // TODO: decompile
}




void ov14_021F1100(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // mov r1, #0xff
    // add r0, #0x21
    // strb r1, [r0]
    // mov r0, #0x2f
    // ldr r1, [r5, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E84A4
    // ldr r1, _021F1124 ; =ov14_021E9434
    // add r0, r5, #0
    // add r2, r4, #0
    // bl ov14_021F0234
    // pop {r3, r4, r5, pc}
    // _021F1124: .word ov14_021E9434
    // TODO: decompile
}




void ov14_021F1128(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4, #0x34]
    // mov r1, #9
    // mov r2, #0
    // bl ov14_021F2A18
    // ldrb r0, [r4, #0x1f]
    // mov r1, #6
    // bl _s32_div_f
    // ldr r2, [r4, #0x34]
    // ldr r0, _021F116C ; =0x0000043C
    // str r1, [r2, r0]
    // ldr r1, [r4, #0x34]
    // ldr r0, [r1, r0]
    // str r0, [r4, #0x2c]
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8544
    // cmp r0, #0
    // bne _021F1162
    // add r0, r4, #0
    // bl ov14_021ED5B0
    // pop {r4, pc}
    // add r0, r4, #0
    // mov r1, #0x35
    // bl ov14_021F1100
    // pop {r4, pc}
    // _021F116C: .word 0x0000043C
    // TODO: decompile
}




void ov14_021F1170(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r0, #0x25
    // ldrb r0, [r0]
    // add r4, r1, #0
    // mov r1, #6
    // bl _s32_div_f
    // mov r1, #6
    // mul r1, r0
    // add r0, r5, #0
    // add r1, r4, r1
    // add r0, #0x25
    // strb r1, [r0]
    // add r0, r5, #0
    // bl ov14_021F48B4
    // add r0, r5, #0
    // bl ov14_021F57B8
    // ldr r0, [r5, #0x34]
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_GetNextInput
    // add r2, r0, #0
    // ldr r1, [r5, #0x34]
    // ldr r0, _021F11F4 ; =0x0000043C
    // add r3, r2, #0
    // str r2, [r1, r0]
    // ldr r0, [r5, #0x34]
    // mov r1, #8
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_SetNextLastUnk0FInputs
    // ldr r0, [r5, #0x34]
    // mov r1, #8
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_GetDpadBox
    // add r1, sp, #0
    // add r1, #1
    // add r2, sp, #0
    // bl DpadMenuBox_GetPosition
    // mov r0, #0x32
    // ldr r1, [r5, #0x34]
    // lsl r0, r0, #4
    // add r2, sp, #0
    // ldr r0, [r1, r0]
    // ldrb r1, [r2, #1]
    // ldrb r2, [r2]
    // bl ManagedSprite_SetPositionXY
    // ldr r0, [r5, #0x34]
    // mov r1, #9
    // mov r2, #8
    // bl ov14_021F29E4
    // ldr r0, [r5, #0x34]
    // mov r1, #9
    // mov r2, #1
    // bl ov14_021F2A18
    // mov r0, #0x3d
    // pop {r3, r4, r5, pc}
    // nop
    // _021F11F4: .word 0x0000043C
    // TODO: decompile
}




void ov14_021F11F8(void) {
    ov14_021F1004();
    // add r0, #0x25
    // ldrb r0, [r0]
    _s32_div_f(r4, 6);
    GridInputHandler_SetNextInput(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)), ((r1 << 0x18) >> 0x18));
    GridInputHandler_SetButtonInputMode(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)), 1);
}




void ov14_021F1228(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4, #0x34]
    // ldr r2, _021F1298 ; =0x0000044D
    // ldrb r3, [r0, r2]
    // lsl r2, r1, #2
    // add r3, r3, r2
    // bpl _021F123C
    // add r3, #0x18
    // b _021F1242
    // cmp r3, #0x18
    // blt _021F1242
    // sub r3, #0x18
    // ldr r2, _021F1298 ; =0x0000044D
    // cmp r1, #0
    // strb r3, [r0, r2]
    // ldr r0, [r4, #0x34]
    // ble _021F1256
    // mov r1, #5
    // mov r2, #4
    // bl ov14_021F29E4
    // b _021F125E
    // mov r1, #4
    // mov r2, #2
    // bl ov14_021F29E4
    // add r0, r4, #0
    // bl ov14_021F462C
    // add r0, r4, #0
    // bl ov14_021F4530
    // add r0, r4, #0
    // bl ov14_021F58B8
    // ldr r2, [r4, #0x34]
    // ldr r1, _021F1298 ; =0x0000044D
    // ldr r0, [r2, #0x2c]
    // ldrb r1, [r2, r1]
    // lsr r3, r1, #0x1f
    // lsl r2, r1, #0x1e
    // sub r2, r2, r3
    // mov r1, #0x1e
    // ror r2, r1
    // add r1, r3, r2
    // lsl r1, r1, #0x18
    // lsr r1, r1, #0x18
    // bl GridInputHandler_SetNextInput
    // ldr r0, [r4, #0x34]
    // mov r1, #1
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_SetButtonInputMode
    // pop {r4, pc}
    // _021F1298: .word 0x0000044D
    // TODO: decompile
}




void ov14_021F129C(void) {
    // push {r3, r4, r5, lr}
    // add r4, r0, #0
    // ldr r2, [r4, #0x34]
    // ldr r3, _021F1314 ; =0x0000044D
    // ldrb r5, [r2, r3]
    // lsr r5, r5, #2
    // lsl r5, r5, #2
    // add r1, r1, r5
    // strb r1, [r2, r3]
    // bl ov14_021F459C
    // add r0, r4, #0
    // bl ov14_021F58B8
    // ldr r0, [r4, #0x34]
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_GetNextInput
    // ldr r2, [r4, #0x34]
    // ldr r1, _021F1318 ; =0x0000043C
    // str r0, [r2, r1]
    // ldr r0, [r4, #0x34]
    // ldr r2, [r0, r1]
    // ldr r0, [r0, #0x2c]
    // lsl r2, r2, #0x18
    // lsr r2, r2, #0x18
    // mov r1, #6
    // add r3, r2, #0
    // bl GridInputHandler_SetNextLastUnk0FInputs
    // ldr r0, [r4, #0x34]
    // mov r1, #6
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_GetDpadBox
    // add r1, sp, #0
    // add r1, #1
    // add r2, sp, #0
    // bl DpadMenuBox_GetPosition
    // mov r0, #0x32
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // add r2, sp, #0
    // ldr r0, [r1, r0]
    // ldrb r1, [r2, #1]
    // ldrb r2, [r2]
    // bl ManagedSprite_SetPositionXY
    // ldr r0, [r4, #0x34]
    // mov r1, #9
    // mov r2, #8
    // bl ov14_021F29E4
    // ldr r0, [r4, #0x34]
    // mov r1, #9
    // mov r2, #1
    // bl ov14_021F2A18
    // pop {r3, r4, r5, pc}
    // _021F1314: .word 0x0000044D
    // _021F1318: .word 0x0000043C
    // TODO: decompile
}




void ov14_021F131C(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r1, [r4, #0x34]
    // ldr r0, _021F13A0 ; =0x0000044D
    // ldrb r1, [r1, r0]
    // cmp r1, #0x10
    // blo _021F1348
    // ldr r0, [r4, #4]
    // sub r1, #0x10
    // bl PCStorage_IsBonusWallpaperUnlocked
    // cmp r0, #0
    // bne _021F1348
    // ldr r0, _021F13A4 ; =0x000005F3
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #0xc
    // mov r2, #0x42
    // bl ov14_021F2270
    // pop {r4, pc}
    // add r1, r4, #0
    // add r1, #0x25
    // ldrb r1, [r1]
    // add r0, r4, #0
    // bl ov14_021E7930
    // ldr r2, [r4, #0x34]
    // ldr r1, _021F13A0 ; =0x0000044D
    // ldrb r1, [r2, r1]
    // cmp r1, r0
    // bne _021F1370
    // ldr r0, _021F13A4 ; =0x000005F3
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #0xc
    // mov r2, #0x42
    // bl ov14_021F2270
    // pop {r4, pc}
    // add r0, r4, #0
    // add r0, #0x25
    // ldrb r1, [r0]
    // ldrb r0, [r4, #0x1f]
    // cmp r1, r0
    // beq _021F138E
    // ldr r0, _021F13A8 ; =0x000005DC
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #0xc
    // mov r2, #0xa5
    // bl ov14_021F2270
    // pop {r4, pc}
    // ldr r0, _021F13AC ; =0x000005DD
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #0xc
    // mov r2, #0x47
    // bl ov14_021F2270
    // pop {r4, pc}
    // _021F13A0: .word 0x0000044D
    // _021F13A4: .word 0x000005F3
    // _021F13A8: .word 0x000005DC
    // _021F13AC: .word 0x000005DD
    // TODO: decompile
}




void ov14_021F13B0(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4, #0x34]
    // mov r1, #9
    // mov r2, #0
    // bl ov14_021F2A18
    // ldr r0, [r4, #8]
    // bl Party_GetCount
    // cmp r0, #6
    // beq _021F13EE
    // ldr r0, [r4, #0x34]
    // mov r1, #0x27
    // bl ov14_021F6654
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E84A4
    // ldr r0, [r4, #0x34]
    // bl ov14_021E884C
    // ldr r1, _021F1410 ; =ov14_021E9434
    // add r0, r4, #0
    // mov r2, #0x53
    // bl ov14_021F0234
    // pop {r4, pc}
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E83F4
    // add r0, r4, #0
    // mov r1, #0
    // mov r2, #2
    // mov r3, #0x25
    // bl ov14_021F685C
    // mov r0, #0xe
    // str r0, [r4, #0x30]
    // mov r0, #6
    // pop {r4, pc}
    // nop
    // _021F1410: .word ov14_021E9434
    // TODO: decompile
}




void ov14_021F1414(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4, #0x34]
    // mov r1, #0x27
    // bl ov14_021F6654
    // ldr r0, [r4, #0x34]
    // mov r1, #9
    // mov r2, #0
    // bl ov14_021F2A18
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E84A4
    // ldr r1, _021F1444 ; =ov14_021E9450
    // add r0, r4, #0
    // mov r2, #0x5c
    // bl ov14_021F0234
    // pop {r4, pc}
    // nop
    // _021F1444: .word ov14_021E9450
    // TODO: decompile
}




void ov14_021F1448(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r0, #0x25
    // ldrb r0, [r0]
    // add r4, r1, #0
    // mov r1, #6
    // bl _s32_div_f
    // mov r1, #6
    // mul r1, r0
    // add r0, r5, #0
    // add r1, r4, r1
    // add r0, #0x25
    // strb r1, [r0]
    // bl System_GetTouchNew
    // cmp r0, #0
    // bne _021F148C
    // ldr r0, [r5, #4]
    // add r5, #0x25
    // ldrb r1, [r5]
    // bl PCStorage_CountMonsAndEggsInBox
    // cmp r0, #0x1e
    // bne _021F1482
    // ldr r0, _021F14F8 ; =0x000005F3
    // bl PlaySE
    // b _021F1488
    // ldr r0, _021F14FC ; =0x000005DD
    // bl PlaySE
    // mov r0, #0x66
    // pop {r3, r4, r5, pc}
    // ldr r0, _021F14FC ; =0x000005DD
    // bl PlaySE
    // add r0, r5, #0
    // bl ov14_021F48B4
    // add r0, r5, #0
    // bl ov14_021F57B8
    // ldr r0, [r5, #0x34]
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_GetNextInput
    // add r2, r0, #0
    // ldr r1, [r5, #0x34]
    // ldr r0, _021F1500 ; =0x0000043C
    // add r3, r2, #0
    // str r2, [r1, r0]
    // ldr r0, [r5, #0x34]
    // mov r1, #8
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_SetNextLastUnk0FInputs
    // ldr r0, [r5, #0x34]
    // mov r1, #8
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_GetDpadBox
    // add r1, sp, #0
    // add r1, #1
    // add r2, sp, #0
    // bl DpadMenuBox_GetPosition
    // mov r0, #0x32
    // ldr r1, [r5, #0x34]
    // lsl r0, r0, #4
    // add r2, sp, #0
    // ldr r0, [r1, r0]
    // ldrb r1, [r2, #1]
    // ldrb r2, [r2]
    // bl ManagedSprite_SetPositionXY
    // ldr r0, [r5, #0x34]
    // mov r1, #9
    // mov r2, #8
    // bl ov14_021F29E4
    // ldr r0, [r5, #0x34]
    // mov r1, #9
    // mov r2, #1
    // bl ov14_021F2A18
    // mov r0, #0x61
    // pop {r3, r4, r5, pc}
    // _021F14F8: .word 0x000005F3
    // _021F14FC: .word 0x000005DD
    // _021F1500: .word 0x0000043C
    // TODO: decompile
}




void ov14_021F1504(void) {
    ov14_021F1004();
    // add r0, #0x25
    // ldrb r0, [r0]
    _s32_div_f(r4, 6);
    GridInputHandler_SetNextInput(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)), ((r1 << 0x18) >> 0x18));
    GridInputHandler_SetButtonInputMode(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)), 1);
}




void ov14_021F1534(void) {
}




void ov14_021F1540(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4, #0x34]
    // mov r1, #9
    // mov r2, #8
    // bl ov14_021F29E4
    // add r1, r4, #0
    // add r1, #0x25
    // ldrb r1, [r1]
    // ldr r0, [r4, #4]
    // bl PCStorage_CountMonsAndEggsInBox
    // cmp r0, #0x1e
    // bne _021F1566
    // ldr r0, _021F1578 ; =0x000005F3
    // bl PlaySE
    // b _021F156C
    // ldr r0, _021F157C ; =0x000005DD
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #0xc
    // mov r2, #0x66
    // bl ov14_021F2270
    // pop {r4, pc}
    // _021F1578: .word 0x000005F3
    // _021F157C: .word 0x000005DD
    // TODO: decompile
}




void ov14_021F1580(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // add r0, #0x21
    // strb r1, [r0]
    // ldr r1, [r4, #0x34]
    // ldr r0, _021F15C0 ; =0x0000044B
    // mov r2, #1
    // strb r2, [r1, r0]
    // add r1, r4, #0
    // add r1, #0x21
    // ldrb r1, [r1]
    // ldr r0, [r4, #0x34]
    // mov r2, #0
    // bl ov14_021F3190
    // add r0, r4, #0
    // bl ov14_021F40DC
    // add r0, r4, #0
    // add r0, #0x2a
    // ldrb r0, [r0]
    // cmp r0, #0
    // bne _021F15B4
    // ldr r0, [r4, #0x34]
    // bl ov14_021E8824
    // ldr r1, _021F15C4 ; =ov14_021EA254
    // add r0, r4, #0
    // mov r2, #0x73
    // bl ov14_021F0234
    // pop {r4, pc}
    // _021F15C0: .word 0x0000044B
    // _021F15C4: .word ov14_021EA254
    // TODO: decompile
}




void ov14_021F15C8(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // cmp r4, #0xff
    // bne _021F15D6
    // mov r2, #1
    // b _021F15D8
    // mov r2, #0
    // ldr r1, [r5, #0x34]
    // ldr r0, _021F17F8 ; =0x000088CC
    // str r2, [r1, r0]
    // mov r0, #0x32
    // ldr r1, [r5, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    // bl ManagedSprite_GetPositionXY
    // add r1, r5, #0
    // add r1, #0x21
    // ldrb r1, [r1]
    // ldr r0, [r5, #0x34]
    // add r3, sp, #0
    // add r2, r0, r1
    // ldr r1, _021F17FC ; =0x00004094
    // ldrb r1, [r2, r1]
    // mov r2, #0
    // ldrsh r2, [r3, r2]
    // lsl r1, r1, #2
    // add r1, r0, r1
    // mov r0, #0xbf
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // mov r1, #2
    // add r2, r2, #4
    // lsl r2, r2, #0x10
    // ldrsh r1, [r3, r1]
    // asr r2, r2, #0x10
    // bl ManagedSprite_SetPositionXY
    // cmp r4, #0x24
    // bhs _021F1684
    // cmp r4, #0x1e
    // blo _021F167C
    // ldr r0, [r5, #8]
    // bl Party_GetCount
    // add r1, r5, #0
    // add r1, #0x21
    // ldrb r1, [r1]
    // cmp r1, #0x1e
    // bhs _021F1658
    // add r1, r4, #0
    // sub r1, #0x1e
    // cmp r1, r0
    // bls _021F1650
    // add r0, r5, #0
    // bl ov14_021E765C
    // mov r0, #0x2f
    // ldr r1, [r5, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8634
    // b _021F17D0
    // ldr r0, [r5, #0x34]
    // bl ov14_021E884C
    // b _021F17D0
    // add r1, r4, #0
    // sub r1, #0x1e
    // cmp r1, r0
    // blo _021F1674
    // add r0, r5, #0
    // bl ov14_021E765C
    // mov r0, #0x2f
    // ldr r1, [r5, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8634
    // b _021F17D0
    // ldr r0, [r5, #0x34]
    // bl ov14_021E884C
    // b _021F17D0
    // ldr r0, [r5, #0x34]
    // bl ov14_021E884C
    // b _021F17D0
    // cmp r4, #0xff
    // bne _021F168A
    // b _021F1798
    // add r0, r5, #0
    // add r0, #0x25
    // ldrb r0, [r0]
    // mov r1, #6
    // bl _s32_div_f
    // mov r1, #6
    // mul r1, r0
    // add r1, r4, r1
    // add r0, r5, #0
    // sub r1, #0x25
    // add r0, #0x25
    // strb r1, [r0]
    // add r0, r5, #0
    // bl ov14_021F48B4
    // add r0, r5, #0
    // bl ov14_021F57B8
    // add r0, r5, #0
    // add r0, #0x21
    // ldrb r6, [r0]
    // cmp r6, #0x1e
    // blo _021F1752
    // sub r6, #0x1e
    // ldr r0, [r5, #8]
    // add r1, r6, #0
    // bl Party_GetMonByIndex
    // mov r1, #6
    // mov r2, #0
    // add r7, r0, #0
    // bl GetMonData
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // bl ItemIdIsMail
    // cmp r0, #1
    // bne _021F16E2
    // ldr r0, [r5, #0x34]
    // bl ov14_021E884C
    // b _021F17D0
    // add r0, r7, #0
    // mov r1, #0xa2
    // mov r2, #0
    // bl GetMonData
    // cmp r0, #0
    // beq _021F16F8
    // ldr r0, [r5, #0x34]
    // bl ov14_021E884C
    // b _021F17D0
    // add r0, r5, #0
    // add r1, r6, #0
    // bl ov14_021E6480
    // cmp r0, #0
    // bne _021F170C
    // ldr r0, [r5, #0x34]
    // bl ov14_021E884C
    // b _021F17D0
    // add r0, r5, #0
    // add r0, #0x25
    // ldrb r1, [r0]
    // ldrb r0, [r5, #0x1f]
    // cmp r1, r0
    // bne _021F172C
    // add r0, r5, #0
    // bl ov14_021E765C
    // mov r0, #0x2f
    // ldr r1, [r5, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8634
    // b _021F17D0
    // ldr r0, [r5, #4]
    // bl PCStorage_CountEmptySpotsInBox
    // cmp r0, #0
    // bne _021F173E
    // ldr r0, [r5, #0x34]
    // bl ov14_021E884C
    // b _021F17D0
    // add r0, r5, #0
    // bl ov14_021E765C
    // mov r0, #0x2f
    // ldr r1, [r5, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8634
    // b _021F17D0
    // add r0, r5, #0
    // add r0, #0x25
    // ldrb r1, [r0]
    // ldrb r0, [r5, #0x1f]
    // cmp r1, r0
    // bne _021F1772
    // add r0, r5, #0
    // bl ov14_021E765C
    // mov r0, #0x2f
    // ldr r1, [r5, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8634
    // b _021F17D0
    // ldr r0, [r5, #4]
    // bl PCStorage_CountEmptySpotsInBox
    // cmp r0, #0
    // bne _021F1784
    // ldr r0, [r5, #0x34]
    // bl ov14_021E884C
    // b _021F17D0
    // add r0, r5, #0
    // bl ov14_021E765C
    // mov r0, #0x2f
    // ldr r1, [r5, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8634
    // b _021F17D0
    // ldr r0, [r5, #0x34]
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_GetNextInput
    // add r1, r0, #0
    // cmp r1, #0x24
    // bhs _021F17BE
    // add r0, r5, #0
    // bl ov14_021E7588
    // cmp r0, #0
    // bne _021F17D0
    // mov r0, #0x2f
    // ldr r1, [r5, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8634
    // b _021F17D0
    // add r0, r5, #0
    // bl ov14_021E765C
    // mov r0, #0x2f
    // ldr r1, [r5, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8634
    // ldr r1, [r5, #0x34]
    // ldr r0, _021F1800 ; =0x0000044C
    // mov r2, #0
    // strb r4, [r1, r0]
    // ldr r1, [r5, #0x34]
    // sub r0, r0, #1
    // strb r2, [r1, r0]
    // add r0, r5, #0
    // bl ov14_021F08BC
    // add r0, r5, #0
    // mov r1, #2
    // add r0, #0x22
    // strb r1, [r0]
    // ldr r1, _021F1804 ; =ov14_021EA378
    // add r0, r5, #0
    // mov r2, #0x2b
    // bl ov14_021F0234
    // pop {r3, r4, r5, r6, r7, pc}
    // _021F17F8: .word 0x000088CC
    // _021F17FC: .word 0x00004094
    // _021F1800: .word 0x0000044C
    // _021F1804: .word ov14_021EA378
    // TODO: decompile
}




void ov14_021F1808(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // add r2, r4, #0
    // add r2, #0x21
    // strb r1, [r2]
    // add r1, r4, #0
    // add r1, #0x21
    // ldrb r1, [r1]
    // mov r2, #6
    // mov r3, #0
    // bl ov14_021E6070
    // ldr r2, [r4, #0x34]
    // ldr r1, _021F18A8 ; =0x000088C8
    // strh r0, [r2, r1]
    // ldr r2, [r4, #0x34]
    // add r0, r4, #0
    // ldrh r1, [r2, r1]
    // bl ov14_021F5FBC
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8434
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8234
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8294
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8314
    // ldr r0, [r4, #0x34]
    // ldr r1, _021F18A8 ; =0x000088C8
    // ldrh r1, [r0, r1]
    // cmp r1, #0
    // beq _021F189C
    // mov r1, #0xb
    // mov r2, #0
    // bl ov14_021F2A18
    // add r1, r4, #0
    // add r1, #0x21
    // ldrb r1, [r1]
    // ldr r0, [r4, #0x34]
    // mov r2, #0
    // bl ov14_021F396C
    // ldr r0, [r4, #0x34]
    // ldr r1, _021F18A8 ; =0x000088C8
    // ldrh r1, [r0, r1]
    // bl ov14_021F3844
    // ldr r0, [r4, #0x34]
    // bl ov14_021F39D0
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E88BC
    // ldr r1, _021F18AC ; =ov14_021EA408
    // add r0, r4, #0
    // mov r2, #0x76
    // bl ov14_021F0234
    // pop {r4, pc}
    // _021F18A8: .word 0x000088C8
    // _021F18AC: .word ov14_021EA408
    // TODO: decompile
}




void ov14_021F18B0(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r3, [r5, #0x34]
    // ldr r2, _021F19E4 ; =0x000088C8
    // ldrh r4, [r3, r2]
    // add r2, r5, #0
    // add r2, #0x21
    // strb r1, [r2]
    // add r1, r5, #0
    // add r1, #0x21
    // ldrb r1, [r1]
    // mov r2, #6
    // mov r3, #0
    // bl ov14_021E6070
    // ldr r2, [r5, #0x34]
    // ldr r1, _021F19E4 ; =0x000088C8
    // strh r0, [r2, r1]
    // mov r0, #0x2f
    // ldr r1, [r5, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8544
    // cmp r0, #1
    // bne _021F190E
    // cmp r4, #0
    // bne _021F18F2
    // ldr r1, [r5, #0x34]
    // ldr r0, _021F19E4 ; =0x000088C8
    // ldrh r0, [r1, r0]
    // cmp r0, #0
    // beq _021F1900
    // mov r0, #0x2f
    // ldr r1, [r5, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E83F4
    // b _021F1932
    // beq _021F1932
    // mov r0, #0x2f
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E84A4
    // b _021F1932
    // mov r0, #0x2f
    // ldr r1, [r5, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8234
    // mov r0, #0x2f
    // ldr r1, [r5, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8294
    // mov r0, #0x2f
    // ldr r1, [r5, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8314
    // ldr r2, [r5, #0x34]
    // ldr r1, _021F19E4 ; =0x000088C8
    // add r0, r5, #0
    // ldrh r1, [r2, r1]
    // bl ov14_021F5FBC
    // ldr r0, [r5, #0x34]
    // ldr r1, _021F19E4 ; =0x000088C8
    // ldrh r1, [r0, r1]
    // cmp r1, #0
    // beq _021F198A
    // mov r1, #0xb
    // mov r2, #0
    // bl ov14_021F2A18
    // add r1, r5, #0
    // add r1, #0x21
    // ldrb r1, [r1]
    // ldr r0, [r5, #0x34]
    // mov r2, #0
    // bl ov14_021F396C
    // ldr r0, [r5, #0x34]
    // ldr r1, _021F19E4 ; =0x000088C8
    // ldrh r1, [r0, r1]
    // bl ov14_021F3844
    // ldr r0, [r5, #0x34]
    // bl ov14_021F39D0
    // add r1, r5, #0
    // add r1, #0x21
    // ldrb r1, [r1]
    // ldr r0, [r5, #0x34]
    // mov r2, #1
    // bl ov14_021F34C8
    // mov r0, #0x2f
    // ldr r1, [r5, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E88BC
    // b _021F19A4
    // mov r1, #0xb
    // bl ov14_021F2A44
    // cmp r0, #1
    // bne _021F19A4
    // ldr r0, [r5, #0x34]
    // mov r1, #0xb
    // mov r2, #0
    // bl ov14_021F2A18
    // add r0, r5, #0
    // bl ov14_021F40DC
    // add r0, r5, #0
    // add r0, #0x21
    // ldrb r0, [r0]
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    // mov r3, #0
    // bl ov14_021F2F88
    // add r2, sp, #0
    // mov r0, #2
    // ldrsh r3, [r2, r0]
    // ldr r1, [r5, #0x34]
    // ldr r0, _021F19E8 ; =0x000040B8
    // add r3, #8
    // str r3, [r1, r0]
    // mov r1, #0
    // ldrsh r2, [r2, r1]
    // ldr r1, [r5, #0x34]
    // add r0, r0, #4
    // add r2, #8
    // str r2, [r1, r0]
    // add r0, r5, #0
    // bl ov14_021F1F24
    // ldr r1, _021F19EC ; =ov14_021EA4C8
    // add r0, r5, #0
    // mov r2, #0x7e
    // bl ov14_021F0234
    // pop {r3, r4, r5, pc}
    // nop
    // _021F19E4: .word 0x000088C8
    // _021F19E8: .word 0x000040B8
    // _021F19EC: .word ov14_021EA4C8
    // TODO: decompile
}




void ov14_021F19F0(void) {
    // push {r3, r4, lr}
    // sub sp, #4
    // add r4, r0, #0
    // add r2, r4, #0
    // add r2, #0x21
    // strb r1, [r2]
    // add r1, r4, #0
    // add r1, #0x21
    // ldrb r1, [r1]
    // mov r2, #6
    // mov r3, #0
    // bl ov14_021E6070
    // ldr r2, [r4, #0x34]
    // ldr r1, _021F1B38 ; =0x000088C8
    // strh r0, [r2, r1]
    // add r0, r4, #0
    // mov r1, #0
    // bl ov14_021F6408
    // ldr r1, [r4, #0x34]
    // ldr r0, _021F1B38 ; =0x000088C8
    // ldrh r0, [r1, r0]
    // cmp r0, #0
    // bne _021F1A78
    // ldr r0, [r1, #0x2c]
    // add r1, r4, #0
    // add r1, #0x21
    // ldrb r1, [r1]
    // bl GridInputHandler_SetNextInput
    // ldr r0, [r4, #0x34]
    // mov r1, #1
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_SetButtonInputMode
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8648
    // cmp r0, #1
    // bne _021F1A4E
    // add sp, #4
    // mov r0, #0x82
    // pop {r3, r4, pc}
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E85E4
    // cmp r0, #1
    // bne _021F1A6A
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E85D0
    // ldr r1, _021F1B3C ; =ov14_021E99A0
    // add r0, r4, #0
    // mov r2, #0x82
    // bl ov14_021F0234
    // add sp, #4
    // pop {r3, r4, pc}
    // ldr r0, _021F1B40 ; =0x000005EB
    // bl PlaySE
    // ldr r0, [r4, #0x34]
    // mov r1, #0xb
    // mov r2, #0
    // bl ov14_021F2A18
    // add r1, r4, #0
    // add r1, #0x21
    // ldrb r1, [r1]
    // ldr r0, [r4, #0x34]
    // mov r2, #2
    // bl ov14_021F396C
    // ldr r0, [r4, #0x34]
    // ldr r1, _021F1B38 ; =0x000088C8
    // ldrh r1, [r0, r1]
    // bl ov14_021F3844
    // ldr r0, [r4, #0x34]
    // bl ov14_021F39D0
    // add r1, r4, #0
    // add r1, #0x21
    // ldrb r1, [r1]
    // ldr r0, [r4, #0x34]
    // mov r2, #1
    // bl ov14_021F34C8
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E88BC
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E85E4
    // cmp r0, #1
    // ldr r1, [r4, #0x34]
    // bne _021F1ADE
    // mov r0, #0x2f
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E85D0
    // b _021F1AF8
    // mov r0, #0x2f
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8648
    // cmp r0, #1
    // bne _021F1AF8
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8634
    // add r0, r4, #0
    // add r0, #0x21
    // ldrb r0, [r0]
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    // mov r3, #2
    // bl ov14_021F2F88
    // add r2, sp, #0
    // mov r0, #2
    // ldrsh r3, [r2, r0]
    // ldr r1, [r4, #0x34]
    // ldr r0, _021F1B44 ; =0x000040B8
    // add r3, #8
    // str r3, [r1, r0]
    // mov r1, #0
    // ldrsh r2, [r2, r1]
    // ldr r1, [r4, #0x34]
    // add r0, r0, #4
    // add r2, #8
    // str r2, [r1, r0]
    // add r0, r4, #0
    // bl ov14_021F1F24
    // ldr r1, _021F1B48 ; =ov14_021EA778
    // add r0, r4, #0
    // mov r2, #0x84
    // bl ov14_021F0234
    // add sp, #4
    // pop {r3, r4, pc}
    // _021F1B38: .word 0x000088C8
    // _021F1B3C: .word ov14_021E99A0
    // _021F1B40: .word 0x000005EB
    // _021F1B44: .word 0x000040B8
    // _021F1B48: .word ov14_021EA778
    // TODO: decompile
}




void ov14_021F1B4C(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // add r2, r4, #0
    // add r2, #0x21
    // strb r1, [r2]
    // ldr r3, [r4, #0x34]
    // ldr r2, _021F1BF0 ; =0x000088CA
    // strh r1, [r3, r2]
    // add r1, r4, #0
    // add r1, #0x21
    // ldrb r1, [r1]
    // mov r2, #6
    // mov r3, #0
    // bl ov14_021E6070
    // ldr r2, [r4, #0x34]
    // ldr r1, _021F1BF4 ; =0x000088C8
    // strh r0, [r2, r1]
    // ldr r0, [r4, #0x34]
    // ldrh r0, [r0, r1]
    // cmp r0, #0
    // bne _021F1B7C
    // mov r0, #0x82
    // pop {r4, pc}
    // ldr r0, _021F1BF8 ; =0x000005EB
    // bl PlaySE
    // ldr r1, [r4, #0x34]
    // ldr r0, _021F1BFC ; =0x0000044B
    // mov r2, #1
    // strb r2, [r1, r0]
    // ldr r0, [r4, #0x34]
    // mov r1, #0xb
    // mov r2, #0
    // bl ov14_021F2A18
    // add r1, r4, #0
    // add r1, #0x21
    // ldrb r1, [r1]
    // ldr r0, [r4, #0x34]
    // mov r2, #2
    // bl ov14_021F39A0
    // ldr r0, [r4, #0x34]
    // ldr r1, _021F1BF4 ; =0x000088C8
    // ldrh r1, [r0, r1]
    // bl ov14_021F3844
    // add r1, r4, #0
    // add r1, #0x21
    // ldrb r1, [r1]
    // ldr r0, [r4, #0x34]
    // mov r2, #1
    // bl ov14_021F34C8
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E88BC
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8648
    // cmp r0, #1
    // bne _021F1BE2
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8634
    // ldr r1, _021F1C00 ; =ov14_021EAA04
    // add r0, r4, #0
    // mov r2, #0x88
    // bl ov14_021F0234
    // pop {r4, pc}
    // nop
    // _021F1BF0: .word 0x000088CA
    // _021F1BF4: .word 0x000088C8
    // _021F1BF8: .word 0x000005EB
    // _021F1BFC: .word 0x0000044B
    // _021F1C00: .word ov14_021EAA04
    // TODO: decompile
}




void ov14_021F1C04(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4, #0x34]
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_GetNextInput
    // add r1, r0, #0
    // cmp r1, #0x24
    // bhs _021F1C2E
    // add r0, r4, #0
    // bl ov14_021E7588
    // cmp r0, #1
    // bne _021F1C34
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8620
    // b _021F1C34
    // add r0, r4, #0
    // bl ov14_021E765C
    // add r0, r4, #0
    // bl ov14_021F1F24
    // ldr r1, _021F1C48 ; =ov14_021EAC24
    // add r0, r4, #0
    // mov r2, #0x86
    // bl ov14_021F0234
    // pop {r4, pc}
    // nop
    // _021F1C48: .word ov14_021EAC24
    // TODO: decompile
}




void ov14_021F1C4C(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // ldr r1, [r5, #0x34]
    // ldr r0, _021F1CD4 ; =0x0000044C
    // mov r2, #0
    // strb r4, [r1, r0]
    // ldr r1, [r5, #0x34]
    // sub r0, r0, #1
    // strb r2, [r1, r0]
    // mov r0, #0x32
    // ldr r1, [r5, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    // bl ManagedSprite_GetPositionXY
    // mov r0, #0xca
    // add r3, sp, #0
    // mov r2, #0
    // ldrsh r2, [r3, r2]
    // ldr r1, [r5, #0x34]
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // mov r1, #2
    // add r2, #8
    // lsl r2, r2, #0x10
    // ldrsh r1, [r3, r1]
    // asr r2, r2, #0x10
    // bl ManagedSprite_SetPositionXY
    // ldr r1, [r5, #0x34]
    // ldr r0, _021F1CD4 ; =0x0000044C
    // ldrb r0, [r1, r0]
    // cmp r0, #0xff
    // bne _021F1CA0
    // add r0, r5, #0
    // bl ov14_021F1C04
    // pop {r3, r4, r5, pc}
    // add r1, r5, #0
    // add r1, #0x21
    // ldrb r1, [r1]
    // add r0, r5, #0
    // add r2, r4, #0
    // bl ov14_021E6AA0
    // cmp r0, #0
    // bne _021F1CBA
    // add r0, r5, #0
    // bl ov14_021F1C04
    // pop {r3, r4, r5, pc}
    // mov r0, #0x2f
    // ldr r1, [r5, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E88F8
    // ldr r1, _021F1CD8 ; =ov14_021EAB54
    // add r0, r5, #0
    // mov r2, #0x8a
    // bl ov14_021F0234
    // pop {r3, r4, r5, pc}
    // nop
    // _021F1CD4: .word 0x0000044C
    // _021F1CD8: .word ov14_021EAB54
    // TODO: decompile
}




void ov14_021F1CDC(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // add r2, r4, #0
    // add r2, #0x21
    // strb r1, [r2]
    // add r1, r4, #0
    // add r1, #0x21
    // ldrb r1, [r1]
    // mov r2, #6
    // mov r3, #0
    // bl ov14_021E6070
    // ldr r2, [r4, #0x34]
    // ldr r1, _021F1D64 ; =0x000088C8
    // strh r0, [r2, r1]
    // ldr r2, [r4, #0x34]
    // add r0, r4, #0
    // ldrh r1, [r2, r1]
    // bl ov14_021F5FBC
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8434
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8314
    // ldr r0, [r4, #0x34]
    // ldr r1, _021F1D64 ; =0x000088C8
    // ldrh r1, [r0, r1]
    // cmp r1, #0
    // beq _021F1D58
    // mov r1, #0xb
    // mov r2, #0
    // bl ov14_021F2A18
    // add r1, r4, #0
    // add r1, #0x21
    // ldrb r1, [r1]
    // ldr r0, [r4, #0x34]
    // mov r2, #1
    // bl ov14_021F396C
    // ldr r0, [r4, #0x34]
    // ldr r1, _021F1D64 ; =0x000088C8
    // ldrh r1, [r0, r1]
    // bl ov14_021F3844
    // ldr r0, [r4, #0x34]
    // bl ov14_021F39D0
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E88BC
    // ldr r1, _021F1D68 ; =ov14_021EA408
    // add r0, r4, #0
    // mov r2, #0x8c
    // bl ov14_021F0234
    // pop {r4, pc}
    // _021F1D64: .word 0x000088C8
    // _021F1D68: .word ov14_021EA408
    // TODO: decompile
}




void ov14_021F1D6C(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r2, r5, #0
    // add r2, #0x21
    // strb r1, [r2]
    // ldr r2, [r5, #0x34]
    // ldr r1, _021F1EAC ; =0x000088C8
    // mov r3, #0
    // ldrh r4, [r2, r1]
    // add r1, r5, #0
    // add r1, #0x21
    // ldrb r1, [r1]
    // mov r2, #6
    // bl ov14_021E6070
    // ldr r2, [r5, #0x34]
    // ldr r1, _021F1EAC ; =0x000088C8
    // strh r0, [r2, r1]
    // mov r0, #0x2f
    // ldr r1, [r5, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8544
    // cmp r0, #1
    // bne _021F1DCA
    // cmp r4, #0
    // bne _021F1DAE
    // ldr r1, [r5, #0x34]
    // ldr r0, _021F1EAC ; =0x000088C8
    // ldrh r0, [r1, r0]
    // cmp r0, #0
    // beq _021F1DBC
    // mov r0, #0x2f
    // ldr r1, [r5, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E83F4
    // b _021F1DD6
    // beq _021F1DD6
    // mov r0, #0x2f
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E84A4
    // b _021F1DD6
    // mov r0, #0x2f
    // ldr r1, [r5, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8314
    // ldr r2, [r5, #0x34]
    // ldr r1, _021F1EAC ; =0x000088C8
    // add r0, r5, #0
    // ldrh r1, [r2, r1]
    // bl ov14_021F5FBC
    // ldr r0, [r5, #0x34]
    // ldr r1, _021F1EAC ; =0x000088C8
    // ldrh r1, [r0, r1]
    // cmp r1, #0
    // beq _021F1E52
    // mov r1, #0xb
    // mov r2, #0
    // bl ov14_021F2A18
    // add r1, r5, #0
    // add r1, #0x21
    // ldrb r1, [r1]
    // ldr r0, [r5, #0x34]
    // mov r2, #1
    // bl ov14_021F396C
    // ldr r0, [r5, #0x34]
    // ldr r1, _021F1EAC ; =0x000088C8
    // ldrh r1, [r0, r1]
    // bl ov14_021F3844
    // ldr r0, [r5, #0x34]
    // bl ov14_021F39D0
    // add r1, r5, #0
    // add r1, #0x21
    // ldrb r1, [r1]
    // ldr r0, [r5, #0x34]
    // mov r2, #1
    // bl ov14_021F34C8
    // mov r0, #0x2f
    // ldr r1, [r5, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E88BC
    // ldr r1, [r5, #0x34]
    // ldr r0, _021F1EAC ; =0x000088C8
    // ldrh r0, [r1, r0]
    // bl ItemIdIsMail
    // cmp r0, #1
    // bne _021F1E46
    // add r0, r5, #0
    // mov r1, #0x28
    // mov r2, #9
    // bl ov14_021F6928
    // b _021F1E6C
    // add r0, r5, #0
    // mov r1, #0x28
    // mov r2, #0xa
    // bl ov14_021F6928
    // b _021F1E6C
    // mov r1, #0xb
    // bl ov14_021F2A44
    // cmp r0, #1
    // bne _021F1E6C
    // ldr r0, [r5, #0x34]
    // mov r1, #0xb
    // mov r2, #0
    // bl ov14_021F2A18
    // add r0, r5, #0
    // bl ov14_021F40DC
    // add r0, r5, #0
    // add r0, #0x21
    // ldrb r0, [r0]
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    // mov r3, #1
    // bl ov14_021F2F88
    // add r2, sp, #0
    // mov r0, #2
    // ldrsh r3, [r2, r0]
    // ldr r1, [r5, #0x34]
    // ldr r0, _021F1EB0 ; =0x000040B8
    // add r3, #8
    // str r3, [r1, r0]
    // mov r1, #0
    // ldrsh r2, [r2, r1]
    // ldr r1, [r5, #0x34]
    // add r0, r0, #4
    // add r2, #8
    // str r2, [r1, r0]
    // add r0, r5, #0
    // bl ov14_021F1F24
    // ldr r1, _021F1EB4 ; =ov14_021EACD4
    // add r0, r5, #0
    // mov r2, #0x8d
    // bl ov14_021F0234
    // pop {r3, r4, r5, pc}
    // nop
    // _021F1EAC: .word 0x000088C8
    // _021F1EB0: .word 0x000040B8
    // _021F1EB4: .word ov14_021EACD4
    // TODO: decompile
}




void ov14_021F1EB8(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, [r5, #0x34]
    // ldr r1, _021F1F1C ; =0x000088C8
    // ldrh r1, [r0, r1]
    // cmp r1, #0
    // bne _021F1EFA
    // mov r1, #9
    // mov r2, #0
    // bl ov14_021F2A18
    // add r2, r5, #0
    // add r2, #0x21
    // ldrb r1, [r5, #0x1f]
    // ldrb r2, [r2]
    // add r0, r5, #0
    // bl ov14_021E60C0
    // mov r1, #0x4c
    // mov r2, #0
    // bl GetBoxMonData
    // cmp r0, #0
    // bne _021F1EF6
    // mov r0, #0x24
    // str r0, [r5, #0x2c]
    // add r0, r5, #0
    // mov r1, #1
    // bl ov14_021F027C
    // pop {r3, r4, r5, pc}
    // mov r4, #0x7c
    // b _021F1F04
    // mov r1, #9
    // mov r2, #0
    // bl ov14_021F2A18
    // mov r4, #0x78
    // mov r0, #0x2f
    // ldr r1, [r5, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E84A4
    // ldr r1, _021F1F20 ; =ov14_021E9450
    // add r0, r5, #0
    // add r2, r4, #0
    // bl ov14_021F0234
    // pop {r3, r4, r5, pc}
    // _021F1F1C: .word 0x000088C8
    // _021F1F20: .word ov14_021E9450
    // TODO: decompile
}




void ov14_021F1F24(void) {
}




void ov14_021F1F38(void) {
}




void ov14_021F1F44(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // bl ov14_021F7B7C
    // cmp r0, #1
    // bne _021F1F7E
    // ldr r0, _021F2008 ; =0x000005DD
    // bl PlaySE
    // add r0, r5, #0
    // mov r1, #1
    // add r0, #0x26
    // strb r1, [r0]
    // add r0, r5, #0
    // add r0, #0x27
    // strb r1, [r0]
    // ldr r0, [r5, #0x34]
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_GetNextInput
    // add r1, r5, #0
    // add r1, #0x28
    // strb r0, [r1]
    // add r0, r5, #0
    // mov r1, #0xf
    // mov r2, #0x97
    // bl ov14_021F2330
    // pop {r3, r4, r5, pc}
    // add r0, r5, #0
    // bl ov14_021F7340
    // add r4, r0, #0
    // ldr r0, [r5, #0x34]
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_IsButtonInputMode
    // cmp r0, #0
    // bne _021F1F96
    // mov r4, #1
    // mvn r4, r4
    // mov r1, #2
    // mvn r1, r1
    // cmp r4, r1
    // bhi _021F1FCE
    // bhs _021F1FE0
    // cmp r4, #0x2a
    // bhi _021F1FC4
    // add r0, r4, #0
    // sub r0, #0x24
    // bmi _021F1FFA
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _021F1FB6: ; jump table
    // mov r0, #3
    // mvn r0, r0
    // cmp r4, r0
    // beq _021F2004
    // b _021F1FFA
    // add r0, r1, #1
    // cmp r4, r0
    // bhi _021F1FD8
    // beq _021F1FF0
    // b _021F1FFA
    // add r0, r1, #2
    // cmp r4, r0
    // beq _021F2004
    // b _021F1FFA
    // ldr r0, _021F200C ; =0x000005DC
    // bl PlaySE
    // add r0, r5, #0
    // mov r1, #0x74
    // bl ov14_021F0244
    // pop {r3, r4, r5, pc}
    // add r0, r5, #0
    // mov r1, #0xff
    // bl ov14_021F15C8
    // pop {r3, r4, r5, pc}
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov14_021F15C8
    // pop {r3, r4, r5, pc}
    // mov r0, #0x73
    // pop {r3, r4, r5, pc}
    // _021F2008: .word 0x000005DD
    // _021F200C: .word 0x000005DC
    // TODO: decompile
}




void ov14_021F2010(void) {
}




void ov14_021F2020(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r1, r5, #0
    // add r1, #0x21
    // ldrb r1, [r1]
    // mov r2, #6
    // mov r3, #0
    // bl ov14_021E6070
    // add r1, r0, #0
    // str r1, [sp]
    // lsl r1, r1, #0x10
    // ldr r0, [r5, #0xc]
    // lsr r1, r1, #0x10
    // mov r2, #1
    // mov r3, #0xa
    // bl Bag_AddItem
    // cmp r0, #1
    // bne _021F20A4
    // add r2, r5, #0
    // add r2, #0x21
    // ldrb r1, [r5, #0x1f]
    // ldrb r2, [r2]
    // add r0, r5, #0
    // bl ov14_021E60C0
    // add r4, r0, #0
    // ldr r1, [sp]
    // add r0, r5, #0
    // mov r2, #0x25
    // bl ov14_021F673C
    // mov r0, #0
    // add r1, r5, #0
    // str r0, [sp]
    // add r1, #0x21
    // ldrb r1, [r1]
    // add r0, r5, #0
    // mov r2, #6
    // add r3, sp, #0
    // bl ov14_021E6094
    // add r0, r4, #0
    // bl ov14_021E64D0
    // cmp r0, #1
    // bne _021F2096
    // add r0, r5, #0
    // add r0, #0x21
    // ldrb r2, [r0]
    // ldr r3, [r5, #0x34]
    // ldrb r1, [r5, #0x1f]
    // add r4, r3, r2
    // ldr r3, _021F20BC ; =0x00004094
    // add r0, r5, #0
    // ldrb r3, [r4, r3]
    // bl ov14_021F2ED0
    // add r1, r5, #0
    // add r1, #0x21
    // ldrb r1, [r1]
    // add r0, r5, #0
    // bl ov14_021E75F4
    // b _021F20B2
    // ldr r0, _021F20C0 ; =0x000005F3
    // bl PlaySE
    // add r0, r5, #0
    // mov r1, #0x25
    // bl ov14_021F675C
    // mov r0, #0xe
    // str r0, [r5, #0x30]
    // mov r0, #6
    // pop {r3, r4, r5, pc}
    // nop
    // _021F20BC: .word 0x00004094
    // _021F20C0: .word 0x000005F3
    // TODO: decompile
}




void ov14_021F20C4(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl ov14_021F40DC
    // ldr r0, [r4, #0x34]
    // mov r1, #0x25
    // bl ov14_021F6654
    // add r0, r4, #0
    // bl ov14_021E71E8
    // ldr r1, [r4, #0x34]
    // ldr r0, _021F20F0 ; =0x000088DC
    // ldr r0, [r1, r0]
    // bl ov14_021F3354
    // ldr r0, [r4, #0x34]
    // bl ov14_021E884C
    // mov r0, #0x1a
    // pop {r4, pc}
    // nop
    // _021F20F0: .word 0x000088DC
    // TODO: decompile
}




void ov14_021F20F4(void) {
    // push {r3, r4, r5, lr}
    // add r4, r0, #0
    // ldr r0, [r4]
    // ldr r0, [r0]
    // bl Save_Bag_Get
    // ldr r2, [r4, #0x34]
    // ldr r1, _021F21A8 ; =0x000088C8
    // mov r3, #0xa
    // ldrh r1, [r2, r1]
    // mov r2, #1
    // bl Bag_AddItem
    // cmp r0, #0
    // bne _021F212A
    // ldr r0, _021F21AC ; =0x000005F3
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #6
    // mov r2, #0x25
    // bl ov14_021F68C0
    // mov r0, #0x7a
    // str r0, [r4, #0x30]
    // mov r0, #6
    // pop {r3, r4, r5, pc}
    // mov r1, #0
    // add r0, sp, #0
    // strh r1, [r0]
    // add r1, r4, #0
    // add r1, #0x21
    // ldrb r1, [r1]
    // add r0, r4, #0
    // mov r2, #6
    // add r3, sp, #0
    // bl ov14_021E6094
    // add r2, r4, #0
    // add r2, #0x21
    // ldrb r1, [r4, #0x1f]
    // ldrb r2, [r2]
    // add r0, r4, #0
    // bl ov14_021E60C0
    // bl ov14_021E64D0
    // cmp r0, #1
    // bne _021F216C
    // add r0, r4, #0
    // add r0, #0x21
    // ldrb r2, [r0]
    // ldr r3, [r4, #0x34]
    // ldrb r1, [r4, #0x1f]
    // add r5, r3, r2
    // ldr r3, _021F21B0 ; =0x00004094
    // add r0, r4, #0
    // ldrb r3, [r5, r3]
    // bl ov14_021F2ED0
    // add r1, r4, #0
    // add r1, #0x21
    // ldrb r1, [r1]
    // add r0, r4, #0
    // bl ov14_021E7588
    // add r0, r4, #0
    // bl ov14_021F40DC
    // ldr r0, [r4, #0x34]
    // mov r1, #0x25
    // bl ov14_021F6654
    // ldr r0, [r4, #0x34]
    // mov r1, #1
    // bl ov14_021F391C
    // ldr r0, [r4, #0x34]
    // mov r1, #0xb
    // mov r2, #2
    // bl ov14_021F29E4
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E88F8
    // mov r0, #0x79
    // pop {r3, r4, r5, pc}
    // _021F21A8: .word 0x000088C8
    // _021F21AC: .word 0x000005F3
    // _021F21B0: .word 0x00004094
    // TODO: decompile
}




void ov14_021F21B4(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _021F21CC ; =0x0000060D
    // bl PlaySE
    // mov r0, #0xb3
    // str r0, [r4, #0x30]
    // add r0, r4, #0
    // mov r1, #1
    // bl ov14_021F0204
    // pop {r4, pc}
    // _021F21CC: .word 0x0000060D
    // TODO: decompile
}




void ov14_021F21D0(void) {
    ov14_021F6654(*((u32*)(r0 + 0x34)), 0x25);
    GridInputHandler_SetButtonInputMode(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)), 1);
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021F21FA: ; jump table
    ov14_021F685C(r4, 0, 0, 0x27);
    ov14_021F3488(r4, 2, 0);
    ov14_021F685C(r4, 0, 0, 0x27);
    ov14_021F43F4(*((u32*)(r4 + 0x34)), 1);
    ov14_021F3488(r4, 1, 0);
    ov14_021F43F4(*((u32*)(r4 + 0x34)), 1);
    ov14_021F3488(r4, 1, 0);
    ov14_021F43F4(*((u32*)(r4 + 0x34)), 1);
    ov14_021F3488(r4, 0x81, 0);
}




void ov14_021F2270(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r5, r0, #0
    // add r6, r2, #0
    // mov r0, #0x2f
    // ldr r2, [r5, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r2, r0]
    // add r2, sp, #0
    // add r2, #1
    // add r3, sp, #0
    // add r4, r1, #0
    // bl sub_02019B1C
    // mov r0, #0x2f
    // add r3, sp, #0
    // ldr r1, [r5, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // add r1, r4, #0
    // add r2, sp, #4
    // add r3, #2
    // bl sub_02019B44
    // ldr r2, [r5, #0x34]
    // ldr r0, _021F232C ; =0x000088D4
    // mov r3, #1
    // ldrb r1, [r2, r0]
    // bic r1, r3
    // mov r3, #1
    // orr r1, r3
    // strb r1, [r2, r0]
    // mov r0, #0x2f
    // ldr r1, [r5, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // add r1, r4, #0
    // bl sub_02019B10
    // lsl r0, r0, #0x19
    // ldr r3, [r5, #0x34]
    // ldr r1, _021F232C ; =0x000088D4
    // mov r4, #0xfe
    // ldrb r2, [r3, r1]
    // lsr r0, r0, #0x18
    // bic r2, r4
    // orr r0, r2
    // strb r0, [r3, r1]
    // ldr r0, [r5, #0x34]
    // add r2, r1, #1
    // ldrb r3, [r0, r2]
    // mov r2, #0xf
    // bic r3, r2
    // mov r2, #0xd
    // orr r3, r2
    // add r2, r1, #1
    // strb r3, [r0, r2]
    // ldr r0, [r5, #0x34]
    // ldrb r3, [r0, r2]
    // mov r2, #0xf0
    // bic r3, r2
    // mov r2, #0xc0
    // orr r3, r2
    // add r2, r1, #1
    // strb r3, [r0, r2]
    // ldr r3, [r5, #0x34]
    // mov r2, #0
    // add r0, r1, #2
    // strb r2, [r3, r0]
    // ldr r3, [r5, #0x34]
    // add r0, r1, #3
    // strb r2, [r3, r0]
    // add r0, sp, #0
    // mov r3, #1
    // ldrsb r7, [r0, r3]
    // ldr r4, [r5, #0x34]
    // add r3, r1, #4
    // strb r7, [r4, r3]
    // ldrsb r4, [r0, r2]
    // ldr r3, [r5, #0x34]
    // add r2, r1, #5
    // strb r4, [r3, r2]
    // ldrh r4, [r0, #4]
    // ldr r3, [r5, #0x34]
    // add r2, r1, #6
    // strb r4, [r3, r2]
    // ldrh r3, [r0, #2]
    // ldr r2, [r5, #0x34]
    // add r0, r1, #7
    // strb r3, [r2, r0]
    // str r6, [r5, #0x30]
    // mov r0, #8
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // _021F232C: .word 0x000088D4
    // TODO: decompile
}




void ov14_021F2330(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r5, r0, #0
    // add r6, r2, #0
    // mov r0, #0x2f
    // ldr r2, [r5, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r2, r0]
    // add r2, sp, #0
    // add r2, #1
    // add r3, sp, #0
    // add r4, r1, #0
    // bl sub_02019B1C
    // mov r0, #0x2f
    // add r3, sp, #0
    // ldr r1, [r5, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // add r1, r4, #0
    // add r2, sp, #4
    // add r3, #2
    // bl sub_02019B44
    // ldr r2, [r5, #0x34]
    // ldr r0, _021F23EC ; =0x000088D4
    // mov r3, #1
    // ldrb r1, [r2, r0]
    // bic r1, r3
    // mov r3, #1
    // orr r1, r3
    // strb r1, [r2, r0]
    // mov r0, #0x2f
    // ldr r1, [r5, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // add r1, r4, #0
    // bl sub_02019B10
    // lsl r0, r0, #0x19
    // ldr r3, [r5, #0x34]
    // ldr r1, _021F23EC ; =0x000088D4
    // mov r4, #0xfe
    // ldrb r2, [r3, r1]
    // lsr r0, r0, #0x18
    // bic r2, r4
    // orr r0, r2
    // strb r0, [r3, r1]
    // ldr r0, [r5, #0x34]
    // add r2, r1, #1
    // ldrb r3, [r0, r2]
    // mov r2, #0xf
    // bic r3, r2
    // mov r2, #3
    // orr r3, r2
    // add r2, r1, #1
    // strb r3, [r0, r2]
    // ldr r0, [r5, #0x34]
    // ldrb r3, [r0, r2]
    // mov r2, #0xf0
    // bic r3, r2
    // mov r2, #0x20
    // orr r3, r2
    // add r2, r1, #1
    // strb r3, [r0, r2]
    // ldr r3, [r5, #0x34]
    // mov r2, #0
    // add r0, r1, #2
    // strb r2, [r3, r0]
    // ldr r3, [r5, #0x34]
    // add r0, r1, #3
    // strb r2, [r3, r0]
    // add r0, sp, #0
    // mov r3, #1
    // ldrsb r7, [r0, r3]
    // ldr r4, [r5, #0x34]
    // add r3, r1, #4
    // strb r7, [r4, r3]
    // ldrsb r4, [r0, r2]
    // ldr r3, [r5, #0x34]
    // add r2, r1, #5
    // strb r4, [r3, r2]
    // ldrh r4, [r0, #4]
    // ldr r3, [r5, #0x34]
    // add r2, r1, #6
    // strb r4, [r3, r2]
    // ldrh r3, [r0, #2]
    // ldr r2, [r5, #0x34]
    // add r0, r1, #7
    // strb r3, [r2, r0]
    // str r6, [r5, #0x30]
    // mov r0, #8
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // _021F23EC: .word 0x000088D4
    // TODO: decompile
}




void ov14_021F23F0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // add r6, r2, #0
    // ldr r2, [r5, #0x34]
    // ldr r0, _021F2488 ; =0x000088D4
    // add r4, r1, #0
    // ldrb r1, [r2, r0]
    // mov r3, #1
    // bic r1, r3
    // mov r3, #1
    // orr r1, r3
    // strb r1, [r2, r0]
    // mov r0, #0x2f
    // ldr r1, [r5, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // mov r1, #2
    // bl sub_02019B10
    // lsl r0, r0, #0x19
    // ldr r3, [r5, #0x34]
    // ldr r1, _021F2488 ; =0x000088D4
    // mov r7, #0xfe
    // ldrb r2, [r3, r1]
    // lsr r0, r0, #0x18
    // bic r2, r7
    // orr r0, r2
    // strb r0, [r3, r1]
    // ldr r0, [r5, #0x34]
    // add r2, r1, #1
    // ldrb r3, [r0, r2]
    // mov r2, #0xf
    // bic r3, r2
    // mov r2, #3
    // orr r3, r2
    // add r2, r1, #1
    // strb r3, [r0, r2]
    // ldr r0, [r5, #0x34]
    // ldrb r3, [r0, r2]
    // mov r2, #0xf0
    // bic r3, r2
    // mov r2, #0x20
    // orr r3, r2
    // add r2, r1, #1
    // strb r3, [r0, r2]
    // ldr r3, [r5, #0x34]
    // mov r0, #0
    // add r2, r1, #2
    // strb r0, [r3, r2]
    // add r2, r1, #3
    // ldr r3, [r5, #0x34]
    // cmp r4, #0
    // strb r0, [r3, r2]
    // bne _021F2460
    // mov r3, #0x10
    // b _021F2462
    // mov r3, #0x14
    // ldr r2, [r5, #0x34]
    // add r0, r1, #5
    // strb r3, [r2, r0]
    // ldr r1, [r5, #0x34]
    // ldr r0, _021F248C ; =0x000088D8
    // mov r2, #0x16
    // strb r2, [r1, r0]
    // add r1, r0, #2
    // ldr r2, [r5, #0x34]
    // mov r3, #9
    // strb r3, [r2, r1]
    // ldr r1, [r5, #0x34]
    // mov r2, #4
    // add r0, r0, #3
    // strb r2, [r1, r0]
    // str r6, [r5, #0x30]
    // mov r0, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021F2488: .word 0x000088D4
    // _021F248C: .word 0x000088D8
    // TODO: decompile
}




void ov14_021F2490(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // ldr r3, [r5, #0x34]
    // ldr r0, _021F252C ; =0x000088D4
    // add r6, r2, #0
    // ldrb r2, [r3, r0]
    // add r4, r1, #0
    // mov r1, #1
    // bic r2, r1
    // mov r1, #1
    // orr r2, r1
    // strb r2, [r3, r0]
    // mov r0, #0x2f
    // ldr r2, [r5, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r2, r0]
    // bl sub_02019B10
    // lsl r0, r0, #0x19
    // ldr r3, [r5, #0x34]
    // ldr r1, _021F252C ; =0x000088D4
    // mov r7, #0xfe
    // ldrb r2, [r3, r1]
    // lsr r0, r0, #0x18
    // bic r2, r7
    // orr r0, r2
    // strb r0, [r3, r1]
    // ldr r2, [r5, #0x34]
    // add r0, r1, #1
    // ldrb r3, [r2, r0]
    // mov r0, #0xf
    // bic r3, r0
    // add r7, r3, #0
    // mov r0, #3
    // orr r7, r0
    // add r3, r1, #1
    // strb r7, [r2, r3]
    // ldr r3, [r5, #0x34]
    // add r2, r1, #1
    // ldrb r2, [r3, r2]
    // mov r7, #0xf0
    // bic r2, r7
    // mov r7, #0x20
    // orr r7, r2
    // add r2, r1, #1
    // strb r7, [r3, r2]
    // ldr r7, [r5, #0x34]
    // mov r2, #0
    // add r3, r1, #2
    // strb r2, [r7, r3]
    // add r3, r1, #3
    // ldr r7, [r5, #0x34]
    // cmp r4, #0
    // strb r2, [r7, r3]
    // bne _021F2506
    // ldr r2, [r5, #0x34]
    // add r1, r1, #4
    // strb r0, [r2, r1]
    // b _021F250E
    // ldr r2, [r5, #0x34]
    // mov r3, #0x16
    // add r0, r1, #4
    // strb r3, [r2, r0]
    // ldr r1, [r5, #0x34]
    // ldr r0, _021F2530 ; =0x000088D9
    // mov r2, #0x14
    // strb r2, [r1, r0]
    // add r1, r0, #1
    // ldr r2, [r5, #0x34]
    // mov r3, #9
    // strb r3, [r2, r1]
    // ldr r1, [r5, #0x34]
    // mov r2, #4
    // add r0, r0, #2
    // strb r2, [r1, r0]
    // str r6, [r5, #0x30]
    // mov r0, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // _021F252C: .word 0x000088D4
    // _021F2530: .word 0x000088D9
    // TODO: decompile
}




void ov14_021F2534(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _021F254C: ; jump table
    ov14_021F3488(2, 1);
    ov14_021F43F4(*((u32*)(r4 + 0x34)), 0);
    ov14_021F3488(r4, 1, 1);
}




void ov14_021F2574(void) {
}




void ov14_021F259C(void) {
}




void ov14_021F25C4(void) {
}




void ov14_021F25D4(void) {
}




void ov14_021F25E4(void) {
}




void ov14_021F2610(void) {
}




void ov14_021F261C(void) {
}




void ov14_021F2624(void) {
}




void ov14_021F262C(void) {
}




void ov14_021F2634(void) {
}




void ov14_021F263C(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E84A4
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8248
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E82A8
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8328
    // ldr r0, [r4, #0x34]
    // bl ov14_021E884C
    // add r0, r4, #0
    // mov r1, #0
    // bl ov14_021F40E8
    // ldr r1, _021F268C ; =ov14_021EA180
    // add r0, r4, #0
    // mov r2, #0x4a
    // bl ov14_021F0234
    // pop {r4, pc}
    // nop
    // _021F268C: .word ov14_021EA180
    // TODO: decompile
}




void ov14_021F2690(void) {
    // add r1, #0x2b
    // ldrb r1, [r1]
    ov14_021E76B8(r0);
    ov14_021F40E8(0);
    ov14_021F0C0C(r4);
}




void ov14_021F26B4(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E84A4
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8328
    // ldr r0, [r4, #0x34]
    // bl ov14_021E884C
    // add r0, r4, #0
    // mov r1, #0
    // bl ov14_021F40E8
    // ldr r1, _021F26EC ; =ov14_021EA180
    // add r0, r4, #0
    // mov r2, #0x4c
    // bl ov14_021F0234
    // pop {r4, pc}
    // nop
    // _021F26EC: .word ov14_021EA180
    // TODO: decompile
}




void ov14_021F26F0(void) {
}




void ov14_021F2700(void) {
}




void ov14_021F2718(void) {
}




void ov14_021F2728(void) {
}




void ov14_021F2734(void) {
}




void ov14_021F2760(void) {
}




void ov14_021F276C(void) {
}




void ov14_021F2778(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4, #0x34]
    // mov r1, #0x27
    // bl ov14_021F6654
    // ldr r0, [r4, #0x34]
    // mov r1, #9
    // mov r2, #0
    // bl ov14_021F2A18
    // ldr r0, [r4]
    // ldr r0, [r0, #8]
    // cmp r0, #3
    // bne _021F27A2
    // add r0, r4, #0
    // mov r1, #0x81
    // mov r2, #0
    // bl ov14_021F3488
    // b _021F27AC
    // add r0, r4, #0
    // mov r1, #1
    // mov r2, #0
    // bl ov14_021F3488
    // add r0, r4, #0
    // add r0, #0x25
    // ldrb r0, [r0]
    // mov r1, #6
    // bl _s32_div_f
    // ldr r2, [r4, #0x34]
    // ldr r0, _021F27C8 ; =0x0000043C
    // str r1, [r2, r0]
    // mov r0, #9
    // str r0, [r4, #0x2c]
    // mov r0, #0x43
    // pop {r4, pc}
    // nop
    // _021F27C8: .word 0x0000043C
    // TODO: decompile
}




void ov14_021F27CC(void) {
}




void ov14_021F27D4(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E84A4
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8328
    // ldr r0, [r4, #0x34]
    // bl ov14_021E884C
    // add r0, r4, #0
    // mov r1, #0
    // bl ov14_021F40E8
    // ldr r1, _021F280C ; =ov14_021EA130
    // add r0, r4, #0
    // mov r2, #0x59
    // bl ov14_021F0234
    // pop {r4, pc}
    // nop
    // _021F280C: .word ov14_021EA130
    // TODO: decompile
}




void ov14_021F2810(void) {
}




void ov14_021F2818(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r1, #0
    // bl ov14_021F5EB4
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E84A4
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8328
    // ldr r0, [r4, #0x34]
    // bl ov14_021E884C
    // add r0, r4, #0
    // mov r1, #0
    // bl ov14_021F40E8
    // ldr r1, _021F2854 ; =ov14_021EA130
    // add r0, r4, #0
    // mov r2, #0x70
    // bl ov14_021F0234
    // pop {r4, pc}
    // _021F2854: .word ov14_021EA130
    // TODO: decompile
}




void ov14_021F2858(void) {
}




void ov14_021F2874(void) {
}




void ov14_021F2890(void) {
}




void ov14_021F2898(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E84A4
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8248
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E82A8
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8328
    // add r0, r4, #0
    // bl ov14_021F40DC
    // ldr r1, [r4, #0x34]
    // ldr r0, _021F28F4 ; =0x000088C8
    // ldrh r0, [r1, r0]
    // cmp r0, #0
    // beq _021F28E6
    // mov r0, #0x2f
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E88F8
    // ldr r1, _021F28F8 ; =ov14_021EA674
    // add r0, r4, #0
    // mov r2, #0x76
    // bl ov14_021F0234
    // pop {r4, pc}
    // nop
    // _021F28F4: .word 0x000088C8
    // _021F28F8: .word ov14_021EA674
    // TODO: decompile
}




void ov14_021F28FC(void) {
}




void ov14_021F2914(void) {
}




void ov14_021F2930(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E84A4
    // mov r0, #0x2f
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8328
    // add r0, r4, #0
    // bl ov14_021F40DC
    // ldr r1, [r4, #0x34]
    // ldr r0, _021F2974 ; =0x000088C8
    // ldrh r0, [r1, r0]
    // cmp r0, #0
    // beq _021F2966
    // mov r0, #0x2f
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E88F8
    // ldr r1, _021F2978 ; =ov14_021EA674
    // add r0, r4, #0
    // mov r2, #0x8c
    // bl ov14_021F0234
    // pop {r4, pc}
    // nop
    // _021F2974: .word 0x000088C8
    // _021F2978: .word ov14_021EA674
    // TODO: decompile
}




void ov14_021F297C(void) {
}




void ov14_021F29AC(void) {
}




void ov14_021F29C4(void) {
}




void ov14_021F29E4(void) {
    // add r5, r0, r2
    // ldr r0, [r5, r4]
    ManagedSprite_SetAnimationFrame(0, (0xbf << 2));
    // ldr r0, [r5, r4]
    ManagedSprite_SetAnim(r6);
}




void ov14_021F2A04(void) {
    // lsl r1, r1, #2
    // add r1, r0, r1
    // mov r0, #0xbf
    // lsl r0, r0, #2
    // ldr r3, _021F2A14 ; =ManagedSprite_IsAnimated
    // ldr r0, [r1, r0]
    // bx r3
    // nop
    // _021F2A14: .word ManagedSprite_IsAnimated
    // TODO: decompile
}




void ov14_021F2A18(void) {
    // add r1, r0, r1
    // ldr r0, [r1, r0]
    ManagedSprite_SetDrawFlag((0xbf << 2), 1);
    // add r1, r0, r1
    // ldr r0, [r1, r0]
    ManagedSprite_SetDrawFlag((0xbf << 2), 0);
}




void ov14_021F2A44(void) {
}




void ov14_021F2A60(void) {
    // lsl r1, r1, #2
    // add r1, r0, r1
    // mov r0, #0xbf
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // ldr r3, _021F2A70 ; =ManagedSprite_SetPriority
    // add r1, r2, #0
    // bx r3
    // _021F2A70: .word ManagedSprite_SetPriority
    // TODO: decompile
}




void ov14_021F2A74(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _021F2A98 ; =0x000088D2
    // mov r3, #1
    // strh r3, [r4, r0]
    // lsl r0, r1, #2
    // add r1, r4, r0
    // mov r0, #0xbf
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // add r1, r2, #0
    // bl ManagedSprite_SetDrawPriority
    // ldr r0, _021F2A98 ; =0x000088D2
    // mov r1, #0
    // strh r1, [r4, r0]
    // pop {r4, pc}
    // nop
    // _021F2A98: .word 0x000088D2
    // TODO: decompile
}




void ov14_021F2A9C(void) {
    // add r1, r0, r1
    // ldr r0, [r1, r0]
    ManagedSprite_SetOamMode((0xbf << 2), 1);
    // add r1, r0, r1
    // ldr r0, [r1, r0]
    ManagedSprite_SetOamMode((0xbf << 2), 0);
}




void ov14_021F2AC8(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x4c
    // ldr r3, _021F2B5C ; =ov14_021F80D4
    // add r2, sp, #0x34
    // add r4, r0, #0
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // mov r0, #0xa
    // bl SpriteSystem_Alloc
    // mov r1, #0xbd
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // ldr r0, [r4, r1]
    // bl SpriteManager_New
    // mov r7, #0xbe
    // lsl r7, r7, #2
    // add r2, sp, #0x14
    // ldr r3, _021F2B60 ; =ov14_021F80EC
    // str r0, [r4, r7]
    // ldmia r3!, {r0, r1}
    // add r6, r2, #0
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // ldr r5, _021F2B64 ; =ov14_021F80A8
    // stmia r2!, {r0, r1}
    // add r3, sp, #0
    // ldmia r5!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // add r1, r6, #0
    // str r0, [r3]
    // sub r0, r7, #4
    // ldr r0, [r4, r0]
    // mov r3, #0x20
    // bl SpriteSystem_Init
    // sub r1, r7, #4
    // ldr r0, [r4, r1]
    // add r1, r1, #4
    // ldr r1, [r4, r1]
    // mov r2, #0x67
    // bl SpriteSystem_InitSprites
    // sub r1, r7, #4
    // ldr r0, [r4, r1]
    // add r1, r1, #4
    // ldr r1, [r4, r1]
    // add r2, sp, #0x34
    // bl SpriteSystem_InitManagerWithCapacities
    // sub r0, r7, #4
    // ldr r0, [r4, r0]
    // bl SpriteSystem_GetRenderer
    // mov r2, #2
    // mov r1, #0
    // lsl r2, r2, #0x14
    // bl G2dRenderer_SetSubSurfaceCoords
    // add sp, #0x4c
    // pop {r4, r5, r6, r7, pc}
    // _021F2B5C: .word ov14_021F80D4
    // _021F2B60: .word ov14_021F80EC
    // _021F2B64: .word ov14_021F80A8
    // TODO: decompile
}




void ov14_021F2B68(void) {
    // ldr r0, [r4, r1]
    // ldr r1, [r4, r1]
    SpriteSystem_FreeResourcesAndManager(((0xbd << 2) + 4));
    // ldr r0, [r4, r0]
    SpriteSystem_Free((0xbd << 2));
}




void ov14_021F2B88(void) {
}




void ov14_021F2BB8(void) {
}




void ov14_021F2BE8(void) {
}




void ov14_021F2C04(void) {
}




void ov14_021F2C1C(void) {
    // add r1, r0, r1
    // ldr r0, [r1, r0]
    Sprite_GetImageProxy(*((u32*)(0xbf << 2)), (r1 << 2));
    NNS_G2dGetImageLocation(1);
    DC_FlushRange(r5, r4);
    GX_LoadOBJ(r5, r6, r4);
}




void ov14_021F2C50(void) {
    // add r1, r0, r1
    // ldr r0, [r1, r0]
    Sprite_GetImageProxy(*((u32*)(0xbf << 2)), (r1 << 2));
    NNS_G2dGetImageLocation(2);
    DC_FlushRange(r5, r4);
    GXS_LoadOBJ(r5, r6, r4);
}




void ov14_021F2C84(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // mov r7, #0xbe
    // add r5, r0, #0
    // mov r4, #0
    // mov r6, #1
    // lsl r7, r7, #2
    // ldr r0, _021F2D18 ; =0x0000C0F9
    // str r6, [sp]
    // str r6, [sp, #4]
    // add r0, r4, r0
    // str r0, [sp, #8]
    // mov r0, #0xbd
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // ldr r1, [r5, r7]
    // mov r2, #0x13
    // mov r3, #0x4e
    // bl SpriteSystem_LoadCharResObj
    // add r4, r4, #1
    // cmp r4, #0x24
    // blo _021F2C92
    // bl sub_02074490
    // add r3, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #3
    // str r0, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // ldr r0, _021F2D18 ; =0x0000C0F9
    // mov r1, #0xbd
    // lsl r1, r1, #2
    // str r0, [sp, #0xc]
    // ldr r0, [r5, r1]
    // add r1, r1, #4
    // ldr r1, [r5, r1]
    // mov r2, #0x14
    // bl SpriteSystem_LoadPlttResObj
    // bl sub_0207449C
    // add r3, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, _021F2D18 ; =0x0000C0F9
    // mov r1, #0xbd
    // lsl r1, r1, #2
    // str r0, [sp, #4]
    // ldr r0, [r5, r1]
    // add r1, r1, #4
    // ldr r1, [r5, r1]
    // mov r2, #0x14
    // bl SpriteSystem_LoadCellResObj
    // bl sub_020744A8
    // add r3, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, _021F2D18 ; =0x0000C0F9
    // mov r1, #0xbd
    // lsl r1, r1, #2
    // str r0, [sp, #4]
    // ldr r0, [r5, r1]
    // add r1, r1, #4
    // ldr r1, [r5, r1]
    // mov r2, #0x14
    // bl SpriteSystem_LoadAnimResObj
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // _021F2D18: .word 0x0000C0F9
    // TODO: decompile
}




void ov14_021F2D1C(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x6c
    // add r5, r0, #0
    // mov r4, #0
    // ldr r3, _021F2DB8 ; =ov14_021F810C
    // str r4, [sp]
    // add r7, r5, #0
    // add r2, sp, #4
    // mov r6, #6
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // sub r6, r6, #1
    // bne _021F2D2E
    // ldr r0, [r3]
    // str r0, [r2]
    // add r6, sp, #4
    // add r3, sp, #0x38
    // mov r2, #6
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // sub r2, r2, #1
    // bne _021F2D40
    // ldr r0, [r6]
    // mov r1, #6
    // str r0, [r3]
    // add r0, r4, #0
    // bl _u32_div_f
    // mov r3, #0x18
    // add r0, sp, #4
    // mov r2, #0x34
    // ldrsh r2, [r0, r2]
    // mul r3, r1
    // add r1, r2, r3
    // strh r1, [r0, #0x34]
    // add r0, r4, #0
    // mov r1, #6
    // bl _u32_div_f
    // mov r3, #0x18
    // add r1, sp, #4
    // mov r2, #0x36
    // ldrsh r2, [r1, r2]
    // mul r3, r0
    // add r0, r2, r3
    // strh r0, [r1, #0x36]
    // ldr r0, [sp]
    // mov r1, #0x74
    // sub r0, r1, r0
    // str r0, [sp, #0x40]
    // ldr r0, _021F2DBC ; =0x0000C0F9
    // mov r1, #0xbd
    // add r0, r4, r0
    // lsl r1, r1, #2
    // str r0, [sp, #0x4c]
    // ldr r0, [r5, r1]
    // add r1, r1, #4
    // ldr r1, [r5, r1]
    // add r2, sp, #0x38
    // bl SpriteSystem_NewSprite
    // mov r1, #0x36
    // lsl r1, r1, #4
    // str r0, [r7, r1]
    // add r2, r4, #0
    // add r1, r5, r4
    // ldr r0, _021F2DC0 ; =0x00004094
    // add r2, #0x19
    // strb r2, [r1, r0]
    // ldr r0, [sp]
    // add r4, r4, #1
    // add r0, r0, #2
    // add r7, r7, #4
    // str r0, [sp]
    // cmp r4, #0x24
    // blo _021F2D3A
    // add sp, #0x6c
    // pop {r4, r5, r6, r7, pc}
    // _021F2DB8: .word ov14_021F810C
    // _021F2DBC: .word 0x0000C0F9
    // _021F2DC0: .word 0x00004094
    // TODO: decompile
}




void ov14_021F2DC4(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r0, r1, #0
    // add r4, r2, #0
    // bl Boxmon_GetIconNaix
    // add r1, r0, #0
    // mov r0, #0xa
    // str r0, [sp]
    // ldr r0, _021F2DE4 ; =0x00000454
    // mov r2, #0
    // ldr r0, [r5, r0]
    // add r3, r4, #0
    // bl GfGfxLoader_GetCharDataFromOpenNarc
    // pop {r3, r4, r5, pc}
    // _021F2DE4: .word 0x00000454
    // TODO: decompile
}




void ov14_021F2DE8(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // mov r4, #0
    // add r5, r0, #0
    // str r1, [sp, #4]
    // add r6, r4, #0
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, [r5, #4]
    // ldr r1, [sp, #4]
    // add r2, r4, #0
    // mov r3, #0xac
    // bl PCStorage_GetMonDataByIndexPair
    // cmp r0, #0
    // bne _021F2E10
    // ldr r0, [r5, #0x34]
    // mov r1, #0
    // add r2, r0, r4
    // b _021F2E56
    // ldr r1, [sp, #4]
    // add r0, r5, #0
    // add r2, r4, #0
    // bl ov14_021E60C0
    // add r7, r0, #0
    // ldr r0, [r5, #0x34]
    // add r1, r7, #0
    // add r2, sp, #0xc
    // bl ov14_021F2DC4
    // str r0, [sp, #8]
    // ldr r0, [sp, #0xc]
    // ldr r2, [r5, #0x34]
    // ldr r1, _021F2E6C ; =0x00000458
    // ldr r0, [r0, #0x14]
    // add r1, r2, r1
    // mov r2, #2
    // add r1, r1, r6
    // lsl r2, r2, #8
    // bl MIi_CpuCopy32
    // ldr r0, [sp, #8]
    // bl Heap_Free
    // add r0, r7, #0
    // bl Boxmon_GetIconPalette
    // ldr r1, [r5, #0x34]
    // add r2, r1, r4
    // ldr r1, _021F2E70 ; =0x00004076
    // strb r0, [r2, r1]
    // ldr r0, [r5, #0x34]
    // mov r1, #1
    // add r2, r0, r4
    // ldr r0, _021F2E74 ; =0x00004058
    // add r4, r4, #1
    // strb r1, [r2, r0]
    // mov r0, #2
    // lsl r0, r0, #8
    // add r6, r6, r0
    // cmp r4, #0x1e
    // blo _021F2DF4
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021F2E6C: .word 0x00000458
    // _021F2E70: .word 0x00004076
    // _021F2E74: .word 0x00004058
    // TODO: decompile
}




void ov14_021F2E78(void) {
    ov14_021F2C1C(r2, r1, (2 << 8));
    // add r1, r5, r0
    // ldr r0, [r1, r0]
    ManagedSprite_SetPaletteOverride((0xbf << 2), (r6 + 3));
}




void ov14_021F2EA0(void) {
    // add r2, sp, #0
    ov14_021F2DC4(*((u32*)(r0 + 0x34)));
    Boxmon_GetIconPalette(r4);
    // ldr r1, [sp]
    ov14_021F2E78(*((u32*)(r5 + 0x34)), *((u32*)(r1 + 0x14)), r6, r0);
    Heap_Free(r7);
}




void ov14_021F2ED0(void) {
    // str r1, [sp]
    // add r6, r1, r0
    // ldr r0, [r6, r7]
    // str r2, [sp, #4]
    ManagedSprite_SetDrawFlag((0xbf << 2), 0);
    // ldr r1, [sp, #4]
    ov14_021E6070(r5, 0xac, 0);
    // ldr r1, [sp]
    // ldr r2, [sp, #4]
    ov14_021E60C0(r5);
    ov14_021F2EA0(r5, r0, r4);
    // ldr r0, [r6, r7]
    ManagedSprite_SetDrawFlag(1);
}




void ov14_021F2F20(void) {
}




void ov14_021F2F3C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // ldr r0, [r5, #8]
    // bl Party_GetCount
    // add r6, r0, #0
    // ldr r4, _021F2F80 ; =0x00000000
    // beq _021F2F7C
    // ldr r7, _021F2F84 ; =0x000040B2
    // ldr r0, [r5, #8]
    // add r1, r4, #0
    // bl Party_GetMonByIndex
    // bl Mon_GetBoxMon
    // ldr r2, [r5, #0x34]
    // add r1, r0, #0
    // add r3, r2, r4
    // ldr r2, _021F2F84 ; =0x000040B2
    // add r0, r5, #0
    // ldrb r2, [r3, r2]
    // bl ov14_021F2EA0
    // ldr r0, [r5, #0x34]
    // mov r2, #0
    // add r1, r0, r4
    // ldrb r1, [r1, r7]
    // bl ov14_021F2A18
    // add r4, r4, #1
    // cmp r4, r6
    // blo _021F2F4E
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021F2F80: .word 0x00000000
    // _021F2F84: .word 0x000040B2
    // TODO: decompile
}




void ov14_021F2F88(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // add r6, r2, #0
    // cmp r5, #0x1e
    // bhs _021F2FB4
    // mov r1, #6
    // bl _u32_div_f
    // add r1, r1, #1
    // mov r0, #0x18
    // mul r0, r1
    // strh r0, [r4]
    // add r0, r5, #0
    // mov r1, #6
    // bl _u32_div_f
    // mov r1, #0x18
    // mul r1, r0
    // add r1, #0x30
    // strh r1, [r6]
    // pop {r4, r5, r6, pc}
    // sub r5, #0x1e
    // ldr r0, _021F2FD4 ; =ov14_021F80BC
    // lsl r1, r5, #2
    // ldrsh r0, [r0, r1]
    // strh r0, [r4]
    // ldr r0, _021F2FD8 ; =ov14_021F80BE
    // ldrsh r0, [r0, r1]
    // sub r0, #0x90
    // strh r0, [r6]
    // cmp r3, #2
    // bne _021F2FD2
    // mov r0, #0
    // ldrsh r0, [r4, r0]
    // add r0, #0x98
    // strh r0, [r4]
    // pop {r4, r5, r6, pc}
    // _021F2FD4: .word ov14_021F80BC
    // _021F2FD8: .word ov14_021F80BE
    // TODO: decompile
}




void ov14_021F2FDC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // ldr r0, [r5, #8]
    // bl Party_GetCount
    // ldr r6, _021F303C ; =ov14_021F80BC
    // str r0, [sp]
    // mov r4, #0
    // ldr r0, [r5, #0x34]
    // ldr r1, _021F3040 ; =0x000040B2
    // add r2, r0, r4
    // ldrb r7, [r2, r1]
    // mov r2, #2
    // ldrsh r2, [r6, r2]
    // lsl r1, r7, #2
    // add r1, r0, r1
    // mov r0, #0xbf
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // mov r1, #0
    // ldrsh r1, [r6, r1]
    // bl ManagedSprite_SetPositionXY
    // add r1, r4, #0
    // ldr r0, [r5, #0x34]
    // add r1, #0x1e
    // mov r2, #1
    // bl ov14_021F3190
    // ldr r0, [sp]
    // cmp r4, r0
    // ldr r0, [r5, #0x34]
    // bhs _021F3028
    // add r1, r7, #0
    // mov r2, #1
    // bl ov14_021F2A18
    // b _021F3030
    // add r1, r7, #0
    // mov r2, #0
    // bl ov14_021F2A18
    // add r4, r4, #1
    // add r6, r6, #4
    // cmp r4, #6
    // blo _021F2FEC
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021F303C: .word ov14_021F80BC
    // _021F3040: .word 0x000040B2
    // TODO: decompile
}




void ov14_021F3044(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // ldr r0, [r5, #8]
    // bl Party_GetCount
    // ldr r6, _021F30A8 ; =ov14_021F80BC
    // str r0, [sp]
    // mov r4, #0
    // ldr r0, [r5, #0x34]
    // ldr r1, _021F30AC ; =0x000040B2
    // add r2, r0, r4
    // ldrb r7, [r2, r1]
    // mov r2, #2
    // ldrsh r2, [r6, r2]
    // lsl r1, r7, #2
    // add r1, r0, r1
    // mov r0, #0xbf
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // mov r1, #0
    // ldrsh r1, [r6, r1]
    // add r1, #0x98
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // bl ManagedSprite_SetPositionXY
    // add r1, r4, #0
    // ldr r0, [r5, #0x34]
    // add r1, #0x1e
    // mov r2, #1
    // bl ov14_021F3190
    // ldr r0, [sp]
    // cmp r4, r0
    // ldr r0, [r5, #0x34]
    // bhs _021F3096
    // add r1, r7, #0
    // mov r2, #1
    // bl ov14_021F2A18
    // b _021F309E
    // add r1, r7, #0
    // mov r2, #0
    // bl ov14_021F2A18
    // add r4, r4, #1
    // add r6, r6, #4
    // cmp r4, #6
    // blo _021F3054
    // pop {r3, r4, r5, r6, r7, pc}
    // _021F30A8: .word ov14_021F80BC
    // _021F30AC: .word 0x000040B2
    // TODO: decompile
}




void ov14_021F30B0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // ldr r0, [r5, #8]
    // bl Party_GetCount
    // ldr r6, _021F3114 ; =ov14_021F80BC
    // str r0, [sp]
    // mov r4, #0
    // ldr r0, [r5, #0x34]
    // ldr r1, _021F3118 ; =0x000040B2
    // add r2, r0, r4
    // ldrb r7, [r2, r1]
    // mov r2, #2
    // ldrsh r2, [r6, r2]
    // lsl r1, r7, #2
    // add r1, r0, r1
    // mov r0, #0xbf
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // mov r1, #0
    // sub r2, #0x90
    // lsl r2, r2, #0x10
    // ldrsh r1, [r6, r1]
    // asr r2, r2, #0x10
    // bl ManagedSprite_SetPositionXY
    // add r1, r4, #0
    // ldr r0, [r5, #0x34]
    // add r1, #0x1e
    // mov r2, #1
    // bl ov14_021F3190
    // ldr r0, [sp]
    // cmp r4, r0
    // ldr r0, [r5, #0x34]
    // bhs _021F3102
    // add r1, r7, #0
    // mov r2, #1
    // bl ov14_021F2A18
    // b _021F310A
    // add r1, r7, #0
    // mov r2, #0
    // bl ov14_021F2A18
    // add r4, r4, #1
    // add r6, r6, #4
    // cmp r4, #6
    // blo _021F30C0
    // pop {r3, r4, r5, r6, r7, pc}
    // _021F3114: .word ov14_021F80BC
    // _021F3118: .word 0x000040B2
    // TODO: decompile
}




void ov14_021F311C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // ldr r0, [r5, #8]
    // bl Party_GetCount
    // ldr r6, _021F3188 ; =ov14_021F80BC
    // str r0, [sp]
    // mov r4, #0
    // ldr r0, [r5, #0x34]
    // ldr r1, _021F318C ; =0x000040B2
    // add r2, r0, r4
    // ldrb r7, [r2, r1]
    // mov r2, #2
    // ldrsh r2, [r6, r2]
    // lsl r1, r7, #2
    // add r1, r0, r1
    // mov r0, #0xbf
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // mov r1, #0
    // ldrsh r1, [r6, r1]
    // sub r2, #0x90
    // lsl r2, r2, #0x10
    // add r1, #0x98
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    // bl ManagedSprite_SetPositionXY
    // add r1, r4, #0
    // ldr r0, [r5, #0x34]
    // add r1, #0x1e
    // mov r2, #1
    // bl ov14_021F3190
    // ldr r0, [sp]
    // cmp r4, r0
    // ldr r0, [r5, #0x34]
    // bhs _021F3174
    // add r1, r7, #0
    // mov r2, #1
    // bl ov14_021F2A18
    // b _021F317C
    // add r1, r7, #0
    // mov r2, #0
    // bl ov14_021F2A18
    // add r4, r4, #1
    // add r6, r6, #4
    // cmp r4, #6
    // blo _021F312C
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021F3188: .word ov14_021F80BC
    // _021F318C: .word 0x000040B2
    // TODO: decompile
}




void ov14_021F3190(void) {
    // push {r4, r5, r6, lr}
    // add r6, r1, #0
    // add r5, r0, #0
    // add r3, r5, r6
    // ldr r1, _021F31DC ; =0x00004094
    // cmp r2, #0
    // ldrb r4, [r3, r1]
    // bne _021F31B4
    // add r1, r4, #0
    // mov r2, #0
    // bl ov14_021F2A60
    // add r0, r5, #0
    // add r1, r4, #0
    // mov r2, #0x14
    // bl ov14_021F2A74
    // pop {r4, r5, r6, pc}
    // cmp r6, #0x1e
    // bhs _021F31C2
    // add r1, r4, #0
    // mov r2, #3
    // bl ov14_021F2A60
    // b _021F31CA
    // add r1, r4, #0
    // mov r2, #1
    // bl ov14_021F2A60
    // lsl r3, r6, #1
    // mov r2, #0x74
    // add r0, r5, #0
    // add r1, r4, #0
    // sub r2, r2, r3
    // bl ov14_021F2A74
    // pop {r4, r5, r6, pc}
    // nop
    // _021F31DC: .word 0x00004094
    // TODO: decompile
}




void ov14_021F31E0(void) {
    // push {r3, r4, r5, lr}
    // add r4, r0, #0
    // add r3, r4, r1
    // ldr r1, _021F320C ; =0x00004094
    // cmp r2, #0x1e
    // ldrb r5, [r3, r1]
    // bhs _021F31F8
    // add r1, r5, #0
    // mov r2, #3
    // bl ov14_021F2A60
    // b _021F3200
    // add r1, r5, #0
    // mov r2, #1
    // bl ov14_021F2A60
    // add r0, r4, #0
    // add r1, r5, #0
    // mov r2, #0x14
    // bl ov14_021F2A74
    // pop {r3, r4, r5, pc}
    // _021F320C: .word 0x00004094
    // TODO: decompile
}




void ov14_021F3210(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x18
    // add r5, r0, #0
    // str r1, [sp]
    // cmp r1, #0
    // blt _021F3228
    // mov r0, #0xb0
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // sub r0, #0xb8
    // str r0, [sp, #0xc]
    // b _021F3232
    // mov r0, #7
    // mvn r0, r0
    // str r0, [sp, #8]
    // mov r0, #0xb0
    // str r0, [sp, #0xc]
    // mov r4, #0
    // add r7, sp, #0x14
    // ldr r0, [r5, #0x34]
    // ldr r1, _021F32D0 ; =0x00004094
    // add r2, r0, r4
    // ldrb r1, [r2, r1]
    // add r2, sp, #0x14
    // str r1, [sp, #4]
    // lsl r1, r1, #2
    // str r1, [sp, #0x10]
    // add r1, r0, r1
    // mov r0, #0xbf
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // add r1, sp, #0x14
    // add r1, #2
    // bl ManagedSprite_GetPositionXY
    // mov r0, #2
    // ldrsh r1, [r7, r0]
    // ldr r0, [sp]
    // add r0, r1, r0
    // strh r0, [r7, #2]
    // mov r0, #2
    // ldrsh r1, [r7, r0]
    // ldr r0, [sp, #8]
    // cmp r1, r0
    // bne _021F32AA
    // ldr r0, [sp, #0xc]
    // ldr r1, _021F32D4 ; =0x00000458
    // strh r0, [r7, #2]
    // ldr r0, [r5, #0x34]
    // ldr r3, _021F32D8 ; =0x00004076
    // add r6, r0, r4
    // add r2, r0, r1
    // lsl r1, r4, #9
    // add r1, r2, r1
    // ldrb r3, [r6, r3]
    // ldr r2, [sp, #4]
    // bl ov14_021F2E78
    // ldr r1, [r5, #0x34]
    // ldr r0, [sp, #0x10]
    // add r2, r1, r0
    // mov r0, #0xbf
    // lsl r0, r0, #2
    // ldr r0, [r2, r0]
    // add r2, r1, r4
    // ldr r1, _021F32DC ; =0x00004058
    // ldrb r1, [r2, r1]
    // bl ManagedSprite_SetDrawFlag
    // ldr r0, [r5]
    // ldr r0, [r0, #8]
    // cmp r0, #3
    // bne _021F32AA
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov14_021F34DC
    // ldr r1, [r5, #0x34]
    // ldr r0, [sp, #0x10]
    // mov r2, #0
    // add r1, r1, r0
    // mov r0, #0xbf
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // mov r1, #2
    // ldrsh r1, [r7, r1]
    // ldrsh r2, [r7, r2]
    // bl ManagedSprite_SetPositionXY
    // add r0, r4, #1
    // lsl r0, r0, #0x10
    // lsr r4, r0, #0x10
    // cmp r4, #0x1e
    // blo _021F3236
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // _021F32D0: .word 0x00004094
    // _021F32D4: .word 0x00000458
    // _021F32D8: .word 0x00004076
    // _021F32DC: .word 0x00004058
    // TODO: decompile
}




void ov14_021F32E0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // str r0, [sp]
    // ldr r1, [r0, #0x34]
    // mov r0, #0x2f
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // add r2, sp, #4
    // mov r1, #1
    // add r2, #1
    // add r3, sp, #4
    // bl sub_02019B1C
    // mov r4, #0
    // add r1, sp, #4
    // ldrsb r0, [r1, r4]
    // lsl r0, r0, #0x13
    // asr r7, r0, #0x10
    // mov r0, #1
    // ldrsb r0, [r1, r0]
    // lsl r0, r0, #0x13
    // asr r5, r0, #0x10
    // ldr r0, _021F334C ; =ov14_021F808C
    // lsl r1, r4, #1
    // add r2, r0, r1
    // ldr r0, [sp]
    // ldrb r2, [r2, #1]
    // ldr r6, [r0, #0x34]
    // ldr r0, _021F3350 ; =0x000040B2
    // add r3, r6, r4
    // ldrb r0, [r3, r0]
    // add r2, r7, r2
    // lsl r2, r2, #0x10
    // lsl r0, r0, #2
    // add r3, r6, r0
    // mov r0, #0xbf
    // lsl r0, r0, #2
    // ldr r0, [r3, r0]
    // ldr r3, _021F334C ; =ov14_021F808C
    // asr r2, r2, #0x10
    // ldrb r1, [r3, r1]
    // add r1, r5, r1
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // bl ManagedSprite_SetPositionXY
    // add r0, r4, #1
    // lsl r0, r0, #0x10
    // lsr r4, r0, #0x10
    // cmp r4, #6
    // blo _021F330C
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021F334C: .word ov14_021F808C
    // _021F3350: .word 0x000040B2
    // TODO: decompile
}




void ov14_021F3354(void) {
    *((u32*)(r0 + 8)) = (0xfe << 0x16);
    *((u8*)(r0 + 7)) = 0;
    ManagedSprite_SetAffineOverwriteMode(*((u32*)r0), 1);
    ManagedSprite_SetAffineScale(*((u32*)r4), *((u32*)(r4 + 8)), *((u32*)(r4 + 8)));
    ManagedSprite_SetAffineTranslation(*((u32*)r4), 0, 8);
}




void ov14_021F3380(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldrb r0, [r4, #7]
    // ldr r1, _021F33AC ; =0x3CCCCCCD
    // add r0, r0, #1
    // strb r0, [r4, #7]
    // ldr r0, [r4, #8]
    // bl _fsub
    // str r0, [r4, #8]
    // ldrb r0, [r4, #7]
    // cmp r0, #0x28
    // bne _021F339E
    // mov r0, #0
    // pop {r4, pc}
    // ldr r1, [r4, #8]
    // ldr r0, [r4]
    // add r2, r1, #0
    // bl ManagedSprite_SetAffineScale
    // mov r0, #1
    // pop {r4, pc}
    // _021F33AC: .word 0x3CCCCCCD
    // TODO: decompile
}




void ov14_021F33B0(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldrb r0, [r4, #7]
    // ldr r1, _021F33E4 ; =0x3CCCCCCD
    // sub r0, r0, #2
    // strb r0, [r4, #7]
    // ldr r0, [r4, #8]
    // bl _fadd
    // ldr r1, _021F33E4 ; =0x3CCCCCCD
    // str r0, [r4, #8]
    // bl _fadd
    // str r0, [r4, #8]
    // ldrb r0, [r4, #7]
    // cmp r0, #0
    // bne _021F33D6
    // mov r0, #0
    // pop {r4, pc}
    // ldr r1, [r4, #8]
    // ldr r0, [r4]
    // add r2, r1, #0
    // bl ManagedSprite_SetAffineScale
    // mov r0, #1
    // pop {r4, pc}
    // _021F33E4: .word 0x3CCCCCCD
    // TODO: decompile
}




void ov14_021F33E8(void) {
}




void ov14_021F33FC(void) {
    ManagedSprite_SetAffineTranslation(*((u32*)r0), 0, 0);
    ManagedSprite_SetAffineScale(*((u32*)r4), (0xfe << 0x16), (0xfe << 0x16));
    ManagedSprite_SetAffineOverwriteMode(*((u32*)r4), 0);
}




void ov14_021F3420(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // ldr r0, [sp, #0x18]
    // add r7, r1, #0
    // add r4, r2, #0
    // add r6, r3, #0
    // cmp r0, #1
    // bne _021F3468
    // cmp r4, r6
    // bhs _021F3480
    // ldr r7, _021F3484 ; =0x00004094
    // add r0, r5, #0
    // add r1, r4, #0
    // mov r2, #6
    // mov r3, #0
    // bl ov14_021E6070
    // cmp r0, #0
    // ldr r0, [r5, #0x34]
    // bne _021F3454
    // add r1, r0, r4
    // ldrb r1, [r1, r7]
    // mov r2, #1
    // bl ov14_021F2A9C
    // b _021F3460
    // ldr r1, _021F3484 ; =0x00004094
    // add r2, r0, r4
    // ldrb r1, [r2, r1]
    // mov r2, #0
    // bl ov14_021F2A9C
    // add r4, r4, #1
    // cmp r4, r6
    // blo _021F3436
    // pop {r3, r4, r5, r6, r7, pc}
    // cmp r4, r6
    // bhs _021F3480
    // ldr r0, [r5, #0x34]
    // ldr r1, _021F3484 ; =0x00004094
    // add r2, r0, r4
    // ldrb r1, [r2, r1]
    // add r2, r7, #0
    // bl ov14_021F2A9C
    // add r4, r4, #1
    // cmp r4, r6
    // blo _021F346C
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021F3484: .word 0x00004094
    // TODO: decompile
}




void ov14_021F3488(void) {
    // tst r0, r5
    // tst r0, r5
    // str r4, [sp]
    ov14_021F3420(r0, r2, 0, 0x1e);
    // tst r0, r5
    // str r4, [sp]
    ov14_021F3420(r6, r7, 0x1e, 0x24);
}




void ov14_021F34C8(void) {
    // add r3, r0, r1
    // ldr r1, _021F34D4 ; =0x00004094
    // ldrb r1, [r3, r1]
    // ldr r3, _021F34D8 ; =ov14_021F2A9C
    // bx r3
    // nop
    // _021F34D4: .word 0x00004094
    // _021F34D8: .word ov14_021F2A9C
    // TODO: decompile
}




void ov14_021F34DC(void) {
}




void ov14_021F34EC(void) {
    // push {r4, lr}
    // sub sp, #0x10
    // add r4, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // ldr r0, _021F35AC ; =0x0000C11D
    // mov r1, #0xbd
    // lsl r1, r1, #2
    // str r0, [sp, #8]
    // ldr r0, [r4, r1]
    // add r1, r1, #4
    // ldr r1, [r4, r1]
    // mov r2, #8
    // mov r3, #0x4c
    // bl SpriteSystem_LoadCharResObj
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // ldr r0, _021F35B0 ; =0x0000C11E
    // mov r1, #0xbd
    // lsl r1, r1, #2
    // str r0, [sp, #8]
    // ldr r0, [r4, r1]
    // add r1, r1, #4
    // ldr r1, [r4, r1]
    // mov r2, #8
    // mov r3, #0x4c
    // bl SpriteSystem_LoadCharResObj
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // mov r0, #2
    // str r0, [sp, #8]
    // ldr r0, _021F35B4 ; =0x0000C0FA
    // mov r1, #0xbd
    // lsl r1, r1, #2
    // str r0, [sp, #0xc]
    // ldr r0, [r4, r1]
    // add r1, r1, #4
    // ldr r1, [r4, r1]
    // mov r2, #8
    // mov r3, #0x4b
    // bl SpriteSystem_LoadPlttResObj
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // mov r0, #2
    // str r0, [sp, #8]
    // ldr r0, _021F35B8 ; =0x0000C0FB
    // mov r1, #0xbd
    // lsl r1, r1, #2
    // str r0, [sp, #0xc]
    // ldr r0, [r4, r1]
    // add r1, r1, #4
    // ldr r1, [r4, r1]
    // mov r2, #8
    // mov r3, #0x4b
    // bl SpriteSystem_LoadPlttResObj
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, _021F35B4 ; =0x0000C0FA
    // mov r1, #0xbd
    // lsl r1, r1, #2
    // str r0, [sp, #4]
    // ldr r0, [r4, r1]
    // add r1, r1, #4
    // ldr r1, [r4, r1]
    // mov r2, #8
    // mov r3, #0x4d
    // bl SpriteSystem_LoadCellResObj
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, _021F35B4 ; =0x0000C0FA
    // mov r1, #0xbd
    // lsl r1, r1, #2
    // str r0, [sp, #4]
    // ldr r0, [r4, r1]
    // add r1, r1, #4
    // ldr r1, [r4, r1]
    // mov r2, #8
    // mov r3, #0x4e
    // bl SpriteSystem_LoadAnimResObj
    // add sp, #0x10
    // pop {r4, pc}
    // nop
    // _021F35AC: .word 0x0000C11D
    // _021F35B0: .word 0x0000C11E
    // _021F35B4: .word 0x0000C0FA
    // _021F35B8: .word 0x0000C0FB
    // TODO: decompile
}




void ov14_021F35BC(void) {
    // push {r4, lr}
    // mov r1, #0xbd
    // ldr r4, [r0, #0x34]
    // lsl r1, r1, #2
    // ldr r0, [r4, r1]
    // add r1, r1, #4
    // mov r3, #2
    // ldr r1, [r4, r1]
    // ldr r2, _021F360C ; =ov14_021F8210
    // lsl r3, r3, #0x14
    // bl SpriteSystem_NewSpriteWithYOffset
    // mov r1, #0xc1
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // add r0, r1, #0
    // sub r0, #0x10
    // sub r1, #0xc
    // mov r3, #2
    // ldr r0, [r4, r0]
    // ldr r1, [r4, r1]
    // ldr r2, _021F3610 ; =ov14_021F8244
    // lsl r3, r3, #0x14
    // bl SpriteSystem_NewSpriteWithYOffset
    // mov r1, #0xc2
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // sub r0, r1, #4
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // mov r0, #0xc2
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // pop {r4, pc}
    // _021F360C: .word ov14_021F8210
    // _021F3610: .word ov14_021F8244
    // TODO: decompile
}




void ov14_021F3614(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x34
    // ldr r3, _021F36D4 ; =ov14_021F8098
    // add r7, r2, #0
    // add r2, sp, #0x14
    // add r6, r0, #0
    // add r4, r1, #0
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // mov r1, #0x32
    // mov r0, #0xa
    // lsl r1, r1, #6
    // bl Heap_AllocAtEnd
    // add r5, r0, #0
    // ldr r1, [r4]
    // add r0, sp, #0x24
    // mov r2, #2
    // mov r3, #0
    // bl GetBoxmonSpriteCharAndPlttNarcIds
    // ldrb r0, [r4, #0x12]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x1f
    // cmp r0, #1
    // bne _021F3658
    // ldrh r1, [r4, #4]
    // ldr r0, _021F36D8 ; =0x00000147
    // cmp r1, r0
    // bne _021F3658
    // add r0, #0xa7
    // b _021F365A
    // ldrh r0, [r4, #4]
    // str r5, [sp]
    // ldr r1, [r4, #8]
    // mov r2, #0xa
    // str r1, [sp, #4]
    // mov r1, #0
    // str r1, [sp, #8]
    // mov r1, #2
    // str r1, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, sp, #0x14
    // ldrh r0, [r1, #0x10]
    // ldrh r1, [r1, #0x12]
    // add r3, sp, #0x14
    // bl sub_02014510
    // mov r0, #0xbf
    // lsl r0, r0, #2
    // add r4, r6, r0
    // lsl r6, r7, #2
    // ldr r0, [r4, r6]
    // ldr r0, [r0]
    // bl Sprite_GetImageProxy
    // mov r1, #2
    // bl NNS_G2dGetImageLocation
    // mov r1, #0x32
    // add r7, r0, #0
    // add r0, r5, #0
    // lsl r1, r1, #6
    // bl DC_FlushRange
    // mov r2, #0x32
    // add r0, r5, #0
    // add r1, r7, #0
    // lsl r2, r2, #6
    // bl GXS_LoadOBJ
    // ldr r0, [r4, r6]
    // ldr r0, [r0]
    // bl Sprite_GetPaletteProxy
    // mov r1, #2
    // bl NNS_G2dGetImagePaletteLocation
    // add r3, r0, #0
    // mov r0, #0x20
    // str r0, [sp]
    // mov r0, #0xa
    // str r0, [sp, #4]
    // add r1, sp, #0x14
    // ldrh r0, [r1, #0x10]
    // ldrh r1, [r1, #0x14]
    // mov r2, #5
    // bl GfGfxLoader_GXLoadPal
    // add r0, r5, #0
    // bl Heap_Free
    // add sp, #0x34
    // pop {r4, r5, r6, r7, pc}
    // _021F36D4: .word ov14_021F8098
    // _021F36D8: .word 0x00000147
    // TODO: decompile
}




void ov14_021F36DC(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r2, #0
    // ldr r0, [r5, #0x34]
    // ldr r2, _021F3710 ; =0x000088D0
    // ldrh r2, [r0, r2]
    // add r4, r4, r2
    // add r2, r4, #0
    // bl ov14_021F3614
    // ldr r1, [r5, #0x34]
    // lsl r0, r4, #2
    // add r1, r1, r0
    // mov r0, #0xbf
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // mov r1, #1
    // bl ManagedSprite_SetDrawFlag
    // ldr r3, [r5, #0x34]
    // ldr r1, _021F3710 ; =0x000088D0
    // mov r0, #1
    // ldrh r2, [r3, r1]
    // eor r0, r2
    // strh r0, [r3, r1]
    // pop {r3, r4, r5, pc}
    // _021F3710: .word 0x000088D0
    // TODO: decompile
}




void ov14_021F3714(void) {
    // push {r4, lr}
    // sub sp, #0x10
    // add r4, r0, #0
    // mov r0, #1
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, _021F37E0 ; =0x0000C11F
    // mov r1, #0xbd
    // lsl r1, r1, #2
    // str r0, [sp, #8]
    // ldr r0, [r4, r1]
    // add r1, r1, #4
    // ldr r1, [r4, r1]
    // mov r2, #0x13
    // mov r3, #0x4f
    // bl SpriteSystem_LoadCharResObj
    // mov r0, #0
    // mov r1, #2
    // bl GetItemIndexMapping
    // add r3, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, _021F37E4 ; =0x0000C0FC
    // mov r1, #0xbd
    // lsl r1, r1, #2
    // str r0, [sp, #0xc]
    // ldr r0, [r4, r1]
    // add r1, r1, #4
    // ldr r1, [r4, r1]
    // mov r2, #0x12
    // bl SpriteSystem_LoadPlttResObj
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // ldr r0, _021F37E8 ; =0x0000C120
    // mov r1, #0xbd
    // lsl r1, r1, #2
    // str r0, [sp, #8]
    // ldr r0, [r4, r1]
    // add r1, r1, #4
    // ldr r1, [r4, r1]
    // mov r2, #0x13
    // mov r3, #0x4f
    // bl SpriteSystem_LoadCharResObj
    // mov r0, #0
    // mov r1, #2
    // bl GetItemIndexMapping
    // add r3, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // mov r0, #2
    // str r0, [sp, #8]
    // ldr r0, _021F37EC ; =0x0000C0FD
    // mov r1, #0xbd
    // lsl r1, r1, #2
    // str r0, [sp, #0xc]
    // ldr r0, [r4, r1]
    // add r1, r1, #4
    // ldr r1, [r4, r1]
    // mov r2, #0x12
    // bl SpriteSystem_LoadPlttResObj
    // mov r0, #1
    // str r0, [sp]
    // ldr r0, _021F37F0 ; =0x0000C0FB
    // mov r1, #0xbd
    // lsl r1, r1, #2
    // str r0, [sp, #4]
    // ldr r0, [r4, r1]
    // add r1, r1, #4
    // ldr r1, [r4, r1]
    // mov r2, #0x13
    // mov r3, #0x50
    // bl SpriteSystem_LoadCellResObj
    // mov r0, #1
    // str r0, [sp]
    // ldr r0, _021F37F0 ; =0x0000C0FB
    // mov r1, #0xbd
    // lsl r1, r1, #2
    // str r0, [sp, #4]
    // ldr r0, [r4, r1]
    // add r1, r1, #4
    // ldr r1, [r4, r1]
    // mov r2, #0x13
    // mov r3, #0x51
    // bl SpriteSystem_LoadAnimResObj
    // add sp, #0x10
    // pop {r4, pc}
    // nop
    // _021F37E0: .word 0x0000C11F
    // _021F37E4: .word 0x0000C0FC
    // _021F37E8: .word 0x0000C120
    // _021F37EC: .word 0x0000C0FD
    // _021F37F0: .word 0x0000C0FB
    // TODO: decompile
}




void ov14_021F37F4(void) {
    // push {r4, lr}
    // mov r1, #0xbd
    // add r4, r0, #0
    // lsl r1, r1, #2
    // ldr r0, [r4, r1]
    // add r1, r1, #4
    // ldr r1, [r4, r1]
    // ldr r2, _021F383C ; =ov14_021F83E4
    // bl SpriteSystem_NewSprite
    // mov r1, #0xca
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // ldr r0, [r4, r1]
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // mov r1, #0xbd
    // lsl r1, r1, #2
    // ldr r0, [r4, r1]
    // add r1, r1, #4
    // mov r3, #2
    // ldr r1, [r4, r1]
    // ldr r2, _021F3840 ; =ov14_021F8418
    // lsl r3, r3, #0x14
    // bl SpriteSystem_NewSpriteWithYOffset
    // mov r1, #0xcb
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // ldr r0, [r4, r1]
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // pop {r4, pc}
    // nop
    // _021F383C: .word ov14_021F83E4
    // _021F3840: .word ov14_021F8418
    // TODO: decompile
}




void ov14_021F3844(void) {
    GetItemIndexMapping(r1, 1);
    // str r0, [sp]
    // add r3, sp, #8
    GfGfxLoader_GetCharData(0x12, r0, 0);
    // ldr r2, [sp, #8]
    ov14_021F2C1C(r5, 0xb, *((u32*)(r2 + 0x14)), (2 << 8));
    Heap_Free(r4);
    // ldr r0, [r5, r0]
    Sprite_GetPaletteProxy(*((u32*)(0xca << 2)));
    NNS_G2dGetImagePaletteLocation(1);
    GetItemIndexMapping(r6, 2);
    // str r0, [sp]
    // str r0, [sp, #4]
    GfGfxLoader_GXLoadPal(0x12, r0, 1, r4);
}




void ov14_021F38B0(void) {
    GetItemIndexMapping(r1, 1);
    // str r0, [sp]
    // add r3, sp, #8
    GfGfxLoader_GetCharData(0x12, r0, 0);
    // ldr r2, [sp, #8]
    ov14_021F2C50(r5, 0xc, *((u32*)(r2 + 0x14)), (2 << 8));
    Heap_Free(r4);
    // ldr r0, [r5, r0]
    Sprite_GetPaletteProxy(*((u32*)(0xcb << 2)));
    NNS_G2dGetImagePaletteLocation(2);
    GetItemIndexMapping(r6, 2);
    // str r0, [sp]
    // str r0, [sp, #4]
    GfGfxLoader_GXLoadPal(0x12, r0, 5, r4);
}




void ov14_021F391C(void) {
    // ldr r0, [r4, r0]
    ManagedSprite_SetAffineOverwriteMode((0xca << 2), 1);
    // ldr r0, [r4, r0]
    ManagedSprite_SetAffineTranslation((0xca << 2), 0xc, 0xc);
    // ldr r0, [r4, r0]
    ManagedSprite_SetAffineTranslation((0xca << 2), 0, 0);
    // ldr r0, [r4, r0]
    ManagedSprite_SetAffineOverwriteMode((0xca << 2), 0);
}




void ov14_021F395C(void) {
    // mov r3, #0xca
    // lsl r3, r3, #2
    // ldr r0, [r0, r3]
    // ldr r3, _021F3968 ; =ManagedSprite_SetPositionXY
    // bx r3
    // nop
    // _021F3968: .word ManagedSprite_SetPositionXY
    // TODO: decompile
}




void ov14_021F396C(void) {
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    ov14_021F2F88(r1, r2);
    // add r3, sp, #0
    // ldrsh r1, [r3, r1]
    // ldrsh r2, [r3, r2]
    // add r1, #8
    // add r2, #8
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    ov14_021F395C(r4, (2 << 0x10), (0 << 0x10));
}




void ov14_021F39A0(void) {
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    ov14_021F2F88(r1, r2);
    // add r3, sp, #0
    // ldrsh r2, [r3, r2]
    // ldrsh r1, [r3, r1]
    // asr r2, r2, #0x10
    ov14_021F395C(r4, 2, ((0 + 4) << 0x10));
}




void ov14_021F39D0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x48
    // add r5, r0, #0
    // ldr r0, _021F3B24 ; =0x000088C8
    // ldrh r0, [r5, r0]
    // cmp r0, #0
    // bne _021F39E0
    // b _021F3B1E
    // mov r0, #0xca
    // lsl r0, r0, #2
    // add r1, sp, #0x10
    // ldr r0, [r5, r0]
    // add r1, #2
    // add r2, sp, #0x10
    // bl ManagedSprite_GetPositionXY
    // mov r0, #0x3f
    // lsl r0, r0, #4
    // ldr r1, [r5, r0]
    // cmp r1, #0
    // bne _021F3AA0
    // ldr r4, _021F3B28 ; =ov14_021F83E4
    // add r3, sp, #0x14
    // mov r2, #6
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // sub r2, r2, #1
    // bne _021F3A00
    // ldr r0, [r4]
    // str r0, [r3]
    // mov r0, #0xca
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // bl ManagedSprite_GetDrawPriority
    // add r0, r0, #1
    // str r0, [sp, #0x1c]
    // mov r0, #0xca
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // bl ManagedSprite_GetPriority
    // str r0, [sp, #0x40]
    // ldr r0, _021F3B2C ; =0x0000C11F
    // mov r1, #1
    // str r0, [sp, #0x28]
    // ldr r0, _021F3B30 ; =0x000088D2
    // ldr r7, _021F3B34 ; =ov14_021F8070
    // strh r1, [r5, r0]
    // mov r0, #0
    // ldr r6, _021F3B38 ; =ov14_021F8078
    // str r0, [sp, #8]
    // add r4, r5, #0
    // add r1, sp, #0x10
    // mov r0, #2
    // ldrsh r1, [r1, r0]
    // mov r0, #0
    // ldrsb r0, [r7, r0]
    // add r2, sp, #0x14
    // add r1, r1, r0
    // add r0, sp, #0x10
    // strh r1, [r0, #4]
    // add r1, r0, #0
    // mov r0, #0
    // ldrsh r1, [r1, r0]
    // ldrsb r0, [r6, r0]
    // add r1, r1, r0
    // add r0, sp, #0x10
    // strh r1, [r0, #6]
    // mov r0, #0xbd
    // mov r1, #0xbe
    // lsl r0, r0, #2
    // lsl r1, r1, #2
    // ldr r0, [r5, r0]
    // ldr r1, [r5, r1]
    // bl SpriteSystem_NewSprite
    // mov r1, #0x3f
    // lsl r1, r1, #4
    // str r0, [r4, r1]
    // add r0, r1, #0
    // ldr r0, [r4, r0]
    // mov r1, #8
    // bl ManagedSprite_SetPaletteOverride
    // mov r0, #0x3f
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // ldr r0, [sp, #8]
    // add r7, r7, #1
    // add r0, r0, #1
    // add r6, r6, #1
    // add r4, r4, #4
    // str r0, [sp, #8]
    // cmp r0, #8
    // blo _021F3A3A
    // ldr r0, _021F3B30 ; =0x000088D2
    // mov r1, #0
    // add sp, #0x48
    // strh r1, [r5, r0]
    // pop {r3, r4, r5, r6, r7, pc}
    // sub r0, #0xc8
    // ldr r0, [r5, r0]
    // bl ManagedSprite_GetDrawPriority
    // str r0, [sp, #0xc]
    // mov r0, #0xca
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // bl ManagedSprite_GetPriority
    // str r0, [sp, #4]
    // mov r0, #0
    // ldr r7, _021F3B38 ; =ov14_021F8078
    // ldr r6, _021F3B34 ; =ov14_021F8070
    // str r0, [sp]
    // add r4, r5, #0
    // add r2, sp, #0x10
    // mov r1, #2
    // ldrsh r1, [r2, r1]
    // mov r2, #0
    // ldrsb r2, [r6, r2]
    // add r3, sp, #0x10
    // mov r0, #0x3f
    // add r1, r1, r2
    // mov r2, #0
    // ldrsh r3, [r3, r2]
    // ldrsb r2, [r7, r2]
    // lsl r0, r0, #4
    // lsl r1, r1, #0x10
    // add r2, r3, r2
    // lsl r2, r2, #0x10
    // ldr r0, [r4, r0]
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    // bl ManagedSprite_SetPositionXY
    // ldr r1, [sp]
    // ldr r2, [sp, #0xc]
    // add r0, r5, #0
    // add r1, #0x3d
    // add r2, r2, #1
    // bl ov14_021F2A74
    // mov r0, #0x3f
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // ldr r1, [sp, #4]
    // bl ManagedSprite_SetPriority
    // mov r0, #0x3f
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // ldr r0, [sp]
    // add r7, r7, #1
    // add r0, r0, #1
    // add r6, r6, #1
    // add r4, r4, #4
    // str r0, [sp]
    // cmp r0, #8
    // blo _021F3AC0
    // add sp, #0x48
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021F3B24: .word 0x000088C8
    // _021F3B28: .word ov14_021F83E4
    // _021F3B2C: .word 0x0000C11F
    // _021F3B30: .word 0x000088D2
    // _021F3B34: .word ov14_021F8070
    // _021F3B38: .word ov14_021F8078
    // TODO: decompile
}




void ov14_021F3B3C(void) {
}




void ov14_021F3B5C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // mov r0, #0xca
    // lsl r0, r0, #2
    // add r1, sp, #0
    // ldr r0, [r5, r0]
    // add r1, #2
    // add r2, sp, #0
    // bl ManagedSprite_GetPositionXY
    // mov r0, #0x3f
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // cmp r0, #0
    // beq _021F3BB6
    // ldr r6, _021F3BB8 ; =ov14_021F8078
    // ldr r4, _021F3BBC ; =ov14_021F8070
    // mov r7, #0
    // add r2, sp, #0
    // mov r1, #2
    // ldrsh r1, [r2, r1]
    // mov r2, #0
    // ldrsb r2, [r4, r2]
    // add r3, sp, #0
    // mov r0, #0x3f
    // add r1, r1, r2
    // mov r2, #0
    // ldrsh r2, [r3, r2]
    // mov r3, #0
    // ldrsb r3, [r6, r3]
    // lsl r0, r0, #4
    // lsl r1, r1, #0x10
    // add r2, r2, r3
    // lsl r2, r2, #0x10
    // ldr r0, [r5, r0]
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    // bl ManagedSprite_SetPositionXY
    // add r7, r7, #1
    // add r6, r6, #1
    // add r4, r4, #1
    // add r5, r5, #4
    // cmp r7, #8
    // blo _021F3B80
    // pop {r3, r4, r5, r6, r7, pc}
    // _021F3BB8: .word ov14_021F8078
    // _021F3BBC: .word ov14_021F8070
    // TODO: decompile
}




void ov14_021F3BC0(void) {
    // add r2, sp, #0
    // ldr r0, [r4, r0]
    // add r2, #1
    // add r3, sp, #0
    sub_02019B1C((0x2f << 4), 0x10);
    // add r3, sp, #0
    // ldrsb r2, [r3, r2]
    // ldr r0, [r4, r0]
    // add r2, r3, r2
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXY((0xcb << 2), 0x12, ((0x5a << 2) << 0x10), (0 << 3));
    // ldr r0, [r4, r0]
    ManagedSprite_SetDrawFlag((0xcb << 2), 1);
}




void ov14_021F3C08(void) {
    // push {r4, lr}
    // sub sp, #0x10
    // add r4, r0, #0
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // ldr r0, _021F3CA4 ; =0x0000C121
    // mov r1, #0xbd
    // lsl r1, r1, #2
    // str r0, [sp, #8]
    // ldr r0, [r4, r1]
    // add r1, r1, #4
    // ldr r1, [r4, r1]
    // mov r2, #0x13
    // mov r3, #0x52
    // bl SpriteSystem_LoadCharResObj
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // ldr r0, _021F3CA8 ; =0x0000C122
    // mov r1, #0xbd
    // lsl r1, r1, #2
    // str r0, [sp, #8]
    // ldr r0, [r4, r1]
    // add r1, r1, #4
    // ldr r1, [r4, r1]
    // mov r2, #0x13
    // mov r3, #0x52
    // bl SpriteSystem_LoadCharResObj
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #3
    // str r0, [sp, #4]
    // mov r0, #2
    // str r0, [sp, #8]
    // ldr r0, _021F3CAC ; =0x0000C0FE
    // mov r1, #0xbd
    // lsl r1, r1, #2
    // str r0, [sp, #0xc]
    // ldr r0, [r4, r1]
    // add r1, r1, #4
    // ldr r1, [r4, r1]
    // mov r2, #8
    // mov r3, #0x4a
    // bl SpriteSystem_LoadPlttResObj
    // mov r0, #1
    // str r0, [sp]
    // ldr r0, _021F3CB0 ; =0x0000C0FC
    // mov r1, #0xbd
    // lsl r1, r1, #2
    // str r0, [sp, #4]
    // ldr r0, [r4, r1]
    // add r1, r1, #4
    // ldr r1, [r4, r1]
    // mov r2, #0x13
    // mov r3, #0x53
    // bl SpriteSystem_LoadCellResObj
    // mov r0, #1
    // str r0, [sp]
    // ldr r0, _021F3CB0 ; =0x0000C0FC
    // mov r1, #0xbd
    // lsl r1, r1, #2
    // str r0, [sp, #4]
    // ldr r0, [r4, r1]
    // add r1, r1, #4
    // ldr r1, [r4, r1]
    // mov r2, #0x13
    // mov r3, #0x54
    // bl SpriteSystem_LoadAnimResObj
    // add sp, #0x10
    // pop {r4, pc}
    // _021F3CA4: .word 0x0000C121
    // _021F3CA8: .word 0x0000C122
    // _021F3CAC: .word 0x0000C0FE
    // _021F3CB0: .word 0x0000C0FC
    // TODO: decompile
}




void ov14_021F3CB4(void) {
    // push {r4, lr}
    // mov r1, #0xbd
    // add r4, r0, #0
    // lsl r1, r1, #2
    // ldr r0, [r4, r1]
    // add r1, r1, #4
    // mov r3, #2
    // ldr r1, [r4, r1]
    // ldr r2, _021F3D04 ; =ov14_021F844C
    // lsl r3, r3, #0x14
    // bl SpriteSystem_NewSpriteWithYOffset
    // mov r1, #0x33
    // lsl r1, r1, #4
    // str r0, [r4, r1]
    // add r0, r1, #0
    // sub r0, #0x3c
    // sub r1, #0x38
    // mov r3, #2
    // ldr r0, [r4, r0]
    // ldr r1, [r4, r1]
    // ldr r2, _021F3D08 ; =ov14_021F8480
    // lsl r3, r3, #0x14
    // bl SpriteSystem_NewSpriteWithYOffset
    // mov r1, #0xcd
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // sub r0, r1, #4
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // mov r0, #0xcd
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // pop {r4, pc}
    // _021F3D04: .word ov14_021F844C
    // _021F3D08: .word ov14_021F8480
    // TODO: decompile
}




void ov14_021F3D0C(void) {
    sub_020776B4();
    sub_02077678(r7);
    // str r0, [sp]
    // add r3, sp, #4
    GfGfxLoader_GetCharData(r6, r0, 1);
    // ldr r2, [sp, #4]
    ov14_021F2C50(r5, r4, *((u32*)(r2 + 0x14)), (1 << 8));
    Heap_Free(r6);
    // add r5, r5, r0
    // ldr r0, [r5, r4]
    ManagedSprite_GetPaletteOverrideOffset((0xbf << 2));
    sub_0207769C(r7);
    // ldr r0, [r5, r4]
    // add r1, r6, r1
    ManagedSprite_SetPaletteOverride(r0);
}




void ov14_021F3D70(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // ldrb r1, [r4, #0x12]
    // add r5, r0, #0
    // lsl r1, r1, #0x18
    // lsr r1, r1, #0x1f
    // beq _021F3D98
    // mov r0, #0x33
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // mov r0, #0xcd
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // pop {r3, r4, r5, pc}
    // ldrb r1, [r4, #0xc]
    // ldr r3, _021F3DE0 ; =0x0000C121
    // mov r2, #0xd
    // bl ov14_021F3D0C
    // mov r0, #0x33
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // mov r1, #1
    // bl ManagedSprite_SetDrawFlag
    // ldrb r1, [r4, #0xd]
    // cmp r1, #0
    // beq _021F3DD2
    // ldrb r0, [r4, #0xc]
    // cmp r0, r1
    // beq _021F3DD2
    // ldr r3, _021F3DE4 ; =0x0000C122
    // add r0, r5, #0
    // mov r2, #0xe
    // bl ov14_021F3D0C
    // mov r0, #0xcd
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #1
    // bl ManagedSprite_SetDrawFlag
    // pop {r3, r4, r5, pc}
    // mov r0, #0xcd
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // pop {r3, r4, r5, pc}
    // _021F3DE0: .word 0x0000C121
    // _021F3DE4: .word 0x0000C122
    // TODO: decompile
}




void ov14_021F3DE8(void) {
    // push {r4, lr}
    // sub sp, #0x10
    // add r4, r0, #0
    // mov r0, #1
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, _021F3E64 ; =0x0000C12D
    // mov r1, #0xbd
    // lsl r1, r1, #2
    // str r0, [sp, #8]
    // ldr r0, [r4, r1]
    // add r1, r1, #4
    // ldr r1, [r4, r1]
    // mov r2, #0x13
    // mov r3, #0x42
    // bl SpriteSystem_LoadCharResObj
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #3
    // str r0, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // ldr r0, _021F3E68 ; =0x0000C101
    // mov r1, #0xbd
    // lsl r1, r1, #2
    // str r0, [sp, #0xc]
    // ldr r0, [r4, r1]
    // add r1, r1, #4
    // ldr r1, [r4, r1]
    // mov r2, #0x13
    // mov r3, #0x45
    // bl SpriteSystem_LoadPlttResObj
    // mov r0, #1
    // str r0, [sp]
    // ldr r0, _021F3E6C ; =0x0000C0FF
    // mov r1, #0xbd
    // lsl r1, r1, #2
    // str r0, [sp, #4]
    // ldr r0, [r4, r1]
    // add r1, r1, #4
    // ldr r1, [r4, r1]
    // mov r2, #0x13
    // mov r3, #0x43
    // bl SpriteSystem_LoadCellResObj
    // mov r0, #1
    // str r0, [sp]
    // ldr r0, _021F3E6C ; =0x0000C0FF
    // mov r1, #0xbd
    // lsl r1, r1, #2
    // str r0, [sp, #4]
    // ldr r0, [r4, r1]
    // add r1, r1, #4
    // ldr r1, [r4, r1]
    // mov r2, #0x13
    // mov r3, #0x44
    // bl SpriteSystem_LoadAnimResObj
    // add sp, #0x10
    // pop {r4, pc}
    // _021F3E64: .word 0x0000C12D
    // _021F3E68: .word 0x0000C101
    // _021F3E6C: .word 0x0000C0FF
    // TODO: decompile
}




void ov14_021F3E70(void) {
    // push {r4, lr}
    // mov r1, #0xbd
    // add r4, r0, #0
    // lsl r1, r1, #2
    // ldr r0, [r4, r1]
    // add r1, r1, #4
    // ldr r1, [r4, r1]
    // ldr r2, _021F3F48 ; =ov14_021F81A8
    // bl SpriteSystem_NewSprite
    // mov r1, #0xbf
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // add r0, r1, #0
    // sub r0, #8
    // sub r1, r1, #4
    // ldr r0, [r4, r0]
    // ldr r1, [r4, r1]
    // ldr r2, _021F3F4C ; =ov14_021F81DC
    // bl SpriteSystem_NewSprite
    // mov r1, #3
    // lsl r1, r1, #8
    // str r0, [r4, r1]
    // add r0, r1, #0
    // sub r0, #0xc
    // sub r1, #8
    // ldr r0, [r4, r0]
    // ldr r1, [r4, r1]
    // ldr r2, _021F3F50 ; =ov14_021F8278
    // bl SpriteSystem_NewSprite
    // mov r1, #0xc3
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // add r0, r1, #0
    // sub r0, #0x18
    // sub r1, #0x14
    // ldr r0, [r4, r0]
    // ldr r1, [r4, r1]
    // ldr r2, _021F3F54 ; =ov14_021F82AC
    // bl SpriteSystem_NewSprite
    // mov r1, #0x31
    // lsl r1, r1, #4
    // str r0, [r4, r1]
    // add r0, r1, #0
    // sub r0, #0x1c
    // sub r1, #0x18
    // ldr r0, [r4, r0]
    // ldr r1, [r4, r1]
    // ldr r2, _021F3F58 ; =ov14_021F82E0
    // bl SpriteSystem_NewSprite
    // mov r1, #0xc5
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // add r0, r1, #0
    // sub r0, #0x20
    // sub r1, #0x1c
    // ldr r0, [r4, r0]
    // ldr r1, [r4, r1]
    // ldr r2, _021F3F5C ; =ov14_021F8314
    // bl SpriteSystem_NewSprite
    // mov r1, #0xc6
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // add r0, r1, #0
    // sub r0, #0x24
    // sub r1, #0x20
    // ldr r0, [r4, r0]
    // ldr r1, [r4, r1]
    // ldr r2, _021F3F60 ; =ov14_021F8348
    // bl SpriteSystem_NewSprite
    // mov r1, #0xc7
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // add r0, r1, #0
    // sub r0, #0x28
    // sub r1, #0x24
    // ldr r0, [r4, r0]
    // ldr r1, [r4, r1]
    // ldr r2, _021F3F64 ; =ov14_021F837C
    // bl SpriteSystem_NewSprite
    // mov r1, #0x32
    // lsl r1, r1, #4
    // str r0, [r4, r1]
    // add r0, r1, #0
    // sub r0, #0x2c
    // sub r1, #0x28
    // ldr r0, [r4, r0]
    // ldr r1, [r4, r1]
    // ldr r2, _021F3F68 ; =ov14_021F83B0
    // bl SpriteSystem_NewSprite
    // mov r1, #0xc9
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // add r0, r4, #0
    // mov r1, #0xa
    // mov r2, #0
    // bl ov14_021F2A18
    // pop {r4, pc}
    // nop
    // _021F3F48: .word ov14_021F81A8
    // _021F3F4C: .word ov14_021F81DC
    // _021F3F50: .word ov14_021F8278
    // _021F3F54: .word ov14_021F82AC
    // _021F3F58: .word ov14_021F82E0
    // _021F3F5C: .word ov14_021F8314
    // _021F3F60: .word ov14_021F8348
    // _021F3F64: .word ov14_021F837C
    // _021F3F68: .word ov14_021F83B0
    // TODO: decompile
}




void ov14_021F3F6C(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x4c
    // add r6, r0, #0
    // add r0, #0x21
    // ldrb r0, [r0]
    // cmp r0, #0xff
    // bne _021F3F7C
    // b _021F40C0
    // ldr r4, [r6, #0x34]
    // add r2, sp, #0x14
    // add r1, r4, r0
    // ldr r0, _021F40C4 ; =0x00004094
    // ldrb r0, [r1, r0]
    // add r1, sp, #0x14
    // add r1, #2
    // str r0, [sp, #0xc]
    // lsl r5, r0, #2
    // mov r0, #0xbf
    // lsl r0, r0, #2
    // add r7, r4, r0
    // ldr r0, [r7, r5]
    // bl ManagedSprite_GetPositionXY
    // mov r0, #0x3f
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // bne _021F402C
    // ldr r3, _021F40C8 ; =ov14_021F810C
    // add r2, sp, #0x18
    // mov r6, #6
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // sub r6, r6, #1
    // bne _021F3FAA
    // ldr r0, [r3]
    // str r0, [r2]
    // ldr r0, [r7, r5]
    // bl ManagedSprite_GetDrawPriority
    // add r0, r0, #1
    // str r0, [sp, #0x20]
    // ldr r0, [r7, r5]
    // bl ManagedSprite_GetPriority
    // str r0, [sp, #0x44]
    // ldr r1, _021F40CC ; =0x0000C0E0
    // ldr r0, [sp, #0xc]
    // mov r5, #0
    // add r0, r0, r1
    // str r0, [sp, #0x2c]
    // ldr r0, _021F40D0 ; =0x000088D2
    // mov r1, #1
    // strh r1, [r4, r0]
    // add r7, sp, #0x14
    // mov r0, #2
    // ldrsh r1, [r7, r0]
    // ldr r0, _021F40D4 ; =ov14_021F8070
    // add r2, sp, #0x18
    // ldrsb r0, [r0, r5]
    // add r0, r1, r0
    // strh r0, [r7, #4]
    // mov r0, #0
    // ldrsh r1, [r7, r0]
    // ldr r0, _021F40D8 ; =ov14_021F8078
    // ldrsb r0, [r0, r5]
    // add r0, r1, r0
    // strh r0, [r7, #6]
    // lsl r0, r5, #2
    // add r6, r4, r0
    // mov r0, #0xbd
    // mov r1, #0xbe
    // lsl r0, r0, #2
    // lsl r1, r1, #2
    // ldr r0, [r4, r0]
    // ldr r1, [r4, r1]
    // bl SpriteSystem_NewSprite
    // mov r1, #0x3f
    // lsl r1, r1, #4
    // str r0, [r6, r1]
    // add r0, r1, #0
    // ldr r0, [r6, r0]
    // mov r1, #8
    // bl ManagedSprite_SetPaletteOverride
    // add r0, r5, #1
    // lsl r0, r0, #0x10
    // lsr r5, r0, #0x10
    // cmp r5, #8
    // blo _021F3FDA
    // ldr r0, _021F40D0 ; =0x000088D2
    // mov r1, #0
    // add sp, #0x4c
    // strh r1, [r4, r0]
    // pop {r4, r5, r6, r7, pc}
    // ldr r0, [r7, r5]
    // ldr r0, [r0]
    // bl Sprite_GetImageProxy
    // str r0, [sp, #8]
    // ldr r0, [r7, r5]
    // bl ManagedSprite_GetDrawPriority
    // str r0, [sp, #0x10]
    // ldr r0, [r7, r5]
    // bl ManagedSprite_GetPriority
    // str r0, [sp, #4]
    // mov r5, #0
    // lsl r7, r5, #2
    // mov r0, #0x3f
    // add r1, r4, r7
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // str r1, [sp]
    // ldr r0, [r0]
    // ldr r1, [sp, #8]
    // bl Sprite_SetImageProxy
    // mov r0, #0x3f
    // ldr r1, [sp]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // add r2, sp, #0x14
    // mov r1, #2
    // ldrsh r1, [r2, r1]
    // ldr r2, _021F40D4 ; =ov14_021F8070
    // add r3, sp, #0x14
    // ldrsb r2, [r2, r5]
    // add r1, r1, r2
    // mov r2, #0
    // ldrsh r3, [r3, r2]
    // ldr r2, _021F40D8 ; =ov14_021F8078
    // lsl r1, r1, #0x10
    // ldrsb r2, [r2, r5]
    // asr r1, r1, #0x10
    // add r2, r3, r2
    // lsl r2, r2, #0x10
    // asr r2, r2, #0x10
    // bl ManagedSprite_SetPositionXY
    // ldr r2, [sp, #0x10]
    // add r1, r5, #0
    // ldr r0, [r6, #0x34]
    // add r1, #0x3d
    // add r2, r2, #1
    // bl ov14_021F2A74
    // ldr r0, [r6, #0x34]
    // add r1, r0, r7
    // mov r0, #0x3f
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // ldr r1, [sp, #4]
    // bl ManagedSprite_SetPriority
    // ldr r0, [r6, #0x34]
    // add r1, r0, r7
    // mov r0, #0x3f
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // mov r1, #1
    // bl ManagedSprite_SetDrawFlag
    // add r0, r5, #1
    // lsl r0, r0, #0x10
    // lsr r5, r0, #0x10
    // cmp r5, #8
    // blo _021F4048
    // add sp, #0x4c
    // pop {r4, r5, r6, r7, pc}
    // _021F40C4: .word 0x00004094
    // _021F40C8: .word ov14_021F810C
    // _021F40CC: .word 0x0000C0E0
    // _021F40D0: .word 0x000088D2
    // _021F40D4: .word ov14_021F8070
    // _021F40D8: .word ov14_021F8078
    // TODO: decompile
}




void ov14_021F40DC(void) {
}




void ov14_021F40E8(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r7, r1, #0
    // add r5, r0, #0
    // cmp r7, #1
    // bne _021F40F6
    // mov r7, #1
    // b _021F40F8
    // mov r7, #0
    // mov r6, #0
    // add r4, r6, #0
    // ldr r0, [r5, #0x34]
    // add r1, r0, r4
    // mov r0, #0x3f
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // cmp r0, #0
    // beq _021F4164
    // add r1, r7, #0
    // bl ManagedSprite_SetDrawFlag
    // cmp r7, #1
    // bne _021F4164
    // add r0, r5, #0
    // add r0, #0x21
    // ldrb r1, [r0]
    // cmp r1, #0xff
    // beq _021F4164
    // ldr r0, [r5, #0x34]
    // add r2, r0, r1
    // ldr r1, _021F4170 ; =0x00004094
    // ldrb r1, [r2, r1]
    // lsl r1, r1, #2
    // str r1, [sp]
    // add r1, r0, r1
    // mov r0, #0xbf
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // bl ManagedSprite_GetDrawPriority
    // add r2, r0, #0
    // add r1, r6, #0
    // ldr r0, [r5, #0x34]
    // add r1, #0x3d
    // add r2, r2, #1
    // bl ov14_021F2A74
    // ldr r1, [r5, #0x34]
    // ldr r0, [sp]
    // add r1, r1, r0
    // mov r0, #0xbf
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // bl ManagedSprite_GetPriority
    // add r1, r0, #0
    // ldr r0, [r5, #0x34]
    // add r2, r0, r4
    // mov r0, #0x3f
    // lsl r0, r0, #4
    // ldr r0, [r2, r0]
    // bl ManagedSprite_SetPriority
    // add r6, r6, #1
    // add r4, r4, #4
    // cmp r6, #8
    // blo _021F40FC
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021F4170: .word 0x00004094
    // TODO: decompile
}




void ov14_021F4174(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r1, r0, #0
    // add r1, #0x21
    // ldrb r1, [r1]
    // cmp r1, #0xff
    // beq _021F41D4
    // ldr r4, [r0, #0x34]
    // ldr r0, _021F41D8 ; =0x00004094
    // add r1, r4, r1
    // ldrb r0, [r1, r0]
    // add r2, sp, #0
    // lsl r0, r0, #2
    // add r1, r4, r0
    // mov r0, #0xbf
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // add r1, sp, #0
    // add r1, #2
    // bl ManagedSprite_GetPositionXY
    // ldr r7, _021F41DC ; =ov14_021F8070
    // mov r5, #0
    // add r6, sp, #0
    // lsl r0, r5, #2
    // add r1, r4, r0
    // mov r0, #0x3f
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // mov r1, #2
    // ldrsh r2, [r6, r1]
    // ldrsb r1, [r7, r5]
    // ldr r3, _021F41E0 ; =ov14_021F8078
    // add r1, r2, r1
    // mov r2, #0
    // lsl r1, r1, #0x10
    // ldrsh r2, [r6, r2]
    // ldrsb r3, [r3, r5]
    // asr r1, r1, #0x10
    // add r2, r2, r3
    // lsl r2, r2, #0x10
    // asr r2, r2, #0x10
    // bl ManagedSprite_SetPositionXY
    // add r0, r5, #1
    // lsl r0, r0, #0x10
    // lsr r5, r0, #0x10
    // cmp r5, #8
    // blo _021F41A2
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021F41D8: .word 0x00004094
    // _021F41DC: .word ov14_021F8070
    // _021F41E0: .word ov14_021F8078
    // TODO: decompile
}




void ov14_021F41E4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // mov r4, #0
    // add r5, r0, #0
    // add r6, r4, #0
    // mov r7, #1
    // ldr r0, _021F426C ; =0x0000C123
    // str r6, [sp]
    // str r7, [sp, #4]
    // add r0, r4, r0
    // str r0, [sp, #8]
    // mov r0, #0xbd
    // mov r1, #0xbe
    // lsl r0, r0, #2
    // lsl r1, r1, #2
    // ldr r0, [r5, r0]
    // ldr r1, [r5, r1]
    // mov r2, #0x13
    // mov r3, #0x46
    // bl SpriteSystem_LoadCharResObj
    // add r4, r4, #1
    // cmp r4, #6
    // blo _021F41F0
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, _021F4270 ; =0x0000C0FF
    // mov r1, #0xbd
    // lsl r1, r1, #2
    // str r0, [sp, #0xc]
    // ldr r0, [r5, r1]
    // add r1, r1, #4
    // ldr r1, [r5, r1]
    // mov r2, #0x13
    // mov r3, #0x47
    // bl SpriteSystem_LoadPlttResObj
    // mov r0, #1
    // str r0, [sp]
    // ldr r0, _021F4274 ; =0x0000C0FD
    // mov r1, #0xbd
    // lsl r1, r1, #2
    // str r0, [sp, #4]
    // ldr r0, [r5, r1]
    // add r1, r1, #4
    // ldr r1, [r5, r1]
    // mov r2, #0x13
    // mov r3, #0x48
    // bl SpriteSystem_LoadCellResObj
    // mov r0, #1
    // str r0, [sp]
    // ldr r0, _021F4274 ; =0x0000C0FD
    // mov r1, #0xbd
    // lsl r1, r1, #2
    // str r0, [sp, #4]
    // ldr r0, [r5, r1]
    // add r1, r1, #4
    // ldr r1, [r5, r1]
    // mov r2, #0x13
    // mov r3, #0x49
    // bl SpriteSystem_LoadAnimResObj
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // _021F426C: .word 0x0000C123
    // _021F4270: .word 0x0000C0FF
    // _021F4274: .word 0x0000C0FD
    // TODO: decompile
}




void ov14_021F4278(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x6c
    // mov r7, #0
    // ldr r3, _021F42E4 ; =ov14_021F8140
    // str r0, [sp]
    // add r4, r7, #0
    // add r5, r0, #0
    // add r2, sp, #4
    // mov r6, #6
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // sub r6, r6, #1
    // bne _021F428A
    // ldr r0, [r3]
    // str r0, [r2]
    // add r6, sp, #4
    // add r3, sp, #0x38
    // mov r2, #6
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // sub r2, r2, #1
    // bne _021F429C
    // ldr r0, [r6]
    // add r1, sp, #4
    // str r0, [r3]
    // mov r0, #0x34
    // ldrsh r0, [r1, r0]
    // add r1, r0, r4
    // add r0, sp, #4
    // strh r1, [r0, #0x34]
    // ldr r0, _021F42E8 ; =0x0000C123
    // ldr r1, [sp]
    // add r0, r7, r0
    // str r0, [sp, #0x4c]
    // mov r0, #0xbd
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // add r2, r1, #0
    // mov r1, #0xbe
    // lsl r1, r1, #2
    // ldr r1, [r2, r1]
    // add r2, sp, #0x38
    // bl SpriteSystem_NewSprite
    // mov r1, #0xce
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // add r7, r7, #1
    // add r4, #0x22
    // add r5, r5, #4
    // cmp r7, #6
    // blo _021F4296
    // add sp, #0x6c
    // pop {r4, r5, r6, r7, pc}
    // _021F42E4: .word ov14_021F8140
    // _021F42E8: .word 0x0000C123
    // TODO: decompile
}




void ov14_021F42EC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // mov r4, #0
    // add r5, r0, #0
    // add r6, r4, #0
    // mov r7, #1
    // ldr r0, _021F4378 ; =0x0000C129
    // str r6, [sp]
    // str r7, [sp, #4]
    // add r0, r4, r0
    // str r0, [sp, #8]
    // mov r0, #0xbd
    // mov r1, #0xbe
    // lsl r0, r0, #2
    // lsl r1, r1, #2
    // ldr r0, [r5, r0]
    // ldr r1, [r5, r1]
    // mov r2, #0x13
    // mov r3, #0x4a
    // bl SpriteSystem_LoadCharResObj
    // add r4, r4, #1
    // cmp r4, #4
    // blo _021F42F8
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // mov r0, #0xc1
    // mov r1, #0xbd
    // lsl r0, r0, #8
    // lsl r1, r1, #2
    // str r0, [sp, #0xc]
    // ldr r0, [r5, r1]
    // add r1, r1, #4
    // ldr r1, [r5, r1]
    // mov r2, #0x13
    // mov r3, #0x4b
    // bl SpriteSystem_LoadPlttResObj
    // mov r0, #1
    // str r0, [sp]
    // ldr r0, _021F437C ; =0x0000C0FE
    // mov r1, #0xbd
    // lsl r1, r1, #2
    // str r0, [sp, #4]
    // ldr r0, [r5, r1]
    // add r1, r1, #4
    // ldr r1, [r5, r1]
    // mov r2, #0x13
    // mov r3, #0x4c
    // bl SpriteSystem_LoadCellResObj
    // mov r0, #1
    // str r0, [sp]
    // ldr r0, _021F437C ; =0x0000C0FE
    // mov r1, #0xbd
    // lsl r1, r1, #2
    // str r0, [sp, #4]
    // ldr r0, [r5, r1]
    // add r1, r1, #4
    // ldr r1, [r5, r1]
    // mov r2, #0x13
    // mov r3, #0x4d
    // bl SpriteSystem_LoadAnimResObj
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // _021F4378: .word 0x0000C129
    // _021F437C: .word 0x0000C0FE
    // TODO: decompile
}




void ov14_021F4380(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x6c
    // mov r7, #0
    // ldr r3, _021F43EC ; =ov14_021F8174
    // str r0, [sp]
    // add r4, r7, #0
    // add r5, r0, #0
    // add r2, sp, #4
    // mov r6, #6
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // sub r6, r6, #1
    // bne _021F4392
    // ldr r0, [r3]
    // str r0, [r2]
    // add r6, sp, #4
    // add r3, sp, #0x38
    // mov r2, #6
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // sub r2, r2, #1
    // bne _021F43A4
    // ldr r0, [r6]
    // add r1, sp, #4
    // str r0, [r3]
    // mov r0, #0x34
    // ldrsh r0, [r1, r0]
    // add r1, r0, r4
    // add r0, sp, #4
    // strh r1, [r0, #0x34]
    // ldr r0, _021F43F0 ; =0x0000C129
    // ldr r1, [sp]
    // add r0, r7, r0
    // str r0, [sp, #0x4c]
    // mov r0, #0xbd
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // add r2, r1, #0
    // mov r1, #0xbe
    // lsl r1, r1, #2
    // ldr r1, [r2, r1]
    // add r2, sp, #0x38
    // bl SpriteSystem_NewSprite
    // mov r1, #0x35
    // lsl r1, r1, #4
    // str r0, [r5, r1]
    // add r7, r7, #1
    // add r4, #0x2e
    // add r5, r5, #4
    // cmp r7, #4
    // blo _021F439E
    // add sp, #0x6c
    // pop {r4, r5, r6, r7, pc}
    // _021F43EC: .word ov14_021F8174
    // _021F43F0: .word 0x0000C129
    // TODO: decompile
}




void ov14_021F43F4(void) {
}




void ov14_021F4410(void) {
    // ldr r1, _021F4420 ; =0x00000414
    // ldr r3, _021F4424 ; =sub_020136B4
    // ldr r0, [r0, r1]
    // mov r1, #0x2f
    // mvn r1, r1
    // add r2, r1, #0
    // add r2, #0x28
    // bx r3
    // _021F4420: .word 0x00000414
    // _021F4424: .word sub_020136B4
    // TODO: decompile
}




void ov14_021F4428(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // mov r0, #0xc3
    // mov r1, #0xc
    // add r2, r1, #0
    // ldr r4, [r5, #0x34]
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // sub r2, #0x21
    // bl ManagedSprite_SetPositionXY
    // mov r0, #0x31
    // lsl r0, r0, #4
    // mov r2, #0x14
    // ldr r0, [r4, r0]
    // mov r1, #0xf4
    // mvn r2, r2
    // bl ManagedSprite_SetPositionXY
    // mov r0, #0xc5
    // lsl r0, r0, #2
    // mov r1, #0x2b
    // add r2, r1, #0
    // ldr r0, [r4, r0]
    // sub r2, #0x40
    // bl ManagedSprite_SetPositionXY
    // mov r0, #0xc6
    // lsl r0, r0, #2
    // mov r1, #0x80
    // add r2, r1, #0
    // ldr r0, [r4, r0]
    // sub r2, #0xa8
    // bl ManagedSprite_SetPositionXY
    // mov r0, #0xc7
    // lsl r0, r0, #2
    // mov r1, #0x80
    // add r2, r1, #0
    // ldr r0, [r4, r0]
    // sub r2, #0x9c
    // bl ManagedSprite_SetPositionXY
    // add r0, r5, #0
    // bl ov14_021F462C
    // mov r1, #7
    // add r0, r4, #0
    // add r2, r1, #0
    // bl ov14_021F29E4
    // add r0, r4, #0
    // bl ov14_021F4410
    // ldr r0, _021F44AC ; =0x00000414
    // mov r1, #1
    // ldr r0, [r4, r0]
    // bl TextOBJ_SetSpritesDrawFlag
    // ldr r0, _021F44B0 ; =0x00000424
    // mov r1, #0
    // ldr r0, [r4, r0]
    // bl TextOBJ_SetSpritesDrawFlag
    // pop {r3, r4, r5, pc}
    // nop
    // _021F44AC: .word 0x00000414
    // _021F44B0: .word 0x00000424
    // TODO: decompile
}




void ov14_021F44B4(void) {
    // add r4, #0x10
    // add r1, sp, #0
    // ldr r0, [r4, r0]
    // add r1, #2
    // add r2, sp, #0
    ManagedSprite_GetPositionXY((0xbf << 2));
    // add r2, sp, #0
    // ldrsh r1, [r2, r1]
    // ldrsh r2, [r3, r2]
    // ldr r0, [r4, r0]
    // add r2, r2, r6
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXY((0xbf << 2), 2, (0 << 0x10), r2);
    ov14_021F4410(r5);
    // add r7, sp, #0
    // add r1, sp, #0
    // ldr r0, [r5, r0]
    // add r1, #2
    // add r2, sp, #0
    ManagedSprite_GetPositionXY((0x35 << 4));
    // ldrsh r2, [r7, r2]
    // add r2, r2, r6
    // ldrsh r1, [r7, r1]
    // ldr r0, [r5, r0]
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXY((0x35 << 4), 2, (0 << 0x10));
}




void ov14_021F4530(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r1, r5, #0
    // add r1, #0x25
    // ldrb r1, [r1]
    // bl ov14_021E7930
    // add r4, r0, #0
    // ldr r0, [r5, #0x34]
    // ldr r1, _021F4598 ; =0x0000044D
    // ldrb r1, [r0, r1]
    // lsr r2, r1, #2
    // lsr r1, r4, #2
    // cmp r2, r1
    // bne _021F4558
    // mov r1, #6
    // mov r2, #1
    // bl ov14_021F2A18
    // b _021F4560
    // mov r1, #6
    // mov r2, #0
    // bl ov14_021F2A18
    // mov r0, #0xc5
    // ldr r1, [r5, #0x34]
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    // bl ManagedSprite_GetPositionXY
    // mov r0, #0xc5
    // ldr r1, [r5, #0x34]
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // mov r1, #3
    // add r2, r4, #0
    // and r2, r1
    // mov r1, #0x2e
    // mul r1, r2
    // add r1, #0x3b
    // lsl r1, r1, #0x10
    // add r3, sp, #0
    // mov r2, #0
    // ldrsh r2, [r3, r2]
    // asr r1, r1, #0x10
    // bl ManagedSprite_SetPositionXY
    // pop {r3, r4, r5, pc}
    // nop
    // _021F4598: .word 0x0000044D
    // TODO: decompile
}




void ov14_021F459C(void) {
    // push {r4, lr}
    // sub sp, #8
    // add r4, r0, #0
    // ldr r0, [r4, #0x34]
    // ldr r1, _021F4628 ; =0x0000044D
    // ldrb r1, [r0, r1]
    // lsr r3, r1, #0x1f
    // lsl r2, r1, #0x1e
    // sub r2, r2, r3
    // mov r1, #0x1e
    // ror r2, r1
    // add r1, r3, r2
    // lsl r1, r1, #0x10
    // lsr r1, r1, #0x10
    // add r1, #0x15
    // lsl r1, r1, #2
    // add r1, r0, r1
    // mov r0, #0xbf
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // add r2, sp, #0
    // add r1, sp, #0
    // add r2, #2
    // bl ManagedSprite_GetPositionXY
    // mov r0, #0xc6
    // add r2, sp, #0
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // add r1, sp, #4
    // add r2, #2
    // bl ManagedSprite_GetPositionXY
    // mov r0, #0xc6
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // add r3, sp, #0
    // mov r1, #0
    // mov r2, #2
    // ldrsh r1, [r3, r1]
    // ldrsh r2, [r3, r2]
    // bl ManagedSprite_SetPositionXY
    // mov r0, #0xc7
    // add r2, sp, #0
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // add r1, sp, #4
    // add r2, #2
    // bl ManagedSprite_GetPositionXY
    // mov r0, #0xc7
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // add r3, sp, #0
    // mov r1, #0
    // mov r2, #2
    // ldrsh r1, [r3, r1]
    // ldrsh r2, [r3, r2]
    // bl ManagedSprite_SetPositionXY
    // ldr r0, [r4, #0x34]
    // bl ov14_021F4410
    // add sp, #8
    // pop {r4, pc}
    // _021F4628: .word 0x0000044D
    // TODO: decompile
}




void ov14_021F462C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // add r7, r0, #0
    // ldr r1, [r7, #0x34]
    // ldr r0, _021F46AC ; =0x0000044D
    // mov r6, #0x15
    // ldrb r0, [r1, r0]
    // mov r1, #9
    // lsl r1, r1, #6
    // lsr r0, r0, #2
    // lsl r5, r0, #2
    // mov r0, #0xa
    // bl Heap_AllocAtEnd
    // add r4, r0, #0
    // mov r0, #0x13
    // mov r1, #0x4a
    // mov r2, #0xa
    // bl AllocAtEndAndReadWholeNarcMemberByIdPair
    // add r1, sp, #0xc
    // str r0, [sp, #8]
    // bl NNS_G2dGetUnpackedCharacterData
    // mov r0, #0
    // str r0, [sp, #4]
    // ldr r0, [sp, #0xc]
    // mov r2, #9
    // ldr r0, [r0, #0x14]
    // add r1, r4, #0
    // lsl r2, r2, #6
    // bl MI_CpuCopy8
    // mov r0, #9
    // lsl r0, r0, #6
    // str r0, [sp]
    // add r0, r7, #0
    // add r1, r4, #0
    // add r2, r5, #0
    // mov r3, #0x1e
    // bl ov14_021F46B0
    // mov r3, #9
    // ldr r0, [r7, #0x34]
    // add r1, r6, #0
    // add r2, r4, #0
    // lsl r3, r3, #6
    // bl ov14_021F2C1C
    // ldr r0, [sp, #4]
    // add r6, r6, #1
    // add r0, r0, #1
    // add r5, r5, #1
    // str r0, [sp, #4]
    // cmp r0, #4
    // blo _021F4660
    // ldr r0, [sp, #8]
    // bl Heap_Free
    // add r0, r4, #0
    // bl Heap_Free
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // _021F46AC: .word 0x0000044D
    // TODO: decompile
}




void ov14_021F46B0(void) {
    // ldr r4, [sp, #0x18]
    // sub r1, #0x10
    PCStorage_IsBonusWallpaperUnlocked(*((u32*)(r0 + 4)), r2);
    // add r7, #0x10
    // add r7, #0x10
    // ldrb r0, [r5, r1]
    // strb r2, [r5, r1]
}




void ov14_021F46F4(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _021F4718 ; =0x00000414
    // mov r1, #0x47
    // mvn r1, r1
    // add r2, r1, #0
    // ldr r0, [r4, r0]
    // add r2, #0x40
    // bl sub_020136B4
    // ldr r0, _021F471C ; =0x00000424
    // mov r1, #0x20
    // add r2, r1, #0
    // ldr r0, [r4, r0]
    // sub r2, #0x28
    // bl sub_020136B4
    // pop {r4, pc}
    // _021F4718: .word 0x00000414
    // _021F471C: .word 0x00000424
    // TODO: decompile
}




void ov14_021F4720(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r0, #0xc3
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // mov r1, #0xc
    // add r2, r1, #0
    // sub r2, #0x21
    // bl ManagedSprite_SetPositionXY
    // mov r0, #0x31
    // mov r2, #0x14
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // mov r1, #0xf4
    // mvn r2, r2
    // bl ManagedSprite_SetPositionXY
    // mov r0, #0xc5
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // mov r1, #0x2b
    // add r2, r1, #0
    // sub r2, #0x40
    // bl ManagedSprite_SetPositionXY
    // mov r0, #0xc6
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // mov r1, #0x80
    // add r2, r1, #0
    // sub r2, #0xa8
    // bl ManagedSprite_SetPositionXY
    // mov r0, #0xc7
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // mov r1, #0x80
    // add r2, r1, #0
    // sub r2, #0x9c
    // bl ManagedSprite_SetPositionXY
    // add r0, r4, #0
    // bl ov14_021F49E0
    // ldr r0, [r4, #0x34]
    // mov r1, #7
    // mov r2, #5
    // bl ov14_021F29E4
    // ldr r0, [r4, #0x34]
    // bl ov14_021F46F4
    // ldr r1, [r4, #0x34]
    // ldr r0, _021F47B0 ; =0x00000414
    // ldr r0, [r1, r0]
    // mov r1, #1
    // bl TextOBJ_SetSpritesDrawFlag
    // ldr r1, [r4, #0x34]
    // ldr r0, _021F47B4 ; =0x00000424
    // ldr r0, [r1, r0]
    // mov r1, #1
    // bl TextOBJ_SetSpritesDrawFlag
    // pop {r4, pc}
    // nop
    // _021F47B0: .word 0x00000414
    // _021F47B4: .word 0x00000424
    // TODO: decompile
}




void ov14_021F47B8(void) {
    // add r2, sp, #0
    // add r1, r0, r4
    // ldr r0, [r1, r0]
    // add r1, sp, #0
    // add r1, #2
    ManagedSprite_GetPositionXY((0xbf << 2));
    // add r2, sp, #0
    // add r1, r0, r4
    // ldr r0, [r1, r0]
    // ldrsh r1, [r2, r1]
    // ldrsh r2, [r3, r2]
    // add r2, r2, r7
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXY((0xbf << 2), 2, (0 << 0x10), r2);
    ov14_021F46F4(*((u32*)(r5 + 0x34)));
    // add r2, sp, #0
    // add r1, r0, r4
    // ldr r0, [r1, r0]
    // add r1, sp, #0
    // add r1, #2
    ManagedSprite_GetPositionXY((0xce << 2));
    // add r2, sp, #0
    // add r1, r0, r4
    // ldr r0, [r1, r0]
    // ldrsh r1, [r2, r1]
    // ldrsh r2, [r3, r2]
    // add r2, r2, r7
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXY((0xce << 2), 2, (0 << 0x10), r2);
}




void ov14_021F4848(void) {
    // add r0, #0x25
    // ldrb r0, [r0]
    _s32_div_f(6);
    _s32_div_f(*((u8*)(r5 + 0x1f)), 6);
    ov14_021F2A18(*((u32*)(r5 + 0x34)), 6, 1);
    ov14_021F2A18(6, 0);
    _s32_div_f(*((u8*)(r5 + 0x1f)), 6);
    // ldr r0, [r1, r0]
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    ManagedSprite_GetPositionXY((0xc5 << 2), *((u32*)(r5 + 0x34)));
    // ldr r0, [r1, r0]
    // mul r1, r4
    // add r1, #0x2b
    // add r3, sp, #0
    // ldrsh r2, [r3, r2]
    // asr r1, r1, #0x10
    ManagedSprite_SetPositionXY((0xc5 << 2), (0x22 << 0x10), 0);
}




void ov14_021F48B4(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #8
    // add r5, r0, #0
    // add r0, #0x25
    // ldrb r0, [r0]
    // mov r1, #6
    // bl _s32_div_f
    // lsl r0, r1, #0x10
    // lsr r4, r0, #0x10
    // mov r0, #0xc6
    // add r2, sp, #0
    // ldr r1, [r5, #0x34]
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // add r1, sp, #4
    // add r2, #2
    // bl ManagedSprite_GetPositionXY
    // mov r0, #0xc6
    // ldr r1, [r5, #0x34]
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // ldr r1, _021F493C ; =ov14_021F8068
    // add r3, sp, #0
    // mov r2, #2
    // ldrb r1, [r1, r4]
    // ldrsh r2, [r3, r2]
    // bl ManagedSprite_SetPositionXY
    // add r4, #0xf
    // add r2, sp, #0
    // ldr r1, [r5, #0x34]
    // lsl r0, r4, #2
    // add r1, r1, r0
    // mov r0, #0xbf
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // add r1, sp, #0
    // add r2, #2
    // bl ManagedSprite_GetPositionXY
    // mov r0, #0xc7
    // add r2, sp, #0
    // ldr r1, [r5, #0x34]
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // add r1, sp, #4
    // add r2, #2
    // bl ManagedSprite_GetPositionXY
    // mov r0, #0xc7
    // ldr r1, [r5, #0x34]
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // add r3, sp, #0
    // mov r1, #0
    // mov r2, #2
    // ldrsh r1, [r3, r1]
    // ldrsh r2, [r3, r2]
    // bl ManagedSprite_SetPositionXY
    // ldr r0, [r5, #0x34]
    // bl ov14_021F46F4
    // add sp, #8
    // pop {r3, r4, r5, pc}
    // nop
    // _021F493C: .word ov14_021F8068
    // TODO: decompile
}




void ov14_021F4940(void) {
    // lsl r1, r1, #2
    // add r1, r0, r1
    // mov r0, #0xce
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // add r1, r2, #0
    // add r2, r3, #0
    // ldr r3, _021F4954 ; =ManagedSprite_GetPositionXY
    // bx r3
    // nop
    // _021F4954: .word ManagedSprite_GetPositionXY
    // TODO: decompile
}




void ov14_021F4958(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r5, r0, #0
    // add r6, r1, #0
    // mov r0, #0x13
    // mov r1, #0x46
    // mov r2, #0xa
    // bl AllocAtEndAndReadWholeNarcMemberByIdPair
    // add r1, sp, #4
    // add r7, r0, #0
    // bl NNS_G2dGetUnpackedCharacterData
    // ldr r0, [sp, #4]
    // ldr r2, [r5, #0x34]
    // ldr r1, _021F49C4 ; =0x000040C8
    // lsl r4, r6, #0xa
    // add r1, r2, r1
    // mov r2, #1
    // ldr r0, [r0, #0x14]
    // add r1, r1, r4
    // lsl r2, r2, #0xa
    // bl MI_CpuCopy8
    // add r0, r7, #0
    // bl Heap_Free
    // add r0, r5, #0
    // add r1, r6, #0
    // bl ov14_021E7930
    // add r2, r0, #0
    // mov r0, #1
    // lsl r0, r0, #0xa
    // str r0, [sp]
    // ldr r3, [r5, #0x34]
    // ldr r1, _021F49C4 ; =0x000040C8
    // add r0, r5, #0
    // add r1, r3, r1
    // add r1, r1, r4
    // mov r3, #8
    // bl ov14_021F46B0
    // ldr r3, [r5, #0x34]
    // ldr r2, _021F49C4 ; =0x000040C8
    // add r0, r5, #0
    // add r2, r3, r2
    // add r1, r6, #0
    // add r2, r2, r4
    // bl ov14_021F4A64
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021F49C4: .word 0x000040C8
    // TODO: decompile
}




void ov14_021F49C8(void) {
}




void ov14_021F49E0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r7, r0, #0
    // add r0, #0x25
    // ldrb r0, [r0]
    // mov r1, #6
    // bl _s32_div_f
    // mov r1, #6
    // mul r1, r0
    // mov r4, #0xf
    // mov r6, #0
    // lsl r5, r1, #0xa
    // ldr r0, [r7, #0x34]
    // ldr r2, _021F4A1C ; =0x000040C8
    // mov r3, #1
    // add r2, r0, r2
    // add r1, r4, #0
    // add r2, r2, r5
    // lsl r3, r3, #0xa
    // bl ov14_021F2C1C
    // mov r0, #1
    // lsl r0, r0, #0xa
    // add r6, r6, #1
    // add r4, r4, #1
    // add r5, r5, r0
    // cmp r6, #6
    // blo _021F49F8
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021F4A1C: .word 0x000040C8
    // TODO: decompile
}




void ov14_021F4A20(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // add r0, #0x25
    // ldrb r0, [r0]
    // add r4, r1, #0
    // mov r1, #6
    // bl _s32_div_f
    // add r6, r0, #0
    // add r0, r4, #0
    // mov r1, #6
    // bl _u32_div_f
    // cmp r6, r0
    // bne _021F4A5C
    // add r0, r4, #0
    // mov r1, #6
    // ldr r5, [r5, #0x34]
    // bl _u32_div_f
    // ldr r2, _021F4A60 ; =0x000040C8
    // add r0, r5, #0
    // add r3, r5, r2
    // lsl r2, r4, #0xa
    // add r2, r3, r2
    // mov r3, #1
    // add r1, #0xf
    // lsl r3, r3, #0xa
    // bl ov14_021F2C1C
    // pop {r4, r5, r6, pc}
    // nop
    // _021F4A60: .word 0x000040C8
    // TODO: decompile
}




void ov14_021F4A64(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x2c
    // str r0, [sp]
    // mov r0, #0xb
    // str r0, [sp, #0x10]
    // mov r0, #0
    // str r1, [sp, #4]
    // str r2, [sp, #8]
    // str r0, [sp, #0x20]
    // mov r0, #0xa
    // str r0, [sp, #0x18]
    // mov r0, #0
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x20]
    // mov r1, #6
    // mul r1, r0
    // ldr r0, [sp, #0x10]
    // str r1, [sp, #0x14]
    // add r5, r0, #2
    // ldr r0, [sp]
    // ldr r3, [sp, #0x1c]
    // ldr r2, [sp, #0x14]
    // ldr r0, [r0, #4]
    // ldr r1, [sp, #4]
    // add r2, r3, r2
    // bl PCStorage_GetMonByIndexPair
    // str r0, [sp, #0x28]
    // bl AcquireBoxMonLock
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #0x28]
    // mov r1, #5
    // mov r2, #0
    // bl GetBoxMonData
    // add r4, r0, #0
    // ldr r0, [sp, #0x28]
    // mov r1, #0xac
    // mov r2, #0
    // bl GetBoxMonData
    // cmp r0, #0
    // beq _021F4B4A
    // ldr r0, [sp, #0x28]
    // mov r1, #0x4c
    // mov r2, #0
    // bl GetBoxMonData
    // cmp r0, #0
    // bne _021F4AF0
    // ldr r0, [sp, #0x28]
    // mov r1, #0x70
    // mov r2, #0
    // bl GetBoxMonData
    // lsl r0, r0, #0x10
    // lsr r2, r0, #0x10
    // ldr r0, [sp]
    // mov r3, #0x1b
    // ldr r1, [r0, #0x34]
    // mov r0, #0x45
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // add r1, r4, #0
    // bl GetMonBaseStatEx_HandleAlternateForm
    // lsl r0, r0, #0x10
    // lsr r1, r0, #0x10
    // b _021F4AFC
    // ldr r0, _021F4B88 ; =0x000001EA
    // cmp r4, r0
    // bne _021F4AFA
    // mov r1, #1
    // b _021F4AFC
    // mov r1, #8
    // ldr r0, _021F4B8C ; =ov14_021F8080
    // ldr r4, [sp, #0x10]
    // ldrb r0, [r0, r1]
    // add r0, #0x20
    // lsl r0, r0, #0x10
    // lsr r1, r0, #0x10
    // lsl r0, r1, #8
    // orr r0, r1
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp, #0xc]
    // add r0, r4, #0
    // cmp r0, r5
    // bge _021F4B4A
    // ldr r0, [sp, #0x18]
    // add r1, r0, #0
    // asr r7, r0, #3
    // mov r0, #7
    // add r6, r1, #0
    // and r6, r0
    // asr r2, r4, #3
    // lsl r2, r2, #2
    // lsl r1, r4, #0x1d
    // add r2, r2, r7
    // lsr r1, r1, #0x1a
    // lsl r2, r2, #6
    // add r1, r1, r2
    // add r2, r6, r1
    // ldr r1, [sp, #8]
    // ldr r0, [sp, #0xc]
    // add r1, r1, r2
    // mov r2, #2
    // bl MIi_CpuClear16
    // add r0, r4, #1
    // lsl r0, r0, #0x18
    // lsr r4, r0, #0x18
    // cmp r4, r5
    // blt _021F4B24
    // ldr r0, [sp, #0x28]
    // ldr r1, [sp, #0x24]
    // bl ReleaseBoxMonLock
    // ldr r0, [sp, #0x18]
    // add r0, r0, #2
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x1c]
    // add r0, r0, #1
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #0x1c]
    // cmp r0, #6
    // blo _021F4A8A
    // ldr r0, [sp, #0x10]
    // add r0, r0, #2
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x20]
    // add r0, r0, #1
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #0x20]
    // cmp r0, #5
    // bhs _021F4B84
    // b _021F4A76
    // add sp, #0x2c
    // pop {r4, r5, r6, r7, pc}
    // _021F4B88: .word 0x000001EA
    // _021F4B8C: .word ov14_021F8080
    // TODO: decompile
}




void ov14_021F4B90(void) {
    // add r1, r5, r0
    // ldr r0, [r1, r0]
    ManagedSprite_SetPositionXY((0xbf << 2), r2, r3);
    // ldr r2, [sp, #0x10]
    ov14_021F2A18(r5, r4);
    ov14_021F2A60(r5, r4, 0);
}




void ov14_021F4BC0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r5, r0, #0
    // mov r0, #1
    // str r0, [sp]
    // ldr r0, [r5, #0x34]
    // mov r1, #4
    // mov r2, #0xc
    // mov r3, #0x54
    // bl ov14_021F4B90
    // mov r0, #1
    // str r0, [sp]
    // ldr r0, [r5, #0x34]
    // mov r1, #5
    // mov r2, #0xf4
    // mov r3, #0x54
    // bl ov14_021F4B90
    // mov r0, #1
    // str r0, [sp]
    // ldr r0, [r5, #0x34]
    // mov r1, #6
    // mov r2, #0x2b
    // mov r3, #0x54
    // bl ov14_021F4B90
    // mov r0, #1
    // str r0, [sp]
    // ldr r0, [r5, #0x34]
    // mov r1, #7
    // mov r2, #0x80
    // mov r3, #0x41
    // bl ov14_021F4B90
    // mov r0, #1
    // str r0, [sp]
    // ldr r0, [r5, #0x34]
    // mov r1, #8
    // mov r2, #0x80
    // mov r3, #0x4d
    // bl ov14_021F4B90
    // mov r6, #0
    // add r4, r6, #0
    // mov r7, #1
    // ldr r0, [r5, #0x34]
    // add r2, sp, #4
    // add r1, r0, r4
    // mov r0, #0xce
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // add r1, sp, #4
    // add r1, #2
    // bl ManagedSprite_GetPositionXY
    // str r7, [sp]
    // add r1, r6, #0
    // add r3, sp, #4
    // mov r2, #2
    // ldrsh r2, [r3, r2]
    // ldr r0, [r5, #0x34]
    // add r1, #0xf
    // mov r3, #0x54
    // bl ov14_021F4B90
    // add r6, r6, #1
    // add r4, r4, #4
    // cmp r6, #6
    // blo _021F4C1C
    // add r0, r5, #0
    // bl ov14_021F49E0
    // ldr r0, [r5, #0x34]
    // mov r1, #7
    // mov r2, #5
    // bl ov14_021F29E4
    // ldr r0, [r5, #0x34]
    // bl ov14_021F46F4
    // ldr r1, [r5, #0x34]
    // ldr r0, _021F4C98 ; =0x00000414
    // ldr r0, [r1, r0]
    // mov r1, #1
    // bl TextOBJ_SetSpritesDrawFlag
    // ldr r1, [r5, #0x34]
    // ldr r0, _021F4C9C ; =0x00000424
    // ldr r0, [r1, r0]
    // mov r1, #1
    // bl TextOBJ_SetSpritesDrawFlag
    // ldr r1, [r5, #0x34]
    // ldr r0, _021F4C98 ; =0x00000414
    // ldr r0, [r1, r0]
    // mov r1, #0
    // bl sub_020137F0
    // ldr r1, [r5, #0x34]
    // ldr r0, _021F4C9C ; =0x00000424
    // ldr r0, [r1, r0]
    // mov r1, #0
    // bl sub_020137F0
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021F4C98: .word 0x00000414
    // _021F4C9C: .word 0x00000424
    // TODO: decompile
}




void ov14_021F4CA0(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // ldr r0, [r5, #0x34]
    // mov r1, #4
    // mov r2, #0
    // bl ov14_021F2A18
    // ldr r0, [r5, #0x34]
    // mov r1, #5
    // mov r2, #0
    // bl ov14_021F2A18
    // ldr r0, [r5, #0x34]
    // mov r1, #6
    // mov r2, #0
    // bl ov14_021F2A18
    // ldr r0, [r5, #0x34]
    // mov r1, #7
    // mov r2, #0
    // bl ov14_021F2A18
    // ldr r0, [r5, #0x34]
    // mov r1, #8
    // mov r2, #0
    // bl ov14_021F2A18
    // mov r4, #0
    // add r6, r4, #0
    // add r1, r4, #0
    // ldr r0, [r5, #0x34]
    // add r1, #0xf
    // add r2, r6, #0
    // bl ov14_021F2A18
    // add r4, r4, #1
    // cmp r4, #6
    // blo _021F4CDA
    // ldr r1, [r5, #0x34]
    // ldr r0, _021F4D08 ; =0x00000414
    // ldr r0, [r1, r0]
    // mov r1, #0
    // bl TextOBJ_SetSpritesDrawFlag
    // ldr r1, [r5, #0x34]
    // ldr r0, _021F4D0C ; =0x00000424
    // ldr r0, [r1, r0]
    // mov r1, #0
    // bl TextOBJ_SetSpritesDrawFlag
    // pop {r4, r5, r6, pc}
    // nop
    // _021F4D08: .word 0x00000414
    // _021F4D0C: .word 0x00000424
    // TODO: decompile
}




void ov14_021F4D10(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x48
    // add r4, r0, #0
    // mov r0, #2
    // mov r1, #0xa
    // bl FontSystem_NewInit
    // mov r1, #0x41
    // lsl r1, r1, #4
    // str r0, [r4, r1]
    // add r0, r1, #4
    // add r5, r4, r0
    // add r0, sp, #0x38
    // bl InitWindow
    // mov r0, #0
    // str r0, [sp]
    // mov r3, #2
    // str r3, [sp, #4]
    // ldr r0, [r4, #0x14]
    // add r1, sp, #0x38
    // mov r2, #0xc
    // bl AddTextWindowTopLeftCorner
    // add r0, sp, #0x38
    // mov r1, #1
    // mov r2, #0xa
    // bl sub_02013688
    // mov r1, #1
    // add r2, r1, #0
    // add r3, r5, #4
    // bl sub_02021AC8
    // mov r0, #0x41
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // str r0, [sp, #8]
    // add r0, sp, #0x38
    // str r0, [sp, #0xc]
    // mov r0, #0xbe
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl SpriteManager_GetSpriteList
    // str r0, [sp, #0x10]
    // mov r0, #0xbe
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // ldr r1, _021F4E5C ; =0x0000C101
    // bl SpriteManager_FindPlttResourceProxy
    // str r0, [sp, #0x14]
    // mov r0, #0xc6
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #1
    // ldr r0, [r0]
    // str r0, [sp, #0x18]
    // ldr r0, [r5, #8]
    // str r0, [sp, #0x1c]
    // mov r0, #0x80
    // str r0, [sp, #0x20]
    // sub r0, #0x9c
    // str r0, [sp, #0x24]
    // mov r0, #4
    // str r0, [sp, #0x2c]
    // mov r0, #0xa
    // str r0, [sp, #0x34]
    // add r0, sp, #8
    // str r1, [sp, #0x28]
    // str r1, [sp, #0x30]
    // bl sub_020135D8
    // ldr r1, _021F4E60 ; =0x00000414
    // str r0, [r4, r1]
    // ldr r0, [r4, r1]
    // mov r1, #1
    // bl sub_020138B0
    // ldr r0, _021F4E60 ; =0x00000414
    // mov r1, #1
    // ldr r0, [r4, r0]
    // bl sub_020138E0
    // add r0, sp, #0x38
    // bl RemoveWindow
    // ldr r0, _021F4E64 ; =0x00000424
    // add r5, r4, r0
    // add r0, sp, #0x38
    // bl InitWindow
    // mov r0, #0
    // str r0, [sp]
    // mov r3, #2
    // str r3, [sp, #4]
    // ldr r0, [r4, #0x14]
    // add r1, sp, #0x38
    // mov r2, #5
    // bl AddTextWindowTopLeftCorner
    // add r0, sp, #0x38
    // mov r1, #1
    // mov r2, #0xa
    // bl sub_02013688
    // mov r1, #1
    // add r2, r1, #0
    // add r3, r5, #4
    // bl sub_02021AC8
    // mov r0, #0x41
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // str r0, [sp, #8]
    // add r0, sp, #0x38
    // str r0, [sp, #0xc]
    // mov r0, #0xbe
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl SpriteManager_GetSpriteList
    // str r0, [sp, #0x10]
    // mov r0, #0xbe
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // ldr r1, _021F4E5C ; =0x0000C101
    // bl SpriteManager_FindPlttResourceProxy
    // str r0, [sp, #0x14]
    // mov r0, #0xc6
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #1
    // ldr r0, [r0]
    // str r0, [sp, #0x18]
    // ldr r0, [r5, #8]
    // str r0, [sp, #0x1c]
    // mov r0, #0x80
    // str r0, [sp, #0x20]
    // sub r0, #0x9c
    // str r0, [sp, #0x24]
    // mov r0, #4
    // str r0, [sp, #0x2c]
    // mov r0, #0xa
    // str r0, [sp, #0x34]
    // str r1, [sp, #0x28]
    // str r1, [sp, #0x30]
    // add r0, sp, #8
    // bl sub_020135D8
    // str r0, [r5]
    // mov r1, #1
    // bl sub_020138B0
    // ldr r0, [r5]
    // mov r1, #1
    // bl sub_020138E0
    // add r0, sp, #0x38
    // bl RemoveWindow
    // add sp, #0x48
    // pop {r3, r4, r5, pc}
    // nop
    // _021F4E5C: .word 0x0000C101
    // _021F4E60: .word 0x00000414
    // _021F4E64: .word 0x00000424
    // TODO: decompile
}




void ov14_021F4E68(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // ldr r1, _021F4E9C ; =0x00000418
    // str r0, [sp]
    // mov r6, #0
    // add r4, r0, r1
    // add r5, r0, #0
    // sub r7, r1, #4
    // add r0, r4, #0
    // bl sub_02021B5C
    // ldr r0, [r5, r7]
    // bl FontOAM_Delete
    // add r6, r6, #1
    // add r4, #0x10
    // add r5, #0x10
    // cmp r6, #2
    // blo _021F4E76
    // mov r1, #0x41
    // ldr r0, [sp]
    // lsl r1, r1, #4
    // ldr r0, [r0, r1]
    // bl sub_020135AC
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021F4E9C: .word 0x00000418
    // TODO: decompile
}




void ov14_021F4EA0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // add r6, r2, #0
    // add r0, r4, #0
    // mov r1, #0xa
    // bl sub_02013910
    // add r7, r0, #0
    // lsl r0, r6, #4
    // add r1, r5, r0
    // ldr r0, _021F4ECC ; =0x00000414
    // add r2, r4, #0
    // ldr r0, [r1, r0]
    // add r1, r7, #0
    // mov r3, #0xa
    // bl TextOBJ_CopyFromBGWindow
    // add r0, r7, #0
    // bl sub_02013938
    // pop {r3, r4, r5, r6, r7, pc}
    // _021F4ECC: .word 0x00000414
    // TODO: decompile
}




void ov14_021F4ED0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r7, r0, #0
    // mov r0, #4
    // mov r1, #0xa
    // bl FontID_Alloc
    // mov r6, #0
    // ldr r4, _021F4EFC ; =ov14_021F84B4
    // add r5, r6, #0
    // ldr r1, [r7, #0x34]
    // add r2, r4, #0
    // ldr r0, [r1, #0x14]
    // add r1, #0x30
    // add r1, r1, r5
    // bl AddWindow
    // add r6, r6, #1
    // add r4, #8
    // add r5, #0x10
    // cmp r6, #0x2c
    // blo _021F4EE2
    // pop {r3, r4, r5, r6, r7, pc}
    // _021F4EFC: .word ov14_021F84B4
    // TODO: decompile
}




void ov14_021F4F00(void) {
    // add r1, #0x30
    // add r0, r1, r0
    RemoveWindow((0 << 4), *((u32*)(r0 + 0x34)));
    FontID_Release(4);
}




void ov14_021F4F24(void) {
    // ldr r0, [sp, #0x30]
    // str r1, [sp, #0x10]
    // ldr r4, [sp, #0x28]
    FontID_String_GetWidth(r4, 0);
    // sub r5, r5, r0
    FontID_String_GetWidth(r4, 0);
    // sub r5, r5, r0
    FontID_String_GetWidthMultiline(r4, 0);
    // sub r5, r5, r0
    // str r6, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x2c]
    // ldr r2, [sp, #0x10]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r7, r4, r5);
}




void ov14_021F4F84(void) {
    NewString_ReadMsgData(r1, r3);
    // ldr r0, [sp, #0x28]
    // add r5, #0x30
    // str r0, [sp]
    // ldr r0, [sp, #0x2c]
    // ldr r2, [sp, #0x20]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x30]
    // ldr r3, [sp, #0x24]
    // str r0, [sp, #8]
    // add r0, r5, r0
    ov14_021F4F24((r4 << 4), r0);
    String_Delete(r6);
}




void ov14_021F4FBC(void) {
    NewString_ReadMsgData(r1, r3);
    StringExpandPlaceholders(*((u32*)(r5 + 0x24)), *((u32*)(r5 + 0x28)), r0);
    // ldr r0, [sp, #0x28]
    // str r0, [sp]
    // ldr r0, [sp, #0x2c]
    // add r1, #0x30
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x30]
    // ldr r2, [sp, #0x20]
    // str r0, [sp, #8]
    // add r0, r1, r0
    // ldr r3, [sp, #0x24]
    ov14_021F4F24((r4 << 4), *((u32*)(r5 + 0x28)));
    String_Delete(r6);
}




void ov14_021F5000(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x18
    // add r5, r0, #0
    // add r4, r5, #0
    // add r0, r2, #0
    // add r6, r1, #0
    // add r4, #0x30
    // lsl r7, r0, #4
    // add r0, r4, r7
    // mov r1, #0
    // str r2, [sp, #0x14]
    // bl FillWindowPixelBuffer
    // ldrb r0, [r6, #0x12]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x1f
    // bne _021F5044
    // ldr r0, [r5, #0x24]
    // ldr r2, [r6]
    // mov r1, #0
    // bl BufferBoxMonSpeciesName
    // mov r3, #0
    // str r3, [sp]
    // str r3, [sp, #4]
    // ldr r0, _021F5050 ; =0x00010200
    // str r3, [sp, #8]
    // str r0, [sp, #0xc]
    // str r3, [sp, #0x10]
    // ldr r1, [r5, #0x20]
    // ldr r2, [sp, #0x14]
    // add r0, r5, #0
    // bl ov14_021F4FBC
    // add r0, r4, r7
    // bl ScheduleWindowCopyToVram
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021F5050: .word 0x00010200
    // TODO: decompile
}




void ov14_021F5054(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x18
    // add r5, r0, #0
    // add r4, r5, #0
    // add r0, r2, #0
    // add r7, r1, #0
    // add r4, #0x30
    // lsl r6, r0, #4
    // add r0, r4, r6
    // mov r1, #0
    // str r2, [sp, #0x14]
    // bl FillWindowPixelBuffer
    // ldr r0, [r5, #0x24]
    // ldr r2, [r7]
    // mov r1, #0
    // bl BufferBoxMonNickname
    // mov r1, #0
    // str r1, [sp]
    // str r1, [sp, #4]
    // ldr r0, _021F509C ; =0x00010200
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // str r1, [sp, #0x10]
    // ldr r1, [r5, #0x20]
    // ldr r2, [sp, #0x14]
    // add r0, r5, #0
    // mov r3, #1
    // bl ov14_021F4FBC
    // add r0, r4, r6
    // bl ScheduleWindowCopyToVram
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // _021F509C: .word 0x00010200
    // TODO: decompile
}




void ov14_021F50A0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x18
    // add r5, r0, #0
    // add r4, r5, #0
    // add r0, r2, #0
    // add r7, r1, #0
    // add r4, #0x30
    // lsl r6, r0, #4
    // add r0, r4, r6
    // mov r1, #0
    // str r2, [sp, #0x14]
    // bl FillWindowPixelBuffer
    // ldrb r0, [r7, #0x12]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x1f
    // bne _021F5104
    // mov r0, #5
    // str r0, [sp]
    // ldr r0, [r5, #0x1c]
    // mov r1, #1
    // add r2, r4, r6
    // mov r3, #0
    // bl sub_0200CDAC
    // mov r1, #0
    // str r1, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // ldrb r2, [r7, #0x12]
    // ldr r0, [r5, #0x24]
    // mov r3, #3
    // lsl r2, r2, #0x19
    // lsr r2, r2, #0x19
    // bl BufferIntegerAsString
    // mov r0, #0x10
    // str r0, [sp]
    // mov r1, #0
    // str r1, [sp, #4]
    // ldr r0, _021F5110 ; =0x00010200
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // str r1, [sp, #0x10]
    // ldr r1, [r5, #0x20]
    // ldr r2, [sp, #0x14]
    // add r0, r5, #0
    // mov r3, #0x5a
    // bl ov14_021F4FBC
    // add r0, r4, r6
    // bl ScheduleWindowCopyToVram
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021F5110: .word 0x00010200
    // TODO: decompile
}




void ov14_021F5114(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x18
    // add r6, r0, #0
    // add r4, r6, #0
    // add r0, r2, #0
    // add r5, r1, #0
    // add r4, #0x30
    // lsl r7, r0, #4
    // add r0, r4, r7
    // mov r1, #0
    // str r2, [sp, #0x14]
    // bl FillWindowPixelBuffer
    // ldrb r0, [r5, #0x12]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x1f
    // bne _021F5182
    // ldrb r0, [r5, #0x13]
    // lsl r1, r0, #0x18
    // lsr r1, r1, #0x1f
    // cmp r1, #1
    // bne _021F5182
    // lsl r0, r0, #0x19
    // lsr r0, r0, #0x19
    // bne _021F5162
    // mov r1, #0
    // str r1, [sp]
    // str r1, [sp, #4]
    // ldr r0, _021F518C ; =0x00070800
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // str r1, [sp, #0x10]
    // ldr r1, [r6, #0x20]
    // ldr r2, [sp, #0x14]
    // add r0, r6, #0
    // mov r3, #0x52
    // bl ov14_021F4F84
    // b _021F5182
    // cmp r0, #1
    // bne _021F5182
    // mov r1, #0
    // str r1, [sp]
    // str r1, [sp, #4]
    // mov r0, #0xc1
    // str r1, [sp, #8]
    // lsl r0, r0, #0xa
    // str r0, [sp, #0xc]
    // str r1, [sp, #0x10]
    // ldr r1, [r6, #0x20]
    // ldr r2, [sp, #0x14]
    // add r0, r6, #0
    // mov r3, #0x53
    // bl ov14_021F4F84
    // add r0, r4, r7
    // bl ScheduleWindowCopyToVram
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // _021F518C: .word 0x00070800
    // TODO: decompile
}




void ov14_021F5190(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // add r5, r0, #0
    // ldr r0, [r5, #0x34]
    // add r7, r2, #0
    // lsl r4, r7, #4
    // add r0, #0x30
    // add r6, r1, #0
    // add r0, r0, r4
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // ldrb r0, [r6, #0x12]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x1f
    // bne _021F5208
    // ldr r0, [r5]
    // ldr r0, [r0]
    // bl SaveArray_IsNatDexEnabled
    // ldrh r1, [r6, #4]
    // bl Pokedex_ConvertToCurrentDexNo
    // add r6, r0, #0
    // beq _021F5208
    // ldr r2, [r5, #0x34]
    // mov r0, #5
    // str r0, [sp]
    // ldr r0, [r2, #0x1c]
    // add r2, #0x30
    // mov r1, #2
    // add r2, r2, r4
    // mov r3, #0
    // bl sub_0200CDAC
    // mov r0, #2
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // ldr r0, [r5, #0x34]
    // mov r1, #0
    // ldr r0, [r0, #0x24]
    // add r2, r6, #0
    // mov r3, #3
    // bl BufferIntegerAsString
    // ldr r0, [r5, #0x34]
    // mov r1, #0x10
    // str r1, [sp]
    // mov r2, #0
    // str r2, [sp, #4]
    // ldr r1, _021F5218 ; =0x00010200
    // str r2, [sp, #8]
    // str r1, [sp, #0xc]
    // str r2, [sp, #0x10]
    // ldr r1, [r0, #0x20]
    // add r2, r7, #0
    // mov r3, #0x5b
    // bl ov14_021F4FBC
    // ldr r0, [r5, #0x34]
    // add r0, #0x30
    // add r0, r0, r4
    // bl ScheduleWindowCopyToVram
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _021F5218: .word 0x00010200
    // TODO: decompile
}




void ov14_021F521C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x18
    // add r5, r0, #0
    // add r4, r5, #0
    // add r0, r2, #0
    // add r6, r1, #0
    // add r4, #0x30
    // lsl r7, r0, #4
    // add r0, r4, r7
    // mov r1, #0
    // str r2, [sp, #0x14]
    // bl FillWindowPixelBuffer
    // ldrb r0, [r6, #0x12]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x1f
    // bne _021F5264
    // ldrb r2, [r6, #0xf]
    // ldr r0, [r5, #0x24]
    // mov r1, #0
    // bl BufferNatureName
    // mov r1, #0
    // str r1, [sp]
    // str r1, [sp, #4]
    // ldr r0, _021F5288 ; =0x00010200
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // str r1, [sp, #0x10]
    // ldr r1, [r5, #0x20]
    // ldr r2, [sp, #0x14]
    // add r0, r5, #0
    // mov r3, #0x55
    // bl ov14_021F4FBC
    // b _021F527E
    // mov r1, #0
    // str r1, [sp]
    // str r1, [sp, #4]
    // ldr r0, _021F5288 ; =0x00010200
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // str r1, [sp, #0x10]
    // ldr r1, [r5, #0x20]
    // ldr r2, [sp, #0x14]
    // add r0, r5, #0
    // mov r3, #0x5d
    // bl ov14_021F4F84
    // add r0, r4, r7
    // bl ScheduleWindowCopyToVram
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // _021F5288: .word 0x00010200
    // TODO: decompile
}




void ov14_021F528C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x18
    // add r5, r0, #0
    // add r4, r5, #0
    // add r0, r2, #0
    // add r6, r1, #0
    // add r4, #0x30
    // lsl r7, r0, #4
    // add r0, r4, r7
    // mov r1, #0
    // str r2, [sp, #0x14]
    // bl FillWindowPixelBuffer
    // ldrb r0, [r6, #0x12]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x1f
    // bne _021F52D4
    // ldrb r2, [r6, #0xe]
    // ldr r0, [r5, #0x24]
    // mov r1, #0
    // bl BufferAbilityName
    // mov r1, #0
    // str r1, [sp]
    // str r1, [sp, #4]
    // ldr r0, _021F52F8 ; =0x00010200
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // str r1, [sp, #0x10]
    // ldr r1, [r5, #0x20]
    // ldr r2, [sp, #0x14]
    // add r0, r5, #0
    // mov r3, #0x54
    // bl ov14_021F4FBC
    // b _021F52EE
    // mov r1, #0
    // str r1, [sp]
    // str r1, [sp, #4]
    // ldr r0, _021F52F8 ; =0x00010200
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // str r1, [sp, #0x10]
    // ldr r1, [r5, #0x20]
    // ldr r2, [sp, #0x14]
    // add r0, r5, #0
    // mov r3, #0x5d
    // bl ov14_021F4F84
    // add r0, r4, r7
    // bl ScheduleWindowCopyToVram
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // _021F52F8: .word 0x00010200
    // TODO: decompile
}




void ov14_021F52FC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x18
    // add r5, r0, #0
    // add r4, r5, #0
    // add r0, r2, #0
    // add r7, r1, #0
    // add r4, #0x30
    // lsl r6, r0, #4
    // add r0, r4, r6
    // mov r1, #0
    // str r2, [sp, #0x14]
    // bl FillWindowPixelBuffer
    // ldrh r2, [r7, #6]
    // cmp r2, #0
    // beq _021F5340
    // ldr r0, [r5, #0x24]
    // mov r1, #0
    // bl BufferItemName
    // mov r1, #0
    // str r1, [sp]
    // str r1, [sp, #4]
    // ldr r0, _021F5364 ; =0x00010200
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // str r1, [sp, #0x10]
    // ldr r1, [r5, #0x20]
    // ldr r2, [sp, #0x14]
    // add r0, r5, #0
    // mov r3, #0x56
    // bl ov14_021F4FBC
    // b _021F535A
    // mov r1, #0
    // str r1, [sp]
    // str r1, [sp, #4]
    // ldr r0, _021F5364 ; =0x00010200
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // str r1, [sp, #0x10]
    // ldr r1, [r5, #0x20]
    // ldr r2, [sp, #0x14]
    // add r0, r5, #0
    // mov r3, #0x5c
    // bl ov14_021F4F84
    // add r0, r4, r6
    // bl ScheduleWindowCopyToVram
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // _021F5364: .word 0x00010200
    // TODO: decompile
}




void ov14_021F5368(void) {
}




void ov14_021F53C0(void) {
}




void ov14_021F5404(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x40
    // add r6, r0, #0
    // ldr r3, [r6, #0x34]
    // ldr r0, _021F5558 ; =0x0000044E
    // str r1, [sp, #0x1c]
    // ldrb r0, [r3, r0]
    // lsl r0, r0, #0x1c
    // lsr r0, r0, #0x1c
    // bne _021F541E
    // mov r0, #9
    // str r0, [sp, #0x20]
    // b _021F5422
    // mov r0, #0xd
    // str r0, [sp, #0x20]
    // ldr r0, _021F5558 ; =0x0000044E
    // mov r2, #0xf
    // ldrb r4, [r3, r0]
    // add r1, r4, #0
    // bic r1, r2
    // lsl r2, r4, #0x1c
    // lsr r4, r2, #0x1c
    // mov r2, #1
    // eor r4, r2
    // lsl r4, r4, #0x18
    // lsr r5, r4, #0x18
    // mov r4, #0xf
    // and r4, r5
    // orr r1, r4
    // strb r1, [r3, r0]
    // mov r0, #0xa
    // str r0, [sp]
    // mov r0, #0x13
    // mov r1, #6
    // add r3, sp, #0x3c
    // bl GfGfxLoader_GetCharData
    // str r0, [sp, #0x34]
    // ldr r0, [sp, #0x3c]
    // ldr r2, _021F555C ; =0x000002EE
    // ldr r0, [r0, #0x14]
    // mov r1, #0x1b
    // str r0, [sp, #0x30]
    // mov r0, #0
    // mov r3, #0xa
    // bl NewMsgDataFromNarc
    // str r0, [sp, #0x2c]
    // ldr r0, [sp, #0x1c]
    // ldrb r0, [r0, #0x12]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x1f
    // bne _021F553A
    // mov r0, #0
    // str r0, [sp, #0x28]
    // ldr r1, [sp, #0x20]
    // ldr r0, [sp, #0x28]
    // mov r4, #0
    // add r0, r1, r0
    // str r0, [sp, #0x24]
    // lsl r7, r0, #4
    // ldr r0, [sp, #0x30]
    // str r0, [sp, #0x38]
    // add r0, #0x20
    // str r0, [sp, #0x38]
    // mov r0, #8
    // str r0, [sp]
    // lsl r5, r4, #3
    // str r0, [sp, #4]
    // lsl r0, r5, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // mov r0, #8
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // mov r0, #0xff
    // str r0, [sp, #0x18]
    // ldr r0, [r6, #0x34]
    // mov r1, #0x16
    // add r0, #0x30
    // ldr r2, [sp, #0x30]
    // lsl r1, r1, #4
    // add r1, r2, r1
    // mov r2, #0
    // add r0, r0, r7
    // add r3, r2, #0
    // bl BlitBitmapRect
    // mov r0, #8
    // str r0, [sp]
    // str r0, [sp, #4]
    // lsl r0, r5, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp, #8]
    // mov r0, #8
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // mov r0, #0xff
    // str r0, [sp, #0x18]
    // ldr r0, [r6, #0x34]
    // mov r2, #0
    // add r0, #0x30
    // ldr r1, [sp, #0x38]
    // add r0, r0, r7
    // add r3, r2, #0
    // bl BlitBitmapRect
    // add r0, r4, #1
    // lsl r0, r0, #0x10
    // lsr r4, r0, #0x10
    // cmp r4, #0xb
    // blo _021F5486
    // mov r1, #0
    // str r1, [sp]
    // str r1, [sp, #4]
    // ldr r0, _021F5560 ; =0x00010200
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // str r1, [sp, #0x10]
    // ldr r3, [sp, #0x28]
    // ldr r0, [r6, #0x34]
    // lsl r4, r3, #1
    // ldr r3, [sp, #0x1c]
    // ldr r1, [sp, #0x2c]
    // add r3, r3, r4
    // ldrh r3, [r3, #0x14]
    // ldr r2, [sp, #0x24]
    // bl ov14_021F4F84
    // ldr r1, [r6, #0x34]
    // ldr r0, [sp, #0x24]
    // add r1, #0x30
    // lsl r0, r0, #4
    // add r0, r1, r0
    // bl CopyWindowPixelsToVram_TextMode
    // ldr r0, [sp, #0x28]
    // add r0, r0, #1
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp, #0x28]
    // cmp r0, #4
    // blo _021F5472
    // ldr r3, [r6, #0x34]
    // ldr r1, _021F5558 ; =0x0000044E
    // mov r0, #0x70
    // ldrb r2, [r3, r1]
    // bic r2, r0
    // mov r0, #0x10
    // orr r0, r2
    // strb r0, [r3, r1]
    // b _021F5546
    // ldr r3, [r6, #0x34]
    // ldr r1, _021F5558 ; =0x0000044E
    // mov r0, #0x70
    // ldrb r2, [r3, r1]
    // bic r2, r0
    // strb r2, [r3, r1]
    // ldr r0, [sp, #0x2c]
    // bl DestroyMsgData
    // ldr r0, [sp, #0x34]
    // bl Heap_Free
    // ldr r0, [sp, #0x20]
    // add sp, #0x40
    // pop {r3, r4, r5, r6, r7, pc}
    // _021F5558: .word 0x0000044E
    // _021F555C: .word 0x000002EE
    // _021F5560: .word 0x00010200
    // TODO: decompile
}




void ov14_021F5564(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // str r1, [sp, #0xc]
    // add r6, r0, #0
    // ldr r0, [r6, #0x34]
    // ldr r1, _021F5618 ; =0x0000044E
    // ldrb r1, [r0, r1]
    // lsl r1, r1, #0x1c
    // lsr r1, r1, #0x1c
    // bne _021F557C
    // mov r7, #0x14
    // b _021F557E
    // mov r7, #0x16
    // ldr r1, _021F5618 ; =0x0000044E
    // add r5, r0, #0
    // ldrb r2, [r0, r1]
    // mov r1, #0xf
    // add r5, #0x30
    // add r3, r2, #0
    // bic r3, r1
    // lsl r1, r2, #0x1c
    // lsr r2, r1, #0x1c
    // mov r1, #1
    // eor r1, r2
    // lsl r1, r1, #0x18
    // lsr r2, r1, #0x18
    // mov r1, #0xf
    // and r1, r2
    // add r2, r3, #0
    // orr r2, r1
    // ldr r1, _021F5618 ; =0x0000044E
    // lsl r4, r7, #4
    // strb r2, [r0, r1]
    // add r0, r5, r4
    // mov r1, #0xd
    // bl FillWindowPixelBuffer
    // add r0, r5, r4
    // add r0, #0x10
    // mov r1, #0xd
    // bl FillWindowPixelBuffer
    // ldr r0, [sp, #0xc]
    // cmp r0, #0
    // beq _021F5612
    // ldr r0, [r6, #0x34]
    // ldr r1, [sp, #0xc]
    // ldr r0, [r0, #0x28]
    // mov r2, #0xa
    // bl GetItemNameIntoString
    // mov r2, #0
    // ldr r0, _021F561C ; =0x00010200
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r2, [sp, #8]
    // ldr r1, [r6, #0x34]
    // add r0, r5, r4
    // ldr r1, [r1, #0x28]
    // add r3, r2, #0
    // bl ov14_021F4F24
    // add r0, r5, r4
    // bl CopyWindowPixelsToVram_TextMode
    // ldr r0, [r6, #0x34]
    // ldr r1, [sp, #0xc]
    // ldr r0, [r0, #0x28]
    // mov r2, #0xa
    // bl GetItemDescIntoString
    // mov r2, #0
    // ldr r0, _021F561C ; =0x00010200
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r2, [sp, #8]
    // ldr r1, [r6, #0x34]
    // add r0, r5, r4
    // ldr r1, [r1, #0x28]
    // add r0, #0x10
    // add r3, r2, #0
    // bl ov14_021F4F24
    // add r0, r5, r4
    // add r0, #0x10
    // bl CopyWindowPixelsToVram_TextMode
    // add r0, r7, #0
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // _021F5618: .word 0x0000044E
    // _021F561C: .word 0x00010200
    // TODO: decompile
}




void ov14_021F5620(void) {
    // push {r4, r5, lr}
    // sub sp, #0x14
    // add r5, r0, #0
    // bl ov14_021F6628
    // add r4, r0, #0
    // ldr r0, [r5, #0x34]
    // mov r1, #0
    // add r0, #0x60
    // bl FillWindowPixelBuffer
    // mov r1, #0
    // str r1, [sp]
    // mov r0, #8
    // str r0, [sp, #4]
    // ldr r0, _021F5668 ; =0x00010200
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // str r1, [sp, #0x10]
    // ldr r3, [r5]
    // ldr r0, [r5, #0x34]
    // ldr r3, [r3, #8]
    // add r1, r4, #0
    // mov r2, #3
    // add r3, #0x32
    // bl ov14_021F4F84
    // add r0, r4, #0
    // bl DestroyMsgData
    // ldr r0, [r5, #0x34]
    // add r0, #0x60
    // bl CopyWindowToVram
    // add sp, #0x14
    // pop {r4, r5, pc}
    // _021F5668: .word 0x00010200
    // TODO: decompile
}




void ov14_021F566C(void) {
    // push {r3, r4, lr}
    // sub sp, #0x14
    // add r4, r0, #0
    // mov r0, #5
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #6
    // add r0, r1, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // mov r0, #0x15
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // add r0, r1, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // mov r0, #0x16
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // add r0, r1, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // ldr r0, [r4, #0x34]
    // mov r2, #0
    // str r2, [sp]
    // str r2, [sp, #4]
    // ldr r1, _021F5714 ; =0x00010200
    // str r2, [sp, #8]
    // str r1, [sp, #0xc]
    // str r2, [sp, #0x10]
    // ldr r1, [r0, #0x20]
    // mov r2, #0x11
    // mov r3, #0x57
    // bl ov14_021F4F84
    // ldr r0, [r4, #0x34]
    // mov r2, #0
    // str r2, [sp]
    // str r2, [sp, #4]
    // ldr r1, _021F5714 ; =0x00010200
    // str r2, [sp, #8]
    // str r1, [sp, #0xc]
    // str r2, [sp, #0x10]
    // ldr r1, [r0, #0x20]
    // mov r2, #0x12
    // mov r3, #0x58
    // bl ov14_021F4F84
    // ldr r0, [r4, #0x34]
    // mov r2, #0
    // str r2, [sp]
    // str r2, [sp, #4]
    // ldr r1, _021F5714 ; =0x00010200
    // str r2, [sp, #8]
    // str r1, [sp, #0xc]
    // str r2, [sp, #0x10]
    // ldr r1, [r0, #0x20]
    // mov r2, #0x13
    // mov r3, #0x59
    // bl ov14_021F4F84
    // mov r0, #5
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #6
    // add r0, r1, r0
    // bl CopyWindowToVram
    // mov r0, #0x15
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // add r0, r1, r0
    // bl CopyWindowToVram
    // mov r0, #0x16
    // ldr r1, [r4, #0x34]
    // lsl r0, r0, #4
    // add r0, r1, r0
    // bl CopyWindowToVram
    // add sp, #0x14
    // pop {r3, r4, pc}
    // nop
    // _021F5714: .word 0x00010200
    // TODO: decompile
}




void ov14_021F5718(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x18
    // add r6, r0, #0
    // str r1, [sp, #0x14]
    // add r5, r3, #0
    // mov r0, #0xa
    // mov r1, #0x10
    // add r7, r2, #0
    // bl Heap_AllocAtEnd
    // add r4, r0, #0
    // mov r3, #0
    // lsl r0, r5, #0x18
    // str r3, [sp]
    // lsr r0, r0, #0x18
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x30]
    // add r1, r4, #0
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #8]
    // lsl r0, r7, #0x10
    // str r3, [sp, #0xc]
    // lsr r0, r0, #0x10
    // str r0, [sp, #0x10]
    // ldr r0, [r6, #0x34]
    // mov r2, #3
    // ldr r0, [r0, #0x14]
    // bl AddWindowParameterized
    // ldr r2, [sp, #0x30]
    // ldr r0, [sp, #0x14]
    // mul r2, r5
    // ldr r1, [r4, #0xc]
    // lsl r2, r2, #5
    // bl MIi_CpuCopy32
    // mov r0, #0x14
    // mov r1, #0xa
    // bl String_New
    // add r7, r0, #0
    // ldrb r1, [r6, #0x1f]
    // ldr r0, [r6, #4]
    // add r2, r7, #0
    // bl PCStorage_GetBoxName
    // mov r0, #0
    // ldr r3, [sp, #0x30]
    // str r0, [sp]
    // ldr r0, _021F57B4 ; =0x00020100
    // lsl r3, r3, #3
    // str r0, [sp, #4]
    // mov r0, #2
    // lsl r2, r5, #3
    // lsr r3, r3, #1
    // str r0, [sp, #8]
    // add r0, r4, #0
    // add r1, r7, #0
    // lsr r2, r2, #1
    // sub r3, #8
    // bl ov14_021F4F24
    // add r0, r7, #0
    // bl String_Delete
    // add r0, r4, #0
    // bl CopyWindowPixelsToVram_TextMode
    // add r0, r4, #0
    // bl RemoveWindow
    // add r0, r4, #0
    // bl Heap_Free
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021F57B4: .word 0x00020100
    // TODO: decompile
}




void ov14_021F57B8(void) {
    // push {r4, r5, lr}
    // sub sp, #0x1c
    // add r4, r0, #0
    // add r0, sp, #0xc
    // bl InitWindow
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [r4, #0x34]
    // add r1, sp, #0xc
    // ldr r0, [r0, #0x14]
    // mov r2, #0xc
    // mov r3, #2
    // bl AddTextWindowTopLeftCorner
    // mov r0, #0x14
    // mov r1, #0xa
    // bl String_New
    // add r5, r0, #0
    // add r1, r4, #0
    // add r1, #0x25
    // ldrb r1, [r1]
    // ldr r0, [r4, #4]
    // add r2, r5, #0
    // bl PCStorage_GetBoxName
    // mov r3, #0
    // ldr r0, _021F58B4 ; =0x00010200
    // str r3, [sp]
    // str r0, [sp, #4]
    // mov r0, #2
    // str r0, [sp, #8]
    // add r0, sp, #0xc
    // add r1, r5, #0
    // mov r2, #0x30
    // bl ov14_021F4F24
    // add r0, r5, #0
    // bl String_Delete
    // ldr r0, [r4, #0x34]
    // add r1, sp, #0xc
    // mov r2, #0
    // bl ov14_021F4EA0
    // add r0, sp, #0xc
    // bl RemoveWindow
    // add r0, sp, #0xc
    // bl InitWindow
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [r4, #0x34]
    // add r1, sp, #0xc
    // ldr r0, [r0, #0x14]
    // mov r2, #5
    // mov r3, #2
    // bl AddTextWindowTopLeftCorner
    // ldr r0, [r4, #0x34]
    // mov r1, #0x18
    // ldr r0, [r0, #0x20]
    // bl NewString_ReadMsgData
    // add r1, r4, #0
    // add r1, #0x25
    // add r5, r0, #0
    // ldrb r1, [r1]
    // ldr r0, [r4, #4]
    // bl PCStorage_CountMonsAndEggsInBox
    // mov r1, #0
    // add r2, r0, #0
    // str r1, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // ldr r0, [r4, #0x34]
    // mov r3, #2
    // ldr r0, [r0, #0x24]
    // bl BufferIntegerAsString
    // mov r0, #0
    // str r0, [sp]
    // mov r1, #1
    // str r1, [sp, #4]
    // ldr r0, [r4, #0x34]
    // mov r2, #0x1e
    // ldr r0, [r0, #0x24]
    // mov r3, #2
    // bl BufferIntegerAsString
    // ldr r1, [r4, #0x34]
    // add r2, r5, #0
    // ldr r0, [r1, #0x24]
    // ldr r1, [r1, #0x28]
    // bl StringExpandPlaceholders
    // mov r3, #0
    // ldr r0, _021F58B4 ; =0x00010200
    // str r3, [sp]
    // str r0, [sp, #4]
    // mov r0, #2
    // str r0, [sp, #8]
    // ldr r1, [r4, #0x34]
    // add r0, sp, #0xc
    // ldr r1, [r1, #0x28]
    // mov r2, #0x14
    // bl ov14_021F4F24
    // add r0, r5, #0
    // bl String_Delete
    // ldr r0, [r4, #0x34]
    // add r1, sp, #0xc
    // mov r2, #1
    // bl ov14_021F4EA0
    // add r0, sp, #0xc
    // bl RemoveWindow
    // add sp, #0x1c
    // pop {r4, r5, pc}
    // _021F58B4: .word 0x00010200
    // TODO: decompile
}




void ov14_021F58B8(void) {
    // push {r4, r5, lr}
    // sub sp, #0x1c
    // add r5, r0, #0
    // add r0, sp, #0xc
    // bl InitWindow
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [r5, #0x34]
    // add r1, sp, #0xc
    // ldr r0, [r0, #0x14]
    // mov r2, #0xc
    // mov r3, #2
    // bl AddTextWindowTopLeftCorner
    // ldr r2, [r5, #0x34]
    // ldr r0, _021F5948 ; =0x0000044D
    // ldrb r1, [r2, r0]
    // cmp r1, #0x10
    // blo _021F590E
    // ldr r0, [r5, #4]
    // sub r1, #0x10
    // bl PCStorage_IsBonusWallpaperUnlocked
    // cmp r0, #0
    // bne _021F58FC
    // ldr r0, [r5, #0x34]
    // mov r1, #0x3b
    // ldr r0, [r0, #0x20]
    // bl NewString_ReadMsgData
    // add r4, r0, #0
    // b _021F5918
    // ldr r2, [r5, #0x34]
    // ldr r1, _021F5948 ; =0x0000044D
    // ldr r0, [r2, #0x20]
    // ldrb r1, [r2, r1]
    // add r1, #0x23
    // bl NewString_ReadMsgData
    // add r4, r0, #0
    // b _021F5918
    // ldr r0, [r2, #0x20]
    // add r1, #0x23
    // bl NewString_ReadMsgData
    // add r4, r0, #0
    // mov r3, #0
    // ldr r0, _021F594C ; =0x00010200
    // str r3, [sp]
    // str r0, [sp, #4]
    // mov r0, #2
    // str r0, [sp, #8]
    // add r0, sp, #0xc
    // add r1, r4, #0
    // mov r2, #0x30
    // bl ov14_021F4F24
    // add r0, r4, #0
    // bl String_Delete
    // ldr r0, [r5, #0x34]
    // add r1, sp, #0xc
    // mov r2, #0
    // bl ov14_021F4EA0
    // add r0, sp, #0xc
    // bl RemoveWindow
    // add sp, #0x1c
    // pop {r4, r5, pc}
    // _021F5948: .word 0x0000044D
    // _021F594C: .word 0x00010200
    // TODO: decompile
}




void ov14_021F5950(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x70
    // ldr r5, [r0, #0x34]
    // lsl r4, r1, #4
    // add r5, #0x30
    // str r0, [sp, #0x1c]
    // add r0, r5, r4
    // str r2, [sp, #0x20]
    // add r6, r3, #0
    // bl GetWindowBgId
    // add r0, r5, r4
    // bl GetWindowX
    // add r0, r5, r4
    // bl GetWindowY
    // add r0, r5, r4
    // bl GetWindowWidth
    // str r0, [sp, #0x30]
    // add r0, r5, r4
    // bl GetWindowHeight
    // str r0, [sp, #0x3c]
    // cmp r6, #1
    // bne _021F599A
    // add r0, r5, r4
    // mov r1, #0xb
    // bl FillWindowPixelBuffer
    // ldr r0, _021F5BD4 ; =0x000E0F00
    // str r0, [sp, #0x4c]
    // mov r0, #6
    // lsl r0, r0, #6
    // str r0, [sp, #0x40]
    // b _021F59AA
    // add r0, r5, r4
    // mov r1, #4
    // bl FillWindowPixelBuffer
    // ldr r0, _021F5BD4 ; =0x000E0F00
    // str r0, [sp, #0x4c]
    // mov r0, #0
    // str r0, [sp, #0x40]
    // mov r0, #0xa
    // str r0, [sp]
    // mov r0, #0x13
    // mov r1, #0x40
    // mov r2, #1
    // add r3, sp, #0x6c
    // bl GfGfxLoader_GetCharData
    // str r0, [sp, #0x50]
    // ldr r0, [sp, #0x6c]
    // mov r2, #0
    // ldr r6, [r0, #0x14]
    // mov r0, #8
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r2, [sp, #8]
    // str r2, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r1, [sp, #0x40]
    // str r0, [sp, #0x14]
    // mov r0, #0xff
    // str r0, [sp, #0x18]
    // add r0, r5, r4
    // add r1, r6, r1
    // add r3, r2, #0
    // bl BlitBitmapRect
    // ldr r0, [sp, #0x30]
    // mov r2, #0
    // sub r0, r0, #1
    // lsl r7, r0, #3
    // str r0, [sp, #0x2c]
    // mov r0, #8
    // str r0, [sp]
    // lsl r1, r7, #0x10
    // str r0, [sp, #4]
    // lsr r1, r1, #0x10
    // str r1, [sp, #8]
    // str r2, [sp, #0xc]
    // ldr r1, [sp, #0x40]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // mov r0, #0xff
    // add r1, #0x40
    // str r0, [sp, #0x18]
    // add r0, r5, r4
    // add r1, r6, r1
    // add r3, r2, #0
    // bl BlitBitmapRect
    // ldr r0, [sp, #0x3c]
    // mov r3, #0
    // sub r0, r0, #1
    // str r0, [sp, #0x38]
    // lsl r0, r0, #3
    // str r0, [sp, #0x34]
    // mov r0, #8
    // ldr r1, [sp, #0x34]
    // str r0, [sp]
    // str r0, [sp, #4]
    // lsl r1, r1, #0x10
    // str r3, [sp, #8]
    // lsr r1, r1, #0x10
    // str r1, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // mov r2, #0xff
    // str r2, [sp, #0x18]
    // ldr r1, [sp, #0x40]
    // add r2, #0x21
    // add r1, r1, r2
    // add r0, r5, r4
    // add r1, r6, r1
    // add r2, r3, #0
    // bl BlitBitmapRect
    // mov r0, #8
    // str r0, [sp]
    // lsl r1, r7, #0x10
    // str r0, [sp, #4]
    // lsr r1, r1, #0x10
    // str r1, [sp, #8]
    // ldr r1, [sp, #0x34]
    // mov r2, #0xff
    // lsl r1, r1, #0x10
    // lsr r1, r1, #0x10
    // str r1, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // str r2, [sp, #0x18]
    // ldr r1, [sp, #0x40]
    // add r2, #0x61
    // add r1, r1, r2
    // mov r2, #0
    // add r0, r5, r4
    // add r1, r6, r1
    // add r3, r2, #0
    // bl BlitBitmapRect
    // ldr r0, [sp, #0x38]
    // mov r7, #1
    // cmp r0, #1
    // ble _021F5AFE
    // ldr r0, [sp, #0x40]
    // ldr r1, [sp, #0x40]
    // str r0, [sp, #0x54]
    // add r0, #0x60
    // str r0, [sp, #0x54]
    // ldr r0, [sp, #0x30]
    // str r1, [sp, #0x58]
    // sub r0, r0, #1
    // add r1, #0xa0
    // lsl r0, r0, #3
    // str r1, [sp, #0x58]
    // ldr r1, [sp, #0x3c]
    // lsl r0, r0, #0x10
    // sub r1, r1, #1
    // lsr r0, r0, #0x10
    // str r1, [sp, #0x44]
    // str r0, [sp, #0x5c]
    // lsl r0, r7, #3
    // str r0, [sp, #0x28]
    // mov r0, #8
    // str r0, [sp]
    // str r0, [sp, #4]
    // mov r0, #0
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x28]
    // ldr r1, [sp, #0x54]
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp, #0xc]
    // mov r0, #8
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // mov r0, #0xff
    // mov r2, #0
    // str r0, [sp, #0x18]
    // add r0, r5, r4
    // add r1, r6, r1
    // add r3, r2, #0
    // bl BlitBitmapRect
    // mov r0, #8
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x5c]
    // ldr r1, [sp, #0x58]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x28]
    // mov r2, #0
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp, #0xc]
    // mov r0, #8
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // mov r0, #0xff
    // str r0, [sp, #0x18]
    // add r0, r5, r4
    // add r1, r6, r1
    // add r3, r2, #0
    // bl BlitBitmapRect
    // add r0, r7, #1
    // lsl r0, r0, #0x18
    // lsr r7, r0, #0x18
    // ldr r0, [sp, #0x44]
    // cmp r7, r0
    // blt _021F5A9A
    // ldr r0, [sp, #0x2c]
    // mov r7, #1
    // cmp r0, #1
    // ble _021F5B8E
    // ldr r0, [sp, #0x40]
    // mov r2, #5
    // str r0, [sp, #0x60]
    // add r0, #0x20
    // str r0, [sp, #0x60]
    // ldr r0, [sp, #0x3c]
    // ldr r1, [sp, #0x40]
    // lsl r2, r2, #6
    // sub r0, r0, #1
    // add r1, r1, r2
    // lsl r0, r0, #3
    // str r1, [sp, #0x64]
    // ldr r1, [sp, #0x30]
    // lsl r0, r0, #0x10
    // sub r1, r1, #1
    // lsr r0, r0, #0x10
    // str r1, [sp, #0x48]
    // str r0, [sp, #0x68]
    // lsl r0, r7, #3
    // str r0, [sp, #0x24]
    // mov r0, #8
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x24]
    // ldr r1, [sp, #0x60]
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // mov r0, #8
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // mov r0, #0xff
    // mov r2, #0
    // str r0, [sp, #0x18]
    // add r0, r5, r4
    // add r1, r6, r1
    // add r3, r2, #0
    // bl BlitBitmapRect
    // mov r0, #8
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x24]
    // ldr r1, [sp, #0x64]
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x68]
    // mov r2, #0
    // str r0, [sp, #0xc]
    // mov r0, #8
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // mov r0, #0xff
    // str r0, [sp, #0x18]
    // add r0, r5, r4
    // add r1, r6, r1
    // add r3, r2, #0
    // bl BlitBitmapRect
    // add r0, r7, #1
    // lsl r0, r0, #0x18
    // lsr r7, r0, #0x18
    // ldr r0, [sp, #0x48]
    // cmp r7, r0
    // blt _021F5B2A
    // ldr r0, [sp, #0x50]
    // bl Heap_Free
    // ldr r0, [sp, #0x1c]
    // ldr r1, [sp, #0x20]
    // ldr r0, [r0, #0x34]
    // ldr r0, [r0, #0x20]
    // bl NewString_ReadMsgData
    // add r6, r0, #0
    // ldr r2, [sp, #0x30]
    // mov r7, #4
    // lsl r3, r2, #3
    // lsr r2, r3, #0x1f
    // add r2, r3, r2
    // ldr r0, [sp, #0x4c]
    // str r7, [sp]
    // str r0, [sp, #4]
    // mov r0, #2
    // str r0, [sp, #8]
    // add r0, r5, r4
    // add r1, r6, #0
    // asr r2, r2, #1
    // add r3, r7, #0
    // bl ov14_021F4F24
    // add r0, r6, #0
    // bl String_Delete
    // add r0, r5, r4
    // bl CopyWindowPixelsToVram_TextMode
    // add sp, #0x70
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021F5BD4: .word 0x000E0F00
    // TODO: decompile
}




void ov14_021F5BD8(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // add r7, r0, #0
    // ldr r5, [r7, #0x34]
    // lsl r4, r1, #4
    // add r5, #0x30
    // add r0, r5, r4
    // str r2, [sp, #0xc]
    // add r6, r3, #0
    // bl GetWindowBgId
    // add r0, r5, r4
    // bl GetWindowX
    // add r0, r5, r4
    // bl GetWindowY
    // add r0, r5, r4
    // bl GetWindowWidth
    // str r0, [sp, #0x10]
    // add r0, r5, r4
    // bl GetWindowHeight
    // cmp r6, #1
    // bne _021F5C16
    // add r0, r5, r4
    // mov r1, #0xb
    // bl FillWindowPixelBuffer
    // b _021F5C1E
    // add r0, r5, r4
    // mov r1, #4
    // bl FillWindowPixelBuffer
    // ldr r0, [r7, #0x34]
    // ldr r1, [sp, #0xc]
    // ldr r0, [r0, #0x20]
    // ldr r6, _021F5C80 ; =0x000E0F00
    // bl NewString_ReadMsgData
    // add r7, r0, #0
    // add r0, sp, #0x18
    // ldrb r0, [r0, #0x10]
    // add r1, r0, #0
    // add r1, #0xfe
    // lsl r1, r1, #0x18
    // lsr r1, r1, #0x18
    // cmp r1, #1
    // bhi _021F5C5A
    // mov r1, #4
    // str r1, [sp]
    // str r6, [sp, #4]
    // str r0, [sp, #8]
    // ldr r2, [sp, #0x10]
    // add r0, r5, r4
    // lsl r3, r2, #3
    // lsr r2, r3, #0x1f
    // add r2, r3, r2
    // add r1, r7, #0
    // asr r2, r2, #1
    // mov r3, #0
    // bl ov14_021F4F24
    // b _021F5C6E
    // mov r1, #4
    // str r1, [sp]
    // str r6, [sp, #4]
    // mov r2, #0
    // str r0, [sp, #8]
    // add r0, r5, r4
    // add r1, r7, #0
    // add r3, r2, #0
    // bl ov14_021F4F24
    // add r0, r7, #0
    // bl String_Delete
    // add r0, r5, r4
    // bl CopyWindowPixelsToVram_TextMode
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _021F5C80: .word 0x000E0F00
    // TODO: decompile
}




void ov14_021F5C84(void) {
}




void ov14_021F5C94(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x3c
    // ldr r5, [r0, #0x34]
    // lsl r4, r1, #4
    // add r5, #0x30
    // str r0, [sp, #0x1c]
    // add r0, r5, r4
    // str r2, [sp, #0x20]
    // bl GetWindowWidth
    // str r0, [sp, #0x2c]
    // mov r0, #0xa
    // str r0, [sp]
    // mov r0, #0x13
    // mov r1, #0xe
    // mov r2, #1
    // add r3, sp, #0x38
    // bl GfGfxLoader_GetCharData
    // str r0, [sp, #0x34]
    // ldr r0, [sp, #0x38]
    // mov r2, #0
    // ldr r6, [r0, #0x14]
    // mov r1, #0x18
    // str r1, [sp]
    // mov r0, #8
    // str r0, [sp, #4]
    // str r2, [sp, #8]
    // str r2, [sp, #0xc]
    // str r1, [sp, #0x10]
    // mov r1, #0xae
    // str r0, [sp, #0x14]
    // mov r0, #0xff
    // lsl r1, r1, #4
    // str r0, [sp, #0x18]
    // add r0, r5, r4
    // add r1, r6, r1
    // add r3, r2, #0
    // bl BlitBitmapRect
    // mov r1, #0x18
    // mov r2, #0
    // str r1, [sp]
    // mov r0, #8
    // str r0, [sp, #4]
    // str r2, [sp, #8]
    // str r0, [sp, #0xc]
    // str r1, [sp, #0x10]
    // mov r1, #0xb6
    // str r0, [sp, #0x14]
    // mov r0, #0xff
    // lsl r1, r1, #4
    // str r0, [sp, #0x18]
    // add r0, r5, r4
    // add r1, r6, r1
    // add r3, r2, #0
    // bl BlitBitmapRect
    // mov r3, #0x18
    // str r3, [sp]
    // mov r1, #8
    // str r1, [sp, #4]
    // mov r2, #0
    // str r2, [sp, #8]
    // mov r0, #0x10
    // str r0, [sp, #0xc]
    // str r3, [sp, #0x10]
    // str r1, [sp, #0x14]
    // mov r1, #0xb2
    // mov r0, #0xff
    // lsl r1, r1, #4
    // str r0, [sp, #0x18]
    // add r0, r5, r4
    // add r1, r6, r1
    // add r3, r2, #0
    // bl BlitBitmapRect
    // ldr r0, [sp, #0x2c]
    // sub r0, r0, #1
    // str r0, [sp, #0x28]
    // lsl r7, r0, #3
    // mov r0, #8
    // str r0, [sp]
    // lsl r1, r7, #0x10
    // mov r2, #0
    // str r0, [sp, #4]
    // lsr r1, r1, #0x10
    // str r1, [sp, #8]
    // str r2, [sp, #0xc]
    // str r0, [sp, #0x10]
    // mov r1, #0xd6
    // str r0, [sp, #0x14]
    // mov r0, #0xff
    // lsl r1, r1, #4
    // str r0, [sp, #0x18]
    // add r0, r5, r4
    // add r1, r6, r1
    // add r3, r2, #0
    // bl BlitBitmapRect
    // mov r1, #8
    // str r1, [sp]
    // lsl r0, r7, #0x10
    // mov r2, #0
    // str r1, [sp, #4]
    // lsr r0, r0, #0x10
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // str r1, [sp, #0x10]
    // str r1, [sp, #0x14]
    // mov r1, #0xd2
    // mov r0, #0xff
    // lsl r1, r1, #4
    // str r0, [sp, #0x18]
    // add r0, r5, r4
    // add r1, r6, r1
    // add r3, r2, #0
    // bl BlitBitmapRect
    // mov r0, #8
    // str r0, [sp]
    // lsl r1, r7, #0x10
    // mov r2, #0
    // str r0, [sp, #4]
    // lsr r1, r1, #0x10
    // str r1, [sp, #8]
    // mov r1, #0x10
    // str r1, [sp, #0xc]
    // str r0, [sp, #0x10]
    // mov r1, #0x35
    // str r0, [sp, #0x14]
    // mov r0, #0xff
    // lsl r1, r1, #6
    // str r0, [sp, #0x18]
    // add r0, r5, r4
    // add r1, r6, r1
    // add r3, r2, #0
    // bl BlitBitmapRect
    // ldr r0, [sp, #0x28]
    // mov r7, #1
    // cmp r0, #1
    // ble _021F5E4A
    // ldr r0, [sp, #0x2c]
    // sub r0, r0, #1
    // str r0, [sp, #0x30]
    // lsl r0, r7, #3
    // str r0, [sp, #0x24]
    // mov r0, #8
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x24]
    // mov r1, #0xb
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // mov r0, #8
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // mov r0, #0xff
    // lsl r1, r1, #8
    // mov r2, #0
    // str r0, [sp, #0x18]
    // add r0, r5, r4
    // add r1, r6, r1
    // add r3, r2, #0
    // bl BlitBitmapRect
    // mov r0, #8
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x24]
    // mov r1, #0x2e
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp, #8]
    // mov r0, #8
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // mov r0, #0xff
    // lsl r1, r1, #6
    // mov r2, #0
    // str r0, [sp, #0x18]
    // add r0, r5, r4
    // add r1, r6, r1
    // add r3, r2, #0
    // bl BlitBitmapRect
    // mov r0, #8
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x24]
    // mov r1, #0x2d
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp, #8]
    // mov r0, #0x10
    // str r0, [sp, #0xc]
    // mov r0, #8
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // mov r0, #0xff
    // lsl r1, r1, #6
    // mov r2, #0
    // str r0, [sp, #0x18]
    // add r0, r5, r4
    // add r1, r6, r1
    // add r3, r2, #0
    // bl BlitBitmapRect
    // add r0, r7, #1
    // lsl r0, r0, #0x18
    // lsr r7, r0, #0x18
    // ldr r0, [sp, #0x30]
    // cmp r7, r0
    // blt _021F5DB8
    // ldr r0, [sp, #0x34]
    // bl Heap_Free
    // ldr r0, [sp, #0x1c]
    // ldr r1, [sp, #0x20]
    // ldr r0, [r0, #0x34]
    // ldr r0, [r0, #0x20]
    // bl NewString_ReadMsgData
    // add r6, r0, #0
    // ldr r2, [sp, #0x2c]
    // mov r7, #4
    // lsl r3, r2, #3
    // lsr r2, r3, #0x1f
    // add r2, r3, r2
    // ldr r0, _021F5E90 ; =0x00090A00
    // str r7, [sp]
    // str r0, [sp, #4]
    // mov r0, #2
    // str r0, [sp, #8]
    // add r0, r5, r4
    // add r1, r6, #0
    // asr r2, r2, #1
    // add r3, r7, #0
    // bl ov14_021F4F24
    // add r0, r6, #0
    // bl String_Delete
    // add r0, r5, r4
    // bl CopyWindowPixelsToVram_TextMode
    // add sp, #0x3c
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _021F5E90: .word 0x00090A00
    // TODO: decompile
}




void ov14_021F5E94(void) {
    ov14_021F5C94(0x19, 0x40);
    ov14_021F5C94(0x19, 0x3d);
}




void ov14_021F5EB4(void) {
}




void ov14_021F5EC4(void) {
}




void ov14_021F5ED4(void) {
}




void ov14_021F5EE4(void) {
    // str r1, [sp, #0xc]
    // add r2, sp, #0x14
    // ldr r0, [r1, r0]
    // add r2, #2
    // add r3, sp, #0x14
    sub_02019B44((0x2f << 4), 3);
    // str r0, [sp, #0x10]
    // add r7, sp, #0x14
    // ldr r0, [sp, #0x10]
    // sub r0, r0, r4
    // ldr r0, [sp, #0xc]
    // add r2, r0, r1
    // ldrh r2, [r2]
    // sub r1, r1, r4
    ov14_021F5950(r5, 0x21, 0);
    // str r0, [sp]
    // ldrh r0, [r7]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [r1, r0]
    // sub r1, r1, r4
    sub_020199F4((0x2f << 4), 7, 0, 0);
    // ldrh r2, [r2]
    // sub r1, r1, r4
    ov14_021F5C94(r5, 0x21);
    // str r0, [sp]
    // ldrh r0, [r7]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [r1, r0]
    // sub r1, r1, r4
    sub_020199F4((0x2f << 4), 7, 0, 0);
    // sub r0, r7, r6
    // add r0, #0x30
    // add r0, r0, r4
    FillWindowPixelBuffer(*((u32*)(r5 + 0x34)), 0);
    // add r0, #0x30
    // add r0, r0, r4
    CopyWindowPixelsToVram_TextMode(*((u32*)(r5 + 0x34)));
}




void ov14_021F5FBC(void) {
    // add r0, r1, r0
    FillWindowPixelBuffer((2 << 8), 0);
    // add r0, r1, r0
    FillWindowPixelBuffer((0x21 << 4), 0);
    // add r0, r1, r0
    FillWindowPixelBuffer((0x22 << 4), 0);
    // add r0, r1, r0
    FillWindowPixelBuffer((0x23 << 4), 0);
    // add r0, r1, r0
    CopyWindowPixelsToVram_TextMode((2 << 8), *((u32*)(r5 + 0x34)));
    // add r0, r1, r0
    CopyWindowPixelsToVram_TextMode((0x21 << 4), *((u32*)(r5 + 0x34)));
    // add r0, r1, r0
    CopyWindowPixelsToVram_TextMode((0x22 << 4), *((u32*)(r5 + 0x34)));
    // add r0, r1, r0
    CopyWindowPixelsToVram_TextMode((0x23 << 4), *((u32*)(r5 + 0x34)));
    ov14_021F5950(r5, 0x21, 0x51, 0);
    ov14_021F5950(r5, 0x21, 0x50, 0);
}




void ov14_021F604C(void) {
}




void ov14_021F605C(void) {
}




void ov14_021F6070(void) {
}




void ov14_021F6094(void) {
}




void ov14_021F60A8(void) {
}




void ov14_021F60BC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // add r6, r1, #0
    // add r4, r2, #0
    // bl sub_02019B08
    // add r2, sp, #0xc
    // add r7, r0, #0
    // add r0, r5, #0
    // add r1, r6, #0
    // add r2, #2
    // add r3, sp, #0xc
    // bl sub_02019B44
    // add r0, r4, #0
    // bl GetWindowBaseTile
    // add r2, r0, #0
    // ldrb r0, [r4, #9]
    // add r3, sp, #0xc
    // lsl r0, r0, #0x1c
    // lsr r5, r0, #0x10
    // mov r0, #0xfa
    // lsl r0, r0, #2
    // add r1, r5, r0
    // strh r1, [r7]
    // ldrh r4, [r3, #2]
    // add r1, r0, #2
    // add r1, r5, r1
    // sub r4, r4, #1
    // lsl r4, r4, #1
    // strh r1, [r7, r4]
    // ldrh r4, [r3]
    // add r1, r0, #0
    // add r1, #9
    // ldrh r6, [r3, #2]
    // sub r4, r4, #1
    // add r1, r5, r1
    // mul r4, r6
    // lsl r4, r4, #1
    // strh r1, [r7, r4]
    // add r1, r0, #0
    // add r1, #0xb
    // add r6, r5, r1
    // ldrh r4, [r3, #2]
    // ldrh r1, [r3]
    // mul r1, r4
    // sub r1, r1, #1
    // lsl r1, r1, #1
    // strh r6, [r7, r1]
    // ldrh r4, [r3, #2]
    // mov r1, #0
    // sub r4, r4, #2
    // cmp r4, #0
    // ble _021F6164
    // add r4, r0, #1
    // add r0, #0xa
    // add r0, r5, r0
    // add r4, r5, r4
    // lsl r0, r0, #0x10
    // lsl r4, r4, #0x10
    // lsr r0, r0, #0x10
    // lsr r6, r4, #0x10
    // str r0, [sp, #4]
    // lsl r0, r1, #1
    // add r0, r7, r0
    // strh r6, [r0, #2]
    // ldrh r4, [r3]
    // ldrh r0, [r3, #2]
    // sub r4, r4, #1
    // mul r4, r0
    // add r0, r1, r4
    // lsl r0, r0, #1
    // add r4, r7, r0
    // ldr r0, [sp, #4]
    // strh r0, [r4, #2]
    // add r0, r1, #1
    // lsl r0, r0, #0x10
    // lsr r1, r0, #0x10
    // ldrh r0, [r3, #2]
    // sub r0, r0, #2
    // cmp r1, r0
    // blt _021F613E
    // add r6, sp, #0xc
    // ldrh r1, [r6]
    // mov r0, #0
    // sub r1, r1, #2
    // cmp r1, #0
    // ble _021F61AE
    // ldr r1, _021F6204 ; =0x000003EB
    // add r3, r5, r1
    // add r1, r1, #2
    // add r1, r5, r1
    // lsl r3, r3, #0x10
    // lsl r1, r1, #0x10
    // lsr r3, r3, #0x10
    // lsr r1, r1, #0x10
    // str r3, [sp, #8]
    // mov ip, r1
    // ldrh r1, [r6, #2]
    // add r4, r0, #1
    // add r0, r0, #2
    // add r3, r1, #0
    // mul r3, r4
    // ldr r1, [sp, #8]
    // lsl r3, r3, #1
    // strh r1, [r7, r3]
    // ldrh r1, [r6, #2]
    // mul r0, r1
    // lsl r0, r0, #1
    // add r0, r7, r0
    // sub r1, r0, #2
    // mov r0, ip
    // strh r0, [r1]
    // ldrh r1, [r6]
    // lsl r0, r4, #0x10
    // lsr r0, r0, #0x10
    // sub r1, r1, #2
    // cmp r0, r1
    // blt _021F6184
    // mov r0, #0
    // str r0, [sp]
    // cmp r1, #0
    // ble _021F6200
    // add r0, sp, #0xc
    // ldrh r6, [r0, #2]
    // mov r3, #0
    // sub r0, r6, #2
    // cmp r0, #0
    // ble _021F61EA
    // ldr r0, [sp]
    // add r4, r0, #1
    // add r0, r6, #0
    // mul r0, r4
    // add r0, r3, r0
    // lsl r0, r0, #1
    // add r1, r5, r2
    // add r0, r7, r0
    // strh r1, [r0, #2]
    // add r0, r2, #1
    // lsl r0, r0, #0x10
    // lsr r2, r0, #0x10
    // add r0, r3, #1
    // lsl r0, r0, #0x10
    // lsr r3, r0, #0x10
    // add r0, sp, #0xc
    // ldrh r6, [r0, #2]
    // sub r0, r6, #2
    // cmp r3, r0
    // blt _021F61C6
    // ldr r0, [sp]
    // add r0, r0, #1
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // add r0, sp, #0xc
    // ldrh r0, [r0]
    // sub r1, r0, #2
    // ldr r0, [sp]
    // cmp r0, r1
    // blt _021F61B6
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // _021F6204: .word 0x000003EB
    // TODO: decompile
}




void ov14_021F6208(void) {
    GetWindowBgId(r2);
    GetWindowWidth(r6);
    // str r0, [sp, #4]
    GetWindowHeight(r6);
    // str r0, [sp]
    // ldr r3, [sp, #4]
    sub_020195F4(r5, r4, r7);
    sub_02019A60(r5, r4, r6);
}




void ov14_021F6244(void) {
    // ldr r0, [r4, r2]
    // sub r2, #0xf0
    // add r2, r4, r2
    ov14_021F6208(3, (0x2f << 4));
    // ldr r0, [r4, r2]
    // sub r2, #0xe0
    // add r2, r4, r2
    ov14_021F6208(4, (0x2f << 4));
    // ldr r0, [r4, r2]
    // sub r2, #0xd0
    // add r2, r4, r2
    ov14_021F6208(5, (0x2f << 4));
    // ldr r0, [r4, r2]
    // sub r2, #0xc0
    // add r2, r4, r2
    ov14_021F6208(6, (0x2f << 4));
    // ldr r0, [r4, r2]
    // sub r2, #0xb0
    // add r2, r4, r2
    ov14_021F6208(7, (0x2f << 4));
    // ldr r0, [r4, r2]
    // sub r2, #0x30
    // add r2, r4, r2
    ov14_021F60BC(0xc, (0x2f << 4));
    // ldr r0, [r4, r2]
    // sub r2, #0x20
    // add r2, r4, r2
    ov14_021F6208(0xe, (0x2f << 4));
    // ldr r0, [r4, r2]
    // sub r2, #0x10
    // add r2, r4, r2
    ov14_021F6208(0xf, (0x2f << 4));
}




void ov14_021F62CC(void) {
    // add r3, r0, #0
    // mov r0, #0x2f
    // mov r2, #0x1b
    // lsl r0, r0, #4
    // lsl r2, r2, #4
    // ldr r0, [r3, r0]
    // add r2, r3, r2
    // ldr r3, _021F62E0 ; =ov14_021F6208
    // mov r1, #8
    // bx r3
    // _021F62E0: .word ov14_021F6208
    // TODO: decompile
}




void ov14_021F62E4(void) {
    // add r3, r0, #0
    // mov r0, #0x2f
    // mov r2, #7
    // lsl r0, r0, #4
    // lsl r2, r2, #6
    // ldr r0, [r3, r0]
    // add r2, r3, r2
    // ldr r3, _021F62F8 ; =ov14_021F6208
    // mov r1, #9
    // bx r3
    // _021F62F8: .word ov14_021F6208
    // TODO: decompile
}




void ov14_021F62FC(void) {
    // add r3, r0, #0
    // mov r0, #0x2f
    // mov r2, #0x1d
    // lsl r0, r0, #4
    // lsl r2, r2, #4
    // ldr r0, [r3, r0]
    // add r2, r3, r2
    // ldr r3, _021F6310 ; =ov14_021F6208
    // mov r1, #0xa
    // bx r3
    // _021F6310: .word ov14_021F6208
    // TODO: decompile
}




void ov14_021F6314(void) {
    // ldr r0, [r3, r0]
    // add r2, r3, r2
    ov14_021F6208((0x2f << 4), 0xb, (0x1f << 4), *((u32*)(r0 + 0x34)));
    ov14_021F5ED4(r4, 0);
}




void ov14_021F6338(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x18
    // add r7, r0, #0
    // add r6, r1, #0
    // add r5, r7, #0
    // add r5, #0x30
    // lsl r4, r6, #4
    // add r0, r5, r4
    // mov r1, #0xd
    // str r2, [sp, #0x14]
    // bl FillWindowPixelBuffer
    // add r0, r5, r4
    // bl GetWindowWidth
    // lsl r1, r0, #3
    // lsr r0, r1, #0x1f
    // add r0, r1, r0
    // lsl r0, r0, #0x17
    // lsr r0, r0, #0x18
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // mov r0, #4
    // str r0, [sp, #8]
    // ldr r0, _021F6388 ; =0x00090A0D
    // ldr r3, [sp, #0x14]
    // str r0, [sp, #0xc]
    // mov r0, #2
    // str r0, [sp, #0x10]
    // ldr r1, [r7, #0x20]
    // add r0, r7, #0
    // add r2, r6, #0
    // bl ov14_021F4F84
    // add r0, r5, r4
    // bl CopyWindowPixelsToVram_TextMode
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // _021F6388: .word 0x00090A0D
    // TODO: decompile
}




void ov14_021F638C(void) {
}




void ov14_021F63A8(void) {
}




void ov14_021F63B8(void) {
}




void ov14_021F63C8(void) {
    // ldr r0, [r4, r2]
    // sub r2, #0xa0
    // add r2, r4, r2
    sub_02019A60(2, (0x2f << 4));
    // ldr r0, [r4, r2]
    // sub r2, #0x90
    // add r2, r4, r2
    sub_02019A60(2, (0x2f << 4));
}




void ov14_021F63F0(void) {
    // mov r2, #0x2f
    // add r3, r0, #0
    // lsl r2, r2, #4
    // ldr r0, [r3, r2]
    // sub r2, #0x80
    // add r2, r3, r2
    // ldr r3, _021F6404 ; =sub_02019A60
    // mov r1, #1
    // bx r3
    // nop
    // _021F6404: .word sub_02019A60
    // TODO: decompile
}




void ov14_021F6408(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x34
    // str r0, [sp, #0x1c]
    // ldr r4, [r0, #0x34]
    // mov r0, #0x2e
    // lsl r0, r0, #4
    // add r0, r4, r0
    // bl GetWindowWidth
    // str r0, [sp, #0x20]
    // mov r0, #0xa
    // str r0, [sp]
    // mov r0, #0x13
    // mov r1, #0xe
    // mov r2, #1
    // add r3, sp, #0x30
    // bl GfGfxLoader_GetCharData
    // str r0, [sp, #0x28]
    // ldr r0, [sp, #0x30]
    // mov r2, #0
    // ldr r5, [r0, #0x14]
    // mov r1, #0x18
    // str r1, [sp]
    // mov r0, #8
    // str r0, [sp, #4]
    // str r2, [sp, #8]
    // str r2, [sp, #0xc]
    // str r1, [sp, #0x10]
    // str r0, [sp, #0x14]
    // mov r0, #0xff
    // str r0, [sp, #0x18]
    // mov r0, #0x2e
    // mov r1, #0x7a
    // lsl r0, r0, #4
    // lsl r1, r1, #4
    // add r0, r4, r0
    // add r1, r5, r1
    // add r3, r2, #0
    // bl BlitBitmapRect
    // mov r1, #0x18
    // mov r2, #0
    // str r1, [sp]
    // mov r0, #8
    // str r0, [sp, #4]
    // str r2, [sp, #8]
    // str r0, [sp, #0xc]
    // str r1, [sp, #0x10]
    // str r0, [sp, #0x14]
    // mov r0, #0xff
    // str r0, [sp, #0x18]
    // mov r0, #0x2e
    // mov r1, #0xba
    // lsl r0, r0, #4
    // lsl r1, r1, #4
    // add r0, r4, r0
    // add r1, r5, r1
    // add r3, r2, #0
    // bl BlitBitmapRect
    // mov r3, #0x18
    // str r3, [sp]
    // mov r1, #8
    // str r1, [sp, #4]
    // mov r2, #0
    // str r2, [sp, #8]
    // mov r0, #0x10
    // str r0, [sp, #0xc]
    // str r3, [sp, #0x10]
    // str r1, [sp, #0x14]
    // mov r0, #0xff
    // str r0, [sp, #0x18]
    // mov r0, #0x2e
    // mov r1, #0xfa
    // lsl r0, r0, #4
    // lsl r1, r1, #4
    // add r0, r4, r0
    // add r1, r5, r1
    // add r3, r2, #0
    // bl BlitBitmapRect
    // ldr r0, [sp, #0x20]
    // mov r1, #8
    // sub r0, r0, #1
    // str r1, [sp]
    // mov r2, #0
    // lsl r6, r0, #3
    // str r0, [sp, #0x2c]
    // lsl r0, r6, #0x10
    // str r1, [sp, #4]
    // lsr r0, r0, #0x10
    // str r0, [sp, #8]
    // str r2, [sp, #0xc]
    // str r1, [sp, #0x10]
    // str r1, [sp, #0x14]
    // mov r0, #0xff
    // str r0, [sp, #0x18]
    // mov r0, #0x2e
    // mov r1, #0xd
    // lsl r0, r0, #4
    // lsl r1, r1, #8
    // add r0, r4, r0
    // add r1, r5, r1
    // add r3, r2, #0
    // bl BlitBitmapRect
    // mov r1, #8
    // str r1, [sp]
    // lsl r0, r6, #0x10
    // str r1, [sp, #4]
    // lsr r0, r0, #0x10
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // str r1, [sp, #0x10]
    // str r1, [sp, #0x14]
    // mov r0, #0xff
    // str r0, [sp, #0x18]
    // mov r0, #0x2e
    // mov r1, #0xce
    // lsl r0, r0, #4
    // lsl r1, r1, #4
    // mov r2, #0
    // add r0, r4, r0
    // add r1, r5, r1
    // add r3, r2, #0
    // bl BlitBitmapRect
    // mov r1, #8
    // str r1, [sp]
    // lsl r0, r6, #0x10
    // mov r2, #0
    // str r1, [sp, #4]
    // lsr r0, r0, #0x10
    // str r0, [sp, #8]
    // mov r0, #0x10
    // str r0, [sp, #0xc]
    // str r1, [sp, #0x10]
    // str r1, [sp, #0x14]
    // mov r0, #0xff
    // str r0, [sp, #0x18]
    // mov r0, #0x2e
    // mov r1, #0x33
    // lsl r0, r0, #4
    // lsl r1, r1, #6
    // add r0, r4, r0
    // add r1, r5, r1
    // add r3, r2, #0
    // bl BlitBitmapRect
    // ldr r0, [sp, #0x2c]
    // mov r7, #3
    // cmp r0, #3
    // ble _021F65D8
    // ldr r0, [sp, #0x20]
    // sub r0, r0, #1
    // str r0, [sp, #0x24]
    // mov r0, #8
    // str r0, [sp]
    // lsl r6, r7, #3
    // str r0, [sp, #4]
    // lsl r0, r6, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // mov r0, #8
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // mov r0, #0xff
    // str r0, [sp, #0x18]
    // mov r0, #0x2e
    // mov r1, #0xc2
    // lsl r0, r0, #4
    // lsl r1, r1, #4
    // mov r2, #0
    // add r0, r4, r0
    // add r1, r5, r1
    // add r3, r2, #0
    // bl BlitBitmapRect
    // mov r0, #8
    // str r0, [sp]
    // str r0, [sp, #4]
    // lsl r0, r6, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp, #8]
    // mov r0, #8
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // mov r0, #0xff
    // str r0, [sp, #0x18]
    // mov r0, #0x2e
    // mov r1, #0xca
    // lsl r0, r0, #4
    // lsl r1, r1, #4
    // mov r2, #0
    // add r0, r4, r0
    // add r1, r5, r1
    // add r3, r2, #0
    // bl BlitBitmapRect
    // mov r0, #8
    // str r0, [sp]
    // str r0, [sp, #4]
    // lsl r0, r6, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp, #8]
    // mov r0, #0x10
    // str r0, [sp, #0xc]
    // mov r0, #8
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // mov r0, #0xff
    // str r0, [sp, #0x18]
    // mov r0, #0x2e
    // mov r1, #0x32
    // lsl r0, r0, #4
    // lsl r1, r1, #6
    // mov r2, #0
    // add r0, r4, r0
    // add r1, r5, r1
    // add r3, r2, #0
    // bl BlitBitmapRect
    // add r0, r7, #1
    // lsl r0, r0, #0x18
    // lsr r7, r0, #0x18
    // ldr r0, [sp, #0x24]
    // cmp r7, r0
    // blt _021F6542
    // ldr r0, [sp, #0x28]
    // bl Heap_Free
    // ldr r0, [sp, #0x1c]
    // mov r1, #0x41
    // ldr r0, [r0, #0x34]
    // ldr r0, [r0, #0x20]
    // bl NewString_ReadMsgData
    // add r5, r0, #0
    // mov r3, #4
    // ldr r2, [sp, #0x20]
    // ldr r0, _021F6624 ; =0x00090A00
    // str r3, [sp]
    // str r0, [sp, #4]
    // mov r0, #2
    // lsl r6, r2, #3
    // str r0, [sp, #8]
    // mov r0, #0x2e
    // lsr r2, r6, #0x1f
    // lsl r0, r0, #4
    // add r2, r6, r2
    // add r0, r4, r0
    // add r1, r5, #0
    // asr r2, r2, #1
    // bl ov14_021F4F24
    // add r0, r5, #0
    // bl String_Delete
    // mov r0, #0x2e
    // lsl r0, r0, #4
    // add r0, r4, r0
    // bl CopyWindowPixelsToVram_TextMode
    // add sp, #0x34
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _021F6624: .word 0x00090A00
    // TODO: decompile
}




void ov14_021F6628(void) {
}




void ov14_021F6638(void) {
    // push {r4, lr}
    // mov r1, #0xf
    // add r4, r0, #0
    // bl FillWindowPixelBuffer
    // ldr r1, _021F6650 ; =0x0000038E
    // add r0, r4, #0
    // mov r2, #0xa
    // bl sub_0200E948
    // pop {r4, pc}
    // nop
    // _021F6650: .word 0x0000038E
    // TODO: decompile
}




void ov14_021F6654(void) {
    // add r5, #0x30
    // add r0, r5, r4
    ClearFrameAndWindow2(1);
    // add r0, r5, r4
    GetWindowBgId();
    ScheduleBgTilemapBufferTransfer(*((u32*)(r6 + 0x14)), r0);
}




void ov14_021F6678(void) {
    // ldr r3, _021F6684 ; =ClearFrameAndWindow2
    // add r0, #0x30
    // lsl r1, r1, #4
    // add r0, r0, r1
    // mov r1, #1
    // bx r3
    // _021F6684: .word ClearFrameAndWindow2
    // TODO: decompile
}




void ov14_021F6688(void) {
    // ldr r3, _021F6694 ; =ClearFrameAndWindow2
    // add r0, #0x30
    // lsl r1, r1, #4
    // add r0, r0, r1
    // mov r1, #0
    // bx r3
    // _021F6694: .word ClearFrameAndWindow2
    // TODO: decompile
}




void ov14_021F6698(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x18
    // add r5, r0, #0
    // str r1, [sp, #0x14]
    // add r4, r2, #0
    // bl ov14_021F6628
    // add r7, r0, #0
    // ldr r0, [r5, #0x34]
    // lsl r6, r4, #4
    // add r0, #0x30
    // add r0, r0, r6
    // bl ov14_021F6638
    // mov r1, #0
    // str r1, [sp]
    // str r1, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // ldr r0, _021F66E4 ; =0x0001020F
    // ldr r3, [sp, #0x14]
    // str r0, [sp, #0xc]
    // str r1, [sp, #0x10]
    // ldr r0, [r5, #0x34]
    // add r1, r7, #0
    // add r2, r4, #0
    // bl ov14_021F4FBC
    // ldr r0, [r5, #0x34]
    // add r0, #0x30
    // add r0, r0, r6
    // bl ScheduleWindowCopyToVram
    // add r0, r7, #0
    // bl DestroyMsgData
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // _021F66E4: .word 0x0001020F
    // TODO: decompile
}




void ov14_021F66E8(void) {
    ov14_021F6698(0xb, r1, r1);
    ov14_021F6698(0xc, r3);
}




void ov14_021F6704(void) {
}




void ov14_021F6724(void) {
}




void ov14_021F6730(void) {
}




void ov14_021F673C(void) {
}




void ov14_021F675C(void) {
}




void ov14_021F6768(void) {
    BufferItemName(*((u32*)(*((u32*)(r0 + 0x34)) + 0x24)), 0, 0x70, r1);
    ov14_021F6698(r5, 0x37, r4);
    BufferItemName(*((u32*)(r0 + 0x24)), 0, r3);
    ov14_021F6698(r5, 0x10, r4);
}




void ov14_021F67A4(void) {
}




void ov14_021F67B0(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _021F67C6: ; jump table
    // add r2, #0x21
    // ldrb r2, [r2]
    ov14_021E60C0(*((u8*)(r0 + 0x1f)), r0);
    BufferBoxMonNickname(*((u32*)(*((u32*)(r4 + 0x34)) + 0x24)), 0, r0);
    // add r2, #0x21
    // ldrb r2, [r2]
    ov14_021E60C0(*((u8*)(r4 + 0x1f)), r4);
    BufferBoxMonNickname(*((u32*)(*((u32*)(r4 + 0x34)) + 0x24)), 0, r0);
    // add r2, #0x21
    // ldrb r2, [r2]
    ov14_021E60C0(*((u8*)(r4 + 0x1f)), r4);
    BufferBoxMonNickname(*((u32*)(*((u32*)(r4 + 0x34)) + 0x24)), 0, r0);
    ov14_021F6698(r4, 6, r6);
}




void ov14_021F6844(void) {
    // cmp r1, #0
    // beq _021F684E
    // cmp r1, #1
    // beq _021F6852
    // b _021F6854
    // mov r1, #7
    // b _021F6854
    // mov r1, #0xa
    // ldr r3, _021F6858 ; =ov14_021F6698
    // bx r3
    // _021F6858: .word ov14_021F6698
    // TODO: decompile
}




void ov14_021F685C(void) {
    // add r1, r2, r2
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _021F6872: ; jump table
    // add r2, #0x21
    // ldrb r2, [r2]
    ov14_021E60C0(*((u8*)(r0 + 0x1f)), r0);
    BufferBoxMonNickname(*((u32*)(*((u32*)(r5 + 0x34)) + 0x24)), r4, r0);
    ov14_021F6698(r5, 0x1e, r6);
}




void ov14_021F68C0(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // add r6, r2, #0
    // cmp r1, #7
    // bhi _021F6918
    // add r0, r1, r1
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _021F68D6: ; jump table
    // ldr r3, [r5, #0x34]
    // ldr r2, _021F6924 ; =0x000088C8
    // ldr r0, [r3, #0x24]
    // ldrh r2, [r3, r2]
    // mov r1, #0
    // mov r4, #0x1a
    // bl BufferItemName
    // b _021F6918
    // ldr r3, [r5, #0x34]
    // ldr r2, _021F6924 ; =0x000088C8
    // ldr r0, [r3, #0x24]
    // ldrh r2, [r3, r2]
    // mov r1, #0
    // mov r4, #0x1b
    // bl BufferItemName
    // b _021F6918
    // mov r4, #0x18
    // b _021F6918
    // mov r4, #0x22
    // b _021F6918
    // mov r4, #0xe
    // b _021F6918
    // mov r4, #0x3b
    // add r0, r5, #0
    // add r1, r4, #0
    // add r2, r6, #0
    // bl ov14_021F6698
    // pop {r4, r5, r6, pc}
    // _021F6924: .word 0x000088C8
    // TODO: decompile
}




void ov14_021F6928(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // add r6, r1, #0
    // add r4, r2, #0
    // bl ov14_021F6628
    // add r7, r0, #0
    // cmp r4, #0xa
    // bhi _021F6996
    // add r0, r4, r4
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _021F6948: ; jump table
    // mov r4, #0x24
    // b _021F6996
    // mov r4, #0x25
    // b _021F6996
    // mov r4, #0x26
    // b _021F6996
    // mov r4, #0x27
    // b _021F6996
    // mov r4, #0x1c
    // b _021F6996
    // ldr r3, [r5, #0x34]
    // ldr r2, _021F69E8 ; =0x000088C8
    // ldr r0, [r3, #0x24]
    // ldrh r2, [r3, r2]
    // mov r1, #0
    // mov r4, #0x19
    // bl BufferItemName
    // b _021F6996
    // mov r4, #0x38
    // b _021F6996
    // mov r4, #0x39
    // b _021F6996
    // mov r4, #0x3a
    // b _021F6996
    // mov r4, #0x3b
    // b _021F6996
    // mov r4, #0x3c
    // add r0, r7, #0
    // add r1, r4, #0
    // bl NewString_ReadMsgData
    // add r4, r0, #0
    // ldr r1, [r5, #0x34]
    // add r2, r4, #0
    // ldr r0, [r1, #0x24]
    // ldr r1, [r1, #0x28]
    // bl StringExpandPlaceholders
    // add r0, r4, #0
    // bl String_Delete
    // ldr r0, [r5, #0x34]
    // lsl r4, r6, #4
    // add r0, #0x30
    // add r0, r0, r4
    // mov r1, #0xf
    // bl FillWindowPixelBuffer
    // ldr r2, [r5, #0x34]
    // mov r3, #0
    // str r3, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _021F69EC ; =0x0001020F
    // mov r1, #1
    // str r0, [sp, #8]
    // add r0, r2, #0
    // str r3, [sp, #0xc]
    // add r0, #0x30
    // ldr r2, [r2, #0x28]
    // add r0, r0, r4
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r7, #0
    // bl DestroyMsgData
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // _021F69E8: .word 0x000088C8
    // _021F69EC: .word 0x0001020F
    // TODO: decompile
}




void ov14_021F69F0(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, [r5, #0x34]
    // lsl r4, r1, #4
    // add r0, #0x30
    // ldr r1, _021F6A10 ; =0x0000038E
    // add r0, r0, r4
    // mov r2, #0xa
    // bl sub_0200E948
    // ldr r0, [r5, #0x34]
    // add r0, #0x30
    // add r0, r0, r4
    // bl ScheduleWindowCopyToVram
    // pop {r3, r4, r5, pc}
    // _021F6A10: .word 0x0000038E
    // TODO: decompile
}




void ov14_021F6A14(void) {
    // ldr r3, _021F6A1C ; =TouchscreenHitbox_FindRectAtTouchNew
    // ldr r0, _021F6A20 ; =ov14_021F864C
    // bx r3
    // nop
    // _021F6A1C: .word TouchscreenHitbox_FindRectAtTouchNew
    // _021F6A20: .word ov14_021F864C
    // TODO: decompile
}




void ov14_021F6A24(void) {
    // ldr r3, _021F6A2C ; =TouchscreenHitbox_FindRectAtTouchNew
    // ldr r0, _021F6A30 ; =ov14_021F8614
    // bx r3
    // nop
    // _021F6A2C: .word TouchscreenHitbox_FindRectAtTouchNew
    // _021F6A30: .word ov14_021F8614
    // TODO: decompile
}




void ov14_021F6A34(void) {
    // ldr r3, _021F6A3C ; =TouchscreenHitbox_FindRectAtTouchNew
    // ldr r0, _021F6A40 ; =ov14_021F8630
    // bx r3
    // nop
    // _021F6A3C: .word TouchscreenHitbox_FindRectAtTouchNew
    // _021F6A40: .word ov14_021F8630
    // TODO: decompile
}




void ov14_021F6A44(void) {
    // push {r4, r5, lr}
    // sub sp, #0xc
    // add r4, r0, #0
    // ldr r0, [r4]
    // ldr r0, [r0, #8]
    // cmp r0, #3
    // bhi _021F6A74
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _021F6A5E: ; jump table
    // mov r5, #0
    // b _021F6A74
    // mov r5, #2
    // b _021F6A74
    // mov r5, #3
    // b _021F6A74
    // mov r5, #6
    // add r0, r4, #0
    // bl ov14_021F6B10
    // mov r0, #0xc
    // add r2, r5, #0
    // mul r2, r0
    // mov r0, #1
    // str r0, [sp]
    // ldr r0, [r4, #0x2c]
    // ldr r1, _021F6AB4 ; =ov14_021F8B10 + 4
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #4]
    // mov r0, #0xa
    // str r0, [sp, #8]
    // ldr r0, _021F6AB8 ; =ov14_021F8B10
    // ldr r3, _021F6ABC ; =ov14_021F8B10 + 8
    // ldr r0, [r0, r2]
    // ldr r1, [r1, r2]
    // ldr r2, [r3, r2]
    // add r3, r4, #0
    // bl GridInputHandler_Create
    // ldr r1, [r4, #0x34]
    // str r0, [r1, #0x2c]
    // ldr r1, [r4, #0x2c]
    // add r0, r4, #0
    // bl ov14_021F6B28
    // add sp, #0xc
    // pop {r4, r5, pc}
    // nop
    // _021F6AB4: .word ov14_021F8B10 + 4
    // _021F6AB8: .word ov14_021F8B10
    // _021F6ABC: .word ov14_021F8B10 + 8
    // TODO: decompile
}




void ov14_021F6AC0(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0xc
    // add r6, r1, #0
    // add r5, r0, #0
    // add r4, r2, #0
    // bl ov14_021F6B10
    // mov r0, #0xc
    // add r2, r6, #0
    // mul r2, r0
    // mov r0, #1
    // str r0, [sp]
    // lsl r0, r4, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #4]
    // mov r0, #0xa
    // str r0, [sp, #8]
    // ldr r0, _021F6B04 ; =ov14_021F8B10
    // ldr r1, _021F6B08 ; =ov14_021F8B10 + 4
    // ldr r3, _021F6B0C ; =ov14_021F8B10 + 8
    // ldr r0, [r0, r2]
    // ldr r1, [r1, r2]
    // ldr r2, [r3, r2]
    // add r3, r5, #0
    // bl GridInputHandler_Create
    // ldr r1, [r5, #0x34]
    // str r0, [r1, #0x2c]
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov14_021F6B28
    // add sp, #0xc
    // pop {r3, r4, r5, r6, pc}
    // _021F6B04: .word ov14_021F8B10
    // _021F6B08: .word ov14_021F8B10 + 4
    // _021F6B0C: .word ov14_021F8B10 + 8
    // TODO: decompile
}




void ov14_021F6B10(void) {
}




void ov14_021F6B28(void) {
    GridInputHandler_GetDpadBox(*((u32*)(*((u32*)(r0 + 0x34)) + 0x2c)));
    ov14_021F2A18(*((u32*)(r4 + 0x34)), 9, 1);
    // add r1, sp, #0
    // add r1, #1
    // add r2, sp, #0
    DpadMenuBox_GetPosition(r5);
    // add r2, sp, #0
    // ldr r0, [r1, r0]
    // ldrb r2, [r2]
    ManagedSprite_SetPositionXY((0x32 << 4), *((u8*)(r2 + 1)));
}




void ov14_021F6B60(void) {
    GridInputHandler_SetNextInput(*((u32*)(*((u32*)(r0 + 0x34)) + 0x2c)), ((r1 << 0x18) >> 0x18));
    ov14_021F6B28(r5, r4);
}




void ov14_021F6B7C(void) {
    // ldr r3, _021F6B88 ; =ov14_021F2A18
    // ldr r0, [r0, #0x34]
    // mov r1, #9
    // mov r2, #0
    // bx r3
    // nop
    // _021F6B88: .word ov14_021F2A18
    // TODO: decompile
}




void ov14_021F6B8C(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4, #0x34]
    // bl ov14_021F7AC4
    // ldr r0, [r4, #0x34]
    // ldr r1, _021F6BA0 ; =ov14_021E9F20
    // bl ov14_021E5A50
    // pop {r4, pc}
    // _021F6BA0: .word ov14_021E9F20
    // TODO: decompile
}




void ov14_021F6BA4(void) {
    GridInputHandler_SetNextInput(*((u32*)(*((u32*)(r0 + 0x34)) + 0x2c)), ((r1 << 0x18) >> 0x18));
    ov14_021F6B28(r5, r4);
}




void ov14_021F6BC0(void) {
    GridInputHandler_GetNextInput(*((u32*)(*((u32*)(r0 + 0x34)) + 0x2c)));
    GridInputHandler_HandleInput_AllowHold(*((u32*)(*((u32*)(r5 + 0x34)) + 0x2c)));
    // ldr r0, [r1, r0]
    ov14_021E8544((0x2f << 4), *((u32*)(r5 + 0x34)));
    GridInputHandler_SetNextInput(*((u32*)(*((u32*)(r5 + 0x34)) + 0x2c)), r6);
    ov14_021F6B28(r5, r6);
    // mvn r0, r0
    // ldr r0, [r1, r0]
    ov14_021E8544((0x2f << 4));
    // mvn r0, r0
}




void ov14_021F6C3C(void) {
    // mvn r0, r0
    // ldr r0, [r1, r0]
    ov14_021E8544((0x2f << 4), *((u32*)(r0 + 0x34)));
    // add r0, #0x21
    // ldrb r4, [r0]
    // sub r4, #0x1e
    GridInputHandler_SetNextInput(*((u32*)(*((u32*)(r5 + 0x34)) + 0x2c)), ((7 << 0x18) >> 0x18));
    ov14_021F6B28(r5, r4);
}




void ov14_021F6C94(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // sub r0, r4, #6
    // cmp r0, #1
    // bhi _021F6CB4
    // add r0, r5, #0
    // add r0, #0x25
    // ldrb r0, [r0]
    // mov r1, #6
    // bl _s32_div_f
    // add r4, r1, #0
    // ldr r1, [r5, #0x34]
    // ldr r0, _021F6D10 ; =0x0000043C
    // str r4, [r1, r0]
    // ldr r0, [r5, #0x34]
    // lsl r1, r4, #0x18
    // ldr r0, [r0, #0x2c]
    // lsr r1, r1, #0x18
    // bl GridInputHandler_SetNextInput
    // ldr r0, [r5, #0x34]
    // add r1, r4, #0
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_GetDpadBox
    // add r1, sp, #0
    // add r1, #1
    // add r2, sp, #0
    // bl DpadMenuBox_GetPosition
    // mov r0, #0x32
    // ldr r1, [r5, #0x34]
    // lsl r0, r0, #4
    // add r2, sp, #0
    // ldr r0, [r1, r0]
    // ldrb r1, [r2, #1]
    // ldrb r2, [r2]
    // bl ManagedSprite_SetPositionXY
    // ldr r0, [r5, #0x34]
    // mov r1, #9
    // mov r2, #1
    // bl ov14_021F2A18
    // cmp r4, #0
    // blt _021F6D04
    // cmp r4, #5
    // bgt _021F6D04
    // ldr r0, [r5, #0x34]
    // mov r1, #9
    // mov r2, #0xe
    // bl ov14_021F29E4
    // pop {r3, r4, r5, pc}
    // ldr r0, [r5, #0x34]
    // mov r1, #9
    // mov r2, #8
    // bl ov14_021F29E4
    // pop {r3, r4, r5, pc}
    // _021F6D10: .word 0x0000043C
    // TODO: decompile
}




void ov14_021F6D14(void) {
    // push {r4, r5, r6, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // add r6, r2, #0
    // cmp r4, #0
    // blt _021F6D30
    // cmp r4, #5
    // bgt _021F6D30
    // ldr r0, [r5, #0x34]
    // mov r1, #9
    // mov r2, #0xe
    // bl ov14_021F29E4
    // b _021F6D3A
    // ldr r0, [r5, #0x34]
    // mov r1, #9
    // mov r2, #8
    // bl ov14_021F29E4
    // cmp r6, #8
    // bne _021F6D56
    // cmp r4, #0
    // bne _021F6D56
    // ldr r1, [r5, #0x34]
    // ldr r0, _021F6E60 ; =0x0000043C
    // mov r2, #8
    // ldr r4, [r1, r0]
    // ldr r0, [r1, #0x2c]
    // lsl r1, r4, #0x18
    // lsr r1, r1, #0x18
    // add r3, r2, #0
    // bl GridInputHandler_SetNextLastUnk0FInputs
    // cmp r4, #0
    // blt _021F6D64
    // cmp r4, #5
    // bgt _021F6D64
    // ldr r1, [r5, #0x34]
    // ldr r0, _021F6E60 ; =0x0000043C
    // str r4, [r1, r0]
    // cmp r4, #0
    // bne _021F6DC0
    // cmp r6, #5
    // bne _021F6DC0
    // add r0, r5, #0
    // add r0, #0x25
    // ldrb r0, [r0]
    // add r0, r0, #1
    // cmp r0, #0x12
    // blt _021F6D7C
    // mov r1, #0
    // b _021F6D84
    // add r0, r5, #0
    // add r0, #0x25
    // ldrb r0, [r0]
    // add r1, r0, #1
    // add r0, r5, #0
    // add r0, #0x25
    // strb r1, [r0]
    // add r0, r5, #0
    // bl ov14_021F49E0
    // add r0, r5, #0
    // bl ov14_021F48B4
    // add r0, r5, #0
    // bl ov14_021F4848
    // add r0, r5, #0
    // bl ov14_021F57B8
    // ldr r0, [r5, #0x34]
    // mov r1, #5
    // mov r2, #4
    // bl ov14_021F29E4
    // ldr r0, [r5, #0x34]
    // add r1, r4, #0
    // add r2, r6, #0
    // bl ov14_021F7AC4
    // ldr r0, [r5, #0x34]
    // ldr r1, _021F6E64 ; =ov14_021E9F20
    // bl ov14_021E5A50
    // pop {r4, r5, r6, pc}
    // cmp r4, #5
    // bne _021F6E1A
    // cmp r6, #0
    // bne _021F6E1A
    // add r0, r5, #0
    // add r0, #0x25
    // ldrb r0, [r0]
    // sub r0, r0, #1
    // bpl _021F6DD6
    // mov r1, #0x11
    // b _021F6DDE
    // add r0, r5, #0
    // add r0, #0x25
    // ldrb r0, [r0]
    // sub r1, r0, #1
    // add r0, r5, #0
    // add r0, #0x25
    // strb r1, [r0]
    // add r0, r5, #0
    // bl ov14_021F49E0
    // add r0, r5, #0
    // bl ov14_021F48B4
    // add r0, r5, #0
    // bl ov14_021F4848
    // add r0, r5, #0
    // bl ov14_021F57B8
    // ldr r0, [r5, #0x34]
    // mov r1, #4
    // mov r2, #2
    // bl ov14_021F29E4
    // ldr r0, [r5, #0x34]
    // add r1, r4, #0
    // add r2, r6, #0
    // bl ov14_021F7AC4
    // ldr r0, [r5, #0x34]
    // ldr r1, _021F6E64 ; =ov14_021E9F20
    // bl ov14_021E5A50
    // pop {r4, r5, r6, pc}
    // cmp r4, #0
    // blt _021F6E4A
    // cmp r4, #5
    // bgt _021F6E4A
    // cmp r6, #8
    // beq _021F6E4A
    // add r0, r5, #0
    // add r0, #0x25
    // ldrb r0, [r0]
    // mov r1, #6
    // bl _s32_div_f
    // mov r1, #6
    // mul r1, r0
    // add r0, r5, #0
    // add r1, r4, r1
    // add r0, #0x25
    // strb r1, [r0]
    // add r0, r5, #0
    // bl ov14_021F48B4
    // add r0, r5, #0
    // bl ov14_021F57B8
    // ldr r0, [r5, #0x34]
    // add r1, r4, #0
    // add r2, r6, #0
    // bl ov14_021F7AC4
    // ldr r0, [r5, #0x34]
    // ldr r1, _021F6E64 ; =ov14_021E9F20
    // bl ov14_021E5A50
    // pop {r4, r5, r6, pc}
    // nop
    // _021F6E60: .word 0x0000043C
    // _021F6E64: .word ov14_021E9F20
    // TODO: decompile
}




void ov14_021F6E68(void) {
    GridInputHandler_SetNextInput(*((u32*)(*((u32*)(r0 + 0x34)) + 0x2c)), ((r1 << 0x18) >> 0x18));
    ov14_021F6B28(r5, r4);
}




void ov14_021F6E8C(void) {
    GridInputHandler_GetNextInput(*((u32*)(*((u32*)(r0 + 0x34)) + 0x2c)));
    GridInputHandler_HandleInput_AllowHold(*((u32*)(*((u32*)(r5 + 0x34)) + 0x2c)));
    // ldr r0, [r1, r0]
    ov14_021E8544((0x2f << 4), *((u32*)(r5 + 0x34)));
    GridInputHandler_SetNextInput(*((u32*)(*((u32*)(r5 + 0x34)) + 0x2c)), r6);
    ov14_021F6B28(r5, r6);
    // mvn r0, r0
    // ldr r0, [r1, r0]
    ov14_021E8544((0x2f << 4));
    // mvn r0, r0
}




void ov14_021F6F08(void) {
    // mvn r0, r0
    // ldr r0, [r1, r0]
    ov14_021E8544((0x2f << 4), *((u32*)(r0 + 0x34)));
    // sub r0, #0x1f
    // add r0, #0x21
    // ldrb r4, [r0]
    GridInputHandler_SetNextInput(*((u32*)(*((u32*)(r5 + 0x34)) + 0x2c)), ((0x22 << 0x18) >> 0x18));
    ov14_021F6B28(r5, r4);
}




void ov14_021F6F70(void) {
    GridInputHandler_SetNextInput(*((u32*)(*((u32*)(r0 + 0x34)) + 0x2c)), ((r1 << 0x18) >> 0x18));
    ov14_021F6B28(r5, r4);
}




void ov14_021F6F94(void) {
    GridInputHandler_GetNextInput(*((u32*)(*((u32*)(r0 + 0x34)) + 0x2c)));
    GridInputHandler_HandleInput_AllowHold(*((u32*)(*((u32*)(r5 + 0x34)) + 0x2c)));
    // ldr r0, [r1, r0]
    ov14_021E8544((0x2f << 4), *((u32*)(r5 + 0x34)));
    GridInputHandler_SetNextInput(*((u32*)(*((u32*)(r5 + 0x34)) + 0x2c)), r6);
    ov14_021F6B28(r5, r6);
    // mvn r0, r0
    // sub r0, #0x21
    GridInputHandler_SetNextInput(*((u32*)(*((u32*)(r5 + 0x34)) + 0x2c)), r6);
    ov14_021F6B28(r5, r6);
    // mvn r0, r0
    // mvn r0, r0
}




void ov14_021F7010(void) {
    // mvn r0, r0
    // ldr r0, [r1, r0]
    ov14_021E8544((0x2f << 4), *((u32*)(r0 + 0x34)));
    // sub r0, #0x1e
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021F7042: ; jump table
    // add r0, #0x21
    // ldrb r4, [r0]
    GridInputHandler_SetNextInput(*((u32*)(*((u32*)(r5 + 0x34)) + 0x2c)), ((0x24 << 0x18) >> 0x18));
    ov14_021F6B28(r5, r4);
}




void ov14_021F708C(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4, #0x34]
    // bl ov14_021F7AC4
    // ldr r0, [r4, #0x34]
    // ldr r1, _021F70A0 ; =ov14_021E9F20
    // bl ov14_021E5A50
    // pop {r4, pc}
    // _021F70A0: .word ov14_021E9F20
    // TODO: decompile
}




void ov14_021F70A4(void) {
    GridInputHandler_SetNextInput(*((u32*)(*((u32*)(r0 + 0x34)) + 0x2c)), ((r1 << 0x18) >> 0x18));
    ov14_021F6B28(r5, r4);
}




void ov14_021F70C0(void) {
    // ldr r0, [r1, r0]
    ov14_021E85E4((0x2f << 4), *((u32*)(r0 + 0x34)));
    GridInputHandler_ClearEnabledFlag(*((u32*)(*((u32*)(r5 + 0x34)) + 0x2c)), 0x2d);
    GridInputHandler_HandleInput_AllowHold(*((u32*)(*((u32*)(r5 + 0x34)) + 0x2c)));
    GridInputHandler_SetAllEnabled(*((u32*)(*((u32*)(r5 + 0x34)) + 0x2c)));
}




void ov14_021F70F4(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // add r0, r4, #0
    // sub r0, #0x2b
    // cmp r0, #1
    // bhi _021F7118
    // add r0, r5, #0
    // add r0, #0x25
    // ldrb r0, [r0]
    // mov r1, #6
    // bl _s32_div_f
    // add r4, r1, #0
    // ldr r1, [r5, #0x34]
    // ldr r0, _021F717C ; =0x0000043C
    // add r4, #0x25
    // str r4, [r1, r0]
    // ldr r0, [r5, #0x34]
    // lsl r1, r4, #0x18
    // ldr r0, [r0, #0x2c]
    // lsr r1, r1, #0x18
    // bl GridInputHandler_SetNextInput
    // ldr r0, [r5, #0x34]
    // add r1, r4, #0
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_GetDpadBox
    // add r1, sp, #0
    // add r1, #1
    // add r2, sp, #0
    // bl DpadMenuBox_GetPosition
    // mov r0, #0x32
    // ldr r1, [r5, #0x34]
    // lsl r0, r0, #4
    // add r2, sp, #0
    // ldr r0, [r1, r0]
    // ldrb r1, [r2, #1]
    // ldrb r2, [r2]
    // bl ManagedSprite_SetPositionXY
    // ldr r0, [r5, #0x34]
    // mov r1, #9
    // mov r2, #1
    // bl ov14_021F2A18
    // ldr r0, [r5, #0x34]
    // ldr r1, _021F7180 ; =0x0000044B
    // ldrb r1, [r0, r1]
    // cmp r1, #0
    // bne _021F7178
    // cmp r4, #0x25
    // blt _021F7170
    // cmp r4, #0x2a
    // bgt _021F7170
    // mov r1, #9
    // mov r2, #0xe
    // bl ov14_021F29E4
    // pop {r3, r4, r5, pc}
    // mov r1, #9
    // mov r2, #8
    // bl ov14_021F29E4
    // pop {r3, r4, r5, pc}
    // nop
    // _021F717C: .word 0x0000043C
    // _021F7180: .word 0x0000044B
    // TODO: decompile
}




void ov14_021F7184(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // ldr r0, [r5, #0x34]
    // ldr r1, _021F72FC ; =0x0000044B
    // add r6, r2, #0
    // ldrb r1, [r0, r1]
    // cmp r1, #0
    // bne _021F71B0
    // cmp r4, #0x25
    // blt _021F71A8
    // cmp r4, #0x2a
    // bgt _021F71A8
    // mov r1, #9
    // mov r2, #0xe
    // bl ov14_021F29E4
    // b _021F71B0
    // mov r1, #9
    // mov r2, #8
    // bl ov14_021F29E4
    // cmp r4, #0x25
    // bne _021F71EE
    // cmp r6, #0
    // blt _021F71BC
    // cmp r6, #5
    // ble _021F71D0
    // cmp r6, #0x18
    // blt _021F71C4
    // cmp r6, #0x1d
    // ble _021F71D0
    // cmp r6, #0x1e
    // blt _021F71CC
    // cmp r6, #0x1f
    // ble _021F71D0
    // cmp r6, #0x24
    // bne _021F71EE
    // ldr r1, [r5, #0x34]
    // ldr r0, _021F7300 ; =0x0000043C
    // ldr r4, [r1, r0]
    // ldr r0, [r1, #0x2c]
    // bl GridInputHandler_GetUnk0F
    // add r3, r0, #0
    // ldr r0, [r5, #0x34]
    // lsl r1, r4, #0x18
    // lsl r2, r6, #0x18
    // ldr r0, [r0, #0x2c]
    // lsr r1, r1, #0x18
    // lsr r2, r2, #0x18
    // bl GridInputHandler_SetNextLastUnk0FInputs
    // cmp r4, #0x25
    // blt _021F71FC
    // cmp r4, #0x2a
    // bgt _021F71FC
    // ldr r1, [r5, #0x34]
    // ldr r0, _021F7300 ; =0x0000043C
    // str r4, [r1, r0]
    // cmp r4, #0x25
    // bne _021F7258
    // cmp r6, #0x2a
    // bne _021F7258
    // add r0, r5, #0
    // add r0, #0x25
    // ldrb r0, [r0]
    // add r0, r0, #1
    // cmp r0, #0x12
    // blt _021F7214
    // mov r1, #0
    // b _021F721C
    // add r0, r5, #0
    // add r0, #0x25
    // ldrb r0, [r0]
    // add r1, r0, #1
    // add r0, r5, #0
    // add r0, #0x25
    // strb r1, [r0]
    // add r0, r5, #0
    // bl ov14_021F49E0
    // add r0, r5, #0
    // bl ov14_021F48B4
    // add r0, r5, #0
    // bl ov14_021F4848
    // add r0, r5, #0
    // bl ov14_021F57B8
    // ldr r0, [r5, #0x34]
    // mov r1, #5
    // mov r2, #4
    // bl ov14_021F29E4
    // ldr r0, [r5, #0x34]
    // add r1, r4, #0
    // add r2, r6, #0
    // bl ov14_021F7AC4
    // ldr r0, [r5, #0x34]
    // ldr r1, _021F7304 ; =ov14_021E9F20
    // bl ov14_021E5A50
    // pop {r4, r5, r6, pc}
    // cmp r4, #0x2a
    // bne _021F72B2
    // cmp r6, #0x25
    // bne _021F72B2
    // add r0, r5, #0
    // add r0, #0x25
    // ldrb r0, [r0]
    // sub r0, r0, #1
    // bpl _021F726E
    // mov r1, #0x11
    // b _021F7276
    // add r0, r5, #0
    // add r0, #0x25
    // ldrb r0, [r0]
    // sub r1, r0, #1
    // add r0, r5, #0
    // add r0, #0x25
    // strb r1, [r0]
    // add r0, r5, #0
    // bl ov14_021F49E0
    // add r0, r5, #0
    // bl ov14_021F48B4
    // add r0, r5, #0
    // bl ov14_021F4848
    // add r0, r5, #0
    // bl ov14_021F57B8
    // ldr r0, [r5, #0x34]
    // mov r1, #4
    // mov r2, #2
    // bl ov14_021F29E4
    // ldr r0, [r5, #0x34]
    // add r1, r4, #0
    // add r2, r6, #0
    // bl ov14_021F7AC4
    // ldr r0, [r5, #0x34]
    // ldr r1, _021F7304 ; =ov14_021E9F20
    // bl ov14_021E5A50
    // pop {r4, r5, r6, pc}
    // cmp r4, #0x25
    // blt _021F72E8
    // cmp r4, #0x2a
    // bgt _021F72E8
    // cmp r6, #0x25
    // blt _021F72E8
    // cmp r6, #0x2a
    // bgt _021F72E8
    // add r0, r5, #0
    // add r0, #0x25
    // ldrb r0, [r0]
    // mov r1, #6
    // bl _s32_div_f
    // mov r1, #6
    // mul r1, r0
    // add r1, r4, r1
    // add r0, r5, #0
    // sub r1, #0x25
    // add r0, #0x25
    // strb r1, [r0]
    // add r0, r5, #0
    // bl ov14_021F48B4
    // add r0, r5, #0
    // bl ov14_021F57B8
    // ldr r0, [r5, #0x34]
    // add r1, r4, #0
    // add r2, r6, #0
    // bl ov14_021F7AC4
    // ldr r0, [r5, #0x34]
    // ldr r1, _021F7304 ; =ov14_021E9F20
    // bl ov14_021E5A50
    // pop {r4, r5, r6, pc}
    // _021F72FC: .word 0x0000044B
    // _021F7300: .word 0x0000043C
    // _021F7304: .word ov14_021E9F20
    // TODO: decompile
}




void ov14_021F7308(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // cmp r4, #0x25
    // blt _021F731C
    // cmp r4, #0x2a
    // bgt _021F731C
    // ldr r1, [r5, #0x34]
    // ldr r0, _021F733C ; =0x0000043C
    // str r4, [r1, r0]
    // cmp r4, #0x2b
    // beq _021F7338
    // cmp r4, #0x2c
    // beq _021F7338
    // ldr r0, [r5, #0x34]
    // lsl r1, r4, #0x18
    // ldr r0, [r0, #0x2c]
    // lsr r1, r1, #0x18
    // bl GridInputHandler_SetNextInput
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov14_021F6B28
    // pop {r3, r4, r5, pc}
    // nop
    // _021F733C: .word 0x0000043C
    // TODO: decompile
}




void ov14_021F7340(void) {
    // ldr r0, [r1, r0]
    ov14_021E85E4((0x2f << 4), *((u32*)(r0 + 0x34)));
    GridInputHandler_ClearEnabledFlag(*((u32*)(*((u32*)(r5 + 0x34)) + 0x2c)), 0x2d);
    GridInputHandler_ClearEnabledFlag(*((u32*)(*((u32*)(r5 + 0x34)) + 0x2c)), 0x2b);
    GridInputHandler_ClearEnabledFlag(*((u32*)(*((u32*)(r5 + 0x34)) + 0x2c)), 0x2c);
    GridInputHandler_HandleInput_AllowHold(*((u32*)(*((u32*)(r5 + 0x34)) + 0x2c)));
    GridInputHandler_SetAllEnabled(*((u32*)(*((u32*)(r5 + 0x34)) + 0x2c)));
}




void ov14_021F7388(void) {
    GridInputHandler_GetNextInput(*((u32*)(*((u32*)(r0 + 0x34)) + 0x2c)));
    GridInputHandler_HandleInput_AllowHold(*((u32*)(*((u32*)(r5 + 0x34)) + 0x2c)));
    // ldr r0, [r1, r0]
    ov14_021E8544((0x2f << 4), *((u32*)(r5 + 0x34)));
    GridInputHandler_SetNextInput(*((u32*)(*((u32*)(r5 + 0x34)) + 0x2c)), r6);
    ov14_021F6B28(r5, r6);
    // mvn r0, r0
    // mvn r0, r0
}




void ov14_021F73E4(void) {
    // mvn r0, r0
    // ldr r0, [r1, r0]
    ov14_021E8544((0x2f << 4), *((u32*)(r0 + 0x34)));
    // add r0, #0x21
    // ldrb r4, [r0]
    // sub r4, #0x1e
    GridInputHandler_SetNextInput(*((u32*)(*((u32*)(r5 + 0x34)) + 0x2c)), ((8 << 0x18) >> 0x18));
    ov14_021F6B28(r5, r4);
}




void ov14_021F7444(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // mov r0, #0x2f
    // ldr r1, [r5, #0x34]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // add r6, r2, #0
    // bl ov14_021E8544
    // cmp r0, #1
    // bne _021F747E
    // cmp r4, #6
    // bgt _021F7492
    // cmp r6, #7
    // blt _021F7492
    // add r0, r5, #0
    // bl ov14_021E76B8
    // ldr r0, [r5, #0x34]
    // add r1, r4, #0
    // add r2, r6, #0
    // bl ov14_021F7AC4
    // ldr r0, [r5, #0x34]
    // ldr r1, _021F74A8 ; =ov14_021EA180
    // bl ov14_021E5A50
    // pop {r4, r5, r6, pc}
    // cmp r4, #0xc
    // bne _021F7492
    // cmp r6, #7
    // bne _021F7492
    // ldr r0, [r5, #0x34]
    // mov r1, #7
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_SetNextInput
    // mov r4, #7
    // ldr r0, [r5, #0x34]
    // add r1, r4, #0
    // add r2, r6, #0
    // bl ov14_021F7AC4
    // ldr r0, [r5, #0x34]
    // ldr r1, _021F74AC ; =ov14_021E9F20
    // bl ov14_021E5A50
    // pop {r4, r5, r6, pc}
    // nop
    // _021F74A8: .word ov14_021EA180
    // _021F74AC: .word ov14_021E9F20
    // TODO: decompile
}




void ov14_021F74B0(void) {
    GridInputHandler_GetNextInput(*((u32*)(*((u32*)(r0 + 0x34)) + 0x2c)));
    GridInputHandler_HandleInput_AllowHold(*((u32*)(*((u32*)(r5 + 0x34)) + 0x2c)));
    // ldr r0, [r1, r0]
    ov14_021E8544((0x2f << 4), *((u32*)(r5 + 0x34)));
    GridInputHandler_SetNextInput(*((u32*)(*((u32*)(r5 + 0x34)) + 0x2c)), r6);
    ov14_021F6B28(r5, r6);
    // mvn r0, r0
    // sub r0, #0x21
    GridInputHandler_SetNextInput(*((u32*)(*((u32*)(r5 + 0x34)) + 0x2c)), r6);
    ov14_021F6B28(r5, r6);
    // mvn r0, r0
    // mvn r0, r0
}




void ov14_021F7528(void) {
    // mvn r0, r0
    // ldr r0, [r1, r0]
    ov14_021E8544((0x2f << 4), *((u32*)(r0 + 0x34)));
    // sub r0, #0x1e
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021F755A: ; jump table
    // add r0, #0x21
    // ldrb r4, [r0]
    GridInputHandler_SetNextInput(*((u32*)(*((u32*)(r5 + 0x34)) + 0x2c)), ((0x24 << 0x18) >> 0x18));
    ov14_021F6B28(r5, r4);
}




void ov14_021F7594(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4, #0x34]
    // bl ov14_021F7AC4
    // ldr r0, [r4, #0x34]
    // ldr r1, _021F75A8 ; =ov14_021E9F20
    // bl ov14_021E5A50
    // pop {r4, pc}
    // _021F75A8: .word ov14_021E9F20
    // TODO: decompile
}




void ov14_021F75AC(void) {
    GridInputHandler_SetNextInput(*((u32*)(*((u32*)(r0 + 0x34)) + 0x2c)), ((r1 << 0x18) >> 0x18));
    ov14_021F6B28(r5, r4);
}




void ov14_021F75C8(void) {
    GridInputHandler_GetNextInput(*((u32*)(*((u32*)(r0 + 0x34)) + 0x2c)));
    GridInputHandler_HandleInput_AllowHold(*((u32*)(*((u32*)(r5 + 0x34)) + 0x2c)));
    // ldr r0, [r1, r0]
    ov14_021E8544((0x2f << 4), *((u32*)(r5 + 0x34)));
    GridInputHandler_SetNextInput(*((u32*)(*((u32*)(r5 + 0x34)) + 0x2c)), r6);
    ov14_021F6B28(r5, r6);
    // mvn r0, r0
    // mvn r0, r0
}




void ov14_021F7620(void) {
    // mvn r0, r0
    // ldr r0, [r1, r0]
    ov14_021E8544((0x2f << 4), *((u32*)(r0 + 0x34)));
    // add r0, #0x21
    // ldrb r4, [r0]
    // sub r4, #0x1e
    GridInputHandler_SetNextInput(*((u32*)(*((u32*)(r5 + 0x34)) + 0x2c)), ((8 << 0x18) >> 0x18));
    ov14_021F6B28(r5, r4);
}




void ov14_021F7670(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4, #0x34]
    // bl ov14_021F7AC4
    // ldr r0, [r4, #0x34]
    // ldr r1, _021F7684 ; =ov14_021E9F20
    // bl ov14_021E5A50
    // pop {r4, pc}
    // _021F7684: .word ov14_021E9F20
    // TODO: decompile
}




void ov14_021F7688(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // sub r0, r4, #6
    // cmp r0, #1
    // bhi _021F76A8
    // add r0, r5, #0
    // add r0, #0x25
    // ldrb r0, [r0]
    // mov r1, #6
    // bl _s32_div_f
    // add r4, r1, #0
    // ldr r1, [r5, #0x34]
    // ldr r0, _021F76FC ; =0x0000043C
    // str r4, [r1, r0]
    // ldr r0, [r5, #0x34]
    // lsl r1, r4, #0x18
    // ldr r0, [r0, #0x2c]
    // lsr r1, r1, #0x18
    // bl GridInputHandler_SetNextInput
    // ldr r0, [r5, #0x34]
    // add r1, r4, #0
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_GetDpadBox
    // add r1, sp, #0
    // add r1, #1
    // add r2, sp, #0
    // bl DpadMenuBox_GetPosition
    // mov r0, #0x32
    // ldr r1, [r5, #0x34]
    // lsl r0, r0, #4
    // add r2, sp, #0
    // ldr r0, [r1, r0]
    // ldrb r1, [r2, #1]
    // ldrb r2, [r2]
    // bl ManagedSprite_SetPositionXY
    // cmp r4, #0
    // blt _021F76EE
    // cmp r4, #5
    // bgt _021F76EE
    // ldr r0, [r5, #0x34]
    // mov r1, #9
    // mov r2, #0xe
    // bl ov14_021F29E4
    // pop {r3, r4, r5, pc}
    // ldr r0, [r5, #0x34]
    // mov r1, #9
    // mov r2, #8
    // bl ov14_021F29E4
    // pop {r3, r4, r5, pc}
    // nop
    // _021F76FC: .word 0x0000043C
    // TODO: decompile
}




void ov14_021F7700(void) {
    // push {r4, r5, r6, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // add r6, r2, #0
    // cmp r4, #0
    // blt _021F771C
    // cmp r4, #5
    // bgt _021F771C
    // ldr r0, [r5, #0x34]
    // mov r1, #9
    // mov r2, #0xe
    // bl ov14_021F29E4
    // b _021F7726
    // ldr r0, [r5, #0x34]
    // mov r1, #9
    // mov r2, #8
    // bl ov14_021F29E4
    // cmp r6, #8
    // bne _021F7742
    // cmp r4, #0
    // bne _021F7742
    // ldr r1, [r5, #0x34]
    // ldr r0, _021F784C ; =0x0000043C
    // mov r2, #8
    // ldr r4, [r1, r0]
    // ldr r0, [r1, #0x2c]
    // lsl r1, r4, #0x18
    // lsr r1, r1, #0x18
    // add r3, r2, #0
    // bl GridInputHandler_SetNextLastUnk0FInputs
    // cmp r4, #0
    // blt _021F7750
    // cmp r4, #5
    // bgt _021F7750
    // ldr r1, [r5, #0x34]
    // ldr r0, _021F784C ; =0x0000043C
    // str r4, [r1, r0]
    // cmp r4, #0
    // bne _021F77AC
    // cmp r6, #5
    // bne _021F77AC
    // add r0, r5, #0
    // add r0, #0x25
    // ldrb r0, [r0]
    // add r0, r0, #1
    // cmp r0, #0x12
    // blt _021F7768
    // mov r1, #0
    // b _021F7770
    // add r0, r5, #0
    // add r0, #0x25
    // ldrb r0, [r0]
    // add r1, r0, #1
    // add r0, r5, #0
    // add r0, #0x25
    // strb r1, [r0]
    // add r0, r5, #0
    // bl ov14_021F49E0
    // add r0, r5, #0
    // bl ov14_021F48B4
    // add r0, r5, #0
    // bl ov14_021F4848
    // add r0, r5, #0
    // bl ov14_021F57B8
    // ldr r0, [r5, #0x34]
    // mov r1, #5
    // mov r2, #4
    // bl ov14_021F29E4
    // ldr r0, [r5, #0x34]
    // add r1, r4, #0
    // add r2, r6, #0
    // bl ov14_021F7AC4
    // ldr r0, [r5, #0x34]
    // ldr r1, _021F7850 ; =ov14_021E9F20
    // bl ov14_021E5A50
    // pop {r4, r5, r6, pc}
    // cmp r4, #5
    // bne _021F7806
    // cmp r6, #0
    // bne _021F7806
    // add r0, r5, #0
    // add r0, #0x25
    // ldrb r0, [r0]
    // sub r0, r0, #1
    // bpl _021F77C2
    // mov r1, #0x11
    // b _021F77CA
    // add r0, r5, #0
    // add r0, #0x25
    // ldrb r0, [r0]
    // sub r1, r0, #1
    // add r0, r5, #0
    // add r0, #0x25
    // strb r1, [r0]
    // add r0, r5, #0
    // bl ov14_021F49E0
    // add r0, r5, #0
    // bl ov14_021F48B4
    // add r0, r5, #0
    // bl ov14_021F4848
    // add r0, r5, #0
    // bl ov14_021F57B8
    // ldr r0, [r5, #0x34]
    // mov r1, #4
    // mov r2, #2
    // bl ov14_021F29E4
    // ldr r0, [r5, #0x34]
    // add r1, r4, #0
    // add r2, r6, #0
    // bl ov14_021F7AC4
    // ldr r0, [r5, #0x34]
    // ldr r1, _021F7850 ; =ov14_021E9F20
    // bl ov14_021E5A50
    // pop {r4, r5, r6, pc}
    // cmp r4, #0
    // blt _021F7836
    // cmp r4, #5
    // bgt _021F7836
    // cmp r6, #8
    // beq _021F7836
    // add r0, r5, #0
    // add r0, #0x25
    // ldrb r0, [r0]
    // mov r1, #6
    // bl _s32_div_f
    // mov r1, #6
    // mul r1, r0
    // add r0, r5, #0
    // add r1, r4, r1
    // add r0, #0x25
    // strb r1, [r0]
    // add r0, r5, #0
    // bl ov14_021F48B4
    // add r0, r5, #0
    // bl ov14_021F57B8
    // ldr r0, [r5, #0x34]
    // add r1, r4, #0
    // add r2, r6, #0
    // bl ov14_021F7AC4
    // ldr r0, [r5, #0x34]
    // ldr r1, _021F7850 ; =ov14_021E9F20
    // bl ov14_021E5A50
    // pop {r4, r5, r6, pc}
    // nop
    // _021F784C: .word 0x0000043C
    // _021F7850: .word ov14_021E9F20
    // TODO: decompile
}




void ov14_021F7854(void) {
    GridInputHandler_SetNextInput(*((u32*)(*((u32*)(r0 + 0x34)) + 0x2c)), ((r1 << 0x18) >> 0x18));
    ov14_021F6B28(r5, r4);
}




void ov14_021F7878(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #4
    // add r4, r1, #0
    // add r5, r0, #0
    // sub r0, r4, #4
    // cmp r0, #1
    // bhi _021F789C
    // ldr r0, [r5, #0x34]
    // ldr r6, _021F78F4 ; =0x0000044D
    // ldrb r1, [r0, r6]
    // sub r6, #0x11
    // lsr r3, r1, #0x1f
    // lsl r2, r1, #0x1e
    // sub r2, r2, r3
    // mov r1, #0x1e
    // ror r2, r1
    // add r4, r3, r2
    // str r4, [r0, r6]
    // ldr r0, [r5, #0x34]
    // lsl r1, r4, #0x18
    // ldr r0, [r0, #0x2c]
    // lsr r1, r1, #0x18
    // bl GridInputHandler_SetNextInput
    // ldr r0, [r5, #0x34]
    // add r1, r4, #0
    // ldr r0, [r0, #0x2c]
    // bl GridInputHandler_GetDpadBox
    // add r1, sp, #0
    // add r1, #1
    // add r2, sp, #0
    // bl DpadMenuBox_GetPosition
    // mov r0, #0x32
    // ldr r1, [r5, #0x34]
    // lsl r0, r0, #4
    // add r2, sp, #0
    // ldr r0, [r1, r0]
    // ldrb r1, [r2, #1]
    // ldrb r2, [r2]
    // bl ManagedSprite_SetPositionXY
    // cmp r4, #0
    // blt _021F78E4
    // cmp r4, #3
    // bgt _021F78E4
    // ldr r0, [r5, #0x34]
    // mov r1, #9
    // mov r2, #0xe
    // bl ov14_021F29E4
    // add sp, #4
    // pop {r3, r4, r5, r6, pc}
    // ldr r0, [r5, #0x34]
    // mov r1, #9
    // mov r2, #8
    // bl ov14_021F29E4
    // add sp, #4
    // pop {r3, r4, r5, r6, pc}
    // nop
    // _021F78F4: .word 0x0000044D
    // TODO: decompile
}




void ov14_021F78F8(void) {
    // push {r4, r5, r6, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // add r6, r2, #0
    // cmp r4, #0
    // blt _021F7914
    // cmp r4, #3
    // bgt _021F7914
    // ldr r0, [r5, #0x34]
    // mov r1, #9
    // mov r2, #0xe
    // bl ov14_021F29E4
    // b _021F791E
    // ldr r0, [r5, #0x34]
    // mov r1, #9
    // mov r2, #8
    // bl ov14_021F29E4
    // cmp r6, #6
    // bne _021F793A
    // cmp r4, #0
    // bne _021F793A
    // ldr r1, [r5, #0x34]
    // ldr r0, _021F7A20 ; =0x0000043C
    // mov r2, #6
    // ldr r4, [r1, r0]
    // ldr r0, [r1, #0x2c]
    // lsl r1, r4, #0x18
    // lsr r1, r1, #0x18
    // add r3, r2, #0
    // bl GridInputHandler_SetNextLastUnk0FInputs
    // cmp r4, #0
    // blt _021F7948
    // cmp r4, #3
    // bgt _021F7948
    // ldr r1, [r5, #0x34]
    // ldr r0, _021F7A20 ; =0x0000043C
    // str r4, [r1, r0]
    // cmp r4, #0
    // bne _021F7998
    // cmp r6, #3
    // bne _021F7998
    // ldr r0, [r5, #0x34]
    // ldr r1, _021F7A24 ; =0x0000044D
    // ldrb r2, [r0, r1]
    // add r2, r2, #1
    // cmp r2, #0x18
    // blt _021F7960
    // mov r2, #0
    // b _021F7960
    // strb r2, [r0, r1]
    // add r0, r5, #0
    // bl ov14_021F462C
    // add r0, r5, #0
    // bl ov14_021F4530
    // add r0, r5, #0
    // bl ov14_021F459C
    // add r0, r5, #0
    // bl ov14_021F58B8
    // ldr r0, [r5, #0x34]
    // mov r1, #5
    // mov r2, #4
    // bl ov14_021F29E4
    // ldr r0, [r5, #0x34]
    // add r1, r4, #0
    // add r2, r6, #0
    // bl ov14_021F7AC4
    // ldr r0, [r5, #0x34]
    // ldr r1, _021F7A28 ; =ov14_021E9F20
    // bl ov14_021E5A50
    // pop {r4, r5, r6, pc}
    // cmp r4, #3
    // bne _021F79E6
    // cmp r6, #0
    // bne _021F79E6
    // ldr r0, [r5, #0x34]
    // ldr r1, _021F7A24 ; =0x0000044D
    // ldrb r2, [r0, r1]
    // sub r2, r2, #1
    // bpl _021F79AE
    // mov r2, #0x17
    // b _021F79AE
    // strb r2, [r0, r1]
    // add r0, r5, #0
    // bl ov14_021F462C
    // add r0, r5, #0
    // bl ov14_021F4530
    // add r0, r5, #0
    // bl ov14_021F459C
    // add r0, r5, #0
    // bl ov14_021F58B8
    // ldr r0, [r5, #0x34]
    // mov r1, #4
    // mov r2, #2
    // bl ov14_021F29E4
    // ldr r0, [r5, #0x34]
    // add r1, r4, #0
    // add r2, r6, #0
    // bl ov14_021F7AC4
    // ldr r0, [r5, #0x34]
    // ldr r1, _021F7A28 ; =ov14_021E9F20
    // bl ov14_021E5A50
    // pop {r4, r5, r6, pc}
    // cmp r4, #0
    // blt _021F7A0C
    // cmp r4, #3
    // bgt _021F7A0C
    // cmp r6, #6
    // beq _021F7A0C
    // ldr r0, [r5, #0x34]
    // ldr r1, _021F7A24 ; =0x0000044D
    // ldrb r2, [r0, r1]
    // lsr r2, r2, #2
    // lsl r2, r2, #2
    // add r2, r4, r2
    // strb r2, [r0, r1]
    // add r0, r5, #0
    // bl ov14_021F459C
    // add r0, r5, #0
    // bl ov14_021F58B8
    // ldr r0, [r5, #0x34]
    // add r1, r4, #0
    // add r2, r6, #0
    // bl ov14_021F7AC4
    // ldr r0, [r5, #0x34]
    // ldr r1, _021F7A28 ; =ov14_021E9F20
    // bl ov14_021E5A50
    // pop {r4, r5, r6, pc}
    // _021F7A20: .word 0x0000043C
    // _021F7A24: .word 0x0000044D
    // _021F7A28: .word ov14_021E9F20
    // TODO: decompile
}




void ov14_021F7A2C(void) {
    GridInputHandler_SetNextInput(*((u32*)(*((u32*)(r0 + 0x34)) + 0x2c)), ((r1 << 0x18) >> 0x18));
    ov14_021F6B28(r5, r4);
}




void ov14_021F7A50(void) {
}




void ov14_021F7AC4(void) {
    GridInputHandler_GetDpadBox(*((u32*)(r0 + 0x2c)));
    // add r1, sp, #0
    // add r2, sp, #0
    // add r1, #3
    // add r2, #2
    DpadMenuBox_GetPosition();
    GridInputHandler_GetDpadBox(*((u32*)(r5 + 0x2c)), r4);
    // add r1, sp, #0
    // add r1, #1
    // add r2, sp, #0
    DpadMenuBox_GetPosition();
    Heap_Alloc(0xa, 8);
    // and r1, r0
    // orr r0, r1
    *((u32*)(r0 + 4)) = 0x10;
    // add r0, sp, #0
    // strb r1, [r4]
    *((u8*)(r0 + 1)) = *((u8*)(0x10 + 2));
    // sub r0, r0, r1
    *((u8*)(r0 + 2)) = *((u8*)(0x10 + 3));
    // bic r1, r0
    *((u32*)(r0 + 4)) = *((u32*)(r0 + 4));
    // sub r0, r1, r0
    *((u8*)(r0 + 2)) = 1;
    // bic r1, r0
    // orr r0, r1
    *((u32*)(r0 + 4)) = 1;
    // add r0, sp, #0
    // ldrb r1, [r0]
    // sub r0, r0, r1
    *((u8*)(r0 + 3)) = *((u8*)(1 + 2));
    // bic r1, r0
    *((u32*)(r0 + 4)) = *((u32*)(r0 + 4));
    // sub r0, r1, r0
    *((u8*)(r0 + 3)) = 2;
    // orr r0, r1
    *((u32*)(r0 + 4)) = 2;
    _u32_div_f((*((u8*)(r0 + 2)) << 8), (*((u32*)(r0 + 4)) >> 2));
    *((u8*)(r4 + 2)) = (r0 >> 8);
    _u32_div_f((*((u8*)(r4 + 3)) << 8), (*((u32*)(r4 + 4)) >> 2));
    *((u8*)(r4 + 3)) = (r0 >> 8);
    *((u32*)(r5 + 0xc)) = r4;
}




void ov14_021F7B7C(void) {
    // push {r3, lr}
    // ldr r1, [r0, #0x34]
    // mov r0, #0x2f
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov14_021E8648
    // cmp r0, #0
    // bne _021F7B92
    // mov r0, #0
    // pop {r3, pc}
    // ldr r0, _021F7BB4 ; =gSystem
    // ldr r1, [r0, #0x48]
    // mov r0, #2
    // lsl r0, r0, #0xa
    // tst r0, r1
    // beq _021F7BA2
    // mov r0, #1
    // pop {r3, pc}
    // ldr r0, _021F7BB8 ; =ov14_021F86C8
    // bl TouchscreenHitbox_TouchNewIsIn
    // cmp r0, #1
    // bne _021F7BB0
    // mov r0, #1
    // pop {r3, pc}
    // mov r0, #0
    // pop {r3, pc}
    // _021F7BB4: .word gSystem
    // _021F7BB8: .word ov14_021F86C8
    // TODO: decompile
}



