/* Decompiled from asm/overlay_80_02239AF8.s */
#include "global.h"

void ov80_02239AF8(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x1c
    // add r6, r0, #0
    // add r0, sp, #0x20
    // ldrh r0, [r0, #0x10]
    // add r7, r1, #0
    // add r5, r2, #0
    // str r3, [sp, #0x18]
    // cmp r0, #4
    // blo _02239B10
    // bl GF_AssertFail
    // add r1, sp, #0x20
    // ldrh r2, [r1, #0x10]
    // mov r1, #0x34
    // ldr r0, _02239B78 ; =ov80_0223DA54
    // mul r1, r2
    // add r4, r0, r1
    // ldr r3, [r4, #0x14]
    // mov r0, #1
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r3, [sp, #8]
    // add r0, r6, #0
    // add r1, r7, #0
    // add r2, r5, #0
    // bl SpriteSystem_LoadCharResObjFromOpenNarc
    // ldr r1, [r4, #0x18]
    // mov r0, #0
    // str r5, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #1
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r1, [sp, #0x14]
    // ldr r0, [sp, #0x18]
    // mov r1, #2
    // add r2, r6, #0
    // add r3, r7, #0
    // bl SpriteSystem_LoadPaletteBufferFromOpenNarc
    // ldr r3, [r4, #0x1c]
    // mov r0, #1
    // str r0, [sp]
    // str r3, [sp, #4]
    // add r0, r6, #0
    // add r1, r7, #0
    // add r2, r5, #0
    // bl SpriteSystem_LoadCellResObjFromOpenNarc
    // ldr r3, [r4, #0x20]
    // mov r0, #1
    // str r0, [sp]
    // add r0, r6, #0
    // add r1, r7, #0
    // add r2, r5, #0
    // str r3, [sp, #4]
    // bl SpriteSystem_LoadAnimResObjFromOpenNarc
    // add sp, #0x1c
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _02239B78: .word ov80_0223DA54
    // TODO: decompile
}


void ov80_02239B7C(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // cmp r4, #4
    // blo _02239B8A
    // bl GF_AssertFail
    // mov r0, #0x34
    // ldr r1, _02239BB4 ; =ov80_0223DA54
    // mul r0, r4
    // add r4, r1, r0
    // ldr r1, [r4, #0x14]
    // add r0, r5, #0
    // bl SpriteManager_UnloadCharObjById
    // ldr r1, [r4, #0x18]
    // add r0, r5, #0
    // bl SpriteManager_UnloadPlttObjById
    // ldr r1, [r4, #0x1c]
    // add r0, r5, #0
    // bl SpriteManager_UnloadCellObjById
    // ldr r1, [r4, #0x20]
    // add r0, r5, #0
    // bl SpriteManager_UnloadAnimObjById
    // pop {r3, r4, r5, pc}
    // _02239BB4: .word ov80_0223DA54
    // TODO: decompile
}


void ov80_02239BB8(void) {
    // push {r4, r5, r6, lr}
    // add r4, r2, #0
    // add r5, r0, #0
    // add r6, r1, #0
    // cmp r4, #4
    // blo _02239BC8
    // bl GF_AssertFail
    // mov r2, #0x34
    // ldr r3, _02239BE4 ; =ov80_0223DA54
    // mul r2, r4
    // add r0, r5, #0
    // add r1, r6, #0
    // add r2, r3, r2
    // bl SpriteSystem_NewSprite
    // add r4, r0, #0
    // ldr r0, [r4]
    // bl Sprite_TickFrame
    // add r0, r4, #0
    // pop {r4, r5, r6, pc}
    // _02239BE4: .word ov80_0223DA54
    // TODO: decompile
}


void ov80_02239BE8(void) {
    Sprite_DeleteAndFreeResources();
}

