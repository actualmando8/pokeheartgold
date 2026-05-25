/* Decompiled from asm/overlay_01_021E7FDC.s */
#include "global.h"

void UnkFieldSpriteRenderer_ov01_021E7FDC_Init(void) {
    /* Original at 0x021E7FDC */
    /* Requires manual decompilation - 194 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x30\n    add r5, r0, #0\n    str r1, [sp, #0x10]\n    add r4, r3, #0\n    add r0, r2, #0\n    add r1, r5, #4\n    add r2, r4, #0\n    bl G2dRenderer_Init\n    str r0, [r5]\n    ldr r1, _021E818C ; =0x00000162\n    ldr r0, [sp, #0x10]\n    strh r4, [r5, r1]\n    ldrh r2, [r0, #8]\n    ldr r0, _021E8190 ; =0x0000FFFF\n    cmp r2, r0\n    bne _021E8004\n    mov r2, #4\n    b _021E8006\n    mov r2, #6\n    sub r0, r1, #2\n    strh r2, [r5, r0]\n    bl GF2DGfxResHeader_sizeof\n    mov r1, #0x16\n    lsl r1, r1, #4\n    ldrh r2, [r5, r1]\n    add r3, r0, #0\n    add r0, r4, #0\n    add r1, r2, #0\n    mul r1, r3\n    bl Heap_Alloc\n    add r7, r0, #0\n    mov r0, #0xaf\n    add r1, r4, #0\n    bl NARC_New\n    str r0, [sp, #0x20]\n    mov r0, #0\n    str r0, [sp, #0x1c]\n    mov r0, #0x16\n    lsl r0, r0, #4\n    ldrh r0, [r5, r0]\n    cmp r0, #0\n    bls _021E807A\n    ldr r6, [sp, #0x10]\n    ldr r1, [sp, #0x1c]\n    add r0, r7, #0\n    bl GF2DGfxResHeader_GetByIndex\n    str r0, [sp, #0x24]\n    mov r0, #1\n    str r0, [sp]\n    ldrh r1, [r6]\n    ldr r0, [sp, #0x20]\n    mov r2, #0\n    add r3, r4, #0\n    bl GfGfxLoader_LoadFromOpenNarc\n    ldr r1, [sp, #0x24]\n    str r0, [sp, #0x28]\n    add r2, r4, #0\n    bl GF2DGfxResHeader_Init\n    ldr r0, [sp, #0x28]\n    bl Heap_Free\n    ldr r0, [sp, #0x1c]\n    add r6, r6, #2\n    add r0, r0, #1\n    str r0, [sp, #0x1c]\n    mov r0, #0x16\n    lsl r0, r0, #4\n    ldrh r0, [r5, r0]\n    ldr r1, [sp, #0x1c]\n    cmp r1, r0\n    blo _021E803C\n    mov r6, #0\n    cmp r0, #0\n    bls _021E80B0\n    str r5, [sp, #0x18]\n    add r0, r7, #0\n    add r1, r6, #0\n    bl GF2DGfxResHeader_GetByIndex\n    bl GF2dGfxResHeader_GetNumObjects\n    add r1, r6, #0\n    add r2, r4, #0\n    bl Create2DGfxResObjMan\n    mov r1, #0x13\n    ldr r2, [sp, #0x18]\n    lsl r1, r1, #4\n    str r0, [r2, r1]\n    add r0, r2, #0\n    add r0, r0, #4\n    str r0, [sp, #0x18]\n    add r0, r1, #0\n    add r0, #0x30\n    ldrh r0, [r5, r0]\n    add r6, r6, #1\n    cmp r6, r0\n    blo _021E8082\n    mov r1, #0\n    str r1, [sp, #0x14]\n    cmp r0, #0\n    bls _021E80FC\n    add r6, r5, #0\n    ldr r1, [sp, #0x14]\n    add r0, r7, #0\n    bl GF2DGfxResHeader_GetByIndex\n    str r0, [sp, #0x2c]\n    bl GF2dGfxResHeader_GetNumObjects\n    add r1, r4, #0\n    bl Create2DGfxResObjList\n    mov r1, #0x52\n    lsl r1, r1, #2\n    str r0, [r6, r1]\n    add r0, r1, #0\n    mov r2, #0x52\n    sub r0, #0x18\n    lsl r2, r2, #2\n    ldr r0, [r6, r0]\n    ldr r1, [sp, #0x2c]\n    ldr r2, [r6, r2]\n    add r3, r4, #0\n    bl LoadAll2DGfxResObjsFromHeader\n    ldr r0, [sp, #0x14]\n    add r6, r6, #4\n    add r0, r0, #1\n    str r0, [sp, #0x14]\n    mov r0, #0x16\n    lsl r0, r0, #4\n    ldrh r0, [r5, r0]\n    ldr r1, [sp, #0x14]\n    cmp r1, r0\n    blo _021E80BA\n    mov r6, #0\n    cmp r0, #0\n    bls _021E811A\n    add r0, r7, #0\n    add r1, r6, #0\n    bl GF2DGfxResHeader_GetByIndex\n    bl GF2DGfxResHeader_Reset\n    mov r0, #0x16\n    lsl r0, r0, #4\n    ldrh r0, [r5, r0]\n    add r6, r6, #1\n    cmp r6, r0\n    blo _021E8102\n    add r0, r7, #0\n    bl Heap_Free\n    mov r0, #0x52\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl sub_0200ADE4\n    mov r0, #0x53\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl sub_0200B050\n    mov r0, #1\n    str r0, [sp]\n    ldr r1, [sp, #0x10]\n    ldr r0, [sp, #0x20]\n    ldrh r1, [r1, #0xc]\n    mov r2, #0\n    add r3, r4, #0\n    bl GfGfxLoader_LoadFromOpenNarc\n    mov r3, #0x4e\n    lsl r3, r3, #2\n    ldr r1, [r5, r3]\n    add r2, r3, #0\n    str r1, [sp]\n    add r1, r3, #4\n    ldr r1, [r5, r1]\n    sub r2, #8\n    str r1, [sp, #4]\n    add r1, r3, #0\n    add r1, #8\n    ldr r1, [r5, r1]\n    add r6, r0, #0\n    str r1, [sp, #8]\n    add r1, r3, #0\n    add r1, #0xc\n    ldr r1, [r5, r1]\n    sub r3, r3, #4\n    str r1, [sp, #0xc]\n    ldr r2, [r5, r2]\n    ldr r3, [r5, r3]\n    add r1, r4, #0\n    bl SpriteResourceHeaderList_Create\n    mov r1, #0x4b\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    add r0, r6, #0\n    bl Heap_Free\n    ldr r0, [sp, #0x20]\n    bl NARC_Delete\n    add sp, #0x30\n    pop {r3, r4, r5, r6, r7, pc}\n    _021E818C: .word 0x00000162\n    _021E8190: .word 0x0000FFFF"
    );
    #endif
}

void UnkFieldSpriteRenderer_ov01_021E7FDC_Release(void) {
    /* Original at 0x021E8194 */
    /* Requires manual decompilation - 39 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r0, [r5]\n    bl SpriteList_Delete\n    mov r0, #0x4b\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl SpriteResourceHeaderList_Destroy\n    mov r0, #0x52\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl sub_0200AED4\n    mov r0, #0x53\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl sub_0200B0CC\n    mov r0, #0x16\n    lsl r0, r0, #4\n    ldrh r0, [r5, r0]\n    mov r6, #0\n    cmp r0, #0\n    bls _021E81EC\n    mov r7, #0x16\n    add r4, r5, #0\n    lsl r7, r7, #4\n    mov r0, #0x52\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl Delete2DGfxResObjList\n    mov r0, #0x13\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    bl Destroy2DGfxResObjMan\n    ldrh r0, [r5, r7]\n    add r6, r6, #1\n    add r4, r4, #4\n    cmp r6, r0\n    blo _021E81CE\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021E81F0(void) {
    /* Original at 0x021E81F0 */
    /* Requires manual decompilation - 79 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x48\n    ldr r5, _021E8294 ; =ov01_022063FC\n    add r2, r0, #0\n    add r4, r1, #0\n    ldmia r5!, {r0, r1}\n    add r3, sp, #0xc\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #6\n    str r0, [r3]\n    mov r0, #4\n    ldrsh r0, [r4, r0]\n    mov r3, #8\n    ldrsh r3, [r4, r3]\n    lsl r0, r0, #0xc\n    str r0, [sp]\n    ldrsh r0, [r4, r1]\n    lsl r3, r3, #0xc\n    str r3, [sp, #8]\n    lsl r0, r0, #0xc\n    ldr r3, [r4, #0x14]\n    str r0, [sp, #4]\n    cmp r3, #2\n    bne _021E8228\n    lsl r1, r1, #0x11\n    add r0, r0, r1\n    str r0, [sp, #4]\n    ldr r0, [r2]\n    mov r3, #0x4b\n    str r0, [sp, #0x18]\n    lsl r3, r3, #2\n    ldr r0, [r2, r3]\n    ldr r1, [r4]\n    ldr r5, [r0]\n    mov r0, #0x24\n    mul r0, r1\n    add r0, r5, r0\n    add r6, sp, #0\n    str r0, [sp, #0x1c]\n    ldmia r6!, {r0, r1}\n    add r5, sp, #0x20\n    stmia r5!, {r0, r1}\n    ldr r0, [r6]\n    add r6, sp, #0xc\n    str r0, [r5]\n    ldmia r6!, {r0, r1}\n    add r5, sp, #0x2c\n    stmia r5!, {r0, r1}\n    ldr r0, [r6]\n    mov r1, #0\n    str r0, [r5]\n    add r0, sp, #0\n    strh r1, [r0, #0x38]\n    ldr r0, [r4, #0xc]\n    add r3, #0x36\n    str r0, [sp, #0x3c]\n    ldr r0, [r4, #0x14]\n    str r0, [sp, #0x40]\n    ldrh r0, [r2, r3]\n    str r0, [sp, #0x44]\n    add r0, sp, #0x18\n    bl Sprite_CreateAffine\n    add r5, r0, #0\n    bne _021E8278\n    bl GF_AssertFail\n    ldrh r1, [r4, #0xa]\n    add r0, r5, #0\n    bl Sprite_SetAnimCtrlSeq\n    ldr r0, [r4, #0x18]\n    cmp r0, #1\n    beq _021E828E\n    ldr r1, [r4, #0x10]\n    add r0, r5, #0\n    bl Sprite_SetPalIndexRespectVramOffset\n    add r0, r5, #0\n    add sp, #0x48\n    pop {r4, r5, r6, pc}\n    _021E8294: .word ov01_022063FC"
    );
    #endif
}

void ov01_021E8298(void) {
    /* Original at 0x021E8298 */
    /* Requires manual decompilation - 108 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r7, r0, #0\n    str r1, [sp]\n    add r0, r2, #0\n    str r3, [sp, #4]\n    add r1, r7, #4\n    add r2, r3, #0\n    bl G2dRenderer_Init\n    str r0, [r7]\n    ldr r1, _021E8374 ; =0x00000162\n    ldr r0, [sp, #4]\n    strh r0, [r7, r1]\n    ldr r0, [sp]\n    ldr r0, [r0, #0x10]\n    cmp r0, #0\n    beq _021E82C4\n    ldr r0, [sp]\n    ldr r0, [r0, #0x14]\n    cmp r0, #0\n    bne _021E82DA\n    mov r1, #0x16\n    mov r0, #4\n    lsl r1, r1, #4\n    strh r0, [r7, r1]\n    add r0, r1, #0\n    mov r2, #0\n    sub r0, #0x20\n    str r2, [r7, r0]\n    sub r1, #0x1c\n    str r2, [r7, r1]\n    b _021E82E0\n    mov r2, #6\n    sub r0, r1, #2\n    strh r2, [r7, r0]\n    mov r0, #0x16\n    lsl r0, r0, #4\n    ldrh r1, [r7, r0]\n    mov r4, #0\n    cmp r1, #0\n    bls _021E8310\n    ldr r5, [sp]\n    add r6, r7, #0\n    ldr r0, [r5]\n    ldr r2, [sp, #4]\n    add r1, r4, #0\n    bl Create2DGfxResObjMan\n    mov r1, #0x13\n    lsl r1, r1, #4\n    str r0, [r6, r1]\n    add r0, r1, #0\n    add r0, #0x30\n    ldrh r1, [r7, r0]\n    add r4, r4, #1\n    add r5, r5, #4\n    add r6, r6, #4\n    cmp r4, r1\n    blo _021E82F0\n    mov r0, #0\n    str r0, [sp, #8]\n    cmp r1, #0\n    bls _021E836E\n    mov r6, #0x52\n    add r5, r7, #0\n    add r4, r0, #0\n    lsl r6, r6, #2\n    ldr r0, [sp]\n    ldr r0, [r0]\n    cmp r0, #0\n    beq _021E8354\n    ldr r1, [sp, #4]\n    bl Create2DGfxResObjList\n    mov r1, #0x52\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    mov r0, #0x52\n    lsl r0, r0, #2\n    ldr r3, [r5, r0]\n    mov r1, #0\n    ldr r0, [r3, #4]\n    cmp r0, #0\n    bls _021E8354\n    add r2, r1, #0\n    ldr r0, [r3]\n    add r1, r1, #1\n    str r4, [r0, r2]\n    ldr r3, [r5, r6]\n    add r2, r2, #4\n    ldr r0, [r3, #4]\n    cmp r1, r0\n    blo _021E8344\n    ldr r0, [sp]\n    add r5, r5, #4\n    add r0, r0, #4\n    str r0, [sp]\n    ldr r0, [sp, #8]\n    add r0, r0, #1\n    str r0, [sp, #8]\n    mov r0, #0x16\n    lsl r0, r0, #4\n    ldrh r1, [r7, r0]\n    ldr r0, [sp, #8]\n    cmp r0, r1\n    blo _021E8320\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _021E8374: .word 0x00000162"
    );
    #endif
}

void ov01_021E8378(void) {
    /* Original at 0x021E8378 */
    /* Requires manual decompilation - 51 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    mov r0, #0x4d\n    lsl r0, r0, #2\n    add r4, r1, #0\n    ldr r0, [r5, r0]\n    ldr r1, [sp, #0x30]\n    add r6, r2, #0\n    add r7, r3, #0\n    bl GF2DGfxResObjExistsById\n    cmp r0, #0\n    bne _021E839C\n    bl GF_AssertFail\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [sp, #0x30]\n    add r2, r6, #0\n    str r0, [sp]\n    ldr r0, [sp, #0x2c]\n    add r3, r7, #0\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x28]\n    str r0, [sp, #8]\n    ldr r0, _021E83EC ; =0x00000162\n    ldrh r1, [r5, r0]\n    sub r0, #0x2e\n    str r1, [sp, #0xc]\n    ldr r0, [r5, r0]\n    add r1, r4, #0\n    bl AddPlttResObjFromNarc\n    add r4, r0, #0\n    beq _021E83E4\n    bl sub_0200B00C\n    cmp r0, #1\n    beq _021E83CC\n    bl GF_AssertFail\n    mov r0, #0x53\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    add r1, r4, #0\n    bl ov01_021E847C\n    ldr r1, [sp, #0x2c]\n    add r0, r4, #0\n    bl SpriteTransfer_GetPlttOffset\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    bl GF_AssertFail\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    _021E83EC: .word 0x00000162"
    );
    #endif
}

void ov01_021E83F0(void) {
    ov01_021E84B0();
}

void ov01_021E8404(void) {
    ov01_021E84B0();
}

void ov01_021E8418(void) {
    /* Original at 0x021E8418 */
    /* Requires manual decompilation - 43 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    mov r0, #0x13\n    lsl r0, r0, #4\n    add r4, r1, #0\n    ldr r0, [r5, r0]\n    ldr r1, [sp, #0x24]\n    add r6, r2, #0\n    add r7, r3, #0\n    bl GF2DGfxResObjExistsById\n    cmp r0, #0\n    bne _021E843C\n    bl GF_AssertFail\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    ldr r0, [sp, #0x24]\n    add r2, r6, #0\n    str r0, [sp]\n    ldr r0, [sp, #0x20]\n    add r3, r7, #0\n    str r0, [sp, #4]\n    ldr r0, _021E8478 ; =0x00000162\n    ldrh r1, [r5, r0]\n    sub r0, #0x32\n    str r1, [sp, #8]\n    ldr r0, [r5, r0]\n    add r1, r4, #0\n    bl AddCharResObjFromNarc\n    add r4, r0, #0\n    beq _021E8470\n    bl sub_0200ADA4\n    mov r0, #0x52\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    add r1, r4, #0\n    bl ov01_021E847C\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    bl GF_AssertFail\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    _021E8478: .word 0x00000162"
    );
    #endif
}

void ov01_021E847C(void) {
    /* Original at 0x021E847C */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6}\n    ldr r6, [r0, #4]\n    mov r3, #0\n    cmp r6, #0\n    ble _021E84A8\n    ldr r5, [r0]\n    add r4, r5, #0\n    ldr r2, [r4]\n    cmp r2, #0\n    bne _021E84A0\n    lsl r2, r3, #2\n    str r1, [r5, r2]\n    ldr r1, [r0, #8]\n    add r1, r1, #1\n    str r1, [r0, #8]\n    mov r0, #1\n    pop {r3, r4, r5, r6}\n    bx lr\n    add r3, r3, #1\n    add r4, r4, #4\n    cmp r3, r6\n    blt _021E848A\n    mov r0, #0\n    pop {r3, r4, r5, r6}\n    bx lr"
    );
    #endif
}

void ov01_021E84B0(void) {
    /* Original at 0x021E84B0 */
    /* Requires manual decompilation - 47 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r5, r0, #0\n    ldr r0, [sp, #0x28]\n    add r7, r1, #0\n    lsl r4, r0, #2\n    mov r0, #0x13\n    lsl r0, r0, #4\n    add r6, r5, r0\n    ldr r0, [r6, r4]\n    ldr r1, [sp, #0x2c]\n    str r2, [sp, #0xc]\n    str r3, [sp, #0x10]\n    bl GF2DGfxResObjExistsById\n    cmp r0, #0\n    bne _021E84DA\n    bl GF_AssertFail\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    ldr r0, [sp, #0x2c]\n    ldr r2, [sp, #0xc]\n    str r0, [sp]\n    ldr r0, [sp, #0x28]\n    ldr r3, [sp, #0x10]\n    str r0, [sp, #4]\n    ldr r0, _021E8518 ; =0x00000162\n    add r1, r7, #0\n    ldrh r0, [r5, r0]\n    str r0, [sp, #8]\n    ldr r0, [r6, r4]\n    bl AddCellOrAnimResObjFromNarc\n    add r1, r0, #0\n    beq _021E8510\n    mov r0, #0x52\n    add r2, r5, r4\n    lsl r0, r0, #2\n    ldr r0, [r2, r0]\n    bl ov01_021E847C\n    cmp r0, #1\n    beq _021E8514\n    bl GF_AssertFail\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    bl GF_AssertFail\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    _021E8518: .word 0x00000162"
    );
    #endif
}

void ov01_021E851C(void) {
    /* Original at 0x021E851C */
    /* Requires manual decompilation - 209 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0x74\n    add r5, r0, #0\n    ldr r0, _021E86F0 ; =0x00000162\n    add r4, r1, #0\n    ldrh r0, [r5, r0]\n    mov r1, #0x10\n    bl Heap_Alloc\n    add r6, r0, #0\n    ldr r0, _021E86F0 ; =0x00000162\n    mov r1, #8\n    ldrh r0, [r5, r0]\n    bl Heap_Alloc\n    str r0, [r6, #8]\n    ldr r0, _021E86F0 ; =0x00000162\n    mov r1, #0x24\n    ldrh r0, [r5, r0]\n    bl Heap_Alloc\n    ldr r1, [r6, #8]\n    add r2, r4, #0\n    str r0, [r1]\n    ldr r0, [r6, #8]\n    mov r1, #0\n    ldr r0, [r0]\n    add r3, sp, #0x2c\n    str r0, [r6, #4]\n    ldr r0, [r2, #0x14]\n    add r1, r1, #1\n    add r2, r2, #4\n    stmia r3!, {r0}\n    cmp r1, #6\n    blt _021E8556\n    mov r1, #5\n    lsl r1, r1, #6\n    ldr r0, [r5, r1]\n    cmp r0, #0\n    beq _021E8574\n    add r1, r1, #4\n    ldr r1, [r5, r1]\n    cmp r1, #0\n    bne _021E857E\n    mov r0, #0\n    mvn r0, r0\n    str r0, [sp, #0x3c]\n    str r0, [sp, #0x40]\n    b _021E85B4\n    mov r2, #0\n    ldr r1, [sp, #0x3c]\n    mvn r2, r2\n    cmp r1, r2\n    beq _021E8596\n    bl GF2DGfxResObjExistsById\n    cmp r0, #0\n    bne _021E8596\n    mov r0, #0\n    mvn r0, r0\n    str r0, [sp, #0x3c]\n    mov r0, #0\n    ldr r1, [sp, #0x40]\n    mvn r0, r0\n    cmp r1, r0\n    beq _021E85B4\n    mov r0, #0x51\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl GF2DGfxResObjExistsById\n    cmp r0, #0\n    bne _021E85B4\n    mov r0, #0\n    mvn r0, r0\n    str r0, [sp, #0x40]\n    ldr r0, [sp, #0x38]\n    str r0, [sp]\n    ldr r0, [sp, #0x3c]\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x40]\n    str r0, [sp, #8]\n    ldr r0, [r4, #0x30]\n    str r0, [sp, #0xc]\n    ldr r0, [r4, #0x2c]\n    str r0, [sp, #0x10]\n    mov r0, #0x13\n    lsl r0, r0, #4\n    ldr r1, [r5, r0]\n    str r1, [sp, #0x14]\n    add r1, r0, #4\n    ldr r1, [r5, r1]\n    str r1, [sp, #0x18]\n    add r1, r0, #0\n    add r1, #8\n    ldr r1, [r5, r1]\n    str r1, [sp, #0x1c]\n    add r1, r0, #0\n    add r1, #0xc\n    ldr r1, [r5, r1]\n    str r1, [sp, #0x20]\n    add r1, r0, #0\n    add r1, #0x10\n    ldr r1, [r5, r1]\n    add r0, #0x14\n    str r1, [sp, #0x24]\n    ldr r0, [r5, r0]\n    str r0, [sp, #0x28]\n    ldr r0, [r6, #4]\n    ldr r1, [sp, #0x2c]\n    ldr r2, [sp, #0x30]\n    ldr r3, [sp, #0x34]\n    bl CreateSpriteResourcesHeader\n    ldr r0, [r5]\n    str r0, [sp, #0x44]\n    ldr r0, [r6, #4]\n    str r0, [sp, #0x48]\n    mov r0, #0\n    ldrsh r0, [r4, r0]\n    cmp r0, #0\n    ble _021E8622\n    lsl r0, r0, #0xc\n    bl _fflt\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    b _021E8630\n    lsl r0, r0, #0xc\n    bl _fflt\n    mov r1, #0x3f\n    lsl r1, r1, #0x18\n    bl _fsub\n    bl _ffix\n    str r0, [sp, #0x4c]\n    mov r0, #2\n    ldrsh r0, [r4, r0]\n    cmp r0, #0\n    ble _021E8650\n    lsl r0, r0, #0xc\n    bl _fflt\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    b _021E865E\n    lsl r0, r0, #0xc\n    bl _fflt\n    mov r1, #0x3f\n    lsl r1, r1, #0x18\n    bl _fsub\n    bl _ffix\n    str r0, [sp, #0x50]\n    mov r0, #4\n    ldrsh r0, [r4, r0]\n    cmp r0, #0\n    ble _021E867E\n    lsl r0, r0, #0xc\n    bl _fflt\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    b _021E868C\n    lsl r0, r0, #0xc\n    bl _fflt\n    mov r1, #0x3f\n    lsl r1, r1, #0x18\n    bl _fsub\n    bl _ffix\n    str r0, [sp, #0x54]\n    ldr r0, [r4, #0x10]\n    cmp r0, #2\n    bne _021E86A2\n    mov r0, #3\n    ldr r1, [sp, #0x50]\n    lsl r0, r0, #0x12\n    add r0, r1, r0\n    str r0, [sp, #0x50]\n    mov r0, #1\n    lsl r0, r0, #0xc\n    str r0, [sp, #0x58]\n    str r0, [sp, #0x5c]\n    str r0, [sp, #0x60]\n    mov r1, #0\n    add r0, sp, #0x2c\n    strh r1, [r0, #0x38]\n    ldr r0, [r4, #8]\n    str r0, [sp, #0x68]\n    ldr r0, [r4, #0x10]\n    str r0, [sp, #0x6c]\n    ldr r0, _021E86F0 ; =0x00000162\n    ldrh r0, [r5, r0]\n    str r0, [sp, #0x70]\n    add r0, sp, #0x44\n    bl Sprite_CreateAffine\n    str r0, [r6]\n    cmp r0, #0\n    beq _021E86E6\n    bl Sprite_GetPalIndex\n    add r5, r0, #0\n    ldrh r1, [r4, #6]\n    ldr r0, [r6]\n    bl Sprite_SetAnimCtrlSeq\n    ldr r1, [r4, #0xc]\n    ldr r0, [r6]\n    add r1, r5, r1\n    bl Sprite_SetPaletteOverride\n    b _021E86EA\n    bl GF_AssertFail\n    add r0, r6, #0\n    add sp, #0x74\n    pop {r3, r4, r5, r6, pc}\n    _021E86F0: .word 0x00000162"
    );
    #endif
}

void ov01_021E86F4(void) {
    /* Original at 0x021E86F4 */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    ldr r0, [r6]\n    bl SpriteList_Delete\n    mov r0, #0x52\n    lsl r0, r0, #2\n    ldr r0, [r6, r0]\n    bl sub_0200AED4\n    mov r0, #0x53\n    lsl r0, r0, #2\n    ldr r0, [r6, r0]\n    bl sub_0200B0CC\n    mov r0, #0x16\n    lsl r0, r0, #4\n    ldrh r0, [r6, r0]\n    mov r4, #0\n    cmp r0, #0\n    bls _021E8742\n    mov r7, #0x16\n    add r5, r6, #0\n    lsl r7, r7, #4\n    mov r0, #0x52\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl Delete2DGfxResObjList\n    mov r0, #0x13\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    bl Destroy2DGfxResObjMan\n    ldrh r0, [r6, r7]\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, r0\n    blo _021E8724\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}
