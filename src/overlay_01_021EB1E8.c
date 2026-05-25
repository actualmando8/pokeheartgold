/* Decompiled from asm/overlay_01_021EB1E8.s */
#include "global.h"

void ov01_021EB1E8(void) {
    /* Original at 0x021EB1E8 */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0x62\n    mov r2, #1\n    lsl r1, r1, #2\n    str r2, [r0, r1]\n    bx lr"
    );
    #endif
}

void ov01_021EB1F4(void) {
    /* Original at 0x021EB1F4 */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r0, #4\n    mov r1, #0x18\n    bl Heap_Alloc\n    add r4, r0, #0\n    add r2, r4, #0\n    mov r1, #0x18\n    mov r0, #0\n    strb r0, [r2]\n    add r2, r2, #1\n    sub r1, r1, #1\n    bne _021EB208\n    add r0, r5, #0\n    bl ov01_021EB64C\n    str r0, [r4]\n    mov r1, #0\n    str r1, [r4, #4]\n    str r1, [r4, #8]\n    mov r0, #6\n    str r0, [r4, #0xc]\n    str r1, [r4, #0x14]\n    mov r0, #0xe\n    str r0, [r4, #0x10]\n    mov r0, #0x10\n    mov r1, #1\n    bl GfGfx_EngineATogglePlanes\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_021EB234(void) {
    /* Original at 0x021EB234 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x14]\n    cmp r0, #0\n    beq _021EB242\n    bl SysTask_Destroy\n    add r0, r4, #0\n    bl ov01_021EB68C\n    add r2, r4, #0\n    mov r1, #0x18\n    mov r0, #0\n    strb r0, [r2]\n    add r2, r2, #1\n    sub r1, r1, #1\n    bne _021EB24E\n    add r0, r4, #0\n    bl Heap_Free\n    pop {r4, pc}"
    );
    #endif
}

void ov01_021EB260(void) {
    /* Original at 0x021EB260 */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0xc]\n    add r4, r1, #0\n    cmp r0, #6\n    beq _021EB270\n    bl GF_AssertFail\n    cmp r4, #0xe\n    blt _021EB278\n    bl GF_AssertFail\n    ldr r2, [r5, #4]\n    cmp r2, r4\n    beq _021EB2B4\n    ldr r0, [r5]\n    mov r1, #8\n    bl ov01_021EB700\n    cmp r0, #0\n    bne _021EB28E\n    bl GF_AssertFail\n    ldr r0, [r5]\n    mov r1, #0\n    add r2, r4, #0\n    bl ov01_021EB700\n    cmp r0, #0\n    bne _021EB2A0\n    bl GF_AssertFail\n    ldr r0, [r5]\n    mov r1, #3\n    add r2, r4, #0\n    bl ov01_021EB700\n    cmp r0, #0\n    bne _021EB2B2\n    bl GF_AssertFail\n    str r4, [r5, #4]\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void FieldWeatherUpdate_UsedFlash(void) {
    /* Original at 0x021EB2B8 */
    /* Requires manual decompilation - 43 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    cmp r4, #0xe\n    blt _021EB2C6\n    bl GF_AssertFail\n    ldr r0, [r5, #0xc]\n    cmp r0, #6\n    beq _021EB2D2\n    str r4, [r5, #0x10]\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    ldr r0, [r5, #4]\n    cmp r0, r4\n    bne _021EB2DC\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    ldr r0, [r5, #0x14]\n    cmp r0, #0\n    beq _021EB2E6\n    bl GF_AssertFail\n    str r4, [r5, #8]\n    ldr r0, [r5, #4]\n    add r1, r4, #0\n    bl ov01_021EB4B4\n    cmp r0, #0\n    bne _021EB302\n    ldr r0, _021EB314 ; =ov01_021EB320\n    mov r2, #0\n    add r1, r5, #0\n    str r2, [r5, #0xc]\n    bl SysTask_CreateOnMainQueue\n    b _021EB30E\n    ldr r0, _021EB318 ; =ov01_021EB3F0\n    mov r2, #0\n    add r1, r5, #0\n    str r2, [r5, #0xc]\n    bl SysTask_CreateOnMainQueue\n    str r0, [r5, #0x14]\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    _021EB314: .word ov01_021EB320\n    _021EB318: .word ov01_021EB3F0"
    );
    #endif
}

void ov01_021EB31C(void) {
    /* Original at 0x021EB31C */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0, #4]\n    bx lr"
    );
    #endif
}

void ov01_021EB320(void) {
    /* Original at 0x021EB320 */
    /* Requires manual decompilation - 87 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    ldr r1, [r4, #0xc]\n    cmp r1, #5\n    bhi _021EB3EE\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _021EB336: ; jump table\n    ldr r0, [r4]\n    ldr r2, [r4, #4]\n    mov r1, #5\n    bl ov01_021EB700\n    cmp r0, #0\n    bne _021EB354\n    bl GF_AssertFail\n    ldr r0, [r4, #0xc]\n    add r0, r0, #1\n    str r0, [r4, #0xc]\n    pop {r4, pc}\n    ldr r0, [r4]\n    ldr r1, [r4, #4]\n    bl ov01_021EB804\n    cmp r0, #3\n    beq _021EB3EE\n    ldr r0, [r4]\n    ldr r2, [r4, #4]\n    mov r1, #8\n    bl ov01_021EB700\n    cmp r0, #0\n    bne _021EB37A\n    bl GF_AssertFail\n    ldr r0, [r4, #0xc]\n    add r0, r0, #1\n    str r0, [r4, #0xc]\n    pop {r4, pc}\n    ldr r0, [r4]\n    ldr r2, [r4, #8]\n    mov r1, #1\n    bl ov01_021EB700\n    cmp r0, #0\n    bne _021EB394\n    bl GF_AssertFail\n    ldr r0, [r4, #0xc]\n    add r0, r0, #1\n    str r0, [r4, #0xc]\n    pop {r4, pc}\n    ldr r0, [r4]\n    ldr r1, [r4, #8]\n    bl ov01_021EB804\n    cmp r0, #1\n    beq _021EB3EE\n    ldr r0, [r4, #0xc]\n    add r0, r0, #1\n    str r0, [r4, #0xc]\n    pop {r4, pc}\n    ldr r0, [r4]\n    ldr r2, [r4, #8]\n    mov r1, #2\n    bl ov01_021EB700\n    cmp r0, #0\n    bne _021EB3C2\n    bl GF_AssertFail\n    ldr r0, [r4, #0xc]\n    add r0, r0, #1\n    str r0, [r4, #0xc]\n    ldr r0, [r4, #8]\n    str r0, [r4, #4]\n    mov r0, #0\n    str r0, [r4, #8]\n    pop {r4, pc}\n    mov r1, #6\n    str r1, [r4, #0xc]\n    mov r1, #0\n    str r1, [r4, #0x14]\n    bl SysTask_Destroy\n    ldr r1, [r4, #0x10]\n    cmp r1, #0xe\n    beq _021EB3EE\n    add r0, r4, #0\n    bl FieldWeatherUpdate_UsedFlash\n    mov r0, #0xe\n    str r0, [r4, #0x10]\n    pop {r4, pc}"
    );
    #endif
}

void ov01_021EB3F0(void) {
    /* Original at 0x021EB3F0 */
    /* Requires manual decompilation - 82 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    ldr r1, [r4, #0xc]\n    cmp r1, #4\n    bhi _021EB4B2\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _021EB406: ; jump table\n    ldr r0, [r4]\n    ldr r2, [r4, #8]\n    mov r1, #1\n    bl ov01_021EB700\n    cmp r0, #0\n    bne _021EB422\n    bl GF_AssertFail\n    ldr r0, [r4, #0xc]\n    add r0, r0, #1\n    str r0, [r4, #0xc]\n    pop {r4, pc}\n    ldr r0, [r4]\n    ldr r1, [r4, #8]\n    bl ov01_021EB804\n    cmp r0, #1\n    beq _021EB4B2\n    ldr r0, [r4, #0xc]\n    add r0, r0, #1\n    str r0, [r4, #0xc]\n    pop {r4, pc}\n    ldr r0, [r4]\n    ldr r2, [r4, #4]\n    mov r1, #7\n    bl ov01_021EB700\n    cmp r0, #0\n    bne _021EB450\n    bl GF_AssertFail\n    ldr r0, [r4]\n    ldr r2, [r4, #8]\n    mov r1, #4\n    bl ov01_021EB700\n    cmp r0, #0\n    bne _021EB462\n    bl GF_AssertFail\n    ldr r0, [r4, #0xc]\n    add r0, r0, #1\n    str r0, [r4, #0xc]\n    pop {r4, pc}\n    ldr r0, [r4]\n    ldr r1, [r4, #4]\n    bl ov01_021EB804\n    cmp r0, #3\n    beq _021EB4B2\n    ldr r0, [r4]\n    ldr r2, [r4, #4]\n    mov r1, #8\n    bl ov01_021EB700\n    cmp r0, #0\n    bne _021EB488\n    bl GF_AssertFail\n    ldr r0, [r4, #0xc]\n    add r0, r0, #1\n    str r0, [r4, #0xc]\n    pop {r4, pc}\n    ldr r1, [r4, #8]\n    mov r2, #0\n    str r1, [r4, #4]\n    str r2, [r4, #8]\n    mov r1, #6\n    str r1, [r4, #0xc]\n    str r2, [r4, #0x14]\n    bl SysTask_Destroy\n    ldr r1, [r4, #0x10]\n    cmp r1, #0xe\n    beq _021EB4B2\n    add r0, r4, #0\n    bl FieldWeatherUpdate_UsedFlash\n    mov r0, #0xe\n    str r0, [r4, #0x10]\n    pop {r4, pc}"
    );
    #endif
}

u8 ov01_021EB4B4(void) {
    return 0;
}

void ov01_021EB4B8(void) {
    /* Original at 0x021EB4B8 */
    /* Requires manual decompilation - 77 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x1c\n    ldr r1, _021EB564 ; =0xFFFFF000\n    add r6, r0, #0\n    add r0, #0x14\n    bl GF_InitG2dRenderer\n    mov r0, #0\n    add r3, r6, #0\n    str r0, [sp, #0xc]\n    str r0, [sp, #0x10]\n    mov r0, #0xff\n    lsl r0, r0, #0xc\n    str r0, [sp, #0x14]\n    mov r0, #3\n    lsl r0, r0, #0x12\n    str r0, [sp, #0x18]\n    add r0, r6, #0\n    add r0, #0xac\n    add r1, sp, #0xc\n    mov r2, #1\n    add r3, #0x14\n    bl sub_0200B27C\n    mov r4, #0\n    add r5, r6, #0\n    mov r7, #0xe\n    add r0, r7, #0\n    add r1, r4, #0\n    mov r2, #4\n    bl Create2DGfxResObjMan\n    add r4, r4, #1\n    stmia r5!, {r0}\n    cmp r4, #4\n    blt _021EB4EE\n    bl GF2DGfxResHeader_sizeof\n    add r1, r0, #0\n    mov r0, #4\n    lsl r1, r1, #2\n    bl Heap_Alloc\n    str r0, [r6, #0x10]\n    mov r1, #0\n    mov r2, #0x39\n    bl ov01_021EB578\n    ldr r0, [r6, #0x10]\n    mov r1, #1\n    mov r2, #0x3a\n    bl ov01_021EB578\n    ldr r0, [r6, #0x10]\n    mov r1, #2\n    mov r2, #0x37\n    bl ov01_021EB578\n    ldr r0, [r6, #0x10]\n    mov r1, #3\n    mov r2, #0x38\n    bl ov01_021EB578\n    mov r0, #0x40\n    str r0, [sp]\n    add r0, r6, #0\n    add r0, #0x14\n    str r0, [sp, #4]\n    mov r0, #4\n    str r0, [sp, #8]\n    add r0, sp, #0\n    bl SpriteList_Create\n    add r1, r6, #0\n    add r1, #0xf4\n    str r0, [r1]\n    ldr r0, _021EB568 ; =ov01_021EB56C\n    add r1, r6, #0\n    mov r2, #0xa\n    bl SysTask_CreateOnMainQueue\n    add r6, #0xf8\n    str r0, [r6]\n    add sp, #0x1c\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _021EB564: .word 0xFFFFF000\n    _021EB568: .word ov01_021EB56C"
    );
    #endif
}

void ov01_021EB56C(void) {
    SpriteList_RenderAndAnimateSprites();
}

void ov01_021EB578(void) {
    /* Original at 0x021EB578 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r2, #0\n    bl GF2DGfxResHeader_GetByIndex\n    add r4, r0, #0\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #0x3f\n    add r1, r5, #0\n    mov r2, #0\n    mov r3, #4\n    bl GfGfxLoader_LoadFromNarc\n    add r5, r0, #0\n    add r1, r4, #0\n    mov r2, #4\n    bl GF2DGfxResHeader_Init\n    add r0, r5, #0\n    bl Heap_Free\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_021EB5A4(void) {
    /* Original at 0x021EB5A4 */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r0, #0\n    mov r4, #0\n    add r5, r6, #0\n    ldr r0, [r6, #0x10]\n    add r1, r4, #0\n    bl GF2DGfxResHeader_GetByIndex\n    bl GF2DGfxResHeader_Reset\n    ldr r0, [r5]\n    bl Destroy2DGfxResObjMan\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #4\n    blt _021EB5AC\n    ldr r0, [r6, #0x10]\n    bl Heap_Free\n    mov r0, #0\n    str r0, [r6, #0x10]\n    add r0, r6, #0\n    add r0, #0xf4\n    ldr r0, [r0]\n    bl SpriteList_Delete\n    add r0, r6, #0\n    mov r1, #0\n    add r0, #0xf4\n    str r1, [r0]\n    add r0, r6, #0\n    add r0, #0xf8\n    ldr r0, [r0]\n    bl SysTask_Destroy\n    mov r0, #0\n    add r6, #0xf8\n    str r0, [r6]\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov01_021EB5F4(void) {
    /* Original at 0x021EB5F4 */
    /* Requires manual decompilation - 40 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    ldr r0, [r4]\n    ldr r1, _021EB644 ; =0x0013F000\n    cmp r0, r1\n    ble _021EB60A\n    bl _s32_div_f\n    str r1, [r4]\n    b _021EB614\n    ldr r2, _021EB648 ; =0xFFFC0000\n    cmp r0, r2\n    bge _021EB614\n    add r0, r0, r1\n    str r0, [r4]\n    mov r1, #1\n    ldr r3, [r4, #4]\n    lsl r1, r1, #0x14\n    cmp r3, r1\n    ble _021EB62E\n    lsr r2, r3, #0x1f\n    lsl r1, r3, #0xc\n    sub r1, r1, r2\n    mov r0, #0xc\n    ror r1, r0\n    add r0, r2, r1\n    str r0, [r4, #4]\n    b _021EB638\n    ldr r0, _021EB648 ; =0xFFFC0000\n    cmp r3, r0\n    bge _021EB638\n    add r0, r3, r1\n    str r0, [r4, #4]\n    add r0, r5, #0\n    add r1, r4, #0\n    bl Sprite_SetMatrix\n    pop {r3, r4, r5, pc}\n    nop\n    _021EB644: .word 0x0013F000\n    _021EB648: .word 0xFFFC0000"
    );
    #endif
}

void ov01_021EB64C(void) {
    /* Original at 0x021EB64C */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    mov r1, #0x43\n    add r5, r0, #0\n    mov r0, #4\n    lsl r1, r1, #2\n    bl Heap_Alloc\n    add r4, r0, #0\n    mov r0, #0x41\n    lsl r0, r0, #2\n    str r5, [r4, r0]\n    add r0, r4, #0\n    add r0, #8\n    bl ov01_021EB4B8\n    ldr r0, _021EB684 ; =ov01_022098B0\n    mov r1, #4\n    str r0, [r4]\n    ldr r0, _021EB688 ; =ov01_0220675C\n    str r0, [r4, #4]\n    mov r0, #0x3f ; NARC_a_0_6_3\n    bl NARC_New\n    mov r1, #0x42\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}\n    _021EB684: .word ov01_022098B0\n    _021EB688: .word ov01_0220675C"
    );
    #endif
}

void ov01_021EB68C(void) {
    /* Original at 0x021EB68C */
    /* Requires manual decompilation - 51 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #8\n    add r4, r0, #0\n    ldr r0, [r4]\n    cmp r0, #0\n    beq _021EB6F6\n    mov r5, #0\n    ldr r0, [r4]\n    add r1, r5, #0\n    bl ov01_021EBB90\n    add r5, r5, #1\n    cmp r5, #0xe\n    blt _021EB69A\n    mov r2, #0\n    str r2, [sp]\n    str r2, [sp, #4]\n    mov r0, #0x41\n    ldr r1, [r4]\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    mov r1, #1\n    ldr r0, [r0, #0x4c]\n    add r3, r2, #0\n    bl ov01_021EA864\n    ldr r1, _021EB6FC ; =0x04000008\n    mov r0, #3\n    ldrh r2, [r1]\n    bic r2, r0\n    mov r0, #1\n    orr r0, r2\n    strh r0, [r1]\n    mov r0, #4\n    mov r1, #0\n    bl GfGfx_EngineATogglePlanes\n    ldr r0, [r4]\n    add r0, #8\n    bl ov01_021EB5A4\n    mov r0, #0x42\n    ldr r1, [r4]\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    bl NARC_Delete\n    ldr r1, [r4]\n    mov r0, #4\n    bl Heap_FreeExplicit\n    mov r0, #0\n    str r0, [r4]\n    add sp, #8\n    pop {r3, r4, r5, pc}\n    nop\n    _021EB6FC: .word 0x04000008"
    );
    #endif
}

void ov01_021EB700(void) {
    /* Original at 0x021EB700 */
    /* Requires manual decompilation - 106 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r2, #0\n    add r5, r0, #0\n    mov r6, #1\n    cmp r4, #0xe\n    ble _021EB710\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    cmp r1, #0xa\n    bhi _021EB7FA\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _021EB720: ; jump table\n    add r1, r4, #0\n    bl ov01_021EB9A8\n    add r6, r0, #0\n    b _021EB7FA\n    add r1, r4, #0\n    bl ov01_021EBA08\n    add r6, r0, #0\n    b _021EB7FA\n    add r1, r4, #0\n    mov r2, #0\n    add r3, r6, #0\n    bl ov01_021EBA44\n    add r6, r0, #0\n    b _021EB7FA\n    add r1, r4, #0\n    mov r2, #2\n    add r3, r6, #0\n    bl ov01_021EBA44\n    add r6, r0, #0\n    b _021EB7FA\n    mov r0, #0x41\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    ldr r0, [r0, #0x4c]\n    bl ov01_021EA854\n    cmp r0, #1\n    bne _021EB786\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #0\n    mov r3, #2\n    bl ov01_021EBA44\n    add r6, r0, #0\n    b _021EB7FA\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #0\n    add r3, r6, #0\n    bl ov01_021EBA44\n    add r6, r0, #0\n    b _021EB7FA\n    add r1, r4, #0\n    add r2, r6, #0\n    bl ov01_021EBB40\n    b _021EB7FA\n    add r1, r4, #0\n    bl ov01_021EBB68\n    b _021EB7FA\n    add r1, r4, #0\n    mov r2, #0\n    bl ov01_021EBB40\n    b _021EB7FA\n    add r1, r4, #0\n    bl ov01_021EBB90\n    b _021EB7FA\n    mov r0, #0x1c\n    ldr r1, [r5]\n    mul r0, r4\n    add r0, r1, r0\n    ldr r2, [r0, #8]\n    cmp r2, #0\n    beq _021EB7FA\n    ldr r0, _021EB800 ; =0x00000F5C\n    ldr r1, [r2, r0]\n    cmp r1, #1\n    bne _021EB7FA\n    add r0, r0, #4\n    ldrh r0, [r2, r0]\n    bl PlaySE\n    b _021EB7FA\n    mov r0, #0x1c\n    ldr r1, [r5]\n    mul r0, r4\n    add r0, r1, r0\n    ldr r2, [r0, #8]\n    cmp r2, #0\n    beq _021EB7FA\n    ldr r0, _021EB800 ; =0x00000F5C\n    ldr r1, [r2, r0]\n    cmp r1, #1\n    bne _021EB7FA\n    add r0, r0, #4\n    ldrh r0, [r2, r0]\n    mov r1, #0\n    bl StopSE\n    add r0, r6, #0\n    pop {r4, r5, r6, pc}\n    nop\n    _021EB800: .word 0x00000F5C"
    );
    #endif
}

void ov01_021EB804(void) {
    /* Original at 0x021EB804 */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "cmp r1, #0xe\n    blt _021EB80C\n    mov r0, #0\n    bx lr\n    ldr r2, [r0]\n    mov r0, #0x1c\n    mul r0, r1\n    add r0, r2, r0\n    ldrh r0, [r0, #0x10]\n    bx lr"
    );
    #endif
}

void ov01_021EB818(void) {
    G2x_SetBlendAlpha_(4, 0x21);
}

void ov01_021EB830(void) {
    /* Original at 0x021EB830 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "str r1, [r0]\n    str r1, [r0, #4]\n    sub r1, r2, r1\n    str r1, [r0, #8]\n    str r3, [r0, #0x10]\n    mov r1, #0\n    str r1, [r0, #0xc]\n    bx lr"
    );
    #endif
}

void ov01_021EB840(void) {
    /* Original at 0x021EB840 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r1, [r4, #8]\n    ldr r0, [r4, #0xc]\n    mul r0, r1\n    ldr r1, [r4, #0x10]\n    bl _s32_div_f\n    ldr r1, [r4, #4]\n    add r0, r0, r1\n    str r0, [r4]\n    ldr r0, [r4, #0xc]\n    ldr r1, [r4, #0x10]\n    add r0, r0, #1\n    cmp r0, r1\n    bgt _021EB866\n    str r0, [r4, #0xc]\n    mov r0, #0\n    pop {r4, pc}\n    str r1, [r4, #0xc]\n    mov r0, #1\n    pop {r4, pc}"
    );
    #endif
}

void ov01_021EB86C(void) {
    ov01_021EBEF0();
    ov01_021EBF24(r5, r4, r6);
    ov01_021EBF58(r5, r4, r6);
    ov01_021EBF94(r5, r4, r6);
}

void ov01_021EB898(void) {
    /* Original at 0x021EB898 */
    /* Requires manual decompilation - 91 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x2c\n    add r4, r2, #0\n    add r6, r1, #0\n    add r7, r3, #0\n    ldr r5, [sp, #0x40]\n    bl GF2DGfxResHeader_GetByIndex\n    str r0, [sp, #0x18]\n    add r1, r4, #0\n    bl GF2DGfxResHeader_GetNarcMemberIdByIndex\n    str r0, [sp, #0x1c]\n    ldr r0, [sp, #0x18]\n    add r1, r4, #0\n    bl GF2DGfxResHeader_GetCompressFlagByIndex\n    str r0, [sp, #0x20]\n    ldr r0, [sp, #0x18]\n    add r1, r4, #0\n    bl GF2DGfxResHeader_GetExDat0ByIndex\n    str r0, [sp, #0x24]\n    ldr r0, [sp, #0x18]\n    add r1, r4, #0\n    bl GF2DGfxResHeader_GetExDat1ByIndex\n    str r0, [sp, #0x28]\n    ldr r0, [sp, #0x18]\n    add r1, r4, #0\n    bl GF2dGfxResHeader_GetObjIdByIndex\n    cmp r6, #3\n    bhi _021EB962\n    add r1, r6, r6\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _021EB8E8: ; jump table\n    str r0, [sp]\n    ldr r0, [sp, #0x24]\n    ldr r2, [sp, #0x1c]\n    str r0, [sp, #4]\n    mov r0, #4\n    str r0, [sp, #8]\n    ldr r0, [sp, #0x44]\n    ldr r3, [sp, #0x20]\n    str r0, [sp, #0xc]\n    add r0, r7, #0\n    add r1, r5, #0\n    bl AddCharResObjFromOpenNarcWithAtEndFlag\n    str r0, [sp, #0x14]\n    b _021EB962\n    str r0, [sp]\n    ldr r0, [sp, #0x24]\n    ldr r2, [sp, #0x1c]\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x28]\n    ldr r3, [sp, #0x20]\n    str r0, [sp, #8]\n    mov r0, #4\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #0x44]\n    add r1, r5, #0\n    str r0, [sp, #0x10]\n    add r0, r7, #0\n    bl AddPlttResObjFromOpenNarcWithAtEndFlag\n    str r0, [sp, #0x14]\n    b _021EB962\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    mov r0, #4\n    str r0, [sp, #8]\n    ldr r2, [sp, #0x1c]\n    ldr r3, [sp, #0x20]\n    add r0, r7, #0\n    add r1, r5, #0\n    bl AddCellOrAnimResObjFromOpenNarc\n    str r0, [sp, #0x14]\n    b _021EB962\n    str r0, [sp]\n    mov r0, #3\n    str r0, [sp, #4]\n    mov r0, #4\n    str r0, [sp, #8]\n    ldr r2, [sp, #0x1c]\n    ldr r3, [sp, #0x20]\n    add r0, r7, #0\n    add r1, r5, #0\n    bl AddCellOrAnimResObjFromOpenNarc\n    str r0, [sp, #0x14]\n    ldr r0, [sp, #0x14]\n    add sp, #0x2c\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021EB968(void) {
    /* Original at 0x021EB968 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r0, _021EB9A4 ; =0x0000FFFF\n    add r4, r2, #0\n    cmp r1, r0\n    beq _021EB9A0\n    ldr r0, [r4]\n    cmp r0, #0\n    beq _021EB97E\n    bl sub_0200AEB0\n    ldr r0, [r4, #4]\n    cmp r0, #0\n    beq _021EB988\n    bl sub_0200B0A8\n    mov r6, #0\n    ldr r1, [r4]\n    cmp r1, #0\n    beq _021EB996\n    ldr r0, [r5, #8]\n    bl DestroySingle2DGfxResObj\n    add r6, r6, #1\n    add r4, r4, #4\n    add r5, r5, #4\n    cmp r6, #4\n    blt _021EB98A\n    pop {r4, r5, r6, pc}\n    nop\n    _021EB9A4: .word 0x0000FFFF"
    );
    #endif
}

void ov01_021EB9A8(void) {
    /* Original at 0x021EB9A8 */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r2, #0x1c\n    ldr r3, [r5]\n    mul r2, r1\n    add r4, r3, r2\n    ldr r1, [r4, #8]\n    cmp r1, #0\n    bne _021EBA00\n    add r1, r4, #0\n    bl ov01_021EBE4C\n    cmp r0, #0\n    bne _021EB9C8\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov01_021EBD34\n    cmp r0, #0\n    bne _021EB9E0\n    ldr r0, [r4, #8]\n    bl Heap_Free\n    mov r0, #0\n    str r0, [r4, #8]\n    pop {r3, r4, r5, pc}\n    ldr r1, [r4, #0xc]\n    ldr r0, [r4, #8]\n    str r1, [r0, #8]\n    ldrh r1, [r4]\n    ldr r0, _021EBA04 ; =0x0000FFFF\n    cmp r1, r0\n    beq _021EB9F4\n    ldr r0, [r4, #8]\n    bl ov01_021EC028\n    ldrh r1, [r4, #2]\n    add r0, r5, #0\n    bl ov01_021EBD18\n    mov r0, #2\n    strh r0, [r4, #0x10]\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    _021EBA04: .word 0x0000FFFF"
    );
    #endif
}

void ov01_021EBA08(void) {
    /* Original at 0x021EBA08 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r2, #0x1c\n    ldr r3, [r0]\n    mul r2, r1\n    add r4, r3, r2\n    ldr r1, [r4, #8]\n    cmp r1, #0\n    beq _021EBA1C\n    mov r0, #1\n    pop {r4, pc}\n    add r1, r4, #0\n    bl ov01_021EBE4C\n    cmp r0, #0\n    bne _021EBA2A\n    mov r0, #0\n    pop {r4, pc}\n    ldr r0, _021EBA40 ; =ov01_021EBD70\n    add r1, r4, #0\n    mov r2, #1\n    bl SysTask_CreateOnMainQueue\n    str r0, [r4, #0x14]\n    mov r0, #1\n    strh r0, [r4, #0x10]\n    mov r1, #0\n    strh r1, [r4, #0x12]\n    pop {r4, pc}\n    _021EBA40: .word ov01_021EBD70"
    );
    #endif
}

void ov01_021EBA44(void) {
    /* Original at 0x021EBA44 */
    /* Requires manual decompilation - 117 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r2, #0\n    ldr r2, [r0]\n    mov r0, #0x1c\n    mul r0, r1\n    ldrh r1, [r2, r0]\n    add r4, r2, r0\n    ldr r0, _021EBB2C ; =0x0000FFFF\n    add r6, r3, #0\n    cmp r1, r0\n    beq _021EBA64\n    ldr r0, [r4, #0xc]\n    cmp r0, #0\n    bne _021EBA64\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    ldr r1, [r4, #8]\n    cmp r1, #0\n    bne _021EBA6E\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    ldrh r0, [r4, #0x10]\n    cmp r0, #2\n    beq _021EBA78\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    ldr r0, [r4, #0x18]\n    mov r2, #4\n    bl SysTask_CreateOnMainQueue\n    ldr r1, [r4, #8]\n    ldr r3, _021EBB30 ; =0x00000F48\n    str r0, [r1, r3]\n    ldr r0, [r4, #8]\n    ldr r0, [r0, r3]\n    cmp r0, #0\n    bne _021EBA92\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    mov r0, #3\n    strh r0, [r4, #0x10]\n    add r0, r3, #0\n    ldr r1, [r4, #8]\n    add r0, #0x1a\n    strh r5, [r1, r0]\n    add r0, r3, #0\n    ldr r1, [r4, #8]\n    mov r2, #0\n    add r0, #0x1e\n    strh r2, [r1, r0]\n    ldr r1, [r4, #8]\n    add r0, r1, #0\n    add r0, #0xc\n    str r0, [r1, #0x40]\n    ldr r1, [r4, #8]\n    add r0, r1, #0\n    add r0, #0xc\n    str r0, [r1, #0x44]\n    add r0, r3, #0\n    ldr r1, [r4, #8]\n    add r0, #0x1c\n    strh r6, [r1, r0]\n    add r0, r3, #0\n    ldr r1, [r4, #8]\n    add r0, #0x14\n    str r2, [r1, r0]\n    ldr r1, [r4, #8]\n    add r0, r3, #4\n    ldr r6, _021EBB34 ; =NNS_G3dGlb + 0x258\n    add r5, r1, r0\n    ldmia r6!, {r0, r1}\n    stmia r5!, {r0, r1}\n    ldr r0, [r6]\n    str r0, [r5]\n    ldr r1, [r4, #4]\n    cmp r1, #0\n    ble _021EBAF8\n    mov r0, #4\n    bl Heap_Alloc\n    ldr r2, [r4, #8]\n    ldr r1, _021EBB38 ; =0x00000F58\n    str r0, [r2, r1]\n    ldr r0, [r4, #8]\n    ldr r2, [r4, #4]\n    ldr r0, [r0, r1]\n    mov r1, #0\n    bl memset\n    b _021EBAFE\n    ldr r0, [r4, #8]\n    add r3, #0x10\n    str r2, [r0, r3]\n    ldrh r1, [r4, #2]\n    ldr r0, _021EBB2C ; =0x0000FFFF\n    cmp r1, r0\n    beq _021EBB28\n    mov r0, #4\n    mov r1, #0\n    bl GfGfx_EngineATogglePlanes\n    ldr r2, _021EBB3C ; =0x0400000C\n    mov r1, #3\n    ldrh r3, [r2]\n    mov r0, #1\n    bic r3, r1\n    orr r0, r3\n    strh r0, [r2]\n    sub r2, r2, #4\n    ldrh r3, [r2]\n    mov r0, #2\n    bic r3, r1\n    orr r0, r3\n    strh r0, [r2]\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    _021EBB2C: .word 0x0000FFFF\n    _021EBB30: .word 0x00000F48\n    _021EBB34: .word NNS_G3dGlb + 0x258\n    _021EBB38: .word 0x00000F58\n    _021EBB3C: .word 0x0400000C"
    );
    #endif
}

void ov01_021EBB40(void) {
    /* Original at 0x021EBB40 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    ldr r3, [r0]\n    mov r0, #0x1c\n    mul r0, r1\n    add r4, r3, r0\n    ldrh r0, [r4, #0x10]\n    cmp r0, #3\n    bne _021EBB5E\n    ldr r1, [r4, #8]\n    ldr r0, _021EBB64 ; =0x00000F66\n    mov r3, #5\n    strh r3, [r1, r0]\n    ldr r1, [r4, #8]\n    sub r0, r0, #2\n    strh r2, [r1, r0]\n    pop {r3, r4}\n    bx lr\n    nop\n    _021EBB64: .word 0x00000F66"
    );
    #endif
}

void ov01_021EBB68(void) {
    /* Original at 0x021EBB68 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r2, #0x1c\n    ldr r3, [r0]\n    mul r2, r1\n    add r4, r3, r2\n    bl ov01_021EB804\n    cmp r0, #3\n    bne _021EBB8A\n    ldr r1, [r4, #8]\n    ldr r0, _021EBB8C ; =0x00000F62\n    mov r2, #5\n    strh r2, [r1, r0]\n    ldr r1, [r4, #8]\n    ldr r2, [r4, #0x18]\n    mov r0, #0\n    blx r2\n    pop {r4, pc}\n    _021EBB8C: .word 0x00000F62"
    );
    #endif
}

void ov01_021EBB90(void) {
    /* Original at 0x021EBB90 */
    /* Requires manual decompilation - 119 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #8\n    add r5, r0, #0\n    mov r0, #0x1c\n    ldr r2, [r5]\n    mul r0, r1\n    add r4, r2, r0\n    ldrh r1, [r4, #2]\n    ldr r0, _021EBC8C ; =0x0000FFFF\n    cmp r1, r0\n    beq _021EBBCE\n    mov r0, #4\n    mov r1, #0\n    bl GfGfx_EngineATogglePlanes\n    ldr r0, _021EBC90 ; =0x0400000C\n    mov r2, #3\n    ldrh r3, [r0]\n    mov r1, #3\n    bic r3, r2\n    orr r1, r3\n    strh r1, [r0]\n    sub r3, r0, #4\n    ldrh r6, [r3]\n    mov r1, #1\n    add r0, #0x44\n    bic r6, r2\n    orr r1, r6\n    strh r1, [r3]\n    mov r1, #0\n    strh r1, [r0]\n    ldr r2, [r4, #0xc]\n    cmp r2, #0\n    beq _021EBBF6\n    ldrh r1, [r4]\n    add r0, r5, #0\n    bl ov01_021EB968\n    ldr r1, [r4, #0xc]\n    mov r0, #4\n    bl Heap_FreeExplicit\n    mov r0, #0\n    str r0, [r4, #0xc]\n    ldr r0, [r4, #0x14]\n    cmp r0, #0\n    beq _021EBBF6\n    bl SysTask_Destroy\n    mov r0, #0\n    str r0, [r4, #0x14]\n    ldr r0, [r4, #8]\n    cmp r0, #0\n    beq _021EBC70\n    add r0, #0xc\n    bl ov01_021EC2CC\n    ldrh r1, [r4]\n    ldr r0, _021EBC8C ; =0x0000FFFF\n    cmp r1, r0\n    beq _021EBC10\n    ldr r0, [r4, #8]\n    bl ov01_021EC058\n    ldr r0, [r4, #8]\n    ldr r1, _021EBC94 ; =0x00000F5C\n    ldr r1, [r0, r1]\n    cmp r1, #1\n    bne _021EBC1E\n    bl ov01_021EDAE0\n    ldr r1, [r4, #8]\n    ldr r0, _021EBC98 ; =0x00000F58\n    ldr r1, [r1, r0]\n    cmp r1, #0\n    beq _021EBC36\n    mov r0, #4\n    bl Heap_FreeExplicit\n    ldr r1, [r4, #8]\n    ldr r0, _021EBC98 ; =0x00000F58\n    mov r2, #0\n    str r2, [r1, r0]\n    ldrh r0, [r4, #0x10]\n    cmp r0, #1\n    bne _021EBC48\n    ldr r0, [r4, #0x14]\n    cmp r0, #0\n    beq _021EBC56\n    bl SysTask_Destroy\n    b _021EBC56\n    cmp r0, #3\n    bne _021EBC56\n    ldr r1, [r4, #8]\n    ldr r0, _021EBC9C ; =0x00000F48\n    ldr r0, [r1, r0]\n    bl SysTask_Destroy\n    ldr r1, [r4, #8]\n    ldr r0, _021EBCA0 ; =0x00000F6C\n    ldr r0, [r1, r0]\n    cmp r0, #0\n    beq _021EBC64\n    bl SysTask_Destroy\n    ldr r1, [r4, #8]\n    mov r0, #4\n    bl Heap_FreeExplicit\n    mov r0, #0\n    str r0, [r4, #8]\n    mov r2, #0\n    str r2, [sp]\n    mov r0, #0x41\n    str r2, [sp, #4]\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #1\n    ldr r0, [r0, #0x4c]\n    add r3, r2, #0\n    bl ov01_021EA864\n    add sp, #8\n    pop {r4, r5, r6, pc}\n    nop\n    _021EBC8C: .word 0x0000FFFF\n    _021EBC90: .word 0x0400000C\n    _021EBC94: .word 0x00000F5C\n    _021EBC98: .word 0x00000F58\n    _021EBC9C: .word 0x00000F48\n    _021EBCA0: .word 0x00000F6C"
    );
    #endif
}

void ov01_021EBCA4(void) {
    /* Original at 0x021EBCA4 */
    /* Requires manual decompilation - 50 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    ldrh r1, [r4, #2]\n    ldr r0, _021EBD08 ; =0x0000FFFF\n    cmp r1, r0\n    beq _021EBCD8\n    mov r0, #4\n    mov r1, #0\n    bl GfGfx_EngineATogglePlanes\n    ldr r0, _021EBD0C ; =0x0400000C\n    mov r2, #3\n    ldrh r3, [r0]\n    mov r1, #3\n    bic r3, r2\n    orr r1, r3\n    strh r1, [r0]\n    sub r3, r0, #4\n    ldrh r5, [r3]\n    mov r1, #1\n    add r0, #0x44\n    bic r5, r2\n    orr r1, r5\n    strh r1, [r3]\n    mov r1, #0\n    strh r1, [r0]\n    ldr r0, [r4, #8]\n    cmp r0, #0\n    beq _021EBD06\n    add r0, #0xc\n    bl ov01_021EC2CC\n    ldr r0, [r4, #8]\n    ldr r1, _021EBD10 ; =0x00000F5C\n    ldr r1, [r0, r1]\n    cmp r1, #1\n    bne _021EBCF2\n    bl ov01_021EDAE0\n    ldrh r0, [r4, #0x10]\n    cmp r0, #3\n    bne _021EBD06\n    ldr r1, [r4, #8]\n    ldr r0, _021EBD14 ; =0x00000F48\n    ldr r0, [r1, r0]\n    bl SysTask_Destroy\n    mov r0, #2\n    strh r0, [r4, #0x10]\n    pop {r3, r4, r5, pc}\n    _021EBD08: .word 0x0000FFFF\n    _021EBD0C: .word 0x0400000C\n    _021EBD10: .word 0x00000F5C\n    _021EBD14: .word 0x00000F48"
    );
    #endif
}

void ov01_021EBD18(void) {
    ov01_021EC078();
    ov01_021EC0C0(r5, r4);
    ov01_021EC114(r5, r4);
}

void ov01_021EBD34(void) {
    /* Original at 0x021EBD34 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    ldrh r1, [r4]\n    add r5, r0, #0\n    ldr r0, _021EBD6C ; =0x0000FFFF\n    cmp r1, r0\n    beq _021EBD68\n    ldr r0, [r4, #0xc]\n    cmp r0, #0\n    bne _021EBD68\n    add r0, r4, #0\n    bl ov01_021EBEB8\n    cmp r0, #0\n    bne _021EBD56\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    ldrh r1, [r4]\n    ldr r2, [r4, #0xc]\n    add r0, r5, #0\n    bl ov01_021EB86C\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov01_021EBFD0\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    _021EBD6C: .word 0x0000FFFF"
    );
    #endif
}

void ov01_021EBD70(void) {
    /* Original at 0x021EBD70 */
    /* Requires manual decompilation - 89 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    ldrh r2, [r4, #0x12]\n    add r5, r0, #0\n    ldr r0, [r4, #8]\n    cmp r2, #8\n    ldr r0, [r0]\n    bhi _021EBE46\n    add r2, r2, r2\n    add r2, pc\n    ldrh r2, [r2, #6]\n    lsl r2, r2, #0x10\n    asr r2, r2, #0x10\n    add pc, r2\n    _021EBD8C: ; jump table\n    add r0, r4, #0\n    bl ov01_021EBEB8\n    cmp r0, #0\n    bne _021EBDAC\n    bl GF_AssertFail\n    ldrh r0, [r4, #0x12]\n    add r0, r0, #1\n    strh r0, [r4, #0x12]\n    pop {r3, r4, r5, pc}\n    ldrh r1, [r4]\n    ldr r2, [r4, #0xc]\n    bl ov01_021EBEF0\n    ldrh r0, [r4, #0x12]\n    add r0, r0, #1\n    strh r0, [r4, #0x12]\n    pop {r3, r4, r5, pc}\n    ldrh r1, [r4, #2]\n    bl ov01_021EC078\n    ldrh r0, [r4, #0x12]\n    add r0, r0, #1\n    strh r0, [r4, #0x12]\n    pop {r3, r4, r5, pc}\n    ldrh r1, [r4]\n    ldr r2, [r4, #0xc]\n    bl ov01_021EBF24\n    ldrh r0, [r4, #0x12]\n    add r0, r0, #1\n    strh r0, [r4, #0x12]\n    pop {r3, r4, r5, pc}\n    ldrh r1, [r4, #2]\n    bl ov01_021EC0C0\n    ldrh r0, [r4, #0x12]\n    add r0, r0, #1\n    strh r0, [r4, #0x12]\n    pop {r3, r4, r5, pc}\n    ldrh r1, [r4]\n    ldr r2, [r4, #0xc]\n    bl ov01_021EBF58\n    ldrh r0, [r4, #0x12]\n    add r0, r0, #1\n    strh r0, [r4, #0x12]\n    pop {r3, r4, r5, pc}\n    ldrh r1, [r4, #2]\n    bl ov01_021EC114\n    ldrh r0, [r4, #0x12]\n    add r0, r0, #1\n    strh r0, [r4, #0x12]\n    pop {r3, r4, r5, pc}\n    ldrh r1, [r4]\n    ldr r2, [r4, #0xc]\n    bl ov01_021EBF94\n    ldrh r0, [r4, #0x12]\n    add r0, r0, #1\n    strh r0, [r4, #0x12]\n    pop {r3, r4, r5, pc}\n    bl ov01_021EBFD0\n    ldr r1, [r4, #0xc]\n    ldr r0, [r4, #8]\n    str r1, [r0, #8]\n    ldrh r1, [r4]\n    ldr r0, _021EBE48 ; =0x0000FFFF\n    cmp r1, r0\n    beq _021EBE36\n    ldr r0, [r4, #8]\n    bl ov01_021EC028\n    mov r0, #2\n    strh r0, [r4, #0x10]\n    mov r0, #0\n    strh r0, [r4, #0x12]\n    str r0, [r4, #0x14]\n    add r0, r5, #0\n    bl SysTask_Destroy\n    pop {r3, r4, r5, pc}\n    _021EBE48: .word 0x0000FFFF"
    );
    #endif
}

void ov01_021EBE4C(void) {
    /* Original at 0x021EBE4C */
    /* Requires manual decompilation - 51 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    ldr r0, [r4, #8]\n    cmp r0, #0\n    beq _021EBE5C\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r1, #0xf7\n    mov r0, #4\n    lsl r1, r1, #4\n    bl Heap_Alloc\n    str r0, [r4, #8]\n    cmp r0, #0\n    bne _021EBE70\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    mov r2, #0xf7\n    mov r1, #0\n    lsl r2, r2, #4\n    bl memset\n    ldr r0, [r4, #8]\n    ldr r2, _021EBEB4 ; =0x00000F62\n    str r5, [r0]\n    ldr r1, [r4, #8]\n    mov r0, #0\n    strh r0, [r1, r2]\n    ldr r3, [r4, #8]\n    add r1, r2, #4\n    strh r0, [r3, r1]\n    ldr r3, [r4, #8]\n    add r1, r3, #0\n    add r1, #0xc\n    str r1, [r3, #0x40]\n    ldr r3, [r4, #8]\n    add r1, r3, #0\n    add r1, #0xc\n    str r1, [r3, #0x44]\n    add r1, r2, #0\n    ldr r3, [r4, #8]\n    sub r1, #0xa\n    str r0, [r3, r1]\n    ldr r1, [r4, #8]\n    add r2, #0xa\n    str r4, [r1, #4]\n    ldr r1, [r4, #8]\n    str r0, [r1, r2]\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    nop\n    _021EBEB4: .word 0x00000F62"
    );
    #endif
}

void ov01_021EBEB8(void) {
    /* Original at 0x021EBEB8 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldrh r1, [r4]\n    ldr r0, _021EBEEC ; =0x0000FFFF\n    cmp r1, r0\n    beq _021EBEE8\n    ldr r0, [r4, #0xc]\n    cmp r0, #0\n    beq _021EBECE\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #4\n    mov r1, #0x64\n    bl Heap_Alloc\n    str r0, [r4, #0xc]\n    cmp r0, #0\n    bne _021EBEE0\n    mov r0, #0\n    pop {r4, pc}\n    mov r1, #0\n    mov r2, #0x64\n    bl memset\n    mov r0, #1\n    pop {r4, pc}\n    _021EBEEC: .word 0x0000FFFF"
    );
    #endif
}

void ov01_021EBEF0(void) {
    /* Original at 0x021EBEF0 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #8\n    add r5, r0, #0\n    ldr r0, _021EBF20 ; =0x0000FFFF\n    add r3, r1, #0\n    add r4, r2, #0\n    cmp r3, r0\n    beq _021EBF1A\n    mov r0, #0x42\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    add r2, r3, #0\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    ldr r0, [r5, #0x18]\n    ldr r3, [r5, #0x10]\n    mov r1, #2\n    bl ov01_021EB898\n    str r0, [r4, #8]\n    add sp, #8\n    pop {r3, r4, r5, pc}\n    nop\n    _021EBF20: .word 0x0000FFFF"
    );
    #endif
}

void ov01_021EBF24(void) {
    /* Original at 0x021EBF24 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #8\n    add r5, r0, #0\n    ldr r0, _021EBF54 ; =0x0000FFFF\n    add r3, r1, #0\n    add r4, r2, #0\n    cmp r3, r0\n    beq _021EBF4E\n    mov r0, #0x42\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    add r2, r3, #0\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    ldr r0, [r5, #0x18]\n    ldr r3, [r5, #0x14]\n    mov r1, #3\n    bl ov01_021EB898\n    str r0, [r4, #0xc]\n    add sp, #8\n    pop {r3, r4, r5, pc}\n    nop\n    _021EBF54: .word 0x0000FFFF"
    );
    #endif
}

void ov01_021EBF58(void) {
    /* Original at 0x021EBF58 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #8\n    add r5, r0, #0\n    ldr r0, _021EBF90 ; =0x0000FFFF\n    add r3, r1, #0\n    add r4, r2, #0\n    cmp r3, r0\n    beq _021EBF8C\n    mov r0, #0x42\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    add r2, r3, #0\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r0, [r5, #0x18]\n    ldr r3, [r5, #8]\n    mov r1, #0\n    bl ov01_021EB898\n    str r0, [r4]\n    bl sub_0200ADA4\n    ldr r0, [r4]\n    bl sub_0200A740\n    add sp, #8\n    pop {r3, r4, r5, pc}\n    _021EBF90: .word 0x0000FFFF"
    );
    #endif
}

void ov01_021EBF94(void) {
    /* Original at 0x021EBF94 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #8\n    add r5, r0, #0\n    ldr r0, _021EBFCC ; =0x0000FFFF\n    add r3, r1, #0\n    add r4, r2, #0\n    cmp r3, r0\n    beq _021EBFC6\n    mov r0, #0x42\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #1\n    str r0, [sp]\n    str r1, [sp, #4]\n    add r2, r3, #0\n    ldr r0, [r5, #0x18]\n    ldr r3, [r5, #0xc]\n    bl ov01_021EB898\n    str r0, [r4, #4]\n    bl sub_0200B00C\n    ldr r0, [r4, #4]\n    bl sub_0200A740\n    add sp, #8\n    pop {r3, r4, r5, pc}\n    nop\n    _021EBFCC: .word 0x0000FFFF"
    );
    #endif
}

void ov01_021EBFD0(void) {
    /* Original at 0x021EBFD0 */
    /* Requires manual decompilation - 41 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    ldrh r1, [r4]\n    add r5, r0, #0\n    ldr r0, _021EC024 ; =0x0000FFFF\n    cmp r1, r0\n    beq _021EC022\n    ldr r2, [r4, #0xc]\n    mov r0, #1\n    str r0, [sp]\n    add r0, r2, #0\n    add r0, #0x40\n    add r1, r5, #0\n    mov r3, #0\n    bl ov01_021EC240\n    ldr r0, [r4, #0xc]\n    mov r1, #0\n    add r0, #0x10\n    mov r2, #0x30\n    bl memset\n    add r5, #0xfc\n    ldr r1, [r5]\n    ldr r0, [r4, #0xc]\n    str r1, [r0, #0x10]\n    ldr r1, [r4, #0xc]\n    add r0, r1, #0\n    add r0, #0x40\n    str r0, [r1, #0x14]\n    mov r1, #1\n    ldr r0, [r4, #0xc]\n    lsl r1, r1, #0xc\n    str r1, [r0, #0x24]\n    ldr r0, [r4, #0xc]\n    str r1, [r0, #0x28]\n    ldr r0, [r4, #0xc]\n    str r1, [r0, #0x2c]\n    ldr r0, [r4, #0xc]\n    mov r1, #1\n    str r1, [r0, #0x38]\n    pop {r3, r4, r5, pc}\n    _021EC024: .word 0x0000FFFF"
    );
    #endif
}

void ov01_021EC028(void) {
    /* Original at 0x021EC028 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    mov r4, #0\n    add r5, r6, #0\n    add r7, r4, #0\n    ldr r0, [r6, #8]\n    add r0, #0x10\n    bl Sprite_CreateAffine\n    str r0, [r5, #0x4c]\n    add r1, r7, #0\n    bl Sprite_SetDrawFlag\n    ldr r0, [r5, #0x4c]\n    cmp r0, #0\n    bne _021EC04C\n    bl GF_AssertFail\n    add r4, r4, #1\n    add r5, #0x3c\n    cmp r4, #0x40\n    blt _021EC032\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021EC058(void) {
    Sprite_Delete(0);
}

void ov01_021EC078(void) {
    /* Original at 0x021EC078 */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    sub sp, #0x18\n    add r2, r0, #0\n    ldr r0, _021EC0BC ; =0x0000FFFF\n    cmp r1, r0\n    beq _021EC0B8\n    mov r0, #0x42\n    lsl r0, r0, #2\n    ldr r0, [r2, r0]\n    ldr r3, [r2, #4]\n    mov r2, #0xc\n    mul r2, r1\n    ldr r1, [r3, r2]\n    mov r2, #4\n    bl NARC_AllocAndReadWholeMember\n    add r1, sp, #0x14\n    str r0, [sp]\n    bl NNS_G2dGetUnpackedPaletteData\n    ldr r1, [sp, #0x14]\n    mov r0, #2\n    ldr r1, [r1, #0xc]\n    mov r2, #0x20\n    mov r3, #0xc0\n    bl BG_LoadPlttData\n    ldr r0, [sp]\n    bl Heap_Free\n    mov r0, #0\n    str r0, [sp]\n    add sp, #0x18\n    pop {r3, pc}\n    _021EC0BC: .word 0x0000FFFF"
    );
    #endif
}

void ov01_021EC0C0(void) {
    /* Original at 0x021EC0C0 */
    /* Requires manual decompilation - 37 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0x1c\n    add r4, r0, #0\n    ldr r0, _021EC110 ; =0x0000FFFF\n    cmp r1, r0\n    beq _021EC10C\n    mov r2, #0xc\n    mov r0, #0x42\n    lsl r0, r0, #2\n    ldr r3, [r4, #4]\n    mul r2, r1\n    add r1, r3, r2\n    ldr r0, [r4, r0]\n    ldr r1, [r1, #4]\n    mov r2, #4\n    bl NARC_AllocAndReadWholeMember\n    add r1, sp, #0x14\n    str r0, [sp, #8]\n    bl NNS_G2dGetUnpackedCharacterData\n    ldr r3, [sp, #0x14]\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #0x41\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    ldr r2, [r3, #0x14]\n    ldr r0, [r0, #8]\n    ldr r3, [r3, #0x10]\n    mov r1, #2\n    bl BG_LoadCharTilesData\n    ldr r0, [sp, #8]\n    bl Heap_Free\n    mov r0, #0\n    str r0, [sp, #8]\n    add sp, #0x1c\n    pop {r3, r4, pc}\n    _021EC110: .word 0x0000FFFF"
    );
    #endif
}

void ov01_021EC114(void) {
    /* Original at 0x021EC114 */
    /* Requires manual decompilation - 74 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0x24\n    add r4, r0, #0\n    ldr r0, _021EC1B8 ; =0x0000FFFF\n    add r5, r1, #0\n    cmp r5, r0\n    beq _021EC1B4\n    mov r0, #4\n    mov r1, #0\n    bl GfGfx_EngineATogglePlanes\n    mov r1, #0xc\n    mov r0, #0x42\n    lsl r0, r0, #2\n    ldr r2, [r4, #4]\n    mul r1, r5\n    add r1, r2, r1\n    ldr r0, [r4, r0]\n    ldr r1, [r1, #8]\n    mov r2, #4\n    bl NARC_AllocAndReadWholeMember\n    str r0, [sp, #0x14]\n    cmp r0, #0\n    bne _021EC14A\n    bl GF_AssertFail\n    ldr r0, [sp, #0x14]\n    add r1, sp, #0x18\n    bl NNS_G2dGetUnpackedScreenData\n    ldr r3, [sp, #0x18]\n    mov r0, #0\n    str r0, [sp]\n    add r2, r3, #0\n    mov r0, #0x41\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    ldr r3, [r3, #8]\n    ldr r0, [r0, #8]\n    mov r1, #2\n    add r2, #0xc\n    bl BgCopyOrUncompressTilemapBufferRangeToVram\n    mov r0, #0x41\n    lsl r0, r0, #2\n    ldr r3, [sp, #0x18]\n    ldr r0, [r4, r0]\n    add r2, r3, #0\n    ldr r0, [r0, #8]\n    ldr r3, [r3, #8]\n    mov r1, #2\n    add r2, #0xc\n    bl BG_LoadScreenTilemapData\n    mov r0, #0x20\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #6\n    str r0, [sp, #8]\n    add r0, #0xfe\n    ldr r0, [r4, r0]\n    mov r2, #0\n    ldr r0, [r0, #8]\n    mov r1, #2\n    add r3, r2, #0\n    bl BgTilemapRectChangePalette\n    mov r0, #0x41\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #2\n    ldr r0, [r0, #8]\n    bl BgCommitTilemapBufferToVram\n    ldr r0, [sp, #0x14]\n    bl Heap_Free\n    mov r0, #0\n    str r0, [sp, #0x14]\n    add sp, #0x24\n    pop {r4, r5, pc}\n    _021EC1B8: .word 0x0000FFFF"
    );
    #endif
}

void ov01_021EC1BC(void) {
    /* Original at 0x021EC1BC */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #8]\n    add r4, r1, #0\n    cmp r0, #0\n    beq _021EC1CC\n    bl GF_AssertFail\n    cmp r4, #0\n    bgt _021EC1D4\n    bl GF_AssertFail\n    cmp r4, #0x28\n    bls _021EC1DC\n    bl GF_AssertFail\n    add r0, r5, #0\n    add r0, #0xc\n    str r0, [r5, #8]\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_021EC1E4(void) {
    /* Original at 0x021EC1E4 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _021EC1F0 ; =memset\n    mov r1, #0\n    str r1, [r0, #8]\n    add r0, #0xc\n    mov r2, #0x28\n    bx r3\n    _021EC1F0: .word memset"
    );
    #endif
}

void ov01_021EC1F4(void) {
    /* Original at 0x021EC1F4 */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r7, r1, #0\n    ldr r6, [r5]\n    bl ov01_021EC8D8\n    add r4, r0, #0\n    bne _021EC208\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    add r1, r5, #0\n    str r6, [r4]\n    add r1, #0xc\n    str r1, [r4, #0x34]\n    ldr r1, [r5, #0x44]\n    str r1, [r4, #0x38]\n    ldr r1, [r5, #0x44]\n    str r4, [r1, #0x34]\n    str r4, [r5, #0x44]\n    add r1, r7, #0\n    bl ov01_021EC1BC\n    ldr r0, [r4, #8]\n    cmp r0, #0\n    bne _021EC22A\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [r4, #4]\n    cmp r0, #0\n    bne _021EC234\n    bl GF_AssertFail\n    ldr r0, [r4, #4]\n    mov r1, #1\n    bl Sprite_SetDrawFlag\n    add r0, r4, #0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021EC240(void) {
    /* Original at 0x021EC240 */
    /* Requires manual decompilation - 43 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x44\n    str r0, [sp, #0x2c]\n    add r7, r1, #0\n    add r5, r2, #0\n    str r3, [sp, #0x30]\n    mov r6, #0\n    add r4, sp, #0x34\n    ldr r0, [r5]\n    bl GF2DGfxResObj_GetResID\n    add r6, r6, #1\n    add r5, r5, #4\n    stmia r4!, {r0}\n    cmp r6, #4\n    blt _021EC250\n    ldr r0, [sp, #0x40]\n    str r0, [sp]\n    mov r0, #0\n    mvn r0, r0\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    ldr r0, [sp, #0x30]\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #0x58]\n    str r0, [sp, #0x10]\n    ldr r0, [r7, #8]\n    str r0, [sp, #0x14]\n    ldr r0, [r7, #0xc]\n    str r0, [sp, #0x18]\n    ldr r0, [r7, #0x10]\n    str r0, [sp, #0x1c]\n    ldr r0, [r7, #0x14]\n    str r0, [sp, #0x20]\n    mov r0, #0\n    str r0, [sp, #0x24]\n    str r0, [sp, #0x28]\n    ldr r0, [sp, #0x2c]\n    ldr r1, [sp, #0x34]\n    ldr r2, [sp, #0x38]\n    ldr r3, [sp, #0x3c]\n    bl CreateSpriteResourcesHeader\n    add sp, #0x44\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021EC29C(void) {
    *((u32*)(*((u32*)(r0 + 0x38)) + 0x34)) = *((u32*)(r0 + 0x34));
    *((u32*)(*((u32*)(r0 + 0x34)) + 0x38)) = *((u32*)(r0 + 0x38));
    Sprite_SetDrawFlag(*((u32*)(r0 + 4)), 0);
    ov01_021EC1E4(r4);
    memset(r4, 0, 0x3c);
    *((u32*)(r4 + 4)) = r5;
}

void ov01_021EC2CC(void) {
    ov01_021EC29C();
}

void ov01_021EC2E4(void) {
    /* Original at 0x021EC2E4 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0x34]\n    add r6, r1, #0\n    ldr r4, [r0, #0x34]\n    cmp r0, r5\n    beq _021EC2FC\n    blx r6\n    add r0, r4, #0\n    ldr r4, [r4, #0x34]\n    cmp r0, r5\n    bne _021EC2F2\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov01_021EC300(void) {
    /* Original at 0x021EC300 */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void ov01_021EC304(void) {
    Sprite_GetMatrixPtr();
}

void ov01_021EC31C(void) {
    /* Original at 0x021EC31C */
    /* Requires manual decompilation - 152 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x24\n    ldr r3, _021EC45C ; =NNS_G3dGlb + 0x258\n    add r5, r2, #0\n    str r0, [sp, #4]\n    str r1, [sp, #8]\n    ldmia r3!, {r0, r1}\n    add r2, sp, #0x18\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    str r0, [r2]\n    ldr r0, _021EC460 ; =0x00000F4C\n    ldr r2, [sp, #0x18]\n    ldr r1, [r5, r0]\n    add r0, #8\n    sub r6, r2, r1\n    ldr r1, [sp, #0x20]\n    ldr r0, [r5, r0]\n    sub r4, r1, r0\n    mov r0, #1\n    mov r1, #3\n    lsl r0, r0, #0xe\n    lsl r1, r1, #0xc\n    bl FX_Div\n    add r7, r0, #0\n    mov r0, #0x41\n    ldr r1, [r5]\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    ldr r0, [r0, #0x24]\n    bl Camera_GetPerspectiveAngle\n    str r0, [sp, #0xc]\n    mov r0, #0x41\n    ldr r1, [r5]\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    ldr r0, [r0, #0x24]\n    bl Camera_GetDistance\n    add r1, r0, #0\n    add r0, sp, #0x10\n    str r0, [sp]\n    ldr r0, [sp, #0xc]\n    add r2, r7, #0\n    add r3, sp, #0x14\n    bl sub_02020E10\n    mov r1, #1\n    ldr r0, [sp, #0x14]\n    lsl r1, r1, #0x14\n    bl FX_Div\n    str r0, [sp, #0x14]\n    cmp r4, #0\n    bgt _021EC398\n    ldr r0, [sp, #0x10]\n    ldr r1, _021EC464 ; =0x000BE8D0\n    bl FX_Div\n    b _021EC3A0\n    ldr r0, [sp, #0x10]\n    ldr r1, _021EC468 ; =0x000BE811\n    bl FX_Div\n    mov r7, #1\n    lsl r7, r7, #0xc\n    str r0, [sp, #0x10]\n    cmp r6, #0\n    bge _021EC3C8\n    ldr r7, _021EC46C ; =0xFFFFF000\n    asr r1, r6, #0x1f\n    add r0, r6, #0\n    asr r3, r7, #0xc\n    add r2, r7, #0\n    bl _ll_mul\n    mov r2, #2\n    mov r3, #0\n    lsl r2, r2, #0xa\n    add r2, r0, r2\n    adc r1, r3\n    lsl r0, r1, #0x14\n    lsr r6, r2, #0xc\n    orr r6, r0\n    ldr r1, [sp, #0x14]\n    add r0, r6, #0\n    bl FX_Div\n    add r6, r0, #0\n    cmp r7, #0\n    bge _021EC3F0\n    asr r1, r6, #0x1f\n    asr r3, r7, #0x1f\n    add r2, r7, #0\n    bl _ll_mul\n    mov r2, #2\n    mov r3, #0\n    lsl r2, r2, #0xa\n    add r2, r0, r2\n    adc r1, r3\n    lsl r0, r1, #0x14\n    lsr r6, r2, #0xc\n    orr r6, r0\n    mov r7, #1\n    lsl r7, r7, #0xc\n    cmp r4, #0\n    bge _021EC416\n    ldr r7, _021EC46C ; =0xFFFFF000\n    asr r1, r4, #0x1f\n    add r0, r4, #0\n    asr r3, r7, #0xc\n    add r2, r7, #0\n    bl _ll_mul\n    mov r2, #2\n    mov r3, #0\n    lsl r2, r2, #0xa\n    add r2, r0, r2\n    adc r1, r3\n    lsl r0, r1, #0x14\n    lsr r4, r2, #0xc\n    orr r4, r0\n    ldr r1, [sp, #0x10]\n    add r0, r4, #0\n    bl FX_Div\n    add r3, r0, #0\n    cmp r7, #0\n    bge _021EC43E\n    asr r1, r3, #0x1f\n    asr r3, r7, #0x1f\n    add r2, r7, #0\n    bl _ll_mul\n    mov r2, #2\n    mov r3, #0\n    lsl r2, r2, #0xa\n    add r2, r0, r2\n    adc r1, r3\n    lsl r0, r1, #0x14\n    lsr r3, r2, #0xc\n    orr r3, r0\n    add r0, r6, r3\n    beq _021EC450\n    ldr r0, _021EC460 ; =0x00000F4C\n    add r2, sp, #0x18\n    add r4, r5, r0\n    ldmia r2!, {r0, r1}\n    stmia r4!, {r0, r1}\n    ldr r0, [r2]\n    str r0, [r4]\n    ldr r0, [sp, #4]\n    str r6, [r0]\n    ldr r0, [sp, #8]\n    str r3, [r0]\n    add sp, #0x24\n    pop {r4, r5, r6, r7, pc}\n    _021EC45C: .word NNS_G3dGlb + 0x258\n    _021EC460: .word 0x00000F4C\n    _021EC464: .word 0x000BE8D0\n    _021EC468: .word 0x000BE811\n    _021EC46C: .word 0xFFFFF000"
    );
    #endif
}

void ov01_021EC470(void) {
    /* Original at 0x021EC470 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #8\n    add r5, r1, #0\n    add r4, r2, #0\n    add r1, sp, #4\n    add r2, sp, #0\n    bl ov01_021EC4A8\n    cmp r5, #0\n    beq _021EC494\n    ldr r0, [sp, #4]\n    asr r1, r0, #0xc\n    str r1, [r5]\n    bpl _021EC494\n    mov r0, #1\n    lsl r0, r0, #0xc\n    add r0, r1, r0\n    str r0, [r5]\n    cmp r4, #0\n    beq _021EC4A4\n    ldr r0, [sp]\n    asr r0, r0, #0xc\n    str r0, [r4]\n    bpl _021EC4A4\n    add r0, r0, #1\n    str r0, [r4]\n    add sp, #8\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_021EC4A8(void) {
    /* Original at 0x021EC4A8 */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    add r5, r0, #0\n    add r7, r1, #0\n    str r2, [sp]\n    add r0, sp, #8\n    add r1, sp, #4\n    add r2, r5, #0\n    bl ov01_021EC31C\n    ldr r4, [r5, #0x40]\n    add r5, #0xc\n    cmp r4, r5\n    beq _021EC4EC\n    add r6, sp, #0xc\n    add r0, r6, #0\n    add r1, r4, #0\n    bl ov01_021EC304\n    ldr r1, [sp, #0xc]\n    ldr r0, [sp, #8]\n    sub r0, r1, r0\n    str r0, [sp, #0xc]\n    ldr r1, [sp, #0x10]\n    ldr r0, [sp, #4]\n    sub r0, r1, r0\n    str r0, [sp, #0x10]\n    ldr r0, [r4, #4]\n    add r1, r6, #0\n    bl ov01_021EB5F4\n    ldr r4, [r4, #0x34]\n    cmp r4, r5\n    bne _021EC4C6\n    cmp r7, #0\n    beq _021EC4F4\n    ldr r0, [sp, #8]\n    str r0, [r7]\n    ldr r0, [sp]\n    cmp r0, #0\n    beq _021EC4FE\n    ldr r1, [sp, #4]\n    str r1, [r0]\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021EC504(void) {
    /* Original at 0x021EC504 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "str r1, [r0]\n    strh r2, [r0, #4]\n    mov r1, #0\n    strh r1, [r0, #6]\n    strh r3, [r0, #8]\n    strh r1, [r0, #0xa]\n    ldr r1, [sp]\n    strh r1, [r0, #0xc]\n    ldr r1, [sp, #4]\n    strh r1, [r0, #0xe]\n    ldr r1, [sp, #8]\n    strh r1, [r0, #0x10]\n    ldr r1, [sp, #0xc]\n    strh r1, [r0, #0x12]\n    ldr r1, [sp, #0x10]\n    str r1, [r0, #0x14]\n    ldr r1, [sp, #0x14]\n    str r1, [r0, #0x18]\n    bx lr"
    );
    #endif
}

void ov01_021EC52C(void) {
    /* Original at 0x021EC52C */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "strh r1, [r0, #0xc]\n    strh r2, [r0, #0xe]\n    ldr r1, [sp]\n    strh r3, [r0, #0x10]\n    str r1, [r0, #0x14]\n    bx lr"
    );
    #endif
}

void ov01_021EC538(void) {
    /* Original at 0x021EC538 */
    /* Requires manual decompilation - 98 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r0, #0x10\n    ldrsh r0, [r5, r0]\n    mov r4, #0\n    cmp r0, #0\n    bne _021EC54C\n    mov r0, #1\n    orr r4, r0\n    b _021EC572\n    bgt _021EC552\n    mov r2, #1\n    b _021EC554\n    add r2, r4, #0\n    mov r0, #0xe\n    ldrsh r1, [r5, r0]\n    mov r0, #8\n    ldrsh r0, [r5, r0]\n    cmp r0, r1\n    blt _021EC564\n    cmp r2, #0\n    beq _021EC56C\n    cmp r0, r1\n    bgt _021EC572\n    cmp r2, #1\n    bne _021EC572\n    mov r0, #1\n    orr r4, r0\n    strh r1, [r5, #8]\n    ldr r0, [r5, #0x14]\n    cmp r0, #0\n    bne _021EC57E\n    mov r0, #2\n    orr r4, r0\n    b _021EC5A4\n    bgt _021EC584\n    mov r2, #1\n    b _021EC586\n    mov r2, #0\n    mov r0, #0xc\n    ldrsh r1, [r5, r0]\n    mov r0, #4\n    ldrsh r0, [r5, r0]\n    cmp r0, r1\n    blt _021EC596\n    cmp r2, #0\n    beq _021EC59E\n    cmp r0, r1\n    bgt _021EC5A4\n    cmp r2, #1\n    bne _021EC5A4\n    mov r0, #2\n    orr r4, r0\n    strh r1, [r5, #4]\n    mov r0, #6\n    ldrsh r1, [r5, r0]\n    sub r1, r1, #1\n    strh r1, [r5, #6]\n    ldrsh r0, [r5, r0]\n    cmp r0, #0\n    bgt _021EC5F8\n    mov r1, #4\n    ldrsh r1, [r5, r1]\n    ldr r0, [r5]\n    ldr r2, [r5, #0x18]\n    blx r2\n    mov r0, #8\n    ldrsh r1, [r5, r0]\n    strh r1, [r5, #6]\n    mov r1, #1\n    tst r1, r4\n    bne _021EC5D2\n    ldrsh r1, [r5, r0]\n    mov r0, #0x10\n    ldrsh r0, [r5, r0]\n    add r0, r1, r0\n    strh r0, [r5, #8]\n    mov r0, #2\n    tst r0, r4\n    bne _021EC5F8\n    mov r0, #0xa\n    ldrsh r1, [r5, r0]\n    add r1, r1, #1\n    strh r1, [r5, #0xa]\n    ldrsh r1, [r5, r0]\n    mov r0, #0x12\n    ldrsh r0, [r5, r0]\n    cmp r1, r0\n    blt _021EC5F8\n    mov r0, #0\n    strh r0, [r5, #0xa]\n    mov r0, #4\n    ldrsh r1, [r5, r0]\n    ldr r0, [r5, #0x14]\n    add r0, r1, r0\n    strh r0, [r5, #4]\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_021EC5FC(void) {
    /* Original at 0x021EC5FC */
    /* Requires manual decompilation - 38 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #8\n    add r4, r1, #0\n    ldr r1, [sp, #0x1c]\n    str r2, [r4]\n    cmp r1, #0\n    beq _021EC64C\n    cmp r1, #1\n    bne _021EC630\n    add r1, r3, #0\n    add r3, sp, #0\n    add r0, r2, #0\n    ldrh r3, [r3, #0x14]\n    ldr r2, [sp, #0x10]\n    bl ov01_021EC678\n    add r0, r4, #0\n    bl ov01_021EC774\n    ldr r1, [sp, #0x18]\n    add r0, r4, #0\n    mov r2, #1\n    bl ov01_021EC790\n    add sp, #8\n    pop {r4, pc}\n    cmp r1, #2\n    bne _021EC64C\n    add r1, sp, #0\n    ldrh r1, [r1, #0x14]\n    ldr r4, [sp, #0x18]\n    str r1, [sp]\n    mov r1, #0x7f\n    mul r1, r4\n    str r1, [sp, #4]\n    add r1, r2, #0\n    add r2, r3, #0\n    ldr r3, [sp, #0x10]\n    bl ov01_021EC6A4\n    add sp, #8\n    pop {r4, pc}"
    );
    #endif
}

void ov01_021EC650(void) {
    /* Original at 0x021EC650 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r4, #1\n    cmp r2, #0\n    beq _021EC674\n    cmp r2, #1\n    bne _021EC666\n    add r0, r1, #0\n    bl ov01_021EC7AC\n    add r4, r0, #0\n    b _021EC674\n    cmp r2, #2\n    bne _021EC674\n    bl ov01_021EC728\n    cmp r0, #0\n    bne _021EC674\n    mov r4, #0\n    add r0, r4, #0\n    pop {r4, pc}"
    );
    #endif
}

void ov01_021EC678(void) {
    /* Original at 0x021EC678 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #8\n    str r1, [sp]\n    mov r1, #0\n    add r4, r3, #0\n    str r2, [sp, #4]\n    mvn r1, r1\n    mov r2, #1\n    mov r3, #0\n    add r5, r0, #0\n    bl ov01_021EA864\n    mov r1, #0\n    add r0, r5, #0\n    mvn r1, r1\n    add r2, r4, #0\n    mov r3, #0x1f\n    bl ov01_021EA89C\n    add sp, #8\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_021EC6A4(void) {
    /* Original at 0x021EC6A4 */
    /* Requires manual decompilation - 58 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r7, r1, #0\n    add r5, r0, #0\n    add r0, r7, #0\n    str r2, [sp]\n    str r3, [sp, #4]\n    ldr r4, [sp, #0x2c]\n    bl ov01_021EA858\n    str r0, [sp, #8]\n    add r0, r7, #0\n    bl ov01_021EA85C\n    str r0, [sp, #0xc]\n    add r0, r7, #0\n    bl ov01_021EA860\n    add r6, r0, #0\n    ldr r1, [sp, #0xc]\n    ldr r2, [sp, #4]\n    add r0, r5, #4\n    add r3, r4, #0\n    str r7, [r5]\n    bl ov01_021EB830\n    add r0, sp, #0x18\n    ldrh r7, [r0, #0x10]\n    add r0, r5, #0\n    mov r2, #0x1f\n    add r1, r6, #0\n    and r1, r2\n    add r0, #0x18\n    and r2, r7\n    add r3, r4, #0\n    bl ov01_021EB830\n    add r0, r5, #0\n    asr r1, r6, #5\n    mov r3, #0x1f\n    asr r2, r7, #5\n    add r0, #0x2c\n    and r1, r3\n    and r2, r3\n    add r3, r4, #0\n    bl ov01_021EB830\n    add r0, r5, #0\n    asr r1, r6, #0xa\n    mov r2, #0x1f\n    asr r3, r7, #0xa\n    and r1, r2\n    and r2, r3\n    add r0, #0x40\n    add r3, r4, #0\n    bl ov01_021EB830\n    add r5, #0x54\n    ldr r1, [sp, #8]\n    ldr r2, [sp]\n    add r0, r5, #0\n    add r3, r4, #0\n    bl ov01_021EB830\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021EC728(void) {
    /* Original at 0x021EC728 */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r0, r5, #4\n    bl ov01_021EB840\n    add r4, r0, #0\n    add r0, r5, #0\n    add r0, #0x18\n    bl ov01_021EB840\n    add r0, r5, #0\n    add r0, #0x2c\n    bl ov01_021EB840\n    add r0, r5, #0\n    add r0, #0x40\n    bl ov01_021EB840\n    add r0, r5, #0\n    add r0, #0x54\n    bl ov01_021EB840\n    ldr r3, [r5, #0x40]\n    ldr r0, [r5]\n    lsl r6, r3, #0xa\n    ldr r1, [r5, #0x54]\n    ldr r2, [r5, #4]\n    ldr r3, [r5, #0x18]\n    ldr r5, [r5, #0x2c]\n    lsl r5, r5, #5\n    orr r3, r5\n    orr r3, r6\n    lsl r3, r3, #0x10\n    lsr r3, r3, #0x10\n    bl ov01_021EC678\n    add r0, r4, #0\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov01_021EC774(void) {
    /* Original at 0x021EC774 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "mov r2, #0\n    add r3, r0, #0\n    add r1, r2, #0\n    add r0, r3, r2\n    add r2, r2, #1\n    strb r1, [r0, #4]\n    cmp r2, #0x20\n    blt _021EC77A\n    ldr r0, [r3]\n    add r1, r3, #4\n    ldr r3, _021EC78C ; =ov01_021EA8C4\n    bx r3\n    _021EC78C: .word ov01_021EA8C4"
    );
    #endif
}

void ov01_021EC790(void) {
    /* Original at 0x021EC790 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "mov r3, #0x7f\n    str r3, [r0, #0x24]\n    mov r3, #0\n    str r3, [r0, #0x28]\n    strh r1, [r0, #0x2c]\n    cmp r2, #1\n    bne _021EC7A4\n    mov r1, #1\n    strh r1, [r0, #0x2e]\n    bx lr\n    sub r1, r3, #1\n    strh r1, [r0, #0x2e]\n    bx lr"
    );
    #endif
}

void ov01_021EC7AC(void) {
    /* Original at 0x021EC7AC */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    bl ov01_021EC7E8\n    add r4, r0, #0\n    ldr r0, [r5, #0x28]\n    cmp r0, #0\n    bne _021EC7C4\n    ldr r0, [r5]\n    add r1, r5, #4\n    bl ov01_021EA8C4\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_021EC7C8(void) {
    *((u32*)(r0 + 0x24)) = 1;
    *((u32*)(r0 + 0x28)) = 0;
    *((u16*)(r0 + 0x2c)) = 0;
    *((u16*)(r0 + 0x2e)) = 1;
    ov01_021EC828(0, 1);
    ov01_021EA8C4((r4 + 4));
}

void ov01_021EC7E8(void) {
    /* Original at 0x021EC7E8 */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r1, #0x2e\n    ldrsh r1, [r5, r1]\n    mov r4, #0\n    cmp r1, #0\n    bne _021EC7FA\n    mov r4, #1\n    b _021EC824\n    ldr r1, [r5, #0x24]\n    cmp r1, #0\n    bgt _021EC804\n    mov r4, #1\n    b _021EC824\n    ldr r1, [r5, #0x28]\n    add r2, r1, #1\n    str r2, [r5, #0x28]\n    mov r1, #0x2c\n    ldrsh r1, [r5, r1]\n    cmp r2, r1\n    blt _021EC824\n    str r4, [r5, #0x28]\n    bl ov01_021EC828\n    ldr r0, [r5, #0x24]\n    sub r0, r0, #1\n    str r0, [r5, #0x24]\n    cmp r0, #0\n    bgt _021EC824\n    mov r4, #1\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_021EC828(void) {
    /* Original at 0x021EC828 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    mov r1, #0x2e\n    ldrsh r1, [r0, r1]\n    ldr r2, [r0, #0x24]\n    cmp r1, #0\n    bge _021EC83A\n    mov r1, #0x7f\n    sub r2, r1, r2\n    b _021EC83A\n    asr r1, r2, #1\n    lsr r1, r1, #0x1e\n    add r1, r2, r1\n    asr r4, r1, #2\n    mov r3, #0x1f\n    cmp r4, #0x1f\n    bge _021EC856\n    sub r1, r3, r4\n    lsl r2, r1, #2\n    add r1, r0, r3\n    sub r3, r3, #1\n    strb r2, [r1, #4]\n    cmp r3, r4\n    bgt _021EC848\n    pop {r3, r4}\n    bx lr"
    );
    #endif
}

void ov01_021EC85C(void) {
    /* Original at 0x021EC85C */
    /* Requires manual decompilation - 60 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r4, r1, #0\n    ldr r1, [sp, #0x28]\n    str r0, [sp]\n    str r1, [sp, #0x28]\n    add r1, r2, #0\n    str r2, [sp, #4]\n    str r3, [sp, #8]\n    ldr r7, [sp, #0x2c]\n    blx r4\n    ldr r0, [sp]\n    mov r6, #0\n    ldr r5, [r0, #0x40]\n    str r6, [sp, #0x10]\n    ldr r0, [r5, #0x34]\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #4]\n    cmp r0, #0\n    ble _021EC8D2\n    ldr r0, [sp]\n    add r0, #0xc\n    str r0, [sp]\n    ldr r0, [sp]\n    cmp r5, r0\n    beq _021EC8D2\n    mov r4, #0\n    cmp r6, #0\n    ble _021EC8A6\n    add r0, r5, #0\n    blx r7\n    ldr r0, [r5, #8]\n    cmp r0, #0\n    beq _021EC8A6\n    add r4, r4, #1\n    cmp r4, r6\n    blt _021EC896\n    ldr r5, [sp, #0xc]\n    ldr r1, [sp, #0x10]\n    add r0, r5, #0\n    ldr r0, [r0, #0x34]\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #8]\n    cmp r1, r0\n    blt _021EC8C6\n    add r0, r1, #0\n    ldr r1, [sp, #8]\n    bl _s32_div_f\n    cmp r1, #0\n    bne _021EC8C6\n    ldr r0, [sp, #0x28]\n    add r6, r6, r0\n    ldr r0, [sp, #0x10]\n    add r1, r0, #1\n    ldr r0, [sp, #4]\n    str r1, [sp, #0x10]\n    cmp r1, r0\n    blt _021EC88A\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021EC8D8(void) {
    /* Original at 0x021EC8D8 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "mov r2, #0\n    add r3, r0, #0\n    ldr r1, [r3, #0x48]\n    cmp r1, #0\n    bne _021EC8EC\n    mov r1, #0x3c\n    add r0, #0x48\n    mul r1, r2\n    add r0, r0, r1\n    bx lr\n    add r2, r2, #1\n    add r3, #0x3c\n    cmp r2, #0x40\n    blt _021EC8DC\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void ov01_021EC8F8(void) {
    /* Original at 0x021EC8F8 */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, _021EC948 ; =0x00000F62\n    ldrh r2, [r1, r0]\n    cmp r2, #5\n    bhi _021EC946\n    add r2, r2, r2\n    add r2, pc\n    ldrh r2, [r2, #6]\n    lsl r2, r2, #0x10\n    asr r2, r2, #0x10\n    add pc, r2\n    _021EC90E: ; jump table\n    mov r2, #1\n    strh r2, [r1, r0]\n    pop {r3, pc}\n    mov r2, #3\n    strh r2, [r1, r0]\n    pop {r3, pc}\n    mov r2, #3\n    strh r2, [r1, r0]\n    pop {r3, pc}\n    add r2, r0, #4\n    ldrh r2, [r1, r2]\n    cmp r2, #5\n    bne _021EC946\n    mov r2, #4\n    strh r2, [r1, r0]\n    pop {r3, pc}\n    mov r2, #5\n    strh r2, [r1, r0]\n    pop {r3, pc}\n    ldr r0, [r1, #4]\n    bl ov01_021EBCA4\n    pop {r3, pc}\n    _021EC948: .word 0x00000F62"
    );
    #endif
}

void ov01_021EC94C(void) {
    /* Original at 0x021EC94C */
    /* Requires manual decompilation - 272 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x18\n    ldr r0, _021ECB8C ; =0x00000F58\n    add r4, r1, #0\n    add r2, r0, #0\n    add r2, #0xa\n    ldrh r2, [r4, r2]\n    ldr r5, [r4, r0]\n    cmp r2, #5\n    bhi _021ECA1A\n    add r2, r2, r2\n    add r2, pc\n    ldrh r2, [r2, #6]\n    lsl r2, r2, #0x10\n    asr r2, r2, #0x10\n    add pc, r2\n    _021EC96C: ; jump table\n    mov r0, #0x14\n    str r0, [sp]\n    mov r2, #1\n    str r2, [sp, #4]\n    sub r0, r2, #2\n    str r0, [sp, #8]\n    str r2, [sp, #0xc]\n    mov r0, #2\n    str r0, [sp, #0x10]\n    ldr r0, _021ECB90 ; =ov01_021ECBB4\n    mov r3, #8\n    str r0, [sp, #0x14]\n    add r0, r5, #0\n    bl ov01_021EC504\n    ldr r0, _021ECB94 ; =0x0000726F\n    mov r2, #0x41\n    str r0, [sp]\n    ldr r0, _021ECB98 ; =0x00006B5A\n    lsl r2, r2, #2\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    ldr r0, _021ECB9C ; =0x00000F64\n    add r1, r5, #0\n    ldrh r0, [r4, r0]\n    add r1, #0x1c\n    str r0, [sp, #0xc]\n    ldr r3, [r4]\n    add r0, r5, #0\n    ldr r2, [r3, r2]\n    add r0, #0x4c\n    ldr r2, [r2, #0x4c]\n    mov r3, #3\n    bl ov01_021EC5FC\n    mov r0, #0\n    add r5, #0xb4\n    str r0, [r5]\n    ldr r0, _021ECBA0 ; =ov01_021EDA7C\n    add r1, r4, #0\n    mov r2, #0x64\n    bl SysTask_CreateOnMainQueue\n    ldr r1, _021ECBA4 ; =0x00000F6C\n    mov r2, #0x1e\n    str r0, [r4, r1]\n    sub r0, r1, #4\n    str r2, [r4, r0]\n    mov r0, #1\n    sub r1, #0xa\n    strh r0, [r4, r1]\n    b _021ECB60\n    add r0, r5, #0\n    bl ov01_021EC538\n    add r6, r0, #0\n    add r0, r5, #0\n    add r0, #0xb4\n    ldr r0, [r0]\n    cmp r0, #0\n    ble _021ECA02\n    add r0, r5, #0\n    add r0, #0xb4\n    ldr r0, [r0]\n    add r5, #0xb4\n    sub r0, r0, #1\n    str r0, [r5]\n    b _021ECB60\n    ldr r2, _021ECB9C ; =0x00000F64\n    add r0, r5, #0\n    ldrh r2, [r4, r2]\n    add r5, #0x1c\n    add r0, #0x4c\n    add r1, r5, #0\n    bl ov01_021EC650\n    cmp r0, #1\n    bne _021ECA1A\n    cmp r6, #3\n    beq _021ECA1C\n    b _021ECB60\n    ldr r0, _021ECBA8 ; =0x00000F62\n    mov r1, #3\n    strh r1, [r4, r0]\n    b _021ECB60\n    mov r2, #0x14\n    mov r3, #1\n    str r2, [sp]\n    str r3, [sp, #4]\n    sub r0, r3, #2\n    str r0, [sp, #8]\n    str r3, [sp, #0xc]\n    mov r0, #2\n    str r0, [sp, #0x10]\n    ldr r0, _021ECB90 ; =ov01_021ECBB4\n    str r0, [sp, #0x14]\n    add r0, r5, #0\n    bl ov01_021EC504\n    ldr r0, _021ECB9C ; =0x00000F64\n    ldrh r0, [r4, r0]\n    cmp r0, #0\n    beq _021ECA66\n    mov r0, #0x41\n    ldr r1, [r4]\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    ldr r2, _021ECB94 ; =0x0000726F\n    ldr r0, [r0, #0x4c]\n    ldr r3, _021ECB98 ; =0x00006B5A\n    mov r1, #3\n    str r0, [r5, #0x1c]\n    bl ov01_021EC678\n    add r5, #0x1c\n    add r0, r5, #0\n    bl ov01_021EC7C8\n    mov r0, #1\n    str r0, [sp]\n    ldr r0, _021ECBAC ; =ov01_021ECC70\n    ldr r1, _021ECB90 ; =ov01_021ECBB4\n    str r0, [sp, #4]\n    add r0, r4, #0\n    mov r2, #0x14\n    mov r3, #0xa\n    bl ov01_021EC85C\n    ldr r0, _021ECBA0 ; =ov01_021EDA7C\n    add r1, r4, #0\n    mov r2, #0x64\n    bl SysTask_CreateOnMainQueue\n    ldr r1, _021ECBA4 ; =0x00000F6C\n    mov r2, #0x1e\n    str r0, [r4, r1]\n    sub r0, r1, #4\n    str r2, [r4, r0]\n    mov r0, #3\n    sub r1, #0xa\n    strh r0, [r4, r1]\n    b _021ECB60\n    mov r0, #6\n    ldrsh r1, [r5, r0]\n    sub r0, r1, #1\n    strh r0, [r5, #6]\n    cmp r1, #0\n    bgt _021ECAB2\n    mov r1, #4\n    ldrsh r1, [r5, r1]\n    add r0, r4, #0\n    bl ov01_021ECBB4\n    mov r0, #8\n    ldrsh r0, [r5, r0]\n    strh r0, [r5, #6]\n    ldr r0, _021ECBB0 ; =0x00000F66\n    ldrh r0, [r4, r0]\n    cmp r0, #5\n    bne _021ECB60\n    mov r0, #1\n    mvn r0, r0\n    str r0, [sp]\n    add r0, r5, #0\n    mov r1, #0\n    mov r2, #8\n    mov r3, #1\n    bl ov01_021EC52C\n    ldr r0, _021ECB9C ; =0x00000F64\n    ldrh r0, [r4, r0]\n    cmp r0, #0\n    beq _021ECAE0\n    add r0, r5, #0\n    add r0, #0x1c\n    mov r1, #1\n    mov r2, #0\n    bl ov01_021EC790\n    mov r0, #0\n    add r5, #0xb4\n    str r0, [r5]\n    ldr r0, _021ECBA8 ; =0x00000F62\n    mov r1, #4\n    strh r1, [r4, r0]\n    add r0, r4, #0\n    bl ov01_021EDAE0\n    b _021ECB60\n    add r0, r5, #0\n    bl ov01_021EC538\n    add r6, r0, #0\n    add r0, r5, #0\n    add r0, #0xb4\n    ldr r0, [r0]\n    cmp r0, #0\n    ble _021ECB14\n    add r0, r5, #0\n    add r0, #0xb4\n    ldr r0, [r0]\n    add r5, #0xb4\n    sub r0, r0, #1\n    str r0, [r5]\n    b _021ECB60\n    ldr r0, _021ECB9C ; =0x00000F64\n    ldrh r0, [r4, r0]\n    cmp r0, #0\n    beq _021ECB26\n    add r5, #0x1c\n    add r0, r5, #0\n    bl ov01_021EC7AC\n    b _021ECB28\n    mov r0, #1\n    cmp r0, #1\n    bne _021ECB60\n    cmp r6, #3\n    bne _021ECB60\n    add r0, r4, #0\n    ldr r1, [r4, #0x40]\n    add r0, #0xc\n    cmp r1, r0\n    bne _021ECB60\n    ldr r0, _021ECBA8 ; =0x00000F62\n    mov r1, #5\n    strh r1, [r4, r0]\n    b _021ECB60\n    add r0, #0xc\n    ldrh r0, [r4, r0]\n    cmp r0, #0\n    beq _021ECB5A\n    mov r2, #0\n    str r2, [sp]\n    str r2, [sp, #4]\n    ldr r0, [r5, #0x1c]\n    mov r1, #1\n    add r3, r2, #0\n    bl ov01_021EA864\n    ldr r0, [r4, #4]\n    bl ov01_021EBCA4\n    ldr r0, _021ECBA8 ; =0x00000F62\n    ldrh r0, [r4, r0]\n    cmp r0, #5\n    beq _021ECB86\n    cmp r0, #0\n    beq _021ECB86\n    add r0, r4, #0\n    ldr r1, _021ECBAC ; =ov01_021ECC70\n    add r0, #0xc\n    bl ov01_021EC2E4\n    mov r1, #0\n    add r0, r4, #0\n    add r2, r1, #0\n    bl ov01_021EC470\n    add r0, r4, #0\n    bl ov01_021EC300\n    add sp, #0x18\n    pop {r4, r5, r6, pc}\n    nop\n    _021ECB8C: .word 0x00000F58\n    _021ECB90: .word ov01_021ECBB4\n    _021ECB94: .word 0x0000726F\n    _021ECB98: .word 0x00006B5A\n    _021ECB9C: .word 0x00000F64\n    _021ECBA0: .word ov01_021EDA7C\n    _021ECBA4: .word 0x00000F6C\n    _021ECBA8: .word 0x00000F62\n    _021ECBAC: .word ov01_021ECC70\n    _021ECBB0: .word 0x00000F66"
    );
    #endif
}

void ov01_021ECBB4(void) {
    /* Original at 0x021ECBB4 */
    /* Requires manual decompilation - 84 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #8]\n    add r0, r1, #0\n    str r1, [sp, #4]\n    cmp r0, #0\n    ble _021ECC62\n    ldr r0, [sp]\n    mov r1, #0x20\n    bl ov01_021EC1F4\n    add r6, r0, #0\n    beq _021ECC62\n    ldr r4, [r6, #8]\n    bl MTRandom\n    mov r1, #0\n    str r1, [r4]\n    mov r1, #3\n    add r7, r0, #0\n    bl _u32_div_f\n    add r5, r1, #0\n    lsl r1, r5, #0x10\n    ldr r0, [r6, #4]\n    lsr r1, r1, #0x10\n    bl Sprite_SetAnimationFrame\n    add r0, r7, #0\n    mov r1, #0x14\n    bl _u32_div_f\n    add r2, r5, #1\n    mov r0, #0xa\n    mul r0, r2\n    add r0, r1, r0\n    str r0, [r4, #8]\n    cmp r5, #2\n    bne _021ECC0C\n    ldr r0, [r4, #8]\n    add r0, #0xa\n    str r0, [r4, #8]\n    add r0, r1, #0\n    mov r1, #4\n    mvn r1, r1\n    bl _s32_div_f\n    mov r1, #4\n    add r2, r5, #1\n    mvn r1, r1\n    mul r1, r2\n    add r0, r0, r1\n    str r0, [r4, #0x10]\n    cmp r5, #2\n    bne _021ECC2C\n    ldr r0, [r4, #0x10]\n    sub r0, r0, #5\n    str r0, [r4, #0x10]\n    mov r0, #0\n    str r0, [r4, #0xc]\n    add r0, r5, #1\n    str r0, [r4, #4]\n    ldr r1, _021ECC68 ; =0x0000010E\n    add r0, r7, #0\n    bl _u32_div_f\n    mov r0, #0xf\n    mul r0, r5\n    add r0, r1, r0\n    lsl r0, r0, #0xc\n    str r0, [sp, #0xc]\n    ldr r0, _021ECC6C ; =0xFFFA0000\n    add r1, sp, #0xc\n    str r0, [sp, #0x10]\n    mov r0, #0\n    str r0, [sp, #0x14]\n    ldr r0, [r6, #4]\n    bl ov01_021EB5F4\n    ldr r0, [sp, #8]\n    add r1, r0, #1\n    ldr r0, [sp, #4]\n    str r1, [sp, #8]\n    cmp r1, r0\n    blt _021ECBC6\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021ECC68: .word 0x0000010E\n    _021ECC6C: .word 0xFFFA0000"
    );
    #endif
}

void ov01_021ECC70(void) {
    /* Original at 0x021ECC70 */
    /* Requires manual decompilation - 69 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r6, r0, #0\n    ldr r5, [r6, #8]\n    add r0, sp, #0\n    add r1, r6, #0\n    bl ov01_021EC304\n    ldr r0, [r5, #0xc]\n    cmp r0, #0\n    beq _021ECC92\n    cmp r0, #1\n    beq _021ECCEA\n    cmp r0, #2\n    beq _021ECCFC\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    mov r4, #0\n    mov r7, #2\n    ldr r0, [r5, #0x10]\n    ldr r1, [sp]\n    lsl r0, r0, #0xc\n    add r0, r1, r0\n    str r0, [sp]\n    ldr r0, [r5, #8]\n    ldr r1, [sp, #4]\n    lsl r0, r0, #0xc\n    add r0, r1, r0\n    str r0, [sp, #4]\n    ldr r1, [r5]\n    add r0, r1, #1\n    str r0, [r5]\n    ldr r0, [r5, #4]\n    cmp r1, r0\n    ble _021ECCD8\n    bl MTRandom\n    mov r1, #0xa\n    bl _u32_div_f\n    cmp r1, #7\n    bhs _021ECCC8\n    str r7, [r5, #0xc]\n    b _021ECCD8\n    mov r0, #1\n    str r0, [r5, #0xc]\n    mov r0, #4\n    str r0, [r5]\n    ldr r0, [r6, #4]\n    mov r1, #3\n    bl Sprite_SetAnimationFrame\n    add r4, r4, #1\n    cmp r4, #2\n    blt _021ECC96\n    ldr r0, [r6, #4]\n    add r1, sp, #0\n    bl ov01_021EB5F4\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    ldr r1, [r5]\n    sub r0, r1, #1\n    str r0, [r5]\n    cmp r1, #0\n    bgt _021ECD02\n    mov r0, #2\n    add sp, #0xc\n    str r0, [r5, #0xc]\n    pop {r4, r5, r6, r7, pc}\n    add r0, r6, #0\n    bl ov01_021EC29C\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021ECD08(void) {
    /* Original at 0x021ECD08 */
    /* Requires manual decompilation - 259 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x18\n    ldr r0, _021ECF2C ; =0x00000F58\n    add r5, r1, #0\n    add r2, r0, #0\n    add r2, #0xa\n    ldrh r2, [r5, r2]\n    ldr r4, [r5, r0]\n    cmp r2, #5\n    bhi _021ECDCC\n    add r2, r2, r2\n    add r2, pc\n    ldrh r2, [r2, #6]\n    lsl r2, r2, #0x10\n    asr r2, r2, #0x10\n    add pc, r2\n    _021ECD28: ; jump table\n    mov r0, #6\n    str r0, [sp]\n    mov r0, #3\n    str r0, [sp, #4]\n    sub r0, #8\n    str r0, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    mov r2, #1\n    ldr r0, _021ECF30 ; =ov01_021ECF4C\n    str r2, [sp, #0x10]\n    str r0, [sp, #0x14]\n    add r0, r4, #0\n    mov r3, #0x1e\n    bl ov01_021EC504\n    ldr r0, _021ECF34 ; =0x0000726F\n    mov r2, #0x41\n    str r0, [sp]\n    ldr r0, _021ECF38 ; =0x00006318\n    add r1, r4, #0\n    str r0, [sp, #4]\n    mov r0, #2\n    str r0, [sp, #8]\n    ldr r0, _021ECF3C ; =0x00000F64\n    lsl r2, r2, #2\n    ldrh r0, [r5, r0]\n    add r1, #0x1c\n    str r0, [sp, #0xc]\n    ldr r3, [r5]\n    add r0, r4, #0\n    ldr r2, [r3, r2]\n    add r0, #0x4c\n    ldr r2, [r2, #0x4c]\n    mov r3, #3\n    bl ov01_021EC5FC\n    add r0, r4, #0\n    mov r1, #8\n    add r0, #0xb4\n    str r1, [r0]\n    mov r0, #0\n    add r4, #0xb8\n    str r0, [r4]\n    ldr r0, _021ECF40 ; =0x00000F62\n    mov r1, #1\n    strh r1, [r5, r0]\n    b _021ECF02\n    add r0, r4, #0\n    bl ov01_021EC538\n    add r6, r0, #0\n    add r0, r4, #0\n    add r0, #0xb4\n    ldr r0, [r0]\n    cmp r0, #0\n    ble _021ECDB4\n    add r0, r4, #0\n    add r0, #0xb4\n    ldr r0, [r0]\n    add r4, #0xb4\n    sub r0, r0, #1\n    str r0, [r4]\n    b _021ECF02\n    ldr r2, _021ECF3C ; =0x00000F64\n    add r0, r4, #0\n    ldrh r2, [r5, r2]\n    add r4, #0x1c\n    add r0, #0x4c\n    add r1, r4, #0\n    bl ov01_021EC650\n    cmp r0, #1\n    bne _021ECDCC\n    cmp r6, #3\n    beq _021ECDCE\n    b _021ECF02\n    ldr r0, _021ECF40 ; =0x00000F62\n    mov r1, #3\n    strh r1, [r5, r0]\n    b _021ECF02\n    mov r2, #6\n    mov r3, #3\n    str r2, [sp]\n    add r0, r3, #0\n    str r3, [sp, #4]\n    sub r0, #8\n    str r0, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    mov r0, #1\n    str r0, [sp, #0x10]\n    ldr r0, _021ECF30 ; =ov01_021ECF4C\n    str r0, [sp, #0x14]\n    add r0, r4, #0\n    bl ov01_021EC504\n    ldr r0, _021ECF3C ; =0x00000F64\n    ldrh r0, [r5, r0]\n    cmp r0, #0\n    beq _021ECE1C\n    mov r0, #0x41\n    ldr r1, [r5]\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    ldr r2, _021ECF34 ; =0x0000726F\n    ldr r0, [r0, #0x4c]\n    ldr r3, _021ECF38 ; =0x00006318\n    mov r1, #3\n    str r0, [r4, #0x1c]\n    bl ov01_021EC678\n    add r0, r4, #0\n    add r0, #0x1c\n    bl ov01_021EC7C8\n    mov r0, #0\n    add r4, #0xb8\n    str r0, [r4]\n    mov r0, #3\n    str r0, [sp]\n    ldr r0, _021ECF44 ; =ov01_021ED070\n    ldr r1, _021ECF30 ; =ov01_021ECF4C\n    str r0, [sp, #4]\n    add r0, r5, #0\n    mov r2, #0x14\n    mov r3, #2\n    bl ov01_021EC85C\n    ldr r0, _021ECF40 ; =0x00000F62\n    mov r1, #3\n    strh r1, [r5, r0]\n    b _021ECF02\n    mov r0, #6\n    ldrsh r1, [r4, r0]\n    sub r0, r1, #1\n    strh r0, [r4, #6]\n    cmp r1, #0\n    bgt _021ECE5A\n    mov r1, #4\n    ldrsh r1, [r4, r1]\n    add r0, r5, #0\n    bl ov01_021ECF4C\n    mov r0, #8\n    ldrsh r0, [r4, r0]\n    strh r0, [r4, #6]\n    ldr r0, _021ECF48 ; =0x00000F66\n    ldrh r0, [r5, r0]\n    cmp r0, #5\n    bne _021ECF02\n    mov r0, #2\n    mvn r0, r0\n    str r0, [sp]\n    add r0, r4, #0\n    mov r1, #0\n    mov r2, #0x1e\n    mov r3, #5\n    bl ov01_021EC52C\n    ldr r0, _021ECF3C ; =0x00000F64\n    ldrh r0, [r5, r0]\n    cmp r0, #0\n    beq _021ECE88\n    add r0, r4, #0\n    add r0, #0x1c\n    mov r1, #1\n    mov r2, #0\n    bl ov01_021EC790\n    mov r0, #0\n    add r4, #0xb4\n    str r0, [r4]\n    ldr r0, _021ECF40 ; =0x00000F62\n    mov r1, #4\n    strh r1, [r5, r0]\n    b _021ECF02\n    add r0, r4, #0\n    bl ov01_021EC538\n    add r6, r0, #0\n    add r0, r4, #0\n    add r0, #0xb4\n    ldr r0, [r0]\n    cmp r0, #0\n    ble _021ECEB6\n    add r0, r4, #0\n    add r0, #0xb4\n    ldr r0, [r0]\n    add r4, #0xb4\n    sub r0, r0, #1\n    str r0, [r4]\n    b _021ECF02\n    ldr r0, _021ECF3C ; =0x00000F64\n    ldrh r0, [r5, r0]\n    cmp r0, #0\n    beq _021ECEC8\n    add r4, #0x1c\n    add r0, r4, #0\n    bl ov01_021EC7AC\n    b _021ECECA\n    mov r0, #1\n    cmp r0, #1\n    bne _021ECF02\n    cmp r6, #3\n    bne _021ECF02\n    add r0, r5, #0\n    ldr r1, [r5, #0x40]\n    add r0, #0xc\n    cmp r1, r0\n    bne _021ECF02\n    ldr r0, _021ECF40 ; =0x00000F62\n    mov r1, #5\n    strh r1, [r5, r0]\n    b _021ECF02\n    add r0, #0xc\n    ldrh r0, [r5, r0]\n    cmp r0, #0\n    beq _021ECEFC\n    mov r2, #0\n    str r2, [sp]\n    str r2, [sp, #4]\n    ldr r0, [r4, #0x1c]\n    mov r1, #1\n    add r3, r2, #0\n    bl ov01_021EA864\n    ldr r0, [r5, #4]\n    bl ov01_021EBCA4\n    ldr r0, _021ECF40 ; =0x00000F62\n    ldrh r0, [r5, r0]\n    cmp r0, #5\n    beq _021ECF28\n    cmp r0, #0\n    beq _021ECF28\n    add r0, r5, #0\n    ldr r1, _021ECF44 ; =ov01_021ED070\n    add r0, #0xc\n    bl ov01_021EC2E4\n    mov r1, #0\n    add r0, r5, #0\n    add r2, r1, #0\n    bl ov01_021EC470\n    add r0, r5, #0\n    bl ov01_021EC300\n    add sp, #0x18\n    pop {r4, r5, r6, pc}\n    _021ECF2C: .word 0x00000F58\n    _021ECF30: .word ov01_021ECF4C\n    _021ECF34: .word 0x0000726F\n    _021ECF38: .word 0x00006318\n    _021ECF3C: .word 0x00000F64\n    _021ECF40: .word 0x00000F62\n    _021ECF44: .word ov01_021ED070\n    _021ECF48: .word 0x00000F66"
    );
    #endif
}

void ov01_021ECF4C(void) {
    /* Original at 0x021ECF4C */
    /* Requires manual decompilation - 133 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x58\n    ldr r3, _021ED064 ; =ov01_0220673C\n    add r2, sp, #0x48\n    str r0, [sp]\n    str r1, [sp, #4]\n    ldmia r3!, {r0, r1}\n    str r2, [sp, #0x10]\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldr r3, _021ED068 ; =ov01_0220674C\n    add r2, sp, #0x38\n    str r2, [sp, #0x14]\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldr r1, _021ED06C ; =0x00000F58\n    ldr r0, [sp]\n    ldr r6, [r0, r1]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #4]\n    cmp r0, #0\n    ble _021ED060\n    add r0, r6, #0\n    str r0, [sp, #0x18]\n    add r0, #0xb8\n    str r0, [sp, #0x18]\n    mov r0, #7\n    mvn r0, r0\n    lsl r0, r0, #0xc\n    str r0, [sp, #0x1c]\n    ldr r0, [sp]\n    mov r1, #0x20\n    bl ov01_021EC1F4\n    add r4, r0, #0\n    beq _021ED060\n    ldr r0, [sp, #0x18]\n    ldr r5, [r4, #8]\n    ldr r0, [r0]\n    add r1, r0, #1\n    ldr r0, [sp, #0x18]\n    str r1, [r0]\n    add r0, r6, #0\n    add r0, #0xb8\n    ldr r1, [r0]\n    mov r0, #0x32\n    lsl r0, r0, #4\n    cmp r1, r0\n    blt _021ECFBE\n    add r1, r6, #0\n    add r1, #0xb8\n    mov r0, #0\n    str r0, [r1]\n    add r0, r6, #0\n    add r0, #0xb8\n    ldr r0, [r0]\n    mov r1, #0xc8\n    bl _s32_div_f\n    lsl r0, r0, #2\n    ldr r1, [sp, #0x10]\n    str r0, [sp, #8]\n    ldr r0, [r1, r0]\n    str r0, [r5, #0x14]\n    mov r0, #0\n    str r0, [r5]\n    bl MTRandom\n    mov r1, #0x2a\n    bl _u32_div_f\n    add r0, r1, #4\n    str r0, [r5, #4]\n    sub r0, r0, #4\n    mov r1, #0xf\n    bl _s32_div_f\n    add r7, r0, #0\n    lsl r1, r7, #0x10\n    ldr r0, [r4, #4]\n    lsr r1, r1, #0x10\n    bl Sprite_SetAnimationFrame\n    add r0, r7, #1\n    neg r1, r0\n    str r1, [r5, #0x10]\n    ldr r2, [sp, #0x14]\n    ldr r1, [sp, #8]\n    ldr r1, [r2, r1]\n    mul r1, r0\n    str r1, [r5, #8]\n    mov r0, #0\n    str r0, [r5, #0xc]\n    add r0, sp, #0x20\n    add r1, r4, #0\n    bl ov01_021EC304\n    add r3, sp, #0x20\n    ldmia r3!, {r0, r1}\n    add r2, sp, #0x2c\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    str r0, [r2]\n    bl MTRandom\n    mov r1, #0x69\n    lsl r1, r1, #2\n    bl _u32_div_f\n    mov r0, #1\n    sub r2, r0, r7\n    sub r0, #0x15\n    mul r0, r2\n    add r1, r0, r1\n    mov r0, #7\n    mvn r0, r0\n    str r0, [sp, #0x30]\n    mov r0, #0\n    str r0, [sp, #0x34]\n    str r1, [sp, #0x2c]\n    lsl r0, r1, #0xc\n    str r0, [sp, #0x2c]\n    ldr r0, [sp, #0x1c]\n    add r1, sp, #0x2c\n    str r0, [sp, #0x30]\n    ldr r0, [r4, #4]\n    bl ov01_021EB5F4\n    ldr r0, [sp, #0xc]\n    add r1, r0, #1\n    ldr r0, [sp, #4]\n    str r1, [sp, #0xc]\n    cmp r1, r0\n    blt _021ECF90\n    add sp, #0x58\n    pop {r3, r4, r5, r6, r7, pc}\n    _021ED064: .word ov01_0220673C\n    _021ED068: .word ov01_0220674C\n    _021ED06C: .word 0x00000F58"
    );
    #endif
}

void ov01_021ED070(void) {
    /* Original at 0x021ED070 */
    /* Requires manual decompilation - 60 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x18\n    add r5, r0, #0\n    add r0, sp, #0\n    add r1, r5, #0\n    ldr r4, [r5, #8]\n    bl ov01_021EC304\n    add r3, sp, #0\n    ldmia r3!, {r0, r1}\n    add r2, sp, #0xc\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    str r0, [r2]\n    ldr r0, [r4, #0xc]\n    cmp r0, #0\n    beq _021ED09A\n    cmp r0, #1\n    beq _021ED0E6\n    add sp, #0x18\n    pop {r3, r4, r5, pc}\n    ldr r0, [r4, #0x10]\n    ldr r1, [sp, #0xc]\n    lsl r0, r0, #0xc\n    add r0, r1, r0\n    str r0, [sp, #0xc]\n    ldr r0, [r4, #8]\n    ldr r1, [sp, #0x10]\n    lsl r0, r0, #0xc\n    add r0, r1, r0\n    str r0, [sp, #0x10]\n    ldr r1, [r4]\n    add r0, r1, #1\n    str r0, [r4]\n    ldr r0, [r4, #4]\n    cmp r1, r0\n    ble _021ED0BE\n    mov r0, #1\n    str r0, [r4, #0xc]\n    ldr r0, [r4]\n    ldr r1, [r4, #0x14]\n    bl _s32_div_f\n    cmp r1, #0\n    bne _021ED0DA\n    ldr r0, [r4, #0x10]\n    sub r0, r0, #1\n    str r0, [r4, #0x10]\n    ldr r0, [r4, #8]\n    cmp r0, #1\n    ble _021ED0DA\n    sub r0, r0, #1\n    str r0, [r4, #8]\n    ldr r0, [r5, #4]\n    add r1, sp, #0xc\n    bl ov01_021EB5F4\n    add sp, #0x18\n    pop {r3, r4, r5, pc}\n    add r0, r5, #0\n    bl ov01_021EC29C\n    add sp, #0x18\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_021ED0F0(void) {
    /* Original at 0x021ED0F0 */
    /* Requires manual decompilation - 247 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x18\n    ldr r0, _021ED2FC ; =0x00000F58\n    add r5, r1, #0\n    add r2, r0, #0\n    add r2, #0xa\n    ldrh r2, [r5, r2]\n    ldr r4, [r5, r0]\n    cmp r2, #5\n    bhi _021ED1AA\n    add r2, r2, r2\n    add r2, pc\n    ldrh r2, [r2, #6]\n    lsl r2, r2, #0x10\n    asr r2, r2, #0x10\n    add pc, r2\n    _021ED110: ; jump table\n    mov r0, #0x14\n    str r0, [sp]\n    mov r2, #2\n    str r2, [sp, #4]\n    sub r0, r2, #4\n    str r0, [sp, #8]\n    mov r0, #4\n    str r0, [sp, #0xc]\n    ldr r0, _021ED300 ; =ov01_021ED31C\n    str r2, [sp, #0x10]\n    str r0, [sp, #0x14]\n    add r0, r4, #0\n    mov r3, #0x10\n    bl ov01_021EC504\n    ldr r0, _021ED304 ; =0x0000716F\n    mov r2, #0x41\n    str r0, [sp]\n    ldr r0, _021ED308 ; =0x00006B5A\n    lsl r2, r2, #2\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    ldr r0, _021ED30C ; =0x00000F64\n    add r1, r4, #0\n    ldrh r0, [r5, r0]\n    add r1, #0x1c\n    str r0, [sp, #0xc]\n    ldr r3, [r5]\n    add r0, r4, #0\n    ldr r2, [r3, r2]\n    add r0, #0x4c\n    ldr r2, [r2, #0x4c]\n    mov r3, #3\n    bl ov01_021EC5FC\n    mov r0, #0\n    add r4, #0xb4\n    str r0, [r4]\n    ldr r0, _021ED310 ; =0x00000F62\n    mov r1, #1\n    strh r1, [r5, r0]\n    b _021ED2D2\n    add r0, r4, #0\n    bl ov01_021EC538\n    add r6, r0, #0\n    add r0, r4, #0\n    add r0, #0xb4\n    ldr r0, [r0]\n    cmp r0, #0\n    ble _021ED192\n    add r0, r4, #0\n    add r0, #0xb4\n    ldr r0, [r0]\n    add r4, #0xb4\n    sub r0, r0, #1\n    str r0, [r4]\n    b _021ED2D2\n    ldr r2, _021ED30C ; =0x00000F64\n    add r0, r4, #0\n    ldrh r2, [r5, r2]\n    add r4, #0x1c\n    add r0, #0x4c\n    add r1, r4, #0\n    bl ov01_021EC650\n    cmp r0, #1\n    bne _021ED1AA\n    cmp r6, #3\n    beq _021ED1AC\n    b _021ED2D2\n    ldr r0, _021ED310 ; =0x00000F62\n    mov r1, #3\n    strh r1, [r5, r0]\n    b _021ED2D2\n    mov r2, #0x14\n    mov r3, #2\n    str r2, [sp]\n    str r3, [sp, #4]\n    sub r0, r3, #4\n    str r0, [sp, #8]\n    mov r0, #4\n    str r0, [sp, #0xc]\n    ldr r0, _021ED300 ; =ov01_021ED31C\n    str r3, [sp, #0x10]\n    str r0, [sp, #0x14]\n    add r0, r4, #0\n    bl ov01_021EC504\n    ldr r0, _021ED30C ; =0x00000F64\n    ldrh r0, [r5, r0]\n    cmp r0, #0\n    beq _021ED1F6\n    mov r0, #0x41\n    ldr r1, [r5]\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    ldr r2, _021ED304 ; =0x0000716F\n    ldr r0, [r0, #0x4c]\n    ldr r3, _021ED308 ; =0x00006B5A\n    mov r1, #3\n    str r0, [r4, #0x1c]\n    bl ov01_021EC678\n    add r4, #0x1c\n    add r0, r4, #0\n    bl ov01_021EC7C8\n    mov r0, #1\n    str r0, [sp]\n    ldr r0, _021ED314 ; =ov01_021ED44C\n    ldr r1, _021ED300 ; =ov01_021ED31C\n    str r0, [sp, #4]\n    add r0, r5, #0\n    mov r2, #0x14\n    mov r3, #0xa\n    bl ov01_021EC85C\n    ldr r0, _021ED310 ; =0x00000F62\n    mov r1, #3\n    strh r1, [r5, r0]\n    b _021ED2D2\n    mov r0, #6\n    ldrsh r1, [r4, r0]\n    sub r0, r1, #1\n    strh r0, [r4, #6]\n    cmp r1, #0\n    bgt _021ED22E\n    mov r1, #4\n    ldrsh r1, [r4, r1]\n    add r0, r5, #0\n    bl ov01_021ED31C\n    mov r0, #8\n    ldrsh r0, [r4, r0]\n    strh r0, [r4, #6]\n    ldr r0, _021ED318 ; =0x00000F66\n    ldrh r0, [r5, r0]\n    cmp r0, #5\n    bne _021ED2D2\n    mov r0, #9\n    mvn r0, r0\n    str r0, [sp]\n    add r0, r4, #0\n    mov r1, #0\n    mov r2, #0x10\n    mov r3, #6\n    bl ov01_021EC52C\n    ldr r0, _021ED30C ; =0x00000F64\n    ldrh r0, [r5, r0]\n    cmp r0, #0\n    beq _021ED25C\n    add r0, r4, #0\n    add r0, #0x1c\n    mov r1, #1\n    mov r2, #0\n    bl ov01_021EC790\n    mov r0, #0x14\n    add r4, #0xb4\n    str r0, [r4]\n    ldr r0, _021ED310 ; =0x00000F62\n    mov r1, #4\n    strh r1, [r5, r0]\n    b _021ED2D2\n    add r0, r4, #0\n    bl ov01_021EC538\n    add r6, r0, #0\n    add r0, r4, #0\n    add r0, #0xb4\n    ldr r0, [r0]\n    cmp r0, #0\n    ble _021ED28A\n    add r0, r4, #0\n    add r0, #0xb4\n    ldr r0, [r0]\n    add r4, #0xb4\n    sub r0, r0, #1\n    str r0, [r4]\n    b _021ED2D2\n    ldr r2, _021ED30C ; =0x00000F64\n    add r0, r4, #0\n    ldrh r2, [r5, r2]\n    add r4, #0x1c\n    add r0, #0x4c\n    add r1, r4, #0\n    bl ov01_021EC650\n    cmp r0, #1\n    bne _021ED2D2\n    cmp r6, #3\n    bne _021ED2D2\n    add r0, r5, #0\n    ldr r1, [r5, #0x40]\n    add r0, #0xc\n    cmp r1, r0\n    bne _021ED2D2\n    ldr r0, _021ED310 ; =0x00000F62\n    mov r1, #5\n    strh r1, [r5, r0]\n    b _021ED2D2\n    add r0, #0xc\n    ldrh r0, [r5, r0]\n    cmp r0, #0\n    beq _021ED2CC\n    mov r2, #0\n    str r2, [sp]\n    str r2, [sp, #4]\n    ldr r0, [r4, #0x1c]\n    mov r1, #1\n    add r3, r2, #0\n    bl ov01_021EA864\n    ldr r0, [r5, #4]\n    bl ov01_021EBCA4\n    ldr r0, _021ED310 ; =0x00000F62\n    ldrh r0, [r5, r0]\n    cmp r0, #5\n    beq _021ED2F8\n    cmp r0, #0\n    beq _021ED2F8\n    add r0, r5, #0\n    ldr r1, _021ED314 ; =ov01_021ED44C\n    add r0, #0xc\n    bl ov01_021EC2E4\n    mov r1, #0\n    add r0, r5, #0\n    add r2, r1, #0\n    bl ov01_021EC470\n    add r0, r5, #0\n    bl ov01_021EC300\n    add sp, #0x18\n    pop {r4, r5, r6, pc}\n    _021ED2FC: .word 0x00000F58\n    _021ED300: .word ov01_021ED31C\n    _021ED304: .word 0x0000716F\n    _021ED308: .word 0x00006B5A\n    _021ED30C: .word 0x00000F64\n    _021ED310: .word 0x00000F62\n    _021ED314: .word ov01_021ED44C\n    _021ED318: .word 0x00000F66"
    );
    #endif
}

void ov01_021ED31C(void) {
    /* Original at 0x021ED31C */
    /* Requires manual decompilation - 129 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x1c\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    add r0, r1, #0\n    str r1, [sp, #4]\n    cmp r0, #0\n    bgt _021ED330\n    b _021ED448\n    ldr r0, [sp]\n    mov r1, #0x20\n    bl ov01_021EC1F4\n    add r4, r0, #0\n    bne _021ED33E\n    b _021ED448\n    ldr r5, [r4, #8]\n    mov r0, #0\n    str r0, [r5]\n    bl MTRandom\n    mov r1, #5\n    bl _u32_div_f\n    add r0, r1, #7\n    str r0, [r5, #4]\n    bl MTRandom\n    mov r1, #0xfa\n    lsl r1, r1, #2\n    bl _u32_div_f\n    lsr r2, r1, #0x1f\n    lsl r1, r1, #0x1f\n    sub r1, r1, r2\n    mov r0, #0x1f\n    ror r1, r0\n    add r0, r2, r1\n    bne _021ED370\n    mov r0, #1\n    b _021ED374\n    mov r0, #0\n    mvn r0, r0\n    str r0, [r5, #8]\n    mov r0, #1\n    str r0, [r5, #0xc]\n    bl MTRandom\n    mov r1, #6\n    bl _u32_div_f\n    add r0, r1, #3\n    str r0, [r5, #0x10]\n    bl MTRandom\n    mov r1, #5\n    bl _u32_div_f\n    add r0, r1, #4\n    str r0, [r5, #0x14]\n    bl MTRandom\n    mov r1, #0x14\n    bl _u32_div_f\n    str r1, [sp, #8]\n    add r0, sp, #0x10\n    add r1, r4, #0\n    bl ov01_021EC304\n    bl MTRandom\n    mov r1, #6\n    lsl r1, r1, #6\n    bl _u32_div_f\n    sub r1, #0x40\n    str r1, [sp, #0x10]\n    bl MTRandom\n    lsl r0, r0, #0x18\n    lsr r1, r0, #0x18\n    ldr r0, [sp, #0x10]\n    sub r1, #8\n    lsl r0, r0, #0xc\n    str r0, [sp, #0x10]\n    str r1, [sp, #0x14]\n    lsl r0, r1, #0xc\n    str r0, [sp, #0x14]\n    mov r0, #0\n    str r0, [sp, #0x18]\n    ldr r0, [r4, #4]\n    add r1, sp, #0x10\n    bl ov01_021EB5F4\n    ldr r1, [sp, #0x14]\n    ldr r0, [sp, #0x10]\n    asr r1, r1, #0xc\n    asr r0, r0, #0xc\n    str r1, [sp, #0x14]\n    mov r1, #3\n    str r0, [sp, #0x10]\n    bl _s32_div_f\n    mov r1, #0x32\n    sub r6, r1, r0\n    mov r1, #0xce\n    sub r7, r1, r0\n    bpl _021ED406\n    bl MTRandom\n    neg r1, r7\n    bl _u32_div_f\n    sub r1, r6, r1\n    b _021ED412\n    bl MTRandom\n    add r1, r7, #0\n    bl _u32_div_f\n    add r1, r6, r1\n    ldr r0, [sp, #0x14]\n    cmp r6, r0\n    bgt _021ED424\n    cmp r1, r0\n    blt _021ED424\n    ldr r0, [r5, #4]\n    lsl r0, r0, #1\n    str r0, [r5, #4]\n    b _021ED42E\n    bl MTRandom\n    mov r1, #3\n    and r0, r1\n    str r0, [sp, #8]\n    ldr r1, [sp, #8]\n    ldr r0, [r4, #4]\n    lsl r1, r1, #0x10\n    lsr r1, r1, #0x10\n    bl Sprite_SetAnimationFrame\n    ldr r0, [sp, #0xc]\n    add r1, r0, #1\n    ldr r0, [sp, #4]\n    str r1, [sp, #0xc]\n    cmp r1, r0\n    bge _021ED448\n    b _021ED330\n    add sp, #0x1c\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021ED44C(void) {
    /* Original at 0x021ED44C */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    ldr r4, [r5, #8]\n    add r0, sp, #0\n    add r1, r5, #0\n    bl ov01_021EC304\n    ldr r0, [r4]\n    add r1, r0, #1\n    str r1, [r4]\n    ldr r0, [r4, #4]\n    cmp r1, r0\n    blt _021ED46E\n    add r0, r5, #0\n    bl ov01_021EC29C\n    add sp, #0xc\n    pop {r4, r5, pc}"
    );
    #endif
}

void ov01_021ED474(void) {
    /* Original at 0x021ED474 */
    /* Requires manual decompilation - 122 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x10\n    add r6, r2, #0\n    ldr r2, _021ED580 ; =0x00000F62\n    add r4, r0, #0\n    ldrh r0, [r4, r2]\n    add r5, r1, #0\n    cmp r0, #5\n    bhi _021ED57A\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _021ED492: ; jump table\n    str r3, [sp]\n    add r0, sp, #0x10\n    ldrh r0, [r0, #0x10]\n    add r5, #0x30\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x24]\n    str r0, [sp, #8]\n    add r0, r2, #2\n    ldrh r0, [r4, r0]\n    mov r2, #0x41\n    lsl r2, r2, #2\n    str r0, [sp, #0xc]\n    ldr r3, [r4]\n    add r0, r5, #0\n    ldr r2, [r3, r2]\n    add r3, r6, #0\n    ldr r2, [r2, #0x4c]\n    bl ov01_021EC5FC\n    ldr r0, _021ED580 ; =0x00000F62\n    mov r1, #1\n    add sp, #0x10\n    strh r1, [r4, r0]\n    pop {r4, r5, r6, pc}\n    add r2, r2, #2\n    ldrh r2, [r4, r2]\n    add r5, #0x30\n    add r0, r5, #0\n    bl ov01_021EC650\n    cmp r0, #1\n    bne _021ED57A\n    ldr r0, _021ED580 ; =0x00000F62\n    mov r1, #3\n    add sp, #0x10\n    strh r1, [r4, r0]\n    pop {r4, r5, r6, pc}\n    add r0, r2, #2\n    ldrh r0, [r4, r0]\n    cmp r0, #0\n    beq _021ED50E\n    mov r0, #0x41\n    ldr r1, [r4]\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    add r2, r3, #0\n    ldr r0, [r0, #0x4c]\n    add r3, sp, #0x10\n    str r0, [r5]\n    ldrh r3, [r3, #0x10]\n    add r1, r6, #0\n    bl ov01_021EC678\n    add r0, r5, #0\n    bl ov01_021EC7C8\n    ldr r0, _021ED580 ; =0x00000F62\n    mov r1, #3\n    add sp, #0x10\n    strh r1, [r4, r0]\n    pop {r4, r5, r6, pc}\n    add r0, r2, #4\n    ldrh r0, [r4, r0]\n    cmp r0, #5\n    bne _021ED57A\n    add r0, r2, #2\n    ldrh r0, [r4, r0]\n    cmp r0, #0\n    beq _021ED532\n    ldr r1, [sp, #0x28]\n    add r0, r5, #0\n    mov r2, #0\n    bl ov01_021EC790\n    ldr r0, _021ED580 ; =0x00000F62\n    mov r1, #4\n    add sp, #0x10\n    strh r1, [r4, r0]\n    pop {r4, r5, r6, pc}\n    add r0, r2, #2\n    ldrh r0, [r4, r0]\n    cmp r0, #0\n    beq _021ED54C\n    add r0, r5, #0\n    bl ov01_021EC7AC\n    b _021ED54E\n    mov r0, #1\n    cmp r0, #1\n    bne _021ED57A\n    ldr r0, _021ED580 ; =0x00000F62\n    mov r1, #5\n    add sp, #0x10\n    strh r1, [r4, r0]\n    pop {r4, r5, r6, pc}\n    add r0, r2, #2\n    ldrh r0, [r4, r0]\n    cmp r0, #0\n    beq _021ED574\n    mov r2, #0\n    str r2, [sp]\n    str r2, [sp, #4]\n    ldr r0, [r5]\n    mov r1, #1\n    add r3, r2, #0\n    bl ov01_021EA864\n    ldr r0, [r4, #4]\n    bl ov01_021EBCA4\n    add sp, #0x10\n    pop {r4, r5, r6, pc}\n    nop\n    _021ED580: .word 0x00000F62"
    );
    #endif
}

void ov01_021ED584(void) {
    /* Original at 0x021ED584 */
    /* Requires manual decompilation - 171 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    ldr r0, _021ED700 ; =0x00000F58\n    add r4, r1, #0\n    add r1, r0, #0\n    add r1, #0xa\n    ldrh r1, [r4, r1]\n    ldr r5, [r4, r0]\n    cmp r1, #5\n    bls _021ED59A\n    b _021ED6FC\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _021ED5A6: ; jump table\n    ldr r1, _021ED704 ; =0x00007555\n    mov r2, #0x41\n    str r1, [sp]\n    ldr r1, _021ED708 ; =0x00007FFF\n    add r0, #0xc\n    str r1, [sp, #4]\n    mov r1, #1\n    str r1, [sp, #8]\n    ldrh r0, [r4, r0]\n    add r1, r5, #0\n    lsl r2, r2, #2\n    str r0, [sp, #0xc]\n    ldr r3, [r4]\n    add r0, r5, #0\n    ldr r2, [r3, r2]\n    add r0, #0x44\n    ldr r2, [r2, #0x4c]\n    add r1, #0x14\n    mov r3, #6\n    bl ov01_021EC5FC\n    add r0, r5, #0\n    mov r1, #0\n    mov r2, #9\n    mov r3, #0x1e\n    bl ov01_021EB830\n    mov r0, #0\n    mov r1, #0x10\n    bl ov01_021EB818\n    mov r0, #4\n    mov r1, #1\n    bl GfGfx_EngineATogglePlanes\n    ldr r0, _021ED70C ; =0x00000F62\n    mov r1, #1\n    add sp, #0x10\n    strh r1, [r4, r0]\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r5, #0\n    add r0, #0x14\n    bl ov01_021EC7AC\n    add r6, r0, #0\n    add r0, r5, #0\n    bl ov01_021EB840\n    add r7, r0, #0\n    ldr r0, [r5]\n    mov r1, #0x10\n    sub r1, r1, r0\n    bl ov01_021EB818\n    cmp r6, #1\n    bne _021ED6FC\n    cmp r7, #1\n    bne _021ED6FC\n    ldr r0, _021ED70C ; =0x00000F62\n    mov r1, #3\n    add sp, #0x10\n    strh r1, [r4, r0]\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, #0xc\n    ldrh r0, [r4, r0]\n    cmp r0, #0\n    beq _021ED656\n    mov r0, #0x41\n    ldr r1, [r4]\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    ldr r2, _021ED704 ; =0x00007555\n    ldr r0, [r0, #0x4c]\n    ldr r3, _021ED708 ; =0x00007FFF\n    mov r1, #6\n    str r0, [r5, #0x14]\n    bl ov01_021EC678\n    add r5, #0x14\n    add r0, r5, #0\n    bl ov01_021EC7C8\n    mov r0, #9\n    mov r1, #7\n    bl ov01_021EB818\n    mov r0, #4\n    mov r1, #1\n    bl GfGfx_EngineATogglePlanes\n    ldr r0, _021ED70C ; =0x00000F62\n    mov r1, #3\n    add sp, #0x10\n    strh r1, [r4, r0]\n    pop {r3, r4, r5, r6, r7, pc}\n    add r1, r0, #0\n    add r1, #0xe\n    ldrh r1, [r4, r1]\n    cmp r1, #5\n    bne _021ED6FC\n    add r0, #0xc\n    ldrh r0, [r4, r0]\n    cmp r0, #0\n    beq _021ED68E\n    add r0, r5, #0\n    add r0, #0x14\n    mov r1, #1\n    mov r2, #0\n    bl ov01_021EC790\n    add r0, r5, #0\n    mov r1, #9\n    mov r2, #0\n    mov r3, #0x1e\n    bl ov01_021EB830\n    ldr r0, _021ED70C ; =0x00000F62\n    mov r1, #4\n    add sp, #0x10\n    strh r1, [r4, r0]\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, #0xc\n    ldrh r0, [r4, r0]\n    cmp r0, #0\n    beq _021ED6B8\n    add r0, r5, #0\n    add r0, #0x14\n    bl ov01_021EC7AC\n    add r6, r0, #0\n    b _021ED6BA\n    mov r6, #1\n    add r0, r5, #0\n    bl ov01_021EB840\n    add r7, r0, #0\n    ldr r0, [r5]\n    mov r1, #0x10\n    sub r1, r1, r0\n    bl ov01_021EB818\n    cmp r6, #1\n    bne _021ED6FC\n    cmp r7, #1\n    bne _021ED6FC\n    ldr r0, _021ED70C ; =0x00000F62\n    mov r1, #5\n    add sp, #0x10\n    strh r1, [r4, r0]\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, #0xc\n    ldrh r0, [r4, r0]\n    cmp r0, #0\n    beq _021ED6F6\n    mov r2, #0\n    str r2, [sp]\n    str r2, [sp, #4]\n    ldr r0, [r5, #0x14]\n    mov r1, #1\n    add r3, r2, #0\n    bl ov01_021EA864\n    ldr r0, [r4, #4]\n    bl ov01_021EBCA4\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    _021ED700: .word 0x00000F58\n    _021ED704: .word 0x00007555\n    _021ED708: .word 0x00007FFF\n    _021ED70C: .word 0x00000F62"
    );
    #endif
}

void ov01_021ED710(void) {
    /* Original at 0x021ED710 */
    /* Requires manual decompilation - 226 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0x4c\n    add r6, r1, #0\n    mov r0, #0x41\n    ldr r1, [r6]\n    lsl r0, r0, #2\n    ldr r5, [r1, r0]\n    ldr r0, _021ED900 ; =0x00000F58\n    add r1, r0, #0\n    add r1, #0xa\n    ldrh r1, [r6, r1]\n    ldr r4, [r6, r0]\n    cmp r1, #5\n    bls _021ED72E\n    b _021ED8FA\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _021ED73A: ; jump table\n    ldr r0, [r5, #0x40]\n    bl PlayerAvatar_GetMapObject\n    bl ov01_02203EA0\n    ldr r1, _021ED904 ; =0x0000062C\n    mov r3, #0\n    str r0, [r4, r1]\n    mov r0, #0xa\n    str r0, [sp]\n    str r3, [sp, #4]\n    ldr r0, [r5, #0x4c]\n    sub r1, r3, #1\n    mov r2, #1\n    bl ov01_021EA864\n    mov r1, #0\n    mov r2, #0\n    ldr r0, [r5, #0x4c]\n    mvn r1, r1\n    add r3, r2, #0\n    bl ov01_021EA89C\n    mov r1, #0\n    add r2, sp, #0x2c\n    sub r0, r1, #1\n    add r1, r1, #1\n    strb r0, [r2]\n    add r2, r2, #1\n    cmp r1, #0x20\n    blt _021ED77A\n    ldr r0, [r5, #0x4c]\n    add r1, sp, #0x2c\n    bl ov01_021EA8C4\n    mov r0, #0x63\n    mov r1, #0\n    lsl r0, r0, #4\n    strh r1, [r4, r0]\n    ldr r0, _021ED908 ; =0x00000F62\n    mov r1, #1\n    add sp, #0x4c\n    strh r1, [r6, r0]\n    pop {r3, r4, r5, r6, pc}\n    mov r1, #3\n    add r0, #0xa\n    add sp, #0x4c\n    strh r1, [r6, r0]\n    pop {r3, r4, r5, r6, pc}\n    ldr r0, [r5, #0x40]\n    bl PlayerAvatar_GetMapObject\n    bl ov01_02203EA0\n    ldr r1, _021ED904 ; =0x0000062C\n    mov r3, #0\n    str r0, [r4, r1]\n    mov r0, #0xa\n    str r0, [sp]\n    str r3, [sp, #4]\n    ldr r0, [r5, #0x4c]\n    sub r1, r3, #1\n    mov r2, #1\n    bl ov01_021EA864\n    mov r1, #0\n    mov r2, #0\n    ldr r0, [r5, #0x4c]\n    mvn r1, r1\n    add r3, r2, #0\n    bl ov01_021EA89C\n    mov r1, #0\n    add r2, sp, #0xc\n    sub r0, r1, #1\n    add r1, r1, #1\n    strb r0, [r2]\n    add r2, r2, #1\n    cmp r1, #0x20\n    blt _021ED7DC\n    ldr r0, [r5, #0x4c]\n    add r1, sp, #0xc\n    bl ov01_021EA8C4\n    mov r0, #0x63\n    mov r1, #0\n    lsl r0, r0, #4\n    strh r1, [r4, r0]\n    ldr r0, _021ED908 ; =0x00000F62\n    mov r1, #3\n    add sp, #0x4c\n    strh r1, [r6, r0]\n    pop {r3, r4, r5, r6, pc}\n    add r1, r0, #0\n    add r1, #0xe\n    ldrh r1, [r6, r1]\n    cmp r1, #5\n    bne _021ED8FA\n    ldr r1, _021ED90C ; =0x00000632\n    mov r2, #0\n    strh r2, [r4, r1]\n    mov r1, #4\n    add r0, #0xa\n    add sp, #0x4c\n    strh r1, [r6, r0]\n    pop {r3, r4, r5, r6, pc}\n    ldr r0, _021ED90C ; =0x00000632\n    ldrh r1, [r4, r0]\n    cmp r1, #3\n    bhi _021ED8FA\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _021ED82E: ; jump table\n    mov r0, #6\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #4\n    mov r1, #0\n    str r0, [sp, #8]\n    ldr r3, _021ED910 ; =0x00007FFF\n    mov r0, #3\n    add r2, r1, #0\n    bl BeginNormalPaletteFade\n    ldr r0, _021ED90C ; =0x00000632\n    add sp, #0x4c\n    ldrh r1, [r4, r0]\n    add r1, r1, #1\n    strh r1, [r4, r0]\n    pop {r3, r4, r5, r6, pc}\n    bl IsPaletteFadeFinished\n    cmp r0, #0\n    beq _021ED8FA\n    mov r0, #6\n    str r0, [sp]\n    mov r1, #1\n    str r1, [sp, #4]\n    mov r0, #4\n    str r0, [sp, #8]\n    ldr r3, _021ED910 ; =0x00007FFF\n    mov r0, #3\n    add r2, r1, #0\n    bl BeginNormalPaletteFade\n    ldr r0, _021ED90C ; =0x00000632\n    add sp, #0x4c\n    ldrh r1, [r4, r0]\n    add r1, r1, #1\n    strh r1, [r4, r0]\n    pop {r3, r4, r5, r6, pc}\n    bl IsPaletteFadeFinished\n    cmp r0, #0\n    beq _021ED8FA\n    ldr r0, _021ED90C ; =0x00000632\n    add sp, #0x4c\n    ldrh r1, [r4, r0]\n    add r1, r1, #1\n    strh r1, [r4, r0]\n    pop {r3, r4, r5, r6, pc}\n    sub r1, r0, #2\n    ldrh r1, [r4, r1]\n    add r2, r1, #1\n    sub r1, r0, #2\n    strh r2, [r4, r1]\n    sub r0, r0, #2\n    ldrh r0, [r4, r0]\n    bl _dfltu\n    add r3, r1, #0\n    add r2, r0, #0\n    ldr r1, _021ED914 ; =0x40080000\n    mov r0, #0\n    bl _dmul\n    ldr r3, _021ED918 ; =0x40380000\n    mov r2, #0\n    bl _ddiv\n    add r3, r1, #0\n    add r2, r0, #0\n    ldr r1, _021ED91C ; =0x3FF00000\n    mov r0, #0\n    bl _dadd\n    bl _d2f\n    add r5, r0, #0\n    ldr r0, _021ED904 ; =0x0000062C\n    add r1, r5, #0\n    ldr r0, [r4, r0]\n    bl ov01_02203F2C\n    add r0, r5, #0\n    bl _f2d\n    ldr r3, _021ED920 ; =0x40100000\n    mov r2, #0\n    bl _dgeq\n    blo _021ED8FA\n    ldr r0, _021ED908 ; =0x00000F62\n    mov r1, #5\n    add sp, #0x4c\n    strh r1, [r6, r0]\n    pop {r3, r4, r5, r6, pc}\n    ldr r0, [r6, #4]\n    bl ov01_021EBCA4\n    add sp, #0x4c\n    pop {r3, r4, r5, r6, pc}\n    nop\n    _021ED900: .word 0x00000F58\n    _021ED904: .word 0x0000062C\n    _021ED908: .word 0x00000F62\n    _021ED90C: .word 0x00000632\n    _021ED910: .word 0x00007FFF\n    _021ED914: .word 0x40080000\n    _021ED918: .word 0x40380000\n    _021ED91C: .word 0x3FF00000\n    _021ED920: .word 0x40100000"
    );
    #endif
}

void ov01_021ED924(void) {
    /* Original at 0x021ED924 */
    /* Requires manual decompilation - 128 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x48\n    add r5, r1, #0\n    mov r0, #0x41\n    ldr r1, [r5]\n    lsl r0, r0, #2\n    ldr r4, [r1, r0]\n    ldr r0, _021EDA40 ; =0x00000F58\n    add r1, r0, #0\n    add r1, #0xa\n    ldrh r1, [r5, r1]\n    ldr r6, [r5, r0]\n    cmp r1, #5\n    bhi _021EDA3A\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _021ED94C: ; jump table\n    ldr r0, [r4, #0x40]\n    bl PlayerAvatar_GetMapObject\n    bl ov01_02203EA0\n    ldr r1, _021EDA44 ; =0x0000062C\n    mov r3, #0\n    str r0, [r6, r1]\n    mov r0, #0xa\n    str r0, [sp]\n    str r3, [sp, #4]\n    ldr r0, [r4, #0x4c]\n    sub r1, r3, #1\n    mov r2, #1\n    bl ov01_021EA864\n    mov r1, #0\n    mov r2, #0\n    ldr r0, [r4, #0x4c]\n    mvn r1, r1\n    add r3, r2, #0\n    bl ov01_021EA89C\n    mov r1, #0\n    add r2, sp, #0x28\n    sub r0, r1, #1\n    add r1, r1, #1\n    strb r0, [r2]\n    add r2, r2, #1\n    cmp r1, #0x20\n    blt _021ED98C\n    ldr r0, [r4, #0x4c]\n    add r1, sp, #0x28\n    bl ov01_021EA8C4\n    ldr r0, _021EDA44 ; =0x0000062C\n    ldr r1, _021EDA48 ; =0x40800000\n    ldr r0, [r6, r0]\n    bl ov01_02203F2C\n    ldr r0, _021EDA4C ; =0x00000F62\n    mov r1, #1\n    add sp, #0x48\n    strh r1, [r5, r0]\n    pop {r4, r5, r6, pc}\n    mov r1, #3\n    add r0, #0xa\n    add sp, #0x48\n    strh r1, [r5, r0]\n    pop {r4, r5, r6, pc}\n    ldr r0, [r4, #0x40]\n    bl PlayerAvatar_GetMapObject\n    bl ov01_02203EA0\n    ldr r1, _021EDA44 ; =0x0000062C\n    mov r3, #0\n    str r0, [r6, r1]\n    mov r0, #0xa\n    str r0, [sp]\n    str r3, [sp, #4]\n    ldr r0, [r4, #0x4c]\n    sub r1, r3, #1\n    mov r2, #1\n    bl ov01_021EA864\n    mov r1, #0\n    mov r2, #0\n    ldr r0, [r4, #0x4c]\n    mvn r1, r1\n    add r3, r2, #0\n    bl ov01_021EA89C\n    mov r1, #0\n    add r2, sp, #8\n    sub r0, r1, #1\n    add r1, r1, #1\n    strb r0, [r2]\n    add r2, r2, #1\n    cmp r1, #0x20\n    blt _021ED9F0\n    ldr r0, [r4, #0x4c]\n    add r1, sp, #8\n    bl ov01_021EA8C4\n    ldr r0, _021EDA44 ; =0x0000062C\n    ldr r1, _021EDA48 ; =0x40800000\n    ldr r0, [r6, r0]\n    bl ov01_02203F2C\n    ldr r0, _021EDA4C ; =0x00000F62\n    mov r1, #3\n    add sp, #0x48\n    strh r1, [r5, r0]\n    pop {r4, r5, r6, pc}\n    add r1, r0, #0\n    add r1, #0xe\n    ldrh r1, [r5, r1]\n    cmp r1, #5\n    bne _021EDA3A\n    mov r1, #4\n    add r0, #0xa\n    add sp, #0x48\n    strh r1, [r5, r0]\n    pop {r4, r5, r6, pc}\n    mov r1, #5\n    add r0, #0xa\n    add sp, #0x48\n    strh r1, [r5, r0]\n    pop {r4, r5, r6, pc}\n    ldr r0, [r5, #4]\n    bl ov01_021EBCA4\n    add sp, #0x48\n    pop {r4, r5, r6, pc}\n    nop\n    _021EDA40: .word 0x00000F58\n    _021EDA44: .word 0x0000062C\n    _021EDA48: .word 0x40800000\n    _021EDA4C: .word 0x00000F62"
    );
    #endif
}

void ov01_021EDA50(void) {
    /* Original at 0x021EDA50 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {lr}\n    sub sp, #0xc\n    ldr r0, _021EDA70 ; =0x00000421\n    ldr r2, _021EDA74 ; =0x00000F58\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    add r0, r1, #0\n    ldr r1, [r1, r2]\n    ldr r3, _021EDA78 ; =0x00004B6F\n    mov r2, #1\n    bl ov01_021ED474\n    add sp, #0xc\n    pop {pc}\n    _021EDA70: .word 0x00000421\n    _021EDA74: .word 0x00000F58\n    _021EDA78: .word 0x00004B6F"
    );
    #endif
}

void ov01_021EDA7C(void) {
    /* Original at 0x021EDA7C */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, _021EDAA8 ; =0x00000F68\n    add r4, r1, #0\n    ldr r1, [r4, r0]\n    sub r1, r1, #1\n    str r1, [r4, r0]\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    bgt _021EDAA4\n    ldr r1, _021EDAAC ; =0x00000638\n    add r0, r4, #0\n    bl ov01_021EDAB4\n    add r0, r5, #0\n    bl SysTask_Destroy\n    ldr r0, _021EDAB0 ; =0x00000F6C\n    mov r1, #0\n    str r1, [r4, r0]\n    pop {r3, r4, r5, pc}\n    nop\n    _021EDAA8: .word 0x00000F68\n    _021EDAAC: .word 0x00000638\n    _021EDAB0: .word 0x00000F6C"
    );
    #endif
}

void ov01_021EDAB4(void) {
    /* Original at 0x021EDAB4 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, _021EDADC ; =0x00000F5C\n    add r4, r1, #0\n    ldr r0, [r5, r0]\n    cmp r0, #0\n    beq _021EDAC6\n    bl GF_AssertFail\n    ldr r1, _021EDADC ; =0x00000F5C\n    mov r0, #1\n    str r0, [r5, r1]\n    lsl r0, r4, #0x10\n    lsr r0, r0, #0x10\n    add r1, r1, #4\n    strh r0, [r5, r1]\n    bl PlaySE\n    pop {r3, r4, r5, pc}\n    nop\n    _021EDADC: .word 0x00000F5C"
    );
    #endif
}

void ov01_021EDAE0(void) {
    StopSE(0xf6, 0, 0);
}
