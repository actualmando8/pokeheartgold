/* Decompiled from asm/overlay_12_0226BBC4.s */
#include "global.h"

void ov12_0226BBC4(void) {
    /* Original at 0x0226BBC4 */
    /* Requires manual decompilation - 56 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    add r5, r0, #0\n    add r4, r1, #0\n    mov r0, #0xa4\n    add r1, r2, #0\n    add r7, r3, #0\n    bl NARC_New\n    add r6, r0, #0\n    str r6, [sp]\n    mov r1, #1\n    str r1, [sp, #4]\n    mov r0, #0\n    str r0, [sp, #8]\n    str r1, [sp, #0xc]\n    mov r0, #2\n    str r0, [sp, #0x10]\n    ldr r0, [sp, #0x34]\n    mov r1, #3\n    str r0, [sp, #0x14]\n    add r0, r7, #0\n    add r2, r5, #0\n    add r3, r4, #0\n    bl SpriteSystem_LoadPaletteBufferFromOpenNarc\n    mov r3, #0\n    str r3, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x30]\n    add r1, r4, #0\n    str r0, [sp, #8]\n    add r0, r5, #0\n    add r2, r6, #0\n    bl SpriteSystem_LoadCharResObjFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, [sp, #0x38]\n    add r1, r4, #0\n    str r0, [sp, #4]\n    add r0, r5, #0\n    add r2, r6, #0\n    mov r3, #2\n    bl SpriteSystem_LoadCellResObjFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, [sp, #0x3c]\n    add r1, r4, #0\n    str r0, [sp, #4]\n    add r0, r5, #0\n    add r2, r6, #0\n    mov r3, #3\n    bl SpriteSystem_LoadAnimResObjFromOpenNarc\n    add r0, r6, #0\n    bl NARC_Delete\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov12_0226BC40(void) {
    /* Original at 0x0226BC40 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r4, r2, #0\n    add r6, r3, #0\n    bl SpriteManager_UnloadCharObjById\n    add r0, r5, #0\n    add r1, r4, #0\n    bl SpriteManager_UnloadPlttObjById\n    add r0, r5, #0\n    add r1, r6, #0\n    bl SpriteManager_UnloadCellObjById\n    ldr r1, [sp, #0x10]\n    add r0, r5, #0\n    bl SpriteManager_UnloadAnimObjById\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov12_0226BC68(void) {
    /* Original at 0x0226BC68 */
    /* Requires manual decompilation - 54 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x38\n    ldr r5, _0226BCD8 ; =ov12_0226EBD4\n    add r6, r3, #0\n    add r7, r0, #0\n    str r1, [sp]\n    add r4, sp, #4\n    mov r3, #6\n    ldmia r5!, {r0, r1}\n    stmia r4!, {r0, r1}\n    sub r3, r3, #1\n    bne _0226BC78\n    ldr r0, [r5]\n    mov r1, #0x20\n    str r0, [r4]\n    ldr r0, [sp, #0x50]\n    str r6, [sp, #0x18]\n    str r0, [sp, #0x1c]\n    ldr r0, [sp, #0x54]\n    str r0, [sp, #0x20]\n    ldr r0, [sp, #0x58]\n    str r0, [sp, #0x24]\n    ldr r0, [sp, #0x5c]\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #0x60]\n    str r0, [sp, #0x30]\n    add r0, r2, #0\n    bl Heap_Alloc\n    mov r1, #0\n    mov r2, #0x20\n    add r4, r0, #0\n    bl MI_CpuFill8\n    ldr r1, [sp]\n    add r0, r7, #0\n    add r2, sp, #4\n    bl SpriteSystem_NewSprite\n    mov r1, #0\n    str r0, [r4]\n    bl ManagedSprite_SetDrawFlag\n    mov r0, #3\n    lsl r0, r0, #0x12\n    str r0, [r4, #0x14]\n    ldr r0, _0226BCDC ; =ov12_0226BD54\n    ldr r2, _0226BCE0 ; =0x000003E7\n    add r1, r4, #0\n    bl SysTask_CreateOnMainQueue\n    str r0, [r4, #4]\n    add r0, r4, #0\n    add sp, #0x38\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0226BCD8: .word ov12_0226EBD4\n    _0226BCDC: .word ov12_0226BD54\n    _0226BCE0: .word 0x000003E7"
    );
    #endif
}

void ov12_0226BCE4(void) {
    /* Original at 0x0226BCE4 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4]\n    bl Sprite_DeleteAndFreeResources\n    ldr r0, [r4, #4]\n    bl SysTask_Destroy\n    add r0, r4, #0\n    bl Heap_Free\n    pop {r4, pc}"
    );
    #endif
}

void ov12_0226BCFC(void) {
    /* Original at 0x0226BCFC */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r7, r1, #0\n    add r4, r2, #0\n    add r6, r3, #0\n    bl ov12_0226BEB8\n    str r7, [r5, #8]\n    str r4, [r5, #0xc]\n    str r6, [r5, #0x14]\n    lsl r1, r7, #0x10\n    lsl r2, r4, #0x10\n    ldr r0, [r5]\n    asr r1, r1, #0x10\n    asr r2, r2, #0x10\n    add r3, r6, #0\n    bl ManagedSprite_SetPositionXYWithSubscreenOffset\n    ldr r0, [r5]\n    mov r1, #1\n    bl ManagedSprite_SetDrawFlag\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov12_0226BD2C(void) {
    ov12_0226BCFC();
}

void ov12_0226BD38(void) {
    /* Original at 0x0226BD38 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4]\n    mov r1, #0\n    bl ManagedSprite_SetDrawFlag\n    add r0, r4, #0\n    bl ov12_0226BEB8\n    pop {r4, pc}"
    );
    #endif
}

void ov12_0226BD4C(void) {
    /* Original at 0x0226BD4C */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "strh r1, [r0, #0x18]\n    bx lr"
    );
    #endif
}

void ov12_0226BD50(void) {
    /* Original at 0x0226BD50 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "ldrb r0, [r0, #0x1b]\n    bx lr"
    );
    #endif
}

void ov12_0226BD54(void) {
    /* Original at 0x0226BD54 */
    /* Requires manual decompilation - 165 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r4, r1, #0\n    ldrb r0, [r4, #0x1b]\n    cmp r0, #1\n    bne _0226BD62\n    mov r0, #0\n    strb r0, [r4, #0x1b]\n    mov r0, #0x18\n    ldrsh r1, [r4, r0]\n    cmp r1, #0\n    ble _0226BD78\n    sub r1, r1, #1\n    strh r1, [r4, #0x18]\n    ldrsh r0, [r4, r0]\n    cmp r0, #0\n    bne _0226BD78\n    mov r0, #1\n    strb r0, [r4, #0x1a]\n    ldr r0, [r4]\n    bl ManagedSprite_GetDrawFlag\n    cmp r0, #0\n    bne _0226BD84\n    b _0226BEB0\n    ldrb r0, [r4, #0x1c]\n    cmp r0, #0\n    bne _0226BE06\n    mov r1, #0xfa\n    ldr r2, [r4, #0x10]\n    lsl r1, r1, #2\n    add r2, r2, r1\n    add r0, r4, #0\n    ldr r1, _0226BEB4 ; =0x00004650\n    add r0, #0x10\n    str r2, [r4, #0x10]\n    cmp r2, r1\n    blt _0226BDB2\n    ldr r2, [r0]\n    sub r1, r2, r1\n    str r1, [r0]\n    ldrb r0, [r4, #0x1a]\n    cmp r0, #1\n    bne _0226BDB2\n    mov r0, #1\n    strb r0, [r4, #0x1c]\n    mov r0, #0\n    strb r0, [r4, #0x1a]\n    ldrb r0, [r4, #0x1c]\n    cmp r0, #0\n    bne _0226BE06\n    ldr r0, [r4, #0x10]\n    mov r1, #0x64\n    bl _s32_div_f\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    bl GF_SinDegNoWrap\n    mov r2, #0xe\n    asr r1, r0, #0x1f\n    lsl r2, r2, #0xc\n    mov r3, #0\n    bl _ll_mul\n    add r5, r1, #0\n    ldr r1, [r4, #8]\n    mov r2, #2\n    add r6, r0, #0\n    lsl r1, r1, #0x10\n    mov r7, #0\n    lsl r2, r2, #0xa\n    asr r1, r1, #0x10\n    add r2, r6, r2\n    adc r5, r7\n    lsl r5, r5, #0x14\n    lsr r2, r2, #0xc\n    orr r2, r5\n    asr r5, r2, #0xb\n    lsr r5, r5, #0x14\n    add r5, r2, r5\n    ldr r3, [r4, #0xc]\n    asr r2, r5, #0xc\n    sub r2, r3, r2\n    lsl r2, r2, #0x10\n    ldr r0, [r4]\n    ldr r3, [r4, #0x14]\n    asr r2, r2, #0x10\n    bl ManagedSprite_SetPositionXYWithSubscreenOffset\n    ldrb r0, [r4, #0x1c]\n    cmp r0, #1\n    bne _0226BEAA\n    ldrb r0, [r4, #0x1d]\n    cmp r0, #3\n    bhi _0226BEAA\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0226BE1E: ; jump table\n    ldrb r0, [r4, #0x1e]\n    add r0, r0, #1\n    strb r0, [r4, #0x1e]\n    ldrb r0, [r4, #0x1e]\n    cmp r0, #3\n    bls _0226BEAA\n    mov r0, #0\n    strb r0, [r4, #0x1e]\n    ldrb r0, [r4, #0x1d]\n    add r0, r0, #1\n    strb r0, [r4, #0x1d]\n    b _0226BEAA\n    ldr r2, [r4, #0xc]\n    ldr r1, [r4, #8]\n    add r2, #8\n    lsl r1, r1, #0x10\n    lsl r2, r2, #0x10\n    ldr r0, [r4]\n    ldr r3, [r4, #0x14]\n    asr r1, r1, #0x10\n    asr r2, r2, #0x10\n    bl ManagedSprite_SetPositionXYWithSubscreenOffset\n    mov r0, #1\n    strb r0, [r4, #0x1b]\n    ldrb r0, [r4, #0x1d]\n    add r0, r0, #1\n    strb r0, [r4, #0x1d]\n    b _0226BEAA\n    ldrb r0, [r4, #0x1e]\n    add r0, r0, #1\n    strb r0, [r4, #0x1e]\n    ldrb r0, [r4, #0x1e]\n    cmp r0, #2\n    bls _0226BEAA\n    ldr r2, [r4, #0xc]\n    ldr r1, [r4, #8]\n    add r2, r2, #2\n    lsl r1, r1, #0x10\n    lsl r2, r2, #0x10\n    ldr r0, [r4]\n    ldr r3, [r4, #0x14]\n    asr r1, r1, #0x10\n    asr r2, r2, #0x10\n    bl ManagedSprite_SetPositionXYWithSubscreenOffset\n    mov r0, #0\n    strb r0, [r4, #0x1e]\n    ldrb r0, [r4, #0x1d]\n    add r0, r0, #1\n    strb r0, [r4, #0x1d]\n    b _0226BEAA\n    ldrb r0, [r4, #0x1e]\n    add r0, r0, #1\n    strb r0, [r4, #0x1e]\n    ldrb r0, [r4, #0x1e]\n    cmp r0, #2\n    bls _0226BEAA\n    add r0, r4, #0\n    bl ov12_0226BD38\n    mov r0, #0\n    strb r0, [r4, #0x1e]\n    ldrb r0, [r4, #0x1d]\n    add r0, r0, #1\n    strb r0, [r4, #0x1d]\n    ldr r0, [r4]\n    bl ManagedSprite_TickFrame\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0226BEB4: .word 0x00004650"
    );
    #endif
}

void ov12_0226BEB8(void) {
    /* Original at 0x0226BEB8 */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0\n    str r1, [r0, #0x10]\n    strb r1, [r0, #0x1c]\n    strb r1, [r0, #0x1d]\n    strb r1, [r0, #0x1e]\n    bx lr"
    );
    #endif
}
