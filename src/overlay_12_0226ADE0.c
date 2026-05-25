/* Decompiled from asm/overlay_12_0226ADE0.s */
#include "global.h"

void ov12_0226ADE0(void) {
    /* Original at 0x0226ADE0 */
    /* Requires manual decompilation - 64 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    add r5, r0, #0\n    add r4, r1, #0\n    mov r0, #8\n    mov r1, #5\n    add r7, r2, #0\n    bl NARC_New\n    add r6, r0, #0\n    str r6, [sp]\n    mov r0, #0x6e\n    str r0, [sp, #4]\n    mov r0, #0\n    str r0, [sp, #8]\n    mov r0, #1\n    str r0, [sp, #0xc]\n    str r0, [sp, #0x10]\n    ldr r0, _0226AE60 ; =0x00004E45\n    mov r1, #2\n    str r0, [sp, #0x14]\n    add r0, r7, #0\n    add r2, r5, #0\n    add r3, r4, #0\n    bl SpriteSystem_LoadPaletteBufferFromOpenNarc\n    mov r0, #1\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, _0226AE64 ; =0x00004FBF\n    mov r3, #0x55\n    str r0, [sp, #8]\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r6, #0\n    lsl r3, r3, #2\n    bl SpriteSystem_LoadCharResObjFromOpenNarc\n    mov r0, #1\n    str r0, [sp]\n    ldr r0, _0226AE68 ; =0x00004FB8\n    ldr r3, _0226AE6C ; =0x00000155\n    str r0, [sp, #4]\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r6, #0\n    bl SpriteSystem_LoadCellResObjFromOpenNarc\n    mov r0, #1\n    str r0, [sp]\n    ldr r0, _0226AE70 ; =0x00004FAD\n    ldr r3, _0226AE74 ; =0x00000156\n    str r0, [sp, #4]\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r6, #0\n    bl SpriteSystem_LoadAnimResObjFromOpenNarc\n    add r0, r6, #0\n    bl NARC_Delete\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0226AE60: .word 0x00004E45\n    _0226AE64: .word 0x00004FBF\n    _0226AE68: .word 0x00004FB8\n    _0226AE6C: .word 0x00000155\n    _0226AE70: .word 0x00004FAD\n    _0226AE74: .word 0x00000156"
    );
    #endif
}

void ov12_0226AE78(void) {
    /* Original at 0x0226AE78 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r1, _0226AE9C ; =0x00004FBF\n    add r4, r0, #0\n    bl SpriteManager_UnloadCharObjById\n    ldr r1, _0226AEA0 ; =0x00004E45\n    add r0, r4, #0\n    bl SpriteManager_UnloadPlttObjById\n    ldr r1, _0226AEA4 ; =0x00004FB8\n    add r0, r4, #0\n    bl SpriteManager_UnloadCellObjById\n    ldr r1, _0226AEA8 ; =0x00004FAD\n    add r0, r4, #0\n    bl SpriteManager_UnloadAnimObjById\n    pop {r4, pc}\n    _0226AE9C: .word 0x00004FBF\n    _0226AEA0: .word 0x00004E45\n    _0226AEA4: .word 0x00004FB8\n    _0226AEA8: .word 0x00004FAD"
    );
    #endif
}

void ov12_0226AEAC(void) {
    void *r4;
    r0 = 5;
    /* lsl r1, r0, #6 */
    Heap_Alloc(5);
    r2 = 5;
    r1 = 0;
    /* lsl r2, r2, #6 */
    r4 = r0 + 0;
    MI_CpuFill8();
    r0 = r4 + 0;
}

void ov12_0226AEC8(void) {
    /* Original at 0x0226AEC8 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #4]\n    cmp r0, #0\n    beq _0226AED6\n    bl GF_AssertFail\n    add r0, r4, #0\n    bl Heap_Free\n    pop {r4, pc}"
    );
    #endif
}

void ov12_0226AEE0(void) {
    /* Original at 0x0226AEE0 */
    /* Requires manual decompilation - 47 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x20\n    str r0, [sp, #0x14]\n    ldr r0, [sp, #0x38]\n    add r6, r1, #0\n    str r0, [sp, #0x38]\n    ldr r0, [sp, #0x3c]\n    str r2, [sp, #0x18]\n    str r0, [sp, #0x3c]\n    str r3, [sp, #0x1c]\n    bl ov12_0226AEAC\n    ldr r1, [sp, #0x3c]\n    ldr r2, [sp, #0x1c]\n    str r1, [sp]\n    ldr r3, [sp, #0x38]\n    add r1, r6, #0\n    add r7, r0, #0\n    bl ov12_0226AFEC\n    add r5, r7, #0\n    mov r4, #0\n    add r5, #0x1c\n    ldr r0, [sp, #0x14]\n    add r1, r6, #0\n    ldrb r0, [r0, r4]\n    bl ov12_0226B884\n    ldr r1, [sp, #0x1c]\n    ldr r3, [sp, #0x18]\n    str r1, [sp]\n    str r4, [sp, #4]\n    str r0, [sp, #8]\n    ldr r0, [sp, #0x38]\n    mov r1, #0x4f\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #0x3c]\n    lsl r1, r1, #2\n    str r0, [sp, #0x10]\n    add r0, r5, #0\n    add r1, r7, r1\n    add r2, r6, #0\n    bl ov12_0226B29C\n    add r4, r4, #1\n    add r5, #0x30\n    cmp r4, #6\n    blt _0226AF0E\n    add r0, r7, #0\n    add sp, #0x20\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov12_0226AF48(void) {
    /* Original at 0x0226AF48 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, [r0, #4]\n    cmp r1, #0\n    bne _0226AF66\n    mov r2, #0\n    ldr r1, [r0, #0x20]\n    cmp r1, #0\n    bne _0226AF5E\n    add r2, r2, #1\n    add r0, #0x30\n    cmp r2, #6\n    blt _0226AF50\n    cmp r2, #6\n    bne _0226AF66\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void ov12_0226AF6C(void) {
    /* Original at 0x0226AF6C */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    add r4, r1, #0\n    add r7, r2, #0\n    cmp r6, #0\n    bne _0226AF7C\n    bl GF_AssertFail\n    add r0, r6, #0\n    add r1, r4, #0\n    bl ov12_0226B144\n    add r5, r6, #0\n    mov r4, #0\n    add r5, #0x1c\n    add r6, #0x18\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r7, #0\n    add r3, r6, #0\n    bl ov12_0226B694\n    add r4, r4, #1\n    add r5, #0x30\n    cmp r4, #6\n    blt _0226AF8C\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov12_0226AFA4(void) {
    /* Original at 0x0226AFA4 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, [r0, #4]\n    cmp r1, #0\n    bne _0226AFC2\n    mov r2, #0\n    ldr r1, [r0, #0x20]\n    cmp r1, #0\n    bne _0226AFBA\n    add r2, r2, #1\n    add r0, #0x30\n    cmp r2, #6\n    blt _0226AFAC\n    cmp r2, #6\n    bne _0226AFC2\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void ov12_0226AFC8(void) {
    /* Original at 0x0226AFC8 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r0, #0\n    ldr r0, [r6]\n    bl Sprite_DeleteAndFreeResources\n    mov r4, #0\n    add r5, r6, #0\n    ldr r0, [r5, #0x1c]\n    bl Sprite_DeleteAndFreeResources\n    add r4, r4, #1\n    add r5, #0x30\n    cmp r4, #6\n    blt _0226AFD6\n    add r0, r6, #0\n    bl ov12_0226AEC8\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov12_0226AFEC(void) {
    /* Original at 0x0226AFEC */
    /* Requires manual decompilation - 71 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r0, [r5]\n    add r6, r1, #0\n    add r4, r2, #0\n    add r7, r3, #0\n    mov r1, #0\n    cmp r0, #0\n    bne _0226B006\n    ldr r0, [r5, #4]\n    cmp r0, #0\n    bne _0226B006\n    mov r1, #1\n    cmp r1, #0\n    bne _0226B00E\n    bl GF_AssertFail\n    add r0, r5, #0\n    mov r1, #0\n    mov r2, #0x1c\n    bl MI_CpuFill8\n    ldr r1, [sp, #0x18]\n    ldr r2, _0226B084 ; =ov12_0226EB38\n    add r0, r7, #0\n    bl SpriteSystem_NewSprite\n    str r0, [r5]\n    cmp r6, #0\n    ldr r0, [r5]\n    bne _0226B044\n    ldr r2, _0226B088 ; =ov12_0226EB28\n    lsl r3, r4, #1\n    ldrsh r2, [r2, r3]\n    mov r1, #0x16\n    lsl r1, r1, #4\n    bl ManagedSprite_SetPositionXY\n    ldr r0, [r5]\n    mov r1, #8\n    ldr r0, [r0]\n    bl Sprite_SetAnimCtrlSeq\n    b _0226B05C\n    ldr r2, _0226B08C ; =ov12_0226EB20\n    lsl r3, r4, #1\n    ldrsh r2, [r2, r3]\n    mov r1, #0x5f\n    mvn r1, r1\n    bl ManagedSprite_SetPositionXY\n    ldr r0, [r5]\n    mov r1, #7\n    ldr r0, [r0]\n    bl Sprite_SetAnimCtrlSeq\n    ldr r0, [r5]\n    ldr r0, [r0]\n    bl Sprite_TickFrame\n    str r6, [r5, #0xc]\n    mov r2, #0x7d\n    str r4, [r5, #0x10]\n    mov r0, #0\n    strb r0, [r5, #0x1a]\n    ldr r0, _0226B090 ; =ov12_0226B098\n    add r1, r5, #0\n    lsl r2, r2, #2\n    bl SysTask_CreateOnMainQueue\n    str r0, [r5, #4]\n    ldr r0, _0226B094 ; =0x00000711\n    bl PlaySE\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0226B084: .word ov12_0226EB38\n    _0226B088: .word ov12_0226EB28\n    _0226B08C: .word ov12_0226EB20\n    _0226B090: .word ov12_0226B098\n    _0226B094: .word 0x00000711"
    );
    #endif
}

void ov12_0226B098(void) {
    /* Original at 0x0226B098 */
    /* Requires manual decompilation - 80 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    add r4, r1, #0\n    ldrb r1, [r4, #0x1a]\n    cmp r1, #0\n    beq _0226B0AA\n    cmp r1, #1\n    beq _0226B0C6\n    b _0226B12E\n    add r1, sp, #0\n    ldr r0, [r4]\n    add r1, #2\n    add r2, sp, #0\n    bl ManagedSprite_GetPositionXY\n    add r1, sp, #0\n    mov r0, #2\n    ldrsh r0, [r1, r0]\n    lsl r0, r0, #8\n    str r0, [r4, #0x14]\n    ldrb r0, [r4, #0x1a]\n    add r0, r0, #1\n    strb r0, [r4, #0x1a]\n    ldr r0, [r4, #0xc]\n    ldr r1, [r4, #0x14]\n    cmp r0, #0\n    bne _0226B0FE\n    mov r0, #0x12\n    lsl r0, r0, #8\n    sub r1, r1, r0\n    mov r0, #0xe\n    lsl r0, r0, #0xc\n    str r1, [r4, #0x14]\n    cmp r1, r0\n    bgt _0226B0E6\n    str r0, [r4, #0x14]\n    ldrb r0, [r4, #0x1a]\n    add r0, r0, #1\n    strb r0, [r4, #0x1a]\n    ldr r2, [r4, #0x10]\n    ldr r1, [r4, #0x14]\n    lsl r3, r2, #1\n    ldr r2, _0226B13C ; =ov12_0226EB28\n    lsl r1, r1, #8\n    ldrsh r2, [r2, r3]\n    ldr r0, [r4]\n    asr r1, r1, #0x10\n    bl ManagedSprite_SetPositionXY\n    add sp, #4\n    pop {r3, r4, pc}\n    mov r0, #0x12\n    lsl r0, r0, #8\n    add r1, r1, r0\n    mov r0, #2\n    lsl r0, r0, #0xc\n    str r1, [r4, #0x14]\n    cmp r1, r0\n    blt _0226B116\n    str r0, [r4, #0x14]\n    ldrb r0, [r4, #0x1a]\n    add r0, r0, #1\n    strb r0, [r4, #0x1a]\n    ldr r2, [r4, #0x10]\n    ldr r1, [r4, #0x14]\n    lsl r3, r2, #1\n    ldr r2, _0226B140 ; =ov12_0226EB20\n    lsl r1, r1, #8\n    ldrsh r2, [r2, r3]\n    ldr r0, [r4]\n    asr r1, r1, #0x10\n    bl ManagedSprite_SetPositionXY\n    add sp, #4\n    pop {r3, r4, pc}\n    bl SysTask_Destroy\n    mov r0, #0\n    str r0, [r4, #4]\n    add sp, #4\n    pop {r3, r4, pc}\n    nop\n    _0226B13C: .word ov12_0226EB28\n    _0226B140: .word ov12_0226EB20"
    );
    #endif
}

void ov12_0226B144(void) {
    /* Original at 0x0226B144 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r5]\n    add r4, r1, #0\n    cmp r0, #0\n    beq _0226B156\n    ldr r0, [r5, #4]\n    cmp r0, #0\n    beq _0226B15A\n    bl GF_AssertFail\n    mov r0, #0\n    strb r0, [r5, #0x1a]\n    str r4, [r5, #8]\n    cmp r4, #0\n    bne _0226B168\n    mov r0, #4\n    b _0226B168\n    strb r0, [r5, #0x1b]\n    mov r2, #0x7d\n    ldr r0, _0226B17C ; =ov12_0226B180\n    add r1, r5, #0\n    lsl r2, r2, #2\n    bl SysTask_CreateOnMainQueue\n    str r0, [r5, #4]\n    pop {r3, r4, r5, pc}\n    nop\n    _0226B17C: .word ov12_0226B180"
    );
    #endif
}

void ov12_0226B180(void) {
    /* Original at 0x0226B180 */
    /* Requires manual decompilation - 130 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #8\n    add r4, r1, #0\n    add r5, r0, #0\n    ldrb r0, [r4, #0x1a]\n    cmp r0, #0\n    beq _0226B198\n    cmp r0, #1\n    beq _0226B1CE\n    cmp r0, #2\n    beq _0226B1FC\n    b _0226B27A\n    add r1, sp, #4\n    ldr r0, [r4]\n    add r1, #2\n    add r2, sp, #4\n    bl ManagedSprite_GetPositionXY\n    add r1, sp, #4\n    mov r0, #2\n    ldrsh r1, [r1, r0]\n    lsl r0, r0, #0xb\n    mov r2, #0x3f\n    lsl r1, r1, #8\n    str r1, [r4, #0x14]\n    strh r0, [r4, #0x18]\n    mov r0, #0x18\n    ldrsh r0, [r4, r0]\n    mov r1, #0\n    asr r3, r0, #8\n    mov r0, #0x10\n    sub r0, r0, r3\n    str r0, [sp]\n    ldr r0, _0226B28C ; =0x04000050\n    bl G2x_SetBlendAlpha_\n    ldrb r0, [r4, #0x1a]\n    add r0, r0, #1\n    strb r0, [r4, #0x1a]\n    ldrb r0, [r4, #0x1b]\n    cmp r0, #0\n    beq _0226B1DC\n    sub r0, r0, #1\n    add sp, #8\n    strb r0, [r4, #0x1b]\n    pop {r3, r4, r5, pc}\n    mov r0, #0x18\n    ldrsh r0, [r4, r0]\n    asr r1, r0, #8\n    mov r0, #0x10\n    sub r0, r0, r1\n    lsl r0, r0, #8\n    orr r1, r0\n    ldr r0, _0226B290 ; =0x04000052\n    strh r1, [r0]\n    ldr r0, [r4]\n    mov r1, #1\n    bl ManagedSprite_SetOamMode\n    ldrb r0, [r4, #0x1a]\n    add r0, r0, #1\n    strb r0, [r4, #0x1a]\n    ldr r0, [r4, #8]\n    cmp r0, #0\n    bne _0226B240\n    ldr r0, [r4, #0xc]\n    ldr r1, [r4, #0x14]\n    cmp r0, #0\n    bne _0226B226\n    mov r0, #1\n    lsl r0, r0, #0xa\n    sub r1, r1, r0\n    str r1, [r4, #0x14]\n    ldr r2, [r4, #0x10]\n    lsl r1, r1, #8\n    lsl r3, r2, #1\n    ldr r2, _0226B294 ; =ov12_0226EB28\n    ldr r0, [r4]\n    ldrsh r2, [r2, r3]\n    asr r1, r1, #0x10\n    bl ManagedSprite_SetPositionXY\n    b _0226B240\n    mov r0, #1\n    lsl r0, r0, #0xa\n    add r1, r1, r0\n    str r1, [r4, #0x14]\n    ldr r2, [r4, #0x10]\n    lsl r1, r1, #8\n    lsl r3, r2, #1\n    ldr r2, _0226B298 ; =ov12_0226EB20\n    ldr r0, [r4]\n    ldrsh r2, [r2, r3]\n    asr r1, r1, #0x10\n    bl ManagedSprite_SetPositionXY\n    mov r1, #0x18\n    ldrsh r2, [r4, r1]\n    add r0, r1, #0\n    add r0, #0xe8\n    sub r0, r2, r0\n    strh r0, [r4, #0x18]\n    ldrsh r0, [r4, r1]\n    cmp r0, #0\n    bgt _0226B264\n    mov r1, #0\n    strh r1, [r4, #0x18]\n    ldr r0, [r4]\n    ldr r0, [r0]\n    bl thunk_Sprite_SetDrawFlag\n    ldrb r0, [r4, #0x1a]\n    add r0, r0, #1\n    strb r0, [r4, #0x1a]\n    mov r0, #0x18\n    ldrsh r0, [r4, r0]\n    add sp, #8\n    asr r1, r0, #8\n    mov r0, #0x10\n    sub r0, r0, r1\n    lsl r0, r0, #8\n    orr r1, r0\n    ldr r0, _0226B290 ; =0x04000052\n    strh r1, [r0]\n    pop {r3, r4, r5, pc}\n    bl BattleSystem_SetDefaultBlend\n    add r0, r5, #0\n    bl SysTask_Destroy\n    mov r0, #0\n    str r0, [r4, #4]\n    add sp, #8\n    pop {r3, r4, r5, pc}\n    _0226B28C: .word 0x04000050\n    _0226B290: .word 0x04000052\n    _0226B294: .word ov12_0226EB28\n    _0226B298: .word ov12_0226EB20"
    );
    #endif
}

void ov12_0226B29C(void) {
    /* Original at 0x0226B29C */
    /* Requires manual decompilation - 120 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r0, [r5]\n    add r7, r1, #0\n    add r6, r2, #0\n    mov r1, #0\n    str r3, [sp]\n    ldr r4, [sp, #0x1c]\n    cmp r0, #0\n    bne _0226B2B8\n    ldr r0, [r5, #4]\n    cmp r0, #0\n    bne _0226B2B8\n    mov r1, #1\n    cmp r1, #0\n    bne _0226B2C0\n    bl GF_AssertFail\n    add r0, r5, #0\n    mov r1, #0\n    mov r2, #0x30\n    bl MI_CpuFill8\n    ldr r0, [sp, #0x24]\n    ldr r1, [sp, #0x28]\n    ldr r2, _0226B390 ; =ov12_0226EB6C\n    bl SpriteSystem_NewSprite\n    str r0, [r5]\n    cmp r6, #0\n    ldr r0, [r5]\n    bne _0226B2EE\n    ldr r2, [sp, #0x18]\n    mov r1, #0x45\n    lsl r3, r2, #1\n    ldr r2, _0226B394 ; =ov12_0226EB30\n    lsl r1, r1, #2\n    ldrsh r2, [r2, r3]\n    bl ManagedSprite_SetPositionXY\n    b _0226B2FE\n    ldr r2, [sp, #0x18]\n    mov r1, #0x13\n    lsl r3, r2, #1\n    ldr r2, _0226B398 ; =ov12_0226EB18\n    mvn r1, r1\n    ldrsh r2, [r2, r3]\n    bl ManagedSprite_SetPositionXY\n    ldr r0, [r5]\n    ldr r1, [sp, #0x20]\n    ldr r0, [r0]\n    bl Sprite_SetAnimCtrlSeq\n    ldr r0, [r5]\n    ldr r0, [r0]\n    bl Sprite_TickFrame\n    add r0, r5, #0\n    str r6, [r5, #8]\n    add r0, #0x2d\n    strb r4, [r0]\n    ldr r0, [sp, #0x18]\n    str r0, [r5, #0xc]\n    ldr r0, [sp, #0x20]\n    bl ov12_0226B8C4\n    add r1, r5, #0\n    add r1, #0x2e\n    strb r0, [r1]\n    ldr r0, [sp, #0x20]\n    str r7, [r5, #0x14]\n    cmp r0, #6\n    bne _0226B334\n    ldr r0, _0226B39C ; =0x00000713\n    b _0226B336\n    ldr r0, _0226B3A0 ; =0x00000712\n    strh r0, [r5, #0x2a]\n    cmp r6, #0\n    bne _0226B34A\n    lsl r0, r4, #4\n    add r0, #0xa2\n    str r0, [r5, #0x20]\n    mov r0, #0xf\n    mul r0, r4\n    add r0, #0x9c\n    b _0226B35C\n    lsl r1, r4, #4\n    mov r0, #0x5e\n    sub r0, r0, r1\n    str r0, [r5, #0x20]\n    mov r0, #0xf\n    add r1, r4, #0\n    mul r1, r0\n    mov r0, #0x64\n    sub r0, r0, r1\n    str r0, [r5, #0x24]\n    add r0, r5, #0\n    mov r1, #0\n    add r0, #0x2c\n    strb r1, [r0]\n    ldr r0, [sp]\n    ldr r2, _0226B3A4 ; =0x000001F5\n    cmp r0, #0\n    bne _0226B382\n    lsl r0, r4, #1\n    add r0, r4, r0\n    add r0, r0, #5\n    strh r0, [r5, #0x28]\n    ldr r0, _0226B3A8 ; =ov12_0226B3B0\n    add r1, r5, #0\n    bl SysTask_CreateOnMainQueue\n    str r0, [r5, #4]\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, _0226B3AC ; =ov12_0226B5B0\n    strh r1, [r5, #0x28]\n    add r1, r5, #0\n    bl SysTask_CreateOnMainQueue\n    str r0, [r5, #4]\n    pop {r3, r4, r5, r6, r7, pc}\n    _0226B390: .word ov12_0226EB6C\n    _0226B394: .word ov12_0226EB30\n    _0226B398: .word ov12_0226EB18\n    _0226B39C: .word 0x00000713\n    _0226B3A0: .word 0x00000712\n    _0226B3A4: .word 0x000001F5\n    _0226B3A8: .word ov12_0226B3B0\n    _0226B3AC: .word ov12_0226B5B0"
    );
    #endif
}

void ov12_0226B3B0(void) {
    /* Original at 0x0226B3B0 */
    /* Requires manual decompilation - 234 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    add r0, r4, #0\n    add r0, #0x2c\n    ldrb r0, [r0]\n    cmp r0, #6\n    bls _0226B3C2\n    b _0226B592\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0226B3CE: ; jump table\n    add r1, sp, #0\n    ldr r0, [r4]\n    add r1, #2\n    add r2, sp, #0\n    bl ManagedSprite_GetPositionXY\n    add r1, sp, #0\n    mov r0, #2\n    ldrsh r0, [r1, r0]\n    lsl r0, r0, #8\n    str r0, [r4, #0x1c]\n    add r0, r4, #0\n    add r0, #0x2c\n    ldrb r0, [r0]\n    add r1, r0, #1\n    add r0, r4, #0\n    add r0, #0x2c\n    strb r1, [r0]\n    mov r0, #0x28\n    ldrsh r0, [r4, r0]\n    cmp r0, #0\n    ble _0226B40E\n    sub r0, r0, #1\n    strh r0, [r4, #0x28]\n    pop {r3, r4, r5, pc}\n    ldr r0, [r4, #8]\n    ldr r1, [r4, #0x1c]\n    cmp r0, #0\n    bne _0226B452\n    mov r0, #0x12\n    lsl r0, r0, #8\n    sub r1, r1, r0\n    str r1, [r4, #0x1c]\n    ldr r0, [r4, #0x24]\n    lsl r0, r0, #8\n    cmp r1, r0\n    bgt _0226B43C\n    str r0, [r4, #0x1c]\n    ldrh r0, [r4, #0x2a]\n    bl PlaySE\n    add r0, r4, #0\n    add r0, #0x2c\n    ldrb r0, [r0]\n    add r1, r0, #1\n    add r0, r4, #0\n    add r0, #0x2c\n    strb r1, [r0]\n    ldr r2, [r4, #0xc]\n    ldr r1, [r4, #0x1c]\n    lsl r3, r2, #1\n    ldr r2, _0226B5A8 ; =ov12_0226EB30\n    lsl r1, r1, #8\n    ldrsh r2, [r2, r3]\n    ldr r0, [r4]\n    asr r1, r1, #0x10\n    bl ManagedSprite_SetPositionXY\n    b _0226B486\n    mov r0, #0x12\n    lsl r0, r0, #8\n    add r1, r1, r0\n    str r1, [r4, #0x1c]\n    ldr r0, [r4, #0x24]\n    lsl r0, r0, #8\n    cmp r1, r0\n    blt _0226B472\n    str r0, [r4, #0x1c]\n    add r0, r4, #0\n    add r0, #0x2c\n    ldrb r0, [r0]\n    add r1, r0, #1\n    add r0, r4, #0\n    add r0, #0x2c\n    strb r1, [r0]\n    ldr r2, [r4, #0xc]\n    ldr r1, [r4, #0x1c]\n    lsl r3, r2, #1\n    ldr r2, _0226B5AC ; =ov12_0226EB18\n    lsl r1, r1, #8\n    ldrsh r2, [r2, r3]\n    ldr r0, [r4]\n    asr r1, r1, #0x10\n    bl ManagedSprite_SetPositionXY\n    ldr r0, [r4]\n    ldr r0, [r0]\n    bl Sprite_TickFrame\n    pop {r3, r4, r5, pc}\n    ldr r1, [r4, #0x14]\n    mov r0, #0\n    ldrsb r0, [r1, r0]\n    add r0, r0, #1\n    strb r0, [r1]\n    add r0, r4, #0\n    add r0, #0x2c\n    ldrb r0, [r0]\n    add r1, r0, #1\n    add r0, r4, #0\n    add r0, #0x2c\n    strb r1, [r0]\n    ldr r1, [r4, #0x14]\n    mov r0, #0\n    ldrsb r0, [r1, r0]\n    cmp r0, #6\n    beq _0226B4BC\n    ldr r0, [r4]\n    ldr r0, [r0]\n    bl Sprite_TickFrame\n    pop {r3, r4, r5, pc}\n    ldr r0, [r4, #8]\n    cmp r0, #0\n    ldr r0, [r4]\n    bne _0226B4CE\n    ldr r0, [r0]\n    mov r1, #1\n    bl Sprite_SetAnimationFrame\n    b _0226B4D6\n    ldr r0, [r0]\n    mov r1, #1\n    bl Sprite_SetAnimationFrame\n    mov r0, #0\n    strh r0, [r4, #0x28]\n    add r0, r4, #0\n    add r0, #0x2c\n    ldrb r0, [r0]\n    add r1, r0, #1\n    add r0, r4, #0\n    add r0, #0x2c\n    strb r1, [r0]\n    mov r0, #0x28\n    ldrsh r1, [r4, r0]\n    add r1, r1, #1\n    strh r1, [r4, #0x28]\n    ldrsh r0, [r4, r0]\n    cmp r0, #0\n    blt _0226B5A6\n    add r1, r4, #0\n    ldr r0, [r4]\n    add r1, #0x2e\n    ldrb r1, [r1]\n    ldr r0, [r0]\n    bl Sprite_SetAnimCtrlSeq\n    mov r0, #0\n    strh r0, [r4, #0x28]\n    add r0, r4, #0\n    add r0, #0x2c\n    ldrb r0, [r0]\n    add r1, r0, #1\n    add r0, r4, #0\n    add r0, #0x2c\n    strb r1, [r0]\n    ldr r0, [r4, #8]\n    ldr r1, [r4, #0x1c]\n    cmp r0, #0\n    bne _0226B554\n    mov r0, #6\n    lsl r0, r0, #8\n    add r1, r1, r0\n    str r1, [r4, #0x1c]\n    ldr r0, [r4, #0x20]\n    lsl r0, r0, #8\n    cmp r1, r0\n    blt _0226B53E\n    str r0, [r4, #0x1c]\n    add r0, r4, #0\n    add r0, #0x2c\n    ldrb r0, [r0]\n    add r1, r0, #1\n    add r0, r4, #0\n    add r0, #0x2c\n    strb r1, [r0]\n    ldr r2, [r4, #0xc]\n    ldr r1, [r4, #0x1c]\n    lsl r3, r2, #1\n    ldr r2, _0226B5A8 ; =ov12_0226EB30\n    lsl r1, r1, #8\n    ldrsh r2, [r2, r3]\n    ldr r0, [r4]\n    asr r1, r1, #0x10\n    bl ManagedSprite_SetPositionXY\n    b _0226B588\n    mov r0, #6\n    lsl r0, r0, #8\n    sub r1, r1, r0\n    str r1, [r4, #0x1c]\n    ldr r0, [r4, #0x20]\n    lsl r0, r0, #8\n    cmp r1, r0\n    bgt _0226B574\n    str r0, [r4, #0x1c]\n    add r0, r4, #0\n    add r0, #0x2c\n    ldrb r0, [r0]\n    add r1, r0, #1\n    add r0, r4, #0\n    add r0, #0x2c\n    strb r1, [r0]\n    ldr r2, [r4, #0xc]\n    ldr r1, [r4, #0x1c]\n    lsl r3, r2, #1\n    ldr r2, _0226B5AC ; =ov12_0226EB18\n    lsl r1, r1, #8\n    ldrsh r2, [r2, r3]\n    ldr r0, [r4]\n    asr r1, r1, #0x10\n    bl ManagedSprite_SetPositionXY\n    ldr r0, [r4]\n    ldr r0, [r0]\n    bl Sprite_TickFrame\n    pop {r3, r4, r5, pc}\n    ldr r0, [r4]\n    mov r1, #0\n    ldr r0, [r0]\n    bl Sprite_SetAnimationFrame\n    add r0, r5, #0\n    bl SysTask_Destroy\n    mov r0, #0\n    str r0, [r4, #4]\n    pop {r3, r4, r5, pc}\n    _0226B5A8: .word ov12_0226EB30\n    _0226B5AC: .word ov12_0226EB18"
    );
    #endif
}

void ov12_0226B5B0(void) {
    /* Original at 0x0226B5B0 */
    /* Requires manual decompilation - 107 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    add r4, r1, #0\n    add r1, #0x2c\n    ldrb r1, [r1]\n    cmp r1, #0\n    beq _0226B5C8\n    cmp r1, #1\n    beq _0226B5F6\n    cmp r1, #2\n    beq _0226B606\n    b _0226B67E\n    add r1, sp, #0\n    ldr r0, [r4]\n    add r1, #2\n    add r2, sp, #0\n    bl ManagedSprite_GetPositionXY\n    add r1, sp, #0\n    mov r0, #2\n    ldrsh r0, [r1, r0]\n    mov r1, #0\n    lsl r0, r0, #8\n    str r0, [r4, #0x1c]\n    ldr r0, [r4]\n    ldr r0, [r0]\n    bl Sprite_SetAnimationFrame\n    add r0, r4, #0\n    add r0, #0x2c\n    ldrb r0, [r0]\n    add r1, r0, #1\n    add r0, r4, #0\n    add r0, #0x2c\n    strb r1, [r0]\n    mov r0, #0x28\n    ldrsh r0, [r4, r0]\n    cmp r0, #0\n    ble _0226B606\n    sub r0, r0, #1\n    add sp, #4\n    strh r0, [r4, #0x28]\n    pop {r3, r4, pc}\n    ldr r0, [r4, #8]\n    ldr r1, [r4, #0x1c]\n    cmp r0, #0\n    bne _0226B646\n    mov r0, #0x12\n    lsl r0, r0, #8\n    sub r1, r1, r0\n    str r1, [r4, #0x1c]\n    ldr r0, [r4, #0x20]\n    lsl r0, r0, #8\n    cmp r1, r0\n    bgt _0226B62E\n    str r0, [r4, #0x1c]\n    add r0, r4, #0\n    add r0, #0x2c\n    ldrb r0, [r0]\n    add r1, r0, #1\n    add r0, r4, #0\n    add r0, #0x2c\n    strb r1, [r0]\n    ldr r2, [r4, #0xc]\n    ldr r1, [r4, #0x1c]\n    lsl r3, r2, #1\n    ldr r2, _0226B68C ; =ov12_0226EB30\n    lsl r1, r1, #8\n    ldrsh r2, [r2, r3]\n    ldr r0, [r4]\n    asr r1, r1, #0x10\n    bl ManagedSprite_SetPositionXY\n    add sp, #4\n    pop {r3, r4, pc}\n    mov r0, #0x12\n    lsl r0, r0, #8\n    add r1, r1, r0\n    str r1, [r4, #0x1c]\n    ldr r0, [r4, #0x20]\n    lsl r0, r0, #8\n    cmp r1, r0\n    blt _0226B666\n    str r0, [r4, #0x1c]\n    add r0, r4, #0\n    add r0, #0x2c\n    ldrb r0, [r0]\n    add r1, r0, #1\n    add r0, r4, #0\n    add r0, #0x2c\n    strb r1, [r0]\n    ldr r2, [r4, #0xc]\n    ldr r1, [r4, #0x1c]\n    lsl r3, r2, #1\n    ldr r2, _0226B690 ; =ov12_0226EB18\n    lsl r1, r1, #8\n    ldrsh r2, [r2, r3]\n    ldr r0, [r4]\n    asr r1, r1, #0x10\n    bl ManagedSprite_SetPositionXY\n    add sp, #4\n    pop {r3, r4, pc}\n    bl SysTask_Destroy\n    mov r0, #0\n    str r0, [r4, #4]\n    add sp, #4\n    pop {r3, r4, pc}\n    nop\n    _0226B68C: .word ov12_0226EB30\n    _0226B690: .word ov12_0226EB18"
    );
    #endif
}

void ov12_0226B694(void) {
    /* Original at 0x0226B694 */
    /* Requires manual decompilation - 44 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r0, [r5]\n    add r6, r1, #0\n    add r7, r2, #0\n    add r4, r3, #0\n    cmp r0, #0\n    beq _0226B6AA\n    ldr r0, [r5, #4]\n    cmp r0, #0\n    beq _0226B6AE\n    bl GF_AssertFail\n    add r0, r5, #0\n    mov r1, #0\n    add r0, #0x2c\n    strb r1, [r0]\n    cmp r7, #0\n    str r4, [r5, #0x18]\n    ldr r2, _0226B6EC ; =0x000001F5\n    bne _0226B6D8\n    lsl r0, r6, #1\n    add r0, r6, r0\n    strh r0, [r5, #0x28]\n    add r0, r5, #0\n    mov r1, #4\n    add r0, #0x2f\n    strb r1, [r0]\n    ldr r0, _0226B6F0 ; =ov12_0226B6F8\n    add r1, r5, #0\n    bl SysTask_CreateOnMainQueue\n    str r0, [r5, #4]\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r5, #0\n    strh r1, [r5, #0x28]\n    add r0, #0x2f\n    strb r1, [r0]\n    ldr r0, _0226B6F4 ; =ov12_0226B82C\n    add r1, r5, #0\n    bl SysTask_CreateOnMainQueue\n    str r0, [r5, #4]\n    pop {r3, r4, r5, r6, r7, pc}\n    _0226B6EC: .word 0x000001F5\n    _0226B6F0: .word ov12_0226B6F8\n    _0226B6F4: .word ov12_0226B82C"
    );
    #endif
}

void ov12_0226B6F8(void) {
    /* Original at 0x0226B6F8 */
    /* Requires manual decompilation - 143 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    ldr r1, [r4, #0x18]\n    add r5, r0, #0\n    mov r0, #0\n    ldrsh r1, [r1, r0]\n    cmp r1, #0\n    bne _0226B712\n    add r0, r4, #0\n    mov r1, #0x64\n    add r0, #0x2c\n    strb r1, [r0]\n    b _0226B73A\n    mov r0, #1\n    lsl r0, r0, #0xc\n    cmp r1, r0\n    bge _0226B73A\n    add r0, r4, #0\n    add r0, #0x2c\n    ldrb r0, [r0]\n    cmp r0, #0\n    beq _0226B73A\n    ldr r0, [r4]\n    cmp r0, #0\n    beq _0226B73A\n    bl ManagedSprite_GetOamMode\n    cmp r0, #1\n    beq _0226B73A\n    ldr r0, [r4]\n    mov r1, #1\n    bl ManagedSprite_SetOamMode\n    add r0, r4, #0\n    add r0, #0x2c\n    ldrb r0, [r0]\n    cmp r0, #2\n    bgt _0226B754\n    cmp r0, #0\n    blt _0226B808\n    beq _0226B758\n    cmp r0, #1\n    beq _0226B77C\n    cmp r0, #2\n    beq _0226B7A2\n    b _0226B808\n    cmp r0, #0x64\n    b _0226B808\n    add r1, sp, #0\n    ldr r0, [r4]\n    add r1, #2\n    add r2, sp, #0\n    bl ManagedSprite_GetPositionXY\n    add r1, sp, #0\n    mov r0, #2\n    ldrsh r0, [r1, r0]\n    lsl r0, r0, #8\n    str r0, [r4, #0x1c]\n    add r0, r4, #0\n    add r0, #0x2c\n    ldrb r0, [r0]\n    add r1, r0, #1\n    add r0, r4, #0\n    add r0, #0x2c\n    strb r1, [r0]\n    add r0, r4, #0\n    add r0, #0x2f\n    ldrb r0, [r0]\n    cmp r0, #0\n    beq _0226B794\n    add r0, r4, #0\n    add r0, #0x2f\n    ldrb r0, [r0]\n    add r4, #0x2f\n    sub r0, r0, #1\n    strb r0, [r4]\n    pop {r3, r4, r5, pc}\n    mov r0, #0x28\n    ldrsh r0, [r4, r0]\n    cmp r0, #0\n    ble _0226B7A2\n    sub r0, r0, #1\n    strh r0, [r4, #0x28]\n    pop {r3, r4, r5, pc}\n    ldr r0, [r4, #8]\n    ldr r1, [r4, #0x1c]\n    cmp r0, #0\n    bne _0226B7C6\n    mov r0, #3\n    lsl r0, r0, #0xa\n    sub r1, r1, r0\n    str r1, [r4, #0x1c]\n    ldr r2, [r4, #0xc]\n    lsl r1, r1, #8\n    lsl r3, r2, #1\n    ldr r2, _0226B820 ; =ov12_0226EB30\n    ldr r0, [r4]\n    ldrsh r2, [r2, r3]\n    asr r1, r1, #0x10\n    bl ManagedSprite_SetPositionXY\n    b _0226B7E0\n    mov r0, #3\n    lsl r0, r0, #0xa\n    add r1, r1, r0\n    str r1, [r4, #0x1c]\n    ldr r2, [r4, #0xc]\n    lsl r1, r1, #8\n    lsl r3, r2, #1\n    ldr r2, _0226B824 ; =ov12_0226EB18\n    ldr r0, [r4]\n    ldrsh r2, [r2, r3]\n    asr r1, r1, #0x10\n    bl ManagedSprite_SetPositionXY\n    ldr r1, [r4, #0x1c]\n    ldr r0, _0226B828 ; =0xFFFFF000\n    cmp r1, r0\n    blt _0226B7F0\n    mov r0, #0x11\n    lsl r0, r0, #0xc\n    cmp r1, r0\n    ble _0226B7FE\n    add r0, r4, #0\n    add r0, #0x2c\n    ldrb r0, [r0]\n    add r1, r0, #1\n    add r0, r4, #0\n    add r0, #0x2c\n    strb r1, [r0]\n    ldr r0, [r4]\n    ldr r0, [r0]\n    bl Sprite_TickFrame\n    pop {r3, r4, r5, pc}\n    ldr r0, [r4]\n    mov r1, #0\n    ldr r0, [r0]\n    bl thunk_Sprite_SetDrawFlag\n    add r0, r5, #0\n    bl SysTask_Destroy\n    mov r0, #0\n    str r0, [r4, #4]\n    pop {r3, r4, r5, pc}\n    nop\n    _0226B820: .word ov12_0226EB30\n    _0226B824: .word ov12_0226EB18\n    _0226B828: .word 0xFFFFF000"
    );
    #endif
}

void ov12_0226B82C(void) {
    /* Original at 0x0226B82C */
    /* Requires manual decompilation - 40 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    ldr r1, [r4, #0x18]\n    add r5, r0, #0\n    mov r0, #0\n    ldrsh r0, [r1, r0]\n    cmp r0, #0\n    bne _0226B844\n    add r0, r4, #0\n    mov r1, #0x64\n    add r0, #0x2c\n    strb r1, [r0]\n    add r0, r4, #0\n    add r0, #0x2c\n    ldrb r0, [r0]\n    cmp r0, #0\n    beq _0226B856\n    cmp r0, #1\n    beq _0226B880\n    cmp r0, #0x64\n    b _0226B86C\n    ldr r0, [r4]\n    mov r1, #1\n    bl ManagedSprite_SetOamMode\n    add r0, r4, #0\n    add r0, #0x2c\n    ldrb r0, [r0]\n    add r4, #0x2c\n    add r0, r0, #1\n    strb r0, [r4]\n    pop {r3, r4, r5, pc}\n    ldr r0, [r4]\n    mov r1, #0\n    ldr r0, [r0]\n    bl thunk_Sprite_SetDrawFlag\n    add r0, r5, #0\n    bl SysTask_Destroy\n    mov r0, #0\n    str r0, [r4, #4]\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov12_0226B884(void) {
    /* Original at 0x0226B884 */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "cmp r0, #3\n    bhi _0226B89C\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0226B894: ; jump table\n    mov r0, #6\n    bx lr\n    cmp r1, #0\n    bne _0226B8A8\n    mov r0, #3\n    bx lr\n    mov r0, #0\n    bx lr\n    cmp r1, #0\n    bne _0226B8B4\n    mov r0, #5\n    bx lr\n    mov r0, #2\n    bx lr\n    cmp r1, #0\n    bne _0226B8C0\n    mov r0, #4\n    bx lr\n    mov r0, #1\n    bx lr"
    );
    #endif
}

void ov12_0226B8C4(void) {
    /* Original at 0x0226B8C4 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "cmp r0, #6\n    bhi _0226B8FA\n    add r1, r0, r0\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _0226B8D4: ; jump table\n    bx lr\n    mov r0, #0\n    bx lr\n    mov r0, #3\n    bx lr\n    mov r0, #2\n    bx lr\n    mov r0, #5\n    bx lr\n    mov r0, #1\n    bx lr\n    mov r0, #4\n    bx lr"
    );
    #endif
}
