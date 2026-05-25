/* Decompiled from asm/unk_02077678.s */
#include "global.h"

void sub_02077678(void) {
    GF_AssertFail();
}

void sub_02077690(void) {
    /* Original at 0x02077690 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "mov r0, #0x4a\n    bx lr"
    );
    #endif
}

void sub_02077694(void) {
    /* Original at 0x02077694 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "mov r0, #0xf2\n    bx lr"
    );
    #endif
}

void sub_02077698(void) {
    /* Original at 0x02077698 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "mov r0, #0xf3\n    bx lr"
    );
    #endif
}

void sub_0207769C(void) {
    GF_AssertFail();
}

void sub_020776B4(void) {
    /* Original at 0x020776B4 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "mov r0, #8\n    bx lr"
    );
    #endif
}

void sub_020776B8(void) {
    /* Original at 0x020776B8 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r7, r3, #0\n    add r5, r0, #0\n    add r6, r1, #0\n    add r4, r2, #0\n    bl sub_020776B4\n    str r0, [sp, #0xc]\n    add r0, r7, #0\n    bl sub_02077678\n    add r3, r0, #0\n    mov r0, #1\n    str r0, [sp]\n    ldr r0, [sp, #0x28]\n    str r4, [sp, #4]\n    str r0, [sp, #8]\n    ldr r2, [sp, #0xc]\n    add r0, r5, #0\n    add r1, r6, #0\n    bl SpriteSystem_LoadCharResObj\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_020776EC(void) {
    /* Original at 0x020776EC */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r6, r0, #0\n    add r7, r1, #0\n    add r5, r2, #0\n    add r4, r3, #0\n    bl sub_020776B4\n    str r0, [sp, #0x10]\n    bl sub_02077690\n    add r3, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #3\n    str r0, [sp, #4]\n    str r5, [sp, #8]\n    ldr r2, [sp, #0x10]\n    add r0, r6, #0\n    add r1, r7, #0\n    str r4, [sp, #0xc]\n    bl SpriteSystem_LoadPlttResObj\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_02077720(void) {
    /* Original at 0x02077720 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x1c\n    add r5, r0, #0\n    add r6, r1, #0\n    add r7, r2, #0\n    str r3, [sp, #0x18]\n    bl sub_020776B4\n    add r4, r0, #0\n    bl sub_02077690\n    str r4, [sp]\n    str r0, [sp, #4]\n    mov r0, #0\n    str r0, [sp, #8]\n    mov r0, #3\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #0x30]\n    ldr r3, [sp, #0x18]\n    str r0, [sp, #0x10]\n    ldr r0, [sp, #0x34]\n    add r1, r6, #0\n    str r0, [sp, #0x14]\n    add r0, r5, #0\n    add r2, r7, #0\n    bl SpriteSystem_LoadPaletteBuffer\n    add sp, #0x1c\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_0207775C(void) {
    /* Original at 0x0207775C */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    add r4, r1, #0\n    add r6, r2, #0\n    add r7, r3, #0\n    bl sub_020776B4\n    str r0, [sp, #8]\n    bl sub_02077694\n    add r3, r0, #0\n    mov r0, #1\n    str r0, [sp]\n    ldr r2, [sp, #8]\n    add r0, r5, #0\n    add r1, r4, #0\n    str r6, [sp, #4]\n    bl SpriteSystem_LoadCellResObj\n    bl sub_020776B4\n    add r6, r0, #0\n    bl sub_02077698\n    add r3, r0, #0\n    mov r0, #1\n    str r0, [sp]\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r6, #0\n    str r7, [sp, #4]\n    bl SpriteSystem_LoadAnimResObj\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_020777A4(void) {
    SpriteManager_UnloadCharObjById();
}

void sub_020777AC(void) {
    SpriteManager_UnloadPlttObjById();
}

void sub_020777B4(void) {
    /* Original at 0x020777B4 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r2, #0\n    bl SpriteManager_UnloadCellObjById\n    add r0, r5, #0\n    add r1, r4, #0\n    bl SpriteManager_UnloadAnimObjById\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_020777C8(void) {
    /* Original at 0x020777C8 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x34\n    add r6, r3, #0\n    add r4, r0, #0\n    add r7, r1, #0\n    add r5, sp, #0\n    mov r3, #6\n    ldmia r6!, {r0, r1}\n    stmia r5!, {r0, r1}\n    sub r3, r3, #1\n    bne _020777D6\n    ldr r0, [r6]\n    str r0, [r5]\n    add r0, r2, #0\n    bl sub_0207769C\n    str r0, [sp, #0xc]\n    add r0, r4, #0\n    add r1, r7, #0\n    add r2, sp, #0\n    bl SpriteSystem_NewSprite\n    add sp, #0x34\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
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

void sub_02077830(void) {
    /* Original at 0x02077830 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "mov r0, #8\n    bx lr"
    );
    #endif
}

void sub_02077834(void) {
    /* Original at 0x02077834 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r7, r3, #0\n    add r5, r0, #0\n    add r6, r1, #0\n    add r4, r2, #0\n    bl sub_02077830\n    str r0, [sp, #0xc]\n    add r0, r7, #0\n    bl sub_02077800\n    add r3, r0, #0\n    mov r0, #1\n    str r0, [sp]\n    ldr r0, [sp, #0x28]\n    str r4, [sp, #4]\n    str r0, [sp, #8]\n    ldr r2, [sp, #0xc]\n    add r0, r5, #0\n    add r1, r6, #0\n    bl SpriteSystem_LoadCharResObj\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_02077868(void) {
    SpriteManager_UnloadCharObjById();
}

void sub_02077870(void) {
    Sprite_DeleteAndFreeResources();
}
