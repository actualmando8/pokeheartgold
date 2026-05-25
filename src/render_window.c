/* Decompiled from asm/render_window.s */
#include "global.h"

void sub_0200E398(void) {
    /* Original at 0x0200E398 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    add r4, r1, #0\n    cmp r3, #0\n    str r2, [sp]\n    bne _0200E3BE\n    mov r1, #0\n    str r1, [sp, #4]\n    ldr r0, [sp, #0x20]\n    str r1, [sp, #8]\n    str r0, [sp, #0xc]\n    mov r0, #0x26\n    add r2, r5, #0\n    add r3, r4, #0\n    bl GfGfxLoader_LoadCharData\n    add sp, #0x10\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    ldr r0, [sp, #0x20]\n    mov r1, #1\n    str r0, [sp, #0xc]\n    mov r0, #0x26\n    add r2, r5, #0\n    add r3, r4, #0\n    bl GfGfxLoader_LoadCharData\n    add sp, #0x10\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

u8 sub_0200E3D8(void) {
    return 0x19;
}

void LoadUserFrameGfx1(void) {
    /* Original at 0x0200E3DC */
    /* Requires manual decompilation - 51 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x10\n    add r6, r0, #0\n    add r0, sp, #0x10\n    ldrb r0, [r0, #0x10]\n    add r5, r1, #0\n    add r4, r3, #0\n    cmp r0, #0\n    beq _0200E3F2\n    mov r1, #1\n    b _0200E3F4\n    mov r1, #0\n    str r2, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    ldr r0, [sp, #0x24]\n    add r2, r6, #0\n    str r0, [sp, #0xc]\n    mov r0, #0x26\n    add r3, r5, #0\n    bl GfGfxLoader_LoadCharData\n    add r0, sp, #0x10\n    ldrb r0, [r0, #0x10]\n    cmp r0, #2\n    bne _0200E416\n    mov r1, #0x2e\n    b _0200E418\n    mov r1, #0x19\n    cmp r5, #4\n    bhs _0200E432\n    mov r0, #0x20\n    str r0, [sp]\n    ldr r0, [sp, #0x24]\n    mov r2, #0\n    str r0, [sp, #4]\n    mov r0, #0x26\n    lsl r3, r4, #5\n    bl GfGfxLoader_GXLoadPal\n    add sp, #0x10\n    pop {r4, r5, r6, pc}\n    mov r0, #0x20\n    str r0, [sp]\n    ldr r0, [sp, #0x24]\n    mov r2, #4\n    str r0, [sp, #4]\n    mov r0, #0x26\n    lsl r3, r4, #5\n    bl GfGfxLoader_GXLoadPal\n    add sp, #0x10\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void sub_0200E448(void) {
    /* Original at 0x0200E448 */
    /* Requires manual decompilation - 147 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x24\n    str r1, [sp, #0x14]\n    str r2, [sp, #0x18]\n    str r3, [sp, #0x1c]\n    ldr r2, [sp, #0x1c]\n    ldr r5, [sp, #0x40]\n    sub r7, r2, #1\n    ldr r2, [sp, #0x18]\n    str r0, [sp, #0x10]\n    sub r6, r2, #1\n    lsl r2, r7, #0x18\n    lsr r2, r2, #0x18\n    str r2, [sp]\n    mov r2, #1\n    str r2, [sp, #4]\n    str r2, [sp, #8]\n    lsl r3, r6, #0x18\n    str r5, [sp, #0xc]\n    add r2, sp, #0x28\n    ldrh r2, [r2, #0x1c]\n    lsr r3, r3, #0x18\n    bl FillBgTilemapRect\n    add r1, sp, #0x28\n    ldrh r4, [r1, #0x1c]\n    lsl r0, r7, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    ldrb r0, [r1, #0x10]\n    add r2, r4, #1\n    lsl r2, r2, #0x10\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    str r5, [sp, #0xc]\n    ldr r0, [sp, #0x10]\n    ldr r1, [sp, #0x14]\n    ldr r3, [sp, #0x18]\n    lsr r2, r2, #0x10\n    bl FillBgTilemapRect\n    add r0, sp, #0x28\n    ldrb r1, [r0, #0x10]\n    ldr r0, [sp, #0x18]\n    add r2, r4, #2\n    add r0, r0, r1\n    str r0, [sp, #0x20]\n    lsl r0, r7, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    ldr r3, [sp, #0x20]\n    str r5, [sp, #0xc]\n    lsl r2, r2, #0x10\n    lsl r3, r3, #0x18\n    ldr r0, [sp, #0x10]\n    ldr r1, [sp, #0x14]\n    lsr r2, r2, #0x10\n    lsr r3, r3, #0x18\n    bl FillBgTilemapRect\n    ldr r0, [sp, #0x1c]\n    add r2, r4, #3\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    add r0, sp, #0x28\n    ldrb r0, [r0, #0x14]\n    lsl r2, r2, #0x10\n    lsl r3, r6, #0x18\n    str r0, [sp, #8]\n    str r5, [sp, #0xc]\n    ldr r0, [sp, #0x10]\n    ldr r1, [sp, #0x14]\n    lsr r2, r2, #0x10\n    lsr r3, r3, #0x18\n    bl FillBgTilemapRect\n    ldr r0, [sp, #0x1c]\n    ldr r3, [sp, #0x20]\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    add r0, sp, #0x28\n    ldrb r0, [r0, #0x14]\n    add r2, r4, #5\n    lsl r2, r2, #0x10\n    str r0, [sp, #8]\n    str r5, [sp, #0xc]\n    lsl r3, r3, #0x18\n    ldr r0, [sp, #0x10]\n    ldr r1, [sp, #0x14]\n    lsr r2, r2, #0x10\n    lsr r3, r3, #0x18\n    bl FillBgTilemapRect\n    add r0, sp, #0x28\n    ldrb r1, [r0, #0x14]\n    ldr r0, [sp, #0x1c]\n    add r2, r4, #6\n    add r7, r0, r1\n    lsl r0, r7, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    str r5, [sp, #0xc]\n    lsl r2, r2, #0x10\n    lsl r3, r6, #0x18\n    ldr r0, [sp, #0x10]\n    ldr r1, [sp, #0x14]\n    lsr r2, r2, #0x10\n    lsr r3, r3, #0x18\n    bl FillBgTilemapRect\n    lsl r0, r7, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    add r0, sp, #0x28\n    ldrb r0, [r0, #0x10]\n    add r2, r4, #7\n    lsl r2, r2, #0x10\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    str r5, [sp, #0xc]\n    ldr r0, [sp, #0x10]\n    ldr r1, [sp, #0x14]\n    ldr r3, [sp, #0x18]\n    lsr r2, r2, #0x10\n    bl FillBgTilemapRect\n    lsl r0, r7, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    ldr r3, [sp, #0x20]\n    str r5, [sp, #0xc]\n    add r4, #8\n    lsl r2, r4, #0x10\n    lsl r3, r3, #0x18\n    ldr r0, [sp, #0x10]\n    ldr r1, [sp, #0x14]\n    lsr r2, r2, #0x10\n    lsr r3, r3, #0x18\n    bl FillBgTilemapRect\n    add sp, #0x24\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void DrawFrameAndWindow1(void) {
    /* Original at 0x0200E580 */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x20\n    add r5, r0, #0\n    add r4, r1, #0\n    add r6, r2, #0\n    add r7, r3, #0\n    bl GetWindowBgId\n    str r0, [sp, #0x10]\n    add r0, r5, #0\n    bl GetWindowX\n    str r0, [sp, #0x14]\n    add r0, r5, #0\n    bl GetWindowY\n    str r0, [sp, #0x18]\n    add r0, r5, #0\n    bl GetWindowWidth\n    str r0, [sp, #0x1c]\n    add r0, r5, #0\n    bl GetWindowHeight\n    ldr r1, [sp, #0x1c]\n    ldr r2, [sp, #0x14]\n    str r1, [sp]\n    str r0, [sp, #4]\n    str r7, [sp, #8]\n    str r6, [sp, #0xc]\n    ldr r0, [r5]\n    ldr r1, [sp, #0x10]\n    ldr r3, [sp, #0x18]\n    bl sub_0200E448\n    cmp r4, #0\n    bne _0200E5D0\n    add r0, r5, #0\n    bl CopyWindowToVram\n    add sp, #0x20\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_0200E5D4(void) {
    /* Original at 0x0200E5D4 */
    /* Requires manual decompilation - 44 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    add r5, r0, #0\n    add r4, r1, #0\n    bl GetWindowBgId\n    str r0, [sp, #0x10]\n    add r0, r5, #0\n    bl GetWindowX\n    add r6, r0, #0\n    add r0, r5, #0\n    bl GetWindowY\n    add r7, r0, #0\n    add r0, r5, #0\n    bl GetWindowWidth\n    str r0, [sp, #0x14]\n    add r0, r5, #0\n    bl GetWindowHeight\n    sub r1, r7, #1\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    str r1, [sp]\n    ldr r1, [sp, #0x14]\n    add r0, r0, #2\n    add r1, r1, #2\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    lsl r0, r0, #0x18\n    str r1, [sp, #4]\n    lsr r0, r0, #0x18\n    sub r3, r6, #1\n    lsl r3, r3, #0x18\n    str r0, [sp, #8]\n    mov r2, #0\n    str r2, [sp, #0xc]\n    ldr r0, [r5]\n    ldr r1, [sp, #0x10]\n    lsr r3, r3, #0x18\n    bl FillBgTilemapRect\n    cmp r4, #0\n    bne _0200E636\n    add r0, r5, #0\n    bl ClearWindowTilemapAndCopyToVram\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_0200E63C(void) {
    /* Original at 0x0200E63C */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "add r0, r0, #2\n    bx lr"
    );
    #endif
}

void sub_0200E640(void) {
    /* Original at 0x0200E640 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "add r0, #0x1a\n    bx lr"
    );
    #endif
}

void LoadUserFrameGfx2(void) {
    /* Original at 0x0200E644 */
    /* Requires manual decompilation - 49 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    str r0, [sp, #0x10]\n    add r0, sp, #0x18\n    ldrb r7, [r0, #0x10]\n    add r6, r2, #0\n    add r5, r1, #0\n    add r0, r7, #0\n    add r4, r3, #0\n    bl sub_0200E63C\n    add r1, r0, #0\n    str r6, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    ldr r0, [sp, #0x2c]\n    ldr r2, [sp, #0x10]\n    str r0, [sp, #0xc]\n    mov r0, #0x26\n    add r3, r5, #0\n    bl GfGfxLoader_LoadCharData\n    cmp r5, #4\n    bhs _0200E694\n    add r0, r7, #0\n    bl sub_0200E640\n    add r1, r0, #0\n    mov r0, #0x20\n    str r0, [sp]\n    ldr r0, [sp, #0x2c]\n    mov r2, #0\n    str r0, [sp, #4]\n    mov r0, #0x26\n    lsl r3, r4, #5\n    bl GfGfxLoader_GXLoadPal\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    add r0, r7, #0\n    bl sub_0200E640\n    add r1, r0, #0\n    mov r0, #0x20\n    str r0, [sp]\n    ldr r0, [sp, #0x2c]\n    mov r2, #4\n    str r0, [sp, #4]\n    mov r0, #0x26\n    lsl r3, r4, #5\n    bl GfGfxLoader_GXLoadPal\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_0200E6B4(void) {
    /* Original at 0x0200E6B4 */
    /* Requires manual decompilation - 312 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x30\n    str r1, [sp, #0x10]\n    str r2, [sp, #0x14]\n    str r3, [sp, #0x18]\n    ldr r2, [sp, #0x4c]\n    add r7, r0, #0\n    str r2, [sp, #0x4c]\n    ldr r2, [sp, #0x18]\n    ldr r5, [sp, #0x50]\n    sub r6, r2, #1\n    ldr r2, [sp, #0x14]\n    sub r2, r2, #2\n    str r2, [sp, #0x28]\n    lsl r2, r6, #0x18\n    lsr r2, r2, #0x18\n    str r2, [sp]\n    mov r2, #1\n    str r2, [sp, #4]\n    str r2, [sp, #8]\n    ldr r3, [sp, #0x28]\n    str r5, [sp, #0xc]\n    add r2, sp, #0x38\n    lsl r3, r3, #0x18\n    ldrh r2, [r2, #0x1c]\n    lsr r3, r3, #0x18\n    bl FillBgTilemapRect\n    ldr r0, [sp, #0x14]\n    sub r0, r0, #1\n    str r0, [sp, #0x24]\n    add r0, sp, #0x38\n    ldrh r4, [r0, #0x1c]\n    lsl r0, r6, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    ldr r3, [sp, #0x24]\n    str r5, [sp, #0xc]\n    add r2, r4, #1\n    lsl r2, r2, #0x10\n    lsl r3, r3, #0x18\n    ldr r1, [sp, #0x10]\n    add r0, r7, #0\n    lsr r2, r2, #0x10\n    lsr r3, r3, #0x18\n    bl FillBgTilemapRect\n    lsl r0, r6, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    add r0, sp, #0x38\n    ldrb r0, [r0, #0x10]\n    add r2, r4, #2\n    lsl r2, r2, #0x10\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    str r5, [sp, #0xc]\n    ldr r1, [sp, #0x10]\n    ldr r3, [sp, #0x14]\n    add r0, r7, #0\n    lsr r2, r2, #0x10\n    bl FillBgTilemapRect\n    add r0, sp, #0x38\n    ldrb r1, [r0, #0x10]\n    ldr r0, [sp, #0x14]\n    add r2, r4, #3\n    add r0, r0, r1\n    str r0, [sp, #0x2c]\n    lsl r0, r6, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    ldr r3, [sp, #0x2c]\n    str r5, [sp, #0xc]\n    lsl r2, r2, #0x10\n    lsl r3, r3, #0x18\n    ldr r1, [sp, #0x10]\n    add r0, r7, #0\n    lsr r2, r2, #0x10\n    lsr r3, r3, #0x18\n    bl FillBgTilemapRect\n    ldr r0, [sp, #0x2c]\n    add r2, r4, #4\n    add r0, r0, #1\n    str r0, [sp, #0x20]\n    lsl r0, r6, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    ldr r3, [sp, #0x20]\n    str r5, [sp, #0xc]\n    lsl r2, r2, #0x10\n    lsl r3, r3, #0x18\n    ldr r1, [sp, #0x10]\n    add r0, r7, #0\n    lsr r2, r2, #0x10\n    lsr r3, r3, #0x18\n    bl FillBgTilemapRect\n    ldr r0, [sp, #0x2c]\n    add r2, r4, #5\n    add r0, r0, #2\n    str r0, [sp, #0x1c]\n    lsl r0, r6, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    ldr r3, [sp, #0x1c]\n    str r5, [sp, #0xc]\n    lsl r2, r2, #0x10\n    lsl r3, r3, #0x18\n    ldr r1, [sp, #0x10]\n    add r0, r7, #0\n    lsr r2, r2, #0x10\n    lsr r3, r3, #0x18\n    bl FillBgTilemapRect\n    ldr r0, [sp, #0x18]\n    ldr r3, [sp, #0x28]\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x4c]\n    add r2, r4, #6\n    str r0, [sp, #8]\n    str r5, [sp, #0xc]\n    lsl r2, r2, #0x10\n    lsl r3, r3, #0x18\n    ldr r1, [sp, #0x10]\n    add r0, r7, #0\n    lsr r2, r2, #0x10\n    lsr r3, r3, #0x18\n    bl FillBgTilemapRect\n    ldr r0, [sp, #0x18]\n    ldr r3, [sp, #0x24]\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x4c]\n    add r2, r4, #7\n    str r0, [sp, #8]\n    str r5, [sp, #0xc]\n    lsl r2, r2, #0x10\n    lsl r3, r3, #0x18\n    ldr r1, [sp, #0x10]\n    add r0, r7, #0\n    lsr r2, r2, #0x10\n    lsr r3, r3, #0x18\n    bl FillBgTilemapRect\n    ldr r0, [sp, #0x18]\n    add r2, r4, #0\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x4c]\n    ldr r3, [sp, #0x2c]\n    str r0, [sp, #8]\n    str r5, [sp, #0xc]\n    add r2, #9\n    lsl r2, r2, #0x10\n    lsl r3, r3, #0x18\n    ldr r1, [sp, #0x10]\n    add r0, r7, #0\n    lsr r2, r2, #0x10\n    lsr r3, r3, #0x18\n    bl FillBgTilemapRect\n    ldr r0, [sp, #0x18]\n    add r2, r4, #0\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x4c]\n    ldr r3, [sp, #0x20]\n    str r0, [sp, #8]\n    str r5, [sp, #0xc]\n    add r2, #0xa\n    lsl r2, r2, #0x10\n    lsl r3, r3, #0x18\n    ldr r1, [sp, #0x10]\n    add r0, r7, #0\n    lsr r2, r2, #0x10\n    lsr r3, r3, #0x18\n    bl FillBgTilemapRect\n    ldr r0, [sp, #0x18]\n    add r2, r4, #0\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x4c]\n    ldr r3, [sp, #0x1c]\n    str r0, [sp, #8]\n    str r5, [sp, #0xc]\n    add r2, #0xb\n    lsl r2, r2, #0x10\n    lsl r3, r3, #0x18\n    ldr r1, [sp, #0x10]\n    add r0, r7, #0\n    lsr r2, r2, #0x10\n    lsr r3, r3, #0x18\n    bl FillBgTilemapRect\n    add r2, r4, #0\n    ldr r3, [sp, #0x28]\n    add r2, #0xc\n    lsl r2, r2, #0x10\n    lsl r3, r3, #0x18\n    ldr r1, [sp, #0x18]\n    ldr r0, [sp, #0x4c]\n    lsr r2, r2, #0x10\n    add r6, r1, r0\n    lsl r0, r6, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    str r5, [sp, #0xc]\n    ldr r1, [sp, #0x10]\n    add r0, r7, #0\n    lsr r3, r3, #0x18\n    bl FillBgTilemapRect\n    lsl r0, r6, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    add r2, r4, #0\n    ldr r3, [sp, #0x24]\n    str r5, [sp, #0xc]\n    add r2, #0xd\n    lsl r2, r2, #0x10\n    lsl r3, r3, #0x18\n    ldr r1, [sp, #0x10]\n    add r0, r7, #0\n    lsr r2, r2, #0x10\n    lsr r3, r3, #0x18\n    bl FillBgTilemapRect\n    lsl r0, r6, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    add r0, sp, #0x38\n    ldrb r0, [r0, #0x10]\n    add r2, r4, #0\n    add r2, #0xe\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    str r5, [sp, #0xc]\n    lsl r2, r2, #0x10\n    ldr r1, [sp, #0x10]\n    ldr r3, [sp, #0x14]\n    add r0, r7, #0\n    lsr r2, r2, #0x10\n    bl FillBgTilemapRect\n    lsl r0, r6, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    add r2, r4, #0\n    ldr r3, [sp, #0x2c]\n    str r5, [sp, #0xc]\n    add r2, #0xf\n    lsl r2, r2, #0x10\n    lsl r3, r3, #0x18\n    ldr r1, [sp, #0x10]\n    add r0, r7, #0\n    lsr r2, r2, #0x10\n    lsr r3, r3, #0x18\n    bl FillBgTilemapRect\n    lsl r0, r6, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    add r2, r4, #0\n    ldr r3, [sp, #0x20]\n    str r5, [sp, #0xc]\n    add r2, #0x10\n    lsl r2, r2, #0x10\n    lsl r3, r3, #0x18\n    ldr r1, [sp, #0x10]\n    add r0, r7, #0\n    lsr r2, r2, #0x10\n    lsr r3, r3, #0x18\n    bl FillBgTilemapRect\n    lsl r0, r6, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    ldr r3, [sp, #0x1c]\n    str r5, [sp, #0xc]\n    add r4, #0x11\n    lsl r2, r4, #0x10\n    lsl r3, r3, #0x18\n    ldr r1, [sp, #0x10]\n    add r0, r7, #0\n    lsr r2, r2, #0x10\n    lsr r3, r3, #0x18\n    bl FillBgTilemapRect\n    add sp, #0x30\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_0200E948(void) {
    /* Original at 0x0200E948 */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x1c\n    add r5, r0, #0\n    add r6, r1, #0\n    add r7, r2, #0\n    bl GetWindowBgId\n    str r0, [sp, #0x10]\n    add r0, r5, #0\n    bl GetWindowX\n    str r0, [sp, #0x14]\n    add r0, r5, #0\n    bl GetWindowY\n    str r0, [sp, #0x18]\n    add r0, r5, #0\n    bl GetWindowWidth\n    add r4, r0, #0\n    add r0, r5, #0\n    bl GetWindowHeight\n    str r4, [sp]\n    str r0, [sp, #4]\n    lsl r0, r7, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #8]\n    lsl r0, r6, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp, #0xc]\n    ldr r0, [r5]\n    ldr r1, [sp, #0x10]\n    ldr r2, [sp, #0x14]\n    ldr r3, [sp, #0x18]\n    bl sub_0200E6B4\n    add sp, #0x1c\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void DrawFrameAndWindow2(void) {
    /* Original at 0x0200E998 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r2, #0\n    add r4, r1, #0\n    add r1, r6, #0\n    add r2, r3, #0\n    add r5, r0, #0\n    bl sub_0200E948\n    cmp r4, #0\n    bne _0200E9B2\n    add r0, r5, #0\n    bl CopyWindowToVram\n    add r0, r6, #0\n    bl TextPrinter_SetDownArrowBaseTile\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ClearFrameAndWindow2(void) {
    /* Original at 0x0200E9BC */
    /* Requires manual decompilation - 44 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    add r5, r0, #0\n    add r4, r1, #0\n    bl GetWindowBgId\n    str r0, [sp, #0x10]\n    add r0, r5, #0\n    bl GetWindowX\n    add r6, r0, #0\n    add r0, r5, #0\n    bl GetWindowY\n    add r7, r0, #0\n    add r0, r5, #0\n    bl GetWindowWidth\n    str r0, [sp, #0x14]\n    add r0, r5, #0\n    bl GetWindowHeight\n    sub r1, r7, #1\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    str r1, [sp]\n    ldr r1, [sp, #0x14]\n    add r0, r0, #2\n    add r1, r1, #5\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    lsl r0, r0, #0x18\n    str r1, [sp, #4]\n    lsr r0, r0, #0x18\n    sub r3, r6, #2\n    lsl r3, r3, #0x18\n    str r0, [sp, #8]\n    mov r2, #0\n    str r2, [sp, #0xc]\n    ldr r0, [r5]\n    ldr r1, [sp, #0x10]\n    lsr r3, r3, #0x18\n    bl FillBgTilemapRect\n    cmp r4, #0\n    bne _0200EA1E\n    add r0, r5, #0\n    bl ClearWindowTilemapAndCopyToVram\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_0200EA24(void) {
    /* Original at 0x0200EA24 */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0x24\n    add r5, r1, #0\n    str r0, [sp, #0x1c]\n    add r1, sp, #0x14\n    strh r3, [r1, #0xc]\n    add r4, r2, #0\n    add r0, sp, #0x20\n    ldrh r2, [r0, #0x10]\n    add r3, r4, #0\n    strh r2, [r1, #0xe]\n    ldr r2, [sp, #0x34]\n    str r2, [sp, #0x14]\n    ldrh r2, [r0, #0x18]\n    strh r2, [r1, #4]\n    ldrh r2, [r0, #0x1c]\n    strh r2, [r1, #6]\n    ldrh r1, [r0, #0x20]\n    add r2, r5, #0\n    str r1, [sp]\n    ldrh r1, [r0, #0x24]\n    str r1, [sp, #4]\n    ldrh r1, [r0, #0x28]\n    str r1, [sp, #8]\n    ldrh r0, [r0, #0x2c]\n    add r1, sp, #0x14\n    str r0, [sp, #0xc]\n    mov r0, #0\n    str r0, [sp, #0x10]\n    add r0, sp, #0x1c\n    bl BlitBitmapRect4Bit\n    add sp, #0x24\n    pop {r4, r5, pc}"
    );
    #endif
}

void sub_0200EA68(void) {
    /* Original at 0x0200EA68 */
    /* Requires manual decompilation - 115 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x48\n    str r2, [sp, #0x24]\n    str r3, [sp, #0x28]\n    str r0, [sp, #0x20]\n    ldr r0, [r0]\n    add r7, r1, #0\n    bl BgConfig_GetHeapId\n    add r6, r0, #0\n    ldr r0, [sp, #0x20]\n    bl GetWindowBgId\n    str r0, [sp, #0x2c]\n    ldr r0, [sp, #0x28]\n    lsl r0, r0, #7\n    str r0, [sp, #0x30]\n    ldr r1, [sp, #0x30]\n    add r0, r6, #0\n    bl Heap_Alloc\n    add r5, r0, #0\n    ldr r0, [sp, #0x2c]\n    bl BgGetCharPtr\n    add r4, r0, #0\n    str r6, [sp]\n    mov r0, #0x26\n    add r1, r7, #0\n    mov r2, #0\n    add r3, sp, #0x44\n    bl GfGfxLoader_GetCharData\n    str r0, [sp, #0x34]\n    ldr r0, [sp, #0x44]\n    mov r7, #0\n    ldr r0, [r0, #0x14]\n    str r0, [sp, #0x38]\n    ldr r0, [sp, #0x28]\n    cmp r0, #0\n    ble _0200EB12\n    ldr r0, [sp, #0x24]\n    add r0, #0xa\n    lsl r0, r0, #5\n    str r0, [sp, #0x3c]\n    ldr r0, [sp, #0x24]\n    add r0, #0xb\n    lsl r0, r0, #5\n    str r0, [sp, #0x40]\n    ldr r1, [sp, #0x3c]\n    lsl r6, r7, #7\n    add r0, r5, r6\n    add r1, r4, r1\n    mov r2, #0x20\n    bl memcpy\n    add r0, r6, #0\n    ldr r1, [sp, #0x40]\n    add r0, #0x20\n    add r0, r5, r0\n    add r1, r4, r1\n    mov r2, #0x20\n    bl memcpy\n    add r0, r6, #0\n    ldr r1, [sp, #0x3c]\n    add r0, #0x40\n    add r0, r5, r0\n    add r1, r4, r1\n    mov r2, #0x20\n    bl memcpy\n    ldr r1, [sp, #0x40]\n    add r6, #0x60\n    add r0, r5, r6\n    add r1, r4, r1\n    mov r2, #0x20\n    bl memcpy\n    add r0, r7, #1\n    lsl r0, r0, #0x18\n    lsr r7, r0, #0x18\n    ldr r0, [sp, #0x28]\n    cmp r7, r0\n    blt _0200EACA\n    add r1, sp, #0x50\n    ldrb r2, [r1, #0x14]\n    mov r3, #0x10\n    ldr r0, [sp, #0x28]\n    sub r4, r3, r2\n    mul r0, r4\n    ldrb r1, [r1, #0x10]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    sub r3, r3, r1\n    lsl r3, r3, #0x18\n    str r0, [sp]\n    lsr r3, r3, #0x18\n    str r5, [sp, #4]\n    str r3, [sp, #8]\n    str r0, [sp, #0xc]\n    mov r4, #0\n    str r4, [sp, #0x10]\n    str r4, [sp, #0x14]\n    str r3, [sp, #0x18]\n    str r0, [sp, #0x1c]\n    ldr r0, [sp, #0x38]\n    bl sub_0200EA24\n    ldr r0, [sp, #0x24]\n    ldr r3, [sp, #0x30]\n    add r0, #0x12\n    str r0, [sp, #0x24]\n    str r0, [sp]\n    ldr r0, [sp, #0x20]\n    ldr r1, [sp, #0x2c]\n    ldr r0, [r0]\n    add r2, r5, #0\n    bl BG_LoadCharTilesData\n    ldr r0, [sp, #0x34]\n    bl Heap_Free\n    add r0, r5, #0\n    bl Heap_Free\n    add sp, #0x48\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_0200EB68(void) {
    sub_0200EA68(0, 0x16, 3);
}

void sub_0200EB80(void) {
    /* Original at 0x0200EB80 */
    /* Requires manual decompilation - 62 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    str r0, [sp, #4]\n    str r1, [sp, #8]\n    add r0, sp, #0x18\n    ldrb r0, [r0, #0x10]\n    add r7, r2, #0\n    add r5, r3, #0\n    bl sub_0200E63C\n    add r1, r0, #0\n    ldr r0, [sp, #0x2c]\n    mov r2, #0\n    str r0, [sp]\n    mov r0, #0x26\n    add r3, sp, #0x10\n    bl GfGfxLoader_GetCharData\n    str r0, [sp, #0xc]\n    mov r1, #9\n    ldr r0, [sp, #0x2c]\n    lsl r1, r1, #6\n    bl Heap_Alloc\n    ldr r1, [sp, #0x10]\n    mov r2, #9\n    ldr r1, [r1, #0x14]\n    lsl r2, r2, #6\n    add r4, r0, #0\n    bl memcpy\n    mov r0, #9\n    mov r3, #0\n    lsl r0, r0, #6\n    mov r1, #0xf\n    ldrb r2, [r4, r3]\n    lsl r6, r2, #0x14\n    and r2, r1\n    lsl r2, r2, #0x18\n    lsr r6, r6, #0x18\n    lsr r2, r2, #0x18\n    cmp r6, #0\n    bne _0200EBD8\n    add r6, r5, #0\n    cmp r2, #0\n    bne _0200EBDE\n    add r2, r5, #0\n    lsl r6, r6, #4\n    orr r2, r6\n    strb r2, [r4, r3]\n    add r3, r3, #1\n    cmp r3, r0\n    blo _0200EBC6\n    str r7, [sp]\n    mov r3, #9\n    ldr r0, [sp, #4]\n    ldr r1, [sp, #8]\n    add r2, r4, #0\n    lsl r3, r3, #6\n    bl BG_LoadCharTilesData\n    ldr r0, [sp, #0xc]\n    bl Heap_Free\n    add r0, r4, #0\n    bl Heap_Free\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_0200EC0C(void) {
    /* Original at 0x0200EC0C */
    /* Requires manual decompilation - 54 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x1c\n    str r0, [sp, #0x10]\n    add r5, r2, #0\n    mov r0, #0xf\n    add r6, r1, #0\n    add r7, r3, #0\n    str r5, [sp]\n    lsl r0, r0, #6\n    str r0, [sp, #4]\n    mov r1, #0\n    ldr r4, [sp, #0x38]\n    str r1, [sp, #8]\n    ldr r2, [sp, #0x10]\n    mov r0, #0x24\n    add r3, r6, #0\n    str r4, [sp, #0xc]\n    bl GfGfxLoader_LoadCharData\n    mov r0, #0x24\n    mov r1, #1\n    add r2, r4, #0\n    bl AllocAndReadWholeNarcMemberByIdPair\n    add r1, sp, #0x18\n    str r0, [sp, #0x14]\n    bl NNS_G2dGetUnpackedPaletteData\n    add r2, sp, #0x20\n    ldr r1, [sp, #0x18]\n    ldrb r2, [r2, #0x10]\n    lsl r3, r7, #0x15\n    ldr r1, [r1, #0xc]\n    lsl r2, r2, #5\n    add r1, r1, r2\n    add r0, r6, #0\n    mov r2, #0x20\n    lsr r3, r3, #0x10\n    bl BG_LoadPlttData\n    ldr r1, [sp, #0x14]\n    add r0, r4, #0\n    bl Heap_FreeExplicit\n    add r0, sp, #0x20\n    ldrb r3, [r0, #0x10]\n    cmp r3, #1\n    bhi _0200EC80\n    ldrh r0, [r0, #0x14]\n    add r5, #0x1e\n    lsl r2, r5, #0x10\n    str r0, [sp]\n    ldr r0, [sp, #0x10]\n    add r1, r6, #0\n    lsr r2, r2, #0x10\n    str r4, [sp, #4]\n    bl sub_0200EC84\n    add sp, #0x1c\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_0200EC84(void) {
    /* Original at 0x0200EC84 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    add r4, r1, #0\n    add r5, r0, #0\n    ldr r1, [sp, #0x20]\n    cmp r3, #0\n    bne _0200EC98\n    add r1, #0x21\n    lsl r0, r1, #0x10\n    b _0200EC9C\n    add r0, r1, #2\n    lsl r0, r0, #0x10\n    lsr r1, r0, #0x10\n    mov r0, #3\n    str r2, [sp]\n    lsl r0, r0, #8\n    str r0, [sp, #4]\n    mov r0, #0\n    str r0, [sp, #8]\n    ldr r0, [sp, #0x24]\n    add r2, r5, #0\n    str r0, [sp, #0xc]\n    mov r0, #0x24\n    add r3, r4, #0\n    bl GfGfxLoader_LoadCharData\n    add sp, #0x10\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_0200ECBC(void) {
    /* Original at 0x0200ECBC */
    /* Requires manual decompilation - 337 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x40\n    str r1, [sp, #0x14]\n    str r2, [sp, #0x18]\n    str r3, [sp, #0x1c]\n    ldr r2, [sp, #0x1c]\n    ldr r6, [sp, #0x5c]\n    sub r7, r2, #1\n    ldr r2, [sp, #0x18]\n    ldr r5, [sp, #0x60]\n    str r2, [sp, #0x34]\n    sub r2, #9\n    str r2, [sp, #0x34]\n    lsl r2, r7, #0x18\n    lsr r2, r2, #0x18\n    str r2, [sp]\n    mov r2, #1\n    str r2, [sp, #4]\n    str r2, [sp, #8]\n    ldr r3, [sp, #0x34]\n    str r5, [sp, #0xc]\n    add r2, sp, #0x48\n    lsl r3, r3, #0x18\n    ldrh r2, [r2, #0x1c]\n    lsr r3, r3, #0x18\n    str r0, [sp, #0x10]\n    bl FillBgTilemapRect\n    ldr r0, [sp, #0x18]\n    str r0, [sp, #0x30]\n    sub r0, #8\n    str r0, [sp, #0x30]\n    add r0, sp, #0x48\n    ldrh r4, [r0, #0x1c]\n    lsl r0, r7, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    ldr r3, [sp, #0x30]\n    str r5, [sp, #0xc]\n    add r2, r4, #1\n    lsl r2, r2, #0x10\n    lsl r3, r3, #0x18\n    ldr r0, [sp, #0x10]\n    ldr r1, [sp, #0x14]\n    lsr r2, r2, #0x10\n    lsr r3, r3, #0x18\n    bl FillBgTilemapRect\n    add r0, sp, #0x48\n    ldrb r0, [r0, #0x10]\n    add r2, r4, #2\n    lsl r2, r2, #0x10\n    str r0, [sp, #0x3c]\n    add r0, r0, #7\n    str r0, [sp, #0x24]\n    ldr r0, [sp, #0x18]\n    lsr r2, r2, #0x10\n    sub r0, r0, #7\n    str r0, [sp, #0x20]\n    lsl r0, r7, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    ldr r0, [sp, #0x24]\n    ldr r3, [sp, #0x20]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    str r5, [sp, #0xc]\n    lsl r3, r3, #0x18\n    ldr r0, [sp, #0x10]\n    ldr r1, [sp, #0x14]\n    lsr r3, r3, #0x18\n    bl FillBgTilemapRect\n    add r2, r4, #3\n    lsl r2, r2, #0x10\n    ldr r1, [sp, #0x18]\n    ldr r0, [sp, #0x3c]\n    lsr r2, r2, #0x10\n    add r0, r1, r0\n    str r0, [sp, #0x38]\n    lsl r0, r7, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    ldr r3, [sp, #0x38]\n    str r5, [sp, #0xc]\n    lsl r3, r3, #0x18\n    ldr r0, [sp, #0x10]\n    ldr r1, [sp, #0x14]\n    lsr r3, r3, #0x18\n    bl FillBgTilemapRect\n    ldr r0, [sp, #0x38]\n    add r2, r4, #4\n    add r0, r0, #1\n    str r0, [sp, #0x2c]\n    lsl r0, r7, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    ldr r3, [sp, #0x2c]\n    str r5, [sp, #0xc]\n    lsl r2, r2, #0x10\n    lsl r3, r3, #0x18\n    ldr r0, [sp, #0x10]\n    ldr r1, [sp, #0x14]\n    lsr r2, r2, #0x10\n    lsr r3, r3, #0x18\n    bl FillBgTilemapRect\n    ldr r0, [sp, #0x38]\n    add r0, r0, #2\n    str r0, [sp, #0x28]\n    lsl r0, r7, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    ldr r3, [sp, #0x28]\n    str r5, [sp, #0xc]\n    add r2, r4, #5\n    lsl r2, r2, #0x10\n    lsl r3, r3, #0x18\n    ldr r0, [sp, #0x10]\n    ldr r1, [sp, #0x14]\n    lsr r2, r2, #0x10\n    lsr r3, r3, #0x18\n    bl FillBgTilemapRect\n    ldr r0, [sp, #0x1c]\n    ldr r3, [sp, #0x34]\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    str r6, [sp, #8]\n    str r5, [sp, #0xc]\n    add r2, r4, #6\n    lsl r2, r2, #0x10\n    lsl r3, r3, #0x18\n    ldr r0, [sp, #0x10]\n    ldr r1, [sp, #0x14]\n    lsr r2, r2, #0x10\n    lsr r3, r3, #0x18\n    bl FillBgTilemapRect\n    ldr r0, [sp, #0x1c]\n    ldr r3, [sp, #0x30]\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    str r6, [sp, #8]\n    str r5, [sp, #0xc]\n    add r2, r4, #7\n    lsl r2, r2, #0x10\n    lsl r3, r3, #0x18\n    ldr r0, [sp, #0x10]\n    ldr r1, [sp, #0x14]\n    lsr r2, r2, #0x10\n    lsr r3, r3, #0x18\n    bl FillBgTilemapRect\n    ldr r0, [sp, #0x1c]\n    add r2, r4, #0\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    str r6, [sp, #8]\n    str r5, [sp, #0xc]\n    ldr r3, [sp, #0x18]\n    add r2, #8\n    sub r3, r3, #1\n    lsl r2, r2, #0x10\n    lsl r3, r3, #0x18\n    ldr r0, [sp, #0x10]\n    ldr r1, [sp, #0x14]\n    lsr r2, r2, #0x10\n    lsr r3, r3, #0x18\n    bl FillBgTilemapRect\n    ldr r0, [sp, #0x1c]\n    add r2, r4, #0\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    str r6, [sp, #8]\n    ldr r3, [sp, #0x38]\n    str r5, [sp, #0xc]\n    add r2, #9\n    lsl r2, r2, #0x10\n    lsl r3, r3, #0x18\n    ldr r0, [sp, #0x10]\n    ldr r1, [sp, #0x14]\n    lsr r2, r2, #0x10\n    lsr r3, r3, #0x18\n    bl FillBgTilemapRect\n    ldr r0, [sp, #0x1c]\n    add r2, r4, #0\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    str r6, [sp, #8]\n    ldr r3, [sp, #0x2c]\n    str r5, [sp, #0xc]\n    add r2, #0xa\n    lsl r2, r2, #0x10\n    lsl r3, r3, #0x18\n    ldr r0, [sp, #0x10]\n    ldr r1, [sp, #0x14]\n    lsr r2, r2, #0x10\n    lsr r3, r3, #0x18\n    bl FillBgTilemapRect\n    ldr r0, [sp, #0x1c]\n    add r2, r4, #0\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    str r6, [sp, #8]\n    ldr r3, [sp, #0x28]\n    str r5, [sp, #0xc]\n    add r2, #0xb\n    lsl r2, r2, #0x10\n    lsl r3, r3, #0x18\n    ldr r0, [sp, #0x10]\n    ldr r1, [sp, #0x14]\n    lsr r2, r2, #0x10\n    lsr r3, r3, #0x18\n    bl FillBgTilemapRect\n    ldr r0, [sp, #0x1c]\n    add r2, r4, #0\n    add r6, r0, r6\n    lsl r0, r6, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    ldr r3, [sp, #0x34]\n    str r5, [sp, #0xc]\n    add r2, #0xc\n    lsl r2, r2, #0x10\n    lsl r3, r3, #0x18\n    ldr r0, [sp, #0x10]\n    ldr r1, [sp, #0x14]\n    lsr r2, r2, #0x10\n    lsr r3, r3, #0x18\n    bl FillBgTilemapRect\n    lsl r0, r6, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    add r2, r4, #0\n    ldr r3, [sp, #0x30]\n    str r5, [sp, #0xc]\n    add r2, #0xd\n    lsl r2, r2, #0x10\n    lsl r3, r3, #0x18\n    ldr r0, [sp, #0x10]\n    ldr r1, [sp, #0x14]\n    lsr r2, r2, #0x10\n    lsr r3, r3, #0x18\n    bl FillBgTilemapRect\n    lsl r0, r6, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    ldr r0, [sp, #0x24]\n    add r2, r4, #0\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    ldr r3, [sp, #0x20]\n    str r5, [sp, #0xc]\n    add r2, #0xe\n    lsl r2, r2, #0x10\n    lsl r3, r3, #0x18\n    ldr r0, [sp, #0x10]\n    ldr r1, [sp, #0x14]\n    lsr r2, r2, #0x10\n    lsr r3, r3, #0x18\n    bl FillBgTilemapRect\n    lsl r0, r6, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    add r2, r4, #0\n    ldr r3, [sp, #0x38]\n    str r5, [sp, #0xc]\n    add r2, #0xf\n    lsl r2, r2, #0x10\n    lsl r3, r3, #0x18\n    ldr r0, [sp, #0x10]\n    ldr r1, [sp, #0x14]\n    lsr r2, r2, #0x10\n    lsr r3, r3, #0x18\n    bl FillBgTilemapRect\n    lsl r0, r6, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    add r2, r4, #0\n    ldr r3, [sp, #0x2c]\n    str r5, [sp, #0xc]\n    add r2, #0x10\n    lsl r2, r2, #0x10\n    lsl r3, r3, #0x18\n    ldr r0, [sp, #0x10]\n    ldr r1, [sp, #0x14]\n    lsr r2, r2, #0x10\n    lsr r3, r3, #0x18\n    bl FillBgTilemapRect\n    lsl r0, r6, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    ldr r3, [sp, #0x28]\n    str r5, [sp, #0xc]\n    add r4, #0x11\n    lsl r2, r4, #0x10\n    lsl r3, r3, #0x18\n    ldr r0, [sp, #0x10]\n    ldr r1, [sp, #0x14]\n    lsr r2, r2, #0x10\n    lsr r3, r3, #0x18\n    bl FillBgTilemapRect\n    add sp, #0x40\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_0200EF84(void) {
    /* Original at 0x0200EF84 */
    /* Requires manual decompilation - 60 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x28\n    str r1, [sp, #0x10]\n    add r7, r0, #0\n    str r2, [sp, #0x14]\n    bl GetWindowBgId\n    str r0, [sp, #0x20]\n    add r0, r7, #0\n    bl GetWindowX\n    sub r0, r0, #7\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp, #0x18]\n    add r0, r7, #0\n    bl GetWindowY\n    str r0, [sp, #0x1c]\n    mov r0, #0\n    str r0, [sp, #0x24]\n    ldr r2, [sp, #0x24]\n    ldr r1, [sp, #0x1c]\n    ldr r0, [sp, #0x24]\n    add r3, r2, #0\n    add r0, r1, r0\n    mov r1, #6\n    mul r3, r1\n    ldr r1, [sp, #0x10]\n    lsl r0, r0, #0x18\n    mov r4, #0\n    add r5, r1, r3\n    lsr r6, r0, #0x18\n    str r6, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    ldr r0, [sp, #0x14]\n    ldr r3, [sp, #0x18]\n    str r0, [sp, #0xc]\n    add r2, r4, r5\n    add r3, r3, r4\n    lsl r2, r2, #0x10\n    lsl r3, r3, #0x18\n    ldr r0, [r7]\n    ldr r1, [sp, #0x20]\n    lsr r2, r2, #0x10\n    lsr r3, r3, #0x18\n    bl FillBgTilemapRect\n    add r0, r4, #1\n    lsl r0, r0, #0x10\n    lsr r4, r0, #0x10\n    cmp r4, #6\n    blo _0200EFC6\n    ldr r0, [sp, #0x24]\n    add r0, r0, #1\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp, #0x24]\n    cmp r0, #4\n    blo _0200EFAE\n    add sp, #0x28\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void DrawFrameAndWindow3(void) {
    /* Original at 0x0200F004 */
    /* Requires manual decompilation - 69 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x28\n    add r4, r0, #0\n    str r1, [sp, #0x10]\n    add r6, r2, #0\n    add r7, r3, #0\n    bl GetWindowBgId\n    str r0, [sp, #0x14]\n    add r0, sp, #0x30\n    ldrb r0, [r0, #0x10]\n    cmp r0, #1\n    bhi _0200F062\n    add r0, r4, #0\n    bl GetWindowX\n    str r0, [sp, #0x18]\n    add r0, r4, #0\n    bl GetWindowY\n    str r0, [sp, #0x1c]\n    add r0, r4, #0\n    bl GetWindowWidth\n    add r5, r0, #0\n    add r0, r4, #0\n    bl GetWindowHeight\n    str r5, [sp]\n    str r0, [sp, #4]\n    str r7, [sp, #8]\n    str r6, [sp, #0xc]\n    ldr r0, [r4]\n    ldr r1, [sp, #0x14]\n    ldr r2, [sp, #0x18]\n    ldr r3, [sp, #0x1c]\n    bl sub_0200ECBC\n    add r1, r6, #0\n    add r1, #0x1e\n    lsl r1, r1, #0x10\n    add r0, r4, #0\n    lsr r1, r1, #0x10\n    add r2, r7, #0\n    bl sub_0200EF84\n    b _0200F094\n    add r0, r4, #0\n    bl GetWindowX\n    str r0, [sp, #0x20]\n    add r0, r4, #0\n    bl GetWindowY\n    str r0, [sp, #0x24]\n    add r0, r4, #0\n    bl GetWindowWidth\n    add r5, r0, #0\n    add r0, r4, #0\n    bl GetWindowHeight\n    str r5, [sp]\n    str r0, [sp, #4]\n    str r7, [sp, #8]\n    str r6, [sp, #0xc]\n    ldr r0, [r4]\n    ldr r1, [sp, #0x14]\n    ldr r2, [sp, #0x20]\n    ldr r3, [sp, #0x24]\n    bl sub_0200E6B4\n    ldr r0, [sp, #0x10]\n    cmp r0, #0\n    bne _0200F0A0\n    add r0, r4, #0\n    bl CopyWindowToVram\n    add r0, r6, #0\n    bl TextPrinter_SetDownArrowBaseTile\n    add sp, #0x28\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void WaitingIcon_New(void) {
    /* Original at 0x0200F0AC */
    /* Requires manual decompilation - 127 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x34\n    str r0, [sp, #0x20]\n    ldr r0, [r0]\n    str r1, [sp, #0x24]\n    bl BgConfig_GetHeapId\n    str r0, [sp, #0x28]\n    ldr r0, [sp, #0x20]\n    bl GetWindowBgId\n    bl BgGetCharPtr\n    add r5, r0, #0\n    ldr r0, [sp, #0x28]\n    ldr r1, _0200F1C4 ; =0x0000048C\n    bl Heap_Alloc\n    ldr r1, [sp, #0x24]\n    add r4, r0, #0\n    ldr r0, _0200F1C8 ; =0x00000404\n    add r1, #0x12\n    lsl r1, r1, #5\n    add r0, r4, r0\n    add r1, r5, r1\n    mov r2, #0x80\n    bl memcpy\n    ldr r0, [sp, #0x28]\n    mov r1, #0x80\n    bl Heap_Alloc\n    ldr r1, [sp, #0x24]\n    mov r2, #0x20\n    add r1, #0xa\n    lsl r1, r1, #5\n    str r1, [sp, #0x2c]\n    add r1, r5, r1\n    add r6, r0, #0\n    bl memcpy\n    ldr r0, [sp, #0x24]\n    mov r2, #0x20\n    add r0, #0xb\n    lsl r7, r0, #5\n    add r0, r6, #0\n    add r0, #0x20\n    add r1, r5, r7\n    bl memcpy\n    ldr r1, [sp, #0x2c]\n    add r0, r6, #0\n    add r0, #0x40\n    add r1, r5, r1\n    mov r2, #0x20\n    bl memcpy\n    add r0, r6, #0\n    add r0, #0x60\n    add r1, r5, r7\n    mov r2, #0x20\n    bl memcpy\n    mov r5, #0\n    add r7, r4, #4\n    lsl r0, r5, #7\n    add r0, r7, r0\n    add r1, r6, #0\n    mov r2, #0x80\n    bl memcpy\n    add r0, r5, #1\n    lsl r0, r0, #0x18\n    lsr r5, r0, #0x18\n    cmp r5, #8\n    blo _0200F12E\n    add r0, r6, #0\n    bl Heap_Free\n    ldr r0, [sp, #0x28]\n    mov r1, #0x17\n    str r0, [sp]\n    mov r0, #0x26\n    mov r2, #0\n    add r3, sp, #0x30\n    bl GfGfxLoader_GetCharData\n    mov r2, #0x80\n    add r5, r0, #0\n    str r2, [sp]\n    add r0, r4, #4\n    str r0, [sp, #4]\n    mov r3, #0x10\n    str r3, [sp, #8]\n    str r2, [sp, #0xc]\n    mov r1, #0\n    str r1, [sp, #0x10]\n    str r1, [sp, #0x14]\n    str r3, [sp, #0x18]\n    str r2, [sp, #0x1c]\n    ldr r0, [sp, #0x30]\n    add r2, r1, #0\n    ldr r0, [r0, #0x14]\n    bl sub_0200EA24\n    add r0, r5, #0\n    bl Heap_Free\n    ldr r0, [sp, #0x20]\n    ldr r1, _0200F1CC ; =0x00000484\n    str r0, [r4]\n    ldr r0, [sp, #0x24]\n    mov r2, #0\n    strh r0, [r4, r1]\n    add r0, r1, #2\n    strb r2, [r4, r0]\n    add r0, r1, #3\n    ldrb r3, [r4, r0]\n    mov r0, #0x7f\n    bic r3, r0\n    add r0, r1, #3\n    strb r3, [r4, r0]\n    add r0, r1, #4\n    ldrb r3, [r4, r0]\n    mov r0, #3\n    bic r3, r0\n    add r0, r1, #4\n    strb r3, [r4, r0]\n    ldr r0, _0200F1D0 ; =sub_0200F3D0\n    add r1, r4, #0\n    bl SysTask_CreateOnVBlankQueue\n    add r0, r4, #0\n    mov r1, #1\n    bl sub_0200F1D4\n    add r0, r4, #0\n    add sp, #0x34\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _0200F1C4: .word 0x0000048C\n    _0200F1C8: .word 0x00000404\n    _0200F1CC: .word 0x00000484\n    _0200F1D0: .word sub_0200F3D0"
    );
    #endif
}

void sub_0200F1D4(void) {
    /* Original at 0x0200F1D4 */
    /* Requires manual decompilation - 237 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x24\n    add r5, r0, #0\n    ldr r0, [r5]\n    add r6, r1, #0\n    bl GetWindowBgId\n    add r4, r0, #0\n    ldr r0, [r5]\n    bl GetWindowX\n    str r0, [sp, #0x18]\n    ldr r0, [r5]\n    bl GetWindowY\n    str r0, [sp, #0x1c]\n    ldr r0, [r5]\n    bl GetWindowWidth\n    str r0, [sp, #0x20]\n    cmp r6, #2\n    bne _0200F2DE\n    ldr r2, _0200F3CC ; =0x00000484\n    add r1, r4, #0\n    ldrh r0, [r5, r2]\n    sub r2, #0x80\n    add r2, r5, r2\n    add r0, #0x12\n    str r0, [sp]\n    ldr r0, [r5]\n    mov r3, #0x80\n    ldr r0, [r0]\n    bl BG_LoadCharTilesData\n    ldr r0, [sp, #0x1c]\n    ldr r1, [sp, #0x18]\n    add r7, r0, #2\n    ldr r0, [sp, #0x20]\n    ldr r2, _0200F3CC ; =0x00000484\n    add r6, r1, r0\n    add r0, r6, #1\n    str r0, [sp, #0x14]\n    lsl r0, r7, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0x10\n    str r0, [sp, #0xc]\n    ldrh r2, [r5, r2]\n    ldr r0, [r5]\n    ldr r3, [sp, #0x14]\n    add r2, #0xa\n    lsl r2, r2, #0x10\n    lsl r3, r3, #0x18\n    ldr r0, [r0]\n    add r1, r4, #0\n    lsr r2, r2, #0x10\n    lsr r3, r3, #0x18\n    bl FillBgTilemapRect\n    lsl r0, r7, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0x10\n    str r0, [sp, #0xc]\n    ldr r2, _0200F3CC ; =0x00000484\n    ldr r0, [r5]\n    ldrh r2, [r5, r2]\n    add r6, r6, #2\n    lsl r3, r6, #0x18\n    add r2, #0xb\n    lsl r2, r2, #0x10\n    ldr r0, [r0]\n    add r1, r4, #0\n    lsr r2, r2, #0x10\n    lsr r3, r3, #0x18\n    bl FillBgTilemapRect\n    ldr r0, [sp, #0x1c]\n    ldr r3, [sp, #0x14]\n    add r7, r0, #3\n    lsl r0, r7, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0x10\n    str r0, [sp, #0xc]\n    ldr r2, _0200F3CC ; =0x00000484\n    ldr r0, [r5]\n    ldrh r2, [r5, r2]\n    lsl r3, r3, #0x18\n    ldr r0, [r0]\n    add r2, #0xa\n    lsl r2, r2, #0x10\n    add r1, r4, #0\n    lsr r2, r2, #0x10\n    lsr r3, r3, #0x18\n    bl FillBgTilemapRect\n    lsl r0, r7, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0x10\n    str r0, [sp, #0xc]\n    ldr r2, _0200F3CC ; =0x00000484\n    ldr r0, [r5]\n    ldrh r2, [r5, r2]\n    lsl r3, r6, #0x18\n    ldr r0, [r0]\n    add r2, #0xb\n    lsl r2, r2, #0x10\n    add r1, r4, #0\n    lsr r2, r2, #0x10\n    lsr r3, r3, #0x18\n    bl FillBgTilemapRect\n    ldr r0, [r5]\n    add r1, r4, #0\n    ldr r0, [r0]\n    bl BgCommitTilemapBufferToVram\n    add sp, #0x24\n    pop {r4, r5, r6, r7, pc}\n    ldr r3, _0200F3CC ; =0x00000484\n    add r2, r5, #4\n    ldrh r0, [r5, r3]\n    add r3, r3, #3\n    add r1, r4, #0\n    add r0, #0x12\n    str r0, [sp]\n    ldrb r3, [r5, r3]\n    ldr r0, [r5]\n    lsl r3, r3, #0x19\n    lsr r3, r3, #0x19\n    lsl r3, r3, #7\n    add r2, r2, r3\n    ldr r0, [r0]\n    mov r3, #0x80\n    bl BG_LoadCharTilesData\n    cmp r6, #0\n    beq _0200F3C6\n    ldr r0, [sp, #0x1c]\n    ldr r1, [sp, #0x18]\n    add r7, r0, #2\n    ldr r0, [sp, #0x20]\n    ldr r2, _0200F3CC ; =0x00000484\n    add r6, r1, r0\n    add r0, r6, #1\n    str r0, [sp, #0x10]\n    lsl r0, r7, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0x10\n    str r0, [sp, #0xc]\n    ldrh r2, [r5, r2]\n    ldr r0, [r5]\n    ldr r3, [sp, #0x10]\n    add r2, #0x12\n    lsl r2, r2, #0x10\n    lsl r3, r3, #0x18\n    ldr r0, [r0]\n    add r1, r4, #0\n    lsr r2, r2, #0x10\n    lsr r3, r3, #0x18\n    bl FillBgTilemapRect\n    lsl r0, r7, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0x10\n    str r0, [sp, #0xc]\n    ldr r2, _0200F3CC ; =0x00000484\n    ldr r0, [r5]\n    ldrh r2, [r5, r2]\n    add r6, r6, #2\n    lsl r3, r6, #0x18\n    add r2, #0x13\n    lsl r2, r2, #0x10\n    ldr r0, [r0]\n    add r1, r4, #0\n    lsr r2, r2, #0x10\n    lsr r3, r3, #0x18\n    bl FillBgTilemapRect\n    ldr r0, [sp, #0x1c]\n    ldr r3, [sp, #0x10]\n    add r7, r0, #3\n    lsl r0, r7, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0x10\n    str r0, [sp, #0xc]\n    ldr r2, _0200F3CC ; =0x00000484\n    ldr r0, [r5]\n    ldrh r2, [r5, r2]\n    lsl r3, r3, #0x18\n    ldr r0, [r0]\n    add r2, #0x14\n    lsl r2, r2, #0x10\n    add r1, r4, #0\n    lsr r2, r2, #0x10\n    lsr r3, r3, #0x18\n    bl FillBgTilemapRect\n    lsl r0, r7, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0x10\n    str r0, [sp, #0xc]\n    ldr r2, _0200F3CC ; =0x00000484\n    ldr r0, [r5]\n    ldrh r2, [r5, r2]\n    lsl r3, r6, #0x18\n    ldr r0, [r0]\n    add r2, #0x15\n    lsl r2, r2, #0x10\n    add r1, r4, #0\n    lsr r2, r2, #0x10\n    lsr r3, r3, #0x18\n    bl FillBgTilemapRect\n    ldr r0, [r5]\n    add r1, r4, #0\n    ldr r0, [r0]\n    bl BgCommitTilemapBufferToVram\n    add sp, #0x24\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _0200F3CC: .word 0x00000484"
    );
    #endif
}

void sub_0200F3D0(void) {
    /* Original at 0x0200F3D0 */
    /* Requires manual decompilation - 50 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    ldr r0, _0200F438 ; =0x00000488\n    ldrb r2, [r1, r0]\n    lsl r2, r2, #0x1e\n    lsr r2, r2, #0x1e\n    beq _0200F3F2\n    cmp r2, #1\n    bne _0200F3EA\n    add r0, r1, #0\n    mov r1, #2\n    bl sub_0200F1D4\n    add r0, r4, #0\n    bl SysTask_Destroy\n    pop {r3, r4, r5, pc}\n    sub r2, r0, #2\n    ldrb r2, [r1, r2]\n    add r3, r2, #1\n    sub r2, r0, #2\n    strb r3, [r1, r2]\n    ldrb r2, [r1, r2]\n    cmp r2, #0x10\n    bne _0200F434\n    mov r3, #0\n    sub r2, r0, #2\n    strb r3, [r1, r2]\n    sub r2, r0, #1\n    ldrb r2, [r1, r2]\n    mov r4, #0x7f\n    bic r2, r4\n    sub r4, r0, #1\n    ldrb r4, [r1, r4]\n    sub r0, r0, #1\n    lsl r4, r4, #0x19\n    lsr r4, r4, #0x19\n    add r5, r4, #1\n    mov r4, #7\n    and r4, r5\n    lsl r4, r4, #0x18\n    lsr r5, r4, #0x18\n    mov r4, #0x7f\n    and r4, r5\n    orr r2, r4\n    strb r2, [r1, r0]\n    add r0, r1, #0\n    add r1, r3, #0\n    bl sub_0200F1D4\n    pop {r3, r4, r5, pc}\n    nop\n    _0200F438: .word 0x00000488"
    );
    #endif
}

void sub_0200F43C(void) {
    Heap_Free(r1);
    SysTask_Destroy(r4);
}

void sub_0200F450(void) {
    /* Original at 0x0200F450 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _0200F470 ; =sub_0200F43C\n    add r1, r4, #0\n    mov r2, #0\n    bl SysTask_CreateOnVWaitQueue\n    ldr r1, _0200F474 ; =0x00000488\n    mov r0, #3\n    ldrb r2, [r4, r1]\n    bic r2, r0\n    mov r0, #1\n    orr r0, r2\n    strb r0, [r4, r1]\n    pop {r4, pc}\n    nop\n    _0200F470: .word sub_0200F43C\n    _0200F474: .word 0x00000488"
    );
    #endif
}

void sub_0200F478(void) {
    /* Original at 0x0200F478 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _0200F498 ; =sub_0200F43C\n    add r1, r4, #0\n    mov r2, #0\n    bl SysTask_CreateOnVWaitQueue\n    ldr r1, _0200F49C ; =0x00000488\n    mov r0, #3\n    ldrb r2, [r4, r1]\n    bic r2, r0\n    mov r0, #2\n    orr r0, r2\n    strb r0, [r4, r1]\n    pop {r4, pc}\n    nop\n    _0200F498: .word sub_0200F43C\n    _0200F49C: .word 0x00000488"
    );
    #endif
}

void DrawPokemonPicFromSpecies(void) {
    /* Original at 0x0200F4A0 */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    str r2, [sp, #4]\n    ldr r5, [sp, #0x30]\n    str r3, [sp, #8]\n    add r6, r0, #0\n    add r7, r1, #0\n    str r5, [sp]\n    bl sub_0200F5C4\n    add r4, r0, #0\n    add r1, r5, #0\n    bl sub_0200F600\n    add r0, r4, #0\n    bl sub_0200F62C\n    ldr r1, [sp, #4]\n    ldr r2, [sp, #8]\n    add r0, r4, #0\n    bl sub_0200F684\n    add r2, sp, #0x10\n    ldrh r1, [r2, #0x18]\n    ldrb r2, [r2, #0x1c]\n    add r0, r4, #0\n    bl sub_0200F6D4\n    add r2, sp, #0x10\n    ldrb r1, [r2, #0x10]\n    ldrh r2, [r2, #0x14]\n    add r0, r4, #0\n    bl sub_0200F82C\n    add r0, r6, #0\n    add r1, r7, #0\n    bl BgCommitTilemapBufferToVram\n    ldr r0, _0200F4F4 ; =0x0000016F\n    add r0, r4, r0\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    _0200F4F4: .word 0x0000016F"
    );
    #endif
}

void DrawPokemonPicFromMon(void) {
    /* Original at 0x0200F4F8 */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    str r2, [sp, #4]\n    ldr r5, [sp, #0x2c]\n    str r3, [sp, #8]\n    add r6, r0, #0\n    add r7, r1, #0\n    str r5, [sp]\n    bl sub_0200F5C4\n    add r4, r0, #0\n    add r1, r5, #0\n    bl sub_0200F600\n    add r0, r4, #0\n    bl sub_0200F62C\n    ldr r1, [sp, #4]\n    ldr r2, [sp, #8]\n    add r0, r4, #0\n    bl sub_0200F684\n    ldr r1, [sp, #0x28]\n    add r0, r4, #0\n    bl sub_0200F714\n    add r2, sp, #0x10\n    ldrb r1, [r2, #0x10]\n    ldrh r2, [r2, #0x14]\n    add r0, r4, #0\n    bl sub_0200F82C\n    add r0, r6, #0\n    add r1, r7, #0\n    bl BgCommitTilemapBufferToVram\n    ldr r0, _0200F548 ; =0x0000016F\n    add r0, r4, r0\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    _0200F548: .word 0x0000016F"
    );
    #endif
}

void sub_0200F54C(void) {
    /* Original at 0x0200F54C */
    /* Requires manual decompilation - 51 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, _0200F5C0 ; =0x0000016F\n    add r4, r1, #0\n    ldrb r1, [r4, r0]\n    cmp r1, #1\n    beq _0200F564\n    cmp r1, #2\n    beq _0200F582\n    cmp r1, #3\n    beq _0200F594\n    b _0200F5A8\n    add r0, r4, #0\n    bl sub_0200F9DC\n    mov r0, #0x59\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl Sprite_DeleteAndFreeResources\n    add r0, r4, #0\n    bl ov01_021E86F4\n    add r0, r5, #0\n    bl DestroySysTaskAndEnvironment\n    pop {r3, r4, r5, pc}\n    mov r1, #3\n    strb r1, [r4, r0]\n    sub r0, #0xb\n    ldr r0, [r4, r0]\n    mov r1, #1\n    ldr r0, [r0]\n    bl Sprite_SetAnimCtrlSeq\n    b _0200F5A8\n    sub r0, #0xb\n    ldr r0, [r4, r0]\n    ldr r0, [r0]\n    bl Sprite_GetAnimationFrame\n    cmp r0, #6\n    bne _0200F5A8\n    ldr r0, _0200F5C0 ; =0x0000016F\n    mov r1, #0\n    strb r1, [r4, r0]\n    mov r0, #0x59\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #1\n    ldr r0, [r0]\n    lsl r1, r1, #0xc\n    bl Sprite_UpdateAnim\n    ldr r0, [r4]\n    bl SpriteList_RenderAndAnimateSprites\n    pop {r3, r4, r5, pc}\n    _0200F5C0: .word 0x0000016F"
    );
    #endif
}

void sub_0200F5C4(void) {
    /* Original at 0x0200F5C4 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    add r7, r3, #0\n    mov r1, #0x17\n    add r6, r2, #0\n    ldr r0, _0200F5F8 ; =sub_0200F54C\n    ldr r3, [sp, #0x18]\n    lsl r1, r1, #4\n    mov r2, #0\n    bl CreateSysTaskAndEnvironment\n    bl SysTask_GetData\n    ldr r1, _0200F5FC ; =0x0000016F\n    mov r2, #0\n    strb r2, [r0, r1]\n    sub r2, r1, #7\n    str r5, [r0, r2]\n    sub r2, r1, #3\n    strb r4, [r0, r2]\n    sub r2, r1, #2\n    strb r6, [r0, r2]\n    sub r1, r1, #1\n    strb r7, [r0, r1]\n    pop {r3, r4, r5, r6, r7, pc}\n    _0200F5F8: .word sub_0200F54C\n    _0200F5FC: .word 0x0000016F"
    );
    #endif
}

void sub_0200F600(void) {
    /* Original at 0x0200F600 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x18\n    ldr r5, _0200F628 ; =_020F5C60\n    add r4, sp, #0\n    add r6, r0, #0\n    add r3, r1, #0\n    add r2, r4, #0\n    ldmia r5!, {r0, r1}\n    stmia r4!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r4!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r4!, {r0, r1}\n    add r1, r2, #0\n    add r0, r6, #0\n    mov r2, #1\n    bl ov01_021E8298\n    add sp, #0x18\n    pop {r4, r5, r6, pc}\n    _0200F628: .word _020F5C60"
    );
    #endif
}

void sub_0200F62C(void) {
    /* Original at 0x0200F62C */
    /* Requires manual decompilation - 39 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    mov r1, #1\n    str r1, [sp]\n    str r1, [sp, #4]\n    ldr r1, _0200F680 ; =0x00015CD5\n    mov r2, #0x32\n    str r1, [sp, #8]\n    mov r1, #0x26\n    mov r3, #0\n    add r4, r0, #0\n    bl ov01_021E8378\n    ldr r0, _0200F680 ; =0x00015CD5\n    mov r1, #0x26\n    str r0, [sp]\n    add r0, r4, #0\n    mov r2, #0x30\n    mov r3, #0\n    bl ov01_021E83F0\n    ldr r0, _0200F680 ; =0x00015CD5\n    mov r1, #0x26\n    str r0, [sp]\n    add r0, r4, #0\n    mov r2, #0x2f\n    mov r3, #0\n    bl ov01_021E8404\n    mov r0, #1\n    str r0, [sp]\n    ldr r0, _0200F680 ; =0x00015CD5\n    mov r1, #0x26\n    str r0, [sp, #4]\n    add r0, r4, #0\n    mov r2, #0x31\n    mov r3, #0\n    bl ov01_021E8418\n    add sp, #0xc\n    pop {r3, r4, pc}\n    nop\n    _0200F680: .word 0x00015CD5"
    );
    #endif
}

void sub_0200F684(void) {
    /* Original at 0x0200F684 */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x34\n    ldr r5, _0200F6D0 ; =_020F5C78\n    add r6, r2, #0\n    add r4, r0, #0\n    add r7, r1, #0\n    add r3, sp, #0\n    mov r2, #6\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    sub r2, r2, #1\n    bne _0200F694\n    ldr r0, [r5]\n    str r0, [r3]\n    add r0, r7, #5\n    lsl r1, r0, #3\n    add r0, sp, #0\n    strh r1, [r0]\n    add r1, r6, #5\n    lsl r1, r1, #3\n    strh r1, [r0, #2]\n    add r0, r4, #0\n    add r1, sp, #0\n    bl ov01_021E851C\n    mov r1, #0x59\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    ldr r0, [r4]\n    bl SpriteList_RenderAndAnimateSprites\n    mov r0, #0x10\n    mov r1, #1\n    bl GfGfx_EngineBTogglePlanes\n    add sp, #0x34\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _0200F6D0: .word _020F5C78"
    );
    #endif
}

void sub_0200F6D4(void) {
    /* Original at 0x0200F6D4 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x1c\n    add r5, r0, #0\n    ldr r0, _0200F710 ; =0x00000162\n    add r4, r1, #0\n    ldrh r0, [r5, r0]\n    add r6, r2, #0\n    bl PokepicManager_Create\n    add r7, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    add r0, sp, #0xc\n    add r1, r4, #0\n    add r2, r6, #0\n    mov r3, #2\n    bl GetMonSpriteCharAndPlttNarcIdsEx\n    add r0, r5, #0\n    add r1, sp, #0xc\n    bl sub_0200F748\n    add r0, r7, #0\n    bl PokepicManager_Delete\n    add sp, #0x1c\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _0200F710: .word 0x00000162"
    );
    #endif
}

void sub_0200F714(void) {
    /* Original at 0x0200F714 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    ldr r0, _0200F744 ; =0x00000162\n    add r4, r1, #0\n    ldrh r0, [r5, r0]\n    bl PokepicManager_Create\n    add r6, r0, #0\n    add r0, sp, #0\n    add r1, r4, #0\n    mov r2, #2\n    bl GetPokemonSpriteCharAndPlttNarcIds\n    add r0, r5, #0\n    add r1, sp, #0\n    bl sub_0200F748\n    add r0, r6, #0\n    bl PokepicManager_Delete\n    add sp, #0x10\n    pop {r4, r5, r6, pc}\n    nop\n    _0200F744: .word 0x00000162"
    );
    #endif
}

void sub_0200F748(void) {
    /* Original at 0x0200F748 */
    /* Requires manual decompilation - 94 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x28\n    add r5, r0, #0\n    ldr r0, _0200F81C ; =0x00000162\n    add r6, r1, #0\n    mov r1, #0x19\n    ldrh r0, [r5, r0]\n    lsl r1, r1, #8\n    bl Heap_Alloc\n    add r2, sp, #0x18\n    ldr r3, _0200F820 ; =_020F5C50\n    add r4, r0, #0\n    add r7, r2, #0\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    str r4, [sp]\n    ldr r2, _0200F81C ; =0x00000162\n    ldrh r0, [r6]\n    ldrh r1, [r6, #2]\n    ldrh r2, [r5, r2]\n    add r3, r7, #0\n    bl sub_020143E0\n    ldr r3, _0200F824 ; =_020F5C40\n    add r2, sp, #8\n    add r7, r2, #0\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    mov r0, #0x32\n    lsl r0, r0, #6\n    add r0, r4, r0\n    str r0, [sp]\n    ldr r2, _0200F81C ; =0x00000162\n    ldrh r0, [r6]\n    ldrh r1, [r6, #2]\n    ldrh r2, [r5, r2]\n    add r3, r7, #0\n    bl sub_020143E0\n    mov r0, #0x13\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    ldr r1, _0200F828 ; =0x00015CD5\n    bl SpriteResourceCollection_Find\n    bl sub_0200AF00\n    mov r1, #1\n    str r0, [sp, #4]\n    bl NNS_G2dGetImageLocation\n    mov r1, #0x19\n    add r7, r0, #0\n    add r0, r4, #0\n    lsl r1, r1, #8\n    bl DC_FlushRange\n    mov r2, #0x19\n    add r0, r4, #0\n    add r1, r7, #0\n    lsl r2, r2, #8\n    bl GX_LoadOBJ\n    add r0, r4, #0\n    bl Heap_Free\n    ldr r2, _0200F81C ; =0x00000162\n    ldrh r0, [r6]\n    ldrh r1, [r6, #4]\n    ldrh r2, [r5, r2]\n    bl sub_02014450\n    add r4, r0, #0\n    mov r0, #0x4d\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    ldr r1, _0200F828 ; =0x00015CD5\n    bl SpriteResourceCollection_Find\n    ldr r1, [sp, #4]\n    bl SpriteTransfer_GetPaletteProxy\n    mov r1, #1\n    bl NNS_G2dGetImagePaletteLocation\n    add r5, r0, #0\n    add r0, r4, #0\n    mov r1, #0x20\n    bl DC_FlushRange\n    add r0, r4, #0\n    add r1, r5, #0\n    mov r2, #0x20\n    bl GX_LoadOBJPltt\n    add r0, r4, #0\n    bl Heap_Free\n    add sp, #0x28\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0200F81C: .word 0x00000162\n    _0200F820: .word _020F5C50\n    _0200F824: .word _020F5C40\n    _0200F828: .word 0x00015CD5"
    );
    #endif
}

void sub_0200F82C(void) {
    /* Original at 0x0200F82C */
    /* Requires manual decompilation - 205 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x10\n    ldr r3, _0200F9D8 ; =0x0000016E\n    add r5, r0, #0\n    ldrb r0, [r5, r3]\n    add r4, r1, #0\n    sub r1, r3, #2\n    sub r0, r0, #1\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    str r4, [sp, #0xc]\n    sub r0, r3, #6\n    sub r3, r3, #1\n    ldrb r3, [r5, r3]\n    ldrb r1, [r5, r1]\n    ldr r0, [r5, r0]\n    sub r3, r3, #1\n    lsl r3, r3, #0x18\n    lsr r3, r3, #0x18\n    add r6, r2, #0\n    bl FillBgTilemapRect\n    ldr r3, _0200F9D8 ; =0x0000016E\n    add r2, r6, #1\n    ldrb r0, [r5, r3]\n    sub r1, r3, #2\n    lsl r2, r2, #0x10\n    sub r0, r0, #1\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #0xa\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    str r4, [sp, #0xc]\n    sub r0, r3, #6\n    sub r3, r3, #1\n    ldrb r1, [r5, r1]\n    ldrb r3, [r5, r3]\n    ldr r0, [r5, r0]\n    lsr r2, r2, #0x10\n    bl FillBgTilemapRect\n    ldr r3, _0200F9D8 ; =0x0000016E\n    add r2, r6, #2\n    ldrb r0, [r5, r3]\n    lsl r2, r2, #0x10\n    sub r1, r3, #2\n    sub r0, r0, #1\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    str r4, [sp, #0xc]\n    sub r0, r3, #6\n    sub r3, r3, #1\n    ldrb r3, [r5, r3]\n    ldrb r1, [r5, r1]\n    ldr r0, [r5, r0]\n    add r3, #0xa\n    lsl r3, r3, #0x18\n    lsr r2, r2, #0x10\n    lsr r3, r3, #0x18\n    bl FillBgTilemapRect\n    ldr r3, _0200F9D8 ; =0x0000016E\n    add r2, r6, #4\n    ldrb r0, [r5, r3]\n    lsl r2, r2, #0x10\n    sub r1, r3, #2\n    str r0, [sp]\n    mov r0, #0xa\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    str r4, [sp, #0xc]\n    sub r0, r3, #6\n    sub r3, r3, #1\n    ldrb r1, [r5, r1]\n    ldrb r3, [r5, r3]\n    ldr r0, [r5, r0]\n    lsr r2, r2, #0x10\n    bl FillBgTilemapRect\n    ldr r3, _0200F9D8 ; =0x0000016E\n    add r2, r6, #3\n    ldrb r0, [r5, r3]\n    lsl r2, r2, #0x10\n    sub r1, r3, #2\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #0xa\n    str r0, [sp, #8]\n    str r4, [sp, #0xc]\n    sub r0, r3, #6\n    sub r3, r3, #1\n    ldrb r3, [r5, r3]\n    ldrb r1, [r5, r1]\n    ldr r0, [r5, r0]\n    sub r3, r3, #1\n    lsl r3, r3, #0x18\n    lsr r2, r2, #0x10\n    lsr r3, r3, #0x18\n    bl FillBgTilemapRect\n    ldr r3, _0200F9D8 ; =0x0000016E\n    add r2, r6, #5\n    ldrb r0, [r5, r3]\n    lsl r2, r2, #0x10\n    sub r1, r3, #2\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #0xa\n    str r0, [sp, #8]\n    str r4, [sp, #0xc]\n    sub r0, r3, #6\n    sub r3, r3, #1\n    ldrb r3, [r5, r3]\n    ldrb r1, [r5, r1]\n    ldr r0, [r5, r0]\n    add r3, #0xa\n    lsl r3, r3, #0x18\n    lsr r2, r2, #0x10\n    lsr r3, r3, #0x18\n    bl FillBgTilemapRect\n    ldr r3, _0200F9D8 ; =0x0000016E\n    add r2, r6, #6\n    ldrb r0, [r5, r3]\n    lsl r2, r2, #0x10\n    sub r1, r3, #2\n    add r0, #0xa\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    str r4, [sp, #0xc]\n    sub r0, r3, #6\n    sub r3, r3, #1\n    ldrb r3, [r5, r3]\n    ldrb r1, [r5, r1]\n    ldr r0, [r5, r0]\n    sub r3, r3, #1\n    lsl r3, r3, #0x18\n    lsr r2, r2, #0x10\n    lsr r3, r3, #0x18\n    bl FillBgTilemapRect\n    ldr r3, _0200F9D8 ; =0x0000016E\n    add r2, r6, #7\n    ldrb r0, [r5, r3]\n    sub r1, r3, #2\n    lsl r2, r2, #0x10\n    add r0, #0xa\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #0xa\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    str r4, [sp, #0xc]\n    sub r0, r3, #6\n    sub r3, r3, #1\n    ldrb r1, [r5, r1]\n    ldrb r3, [r5, r3]\n    ldr r0, [r5, r0]\n    lsr r2, r2, #0x10\n    bl FillBgTilemapRect\n    ldr r3, _0200F9D8 ; =0x0000016E\n    add r6, #8\n    ldrb r0, [r5, r3]\n    lsl r2, r6, #0x10\n    sub r1, r3, #2\n    add r0, #0xa\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    str r4, [sp, #0xc]\n    sub r0, r3, #6\n    sub r3, r3, #1\n    ldrb r3, [r5, r3]\n    ldrb r1, [r5, r1]\n    ldr r0, [r5, r0]\n    add r3, #0xa\n    lsl r3, r3, #0x18\n    lsr r2, r2, #0x10\n    lsr r3, r3, #0x18\n    bl FillBgTilemapRect\n    mov r1, #0x5a\n    lsl r1, r1, #2\n    ldr r0, [r5, r1]\n    add r1, r1, #4\n    ldrb r1, [r5, r1]\n    bl ScheduleBgTilemapBufferTransfer\n    add sp, #0x10\n    pop {r4, r5, r6, pc}\n    nop\n    _0200F9D8: .word 0x0000016E"
    );
    #endif
}

void sub_0200F9DC(void) {
    /* Original at 0x0200F9DC */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x10\n    ldr r3, _0200FA20 ; =0x0000016E\n    add r4, r0, #0\n    ldrb r0, [r4, r3]\n    mov r2, #0\n    sub r1, r3, #2\n    sub r0, r0, #1\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #0xc\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    str r2, [sp, #0xc]\n    sub r0, r3, #6\n    sub r3, r3, #1\n    ldrb r3, [r4, r3]\n    ldrb r1, [r4, r1]\n    ldr r0, [r4, r0]\n    sub r3, r3, #1\n    lsl r3, r3, #0x18\n    lsr r3, r3, #0x18\n    bl FillBgTilemapRect\n    mov r1, #0x5a\n    lsl r1, r1, #2\n    ldr r0, [r4, r1]\n    add r1, r1, #4\n    ldrb r1, [r4, r1]\n    bl ScheduleBgTilemapBufferTransfer\n    add sp, #0x10\n    pop {r4, pc}\n    _0200FA20: .word 0x0000016E"
    );
    #endif
}
