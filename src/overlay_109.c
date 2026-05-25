/* Decompiled from asm/overlay_109.s */
#include "global.h"

BOOL PhotoAlbum_Init(void) {
    // str r0, [r4]
    // str r0, [r5]
}





BOOL PhotoAlbum_Main(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _021E5984: ; jump table
    // str r0, [r4]
    // str r0, [r4]
    // str r0, [r4]
    // str r0, [r4]
    // str r0, [r4]
    // str r0, [r4]
    // str r0, [r4]
    // str r0, [r4]
    // str r0, [r4]
    // add r5, #0x94
}





BOOL PhotoAlbum_Exit(void) {
}





void ov109_021E5A20(void) {
    Main_SetVBlankIntrCB(0, 0);
    HBlankInterruptDisable();
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
}





void ov109_021E5A70(void) {
    MenuInputStateMgr_GetState(*((u32*)(*((u32*)(r0 + 0x10)) + 8)));
    *((u32*)(r5 + 0xc)) = r0;
    Save_PlayerData_GetOptionsAddr(*((u32*)(*((u32*)(r5 + 0x10)) + 0xc)));
    Options_GetTextFrameDelay();
    // add r1, #0x22
    // strb r0, [r1]
    Options_GetFrame(r4, r5);
    // add r1, #0x23
    // strb r0, [r1]
    _s32_div_f(*((u8*)(*((u32*)(r5 + 0x10)) + 2)), 0xc);
    _s32_div_f(r6, 0xc);
    *((u8*)(r5 + 0x19)) = r0;
    // sub r1, r1, r2
    // ror r1, r0
    // add r0, r2, r1
    *((u8*)(r5 + 0x1b)) = 0x1e;
    *((u8*)(r5 + 0x1c)) = (r4 >> 2);
    Save_PhotoAlbum_Get(*((u32*)(*((u32*)(r5 + 0x10)) + 0xc)), (r4 << 0x1e), (r4 >> 0x1f));
    // str r0, [r5, r1]
    PhotoAlbum_LoadAllInUsePhotos(*((u32*)(r5 + (0x7b << 2))), *((u32*)r5));
    // add r1, #0xc8
    // str r0, [r1]
    PhotoAlbum_GetNumSaved(*((u32*)(r5 + (0x7b << 2))), r5);
    // add r1, #0xc4
    // strb r0, [r1]
    // add r0, #0xc4
    // add r0, #0xc5
    // strb r1, [r0]
    // add r0, #0xc5
    _s32_div_f(*((u8*)r5), 0xc);
    *((u8*)(r5 + 0x1a)) = r0;
    // add r0, #0xc5
    _s32_div_f(*((u8*)r5), 0xc);
    *((u8*)(r5 + 0x1a)) = (*((u8*)(r5 + 0x1a)) + 1);
    // add r0, #0xc5
    *((u8*)(r5 + 0x1a)) = 1;
    ov109_021E5D08(r5);
}





void ov109_021E5B40(void) {
}





void ov109_021E5B60(void) {
}





u32 ov109_021E5B98(void) {
}





void ov109_021E5BAC(void) {
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
}





void ov109_021E5BF4(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
}





void ov109_021E5C40(void) {
}





void ov109_021E5C48(void) {
}





void ov109_021E5C68(void) {
}





void ov109_021E5C88(void) {
}





void ov109_021E5C90(void) {
}





void ov109_021E5C98(void) {
}





void ov109_021E5CAC(void) {
}





void ov109_021E5CB4(void) {
    ov109_021E694C();
    ov109_021E6B5C(r4);
    ov109_021E6C9C(r4);
    ov109_021E6D84(r4);
    ov109_021E6E9C(r4);
    Main_SetVBlankIntrCB(ov109_021E685C, r4);
}





void ov109_021E5CE4(void) {
}





void ov109_021E5D08(void) {
    // add r0, #0xc4
    // add r0, #0xc5
    // strb r1, [r0]
    // add r0, #0xcc
    // add r0, #0xc5
    // add r0, #0xcc
    // add r1, r0, r3
    // strb r2, [r0, r3]
    // add r3, #0xc8
    // add r3, r6, r3
    // add r1, #0xc5
}





void ov109_021E5D5C(void) {
    // add r0, #0xc5
    // add r1, r5, r1
    // add r1, #0xd0
    // add r0, #0xc5
    // add r0, #0xc4
    // add r0, #0xc4
}





void ov109_021E5DB8(void) {
    // add r4, #0xcc
    // add r0, r4, r6
    // add r1, sp, #0
    // add r5, #0xcc
    // add r0, r5, r7
    // add r1, r4, r6
    // add r0, sp, #0
    // add r1, r5, r7
}





void ov109_021E5DEC(void) {
    // add r0, #0xc5
    // add r0, #0xc5
    // strb r1, [r0]
    // add r0, #0xc5
    // add r6, #0xcc
    // add r0, r6, r0
    // add r1, r6, r1
    MI_CpuCopy8(((r1 + 1) << 3), (r1 << 3), 8);
    // add r0, #0xc5
    // add r1, #0xcc
    // add r0, r1, r0
    MI_CpuFill8((*((u8*)r5) << 3), 0, 8);
    // add r0, #0xc5
    _s32_div_f(*((u8*)r5), 0xc);
    *((u8*)(r5 + 0x1a)) = r0;
    // add r0, #0xc5
    _s32_div_f(*((u8*)r5), 0xc);
    *((u8*)(r5 + 0x1a)) = (*((u8*)(r5 + 0x1a)) + 1);
    // add r0, #0xc5
    *((u8*)(r5 + 0x1a)) = 1;
    // add r0, #0xc5
    *((u8*)(r5 + 0x1b)) = 3;
    *((u8*)(r5 + 0x1c)) = 3;
    *((u8*)(r5 + 0x19)) = 0;
    _s32_div_f((((r7 - 1) << 0x18) >> 0x18), 0xc);
    *((u8*)(r5 + 0x19)) = r0;
    _s32_div_f(r7, 0xc);
    // sub r1, r1, r2
    // ror r1, r0
    // add r0, r2, r1
    *((u8*)(r5 + 0x1b)) = 0x1e;
    *((u8*)(r5 + 0x1c)) = (*((u8*)(ov109_021E7890 + r1)) >> 2);
}





void ov109_021E5EC8(void) {
}





void ov109_021E5F10(void) {
    // str r1, [sp]
    // add r1, sp, #0
    // ldr r1, [sp]
}





void ov109_021E5F40(void) {
    *((u8*)(*((u32*)(r0 + 0x10)) + 1)) = 0;
    PlaySE(0x000005DC, 0);
    ov109_021E7388(r5, 1);
    ov109_021E7584(1, 2);
    PlaySE((0x92 << 4));
    ov109_021E7584(1, 3, *((u8*)(r5 + 0x19)));
    PlaySE((0x92 << 4));
    // add r0, r2, r0
    // add r0, #0xc5
    *((u8*)(r5 + 0x1f)) = (((0xc * *((u8*)(r5 + 0x19))) << 0x18) >> 0x18);
    *((u8*)(r5 + 0x1d)) = *((u8*)(r5 + 0x1b));
    *((u8*)(r5 + 0x1e)) = *((u8*)(r5 + 0x1c));
    PlaySE(0x000005DC, *((u8*)(r5 + 0x19)), *((u8*)(_021E7884 + r1)));
    ov109_021E75C8(r5);
    // add r1, r5, r1
    // add r1, #0xd0
    ov109_021E7248(r5, *((u32*)(r4 << 3)));
    ov109_021E74D4(r5, 1);
}





void ov109_021E5FFC(void) {
    TouchscreenHitbox_FindRectAtTouchNew(ov109_021E7A18);
    // mvn r0, r0
    ov109_021E75B4(r5);
    // str r3, [r6]
    // and r0, r4
    *((u8*)(r5 + 0x1b)) = 3;
    *((u8*)(r5 + 0x1c)) = (r4 >> 2);
    ov109_021E7474(r5, *((u8*)(r5 + 0x1b)), *((u8*)(r5 + 0x1c)), 1);
    PlaySE(0x000005DC);
    ov109_021E5F40(r5, ((r4 << 0x18) >> 0x18));
}





void ov109_021E6058(void) {
    // tst r1, r2
    ov109_021E75B4(0xf3, *((u32*)(gSystem + 0x48)));
    // tst r1, r0
    // add r0, r1, r0
    ov109_021E5F40(r4, (((*((u8*)(r4 + 0x1c)) << 2) << 0x18) >> 0x18));
    // tst r1, r0
    ov109_021E5F40(r4, 0xc);
    // tst r1, r0
    // add r0, r1, r0
    PlaySE(0x000005DC, *((u8*)(r4 + 0x1b)));
    *((u8*)(r4 + 0x1b)) = (*((u8*)(r4 + 0x1b)) - 1);
    ov109_021E7474(r4, *((u8*)(r4 + 0x1b)), *((u8*)(r4 + 0x1c)), 1);
    ov109_021E5F40(r4, 0xd);
    // tst r1, r0
    // add r0, r1, r0
    PlaySE(0x000005DC, *((u8*)(r4 + 0x1b)));
    *((u8*)(r4 + 0x1b)) = (*((u8*)(r4 + 0x1b)) + 1);
    ov109_021E7474(r4, *((u8*)(r4 + 0x1b)), *((u8*)(r4 + 0x1c)), 1);
    ov109_021E5F40(r4, 0xe);
    // tst r1, r0
    *((u8*)(r4 + 0x1b)) = 3;
    PlaySE(0x000005DC, 0x40);
    // sub r1, r1, r2
    // ror r1, r0
    // add r0, r2, r1
    *((u8*)(r4 + 0x1c)) = 0x1e;
    ov109_021E7474(r4, *((u8*)(r4 + 0x1b)), *((u8*)(r4 + 0x1c)), 1);
    // tst r0, r1
    PlaySE(0x000005DC, 0x80);
    // sub r1, r1, r2
    // ror r1, r0
    // add r0, r2, r1
    *((u8*)(r4 + 0x1c)) = 0x1e;
    ov109_021E7474(r4, *((u8*)(r4 + 0x1b)), *((u8*)(r4 + 0x1c)), 1);
}





void ov109_021E61BC(void) {
    // str r1, [sp]
    // add r1, sp, #0
    // ldr r1, [sp]
}





void ov109_021E61DC(void) {
    *((u16*)(r0 + 0xa)) = (*((u16*)(r0 + 0xa)) + 1);
    ov109_021E70C4(0, 3, 3, *((u8*)(r0 + 0x19)));
    // add r3, #0x22
    ov109_021E73F8(r4, 3, 0, *((u8*)r4));
    *((u16*)(r4 + 0xa)) = 0;
    *((u16*)(r4 + 8)) = (*((u16*)(r4 + 8)) + 1);
    *((u16*)(r4 + 0xa)) = (*((u16*)(r4 + 0xa)) + 1);
    // add r0, #0x21
    TextPrinterCheckActive(*((u8*)r4), *((u16*)(r4 + 0xa)));
    *((u16*)(r4 + 0xa)) = 0;
    *((u16*)(r4 + 8)) = (*((u16*)(r4 + 8)) + 1);
    // add r0, #0x20
    // strb r1, [r0]
    PlaySE(0x000005DC, 0);
    ov109_021E7474(r4, *((u8*)(r4 + 0x1b)), *((u8*)(r4 + 0x1c)), 1);
    ov109_021E73F8(r4, 0, 0, 0);
    ScheduleBgTilemapBufferTransfer(*((u32*)(r4 + 0x14)), 3);
    *((u16*)(r4 + 0xa)) = 0;
    *((u16*)(r4 + 8)) = 0;
}





void ov109_021E628C(void) {
    PlaySE(0x000005DC);
    ov109_021E7248(r5, 0);
    ov109_021E74D4(r5, 0);
    ov109_021E77D4(r5);
    ov109_021E73F8(r5, 0, 0, 0);
    // add r5, #0x20
    // strb r0, [r5]
    ov109_021E7584(5, 2);
    PlaySE((0x92 << 4));
    ov109_021E7584(5, 3, *((u8*)(r5 + 0x19)));
    PlaySE((0x92 << 4));
    // add r0, r2, r0
    // add r0, #0xc5
    PlaySE(0x000005DC, *((u8*)(r5 + 0x19)), *((u8*)(_021E7884 + r1)));
    ov109_021E74D4(r5, 0);
    ov109_021E7248(r5, 0);
    ov109_021E5DB8(r5, *((u8*)(r5 + 0x1f)), r4);
    ov109_021E71BC(r5, *((u8*)(r5 + 0x1f)), r4);
    ov109_021E7474(r5, *((u8*)(r5 + 0x1b)), *((u8*)(r5 + 0x1c)), 0);
    *((u16*)(r5 + 0xa)) = 0;
    // add r0, #0x20
    // strb r1, [r0]
    ov109_021E73F8(r5, 0, 0, 0);
}





void ov109_021E638C(void) {
    TouchscreenHitbox_FindRectAtTouchNew(ov109_021E7A18);
    // mvn r0, r0
    ov109_021E75B4(r5);
    // str r3, [r6]
    // and r0, r4
    *((u8*)(r5 + 0x1b)) = 3;
    *((u8*)(r5 + 0x1c)) = (r4 >> 2);
    ov109_021E7474(r5, *((u8*)(r5 + 0x1b)), *((u8*)(r5 + 0x1c)), 1);
    PlaySE(0x000005DC);
    ov109_021E628C(r5, ((r4 << 0x18) >> 0x18));
}





void ov109_021E63E8(void) {
    // tst r1, r2
    ov109_021E75B4(0xf3, *((u32*)(gSystem + 0x48)));
    // tst r1, r0
    // add r0, r1, r0
    ov109_021E628C(r4, (((*((u8*)(r4 + 0x1c)) << 2) << 0x18) >> 0x18));
    // tst r1, r0
    ov109_021E628C(r4, 0xc);
    // tst r1, r0
    // add r0, r1, r0
    PlaySE(0x000005DC, *((u8*)(r4 + 0x1b)));
    *((u8*)(r4 + 0x1b)) = (*((u8*)(r4 + 0x1b)) - 1);
    ov109_021E7474(r4, *((u8*)(r4 + 0x1b)), *((u8*)(r4 + 0x1c)), 1);
    // sub r1, r1, r2
    // ror r1, r0
    // add r0, r2, r1
    *((u8*)(r4 + 0x1b)) = 0x1e;
    ov109_021E628C(r4, 0xd, ((r1 + 3) >> 0x1f));
    // tst r1, r0
    // add r1, r0, r1
    PlaySE(0x000005DC, (((0xc << 2) << 0x18) >> 0x18));
    *((u8*)(r4 + 0x1b)) = (*((u8*)(r4 + 0x1b)) + 1);
    ov109_021E7474(r4, *((u8*)(r4 + 0x1b)), *((u8*)(r4 + 0x1c)), 1);
    // sub r1, r1, r2
    // ror r1, r0
    // add r0, r2, r1
    *((u8*)(r4 + 0x1b)) = 0x1e;
    ov109_021E628C(r4, 0xe, ((r0 + 1) >> 0x1f));
    // tst r1, r0
    *((u8*)(r4 + 0x1b)) = 3;
    PlaySE(0x000005DC, 0x40);
    // sub r1, r1, r2
    // ror r1, r0
    // add r0, r2, r1
    *((u8*)(r4 + 0x1c)) = 0x1e;
    ov109_021E7474(r4, *((u8*)(r4 + 0x1b)), *((u8*)(r4 + 0x1c)), 1);
    // tst r0, r1
    PlaySE(0x000005DC, 0x80);
    // sub r1, r1, r2
    // ror r1, r0
    // add r0, r2, r1
    *((u8*)(r4 + 0x1c)) = 0x1e;
    ov109_021E7474(r4, *((u8*)(r4 + 0x1b)), *((u8*)(r4 + 0x1c)), 1);
}





void ov109_021E656C(void) {
    ov109_021E7474(*((u8*)(r0 + 0x1b)), *((u8*)(r0 + 0x1c)), 0);
    ov109_021E74D4(r4, 0);
    ov109_021E68B8(r4, 1);
    ov109_021E691C(r4, (1 << 0xc));
    ov109_021E6F7C(r4, 1, 1);
    ov109_021E70C4(r4, 2, 1, *((u8*)(r4 + 0x19)));
    ov109_021E70C4(r4, 3, 1, (((*((u8*)(r4 + 0x19)) - 1) << 0x18) >> 0x18));
    *((u8*)(r4 + 0x18)) = (*((u8*)(r4 + 0x18)) & ~(0xf0));
    *((u16*)(r4 + 8)) = (*((u16*)(r4 + 8)) + 1);
    *((u8*)(r4 + 0x18)) = ((*((u8*)(r4 + 0x18)) & ~(0xf0)) | (((((((*((u8*)(r4 + 0x18)) << 0x18) >> 0x1c) + 1) << 0x18) >> 0x18) << 0x1c) >> 0x18));
    ov109_021E691C((*((u16*)(r4 + 8)) + 1), *((u32*)(ov109_021E78DC + (((*((u8*)(r4 + 0x18)) << 0x18) >> 0x1c) << 2))), (((*((u8*)(r4 + 0x18)) << 0x18) >> 0x1c) << 2), *((u8*)(r4 + 0x18)));
    ov109_021E6F7C(r4, 2, 1);
    ov109_021E70C4(r4, 2, 2, (((*((u8*)(r4 + 0x19)) - 1) << 0x18) >> 0x18));
    *((u16*)(r4 + 8)) = (*((u16*)(r4 + 8)) + 1);
    *((u8*)(r4 + 0x18)) = ((*((u8*)(r4 + 0x18)) & ~(0xf0)) | (((((((*((u8*)(r4 + 0x18)) << 0x18) >> 0x1c) - 1) << 0x18) >> 0x18) << 0x1c) >> 0x18));
    ov109_021E691C((*((u16*)(r4 + 8)) + 1), *((u32*)(ov109_021E78DC + (((*((u8*)(r4 + 0x18)) << 0x18) >> 0x1c) << 2))), (((*((u8*)(r4 + 0x18)) << 0x18) >> 0x1c) << 2), *((u8*)(r4 + 0x18)));
    ov109_021E70C4(r4, 3, 2, (((*((u8*)(r4 + 0x19)) - 1) << 0x18) >> 0x18));
    ov109_021E68B8(r4, 0);
    ov109_021E691C(r4, (1 << 0xc));
    *((u8*)(r4 + 0x19)) = (*((u8*)(r4 + 0x19)) - 1);
    ov109_021E7474(r4, *((u8*)(r4 + 0x1b)), *((u8*)(r4 + 0x1c)), 1);
    ov109_021E7524(r4);
    // add r0, #0x20
    ov109_021E74D4(r4, 1);
    *((u16*)(r4 + 8)) = 0;
}





void ov109_021E66C4(void) {
    ov109_021E7474(*((u8*)(r0 + 0x1b)), *((u8*)(r0 + 0x1c)), 0);
    ov109_021E74D4(r4, 0);
    ov109_021E68B8(r4, 1);
    ov109_021E691C(r4, (1 << 0xc));
    ov109_021E6F7C(r4, 2, 1);
    ov109_021E70C4(r4, 2, 2, *((u8*)(r4 + 0x19)));
    ov109_021E70C4(r4, 3, 2, (((*((u8*)(r4 + 0x19)) + 1) << 0x18) >> 0x18));
    *((u8*)(r4 + 0x18)) = (*((u8*)(r4 + 0x18)) & ~(0xf0));
    *((u16*)(r4 + 8)) = (*((u16*)(r4 + 8)) + 1);
    *((u8*)(r4 + 0x18)) = ((*((u8*)(r4 + 0x18)) & ~(0xf0)) | (((((((*((u8*)(r4 + 0x18)) << 0x18) >> 0x1c) + 1) << 0x18) >> 0x18) << 0x1c) >> 0x18));
    ov109_021E691C((*((u16*)(r4 + 8)) + 1), *((u32*)(ov109_021E78DC + (((*((u8*)(r4 + 0x18)) << 0x18) >> 0x1c) << 2))), (((*((u8*)(r4 + 0x18)) << 0x18) >> 0x1c) << 2), *((u8*)(r4 + 0x18)));
    ov109_021E6F7C(r4, 1, 1);
    ov109_021E70C4(r4, 2, 1, (((*((u8*)(r4 + 0x19)) + 1) << 0x18) >> 0x18));
    *((u16*)(r4 + 8)) = (*((u16*)(r4 + 8)) + 1);
    *((u8*)(r4 + 0x18)) = ((*((u8*)(r4 + 0x18)) & ~(0xf0)) | (((((((*((u8*)(r4 + 0x18)) << 0x18) >> 0x1c) - 1) << 0x18) >> 0x18) << 0x1c) >> 0x18));
    ov109_021E691C((*((u16*)(r4 + 8)) + 1), *((u32*)(ov109_021E78DC + (((*((u8*)(r4 + 0x18)) << 0x18) >> 0x1c) << 2))), (((*((u8*)(r4 + 0x18)) << 0x18) >> 0x1c) << 2), *((u8*)(r4 + 0x18)));
    ov109_021E70C4(r4, 3, 1, (((*((u8*)(r4 + 0x19)) + 1) << 0x18) >> 0x18));
    ov109_021E68B8(r4, 0);
    ov109_021E691C(r4, (1 << 0xc));
    *((u8*)(r4 + 0x19)) = (*((u8*)(r4 + 0x19)) + 1);
    ov109_021E7474(r4, *((u8*)(r4 + 0x1b)), *((u8*)(r4 + 0x1c)), 1);
    ov109_021E7524(r4);
    // add r0, #0x20
    ov109_021E74D4(r4, 1);
    *((u16*)(r4 + 8)) = 0;
}





void ov109_021E681C(void) {
}





void ov109_021E682C(void) {
}





void ov109_021E685C(void) {
    // add r0, #0x90
    SpriteSystem_TransferOam(*((u32*)r0));
    ov109_021E6898(r4);
    ov109_021E68D4(r4);
    NNS_GfdDoVramTransfer();
    DoScheduledBgGpuUpdates(*((u32*)(r4 + 0x14)));
    // str r0, [r3, r1]
}





void ov109_021E6898(void) {
    // bic r1, r0
}





void ov109_021E68B8(void) {
    // bic r3, r2
    // orr r1, r3
    // orr r1, r2
}





void ov109_021E68D4(void) {
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #4]
    // str r0, [sp]
    // add r2, sp, #4
}





void ov109_021E691C(void) {
    // str r1, [r0, r2]
}





void ov109_021E692C(void) {
}





void ov109_021E694C(void) {
    ov109_021E692C();
    BgConfig_Alloc(*((u32*)r4));
    // add r3, sp, #0xc4
    *((u32*)(r4 + 0x14)) = r0;
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    SetBothScreensModesAndDisable(r3, r3);
    // add r3, sp, #0xa8
    // and r0, r1
    // strh r0, [r2]
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(*((u32*)(r4 + 0x14)), 4, r3, 0);
    BgClearTilemapBufferAndCommit(*((u32*)(r4 + 0x14)), 4);
    // add r3, sp, #0x8c
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(*((u32*)(r4 + 0x14)), 7, r3, 2);
    BgClearTilemapBufferAndCommit(*((u32*)(r4 + 0x14)), 7);
    // add r3, sp, #0x70
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(*((u32*)(r4 + 0x14)), 6, r3, 0);
    BgClearTilemapBufferAndCommit(*((u32*)(r4 + 0x14)), 6);
    // add r3, sp, #0x54
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(*((u32*)(r4 + 0x14)), 0, r3, 0);
    BgClearTilemapBufferAndCommit(*((u32*)(r4 + 0x14)), 0);
    // add r3, sp, #0x38
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(*((u32*)(r4 + 0x14)), 1, r3, 0);
    BgClearTilemapBufferAndCommit(*((u32*)(r4 + 0x14)), 1);
    // add r3, sp, #0x1c
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(*((u32*)(r4 + 0x14)), 2, r3, 2);
    BgClearTilemapBufferAndCommit(*((u32*)(r4 + 0x14)), 2);
    // add r3, sp, #0
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(*((u32*)(r4 + 0x14)), 3, r3, 2);
    BgClearTilemapBufferAndCommit(*((u32*)(r4 + 0x14)), 3);
    BG_ClearCharDataRange(4, 0x20, 0, *((u32*)r4));
    BG_ClearCharDataRange(6, 0x20, 0, *((u32*)r4));
    BG_ClearCharDataRange(0, 0x20, 0, *((u32*)r4));
    BG_ClearCharDataRange(3, 0x40, 0, *((u32*)r4));
    BgSetPosTextAndCommit(*((u32*)(r4 + 0x14)), 7, 0, (0 - 4));
}





void ov109_021E6AFC(void) {
    BgSetPosTextAndCommit(*((u32*)(r0 + 0x14)), 7, 0, 0);
    FreeBgTilemapBuffer(*((u32*)(r4 + 0x14)), 3);
    FreeBgTilemapBuffer(*((u32*)(r4 + 0x14)), 2);
    FreeBgTilemapBuffer(*((u32*)(r4 + 0x14)), 1);
    FreeBgTilemapBuffer(*((u32*)(r4 + 0x14)), 0);
    FreeBgTilemapBuffer(*((u32*)(r4 + 0x14)), 6);
    FreeBgTilemapBuffer(*((u32*)(r4 + 0x14)), 7);
    FreeBgTilemapBuffer(*((u32*)(r4 + 0x14)), 4);
    Heap_Free(*((u32*)(r4 + 0x14)));
    // strh r0, [r2]
}





void ov109_021E6B5C(void) {
    // str r2, [sp]
    // str r1, [sp, #4]
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
    // add r3, #0xac
    // add r1, #0xb0
    // str r0, [r1]
    // str r0, [sp]
    // add r3, #0xb4
    // add r1, #0xb8
    // str r0, [r1]
    // str r0, [sp]
    // add r3, #0xbc
    // add r1, #0xc0
    // str r0, [r1]
    // add r0, #0x23
    // str r0, [sp]
    // str r0, [sp, #4]
}





void ov109_021E6C7C(void) {
}





void ov109_021E6C9C(void) {
    // add r1, #0xa
    // add r1, #0x88
    // str r0, [r1]
    // add r0, #0x88
}





void ov109_021E6D2C(void) {
    // add r0, #0x88
    // add r0, #0x88
    // str r4, [r0]
}





void ov109_021E6D84(void) {
    // add r5, #0x50
    AddWindow(*((u32*)(r0 + 0x14)), r0, ov109_021E78F4);
    FillWindowPixelBuffer(r5, 0);
    // add r4, #8
    // add r5, #0x10
    YesNoPrompt_Create(*((u32*)r7));
    // add r7, #0x8c
    // str r0, [r7]
}





void ov109_021E6DBC(void) {
    // add r5, #0x50
    // add r5, #0x10
    // add r6, #0x8c
}





void ov109_021E6DE4(void) {
    GF_CreateVramTransferManager(0x20, *((u32*)r0));
    SpriteSystem_Alloc(*((u32*)r4));
    // add r1, #0x90
    // str r0, [r1]
    // add r0, #0x90
    SpriteSystem_Init(*((u32*)r4), ov109_021E79D0, ov109_021E78C8, 3);
    thunk_ClearMainOAM(*((u32*)r4));
    thunk_ClearSubOAM(*((u32*)r4));
    // add r0, #0x90
    SpriteManager_New(*((u32*)r4));
    // add r1, #0x94
    // str r0, [r1]
    // add r0, #0x90
    // add r1, #0x94
    SpriteSystem_InitSprites(*((u32*)r4), *((u32*)r4), 5);
    // str r0, [sp]
    // add r0, #0x90
    // add r4, #0x94
    sub_0200D2A4(*((u32*)r4), *((u32*)r4), ov109_021E78A8, 2);
}





void ov109_021E6E64(void) {
}





void ov109_021E6E9C(void) {
}





void ov109_021E6EC0(void) {
}





void ov109_021E6EE4(void) {
    // add r0, #0x90
    // add r1, #0x94
    SpriteSystem_CreateSpriteFromResourceHeader(*((u32*)r0), *((u32*)r0), ov109_021E7A58);
    // add r1, #0x98
    // str r0, [r1]
    // add r0, #0x98
    Sprite_SetDrawFlag(*((u32*)r5), 1);
    // add r0, #0x98
    Sprite_SetAnimSpeed(*((u32*)r5), (1 << 0xc));
    // add r4, #0x28
    // add r0, #0x98
    Sprite_SetAnimActiveFlag(*((u32*)r6), 0);
    // add r0, #0x9c
    Sprite_SetDrawFlag(*((u32*)r6), 0);
    // add r0, #0xa8
    Sprite_SetPriority(*((u32*)r6), 2);
    // add r6, #0xa8
    Sprite_SetAnimActiveFlag(*((u32*)r6), 1);
}





void ov109_021E6F60(void) {
}





void ov109_021E6F7C(void) {
    // add r0, #0xbc
    // add r1, r4, r1
    // asr r2, r1, #1
    // str r1, [sp]
    // str r1, [sp, #4]
    // add r1, #0xc
    // str r1, [sp, #8]
    // str r2, [sp, #0xc]
    // str r3, [sp, #0x10]
    // str r1, [sp, #0x14]
    // str r0, [sp, #0x18]
}





void ov109_021E6FD4(void) {
    // add r2, #0xbc
    // str r5, [sp]
    // str r5, [sp, #4]
    // add r5, #0xc
    // str r5, [sp, #8]
    // str r3, [sp, #0xc]
    // str r3, [sp, #0x10]
    // str r3, [sp, #0x14]
    // str r2, [sp, #0x18]
}





void ov109_021E7030(void) {
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x14]
    // str r3, [sp, #8]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #8]
    // str r1, [sp, #4]
    // str r0, [sp, #0xc]
    // ldr r4, [sp, #8]
    // ldr r0, [sp, #0xc]
    // ldr r0, [sp, #0x14]
    // add r1, r1, r0
    // add r6, r1, r0
    // ldr r0, [sp, #0x18]
    // ldr r0, [sp, #0x10]
    // add r0, r1, r0
    // add r0, #0xc5
    // str r7, [sp]
    // add r1, r5, r1
    // add r1, #0xd0
    // ldr r2, [sp, #4]
    ov109_021E7178(r0, *((u32*)((((r4 << 0x18) << 0x18) >> 0x18) << 3)), ((r4 << 0x18) >> 0x18));
    // ldr r2, [sp, #4]
    ov109_021E7178(r5, 0, ((r4 << 0x18) >> 0x18));
    // ldr r0, [sp, #0xc]
    // ldr r0, [sp, #0x14]
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x18]
    // str r0, [sp, #0x18]
}





void ov109_021E70C4(void) {
    // tst r2, r6
    // tst r0, r3
}





void ov109_021E7114(void) {
    // str r2, [sp, #0x1c]
    // str r3, [sp, #0x20]
    // add r0, #0xb4
    // str r1, [sp]
    // str r1, [sp, #4]
    // add r1, #0xc
    // str r1, [sp, #8]
    // add r1, r7, r1
    // str r1, [sp, #0xc]
    // add r0, r0, r1
    // str r0, [sp, #0x10]
    // add r3, sp, #0x28
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    // ldr r1, [sp, #0x1c]
    // ldr r2, [sp, #0x20]
}





void ov109_021E7178(void) {
    // add r4, sp, #0
    // add r4, r5, r4
    // str r4, [sp]
    // add r3, r4, r3
    ov109_021E7114((((((*((u8*)(r1 + 4)) << 0x18) >> 0x19) + 1) << 0x18) >> 0x18), ((r2 << 0x18) >> 0x18), ((((6 * r3) + 4) << 0x18) >> 0x18));
}





void ov109_021E71BC(void) {
    _s32_div_f(r1, 0xc);
    _s32_div_f(r5, 0xc);
    // str r0, [sp]
    // sub r5, r5, r6
    // ror r5, r3
    // add r3, r6, r5
    ov109_021E7178(r4, 0, 3, ((0x1e << 0x18) >> 0x18));
    _s32_div_f(r7, 0xc);
    _s32_div_f(r7, 0xc);
    // str r0, [sp]
    // sub r6, r6, r3
    // ror r6, r5
    // add r3, r3, r6
    ov109_021E7178(r4, 0, 3, (((*((u8*)(ov109_021E7890 + r1)) >> 0x1f) << 0x18) >> 0x18));
    ScheduleBgTilemapBufferTransfer(*((u32*)(r4 + 0x14)), 3);
}





void ov109_021E7248(void) {
    ScheduleBgTilemapBufferTransfer(*((u32*)(r0 + 0x14)), 6);
    ScheduleBgTilemapBufferTransfer(*((u32*)(r5 + 0x14)), 7);
    // add r0, #0x70
    FillWindowPixelBuffer(r5, 0);
    BgClearTilemapBufferAndCommit(*((u32*)(r5 + 0x14)), 4);
    BgClearTilemapBufferAndCommit(*((u32*)(r5 + 0x14)), 7);
    // add r5, #0x70
    ScheduleWindowCopyToVram(r5);
    Save_PlayerData_GetProfile(*((u32*)(*((u32*)(r5 + 0x10)) + 0xc)));
    BufferPlayersName(*((u32*)(r5 + 0x28)), 0, r0);
    MapID_GetLandmarkName(*((u16*)(r4 + 0x32)), *((u32*)r5), *((u32*)(r5 + 0x2c)));
    // str r0, [sp]
    // str r3, [sp, #4]
    BufferString(*((u32*)(r5 + 0x28)), 1, *((u32*)(r5 + 0x2c)), 2);
    // add r1, #0x18
    CopyU16ArrayToString(*((u32*)(r5 + 0x2c)), r4);
    // str r0, [sp]
    // str r1, [sp, #4]
    BufferString(*((u32*)(r5 + 0x28)), 2, *((u32*)(r5 + 0x2c)), 2);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r2, r3, r2
    BufferIntegerAsString(*((u32*)(r5 + 0x28)), 3, (0x7d << 4), 4);
    // str r3, [sp]
    // str r0, [sp, #4]
    BufferIntegerAsString(*((u32*)(r5 + 0x28)), 4, (((*((u32*)(r4 + 0x38)) >> 0x10) << 0x18) >> 0x18), 2);
    // str r3, [sp]
    // str r0, [sp, #4]
    BufferIntegerAsString(*((u32*)(r5 + 0x28)), 5, (((*((u32*)(r4 + 0x38)) >> 8) << 0x18) >> 0x18), 2);
    ov109_021E7850(r4);
    StringExpandPlaceholders(*((u32*)(r5 + 0x28)), *((u32*)(r5 + 0x2c)), *((u32*)(r5 + 0x4c)));
    StringExpandPlaceholders(*((u32*)(r5 + 0x2c)), *((u32*)(r5 + 0x48)));
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r0, #0x70
    AddTextPrinterParameterizedWithColor(r5, 0, *((u32*)(r5 + 0x2c)), 0);
    // add r0, #0x70
    ScheduleWindowCopyToVram(r5);
    // str r0, [sp]
    ov109_021E7114(r5, (((((*((u8*)(r4 + 4)) << 0x18) >> 0x19) + 1) << 0x18) >> 0x18), 7, 0xd);
}





void ov109_021E7388(void) {
    // add r0, #0x50
    FillWindowPixelBuffer(0);
    // add r0, #0xa8
    Sprite_SetAnimCtrlSeq(*((u32*)r4), 9);
    // add r0, #0xa8
    Sprite_ResetAnimCtrlState(*((u32*)r4));
    FontID_String_GetWidth(4, *((u32*)(r4 + 0x30)), 0);
    // sub r3, r5, r3
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r0, #0x50
    AddTextPrinterParameterizedWithColor(r4, 4, *((u32*)(r4 + 0x30)), (r0 >> 1));
    // add r0, #0x50
    ScheduleWindowCopyToVram(r4);
    ScheduleBgTilemapBufferTransfer(*((u32*)(r4 + 0x14)), 1);
}





void ov109_021E73F8(void) {
    // add r0, #0x60
    DrawFrameAndWindow2(1, 1, 0xd);
    // add r0, #0x60
    FillWindowPixelBuffer(r5, 0xf);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r2, r5, r2
    // add r0, #0x60
    AddTextPrinterParameterizedWithColor(r5, 0, *((u32*)((r4 << 2) + 0x34)), 0);
    // str r1, [sp]
    // str r6, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r2, r5, r2
    // add r0, #0x60
    AddTextPrinterParameterizedWithColor(r5, 0, *((u32*)((r4 << 2) + 0x34)), 0);
    // add r1, #0x21
    // strb r0, [r1]
    // add r5, #0x60
    ScheduleWindowCopyToVram(r5, r5);
}





void ov109_021E7474(void) {
    // add r0, #0x98
    // add r0, #0x98
    // add r1, #0x1c
    // add r0, r1, r0
    // asr r7, r0, #0x10
    // add r0, #8
    // asr r4, r0, #0x10
    // add r0, #0x98
    // add r5, #0x98
}





void ov109_021E74D4(void) {
    // add r0, #0x9c
    // add r2, #0x1c
    // add r1, r2, r1
    // add r2, #8
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    // add r5, #0x9c
}





void ov109_021E7524(void) {
    // add r0, #0xa0
    // add r0, #0xa4
    // add r0, #0xa0
    // add r0, #0xa0
    // add r4, #0xa4
    // add r4, #0xa4
}





void ov109_021E7584(void) {
    // add r5, #0x98
}





void ov109_021E75B4(void) {
}





void ov109_021E75C8(void) {
    // add r0, sp, #0xc
    MI_CpuFill8(0, 0x18);
    // add r2, sp, #0xc
    // add r1, sp, #0xc
    // strh r3, [r2]
    *((u16*)(r2 + 2)) = *((u16*)(ov109_021E789C + 2));
    *((u16*)(r2 + 4)) = *((u16*)(ov109_021E789C + 4));
    *((u16*)(r2 + 6)) = *((u16*)(ov109_021E789C + 6));
    *((u16*)(r2 + 8)) = *((u16*)(ov109_021E789C + 8));
    *((u16*)(r2 + 0xa)) = *((u16*)(ov109_021E789C + 0xa));
    // add r0, #0x88
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x1c]
    *((u8*)(r2 + 0x14)) = 4;
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0x80
    TouchscreenListMenu_Create(*((u32*)r4), ((*((u32*)(r4 + 0xc)) << 0x18) >> 0x18), 0x18);
    // add r1, #0x84
    // str r0, [r1]
    ov109_021E7474(r4, *((u8*)(r4 + 0x1b)), *((u8*)(r4 + 0x1c)), 0);
}





void ov109_021E7640(void) {
    // add r0, #0x84
    // mvn r0, r0
    // add r0, #0x84
    // add r0, #0x84
    // add r5, #0x20
    // strb r0, [r5]
    // add r5, #0x20
    // strb r0, [r5]
}





void ov109_021E76F0(void) {
    // add r0, sp, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, sp, #0
    // add r4, #0x8c
    // and r3, r5
    // add r1, sp, #0
}





void ov109_021E7748(void) {
    // add r0, #0x8c
    // add r0, #0x8c
    // add r0, #0x8c
    // add r5, #0x20
    // strb r0, [r5]
}





void ov109_021E77D4(void) {
    Heap_AllocAtEnd(*((u32*)r0), 8);
    MI_CpuFill8(0, 8);
    // str r4, [r5]
    SysTask_CreateOnMainQueue(ov109_021E7810, r5, 0);
    ov109_021E7388(r4, 1);
    *((u8*)(r4 + 0x18)) = (1 | (*((u8*)(r4 + 0x18)) & ~(1)));
}





void ov109_021E7810(void) {
    // add r0, #0xa8
}





void ov109_021E7850(void) {
    // add r4, r0, r4
    // add r4, #0x6c
}




