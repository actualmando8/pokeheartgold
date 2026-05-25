/* Decompiled from asm/unk_02077678.s */
#include "global.h"

void sub_02077678(void) {
    GF_AssertFail();
}


u8 sub_02077690(void) {
    return 0x4a;
}


u8 sub_02077694(void) {
    return 0xf2;
}


u8 sub_02077698(void) {
    return 0xf3;
}


void sub_0207769C(void) {
    GF_AssertFail();
}


u8 sub_020776B4(void) {
    return 8;
}


void sub_020776B8(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // add r7, r3, #0
    // add r5, r0, #0
    // add r6, r1, #0
    // add r4, r2, #0
    // bl sub_020776B4
    // str r0, [sp, #0xc]
    // add r0, r7, #0
    // bl sub_02077678
    // add r3, r0, #0
    // mov r0, #1
    // str r0, [sp]
    // ldr r0, [sp, #0x28]
    // str r4, [sp, #4]
    // str r0, [sp, #8]
    // ldr r2, [sp, #0xc]
    // add r0, r5, #0
    // add r1, r6, #0
    // bl SpriteSystem_LoadCharResObj
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void sub_020776EC(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // add r6, r0, #0
    // add r7, r1, #0
    // add r5, r2, #0
    // add r4, r3, #0
    // bl sub_020776B4
    // str r0, [sp, #0x10]
    // bl sub_02077690
    // add r3, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #3
    // str r0, [sp, #4]
    // str r5, [sp, #8]
    // ldr r2, [sp, #0x10]
    // add r0, r6, #0
    // add r1, r7, #0
    // str r4, [sp, #0xc]
    // bl SpriteSystem_LoadPlttResObj
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // TODO: decompile
}


void sub_02077720(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x1c
    // add r5, r0, #0
    // add r6, r1, #0
    // add r7, r2, #0
    // str r3, [sp, #0x18]
    // bl sub_020776B4
    // add r4, r0, #0
    // bl sub_02077690
    // str r4, [sp]
    // str r0, [sp, #4]
    // mov r0, #0
    // str r0, [sp, #8]
    // mov r0, #3
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x30]
    // ldr r3, [sp, #0x18]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x34]
    // add r1, r6, #0
    // str r0, [sp, #0x14]
    // add r0, r5, #0
    // add r2, r7, #0
    // bl SpriteSystem_LoadPaletteBuffer
    // add sp, #0x1c
    // pop {r4, r5, r6, r7, pc}
    // TODO: decompile
}


void sub_0207775C(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // add r5, r0, #0
    // add r4, r1, #0
    // add r6, r2, #0
    // add r7, r3, #0
    // bl sub_020776B4
    // str r0, [sp, #8]
    // bl sub_02077694
    // add r3, r0, #0
    // mov r0, #1
    // str r0, [sp]
    // ldr r2, [sp, #8]
    // add r0, r5, #0
    // add r1, r4, #0
    // str r6, [sp, #4]
    // bl SpriteSystem_LoadCellResObj
    // bl sub_020776B4
    // add r6, r0, #0
    // bl sub_02077698
    // add r3, r0, #0
    // mov r0, #1
    // str r0, [sp]
    // add r0, r5, #0
    // add r1, r4, #0
    // add r2, r6, #0
    // str r7, [sp, #4]
    // bl SpriteSystem_LoadAnimResObj
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // TODO: decompile
}


void sub_020777A4(void) {
    SpriteManager_UnloadCharObjById();
}


void sub_020777AC(void) {
    SpriteManager_UnloadPlttObjById();
}


void sub_020777B4(void) {
    SpriteManager_UnloadCellObjById();
    SpriteManager_UnloadAnimObjById(r5, r4);
}


void sub_020777C8(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x34
    // add r6, r3, #0
    // add r4, r0, #0
    // add r7, r1, #0
    // add r5, sp, #0
    // mov r3, #6
    // ldmia r6!, {r0, r1}
    // stmia r5!, {r0, r1}
    // sub r3, r3, #1
    // bne _020777D6
    // ldr r0, [r6]
    // str r0, [r5]
    // add r0, r2, #0
    // bl sub_0207769C
    // str r0, [sp, #0xc]
    // add r0, r4, #0
    // add r1, r7, #0
    // add r2, sp, #0
    // bl SpriteSystem_NewSprite
    // add sp, #0x34
    // pop {r4, r5, r6, r7, pc}
    // TODO: decompile
}


void thunk_ManagedSprite_DeleteAndFreeResources(void) {
    Sprite_DeleteAndFreeResources();
}


void sub_02077800(void) {
    GF_AssertFail();
}


void sub_02077818(void) {
    GF_AssertFail();
}


u8 sub_02077830(void) {
    return 8;
}


void sub_02077834(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // add r7, r3, #0
    // add r5, r0, #0
    // add r6, r1, #0
    // add r4, r2, #0
    // bl sub_02077830
    // str r0, [sp, #0xc]
    // add r0, r7, #0
    // bl sub_02077800
    // add r3, r0, #0
    // mov r0, #1
    // str r0, [sp]
    // ldr r0, [sp, #0x28]
    // str r4, [sp, #4]
    // str r0, [sp, #8]
    // ldr r2, [sp, #0xc]
    // add r0, r5, #0
    // add r1, r6, #0
    // bl SpriteSystem_LoadCharResObj
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void sub_02077868(void) {
    SpriteManager_UnloadCharObjById();
}


void sub_02077870(void) {
    Sprite_DeleteAndFreeResources();
}

