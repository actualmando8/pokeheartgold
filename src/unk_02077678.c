/* Decompiled from asm/unk_02077678.s */
#include "global.h"

void sub_02077678(void) {
}



u8 sub_02077690(void) {
}



u8 sub_02077694(void) {
}



u8 sub_02077698(void) {
}



void sub_0207769C(void) {
}



u8 sub_020776B4(void) {
}



void sub_020776B8(void) {
    sub_020776B4();
    // str r0, [sp, #0xc]
    sub_02077678(r7);
    // str r0, [sp]
    // ldr r0, [sp, #0x28]
    // str r4, [sp, #4]
    // str r0, [sp, #8]
    // ldr r2, [sp, #0xc]
    SpriteSystem_LoadCharResObj(r5, r6, r0);
}



void sub_020776EC(void) {
    sub_020776B4();
    // str r0, [sp, #0x10]
    sub_02077690();
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r5, [sp, #8]
    // ldr r2, [sp, #0x10]
    // str r4, [sp, #0xc]
    SpriteSystem_LoadPlttResObj(r6, r7, r0);
}



void sub_02077720(void) {
    // str r3, [sp, #0x18]
    sub_020776B4();
    sub_02077690();
    // str r4, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x30]
    // ldr r3, [sp, #0x18]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x34]
    // str r0, [sp, #0x14]
    SpriteSystem_LoadPaletteBuffer(r5, r6, r7);
}



void sub_0207775C(void) {
    sub_020776B4();
    // str r0, [sp, #8]
    sub_02077694();
    // str r0, [sp]
    // ldr r2, [sp, #8]
    // str r6, [sp, #4]
    SpriteSystem_LoadCellResObj(r5, r4, r0);
    sub_020776B4();
    sub_02077698();
    // str r0, [sp]
    // str r7, [sp, #4]
    SpriteSystem_LoadAnimResObj(r5, r4, r6, r0);
}



void sub_020777A4(void) {
}



void sub_020777AC(void) {
}



void sub_020777B4(void) {
}



void * sub_020777C8(void) {
    // add r5, sp, #0
    // ldmia r6!, {r0, r1}
    // stmia r5!, {r0, r1}
    // str r0, [r5]
    sub_0207769C(r2, (6 - 1));
    // str r0, [sp, #0xc]
    // add r2, sp, #0
    SpriteSystem_NewSprite(r4, r7);
}



void thunk_ManagedSprite_DeleteAndFreeResources(void) {
}



void sub_02077800(void) {
}



void sub_02077818(void) {
}



u8 sub_02077830(void) {
}



void sub_02077834(void) {
    sub_02077830();
    // str r0, [sp, #0xc]
    sub_02077800(r7);
    // str r0, [sp]
    // ldr r0, [sp, #0x28]
    // str r4, [sp, #4]
    // str r0, [sp, #8]
    // ldr r2, [sp, #0xc]
    SpriteSystem_LoadCharResObj(r5, r6, r0);
}



void sub_02077868(void) {
}



void sub_02077870(void) {
}


