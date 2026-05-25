/* Decompiled from asm/overlay_80_02239AF8.s */
#include "global.h"

void ov80_02239AF8(void) {
    /* Original at 0x02239AF8 */
    /* Requires manual decompilation - 60 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x1c\n    add r6, r0, #0\n    add r0, sp, #0x20\n    ldrh r0, [r0, #0x10]\n    add r7, r1, #0\n    add r5, r2, #0\n    str r3, [sp, #0x18]\n    cmp r0, #4\n    blo _02239B10\n    bl GF_AssertFail\n    add r1, sp, #0x20\n    ldrh r2, [r1, #0x10]\n    mov r1, #0x34\n    ldr r0, _02239B78 ; =ov80_0223DA54\n    mul r1, r2\n    add r4, r0, r1\n    ldr r3, [r4, #0x14]\n    mov r0, #1\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r3, [sp, #8]\n    add r0, r6, #0\n    add r1, r7, #0\n    add r2, r5, #0\n    bl SpriteSystem_LoadCharResObjFromOpenNarc\n    ldr r1, [r4, #0x18]\n    mov r0, #0\n    str r5, [sp]\n    str r1, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #1\n    str r0, [sp, #0xc]\n    str r0, [sp, #0x10]\n    str r1, [sp, #0x14]\n    ldr r0, [sp, #0x18]\n    mov r1, #2\n    add r2, r6, #0\n    add r3, r7, #0\n    bl SpriteSystem_LoadPaletteBufferFromOpenNarc\n    ldr r3, [r4, #0x1c]\n    mov r0, #1\n    str r0, [sp]\n    str r3, [sp, #4]\n    add r0, r6, #0\n    add r1, r7, #0\n    add r2, r5, #0\n    bl SpriteSystem_LoadCellResObjFromOpenNarc\n    ldr r3, [r4, #0x20]\n    mov r0, #1\n    str r0, [sp]\n    add r0, r6, #0\n    add r1, r7, #0\n    add r2, r5, #0\n    str r3, [sp, #4]\n    bl SpriteSystem_LoadAnimResObjFromOpenNarc\n    add sp, #0x1c\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _02239B78: .word ov80_0223DA54"
    );
    #endif
}

void ov80_02239B7C(void) {
    /* Original at 0x02239B7C */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    cmp r4, #4\n    blo _02239B8A\n    bl GF_AssertFail\n    mov r0, #0x34\n    ldr r1, _02239BB4 ; =ov80_0223DA54\n    mul r0, r4\n    add r4, r1, r0\n    ldr r1, [r4, #0x14]\n    add r0, r5, #0\n    bl SpriteManager_UnloadCharObjById\n    ldr r1, [r4, #0x18]\n    add r0, r5, #0\n    bl SpriteManager_UnloadPlttObjById\n    ldr r1, [r4, #0x1c]\n    add r0, r5, #0\n    bl SpriteManager_UnloadCellObjById\n    ldr r1, [r4, #0x20]\n    add r0, r5, #0\n    bl SpriteManager_UnloadAnimObjById\n    pop {r3, r4, r5, pc}\n    _02239BB4: .word ov80_0223DA54"
    );
    #endif
}

void ov80_02239BB8(void) {
    /* Original at 0x02239BB8 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r2, #0\n    add r5, r0, #0\n    add r6, r1, #0\n    cmp r4, #4\n    blo _02239BC8\n    bl GF_AssertFail\n    mov r2, #0x34\n    ldr r3, _02239BE4 ; =ov80_0223DA54\n    mul r2, r4\n    add r0, r5, #0\n    add r1, r6, #0\n    add r2, r3, r2\n    bl SpriteSystem_NewSprite\n    add r4, r0, #0\n    ldr r0, [r4]\n    bl Sprite_TickFrame\n    add r0, r4, #0\n    pop {r4, r5, r6, pc}\n    _02239BE4: .word ov80_0223DA54"
    );
    #endif
}

void ov80_02239BE8(void) {
    Sprite_DeleteAndFreeResources();
}
