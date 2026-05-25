/* Decompiled from asm/overlay_14.s */
#include "global.h"

BOOL PCBox_Init(void) {
    // str r0, [r4]
    // add r0, #0x21
    // strb r1, [r0]
}





BOOL PCBox_Main(void) {
}





u32 PCBox_Exit(void) {
}





void ov14_021E59AC(void) {
    // blx r1
    *((u32*)(*((u32*)(r1 + 0x34)) + 4)) = 0;
    ov14_021E5A14(r1, 0);
    PaletteData_PushTransparentBuffers(*((u32*)(*((u32*)(r4 + 0x34)) + 0x18)));
    DoScheduledBgGpuUpdates(*((u32*)(*((u32*)(r4 + 0x34)) + 0x14)));
    ov14_021F29C4(*((u32*)(r4 + 0x34)));
    SpriteSystem_DrawSprites(*((u32*)(*((u32*)(r4 + 0x34)) + (0xbe << 2))), *((u32*)(r4 + 0x34)));
    SpriteSystem_TransferOam();
    // str r0, [r3, r1]
}





void ov14_021E5A14(void) {
    // ldr r0, [r1, r0]
    // ldr r0, [r1, r0]
}





void ov14_021E5A44(void) {
}





void ov14_021E5A50(void) {
}





void ov14_021E5A54(void) {
}





void ov14_021E5A60(void) {
    // bx r3
    // nop
    // _021E5A68: .word GfGfx_SetBanks
    // _021E5A6C: .word ov14_021F7CE4
}





void ov14_021E5A70(void) {
    BgConfig_Alloc(0xa);
    // add r3, sp, #0xc4
    *((u32*)(*((u32*)(r4 + 0x34)) + 0x14)) = r0;
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    SetBothScreensModesAndDisable(r3, *((u32*)(r4 + 0x34)), r3);
    // add r3, sp, #0xa8
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(*((u32*)(*((u32*)(r4 + 0x34)) + 0x14)), 0, r3, 0);
    BgClearTilemapBufferAndCommit(*((u32*)(*((u32*)(r4 + 0x34)) + 0x14)), 0);
    BG_ClearCharDataRange(0, 0x20, 0, 0xa);
    // add r3, sp, #0x8c
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(*((u32*)(*((u32*)(r4 + 0x34)) + 0x14)), 1, r3, 0);
    BgClearTilemapBufferAndCommit(*((u32*)(*((u32*)(r4 + 0x34)) + 0x14)), 1);
    BG_ClearCharDataRange(1, 0x20, 0, 0xa);
    // add r3, sp, #0x70
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(*((u32*)(*((u32*)(r4 + 0x34)) + 0x14)), 2, r3, 0);
    // add r3, sp, #0x54
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(*((u32*)(*((u32*)(r4 + 0x34)) + 0x14)), 3, r3, 0);
    // add r3, sp, #0x38
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(*((u32*)(*((u32*)(r4 + 0x34)) + 0x14)), 4, r3, 0);
    BgClearTilemapBufferAndCommit(*((u32*)(*((u32*)(r4 + 0x34)) + 0x14)), 4);
    BG_ClearCharDataRange(4, 0x20, 0, 0xa);
    // add r3, sp, #0x1c
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(*((u32*)(*((u32*)(r4 + 0x34)) + 0x14)), 5, r3, 0);
    // add r3, sp, #0
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(*((u32*)(*((u32*)(r4 + 0x34)) + 0x14)), 6, r3, 0);
    BgClearTilemapBufferAndCommit(*((u32*)(*((u32*)(r4 + 0x34)) + 0x14)), 6);
    BG_ClearCharDataRange(6, 0x20, 0, 0xa);
}





void ov14_021E5C00(void) {
}





void ov14_021E5C54(void) {
    // str r3, [sp]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r3, [sp, #8]
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
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
}





void ov14_021E5D78(void) {
}





void ov14_021E5DB8(void) {
}





void ov14_021E5DE0(void) {
    // str r0, [sp]
    // sub r0, #0xe8
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharData(0x13, 0x40, *((u32*)(*((u32*)(r0 + 0x34)) + 0x14)), 0);
    // str r0, [sp]
    // sub r0, #0xe8
    // str r0, [sp, #4]
    // str r3, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharData(0x13, 0x40, *((u32*)(r4 + 0x14)), 1);
    // str r0, [sp]
    // str r0, [sp, #4]
    GfGfxLoader_GXLoadPal(0x13, 0x41, 0, (6 << 6));
    Options_GetFrame(*((u32*)(r5 + 0x10)));
    // str r0, [sp]
    // str r3, [sp, #4]
    LoadUserFrameGfx2(*((u32*)(r4 + 0x14)), 0, 0x0000038E, 0xa);
    LoadFontPal1(0, (0x16 << 4), 0xa);
    LoadFontPal0(4, (0x1e << 4), 0xa);
}





void ov14_021E5E74(void) {
}





void ov14_021E5E94(void) {
}





void ov14_021E5EAC(void) {
    // str r0, [sp]
    G2x_SetBlendAlpha_(0x04000050, 0, 0x2a, 6);
    // strh r1, [r0]
}





void ov14_021E5ED0(void) {
}





void ov14_021E5EE8(void) {
    // ldr r0, [r1, r0]
    // bx r3
    // nop
    // _021E5EF4: .word 0x00000434
    // _021E5EF8: .word YesNoPrompt_Destroy
}





void ov14_021E5EFC(void) {
    // str r2, [sp]
    // str r4, [sp, #8]
    // str r2, [sp, #0xc]
    // str r5, [sp, #4]
    // add r2, sp, #0
    // add r4, #0x88
    // add r1, sp, #0
}





void ov14_021E5F4C(void) {
    // add r4, r0, r1
    // add r1, r0, r1
    ManagedSprite_SetPaletteOverride(*((u32*)((((*((u8*)r4) << 0x18) >> 0x19) << 2) + (0xbf << 2))), ((*((u8*)(r4 + 1)) << 0x1c) >> 0x1c), ((*((u8*)r4) << 0x1f) >> 0x1f));
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    BgTilemapRectChangePalette(*((u32*)(r0 + 0x14)), ((*((u8*)r4) << 0x18) >> 0x19), *((u8*)(r4 + 4)), *((u8*)(r4 + 5)));
    ScheduleBgTilemapBufferTransfer(*((u32*)(*((u32*)(r5 + 0x34)) + 0x14)), ((*((u8*)r4) << 0x18) >> 0x19));
    *((u8*)(r4 + 2)) = (*((u8*)(r4 + 2)) + 1);
    *((u8*)(r4 + 3)) = (*((u8*)(r4 + 3)) + 1);
    // add r1, r1, r0
    ManagedSprite_SetPaletteOverride(*((u32*)(*((u32*)(r5 + 0x34)) + (0xbf << 2))), ((*((u8*)(r4 + 1)) << 0x18) >> 0x1c));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BgTilemapRectChangePalette(*((u32*)(*((u32*)(r5 + 0x34)) + 0x14)), ((*((u8*)r4) << 0x18) >> 0x19), *((u8*)(r4 + 4)), *((u8*)(r4 + 5)));
    ScheduleBgTilemapBufferTransfer(*((u32*)(*((u32*)(r5 + 0x34)) + 0x14)), ((*((u8*)r4) << 0x18) >> 0x19));
    *((u8*)(r4 + 3)) = 0;
    *((u8*)(r4 + 2)) = (*((u8*)(r4 + 2)) + 1);
    *((u8*)(r4 + 3)) = (*((u8*)(r4 + 3)) + 1);
}





void ov14_021E6048(void) {
}





void ov14_021E6070(void) {
}





void ov14_021E6094(void) {
}





void ov14_021E60C0(void) {
    // sub r4, #0x1e
}





void ov14_021E6100(void) {
    // sub r2, #0x1e
}





void ov14_021E611C(void) {
    // sub r7, #0x1e
    // add r0, sp, #0
    // strb r1, [r0]
    // mov r1, #MON_DATA_MOOD
    // add r2, sp, #0
}





void ov14_021E6184(void) {
}





void ov14_021E61BC(void) {
    // sub r1, #0x1e
    // add r1, sp, #0
    // strb r2, [r1]
    // mov r1, #MON_DATA_MOOD
    // add r2, sp, #0
}





void ov14_021E6210(void) {
    // sub r7, #0x1e
    // sub r4, #0x1e
    // add r1, sp, #4
    // add r1, #1
    // add r1, sp, #0
    // add r1, sp, #0
    // add r1, sp, #4
    // add r1, #1
}





void ov14_021E627C(void) {
    // sub r6, #0x1e
    // add r1, sp, #0
    // add r1, sp, #0
}





void ov14_021E62C8(void) {
}





void ov14_021E6318(void) {
    // sub r1, #0x1e
}





void ov14_021E637C(void) {
    // add r0, #0xe4
    // add r1, #0xe8
    // tst r1, r3
    // add r0, #0xe4
    // sub r1, #0x1e
    // add r1, r4, r1
    // add r1, #0xe4
    // sub r3, #0x1e
    // add r4, #0x20
    // add r1, #0x20
    // add r1, #0xe4
    // sub r1, #0x1e
    // add r1, r4, r1
    // sub r3, #0x1e
    // sub r2, #0x1e
    // add r1, r4, r1
}





void ov14_021E6464(void) {
}





void ov14_021E6480(void) {
}





void ov14_021E64D0(void) {
    GetBoxMonData(5, 0);
    GetBoxMonData(r4, 0x70, 0);
    BoxMon_UpdateArceusForm(r4);
    GetBoxMonData(r4, 0x70, 0);
    GetBoxMonData(r4, 0x70, 0);
    BoxMon_UpdateGiratinaForm(r4);
    GetBoxMonData(r4, 0x70, 0);
}





void ov14_021E6548(void) {
    ov14_021E6070(r0, r2, 5, 0);
    ov14_021E6070(r5, r4, 0x70, 0);
    ov14_021E60C0(r5, *((u8*)(r5 + 0x1f)), r4);
    BoxMon_UpdateShayminForm(0);
    // add r6, r3, r4
    ov14_021F2ED0(r5, *((u8*)(r5 + 0x1f)), r4, *((u8*)(r6 + 0x00004094)));
    // add r0, #0x21
    ov14_021E7588(r5, r4);
}





void ov14_021E65C4(void) {
    // add r0, #0xe0
    // add r2, r0, r1
    // tst r2, r0
    // add r2, sp, #4
    // add r3, #0x22
    // add r1, sp, #4
    // add r1, #2
    ov14_021F2F88(*((u32*)(*((u32*)(*((u32*)(r0 + 0x34)) + 0xc)) + 8)), *((u32*)(*((u32*)(*((u32*)(r0 + 0x34)) + 0xc)) + 4)), 0x80, *((u8*)r0));
    // add r3, #0x22
    // add r1, sp, #4
    // add r1, #2
    ov14_021F2F88(0x23, *((u8*)r5));
    // add r3, #0x22
    // add r1, sp, #4
    // add r1, #2
    ov14_021F2F88(r1, *((u8*)r5));
    ov14_021F2A18(*((u32*)(r5 + 0x34)), r4, 0);
    // add r1, r1, r0
    // add r2, sp, #4
    // ldrsh r1, [r2, r1]
    // ldrsh r2, [r3, r2]
    ManagedSprite_SetPositionXY(*((u32*)(*((u32*)(r5 + 0x34)) + (0xbf << 2))), 2, 0, r2);
    // add r6, #0x20
    // add r0, #0xe0
    // add r0, #0xe0
    // str r1, [r0]
    // str r0, [sp]
    // add r7, sp, #4
    // add r1, r1, r0
    // ldrsh r3, [r4, r1]
    // add r1, #0xe0
    // mov ip, r0
    // ldrsh r0, [r4, r0]
    // add r0, r0, r1
    *((u16*)((r7 + 1) + 2)) = 0x1c;
    // ldrsh r3, [r4, r1]
    // add r1, #0xe0
    // ldrsh r0, [r4, r0]
    // add r0, r0, r1
    // strh r0, [r7]
    // mov r1, ip
    // add r1, r0, r1
    // ldrsh r1, [r7, r1]
    // ldrsh r2, [r7, r2]
    ManagedSprite_SetPositionXY(*((u32*)(((((*((u32*)(r6 + 0x14)) * *((u32*)r6)) >> 0x10) * r3) << 2) + (0xbf << 2))), 2, 0);
    ov14_021F3190(*((u32*)(r5 + 0x34)), *((u32*)(r4 + 4)), 0);
    // ldr r0, [sp]
    // add r4, #0x20
    // str r0, [sp]
}





void ov14_021E66F4(void) {
    // add r0, #0xe0
    // add r1, r1, r0
    // add r3, #0x22
    // add r1, sp, #4
    // add r1, #2
    // add r2, sp, #4
    ov14_021F2F88(*((u32*)(*((u32*)(*((u32*)(r0 + 0x34)) + 0xc)) + 8)), *((u32*)(r0 + 0x34)), *((u8*)r0));
    // add r0, #0x21
    // add r1, sp, #4
    // ldrsh r1, [r1, r0]
    // add r0, sp, #4
    // add r1, #0x90
    // strh r1, [r0]
    // add r1, r1, r0
    // add r2, sp, #4
    // ldrsh r1, [r2, r1]
    // ldrsh r2, [r3, r2]
    ManagedSprite_SetPositionXY(*((u32*)(*((u32*)(r5 + 0x34)) + (0xbf << 2))), 2, 0, r2);
    // add r4, #0x20
    // add r0, #0xe0
    // add r0, #0xe0
    // str r1, [r0]
    // add r2, #0x21
    // str r0, [sp]
    // add r1, r1, r0
    // add r0, r4, r6
    // ldrsh r7, [r0, r1]
    // ldrsh r1, [r0, r1]
    // mov ip, r1
    // add r1, #0xe0
    // add r4, #0xe0
    // mov r2, ip
    // add r1, r7, r1
    // add r7, sp, #4
    *((u16*)(r7 + 2)) = (((*((u32*)(0x00004094 + 0x10)) * *((u32*)r4)) >> 0x10) * *((u32*)r4));
    // ldrsh r2, [r0, r1]
    // ldrsh r1, [r0, r1]
    // add r0, r2, r0
    // strh r0, [r7]
    // add r1, r1, r0
    // ldrsh r1, [r7, r1]
    // ldrsh r2, [r7, r2]
    ManagedSprite_SetPositionXY(*((u32*)(*((u32*)(r5 + 0x34)) + (0xbf << 2))), 2, 0, *((u8*)(*((u32*)(r5 + 0x34)) + 0x00004094)));
    // ldr r1, [sp]
    ov14_021F3190(*((u32*)(r5 + 0x34)), *((u32*)(r1 + r6)), 0);
    // add r0, #0x20
}





void ov14_021E6814(void) {
    // add r0, #0xe0
    // add r1, r1, r0
    // add r3, #0x22
    // add r1, sp, #4
    // add r1, #2
    // add r2, sp, #4
    ov14_021F2F88(*((u32*)(*((u32*)(*((u32*)(r0 + 0x34)) + 0xc)) + 8)), *((u32*)(r0 + 0x34)), *((u8*)r0));
    // add r2, sp, #4
    // add r1, r1, r0
    // ldrsh r1, [r2, r1]
    // ldrsh r2, [r3, r2]
    ManagedSprite_SetPositionXY(*((u32*)(*((u32*)(r6 + 0x34)) + (0xbf << 2))), 2, 0, r2);
    // add r5, #0x20
    // add r0, #0xe0
    // add r0, #0xe0
    // str r1, [r0]
    // str r0, [sp]
    // add r7, sp, #4
    // add r1, r1, r0
    // ldrsh r3, [r4, r1]
    // add r1, #0xe0
    // mov ip, r0
    // ldrsh r0, [r4, r0]
    // add r0, r0, r1
    *((u16*)(r7 + 2)) = 0x1c;
    // ldrsh r3, [r4, r1]
    // add r1, #0xe0
    // ldrsh r0, [r4, r0]
    // add r0, r0, r1
    // strh r0, [r7]
    // mov r1, ip
    // add r1, r0, r1
    // ldrsh r1, [r7, r1]
    // ldrsh r2, [r7, r2]
    ManagedSprite_SetPositionXY(*((u32*)(((((*((u32*)(r5 + 0x14)) * *((u32*)r5)) >> 0x10) * r3) << 2) + (0xbf << 2))), 2, 0);
    ov14_021F31E0(*((u32*)(r6 + 0x34)), *((u32*)(r4 + 4)), *((u32*)(r4 + 8)));
    // ldr r0, [sp]
    // add r4, #0x20
    // str r0, [sp]
}





void ov14_021E690C(void) {
    // tst r0, r4
    // str r0, [sp]
    // ldr r1, [sp]
    // eor r4, r0
    // str r0, [sp]
    // sub r1, #0x1e
    // ldr r0, [sp]
    // sub r6, #0x1e
    // sub r1, #0x1e
    // sub r4, #0x1e
}





void ov14_021E6A3C(void) {
    // sub r1, #0x1e
    // sub r4, #0x1e
}





void ov14_021E6AA0(void) {
    ov14_021E6070(r2, 0xac, 0);
    ov14_021E6070(r5, r6, 0x4c, 0);
    ov14_021E6070(r5, r4, 6, 0);
    // str r0, [sp]
    ItemIdIsMail(((r0 << 0x10) >> 0x10));
    ov14_021E6070(r5, r6, 6, 0);
    ItemIdIsMail(((r0 << 0x10) >> 0x10));
    // ldr r0, [sp]
    ov14_021E6070(r5, r6, 5, 0);
    ov14_021E6070(r5, r4, 5, 0);
}





void ov14_021E6B48(void) {
    // add r2, r0, r1
    // add r2, #0x1e
    // add r1, r0, r1
    // add r1, #0x1c
    ManagedSprite_GetPositionXY(*((u32*)((*((u8*)(r2 + 0x00004094)) << 2) + (0xbf << 2))), r1, r1);
    // tst r0, r2
    // add r5, #0x22
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    ov14_021F2F88(*((u32*)(r4 + 8)), *((u32*)(r4 + 8)), *((u8*)r5));
    // and r1, r2
    // add r2, sp, #0
    // add r2, #2
    // add r3, sp, #0
    ov14_021F4940(*((u32*)(r5 + 0x34)), 0x7f);
    // add r2, sp, #0
    // ldrsh r5, [r4, r0]
    // ldrsh r3, [r2, r1]
    *((u16*)(r4 + 0x18)) = 1;
    // ldrsh r1, [r2, r1]
    // ldrsh r0, [r4, r0]
    // sub r0, r1, r0
    *((u16*)(r4 + 0x18)) = (2 - 3);
    // ldrsh r3, [r4, r0]
    // ldrsh r0, [r2, r1]
    // sub r0, r3, r0
    // asr r0, r1, #2
    // add r0, r1, r0
    // asr r0, r0, #3
    *((u32*)(r4 + 0x10)) = (0x1c >> 0x1d);
    // add r2, sp, #0
    // ldrsh r5, [r4, r0]
    // ldrsh r3, [r2, r1]
    *((u16*)(r4 + 0x1a)) = 1;
    // ldrsh r1, [r2, r1]
    // ldrsh r0, [r4, r0]
    // sub r0, r1, r0
    // asr r0, r1, #2
    // add r0, r1, r0
    // asr r0, r0, #3
    *((u32*)(r4 + 0x14)) = (0x1e >> 0x1d);
    *((u16*)(r4 + 0x1a)) = ((0x1e << 0x10) - 1);
    // ldrsh r3, [r4, r0]
    // ldrsh r0, [r2, r1]
    // sub r0, r3, r0
    // asr r0, r1, #2
    // add r0, r1, r0
    // asr r0, r0, #3
    *((u32*)(r4 + 0x14)) = ((0x1e >> 0x1d) >> 0x1d);
}





void ov14_021E6C0C(void) {
    // add r2, r0, r1
    // add r2, r0, r2
    // add r2, #0x1e
    // add r1, r0, r1
    // add r1, #0x1c
    ManagedSprite_GetPositionXY(*((u32*)((*((u8*)(*((u32*)(r1 + 4)) + 0x00004094)) << 2) + (0xbf << 2))), r1, r1);
    // add r1, r1, r0
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    ManagedSprite_GetPositionXY(*((u32*)(*((u32*)(r5 + 0x34)) + (0xbf << 2))), *((u32*)(r5 + 0x34)));
    // add r2, sp, #0
    // ldrsh r5, [r4, r0]
    // ldrsh r3, [r2, r1]
    *((u16*)(r4 + 0x18)) = 1;
    // ldrsh r1, [r2, r1]
    // ldrsh r0, [r4, r0]
    // sub r0, r1, r0
    *((u16*)(r4 + 0x18)) = (2 - 3);
    // ldrsh r3, [r4, r0]
    // ldrsh r0, [r2, r1]
    // sub r0, r3, r0
    // asr r0, r1, #2
    // add r0, r1, r0
    // asr r0, r0, #3
    *((u32*)(r4 + 0x10)) = (0x1c >> 0x1d);
    // add r2, sp, #0
    // ldrsh r5, [r4, r0]
    // ldrsh r3, [r2, r1]
    *((u16*)(r4 + 0x1a)) = 1;
    // ldrsh r1, [r2, r1]
    // ldrsh r0, [r4, r0]
    // sub r0, r1, r0
    // asr r0, r1, #2
    // add r0, r1, r0
    // asr r0, r0, #3
    *((u32*)(r4 + 0x14)) = (0x1e >> 0x1d);
    *((u16*)(r4 + 0x1a)) = ((0x1e << 0x10) - 1);
    // ldrsh r3, [r4, r0]
    // ldrsh r0, [r2, r1]
    // sub r0, r3, r0
    // asr r0, r1, #2
    // add r0, r1, r0
    // asr r0, r0, #3
    *((u32*)(r4 + 0x14)) = ((0x1e >> 0x1d) >> 0x1d);
}





void ov14_021E6CC8(void) {
}





void ov14_021E6CF8(void) {
    // str r2, [sp, #4]
    // str r1, [sp]
    // str r0, [sp, #0x14]
    // str r1, [r2, r0]
    // ldr r2, [sp, #0x14]
    *((u32*)(*((u32*)(r0 + 0x34)) + 4)) = 0;
    *((u32*)(*((u32*)(r0 + 0x34)) + 8)) = 0;
    *((u32*)(*((u32*)(r0 + 0x34)) + 0xc)) = 0;
    // add r2, #0x20
    // ldr r1, [sp, #0x14]
    // ldr r0, [sp, #4]
    // add r1, #0xec
    // str r0, [r1]
    // ldr r1, [sp]
    // ldr r2, [sp, #4]
    ov14_021E690C(r0, (0 + 1), *((u32*)(r0 + 0x34)));
    // ldr r0, [sp, #0x14]
    // add r0, #0xe4
    // str r1, [r0]
    // ldr r0, [sp, #0x14]
    // add r0, #0xe8
    // str r1, [r0]
    // ldr r1, [sp]
    // ldr r0, [sp, #0x14]
    *((u32*)(r0 + 4)) = 0xff;
    *((u32*)(r0 + 8)) = 0xff;
    *((u32*)(r0 + 0xc)) = 1;
    // ldr r1, [sp, #0x14]
    ov14_021E6B48(r6, 1);
    // ldr r1, [sp, #0x14]
    // ldr r0, [sp]
    // add r1, #0xe4
    // str r0, [r1]
    // ldr r1, [sp, #0x14]
    // ldr r0, [sp, #4]
    // add r1, #0xe8
    // str r0, [r1]
    Party_GetCount(*((u32*)(r6 + 8)));
    // ldr r0, [sp, #4]
    // tst r0, r1
    // ldr r0, [sp]
    // ldr r0, [sp, #0x14]
    *((u32*)(r0 + 4)) = r0;
    // ldr r1, [sp, #4]
    *((u32*)(r0 + 8)) = r0;
    *((u32*)(r0 + 0xc)) = 1;
    // ldr r1, [sp, #0x14]
    ov14_021E6B48(r6, 1);
    // str r2, [r1, r0]
    // str r0, [sp, #0x10]
    // sub r0, #0x1e
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x14]
    // add r4, r0, r1
    // add r0, #0x1e
    *((u32*)(r4 + 4)) = (0x000040C4 + 1);
    // add r0, #0x1d
    *((u32*)(r4 + 8)) = (0x000040C4 + 1);
    *((u32*)(r4 + 0xc)) = 1;
    ov14_021E6B48(r6, r4, 0);
    // add r4, #0x20
    // ldr r0, [sp, #0x10]
    // ldr r0, [sp, #0x14]
    // add r1, r0, r1
    // ldr r0, [sp]
    *((u32*)((r0 << 5) + 4)) = r0;
    // ldr r0, [sp, #4]
    *((u32*)((r0 << 5) + 8)) = r0;
    *((u32*)((r0 << 5) + 0xc)) = 1;
    ov14_021E6B48(r6, (r0 << 5));
    // str r2, [r1, r0]
    // ldr r0, [sp]
    // ldr r0, [sp, #4]
    // ldr r1, [sp]
    // ldr r2, [sp, #4]
    ov14_021E6CC8(r6, *((u32*)(r6 + 0x34)), 0);
    // sub r0, #0x1e
    // ldr r1, [sp]
    // ldr r2, [sp, #4]
    ov14_021E6CC8(r6);
    // add r7, #0x1e
    // ldr r1, [sp]
    ov14_021E6CC8(r6, r7);
    // ldr r0, [sp, #4]
    // ldr r1, [sp, #4]
    ov14_021E6070(r6, 0xac, 0);
    // ldr r1, [sp]
    // ldr r2, [sp, #4]
    ov14_021E6CC8(r6);
    // ldr r0, [sp]
    // str r0, [sp, #8]
    // sub r0, #0x1e
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x14]
    // add r4, r0, r1
    // add r0, #0x1e
    *((u32*)(r4 + 4)) = (r0 + 1);
    // add r0, #0x1d
    *((u32*)(r4 + 8)) = (r0 + 1);
    *((u32*)(r4 + 0xc)) = 1;
    ov14_021E6B48(r6, r4);
    // add r4, #0x20
    // ldr r0, [sp, #8]
    // ldr r0, [sp, #0x14]
    // add r1, r0, r1
    // ldr r0, [sp]
    *((u32*)((r0 << 5) + 4)) = r0;
    // ldr r0, [sp, #4]
    *((u32*)((r0 << 5) + 8)) = r0;
    *((u32*)((r0 << 5) + 0xc)) = 1;
    ov14_021E6B48(r6, (r0 << 5));
    // ldr r0, [sp, #0x14]
    // add r7, #0x1d
    // add r1, r0, r1
    // ldr r0, [sp, #4]
    *((u32*)((r7 << 5) + 4)) = r0;
    *((u32*)((r7 << 5) + 8)) = r7;
    *((u32*)((r7 << 5) + 0xc)) = 1;
    ov14_021E6B48(r6, (r7 << 5));
    // sub r0, #0x1e
    // ldr r1, [sp]
    // ldr r2, [sp, #4]
    ov14_021E6CC8(r6);
    // ldr r0, [sp]
    // str r0, [sp, #0xc]
    // sub r0, #0x1e
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x14]
    // add r4, r0, r1
    // add r0, #0x1e
    *((u32*)(r4 + 4)) = (r0 + 1);
    // add r0, #0x1d
    *((u32*)(r4 + 8)) = (r0 + 1);
    *((u32*)(r4 + 0xc)) = 1;
    ov14_021E6B48(r6, r4);
    // add r4, #0x20
    // ldr r0, [sp, #0xc]
    // add r7, #0x1d
    // ldr r0, [sp, #0x14]
    // add r1, r0, r1
    // ldr r0, [sp]
    *((u32*)((r0 << 5) + 4)) = r0;
    *((u32*)((r0 << 5) + 8)) = r7;
    *((u32*)((r0 << 5) + 0xc)) = 1;
    ov14_021E6B48(r6, (r0 << 5));
}





void ov14_021E6F3C(void) {
    // str r2, [sp, #4]
    // str r1, [sp]
    // str r0, [sp, #0xc]
    // str r1, [r2, r0]
    // ldr r2, [sp, #0xc]
    *((u32*)(*((u32*)(r0 + 0x34)) + 4)) = 0;
    *((u32*)(*((u32*)(r0 + 0x34)) + 8)) = 0;
    *((u32*)(*((u32*)(r0 + 0x34)) + 0xc)) = 0;
    // add r2, #0x20
    // ldr r0, [sp, #4]
    // ldr r1, [sp]
    // ldr r2, [sp, #4]
    ov14_021E6A3C(r0, (0 + 1), *((u32*)(r0 + 0x34)));
    // ldr r0, [sp, #0xc]
    // add r0, #0xe4
    // str r1, [r0]
    // ldr r0, [sp, #0xc]
    // add r0, #0xe8
    // str r1, [r0]
    // ldr r1, [sp]
    // ldr r0, [sp, #0xc]
    *((u32*)(r0 + 4)) = 0xff;
    *((u32*)(r0 + 8)) = 0xff;
    *((u32*)(r0 + 0xc)) = 1;
    // ldr r1, [sp, #0xc]
    ov14_021E6B48(r6, 1);
    // ldr r1, [sp, #0xc]
    // ldr r0, [sp]
    // add r1, #0xe4
    // str r0, [r1]
    // ldr r1, [sp, #0xc]
    // ldr r0, [sp, #4]
    // add r1, #0xe8
    // str r0, [r1]
    Party_GetCount(*((u32*)(r6 + 8)));
    // ldr r0, [sp, #4]
    // ldr r0, [sp]
    // str r0, [sp, #8]
    // sub r0, #0x1e
    // str r0, [sp, #8]
    // ldr r0, [sp, #0xc]
    // add r4, r0, r1
    // add r0, #0x1e
    *((u32*)(r4 + 4)) = (r0 + 1);
    // add r0, #0x1d
    *((u32*)(r4 + 8)) = (r0 + 1);
    *((u32*)(r4 + 0xc)) = 1;
    ov14_021E6C0C(r6, r4);
    // add r4, #0x20
    // ldr r0, [sp, #8]
    // ldr r0, [sp, #0xc]
    // add r1, r0, r1
    // ldr r0, [sp]
    *((u32*)((r0 << 5) + 4)) = r0;
    // ldr r0, [sp, #4]
    *((u32*)((r0 << 5) + 8)) = r0;
    *((u32*)((r0 << 5) + 0xc)) = 1;
    ov14_021E6C0C(r6, (r0 << 5));
    // ldr r0, [sp, #0xc]
    // add r7, #0x1d
    // add r1, r0, r1
    // ldr r0, [sp, #4]
    *((u32*)((r7 << 5) + 4)) = r0;
    *((u32*)((r7 << 5) + 8)) = r7;
    *((u32*)((r7 << 5) + 0xc)) = 1;
    ov14_021E6C0C(r6, (r7 << 5));
    // str r2, [r1, r0]
}





void ov14_021E7034(void) {
    // str r1, [r2, r0]
    *((u32*)(*((u32*)(*((u32*)(r0 + 0x34)) + 0xc)) + 4)) = 0;
    *((u32*)(*((u32*)(*((u32*)(r0 + 0x34)) + 0xc)) + 8)) = 0;
    *((u32*)(*((u32*)(*((u32*)(r0 + 0x34)) + 0xc)) + 0xc)) = 0;
    // add r1, #0x20
    ov14_021E6070(r0, r2, 0xac, 0);
    // add r0, #0xe4
    // str r1, [r0]
    // add r0, #0xe8
    // str r1, [r0]
    *((u32*)(r4 + 4)) = r6;
    *((u32*)(r4 + 8)) = r6;
    *((u32*)(r4 + 0xc)) = 1;
    ov14_021E6B48(r5, r4);
    // add r0, #0xe4
    // str r6, [r0]
    // add r4, #0xe8
    // str r7, [r4]
    Party_GetCount(*((u32*)(r5 + 8)));
    // add r2, #0x1e
    ov14_021E6CC8(r5, r6, r0);
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
    // add r3, #0x20
    // add r0, r7, r0
    // ldr r0, [sp]
    // add r4, r7, r0
    // add r0, #0x1d
    // add r4, #0x20
    // ldr r0, [sp]
    // add r1, r7, r1
}





void ov14_021E7148(void) {
    // add r6, sp, #0
    // add r0, r1, r0
    // strb r0, [r6]
    // add r3, #0x20
    // add r6, sp, #0
    // tst r0, r1
    // add r2, r2, r1
    // strb r0, [r2, r1]
    ov14_021F3190(*((u32*)(r0 + 0x34)), *((u32*)(r1 + 8)), 1, r1);
    // strb r2, [r1, r0]
    ov14_021F3190(*((u32*)(r5 + 0x34)), *((u32*)(r4 + 4)), 1);
    // add r4, #0x20
}





void ov14_021E71C8(void) {
    // mvn r0, r0
}





void ov14_021E71E8(void) {
    Heap_AllocAtEnd(0xa, 0xc);
    // str r0, [r2, r1]
    // add r1, #0x21
    // add r2, r0, r1
    // add r1, r0, r1
    // str r0, [r6]
    *((u16*)(*((u32*)(*((u32*)(r4 + 0x34)) + 0x000088DC)) + 4)) = 0;
    *((u8*)(*((u32*)(*((u32*)(r4 + 0x34)) + 0x000088DC)) + 6)) = 0;
    // add r4, #0x21
    ov14_021E60C0(r4, *((u8*)(r4 + 0x1f)), *((u8*)r4));
    // add r1, #0x36
    GetBoxMonData(r0, 0, 0);
    ov14_021E71C8(((r0 << 0x10) >> 0x10));
    // lsl r1, r0
    *((u8*)(r6 + 6)) = (*((u8*)(r6 + 6)) | 1);
}





void ov14_021E7264(void) {
    // ldr r0, [r1, r0]
    // bx r3
    // nop
    // _021E7270: .word 0x000088DC
    // _021E7274: .word Heap_Free
}





void ov14_021E7278(void) {
    // str r0, [sp]
    _s32_div_f(*((u16*)(*((u32*)(*((u32*)(r0 + 0x34)) + 0x000088DC)) + 4)), 0x1e);
    _s32_div_f(r5, 0x1e);
    // add r0, #0x21
    ov14_021E60C0(r7, 0, r1);
    // sub r2, r5, r0
    // add r0, #0x21
    // sub r0, #0x1e
    ov14_021E60C0(r7, 0xff);
    GetBoxMonData(r0, 0xac, 0);
    // add r1, #0x36
    GetBoxMonData(r6, 0, 0);
    ov14_021E71C8(((r0 << 0x10) >> 0x10));
    // mvn r1, r1
    // lsl r1, r0
    // eor r0, r1
    // and r0, r2
    *((u8*)(r4 + 6)) = 0xff;
    *((u16*)(r4 + 4)) = (*((u16*)(r4 + 4)) + 1);
    // ldr r0, [sp]
    // str r0, [sp]
}





void ov14_021E7358(void) {
    // str r7, [r6]
    // and r0, r2
    // add r2, #0x13
    // and r0, r3
    // strb r0, [r2]
    // add r1, #0x36
}





void ov14_021E7468(void) {
}





void ov14_021E7470(void) {
    // str r1, [sp]
    ov14_021F5404();
    // add r3, r6, r4
    // add r2, #0x30
    // add r2, r2, r3
    sub_02019A60(*((u32*)(*((u32*)(r5 + 0x34)) + (0x2f << 4))), 0x10, *((u32*)(r5 + 0x34)), (r3 << 4));
    ov14_021E88A4(*((u32*)(*((u32*)(r5 + 0x34)) + (0x2f << 4))), *((u32*)(r5 + 0x34)));
    // ldr r1, [sp]
    ov14_021F36DC(r5, 2);
    // eor r1, r2
    ov14_021F2A18(*((u32*)(r5 + 0x34)), (*((u16*)(*((u32*)(r5 + 0x34)) + 0x000088D0)) + 2), 1);
    ov14_021F2A18(*((u32*)(r5 + 0x34)), (*((u16*)(*((u32*)(r5 + 0x34)) + 0x000088D0)) + 2), 0);
    // ldr r1, [sp]
    ov14_021F3D70(*((u32*)(r5 + 0x34)));
    // ldr r1, [sp]
    ov14_021F5368(r5);
    // ldr r1, [sp]
    ov14_021E895C(r5, *((u16*)(r1 + 0x10)));
}





void ov14_021E74F0(void) {
    ov14_021F5564(*((u16*)(r1 + 6)));
    // add r2, #0x30
    // add r2, r2, r3
    sub_02019A60(*((u32*)(*((u32*)(r5 + 0x34)) + (0x2f << 4))), 0x10, *((u32*)(r5 + 0x34)), (r0 << 4));
    // add r2, #0x30
    // add r2, r2, r3
    sub_02019A60(*((u32*)(*((u32*)(r5 + 0x34)) + (0x2f << 4))), 0x10, *((u32*)(r5 + 0x34)), ((r6 + 1) << 4));
    ov14_021F38B0(*((u32*)(r5 + 0x34)), *((u16*)(r4 + 6)));
    ov14_021E8944(*((u32*)(*((u32*)(r5 + 0x34)) + (0x2f << 4))), *((u32*)(r5 + 0x34)));
    ov14_021F36DC(r5, r4, 2);
    // eor r1, r2
    ov14_021F2A18(*((u32*)(r5 + 0x34)), (*((u16*)(*((u32*)(r5 + 0x34)) + 0x000088D0)) + 2), 1);
    ov14_021F2A18(*((u32*)(r5 + 0x34)), (*((u16*)(*((u32*)(r5 + 0x34)) + 0x000088D0)) + 2), 0);
    ov14_021F3D70(*((u32*)(r5 + 0x34)), r4);
    ov14_021F5368(r5, r4);
    ov14_021E895C(r5, *((u16*)(r4 + 0x10)));
}





void ov14_021E7588(void) {
}





void ov14_021E75F4(void) {
    ov14_021E60C0(*((u8*)(r0 + 0x1f)), r1);
    AcquireBoxMonLock();
    ov14_021E7358(r4);
    ov14_021F36DC(r5, r0, 2);
    // eor r1, r2
    ov14_021F2A18(*((u32*)(r5 + 0x34)), (*((u16*)(*((u32*)(r5 + 0x34)) + 0x000088D0)) + 2), 1);
    ov14_021F2A18(*((u32*)(r5 + 0x34)), (*((u16*)(*((u32*)(r5 + 0x34)) + 0x000088D0)) + 2), 0);
    ov14_021F3D70(*((u32*)(r5 + 0x34)), r6);
    ov14_021F5368(r5, r6);
    ov14_021E7468(r6);
    ReleaseBoxMonLock(r4, r7);
}





void ov14_021E765C(void) {
    // ldr r0, [r1, r0]
    // ldr r0, [r1, r0]
}





void ov14_021E76B8(void) {
}





void ov14_021E76D0(void) {
    // str r0, [sp]
    // add r1, #0x10
    // add r3, sp, #4
    // ldr r3, [sp, #4]
    // str r4, [sp]
    // str r0, [sp]
    // ldr r1, [sp, #4]
    // add r4, #0x15
    // add r1, r2, r1
}





void ov14_021E7720(void) {
}





void ov14_021E7740(void) {
    // str r0, [sp, #0x10]
    // str r2, [sp, #0x14]
    // str r3, [sp, #0x18]
    // str r0, [sp]
    // add r3, sp, #0x30
    GfGfxLoader_GetScrnData(0x13, 0xf, 1);
    // str r0, [sp, #0x28]
    // ldr r0, [sp, #0x30]
    // str r0, [sp, #0x24]
    // add r0, #0xc
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x48]
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x20]
    // ldr r0, [sp, #0x24]
    // add r6, r0, r1
    // ldr r0, [sp, #0x20]
    // ldr r4, [sp, #0x14]
    // and r1, r0
    // ldr r0, [sp, #0x1c]
    // add r2, sp, #0x2c
    // add r1, r0, r1
    // ldr r0, [sp, #0x18]
    // add r1, r0, r1
    // add r0, sp, #0x2c
    // strh r1, [r0]
    // str r7, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x10]
    LoadRectToBgTilemapRect(*((u32*)(*((u32*)(1 + 0x34)) + 0x14)), 3, ((r4 << 0x18) >> 0x18));
    // ldr r0, [sp, #0x20]
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x28]
    Heap_Free((((((r5 + 1) << 0x18) + 1) << 0x18) >> 0x18));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x10]
    FillBgTilemapRect(*((u32*)(*((u32*)(0x11 + 0x34)) + 0x14)), 3, 0x00001001, ((r4 << 0x18) >> 0x18));
}





void ov14_021E7808(void) {
    // ldr r2, [sp, #0x18]
    // ldr r0, [sp, #0x18]
    // str r0, [sp]
}





void ov14_021E783C(void) {
    // ldrsb r3, [r4, r2]
    // sub r3, #0x17
    // strb r3, [r4, r2]
    // ldrsb r3, [r4, r2]
    // add r3, #0x40
    // strb r3, [r4, r2]
    // ldrsb r3, [r4, r2]
    // add r3, #0x17
    // strb r3, [r4, r2]
    // ldrsb r3, [r4, r2]
    // sub r3, #0x40
    // strb r3, [r4, r2]
    // eor r2, r4
    // strb r2, [r6, r7]
    // str r5, [sp]
    // ldrsb r2, [r4, r2]
    ov14_021E7808((0x00000449 - 1), 0xb8);
}





void ov14_021E78AC(void) {
    // eor r2, r1
    // strb r2, [r0, r1]
    // ldrsb r2, [r2, r3]
    ov14_021E76D0(r0, r1, *((u32*)(r0 + 0x34)), 0xb8);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r2, #0x28
    PaletteData_LoadNarc(*((u32*)(*((u32*)(r5 + 0x34)) + 0x18)), 0x13, r7, 0xa);
    // str r4, [sp]
    // ldrsb r2, [r3, r2]
    ov14_021E7740(r5, r7, 0x00000448, r6);
    ScheduleBgTilemapBufferTransfer(*((u32*)(*((u32*)(r5 + 0x34)) + 0x14)), 3);
}





void ov14_021E7930(void) {
}





void ov14_021E7940(void) {
    // ldrb r3, [r2]
}





void ov14_021E7960(void) {
    ov14_021E7940(_021F7BBC);
    // sub r5, #0xc
    _s32_div_f(5, 0x18);
    // asr r5, r0, #0x10
    // sub r4, #0x28
    _s32_div_f(r4, 0x18);
    // asr r1, r0, #0x10
    // add r0, r5, r0
}





void ov14_021E79AC(void) {
    // add r4, #0x1e
}





void ov14_021E79D8(void) {
    ov14_021E7940(r0, r1, ov14_021F7BD8);
    // add r4, #0x80
}





void ov14_021E7A08(void) {
    // add r1, sp, #4
    // add r1, #2
    // add r2, sp, #4
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    // ldr r0, [sp, #0x20]
    // add r1, sp, #0
    // ldrsh r0, [r1, r0]
    // add r0, #8
    // ldrsh r0, [r1, r0]
    // add r0, #8
    // ldrsh r0, [r1, r0]
    // strh r0, [r1]
    // strh r5, [r4]
    // and r0, r2
    // add r3, sp, #0
    // ldrsh r0, [r3, r0]
    // ldrsh r2, [r3, r2]
    // add r1, #0x18
    // str r3, [r1]
    // sub r0, r2, r0
    // str r5, [r1]
    // sub r0, r0, r2
    // asr r0, r1, #2
    // add r0, r1, r0
    // asr r0, r0, #3
    // add r3, sp, #0
    // ldrsh r0, [r3, r0]
    // ldrsh r1, [r3, r1]
    // sub r0, r1, r0
    // sub r0, r0, r1
    // asr r0, r3, #2
    // add r0, r3, r0
    // asr r0, r0, #3
}





void ov14_021E7AD4(void) {
}





void ov14_021E7AE4(void) {
}





void ov14_021E7B04(void) {
    // add r0, r1, r0
    // sub r0, r1, r0
    // add r0, r1, r0
    // sub r0, r1, r0
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    // and r2, r0
}





void ov14_021E7B8C(void) {
}





void ov14_021E7B98(void) {
}





void ov14_021E7BA4(void) {
    // str r0, [r2, r1]
    // str r0, [sp]
    // str r0, [sp]
    // str r0, [sp]
    // str r0, [sp]
    // str r0, [sp]
    // str r0, [sp]
    // str r0, [sp]
    // str r0, [sp]
}





void ov14_021E7D7C(void) {
    // ldr r0, [r0, r1]
    // bx r3
    // nop
    // _021E7D88: .word sub_020195C0
}





void ov14_021E7D8C(void) {
}





void ov14_021E7D9C(void) {
    sub_02019B08(*((u32*)(*((u32*)(r0 + 0x34)) + (0x2f << 4))), 2);
    // add r1, r2, r1
    // add r1, r0, r1
    // lsl r2, r4
    // tst r2, r3
    // add r4, #0xb
    // add r4, #0x2b
    // and r2, r3
    // add r2, r2, r4
    // strh r2, [r1, r0]
}





void ov14_021E7DF8(void) {
}





void ov14_021E7E10(void) {
    // lsl r2, r1
    // eor r2, r3
    // str r2, [r5, r6]
    ov14_021E7D9C(1, *((u32*)(*((u32*)(r0 + 0x34)) + 0x000040C0)));
    sub_020196E8(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), 2, 0x15, 6);
}





void ov14_021E7E40(void) {
    // str r0, [sp]
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
}





void ov14_021E7EC0(void) {
}





void ov14_021E7ED0(void) {
}





void ov14_021E7EE0(void) {
    // add r2, sp, #4
    // add r2, #1
    // add r3, sp, #4
    // add r0, sp, #4
    // ldrsb r0, [r0, r2]
    // str r0, [sp]
    // add r5, sp, #4
    // ldrsb r0, [r5, r0]
    // ldrsb r3, [r5, r3]
    // add r3, #0xf
    // asr r3, r3, #0x18
    // ldrsb r0, [r0, r2]
    // sub r3, #0xb
    // str r0, [sp]
}





void ov14_021E7F4C(void) {
    // add r2, sp, #4
    // add r2, #1
    // add r3, sp, #4
    // add r0, sp, #4
    // ldrsb r1, [r0, r2]
    // sub r0, r0, r1
    // str r0, [sp]
    // add r5, sp, #4
    // ldrsb r0, [r5, r0]
    // ldrsb r3, [r5, r3]
    // add r3, #0xf
    // asr r3, r3, #0x18
    // ldrsb r1, [r0, r2]
    // sub r0, r0, r1
    // str r0, [sp]
}





void ov14_021E7FB8(void) {
    // add r2, sp, #4
    // add r2, #1
    // add r3, sp, #4
    // add r0, sp, #4
    // ldrsb r1, [r0, r2]
    // sub r0, r0, r1
    // str r0, [sp]
}





void ov14_021E7FEC(void) {
    // add r2, sp, #4
    // add r2, #1
    // add r3, sp, #4
    // add r0, sp, #4
    // ldrsb r0, [r0, r2]
    // str r0, [sp]
}





void ov14_021E8020(void) {
    // str r1, [sp]
    // str r0, [sp]
}





void ov14_021E8048(void) {
}





void ov14_021E805C(void) {
    // str r1, [sp]
    // str r0, [sp]
    // sub r2, #0xb
}





void ov14_021E8094(void) {
}





void ov14_021E80A8(void) {
    // add r2, sp, #0
    // add r3, sp, #0
    // add r2, #3
    // add r3, #2
    // add r2, sp, #0
    // add r2, #1
    // add r3, sp, #0
    // add r0, sp, #0
    // ldrsb r2, [r0, r1]
    // ldrsb r1, [r0, r1]
    // ldrsb r2, [r0, r1]
    // ldrsb r0, [r0, r1]
}





void ov14_021E813C(void) {
    // add r2, sp, #0
    // add r3, sp, #0
    // add r2, #3
    // add r3, #2
    // add r2, sp, #0
    // add r2, #1
    // add r3, sp, #0
    // add r1, sp, #0
    // ldrsb r2, [r1, r0]
    // ldrsb r0, [r1, r0]
    // ldrsb r2, [r1, r0]
    // ldrsb r0, [r1, r0]
}





void ov14_021E81A8(void) {
}





void ov14_021E81B4(void) {
    // str r0, [sp]
}





void ov14_021E81D8(void) {
    // str r0, [sp]
}





void ov14_021E81FC(void) {
    // ldr r0, [r1, r0]
}





void ov14_021E821C(void) {
}





void ov14_021E8234(void) {
}





void ov14_021E8248(void) {
}





void ov14_021E825C(void) {
    // ldr r0, [r1, r0]
}





void ov14_021E827C(void) {
}





void ov14_021E8294(void) {
}





void ov14_021E82A8(void) {
}





void ov14_021E82BC(void) {
    // ldr r0, [r1, r0]
}





void ov14_021E82DC(void) {
    // ldr r0, [r1, r0]
}





void ov14_021E82FC(void) {
}





void ov14_021E8314(void) {
}





void ov14_021E8328(void) {
    // str r0, [sp]
}





void ov14_021E834C(void) {
}





void ov14_021E8368(void) {
}





void ov14_021E8394(void) {
    // asr r3, r3, #0x18
}





void ov14_021E83C4(void) {
    // asr r3, r3, #0x18
}





void ov14_021E83F4(void) {
    // asr r3, r3, #0x18
}





void ov14_021E8434(void) {
    // add r2, sp, #4
    // add r2, #1
    // add r3, sp, #4
    // add r6, sp, #4
    // ldrsb r0, [r6, r0]
    // ldrsb r0, [r6, r7]
    // sub r0, #0x15
    // str r0, [sp]
    // mvn r2, r2
    // add r2, sp, #4
    // add r2, #1
    // add r3, sp, #4
    // add r0, sp, #4
    // ldrsb r0, [r0, r2]
    // sub r3, #0xc
    // sub r0, #0x15
    // str r0, [sp]
}





void ov14_021E84A4(void) {
    // add r2, sp, #4
    // add r2, #1
    // add r3, sp, #4
    // add r6, sp, #4
    // ldrsb r0, [r6, r0]
    // ldrsb r0, [r6, r0]
    // sub r0, r7, r0
    // str r0, [sp]
    // add r2, sp, #4
    // add r2, #1
    // add r3, sp, #4
    // add r0, sp, #4
    // ldrsb r1, [r0, r2]
    // sub r0, r0, r1
    // str r0, [sp]
}





void ov14_021E8514(void) {
}





void ov14_021E8544(void) {
}





void ov14_021E8560(void) {
    // str r0, [sp]
    // sub r2, #0xd
}





void ov14_021E8588(void) {
    // str r0, [sp]
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
    // ldr r0, [r1, r0]
    // ldr r0, [r1, r0]
    // ldr r0, [r1, r0]
    // ldr r0, [r1, r0]
    // ldr r0, [r1, r0]
}





void ov14_021E86E0(void) {
    // str r0, [sp]
}





void ov14_021E8704(void) {
}





void ov14_021E8718(void) {
}





void ov14_021E8740(void) {
    // ldr r0, [r1, r0]
}





void ov14_021E875C(void) {
    // str r0, [sp]
    // sub r2, #0xd
    // str r0, [sp]
    // str r0, [sp]
    // sub r2, #8
}





void ov14_021E87BC(void) {
    // str r1, [sp]
    // str r0, [sp]
    // str r0, [sp]
}





void ov14_021E87F4(void) {
    // ldr r0, [r1, r0]
    // ldr r0, [r1, r0]
}





void ov14_021E8824(void) {
    // str r1, [sp]
    // sub r2, #0x11
    sub_020198FC(*((u32*)(r0 + (0x2f << 4))), 0x10, 0x10, 0);
}





void ov14_021E884C(void) {
    // str r1, [sp]
    sub_020198FC(*((u32*)(r0 + (0x2f << 4))), 0x10, 1, 0);
}





void ov14_021E8874(void) {
    sub_0201980C(*((u32*)(r0 + (0x2f << 4))), 0x10);
    sub_020196E8(*((u32*)(r4 + (0x2f << 4))), 0x10, 0x14, 0xc);
}





void ov14_021E88A4(void) {
}





void ov14_021E88BC(void) {
    // add r2, sp, #4
    // add r2, #1
    // add r3, sp, #4
    // add r0, sp, #4
    // ldrsb r1, [r0, r2]
    // sub r1, r0, r1
    // sub r0, r0, r1
    // str r0, [sp]
    // sub r3, #0x11
}





void ov14_021E88F8(void) {
    // add r2, sp, #4
    // add r2, #1
    // add r3, sp, #4
    // add r0, sp, #4
    // ldrsb r1, [r0, r2]
    // sub r0, r0, r1
    // str r0, [sp]
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
}





void ov14_021E89B8(void) {
    Heap_Alloc(9, 0x3c);
    *((u32*)(r5 + 0x18)) = r0;
    // add r0, #0x21
    ov14_021E60C0(r5, *((u8*)(r5 + 0x1f)), 0);
    // str r0, [r4]
    *((u8*)(r4 + 0x11)) = 2;
    *((u8*)(r4 + 0x13)) = 0x1e;
    // add r0, #0x21
    // str r0, [r4]
    *((u8*)(r4 + 0x11)) = 1;
    Party_GetCount(*((u32*)(r5 + 8)));
    *((u8*)(r4 + 0x13)) = r0;
    // add r0, #0x21
    // sub r0, #0x1e
    *((u8*)(r4 + 0x14)) = *((u8*)r5);
    *((u32*)(r4 + 4)) = *((u32*)(r5 + 0x10));
    Save_PlayerData_GetProfile(*((u32*)*((u32*)r5)));
    sub_0208AD34(r4, r0);
    *((u8*)(r4 + 0x12)) = 0;
    sub_02089D40(r4, ov14_021F7D0C);
    *((u8*)(r4 + 0x16)) = 0;
    *((u8*)(r4 + 0x17)) = 0;
    *((u16*)(r4 + 0x18)) = 0;
    SaveArray_IsNatDexEnabled(*((u32*)*((u32*)r5)));
    *((u32*)(r4 + 0x1c)) = r0;
    Save_SpecialRibbons_Get(*((u32*)*((u32*)r5)));
    *((u32*)(r4 + 0x20)) = r0;
    *((u32*)(r4 + 0x24)) = 0;
    *((u32*)(r4 + 0x28)) = 0;
    sub_02088288(*((u32*)*((u32*)r5)));
    *((u32*)(r4 + 0x2c)) = r0;
    sub_0208828C(*((u32*)*((u32*)r5)));
    *((u32*)(r4 + 0x34)) = r0;
    *((u32*)(r4 + 0x30)) = *((u32*)(*((u32*)r5) + 4));
    OverlayManager_New(gOverlayTemplate_PokemonSummary, r4, 9);
    *((u32*)(r5 + 0x14)) = r0;
}





void ov14_021E8A7C(void) {
    // add r1, #0x27
    // add r1, #0x21
    // add r1, #0x21
    // strb r2, [r1]
    // add r2, #0x1e
    // add r1, #0x21
    // strb r2, [r1]
    // add r1, #0x21
}





void ov14_021E8ACC(void) {
    Save_Bag_Get(*((u32*)*((u32*)r0)));
    Bag_CreateView(ov14_021F7D14, 9);
    *((u32*)(r4 + 0x18)) = r0;
    // str r0, [sp]
    sub_0207789C(*((u32*)(r4 + 0x18)), *((u32*)*((u32*)r4)), 1, 0);
    HandleLoadOverlay(FS_OVERLAY_ID, 2);
    OverlayManager_New(ov15_022008B8, *((u32*)(r4 + 0x18)), 9);
    *((u32*)(r4 + 0x14)) = r0;
}





void ov14_021E8B1C(void) {
    UnloadOverlayByID(FS_OVERLAY_ID);
    BagView_GetItemId(*((u32*)(r4 + 0x18)));
    *((u16*)(r4 + 0x1c)) = r0;
    Heap_Free(*((u32*)(r4 + 0x18)));
}





void ov14_021E8B3C(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    NamingScreen_CreateArgs(9, 2, 0, 8);
    *((u32*)(r4 + 0x18)) = r0;
    // add r1, #0x25
    PCStorage_GetBoxName(*((u32*)(r4 + 4)), *((u8*)r4), *((u32*)(*((u32*)(r4 + 0x18)) + 0x18)));
    OverlayManager_New(gOverlayTemplate_NamingScreen, *((u32*)(r4 + 0x18)), 9);
    *((u32*)(r4 + 0x14)) = r0;
}





u32 ov14_021E8B80(void) {
}





void ov14_021E8BA4(void) {
    ov14_021E8514(*((u32*)(*((u32*)(r0 + 0x34)) + (0x2f << 4))));
    sub_02019978(*((u32*)(*((u32*)(r5 + 0x34)) + (0x2f << 4))), 8);
    sub_02019978(*((u32*)(*((u32*)(r5 + 0x34)) + (0x2f << 4))), 9);
    // str r0, [sp]
    sub_02019978(*((u32*)(*((u32*)(r5 + 0x34)) + (0x2f << 4))), 0xa);
    // str r0, [sp, #4]
    // add r0, sp, #0xc
    // add r1, sp, #8
    System_GetTouchHeldCoords(*((u16*)(r4 + 0x10)));
    // add r0, #0x24
    // asr r0, r0, #0x10
    // asr r1, r1, #0x10
    ov14_021E79D8((*((u32*)(*((u32*)(r5 + 0x34)) + 0x000040B8)) << 0x10), (*((u32*)(*((u32*)(r5 + 0x34)) + (0x000040B8 + 4))) << 0x10), (0x000040B8 + 4));
    // asr r0, r0, #0x10
    // asr r1, r1, #0x10
    ov14_021E7960((*((u32*)(*((u32*)(r5 + 0x34)) + 0x000040B8)) << 0x10), (*((u32*)(*((u32*)(r5 + 0x34)) + (0x000040B8 + 4))) << 0x10), (0x000040B8 + 4));
    // add r1, #0x21
    ov14_021E6CF8(r5, *((u8*)r5), r0);
    ov14_021F40E8(r5, 0);
    // tst r0, r6
    // add r1, #0x21
    ov14_021E70B0(r5, *((u8*)r5));
    // add r1, #0x21
    // strb r0, [r1]
    ov14_021E8434(*((u32*)(*((u32*)(r5 + 0x34)) + (0x2f << 4))), *((u32*)(r5 + 0x34)));
    ov14_021E8824(*((u32*)(r5 + 0x34)));
    *((u16*)(r4 + 0x10)) = 1;
    // add r1, #0x21
    // add r2, r0, r1
    // ldr r2, [sp, #8]
    // add r1, r0, r1
    // ldr r1, [sp, #0xc]
    // asr r2, r2, #0x10
    // sub r2, #8
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXY(*((u32*)((*((u8*)(r2 + 0x00004094)) << 2) + (0xbf << 2))), ((*((u8*)(r2 + 0x00004094)) << 2) << 0x10), ((r2 << 0x10) << 0x10));
    ov14_021F4174(r5);
    // ldr r2, [sp, #0xc]
    // str r2, [r1, r0]
    // ldr r2, [sp, #8]
    // str r2, [r1, r0]
    ov14_021E65C4(r5, *((u32*)(r5 + 0x34)));
    // ldr r0, [sp]
    // ldr r0, [sp, #4]
    ov14_021E7148(r5, *((u32*)(r4 + 0xc)));
    ov14_021F4174(r5);
    ov14_021F40E8(r5, *((u32*)(*((u32*)(r5 + 0x34)) + 0x000040C4)), *((u32*)(r5 + 0x34)));
    *((u16*)(r4 + 0x10)) = 0;
}





void ov14_021E8D20(void) {
    ov14_021E8514(*((u32*)(*((u32*)(r0 + 0x34)) + (0x2f << 4))));
    // add r1, #0x21
    // add r2, r0, r1
    // add r2, sp, #0
    // add r1, r0, r1
    // add r1, sp, #0
    // add r1, #2
    ManagedSprite_GetPositionXY(*((u32*)((*((u8*)(r2 + 0x00004094)) << 2) + (0xbf << 2))), (*((u8*)(r2 + 0x00004094)) << 2));
    ov14_021E80A8(r4);
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021E8D78: ; jump table
    // strb r2, [r0, r1]
    ov14_021F69F0(r4, 0x28, 2);
    ov14_021F3488(r4, 1, 0);
    // add r0, sp, #8
    // add r1, sp, #4
    System_GetTouchHeldCoords();
    // add r1, #0x21
    // add r3, sp, #0
    // add r2, r0, r1
    // ldrsh r2, [r3, r2]
    // add r1, r0, r1
    // ldrsh r1, [r3, r1]
    ManagedSprite_SetPositionXY(*((u32*)((*((u8*)(r2 + 0x00004094)) << 2) + (0xbf << 2))), 2, 0);
    // asr r0, r0, #0x10
    // asr r1, r1, #0x10
    ov14_021E7960((*((u32*)(*((u32*)(r4 + 0x34)) + 0x000040B8)) << 0x10), (*((u32*)(*((u32*)(r4 + 0x34)) + (0x000040B8 + 4))) << 0x10), (0x000040B8 + 4));
    // asr r0, r0, #0x10
    // asr r1, r1, #0x10
    ov14_021E79AC((*((u32*)(r1 + r2)) << 0x10), (*((u32*)(r1 + (r2 + 4))) << 0x10), ov14_021F7BF0);
    // add r1, #0x21
    ov14_021E6CF8(r4, *((u8*)r4), r0);
    ov14_021F40E8(r4, 0);
    // add r1, #0x21
    ov14_021E70B0(r4, *((u8*)r4));
    // add r1, #0x21
    // strb r0, [r1]
    // add r0, #0x21
    // str r2, [r1, r0]
    // add r0, #0x21
    ov14_021E6070(r4, *((u8*)r4), 0xac, 0);
    *((u16*)(r5 + 0x10)) = 3;
    ov14_021E7EE0(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021E7588(r4, 0xff);
    *((u16*)(r5 + 0x10)) = 1;
    ov14_021E7FEC(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021E8434(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021E8824(*((u32*)(r4 + 0x34)));
    *((u16*)(r5 + 0x10)) = 1;
    // ldr r2, [sp, #8]
    // ldr r1, [sp, #4]
    // strb r2, [r0, r1]
    ov14_021E7FB8(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)), 1);
    // add r1, #0x21
    // add r2, r0, r1
    // ldr r2, [sp, #4]
    // add r1, r0, r1
    // ldr r1, [sp, #8]
    // asr r2, r2, #0x10
    // sub r2, #8
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXY(*((u32*)((*((u8*)(r2 + 0x00004094)) << 2) + (0xbf << 2))), ((*((u8*)(r2 + 0x00004094)) << 2) << 0x10), ((r2 << 0x10) << 0x10));
    ov14_021F4174(r4);
    // ldr r2, [sp, #8]
    // str r2, [r1, r0]
    // ldr r2, [sp, #4]
    // str r2, [r1, r0]
    ov14_021E6814(r4, *((u32*)(r4 + 0x34)));
    ov14_021E7148(r4, *((u32*)(r5 + 0xc)));
    // add r0, #0x21
    // add r0, #0x21
    // strb r1, [r0]
    ov14_021F4174(r4, 0xff);
    ov14_021F40E8(r4, *((u32*)(*((u32*)(r4 + 0x34)) + 0x000040C4)), *((u32*)(r4 + 0x34)));
    *((u16*)(r5 + 0x10)) = 5;
    ov14_021E66F4(r4);
    ov14_021E7148(r4, *((u32*)(r5 + 0xc)));
    ov14_021E7EE0(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021E7588(r4, 0xff);
    // add r4, #0x21
    // strb r0, [r4]
    *((u16*)(r5 + 0x10)) = (*((u16*)(r5 + 0x10)) + 1);
    *((u16*)(r5 + 0x10)) = 5;
    ov14_021F3488(r4, 1, 1);
    // strb r0, [r2, r1]
    *((u16*)(r5 + 0x10)) = 0;
}





void ov14_021E8FD4(void) {
    sub_02019978(*((u32*)(*((u32*)(r0 + 0x34)) + (0x2f << 4))), 0xe);
    sub_02019978(*((u32*)(*((u32*)(r5 + 0x34)) + (0x2f << 4))), 0xf);
    // add r0, sp, #4
    // add r1, sp, #0
    System_GetTouchHeldCoords(*((u16*)(r4 + 0x10)));
    // add r0, #0x24
    // asr r0, r0, #0x10
    // asr r1, r1, #0x10
    ov14_021E79D8((*((u32*)(*((u32*)(r5 + 0x34)) + 0x000040B8)) << 0x10), (*((u32*)(*((u32*)(r5 + 0x34)) + (0x000040B8 + 4))) << 0x10), (0x000040B8 + 4));
    // asr r0, r0, #0x10
    // asr r1, r1, #0x10
    ov14_021E7960((*((u32*)(*((u32*)(r5 + 0x34)) + 0x000040B8)) << 0x10), (*((u32*)(*((u32*)(r5 + 0x34)) + (0x000040B8 + 4))) << 0x10), (0x000040B8 + 4));
    // asr r0, r0, #0x10
    // asr r1, r1, #0x10
    ov14_021E79AC((*((u32*)(*((u32*)(r5 + 0x34)) + 0x000040B8)) << 0x10), (*((u32*)(*((u32*)(r5 + 0x34)) + (0x000040B8 + 4))) << 0x10), ov14_021F7C08);
    // add r1, #0x21
    ov14_021E6CF8(r5, *((u8*)r5), r0);
    ov14_021F40E8(r5, 0);
    // tst r0, r6
    // add r1, #0x21
    ov14_021E70B0(r5, *((u8*)r5));
    // add r1, #0x21
    // strb r0, [r1]
    ov14_021E884C(*((u32*)(r5 + 0x34)), r5);
    *((u16*)(r4 + 0x10)) = (*((u16*)(r4 + 0x10)) + 1);
    // add r1, #0x21
    // add r2, r0, r1
    // ldr r2, [sp]
    // add r1, r0, r1
    // ldr r1, [sp, #4]
    // asr r2, r2, #0x10
    // sub r2, #8
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXY(*((u32*)((*((u8*)(r2 + 0x00004094)) << 2) + (0xbf << 2))), ((*((u8*)(r2 + 0x00004094)) << 2) << 0x10), ((r2 << 0x10) << 0x10));
    ov14_021F4174(r5);
    // ldr r2, [sp, #4]
    // str r2, [r1, r0]
    // ldr r2, [sp]
    // str r2, [r1, r0]
    // add r0, #0xe8
    // tst r0, r1
    // add r0, #0xe4
    Party_GetCount(*((u32*)(r5 + 8)), *((u32*)*((u32*)(r4 + 0xc))));
    // add r6, #0xe4
    // sub r1, #0x1e
    ov14_021E8620(*((u32*)(*((u32*)(r5 + 0x34)) + (0x2f << 4))), *((u32*)(r5 + 0x34)));
    ov14_021E8620(*((u32*)(*((u32*)(r5 + 0x34)) + (0x2f << 4))), *((u32*)(r5 + 0x34)));
    *((u16*)(r4 + 0x10)) = (*((u16*)(r4 + 0x10)) + 1);
    ov14_021E65C4(r5);
    ov14_021E7148(r5, *((u32*)(r4 + 0xc)));
    ov14_021F4174(r5);
    ov14_021F40E8(r5, 0);
    *((u16*)(r4 + 0x10)) = 0;
}





void ov14_021E9194(void) {
    // add r1, #0x21
}





void ov14_021E91E0(void) {
    // add r1, #0x21
    // add r2, #0x1e
}





void ov14_021E9234(void) {
    // add r1, sp, #0
    // add r2, sp, #4
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r1, #0x21
    // ldr r2, [sp, #4]
    // add r5, #0x21
    // strb r0, [r5]
    // add r1, #0xe4
}





void ov14_021E92AC(void) {
    // ldr r0, [r1, r0]
    // ldr r0, [r1, r0]
    // ldr r0, [r1, r0]
    // ldr r0, [r1, r0]
    // ldr r0, [r1, r0]
    // ldr r0, [r1, r0]
    // ldr r0, [r1, r0]
    // ldr r0, [r1, r0]
}





void ov14_021E9370(void) {
    // mvn r1, r1
}





void ov14_021E9434(void) {
}





void ov14_021E9450(void) {
    // ldr r0, [r1, r0]
    // ldr r0, [r1, r0]
    // ldr r0, [r1, r0]
    // ldr r0, [r1, r0]
}





void ov14_021E94A8(void) {
    // ldr r0, [r1, r0]
    // bx r3
    // nop
    // _021E94B8: .word sub_02019978
}





void ov14_021E94BC(void) {
    // ldr r0, [r1, r0]
    // ldr r0, [r1, r0]
    // ldr r0, [r1, r0]
    // ldr r0, [r1, r0]
}





void ov14_021E9518(void) {
}





void ov14_021E952C(void) {
    // ldr r0, [r1, r0]
}





void ov14_021E954C(void) {
}





void ov14_021E9554(void) {
    // ldr r0, [r1, r0]
    // ldr r0, [r1, r0]
}





void ov14_021E9590(void) {
    // mvn r1, r1
}





void ov14_021E95B4(void) {
    // ldr r0, [r1, r0]
    // bx r3
    // nop
    // _021E95C4: .word sub_02019978
}





void ov14_021E95C8(void) {
    // ldr r0, [r4, r0]
}





void ov14_021E9604(void) {
    // ldr r0, [r1, r0]
    // bx r3
    // nop
    // _021E9614: .word sub_02019978
}





void ov14_021E9618(void) {
    // ldr r0, [r1, r0]
    // ldr r0, [r1, r0]
    // ldr r0, [r1, r0]
}





void ov14_021E9660(void) {
    // ldr r0, [r1, r0]
}





void ov14_021E96A8(void) {
    // mvn r1, r1
}





void ov14_021E96C8(void) {
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
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r5, [sp, #8]
    // str r1, [sp, #0xc]
    // str r1, [sp, #0x10]
    // str r2, [sp, #0x14]
    // str r0, [sp, #0x18]
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r5, [sp, #8]
    // str r1, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r2, [sp, #0x14]
    // str r0, [sp, #0x18]
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r5, [sp, #8]
    // str r1, [sp, #0xc]
    // str r1, [sp, #0x10]
    // str r2, [sp, #0x14]
    // str r3, [sp, #0x18]
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r5, [sp, #8]
    // str r1, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r2, [sp, #0x14]
    // str r0, [sp, #0x18]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r5, [sp, #8]
    // str r1, [sp, #0xc]
    // str r1, [sp, #0x10]
    // str r2, [sp, #0x14]
    // str r0, [sp, #0x18]
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r5, [sp, #8]
    // str r1, [sp, #0xc]
    // str r1, [sp, #0x10]
    // str r2, [sp, #0x14]
    // str r0, [sp, #0x18]
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r5, [sp, #8]
    // str r1, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r2, [sp, #0x14]
    // str r0, [sp, #0x18]
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r5, [sp, #8]
    // str r1, [sp, #0xc]
    // str r1, [sp, #0x10]
    // str r2, [sp, #0x14]
    // str r0, [sp, #0x18]
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r5, [sp, #8]
    // str r1, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r2, [sp, #0x14]
    // str r0, [sp, #0x18]
}





void ov14_021E98AC(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // sub r0, r0, r1
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
}





void ov14_021E9920(void) {
    // ldr r0, [r4, r0]
    // ldr r0, [r1, r0]
    // ldr r0, [r4, r0]
}





void ov14_021E9970(void) {
    // ldr r0, [r1, r0]
    // ldr r0, [r1, r0]
}





void ov14_021E99A0(void) {
    // ldr r0, [r4, r0]
    // ldr r0, [r1, r0]
    // ldr r0, [r4, r0]
}





void ov14_021E99F0(void) {
    // ldr r0, [r1, r0]
    // ldr r0, [r1, r0]
}





void ov14_021E9A24(void) {
    // add r0, #0x21
    // add r2, sp, #4
    // add r1, r5, r0
    // add r1, r5, r0
    // add r1, sp, #4
    // add r1, #2
    ManagedSprite_GetPositionXY(*((u32*)(r1 + (0xbf << 2))));
    ov14_021E8514(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021E813C(r4);
    sub_02019978(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), 0xa);
    // str r0, [sp]
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021E9A8C: ; jump table
    *((u16*)(r5 + 0x10)) = 1;
    // strb r2, [r0, r1]
    ov14_021F69F0(r4, 0x28, 2);
    // add r0, sp, #0xc
    // add r1, sp, #8
    System_GetTouchHeldCoords();
    // add r1, #0x21
    // add r3, sp, #4
    // add r2, r0, r1
    // ldrsh r2, [r3, r2]
    // add r1, r0, r1
    // ldrsh r1, [r3, r1]
    ManagedSprite_SetPositionXY(*((u32*)((*((u8*)(r2 + 0x00004094)) << 2) + (0xbf << 2))), 2, 0);
    // asr r0, r0, #0x10
    // asr r1, r1, #0x10
    ov14_021E7960((*((u32*)(*((u32*)(r4 + 0x34)) + 0x000040B8)) << 0x10), (*((u32*)(*((u32*)(r4 + 0x34)) + (0x000040B8 + 4))) << 0x10), (0x000040B8 + 4));
    // add r1, #0x21
    ov14_021E6F3C(r4, *((u8*)r4), r0);
    ov14_021F40E8(r4, 0);
    // add r1, #0x21
    ov14_021E70B0(r4, *((u8*)r4));
    // add r1, #0x21
    // strb r0, [r1]
    // add r0, #0x21
    *((u16*)(r5 + 0x10)) = 5;
    ov14_021E7FEC(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021E8434(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021E8824(*((u32*)(r4 + 0x34)));
    *((u16*)(r5 + 0x10)) = 2;
    // ldr r1, [sp]
    // ldr r2, [sp, #0xc]
    // ldr r1, [sp, #8]
    // strb r2, [r0, r1]
    ov14_021E7FB8(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)), 1);
    // add r1, #0x21
    // add r2, r0, r1
    // ldr r2, [sp, #8]
    // add r1, r0, r1
    // ldr r1, [sp, #0xc]
    // asr r2, r2, #0x10
    // sub r2, #8
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXY(*((u32*)((*((u8*)(r2 + 0x00004094)) << 2) + (0xbf << 2))), ((*((u8*)(r2 + 0x00004094)) << 2) << 0x10), ((r2 << 0x10) << 0x10));
    ov14_021F4174(r4);
    // ldr r2, [sp, #0xc]
    // str r2, [r1, r0]
    // ldr r2, [sp, #8]
    // str r2, [r1, r0]
    ov14_021E65C4(r4, *((u32*)(r4 + 0x34)));
    ov14_021E7148(r4, *((u32*)(r5 + 0xc)));
    ov14_021F4174(r4);
    ov14_021F40E8(r4, *((u32*)(*((u32*)(r4 + 0x34)) + 0x000040C4)), *((u32*)(r4 + 0x34)));
    *((u16*)(r5 + 0x10)) = 7;
    ov14_021E66F4(r4);
    ov14_021E7148(r4, *((u32*)(r5 + 0xc)));
    ov14_021E765C(r4);
    ov14_021E7EE0(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    // add r4, #0x21
    // strb r0, [r4]
    *((u16*)(r5 + 0x10)) = 6;
    *((u16*)(r5 + 0x10)) = 7;
    ov14_021F3488(r4, 1, 1);
    ov14_021F3488(r4, 2, 0);
    // strb r0, [r2, r1]
    *((u16*)(r5 + 0x10)) = 0;
}





void ov14_021E9C88(void) {
    ov14_021E8514(*((u32*)(*((u32*)(r0 + 0x34)) + (0x2f << 4))));
    // str r0, [sp]
    ov14_021E80A8(r4);
    sub_02019978(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), 0xa);
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021E9CC8: ; jump table
    *((u16*)(r5 + 0x10)) = 1;
    // strb r2, [r0, r1]
    ov14_021F69F0(r4, 0x28, 2);
    // add r0, sp, #0xc
    // add r1, sp, #8
    System_GetTouchHeldCoords();
    // asr r0, r0, #0x10
    // asr r1, r1, #0x10
    ov14_021E79AC((*((u32*)(*((u32*)(r4 + 0x34)) + 0x000040B8)) << 0x10), (*((u32*)(*((u32*)(r4 + 0x34)) + (0x000040B8 + 4))) << 0x10), ov14_021F7C08);
    // add r1, #0x21
    ov14_021E7034(r4, *((u8*)r4), r0);
    ov14_021F40E8(r4, 0);
    // add r1, #0x21
    ov14_021E70B0(r4, *((u8*)r4));
    // add r1, #0x21
    // strb r0, [r1]
    // add r0, #0x21
    *((u16*)(r5 + 0x10)) = 5;
    ov14_021E7F4C(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    *((u16*)(r5 + 0x10)) = 2;
    // ldr r0, [sp]
    // add r0, #0x21
    // add r3, #0x22
    // add r1, sp, #4
    // add r1, #2
    // add r2, sp, #4
    ov14_021F2F88(*((u8*)r4), *((u32*)(r4 + 0x34)), *((u8*)r4));
    // add r1, sp, #4
    // ldrsh r3, [r1, r0]
    // ldr r2, [sp, #0xc]
    // sub r0, #0x10
    // add r3, #0x10
    // ldrsh r2, [r1, r0]
    // ldr r1, [sp, #8]
    // sub r0, #0x10
    // add r2, #0x10
    // strb r2, [r1, r0]
    ov14_021E7ED0(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)), 1);
    ov14_021E7EE0(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    // add r1, #0x21
    // add r2, r0, r1
    // ldr r2, [sp, #8]
    // add r1, r0, r1
    // ldr r1, [sp, #0xc]
    // asr r2, r2, #0x10
    // sub r2, #8
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXY(*((u32*)((*((u8*)(r2 + 0x00004094)) << 2) + (0xbf << 2))), ((*((u8*)(r2 + 0x00004094)) << 2) << 0x10), ((r2 << 0x10) << 0x10));
    ov14_021F4174(r4);
    // ldr r2, [sp, #0xc]
    // str r2, [r1, r0]
    // ldr r2, [sp, #8]
    // str r2, [r1, r0]
    ov14_021E8434(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021E8824(*((u32*)(r4 + 0x34)));
    *((u16*)(r5 + 0x10)) = 3;
    ov14_021E65C4(r4);
    // ldr r0, [sp]
    ov14_021E7148(r4, *((u32*)(r5 + 0xc)));
    ov14_021F4174(r4);
    ov14_021F40E8(r4, *((u32*)(*((u32*)(r4 + 0x34)) + 0x000040C4)), *((u32*)(r4 + 0x34)));
    *((u16*)(r5 + 0x10)) = 8;
    *((u16*)(r5 + 0x10)) = 4;
    ov14_021E65C4(r4);
    ov14_021E7148(r4, *((u32*)(r5 + 0xc)));
    // add r0, #0x21
    // strb r1, [r0]
    ov14_021E7F4C(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    *((u16*)(r5 + 0x10)) = (*((u16*)(r5 + 0x10)) + 1);
    ov14_021E765C(r4);
    ov14_021E8328(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    *((u16*)(r5 + 0x10)) = (*((u16*)(r5 + 0x10)) + 1);
    *((u16*)(r5 + 0x10)) = 8;
    ov14_021F3488(r4, 1, 0);
    ov14_021F3488(r4, 2, 0);
    // strb r0, [r2, r1]
    *((u16*)(r5 + 0x10)) = 0;
}





void ov14_021E9F20(void) {
    sub_02019978(*((u32*)(*((u32*)(r0 + 0x34)) + (0x2f << 4))), 0xf);
    ManagedSprite_SetPositionXY(*((u32*)(*((u32*)(r5 + 0x34)) + (0x32 << 4))), *((u8*)r4), *((u8*)(r4 + 1)));
    // add r2, #8
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXY(*((u32*)(*((u32*)(r5 + 0x34)) + (0xca << 2))), *((u8*)r4), (*((u8*)(r4 + 1)) << 0x10));
    // add r5, #0x21
    // add r2, r0, r1
    // add r1, r0, r1
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXY(*((u32*)((*((u8*)(r2 + 0x00004094)) << 2) + (0xbf << 2))), *((u8*)r4), ((*((u8*)(r4 + 1)) + 4) << 0x10));
    // and r1, r0
    *((u32*)(r4 + 4)) = (((r2 - 1) << 2) | r1);
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    ManagedSprite_GetPositionXY(*((u32*)(*((u32*)(r5 + 0x34)) + (0x32 << 4))), *((u32*)(r5 + 0x34)));
    // add r1, sp, #0
    // ldrsh r2, [r1, r0]
    // add r0, r2, r0
    // ldrsh r2, [r1, r0]
    // sub r0, r2, r0
    *((u16*)(r1 + 2)) = *((u8*)(r4 + 2));
    // add r1, sp, #0
    // ldrsh r2, [r1, r0]
    // add r0, r2, r0
    // ldrsh r2, [r1, r0]
    // sub r0, r2, r0
    // strh r0, [r1]
    // add r3, sp, #0
    // ldrsh r1, [r3, r1]
    // ldrsh r2, [r3, r2]
    ManagedSprite_SetPositionXY(*((u32*)(*((u32*)(r5 + 0x34)) + (0x32 << 4))), 2, 0);
    // add r3, sp, #0
    // ldrsh r2, [r3, r2]
    // add r2, #8
    // ldrsh r1, [r3, r1]
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXY(*((u32*)(*((u32*)(r5 + 0x34)) + (0xca << 2))), 2, (0 << 0x10));
    // add r5, #0x21
    // add r2, r0, r1
    // ldrsh r2, [r3, r2]
    // add r1, r0, r1
    // ldrsh r1, [r3, r1]
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXY(*((u32*)((*((u8*)(r2 + 0x00004094)) << 2) + (0xbf << 2))), 2, ((0 + 4) << 0x10));
}





void ov14_021EA068(void) {
    // ldr r0, [r5, r0]
    // ldr r0, [r5, r0]
}





void ov14_021EA0B8(void) {
    // ldr r0, [r4, r0]
    // ldr r0, [r1, r0]
    // ldr r0, [r1, r0]
    // ldr r0, [r1, r0]
}





void ov14_021EA130(void) {
    // ldr r0, [r5, r0]
    // ldr r0, [r5, r0]
}





void ov14_021EA180(void) {
    // ldr r0, [r4, r0]
    // ldr r0, [r1, r0]
    // ldr r0, [r1, r0]
}





void ov14_021EA1F0(void) {
    ov14_021F29E4(*((u32*)(r0 + 0x34)), 9, 0xa);
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    ManagedSprite_GetPositionXY(*((u32*)(*((u32*)(r4 + 0x34)) + (0x32 << 4))), *((u32*)(r4 + 0x34)));
    // add r1, #0x21
    // add r3, sp, #0
    // add r2, r0, r1
    // ldrsh r2, [r3, r2]
    // add r1, r0, r1
    // ldrsh r1, [r3, r1]
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXY(*((u32*)((*((u8*)(r2 + 0x00004094)) << 2) + (0xbf << 2))), 2, ((0 + 4) << 0x10));
    // add r4, #0x21
    ov14_021F3190(*((u32*)(r4 + 0x34)), *((u8*)r4), 0);
}





void ov14_021EA254(void) {
    sub_02019978(*((u32*)(*((u32*)(r0 + 0x34)) + (0x2f << 4))), 0xf);
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021EA27A: ; jump table
    ov14_021F29E4(*((u32*)(r5 + 0x34)), 9, 9);
    *((u16*)(r4 + 0x10)) = (*((u16*)(r4 + 0x10)) + 1);
    *((u16*)(r4 + 0x12)) = 0;
    *((u16*)(r4 + 0x10)) = (*((u16*)(r4 + 0x10)) + 1);
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    ManagedSprite_GetPositionXY(*((u32*)(*((u32*)(r5 + 0x34)) + (0x32 << 4))), *((u32*)(r5 + 0x34)));
    // add r3, sp, #0
    // ldrsh r2, [r3, r2]
    // ldrsh r1, [r3, r1]
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXY(*((u32*)(*((u32*)(r5 + 0x34)) + (0x32 << 4))), 2, ((0 + 2) << 0x10));
    *((u16*)(r4 + 0x12)) = (*((u16*)(r4 + 0x12)) + 1);
    ov14_021F29E4(*((u32*)(r5 + 0x34)), 9, 0xa);
    *((u16*)(r4 + 0x10)) = (*((u16*)(r4 + 0x10)) + 1);
    *((u16*)(r4 + 0x12)) = 0;
    *((u16*)(r4 + 0x10)) = 0;
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    ManagedSprite_GetPositionXY(*((u32*)(*((u32*)(r5 + 0x34)) + (0x32 << 4))), *((u32*)(r5 + 0x34)));
    // add r3, sp, #0
    // ldrsh r2, [r3, r2]
    // ldrsh r1, [r3, r1]
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXY(*((u32*)(*((u32*)(r5 + 0x34)) + (0x32 << 4))), 2, ((0 - 2) << 0x10));
    // add r1, #0x21
    // add r2, r0, r1
    // add r2, sp, #0
    // add r1, r0, r6
    // add r1, sp, #0
    // add r1, #2
    ManagedSprite_GetPositionXY(*((u32*)(*((u8*)(r2 + 0x00004094)) + (0xbf << 2))), *((u8*)(r2 + 0x00004094)));
    // add r3, sp, #0
    // add r1, r0, r6
    // ldrsh r2, [r3, r2]
    // ldrsh r1, [r3, r1]
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXY(*((u32*)(r1 + (0xbf << 2))), 2, ((0 - 2) << 0x10));
    *((u16*)(r4 + 0x12)) = (*((u16*)(r4 + 0x12)) + 1);
}





void ov14_021EA378(void) {
    sub_02019978(*((u32*)(*((u32*)(r0 + 0x34)) + (0x2f << 4))), 0xf);
    ov14_021F29E4(*((u32*)(r5 + 0x34)), 9, 9);
    // add r6, #0x5b
    // add r1, #0x21
    ov14_021E6CF8(r5, *((u8*)r5), *((u8*)(*((u32*)(r5 + 0x34)) + 0x0000044C)));
    // tst r0, r6
    // add r1, #0x21
    ov14_021E70B0(r5, *((u8*)r5));
    // add r1, #0x21
    // strb r0, [r1]
    *((u16*)(r4 + 0x10)) = (*((u16*)(r4 + 0x10)) + 1);
    ov14_021E65C4(r5, r5);
    ov14_021E7148(r5, *((u32*)(r4 + 0xc)));
    ov14_021F29E4(*((u32*)(r5 + 0x34)), 9, 8);
    *((u16*)(r4 + 0x10)) = 0;
}





void ov14_021EA408(void) {
    ov14_021F391C(*((u32*)(r0 + 0x34)), 1);
    ov14_021F29E4(*((u32*)(r5 + 0x34)), 0xb, 1);
    ov14_021F2A18(*((u32*)(r5 + 0x34)), 0xb, 1);
    *((u16*)(r4 + 0x10)) = (*((u16*)(r4 + 0x10)) + 1);
    sub_02019978(*((u32*)(*((u32*)(r5 + 0x34)) + (0x2f << 4))), 8);
    sub_02019978(*((u32*)(*((u32*)(r5 + 0x34)) + (0x2f << 4))), 9);
    sub_02019978(*((u32*)(*((u32*)(r5 + 0x34)) + (0x2f << 4))), 0xa);
    *((u16*)(r4 + 0x10)) = (*((u16*)(r4 + 0x10)) + 1);
    ov14_021E9F20((*((u16*)(r4 + 0x10)) + 1));
    ov14_021E8514(*((u32*)(*((u32*)(r5 + 0x34)) + (0x2f << 4))), *((u32*)(r5 + 0x34)));
    ov14_021F391C(*((u32*)(r5 + 0x34)), 0);
    ov14_021F3B3C(*((u32*)(r5 + 0x34)));
    *((u16*)(r4 + 0x10)) = 0;
}





void ov14_021EA4C8(void) {
    ov14_021E8514(*((u32*)(*((u32*)(r0 + 0x34)) + (0x2f << 4))));
    sub_02019978(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), 8);
    sub_02019978(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), 9);
    sub_02019978(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), 0xa);
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021EA51A: ; jump table
    ov14_021F391C(*((u32*)(r4 + 0x34)), 1);
    ov14_021F29E4(*((u32*)(r4 + 0x34)), 0xb, 1);
    ov14_021F2A18(*((u32*)(r4 + 0x34)), 0xb, 1);
    *((u16*)(r5 + 0x10)) = 1;
    ov14_021E8434(*((u32*)(1 + (0x2f << 4))), (0x2f << 4));
    *((u16*)(r5 + 0x10)) = 0xa;
    ov14_021F2A04(*((u32*)(r4 + 0x34)), 0xb);
    ov14_021F391C(*((u32*)(r4 + 0x34)), 0);
    ov14_021F3B3C(*((u32*)(r4 + 0x34)));
    *((u16*)(r5 + 0x10)) = 2;
    // add r0, sp, #4
    // add r1, sp, #0
    System_GetTouchHeldCoords(2);
    // asr r0, r0, #0x10
    // asr r1, r1, #0x10
    ov14_021E7960((*((u32*)(*((u32*)(r4 + 0x34)) + 0x000040B8)) << 0x10), (*((u32*)(*((u32*)(r4 + 0x34)) + (0x000040B8 + 4))) << 0x10), (0x000040B8 + 4));
    // add r0, #0x21
    // add r1, #0x21
    ov14_021E6AA0(r4, *((u8*)r4), *((u8*)r4));
    // add r0, #0x21
    // add r0, #0x21
    ov14_021E8434(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021E88F8(*((u32*)(r1 + (0x2f << 4))));
    ov14_021E7AD4(r4, r7, r6, 2);
    *((u16*)(r5 + 0x10)) = 3;
    // ldr r1, [sp, #4]
    // ldr r2, [sp]
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    ov14_021F395C(*((u32*)(r4 + 0x34)), (r1 << 0x10), (r2 << 0x10));
    ov14_021F3B5C(*((u32*)(r4 + 0x34)));
    // ldr r2, [sp, #4]
    // str r2, [r1, r0]
    // ldr r2, [sp]
    // str r2, [r1, r0]
    ov14_021E7B8C(r4, *((u32*)(r4 + 0x34)));
    *((u16*)(r5 + 0x10)) = 0xa;
    ov14_021F391C(*((u32*)(r4 + 0x34)), 0);
    ov14_021F3B3C(*((u32*)(r4 + 0x34)));
    *((u16*)(r5 + 0x10)) = 0;
}





void ov14_021EA674(void) {
    ov14_021F391C(*((u32*)(r0 + 0x34)), 1);
    ov14_021F29E4(*((u32*)(r5 + 0x34)), 0xb, 2);
    *((u16*)(r4 + 0x10)) = (*((u16*)(r4 + 0x10)) + 1);
    ov14_021E9F20(r5);
    ov14_021E9434(r5);
    *((u16*)(r4 + 0x10)) = (*((u16*)(r4 + 0x10)) + 1);
    sub_02019978(*((u32*)(r4 + (0x2f << 4))), 8);
    sub_02019978(*((u32*)(*((u32*)(r5 + 0x34)) + (0x2f << 4))), 9);
    sub_02019978(*((u32*)(*((u32*)(r5 + 0x34)) + (0x2f << 4))), 0xa);
    ov14_021F391C(*((u32*)(r5 + 0x34)), 0);
    ov14_021F2A18(*((u32*)(r5 + 0x34)), 0xb, 0);
    *((u16*)(r4 + 0x10)) = 0;
}





void ov14_021EA728(void) {
    // add r0, #0x21
    // add r0, #0x21
    // strb r2, [r0]
}





void ov14_021EA778(void) {
    sub_02019978(*((u32*)(*((u32*)(r0 + 0x34)) + (0x2f << 4))), 0xe);
    sub_02019978(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), 0xf);
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021EA7AC: ; jump table
    ov14_021F391C(*((u32*)(r4 + 0x34)), 1);
    ov14_021F29E4(*((u32*)(r4 + 0x34)), 0xb, 1);
    ov14_021F2A18(*((u32*)(r4 + 0x34)), 0xb, 1);
    *((u16*)(r5 + 0x10)) = 1;
    ov14_021F2A04(*((u32*)(r4 + 0x34)), 0xb);
    ov14_021F391C(*((u32*)(r4 + 0x34)), 0);
    ov14_021F3B3C(*((u32*)(r4 + 0x34)));
    *((u16*)(r5 + 0x10)) = 2;
    // add r0, sp, #4
    // add r1, sp, #0
    System_GetTouchHeldCoords(2);
    // asr r0, r0, #0x10
    // asr r1, r1, #0x10
    ov14_021E7960((*((u32*)(*((u32*)(r4 + 0x34)) + 0x000040B8)) << 0x10), (*((u32*)(*((u32*)(r4 + 0x34)) + (0x000040B8 + 4))) << 0x10), (0x000040B8 + 4));
    // asr r0, r0, #0x10
    // asr r1, r1, #0x10
    ov14_021E79AC((*((u32*)(*((u32*)(r4 + 0x34)) + 0x000040B8)) << 0x10), (*((u32*)(*((u32*)(r4 + 0x34)) + (0x000040B8 + 4))) << 0x10), ov14_021F7C08);
    // add r0, #0x21
    // add r1, #0x21
    ov14_021E6AA0(r4, *((u8*)r4), *((u8*)r4));
    // add r0, #0x21
    ov14_021E7AD4(r4, r7, *((u8*)r4), 2);
    *((u16*)(r5 + 0x10)) = 3;
    // ldr r1, [sp, #4]
    // ldr r2, [sp]
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    ov14_021F395C(*((u32*)(r4 + 0x34)), (r1 << 0x10), (r2 << 0x10));
    ov14_021F3B5C(*((u32*)(r4 + 0x34)));
    // ldr r2, [sp, #4]
    // str r2, [r1, r0]
    // ldr r2, [sp]
    // str r2, [r1, r0]
    ov14_021E7B8C(r4, *((u32*)(r4 + 0x34)));
    PlaySE(0x000005EA);
    ov14_021E8620(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    *((u16*)(r5 + 0x10)) = 4;
    ov14_021F391C(*((u32*)(r4 + 0x34)), 1);
    ov14_021F29E4(*((u32*)(r4 + 0x34)), 0xb, 2);
    ov14_021F40E8(r4, 0);
    *((u16*)(r5 + 0x10)) = 5;
    ov14_021F2A04(*((u32*)(r4 + 0x34)), 0xb);
    ov14_021F2A18(*((u32*)(r4 + 0x34)), 0xb, 0);
    ov14_021F391C(*((u32*)(r4 + 0x34)), 0);
    *((u16*)(r5 + 0x10)) = 6;
    *((u16*)(r5 + 0x10)) = 0;
}





void ov14_021EA928(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _021EA940: ; jump table
    ov14_021F391C(*((u32*)(r0 + 0x34)), 1);
    ov14_021F29E4(*((u32*)(r5 + 0x34)), 0xb, 1);
    ov14_021F2A18(*((u32*)(r5 + 0x34)), 0xb, 1);
    *((u16*)(r4 + 0x10)) = 1;
    ov14_021F2A04(r4, 0xb);
    ov14_021F391C(*((u32*)(r5 + 0x34)), 0);
    *((u16*)(r4 + 0x10)) = 2;
    // add r1, #0x21
    // add r5, #0x21
    // strb r2, [r5]
    ov14_021E7AD4(2, *((u8*)r5), *((u8*)r5), 2);
    *((u16*)(r4 + 0x10)) = 3;
    ov14_021E7B8C(3);
    PlaySE(0x000005EA);
    *((u16*)(r4 + 0x10)) = 4;
    ov14_021F391C(r4, 1);
    ov14_021F29E4(*((u32*)(r5 + 0x34)), 0xb, 2);
    *((u16*)(r4 + 0x10)) = 5;
    ov14_021F2A04(r4, 0xb);
    ov14_021F2A18(*((u32*)(r5 + 0x34)), 0xb, 0);
    ov14_021F391C(*((u32*)(r5 + 0x34)), 0);
    *((u16*)(r4 + 0x10)) = 6;
    *((u16*)(r4 + 0x10)) = 0;
}





void ov14_021EAA04(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021EAA2A: ; jump table
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    // add r3, sp, #0
    // ldrsh r2, [r3, r2]
    // ldrsh r1, [r3, r1]
    // asr r2, r2, #0x10
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    // add r3, sp, #0
    // ldrsh r2, [r3, r2]
    // ldrsh r1, [r3, r1]
    // asr r2, r2, #0x10
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    // add r3, sp, #0
    // ldrsh r2, [r3, r2]
    // ldrsh r1, [r3, r1]
    // asr r2, r2, #0x10
}





void ov14_021EAB54(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021EAB6C: ; jump table
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    // add r3, sp, #0
    // ldrsh r2, [r3, r2]
    // ldrsh r1, [r3, r1]
    // asr r2, r2, #0x10
}





void ov14_021EAC24(void) {
    sub_02019978(*((u32*)(*((u32*)(r0 + 0x34)) + (0x2f << 4))), 0xf);
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021EAC48: ; jump table
    ov14_021F29E4(*((u32*)(r4 + 0x34)), 9, 9);
    ov14_021E7AE4(r4, *((u16*)(*((u32*)(r4 + 0x34)) + 0x000088CA)), 2);
    *((u16*)(r5 + 0x10)) = 1;
    ov14_021E7B98(r4);
    *((u16*)(r5 + 0x10)) = 2;
    ov14_021F391C(*((u32*)(r4 + 0x34)), 1);
    ov14_021F29E4(*((u32*)(r4 + 0x34)), 0xb, 2);
    *((u16*)(r5 + 0x10)) = 3;
    ov14_021F2A04(*((u32*)(r4 + 0x34)), 0xb);
    ov14_021F391C(*((u32*)(r4 + 0x34)), 0);
    ov14_021F2A18(*((u32*)(r4 + 0x34)), 0xb, 0);
    *((u16*)(r5 + 0x10)) = 4;
    ov14_021F29E4(*((u32*)(r4 + 0x34)), 9, 8);
    *((u16*)(r5 + 0x10)) = 0;
}





void ov14_021EACD4(void) {
    ov14_021E8514(*((u32*)(*((u32*)(r0 + 0x34)) + (0x2f << 4))));
    ov14_021E80A8(r4);
    sub_02019978(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), 0xa);
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021EAD10: ; jump table
    ov14_021F391C(*((u32*)(r4 + 0x34)), 1);
    ov14_021F29E4(*((u32*)(r4 + 0x34)), 0xb, 1);
    ov14_021F2A18(*((u32*)(r4 + 0x34)), 0xb, 1);
    *((u16*)(r5 + 0x10)) = 1;
    ov14_021E8434(*((u32*)(1 + (0x2f << 4))), (0x2f << 4));
    *((u16*)(r5 + 0x10)) = 0xa;
    ov14_021F2A04(*((u32*)(r4 + 0x34)), 0xb);
    ov14_021F391C(*((u32*)(r4 + 0x34)), 0);
    ov14_021F3B3C(*((u32*)(r4 + 0x34)));
    *((u16*)(r5 + 0x10)) = 2;
    // strb r2, [r0, r1]
    ov14_021F69F0(r4, 0x28, 2);
    ov14_021F3488(r4, 0x81, 0);
    // add r0, sp, #4
    // add r1, sp, #0
    System_GetTouchHeldCoords();
    // asr r0, r0, #0x10
    // asr r1, r1, #0x10
    ov14_021E7960((*((u32*)(*((u32*)(r4 + 0x34)) + 0x000040B8)) << 0x10), (*((u32*)(*((u32*)(r4 + 0x34)) + (0x000040B8 + 4))) << 0x10), (0x000040B8 + 4));
    // asr r0, r0, #0x10
    // asr r1, r1, #0x10
    ov14_021E79AC((*((u32*)(r1 + r2)) << 0x10), (*((u32*)(r1 + (r2 + 4))) << 0x10), ov14_021F7BF0);
    // add r0, #0x21
    // add r1, #0x21
    ov14_021E6AA0(r4, *((u8*)r4), *((u8*)r4));
    // add r0, #0x21
    // add r0, #0x21
    ov14_021E8434(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021E7FEC(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), (0x2f << 4));
    ov14_021F3488(r4, 1, 1);
    ov14_021E88F8(*((u32*)(r1 + (0x2f << 4))));
    ov14_021E7AD4(r4, r7, r6, 1);
    *((u16*)(r5 + 0x10)) = 3;
    // ldr r2, [sp, #4]
    // ldr r1, [sp]
    // strb r2, [r0, r1]
    ov14_021E7FB8(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)), 1);
    // ldr r1, [sp, #4]
    // ldr r2, [sp]
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    ov14_021F395C(*((u32*)(r4 + 0x34)), (r1 << 0x10), (r2 << 0x10));
    ov14_021F3B5C(*((u32*)(r4 + 0x34)));
    // ldr r2, [sp, #4]
    // str r2, [r1, r0]
    // ldr r2, [sp]
    // str r2, [r1, r0]
    ov14_021E7B8C(r4, *((u32*)(r4 + 0x34)));
    *((u16*)(r5 + 0x10)) = 0xa;
    ov14_021F391C(*((u32*)(r4 + 0x34)), 0);
    ov14_021F3B3C(*((u32*)(r4 + 0x34)));
    *((u16*)(r5 + 0x10)) = 0;
}





void ov14_021EAF08(void) {
    ov14_021E80A8();
    ov14_021F2A04(*((u32*)(r5 + 0x34)), 0xb);
    // add r0, #0x21
    // add r0, #0x21
    // strb r2, [r0]
    ov14_021E7AD4(r5, *((u8*)r5), *((u8*)r5), 1);
    // strb r1, [r2, r0]
    ov14_021E7FEC(*((u32*)(*((u32*)(r5 + 0x34)) + (0x2f << 4))), *((u32*)(r5 + 0x34)), *((u32*)(r5 + 0x34)));
    ov14_021F3488(r5, 1, 1);
    *((u16*)(r4 + 0x10)) = 1;
    ov14_021E7B8C(r5);
    *((u16*)(r4 + 0x10)) = 0;
}





void ov14_021EAF8C(void) {
    // blx r1
    // str r0, [r4]
}





void ov14_021EAFAC(void) {
    Main_SetVBlankIntrCB(0, 0);
    HBlankInterruptDisable();
    GfGfx_EngineASetPlanes(0);
    GfGfx_EngineBSetPlanes(0);
    // strh r1, [r0]
    // strh r1, [r0]
    sub_020210BC(0x04001050, 0);
    sub_02021148(4);
    // and r0, r1
    // strh r0, [r2]
    Heap_Create(3, 0xa, (2 << 0x12));
    Heap_Alloc(0xa, 0x000088E0);
    *((u32*)(r4 + 0x34)) = r0;
    MI_CpuFill8(0, 0x000088E0);
    NARC_New(2, 0xa);
    // str r0, [r2, r1]
    NARC_New(0x14, 0xa, *((u32*)(r4 + 0x34)));
    // str r0, [r2, r1]
    ov14_021E5A60(0x00000454, *((u32*)(r4 + 0x34)));
    ov14_021E5A70(r4);
    ov14_021E5E74(r4);
    ov14_021E5C54(r4);
    ov14_021E5D78(r4);
    ov14_021E5DE0(r4);
    ov14_021F4ED0(r4);
    ov14_021F297C(r4);
    ov14_021F2F20(r4);
    ov14_021F2F3C(r4);
    ov14_021E7930(r4, *((u8*)(r4 + 0x1f)));
    ov14_021E783C(r4, r0, 2);
    ov14_021E7BA4(r4);
    ov14_021E81FC(r4);
    ov14_021E825C(r4);
    ov14_021E82BC(r4);
    ov14_021E5ED0(r4);
    ov14_021F5620(r4);
    ov14_021F566C(r4);
    ov14_021F49C8(r4);
    ov14_021F6A44(r4);
    SysTask_CreateOnVBlankQueue(ov14_021E59AC, r4, 0);
    // str r0, [r1]
    ov14_021E5EAC(1, *((u32*)(r4 + 0x34)));
}





void ov14_021EB0E4(void) {
    ov14_021E6048();
    SysTask_Destroy(*((u32*)*((u32*)(r4 + 0x34))));
    ov14_021F6B10(r4);
    ov14_021E5EE8(r4);
    ov14_021E7D7C(*((u32*)(r4 + 0x34)));
    ov14_021F29AC(*((u32*)(r4 + 0x34)));
    ov14_021F4F00(r4);
    ov14_021E5DB8(r4);
    ov14_021E5E94(r4);
    ov14_021E5C00(r4);
    NARC_Delete(*((u32*)(*((u32*)(r4 + 0x34)) + 0x00000454)), *((u32*)(r4 + 0x34)));
    NARC_Delete(*((u32*)(*((u32*)(r4 + 0x34)) + (0x45 << 4))), *((u32*)(r4 + 0x34)));
    sub_02021238();
    // strh r0, [r1]
    // strh r0, [r1]
    GfGfx_EngineASetPlanes(0, 0x04001050);
    GfGfx_EngineBSetPlanes(0);
    Heap_Free(*((u32*)(r4 + 0x34)));
    Heap_Destroy(0xa);
}





void ov14_021EB170(void) {
}





void ov14_021EB18C(void) {
}





void ov14_021EB1A4(void) {
    // str r0, [r3, r1]
}





void ov14_021EB1C0(void) {
    // blx r1
}





void ov14_021EB1E0(void) {
    System_GetTouchNew();
    PlaySE(0x000005DD);
    // tst r0, r1
    PlaySE(0x000005DD, *((u32*)(gSystem + 0x48)));
}





void ov14_021EB218(void) {
    YesNoPrompt_HandleInput(*((u32*)(*((u32*)(r0 + 0x34)) + 0x00000434)), *((u32*)(r0 + 0x34)));
    YesNoPrompt_Reset(*((u32*)(*((u32*)(r4 + 0x34)) + 0x00000434)), *((u32*)(r4 + 0x34)));
    // blx r1
    YesNoPrompt_Reset(*((u32*)(*((u32*)(r4 + 0x34)) + 0x00000434)), *((u32*)(r4 + 0x34)), (*((u16*)(*((u32*)(r4 + 0x34)) + 0x00000438)) << 3));
    // blx r1
}





void ov14_021EB27C(void) {
}





void ov14_021EB290(void) {
    // blx r1
}





void ov14_021EB2A8(void) {
    OverlayManager_Run(*((u32*)(r0 + 0x14)));
    OverlayManager_Delete(*((u32*)(r4 + 0x14)));
    // blx r1
    *((u32*)(r4 + 0x30)) = *((u32*)(ov14_021F7D50 + (*((u8*)(r4 + 0x1e)) * 0xc)));
}





void ov14_021EB2EC(void) {
    PlaySE(0x0000060C);
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021EB30A: ; jump table
    ov14_021F0BF4(r4);
    ov14_021F685C(r4, 0, 0, 0x27);
    ov14_021F43F4(*((u32*)(r4 + 0x34)), 0);
    ov14_021F3488(r4, 1, 1);
    ov14_021E7588(r4, 0x1e);
    ov14_021F685C(r4, 0, 0, 0x27);
    ov14_021E7588(r4, 0);
    ov14_021E7588(r4, 0);
    ov14_021F3488(r4, 0x81, 1);
    ov14_021E7588(r4, 0);
    ov14_021F01D8(r4, 0x75);
}





void ov14_021EB388(void) {
    ov14_021F6A14();
    // mvn r0, r0
    ov14_021E6070(r4, r0, 0xac, 0);
    PlaySE(0x000005EB);
    // add r0, r2, r1
    // add r1, r2, r1
    System_GetTouchNewCoords((0x000040B8 + 4), *((u32*)(r4 + 0x34)));
    ov14_021E8544(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021F5EE4(r4, ov14_021F7D3C, 5);
    ov14_021E7588(r4, r5);
    ov14_021F2A18(*((u32*)(r4 + 0x34)), 9, 0);
    ov14_021F039C(r4, r5);
    ov14_021E8544(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    // add r0, #0x21
    GridInputHandler_GetNextInput(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)));
    ov14_021F7AC4(*((u32*)(r4 + 0x34)), r5, r0);
    GridInputHandler_SetNextInput(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)), r5);
    ov14_021E84A4(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021E8248(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021E82A8(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021E8328(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021E884C(*((u32*)(r4 + 0x34)));
    ov14_021F40E8(r4, 0);
    ov14_021F0234(r4, ov14_021EA180, 0x4a);
    GridInputHandler_SetNextInput(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)), ((r5 << 0x18) >> 0x18));
    GridInputHandler_SetButtonInputMode(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)), 1);
    ov14_021E765C(r4);
    ov14_021F6F94(r4);
    // mvn r1, r1
    // sub r0, #0x1e
    // bmi _021EB4DA
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021EB4B8: ; jump table
    // mvn r0, r0
    PlaySE(0x000005DD, 2);
    ov14_021E76B8(r4);
    ov14_021F1128(r4);
    PlaySE(0x000005DC);
    ov14_021E76B8(r4);
    ov14_021F2A18(*((u32*)(r4 + 0x34)), 9, 0);
    GridInputHandler_SetNextInput(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)), 0x1e);
    ov14_021F028C(r4, 0xc);
    PlaySE(0x000005DC);
    ov14_021E76B8(r4);
    ov14_021F2A18(*((u32*)(r4 + 0x34)), 9, 0);
    GridInputHandler_SetNextInput(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)), 0x1e);
    ov14_021F0314(r4, 0xc);
    PlaySE(0x00000632);
    ov14_021F2270(r4, 8, 0x95);
    PlaySE(0x00000632);
    // add r0, #0x2a
    // strb r1, [r0]
    // add r0, #0x2b
    // strb r1, [r0]
    ov14_021F2330(r4, 9, 0x96);
    PlaySE(0x000005DD);
    System_GetTouchNew();
    // add r0, #0x2a
    // strb r1, [r0]
    // add r0, #0x21
    // add r0, #0x2b
    // strb r1, [r0]
    ov14_021F2330(r4, 3, 0xb2);
    PlaySE(0x000005DD);
    *((u32*)(r4 + 0x2c)) = 0x25;
    ov14_021F2270(r4, 4, 0x97);
    PlaySE(0x000005DD);
    ov14_021F2270(r4, 5, 0x98);
    PlaySE(0x000005DD);
    ov14_021F2270(r4, 6, 0x99);
    PlaySE(0x000005DD);
    ov14_021F2270(r4, 7, 0x9b);
    PlaySE(0x000005DC);
    // add r0, #0x21
    GridInputHandler_GetNextInput(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)));
    ov14_021F7AC4(*((u32*)(r4 + 0x34)), r5, r0);
    GridInputHandler_SetNextInput(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)), r5);
    ov14_021F2270(r4, 0xb, 0x9c);
    GridInputHandler_GetNextInput(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)));
    // tst r0, r1
    PlaySE(0x000005DC, *((u32*)(gSystem + 0x48)));
    ov14_021E76B8(r4);
    ov14_021F028C(r4, 0xc);
    // tst r0, r1
    PlaySE(0x000005DC);
    ov14_021E76B8(r4);
    ov14_021F0314(r4, 0xc);
    GridInputHandler_GetNextInput(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)));
    ov14_021E7588(r4, r0);
    ov14_021E765C(r4);
    PlaySE(0x000005DC);
    ov14_021F0244(r4, 0x4a);
    PlaySE(0x000005DD);
    ov14_021E765C(r4);
    ov14_021F2270(r4, 0xa, 0x93);
    PlaySE(0x000005DD);
    ov14_021F2270(r4, 0xa, 0x94);
    GridInputHandler_GetNextInput(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)));
    ov14_021E7588(r4, r0);
    ov14_021E765C(r4);
    PlaySE(0x000005DC);
    ov14_021E6070(r4, r5, 0xac, 0);
    PlaySE(0x000005DD);
    ov14_021F5EE4(r4, ov14_021F7D3C, 5);
    ov14_021E7588(r4, r5);
    GridInputHandler_GetNextInput(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)));
    ov14_021F7AC4(*((u32*)(r4 + 0x34)), 0x24, r0);
    GridInputHandler_SetNextInput(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)), 0x24);
    ov14_021F0530(r4, r5);
}





void ov14_021EB7B0(void) {
    PlaySE(0x000005EA);
    ov14_021E637C(r4);
    ov14_021F08F0(r4);
    GridInputHandler_SetNextInput(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)), 0x24);
    GridInputHandler_SetButtonInputMode(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)), 1);
}





void ov14_021EB7E4(void) {
    ov14_021F6688(*((u32*)(r0 + 0x34)), 0x25);
    ov14_021F5EE4(r5, ov14_021F7D2C, 4);
    // add r1, #0x21
    ov14_021F685C(r5, *((u8*)r5), 1, 0x27);
    ov14_021F5EE4(r5, ov14_021F7D1C, 4);
    // add r1, #0x21
    ov14_021F685C(r5, *((u8*)r5), 1, 0x27);
    ov14_021F5EE4(r5, ov14_021F7D3C, 5);
    // add r0, #0x21
    // strb r3, [r0, r2]
    // add r0, #0x21
    ov14_021F3488(r5, 2, 0, (*((u8*)(*((u32*)(r5 + 0x34)) + 0x0000044E)) & ~(0x80)));
    ov14_021F43F4(*((u32*)(r5 + 0x34)), 1);
    ov14_021F3488(r5, 1, 0);
    ov14_021E8434(*((u32*)(*((u32*)(r5 + 0x34)) + (0x2f << 4))), *((u32*)(r5 + 0x34)));
    ov14_021F0234(r5, ov14_021E9434, r4);
}





void ov14_021EB8C0(void) {
    // add r1, #0x21
    ov14_021E7588(*((u8*)r0));
    // add r0, #0x26
    ov14_021F5EE4(r5, ov14_021F7D2C, 4);
    ov14_021F43F4(*((u32*)(r5 + 0x34)), 0);
    ov14_021F3488(r5, 1, 1);
    ov14_021F5EE4(r5, ov14_021F7D1C, 4);
    // add r0, #0x21
    ov14_021F3488(r5, 1, 1);
    // add r0, #0x24
    ov14_021E8664(r5);
    // add r0, #0x24
    ov14_021E8664(r5);
    ov14_021F5EE4(r5, ov14_021F7D3C, 5);
    ov14_021E87F4(r5);
    ov14_021E83C4(*((u32*)(*((u32*)(r5 + 0x34)) + (0x2f << 4))), *((u32*)(r5 + 0x34)));
    // add r0, #0x21
    ov14_021F685C(r5, *((u8*)r5), 1, 0x27);
    ov14_021F0BF4(r5);
    // add r1, #0x21
    ov14_021F685C(r5, *((u8*)r5), 1, 0x27);
    ov14_021F0B70(r5);
    ov14_021F43F4(*((u32*)(r5 + 0x34)), 0);
    ov14_021F6AC0(r5, 5, 9);
    ov14_021F3F6C(r5);
    ov14_021E8874(*((u32*)(r5 + 0x34)));
    ov14_021F0BB4(r5);
    ov14_021E8610(*((u32*)(*((u32*)(r5 + 0x34)) + (0x2f << 4))), *((u32*)(r5 + 0x34)));
    ov14_021F4720(r5);
    ov14_021F4848(r5);
    ov14_021F48B4(r5);
    ov14_021F57B8(r5);
    ov14_021E86E0(*((u32*)(*((u32*)(r5 + 0x34)) + (0x2f << 4))), *((u32*)(r5 + 0x34)));
    ov14_021E9554(r5);
    // add r0, #0x27
    // add r2, #0x21
    ov14_021F6AC0(r5, 4, *((u8*)r5));
    // add r2, #0x28
    ov14_021F6AC0(r5, 4, *((u8*)r5));
    // strb r2, [r1, r0]
    ov14_021EA1F0(r5, *((u32*)(r5 + 0x34)), 1);
    // add r0, #0x25
    _s32_div_f(*((u8*)r5), 6);
    // add r1, #0x25
    // str r1, [r2, r0]
    ov14_021F3488(r5, 0x81, 1);
    ov14_021F3488(r5, 0x82, 1);
    // add r0, #0x27
    // add r0, #0x27
    ov14_021E8874(*((u32*)(r5 + 0x34)));
    // add r0, #0x29
    ov14_021F43F4(*((u32*)(r5 + 0x34)), 0);
    // add r0, #0x26
    // strb r1, [r0]
    // add r0, #0x28
    // strb r1, [r0]
    // add r0, #0x27
    // strb r1, [r0]
    ov14_021F01D8(r5, r4);
}





void ov14_021EBAEC(void) {
    ov14_021F6AC0(9, 0xa);
    // add r0, #0x25
    _s32_div_f(*((u8*)r4), 6);
    // str r1, [r2, r0]
    ov14_021E8740(r4, *((u32*)(r4 + 0x34)));
    ov14_021F6844(r4, 0, 0x27);
    ov14_021F3488(r4, 0x81, 1);
    ov14_021F01D8(r4, 0x3d);
}





void ov14_021EBB3C(void) {
    // add r1, #0x21
    ov14_021F0B70(*((u8*)r0));
    ov14_021F43F4(*((u32*)(r5 + 0x34)), 0);
    ov14_021F3488(r5, 1, 1);
    ov14_021F3F6C(r5);
    ov14_021E87F4(r5);
    ov14_021E82FC(*((u32*)(*((u32*)(r5 + 0x34)) + (0x2f << 4))), *((u32*)(r5 + 0x34)));
    ov14_021F5FBC(r5, 0);
    // add r0, #0x21
    ov14_021F3488(r5, 0x81, 1);
    ov14_021F3488(r5, 0x82, 1);
    ov14_021F6AC0(r5, 7, 8);
    ov14_021F5EE4(r5, ov14_021F7D3C, 5);
    // add r0, #0x21
    ov14_021F6AC0(r5, 5, 0xa);
    ov14_021E83C4(*((u32*)(*((u32*)(r5 + 0x34)) + (0x2f << 4))), *((u32*)(r5 + 0x34)));
    // add r1, #0x21
    ov14_021E6070(r5, *((u8*)r5), 5, 0);
    // add r2, #0x21
    ov14_021E60C0(r5, *((u8*)(r5 + 0x1f)), *((u8*)r5));
    // add r1, #0x21
    // add r3, #0x1c
    ov14_021E6094(r5, *((u8*)r5), 6, r5);
    ov14_021E64D0(r6);
    // add r0, #0x21
    // add r6, r3, r2
    ov14_021F2ED0(r5, *((u8*)(r5 + 0x1f)), *((u8*)r5), *((u8*)(r6 + 0x00004094)));
    Bag_TakeItem(*((u32*)(r5 + 0xc)), *((u16*)(r5 + 0x1c)), 1, 0xa);
    // add r0, #0x21
    // sub r2, #0x1e
    ov14_021F6AC0(r5, 7, *((u8*)r5));
    ov14_021F6AC0(r5, 5, 0xa);
    GridInputHandler_SetNextInput(*((u32*)(*((u32*)(r5 + 0x34)) + 0x2c)), r2);
    // add r1, #0x21
    GridInputHandler_GetDpadBox(*((u32*)(*((u32*)(r5 + 0x34)) + 0x2c)), *((u8*)r5));
    // add r1, sp, #0
    // add r1, #1
    // add r2, sp, #0
    DpadMenuBox_GetPosition();
    // add r2, sp, #0
    ManagedSprite_SetPositionXY(*((u32*)(*((u32*)(r5 + 0x34)) + (0x32 << 4))), *((u8*)(r2 + 1)), *((u8*)r2));
    ov14_021F2A18(*((u32*)(r5 + 0x34)), 9, 0);
    // strh r2, [r0, r1]
    ov14_021F3844(*((u32*)(r5 + 0x34)), *((u16*)(*((u32*)(r5 + 0x34)) + 0x000088C8)), *((u16*)(r5 + 0x1c)));
    ov14_021F2A18(*((u32*)(r5 + 0x34)), 0xb, 1);
    // add r0, #0x21
    ov14_021F3488(r5, 0x82, 1);
    // add r1, #0x21
    ov14_021F396C(*((u32*)(r5 + 0x34)), *((u8*)r5), 1);
    ov14_021F3488(r5, 0x81, 1);
    // add r1, #0x21
    ov14_021F396C(*((u32*)(r5 + 0x34)), *((u8*)r5), 0);
    ov14_021F39D0(*((u32*)(r5 + 0x34)));
    ov14_021F3B3C(*((u32*)(r5 + 0x34)));
    *((u16*)(r5 + 0x1c)) = 0;
    // add r0, #0x21
    ov14_021F3488(r5, 0x82, 1);
    ov14_021F3488(r5, 0x81, 1);
    *((u16*)(r5 + 0x1c)) = 0;
    // add r1, #0x21
    ov14_021E7588(r5, *((u8*)r5));
    ov14_021E8874(*((u32*)(r5 + 0x34)));
    ov14_021E892C(*((u32*)(*((u32*)(r5 + 0x34)) + (0x2f << 4))), *((u32*)(r5 + 0x34)));
    ov14_021F01D8(r5, r4);
}





void ov14_021EBDCC(void) {
}





void ov14_021EBDE0(void) {
}





void ov14_021EBDE8(void) {
    // add r1, #0x21
    ov14_021E6070(*((u8*)r0), 0xb, 0);
    // str r0, [r2, r1]
    ov14_021E7DF8(r4, 0x000040C0, *((u32*)(r4 + 0x34)));
    ov14_021F638C(*((u32*)(r4 + 0x34)));
    ov14_021E7E40(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021F0234(r4, ov14_021E94A8, 0x15);
}





u32 ov14_021EBE2C(void) {
}





void ov14_021EBE68(void) {
    GridInputHandler_HandleInput_AllowHold(*((u32*)(*((u32*)(r0 + 0x34)) + 0x2c)));
    // mvn r1, r1
    // add r1, r0, r0
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _021EBE90: ; jump table
    // mvn r1, r1
    PlaySE(0x000005DD, (2 + 1));
    ov14_021E7E10(r4, 0);
    PlaySE(0x000005DD);
    ov14_021E7E10(r4, 1);
    PlaySE(0x000005DD);
    ov14_021E7E10(r4, 2);
    PlaySE(0x000005DD);
    ov14_021E7E10(r4, 3);
    PlaySE(0x000005DD);
    ov14_021E7E10(r4, 4);
    PlaySE(0x000005DD);
    ov14_021E7E10(r4, 5);
    // add r0, sp, #0
    // strb r1, [r0]
    // add r1, #0x21
    // add r3, sp, #0
    ov14_021E6094(r4, *((u8*)r4), 0xb);
    // add r1, sp, #0
    ov14_021E895C(r4, *((u8*)r1));
    PlaySE(0x000005DD);
    ov14_021F23F0(r4, 0, 0x9a);
    PlaySE(0x000005DC);
    ov14_021F23F0(r4, 1, 0x9a);
    PlaySE(0x000005DC);
    ov14_021F0244(r4, 0x18);
    PlaySE(0x000005DC);
}





void ov14_021EBF8C(void) {
    // bx r3
    // _021EBF94: .word ov14_021F0234
    // _021EBF98: .word ov14_021E94BC
}





void ov14_021EBF9C(void) {
    // add r1, #0x21
    ov14_021F3488(2, 1);
    // add r1, #0x21
    ov14_021F34C8(*((u32*)(r5 + 0x34)), *((u8*)r5), 0);
    // add r0, #0x21
    // sub r4, #0x1e
    ov14_021E6480(r5, *((u8*)r5));
    PlaySE(0x000005F3);
    ov14_021F67B0(r5, 6, 0x25);
    // strb r0, [r3, r1]
    *((u32*)(r5 + 0x30)) = 0xe;
    Party_GetMonByIndex(*((u32*)(r5 + 8)), r4, *((u8*)(*((u32*)(r5 + 0x34)) + 0x0000044E)), *((u32*)(r5 + 0x34)));
    GetMonData(6, 0);
    ItemIdIsMail(((r0 << 0x10) >> 0x10));
    PlaySE(0x000005F3);
    ov14_021F685C(r5, 0, 6, 0x25);
    // strb r0, [r3, r1]
    *((u32*)(r5 + 0x30)) = 0xe;
    GetMonData(r4, 0xa2, 0, *((u32*)(r5 + 0x34)));
    PlaySE(0x000005F3);
    ov14_021F685C(r5, 0, 5, 0x25);
    // strb r0, [r3, r1]
    *((u32*)(r5 + 0x30)) = 0xe;
    ov14_021F43F4(*((u32*)(r5 + 0x34)), 0, *((u8*)(*((u32*)(r5 + 0x34)) + 0x0000044E)), *((u32*)(r5 + 0x34)));
    ov14_021F3488(r5, 1, 1);
    // add r1, #0x21
    ov14_021F34C8(*((u32*)(r5 + 0x34)), *((u8*)r5), 0);
    // add r2, #0x21
    ov14_021E60C0(r5, *((u8*)(r5 + 0x1f)), *((u8*)r5));
    GetBoxMonData(0x4c, 0);
    PlaySE(0x000005F3);
    ov14_021F67B0(r5, 3, 0x25);
    // strb r0, [r3, r1]
    *((u32*)(r5 + 0x30)) = 0xe;
    ov14_021F67B0(r5, 0, 0x25, *((u32*)(r5 + 0x34)));
    ov14_021F0254(r5, 1);
}





void ov14_021EC0EC(void) {
    ov14_021E7278();
    ov14_021F3380(*((u32*)(*((u32*)(r4 + 0x34)) + 0x000088DC)), *((u32*)(r4 + 0x34)));
    ov14_021F33E8(0x1e, *((u8*)(*((u32*)(*((u32*)(r4 + 0x34)) + 0x000088DC)) + 6)));
    ov14_021E7264(r4);
}





void ov14_021EC128(void) {
}





void ov14_021EC13C(void) {
}





void ov14_021EC150(void) {
    // add r2, #0x21
    ov14_021E6100(*((u8*)(r0 + 0x1f)), *((u8*)r0));
    ov14_021F6654(*((u32*)(r4 + 0x34)), 0x25);
    ov14_021E765C(r4);
    // add r0, #0x21
    ov14_021F4958(r4, *((u8*)(r4 + 0x1f)));
    ov14_021F4A20(r4, *((u8*)(r4 + 0x1f)));
    ov14_021F685C(r4, 0, 0, 0x27);
    *((u32*)(r4 + 0x30)) = 0x51;
    *((u32*)(r4 + 0x30)) = 0xc;
    ov14_021E8248(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021E82A8(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021E8328(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    // add r1, #0x21
    GridInputHandler_SetNextInput(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)), *((u8*)r4));
    GridInputHandler_SetButtonInputMode(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)), 1);
    ov14_021F43F4(*((u32*)(r4 + 0x34)), 1);
    ov14_021F3488(r4, 1, 0);
    // add r0, #0x21
    // strb r1, [r0]
    ov14_021F08BC(r4, ov14_021E9450);
    // add r0, #0x22
    // strb r1, [r0]
    *((u32*)(r4 + 0x30)) = 0x21;
    ov14_021E8328(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021F3488(r4, 2, 0);
    ov14_021F0234(r4, ov14_021E9194, *((u32*)(r4 + 0x30)));
}





void ov14_021EC23C(void) {
    // add r0, #0x24
    // add r1, #0x21
    // add r1, #0x21
    // sub r1, #0x1e
    // add r0, #0x21
    // strb r1, [r0]
}





void ov14_021EC2A4(void) {
    ov14_021F33B0(*((u32*)(*((u32*)(r0 + 0x34)) + 0x000088DC)), *((u32*)(r0 + 0x34)));
    ov14_021F33FC(*((u32*)(*((u32*)(r4 + 0x34)) + 0x000088DC)), *((u32*)(r4 + 0x34)));
    ov14_021E7264(r4);
    ov14_021F3F6C(r4);
    ov14_021F67B0(r4, 4, 0x25);
    ov14_021E8824(*((u32*)(r4 + 0x34)));
    *((u32*)(r4 + 0x30)) = 0x1f;
}





void ov14_021EC2EC(void) {
}





void ov14_021EC300(void) {
    ov14_021F40E8(1);
    // add r0, #0x21
    ov14_021F43F4(*((u32*)(r4 + 0x34)), 1);
    ov14_021F3488(r4, 1, 0);
    ov14_021F3488(r4, 2, 0);
    ov14_021F0234(r4, ov14_021E9450, 0xe);
}





void ov14_021EC344(void) {
}





void ov14_021EC354(void) {
    ov14_021E81A8(*((u32*)(*((u32*)(r0 + 0x34)) + (0x2f << 4))), 1);
    ov14_021E7EC0(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021E7EE0(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021F63F0(*((u32*)(r4 + 0x34)));
    ov14_021F63A8(*((u32*)(r4 + 0x34)));
    ov14_021F5EC4(r4, 0);
    ov14_021F2FDC(r4);
    ov14_021F0234(r4, ov14_021E9518, 0x23);
}





void ov14_021EC3A8(void) {
}





void ov14_021EC3D8(void) {
    ov14_021F6A24();
    // mvn r0, r0
    // add r1, #0x1e
    ov14_021E6070(r4, r0, 0xac, 0);
    PlaySE(0x000005EB);
    // add r0, r2, r1
    // add r1, r2, r1
    System_GetTouchNewCoords((0x000040B8 + 4), *((u32*)(r4 + 0x34)));
    ov14_021E8544(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021F5EE4(r4, ov14_021F7D3C, 5);
    // add r1, #0x1e
    ov14_021E7588(r4, r5);
    ov14_021F2A18(*((u32*)(r4 + 0x34)), 9, 0);
    // add r5, #0x1e
    ov14_021F0594(r4, r5);
    ov14_021E8544(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    // add r0, #0x21
    // sub r0, #0x1e
    GridInputHandler_GetNextInput(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)));
    ov14_021F7AC4(*((u32*)(r4 + 0x34)), r5, r0);
    GridInputHandler_SetNextInput(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)), r5);
    ov14_021E84A4(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021E8328(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021E884C(*((u32*)(r4 + 0x34)));
    ov14_021F40E8(r4, 0);
    ov14_021F0234(r4, ov14_021EA180, 0x4c);
    GridInputHandler_SetNextInput(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)), ((r5 << 0x18) >> 0x18));
    GridInputHandler_SetButtonInputMode(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)), 1);
    ov14_021E765C(r4);
    ov14_021F7388(r4);
    // mvn r1, r1
    // add r0, r5, r5
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021EC4F6: ; jump table
    // mvn r0, r0
    PlaySE(0x000005DD, 2);
    // add r0, #0x2a
    // strb r1, [r0]
    // add r0, #0x2b
    // strb r1, [r0]
    ov14_021F2490(r4, 0, 0x9d);
    PlaySE(0x000005DD);
    System_GetTouchNew();
    // add r0, #0x2a
    // strb r1, [r0]
    // add r0, #0x21
    // add r0, #0x2b
    // strb r1, [r0]
    ov14_021F2330(r4, 3, 0x9d);
    PlaySE(0x000005DD);
    *((u32*)(r4 + 0x2c)) = 9;
    ov14_021F2270(r4, 4, 0x97);
    PlaySE(0x000005DD);
    ov14_021F2270(r4, 5, 0x98);
    PlaySE(0x000005DD);
    ov14_021F2270(r4, 6, 0x99);
    PlaySE(0x000005DD);
    ov14_021F2270(r4, 7, 0x9b);
    GridInputHandler_GetNextInput(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)));
    // add r1, #0x1e
    ov14_021E7588(r4, r0);
    ov14_021E765C(r4);
    PlaySE(0x000005DC);
    ov14_021F0244(r4, 0x4c);
    PlaySE(0x00000633);
    ov14_021F2270(r4, 0xa, 0x9f);
    PlaySE(0x000005DC);
    // add r0, #0x21
    // sub r0, #0x1e
    GridInputHandler_GetNextInput(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)));
    ov14_021F7AC4(*((u32*)(r4 + 0x34)), r5, r0);
    GridInputHandler_SetNextInput(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)), r5);
    ov14_021F2270(r4, 0xb, 0x9e);
    GridInputHandler_GetNextInput(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)));
    // add r1, #0x1e
    ov14_021E7588(r4, r0);
    ov14_021E765C(r4);
    PlaySE(0x000005DC);
    // add r1, #0x1e
    ov14_021E6070(r4, r5, 0xac, 0);
    PlaySE(0x000005DD);
    ov14_021F5EE4(r4, ov14_021F7D3C, 5);
    // add r1, #0x1e
    ov14_021E7588(r4, r5);
    GridInputHandler_GetNextInput(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)));
    ov14_021F7AC4(*((u32*)(r4 + 0x34)), 8, r0);
    GridInputHandler_SetNextInput(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)), 8);
    // add r5, #0x1e
    ov14_021F07F0(r4, r5);
}





void ov14_021EC710(void) {
    ov14_021E7F4C(*((u32*)(*((u32*)(r0 + 0x34)) + (0x2f << 4))), *((u32*)(r0 + 0x34)));
    ov14_021F0234(r4, ov14_021E9518, 0x26);
}





void ov14_021EC730(void) {
    ov14_021E7E98();
    ov14_021F43F4(*((u32*)(r4 + 0x34)), 1);
    ov14_021F5C84(r4, 0);
    ov14_021F5E94(r4, 0);
    // add r0, #0x24
    ov14_021F5EB4(r4, 0);
    ov14_021E8248(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021E82A8(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021E8328(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021F3488(r4, 0x81, 1);
    ov14_021F6AC0(r4, 6, 0x21);
    ov14_021F0234(r4, ov14_021E94BC, 0x75);
    ov14_021F3488(r4, 1, 0);
    ov14_021F6AC0(r4, 3, 0x21);
    ov14_021F0234(r4, ov14_021E94BC, 0xc);
}





void ov14_021EC7D4(void) {
    // add r1, #0xe4
    ov14_021F6654(*((u32*)(r0 + 0x34)), 0x28);
    PlaySE(0x000005EA);
    ov14_021E637C(r5);
    // add r1, #0xe4
    // add r4, #0xe8
    ov14_021E6548(r5, *((u32*)r4), *((u32*)r4));
    ov14_021F08F0(r5);
    // add r0, #0x21
    // sub r1, #0x1e
    GridInputHandler_SetNextInput(*((u32*)(*((u32*)(r5 + 0x34)) + 0x2c)), ((r6 << 0x18) >> 0x18));
    GridInputHandler_SetButtonInputMode(*((u32*)(*((u32*)(r5 + 0x34)) + 0x2c)), 1);
    ov14_021E7588(r5, r6);
    GridInputHandler_SetNextInput(*((u32*)(r0 + 0x2c)), 8);
    GridInputHandler_SetButtonInputMode(*((u32*)(*((u32*)(r5 + 0x34)) + 0x2c)), 1);
}





void ov14_021EC854(void) {
    // add r0, #0x25
    _s32_div_f(*((u8*)r0), 6);
    // add r1, #0x25
    // str r1, [r2, r0]
    // add r0, #0x2a
    // add r2, #0x2b
    ov14_021F6AC0(r4, 4, *((u8*)r4));
    // add r0, #0x2b
    // add r0, #0x21
    // strb r1, [r0]
    // add r1, #0x2b
    ov14_021F1580(r4, *((u8*)r4));
    // add r4, #0x2a
    // strb r1, [r4]
    // add r2, #0x2b
    ov14_021F6AC0(r4, 4, *((u8*)r4));
    // add r1, #0x2b
    ov14_021E7588(r4, *((u8*)r4));
}





void ov14_021EC8D0(void) {
    ov14_021F6A34();
    // mvn r0, r0
    // add r1, #0x1e
    ov14_021E6070(r4, r0, 0xac, 0);
    PlaySE(0x000005EB);
    // add r0, r2, r1
    // add r1, r2, r1
    System_GetTouchNewCoords((0x000040B8 + 4), *((u32*)(r4 + 0x34)));
    // add r1, #0x1e
    ov14_021E7588(r4, r5);
    ov14_021F2A18(*((u32*)(r4 + 0x34)), 9, 0);
    // add r5, #0x1e
    ov14_021F083C(r4, r5);
    ov14_021E765C(r4);
    // add r5, #0x1e
    GridInputHandler_SetNextInput(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)), ((r5 << 0x18) >> 0x18));
    GridInputHandler_SetButtonInputMode(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)), 1);
    ov14_021E85E4(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021F0EE8(r4, 0x29);
    ov14_021E8648(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021F0D34(r4, 0x29);
    ov14_021F6A14(0x29);
    // mvn r0, r0
    ov14_021E6070(r4, r0, 0xac, 0);
    PlaySE(0x000005EB);
    // add r0, r2, r1
    // add r1, r2, r1
    System_GetTouchNewCoords((0x000040B8 + 4), *((u32*)(r4 + 0x34)));
    ov14_021E7588(r4, r5);
    ov14_021F2A18(*((u32*)(r4 + 0x34)), 9, 0);
    ov14_021F083C(r4, r5);
    ov14_021E765C(r4);
    GridInputHandler_SetNextInput(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)), ((r5 << 0x18) >> 0x18));
    GridInputHandler_SetButtonInputMode(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)), 1);
    ov14_021E85E4(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021F0EE8(r4, 0x29);
    ov14_021E8648(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021F0D34(r4, 0x29);
    ov14_021F7B7C(r4);
    GridInputHandler_GetNextInput(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)));
    ov14_021E6070(r4, r0, 0xac, 0);
    PlaySE(0x000005DD);
    // add r0, #0x21
    // strb r5, [r0]
    // add r0, #0x26
    // strb r1, [r0]
    ov14_021F2330(r4, 0xf, 0x97);
    ov14_021F70C0(r4);
    // mvn r1, r1
    // sub r0, #0x24
    // bmi _021ECAAC
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021ECA90: ; jump table
    // mvn r0, r0
    PlaySE(0x000005DD, 2);
    ov14_021E76B8(r4);
    ov14_021F0D58(r4, 0);
    PlaySE(0x000005DD);
    ov14_021E76B8(r4);
    ov14_021F0D58(r4, 1);
    PlaySE(0x000005DD);
    ov14_021E76B8(r4);
    ov14_021F0D58(r4, 2);
    PlaySE(0x000005DD);
    ov14_021E76B8(r4);
    ov14_021F0D58(r4, 3);
    PlaySE(0x000005DD);
    ov14_021E76B8(r4);
    ov14_021F0D58(r4, 4);
    PlaySE(0x000005DD);
    ov14_021E76B8(r4);
    ov14_021F0D58(r4, 5);
    PlaySE(0x000005DC);
    ov14_021E76B8(r4);
    // mvn r1, r1
    ov14_021F1004(r4, 0);
    // add r0, #0x25
    _s32_div_f(*((u8*)r4), 6);
    // add r1, #0x25
    GridInputHandler_SetNextInput(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)), ((r1 << 0x18) >> 0x18));
    GridInputHandler_SetButtonInputMode(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)), 1);
    ov14_021E85E4(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021F0EE8(r4, 0x29);
    ov14_021E8648(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021F0D34(r4, 0x29);
    PlaySE(0x000005DC);
    ov14_021E76B8(r4);
    ov14_021F1004(r4, 1);
    // add r0, #0x25
    _s32_div_f(*((u8*)r4), 6);
    // add r1, #0x25
    GridInputHandler_SetNextInput(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)), ((r1 << 0x18) >> 0x18));
    GridInputHandler_SetButtonInputMode(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)), 1);
    ov14_021E85E4(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021F0EE8(r4, 0x29);
    ov14_021E8648(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021F0D34(r4, 0x29);
    PlaySE(0x000005DC);
    // add r0, #0x25
    _s32_div_f(*((u8*)r4), 6);
    // add r1, #0x25
    GridInputHandler_SetNextInput(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)), ((r1 << 0x18) >> 0x18));
    ov14_021F2270(r4, 0xe, 0xa0);
    GridInputHandler_GetNextInput(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)));
    ov14_021E7588(r4, r0);
    ov14_021E8648(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021F6408(r4, 0);
    ov14_021E8620(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021E8648(*((u32*)(r1 + (0x2f << 4))));
    ov14_021E8634(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021E765C(r4);
    ov14_021E8648(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021E8634(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    PlaySE(0x000005DC);
    ov14_021F0244(r4, 0x4b);
    PlaySE(0x00000633);
    ov14_021F29E4(*((u32*)(r4 + 0x34)), 9, 8);
    ov14_021F2490(r4, 1, 0xa1);
    ov14_021E85E4(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    PlaySE(0x00000633);
    ov14_021F2490(r4, 1, 0xa1);
    PlaySE(0x000005DC);
    // add r0, #0x25
    _s32_div_f(*((u8*)r4), 6);
    // add r1, #0x25
    GridInputHandler_SetNextInput(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)), ((r1 << 0x18) >> 0x18));
    GridInputHandler_SetButtonInputMode(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)), 1);
    ov14_021F0EE8(r4, 0x29);
    ov14_021E6070(r4, r5, 0xac, 0);
    PlaySE(0x000005EB);
    ov14_021E7588(r4, r5);
    ov14_021F1580(r4, r5);
}





void ov14_021ECDA8(void) {
    // add r0, #0xe8
    // add r0, #0xec
    PlaySE(0x000005EA);
    ov14_021E637C(r5);
    // and r0, r6
    // str r0, [sp]
    // add r1, #0xe4
    // add r7, #0xe8
    ov14_021E6548(r5, *((u32*)r7), *((u32*)r7));
    ov14_021F08F0(r5);
    // add r1, #0x21
    GridInputHandler_SetNextInput(*((u32*)(*((u32*)(r5 + 0x34)) + 0x2c)), *((u8*)r5));
    // add r0, #0x24
    ov14_021F57B8(r5);
    // add r1, #0x21
    ov14_021E6070(r5, *((u8*)r5), 0xac, 0);
    ov14_021E765C(r5);
    // ldr r0, [sp]
    // add r1, #0x21
    ov14_021E7588(r5, *((u8*)r5));
    // add r0, #0x21
    // sub r6, #0x1e
    Party_GetMonByIndex(*((u32*)(r5 + 8)), *((u8*)r5));
    GetMonData(6, 0);
    ItemIdIsMail(((r0 << 0x10) >> 0x10));
    PlaySE(0x000005F3);
    ov14_021F685C(r5, 0, 6, 0x25);
    *((u32*)(r5 + 0x30)) = 0x2c;
    GetMonData(r7, 0xa2, 0);
    PlaySE(0x000005F3);
    ov14_021F685C(r5, 0, 5, 0x25);
    *((u32*)(r5 + 0x30)) = 0x2c;
    ov14_021E6480(r5, r6);
    PlaySE(0x000005F3);
    ov14_021F67B0(r5, 6, 0x25);
    *((u32*)(r5 + 0x30)) = 0x2c;
    // tst r0, r4
    // add r0, #0x25
    _s32_div_f(*((u8*)r5), 6);
    // eor r3, r2
    // add r0, r3, r2
    // add r0, #0x21
    ov14_021F685C(r5, 0, 4, 0x25);
    // sub r1, #0x1e
    ov14_021E6480(r5);
    ov14_021F685C(r5, 0, 4, 0x25);
    ov14_021F67B0(r5, 6, 0x25);
    PlaySE(0x000005F3);
    *((u32*)(r5 + 0x30)) = 0x2c;
    GridInputHandler_SetButtonInputMode(*((u32*)(*((u32*)(r5 + 0x34)) + 0x2c)), 1);
}





void ov14_021ECF58(void) {
    // add r0, #0xe8
    PlaySE(0x000005EA);
    ov14_021E637C(r5);
    // tst r0, r6
    // add r1, #0xe4
    // add r4, #0xe8
    ov14_021E6548(r5, *((u32*)r4), *((u32*)r4));
    ov14_021F08F0(r5);
    // add r0, #0x24
    ov14_021F57B8(r5);
    GridInputHandler_GetNextInput(*((u32*)(*((u32*)(r5 + 0x34)) + 0x2c)));
    // add r0, #0x21
    // sub r6, #0x1e
    Party_GetMonByIndex(*((u32*)(r5 + 8)), *((u8*)r5));
    GetMonData(6, 0);
    ItemIdIsMail(((r0 << 0x10) >> 0x10));
    PlaySE(0x000005F3);
    // add r1, #0x21
    GridInputHandler_SetNextInput(*((u32*)(*((u32*)(r5 + 0x34)) + 0x2c)), *((u8*)r5));
    GridInputHandler_SetButtonInputMode(*((u32*)(*((u32*)(r5 + 0x34)) + 0x2c)), 0);
    ov14_021F29E4(*((u32*)(r5 + 0x34)), 9, 8);
    ov14_021F685C(r5, 0, 6, 0x25);
    *((u32*)(r5 + 0x30)) = 0x2c;
    GetMonData(r7, 0xa2, 0);
    PlaySE(0x000005F3);
    // add r1, #0x21
    GridInputHandler_SetNextInput(*((u32*)(*((u32*)(r5 + 0x34)) + 0x2c)), *((u8*)r5));
    GridInputHandler_SetButtonInputMode(*((u32*)(*((u32*)(r5 + 0x34)) + 0x2c)), 0);
    ov14_021F29E4(*((u32*)(r5 + 0x34)), 9, 8);
    ov14_021F685C(r5, 0, 5, 0x25);
    *((u32*)(r5 + 0x30)) = 0x2c;
    ov14_021E6480(r5, r6);
    PlaySE(0x000005F3);
    // add r1, #0x21
    GridInputHandler_SetNextInput(*((u32*)(*((u32*)(r5 + 0x34)) + 0x2c)), *((u8*)r5));
    GridInputHandler_SetButtonInputMode(*((u32*)(*((u32*)(r5 + 0x34)) + 0x2c)), 0);
    ov14_021F29E4(*((u32*)(r5 + 0x34)), 9, 8);
    ov14_021F67B0(r5, 6, 0x25);
    *((u32*)(r5 + 0x30)) = 0x2c;
    // add r0, #0x25
    _s32_div_f(*((u8*)r5), 6);
    // sub r3, #0x25
    // add r0, r3, r2
    // add r0, #0x21
    ov14_021F685C(r5, 0, 4, 0x25);
    // sub r1, #0x1e
    ov14_021E6480(r5);
    ov14_021F685C(r5, 0, 4, 0x25);
    ov14_021F67B0(r5, 6, 0x25);
    PlaySE(0x000005F3);
    // add r1, #0x21
    GridInputHandler_SetNextInput(*((u32*)(*((u32*)(r5 + 0x34)) + 0x2c)), *((u8*)r5));
    GridInputHandler_SetButtonInputMode(*((u32*)(*((u32*)(r5 + 0x34)) + 0x2c)), 0);
    ov14_021F29E4(*((u32*)(r5 + 0x34)), 9, 8);
    *((u32*)(r5 + 0x30)) = 0x2c;
    // add r0, #0x2a
    GridInputHandler_GetNextInput(*((u32*)(*((u32*)(r5 + 0x34)) + 0x2c)));
    ov14_021E7588(r5, r0);
    // add r0, #0x2a
    ov14_021F29E4(*((u32*)(r5 + 0x34)), 9, 8);
    ov14_021E76B8(r5);
    ov14_021F0CD8(r5);
    ov14_021F29E4(*((u32*)(r5 + 0x34)), 9, 0xe);
    ov14_021F29E4(*((u32*)(r5 + 0x34)), 9, 8);
}





void ov14_021ED1AC(void) {
    // add r0, #0x2a
}





void ov14_021ED1E8(void) {
    // add r1, #0x2b
    // add r0, #0x24
    // strb r1, [r0]
    // add r0, #0x29
    // strb r1, [r0]
    // add r0, #0x25
    // strb r1, [r0]
}





void ov14_021ED258(void) {
    // add r1, #0x1e
    // add r0, #0x2a
    // add r2, #0x2b
    // sub r2, #0x1e
    // add r1, #0x1e
}





void ov14_021ED2C8(void) {
    // add r1, #0x25
    // strb r2, [r1]
}





void ov14_021ED2DC(void) {
    ov14_021E81A8(*((u32*)(*((u32*)(r0 + 0x34)) + (0x2f << 4))), 1);
    ov14_021E7ED0(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021E7EE0(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021F63F0(*((u32*)(r4 + 0x34)));
    ov14_021F63B8(*((u32*)(r4 + 0x34)));
    ov14_021F3044(r4);
    ov14_021F6408(r4, 0);
    // add r1, #0x2b
    ov14_021E6070(r4, *((u8*)r4), 0xac, 0);
    ov14_021E8620(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021F0234(r4, ov14_021E9518, 0x28);
}





void ov14_021ED350(void) {
}





void ov14_021ED35C(void) {
    // add r1, #0x29
    ov14_021F0C58(*((u8*)r0));
    ov14_021E7F4C(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021F0234(r4, ov14_021E9518, 0x33);
}





void ov14_021ED38C(void) {
    // add r1, #0x2a
    // add r1, #0x2b
    ov14_021E7588(*((u8*)r0));
    ov14_021F6AC0(r5, r7, r6);
    ov14_021F5C84(r5, 0);
    ov14_021F5E94(r5, 0);
    ov14_021F5EB4(r5, 0);
    ov14_021E8248(*((u32*)(*((u32*)(r5 + 0x34)) + (0x2f << 4))), *((u32*)(r5 + 0x34)));
    ov14_021E82A8(*((u32*)(*((u32*)(r5 + 0x34)) + (0x2f << 4))), *((u32*)(r5 + 0x34)));
    ov14_021E8328(*((u32*)(*((u32*)(r5 + 0x34)) + (0x2f << 4))), *((u32*)(r5 + 0x34)));
    ov14_021F0234(r5, ov14_021E94BC, r4);
}





void ov14_021ED414(void) {
    GridInputHandler_HandleInput_AllowHold(*((u32*)(*((u32*)(r0 + 0x34)) + 0x2c)));
    // mvn r1, r1
    // add r1, r0, r0
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _021ED43C: ; jump table
    // mvn r1, r1
    PlaySE(0x000005DD, (2 + 1));
    ov14_021F1170(r4, 0);
    PlaySE(0x000005DD);
    ov14_021F1170(r4, 1);
    PlaySE(0x000005DD);
    ov14_021F1170(r4, 2);
    PlaySE(0x000005DD);
    ov14_021F1170(r4, 3);
    PlaySE(0x000005DD);
    ov14_021F1170(r4, 4);
    PlaySE(0x000005DD);
    ov14_021F1170(r4, 5);
    PlaySE(0x000005DC);
    // mvn r1, r1
    ov14_021F11F8(r4, 0);
    PlaySE(0x000005DC);
    ov14_021F11F8(r4, 1);
    ov14_021F29E4(*((u32*)(r4 + 0x34)), 9, 8);
    // add r0, #0x25
    PlaySE(0x000005F3, *((u8*)(r4 + 0x1f)));
    ov14_021F2270(r4, 0xc, 0x3d);
    PlaySE(0x000005DC);
    ov14_021F2270(r4, 0xc, 0xa2);
    ov14_021F29E4(*((u32*)(r4 + 0x34)), 9, 8);
    PlaySE(0x000005DD);
    ov14_021F2270(r4, 6, 0xa3);
    ov14_021F29E4(*((u32*)(r4 + 0x34)), 9, 8);
    PlaySE(0x000005DD);
    ov14_021F2270(r4, 7, 0xa4);
    PlaySE(0x000005DC);
    PlaySE(0x000005DC);
    ov14_021F0244(r4, 0x3e);
    PlaySE(0x000005DC);
    ov14_021F29E4(*((u32*)(r4 + 0x34)), 9, 8);
    PlaySE(0x000005DC);
    ov14_021F2270(r4, 0xa, 0x39);
}





void ov14_021ED5B0(void) {
    ov14_021E834C(*((u32*)(*((u32*)(r0 + 0x34)) + (0x2f << 4))), *((u32*)(r0 + 0x34)));
    ov14_021E8314(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021E8234(*((u32*)(r1 + (0x2f << 4))));
    ov14_021E8294(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021E8314(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021F0234(r4, ov14_021E94BC, 0x35);
}





void ov14_021ED60C(void) {
    // add r1, #0x25
    // strb r2, [r1]
}





void ov14_021ED620(void) {
}





void ov14_021ED62C(void) {
    ov14_021F6070();
    ov14_021E875C(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021F0234(r4, ov14_021E9618, 0x38);
}





void ov14_021ED650(void) {
}





void ov14_021ED684(void) {
}





void ov14_021ED6A4(void) {
    ov14_021E87BC(*((u32*)(*((u32*)(r0 + 0x34)) + (0x2f << 4))), *((u32*)(r0 + 0x34)));
    ov14_021F0234(r4, ov14_021E9618, 0x3b);
}





void ov14_021ED6C4(void) {
}





void ov14_021ED6D0(void) {
    ov14_021F29E4(*((u32*)(r0 + 0x34)), 9, 8);
    ov14_021F2A18(*((u32*)(r4 + 0x34)), 9, 0);
    ov14_021F5EB4(r4, 0);
    ov14_021E8328(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021F6AC0(r4, 2, 0x1e);
    ov14_021F0234(r4, ov14_021E95B4, 0x52);
    ov14_021F6AC0(r4, 6, 0x1e);
    ov14_021F6AC0(r4, 3, 0x1e);
    ov14_021E8248(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021E82A8(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021F0234(r4, ov14_021E94BC, 0x4d);
}





void ov14_021ED760(void) {
    // add r1, #0x25
    ov14_021E7930(*((u8*)r0));
    // strb r0, [r2, r1]
    ov14_021F4428(r4, 0x0000044D, *((u32*)(r4 + 0x34)));
    ov14_021F4530(r4);
    ov14_021F459C(r4);
    ov14_021F58B8(r4);
    ov14_021E87BC(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021E81B4(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021F0234(r4, ov14_021E9660, 0x40);
}





void ov14_021ED7B8(void) {
    ov14_021F6094();
    ov14_021E8560(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021F0234(r4, ov14_021E95C8, 0x41);
}





void ov14_021ED7DC(void) {
    // sub r5, r5, r6
    // ror r5, r3
    // add r5, r6, r5
    // sub r3, #0x11
    // str r5, [r1, r3]
    // sub r2, #0x11
    ov14_021F6AC0(0xa, *((u32*)(*((u32*)(r0 + 0x34)) + 0x0000044D)), *((u32*)(r0 + 0x34)));
    ov14_021F29E4(*((u32*)(r4 + 0x34)), 9, 0xe);
    ov14_021F6844(r4, 1, 0x27);
}





void ov14_021ED820(void) {
    GridInputHandler_HandleInput_AllowHold(*((u32*)(*((u32*)(r0 + 0x34)) + 0x2c)));
    // mvn r1, r1
    // add r1, r0, r0
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _021ED846: ; jump table
    // mvn r1, r1
    PlaySE(0x000005DD, 1);
    ov14_021F129C(r4, 0);
    PlaySE(0x000005DD);
    ov14_021F129C(r4, 1);
    PlaySE(0x000005DD);
    ov14_021F129C(r4, 2);
    PlaySE(0x000005DD);
    ov14_021F129C(r4, 3);
    PlaySE(0x000005DC);
    // mvn r1, r1
    ov14_021F1228(r4, 0);
    PlaySE(0x000005DC);
    ov14_021F1228(r4, 1);
    ov14_021F29E4(*((u32*)(r4 + 0x34)), 9, 8);
    ov14_021F131C(r4);
    PlaySE(0x000005DC);
    ov14_021F0244(r4, 0x49);
    ov14_021F29E4(*((u32*)(r4 + 0x34)), 9, 8);
    PlaySE(0x000005DC);
    ov14_021F2270(r4, 0xa, 0xa6);
}





void ov14_021ED920(void) {
    ov14_021E8588(*((u32*)(*((u32*)(r0 + 0x34)) + (0x2f << 4))), *((u32*)(r0 + 0x34)));
    ov14_021F0234(r4, ov14_021E9604, 0x44);
}





void ov14_021ED940(void) {
    ov14_021E81D8(*((u32*)(*((u32*)(r0 + 0x34)) + (0x2f << 4))), *((u32*)(r0 + 0x34)));
    ov14_021F0234(r4, ov14_021E96A8, 0x45);
}





void ov14_021ED960(void) {
}





void ov14_021ED96C(void) {
    ov14_021E78AC(*((u8*)(*((u32*)(r0 + 0x34)) + 0x0000044D)), *((u32*)(r0 + 0x34)));
    PCStorage_SetBoxWallpaper(*((u32*)(r4 + 4)), *((u8*)(r4 + 0x1f)), *((u8*)(*((u32*)(r4 + 0x34)) + 0x0000044D)));
    // add r2, #0x10
    PCStorage_SetBoxWallpaper(*((u8*)(r4 + 0x1f)));
    ov14_021F4530(r4);
    ov14_021F4958(r4, *((u8*)(r4 + 0x1f)));
}





void ov14_021ED9AC(void) {
    PaletteData_LoadPaletteSlotFromHardware(*((u32*)(*((u32*)(r0 + 0x34)) + 0x18)), 0, 0, (2 << 8));
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    PaletteData_BeginPaletteFade(*((u32*)(*((u32*)(r4 + 0x34)) + 0x18)), 1, (3 << 0xe), 0);
    *((u32*)(r4 + 0x30)) = 0x46;
}





void ov14_021ED9EC(void) {
    // str r0, [sp]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    PaletteData_BeginPaletteFade(*((u32*)(*((u32*)(r0 + 0x34)) + 0x18)), 1, (3 << 0xe), 0);
    *((u32*)(r4 + 0x30)) = 0x42;
}





void ov14_021EDA1C(void) {
}





void ov14_021EDA3C(void) {
}





void ov14_021EDA4C(void) {
    ov14_021F6A14();
    // mvn r0, r0
    ov14_021E6070(r4, r0, 0xac, 0);
    // add r0, r2, r1
    // add r1, r2, r1
    System_GetTouchNewCoords((0x000040B8 + 4), *((u32*)(r4 + 0x34)));
    ov14_021E8544(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021F5EE4(r4, ov14_021F7D2C, 4);
    PlaySE(0x000005EB);
    ov14_021E7588(r4, r5);
    ov14_021F2A18(*((u32*)(r4 + 0x34)), 9, 0);
    ov14_021F0418(r4, r5);
    ov14_021E8544(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    // add r0, #0x21
    GridInputHandler_GetNextInput(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)));
    ov14_021F7AC4(*((u32*)(r4 + 0x34)), r5, r0);
    GridInputHandler_SetNextInput(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)), r5);
    ov14_021E84A4(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021E8328(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021E884C(*((u32*)(r4 + 0x34)));
    ov14_021F40E8(r4, 0);
    ov14_021F0234(r4, ov14_021EA130, 0x59);
    GridInputHandler_SetNextInput(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)), ((r5 << 0x18) >> 0x18));
    GridInputHandler_SetButtonInputMode(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)), 1);
    ov14_021E765C(r4);
    ov14_021F6E8C(r4);
    // mvn r1, r1
    // sub r0, #0x1e
    // bmi _021EDB80
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021EDB64: ; jump table
    // mvn r0, r0
    Party_GetCount(*((u32*)(r4 + 8)), 2);
    PlaySE(0x000005DD);
    PlaySE(0x000005F3);
    ov14_021F2270(r4, 4, 0xa7);
    PlaySE(0x000005DD);
    *((u32*)(r4 + 0x2c)) = 0x23;
    ov14_021F2270(r4, 5, 0x97);
    PlaySE(0x000005DD);
    ov14_021F6654(*((u32*)(r4 + 0x34)), 0x27);
    ov14_021F2270(r4, 6, 0x99);
    PlaySE(0x000005DD);
    ov14_021F2270(r4, 7, 0x9b);
    // add r0, #0x21
    GridInputHandler_GetNextInput(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)));
    ov14_021F7AC4(*((u32*)(r4 + 0x34)), r5, r0);
    GridInputHandler_SetNextInput(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)), r5);
    PlaySE(0x000005DC);
    ov14_021F2270(r4, 0xb, 0xa8);
    PlaySE(0x000005DD);
    ov14_021E76B8(r4);
    ov14_021F6654(*((u32*)(r4 + 0x34)), 0x27);
    ov14_021F1128(r4);
    PlaySE(0x000005DC);
    ov14_021E76B8(r4);
    ov14_021F2A18(*((u32*)(r4 + 0x34)), 9, 0);
    GridInputHandler_SetNextInput(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)), 0x1e);
    ov14_021F685C(r4, 0, 0, 0x27);
    ov14_021F028C(r4, 0x51);
    PlaySE(0x000005DC);
    ov14_021E76B8(r4);
    ov14_021F2A18(*((u32*)(r4 + 0x34)), 9, 0);
    GridInputHandler_SetNextInput(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)), 0x1e);
    ov14_021F685C(r4, 0, 0, 0x27);
    ov14_021F0314(r4, 0x51);
    GridInputHandler_GetNextInput(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)));
    ov14_021E7588(r4, r0);
    ov14_021E765C(r4);
    PlaySE(0x000005DC);
    ov14_021F0244(r4, 0x58);
    PlaySE(0x000005DD);
    ov14_021E765C(r4);
    ov14_021F2270(r4, 0xa, 0x93);
    PlaySE(0x000005DD);
    ov14_021F2270(r4, 0xa, 0x94);
    GridInputHandler_GetNextInput(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)));
    // tst r0, r1
    PlaySE(0x000005DC, *((u32*)(gSystem + 0x48)));
    ov14_021E76B8(r4);
    ov14_021F028C(r4, 0x51);
    // tst r0, r1
    PlaySE(0x000005DC);
    ov14_021E76B8(r4);
    ov14_021F0314(r4, 0x51);
    GridInputHandler_GetNextInput(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)));
    ov14_021E7588(r4, r0);
    ov14_021E765C(r4);
    PlaySE(0x000005DC);
    ov14_021E6070(r4, r5, 0xac, 0);
    PlaySE(0x000005DD);
    ov14_021F5EE4(r4, ov14_021F7D2C, 4);
    ov14_021E7588(r4, r5);
    GridInputHandler_GetNextInput(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)));
    ov14_021F7AC4(*((u32*)(r4 + 0x34)), 0x22, r0);
    GridInputHandler_SetNextInput(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)), 0x22);
    ov14_021F04D4(r4, r5);
}





void ov14_021EDE20(void) {
}





void ov14_021EDE38(void) {
    ov14_021F3044();
    ov14_021E7ED0(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021E7EE0(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    // add r0, #0x22
    // strb r1, [r0]
    ov14_021F0234(r4, ov14_021E9518, 0x54);
}





void ov14_021EDE70(void) {
    ov14_021F08BC();
    ov14_021F0234(r4, ov14_021E91E0, 0x55);
}





void ov14_021EDE88(void) {
    PlaySE(0x000005EA);
    // add r1, #0x21
    GridInputHandler_SetNextInput(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)), *((u8*)r4));
    // add r1, #0x21
    GridInputHandler_GetDpadBox(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)), *((u8*)r4));
    // add r1, sp, #0
    // add r1, #1
    // add r2, sp, #0
    DpadMenuBox_GetPosition();
    // add r2, sp, #0
    ManagedSprite_SetPositionXY(*((u32*)(*((u32*)(r4 + 0x34)) + (0x32 << 4))), *((u8*)(r2 + 1)), *((u8*)r2));
    // add r0, #0x21
    // strb r1, [r0]
    ov14_021E637C(r4, 0xff);
    ov14_021F08F0(r4);
    ov14_021E765C(r4);
    ov14_021E7F4C(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021F0234(r4, ov14_021E9518, 0x56);
}





void ov14_021EDF08(void) {
    ov14_021E8328(*((u32*)(*((u32*)(r0 + 0x34)) + (0x2f << 4))), *((u32*)(r0 + 0x34)));
    ov14_021F0234(r4, ov14_021E95B4, 0x52);
}





void ov14_021EDF28(void) {
    // add r0, #0xe4
    PlaySE(0x000005EA);
    ov14_021E637C(r5);
    ov14_021F08F0(r5);
    ov14_021F6678(*((u32*)(r5 + 0x34)), 0x28);
    // add r0, #0x21
    ov14_021F685C(r5, 0, 0, 0x27);
    ov14_021F685C(r5, 1, 0x27);
    GridInputHandler_SetNextInput(*((u32*)(*((u32*)(r5 + 0x34)) + 0x2c)), ((0x22 << 0x18) >> 0x18));
    GridInputHandler_SetButtonInputMode(*((u32*)(*((u32*)(r5 + 0x34)) + 0x2c)), 1);
}





void ov14_021EDF90(void) {
}





void ov14_021EDFA0(void) {
    ov14_021F6A24();
    // mvn r0, r0
    // add r1, #0x1e
    ov14_021E6070(r4, r0, 0xac, 0);
    // add r0, r2, r1
    // add r1, r2, r1
    System_GetTouchNewCoords((0x000040B8 + 4), *((u32*)(r4 + 0x34)));
    ov14_021E8544(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021F5EE4(r4, ov14_021F7D1C, 4);
    PlaySE(0x000005EB);
    // add r1, #0x1e
    ov14_021E7588(r4, r5);
    ov14_021F2A18(*((u32*)(r4 + 0x34)), 9, 0);
    // add r5, #0x1e
    ov14_021F0660(r4, r5);
    ov14_021E8544(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    // add r0, #0x21
    // sub r0, #0x1e
    GridInputHandler_GetNextInput(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)));
    ov14_021F7AC4(*((u32*)(r4 + 0x34)), r5, r0);
    GridInputHandler_SetNextInput(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)), r5);
    ov14_021F5EB4(r4, 0);
    ov14_021E84A4(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021E8328(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021E884C(*((u32*)(r4 + 0x34)));
    ov14_021F40E8(r4, 0);
    ov14_021F0234(r4, ov14_021EA130, 0x70);
    GridInputHandler_SetNextInput(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)), ((r5 << 0x18) >> 0x18));
    GridInputHandler_SetButtonInputMode(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)), 1);
    ov14_021E765C(r4);
    ov14_021F6BC0(r4);
    // mvn r1, r1
    // add r0, r5, r5
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021EE0C6: ; jump table
    // mvn r0, r0
    PlaySE(0x000005DD, 2);
    ov14_021F2270(r4, 4, 0xa9);
    PlaySE(0x000005DD);
    *((u32*)(r4 + 0x2c)) = 8;
    ov14_021F2270(r4, 5, 0x97);
    PlaySE(0x000005DD);
    ov14_021F6654(*((u32*)(r4 + 0x34)), 0x27);
    ov14_021F2270(r4, 6, 0x99);
    PlaySE(0x000005DD);
    ov14_021F2270(r4, 7, 0x9b);
    // add r0, #0x21
    // sub r0, #0x1e
    GridInputHandler_GetNextInput(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)));
    ov14_021F7AC4(*((u32*)(r4 + 0x34)), r5, r0);
    GridInputHandler_SetNextInput(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)), r5);
    PlaySE(0x000005DC);
    ov14_021F2270(r4, 0xb, 0xaa);
    GridInputHandler_GetNextInput(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)));
    // add r1, #0x1e
    ov14_021E7588(r4, r0);
    PlaySE(0x000005DC);
    GridInputHandler_GetNextInput(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)));
    // add r1, #0x1e
    ov14_021E7588(r4, r0);
    PlaySE(0x000005DC);
    ov14_021F0244(r4, 0x6f);
    PlaySE(0x000005DD);
    ov14_021E765C(r4);
    ov14_021F2270(r4, 0xa, 0x93);
    PlaySE(0x000005DD);
    ov14_021F2270(r4, 0xa, 0x94);
    // add r1, #0x1e
    ov14_021E6070(r4, r5, 0xac, 0);
    PlaySE(0x000005DD);
    ov14_021F5EE4(r4, ov14_021F7D1C, 4);
    // add r1, #0x1e
    ov14_021E7588(r4, r5);
    GridInputHandler_GetNextInput(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)));
    ov14_021F7AC4(*((u32*)(r4 + 0x34)), 7, r0);
    GridInputHandler_SetNextInput(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)), 7);
    // add r5, #0x1e
    ov14_021F0794(r4, r5);
}





void ov14_021EE26C(void) {
    // add r1, #0x21
    // sub r4, #0x1e
    ov14_021E6480(*((u8*)r0));
    PlaySE(0x000005F3);
    ov14_021F67B0(r5, 6, 0x25);
    *((u32*)(r5 + 0x30)) = 0x5d;
    Party_GetMonByIndex(*((u32*)(r5 + 8)), r4);
    GetMonData(6, 0);
    ItemIdIsMail(((r0 << 0x10) >> 0x10));
    PlaySE(0x000005F3);
    ov14_021F685C(r5, 0, 6, 0x25);
    *((u32*)(r5 + 0x30)) = 0x5d;
    GetMonData(r4, 0xa2, 0);
    PlaySE(0x000005F3);
    ov14_021F685C(r5, 0, 5, 0x25);
    *((u32*)(r5 + 0x30)) = 0x5d;
    // add r0, #0x25
    // strb r1, [r0]
    ov14_021F3488(r5, 2, 1);
    ov14_021F40DC(r5);
    ov14_021F0234(r5, ov14_021E96C8, 0x5e);
}





void ov14_021EE328(void) {
    // bx r3
    // _021EE330: .word ov14_021F0234
    // _021EE334: .word ov14_021E9450
}





void ov14_021EE338(void) {
}





void ov14_021EE35C(void) {
    ov14_021F60A8();
    ov14_021E8560(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021F0234(r4, ov14_021E95C8, 0x60);
}





void ov14_021EE380(void) {
    // add r0, #0x25
    _s32_div_f(*((u8*)r0), 6);
    // str r1, [r0, r2]
    ov14_021F6AC0(r4, 1, *((u32*)(*((u32*)(r4 + 0x34)) + 0x0000043C)), *((u32*)(r4 + 0x34)));
    ov14_021F29E4(*((u32*)(r4 + 0x34)), 9, 0xe);
    ov14_021F6654(*((u32*)(r4 + 0x34)), 0x25);
    ov14_021F685C(r4, 0, 3, 0x27);
}





void ov14_021EE3C8(void) {
    GridInputHandler_HandleInput_AllowHold(*((u32*)(*((u32*)(r0 + 0x34)) + 0x2c)));
    // mvn r1, r1
    // add r1, r0, r0
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _021EE3EE: ; jump table
    // mvn r1, r1
    ov14_021F1448(r4, 0);
    ov14_021F1448(r4, 1);
    ov14_021F1448(r4, 2);
    ov14_021F1448(r4, 3);
    ov14_021F1448(r4, 4);
    ov14_021F1448(r4, 5);
    PlaySE(0x000005DC);
    // mvn r1, r1
    ov14_021F1504(r4, 0);
    PlaySE(0x000005DC);
    ov14_021F1504(r4, 1);
    ov14_021F1540(r4);
    PlaySE(0x000005DC);
    ov14_021F0244(r4, 0x71);
    ov14_021F29E4(*((u32*)(r4 + 0x34)), 9, 8);
    PlaySE(0x000005DC);
    ov14_021F1534(r4, 0);
}





void ov14_021EE4AC(void) {
    ov14_021F2A18(*((u32*)(r0 + 0x34)), 9, 0);
    ov14_021E8588(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021F0234(r4, ov14_021E9604, 0x63);
}





void ov14_021EE4D8(void) {
}





void ov14_021EE4E4(void) {
    ov14_021F4CA0();
    ov14_021F0234(r4, ov14_021E98AC, 0x65);
}





u32 ov14_021EE4FC(void) {
}





void ov14_021EE538(void) {
    ov14_021F29E4(*((u32*)(r0 + 0x34)), 9, 8);
    ov14_021F2A18(*((u32*)(r4 + 0x34)), 9, 0);
    ov14_021E8588(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021E8314(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021F0234(r4, ov14_021E99F0, 0x67);
}





void ov14_021EE578(void) {
    // add r1, #0x25
    PCStorage_CountMonsAndEggsInBox(*((u32*)(r0 + 4)), *((u8*)r0));
    ov14_021F685C(r4, 0, 4, 0x25);
    *((u32*)(r4 + 0x30)) = 0x5e;
    ov14_021F3488(r4, 2, 0);
    ov14_021F6654(*((u32*)(r4 + 0x34)), 0x27);
    ov14_021F4CA0(r4);
    ov14_021F0234(r4, ov14_021E98AC, 0x68);
}





void ov14_021EE5C8(void) {
    ov14_021E8048(*((u32*)(*((u32*)(r0 + 0x34)) + (0x2f << 4))), *((u32*)(r0 + 0x34)));
    ov14_021F0234(r4, ov14_021E952C, 0x69);
}





void ov14_021EE5E8(void) {
    // add r1, #0x25
    *((u8*)(r0 + 0x1f)) = *((u8*)r0);
    // add r1, #0x25
    ov14_021F2DE8(0x6a, *((u8*)(r0 + 0x1f)), *((u8*)(r0 + 0x1f)));
    ov14_021E7930(r4, *((u8*)(r4 + 0x1f)));
    ov14_021E783C(r4, r0, 0);
    GridInputHandler_SetButtonInputMode(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)), 0);
    ov14_021F2DE8(ov14_021E92AC);
    ov14_021E7930(r4, *((u8*)(r4 + 0x1f)));
    ov14_021E783C(r4, r0, 1);
    GridInputHandler_SetButtonInputMode(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)), 0);
    ov14_021F0234(r4, ov14_021E9370, 0x6a);
}





void ov14_021EE664(void) {
    // add r1, #0x22
    // strb r2, [r1]
    ov14_021F08BC(r0, 2);
    ov14_021F0234(r4, ov14_021E9234, 0x6b);
}





void ov14_021EE684(void) {
    PlaySE(0x000005EA);
    ov14_021E637C(r5);
    // add r1, #0xe4
    // add r4, #0xe8
    ov14_021E6548(r5, *((u32*)r4), *((u32*)r4));
    ov14_021F08F0(r5);
    ov14_021E8094(*((u32*)(*((u32*)(r5 + 0x34)) + (0x2f << 4))), *((u32*)(r5 + 0x34)));
    ov14_021F0234(r5, ov14_021E954C, 0x6c);
}





void ov14_021EE6D0(void) {
    ov14_021F5EB4(0);
    ov14_021E8328(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021F0234(r4, ov14_021E95B4, 0x6d);
}





u32 ov14_021EE6F8(void) {
}





void ov14_021EE728(void) {
    PlaySE(0x000005EA);
    ov14_021E637C(r5);
    // add r1, #0xe4
    // add r4, #0xe8
    ov14_021E6548(r5, *((u32*)r4), *((u32*)r4));
    ov14_021F08F0(r5);
    ov14_021F6678(*((u32*)(r5 + 0x34)), 0x28);
    // add r0, #0x21
    ov14_021F685C(r5, 0, 0, 0x27);
    GridInputHandler_SetNextInput(*((u32*)(*((u32*)(r5 + 0x34)) + 0x2c)), 0);
    GridInputHandler_SetButtonInputMode(*((u32*)(*((u32*)(r5 + 0x34)) + 0x2c)), 1);
    ov14_021E7588(r5, 0x1e);
    ov14_021F685C(r5, 1, 0x27);
    GridInputHandler_SetNextInput(*((u32*)(*((u32*)(r5 + 0x34)) + 0x2c)), 7);
    GridInputHandler_SetButtonInputMode(*((u32*)(*((u32*)(r5 + 0x34)) + 0x2c)), 1);
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
    ov14_021F6A14();
    // mvn r0, r0
    ov14_021E6070(r4, r0, 0xac, 0);
    PlaySE(0x000005EB);
    // add r0, r2, r1
    // add r1, r2, r1
    System_GetTouchNewCoords((0x000040B8 + 4), *((u32*)(r4 + 0x34)));
    ov14_021E7588(r4, r5);
    ov14_021F2A18(*((u32*)(r4 + 0x34)), 9, 0);
    ov14_021F18B0(r4, r5);
    ov14_021E8544(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    // add r0, #0x21
    GridInputHandler_GetNextInput(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)));
    ov14_021F7AC4(*((u32*)(r4 + 0x34)), r5, r0);
    GridInputHandler_SetNextInput(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)), r5);
    ov14_021E84A4(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021E8248(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021E82A8(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021E8328(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021F40DC(r4);
    ov14_021E88F8(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021F0234(r4, ov14_021EA674, 0x76);
    GridInputHandler_SetNextInput(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)), ((r5 << 0x18) >> 0x18));
    GridInputHandler_SetButtonInputMode(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)), 1);
    ov14_021E765C(r4);
    ov14_021F74B0(r4);
    // mvn r1, r1
    // sub r0, #0x1e
    // bmi _021EE9B8
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021EE99E: ; jump table
    // mvn r0, r0
    PlaySE(0x000005DD, 2);
    ov14_021E76B8(r4);
    ov14_021F2A18(*((u32*)(r4 + 0x34)), 0xb, 0);
    ov14_021F1128(r4);
    PlaySE(0x000005DC);
    ov14_021E76B8(r4);
    ov14_021F2A18(*((u32*)(r4 + 0x34)), 0xb, 0);
    ov14_021F2A18(*((u32*)(r4 + 0x34)), 9, 0);
    GridInputHandler_SetNextInput(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)), 0x1e);
    ov14_021F028C(r4, 0x75);
    PlaySE(0x000005DC);
    ov14_021E76B8(r4);
    ov14_021F2A18(*((u32*)(r4 + 0x34)), 0xb, 0);
    ov14_021F2A18(*((u32*)(r4 + 0x34)), 9, 0);
    GridInputHandler_SetNextInput(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)), 0x1e);
    ov14_021F0314(r4, 0x75);
    PlaySE(0x00000632);
    ov14_021F2270(r4, 8, 0xab);
    PlaySE(0x00000632);
    ov14_021F2330(r4, 9, 0xac);
    PlaySE(0x000005DD);
    ov14_021F2270(r4, 7, 0xad);
    PlaySE(0x000005DC);
    // add r0, #0x21
    GridInputHandler_GetNextInput(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)));
    ov14_021F7AC4(*((u32*)(r4 + 0x34)), r5, r0);
    GridInputHandler_SetNextInput(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)), r5);
    ov14_021F2270(r4, 0xb, 0xae);
    GridInputHandler_GetNextInput(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)));
    // tst r0, r1
    PlaySE(0x000005DC, *((u32*)(gSystem + 0x48)));
    ov14_021E76B8(r4);
    ov14_021F028C(r4, 0x75);
    // tst r0, r1
    PlaySE(0x000005DC);
    ov14_021E76B8(r4);
    ov14_021F0314(r4, 0x75);
    GridInputHandler_GetNextInput(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)));
    ov14_021E7588(r4, r0);
    ov14_021E765C(r4);
    PlaySE(0x000005DC);
    ov14_021F0244(r4, 0x76);
    PlaySE(0x000005DD);
    ov14_021E765C(r4);
    ov14_021F2270(r4, 0xa, 0x93);
    PlaySE(0x000005DD);
    ov14_021F2270(r4, 0xa, 0x94);
    GridInputHandler_GetNextInput(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)));
    ov14_021E7588(r4, r0);
    ov14_021E765C(r4);
    PlaySE(0x000005DC);
    ov14_021E6070(r4, r5, 0xac, 0);
    PlaySE(0x000005DD);
    ov14_021E7588(r4, r5);
    GridInputHandler_GetNextInput(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)));
    ov14_021F7AC4(*((u32*)(r4 + 0x34)), 0x24, r0);
    GridInputHandler_SetNextInput(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)), 0x24);
    ov14_021F1808(r4, r5);
}





void ov14_021EEBFC(void) {
    ov14_021F2A44(*((u32*)(r0 + 0x34)), 0xb);
    ov14_021F40DC(r4);
    ov14_021F391C(*((u32*)(r4 + 0x34)), 1);
    ov14_021F29E4(*((u32*)(r4 + 0x34)), 0xb, 2);
    ov14_021E88F8(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021F6654(*((u32*)(r4 + 0x34)), 0x25);
    ov14_021E8328(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    // add r0, #0x21
    ov14_021E8248(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021E82A8(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021F3488(r4, 0x81, 1);
    ov14_021F3488(r4, 0x82, 1);
    ov14_021F0234(r4, ov14_021E9450, 0x7b);
}





void ov14_021EEC8C(void) {
}





void ov14_021EEC9C(void) {
    // add r0, #0x21
    ItemIdIsMail(*((u16*)(*((u32*)(r0 + 0x34)) + 0x000088C8)), *((u32*)(r0 + 0x34)));
    // add r0, #0x21
    // sub r0, #0x1e
    GridInputHandler_SetNextInput(*((u32*)(*((u32*)(r5 + 0x34)) + 0x2c)), ((((*((u8*)r5) << 0x10) >> 0x10) << 0x18) >> 0x18));
    GridInputHandler_GetDpadBox(*((u32*)(*((u32*)(r5 + 0x34)) + 0x2c)), r4);
    // add r1, sp, #0
    // add r1, #1
    // add r2, sp, #0
    DpadMenuBox_GetPosition();
    // add r2, sp, #0
    ManagedSprite_SetPositionXY(*((u32*)(*((u32*)(r5 + 0x34)) + (0x32 << 4))), *((u8*)(r2 + 1)), *((u8*)r2));
    PlaySE(0x000005F3);
    ov14_021F68C0(r5, 4, 0x25);
    *((u32*)(r5 + 0x30)) = 0x77;
    ov14_021F68C0(r5, 2, 0x25);
    ov14_021F0254(r5, 2);
}





void ov14_021EED28(void) {
    ov14_021F2A04(*((u32*)(r0 + 0x34)), 0xb);
    // add r0, #0x21
    // sub r4, #0x1e
    GridInputHandler_SetNextInput(*((u32*)(*((u32*)(r5 + 0x34)) + 0x2c)), ((((*((u8*)r5) << 0x10) >> 0x10) << 0x18) >> 0x18));
    GridInputHandler_GetDpadBox(*((u32*)(*((u32*)(r5 + 0x34)) + 0x2c)), r4);
    // add r1, sp, #0
    // add r1, #1
    // add r2, sp, #0
    DpadMenuBox_GetPosition();
    // add r2, sp, #0
    ManagedSprite_SetPositionXY(*((u32*)(*((u32*)(r5 + 0x34)) + (0x32 << 4))), *((u8*)(r2 + 1)), *((u8*)r2));
    ov14_021F391C(*((u32*)(r5 + 0x34)), 0);
    ov14_021F2A18(*((u32*)(r5 + 0x34)), 0xb, 0);
    ov14_021F68C0(r5, 3, 0x25);
    ov14_021F5FBC(r5, 0);
    // strh r2, [r1, r0]
    *((u32*)(r5 + 0x30)) = 0x77;
}





void ov14_021EEDB8(void) {
    // add r1, #0x21
    ov14_021E8248(*((u32*)(*((u32*)(r0 + 0x34)) + (0x2f << 4))), *((u32*)(r0 + 0x34)));
    ov14_021E82A8(*((u32*)(*((u32*)(r5 + 0x34)) + (0x2f << 4))), *((u32*)(r5 + 0x34)));
    ov14_021F3488(r5, 0x81, 1);
    // sub r4, #0x1e
    ov14_021F3488(0x82, 1);
    ov14_021E8328(*((u32*)(*((u32*)(r5 + 0x34)) + (0x2f << 4))), *((u32*)(r5 + 0x34)));
    GridInputHandler_SetNextInput(*((u32*)(*((u32*)(r5 + 0x34)) + 0x2c)), ((r4 << 0x18) >> 0x18));
    GridInputHandler_GetDpadBox(*((u32*)(*((u32*)(r5 + 0x34)) + 0x2c)), r4);
    // add r1, sp, #0
    // add r1, #1
    // add r2, sp, #0
    DpadMenuBox_GetPosition();
    // add r2, sp, #0
    ManagedSprite_SetPositionXY(*((u32*)(*((u32*)(r5 + 0x34)) + (0x32 << 4))), *((u8*)(r2 + 1)), *((u8*)r2));
    ov14_021F40DC(r5);
    ov14_021F391C(*((u32*)(r5 + 0x34)), 1);
    ov14_021F29E4(*((u32*)(r5 + 0x34)), 0xb, 2);
    ov14_021E88F8(*((u32*)(*((u32*)(r5 + 0x34)) + (0x2f << 4))), *((u32*)(r5 + 0x34)));
    ov14_021F6654(*((u32*)(r5 + 0x34)), 0x25);
    // add r0, #0x21
    ov14_021F3488(r5, 0x81, 1);
    ov14_021F3488(r5, 0x82, 1);
    ov14_021F0234(r5, ov14_021E9450, 0x7b);
}





void ov14_021EEE94(void) {
    // add r4, #0x21
}





void ov14_021EEED4(void) {
    // add r0, #0x21
    // sub r4, #0x1e
    GridInputHandler_SetNextInput(*((u32*)(*((u32*)(r0 + 0x34)) + 0x2c)), ((((*((u8*)r0) << 0x10) >> 0x10) << 0x18) >> 0x18));
    GridInputHandler_GetDpadBox(*((u32*)(*((u32*)(r5 + 0x34)) + 0x2c)), r4);
    // add r1, sp, #0
    // add r1, #1
    // add r2, sp, #0
    DpadMenuBox_GetPosition();
    // add r2, sp, #0
    ManagedSprite_SetPositionXY(*((u32*)(*((u32*)(r5 + 0x34)) + (0x32 << 4))), *((u8*)(r2 + 1)), *((u8*)r2));
    PlaySE(0x000005F3);
    ov14_021F68C0(r5, 5, 0x25);
    *((u32*)(r5 + 0x30)) = 0x77;
}





void ov14_021EEF34(void) {
    // add r0, #0x21
    // sub r4, #0x1e
    // add r1, sp, #0
    // add r1, #1
    // add r2, sp, #0
    // add r2, sp, #0
}





void ov14_021EEF8C(void) {
    // add r0, #0x21
    ov14_021F1F38(r0, *((u16*)*((u32*)(*((u32*)(r0 + 0x34)) + 0xc))), *((u32*)(r0 + 0x34)));
    PlaySE(0x000005EA, *((u32*)(r5 + 0x34)));
    // add r1, #0x21
    ov14_021F34C8(*((u32*)(r5 + 0x34)), *((u8*)r5), 0);
    GridInputHandler_SetNextInput(*((u32*)(*((u32*)(r5 + 0x34)) + 0x2c)), 0x24);
    GridInputHandler_SetButtonInputMode(*((u32*)(*((u32*)(r5 + 0x34)) + 0x2c)), 1);
    PlaySE(0x000005EA);
    ov14_021F34C8(*((u32*)(r5 + 0x34)), *((u16*)r4), 0);
    // add r1, #0x21
    ov14_021F34C8(*((u32*)(r5 + 0x34)), *((u8*)r5), 1);
    ov14_021F40DC(r5);
    ov14_021F391C(*((u32*)(r5 + 0x34)), 1);
    ov14_021F29E4(*((u32*)(r5 + 0x34)), 0xb, 2);
}





void ov14_021EF024(void) {
    ov14_021F2A04(*((u32*)(r0 + 0x34)), 0xb);
    ov14_021F391C(*((u32*)(r5 + 0x34)), 0);
    ov14_021F2A18(*((u32*)(r5 + 0x34)), 0xb, 0);
    ov14_021E6070(r5, *((u16*)*((u32*)(*((u32*)(r5 + 0x34)) + 0xc))), 6, 0);
    // add r3, r6, r3
    ov14_021E6094(r5, *((u16*)r4), 6, 0x000088C8);
    ov14_021E60C0(r5, *((u8*)(r5 + 0x1f)), *((u16*)r4));
    ov14_021E64D0();
    // add r6, r3, r2
    ov14_021F2ED0(r5, *((u8*)(r5 + 0x1f)), *((u16*)r4), *((u8*)(r6 + 0x00004094)));
    ov14_021E7588(r5, *((u16*)r4));
    // add r1, #0x21
    // strh r7, [r0, r3]
    // add r3, r6, r3
    ov14_021E6094(r5, *((u8*)r5), 6, 0x000088C8);
    // add r2, #0x21
    ov14_021E60C0(r5, *((u8*)(r5 + 0x1f)), *((u8*)r5));
    ov14_021E64D0();
    // add r0, #0x21
    // add r6, r3, r2
    ov14_021F2ED0(r5, *((u8*)(r5 + 0x1f)), *((u8*)r5), *((u8*)(r6 + 0x00004094)));
    // add r0, #0x21
    // strb r1, [r0]
    ov14_021F1F38(r5, *((u16*)r4));
    ov14_021E8248(*((u32*)(*((u32*)(r5 + 0x34)) + (0x2f << 4))), *((u32*)(r5 + 0x34)));
    ov14_021E82A8(*((u32*)(*((u32*)(r5 + 0x34)) + (0x2f << 4))), *((u32*)(r5 + 0x34)));
    ov14_021E8328(*((u32*)(*((u32*)(r5 + 0x34)) + (0x2f << 4))), *((u32*)(r5 + 0x34)));
    // add r1, #0x21
    GridInputHandler_SetNextInput(*((u32*)(*((u32*)(r5 + 0x34)) + 0x2c)), *((u8*)r5));
    GridInputHandler_SetButtonInputMode(*((u32*)(*((u32*)(r5 + 0x34)) + 0x2c)), 1);
    ov14_021F0234(r5, ov14_021E94BC, 0x75);
    PlaySE(0x000005EB);
    ov14_021F3844(*((u32*)(r5 + 0x34)), *((u16*)(*((u32*)(r5 + 0x34)) + 0x000088C8)));
    ov14_021F391C(*((u32*)(r5 + 0x34)), 1);
    ov14_021F29E4(*((u32*)(r5 + 0x34)), 0xb, 1);
    ov14_021F2A18(*((u32*)(r5 + 0x34)), 0xb, 1);
    ov14_021F39D0(*((u32*)(r5 + 0x34)));
    ov14_021F0234(r5, ov14_021EA728, 0x80);
}





void ov14_021EF190(void) {
    ov14_021F34C8(*((u32*)(r0 + 0x34)), *((u16*)*((u32*)(*((u32*)(r0 + 0x34)) + 0xc))), 0);
    PlaySE(0x000005EA);
    ov14_021F40DC(r5);
    ov14_021F391C(*((u32*)(r5 + 0x34)), 1);
    ov14_021F29E4(*((u32*)(r5 + 0x34)), 0xb, 2);
    // add r1, #0x21
    GridInputHandler_SetNextInput(*((u32*)(*((u32*)(r5 + 0x34)) + 0x2c)), *((u8*)r5));
    GridInputHandler_SetButtonInputMode(*((u32*)(*((u32*)(r5 + 0x34)) + 0x2c)), 1);
    // add r0, #0x21
    // strb r1, [r0]
    ov14_021F1F38(r5, *((u16*)r4));
}





void ov14_021EF1EC(void) {
    ov14_021F2A04(*((u32*)(r0 + 0x34)), 0xb);
    ov14_021F391C(*((u32*)(r4 + 0x34)), 0);
    ov14_021F2A18(*((u32*)(r4 + 0x34)), 0xb, 0);
    ov14_021E8248(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021E82A8(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021E8328(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021F0234(r4, ov14_021E94BC, 0x75);
}





void ov14_021EF248(void) {
    ov14_021F6A34();
    // mvn r0, r0
    // add r1, #0x1e
    ov14_021E6070(r4, r0, 0xac, 0);
    // add r1, #0x1e
    ov14_021E7588(r4, r5);
    ov14_021F2A18(*((u32*)(r4 + 0x34)), 9, 0);
    // add r5, #0x1e
    ov14_021F19F0(r4, r5);
    ov14_021E765C(r4);
    // add r5, #0x1e
    GridInputHandler_SetNextInput(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)), ((r5 << 0x18) >> 0x18));
    GridInputHandler_SetButtonInputMode(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)), 1);
    ov14_021E85E4(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021F0EE8(r4, 0x82);
    ov14_021E8648(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021F0D34(r4, 0x82);
    ov14_021F6A14(0x82);
    // mvn r0, r0
    ov14_021E6070(r4, r0, 0xac, 0);
    ov14_021E7588(r4, r5);
    ov14_021F2A18(*((u32*)(r4 + 0x34)), 9, 0);
    ov14_021F19F0(r4, r5);
    ov14_021E765C(r4);
    GridInputHandler_SetNextInput(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)), ((r5 << 0x18) >> 0x18));
    GridInputHandler_SetButtonInputMode(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)), 1);
    ov14_021E85E4(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021F0EE8(r4, 0x82);
    ov14_021E8648(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021F0D34(r4, 0x82);
    ov14_021F7B7C(r4);
    GridInputHandler_GetNextInput(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)));
    ov14_021E6070(r4, r0, 0xac, 0);
    PlaySE(0x000005DD);
    // add r0, #0x21
    // strb r5, [r0]
    // add r0, #0x26
    // strb r1, [r0]
    ov14_021F2330(r4, 0xf, 0x97);
    ov14_021F70C0(r4);
    // mvn r1, r1
    // sub r0, #0x24
    // bmi _021EF3FC
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021EF3E0: ; jump table
    // mvn r0, r0
    PlaySE(0x000005DD, 2);
    ov14_021E76B8(r4);
    ov14_021F0D58(r4, 0);
    PlaySE(0x000005DD);
    ov14_021E76B8(r4);
    ov14_021F0D58(r4, 1);
    PlaySE(0x000005DD);
    ov14_021E76B8(r4);
    ov14_021F0D58(r4, 2);
    PlaySE(0x000005DD);
    ov14_021E76B8(r4);
    ov14_021F0D58(r4, 3);
    PlaySE(0x000005DD);
    ov14_021E76B8(r4);
    ov14_021F0D58(r4, 4);
    PlaySE(0x000005DD);
    ov14_021E76B8(r4);
    ov14_021F0D58(r4, 5);
    PlaySE(0x000005DC);
    ov14_021E76B8(r4);
    // mvn r1, r1
    ov14_021F1004(r4, 0);
    // add r0, #0x25
    _s32_div_f(*((u8*)r4), 6);
    // add r1, #0x25
    GridInputHandler_SetNextInput(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)), ((r1 << 0x18) >> 0x18));
    GridInputHandler_SetButtonInputMode(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)), 1);
    ov14_021E85E4(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021F0EE8(r4, 0x82);
    ov14_021E8648(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021F0D34(r4, 0x82);
    PlaySE(0x000005DC);
    ov14_021E76B8(r4);
    ov14_021F1004(r4, 1);
    // add r0, #0x25
    _s32_div_f(*((u8*)r4), 6);
    // add r1, #0x25
    GridInputHandler_SetNextInput(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)), ((r1 << 0x18) >> 0x18));
    GridInputHandler_SetButtonInputMode(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)), 1);
    ov14_021E85E4(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021F0EE8(r4, 0x82);
    ov14_021E8648(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021F0D34(r4, 0x82);
    PlaySE(0x000005DC);
    // add r0, #0x25
    _s32_div_f(*((u8*)r4), 6);
    // add r1, #0x25
    GridInputHandler_SetNextInput(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)), ((r1 << 0x18) >> 0x18));
    ov14_021F2270(r4, 0xe, 0xaf);
    GridInputHandler_GetNextInput(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)));
    ov14_021E7588(r4, r0);
    ov14_021E8648(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021F6408(r4, 0);
    ov14_021E8620(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021E8648(*((u32*)(r1 + (0x2f << 4))));
    ov14_021E8634(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021E765C(r4);
    ov14_021E8648(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021E8634(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    PlaySE(0x000005DC);
    ov14_021F0244(r4, 0x83);
    PlaySE(0x00000633);
    ov14_021F2490(r4, 1, 0xa1);
    ov14_021E85E4(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    PlaySE(0x00000633);
    ov14_021F2490(r4, 1, 0xa1);
    PlaySE(0x000005DC);
    // add r0, #0x25
    _s32_div_f(*((u8*)r4), 6);
    // add r1, #0x25
    GridInputHandler_SetNextInput(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)), ((r1 << 0x18) >> 0x18));
    GridInputHandler_SetButtonInputMode(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)), 1);
    ov14_021F0EE8(r4, 0x82);
    ov14_021E6070(r4, r5, 0xac, 0);
    ov14_021E7588(r4, r5);
    ov14_021F1B4C(r4, r5);
}





void ov14_021EF6D4(void) {
}





void ov14_021EF6E4(void) {
    // ldr r0, [r1, r0]
}





void ov14_021EF6FC(void) {
    sub_020199E4(*((u32*)(*((u32*)(r0 + 0x34)) + (0x2f << 4))), 0x10);
    // add r0, #0x21
    ov14_021F1F38(r5, *((u16*)r4));
    // add r1, #0x21
    ov14_021F34C8(*((u32*)(r5 + 0x34)), *((u8*)r5), 0);
    // add r1, #0x21
    GridInputHandler_SetNextInput(*((u32*)(*((u32*)(r5 + 0x34)) + 0x2c)), *((u8*)r5));
    ItemIdIsMail(*((u16*)(*((u32*)(r5 + 0x34)) + 0x000088C8)), *((u32*)(r5 + 0x34)));
    // add r0, #0x21
    PlaySE(0x000005F3);
    ov14_021F6730(r5, 0x25);
    *((u32*)(r5 + 0x30)) = 0x87;
    GridInputHandler_SetButtonInputMode(*((u32*)(*((u32*)(r5 + 0x34)) + 0x2c)), 1);
    ov14_021F34C8(*((u32*)(r5 + 0x34)), 0);
    // add r1, #0x21
    ov14_021F34C8(*((u32*)(r5 + 0x34)), *((u8*)r5), 1);
    ov14_021E6070(r5, *((u16*)r4), 6, 0);
    // add r3, r6, r3
    ov14_021E6094(r5, *((u16*)r4), 6, 0x000088C8);
    ov14_021E60C0(r5, *((u8*)(r5 + 0x1f)), *((u16*)r4));
    ov14_021E64D0();
    // add r6, r3, r2
    ov14_021F2ED0(r5, *((u8*)(r5 + 0x1f)), *((u16*)r4), *((u8*)(r6 + 0x00004094)));
    ov14_021E7588(r5, *((u16*)r4));
    GridInputHandler_SetNextInput(*((u32*)(*((u32*)(r5 + 0x34)) + 0x2c)), ((*((u16*)r4) << 0x18) >> 0x18));
    // add r1, #0x21
    // strh r7, [r0, r3]
    // add r3, r6, r3
    ov14_021E6094(r5, *((u8*)r5), 6, 0x000088C8);
    // add r2, #0x21
    ov14_021E60C0(r5, *((u8*)(r5 + 0x1f)), *((u8*)r5));
    ov14_021E64D0();
    // add r0, #0x21
    // add r6, r3, r2
    ov14_021F2ED0(r5, *((u8*)(r5 + 0x1f)), *((u8*)r5), *((u8*)(r6 + 0x00004094)));
    // add r0, #0x21
    // strb r1, [r0]
    ov14_021F1F38(r5, *((u16*)r4));
    GridInputHandler_SetButtonInputMode(*((u32*)(*((u32*)(r5 + 0x34)) + 0x2c)), 1);
    ov14_021F3844(0x82);
    ov14_021F391C(*((u32*)(r5 + 0x34)), 1);
    ov14_021F29E4(*((u32*)(r5 + 0x34)), 0xb, 1);
    ov14_021F2A18(*((u32*)(r5 + 0x34)), 0xb, 1);
    ov14_021F39D0(*((u32*)(r5 + 0x34)));
    PlaySE(0x000005EB);
    ov14_021F0234(r5, ov14_021EA928, 0x86);
}





void ov14_021EF8AC(void) {
    ov14_021F34C8(*((u32*)(r0 + 0x34)), *((u16*)*((u32*)(*((u32*)(r0 + 0x34)) + 0xc))), 0);
    // add r0, #0x21
    // add r0, #0x21
    // strb r1, [r0]
    ov14_021F1F38(r5, *((u16*)r7));
    // strh r2, [r3, r1]
    ItemIdIsMail(*((u16*)(*((u32*)(r5 + 0x34)) + 0x000088C8)), 0x000088C8, 0, *((u32*)(r5 + 0x34)));
    PlaySE(0x000005F3);
    GridInputHandler_SetButtonInputMode(*((u32*)(*((u32*)(r5 + 0x34)) + 0x2c)), 0);
    ov14_021F6730(r5, 0x25);
    *((u32*)(r5 + 0x30)) = 0x87;
    GridInputHandler_SetButtonInputMode(*((u32*)(*((u32*)(r5 + 0x34)) + 0x2c)), 1);
}





u32 ov14_021EF920(void) {
}





void ov14_021EF93C(void) {
    ov14_021F7A50();
    GridInputHandler_IsButtonInputMode(*((u32*)(*((u32*)(r5 + 0x34)) + 0x2c)));
    // mvn r4, r4
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021EF970: ; jump table
    PlaySE(0x000005DC);
    ov14_021F0244(r5, 0x89);
    PlaySE(0x000005DC);
    PlaySE(0x000005EA);
    ov14_021F1C4C(r5, 0xff);
    PlaySE(0x000005EA);
    ov14_021F1C4C(r5, r4);
}





void ov14_021EF9BC(void) {
}





void ov14_021EF9CC(void) {
    ov14_021F34C8(*((u32*)(r0 + 0x34)), *((u8*)(*((u32*)(r0 + 0x34)) + 0x0000044C)), 0);
    // strh r5, [r0, r1]
    ov14_021E7588(r4, *((u8*)(*((u32*)(r4 + 0x34)) + 0x0000044C)), 0x0000044C, 0x000088CA);
    ov14_021E8620(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021F0234(r4, ov14_021E9970, 0x82);
    ov14_021E6070(r4, 6, 0);
    // add r3, r3, r6
    ov14_021E6094(r4, *((u8*)(*((u32*)(r4 + 0x34)) + 0x0000044C)), 6, *((u32*)(r4 + 0x34)));
    ov14_021E60C0(r4, *((u8*)(r4 + 0x1f)), *((u8*)(*((u32*)(r4 + 0x34)) + 0x0000044C)), *((u32*)(r4 + 0x34)));
    ov14_021E64D0();
    // add r6, r3, r2
    ov14_021F2ED0(r4, *((u8*)(r4 + 0x1f)), *((u8*)(*((u32*)(r4 + 0x34)) + 0x0000044C)), *((u8*)(r6 + 0x00004094)));
    ov14_021E7588(r4, *((u8*)(*((u32*)(r4 + 0x34)) + 0x0000044C)), *((u32*)(r4 + 0x34)));
    // strh r5, [r0, r3]
    // add r3, r5, r3
    ov14_021E6094(r4, *((u16*)(*((u32*)(r4 + 0x34)) + (0x000088C8 + 2))), 6, 0x000088C8);
    ov14_021E60C0(r4, *((u8*)(r4 + 0x1f)), *((u16*)(*((u32*)(r4 + 0x34)) + 0x000088CA)), *((u32*)(r4 + 0x34)));
    ov14_021E64D0();
    // add r5, r3, r2
    ov14_021F2ED0(r4, *((u8*)(r4 + 0x1f)), *((u16*)(*((u32*)(r4 + 0x34)) + 0x000088CA)), *((u8*)(r5 + 0x00004094)));
    ov14_021E8620(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021F0234(r4, ov14_021E9970, 0x82);
    // strb r1, [r2, r0]
    ov14_021F2A18(*((u32*)(r4 + 0x34)), 0xb, 0);
    ov14_021F39A0(*((u32*)(r4 + 0x34)), *((u8*)(*((u32*)(r4 + 0x34)) + 0x0000044C)), 2);
    ov14_021F3844(*((u32*)(r4 + 0x34)), *((u16*)(*((u32*)(r4 + 0x34)) + 0x000088C8)));
    ov14_021F5564(r4, *((u16*)(*((u32*)(r4 + 0x34)) + 0x000088C8)), *((u32*)(r4 + 0x34)));
    // add r3, #0x30
    // add r2, r3, r2
    sub_02019A60(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), 0x10, (r0 << 4), *((u32*)(r4 + 0x34)));
    // add r2, #0x30
    // add r2, r2, r3
    sub_02019A60(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), 0x10, *((u32*)(r4 + 0x34)), ((r5 + 1) << 4));
    ov14_021F38B0(*((u32*)(r4 + 0x34)), *((u16*)(*((u32*)(r4 + 0x34)) + 0x000088C8)));
    ov14_021E88BC(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021F0234(r4, ov14_021EAA04, 0x88);
}





void ov14_021EFB64(void) {
    ov14_021F6A24();
    // mvn r0, r0
    // add r1, #0x1e
    ov14_021E6070(r4, r0, 0xac, 0);
    PlaySE(0x000005EB);
    // add r0, r2, r1
    // add r1, r2, r1
    System_GetTouchNewCoords((0x000040B8 + 4), *((u32*)(r4 + 0x34)));
    // add r1, #0x1e
    ov14_021E7588(r4, r5);
    ov14_021F2A18(*((u32*)(r4 + 0x34)), 9, 0);
    // add r5, #0x1e
    ov14_021F1D6C(r4, r5);
    ov14_021E8544(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    // add r0, #0x21
    // sub r0, #0x1e
    GridInputHandler_GetNextInput(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)));
    ov14_021F7AC4(*((u32*)(r4 + 0x34)), r5, r0);
    GridInputHandler_SetNextInput(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)), r5);
    ov14_021E84A4(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021E8328(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021F40DC(r4);
    ov14_021E88F8(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021F0234(r4, ov14_021EA674, 0x8c);
    GridInputHandler_SetNextInput(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)), ((r5 << 0x18) >> 0x18));
    GridInputHandler_SetButtonInputMode(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)), 1);
    ov14_021E765C(r4);
    ov14_021F75C8(r4);
    // mvn r1, r1
    // add r0, r5, r5
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021EFC74: ; jump table
    // mvn r0, r0
    PlaySE(0x000005DD, 2);
    ov14_021F2490(r4, 0, 0xb0);
    PlaySE(0x000005DD);
    ov14_021F2270(r4, 7, 0xad);
    GridInputHandler_GetNextInput(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)));
    // add r1, #0x1e
    ov14_021E7588(r4, r0);
    ov14_021E765C(r4);
    PlaySE(0x000005DC);
    ov14_021F0244(r4, 0x8c);
    PlaySE(0x00000633);
    ov14_021F2270(r4, 0xa, 0x9f);
    PlaySE(0x000005DC);
    // add r0, #0x21
    // sub r0, #0x1e
    GridInputHandler_GetNextInput(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)));
    ov14_021F7AC4(*((u32*)(r4 + 0x34)), r5, r0);
    GridInputHandler_SetNextInput(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)), r5);
    ov14_021F2270(r4, 0xb, 0xb1);
    GridInputHandler_GetNextInput(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)));
    // add r1, #0x1e
    ov14_021E7588(r4, r0);
    ov14_021E765C(r4);
    PlaySE(0x000005DC);
    // add r1, #0x1e
    ov14_021E6070(r4, r5, 0xac, 0);
    PlaySE(0x000005DD);
    // add r1, #0x1e
    ov14_021E7588(r4, r5);
    GridInputHandler_GetNextInput(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)));
    ov14_021F7AC4(*((u32*)(r4 + 0x34)), 8, r0);
    GridInputHandler_SetNextInput(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)), 8);
    // add r5, #0x1e
    ov14_021F1CDC(r4, r5);
}





void ov14_021EFDE4(void) {
}





void ov14_021EFDF4(void) {
    // add r1, #0x21
    ov14_021F1F38(r0, *((u16*)(*((u32*)(r0 + 0x34)) + 0x000088C8)), *((u16*)*((u32*)(*((u32*)(r0 + 0x34)) + 0xc))));
    ItemIdIsMail(*((u16*)(*((u32*)(r4 + 0x34)) + 0x000088C8)), 0x000088C8);
    // add r0, #0x21
    PlaySE(0x000005F3);
    sub_0201980C(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), 7);
    // add r1, #0x21
    ov14_021F34C8(*((u32*)(r4 + 0x34)), *((u8*)r4), 0);
    ov14_021F68C0(r4, 7, 0x28);
    *((u32*)(r4 + 0x30)) = 0x92;
    ov14_021F6654(6, 0x28);
    // strb r2, [r1, r0]
    PlaySE(0x000005EA, *((u32*)(r4 + 0x34)), 0);
    // add r1, #0x21
    ov14_021F34C8(*((u32*)(r4 + 0x34)), *((u8*)r4), 0);
    GridInputHandler_SetNextInput(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)), 8);
    GridInputHandler_SetButtonInputMode(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)), 1);
    ov14_021F6654(0x8b, 0x28);
    PlaySE(0x000005EA);
    ov14_021F34C8(*((u32*)(r4 + 0x34)), *((u16*)r5), 0);
    // add r1, #0x21
    ov14_021F34C8(*((u32*)(r4 + 0x34)), *((u8*)r4), 1);
    ov14_021F40DC(r4);
    ov14_021F391C(*((u32*)(r4 + 0x34)), 1);
    ov14_021F29E4(*((u32*)(r4 + 0x34)), 0xb, 2);
}





void ov14_021EFF00(void) {
    ov14_021F2A04(*((u32*)(r0 + 0x34)), 0xb);
    ov14_021F391C(*((u32*)(r5 + 0x34)), 0);
    ov14_021F2A18(*((u32*)(r5 + 0x34)), 0xb, 0);
    ov14_021E6070(r5, *((u16*)*((u32*)(*((u32*)(r5 + 0x34)) + 0xc))), 6, 0);
    // add r3, r6, r3
    ov14_021E6094(r5, *((u16*)r4), 6, 0x000088C8);
    ov14_021E60C0(r5, *((u8*)(r5 + 0x1f)), *((u16*)r4));
    ov14_021E64D0();
    // add r6, r3, r2
    ov14_021F2ED0(r5, *((u8*)(r5 + 0x1f)), *((u16*)r4), *((u8*)(r6 + 0x00004094)));
    ov14_021E7588(r5, *((u16*)r4));
    // add r1, #0x21
    // strh r7, [r0, r3]
    // add r3, r6, r3
    ov14_021E6094(r5, *((u8*)r5), 6, 0x000088C8);
    // add r2, #0x21
    ov14_021E60C0(r5, *((u8*)(r5 + 0x1f)), *((u8*)r5));
    ov14_021E64D0();
    // add r0, #0x21
    // add r6, r3, r2
    ov14_021F2ED0(r5, *((u8*)(r5 + 0x1f)), *((u8*)r5), *((u8*)(r6 + 0x00004094)));
    // add r0, #0x21
    // strb r1, [r0]
    ov14_021F1F38(r5, *((u16*)r4), *((u8*)(*((u32*)(r5 + 0x34)) + 0x0000044A)));
    // add r1, #0x21
    // sub r1, #0x1e
    GridInputHandler_SetNextInput(*((u32*)(*((u32*)(r5 + 0x34)) + 0x2c)), ((*((u8*)r5) << 0x18) >> 0x18));
    ov14_021E8328(*((u32*)(*((u32*)(r5 + 0x34)) + (0x2f << 4))), *((u32*)(r5 + 0x34)));
    ov14_021F0234(r5, ov14_021E94BC, 0x8f);
    // strb r2, [r0, r1]
    ov14_021F1F38(r5, 0);
    // add r1, #0x21
    // sub r1, #0x1e
    GridInputHandler_SetNextInput(*((u32*)(*((u32*)(r5 + 0x34)) + 0x2c)), ((*((u8*)r5) << 0x18) >> 0x18));
    ov14_021E7EE0(*((u32*)(*((u32*)(r5 + 0x34)) + (0x2f << 4))), *((u32*)(r5 + 0x34)));
    ov14_021F3488(r5, 1, 1);
    ov14_021F0234(r5, ov14_021E9518, 0x8f);
    PlaySE(0x000005EB);
    ov14_021F3844(*((u32*)(r5 + 0x34)), *((u16*)(*((u32*)(r5 + 0x34)) + 0x000088C8)));
    ov14_021F391C(*((u32*)(r5 + 0x34)), 1);
    ov14_021F29E4(*((u32*)(r5 + 0x34)), 0xb, 1);
    ov14_021F2A18(*((u32*)(r5 + 0x34)), 0xb, 1);
    ov14_021F39D0(*((u32*)(r5 + 0x34)));
    ov14_021F0234(r5, ov14_021EAF08, 0x90);
}





u32 ov14_021F00A0(void) {
}





void ov14_021F00BC(void) {
    ov14_021F34C8(*((u32*)(r0 + 0x34)), *((u16*)*((u32*)(*((u32*)(r0 + 0x34)) + 0xc))), 0);
    PlaySE(0x000005EA);
    ov14_021F40DC(r5);
    ov14_021F391C(*((u32*)(r5 + 0x34)), 1);
    ov14_021F29E4(*((u32*)(r5 + 0x34)), 0xb, 2);
    // add r0, #0x21
    // add r0, #0x21
    // strb r1, [r0]
    // add r1, #0x21
    // sub r1, #0x1e
    GridInputHandler_SetNextInput(*((u32*)(*((u32*)(r5 + 0x34)) + 0x2c)), ((*((u8*)r5) << 0x18) >> 0x18));
    ov14_021F1F38(r5);
}





void ov14_021F0120(void) {
    ov14_021F2A04(*((u32*)(r0 + 0x34)), 0xb);
    ov14_021F391C(*((u32*)(r4 + 0x34)), 0);
    ov14_021F2A18(*((u32*)(r4 + 0x34)), 0xb, 0);
    ov14_021E8328(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021F0234(r4, ov14_021E94BC, 0x8f);
}





void ov14_021F0164(void) {
    // ldr r0, [r1, r0]
}





void ov14_021F0198(void) {
    PlaySE(0x000005F3);
    ov14_021F68C0(r4, 5, 0x25);
    *((u32*)(r4 + 0x30)) = 0xe;
}





void ov14_021F01B8(void) {
    PlaySE(0x000005F3);
    ov14_021F6724(r4, 0x25);
    *((u32*)(r4 + 0x30)) = 0xe;
}





void ov14_021F01D8(void) {
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // str r4, [r1, r0]
}





void ov14_021F0204(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r4, [r1, r0]
}





void ov14_021F0234(void) {
}





void ov14_021F0244(void) {
}





void ov14_021F0254(void) {
    ov14_021E5EFC(1);
    ov14_021E5EFC(0);
    // strh r4, [r1, r0]
}





void ov14_021F027C(void) {
    *((u8*)(r0 + 0x1e)) = r1;
    *((u32*)(r0 + 0x30)) = 9;
}





void ov14_021F028C(void) {
    *((u8*)(r0 + 0x1f)) = (0x11 - 1);
    ov14_021F2DE8(r0, *((u8*)(r0 + 0x1f)));
    ov14_021E7930(r5, *((u8*)(r5 + 0x1f)));
    ov14_021E783C(r5, r0, 0);
    ov14_021F29E4(*((u32*)(r5 + 0x34)), 0, 2);
    ov14_021E8544(*((u32*)(*((u32*)(r5 + 0x34)) + (0x2f << 4))), *((u32*)(r5 + 0x34)));
    ov14_021E84A4(*((u32*)(*((u32*)(r5 + 0x34)) + (0x2f << 4))), *((u32*)(r5 + 0x34)));
    ov14_021E8248(*((u32*)(*((u32*)(r5 + 0x34)) + (0x2f << 4))), *((u32*)(r5 + 0x34)));
    ov14_021E82A8(*((u32*)(*((u32*)(r5 + 0x34)) + (0x2f << 4))), *((u32*)(r5 + 0x34)));
    ov14_021F0234(r5, ov14_021E92AC, r4);
}





void ov14_021F0314(void) {
    *((u8*)(r0 + 0x1f)) = (0 + 1);
    ov14_021F2DE8(r0, *((u8*)(r0 + 0x1f)));
    ov14_021E7930(r5, *((u8*)(r5 + 0x1f)));
    ov14_021E783C(r5, r0, 1);
    ov14_021F29E4(*((u32*)(r5 + 0x34)), 1, 4);
    ov14_021E8544(*((u32*)(*((u32*)(r5 + 0x34)) + (0x2f << 4))), *((u32*)(r5 + 0x34)));
    ov14_021E84A4(*((u32*)(*((u32*)(r5 + 0x34)) + (0x2f << 4))), *((u32*)(r5 + 0x34)));
    ov14_021E8248(*((u32*)(*((u32*)(r5 + 0x34)) + (0x2f << 4))), *((u32*)(r5 + 0x34)));
    ov14_021E82A8(*((u32*)(*((u32*)(r5 + 0x34)) + (0x2f << 4))), *((u32*)(r5 + 0x34)));
    ov14_021F0234(r5, ov14_021E9370, r4);
}





void ov14_021F039C(void) {
    // add r0, #0x21
    // strb r1, [r0]
    // add r1, #0x21
    ov14_021F3190(*((u32*)(r0 + 0x34)), *((u8*)r0), 0);
    ov14_021F3F6C(r4);
    ov14_021F08BC(r4);
    ov14_021E8544(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021E8234(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021E8294(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021E8314(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021E84A4(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    // add r0, #0x22
    // strb r1, [r0]
    ov14_021F0234(r4, ov14_021E8BA4, 0xd);
}





void ov14_021F0418(void) {
    // add r0, #0x21
    // strb r1, [r0]
    // add r1, #0x21
    ov14_021F3190(*((u32*)(r0 + 0x34)), *((u8*)r0), 0);
    ov14_021F3F6C(r4);
    ov14_021F3044(r4);
    ov14_021F3488(r4, 1, 1);
    ov14_021F3488(r4, 2, 1);
    // add r1, #0x21
    ov14_021F34C8(*((u32*)(r4 + 0x34)), *((u8*)r4), 0);
    // add r1, #0x21
    ov14_021F685C(r4, *((u8*)r4), 1, 0x27);
    Party_GetCount(*((u32*)(r4 + 8)));
    ov14_021F6928(r4, 0x28, 1);
    ov14_021F6928(r4, 0x28, 3);
    ov14_021F08BC(r4);
    ov14_021E84A4(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021E8544(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021E8314(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    // add r0, #0x22
    // strb r1, [r0]
    ov14_021F0234(r4, ov14_021E9C88, 0x57);
}





void ov14_021F04D4(void) {
    // add r0, #0x21
    // strb r1, [r0]
    // add r1, #0x21
    ov14_021F3190(*((u32*)(r0 + 0x34)), *((u8*)r0), 1);
    ov14_021F3F6C(r4);
    // add r1, #0x21
    ov14_021F685C(r4, *((u8*)r4), 1, 0x27);
    ov14_021E8434(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021E8314(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021E8824(*((u32*)(r4 + 0x34)));
    ov14_021F0234(r4, ov14_021EA068, 0x58);
}





void ov14_021F0530(void) {
    // add r0, #0x21
    // strb r1, [r0]
    // add r1, #0x21
    ov14_021F3190(*((u32*)(r0 + 0x34)), *((u8*)r0), 1);
    ov14_021F3F6C(r4);
    ov14_021E8434(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021E8234(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021E8294(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021E8314(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021E8824(*((u32*)(r4 + 0x34)));
    ov14_021F0234(r4, ov14_021EA0B8, 0x4a);
}





void ov14_021F0594(void) {
    // add r0, #0x21
    // strb r4, [r0]
    // add r1, #0x21
    ov14_021F3190(*((u32*)(r0 + 0x34)), *((u8*)r0), 0);
    ov14_021F3F6C(r5);
    // sub r1, #0x1e
    Party_GetMonByIndex(*((u32*)(r5 + 8)), r4);
    // sub r4, #0x1e
    ov14_021E6480(r5, r4);
    PCStorage_CountMonsInBox(*((u32*)(r5 + 4)), *((u8*)(r5 + 0x1f)));
    ov14_021F6928(r5, 0x28, 8);
    GetMonData(r6, 6, 0);
    ItemIdIsMail(((r0 << 0x10) >> 0x10));
    ov14_021F6928(r5, 0x28, 6);
    GetMonData(r6, 0xa2, 0);
    ov14_021F6928(r5, 0x28, 7);
    ov14_021F6928(r5, 0x28, 0);
    ov14_021F08BC(r5);
    ov14_021E84A4(*((u32*)(*((u32*)(r5 + 0x34)) + (0x2f << 4))), *((u32*)(r5 + 0x34)));
    ov14_021E8314(*((u32*)(*((u32*)(r5 + 0x34)) + (0x2f << 4))), *((u32*)(r5 + 0x34)));
    // add r0, #0x22
    // strb r1, [r0]
    ov14_021F0234(r5, ov14_021E8D20, 0x27);
}





void ov14_021F0660(void) {
    // str r1, [sp]
    // ldr r0, [sp]
    // add r1, #0x21
    // strb r0, [r1]
    // add r0, #0x21
    ov14_021F3190(*((u32*)(r0 + 0x34)), 0x1e, 0);
    ov14_021F3190(r4, r7);
    ov14_021F3F6C(r5);
    ov14_021F3488(r5, 2, 1);
    // add r1, #0x21
    ov14_021F34C8(*((u32*)(r5 + 0x34)), *((u8*)r5), 0);
    // add r1, #0x21
    ov14_021F685C(r5, *((u8*)r5), 1, 0x27);
    // ldr r1, [sp]
    // sub r1, #0x1e
    Party_GetMonByIndex(*((u32*)(r5 + 8)));
    // ldr r1, [sp]
    // sub r1, #0x1e
    // str r1, [sp]
    ov14_021E6480(r5);
    ov14_021F6928(r5, 0x28, 8);
    GetMonData(r4, 6, 0);
    ItemIdIsMail(((r0 << 0x10) >> 0x10));
    ov14_021F6928(r5, 0x28, 6);
    GetMonData(r4, 0xa2, 0);
    ov14_021F6928(r5, 0x28, 7);
    PCStorage_CountEmptySpotsInBox(*((u32*)(r5 + 4)), *((u8*)(r5 + 0x1f)));
    ov14_021F6928(r5, 0x28, 2);
    ov14_021F6928(r5, 0x28, 0);
    ov14_021F08BC(r5);
    ov14_021E84A4(*((u32*)(*((u32*)(r5 + 0x34)) + (0x2f << 4))), *((u32*)(r5 + 0x34)));
    ov14_021E8544(*((u32*)(*((u32*)(r5 + 0x34)) + (0x2f << 4))), *((u32*)(r5 + 0x34)));
    ov14_021E8314(*((u32*)(*((u32*)(r5 + 0x34)) + (0x2f << 4))), *((u32*)(r5 + 0x34)));
    // add r0, #0x22
    // strb r1, [r0]
    ov14_021F0234(r5, ov14_021E9A24, 0x6e);
}





void ov14_021F0794(void) {
    // add r0, #0x21
    // strb r1, [r0]
    // add r1, #0x21
    ov14_021F3190(*((u32*)(r0 + 0x34)), *((u8*)r0), 1);
    ov14_021F3F6C(r4);
    // add r1, #0x21
    ov14_021F685C(r4, *((u8*)r4), 1, 0x27);
    ov14_021E8434(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021E8314(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021E8824(*((u32*)(r4 + 0x34)));
    ov14_021F0234(r4, ov14_021EA068, 0x6f);
}





void ov14_021F07F0(void) {
    // add r0, #0x21
    // strb r1, [r0]
    // add r1, #0x21
    ov14_021F3190(*((u32*)(r0 + 0x34)), *((u8*)r0), 1);
    ov14_021F3F6C(r4);
    ov14_021E8434(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021E8314(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021E8824(*((u32*)(r4 + 0x34)));
    ov14_021F0234(r4, ov14_021EA0B8, 0x4c);
}





void ov14_021F083C(void) {
    // add r0, #0x21
    // strb r1, [r0]
    // add r1, #0x21
    ov14_021F3190(*((u32*)(r0 + 0x34)), *((u8*)r0), 0);
    ov14_021F3F6C(r4);
    ov14_021E85E4(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021E85D0(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021E8648(*((u32*)(r1 + (0x2f << 4))));
    ov14_021E8634(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021E8824(*((u32*)(r4 + 0x34)));
    ov14_021F6408(r4, 0);
    ov14_021F08BC(r4);
    // add r0, #0x22
    // strb r1, [r0]
    ov14_021F0234(r4, ov14_021E8FD4, 0x2a);
}





void ov14_021F08BC(void) {
    // str r0, [sp]
    // str r0, [r5]
    // add r5, #0x20
    // ldr r0, [sp]
    // add r0, #0xe0
    // str r1, [r0]
    // ldr r0, [sp]
}





void ov14_021F08F0(void) {
    // add r5, #0x20
}





void ov14_021F0910(void) {
    // add r1, #0x21
    ov14_021E6070(*((u8*)r0), 0x4c, 0);
    ov14_021F2A18(*((u32*)(r5 + 0x34)), 9, 0);
    ov14_021E84A4(*((u32*)(*((u32*)(r5 + 0x34)) + (0x2f << 4))), *((u32*)(r5 + 0x34)));
    ov14_021F0234(r5, ov14_021E9450, 0x4f);
    // add r1, #0x21
    ov14_021E6070(r5, *((u8*)r5), 6, 0);
    *((u32*)(r5 + 0x2c)) = 0x26;
    ov14_021F027C(r5, 1);
    ov14_021F2A18(*((u32*)(r5 + 0x34)), 9, 0);
    ItemIdIsMail(((r4 << 0x10) >> 0x10));
    ov14_021E84A4(*((u32*)(*((u32*)(r5 + 0x34)) + (0x2f << 4))), *((u32*)(r5 + 0x34)));
    ov14_021F0234(r5, ov14_021E9450, 0x50);
    ov14_021E83F4(*((u32*)(r1 + (0x2f << 4))));
    ov14_021F6704(r5, r4, 0x25);
    ov14_021F0254(r5, 0);
}





void ov14_021F09BC(void) {
    ov14_021F6AC0(0, 9);
    ov14_021F6AC0(2, 0x24);
    // add r0, #0x21
    ov14_021F6AC0(r4, 3, 0x27);
    ov14_021F6AC0(r4, 5, 0xb);
    ov14_021F2A18(*((u32*)(r4 + 0x34)), 9, 0);
    ov14_021F6654(*((u32*)(r4 + 0x34)), 0x26);
    // add r0, #0x24
    ov14_021F57B8(r4);
    // add r0, #0x21
    ov14_021F3488(r4, 1, 0);
    ov14_021F3488(r4, 2, 0);
    ov14_021E7E64(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    // add r0, #0x21
    ov14_021F0234(r4, ov14_021E94A8, 0x17);
    ov14_021F0234(r4, ov14_021E94A8, 0xe);
}





void ov14_021F0A80(void) {
    ov14_021F2A18(*((u32*)(r0 + 0x34)), 9, 0);
    ov14_021E84A4(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021F0234(r4, ov14_021E9434, 0x13);
}





void ov14_021F0AAC(void) {
    ov14_021F2A18(*((u32*)(r0 + 0x34)), 9, 0);
    ov14_021E84A4(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021F0234(r4, ov14_021E9450, 0x19);
}





void ov14_021F0AD8(void) {
    // add r0, #0x23
    // strb r1, [r0]
    ov14_021F43F4(*((u32*)(r0 + 0x34)), 0);
    ov14_021F3488(r4, 1, 1);
    ov14_021F2A18(*((u32*)(r4 + 0x34)), 9, 0);
    ov14_021E8234(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021E8294(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021E8314(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021F0234(r4, ov14_021E94BC, 0x22);
}





void ov14_021F0B34(void) {
    // add r0, #0x23
    // strb r2, [r0]
}





void ov14_021F0B70(void) {
    // ldr r0, [r1, r0]
    // ldr r0, [r1, r0]
    // ldr r0, [r1, r0]
}





void ov14_021F0BB4(void) {
    // ldr r0, [r1, r0]
    // ldr r0, [r1, r0]
    // ldr r0, [r1, r0]
}





void ov14_021F0BF4(void) {
    // ldr r0, [r1, r0]
}





void ov14_021F0C0C(void) {
    // add r0, #0x21
    // strb r1, [r0]
    ov14_021F2A18(*((u32*)(r0 + 0x34)), 9, 0);
    ov14_021E8020(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021E8544(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021E84A4(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021F0234(r4, ov14_021E952C, 0x2d);
}





void ov14_021F0C58(void) {
    // add r1, #0x21
    // strb r2, [r1]
    ov14_021F3488(1, 1);
    ov14_021E805C(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021F0234(r4, ov14_021E954C, 0x2e);
}





void ov14_021F0C88(void) {
    // add r0, #0x24
    // strb r1, [r0]
    // add r0, #0x29
    // strb r2, [r0]
    ov14_021F2A18(*((u32*)(r0 + 0x34)), 9, 0);
    ov14_021E8234(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021E8294(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021E8314(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021F0234(r4, ov14_021E94BC, 0x2f);
}





void ov14_021F0CD8(void) {
    // add r0, #0x24
    // strb r1, [r0]
}





void ov14_021F0D34(void) {
    ov14_021E8634(*((u32*)(*((u32*)(r0 + 0x34)) + (0x2f << 4))), *((u32*)(r0 + 0x34)));
    ov14_021F0234(r5, ov14_021E9970, r4);
}





void ov14_021F0D58(void) {
    // add r0, #0x25
    _s32_div_f(*((u8*)r0), 6);
    // add r1, r6, r1
    // add r0, #0x25
    // strb r1, [r0]
    ov14_021F48B4(r5, (6 * r0));
    ov14_021F57B8(r5);
    // add r0, #0x25
    ov14_021E85E4(*((u32*)(*((u32*)(r5 + 0x34)) + (0x2f << 4))), *((u32*)(r5 + 0x34)));
    // add r0, #0x25
    _s32_div_f(*((u8*)r5), 6);
    // add r1, #0x25
    GridInputHandler_SetNextInput(*((u32*)(*((u32*)(r5 + 0x34)) + 0x2c)), ((r1 << 0x18) >> 0x18));
    GridInputHandler_SetButtonInputMode(*((u32*)(*((u32*)(r5 + 0x34)) + 0x2c)), 1);
    ov14_021F29E4(*((u32*)(r5 + 0x34)), 9, 0xe);
    ov14_021F0EE8(r5, r4);
    ov14_021E8648(*((u32*)(*((u32*)(r5 + 0x34)) + (0x2f << 4))), *((u32*)(r5 + 0x34)));
    // add r0, #0x25
    _s32_div_f(*((u8*)r5), 6);
    // add r1, #0x25
    GridInputHandler_SetNextInput(*((u32*)(*((u32*)(r5 + 0x34)) + 0x2c)), ((r1 << 0x18) >> 0x18));
    GridInputHandler_SetButtonInputMode(*((u32*)(*((u32*)(r5 + 0x34)) + 0x2c)), 1);
    ov14_021F29E4(*((u32*)(r5 + 0x34)), 9, 0xe);
    ov14_021E8634(*((u32*)(*((u32*)(r5 + 0x34)) + (0x2f << 4))), *((u32*)(r5 + 0x34)));
    ov14_021F0234(r5, ov14_021E9970, r4);
    ov14_021F29E4(*((u32*)(r5 + 0x34)), 9, 0xe);
    GridInputHandler_SetNextInput(*((u32*)(*((u32*)(r5 + 0x34)) + 0x2c)), 0x2d);
    GridInputHandler_IsButtonInputMode(*((u32*)(*((u32*)(r5 + 0x34)) + 0x2c)));
    GridInputHandler_GetDpadBox(*((u32*)(*((u32*)(r5 + 0x34)) + 0x2c)), 0x2d);
    // add r1, sp, #0
    // add r1, #1
    // add r2, sp, #0
    DpadMenuBox_GetPosition();
    // add r2, sp, #0
    ManagedSprite_SetPositionXY(*((u32*)(*((u32*)(r5 + 0x34)) + (0x32 << 4))), *((u8*)(r2 + 1)), *((u8*)r2));
    ov14_021F29E4(*((u32*)(r5 + 0x34)), 9, 8);
    ov14_021F2A18(*((u32*)(r5 + 0x34)), 9, 1);
    ov14_021E85E4(*((u32*)(*((u32*)(r5 + 0x34)) + (0x2f << 4))), *((u32*)(r5 + 0x34)));
    ov14_021F604C(r5);
    ov14_021E8648(*((u32*)(*((u32*)(r5 + 0x34)) + (0x2f << 4))), *((u32*)(r5 + 0x34)));
    ov14_021E8634(*((u32*)(*((u32*)(r5 + 0x34)) + (0x2f << 4))), *((u32*)(r5 + 0x34)));
    ov14_021F0234(r5, ov14_021E9920, r4);
}





void ov14_021F0EE8(void) {
    ov14_021E85D0(*((u32*)(*((u32*)(r0 + 0x34)) + (0x2f << 4))), *((u32*)(r0 + 0x34)));
    ov14_021F0234(r5, ov14_021E9970, r4);
}





void ov14_021F0F0C(void) {
    // add r2, #0x25
    *((u8*)(r0 + 0x1f)) = *((u8*)r0);
    // add r2, #0x25
    ov14_021F2DE8(*((u8*)(r0 + 0x1f)), *((u8*)r0));
    ov14_021E7930(r4, *((u8*)(r4 + 0x1f)));
    ov14_021E783C(r4, r0, 0);
    ov14_021F2DE8();
    ov14_021E7930(r4, *((u8*)(r4 + 0x1f)));
    ov14_021E783C(r4, r0, 1);
    // add r0, r5, r5
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021F0F6A: ; jump table
    ov14_021F4848(r4);
    // add r0, #0x23
    *((u32*)(r4 + 0x30)) = 0xc;
    *((u32*)(r4 + 0x30)) = 0x24;
    ov14_021F4848(r4);
    *((u32*)(r4 + 0x30)) = 0x3d;
    *((u32*)(r4 + 0x30)) = 0x47;
    ov14_021F4848(r4);
    ov14_021E85E4(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021E85D0(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    *((u32*)(r4 + 0x30)) = 0x29;
    ov14_021F4848(r4);
    ov14_021E85E4(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021E85D0(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    *((u32*)(r4 + 0x30)) = 0x82;
    ov14_021F0234(r4, r6, *((u32*)(r4 + 0x30)));
}





void ov14_021F1004(void) {
    // add r0, #0x25
    // add r1, r1, r0
    // bpl _021F101A
    // add r1, #0x12
    // sub r1, #0x12
    // add r0, #0x25
    // strb r1, [r0]
}





void ov14_021F1058(void) {
    ov14_021F4720();
    ov14_021F4848(r5);
    ov14_021F48B4(r5);
    ov14_021F57B8(r5);
    ov14_021E86E0(*((u32*)(*((u32*)(r5 + 0x34)) + (0x2f << 4))), *((u32*)(r5 + 0x34)));
    ov14_021F0234(r5, ov14_021E9554, r4);
}





void ov14_021F1090(void) {
    ov14_021E8704(*((u32*)(*((u32*)(r0 + 0x34)) + (0x2f << 4))), *((u32*)(r0 + 0x34)));
    ov14_021F0234(r5, ov14_021E9590, r4);
}





void ov14_021F10B4(void) {
    ov14_021F5EC4(0);
    ov14_021E8328(*((u32*)(*((u32*)(r5 + 0x34)) + (0x2f << 4))), *((u32*)(r5 + 0x34)));
    ov14_021F0234(r5, ov14_021E95B4, r4);
}





void ov14_021F10DC(void) {
    ov14_021E8314(*((u32*)(*((u32*)(r0 + 0x34)) + (0x2f << 4))), *((u32*)(r0 + 0x34)));
    ov14_021F0234(r5, ov14_021E95B4, r4);
}





void ov14_021F1100(void) {
    // add r0, #0x21
    // strb r1, [r0]
    ov14_021E84A4(*((u32*)(*((u32*)(r0 + 0x34)) + (0x2f << 4))), *((u32*)(r0 + 0x34)));
    ov14_021F0234(r5, ov14_021E9434, r4);
}





void ov14_021F1128(void) {
    ov14_021F2A18(*((u32*)(r0 + 0x34)), 9, 0);
    _s32_div_f(*((u8*)(r4 + 0x1f)), 6);
    // str r1, [r2, r0]
    *((u32*)(r4 + 0x2c)) = *((u32*)(*((u32*)(r4 + 0x34)) + 0x0000043C));
    ov14_021E8544(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)), *((u32*)(r4 + 0x34)));
    ov14_021ED5B0(r4);
    ov14_021F1100(r4, 0x35);
}





void ov14_021F1170(void) {
    // add r0, #0x25
    _s32_div_f(*((u8*)r0), 6);
    // add r1, r4, r1
    // add r0, #0x25
    // strb r1, [r0]
    ov14_021F48B4(r5, (6 * r0));
    ov14_021F57B8(r5);
    GridInputHandler_GetNextInput(*((u32*)(*((u32*)(r5 + 0x34)) + 0x2c)));
    // str r2, [r1, r0]
    GridInputHandler_SetNextLastUnk0FInputs(*((u32*)(*((u32*)(r5 + 0x34)) + 0x2c)), 8, r0, r0);
    GridInputHandler_GetDpadBox(*((u32*)(*((u32*)(r5 + 0x34)) + 0x2c)), 8);
    // add r1, sp, #0
    // add r1, #1
    // add r2, sp, #0
    DpadMenuBox_GetPosition();
    // add r2, sp, #0
    ManagedSprite_SetPositionXY(*((u32*)(*((u32*)(r5 + 0x34)) + (0x32 << 4))), *((u8*)(r2 + 1)), *((u8*)r2));
    ov14_021F29E4(*((u32*)(r5 + 0x34)), 9, 8);
    ov14_021F2A18(*((u32*)(r5 + 0x34)), 9, 1);
}





void ov14_021F11F8(void) {
    // add r0, #0x25
}





void ov14_021F1228(void) {
    // add r3, r3, r2
    // bpl _021F123C
    // add r3, #0x18
    // sub r3, #0x18
    // strb r3, [r0, r2]
    ov14_021F29E4(*((u32*)(r0 + 0x34)), 5, 4, *((u8*)(*((u32*)(r0 + 0x34)) + 0x0000044D)));
    ov14_021F29E4(4, 2);
    ov14_021F462C(r4);
    ov14_021F4530(r4);
    ov14_021F58B8(r4);
    // sub r2, r2, r3
    // ror r2, r1
    // add r1, r3, r2
    GridInputHandler_SetNextInput(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)), ((0x1e << 0x18) >> 0x18), (*((u8*)(*((u32*)(r4 + 0x34)) + 0x0000044D)) << 0x1e), (*((u8*)(*((u32*)(r4 + 0x34)) + 0x0000044D)) >> 0x1f));
    GridInputHandler_SetButtonInputMode(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)), 1);
}





void ov14_021F129C(void) {
    // add r1, r1, r5
    // strb r1, [r2, r3]
    ov14_021F459C(*((u32*)(r0 + 0x34)), 0x0000044D);
    ov14_021F58B8(r4);
    GridInputHandler_GetNextInput(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)));
    // str r0, [r2, r1]
    GridInputHandler_SetNextLastUnk0FInputs(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)), 6, ((*((u32*)(*((u32*)(r4 + 0x34)) + 0x0000043C)) << 0x18) >> 0x18), ((*((u32*)(*((u32*)(r4 + 0x34)) + 0x0000043C)) << 0x18) >> 0x18));
    GridInputHandler_GetDpadBox(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)), 6);
    // add r1, sp, #0
    // add r1, #1
    // add r2, sp, #0
    DpadMenuBox_GetPosition();
    // add r2, sp, #0
    ManagedSprite_SetPositionXY(*((u32*)(*((u32*)(r4 + 0x34)) + (0x32 << 4))), *((u8*)(r2 + 1)), *((u8*)r2));
    ov14_021F29E4(*((u32*)(r4 + 0x34)), 9, 8);
    ov14_021F2A18(*((u32*)(r4 + 0x34)), 9, 1);
}





void ov14_021F131C(void) {
    // sub r1, #0x10
    PCStorage_IsBonusWallpaperUnlocked(*((u32*)(r0 + 4)), *((u8*)(*((u32*)(r0 + 0x34)) + 0x0000044D)));
    PlaySE(0x000005F3);
    ov14_021F2270(r4, 0xc, 0x42);
    // add r1, #0x25
    ov14_021E7930(r4, *((u8*)r4));
    PlaySE(0x000005F3, *((u8*)(*((u32*)(r4 + 0x34)) + 0x0000044D)), *((u32*)(r4 + 0x34)));
    ov14_021F2270(r4, 0xc, 0x42);
    // add r0, #0x25
    PlaySE(0x000005DC, *((u8*)r4));
    ov14_021F2270(r4, 0xc, 0xa5);
    PlaySE(0x000005DD);
    ov14_021F2270(r4, 0xc, 0x47);
}





void ov14_021F13B0(void) {
    ov14_021F2A18(*((u32*)(r0 + 0x34)), 9, 0);
    Party_GetCount(*((u32*)(r4 + 8)));
    ov14_021F6654(*((u32*)(r4 + 0x34)), 0x27);
    ov14_021E84A4(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021E884C(*((u32*)(r4 + 0x34)));
    ov14_021F0234(r4, ov14_021E9434, 0x53);
    ov14_021E83F4(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021F685C(r4, 0, 2, 0x25);
    *((u32*)(r4 + 0x30)) = 0xe;
}





void ov14_021F1414(void) {
    ov14_021F6654(*((u32*)(r0 + 0x34)), 0x27);
    ov14_021F2A18(*((u32*)(r4 + 0x34)), 9, 0);
    ov14_021E84A4(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021F0234(r4, ov14_021E9450, 0x5c);
}





void ov14_021F1448(void) {
    // add r0, #0x25
    _s32_div_f(*((u8*)r0), 6);
    // add r1, r4, r1
    // add r0, #0x25
    // strb r1, [r0]
    System_GetTouchNew(r5, (6 * r0));
    // add r5, #0x25
    PCStorage_CountMonsAndEggsInBox(*((u32*)(r5 + 4)), *((u8*)r5));
    PlaySE(0x000005F3);
    PlaySE(0x000005DD);
    PlaySE(0x000005DD);
    ov14_021F48B4(r5);
    ov14_021F57B8(r5);
    GridInputHandler_GetNextInput(*((u32*)(*((u32*)(r5 + 0x34)) + 0x2c)));
    // str r2, [r1, r0]
    GridInputHandler_SetNextLastUnk0FInputs(*((u32*)(*((u32*)(r5 + 0x34)) + 0x2c)), 8, r0, r0);
    GridInputHandler_GetDpadBox(*((u32*)(*((u32*)(r5 + 0x34)) + 0x2c)), 8);
    // add r1, sp, #0
    // add r1, #1
    // add r2, sp, #0
    DpadMenuBox_GetPosition();
    // add r2, sp, #0
    ManagedSprite_SetPositionXY(*((u32*)(*((u32*)(r5 + 0x34)) + (0x32 << 4))), *((u8*)(r2 + 1)), *((u8*)r2));
    ov14_021F29E4(*((u32*)(r5 + 0x34)), 9, 8);
    ov14_021F2A18(*((u32*)(r5 + 0x34)), 9, 1);
}





void ov14_021F1504(void) {
    // add r0, #0x25
}





void ov14_021F1534(void) {
}





void ov14_021F1540(void) {
    ov14_021F29E4(*((u32*)(r0 + 0x34)), 9, 8);
    // add r1, #0x25
    PCStorage_CountMonsAndEggsInBox(*((u32*)(r4 + 4)), *((u8*)r4));
    PlaySE(0x000005F3);
    PlaySE(0x000005DD);
    ov14_021F2270(r4, 0xc, 0x66);
}





void ov14_021F1580(void) {
    // add r0, #0x21
    // strb r1, [r0]
    // strb r2, [r1, r0]
    // add r1, #0x21
    ov14_021F3190(*((u32*)(r0 + 0x34)), *((u8*)r0), 0);
    ov14_021F40DC(r4);
    // add r0, #0x2a
    ov14_021E8824(*((u32*)(r4 + 0x34)));
    ov14_021F0234(r4, ov14_021EA254, 0x73);
}





void ov14_021F15C8(void) {
    // str r2, [r1, r0]
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    ManagedSprite_GetPositionXY(*((u32*)(*((u32*)(r0 + 0x34)) + (0x32 << 4))), *((u32*)(r0 + 0x34)), 0);
    // add r1, #0x21
    // add r3, sp, #0
    // add r2, r0, r1
    // ldrsh r2, [r3, r2]
    // add r1, r0, r1
    // ldrsh r1, [r3, r1]
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXY(*((u32*)((*((u8*)(r2 + 0x00004094)) << 2) + (0xbf << 2))), 2, ((0 + 4) << 0x10));
    Party_GetCount(*((u32*)(r5 + 8)));
    // add r1, #0x21
    // sub r1, #0x1e
    ov14_021E765C(r5, r4);
    ov14_021E8634(*((u32*)(*((u32*)(r5 + 0x34)) + (0x2f << 4))), *((u32*)(r5 + 0x34)));
    ov14_021E884C(*((u32*)(r5 + 0x34)));
    // sub r1, #0x1e
    ov14_021E765C(r5, r4);
    ov14_021E8634(*((u32*)(*((u32*)(r5 + 0x34)) + (0x2f << 4))), *((u32*)(r5 + 0x34)));
    ov14_021E884C(*((u32*)(r5 + 0x34)));
    ov14_021E884C(*((u32*)(r5 + 0x34)));
    // add r0, #0x25
    _s32_div_f(*((u8*)r5), 6);
    // add r1, r4, r1
    // sub r1, #0x25
    // add r0, #0x25
    // strb r1, [r0]
    ov14_021F48B4(r5, (6 * r0));
    ov14_021F57B8(r5);
    // add r0, #0x21
    // sub r6, #0x1e
    Party_GetMonByIndex(*((u32*)(r5 + 8)), *((u8*)r5));
    GetMonData(6, 0);
    ItemIdIsMail(((r0 << 0x10) >> 0x10));
    ov14_021E884C(*((u32*)(r5 + 0x34)));
    GetMonData(r7, 0xa2, 0);
    ov14_021E884C(*((u32*)(r5 + 0x34)));
    ov14_021E6480(r5, r6);
    ov14_021E884C(*((u32*)(r5 + 0x34)));
    // add r0, #0x25
    ov14_021E765C(r5, *((u8*)r5));
    ov14_021E8634(*((u32*)(*((u32*)(r5 + 0x34)) + (0x2f << 4))), *((u32*)(r5 + 0x34)));
    PCStorage_CountEmptySpotsInBox(*((u32*)(r5 + 4)));
    ov14_021E884C(*((u32*)(r5 + 0x34)));
    ov14_021E765C(r5);
    ov14_021E8634(*((u32*)(*((u32*)(r5 + 0x34)) + (0x2f << 4))), *((u32*)(r5 + 0x34)));
    // add r0, #0x25
    ov14_021E765C(r5, *((u8*)r5));
    ov14_021E8634(*((u32*)(*((u32*)(r5 + 0x34)) + (0x2f << 4))), *((u32*)(r5 + 0x34)));
    PCStorage_CountEmptySpotsInBox(*((u32*)(r5 + 4)));
    ov14_021E884C(*((u32*)(r5 + 0x34)));
    ov14_021E765C(r5);
    ov14_021E8634(*((u32*)(*((u32*)(r5 + 0x34)) + (0x2f << 4))), *((u32*)(r5 + 0x34)));
    GridInputHandler_GetNextInput(*((u32*)(*((u32*)(r5 + 0x34)) + 0x2c)));
    ov14_021E7588(r5, r0);
    ov14_021E8634(*((u32*)(*((u32*)(r5 + 0x34)) + (0x2f << 4))), *((u32*)(r5 + 0x34)));
    ov14_021E765C(r5);
    ov14_021E8634(*((u32*)(*((u32*)(r5 + 0x34)) + (0x2f << 4))), *((u32*)(r5 + 0x34)));
    // strb r4, [r1, r0]
    // strb r2, [r1, r0]
    ov14_021F08BC(r5, *((u32*)(r5 + 0x34)), 0);
    // add r0, #0x22
    // strb r1, [r0]
    ov14_021F0234(r5, ov14_021EA378, 0x2b);
}





void ov14_021F1808(void) {
    // add r2, #0x21
    // strb r1, [r2]
    // add r1, #0x21
    ov14_021E6070(*((u8*)r0), 6, 0);
    // strh r0, [r2, r1]
    ov14_021F5FBC(r4, *((u16*)(*((u32*)(r4 + 0x34)) + 0x000088C8)), *((u32*)(r4 + 0x34)));
    ov14_021E8434(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021E8234(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021E8294(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021E8314(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021F2A18(*((u32*)(r4 + 0x34)), 0xb, 0);
    // add r1, #0x21
    ov14_021F396C(*((u32*)(r4 + 0x34)), *((u8*)r4), 0);
    ov14_021F3844(*((u32*)(r4 + 0x34)), *((u16*)(*((u32*)(r4 + 0x34)) + 0x000088C8)));
    ov14_021F39D0(*((u32*)(r4 + 0x34)));
    ov14_021E88BC(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021F0234(r4, ov14_021EA408, 0x76);
}





void ov14_021F18B0(void) {
    // add r2, #0x21
    // strb r1, [r2]
    // add r1, #0x21
    ov14_021E6070(*((u8*)r0), 6, 0);
    // strh r0, [r2, r1]
    ov14_021E8544(*((u32*)(*((u32*)(r5 + 0x34)) + (0x2f << 4))), *((u32*)(r5 + 0x34)), *((u32*)(r5 + 0x34)));
    ov14_021E83F4(*((u32*)(*((u32*)(r5 + 0x34)) + (0x2f << 4))), *((u32*)(r5 + 0x34)));
    ov14_021E84A4(*((u32*)(r1 + (0x2f << 4))));
    ov14_021E8234(*((u32*)(*((u32*)(r5 + 0x34)) + (0x2f << 4))), *((u32*)(r5 + 0x34)));
    ov14_021E8294(*((u32*)(*((u32*)(r5 + 0x34)) + (0x2f << 4))), *((u32*)(r5 + 0x34)));
    ov14_021E8314(*((u32*)(*((u32*)(r5 + 0x34)) + (0x2f << 4))), *((u32*)(r5 + 0x34)));
    ov14_021F5FBC(r5, *((u16*)(*((u32*)(r5 + 0x34)) + 0x000088C8)), *((u32*)(r5 + 0x34)));
    ov14_021F2A18(*((u32*)(r5 + 0x34)), 0xb, 0);
    // add r1, #0x21
    ov14_021F396C(*((u32*)(r5 + 0x34)), *((u8*)r5), 0);
    ov14_021F3844(*((u32*)(r5 + 0x34)), *((u16*)(*((u32*)(r5 + 0x34)) + 0x000088C8)));
    ov14_021F39D0(*((u32*)(r5 + 0x34)));
    // add r1, #0x21
    ov14_021F34C8(*((u32*)(r5 + 0x34)), *((u8*)r5), 1);
    ov14_021E88BC(*((u32*)(*((u32*)(r5 + 0x34)) + (0x2f << 4))), *((u32*)(r5 + 0x34)));
    ov14_021F2A44(0xb);
    ov14_021F2A18(*((u32*)(r5 + 0x34)), 0xb, 0);
    ov14_021F40DC(r5);
    // add r0, #0x21
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    ov14_021F2F88(*((u8*)r5), 0);
    // add r2, sp, #0
    // ldrsh r3, [r2, r0]
    // add r3, #8
    // str r3, [r1, r0]
    // ldrsh r2, [r2, r1]
    // add r2, #8
    // str r2, [r1, r0]
    ov14_021F1F24(r5, *((u32*)(r5 + 0x34)));
    ov14_021F0234(r5, ov14_021EA4C8, 0x7e);
}





void ov14_021F19F0(void) {
    // add r2, #0x21
    // strb r1, [r2]
    // add r1, #0x21
    ov14_021E6070(*((u8*)r0), 6, 0);
    // strh r0, [r2, r1]
    ov14_021F6408(r4, 0, *((u32*)(r4 + 0x34)));
    // add r1, #0x21
    GridInputHandler_SetNextInput(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)), *((u8*)r4));
    GridInputHandler_SetButtonInputMode(*((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)), 1);
    ov14_021E8648(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021E85E4(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021E85D0(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021F0234(r4, ov14_021E99A0, 0x82);
    PlaySE(0x000005EB);
    ov14_021F2A18(*((u32*)(r4 + 0x34)), 0xb, 0);
    // add r1, #0x21
    ov14_021F396C(*((u32*)(r4 + 0x34)), *((u8*)r4), 2);
    ov14_021F3844(*((u32*)(r4 + 0x34)), *((u16*)(*((u32*)(r4 + 0x34)) + 0x000088C8)));
    ov14_021F39D0(*((u32*)(r4 + 0x34)));
    // add r1, #0x21
    ov14_021F34C8(*((u32*)(r4 + 0x34)), *((u8*)r4), 1);
    ov14_021E88BC(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021E85E4(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021E85D0(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021E8648(*((u32*)(r1 + (0x2f << 4))));
    ov14_021E8634(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    // add r0, #0x21
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    ov14_021F2F88(*((u8*)r4), 2);
    // add r2, sp, #0
    // ldrsh r3, [r2, r0]
    // add r3, #8
    // str r3, [r1, r0]
    // ldrsh r2, [r2, r1]
    // add r2, #8
    // str r2, [r1, r0]
    ov14_021F1F24(r4, *((u32*)(r4 + 0x34)));
    ov14_021F0234(r4, ov14_021EA778, 0x84);
}





void ov14_021F1B4C(void) {
    // add r2, #0x21
    // strb r1, [r2]
    // strh r1, [r3, r2]
    // add r1, #0x21
    ov14_021E6070(*((u8*)r0), 6, 0);
    // strh r0, [r2, r1]
    PlaySE(0x000005EB, 0x000088C8, *((u32*)(r4 + 0x34)));
    // strb r2, [r1, r0]
    ov14_021F2A18(*((u32*)(r4 + 0x34)), 0xb, 0);
    // add r1, #0x21
    ov14_021F39A0(*((u32*)(r4 + 0x34)), *((u8*)r4), 2);
    ov14_021F3844(*((u32*)(r4 + 0x34)), *((u16*)(*((u32*)(r4 + 0x34)) + 0x000088C8)));
    // add r1, #0x21
    ov14_021F34C8(*((u32*)(r4 + 0x34)), *((u8*)r4), 1);
    ov14_021E88BC(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021E8648(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021E8634(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021F0234(r4, ov14_021EAA04, 0x88);
}





void ov14_021F1C04(void) {
    GridInputHandler_GetNextInput(*((u32*)(*((u32*)(r0 + 0x34)) + 0x2c)));
    ov14_021E7588(r4, r0);
    ov14_021E8620(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021E765C(r4);
    ov14_021F1F24(r4);
    ov14_021F0234(r4, ov14_021EAC24, 0x86);
}





void ov14_021F1C4C(void) {
    // strb r4, [r1, r0]
    // strb r2, [r1, r0]
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    ManagedSprite_GetPositionXY(*((u32*)(*((u32*)(r0 + 0x34)) + (0x32 << 4))), *((u32*)(r0 + 0x34)), 0);
    // add r3, sp, #0
    // ldrsh r2, [r3, r2]
    // add r2, #8
    // ldrsh r1, [r3, r1]
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXY(*((u32*)(*((u32*)(r5 + 0x34)) + (0xca << 2))), 2, (0 << 0x10));
    ov14_021F1C04(r5, *((u32*)(r5 + 0x34)));
    // add r1, #0x21
    ov14_021E6AA0(r5, *((u8*)r5), r4);
    ov14_021F1C04(r5);
    ov14_021E88F8(*((u32*)(*((u32*)(r5 + 0x34)) + (0x2f << 4))), *((u32*)(r5 + 0x34)));
    ov14_021F0234(r5, ov14_021EAB54, 0x8a);
}





void ov14_021F1CDC(void) {
    // add r2, #0x21
    // strb r1, [r2]
    // add r1, #0x21
    ov14_021E6070(*((u8*)r0), 6, 0);
    // strh r0, [r2, r1]
    ov14_021F5FBC(r4, *((u16*)(*((u32*)(r4 + 0x34)) + 0x000088C8)), *((u32*)(r4 + 0x34)));
    ov14_021E8434(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021E8314(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021F2A18(*((u32*)(r4 + 0x34)), 0xb, 0);
    // add r1, #0x21
    ov14_021F396C(*((u32*)(r4 + 0x34)), *((u8*)r4), 1);
    ov14_021F3844(*((u32*)(r4 + 0x34)), *((u16*)(*((u32*)(r4 + 0x34)) + 0x000088C8)));
    ov14_021F39D0(*((u32*)(r4 + 0x34)));
    ov14_021E88BC(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021F0234(r4, ov14_021EA408, 0x8c);
}





void ov14_021F1D6C(void) {
    // add r2, #0x21
    // strb r1, [r2]
    // add r1, #0x21
    ov14_021E6070(*((u8*)r0), 6, 0);
    // strh r0, [r2, r1]
    ov14_021E8544(*((u32*)(*((u32*)(r5 + 0x34)) + (0x2f << 4))), *((u32*)(r5 + 0x34)), *((u32*)(r5 + 0x34)));
    ov14_021E83F4(*((u32*)(*((u32*)(r5 + 0x34)) + (0x2f << 4))), *((u32*)(r5 + 0x34)));
    ov14_021E84A4(*((u32*)(r1 + (0x2f << 4))));
    ov14_021E8314(*((u32*)(*((u32*)(r5 + 0x34)) + (0x2f << 4))), *((u32*)(r5 + 0x34)));
    ov14_021F5FBC(r5, *((u16*)(*((u32*)(r5 + 0x34)) + 0x000088C8)), *((u32*)(r5 + 0x34)));
    ov14_021F2A18(*((u32*)(r5 + 0x34)), 0xb, 0);
    // add r1, #0x21
    ov14_021F396C(*((u32*)(r5 + 0x34)), *((u8*)r5), 1);
    ov14_021F3844(*((u32*)(r5 + 0x34)), *((u16*)(*((u32*)(r5 + 0x34)) + 0x000088C8)));
    ov14_021F39D0(*((u32*)(r5 + 0x34)));
    // add r1, #0x21
    ov14_021F34C8(*((u32*)(r5 + 0x34)), *((u8*)r5), 1);
    ov14_021E88BC(*((u32*)(*((u32*)(r5 + 0x34)) + (0x2f << 4))), *((u32*)(r5 + 0x34)));
    ItemIdIsMail(*((u16*)(*((u32*)(r5 + 0x34)) + 0x000088C8)), *((u32*)(r5 + 0x34)));
    ov14_021F6928(r5, 0x28, 9);
    ov14_021F6928(r5, 0x28, 0xa);
    ov14_021F2A44(0xb);
    ov14_021F2A18(*((u32*)(r5 + 0x34)), 0xb, 0);
    ov14_021F40DC(r5);
    // add r0, #0x21
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    ov14_021F2F88(*((u8*)r5), 1);
    // add r2, sp, #0
    // ldrsh r3, [r2, r0]
    // add r3, #8
    // str r3, [r1, r0]
    // ldrsh r2, [r2, r1]
    // add r2, #8
    // str r2, [r1, r0]
    ov14_021F1F24(r5, *((u32*)(r5 + 0x34)));
    ov14_021F0234(r5, ov14_021EACD4, 0x8d);
}





void ov14_021F1EB8(void) {
    ov14_021F2A18(*((u32*)(r0 + 0x34)), 9, 0);
    // add r2, #0x21
    ov14_021E60C0(r5, *((u8*)(r5 + 0x1f)), *((u8*)r5));
    GetBoxMonData(0x4c, 0);
    *((u32*)(r5 + 0x2c)) = 0x24;
    ov14_021F027C(r5, 1);
    ov14_021F2A18(9, 0);
    ov14_021E84A4(*((u32*)(*((u32*)(r5 + 0x34)) + (0x2f << 4))), *((u32*)(r5 + 0x34)));
    ov14_021F0234(r5, ov14_021E9450, r4);
}





void ov14_021F1F24(void) {
}





void ov14_021F1F38(void) {
}





void ov14_021F1F44(void) {
    ov14_021F7B7C();
    PlaySE(0x000005DD);
    // add r0, #0x26
    // strb r1, [r0]
    // add r0, #0x27
    // strb r1, [r0]
    GridInputHandler_GetNextInput(*((u32*)(*((u32*)(r5 + 0x34)) + 0x2c)), 1);
    // add r1, #0x28
    // strb r0, [r1]
    ov14_021F2330(r5, 0xf, 0x97);
    ov14_021F7340(r5);
    GridInputHandler_IsButtonInputMode(*((u32*)(*((u32*)(r5 + 0x34)) + 0x2c)));
    // mvn r4, r4
    // mvn r1, r1
    // sub r0, #0x24
    // bmi _021F1FFA
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021F1FB6: ; jump table
    // mvn r0, r0
    PlaySE(0x000005DC, 2);
    ov14_021F0244(r5, 0x74);
    ov14_021F15C8(r5, 0xff);
    ov14_021F15C8(r5, r4);
}





void ov14_021F2010(void) {
}





void ov14_021F2020(void) {
    // add r1, #0x21
    ov14_021E6070(*((u8*)r0), 6, 0);
    // str r1, [sp]
    Bag_AddItem(*((u32*)(r5 + 0xc)), ((r0 << 0x10) >> 0x10), 1, 0xa);
    // add r2, #0x21
    ov14_021E60C0(r5, *((u8*)(r5 + 0x1f)), *((u8*)r5));
    // ldr r1, [sp]
    ov14_021F673C(r5, 0x25);
    // str r0, [sp]
    // add r1, #0x21
    // add r3, sp, #0
    ov14_021E6094(r5, *((u8*)r5), 6);
    ov14_021E64D0(r4);
    // add r0, #0x21
    // add r4, r3, r2
    ov14_021F2ED0(r5, *((u8*)(r5 + 0x1f)), *((u8*)r5), *((u8*)(r4 + 0x00004094)));
    // add r1, #0x21
    ov14_021E75F4(r5, *((u8*)r5));
    PlaySE(0x000005F3);
    ov14_021F675C(r5, 0x25);
    *((u32*)(r5 + 0x30)) = 0xe;
}





void ov14_021F20C4(void) {
    ov14_021F40DC();
    ov14_021F6654(*((u32*)(r4 + 0x34)), 0x25);
    ov14_021E71E8(r4);
    ov14_021F3354(*((u32*)(*((u32*)(r4 + 0x34)) + 0x000088DC)), *((u32*)(r4 + 0x34)));
    ov14_021E884C(*((u32*)(r4 + 0x34)));
}





void ov14_021F20F4(void) {
    Save_Bag_Get(*((u32*)*((u32*)r0)));
    Bag_AddItem(*((u16*)(*((u32*)(r4 + 0x34)) + 0x000088C8)), 1, 0xa);
    PlaySE(0x000005F3);
    ov14_021F68C0(r4, 6, 0x25);
    *((u32*)(r4 + 0x30)) = 0x7a;
    // add r0, sp, #0
    // strh r1, [r0]
    // add r1, #0x21
    // add r3, sp, #0
    ov14_021E6094(r4, *((u8*)r4), 6);
    // add r2, #0x21
    ov14_021E60C0(r4, *((u8*)(r4 + 0x1f)), *((u8*)r4));
    ov14_021E64D0();
    // add r0, #0x21
    // add r5, r3, r2
    ov14_021F2ED0(r4, *((u8*)(r4 + 0x1f)), *((u8*)r4), *((u8*)(r5 + 0x00004094)));
    // add r1, #0x21
    ov14_021E7588(r4, *((u8*)r4));
    ov14_021F40DC(r4);
    ov14_021F6654(*((u32*)(r4 + 0x34)), 0x25);
    ov14_021F391C(*((u32*)(r4 + 0x34)), 1);
    ov14_021F29E4(*((u32*)(r4 + 0x34)), 0xb, 2);
    ov14_021E88F8(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
}





void ov14_021F21B4(void) {
    PlaySE(0x0000060D);
    *((u32*)(r4 + 0x30)) = 0xb3;
    ov14_021F0204(r4, 1);
}





void ov14_021F21D0(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021F21FA: ; jump table
}





void ov14_021F2270(void) {
    // add r2, sp, #0
    // add r2, #1
    // add r3, sp, #0
    sub_02019B1C(*((u32*)(*((u32*)(r0 + 0x34)) + (0x2f << 4))), *((u32*)(r0 + 0x34)));
    // add r3, sp, #0
    // add r2, sp, #4
    // add r3, #2
    sub_02019B44(*((u32*)(*((u32*)(r5 + 0x34)) + (0x2f << 4))), r4);
    // strb r1, [r2, r0]
    sub_02019B10(*((u32*)(*((u32*)(r5 + 0x34)) + (0x2f << 4))), r4, *((u32*)(r5 + 0x34)), 1);
    // strb r0, [r3, r1]
    // strb r3, [r0, r2]
    // strb r3, [r0, r2]
    // strb r2, [r3, r0]
    // strb r2, [r3, r0]
    // add r0, sp, #0
    // ldrsb r7, [r0, r3]
    // strb r7, [r4, r3]
    // ldrsb r4, [r0, r2]
    // strb r4, [r3, r2]
    // strb r4, [r3, r2]
    // strb r3, [r2, r0]
    *((u32*)(r5 + 0x30)) = r6;
}





void ov14_021F2330(void) {
    // add r2, sp, #0
    // add r2, #1
    // add r3, sp, #0
    sub_02019B1C(*((u32*)(*((u32*)(r0 + 0x34)) + (0x2f << 4))), *((u32*)(r0 + 0x34)));
    // add r3, sp, #0
    // add r2, sp, #4
    // add r3, #2
    sub_02019B44(*((u32*)(*((u32*)(r5 + 0x34)) + (0x2f << 4))), r4);
    // strb r1, [r2, r0]
    sub_02019B10(*((u32*)(*((u32*)(r5 + 0x34)) + (0x2f << 4))), r4, *((u32*)(r5 + 0x34)), 1);
    // strb r0, [r3, r1]
    // strb r3, [r0, r2]
    // strb r3, [r0, r2]
    // strb r2, [r3, r0]
    // strb r2, [r3, r0]
    // add r0, sp, #0
    // ldrsb r7, [r0, r3]
    // strb r7, [r4, r3]
    // ldrsb r4, [r0, r2]
    // strb r4, [r3, r2]
    // strb r4, [r3, r2]
    // strb r3, [r2, r0]
    *((u32*)(r5 + 0x30)) = r6;
}





void ov14_021F23F0(void) {
    // strb r1, [r2, r0]
    sub_02019B10(*((u32*)(*((u32*)(r0 + 0x34)) + (0x2f << 4))), 2, *((u32*)(r0 + 0x34)), 1);
    // strb r0, [r3, r1]
    // strb r3, [r0, r2]
    // strb r3, [r0, r2]
    // strb r0, [r3, r2]
    // strb r0, [r3, r2]
    // strb r3, [r2, r0]
    // strb r2, [r1, r0]
    // strb r3, [r2, r1]
    // strb r2, [r1, r0]
    *((u32*)(r5 + 0x30)) = r6;
}





void ov14_021F2490(void) {
    // strb r2, [r3, r0]
    sub_02019B10(*((u32*)(*((u32*)(r0 + 0x34)) + (0x2f << 4))), 1, *((u32*)(r0 + 0x34)), *((u32*)(r0 + 0x34)));
    // strb r0, [r3, r1]
    // strb r7, [r2, r3]
    // strb r7, [r3, r2]
    // strb r2, [r7, r3]
    // strb r2, [r7, r3]
    // strb r0, [r2, r1]
    // strb r3, [r2, r0]
    // strb r2, [r1, r0]
    // strb r3, [r2, r1]
    // strb r2, [r1, r0]
    *((u32*)(r5 + 0x30)) = r6;
}





void ov14_021F2534(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _021F254C: ; jump table
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
    ov14_021E84A4(*((u32*)(*((u32*)(r0 + 0x34)) + (0x2f << 4))), *((u32*)(r0 + 0x34)));
    ov14_021E8248(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021E82A8(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021E8328(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021E884C(*((u32*)(r4 + 0x34)));
    ov14_021F40E8(r4, 0);
    ov14_021F0234(r4, ov14_021EA180, 0x4a);
}





void ov14_021F2690(void) {
    // add r1, #0x2b
}





void ov14_021F26B4(void) {
    ov14_021E84A4(*((u32*)(*((u32*)(r0 + 0x34)) + (0x2f << 4))), *((u32*)(r0 + 0x34)));
    ov14_021E8328(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021E884C(*((u32*)(r4 + 0x34)));
    ov14_021F40E8(r4, 0);
    ov14_021F0234(r4, ov14_021EA180, 0x4c);
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
    ov14_021F6654(*((u32*)(r0 + 0x34)), 0x27);
    ov14_021F2A18(*((u32*)(r4 + 0x34)), 9, 0);
    ov14_021F3488(r4, 0x81, 0);
    ov14_021F3488(r4, 1, 0);
    // add r0, #0x25
    _s32_div_f(*((u8*)r4), 6);
    // str r1, [r2, r0]
    *((u32*)(r4 + 0x2c)) = 9;
}





void ov14_021F27CC(void) {
}





void ov14_021F27D4(void) {
    ov14_021E84A4(*((u32*)(*((u32*)(r0 + 0x34)) + (0x2f << 4))), *((u32*)(r0 + 0x34)));
    ov14_021E8328(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021E884C(*((u32*)(r4 + 0x34)));
    ov14_021F40E8(r4, 0);
    ov14_021F0234(r4, ov14_021EA130, 0x59);
}





void ov14_021F2810(void) {
}





void ov14_021F2818(void) {
    ov14_021F5EB4(0);
    ov14_021E84A4(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021E8328(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021E884C(*((u32*)(r4 + 0x34)));
    ov14_021F40E8(r4, 0);
    ov14_021F0234(r4, ov14_021EA130, 0x70);
}





void ov14_021F2858(void) {
}





void ov14_021F2874(void) {
}





void ov14_021F2890(void) {
}





void ov14_021F2898(void) {
    ov14_021E84A4(*((u32*)(*((u32*)(r0 + 0x34)) + (0x2f << 4))), *((u32*)(r0 + 0x34)));
    ov14_021E8248(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021E82A8(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021E8328(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021F40DC(r4);
    ov14_021E88F8(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021F0234(r4, ov14_021EA674, 0x76);
}





void ov14_021F28FC(void) {
}





void ov14_021F2914(void) {
}





void ov14_021F2930(void) {
    ov14_021E84A4(*((u32*)(*((u32*)(r0 + 0x34)) + (0x2f << 4))), *((u32*)(r0 + 0x34)));
    ov14_021E8328(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021F40DC(r4);
    ov14_021E88F8(*((u32*)(*((u32*)(r4 + 0x34)) + (0x2f << 4))), *((u32*)(r4 + 0x34)));
    ov14_021F0234(r4, ov14_021EA674, 0x8c);
}





void ov14_021F297C(void) {
}





void ov14_021F29AC(void) {
}





void ov14_021F29C4(void) {
}





void ov14_021F29E4(void) {
    // add r5, r0, r2
}





void ov14_021F2A04(void) {
    // add r1, r0, r1
}





void ov14_021F2A18(void) {
    // add r1, r0, r1
    // add r1, r0, r1
}





void ov14_021F2A44(void) {
}





void ov14_021F2A60(void) {
    // add r1, r0, r1
}





void ov14_021F2A74(void) {
    // strh r3, [r4, r0]
    // add r1, r4, r0
    ManagedSprite_SetDrawPriority(*((u32*)(r1 + (0xbf << 2))), r2, 1);
    // strh r1, [r4, r0]
}





void ov14_021F2A9C(void) {
    // add r1, r0, r1
    // add r1, r0, r1
}





void ov14_021F2AC8(void) {
    // add r2, sp, #0x34
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    SpriteSystem_Alloc(0xa, ov14_021F80D4);
    // str r0, [r4, r1]
    SpriteManager_New(*((u32*)(r4 + (0xbd << 2))), (0xbd << 2));
    // add r2, sp, #0x14
    // str r0, [r4, r7]
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // add r3, sp, #0
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    SpriteSystem_Init(*((u32*)(r4 + ((0xbe << 2) - 4))), r2, ov14_021F80EC, 0x20);
    SpriteSystem_InitSprites(*((u32*)(r4 + (r7 - 4))), *((u32*)(r4 + ((r7 - 4) + 4))), 0x67);
    // add r2, sp, #0x34
    SpriteSystem_InitManagerWithCapacities(*((u32*)(r4 + (r7 - 4))), *((u32*)(r4 + ((r7 - 4) + 4))));
    SpriteSystem_GetRenderer(*((u32*)(r4 + (r7 - 4))));
    G2dRenderer_SetSubSurfaceCoords(0, (2 << 0x14));
}





void ov14_021F2B68(void) {
    // ldr r0, [r4, r1]
    // ldr r1, [r4, r1]
    // ldr r0, [r4, r0]
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
}





void ov14_021F2C50(void) {
    // add r1, r0, r1
}





void ov14_021F2C84(void) {
    // str r6, [sp]
    // str r6, [sp, #4]
    // add r0, r4, r0
    // str r0, [sp, #8]
    SpriteSystem_LoadCharResObj(*((u32*)(r0 + (0xbd << 2))), *((u32*)(r0 + (0xbe << 2))), 0x13, 0x4e);
    sub_02074490();
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    SpriteSystem_LoadPlttResObj(*((u32*)(r5 + (0xbd << 2))), *((u32*)(r5 + ((0xbd << 2) + 4))), 0x14, r0);
    sub_0207449C();
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadCellResObj(*((u32*)(r5 + (0xbd << 2))), *((u32*)(r5 + ((0xbd << 2) + 4))), 0x14, r0);
    sub_020744A8();
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadAnimResObj(*((u32*)(r5 + (0xbd << 2))), *((u32*)(r5 + ((0xbd << 2) + 4))), 0x14, r0);
}





void ov14_021F2D1C(void) {
    // str r4, [sp]
    // add r2, sp, #4
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // add r6, sp, #4
    // add r3, sp, #0x38
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    _u32_div_f(0, 6, (6 - 1), ov14_021F810C);
    // add r0, sp, #4
    // ldrsh r2, [r0, r2]
    // add r1, r2, r3
    *((u16*)(r0 + 0x34)) = r1;
    _u32_div_f(r4, 6, 0x34, (0x18 * r1));
    // add r1, sp, #4
    // ldrsh r2, [r1, r2]
    // add r0, r2, r3
    *((u16*)(r1 + 0x36)) = r0;
    // ldr r0, [sp]
    // sub r0, r1, r0
    // str r0, [sp, #0x40]
    // add r0, r4, r0
    // str r0, [sp, #0x4c]
    // add r2, sp, #0x38
    SpriteSystem_NewSprite(*((u32*)(r5 + (0xbd << 2))), *((u32*)(r5 + ((0xbd << 2) + 4))), 0x36, (0x18 * r0));
    // str r0, [r7, r1]
    // add r1, r5, r4
    // add r2, #0x19
    // strb r2, [r1, r0]
    // ldr r0, [sp]
    // str r0, [sp]
}





void ov14_021F2DC4(void) {
    Boxmon_GetIconNaix(r1);
    // str r0, [sp]
    GfGfxLoader_GetCharDataFromOpenNarc(*((u32*)(r5 + 0x00000454)), r0, 0, r4);
}





void ov14_021F2DE8(void) {
    // str r1, [sp, #4]
    // str r0, [sp]
    // ldr r1, [sp, #4]
    PCStorage_GetMonDataByIndexPair(*((u32*)(r0 + 4)), 0, 0xac);
    // add r2, r0, r4
    // ldr r1, [sp, #4]
    ov14_021E60C0(r5, 0, r4);
    // add r2, sp, #0xc
    ov14_021F2DC4(*((u32*)(r5 + 0x34)), r0);
    // str r0, [sp, #8]
    // ldr r0, [sp, #0xc]
    // add r1, r2, r1
    // add r1, r1, r6
    MIi_CpuCopy32(*((u32*)(r0 + 0x14)), 0x00000458, (2 << 8));
    // ldr r0, [sp, #8]
    Heap_Free();
    Boxmon_GetIconPalette(r7);
    // add r2, r1, r4
    // strb r0, [r2, r1]
    // add r2, r0, r4
    // strb r1, [r2, r0]
    // add r6, r6, r0
}





void ov14_021F2E78(void) {
    // add r1, r5, r0
}





void ov14_021F2EA0(void) {
    // add r2, sp, #0
    // ldr r1, [sp]
}





void ov14_021F2ED0(void) {
    // str r1, [sp]
    // add r6, r1, r0
    // str r2, [sp, #4]
    // ldr r1, [sp, #4]
    // ldr r1, [sp]
    // ldr r2, [sp, #4]
}





void ov14_021F2F20(void) {
}





void ov14_021F2F3C(void) {
    Party_GetCount(*((u32*)(r0 + 8)));
    Party_GetMonByIndex(*((u32*)(r5 + 8)), 0x00000000);
    Mon_GetBoxMon();
    // add r3, r2, r4
    ov14_021F2EA0(r5, r0, *((u8*)(r3 + 0x000040B2)));
    // add r1, r0, r4
    ov14_021F2A18(*((u32*)(r5 + 0x34)), *((u8*)(r1 + r7)), 0);
}





void ov14_021F2F88(void) {
    _u32_div_f(6);
    // strh r0, [r4]
    _u32_div_f(r5, 6);
    // add r1, #0x30
    // strh r1, [r6]
    // sub r5, #0x1e
    // ldrsh r0, [r0, r1]
    // strh r0, [r4]
    // ldrsh r0, [r0, r1]
    // sub r0, #0x90
    // strh r0, [r6]
    // ldrsh r0, [r4, r0]
    // add r0, #0x98
    // strh r0, [r4]
}





void ov14_021F2FDC(void) {
    Party_GetCount(*((u32*)(r0 + 8)));
    // str r0, [sp]
    // add r2, r0, r4
    // ldrsh r2, [r6, r2]
    // add r1, r0, r1
    // ldrsh r1, [r6, r1]
    ManagedSprite_SetPositionXY(*((u32*)((*((u8*)(r2 + 0x000040B2)) << 2) + (0xbf << 2))), 0, 2);
    // add r1, #0x1e
    ov14_021F3190(*((u32*)(r5 + 0x34)), r4, 1);
    // ldr r0, [sp]
    ov14_021F2A18(*((u32*)(r5 + 0x34)), r7, 1);
    ov14_021F2A18(r7, 0);
}





void ov14_021F3044(void) {
    Party_GetCount(*((u32*)(r0 + 8)));
    // str r0, [sp]
    // add r2, r0, r4
    // ldrsh r2, [r6, r2]
    // add r1, r0, r1
    // ldrsh r1, [r6, r1]
    // add r1, #0x98
    // asr r1, r1, #0x10
    ManagedSprite_SetPositionXY(*((u32*)((*((u8*)(r2 + 0x000040B2)) << 2) + (0xbf << 2))), (0 << 0x10), 2);
    // add r1, #0x1e
    ov14_021F3190(*((u32*)(r5 + 0x34)), r4, 1);
    // ldr r0, [sp]
    ov14_021F2A18(*((u32*)(r5 + 0x34)), r7, 1);
    ov14_021F2A18(r7, 0);
}





void ov14_021F30B0(void) {
    Party_GetCount(*((u32*)(r0 + 8)));
    // str r0, [sp]
    // add r2, r0, r4
    // ldrsh r2, [r6, r2]
    // add r1, r0, r1
    // sub r2, #0x90
    // ldrsh r1, [r6, r1]
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXY(*((u32*)((*((u8*)(r2 + 0x000040B2)) << 2) + (0xbf << 2))), 0, (2 << 0x10));
    // add r1, #0x1e
    ov14_021F3190(*((u32*)(r5 + 0x34)), r4, 1);
    // ldr r0, [sp]
    ov14_021F2A18(*((u32*)(r5 + 0x34)), r7, 1);
    ov14_021F2A18(r7, 0);
}





void ov14_021F311C(void) {
    Party_GetCount(*((u32*)(r0 + 8)));
    // str r0, [sp]
    // add r2, r0, r4
    // ldrsh r2, [r6, r2]
    // add r1, r0, r1
    // ldrsh r1, [r6, r1]
    // sub r2, #0x90
    // add r1, #0x98
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXY(*((u32*)((*((u8*)(r2 + 0x000040B2)) << 2) + (0xbf << 2))), (0 << 0x10), (2 << 0x10));
    // add r1, #0x1e
    ov14_021F3190(*((u32*)(r5 + 0x34)), r4, 1);
    // ldr r0, [sp]
    ov14_021F2A18(*((u32*)(r5 + 0x34)), r7, 1);
    ov14_021F2A18(r7, 0);
}





void ov14_021F3190(void) {
    // add r3, r5, r6
    ov14_021F2A60(*((u8*)(r3 + 0x00004094)), 0);
    ov14_021F2A74(r5, r4, 0x14);
    ov14_021F2A60(r4, 3);
    ov14_021F2A60(r4, 1);
    // sub r2, r2, r3
    ov14_021F2A74(r5, r4, 0x74, (r6 << 1));
}





void ov14_021F31E0(void) {
    // add r3, r4, r1
    ov14_021F2A60(*((u8*)(r3 + 0x00004094)), 3);
    ov14_021F2A60(r5, 1);
    ov14_021F2A74(r4, r5, 0x14);
}





void ov14_021F3210(void) {
    // str r1, [sp]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // sub r0, #0xb8
    // str r0, [sp, #0xc]
    // mvn r0, r0
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r7, sp, #0x14
    // add r2, r0, r4
    // add r2, sp, #0x14
    // str r1, [sp, #4]
    // str r1, [sp, #0x10]
    // add r1, r0, r1
    // add r1, sp, #0x14
    // add r1, #2
    ManagedSprite_GetPositionXY(*((u32*)((*((u8*)(r2 + 0x00004094)) << 2) + (0xbf << 2))), (*((u8*)(r2 + 0x00004094)) << 2));
    // ldrsh r1, [r7, r0]
    // ldr r0, [sp]
    // add r0, r1, r0
    *((u16*)(r7 + 2)) = 2;
    // ldrsh r1, [r7, r0]
    // ldr r0, [sp, #8]
    // ldr r0, [sp, #0xc]
    *((u16*)(r7 + 2)) = 2;
    // add r6, r0, r4
    // add r2, r0, r1
    // add r1, r2, r1
    // ldr r2, [sp, #4]
    ov14_021F2E78(*((u32*)(r5 + 0x34)), (r4 << 9), *((u8*)(r6 + 0x00004076)));
    // ldr r0, [sp, #0x10]
    // add r2, r1, r0
    // add r2, r1, r4
    ManagedSprite_SetDrawFlag(*((u32*)(r2 + (0xbf << 2))), *((u8*)(r2 + 0x00004058)));
    ov14_021F34DC(r5, r4);
    // ldr r0, [sp, #0x10]
    // add r1, r1, r0
    // ldrsh r1, [r7, r1]
    // ldrsh r2, [r7, r2]
    ManagedSprite_SetPositionXY(*((u32*)(*((u32*)(r5 + 0x34)) + (0xbf << 2))), 2, 0);
}





void ov14_021F32E0(void) {
    // str r0, [sp]
    // add r2, sp, #4
    // add r2, #1
    // add r3, sp, #4
    sub_02019B1C(*((u32*)(*((u32*)(r0 + 0x34)) + (0x2f << 4))), 1);
    // add r1, sp, #4
    // ldrsb r0, [r1, r4]
    // asr r7, r0, #0x10
    // ldrsb r0, [r1, r0]
    // asr r5, r0, #0x10
    // add r2, r0, r1
    // ldr r0, [sp]
    // add r3, r6, r4
    // add r2, r7, r2
    // add r3, r6, r0
    // asr r2, r2, #0x10
    // add r1, r5, r1
    // asr r1, r1, #0x10
    ManagedSprite_SetPositionXY(*((u32*)(r3 + (0xbf << 2))), (*((u8*)(ov14_021F808C + (0 << 1))) << 0x10), (*((u8*)(r2 + 1)) << 0x10), ov14_021F808C);
}





void ov14_021F3354(void) {
}





void ov14_021F3380(void) {
    *((u8*)(r0 + 7)) = (*((u8*)(r0 + 7)) + 1);
    _fsub(*((u32*)(r0 + 8)), 0x3CCCCCCD);
    *((u32*)(r4 + 8)) = r0;
    ManagedSprite_SetAffineScale(*((u32*)r4), *((u32*)(r4 + 8)), *((u32*)(r4 + 8)));
}





void ov14_021F33B0(void) {
    *((u8*)(r0 + 7)) = (*((u8*)(r0 + 7)) - 2);
    _fadd(*((u32*)(r0 + 8)), 0x3CCCCCCD);
    *((u32*)(r4 + 8)) = r0;
    _fadd(0x3CCCCCCD);
    *((u32*)(r4 + 8)) = r0;
    ManagedSprite_SetAffineScale(*((u32*)r4), *((u32*)(r4 + 8)), *((u32*)(r4 + 8)));
}





void ov14_021F33E8(void) {
}





void ov14_021F33FC(void) {
}





void ov14_021F3420(void) {
    // ldr r0, [sp, #0x18]
    ov14_021E6070(r0, r2, 6, 0);
    // add r1, r0, r4
    ov14_021F2A9C(*((u32*)(r5 + 0x34)), *((u8*)(r1 + r7)), 1);
    // add r2, r0, r4
    ov14_021F2A9C(*((u8*)(r2 + 0x00004094)), 0);
    // add r2, r0, r4
    ov14_021F2A9C(*((u32*)(r5 + 0x34)), *((u8*)(r2 + 0x00004094)), r7);
}





void ov14_021F3488(void) {
    // tst r0, r5
    // tst r0, r5
    // str r4, [sp]
    // tst r0, r5
    // str r4, [sp]
}





void ov14_021F34C8(void) {
    // add r3, r0, r1
}





void ov14_021F34DC(void) {
}





void ov14_021F34EC(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    SpriteSystem_LoadCharResObj(*((u32*)(r0 + (0xbd << 2))), *((u32*)(r0 + ((0xbd << 2) + 4))), 8, 0x4c);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    SpriteSystem_LoadCharResObj(*((u32*)(r4 + (0xbd << 2))), *((u32*)(r4 + ((0xbd << 2) + 4))), 8, 0x4c);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    SpriteSystem_LoadPlttResObj(*((u32*)(r4 + (0xbd << 2))), *((u32*)(r4 + ((0xbd << 2) + 4))), 8, 0x4b);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    SpriteSystem_LoadPlttResObj(*((u32*)(r4 + (0xbd << 2))), *((u32*)(r4 + ((0xbd << 2) + 4))), 8, 0x4b);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadCellResObj(*((u32*)(r4 + (0xbd << 2))), *((u32*)(r4 + ((0xbd << 2) + 4))), 8, 0x4d);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadAnimResObj(*((u32*)(r4 + (0xbd << 2))), *((u32*)(r4 + ((0xbd << 2) + 4))), 8, 0x4e);
}





void ov14_021F35BC(void) {
    SpriteSystem_NewSpriteWithYOffset(*((u32*)(*((u32*)(r0 + 0x34)) + (0xbd << 2))), *((u32*)(*((u32*)(r0 + 0x34)) + ((0xbd << 2) + 4))), ov14_021F8210, (2 << 0x14));
    // str r0, [r4, r1]
    // sub r0, #0x10
    // sub r1, #0xc
    SpriteSystem_NewSpriteWithYOffset(*((u32*)(r4 + (0xc1 << 2))), *((u32*)(r4 + (0xc1 << 2))), ov14_021F8244, (2 << 0x14));
    // str r0, [r4, r1]
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + ((0xc2 << 2) - 4))), 0);
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + (0xc2 << 2))), 0);
}





void ov14_021F3614(void) {
    // add r2, sp, #0x14
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    Heap_AllocAtEnd(0xa, (0x32 << 6), ov14_021F8098);
    // add r0, sp, #0x24
    GetBoxmonSpriteCharAndPlttNarcIds(*((u32*)r4), 2, 0);
    // add r0, #0xa7
    // str r5, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, sp, #0x14
    // add r3, sp, #0x14
    sub_02014510(*((u16*)(2 + 0x10)), *((u16*)(2 + 0x12)), 0xa);
    // add r4, r6, r0
    Sprite_GetImageProxy(*((u32*)*((u32*)(r4 + (r7 << 2)))));
    NNS_G2dGetImageLocation(2);
    DC_FlushRange(r5, (0x32 << 6));
    GXS_LoadOBJ(r5, r7, (0x32 << 6));
    Sprite_GetPaletteProxy(*((u32*)*((u32*)(r4 + r6))));
    NNS_G2dGetImagePaletteLocation(2);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r1, sp, #0x14
    GfGfxLoader_GXLoadPal(*((u16*)(r1 + 0x10)), *((u16*)(r1 + 0x14)), 5, r0);
    Heap_Free(r5);
}





void ov14_021F36DC(void) {
    // add r4, r4, r2
    ov14_021F3614(*((u32*)(r0 + 0x34)), r2);
    // add r1, r1, r0
    ManagedSprite_SetDrawFlag(*((u32*)(*((u32*)(r5 + 0x34)) + (0xbf << 2))), 1);
    // eor r0, r2
    // strh r0, [r3, r1]
}





void ov14_021F3714(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    SpriteSystem_LoadCharResObj(*((u32*)(r0 + (0xbd << 2))), *((u32*)(r0 + ((0xbd << 2) + 4))), 0x13, 0x4f);
    GetItemIndexMapping(0, 2);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    SpriteSystem_LoadPlttResObj(*((u32*)(r4 + (0xbd << 2))), *((u32*)(r4 + ((0xbd << 2) + 4))), 0x12, r0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    SpriteSystem_LoadCharResObj(*((u32*)(r4 + (0xbd << 2))), *((u32*)(r4 + ((0xbd << 2) + 4))), 0x13, 0x4f);
    GetItemIndexMapping(0, 2);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    SpriteSystem_LoadPlttResObj(*((u32*)(r4 + (0xbd << 2))), *((u32*)(r4 + ((0xbd << 2) + 4))), 0x12, r0);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadCellResObj(*((u32*)(r4 + (0xbd << 2))), *((u32*)(r4 + ((0xbd << 2) + 4))), 0x13, 0x50);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadAnimResObj(*((u32*)(r4 + (0xbd << 2))), *((u32*)(r4 + ((0xbd << 2) + 4))), 0x13, 0x51);
}





void ov14_021F37F4(void) {
    SpriteSystem_NewSprite(*((u32*)(r0 + (0xbd << 2))), *((u32*)(r0 + ((0xbd << 2) + 4))), ov14_021F83E4);
    // str r0, [r4, r1]
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + (0xca << 2))), 0);
    SpriteSystem_NewSpriteWithYOffset(*((u32*)(r4 + (0xbd << 2))), *((u32*)(r4 + ((0xbd << 2) + 4))), ov14_021F8418, (2 << 0x14));
    // str r0, [r4, r1]
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + (0xcb << 2))), 0);
}





void ov14_021F3844(void) {
    // str r0, [sp]
    // add r3, sp, #8
    // ldr r2, [sp, #8]
    // str r0, [sp]
    // str r0, [sp, #4]
}





void ov14_021F38B0(void) {
    // str r0, [sp]
    // add r3, sp, #8
    // ldr r2, [sp, #8]
    // str r0, [sp]
    // str r0, [sp, #4]
}





void ov14_021F391C(void) {
    // ldr r0, [r4, r0]
    // ldr r0, [r4, r0]
    // ldr r0, [r4, r0]
    // ldr r0, [r4, r0]
}





void ov14_021F395C(void) {
    // ldr r0, [r0, r3]
    // bx r3
    // nop
    // _021F3968: .word ManagedSprite_SetPositionXY
}





void ov14_021F396C(void) {
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    // add r3, sp, #0
    // ldrsh r1, [r3, r1]
    // ldrsh r2, [r3, r2]
    // add r1, #8
    // add r2, #8
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
}





void ov14_021F39A0(void) {
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    // add r3, sp, #0
    // ldrsh r2, [r3, r2]
    // ldrsh r1, [r3, r1]
    // asr r2, r2, #0x10
}





void ov14_021F39D0(void) {
    // add r1, sp, #0x10
    // add r1, #2
    // add r2, sp, #0x10
    ManagedSprite_GetPositionXY(*((u32*)(r0 + (0xca << 2))));
    // add r3, sp, #0x14
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    ManagedSprite_GetDrawPriority(*((u32*)(r5 + (0xca << 2))), *((u32*)(r5 + (0x3f << 4))), (6 - 1));
    // str r0, [sp, #0x1c]
    ManagedSprite_GetPriority(*((u32*)(r5 + (0xca << 2))));
    // str r0, [sp, #0x40]
    // str r0, [sp, #0x28]
    // strh r1, [r5, r0]
    // str r0, [sp, #8]
    // add r1, sp, #0x10
    // ldrsh r1, [r1, r0]
    // ldrsb r0, [r7, r0]
    // add r2, sp, #0x14
    // add r1, r1, r0
    // add r0, sp, #0x10
    *((u16*)(0 + 4)) = 1;
    // ldrsh r1, [r1, r0]
    // ldrsb r0, [r6, r0]
    // add r1, r1, r0
    // add r0, sp, #0x10
    *((u16*)(0 + 6)) = 0;
    SpriteSystem_NewSprite(*((u32*)(r5 + (0xbd << 2))), *((u32*)(r5 + (0xbe << 2))));
    // str r0, [r4, r1]
    ManagedSprite_SetPaletteOverride(*((u32*)(r4 + (0x3f << 4))), 8);
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + (0x3f << 4))), 0);
    // ldr r0, [sp, #8]
    // str r0, [sp, #8]
    // strh r1, [r5, r0]
    // sub r0, #0xc8
    ManagedSprite_GetDrawPriority(*((u32*)(r5 + 0x000088D2)), 0);
    // str r0, [sp, #0xc]
    ManagedSprite_GetPriority(*((u32*)(r5 + (0xca << 2))));
    // str r0, [sp, #4]
    // str r0, [sp]
    // add r2, sp, #0x10
    // ldrsh r1, [r2, r1]
    // ldrsb r2, [r6, r2]
    // add r3, sp, #0x10
    // add r1, r1, r2
    // ldrsh r3, [r3, r2]
    // ldrsb r2, [r7, r2]
    // add r2, r3, r2
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXY(*((u32*)(r5 + (0x3f << 4))), (2 << 0x10), (0 << 0x10));
    // ldr r1, [sp]
    // ldr r2, [sp, #0xc]
    // add r1, #0x3d
    ov14_021F2A74(r5, (r2 + 1));
    // ldr r1, [sp, #4]
    ManagedSprite_SetPriority(*((u32*)(r4 + (0x3f << 4))));
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + (0x3f << 4))), 0);
    // ldr r0, [sp]
    // str r0, [sp]
}





void ov14_021F3B3C(void) {
}





void ov14_021F3B5C(void) {
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    ManagedSprite_GetPositionXY(*((u32*)(r0 + (0xca << 2))));
    // add r2, sp, #0
    // ldrsh r1, [r2, r1]
    // ldrsb r2, [r4, r2]
    // add r3, sp, #0
    // add r1, r1, r2
    // ldrsh r2, [r3, r2]
    // ldrsb r3, [r6, r3]
    // add r2, r2, r3
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXY(*((u32*)(r5 + (0x3f << 4))), (2 << 0x10), (0 << 0x10), 0);
}





void ov14_021F3BC0(void) {
    // add r2, sp, #0
    // add r2, #1
    // add r3, sp, #0
    // add r3, sp, #0
    // ldrsb r2, [r3, r2]
    // add r2, r3, r2
    // asr r2, r2, #0x10
}





void ov14_021F3C08(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    SpriteSystem_LoadCharResObj(*((u32*)(r0 + (0xbd << 2))), *((u32*)(r0 + ((0xbd << 2) + 4))), 0x13, 0x52);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    SpriteSystem_LoadCharResObj(*((u32*)(r4 + (0xbd << 2))), *((u32*)(r4 + ((0xbd << 2) + 4))), 0x13, 0x52);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    SpriteSystem_LoadPlttResObj(*((u32*)(r4 + (0xbd << 2))), *((u32*)(r4 + ((0xbd << 2) + 4))), 8, 0x4a);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadCellResObj(*((u32*)(r4 + (0xbd << 2))), *((u32*)(r4 + ((0xbd << 2) + 4))), 0x13, 0x53);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadAnimResObj(*((u32*)(r4 + (0xbd << 2))), *((u32*)(r4 + ((0xbd << 2) + 4))), 0x13, 0x54);
}





void ov14_021F3CB4(void) {
    SpriteSystem_NewSpriteWithYOffset(*((u32*)(r0 + (0xbd << 2))), *((u32*)(r0 + ((0xbd << 2) + 4))), ov14_021F844C, (2 << 0x14));
    // str r0, [r4, r1]
    // sub r0, #0x3c
    // sub r1, #0x38
    SpriteSystem_NewSpriteWithYOffset(*((u32*)(r4 + (0x33 << 4))), *((u32*)(r4 + (0x33 << 4))), ov14_021F8480, (2 << 0x14));
    // str r0, [r4, r1]
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + ((0xcd << 2) - 4))), 0);
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + (0xcd << 2))), 0);
}





void ov14_021F3D0C(void) {
    // str r0, [sp]
    // add r3, sp, #4
    // ldr r2, [sp, #4]
    // add r5, r5, r0
    // add r1, r6, r1
}





void ov14_021F3D70(void) {
    ManagedSprite_SetDrawFlag(*((u32*)(r0 + (0x33 << 4))), 0);
    ManagedSprite_SetDrawFlag(*((u32*)(r5 + (0xcd << 2))), 0);
    ov14_021F3D0C(*((u8*)(r4 + 0xc)), 0xd, 0x0000C121);
    ManagedSprite_SetDrawFlag(*((u32*)(r5 + (0x33 << 4))), 1);
    ov14_021F3D0C(r5, *((u8*)(r4 + 0xd)), 0xe, 0x0000C122);
    ManagedSprite_SetDrawFlag(*((u32*)(r5 + (0xcd << 2))), 1);
    ManagedSprite_SetDrawFlag(*((u32*)(r5 + (0xcd << 2))), 0);
}





void ov14_021F3DE8(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    SpriteSystem_LoadCharResObj(*((u32*)(r0 + (0xbd << 2))), *((u32*)(r0 + ((0xbd << 2) + 4))), 0x13, 0x42);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    SpriteSystem_LoadPlttResObj(*((u32*)(r4 + (0xbd << 2))), *((u32*)(r4 + ((0xbd << 2) + 4))), 0x13, 0x45);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadCellResObj(*((u32*)(r4 + (0xbd << 2))), *((u32*)(r4 + ((0xbd << 2) + 4))), 0x13, 0x43);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadAnimResObj(*((u32*)(r4 + (0xbd << 2))), *((u32*)(r4 + ((0xbd << 2) + 4))), 0x13, 0x44);
}





void ov14_021F3E70(void) {
    SpriteSystem_NewSprite(*((u32*)(r0 + (0xbd << 2))), *((u32*)(r0 + ((0xbd << 2) + 4))), ov14_021F81A8);
    // str r0, [r4, r1]
    // sub r0, #8
    SpriteSystem_NewSprite(*((u32*)(r4 + (0xbf << 2))), *((u32*)(r4 + ((0xbf << 2) - 4))), ov14_021F81DC);
    // str r0, [r4, r1]
    // sub r0, #0xc
    // sub r1, #8
    SpriteSystem_NewSprite(*((u32*)(r4 + (3 << 8))), *((u32*)(r4 + (3 << 8))), ov14_021F8278);
    // str r0, [r4, r1]
    // sub r0, #0x18
    // sub r1, #0x14
    SpriteSystem_NewSprite(*((u32*)(r4 + (0xc3 << 2))), *((u32*)(r4 + (0xc3 << 2))), ov14_021F82AC);
    // str r0, [r4, r1]
    // sub r0, #0x1c
    // sub r1, #0x18
    SpriteSystem_NewSprite(*((u32*)(r4 + (0x31 << 4))), *((u32*)(r4 + (0x31 << 4))), ov14_021F82E0);
    // str r0, [r4, r1]
    // sub r0, #0x20
    // sub r1, #0x1c
    SpriteSystem_NewSprite(*((u32*)(r4 + (0xc5 << 2))), *((u32*)(r4 + (0xc5 << 2))), ov14_021F8314);
    // str r0, [r4, r1]
    // sub r0, #0x24
    // sub r1, #0x20
    SpriteSystem_NewSprite(*((u32*)(r4 + (0xc6 << 2))), *((u32*)(r4 + (0xc6 << 2))), ov14_021F8348);
    // str r0, [r4, r1]
    // sub r0, #0x28
    // sub r1, #0x24
    SpriteSystem_NewSprite(*((u32*)(r4 + (0xc7 << 2))), *((u32*)(r4 + (0xc7 << 2))), ov14_021F837C);
    // str r0, [r4, r1]
    // sub r0, #0x2c
    // sub r1, #0x28
    SpriteSystem_NewSprite(*((u32*)(r4 + (0x32 << 4))), *((u32*)(r4 + (0x32 << 4))), ov14_021F83B0);
    // str r0, [r4, r1]
    ov14_021F2A18(r4, 0xa, 0);
}





void ov14_021F3F6C(void) {
    // add r0, #0x21
    // add r2, sp, #0x14
    // add r1, r4, r0
    // add r1, sp, #0x14
    // add r1, #2
    // str r0, [sp, #0xc]
    // add r7, r4, r0
    ManagedSprite_GetPositionXY(*((u32*)(r7 + (*((u8*)(r1 + 0x00004094)) << 2))));
    // add r2, sp, #0x18
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    ManagedSprite_GetDrawPriority(*((u32*)(r7 + r5)), ov14_021F810C);
    // str r0, [sp, #0x20]
    ManagedSprite_GetPriority(*((u32*)(r7 + r5)));
    // str r0, [sp, #0x44]
    // ldr r0, [sp, #0xc]
    // add r0, r0, r1
    // str r0, [sp, #0x2c]
    // strh r1, [r4, r0]
    // add r7, sp, #0x14
    // ldrsh r1, [r7, r0]
    // add r2, sp, #0x18
    // ldrsb r0, [r0, r5]
    // add r0, r1, r0
    *((u16*)(r7 + 4)) = ov14_021F8070;
    // ldrsh r1, [r7, r0]
    // ldrsb r0, [r0, r5]
    // add r0, r1, r0
    *((u16*)(r7 + 6)) = ov14_021F8078;
    // add r6, r4, r0
    SpriteSystem_NewSprite(*((u32*)(r4 + (0xbd << 2))), *((u32*)(r4 + (0xbe << 2))));
    // str r0, [r6, r1]
    ManagedSprite_SetPaletteOverride(*((u32*)(r6 + (0x3f << 4))), 8);
    // strh r1, [r4, r0]
    Sprite_GetImageProxy(*((u32*)*((u32*)(r7 + (((r5 + 1) << 0x10) >> 0x10)))), 0);
    // str r0, [sp, #8]
    ManagedSprite_GetDrawPriority(*((u32*)(r7 + r5)));
    // str r0, [sp, #0x10]
    ManagedSprite_GetPriority(*((u32*)(r7 + r5)));
    // str r0, [sp, #4]
    // add r1, r4, r7
    // str r1, [sp]
    // ldr r1, [sp, #8]
    Sprite_SetImageProxy(*((u32*)*((u32*)(r1 + (0x3f << 4)))));
    // ldr r1, [sp]
    // add r2, sp, #0x14
    // ldrsh r1, [r2, r1]
    // add r3, sp, #0x14
    // ldrsb r2, [r2, r5]
    // add r1, r1, r2
    // ldrsh r3, [r3, r2]
    // ldrsb r2, [r2, r5]
    // asr r1, r1, #0x10
    // add r2, r3, r2
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXY(*((u32*)(r1 + (0x3f << 4))), (2 << 0x10), (ov14_021F8078 << 0x10));
    // ldr r2, [sp, #0x10]
    // add r1, #0x3d
    ov14_021F2A74(*((u32*)(r6 + 0x34)), r5, (r2 + 1));
    // add r1, r0, r7
    // ldr r1, [sp, #4]
    ManagedSprite_SetPriority(*((u32*)(r1 + (0x3f << 4))));
    // add r1, r0, r7
    ManagedSprite_SetDrawFlag(*((u32*)(r1 + (0x3f << 4))), 1);
}





void ov14_021F40DC(void) {
}





void ov14_021F40E8(void) {
    // add r1, r0, r4
    ManagedSprite_SetDrawFlag(*((u32*)(r1 + (0x3f << 4))), 0);
    // add r0, #0x21
    // add r2, r0, r1
    // str r1, [sp]
    // add r1, r0, r1
    ManagedSprite_GetDrawPriority(*((u32*)((*((u8*)(r2 + 0x00004094)) << 2) + (0xbf << 2))), (*((u8*)(r2 + 0x00004094)) << 2));
    // add r1, #0x3d
    ov14_021F2A74(*((u32*)(r5 + 0x34)), r6, (r0 + 1));
    // ldr r0, [sp]
    // add r1, r1, r0
    ManagedSprite_GetPriority(*((u32*)(*((u32*)(r5 + 0x34)) + (0xbf << 2))), *((u32*)(r5 + 0x34)));
    // add r2, r0, r4
    ManagedSprite_SetPriority(*((u32*)(r2 + (0x3f << 4))), r0);
}





void ov14_021F4174(void) {
    // add r1, #0x21
    // add r1, r4, r1
    // add r2, sp, #0
    // add r1, r4, r0
    // add r1, sp, #0
    // add r1, #2
    ManagedSprite_GetPositionXY(*((u32*)(*((u8*)r0) + (0xbf << 2))), *((u8*)r0));
    // add r6, sp, #0
    // add r1, r4, r0
    // ldrsh r2, [r6, r1]
    // ldrsb r1, [r7, r5]
    // add r1, r2, r1
    // ldrsh r2, [r6, r2]
    // ldrsb r3, [r3, r5]
    // asr r1, r1, #0x10
    // add r2, r2, r3
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXY(*((u32*)(r1 + (0x3f << 4))), (2 << 0x10), (0 << 0x10), ov14_021F8078);
}





void ov14_021F41E4(void) {
    // str r6, [sp]
    // str r7, [sp, #4]
    // add r0, r4, r0
    // str r0, [sp, #8]
    SpriteSystem_LoadCharResObj(*((u32*)(r0 + (0xbd << 2))), *((u32*)(r0 + (0xbe << 2))), 0x13, 0x46);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    SpriteSystem_LoadPlttResObj(*((u32*)(r5 + (0xbd << 2))), *((u32*)(r5 + ((0xbd << 2) + 4))), 0x13, 0x47);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadCellResObj(*((u32*)(r5 + (0xbd << 2))), *((u32*)(r5 + ((0xbd << 2) + 4))), 0x13, 0x48);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadAnimResObj(*((u32*)(r5 + (0xbd << 2))), *((u32*)(r5 + ((0xbd << 2) + 4))), 0x13, 0x49);
}





void ov14_021F4278(void) {
    // str r0, [sp]
    // add r2, sp, #4
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // add r6, sp, #4
    // add r3, sp, #0x38
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // add r1, sp, #4
    // str r0, [r3]
    // ldrsh r0, [r1, r0]
    // add r1, r0, r4
    // add r0, sp, #4
    *((u16*)(0x34 + 0x34)) = r1;
    // ldr r1, [sp]
    // add r0, r7, r0
    // str r0, [sp, #0x4c]
    // add r2, sp, #0x38
    SpriteSystem_NewSprite(*((u32*)(r1 + (0xbd << 2))), *((u32*)(r1 + (0xbe << 2))), r1, ov14_021F8140);
    // str r0, [r5, r1]
    // add r4, #0x22
}





void ov14_021F42EC(void) {
    // str r6, [sp]
    // str r7, [sp, #4]
    // add r0, r4, r0
    // str r0, [sp, #8]
    SpriteSystem_LoadCharResObj(*((u32*)(r0 + (0xbd << 2))), *((u32*)(r0 + (0xbe << 2))), 0x13, 0x4a);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    SpriteSystem_LoadPlttResObj(*((u32*)(r5 + (0xbd << 2))), *((u32*)(r5 + ((0xbd << 2) + 4))), 0x13, 0x4b);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadCellResObj(*((u32*)(r5 + (0xbd << 2))), *((u32*)(r5 + ((0xbd << 2) + 4))), 0x13, 0x4c);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadAnimResObj(*((u32*)(r5 + (0xbd << 2))), *((u32*)(r5 + ((0xbd << 2) + 4))), 0x13, 0x4d);
}





void ov14_021F4380(void) {
    // str r0, [sp]
    // add r2, sp, #4
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // add r6, sp, #4
    // add r3, sp, #0x38
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // add r1, sp, #4
    // str r0, [r3]
    // ldrsh r0, [r1, r0]
    // add r1, r0, r4
    // add r0, sp, #4
    *((u16*)(0x34 + 0x34)) = r1;
    // ldr r1, [sp]
    // add r0, r7, r0
    // str r0, [sp, #0x4c]
    // add r2, sp, #0x38
    SpriteSystem_NewSprite(*((u32*)(r1 + (0xbd << 2))), *((u32*)(r1 + (0xbe << 2))), r1, ov14_021F8174);
    // str r0, [r5, r1]
    // add r4, #0x2e
}





void ov14_021F43F4(void) {
}





void ov14_021F4410(void) {
    // mvn r1, r1
    // add r2, #0x28
}





void ov14_021F4428(void) {
    // sub r2, #0x21
    ManagedSprite_SetPositionXY(*((u32*)(*((u32*)(r0 + 0x34)) + (0xc3 << 2))), 0xc, 0xc);
    // mvn r2, r2
    ManagedSprite_SetPositionXY(*((u32*)(r4 + (0x31 << 4))), 0xf4, 0x14);
    // sub r2, #0x40
    ManagedSprite_SetPositionXY(*((u32*)(r4 + (0xc5 << 2))), 0x2b, 0x2b);
    // sub r2, #0xa8
    ManagedSprite_SetPositionXY(*((u32*)(r4 + (0xc6 << 2))), 0x80, 0x80);
    // sub r2, #0x9c
    ManagedSprite_SetPositionXY(*((u32*)(r4 + (0xc7 << 2))), 0x80, 0x80);
    ov14_021F462C(r5);
    ov14_021F29E4(r4, 7, 7);
    ov14_021F4410(r4);
    TextOBJ_SetSpritesDrawFlag(*((u32*)(r4 + 0x00000414)), 1);
    TextOBJ_SetSpritesDrawFlag(*((u32*)(r4 + 0x00000424)), 0);
}





void ov14_021F44B4(void) {
    // add r4, #0x10
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    // add r2, sp, #0
    // ldrsh r1, [r2, r1]
    // ldrsh r2, [r3, r2]
    // add r2, r2, r6
    // asr r2, r2, #0x10
    // add r7, sp, #0
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    // ldrsh r2, [r7, r2]
    // add r2, r2, r6
    // ldrsh r1, [r7, r1]
    // asr r2, r2, #0x10
}





void ov14_021F4530(void) {
    // add r1, #0x25
    ov14_021E7930(*((u8*)r0));
    ov14_021F2A18(*((u32*)(r5 + 0x34)), 6, 1);
    ov14_021F2A18(6, 0);
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    ManagedSprite_GetPositionXY(*((u32*)(*((u32*)(r5 + 0x34)) + (0xc5 << 2))), *((u32*)(r5 + 0x34)));
    // and r2, r1
    // add r1, #0x3b
    // add r3, sp, #0
    // ldrsh r2, [r3, r2]
    // asr r1, r1, #0x10
    ManagedSprite_SetPositionXY(*((u32*)(*((u32*)(r5 + 0x34)) + (0xc5 << 2))), ((0x2e * r4) << 0x10), 0);
}





void ov14_021F459C(void) {
    // sub r2, r2, r3
    // ror r2, r1
    // add r1, r3, r2
    // add r1, #0x15
    // add r1, r0, r1
    // add r2, sp, #0
    // add r1, sp, #0
    // add r2, #2
    ManagedSprite_GetPositionXY(*((u32*)((((0x1e << 0x10) >> 0x10) << 2) + (0xbf << 2))), (((0x1e << 0x10) >> 0x10) << 2), (*((u8*)(*((u32*)(r0 + 0x34)) + 0x0000044D)) << 0x1e), (*((u8*)(*((u32*)(r0 + 0x34)) + 0x0000044D)) >> 0x1f));
    // add r2, sp, #0
    // add r1, sp, #4
    // add r2, #2
    ManagedSprite_GetPositionXY(*((u32*)(*((u32*)(r4 + 0x34)) + (0xc6 << 2))), *((u32*)(r4 + 0x34)));
    // add r3, sp, #0
    // ldrsh r1, [r3, r1]
    // ldrsh r2, [r3, r2]
    ManagedSprite_SetPositionXY(*((u32*)(*((u32*)(r4 + 0x34)) + (0xc6 << 2))), 0, 2);
    // add r2, sp, #0
    // add r1, sp, #4
    // add r2, #2
    ManagedSprite_GetPositionXY(*((u32*)(*((u32*)(r4 + 0x34)) + (0xc7 << 2))), *((u32*)(r4 + 0x34)));
    // add r3, sp, #0
    // ldrsh r1, [r3, r1]
    // ldrsh r2, [r3, r2]
    ManagedSprite_SetPositionXY(*((u32*)(*((u32*)(r4 + 0x34)) + (0xc7 << 2))), 0, 2);
    ov14_021F4410(*((u32*)(r4 + 0x34)));
}





void ov14_021F462C(void) {
    Heap_AllocAtEnd(0xa, (9 << 6));
    AllocAtEndAndReadWholeNarcMemberByIdPair(0x13, 0x4a, 0xa);
    // add r1, sp, #0xc
    // str r0, [sp, #8]
    NNS_G2dGetUnpackedCharacterData();
    // str r0, [sp, #4]
    // ldr r0, [sp, #0xc]
    MI_CpuCopy8(*((u32*)(0 + 0x14)), r4, (9 << 6));
    // str r0, [sp]
    ov14_021F46B0(r7, r4, r5, 0x1e);
    ov14_021F2C1C(*((u32*)(r7 + 0x34)), r6, r4, (9 << 6));
    // ldr r0, [sp, #4]
    // str r0, [sp, #4]
    // ldr r0, [sp, #8]
    Heap_Free((r0 + 1));
    Heap_Free(r4);
}





void ov14_021F46B0(void) {
    // ldr r4, [sp, #0x18]
    // sub r1, #0x10
    // add r7, #0x10
    // add r7, #0x10
    // strb r2, [r5, r1]
}





void ov14_021F46F4(void) {
    // mvn r1, r1
    // add r2, #0x40
    sub_020136B4(*((u32*)(r0 + 0x00000414)), 0x47, 0x47);
    // sub r2, #0x28
    sub_020136B4(*((u32*)(r4 + 0x00000424)), 0x20, 0x20);
}





void ov14_021F4720(void) {
    // sub r2, #0x21
    ManagedSprite_SetPositionXY(*((u32*)(*((u32*)(r0 + 0x34)) + (0xc3 << 2))), 0xc, 0xc);
    // mvn r2, r2
    ManagedSprite_SetPositionXY(*((u32*)(*((u32*)(r4 + 0x34)) + (0x31 << 4))), 0xf4, 0x14);
    // sub r2, #0x40
    ManagedSprite_SetPositionXY(*((u32*)(*((u32*)(r4 + 0x34)) + (0xc5 << 2))), 0x2b, 0x2b);
    // sub r2, #0xa8
    ManagedSprite_SetPositionXY(*((u32*)(*((u32*)(r4 + 0x34)) + (0xc6 << 2))), 0x80, 0x80);
    // sub r2, #0x9c
    ManagedSprite_SetPositionXY(*((u32*)(*((u32*)(r4 + 0x34)) + (0xc7 << 2))), 0x80, 0x80);
    ov14_021F49E0(r4);
    ov14_021F29E4(*((u32*)(r4 + 0x34)), 7, 5);
    ov14_021F46F4(*((u32*)(r4 + 0x34)));
    TextOBJ_SetSpritesDrawFlag(*((u32*)(*((u32*)(r4 + 0x34)) + 0x00000414)), 1);
    TextOBJ_SetSpritesDrawFlag(*((u32*)(*((u32*)(r4 + 0x34)) + 0x00000424)), 1);
}





void ov14_021F47B8(void) {
    // add r2, sp, #0
    // add r1, r0, r4
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    // add r1, r0, r4
    // ldrsh r1, [r2, r1]
    // ldrsh r2, [r3, r2]
    // add r2, r2, r7
    // asr r2, r2, #0x10
    // add r2, sp, #0
    // add r1, r0, r4
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    // add r1, r0, r4
    // ldrsh r1, [r2, r1]
    // ldrsh r2, [r3, r2]
    // add r2, r2, r7
    // asr r2, r2, #0x10
}





void ov14_021F4848(void) {
    // add r0, #0x25
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    // add r1, #0x2b
    // add r3, sp, #0
    // ldrsh r2, [r3, r2]
    // asr r1, r1, #0x10
}





void ov14_021F48B4(void) {
    // add r0, #0x25
    _s32_div_f(*((u8*)r0), 6);
    // add r2, sp, #0
    // add r1, sp, #4
    // add r2, #2
    ManagedSprite_GetPositionXY(*((u32*)(*((u32*)(r5 + 0x34)) + (0xc6 << 2))), *((u32*)(r5 + 0x34)));
    // add r3, sp, #0
    // ldrsh r2, [r3, r2]
    ManagedSprite_SetPositionXY(*((u32*)(*((u32*)(r5 + 0x34)) + (0xc6 << 2))), *((u8*)(ov14_021F8068 + r4)), 2);
    // add r4, #0xf
    // add r2, sp, #0
    // add r1, r1, r0
    // add r1, sp, #0
    // add r2, #2
    ManagedSprite_GetPositionXY(*((u32*)(*((u32*)(r5 + 0x34)) + (0xbf << 2))), *((u32*)(r5 + 0x34)));
    // add r2, sp, #0
    // add r1, sp, #4
    // add r2, #2
    ManagedSprite_GetPositionXY(*((u32*)(*((u32*)(r5 + 0x34)) + (0xc7 << 2))), *((u32*)(r5 + 0x34)));
    // add r3, sp, #0
    // ldrsh r1, [r3, r1]
    // ldrsh r2, [r3, r2]
    ManagedSprite_SetPositionXY(*((u32*)(*((u32*)(r5 + 0x34)) + (0xc7 << 2))), 0, 2);
    ov14_021F46F4(*((u32*)(r5 + 0x34)));
}





void ov14_021F4940(void) {
    // add r1, r0, r1
}





void ov14_021F4958(void) {
    AllocAtEndAndReadWholeNarcMemberByIdPair(0x13, 0x46, 0xa);
    // add r1, sp, #4
    NNS_G2dGetUnpackedCharacterData();
    // ldr r0, [sp, #4]
    // add r1, r2, r1
    // add r1, r1, r4
    MI_CpuCopy8(*((u32*)(r0 + 0x14)), 0x000040C8, (1 << 0xa));
    Heap_Free(r7);
    ov14_021E7930(r5, r6);
    // str r0, [sp]
    // add r1, r3, r1
    // add r1, r1, r4
    ov14_021F46B0(r5, 0x000040C8, r0, 8);
    // add r2, r3, r2
    // add r2, r2, r4
    ov14_021F4A64(r5, r6, 0x000040C8, *((u32*)(r5 + 0x34)));
}





void ov14_021F49C8(void) {
}





void ov14_021F49E0(void) {
    // add r0, #0x25
    _s32_div_f(*((u8*)r0), 6);
    // add r2, r0, r2
    // add r2, r2, r5
    ov14_021F2C1C(*((u32*)(r7 + 0x34)), 0xf, 0x000040C8, (1 << 0xa));
    // add r5, r5, r0
}





void ov14_021F4A20(void) {
    // add r0, #0x25
    _s32_div_f(*((u8*)r0), 6);
    _u32_div_f(r4, 6);
    _u32_div_f(r4, 6);
    // add r3, r5, r2
    // add r2, r3, r2
    // add r1, #0xf
    ov14_021F2C1C(r5, (r4 << 0xa), (1 << 0xa));
}





void ov14_021F4A64(void) {
    // str r0, [sp]
    // str r0, [sp, #0x10]
    // str r1, [sp, #4]
    // str r2, [sp, #8]
    // str r0, [sp, #0x20]
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x20]
    // ldr r0, [sp, #0x10]
    // str r1, [sp, #0x14]
    // ldr r0, [sp]
    // ldr r3, [sp, #0x1c]
    // ldr r2, [sp, #0x14]
    // ldr r1, [sp, #4]
    // add r2, r3, r2
    PCStorage_GetMonByIndexPair(*((u32*)(0 + 4)), (6 * 0));
    // str r0, [sp, #0x28]
    AcquireBoxMonLock();
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #0x28]
    GetBoxMonData(5, 0);
    // ldr r0, [sp, #0x28]
    GetBoxMonData(0xac, 0);
    // ldr r0, [sp, #0x28]
    GetBoxMonData(0x4c, 0);
    // ldr r0, [sp, #0x28]
    GetBoxMonData(0x70, 0);
    // ldr r0, [sp]
    GetMonBaseStatEx_HandleAlternateForm(*((u32*)(*((u32*)((r0 << 0x10) + 0x34)) + (0x45 << 4))), r4, ((r0 << 0x10) >> 0x10), 0x1b);
    // ldr r4, [sp, #0x10]
    // add r0, #0x20
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x18]
    // asr r7, r0, #3
    // and r6, r0
    // asr r2, r4, #3
    // add r2, r2, r7
    // add r1, r1, r2
    // add r2, r6, r1
    // ldr r1, [sp, #8]
    // ldr r0, [sp, #0xc]
    // add r1, r1, r2
    MIi_CpuClear16(7, ((r4 << 0x1d) >> 0x1a), 2);
    // ldr r0, [sp, #0x28]
    // ldr r1, [sp, #0x24]
    ReleaseBoxMonLock(((r4 + 1) << 0x18));
    // ldr r0, [sp, #0x18]
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x1c]
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x10]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x20]
    // str r0, [sp, #0x20]
}





void ov14_021F4B90(void) {
    // add r1, r5, r0
    // ldr r2, [sp, #0x10]
}





void ov14_021F4BC0(void) {
    // str r0, [sp]
    ov14_021F4B90(*((u32*)(r0 + 0x34)), 4, 0xc, 0x54);
    // str r0, [sp]
    ov14_021F4B90(*((u32*)(r5 + 0x34)), 5, 0xf4, 0x54);
    // str r0, [sp]
    ov14_021F4B90(*((u32*)(r5 + 0x34)), 6, 0x2b, 0x54);
    // str r0, [sp]
    ov14_021F4B90(*((u32*)(r5 + 0x34)), 7, 0x80, 0x41);
    // str r0, [sp]
    ov14_021F4B90(*((u32*)(r5 + 0x34)), 8, 0x80, 0x4d);
    // add r2, sp, #4
    // add r1, r0, r4
    // add r1, sp, #4
    // add r1, #2
    ManagedSprite_GetPositionXY(*((u32*)(r1 + (0xce << 2))));
    // str r7, [sp]
    // add r3, sp, #4
    // ldrsh r2, [r3, r2]
    // add r1, #0xf
    ov14_021F4B90(*((u32*)(r5 + 0x34)), r6, 2, 0x54);
    ov14_021F49E0(r5);
    ov14_021F29E4(*((u32*)(r5 + 0x34)), 7, 5);
    ov14_021F46F4(*((u32*)(r5 + 0x34)));
    TextOBJ_SetSpritesDrawFlag(*((u32*)(*((u32*)(r5 + 0x34)) + 0x00000414)), 1);
    TextOBJ_SetSpritesDrawFlag(*((u32*)(*((u32*)(r5 + 0x34)) + 0x00000424)), 1);
    sub_020137F0(*((u32*)(*((u32*)(r5 + 0x34)) + 0x00000414)), 0);
    sub_020137F0(*((u32*)(*((u32*)(r5 + 0x34)) + 0x00000424)), 0);
}





void ov14_021F4CA0(void) {
    ov14_021F2A18(*((u32*)(r0 + 0x34)), 4, 0);
    ov14_021F2A18(*((u32*)(r5 + 0x34)), 5, 0);
    ov14_021F2A18(*((u32*)(r5 + 0x34)), 6, 0);
    ov14_021F2A18(*((u32*)(r5 + 0x34)), 7, 0);
    ov14_021F2A18(*((u32*)(r5 + 0x34)), 8, 0);
    // add r1, #0xf
    ov14_021F2A18(*((u32*)(r5 + 0x34)), 0, 0);
    TextOBJ_SetSpritesDrawFlag(*((u32*)(*((u32*)(r5 + 0x34)) + 0x00000414)), 0);
    TextOBJ_SetSpritesDrawFlag(*((u32*)(*((u32*)(r5 + 0x34)) + 0x00000424)), 0);
}





void ov14_021F4D10(void) {
    FontSystem_NewInit(2, 0xa);
    // str r0, [r4, r1]
    // add r5, r4, r0
    // add r0, sp, #0x38
    InitWindow(((0x41 << 4) + 4), (0x41 << 4));
    // str r0, [sp]
    // str r3, [sp, #4]
    // add r1, sp, #0x38
    AddTextWindowTopLeftCorner(*((u32*)(r4 + 0x14)), 0xc, 2);
    // add r0, sp, #0x38
    sub_02013688(1, 0xa);
    sub_02021AC8(1, 1, (r5 + 4));
    // str r0, [sp, #8]
    // add r0, sp, #0x38
    // str r0, [sp, #0xc]
    SpriteManager_GetSpriteList(*((u32*)(r4 + (0xbe << 2))));
    // str r0, [sp, #0x10]
    SpriteManager_FindPlttResourceProxy(*((u32*)(r4 + (0xbe << 2))), 0x0000C101);
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x1c]
    // str r0, [sp, #0x20]
    // sub r0, #0x9c
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x2c]
    // str r0, [sp, #0x34]
    // add r0, sp, #8
    // str r1, [sp, #0x28]
    // str r1, [sp, #0x30]
    sub_020135D8(0xa, 1);
    // str r0, [r4, r1]
    sub_020138B0(*((u32*)(r4 + 0x00000414)), 1);
    sub_020138E0(*((u32*)(r4 + 0x00000414)), 1);
    // add r0, sp, #0x38
    RemoveWindow();
    // add r5, r4, r0
    // add r0, sp, #0x38
    InitWindow(0x00000424);
    // str r0, [sp]
    // str r3, [sp, #4]
    // add r1, sp, #0x38
    AddTextWindowTopLeftCorner(*((u32*)(r4 + 0x14)), 5, 2);
    // add r0, sp, #0x38
    sub_02013688(1, 0xa);
    sub_02021AC8(1, 1, (r5 + 4));
    // str r0, [sp, #8]
    // add r0, sp, #0x38
    // str r0, [sp, #0xc]
    SpriteManager_GetSpriteList(*((u32*)(r4 + (0xbe << 2))));
    // str r0, [sp, #0x10]
    SpriteManager_FindPlttResourceProxy(*((u32*)(r4 + (0xbe << 2))), 0x0000C101);
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x1c]
    // str r0, [sp, #0x20]
    // sub r0, #0x9c
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x2c]
    // str r0, [sp, #0x34]
    // str r1, [sp, #0x28]
    // str r1, [sp, #0x30]
    // add r0, sp, #8
    sub_020135D8(0xa, 1);
    // str r0, [r5]
    sub_020138B0(1);
    sub_020138E0(*((u32*)r5), 1);
    // add r0, sp, #0x38
    RemoveWindow();
}





void ov14_021F4E68(void) {
    // str r0, [sp]
    // add r4, r0, r1
    sub_02021B5C(r4, 0x00000418);
    FontOAM_Delete(*((u32*)(r5 + r7)));
    // add r4, #0x10
    // add r5, #0x10
    // ldr r0, [sp]
    sub_020135AC(*((u32*)(r0 + (0x41 << 4))), (0x41 << 4));
}





void ov14_021F4EA0(void) {
    sub_02013910(r1, 0xa);
    // add r1, r5, r0
    TextOBJ_CopyFromBGWindow(*((u32*)(r1 + 0x00000414)), r0, r4, 0xa);
    sub_02013938(r7);
}





void ov14_021F4ED0(void) {
    FontID_Alloc(4, 0xa);
    // add r1, #0x30
    // add r1, r1, r5
    AddWindow(*((u32*)(*((u32*)(r7 + 0x34)) + 0x14)), *((u32*)(r7 + 0x34)), ov14_021F84B4);
    // add r4, #8
    // add r5, #0x10
}





void ov14_021F4F00(void) {
    // add r1, #0x30
    // add r0, r1, r0
}





void ov14_021F4F24(void) {
    // ldr r0, [sp, #0x30]
    // str r1, [sp, #0x10]
    // ldr r4, [sp, #0x28]
    // sub r5, r5, r0
    // sub r5, r5, r0
    // sub r5, r5, r0
    // str r6, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x2c]
    // ldr r2, [sp, #0x10]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
}





void ov14_021F4F84(void) {
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
}





void ov14_021F4FBC(void) {
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
}





void ov14_021F5000(void) {
    // add r4, #0x30
    // add r0, r4, r7
    // str r2, [sp, #0x14]
    FillWindowPixelBuffer(r2, 0);
    BufferBoxMonSpeciesName(*((u32*)(r5 + 0x24)), 0, *((u32*)r6));
    // str r3, [sp]
    // str r3, [sp, #4]
    // str r3, [sp, #8]
    // str r0, [sp, #0xc]
    // str r3, [sp, #0x10]
    // ldr r2, [sp, #0x14]
    ov14_021F4FBC(r5, *((u32*)(r5 + 0x20)), 0);
    // add r0, r4, r7
    ScheduleWindowCopyToVram();
}





void ov14_021F5054(void) {
    // add r4, #0x30
    // add r0, r4, r6
    // str r2, [sp, #0x14]
    FillWindowPixelBuffer(r2, 0);
    BufferBoxMonNickname(*((u32*)(r5 + 0x24)), 0, *((u32*)r7));
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // str r1, [sp, #0x10]
    // ldr r2, [sp, #0x14]
    ov14_021F4FBC(r5, *((u32*)(r5 + 0x20)), 1);
    // add r0, r4, r6
    ScheduleWindowCopyToVram();
}





void ov14_021F50A0(void) {
    // add r4, #0x30
    // add r0, r4, r6
    // str r2, [sp, #0x14]
    FillWindowPixelBuffer(r2, 0);
    // str r0, [sp]
    // add r2, r4, r6
    sub_0200CDAC(*((u32*)(r5 + 0x1c)), 1, 0);
    // str r1, [sp]
    // str r0, [sp, #4]
    BufferIntegerAsString(*((u32*)(r5 + 0x24)), 0, ((*((u8*)(r7 + 0x12)) << 0x19) >> 0x19), 3);
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // str r1, [sp, #0x10]
    // ldr r2, [sp, #0x14]
    ov14_021F4FBC(r5, *((u32*)(r5 + 0x20)), 0x5a);
    // add r0, r4, r6
    ScheduleWindowCopyToVram();
}





void ov14_021F5114(void) {
    // add r4, #0x30
    // add r0, r4, r7
    // str r2, [sp, #0x14]
    FillWindowPixelBuffer(r2, 0);
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // str r1, [sp, #0x10]
    // ldr r2, [sp, #0x14]
    ov14_021F4F84(r6, *((u32*)(r6 + 0x20)), 0x52);
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // str r1, [sp, #0x10]
    // ldr r2, [sp, #0x14]
    ov14_021F4F84(r6, *((u32*)(r6 + 0x20)), 0x53);
    // add r0, r4, r7
    ScheduleWindowCopyToVram();
}





void ov14_021F5190(void) {
    // add r0, #0x30
    // add r0, r0, r4
    FillWindowPixelBuffer(*((u32*)(r0 + 0x34)), 0);
    SaveArray_IsNatDexEnabled(*((u32*)*((u32*)r5)));
    Pokedex_ConvertToCurrentDexNo(*((u16*)(r6 + 4)));
    // str r0, [sp]
    // add r2, #0x30
    // add r2, r2, r4
    sub_0200CDAC(*((u32*)(*((u32*)(r5 + 0x34)) + 0x1c)), 2, *((u32*)(r5 + 0x34)), 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    BufferIntegerAsString(*((u32*)(*((u32*)(r5 + 0x34)) + 0x24)), 0, r6, 3);
    // str r1, [sp]
    // str r2, [sp, #4]
    // str r2, [sp, #8]
    // str r1, [sp, #0xc]
    // str r2, [sp, #0x10]
    ov14_021F4FBC(*((u32*)(r5 + 0x34)), *((u32*)(*((u32*)(r5 + 0x34)) + 0x20)), r7, 0x5b);
    // add r0, #0x30
    // add r0, r0, r4
    ScheduleWindowCopyToVram(*((u32*)(r5 + 0x34)));
}





void ov14_021F521C(void) {
    // add r4, #0x30
    // add r0, r4, r7
    // str r2, [sp, #0x14]
    FillWindowPixelBuffer(r2, 0);
    BufferNatureName(*((u32*)(r5 + 0x24)), 0, *((u8*)(r6 + 0xf)));
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // str r1, [sp, #0x10]
    // ldr r2, [sp, #0x14]
    ov14_021F4FBC(r5, *((u32*)(r5 + 0x20)), 0x55);
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // str r1, [sp, #0x10]
    // ldr r2, [sp, #0x14]
    ov14_021F4F84(r5, *((u32*)(r5 + 0x20)), 0x5d);
    // add r0, r4, r7
    ScheduleWindowCopyToVram();
}





void ov14_021F528C(void) {
    // add r4, #0x30
    // add r0, r4, r7
    // str r2, [sp, #0x14]
    FillWindowPixelBuffer(r2, 0);
    BufferAbilityName(*((u32*)(r5 + 0x24)), 0, *((u8*)(r6 + 0xe)));
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // str r1, [sp, #0x10]
    // ldr r2, [sp, #0x14]
    ov14_021F4FBC(r5, *((u32*)(r5 + 0x20)), 0x54);
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // str r1, [sp, #0x10]
    // ldr r2, [sp, #0x14]
    ov14_021F4F84(r5, *((u32*)(r5 + 0x20)), 0x5d);
    // add r0, r4, r7
    ScheduleWindowCopyToVram();
}





void ov14_021F52FC(void) {
    // add r4, #0x30
    // add r0, r4, r6
    // str r2, [sp, #0x14]
    FillWindowPixelBuffer(r2, 0);
    BufferItemName(*((u32*)(r5 + 0x24)), 0, *((u16*)(r7 + 6)));
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // str r1, [sp, #0x10]
    // ldr r2, [sp, #0x14]
    ov14_021F4FBC(r5, *((u32*)(r5 + 0x20)), 0x56);
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // str r1, [sp, #0x10]
    // ldr r2, [sp, #0x14]
    ov14_021F4F84(r5, *((u32*)(r5 + 0x20)), 0x5c);
    // add r0, r4, r6
    ScheduleWindowCopyToVram();
}





void ov14_021F5368(void) {
}





void ov14_021F53C0(void) {
}





void ov14_021F5404(void) {
    // str r1, [sp, #0x1c]
    // str r0, [sp, #0x20]
    // str r0, [sp, #0x20]
    // eor r4, r2
    // and r4, r5
    // strb r1, [r3, r0]
    // str r0, [sp]
    // add r3, sp, #0x3c
    GfGfxLoader_GetCharData(0x13, 6, 1, *((u32*)(r0 + 0x34)));
    // str r0, [sp, #0x34]
    // ldr r0, [sp, #0x3c]
    // str r0, [sp, #0x30]
    NewMsgDataFromNarc(0, 0x1b, 0x000002EE, 0xa);
    // str r0, [sp, #0x2c]
    // ldr r0, [sp, #0x1c]
    // str r0, [sp, #0x28]
    // ldr r1, [sp, #0x20]
    // ldr r0, [sp, #0x28]
    // add r0, r1, r0
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #0x30]
    // str r0, [sp, #0x38]
    // add r0, #0x20
    // str r0, [sp, #0x38]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    // add r0, #0x30
    // ldr r2, [sp, #0x30]
    // add r1, r2, r1
    // add r0, r0, r7
    BlitBitmapRect(*((u32*)(r6 + 0x34)), (0x16 << 4), 0, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    // add r0, #0x30
    // ldr r1, [sp, #0x38]
    // add r0, r0, r7
    BlitBitmapRect(*((u32*)(r6 + 0x34)), 0, 0);
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // str r1, [sp, #0x10]
    // ldr r3, [sp, #0x28]
    // ldr r3, [sp, #0x1c]
    // ldr r1, [sp, #0x2c]
    // add r3, r3, r4
    // ldr r2, [sp, #0x24]
    ov14_021F4F84(*((u32*)(r6 + 0x34)), 0, *((u16*)(r3 + 0x14)));
    // ldr r0, [sp, #0x24]
    // add r1, #0x30
    // add r0, r1, r0
    CopyWindowPixelsToVram_TextMode((r0 << 4), *((u32*)(r6 + 0x34)));
    // ldr r0, [sp, #0x28]
    // str r0, [sp, #0x28]
    // strb r0, [r3, r1]
    // strb r2, [r3, r1]
    // ldr r0, [sp, #0x2c]
    DestroyMsgData(0x70, 0x0000044E, (*((u8*)(*((u32*)(r6 + 0x34)) + 0x0000044E)) & ~(0x70)), *((u32*)(r6 + 0x34)));
    // ldr r0, [sp, #0x34]
    Heap_Free();
    // ldr r0, [sp, #0x20]
}





void ov14_021F5564(void) {
    // str r1, [sp, #0xc]
    // add r5, #0x30
    // eor r1, r2
    // and r1, r2
    // strb r2, [r0, r1]
    // add r0, r5, r4
    FillWindowPixelBuffer(*((u32*)(r0 + 0x34)), 0xd, ((*((u8*)(*((u32*)(r0 + 0x34)) + 0x0000044E)) & ~(0xf)) | 0xf), (*((u8*)(*((u32*)(r0 + 0x34)) + 0x0000044E)) & ~(0xf)));
    // add r0, r5, r4
    // add r0, #0x10
    FillWindowPixelBuffer(0xd);
    // ldr r0, [sp, #0xc]
    // ldr r1, [sp, #0xc]
    GetItemNameIntoString(*((u32*)(*((u32*)(r6 + 0x34)) + 0x28)), 0xa);
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r2, [sp, #8]
    // add r0, r5, r4
    ov14_021F4F24(0x00010200, *((u32*)(*((u32*)(r6 + 0x34)) + 0x28)), 0, 0);
    // add r0, r5, r4
    CopyWindowPixelsToVram_TextMode();
    // ldr r1, [sp, #0xc]
    GetItemDescIntoString(*((u32*)(*((u32*)(r6 + 0x34)) + 0x28)), 0xa);
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r2, [sp, #8]
    // add r0, r5, r4
    // add r0, #0x10
    ov14_021F4F24(0x00010200, *((u32*)(*((u32*)(r6 + 0x34)) + 0x28)), 0, 0);
    // add r0, r5, r4
    // add r0, #0x10
    CopyWindowPixelsToVram_TextMode();
}





void ov14_021F5620(void) {
    ov14_021F6628();
    // add r0, #0x60
    FillWindowPixelBuffer(*((u32*)(r5 + 0x34)), 0);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // str r1, [sp, #0x10]
    // add r3, #0x32
    ov14_021F4F84(*((u32*)(r5 + 0x34)), r4, 3, *((u32*)(*((u32*)r5) + 8)));
    DestroyMsgData(r4);
    // add r0, #0x60
    CopyWindowToVram(*((u32*)(r5 + 0x34)));
}





void ov14_021F566C(void) {
    // add r0, r1, r0
    FillWindowPixelBuffer((5 << 6), 0);
    // add r0, r1, r0
    FillWindowPixelBuffer((0x15 << 4), 0);
    // add r0, r1, r0
    FillWindowPixelBuffer((0x16 << 4), 0);
    // str r2, [sp]
    // str r2, [sp, #4]
    // str r2, [sp, #8]
    // str r1, [sp, #0xc]
    // str r2, [sp, #0x10]
    ov14_021F4F84(*((u32*)(r4 + 0x34)), *((u32*)(*((u32*)(r4 + 0x34)) + 0x20)), 0x11, 0x57);
    // str r2, [sp]
    // str r2, [sp, #4]
    // str r2, [sp, #8]
    // str r1, [sp, #0xc]
    // str r2, [sp, #0x10]
    ov14_021F4F84(*((u32*)(r4 + 0x34)), *((u32*)(*((u32*)(r4 + 0x34)) + 0x20)), 0x12, 0x58);
    // str r2, [sp]
    // str r2, [sp, #4]
    // str r2, [sp, #8]
    // str r1, [sp, #0xc]
    // str r2, [sp, #0x10]
    ov14_021F4F84(*((u32*)(r4 + 0x34)), *((u32*)(*((u32*)(r4 + 0x34)) + 0x20)), 0x13, 0x59);
    // add r0, r1, r0
    CopyWindowToVram((5 << 6), *((u32*)(r4 + 0x34)));
    // add r0, r1, r0
    CopyWindowToVram((0x15 << 4), *((u32*)(r4 + 0x34)));
    // add r0, r1, r0
    CopyWindowToVram((0x16 << 4), *((u32*)(r4 + 0x34)));
}





void ov14_021F5718(void) {
    // str r1, [sp, #0x14]
    Heap_AllocAtEnd(0xa, 0x10);
    // str r3, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x30]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // str r0, [sp, #0x10]
    AddWindowParameterized(*((u32*)(*((u32*)(r6 + 0x34)) + 0x14)), r0, 3, 0);
    // ldr r2, [sp, #0x30]
    // ldr r0, [sp, #0x14]
    MIi_CpuCopy32(*((u32*)(r4 + 0xc)), ((r2 * r5) << 5));
    String_New(0x14, 0xa);
    PCStorage_GetBoxName(*((u32*)(r6 + 4)), *((u8*)(r6 + 0x1f)), r0);
    // ldr r3, [sp, #0x30]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // sub r3, #8
    ov14_021F4F24(r4, r7, ((r5 << 3) >> 1), ((r3 << 3) >> 1));
    String_Delete(r7);
    CopyWindowPixelsToVram_TextMode(r4);
    RemoveWindow(r4);
    Heap_Free(r4);
}





void ov14_021F57B8(void) {
    // add r0, sp, #0xc
    InitWindow();
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r1, sp, #0xc
    AddTextWindowTopLeftCorner(*((u32*)(*((u32*)(r4 + 0x34)) + 0x14)), 0xc, 2);
    String_New(0x14, 0xa);
    // add r1, #0x25
    PCStorage_GetBoxName(*((u32*)(r4 + 4)), *((u8*)r4), r0);
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, sp, #0xc
    ov14_021F4F24(2, r5, 0x30, 0);
    String_Delete(r5);
    // add r1, sp, #0xc
    ov14_021F4EA0(*((u32*)(r4 + 0x34)), 0);
    // add r0, sp, #0xc
    RemoveWindow();
    // add r0, sp, #0xc
    InitWindow();
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r1, sp, #0xc
    AddTextWindowTopLeftCorner(*((u32*)(*((u32*)(r4 + 0x34)) + 0x14)), 5, 2);
    NewString_ReadMsgData(*((u32*)(*((u32*)(r4 + 0x34)) + 0x20)), 0x18);
    // add r1, #0x25
    PCStorage_CountMonsAndEggsInBox(*((u32*)(r4 + 4)), *((u8*)r4));
    // str r1, [sp]
    // str r0, [sp, #4]
    BufferIntegerAsString(*((u32*)(*((u32*)(r4 + 0x34)) + 0x24)), 0, r0, 2);
    // str r0, [sp]
    // str r1, [sp, #4]
    BufferIntegerAsString(*((u32*)(*((u32*)(r4 + 0x34)) + 0x24)), 1, 0x1e, 2);
    StringExpandPlaceholders(*((u32*)(*((u32*)(r4 + 0x34)) + 0x24)), *((u32*)(*((u32*)(r4 + 0x34)) + 0x28)), r5);
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, sp, #0xc
    ov14_021F4F24(2, *((u32*)(*((u32*)(r4 + 0x34)) + 0x28)), 0x14, 0);
    String_Delete(r5);
    // add r1, sp, #0xc
    ov14_021F4EA0(*((u32*)(r4 + 0x34)), 1);
    // add r0, sp, #0xc
    RemoveWindow();
}





void ov14_021F58B8(void) {
    // add r0, sp, #0xc
    InitWindow();
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r1, sp, #0xc
    AddTextWindowTopLeftCorner(*((u32*)(*((u32*)(r5 + 0x34)) + 0x14)), 0xc, 2);
    // sub r1, #0x10
    PCStorage_IsBonusWallpaperUnlocked(*((u32*)(r5 + 4)), *((u8*)(*((u32*)(r5 + 0x34)) + 0x0000044D)), *((u32*)(r5 + 0x34)));
    NewString_ReadMsgData(*((u32*)(*((u32*)(r5 + 0x34)) + 0x20)), 0x3b);
    // add r1, #0x23
    NewString_ReadMsgData(*((u32*)(*((u32*)(r5 + 0x34)) + 0x20)), *((u8*)(*((u32*)(r5 + 0x34)) + 0x0000044D)), *((u32*)(r5 + 0x34)));
    // add r1, #0x23
    NewString_ReadMsgData(*((u32*)(r2 + 0x20)));
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, sp, #0xc
    ov14_021F4F24(2, r0, 0x30, 0);
    String_Delete(r4);
    // add r1, sp, #0xc
    ov14_021F4EA0(*((u32*)(r5 + 0x34)), 0);
    // add r0, sp, #0xc
    RemoveWindow();
}





void ov14_021F5950(void) {
    // add r5, #0x30
    // str r0, [sp, #0x1c]
    // add r0, r5, r4
    // str r2, [sp, #0x20]
    GetWindowBgId();
    // add r0, r5, r4
    GetWindowX();
    // add r0, r5, r4
    GetWindowY();
    // add r0, r5, r4
    GetWindowWidth();
    // str r0, [sp, #0x30]
    // add r0, r5, r4
    GetWindowHeight();
    // str r0, [sp, #0x3c]
    // add r0, r5, r4
    FillWindowPixelBuffer(0xb);
    // str r0, [sp, #0x4c]
    // str r0, [sp, #0x40]
    // add r0, r5, r4
    FillWindowPixelBuffer((6 << 6), 4);
    // str r0, [sp, #0x4c]
    // str r0, [sp, #0x40]
    // str r0, [sp]
    // add r3, sp, #0x6c
    GfGfxLoader_GetCharData(0x13, 0x40, 1);
    // str r0, [sp, #0x50]
    // ldr r0, [sp, #0x6c]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r2, [sp, #8]
    // str r2, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r1, [sp, #0x40]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    // add r0, r5, r4
    // add r1, r6, r1
    BlitBitmapRect(0xff, 0, 0);
    // ldr r0, [sp, #0x30]
    // str r0, [sp, #0x2c]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // str r2, [sp, #0xc]
    // ldr r1, [sp, #0x40]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // add r1, #0x40
    // str r0, [sp, #0x18]
    // add r0, r5, r4
    // add r1, r6, r1
    BlitBitmapRect(0xff, ((((r0 - 1) << 3) << 0x10) >> 0x10), 0, 0);
    // ldr r0, [sp, #0x3c]
    // str r0, [sp, #0x38]
    // str r0, [sp, #0x34]
    // ldr r1, [sp, #0x34]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r3, [sp, #8]
    // str r1, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // str r2, [sp, #0x18]
    // ldr r1, [sp, #0x40]
    // add r2, #0x21
    // add r1, r1, r2
    // add r0, r5, r4
    // add r1, r6, r1
    BlitBitmapRect(8, ((r1 << 0x10) >> 0x10), 0, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // ldr r1, [sp, #0x34]
    // str r1, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // str r2, [sp, #0x18]
    // ldr r1, [sp, #0x40]
    // add r2, #0x61
    // add r1, r1, r2
    // add r0, r5, r4
    // add r1, r6, r1
    BlitBitmapRect(8, ((((r7 << 0x10) >> 0x10) << 0x10) >> 0x10), 0, 0);
    // ldr r0, [sp, #0x38]
    // ldr r0, [sp, #0x40]
    // ldr r1, [sp, #0x40]
    // str r0, [sp, #0x54]
    // add r0, #0x60
    // str r0, [sp, #0x54]
    // ldr r0, [sp, #0x30]
    // str r1, [sp, #0x58]
    // add r1, #0xa0
    // str r1, [sp, #0x58]
    // ldr r1, [sp, #0x3c]
    // str r1, [sp, #0x44]
    // str r0, [sp, #0x5c]
    // str r0, [sp, #0x28]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x28]
    // ldr r1, [sp, #0x54]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    // add r0, r5, r4
    // add r1, r6, r1
    BlitBitmapRect(0xff, (r1 - 1), 0, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x5c]
    // ldr r1, [sp, #0x58]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x28]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    // add r0, r5, r4
    // add r1, r6, r1
    BlitBitmapRect(0xff, 0, 0);
    // ldr r0, [sp, #0x44]
    // ldr r0, [sp, #0x2c]
    // ldr r0, [sp, #0x40]
    // str r0, [sp, #0x60]
    // add r0, #0x20
    // str r0, [sp, #0x60]
    // ldr r0, [sp, #0x3c]
    // ldr r1, [sp, #0x40]
    // add r1, r1, r2
    // str r1, [sp, #0x64]
    // ldr r1, [sp, #0x30]
    // str r1, [sp, #0x48]
    // str r0, [sp, #0x68]
    // str r0, [sp, #0x24]
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x24]
    // ldr r1, [sp, #0x60]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    // add r0, r5, r4
    // add r1, r6, r1
    BlitBitmapRect(0xff, (r1 - 1), 0, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x24]
    // ldr r1, [sp, #0x64]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x68]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    // add r0, r5, r4
    // add r1, r6, r1
    BlitBitmapRect(0xff, 0, 0);
    // ldr r0, [sp, #0x48]
    // ldr r0, [sp, #0x50]
    Heap_Free(((r7 + 1) << 0x18));
    // ldr r0, [sp, #0x1c]
    // ldr r1, [sp, #0x20]
    NewString_ReadMsgData(*((u32*)(*((u32*)(r0 + 0x34)) + 0x20)));
    // ldr r2, [sp, #0x30]
    // add r2, r3, r2
    // ldr r0, [sp, #0x4c]
    // str r7, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r5, r4
    // asr r2, r2, #1
    ov14_021F4F24(2, r0, ((r2 << 3) >> 0x1f), 4);
    String_Delete(r6);
    // add r0, r5, r4
    CopyWindowPixelsToVram_TextMode();
}





void ov14_021F5BD8(void) {
    // add r5, #0x30
    // add r0, r5, r4
    // str r2, [sp, #0xc]
    GetWindowBgId();
    // add r0, r5, r4
    GetWindowX();
    // add r0, r5, r4
    GetWindowY();
    // add r0, r5, r4
    GetWindowWidth();
    // str r0, [sp, #0x10]
    // add r0, r5, r4
    GetWindowHeight();
    // add r0, r5, r4
    FillWindowPixelBuffer(0xb);
    // add r0, r5, r4
    FillWindowPixelBuffer(4);
    // ldr r1, [sp, #0xc]
    NewString_ReadMsgData(*((u32*)(*((u32*)(r7 + 0x34)) + 0x20)));
    // add r0, sp, #0x18
    // add r1, #0xfe
    // str r1, [sp]
    // str r6, [sp, #4]
    // str r0, [sp, #8]
    // ldr r2, [sp, #0x10]
    // add r0, r5, r4
    // add r2, r3, r2
    // asr r2, r2, #1
    ov14_021F4F24(*((u8*)(r0 + 0x10)), r0, ((r2 << 3) >> 0x1f), 0);
    // str r1, [sp]
    // str r6, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r5, r4
    ov14_021F4F24(r7, 0, 0);
    String_Delete(r7);
    // add r0, r5, r4
    CopyWindowPixelsToVram_TextMode();
}





void ov14_021F5C84(void) {
}





void ov14_021F5C94(void) {
    // add r5, #0x30
    // str r0, [sp, #0x1c]
    // add r0, r5, r4
    // str r2, [sp, #0x20]
    GetWindowWidth();
    // str r0, [sp, #0x2c]
    // str r0, [sp]
    // add r3, sp, #0x38
    GfGfxLoader_GetCharData(0x13, 0xe, 1);
    // str r0, [sp, #0x34]
    // ldr r0, [sp, #0x38]
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r2, [sp, #8]
    // str r2, [sp, #0xc]
    // str r1, [sp, #0x10]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    // add r0, r5, r4
    // add r1, r6, r1
    BlitBitmapRect(0xff, (0xae << 4), 0, 0);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r2, [sp, #8]
    // str r0, [sp, #0xc]
    // str r1, [sp, #0x10]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    // add r0, r5, r4
    // add r1, r6, r1
    BlitBitmapRect(0xff, (0xb6 << 4), 0, 0);
    // str r3, [sp]
    // str r1, [sp, #4]
    // str r2, [sp, #8]
    // str r0, [sp, #0xc]
    // str r3, [sp, #0x10]
    // str r1, [sp, #0x14]
    // str r0, [sp, #0x18]
    // add r0, r5, r4
    // add r1, r6, r1
    BlitBitmapRect(0xff, (0xb2 << 4), 0, 0);
    // ldr r0, [sp, #0x2c]
    // str r0, [sp, #0x28]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // str r2, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    // add r0, r5, r4
    // add r1, r6, r1
    BlitBitmapRect(0xff, (0xd6 << 4), 0, 0);
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // str r1, [sp, #0x10]
    // str r1, [sp, #0x14]
    // str r0, [sp, #0x18]
    // add r0, r5, r4
    // add r1, r6, r1
    BlitBitmapRect(0xff, (0xd2 << 4), 0, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    // add r0, r5, r4
    // add r1, r6, r1
    BlitBitmapRect(0xff, (0x35 << 6), 0, 0);
    // ldr r0, [sp, #0x28]
    // ldr r0, [sp, #0x2c]
    // str r0, [sp, #0x30]
    // str r0, [sp, #0x24]
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x24]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    // add r0, r5, r4
    // add r1, r6, r1
    BlitBitmapRect(0xff, (0xb << 8), 0, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x24]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    // add r0, r5, r4
    // add r1, r6, r1
    BlitBitmapRect(0xff, (0x2e << 6), 0, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x24]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    // add r0, r5, r4
    // add r1, r6, r1
    BlitBitmapRect(0xff, (0x2d << 6), 0, 0);
    // ldr r0, [sp, #0x30]
    // ldr r0, [sp, #0x34]
    Heap_Free(((r7 + 1) << 0x18));
    // ldr r0, [sp, #0x1c]
    // ldr r1, [sp, #0x20]
    NewString_ReadMsgData(*((u32*)(*((u32*)(r0 + 0x34)) + 0x20)));
    // ldr r2, [sp, #0x2c]
    // add r2, r3, r2
    // str r7, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r5, r4
    // asr r2, r2, #1
    ov14_021F4F24(2, r0, ((r2 << 3) >> 0x1f), 4);
    String_Delete(r6);
    // add r0, r5, r4
    CopyWindowPixelsToVram_TextMode();
}





void ov14_021F5E94(void) {
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
    // add r2, #2
    // add r3, sp, #0x14
    // str r0, [sp, #0x10]
    // add r7, sp, #0x14
    // ldr r0, [sp, #0x10]
    // sub r0, r0, r4
    // ldr r0, [sp, #0xc]
    // add r2, r0, r1
    // sub r1, r1, r4
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // sub r1, r1, r4
    // sub r1, r1, r4
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // sub r1, r1, r4
    // sub r0, r7, r6
    // add r0, #0x30
    // add r0, r0, r4
    // add r0, #0x30
    // add r0, r0, r4
}





void ov14_021F5FBC(void) {
    // add r0, r1, r0
    // add r0, r1, r0
    // add r0, r1, r0
    // add r0, r1, r0
    // add r0, r1, r0
    // add r0, r1, r0
    // add r0, r1, r0
    // add r0, r1, r0
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
    sub_02019B08();
    // add r2, sp, #0xc
    // add r2, #2
    // add r3, sp, #0xc
    sub_02019B44(r5, r6);
    GetWindowBaseTile(r4);
    // add r3, sp, #0xc
    // add r1, r5, r0
    // strh r1, [r7]
    // add r1, r5, r1
    // strh r1, [r7, r4]
    // add r1, #9
    // add r1, r5, r1
    // strh r1, [r7, r4]
    // add r1, #0xb
    // add r6, r5, r1
    // strh r6, [r7, r1]
    // add r0, #0xa
    // add r0, r5, r0
    // add r4, r5, r4
    // str r0, [sp, #4]
    // add r0, r7, r0
    *((u16*)((0 << 1) + 2)) = ((((0xfa << 2) + 1) << 0x10) >> 0x10);
    // add r0, r1, r4
    // add r4, r7, r0
    // ldr r0, [sp, #4]
    *((u16*)(((*((u16*)r3) - 1) * *((u16*)(r3 + 2))) + 2)) = (*((u16*)(r3 + 2)) << 1);
    // add r6, sp, #0xc
    // add r3, r5, r1
    // add r1, r5, r1
    // str r3, [sp, #8]
    // mov ip, r1
    // ldr r1, [sp, #8]
    // strh r1, [r7, r3]
    // add r0, r7, r0
    // mov r0, ip
    // strh r0, [r1]
    // str r0, [sp]
    // add r0, sp, #0xc
    // ldr r0, [sp]
    // add r0, r3, r0
    // add r1, r5, r2
    // add r0, r7, r0
    *((u16*)(((*((u16*)(0 + 2)) * ((*((u16*)(0 + 2)) - 2) + 1)) << 1) + 2)) = (*((u16*)((((0xfa << 2) + 1) << 0x10) >> 0x10)) - 2);
    // add r0, sp, #0xc
    // ldr r0, [sp]
    // str r0, [sp]
    // add r0, sp, #0xc
    // ldr r0, [sp]
}





void ov14_021F6208(void) {
    // str r0, [sp, #4]
    // str r0, [sp]
    // ldr r3, [sp, #4]
}





void ov14_021F6244(void) {
    // sub r2, #0xf0
    // add r2, r4, r2
    // sub r2, #0xe0
    // add r2, r4, r2
    // sub r2, #0xd0
    // add r2, r4, r2
    // sub r2, #0xc0
    // add r2, r4, r2
    // sub r2, #0xb0
    // add r2, r4, r2
    // sub r2, #0x30
    // add r2, r4, r2
    // sub r2, #0x20
    // add r2, r4, r2
    // sub r2, #0x10
    // add r2, r4, r2
}





void ov14_021F62CC(void) {
    // add r2, r3, r2
}





void ov14_021F62E4(void) {
    // add r2, r3, r2
}





void ov14_021F62FC(void) {
    // add r2, r3, r2
}





void ov14_021F6314(void) {
    // add r2, r3, r2
}





void ov14_021F6338(void) {
    // add r5, #0x30
    // add r0, r5, r4
    // str r2, [sp, #0x14]
    FillWindowPixelBuffer(0xd);
    // add r0, r5, r4
    GetWindowWidth();
    // add r0, r1, r0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r3, [sp, #0x14]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    ov14_021F4F84(r7, *((u32*)(r7 + 0x20)), r6);
    // add r0, r5, r4
    CopyWindowPixelsToVram_TextMode();
}





void ov14_021F638C(void) {
}





void ov14_021F63A8(void) {
}





void ov14_021F63B8(void) {
}





void ov14_021F63C8(void) {
    // sub r2, #0xa0
    // add r2, r4, r2
    // sub r2, #0x90
    // add r2, r4, r2
}





void ov14_021F63F0(void) {
    // sub r2, #0x80
    // add r2, r3, r2
}





void ov14_021F6408(void) {
    // str r0, [sp, #0x1c]
    // add r0, r4, r0
    GetWindowWidth((0x2e << 4));
    // str r0, [sp, #0x20]
    // str r0, [sp]
    // add r3, sp, #0x30
    GfGfxLoader_GetCharData(0x13, 0xe, 1);
    // str r0, [sp, #0x28]
    // ldr r0, [sp, #0x30]
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r2, [sp, #8]
    // str r2, [sp, #0xc]
    // str r1, [sp, #0x10]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    // add r0, r4, r0
    // add r1, r5, r1
    BlitBitmapRect((0x2e << 4), (0x7a << 4), 0, 0);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r2, [sp, #8]
    // str r0, [sp, #0xc]
    // str r1, [sp, #0x10]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    // add r0, r4, r0
    // add r1, r5, r1
    BlitBitmapRect((0x2e << 4), (0xba << 4), 0, 0);
    // str r3, [sp]
    // str r1, [sp, #4]
    // str r2, [sp, #8]
    // str r0, [sp, #0xc]
    // str r3, [sp, #0x10]
    // str r1, [sp, #0x14]
    // str r0, [sp, #0x18]
    // add r0, r4, r0
    // add r1, r5, r1
    BlitBitmapRect((0x2e << 4), (0xfa << 4), 0, 0);
    // ldr r0, [sp, #0x20]
    // str r1, [sp]
    // str r0, [sp, #0x2c]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // str r2, [sp, #0xc]
    // str r1, [sp, #0x10]
    // str r1, [sp, #0x14]
    // str r0, [sp, #0x18]
    // add r0, r4, r0
    // add r1, r5, r1
    BlitBitmapRect((0x2e << 4), (0xd << 8), 0, 0);
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // str r1, [sp, #0x10]
    // str r1, [sp, #0x14]
    // str r0, [sp, #0x18]
    // add r0, r4, r0
    // add r1, r5, r1
    BlitBitmapRect((0x2e << 4), (0xce << 4), 0, 0);
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r1, [sp, #0x10]
    // str r1, [sp, #0x14]
    // str r0, [sp, #0x18]
    // add r0, r4, r0
    // add r1, r5, r1
    BlitBitmapRect((0x2e << 4), (0x33 << 6), 0, 0);
    // ldr r0, [sp, #0x2c]
    // ldr r0, [sp, #0x20]
    // str r0, [sp, #0x24]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    // add r0, r4, r0
    // add r1, r5, r1
    BlitBitmapRect((0x2e << 4), (0xc2 << 4), 0, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    // add r0, r4, r0
    // add r1, r5, r1
    BlitBitmapRect((0x2e << 4), (0xca << 4), 0, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    // add r0, r4, r0
    // add r1, r5, r1
    BlitBitmapRect((0x2e << 4), (0x32 << 6), 0, 0);
    // ldr r0, [sp, #0x24]
    // ldr r0, [sp, #0x28]
    Heap_Free(((r7 + 1) << 0x18));
    // ldr r0, [sp, #0x1c]
    NewString_ReadMsgData(*((u32*)(*((u32*)(r0 + 0x34)) + 0x20)), 0x41);
    // ldr r2, [sp, #0x20]
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r2, r6, r2
    // add r0, r4, r0
    // asr r2, r2, #1
    ov14_021F4F24((0x2e << 4), r0, ((r2 << 3) >> 0x1f), 4);
    String_Delete(r5);
    // add r0, r4, r0
    CopyWindowPixelsToVram_TextMode((0x2e << 4));
}





void ov14_021F6628(void) {
}





void ov14_021F6638(void) {
    FillWindowPixelBuffer(0xf);
    sub_0200E948(r4, 0x0000038E, 0xa);
}





void ov14_021F6654(void) {
    // add r5, #0x30
    // add r0, r5, r4
    // add r0, r5, r4
}





void ov14_021F6678(void) {
    // add r0, #0x30
    // add r0, r0, r1
}





void ov14_021F6688(void) {
    // add r0, #0x30
    // add r0, r0, r1
}





void ov14_021F6698(void) {
    // str r1, [sp, #0x14]
    ov14_021F6628();
    // add r0, #0x30
    // add r0, r0, r6
    ov14_021F6638(*((u32*)(r5 + 0x34)));
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // ldr r3, [sp, #0x14]
    // str r0, [sp, #0xc]
    // str r1, [sp, #0x10]
    ov14_021F4FBC(*((u32*)(r5 + 0x34)), r7, r4);
    // add r0, #0x30
    // add r0, r0, r6
    ScheduleWindowCopyToVram(*((u32*)(r5 + 0x34)));
    DestroyMsgData(r7);
}





void ov14_021F66E8(void) {
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
    // add r2, #0x21
    // add r2, #0x21
}





void ov14_021F6844(void) {
    // cmp r1, #0
    // beq _021F684E
    // cmp r1, #1
    // beq _021F6852
    // b _021F6854
    // b _021F6854
    // bx r3
    // _021F6858: .word ov14_021F6698
}





void ov14_021F685C(void) {
    // add r1, r2, r2
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _021F6872: ; jump table
    // add r2, #0x21
}





void ov14_021F68C0(void) {
    // add r0, r1, r1
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021F68D6: ; jump table
    BufferItemName(*((u32*)(*((u32*)(r0 + 0x34)) + 0x24)), 0, *((u16*)(*((u32*)(r0 + 0x34)) + 0x000088C8)), *((u32*)(r0 + 0x34)));
    BufferItemName(*((u32*)(*((u32*)(r5 + 0x34)) + 0x24)), 0, *((u16*)(*((u32*)(r5 + 0x34)) + 0x000088C8)), *((u32*)(r5 + 0x34)));
    ov14_021F6698(r5, 0x3b, r6);
}





void ov14_021F6928(void) {
    ov14_021F6628();
    // add r0, r4, r4
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021F6948: ; jump table
    BufferItemName(*((u32*)(*((u32*)(r5 + 0x34)) + 0x24)), 0, *((u16*)(*((u32*)(r5 + 0x34)) + 0x000088C8)), *((u32*)(r5 + 0x34)));
    NewString_ReadMsgData(r7, 0x3c);
    StringExpandPlaceholders(*((u32*)(*((u32*)(r5 + 0x34)) + 0x24)), *((u32*)(*((u32*)(r5 + 0x34)) + 0x28)), r0);
    String_Delete(r4);
    // add r0, #0x30
    // add r0, r0, r4
    FillWindowPixelBuffer(*((u32*)(r5 + 0x34)), 0xf);
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // add r0, #0x30
    // add r0, r0, r4
    AddTextPrinterParameterizedWithColor(*((u32*)(r5 + 0x34)), 1, *((u32*)(*((u32*)(r5 + 0x34)) + 0x28)), 0);
    DestroyMsgData(r7);
}





void ov14_021F69F0(void) {
    // add r0, #0x30
    // add r0, r0, r4
    sub_0200E948(*((u32*)(r0 + 0x34)), 0x0000038E, 0xa);
    // add r0, #0x30
    // add r0, r0, r4
    ScheduleWindowCopyToVram(*((u32*)(r5 + 0x34)));
}





void ov14_021F6A14(void) {
    // bx r3
    // nop
    // _021F6A1C: .word TouchscreenHitbox_FindRectAtTouchNew
    // _021F6A20: .word ov14_021F864C
}





void ov14_021F6A24(void) {
    // bx r3
    // nop
    // _021F6A2C: .word TouchscreenHitbox_FindRectAtTouchNew
    // _021F6A30: .word ov14_021F8614
}





void ov14_021F6A34(void) {
    // bx r3
    // nop
    // _021F6A3C: .word TouchscreenHitbox_FindRectAtTouchNew
    // _021F6A40: .word ov14_021F8630
}





void ov14_021F6A44(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021F6A5E: ; jump table
    ov14_021F6B10(r0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    GridInputHandler_Create(*((u32*)(ov14_021F8B10 + (r5 * 0xc))), *((u32*)(ov14_021F8B10 + (r5 * 0xc))), *((u32*)(ov14_021F8B10 + (r5 * 0xc))), r4);
    *((u32*)(*((u32*)(r4 + 0x34)) + 0x2c)) = r0;
    ov14_021F6B28(r4, *((u32*)(r4 + 0x2c)));
}





void ov14_021F6AC0(void) {
    ov14_021F6B10();
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    GridInputHandler_Create(*((u32*)(ov14_021F8B10 + (r6 * 0xc))), *((u32*)(ov14_021F8B10 + (r6 * 0xc))), *((u32*)(ov14_021F8B10 + (r6 * 0xc))), r5);
    *((u32*)(*((u32*)(r5 + 0x34)) + 0x2c)) = r0;
    ov14_021F6B28(r5, r4);
}





void ov14_021F6B10(void) {
}





void ov14_021F6B28(void) {
    // add r1, sp, #0
    // add r1, #1
    // add r2, sp, #0
    // add r2, sp, #0
}





void ov14_021F6B60(void) {
}





void ov14_021F6B7C(void) {
    // bx r3
    // nop
    // _021F6B88: .word ov14_021F2A18
}





void ov14_021F6B8C(void) {
    ov14_021F7AC4(*((u32*)(r0 + 0x34)));
    ov14_021E5A50(*((u32*)(r4 + 0x34)), ov14_021E9F20);
}





void ov14_021F6BA4(void) {
}





void ov14_021F6BC0(void) {
    // mvn r0, r0
    // mvn r0, r0
}





void ov14_021F6C3C(void) {
    // mvn r0, r0
    // add r0, #0x21
    // sub r4, #0x1e
}





void ov14_021F6C94(void) {
    // add r0, #0x25
    _s32_div_f(*((u8*)r0), 6);
    // str r4, [r1, r0]
    GridInputHandler_SetNextInput(*((u32*)(*((u32*)(r5 + 0x34)) + 0x2c)), ((r1 << 0x18) >> 0x18));
    GridInputHandler_GetDpadBox(*((u32*)(*((u32*)(r5 + 0x34)) + 0x2c)), r4);
    // add r1, sp, #0
    // add r1, #1
    // add r2, sp, #0
    DpadMenuBox_GetPosition();
    // add r2, sp, #0
    ManagedSprite_SetPositionXY(*((u32*)(*((u32*)(r5 + 0x34)) + (0x32 << 4))), *((u8*)(r2 + 1)), *((u8*)r2));
    ov14_021F2A18(*((u32*)(r5 + 0x34)), 9, 1);
    ov14_021F29E4(*((u32*)(r5 + 0x34)), 9, 0xe);
    ov14_021F29E4(*((u32*)(r5 + 0x34)), 9, 8);
}





void ov14_021F6D14(void) {
    ov14_021F29E4(*((u32*)(r0 + 0x34)), 9, 0xe);
    ov14_021F29E4(*((u32*)(r5 + 0x34)), 9, 8);
    GridInputHandler_SetNextLastUnk0FInputs(*((u32*)(*((u32*)(r5 + 0x34)) + 0x2c)), ((*((u32*)(*((u32*)(r5 + 0x34)) + 0x0000043C)) << 0x18) >> 0x18), 8, 8);
    // str r4, [r1, r0]
    // add r0, #0x25
    // add r0, #0x25
    // add r0, #0x25
    // strb r1, [r0]
    ov14_021F49E0(r5, (*((u8*)r5) + 1));
    ov14_021F48B4(r5);
    ov14_021F4848(r5);
    ov14_021F57B8(r5);
    ov14_021F29E4(*((u32*)(r5 + 0x34)), 5, 4);
    ov14_021F7AC4(*((u32*)(r5 + 0x34)), r4, r6);
    ov14_021E5A50(*((u32*)(r5 + 0x34)), ov14_021E9F20);
    // add r0, #0x25
    // bpl _021F6DD6
    // add r0, #0x25
    // add r0, #0x25
    // strb r1, [r0]
    ov14_021F49E0(r5, (*((u8*)r5) - 1));
    ov14_021F48B4(r5);
    ov14_021F4848(r5);
    ov14_021F57B8(r5);
    ov14_021F29E4(*((u32*)(r5 + 0x34)), 4, 2);
    ov14_021F7AC4(*((u32*)(r5 + 0x34)), r4, r6);
    ov14_021E5A50(*((u32*)(r5 + 0x34)), ov14_021E9F20);
    // add r0, #0x25
    _s32_div_f(*((u8*)r5), 6);
    // add r1, r4, r1
    // add r0, #0x25
    // strb r1, [r0]
    ov14_021F48B4(r5, (6 * r0));
    ov14_021F57B8(r5);
    ov14_021F7AC4(*((u32*)(r5 + 0x34)), r4, r6);
    ov14_021E5A50(*((u32*)(r5 + 0x34)), ov14_021E9F20);
}





void ov14_021F6E68(void) {
}





void ov14_021F6E8C(void) {
    // mvn r0, r0
    // mvn r0, r0
}





void ov14_021F6F08(void) {
    // mvn r0, r0
    // sub r0, #0x1f
    // add r0, #0x21
}





void ov14_021F6F70(void) {
}





void ov14_021F6F94(void) {
    // mvn r0, r0
    // sub r0, #0x21
    // mvn r0, r0
    // mvn r0, r0
}





void ov14_021F7010(void) {
    // mvn r0, r0
    // sub r0, #0x1e
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021F7042: ; jump table
    // add r0, #0x21
}





void ov14_021F708C(void) {
    ov14_021F7AC4(*((u32*)(r0 + 0x34)));
    ov14_021E5A50(*((u32*)(r4 + 0x34)), ov14_021E9F20);
}





void ov14_021F70A4(void) {
}





void ov14_021F70C0(void) {
    // ldr r0, [r1, r0]
}





void ov14_021F70F4(void) {
    // sub r0, #0x2b
    // add r0, #0x25
    _s32_div_f(*((u8*)r0), 6);
    // add r4, #0x25
    // str r4, [r1, r0]
    GridInputHandler_SetNextInput(*((u32*)(*((u32*)(r5 + 0x34)) + 0x2c)), ((r1 << 0x18) >> 0x18));
    GridInputHandler_GetDpadBox(*((u32*)(*((u32*)(r5 + 0x34)) + 0x2c)), r4);
    // add r1, sp, #0
    // add r1, #1
    // add r2, sp, #0
    DpadMenuBox_GetPosition();
    // add r2, sp, #0
    ManagedSprite_SetPositionXY(*((u32*)(*((u32*)(r5 + 0x34)) + (0x32 << 4))), *((u8*)(r2 + 1)), *((u8*)r2));
    ov14_021F2A18(*((u32*)(r5 + 0x34)), 9, 1);
    ov14_021F29E4(*((u32*)(r5 + 0x34)), 9, 0xe);
    ov14_021F29E4(9, 8);
}





void ov14_021F7184(void) {
    ov14_021F29E4(*((u32*)(r0 + 0x34)), 9, 0xe);
    ov14_021F29E4(9, 8);
    GridInputHandler_GetUnk0F(*((u32*)(*((u32*)(r5 + 0x34)) + 0x2c)), *((u32*)(r5 + 0x34)));
    GridInputHandler_SetNextLastUnk0FInputs(*((u32*)(*((u32*)(r5 + 0x34)) + 0x2c)), ((r4 << 0x18) >> 0x18), ((r6 << 0x18) >> 0x18), r0);
    // str r4, [r1, r0]
    // add r0, #0x25
    // add r0, #0x25
    // add r0, #0x25
    // strb r1, [r0]
    ov14_021F49E0(r5, (*((u8*)r5) + 1));
    ov14_021F48B4(r5);
    ov14_021F4848(r5);
    ov14_021F57B8(r5);
    ov14_021F29E4(*((u32*)(r5 + 0x34)), 5, 4);
    ov14_021F7AC4(*((u32*)(r5 + 0x34)), r4, r6);
    ov14_021E5A50(*((u32*)(r5 + 0x34)), ov14_021E9F20);
    // add r0, #0x25
    // bpl _021F726E
    // add r0, #0x25
    // add r0, #0x25
    // strb r1, [r0]
    ov14_021F49E0(r5, (*((u8*)r5) - 1));
    ov14_021F48B4(r5);
    ov14_021F4848(r5);
    ov14_021F57B8(r5);
    ov14_021F29E4(*((u32*)(r5 + 0x34)), 4, 2);
    ov14_021F7AC4(*((u32*)(r5 + 0x34)), r4, r6);
    ov14_021E5A50(*((u32*)(r5 + 0x34)), ov14_021E9F20);
    // add r0, #0x25
    _s32_div_f(*((u8*)r5), 6);
    // add r1, r4, r1
    // sub r1, #0x25
    // add r0, #0x25
    // strb r1, [r0]
    ov14_021F48B4(r5, (6 * r0));
    ov14_021F57B8(r5);
    ov14_021F7AC4(*((u32*)(r5 + 0x34)), r4, r6);
    ov14_021E5A50(*((u32*)(r5 + 0x34)), ov14_021E9F20);
}





void ov14_021F7308(void) {
    // str r4, [r1, r0]
    GridInputHandler_SetNextInput(*((u32*)(*((u32*)(r0 + 0x34)) + 0x2c)), ((r1 << 0x18) >> 0x18));
    ov14_021F6B28(r5, r4);
}





void ov14_021F7340(void) {
    // ldr r0, [r1, r0]
}





void ov14_021F7388(void) {
    // mvn r0, r0
    // mvn r0, r0
}





void ov14_021F73E4(void) {
    // mvn r0, r0
    // add r0, #0x21
    // sub r4, #0x1e
}





void ov14_021F7444(void) {
    ov14_021E8544(*((u32*)(*((u32*)(r0 + 0x34)) + (0x2f << 4))), *((u32*)(r0 + 0x34)));
    ov14_021E76B8(r5);
    ov14_021F7AC4(*((u32*)(r5 + 0x34)), r4, r6);
    ov14_021E5A50(*((u32*)(r5 + 0x34)), ov14_021EA180);
    GridInputHandler_SetNextInput(*((u32*)(*((u32*)(r5 + 0x34)) + 0x2c)), 7);
    ov14_021F7AC4(*((u32*)(r5 + 0x34)), 7, r6);
    ov14_021E5A50(*((u32*)(r5 + 0x34)), ov14_021E9F20);
}





void ov14_021F74B0(void) {
    // mvn r0, r0
    // sub r0, #0x21
    // mvn r0, r0
    // mvn r0, r0
}





void ov14_021F7528(void) {
    // mvn r0, r0
    // sub r0, #0x1e
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021F755A: ; jump table
    // add r0, #0x21
}





void ov14_021F7594(void) {
    ov14_021F7AC4(*((u32*)(r0 + 0x34)));
    ov14_021E5A50(*((u32*)(r4 + 0x34)), ov14_021E9F20);
}





void ov14_021F75AC(void) {
}





void ov14_021F75C8(void) {
    // mvn r0, r0
    // mvn r0, r0
}





void ov14_021F7620(void) {
    // mvn r0, r0
    // add r0, #0x21
    // sub r4, #0x1e
}





void ov14_021F7670(void) {
    ov14_021F7AC4(*((u32*)(r0 + 0x34)));
    ov14_021E5A50(*((u32*)(r4 + 0x34)), ov14_021E9F20);
}





void ov14_021F7688(void) {
    // add r0, #0x25
    _s32_div_f(*((u8*)r0), 6);
    // str r4, [r1, r0]
    GridInputHandler_SetNextInput(*((u32*)(*((u32*)(r5 + 0x34)) + 0x2c)), ((r1 << 0x18) >> 0x18));
    GridInputHandler_GetDpadBox(*((u32*)(*((u32*)(r5 + 0x34)) + 0x2c)), r4);
    // add r1, sp, #0
    // add r1, #1
    // add r2, sp, #0
    DpadMenuBox_GetPosition();
    // add r2, sp, #0
    ManagedSprite_SetPositionXY(*((u32*)(*((u32*)(r5 + 0x34)) + (0x32 << 4))), *((u8*)(r2 + 1)), *((u8*)r2));
    ov14_021F29E4(*((u32*)(r5 + 0x34)), 9, 0xe);
    ov14_021F29E4(*((u32*)(r5 + 0x34)), 9, 8);
}





void ov14_021F7700(void) {
    ov14_021F29E4(*((u32*)(r0 + 0x34)), 9, 0xe);
    ov14_021F29E4(*((u32*)(r5 + 0x34)), 9, 8);
    GridInputHandler_SetNextLastUnk0FInputs(*((u32*)(*((u32*)(r5 + 0x34)) + 0x2c)), ((*((u32*)(*((u32*)(r5 + 0x34)) + 0x0000043C)) << 0x18) >> 0x18), 8, 8);
    // str r4, [r1, r0]
    // add r0, #0x25
    // add r0, #0x25
    // add r0, #0x25
    // strb r1, [r0]
    ov14_021F49E0(r5, (*((u8*)r5) + 1));
    ov14_021F48B4(r5);
    ov14_021F4848(r5);
    ov14_021F57B8(r5);
    ov14_021F29E4(*((u32*)(r5 + 0x34)), 5, 4);
    ov14_021F7AC4(*((u32*)(r5 + 0x34)), r4, r6);
    ov14_021E5A50(*((u32*)(r5 + 0x34)), ov14_021E9F20);
    // add r0, #0x25
    // bpl _021F77C2
    // add r0, #0x25
    // add r0, #0x25
    // strb r1, [r0]
    ov14_021F49E0(r5, (*((u8*)r5) - 1));
    ov14_021F48B4(r5);
    ov14_021F4848(r5);
    ov14_021F57B8(r5);
    ov14_021F29E4(*((u32*)(r5 + 0x34)), 4, 2);
    ov14_021F7AC4(*((u32*)(r5 + 0x34)), r4, r6);
    ov14_021E5A50(*((u32*)(r5 + 0x34)), ov14_021E9F20);
    // add r0, #0x25
    _s32_div_f(*((u8*)r5), 6);
    // add r1, r4, r1
    // add r0, #0x25
    // strb r1, [r0]
    ov14_021F48B4(r5, (6 * r0));
    ov14_021F57B8(r5);
    ov14_021F7AC4(*((u32*)(r5 + 0x34)), r4, r6);
    ov14_021E5A50(*((u32*)(r5 + 0x34)), ov14_021E9F20);
}





void ov14_021F7854(void) {
}





void ov14_021F7878(void) {
    // sub r6, #0x11
    // sub r2, r2, r3
    // ror r2, r1
    // add r4, r3, r2
    // str r4, [r0, r6]
    GridInputHandler_SetNextInput(*((u32*)(*((u32*)(r0 + 0x34)) + 0x2c)), ((r1 << 0x18) >> 0x18), (*((u8*)(*((u32*)(r0 + 0x34)) + 0x0000044D)) << 0x1e), (*((u8*)(*((u32*)(r0 + 0x34)) + 0x0000044D)) >> 0x1f));
    GridInputHandler_GetDpadBox(*((u32*)(*((u32*)(r5 + 0x34)) + 0x2c)), r4);
    // add r1, sp, #0
    // add r1, #1
    // add r2, sp, #0
    DpadMenuBox_GetPosition();
    // add r2, sp, #0
    ManagedSprite_SetPositionXY(*((u32*)(*((u32*)(r5 + 0x34)) + (0x32 << 4))), *((u8*)(r2 + 1)), *((u8*)r2));
    ov14_021F29E4(*((u32*)(r5 + 0x34)), 9, 0xe);
    ov14_021F29E4(*((u32*)(r5 + 0x34)), 9, 8);
}





void ov14_021F78F8(void) {
    ov14_021F29E4(*((u32*)(r0 + 0x34)), 9, 0xe);
    ov14_021F29E4(*((u32*)(r5 + 0x34)), 9, 8);
    GridInputHandler_SetNextLastUnk0FInputs(*((u32*)(*((u32*)(r5 + 0x34)) + 0x2c)), ((*((u32*)(*((u32*)(r5 + 0x34)) + 0x0000043C)) << 0x18) >> 0x18), 6, 6);
    // str r4, [r1, r0]
    // strb r2, [r0, r1]
    ov14_021F462C(r5, 0x0000044D, 0);
    ov14_021F4530(r5);
    ov14_021F459C(r5);
    ov14_021F58B8(r5);
    ov14_021F29E4(*((u32*)(r5 + 0x34)), 5, 4);
    ov14_021F7AC4(*((u32*)(r5 + 0x34)), r4, r6);
    ov14_021E5A50(*((u32*)(r5 + 0x34)), ov14_021E9F20);
    // bpl _021F79AE
    // strb r2, [r0, r1]
    ov14_021F462C(r5, 0x0000044D, 0x17);
    ov14_021F4530(r5);
    ov14_021F459C(r5);
    ov14_021F58B8(r5);
    ov14_021F29E4(*((u32*)(r5 + 0x34)), 4, 2);
    ov14_021F7AC4(*((u32*)(r5 + 0x34)), r4, r6);
    ov14_021E5A50(*((u32*)(r5 + 0x34)), ov14_021E9F20);
    // add r2, r4, r2
    // strb r2, [r0, r1]
    ov14_021F459C(r5, 0x0000044D, ((*((u8*)(*((u32*)(r5 + 0x34)) + 0x0000044D)) >> 2) << 2));
    ov14_021F58B8(r5);
    ov14_021F7AC4(*((u32*)(r5 + 0x34)), r4, r6);
    ov14_021E5A50(*((u32*)(r5 + 0x34)), ov14_021E9F20);
}





void ov14_021F7A2C(void) {
}





void ov14_021F7A50(void) {
}





void ov14_021F7AC4(void) {
    // add r1, sp, #0
    // add r2, sp, #0
    // add r1, #3
    // add r2, #2
    // add r1, sp, #0
    // add r1, #1
    // add r2, sp, #0
    // and r1, r0
    // add r0, sp, #0
    // strb r1, [r4]
    // sub r0, r0, r1
    // sub r0, r1, r0
    // add r0, sp, #0
    // sub r0, r0, r1
    // sub r0, r1, r0
}





void ov14_021F7B7C(void) {
    ov14_021E8648(*((u32*)(*((u32*)(r0 + 0x34)) + (0x2f << 4))), *((u32*)(r0 + 0x34)));
    // tst r0, r1
    TouchscreenHitbox_TouchNewIsIn(ov14_021F86C8, *((u32*)(gSystem + 0x48)));
}




