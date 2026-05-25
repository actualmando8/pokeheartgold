/* Decompiled from asm/overlay_12_0226B8FC.s */
#include "global.h"

void ov12_0226B8FC(void) {
    /* Original at 0x0226B8FC */
    /* Requires manual decompilation - 58 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    add r5, r0, #0\n    add r4, r1, #0\n    mov r0, #8\n    add r1, r3, #0\n    add r7, r2, #0\n    bl NARC_New\n    add r6, r0, #0\n    str r6, [sp]\n    mov r0, #0x50\n    str r0, [sp, #4]\n    mov r0, #0\n    str r0, [sp, #8]\n    mov r0, #1\n    str r0, [sp, #0xc]\n    mov r0, #2\n    str r0, [sp, #0x10]\n    ldr r0, [sp, #0x34]\n    mov r1, #3\n    str r0, [sp, #0x14]\n    add r0, r7, #0\n    add r2, r5, #0\n    add r3, r4, #0\n    bl SpriteSystem_LoadPaletteBufferFromOpenNarc\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x30]\n    add r1, r4, #0\n    str r0, [sp, #8]\n    add r0, r5, #0\n    add r2, r6, #0\n    mov r3, #0xfa\n    bl SpriteSystem_LoadCharResObjFromOpenNarc\n    mov r0, #1\n    str r0, [sp]\n    ldr r0, [sp, #0x38]\n    add r1, r4, #0\n    str r0, [sp, #4]\n    add r0, r5, #0\n    add r2, r6, #0\n    mov r3, #0xfb\n    bl SpriteSystem_LoadCellResObjFromOpenNarc\n    mov r0, #1\n    str r0, [sp]\n    ldr r0, [sp, #0x3c]\n    add r1, r4, #0\n    str r0, [sp, #4]\n    add r0, r5, #0\n    add r2, r6, #0\n    mov r3, #0xfc\n    bl SpriteSystem_LoadAnimResObjFromOpenNarc\n    add r0, r6, #0\n    bl NARC_Delete\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov12_0226B97C(void) {
    /* Original at 0x0226B97C */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r4, r2, #0\n    add r6, r3, #0\n    bl SpriteManager_UnloadCharObjById\n    add r0, r5, #0\n    add r1, r4, #0\n    bl SpriteManager_UnloadPlttObjById\n    add r0, r5, #0\n    add r1, r6, #0\n    bl SpriteManager_UnloadCellObjById\n    ldr r1, [sp, #0x10]\n    add r0, r5, #0\n    bl SpriteManager_UnloadAnimObjById\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov12_0226B9A4(void) {
    /* Original at 0x0226B9A4 */
    /* Requires manual decompilation - 58 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x38\n    add r5, r3, #0\n    mov ip, r2\n    ldr r3, _0226BA1C ; =ov12_0226EBA0\n    add r6, r0, #0\n    add r7, r1, #0\n    add r2, sp, #4\n    mov r4, #6\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    sub r4, r4, #1\n    bne _0226B9B6\n    ldr r0, [r3]\n    mov r1, #0x18\n    str r0, [r2]\n    ldr r0, [sp, #0x50]\n    str r5, [sp, #0x18]\n    str r0, [sp, #0x1c]\n    ldr r0, [sp, #0x54]\n    str r0, [sp, #0x20]\n    ldr r0, [sp, #0x58]\n    str r0, [sp, #0x24]\n    ldr r0, [sp, #0x5c]\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #0x60]\n    str r0, [sp, #0x30]\n    mov r0, ip\n    bl Heap_Alloc\n    mov r1, #0\n    mov r2, #0x18\n    str r0, [sp]\n    bl MI_CpuFill8\n    ldr r5, [sp]\n    mov r4, #0\n    add r0, r6, #0\n    add r1, r7, #0\n    add r2, sp, #4\n    bl SpriteSystem_NewSprite\n    mov r1, #0\n    stmia r5!, {r0}\n    bl ManagedSprite_SetDrawFlag\n    add r4, r4, #1\n    cmp r4, #5\n    blt _0226B9EE\n    ldr r0, _0226BA20 ; =ov12_0226BB90\n    ldr r1, [sp]\n    ldr r2, _0226BA24 ; =0x00009C40\n    bl SysTask_CreateOnMainQueue\n    ldr r1, [sp]\n    str r0, [r1, #0x14]\n    add r0, r1, #0\n    add sp, #0x38\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0226BA1C: .word ov12_0226EBA0\n    _0226BA20: .word ov12_0226BB90\n    _0226BA24: .word 0x00009C40"
    );
    #endif
}

void ov12_0226BA28(void) {
    /* Original at 0x0226BA28 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r0, #0\n    mov r4, #0\n    add r5, r6, #0\n    ldr r0, [r5]\n    bl Sprite_DeleteAndFreeResources\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #5\n    blt _0226BA30\n    ldr r0, [r6, #0x14]\n    bl SysTask_Destroy\n    add r0, r6, #0\n    bl Heap_Free\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov12_0226BA4C(void) {
    /* Original at 0x0226BA4C */
    /* Requires manual decompilation - 59 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    lsl r1, r1, #0x10\n    lsl r2, r2, #0x10\n    ldr r4, [sp, #0x24]\n    add r6, r3, #0\n    ldr r0, [r5]\n    asr r1, r1, #0x10\n    asr r2, r2, #0x10\n    add r3, r4, #0\n    bl ManagedSprite_SetPositionXYWithSubscreenOffset\n    ldr r2, [sp, #0x10]\n    lsl r1, r6, #0x10\n    lsl r2, r2, #0x10\n    ldr r0, [r5, #4]\n    asr r1, r1, #0x10\n    asr r2, r2, #0x10\n    add r3, r4, #0\n    bl ManagedSprite_SetPositionXYWithSubscreenOffset\n    ldr r1, [sp, #0x14]\n    ldr r2, [sp, #0x18]\n    lsl r1, r1, #0x10\n    lsl r2, r2, #0x10\n    ldr r0, [r5, #8]\n    asr r1, r1, #0x10\n    asr r2, r2, #0x10\n    add r3, r4, #0\n    bl ManagedSprite_SetPositionXYWithSubscreenOffset\n    ldr r1, [sp, #0x1c]\n    ldr r2, [sp, #0x20]\n    lsl r1, r1, #0x10\n    lsl r2, r2, #0x10\n    ldr r0, [r5, #0xc]\n    asr r1, r1, #0x10\n    asr r2, r2, #0x10\n    add r3, r4, #0\n    bl ManagedSprite_SetPositionXYWithSubscreenOffset\n    ldr r0, [r5]\n    mov r1, #0\n    bl ManagedSprite_SetAnim\n    ldr r0, [r5, #4]\n    mov r1, #1\n    bl ManagedSprite_SetAnim\n    ldr r0, [r5, #8]\n    mov r1, #2\n    bl ManagedSprite_SetAnim\n    ldr r0, [r5, #0xc]\n    mov r1, #3\n    bl ManagedSprite_SetAnim\n    mov r4, #0\n    mov r6, #1\n    ldr r0, [r5]\n    add r1, r6, #0\n    bl ManagedSprite_SetDrawFlag\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #4\n    blt _0226BAC2\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov12_0226BAD4(void) {
    /* Original at 0x0226BAD4 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x18\n    ldr r4, [sp, #0x20]\n    str r4, [sp]\n    ldr r4, [sp, #0x24]\n    str r4, [sp, #4]\n    ldr r4, [sp, #0x28]\n    str r4, [sp, #8]\n    ldr r4, [sp, #0x2c]\n    str r4, [sp, #0xc]\n    ldr r4, [sp, #0x30]\n    str r4, [sp, #0x10]\n    mov r4, #3\n    lsl r4, r4, #0x12\n    str r4, [sp, #0x14]\n    bl ov12_0226BA4C\n    add sp, #0x18\n    pop {r4, pc}"
    );
    #endif
}

void ov12_0226BAFC(void) {
    ov12_0226BAD4();
}

void ov12_0226BB1C(void) {
    ov12_0226BA4C();
}

void ov12_0226BB40(void) {
    /* Original at 0x0226BB40 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r3, #0\n    lsl r1, r1, #0x10\n    lsl r2, r2, #0x10\n    ldr r0, [r5, #0x10]\n    ldr r3, [sp, #0x10]\n    asr r1, r1, #0x10\n    asr r2, r2, #0x10\n    bl ManagedSprite_SetPositionXYWithSubscreenOffset\n    ldr r0, [r5, #0x10]\n    add r1, r4, #0\n    bl ManagedSprite_SetAnim\n    ldr r0, [r5, #0x10]\n    mov r1, #1\n    bl ManagedSprite_SetDrawFlag\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov12_0226BB68(void) {
    ManagedSprite_SetDrawFlag(0);
}

void ov12_0226BB84(void) {
    ManagedSprite_SetDrawFlag();
}

void ov12_0226BB90(void) {
    /* Original at 0x0226BB90 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r1, #0\n    ldr r0, [r6]\n    bl ManagedSprite_GetDrawFlag\n    cmp r0, #0\n    beq _0226BBC0\n    mov r4, #0\n    add r5, r6, #0\n    ldr r0, [r5]\n    bl ManagedSprite_TickFrame\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #4\n    blt _0226BBA2\n    ldr r0, [r6, #0x10]\n    bl ManagedSprite_GetDrawFlag\n    cmp r0, #1\n    bne _0226BBC0\n    ldr r0, [r6, #0x10]\n    bl ManagedSprite_TickFrame\n    pop {r4, r5, r6, pc}"
    );
    #endif
}
