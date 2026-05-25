/* Decompiled from asm/overlay_49.s */
#include "global.h"

void ov49_02258800(void) {
    /* Original at 0x02258800 */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "mov r3, #0\n    ldrsh r2, [r0, r3]\n    lsl r2, r2, #0xc\n    str r2, [r1]\n    mov r2, #2\n    ldrsh r0, [r0, r2]\n    lsl r0, r0, #0xc\n    str r0, [r1, #8]\n    str r3, [r1, #4]\n    bx lr"
    );
    #endif
}

void ov49_02258814(void) {
    /* Original at 0x02258814 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, [r0]\n    asr r2, r3, #0xb\n    lsr r2, r2, #0x14\n    add r2, r3, r2\n    asr r2, r2, #0xc\n    strh r2, [r1]\n    ldr r2, [r0, #8]\n    asr r0, r2, #0xb\n    lsr r0, r0, #0x14\n    add r0, r2, r0\n    asr r0, r0, #0xc\n    strh r0, [r1, #2]\n    bx lr"
    );
    #endif
}

void ov49_02258830(void) {
    /* Original at 0x02258830 */
    /* Requires manual decompilation - 44 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    mov r0, #1\n    str r0, [sp]\n    add r0, r1, #0\n    add r1, r2, #0\n    mov r2, #0\n    add r7, r3, #0\n    bl GfGfxLoader_LoadFromOpenNarc\n    add r4, r0, #0\n    bl NNS_G3dGetTex\n    add r6, r0, #0\n    bl GF3dRender_AllocAndLoadTexResources\n    add r0, r6, #0\n    add r1, sp, #0xc\n    add r2, sp, #8\n    bl NNS_G3dTexReleaseTexKey\n    add r0, r6, #0\n    bl NNS_G3dPlttReleasePlttKey\n    str r0, [sp, #4]\n    add r0, r4, #0\n    bl G3dResFileHeader_GetSizeWithoutTex\n    add r6, r0, #0\n    add r0, r7, #0\n    add r1, r6, #0\n    bl Heap_Alloc\n    str r0, [r5]\n    add r1, r4, #0\n    add r2, r6, #0\n    bl memcpy\n    ldr r0, [r5]\n    bl NNS_G3dGetTex\n    ldr r1, [sp, #0xc]\n    ldr r2, [sp, #8]\n    add r5, r0, #0\n    bl NNS_G3dTexSetTexKey\n    ldr r1, [sp, #4]\n    add r0, r5, #0\n    bl NNS_G3dPlttSetPlttKey\n    add r0, r4, #0\n    bl Heap_Free\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov49_022588A0(void) {
    /* Original at 0x022588A0 */
    /* Requires manual decompilation - 78 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x60\n    add r5, r1, #0\n    add r4, r0, #0\n    add r0, r5, #0\n    add r1, sp, #0x54\n    add r2, sp, #0x58\n    add r3, sp, #0x5c\n    bl sub_020182B0\n    add r0, r5, #0\n    add r1, sp, #0x48\n    add r2, sp, #0x4c\n    add r3, sp, #0x50\n    bl sub_020182CC\n    add r0, r5, #0\n    mov r1, #0\n    bl sub_020182EC\n    add r6, r0, #0\n    add r0, r5, #0\n    mov r1, #1\n    bl sub_020182EC\n    add r7, r0, #0\n    add r0, r5, #0\n    mov r1, #2\n    bl sub_020182EC\n    add r5, r0, #0\n    add r0, sp, #0x24\n    bl MTX_Identity33_\n    asr r0, r6, #4\n    lsl r3, r0, #1\n    lsl r1, r3, #1\n    ldr r2, _02258954 ; =FX_SinCosTable_\n    add r3, r3, #1\n    lsl r3, r3, #1\n    ldrsh r1, [r2, r1]\n    ldrsh r2, [r2, r3]\n    add r0, sp, #0\n    bl MTX_RotX33_\n    add r1, sp, #0x24\n    add r0, sp, #0\n    add r2, r1, #0\n    bl MTX_Concat33\n    asr r0, r5, #4\n    lsl r2, r0, #1\n    lsl r1, r2, #1\n    ldr r3, _02258954 ; =FX_SinCosTable_\n    add r2, r2, #1\n    lsl r2, r2, #1\n    ldrsh r1, [r3, r1]\n    ldrsh r2, [r3, r2]\n    add r0, sp, #0\n    bl MTX_RotZ33_\n    add r1, sp, #0x24\n    add r0, sp, #0\n    add r2, r1, #0\n    bl MTX_Concat33\n    asr r0, r7, #4\n    lsl r2, r0, #1\n    lsl r1, r2, #1\n    ldr r3, _02258954 ; =FX_SinCosTable_\n    add r2, r2, #1\n    lsl r2, r2, #1\n    ldrsh r1, [r3, r1]\n    ldrsh r2, [r3, r2]\n    add r0, sp, #0\n    bl MTX_RotY33_\n    add r1, sp, #0x24\n    add r0, sp, #0\n    add r2, r1, #0\n    bl MTX_Concat33\n    ldr r0, [r4, #8]\n    add r1, sp, #0x54\n    add r2, sp, #0x24\n    add r3, sp, #0x48\n    bl sub_0201F990\n    add sp, #0x60\n    pop {r3, r4, r5, r6, r7, pc}\n    _02258954: .word FX_SinCosTable_"
    );
    #endif
}

void ov49_02258958(void) {
    /* Original at 0x02258958 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r1, #4\n    bl Heap_Alloc\n    add r4, r0, #0\n    mov r0, #0x23\n    mov r1, #0x2a\n    add r2, r5, #0\n    bl ov42_02227EE0\n    str r0, [r4]\n    mov r0, #1\n    mov r1, #0\n    str r0, [sp]\n    mov r0, #0xca\n    add r2, r1, #0\n    add r3, r5, #0\n    bl GfGfxLoader_LoadFromNarc\n    add r5, r0, #0\n    ldr r0, [r4]\n    add r1, r5, #0\n    bl ov42_02227F48\n    add r0, r5, #0\n    bl Heap_Free\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov49_02258994(void) {
    ov42_02227F28();
    Heap_Free(r4);
}

u8 ov49_022589A8(void) {
    return 0x23;
}

void ov49_022589AC(void) {
    ov42_02227FA4();
}

void ov49_022589B8(void) {
    ov42_02227FDC();
}

void ov49_022589C4(void) {
    ov42_02227FDC();
}

void ov49_022589D8(void) {
    /* Original at 0x022589D8 */
    /* Requires manual decompilation - 43 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    mov r5, #0\n    ldr r7, [sp, #0x28]\n    str r0, [sp]\n    str r1, [sp, #4]\n    str r2, [sp, #8]\n    str r3, [sp, #0xc]\n    str r5, [sp, #0x10]\n    ldr r0, [sp, #0x10]\n    mov r4, #0\n    lsl r0, r0, #0x10\n    lsr r6, r0, #0x10\n    lsl r1, r4, #0x10\n    ldr r0, [sp]\n    lsr r1, r1, #0x10\n    add r2, r6, #0\n    bl ov49_022589B8\n    ldr r1, [sp, #4]\n    cmp r0, r1\n    bne _02258A1A\n    cmp r5, r7\n    blo _02258A18\n    ldr r0, [sp, #8]\n    ldr r1, [sp, #0x10]\n    strh r4, [r0]\n    ldr r0, [sp, #0xc]\n    add sp, #0x14\n    strh r1, [r0]\n    mov r0, #1\n    pop {r4, r5, r6, r7, pc}\n    add r5, r5, #1\n    add r4, r4, #1\n    cmp r4, #0x23\n    blt _022589F2\n    ldr r0, [sp, #0x10]\n    add r0, r0, #1\n    str r0, [sp, #0x10]\n    cmp r0, #0x2a\n    blt _022589EA\n    mov r0, #0\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov49_02258A30(void) {
    /* Original at 0x02258A30 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _02258A4C ; =ov49_02269634\n    mov r2, #0\n    ldrb r1, [r3]\n    cmp r0, r1\n    bne _02258A3E\n    mov r0, #1\n    bx lr\n    add r2, r2, #1\n    add r3, r3, #1\n    cmp r2, #0x20\n    blo _02258A34\n    mov r0, #0\n    bx lr\n    nop\n    _02258A4C: .word ov49_02269634"
    );
    #endif
}

void ov49_02258A50(void) {
    /* Original at 0x02258A50 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _02258A6C ; =_02269624\n    mov r2, #0\n    ldrb r1, [r3]\n    cmp r0, r1\n    bne _02258A5E\n    mov r0, #1\n    bx lr\n    add r2, r2, #1\n    add r3, r3, #1\n    cmp r2, #3\n    blo _02258A54\n    mov r0, #0\n    bx lr\n    nop\n    _02258A6C: .word _02269624"
    );
    #endif
}

void ov49_02258A70(void) {
    /* Original at 0x02258A70 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _02258A8C ; =ov49_0226962C\n    mov r2, #0\n    ldrb r1, [r3]\n    cmp r0, r1\n    bne _02258A7E\n    mov r0, #1\n    bx lr\n    add r2, r2, #1\n    add r3, r3, #1\n    cmp r2, #7\n    blo _02258A74\n    mov r0, #0\n    bx lr\n    nop\n    _02258A8C: .word ov49_0226962C"
    );
    #endif
}

void ov49_02258A90(void) {
    /* Original at 0x02258A90 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _02258AAC ; =ov49_02269628\n    mov r2, #0\n    ldrb r1, [r3]\n    cmp r0, r1\n    bne _02258A9E\n    mov r0, #1\n    bx lr\n    add r2, r2, #1\n    add r3, r3, #1\n    cmp r2, #4\n    blo _02258A94\n    mov r0, #0\n    bx lr\n    nop\n    _02258AAC: .word ov49_02269628"
    );
    #endif
}

void ov49_02258AB0(void) {
    /* Original at 0x02258AB0 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0]\n    bx lr"
    );
    #endif
}

void ov49_02258AB4(void) {
    /* Original at 0x02258AB4 */
    /* Requires manual decompilation - 46 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r5, r0, #0\n    add r6, r1, #0\n    add r0, r3, #0\n    mov r1, #0x28\n    str r2, [sp]\n    str r3, [sp, #4]\n    bl Heap_Alloc\n    mov r1, #0\n    mov r2, #0x28\n    add r4, r0, #0\n    bl memset\n    ldr r1, [sp, #4]\n    add r0, r5, #0\n    bl ov42_02228010\n    str r0, [r4]\n    ldr r2, [sp, #4]\n    ldr r3, [sp, #0x20]\n    add r0, r5, #0\n    add r1, r6, #0\n    bl ov45_02230498\n    str r0, [r4, #4]\n    ldr r1, [sp, #4]\n    mov r0, #0x20\n    bl ov42_02229A40\n    str r0, [r4, #0x10]\n    mov r0, #0x28\n    add r7, r5, #0\n    mul r7, r0\n    ldr r0, [sp, #4]\n    add r1, r7, #0\n    strh r5, [r4, #0xc]\n    bl Heap_Alloc\n    mov r1, #0\n    add r2, r7, #0\n    str r0, [r4, #8]\n    bl memset\n    ldr r0, [sp]\n    str r0, [r4, #0x14]\n    add r0, r4, #0\n    strh r6, [r4, #0xe]\n    bl ov49_022591D8\n    add r0, r4, #0\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov49_02258B20(void) {
    Heap_Free(*((u32*)(r0 + 8)));
    ov42_02229A78(*((u32*)(r4 + 0x10)));
    ov45_02230638(*((u32*)(r4 + 4)));
    ov42_02228050();
    Heap_Free(r4);
}

void ov49_02258B44(void) {
    ov42_0222807C();
    ov49_02259A54(r4, *((u32*)(r4 + 4)));
}

void ov49_02258B5C(void) {
    /* Original at 0x02258B5C */
    /* Requires manual decompilation - 52 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    ldrh r0, [r5, #0xc]\n    mov r6, #0\n    cmp r0, #0\n    ble _02258B8C\n    add r4, r6, #0\n    ldr r0, [r5, #8]\n    add r0, r0, r4\n    bl ov49_022593FC\n    cmp r0, #0\n    bne _02258B82\n    ldr r0, [r5, #8]\n    add r1, r5, #0\n    add r0, r0, r4\n    ldr r2, [r0, #0x24]\n    blx r2\n    ldrh r0, [r5, #0xc]\n    add r6, r6, #1\n    add r4, #0x28\n    cmp r6, r0\n    blt _02258B6C\n    ldr r0, [r5, #0x14]\n    bl ov49_02258AB0\n    add r4, r0, #0\n    ldr r0, [r5, #0x10]\n    add r1, sp, #8\n    bl ov42_02229AC8\n    cmp r0, #1\n    bne _02258BC8\n    add r7, sp, #0\n    add r6, sp, #8\n    ldr r1, [r5]\n    add r0, r4, #0\n    add r2, r6, #0\n    add r3, r7, #0\n    bl ov42_02228C80\n    cmp r0, #1\n    bne _02258BBC\n    ldr r0, [r5]\n    add r1, r7, #0\n    bl ov42_02228068\n    ldr r0, [r5, #0x10]\n    add r1, r6, #0\n    bl ov42_02229AC8\n    cmp r0, #1\n    beq _02258BA4\n    ldr r0, [r5, #4]\n    bl ov45_02230680\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov49_02258BD4(void) {
    ov45_022306B4();
}

void ov49_02258BE0(void) {
    ov45_022306F4();
}

void ov49_02258BEC(void) {
    /* Original at 0x02258BEC */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "add r3, r0, #0\n    add r2, r1, #0\n    ldr r1, [r3, #4]\n    lsl r3, r2, #2\n    ldr r2, _02258C00 ; =ov49_02269660\n    add r0, #0x18\n    ldr r2, [r2, r3]\n    ldr r3, _02258C04 ; =ov49_02259A20\n    bx r3\n    nop\n    _02258C00: .word ov49_02269660\n    _02258C04: .word ov49_02259A20"
    );
    #endif
}

void ov49_02258C08(void) {
    /* Original at 0x02258C08 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "lsl r2, r1, #2\n    ldr r1, _02258C14 ; =ov49_02269660\n    ldr r3, _02258C18 ; =ov49_02259A3C\n    add r0, #0x18\n    ldr r1, [r1, r2]\n    bx r3\n    _02258C14: .word ov49_02269660\n    _02258C18: .word ov49_02259A3C"
    );
    #endif
}

void ov49_02258C1C(void) {
    ov42_02229A8C();
}

void ov49_02258C28(void) {
    /* Original at 0x02258C28 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #8\n    add r5, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    add r2, sp, #4\n    add r4, r1, #0\n    ldr r0, [r5, #0x14]\n    mov r1, #3\n    add r2, #2\n    add r3, sp, #4\n    bl ov49_022589D8\n    cmp r0, #0\n    bne _02258C4A\n    bl GF_AssertFail\n    add r3, sp, #4\n    ldrh r2, [r3, #2]\n    ldrh r3, [r3]\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov49_02258C5C\n    add sp, #8\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov49_02258C5C(void) {
    /* Original at 0x02258C5C */
    /* Requires manual decompilation - 41 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r7, r2, #0\n    add r5, r0, #0\n    add r6, r1, #0\n    str r3, [sp]\n    bl ov49_022593C0\n    add r4, r0, #0\n    lsl r0, r7, #4\n    add r1, sp, #4\n    strh r0, [r1]\n    ldr r0, [sp]\n    mov r2, #0\n    lsl r0, r0, #4\n    strh r0, [r1, #2]\n    strh r6, [r1, #4]\n    strh r2, [r1, #6]\n    strh r2, [r1, #8]\n    ldrh r0, [r5, #0xe]\n    cmp r0, #0\n    bne _02258C8C\n    strh r2, [r1, #0xa]\n    b _02258C90\n    mov r0, #0x61\n    strh r0, [r1, #0xa]\n    ldr r0, [r5]\n    add r1, sp, #4\n    bl ov42_022280B8\n    str r0, [r4]\n    ldr r0, [r5, #4]\n    ldr r1, [r4]\n    bl ov45_0223070C\n    str r0, [r4, #4]\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #0\n    str r4, [r5, #0x20]\n    bl ov49_02258EEC\n    add r0, r4, #0\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov49_02258CB8(void) {
    /* Original at 0x02258CB8 */
    /* Requires manual decompilation - 70 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x1c\n    add r5, r0, #0\n    add r7, r1, #0\n    str r2, [sp, #4]\n    bl ov49_022593C0\n    mov r6, #0\n    str r0, [sp, #8]\n    add r4, r6, #0\n    str r4, [sp]\n    add r2, sp, #0xc\n    ldr r0, [r5, #0x14]\n    add r1, r7, #4\n    add r2, #2\n    add r3, sp, #0xc\n    bl ov49_022589D8\n    cmp r0, #0\n    bne _02258CE6\n    add sp, #0x1c\n    mov r0, #0\n    pop {r4, r5, r6, r7, pc}\n    add r0, r5, #0\n    bl ov49_02258DAC\n    cmp r0, #0\n    bne _02258CF4\n    mov r6, #1\n    b _02258D06\n    add r1, sp, #0xc\n    add r2, sp, #0xc\n    ldrh r1, [r1, #2]\n    ldrh r2, [r2]\n    bl ov49_02258FDC\n    cmp r0, #0\n    bne _02258D06\n    mov r6, #1\n    add r0, r4, #1\n    lsl r0, r0, #0x10\n    lsr r4, r0, #0x10\n    cmp r6, #0\n    beq _02258CCC\n    add r1, sp, #0xc\n    ldrh r0, [r1, #2]\n    lsl r0, r0, #4\n    strh r0, [r1, #4]\n    ldrh r0, [r1]\n    lsl r0, r0, #4\n    strh r0, [r1, #6]\n    strh r7, [r1, #8]\n    mov r0, #0\n    strh r0, [r1, #0xa]\n    mov r0, #1\n    strh r0, [r1, #0xc]\n    ldr r0, [sp, #4]\n    strh r0, [r1, #0xe]\n    ldr r0, [r5]\n    add r1, sp, #0x10\n    bl ov42_022280B8\n    ldr r1, [sp, #8]\n    str r0, [r1]\n    ldr r0, [r5, #4]\n    ldr r1, [r1]\n    bl ov45_0223070C\n    ldr r1, [sp, #8]\n    mov r2, #0\n    str r0, [r1, #4]\n    add r0, r5, #0\n    bl ov49_02258EEC\n    ldr r0, [sp, #8]\n    add sp, #0x1c\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov49_02258D54(void) {
    ov45_02230884(*((u32*)(r0 + 4)));
    ov42_02228100();
    memset(r4, 0, 0x28);
}

void ov49_02258D70(void) {
    /* Original at 0x02258D70 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldrh r0, [r5, #0xc]\n    add r7, r1, #0\n    mov r6, #0\n    cmp r0, #0\n    ble _02258DA6\n    add r4, r6, #0\n    ldr r0, [r5, #8]\n    ldr r0, [r0, r4]\n    cmp r0, #0\n    beq _02258D9C\n    mov r1, #4\n    bl ov42_02228188\n    cmp r0, r7\n    bne _02258D9C\n    mov r0, #0x28\n    ldr r1, [r5, #8]\n    mul r0, r6\n    add r0, r1, r0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldrh r0, [r5, #0xc]\n    add r6, r6, #1\n    add r4, #0x28\n    cmp r6, r0\n    blt _02258D80\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov49_02258DAC(void) {
    /* Original at 0x02258DAC */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0, #0x20]\n    bx lr"
    );
    #endif
}

void ov49_02258DB0(void) {
    /* Original at 0x02258DB0 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0, #0x24]\n    bx lr"
    );
    #endif
}

void ov49_02258DB4(void) {
    /* Original at 0x02258DB4 */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r0, r1, r2, r3}\n    push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4]\n    cmp r0, #0\n    bne _02258DC4\n    bl GF_AssertFail\n    add r1, sp, #8\n    ldrh r2, [r1, #4]\n    mov r3, sp\n    ldr r0, [r4]\n    sub r3, r3, #4\n    strh r2, [r3]\n    ldrh r1, [r1, #6]\n    strh r1, [r3, #2]\n    ldr r1, [r3]\n    bl ov42_0222839C\n    add r1, sp, #8\n    mov r3, sp\n    ldrh r2, [r1, #4]\n    ldr r0, [r4]\n    sub r3, r3, #4\n    strh r2, [r3]\n    ldrh r1, [r1, #6]\n    strh r1, [r3, #2]\n    ldr r1, [r3]\n    bl ov42_022283AC\n    ldr r0, [r4]\n    mov r1, #5\n    mov r2, #0\n    bl ov42_022281F8\n    pop {r4}\n    pop {r3}\n    add sp, #0x10\n    bx r3"
    );
    #endif
}

void ov49_02258E04(void) {
    /* Original at 0x02258E04 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r0, r1, r2, r3}\n    push {r3, r4, r5, lr}\n    add r1, sp, #0x10\n    add r4, r2, #0\n    mov r3, sp\n    ldrh r2, [r1, #4]\n    sub r3, r3, #4\n    add r5, r0, #0\n    strh r2, [r3]\n    ldrh r1, [r1, #6]\n    strh r1, [r3, #2]\n    ldr r1, [r3]\n    bl ov49_02258DB4\n    ldr r0, [r5]\n    mov r1, #6\n    add r2, r4, #0\n    bl ov42_022281F8\n    pop {r3, r4, r5}\n    pop {r3}\n    add sp, #0x10\n    bx r3"
    );
    #endif
}

void ov49_02258E34(void) {
    /* Original at 0x02258E34 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    add r4, r0, #0\n    ldr r0, [r4]\n    cmp r0, #0\n    bne _02258E44\n    bl GF_AssertFail\n    ldr r0, [r4]\n    bl ov42_022282F4\n    add r1, sp, #0\n    strh r0, [r1]\n    lsr r0, r0, #0x10\n    strh r0, [r1, #2]\n    ldrh r2, [r1, #2]\n    ldrh r0, [r1]\n    lsl r1, r2, #0x10\n    orr r0, r1\n    add sp, #4\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov49_02258E60(void) {
    /* Original at 0x02258E60 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r5]\n    add r4, r1, #0\n    cmp r0, #0\n    bne _02258E70\n    bl GF_AssertFail\n    ldr r0, [r5]\n    add r1, r4, #0\n    bl ov42_02228188\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov49_02258E7C(void) {
    /* Original at 0x02258E7C */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    ldr r0, [r4]\n    mov r1, #5\n    add r6, r2, #0\n    add r7, r3, #0\n    bl ov42_02228188\n    cmp r0, #0\n    beq _02258E96\n    bl GF_AssertFail\n    ldr r0, [r4]\n    mov r1, #4\n    bl ov42_02228188\n    add r3, r0, #0\n    add r0, r5, #0\n    add r1, r6, #0\n    add r2, r7, #0\n    bl ov49_0225927C\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov49_02258EAC(void) {
    /* Original at 0x02258EAC */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r4, r1, #0\n    add r5, r0, #0\n    ldr r0, [r4]\n    add r6, r2, #0\n    add r7, r3, #0\n    bl ov42_022282DC\n    add r1, sp, #0\n    strh r0, [r1]\n    lsr r0, r0, #0x10\n    strh r0, [r1, #2]\n    ldrh r0, [r1]\n    strh r0, [r1, #4]\n    ldrh r0, [r1, #2]\n    strh r0, [r1, #6]\n    strh r6, [r1, #8]\n    strb r7, [r1, #0xa]\n    ldr r0, [r4]\n    mov r1, #4\n    bl ov42_02228188\n    add r1, sp, #0\n    strb r0, [r1, #0xb]\n    ldr r0, [r5]\n    add r1, sp, #4\n    bl ov42_02228068\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov49_02258EEC(void) {
    /* Original at 0x02258EEC */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r2, #0\n    add r6, r0, #0\n    add r5, r1, #0\n    cmp r4, #0xa\n    blt _02258EFC\n    bl GF_AssertFail\n    ldrb r0, [r5, #0xb]\n    lsl r1, r0, #2\n    ldr r0, _02258F30 ; =ov49_02269698\n    ldr r2, [r0, r1]\n    cmp r2, #0\n    beq _02258F0E\n    add r0, r5, #0\n    add r1, r6, #0\n    blx r2\n    mov r2, #0\n    strh r2, [r5, #8]\n    strb r2, [r5, #0xa]\n    add r1, r5, #0\n    strb r4, [r5, #0xb]\n    add r1, #0xc\n    mov r0, #0x18\n    strb r2, [r1]\n    add r1, r1, #1\n    sub r0, r0, #1\n    bne _02258F1C\n    ldr r0, _02258F34 ; =ov49_022696C0\n    lsl r1, r4, #2\n    ldr r0, [r0, r1]\n    str r0, [r5, #0x24]\n    pop {r4, r5, r6, pc}\n    nop\n    _02258F30: .word ov49_02269698\n    _02258F34: .word ov49_022696C0"
    );
    #endif
}

void ov49_02258F38(void) {
    /* Original at 0x02258F38 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "ldrb r0, [r0, #0xa]\n    bx lr"
    );
    #endif
}

void ov49_02258F3C(void) {
    /* Original at 0x02258F3C */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "ldrb r0, [r0, #0xb]\n    bx lr"
    );
    #endif
}

void ov49_02258F40(void) {
    /* Original at 0x02258F40 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    ldr r0, [r4]\n    mov r1, #6\n    bl ov42_02228188\n    add r2, r0, #0\n    ldr r0, [r4]\n    ldr r1, [r5]\n    bl ov42_022283BC\n    cmp r0, #0\n    bne _02258F60\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    mov r1, #4\n    bl ov42_02228188\n    add r1, r0, #0\n    add r0, r5, #0\n    bl ov49_02258D70\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov49_02258F70(void) {
    ov45_022308B8();
}

void ov49_02258F7C(void) {
    /* Original at 0x02258F7C */
    /* Requires manual decompilation - 45 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    add r4, r0, #0\n    lsl r0, r1, #4\n    add r1, sp, #0\n    strh r0, [r1]\n    lsl r0, r2, #4\n    strh r0, [r1, #2]\n    mov r3, sp\n    ldrh r2, [r1]\n    ldr r0, [r4]\n    sub r3, r3, #4\n    strh r2, [r3]\n    ldrh r1, [r1, #2]\n    strh r1, [r3, #2]\n    ldr r1, [r3]\n    bl ov42_022284A4\n    cmp r0, #0\n    bne _02258FAA\n    add sp, #4\n    mov r0, #0\n    pop {r3, r4, pc}\n    ldrh r2, [r4, #0xc]\n    mov r1, #0\n    cmp r2, #0\n    ble _02258FD0\n    ldr r3, [r4, #8]\n    ldr r2, [r3]\n    cmp r2, r0\n    bne _02258FC6\n    mov r0, #0x28\n    ldr r2, [r4, #8]\n    mul r0, r1\n    add sp, #4\n    add r0, r2, r0\n    pop {r3, r4, pc}\n    ldrh r2, [r4, #0xc]\n    add r1, r1, #1\n    add r3, #0x28\n    cmp r1, r2\n    blt _02258FB4\n    bl GF_AssertFail\n    mov r0, #0\n    add sp, #4\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov49_02258FDC(void) {
    /* Original at 0x02258FDC */
    /* Requires manual decompilation - 54 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    ldr r0, [r5]\n    add r6, r1, #0\n    add r4, r2, #0\n    bl ov42_022282DC\n    add r1, sp, #0\n    strh r0, [r1, #4]\n    lsr r0, r0, #0x10\n    strh r0, [r1, #6]\n    ldrh r0, [r1, #4]\n    strh r0, [r1, #0xc]\n    ldrh r0, [r1, #6]\n    strh r0, [r1, #0xe]\n    ldr r0, [r5]\n    bl ov42_022282E8\n    add r2, sp, #0\n    strh r0, [r2]\n    lsr r0, r0, #0x10\n    strh r0, [r2, #2]\n    ldrh r0, [r2]\n    mov r1, #0xc\n    strh r0, [r2, #8]\n    ldrh r0, [r2, #2]\n    strh r0, [r2, #0xa]\n    ldrsh r1, [r2, r1]\n    lsl r0, r6, #4\n    cmp r1, r0\n    bne _0225902C\n    mov r1, #0xe\n    ldrsh r2, [r2, r1]\n    lsl r1, r4, #4\n    cmp r2, r1\n    bne _0225902C\n    add sp, #0x10\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    add r2, sp, #0\n    mov r1, #8\n    ldrsh r1, [r2, r1]\n    cmp r1, r0\n    bne _02259046\n    mov r0, #0xa\n    ldrsh r1, [r2, r0]\n    lsl r0, r4, #4\n    cmp r1, r0\n    bne _02259046\n    add sp, #0x10\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    mov r0, #0\n    add sp, #0x10\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov49_0225904C(void) {
    /* Original at 0x0225904C */
    /* Requires manual decompilation - 108 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x2c\n    add r6, r0, #0\n    ldr r0, [r1]\n    str r2, [sp]\n    str r3, [sp, #4]\n    bl ov42_022282DC\n    add r4, sp, #0x1c\n    strh r0, [r4, #4]\n    lsr r0, r0, #0x10\n    strh r0, [r4, #6]\n    ldrh r0, [r4, #4]\n    mov r5, sp\n    ldr r7, _0225912C ; =ov49_02269654\n    strh r0, [r4, #0xc]\n    ldrh r0, [r4, #6]\n    sub r5, r5, #4\n    strh r0, [r4, #0xe]\n    mov r0, #0\n    str r0, [sp, #0x10]\n    ldrh r0, [r4, #0xc]\n    str r0, [sp, #0x14]\n    ldrh r0, [r4, #0xe]\n    str r0, [sp, #0x18]\n    ldr r0, [sp, #0x14]\n    strh r0, [r5]\n    ldr r0, [sp, #0x18]\n    strh r0, [r5, #2]\n    ldrb r1, [r7]\n    ldr r0, [r5]\n    bl ov42_02228270\n    strh r0, [r4]\n    lsr r0, r0, #0x10\n    strh r0, [r4, #2]\n    ldrh r0, [r4]\n    strh r0, [r4, #8]\n    ldrh r0, [r4, #2]\n    strh r0, [r4, #0xa]\n    mov r0, #0xa\n    ldrsh r1, [r4, r0]\n    asr r0, r1, #3\n    lsr r0, r0, #0x1c\n    add r0, r1, r0\n    asr r0, r0, #4\n    str r0, [sp, #0xc]\n    mov r0, #8\n    ldrsh r1, [r4, r0]\n    ldr r2, [sp, #0xc]\n    asr r0, r1, #3\n    lsr r0, r0, #0x1c\n    add r0, r1, r0\n    asr r0, r0, #4\n    str r0, [sp, #8]\n    ldr r1, [sp, #8]\n    lsl r2, r2, #0x10\n    lsl r1, r1, #0x10\n    ldr r0, [r6, #0x14]\n    lsr r1, r1, #0x10\n    lsr r2, r2, #0x10\n    bl ov49_022589AC\n    cmp r0, #1\n    beq _02259118\n    ldr r1, [sp, #8]\n    ldr r2, [sp, #0xc]\n    lsl r1, r1, #0x10\n    lsl r2, r2, #0x10\n    ldr r0, [r6, #0x14]\n    lsr r1, r1, #0x10\n    lsr r2, r2, #0x10\n    bl ov49_022589C4\n    cmp r0, #0\n    beq _022590E8\n    cmp r0, #0x2a\n    bne _02259118\n    ldrh r1, [r4, #8]\n    ldr r0, [r6]\n    strh r1, [r5]\n    ldrh r1, [r4, #0xa]\n    strh r1, [r5, #2]\n    ldr r1, [r5]\n    bl ov42_022284A4\n    cmp r0, #0\n    bne _02259118\n    ldr r1, _0225912C ; =ov49_02269654\n    ldr r0, [sp, #0x10]\n    ldrb r1, [r1, r0]\n    ldr r0, [sp]\n    str r1, [r0]\n    add r1, sp, #0x1c\n    ldr r0, [sp, #4]\n    ldrh r2, [r1, #8]\n    add sp, #0x2c\n    strh r2, [r0]\n    ldrh r1, [r1, #0xa]\n    strh r1, [r0, #2]\n    mov r0, #1\n    pop {r4, r5, r6, r7, pc}\n    ldr r0, [sp, #0x10]\n    add r7, r7, #1\n    add r0, r0, #1\n    str r0, [sp, #0x10]\n    cmp r0, #4\n    blt _0225907E\n    mov r0, #0\n    add sp, #0x2c\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _0225912C: .word ov49_02269654"
    );
    #endif
}

void ov49_02259130(void) {
    ov45_0223089C();
}

void ov49_0225913C(void) {
    ov45_022308C0();
}

void ov49_02259148(void) {
    ov45_022308E4();
}

void ov49_02259154(void) {
    ov45_02230908();
}

void ov49_02259160(void) {
    ov45_02230920();
}

void ov49_0225916C(void) {
    /* Original at 0x0225916C */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    cmp r1, #0\n    ldr r0, [r0, #4]\n    beq _0225917C\n    mov r1, #1\n    bl ov45_0223093C\n    pop {r3, pc}\n    bl ov45_02230968\n    pop {r3, pc}"
    );
    #endif
}

void ov49_02259184(void) {
    /* Original at 0x02259184 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    cmp r1, #0\n    ldr r0, [r0, #4]\n    beq _02259194\n    mov r1, #0\n    bl ov45_0223093C\n    pop {r3, pc}\n    bl ov45_02230968\n    pop {r3, pc}"
    );
    #endif
}

void ov49_0225919C(void) {
    /* Original at 0x0225919C */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    cmp r1, #0\n    ldr r0, [r0, #4]\n    beq _022591AC\n    mov r1, #2\n    bl ov45_0223093C\n    pop {r3, pc}\n    bl ov45_02230968\n    pop {r3, pc}"
    );
    #endif
}

void ov49_022591B4(void) {
    ov45_022308B0();
}

void ov49_022591C0(void) {
    ov45_02230978();
}

void ov49_022591CC(void) {
    ov45_02230994();
}

void ov49_022591D8(void) {
    /* Original at 0x022591D8 */
    /* Requires manual decompilation - 75 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x1c\n    add r5, r0, #0\n    mov r0, #0\n    ldr r4, _02259278 ; =ov49_02269678\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #4]\n    str r0, [sp]\n    ldrb r1, [r4]\n    add r2, sp, #0xc\n    ldr r0, [r5, #0x14]\n    add r2, #2\n    add r3, sp, #0xc\n    bl ov49_022589D8\n    cmp r0, #1\n    bne _02259266\n    add r7, sp, #0xc\n    add r0, r5, #0\n    bl ov49_022593C0\n    add r6, r0, #0\n    ldrh r0, [r7, #2]\n    add r1, sp, #0x10\n    lsl r0, r0, #4\n    strh r0, [r7, #4]\n    ldrh r0, [r7]\n    lsl r0, r0, #4\n    strh r0, [r7, #6]\n    ldrb r0, [r4, #4]\n    strh r0, [r7, #8]\n    mov r0, #0\n    strh r0, [r7, #0xa]\n    ldrb r0, [r4, #1]\n    strh r0, [r7, #0xc]\n    ldrh r0, [r4, #2]\n    strh r0, [r7, #0xe]\n    ldr r0, [r5]\n    bl ov42_022280B8\n    add r1, r0, #0\n    str r1, [r6]\n    ldr r0, [r5, #4]\n    bl ov45_0223070C\n    str r0, [r6, #4]\n    add r0, r5, #0\n    add r1, r6, #0\n    mov r2, #0\n    bl ov49_02258EEC\n    ldrb r0, [r4]\n    cmp r0, #0x61\n    bne _02259248\n    str r6, [r5, #0x24]\n    ldr r0, [sp, #4]\n    add r2, sp, #0xc\n    add r0, r0, #1\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp, #4]\n    str r0, [sp]\n    ldrb r1, [r4]\n    ldr r0, [r5, #0x14]\n    add r2, #2\n    add r3, sp, #0xc\n    bl ov49_022589D8\n    cmp r0, #1\n    beq _022591FE\n    ldr r0, [sp, #8]\n    add r4, #8\n    add r0, r0, #1\n    str r0, [sp, #8]\n    cmp r0, #4\n    blo _022591E4\n    add sp, #0x1c\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _02259278: .word ov49_02269678"
    );
    #endif
}

void ov49_0225927C(void) {
    ov49_02258C1C();
}

void ov49_02259294(void) {
    MTRandom();
    _u32_div_f(r4);
}

void ov49_022592A8(void) {
    /* Original at 0x022592A8 */
    /* Requires manual decompilation - 56 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    ldr r0, [r1]\n    add r6, r2, #0\n    add r4, r3, #0\n    bl ov42_022282DC\n    add r1, sp, #0\n    strh r0, [r1, #4]\n    lsr r0, r0, #0x10\n    strh r0, [r1, #6]\n    ldrh r0, [r1, #4]\n    mov r2, sp\n    sub r2, r2, #4\n    strh r0, [r1, #0xc]\n    ldrh r0, [r1, #6]\n    strh r0, [r1, #0xe]\n    ldrh r0, [r1, #0xc]\n    strh r0, [r2]\n    ldrh r0, [r1, #0xe]\n    add r1, r6, #0\n    strh r0, [r2, #2]\n    ldr r0, [r2]\n    bl ov42_02228270\n    add r2, sp, #0\n    strh r0, [r2]\n    lsr r0, r0, #0x10\n    strh r0, [r2, #2]\n    ldrh r0, [r2]\n    mov r1, #8\n    strh r0, [r2, #8]\n    ldrh r0, [r2, #2]\n    strh r0, [r2, #0xa]\n    ldrsh r3, [r2, r1]\n    ldr r0, [r5, #0x14]\n    asr r1, r3, #3\n    lsr r1, r1, #0x1c\n    add r1, r3, r1\n    mov r3, #0xa\n    ldrsh r3, [r2, r3]\n    lsl r1, r1, #0xc\n    lsr r1, r1, #0x10\n    asr r2, r3, #3\n    lsr r2, r2, #0x1c\n    add r2, r3, r2\n    lsl r2, r2, #0xc\n    lsr r2, r2, #0x10\n    bl ov49_022589B8\n    cmp r0, r4\n    bne _02259318\n    add sp, #0x10\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    mov r0, #0\n    add sp, #0x10\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov49_02259320(void) {
    /* Original at 0x02259320 */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "str r1, [r0]\n    str r1, [r0, #4]\n    sub r1, r2, r1\n    str r1, [r0, #8]\n    str r3, [r0, #0xc]\n    bx lr"
    );
    #endif
}

void ov49_0225932C(void) {
    /* Original at 0x0225932C */
    /* Requires manual decompilation - 60 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    ldr r6, [r5, #8]\n    beq _02259348\n    lsl r0, r4, #0xc\n    bl _ffltu\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    b _02259356\n    lsl r0, r4, #0xc\n    bl _ffltu\n    mov r1, #0x3f\n    lsl r1, r1, #0x18\n    bl _fsub\n    bl _ffix\n    add r2, r0, #0\n    asr r1, r6, #0x1f\n    add r0, r6, #0\n    asr r3, r2, #0x1f\n    bl _ll_mul\n    mov r2, #2\n    mov r3, #0\n    lsl r2, r2, #0xa\n    add r2, r0, r2\n    adc r1, r3\n    lsl r0, r1, #0x14\n    lsr r6, r2, #0xc\n    orr r6, r0\n    ldr r0, [r5, #0xc]\n    cmp r0, #0\n    beq _0225938E\n    lsl r0, r0, #0xc\n    bl _ffltu\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    b _0225939C\n    lsl r0, r0, #0xc\n    bl _ffltu\n    mov r1, #0x3f\n    lsl r1, r1, #0x18\n    bl _fsub\n    bl _ffix\n    add r1, r0, #0\n    add r0, r6, #0\n    bl FX_Div\n    ldr r1, [r5, #4]\n    add r0, r0, r1\n    str r0, [r5]\n    ldr r0, [r5, #0xc]\n    cmp r4, r0\n    blo _022593B8\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    mov r0, #0\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov49_022593BC(void) {
    /* Original at 0x022593BC */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0]\n    bx lr"
    );
    #endif
}

void ov49_022593C0(void) {
    /* Original at 0x022593C0 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldrh r0, [r5, #0xc]\n    mov r6, #0\n    cmp r0, #0\n    ble _022593EE\n    add r4, r6, #0\n    ldr r0, [r5, #8]\n    add r0, r0, r4\n    bl ov49_022593FC\n    cmp r0, #0\n    beq _022593E4\n    mov r0, #0x28\n    ldr r1, [r5, #8]\n    mul r0, r6\n    add r0, r1, r0\n    pop {r4, r5, r6, pc}\n    ldrh r0, [r5, #0xc]\n    add r6, r6, #1\n    add r4, #0x28\n    cmp r6, r0\n    blt _022593CE\n    bl GF_AssertFail\n    mov r0, #0x28\n    ldr r1, [r5, #8]\n    mul r0, r6\n    add r0, r1, r0\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov49_022593FC(void) {
    /* Original at 0x022593FC */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0]\n    cmp r0, #0\n    bne _02259406\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void ov49_0225940C(void) {
    /* Original at 0x0225940C */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void ov49_02259410(void) {
    /* Original at 0x02259410 */
    /* Requires manual decompilation - 88 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r0, #0\n    ldr r0, [r7]\n    add r5, r1, #0\n    mov r1, #6\n    bl ov42_02228188\n    add r4, r0, #0\n    ldr r0, [r7]\n    mov r1, #4\n    bl ov42_02228188\n    add r6, r0, #0\n    ldr r0, [r7]\n    mov r1, #5\n    bl ov42_02228188\n    cmp r0, #0\n    bne _022594D2\n    ldr r0, _022594D4 ; =gSystem\n    mov r1, #2\n    ldr r0, [r0, #0x44]\n    add r2, r0, #0\n    tst r2, r1\n    beq _02259444\n    mov r1, #3\n    mov r2, #0x40\n    tst r2, r0\n    beq _02259468\n    cmp r4, #0\n    bne _0225945A\n    add r0, r5, #0\n    add r2, r4, #0\n    add r3, r6, #0\n    bl ov49_0225927C\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r5, #0\n    mov r1, #1\n    mov r2, #0\n    add r3, r6, #0\n    bl ov49_0225927C\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r2, #0x80\n    tst r2, r0\n    beq _0225948C\n    cmp r4, #1\n    bne _0225947E\n    add r0, r5, #0\n    add r2, r4, #0\n    add r3, r6, #0\n    bl ov49_0225927C\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r1, #1\n    add r0, r5, #0\n    add r2, r1, #0\n    add r3, r6, #0\n    bl ov49_0225927C\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r2, #0x20\n    tst r2, r0\n    beq _022594B0\n    cmp r4, #2\n    bne _022594A2\n    add r0, r5, #0\n    add r2, r4, #0\n    add r3, r6, #0\n    bl ov49_0225927C\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r5, #0\n    mov r1, #1\n    mov r2, #2\n    add r3, r6, #0\n    bl ov49_0225927C\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r2, #0x10\n    tst r0, r2\n    beq _022594D2\n    cmp r4, #3\n    bne _022594C6\n    add r0, r5, #0\n    add r2, r4, #0\n    add r3, r6, #0\n    bl ov49_0225927C\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r5, #0\n    mov r1, #1\n    mov r2, #3\n    add r3, r6, #0\n    bl ov49_0225927C\n    pop {r3, r4, r5, r6, r7, pc}\n    _022594D4: .word gSystem"
    );
    #endif
}

void ov49_022594D8(void) {
    /* Original at 0x022594D8 */
    /* Requires manual decompilation - 105 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r4, r0, #0\n    ldrh r0, [r4, #8]\n    add r5, r1, #0\n    cmp r0, #4\n    bhi _022595C0\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _022594F0: ; jump table\n    ldr r0, _022595C4 ; =ov49_02269658\n    mov r1, #4\n    bl ov49_02259294\n    strh r0, [r4, #0xc]\n    ldrh r0, [r4, #8]\n    add r0, r0, #1\n    strh r0, [r4, #8]\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0xc\n    ldrsh r1, [r4, r0]\n    sub r1, r1, #1\n    strh r1, [r4, #0xc]\n    ldrsh r0, [r4, r0]\n    cmp r0, #0\n    bne _022595C0\n    ldrh r0, [r4, #8]\n    add r0, r0, #1\n    strh r0, [r4, #8]\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [r4]\n    mov r1, #4\n    bl ov42_02228188\n    add r6, r0, #0\n    ldr r0, [r4]\n    mov r1, #6\n    bl ov42_02228188\n    add r7, r0, #0\n    ldr r0, _022595C8 ; =ov49_0226965C\n    mov r1, #4\n    bl ov49_02259294\n    strh r0, [r4, #0xe]\n    mov r2, #0xe\n    ldrsh r2, [r4, r2]\n    add r0, r5, #0\n    add r1, r4, #0\n    add r3, r6, #4\n    bl ov49_022592A8\n    cmp r0, #1\n    bne _0225957A\n    mov r0, #0xe\n    ldrsh r3, [r4, r0]\n    cmp r7, r3\n    bne _0225956A\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #2\n    bl ov49_02258E7C\n    mov r0, #4\n    strh r0, [r4, #8]\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #1\n    bl ov49_02258E7C\n    mov r0, #3\n    strh r0, [r4, #8]\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r3, #0xe\n    ldrsh r3, [r4, r3]\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #1\n    bl ov49_02258E7C\n    mov r0, #4\n    strh r0, [r4, #8]\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [r4]\n    mov r1, #5\n    bl ov42_02228188\n    cmp r0, #0\n    bne _022595C0\n    mov r3, #0xe\n    ldrsh r3, [r4, r3]\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #2\n    bl ov49_02258E7C\n    ldrh r0, [r4, #8]\n    add r0, r0, #1\n    strh r0, [r4, #8]\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [r4]\n    mov r1, #5\n    bl ov42_02228188\n    cmp r0, #0\n    bne _022595C0\n    mov r0, #0\n    strh r0, [r4, #8]\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _022595C4: .word ov49_02269658\n    _022595C8: .word ov49_0226965C"
    );
    #endif
}

void ov49_022595CC(void) {
    /* Original at 0x022595CC */
    /* Requires manual decompilation - 75 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    ldrh r0, [r4, #8]\n    cmp r0, #3\n    bhi _02259672\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _022595E4: ; jump table\n    ldr r0, [r4, #4]\n    mov r1, #0\n    bl ov45_0223089C\n    ldr r0, [r4, #4]\n    mov r1, #0\n    bl ov45_0223093C\n    add r0, r4, #0\n    mov r2, #0x7d\n    add r0, #0xc\n    mov r1, #0\n    lsl r2, r2, #0xe\n    mov r3, #0x18\n    bl ov49_02259320\n    mov r0, #0x20\n    str r0, [r4, #0x1c]\n    ldrh r0, [r4, #8]\n    add r0, r0, #1\n    strh r0, [r4, #8]\n    ldr r0, [r4, #0x1c]\n    sub r0, r0, #1\n    str r0, [r4, #0x1c]\n    bne _02259672\n    ldrh r0, [r4, #8]\n    add r0, r0, #1\n    strh r0, [r4, #8]\n    mov r0, #0\n    str r0, [r4, #0x1c]\n    ldr r0, _02259678 ; =0x0000064E\n    bl PlaySE\n    add sp, #0xc\n    pop {r4, r5, pc}\n    add r0, r4, #0\n    ldr r1, [r4, #0x1c]\n    add r0, #0xc\n    bl ov49_0225932C\n    add r5, r0, #0\n    ldr r0, [r4, #0x1c]\n    add r1, sp, #0\n    add r0, r0, #1\n    str r0, [r4, #0x1c]\n    ldr r0, [r4, #4]\n    bl ov45_02230908\n    add r0, r4, #0\n    add r0, #0xc\n    bl ov49_022593BC\n    str r0, [sp, #4]\n    ldr r0, [r4, #4]\n    add r1, sp, #0\n    bl ov45_022308E4\n    cmp r5, #1\n    bne _02259672\n    ldrh r0, [r4, #8]\n    add r0, r0, #1\n    strh r0, [r4, #8]\n    ldr r0, [r4, #4]\n    bl ov45_02230968\n    mov r0, #1\n    strb r0, [r4, #0xa]\n    add sp, #0xc\n    pop {r4, r5, pc}\n    nop\n    _02259678: .word 0x0000064E"
    );
    #endif
}

void ov49_0225967C(void) {
    /* Original at 0x0225967C */
    /* Requires manual decompilation - 78 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    ldrh r0, [r4, #8]\n    cmp r0, #3\n    bhi _0225972A\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02259694: ; jump table\n    ldr r0, [r4, #4]\n    mov r1, #0\n    bl ov45_0223089C\n    ldr r0, [r4, #4]\n    mov r1, #0\n    bl ov45_0223093C\n    add r0, r4, #0\n    mov r1, #0x7d\n    add r0, #0xc\n    lsl r1, r1, #0xe\n    mov r2, #0\n    mov r3, #0x18\n    bl ov49_02259320\n    mov r0, #0\n    str r0, [r4, #0x1c]\n    ldrh r0, [r4, #8]\n    add r0, r0, #1\n    strh r0, [r4, #8]\n    ldr r0, _02259730 ; =0x0000064E\n    bl PlaySE\n    add r0, r4, #0\n    ldr r1, [r4, #0x1c]\n    add r0, #0xc\n    bl ov49_0225932C\n    add r5, r0, #0\n    ldr r0, [r4, #0x1c]\n    add r1, sp, #0\n    add r0, r0, #1\n    str r0, [r4, #0x1c]\n    ldr r0, [r4, #4]\n    bl ov45_02230908\n    add r0, r4, #0\n    add r0, #0xc\n    bl ov49_022593BC\n    str r0, [sp, #4]\n    ldr r0, [r4, #4]\n    add r1, sp, #0\n    bl ov45_022308E4\n    cmp r5, #1\n    bne _0225972A\n    mov r0, #0x20\n    str r0, [r4, #0x1c]\n    ldrh r0, [r4, #8]\n    add sp, #0xc\n    add r0, r0, #1\n    strh r0, [r4, #8]\n    pop {r4, r5, pc}\n    ldr r0, [r4, #0x1c]\n    sub r0, r0, #1\n    str r0, [r4, #0x1c]\n    bne _0225972A\n    ldrh r0, [r4, #8]\n    add r0, r0, #1\n    strh r0, [r4, #8]\n    ldr r0, [r4, #4]\n    bl ov45_02230968\n    ldr r0, [r4, #4]\n    mov r1, #1\n    bl ov45_0223089C\n    mov r0, #1\n    strb r0, [r4, #0xa]\n    add sp, #0xc\n    pop {r4, r5, pc}\n    nop\n    _02259730: .word 0x0000064E"
    );
    #endif
}

void ov49_02259734(void) {
    ov49_02259764();
}

void ov49_02259740(void) {
    ov49_02259764();
}

void ov49_0225974C(void) {
    ov49_02259764();
}

void ov49_02259758(void) {
    ov49_02259764();
}

void ov49_02259764(void) {
    /* Original at 0x02259764 */
    /* Requires manual decompilation - 188 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x28\n    add r4, r0, #0\n    ldrh r0, [r4, #8]\n    add r5, r2, #0\n    cmp r0, #3\n    bls _02259774\n    b _02259916\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02259780: ; jump table\n    ldr r0, [r4, #4]\n    mov r1, #0\n    bl ov45_0223089C\n    ldr r0, [r4, #4]\n    mov r1, #0\n    bl ov45_0223093C\n    ldr r0, [r4, #4]\n    mov r1, #2\n    bl ov45_02230974\n    add r0, r4, #0\n    mov r2, #1\n    add r0, #0xc\n    mov r1, #0\n    lsl r2, r2, #0x10\n    mov r3, #4\n    bl ov49_02259320\n    ldr r0, [r4, #4]\n    add r1, sp, #0x1c\n    bl ov45_02230908\n    cmp r5, #3\n    bhi _022597DA\n    add r0, r5, r5\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _022597C8: ; jump table\n    ldr r0, [sp, #0x24]\n    str r0, [r4, #0x20]\n    b _022597DA\n    ldr r0, [sp, #0x1c]\n    str r0, [r4, #0x20]\n    mov r0, #0\n    str r0, [r4, #0x1c]\n    ldrh r0, [r4, #8]\n    add r0, r0, #1\n    strh r0, [r4, #8]\n    add r0, r4, #0\n    ldr r1, [r4, #0x1c]\n    add r0, #0xc\n    bl ov49_0225932C\n    add r6, r0, #0\n    ldr r0, [r4, #0x1c]\n    add r1, sp, #0x10\n    add r0, r0, #1\n    str r0, [r4, #0x1c]\n    ldr r0, [r4, #4]\n    bl ov45_02230908\n    cmp r5, #3\n    bhi _02259854\n    add r0, r5, r5\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0225980E: ; jump table\n    add r0, r4, #0\n    add r0, #0xc\n    bl ov49_022593BC\n    ldr r1, [r4, #0x20]\n    sub r0, r1, r0\n    str r0, [sp, #0x18]\n    b _02259854\n    add r0, r4, #0\n    add r0, #0xc\n    bl ov49_022593BC\n    ldr r1, [r4, #0x20]\n    add r0, r1, r0\n    str r0, [sp, #0x18]\n    b _02259854\n    add r0, r4, #0\n    add r0, #0xc\n    bl ov49_022593BC\n    ldr r1, [r4, #0x20]\n    sub r0, r1, r0\n    str r0, [sp, #0x10]\n    b _02259854\n    add r0, r4, #0\n    add r0, #0xc\n    bl ov49_022593BC\n    ldr r1, [r4, #0x20]\n    add r0, r1, r0\n    str r0, [sp, #0x10]\n    ldr r0, [r4, #4]\n    add r1, sp, #0x10\n    bl ov45_022308E4\n    cmp r6, #1\n    bne _02259916\n    add r0, r5, #0\n    bl ov42_022282A4\n    mov r1, #4\n    str r1, [r4, #0x1c]\n    cmp r0, #3\n    bhi _02259894\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0225987A: ; jump table\n    ldr r0, [r4, #0x1c]\n    add r0, r0, #2\n    str r0, [r4, #0x1c]\n    ldr r0, [r4, #0x1c]\n    add r0, r0, #2\n    str r0, [r4, #0x1c]\n    ldr r0, [r4, #0x1c]\n    add r0, r0, #2\n    str r0, [r4, #0x1c]\n    ldrh r0, [r4, #8]\n    add sp, #0x28\n    add r0, r0, #1\n    strh r0, [r4, #8]\n    pop {r4, r5, r6, pc}\n    ldr r0, [r4, #0x1c]\n    sub r0, r0, #1\n    str r0, [r4, #0x1c]\n    bne _02259916\n    ldrh r0, [r4, #8]\n    add r0, r0, #1\n    strh r0, [r4, #8]\n    ldr r0, [r4]\n    bl ov42_022282DC\n    add r1, sp, #0\n    strh r0, [r1, #4]\n    lsr r0, r0, #0x10\n    strh r0, [r1, #6]\n    ldrh r0, [r1, #4]\n    mov r2, sp\n    sub r2, r2, #4\n    strh r0, [r1, #0xc]\n    ldrh r0, [r1, #6]\n    strh r0, [r1, #0xe]\n    ldrh r0, [r1, #0xc]\n    strh r0, [r2]\n    ldrh r0, [r1, #0xe]\n    add r1, r5, #0\n    strh r0, [r2, #2]\n    ldr r0, [r2]\n    bl ov42_02228270\n    add r1, sp, #0\n    strh r0, [r1]\n    lsr r0, r0, #0x10\n    strh r0, [r1, #2]\n    ldrh r0, [r1]\n    strh r0, [r1, #8]\n    ldrh r0, [r1, #2]\n    strh r0, [r1, #0xa]\n    add r0, r5, #0\n    bl ov42_022282A4\n    add r1, sp, #0\n    mov r5, sp\n    add r2, r0, #0\n    ldrh r3, [r1, #8]\n    sub r5, r5, #4\n    add r0, r4, #0\n    strh r3, [r5]\n    ldrh r1, [r1, #0xa]\n    strh r1, [r5, #2]\n    ldr r1, [r5]\n    bl ov49_02258E04\n    ldr r0, [r4, #4]\n    bl ov45_02230968\n    ldr r0, [r4, #4]\n    mov r1, #1\n    bl ov45_0223089C\n    mov r0, #1\n    strb r0, [r4, #0xa]\n    add sp, #0x28\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov49_0225991C(void) {
    /* Original at 0x0225991C */
    /* Requires manual decompilation - 99 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    ldrh r0, [r5, #8]\n    cmp r0, #0\n    beq _02259930\n    cmp r0, #1\n    beq _02259950\n    add sp, #0xc\n    pop {r3, r4, r5, r6, pc}\n    ldr r0, [r5, #4]\n    mov r1, #0\n    bl ov45_0223089C\n    add r1, r5, #0\n    ldr r0, [r5, #4]\n    add r1, #0x10\n    bl ov45_02230908\n    mov r0, #0x1c\n    str r0, [r5, #0xc]\n    ldrh r0, [r5, #8]\n    add sp, #0xc\n    add r0, r0, #1\n    strh r0, [r5, #8]\n    pop {r3, r4, r5, r6, pc}\n    ldr r0, [r5, #0xc]\n    sub r0, r0, #1\n    str r0, [r5, #0xc]\n    bpl _0225995C\n    mov r0, #0x1c\n    str r0, [r5, #0xc]\n    add r3, r5, #0\n    add r3, #0x10\n    ldmia r3!, {r0, r1}\n    add r2, sp, #0\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    str r0, [r2]\n    ldr r0, [r5, #0xc]\n    sub r0, #0x10\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    cmp r0, #0\n    ble _022599DE\n    mov r1, #6\n    bl _s32_div_f\n    lsl r0, r1, #0x10\n    asr r1, r0, #0x10\n    mov r0, #0xb4\n    mul r0, r1\n    mov r1, #6\n    bl _s32_div_f\n    add r4, r0, #0\n    lsl r0, r4, #0x10\n    lsr r0, r0, #0x10\n    bl GF_SinDegNoWrap\n    ldr r2, _022599F4 ; =0xFFFFE000\n    asr r1, r0, #0x1f\n    asr r3, r2, #0xd\n    bl _ll_mul\n    mov r3, #2\n    mov r6, #0\n    lsl r3, r3, #0xa\n    add r3, r0, r3\n    adc r1, r6\n    lsl r0, r1, #0x14\n    lsr r1, r3, #0xc\n    ldr r2, [sp, #8]\n    orr r1, r0\n    add r0, r2, r1\n    str r0, [sp, #8]\n    lsl r0, r4, #0x10\n    lsr r0, r0, #0x10\n    bl GF_SinDegNoWrap\n    mov r2, #0xa\n    asr r1, r0, #0x1f\n    lsl r2, r2, #0xc\n    add r3, r6, #0\n    bl _ll_mul\n    mov r3, #2\n    add r4, r6, #0\n    lsl r3, r3, #0xa\n    add r3, r0, r3\n    adc r1, r4\n    lsl r0, r1, #0x14\n    lsr r1, r3, #0xc\n    ldr r2, [sp, #4]\n    orr r1, r0\n    add r0, r2, r1\n    str r0, [sp, #4]\n    ldr r0, [r5, #4]\n    add r1, sp, #0\n    bl ov45_022308E4\n    ldr r0, [r5, #4]\n    mov r1, #1\n    bl ov45_02230920\n    add sp, #0xc\n    pop {r3, r4, r5, r6, pc}\n    nop\n    _022599F4: .word 0xFFFFE000"
    );
    #endif
}

void ov49_022599F8(void) {
    /* Original at 0x022599F8 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    ldr r0, [r4, #4]\n    mov r1, #1\n    bl ov45_0223089C\n    ldr r0, [r4, #4]\n    add r1, sp, #0\n    bl ov45_02230908\n    mov r0, #0\n    str r0, [sp, #4]\n    ldr r0, [r4, #4]\n    add r1, sp, #0\n    bl ov45_022308E4\n    add sp, #0xc\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov49_02259A20(void) {
    /* Original at 0x02259A20 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "strb r2, [r0, #1]\n    strb r2, [r0, #2]\n    mov r3, #0\n    strb r3, [r0, #3]\n    strh r3, [r0, #4]\n    strh r3, [r0, #6]\n    strb r3, [r0]\n    add r0, r1, #0\n    ldr r3, _02259A38 ; =ov45_02230700\n    add r1, r2, #0\n    bx r3\n    nop\n    _02259A38: .word ov45_02230700"
    );
    #endif
}

void ov49_02259A3C(void) {
    /* Original at 0x02259A3C */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "mov r2, #1\n    strb r2, [r0]\n    ldrb r2, [r0, #1]\n    strb r2, [r0, #2]\n    ldrb r2, [r0, #1]\n    sub r1, r1, r2\n    strb r1, [r0, #3]\n    mov r1, #0\n    strh r1, [r0, #4]\n    mov r1, #0x3c\n    strh r1, [r0, #6]\n    bx lr"
    );
    #endif
}

void ov49_02259A54(void) {
    /* Original at 0x02259A54 */
    /* Requires manual decompilation - 38 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldrb r0, [r5]\n    add r4, r1, #0\n    cmp r0, #0\n    bne _02259A64\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #4\n    ldrsh r1, [r5, r0]\n    add r1, r1, #1\n    strh r1, [r5, #4]\n    ldrsh r1, [r5, r0]\n    mov r0, #6\n    ldrsh r0, [r5, r0]\n    cmp r1, r0\n    blt _02259A7A\n    mov r0, #0\n    strb r0, [r5]\n    mov r0, #4\n    ldrsh r1, [r5, r0]\n    mov r0, #3\n    ldrsb r0, [r5, r0]\n    mul r0, r1\n    mov r1, #6\n    ldrsh r1, [r5, r1]\n    bl _s32_div_f\n    strb r0, [r5, #1]\n    mov r0, #2\n    ldrb r1, [r5, #1]\n    ldrsb r0, [r5, r0]\n    add r0, r1, r0\n    strb r0, [r5, #1]\n    ldrb r1, [r5, #1]\n    add r0, r4, #0\n    bl ov45_02230700\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov49_02259AA4(void) {
    /* Original at 0x02259AA4 */
    /* Requires manual decompilation - 209 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #8\n    add r4, r0, #0\n    bl OverlayManager_GetArgs\n    mov r2, #0x3a\n    add r5, r0, #0\n    mov r0, #3\n    mov r1, #0x77\n    lsl r2, r2, #0xc\n    bl Heap_Create\n    mov r2, #0x3d\n    mov r0, #3\n    mov r1, #0x78\n    lsl r2, r2, #0xc\n    bl Heap_Create\n    mov r1, #0xfe\n    add r0, r4, #0\n    lsl r1, r1, #2\n    mov r2, #0x77\n    bl OverlayManager_CreateAndGetData\n    mov r2, #0xfe\n    mov r1, #0\n    lsl r2, r2, #2\n    add r4, r0, #0\n    bl memset\n    add r0, r5, #0\n    add r0, #0xc\n    str r0, [r4, #0x38]\n    ldr r0, [r5, #0x1c]\n    str r0, [r4, #0x34]\n    bl ov45_0222A53C\n    strb r0, [r4, #2]\n    ldr r0, [r4, #0x34]\n    bl ov45_0222A53C\n    mov r1, #0\n    mvn r1, r1\n    cmp r0, r1\n    bne _02259B02\n    bl GF_AssertFail\n    mov r0, #1\n    bl TextFlags_SetCanABSpeedUpPrint\n    mov r0, #0\n    bl TextFlags_SetAutoScrollParam\n    mov r0, #0\n    bl TextFlags_SetCanTouchSpeedUpPrint\n    ldr r0, [r5]\n    bl Save_PlayerData_GetProfile\n    mov r1, #0xfd\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    add r0, r4, #0\n    ldr r1, [r5]\n    add r0, #0x3c\n    mov r2, #0x77\n    bl ov49_0225A5EC\n    mov r0, #0x77\n    bl ov49_02258958\n    mov r1, #0xfa\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    add r1, #0xc\n    ldr r0, [r4, r1]\n    bl PlayerProfile_GetTrainerGender\n    add r1, r0, #0\n    mov r0, #0x78\n    mov r2, #0xfa\n    str r0, [sp]\n    lsl r2, r2, #2\n    ldr r2, [r4, r2]\n    mov r0, #0x18\n    mov r3, #0x77\n    bl ov49_02258AB4\n    mov r2, #0x3e\n    lsl r2, r2, #4\n    str r0, [r4, r2]\n    mov r0, #0x78\n    str r0, [sp]\n    add r2, #8\n    ldr r0, [r5, #4]\n    ldr r1, [r5, #8]\n    ldr r2, [r4, r2]\n    mov r3, #0x77\n    bl ov49_0225DF18\n    mov r1, #0xf9\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    mov r0, #0x77\n    bl ov49_0225CB78\n    mov r1, #0xfb\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    sub r1, #0xf4\n    add r0, r4, r1\n    add r1, r4, #0\n    ldr r2, [r5]\n    add r1, #0x3c\n    mov r3, #0x77\n    bl ov49_0225AAC8\n    mov r0, #0xc6\n    lsl r0, r0, #2\n    add r1, r4, #0\n    ldr r2, [r5]\n    add r0, r4, r0\n    add r1, #0x3c\n    mov r3, #0x77\n    bl ov49_0225ACA8\n    mov r0, #0xce\n    lsl r0, r0, #2\n    add r1, r4, #0\n    add r0, r4, r0\n    add r1, #0x3c\n    mov r2, #0x77\n    bl ov49_0225AD20\n    mov r0, #0x39\n    lsl r0, r0, #4\n    add r1, r4, #0\n    add r0, r4, r0\n    add r1, #0x3c\n    mov r2, #0x77\n    bl ov49_0225B214\n    mov r0, #0xf1\n    lsl r0, r0, #2\n    add r1, r4, #0\n    add r0, r4, r0\n    add r1, #0x3c\n    mov r2, #0x77\n    bl ov49_0225B0D4\n    mov r0, #0xb7\n    lsl r0, r0, #2\n    add r0, r4, r0\n    mov r1, #0x77\n    bl ov49_0225B308\n    mov r1, #0x3a\n    lsl r1, r1, #4\n    add r0, r4, r1\n    sub r1, #0xc4\n    add r1, r4, r1\n    mov r2, #0x77\n    bl ov49_0225B198\n    mov r0, #0x77\n    str r0, [sp]\n    mov r3, #0xfd\n    mov r0, #0x61\n    lsl r3, r3, #2\n    lsl r0, r0, #2\n    add r2, r4, #0\n    ldr r1, [r4, #0x38]\n    ldr r3, [r4, r3]\n    add r0, r4, r0\n    add r2, #0x3c\n    bl ov49_0225B450\n    ldr r0, [r4, #0x34]\n    bl ov45_0222A5C0\n    add r5, r0, #0\n    bl ov45_0222AADC\n    cmp r0, #1\n    bne _02259C2E\n    mov r0, #0x61\n    mov r2, #0xb7\n    lsl r0, r0, #2\n    add r1, r4, #0\n    lsl r2, r2, #2\n    add r0, r4, r0\n    add r1, #0x3c\n    add r2, r4, r2\n    mov r3, #0x77\n    str r5, [sp]\n    bl ov49_0225B9AC\n    add r0, r4, #0\n    mov r1, #0x77\n    bl ov49_0225EEAC\n    mov r1, #0x3f\n    lsl r1, r1, #4\n    str r0, [r4, r1]\n    add r0, r4, #0\n    bl ov49_0225F1A8\n    add r0, r4, #0\n    bl ov49_0225F1F0\n    mov r0, #0x77\n    str r0, [sp]\n    mov r0, #0x78\n    mov r3, #0xfa\n    str r0, [sp, #4]\n    lsl r3, r3, #2\n    add r2, r3, #4\n    ldr r1, [r4, r3]\n    sub r3, #8\n    ldr r0, [r4, #0x34]\n    ldr r2, [r4, r2]\n    ldr r3, [r4, r3]\n    bl ov49_022652E8\n    mov r1, #0xf5\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    mov r0, #0x77\n    add r1, r4, #0\n    bl ov49_02268764\n    mov r1, #0xf7\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    ldr r0, _02259C8C ; =ov49_0225A5C8\n    add r1, r4, #0\n    bl Main_SetVBlankIntrCB\n    bl HBlankInterruptDisable\n    mov r0, #1\n    add sp, #8\n    pop {r3, r4, r5, pc}\n    nop\n    _02259C8C: .word ov49_0225A5C8"
    );
    #endif
}

void ov49_02259C90(void) {
    /* Original at 0x02259C90 */
    /* Requires manual decompilation - 267 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0xc\n    add r6, r0, #0\n    add r5, r1, #0\n    bl OverlayManager_GetData\n    add r4, r0, #0\n    add r0, r6, #0\n    bl OverlayManager_GetArgs\n    ldr r0, [r5]\n    cmp r0, #8\n    bhi _02259D58\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02259CB6: ; jump table\n    mov r0, #6\n    str r0, [sp]\n    mov r1, #1\n    str r1, [sp, #4]\n    mov r0, #0x77\n    str r0, [sp, #8]\n    mov r0, #0\n    add r2, r1, #0\n    add r3, r0, #0\n    bl BeginNormalPaletteFade\n    mov r0, #1\n    strb r0, [r4, #3]\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    b _02259EE2\n    bl IsPaletteFadeFinished\n    cmp r0, #1\n    bne _02259D58\n    mov r0, #0\n    strb r0, [r4, #3]\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    b _02259EE2\n    ldrb r0, [r4, #4]\n    lsl r0, r0, #0x1c\n    lsr r0, r0, #0x1c\n    cmp r0, #1\n    bne _02259D26\n    bl ov45_0222D844\n    cmp r0, #1\n    beq _02259D1A\n    ldr r0, [r4, #0x34]\n    bl ov45_0222A1FC\n    cmp r0, #0\n    beq _02259D26\n    ldrb r1, [r4, #4]\n    mov r0, #0xf0\n    bic r1, r0\n    mov r0, #0x10\n    orr r0, r1\n    strb r0, [r4, #4]\n    ldrb r0, [r4, #7]\n    cmp r0, #0\n    bne _02259D42\n    ldr r0, [r4, #0x34]\n    bl ov45_0222A33C\n    cmp r0, #1\n    bne _02259D42\n    mov r0, #1\n    strb r0, [r4, #6]\n    add r0, r4, #0\n    mov r1, #8\n    bl ov49_0225A038\n    ldrb r0, [r4]\n    cmp r0, #1\n    beq _02259D5A\n    ldrb r0, [r4, #4]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x1c\n    cmp r0, #1\n    beq _02259D5A\n    ldrb r0, [r4, #6]\n    cmp r0, #1\n    beq _02259D5A\n    b _02259EE2\n    ldrb r0, [r4, #4]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x1c\n    beq _02259D68\n    mov r0, #3\n    str r0, [r5]\n    b _02259EE2\n    ldrb r0, [r4, #6]\n    cmp r0, #1\n    bne _02259D74\n    mov r0, #5\n    str r0, [r5]\n    b _02259EE2\n    mov r0, #7\n    str r0, [r5]\n    b _02259EE2\n    mov r0, #0xbe\n    lsl r0, r0, #2\n    add r0, r4, r0\n    bl ov49_0225AC74\n    mov r0, #0xce\n    lsl r0, r0, #2\n    mov r1, #0\n    add r0, r4, r0\n    add r2, r1, #0\n    bl ov49_0225B014\n    mov r0, #0xf1\n    lsl r0, r0, #2\n    add r0, r4, r0\n    bl ov49_0225B124\n    mov r0, #0x3a\n    lsl r0, r0, #4\n    add r0, r4, r0\n    bl ov49_0225B200\n    bl sub_020393C8\n    cmp r0, #0\n    beq _02259DBE\n    mov r1, #0x39\n    lsl r1, r1, #4\n    add r0, r4, r1\n    sub r1, #0xb4\n    add r1, r4, r1\n    bl ov49_0225B284\n    b _02259DF2\n    bl sub_020397FC\n    cmp r0, #0\n    beq _02259DDC\n    bl ov45_0222E7CC\n    mov r1, #0x39\n    lsl r1, r1, #4\n    add r2, r0, #0\n    add r0, r4, r1\n    sub r1, #0xb4\n    add r1, r4, r1\n    bl ov49_0225B2C0\n    b _02259DF2\n    ldr r0, [r4, #0x34]\n    bl ov45_0222A1FC\n    mov r1, #0x39\n    lsl r1, r1, #4\n    add r2, r0, #0\n    add r0, r4, r1\n    sub r1, #0xb4\n    add r1, r4, r1\n    bl ov49_0225B2F0\n    mov r0, #4\n    str r0, [r5]\n    b _02259EE2\n    ldr r0, _02259EF4 ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #1\n    tst r0, r1\n    beq _02259EE2\n    mov r0, #7\n    str r0, [r5]\n    b _02259EE2\n    mov r0, #0xbe\n    lsl r0, r0, #2\n    add r0, r4, r0\n    bl ov49_0225AC74\n    mov r0, #0xce\n    lsl r0, r0, #2\n    mov r1, #0\n    add r0, r4, r0\n    add r2, r1, #0\n    bl ov49_0225B014\n    mov r0, #0xf1\n    lsl r0, r0, #2\n    add r0, r4, r0\n    bl ov49_0225B124\n    mov r0, #0x3a\n    lsl r0, r0, #4\n    add r0, r4, r0\n    bl ov49_0225B200\n    mov r0, #0xb7\n    lsl r0, r0, #2\n    add r0, r4, r0\n    mov r1, #1\n    mov r2, #0x46\n    bl ov49_0225B388\n    add r1, r0, #0\n    mov r0, #0xbe\n    lsl r0, r0, #2\n    add r0, r4, r0\n    bl ov49_0225AB44\n    mov r0, #6\n    str r0, [r5]\n    mov r0, #0x3c\n    str r0, [r4, #8]\n    b _02259EE2\n    mov r0, #0xbe\n    lsl r0, r0, #2\n    add r0, r4, r0\n    bl ov49_0225AC5C\n    cmp r0, #0\n    beq _02259EE2\n    ldr r0, [r4, #8]\n    sub r0, r0, #1\n    str r0, [r4, #8]\n    cmp r0, #0\n    bgt _02259EE2\n    mov r0, #7\n    str r0, [r5]\n    b _02259EE2\n    mov r0, #0x61\n    lsl r0, r0, #2\n    add r0, r4, r0\n    bl ov49_0225B898\n    cmp r0, #5\n    bne _02259EA8\n    mov r0, #6\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #0x77\n    str r0, [sp, #8]\n    mov r0, #0\n    add r1, r0, #0\n    add r2, r0, #0\n    add r3, r0, #0\n    bl BeginNormalPaletteFade\n    mov r0, #1\n    strb r0, [r4, #3]\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    b _02259EE2\n    cmp r0, #0\n    bne _02259EE2\n    mov r0, #6\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #0x77\n    str r0, [sp, #8]\n    mov r0, #0\n    add r1, r0, #0\n    add r2, r0, #0\n    add r3, r0, #0\n    bl BeginNormalPaletteFade\n    mov r0, #1\n    strb r0, [r4, #3]\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    b _02259EE2\n    bl IsPaletteFadeFinished\n    cmp r0, #1\n    bne _02259EE2\n    mov r0, #0\n    strb r0, [r4, #3]\n    add sp, #0xc\n    mov r0, #1\n    pop {r3, r4, r5, r6, pc}\n    add r0, r4, #0\n    bl ov49_0225A98C\n    add r0, r4, #0\n    bl ov49_0225AA2C\n    mov r0, #0\n    add sp, #0xc\n    pop {r3, r4, r5, r6, pc}\n    _02259EF4: .word gSystem"
    );
    #endif
}

void ov49_02259EF8(void) {
    /* Original at 0x02259EF8 */
    /* Requires manual decompilation - 94 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    bl OverlayManager_GetData\n    add r4, r0, #0\n    add r0, r5, #0\n    bl OverlayManager_GetArgs\n    ldrb r1, [r4, #1]\n    str r1, [r0, #0x18]\n    mov r0, #0\n    add r1, r0, #0\n    bl Main_SetVBlankIntrCB\n    bl HBlankInterruptDisable\n    mov r0, #0xf7\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl ov49_02268850\n    mov r0, #0xf5\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl ov49_0226535C\n    mov r0, #0x3f\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    bl ov49_0225EEF8\n    mov r0, #0x61\n    mov r1, #0xc6\n    lsl r0, r0, #2\n    lsl r1, r1, #2\n    add r2, r4, #0\n    add r0, r4, r0\n    add r1, r4, r1\n    add r2, #0x3c\n    bl ov49_0225B4E4\n    mov r0, #0xb7\n    lsl r0, r0, #2\n    add r0, r4, r0\n    bl ov49_0225B35C\n    mov r0, #0xbe\n    lsl r0, r0, #2\n    add r0, r4, r0\n    bl ov49_0225AB14\n    mov r0, #0xc6\n    lsl r0, r0, #2\n    add r0, r4, r0\n    bl ov49_0225ACBC\n    mov r0, #0xce\n    lsl r0, r0, #2\n    add r1, r4, #0\n    add r0, r4, r0\n    add r1, #0x3c\n    bl ov49_0225AE4C\n    mov r0, #0x39\n    lsl r0, r0, #4\n    add r0, r4, r0\n    bl ov49_0225B244\n    mov r0, #0x3a\n    lsl r0, r0, #4\n    add r0, r4, r0\n    bl ov49_0225B200\n    mov r0, #0xf1\n    lsl r0, r0, #2\n    add r0, r4, r0\n    bl ov49_0225B0D8\n    mov r0, #0xfb\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl ov49_0225CBDC\n    mov r0, #0xf9\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl ov49_0225E2B4\n    mov r0, #0x3e\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    bl ov49_02258B20\n    mov r0, #0xfa\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl ov49_02258994\n    add r0, r4, #0\n    add r0, #0x3c\n    bl ov49_0225A7D0\n    add r0, r4, #0\n    bl Heap_Free\n    mov r0, #0x77\n    bl Heap_Destroy\n    mov r0, #0x78\n    bl Heap_Destroy\n    mov r0, #0\n    bl sub_0200616C\n    mov r0, #0\n    bl sub_02006300\n    mov r0, #1\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov49_02259FE8(void) {
    /* Original at 0x02259FE8 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0, #0x34]\n    bx lr"
    );
    #endif
}

void ov49_02259FEC(void) {
    /* Original at 0x02259FEC */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0, #0x38]\n    bx lr"
    );
    #endif
}

void ov49_02259FF0(void) {
    /* Original at 0x02259FF0 */
    /* Requires manual decompilation - 4 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0x3e\n    lsl r1, r1, #4\n    ldr r0, [r0, r1]\n    bx lr"
    );
    #endif
}

void ov49_02259FF8(void) {
    /* Original at 0x02259FF8 */
    /* Requires manual decompilation - 4 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0xf9\n    lsl r1, r1, #2\n    ldr r0, [r0, r1]\n    bx lr"
    );
    #endif
}

void ov49_0225A000(void) {
    /* Original at 0x0225A000 */
    /* Requires manual decompilation - 4 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0xfa\n    lsl r1, r1, #2\n    ldr r0, [r0, r1]\n    bx lr"
    );
    #endif
}

void ov49_0225A008(void) {
    /* Original at 0x0225A008 */
    /* Requires manual decompilation - 4 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0xfb\n    lsl r1, r1, #2\n    ldr r0, [r0, r1]\n    bx lr"
    );
    #endif
}

void ov49_0225A010(void) {
    /* Original at 0x0225A010 */
    /* Requires manual decompilation - 4 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0x3f\n    lsl r1, r1, #4\n    ldr r0, [r0, r1]\n    bx lr"
    );
    #endif
}

void ov49_0225A018(void) {
    /* Original at 0x0225A018 */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "ldrb r3, [r0, #4]\n    mov r2, #0xf\n    lsl r1, r1, #0x18\n    bic r3, r2\n    lsr r2, r1, #0x18\n    mov r1, #0xf\n    and r1, r2\n    orr r1, r3\n    strb r1, [r0, #4]\n    bx lr"
    );
    #endif
}

void ov49_0225A02C(void) {
    /* Original at 0x0225A02C */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "ldrb r0, [r0, #2]\n    bx lr"
    );
    #endif
}

void ov49_0225A030(void) {
    /* Original at 0x0225A030 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "ldrb r0, [r0, #3]\n    bx lr"
    );
    #endif
}

void ov49_0225A034(void) {
    *(u8*)r0 = r1;
}

void ov49_0225A038(void) {
    ((u8*)r0)[1] = r1;
}

void ov49_0225A03C(void) {
    ((u8*)r0)[5] = r1;
}

void ov49_0225A040(void) {
    /* Original at 0x0225A040 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "ldrb r0, [r0, #5]\n    bx lr"
    );
    #endif
}

void ov49_0225A044(void) {
    ((u8*)r0)[7] = 1;
}

void ov49_0225A04C(void) {
    GF_AssertFail();
}

void ov49_0225A064(void) {
    /* Original at 0x0225A064 */
    /* Requires manual decompilation - 3 instructions */
    #ifdef MWERKS
    asm(
        "add r0, r0, r1\n    ldrb r0, [r0, #0xc]\n    bx lr"
    );
    #endif
}

void ov49_0225A06C(void) {
    GF_AssertFail();
}

void ov49_0225A084(void) {
    /* Original at 0x0225A084 */
    /* Requires manual decompilation - 4 instructions */
    #ifdef MWERKS
    asm(
        "add r0, r0, r1\n    add r0, #0x20\n    ldrb r0, [r0]\n    bx lr"
    );
    #endif
}

void ov49_0225A08C(void) {
    /* Original at 0x0225A08C */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "mov r2, #0xbe\n    lsl r2, r2, #2\n    ldr r3, _0225A098 ; =ov49_0225AB44\n    add r0, r0, r2\n    bx r3\n    nop\n    _0225A098: .word ov49_0225AB44"
    );
    #endif
}

void ov49_0225A09C(void) {
    /* Original at 0x0225A09C */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "mov r2, #0xbe\n    lsl r2, r2, #2\n    ldr r3, _0225A0A8 ; =ov49_0225ABA4\n    add r0, r0, r2\n    bx r3\n    nop\n    _0225A0A8: .word ov49_0225ABA4"
    );
    #endif
}

void ov49_0225A0AC(void) {
    /* Original at 0x0225A0AC */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0xbe\n    lsl r1, r1, #2\n    ldr r3, _0225A0B8 ; =ov49_0225AC5C\n    add r0, r0, r1\n    bx r3\n    nop\n    _0225A0B8: .word ov49_0225AC5C"
    );
    #endif
}

void ov49_0225A0BC(void) {
    /* Original at 0x0225A0BC */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0xbe\n    lsl r1, r1, #2\n    ldr r3, _0225A0C8 ; =ov49_0225AC08\n    add r0, r0, r1\n    bx r3\n    nop\n    _0225A0C8: .word ov49_0225AC08"
    );
    #endif
}

void ov49_0225A0CC(void) {
    /* Original at 0x0225A0CC */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0xbe\n    lsl r1, r1, #2\n    ldr r3, _0225A0D8 ; =ov49_0225AC24\n    add r0, r0, r1\n    bx r3\n    nop\n    _0225A0D8: .word ov49_0225AC24"
    );
    #endif
}

void ov49_0225A0DC(void) {
    /* Original at 0x0225A0DC */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0xbe\n    lsl r1, r1, #2\n    ldr r3, _0225A0E8 ; =ov49_0225AC4C\n    add r0, r0, r1\n    bx r3\n    nop\n    _0225A0E8: .word ov49_0225AC4C"
    );
    #endif
}

void ov49_0225A0EC(void) {
    /* Original at 0x0225A0EC */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0xbe\n    lsl r1, r1, #2\n    ldr r3, _0225A0F8 ; =ov49_0225AC74\n    add r0, r0, r1\n    bx r3\n    nop\n    _0225A0F8: .word ov49_0225AC74"
    );
    #endif
}

void ov49_0225A0FC(void) {
    /* Original at 0x0225A0FC */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "mov r2, #0xc6\n    lsl r2, r2, #2\n    ldr r3, _0225A108 ; =ov49_0225ACC4\n    add r0, r0, r2\n    bx r3\n    nop\n    _0225A108: .word ov49_0225ACC4"
    );
    #endif
}

void ov49_0225A10C(void) {
    ov49_0225AEA8(0x78, 0xce, 0);
}

void ov49_0225A120(void) {
    ov49_0225AEA8(0x78, 0xce);
}

void ov49_0225A134(void) {
    /* Original at 0x0225A134 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0xce\n    lsl r1, r1, #2\n    ldr r3, _0225A140 ; =ov49_0225AEE0\n    add r0, r0, r1\n    bx r3\n    nop\n    _0225A140: .word ov49_0225AEE0"
    );
    #endif
}

void ov49_0225A144(void) {
    /* Original at 0x0225A144 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "mov r3, #0xce\n    lsl r3, r3, #2\n    add r0, r0, r3\n    ldr r3, _0225A150 ; =ov49_0225AEF8\n    bx r3\n    nop\n    _0225A150: .word ov49_0225AEF8"
    );
    #endif
}

void ov49_0225A154(void) {
    /* Original at 0x0225A154 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0xce\n    lsl r1, r1, #2\n    ldr r3, _0225A160 ; =ov49_0225AF04\n    add r0, r0, r1\n    bx r3\n    nop\n    _0225A160: .word ov49_0225AF04"
    );
    #endif
}

void ov49_0225A164(void) {
    /* Original at 0x0225A164 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "mov r2, #0xce\n    lsl r2, r2, #2\n    ldr r3, _0225A170 ; =ov49_0225AF08\n    add r0, r0, r2\n    bx r3\n    nop\n    _0225A170: .word ov49_0225AF08"
    );
    #endif
}

void ov49_0225A174(void) {
    /* Original at 0x0225A174 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0x14\n    add r5, r0, #0\n    str r3, [sp]\n    mov r0, #0x77\n    str r0, [sp, #4]\n    mov r0, #0x10\n    str r0, [sp, #8]\n    mov r0, #3\n    str r0, [sp, #0xc]\n    mov r0, #0xf\n    str r0, [sp, #0x10]\n    mov r0, #0xce\n    lsl r0, r0, #2\n    add r4, r2, #0\n    add r0, r5, r0\n    add r5, #0x3c\n    add r2, r5, #0\n    add r3, r4, #0\n    bl ov49_0225AF30\n    add sp, #0x14\n    pop {r4, r5, pc}"
    );
    #endif
}

void ov49_0225A1A4(void) {
    /* Original at 0x0225A1A4 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0x14\n    add r5, r0, #0\n    str r3, [sp]\n    mov r0, #0x77\n    str r0, [sp, #4]\n    add r4, r2, #0\n    add r0, sp, #0x10\n    ldrb r2, [r0, #0x10]\n    add r3, r4, #0\n    str r2, [sp, #8]\n    ldrb r2, [r0, #0x14]\n    str r2, [sp, #0xc]\n    ldrb r0, [r0, #0x18]\n    str r0, [sp, #0x10]\n    mov r0, #0xce\n    lsl r0, r0, #2\n    add r0, r5, r0\n    add r5, #0x3c\n    add r2, r5, #0\n    bl ov49_0225AF30\n    add sp, #0x14\n    pop {r4, r5, pc}"
    );
    #endif
}

void ov49_0225A1D4(void) {
    /* Original at 0x0225A1D4 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0xce\n    lsl r1, r1, #2\n    ldr r3, _0225A1E0 ; =ov49_0225AFD8\n    add r0, r0, r1\n    bx r3\n    nop\n    _0225A1E0: .word ov49_0225AFD8"
    );
    #endif
}

void ov49_0225A1E4(void) {
    /* Original at 0x0225A1E4 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "mov r3, #0xce\n    lsl r3, r3, #2\n    add r0, r0, r3\n    ldr r3, _0225A1F0 ; =ov49_0225B014\n    bx r3\n    nop\n    _0225A1F0: .word ov49_0225B014"
    );
    #endif
}

void ov49_0225A1F4(void) {
    /* Original at 0x0225A1F4 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "mov r2, #0xce\n    lsl r2, r2, #2\n    ldr r3, _0225A200 ; =ov49_0225B06C\n    add r0, r0, r2\n    bx r3\n    nop\n    _0225A200: .word ov49_0225B06C"
    );
    #endif
}

void ov49_0225A204(void) {
    /* Original at 0x0225A204 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    str r2, [sp]\n    add r5, r0, #0\n    str r3, [sp, #4]\n    add r0, sp, #8\n    ldrb r0, [r0, #0x10]\n    add r4, r1, #0\n    mov r2, #0x77\n    str r0, [sp, #8]\n    mov r0, #0xf1\n    lsl r0, r0, #2\n    add r0, r5, r0\n    add r5, #0x3c\n    add r1, r5, #0\n    add r3, r4, #0\n    bl ov49_0225B0E0\n    add sp, #0xc\n    pop {r4, r5, pc}"
    );
    #endif
}

void ov49_0225A22C(void) {
    /* Original at 0x0225A22C */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0xf1\n    lsl r1, r1, #2\n    ldr r3, _0225A238 ; =ov49_0225B124\n    add r0, r0, r1\n    bx r3\n    nop\n    _0225A238: .word ov49_0225B124"
    );
    #endif
}

void ov49_0225A23C(void) {
    ov49_0225B148();
}

void ov49_0225A24C(void) {
    ov49_0225B178(0xf1);
}

void ov49_0225A264(void) {
    /* Original at 0x0225A264 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {lr}\n    sub sp, #0x14\n    mov r3, #0\n    add r2, r0, #0\n    str r3, [sp]\n    mov r0, #0x77\n    str r0, [sp, #4]\n    mov r0, #0x19\n    str r0, [sp, #8]\n    mov r0, #0xd\n    mov r1, #0xce\n    str r0, [sp, #0xc]\n    mov r0, #6\n    lsl r1, r1, #2\n    str r0, [sp, #0x10]\n    add r0, r2, r1\n    add r1, #0x6c\n    add r1, r2, r1\n    add r2, #0x3c\n    bl ov49_0225AF30\n    add sp, #0x14\n    pop {pc}"
    );
    #endif
}

void ov49_0225A294(void) {
    /* Original at 0x0225A294 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {lr}\n    sub sp, #0x14\n    add r2, r0, #0\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #0x77\n    str r0, [sp, #4]\n    mov r0, #0x19\n    str r0, [sp, #8]\n    mov r0, #0xd\n    mov r1, #0xce\n    str r0, [sp, #0xc]\n    mov r0, #6\n    lsl r1, r1, #2\n    str r0, [sp, #0x10]\n    add r0, r2, r1\n    add r1, #0x6c\n    add r1, r2, r1\n    add r2, #0x3c\n    mov r3, #0\n    bl ov49_0225AF30\n    add sp, #0x14\n    pop {pc}"
    );
    #endif
}

void ov49_0225A2C4(void) {
    /* Original at 0x0225A2C4 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    mov r1, #0xce\n    lsl r1, r1, #2\n    add r0, r0, r1\n    bl ov49_0225AFD8\n    cmp r0, #0\n    beq _0225A2EA\n    cmp r0, #1\n    beq _0225A2E6\n    mov r1, #1\n    mvn r1, r1\n    cmp r0, r1\n    bne _0225A2EE\n    ldr r0, _0225A2F4 ; =0x000005DC\n    bl PlaySE\n    mov r0, #1\n    pop {r3, pc}\n    mov r0, #0\n    pop {r3, pc}\n    mov r0, #2\n    pop {r3, pc}\n    nop\n    _0225A2F4: .word 0x000005DC"
    );
    #endif
}

void ov49_0225A2F8(void) {
    /* Original at 0x0225A2F8 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0xce\n    lsl r1, r1, #2\n    add r0, r0, r1\n    mov r1, #0\n    ldr r3, _0225A308 ; =ov49_0225B014\n    add r2, r1, #0\n    bx r3\n    nop\n    _0225A308: .word ov49_0225B014"
    );
    #endif
}

void ov49_0225A30C(void) {
    /* Original at 0x0225A30C */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "mov r3, #0xb7\n    lsl r3, r3, #2\n    add r0, r0, r3\n    ldr r3, _0225A318 ; =ov49_0225B388\n    bx r3\n    nop\n    _0225A318: .word ov49_0225B388"
    );
    #endif
}

void ov49_0225A31C(void) {
    ov49_0225B3A8(0xb7);
}

void ov49_0225A334(void) {
    /* Original at 0x0225A334 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    mov r0, #0x77\n    add r4, r1, #0\n    add r7, r2, #0\n    bl PlayerProfile_New\n    add r6, r0, #0\n    ldr r0, [r5, #0x34]\n    bl ov45_0222A53C\n    cmp r4, r0\n    ldr r0, [r5, #0x34]\n    bne _0225A356\n    bl ov45_0222A5C0\n    b _0225A35C\n    add r1, r4, #0\n    bl ov45_0222A578\n    add r1, r6, #0\n    mov r2, #0x77\n    bl ov45_0222A844\n    mov r0, #0xb7\n    lsl r0, r0, #2\n    add r0, r5, r0\n    add r1, r6, #0\n    add r2, r7, #0\n    bl ov49_0225B3C8\n    add r0, r6, #0\n    bl Heap_Free\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov49_0225A37C(void) {
    /* Original at 0x0225A37C */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "mov r3, #0xb7\n    lsl r3, r3, #2\n    add r0, r0, r3\n    ldr r3, _0225A388 ; =ov49_0225B3D8\n    bx r3\n    nop\n    _0225A388: .word ov49_0225B3D8"
    );
    #endif
}

void ov49_0225A38C(void) {
    /* Original at 0x0225A38C */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "mov r3, #0xb7\n    lsl r3, r3, #2\n    add r0, r0, r3\n    ldr r3, _0225A398 ; =ov49_0225B3E8\n    bx r3\n    nop\n    _0225A398: .word ov49_0225B3E8"
    );
    #endif
}

void ov49_0225A39C(void) {
    /* Original at 0x0225A39C */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "mov r3, #0xb7\n    lsl r3, r3, #2\n    add r0, r0, r3\n    ldr r3, _0225A3A8 ; =ov49_0225B3F8\n    bx r3\n    nop\n    _0225A3A8: .word ov49_0225B3F8"
    );
    #endif
}

void ov49_0225A3AC(void) {
    /* Original at 0x0225A3AC */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "mov r3, #0xb7\n    lsl r3, r3, #2\n    ldr r0, [r0, r3]\n    ldr r3, _0225A3B8 ; =BufferJPGreeting\n    bx r3\n    nop\n    _0225A3B8: .word BufferJPGreeting"
    );
    #endif
}

void ov49_0225A3BC(void) {
    /* Original at 0x0225A3BC */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "mov r3, #0xb7\n    lsl r3, r3, #2\n    ldr r0, [r0, r3]\n    ldr r3, _0225A3C8 ; =BufferENGreeting\n    bx r3\n    nop\n    _0225A3C8: .word BufferENGreeting"
    );
    #endif
}

void ov49_0225A3CC(void) {
    /* Original at 0x0225A3CC */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "mov r3, #0xb7\n    lsl r3, r3, #2\n    ldr r0, [r0, r3]\n    ldr r3, _0225A3D8 ; =BufferFRGreeting\n    bx r3\n    nop\n    _0225A3D8: .word BufferFRGreeting"
    );
    #endif
}

void ov49_0225A3DC(void) {
    /* Original at 0x0225A3DC */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "mov r3, #0xb7\n    lsl r3, r3, #2\n    ldr r0, [r0, r3]\n    ldr r3, _0225A3E8 ; =BufferITGreeting\n    bx r3\n    nop\n    _0225A3E8: .word BufferITGreeting"
    );
    #endif
}

void ov49_0225A3EC(void) {
    /* Original at 0x0225A3EC */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "mov r3, #0xb7\n    lsl r3, r3, #2\n    ldr r0, [r0, r3]\n    ldr r3, _0225A3F8 ; =BufferDEGreeting\n    bx r3\n    nop\n    _0225A3F8: .word BufferDEGreeting"
    );
    #endif
}

void ov49_0225A3FC(void) {
    /* Original at 0x0225A3FC */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "mov r3, #0xb7\n    lsl r3, r3, #2\n    ldr r0, [r0, r3]\n    ldr r3, _0225A408 ; =BufferSPGreeting\n    bx r3\n    nop\n    _0225A408: .word BufferSPGreeting"
    );
    #endif
}

void ov49_0225A40C(void) {
    /* Original at 0x0225A40C */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r0, r2, #0\n    add r4, r1, #0\n    bl ov45_0222D7C0\n    add r2, r0, #0\n    mov r0, #0xb7\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    add r1, r4, #0\n    bl BufferTypeName\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov49_0225A428(void) {
    /* Original at 0x0225A428 */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    mov r0, #0x61\n    lsl r0, r0, #2\n    add r0, r5, r0\n    add r4, r1, #0\n    add r6, r2, #0\n    bl ov49_0225B8F8\n    cmp r4, r0\n    bne _0225A468\n    mov r0, #0x61\n    lsl r0, r0, #2\n    add r0, r5, r0\n    bl ov49_0225B8FC\n    cmp r0, #1\n    bne _0225A468\n    mov r0, #0x61\n    lsl r0, r0, #2\n    add r0, r5, r0\n    bl ov49_0225B934\n    cmp r0, #0\n    bne _0225A468\n    mov r0, #0x61\n    lsl r0, r0, #2\n    add r0, r5, r0\n    bl ov49_0225B928\n    cmp r6, r0\n    beq _0225A476\n    mov r0, #0x61\n    lsl r0, r0, #2\n    add r0, r5, r0\n    add r1, r4, #0\n    add r2, r6, #0\n    bl ov49_0225B89C\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov49_0225A478(void) {
    ov49_0225B8A8(0x61, 0x77);
}

void ov49_0225A490(void) {
    /* Original at 0x0225A490 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    add r4, r0, #0\n    mov r0, #0x61\n    lsl r0, r0, #2\n    add r0, r4, r0\n    bl ov49_0225B8FC\n    cmp r0, #0\n    beq _0225A4CC\n    mov r0, #0x61\n    lsl r0, r0, #2\n    add r0, r4, r0\n    bl ov49_0225B8F8\n    add r1, r0, #0\n    ldr r0, [r4, #0x34]\n    bl ov45_0222A578\n    mov r1, #0x61\n    lsl r1, r1, #2\n    str r0, [sp]\n    add r0, r4, r1\n    add r1, #8\n    add r1, r4, r1\n    add r4, #0x3c\n    add r2, r4, #0\n    mov r3, #0x77\n    bl ov49_0225BEA0\n    add sp, #4\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov49_0225A4D0(void) {
    /* Original at 0x0225A4D0 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0x61\n    lsl r1, r1, #2\n    ldr r3, _0225A4DC ; =ov49_0225B8E0\n    add r0, r0, r1\n    bx r3\n    nop\n    _0225A4DC: .word ov49_0225B8E0"
    );
    #endif
}

void ov49_0225A4E0(void) {
    /* Original at 0x0225A4E0 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0x61\n    lsl r1, r1, #2\n    ldr r3, _0225A4EC ; =ov49_0225B8F8\n    add r0, r0, r1\n    bx r3\n    nop\n    _0225A4EC: .word ov49_0225B8F8"
    );
    #endif
}

void ov49_0225A4F0(void) {
    /* Original at 0x0225A4F0 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0x61\n    lsl r1, r1, #2\n    ldr r3, _0225A4FC ; =ov49_0225B8FC\n    add r0, r0, r1\n    bx r3\n    nop\n    _0225A4FC: .word ov49_0225B8FC"
    );
    #endif
}

void ov49_0225A500(void) {
    /* Original at 0x0225A500 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0x61\n    lsl r1, r1, #2\n    ldr r3, _0225A50C ; =ov49_0225B914\n    add r0, r0, r1\n    bx r3\n    nop\n    _0225A50C: .word ov49_0225B914"
    );
    #endif
}

void ov49_0225A510(void) {
    /* Original at 0x0225A510 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0x61\n    lsl r1, r1, #2\n    ldr r3, _0225A51C ; =ov49_0225B8EC\n    add r0, r0, r1\n    bx r3\n    nop\n    _0225A51C: .word ov49_0225B8EC"
    );
    #endif
}

void ov49_0225A520(void) {
    /* Original at 0x0225A520 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "mov r2, #0xf7\n    lsl r2, r2, #2\n    ldr r0, [r0, r2]\n    ldr r3, _0225A52C ; =ov49_02268968\n    mov r2, #1\n    bx r3\n    _0225A52C: .word ov49_02268968"
    );
    #endif
}

void ov49_0225A530(void) {
    /* Original at 0x0225A530 */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _0225A538 ; =0x0000018A\n    mov r2, #1\n    strh r2, [r0, r1]\n    bx lr\n    _0225A538: .word 0x0000018A"
    );
    #endif
}

void ov49_0225A53C(void) {
    /* Original at 0x0225A53C */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "mov r2, #0x61\n    lsl r2, r2, #2\n    ldr r3, _0225A548 ; =ov49_0225BA34\n    add r0, r0, r2\n    bx r3\n    nop\n    _0225A548: .word ov49_0225BA34"
    );
    #endif
}

void ov49_0225A54C(void) {
    /* Original at 0x0225A54C */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0xa6\n    lsl r1, r1, #2\n    ldr r3, _0225A558 ; =ov49_0225CB68\n    add r0, r0, r1\n    bx r3\n    nop\n    _0225A558: .word ov49_0225CB68"
    );
    #endif
}

void ov49_0225A55C(void) {
    /* Original at 0x0225A55C */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0xf6\n    lsl r1, r1, #2\n    ldr r3, [r0, r1]\n    mov r2, #0\n    str r2, [r0, r1]\n    add r0, r3, #0\n    bx lr"
    );
    #endif
}

void ov49_0225A56C(void) {
    /* Original at 0x0225A56C */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    cmp r4, #0x14\n    blo _0225A57A\n    bl GF_AssertFail\n    ldr r0, [r5, #0x34]\n    add r1, r4, #0\n    bl ov45_0222A578\n    bl ov45_0222AAC8\n    add r6, r0, #0\n    mov r0, #0xf5\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    add r1, r4, #0\n    add r2, r6, #0\n    bl ov49_022653C0\n    ldr r0, [r5, #0x34]\n    bl ov45_0222A53C\n    cmp r4, r0\n    bne _0225A5A8\n    ldr r0, [r5, #0x34]\n    add r1, r6, #0\n    bl ov45_0222AD70\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov49_0225A5AC(void) {
    /* Original at 0x0225A5AC */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    cmp r4, #0x14\n    blo _0225A5BA\n    bl GF_AssertFail\n    mov r0, #0xf5\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    add r1, r4, #0\n    bl ov49_022653F0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov49_0225A5C8(void) {
    /* Original at 0x0225A5C8 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0xf9\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl ov49_0225E3AC\n    mov r0, #0x3e\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    bl ov49_02258BE0\n    add r4, #0x3c\n    add r0, r4, #0\n    bl ov49_0225A840\n    pop {r4, pc}"
    );
    #endif
}

void ov49_0225A5EC(void) {
    /* Original at 0x0225A5EC */
    /* Requires manual decompilation - 191 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x1c\n    add r5, r0, #0\n    str r1, [sp, #0x14]\n    ldr r0, _0225A798 ; =0x04000050\n    mov r1, #0\n    strh r1, [r0]\n    ldr r0, _0225A79C ; =0x04001050\n    add r6, r2, #0\n    strh r1, [r0]\n    mov r0, #0x20\n    add r1, r6, #0\n    bl GF_CreateVramTransferManager\n    ldr r0, _0225A7A0 ; =ov49_022697CC\n    bl GfGfx_SetBanks\n    ldr r0, _0225A7A4 ; =gSystem + 0x60\n    mov r1, #0\n    strb r1, [r0, #9]\n    bl GfGfx_SwapDisplay\n    mov r0, #0\n    add r1, r0, #0\n    bl BG_SetMaskColor\n    ldr r0, _0225A7A8 ; =ov49_02269724\n    bl SetBothScreensModesAndDisable\n    add r0, r6, #0\n    bl BgConfig_Alloc\n    str r0, [r5]\n    mov r0, #0\n    ldr r7, _0225A7AC ; =ov49_0226981C\n    ldr r4, _0225A7B0 ; =ov49_02269734\n    str r0, [sp, #0x18]\n    ldr r1, [r4]\n    ldr r0, [r5]\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    add r2, r7, #0\n    mov r3, #0\n    bl InitBgFromTemplate\n    ldr r0, [r4]\n    mov r1, #0x20\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    mov r2, #0\n    add r3, r6, #0\n    bl BG_ClearCharDataRange\n    ldr r1, [r4]\n    ldr r0, [r5]\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    bl BgClearTilemapBufferAndCommit\n    ldr r0, [sp, #0x18]\n    add r7, #0x1c\n    add r0, r0, #1\n    add r4, r4, #4\n    str r0, [sp, #0x18]\n    cmp r0, #4\n    blt _0225A636\n    ldr r0, [sp, #0x14]\n    bl Save_PlayerData_GetOptionsAddr\n    bl Options_GetFrame\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    mov r0, #0\n    mov r1, #0xa0\n    add r2, r6, #0\n    bl LoadFontPal0\n    mov r0, #0\n    mov r1, #0x80\n    add r2, r6, #0\n    bl LoadFontPal1\n    mov r0, #0\n    str r0, [sp]\n    str r6, [sp, #4]\n    ldr r0, [r5]\n    mov r1, #1\n    mov r2, #0x55\n    mov r3, #3\n    bl LoadUserFrameGfx1\n    mov r1, #1\n    str r4, [sp]\n    str r6, [sp, #4]\n    ldr r0, [r5]\n    add r2, r1, #0\n    add r3, r1, #0\n    bl LoadUserFrameGfx2\n    mov r0, #3\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    str r6, [sp, #8]\n    ldr r0, [r5]\n    mov r1, #1\n    mov r2, #0x1f\n    mov r3, #2\n    bl sub_0200EC0C\n    mov r0, #0x20\n    str r0, [sp]\n    mov r0, #0xd1\n    mov r1, #0x5a\n    mov r2, #0\n    mov r3, #0x40\n    str r6, [sp, #4]\n    bl GfGfxLoader_GXLoadPal\n    bl NNS_G2dInitOamManagerModule\n    mov r0, #0\n    str r0, [sp]\n    mov r1, #0x7e\n    str r1, [sp, #4]\n    str r0, [sp, #8]\n    mov r3, #0x1f\n    str r3, [sp, #0xc]\n    add r2, r0, #0\n    str r6, [sp, #0x10]\n    bl OamManager_Create\n    ldr r0, _0225A7B4 ; =ov49_02269744\n    ldr r2, _0225A7B8 ; =0x00100010\n    mov r1, #0x10\n    bl ObjCharTransfer_InitEx\n    mov r0, #0x18\n    add r1, r6, #0\n    bl ObjPlttTransfer_Init\n    bl ObjCharTransfer_ClearBuffers\n    bl ObjPlttTransfer_Reset\n    mov r0, #1\n    mov r1, #0x10\n    bl G2dRenderer_SetObjCharTransferReservedRegion\n    mov r0, #1\n    bl G2dRenderer_SetPlttTransferReservedRegion\n    bl sub_0203A880\n    add r1, r5, #0\n    mov r0, #0x18\n    add r1, #8\n    add r2, r6, #0\n    bl G2dRenderer_Init\n    str r0, [r5, #4]\n    add r0, r5, #0\n    mov r2, #1\n    add r0, #8\n    mov r1, #0\n    lsl r2, r2, #0x14\n    bl G2dRenderer_SetSubSurfaceCoords\n    mov r7, #0\n    add r4, r5, #0\n    mov r0, #0x18\n    add r1, r7, #0\n    add r2, r6, #0\n    bl Create2DGfxResObjMan\n    mov r1, #0x13\n    lsl r1, r1, #4\n    str r0, [r4, r1]\n    add r7, r7, #1\n    add r4, r4, #4\n    cmp r7, #4\n    blt _0225A742\n    mov r0, #0x18\n    add r1, r6, #0\n    bl sub_02020654\n    mov r1, #5\n    lsl r1, r1, #6\n    str r0, [r5, r1]\n    mov r0, #0x10\n    mov r1, #1\n    bl GfGfx_EngineATogglePlanes\n    mov r0, #0x10\n    mov r1, #1\n    bl GfGfx_EngineBTogglePlanes\n    mov r0, #4\n    str r0, [sp]\n    ldr r0, _0225A7BC ; =ov49_0225A854\n    mov r1, #0\n    str r0, [sp, #4]\n    add r0, r6, #0\n    mov r2, #2\n    add r3, r1, #0\n    bl GF_3DVramMan_Create\n    mov r1, #0x51\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    add sp, #0x1c\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _0225A798: .word 0x04000050\n    _0225A79C: .word 0x04001050\n    _0225A7A0: .word ov49_022697CC\n    _0225A7A4: .word gSystem + 0x60\n    _0225A7A8: .word ov49_02269724\n    _0225A7AC: .word ov49_0226981C\n    _0225A7B0: .word ov49_02269734\n    _0225A7B4: .word ov49_02269744\n    _0225A7B8: .word 0x00100010\n    _0225A7BC: .word ov49_0225A854"
    );
    #endif
}

void ov49_0225A7C0(void) {
    SpriteList_RenderAndAnimateSprites(*((u32*)(r0 + 4)));
    thunk_UpdateCellTransferStateManager();
}

void ov49_0225A7D0(void) {
    /* Original at 0x0225A7D0 */
    /* Requires manual decompilation - 45 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    bl GF_DestroyVramTransferManager\n    ldr r5, _0225A83C ; =ov49_02269734\n    mov r4, #0\n    ldr r1, [r5]\n    ldr r0, [r6]\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    bl FreeBgTilemapBuffer\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #4\n    blt _0225A7DC\n    ldr r0, [r6]\n    bl Heap_Free\n    mov r0, #5\n    lsl r0, r0, #6\n    ldr r0, [r6, r0]\n    bl sub_0202067C\n    mov r0, #5\n    lsl r0, r0, #6\n    mov r4, #0\n    add r7, r0, #0\n    str r4, [r6, r0]\n    add r5, r6, #0\n    sub r7, #0x10\n    ldr r0, [r5, r7]\n    bl Destroy2DGfxResObjMan\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #4\n    blt _0225A80E\n    ldr r0, [r6, #4]\n    bl SpriteList_Delete\n    bl ObjCharTransfer_Destroy\n    bl ObjPlttTransfer_Destroy\n    bl OamManager_Free\n    mov r0, #0x51\n    lsl r0, r0, #2\n    ldr r0, [r6, r0]\n    bl GF_3DVramMan_Delete\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0225A83C: .word ov49_02269734"
    );
    #endif
}

void ov49_0225A840(void) {
    DoScheduledBgGpuUpdates();
    OamManager_ApplyAndResetBuffers();
    GF_RunVramTransferTasks();
}

void ov49_0225A854(void) {
    /* Original at 0x0225A854 */
    /* Requires manual decompilation - 133 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    mov r0, #1\n    add r1, r0, #0\n    bl GfGfx_EngineATogglePlanes\n    ldr r0, _0225A964 ; =0x04000008\n    mov r1, #3\n    ldrh r2, [r0]\n    bic r2, r1\n    mov r1, #1\n    orr r1, r2\n    strh r1, [r0]\n    add r0, #0x58\n    ldrh r2, [r0]\n    ldr r1, _0225A968 ; =0xFFFFCFFD\n    and r2, r1\n    strh r2, [r0]\n    ldrh r3, [r0]\n    add r2, r1, #2\n    and r3, r2\n    mov r2, #0x10\n    orr r2, r3\n    strh r2, [r0]\n    ldrh r3, [r0]\n    ldr r2, _0225A96C ; =0x0000CFFB\n    and r2, r3\n    strh r2, [r0]\n    add r2, r1, #2\n    ldrh r3, [r0]\n    add r1, r1, #2\n    and r3, r2\n    mov r2, #8\n    orr r2, r3\n    strh r2, [r0]\n    ldrh r2, [r0]\n    and r2, r1\n    mov r1, #0x20\n    orr r1, r2\n    strh r1, [r0]\n    ldr r0, _0225A970 ; =ov49_02269754\n    bl G3X_SetEdgeColorTable\n    mov r0, #0\n    add r1, r0, #0\n    add r2, r0, #0\n    add r3, r0, #0\n    bl G3X_SetFog\n    mov r1, #0\n    ldr r0, _0225A974 ; =0x00006B5A\n    ldr r2, _0225A978 ; =0x00007FFF\n    mov r3, #0x3f\n    str r1, [sp]\n    bl G3X_SetClearColor\n    ldr r1, _0225A97C ; =0xBFFF0000\n    ldr r0, _0225A980 ; =0x04000580\n    ldr r2, _0225A984 ; =0xFFFFF224\n    str r1, [r0]\n    ldr r1, _0225A988 ; =0xFFFFF805\n    mov r0, #0\n    mov r3, #0x6e\n    bl NNS_G3dGlbLightVector\n    mov r1, #0\n    add r0, sp, #4\n    strh r1, [r0]\n    strh r1, [r0, #2]\n    mov r1, #1\n    lsl r1, r1, #0xc\n    strh r1, [r0, #4]\n    add r0, sp, #4\n    add r1, r0, #0\n    bl VEC_Fx16Normalize\n    add r4, sp, #4\n    mov r1, #0\n    mov r2, #2\n    mov r3, #4\n    ldrsh r1, [r4, r1]\n    ldrsh r2, [r4, r2]\n    ldrsh r3, [r4, r3]\n    mov r0, #1\n    bl NNS_G3dGlbLightVector\n    mov r1, #0\n    add r0, r4, #0\n    strh r1, [r0]\n    strh r1, [r0, #2]\n    mov r1, #1\n    lsl r1, r1, #0xc\n    strh r1, [r0, #4]\n    add r0, sp, #4\n    add r1, r0, #0\n    bl VEC_Fx16Normalize\n    mov r0, #2\n    mov r1, #0\n    mov r3, #4\n    ldrsh r1, [r4, r1]\n    ldrsh r2, [r4, r0]\n    ldrsh r3, [r4, r3]\n    bl NNS_G3dGlbLightVector\n    ldr r1, _0225A978 ; =0x00007FFF\n    mov r0, #2\n    bl NNS_G3dGlbLightColor\n    mov r1, #0\n    add r0, r4, #0\n    strh r1, [r0]\n    strh r1, [r0, #2]\n    mov r1, #1\n    lsl r1, r1, #0xc\n    strh r1, [r0, #4]\n    add r0, sp, #4\n    add r1, r0, #0\n    bl VEC_Fx16Normalize\n    mov r1, #0\n    mov r2, #2\n    mov r3, #4\n    ldrsh r1, [r4, r1]\n    ldrsh r2, [r4, r2]\n    ldrsh r3, [r4, r3]\n    mov r0, #3\n    bl NNS_G3dGlbLightVector\n    ldr r1, _0225A978 ; =0x00007FFF\n    mov r0, #3\n    bl NNS_G3dGlbLightColor\n    add sp, #0xc\n    pop {r3, r4, pc}\n    nop\n    _0225A964: .word 0x04000008\n    _0225A968: .word 0xFFFFCFFD\n    _0225A96C: .word 0x0000CFFB\n    _0225A970: .word ov49_02269754\n    _0225A974: .word 0x00006B5A\n    _0225A978: .word 0x00007FFF\n    _0225A97C: .word 0xBFFF0000\n    _0225A980: .word 0x04000580\n    _0225A984: .word 0xFFFFF224\n    _0225A988: .word 0xFFFFF805"
    );
    #endif
}

void ov49_0225A98C(void) {
    /* Original at 0x0225A98C */
    /* Requires manual decompilation - 70 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0x3e\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    bl ov49_02258B44\n    ldrb r0, [r4, #4]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x1c\n    bne _0225A9B2\n    ldrb r0, [r4, #6]\n    cmp r0, #0\n    bne _0225A9B2\n    mov r0, #0x3f\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    bl ov49_0225EF24\n    mov r0, #0xf9\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl ov49_0225E318\n    ldrb r0, [r4, #4]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x1c\n    bne _0225A9E8\n    ldrb r0, [r4, #6]\n    cmp r0, #0\n    bne _0225A9E8\n    mov r0, #0x3e\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    bl ov49_02258B5C\n    mov r0, #0x3f\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    bl ov49_0225EF30\n    mov r0, #0xf7\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl ov49_02268870\n    add r0, r4, #0\n    bl ov49_0225AA70\n    ldrb r0, [r4, #3]\n    cmp r0, #0\n    bne _0225AA1E\n    ldrb r0, [r4, #4]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x1c\n    cmp r0, #1\n    beq _0225AA0A\n    ldrb r0, [r4, #6]\n    cmp r0, #1\n    beq _0225AA0A\n    ldrb r0, [r4]\n    cmp r0, #1\n    bne _0225AA0E\n    mov r2, #1\n    b _0225AA10\n    mov r2, #0\n    mov r0, #0x61\n    lsl r0, r0, #2\n    add r0, r4, r0\n    add r1, r4, #0\n    mov r3, #0x77\n    bl ov49_0225B518\n    mov r0, #0xf5\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl ov49_02265378\n    pop {r4, pc}"
    );
    #endif
}

void ov49_0225AA2C(void) {
    /* Original at 0x0225AA2C */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl Thunk_G3X_Reset\n    mov r0, #0xfb\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl ov49_0225CBF4\n    mov r0, #0xf9\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl ov49_0225E3A0\n    mov r0, #0x3e\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    bl ov49_02258BD4\n    mov r0, #0xf5\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl ov49_02265398\n    mov r0, #0\n    add r1, r0, #0\n    bl RequestSwap3DBuffers\n    add r4, #0x3c\n    add r0, r4, #0\n    bl ov49_0225A7C0\n    pop {r4, pc}"
    );
    #endif
}

void ov49_0225AA70(void) {
    /* Original at 0x0225AA70 */
    /* Requires manual decompilation - 38 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r7, r0, #0\n    ldr r0, [r7, #0x34]\n    bl ov45_0222A394\n    str r0, [sp, #8]\n    mov r4, #0\n    add r0, r4, #0\n    bl ov45_0222F274\n    add r6, r0, #0\n    cmp r6, #1\n    bne _0225AA9E\n    add r0, r4, #0\n    bl ov45_0222F294\n    cmp r0, #0\n    bne _0225AA9A\n    mov r5, #1\n    b _0225AAA0\n    mov r5, #0\n    b _0225AAA0\n    mov r5, #0\n    add r0, r4, #0\n    bl ov45_0222F314\n    add r2, r0, #0\n    ldr r0, [sp, #8]\n    str r5, [sp]\n    str r0, [sp, #4]\n    mov r0, #0xf9\n    lsl r0, r0, #2\n    ldr r0, [r7, r0]\n    add r1, r4, #0\n    add r3, r6, #0\n    bl ov49_0225E8C4\n    add r4, r4, #1\n    cmp r4, #3\n    blt _0225AA80\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov49_0225AAC8(void) {
    /* Original at 0x0225AAC8 */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0x14\n    add r5, r0, #0\n    mov r0, #0x13\n    str r0, [sp]\n    mov r0, #0x1b\n    str r0, [sp, #4]\n    mov r0, #4\n    str r0, [sp, #8]\n    str r0, [sp, #0xc]\n    mov r0, #0x5e\n    str r0, [sp, #0x10]\n    ldr r0, [r1]\n    add r4, r2, #0\n    add r6, r3, #0\n    add r1, r5, #0\n    mov r2, #1\n    mov r3, #2\n    bl AddWindowParameterized\n    add r0, r5, #0\n    mov r1, #0xf\n    bl FillWindowPixelBuffer\n    mov r0, #6\n    lsl r0, r0, #6\n    add r1, r6, #0\n    bl String_New\n    str r0, [r5, #0x18]\n    add r0, r4, #0\n    bl Save_PlayerData_GetOptionsAddr\n    bl Options_GetTextFrameDelay\n    str r0, [r5, #0x14]\n    add sp, #0x14\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void ov49_0225AB14(void) {
    /* Original at 0x0225AB14 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x10]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl TextPrinterCheckActive\n    cmp r0, #0\n    beq _0225AB30\n    ldr r0, [r4, #0x10]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl RemoveTextPrinter\n    add r0, r4, #0\n    bl ov49_0225AC38\n    ldr r0, [r4, #0x18]\n    bl String_Delete\n    add r0, r4, #0\n    bl RemoveWindow\n    pop {r4, pc}"
    );
    #endif
}

void ov49_0225AB44(void) {
    /* Original at 0x0225AB44 */
    /* Requires manual decompilation - 41 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    ldr r0, [r5, #0x10]\n    add r4, r1, #0\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl TextPrinterCheckActive\n    cmp r0, #0\n    beq _0225AB64\n    ldr r0, [r5, #0x10]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl RemoveTextPrinter\n    add r0, r5, #0\n    mov r1, #0xf\n    bl FillWindowPixelBuffer\n    ldr r0, [r5, #0x18]\n    add r1, r4, #0\n    bl String_Copy\n    mov r3, #0\n    str r3, [sp]\n    ldr r0, [r5, #0x14]\n    mov r1, #1\n    str r0, [sp, #4]\n    ldr r0, _0225ABA0 ; =0x0001020F\n    str r0, [sp, #8]\n    str r3, [sp, #0xc]\n    ldr r2, [r5, #0x18]\n    add r0, r5, #0\n    bl AddTextPrinterParameterizedWithColor\n    mov r1, #1\n    str r0, [r5, #0x10]\n    add r0, r5, #0\n    add r2, r1, #0\n    add r3, r1, #0\n    bl DrawFrameAndWindow2\n    add sp, #0x10\n    pop {r3, r4, r5, pc}\n    nop\n    _0225ABA0: .word 0x0001020F"
    );
    #endif
}

void ov49_0225ABA4(void) {
    /* Original at 0x0225ABA4 */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    ldr r0, [r5, #0x10]\n    add r4, r1, #0\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl TextPrinterCheckActive\n    cmp r0, #0\n    beq _0225ABC4\n    ldr r0, [r5, #0x10]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl RemoveTextPrinter\n    add r0, r5, #0\n    mov r1, #0xf\n    bl FillWindowPixelBuffer\n    ldr r0, [r5, #0x18]\n    add r1, r4, #0\n    bl String_Copy\n    mov r3, #0\n    str r3, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _0225AC04 ; =0x0001020F\n    mov r1, #1\n    str r0, [sp, #8]\n    str r3, [sp, #0xc]\n    ldr r2, [r5, #0x18]\n    add r0, r5, #0\n    bl AddTextPrinterParameterizedWithColor\n    mov r1, #1\n    add r0, r5, #0\n    add r2, r1, #0\n    add r3, r1, #0\n    bl DrawFrameAndWindow2\n    add r0, r5, #0\n    bl ScheduleWindowCopyToVram\n    add sp, #0x10\n    pop {r3, r4, r5, pc}\n    nop\n    _0225AC04: .word 0x0001020F"
    );
    #endif
}

void ov49_0225AC08(void) {
    /* Original at 0x0225AC08 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x1c]\n    cmp r0, #0\n    beq _0225AC16\n    bl GF_AssertFail\n    add r0, r4, #0\n    mov r1, #1\n    bl WaitingIcon_New\n    str r0, [r4, #0x1c]\n    pop {r4, pc}"
    );
    #endif
}

void ov49_0225AC24(void) {
    sub_0200F450(0);
}

void ov49_0225AC38(void) {
    sub_0200F478(0);
}

void ov49_0225AC4C(void) {
    /* Original at 0x0225AC4C */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0, #0x1c]\n    cmp r0, #0\n    beq _0225AC56\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void ov49_0225AC5C(void) {
    TextPrinterCheckActive(0, 1);
}

void ov49_0225AC74(void) {
    /* Original at 0x0225AC74 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x10]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl TextPrinterCheckActive\n    cmp r0, #0\n    beq _0225AC90\n    ldr r0, [r4, #0x10]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl RemoveTextPrinter\n    add r0, r4, #0\n    bl ov49_0225AC38\n    add r0, r4, #0\n    mov r1, #1\n    bl ClearFrameAndWindow2\n    add r0, r4, #0\n    bl ClearWindowTilemapAndScheduleTransfer\n    pop {r4, pc}"
    );
    #endif
}

void ov49_0225ACA8(void) {
    ov49_0225AAC8();
    SetWindowPaletteNum(r4, 2);
}

void ov49_0225ACBC(void) {
    ov49_0225AB14();
}

void ov49_0225ACC4(void) {
    /* Original at 0x0225ACC4 */
    /* Requires manual decompilation - 39 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    ldr r0, [r5, #0x10]\n    add r4, r1, #0\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl TextPrinterCheckActive\n    cmp r0, #0\n    beq _0225ACE4\n    ldr r0, [r5, #0x10]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl RemoveTextPrinter\n    add r0, r5, #0\n    mov r1, #0xf\n    bl FillWindowPixelBuffer\n    ldr r0, [r5, #0x18]\n    add r1, r4, #0\n    bl String_Copy\n    mov r3, #0\n    str r3, [sp]\n    ldr r0, [r5, #0x14]\n    mov r1, #1\n    str r0, [sp, #4]\n    str r3, [sp, #8]\n    ldr r2, [r5, #0x18]\n    add r0, r5, #0\n    bl AddTextPrinterParameterized\n    str r0, [r5, #0x10]\n    mov r0, #3\n    str r0, [sp]\n    add r0, r5, #0\n    mov r1, #1\n    mov r2, #0x1f\n    mov r3, #2\n    bl DrawFrameAndWindow3\n    add sp, #0xc\n    pop {r4, r5, pc}"
    );
    #endif
}

void ov49_0225AD20(void) {
    /* Original at 0x0225AD20 */
    /* Requires manual decompilation - 135 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x70\n    add r5, r2, #0\n    add r7, r0, #0\n    add r4, r1, #0\n    mov r0, #0x3c\n    add r1, r5, #0\n    bl NARC_New\n    add r6, r0, #0\n    ldr r0, _0225AE44 ; =0x00001388\n    add r1, r6, #0\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #0x13\n    str r5, [sp, #8]\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r2, #4\n    mov r3, #0\n    bl AddCharResObjFromOpenNarc\n    str r0, [r7, #0x40]\n    ldr r0, _0225AE44 ; =0x00001388\n    add r1, r6, #0\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0x4d\n    str r5, [sp, #0xc]\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r2, #0xa\n    mov r3, #0\n    bl AddPlttResObjFromOpenNarc\n    str r0, [r7, #0x44]\n    ldr r1, _0225AE44 ; =0x00001388\n    mov r0, #2\n    str r1, [sp]\n    str r0, [sp, #4]\n    lsr r0, r1, #4\n    str r5, [sp, #8]\n    ldr r0, [r4, r0]\n    add r1, r6, #0\n    mov r2, #5\n    mov r3, #0\n    bl AddCellOrAnimResObjFromOpenNarc\n    str r0, [r7, #0x48]\n    ldr r0, _0225AE44 ; =0x00001388\n    add r1, r6, #0\n    str r0, [sp]\n    mov r0, #3\n    str r0, [sp, #4]\n    mov r0, #0x4f\n    str r5, [sp, #8]\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r2, #6\n    mov r3, #0\n    bl AddCellOrAnimResObjFromOpenNarc\n    str r0, [r7, #0x4c]\n    add r0, r6, #0\n    bl NARC_Delete\n    ldr r0, [r7, #0x40]\n    bl sub_0200ADA4\n    ldr r0, [r7, #0x44]\n    bl sub_0200B00C\n    ldr r1, _0225AE44 ; =0x00001388\n    mov r0, #0\n    str r1, [sp]\n    mvn r0, r0\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r2, #0\n    str r2, [sp, #0xc]\n    mov r0, #0x13\n    str r2, [sp, #0x10]\n    lsl r0, r0, #4\n    ldr r3, [r4, r0]\n    str r3, [sp, #0x14]\n    add r3, r0, #4\n    ldr r3, [r4, r3]\n    str r3, [sp, #0x18]\n    add r3, r0, #0\n    add r3, #8\n    ldr r3, [r4, r3]\n    add r0, #0xc\n    str r3, [sp, #0x1c]\n    ldr r0, [r4, r0]\n    add r3, r1, #0\n    str r0, [sp, #0x20]\n    str r2, [sp, #0x24]\n    str r2, [sp, #0x28]\n    add r0, sp, #0x4c\n    add r2, r1, #0\n    bl CreateSpriteResourcesHeader\n    ldr r0, [r4, #4]\n    mov r6, #0\n    str r0, [sp, #0x2c]\n    add r0, sp, #0x4c\n    str r0, [sp, #0x30]\n    mov r0, #1\n    str r0, [sp, #0x44]\n    mov r0, #3\n    lsl r0, r0, #0x12\n    str r5, [sp, #0x48]\n    ldr r4, _0225AE48 ; =ov49_022696E8\n    str r6, [sp, #0x40]\n    str r0, [sp, #0x34]\n    add r5, r7, #0\n    ldrb r0, [r4]\n    lsl r0, r0, #0xc\n    str r0, [sp, #0x38]\n    add r0, sp, #0x2c\n    bl Sprite_Create\n    str r0, [r5, #0x50]\n    add r1, r6, #0\n    bl Sprite_SetAnimCtrlSeq\n    ldr r0, [r5, #0x50]\n    mov r1, #1\n    bl Sprite_SetAnimActiveFlag\n    ldr r0, [r5, #0x50]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    add r6, r6, #1\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r6, #2\n    blt _0225AE0E\n    mov r0, #0\n    str r0, [r7, #0x3c]\n    add sp, #0x70\n    pop {r3, r4, r5, r6, r7, pc}\n    _0225AE44: .word 0x00001388\n    _0225AE48: .word ov49_022696E8"
    );
    #endif
}

void ov49_0225AE4C(void) {
    /* Original at 0x0225AE4C */
    /* Requires manual decompilation - 40 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r6, r1, #0\n    ldr r1, [r5, #0x34]\n    cmp r1, #0\n    beq _0225AE5C\n    bl ov49_0225AEE0\n    ldr r0, [r5, #0x30]\n    cmp r0, #0\n    beq _0225AE6C\n    mov r1, #0\n    add r0, r5, #0\n    add r2, r1, #0\n    bl ov49_0225B014\n    mov r7, #0\n    add r4, r5, #0\n    ldr r0, [r4, #0x50]\n    bl Sprite_Delete\n    mov r0, #0\n    str r0, [r4, #0x50]\n    add r7, r7, #1\n    add r4, r4, #4\n    cmp r7, #2\n    blt _0225AE70\n    ldr r0, [r5, #0x40]\n    bl sub_0200AEB0\n    ldr r0, [r5, #0x44]\n    bl sub_0200B0A8\n    mov r7, #0x13\n    mov r4, #0\n    lsl r7, r7, #4\n    ldr r0, [r6, r7]\n    ldr r1, [r5, #0x40]\n    bl DestroySingle2DGfxResObj\n    add r4, r4, #1\n    add r5, r5, #4\n    add r6, r6, #4\n    cmp r4, #4\n    blt _0225AE94\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov49_0225AEA8(void) {
    /* Original at 0x0225AEA8 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0x34]\n    add r4, r1, #0\n    add r7, r2, #0\n    add r6, r3, #0\n    cmp r0, #0\n    beq _0225AEBC\n    bl GF_AssertFail\n    add r0, r4, #0\n    add r1, r7, #0\n    bl ListMenuItems_New\n    str r0, [r5, #0x34]\n    mov r1, #0\n    strh r4, [r5, #0x38]\n    cmp r4, #0\n    bls _0225AEDE\n    add r2, r1, #0\n    ldr r0, [r5, #0x34]\n    add r1, r1, #1\n    add r0, r0, r2\n    str r6, [r0, #4]\n    add r2, #8\n    cmp r1, r4\n    blo _0225AED0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov49_0225AEE0(void) {
    ListMenuItems_Delete(0);
}

void ov49_0225AEF8(void) {
    ListMenuItems_AddItem();
}

void ov49_0225AF04(void) {
    /* Original at 0x0225AF04 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0, #0x34]\n    bx lr"
    );
    #endif
}

void ov49_0225AF08(void) {
    /* Original at 0x0225AF08 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    ldrh r2, [r0, #0x38]\n    mov r3, #0\n    cmp r2, #0\n    ble _0225AF2A\n    ldr r4, [r0, #0x34]\n    ldr r2, [r4, #4]\n    cmp r1, r2\n    bne _0225AF20\n    mov r0, #1\n    pop {r3, r4}\n    bx lr\n    ldrh r2, [r0, #0x38]\n    add r3, r3, #1\n    add r4, #8\n    cmp r3, r2\n    blt _0225AF14\n    mov r0, #0\n    pop {r3, r4}\n    bx lr"
    );
    #endif
}

void ov49_0225AF30(void) {
    /* Original at 0x0225AF30 */
    /* Requires manual decompilation - 76 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r5, r0, #0\n    ldr r0, [r5, #0x30]\n    add r4, r1, #0\n    add r6, r2, #0\n    add r7, r3, #0\n    cmp r0, #0\n    beq _0225AF46\n    bl GF_AssertFail\n    ldrh r0, [r4, #0x12]\n    lsl r0, r0, #1\n    cmp r0, #0x12\n    blt _0225AF52\n    bl GF_AssertFail\n    add r3, r4, #0\n    add r2, r5, #0\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    add r1, r5, #0\n    add r1, #0x20\n    str r1, [r5, #0xc]\n    ldrh r0, [r4, #0x10]\n    add r3, sp, #0x18\n    mov r2, #1\n    strh r0, [r5, #0x3a]\n    ldr r0, _0225AFD4 ; =ov49_0225B058\n    str r0, [r5, #4]\n    ldrb r0, [r3, #0x1c]\n    str r0, [sp]\n    add r0, sp, #0x38\n    ldrb r0, [r0]\n    str r0, [sp, #4]\n    ldrh r0, [r4, #0x12]\n    lsl r0, r0, #0x19\n    lsr r0, r0, #0x18\n    str r0, [sp, #8]\n    mov r0, #5\n    str r0, [sp, #0xc]\n    mov r0, #0xca\n    str r0, [sp, #0x10]\n    ldrb r3, [r3, #0x18]\n    ldr r0, [r6]\n    bl AddWindowParameterized\n    add r0, r5, #0\n    add r0, #0x20\n    mov r1, #0xf\n    bl FillWindowPixelBuffer\n    add r0, r5, #0\n    add r0, #0x20\n    mov r1, #1\n    mov r2, #0x55\n    mov r3, #3\n    bl DrawFrameAndWindow1\n    add r2, sp, #0x18\n    ldr r3, [sp, #0x2c]\n    ldrh r2, [r2, #0x10]\n    lsl r3, r3, #0x18\n    add r0, r5, #0\n    add r1, r7, #0\n    lsr r3, r3, #0x18\n    bl ListMenuInit\n    str r0, [r5, #0x30]\n    add r5, #0x20\n    add r0, r5, #0\n    bl ScheduleWindowCopyToVram\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _0225AFD4: .word ov49_0225B058"
    );
    #endif
}

void ov49_0225AFD8(void) {
    /* Original at 0x0225AFD8 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0x30]\n    cmp r0, #0\n    bne _0225AFE8\n    mov r0, #1\n    mvn r0, r0\n    pop {r3, r4, r5, pc}\n    bl ListMenu_ProcessInput\n    add r4, r0, #0\n    mov r0, #1\n    mvn r0, r0\n    cmp r4, r0\n    beq _0225AFFC\n    add r0, r0, #1\n    cmp r4, r0\n    bne _0225B004\n    add r0, r5, #0\n    bl ov49_0225B070\n    b _0225B00A\n    ldr r0, _0225B010 ; =0x000005DC\n    bl PlaySE\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}\n    nop\n    _0225B010: .word 0x000005DC"
    );
    #endif
}

void ov49_0225B014(void) {
    /* Original at 0x0225B014 */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0x30]\n    cmp r0, #0\n    beq _0225B056\n    bl DestroyListMenu\n    mov r0, #0\n    str r0, [r5, #0x30]\n    add r0, r5, #0\n    add r0, #0x20\n    mov r1, #1\n    bl sub_0200E5D4\n    add r0, r5, #0\n    add r0, #0x20\n    bl ClearWindowTilemapAndScheduleTransfer\n    add r0, r5, #0\n    add r0, #0x20\n    bl RemoveWindow\n    mov r4, #0\n    str r4, [r5, #0x3c]\n    add r6, r4, #0\n    ldr r0, [r5, #0x50]\n    add r1, r6, #0\n    bl Sprite_SetDrawFlag\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #2\n    blt _0225B046\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov49_0225B058(void) {
    PlaySE();
}

void ov49_0225B06C(void) {
    ((u32*)r0)[0x3c] = r1;
}

void ov49_0225B070(void) {
    /* Original at 0x0225B070 */
    /* Requires manual decompilation - 43 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    add r4, r0, #0\n    ldr r0, [r4, #0x3c]\n    cmp r0, #0\n    bne _0225B090\n    ldr r0, [r4, #0x50]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    ldr r0, [r4, #0x54]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    add sp, #4\n    pop {r3, r4, pc}\n    ldr r0, [r4, #0x30]\n    add r1, sp, #0\n    mov r2, #0\n    bl ListMenuGetScrollAndRow\n    add r0, sp, #0\n    ldrh r0, [r0]\n    cmp r0, #0\n    ldr r0, [r4, #0x50]\n    bne _0225B0AC\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    b _0225B0B2\n    mov r1, #1\n    bl Sprite_SetDrawFlag\n    add r0, sp, #0\n    ldrh r1, [r0]\n    ldrh r0, [r4, #0x3a]\n    sub r0, r0, #7\n    cmp r1, r0\n    ldr r0, [r4, #0x54]\n    blt _0225B0CA\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    add sp, #4\n    pop {r3, r4, pc}\n    mov r1, #1\n    bl Sprite_SetDrawFlag\n    add sp, #4\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov49_0225B0D4(void) {
    /* Original at 0x0225B0D4 */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void ov49_0225B0D8(void) {
    ov49_0225B124();
}

void ov49_0225B0E0(void) {
    /* Original at 0x0225B0E0 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0x14\n    add r4, r0, #0\n    add r0, sp, #0x10\n    ldrb r2, [r0, #0x10]\n    str r2, [sp]\n    ldrb r2, [r0, #0x14]\n    str r2, [sp, #4]\n    ldrb r0, [r0, #0x18]\n    mov r2, #1\n    str r0, [sp, #8]\n    mov r0, #5\n    str r0, [sp, #0xc]\n    mov r0, #0xca\n    str r0, [sp, #0x10]\n    ldr r0, [r1]\n    add r1, r4, #0\n    bl AddWindowParameterized\n    add r0, r4, #0\n    mov r1, #1\n    mov r2, #0x55\n    mov r3, #3\n    bl DrawFrameAndWindow1\n    add r0, r4, #0\n    mov r1, #0xf\n    bl FillWindowPixelBuffer\n    add r0, r4, #0\n    bl ScheduleWindowCopyToVram\n    add sp, #0x14\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov49_0225B124(void) {
    /* Original at 0x0225B124 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl WindowIsInUse\n    cmp r0, #1\n    bne _0225B144\n    add r0, r4, #0\n    mov r1, #1\n    bl sub_0200E5D4\n    add r0, r4, #0\n    bl ClearWindowTilemapAndScheduleTransfer\n    add r0, r4, #0\n    bl RemoveWindow\n    pop {r4, pc}"
    );
    #endif
}

void ov49_0225B148(void) {
    /* Original at 0x0225B148 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x10\n    add r6, r1, #0\n    str r3, [sp]\n    add r5, r2, #0\n    mov r1, #0xff\n    str r1, [sp, #4]\n    ldr r1, _0225B174 ; =0x0001020F\n    add r4, r0, #0\n    str r1, [sp, #8]\n    mov r1, #0\n    add r2, r6, #0\n    add r3, r5, #0\n    str r1, [sp, #0xc]\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r4, #0\n    bl ScheduleWindowCopyToVram\n    add sp, #0x10\n    pop {r4, r5, r6, pc}\n    nop\n    _0225B174: .word 0x0001020F"
    );
    #endif
}

void ov49_0225B178(void) {
    FillWindowPixelRect(0xf);
}

void ov49_0225B198(void) {
    /* Original at 0x0225B198 */
    /* Requires manual decompilation - 45 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r0, [r5]\n    add r4, r1, #0\n    add r6, r2, #0\n    cmp r0, #0\n    beq _0225B1AA\n    bl GF_AssertFail\n    mov r0, #2\n    add r1, r6, #0\n    bl ListMenuItems_New\n    str r0, [r5]\n    add r0, r4, #0\n    mov r1, #1\n    mov r2, #0x43\n    bl ov49_0225B388\n    add r1, r0, #0\n    ldr r0, [r5]\n    mov r2, #0\n    bl ListMenuItems_AddItem\n    add r0, r4, #0\n    mov r1, #1\n    mov r2, #0x42\n    bl ov49_0225B388\n    add r1, r0, #0\n    ldr r0, [r5]\n    mov r2, #1\n    bl ListMenuItems_AddItem\n    ldr r3, _0225B1FC ; =ov49_022697AC\n    add r2, r5, #4\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    mov r0, #2\n    strh r0, [r5, #0x14]\n    ldr r0, [r5]\n    str r0, [r5, #4]\n    pop {r4, r5, r6, pc}\n    nop\n    _0225B1FC: .word ov49_022697AC"
    );
    #endif
}

void ov49_0225B200(void) {
    ListMenuItems_Delete(0);
}

void ov49_0225B214(void) {
    /* Original at 0x0225B214 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0x14\n    mov r3, #4\n    add r4, r0, #0\n    str r3, [sp]\n    mov r0, #0x17\n    str r0, [sp, #4]\n    mov r0, #0x10\n    str r0, [sp, #8]\n    mov r0, #5\n    str r0, [sp, #0xc]\n    mov r0, #0x5e\n    str r0, [sp, #0x10]\n    ldr r0, [r1]\n    add r1, r4, #0\n    mov r2, #1\n    bl AddWindowParameterized\n    add r0, r4, #0\n    mov r1, #0xf\n    bl FillWindowPixelBuffer\n    add sp, #0x14\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov49_0225B244(void) {
    RemoveWindow();
}

void ov49_0225B24C(void) {
    /* Original at 0x0225B24C */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x10\n    add r2, r1, #0\n    mov r1, #0\n    str r1, [sp]\n    mov r3, #0xff\n    str r3, [sp, #4]\n    ldr r3, _0225B280 ; =0x0001020F\n    add r4, r0, #0\n    str r3, [sp, #8]\n    add r3, r1, #0\n    str r1, [sp, #0xc]\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r4, #0\n    mov r1, #1\n    mov r2, #0x55\n    mov r3, #3\n    bl DrawFrameAndWindow1\n    add r0, r4, #0\n    bl ScheduleWindowCopyToVram\n    add sp, #0x10\n    pop {r4, pc}\n    nop\n    _0225B280: .word 0x0001020F"
    );
    #endif
}

void ov49_0225B284(void) {
    /* Original at 0x0225B284 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    add r5, r1, #0\n    bl sub_020392D8\n    add r4, r0, #0\n    ldr r0, [r4]\n    ldr r1, [r4, #4]\n    bl ov45_0222D7CC\n    add r7, r0, #0\n    mov r0, #2\n    str r0, [sp]\n    ldr r1, [r4]\n    add r0, r5, #0\n    mov r2, #5\n    mov r3, #0\n    bl ov49_0225B3A8\n    add r0, r5, #0\n    mov r1, #2\n    add r2, r7, #0\n    bl ov49_0225B388\n    add r1, r0, #0\n    add r0, r6, #0\n    bl ov49_0225B24C\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov49_0225B2C0(void) {
    /* Original at 0x0225B2C0 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r0, r2, #0\n    add r4, r1, #0\n    bl ov45_0222E7FC\n    add r1, r0, #0\n    mov r0, #2\n    str r0, [sp]\n    add r0, r4, #0\n    mov r2, #5\n    mov r3, #0\n    bl ov49_0225B3A8\n    add r0, r4, #0\n    mov r1, #2\n    mov r2, #0x20\n    bl ov49_0225B388\n    add r1, r0, #0\n    add r0, r5, #0\n    bl ov49_0225B24C\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov49_0225B2F0(void) {
    ov49_0225B388(r1, 2, 0xe);
    ov49_0225B24C(r4, r0);
}

void ov49_0225B308(void) {
    /* Original at 0x0225B308 */
    /* Requires manual decompilation - 37 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r1, #0\n    str r0, [sp]\n    mov r0, #8\n    mov r1, #0x40\n    add r2, r7, #0\n    bl MessageFormat_New_Custom\n    ldr r1, [sp]\n    ldr r4, _0225B358 ; =ov49_02269714\n    str r0, [r1]\n    mov r6, #0\n    add r5, r1, #0\n    ldr r2, [r4]\n    mov r0, #1\n    mov r1, #0x1b\n    add r3, r7, #0\n    bl NewMsgDataFromNarc\n    str r0, [r5, #4]\n    add r6, r6, #1\n    add r4, r4, #4\n    add r5, r5, #4\n    cmp r6, #4\n    blt _0225B322\n    mov r0, #0x1e\n    lsl r0, r0, #4\n    add r1, r7, #0\n    bl String_New\n    ldr r1, [sp]\n    str r0, [r1, #0x14]\n    mov r0, #0x1e\n    lsl r0, r0, #4\n    add r1, r7, #0\n    bl String_New\n    ldr r1, [sp]\n    str r0, [r1, #0x18]\n    pop {r3, r4, r5, r6, r7, pc}\n    _0225B358: .word ov49_02269714"
    );
    #endif
}

void ov49_0225B35C(void) {
    /* Original at 0x0225B35C */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r0, #0\n    ldr r0, [r6]\n    bl MessageFormat_Delete\n    mov r4, #0\n    add r5, r6, #0\n    ldr r0, [r5, #4]\n    bl DestroyMsgData\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #4\n    blt _0225B36A\n    ldr r0, [r6, #0x14]\n    bl String_Delete\n    ldr r0, [r6, #0x18]\n    bl String_Delete\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov49_0225B388(void) {
    /* Original at 0x0225B388 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    lsl r0, r1, #2\n    add r0, r4, r0\n    add r1, r2, #0\n    ldr r0, [r0, #4]\n    ldr r2, [r4, #0x18]\n    bl ReadMsgDataIntoString\n    ldr r0, [r4]\n    ldr r1, [r4, #0x14]\n    ldr r2, [r4, #0x18]\n    bl StringExpandPlaceholders\n    ldr r0, [r4, #0x14]\n    pop {r4, pc}"
    );
    #endif
}

void ov49_0225B3A8(void) {
    BufferIntegerAsString(1);
}

void ov49_0225B3C8(void) {
    /* Original at 0x0225B3C8 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "add r3, r1, #0\n    add r1, r2, #0\n    add r2, r3, #0\n    ldr r3, _0225B3D4 ; =BufferPlayersName\n    ldr r0, [r0]\n    bx r3\n    _0225B3D4: .word BufferPlayersName"
    );
    #endif
}

void ov49_0225B3D8(void) {
    /* Original at 0x0225B3D8 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "add r3, r1, #0\n    add r1, r2, #0\n    add r2, r3, #0\n    ldr r3, _0225B3E4 ; =BufferWiFiPlazaActivityName\n    ldr r0, [r0]\n    bx r3\n    _0225B3E4: .word BufferWiFiPlazaActivityName"
    );
    #endif
}

void ov49_0225B3E8(void) {
    /* Original at 0x0225B3E8 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "add r3, r1, #0\n    add r1, r2, #0\n    add r2, r3, #0\n    ldr r3, _0225B3F4 ; =BufferWiFiPlazaEventName\n    ldr r0, [r0]\n    bx r3\n    _0225B3F4: .word BufferWiFiPlazaEventName"
    );
    #endif
}

void ov49_0225B3F8(void) {
    /* Original at 0x0225B3F8 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "add r3, r1, #0\n    add r1, r2, #0\n    add r2, r3, #0\n    ldr r3, _0225B404 ; =BufferWiFiPlazaInstrumentName\n    ldr r0, [r0]\n    bx r3\n    _0225B404: .word BufferWiFiPlazaInstrumentName"
    );
    #endif
}

void ov49_0225B408(void) {
    /* Original at 0x0225B408 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "add r3, r1, #0\n    add r1, r2, #0\n    add r2, r3, #0\n    ldr r3, _0225B414 ; =BufferCountryName\n    ldr r0, [r0]\n    bx r3\n    _0225B414: .word BufferCountryName"
    );
    #endif
}

void ov49_0225B418(void) {
    BufferCityName();
}

void ov49_0225B42C(void) {
    BufferECWord();
}

void ov49_0225B438(void) {
    MessageFormat_ResetBuffers();
}

void ov49_0225B444(void) {
    /* Original at 0x0225B444 */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0xf6\n    mov r2, #1\n    lsl r1, r1, #2\n    str r2, [r0, r1]\n    bx lr"
    );
    #endif
}

void ov49_0225B450(void) {
    /* Original at 0x0225B450 */
    /* Requires manual decompilation - 64 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    ldr r4, [sp, #0x20]\n    add r5, r0, #0\n    add r0, r3, #0\n    add r7, r1, #0\n    add r6, r2, #0\n    bl PlayerProfile_GetTrainerGender\n    str r0, [sp, #4]\n    mov r0, #0xd1\n    add r1, r4, #0\n    bl NARC_New\n    mov r2, #0x53\n    lsl r2, r2, #2\n    str r0, [r5, r2]\n    str r4, [sp]\n    ldr r2, [r5, r2]\n    ldr r3, [sp, #4]\n    add r0, r5, #0\n    add r1, r6, #0\n    bl ov49_0225BABC\n    mov r2, #0x53\n    lsl r2, r2, #2\n    add r0, r5, #0\n    ldr r2, [r5, r2]\n    add r0, #8\n    add r1, r6, #0\n    add r3, r4, #0\n    bl ov49_0225BB84\n    mov r2, #0x45\n    lsl r2, r2, #2\n    add r0, r5, r2\n    add r2, #0x38\n    ldr r2, [r5, r2]\n    add r1, r6, #0\n    add r3, r4, #0\n    bl ov49_0225C844\n    mov r1, #0\n    strb r1, [r5, #2]\n    strb r1, [r5, #1]\n    ldrh r0, [r7, #6]\n    cmp r0, #0\n    bne _0225B4DC\n    mov r0, #4\n    strb r1, [r5]\n    bl BG_SetMaskColor\n    mov r0, #1\n    mov r1, #0\n    bl GfGfx_EngineBTogglePlanes\n    mov r0, #2\n    mov r1, #0\n    bl GfGfx_EngineBTogglePlanes\n    mov r0, #4\n    mov r1, #0\n    bl GfGfx_EngineBTogglePlanes\n    mov r0, #8\n    mov r1, #0\n    bl GfGfx_EngineBTogglePlanes\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #5\n    strb r0, [r5]\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov49_0225B4E4(void) {
    /* Original at 0x0225B4E4 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    mov r0, #0x45\n    lsl r0, r0, #2\n    add r0, r5, r0\n    add r6, r1, #0\n    add r4, r2, #0\n    bl ov49_0225C8A8\n    add r0, r5, #0\n    add r0, #8\n    add r1, r6, #0\n    add r2, r4, #0\n    bl ov49_0225BBA8\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov49_0225BB10\n    mov r0, #0x53\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl NARC_Delete\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov49_0225B518(void) {
    /* Original at 0x0225B518 */
    /* Requires manual decompilation - 380 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x50\n    add r5, r1, #0\n    add r4, r0, #0\n    add r0, r5, #0\n    str r0, [sp, #0x38]\n    add r0, #0x3c\n    str r0, [sp, #0x38]\n    mov r0, #0xb7\n    lsl r0, r0, #2\n    ldrb r1, [r4]\n    add r7, r3, #0\n    ldr r6, [r5, #0x34]\n    str r0, [sp, #0x3c]\n    cmp r1, #0xa\n    bhi _0225B5FA\n    add r0, r1, r1\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0225B544: ; jump table\n    ldrh r0, [r4, #6]\n    cmp r0, #1\n    bne _0225B5FA\n    add r0, r1, #1\n    add sp, #0x50\n    strb r0, [r4]\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #4\n    str r0, [sp]\n    mov r1, #1\n    str r1, [sp, #4]\n    mov r1, #0\n    ldr r3, _0225B890 ; =0x00007FFF\n    str r7, [sp, #8]\n    add r2, r1, #0\n    bl BeginNormalPaletteFade\n    ldrb r0, [r4]\n    add sp, #0x50\n    add r0, r0, #1\n    strb r0, [r4]\n    pop {r3, r4, r5, r6, r7, pc}\n    bl IsPaletteFadeFinished\n    cmp r0, #1\n    bne _0225B5FA\n    add r0, r6, #0\n    bl ov45_0222A5C0\n    mov r2, #0xb7\n    lsl r2, r2, #2\n    str r0, [sp]\n    ldr r1, [sp, #0x38]\n    add r0, r4, #0\n    add r2, r5, r2\n    add r3, r7, #0\n    bl ov49_0225B9AC\n    mov r0, #4\n    strb r0, [r4, #1]\n    mov r0, #1\n    add r1, r0, #0\n    bl GfGfx_EngineBTogglePlanes\n    mov r0, #2\n    mov r1, #1\n    bl GfGfx_EngineBTogglePlanes\n    mov r0, #4\n    mov r1, #1\n    bl GfGfx_EngineBTogglePlanes\n    mov r0, #0x10\n    mov r1, #1\n    bl GfGfx_EngineBTogglePlanes\n    ldrb r0, [r4]\n    add sp, #0x50\n    add r0, r0, #1\n    strb r0, [r4]\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #6\n    str r0, [sp]\n    mov r1, #1\n    str r1, [sp, #4]\n    ldr r3, _0225B890 ; =0x00007FFF\n    str r7, [sp, #8]\n    mov r0, #4\n    add r2, r1, #0\n    bl BeginNormalPaletteFade\n    ldrb r0, [r4]\n    add sp, #0x50\n    add r0, r0, #1\n    strb r0, [r4]\n    pop {r3, r4, r5, r6, r7, pc}\n    bl IsPaletteFadeFinished\n    cmp r0, #1\n    beq _0225B5FC\n    b _0225B88C\n    ldrb r0, [r4]\n    add sp, #0x50\n    add r0, r0, #1\n    strb r0, [r4]\n    pop {r3, r4, r5, r6, r7, pc}\n    cmp r2, #1\n    beq _0225B708\n    ldrb r0, [r4, #1]\n    cmp r0, #4\n    bhi _0225B6D2\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0225B61C: ; jump table\n    mov r2, #0x45\n    lsl r2, r2, #2\n    add r0, r4, r2\n    add r2, #0x38\n    ldr r1, [sp, #0x38]\n    ldr r2, [r4, r2]\n    bl ov49_0225C8D4\n    cmp r0, #1\n    bne _0225B6D2\n    add r0, r5, #0\n    bl ov49_0225B444\n    b _0225B6D2\n    ldr r2, _0225B894 ; =0x00000153\n    ldrb r0, [r4, r2]\n    cmp r0, #0\n    beq _0225B66E\n    sub r1, r2, #3\n    mov r0, #0xf7\n    sub r2, r2, #1\n    lsl r0, r0, #2\n    ldrh r1, [r4, r1]\n    ldrb r2, [r4, r2]\n    ldr r0, [r5, r0]\n    bl ov49_02268968\n    cmp r0, #0\n    bne _0225B66E\n    ldr r0, _0225B894 ; =0x00000153\n    mov r1, #0\n    strb r1, [r4, r0]\n    sub r0, #0x3f\n    add r0, r4, r0\n    bl ov49_0225CB68\n    mov r2, #0x45\n    lsl r2, r2, #2\n    add r0, r4, r2\n    add r2, #0x38\n    ldr r1, [sp, #0x38]\n    ldr r2, [r4, r2]\n    add r3, r7, #0\n    bl ov49_0225C8D4\n    cmp r0, #1\n    bne _0225B6D2\n    add r0, r6, #0\n    bl ov45_0222A53C\n    add r1, r0, #0\n    add r0, r6, #0\n    bl ov45_0222ADD8\n    add r0, r6, #0\n    bl ov45_0222AE54\n    add r0, r6, #0\n    bl ov45_0222A53C\n    add r1, r0, #0\n    add r0, r6, #0\n    bl ov45_0222ADA8\n    add r1, sp, #0x4c\n    add r2, sp, #0x48\n    bl ov45_0222AE08\n    ldr r0, _0225B894 ; =0x00000153\n    mov r1, #1\n    strb r1, [r4, r0]\n    sub r1, r0, #3\n    ldr r2, [sp, #0x4c]\n    sub r0, r0, #1\n    strh r2, [r4, r1]\n    ldr r1, [sp, #0x48]\n    strb r1, [r4, r0]\n    b _0225B6D2\n    ldr r1, [sp, #0x3c]\n    add r0, r4, #0\n    add r1, #0x3c\n    str r1, [sp, #0x3c]\n    add r0, #8\n    add r1, r5, r1\n    bl ov49_0225BBCC\n    ldrb r0, [r4, #2]\n    cmp r0, #0\n    beq _0225B708\n    ldrb r0, [r4]\n    add sp, #0x50\n    add r0, r0, #1\n    strb r0, [r4]\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #3\n    str r0, [sp]\n    mov r1, #1\n    str r1, [sp, #4]\n    mov r2, #0\n    str r7, [sp, #8]\n    mov r0, #4\n    add r3, r2, #0\n    bl BeginNormalPaletteFade\n    ldrb r0, [r4]\n    add sp, #0x50\n    add r0, r0, #1\n    strb r0, [r4]\n    pop {r3, r4, r5, r6, r7, pc}\n    bl IsPaletteFadeFinished\n    cmp r0, #1\n    beq _0225B70A\n    b _0225B88C\n    ldrb r0, [r4, #1]\n    cmp r0, #4\n    bhi _0225B73E\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0225B71C: ; jump table\n    ldr r1, [sp, #0x38]\n    add r0, r4, #0\n    bl ov49_0225BA20\n    b _0225B73E\n    mov r1, #0xc6\n    lsl r1, r1, #2\n    ldr r2, [sp, #0x38]\n    add r0, r4, #0\n    add r1, r5, r1\n    bl ov49_0225B99C\n    ldrb r0, [r4]\n    add sp, #0x50\n    add r0, r0, #1\n    strb r0, [r4]\n    pop {r3, r4, r5, r6, r7, pc}\n    ldrb r0, [r4, #2]\n    cmp r0, #4\n    bhi _0225B840\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0225B75A: ; jump table\n    add r0, r6, #0\n    bl ov45_0222A5C0\n    mov r2, #0xb7\n    lsl r2, r2, #2\n    str r0, [sp]\n    ldr r1, [sp, #0x38]\n    add r0, r4, #0\n    add r2, r5, r2\n    add r3, r7, #0\n    bl ov49_0225B9AC\n    b _0225B840\n    add r0, r6, #0\n    bl ov45_0222A5C0\n    str r0, [sp, #0x28]\n    ldrb r0, [r4, #3]\n    str r0, [sp, #0x24]\n    add r0, r6, #0\n    bl ov45_0222A53C\n    ldr r1, [sp, #0x24]\n    cmp r1, r0\n    bne _0225B7A4\n    add r0, r6, #0\n    bl ov45_0222A5C0\n    str r0, [sp, #0x20]\n    mov r0, #1\n    str r0, [sp, #0x2c]\n    b _0225B7B0\n    add r0, r6, #0\n    bl ov45_0222A578\n    str r0, [sp, #0x20]\n    mov r0, #0\n    str r0, [sp, #0x2c]\n    ldrb r1, [r4, #3]\n    add r0, r6, #0\n    bl ov45_0222AB28\n    str r0, [sp, #0x34]\n    ldrh r0, [r4, #4]\n    cmp r0, #1\n    bne _0225B7DC\n    ldrb r1, [r4, #3]\n    add r0, r6, #0\n    bl ov45_0222AB48\n    str r0, [sp, #0x30]\n    ldrb r1, [r4, #3]\n    add r0, r6, #0\n    bl ov45_0222AB58\n    cmp r0, #0\n    bne _0225B7E0\n    mov r1, #0\n    str r1, [sp, #0x30]\n    b _0225B7E0\n    mov r0, #0\n    str r0, [sp, #0x30]\n    ldr r1, [sp, #0x2c]\n    ldr r3, [sp, #0x3c]\n    str r1, [sp]\n    ldr r1, [sp, #0x20]\n    str r7, [sp, #4]\n    str r1, [sp, #8]\n    ldr r1, [sp, #0x28]\n    ldr r2, [sp, #0x38]\n    str r1, [sp, #0xc]\n    ldr r1, [sp, #0x34]\n    add r3, r5, r3\n    str r1, [sp, #0x10]\n    ldr r1, [sp, #0x30]\n    str r1, [sp, #0x14]\n    mov r1, #0xc6\n    str r0, [sp, #0x18]\n    mov r0, #1\n    lsl r1, r1, #2\n    str r0, [sp, #0x1c]\n    add r0, r4, #0\n    add r1, r5, r1\n    bl ov49_0225B944\n    b _0225B840\n    add r0, r6, #0\n    bl ov45_0222A53C\n    add r1, r0, #0\n    add r0, r6, #0\n    bl ov45_0222ADA8\n    mov r1, #0\n    mvn r1, r1\n    cmp r0, r1\n    bne _0225B82C\n    bl GF_AssertFail\n    mov r0, #0\n    add r1, sp, #0x44\n    add r2, sp, #0x40\n    bl ov45_0222AE08\n    ldr r1, [sp, #0x38]\n    ldr r3, [sp, #0x40]\n    add r0, r4, #0\n    add r2, r7, #0\n    bl ov49_0225B9F0\n    mov r0, #0\n    strb r0, [r4, #2]\n    ldrb r0, [r4]\n    add sp, #0x50\n    add r0, r0, #1\n    strb r0, [r4]\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #3\n    str r0, [sp]\n    mov r1, #1\n    str r1, [sp, #4]\n    str r7, [sp, #8]\n    mov r0, #4\n    add r2, r1, #0\n    mov r3, #0\n    bl BeginNormalPaletteFade\n    ldrb r0, [r4, #1]\n    cmp r0, #2\n    bne _0225B876\n    mov r1, #0xc6\n    add r0, r4, #0\n    lsl r1, r1, #2\n    add r0, #8\n    add r1, r5, r1\n    bl ov49_0225BBCC\n    ldrb r0, [r4]\n    add sp, #0x50\n    add r0, r0, #1\n    strb r0, [r4]\n    pop {r3, r4, r5, r6, r7, pc}\n    bl IsPaletteFadeFinished\n    cmp r0, #1\n    bne _0225B88C\n    mov r0, #5\n    strb r0, [r4]\n    add sp, #0x50\n    pop {r3, r4, r5, r6, r7, pc}\n    _0225B890: .word 0x00007FFF\n    _0225B894: .word 0x00000153"
    );
    #endif
}

void ov49_0225B898(void) {
    /* Original at 0x0225B898 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "ldrb r0, [r0]\n    bx lr"
    );
    #endif
}

void ov49_0225B89C(void) {
    ((u8*)r0)[2] = 2;
    ((u8*)r0)[3] = r1;
    ((u16*)r0)[4] = r2;
}

void ov49_0225B8A8(void) {
    /* Original at 0x0225B8A8 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r4, r2, #0\n    add r5, r0, #0\n    add r6, r1, #0\n    add r7, r3, #0\n    cmp r4, #0x1b\n    blo _0225B8BA\n    bl GF_AssertFail\n    ldrb r0, [r5, #1]\n    cmp r0, #2\n    beq _0225B8C4\n    bl GF_AssertFail\n    ldrb r0, [r5, #1]\n    cmp r0, #2\n    bne _0225B8DE\n    mov r2, #0x53\n    str r4, [sp]\n    lsl r2, r2, #2\n    add r0, r5, #0\n    ldr r2, [r5, r2]\n    add r0, #8\n    add r1, r6, #0\n    add r3, r7, #0\n    bl ov49_0225BFC4\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov49_0225B8E0(void) {
    /* Original at 0x0225B8E0 */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "ldrb r1, [r0, #1]\n    cmp r1, #1\n    beq _0225B8EA\n    mov r1, #1\n    strb r1, [r0, #2]\n    bx lr"
    );
    #endif
}

void ov49_0225B8EC(void) {
    /* Original at 0x0225B8EC */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "ldrb r1, [r0, #1]\n    cmp r1, #3\n    beq _0225B8F6\n    mov r1, #3\n    strb r1, [r0, #2]\n    bx lr"
    );
    #endif
}

void ov49_0225B8F8(void) {
    /* Original at 0x0225B8F8 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "ldrb r0, [r0, #3]\n    bx lr"
    );
    #endif
}

void ov49_0225B8FC(void) {
    /* Original at 0x0225B8FC */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "ldrb r1, [r0, #2]\n    cmp r1, #2\n    bne _0225B906\n    mov r0, #1\n    bx lr\n    ldrb r0, [r0, #1]\n    cmp r0, #2\n    bne _0225B910\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void ov49_0225B914(void) {
    /* Original at 0x0225B914 */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "ldrb r1, [r0, #2]\n    cmp r1, #0\n    bne _0225B924\n    ldrb r0, [r0, #1]\n    cmp r0, #2\n    bne _0225B924\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void ov49_0225B928(void) {
    ov49_0225BFEC();
}

void ov49_0225B934(void) {
    /* Original at 0x0225B934 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldrb r0, [r0, #2]\n    cmp r0, #0\n    beq _0225B93E\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void ov49_0225B944(void) {
    /* Original at 0x0225B944 */
    /* Requires manual decompilation - 41 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x28\n    add r5, r0, #0\n    add r4, r3, #0\n    ldrb r3, [r5, #1]\n    add r6, r1, #0\n    add r7, r2, #0\n    cmp r3, #2\n    bne _0225B95A\n    bl ov49_0225B99C\n    ldr r0, [sp, #0x40]\n    str r4, [sp]\n    str r0, [sp, #4]\n    mov r0, #0x53\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    add r2, r5, #0\n    str r0, [sp, #8]\n    ldr r0, [sp, #0x44]\n    add r1, r6, #0\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #0x48]\n    add r2, #8\n    str r0, [sp, #0x10]\n    ldr r0, [sp, #0x4c]\n    add r3, r7, #0\n    str r0, [sp, #0x14]\n    ldr r0, [sp, #0x50]\n    str r0, [sp, #0x18]\n    ldr r0, [sp, #0x54]\n    str r0, [sp, #0x1c]\n    ldr r0, [sp, #0x58]\n    str r0, [sp, #0x20]\n    ldr r0, [sp, #0x5c]\n    str r0, [sp, #0x24]\n    add r0, r5, #0\n    bl ov49_0225BBD0\n    mov r0, #2\n    strb r0, [r5, #1]\n    add sp, #0x28\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov49_0225B99C(void) {
    ov49_0225BF80();
}

void ov49_0225B9AC(void) {
    /* Original at 0x0225B9AC */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r5, r0, #0\n    ldrb r0, [r5, #1]\n    add r4, r1, #0\n    add r7, r2, #0\n    add r6, r3, #0\n    cmp r0, #1\n    beq _0225B9C8\n    add r0, #0xfd\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    cmp r0, #1\n    bhi _0225B9D0\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov49_0225BA20\n    mov r0, #0x53\n    lsl r0, r0, #2\n    ldr r1, [r5, r0]\n    sub r0, #0x38\n    str r1, [sp]\n    ldr r3, [sp, #0x20]\n    add r0, r5, r0\n    add r1, r4, #0\n    add r2, r7, #0\n    str r6, [sp, #4]\n    bl ov49_0225C970\n    mov r0, #1\n    strb r0, [r5, #1]\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov49_0225B9F0(void) {
    /* Original at 0x0225B9F0 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r4, r2, #0\n    ldrb r2, [r5, #1]\n    add r6, r1, #0\n    add r7, r3, #0\n    cmp r2, #3\n    bne _0225BA04\n    bl ov49_0225BA20\n    mov r3, #0x45\n    lsl r3, r3, #2\n    add r0, r5, r3\n    str r4, [sp]\n    add r3, #0x38\n    ldr r3, [r5, r3]\n    add r1, r6, #0\n    add r2, r7, #0\n    bl ov49_0225CA30\n    mov r0, #3\n    strb r0, [r5, #1]\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov49_0225BA20(void) {
    ov49_0225CAA8(0, 0x45);
}

void ov49_0225BA34(void) {
    /* Original at 0x0225BA34 */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "ldr r2, _0225BA3C ; =0x0000011A\n    strh r1, [r0, r2]\n    bx lr\n    nop\n    _0225BA3C: .word 0x0000011A"
    );
    #endif
}

void ov49_0225BA40(void) {
    /* Original at 0x0225BA40 */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "add r1, r0, #0\n    mov r0, #0x55\n    lsl r0, r0, #2\n    strh r2, [r1, r0]\n    add r0, r0, #2\n    strh r3, [r1, r0]\n    ldr r3, _0225BA54 ; =SysTask_CreateOnVWaitQueue\n    ldr r0, _0225BA58 ; =ov49_0225BA5C\n    mov r2, #0\n    bx r3\n    _0225BA54: .word SysTask_CreateOnVWaitQueue\n    _0225BA58: .word ov49_0225BA5C"
    );
    #endif
}

void ov49_0225BA5C(void) {
    /* Original at 0x0225BA5C */
    /* Requires manual decompilation - 41 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #8\n    add r4, r1, #0\n    mov r3, #0\n    ldr r1, _0225BAB8 ; =0x00000156\n    str r3, [sp]\n    add r5, r0, #0\n    ldrh r0, [r4, r1]\n    mov r2, #4\n    str r0, [sp, #4]\n    add r0, r1, #0\n    sub r1, r1, #2\n    sub r0, #0xa\n    ldrh r1, [r4, r1]\n    ldr r0, [r4, r0]\n    bl GfGfxLoader_GXLoadPalFromOpenNarc\n    mov r1, #0xa0\n    add r2, r1, #0\n    add r2, #0xb6\n    ldrh r2, [r4, r2]\n    mov r0, #4\n    bl LoadFontPal0\n    bl sub_020776B4\n    add r6, r0, #0\n    bl sub_02077690\n    add r1, r0, #0\n    mov r0, #0x60\n    str r0, [sp]\n    add r0, #0xf6\n    ldrh r0, [r4, r0]\n    mov r3, #0x16\n    mov r2, #4\n    str r0, [sp, #4]\n    add r0, r6, #0\n    lsl r3, r3, #4\n    bl GfGfxLoader_GXLoadPal\n    add r0, r5, #0\n    bl SysTask_Destroy\n    add sp, #8\n    pop {r4, r5, r6, pc}\n    _0225BAB8: .word 0x00000156"
    );
    #endif
}

void ov49_0225BABC(void) {
    /* Original at 0x0225BABC */
    /* Requires manual decompilation - 38 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x10\n    add r6, r1, #0\n    add r5, r2, #0\n    ldr r4, [sp, #0x20]\n    cmp r3, #0\n    bne _0225BADC\n    mov r3, #0\n    str r3, [sp]\n    add r0, r5, #0\n    mov r1, #0x56\n    mov r2, #4\n    str r4, [sp, #4]\n    bl GfGfxLoader_GXLoadPalFromOpenNarc\n    b _0225BAEC\n    mov r3, #0\n    str r3, [sp]\n    add r0, r5, #0\n    mov r1, #0x57\n    mov r2, #4\n    str r4, [sp, #4]\n    bl GfGfxLoader_GXLoadPalFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    str r4, [sp, #0xc]\n    ldr r2, [r6]\n    add r0, r5, #0\n    mov r1, #0x36\n    mov r3, #4\n    bl GfGfxLoader_LoadCharDataFromOpenNarc\n    mov r0, #4\n    mov r1, #0xa0\n    add r2, r4, #0\n    bl LoadFontPal0\n    add sp, #0x10\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov49_0225BB10(void) {
    /* Original at 0x0225BB10 */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void ov49_0225BB14(void) {
    /* Original at 0x0225BB14 */
    /* Requires manual decompilation - 51 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    ldr r0, [sp, #0x2c]\n    add r6, r3, #0\n    str r0, [sp]\n    add r0, r1, #0\n    add r1, r2, #0\n    mov r2, #0\n    add r3, sp, #0xc\n    ldr r4, [sp, #0x28]\n    bl GfGfxLoader_GetScrnDataFromOpenNarc\n    ldr r2, [sp, #0xc]\n    add r7, r0, #0\n    ldr r0, [r2, #8]\n    add r2, #0xc\n    lsr r1, r0, #1\n    mov r0, #0\n    cmp r1, #0\n    ble _0225BB4C\n    ldrh r3, [r2]\n    add r0, r0, #1\n    add r3, r3, r4\n    strh r3, [r2]\n    add r2, r2, #2\n    cmp r0, r1\n    blt _0225BB3E\n    ldr r2, [sp, #0xc]\n    mov r3, #0\n    str r3, [sp]\n    ldrh r0, [r2]\n    lsl r1, r6, #0x18\n    lsr r1, r1, #0x18\n    lsl r0, r0, #0x15\n    lsr r0, r0, #0x18\n    str r0, [sp, #4]\n    ldrh r0, [r2, #2]\n    add r2, #0xc\n    lsl r0, r0, #0x15\n    lsr r0, r0, #0x18\n    str r0, [sp, #8]\n    ldr r0, [r5]\n    bl LoadRectToBgTilemapRect\n    lsl r1, r6, #0x18\n    ldr r0, [r5]\n    lsr r1, r1, #0x18\n    bl ScheduleBgTilemapBufferTransfer\n    add r0, r7, #0\n    bl Heap_Free\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov49_0225BB84(void) {
    /* Original at 0x0225BB84 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    ldr r4, _0225BBA4 ; =ov49_022697F4\n    add r7, r1, #0\n    mov r6, #0\n    add r5, r0, #4\n    ldr r0, [r7]\n    add r1, r5, #0\n    add r2, r4, #0\n    bl AddWindow\n    add r6, r6, #1\n    add r4, #8\n    add r5, #0x10\n    cmp r6, #5\n    blt _0225BB8E\n    pop {r3, r4, r5, r6, r7, pc}\n    _0225BBA4: .word ov49_022697F4"
    );
    #endif
}

void ov49_0225BBA8(void) {
    /* Original at 0x0225BBA8 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    ldr r3, [r4, #0x54]\n    cmp r3, #0\n    beq _0225BBB6\n    bl ov49_0225BF80\n    mov r5, #0\n    add r4, r4, #4\n    add r0, r4, #0\n    bl RemoveWindow\n    add r5, r5, #1\n    add r4, #0x10\n    cmp r5, #5\n    blt _0225BBBA\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov49_0225BBCC(void) {
    /* Original at 0x0225BBCC */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void ov49_0225BBD0(void) {
    /* Original at 0x0225BBD0 */
    /* Requires manual decompilation - 313 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #0x30]\n    ldr r4, [sp, #0x28]\n    str r0, [sp, #0x30]\n    ldr r0, [sp, #0x34]\n    add r5, r2, #0\n    str r0, [sp, #0x34]\n    ldr r0, [sp, #0x38]\n    add r6, r3, #0\n    str r0, [sp, #0x38]\n    add r0, r4, #0\n    bl ov49_0225B438\n    ldr r0, [sp, #0x38]\n    bl ov45_0222A9CC\n    cmp r0, #0\n    bne _0225BC1C\n    ldr r0, [sp, #0x40]\n    ldr r7, _0225BE98 ; =0x00070800\n    cmp r0, #0\n    bne _0225BC0E\n    ldr r0, [sp, #0xc]\n    ldr r3, [sp, #0x34]\n    add r1, r6, #0\n    mov r2, #0x56\n    bl ov49_0225BA40\n    b _0225BC40\n    ldr r0, [sp, #0xc]\n    ldr r3, [sp, #0x34]\n    add r1, r6, #0\n    mov r2, #0x58\n    bl ov49_0225BA40\n    b _0225BC40\n    ldr r0, [sp, #0x40]\n    mov r7, #0xc1\n    lsl r7, r7, #0xa\n    cmp r0, #0\n    bne _0225BC34\n    ldr r0, [sp, #0xc]\n    ldr r3, [sp, #0x34]\n    add r1, r6, #0\n    mov r2, #0x57\n    bl ov49_0225BA40\n    b _0225BC40\n    ldr r0, [sp, #0xc]\n    ldr r3, [sp, #0x34]\n    add r1, r6, #0\n    mov r2, #0x58\n    bl ov49_0225BA40\n    ldr r0, [r6]\n    mov r1, #4\n    mov r2, #0\n    bl BgFillTilemapBufferAndSchedule\n    ldr r0, [r6]\n    mov r1, #5\n    mov r2, #0\n    bl BgFillTilemapBufferAndSchedule\n    ldr r0, [r6]\n    mov r1, #6\n    mov r2, #0\n    bl BgFillTilemapBufferAndSchedule\n    add r0, r5, #0\n    bl ov49_0225C3C0\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, [sp, #0x34]\n    ldr r1, [sp, #0x30]\n    str r0, [sp, #4]\n    add r0, r6, #0\n    mov r2, #0x5c\n    mov r3, #4\n    bl ov49_0225BB14\n    ldr r0, [sp, #0x34]\n    bl PlayerProfile_New\n    str r0, [sp, #0x10]\n    ldr r0, [sp, #0x38]\n    ldr r1, [sp, #0x10]\n    ldr r2, [sp, #0x34]\n    bl ov45_0222A844\n    mov r2, #0\n    str r2, [sp]\n    str r2, [sp, #4]\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r3, #0x2c\n    str r7, [sp, #8]\n    bl ov49_0225C3DC\n    ldr r0, [sp, #0x10]\n    bl PlayerProfile_GetTrainerID_VisibleHalf\n    add r1, r0, #0\n    mov r0, #2\n    str r0, [sp]\n    add r0, r4, #0\n    mov r2, #5\n    mov r3, #0\n    bl ov49_0225B3A8\n    mov r0, #0x7a\n    str r0, [sp]\n    mov r2, #0\n    ldr r0, _0225BE9C ; =0x00010200\n    str r2, [sp, #4]\n    str r0, [sp, #8]\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r3, #0x31\n    bl ov49_0225C414\n    mov r2, #0\n    str r2, [sp]\n    mov r0, #0x10\n    str r0, [sp, #4]\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r3, #0x2d\n    str r7, [sp, #8]\n    bl ov49_0225C3DC\n    ldr r2, [sp, #0x10]\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov49_0225C470\n    mov r0, #0x7a\n    str r0, [sp]\n    mov r0, #0x10\n    str r0, [sp, #4]\n    ldr r0, _0225BE9C ; =0x00010200\n    add r1, r4, #0\n    str r0, [sp, #8]\n    add r0, r5, #0\n    mov r2, #0\n    mov r3, #0x32\n    bl ov49_0225C414\n    add r0, r5, #0\n    mov r1, #0\n    bl ov49_0225C460\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #1\n    mov r3, #0x2e\n    str r7, [sp, #8]\n    bl ov49_0225C3DC\n    ldr r0, [sp, #0x38]\n    bl ov45_0222AA84\n    cmp r0, #0\n    bne _0225BD3E\n    mov r0, #0x20\n    str r0, [sp]\n    mov r0, #0x10\n    str r0, [sp, #4]\n    ldr r0, _0225BE9C ; =0x00010200\n    add r1, r4, #0\n    str r0, [sp, #8]\n    add r0, r5, #0\n    mov r2, #1\n    mov r3, #0x37\n    bl ov49_0225C3DC\n    b _0225BD60\n    ldr r2, [sp, #0x38]\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov49_0225C480\n    mov r0, #0x20\n    str r0, [sp]\n    mov r0, #0x10\n    str r0, [sp, #4]\n    ldr r0, _0225BE9C ; =0x00010200\n    add r1, r4, #0\n    str r0, [sp, #8]\n    add r0, r5, #0\n    mov r2, #1\n    mov r3, #0x33\n    bl ov49_0225C3DC\n    add r0, r5, #0\n    mov r1, #1\n    bl ov49_0225C460\n    ldr r0, [sp, #0x44]\n    cmp r0, #0\n    beq _0225BE06\n    mov r0, #1\n    str r0, [r5]\n    ldr r2, [sp, #0x10]\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov49_0225C470\n    mov r0, #8\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #4\n    mov r3, #0x38\n    str r7, [sp, #8]\n    bl ov49_0225C3DC\n    ldr r2, [sp, #0x48]\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov49_0225C4B0\n    mov r0, #6\n    str r0, [sp]\n    mov r0, #0x18\n    str r0, [sp, #4]\n    ldr r0, _0225BE9C ; =0x00010200\n    add r1, r4, #0\n    str r0, [sp, #8]\n    add r0, r5, #0\n    mov r2, #4\n    mov r3, #0x3b\n    bl ov49_0225C3DC\n    mov r0, #0x5a\n    str r0, [sp]\n    mov r0, #0x18\n    str r0, [sp, #4]\n    ldr r0, _0225BE9C ; =0x00010200\n    add r1, r4, #0\n    str r0, [sp, #8]\n    add r0, r5, #0\n    mov r2, #4\n    mov r3, #0x3c\n    bl ov49_0225C3DC\n    mov r0, #6\n    str r0, [sp]\n    mov r0, #0x2c\n    str r0, [sp, #4]\n    ldr r0, _0225BE9C ; =0x00010200\n    add r1, r4, #0\n    str r0, [sp, #8]\n    add r0, r5, #0\n    mov r2, #4\n    mov r3, #0x3d\n    bl ov49_0225C3DC\n    mov r0, #0x5a\n    str r0, [sp]\n    mov r0, #0x2c\n    str r0, [sp, #4]\n    ldr r0, _0225BE9C ; =0x00010200\n    add r1, r4, #0\n    str r0, [sp, #8]\n    add r0, r5, #0\n    mov r2, #4\n    mov r3, #0x3e\n    bl ov49_0225C3DC\n    add r0, r5, #0\n    mov r1, #4\n    bl ov49_0225C460\n    b _0225BE3A\n    mov r1, #0\n    str r1, [r5]\n    mov r0, #8\n    str r0, [sp]\n    str r1, [sp, #4]\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #4\n    mov r3, #0x30\n    str r7, [sp, #8]\n    bl ov49_0225C3DC\n    add r0, r5, #0\n    mov r1, #4\n    bl ov49_0225C460\n    ldr r0, [sp, #0x38]\n    ldr r2, [sp, #0x30]\n    str r0, [sp]\n    ldr r0, [sp, #0x3c]\n    ldr r3, [sp, #0x34]\n    str r0, [sp, #4]\n    add r0, r5, #0\n    add r1, r6, #0\n    bl ov49_0225C4CC\n    ldr r0, [sp, #0x38]\n    bl ov45_0222AAC8\n    str r0, [sp]\n    ldr r0, [sp, #0x4c]\n    ldr r2, [sp, #0x30]\n    str r0, [sp, #4]\n    ldr r3, [sp, #0x34]\n    add r0, r5, #0\n    add r1, r6, #0\n    bl ov49_0225BFF0\n    ldr r0, [sp, #0x2c]\n    cmp r0, #1\n    bne _0225BE6A\n    ldr r0, [sp, #0x38]\n    bl ov45_0222A9CC\n    cmp r0, #1\n    bne _0225BE66\n    mov r0, #0x61\n    b _0225BE70\n    mov r0, #0\n    b _0225BE70\n    ldr r0, [sp, #0x38]\n    bl ov45_0222AA5C\n    ldr r2, [sp, #0x30]\n    str r0, [sp]\n    ldr r3, [sp, #0x34]\n    add r0, r5, #0\n    add r1, r6, #0\n    bl ov49_0225C180\n    ldr r0, [sp, #0x38]\n    ldr r3, [sp, #0x34]\n    str r0, [sp]\n    ldr r0, [sp, #0xc]\n    add r1, r5, #0\n    add r2, r6, #0\n    bl ov49_0225BEA0\n    ldr r0, [sp, #0x10]\n    bl Heap_Free\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    _0225BE98: .word 0x00070800\n    _0225BE9C: .word 0x00010200"
    );
    #endif
}

void ov49_0225BEA0(void) {
    /* Original at 0x0225BEA0 */
    /* Requires manual decompilation - 98 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x34\n    ldr r0, [sp, #0x48]\n    ldr r6, _0225BF78 ; =ov49_0226978C\n    str r0, [sp, #0x48]\n    mov r0, #0\n    str r0, [sp, #0x24]\n    ldr r0, _0225BF7C ; =ov49_022696F8\n    add r5, r2, #0\n    str r3, [sp, #0x1c]\n    str r0, [sp, #0x20]\n    mov r4, #2\n    ldr r0, [sp, #0x48]\n    ldr r1, [sp, #0x24]\n    bl ov45_0222AAEC\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    beq _0225BF60\n    bl ov45_0222D7C0\n    lsl r0, r0, #0x10\n    lsr r7, r0, #0x10\n    bl sub_020776B4\n    str r0, [sp, #0x28]\n    add r0, r7, #0\n    bl sub_02077678\n    add r1, r0, #0\n    mov r0, #1\n    str r0, [sp]\n    ldr r0, [sp, #0x28]\n    ldr r3, [sp, #0x1c]\n    mov r2, #1\n    bl GfGfxLoader_LoadFromNarc\n    add r1, sp, #0x30\n    str r0, [sp, #0x2c]\n    bl NNS_G2dGetUnpackedCharacterData\n    ldr r0, [sp, #0x20]\n    mov r1, #6\n    ldrh r0, [r0]\n    add r3, r1, #0\n    add r3, #0xfa\n    str r0, [sp]\n    ldr r2, [sp, #0x30]\n    ldr r0, [r5]\n    ldr r2, [r2, #0x14]\n    bl BG_LoadCharTilesData\n    ldr r0, [sp, #0x2c]\n    bl Heap_Free\n    mov r0, #4\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    lsl r3, r4, #0x18\n    str r6, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    str r0, [sp, #0x10]\n    mov r0, #4\n    str r0, [sp, #0x14]\n    mov r0, #2\n    str r0, [sp, #0x18]\n    ldr r0, [r5]\n    mov r1, #6\n    mov r2, #0x1a\n    lsr r3, r3, #0x18\n    bl CopyToBgTilemapRect\n    add r0, r7, #0\n    bl sub_0207769C\n    mov r1, #4\n    add r0, #0xb\n    str r1, [sp]\n    mov r1, #2\n    lsl r0, r0, #0x18\n    str r1, [sp, #4]\n    lsr r0, r0, #0x18\n    str r0, [sp, #8]\n    lsl r3, r4, #0x18\n    ldr r0, [r5]\n    mov r1, #6\n    mov r2, #0x1a\n    lsr r3, r3, #0x18\n    bl BgTilemapRectChangePalette\n    ldr r0, [r5]\n    mov r1, #6\n    bl ScheduleBgTilemapBufferTransfer\n    ldr r0, [sp, #0x20]\n    add r6, #0x10\n    add r0, r0, #2\n    str r0, [sp, #0x20]\n    ldr r0, [sp, #0x24]\n    add r4, r4, #2\n    add r0, r0, #1\n    str r0, [sp, #0x24]\n    cmp r0, #2\n    blt _0225BEB8\n    add sp, #0x34\n    pop {r4, r5, r6, r7, pc}\n    _0225BF78: .word ov49_0226978C\n    _0225BF7C: .word ov49_022696F8"
    );
    #endif
}

void ov49_0225BF80(void) {
    /* Original at 0x0225BF80 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r1, [r5]\n    add r4, r2, #0\n    cmp r1, #1\n    bne _0225BF92\n    mov r0, #0\n    str r0, [r5]\n    b _0225BF98\n    add r1, r4, #0\n    bl ov49_0225C78C\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov49_0225C148\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov49_0225C328\n    ldr r0, [r4]\n    mov r1, #4\n    bl BgClearTilemapBufferAndCommit\n    ldr r0, [r4]\n    mov r1, #5\n    bl BgClearTilemapBufferAndCommit\n    ldr r0, [r4]\n    mov r1, #6\n    bl BgClearTilemapBufferAndCommit\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov49_0225BFC4(void) {
    /* Original at 0x0225BFC4 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r5, r0, #0\n    add r4, r1, #0\n    add r6, r2, #0\n    add r7, r3, #0\n    bl ov49_0225C148\n    ldr r0, [sp, #0x20]\n    add r1, r4, #0\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    add r0, r5, #0\n    add r2, r6, #0\n    add r3, r7, #0\n    bl ov49_0225BFF0\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov49_0225BFEC(void) {
    /* Original at 0x0225BFEC */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0]\n    bx lr"
    );
    #endif
}

void ov49_0225BFF0(void) {
    /* Original at 0x0225BFF0 */
    /* Requires manual decompilation - 154 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x7c\n    add r5, r0, #0\n    ldr r0, [sp, #0x90]\n    add r4, r1, #0\n    add r6, r3, #0\n    str r2, [sp, #0x2c]\n    cmp r0, #0x1b\n    blo _0225C006\n    bl GF_AssertFail\n    ldr r0, [r5, #0x54]\n    cmp r0, #0\n    beq _0225C010\n    bl GF_AssertFail\n    ldr r0, [sp, #0x90]\n    mov r1, #3\n    bl _u32_div_f\n    add r7, r0, #0\n    ldr r0, [sp, #0x90]\n    mov r1, #3\n    bl _u32_div_f\n    str r1, [sp, #0x30]\n    lsl r0, r7, #1\n    str r0, [sp, #0x34]\n    mov r1, #0x64\n    str r1, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    ldr r2, [sp, #0x34]\n    str r6, [sp, #8]\n    add r1, #0xcc\n    ldr r0, [r4, r1]\n    add r2, r7, r2\n    ldr r1, [sp, #0x2c]\n    add r2, #0x3d\n    mov r3, #0\n    bl AddCharResObjFromOpenNarc\n    str r0, [r5, #0x58]\n    bl sub_0200ADA4\n    cmp r0, #0\n    bne _0225C052\n    bl GF_AssertFail\n    ldr r0, [r5, #0x58]\n    bl sub_0200A740\n    mov r1, #0x64\n    str r1, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    mov r0, #3\n    str r0, [sp, #8]\n    str r6, [sp, #0xc]\n    add r1, #0xd0\n    ldr r0, [r4, r1]\n    ldr r1, [sp, #0x2c]\n    mov r2, #0x59\n    mov r3, #0\n    bl AddPlttResObjFromOpenNarc\n    str r0, [r5, #0x5c]\n    bl sub_0200B00C\n    cmp r0, #0\n    bne _0225C082\n    bl GF_AssertFail\n    ldr r0, [r5, #0x5c]\n    bl sub_0200A740\n    mov r1, #0x64\n    str r1, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    ldr r2, [sp, #0x34]\n    str r6, [sp, #8]\n    add r1, #0xd4\n    ldr r0, [r4, r1]\n    add r2, r7, r2\n    ldr r1, [sp, #0x2c]\n    add r2, #0x3c\n    mov r3, #0\n    bl AddCellOrAnimResObjFromOpenNarc\n    str r0, [r5, #0x60]\n    mov r1, #0x64\n    str r1, [sp]\n    mov r0, #3\n    str r0, [sp, #4]\n    ldr r2, [sp, #0x34]\n    str r6, [sp, #8]\n    add r1, #0xd8\n    ldr r0, [r4, r1]\n    add r2, r7, r2\n    ldr r1, [sp, #0x2c]\n    add r2, #0x3b\n    mov r3, #0\n    bl AddCellOrAnimResObjFromOpenNarc\n    str r0, [r5, #0x64]\n    mov r0, #0\n    add r2, sp, #0x38\n    add r1, r0, #0\n    stmia r2!, {r0, r1}\n    stmia r2!, {r0, r1}\n    stmia r2!, {r0, r1}\n    stmia r2!, {r0, r1}\n    mov r1, #0x64\n    add r2, r1, #0\n    str r1, [sp]\n    sub r2, #0x65\n    str r2, [sp, #4]\n    str r2, [sp, #8]\n    str r0, [sp, #0xc]\n    add r2, r1, #0\n    str r0, [sp, #0x10]\n    add r2, #0xcc\n    ldr r2, [r4, r2]\n    add r3, r1, #0\n    str r2, [sp, #0x14]\n    add r2, r1, #0\n    add r2, #0xd0\n    ldr r2, [r4, r2]\n    str r2, [sp, #0x18]\n    add r2, r1, #0\n    add r2, #0xd4\n    ldr r2, [r4, r2]\n    str r2, [sp, #0x1c]\n    add r2, r1, #0\n    add r2, #0xd8\n    ldr r2, [r4, r2]\n    str r2, [sp, #0x20]\n    str r0, [sp, #0x24]\n    str r0, [sp, #0x28]\n    add r0, sp, #0x58\n    add r2, r1, #0\n    bl CreateSpriteResourcesHeader\n    ldr r0, [r4, #4]\n    str r0, [sp, #0x38]\n    add r0, sp, #0x58\n    str r0, [sp, #0x3c]\n    mov r0, #0x10\n    str r0, [sp, #0x4c]\n    mov r0, #2\n    str r0, [sp, #0x50]\n    mov r0, #0xd\n    lsl r0, r0, #0x10\n    str r0, [sp, #0x40]\n    mov r0, #0x66\n    lsl r0, r0, #0xe\n    str r0, [sp, #0x44]\n    add r0, sp, #0x38\n    str r6, [sp, #0x54]\n    bl Sprite_Create\n    ldr r1, [sp, #0x30]\n    str r0, [r5, #0x54]\n    bl Sprite_SetAnimCtrlSeq\n    ldr r0, [r5, #0x54]\n    ldr r1, [sp, #0x94]\n    bl Sprite_SetDrawFlag\n    add sp, #0x7c\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov49_0225C148(void) {
    /* Original at 0x0225C148 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0x54]\n    add r4, r1, #0\n    bl Sprite_Delete\n    mov r0, #0\n    str r0, [r5, #0x54]\n    ldr r0, [r5, #0x58]\n    bl sub_0200AEB0\n    ldr r0, [r5, #0x5c]\n    bl sub_0200B0A8\n    mov r7, #0x13\n    mov r6, #0\n    lsl r7, r7, #4\n    ldr r0, [r4, r7]\n    ldr r1, [r5, #0x58]\n    bl DestroySingle2DGfxResObj\n    add r6, r6, #1\n    add r5, r5, #4\n    add r4, r4, #4\n    cmp r6, #4\n    blt _0225C16A\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov49_0225C180(void) {
    /* Original at 0x0225C180 */
    /* Requires manual decompilation - 186 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x94\n    add r6, r0, #0\n    ldr r0, [r6, #0x68]\n    add r5, r1, #0\n    str r3, [sp, #0x2c]\n    ldr r4, [sp, #0xa8]\n    cmp r0, #0\n    beq _0225C196\n    bl GF_AssertFail\n    ldr r1, _0225C324 ; =ov49_0226988C\n    mov r0, #0\n    ldrh r2, [r1]\n    cmp r4, r2\n    bne _0225C1AA\n    ldrh r2, [r1, #2]\n    str r2, [sp, #0x34]\n    ldrh r2, [r1, #4]\n    str r2, [sp, #0x30]\n    ldrh r7, [r1, #6]\n    add r0, r0, #1\n    add r1, #8\n    cmp r0, #0x12\n    blo _0225C19A\n    ldr r0, [sp, #0x34]\n    mov r1, #2\n    add r2, sp, #0x7c\n    bl sub_02070D84\n    mov r1, #0x65\n    str r1, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x2c]\n    add r1, #0xcb\n    str r0, [sp, #8]\n    ldr r0, [r5, r1]\n    ldr r1, [sp, #0x7c]\n    ldr r2, [sp, #0x80]\n    mov r3, #0\n    bl AddCharResObjFromNarc\n    str r0, [r6, #0x6c]\n    bl sub_0200ADA4\n    cmp r0, #0\n    bne _0225C1E4\n    bl GF_AssertFail\n    mov r1, #0x65\n    str r1, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    ldr r0, [sp, #0x2c]\n    add r1, #0xcf\n    str r0, [sp, #0xc]\n    ldr r0, [r5, r1]\n    ldr r1, [sp, #0x7c]\n    ldr r2, [sp, #0x84]\n    mov r3, #0\n    bl AddPlttResObjFromNarc\n    str r0, [r6, #0x70]\n    bl GF2DGfxResObj_GetPlttDataPtr\n    bl ov49_0225C368\n    ldr r0, [r6, #0x70]\n    bl sub_0200B00C\n    cmp r0, #0\n    bne _0225C21A\n    bl GF_AssertFail\n    ldr r0, [r6, #0x70]\n    bl sub_0200A740\n    mov r1, #0x65\n    str r1, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x2c]\n    add r1, #0xd3\n    str r0, [sp, #8]\n    ldr r0, [r5, r1]\n    ldr r1, [sp, #0x7c]\n    ldr r2, [sp, #0x88]\n    mov r3, #0\n    bl AddCellOrAnimResObjFromNarc\n    str r0, [r6, #0x74]\n    mov r1, #0x65\n    str r1, [sp]\n    mov r0, #3\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x2c]\n    add r1, #0xd7\n    str r0, [sp, #8]\n    ldr r0, [r5, r1]\n    ldr r1, [sp, #0x7c]\n    ldr r2, [sp, #0x8c]\n    mov r3, #0\n    bl AddCellOrAnimResObjFromNarc\n    str r0, [r6, #0x78]\n    mov r0, #0\n    add r2, sp, #0x38\n    add r1, r0, #0\n    stmia r2!, {r0, r1}\n    stmia r2!, {r0, r1}\n    stmia r2!, {r0, r1}\n    stmia r2!, {r0, r1}\n    mov r1, #0x65\n    add r2, r1, #0\n    str r1, [sp]\n    sub r2, #0x66\n    str r2, [sp, #4]\n    str r2, [sp, #8]\n    mov r2, #1\n    str r2, [sp, #0xc]\n    mov r2, #3\n    str r2, [sp, #0x10]\n    add r2, r1, #0\n    add r2, #0xcb\n    ldr r2, [r5, r2]\n    add r3, r1, #0\n    str r2, [sp, #0x14]\n    add r2, r1, #0\n    add r2, #0xcf\n    ldr r2, [r5, r2]\n    str r2, [sp, #0x18]\n    add r2, r1, #0\n    add r2, #0xd3\n    ldr r2, [r5, r2]\n    str r2, [sp, #0x1c]\n    add r2, r1, #0\n    add r2, #0xd7\n    ldr r2, [r5, r2]\n    str r2, [sp, #0x20]\n    str r0, [sp, #0x24]\n    str r0, [sp, #0x28]\n    add r0, sp, #0x58\n    add r2, r1, #0\n    bl CreateSpriteResourcesHeader\n    ldr r0, [r5, #4]\n    str r0, [sp, #0x38]\n    add r0, sp, #0x58\n    str r0, [sp, #0x3c]\n    mov r0, #0x20\n    str r0, [sp, #0x4c]\n    mov r0, #2\n    str r0, [sp, #0x50]\n    ldr r0, [sp, #0x2c]\n    str r0, [sp, #0x54]\n    ldr r0, [sp, #0x30]\n    cmp r0, #0\n    beq _0225C2D4\n    lsl r0, r0, #0xc\n    bl _fflt\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    b _0225C2E2\n    lsl r0, r0, #0xc\n    bl _fflt\n    mov r1, #0x3f\n    lsl r1, r1, #0x18\n    bl _fsub\n    bl _ffix\n    str r0, [sp, #0x40]\n    cmp r7, #0\n    beq _0225C2FE\n    lsl r0, r7, #0xc\n    bl _fflt\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    b _0225C30C\n    lsl r0, r7, #0xc\n    bl _fflt\n    mov r1, #0x3f\n    lsl r1, r1, #0x18\n    bl _fsub\n    bl _ffix\n    mov r1, #1\n    lsl r1, r1, #0x14\n    add r0, r0, r1\n    str r0, [sp, #0x44]\n    add r0, sp, #0x38\n    bl Sprite_Create\n    str r0, [r6, #0x68]\n    add sp, #0x94\n    pop {r4, r5, r6, r7, pc}\n    _0225C324: .word ov49_0226988C"
    );
    #endif
}

void ov49_0225C328(void) {
    /* Original at 0x0225C328 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0x68]\n    add r4, r1, #0\n    bl Sprite_GetImageProxy\n    bl ObjCharTransfer_DeleteTaskCopyByProxyPtr\n    ldr r0, [r5, #0x68]\n    bl Sprite_Delete\n    mov r0, #0\n    str r0, [r5, #0x68]\n    ldr r0, [r5, #0x6c]\n    bl sub_0200AEB0\n    ldr r0, [r5, #0x70]\n    bl sub_0200B0A8\n    mov r7, #0x13\n    mov r6, #0\n    lsl r7, r7, #4\n    ldr r0, [r4, r7]\n    ldr r1, [r5, #0x6c]\n    bl DestroySingle2DGfxResObj\n    add r6, r6, #1\n    add r5, r5, #4\n    add r4, r4, #4\n    cmp r6, #4\n    blt _0225C354\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov49_0225C368(void) {
    /* Original at 0x0225C368 */
    /* Requires manual decompilation - 44 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7}\n    ldr r1, [r0, #8]\n    ldr r4, [r0, #0xc]\n    lsr r3, r1, #1\n    mov r2, #0\n    cmp r3, #0\n    ble _0225C3BC\n    mov r5, #0xc8\n    ldrh r6, [r4]\n    mov r0, #0x1f\n    add r2, r2, #1\n    add r1, r6, #0\n    asr r7, r6, #5\n    and r1, r0\n    and r0, r7\n    asr r7, r6, #0xa\n    mov r6, #0x1f\n    and r6, r7\n    mov r7, #0x1d\n    mul r7, r6\n    mov r6, #0x4c\n    mul r6, r1\n    mov r1, #0x97\n    mul r1, r0\n    add r0, r6, r1\n    add r0, r7, r0\n    asr r6, r0, #8\n    lsl r0, r6, #8\n    add r7, r6, #0\n    asr r1, r0, #8\n    lsl r0, r6, #7\n    mul r7, r5\n    asr r0, r0, #8\n    asr r6, r7, #8\n    lsl r0, r0, #0xa\n    lsl r6, r6, #5\n    orr r0, r6\n    orr r0, r1\n    strh r0, [r4]\n    add r4, r4, #2\n    cmp r2, r3\n    blt _0225C378\n    pop {r4, r5, r6, r7}\n    bx lr"
    );
    #endif
}

void ov49_0225C3C0(void) {
    FillWindowPixelBuffer(0);
}

void ov49_0225C3DC(void) {
    /* Original at 0x0225C3DC */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    add r4, r2, #0\n    add r0, r1, #0\n    mov r1, #1\n    add r2, r3, #0\n    bl ov49_0225B388\n    add r3, sp, #0x10\n    add r2, r0, #0\n    ldrb r0, [r3, #0x14]\n    mov r1, #0\n    add r5, r5, #4\n    str r0, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x28]\n    str r0, [sp, #8]\n    str r1, [sp, #0xc]\n    lsl r0, r4, #4\n    ldrb r3, [r3, #0x10]\n    add r0, r5, r0\n    bl AddTextPrinterParameterizedWithColor\n    add sp, #0x10\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov49_0225C414(void) {
    /* Original at 0x0225C414 */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    add r4, r2, #0\n    add r0, r1, #0\n    mov r1, #1\n    add r2, r3, #0\n    bl ov49_0225B388\n    add r6, r0, #0\n    mov r0, #0\n    add r1, r6, #0\n    add r2, r0, #0\n    bl FontID_String_GetWidth\n    add r1, sp, #0x10\n    ldrb r1, [r1, #0x10]\n    sub r3, r1, r0\n    bpl _0225C43C\n    mov r3, #0\n    add r0, sp, #0x10\n    ldrb r0, [r0, #0x14]\n    add r2, r5, #4\n    mov r1, #0\n    str r0, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x28]\n    str r0, [sp, #8]\n    lsl r0, r4, #4\n    add r0, r2, r0\n    add r2, r6, #0\n    str r1, [sp, #0xc]\n    bl AddTextPrinterParameterizedWithColor\n    add sp, #0x10\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov49_0225C460(void) {
    /* Original at 0x0225C460 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _0225C46C ; =ScheduleWindowCopyToVram\n    add r2, r0, #4\n    lsl r0, r1, #4\n    add r0, r2, r0\n    bx r3\n    nop\n    _0225C46C: .word ScheduleWindowCopyToVram"
    );
    #endif
}

void ov49_0225C470(void) {
    /* Original at 0x0225C470 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _0225C47C ; =ov49_0225B3C8\n    add r0, r1, #0\n    add r1, r2, #0\n    mov r2, #0\n    bx r3\n    nop\n    _0225C47C: .word ov49_0225B3C8"
    );
    #endif
}

void ov49_0225C480(void) {
    ov45_0222AA84(r2);
    ov45_0222AAA8(r6);
    ov49_0225B408(r5, r4, 0);
    ov49_0225B418(r5, r4, r6, 1);
}

void ov49_0225C4B0(void) {
    ov49_0225B42C(0);
}

void ov49_0225C4CC(void) {
    /* Original at 0x0225C4CC */
    /* Requires manual decompilation - 318 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x98\n    add r7, r0, #0\n    ldr r0, [sp, #0xb0]\n    add r5, r1, #0\n    str r0, [sp, #0xb0]\n    mov r0, #0xd7\n    add r1, r3, #0\n    str r2, [sp, #0x2c]\n    str r3, [sp, #0x30]\n    bl NARC_New\n    str r0, [sp, #0x50]\n    ldr r0, [sp, #0xb4]\n    bl ov45_0222A99C\n    str r0, [sp, #0x44]\n    ldr r0, [sp, #0xb4]\n    bl ov45_0222A9CC\n    str r0, [sp, #0x4c]\n    ldr r0, _0225C77C ; =ov49_02269774\n    mov r6, #0\n    str r0, [sp, #0x40]\n    ldr r0, _0225C780 ; =ov49_02269704\n    add r4, r7, #0\n    str r0, [sp, #0x3c]\n    ldr r0, _0225C784 ; =ov49_022696FC\n    str r0, [sp, #0x38]\n    cmp r6, #2\n    bne _0225C526\n    ldr r0, [sp, #0x4c]\n    cmp r0, #1\n    bne _0225C546\n    add r1, r4, #0\n    add r1, #0xac\n    mov r0, #0\n    str r0, [r1]\n    add r1, r4, #0\n    add r1, #0xec\n    str r0, [r1]\n    add r1, r4, #0\n    add r1, #0xfc\n    str r0, [r1]\n    b _0225C5EC\n    cmp r6, #3\n    bne _0225C546\n    ldr r0, [sp, #0x4c]\n    cmp r0, #0\n    bne _0225C546\n    add r1, r4, #0\n    add r1, #0xac\n    mov r0, #0\n    str r0, [r1]\n    add r1, r4, #0\n    add r1, #0xec\n    str r0, [r1]\n    add r1, r4, #0\n    add r1, #0xfc\n    str r0, [r1]\n    b _0225C5EC\n    ldr r0, [sp, #0x40]\n    ldrh r0, [r0]\n    cmp r0, #0xd7\n    bne _0225C554\n    ldr r0, [sp, #0x50]\n    str r0, [sp, #0x34]\n    b _0225C558\n    ldr r0, [sp, #0x2c]\n    str r0, [sp, #0x34]\n    add r0, r6, #0\n    add r0, #0x96\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x40]\n    ldr r2, [sp, #0x40]\n    ldrh r0, [r0, #4]\n    ldr r1, [sp, #0x34]\n    mov r3, #0\n    str r0, [sp, #8]\n    ldr r0, [sp, #0x30]\n    str r0, [sp, #0xc]\n    mov r0, #0x4d\n    lsl r0, r0, #2\n    ldrh r2, [r2, #2]\n    ldr r0, [r5, r0]\n    bl AddPlttResObjFromOpenNarc\n    add r1, r4, #0\n    add r1, #0xac\n    str r0, [r1]\n    add r0, r4, #0\n    add r0, #0xac\n    ldr r0, [r0]\n    bl sub_0200B00C\n    cmp r0, #0\n    bne _0225C596\n    bl GF_AssertFail\n    add r0, r4, #0\n    add r0, #0xac\n    ldr r0, [r0]\n    bl sub_0200A740\n    add r0, r6, #0\n    add r0, #0x96\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x30]\n    ldr r2, [sp, #0x3c]\n    str r0, [sp, #8]\n    mov r0, #0x4e\n    lsl r0, r0, #2\n    ldrh r2, [r2]\n    ldr r0, [r5, r0]\n    ldr r1, [sp, #0x34]\n    mov r3, #0\n    bl AddCellOrAnimResObjFromOpenNarc\n    add r1, r4, #0\n    add r1, #0xec\n    str r0, [r1]\n    add r0, r6, #0\n    add r0, #0x96\n    str r0, [sp]\n    mov r0, #3\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x30]\n    ldr r2, [sp, #0x38]\n    str r0, [sp, #8]\n    mov r0, #0x4f\n    lsl r0, r0, #2\n    ldrh r2, [r2]\n    ldr r0, [r5, r0]\n    ldr r1, [sp, #0x34]\n    mov r3, #0\n    bl AddCellOrAnimResObjFromOpenNarc\n    add r1, r4, #0\n    add r1, #0xfc\n    str r0, [r1]\n    ldr r0, [sp, #0x40]\n    add r6, r6, #1\n    add r0, r0, #6\n    str r0, [sp, #0x40]\n    ldr r0, [sp, #0x3c]\n    add r4, r4, #4\n    add r0, r0, #2\n    str r0, [sp, #0x3c]\n    ldr r0, [sp, #0x38]\n    add r0, r0, #2\n    str r0, [sp, #0x38]\n    cmp r6, #4\n    bge _0225C608\n    b _0225C506\n    ldr r0, _0225C788 ; =ov49_0226991C\n    mov r6, #0\n    str r0, [sp, #0x48]\n    ldr r0, [sp, #0xb0]\n    add r1, r6, #0\n    bl ov45_0222A92C\n    add r4, r0, #0\n    ldr r0, [sp, #0xb0]\n    add r1, r6, #0\n    bl ov45_0222A964\n    add r1, r0, #0\n    cmp r4, #0x18\n    bne _0225C632\n    add r1, r7, #0\n    add r1, #0xbc\n    mov r0, #0\n    str r0, [r1]\n    str r0, [r7, #0x7c]\n    b _0225C760\n    ldr r2, [sp, #0x44]\n    ldr r3, [sp, #0x4c]\n    add r0, r4, #0\n    bl ov49_0225C828\n    add r4, r0, #0\n    ldrb r0, [r4]\n    cmp r0, #1\n    bne _0225C648\n    ldr r1, [sp, #0x2c]\n    b _0225C64A\n    ldr r1, [sp, #0x50]\n    add r0, r6, #0\n    add r0, #0x96\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x30]\n    mov r3, #0\n    str r0, [sp, #8]\n    mov r0, #0x13\n    lsl r0, r0, #4\n    ldrh r2, [r4, #2]\n    ldr r0, [r5, r0]\n    bl AddCharResObjFromOpenNarc\n    add r1, r7, #0\n    add r1, #0xbc\n    str r0, [r1]\n    add r0, r7, #0\n    add r0, #0xbc\n    ldr r0, [r0]\n    bl sub_0200ADA4\n    cmp r0, #0\n    bne _0225C67E\n    bl GF_AssertFail\n    add r0, r7, #0\n    add r0, #0xbc\n    ldr r0, [r0]\n    bl sub_0200A740\n    ldrb r2, [r4]\n    mov r0, #0\n    mvn r0, r0\n    add r2, #0x96\n    str r2, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    str r0, [sp, #0x10]\n    mov r0, #0x13\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    add r1, r6, #0\n    str r0, [sp, #0x14]\n    mov r0, #0x4d\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    add r1, #0x96\n    str r0, [sp, #0x18]\n    mov r0, #0x4e\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    add r3, r2, #0\n    str r0, [sp, #0x1c]\n    mov r0, #0x4f\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    str r0, [sp, #0x20]\n    mov r0, #0\n    str r0, [sp, #0x24]\n    str r0, [sp, #0x28]\n    add r0, sp, #0x54\n    bl CreateSpriteResourcesHeader\n    ldr r0, [r5, #4]\n    ldr r2, [sp, #0x48]\n    str r0, [sp, #0x78]\n    add r0, sp, #0x54\n    str r0, [sp, #0x7c]\n    mov r0, #0\n    str r0, [sp, #0x8c]\n    mov r0, #2\n    str r0, [sp, #0x90]\n    ldr r0, [sp, #0x30]\n    add r3, sp, #0x80\n    str r0, [sp, #0x94]\n    ldmia r2!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r2]\n    str r0, [r3]\n    mov r0, #4\n    ldrsh r0, [r4, r0]\n    cmp r0, #0\n    ble _0225C708\n    lsl r0, r0, #0xc\n    bl _fflt\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    b _0225C716\n    lsl r0, r0, #0xc\n    bl _fflt\n    mov r1, #0x3f\n    lsl r1, r1, #0x18\n    bl _fsub\n    bl _ffix\n    ldr r1, [sp, #0x80]\n    add r0, r1, r0\n    str r0, [sp, #0x80]\n    mov r0, #6\n    ldrsh r0, [r4, r0]\n    cmp r0, #0\n    ble _0225C73A\n    lsl r0, r0, #0xc\n    bl _fflt\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    b _0225C748\n    lsl r0, r0, #0xc\n    bl _fflt\n    mov r1, #0x3f\n    lsl r1, r1, #0x18\n    bl _fsub\n    bl _ffix\n    ldr r1, [sp, #0x84]\n    add r0, r1, r0\n    str r0, [sp, #0x84]\n    add r0, sp, #0x78\n    bl Sprite_Create\n    str r0, [r7, #0x7c]\n    ldrb r1, [r4, #1]\n    bl Sprite_SetPalOffsetRespectVramOffset\n    ldr r0, [sp, #0x48]\n    add r6, r6, #1\n    add r0, #0xc\n    add r7, r7, #4\n    str r0, [sp, #0x48]\n    cmp r6, #0xc\n    bge _0225C770\n    b _0225C60E\n    ldr r0, [sp, #0x50]\n    bl NARC_Delete\n    add sp, #0x98\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0225C77C: .word ov49_02269774\n    _0225C780: .word ov49_02269704\n    _0225C784: .word ov49_022696FC\n    _0225C788: .word ov49_0226991C"
    );
    #endif
}

void ov49_0225C78C(void) {
    /* Original at 0x0225C78C */
    /* Requires manual decompilation - 70 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r6, r1, #0\n    mov r7, #0\n    add r4, r5, #0\n    add r0, r4, #0\n    add r0, #0xbc\n    ldr r0, [r0]\n    cmp r0, #0\n    beq _0225C7CC\n    ldr r0, [r4, #0x7c]\n    bl Sprite_Delete\n    mov r0, #0\n    str r0, [r4, #0x7c]\n    add r0, r4, #0\n    add r0, #0xbc\n    ldr r0, [r0]\n    bl sub_0200AEB0\n    mov r0, #0x13\n    add r1, r4, #0\n    lsl r0, r0, #4\n    add r1, #0xbc\n    ldr r0, [r6, r0]\n    ldr r1, [r1]\n    bl DestroySingle2DGfxResObj\n    add r1, r4, #0\n    add r1, #0xbc\n    mov r0, #0\n    str r0, [r1]\n    add r7, r7, #1\n    add r4, r4, #4\n    cmp r7, #0xc\n    blt _0225C796\n    mov r4, #0\n    add r7, r4, #0\n    add r0, r5, #0\n    add r0, #0xac\n    ldr r0, [r0]\n    cmp r0, #0\n    beq _0225C81C\n    bl sub_0200B0A8\n    mov r0, #0x4d\n    add r1, r5, #0\n    lsl r0, r0, #2\n    add r1, #0xac\n    ldr r0, [r6, r0]\n    ldr r1, [r1]\n    bl DestroySingle2DGfxResObj\n    mov r0, #0x4e\n    add r1, r5, #0\n    lsl r0, r0, #2\n    add r1, #0xec\n    ldr r0, [r6, r0]\n    ldr r1, [r1]\n    bl DestroySingle2DGfxResObj\n    mov r0, #0x4f\n    add r1, r5, #0\n    lsl r0, r0, #2\n    add r1, #0xfc\n    ldr r0, [r6, r0]\n    ldr r1, [r1]\n    bl DestroySingle2DGfxResObj\n    add r0, r5, #0\n    add r0, #0xac\n    str r7, [r0]\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #4\n    blt _0225C7D8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov49_0225C828(void) {
    /* Original at 0x0225C828 */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "cmp r1, r2\n    bne _0225C834\n    ldr r1, _0225C83C ; =ov49_02269764\n    lsl r0, r3, #3\n    add r0, r1, r0\n    bx lr\n    ldr r1, _0225C840 ; =ov49_022699AC\n    lsl r0, r0, #3\n    add r0, r1, r0\n    bx lr\n    _0225C83C: .word ov49_02269764\n    _0225C840: .word ov49_022699AC"
    );
    #endif
}

void ov49_0225C844(void) {
    /* Original at 0x0225C844 */
    /* Requires manual decompilation - 44 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    str r0, [sp, #4]\n    ldr r0, [r1]\n    ldr r1, [sp, #4]\n    str r2, [sp, #8]\n    ldr r2, _0225C89C ; =ov49_0226970C\n    add r1, #0xc\n    add r7, r3, #0\n    bl AddWindow\n    ldr r4, [sp, #4]\n    ldr r5, [sp, #4]\n    mov r6, #0\n    add r4, #0x2c\n    add r1, r6, #0\n    ldr r0, [sp, #8]\n    add r1, #0x38\n    mov r2, #0\n    add r3, r4, #0\n    str r7, [sp]\n    bl GfGfxLoader_GetScrnDataFromOpenNarc\n    str r0, [r5, #0x20]\n    add r6, r6, #1\n    add r4, r4, #4\n    add r5, r5, #4\n    cmp r6, #3\n    blt _0225C862\n    ldr r0, _0225C8A0 ; =ov49_022696F4\n    ldr r2, _0225C8A4 ; =ov49_0225CB50\n    ldr r3, [sp, #4]\n    mov r1, #1\n    str r7, [sp]\n    bl TouchHitboxController_Create\n    ldr r1, [sp, #4]\n    str r0, [r1, #0x1c]\n    ldr r0, [sp, #4]\n    mov r1, #1\n    strh r1, [r0, #6]\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _0225C89C: .word ov49_0226970C\n    _0225C8A0: .word ov49_022696F4\n    _0225C8A4: .word ov49_0225CB50"
    );
    #endif
}

void ov49_0225C8A8(void) {
    /* Original at 0x0225C8A8 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r0, #0\n    ldr r0, [r6, #0x1c]\n    bl TouchHitboxController_Destroy\n    add r0, r6, #0\n    add r0, #0xc\n    bl RemoveWindow\n    mov r4, #0\n    add r5, r6, #0\n    ldr r0, [r5, #0x20]\n    bl Heap_Free\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #3\n    blt _0225C8BE\n    mov r0, #0\n    strb r0, [r6, #2]\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov49_0225C8D4(void) {
    /* Original at 0x0225C8D4 */
    /* Requires manual decompilation - 72 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r5, r0, #0\n    mov r0, #0\n    str r0, [sp, #4]\n    ldrh r0, [r5, #6]\n    add r6, r1, #0\n    add r7, r2, #0\n    add r4, r3, #0\n    cmp r0, #0\n    bne _0225C8F2\n    ldr r0, [r5, #0x1c]\n    bl TouchHitboxController_IsTriggered\n    b _0225C8F6\n    mov r0, #1\n    strb r0, [r5, #3]\n    ldrb r0, [r5, #2]\n    cmp r0, #1\n    bne _0225C912\n    mov r2, #0\n    ldrsh r0, [r5, r2]\n    cmp r0, #0\n    bne _0225C912\n    strb r2, [r5, #2]\n    add r0, r5, #0\n    add r1, r6, #0\n    add r3, r7, #0\n    str r4, [sp]\n    bl ov49_0225CAD4\n    ldrb r1, [r5, #3]\n    ldrh r0, [r5, #4]\n    cmp r1, r0\n    beq _0225C968\n    strh r1, [r5, #4]\n    ldrb r0, [r5, #3]\n    cmp r0, #2\n    bne _0225C932\n    add r0, r5, #0\n    add r1, r6, #0\n    mov r2, #1\n    add r3, r7, #0\n    str r4, [sp]\n    bl ov49_0225CAD4\n    b _0225C954\n    ldrb r0, [r5, #2]\n    cmp r0, #0\n    str r4, [sp]\n    bne _0225C948\n    add r0, r5, #0\n    add r1, r6, #0\n    mov r2, #0\n    add r3, r7, #0\n    bl ov49_0225CAD4\n    b _0225C954\n    add r0, r5, #0\n    add r1, r6, #0\n    mov r2, #2\n    add r3, r7, #0\n    bl ov49_0225CAD4\n    ldrb r0, [r5, #2]\n    cmp r0, #0\n    bne _0225C968\n    ldrb r0, [r5, #3]\n    cmp r0, #2\n    bne _0225C968\n    mov r0, #1\n    strb r0, [r5, #2]\n    str r0, [sp, #4]\n    strh r0, [r5]\n    ldr r0, [sp, #4]\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov49_0225C970(void) {
    /* Original at 0x0225C970 */
    /* Requires manual decompilation - 86 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x1c\n    add r5, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    add r6, r1, #0\n    ldr r4, [sp, #0x34]\n    str r0, [sp, #8]\n    ldr r7, [sp, #0x30]\n    str r3, [sp, #0x14]\n    str r4, [sp, #0xc]\n    str r2, [sp, #0x10]\n    ldr r2, [r6]\n    add r0, r7, #0\n    mov r1, #0x37\n    mov r3, #4\n    bl GfGfxLoader_LoadScrnDataFromOpenNarc\n    mov r0, #0\n    strh r0, [r5, #8]\n    ldr r0, [sp, #0x14]\n    bl ov45_0222AAC8\n    strh r0, [r5, #0xa]\n    mov r0, #5\n    lsl r0, r0, #6\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    str r4, [sp, #0xc]\n    ldrh r1, [r5, #0xa]\n    ldr r2, [r6]\n    add r0, r7, #0\n    mov r3, #6\n    bl GfGfxLoader_LoadCharDataFromOpenNarc\n    mov r0, #5\n    lsl r0, r0, #6\n    str r0, [sp]\n    str r4, [sp, #4]\n    ldrh r2, [r5, #0xa]\n    add r0, r6, #0\n    add r1, r7, #0\n    add r2, #0x1b\n    mov r3, #6\n    bl ov49_0225BB14\n    ldr r0, [sp, #0x10]\n    mov r1, #1\n    mov r2, #0x3f\n    bl ov49_0225B388\n    str r0, [sp, #0x18]\n    add r0, r5, #0\n    add r0, #0xc\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r0, #4\n    str r0, [sp]\n    mov r1, #0\n    ldr r0, _0225CA2C ; =0x000F0E00\n    str r1, [sp, #4]\n    str r0, [sp, #8]\n    add r0, r5, #0\n    ldr r2, [sp, #0x18]\n    str r1, [sp, #0xc]\n    add r0, #0xc\n    add r3, r1, #0\n    bl AddTextPrinterParameterizedWithColor\n    ldrb r0, [r5, #2]\n    cmp r0, #0\n    str r4, [sp]\n    bne _0225CA1A\n    add r0, r5, #0\n    add r1, r6, #0\n    mov r2, #0\n    add r3, r7, #0\n    bl ov49_0225CAD4\n    add sp, #0x1c\n    pop {r4, r5, r6, r7, pc}\n    add r0, r5, #0\n    add r1, r6, #0\n    mov r2, #2\n    add r3, r7, #0\n    bl ov49_0225CAD4\n    add sp, #0x1c\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _0225CA2C: .word 0x000F0E00"
    );
    #endif
}

void ov49_0225CA30(void) {
    /* Original at 0x0225CA30 */
    /* Requires manual decompilation - 54 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r7, r2, #0\n    add r5, r0, #0\n    add r6, r1, #0\n    str r3, [sp, #0x10]\n    ldr r4, [sp, #0x28]\n    cmp r7, #3\n    blo _0225CA46\n    bl GF_AssertFail\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    str r4, [sp, #0xc]\n    ldr r0, [sp, #0x10]\n    ldr r2, [r6]\n    mov r1, #0x37\n    mov r3, #4\n    bl GfGfxLoader_LoadScrnDataFromOpenNarc\n    mov r0, #1\n    strh r0, [r5, #8]\n    mov r0, #5\n    strh r7, [r5, #0xa]\n    lsl r0, r0, #6\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    str r4, [sp, #0xc]\n    ldrh r1, [r5, #0xa]\n    ldr r0, [sp, #0x10]\n    ldr r2, [r6]\n    add r1, #0x5d\n    mov r3, #6\n    bl GfGfxLoader_LoadCharDataFromOpenNarc\n    ldrb r0, [r5, #2]\n    cmp r0, #0\n    str r4, [sp]\n    bne _0225CA96\n    ldr r3, [sp, #0x10]\n    add r0, r5, #0\n    add r1, r6, #0\n    mov r2, #0\n    bl ov49_0225CAD4\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    ldr r3, [sp, #0x10]\n    add r0, r5, #0\n    add r1, r6, #0\n    mov r2, #2\n    bl ov49_0225CAD4\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov49_0225CAA8(void) {
    BgClearTilemapBufferAndCommit(4);
    BgClearTilemapBufferAndCommit(5);
    BgClearTilemapBufferAndCommit(6);
    BgSetPosTextAndCommit(6, 3, 0);
}

void ov49_0225CAD4(void) {
    /* Original at 0x0225CAD4 */
    /* Requires manual decompilation - 56 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x1c\n    add r5, r0, #0\n    mov r0, #0x20\n    add r4, r1, #0\n    add r6, r2, #0\n    str r0, [sp]\n    mov r1, #0x15\n    str r1, [sp, #4]\n    lsl r1, r6, #2\n    add r1, r5, r1\n    ldr r1, [r1, #0x2c]\n    add r7, r3, #0\n    add r1, #0xc\n    str r1, [sp, #8]\n    mov r2, #0\n    str r2, [sp, #0xc]\n    mov r3, #3\n    str r3, [sp, #0x10]\n    str r0, [sp, #0x14]\n    str r0, [sp, #0x18]\n    ldr r0, [r4]\n    mov r1, #5\n    bl CopyToBgTilemapRect\n    ldr r0, [r4]\n    mov r1, #5\n    bl ScheduleBgTilemapBufferTransfer\n    ldrh r0, [r5, #8]\n    cmp r0, #1\n    bne _0225CB34\n    mov r0, #5\n    lsl r0, r0, #6\n    str r0, [sp]\n    ldr r0, [sp, #0x30]\n    ldr r2, _0225CB48 ; =ov49_022696EC\n    str r0, [sp, #4]\n    ldrh r3, [r5, #0xa]\n    ldrb r2, [r2, r6]\n    add r0, r4, #0\n    lsl r3, r3, #1\n    add r2, r2, r3\n    add r1, r7, #0\n    add r2, #0x60\n    mov r3, #6\n    bl ov49_0225BB14\n    ldr r3, _0225CB4C ; =ov49_022696F0\n    ldr r0, [r4]\n    ldrsb r3, [r3, r6]\n    mov r1, #6\n    mov r2, #3\n    bl ScheduleSetBgPosText\n    add sp, #0x1c\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _0225CB48: .word ov49_022696EC\n    _0225CB4C: .word ov49_022696F0"
    );
    #endif
}

void ov49_0225CB50(void) {
    /* Original at 0x0225CB50 */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "strb r1, [r2, #3]\n    ldrb r0, [r2, #3]\n    cmp r0, #0\n    bne _0225CB5E\n    mov r0, #2\n    strb r0, [r2, #3]\n    bx lr\n    cmp r0, #3\n    bne _0225CB66\n    mov r0, #1\n    strb r0, [r2, #3]\n    bx lr"
    );
    #endif
}

void ov49_0225CB68(void) {
    *(u16*)r0 = 0;
}

void ov49_0225CB70(void) {
    /* Original at 0x0225CB70 */
    /* Requires manual decompilation - 4 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0xc3\n    lsl r1, r1, #2\n    ldr r0, [r0, r1]\n    bx lr"
    );
    #endif
}

void ov49_0225CB78(void) {
    /* Original at 0x0225CB78 */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    mov r1, #0x14\n    add r5, r0, #0\n    bl Heap_Alloc\n    add r4, r0, #0\n    add r2, r4, #0\n    mov r1, #0x14\n    mov r0, #0\n    strb r0, [r2]\n    add r2, r2, #1\n    sub r1, r1, #1\n    bne _0225CB8C\n    add r0, r5, #0\n    bl Camera_New\n    str r0, [r4]\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r0, [r4]\n    ldr r1, _0225CBD0 ; =0x0029AEC1\n    str r0, [sp, #8]\n    add r0, r4, #0\n    ldr r2, _0225CBD4 ; =ov49_02269A6C\n    ldr r3, _0225CBD8 ; =0x000005C1\n    add r0, #8\n    bl Camera_Init_FromTargetDistanceAndAngle\n    ldr r0, [r4]\n    bl Camera_SetStaticPtr\n    mov r0, #0x96\n    mov r1, #0xe1\n    ldr r2, [r4]\n    lsl r0, r0, #0xc\n    lsl r1, r1, #0xe\n    bl Camera_SetPerspectiveClippingPlane\n    add r0, r4, #0\n    add sp, #0xc\n    pop {r4, r5, pc}\n    _0225CBD0: .word 0x0029AEC1\n    _0225CBD4: .word ov49_02269A6C\n    _0225CBD8: .word 0x000005C1"
    );
    #endif
}

void ov49_0225CBDC(void) {
    Camera_UnsetStaticPtr();
    Camera_Delete();
    Heap_Free(r4);
}

void ov49_0225CBF4(void) {
    /* Original at 0x0225CBF4 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #4]\n    cmp r0, #0\n    beq _0225CC18\n    add r1, r4, #0\n    add r1, #8\n    bl ov49_02259154\n    mov r0, #2\n    ldr r1, [r4, #8]\n    lsl r0, r0, #0xe\n    add r1, r1, r0\n    str r1, [r4, #8]\n    ldr r1, [r4, #0x10]\n    lsl r0, r0, #2\n    sub r0, r1, r0\n    str r0, [r4, #0x10]\n    bl Camera_PushLookAtToNNSGlb\n    pop {r4, pc}"
    );
    #endif
}

void ov49_0225CC20(void) {
    ((u32*)r0)[8] = r1;
    ((u32*)r0)[0xc] = r2;
    ((u32*)r0)[0x10] = r3;
}

void ov49_0225CC28(void) {
    /* Original at 0x0225CC28 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    mov r4, #2\n    lsl r4, r4, #0xe\n    add r1, r1, r4\n    str r1, [r0, #8]\n    lsl r1, r4, #2\n    str r2, [r0, #0xc]\n    sub r1, r3, r1\n    str r1, [r0, #0x10]\n    pop {r3, r4}\n    bx lr"
    );
    #endif
}

void ov49_0225CC40(void) {
    ((u32*)r0)[4] = r1;
}

void ov49_0225CC44(void) {
    ((u32*)r0)[4] = 0;
}

void ov49_0225CC4C(void) {
    /* Original at 0x0225CC4C */
    /* Requires manual decompilation - 51 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r6, r1, #0\n    add r5, r0, #0\n    ldr r1, _0225CCBC ; =0x000004A4\n    add r0, r2, #0\n    str r2, [sp]\n    bl Heap_Alloc\n    ldr r2, _0225CCBC ; =0x000004A4\n    mov r1, #0\n    add r4, r0, #0\n    bl memset\n    mov r0, #0xb4\n    mul r0, r5\n    str r0, [sp, #4]\n    ldr r0, [sp]\n    ldr r1, [sp, #4]\n    bl Heap_Alloc\n    mov r1, #0x47\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    mov r0, #0xe4\n    add r7, r6, #0\n    mul r7, r0\n    ldr r0, [sp]\n    add r1, r7, #0\n    bl Heap_Alloc\n    mov r1, #0x12\n    lsl r1, r1, #4\n    str r0, [r4, r1]\n    sub r0, r1, #4\n    ldr r0, [r4, r0]\n    ldr r2, [sp, #4]\n    mov r1, #0\n    bl memset\n    mov r0, #0x12\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #0\n    add r2, r7, #0\n    bl memset\n    mov r0, #0x49\n    lsl r0, r0, #2\n    strb r5, [r4, r0]\n    add r0, r0, #1\n    strb r6, [r4, r0]\n    add r0, r4, #0\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0225CCBC: .word 0x000004A4"
    );
    #endif
}

void ov49_0225CCC0(void) {
    /* Original at 0x0225CCC0 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r1, #0x4a\n    add r4, r0, #0\n    lsl r1, r1, #2\n    ldr r1, [r4, r1]\n    cmp r1, #0\n    beq _0225CCD2\n    bl ov49_0225CE88\n    mov r0, #0x47\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl Heap_Free\n    mov r0, #0x12\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    bl Heap_Free\n    add r0, r4, #0\n    bl Heap_Free\n    pop {r4, pc}"
    );
    #endif
}

void ov49_0225CCF0(void) {
    /* Original at 0x0225CCF0 */
    /* Requires manual decompilation - 48 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    mov r1, #0x4b\n    add r5, r0, #0\n    lsl r1, r1, #2\n    add r1, r5, r1\n    bl ov49_0225D7B8\n    mov r0, #0x49\n    lsl r0, r0, #2\n    ldrb r0, [r5, r0]\n    mov r4, #0\n    cmp r0, #0\n    ble _0225CD2C\n    mov r7, #0x71\n    add r6, r4, #0\n    lsl r7, r7, #2\n    mov r0, #0x47\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    add r1, r5, r7\n    add r0, r0, r6\n    bl ov49_0225DA70\n    mov r0, #0x49\n    lsl r0, r0, #2\n    ldrb r0, [r5, r0]\n    add r4, r4, #1\n    add r6, #0xb4\n    cmp r4, r0\n    blt _0225CD10\n    ldr r0, _0225CD54 ; =0x00000125\n    mov r6, #0\n    ldrb r0, [r5, r0]\n    cmp r0, #0\n    ble _0225CD52\n    ldr r7, _0225CD54 ; =0x00000125\n    add r4, r6, #0\n    mov r1, #0x12\n    lsl r1, r1, #4\n    ldr r1, [r5, r1]\n    add r0, r5, #0\n    add r1, r1, r4\n    bl ov49_0225DD68\n    ldrb r0, [r5, r7]\n    add r6, r6, #1\n    add r4, #0xe4\n    cmp r6, r0\n    blt _0225CD3A\n    pop {r3, r4, r5, r6, r7, pc}\n    _0225CD54: .word 0x00000125"
    );
    #endif
}

void ov49_0225CD58(void) {
    /* Original at 0x0225CD58 */
    /* Requires manual decompilation - 65 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    bne _0225CD62\n    bl GF_AssertFail\n    mov r0, #0x12\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    cmp r0, #0\n    bne _0225CD70\n    bl GF_AssertFail\n    mov r0, #0x47\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    cmp r0, #0\n    bne _0225CD7E\n    bl GF_AssertFail\n    mov r1, #0x4b\n    lsl r1, r1, #2\n    add r0, r5, #0\n    add r1, r5, r1\n    bl ov49_0225D804\n    ldr r0, _0225CDE4 ; =0x00000125\n    mov r4, #0\n    ldrb r0, [r5, r0]\n    cmp r0, #0\n    ble _0225CDB4\n    mov r7, #0xa7\n    add r6, r4, #0\n    lsl r7, r7, #2\n    mov r1, #0x12\n    lsl r1, r1, #4\n    ldr r1, [r5, r1]\n    add r0, r5, r7\n    add r1, r1, r6\n    bl ov49_0225DD0C\n    ldr r0, _0225CDE4 ; =0x00000125\n    add r4, r4, #1\n    ldrb r0, [r5, r0]\n    add r6, #0xe4\n    cmp r4, r0\n    blt _0225CD9A\n    mov r0, #0x49\n    lsl r0, r0, #2\n    ldrb r0, [r5, r0]\n    mov r4, #0\n    cmp r0, #0\n    ble _0225CDE2\n    mov r7, #0x71\n    add r6, r4, #0\n    lsl r7, r7, #2\n    mov r0, #0x47\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    add r1, r5, r7\n    add r0, r0, r6\n    bl ov49_0225DAFC\n    mov r0, #0x49\n    lsl r0, r0, #2\n    ldrb r0, [r5, r0]\n    add r4, r4, #1\n    add r6, #0xb4\n    cmp r4, r0\n    blt _0225CDC6\n    pop {r3, r4, r5, r6, r7, pc}\n    _0225CDE4: .word 0x00000125"
    );
    #endif
}

void ov49_0225CDE8(void) {
    /* Original at 0x0225CDE8 */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void ov49_0225CDEC(void) {
    /* Original at 0x0225CDEC */
    /* Requires manual decompilation - 67 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r0, _0225CE80 ; =0x00000127\n    add r7, r3, #0\n    strb r2, [r5, r0]\n    sub r0, r0, #1\n    strb r1, [r5, r0]\n    add r0, r1, #0\n    add r1, r2, #0\n    add r2, r7, #0\n    ldr r4, [sp, #0x18]\n    bl ov49_0225D4FC\n    add r6, r0, #0\n    mov r0, #0xcb\n    add r1, r7, #0\n    bl NARC_New\n    add r7, r0, #0\n    ldr r0, _0225CE84 ; =0x00000494\n    add r1, r4, #0\n    add r0, r5, r0\n    mov r2, #4\n    bl HeapExp_FndInitAllocator\n    ldr r0, _0225CE84 ; =0x00000494\n    add r1, r7, #0\n    add r0, r5, r0\n    str r0, [sp]\n    mov r0, #0x4b\n    lsl r0, r0, #2\n    add r0, r5, r0\n    add r2, r6, #0\n    add r3, r4, #0\n    bl ov49_0225D5FC\n    mov r0, #0xa7\n    ldr r2, _0225CE84 ; =0x00000494\n    lsl r0, r0, #2\n    add r0, r5, r0\n    add r1, r7, #0\n    add r2, r5, r2\n    add r3, r6, #0\n    str r4, [sp]\n    bl ov49_0225DC2C\n    mov r0, #0x71\n    ldr r2, _0225CE84 ; =0x00000494\n    lsl r0, r0, #2\n    add r0, r5, r0\n    add r1, r7, #0\n    add r2, r5, r2\n    add r3, r6, #0\n    str r4, [sp]\n    bl ov49_0225D854\n    add r0, r7, #0\n    bl NARC_Delete\n    add r0, r6, #0\n    bl ov49_0225D520\n    mov r1, #0x4b\n    lsl r1, r1, #2\n    add r0, r5, #0\n    add r1, r5, r1\n    bl ov49_0225D6F0\n    mov r0, #0x4a\n    mov r1, #1\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0225CE80: .word 0x00000127\n    _0225CE84: .word 0x00000494"
    );
    #endif
}

void ov49_0225CE88(void) {
    /* Original at 0x0225CE88 */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r1, #0x4b\n    add r4, r0, #0\n    lsl r1, r1, #2\n    add r1, r4, r1\n    bl ov49_0225D76C\n    mov r0, #0x4b\n    ldr r1, _0225CECC ; =0x00000494\n    lsl r0, r0, #2\n    add r0, r4, r0\n    add r1, r4, r1\n    bl ov49_0225D6AC\n    mov r0, #0xa7\n    ldr r1, _0225CECC ; =0x00000494\n    lsl r0, r0, #2\n    add r0, r4, r0\n    add r1, r4, r1\n    bl ov49_0225DCBC\n    mov r0, #0x71\n    ldr r1, _0225CECC ; =0x00000494\n    lsl r0, r0, #2\n    add r0, r4, r0\n    add r1, r4, r1\n    bl ov49_0225D9D0\n    mov r0, #0x4a\n    mov r1, #0\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    pop {r4, pc}\n    nop\n    _0225CECC: .word 0x00000494"
    );
    #endif
}

void ov49_0225CED0(void) {
    /* Original at 0x0225CED0 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    mov r2, #7\n    add r1, r0, #0\n    lsl r2, r2, #6\n    ldr r0, [r1, r2]\n    cmp r0, #1\n    bne _0225CEFA\n    add r0, r2, #0\n    sub r0, #0xbc\n    ldr r0, [r1, r0]\n    cmp r0, #0\n    bne _0225CEFA\n    add r0, r2, #0\n    mov r3, #1\n    sub r0, #0xbc\n    str r3, [r1, r0]\n    sub r2, #0x24\n    add r0, r1, #4\n    add r1, r1, r2\n    bl sub_020181D4\n    pop {r3, pc}"
    );
    #endif
}

void ov49_0225CEFC(void) {
    /* Original at 0x0225CEFC */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r1, #7\n    add r4, r0, #0\n    lsl r1, r1, #6\n    ldr r0, [r4, r1]\n    cmp r0, #1\n    bne _0225CF26\n    add r0, r1, #0\n    sub r0, #0xbc\n    ldr r0, [r4, r0]\n    cmp r0, #1\n    bne _0225CF26\n    sub r1, #0x24\n    add r0, r4, #4\n    add r1, r4, r1\n    bl sub_020181E0\n    mov r0, #0x41\n    mov r1, #0\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    pop {r4, pc}"
    );
    #endif
}

void ov49_0225CF28(void) {
    /* Original at 0x0225CF28 */
    /* Requires manual decompilation - 46 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r5, r1, #0\n    add r7, r0, #0\n    add r6, r2, #0\n    str r3, [sp]\n    cmp r5, #2\n    ble _0225CF3C\n    bl GF_AssertFail\n    cmp r6, #3\n    ble _0225CF44\n    bl GF_AssertFail\n    add r0, r7, #0\n    bl ov49_0225D820\n    mov r1, #0x71\n    lsl r1, r1, #2\n    add r4, r0, #0\n    add r2, r7, r1\n    lsl r1, r5, #4\n    add r0, r4, #4\n    add r1, r2, r1\n    bl sub_020181B0\n    add r0, r4, #4\n    mov r1, #1\n    bl sub_020182A0\n    ldr r1, [sp]\n    add r0, r4, #0\n    bl ov49_0225CFA8\n    add r1, sp, #4\n    mov r0, #0\n    str r0, [r1]\n    str r0, [r1, #4]\n    str r0, [r1, #8]\n    add r0, r4, #0\n    bl ov49_0225CFEC\n    strb r6, [r4, #1]\n    add r0, r4, #0\n    strb r5, [r4, #2]\n    mov r1, #1\n    strb r1, [r4]\n    str r1, [r4, #0x7c]\n    add r0, #0x84\n    str r1, [r0]\n    add r0, r4, #0\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov49_0225CF94(void) {
    sub_020182A0(0, 0);
}

void ov49_0225CFA8(void) {
    /* Original at 0x0225CFA8 */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r3, r0, #0\n    add r4, r1, #0\n    add r2, r3, #0\n    ldmia r4!, {r0, r1}\n    add r2, #0x9c\n    stmia r2!, {r0, r1}\n    ldr r0, [r4]\n    add r1, r3, #0\n    str r0, [r2]\n    add r1, #0x9c\n    ldr r2, [r1]\n    add r1, r3, #0\n    add r1, #0xa8\n    ldr r1, [r1]\n    add r0, r3, #4\n    add r1, r2, r1\n    add r2, r3, #0\n    add r2, #0xa0\n    ldr r4, [r2]\n    add r2, r3, #0\n    add r2, #0xac\n    ldr r2, [r2]\n    add r2, r4, r2\n    add r4, r3, #0\n    add r4, #0xa4\n    add r3, #0xb0\n    ldr r4, [r4]\n    ldr r3, [r3]\n    add r3, r4, r3\n    bl sub_020182A8\n    pop {r4, pc}"
    );
    #endif
}

void ov49_0225CFEC(void) {
    /* Original at 0x0225CFEC */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r3, r0, #0\n    add r4, r1, #0\n    add r2, r3, #0\n    ldmia r4!, {r0, r1}\n    add r2, #0xa8\n    stmia r2!, {r0, r1}\n    ldr r0, [r4]\n    add r1, r3, #0\n    str r0, [r2]\n    add r1, #0x9c\n    ldr r2, [r1]\n    add r1, r3, #0\n    add r1, #0xa8\n    ldr r1, [r1]\n    add r0, r3, #4\n    add r1, r2, r1\n    add r2, r3, #0\n    add r2, #0xa0\n    ldr r4, [r2]\n    add r2, r3, #0\n    add r2, #0xac\n    ldr r2, [r2]\n    add r2, r4, r2\n    add r4, r3, #0\n    add r4, #0xa4\n    add r3, #0xb0\n    ldr r4, [r4]\n    ldr r3, [r3]\n    add r3, r4, r3\n    bl sub_020182A8\n    pop {r4, pc}"
    );
    #endif
}

void ov49_0225D030(void) {
    sub_020182B0();
}

void ov49_0225D040(void) {
    sub_020182A0();
}

void ov49_0225D04C(void) {
    /* Original at 0x0225D04C */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "add r1, r0, #0\n    add r1, #0x80\n    ldr r1, [r1]\n    cmp r1, #0\n    bne _0225D060\n    mov r1, #1\n    add r0, #0x80\n    str r1, [r0]\n    add r0, r1, #0\n    bx lr\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void ov49_0225D064(void) {
    /* Original at 0x0225D064 */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "add r1, r0, #0\n    add r1, #0x88\n    ldr r1, [r1]\n    cmp r1, #0\n    bne _0225D078\n    mov r1, #1\n    add r0, #0x88\n    str r1, [r0]\n    add r0, r1, #0\n    bx lr\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void ov49_0225D07C(void) {
    sub_020182E0();
}

void ov49_0225D088(void) {
    /* Original at 0x0225D088 */
    /* Requires manual decompilation - 3 instructions */
    #ifdef MWERKS
    asm(
        "add r0, #0x80\n    ldr r0, [r0]\n    bx lr"
    );
    #endif
}

void ov49_0225D090(void) {
    /* Original at 0x0225D090 */
    /* Requires manual decompilation - 3 instructions */
    #ifdef MWERKS
    asm(
        "add r0, #0x88\n    ldr r0, [r0]\n    bx lr"
    );
    #endif
}

void ov49_0225D098(void) {
    /* Original at 0x0225D098 */
    /* Requires manual decompilation - 94 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x1c\n    add r7, r0, #0\n    str r1, [sp]\n    str r2, [sp, #4]\n    str r3, [sp, #8]\n    bl ov49_0225DBF8\n    mov r1, #0xa7\n    lsl r1, r1, #2\n    add r2, r7, r1\n    ldr r1, [sp]\n    str r0, [sp, #0xc]\n    lsl r1, r1, #4\n    add r0, r0, #4\n    add r1, r2, r1\n    bl sub_020181B0\n    ldr r5, [sp, #0xc]\n    ldr r0, [sp]\n    mov r1, #0xc\n    mul r1, r0\n    mov r0, #0xa7\n    lsl r0, r0, #2\n    add r0, r7, r0\n    str r0, [sp, #0x10]\n    ldr r0, [sp]\n    mov r6, #0\n    lsl r0, r0, #4\n    add r4, r7, r1\n    add r5, #0x7c\n    str r0, [sp, #0x14]\n    mov r0, #0xef\n    lsl r0, r0, #2\n    ldr r2, [r4, r0]\n    cmp r2, #0\n    beq _0225D0F2\n    ldr r3, [sp, #0x10]\n    ldr r1, [sp, #0x14]\n    add r0, r5, #0\n    add r1, r3, r1\n    ldr r3, _0225D15C ; =0x00000494\n    add r3, r7, r3\n    bl sub_020180E8\n    add r6, r6, #1\n    add r4, r4, #4\n    add r5, #0x14\n    cmp r6, #3\n    blt _0225D0D8\n    ldr r0, [sp, #0xc]\n    mov r1, #1\n    add r0, r0, #4\n    bl sub_020182A0\n    ldr r0, [sp, #4]\n    add r1, sp, #0x18\n    lsl r0, r0, #4\n    strh r0, [r1]\n    ldr r0, [sp, #8]\n    mov r3, sp\n    lsl r0, r0, #4\n    strh r0, [r1, #2]\n    ldrh r2, [r1]\n    sub r3, r3, #4\n    ldr r0, [sp, #0xc]\n    strh r2, [r3]\n    ldrh r1, [r1, #2]\n    strh r1, [r3, #2]\n    ldr r1, [r3]\n    bl ov49_0225D1C4\n    ldr r0, [sp, #0xc]\n    mov r2, #1\n    ldr r1, [sp]\n    strh r2, [r0]\n    strh r1, [r0, #2]\n    mov r1, #0x14\n    add r0, #0xcc\n    strb r1, [r0]\n    ldr r0, [sp, #0xc]\n    lsl r1, r2, #0xc\n    add r0, #0xdc\n    str r1, [r0]\n    ldr r0, [sp, #0xc]\n    mov r1, #0\n    add r0, #0xe0\n    strb r1, [r0]\n    ldr r0, [sp, #0xc]\n    mov r1, #0x1f\n    add r0, #0xe1\n    strb r1, [r0]\n    ldr r0, [sp, #0xc]\n    add r0, #0xe2\n    strb r1, [r0]\n    ldr r0, [sp, #0xc]\n    add sp, #0x1c\n    pop {r4, r5, r6, r7, pc}\n    _0225D15C: .word 0x00000494"
    );
    #endif
}

void ov49_0225D160(void) {
    /* Original at 0x0225D160 */
    /* Requires manual decompilation - 45 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r6, r0, #0\n    str r1, [sp]\n    add r0, r1, #4\n    mov r1, #0\n    bl sub_020182A0\n    mov r0, #0xa7\n    ldr r5, [sp]\n    lsl r0, r0, #2\n    mov r7, #0\n    add r0, r6, r0\n    add r4, r7, #0\n    add r5, #0x7c\n    str r0, [sp, #4]\n    ldr r0, [sp]\n    ldrh r1, [r0, #2]\n    mov r0, #0xc\n    mul r0, r1\n    add r0, r6, r0\n    add r2, r4, r0\n    mov r0, #0xef\n    lsl r0, r0, #2\n    ldr r2, [r2, r0]\n    cmp r2, #0\n    beq _0225D1A6\n    lsl r3, r1, #4\n    ldr r1, [sp, #4]\n    add r0, r5, #0\n    add r1, r1, r3\n    ldr r3, _0225D1BC ; =0x00000494\n    add r3, r6, r3\n    bl sub_020180E8\n    add r7, r7, #1\n    add r4, r4, #4\n    add r5, #0x14\n    cmp r7, #3\n    blt _0225D180\n    ldr r0, [sp]\n    mov r1, #0\n    strh r1, [r0]\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0225D1BC: .word 0x00000494"
    );
    #endif
}

void ov49_0225D1C0(void) {
    /* Original at 0x0225D1C0 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "ldrh r0, [r0, #2]\n    bx lr"
    );
    #endif
}

void ov49_0225D1C4(void) {
    /* Original at 0x0225D1C4 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r0, r1, r2, r3}\n    push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    add r0, sp, #0x1c\n    add r1, sp, #0\n    bl ov49_02258800\n    ldr r1, [sp]\n    ldr r2, [sp, #4]\n    ldr r3, [sp, #8]\n    add r0, r4, #4\n    bl sub_020182A8\n    add sp, #0xc\n    pop {r3, r4}\n    pop {r3}\n    add sp, #0x10\n    bx r3"
    );
    #endif
}

void ov49_0225D1EC(void) {
    /* Original at 0x0225D1EC */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    sub sp, #0x10\n    add r0, r0, #4\n    add r1, sp, #4\n    add r2, sp, #8\n    add r3, sp, #0xc\n    bl sub_020182B0\n    add r0, sp, #4\n    add r1, sp, #0\n    bl ov49_02258814\n    add r0, sp, #0\n    ldrh r1, [r0, #2]\n    ldrh r0, [r0]\n    lsl r1, r1, #0x10\n    orr r0, r1\n    add sp, #0x10\n    pop {r3, pc}"
    );
    #endif
}

void ov49_0225D214(void) {
    ov49_0225D224();
}

void ov49_0225D224(void) {
    /* Original at 0x0225D224 */
    /* Requires manual decompilation - 114 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r5, r2, #0\n    str r0, [sp]\n    add r4, r1, #0\n    add r7, r3, #0\n    cmp r5, #3\n    blt _0225D238\n    bl GF_AssertFail\n    cmp r7, #7\n    blt _0225D240\n    bl GF_AssertFail\n    ldrh r0, [r4, #2]\n    cmp r0, #0x12\n    blo _0225D24A\n    bl GF_AssertFail\n    ldrh r0, [r4, #2]\n    mov r1, #0xc\n    lsl r6, r5, #2\n    mul r1, r0\n    ldr r0, [sp]\n    add r0, r0, r1\n    add r1, r0, r6\n    mov r0, #0xef\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    cmp r0, #0\n    beq _0225D324\n    add r0, r4, #0\n    str r0, [sp, #4]\n    add r0, #0xb8\n    str r0, [sp, #4]\n    ldrb r0, [r0, r5]\n    cmp r0, #0\n    bne _0225D280\n    add r2, r4, #0\n    mov r1, #0x14\n    add r2, #0x7c\n    mul r1, r5\n    add r0, r4, #4\n    add r1, r2, r1\n    bl sub_020181D4\n    ldr r0, [sp, #4]\n    mov r1, #1\n    strb r1, [r0, r5]\n    add r0, r4, r5\n    add r0, #0xbc\n    strb r7, [r0]\n    add r0, r4, r6\n    ldr r1, [sp, #0x20]\n    add r0, #0xd0\n    str r1, [r0]\n    add r0, r4, #0\n    str r0, [sp, #8]\n    add r0, #0xcd\n    str r0, [sp, #8]\n    mov r0, #0\n    ldr r1, [sp, #8]\n    cmp r7, #6\n    strb r0, [r1, r5]\n    bhi _0225D310\n    add r1, r7, r7\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _0225D2B2: ; jump table\n    add r1, r4, r6\n    add r1, #0xc0\n    str r0, [r1]\n    b _0225D310\n    add r1, r4, #0\n    mov r0, #0x14\n    add r1, #0x7c\n    mul r0, r5\n    add r0, r1, r0\n    bl sub_020181A4\n    add r1, r4, r6\n    add r1, #0xc0\n    str r0, [r1]\n    b _0225D310\n    add r1, r4, r6\n    add r1, #0xc0\n    str r0, [r1]\n    bl MTRandom\n    add r1, r4, #0\n    add r1, #0xcc\n    ldrb r1, [r1]\n    bl _u32_div_f\n    ldr r0, [sp, #8]\n    strb r1, [r0, r5]\n    b _0225D310\n    add r1, r4, r6\n    add r1, #0xc0\n    str r0, [r1]\n    bl MTRandom\n    add r1, r4, #0\n    add r1, #0xcc\n    ldrb r1, [r1]\n    bl _u32_div_f\n    ldr r0, [sp, #8]\n    strb r1, [r0, r5]\n    add r1, r4, #0\n    mov r0, #0x14\n    add r1, #0x7c\n    mul r0, r5\n    add r0, r1, r0\n    add r1, r4, r6\n    add r1, #0xc0\n    ldr r1, [r1]\n    bl sub_02018198\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov49_0225D328(void) {
    /* Original at 0x0225D328 */
    /* Requires manual decompilation - 50 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r2, #0\n    add r6, r0, #0\n    add r5, r1, #0\n    cmp r4, #3\n    blt _0225D338\n    bl GF_AssertFail\n    ldrh r0, [r5, #2]\n    cmp r0, #0x12\n    blo _0225D342\n    bl GF_AssertFail\n    ldrh r1, [r5, #2]\n    mov r0, #0xc\n    mul r0, r1\n    add r1, r6, r0\n    lsl r0, r4, #2\n    add r1, r1, r0\n    mov r0, #0xef\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    cmp r0, #0\n    beq _0225D390\n    add r6, r5, #0\n    add r6, #0xb8\n    ldrb r0, [r6, r4]\n    cmp r0, #1\n    bne _0225D390\n    add r2, r5, #0\n    mov r1, #0x14\n    add r2, #0x7c\n    mul r1, r4\n    add r0, r5, #4\n    add r1, r2, r1\n    bl sub_020181E0\n    lsl r2, r4, #2\n    mov r0, #0\n    add r1, r5, r2\n    strb r0, [r6, r4]\n    add r1, #0xc0\n    str r0, [r1]\n    add r1, r5, r4\n    add r1, #0xbc\n    strb r0, [r1]\n    add r1, r5, r4\n    add r1, #0xcd\n    strb r0, [r1]\n    add r1, r5, r2\n    add r1, #0xd0\n    str r0, [r1]\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov49_0225D394(void) {
    /* Original at 0x0225D394 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r0, #0\n    add r5, r1, #0\n    mov r4, #0\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov49_0225D450\n    cmp r0, #1\n    bne _0225D3B2\n    add r0, r6, #0\n    add r1, r5, #0\n    add r2, r4, #0\n    bl ov49_0225D328\n    add r4, r4, #1\n    cmp r4, #3\n    blt _0225D39C\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov49_0225D3BC(void) {
    /* Original at 0x0225D3BC */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r2, #0\n    add r6, r0, #0\n    add r5, r1, #0\n    cmp r4, #3\n    blt _0225D3CC\n    bl GF_AssertFail\n    ldrh r0, [r5, #2]\n    cmp r0, #0x12\n    blo _0225D3D6\n    bl GF_AssertFail\n    ldrh r1, [r5, #2]\n    mov r0, #0xc\n    mul r0, r1\n    add r1, r6, r0\n    lsl r0, r4, #2\n    add r1, r1, r0\n    mov r0, #0xef\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    cmp r0, #0\n    beq _0225D3F4\n    add r0, r5, r4\n    add r0, #0xb8\n    ldrb r0, [r0]\n    pop {r4, r5, r6, pc}\n    mov r0, #0\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov49_0225D3F8(void) {
    /* Original at 0x0225D3F8 */
    /* Requires manual decompilation - 40 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r4, r2, #0\n    add r6, r0, #0\n    add r5, r1, #0\n    add r7, r3, #0\n    cmp r4, #3\n    blt _0225D40A\n    bl GF_AssertFail\n    ldrh r0, [r5, #2]\n    cmp r0, #0x12\n    blo _0225D414\n    bl GF_AssertFail\n    ldrh r1, [r5, #2]\n    mov r0, #0xc\n    mul r0, r1\n    add r1, r6, r0\n    lsl r0, r4, #2\n    add r1, r1, r0\n    mov r0, #0xef\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    cmp r0, #0\n    bne _0225D42E\n    bl GF_AssertFail\n    add r0, r5, r4\n    add r0, #0xbc\n    ldrb r0, [r0]\n    cmp r0, #2\n    bne _0225D44E\n    add r2, r5, #0\n    mov r0, #0x14\n    add r2, #0xc0\n    lsl r1, r4, #2\n    str r7, [r2, r1]\n    add r5, #0x7c\n    mul r0, r4\n    ldr r1, [r2, r1]\n    add r0, r5, r0\n    bl sub_02018198\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov49_0225D450(void) {
    /* Original at 0x0225D450 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    cmp r4, #3\n    blt _0225D45E\n    bl GF_AssertFail\n    ldrh r0, [r5, #2]\n    cmp r0, #0x12\n    blo _0225D468\n    bl GF_AssertFail\n    add r0, r5, r4\n    add r0, #0xb8\n    ldrb r0, [r0]\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov49_0225D470(void) {
    /* Original at 0x0225D470 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    cmp r4, #3\n    blt _0225D47E\n    bl GF_AssertFail\n    ldrh r0, [r5, #2]\n    cmp r0, #0x12\n    blo _0225D488\n    bl GF_AssertFail\n    lsl r0, r4, #2\n    add r0, r5, r0\n    add r0, #0xc0\n    ldr r0, [r0]\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov49_0225D494(void) {
    sub_020182A0();
}

void ov49_0225D4A0(void) {
    /* Original at 0x0225D4A0 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    ldrh r0, [r4, #2]\n    add r6, r2, #0\n    cmp r0, #0x12\n    blo _0225D4B2\n    bl GF_AssertFail\n    ldrh r0, [r4, #2]\n    lsl r0, r0, #4\n    add r1, r5, r0\n    mov r0, #0xa9\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    add r1, r6, #0\n    bl NNS_G3dMdlSetMdlLightEnableFlagAll\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov49_0225D4C8(void) {
    /* Original at 0x0225D4C8 */
    /* Requires manual decompilation - 3 instructions */
    #ifdef MWERKS
    asm(
        "add r0, #0xdc\n    str r1, [r0]\n    bx lr"
    );
    #endif
}

void ov49_0225D4D0(void) {
    /* Original at 0x0225D4D0 */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    add r3, r0, #0\n    mov r4, #1\n    add r3, #0xe0\n    strb r4, [r3]\n    add r3, r0, #0\n    add r3, #0xe1\n    strb r1, [r3]\n    add r0, #0xe2\n    strb r2, [r0]\n    pop {r3, r4}\n    bx lr"
    );
    #endif
}

void ov49_0225D4E8(void) {
    /* Original at 0x0225D4E8 */
    /* Requires manual decompilation - 4 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0\n    add r0, #0xe0\n    strb r1, [r0]\n    bx lr"
    );
    #endif
}

void ov49_0225D4F0(void) {
    sub_020182C4();
}

void ov49_0225D4FC(void) {
    /* Original at 0x0225D4FC */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r2, #0\n    lsl r2, r1, #2\n    add r1, r1, r2\n    add r4, r0, r1\n    cmp r4, #0x19\n    blo _0225D50E\n    bl GF_AssertFail\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #0xca\n    add r1, r4, #1\n    mov r2, #0\n    add r3, r5, #0\n    bl GfGfxLoader_LoadFromNarc\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov49_0225D520(void) {
    Heap_Free();
}

void ov49_0225D528(void) {
    /* Original at 0x0225D528 */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov49_02258830\n    ldr r0, [r4]\n    bl NNS_G3dGetMdlSet\n    str r0, [r4, #4]\n    cmp r0, #0\n    beq _0225D55C\n    add r2, r0, #0\n    add r2, #8\n    beq _0225D550\n    ldrb r1, [r0, #9]\n    cmp r1, #0\n    bls _0225D550\n    ldrh r1, [r0, #0xe]\n    add r1, r2, r1\n    add r1, r1, #4\n    b _0225D552\n    mov r1, #0\n    cmp r1, #0\n    beq _0225D55C\n    ldr r1, [r1]\n    add r0, r0, r1\n    b _0225D55E\n    mov r0, #0\n    str r0, [r4, #8]\n    ldr r0, [r4]\n    bl NNS_G3dGetTex\n    str r0, [r4, #0xc]\n    ldr r0, [r4]\n    ldr r1, [r4, #0xc]\n    bl GF3dRender_BindModelSet\n    pop {r4, pc}"
    );
    #endif
}

void ov49_0225D574(void) {
    sub_02018068();
}

void ov49_0225D57C(void) {
    /* Original at 0x0225D57C */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r0, r1, #0\n    add r4, r2, #0\n    bl sub_020181A4\n    add r1, r0, #0\n    ldr r0, [r5]\n    add r0, r0, r4\n    cmp r0, r1\n    bge _0225D596\n    str r0, [r5]\n    pop {r3, r4, r5, pc}\n    bl _s32_div_f\n    str r1, [r5]\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov49_0225D5A0(void) {
    /* Original at 0x0225D5A0 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r0, r1, #0\n    add r4, r2, #0\n    bl sub_020181A4\n    ldr r1, [r5]\n    add r1, r1, r4\n    cmp r1, r0\n    bge _0225D5BA\n    str r1, [r5]\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    mov r1, #2\n    lsl r1, r1, #0xa\n    sub r0, r0, r1\n    str r0, [r5]\n    mov r0, #1\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov49_0225D5C8(void) {
    sub_020181A4();
}

void ov49_0225D5E4(void) {
    /* Original at 0x0225D5E4 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, [r0]\n    sub r1, r1, r2\n    cmp r1, #0\n    ble _0225D5F2\n    str r1, [r0]\n    mov r0, #0\n    bx lr\n    mov r1, #0\n    str r1, [r0]\n    mov r0, #1\n    bx lr"
    );
    #endif
}

void ov49_0225D5FC(void) {
    /* Original at 0x0225D5FC */
    /* Requires manual decompilation - 84 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x1c\n    str r0, [sp, #8]\n    ldr r0, [sp, #0x30]\n    mov r7, #6\n    ldr r5, [sp, #8]\n    str r1, [sp, #0xc]\n    str r2, [sp, #0x10]\n    str r3, [sp, #0x14]\n    str r0, [sp, #0x30]\n    mov r6, #0\n    add r4, r2, #0\n    lsl r7, r7, #6\n    ldr r1, [sp, #0xc]\n    ldr r2, [r4, r7]\n    ldr r3, [sp, #0x14]\n    add r0, r5, #0\n    bl ov49_0225D528\n    ldr r0, [r5]\n    bl ov45_0222D740\n    add r6, r6, #1\n    add r4, r4, #4\n    add r5, #0x10\n    cmp r6, #2\n    blt _0225D616\n    ldr r6, [sp, #8]\n    ldr r4, [sp, #0x10]\n    add r0, r6, #0\n    add r5, r6, #0\n    str r0, [sp, #0x18]\n    add r0, #0x10\n    mov r7, #0\n    add r5, #0x20\n    str r0, [sp, #0x18]\n    mov r0, #6\n    ldr r1, [sp, #0x10]\n    lsl r0, r0, #6\n    ldr r1, [r1, r0]\n    add r0, #0xc\n    ldr r0, [r4, r0]\n    cmp r1, r0\n    bne _0225D65E\n    add r1, r6, #0\n    add r1, #0x84\n    mov r0, #0\n    str r0, [r1]\n    b _0225D69C\n    add r1, r6, #0\n    add r1, #0x84\n    mov r0, #1\n    str r0, [r1]\n    cmp r7, #3\n    beq _0225D684\n    ldr r0, [sp, #0x14]\n    mov r3, #0x63\n    str r0, [sp]\n    ldr r0, [sp, #0x30]\n    lsl r3, r3, #2\n    str r0, [sp, #4]\n    ldr r1, [sp, #8]\n    ldr r2, [sp, #0xc]\n    ldr r3, [r4, r3]\n    add r0, r5, #0\n    bl sub_020180BC\n    b _0225D69C\n    ldr r0, [sp, #0x14]\n    mov r3, #0x63\n    str r0, [sp]\n    ldr r0, [sp, #0x30]\n    lsl r3, r3, #2\n    str r0, [sp, #4]\n    ldr r1, [sp, #0x18]\n    ldr r2, [sp, #0xc]\n    ldr r3, [r4, r3]\n    add r0, r5, #0\n    bl sub_020180BC\n    add r7, r7, #1\n    add r4, r4, #4\n    add r6, r6, #4\n    add r5, #0x14\n    cmp r7, #5\n    blt _0225D644\n    add sp, #0x1c\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov49_0225D6AC(void) {
    /* Original at 0x0225D6AC */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    add r5, r6, #0\n    str r1, [sp]\n    mov r7, #0\n    add r4, r6, #0\n    add r5, #0x20\n    add r0, r4, #0\n    add r0, #0x84\n    ldr r0, [r0]\n    cmp r0, #0\n    beq _0225D6D4\n    ldr r1, [sp]\n    add r0, r5, #0\n    bl sub_020180F8\n    add r1, r4, #0\n    add r1, #0x84\n    mov r0, #0\n    str r0, [r1]\n    add r7, r7, #1\n    add r4, r4, #4\n    add r5, #0x14\n    cmp r7, #5\n    blt _0225D6BA\n    mov r4, #0\n    add r0, r6, #0\n    bl ov49_0225D574\n    add r4, r4, #1\n    add r6, #0x10\n    cmp r4, #2\n    blt _0225D6E0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov49_0225D6F0(void) {
    /* Original at 0x0225D6F0 */
    /* Requires manual decompilation - 58 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r6, r0, #0\n    mov r0, #1\n    add r7, r1, #0\n    str r0, [r6]\n    mov r0, #0\n    str r0, [sp]\n    add r4, r7, #0\n    add r5, r6, #4\n    add r0, r5, #0\n    add r1, r4, #0\n    bl sub_020181B0\n    add r0, r5, #0\n    mov r1, #1\n    bl sub_020182A0\n    ldr r0, [sp]\n    add r4, #0x10\n    add r0, r0, #1\n    add r5, #0x78\n    str r0, [sp]\n    cmp r0, #2\n    blt _0225D704\n    add r0, r6, #0\n    str r0, [sp, #8]\n    add r0, #0x7c\n    add r4, r7, #0\n    str r0, [sp, #8]\n    add r0, r6, #4\n    mov r5, #0\n    add r4, #0x20\n    str r0, [sp, #4]\n    add r0, r7, #0\n    add r0, #0x84\n    ldr r0, [r0]\n    cmp r0, #1\n    bne _0225D75C\n    add r1, r6, #0\n    add r1, #0xf4\n    mov r0, #1\n    str r0, [r1]\n    cmp r5, #3\n    beq _0225D754\n    ldr r0, [sp, #4]\n    add r1, r4, #0\n    bl sub_020181D4\n    b _0225D75C\n    ldr r0, [sp, #8]\n    add r1, r4, #0\n    bl sub_020181D4\n    add r5, r5, #1\n    add r7, r7, #4\n    add r6, r6, #4\n    add r4, #0x14\n    cmp r5, #4\n    blt _0225D734\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov49_0225D76C(void) {
    /* Original at 0x0225D76C */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r0, #0\n    add r5, r1, #0\n    str r0, [sp]\n    add r0, #0x7c\n    mov r6, #0\n    add r4, r7, #0\n    add r5, #0x20\n    str r0, [sp]\n    add r0, r4, #0\n    add r0, #0xf4\n    ldr r0, [r0]\n    cmp r0, #1\n    bne _0225D7A6\n    add r1, r4, #0\n    add r1, #0xf4\n    mov r0, #0\n    str r0, [r1]\n    cmp r6, #3\n    beq _0225D79E\n    add r0, r7, #4\n    add r1, r5, #0\n    bl sub_020181E0\n    b _0225D7A6\n    ldr r0, [sp]\n    add r1, r5, #0\n    bl sub_020181E0\n    add r6, r6, #1\n    add r4, r4, #4\n    add r5, #0x14\n    cmp r6, #4\n    blt _0225D77E\n    mov r0, #0\n    str r0, [r7]\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov49_0225D7B8(void) {
    /* Original at 0x0225D7B8 */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    add r4, r1, #0\n    mov r0, #0x42\n    add r4, #0x20\n    lsl r0, r0, #2\n    add r6, r5, r0\n    add r7, r4, #0\n    add r0, r5, #0\n    add r0, #0xf4\n    ldr r0, [r0]\n    cmp r0, #0\n    beq _0225D7EE\n    mov r2, #1\n    add r0, r6, #0\n    add r1, r4, #0\n    lsl r2, r2, #0xc\n    bl ov49_0225D57C\n    mov r1, #0x42\n    lsl r1, r1, #2\n    ldr r1, [r5, r1]\n    add r0, r7, #0\n    bl sub_02018198\n    ldr r0, [sp]\n    add r5, r5, #4\n    add r0, r0, #1\n    add r4, #0x14\n    add r6, r6, #4\n    add r7, #0x14\n    str r0, [sp]\n    cmp r0, #5\n    blt _0225D7CC\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov49_0225D804(void) {
    sub_020181EC(0);
}

void ov49_0225D820(void) {
    /* Original at 0x0225D820 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r1, #0x49\n    lsl r1, r1, #2\n    ldrb r4, [r0, r1]\n    mov r2, #0\n    cmp r4, #0\n    ble _0225D84A\n    sub r1, #8\n    ldr r3, [r0, r1]\n    add r1, r3, #0\n    ldrb r0, [r1]\n    cmp r0, #0\n    bne _0225D842\n    mov r0, #0xb4\n    mul r0, r2\n    add r0, r3, r0\n    pop {r4, pc}\n    add r2, r2, #1\n    add r1, #0xb4\n    cmp r2, r4\n    blt _0225D834\n    bl GF_AssertFail\n    mov r0, #0\n    pop {r4, pc}"
    );
    #endif
}

void ov49_0225D854(void) {
    /* Original at 0x0225D854 */
    /* Requires manual decompilation - 184 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x44\n    str r0, [sp, #8]\n    ldr r0, [sp, #0x58]\n    mov r7, #0x4a\n    str r0, [sp, #0x58]\n    mov r0, #0\n    str r0, [sp, #0x40]\n    add r0, r3, #0\n    str r0, [sp, #0x24]\n    ldr r0, [sp, #8]\n    str r1, [sp, #0xc]\n    str r0, [sp, #0x20]\n    add r0, #0x20\n    str r2, [sp, #0x10]\n    str r3, [sp, #0x14]\n    str r0, [sp, #0x20]\n    lsl r7, r7, #2\n    ldr r4, [sp, #0x24]\n    ldr r5, [sp, #0x20]\n    mov r6, #0\n    ldr r1, [sp, #0xc]\n    ldr r2, [r4, r7]\n    ldr r3, [sp, #0x58]\n    add r0, r5, #0\n    bl ov49_02258830\n    add r6, r6, #1\n    add r4, r4, #4\n    add r5, r5, #4\n    cmp r6, #3\n    blt _0225D87E\n    ldr r0, [sp, #0x24]\n    add r0, #0xc\n    str r0, [sp, #0x24]\n    ldr r0, [sp, #0x20]\n    add r0, #0xc\n    str r0, [sp, #0x20]\n    ldr r0, [sp, #0x40]\n    add r0, r0, #1\n    str r0, [sp, #0x40]\n    cmp r0, #2\n    blt _0225D878\n    ldr r4, [sp, #8]\n    ldr r6, [sp, #0x14]\n    mov r7, #0\n    add r5, r4, #0\n    mov r0, #0\n    mov r1, #0x12\n    str r0, [sp]\n    lsl r1, r1, #4\n    ldr r0, [sp, #0xc]\n    ldr r1, [r6, r1]\n    ldr r3, [sp, #0x58]\n    mov r2, #0\n    bl GfGfxLoader_LoadFromOpenNarc\n    str r0, [r4]\n    bl NNS_G3dGetMdlSet\n    str r0, [r4, #4]\n    cmp r0, #0\n    beq _0225D8F2\n    add r1, r0, #0\n    add r1, #8\n    beq _0225D8E6\n    ldrb r2, [r0, #9]\n    cmp r2, #0\n    bls _0225D8E6\n    ldrh r2, [r0, #0xe]\n    add r1, r1, r2\n    add r1, r1, #4\n    b _0225D8E8\n    mov r1, #0\n    cmp r1, #0\n    beq _0225D8F2\n    ldr r1, [r1]\n    add r0, r0, r1\n    b _0225D8F4\n    mov r0, #0\n    str r0, [r4, #8]\n    ldr r0, [r5, #0x20]\n    bl NNS_G3dGetTex\n    str r0, [r4, #0xc]\n    add r7, r7, #1\n    add r6, r6, #4\n    add r4, #0x10\n    add r5, #0xc\n    cmp r7, #2\n    blt _0225D8B2\n    mov r0, #0\n    str r0, [sp, #0x1c]\n    ldr r0, [sp, #0x14]\n    ldr r7, [sp, #0x14]\n    str r0, [sp, #0x3c]\n    ldr r0, [sp, #8]\n    str r0, [sp, #0x38]\n    add r0, #0x38\n    str r0, [sp, #0x38]\n    ldr r0, [sp, #0x14]\n    str r0, [sp, #0x34]\n    ldr r0, [sp, #8]\n    str r0, [sp, #0x30]\n    mov r0, #0\n    str r0, [sp, #0x18]\n    ldr r0, [sp, #0x3c]\n    ldr r6, [sp, #0x34]\n    str r0, [sp, #0x2c]\n    ldr r0, [sp, #0x38]\n    ldr r5, [sp, #0x30]\n    str r0, [sp, #0x28]\n    mov r0, #5\n    ldr r1, [sp, #0x2c]\n    lsl r0, r0, #6\n    ldr r3, [r1, r0]\n    ldr r1, [sp, #0x14]\n    sub r0, #0x20\n    ldr r0, [r1, r0]\n    cmp r0, r3\n    beq _0225D988\n    ldr r0, [sp, #0x58]\n    ldr r1, [sp, #8]\n    str r0, [sp]\n    ldr r0, [sp, #0x10]\n    ldr r2, [sp, #0xc]\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x28]\n    bl sub_020180BC\n    ldr r0, [sp, #0x18]\n    cmp r0, #1\n    blt _0225D988\n    mov r0, #0x16\n    lsl r0, r0, #4\n    ldr r0, [r7, r0]\n    mov r4, #0\n    cmp r0, #0\n    bls _0225D988\n    mov r0, #0x59\n    lsl r0, r0, #2\n    ldr r0, [r6, r0]\n    cmp r4, r0\n    beq _0225D97C\n    ldr r0, [r5, #0x40]\n    add r1, r4, #0\n    bl NNS_G3dAnmObjDisableID\n    mov r0, #0x16\n    lsl r0, r0, #4\n    ldr r0, [r7, r0]\n    add r4, r4, #1\n    cmp r4, r0\n    blo _0225D96A\n    ldr r0, [sp, #0x2c]\n    add r6, r6, #4\n    add r0, r0, #4\n    str r0, [sp, #0x2c]\n    ldr r0, [sp, #0x28]\n    add r5, #0x14\n    add r0, #0x14\n    str r0, [sp, #0x28]\n    ldr r0, [sp, #0x18]\n    add r0, r0, #1\n    str r0, [sp, #0x18]\n    cmp r0, #4\n    blt _0225D934\n    ldr r0, [sp, #0x3c]\n    add r7, r7, #4\n    add r0, #0x10\n    str r0, [sp, #0x3c]\n    ldr r0, [sp, #8]\n    add r0, #0x10\n    str r0, [sp, #8]\n    ldr r0, [sp, #0x38]\n    add r0, #0x50\n    str r0, [sp, #0x38]\n    ldr r0, [sp, #0x34]\n    add r0, #0xc\n    str r0, [sp, #0x34]\n    ldr r0, [sp, #0x30]\n    add r0, #0x50\n    str r0, [sp, #0x30]\n    ldr r0, [sp, #0x1c]\n    add r0, r0, #1\n    str r0, [sp, #0x1c]\n    cmp r0, #2\n    blt _0225D924\n    add sp, #0x44\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov49_0225D9D0(void) {
    /* Original at 0x0225D9D0 */
    /* Requires manual decompilation - 72 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    str r0, [sp]\n    ldr r7, [sp]\n    mov r0, #0\n    add r6, r1, #0\n    str r0, [sp, #8]\n    add r7, #0x38\n    mov r4, #0\n    add r5, r7, #0\n    add r0, r5, #0\n    add r1, r6, #0\n    bl sub_020180F8\n    add r4, r4, #1\n    add r5, #0x14\n    cmp r4, #4\n    blt _0225D9E4\n    ldr r0, [sp, #8]\n    add r7, #0x50\n    add r0, r0, #1\n    str r0, [sp, #8]\n    cmp r0, #2\n    blt _0225D9E0\n    ldr r4, [sp]\n    mov r5, #0\n    ldr r0, [r4]\n    bl Heap_Free\n    add r5, r5, #1\n    add r4, #0x10\n    cmp r5, #2\n    blt _0225DA04\n    mov r0, #0\n    ldr r7, _0225DA68 ; =NNS_GfdDefaultFuncFreeTexVram\n    str r0, [sp, #4]\n    ldr r4, [sp]\n    mov r5, #0\n    ldr r0, [r4, #0x20]\n    bl NNS_G3dGetTex\n    add r1, sp, #0x10\n    add r2, sp, #0xc\n    add r6, r0, #0\n    bl NNS_G3dTexReleaseTexKey\n    ldr r0, [sp, #0x10]\n    ldr r1, [r7]\n    blx r1\n    ldr r0, [sp, #0xc]\n    ldr r1, [r7]\n    blx r1\n    add r0, r6, #0\n    bl NNS_G3dPlttReleasePlttKey\n    ldr r1, _0225DA6C ; =NNS_GfdDefaultFuncFreePlttVram\n    ldr r1, [r1]\n    blx r1\n    ldr r0, [r4, #0x20]\n    bl Heap_Free\n    add r5, r5, #1\n    add r4, r4, #4\n    cmp r5, #3\n    blt _0225DA1C\n    ldr r0, [sp]\n    add r0, #0xc\n    str r0, [sp]\n    ldr r0, [sp, #4]\n    add r0, r0, #1\n    str r0, [sp, #4]\n    cmp r0, #2\n    blt _0225DA18\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _0225DA68: .word NNS_GfdDefaultFuncFreeTexVram\n    _0225DA6C: .word NNS_GfdDefaultFuncFreePlttVram"
    );
    #endif
}

void ov49_0225DA70(void) {
    /* Original at 0x0225DA70 */
    /* Requires manual decompilation - 64 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r5, r0, #0\n    mov r7, #0\n    str r0, [sp]\n    add r4, r0, #0\n    add r0, r1, #0\n    str r1, [sp, #4]\n    add r0, #0x38\n    add r6, r7, #0\n    add r5, #0x8c\n    str r0, [sp, #4]\n    ldr r0, [r4, #0x7c]\n    cmp r0, #0\n    beq _0225DAEC\n    cmp r7, #3\n    bhi _0225DAE8\n    add r0, r7, r7\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0225DA9E: ; jump table\n    ldr r1, [sp]\n    mov r2, #0x50\n    ldrb r1, [r1, #2]\n    add r0, r5, #0\n    mul r2, r1\n    ldr r1, [sp, #4]\n    add r1, r1, r2\n    mov r2, #1\n    add r1, r1, r6\n    lsl r2, r2, #0xc\n    bl ov49_0225D57C\n    b _0225DAEC\n    ldr r1, [sp]\n    mov r2, #0x50\n    ldrb r1, [r1, #2]\n    add r0, r5, #0\n    mul r2, r1\n    ldr r1, [sp, #4]\n    add r1, r1, r2\n    mov r2, #1\n    add r1, r1, r6\n    lsl r2, r2, #0xc\n    bl ov49_0225D5A0\n    cmp r0, #1\n    bne _0225DAEC\n    mov r0, #0\n    add r1, r4, #0\n    str r0, [r4, #0x7c]\n    add r1, #0x8c\n    str r0, [r1]\n    b _0225DAEC\n    bl GF_AssertFail\n    add r7, r7, #1\n    add r4, r4, #4\n    add r6, #0x14\n    add r5, r5, #4\n    cmp r7, #4\n    blt _0225DA88\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov49_0225DAFC(void) {
    /* Original at 0x0225DAFC */
    /* Requires manual decompilation - 114 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    ldrb r0, [r5]\n    str r1, [sp]\n    cmp r0, #0\n    beq _0225DBF2\n    ldrb r0, [r5, #2]\n    lsl r1, r0, #4\n    ldr r0, [sp]\n    add r0, r0, r1\n    add r1, r5, #4\n    bl ov49_022588A0\n    cmp r0, #0\n    beq _0225DBF2\n    ldrb r0, [r5, #1]\n    cmp r0, #3\n    blo _0225DB26\n    bl GF_AssertFail\n    ldrb r0, [r5, #2]\n    cmp r0, #2\n    blo _0225DB30\n    bl GF_AssertFail\n    ldrb r1, [r5, #2]\n    mov r0, #0xc\n    add r2, r1, #0\n    mul r2, r0\n    ldr r0, [sp]\n    add r1, r0, r2\n    ldrb r0, [r5, #1]\n    lsl r0, r0, #2\n    add r0, r1, r0\n    ldr r0, [r0, #0x20]\n    bl NNS_G3dGetTex\n    ldrb r1, [r5, #2]\n    lsl r2, r1, #4\n    ldr r1, [sp]\n    add r1, r1, r2\n    str r0, [r1, #0xc]\n    ldrb r0, [r5, #2]\n    lsl r1, r0, #4\n    ldr r0, [sp]\n    add r1, r0, r1\n    ldr r0, [r1, #4]\n    ldr r1, [r1, #0xc]\n    bl NNS_G3dBindMdlSet\n    cmp r0, #0\n    bne _0225DB6A\n    bl GF_AssertFail\n    ldr r7, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    add r6, r5, #0\n    add r4, r0, #0\n    add r7, #0x38\n    ldr r0, [r6, #0x7c]\n    cmp r0, #0\n    beq _0225DBA0\n    ldrb r2, [r5, #2]\n    mov r1, #0x50\n    add r0, r5, #4\n    mul r1, r2\n    add r1, r7, r1\n    add r1, r1, r4\n    bl sub_020181D4\n    ldrb r1, [r5, #2]\n    mov r0, #0x50\n    mul r0, r1\n    add r1, r6, #0\n    add r1, #0x8c\n    add r0, r7, r0\n    ldr r1, [r1]\n    add r0, r0, r4\n    bl sub_02018198\n    ldr r0, [sp, #4]\n    add r6, r6, #4\n    add r0, r0, #1\n    add r4, #0x14\n    str r0, [sp, #4]\n    cmp r0, #4\n    blt _0225DB76\n    add r0, r5, #4\n    bl sub_020181EC\n    ldr r0, [sp]\n    mov r7, #0\n    str r0, [sp, #8]\n    add r0, #0x38\n    add r6, r5, #0\n    add r4, r7, #0\n    str r0, [sp, #8]\n    ldr r0, [r6, #0x7c]\n    cmp r0, #0\n    beq _0225DBDA\n    ldrb r1, [r5, #2]\n    mov r2, #0x50\n    add r0, r5, #4\n    mul r2, r1\n    ldr r1, [sp, #8]\n    add r1, r1, r2\n    add r1, r1, r4\n    bl sub_020181E0\n    add r7, r7, #1\n    add r6, r6, #4\n    add r4, #0x14\n    cmp r7, #4\n    blt _0225DBC2\n    ldrb r0, [r5, #2]\n    lsl r1, r0, #4\n    ldr r0, [sp]\n    add r0, r0, r1\n    ldr r0, [r0, #4]\n    bl NNS_G3dReleaseMdlSet\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov49_0225DBF8(void) {
    /* Original at 0x0225DBF8 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r3, _0225DC28 ; =0x00000125\n    mov r1, #0\n    ldrb r2, [r0, r3]\n    cmp r2, #0\n    ble _0225DC20\n    sub r3, r3, #5\n    ldr r4, [r0, r3]\n    add r3, r4, #0\n    ldrh r0, [r3]\n    cmp r0, #0\n    bne _0225DC18\n    mov r0, #0xe4\n    mul r0, r1\n    add r0, r4, r0\n    pop {r4, pc}\n    add r1, r1, #1\n    add r3, #0xe4\n    cmp r1, r2\n    blt _0225DC0A\n    bl GF_AssertFail\n    mov r0, #0\n    pop {r4, pc}\n    _0225DC28: .word 0x00000125"
    );
    #endif
}

void ov49_0225DC2C(void) {
    /* Original at 0x0225DC2C */
    /* Requires manual decompilation - 68 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x30]\n    add r7, r3, #0\n    str r0, [sp, #0x30]\n    mov r0, #0\n    str r0, [sp, #0x14]\n    ldr r0, [sp, #4]\n    str r1, [sp, #8]\n    str r7, [sp, #0x10]\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #4]\n    ldr r1, [sp, #8]\n    ldr r2, [r7]\n    ldr r3, [sp, #0x30]\n    bl ov49_0225D528\n    ldr r0, [sp, #0x14]\n    cmp r0, #0xb\n    beq _0225DC62\n    cmp r0, #0xc\n    beq _0225DC62\n    ldr r0, [sp, #4]\n    ldr r0, [r0]\n    bl ov45_0222D740\n    ldr r4, [sp, #0x10]\n    ldr r5, [sp, #0xc]\n    mov r6, #0\n    ldr r1, [r4, #0x48]\n    ldr r0, [r7]\n    cmp r0, r1\n    beq _0225DC86\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, [sp, #8]\n    ldr r3, [sp, #0x30]\n    mov r2, #0\n    bl GfGfxLoader_LoadFromOpenNarc\n    mov r1, #0x12\n    lsl r1, r1, #4\n    str r0, [r5, r1]\n    b _0225DC8E\n    mov r0, #0x12\n    mov r1, #0\n    lsl r0, r0, #4\n    str r1, [r5, r0]\n    add r6, r6, #1\n    add r4, r4, #4\n    add r5, r5, #4\n    cmp r6, #3\n    blt _0225DC68\n    ldr r0, [sp, #4]\n    add r7, r7, #4\n    add r0, #0x10\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x10]\n    add r0, #0xc\n    str r0, [sp, #0x10]\n    ldr r0, [sp, #0xc]\n    add r0, #0xc\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #0x14]\n    add r0, r0, #1\n    str r0, [sp, #0x14]\n    cmp r0, #0x12\n    blt _0225DC44\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov49_0225DCBC(void) {
    /* Original at 0x0225DCBC */
    /* Requires manual decompilation - 38 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #8]\n    ldr r0, [sp]\n    mov r7, #0x12\n    str r0, [sp, #4]\n    mov r6, #0\n    lsl r7, r7, #4\n    ldr r5, [sp]\n    mov r4, #0\n    ldr r0, [r5, r7]\n    cmp r0, #0\n    beq _0225DCE4\n    bl Heap_Free\n    mov r0, #0x12\n    lsl r0, r0, #4\n    str r6, [r5, r0]\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #3\n    blt _0225DCD4\n    ldr r0, [sp, #4]\n    bl ov49_0225D574\n    ldr r0, [sp]\n    add r0, #0xc\n    str r0, [sp]\n    ldr r0, [sp, #4]\n    add r0, #0x10\n    str r0, [sp, #4]\n    ldr r0, [sp, #8]\n    add r0, r0, #1\n    str r0, [sp, #8]\n    cmp r0, #0x12\n    blt _0225DCD0\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov49_0225DD0C(void) {
    /* Original at 0x0225DD0C */
    /* Requires manual decompilation - 41 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    ldrh r0, [r4]\n    cmp r0, #0\n    beq _0225DD64\n    ldrh r0, [r4, #2]\n    add r1, r4, #4\n    lsl r0, r0, #4\n    add r0, r5, r0\n    bl ov49_022588A0\n    cmp r0, #0\n    beq _0225DD64\n    add r0, r4, #0\n    add r0, #0xe0\n    ldrb r0, [r0]\n    cmp r0, #1\n    bne _0225DD44\n    ldrh r0, [r4, #2]\n    add r1, r4, #0\n    add r1, #0xe1\n    lsl r0, r0, #4\n    add r0, r5, r0\n    ldrb r1, [r1]\n    ldr r0, [r0, #8]\n    bl NNS_G3dMdlSetMdlAlphaAll\n    add r0, r4, #4\n    bl sub_020181EC\n    add r0, r4, #0\n    add r0, #0xe0\n    ldrb r0, [r0]\n    cmp r0, #1\n    bne _0225DD64\n    ldrh r0, [r4, #2]\n    add r4, #0xe2\n    ldrb r1, [r4]\n    lsl r0, r0, #4\n    add r0, r5, r0\n    ldr r0, [r0, #8]\n    bl NNS_G3dMdlSetMdlAlphaAll\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov49_0225DD68(void) {
    /* Original at 0x0225DD68 */
    /* Requires manual decompilation - 194 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x1c\n    add r4, r1, #0\n    str r0, [sp]\n    add r0, r4, #0\n    str r0, [sp, #0xc]\n    add r0, #0x7c\n    add r7, r4, #0\n    mov r5, #0\n    str r0, [sp, #0xc]\n    add r7, #0xc0\n    add r6, r4, #0\n    str r0, [sp, #8]\n    add r0, r4, r5\n    add r0, #0xb8\n    ldrb r0, [r0]\n    cmp r0, #0\n    beq _0225DDEE\n    add r0, r4, r5\n    add r0, #0xbc\n    ldrb r0, [r0]\n    cmp r0, #6\n    bhi _0225DDEE\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0225DDA2: ; jump table\n    add r2, r4, #0\n    add r2, #0xdc\n    ldr r1, [sp, #0xc]\n    ldr r2, [r2]\n    add r0, r7, #0\n    bl ov49_0225D57C\n    add r1, r6, #0\n    add r1, #0xc0\n    ldr r0, [sp, #8]\n    ldr r1, [r1]\n    bl sub_02018198\n    b _0225DEFC\n    add r2, r4, #0\n    add r2, #0xdc\n    ldr r1, [sp, #0xc]\n    ldr r2, [r2]\n    add r0, r7, #0\n    bl ov49_0225D5A0\n    add r1, r6, #0\n    add r1, #0xc0\n    str r0, [sp, #0x14]\n    ldr r0, [sp, #8]\n    ldr r1, [r1]\n    bl sub_02018198\n    ldr r0, [sp, #0x14]\n    cmp r0, #1\n    beq _0225DDF0\n    b _0225DEFC\n    add r0, r6, #0\n    add r0, #0xd0\n    ldr r0, [r0]\n    add r1, r4, #0\n    str r0, [sp, #0x10]\n    ldr r0, [sp]\n    add r2, r5, #0\n    bl ov49_0225D328\n    ldr r0, [sp, #0x10]\n    cmp r0, #0\n    beq _0225DEFC\n    ldr r0, [sp]\n    ldr r2, [sp, #0x10]\n    add r1, r4, #0\n    blx r2\n    b _0225DEFC\n    add r2, r4, #0\n    add r2, #0xdc\n    ldr r1, [sp, #0xc]\n    ldr r2, [r2]\n    add r0, r7, #0\n    bl ov49_0225D5C8\n    add r1, r6, #0\n    add r1, #0xc0\n    ldr r0, [sp, #8]\n    ldr r1, [r1]\n    bl sub_02018198\n    b _0225DEFC\n    add r2, r4, #0\n    add r2, #0xdc\n    ldr r1, [sp, #0xc]\n    ldr r2, [r2]\n    add r0, r7, #0\n    bl ov49_0225D5E4\n    add r1, r6, #0\n    add r1, #0xc0\n    str r0, [sp, #0x18]\n    ldr r0, [sp, #8]\n    ldr r1, [r1]\n    bl sub_02018198\n    ldr r0, [sp, #0x18]\n    cmp r0, #1\n    bne _0225DEFC\n    add r0, r6, #0\n    add r0, #0xd0\n    ldr r0, [r0]\n    add r1, r4, #0\n    str r0, [sp, #4]\n    ldr r0, [sp]\n    add r2, r5, #0\n    bl ov49_0225D328\n    ldr r0, [sp, #4]\n    cmp r0, #0\n    beq _0225DEFC\n    ldr r0, [sp]\n    ldr r2, [sp, #4]\n    add r1, r4, #0\n    blx r2\n    b _0225DEFC\n    add r0, r4, r5\n    add r0, #0xcd\n    ldrb r0, [r0]\n    cmp r0, #0\n    beq _0225DE8C\n    add r0, r4, r5\n    add r0, #0xcd\n    ldrb r0, [r0]\n    sub r1, r0, #1\n    add r0, r4, r5\n    add r0, #0xcd\n    strb r1, [r0]\n    b _0225DEFC\n    add r2, r4, #0\n    add r2, #0xdc\n    ldr r1, [sp, #0xc]\n    ldr r2, [r2]\n    add r0, r7, #0\n    bl ov49_0225D5A0\n    cmp r0, #1\n    bne _0225DEBA\n    bl MTRandom\n    add r1, r4, #0\n    add r1, #0xcc\n    ldrb r1, [r1]\n    bl _u32_div_f\n    add r0, r4, r5\n    add r0, #0xcd\n    strb r1, [r0]\n    add r1, r6, #0\n    add r1, #0xc0\n    mov r0, #0\n    str r0, [r1]\n    add r1, r6, #0\n    add r1, #0xc0\n    ldr r0, [sp, #8]\n    ldr r1, [r1]\n    bl sub_02018198\n    b _0225DEFC\n    add r0, r4, r5\n    add r0, #0xcd\n    ldrb r0, [r0]\n    cmp r0, #0\n    beq _0225DEE2\n    add r0, r4, r5\n    add r0, #0xcd\n    ldrb r0, [r0]\n    sub r1, r0, #1\n    add r0, r4, r5\n    add r0, #0xcd\n    strb r1, [r0]\n    b _0225DEFC\n    add r2, r4, #0\n    add r2, #0xdc\n    ldr r1, [sp, #0xc]\n    ldr r2, [r2]\n    add r0, r7, #0\n    bl ov49_0225D57C\n    add r1, r6, #0\n    add r1, #0xc0\n    ldr r0, [sp, #8]\n    ldr r1, [r1]\n    bl sub_02018198\n    ldr r0, [sp, #0xc]\n    add r5, r5, #1\n    add r0, #0x14\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #8]\n    add r7, r7, #4\n    add r0, #0x14\n    add r6, r6, #4\n    str r0, [sp, #8]\n    cmp r5, #3\n    bge _0225DF14\n    b _0225DD82\n    add sp, #0x1c\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov49_0225DF18(void) {
    /* Original at 0x0225DF18 */
    /* Requires manual decompilation - 404 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x34\n    add r6, r1, #0\n    add r5, r0, #0\n    ldr r1, _0225E284 ; =0x00000614\n    add r0, r3, #0\n    add r7, r2, #0\n    str r3, [sp, #4]\n    bl Heap_Alloc\n    ldr r2, _0225E284 ; =0x00000614\n    mov r1, #0\n    add r4, r0, #0\n    bl memset\n    mov r0, #0x61\n    str r7, [r4]\n    lsl r0, r0, #4\n    strb r5, [r4, r0]\n    add r0, r0, #1\n    strb r6, [r4, r0]\n    ldr r2, [sp, #4]\n    ldr r3, [sp, #0x48]\n    mov r0, #9\n    mov r1, #0x80\n    bl ov49_0225CC4C\n    str r0, [r4, #4]\n    ldr r0, [sp, #0x48]\n    ldr r3, [sp, #4]\n    str r0, [sp]\n    ldr r0, [r4, #4]\n    add r1, r6, #0\n    add r2, r5, #0\n    bl ov49_0225CDEC\n    mov r0, #0\n    ldr r5, _0225E288 ; =ov49_02269AAC\n    str r0, [sp, #0xc]\n    mov r0, #0\n    str r0, [sp]\n    ldrh r1, [r5]\n    str r0, [sp, #8]\n    add r2, sp, #0x1c\n    ldr r0, [r4]\n    add r2, #2\n    add r3, sp, #0x1c\n    bl ov49_022589D8\n    cmp r0, #1\n    beq _0225DF80\n    b _0225E234\n    mov r0, #0x92\n    lsl r0, r0, #2\n    add r0, r4, r0\n    str r0, [sp, #0x10]\n    mov r0, #0xda\n    lsl r0, r0, #2\n    add r0, r4, r0\n    str r0, [sp, #0x14]\n    ldr r0, _0225E28C ; =0x000004E8\n    mov r7, sp\n    add r0, r4, r0\n    str r0, [sp, #0x18]\n    sub r7, r7, #4\n    add r6, sp, #0x1c\n    ldrh r1, [r5, #2]\n    ldrh r2, [r6, #2]\n    ldrh r3, [r6]\n    ldr r0, [r4, #4]\n    bl ov49_0225D098\n    ldr r1, _0225E290 ; =0x00000612\n    ldrb r1, [r4, r1]\n    lsl r1, r1, #2\n    add r1, r4, r1\n    str r0, [r1, #8]\n    ldrh r0, [r5, #2]\n    cmp r0, #0x10\n    bls _0225DFBA\n    b _0225E20E\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0225DFC6: ; jump table\n    ldr r1, _0225E290 ; =0x00000612\n    mov r2, #0\n    ldrb r1, [r4, r1]\n    ldr r0, [r4, #4]\n    add r3, r2, #0\n    lsl r1, r1, #2\n    add r1, r4, r1\n    ldr r1, [r1, #8]\n    bl ov49_0225D214\n    ldr r0, _0225E290 ; =0x00000612\n    ldrb r0, [r4, r0]\n    lsl r0, r0, #2\n    add r0, r4, r0\n    ldr r2, [r0, #8]\n    ldrh r0, [r5, #2]\n    lsl r0, r0, #2\n    add r1, r4, r0\n    mov r0, #0x85\n    lsl r0, r0, #2\n    str r2, [r1, r0]\n    b _0225E20E\n    ldr r1, _0225E290 ; =0x00000612\n    mov r2, #0\n    ldrb r1, [r4, r1]\n    ldr r0, [r4, #4]\n    add r3, r2, #0\n    lsl r1, r1, #2\n    add r1, r4, r1\n    ldr r1, [r1, #8]\n    bl ov49_0225D214\n    ldr r1, _0225E290 ; =0x00000612\n    ldr r0, [r4, #4]\n    ldrb r1, [r4, r1]\n    mov r2, #1\n    mov r3, #0\n    lsl r1, r1, #2\n    add r1, r4, r1\n    ldr r1, [r1, #8]\n    bl ov49_0225D214\n    ldr r1, _0225E290 ; =0x00000612\n    ldr r0, [r4, #4]\n    ldrb r1, [r4, r1]\n    mov r2, #2\n    mov r3, #0\n    lsl r1, r1, #2\n    add r1, r4, r1\n    ldr r1, [r1, #8]\n    bl ov49_0225D214\n    b _0225E20E\n    ldr r1, _0225E290 ; =0x00000612\n    ldr r0, [r4, #4]\n    ldrb r1, [r4, r1]\n    mov r2, #0\n    mov r3, #2\n    lsl r1, r1, #2\n    add r1, r4, r1\n    ldr r1, [r1, #8]\n    bl ov49_0225D214\n    ldr r0, _0225E290 ; =0x00000612\n    ldrb r0, [r4, r0]\n    lsl r0, r0, #2\n    add r0, r4, r0\n    ldr r2, [r0, #8]\n    ldrh r0, [r5]\n    lsl r0, r0, #2\n    add r1, r4, r0\n    mov r0, #0x45\n    lsl r0, r0, #2\n    str r2, [r1, r0]\n    b _0225E20E\n    ldr r1, _0225E290 ; =0x00000612\n    ldr r0, [r4, #4]\n    ldrb r1, [r4, r1]\n    mov r2, #0\n    mov r3, #2\n    lsl r1, r1, #2\n    add r1, r4, r1\n    ldr r1, [r1, #8]\n    bl ov49_0225D214\n    b _0225E20E\n    ldr r0, _0225E294 ; =0x00000608\n    mov r1, #0xc\n    ldrb r0, [r4, r0]\n    mul r1, r0\n    ldr r0, [sp, #0x10]\n    add r0, r0, r1\n    ldr r1, _0225E290 ; =0x00000612\n    ldrb r1, [r4, r1]\n    lsl r1, r1, #2\n    add r1, r4, r1\n    ldr r1, [r1, #8]\n    bl ov49_0225EB00\n    ldr r0, _0225E294 ; =0x00000608\n    ldrb r0, [r4, r0]\n    add r1, r0, #1\n    ldr r0, _0225E294 ; =0x00000608\n    strb r1, [r4, r0]\n    ldrb r0, [r4, r0]\n    cmp r0, #0x18\n    bls _0225E0C2\n    bl GF_AssertFail\n    ldr r0, _0225E290 ; =0x00000612\n    mov r1, #0\n    ldrb r0, [r4, r0]\n    lsl r0, r0, #2\n    add r0, r4, r0\n    ldr r0, [r0, #8]\n    bl ov49_0225D494\n    ldrh r1, [r5]\n    ldr r0, _0225E298 ; =0x0000FFA4\n    add r0, r1, r0\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    cmp r0, #1\n    bls _0225E0E2\n    b _0225E20E\n    ldr r0, _0225E290 ; =0x00000612\n    ldrb r0, [r4, r0]\n    lsl r0, r0, #2\n    add r0, r4, r0\n    ldr r0, [r0, #8]\n    bl ov49_0225EE4C\n    b _0225E20E\n    ldr r0, _0225E29C ; =0x00000609\n    mov r1, #0xc\n    ldrb r0, [r4, r0]\n    mul r1, r0\n    ldr r0, [sp, #0x14]\n    add r0, r0, r1\n    ldr r1, _0225E290 ; =0x00000612\n    ldrb r1, [r4, r1]\n    lsl r1, r1, #2\n    add r1, r4, r1\n    ldr r1, [r1, #8]\n    bl ov49_0225EB00\n    ldr r0, _0225E29C ; =0x00000609\n    ldrb r0, [r4, r0]\n    add r1, r0, #1\n    ldr r0, _0225E29C ; =0x00000609\n    strb r1, [r4, r0]\n    sub r0, r0, #1\n    ldrb r0, [r4, r0]\n    cmp r0, #0x18\n    bls _0225E122\n    bl GF_AssertFail\n    ldr r0, _0225E290 ; =0x00000612\n    mov r1, #0\n    ldrb r0, [r4, r0]\n    lsl r0, r0, #2\n    add r0, r4, r0\n    ldr r0, [r0, #8]\n    bl ov49_0225D494\n    ldrh r1, [r5]\n    ldr r0, _0225E298 ; =0x0000FFA4\n    add r0, r1, r0\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    cmp r0, #1\n    bhi _0225E20E\n    ldr r0, _0225E290 ; =0x00000612\n    ldrb r0, [r4, r0]\n    lsl r0, r0, #2\n    add r0, r4, r0\n    ldr r0, [r0, #8]\n    bl ov49_0225EE4C\n    b _0225E20E\n    ldr r0, _0225E290 ; =0x00000612\n    ldrb r0, [r4, r0]\n    lsl r0, r0, #2\n    add r0, r4, r0\n    ldr r2, [r0, #8]\n    ldr r0, _0225E2A0 ; =0x0000060A\n    ldrb r0, [r4, r0]\n    lsl r0, r0, #2\n    add r1, r4, r0\n    ldr r0, _0225E2A4 ; =0x00000488\n    str r2, [r1, r0]\n    ldr r0, _0225E2A0 ; =0x0000060A\n    ldrb r0, [r4, r0]\n    add r1, r0, #1\n    ldr r0, _0225E2A0 ; =0x0000060A\n    strb r1, [r4, r0]\n    ldrb r0, [r4, r0]\n    cmp r0, #0x18\n    bls _0225E17A\n    bl GF_AssertFail\n    ldr r0, _0225E290 ; =0x00000612\n    mov r1, #0\n    ldrb r0, [r4, r0]\n    lsl r0, r0, #2\n    add r0, r4, r0\n    ldr r0, [r0, #8]\n    bl ov49_0225D494\n    b _0225E20E\n    ldr r0, _0225E2A8 ; =0x0000060B\n    mov r1, #0xc\n    ldrb r0, [r4, r0]\n    mul r1, r0\n    ldr r0, [sp, #0x18]\n    add r0, r0, r1\n    ldr r1, _0225E290 ; =0x00000612\n    ldrb r1, [r4, r1]\n    lsl r1, r1, #2\n    add r1, r4, r1\n    ldr r1, [r1, #8]\n    bl ov49_0225EB00\n    ldr r0, _0225E2A8 ; =0x0000060B\n    ldrb r0, [r4, r0]\n    add r1, r0, #1\n    ldr r0, _0225E2A8 ; =0x0000060B\n    strb r1, [r4, r0]\n    ldrb r0, [r4, r0]\n    cmp r0, #0x18\n    bls _0225E1BA\n    bl GF_AssertFail\n    ldr r0, _0225E290 ; =0x00000612\n    mov r1, #0\n    ldrb r0, [r4, r0]\n    lsl r0, r0, #2\n    add r0, r4, r0\n    ldr r0, [r0, #8]\n    bl ov49_0225D494\n    ldr r0, _0225E290 ; =0x00000612\n    ldrb r0, [r4, r0]\n    lsl r0, r0, #2\n    add r0, r4, r0\n    ldr r0, [r0, #8]\n    bl ov49_0225D1EC\n    strh r0, [r6, #4]\n    lsr r0, r0, #0x10\n    strh r0, [r6, #6]\n    ldrh r0, [r6, #4]\n    strh r0, [r6, #8]\n    ldrh r0, [r6, #6]\n    strh r0, [r6, #0xa]\n    mov r0, #8\n    ldrsh r0, [r6, r0]\n    add r0, #8\n    strh r0, [r6, #8]\n    mov r0, #0xa\n    ldrsh r0, [r6, r0]\n    add r0, #0x14\n    strh r0, [r6, #0xa]\n    ldr r0, _0225E290 ; =0x00000612\n    ldrh r1, [r6, #8]\n    ldrb r0, [r4, r0]\n    lsl r0, r0, #2\n    add r0, r4, r0\n    ldr r0, [r0, #8]\n    strh r1, [r7]\n    ldrh r1, [r6, #0xa]\n    strh r1, [r7, #2]\n    ldr r1, [r7]\n    bl ov49_0225D1C4\n    ldr r0, _0225E290 ; =0x00000612\n    add r2, sp, #0x1c\n    ldrb r0, [r4, r0]\n    add r2, #2\n    add r3, sp, #0x1c\n    add r1, r0, #1\n    ldr r0, _0225E290 ; =0x00000612\n    strb r1, [r4, r0]\n    ldr r0, [sp, #8]\n    add r0, r0, #1\n    str r0, [sp]\n    str r0, [sp, #8]\n    ldrh r1, [r5]\n    ldr r0, [r4]\n    bl ov49_022589D8\n    cmp r0, #1\n    bne _0225E234\n    b _0225DF9C\n    ldr r0, [sp, #0xc]\n    add r5, r5, #4\n    add r0, r0, #1\n    str r0, [sp, #0xc]\n    cmp r0, #0x23\n    bhs _0225E242\n    b _0225DF66\n    mov r0, #0xa\n    mov r7, #0\n    lsl r0, r0, #0xe\n    ldr r6, _0225E2AC ; =ov49_02269A88\n    str r7, [sp, #0x28]\n    str r0, [sp, #0x30]\n    str r7, [sp, #0x2c]\n    add r5, r4, #0\n    ldrh r1, [r6]\n    ldrh r2, [r6, #2]\n    ldr r0, [r4, #4]\n    add r3, sp, #0x28\n    bl ov49_0225CF28\n    mov r1, #0x82\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    add r0, r1, #0\n    ldr r0, [r5, r0]\n    mov r1, #0\n    bl ov49_0225D040\n    add r7, r7, #1\n    add r6, r6, #4\n    add r5, r5, #4\n    cmp r7, #9\n    blt _0225E252\n    ldr r0, _0225E2B0 ; =0x00000613\n    mov r1, #9\n    strb r1, [r4, r0]\n    add r0, r4, #0\n    add sp, #0x34\n    pop {r4, r5, r6, r7, pc}\n    _0225E284: .word 0x00000614\n    _0225E288: .word ov49_02269AAC\n    _0225E28C: .word 0x000004E8\n    _0225E290: .word 0x00000612\n    _0225E294: .word 0x00000608\n    _0225E298: .word 0x0000FFA4\n    _0225E29C: .word 0x00000609\n    _0225E2A0: .word 0x0000060A\n    _0225E2A4: .word 0x00000488\n    _0225E2A8: .word 0x0000060B\n    _0225E2AC: .word ov49_02269A88\n    _0225E2B0: .word 0x00000613"
    );
    #endif
}

void ov49_0225E2B4(void) {
    /* Original at 0x0225E2B4 */
    /* Requires manual decompilation - 43 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r0, _0225E310 ; =0x00000613\n    mov r6, #0\n    ldrb r0, [r5, r0]\n    cmp r0, #0\n    ble _0225E2DA\n    ldr r7, _0225E310 ; =0x00000613\n    add r4, r5, #0\n    mov r0, #0x82\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl ov49_0225CF94\n    ldrb r0, [r5, r7]\n    add r6, r6, #1\n    add r4, r4, #4\n    cmp r6, r0\n    blt _0225E2C6\n    ldr r0, _0225E314 ; =0x00000612\n    mov r6, #0\n    ldrb r0, [r5, r0]\n    cmp r0, #0\n    ble _0225E2FA\n    ldr r7, _0225E314 ; =0x00000612\n    add r4, r5, #0\n    ldr r0, [r5, #4]\n    ldr r1, [r4, #8]\n    bl ov49_0225D160\n    ldrb r0, [r5, r7]\n    add r6, r6, #1\n    add r4, r4, #4\n    cmp r6, r0\n    blt _0225E2E8\n    ldr r0, [r5, #4]\n    bl ov49_0225CE88\n    ldr r0, [r5, #4]\n    bl ov49_0225CCC0\n    add r0, r5, #0\n    bl Heap_Free\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0225E310: .word 0x00000613\n    _0225E314: .word 0x00000612"
    );
    #endif
}

void ov49_0225E318(void) {
    /* Original at 0x0225E318 */
    /* Requires manual decompilation - 60 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r0, _0225E390 ; =0x00000608\n    mov r6, #0\n    ldrb r0, [r5, r0]\n    cmp r0, #0\n    ble _0225E340\n    mov r0, #0x92\n    lsl r0, r0, #2\n    ldr r7, _0225E390 ; =0x00000608\n    add r4, r5, r0\n    ldr r1, [r5, #4]\n    add r0, r4, #0\n    bl ov49_0225EB08\n    ldrb r0, [r5, r7]\n    add r6, r6, #1\n    add r4, #0xc\n    cmp r6, r0\n    blt _0225E32E\n    ldr r0, _0225E394 ; =0x00000609\n    mov r6, #0\n    ldrb r0, [r5, r0]\n    cmp r0, #0\n    ble _0225E364\n    mov r0, #0xda\n    lsl r0, r0, #2\n    ldr r7, _0225E394 ; =0x00000609\n    add r4, r5, r0\n    ldr r1, [r5, #4]\n    add r0, r4, #0\n    bl ov49_0225ECF0\n    ldrb r0, [r5, r7]\n    add r6, r6, #1\n    add r4, #0xc\n    cmp r6, r0\n    blt _0225E352\n    ldr r0, _0225E398 ; =0x0000060B\n    mov r6, #0\n    ldrb r0, [r5, r0]\n    cmp r0, #0\n    ble _0225E386\n    ldr r0, _0225E39C ; =0x000004E8\n    ldr r7, _0225E398 ; =0x0000060B\n    add r4, r5, r0\n    ldr r1, [r5, #4]\n    add r0, r4, #0\n    bl ov49_0225ED98\n    ldrb r0, [r5, r7]\n    add r6, r6, #1\n    add r4, #0xc\n    cmp r6, r0\n    blt _0225E374\n    ldr r0, [r5, #4]\n    bl ov49_0225CCF0\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0225E390: .word 0x00000608\n    _0225E394: .word 0x00000609\n    _0225E398: .word 0x0000060B\n    _0225E39C: .word 0x000004E8"
    );
    #endif
}

void ov49_0225E3A0(void) {
    ov49_0225CD58();
}

void ov49_0225E3AC(void) {
    ov49_0225CDE8();
}

void ov49_0225E3B8(void) {
    /* Original at 0x0225E3B8 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    ldr r0, _0225E3F0 ; =0x00000613\n    add r4, r1, #0\n    ldrb r0, [r5, r0]\n    add r6, r2, #0\n    cmp r0, r4\n    bhi _0225E3CE\n    bl GF_AssertFail\n    mov r0, #0xa\n    lsl r0, r0, #0xe\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #4]\n    lsl r0, r4, #2\n    add r1, r5, r0\n    mov r0, #0x82\n    str r6, [sp]\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    add r1, sp, #0\n    bl ov49_0225CFA8\n    add sp, #0xc\n    pop {r3, r4, r5, r6, pc}\n    nop\n    _0225E3F0: .word 0x00000613"
    );
    #endif
}

void ov49_0225E3F4(void) {
    /* Original at 0x0225E3F4 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r0, _0225E41C ; =0x00000613\n    add r4, r1, #0\n    ldrb r0, [r5, r0]\n    add r6, r2, #0\n    cmp r0, r4\n    bhi _0225E408\n    bl GF_AssertFail\n    lsl r0, r4, #2\n    add r1, r5, r0\n    mov r0, #0x82\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    add r1, r6, #0\n    bl ov49_0225CFEC\n    pop {r4, r5, r6, pc}\n    nop\n    _0225E41C: .word 0x00000613"
    );
    #endif
}

void ov49_0225E420(void) {
    /* Original at 0x0225E420 */
    /* Requires manual decompilation - 40 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r0, _0225E470 ; =0x00000613\n    add r6, r1, #0\n    ldrb r0, [r5, r0]\n    add r7, r2, #0\n    add r4, r3, #0\n    cmp r0, r6\n    bhi _0225E436\n    bl GF_AssertFail\n    cmp r7, #3\n    blo _0225E43E\n    bl GF_AssertFail\n    lsl r0, r6, #2\n    add r1, r5, r0\n    mov r0, #0x82\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    add r1, r4, #0\n    bl ov49_0225D030\n    ldr r1, _0225E474 ; =ov49_02269A7C\n    lsl r0, r7, #2\n    ldrsh r1, [r1, r0]\n    ldr r2, [r4]\n    lsl r1, r1, #0xc\n    add r1, r2, r1\n    str r1, [r4]\n    ldr r1, _0225E478 ; =ov49_02269A7E\n    ldr r2, [r4, #8]\n    ldrsh r0, [r1, r0]\n    lsl r0, r0, #0xc\n    add r0, r2, r0\n    str r0, [r4, #8]\n    mov r0, #0xa\n    lsl r0, r0, #0xe\n    str r0, [r4, #4]\n    pop {r3, r4, r5, r6, r7, pc}\n    _0225E470: .word 0x00000613\n    _0225E474: .word ov49_02269A7C\n    _0225E478: .word ov49_02269A7E"
    );
    #endif
}

void ov49_0225E47C(void) {
    /* Original at 0x0225E47C */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, _0225E4A0 ; =0x00000613\n    add r4, r1, #0\n    ldrb r0, [r5, r0]\n    cmp r0, r4\n    bhi _0225E48E\n    bl GF_AssertFail\n    lsl r0, r4, #2\n    add r1, r5, r0\n    mov r0, #0x82\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    bl ov49_0225D04C\n    pop {r3, r4, r5, pc}\n    nop\n    _0225E4A0: .word 0x00000613"
    );
    #endif
}

void ov49_0225E4A4(void) {
    /* Original at 0x0225E4A4 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, _0225E4C8 ; =0x00000613\n    add r4, r1, #0\n    ldrb r0, [r5, r0]\n    cmp r0, r4\n    bhi _0225E4B6\n    bl GF_AssertFail\n    lsl r0, r4, #2\n    add r1, r5, r0\n    mov r0, #0x82\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    bl ov49_0225D064\n    pop {r3, r4, r5, pc}\n    nop\n    _0225E4C8: .word 0x00000613"
    );
    #endif
}

void ov49_0225E4CC(void) {
    /* Original at 0x0225E4CC */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r0, _0225E4F4 ; =0x00000613\n    add r4, r1, #0\n    ldrb r0, [r5, r0]\n    add r6, r2, #0\n    cmp r0, r4\n    bhi _0225E4E0\n    bl GF_AssertFail\n    lsl r0, r4, #2\n    add r1, r5, r0\n    mov r0, #0x82\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    add r1, r6, #0\n    bl ov49_0225D040\n    pop {r4, r5, r6, pc}\n    nop\n    _0225E4F4: .word 0x00000613"
    );
    #endif
}

void ov49_0225E4F8(void) {
    /* Original at 0x0225E4F8 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r0, _0225E520 ; =0x00000613\n    add r4, r1, #0\n    ldrb r0, [r5, r0]\n    add r6, r2, #0\n    cmp r0, r4\n    bhi _0225E50C\n    bl GF_AssertFail\n    lsl r0, r4, #2\n    add r1, r5, r0\n    mov r0, #0x82\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    add r1, r6, #0\n    bl ov49_0225D07C\n    pop {r4, r5, r6, pc}\n    nop\n    _0225E520: .word 0x00000613"
    );
    #endif
}

void ov49_0225E524(void) {
    /* Original at 0x0225E524 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, _0225E548 ; =0x00000613\n    add r4, r1, #0\n    ldrb r0, [r5, r0]\n    cmp r0, r4\n    bhi _0225E536\n    bl GF_AssertFail\n    lsl r0, r4, #2\n    add r1, r5, r0\n    mov r0, #0x82\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    bl ov49_0225D088\n    pop {r3, r4, r5, pc}\n    nop\n    _0225E548: .word 0x00000613"
    );
    #endif
}

void ov49_0225E54C(void) {
    /* Original at 0x0225E54C */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, _0225E570 ; =0x00000613\n    add r4, r1, #0\n    ldrb r0, [r5, r0]\n    cmp r0, r4\n    bhi _0225E55E\n    bl GF_AssertFail\n    lsl r0, r4, #2\n    add r1, r5, r0\n    mov r0, #0x82\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    bl ov49_0225D090\n    pop {r3, r4, r5, pc}\n    nop\n    _0225E570: .word 0x00000613"
    );
    #endif
}

void ov49_0225E574(void) {
    ov49_0225CED0();
}

void ov49_0225E580(void) {
    ov49_0225CEFC();
}

void ov49_0225E58C(void) {
    /* Original at 0x0225E58C */
    /* Requires manual decompilation - 65 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    ldr r0, _0225E61C ; =0x00000612\n    str r1, [sp]\n    ldrb r0, [r5, r0]\n    mov r6, #0\n    cmp r0, #0\n    ble _0225E616\n    ldr r1, [sp]\n    sub r0, r2, #1\n    sub r1, r1, #1\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    lsl r0, r0, #0x18\n    add r4, r5, #0\n    str r1, [sp, #4]\n    lsr r7, r0, #0x18\n    ldr r0, [r4, #8]\n    ldr r1, [sp, #4]\n    add r2, r7, #0\n    bl ov49_0225E9D0\n    str r0, [sp, #8]\n    ldr r0, [r4, #8]\n    ldr r1, [sp]\n    add r2, r7, #0\n    bl ov49_0225E9D0\n    ldr r1, [sp, #8]\n    cmp r1, #1\n    beq _0225E5D0\n    cmp r0, #1\n    bne _0225E60A\n    ldr r0, [r4, #8]\n    bl ov49_0225D1C0\n    cmp r0, #4\n    bhi _0225E60A\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0225E5E6: ; jump table\n    ldr r0, _0225E620 ; =0x00000611\n    ldrb r0, [r5, r0]\n    cmp r0, #4\n    bne _0225E602\n    ldr r1, [r4, #8]\n    add r0, r5, #0\n    bl ov49_0225EAB4\n    b _0225E60A\n    ldr r1, [r4, #8]\n    add r0, r5, #0\n    bl ov49_0225EA70\n    ldr r0, _0225E61C ; =0x00000612\n    add r6, r6, #1\n    ldrb r0, [r5, r0]\n    add r4, r4, #4\n    cmp r6, r0\n    blt _0225E5B0\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _0225E61C: .word 0x00000612\n    _0225E620: .word 0x00000611"
    );
    #endif
}

void ov49_0225E624(void) {
    /* Original at 0x0225E624 */
    /* Requires manual decompilation - 78 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r0, _0225E6DC ; =0x00000612\n    add r7, r1, #0\n    ldrb r0, [r5, r0]\n    mov r6, #0\n    cmp r0, #0\n    ble _0225E6DA\n    add r4, r5, #0\n    ldr r0, [r4, #8]\n    bl ov49_0225D1C0\n    cmp r0, #4\n    bhi _0225E656\n    add r1, r0, r0\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _0225E64C: ; jump table\n    cmp r0, #0xf\n    beq _0225E66C\n    b _0225E6CE\n    cmp r7, #1\n    bne _0225E6CE\n    ldr r0, [r5, #4]\n    ldr r1, [r4, #8]\n    mov r2, #1\n    bl ov49_0225D4A0\n    b _0225E6CE\n    cmp r7, #1\n    bne _0225E6A8\n    mov r1, #2\n    ldr r0, [r4, #8]\n    lsl r1, r1, #0xa\n    bl ov49_0225D4C8\n    ldr r0, [r5, #4]\n    ldr r1, [r4, #8]\n    mov r2, #0\n    mov r3, #6\n    bl ov49_0225D214\n    ldr r0, [r5, #4]\n    ldr r1, [r4, #8]\n    mov r2, #1\n    mov r3, #6\n    bl ov49_0225D214\n    ldr r0, [r5, #4]\n    ldr r1, [r4, #8]\n    mov r2, #2\n    mov r3, #6\n    bl ov49_0225D214\n    ldr r0, [r4, #8]\n    mov r1, #1\n    bl ov49_0225D494\n    b _0225E6CE\n    ldr r0, [r5, #4]\n    ldr r1, [r4, #8]\n    mov r2, #0\n    bl ov49_0225D328\n    ldr r0, [r5, #4]\n    ldr r1, [r4, #8]\n    mov r2, #1\n    bl ov49_0225D328\n    ldr r0, [r5, #4]\n    ldr r1, [r4, #8]\n    mov r2, #2\n    bl ov49_0225D328\n    ldr r0, [r4, #8]\n    mov r1, #0\n    bl ov49_0225D494\n    ldr r0, _0225E6DC ; =0x00000612\n    add r6, r6, #1\n    ldrb r0, [r5, r0]\n    add r4, r4, #4\n    cmp r6, r0\n    blt _0225E636\n    pop {r3, r4, r5, r6, r7, pc}\n    _0225E6DC: .word 0x00000612"
    );
    #endif
}

void ov49_0225E6E0(void) {
    /* Original at 0x0225E6E0 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    ldr r0, _0225E70C ; =0x0000060B\n    add r7, r1, #0\n    ldrb r0, [r6, r0]\n    mov r4, #0\n    cmp r0, #0\n    ble _0225E708\n    ldr r0, _0225E710 ; =0x000004E8\n    add r5, r6, r0\n    add r0, r5, #0\n    add r1, r7, #0\n    bl ov49_0225ECD4\n    ldr r0, _0225E70C ; =0x0000060B\n    add r4, r4, #1\n    ldrb r0, [r6, r0]\n    add r5, #0xc\n    cmp r4, r0\n    blt _0225E6F4\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0225E70C: .word 0x0000060B\n    _0225E710: .word 0x000004E8"
    );
    #endif
}

void ov49_0225E714(void) {
    /* Original at 0x0225E714 */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r0, _0225E75C ; =0x00000612\n    mov r6, #0\n    ldrb r0, [r5, r0]\n    cmp r0, #0\n    ble _0225E75A\n    ldr r7, _0225E75C ; =0x00000612\n    add r4, r5, #0\n    ldr r0, [r4, #8]\n    bl ov49_0225D1C0\n    cmp r0, #4\n    bhi _0225E750\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0225E73C: ; jump table\n    ldr r0, [r5, #4]\n    ldr r1, [r4, #8]\n    mov r2, #1\n    bl ov49_0225D4A0\n    ldrb r0, [r5, r7]\n    add r6, r6, #1\n    add r4, r4, #4\n    cmp r6, r0\n    blt _0225E726\n    pop {r3, r4, r5, r6, r7, pc}\n    _0225E75C: .word 0x00000612"
    );
    #endif
}

void ov49_0225E760(void) {
    /* Original at 0x0225E760 */
    /* Requires manual decompilation - 85 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r4, r0, #0\n    ldr r0, _0225E818 ; =0x00000612\n    add r7, r1, #0\n    ldrb r0, [r4, r0]\n    mov r6, #0\n    cmp r0, #0\n    ble _0225E816\n    add r5, r4, #0\n    ldr r0, [r5, #8]\n    bl ov49_0225D1C0\n    cmp r0, #0xb\n    beq _0225E780\n    cmp r0, #0xc\n    bne _0225E80A\n    cmp r7, #3\n    bhi _0225E80A\n    add r0, r7, r7\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0225E790: ; jump table\n    ldr r0, [r4, #4]\n    ldr r1, [r5, #8]\n    mov r2, #0\n    mov r3, #2\n    bl ov49_0225D214\n    mov r0, #0x91\n    mov r1, #0\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    b _0225E80A\n    ldr r0, _0225E81C ; =ov49_0225EA10\n    mov r2, #0\n    str r0, [sp]\n    ldr r0, [r4, #4]\n    ldr r1, [r5, #8]\n    mov r3, #1\n    bl ov49_0225D224\n    mov r0, #0x91\n    mov r1, #1\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    b _0225E80A\n    ldr r0, _0225E820 ; =ov49_0225EA40\n    mov r2, #0\n    str r0, [sp]\n    ldr r0, [r4, #4]\n    ldr r1, [r5, #8]\n    mov r3, #4\n    bl ov49_0225D224\n    ldr r0, [r4, #4]\n    ldr r1, [r5, #8]\n    mov r2, #1\n    bl ov49_0225D328\n    mov r0, #0x91\n    mov r1, #0\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    b _0225E80A\n    ldr r0, [r4, #4]\n    ldr r1, [r5, #8]\n    mov r2, #1\n    mov r3, #0\n    bl ov49_0225D214\n    ldr r0, [r4, #4]\n    ldr r1, [r5, #8]\n    mov r2, #0\n    bl ov49_0225D328\n    mov r0, #0x91\n    mov r1, #1\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    ldr r0, _0225E818 ; =0x00000612\n    add r6, r6, #1\n    ldrb r0, [r4, r0]\n    add r5, r5, #4\n    cmp r6, r0\n    blt _0225E772\n    pop {r3, r4, r5, r6, r7, pc}\n    _0225E818: .word 0x00000612\n    _0225E81C: .word ov49_0225EA10\n    _0225E820: .word ov49_0225EA40"
    );
    #endif
}

void ov49_0225E824(void) {
    /* Original at 0x0225E824 */
    /* Requires manual decompilation - 4 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0x91\n    lsl r1, r1, #2\n    ldr r0, [r0, r1]\n    bx lr"
    );
    #endif
}

void ov49_0225E82C(void) {
    /* Original at 0x0225E82C */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r0, _0225E858 ; =0x00000608\n    add r6, r1, #0\n    ldrb r0, [r5, r0]\n    add r7, r2, #0\n    mov r4, #0\n    cmp r0, #0\n    ble _0225E854\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r6, #0\n    add r3, r7, #0\n    bl ov49_0225E85C\n    ldr r0, _0225E858 ; =0x00000608\n    add r4, r4, #1\n    ldrb r0, [r5, r0]\n    cmp r4, r0\n    blt _0225E83E\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0225E858: .word 0x00000608"
    );
    #endif
}

void ov49_0225E85C(void) {
    /* Original at 0x0225E85C */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    ldr r0, _0225E890 ; =0x00000608\n    ldrb r0, [r4, r0]\n    cmp r1, r0\n    bhs _0225E88C\n    mov r0, #0x92\n    lsl r0, r0, #2\n    add r5, r4, r0\n    mov r0, #0xc\n    mul r0, r1\n    cmp r2, #0\n    beq _0225E882\n    ldr r1, [r4, #4]\n    add r0, r5, r0\n    add r2, r3, #0\n    bl ov49_0225EB54\n    b _0225E888\n    add r0, r5, r0\n    bl ov49_0225EB84\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    _0225E890: .word 0x00000608"
    );
    #endif
}

void ov49_0225E894(void) {
    /* Original at 0x0225E894 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    ldr r0, _0225E8C0 ; =0x00000609\n    add r7, r1, #0\n    ldrb r0, [r6, r0]\n    mov r4, #0\n    cmp r0, #0\n    ble _0225E8BE\n    mov r0, #0xda\n    lsl r0, r0, #2\n    add r5, r6, r0\n    add r0, r5, #0\n    add r1, r7, #0\n    bl ov49_0225ECD4\n    ldr r0, _0225E8C0 ; =0x00000609\n    add r4, r4, #1\n    ldrb r0, [r6, r0]\n    add r5, #0xc\n    cmp r4, r0\n    blt _0225E8AA\n    pop {r3, r4, r5, r6, r7, pc}\n    _0225E8C0: .word 0x00000609"
    );
    #endif
}

void ov49_0225E8C4(void) {
    /* Original at 0x0225E8C4 */
    /* Requires manual decompilation - 112 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    lsl r0, r1, #2\n    add r1, r5, r0\n    mov r0, #0x8b\n    lsl r0, r0, #2\n    ldr r6, [r1, r0]\n    add r0, #0xc\n    ldr r7, [r1, r0]\n    ldr r0, [sp, #0x18]\n    add r4, r2, #0\n    cmp r0, #1\n    beq _0225E8E2\n    cmp r3, #1\n    bne _0225E992\n    add r0, r6, #0\n    mov r1, #1\n    bl ov49_0225D450\n    cmp r0, #0\n    bne _0225E8FA\n    ldr r0, [r5, #4]\n    add r1, r6, #0\n    mov r2, #1\n    mov r3, #0\n    bl ov49_0225D214\n    ldr r0, [sp, #0x18]\n    cmp r0, #1\n    bne _0225E938\n    add r0, r4, #4\n    lsl r1, r0, #2\n    beq _0225E918\n    lsl r0, r0, #0xe\n    bl _ffltu\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    b _0225E926\n    lsl r0, r0, #0xe\n    bl _ffltu\n    mov r1, #0x3f\n    lsl r1, r1, #0x18\n    bl _fsub\n    bl _ffix\n    add r3, r0, #0\n    ldr r0, [r5, #4]\n    add r1, r7, #0\n    mov r2, #0\n    bl ov49_0225D3F8\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, _0225E9CC ; =0x0000060C\n    mov r1, #0x1c\n    ldr r0, [r5, r0]\n    add r0, r0, #1\n    bl _u32_div_f\n    ldr r0, _0225E9CC ; =0x0000060C\n    str r1, [r5, r0]\n    ldr r0, [r5, r0]\n    cmp r0, #0xe\n    bhs _0225E984\n    lsl r0, r4, #2\n    beq _0225E964\n    lsl r0, r4, #0xe\n    bl _ffltu\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    b _0225E972\n    lsl r0, r4, #0xe\n    bl _ffltu\n    mov r1, #0x3f\n    lsl r1, r1, #0x18\n    bl _fsub\n    bl _ffix\n    add r3, r0, #0\n    ldr r0, [r5, #4]\n    add r1, r7, #0\n    mov r2, #0\n    bl ov49_0225D3F8\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r2, #0\n    ldr r0, [r5, #4]\n    add r1, r7, #0\n    add r3, r2, #0\n    bl ov49_0225D3F8\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [sp, #0x1c]\n    cmp r0, #0\n    ldr r0, [r5, #4]\n    beq _0225E9B4\n    add r1, r6, #0\n    bl ov49_0225D394\n    ldr r0, [r5, #4]\n    add r1, r7, #0\n    bl ov49_0225D394\n    ldr r0, [r5, #4]\n    add r1, r6, #0\n    mov r2, #1\n    bl ov49_0225D4A0\n    pop {r3, r4, r5, r6, r7, pc}\n    add r1, r6, #0\n    mov r2, #1\n    bl ov49_0225D328\n    mov r2, #0\n    ldr r0, [r5, #4]\n    add r1, r7, #0\n    add r3, r2, #0\n    bl ov49_0225D3F8\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0225E9CC: .word 0x0000060C"
    );
    #endif
}

void ov49_0225E9D0(void) {
    /* Original at 0x0225E9D0 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #8\n    add r5, r1, #0\n    lsl r1, r2, #0x14\n    asr r4, r1, #0x10\n    bl ov49_0225D1EC\n    add r1, sp, #0\n    strh r0, [r1]\n    lsr r0, r0, #0x10\n    strh r0, [r1, #2]\n    ldrh r0, [r1]\n    strh r0, [r1, #4]\n    ldrh r0, [r1, #2]\n    strh r0, [r1, #6]\n    mov r0, #4\n    ldrsh r2, [r1, r0]\n    lsl r0, r5, #0x14\n    asr r0, r0, #0x10\n    cmp r2, r0\n    bne _0225EA08\n    mov r0, #6\n    ldrsh r0, [r1, r0]\n    cmp r0, r4\n    bne _0225EA08\n    add sp, #8\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    add sp, #8\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov49_0225EA10(void) {
    /* Original at 0x0225EA10 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r1, #0\n    add r5, r0, #0\n    add r0, r6, #0\n    bl ov49_0225D1C0\n    add r4, r0, #0\n    cmp r4, #0xb\n    beq _0225EA2A\n    cmp r4, #0xc\n    beq _0225EA2A\n    bl GF_AssertFail\n    sub r4, #0xb\n    cmp r4, #1\n    bhi _0225EA3C\n    add r0, r5, #0\n    add r1, r6, #0\n    mov r2, #1\n    mov r3, #0\n    bl ov49_0225D214\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov49_0225EA40(void) {
    /* Original at 0x0225EA40 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r1, #0\n    add r5, r0, #0\n    add r0, r6, #0\n    bl ov49_0225D1C0\n    add r4, r0, #0\n    cmp r4, #0xb\n    beq _0225EA5A\n    cmp r4, #0xc\n    beq _0225EA5A\n    bl GF_AssertFail\n    sub r4, #0xb\n    cmp r4, #1\n    bhi _0225EA6C\n    add r0, r5, #0\n    add r1, r6, #0\n    mov r2, #0\n    mov r3, #2\n    bl ov49_0225D214\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov49_0225EA70(void) {
    /* Original at 0x0225EA70 */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r0, #0\n    mov r4, #0\n    ldr r0, [r6, #4]\n    add r2, r4, #0\n    add r5, r1, #0\n    bl ov49_0225D3BC\n    cmp r0, #0\n    bne _0225EA88\n    mov r4, #1\n    b _0225EA9A\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov49_0225D470\n    mov r1, #2\n    lsl r1, r1, #0xc\n    cmp r0, r1\n    ble _0225EA9A\n    mov r4, #1\n    cmp r4, #1\n    bne _0225EAAC\n    add r0, r6, #0\n    add r1, r5, #0\n    bl ov49_0225EAE0\n    ldr r0, _0225EAB0 ; =0x000005BC\n    bl PlaySE\n    pop {r4, r5, r6, pc}\n    nop\n    _0225EAB0: .word 0x000005BC"
    );
    #endif
}

void ov49_0225EAB4(void) {
    /* Original at 0x0225EAB4 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    mov r4, #0\n    ldr r0, [r5, #4]\n    add r2, r4, #0\n    add r6, r1, #0\n    bl ov49_0225D3BC\n    cmp r0, #0\n    bne _0225EACA\n    mov r4, #1\n    cmp r4, #1\n    bne _0225EADE\n    add r0, r5, #0\n    add r1, r6, #0\n    bl ov49_0225EAE0\n    mov r0, #0x17\n    lsl r0, r0, #6\n    bl PlaySE\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov49_0225EAE0(void) {
    ov49_0225D214(0, 1);
}

void ov49_0225EB00(void) {
    *(u32*)r0 = r1;
    ((u16*)r0)[4] = 0;
}

void ov49_0225EB08(void) {
    /* Original at 0x0225EB08 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    ldrh r2, [r4, #4]\n    add r5, r1, #0\n    cmp r2, #4\n    bhi _0225EB52\n    add r2, r2, r2\n    add r2, pc\n    ldrh r2, [r2, #6]\n    lsl r2, r2, #0x10\n    asr r2, r2, #0x10\n    add pc, r2\n    _0225EB20: ; jump table\n    bl ov49_0225EBA8\n    mov r0, #2\n    strh r0, [r4, #4]\n    pop {r3, r4, r5, pc}\n    bl ov49_0225EC28\n    mov r0, #4\n    strh r0, [r4, #4]\n    pop {r3, r4, r5, pc}\n    bl ov49_0225EC30\n    cmp r0, #1\n    bne _0225EB52\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov49_0225EBE4\n    mov r0, #0\n    strh r0, [r4, #4]\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov49_0225EB54(void) {
    /* Original at 0x0225EB54 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r4, r2, #0\n    ldrh r2, [r5, #4]\n    ldr r3, _0225EB80 ; =0x0000FFFF\n    add r6, r2, r3\n    lsl r6, r6, #0x10\n    lsr r6, r6, #0x10\n    cmp r6, #1\n    bls _0225EB7E\n    sub r3, r3, #2\n    add r2, r2, r3\n    lsl r2, r2, #0x10\n    lsr r2, r2, #0x10\n    cmp r2, #1\n    bhi _0225EB78\n    bl ov49_0225EBE4\n    mov r0, #1\n    strh r0, [r5, #4]\n    str r4, [r5, #8]\n    pop {r4, r5, r6, pc}\n    _0225EB80: .word 0x0000FFFF"
    );
    #endif
}

void ov49_0225EB84(void) {
    /* Original at 0x0225EB84 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "ldrh r2, [r0, #4]\n    ldr r1, _0225EBA4 ; =0x0000FFFD\n    add r1, r2, r1\n    lsl r1, r1, #0x10\n    lsr r1, r1, #0x10\n    cmp r1, #1\n    bls _0225EBA0\n    cmp r2, #1\n    bhi _0225EB9C\n    mov r1, #0\n    strh r1, [r0, #4]\n    bx lr\n    mov r1, #3\n    strh r1, [r0, #4]\n    bx lr\n    nop\n    _0225EBA4: .word 0x0000FFFD"
    );
    #endif
}

void ov49_0225EBA8(void) {
    ov49_0225D4C8(*((u32*)(r0 + 8)));
    ov49_0225D214(r4, 0, 0);
    ov49_0225D214(r4, 1, 0);
    ov49_0225D214(r4, 2, 0);
    ov49_0225D494(1);
}

void ov49_0225EBE4(void) {
    /* Original at 0x0225EBE4 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    ldr r1, [r5]\n    add r0, r4, #0\n    mov r2, #0\n    bl ov49_0225D328\n    ldr r1, [r5]\n    add r0, r4, #0\n    mov r2, #1\n    bl ov49_0225D328\n    ldr r1, [r5]\n    add r0, r4, #0\n    mov r2, #2\n    bl ov49_0225D328\n    ldr r0, [r5]\n    mov r1, #0\n    bl ov49_0225D494\n    ldr r0, [r5]\n    bl ov49_0225D4E8\n    mov r1, #1\n    lsl r1, r1, #0xc\n    ldr r0, [r5]\n    add r2, r1, #0\n    add r3, r1, #0\n    bl ov49_0225D4F0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov49_0225EC28(void) {
    ((u16*)r0)[6] = 0;
}

void ov49_0225EC30(void) {
    /* Original at 0x0225EC30 */
    /* Requires manual decompilation - 73 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    mov r0, #6\n    ldrsh r1, [r4, r0]\n    cmp r1, #0xa\n    bge _0225ECCC\n    add r1, r1, #1\n    strh r1, [r4, #6]\n    ldrsh r0, [r4, r0]\n    ldr r2, [r4, #8]\n    lsl r0, r0, #0xc\n    asr r1, r0, #0x1f\n    asr r3, r2, #0x1f\n    bl _ll_mul\n    mov r2, #2\n    mov r3, #0\n    lsl r2, r2, #0xa\n    add r0, r0, r2\n    adc r1, r3\n    lsl r1, r1, #0x14\n    lsr r0, r0, #0xc\n    orr r0, r1\n    mov r1, #0xa\n    lsl r1, r1, #0xc\n    bl FX_Div\n    add r2, r0, #0\n    ldr r1, [r4, #8]\n    ldr r0, [r4]\n    add r1, r2, r1\n    bl ov49_0225D4C8\n    mov r0, #6\n    ldrsh r1, [r4, r0]\n    mov r0, #0x1f\n    mul r0, r1\n    mov r1, #0xa\n    bl _s32_div_f\n    mov r2, #0x1f\n    sub r1, r2, r0\n    lsl r1, r1, #0x18\n    ldr r0, [r4]\n    lsr r1, r1, #0x18\n    bl ov49_0225D4D0\n    mov r0, #6\n    ldrsh r0, [r4, r0]\n    ldr r2, _0225ECD0 ; =0x000002E1\n    mov r3, #0\n    lsl r0, r0, #0xc\n    asr r1, r0, #0x1f\n    bl _ll_mul\n    mov r2, #2\n    mov r3, #0\n    lsl r2, r2, #0xa\n    add r0, r0, r2\n    adc r1, r3\n    lsl r1, r1, #0x14\n    lsr r0, r0, #0xc\n    orr r0, r1\n    mov r1, #0xa\n    lsl r1, r1, #0xc\n    bl FX_Div\n    mov r3, #1\n    add r5, r0, #0\n    lsl r3, r3, #0xc\n    add r1, r5, r3\n    ldr r0, [r4]\n    add r2, r1, #0\n    add r3, r5, r3\n    bl ov49_0225D4F0\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    _0225ECD0: .word 0x000002E1"
    );
    #endif
}

void ov49_0225ECD4(void) {
    /* Original at 0x0225ECD4 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "ldrh r3, [r0, #4]\n    ldr r2, _0225ECEC ; =0x0000FFFF\n    add r2, r3, r2\n    lsl r2, r2, #0x10\n    lsr r2, r2, #0x10\n    cmp r2, #1\n    bls _0225ECE8\n    mov r2, #1\n    strh r2, [r0, #4]\n    str r1, [r0, #8]\n    bx lr\n    nop\n    _0225ECEC: .word 0x0000FFFF"
    );
    #endif
}

void ov49_0225ECF0(void) {
    /* Original at 0x0225ECF0 */
    /* Requires manual decompilation - 48 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldrh r2, [r4, #4]\n    cmp r2, #4\n    bhi _0225ED62\n    add r2, r2, r2\n    add r2, pc\n    ldrh r2, [r2, #6]\n    lsl r2, r2, #0x10\n    asr r2, r2, #0x10\n    add pc, r2\n    _0225ED06: ; jump table\n    bl ov49_0225ED68\n    mov r0, #2\n    strh r0, [r4, #4]\n    pop {r4, pc}\n    add r0, r1, #0\n    ldr r1, [r4]\n    mov r2, #0\n    bl ov49_0225D3BC\n    cmp r0, #0\n    bne _0225ED66\n    mov r0, #3\n    strh r0, [r4, #4]\n    pop {r4, pc}\n    bl ov49_0225EC28\n    mov r0, #4\n    strh r0, [r4, #4]\n    pop {r4, pc}\n    bl ov49_0225EC30\n    cmp r0, #1\n    bne _0225ED66\n    ldr r0, [r4]\n    mov r1, #0\n    bl ov49_0225D494\n    ldr r0, [r4]\n    bl ov49_0225D4E8\n    mov r1, #1\n    lsl r1, r1, #0xc\n    ldr r0, [r4]\n    add r2, r1, #0\n    add r3, r1, #0\n    bl ov49_0225D4F0\n    mov r0, #0\n    strh r0, [r4, #4]\n    pop {r4, pc}\n    bl GF_AssertFail\n    pop {r4, pc}"
    );
    #endif
}

void ov49_0225ED68(void) {
    ov49_0225D4C8(*((u32*)(r0 + 8)));
    ov49_0225D214(r4, 0, 1);
    ov49_0225D214(r4, 1, 1);
    ov49_0225D494(1);
}

void ov49_0225ED98(void) {
    /* Original at 0x0225ED98 */
    /* Requires manual decompilation - 48 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldrh r2, [r4, #4]\n    cmp r2, #4\n    bhi _0225EE0A\n    add r2, r2, r2\n    add r2, pc\n    ldrh r2, [r2, #6]\n    lsl r2, r2, #0x10\n    asr r2, r2, #0x10\n    add pc, r2\n    _0225EDAE: ; jump table\n    bl ov49_0225EE10\n    mov r0, #2\n    strh r0, [r4, #4]\n    pop {r4, pc}\n    add r0, r1, #0\n    ldr r1, [r4]\n    mov r2, #0\n    bl ov49_0225D3BC\n    cmp r0, #0\n    bne _0225EE0E\n    mov r0, #3\n    strh r0, [r4, #4]\n    pop {r4, pc}\n    bl ov49_0225EC28\n    mov r0, #4\n    strh r0, [r4, #4]\n    pop {r4, pc}\n    bl ov49_0225EC30\n    cmp r0, #1\n    bne _0225EE0E\n    ldr r0, [r4]\n    mov r1, #0\n    bl ov49_0225D494\n    ldr r0, [r4]\n    bl ov49_0225D4E8\n    mov r1, #1\n    lsl r1, r1, #0xc\n    ldr r0, [r4]\n    add r2, r1, #0\n    add r3, r1, #0\n    bl ov49_0225D4F0\n    mov r0, #0\n    strh r0, [r4, #4]\n    pop {r4, pc}\n    bl GF_AssertFail\n    pop {r4, pc}"
    );
    #endif
}

void ov49_0225EE10(void) {
    ov49_0225D4C8(*((u32*)(r0 + 8)));
    ov49_0225D214(r4, 0, 1);
    ov49_0225D214(r4, 1, 1);
    ov49_0225D214(r4, 2, 1);
    ov49_0225D494(1);
}

void ov49_0225EE4C(void) {
    /* Original at 0x0225EE4C */
    /* Requires manual decompilation - 44 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #8\n    add r4, r1, #0\n    add r5, r0, #0\n    cmp r4, #0x5c\n    beq _0225EE60\n    cmp r4, #0x5d\n    beq _0225EE60\n    bl GF_AssertFail\n    add r0, r5, #0\n    bl ov49_0225D1EC\n    add r1, sp, #0\n    strh r0, [r1]\n    lsr r0, r0, #0x10\n    strh r0, [r1, #2]\n    ldrh r0, [r1]\n    sub r4, #0x5c\n    lsl r2, r4, #2\n    strh r0, [r1, #4]\n    ldrh r0, [r1, #2]\n    strh r0, [r1, #6]\n    mov r0, #4\n    ldrsh r3, [r1, r0]\n    ldr r0, _0225EEA8 ; =ov49_02269A74\n    ldr r0, [r0, r2]\n    add r0, r3, r0\n    strh r0, [r1, #4]\n    mov r0, #6\n    ldrsh r0, [r1, r0]\n    mov r3, sp\n    sub r3, r3, #4\n    sub r0, #0xa\n    strh r0, [r1, #6]\n    ldrh r2, [r1, #4]\n    add r0, r5, #0\n    strh r2, [r3]\n    ldrh r1, [r1, #6]\n    strh r1, [r3, #2]\n    ldr r1, [r3]\n    bl ov49_0225D1C4\n    add sp, #8\n    pop {r3, r4, r5, pc}\n    nop\n    _0225EEA8: .word ov49_02269A74"
    );
    #endif
}

void ov49_0225EEAC(void) {
    /* Original at 0x0225EEAC */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r1, #0\n    mov r1, #0xbf\n    add r4, r0, #0\n    add r0, r6, #0\n    lsl r1, r1, #2\n    bl Heap_Alloc\n    mov r2, #0xbf\n    mov r1, #0\n    lsl r2, r2, #2\n    add r7, r0, #0\n    bl memset\n    str r6, [r7]\n    add r5, r7, #0\n    str r4, [r7, #4]\n    mov r4, #0\n    add r5, #8\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r6, #0\n    bl ov49_0225F068\n    add r4, r4, #1\n    add r5, #0x24\n    cmp r4, #0x14\n    blt _0225EED2\n    mov r0, #0xb6\n    lsl r0, r0, #2\n    add r0, r7, r0\n    mov r1, #0\n    add r2, r6, #0\n    bl ov49_0225F068\n    add r0, r7, #0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov49_0225EEF8(void) {
    /* Original at 0x0225EEF8 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r0, #0\n    add r5, r6, #0\n    mov r4, #0\n    add r5, #8\n    add r0, r5, #0\n    bl ov49_0225F074\n    add r4, r4, #1\n    add r5, #0x24\n    cmp r4, #0x14\n    blt _0225EF02\n    mov r0, #0xb6\n    lsl r0, r0, #2\n    add r0, r6, r0\n    bl ov49_0225F074\n    add r0, r6, #0\n    bl Heap_Free\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov49_0225EF24(void) {
    ov49_0225F018();
}

void ov49_0225EF30(void) {
    ov49_0225F018();
}

void ov49_0225EF3C(void) {
    /* Original at 0x0225EF3C */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0, #0xc]\n    bx lr"
    );
    #endif
}

void ov49_0225EF40(void) {
    /* Original at 0x0225EF40 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #8]\n    add r4, r1, #0\n    cmp r0, #0\n    beq _0225EF50\n    bl GF_AssertFail\n    ldrh r0, [r5]\n    add r1, r4, #0\n    bl Heap_Alloc\n    mov r1, #0\n    add r2, r4, #0\n    str r0, [r5, #8]\n    bl memset\n    ldr r0, [r5, #8]\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov49_0225EF68(void) {
    /* Original at 0x0225EF68 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #8]\n    cmp r0, #0\n    bne _0225EF76\n    bl GF_AssertFail\n    ldr r0, [r4, #8]\n    bl Heap_Free\n    mov r0, #0\n    str r0, [r4, #8]\n    pop {r4, pc}"
    );
    #endif
}

void ov49_0225EF84(void) {
    /* Original at 0x0225EF84 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0, #8]\n    bx lr"
    );
    #endif
}

void ov49_0225EF88(void) {
    /* Original at 0x0225EF88 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0, #0x10]\n    bx lr"
    );
    #endif
}

void ov49_0225EF8C(void) {
    ((u32*)r0)[0x10] = r1;
}

void ov49_0225EF90(void) {
    /* Original at 0x0225EF90 */
    /* Requires manual decompilation - 4 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, [r0, #0x10]\n    add r1, r1, #1\n    str r1, [r0, #0x10]\n    bx lr"
    );
    #endif
}

void ov49_0225EF98(void) {
    /* Original at 0x0225EF98 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    add r6, r2, #0\n    add r7, r3, #0\n    cmp r5, #0\n    bne _0225EFAA\n    bl GF_AssertFail\n    cmp r4, #0x14\n    blo _0225EFB2\n    bl GF_AssertFail\n    mov r0, #0x24\n    add r5, #8\n    mul r0, r4\n    add r0, r5, r0\n    add r1, r6, #0\n    add r2, r7, #0\n    bl ov49_0225F0D8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov49_0225EFC4(void) {
    /* Original at 0x0225EFC4 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    add r6, r2, #0\n    add r7, r3, #0\n    cmp r5, #0\n    bne _0225EFD6\n    bl GF_AssertFail\n    cmp r4, #0x14\n    blo _0225EFDE\n    bl GF_AssertFail\n    mov r0, #0x24\n    add r5, #8\n    mul r0, r4\n    add r0, r5, r0\n    add r1, r6, #0\n    add r2, r7, #0\n    bl ov49_0225F110\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov49_0225EFF0(void) {
    /* Original at 0x0225EFF0 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    add r6, r2, #0\n    cmp r5, #0\n    bne _0225F000\n    bl GF_AssertFail\n    cmp r4, #0x14\n    blo _0225F008\n    bl GF_AssertFail\n    mov r0, #0x24\n    add r5, #8\n    mul r0, r4\n    add r0, r5, r0\n    add r1, r6, #0\n    bl ov49_0225F10C\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov49_0225F018(void) {
    /* Original at 0x0225F018 */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r0, #0\n    mov r0, #0xb6\n    lsl r0, r0, #2\n    add r0, r7, r0\n    str r1, [sp]\n    bl ov49_0225F180\n    cmp r0, #1\n    bne _0225F03E\n    mov r0, #0xb6\n    lsl r0, r0, #2\n    ldr r2, [sp]\n    add r0, r7, r0\n    add r1, r7, #0\n    mov r3, #0\n    bl ov49_0225F098\n    pop {r3, r4, r5, r6, r7, pc}\n    add r6, r7, #0\n    add r6, #8\n    mov r4, #0\n    add r5, r6, #0\n    add r0, r6, #0\n    bl ov49_0225F180\n    cmp r0, #1\n    bne _0225F05C\n    ldr r2, [sp]\n    add r0, r5, #0\n    add r1, r7, #0\n    add r3, r4, #0\n    bl ov49_0225F098\n    add r4, r4, #1\n    add r6, #0x24\n    add r5, #0x24\n    cmp r4, #0x14\n    blt _0225F046\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov49_0225F068(void) {
    *(u16*)r0 = r2;
    ((u8*)r0)[2] = 1;
    ((u8*)r0)[3] = r1;
}

void ov49_0225F074(void) {
    /* Original at 0x0225F074 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #8]\n    cmp r0, #0\n    beq _0225F082\n    bl Heap_Free\n    ldr r0, [r4, #0x18]\n    cmp r0, #0\n    beq _0225F08C\n    bl Heap_Free\n    add r0, r4, #0\n    mov r1, #0\n    mov r2, #0x24\n    bl memset\n    pop {r4, pc}"
    );
    #endif
}

void ov49_0225F098(void) {
    /* Original at 0x0225F098 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldrb r0, [r5, #2]\n    add r6, r1, #0\n    add r7, r3, #0\n    cmp r0, #0\n    beq _0225F0D6\n    cmp r2, #0\n    beq _0225F0B0\n    cmp r2, #1\n    beq _0225F0B6\n    b _0225F0BC\n    ldr r0, [r5, #4]\n    ldr r4, [r0]\n    b _0225F0C0\n    ldr r0, [r5, #4]\n    ldr r4, [r0, #4]\n    b _0225F0C0\n    bl GF_AssertFail\n    cmp r4, #0\n    beq _0225F0D6\n    ldr r1, [r6, #4]\n    add r0, r5, #0\n    add r2, r7, #0\n    blx r4\n    cmp r0, #1\n    bne _0225F0D6\n    add r0, r5, #0\n    bl ov49_0225F148\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov49_0225F0D8(void) {
    /* Original at 0x0225F0D8 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #4\n    add r5, r0, #0\n    add r4, r1, #0\n    add r6, r2, #0\n    bl ov49_0225F170\n    cmp r0, #1\n    beq _0225F0EE\n    bl GF_AssertFail\n    ldr r0, [r5, #8]\n    cmp r0, #0\n    beq _0225F0F8\n    bl GF_AssertFail\n    mov r3, #0\n    add r0, r5, #4\n    add r1, r4, #0\n    add r2, r6, #0\n    str r3, [sp]\n    bl ov49_0225F190\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void ov49_0225F10C(void) {
    ((u8*)r0)[2] = r1;
}

void ov49_0225F110(void) {
    /* Original at 0x0225F110 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #4\n    add r5, r0, #0\n    add r4, r1, #0\n    add r6, r2, #0\n    bl ov49_0225F170\n    cmp r0, #1\n    beq _0225F126\n    bl GF_AssertFail\n    add r2, r5, #0\n    add r3, r5, #4\n    add r2, #0x14\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    mov r3, #0\n    add r0, r5, #4\n    add r1, r4, #0\n    add r2, r6, #0\n    str r3, [sp]\n    bl ov49_0225F190\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void ov49_0225F148(void) {
    /* Original at 0x0225F148 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #8]\n    cmp r0, #0\n    beq _0225F156\n    bl GF_AssertFail\n    add r3, r4, #0\n    add r3, #0x14\n    add r2, r4, #4\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    add r4, #0x14\n    add r0, r4, #0\n    bl ov49_0225F19C\n    pop {r4, pc}"
    );
    #endif
}

void ov49_0225F170(void) {
    /* Original at 0x0225F170 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0, #0x14]\n    cmp r0, #0\n    bne _0225F17A\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void ov49_0225F180(void) {
    /* Original at 0x0225F180 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0, #4]\n    cmp r0, #0\n    beq _0225F18A\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void ov49_0225F190(void) {
    /* Original at 0x0225F190 */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "str r1, [r0]\n    ldr r1, [sp]\n    str r3, [r0, #0xc]\n    str r1, [r0, #4]\n    str r2, [r0, #8]\n    bx lr"
    );
    #endif
}

void ov49_0225F19C(void) {
    *(u32*)r0 = 0;
    ((u32*)r0)[0xc] = 0;
    ((u32*)r0)[4] = 0;
    ((u32*)r0)[8] = 0;
}

void ov49_0225F1A8(void) {
    /* Original at 0x0225F1A8 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    bl ov49_02259FEC\n    add r4, r0, #0\n    add r0, r5, #0\n    bl ov49_0225A010\n    add r7, r0, #0\n    add r0, r5, #0\n    bl ov49_0225A02C\n    add r6, r0, #0\n    add r0, r5, #0\n    bl ov49_02259FE8\n    mov r1, #1\n    bl ov45_0222A5E8\n    ldrh r0, [r4, #6]\n    cmp r0, #4\n    blo _0225F1D8\n    bl GF_AssertFail\n    ldrh r2, [r4, #6]\n    ldr r3, _0225F1EC ; =ov49_02269BE0\n    add r0, r7, #0\n    lsl r2, r2, #3\n    add r2, r3, r2\n    add r1, r6, #0\n    mov r3, #0\n    bl ov49_0225EF98\n    pop {r3, r4, r5, r6, r7, pc}\n    _0225F1EC: .word ov49_02269BE0"
    );
    #endif
}

void ov49_0225F1F0(void) {
    /* Original at 0x0225F1F0 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r4, r0, #0\n    bl ov49_0225A02C\n    add r5, r0, #0\n    add r0, r4, #0\n    bl ov49_0225A010\n    ldr r7, _0225F220 ; =ov49_02269B78\n    add r6, r0, #0\n    mov r4, #0\n    cmp r5, r4\n    beq _0225F216\n    add r0, r6, #0\n    add r1, r4, #0\n    add r2, r7, #0\n    mov r3, #0\n    bl ov49_0225EF98\n    add r4, r4, #1\n    cmp r4, #0x14\n    blt _0225F206\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0225F220: .word ov49_02269B78"
    );
    #endif
}

void ov49_0225F224(void) {
    /* Original at 0x0225F224 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "cmp r0, #3\n    bhi _0225F24A\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0225F234: ; jump table\n    mov r1, #0x40\n    b _0225F24A\n    mov r1, #0x80\n    b _0225F24A\n    mov r1, #0x20\n    b _0225F24A\n    mov r1, #0x10\n    ldr r0, _0225F25C ; =gSystem\n    ldr r0, [r0, #0x44]\n    tst r0, r1\n    beq _0225F256\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr\n    nop\n    _0225F25C: .word gSystem"
    );
    #endif
}

void ov49_0225F260(void) {
    /* Original at 0x0225F260 */
    /* Requires manual decompilation - 72 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    str r1, [sp]\n    add r7, r0, #0\n    str r2, [sp, #4]\n    add r4, r3, #0\n    ldr r5, [sp, #0x28]\n    bl ov49_0225EF84\n    str r0, [sp, #0xc]\n    ldr r0, [sp]\n    bl ov49_0225A010\n    str r0, [sp, #8]\n    ldr r0, [r4, #8]\n    mov r2, #0\n    cmp r0, #3\n    beq _0225F2F4\n    add r6, r4, #0\n    add r1, r2, #0\n    add r3, r1, #0\n    ldrb r0, [r6, r3]\n    cmp r0, #0xff\n    beq _0225F2EA\n    cmp r5, r0\n    bne _0225F2E4\n    mov r0, #0x18\n    add r5, r2, #0\n    mul r5, r0\n    add r6, r4, r5\n    ldr r0, [r6, #8]\n    cmp r0, #0\n    beq _0225F2AA\n    cmp r0, #1\n    beq _0225F2C2\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r7, #0\n    bl ov49_0225EF68\n    add r2, r6, #0\n    ldr r0, [sp, #8]\n    ldr r1, [sp, #4]\n    add r2, #0xc\n    mov r3, #0\n    bl ov49_0225EF98\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r7, [r6, #0x14]\n    cmp r7, #0\n    beq _0225F2D2\n    ldrb r3, [r3, r6]\n    ldr r0, [sp, #0xc]\n    ldr r1, [sp]\n    ldr r2, [sp, #4]\n    blx r7\n    add r2, r4, r5\n    ldr r0, [sp, #8]\n    ldr r1, [sp, #4]\n    add r2, #0xc\n    mov r3, #0\n    bl ov49_0225EFC4\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    add r3, r3, #1\n    cmp r3, #8\n    blt _0225F28A\n    add r6, #0x18\n    ldr r0, [r6, #8]\n    add r2, r2, #1\n    cmp r0, #3\n    bne _0225F288\n    bl GF_AssertFail\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov49_0225F2FC(void) {
    /* Original at 0x0225F2FC */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r4, r1, #0\n    add r5, r0, #0\n    bl ov49_02259FF0\n    add r1, r4, #0\n    bl ov49_02258C28\n    add r4, r0, #0\n    add r0, r5, #0\n    bl ov49_0225A008\n    add r5, r0, #0\n    add r0, r4, #0\n    add r1, sp, #0\n    bl ov49_02259154\n    ldr r1, [sp]\n    ldr r2, [sp, #4]\n    ldr r3, [sp, #8]\n    add r0, r5, #0\n    bl ov49_0225CC28\n    add r0, r4, #0\n    add sp, #0xc\n    pop {r4, r5, pc}"
    );
    #endif
}

void ov49_0225F334(void) {
    /* Original at 0x0225F334 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r5, r0, #0\n    add r6, r1, #0\n    add r7, r2, #0\n    str r3, [sp]\n    bl ov49_02259FF0\n    add r4, r0, #0\n    add r0, r5, #0\n    bl ov49_0225A008\n    str r0, [sp, #4]\n    ldr r3, [sp]\n    add r0, r4, #0\n    add r1, r6, #0\n    add r2, r7, #0\n    bl ov49_02258C5C\n    add r5, r0, #0\n    ldr r3, [sp, #0x20]\n    add r0, r4, #0\n    add r1, r5, #0\n    mov r2, #0\n    bl ov49_02258E7C\n    ldr r0, [sp, #4]\n    add r1, r5, #0\n    bl ov49_0225CC40\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov49_0225F374(void) {
    MTRandom(0, 1, 1, 3);
}

void ov49_0225F394(void) {
    /* Original at 0x0225F394 */
    /* Requires manual decompilation - 74 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldrb r0, [r4, #5]\n    cmp r0, #0\n    beq _0225F3A8\n    cmp r0, #1\n    beq _0225F3AE\n    cmp r0, #2\n    beq _0225F3C0\n    b _0225F422\n    mov r0, #0\n    str r0, [r4]\n    b _0225F422\n    ldrb r0, [r4, #6]\n    sub r0, r0, #1\n    cmp r0, #0\n    ble _0225F3BA\n    strb r0, [r4, #6]\n    b _0225F422\n    mov r0, #2\n    strb r0, [r4, #5]\n    b _0225F422\n    mov r0, #4\n    ldrsb r1, [r4, r0]\n    mov r3, #0\n    add r1, r1, #1\n    strb r1, [r4, #4]\n    ldrsb r1, [r4, r0]\n    ldr r0, _0225F428 ; =0x00007FFF\n    add r2, r1, #0\n    mul r2, r0\n    asr r0, r2, #1\n    lsr r0, r0, #0x1e\n    add r0, r2, r0\n    lsl r0, r0, #0xe\n    lsr r0, r0, #0x10\n    asr r0, r0, #4\n    lsl r1, r0, #2\n    ldr r0, _0225F42C ; =FX_SinCosTable_\n    mov r2, #6\n    ldrsh r0, [r0, r1]\n    lsl r2, r2, #0xc\n    asr r1, r0, #0x1f\n    bl _ll_mul\n    mov r2, #2\n    mov r3, #0\n    lsl r2, r2, #0xa\n    add r2, r0, r2\n    adc r1, r3\n    lsl r0, r1, #0x14\n    lsr r1, r2, #0xc\n    orr r1, r0\n    str r1, [r4]\n    mov r0, #4\n    ldrsb r0, [r4, r0]\n    cmp r0, #4\n    blt _0225F422\n    ldrb r0, [r4, #7]\n    cmp r0, #1\n    bne _0225F420\n    strb r3, [r4, #4]\n    mov r0, #1\n    strb r0, [r4, #5]\n    bl MTRandom\n    mov r1, #3\n    and r0, r1\n    strb r0, [r4, #6]\n    b _0225F422\n    strb r3, [r4, #5]\n    ldr r0, [r4]\n    pop {r4, pc}\n    nop\n    _0225F428: .word 0x00007FFF\n    _0225F42C: .word FX_SinCosTable_"
    );
    #endif
}

void ov49_0225F430(void) {
    ((u8*)r0)[7] = 0;
}

void ov49_0225F438(void) {
    /* Original at 0x0225F438 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldrb r0, [r0, #5]\n    cmp r0, #0\n    beq _0225F442\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void ov49_0225F448(void) {
    /* Original at 0x0225F448 */
    /* Requires manual decompilation - 85 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r5, r1, #0\n    add r6, r0, #0\n    add r4, r2, #0\n    add r0, r5, #0\n    bl ov49_02259FF0\n    add r1, r4, #0\n    add r7, r0, #0\n    bl ov49_02258D70\n    str r0, [sp]\n    add r0, r5, #0\n    bl ov49_02259FE8\n    str r0, [sp, #4]\n    add r0, r6, #0\n    bl ov49_0225EF88\n    cmp r0, #0\n    beq _0225F47E\n    cmp r0, #1\n    beq _0225F4A2\n    cmp r0, #2\n    beq _0225F4B8\n    b _0225F510\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov49_0225A56C\n    add r0, r6, #0\n    mov r1, #1\n    bl ov49_0225EF8C\n    ldr r0, [sp, #4]\n    bl ov45_0222A53C\n    cmp r4, r0\n    bne _0225F510\n    add r0, r5, #0\n    mov r1, #0\n    bl ov49_0225A53C\n    b _0225F510\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov49_0225A5AC\n    cmp r0, #1\n    bne _0225F510\n    add r0, r6, #0\n    mov r1, #2\n    bl ov49_0225EF8C\n    b _0225F510\n    ldr r0, [sp, #4]\n    bl ov45_0222A53C\n    cmp r4, r0\n    bne _0225F4CE\n    ldr r1, [sp]\n    add r0, r7, #0\n    mov r2, #1\n    bl ov49_02258EEC\n    b _0225F504\n    add r0, r5, #0\n    bl ov49_0225A4F0\n    cmp r0, #1\n    bne _0225F4EE\n    add r0, r5, #0\n    bl ov49_0225A4E0\n    cmp r4, r0\n    beq _0225F4F8\n    ldr r1, [sp]\n    add r0, r7, #0\n    mov r2, #2\n    bl ov49_02258EEC\n    b _0225F4F8\n    ldr r1, [sp]\n    add r0, r7, #0\n    mov r2, #2\n    bl ov49_02258EEC\n    lsl r1, r4, #0x18\n    add r0, r5, #0\n    lsr r1, r1, #0x18\n    mov r2, #0\n    bl ov49_0225A04C\n    add r0, r5, #0\n    bl ov49_0225A54C\n    add sp, #8\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov49_0225F518(void) {
    /* Original at 0x0225F518 */
    /* Requires manual decompilation - 496 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r5, r1, #0\n    add r6, r0, #0\n    add r0, r5, #0\n    str r2, [sp]\n    bl ov49_02259FE8\n    str r0, [sp, #4]\n    add r0, r5, #0\n    bl ov49_02259FF0\n    str r0, [sp, #8]\n    bl ov49_02258DAC\n    add r7, r0, #0\n    add r0, r6, #0\n    bl ov49_0225EF84\n    add r4, r0, #0\n    add r0, r6, #0\n    bl ov49_0225EF88\n    cmp r0, #0x16\n    bhi _0225F602\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0225F556: ; jump table\n    add r0, r6, #0\n    mov r1, #0x2c\n    bl ov49_0225EF40\n    add r1, r5, #0\n    add r4, r0, #0\n    bl ov49_022614CC\n    ldr r0, [sp, #4]\n    bl ov45_0222A4D0\n    ldr r0, [sp, #4]\n    bl ov45_0222B1B4\n    strh r0, [r4, #2]\n    ldrh r1, [r4, #2]\n    ldr r0, [sp, #4]\n    bl ov45_0222A72C\n    ldr r1, [sp]\n    add r0, r5, #0\n    bl ov49_0225F2FC\n    add r1, r0, #0\n    ldr r0, [sp, #8]\n    mov r2, #4\n    bl ov49_02258EEC\n    add r0, r6, #0\n    bl ov49_0225EF90\n    b _0225F9FA\n    add r0, r5, #0\n    bl ov49_0225A030\n    cmp r0, #0\n    bne _0225F602\n    add r0, r7, #0\n    bl ov49_02258F38\n    cmp r0, #1\n    bne _0225F602\n    ldr r0, [sp, #8]\n    add r1, r7, #0\n    mov r2, #0\n    bl ov49_02258EEC\n    add r0, r5, #0\n    bl ov49_0225A008\n    add r1, r7, #0\n    bl ov49_0225CC40\n    mov r0, #0x10\n    str r0, [r4, #4]\n    add r0, r6, #0\n    bl ov49_0225EF90\n    b _0225F9FA\n    ldr r0, [r4, #4]\n    sub r0, r0, #1\n    str r0, [r4, #4]\n    beq _0225F604\n    b _0225F9FA\n    add r0, r5, #0\n    mov r1, #1\n    bl ov49_0225A018\n    add r0, r6, #0\n    bl ov49_0225EF90\n    b _0225F9FA\n    ldr r0, [sp, #8]\n    add r1, r7, #0\n    mov r2, #2\n    mov r3, #0\n    bl ov49_02258E7C\n    mov r0, #4\n    strh r0, [r4]\n    add r0, r6, #0\n    mov r1, #7\n    bl ov49_0225EF8C\n    b _0225F9FA\n    ldr r0, [sp, #8]\n    add r1, r7, #0\n    mov r2, #2\n    mov r3, #0\n    bl ov49_02258E7C\n    mov r0, #5\n    strh r0, [r4]\n    add r0, r6, #0\n    mov r1, #7\n    bl ov49_0225EF8C\n    b _0225F9FA\n    ldr r0, [sp, #8]\n    add r1, r7, #0\n    mov r2, #1\n    mov r3, #3\n    bl ov49_02258E7C\n    mov r0, #6\n    strh r0, [r4]\n    add r0, r6, #0\n    mov r1, #7\n    bl ov49_0225EF8C\n    b _0225F9FA\n    ldr r0, [sp, #8]\n    add r1, r7, #0\n    mov r2, #2\n    mov r3, #3\n    bl ov49_02258E7C\n    mov r0, #8\n    strh r0, [r4]\n    add r0, r6, #0\n    mov r1, #7\n    bl ov49_0225EF8C\n    b _0225F9FA\n    add r0, r7, #0\n    mov r1, #5\n    bl ov49_02258E60\n    cmp r0, #0\n    bne _0225F766\n    ldrh r1, [r4]\n    add r0, r6, #0\n    bl ov49_0225EF8C\n    b _0225F9FA\n    add r0, r5, #0\n    mov r1, #1\n    mov r2, #0\n    bl ov49_0225A30C\n    add r1, r0, #0\n    add r0, r5, #0\n    bl ov49_0225A08C\n    mov r0, #0x10\n    strh r0, [r4]\n    add r0, r6, #0\n    mov r1, #0x15\n    bl ov49_0225EF8C\n    b _0225F9FA\n    add r0, r5, #0\n    mov r1, #1\n    mov r2, #5\n    bl ov49_0225A30C\n    add r1, r0, #0\n    add r0, r5, #0\n    bl ov49_0225A09C\n    add r4, #8\n    mov r2, #0\n    add r0, r5, #0\n    add r1, r4, #0\n    add r3, r2, #0\n    bl ov49_0225A174\n    add r0, r5, #0\n    mov r1, #1\n    bl ov49_0225A1F4\n    add r0, r6, #0\n    mov r1, #0xa\n    bl ov49_0225EF8C\n    b _0225F9FA\n    add r0, r5, #0\n    mov r7, #0\n    bl ov49_0225A1D4\n    add r2, r0, #0\n    beq _0225F704\n    sub r0, r7, #2\n    cmp r2, r0\n    beq _0225F6FE\n    add r0, r0, #1\n    cmp r2, r0\n    beq _0225F718\n    b _0225F70C\n    ldr r0, _0225FA00 ; =0x000005DC\n    bl PlaySE\n    mov r0, #0\n    strh r0, [r4, #0x28]\n    mov r7, #1\n    b _0225F718\n    add r0, r5, #0\n    mov r1, #0\n    strh r2, [r4, #0x28]\n    mov r7, #1\n    bl ov49_0225A40C\n    cmp r7, #1\n    bne _0225F766\n    mov r1, #0\n    add r0, r5, #0\n    add r2, r1, #0\n    bl ov49_0225A1E4\n    ldrh r0, [r4, #0x28]\n    cmp r0, #0\n    beq _0225F74E\n    add r0, r5, #0\n    mov r1, #1\n    mov r2, #8\n    bl ov49_0225A30C\n    add r1, r0, #0\n    add r0, r5, #0\n    bl ov49_0225A09C\n    add r0, r5, #0\n    bl ov49_0225A264\n    add r0, r6, #0\n    mov r1, #0xb\n    bl ov49_0225EF8C\n    b _0225F9FA\n    add r0, r6, #0\n    mov r1, #0x11\n    bl ov49_0225EF8C\n    b _0225F9FA\n    add r0, r5, #0\n    bl ov49_0225A2C4\n    cmp r0, #0\n    beq _0225F768\n    cmp r0, #1\n    beq _0225F78E\n    b _0225F9FA\n    add r0, r5, #0\n    bl ov49_0225A2F8\n    add r0, r6, #0\n    mov r1, #0xc\n    bl ov49_0225EF8C\n    ldrh r1, [r4, #0x28]\n    ldrh r2, [r4, #0x2a]\n    ldr r0, [sp, #4]\n    bl ov45_0222A770\n    add r0, r5, #0\n    bl ov49_0225A490\n    ldr r0, _0225FA04 ; =0x000005E5\n    bl PlaySE\n    b _0225F9FA\n    add r0, r5, #0\n    bl ov49_0225A2F8\n    add r0, r6, #0\n    mov r1, #9\n    bl ov49_0225EF8C\n    b _0225F9FA\n    add r0, r5, #0\n    mov r1, #1\n    mov r2, #0xa\n    bl ov49_0225A30C\n    add r1, r0, #0\n    add r0, r5, #0\n    bl ov49_0225A09C\n    add r4, #8\n    mov r2, #0\n    add r0, r5, #0\n    add r1, r4, #0\n    add r3, r2, #0\n    bl ov49_0225A174\n    add r0, r5, #0\n    mov r1, #1\n    bl ov49_0225A1F4\n    add r0, r6, #0\n    mov r1, #0xd\n    bl ov49_0225EF8C\n    b _0225F9FA\n    add r0, r5, #0\n    mov r7, #0\n    bl ov49_0225A1D4\n    add r2, r0, #0\n    beq _0225F7F0\n    sub r0, r7, #2\n    cmp r2, r0\n    beq _0225F7EA\n    add r0, r0, #1\n    cmp r2, r0\n    beq _0225F804\n    b _0225F7F8\n    ldr r0, _0225FA00 ; =0x000005DC\n    bl PlaySE\n    mov r0, #0\n    strh r0, [r4, #0x2a]\n    mov r7, #1\n    b _0225F804\n    add r0, r5, #0\n    mov r1, #0\n    strh r2, [r4, #0x2a]\n    mov r7, #1\n    bl ov49_0225A40C\n    cmp r7, #1\n    bne _0225F852\n    mov r1, #0\n    add r0, r5, #0\n    add r2, r1, #0\n    bl ov49_0225A1E4\n    ldrh r0, [r4, #0x2a]\n    cmp r0, #0\n    beq _0225F83A\n    add r0, r5, #0\n    mov r1, #1\n    mov r2, #8\n    bl ov49_0225A30C\n    add r1, r0, #0\n    add r0, r5, #0\n    bl ov49_0225A09C\n    add r0, r5, #0\n    bl ov49_0225A264\n    add r0, r6, #0\n    mov r1, #0xf\n    bl ov49_0225EF8C\n    b _0225F9FA\n    add r0, r6, #0\n    mov r1, #0x13\n    bl ov49_0225EF8C\n    b _0225F9FA\n    add r0, r5, #0\n    bl ov49_0225A2C4\n    cmp r0, #0\n    beq _0225F854\n    cmp r0, #1\n    beq _0225F87A\n    b _0225F9FA\n    add r0, r5, #0\n    bl ov49_0225A2F8\n    add r0, r6, #0\n    mov r1, #0x14\n    bl ov49_0225EF8C\n    ldrh r1, [r4, #0x28]\n    ldrh r2, [r4, #0x2a]\n    ldr r0, [sp, #4]\n    bl ov45_0222A770\n    add r0, r5, #0\n    bl ov49_0225A490\n    ldr r0, _0225FA04 ; =0x000005E5\n    bl PlaySE\n    b _0225F9FA\n    add r0, r5, #0\n    bl ov49_0225A2F8\n    add r0, r6, #0\n    mov r1, #0xc\n    bl ov49_0225EF8C\n    b _0225F9FA\n    ldr r0, _0225FA08 ; =0x000005BF\n    bl PlaySE\n    add r0, r5, #0\n    bl ov49_0225A530\n    ldr r1, [sp]\n    add r0, r5, #0\n    mov r2, #0\n    bl ov49_0225A334\n    ldrh r1, [r4, #2]\n    add r0, r5, #0\n    mov r2, #1\n    bl ov49_0225A39C\n    ldr r0, [sp, #4]\n    ldr r1, [sp]\n    bl ov45_0222AB28\n    cmp r0, #0\n    bne _0225F8C2\n    mov r1, #1\n    add r0, r5, #0\n    add r2, r1, #0\n    bl ov49_0225A30C\n    b _0225F8CC\n    add r0, r5, #0\n    mov r1, #1\n    mov r2, #0x7c\n    bl ov49_0225A30C\n    add r1, r0, #0\n    add r0, r5, #0\n    bl ov49_0225A08C\n    mov r0, #0x12\n    strh r0, [r4]\n    add r0, r6, #0\n    mov r1, #0x15\n    bl ov49_0225EF8C\n    b _0225F9FA\n    add r0, r5, #0\n    mov r1, #1\n    mov r2, #2\n    bl ov49_0225A30C\n    add r1, r0, #0\n    add r0, r5, #0\n    bl ov49_0225A08C\n    mov r0, #0x16\n    strh r0, [r4]\n    add r0, r6, #0\n    mov r1, #0x15\n    bl ov49_0225EF8C\n    b _0225F9FA\n    ldr r0, _0225FA08 ; =0x000005BF\n    bl IsSEPlaying\n    cmp r0, #0\n    bne _0225F9FA\n    ldr r0, _0225FA0C ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #3\n    tst r0, r1\n    beq _0225F9FA\n    ldr r0, _0225FA00 ; =0x000005DC\n    bl PlaySE\n    add r0, r5, #0\n    mov r1, #1\n    mov r2, #4\n    bl ov49_0225A30C\n    add r1, r0, #0\n    add r0, r5, #0\n    bl ov49_0225A08C\n    mov r0, #9\n    strh r0, [r4]\n    add r0, r6, #0\n    mov r1, #0x15\n    bl ov49_0225EF8C\n    ldrh r1, [r4, #0x28]\n    ldrh r2, [r4, #0x2a]\n    ldr r0, [sp, #4]\n    bl ov45_0222A770\n    ldr r1, [sp]\n    add r0, r5, #0\n    mov r2, #0\n    bl ov49_0225A428\n    b _0225F9FA\n    ldrh r2, [r4, #0x28]\n    add r0, r5, #0\n    mov r1, #0\n    bl ov49_0225A40C\n    add r0, r5, #0\n    mov r1, #1\n    mov r2, #0xc\n    bl ov49_0225A30C\n    add r1, r0, #0\n    add r0, r5, #0\n    bl ov49_0225A08C\n    mov r0, #0x11\n    strh r0, [r4]\n    add r0, r6, #0\n    mov r1, #0x15\n    bl ov49_0225EF8C\n    b _0225F9FA\n    ldrh r2, [r4, #0x28]\n    add r0, r5, #0\n    mov r1, #0\n    bl ov49_0225A40C\n    ldrh r2, [r4, #0x2a]\n    add r0, r5, #0\n    mov r1, #1\n    bl ov49_0225A40C\n    add r0, r5, #0\n    mov r1, #1\n    mov r2, #0xb\n    bl ov49_0225A30C\n    add r1, r0, #0\n    add r0, r5, #0\n    bl ov49_0225A08C\n    mov r0, #0x11\n    strh r0, [r4]\n    add r0, r6, #0\n    mov r1, #0x15\n    bl ov49_0225EF8C\n    b _0225F9FA\n    add r0, r5, #0\n    bl ov49_0225A0AC\n    cmp r0, #1\n    bne _0225F9FA\n    ldrh r1, [r4]\n    add r0, r6, #0\n    bl ov49_0225EF8C\n    b _0225F9FA\n    ldr r0, [sp, #8]\n    add r1, r7, #0\n    mov r2, #1\n    bl ov49_02258EEC\n    add r0, r5, #0\n    bl ov49_0225A0EC\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov49_02261540\n    add r0, r6, #0\n    bl ov49_0225EF68\n    add r0, r5, #0\n    bl ov49_0225A010\n    add r4, r0, #0\n    add r0, r5, #0\n    bl ov49_0225A02C\n    add r1, r0, #0\n    ldr r2, _0225FA10 ; =ov49_02269B38\n    add r0, r4, #0\n    mov r3, #0\n    bl ov49_0225EF98\n    mov r0, #0\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    _0225FA00: .word 0x000005DC\n    _0225FA04: .word 0x000005E5\n    _0225FA08: .word 0x000005BF\n    _0225FA0C: .word gSystem\n    _0225FA10: .word ov49_02269B38"
    );
    #endif
}

void ov49_0225FA14(void) {
    /* Original at 0x0225FA14 */
    /* Requires manual decompilation - 126 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r4, r1, #0\n    add r5, r0, #0\n    add r0, r4, #0\n    str r2, [sp, #4]\n    bl ov49_02259FE8\n    str r0, [sp, #8]\n    add r0, r4, #0\n    bl ov49_02259FEC\n    add r6, r0, #0\n    add r0, r4, #0\n    bl ov49_02259FF0\n    str r0, [sp, #0xc]\n    bl ov49_02258DAC\n    add r7, r0, #0\n    add r0, r5, #0\n    bl ov49_0225EF88\n    cmp r0, #5\n    bls _0225FA48\n    b _0225FB52\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0225FA54: ; jump table\n    mov r0, #1\n    str r0, [sp]\n    ldrh r2, [r6]\n    ldrh r3, [r6, #2]\n    ldr r1, [sp, #4]\n    add r0, r4, #0\n    bl ov49_0225F334\n    bl ov45_0222D844\n    cmp r0, #0\n    bne _0225FA7C\n    bl ov45_0222EB94\n    ldr r0, [sp, #8]\n    mov r1, #0\n    bl ov45_0222A520\n    add r0, r5, #0\n    bl ov49_0225EF90\n    b _0225FB52\n    bl ov45_0222D844\n    cmp r0, #0\n    bne _0225FA9C\n    bl ov45_0222EBC4\n    cmp r0, #0\n    beq _0225FB52\n    add r0, r4, #0\n    bl ov49_02259FEC\n    add r6, r0, #0\n    add r0, r4, #0\n    bl ov49_0225A030\n    cmp r0, #0\n    bne _0225FB52\n    add r0, r5, #0\n    bl ov49_0225EF90\n    ldrh r3, [r6, #4]\n    ldr r0, [sp, #0xc]\n    add r1, r7, #0\n    mov r2, #2\n    bl ov49_02258EAC\n    b _0225FB52\n    add r0, r7, #0\n    mov r1, #5\n    bl ov49_02258E60\n    cmp r0, #0\n    bne _0225FB52\n    add r0, r4, #0\n    mov r1, #1\n    bl ov49_0225A018\n    ldr r0, [sp, #8]\n    bl ov45_0222A4B8\n    cmp r0, #1\n    bne _0225FAE8\n    add r0, r5, #0\n    bl ov49_0225EF90\n    b _0225FB52\n    add r0, r5, #0\n    mov r1, #5\n    bl ov49_0225EF8C\n    b _0225FB52\n    ldrh r1, [r6, #8]\n    add r0, r4, #0\n    mov r2, #0\n    bl ov49_0225A37C\n    add r0, r4, #0\n    mov r1, #0\n    mov r2, #0x15\n    bl ov49_0225A30C\n    add r1, r0, #0\n    add r0, r4, #0\n    bl ov49_0225A08C\n    add r0, r5, #0\n    bl ov49_0225EF90\n    b _0225FB52\n    add r0, r4, #0\n    bl ov49_0225A0AC\n    cmp r0, #1\n    bne _0225FB52\n    add r0, r4, #0\n    bl ov49_0225A0EC\n    add r0, r5, #0\n    bl ov49_0225EF90\n    b _0225FB52\n    ldr r0, [sp, #0xc]\n    add r1, r7, #0\n    mov r2, #1\n    bl ov49_02258EEC\n    add r0, r4, #0\n    bl ov49_0225A010\n    add r5, r0, #0\n    add r0, r4, #0\n    bl ov49_0225A02C\n    add r1, r0, #0\n    ldr r2, _0225FB58 ; =ov49_02269B38\n    add r0, r5, #0\n    mov r3, #0\n    bl ov49_0225EF98\n    mov r0, #0\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    _0225FB58: .word ov49_02269B38"
    );
    #endif
}

void ov49_0225FB5C(void) {
    /* Original at 0x0225FB5C */
    /* Requires manual decompilation - 128 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r4, r1, #0\n    add r5, r0, #0\n    add r0, r4, #0\n    str r2, [sp, #4]\n    bl ov49_0225A010\n    str r0, [sp, #8]\n    add r0, r4, #0\n    bl ov49_02259FF0\n    str r0, [sp, #0xc]\n    bl ov49_02258DAC\n    add r7, r0, #0\n    add r0, r4, #0\n    bl ov49_02259FE8\n    str r0, [sp, #0x10]\n    add r0, r4, #0\n    bl ov49_02259FEC\n    add r6, r0, #0\n    add r0, r5, #0\n    bl ov49_0225EF88\n    cmp r0, #5\n    bls _0225FB98\n    b _0225FC9A\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0225FBA4: ; jump table\n    mov r0, #1\n    str r0, [sp]\n    ldrh r2, [r6]\n    ldrh r3, [r6, #2]\n    ldr r1, [sp, #4]\n    add r0, r4, #0\n    bl ov49_0225F334\n    add r0, r5, #0\n    bl ov49_0225EF90\n    ldr r0, [sp, #8]\n    ldr r1, [sp, #4]\n    ldr r2, _0225FCA0 ; =ov49_02269B68\n    mov r3, #0\n    bl ov49_0225EFC4\n    ldr r0, [sp, #0x10]\n    mov r1, #0\n    bl ov45_0222A4C8\n    ldr r0, [sp, #0x10]\n    bl ov45_0222A4D0\n    b _0225FC9A\n    add r0, r4, #0\n    bl ov49_02259FEC\n    add r6, r0, #0\n    add r0, r4, #0\n    bl ov49_0225A030\n    cmp r0, #0\n    bne _0225FC9A\n    add r0, r5, #0\n    bl ov49_0225EF90\n    ldrh r3, [r6, #4]\n    ldr r0, [sp, #0xc]\n    add r1, r7, #0\n    mov r2, #2\n    bl ov49_02258EAC\n    b _0225FC9A\n    add r0, r7, #0\n    mov r1, #5\n    bl ov49_02258E60\n    cmp r0, #0\n    bne _0225FC9A\n    add r0, r4, #0\n    mov r1, #1\n    bl ov49_0225A018\n    ldr r0, [sp, #0x10]\n    bl ov45_0222A424\n    cmp r0, #1\n    bne _0225FC30\n    add r0, r5, #0\n    mov r1, #3\n    bl ov49_0225EF8C\n    b _0225FC9A\n    add r0, r5, #0\n    mov r1, #5\n    bl ov49_0225EF8C\n    b _0225FC9A\n    ldrh r1, [r6, #8]\n    add r0, r4, #0\n    mov r2, #0\n    bl ov49_0225A37C\n    add r0, r4, #0\n    mov r1, #0\n    mov r2, #8\n    bl ov49_0225A30C\n    add r1, r0, #0\n    add r0, r4, #0\n    bl ov49_0225A08C\n    add r0, r5, #0\n    bl ov49_0225EF90\n    b _0225FC9A\n    add r0, r4, #0\n    bl ov49_0225A0AC\n    cmp r0, #1\n    bne _0225FC9A\n    add r0, r4, #0\n    bl ov49_0225A0EC\n    add r0, r5, #0\n    bl ov49_0225EF90\n    b _0225FC9A\n    ldr r0, [sp, #0xc]\n    add r1, r7, #0\n    mov r2, #1\n    bl ov49_02258EEC\n    add r0, r4, #0\n    bl ov49_0225A010\n    add r5, r0, #0\n    add r0, r4, #0\n    bl ov49_0225A02C\n    add r1, r0, #0\n    ldr r2, _0225FCA4 ; =ov49_02269B38\n    add r0, r5, #0\n    mov r3, #0\n    bl ov49_0225EF98\n    mov r0, #0\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    _0225FCA0: .word ov49_02269B68\n    _0225FCA4: .word ov49_02269B38"
    );
    #endif
}

void ov49_0225FCA8(void) {
    /* Original at 0x0225FCA8 */
    /* Requires manual decompilation - 113 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r4, r1, #0\n    add r5, r0, #0\n    add r0, r4, #0\n    str r2, [sp, #4]\n    bl ov49_02259FE8\n    add r7, r0, #0\n    add r0, r4, #0\n    bl ov49_02259FEC\n    str r0, [sp, #8]\n    add r0, r4, #0\n    bl ov49_02259FF0\n    str r0, [sp, #0xc]\n    bl ov49_02258DAC\n    add r6, r0, #0\n    add r0, r5, #0\n    bl ov49_0225EF88\n    cmp r0, #5\n    bhi _0225FDC2\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0225FCE6: ; jump table\n    mov r0, #1\n    str r0, [sp]\n    ldr r2, [sp, #8]\n    ldr r3, [sp, #8]\n    ldrh r2, [r2]\n    ldrh r3, [r3, #2]\n    ldr r1, [sp, #4]\n    add r0, r4, #0\n    bl ov49_0225F334\n    add r0, r7, #0\n    mov r1, #0\n    bl ov45_0222A520\n    add r0, r5, #0\n    bl ov49_0225EF90\n    b _0225FDC2\n    add r0, r4, #0\n    bl ov49_02259FEC\n    add r7, r0, #0\n    add r0, r4, #0\n    bl ov49_0225A030\n    cmp r0, #0\n    bne _0225FDC2\n    add r0, r5, #0\n    bl ov49_0225EF90\n    ldrh r3, [r7, #4]\n    ldr r0, [sp, #0xc]\n    add r1, r6, #0\n    mov r2, #2\n    bl ov49_02258EAC\n    b _0225FDC2\n    add r0, r6, #0\n    mov r1, #5\n    bl ov49_02258E60\n    cmp r0, #0\n    bne _0225FDC2\n    add r0, r4, #0\n    mov r1, #1\n    bl ov49_0225A018\n    add r0, r7, #0\n    bl ov45_0222A4B8\n    cmp r0, #1\n    bne _0225FD62\n    add r0, r5, #0\n    bl ov49_0225EF90\n    b _0225FDC2\n    add r0, r5, #0\n    mov r1, #5\n    bl ov49_0225EF8C\n    b _0225FDC2\n    add r0, r4, #0\n    mov r1, #1\n    mov r2, #0x5b\n    bl ov49_0225A30C\n    add r1, r0, #0\n    add r0, r4, #0\n    bl ov49_0225A08C\n    add r0, r5, #0\n    bl ov49_0225EF90\n    b _0225FDC2\n    add r0, r4, #0\n    bl ov49_0225A0AC\n    cmp r0, #1\n    bne _0225FDC2\n    add r0, r4, #0\n    bl ov49_0225A0EC\n    add r0, r5, #0\n    bl ov49_0225EF90\n    b _0225FDC2\n    ldr r0, [sp, #0xc]\n    add r1, r6, #0\n    mov r2, #1\n    bl ov49_02258EEC\n    add r0, r4, #0\n    bl ov49_0225A010\n    add r5, r0, #0\n    add r0, r4, #0\n    bl ov49_0225A02C\n    add r1, r0, #0\n    ldr r2, _0225FDC8 ; =ov49_02269B38\n    add r0, r5, #0\n    mov r3, #0\n    bl ov49_0225EF98\n    mov r0, #0\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    _0225FDC8: .word ov49_02269B38"
    );
    #endif
}

void ov49_0225FDCC(void) {
    /* Original at 0x0225FDCC */
    /* Requires manual decompilation - 468 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x50\n    str r0, [sp, #4]\n    add r5, r1, #0\n    add r7, r2, #0\n    bl ov49_0225EF84\n    str r0, [sp, #0x30]\n    ldr r0, [sp, #4]\n    bl ov49_0225EF88\n    cmp r0, #0\n    beq _0225FDEC\n    cmp r0, #1\n    beq _0225FDFC\n    b _0226020A\n    ldr r0, [sp, #4]\n    mov r1, #4\n    bl ov49_0225EF40\n    ldr r0, [sp, #4]\n    bl ov49_0225EF90\n    b _0226020A\n    add r0, r5, #0\n    mov r1, #0\n    bl ov49_0225A53C\n    add r0, r5, #0\n    bl ov49_0225A010\n    str r0, [sp, #0x14]\n    add r0, r5, #0\n    bl ov49_02259FE8\n    str r0, [sp, #0x18]\n    add r0, r5, #0\n    bl ov49_02259FF0\n    add r4, r0, #0\n    add r0, r5, #0\n    bl ov49_0225A000\n    str r0, [sp, #0x1c]\n    add r0, r5, #0\n    bl ov49_02259FF8\n    str r0, [sp, #0x20]\n    add r0, r4, #0\n    bl ov49_02258DB0\n    add r6, r0, #0\n    beq _0225FE7E\n    ldr r0, [sp, #0x18]\n    bl ov45_0222A330\n    cmp r0, #0\n    bne _0225FE6A\n    ldr r0, [sp, #0x18]\n    bl ov45_0222A3A0\n    cmp r0, #1\n    bne _0225FE6A\n    ldr r0, [sp, #0x18]\n    bl ov45_0222A2F8\n    cmp r0, #0\n    bne _0225FE6A\n    add r0, r6, #0\n    bl ov49_02258F3C\n    cmp r0, #9\n    beq _0225FE7E\n    add r0, r4, #0\n    add r1, r6, #0\n    mov r2, #9\n    bl ov49_02258EEC\n    b _0225FE7E\n    add r0, r6, #0\n    bl ov49_02258F3C\n    cmp r0, #0\n    beq _0225FE7E\n    add r0, r4, #0\n    add r1, r6, #0\n    mov r2, #0\n    bl ov49_02258EEC\n    add r0, r4, #0\n    bl ov49_02258DAC\n    str r0, [sp, #0x28]\n    mov r1, #5\n    bl ov49_02258E60\n    str r0, [sp, #0x2c]\n    ldr r0, [sp, #0x28]\n    mov r1, #6\n    bl ov49_02258E60\n    str r0, [sp, #8]\n    ldr r0, [sp, #0x28]\n    bl ov49_02258E34\n    add r1, sp, #0x40\n    strh r0, [r1, #4]\n    lsr r0, r0, #0x10\n    strh r0, [r1, #6]\n    ldrh r0, [r1, #4]\n    mov r2, sp\n    sub r2, r2, #4\n    strh r0, [r1, #0xc]\n    ldrh r0, [r1, #6]\n    strh r0, [r1, #0xe]\n    ldrh r0, [r1, #0xc]\n    strh r0, [r2]\n    ldrh r0, [r1, #0xe]\n    ldr r1, [sp, #8]\n    strh r0, [r2, #2]\n    ldr r0, [r2]\n    bl ov42_02228270\n    add r2, sp, #0x40\n    strh r0, [r2]\n    lsr r0, r0, #0x10\n    strh r0, [r2, #2]\n    ldrh r0, [r2]\n    mov r1, #0xc\n    strh r0, [r2, #8]\n    ldrh r0, [r2, #2]\n    strh r0, [r2, #0xa]\n    ldrsh r1, [r2, r1]\n    ldr r0, [sp, #0x1c]\n    asr r3, r1, #3\n    lsr r3, r3, #0x1c\n    add r3, r1, r3\n    lsl r1, r3, #0xc\n    mov r3, #0xe\n    ldrsh r2, [r2, r3]\n    lsr r1, r1, #0x10\n    asr r3, r2, #3\n    lsr r3, r3, #0x1c\n    add r3, r2, r3\n    lsl r2, r3, #0xc\n    lsr r2, r2, #0x10\n    bl ov49_022589C4\n    str r0, [sp, #0x24]\n    add r0, sp, #0x40\n    mov r1, #0xa\n    ldrsh r2, [r0, r1]\n    asr r1, r2, #3\n    lsr r1, r1, #0x1c\n    add r1, r2, r1\n    asr r1, r1, #4\n    str r1, [sp, #0x10]\n    mov r1, #8\n    ldrsh r1, [r0, r1]\n    ldr r2, [sp, #0x10]\n    asr r0, r1, #3\n    lsr r0, r0, #0x1c\n    add r0, r1, r0\n    asr r0, r0, #4\n    str r0, [sp, #0xc]\n    ldr r1, [sp, #0xc]\n    lsl r2, r2, #0x10\n    lsl r1, r1, #0x10\n    ldr r0, [sp, #0x1c]\n    lsr r1, r1, #0x10\n    lsr r2, r2, #0x10\n    bl ov49_022589C4\n    add r6, r0, #0\n    add r0, r5, #0\n    bl ov49_0225A4E0\n    add r1, r0, #0\n    cmp r1, r7\n    beq _0225FF48\n    lsl r1, r1, #0x18\n    add r0, r5, #0\n    lsr r1, r1, #0x18\n    bl ov49_0225A084\n    cmp r0, #0\n    beq _0225FF48\n    add r0, r5, #0\n    bl ov49_0225A4D0\n    ldr r0, [sp, #0x2c]\n    cmp r0, #0\n    beq _0225FF94\n    add r0, r5, #0\n    bl ov49_0225A500\n    cmp r0, #1\n    bne _0225FF60\n    ldr r0, [sp, #0x2c]\n    sub r0, r0, #1\n    cmp r0, #2\n    bls _0225FF62\n    b _0226020A\n    add r0, r5, #0\n    bl ov49_0225A4E0\n    add r1, r0, #0\n    cmp r1, r7\n    beq _0225FF8C\n    add r0, r4, #0\n    bl ov49_02258D70\n    add r6, r0, #0\n    beq _0225FF8C\n    bl ov49_02258F3C\n    cmp r0, #0\n    bne _0225FF8C\n    ldr r2, [sp, #0x30]\n    add r0, r4, #0\n    ldr r2, [r2]\n    add r1, r6, #0\n    bl ov49_02258EEC\n    add r0, r5, #0\n    bl ov49_0225A4D0\n    b _0226020A\n    add r0, r5, #0\n    mov r1, #0\n    bl ov49_0225A53C\n    ldr r0, [sp, #0x24]\n    bl ov49_02258A30\n    cmp r0, #1\n    bne _0225FFDA\n    ldr r0, [sp, #0x24]\n    ldr r3, _02260210 ; =ov49_02269D20\n    str r0, [sp]\n    ldr r0, [sp, #4]\n    add r1, r5, #0\n    add r2, r7, #0\n    bl ov49_0225F260\n    ldr r1, [sp, #0x28]\n    add r0, r4, #0\n    mov r2, #0\n    bl ov49_02258EEC\n    ldr r1, [sp, #0x24]\n    add r0, r5, #0\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    bl ov49_0225A03C\n    add r0, r5, #0\n    mov r1, #1\n    bl ov49_0225A53C\n    add sp, #0x50\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r5, #0\n    bl ov49_0225A55C\n    cmp r0, #1\n    bne _02260008\n    ldr r1, [sp, #0x28]\n    add r0, r4, #0\n    mov r2, #0\n    bl ov49_02258EEC\n    ldr r0, [sp, #0x14]\n    ldr r2, _02260214 ; =ov49_02269B80\n    add r1, r7, #0\n    mov r3, #0\n    bl ov49_0225EFC4\n    add r0, r5, #0\n    mov r1, #1\n    bl ov49_0225A53C\n    add sp, #0x50\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [sp, #0x18]\n    bl ov45_0222B00C\n    cmp r0, #0\n    beq _02260036\n    ldr r0, [sp, #0x14]\n    ldr r2, _02260218 ; =ov49_02269B70\n    add r1, r7, #0\n    mov r3, #0\n    bl ov49_0225EFC4\n    ldr r1, [sp, #0x28]\n    add r0, r4, #0\n    mov r2, #0\n    bl ov49_02258EEC\n    add r0, r5, #0\n    mov r1, #1\n    bl ov49_0225A53C\n    add sp, #0x50\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, _0226021C ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #1\n    tst r0, r1\n    beq _02260120\n    ldr r1, [sp, #0x28]\n    add r0, r4, #0\n    bl ov49_02258F40\n    str r0, [sp, #0x34]\n    cmp r0, #0\n    beq _022600A6\n    mov r1, #5\n    bl ov49_02258E60\n    str r0, [sp, #0x38]\n    ldr r0, [sp, #0x34]\n    mov r1, #4\n    bl ov49_02258E60\n    add r1, r0, #0\n    cmp r1, #0xfe\n    beq _022600A6\n    lsl r1, r1, #0x18\n    add r0, r5, #0\n    lsr r1, r1, #0x18\n    bl ov49_0225A064\n    ldr r1, [sp, #0x38]\n    cmp r1, #0\n    bne _022600A6\n    cmp r0, #0\n    bne _022600A6\n    ldr r0, [sp, #0x14]\n    ldr r2, _02260220 ; =ov49_02269B60\n    add r1, r7, #0\n    mov r3, #0\n    bl ov49_0225EFC4\n    ldr r1, [sp, #0x28]\n    add r0, r4, #0\n    mov r2, #0\n    bl ov49_02258EEC\n    ldr r1, [sp, #0x34]\n    add r0, r4, #0\n    mov r2, #0\n    bl ov49_02258EEC\n    add r0, r5, #0\n    mov r1, #1\n    bl ov49_0225A53C\n    add sp, #0x50\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r6, #0\n    bl ov49_02258A90\n    cmp r0, #1\n    bne _022600E6\n    ldr r0, [sp, #0x28]\n    mov r1, #6\n    bl ov49_02258E60\n    cmp r0, #0\n    bne _022600E6\n    ldr r1, [sp, #0xc]\n    ldr r2, [sp, #0x10]\n    lsl r1, r1, #0x18\n    lsl r2, r2, #0x18\n    ldr r0, [sp, #0x20]\n    lsr r1, r1, #0x18\n    lsr r2, r2, #0x18\n    bl ov49_0225E58C\n    lsl r1, r6, #0x18\n    add r0, r5, #0\n    lsr r1, r1, #0x18\n    bl ov49_0225A03C\n    add r0, r5, #0\n    mov r1, #1\n    bl ov49_0225A53C\n    add sp, #0x50\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r6, #0\n    bl ov49_02258A70\n    cmp r0, #1\n    bne _02260120\n    ldr r0, [sp, #4]\n    ldr r3, _02260224 ; =ov49_02269C90\n    add r1, r5, #0\n    add r2, r7, #0\n    str r6, [sp]\n    bl ov49_0225F260\n    ldr r1, [sp, #0x28]\n    add r0, r4, #0\n    mov r2, #0\n    bl ov49_02258EEC\n    lsl r1, r6, #0x18\n    add r0, r5, #0\n    lsr r1, r1, #0x18\n    bl ov49_0225A03C\n    add r0, r5, #0\n    mov r1, #1\n    bl ov49_0225A53C\n    add sp, #0x50\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [sp, #8]\n    bl ov49_0225F224\n    cmp r0, #1\n    bne _022601C0\n    ldr r0, [sp, #8]\n    cmp r0, #0\n    bne _0226016A\n    add r0, r6, #0\n    bl ov49_02258A50\n    cmp r0, #1\n    bne _0226016A\n    ldr r0, [sp, #4]\n    ldr r3, _02260228 ; =ov49_02269C60\n    add r1, r5, #0\n    add r2, r7, #0\n    str r6, [sp]\n    bl ov49_0225F260\n    ldr r1, [sp, #0x28]\n    add r0, r4, #0\n    mov r2, #0\n    bl ov49_02258EEC\n    lsl r1, r6, #0x18\n    add r0, r5, #0\n    lsr r1, r1, #0x18\n    bl ov49_0225A03C\n    add r0, r5, #0\n    mov r1, #1\n    bl ov49_0225A53C\n    add sp, #0x50\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r1, [sp, #0x28]\n    add r0, r4, #0\n    bl ov49_02258F40\n    str r0, [sp, #0x3c]\n    cmp r0, #0\n    beq _022601C0\n    mov r1, #4\n    bl ov49_02258E60\n    add r6, r0, #0\n    cmp r6, #0xfe\n    beq _022601C0\n    add r0, r5, #0\n    bl ov49_0225A4F0\n    cmp r0, #0\n    bne _022601C0\n    lsl r1, r6, #0x18\n    add r0, r5, #0\n    lsr r1, r1, #0x18\n    bl ov49_0225A084\n    cmp r0, #0\n    bne _022601C0\n    add r0, r5, #0\n    add r1, r6, #0\n    mov r2, #1\n    bl ov49_0225A428\n    ldr r0, [sp, #0x3c]\n    bl ov49_02258F3C\n    ldr r1, [sp, #0x30]\n    mov r2, #0\n    str r0, [r1]\n    ldr r1, [sp, #0x3c]\n    add r0, r4, #0\n    bl ov49_02258EEC\n    add sp, #0x50\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, _0226021C ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #1\n    lsl r0, r0, #0xa\n    tst r0, r1\n    beq _0226020A\n    add r0, r5, #0\n    bl ov49_0225A4F0\n    cmp r0, #0\n    bne _022601EE\n    ldr r0, [sp, #0x18]\n    bl ov45_0222A53C\n    add r1, r0, #0\n    add r0, r5, #0\n    mov r2, #0\n    bl ov49_0225A428\n    ldr r0, _0226022C ; =0x000005DC\n    bl PlaySE\n    b _02260204\n    add r0, r5, #0\n    bl ov49_0225A4E0\n    cmp r0, r7\n    bne _02260204\n    add r0, r5, #0\n    bl ov49_0225A4D0\n    ldr r0, _0226022C ; =0x000005DC\n    bl PlaySE\n    add sp, #0x50\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0\n    add sp, #0x50\n    pop {r3, r4, r5, r6, r7, pc}\n    _02260210: .word ov49_02269D20\n    _02260214: .word ov49_02269B80\n    _02260218: .word ov49_02269B70\n    _0226021C: .word gSystem\n    _02260220: .word ov49_02269B60\n    _02260224: .word ov49_02269C90\n    _02260228: .word ov49_02269C60\n    _0226022C: .word 0x000005DC"
    );
    #endif
}

void ov49_02260230(void) {
    /* Original at 0x02260230 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    add r0, r4, #0\n    bl ov49_02259FF0\n    bl ov49_02258DAC\n    mov r1, #5\n    bl ov49_02258E60\n    cmp r0, #0\n    beq _02260250\n    add r0, r4, #0\n    mov r1, #1\n    bl ov49_0225A53C\n    mov r0, #0\n    pop {r4, pc}"
    );
    #endif
}

void ov49_02260254(void) {
    /* Original at 0x02260254 */
    /* Requires manual decompilation - 173 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    add r7, r2, #0\n    bl ov49_0225EF88\n    cmp r0, #9\n    bhi _022602FC\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02260270: ; jump table\n    add r0, r4, #0\n    bl ov49_02259FF0\n    add r6, r0, #0\n    bl ov49_02258DAC\n    add r1, r0, #0\n    add r0, r6, #0\n    mov r2, #0\n    bl ov49_02258EEC\n    add r0, r4, #0\n    bl ov49_02259FE8\n    mov r1, #0xb\n    bl ov45_0222A5E8\n    ldr r0, _02260420 ; =0x000005DD\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #1\n    mov r2, #0x41\n    bl ov49_0225A30C\n    add r1, r0, #0\n    add r0, r4, #0\n    bl ov49_0225A08C\n    add r0, r5, #0\n    bl ov49_0225EF90\n    b _0226041A\n    add r0, r4, #0\n    bl ov49_0225A0AC\n    cmp r0, #1\n    bne _022602FC\n    add r0, r5, #0\n    bl ov49_0225EF90\n    b _0226041A\n    add r0, r4, #0\n    mov r1, #2\n    mov r2, #0x19\n    bl ov49_0225A30C\n    add r1, r0, #0\n    add r0, r4, #0\n    bl ov49_0225A08C\n    add r0, r5, #0\n    bl ov49_0225EF90\n    b _0226041A\n    add r0, r4, #0\n    bl ov49_0225A0AC\n    cmp r0, #1\n    beq _022602FE\n    b _0226041A\n    add r0, r5, #0\n    bl ov49_0225EF90\n    b _0226041A\n    add r0, r4, #0\n    bl ov49_0225A294\n    add r0, r5, #0\n    bl ov49_0225EF90\n    b _0226041A\n    add r0, r4, #0\n    mov r6, #0\n    bl ov49_0225A2C4\n    cmp r0, #0\n    beq _02260328\n    cmp r0, #1\n    beq _02260334\n    cmp r0, #2\n    b _0226033E\n    add r0, r5, #0\n    mov r1, #6\n    bl ov49_0225EF8C\n    mov r6, #1\n    b _0226033E\n    add r0, r5, #0\n    mov r1, #8\n    bl ov49_0225EF8C\n    mov r6, #1\n    cmp r6, #1\n    bne _0226041A\n    add r0, r4, #0\n    bl ov49_0225A2F8\n    add r0, r4, #0\n    bl ov49_0225A0EC\n    b _0226041A\n    add r0, r4, #0\n    mov r1, #0\n    bl ov49_0225A018\n    add r0, r4, #0\n    bl ov49_02259FF0\n    add r6, r0, #0\n    bl ov49_02258DAC\n    add r7, r0, #0\n    add r0, r4, #0\n    bl ov49_0225A008\n    bl ov49_0225CC44\n    add r0, r6, #0\n    add r1, r7, #0\n    mov r2, #3\n    bl ov49_02258EEC\n    add r0, r5, #0\n    mov r1, #7\n    bl ov49_0225EF8C\n    b _0226041A\n    add r0, r4, #0\n    bl ov49_02259FF0\n    bl ov49_02258DAC\n    bl ov49_02258F38\n    cmp r0, #1\n    bne _0226041A\n    add r0, r4, #0\n    mov r1, #1\n    bl ov49_0225A034\n    add r0, r4, #0\n    mov r1, #0\n    bl ov49_0225A038\n    add r0, r4, #0\n    bl ov49_02259FE8\n    mov r1, #0xb\n    bl ov45_0222A5E8\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r4, #0\n    bl ov49_02259FF0\n    add r4, r0, #0\n    bl ov49_02258DAC\n    add r1, r0, #0\n    add r0, r4, #0\n    mov r2, #2\n    mov r3, #0\n    bl ov49_02258EAC\n    add r0, r5, #0\n    bl ov49_0225EF90\n    b _0226041A\n    add r0, r4, #0\n    bl ov49_02259FE8\n    mov r1, #1\n    bl ov45_0222A5E8\n    add r0, r4, #0\n    bl ov49_02259FF0\n    add r5, r0, #0\n    add r0, r4, #0\n    bl ov49_0225A010\n    add r4, r0, #0\n    add r0, r5, #0\n    bl ov49_02258DAC\n    mov r1, #5\n    add r6, r0, #0\n    bl ov49_02258E60\n    cmp r0, #0\n    bne _0226041A\n    add r0, r5, #0\n    add r1, r6, #0\n    mov r2, #1\n    bl ov49_02258EEC\n    ldr r2, _02260424 ; =ov49_02269B38\n    add r0, r4, #0\n    add r1, r7, #0\n    mov r3, #0\n    bl ov49_0225EF98\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02260420: .word 0x000005DD\n    _02260424: .word ov49_02269B38"
    );
    #endif
}

void ov49_02260428(void) {
    /* Original at 0x02260428 */
    /* Requires manual decompilation - 380 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x44\n    add r4, r1, #0\n    add r5, r0, #0\n    str r2, [sp, #0x10]\n    add r0, r4, #0\n    bl ov49_02259FF0\n    ldr r1, [sp, #0x10]\n    str r0, [sp, #0x28]\n    bl ov49_02258D70\n    add r7, r0, #0\n    add r0, r4, #0\n    bl ov49_0225A040\n    str r0, [sp, #0x20]\n    add r0, r5, #0\n    bl ov49_0225EF84\n    add r6, r0, #0\n    add r0, r4, #0\n    bl ov49_02259FE8\n    str r0, [sp, #0x24]\n    add r0, r5, #0\n    bl ov49_0225EF88\n    cmp r0, #8\n    bls _02260466\n    b _022607B8\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02260472: ; jump table\n    add r0, r5, #0\n    mov r1, #0xc\n    bl ov49_0225EF40\n    add r4, r0, #0\n    ldr r0, [sp, #0x20]\n    bl ov49_02260C58\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    cmp r0, #3\n    bhi _022604C8\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _022604A8: ; jump table\n    mov r0, #3\n    str r0, [r4, #8]\n    b _022604D0\n    mov r0, #4\n    str r0, [r4, #8]\n    b _022604D0\n    mov r0, #5\n    str r0, [r4, #8]\n    b _022604D0\n    mov r0, #6\n    str r0, [r4, #8]\n    b _022604D0\n    bl GF_AssertFail\n    mov r0, #5\n    str r0, [r4, #8]\n    ldr r0, [sp, #0x24]\n    bl ov45_0222A330\n    cmp r0, #1\n    bne _022604EC\n    mov r0, #0x16\n    strh r0, [r4, #4]\n    mov r0, #0\n    strh r0, [r4, #6]\n    add r0, r5, #0\n    mov r1, #5\n    bl ov49_0225EF8C\n    b _022607B8\n    ldr r0, [sp, #0x24]\n    bl ov45_0222A208\n    cmp r0, #1\n    bne _02260508\n    mov r0, #0x48\n    strh r0, [r4, #4]\n    mov r0, #1\n    strh r0, [r4, #6]\n    add r0, r5, #0\n    mov r1, #5\n    bl ov49_0225EF8C\n    b _022607B8\n    ldr r0, [sp, #0x20]\n    bl ov49_02260C58\n    lsl r0, r0, #0x18\n    lsr r6, r0, #0x18\n    add r0, r6, #0\n    bl ov45_0222EBF0\n    cmp r0, #0\n    bne _0226052E\n    mov r0, #0x14\n    strh r0, [r4, #4]\n    mov r0, #0\n    strh r0, [r4, #6]\n    add r0, r5, #0\n    mov r1, #3\n    bl ov49_0225EF8C\n    b _022607B8\n    add r0, r6, #0\n    bl ov45_0222EB38\n    cmp r0, #0\n    bne _0226053C\n    bl GF_AssertFail\n    add r0, r5, #0\n    bl ov49_0225EF90\n    b _022607B8\n    bl ov45_0222EB74\n    cmp r0, #1\n    bne _022605CA\n    add r0, r5, #0\n    mov r1, #2\n    bl ov49_0225EF8C\n    add r1, sp, #0x40\n    mov r0, #0\n    strb r0, [r1]\n    strb r0, [r1, #1]\n    strb r0, [r1, #2]\n    strb r0, [r1, #3]\n    add r0, r4, #0\n    bl ov49_02259FE8\n    add r7, r0, #0\n    bl ov45_0222AB68\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #0x1c]\n    ldr r0, [r6, #8]\n    sub r0, r0, #5\n    cmp r0, #1\n    bhi _022605A4\n    mov r5, #0\n    add r4, r5, #0\n    add r0, r7, #0\n    add r1, r4, #0\n    bl ov45_0222AB78\n    mov r1, #0\n    mvn r1, r1\n    cmp r0, r1\n    beq _0226059C\n    cmp r5, #4\n    bhs _02260596\n    add r1, sp, #0x40\n    strb r0, [r1, r5]\n    add r0, r5, #1\n    lsl r0, r0, #0x18\n    lsr r5, r0, #0x18\n    add r4, r4, #1\n    cmp r4, #4\n    blt _0226057E\n    b _022605AA\n    ldr r0, [sp, #0x10]\n    add r1, sp, #0x38\n    strb r0, [r1, #8]\n    add r3, sp, #0x38\n    ldrb r0, [r3, #9]\n    str r0, [sp]\n    ldrb r0, [r3, #0xa]\n    str r0, [sp, #4]\n    ldrb r0, [r3, #0xb]\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    ldrb r3, [r3, #8]\n    ldr r1, [r6, #8]\n    ldr r2, [sp, #0x1c]\n    add r0, r7, #0\n    bl ov45_0222AC14\n    b _022607B8\n    cmp r0, #2\n    beq _022605D0\n    b _022607B8\n    mov r0, #0x14\n    strh r0, [r6, #4]\n    mov r0, #0\n    strh r0, [r6, #6]\n    add r0, r5, #0\n    mov r1, #3\n    bl ov49_0225EF8C\n    b _022607B8\n    ldr r0, [sp, #0x20]\n    bl ov49_02260CC0\n    str r0, [sp, #0x2c]\n    ldr r0, [sp, #0x20]\n    bl ov49_02260D28\n    str r0, [sp, #0x30]\n    add r0, r4, #0\n    mov r1, #1\n    bl ov49_0225A034\n    ldr r1, [sp, #0x2c]\n    add r0, r4, #0\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    bl ov49_0225A038\n    add r0, r4, #0\n    bl ov49_02259FE8\n    ldr r1, [sp, #0x30]\n    bl ov45_0222A5E8\n    ldr r0, [r6, #8]\n    cmp r0, #6\n    bhi _02260644\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02260624: ; jump table\n    mov r0, #5\n    str r0, [sp, #0x18]\n    b _02260648\n    mov r0, #3\n    str r0, [sp, #0x18]\n    b _02260648\n    mov r0, #4\n    str r0, [sp, #0x18]\n    b _02260648\n    bl GF_AssertFail\n    ldr r0, [sp, #0x24]\n    ldr r1, [sp, #0x18]\n    bl ov45_0222B118\n    add r0, r7, #0\n    mov r1, #6\n    bl ov49_02258E60\n    bl ov42_022282A4\n    str r0, [sp, #0x34]\n    add r0, r4, #0\n    bl ov49_02259FEC\n    add r4, r0, #0\n    add r0, r7, #0\n    bl ov49_02258E34\n    add r1, sp, #0x38\n    strh r0, [r1]\n    lsr r0, r0, #0x10\n    strh r0, [r1, #2]\n    ldrh r0, [r1]\n    strh r0, [r1, #4]\n    ldrh r0, [r1, #2]\n    strh r0, [r1, #6]\n    mov r0, #1\n    strh r0, [r4, #6]\n    mov r0, #4\n    ldrsh r2, [r1, r0]\n    asr r0, r2, #3\n    lsr r0, r0, #0x1c\n    add r0, r2, r0\n    asr r0, r0, #4\n    strh r0, [r4]\n    mov r0, #6\n    ldrsh r1, [r1, r0]\n    asr r0, r1, #3\n    lsr r0, r0, #0x1c\n    add r0, r1, r0\n    asr r0, r0, #4\n    strh r0, [r4, #2]\n    ldr r0, [sp, #0x34]\n    strh r0, [r4, #4]\n    ldr r0, [r6, #8]\n    strh r0, [r4, #8]\n    add r0, r5, #0\n    bl ov49_0225EF68\n    add sp, #0x44\n    mov r0, #1\n    pop {r4, r5, r6, r7, pc}\n    add r0, r7, #0\n    mov r1, #6\n    bl ov49_02258E60\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    cmp r0, #3\n    bhi _022606EC\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _022606CC: ; jump table\n    mov r0, #6\n    str r0, [sp, #0x14]\n    b _022606F0\n    mov r0, #5\n    str r0, [sp, #0x14]\n    b _022606F0\n    mov r0, #8\n    str r0, [sp, #0x14]\n    b _022606F0\n    mov r0, #7\n    str r0, [sp, #0x14]\n    b _022606F0\n    bl GF_AssertFail\n    ldr r0, [sp, #0x28]\n    ldr r2, [sp, #0x14]\n    add r1, r7, #0\n    bl ov49_02258EEC\n    add r0, r5, #0\n    bl ov49_0225EF90\n    b _022607B8\n    add r0, r7, #0\n    bl ov49_02258F38\n    cmp r0, #1\n    bne _022607B8\n    mov r0, #8\n    str r0, [r6]\n    add r0, r5, #0\n    mov r1, #7\n    bl ov49_0225EF8C\n    b _022607B8\n    add r0, r7, #0\n    mov r1, #6\n    bl ov49_02258E60\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl ov42_022282A4\n    lsl r0, r0, #0x18\n    lsr r3, r0, #0x18\n    ldr r0, [sp, #0x28]\n    add r1, r7, #0\n    mov r2, #2\n    bl ov49_02258EAC\n    add r0, r5, #0\n    bl ov49_0225EF90\n    b _022607B8\n    add r0, r7, #0\n    mov r1, #5\n    bl ov49_02258E60\n    cmp r0, #0\n    bne _022607B8\n    mov r0, #8\n    str r0, [r6]\n    add r0, r5, #0\n    mov r1, #7\n    bl ov49_0225EF8C\n    b _022607B8\n    ldr r0, [r6]\n    sub r0, r0, #1\n    str r0, [r6]\n    cmp r0, #0\n    bgt _022607B8\n    ldr r1, [r6, #8]\n    add r0, r4, #0\n    mov r2, #0\n    bl ov49_0225A37C\n    ldrh r1, [r6, #6]\n    ldrh r2, [r6, #4]\n    add r0, r4, #0\n    bl ov49_0225A30C\n    add r1, r0, #0\n    add r0, r4, #0\n    bl ov49_0225A08C\n    add r0, r5, #0\n    bl ov49_0225EF90\n    b _022607B8\n    add r0, r4, #0\n    bl ov49_0225A0AC\n    cmp r0, #0\n    beq _022607B8\n    add r0, r5, #0\n    bl ov49_0225EF68\n    ldr r0, [sp, #0x28]\n    add r1, r7, #0\n    mov r2, #1\n    bl ov49_02258EEC\n    add r0, r4, #0\n    bl ov49_0225A0EC\n    add r0, r4, #0\n    bl ov49_0225A010\n    ldr r1, [sp, #0x10]\n    ldr r2, _022607C0 ; =ov49_02269B38\n    mov r3, #0\n    bl ov49_0225EF98\n    mov r0, #0\n    add sp, #0x44\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _022607C0: .word ov49_02269B38"
    );
    #endif
}

void ov49_022607C4(void) {
    /* Original at 0x022607C4 */
    /* Requires manual decompilation - 273 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x28\n    add r4, r1, #0\n    add r6, r0, #0\n    str r2, [sp]\n    bl ov49_0225EF84\n    add r7, r0, #0\n    add r0, r4, #0\n    bl ov49_0225A010\n    str r0, [sp, #0x14]\n    add r0, r4, #0\n    bl ov49_02259FF0\n    str r0, [sp, #0x18]\n    bl ov49_02258DAC\n    str r0, [sp, #0x10]\n    add r0, r4, #0\n    bl ov49_02259FE8\n    str r0, [sp, #0xc]\n    add r0, r6, #0\n    bl ov49_0225EF88\n    cmp r0, #7\n    bls _022607FE\n    b _02260A5A\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0226080A: ; jump table\n    add r0, r6, #0\n    mov r1, #4\n    bl ov49_0225EF40\n    add r5, r0, #0\n    ldr r0, [sp, #0x18]\n    ldr r1, [sp, #0x10]\n    mov r2, #0\n    bl ov49_02258EEC\n    add r0, r6, #0\n    bl ov49_0225EF90\n    mov r0, #0\n    strb r0, [r5]\n    add r0, r4, #0\n    bl ov49_0225A040\n    cmp r0, #0x1e\n    beq _0226084C\n    cmp r0, #0x1f\n    beq _02260858\n    cmp r0, #0x20\n    beq _02260864\n    b _02260870\n    mov r0, #0\n    strb r0, [r5, #1]\n    strb r0, [r5, #2]\n    mov r0, #2\n    strb r0, [r5, #3]\n    b _02260874\n    mov r0, #1\n    strb r0, [r5, #1]\n    strb r0, [r5, #2]\n    mov r0, #3\n    strb r0, [r5, #3]\n    b _02260874\n    mov r0, #2\n    strb r0, [r5, #1]\n    strb r0, [r5, #2]\n    mov r0, #4\n    strb r0, [r5, #3]\n    b _02260874\n    bl GF_AssertFail\n    add r0, r4, #0\n    bl ov49_02259FE8\n    mov r1, #0xc\n    bl ov45_0222A5E8\n    ldr r0, [sp, #0x14]\n    ldr r1, [sp]\n    ldr r2, _02260A60 ; =ov49_02269B88\n    add r3, r5, #0\n    bl ov49_0225EFC4\n    b _02260A5A\n    ldrb r0, [r7]\n    cmp r0, #8\n    bne _0226089E\n    add r0, r6, #0\n    mov r1, #2\n    bl ov49_0225EF8C\n    b _02260A5A\n    add r0, r6, #0\n    mov r1, #3\n    bl ov49_0225EF8C\n    b _02260A5A\n    add r0, r4, #0\n    bl ov49_0225A040\n    cmp r0, #0x1e\n    beq _022608BC\n    cmp r0, #0x1f\n    beq _022608C4\n    cmp r0, #0x20\n    beq _022608CC\n    b _022608D2\n    mov r0, #0\n    mov r5, #3\n    str r0, [sp, #8]\n    b _022608D2\n    mov r0, #1\n    mov r5, #4\n    str r0, [sp, #8]\n    b _022608D2\n    mov r0, #2\n    mov r5, #5\n    str r0, [sp, #8]\n    add r0, r4, #0\n    mov r1, #1\n    bl ov49_0225A034\n    lsl r1, r5, #0x18\n    add r0, r4, #0\n    lsr r1, r1, #0x18\n    bl ov49_0225A038\n    ldr r0, [sp, #0xc]\n    bl ov45_0222B108\n    ldr r0, [sp, #0xc]\n    ldr r1, [sp, #8]\n    bl ov45_0222B118\n    ldr r0, [sp, #0x10]\n    mov r1, #6\n    bl ov49_02258E60\n    bl ov42_022282A4\n    str r0, [sp, #0x1c]\n    add r0, r4, #0\n    bl ov49_02259FEC\n    add r5, r0, #0\n    ldr r0, [sp, #0x10]\n    bl ov49_02258E34\n    add r1, sp, #0x20\n    strh r0, [r1]\n    lsr r0, r0, #0x10\n    strh r0, [r1, #2]\n    ldrh r0, [r1]\n    strh r0, [r1, #4]\n    ldrh r0, [r1, #2]\n    strh r0, [r1, #6]\n    mov r0, #2\n    strh r0, [r5, #6]\n    mov r0, #4\n    ldrsh r0, [r1, r0]\n    asr r2, r0, #3\n    lsr r2, r2, #0x1c\n    add r2, r0, r2\n    asr r0, r2, #4\n    strh r0, [r5]\n    mov r0, #6\n    ldrsh r1, [r1, r0]\n    asr r0, r1, #3\n    lsr r0, r0, #0x1c\n    add r0, r1, r0\n    asr r0, r0, #4\n    strh r0, [r5, #2]\n    ldr r0, [sp, #0x1c]\n    strh r0, [r5, #4]\n    ldrb r0, [r7, #2]\n    strh r0, [r5, #8]\n    add r0, r4, #0\n    bl ov49_02259FE8\n    mov r1, #1\n    bl ov45_0222A4C8\n    add r0, r6, #0\n    bl ov49_0225EF68\n    add sp, #0x28\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [sp, #0x10]\n    mov r1, #6\n    bl ov49_02258E60\n    bl ov42_022282A4\n    add r3, r0, #0\n    ldr r0, [sp, #0x18]\n    ldr r1, [sp, #0x10]\n    mov r2, #2\n    bl ov49_02258EAC\n    add r0, r6, #0\n    bl ov49_0225EF90\n    b _02260A5A\n    ldr r0, [sp, #0x10]\n    mov r1, #5\n    bl ov49_02258E60\n    cmp r0, #0\n    bne _02260A5A\n    add r0, r6, #0\n    bl ov49_0225EF90\n    b _02260A5A\n    mov r0, #1\n    str r0, [sp, #4]\n    ldrb r0, [r7]\n    cmp r0, #7\n    bhi _022609E8\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _022609A8: ; jump table\n    ldrb r1, [r7, #2]\n    add r0, r4, #0\n    mov r2, #0\n    bl ov49_0225A37C\n    mov r5, #4\n    b _022609EC\n    mov r5, #5\n    b _022609EC\n    ldrb r1, [r7, #2]\n    add r0, r4, #0\n    mov r2, #0\n    bl ov49_0225A37C\n    mov r5, #6\n    b _022609EC\n    mov r5, #0x13\n    b _022609EC\n    mov r5, #0x11\n    b _022609EC\n    mov r5, #0x1d\n    b _022609EC\n    mov r5, #7\n    b _022609EC\n    mov r0, #0\n    str r0, [sp, #4]\n    ldr r0, [sp, #4]\n    cmp r0, #0\n    beq _02260A0C\n    add r0, r4, #0\n    mov r1, #0\n    add r2, r5, #0\n    bl ov49_0225A30C\n    add r1, r0, #0\n    add r0, r4, #0\n    bl ov49_0225A08C\n    add r0, r6, #0\n    bl ov49_0225EF90\n    b _02260A5A\n    add r0, r6, #0\n    mov r1, #7\n    bl ov49_0225EF8C\n    b _02260A5A\n    add r0, r4, #0\n    bl ov49_0225A0AC\n    cmp r0, #1\n    bne _02260A5A\n    add r0, r4, #0\n    bl ov49_0225A0EC\n    add r0, r6, #0\n    bl ov49_0225EF90\n    b _02260A5A\n    add r0, r6, #0\n    bl ov49_0225EF68\n    add r0, r4, #0\n    bl ov49_02259FE8\n    mov r1, #1\n    bl ov45_0222A5E8\n    ldr r0, [sp, #0x18]\n    ldr r1, [sp, #0x10]\n    mov r2, #1\n    bl ov49_02258EEC\n    add r0, r4, #0\n    bl ov49_0225A010\n    ldr r1, [sp]\n    ldr r2, _02260A64 ; =ov49_02269B38\n    mov r3, #0\n    bl ov49_0225EF98\n    mov r0, #0\n    add sp, #0x28\n    pop {r3, r4, r5, r6, r7, pc}\n    _02260A60: .word ov49_02269B88\n    _02260A64: .word ov49_02269B38"
    );
    #endif
}

void ov49_02260A68(void) {
    /* Original at 0x02260A68 */
    /* Requires manual decompilation - 198 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    add r4, r1, #0\n    add r5, r0, #0\n    str r2, [sp]\n    bl ov49_0225EF84\n    str r0, [sp, #8]\n    add r0, r4, #0\n    bl ov49_0225A010\n    add r0, r4, #0\n    bl ov49_02259FF0\n    str r0, [sp, #0xc]\n    bl ov49_02258DAC\n    add r6, r0, #0\n    add r0, r4, #0\n    bl ov49_02259FE8\n    add r7, r0, #0\n    add r0, r5, #0\n    bl ov49_0225EF88\n    cmp r0, #6\n    bls _02260AA0\n    b _02260C4A\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02260AAC: ; jump table\n    add r0, r5, #0\n    mov r1, #0xc\n    bl ov49_0225EF40\n    add r6, r0, #0\n    add r0, r4, #0\n    bl ov49_02259FE8\n    mov r1, #0xd\n    bl ov45_0222A5E8\n    add r0, r7, #0\n    bl ov45_0222A330\n    cmp r0, #1\n    bne _02260AE8\n    mov r0, #0x7a\n    strh r0, [r6]\n    add r0, r5, #0\n    mov r1, #2\n    bl ov49_0225EF8C\n    b _02260C4E\n    add r0, r7, #0\n    bl ov45_0222A3A0\n    cmp r0, #1\n    bne _02260AF8\n    mov r0, #0xa\n    strh r0, [r6, #2]\n    b _02260B14\n    add r0, r7, #0\n    bl ov45_0222A2E0\n    cmp r0, #1\n    bne _02260B10\n    mov r0, #0x62\n    strh r0, [r6]\n    add r0, r5, #0\n    mov r1, #2\n    bl ov49_0225EF8C\n    b _02260C4E\n    mov r0, #9\n    strh r0, [r6, #2]\n    add r0, r5, #0\n    mov r1, #1\n    bl ov49_0225EF8C\n    b _02260C4E\n    ldr r0, [sp, #8]\n    ldrh r0, [r0, #2]\n    cmp r0, #9\n    bne _02260B2C\n    mov r0, #9\n    str r0, [sp, #4]\n    b _02260B36\n    mov r0, #0xa\n    str r0, [sp, #4]\n    add r0, r7, #0\n    bl ov45_0222A310\n    add r0, r4, #0\n    mov r1, #1\n    bl ov49_0225A034\n    ldr r1, [sp, #4]\n    add r0, r4, #0\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    bl ov49_0225A038\n    mov r1, #0x17\n    add r2, r1, #0\n    add r0, r7, #0\n    sub r2, #0x18\n    bl ov45_0222A704\n    add r0, r6, #0\n    mov r1, #6\n    bl ov49_02258E60\n    bl ov42_022282A4\n    add r7, r0, #0\n    add r0, r4, #0\n    bl ov49_02259FEC\n    add r4, r0, #0\n    add r0, r6, #0\n    bl ov49_02258E34\n    add r1, sp, #0x10\n    strh r0, [r1]\n    lsr r0, r0, #0x10\n    strh r0, [r1, #2]\n    ldrh r0, [r1]\n    strh r0, [r1, #4]\n    ldrh r0, [r1, #2]\n    strh r0, [r1, #6]\n    mov r0, #3\n    strh r0, [r4, #6]\n    mov r0, #4\n    ldrsh r2, [r1, r0]\n    asr r0, r2, #3\n    lsr r0, r0, #0x1c\n    add r0, r2, r0\n    asr r0, r0, #4\n    strh r0, [r4]\n    mov r0, #6\n    ldrsh r1, [r1, r0]\n    asr r0, r1, #3\n    lsr r0, r0, #0x1c\n    add r0, r1, r0\n    asr r0, r0, #4\n    strh r0, [r4, #2]\n    strh r7, [r4, #4]\n    mov r0, #0\n    strh r0, [r4, #8]\n    add r0, r5, #0\n    bl ov49_0225EF68\n    add sp, #0x18\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r6, #0\n    mov r1, #6\n    bl ov49_02258E60\n    bl ov42_022282A4\n    add r3, r0, #0\n    ldr r0, [sp, #0xc]\n    add r1, r6, #0\n    mov r2, #2\n    bl ov49_02258EAC\n    add r0, r5, #0\n    bl ov49_0225EF90\n    b _02260C4E\n    add r0, r6, #0\n    mov r1, #5\n    bl ov49_02258E60\n    cmp r0, #0\n    bne _02260C4E\n    add r0, r5, #0\n    bl ov49_0225EF90\n    b _02260C4E\n    ldr r2, [sp, #8]\n    add r0, r4, #0\n    ldrh r2, [r2]\n    mov r1, #1\n    bl ov49_0225A30C\n    add r1, r0, #0\n    add r0, r4, #0\n    bl ov49_0225A08C\n    add r0, r5, #0\n    bl ov49_0225EF90\n    b _02260C4E\n    add r0, r4, #0\n    bl ov49_0225A0AC\n    cmp r0, #1\n    bne _02260C4E\n    add r0, r4, #0\n    bl ov49_0225A0EC\n    add r0, r5, #0\n    bl ov49_0225EF90\n    b _02260C4E\n    add r0, r5, #0\n    bl ov49_0225EF68\n    add r0, r4, #0\n    bl ov49_02259FE8\n    mov r1, #1\n    bl ov45_0222A5E8\n    ldr r0, [sp, #0xc]\n    add r1, r6, #0\n    mov r2, #1\n    bl ov49_02258EEC\n    add r0, r4, #0\n    bl ov49_0225A010\n    ldr r1, [sp]\n    ldr r2, _02260C54 ; =ov49_02269B38\n    mov r3, #0\n    bl ov49_0225EF98\n    b _02260C4E\n    bl GF_AssertFail\n    mov r0, #0\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    _02260C54: .word ov49_02269B38"
    );
    #endif
}

void ov49_02260C58(void) {
    /* Original at 0x02260C58 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    cmp r0, #0x1d\n    bhi _02260CB6\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02260C6A: ; jump table\n    mov r0, #2\n    pop {r3, pc}\n    mov r0, #3\n    pop {r3, pc}\n    mov r0, #0\n    pop {r3, pc}\n    mov r0, #1\n    pop {r3, pc}\n    bl GF_AssertFail\n    mov r0, #0\n    pop {r3, pc}"
    );
    #endif
}

void ov49_02260CC0(void) {
    /* Original at 0x02260CC0 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    cmp r0, #0x1d\n    bhi _02260D1E\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02260CD2: ; jump table\n    mov r0, #1\n    pop {r3, pc}\n    mov r0, #2\n    pop {r3, pc}\n    mov r0, #6\n    pop {r3, pc}\n    mov r0, #7\n    pop {r3, pc}\n    bl GF_AssertFail\n    mov r0, #0\n    pop {r3, pc}"
    );
    #endif
}

void ov49_02260D28(void) {
    /* Original at 0x02260D28 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    cmp r0, #0x1d\n    bhi _02260D86\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02260D3A: ; jump table\n    mov r0, #7\n    pop {r3, pc}\n    mov r0, #8\n    pop {r3, pc}\n    mov r0, #5\n    pop {r3, pc}\n    mov r0, #6\n    pop {r3, pc}\n    bl GF_AssertFail\n    mov r0, #0\n    pop {r3, pc}"
    );
    #endif
}

void ov49_02260D90(void) {
    /* Original at 0x02260D90 */
    /* Requires manual decompilation - 62 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl ov49_0225EF88\n    cmp r0, #0\n    beq _02260DA4\n    cmp r0, #1\n    beq _02260DFA\n    b _02260E24\n    add r0, r4, #0\n    bl ov49_02259FE8\n    add r6, r0, #0\n    bl ov45_0222A330\n    cmp r0, #1\n    bne _02260DC2\n    add r0, r4, #0\n    mov r1, #1\n    mov r2, #3\n    bl ov49_0225A30C\n    add r1, r0, #0\n    b _02260DE6\n    add r0, r6, #0\n    bl ov45_0222A374\n    cmp r0, #1\n    bne _02260DDA\n    add r0, r4, #0\n    mov r1, #1\n    mov r2, #0x4e\n    bl ov49_0225A30C\n    add r1, r0, #0\n    b _02260DE6\n    add r0, r4, #0\n    mov r1, #1\n    mov r2, #2\n    bl ov49_0225A30C\n    add r1, r0, #0\n    add r0, r4, #0\n    bl ov49_0225A08C\n    ldr r0, _02260E28 ; =0x000005DC\n    bl PlaySE\n    add r0, r5, #0\n    bl ov49_0225EF90\n    b _02260E24\n    add r0, r4, #0\n    bl ov49_0225A0AC\n    cmp r0, #0\n    beq _02260E24\n    add r0, r4, #0\n    bl ov49_0225A0EC\n    add r0, r4, #0\n    bl ov49_02259FF0\n    add r4, r0, #0\n    bl ov49_02258DAC\n    add r1, r0, #0\n    add r0, r4, #0\n    mov r2, #1\n    bl ov49_02258EEC\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    _02260E28: .word 0x000005DC"
    );
    #endif
}

void ov49_02260E2C(void) {
    /* Original at 0x02260E2C */
    /* Requires manual decompilation - 367 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x1c\n    add r5, r1, #0\n    add r6, r0, #0\n    add r0, r5, #0\n    str r2, [sp]\n    bl ov49_02259FF0\n    str r0, [sp, #8]\n    add r0, r5, #0\n    bl ov49_02259FF8\n    add r7, r0, #0\n    add r0, r5, #0\n    bl ov49_0225A008\n    str r0, [sp, #0xc]\n    add r0, r5, #0\n    bl ov49_02259FE8\n    str r0, [sp, #4]\n    add r0, r6, #0\n    bl ov49_0225EF84\n    add r4, r0, #0\n    add r0, r6, #0\n    bl ov49_0225EF88\n    cmp r0, #0xf\n    bls _02260E6A\n    b _022611C0\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02260E76: ; jump table\n    add r0, r6, #0\n    mov r1, #0x18\n    bl ov49_0225EF40\n    add r4, r0, #0\n    ldr r0, [sp, #8]\n    ldr r1, [sp]\n    bl ov49_02258D70\n    str r0, [r4, #0xc]\n    add r0, r5, #0\n    bl ov49_0225A040\n    cmp r0, #0x21\n    beq _02260EBE\n    cmp r0, #0x22\n    beq _02260EC4\n    cmp r0, #0x23\n    beq _02260ECA\n    b _02260ED0\n    mov r0, #2\n    strh r0, [r4, #6]\n    b _02260ED4\n    mov r0, #1\n    strh r0, [r4, #6]\n    b _02260ED4\n    mov r0, #0\n    strh r0, [r4, #6]\n    b _02260ED4\n    bl GF_AssertFail\n    add r0, r6, #0\n    mov r1, #1\n    bl ov49_0225EF8C\n    b _022611C0\n    ldr r0, [sp, #4]\n    bl ov45_0222A374\n    cmp r0, #0\n    bne _02260EF6\n    mov r0, #8\n    strh r0, [r4, #4]\n    add r0, r6, #0\n    mov r1, #6\n    bl ov49_0225EF8C\n    b _022611C0\n    ldr r0, [sp, #4]\n    bl ov45_0222A330\n    cmp r0, #1\n    bne _02260F0E\n    mov r0, #0xa\n    strh r0, [r4, #4]\n    add r0, r6, #0\n    mov r1, #6\n    bl ov49_0225EF8C\n    b _022611C0\n    ldrh r2, [r4, #6]\n    ldr r0, [sp, #4]\n    ldr r1, [sp]\n    bl ov45_0222ADB8\n    mov r1, #0\n    mvn r1, r1\n    str r0, [r4]\n    cmp r0, r1\n    beq _02260F44\n    add r0, r6, #0\n    mov r1, #2\n    bl ov49_0225EF8C\n    add r0, r5, #0\n    mov r1, #0\n    mov r2, #0x1f\n    bl ov49_0225A30C\n    add r1, r0, #0\n    add r0, r5, #0\n    bl ov49_0225A09C\n    add r0, r5, #0\n    bl ov49_0225A0BC\n    b _022611C0\n    mov r0, #9\n    strh r0, [r4, #4]\n    add r0, r6, #0\n    mov r1, #6\n    bl ov49_0225EF8C\n    b _022611C0\n    ldr r0, _022611C8 ; =gSystem\n    mov r1, #2\n    ldr r0, [r0, #0x48]\n    tst r1, r0\n    bne _02260F62\n    mov r1, #0x80\n    tst r0, r1\n    beq _02260F82\n    ldr r0, [sp, #4]\n    ldr r1, [sp]\n    bl ov45_0222ADC8\n    add r0, r5, #0\n    bl ov49_0225A0CC\n    mov r0, #6\n    strb r0, [r4, #0xa]\n    mov r0, #0xf\n    strh r0, [r4, #4]\n    add r0, r6, #0\n    mov r1, #0xc\n    bl ov49_0225EF8C\n    b _022611C0\n    add r0, r4, #0\n    add r1, r7, #0\n    bl ov49_022611F4\n    cmp r0, #1\n    beq _02260F90\n    b _022611C0\n    add r0, r5, #0\n    bl ov49_0225A0CC\n    ldr r0, [sp, #4]\n    bl ov45_0222AE44\n    mov r0, #0\n    strh r0, [r4, #8]\n    add r0, r5, #0\n    bl ov49_02259FE8\n    mov r1, #0xa\n    bl ov45_0222A5E8\n    add r0, r5, #0\n    bl ov49_0225A044\n    ldr r0, [sp, #0xc]\n    bl ov49_0225CC44\n    ldr r0, [r4, #0xc]\n    mov r1, #0\n    bl ov49_02259130\n    ldr r0, [r4, #0xc]\n    mov r1, #1\n    bl ov49_0225916C\n    ldr r0, _022611CC ; =0x000005C1\n    bl PlaySE\n    add r0, r5, #0\n    bl ov49_0225A510\n    mov r0, #3\n    strb r0, [r4, #0xa]\n    add r0, r6, #0\n    mov r1, #0xc\n    bl ov49_0225EF8C\n    b _022611C0\n    ldr r2, [sp, #0xc]\n    add r0, r4, #0\n    add r1, r7, #0\n    bl ov49_02261234\n    cmp r0, #1\n    bne _022610A4\n    ldr r0, [r4, #0xc]\n    mov r1, #0\n    bl ov49_0225916C\n    ldr r0, [r4, #0xc]\n    mov r1, #2\n    bl ov49_02259160\n    ldr r0, [r4, #0xc]\n    mov r1, #8\n    bl ov49_022591B4\n    add r0, r6, #0\n    mov r1, #4\n    bl ov49_0225EF8C\n    mov r0, #0\n    strh r0, [r4, #8]\n    b _022611C0\n    add r0, r4, #0\n    add r1, r7, #0\n    add r2, r5, #0\n    bl ov49_02261434\n    ldr r1, [sp, #0xc]\n    add r0, r4, #0\n    bl ov49_022611D4\n    add r0, r4, #0\n    add r1, r7, #0\n    bl ov49_022613AC\n    cmp r0, #1\n    bne _022610A4\n    add r0, r6, #0\n    mov r1, #5\n    bl ov49_0225EF8C\n    add r0, r5, #0\n    mov r1, #0\n    bl ov49_0225A53C\n    b _022611C0\n    add r0, r4, #0\n    add r1, r7, #0\n    add r2, r5, #0\n    bl ov49_02261434\n    ldr r1, [sp, #0xc]\n    add r0, r4, #0\n    bl ov49_022611D4\n    ldr r0, [r4, #0xc]\n    add r1, sp, #0x10\n    bl ov49_02259154\n    add r0, r4, #0\n    add r1, r7, #0\n    add r2, r5, #0\n    bl ov49_02261460\n    mov r0, #6\n    ldr r1, [sp, #0x10]\n    lsl r0, r0, #0x10\n    cmp r1, r0\n    bge _022610A4\n    mov r0, #0\n    strb r0, [r4, #0xb]\n    add r0, r6, #0\n    mov r1, #0xd\n    bl ov49_0225EF8C\n    b _022611C0\n    ldr r0, [sp, #8]\n    ldr r1, [r4, #0xc]\n    mov r2, #2\n    mov r3, #1\n    bl ov49_02258EAC\n    add r0, r6, #0\n    mov r1, #7\n    bl ov49_0225EF8C\n    b _022611C0\n    ldr r0, [r4, #0xc]\n    mov r1, #5\n    bl ov49_02258E60\n    cmp r0, #0\n    beq _022610A6\n    b _022611C0\n    ldrh r1, [r4, #4]\n    add r0, r6, #0\n    bl ov49_0225EF8C\n    b _022611C0\n    add r0, r5, #0\n    mov r1, #0\n    mov r2, #0x1e\n    bl ov49_0225A30C\n    add r1, r0, #0\n    add r0, r5, #0\n    bl ov49_0225A08C\n    mov r0, #0xf\n    strh r0, [r4, #4]\n    add r0, r6, #0\n    mov r1, #0xb\n    bl ov49_0225EF8C\n    b _022611C0\n    add r0, r5, #0\n    mov r1, #0\n    mov r2, #0x20\n    bl ov49_0225A30C\n    add r1, r0, #0\n    add r0, r5, #0\n    bl ov49_0225A08C\n    mov r0, #0xf\n    strh r0, [r4, #4]\n    add r0, r6, #0\n    mov r1, #0xb\n    bl ov49_0225EF8C\n    b _022611C0\n    add r0, r5, #0\n    mov r1, #0\n    mov r2, #0x21\n    bl ov49_0225A30C\n    add r1, r0, #0\n    add r0, r5, #0\n    bl ov49_0225A08C\n    mov r0, #0xf\n    strh r0, [r4, #4]\n    add r0, r6, #0\n    mov r1, #0xb\n    bl ov49_0225EF8C\n    b _022611C0\n    add r0, r5, #0\n    bl ov49_0225A0AC\n    cmp r0, #1\n    bne _022611C0\n    ldrh r1, [r4, #4]\n    add r0, r6, #0\n    bl ov49_0225EF8C\n    b _022611C0\n    add r0, r5, #0\n    bl ov49_0225A0EC\n    ldrb r1, [r4, #0xa]\n    add r0, r6, #0\n    bl ov49_0225EF8C\n    b _022611C0\n    add r0, r4, #0\n    add r1, r7, #0\n    add r2, r5, #0\n    bl ov49_02261434\n    add r0, r4, #0\n    add r1, r7, #0\n    add r2, r5, #0\n    bl ov49_02261460\n    ldrb r0, [r4, #0xb]\n    add r0, r0, #1\n    strb r0, [r4, #0xb]\n    ldrb r0, [r4, #0xb]\n    cmp r0, #0x78\n    bls _022611C0\n    add r0, r5, #0\n    mov r1, #1\n    bl ov49_0225A034\n    add r0, r5, #0\n    mov r1, #0\n    bl ov49_0225A038\n    add r0, r5, #0\n    bl ov49_0225A0EC\n    add r0, r5, #0\n    bl ov49_02259FE8\n    mov r1, #0xb\n    bl ov45_0222A5E8\n    add r0, r6, #0\n    mov r1, #0xe\n    bl ov49_0225EF8C\n    b _022611C0\n    add r0, r4, #0\n    add r1, r7, #0\n    add r2, r5, #0\n    bl ov49_02261434\n    add r0, r4, #0\n    add r1, r7, #0\n    add r2, r5, #0\n    bl ov49_02261460\n    b _022611C0\n    add r0, r5, #0\n    bl ov49_0225A010\n    add r7, r0, #0\n    add r0, r5, #0\n    bl ov49_0225A0EC\n    ldr r0, [sp, #8]\n    ldr r1, [r4, #0xc]\n    mov r2, #1\n    bl ov49_02258EEC\n    add r0, r6, #0\n    bl ov49_0225EF68\n    ldr r1, [sp]\n    ldr r2, _022611D0 ; =ov49_02269B38\n    add r0, r7, #0\n    mov r3, #0\n    bl ov49_0225EF98\n    mov r0, #0\n    add sp, #0x1c\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _022611C8: .word gSystem\n    _022611CC: .word 0x000005C1\n    _022611D0: .word ov49_02269B38"
    );
    #endif
}

void ov49_022611D4(void) {
    /* Original at 0x022611D4 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    ldr r0, [r0, #0xc]\n    add r4, r1, #0\n    add r1, sp, #0\n    bl ov49_02259154\n    ldr r1, [sp]\n    ldr r2, [sp, #4]\n    ldr r3, [sp, #8]\n    add r0, r4, #0\n    bl ov49_0225CC20\n    add sp, #0xc\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov49_022611F4(void) {
    /* Original at 0x022611F4 */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x20\n    add r5, r0, #0\n    ldr r0, [r5]\n    add r4, r1, #0\n    add r1, sp, #4\n    add r2, sp, #0\n    bl ov45_0222AE08\n    ldr r1, [sp, #4]\n    ldr r2, [sp]\n    add r0, r4, #0\n    add r3, sp, #8\n    bl ov49_0225E420\n    ldr r0, [r5, #0xc]\n    add r1, sp, #0x14\n    bl ov49_02259154\n    mov r0, #1\n    ldr r1, [sp, #0x14]\n    lsl r0, r0, #0x10\n    add r1, r1, r0\n    ldr r0, [sp, #8]\n    cmp r1, r0\n    blt _0226122E\n    add sp, #0x20\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    add sp, #0x20\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov49_02261234(void) {
    /* Original at 0x02261234 */
    /* Requires manual decompilation - 164 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x34\n    add r5, r0, #0\n    mov r0, #8\n    add r6, r1, #0\n    ldrsh r1, [r5, r0]\n    add r7, r2, #0\n    add r1, r1, #1\n    strh r1, [r5, #8]\n    ldrsh r0, [r5, r0]\n    cmp r0, #0x18\n    bge _02261250\n    mov r4, #0\n    b _02261256\n    mov r0, #0x18\n    strh r0, [r5, #8]\n    mov r4, #1\n    ldr r0, [r5]\n    add r1, sp, #0xc\n    add r2, sp, #8\n    bl ov45_0222AE08\n    ldr r1, [sp, #0xc]\n    ldr r2, [sp, #8]\n    add r0, r6, #0\n    add r3, sp, #0x1c\n    bl ov49_0225E420\n    ldr r0, [r5, #0xc]\n    bl ov49_02258E34\n    add r1, sp, #0\n    strh r0, [r1]\n    lsr r0, r0, #0x10\n    strh r0, [r1, #2]\n    ldrh r2, [r1]\n    add r0, sp, #4\n    strh r2, [r1, #4]\n    ldrh r2, [r1, #2]\n    strh r2, [r1, #6]\n    add r1, sp, #0x28\n    bl ov49_02258800\n    mov r0, #0\n    str r0, [sp, #0x10]\n    ldr r1, [sp, #0x20]\n    ldr r0, [sp, #0x2c]\n    sub r6, r1, r0\n    mov r0, #8\n    ldrsh r0, [r5, r0]\n    cmp r0, #0\n    ble _022612AE\n    lsl r0, r0, #0xc\n    bl _fflt\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    b _022612BC\n    lsl r0, r0, #0xc\n    bl _fflt\n    mov r1, #0x3f\n    lsl r1, r1, #0x18\n    bl _fsub\n    bl _ffix\n    asr r1, r0, #0x1f\n    asr r3, r6, #0x1f\n    add r2, r6, #0\n    bl _ll_mul\n    mov r2, #2\n    mov r3, #0\n    lsl r2, r2, #0xa\n    add r0, r0, r2\n    adc r1, r3\n    lsl r1, r1, #0x14\n    lsr r0, r0, #0xc\n    orr r0, r1\n    mov r1, #6\n    lsl r1, r1, #0xe\n    bl FX_Div\n    str r0, [sp, #0x14]\n    mov r0, #8\n    ldrsh r2, [r5, r0]\n    cmp r2, #4\n    blt _02261342\n    ldr r1, [sp, #0x24]\n    ldr r0, [sp, #0x30]\n    sub r6, r1, r0\n    sub r0, r2, #4\n    cmp r0, #0\n    ble _0226130A\n    lsl r0, r0, #0xc\n    bl _fflt\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    b _02261318\n    lsl r0, r0, #0xc\n    bl _fflt\n    mov r1, #0x3f\n    lsl r1, r1, #0x18\n    bl _fsub\n    bl _ffix\n    asr r1, r0, #0x1f\n    asr r3, r6, #0x1f\n    add r2, r6, #0\n    bl _ll_mul\n    mov r2, #2\n    mov r3, #0\n    lsl r2, r2, #0xa\n    add r0, r0, r2\n    adc r1, r3\n    lsl r1, r1, #0x14\n    lsr r0, r0, #0xc\n    orr r0, r1\n    mov r1, #5\n    lsl r1, r1, #0xe\n    bl FX_Div\n    str r0, [sp, #0x18]\n    b _02261346\n    mov r0, #0\n    str r0, [sp, #0x18]\n    add r0, sp, #0x10\n    add r1, sp, #0x28\n    add r2, r0, #0\n    bl VEC_Add\n    ldr r1, [sp, #0x10]\n    ldr r2, [sp, #0x14]\n    ldr r3, [sp, #0x18]\n    add r0, r7, #0\n    bl ov49_0225CC20\n    mov r0, #8\n    ldrsh r1, [r5, r0]\n    ldr r0, _022613A4 ; =0x00007FFF\n    mul r0, r1\n    mov r1, #0x18\n    bl _s32_div_f\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    asr r0, r0, #4\n    lsl r2, r0, #2\n    ldr r0, _022613A8 ; =FX_SinCosTable_\n    ldr r1, [sp, #0x14]\n    ldrsh r3, [r0, r2]\n    asr r0, r3, #0x1f\n    lsr r2, r3, #0x10\n    lsl r0, r0, #0x10\n    orr r0, r2\n    mov r2, #2\n    lsl r6, r3, #0x10\n    mov r3, #0\n    lsl r2, r2, #0xa\n    add r2, r6, r2\n    adc r0, r3\n    lsl r0, r0, #0x14\n    lsr r2, r2, #0xc\n    orr r2, r0\n    add r0, r1, r2\n    str r0, [sp, #0x14]\n    ldr r0, [r5, #0xc]\n    add r1, sp, #0x10\n    bl ov49_02259148\n    add r0, r4, #0\n    add sp, #0x34\n    pop {r4, r5, r6, r7, pc}\n    _022613A4: .word 0x00007FFF\n    _022613A8: .word FX_SinCosTable_"
    );
    #endif
}

void ov49_022613AC(void) {
    /* Original at 0x022613AC */
    /* Requires manual decompilation - 63 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    mov r0, #8\n    ldrsh r1, [r5, r0]\n    add r1, r1, #1\n    strh r1, [r5, #8]\n    ldrsh r0, [r5, r0]\n    cmp r0, #0x10\n    bge _022613C4\n    mov r6, #0\n    b _022613CA\n    mov r0, #0x10\n    strh r0, [r5, #8]\n    mov r6, #1\n    mov r0, #8\n    ldrsh r0, [r5, r0]\n    mov r3, #0\n    lsr r2, r0, #0x1f\n    lsl r1, r0, #0x1d\n    sub r1, r1, r2\n    mov r0, #0x1d\n    ror r1, r0\n    add r1, r2, r1\n    ldr r0, _0226142C ; =0x00007FFF\n    add r2, r1, #0\n    mul r2, r0\n    asr r0, r2, #2\n    lsr r0, r0, #0x1d\n    add r0, r2, r0\n    lsl r0, r0, #0xd\n    lsr r0, r0, #0x10\n    asr r0, r0, #4\n    lsl r1, r0, #2\n    ldr r0, _02261430 ; =FX_SinCosTable_\n    mov r2, #3\n    ldrsh r0, [r0, r1]\n    lsl r2, r2, #0xc\n    asr r1, r0, #0x1f\n    bl _ll_mul\n    mov r2, #2\n    mov r3, #0\n    lsl r2, r2, #0xa\n    add r2, r0, r2\n    adc r1, r3\n    lsl r0, r1, #0x14\n    lsr r4, r2, #0xc\n    orr r4, r0\n    ldr r0, [r5, #0xc]\n    add r1, sp, #0\n    bl ov49_02259154\n    ldr r0, [sp, #4]\n    add r1, sp, #0\n    add r0, r0, r4\n    str r0, [sp, #4]\n    ldr r0, [r5, #0xc]\n    bl ov49_02259148\n    add r0, r6, #0\n    add sp, #0xc\n    pop {r3, r4, r5, r6, pc}\n    nop\n    _0226142C: .word 0x00007FFF\n    _02261430: .word FX_SinCosTable_"
    );
    #endif
}

void ov49_02261434(void) {
    /* Original at 0x02261434 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0x14\n    add r5, r0, #0\n    ldr r0, [r5]\n    add r4, r1, #0\n    add r1, sp, #0\n    add r2, sp, #4\n    bl ov45_0222AE08\n    ldr r1, [sp]\n    ldr r2, [sp, #4]\n    add r0, r4, #0\n    add r3, sp, #8\n    bl ov49_0225E420\n    ldr r0, [r5, #0xc]\n    add r1, sp, #8\n    bl ov49_02259148\n    add sp, #0x14\n    pop {r4, r5, pc}"
    );
    #endif
}

void ov49_02261460(void) {
    /* Original at 0x02261460 */
    /* Requires manual decompilation - 45 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0x14\n    add r5, r0, #0\n    ldr r0, [r5]\n    add r4, r2, #0\n    add r1, sp, #4\n    add r2, sp, #0\n    bl ov45_0222AE08\n    ldr r1, [sp, #4]\n    add r0, r4, #0\n    bl ov49_0225A520\n    cmp r0, #1\n    bne _02261494\n    add r0, r5, #0\n    add r0, #0x10\n    bl ov49_0225F438\n    cmp r0, #0\n    bne _022614A8\n    add r0, r5, #0\n    add r0, #0x10\n    bl ov49_0225F374\n    b _022614A8\n    add r0, r5, #0\n    add r0, #0x10\n    bl ov49_0225F438\n    cmp r0, #1\n    bne _022614A8\n    add r0, r5, #0\n    add r0, #0x10\n    bl ov49_0225F430\n    add r0, r5, #0\n    add r0, #0x10\n    bl ov49_0225F394\n    add r4, r0, #0\n    ldr r0, [r5, #0xc]\n    add r1, sp, #8\n    bl ov49_02259154\n    ldr r0, [sp, #0xc]\n    add r1, sp, #8\n    add r0, r0, r4\n    str r0, [sp, #0xc]\n    ldr r0, [r5, #0xc]\n    bl ov49_02259148\n    add sp, #0x14\n    pop {r4, r5, pc}"
    );
    #endif
}

void ov49_022614CC(void) {
    /* Original at 0x022614CC */
    /* Requires manual decompilation - 50 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r1, #0\n    str r0, [sp]\n    add r0, r5, #0\n    mov r1, #0x12\n    bl ov49_0225A10C\n    mov r4, #1\n    mov r6, #0\n    add r7, r4, #0\n    add r0, r5, #0\n    add r1, r6, #0\n    add r2, r4, #0\n    bl ov49_0225A40C\n    add r0, r5, #0\n    add r1, r7, #0\n    mov r2, #6\n    bl ov49_0225A30C\n    add r1, r0, #0\n    add r0, r5, #0\n    add r2, r4, #0\n    bl ov49_0225A144\n    add r4, r4, #1\n    cmp r4, #0x12\n    blt _022614E0\n    add r0, r5, #0\n    mov r1, #1\n    mov r2, #7\n    bl ov49_0225A30C\n    add r1, r0, #0\n    add r0, r5, #0\n    mov r2, #0\n    bl ov49_0225A144\n    ldr r2, [sp]\n    ldr r3, _0226153C ; =ov49_02269C00\n    add r2, #8\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    add r0, r5, #0\n    bl ov49_0225A154\n    ldr r1, [sp]\n    str r0, [r1, #8]\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0226153C: .word ov49_02269C00"
    );
    #endif
}

void ov49_02261540(void) {
    ov49_0225A134();
}

void ov49_0226154C(void) {
    /* Original at 0x0226154C */
    /* Requires manual decompilation - 186 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    add r6, r1, #0\n    add r5, r0, #0\n    add r0, r6, #0\n    add r4, r2, #0\n    bl ov49_02259FE8\n    str r0, [sp, #8]\n    add r0, r6, #0\n    bl ov49_02259FF0\n    add r1, r4, #0\n    str r0, [sp, #0xc]\n    bl ov49_02258D70\n    add r7, r0, #0\n    add r0, r5, #0\n    bl ov49_0225EF84\n    str r0, [sp, #0x10]\n    add r0, r6, #0\n    bl ov49_0225A010\n    str r0, [sp, #0x14]\n    add r0, r5, #0\n    bl ov49_0225EF88\n    cmp r0, #5\n    bhi _02261606\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02261594: ; jump table\n    add r0, r5, #0\n    mov r1, #8\n    bl ov49_0225EF40\n    add r0, r5, #0\n    mov r1, #1\n    bl ov49_0225EF8C\n    ldr r0, [sp, #8]\n    add r1, r4, #0\n    bl ov45_0222A230\n    add r6, r0, #0\n    ldr r0, [sp, #8]\n    add r1, r4, #0\n    bl ov45_0222A550\n    cmp r6, #1\n    beq _022615CA\n    cmp r0, #1\n    bne _02261606\n    add r0, r5, #0\n    mov r1, #2\n    bl ov49_0225EF8C\n    b _02261710\n    ldr r0, [sp, #8]\n    add r1, r4, #0\n    bl ov45_0222A578\n    add r6, r0, #0\n    bne _022615EA\n    add r0, r5, #0\n    mov r1, #1\n    bl ov49_0225EF8C\n    b _02261710\n    bl ov45_0222AADC\n    cmp r0, #1\n    bne _02261606\n    add r0, r6, #0\n    bl ov45_0222AA5C\n    add r2, r0, #0\n    ldr r0, [sp, #0xc]\n    add r1, r4, #0\n    bl ov49_02258CB8\n    cmp r0, #0\n    bne _02261608\n    b _02261710\n    mov r1, #0\n    bl ov49_022591C0\n    add r0, r5, #0\n    mov r1, #3\n    bl ov49_0225EF8C\n    b _02261710\n    ldr r0, [sp, #8]\n    add r1, r4, #0\n    bl ov45_0222A578\n    cmp r0, #0\n    bne _02261638\n    cmp r7, #0\n    beq _0226162E\n    add r0, r7, #0\n    bl ov49_02258D54\n    add r0, r5, #0\n    mov r1, #1\n    bl ov49_0225EF8C\n    b _02261710\n    bl ov45_0222A920\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x10]\n    ldr r1, [sp, #8]\n    add r2, r6, #0\n    add r3, r7, #0\n    bl ov49_02261DBC\n    cmp r0, #0\n    beq _02261696\n    add r0, r5, #0\n    mov r1, #5\n    bl ov49_0225EF8C\n    ldr r0, [sp, #0xc]\n    add r1, r7, #0\n    mov r2, #0\n    bl ov49_02258EEC\n    lsl r1, r4, #0x18\n    add r0, r6, #0\n    lsr r1, r1, #0x18\n    mov r2, #1\n    bl ov49_0225A06C\n    lsl r1, r4, #0x18\n    add r0, r6, #0\n    lsr r1, r1, #0x18\n    mov r2, #1\n    bl ov49_0225A04C\n    add r0, r7, #0\n    mov r1, #0\n    bl ov49_02259130\n    ldr r0, [sp, #0x14]\n    ldr r2, _02261718 ; =ov49_02269B58\n    ldr r3, [sp, #0x10]\n    add r1, r4, #0\n    bl ov49_0225EFC4\n    b _02261710\n    ldr r0, [sp, #0xc]\n    add r1, r7, #0\n    mov r2, #4\n    bl ov49_02258EEC\n    add r0, r5, #0\n    mov r1, #4\n    bl ov49_0225EF8C\n    lsl r1, r4, #0x18\n    add r0, r6, #0\n    lsr r1, r1, #0x18\n    mov r2, #1\n    bl ov49_0225A04C\n    lsl r1, r4, #0x18\n    add r0, r6, #0\n    lsr r1, r1, #0x18\n    mov r2, #1\n    bl ov49_0225A06C\n    add r0, r7, #0\n    mov r1, #1\n    bl ov49_022591C0\n    b _02261710\n    add r0, r7, #0\n    bl ov49_02258F38\n    cmp r0, #1\n    bne _02261710\n    add r0, r5, #0\n    bl ov49_0225EF90\n    b _02261710\n    add r0, r5, #0\n    bl ov49_0225EF68\n    ldr r0, [sp, #0xc]\n    add r1, r7, #0\n    mov r2, #2\n    bl ov49_02258EEC\n    ldr r0, [sp, #0x14]\n    ldr r2, _0226171C ; =ov49_02269B40\n    add r1, r4, #0\n    mov r3, #0\n    bl ov49_0225EF98\n    lsl r1, r4, #0x18\n    add r0, r6, #0\n    lsr r1, r1, #0x18\n    mov r2, #0\n    bl ov49_0225A04C\n    lsl r1, r4, #0x18\n    add r0, r6, #0\n    lsr r1, r1, #0x18\n    mov r2, #0\n    bl ov49_0225A06C\n    mov r0, #0\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02261718: .word ov49_02269B58\n    _0226171C: .word ov49_02269B40"
    );
    #endif
}

void ov49_02261720(void) {
    /* Original at 0x02261720 */
    /* Requires manual decompilation - 168 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    add r5, r1, #0\n    str r0, [sp, #8]\n    add r0, r5, #0\n    add r4, r2, #0\n    bl ov49_02259FE8\n    add r6, r0, #0\n    add r0, r5, #0\n    bl ov49_02259FF0\n    str r0, [sp, #0x10]\n    add r0, r5, #0\n    bl ov49_0225A010\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #0x10]\n    add r1, r4, #0\n    bl ov49_02258D70\n    add r7, r0, #0\n    ldr r0, [sp, #0x10]\n    bl ov49_02258DAC\n    ldr r0, [sp, #8]\n    bl ov49_0225EF84\n    str r0, [sp, #0x14]\n    ldr r0, [sp, #8]\n    bl ov49_0225EF88\n    cmp r0, #0\n    beq _0226176A\n    cmp r0, #1\n    beq _0226177C\n    b _022618AA\n    ldr r0, [sp, #8]\n    mov r1, #8\n    bl ov49_0225EF40\n    str r0, [sp, #0x14]\n    ldr r0, [sp, #8]\n    mov r1, #1\n    bl ov49_0225EF8C\n    add r0, r6, #0\n    add r1, r4, #0\n    bl ov45_0222A25C\n    cmp r0, #0\n    beq _022617BE\n    ldr r0, [sp, #8]\n    bl ov49_0225EF68\n    ldr r0, [sp, #0x10]\n    add r1, r7, #0\n    mov r2, #0\n    bl ov49_02258EEC\n    lsl r1, r4, #0x18\n    add r0, r5, #0\n    lsr r1, r1, #0x18\n    mov r2, #1\n    bl ov49_0225A06C\n    lsl r1, r4, #0x18\n    add r0, r5, #0\n    lsr r1, r1, #0x18\n    mov r2, #1\n    bl ov49_0225A04C\n    ldr r0, [sp, #0xc]\n    ldr r2, _022618B0 ; =ov49_02269B48\n    add r1, r4, #0\n    mov r3, #0\n    bl ov49_0225EF98\n    b _022618AA\n    add r0, r6, #0\n    add r1, r4, #0\n    bl ov45_0222A2A0\n    add r0, r6, #0\n    bl ov45_0222A374\n    cmp r0, #1\n    bne _0226181E\n    add r0, r6, #0\n    add r1, r4, #0\n    bl ov45_0222ADA8\n    mov r1, #0\n    mvn r1, r1\n    cmp r0, r1\n    beq _0226181E\n    ldr r0, [sp, #0x10]\n    add r1, r7, #0\n    mov r2, #0\n    bl ov49_02258EEC\n    lsl r1, r4, #0x18\n    add r0, r5, #0\n    lsr r1, r1, #0x18\n    mov r2, #1\n    bl ov49_0225A06C\n    lsl r1, r4, #0x18\n    add r0, r5, #0\n    lsr r1, r1, #0x18\n    mov r2, #1\n    bl ov49_0225A04C\n    add r0, r7, #0\n    mov r1, #0\n    bl ov49_02259130\n    ldr r0, [sp, #8]\n    bl ov49_0225EF68\n    ldr r0, [sp, #0xc]\n    ldr r2, _022618B4 ; =ov49_02269B50\n    ldr r3, [sp, #0x14]\n    add r1, r4, #0\n    bl ov49_0225EF98\n    b _022618AA\n    add r0, r6, #0\n    add r1, r4, #0\n    bl ov45_0222A578\n    bl ov45_0222A920\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x14]\n    add r1, r6, #0\n    add r2, r5, #0\n    add r3, r7, #0\n    bl ov49_02261DBC\n    cmp r0, #0\n    beq _0226187C\n    ldr r0, [sp, #0x10]\n    add r1, r7, #0\n    mov r2, #0\n    bl ov49_02258EEC\n    lsl r1, r4, #0x18\n    add r0, r5, #0\n    lsr r1, r1, #0x18\n    mov r2, #1\n    bl ov49_0225A06C\n    lsl r1, r4, #0x18\n    add r0, r5, #0\n    lsr r1, r1, #0x18\n    mov r2, #1\n    bl ov49_0225A04C\n    add r0, r7, #0\n    mov r1, #0\n    bl ov49_02259130\n    ldr r0, [sp, #0xc]\n    ldr r2, _022618B8 ; =ov49_02269B58\n    ldr r3, [sp, #0x14]\n    add r1, r4, #0\n    bl ov49_0225EFC4\n    b _022618AA\n    add r0, r6, #0\n    add r1, r4, #0\n    bl ov45_0222AD58\n    cmp r0, #1\n    bne _022618AA\n    ldr r0, [sp, #0x10]\n    add r1, r7, #0\n    mov r2, #0\n    bl ov49_02258EEC\n    lsl r1, r4, #0x18\n    add r0, r5, #0\n    lsr r1, r1, #0x18\n    mov r2, #1\n    bl ov49_0225A04C\n    ldr r0, [sp, #0xc]\n    ldr r2, _022618BC ; =ov49_02269B80\n    add r1, r4, #0\n    mov r3, #0\n    bl ov49_0225EFC4\n    mov r0, #0\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    _022618B0: .word ov49_02269B48\n    _022618B4: .word ov49_02269B50\n    _022618B8: .word ov49_02269B58\n    _022618BC: .word ov49_02269B80"
    );
    #endif
}

void ov49_022618C0(void) {
    /* Original at 0x022618C0 */
    /* Requires manual decompilation - 45 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r1, #0\n    add r5, r0, #0\n    str r2, [sp]\n    add r0, r6, #0\n    bl ov49_02259FF0\n    ldr r1, [sp]\n    add r7, r0, #0\n    bl ov49_02258D70\n    add r4, r0, #0\n    add r0, r5, #0\n    bl ov49_0225EF88\n    cmp r0, #0\n    beq _022618EC\n    cmp r0, #1\n    beq _022618FE\n    cmp r0, #2\n    beq _02261910\n    b _02261926\n    add r0, r7, #0\n    add r1, r4, #0\n    mov r2, #3\n    bl ov49_02258EEC\n    add r0, r5, #0\n    bl ov49_0225EF90\n    b _02261926\n    add r0, r4, #0\n    bl ov49_02258F38\n    cmp r0, #0\n    beq _02261926\n    add r0, r5, #0\n    bl ov49_0225EF90\n    b _02261926\n    add r0, r4, #0\n    bl ov49_02258D54\n    add r0, r6, #0\n    bl ov49_0225A010\n    ldr r1, [sp]\n    ldr r2, _0226192C ; =ov49_02269B78\n    mov r3, #0\n    bl ov49_0225EF98\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0226192C: .word ov49_02269B78"
    );
    #endif
}

void ov49_02261930(void) {
    /* Original at 0x02261930 */
    /* Requires manual decompilation - 238 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x40\n    add r6, r1, #0\n    add r5, r0, #0\n    add r0, r6, #0\n    add r7, r2, #0\n    bl ov49_02259FE8\n    str r0, [sp]\n    add r0, r6, #0\n    bl ov49_02259FF0\n    str r0, [sp, #8]\n    add r0, r6, #0\n    bl ov49_02259FF8\n    str r0, [sp, #4]\n    add r0, r5, #0\n    bl ov49_0225EF84\n    add r4, r0, #0\n    add r0, r5, #0\n    bl ov49_0225EF88\n    cmp r0, #4\n    bhi _022619CE\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02261970: ; jump table\n    add r0, r5, #0\n    mov r1, #0x20\n    bl ov49_0225EF40\n    add r4, r0, #0\n    ldr r0, [sp, #8]\n    add r1, r7, #0\n    bl ov49_02258D70\n    str r0, [r4]\n    ldr r0, [sp]\n    add r1, r7, #0\n    bl ov45_0222ADA8\n    mov r1, #0\n    mvn r1, r1\n    str r0, [r4, #4]\n    cmp r0, r1\n    bne _022619A4\n    bl GF_AssertFail\n    add r2, r4, #0\n    ldr r0, [r4, #4]\n    add r1, r4, #4\n    add r2, #8\n    bl ov45_0222AE08\n    ldr r0, [sp, #8]\n    ldr r1, [r4]\n    mov r2, #3\n    bl ov49_02258EEC\n    add r0, r5, #0\n    mov r1, #1\n    bl ov49_0225EF8C\n    b _02261B64\n    ldr r0, [r4]\n    bl ov49_02258F38\n    cmp r0, #0\n    bne _022619D0\n    b _02261B64\n    ldr r0, [sp, #4]\n    ldr r1, [r4, #4]\n    ldr r2, [r4, #8]\n    add r3, sp, #0x34\n    bl ov49_0225E420\n    mov r0, #1\n    ldr r1, [sp, #0x34]\n    lsl r0, r0, #0x10\n    sub r0, r1, r0\n    str r0, [r4, #0x10]\n    ldr r0, [r4]\n    add r1, sp, #0x34\n    bl ov49_02259154\n    ldr r0, [sp, #0x38]\n    mov r3, sp\n    str r0, [r4, #0xc]\n    mov r1, #0\n    str r1, [r4, #0x14]\n    add r0, sp, #0xc\n    strh r1, [r0]\n    strh r1, [r0, #2]\n    add r1, sp, #0xc\n    ldrh r2, [r1]\n    ldr r0, [r4]\n    sub r3, r3, #4\n    strh r2, [r3]\n    ldrh r1, [r1, #2]\n    strh r1, [r3, #2]\n    ldr r1, [r3]\n    bl ov49_02258DB4\n    ldr r0, _02261B6C ; =0x0000064E\n    bl PlaySE\n    ldr r0, [r4]\n    mov r1, #1\n    bl ov49_02259184\n    add r0, r5, #0\n    mov r1, #2\n    bl ov49_0225EF8C\n    b _02261B64\n    ldr r0, [r4, #0x14]\n    mov r6, #0\n    add r0, r0, #1\n    str r0, [r4, #0x14]\n    cmp r0, #0x18\n    blt _02261A3C\n    mov r0, #0x18\n    str r0, [r4, #0x14]\n    mov r6, #1\n    ldr r0, [sp, #4]\n    ldr r1, [r4, #4]\n    ldr r2, [r4, #8]\n    add r3, sp, #0x28\n    bl ov49_0225E420\n    ldr r0, [sp, #0x30]\n    ldr r1, [sp, #0x2c]\n    str r0, [sp, #0x24]\n    ldr r0, [r4, #0x10]\n    str r0, [sp, #0x1c]\n    ldr r0, [r4, #0xc]\n    sub r7, r1, r0\n    ldr r0, [r4, #0x14]\n    cmp r0, #0\n    ble _02261A6E\n    lsl r0, r0, #0xc\n    bl _fflt\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    b _02261A7C\n    lsl r0, r0, #0xc\n    bl _fflt\n    mov r1, #0x3f\n    lsl r1, r1, #0x18\n    bl _fsub\n    bl _ffix\n    asr r1, r0, #0x1f\n    asr r3, r7, #0x1f\n    add r2, r7, #0\n    bl _ll_mul\n    mov r2, #2\n    mov r3, #0\n    lsl r2, r2, #0xa\n    add r0, r0, r2\n    adc r1, r3\n    lsl r1, r1, #0x14\n    lsr r0, r0, #0xc\n    orr r0, r1\n    mov r1, #6\n    lsl r1, r1, #0xe\n    bl FX_Div\n    str r0, [sp, #0x20]\n    ldr r1, [r4, #0xc]\n    add r0, r0, r1\n    str r0, [sp, #0x20]\n    ldr r0, [r4]\n    add r1, sp, #0x1c\n    bl ov49_02259148\n    cmp r6, #1\n    bne _02261B64\n    ldr r0, [r4]\n    mov r1, #0\n    bl ov49_02259184\n    ldr r0, [r4]\n    mov r1, #8\n    bl ov49_022591B4\n    ldr r0, [r4]\n    mov r1, #2\n    bl ov49_02259160\n    add r0, r5, #0\n    mov r1, #3\n    bl ov49_0225EF8C\n    b _02261B64\n    ldr r1, [r4, #4]\n    add r0, r6, #0\n    bl ov49_0225A520\n    cmp r0, #1\n    bne _02261AFA\n    add r0, r4, #0\n    add r0, #0x18\n    bl ov49_0225F438\n    cmp r0, #0\n    bne _02261B0E\n    add r0, r4, #0\n    add r0, #0x18\n    bl ov49_0225F374\n    b _02261B0E\n    add r0, r4, #0\n    add r0, #0x18\n    bl ov49_0225F438\n    cmp r0, #1\n    bne _02261B0E\n    add r0, r4, #0\n    add r0, #0x18\n    bl ov49_0225F430\n    add r0, r4, #0\n    add r0, #0x18\n    bl ov49_0225F394\n    add r6, r0, #0\n    ldr r0, [sp, #4]\n    ldr r1, [r4, #4]\n    ldr r2, [r4, #8]\n    add r3, sp, #0x10\n    bl ov49_0225E420\n    ldr r0, [sp, #0x14]\n    add r1, sp, #0x10\n    add r0, r0, r6\n    str r0, [sp, #0x14]\n    ldr r0, [r4]\n    bl ov49_02259148\n    ldr r0, [sp]\n    ldr r1, [r4, #4]\n    bl ov45_0222AD80\n    cmp r0, #2\n    bne _02261B64\n    add r0, r5, #0\n    mov r1, #4\n    bl ov49_0225EF8C\n    b _02261B64\n    ldr r0, [r4]\n    bl ov49_02258D54\n    add r0, r5, #0\n    bl ov49_0225EF68\n    add r0, r6, #0\n    bl ov49_0225A010\n    ldr r2, _02261B70 ; =ov49_02269B78\n    add r1, r7, #0\n    mov r3, #0\n    bl ov49_0225EF98\n    mov r0, #0\n    add sp, #0x40\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02261B6C: .word 0x0000064E\n    _02261B70: .word ov49_02269B78"
    );
    #endif
}

void ov49_02261B74(void) {
    /* Original at 0x02261B74 */
    /* Requires manual decompilation - 234 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x20\n    str r1, [sp]\n    add r7, r0, #0\n    add r4, r2, #0\n    bl ov49_0225EF3C\n    add r6, r0, #0\n    ldr r0, [sp]\n    bl ov49_02259FE8\n    str r0, [sp, #8]\n    ldr r0, [sp]\n    bl ov49_02259FF0\n    str r0, [sp, #0xc]\n    add r1, r4, #0\n    bl ov49_02258D70\n    add r5, r0, #0\n    ldr r0, [sp, #0xc]\n    bl ov49_02258DAC\n    str r0, [sp, #0x10]\n    add r0, r7, #0\n    bl ov49_0225EF88\n    cmp r0, #0xa\n    bhi _02261C58\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02261BBA: ; jump table\n    ldrb r0, [r6, #4]\n    cmp r0, #0\n    bne _02261BDE\n    add r0, r7, #0\n    bl ov49_0225EF90\n    b _02261DB6\n    add r0, r7, #0\n    mov r1, #3\n    bl ov49_0225EF8C\n    b _02261DB6\n    ldr r0, [sp, #0xc]\n    add r1, r5, #0\n    mov r2, #3\n    bl ov49_02258EEC\n    add r0, r7, #0\n    bl ov49_0225EF90\n    b _02261DB6\n    add r0, r5, #0\n    bl ov49_02258F38\n    cmp r0, #1\n    bne _02261C58\n    add r0, r7, #0\n    bl ov49_0225EF90\n    b _02261DB6\n    add r0, r5, #0\n    bl ov49_02258E34\n    add r2, sp, #0x14\n    strh r0, [r2]\n    lsr r0, r0, #0x10\n    strh r0, [r2, #2]\n    ldrh r0, [r2]\n    add r1, sp, #0x1c\n    strh r0, [r2, #8]\n    ldrh r0, [r2, #2]\n    strh r0, [r2, #0xa]\n    add r0, r5, #0\n    bl ov49_0225913C\n    add r0, r5, #0\n    bl ov49_022591CC\n    cmp r0, #0\n    bne _02261C3C\n    add r0, r5, #0\n    mov r1, #1\n    bl ov49_022591C0\n    ldr r0, [sp, #0xc]\n    add r1, r5, #0\n    mov r2, #4\n    bl ov49_02258EEC\n    add r0, r7, #0\n    bl ov49_0225EF90\n    b _02261DB6\n    add r0, r5, #0\n    bl ov49_02258F38\n    cmp r0, #1\n    beq _02261C5A\n    b _02261DB6\n    add r0, r7, #0\n    bl ov49_0225EF90\n    ldr r0, [sp, #0xc]\n    add r1, r5, #0\n    mov r2, #0\n    bl ov49_02258EEC\n    lsl r1, r4, #0x18\n    ldr r0, [sp]\n    lsr r1, r1, #0x18\n    mov r2, #0\n    bl ov49_0225A04C\n    lsl r1, r4, #0x18\n    ldr r0, [sp]\n    lsr r1, r1, #0x18\n    mov r2, #0\n    bl ov49_0225A06C\n    b _02261DB6\n    mov r0, #0\n    str r0, [sp, #4]\n    ldrb r0, [r6, #3]\n    cmp r0, #1\n    bne _02261CC4\n    ldr r0, [sp, #8]\n    bl ov45_0222B0B0\n    cmp r0, #0\n    bne _02261CC4\n    ldr r0, [sp, #8]\n    bl ov45_0222A5C0\n    bl ov45_0222A920\n    cmp r0, #9\n    bne _02261CC4\n    ldr r0, [sp, #8]\n    bl ov45_0222B0A4\n    add r0, r5, #0\n    mov r1, #6\n    bl ov49_02258E60\n    bl ov42_022282A4\n    add r3, r0, #0\n    ldr r0, [sp, #0xc]\n    ldr r1, [sp, #0x10]\n    mov r2, #0\n    bl ov49_02258EAC\n    ldr r0, [sp, #8]\n    add r1, r4, #0\n    bl ov45_0222A578\n    add r5, r0, #0\n    bne _02261CD6\n    mov r0, #1\n    str r0, [sp, #4]\n    b _02261D08\n    ldrb r0, [r6, #3]\n    cmp r0, #1\n    bne _02261CEC\n    ldr r0, [sp, #8]\n    bl ov45_0222AFF8\n    cmp r0, #0\n    bne _02261CEC\n    mov r0, #1\n    str r0, [sp, #4]\n    b _02261D08\n    ldr r0, [sp, #8]\n    add r1, r4, #0\n    bl ov45_0222A2A0\n    cmp r0, #0\n    beq _02261D08\n    add r0, r5, #0\n    bl ov45_0222A920\n    ldrb r1, [r6, #2]\n    cmp r0, r1\n    beq _02261D08\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r0, [sp, #4]\n    cmp r0, #1\n    bne _02261DB6\n    add r0, r7, #0\n    bl ov49_0225EF90\n    lsl r1, r4, #0x18\n    ldr r0, [sp]\n    lsr r1, r1, #0x18\n    mov r2, #1\n    bl ov49_0225A04C\n    lsl r1, r4, #0x18\n    ldr r0, [sp]\n    lsr r1, r1, #0x18\n    mov r2, #1\n    bl ov49_0225A06C\n    b _02261DB6\n    ldr r0, [sp, #0xc]\n    add r1, r5, #0\n    mov r2, #3\n    bl ov49_02258EEC\n    add r0, r7, #0\n    bl ov49_0225EF90\n    b _02261DB6\n    ldr r0, [sp, #0xc]\n    bl ov49_02258DAC\n    ldrb r1, [r6]\n    ldrb r2, [r6, #1]\n    bl ov49_02258FDC\n    cmp r0, #0\n    bne _02261DB6\n    ldrb r0, [r6]\n    mov r3, sp\n    add r1, sp, #0x14\n    lsl r0, r0, #4\n    strh r0, [r1, #4]\n    ldrb r0, [r6, #1]\n    sub r3, r3, #4\n    lsl r0, r0, #4\n    strh r0, [r1, #6]\n    ldrh r2, [r1, #4]\n    add r0, r5, #0\n    strh r2, [r3]\n    ldrh r1, [r1, #6]\n    strh r1, [r3, #2]\n    ldr r1, [r3]\n    bl ov49_02258DB4\n    add r0, r5, #0\n    add r1, sp, #0x18\n    bl ov49_0225913C\n    ldr r0, [sp, #0xc]\n    add r1, r5, #0\n    mov r2, #4\n    bl ov49_02258EEC\n    add r0, r7, #0\n    bl ov49_0225EF90\n    b _02261DB6\n    ldr r0, [sp, #0xc]\n    add r1, r5, #0\n    mov r2, #2\n    bl ov49_02258EEC\n    lsl r1, r4, #0x18\n    ldr r0, [sp]\n    lsr r1, r1, #0x18\n    mov r2, #0\n    bl ov49_0225A04C\n    lsl r1, r4, #0x18\n    ldr r0, [sp]\n    lsr r1, r1, #0x18\n    mov r2, #0\n    bl ov49_0225A06C\n    add sp, #0x20\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0\n    add sp, #0x20\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov49_02261DBC(void) {
    /* Original at 0x02261DBC */
    /* Requires manual decompilation - 218 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x24\n    add r6, r2, #0\n    add r4, r0, #0\n    add r0, r6, #0\n    str r1, [sp, #4]\n    str r3, [sp, #8]\n    mov r7, #0\n    bl ov49_02259FF0\n    add r5, r0, #0\n    bl ov49_02258DAC\n    str r0, [sp, #0xc]\n    add r0, r6, #0\n    bl ov49_0225A000\n    add r6, r0, #0\n    ldr r0, [sp, #8]\n    mov r1, #4\n    bl ov49_02258E60\n    str r0, [sp, #0x10]\n    mov r0, #1\n    str r0, [sp, #0x20]\n    add r0, sp, #0x28\n    ldrb r0, [r0, #0x10]\n    cmp r0, #0xe\n    bls _02261DF8\n    b _02261F42\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02261E04: ; jump table\n    add r0, sp, #0x1c\n    str r0, [sp]\n    ldr r2, _02261FA4 ; =ov49_02269B90\n    add r0, r6, #0\n    add r1, r5, #0\n    mov r3, #4\n    bl ov49_02261FC0\n    cmp r0, #0\n    beq _02261E38\n    b _02261F48\n    add sp, #0x24\n    add r0, r7, #0\n    pop {r4, r5, r6, r7, pc}\n    add r0, sp, #0x1c\n    str r0, [sp]\n    ldr r2, _02261FA8 ; =ov49_02269BC0\n    add r0, r6, #0\n    add r1, r5, #0\n    mov r3, #4\n    bl ov49_02261FC0\n    cmp r0, #0\n    bne _02261F48\n    add sp, #0x24\n    add r0, r7, #0\n    pop {r4, r5, r6, r7, pc}\n    add r0, sp, #0x1c\n    str r0, [sp]\n    ldr r2, _02261FAC ; =ov49_02269BA0\n    add r0, r6, #0\n    add r1, r5, #0\n    mov r3, #4\n    bl ov49_02261FC0\n    cmp r0, #0\n    bne _02261F48\n    add sp, #0x24\n    add r0, r7, #0\n    pop {r4, r5, r6, r7, pc}\n    add r0, r7, #0\n    str r0, [sp, #0x20]\n    add r0, sp, #0x1c\n    str r0, [sp]\n    ldr r2, _02261FB0 ; =ov49_02269C20\n    add r0, r6, #0\n    add r1, r5, #0\n    mov r3, #8\n    bl ov49_02261FC0\n    cmp r0, #0\n    bne _02261F48\n    add sp, #0x24\n    add r0, r7, #0\n    pop {r4, r5, r6, r7, pc}\n    add r0, r7, #0\n    str r0, [sp, #0x20]\n    add r0, sp, #0x1c\n    str r0, [sp]\n    ldr r2, _02261FB4 ; =ov49_02269C40\n    add r0, r6, #0\n    add r1, r5, #0\n    mov r3, #8\n    bl ov49_02261FC0\n    cmp r0, #0\n    bne _02261F48\n    add sp, #0x24\n    add r0, r7, #0\n    pop {r4, r5, r6, r7, pc}\n    mov r0, #3\n    str r0, [sp, #0x20]\n    add r0, sp, #0x1c\n    str r0, [sp]\n    ldr r2, _02261FB8 ; =ov49_02269BB0\n    add r0, r6, #0\n    add r1, r5, #0\n    mov r3, #4\n    bl ov49_02261FC0\n    cmp r0, #0\n    bne _02261F48\n    add sp, #0x24\n    add r0, r7, #0\n    pop {r4, r5, r6, r7, pc}\n    add r0, r7, #0\n    str r0, [sp, #0x20]\n    add r0, sp, #0x1c\n    str r0, [sp]\n    ldr r2, _02261FBC ; =ov49_02269BD0\n    add r0, r6, #0\n    add r1, r5, #0\n    mov r3, #4\n    bl ov49_02261FC0\n    cmp r0, #0\n    bne _02261F48\n    add sp, #0x24\n    add r0, r7, #0\n    pop {r4, r5, r6, r7, pc}\n    add sp, #0x24\n    add r0, r7, #0\n    pop {r4, r5, r6, r7, pc}\n    ldr r0, [sp, #4]\n    bl ov45_0222AFF8\n    cmp r0, #0\n    bne _02261F00\n    add sp, #0x24\n    add r0, r7, #0\n    pop {r4, r5, r6, r7, pc}\n    ldr r0, [sp, #4]\n    bl ov45_0222B00C\n    cmp r0, #0\n    bne _02261F10\n    add sp, #0x24\n    add r0, r7, #0\n    pop {r4, r5, r6, r7, pc}\n    ldr r0, [sp, #4]\n    bl ov45_0222B020\n    ldr r1, [sp, #0x10]\n    cmp r1, r0\n    beq _02261F22\n    add sp, #0x24\n    add r0, r7, #0\n    pop {r4, r5, r6, r7, pc}\n    ldr r1, [sp, #0xc]\n    add r0, r5, #0\n    add r2, sp, #0x20\n    add r3, sp, #0x1c\n    bl ov49_0225904C\n    cmp r0, #1\n    beq _02261F36\n    bl GF_AssertFail\n    ldr r0, [sp, #0x20]\n    bl ov42_022282A4\n    str r0, [sp, #0x20]\n    mov r7, #1\n    b _02261F48\n    add sp, #0x24\n    mov r0, #0\n    pop {r4, r5, r6, r7, pc}\n    ldr r0, [sp, #8]\n    bl ov49_02258E34\n    add r1, sp, #0x14\n    strh r0, [r1]\n    lsr r0, r0, #0x10\n    strh r0, [r1, #2]\n    ldrh r0, [r1]\n    mov r3, sp\n    sub r3, r3, #4\n    strh r0, [r1, #4]\n    ldrh r0, [r1, #2]\n    strh r0, [r1, #6]\n    ldrh r2, [r1, #8]\n    ldr r0, [sp, #8]\n    strh r2, [r3]\n    ldrh r1, [r1, #0xa]\n    strh r1, [r3, #2]\n    ldr r1, [r3]\n    ldr r2, [sp, #0x20]\n    bl ov49_02258E04\n    add r1, sp, #0x14\n    mov r0, #4\n    ldrsh r2, [r1, r0]\n    asr r0, r2, #3\n    lsr r0, r0, #0x1c\n    add r0, r2, r0\n    asr r0, r0, #4\n    strb r0, [r4]\n    mov r0, #6\n    ldrsh r1, [r1, r0]\n    asr r0, r1, #3\n    lsr r0, r0, #0x1c\n    add r0, r1, r0\n    asr r0, r0, #4\n    strb r0, [r4, #1]\n    add r0, sp, #0x28\n    ldrb r0, [r0, #0x10]\n    strb r0, [r4, #2]\n    ldr r0, [sp, #0x3c]\n    strb r7, [r4, #3]\n    strb r0, [r4, #4]\n    mov r0, #1\n    add sp, #0x24\n    pop {r4, r5, r6, r7, pc}\n    _02261FA4: .word ov49_02269B90\n    _02261FA8: .word ov49_02269BC0\n    _02261FAC: .word ov49_02269BA0\n    _02261FB0: .word ov49_02269C20\n    _02261FB4: .word ov49_02269C40\n    _02261FB8: .word ov49_02269BB0\n    _02261FBC: .word ov49_02269BD0"
    );
    #endif
}

void ov49_02261FC0(void) {
    /* Original at 0x02261FC0 */
    /* Requires manual decompilation - 49 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r7, r0, #0\n    ldr r0, [sp, #0x20]\n    add r5, r2, #0\n    str r1, [sp, #4]\n    add r6, r3, #0\n    str r0, [sp, #0x20]\n    ldr r4, _02262024 ; =0x00000000\n    beq _0226201C\n    mov r0, #0\n    str r0, [sp]\n    add r2, sp, #8\n    ldr r1, [r5]\n    add r0, r7, #0\n    add r2, #2\n    add r3, sp, #8\n    bl ov49_022589D8\n    cmp r0, #1\n    bne _02262014\n    add r1, sp, #8\n    add r2, sp, #8\n    ldrh r1, [r1, #2]\n    ldrh r2, [r2]\n    ldr r0, [sp, #4]\n    bl ov49_02258F7C\n    cmp r0, #0\n    bne _02262014\n    add r1, sp, #8\n    ldrh r0, [r1, #2]\n    lsl r2, r0, #4\n    ldr r0, [sp, #0x20]\n    strh r2, [r0]\n    ldrh r0, [r1]\n    lsl r1, r0, #4\n    ldr r0, [sp, #0x20]\n    add sp, #0xc\n    strh r1, [r0, #2]\n    mov r0, #1\n    pop {r4, r5, r6, r7, pc}\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, r6\n    blo _02261FD4\n    mov r0, #0\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _02262024: .word 0x00000000"
    );
    #endif
}

void ov49_02262028(void) {
    /* Original at 0x02262028 */
    /* Requires manual decompilation - 1062 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x38\n    str r0, [sp, #0x10]\n    add r5, r1, #0\n    str r2, [sp, #0x14]\n    bl ov49_0225EF3C\n    add r6, r0, #0\n    ldr r0, [sp, #0x10]\n    bl ov49_0225EF84\n    add r4, r0, #0\n    add r0, r5, #0\n    bl ov49_02259FE8\n    str r0, [sp, #0x30]\n    ldr r0, [sp, #0x10]\n    bl ov49_0225EF88\n    cmp r0, #0x1b\n    bhi _02262140\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0226205E: ; jump table\n    ldrb r0, [r6, #1]\n    bl ov45_0222F314\n    ldrh r1, [r4, #8]\n    cmp r1, r0\n    bls _022620B0\n    mov r0, #4\n    strb r0, [r6]\n    ldr r0, [sp, #0x10]\n    mov r1, #0x17\n    bl ov49_0225EF8C\n    b _02262140\n    bl sub_02037454\n    ldrh r1, [r4, #8]\n    cmp r1, r0\n    ble _022620C8\n    mov r0, #4\n    strb r0, [r6]\n    ldr r0, [sp, #0x10]\n    mov r1, #0x17\n    bl ov49_0225EF8C\n    b _02262140\n    bl sub_0203988C\n    cmp r0, #0\n    bne _022620DE\n    mov r0, #4\n    strb r0, [r6]\n    ldr r0, [sp, #0x10]\n    mov r1, #0x17\n    bl ov49_0225EF8C\n    b _02262140\n    bl ov45_0222F464\n    cmp r0, #1\n    bne _022620FE\n    ldrb r0, [r6, #1]\n    bl ov45_0222F314\n    cmp r0, #1\n    bhi _022620FE\n    mov r0, #4\n    strb r0, [r6]\n    ldr r0, [sp, #0x10]\n    mov r1, #0x17\n    bl ov49_0225EF8C\n    b _02262140\n    ldr r0, [r4, #0x10]\n    sub r0, r0, #1\n    str r0, [r4, #0x10]\n    bpl _02262114\n    mov r0, #4\n    strb r0, [r6]\n    ldr r0, [sp, #0x10]\n    mov r1, #0x17\n    bl ov49_0225EF8C\n    b _02262140\n    bl sub_020390C4\n    cmp r0, #5\n    bhi _02262140\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02262128: ; jump table\n    mov r0, #4\n    strb r0, [r6]\n    ldr r0, [sp, #0x10]\n    mov r1, #0x17\n    bl ov49_0225EF8C\n    ldr r0, [sp, #0x10]\n    bl ov49_0225EF88\n    cmp r0, #0x1c\n    bls _0226214E\n    bl _02262AB8\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0226215A: ; jump table\n    ldr r0, [sp, #0x10]\n    mov r1, #0x44\n    bl ov49_0225EF40\n    ldr r0, [sp, #0x10]\n    bl ov49_0225EF90\n    bl _02262AB8\n    ldr r0, [sp, #0x30]\n    bl ov45_0222A414\n    cmp r0, #0\n    beq _022621C0\n    mov r0, #7\n    strb r0, [r6]\n    ldr r0, [sp, #0x10]\n    mov r1, #0x1c\n    bl ov49_0225EF8C\n    bl _02262AB8\n    ldr r0, [sp, #0x30]\n    bl ov45_0222A394\n    cmp r0, #0\n    beq _022621DA\n    mov r0, #2\n    strb r0, [r6]\n    ldr r0, [sp, #0x10]\n    mov r1, #0x1c\n    bl ov49_0225EF8C\n    bl _02262AB8\n    ldr r0, _022624F4 ; =0x000005DD\n    bl PlaySE\n    ldr r0, [sp, #0x10]\n    bl ov49_0225EF90\n    bl _02262AB8\n    ldrb r1, [r6, #2]\n    add r0, r5, #0\n    mov r2, #0\n    bl ov49_0225A37C\n    mov r0, #3\n    str r0, [sp]\n    ldr r1, [sp, #0x10]\n    add r0, r4, #0\n    add r2, r5, #0\n    mov r3, #0\n    bl ov49_02262BF8\n    bl _02262AB8\n    add r0, r4, #0\n    add r1, r5, #0\n    mov r2, #3\n    mov r3, #1\n    bl ov49_02262C38\n    add r4, #0x18\n    mov r2, #0\n    add r0, r5, #0\n    add r1, r4, #0\n    add r3, r2, #0\n    bl ov49_0225A174\n    ldr r0, [sp, #0x10]\n    mov r1, #4\n    bl ov49_0225EF8C\n    bl _02262AB8\n    add r0, r5, #0\n    mov r7, #0\n    bl ov49_0225A1D4\n    cmp r0, #2\n    bhi _02262248\n    cmp r0, #0\n    beq _0226226A\n    cmp r0, #1\n    beq _0226225E\n    cmp r0, #2\n    beq _0226224E\n    b _02262274\n    sub r1, r7, #2\n    cmp r0, r1\n    bne _02262274\n    mov r0, #5\n    strb r0, [r6]\n    ldr r0, [sp, #0x10]\n    mov r1, #0x1c\n    bl ov49_0225EF8C\n    mov r7, #1\n    b _02262274\n    ldr r0, [sp, #0x10]\n    mov r1, #5\n    bl ov49_0225EF8C\n    mov r7, #1\n    b _02262274\n    ldr r0, [sp, #0x10]\n    mov r1, #6\n    bl ov49_0225EF8C\n    mov r7, #1\n    cmp r7, #1\n    beq _0226227C\n    bl _02262AB8\n    mov r1, #0\n    add r0, r5, #0\n    add r2, r1, #0\n    bl ov49_0225A1E4\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov49_02262CA8\n    bl _02262AB8\n    ldrb r1, [r6, #2]\n    add r0, r5, #0\n    mov r2, #0\n    bl ov49_0225A37C\n    mov r0, #2\n    str r0, [sp]\n    ldrb r3, [r6, #2]\n    ldr r1, [sp, #0x10]\n    add r0, r4, #0\n    add r2, r5, #0\n    add r3, #0x22\n    bl ov49_02262BF8\n    bl _02262AB8\n    ldr r0, [sp, #0x30]\n    bl ov45_0222A394\n    cmp r0, #0\n    beq _022622CA\n    mov r0, #2\n    strb r0, [r6]\n    ldr r0, [sp, #0x10]\n    mov r1, #0x1c\n    bl ov49_0225EF8C\n    b _02262AB8\n    ldrb r0, [r6, #1]\n    bl ov45_0222F274\n    cmp r0, #1\n    bne _0226230E\n    ldrb r0, [r6, #1]\n    bl ov45_0222F2D4\n    cmp r0, #0\n    beq _022622E8\n    ldrb r0, [r6, #1]\n    bl ov45_0222F294\n    cmp r0, #0\n    bne _022622F6\n    mov r0, #1\n    strb r0, [r6]\n    ldr r0, [sp, #0x10]\n    mov r1, #0x1c\n    bl ov49_0225EF8C\n    b _02262AB8\n    ldrb r0, [r6, #1]\n    bl ov45_0222F3E8\n    cmp r0, #0\n    bne _0226230E\n    mov r0, #7\n    strb r0, [r6]\n    ldr r0, [sp, #0x10]\n    mov r1, #0x1c\n    bl ov49_0225EF8C\n    b _02262AB8\n    ldrb r0, [r6, #1]\n    bl ov45_0222F3E8\n    strh r0, [r4]\n    mov r0, #0xe1\n    lsl r0, r0, #2\n    str r0, [r4, #0x10]\n    mov r1, #0\n    ldrsh r2, [r4, r1]\n    ldr r0, _022624F8 ; =0x0000014A\n    cmp r2, r0\n    ble _02262330\n    add r0, r5, #0\n    mov r2, #0xa\n    bl ov49_0225A30C\n    b _0226233C\n    mov r0, #1\n    str r0, [r4, #0x14]\n    add r0, r5, #0\n    mov r2, #0xb\n    bl ov49_0225A30C\n    add r1, r0, #0\n    add r0, r5, #0\n    bl ov49_0225A09C\n    add r0, r5, #0\n    bl ov49_0225A0BC\n    ldrb r0, [r6, #1]\n    bl sub_0203981C\n    bl ov45_0222F464\n    cmp r0, #1\n    bne _02262372\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    str r0, [sp, #0xc]\n    ldrb r1, [r6, #2]\n    ldr r0, [sp, #0x30]\n    ldr r3, [sp, #0x14]\n    mov r2, #1\n    bl ov45_0222AC14\n    mov r0, #1\n    strb r0, [r4, #7]\n    mov r0, #0\n    ldrsh r0, [r4, r0]\n    add r1, r5, #0\n    mov r3, #1\n    str r0, [sp]\n    ldrb r2, [r6, #2]\n    add r0, r4, #0\n    add r0, #0x3c\n    bl ov49_02262D70\n    add r4, #0x3c\n    add r0, r4, #0\n    add r1, r5, #0\n    mov r2, #1\n    bl ov49_02262E04\n    ldr r0, [sp, #0x10]\n    mov r1, #7\n    bl ov49_0225EF8C\n    b _02262AB8\n    bl sub_0203988C\n    str r0, [sp, #0x2c]\n    ldrb r0, [r6, #1]\n    bl ov45_0222F314\n    add r7, r0, #0\n    ldrb r0, [r6, #1]\n    bl ov45_0222F3E8\n    strh r0, [r4]\n    mov r1, #0\n    add r0, r4, #0\n    ldrsh r1, [r4, r1]\n    add r0, #0x3c\n    bl ov49_02262DD4\n    mov r0, #0\n    ldrsh r1, [r4, r0]\n    ldr r0, _022624F8 ; =0x0000014A\n    cmp r1, r0\n    bgt _022623F0\n    ldr r0, [r4, #0x14]\n    cmp r0, #0\n    bne _022623F0\n    add r0, r5, #0\n    bl ov49_0225A0CC\n    mov r0, #1\n    str r0, [r4, #0x14]\n    add r0, r5, #0\n    mov r1, #0\n    mov r2, #0xb\n    bl ov49_0225A30C\n    add r1, r0, #0\n    add r0, r5, #0\n    bl ov49_0225A09C\n    add r0, r5, #0\n    bl ov49_0225A0BC\n    add r0, r4, #0\n    add r0, #0x3c\n    add r1, r5, #0\n    mov r2, #0\n    bl ov49_02262DF8\n    ldr r0, [sp, #0x2c]\n    cmp r0, #0\n    bne _02262410\n    mov r0, #4\n    strb r0, [r6]\n    ldr r0, [sp, #0x10]\n    mov r1, #0x17\n    bl ov49_0225EF8C\n    b _02262AB8\n    cmp r0, #2\n    bne _02262462\n    mov r0, #8\n    strb r0, [r6]\n    cmp r7, #4\n    bne _02262420\n    mov r6, #0x10\n    b _02262422\n    mov r6, #0x12\n    add r0, r5, #0\n    bl ov49_0225A0CC\n    add r0, r5, #0\n    mov r1, #0\n    add r2, r6, #0\n    bl ov49_0225A30C\n    add r1, r0, #0\n    add r0, r5, #0\n    bl ov49_0225A09C\n    add r0, r5, #0\n    bl ov49_0225A0BC\n    ldr r0, [sp, #0x10]\n    mov r1, #9\n    bl ov49_0225EF8C\n    add r0, r4, #0\n    add r0, #0x3c\n    mov r1, #0\n    strh r7, [r4, #8]\n    bl ov49_02262DD4\n    add r4, #0x3c\n    add r0, r4, #0\n    add r1, r5, #0\n    mov r2, #0\n    bl ov49_02262DF8\n    b _02262AB8\n    ldr r0, [r4, #0x14]\n    cmp r0, #0\n    bne _022624A8\n    ldr r0, _022624FC ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #2\n    tst r0, r1\n    beq _022624A8\n    ldr r0, _02262500 ; =0x000005DC\n    bl PlaySE\n    bl ov45_0222F464\n    cmp r0, #0\n    bne _02262494\n    mov r0, #6\n    strb r0, [r6]\n    add r0, r5, #0\n    bl ov49_0225A0CC\n    ldr r0, [sp, #0x10]\n    mov r1, #0x17\n    bl ov49_0225EF8C\n    b _02262AB8\n    mov r0, #6\n    strb r0, [r6]\n    add r0, r5, #0\n    bl ov49_0225A0CC\n    ldr r0, [sp, #0x10]\n    mov r1, #0x10\n    bl ov49_0225EF8C\n    b _02262AB8\n    bl ov45_0222F464\n    cmp r0, #1\n    bne _02262504\n    ldrb r0, [r4, #7]\n    cmp r0, r7\n    beq _022624D2\n    strb r7, [r4, #7]\n    cmp r7, #4\n    beq _022624D2\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    str r0, [sp, #0xc]\n    ldrb r1, [r6, #2]\n    ldr r0, [sp, #0x30]\n    ldr r3, [sp, #0x14]\n    add r2, r7, #0\n    bl ov45_0222AC14\n    mov r0, #0\n    ldrsh r0, [r4, r0]\n    cmp r0, #0\n    bne _02262504\n    ldrb r0, [r6, #1]\n    bl ov45_0222F314\n    cmp r0, #1\n    bhi _02262504\n    mov r0, #3\n    strb r0, [r6]\n    ldr r0, [sp, #0x10]\n    mov r1, #0x17\n    bl ov49_0225EF8C\n    b _02262AB8\n    nop\n    _022624F4: .word 0x000005DD\n    _022624F8: .word 0x0000014A\n    _022624FC: .word gSystem\n    _02262500: .word 0x000005DC\n    ldrb r0, [r6, #1]\n    bl ov45_0222F274\n    cmp r0, #1\n    bne _02262526\n    ldrb r0, [r6, #1]\n    bl ov45_0222F294\n    cmp r0, #0\n    bne _02262526\n    mov r0, #0\n    strb r0, [r6]\n    ldr r0, [sp, #0x10]\n    mov r1, #0x17\n    bl ov49_0225EF8C\n    b _02262AB8\n    mov r0, #0\n    ldrsh r0, [r4, r0]\n    cmp r0, #0\n    bne _022625CC\n    ldr r0, [sp, #0x10]\n    mov r1, #8\n    bl ov49_0225EF8C\n    add r0, r5, #0\n    bl ov49_0225A0CC\n    add r0, r5, #0\n    mov r1, #0\n    mov r2, #0x12\n    bl ov49_0225A30C\n    add r1, r0, #0\n    add r0, r5, #0\n    bl ov49_0225A09C\n    add r0, r5, #0\n    bl ov49_0225A0BC\n    b _02262AB8\n    add r0, r4, #0\n    add r0, #0x3c\n    mov r1, #0\n    bl ov49_02262DD4\n    add r0, r4, #0\n    add r0, #0x3c\n    add r1, r5, #0\n    mov r2, #0\n    bl ov49_02262DF8\n    bl sub_0203988C\n    add r5, r0, #0\n    ldrb r0, [r6, #1]\n    bl ov45_0222F314\n    add r7, r0, #0\n    bl sub_020390C4\n    cmp r0, #3\n    beq _02262586\n    cmp r0, #4\n    bne _02262592\n    mov r0, #4\n    strb r0, [r6]\n    ldr r0, [sp, #0x10]\n    mov r1, #0x17\n    bl ov49_0225EF8C\n    cmp r5, #0\n    bne _022625A4\n    mov r0, #4\n    strb r0, [r6]\n    ldr r0, [sp, #0x10]\n    mov r1, #0x17\n    bl ov49_0225EF8C\n    b _02262AB8\n    cmp r5, #2\n    bne _022625B8\n    mov r0, #8\n    strb r0, [r6]\n    ldr r0, [sp, #0x10]\n    mov r1, #9\n    bl ov49_0225EF8C\n    strh r7, [r4, #8]\n    b _02262AB8\n    ldrb r0, [r6, #1]\n    bl ov45_0222F274\n    cmp r0, #1\n    bne _022625CC\n    ldrb r0, [r6, #1]\n    bl ov45_0222F294\n    cmp r0, #0\n    beq _022625CE\n    b _02262AB8\n    mov r0, #0\n    strb r0, [r6]\n    ldr r0, [sp, #0x10]\n    mov r1, #0x17\n    bl ov49_0225EF8C\n    b _02262AB8\n    add r0, r4, #0\n    add r0, #0x3c\n    mov r1, #0\n    bl ov49_02262DD4\n    add r0, r4, #0\n    add r0, #0x3c\n    add r1, r5, #0\n    mov r2, #0\n    bl ov49_02262DF8\n    add r0, r5, #0\n    bl ov49_02259FE8\n    ldrb r1, [r6, #3]\n    bl ov45_0222A5E8\n    bl sub_02039B38\n    add r0, r5, #0\n    bl ov49_02259FE8\n    bl ov45_0222A2C8\n    mov r1, #0\n    bl sub_02034354\n    ldr r0, [sp, #0x30]\n    bl ov45_0222AB1C\n    bl sub_02034B00\n    mov r0, #0\n    bl sub_020378E4\n    ldr r1, [sp, #0x10]\n    add r0, r4, #0\n    mov r2, #0xa\n    mov r3, #0x11\n    bl ov49_02262C20\n    b _02262AB8\n    add r0, r4, #0\n    add r0, #0x3c\n    mov r1, #0\n    bl ov49_02262DD4\n    add r4, #0x3c\n    add r0, r4, #0\n    add r1, r5, #0\n    mov r2, #0\n    bl ov49_02262DF8\n    bl sub_02034434\n    bl sub_0203769C\n    bl sub_0203476C\n    ldr r0, [sp, #0x10]\n    mov r1, #0xb\n    bl ov49_0225EF8C\n    b _02262AB8\n    add r0, r4, #0\n    add r0, #0x3c\n    mov r1, #0\n    bl ov49_02262DD4\n    add r0, r4, #0\n    add r0, #0x3c\n    add r1, r5, #0\n    mov r2, #0\n    bl ov49_02262DF8\n    bl sub_02034780\n    cmp r0, #0xff\n    beq _02262686\n    bl sub_0203476C\n    bl sub_02034780\n    cmp r0, #0xff\n    bne _0226267A\n    bl sub_020347A0\n    add r5, r0, #0\n    ldrb r0, [r6, #1]\n    bl ov45_0222F314\n    cmp r5, r0\n    blo _022626BE\n    bl ov45_0222F464\n    cmp r0, #1\n    bne _022626AC\n    ldrh r0, [r4, #2]\n    cmp r0, #0\n    bne _022626AC\n    bl ov45_0222F1BC\n    mov r0, #1\n    strh r0, [r4, #2]\n    bl ov45_0222F218\n    cmp r0, #1\n    bne _02262730\n    ldr r0, [sp, #0x10]\n    mov r1, #0xc\n    bl ov49_0225EF8C\n    b _02262AB8\n    bl ov45_0222F218\n    cmp r0, #1\n    bne _02262730\n    mov r0, #4\n    strb r0, [r6]\n    ldr r0, [sp, #0x10]\n    mov r1, #0x17\n    bl ov49_0225EF8C\n    b _02262AB8\n    add r0, r4, #0\n    add r0, #0x3c\n    mov r1, #0\n    bl ov49_02262DD4\n    add r0, r4, #0\n    add r0, #0x3c\n    add r1, r5, #0\n    mov r2, #0\n    bl ov49_02262DF8\n    bl sub_02037BEC\n    ldr r0, [sp, #0x30]\n    bl ov45_0222A43C\n    ldr r1, [sp, #0x10]\n    add r0, r4, #0\n    mov r2, #0xd\n    mov r3, #0xe\n    bl ov49_02262C20\n    b _02262AB8\n    add r0, r4, #0\n    add r0, #0x3c\n    mov r1, #0\n    bl ov49_02262DD4\n    add r0, r4, #0\n    add r0, #0x3c\n    add r1, r5, #0\n    mov r2, #0\n    bl ov49_02262DF8\n    ldr r0, [sp, #0x30]\n    bl ov45_0222A548\n    str r0, [r4, #0xc]\n    bl sub_0203769C\n    add r4, #0xc\n    add r1, r4, #0\n    bl sub_02037C0C\n    cmp r0, #1\n    beq _02262732\n    b _02262AB8\n    ldr r0, [sp, #0x10]\n    mov r1, #0xe\n    bl ov49_0225EF8C\n    b _02262AB8\n    add r0, r4, #0\n    add r0, #0x3c\n    mov r1, #0\n    bl ov49_02262DD4\n    add r4, #0x3c\n    add r0, r4, #0\n    add r1, r5, #0\n    mov r2, #0\n    bl ov49_02262DF8\n    mov r0, #0\n    str r0, [sp, #0x18]\n    bl sub_020347A0\n    str r0, [sp, #0x28]\n    bl sub_0203769C\n    mov r7, #0\n    str r0, [sp, #0x24]\n    str r7, [sp, #0x20]\n    bl ov45_0222F430\n    str r0, [sp, #0x1c]\n    ldr r0, [sp, #0x28]\n    add r4, r7, #0\n    cmp r0, #0\n    ble _022627DC\n    ldr r0, [sp, #0x24]\n    cmp r0, r4\n    beq _022627BE\n    add r0, r4, #0\n    bl sub_02037C44\n    add r5, r0, #0\n    beq _022627D4\n    ldr r0, [r5]\n    bl ov45_0222EC68\n    mov r1, #0\n    mvn r1, r1\n    cmp r0, r1\n    bne _022627A4\n    mov r0, #1\n    str r0, [sp, #0x18]\n    mov r0, #4\n    strb r0, [r6]\n    ldr r0, [sp, #0x10]\n    mov r1, #0x17\n    bl ov49_0225EF8C\n    b _022627DC\n    ldr r0, [sp, #0x30]\n    ldr r1, [r5]\n    add r2, r4, #0\n    bl ov45_0222A450\n    ldr r1, [r5]\n    ldr r0, [sp, #0x1c]\n    cmp r1, r0\n    bne _022627BA\n    mov r0, #1\n    str r0, [sp, #0x20]\n    add r7, r7, #1\n    b _022627D4\n    ldr r0, [sp, #0x30]\n    add r1, r4, #0\n    bl ov45_0222A480\n    bl ov45_0222F464\n    cmp r0, #1\n    bne _022627D2\n    mov r0, #1\n    str r0, [sp, #0x20]\n    add r7, r7, #1\n    ldr r0, [sp, #0x28]\n    add r4, r4, #1\n    cmp r4, r0\n    blt _02262774\n    ldr r0, [sp, #0x18]\n    cmp r0, #0\n    bne _022628C6\n    ldr r0, [sp, #0x28]\n    cmp r7, r0\n    bne _022628C6\n    ldr r0, [sp, #0x20]\n    cmp r0, #1\n    bne _022627F8\n    ldr r0, [sp, #0x10]\n    mov r1, #0xf\n    bl ov49_0225EF8C\n    b _02262AB8\n    mov r0, #4\n    strb r0, [r6]\n    ldr r0, [sp, #0x10]\n    mov r1, #0x17\n    bl ov49_0225EF8C\n    b _02262AB8\n    mov r0, #0\n    mov r1, #1\n    bl sub_020398D4\n    bl ov45_0222F464\n    cmp r0, #1\n    bne _02262842\n    ldr r0, [sp, #0x30]\n    add r1, sp, #0x34\n    bl ov45_0222A498\n    ldrb r0, [r6, #1]\n    bl ov45_0222F314\n    add r3, sp, #0x34\n    add r2, r0, #0\n    ldrb r0, [r3, #1]\n    str r0, [sp]\n    ldrb r0, [r3, #2]\n    str r0, [sp, #4]\n    ldrb r0, [r3, #3]\n    str r0, [sp, #8]\n    mov r0, #1\n    str r0, [sp, #0xc]\n    ldrb r1, [r6, #2]\n    ldrb r3, [r3]\n    ldr r0, [sp, #0x30]\n    bl ov45_0222AC14\n    add r0, r5, #0\n    bl ov49_0225A0CC\n    ldr r1, [sp, #0x10]\n    add r0, r4, #0\n    mov r2, #0x1c\n    mov r3, #0x12\n    bl ov49_02262C20\n    b _02262AB8\n    add r0, r5, #0\n    mov r1, #0\n    mov r2, #0x1a\n    bl ov49_0225A30C\n    add r1, r0, #0\n    add r0, r5, #0\n    bl ov49_0225A08C\n    ldr r0, [sp, #0x10]\n    mov r1, #0x11\n    bl ov49_0225EF8C\n    add r4, #0x3c\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov49_02262DB8\n    b _02262AB8\n    ldr r0, [sp, #0x14]\n    ldr r3, [sp, #0x10]\n    str r0, [sp]\n    add r0, r4, #0\n    add r1, r5, #0\n    add r2, r6, #0\n    bl ov49_02262CB4\n    cmp r0, #0\n    bne _022628C6\n    add r0, r5, #0\n    bl ov49_0225A0AC\n    cmp r0, #1\n    bne _022628C6\n    ldr r0, [sp, #0x10]\n    mov r1, #0x12\n    bl ov49_0225EF8C\n    b _02262AB8\n    add r0, r5, #0\n    bl ov49_0225A294\n    ldr r0, [sp, #0x10]\n    mov r1, #0x13\n    bl ov49_0225EF8C\n    b _02262AB8\n    add r0, r5, #0\n    bl ov49_0225A2C4\n    cmp r0, #0\n    beq _022628C8\n    cmp r0, #1\n    beq _022628DE\n    cmp r0, #2\n    beq _022628EE\n    b _02262AB8\n    add r0, r5, #0\n    bl ov49_0225A2F8\n    ldr r0, [sp, #0x10]\n    mov r1, #0x17\n    bl ov49_0225EF8C\n    ldr r0, [sp, #0x30]\n    bl ov45_0222A404\n    b _02262AB8\n    add r0, r5, #0\n    bl ov49_0225A2F8\n    ldr r0, [sp, #0x10]\n    mov r1, #0x14\n    bl ov49_0225EF8C\n    b _02262AB8\n    ldr r0, [sp, #0x14]\n    ldr r3, [sp, #0x10]\n    str r0, [sp]\n    add r0, r4, #0\n    add r1, r5, #0\n    add r2, r6, #0\n    bl ov49_02262CB4\n    cmp r0, #1\n    beq _02262904\n    b _02262AB8\n    add r0, r5, #0\n    bl ov49_0225A2F8\n    b _02262AB8\n    ldrb r0, [r6, #1]\n    bl ov45_0222F3E8\n    strh r0, [r4]\n    mov r0, #0\n    ldrsh r0, [r4, r0]\n    add r1, r5, #0\n    mov r3, #1\n    str r0, [sp]\n    add r0, r4, #0\n    ldrb r2, [r6, #2]\n    add r0, #0x3c\n    bl ov49_02262D70\n    add r0, r4, #0\n    add r0, #0x3c\n    add r1, r5, #0\n    mov r2, #1\n    bl ov49_02262E04\n    mov r1, #0\n    ldrsh r2, [r4, r1]\n    ldr r0, _02262AC0 ; =0x0000014A\n    cmp r2, r0\n    ble _02262948\n    add r0, r5, #0\n    mov r2, #0xa\n    bl ov49_0225A30C\n    b _02262954\n    mov r0, #1\n    str r0, [r4, #0x14]\n    add r0, r5, #0\n    mov r2, #0xb\n    bl ov49_0225A30C\n    add r1, r0, #0\n    add r0, r5, #0\n    bl ov49_0225A09C\n    add r0, r5, #0\n    bl ov49_0225A0BC\n    ldr r0, [sp, #0x10]\n    mov r1, #7\n    bl ov49_0225EF8C\n    b _02262AB8\n    ldrb r0, [r6, #1]\n    bl ov45_0222F314\n    mov r1, #8\n    strb r1, [r6]\n    cmp r0, #4\n    bne _0226297E\n    mov r2, #0x10\n    b _02262980\n    mov r2, #0x12\n    add r0, r5, #0\n    mov r1, #0\n    bl ov49_0225A30C\n    add r1, r0, #0\n    add r0, r5, #0\n    bl ov49_0225A09C\n    add r0, r5, #0\n    bl ov49_0225A0BC\n    ldr r0, [sp, #0x10]\n    mov r1, #9\n    bl ov49_0225EF8C\n    mov r0, #0\n    str r0, [sp]\n    add r0, r4, #0\n    ldrb r2, [r6, #2]\n    add r0, #0x3c\n    add r1, r5, #0\n    mov r3, #1\n    bl ov49_02262D70\n    add r4, #0x3c\n    add r0, r4, #0\n    add r1, r5, #0\n    mov r2, #1\n    bl ov49_02262E04\n    b _02262AB8\n    add r0, r5, #0\n    mov r1, #0\n    mov r2, #0x12\n    bl ov49_0225A30C\n    add r1, r0, #0\n    add r0, r5, #0\n    bl ov49_0225A09C\n    add r0, r5, #0\n    bl ov49_0225A0BC\n    mov r0, #0\n    str r0, [sp]\n    add r0, r4, #0\n    ldrb r2, [r6, #2]\n    add r0, #0x3c\n    add r1, r5, #0\n    mov r3, #1\n    bl ov49_02262D70\n    add r0, r4, #0\n    add r0, #0x3c\n    mov r1, #0\n    bl ov49_02262DD4\n    add r4, #0x3c\n    add r0, r4, #0\n    add r1, r5, #0\n    mov r2, #1\n    bl ov49_02262DF8\n    ldr r0, [sp, #0x10]\n    mov r1, #8\n    bl ov49_0225EF8C\n    b _02262AB8\n    bl sub_020343E4\n    bl sub_0203986C\n    ldr r0, [sp, #0x10]\n    mov r1, #0x18\n    bl ov49_0225EF8C\n    b _02262AB8\n    bl sub_0203988C\n    cmp r0, #0\n    bne _02262AB8\n    ldr r0, [sp, #0x10]\n    mov r1, #0x1c\n    bl ov49_0225EF8C\n    b _02262AB8\n    add r0, r5, #0\n    bl ov49_0225A0AC\n    cmp r0, #1\n    bne _02262AB8\n    ldrb r1, [r4, #4]\n    ldr r0, [sp, #0x10]\n    bl ov49_0225EF8C\n    b _02262AB8\n    mov r0, #5\n    ldrsb r0, [r4, r0]\n    cmp r0, #0\n    ble _02262A4C\n    sub r0, r0, #1\n    strb r0, [r4, #5]\n    mov r0, #5\n    ldrsb r0, [r4, r0]\n    cmp r0, #0\n    bne _02262AB8\n    ldrb r0, [r4, #6]\n    bl sub_02037AC0\n    ldr r0, [sp, #0x10]\n    mov r1, #0x1b\n    bl ov49_0225EF8C\n    b _02262AB8\n    ldrh r0, [r4, #0xa]\n    add r0, r0, #1\n    strh r0, [r4, #0xa]\n    ldrh r0, [r4, #0xa]\n    cmp r0, #0x96\n    blo _02262A7A\n    ldrb r0, [r4, #6]\n    bl sub_02037AC0\n    mov r0, #0\n    strh r0, [r4, #0xa]\n    ldrb r0, [r4, #6]\n    bl sub_02037B38\n    cmp r0, #0\n    beq _02262AB8\n    ldrb r1, [r4, #4]\n    ldr r0, [sp, #0x10]\n    bl ov49_0225EF8C\n    b _02262AB8\n    add r0, r5, #0\n    bl ov49_0225A0EC\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov49_02262CA8\n    add r4, #0x3c\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov49_02262DB8\n    add r0, r5, #0\n    bl ov49_0225A2F8\n    ldr r0, [sp, #0x10]\n    bl ov49_0225EF68\n    add sp, #0x38\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0\n    add sp, #0x38\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02262AC0: .word 0x0000014A"
    );
    #endif
}

void ov49_02262AC4(void) {
    /* Original at 0x02262AC4 */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl ov49_0225EF88\n    cmp r0, #0\n    beq _02262AD8\n    cmp r0, #1\n    beq _02262B02\n    b _02262B0E\n    mov r0, #0\n    add r1, r0, #0\n    bl sub_020398D4\n    bl sub_020392A0\n    cmp r0, #0\n    bne _02262AF0\n    bl sub_020343E4\n    bl sub_0203986C\n    add r0, r4, #0\n    mov r1, #1\n    bl ov49_0225A018\n    add r0, r5, #0\n    mov r1, #1\n    bl ov49_0225EF8C\n    b _02262B0E\n    bl sub_020392A0\n    cmp r0, #1\n    bne _02262B0E\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov49_02262B14(void) {
    /* Original at 0x02262B14 */
    /* Requires manual decompilation - 95 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r6, r0, #0\n    add r5, r1, #0\n    bl ov49_0225EF84\n    add r4, r0, #0\n    add r0, r6, #0\n    bl ov49_0225EF88\n    cmp r0, #0\n    beq _02262B32\n    cmp r0, #1\n    beq _02262BA8\n    b _02262BEC\n    add r0, r6, #0\n    mov r1, #8\n    bl ov49_0225EF40\n    str r0, [sp, #4]\n    add r0, r5, #0\n    bl ov49_0225A040\n    cmp r0, #0x27\n    beq _02262B50\n    cmp r0, #0x28\n    beq _02262B56\n    cmp r0, #0x29\n    beq _02262B5C\n    b _02262B62\n    mov r7, #0x2a\n    mov r4, #0\n    b _02262B6C\n    mov r7, #0x29\n    mov r4, #1\n    b _02262B6C\n    mov r7, #0x2b\n    mov r4, #2\n    b _02262B6C\n    bl GF_AssertFail\n    add sp, #8\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #0\n    bl ov49_0225A37C\n    add r0, r5, #0\n    mov r1, #1\n    add r2, r7, #0\n    bl ov49_0225A30C\n    add r1, r0, #0\n    add r0, r5, #0\n    bl ov49_0225A0FC\n    mov r3, #0\n    ldr r0, [sp, #4]\n    add r1, r5, #0\n    add r2, r4, #0\n    str r3, [sp]\n    bl ov49_02262D70\n    ldr r0, [sp, #4]\n    add r1, r5, #0\n    mov r2, #1\n    bl ov49_02262E04\n    add r0, r6, #0\n    bl ov49_0225EF90\n    b _02262BEC\n    ldr r0, _02262BF4 ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #0xf3\n    tst r0, r1\n    beq _02262BE2\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov49_02262DB8\n    add r0, r5, #0\n    bl ov49_0225A0EC\n    add r0, r5, #0\n    bl ov49_02259FF0\n    add r4, r0, #0\n    bl ov49_02258DAC\n    add r1, r0, #0\n    add r0, r4, #0\n    mov r2, #1\n    bl ov49_02258EEC\n    add r0, r6, #0\n    bl ov49_0225EF68\n    add sp, #8\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r4, #0\n    add r1, r5, #0\n    mov r2, #0\n    bl ov49_02262E04\n    mov r0, #0\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02262BF4: .word gSystem"
    );
    #endif
}

void ov49_02262BF8(void) {
    /* Original at 0x02262BF8 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r2, #0\n    add r5, r0, #0\n    add r4, r1, #0\n    add r0, r6, #0\n    mov r1, #0\n    add r2, r3, #0\n    bl ov49_0225A30C\n    add r1, r0, #0\n    add r0, r6, #0\n    bl ov49_0225A08C\n    ldr r0, [sp, #0x10]\n    mov r1, #0x19\n    strb r0, [r5, #4]\n    add r0, r4, #0\n    bl ov49_0225EF8C\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov49_02262C20(void) {
    /* Original at 0x02262C20 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "strb r2, [r0, #4]\n    strb r3, [r0, #6]\n    mov r2, #0\n    strb r2, [r0, #5]\n    strh r2, [r0, #0xa]\n    add r0, r1, #0\n    ldr r3, _02262C34 ; =ov49_0225EF8C\n    mov r1, #0x1a\n    bx r3\n    nop\n    _02262C34: .word ov49_0225EF8C"
    );
    #endif
}

void ov49_02262C38(void) {
    /* Original at 0x02262C38 */
    /* Requires manual decompilation - 51 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r1, #0\n    add r6, r2, #0\n    str r0, [sp]\n    add r0, r5, #0\n    add r1, r6, #0\n    add r7, r3, #0\n    bl ov49_0225A10C\n    ldr r0, [sp]\n    mov r4, #0\n    str r6, [r0, #0x38]\n    cmp r6, #0\n    bls _02262C6E\n    add r0, r5, #0\n    mov r1, #0\n    add r2, r7, r4\n    bl ov49_0225A30C\n    add r1, r0, #0\n    add r0, r5, #0\n    add r2, r4, #0\n    bl ov49_0225A144\n    add r4, r4, #1\n    cmp r4, r6\n    blo _02262C54\n    ldr r2, [sp]\n    ldr r3, _02262CA4 ; =ov49_02269DFC\n    add r2, #0x18\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldr r0, [sp]\n    ldr r1, [r0, #0x38]\n    strh r1, [r0, #0x28]\n    ldr r1, [r0, #0x38]\n    ldrh r0, [r0, #0x2a]\n    cmp r0, r1\n    bls _02262C96\n    ldr r0, [sp]\n    strh r1, [r0, #0x2a]\n    add r0, r5, #0\n    bl ov49_0225A154\n    ldr r1, [sp]\n    str r0, [r1, #0x18]\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02262CA4: .word ov49_02269DFC"
    );
    #endif
}

void ov49_02262CA8(void) {
    ov49_0225A134();
}

void ov49_02262CB4(void) {
    /* Original at 0x02262CB4 */
    /* Requires manual decompilation - 82 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r5, r0, #0\n    add r4, r2, #0\n    add r0, r1, #0\n    add r6, r3, #0\n    bl ov49_02259FE8\n    str r0, [sp, #0x10]\n    bl sub_0203988C\n    add r7, r0, #0\n    ldrb r0, [r4, #1]\n    bl ov45_0222F314\n    add r2, r0, #0\n    cmp r7, #0\n    bne _02262CEA\n    mov r0, #4\n    strb r0, [r4]\n    add r0, r6, #0\n    mov r1, #0x17\n    bl ov49_0225EF8C\n    add sp, #0x14\n    mov r0, #1\n    pop {r4, r5, r6, r7, pc}\n    cmp r7, #2\n    bne _02262CFE\n    add r0, r6, #0\n    mov r1, #0x15\n    strh r2, [r5, #8]\n    bl ov49_0225EF8C\n    add sp, #0x14\n    mov r0, #1\n    pop {r4, r5, r6, r7, pc}\n    ldrb r0, [r5, #7]\n    cmp r0, r2\n    beq _02262D1E\n    strb r2, [r5, #7]\n    cmp r2, #4\n    beq _02262D1E\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    str r0, [sp, #0xc]\n    ldrb r1, [r4, #2]\n    ldr r0, [sp, #0x10]\n    ldr r3, [sp, #0x28]\n    bl ov45_0222AC14\n    ldrb r0, [r4, #1]\n    bl ov45_0222F3E8\n    strh r0, [r5]\n    mov r0, #0\n    ldrsh r2, [r5, r0]\n    cmp r2, #0\n    bne _02262D58\n    ldrb r0, [r4, #1]\n    bl ov45_0222F314\n    cmp r0, #1\n    bhi _02262D4A\n    mov r0, #3\n    strb r0, [r4]\n    add r0, r6, #0\n    mov r1, #0x17\n    bl ov49_0225EF8C\n    add sp, #0x14\n    mov r0, #1\n    pop {r4, r5, r6, r7, pc}\n    add r0, r6, #0\n    mov r1, #0x16\n    bl ov49_0225EF8C\n    add sp, #0x14\n    mov r0, #1\n    pop {r4, r5, r6, r7, pc}\n    ldr r1, _02262D6C ; =0x0000014A\n    cmp r2, r1\n    bgt _02262D68\n    add r0, r6, #0\n    mov r1, #0x14\n    bl ov49_0225EF8C\n    mov r0, #1\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    _02262D6C: .word 0x0000014A"
    );
    #endif
}

void ov49_02262D70(void) {
    /* Original at 0x02262D70 */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r4, r3, #0\n    add r5, r0, #0\n    add r7, r1, #0\n    add r6, r2, #0\n    cmp r4, #2\n    blo _02262D82\n    bl GF_AssertFail\n    mov r0, #0\n    strb r0, [r5]\n    strb r0, [r5, #1]\n    strb r0, [r5, #2]\n    strb r0, [r5, #3]\n    strb r0, [r5, #4]\n    strb r0, [r5, #5]\n    strb r0, [r5, #6]\n    strb r0, [r5, #7]\n    strb r4, [r5, #6]\n    ldr r1, [sp, #0x18]\n    add r0, r5, #0\n    strb r6, [r5, #3]\n    bl ov49_02262DD4\n    ldr r0, _02262DB4 ; =ov49_02269DF8\n    mov r1, #0x12\n    ldrb r0, [r0, r4]\n    mov r2, #3\n    mov r3, #0xd\n    str r0, [sp]\n    add r0, r7, #0\n    bl ov49_0225A204\n    pop {r3, r4, r5, r6, r7, pc}\n    _02262DB4: .word ov49_02269DF8"
    );
    #endif
}

void ov49_02262DB8(void) {
    /* Original at 0x02262DB8 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "mov r2, #0\n    strb r2, [r0]\n    strb r2, [r0, #1]\n    strb r2, [r0, #2]\n    strb r2, [r0, #3]\n    strb r2, [r0, #4]\n    strb r2, [r0, #5]\n    strb r2, [r0, #6]\n    strb r2, [r0, #7]\n    ldr r3, _02262DD0 ; =ov49_0225A22C\n    add r0, r1, #0\n    bx r3\n    _02262DD0: .word ov49_0225A22C"
    );
    #endif
}

void ov49_02262DD4(void) {
    /* Original at 0x02262DD4 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    add r0, r1, #0\n    mov r1, #0x1e\n    bl _s32_div_f\n    lsl r0, r0, #0x10\n    asr r1, r0, #0x10\n    mov r0, #4\n    ldrsh r0, [r4, r0]\n    cmp r1, r0\n    beq _02262DF6\n    strh r1, [r4, #4]\n    ldrb r1, [r4, #7]\n    mov r0, #8\n    orr r0, r1\n    strb r0, [r4, #7]\n    pop {r4, pc}"
    );
    #endif
}

void ov49_02262DF8(void) {
    ov49_02262E10();
}

void ov49_02262E04(void) {
    ov49_02262E10();
}

void ov49_02262E10(void) {
    /* Original at 0x02262E10 */
    /* Requires manual decompilation - 189 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r5, r0, #0\n    add r4, r1, #0\n    str r3, [sp, #4]\n    cmp r2, #0\n    beq _02262E22\n    mov r0, #0xff\n    strb r0, [r5, #7]\n    ldrb r0, [r5, #3]\n    cmp r0, #0\n    beq _02262E32\n    cmp r0, #1\n    beq _02262E36\n    cmp r0, #2\n    beq _02262E3A\n    b _02262E3E\n    mov r6, #0\n    b _02262E44\n    mov r6, #1\n    b _02262E44\n    mov r6, #2\n    b _02262E44\n    bl GF_AssertFail\n    mov r6, #2\n    add r0, r6, #0\n    bl ov45_0222F274\n    add r7, r0, #0\n    ldrb r0, [r5]\n    cmp r0, r7\n    beq _02262E5A\n    ldrb r1, [r5, #7]\n    mov r0, #4\n    orr r0, r1\n    strb r0, [r5, #7]\n    strb r7, [r5]\n    add r0, r6, #0\n    bl ov45_0222F294\n    ldrb r1, [r5, #2]\n    cmp r1, r0\n    beq _02262E70\n    ldrb r2, [r5, #7]\n    mov r1, #4\n    orr r1, r2\n    strb r1, [r5, #7]\n    strb r0, [r5, #2]\n    cmp r7, #1\n    bne _02262E7E\n    add r0, r6, #0\n    bl ov45_0222F2D4\n    b _02262E80\n    mov r0, #4\n    ldrb r1, [r5, #1]\n    cmp r1, r0\n    beq _02262E8E\n    ldrb r2, [r5, #7]\n    mov r1, #2\n    orr r1, r2\n    strb r1, [r5, #7]\n    strb r0, [r5, #1]\n    ldrb r1, [r5, #7]\n    mov r0, #1\n    tst r0, r1\n    beq _02262EC8\n    mov r0, #0x10\n    mov r1, #0\n    str r0, [sp]\n    add r0, r4, #0\n    add r2, r1, #0\n    mov r3, #0x68\n    bl ov49_0225A24C\n    ldrb r1, [r5, #3]\n    add r0, r4, #0\n    mov r2, #0\n    bl ov49_0225A37C\n    add r0, r4, #0\n    mov r1, #1\n    mov r2, #0x36\n    bl ov49_0225A30C\n    mov r2, #0\n    add r1, r0, #0\n    add r0, r4, #0\n    add r3, r2, #0\n    bl ov49_0225A23C\n    ldrb r1, [r5, #7]\n    mov r0, #4\n    tst r0, r1\n    beq _02262F18\n    mov r2, #0x10\n    add r0, r4, #0\n    mov r1, #0\n    mov r3, #0x68\n    str r2, [sp]\n    bl ov49_0225A24C\n    ldr r0, [sp, #4]\n    cmp r0, #1\n    bne _02262F18\n    ldrb r0, [r5, #2]\n    cmp r0, #0\n    bne _02262F18\n    ldrb r0, [r5]\n    cmp r0, #1\n    bne _02262F18\n    add r0, r4, #0\n    mov r1, #1\n    mov r2, #0x45\n    bl ov49_0225A30C\n    add r6, r0, #0\n    mov r0, #0\n    add r1, r6, #0\n    add r2, r0, #0\n    bl FontID_String_GetWidth\n    mov r1, #0x68\n    sub r0, r1, r0\n    lsl r0, r0, #0x18\n    lsr r2, r0, #0x18\n    add r0, r4, #0\n    add r1, r6, #0\n    mov r3, #0x10\n    bl ov49_0225A23C\n    ldrb r1, [r5, #7]\n    mov r0, #2\n    tst r0, r1\n    beq _02262F68\n    mov r2, #0x20\n    add r0, r4, #0\n    mov r1, #0\n    mov r3, #0x68\n    str r2, [sp]\n    bl ov49_0225A24C\n    mov r0, #2\n    str r0, [sp]\n    mov r2, #1\n    ldrb r1, [r5, #1]\n    add r0, r4, #0\n    add r3, r2, #0\n    bl ov49_0225A31C\n    mov r0, #2\n    str r0, [sp]\n    ldrb r2, [r5, #1]\n    mov r1, #4\n    add r0, r4, #0\n    sub r1, r1, r2\n    mov r2, #1\n    mov r3, #0\n    bl ov49_0225A31C\n    add r0, r4, #0\n    mov r1, #1\n    mov r2, #0x44\n    bl ov49_0225A30C\n    add r1, r0, #0\n    add r0, r4, #0\n    mov r2, #0\n    mov r3, #0x20\n    bl ov49_0225A23C\n    ldrb r0, [r5, #6]\n    cmp r0, #1\n    bne _02262FAC\n    ldrb r1, [r5, #7]\n    mov r0, #8\n    tst r0, r1\n    beq _02262FAC\n    mov r0, #0x10\n    str r0, [sp]\n    add r0, r4, #0\n    mov r1, #0\n    mov r2, #0x40\n    mov r3, #0x68\n    bl ov49_0225A24C\n    mov r2, #2\n    str r2, [sp]\n    mov r1, #4\n    ldrsh r1, [r5, r1]\n    add r0, r4, #0\n    mov r3, #0\n    bl ov49_0225A31C\n    add r0, r4, #0\n    mov r1, #0\n    mov r2, #0xf\n    bl ov49_0225A30C\n    add r1, r0, #0\n    add r0, r4, #0\n    mov r2, #0\n    mov r3, #0x40\n    bl ov49_0225A23C\n    mov r0, #0\n    strb r0, [r5, #7]\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov49_02262FB4(void) {
    /* Original at 0x02262FB4 */
    /* Requires manual decompilation - 1184 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x54\n    add r5, r1, #0\n    add r6, r0, #0\n    add r0, r5, #0\n    str r2, [sp, #0xc]\n    bl ov49_02259FE8\n    add r7, r0, #0\n    add r0, r5, #0\n    bl ov49_0225A010\n    str r0, [sp, #0x24]\n    add r0, r6, #0\n    bl ov49_0225EF84\n    add r4, r0, #0\n    add r0, r7, #0\n    bl ov45_0222B034\n    str r0, [sp, #0x20]\n    add r0, r7, #0\n    bl ov45_0222B040\n    str r0, [sp, #0x1c]\n    add r0, r7, #0\n    bl ov45_0222B06C\n    cmp r0, #0\n    beq _0226300C\n    cmp r4, #0\n    beq _0226300C\n    ldrh r0, [r4, #0xa]\n    cmp r0, #0\n    beq _0226300C\n    add r0, r6, #0\n    mov r1, #0x20\n    bl ov49_0225EF8C\n    add r0, r5, #0\n    bl ov49_0225A0CC\n    mov r0, #0\n    strh r0, [r4, #0xa]\n    cmp r4, #0\n    beq _0226302E\n    add r0, r7, #0\n    bl ov45_0222A5C0\n    str r0, [sp, #0x18]\n    ldr r0, [r4, #0x10]\n    cmp r0, #0\n    beq _0226302A\n    ldrb r1, [r4, #3]\n    add r0, r7, #0\n    bl ov45_0222A578\n    str r0, [sp, #0x14]\n    b _0226302E\n    mov r0, #0\n    str r0, [sp, #0x14]\n    add r0, r6, #0\n    bl ov49_0225EF88\n    cmp r0, #0\n    beq _02263056\n    ldrh r0, [r4, #0xa]\n    cmp r0, #0\n    beq _02263056\n    ldr r0, [sp, #0x14]\n    cmp r0, #0\n    bne _02263056\n    add r0, r6, #0\n    mov r1, #0x20\n    bl ov49_0225EF8C\n    add r0, r5, #0\n    bl ov49_0225A0CC\n    mov r0, #0\n    strh r0, [r4, #0xa]\n    add r0, r6, #0\n    bl ov49_0225EF88\n    cmp r0, #0x26\n    bls _02263064\n    bl _02263B5E\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02263070: ; jump table\n    add r0, r6, #0\n    mov r1, #0x50\n    bl ov49_0225EF40\n    add r4, r0, #0\n    mov r1, #0\n    add r0, #0x44\n    strh r1, [r0]\n    add r0, r4, #0\n    add r0, #0x46\n    strh r1, [r0]\n    add r0, r4, #0\n    add r0, #0x38\n    str r1, [r4, #0x48]\n    bl ov49_0226526C\n    add r0, r5, #0\n    bl ov49_02259FF0\n    str r0, [sp, #0x28]\n    bl ov49_02258DAC\n    str r0, [sp, #0x2c]\n    ldr r0, [sp, #0x28]\n    ldr r1, [sp, #0x2c]\n    bl ov49_02258F40\n    str r0, [sp, #0x30]\n    cmp r0, #0\n    bne _0226310A\n    mov r0, #0\n    strh r0, [r4, #0xa]\n    add r0, r6, #0\n    mov r1, #0x26\n    bl ov49_0225EF8C\n    bl _02263B5E\n    mov r1, #4\n    bl ov49_02258E60\n    str r0, [sp, #0x34]\n    ldr r0, [sp, #0x2c]\n    mov r1, #6\n    bl ov49_02258E60\n    bl ov42_022282A4\n    str r0, [sp, #0x38]\n    add r0, r7, #0\n    bl ov45_0222AE64\n    ldr r2, [sp, #0x34]\n    add r0, r4, #0\n    add r1, r7, #0\n    bl ov49_02264CA8\n    str r0, [sp, #0x3c]\n    ldr r0, [sp, #0x30]\n    mov r1, #0\n    str r0, [r4, #0x10]\n    bl ov49_02259130\n    ldr r0, [sp, #0x30]\n    ldr r1, [sp, #0x38]\n    bl ov49_02259160\n    ldr r0, [sp, #0x24]\n    ldr r1, [sp, #0x34]\n    mov r2, #0\n    bl ov49_0225EFF0\n    ldr r0, _022634A0 ; =0x000005E4\n    bl PlaySE\n    add r0, r7, #0\n    mov r1, #9\n    bl ov45_0222A5E8\n    ldr r0, [sp, #0x3c]\n    cmp r0, #1\n    bne _02263178\n    ldr r1, [sp, #0x34]\n    add r0, r5, #0\n    mov r2, #0\n    bl ov49_0225A428\n    add r0, r6, #0\n    mov r1, #1\n    bl ov49_0225EF8C\n    bl _02263B5E\n    add r0, r6, #0\n    mov r1, #0x22\n    bl ov49_0225EF8C\n    bl _02263B5E\n    ldrb r1, [r4, #3]\n    add r0, r7, #0\n    bl ov45_0222AE74\n    cmp r0, #1\n    bne _0226319C\n    add r0, r6, #0\n    mov r1, #2\n    bl ov49_0225EF8C\n    bl _02263B5E\n    add r0, r6, #0\n    mov r1, #0x22\n    bl ov49_0225EF8C\n    bl _02263B5E\n    ldr r0, [sp, #0x20]\n    cmp r0, #4\n    bhi _022631E4\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _022631BA: ; jump table\n    ldrb r1, [r4, #3]\n    add r0, r7, #0\n    bl ov45_0222B0E8\n    add r0, r6, #0\n    mov r1, #3\n    bl ov49_0225EF8C\n    bl _02263B5E\n    add r0, r6, #0\n    mov r1, #0x22\n    bl ov49_0225EF8C\n    bl _02263B5E\n    add r0, r6, #0\n    mov r1, #0x20\n    bl ov49_0225EF8C\n    bl _02263B5E\n    add r0, r7, #0\n    bl ov45_0222B0F8\n    add r0, r7, #0\n    mov r1, #7\n    bl ov45_0222B118\n    ldr r0, [sp, #0x18]\n    add r1, r7, #0\n    str r0, [sp]\n    ldr r0, [sp, #0x14]\n    add r2, r5, #0\n    str r0, [sp, #4]\n    ldrb r3, [r4, #4]\n    add r0, r4, #0\n    bl ov49_02264D4C\n    mov r0, #0x25\n    str r0, [sp]\n    add r0, r4, #0\n    mov r1, #0x80\n    mov r2, #4\n    add r3, r6, #0\n    bl ov49_02264CFC\n    bl _02263B5E\n    ldr r0, [sp, #0x14]\n    add r1, r7, #0\n    str r0, [sp]\n    ldr r0, [sp, #0x18]\n    add r2, r5, #0\n    str r0, [sp, #4]\n    ldrb r3, [r4, #5]\n    add r0, r4, #0\n    bl ov49_02264D4C\n    mov r0, #0x25\n    str r0, [sp]\n    add r0, r4, #0\n    mov r1, #0x80\n    mov r2, #5\n    add r3, r6, #0\n    bl ov49_02264CFC\n    add r0, r7, #0\n    mov r1, #0\n    bl ov45_0222AED8\n    bl _02263B5E\n    ldr r0, [sp, #0x20]\n    cmp r0, #4\n    bhi _022632B6\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02263268: ; jump table\n    add r0, r5, #0\n    bl ov49_0225A0CC\n    add r0, r7, #0\n    bl ov45_0222B028\n    cmp r0, #0\n    beq _0226328E\n    add r0, r6, #0\n    mov r1, #6\n    bl ov49_0225EF8C\n    bl _02263B5E\n    add r0, r6, #0\n    mov r1, #8\n    bl ov49_0225EF8C\n    bl _02263B5E\n    add r0, r5, #0\n    bl ov49_0225A0DC\n    cmp r0, #0\n    bne _022632AA\n    add r0, r5, #0\n    bl ov49_0225A0BC\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov49_02264EC8\n    bl _02263B5E\n    add r0, r6, #0\n    mov r1, #0x20\n    bl ov49_0225EF8C\n    add r0, r5, #0\n    bl ov49_0225A0CC\n    bl _02263B5E\n    add r0, r4, #0\n    add r1, r7, #0\n    add r2, r5, #0\n    bl ov49_02264E20\n    cmp r0, #1\n    bne _022632EA\n    mov r0, #0x25\n    str r0, [sp]\n    add r0, r4, #0\n    mov r1, #0x80\n    mov r2, #7\n    add r3, r6, #0\n    bl ov49_02264CFC\n    bl _02263B5E\n    add r0, r6, #0\n    mov r1, #7\n    bl ov49_0225EF8C\n    bl _02263B5E\n    ldrb r1, [r4, #3]\n    add r0, r5, #0\n    mov r2, #0\n    bl ov49_0225A334\n    ldrb r1, [r4, #3]\n    add r0, r5, #0\n    mov r2, #0x28\n    bl ov49_02264C04\n    add r1, r0, #0\n    add r0, r5, #0\n    bl ov49_0225A08C\n    mov r0, #0x25\n    str r0, [sp]\n    add r0, r4, #0\n    mov r1, #0x80\n    mov r2, #9\n    add r3, r6, #0\n    bl ov49_02264CFC\n    bl _02263B5E\n    ldrb r1, [r4, #3]\n    add r0, r5, #0\n    mov r2, #0\n    bl ov49_0225A334\n    ldrh r1, [r4, #8]\n    add r0, r5, #0\n    mov r2, #1\n    bl ov49_0225A334\n    ldrb r1, [r4, #3]\n    ldrh r2, [r4, #8]\n    add r0, r5, #0\n    bl ov49_02264C50\n    add r1, r0, #0\n    add r0, r5, #0\n    bl ov49_0225A08C\n    mov r0, #0x25\n    str r0, [sp]\n    add r0, r4, #0\n    mov r1, #0x80\n    mov r2, #9\n    add r3, r6, #0\n    bl ov49_02264CFC\n    b _02263B5E\n    ldrb r1, [r4, #3]\n    add r0, r5, #0\n    mov r2, #0\n    bl ov49_0225A334\n    ldrb r1, [r4, #3]\n    add r0, r5, #0\n    mov r2, #0x2e\n    bl ov49_02264C04\n    add r1, r0, #0\n    add r0, r5, #0\n    bl ov49_0225A08C\n    mov r0, #0x25\n    str r0, [sp]\n    add r0, r4, #0\n    mov r1, #0x80\n    mov r2, #0xb\n    add r3, r6, #0\n    bl ov49_02264CFC\n    b _02263B5E\n    ldrb r1, [r4, #3]\n    add r0, r5, #0\n    mov r2, #0\n    bl ov49_0225A334\n    ldrb r1, [r4, #3]\n    add r0, r5, #0\n    mov r2, #0x36\n    bl ov49_02264C04\n    add r1, r0, #0\n    add r0, r5, #0\n    bl ov49_0225A08C\n    mov r0, #0x25\n    str r0, [sp]\n    add r0, r4, #0\n    mov r1, #0x80\n    mov r2, #0xb\n    add r3, r6, #0\n    bl ov49_02264CFC\n    b _02263B5E\n    mov r0, #0\n    str r0, [sp]\n    add r0, r4, #0\n    ldr r3, _022634A4 ; =0x00000203\n    add r0, #0x14\n    add r1, r5, #0\n    mov r2, #3\n    bl ov49_02264F9C\n    add r1, r4, #0\n    mov r2, #0\n    add r0, r5, #0\n    add r1, #0x14\n    add r3, r2, #0\n    bl ov49_0225A174\n    add r0, r4, #0\n    bl ov49_02264F10\n    add r0, r6, #0\n    mov r1, #0xc\n    bl ov49_0225EF8C\n    b _02263B5E\n    add r0, r5, #0\n    bl ov49_0225A1D4\n    cmp r0, #0\n    beq _022633FE\n    cmp r0, #1\n    beq _0226340A\n    cmp r0, #2\n    beq _02263428\n    b _0226343A\n    add r0, r6, #0\n    mov r1, #0xd\n    bl ov49_0225EF8C\n    mov r0, #1\n    b _02263444\n    add r0, r6, #0\n    mov r1, #0x13\n    bl ov49_0225EF8C\n    ldr r0, [r4, #0x10]\n    mov r1, #4\n    bl ov49_02258E60\n    add r2, r0, #0\n    ldr r1, [sp, #0xc]\n    add r0, r7, #0\n    bl ov45_0222AB94\n    mov r0, #1\n    b _02263444\n    add r0, r7, #0\n    bl ov45_0222AF80\n    add r0, r6, #0\n    mov r1, #0x21\n    bl ov49_0225EF8C\n    mov r0, #1\n    b _02263444\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov49_02264F24\n    mov r0, #0\n    cmp r0, #1\n    beq _0226344A\n    b _02263B5E\n    mov r1, #0\n    add r0, r5, #0\n    add r2, r1, #0\n    bl ov49_0225A1E4\n    add r0, r4, #0\n    add r0, #0x14\n    add r1, r5, #0\n    bl ov49_02265260\n    add r0, r4, #0\n    bl ov49_02264F1C\n    b _02263B5E\n    ldr r0, [sp, #0x18]\n    bl ov45_0222AAC8\n    str r0, [sp, #0x40]\n    ldr r0, [sp, #0x14]\n    bl ov45_0222AAC8\n    ldr r1, [sp, #0x40]\n    cmp r1, r0\n    bne _022634D4\n    mov r0, #1\n    strb r0, [r4, #0xc]\n    ldrb r1, [r4, #3]\n    add r0, r5, #0\n    mov r2, #0\n    bl ov49_0225A334\n    mov r0, #0\n    str r0, [sp]\n    add r0, r4, #0\n    add r1, r7, #0\n    add r2, r5, #0\n    mov r3, #1\n    bl ov49_02264E90\n    ldrb r1, [r4, #3]\n    ldr r2, _022634A8 ; =0x000001FB\n    b _022634AC\n    nop\n    _022634A0: .word 0x000005E4\n    _022634A4: .word 0x00000203\n    _022634A8: .word 0x000001FB\n    add r0, r5, #0\n    bl ov49_02264C04\n    add r1, r0, #0\n    add r0, r5, #0\n    bl ov49_0225A08C\n    mov r0, #0x25\n    str r0, [sp]\n    add r0, r4, #0\n    mov r1, #0x80\n    mov r2, #0x12\n    add r3, r6, #0\n    bl ov49_02264CFC\n    add r0, r7, #0\n    mov r1, #4\n    bl ov45_0222AED8\n    b _02263B5E\n    mov r2, #0\n    strb r2, [r4, #0xc]\n    ldrb r1, [r4, #3]\n    add r0, r5, #0\n    bl ov49_0225A334\n    mov r3, #1\n    add r0, r4, #0\n    add r1, r7, #0\n    add r2, r5, #0\n    str r3, [sp]\n    bl ov49_02264E90\n    mov r0, #0\n    str r0, [sp]\n    add r0, r4, #0\n    add r1, r7, #0\n    add r2, r5, #0\n    mov r3, #2\n    bl ov49_02264E90\n    mov r2, #0x7f\n    ldrb r1, [r4, #3]\n    add r0, r5, #0\n    lsl r2, r2, #2\n    bl ov49_02264C04\n    add r1, r0, #0\n    add r0, r5, #0\n    bl ov49_0225A08C\n    mov r0, #0x25\n    str r0, [sp]\n    add r0, r4, #0\n    mov r1, #0x80\n    mov r2, #0xe\n    add r3, r6, #0\n    bl ov49_02264CFC\n    b _02263B5E\n    mov r0, #1\n    str r0, [sp]\n    add r0, r4, #0\n    ldr r3, _02263858 ; =0x00000206\n    add r0, #0x14\n    add r1, r5, #0\n    mov r2, #2\n    bl ov49_02264F9C\n    add r1, r4, #0\n    mov r2, #0\n    add r0, r5, #0\n    add r1, #0x14\n    add r3, r2, #0\n    bl ov49_0225A174\n    add r0, r4, #0\n    bl ov49_02264F10\n    add r0, r6, #0\n    mov r1, #0xf\n    bl ov49_0225EF8C\n    b _02263B5E\n    add r0, r5, #0\n    bl ov49_0225A1D4\n    cmp r0, #0\n    beq _02263564\n    cmp r0, #1\n    beq _02263594\n    b _022635A0\n    add r0, r7, #0\n    mov r1, #3\n    bl ov45_0222AED8\n    add r0, r6, #0\n    mov r1, #0x10\n    bl ov49_0225EF8C\n    ldr r0, [r4, #0x10]\n    mov r1, #4\n    bl ov49_02258E60\n    add r6, r0, #0\n    ldr r0, [sp, #0x14]\n    bl ov45_0222AAC8\n    add r3, r0, #0\n    ldr r1, [sp, #0xc]\n    add r0, r7, #0\n    add r2, r6, #0\n    bl ov45_0222ABD0\n    mov r0, #1\n    b _022635AA\n    add r0, r6, #0\n    mov r1, #0xa\n    bl ov49_0225EF8C\n    mov r0, #1\n    b _022635AA\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov49_02264F24\n    mov r0, #0\n    cmp r0, #1\n    beq _022635B0\n    b _02263B5E\n    mov r1, #0\n    add r0, r5, #0\n    add r2, r1, #0\n    bl ov49_0225A1E4\n    add r0, r4, #0\n    add r0, #0x14\n    add r1, r5, #0\n    bl ov49_02265260\n    add r0, r4, #0\n    bl ov49_02264F1C\n    b _02263B5E\n    ldrb r1, [r4, #3]\n    add r0, r5, #0\n    mov r2, #0\n    bl ov49_0225A334\n    mov r0, #0\n    str r0, [sp]\n    add r0, r4, #0\n    add r1, r7, #0\n    add r2, r5, #0\n    mov r3, #1\n    bl ov49_02264E90\n    ldrb r1, [r4, #3]\n    ldr r2, _0226385C ; =0x000001FE\n    add r0, r5, #0\n    bl ov49_02264C04\n    add r1, r0, #0\n    add r0, r5, #0\n    bl ov49_0225A08C\n    mov r0, #0x25\n    str r0, [sp]\n    add r0, r4, #0\n    mov r1, #0x80\n    mov r2, #0x11\n    add r3, r6, #0\n    bl ov49_02264CFC\n    ldr r0, [sp, #0x14]\n    bl ov45_0222AAC8\n    add r1, r0, #0\n    add r0, r7, #0\n    bl ov45_0222A72C\n    b _02263B5E\n    ldr r0, _02263860 ; =0x000005BF\n    bl PlaySE\n    add r0, r6, #0\n    mov r1, #0x12\n    bl ov49_0225EF8C\n    b _02263B5E\n    ldr r0, [sp, #0x20]\n    cmp r0, #4\n    bhi _02263686\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0226363A: ; jump table\n    ldr r1, [sp, #0x14]\n    add r0, r4, #0\n    bl ov49_02264F78\n    ldrb r0, [r4, #0xc]\n    cmp r0, #1\n    bne _0226365C\n    add r0, r6, #0\n    mov r1, #0x21\n    bl ov49_0225EF8C\n    b _02263664\n    add r0, r6, #0\n    mov r1, #0xa\n    bl ov49_0225EF8C\n    add r0, r5, #0\n    bl ov49_0225A0CC\n    b _02263B5E\n    add r0, r5, #0\n    bl ov49_0225A0DC\n    cmp r0, #0\n    bne _0226367C\n    add r0, r5, #0\n    bl ov49_0225A0BC\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov49_02264EC8\n    b _02263B5E\n    add r0, r6, #0\n    mov r1, #0x20\n    bl ov49_0225EF8C\n    add r0, r5, #0\n    bl ov49_0225A0CC\n    b _02263B5E\n    add r0, r7, #0\n    mov r1, #5\n    bl ov45_0222AED8\n    add r0, r6, #0\n    mov r1, #0x14\n    bl ov49_0225EF8C\n    b _02263B5E\n    ldr r0, _02263864 ; =0x00000207\n    add r1, r5, #0\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    add r0, r4, #0\n    add r0, #0x14\n    mov r2, #0x1e\n    mov r3, #4\n    bl ov49_02265044\n    mov r0, #8\n    str r0, [sp]\n    mov r0, #3\n    str r0, [sp, #4]\n    mov r0, #0x17\n    add r1, r4, #0\n    mov r2, #0\n    str r0, [sp, #8]\n    add r0, r5, #0\n    add r1, #0x14\n    add r3, r2, #0\n    bl ov49_0225A1A4\n    add r0, r6, #0\n    mov r1, #0x15\n    bl ov49_0225EF8C\n    add r0, r4, #0\n    bl ov49_02264F10\n    b _02263B5E\n    add r0, r5, #0\n    bl ov49_0225A1D4\n    mov r1, #1\n    mvn r1, r1\n    str r0, [sp, #0x44]\n    cmp r0, r1\n    beq _022636FE\n    add r1, r1, #1\n    cmp r0, r1\n    bne _02263708\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov49_02264F24\n    b _02263B5E\n    mov r1, #0\n    add r0, r5, #0\n    add r2, r1, #0\n    bl ov49_0225A1E4\n    add r0, r4, #0\n    add r0, #0x14\n    add r1, r5, #0\n    bl ov49_02265260\n    ldr r0, [sp, #0x44]\n    mov r1, #0x16\n    strb r0, [r4]\n    add r0, r6, #0\n    bl ov49_0225EF8C\n    b _02263B5E\n    ldrb r1, [r4, #3]\n    add r0, r5, #0\n    mov r2, #0\n    bl ov49_0225A334\n    ldrb r3, [r4]\n    ldr r2, _02263868 ; =0x000001DD\n    ldrb r1, [r4, #3]\n    add r0, r5, #0\n    add r2, r3, r2\n    bl ov49_02264C04\n    add r1, r0, #0\n    add r0, r5, #0\n    bl ov49_0225A08C\n    mov r0, #0x25\n    str r0, [sp]\n    add r0, r4, #0\n    mov r1, #0x80\n    mov r2, #0x17\n    add r3, r6, #0\n    bl ov49_02264CFC\n    b _02263B5E\n    mov r0, #0\n    str r0, [sp]\n    ldrb r3, [r4]\n    add r0, r4, #0\n    add r0, #0x14\n    lsl r3, r3, #2\n    add r1, r5, #0\n    mov r2, #4\n    add r3, #0x73\n    bl ov49_02264F9C\n    add r1, r4, #0\n    mov r2, #0\n    add r0, r5, #0\n    add r1, #0x14\n    add r3, r2, #0\n    bl ov49_0225A174\n    add r0, r6, #0\n    mov r1, #0x18\n    bl ov49_0225EF8C\n    b _02263B5E\n    add r0, r5, #0\n    bl ov49_0225A1D4\n    str r0, [sp, #0x48]\n    cmp r0, #3\n    bhi _022637D8\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _022637A2: ; jump table\n    mov r1, #0\n    add r0, r5, #0\n    add r2, r1, #0\n    bl ov49_0225A1E4\n    add r0, r4, #0\n    add r0, #0x14\n    add r1, r5, #0\n    bl ov49_02265260\n    add r0, r4, #0\n    bl ov49_02264F1C\n    ldrb r0, [r4]\n    lsl r1, r0, #2\n    ldr r0, [sp, #0x48]\n    add r0, r0, r1\n    strb r0, [r4, #1]\n    add r0, r6, #0\n    mov r1, #0x19\n    bl ov49_0225EF8C\n    b _02263B5E\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov49_02264F24\n    b _02263B5E\n    ldrb r2, [r4, #1]\n    add r0, r4, #0\n    add r0, #0x38\n    add r2, r2, #6\n    lsl r2, r2, #0x10\n    add r1, r7, #0\n    lsr r2, r2, #0x10\n    mov r3, #2\n    bl ov49_02265274\n    ldrb r1, [r4, #3]\n    add r0, r5, #0\n    mov r2, #0\n    bl ov49_0225A334\n    ldrb r3, [r4, #1]\n    ldr r2, _0226386C ; =0x00000165\n    ldrb r1, [r4, #3]\n    add r0, r5, #0\n    add r2, r3, r2\n    bl ov49_02264C04\n    add r1, r0, #0\n    add r0, r5, #0\n    bl ov49_0225A08C\n    mov r0, #0x25\n    str r0, [sp]\n    add r0, r4, #0\n    mov r1, #0x80\n    mov r2, #0x1a\n    add r3, r6, #0\n    bl ov49_02264CFC\n    b _02263B5E\n    ldrb r1, [r4, #3]\n    add r0, r5, #0\n    mov r2, #0\n    bl ov49_0225A334\n    ldrb r2, [r4]\n    ldrb r1, [r4, #3]\n    add r0, r5, #0\n    add r2, #0x55\n    bl ov49_02264C04\n    add r1, r0, #0\n    add r0, r5, #0\n    bl ov49_0225A08C\n    mov r0, #0x25\n    str r0, [sp]\n    add r0, r4, #0\n    mov r1, #0x80\n    mov r2, #0x1b\n    add r3, r6, #0\n    bl ov49_02264CFC\n    b _02263B5E\n    _02263858: .word 0x00000206\n    _0226385C: .word 0x000001FE\n    _02263860: .word 0x000005BF\n    _02263864: .word 0x00000207\n    _02263868: .word 0x000001DD\n    _0226386C: .word 0x00000165\n    add r0, r4, #0\n    add r0, #0x38\n    bl ov49_022652D0\n    cmp r0, #1\n    bne _022638A2\n    add r0, r4, #0\n    add r0, #0x38\n    bl ov49_022652E0\n    cmp r0, #2\n    bne _02263892\n    add r0, r6, #0\n    mov r1, #0x1c\n    bl ov49_0225EF8C\n    b _02263B5E\n    add r0, r6, #0\n    mov r1, #0x20\n    bl ov49_0225EF8C\n    add r0, r5, #0\n    bl ov49_0225A0CC\n    b _02263B5E\n    add r0, r5, #0\n    bl ov49_0225A0DC\n    cmp r0, #0\n    beq _022638AE\n    b _02263B5E\n    add r0, r5, #0\n    bl ov49_0225A0BC\n    b _02263B5E\n    ldr r0, [sp, #0x20]\n    cmp r0, #4\n    bhi _02263904\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _022638C8: ; jump table\n    ldr r1, [sp, #0x14]\n    add r0, r4, #0\n    bl ov49_02264F78\n    add r0, r6, #0\n    mov r1, #0x1d\n    bl ov49_0225EF8C\n    add r0, r5, #0\n    bl ov49_0225A0CC\n    b _02263B5E\n    add r0, r5, #0\n    bl ov49_0225A0DC\n    cmp r0, #0\n    bne _022638FA\n    add r0, r5, #0\n    bl ov49_0225A0BC\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov49_02264EC8\n    b _02263B5E\n    add r0, r6, #0\n    mov r1, #0x20\n    bl ov49_0225EF8C\n    add r0, r5, #0\n    bl ov49_0225A0CC\n    b _02263B5E\n    ldr r0, [sp, #0x1c]\n    sub r0, r0, #6\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp, #0x10]\n    ldr r0, [sp, #0x1c]\n    cmp r0, #0x7e\n    bhs _02263928\n    cmp r0, #6\n    bhs _02263932\n    add r0, r6, #0\n    mov r1, #0x23\n    bl ov49_0225EF8C\n    b _02263B5E\n    ldrb r1, [r4, #3]\n    add r0, r5, #0\n    mov r2, #0\n    bl ov49_0225A334\n    ldr r2, [sp, #0x10]\n    ldrb r1, [r4, #3]\n    add r0, r5, #0\n    add r2, #0xec\n    bl ov49_02264C04\n    add r1, r0, #0\n    add r0, r5, #0\n    bl ov49_0225A08C\n    ldrb r1, [r4, #1]\n    ldr r0, [sp, #0x10]\n    cmp r0, r1\n    bne _0226396A\n    mov r0, #0x25\n    str r0, [sp]\n    add r0, r4, #0\n    mov r1, #0x80\n    mov r2, #0x1e\n    add r3, r6, #0\n    bl ov49_02264CFC\n    b _02263B5E\n    mov r0, #0x25\n    str r0, [sp]\n    add r0, r4, #0\n    mov r1, #0x80\n    mov r2, #0x1f\n    add r3, r6, #0\n    bl ov49_02264CFC\n    b _02263B5E\n    ldrb r1, [r4, #3]\n    add r0, r5, #0\n    mov r2, #0\n    bl ov49_0225A334\n    ldrb r1, [r4, #3]\n    add r0, r5, #0\n    mov r2, #0x33\n    bl ov49_02264C04\n    add r1, r0, #0\n    add r0, r5, #0\n    bl ov49_0225A08C\n    mov r0, #0x25\n    str r0, [sp]\n    add r0, r4, #0\n    mov r1, #0x80\n    mov r2, #0xa\n    add r3, r6, #0\n    bl ov49_02264CFC\n    b _02263B5E\n    ldrb r1, [r4, #3]\n    add r0, r5, #0\n    mov r2, #0\n    bl ov49_0225A334\n    ldrb r1, [r4, #3]\n    add r0, r5, #0\n    mov r2, #0x32\n    bl ov49_02264C04\n    add r1, r0, #0\n    add r0, r5, #0\n    bl ov49_0225A08C\n    mov r0, #0x25\n    str r0, [sp]\n    add r0, r4, #0\n    mov r1, #0x80\n    mov r2, #0xa\n    add r3, r6, #0\n    bl ov49_02264CFC\n    b _02263B5E\n    mov r1, #0\n    add r0, r5, #0\n    add r2, r1, #0\n    bl ov49_0225A1E4\n    add r0, r4, #0\n    add r0, #0x14\n    add r1, r5, #0\n    bl ov49_02265260\n    ldrb r1, [r4, #3]\n    add r0, r5, #0\n    mov r2, #0x2d\n    bl ov49_02264C04\n    str r0, [sp, #0x4c]\n    ldr r1, [sp, #0x4c]\n    add r0, r5, #0\n    bl ov49_0225A08C\n    mov r0, #0\n    strh r0, [r4, #0xa]\n    ldr r0, [sp, #0x4c]\n    bl String_GetLength\n    str r0, [sp, #0x50]\n    add r0, r5, #0\n    bl ov49_0225CB70\n    ldr r1, [sp, #0x50]\n    mul r0, r1\n    lsr r1, r0, #1\n    add r1, #0x3c\n    cmp r1, #0x80\n    bhs _02263A22\n    mov r1, #0x80\n    b _02263A28\n    cmp r1, #0xff\n    bls _02263A28\n    mov r1, #0xff\n    mov r0, #0x24\n    lsl r1, r1, #0x18\n    str r0, [sp]\n    add r0, r4, #0\n    lsr r1, r1, #0x18\n    mov r2, #0x26\n    add r3, r6, #0\n    bl ov49_02264CFC\n    add r0, r7, #0\n    bl ov45_0222AFC4\n    b _02263B5E\n    ldrb r1, [r4, #3]\n    add r0, r5, #0\n    mov r2, #0\n    bl ov49_0225A334\n    ldrb r1, [r4, #3]\n    add r0, r5, #0\n    mov r2, #0x2b\n    bl ov49_02264C04\n    add r1, r0, #0\n    add r0, r5, #0\n    bl ov49_0225A08C\n    mov r0, #0\n    strh r0, [r4, #0xa]\n    mov r0, #0x24\n    str r0, [sp]\n    add r0, r4, #0\n    mov r1, #0x80\n    mov r2, #0x26\n    add r3, r6, #0\n    bl ov49_02264CFC\n    b _02263B5E\n    ldrb r1, [r4, #3]\n    add r0, r5, #0\n    mov r2, #0x2a\n    bl ov49_02264C04\n    add r1, r0, #0\n    add r0, r5, #0\n    bl ov49_0225A08C\n    mov r0, #0\n    strh r0, [r4, #0xa]\n    mov r0, #0x24\n    str r0, [sp]\n    add r0, r4, #0\n    mov r1, #0x80\n    mov r2, #0x26\n    add r3, r6, #0\n    bl ov49_02264CFC\n    b _02263B5E\n    ldrb r1, [r4, #3]\n    add r0, r5, #0\n    mov r2, #0\n    bl ov49_0225A334\n    mov r2, #0x59\n    ldrb r1, [r4, #3]\n    add r0, r5, #0\n    lsl r2, r2, #2\n    bl ov49_02264C04\n    add r1, r0, #0\n    add r0, r5, #0\n    bl ov49_0225A08C\n    mov r0, #0\n    strh r0, [r4, #0xa]\n    mov r0, #0x24\n    str r0, [sp]\n    add r0, r4, #0\n    mov r1, #0x80\n    mov r2, #0x26\n    add r3, r6, #0\n    bl ov49_02264CFC\n    b _02263B5E\n    add r0, r4, #0\n    add r1, r6, #0\n    bl ov49_02264D14\n    b _02263B5E\n    add r0, r4, #0\n    add r1, r6, #0\n    add r2, r5, #0\n    bl ov49_02264D30\n    b _02263B5E\n    add r0, r4, #0\n    add r0, #0x44\n    ldrh r0, [r0]\n    cmp r0, #1\n    bne _02263AFE\n    add r1, r4, #0\n    add r1, #0x46\n    ldrh r1, [r1]\n    ldr r2, [r4, #0x48]\n    add r0, r7, #0\n    bl ov45_0222A704\n    add r0, r7, #0\n    bl ov45_0222AE64\n    add r0, r5, #0\n    bl ov49_0225A0EC\n    add r0, r7, #0\n    mov r1, #1\n    bl ov45_0222A5E8\n    add r0, r5, #0\n    bl ov49_02259FF0\n    add r7, r0, #0\n    bl ov49_02258DAC\n    add r1, r0, #0\n    add r0, r7, #0\n    mov r2, #1\n    bl ov49_02258EEC\n    ldr r0, [r4, #0x10]\n    cmp r0, #0\n    beq _02263B4C\n    mov r1, #1\n    bl ov49_02259130\n    ldr r0, [r4, #0x10]\n    mov r1, #4\n    bl ov49_02258E60\n    add r1, r0, #0\n    ldr r0, [sp, #0x24]\n    mov r2, #1\n    bl ov49_0225EFF0\n    add r0, r5, #0\n    bl ov49_0225A4D0\n    add r0, r4, #0\n    bl ov49_02264CF8\n    add r0, r6, #0\n    bl ov49_0225EF68\n    add sp, #0x54\n    mov r0, #1\n    pop {r4, r5, r6, r7, pc}\n    add r0, r4, #0\n    bl ov49_02264F60\n    add r4, #0x38\n    add r0, r4, #0\n    add r1, r7, #0\n    bl ov49_0226529C\n    mov r0, #0\n    add sp, #0x54\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov49_02263B74(void) {
    /* Original at 0x02263B74 */
    /* Requires manual decompilation - 957 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x28\n    add r5, r1, #0\n    add r6, r0, #0\n    add r0, r5, #0\n    bl ov49_02259FE8\n    add r7, r0, #0\n    add r0, r6, #0\n    bl ov49_0225EF84\n    add r4, r0, #0\n    add r0, r7, #0\n    bl ov45_0222B034\n    str r0, [sp, #0x14]\n    add r0, r7, #0\n    bl ov45_0222B040\n    str r0, [sp, #0x10]\n    add r0, r7, #0\n    bl ov45_0222B06C\n    cmp r0, #0\n    beq _02263BC2\n    cmp r4, #0\n    beq _02263BC2\n    ldrh r0, [r4, #0xa]\n    cmp r0, #1\n    bne _02263BC2\n    add r0, r6, #0\n    mov r1, #0x1a\n    bl ov49_0225EF8C\n    add r0, r5, #0\n    bl ov49_0225A0CC\n    mov r0, #0\n    strh r0, [r4, #0xa]\n    cmp r4, #0\n    beq _02263BD8\n    add r0, r7, #0\n    bl ov45_0222A5C0\n    str r0, [sp, #0xc]\n    ldrb r1, [r4, #3]\n    add r0, r7, #0\n    bl ov45_0222A578\n    str r0, [sp, #8]\n    add r0, r6, #0\n    bl ov49_0225EF88\n    cmp r0, #0\n    beq _02263C00\n    ldrh r0, [r4, #0xa]\n    cmp r0, #1\n    bne _02263C00\n    ldr r0, [sp, #8]\n    cmp r0, #0\n    bne _02263C00\n    add r0, r6, #0\n    mov r1, #0x1a\n    bl ov49_0225EF8C\n    add r0, r5, #0\n    bl ov49_0225A0CC\n    mov r0, #0\n    strh r0, [r4, #0xa]\n    add r0, r6, #0\n    bl ov49_0225EF88\n    cmp r0, #0x1f\n    bhi _02263CCA\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02263C16: ; jump table\n    add r0, r6, #0\n    mov r1, #0x50\n    bl ov49_0225EF40\n    add r4, r0, #0\n    mov r1, #0\n    add r0, #0x44\n    strh r1, [r0]\n    add r0, r4, #0\n    add r0, #0x46\n    strh r1, [r0]\n    add r0, r7, #0\n    str r1, [r4, #0x48]\n    bl ov45_0222B020\n    str r0, [sp, #0x18]\n    ldr r2, [sp, #0x18]\n    add r0, r4, #0\n    add r1, r7, #0\n    bl ov49_02264CA8\n    str r0, [sp, #0x1c]\n    ldr r0, _02263FC8 ; =0x000005E4\n    bl PlaySE\n    add r0, r7, #0\n    mov r1, #9\n    bl ov45_0222A5E8\n    ldr r0, [sp, #0x1c]\n    cmp r0, #1\n    bne _02263CB4\n    ldr r1, [sp, #0x18]\n    add r0, r5, #0\n    mov r2, #0\n    bl ov49_0225A428\n    ldr r1, [sp, #0x18]\n    add r0, r7, #0\n    bl ov45_0222B0E8\n    add r0, r6, #0\n    mov r1, #1\n    bl ov49_0225EF8C\n    bl _022644DA\n    add r0, r6, #0\n    mov r1, #0x1a\n    bl ov49_0225EF8C\n    bl _022644DA\n    add r0, r7, #0\n    bl ov45_0222B0B0\n    cmp r0, #0\n    bne _02263CCE\n    bl _022644DA\n    ldr r0, [sp, #8]\n    add r1, r7, #0\n    str r0, [sp]\n    ldr r0, [sp, #0xc]\n    add r2, r5, #0\n    str r0, [sp, #4]\n    ldrb r3, [r4, #5]\n    add r0, r4, #0\n    bl ov49_02264D4C\n    mov r0, #0x1e\n    str r0, [sp]\n    add r0, r4, #0\n    mov r1, #0x80\n    mov r2, #2\n    add r3, r6, #0\n    bl ov49_02264CFC\n    b _022644DA\n    add r0, r7, #0\n    bl ov45_0222B0F8\n    add r0, r7, #0\n    mov r1, #7\n    bl ov45_0222B118\n    ldr r0, [sp, #0xc]\n    add r1, r7, #0\n    str r0, [sp]\n    ldr r0, [sp, #8]\n    add r2, r5, #0\n    str r0, [sp, #4]\n    ldrb r3, [r4, #4]\n    add r0, r4, #0\n    bl ov49_02264D4C\n    mov r0, #0x1e\n    str r0, [sp]\n    add r0, r4, #0\n    mov r1, #0x80\n    mov r2, #3\n    add r3, r6, #0\n    bl ov49_02264CFC\n    b _022644DA\n    ldr r0, [sp, #0x14]\n    cmp r0, #4\n    bhi _02263D8A\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02263D3A: ; jump table\n    add r0, r5, #0\n    bl ov49_0225A0CC\n    add r0, r7, #0\n    mov r1, #0\n    bl ov45_0222AED8\n    add r0, r7, #0\n    bl ov45_0222B028\n    cmp r0, #0\n    beq _02263D66\n    add r0, r6, #0\n    mov r1, #4\n    bl ov49_0225EF8C\n    b _022644DA\n    add r0, r6, #0\n    mov r1, #6\n    bl ov49_0225EF8C\n    b _022644DA\n    add r0, r5, #0\n    bl ov49_0225A0DC\n    cmp r0, #0\n    bne _02263D80\n    add r0, r5, #0\n    bl ov49_0225A0BC\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov49_02264EC8\n    b _022644DA\n    add r0, r6, #0\n    mov r1, #0x1a\n    bl ov49_0225EF8C\n    add r0, r5, #0\n    bl ov49_0225A0CC\n    b _022644DA\n    add r0, r4, #0\n    add r1, r7, #0\n    add r2, r5, #0\n    bl ov49_02264E20\n    cmp r0, #1\n    bne _02263DBA\n    mov r0, #0x1e\n    str r0, [sp]\n    add r0, r4, #0\n    mov r1, #0x80\n    mov r2, #5\n    add r3, r6, #0\n    bl ov49_02264CFC\n    b _022644DA\n    add r0, r6, #0\n    mov r1, #5\n    bl ov49_0225EF8C\n    b _022644DA\n    ldrb r1, [r4, #3]\n    add r0, r5, #0\n    mov r2, #0\n    bl ov49_0225A334\n    ldrb r1, [r4, #3]\n    add r0, r5, #0\n    mov r2, #0x28\n    bl ov49_02264C04\n    add r1, r0, #0\n    add r0, r5, #0\n    bl ov49_0225A08C\n    mov r0, #0x1e\n    str r0, [sp]\n    add r0, r4, #0\n    mov r1, #0x80\n    mov r2, #7\n    add r3, r6, #0\n    bl ov49_02264CFC\n    b _022644DA\n    ldrb r1, [r4, #3]\n    add r0, r5, #0\n    mov r2, #0\n    bl ov49_0225A334\n    ldrh r1, [r4, #8]\n    add r0, r5, #0\n    mov r2, #1\n    bl ov49_0225A334\n    ldrb r1, [r4, #3]\n    ldrh r2, [r4, #8]\n    add r0, r5, #0\n    bl ov49_02264C50\n    add r1, r0, #0\n    add r0, r5, #0\n    bl ov49_0225A08C\n    mov r0, #0x1e\n    str r0, [sp]\n    add r0, r4, #0\n    mov r1, #0x80\n    mov r2, #7\n    add r3, r6, #0\n    bl ov49_02264CFC\n    b _022644DA\n    ldrb r1, [r4, #3]\n    add r0, r5, #0\n    mov r2, #0\n    bl ov49_0225A334\n    ldrb r1, [r4, #3]\n    add r0, r5, #0\n    mov r2, #0x2f\n    bl ov49_02264C04\n    add r1, r0, #0\n    add r0, r5, #0\n    bl ov49_0225A08C\n    mov r0, #0x1e\n    str r0, [sp]\n    add r0, r4, #0\n    mov r1, #0x80\n    mov r2, #9\n    add r3, r6, #0\n    bl ov49_02264CFC\n    b _022644DA\n    ldrb r1, [r4, #3]\n    add r0, r5, #0\n    mov r2, #0\n    bl ov49_0225A334\n    ldrb r1, [r4, #3]\n    add r0, r5, #0\n    mov r2, #0x35\n    bl ov49_02264C04\n    add r1, r0, #0\n    add r0, r5, #0\n    bl ov49_0225A08C\n    mov r0, #0x1e\n    str r0, [sp]\n    add r0, r4, #0\n    mov r1, #0x80\n    mov r2, #9\n    add r3, r6, #0\n    bl ov49_02264CFC\n    b _022644DA\n    ldr r0, [sp, #0x14]\n    cmp r0, #4\n    bhi _02263F3C\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02263E98: ; jump table\n    ldr r0, [sp, #0x10]\n    cmp r0, #3\n    beq _02263EB2\n    cmp r0, #4\n    beq _02263ECE\n    cmp r0, #5\n    beq _02263EEA\n    b _02263EFC\n    add r0, r6, #0\n    mov r1, #0xa\n    bl ov49_0225EF8C\n    add r0, r7, #0\n    bl ov45_0222B0BC\n    mov r0, #1\n    str r0, [r4, #0x4c]\n    ldr r1, [sp, #8]\n    add r0, r4, #0\n    bl ov49_02264F78\n    b _02263F0A\n    add r0, r6, #0\n    mov r1, #0xe\n    bl ov49_0225EF8C\n    add r0, r7, #0\n    bl ov45_0222B0BC\n    mov r0, #1\n    str r0, [r4, #0x4c]\n    ldr r1, [sp, #8]\n    add r0, r4, #0\n    bl ov49_02264F78\n    b _02263F0A\n    add r0, r7, #0\n    mov r1, #1\n    bl ov45_0222AED8\n    add r0, r6, #0\n    mov r1, #0xf\n    bl ov49_0225EF8C\n    b _02263F0A\n    add r0, r6, #0\n    mov r1, #0x1a\n    bl ov49_0225EF8C\n    add r0, r5, #0\n    bl ov49_0225A0CC\n    add r0, r5, #0\n    bl ov49_0225A0CC\n    b _022644DA\n    add r0, r5, #0\n    bl ov49_0225A0DC\n    cmp r0, #0\n    bne _02263F22\n    add r0, r5, #0\n    bl ov49_0225A0BC\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov49_02264EC8\n    b _022644DA\n    add r0, r6, #0\n    mov r1, #0x1b\n    bl ov49_0225EF8C\n    add r0, r5, #0\n    bl ov49_0225A0CC\n    b _022644DA\n    add r0, r6, #0\n    mov r1, #0x1a\n    bl ov49_0225EF8C\n    add r0, r5, #0\n    bl ov49_0225A0CC\n    b _022644DA\n    ldrb r1, [r4, #3]\n    add r0, r5, #0\n    mov r2, #0\n    bl ov49_0225A334\n    mov r3, #1\n    str r3, [sp]\n    add r0, r4, #0\n    add r1, r7, #0\n    add r2, r5, #0\n    bl ov49_02264E90\n    ldrb r1, [r4, #3]\n    ldr r2, _02263FCC ; =0x000001FF\n    add r0, r5, #0\n    bl ov49_02264C04\n    add r1, r0, #0\n    add r0, r5, #0\n    bl ov49_0225A08C\n    mov r0, #0x1e\n    str r0, [sp]\n    add r0, r4, #0\n    mov r1, #0x80\n    mov r2, #0xb\n    add r3, r6, #0\n    bl ov49_02264CFC\n    b _022644DA\n    ldrb r1, [r4, #3]\n    add r0, r5, #0\n    mov r2, #0\n    bl ov49_0225A334\n    mov r3, #1\n    str r3, [sp]\n    add r0, r4, #0\n    add r1, r7, #0\n    add r2, r5, #0\n    bl ov49_02264E90\n    mov r2, #2\n    ldrb r1, [r4, #3]\n    add r0, r5, #0\n    lsl r2, r2, #8\n    bl ov49_02264C04\n    add r1, r0, #0\n    add r0, r5, #0\n    bl ov49_0225A08C\n    mov r0, #0x1e\n    str r0, [sp]\n    add r0, r4, #0\n    mov r1, #0x80\n    mov r2, #0xc\n    add r3, r6, #0\n    bl ov49_02264CFC\n    b _022644DA\n    nop\n    _02263FC8: .word 0x000005E4\n    _02263FCC: .word 0x000001FF\n    ldrb r1, [r4, #3]\n    add r0, r5, #0\n    mov r2, #0\n    bl ov49_0225A334\n    mov r3, #1\n    str r3, [sp]\n    add r0, r4, #0\n    add r1, r7, #0\n    add r2, r5, #0\n    bl ov49_02264E90\n    ldrb r1, [r4, #3]\n    ldr r2, _02264348 ; =0x00000201\n    add r0, r5, #0\n    bl ov49_02264C04\n    add r1, r0, #0\n    add r0, r5, #0\n    bl ov49_0225A08C\n    mov r0, #0x1e\n    str r0, [sp]\n    add r0, r4, #0\n    mov r1, #0x80\n    mov r2, #0xd\n    add r3, r6, #0\n    bl ov49_02264CFC\n    b _022644DA\n    ldr r0, _0226434C ; =0x000005BF\n    bl PlaySE\n    ldrb r1, [r4, #3]\n    add r0, r5, #0\n    mov r2, #0\n    bl ov49_0225A334\n    ldrb r1, [r4, #3]\n    ldr r2, _02264350 ; =0x00000202\n    add r0, r5, #0\n    bl ov49_02264C04\n    add r1, r0, #0\n    add r0, r5, #0\n    bl ov49_0225A08C\n    mov r0, #0x1e\n    str r0, [sp]\n    add r0, r4, #0\n    mov r1, #0x80\n    mov r2, #8\n    add r3, r6, #0\n    bl ov49_02264CFC\n    add r0, r7, #0\n    mov r1, #2\n    bl ov45_0222AED8\n    add r0, r7, #0\n    bl ov45_0222A5C0\n    bl ov45_0222AAC8\n    add r1, r0, #0\n    add r0, r5, #0\n    bl ov49_0225A478\n    b _022644DA\n    ldrb r1, [r4, #3]\n    add r0, r5, #0\n    mov r2, #0\n    bl ov49_0225A334\n    mov r3, #1\n    str r3, [sp]\n    add r0, r4, #0\n    add r1, r7, #0\n    add r2, r5, #0\n    bl ov49_02264E90\n    ldrb r1, [r4, #3]\n    ldr r2, _02264354 ; =0x000001FB\n    add r0, r5, #0\n    bl ov49_02264C04\n    add r1, r0, #0\n    add r0, r5, #0\n    bl ov49_0225A08C\n    mov r0, #0x1e\n    str r0, [sp]\n    add r0, r4, #0\n    mov r1, #0x80\n    mov r2, #0x1b\n    add r3, r6, #0\n    bl ov49_02264CFC\n    add r0, r7, #0\n    mov r1, #2\n    bl ov45_0222AED8\n    b _022644DA\n    ldrb r1, [r4, #3]\n    add r0, r5, #0\n    mov r2, #0\n    bl ov49_0225A334\n    ldrb r1, [r4, #3]\n    ldr r2, _02264358 ; =0x000002AF\n    add r0, r5, #0\n    bl ov49_02264C04\n    add r1, r0, #0\n    add r0, r5, #0\n    bl ov49_0225A08C\n    mov r0, #0x1e\n    str r0, [sp]\n    add r0, r4, #0\n    mov r1, #0x80\n    mov r2, #0x10\n    add r3, r6, #0\n    bl ov49_02264CFC\n    b _022644DA\n    ldr r0, [sp, #0x14]\n    cmp r0, #4\n    bhi _0226411C\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _022640DE: ; jump table\n    add r0, r6, #0\n    mov r1, #0x11\n    bl ov49_0225EF8C\n    add r0, r5, #0\n    bl ov49_0225A0CC\n    add r0, r7, #0\n    bl ov45_0222B0BC\n    mov r0, #1\n    str r0, [r4, #0x4c]\n    b _022644DA\n    add r0, r5, #0\n    bl ov49_0225A0DC\n    cmp r0, #0\n    bne _02264112\n    add r0, r5, #0\n    bl ov49_0225A0BC\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov49_02264EC8\n    b _022644DA\n    add r0, r6, #0\n    mov r1, #0x1a\n    bl ov49_0225EF8C\n    add r0, r5, #0\n    bl ov49_0225A0CC\n    b _022644DA\n    ldr r0, [sp, #0x10]\n    cmp r0, #6\n    blo _02264136\n    cmp r0, #0x7e\n    blo _02264140\n    add r0, r6, #0\n    mov r1, #0x1a\n    bl ov49_0225EF8C\n    b _022644DA\n    sub r0, r0, #6\n    strb r0, [r4, #2]\n    ldrb r0, [r4, #2]\n    mov r2, #0\n    lsr r0, r0, #2\n    strb r0, [r4]\n    ldrb r1, [r4, #3]\n    add r0, r5, #0\n    bl ov49_0225A334\n    ldrb r2, [r4]\n    ldrb r1, [r4, #3]\n    add r0, r5, #0\n    add r2, #0x37\n    bl ov49_02264C04\n    add r1, r0, #0\n    add r0, r5, #0\n    bl ov49_0225A08C\n    mov r0, #0x1e\n    str r0, [sp]\n    add r0, r4, #0\n    mov r1, #0x80\n    mov r2, #0x12\n    add r3, r6, #0\n    bl ov49_02264CFC\n    b _022644DA\n    ldrb r1, [r4, #3]\n    add r0, r5, #0\n    mov r2, #0\n    bl ov49_0225A334\n    ldrb r2, [r4]\n    ldrb r1, [r4, #3]\n    add r0, r5, #0\n    add r2, #0x55\n    bl ov49_02264C04\n    add r1, r0, #0\n    add r0, r5, #0\n    bl ov49_0225A08C\n    mov r0, #0x1e\n    str r0, [sp]\n    add r0, r4, #0\n    mov r1, #0x80\n    mov r2, #0x13\n    add r3, r6, #0\n    bl ov49_02264CFC\n    b _022644DA\n    ldrb r1, [r4, #3]\n    add r0, r5, #0\n    mov r2, #0\n    bl ov49_0225A334\n    ldrb r2, [r4, #2]\n    ldrb r1, [r4, #3]\n    add r0, r5, #0\n    add r2, #0xec\n    bl ov49_02264C04\n    add r1, r0, #0\n    add r0, r5, #0\n    bl ov49_0225A08C\n    mov r0, #0x1e\n    str r0, [sp]\n    add r0, r4, #0\n    mov r1, #0x80\n    mov r2, #0x14\n    add r3, r6, #0\n    bl ov49_02264CFC\n    b _022644DA\n    ldrb r1, [r4, #3]\n    add r0, r5, #0\n    mov r2, #0\n    bl ov49_0225A334\n    ldrb r3, [r4]\n    ldr r2, _0226435C ; =0x000001DD\n    ldrb r1, [r4, #3]\n    add r0, r5, #0\n    add r2, r3, r2\n    bl ov49_02264C04\n    add r1, r0, #0\n    add r0, r5, #0\n    bl ov49_0225A08C\n    mov r0, #0x1e\n    str r0, [sp]\n    add r0, r4, #0\n    mov r1, #0x80\n    mov r2, #0x15\n    add r3, r6, #0\n    bl ov49_02264CFC\n    b _022644DA\n    mov r0, #2\n    str r0, [sp]\n    ldrb r3, [r4]\n    add r0, r4, #0\n    add r0, #0x14\n    lsl r3, r3, #2\n    add r1, r5, #0\n    mov r2, #5\n    add r3, #0x73\n    bl ov49_02264F9C\n    add r1, r4, #0\n    mov r2, #0\n    add r0, r5, #0\n    add r1, #0x14\n    add r3, r2, #0\n    bl ov49_0225A174\n    add r0, r4, #0\n    bl ov49_02264F10\n    add r0, r6, #0\n    mov r1, #0x16\n    bl ov49_0225EF8C\n    b _022644DA\n    add r0, r5, #0\n    bl ov49_0225A1D4\n    cmp r0, #4\n    bhi _0226429A\n    add r1, r0, r0\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _02264256: ; jump table\n    ldrb r1, [r4]\n    lsl r1, r1, #2\n    add r0, r0, r1\n    strb r0, [r4, #1]\n    ldrb r1, [r4, #1]\n    add r0, r7, #0\n    add r1, r1, #6\n    lsl r1, r1, #0x10\n    lsr r1, r1, #0x10\n    bl ov45_0222AED8\n    add r0, r6, #0\n    mov r1, #0x17\n    bl ov49_0225EF8C\n    mov r0, #1\n    b _022642A4\n    mov r0, #0x7e\n    strb r0, [r4, #1]\n    ldrb r1, [r4, #1]\n    add r0, r7, #0\n    bl ov45_0222AED8\n    add r0, r6, #0\n    mov r1, #0x1c\n    bl ov49_0225EF8C\n    mov r0, #1\n    b _022642A4\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov49_02264F24\n    mov r0, #0\n    cmp r0, #0\n    bne _022642AA\n    b _022644DA\n    mov r1, #0\n    add r0, r5, #0\n    add r2, r1, #0\n    bl ov49_0225A1E4\n    add r0, r4, #0\n    add r0, #0x14\n    add r1, r5, #0\n    bl ov49_02265260\n    add r0, r4, #0\n    bl ov49_02264F1C\n    ldr r1, [sp, #8]\n    add r0, r4, #0\n    bl ov49_02264F78\n    b _022644DA\n    ldrb r1, [r4, #3]\n    add r0, r5, #0\n    mov r2, #0\n    bl ov49_0225A334\n    ldrb r3, [r4, #1]\n    ldr r2, _02264360 ; =0x00000165\n    ldrb r1, [r4, #3]\n    add r0, r5, #0\n    add r2, r3, r2\n    bl ov49_02264C04\n    add r1, r0, #0\n    add r0, r5, #0\n    bl ov49_0225A08C\n    ldrb r1, [r4, #2]\n    ldrb r0, [r4, #1]\n    cmp r1, r0\n    bne _02264308\n    mov r0, #0x1e\n    str r0, [sp]\n    add r0, r4, #0\n    mov r1, #0x80\n    mov r2, #0x18\n    add r3, r6, #0\n    bl ov49_02264CFC\n    b _022644DA\n    mov r0, #0x1e\n    str r0, [sp]\n    add r0, r4, #0\n    mov r1, #0x80\n    mov r2, #0x19\n    add r3, r6, #0\n    bl ov49_02264CFC\n    b _022644DA\n    ldrb r1, [r4, #3]\n    add r0, r5, #0\n    mov r2, #0\n    bl ov49_0225A334\n    ldrb r1, [r4, #3]\n    add r0, r5, #0\n    mov r2, #0x33\n    bl ov49_02264C04\n    add r1, r0, #0\n    add r0, r5, #0\n    bl ov49_0225A08C\n    mov r0, #0x1e\n    str r0, [sp]\n    add r0, r4, #0\n    mov r1, #0x80\n    mov r2, #0x19\n    add r3, r6, #0\n    bl ov49_02264CFC\n    b _022644DA\n    _02264348: .word 0x00000201\n    _0226434C: .word 0x000005BF\n    _02264350: .word 0x00000202\n    _02264354: .word 0x000001FB\n    _02264358: .word 0x000002AF\n    _0226435C: .word 0x000001DD\n    _02264360: .word 0x00000165\n    ldrb r1, [r4, #3]\n    add r0, r5, #0\n    mov r2, #0\n    bl ov49_0225A334\n    ldrb r1, [r4, #3]\n    add r0, r5, #0\n    mov r2, #0x34\n    bl ov49_02264C04\n    add r1, r0, #0\n    add r0, r5, #0\n    bl ov49_0225A08C\n    mov r0, #0x1e\n    str r0, [sp]\n    add r0, r4, #0\n    mov r1, #0x80\n    mov r2, #8\n    add r3, r6, #0\n    bl ov49_02264CFC\n    b _022644DA\n    mov r1, #0\n    add r0, r5, #0\n    add r2, r1, #0\n    bl ov49_0225A1E4\n    add r0, r4, #0\n    add r0, #0x14\n    add r1, r5, #0\n    bl ov49_02265260\n    ldrb r1, [r4, #3]\n    add r0, r5, #0\n    mov r2, #0x2d\n    bl ov49_02264C04\n    str r0, [sp, #0x20]\n    ldr r1, [sp, #0x20]\n    add r0, r5, #0\n    bl ov49_0225A08C\n    mov r0, #0\n    strh r0, [r4, #0xa]\n    ldr r0, [sp, #0x20]\n    bl String_GetLength\n    str r0, [sp, #0x24]\n    add r0, r5, #0\n    bl ov49_0225CB70\n    ldr r1, [sp, #0x24]\n    mul r0, r1\n    lsr r1, r0, #1\n    add r1, #0x3c\n    cmp r1, #0x80\n    bhs _022643DC\n    mov r1, #0x80\n    b _022643E2\n    cmp r1, #0xff\n    bls _022643E2\n    mov r1, #0xff\n    mov r0, #0x1d\n    lsl r1, r1, #0x18\n    str r0, [sp]\n    add r0, r4, #0\n    lsr r1, r1, #0x18\n    mov r2, #0x1f\n    add r3, r6, #0\n    bl ov49_02264CFC\n    add r0, r7, #0\n    bl ov45_0222AFC4\n    b _022644DA\n    ldrb r1, [r4, #3]\n    add r0, r5, #0\n    mov r2, #0\n    bl ov49_0225A334\n    ldrb r1, [r4, #3]\n    add r0, r5, #0\n    mov r2, #0x2b\n    bl ov49_02264C04\n    add r1, r0, #0\n    add r0, r5, #0\n    bl ov49_0225A08C\n    mov r0, #0\n    strh r0, [r4, #0xa]\n    mov r0, #0x1d\n    str r0, [sp]\n    add r0, r4, #0\n    mov r1, #0x80\n    mov r2, #0x1f\n    add r3, r6, #0\n    bl ov49_02264CFC\n    b _022644DA\n    ldrb r1, [r4, #3]\n    add r0, r5, #0\n    mov r2, #0\n    bl ov49_0225A334\n    ldrb r1, [r4, #3]\n    add r0, r5, #0\n    mov r2, #0x31\n    bl ov49_02264C04\n    add r1, r0, #0\n    add r0, r5, #0\n    bl ov49_0225A08C\n    mov r0, #0x1e\n    str r0, [sp]\n    add r0, r4, #0\n    mov r1, #0x80\n    mov r2, #0x1b\n    add r3, r6, #0\n    bl ov49_02264CFC\n    b _022644DA\n    add r0, r4, #0\n    add r1, r6, #0\n    bl ov49_02264D14\n    b _022644DA\n    add r0, r4, #0\n    add r1, r6, #0\n    add r2, r5, #0\n    bl ov49_02264D30\n    b _022644DA\n    add r0, r4, #0\n    add r0, #0x44\n    ldrh r0, [r0]\n    cmp r0, #1\n    bne _0226448A\n    add r1, r4, #0\n    add r1, #0x46\n    ldrh r1, [r1]\n    ldr r2, [r4, #0x48]\n    add r0, r7, #0\n    bl ov45_0222A704\n    ldr r0, [r4, #0x4c]\n    cmp r0, #0\n    bne _02264498\n    ldrb r1, [r4, #3]\n    add r0, r7, #0\n    bl ov45_0222B0D8\n    add r0, r7, #0\n    bl ov45_0222AE64\n    add r0, r5, #0\n    bl ov49_0225A0EC\n    add r0, r4, #0\n    bl ov49_02264CF8\n    add r0, r6, #0\n    bl ov49_0225EF68\n    add r0, r7, #0\n    mov r1, #1\n    bl ov45_0222A5E8\n    add r0, r5, #0\n    bl ov49_02259FF0\n    add r4, r0, #0\n    bl ov49_02258DAC\n    add r1, r0, #0\n    add r0, r4, #0\n    mov r2, #1\n    bl ov49_02258EEC\n    add r0, r5, #0\n    bl ov49_0225A4D0\n    add sp, #0x28\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r4, #0\n    bl ov49_02264F60\n    mov r0, #0\n    add sp, #0x28\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov49_022644E8(void) {
    /* Original at 0x022644E8 */
    /* Requires manual decompilation - 502 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r4, r1, #0\n    add r6, r0, #0\n    bl ov49_0225EF84\n    add r5, r0, #0\n    add r0, r4, #0\n    bl ov49_02259FE8\n    add r7, r0, #0\n    add r0, r6, #0\n    bl ov49_0225EF88\n    cmp r0, #0x18\n    bls _0226450A\n    b _022649EA\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02264516: ; jump table\n    add r0, r6, #0\n    mov r1, #0x28\n    bl ov49_0225EF40\n    ldr r0, _02264894 ; =0x000005DC\n    bl PlaySE\n    add r0, r7, #0\n    bl ov45_0222A330\n    cmp r0, #1\n    bne _0226456A\n    add r0, r6, #0\n    mov r1, #2\n    bl ov49_0225EF8C\n    b _022649EA\n    add r0, r7, #0\n    bl ov45_0222A374\n    cmp r0, #1\n    bne _0226457E\n    add r0, r6, #0\n    mov r1, #1\n    bl ov49_0225EF8C\n    b _022649EA\n    add r0, r6, #0\n    mov r1, #3\n    bl ov49_0225EF8C\n    b _022649EA\n    add r0, r4, #0\n    mov r1, #1\n    mov r2, #0x4e\n    bl ov49_0225A30C\n    add r1, r0, #0\n    add r0, r4, #0\n    bl ov49_0225A08C\n    mov r0, #0x18\n    str r0, [r5]\n    add r0, r6, #0\n    mov r1, #0x17\n    bl ov49_0225EF8C\n    b _022649EA\n    add r0, r4, #0\n    mov r1, #1\n    mov r2, #3\n    bl ov49_0225A30C\n    add r1, r0, #0\n    add r0, r4, #0\n    bl ov49_0225A08C\n    mov r0, #0x18\n    str r0, [r5]\n    add r0, r6, #0\n    mov r1, #0x17\n    bl ov49_0225EF8C\n    b _022649EA\n    add r0, r4, #0\n    mov r1, #1\n    mov r2, #0xf\n    bl ov49_0225A30C\n    add r1, r0, #0\n    add r0, r4, #0\n    bl ov49_0225A08C\n    mov r0, #4\n    str r0, [r5]\n    add r0, r6, #0\n    mov r1, #0x17\n    bl ov49_0225EF8C\n    b _022649EA\n    add r0, r4, #0\n    mov r1, #1\n    mov r2, #0x10\n    bl ov49_0225A30C\n    add r1, r0, #0\n    add r0, r4, #0\n    bl ov49_0225A08C\n    mov r0, #5\n    str r0, [r5]\n    add r0, r6, #0\n    mov r1, #0x17\n    bl ov49_0225EF8C\n    b _022649EA\n    add r0, r5, #4\n    add r1, r4, #0\n    bl ov49_02265110\n    mov r0, #0x10\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #0xf\n    mov r2, #0\n    str r0, [sp, #8]\n    add r0, r4, #0\n    add r1, r5, #4\n    add r3, r2, #0\n    bl ov49_0225A1A4\n    add r0, r6, #0\n    mov r1, #6\n    bl ov49_0225EF8C\n    b _022649EA\n    add r0, r4, #0\n    mov r7, #0\n    bl ov49_0225A1D4\n    cmp r0, #7\n    bhi _0226465A\n    add r1, r0, r0\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _0226464A: ; jump table\n    mov r1, #1\n    mvn r1, r1\n    cmp r0, r1\n    beq _022646B8\n    b _022646C8\n    add r0, r6, #0\n    mov r1, #7\n    bl ov49_0225EF8C\n    mov r7, #1\n    b _022646C8\n    add r0, r6, #0\n    mov r1, #8\n    bl ov49_0225EF8C\n    mov r7, #1\n    b _022646C8\n    add r0, r6, #0\n    mov r1, #0xd\n    bl ov49_0225EF8C\n    mov r7, #1\n    b _022646C8\n    add r0, r6, #0\n    mov r1, #0xe\n    bl ov49_0225EF8C\n    mov r7, #1\n    b _022646C8\n    add r0, r6, #0\n    mov r1, #0xf\n    bl ov49_0225EF8C\n    mov r7, #1\n    b _022646C8\n    add r0, r6, #0\n    mov r1, #0x15\n    bl ov49_0225EF8C\n    mov r7, #1\n    b _022646C8\n    add r0, r6, #0\n    mov r1, #0x10\n    bl ov49_0225EF8C\n    mov r7, #1\n    b _022646C8\n    ldr r0, _02264894 ; =0x000005DC\n    bl PlaySE\n    add r0, r6, #0\n    mov r1, #0x16\n    bl ov49_0225EF8C\n    mov r7, #1\n    cmp r7, #1\n    bne _02264780\n    mov r1, #0\n    add r0, r4, #0\n    add r2, r1, #0\n    bl ov49_0225A1E4\n    add r0, r5, #4\n    add r1, r4, #0\n    bl ov49_02265260\n    b _022649EA\n    add r0, r4, #0\n    mov r1, #1\n    mov r2, #0x17\n    bl ov49_0225A30C\n    add r1, r0, #0\n    add r0, r4, #0\n    bl ov49_0225A08C\n    mov r0, #4\n    str r0, [r5]\n    add r0, r6, #0\n    mov r1, #0x17\n    bl ov49_0225EF8C\n    b _022649EA\n    add r0, r5, #4\n    add r1, r4, #0\n    bl ov49_022651E8\n    mov r2, #0\n    add r0, r4, #0\n    add r1, r5, #4\n    add r3, r2, #0\n    bl ov49_0225A174\n    add r0, r6, #0\n    mov r1, #9\n    bl ov49_0225EF8C\n    b _022649EA\n    add r0, r4, #0\n    mov r7, #0\n    bl ov49_0225A1D4\n    cmp r0, #3\n    bhi _0226473E\n    add r1, r0, r0\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _02264736: ; jump table\n    mov r1, #1\n    mvn r1, r1\n    cmp r0, r1\n    beq _0226476C\n    b _0226477C\n    add r0, r6, #0\n    mov r1, #0xa\n    bl ov49_0225EF8C\n    mov r7, #1\n    b _0226477C\n    add r0, r6, #0\n    mov r1, #0xb\n    bl ov49_0225EF8C\n    mov r7, #1\n    b _0226477C\n    add r0, r6, #0\n    mov r1, #0xc\n    bl ov49_0225EF8C\n    mov r7, #1\n    b _0226477C\n    ldr r0, _02264894 ; =0x000005DC\n    bl PlaySE\n    add r0, r6, #0\n    mov r1, #4\n    bl ov49_0225EF8C\n    mov r7, #1\n    cmp r7, #1\n    beq _02264782\n    b _022649EA\n    mov r1, #0\n    add r0, r4, #0\n    add r2, r1, #0\n    bl ov49_0225A1E4\n    add r0, r5, #4\n    add r1, r4, #0\n    bl ov49_02265260\n    b _022649EA\n    mov r1, #0\n    add r0, r4, #0\n    add r2, r1, #0\n    bl ov49_0225A37C\n    add r0, r4, #0\n    mov r1, #1\n    mov r2, #0x18\n    bl ov49_0225A30C\n    add r1, r0, #0\n    add r0, r4, #0\n    bl ov49_0225A08C\n    mov r0, #4\n    str r0, [r5]\n    add r0, r6, #0\n    mov r1, #0x17\n    bl ov49_0225EF8C\n    b _022649EA\n    add r0, r4, #0\n    mov r1, #1\n    mov r2, #0\n    bl ov49_0225A37C\n    add r0, r4, #0\n    mov r1, #1\n    mov r2, #0x19\n    bl ov49_0225A30C\n    add r1, r0, #0\n    add r0, r4, #0\n    bl ov49_0225A08C\n    mov r0, #4\n    str r0, [r5]\n    add r0, r6, #0\n    mov r1, #0x17\n    bl ov49_0225EF8C\n    b _022649EA\n    add r0, r4, #0\n    mov r1, #2\n    mov r2, #0\n    bl ov49_0225A37C\n    add r0, r4, #0\n    mov r1, #1\n    mov r2, #0x1a\n    bl ov49_0225A30C\n    add r1, r0, #0\n    add r0, r4, #0\n    bl ov49_0225A08C\n    mov r0, #4\n    str r0, [r5]\n    add r0, r6, #0\n    mov r1, #0x17\n    bl ov49_0225EF8C\n    b _022649EA\n    add r0, r4, #0\n    mov r1, #1\n    mov r2, #0x12\n    bl ov49_0225A30C\n    add r1, r0, #0\n    add r0, r4, #0\n    bl ov49_0225A08C\n    mov r0, #4\n    str r0, [r5]\n    add r0, r6, #0\n    mov r1, #0x17\n    bl ov49_0225EF8C\n    b _022649EA\n    add r0, r4, #0\n    mov r1, #1\n    mov r2, #0x13\n    bl ov49_0225A30C\n    add r1, r0, #0\n    add r0, r4, #0\n    bl ov49_0225A08C\n    mov r0, #4\n    str r0, [r5]\n    add r0, r6, #0\n    mov r1, #0x17\n    bl ov49_0225EF8C\n    b _022649EA\n    add r0, r4, #0\n    mov r1, #1\n    mov r2, #0x14\n    bl ov49_0225A30C\n    add r1, r0, #0\n    add r0, r4, #0\n    bl ov49_0225A08C\n    mov r0, #4\n    str r0, [r5]\n    add r0, r6, #0\n    mov r1, #0x17\n    bl ov49_0225EF8C\n    b _022649EA\n    add r0, r5, #4\n    add r1, r4, #0\n    bl ov49_02265170\n    mov r2, #0\n    add r0, r4, #0\n    add r1, r5, #4\n    add r3, r2, #0\n    bl ov49_0225A174\n    add r0, r6, #0\n    mov r1, #0x11\n    bl ov49_0225EF8C\n    b _022649EA\n    nop\n    _02264894: .word 0x000005DC\n    add r0, r4, #0\n    mov r7, #0\n    bl ov49_0225A1D4\n    cmp r0, #3\n    bhi _022648B8\n    add r1, r0, r0\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _022648B0: ; jump table\n    mov r1, #1\n    mvn r1, r1\n    cmp r0, r1\n    beq _022648E6\n    b _022648F6\n    add r0, r6, #0\n    mov r1, #0x12\n    bl ov49_0225EF8C\n    mov r7, #1\n    b _022648F6\n    add r0, r6, #0\n    mov r1, #0x13\n    bl ov49_0225EF8C\n    mov r7, #1\n    b _022648F6\n    add r0, r6, #0\n    mov r1, #0x14\n    bl ov49_0225EF8C\n    mov r7, #1\n    b _022648F6\n    ldr r0, _022649F0 ; =0x000005DC\n    bl PlaySE\n    add r0, r6, #0\n    mov r1, #4\n    bl ov49_0225EF8C\n    mov r7, #1\n    cmp r7, #1\n    bne _022649EA\n    mov r1, #0\n    add r0, r4, #0\n    add r2, r1, #0\n    bl ov49_0225A1E4\n    add r0, r5, #4\n    add r1, r4, #0\n    bl ov49_02265260\n    b _022649EA\n    add r0, r4, #0\n    mov r1, #1\n    mov r2, #0x1b\n    bl ov49_0225A30C\n    add r1, r0, #0\n    add r0, r4, #0\n    bl ov49_0225A08C\n    mov r0, #4\n    str r0, [r5]\n    add r0, r6, #0\n    mov r1, #0x17\n    bl ov49_0225EF8C\n    b _022649EA\n    add r0, r4, #0\n    mov r1, #1\n    mov r2, #0x1c\n    bl ov49_0225A30C\n    add r1, r0, #0\n    add r0, r4, #0\n    bl ov49_0225A08C\n    mov r0, #4\n    str r0, [r5]\n    add r0, r6, #0\n    mov r1, #0x17\n    bl ov49_0225EF8C\n    b _022649EA\n    add r0, r4, #0\n    mov r1, #1\n    mov r2, #0x1d\n    bl ov49_0225A30C\n    add r1, r0, #0\n    add r0, r4, #0\n    bl ov49_0225A08C\n    mov r0, #4\n    str r0, [r5]\n    add r0, r6, #0\n    mov r1, #0x17\n    bl ov49_0225EF8C\n    b _022649EA\n    add r0, r4, #0\n    mov r1, #1\n    mov r2, #0x1e\n    bl ov49_0225A30C\n    add r1, r0, #0\n    add r0, r4, #0\n    bl ov49_0225A08C\n    mov r0, #4\n    str r0, [r5]\n    add r0, r6, #0\n    mov r1, #0x17\n    bl ov49_0225EF8C\n    b _022649EA\n    add r0, r4, #0\n    mov r1, #1\n    mov r2, #0x16\n    bl ov49_0225A30C\n    add r1, r0, #0\n    add r0, r4, #0\n    bl ov49_0225A08C\n    mov r0, #0x18\n    str r0, [r5]\n    add r0, r6, #0\n    mov r1, #0x17\n    bl ov49_0225EF8C\n    b _022649EA\n    add r0, r4, #0\n    bl ov49_0225A0AC\n    cmp r0, #0\n    beq _022649EA\n    ldr r1, [r5]\n    add r0, r6, #0\n    bl ov49_0225EF8C\n    b _022649EA\n    add r0, r6, #0\n    bl ov49_0225EF68\n    add r0, r4, #0\n    bl ov49_0225A0EC\n    add r0, r4, #0\n    bl ov49_02259FF0\n    add r4, r0, #0\n    bl ov49_02258DAC\n    add r1, r0, #0\n    add r0, r4, #0\n    mov r2, #1\n    bl ov49_02258EEC\n    add sp, #0xc\n    mov r0, #1\n    pop {r4, r5, r6, r7, pc}\n    mov r0, #0\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    _022649F0: .word 0x000005DC"
    );
    #endif
}

void ov49_022649F4(void) {
    /* Original at 0x022649F4 */
    /* Requires manual decompilation - 164 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    bl ov49_0225EF84\n    add r0, r4, #0\n    bl ov49_02259FE8\n    add r6, r0, #0\n    add r0, r5, #0\n    bl ov49_0225EF88\n    cmp r0, #0\n    beq _02264A1E\n    cmp r0, #1\n    bne _02264A16\n    b _02264B56\n    cmp r0, #2\n    bne _02264A1C\n    b _02264B6A\n    b _02264B8A\n    ldr r0, _02264B90 ; =0x000005DC\n    bl PlaySE\n    add r0, r6, #0\n    bl ov45_0222A330\n    cmp r0, #0\n    bne _02264A54\n    add r0, r6, #0\n    bl ov45_0222A374\n    cmp r0, #1\n    bne _02264A70\n    add r0, r4, #0\n    mov r1, #1\n    mov r2, #0x4e\n    bl ov49_0225A30C\n    add r1, r0, #0\n    add r0, r4, #0\n    bl ov49_0225A08C\n    add r0, r5, #0\n    mov r1, #1\n    bl ov49_0225EF8C\n    b _02264B8A\n    add r0, r4, #0\n    mov r1, #1\n    mov r2, #3\n    bl ov49_0225A30C\n    add r1, r0, #0\n    add r0, r4, #0\n    bl ov49_0225A08C\n    add r0, r5, #0\n    mov r1, #1\n    bl ov49_0225EF8C\n    b _02264B8A\n    add r0, r6, #0\n    bl ov45_0222B134\n    cmp r0, #8\n    bhi _02264B3A\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02264A86: ; jump table\n    mov r1, #0\n    add r0, r4, #0\n    add r2, r1, #0\n    bl ov49_0225A37C\n    add r0, r4, #0\n    mov r1, #1\n    mov r2, #0x49\n    bl ov49_0225A30C\n    add r1, r0, #0\n    b _02264B46\n    add r0, r4, #0\n    mov r1, #1\n    mov r2, #0\n    bl ov49_0225A37C\n    add r0, r4, #0\n    mov r1, #1\n    mov r2, #0x49\n    bl ov49_0225A30C\n    add r1, r0, #0\n    b _02264B46\n    add r0, r4, #0\n    mov r1, #2\n    mov r2, #0\n    bl ov49_0225A37C\n    add r0, r4, #0\n    mov r1, #1\n    mov r2, #0x49\n    bl ov49_0225A30C\n    add r1, r0, #0\n    b _02264B46\n    add r0, r4, #0\n    mov r1, #5\n    mov r2, #0\n    bl ov49_0225A37C\n    add r0, r4, #0\n    mov r1, #1\n    mov r2, #0x4d\n    bl ov49_0225A30C\n    add r1, r0, #0\n    b _02264B46\n    add r0, r4, #0\n    mov r1, #6\n    mov r2, #0\n    bl ov49_0225A37C\n    add r0, r4, #0\n    mov r1, #1\n    mov r2, #0x4d\n    bl ov49_0225A30C\n    add r1, r0, #0\n    b _02264B46\n    add r0, r4, #0\n    mov r1, #1\n    mov r2, #0x4a\n    bl ov49_0225A30C\n    add r1, r0, #0\n    b _02264B46\n    add r0, r4, #0\n    mov r1, #1\n    mov r2, #0x4f\n    bl ov49_0225A30C\n    add r1, r0, #0\n    b _02264B46\n    add r0, r4, #0\n    mov r1, #1\n    mov r2, #0x4b\n    bl ov49_0225A30C\n    add r1, r0, #0\n    b _02264B46\n    add r0, r4, #0\n    mov r1, #1\n    mov r2, #0x4c\n    bl ov49_0225A30C\n    add r1, r0, #0\n    add r0, r4, #0\n    bl ov49_0225A08C\n    add r0, r5, #0\n    mov r1, #1\n    bl ov49_0225EF8C\n    b _02264B8A\n    add r0, r4, #0\n    bl ov49_0225A0AC\n    cmp r0, #0\n    beq _02264B8A\n    add r0, r5, #0\n    mov r1, #2\n    bl ov49_0225EF8C\n    b _02264B8A\n    add r0, r4, #0\n    bl ov49_0225A0EC\n    add r0, r4, #0\n    bl ov49_02259FF0\n    add r4, r0, #0\n    bl ov49_02258DAC\n    add r1, r0, #0\n    add r0, r4, #0\n    mov r2, #1\n    bl ov49_02258EEC\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    nop\n    _02264B90: .word 0x000005DC"
    );
    #endif
}

void ov49_02264B94(void) {
    /* Original at 0x02264B94 */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    sub sp, #8\n    bl ov45_0222A9C8\n    str r0, [sp]\n    str r0, [sp, #4]\n    add r0, sp, #0\n    ldrb r0, [r0, #4]\n    cmp r0, #0x18\n    bhi _02264BF8\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02264BB4: ; jump table\n    add sp, #8\n    mov r0, #0\n    pop {r3, pc}\n    add sp, #8\n    mov r0, #1\n    pop {r3, pc}\n    add sp, #8\n    mov r0, #2\n    pop {r3, pc}\n    bl GF_AssertFail\n    mov r0, #1\n    add sp, #8\n    pop {r3, pc}"
    );
    #endif
}

void ov49_02264C04(void) {
    /* Original at 0x02264C04 */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r1, #0\n    add r5, r0, #0\n    add r4, r2, #0\n    bl ov49_02259FE8\n    add r1, r6, #0\n    bl ov45_0222AB28\n    cmp r0, #1\n    bne _02264C36\n    ldr r3, _02264C44 ; =ov49_02269EC4\n    ldr r0, _02264C48 ; =0x00000163\n    mov r2, #0\n    ldrh r1, [r3]\n    cmp r4, r1\n    bne _02264C2E\n    ldr r0, _02264C4C ; =ov49_02269EC6\n    lsl r1, r2, #2\n    ldrh r4, [r0, r1]\n    b _02264C36\n    add r2, r2, #1\n    add r3, r3, #4\n    cmp r2, r0\n    blo _02264C20\n    add r0, r5, #0\n    mov r1, #3\n    add r2, r4, #0\n    bl ov49_0225A30C\n    pop {r4, r5, r6, pc}\n    nop\n    _02264C44: .word ov49_02269EC4\n    _02264C48: .word 0x00000163\n    _02264C4C: .word ov49_02269EC6"
    );
    #endif
}

void ov49_02264C50(void) {
    /* Original at 0x02264C50 */
    /* Requires manual decompilation - 37 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r1, #0\n    add r4, r0, #0\n    add r6, r2, #0\n    bl ov49_02259FE8\n    add r7, r0, #0\n    add r1, r5, #0\n    bl ov45_0222AB28\n    add r5, r0, #0\n    add r0, r7, #0\n    add r1, r6, #0\n    bl ov45_0222AB28\n    mov r2, #0x29\n    cmp r5, #1\n    bne _02264C7C\n    cmp r0, #1\n    bne _02264C7C\n    ldr r2, _02264C9C ; =0x000002AA\n    b _02264C92\n    cmp r5, #1\n    bne _02264C88\n    cmp r0, #0\n    bne _02264C88\n    ldr r2, _02264CA0 ; =0x00000226\n    b _02264C92\n    cmp r5, #0\n    bne _02264C92\n    cmp r0, #1\n    bne _02264C92\n    ldr r2, _02264CA4 ; =0x000002A9\n    add r0, r4, #0\n    mov r1, #3\n    bl ov49_0225A30C\n    pop {r3, r4, r5, r6, r7, pc}\n    _02264C9C: .word 0x000002AA\n    _02264CA0: .word 0x00000226\n    _02264CA4: .word 0x000002A9"
    );
    #endif
}

void ov49_02264CA8(void) {
    /* Original at 0x02264CA8 */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    mov r0, #0\n    add r6, r2, #0\n    mvn r0, r0\n    add r4, r1, #0\n    cmp r6, r0\n    bne _02264CBC\n    bl GF_AssertFail\n    strb r6, [r5, #3]\n    add r0, r4, #0\n    bl ov45_0222A53C\n    strh r0, [r5, #8]\n    mov r0, #1\n    strh r0, [r5, #0xa]\n    add r0, r4, #0\n    bl ov45_0222A5C0\n    add r6, r0, #0\n    ldrb r1, [r5, #3]\n    add r0, r4, #0\n    bl ov45_0222A578\n    add r4, r0, #0\n    bne _02264CE2\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    add r0, r6, #0\n    bl ov49_02264B94\n    strb r0, [r5, #4]\n    add r0, r4, #0\n    bl ov49_02264B94\n    strb r0, [r5, #5]\n    mov r0, #1\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov49_02264CF8(void) {
    /* Original at 0x02264CF8 */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void ov49_02264CFC(void) {
    /* Original at 0x02264CFC */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "strb r1, [r0, #6]\n    ldr r1, _02264D0C ; =0xFFFFFFF0\n    strb r2, [r0, #7]\n    add r0, r3, #0\n    add r1, sp\n    ldr r3, _02264D10 ; =ov49_0225EF8C\n    ldrb r1, [r1, #0x10]\n    bx r3\n    _02264D0C: .word 0xFFFFFFF0\n    _02264D10: .word ov49_0225EF8C"
    );
    #endif
}

void ov49_02264D14(void) {
    ov49_0225EF8C();
}

void ov49_02264D30(void) {
    /* Original at 0x02264D30 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r0, r2, #0\n    add r4, r1, #0\n    bl ov49_0225A0AC\n    cmp r0, #0\n    beq _02264D48\n    ldrb r1, [r5, #7]\n    add r0, r4, #0\n    bl ov49_0225EF8C\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov49_02264D4C(void) {
    /* Original at 0x02264D4C */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r2, #0\n    add r4, r3, #0\n    ldr r3, [sp, #0x10]\n    add r0, r5, #0\n    mov r1, #0\n    add r2, r4, #0\n    bl ov49_02264D9C\n    ldr r3, [sp, #0x14]\n    add r0, r5, #0\n    mov r1, #1\n    add r2, r4, #0\n    bl ov49_02264D9C\n    ldr r0, [sp, #0x10]\n    bl ov45_0222AA10\n    add r4, r0, #0\n    ldr r0, [sp, #0x14]\n    bl ov45_0222AA10\n    add r3, r0, #0\n    ldr r2, _02264D98 ; =ov49_02269E44\n    lsl r4, r4, #4\n    lsl r3, r3, #1\n    add r2, r2, r4\n    ldrh r2, [r3, r2]\n    add r0, r5, #0\n    mov r1, #3\n    bl ov49_0225A30C\n    add r1, r0, #0\n    add r0, r5, #0\n    bl ov49_0225A08C\n    pop {r3, r4, r5, pc}\n    nop\n    _02264D98: .word ov49_02269E44"
    );
    #endif
}

void ov49_02264D9C(void) {
    /* Original at 0x02264D9C */
    /* Requires manual decompilation - 50 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r0, #0\n    add r0, r3, #0\n    add r5, r1, #0\n    add r6, r2, #0\n    bl ov45_0222AA10\n    cmp r0, #7\n    bhi _02264E12\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02264DBA: ; jump table\n    add r0, r4, #0\n    add r1, r5, #0\n    add r2, r6, #0\n    bl ov49_0225A3AC\n    pop {r4, r5, r6, pc}\n    add r0, r4, #0\n    add r1, r5, #0\n    add r2, r6, #0\n    bl ov49_0225A3BC\n    pop {r4, r5, r6, pc}\n    add r0, r4, #0\n    add r1, r5, #0\n    add r2, r6, #0\n    bl ov49_0225A3CC\n    pop {r4, r5, r6, pc}\n    add r0, r4, #0\n    add r1, r5, #0\n    add r2, r6, #0\n    bl ov49_0225A3DC\n    pop {r4, r5, r6, pc}\n    add r0, r4, #0\n    add r1, r5, #0\n    add r2, r6, #0\n    bl ov49_0225A3EC\n    pop {r4, r5, r6, pc}\n    add r0, r4, #0\n    add r1, r5, #0\n    add r2, r6, #0\n    bl ov49_0225A3FC\n    pop {r4, r5, r6, pc}\n    add r0, r4, #0\n    add r1, r5, #0\n    add r2, r6, #0\n    bl ov49_0225A3BC\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov49_02264E20(void) {
    /* Original at 0x02264E20 */
    /* Requires manual decompilation - 50 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r1, #0\n    add r5, r0, #0\n    add r0, r6, #0\n    add r7, r2, #0\n    bl ov45_0222A5C0\n    str r0, [sp]\n    ldrb r1, [r5, #3]\n    add r0, r6, #0\n    bl ov45_0222A578\n    add r6, r0, #0\n    ldr r0, [sp]\n    bl ov45_0222AA28\n    cmp r0, #0\n    bne _02264E48\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r6, #0\n    bl ov45_0222AA28\n    cmp r0, #0\n    bne _02264E56\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldrb r1, [r5, #5]\n    ldrb r0, [r5, #4]\n    cmp r0, r1\n    beq _02264E8C\n    cmp r1, #0\n    beq _02264E6C\n    cmp r1, #1\n    beq _02264E70\n    cmp r1, #2\n    beq _02264E74\n    b _02264E76\n    mov r4, #0x27\n    b _02264E76\n    mov r4, #0x25\n    b _02264E76\n    mov r4, #0x26\n    add r0, r7, #0\n    mov r1, #3\n    add r2, r4, #0\n    bl ov49_0225A30C\n    add r1, r0, #0\n    add r0, r7, #0\n    bl ov49_0225A08C\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov49_02264E90(void) {
    /* Original at 0x02264E90 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    add r0, r4, #0\n    add r6, r2, #0\n    add r7, r3, #0\n    bl ov45_0222A5C0\n    str r0, [sp]\n    ldrb r1, [r5, #3]\n    add r0, r4, #0\n    bl ov45_0222A578\n    ldr r1, [sp, #0x18]\n    cmp r1, #0\n    bne _02264EB6\n    bl ov45_0222AAC8\n    b _02264EBC\n    ldr r0, [sp]\n    bl ov45_0222AAC8\n    add r1, r0, #0\n    add r0, r6, #0\n    add r2, r7, #0\n    bl ov49_0225A39C\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov49_02264EC8(void) {
    /* Original at 0x02264EC8 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    add r0, r4, #0\n    bl ov49_02259FE8\n    bl ov45_0222B094\n    ldr r1, _02264F0C ; =0x000001C2\n    cmp r0, r1\n    bne _02264F08\n    add r0, r4, #0\n    bl ov49_0225A0CC\n    ldrb r1, [r5, #3]\n    add r0, r4, #0\n    mov r2, #0\n    bl ov49_0225A334\n    mov r2, #0xab\n    ldrb r1, [r5, #3]\n    add r0, r4, #0\n    lsl r2, r2, #2\n    bl ov49_02264C04\n    add r1, r0, #0\n    add r0, r4, #0\n    bl ov49_0225A08C\n    add r0, r4, #0\n    bl ov49_0225A0BC\n    pop {r3, r4, r5, pc}\n    nop\n    _02264F0C: .word 0x000001C2"
    );
    #endif
}

void ov49_02264F10(void) {
    ((u16*)r0)[0xe] = 0;
    ((u8*)r0)[0xd] = 1;
}

void ov49_02264F1C(void) {
    ((u16*)r0)[0xe] = 0;
    ((u8*)r0)[0xd] = 0;
}

void ov49_02264F24(void) {
    /* Original at 0x02264F24 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldrb r0, [r5, #0xd]\n    add r4, r1, #0\n    cmp r0, #1\n    bne _02264F56\n    mov r0, #0xe\n    ldrsh r1, [r5, r0]\n    ldr r0, _02264F58 ; =0x000001C2\n    cmp r1, r0\n    bne _02264F56\n    ldrb r1, [r5, #3]\n    add r0, r4, #0\n    mov r2, #0\n    bl ov49_0225A334\n    ldrb r1, [r5, #3]\n    ldr r2, _02264F5C ; =0x000002AB\n    add r0, r4, #0\n    bl ov49_02264C04\n    add r1, r0, #0\n    add r0, r4, #0\n    bl ov49_0225A08C\n    pop {r3, r4, r5, pc}\n    _02264F58: .word 0x000001C2\n    _02264F5C: .word 0x000002AB"
    );
    #endif
}

void ov49_02264F60(void) {
    /* Original at 0x02264F60 */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "ldrb r1, [r0, #0xd]\n    cmp r1, #1\n    bne _02264F76\n    mov r1, #0xe\n    ldrsh r2, [r0, r1]\n    mov r1, #0xe1\n    lsl r1, r1, #2\n    cmp r2, r1\n    bgt _02264F76\n    add r1, r2, #1\n    strh r1, [r0, #0xe]\n    bx lr"
    );
    #endif
}

void ov49_02264F78(void) {
    ov45_0222A9A4(r1);
    ov45_0222A99C(r4, r5, 1);
    *((u32*)(r5 + 0x48)) = r0;
}

void ov49_02264F9C(void) {
    /* Original at 0x02264F9C */
    /* Requires manual decompilation - 76 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r5, r1, #0\n    add r7, r2, #0\n    str r0, [sp]\n    add r0, r5, #0\n    add r1, r7, #0\n    str r3, [sp, #4]\n    ldr r6, [sp, #0x20]\n    bl ov49_0225A10C\n    ldr r0, [sp]\n    mov r4, #0\n    str r7, [r0, #0x20]\n    cmp r7, #0\n    bls _02265006\n    sub r0, r7, #1\n    str r0, [sp, #8]\n    cmp r6, #0\n    beq _02264FEA\n    ldr r0, [sp, #8]\n    cmp r4, r0\n    bne _02264FEA\n    cmp r6, #1\n    bne _02264FDC\n    ldr r2, _0226503C ; =0x00000205\n    add r0, r5, #0\n    mov r1, #3\n    bl ov49_0225A30C\n    add r1, r0, #0\n    b _02264FF8\n    add r0, r5, #0\n    mov r1, #3\n    mov r2, #0xeb\n    bl ov49_0225A30C\n    add r1, r0, #0\n    b _02264FF8\n    ldr r2, [sp, #4]\n    add r0, r5, #0\n    mov r1, #3\n    add r2, r2, r4\n    bl ov49_0225A30C\n    add r1, r0, #0\n    add r0, r5, #0\n    add r2, r4, #0\n    bl ov49_0225A144\n    add r4, r4, #1\n    cmp r4, r7\n    blo _02264FC0\n    ldr r3, _02265040 ; =ov49_02269E24\n    ldr r2, [sp]\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldr r0, [sp]\n    ldr r1, [r0, #0x20]\n    strh r1, [r0, #0x10]\n    ldr r1, [r0, #0x20]\n    ldrh r0, [r0, #0x12]\n    cmp r0, r1\n    bls _0226502C\n    ldr r0, [sp]\n    strh r1, [r0, #0x12]\n    add r0, r5, #0\n    bl ov49_0225A154\n    ldr r1, [sp]\n    str r0, [r1]\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _0226503C: .word 0x00000205\n    _02265040: .word ov49_02269E24"
    );
    #endif
}

void ov49_02265044(void) {
    /* Original at 0x02265044 */
    /* Requires manual decompilation - 91 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    str r0, [sp]\n    ldr r0, [sp, #0x20]\n    add r5, r1, #0\n    str r0, [sp, #0x20]\n    ldr r0, [sp, #0x24]\n    str r3, [sp, #4]\n    str r0, [sp, #0x24]\n    add r0, r5, #0\n    add r1, r3, #0\n    add r4, r2, #0\n    bl ov49_0225A120\n    ldr r1, [sp, #4]\n    ldr r0, [sp]\n    mov r7, #0\n    str r1, [r0, #0x20]\n    add r0, r1, #0\n    beq _022650D4\n    sub r0, r0, #1\n    str r0, [sp, #8]\n    ldr r0, [sp, #0x24]\n    cmp r0, #0\n    beq _022650A0\n    ldr r0, [sp, #8]\n    cmp r7, r0\n    bne _022650A0\n    ldr r0, [sp, #0x24]\n    add r6, r4, #0\n    cmp r0, #1\n    bne _02265092\n    ldr r2, _02265108 ; =0x00000205\n    add r0, r5, #0\n    mov r1, #3\n    bl ov49_0225A30C\n    add r1, r0, #0\n    b _022650C4\n    add r0, r5, #0\n    mov r1, #3\n    mov r2, #0xeb\n    bl ov49_0225A30C\n    add r1, r0, #0\n    b _022650C4\n    bl MTRandom\n    add r1, r4, #0\n    bl _u32_div_f\n    add r0, r5, #0\n    add r6, r1, #0\n    bl ov49_0225A164\n    cmp r0, #1\n    beq _022650A0\n    ldr r2, [sp, #0x20]\n    add r0, r5, #0\n    mov r1, #3\n    add r2, r2, r6\n    bl ov49_0225A30C\n    add r1, r0, #0\n    add r0, r5, #0\n    add r2, r6, #0\n    bl ov49_0225A144\n    ldr r0, [sp, #4]\n    add r7, r7, #1\n    cmp r7, r0\n    blo _02265070\n    ldr r3, _0226510C ; =ov49_02269E24\n    ldr r2, [sp]\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldr r0, [sp]\n    ldr r1, [r0, #0x20]\n    strh r1, [r0, #0x10]\n    ldr r1, [r0, #0x20]\n    ldrh r0, [r0, #0x12]\n    cmp r0, r1\n    bls _022650FA\n    ldr r0, [sp]\n    strh r1, [r0, #0x12]\n    add r0, r5, #0\n    bl ov49_0225A154\n    ldr r1, [sp]\n    str r0, [r1]\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    _02265108: .word 0x00000205\n    _0226510C: .word ov49_02269E24"
    );
    #endif
}

void ov49_02265110(void) {
    /* Original at 0x02265110 */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r1, #0\n    add r7, r0, #0\n    add r0, r6, #0\n    mov r1, #8\n    bl ov49_0225A10C\n    mov r0, #8\n    ldr r5, _02265168 ; =ov49_02269E1C\n    str r0, [r7, #0x20]\n    mov r4, #0\n    ldrb r2, [r5]\n    add r0, r6, #0\n    mov r1, #1\n    bl ov49_0225A30C\n    add r1, r0, #0\n    add r0, r6, #0\n    add r2, r4, #0\n    bl ov49_0225A144\n    add r4, r4, #1\n    add r5, r5, #1\n    cmp r4, #8\n    blt _02265126\n    ldr r3, _0226516C ; =ov49_02269E24\n    add r2, r7, #0\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldr r0, [r7, #0x20]\n    strh r0, [r7, #0x10]\n    ldr r0, [r7, #0x20]\n    strh r0, [r7, #0x12]\n    add r0, r6, #0\n    bl ov49_0225A154\n    str r0, [r7]\n    pop {r3, r4, r5, r6, r7, pc}\n    _02265168: .word ov49_02269E1C\n    _0226516C: .word ov49_02269E24"
    );
    #endif
}

void ov49_02265170(void) {
    /* Original at 0x02265170 */
    /* Requires manual decompilation - 52 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r1, #0\n    add r6, r0, #0\n    add r0, r5, #0\n    mov r1, #4\n    bl ov49_0225A10C\n    mov r0, #4\n    mov r4, #0\n    str r0, [r6, #0x20]\n    add r7, r4, #0\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r7, #0\n    bl ov49_0225A38C\n    add r0, r5, #0\n    mov r1, #1\n    mov r2, #0x27\n    bl ov49_0225A30C\n    add r1, r0, #0\n    add r0, r5, #0\n    add r2, r4, #0\n    bl ov49_0225A144\n    add r4, r4, #1\n    cmp r4, #3\n    blt _02265186\n    add r0, r5, #0\n    mov r1, #1\n    mov r2, #0x25\n    bl ov49_0225A30C\n    add r1, r0, #0\n    add r0, r5, #0\n    mov r2, #3\n    bl ov49_0225A144\n    ldr r3, _022651E4 ; =ov49_02269E24\n    add r2, r6, #0\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldr r0, [r6, #0x20]\n    strh r0, [r6, #0x10]\n    ldr r0, [r6, #0x20]\n    strh r0, [r6, #0x12]\n    add r0, r5, #0\n    bl ov49_0225A154\n    str r0, [r6]\n    pop {r3, r4, r5, r6, r7, pc}\n    _022651E4: .word ov49_02269E24"
    );
    #endif
}

void ov49_022651E8(void) {
    /* Original at 0x022651E8 */
    /* Requires manual decompilation - 52 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r1, #0\n    add r6, r0, #0\n    add r0, r5, #0\n    mov r1, #4\n    bl ov49_0225A10C\n    mov r0, #4\n    mov r4, #0\n    str r0, [r6, #0x20]\n    add r7, r4, #0\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r7, #0\n    bl ov49_0225A37C\n    add r0, r5, #0\n    mov r1, #1\n    mov r2, #0x26\n    bl ov49_0225A30C\n    add r1, r0, #0\n    add r0, r5, #0\n    add r2, r4, #0\n    bl ov49_0225A144\n    add r4, r4, #1\n    cmp r4, #3\n    blt _022651FE\n    add r0, r5, #0\n    mov r1, #1\n    mov r2, #0x25\n    bl ov49_0225A30C\n    add r1, r0, #0\n    add r0, r5, #0\n    mov r2, #3\n    bl ov49_0225A144\n    ldr r3, _0226525C ; =ov49_02269E24\n    add r2, r6, #0\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldr r0, [r6, #0x20]\n    strh r0, [r6, #0x10]\n    ldr r0, [r6, #0x20]\n    strh r0, [r6, #0x12]\n    add r0, r5, #0\n    bl ov49_0225A154\n    str r0, [r6]\n    pop {r3, r4, r5, r6, r7, pc}\n    _0226525C: .word ov49_02269E24"
    );
    #endif
}

void ov49_02265260(void) {
    ov49_0225A134();
}

void ov49_0226526C(void) {
    *(u16*)r0 = 0;
}

void ov49_02265274(void) {
    /* Original at 0x02265274 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldrh r0, [r5]\n    add r7, r1, #0\n    add r4, r2, #0\n    add r6, r3, #0\n    cmp r0, #0\n    beq _02265288\n    bl GF_AssertFail\n    mov r0, #1\n    strh r0, [r5]\n    strh r4, [r5, #2]\n    add r0, r7, #0\n    strh r6, [r5, #4]\n    bl ov45_0222B034\n    strh r0, [r5, #6]\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov49_0226529C(void) {
    /* Original at 0x0226529C */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldrh r0, [r5]\n    add r4, r1, #0\n    cmp r0, #0\n    beq _022652CE\n    add r0, r4, #0\n    bl ov45_0222B034\n    str r0, [r5, #8]\n    ldrh r1, [r5, #4]\n    cmp r0, r1\n    bne _022652C4\n    ldrh r1, [r5, #2]\n    add r0, r4, #0\n    bl ov45_0222AED8\n    mov r0, #0\n    strh r0, [r5]\n    pop {r3, r4, r5, pc}\n    ldrh r1, [r5, #6]\n    cmp r0, r1\n    beq _022652CE\n    mov r0, #0\n    strh r0, [r5]\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov49_022652D0(void) {
    /* Original at 0x022652D0 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldrh r0, [r0]\n    cmp r0, #1\n    beq _022652DA\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void ov49_022652E0(void) {
    /* Original at 0x022652E0 */
    /* Requires manual decompilation - 4 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0, #8]\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    bx lr"
    );
    #endif
}

void ov49_022652E8(void) {
    /* Original at 0x022652E8 */
    /* Requires manual decompilation - 48 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r6, r0, #0\n    add r7, r1, #0\n    ldr r0, [sp, #0x20]\n    ldr r1, _02265354 ; =0x0001082C\n    str r2, [sp]\n    str r3, [sp, #4]\n    ldr r5, [sp, #0x24]\n    bl Heap_Alloc\n    ldr r2, _02265354 ; =0x0001082C\n    mov r1, #0\n    add r4, r0, #0\n    bl memset\n    ldr r0, [sp, #4]\n    str r6, [r4]\n    str r0, [r4, #4]\n    ldr r0, [sp]\n    ldr r1, [sp, #0x20]\n    str r0, [r4, #8]\n    mov r0, #0xd1\n    str r7, [r4, #0xc]\n    bl NARC_New\n    add r6, r0, #0\n    ldr r0, _02265358 ; =0x0001081C\n    add r1, r5, #0\n    add r0, r4, r0\n    mov r2, #4\n    bl HeapExp_FndInitAllocator\n    add r0, r4, #0\n    add r1, r6, #0\n    add r2, r5, #0\n    bl ov49_02265698\n    add r0, r4, #0\n    add r1, r6, #0\n    add r2, r5, #0\n    bl ov49_02265738\n    add r0, r4, #0\n    add r1, r6, #0\n    add r2, r5, #0\n    bl ov49_022657B4\n    add r0, r6, #0\n    bl NARC_Delete\n    add r0, r4, #0\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    _02265354: .word 0x0001082C\n    _02265358: .word 0x0001081C"
    );
    #endif
}

void ov49_0226535C(void) {
    ov49_0226571C();
    ov49_02265760(r4);
    ov49_02265858(r4);
    Heap_Free(r4);
}

void ov49_02265378(void) {
    /* Original at 0x02265378 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    add r5, r6, #0\n    mov r7, #0xd1\n    mov r4, #0\n    add r5, #0x10\n    lsl r7, r7, #4\n    add r0, r6, #0\n    add r1, r5, #0\n    bl ov49_022658E4\n    add r4, r4, #1\n    add r5, r5, r7\n    cmp r4, #0x14\n    blt _02265386\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov49_02265398(void) {
    /* Original at 0x02265398 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    ldr r0, [r6, #4]\n    bl ov49_02258DAC\n    add r5, r6, #0\n    mov r7, #0xd1\n    mov r4, #0\n    add r5, #0x10\n    lsl r7, r7, #4\n    add r0, r6, #0\n    add r1, r5, #0\n    bl ov49_02265920\n    add r4, r4, #1\n    add r5, r5, r7\n    cmp r4, #0x14\n    blt _022653AC\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov49_022653C0(void) {
    /* Original at 0x022653C0 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    add r6, r2, #0\n    cmp r4, #0x14\n    blo _022653D0\n    bl GF_AssertFail\n    ldr r0, [r5, #4]\n    add r1, r4, #0\n    bl ov49_02258D70\n    add r2, r0, #0\n    beq _022653EE\n    mov r1, #0xd1\n    lsl r1, r1, #4\n    add r0, r5, #0\n    add r5, #0x10\n    mul r1, r4\n    add r1, r5, r1\n    add r3, r6, #0\n    bl ov49_02265890\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov49_022653F0(void) {
    ov49_02265958(0, 1, 0xd1);
}

void ov49_0226540C(void) {
    /* Original at 0x0226540C */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    ldr r4, [sp, #0x14]\n    sub r2, r2, r1\n    str r4, [r0]\n    str r1, [r0, #4]\n    str r2, [r0, #0x10]\n    str r1, [r0, #0x14]\n    ldr r1, [sp, #8]\n    str r3, [r0, #8]\n    sub r1, r1, r3\n    str r1, [r0, #0x18]\n    ldr r2, [sp, #0xc]\n    ldr r1, [sp, #0x10]\n    str r3, [r0, #0x1c]\n    str r2, [r0, #0xc]\n    sub r1, r1, r2\n    str r1, [r0, #0x20]\n    str r2, [r0, #0x24]\n    pop {r3, r4}\n    bx lr"
    );
    #endif
}

void ov49_02265434(void) {
    /* Original at 0x02265434 */
    /* Requires manual decompilation - 177 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    ldr r0, [r5]\n    add r4, r1, #0\n    mov r7, #0\n    cmp r4, r0\n    ble _02265448\n    add r4, r0, #0\n    mov r7, #1\n    ldr r6, [r5, #0x10]\n    cmp r6, #0\n    beq _022654CC\n    cmp r0, #0\n    ble _02265466\n    lsl r0, r0, #0xc\n    bl _fflt\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    str r0, [sp, #8]\n    b _02265476\n    lsl r0, r0, #0xc\n    bl _fflt\n    mov r1, #0x3f\n    lsl r1, r1, #0x18\n    bl _fsub\n    str r0, [sp, #8]\n    cmp r4, #0\n    ble _0226548C\n    lsl r0, r4, #0xc\n    bl _fflt\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    b _0226549A\n    lsl r0, r4, #0xc\n    bl _fflt\n    mov r1, #0x3f\n    lsl r1, r1, #0x18\n    bl _fsub\n    bl _ffix\n    asr r1, r0, #0x1f\n    asr r3, r6, #0x1f\n    add r2, r6, #0\n    bl _ll_mul\n    mov r2, #2\n    mov r3, #0\n    lsl r2, r2, #0xa\n    add r2, r0, r2\n    adc r1, r3\n    lsl r0, r1, #0x14\n    lsr r6, r2, #0xc\n    orr r6, r0\n    ldr r0, [sp, #8]\n    bl _ffix\n    add r1, r0, #0\n    add r0, r6, #0\n    bl FX_Div\n    ldr r1, [r5, #0x14]\n    add r0, r1, r0\n    str r0, [r5, #4]\n    ldr r6, [r5, #0x18]\n    cmp r6, #0\n    beq _02265552\n    ldr r0, [r5]\n    cmp r0, #0\n    ble _022654EC\n    lsl r0, r0, #0xc\n    bl _fflt\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    str r0, [sp, #4]\n    b _022654FC\n    lsl r0, r0, #0xc\n    bl _fflt\n    mov r1, #0x3f\n    lsl r1, r1, #0x18\n    bl _fsub\n    str r0, [sp, #4]\n    cmp r4, #0\n    ble _02265512\n    lsl r0, r4, #0xc\n    bl _fflt\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    b _02265520\n    lsl r0, r4, #0xc\n    bl _fflt\n    mov r1, #0x3f\n    lsl r1, r1, #0x18\n    bl _fsub\n    bl _ffix\n    asr r1, r0, #0x1f\n    asr r3, r6, #0x1f\n    add r2, r6, #0\n    bl _ll_mul\n    mov r2, #2\n    mov r3, #0\n    lsl r2, r2, #0xa\n    add r2, r0, r2\n    adc r1, r3\n    lsl r0, r1, #0x14\n    lsr r6, r2, #0xc\n    orr r6, r0\n    ldr r0, [sp, #4]\n    bl _ffix\n    add r1, r0, #0\n    add r0, r6, #0\n    bl FX_Div\n    ldr r1, [r5, #0x1c]\n    add r0, r1, r0\n    str r0, [r5, #8]\n    ldr r6, [r5, #0x20]\n    cmp r6, #0\n    beq _022655D8\n    ldr r0, [r5]\n    cmp r0, #0\n    ble _02265572\n    lsl r0, r0, #0xc\n    bl _fflt\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    str r0, [sp]\n    b _02265582\n    lsl r0, r0, #0xc\n    bl _fflt\n    mov r1, #0x3f\n    lsl r1, r1, #0x18\n    bl _fsub\n    str r0, [sp]\n    cmp r4, #0\n    ble _02265598\n    lsl r0, r4, #0xc\n    bl _fflt\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    b _022655A6\n    lsl r0, r4, #0xc\n    bl _fflt\n    mov r1, #0x3f\n    lsl r1, r1, #0x18\n    bl _fsub\n    bl _ffix\n    asr r1, r0, #0x1f\n    asr r3, r6, #0x1f\n    add r2, r6, #0\n    bl _ll_mul\n    mov r2, #2\n    mov r3, #0\n    lsl r2, r2, #0xa\n    add r2, r0, r2\n    adc r1, r3\n    lsl r0, r1, #0x14\n    lsr r4, r2, #0xc\n    orr r4, r0\n    ldr r0, [sp]\n    bl _ffix\n    add r1, r0, #0\n    add r0, r4, #0\n    bl FX_Div\n    ldr r1, [r5, #0x24]\n    add r0, r1, r0\n    str r0, [r5, #0xc]\n    add r0, r7, #0\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov49_022655E0(void) {
    /* Original at 0x022655E0 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    ldr r4, [r0, #4]\n    str r4, [r1]\n    ldr r1, [r0, #8]\n    str r1, [r2]\n    ldr r0, [r0, #0xc]\n    str r0, [r3]\n    pop {r3, r4}\n    bx lr"
    );
    #endif
}

void ov49_022655F4(void) {
    /* Original at 0x022655F4 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    strh r1, [r4]\n    asr r0, r1, #4\n    lsl r1, r0, #2\n    ldr r0, _02265624 ; =FX_SinCosTable_\n    strh r2, [r4, #2]\n    ldrsh r0, [r0, r1]\n    add r2, r3, #0\n    str r3, [r4, #4]\n    asr r1, r0, #0x1f\n    asr r3, r2, #0x1f\n    bl _ll_mul\n    mov r2, #2\n    mov r3, #0\n    lsl r2, r2, #0xa\n    add r2, r0, r2\n    adc r1, r3\n    lsl r0, r1, #0x14\n    lsr r1, r2, #0xc\n    orr r1, r0\n    str r1, [r4, #8]\n    pop {r4, pc}\n    _02265624: .word FX_SinCosTable_"
    );
    #endif
}

void ov49_02265628(void) {
    /* Original at 0x02265628 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldrh r1, [r4]\n    ldrh r0, [r4, #2]\n    add r0, r1, r0\n    strh r0, [r4]\n    ldrh r0, [r4]\n    ldr r2, [r4, #4]\n    asr r0, r0, #4\n    lsl r1, r0, #2\n    ldr r0, _0226565C ; =FX_SinCosTable_\n    asr r3, r2, #0x1f\n    ldrsh r0, [r0, r1]\n    asr r1, r0, #0x1f\n    bl _ll_mul\n    mov r2, #2\n    mov r3, #0\n    lsl r2, r2, #0xa\n    add r2, r0, r2\n    adc r1, r3\n    lsl r0, r1, #0x14\n    lsr r1, r2, #0xc\n    orr r1, r0\n    str r1, [r4, #8]\n    pop {r4, pc}\n    _0226565C: .word FX_SinCosTable_"
    );
    #endif
}

void ov49_02265660(void) {
    /* Original at 0x02265660 */
    /* Requires manual decompilation - 3 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0, #8]\n    str r0, [r1]\n    bx lr"
    );
    #endif
}

void ov49_02265668(void) {
    /* Original at 0x02265668 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    ldr r0, [r0, #4]\n    ldr r4, [r1, #8]\n    add r5, r2, #0\n    bl ov49_02258DAC\n    cmp r4, r0\n    bne _02265684\n    lsl r0, r5, #0x10\n    lsr r0, r0, #0x10\n    mov r1, #5\n    bl sub_0200606C\n    pop {r3, r4, r5, pc}\n    add r0, r4, #0\n    bl ov49_02258F70\n    cmp r0, #0\n    bne _02265696\n    lsl r0, r5, #0x10\n    lsr r0, r0, #0x10\n    bl PlaySE\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov49_02265698(void) {
    /* Original at 0x02265698 */
    /* Requires manual decompilation - 59 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r6, r1, #0\n    add r7, r2, #0\n    mov r4, #0\n    mov r0, #0\n    add r1, r4, #0\n    str r0, [sp]\n    add r0, r6, #0\n    add r1, #0x81\n    mov r2, #0\n    add r3, r7, #0\n    bl GfGfxLoader_LoadFromOpenNarc\n    ldr r1, _0226570C ; =0x00010550\n    str r0, [r5, r1]\n    add r0, r1, #0\n    ldr r0, [r5, r0]\n    bl NNS_G3dGetMdlSet\n    ldr r1, _02265710 ; =0x00010554\n    str r0, [r5, r1]\n    add r0, r1, #0\n    ldr r1, [r5, r0]\n    cmp r1, #0\n    beq _022656EC\n    add r0, r1, #0\n    add r0, #8\n    beq _022656E0\n    ldrb r2, [r1, #9]\n    cmp r2, #0\n    bls _022656E0\n    ldrh r2, [r1, #0xe]\n    add r0, r0, r2\n    add r0, r0, #4\n    b _022656E2\n    mov r0, #0\n    cmp r0, #0\n    beq _022656EC\n    ldr r0, [r0]\n    add r1, r1, r0\n    b _022656EE\n    mov r1, #0\n    ldr r0, _02265714 ; =0x00010558\n    str r1, [r5, r0]\n    mov r1, #0\n    add r0, r0, #4\n    str r1, [r5, r0]\n    ldr r0, _02265714 ; =0x00010558\n    ldr r1, _02265718 ; =0x00007FFF\n    ldr r0, [r5, r0]\n    bl NNS_G3dMdlSetMdlEmiAll\n    add r4, r4, #1\n    add r5, #0x10\n    cmp r4, #0xf\n    blt _022656A2\n    pop {r3, r4, r5, r6, r7, pc}\n    _0226570C: .word 0x00010550\n    _02265710: .word 0x00010554\n    _02265714: .word 0x00010558\n    _02265718: .word 0x00007FFF"
    );
    #endif
}

void ov49_0226571C(void) {
    Heap_Free(0);
}

void ov49_02265738(void) {
    /* Original at 0x02265738 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r1, #0\n    ldr r1, _0226575C ; =0x00010640\n    add r7, r2, #0\n    mov r4, #0\n    add r5, r0, r1\n    add r2, r4, #0\n    add r0, r5, #0\n    add r1, r6, #0\n    add r2, #0x90\n    add r3, r7, #0\n    bl ov49_02258830\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #0x27\n    blt _02265744\n    pop {r3, r4, r5, r6, r7, pc}\n    _0226575C: .word 0x00010640"
    );
    #endif
}

void ov49_02265760(void) {
    /* Original at 0x02265760 */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    ldr r7, _022657A8 ; =NNS_GfdDefaultFuncFreeTexVram\n    add r5, r0, #0\n    mov r4, #0\n    ldr r0, _022657AC ; =0x00010640\n    ldr r0, [r5, r0]\n    bl NNS_G3dGetTex\n    add r1, sp, #4\n    add r2, sp, #0\n    add r6, r0, #0\n    bl NNS_G3dTexReleaseTexKey\n    ldr r0, [sp, #4]\n    ldr r1, [r7]\n    blx r1\n    ldr r0, [sp]\n    ldr r1, [r7]\n    blx r1\n    add r0, r6, #0\n    bl NNS_G3dPlttReleasePlttKey\n    ldr r1, _022657B0 ; =NNS_GfdDefaultFuncFreePlttVram\n    ldr r1, [r1]\n    blx r1\n    ldr r0, _022657AC ; =0x00010640\n    ldr r0, [r5, r0]\n    bl Heap_Free\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #0x27\n    blt _0226576A\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    _022657A8: .word NNS_GfdDefaultFuncFreeTexVram\n    _022657AC: .word 0x00010640\n    _022657B0: .word NNS_GfdDefaultFuncFreePlttVram"
    );
    #endif
}

void ov49_022657B4(void) {
    /* Original at 0x022657B4 */
    /* Requires manual decompilation - 74 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x20\n    add r5, r0, #0\n    mov r0, #0\n    ldr r4, _02265840 ; =ov49_0226A70C\n    str r1, [sp, #8]\n    str r2, [sp, #0xc]\n    str r0, [sp, #0x10]\n    ldr r0, _02265844 ; =0x0001081C\n    mov r6, #0\n    add r0, r5, r0\n    str r0, [sp, #0x14]\n    ldr r0, _02265848 ; =0x000106DC\n    add r0, r5, r0\n    str r0, [sp, #0x18]\n    ldr r0, _0226584C ; =0x00010550\n    add r0, r5, r0\n    str r0, [sp, #0x1c]\n    add r7, r4, r6\n    ldrb r1, [r7, #2]\n    cmp r1, #0x11\n    beq _0226582A\n    mov r0, #0x14\n    mul r0, r1\n    add r1, r5, r0\n    ldr r0, _02265848 ; =0x000106DC\n    ldr r0, [r1, r0]\n    cmp r0, #0\n    bne _0226582A\n    ldrb r0, [r4, #1]\n    lsl r0, r0, #2\n    add r1, r5, r0\n    ldr r0, _02265850 ; =0x00010640\n    ldr r0, [r1, r0]\n    bl NNS_G3dGetTex\n    ldrb r1, [r4]\n    lsl r1, r1, #4\n    add r2, r5, r1\n    ldr r1, _02265854 ; =0x0001055C\n    str r0, [r2, r1]\n    ldrb r3, [r7, #2]\n    ldr r0, [sp, #0xc]\n    str r0, [sp]\n    ldr r0, [sp, #0x14]\n    add r1, r3, #0\n    str r0, [sp, #4]\n    mov r0, #0x14\n    mul r1, r0\n    ldr r0, [sp, #0x18]\n    add r3, #0xb7\n    add r0, r0, r1\n    ldrb r1, [r4]\n    lsl r2, r1, #4\n    ldr r1, [sp, #0x1c]\n    add r1, r1, r2\n    ldr r2, [sp, #8]\n    bl sub_020180BC\n    add r6, r6, #1\n    cmp r6, #2\n    blt _022657D8\n    ldr r0, [sp, #0x10]\n    add r4, r4, #4\n    add r0, r0, #1\n    str r0, [sp, #0x10]\n    cmp r0, #0x27\n    blt _022657C4\n    add sp, #0x20\n    pop {r3, r4, r5, r6, r7, pc}\n    _02265840: .word ov49_0226A70C\n    _02265844: .word 0x0001081C\n    _02265848: .word 0x000106DC\n    _0226584C: .word 0x00010550\n    _02265850: .word 0x00010640\n    _02265854: .word 0x0001055C"
    );
    #endif
}

void ov49_02265858(void) {
    /* Original at 0x02265858 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r0, _02265888 ; =0x000106DC\n    mov r6, #0\n    add r4, r5, r0\n    ldr r0, _0226588C ; =0x0001081C\n    add r7, r5, r0\n    ldr r0, _02265888 ; =0x000106DC\n    ldr r0, [r5, r0]\n    cmp r0, #0\n    beq _0226587C\n    add r0, r4, #0\n    add r1, r7, #0\n    bl sub_020180F8\n    ldr r0, _02265888 ; =0x000106DC\n    mov r1, #0\n    str r1, [r5, r0]\n    add r6, r6, #1\n    add r5, #0x14\n    add r4, #0x14\n    cmp r6, #0x10\n    blt _02265866\n    pop {r3, r4, r5, r6, r7, pc}\n    _02265888: .word 0x000106DC\n    _0226588C: .word 0x0001081C"
    );
    #endif
}

void ov49_02265890(void) {
    /* Original at 0x02265890 */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r3, #0\n    add r5, r0, #0\n    add r4, r1, #0\n    add r6, r2, #0\n    cmp r7, #0x1b\n    blo _022658A2\n    bl GF_AssertFail\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov49_02265948\n    str r6, [r4, #8]\n    add r0, r6, #0\n    mov r1, #5\n    strb r7, [r4]\n    bl ov49_02258E60\n    add r0, #0x28\n    str r0, [r4, #4]\n    ldrb r2, [r4]\n    add r0, r5, #0\n    add r1, r4, #0\n    lsl r3, r2, #2\n    ldr r2, _022658DC ; =ov49_0226A5A4\n    ldr r2, [r2, r3]\n    blx r2\n    ldrb r2, [r4]\n    add r0, r5, #0\n    add r1, r4, #0\n    lsl r3, r2, #2\n    ldr r2, _022658E0 ; =ov49_0226A610\n    ldr r2, [r2, r3]\n    bl ov49_02265668\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _022658DC: .word ov49_0226A5A4\n    _022658E0: .word ov49_0226A610"
    );
    #endif
}

void ov49_022658E4(void) {
    /* Original at 0x022658E4 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    add r0, r4, #0\n    bl ov49_02265958\n    cmp r0, #0\n    beq _02265918\n    ldrb r0, [r4]\n    cmp r0, #0x1b\n    blo _022658FE\n    bl GF_AssertFail\n    ldrb r2, [r4]\n    add r0, r5, #0\n    add r1, r4, #0\n    lsl r3, r2, #2\n    ldr r2, _0226591C ; =ov49_0226A538\n    ldr r2, [r2, r3]\n    blx r2\n    cmp r0, #1\n    bne _02265918\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov49_02265948\n    pop {r3, r4, r5, pc}\n    nop\n    _0226591C: .word ov49_0226A538"
    );
    #endif
}

void ov49_02265920(void) {
    /* Original at 0x02265920 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    add r0, r4, #0\n    bl ov49_02265958\n    cmp r0, #0\n    bne _02265934\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    ldrb r0, [r4]\n    cmp r0, #0x1b\n    blo _0226593E\n    bl GF_AssertFail\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov49_02266AF0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov49_02265948(void) {
    /* Original at 0x02265948 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _02265954 ; =memset\n    mov r2, #0xd1\n    add r0, r1, #0\n    mov r1, #0\n    lsl r2, r2, #4\n    bx r3\n    _02265954: .word memset"
    );
    #endif
}

void ov49_02265958(void) {
    /* Original at 0x02265958 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0, #8]\n    cmp r0, #0\n    beq _02265962\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void ov49_02265968(void) {
    /* Original at 0x02265968 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "lsl r1, r1, #2\n    add r1, r0, r1\n    ldr r0, _0226597C ; =0x0000087C\n    ldr r0, [r1, r0]\n    cmp r0, #0\n    beq _02265978\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr\n    _0226597C: .word 0x0000087C"
    );
    #endif
}

void ov49_02265980(void) {
    /* Original at 0x02265980 */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r4, r2, #0\n    str r0, [sp]\n    add r5, r1, #0\n    add r6, r3, #0\n    cmp r4, #0x12\n    blo _02265994\n    bl GF_AssertFail\n    ldr r0, _022659C8 ; =0x0000087C\n    add r7, r5, r0\n    lsl r0, r4, #2\n    str r0, [sp, #4]\n    ldr r0, [r7, r0]\n    cmp r0, #0\n    beq _022659A6\n    bl GF_AssertFail\n    ldr r0, [sp, #4]\n    ldr r2, _022659CC ; =0x00010550\n    ldr r1, [sp]\n    str r6, [r7, r0]\n    add r2, r1, r2\n    ldrb r1, [r6]\n    mov r0, #0x78\n    add r5, #0xc\n    mul r0, r4\n    lsl r1, r1, #4\n    add r0, r5, r0\n    add r1, r2, r1\n    bl sub_020181B0\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _022659C8: .word 0x0000087C\n    _022659CC: .word 0x00010550"
    );
    #endif
}

void ov49_022659D0(void) {
    /* Original at 0x022659D0 */
    /* Requires manual decompilation - 144 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    add r5, r2, #0\n    str r0, [sp]\n    lsl r7, r5, #2\n    add r0, r1, #0\n    str r1, [sp, #4]\n    add r1, r0, r7\n    ldr r0, _02265B04 ; =0x0000087C\n    ldr r0, [r1, r0]\n    cmp r0, #0\n    bne _022659EC\n    bl GF_AssertFail\n    mov r0, #0x78\n    add r6, r5, #0\n    mul r6, r0\n    ldr r0, [sp, #4]\n    add r0, #0xc\n    add r0, r0, r6\n    bl sub_020182A4\n    cmp r0, #0\n    beq _02265AFE\n    ldr r0, [sp, #4]\n    add r1, r0, r7\n    ldr r0, _02265B04 ; =0x0000087C\n    ldr r2, [r1, r0]\n    ldr r0, _02265B08 ; =0x00010550\n    ldrb r3, [r2]\n    ldr r1, [sp]\n    add r1, r1, r0\n    lsl r3, r3, #4\n    add r1, r1, r3\n    str r1, [sp, #0xc]\n    ldrb r1, [r2, #1]\n    add r0, #0xf0\n    lsl r2, r1, #2\n    ldr r1, [sp]\n    add r1, r1, r2\n    ldr r0, [r1, r0]\n    bl NNS_G3dGetTex\n    ldr r1, [sp, #0xc]\n    mov r2, #0\n    str r0, [r1, #0xc]\n    add r0, r1, #0\n    ldr r0, [r0, #8]\n    ldr r1, [r1, #0xc]\n    add r3, r2, #0\n    bl NNS_G3dForceBindMdlTex\n    cmp r0, #0\n    bne _02265A40\n    bl GF_AssertFail\n    ldr r0, [sp, #0xc]\n    ldr r1, [sp, #0xc]\n    mov r2, #0\n    ldr r0, [r0, #8]\n    ldr r1, [r1, #0xc]\n    add r3, r2, #0\n    bl NNS_G3dForceBindMdlPltt\n    cmp r0, #0\n    bne _02265A58\n    bl GF_AssertFail\n    ldr r0, [sp, #4]\n    lsl r1, r5, #3\n    add r5, r0, r1\n    add r0, r0, r7\n    str r0, [sp, #8]\n    ldr r0, [sp, #4]\n    ldr r1, _02265B0C ; =0x000106DC\n    str r0, [sp, #0x10]\n    add r0, #0xc\n    str r0, [sp, #0x10]\n    ldr r0, [sp]\n    mov r4, #0\n    add r7, r0, r1\n    ldr r1, [sp, #8]\n    ldr r0, _02265B04 ; =0x0000087C\n    ldr r0, [r1, r0]\n    add r0, r0, r4\n    ldrb r1, [r0, #2]\n    cmp r1, #0x11\n    beq _02265AA6\n    mov r0, #0x14\n    mul r0, r1\n    str r0, [sp, #0x14]\n    ldr r0, [sp, #0x10]\n    ldr r1, [sp, #0x14]\n    add r0, r0, r6\n    add r1, r7, r1\n    bl sub_020181D4\n    ldr r1, _02265B10 ; =0x000008C4\n    ldr r0, [sp, #0x14]\n    ldr r1, [r5, r1]\n    add r0, r7, r0\n    bl sub_02018198\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #2\n    blt _02265A72\n    ldr r0, [sp, #0xc]\n    ldr r1, [sp, #4]\n    ldr r0, [r0, #8]\n    ldr r1, [r1, #4]\n    bl NNS_G3dMdlSetMdlPolygonIDAll\n    ldr r0, [sp, #4]\n    add r0, #0xc\n    str r0, [sp, #4]\n    add r0, r0, r6\n    bl sub_020181EC\n    ldr r1, _02265B0C ; =0x000106DC\n    ldr r0, [sp]\n    ldr r7, _02265B04 ; =0x0000087C\n    mov r4, #0\n    add r5, r0, r1\n    ldr r0, [sp, #8]\n    ldr r0, [r0, r7]\n    add r0, r0, r4\n    ldrb r1, [r0, #2]\n    cmp r1, #0x11\n    beq _02265AE8\n    ldr r0, [sp, #4]\n    mov r2, #0x14\n    mul r2, r1\n    add r0, r0, r6\n    add r1, r5, r2\n    bl sub_020181E0\n    add r4, r4, #1\n    cmp r4, #2\n    blt _02265AC8\n    ldr r0, [sp, #0xc]\n    ldr r0, [r0, #8]\n    bl NNS_G3dReleaseMdlTex\n    ldr r0, [sp, #0xc]\n    ldr r0, [r0, #8]\n    bl NNS_G3dReleaseMdlPltt\n    ldr r0, [sp, #0xc]\n    mov r1, #0\n    str r1, [r0, #0xc]\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02265B04: .word 0x0000087C\n    _02265B08: .word 0x00010550\n    _02265B0C: .word 0x000106DC\n    _02265B10: .word 0x000008C4"
    );
    #endif
}

void ov49_02265B14(void) {
    ov49_02265B3C();
}

void ov49_02265B28(void) {
    ov49_02265B94();
}

void ov49_02265B3C(void) {
    /* Original at 0x02265B3C */
    /* Requires manual decompilation - 39 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r1, #0\n    ldr r1, _02265B88 ; =0x000106DC\n    add r6, r2, #0\n    add r0, r0, r1\n    lsl r1, r6, #2\n    add r2, r4, r1\n    ldr r1, _02265B8C ; =0x0000087C\n    add r5, r3, #0\n    ldr r1, [r2, r1]\n    add r1, r1, r5\n    ldrb r2, [r1, #2]\n    mov r1, #0x14\n    mul r1, r2\n    add r0, r0, r1\n    bl sub_020181A4\n    add r1, r0, #0\n    ldr r0, _02265B90 ; =0x000008C4\n    lsl r2, r6, #3\n    add r0, r4, r0\n    add r4, r0, r2\n    lsl r5, r5, #2\n    ldr r2, [r4, r5]\n    ldr r0, [sp, #0x10]\n    add r0, r0, r2\n    cmp r0, r1\n    bge _02265B78\n    str r0, [r4, r5]\n    pop {r4, r5, r6, pc}\n    mov r0, #2\n    lsl r0, r0, #0xc\n    add r0, r2, r0\n    bl _s32_div_f\n    str r1, [r4, r5]\n    pop {r4, r5, r6, pc}\n    nop\n    _02265B88: .word 0x000106DC\n    _02265B8C: .word 0x0000087C\n    _02265B90: .word 0x000008C4"
    );
    #endif
}

void ov49_02265B94(void) {
    /* Original at 0x02265B94 */
    /* Requires manual decompilation - 38 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r1, #0\n    ldr r1, _02265BDC ; =0x000106DC\n    add r4, r2, #0\n    add r0, r0, r1\n    lsl r1, r4, #2\n    add r2, r5, r1\n    ldr r1, _02265BE0 ; =0x0000087C\n    add r6, r3, #0\n    ldr r1, [r2, r1]\n    add r1, r1, r6\n    ldrb r2, [r1, #2]\n    mov r1, #0x14\n    mul r1, r2\n    add r0, r0, r1\n    bl sub_020181A4\n    ldr r3, _02265BE4 ; =0x000008C4\n    lsl r1, r4, #3\n    add r2, r5, r3\n    add r2, r2, r1\n    lsl r1, r6, #2\n    ldr r5, [sp, #0x10]\n    ldr r4, [r2, r1]\n    add r4, r5, r4\n    cmp r4, r0\n    bge _02265BD0\n    str r4, [r2, r1]\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    sub r3, #0xc4\n    sub r0, r0, r3\n    str r0, [r2, r1]\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    nop\n    _02265BDC: .word 0x000106DC\n    _02265BE0: .word 0x0000087C\n    _02265BE4: .word 0x000008C4"
    );
    #endif
}

void ov49_02265BE8(void) {
    /* Original at 0x02265BE8 */
    /* Requires manual decompilation - 40 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r1, #0\n    ldr r1, _02265C34 ; =0x000106DC\n    add r4, r2, #0\n    add r0, r0, r1\n    lsl r1, r4, #2\n    add r2, r5, r1\n    ldr r1, _02265C38 ; =0x0000087C\n    add r6, r3, #0\n    ldr r1, [r2, r1]\n    add r1, r1, r6\n    ldrb r2, [r1, #2]\n    mov r1, #0x14\n    mul r1, r2\n    add r0, r0, r1\n    bl sub_020181A4\n    ldr r1, [sp, #0x10]\n    cmp r0, r1\n    bge _02265C24\n    mov r1, #2\n    lsl r2, r4, #3\n    lsl r1, r1, #0xa\n    add r3, r5, r2\n    lsl r2, r6, #2\n    sub r0, r0, r1\n    add r2, r3, r2\n    add r1, #0xc4\n    str r0, [r2, r1]\n    pop {r4, r5, r6, pc}\n    lsl r0, r4, #3\n    add r2, r5, r0\n    lsl r0, r6, #2\n    add r2, r2, r0\n    ldr r0, _02265C3C ; =0x000008C4\n    str r1, [r2, r0]\n    pop {r4, r5, r6, pc}\n    nop\n    _02265C34: .word 0x000106DC\n    _02265C38: .word 0x0000087C\n    _02265C3C: .word 0x000008C4"
    );
    #endif
}

void ov49_02265C40(void) {
    /* Original at 0x02265C40 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    lsl r2, r2, #2\n    add r2, r1, r2\n    ldr r1, _02265C60 ; =0x0000087C\n    ldr r4, _02265C64 ; =0x000106DC\n    ldr r1, [r2, r1]\n    add r0, r0, r4\n    add r1, r1, r3\n    ldrb r2, [r1, #2]\n    mov r1, #0x14\n    mul r1, r2\n    add r0, r0, r1\n    bl sub_020181A0\n    pop {r4, pc}\n    nop\n    _02265C60: .word 0x0000087C\n    _02265C64: .word 0x000106DC"
    );
    #endif
}

void ov49_02265C68(void) {
    ov49_02267A84();
}

void ov49_02265C74(void) {
    ov49_02267A84();
}

void ov49_02265C80(void) {
    ov49_02267A84();
}

void ov49_02265C8C(void) {
    ov49_02267C20();
}

void ov49_02265C98(void) {
    ov49_02267C20();
}

void ov49_02265CA4(void) {
    ov49_02267C20();
}

void ov49_02265CB0(void) {
    /* Original at 0x02265CB0 */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r7, r1, #0\n    add r5, r7, #0\n    str r0, [sp]\n    mov r4, #0\n    add r5, #0xc\n    add r3, r4, #3\n    lsl r6, r3, #2\n    ldr r3, _02265D08 ; =ov49_0226A70C\n    ldr r0, [sp]\n    add r1, r7, #0\n    add r2, r4, #0\n    add r3, r3, r6\n    bl ov49_02265980\n    ldr r0, [r7, #8]\n    add r1, sp, #4\n    bl ov49_02259154\n    mov r0, #2\n    ldr r1, [sp, #8]\n    lsl r0, r0, #0xe\n    add r2, r1, r0\n    ldr r1, [sp, #4]\n    ldr r3, [sp, #0xc]\n    add r0, r5, #0\n    str r2, [sp, #8]\n    bl sub_020182A8\n    add r0, r5, #0\n    mov r1, #0\n    bl sub_020182A0\n    add r4, r4, #1\n    add r5, #0x78\n    cmp r4, #3\n    blt _02265CBE\n    ldr r0, _02265D0C ; =0x00000954\n    mov r1, #0xff\n    str r1, [r7, r0]\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02265D08: .word ov49_0226A70C\n    _02265D0C: .word 0x00000954"
    );
    #endif
}

void ov49_02265D10(void) {
    /* Original at 0x02265D10 */
    /* Requires manual decompilation - 143 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x18\n    ldr r3, _02265E40 ; =ov49_0226A730\n    mov r2, #1\n    add r5, r0, #0\n    add r4, r1, #0\n    bl ov49_02265980\n    ldr r3, _02265E44 ; =ov49_0226A73C\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #0\n    bl ov49_02265980\n    add r0, r4, #0\n    add r0, #0x84\n    mov r1, #0\n    bl sub_020182A0\n    ldr r0, [r4, #8]\n    add r1, sp, #0xc\n    bl ov49_02259154\n    mov r2, #1\n    ldr r0, [sp, #0x10]\n    lsl r2, r2, #0x10\n    add r0, r0, r2\n    str r0, [sp, #0x10]\n    ldr r1, [sp, #0xc]\n    lsr r0, r2, #1\n    add r0, r1, r0\n    add r5, sp, #0xc\n    str r0, [sp, #0xc]\n    ldmia r5!, {r0, r1}\n    add r3, sp, #0\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #8\n    str r0, [r3]\n    ldr r0, [sp, #4]\n    add r0, r0, r2\n    str r0, [sp, #4]\n    ldr r0, _02265E48 ; =0x00000958\n    str r1, [r4, r0]\n    ldr r0, [r4, #8]\n    mov r1, #6\n    bl ov49_02258E60\n    cmp r0, #3\n    bhi _02265E20\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02265D80: ; jump table\n    mov r0, #7\n    ldr r1, [sp, #0x14]\n    lsl r0, r0, #0xe\n    sub r1, r1, r0\n    str r1, [sp, #0x14]\n    ldr r1, [sp, #8]\n    lsr r0, r0, #1\n    sub r0, r1, r0\n    str r0, [sp, #8]\n    add r0, r4, #0\n    ldr r1, _02265E4C ; =0x0000BFFF\n    add r0, #0x84\n    mov r2, #1\n    bl sub_020182E0\n    b _02265E20\n    mov r0, #6\n    ldr r1, [sp, #0x14]\n    lsl r0, r0, #0xe\n    add r0, r1, r0\n    str r0, [sp, #0x14]\n    mov r0, #0xb\n    ldr r1, [sp, #8]\n    lsl r0, r0, #0xc\n    add r0, r1, r0\n    str r0, [sp, #8]\n    add r0, r4, #0\n    ldr r1, _02265E50 ; =0x00003FFF\n    add r0, #0x84\n    mov r2, #1\n    bl sub_020182E0\n    b _02265E20\n    mov r0, #0x17\n    ldr r1, [sp, #0xc]\n    lsl r0, r0, #0xc\n    sub r0, r1, r0\n    str r0, [sp, #0xc]\n    mov r0, #7\n    ldr r1, [sp]\n    lsl r0, r0, #0xc\n    sub r0, r1, r0\n    str r0, [sp]\n    mov r0, #2\n    ldr r1, [sp, #8]\n    lsl r0, r0, #0xe\n    add r0, r1, r0\n    str r0, [sp, #8]\n    add r0, r4, #0\n    add r0, #0x84\n    mov r1, #0\n    mov r2, #1\n    bl sub_020182E0\n    b _02265E20\n    mov r0, #0x17\n    ldr r1, [sp, #0xc]\n    lsl r0, r0, #0xc\n    add r0, r1, r0\n    str r0, [sp, #0xc]\n    mov r0, #7\n    ldr r1, [sp]\n    lsl r0, r0, #0xc\n    add r0, r1, r0\n    str r0, [sp]\n    mov r1, #2\n    ldr r0, [sp, #8]\n    lsl r1, r1, #0xe\n    add r0, r0, r1\n    str r0, [sp, #8]\n    add r0, r4, #0\n    add r0, #0x84\n    sub r1, r1, #1\n    mov r2, #1\n    bl sub_020182E0\n    add r0, r4, #0\n    ldr r1, [sp, #0xc]\n    ldr r2, [sp, #0x10]\n    ldr r3, [sp, #0x14]\n    add r0, #0x84\n    bl sub_020182A8\n    add r4, #0xc\n    ldr r1, [sp]\n    ldr r2, [sp, #4]\n    ldr r3, [sp, #8]\n    add r0, r4, #0\n    bl sub_020182A8\n    add sp, #0x18\n    pop {r3, r4, r5, pc}\n    _02265E40: .word ov49_0226A730\n    _02265E44: .word ov49_0226A73C\n    _02265E48: .word 0x00000958\n    _02265E4C: .word 0x0000BFFF\n    _02265E50: .word 0x00003FFF"
    );
    #endif
}

void ov49_02265E54(void) {
    /* Original at 0x02265E54 */
    /* Requires manual decompilation - 244 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x18\n    ldr r3, _02266058 ; =ov49_0226A730\n    mov r2, #1\n    add r5, r0, #0\n    add r4, r1, #0\n    bl ov49_02265980\n    ldr r3, _0226605C ; =ov49_0226A73C\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #0\n    bl ov49_02265980\n    ldr r3, _02266060 ; =ov49_0226A734\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #2\n    bl ov49_02265980\n    add r0, r4, #0\n    add r0, #0x84\n    mov r1, #0\n    bl sub_020182A0\n    ldr r0, [r4, #8]\n    add r1, sp, #0xc\n    bl ov49_02259154\n    mov r2, #1\n    ldr r0, [sp, #0x10]\n    lsl r2, r2, #0x10\n    add r0, r0, r2\n    str r0, [sp, #0x10]\n    ldr r1, [sp, #0xc]\n    lsr r0, r2, #1\n    add r0, r1, r0\n    add r5, sp, #0xc\n    str r0, [sp, #0xc]\n    ldmia r5!, {r0, r1}\n    add r3, sp, #0\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #8\n    str r0, [r3]\n    ldr r0, [sp, #4]\n    add r0, r0, r2\n    str r0, [sp, #4]\n    ldr r0, _02266064 ; =0x00000958\n    str r1, [r4, r0]\n    add r0, r0, #4\n    str r1, [r4, r0]\n    ldr r0, [r4, #8]\n    mov r1, #6\n    bl ov49_02258E60\n    cmp r0, #3\n    bls _02265ECA\n    b _02266046\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02265ED6: ; jump table\n    mov r0, #7\n    ldr r1, [sp, #0x14]\n    lsl r0, r0, #0xe\n    sub r1, r1, r0\n    str r1, [sp, #0x14]\n    ldr r1, [sp, #8]\n    lsr r0, r0, #1\n    sub r0, r1, r0\n    str r0, [sp, #8]\n    add r0, r4, #0\n    ldr r1, _02266068 ; =0x0000A38D\n    add r0, #0x84\n    mov r2, #1\n    bl sub_020182E0\n    add r0, r4, #0\n    ldr r1, _0226606C ; =0x0000DC70\n    add r0, #0xfc\n    mov r2, #1\n    bl sub_020182E0\n    mov r1, #2\n    add r0, r4, #0\n    ldr r2, [sp, #0xc]\n    lsl r1, r1, #0xe\n    add r1, r2, r1\n    ldr r2, [sp, #0x10]\n    ldr r3, [sp, #0x14]\n    add r0, #0x84\n    bl sub_020182A8\n    mov r1, #2\n    add r0, r4, #0\n    ldr r2, [sp, #0xc]\n    lsl r1, r1, #0xe\n    sub r1, r2, r1\n    ldr r2, [sp, #0x10]\n    ldr r3, [sp, #0x14]\n    add r0, #0xfc\n    bl sub_020182A8\n    b _02266046\n    mov r0, #6\n    ldr r1, [sp, #0x14]\n    lsl r0, r0, #0xe\n    add r0, r1, r0\n    str r0, [sp, #0x14]\n    mov r0, #0xb\n    ldr r1, [sp, #8]\n    lsl r0, r0, #0xc\n    add r0, r1, r0\n    str r0, [sp, #8]\n    add r0, r4, #0\n    ldr r1, _02266070 ; =0x0000238E\n    add r0, #0x84\n    mov r2, #1\n    bl sub_020182E0\n    add r0, r4, #0\n    ldr r1, _02266074 ; =0x00005C71\n    add r0, #0xfc\n    mov r2, #1\n    bl sub_020182E0\n    mov r1, #2\n    add r0, r4, #0\n    ldr r2, [sp, #0xc]\n    lsl r1, r1, #0xe\n    sub r1, r2, r1\n    ldr r2, [sp, #0x10]\n    ldr r3, [sp, #0x14]\n    add r0, #0x84\n    bl sub_020182A8\n    mov r1, #2\n    add r0, r4, #0\n    ldr r2, [sp, #0xc]\n    lsl r1, r1, #0xe\n    add r1, r2, r1\n    ldr r2, [sp, #0x10]\n    ldr r3, [sp, #0x14]\n    add r0, #0xfc\n    bl sub_020182A8\n    b _02266046\n    mov r0, #0x17\n    ldr r1, [sp, #0xc]\n    lsl r0, r0, #0xc\n    sub r0, r1, r0\n    str r0, [sp, #0xc]\n    mov r0, #7\n    ldr r1, [sp]\n    lsl r0, r0, #0xc\n    sub r0, r1, r0\n    str r0, [sp]\n    mov r0, #2\n    ldr r1, [sp, #8]\n    lsl r0, r0, #0xe\n    add r0, r1, r0\n    str r0, [sp, #8]\n    add r0, r4, #0\n    ldr r1, _02266078 ; =0x0000E38F\n    add r0, #0x84\n    mov r2, #1\n    bl sub_020182E0\n    add r0, r4, #0\n    ldr r1, _0226607C ; =0x00001C71\n    add r0, #0xfc\n    mov r2, #1\n    bl sub_020182E0\n    mov r3, #2\n    add r0, r4, #0\n    ldr r5, [sp, #0x14]\n    lsl r3, r3, #0xe\n    ldr r1, [sp, #0xc]\n    ldr r2, [sp, #0x10]\n    add r0, #0x84\n    sub r3, r5, r3\n    bl sub_020182A8\n    mov r3, #2\n    add r0, r4, #0\n    ldr r5, [sp, #0x14]\n    lsl r3, r3, #0xe\n    ldr r1, [sp, #0xc]\n    ldr r2, [sp, #0x10]\n    add r0, #0xfc\n    add r3, r5, r3\n    bl sub_020182A8\n    b _02266046\n    mov r0, #0x17\n    ldr r1, [sp, #0xc]\n    lsl r0, r0, #0xc\n    add r0, r1, r0\n    str r0, [sp, #0xc]\n    mov r0, #7\n    ldr r1, [sp]\n    lsl r0, r0, #0xc\n    add r0, r1, r0\n    str r0, [sp]\n    mov r0, #2\n    ldr r1, [sp, #8]\n    lsl r0, r0, #0xe\n    add r0, r1, r0\n    str r0, [sp, #8]\n    add r0, r4, #0\n    ldr r1, _02266080 ; =0x0000638D\n    add r0, #0x84\n    mov r2, #1\n    bl sub_020182E0\n    add r0, r4, #0\n    ldr r1, _02266084 ; =0x00009C71\n    add r0, #0xfc\n    mov r2, #1\n    bl sub_020182E0\n    mov r3, #2\n    add r0, r4, #0\n    ldr r5, [sp, #0x14]\n    lsl r3, r3, #0xe\n    ldr r1, [sp, #0xc]\n    ldr r2, [sp, #0x10]\n    add r0, #0x84\n    add r3, r5, r3\n    bl sub_020182A8\n    mov r3, #2\n    add r0, r4, #0\n    ldr r5, [sp, #0x14]\n    lsl r3, r3, #0xe\n    ldr r1, [sp, #0xc]\n    ldr r2, [sp, #0x10]\n    add r0, #0xfc\n    sub r3, r5, r3\n    bl sub_020182A8\n    add r4, #0xc\n    ldr r1, [sp]\n    ldr r2, [sp, #4]\n    ldr r3, [sp, #8]\n    add r0, r4, #0\n    bl sub_020182A8\n    add sp, #0x18\n    pop {r3, r4, r5, pc}\n    _02266058: .word ov49_0226A730\n    _0226605C: .word ov49_0226A73C\n    _02266060: .word ov49_0226A734\n    _02266064: .word 0x00000958\n    _02266068: .word 0x0000A38D\n    _0226606C: .word 0x0000DC70\n    _02266070: .word 0x0000238E\n    _02266074: .word 0x00005C71\n    _02266078: .word 0x0000E38F\n    _0226607C: .word 0x00001C71\n    _02266080: .word 0x0000638D\n    _02266084: .word 0x00009C71"
    );
    #endif
}

void ov49_02266088(void) {
    /* Original at 0x02266088 */
    /* Requires manual decompilation - 307 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x18\n    ldr r3, _02266314 ; =ov49_0226A730\n    mov r2, #1\n    add r5, r0, #0\n    add r4, r1, #0\n    bl ov49_02265980\n    ldr r3, _02266318 ; =ov49_0226A73C\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #0\n    bl ov49_02265980\n    ldr r3, _0226631C ; =ov49_0226A734\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #2\n    bl ov49_02265980\n    ldr r3, _02266320 ; =ov49_0226A738\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #3\n    bl ov49_02265980\n    add r0, r4, #0\n    add r0, #0x84\n    mov r1, #0\n    bl sub_020182A0\n    ldr r1, _02266324 ; =0x00000958\n    mov r2, #8\n    str r2, [r4, r1]\n    add r0, r1, #4\n    str r2, [r4, r0]\n    add r1, #8\n    str r2, [r4, r1]\n    ldr r0, [r4, #8]\n    add r1, sp, #0xc\n    bl ov49_02259154\n    mov r2, #1\n    ldr r0, [sp, #0x10]\n    lsl r2, r2, #0x10\n    add r0, r0, r2\n    str r0, [sp, #0x10]\n    ldr r1, [sp, #0xc]\n    lsr r0, r2, #1\n    add r0, r1, r0\n    add r5, sp, #0xc\n    str r0, [sp, #0xc]\n    ldmia r5!, {r0, r1}\n    add r3, sp, #0\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #6\n    str r0, [r3]\n    ldr r0, [sp, #4]\n    add r0, r0, r2\n    str r0, [sp, #4]\n    ldr r0, [r4, #8]\n    bl ov49_02258E60\n    cmp r0, #3\n    bls _0226610E\n    b _02266302\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0226611A: ; jump table\n    mov r0, #7\n    ldr r1, [sp, #0x14]\n    lsl r0, r0, #0xe\n    sub r1, r1, r0\n    str r1, [sp, #0x14]\n    ldr r1, [sp, #8]\n    lsr r0, r0, #1\n    sub r0, r1, r0\n    str r0, [sp, #8]\n    add r0, r4, #0\n    ldr r1, _02266328 ; =0x0000A38D\n    add r0, #0x84\n    mov r2, #1\n    bl sub_020182E0\n    add r0, r4, #0\n    ldr r1, _0226632C ; =0x0000DC70\n    add r0, #0xfc\n    mov r2, #1\n    bl sub_020182E0\n    mov r0, #0x5d\n    lsl r0, r0, #2\n    ldr r1, _02266330 ; =0x0000BFFF\n    add r0, r4, r0\n    mov r2, #1\n    bl sub_020182E0\n    mov r1, #2\n    add r0, r4, #0\n    ldr r2, [sp, #0xc]\n    lsl r1, r1, #0xe\n    add r1, r2, r1\n    ldr r2, [sp, #0x10]\n    ldr r3, [sp, #0x14]\n    add r0, #0x84\n    bl sub_020182A8\n    mov r1, #2\n    add r0, r4, #0\n    ldr r2, [sp, #0xc]\n    lsl r1, r1, #0xe\n    sub r1, r2, r1\n    ldr r2, [sp, #0x10]\n    ldr r3, [sp, #0x14]\n    add r0, #0xfc\n    bl sub_020182A8\n    mov r0, #0x5d\n    lsl r0, r0, #2\n    ldr r1, [sp, #0xc]\n    ldr r2, [sp, #0x10]\n    ldr r3, [sp, #0x14]\n    add r0, r4, r0\n    bl sub_020182A8\n    b _02266302\n    mov r0, #6\n    ldr r1, [sp, #0x14]\n    lsl r0, r0, #0xe\n    add r0, r1, r0\n    str r0, [sp, #0x14]\n    mov r0, #0xb\n    ldr r1, [sp, #8]\n    lsl r0, r0, #0xc\n    add r0, r1, r0\n    str r0, [sp, #8]\n    add r0, r4, #0\n    ldr r1, _02266334 ; =0x0000238E\n    add r0, #0x84\n    mov r2, #1\n    bl sub_020182E0\n    add r0, r4, #0\n    ldr r1, _02266338 ; =0x00005C71\n    add r0, #0xfc\n    mov r2, #1\n    bl sub_020182E0\n    mov r0, #0x5d\n    lsl r0, r0, #2\n    ldr r1, _0226633C ; =0x00003FFF\n    add r0, r4, r0\n    mov r2, #1\n    bl sub_020182E0\n    mov r1, #2\n    add r0, r4, #0\n    ldr r2, [sp, #0xc]\n    lsl r1, r1, #0xe\n    sub r1, r2, r1\n    ldr r2, [sp, #0x10]\n    ldr r3, [sp, #0x14]\n    add r0, #0x84\n    bl sub_020182A8\n    mov r1, #2\n    add r0, r4, #0\n    ldr r2, [sp, #0xc]\n    lsl r1, r1, #0xe\n    add r1, r2, r1\n    ldr r2, [sp, #0x10]\n    ldr r3, [sp, #0x14]\n    add r0, #0xfc\n    bl sub_020182A8\n    mov r0, #0x5d\n    lsl r0, r0, #2\n    ldr r1, [sp, #0xc]\n    ldr r2, [sp, #0x10]\n    ldr r3, [sp, #0x14]\n    add r0, r4, r0\n    bl sub_020182A8\n    b _02266302\n    mov r0, #0x17\n    ldr r1, [sp, #0xc]\n    lsl r0, r0, #0xc\n    sub r0, r1, r0\n    str r0, [sp, #0xc]\n    mov r0, #7\n    ldr r1, [sp]\n    lsl r0, r0, #0xc\n    sub r0, r1, r0\n    str r0, [sp]\n    mov r0, #2\n    ldr r1, [sp, #8]\n    lsl r0, r0, #0xe\n    add r0, r1, r0\n    str r0, [sp, #8]\n    add r0, r4, #0\n    ldr r1, _02266340 ; =0x0000E38F\n    add r0, #0x84\n    mov r2, #1\n    bl sub_020182E0\n    add r0, r4, #0\n    ldr r1, _02266344 ; =0x00001C71\n    add r0, #0xfc\n    mov r2, #1\n    bl sub_020182E0\n    mov r0, #0x5d\n    lsl r0, r0, #2\n    add r0, r4, r0\n    mov r1, #0\n    mov r2, #1\n    bl sub_020182E0\n    mov r3, #2\n    add r0, r4, #0\n    ldr r5, [sp, #0x14]\n    lsl r3, r3, #0xe\n    ldr r1, [sp, #0xc]\n    ldr r2, [sp, #0x10]\n    add r0, #0x84\n    sub r3, r5, r3\n    bl sub_020182A8\n    mov r3, #2\n    add r0, r4, #0\n    ldr r5, [sp, #0x14]\n    lsl r3, r3, #0xe\n    ldr r1, [sp, #0xc]\n    ldr r2, [sp, #0x10]\n    add r0, #0xfc\n    add r3, r5, r3\n    bl sub_020182A8\n    mov r0, #0x5d\n    lsl r0, r0, #2\n    ldr r1, [sp, #0xc]\n    ldr r2, [sp, #0x10]\n    ldr r3, [sp, #0x14]\n    add r0, r4, r0\n    bl sub_020182A8\n    b _02266302\n    mov r0, #0x17\n    ldr r1, [sp, #0xc]\n    lsl r0, r0, #0xc\n    add r0, r1, r0\n    str r0, [sp, #0xc]\n    mov r0, #7\n    ldr r1, [sp]\n    lsl r0, r0, #0xc\n    add r0, r1, r0\n    str r0, [sp]\n    mov r0, #2\n    ldr r1, [sp, #8]\n    lsl r0, r0, #0xe\n    add r0, r1, r0\n    str r0, [sp, #8]\n    add r0, r4, #0\n    ldr r1, _02266348 ; =0x0000638D\n    add r0, #0x84\n    mov r2, #1\n    bl sub_020182E0\n    add r0, r4, #0\n    ldr r1, _0226634C ; =0x00009C71\n    add r0, #0xfc\n    mov r2, #1\n    bl sub_020182E0\n    mov r0, #0x5d\n    lsl r0, r0, #2\n    ldr r1, _02266350 ; =0x00007FFF\n    add r0, r4, r0\n    mov r2, #1\n    bl sub_020182E0\n    mov r3, #2\n    add r0, r4, #0\n    ldr r5, [sp, #0x14]\n    lsl r3, r3, #0xe\n    ldr r1, [sp, #0xc]\n    ldr r2, [sp, #0x10]\n    add r0, #0x84\n    add r3, r5, r3\n    bl sub_020182A8\n    mov r3, #2\n    add r0, r4, #0\n    ldr r5, [sp, #0x14]\n    lsl r3, r3, #0xe\n    ldr r1, [sp, #0xc]\n    ldr r2, [sp, #0x10]\n    add r0, #0xfc\n    sub r3, r5, r3\n    bl sub_020182A8\n    mov r0, #0x5d\n    lsl r0, r0, #2\n    ldr r1, [sp, #0xc]\n    ldr r2, [sp, #0x10]\n    ldr r3, [sp, #0x14]\n    add r0, r4, r0\n    bl sub_020182A8\n    add r4, #0xc\n    ldr r1, [sp]\n    ldr r2, [sp, #4]\n    ldr r3, [sp, #8]\n    add r0, r4, #0\n    bl sub_020182A8\n    add sp, #0x18\n    pop {r3, r4, r5, pc}\n    _02266314: .word ov49_0226A730\n    _02266318: .word ov49_0226A73C\n    _0226631C: .word ov49_0226A734\n    _02266320: .word ov49_0226A738\n    _02266324: .word 0x00000958\n    _02266328: .word 0x0000A38D\n    _0226632C: .word 0x0000DC70\n    _02266330: .word 0x0000BFFF\n    _02266334: .word 0x0000238E\n    _02266338: .word 0x00005C71\n    _0226633C: .word 0x00003FFF\n    _02266340: .word 0x0000E38F\n    _02266344: .word 0x00001C71\n    _02266348: .word 0x0000638D\n    _0226634C: .word 0x00009C71\n    _02266350: .word 0x00007FFF"
    );
    #endif
}

void ov49_02266354(void) {
    ov49_02266B28();
}

void ov49_02266360(void) {
    ov49_02266B28();
}

void ov49_0226636C(void) {
    ov49_02266B28();
}

void ov49_02266378(void) {
    ov49_02267908();
}

void ov49_02266384(void) {
    ov49_02267908();
}

void ov49_02266390(void) {
    ov49_02267908();
}

void ov49_0226639C(void) {
    /* Original at 0x0226639C */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    ldr r5, _022663DC ; =ov49_0226A7A8\n    str r0, [sp, #8]\n    add r7, r1, #0\n    mov r4, #0\n    ldrb r3, [r5]\n    ldr r0, [sp, #8]\n    add r1, r7, #0\n    lsl r6, r3, #2\n    ldr r3, _022663E0 ; =ov49_0226A70C\n    add r2, r4, #0\n    add r3, r3, r6\n    bl ov49_02265980\n    add r4, r4, #1\n    add r5, r5, #1\n    cmp r4, #0x10\n    blt _022663A8\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, _022663E4 ; =0x00000954\n    ldr r1, _022663E8 ; =ov49_0226A454\n    add r0, r7, r0\n    mov r2, #2\n    mov r3, #0x21\n    str r7, [sp, #4]\n    bl ov49_02267D98\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _022663DC: .word ov49_0226A7A8\n    _022663E0: .word ov49_0226A70C\n    _022663E4: .word 0x00000954\n    _022663E8: .word ov49_0226A454"
    );
    #endif
}

void ov49_022663EC(void) {
    /* Original at 0x022663EC */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    ldr r5, _0226642C ; =ov49_0226A7B8\n    str r0, [sp, #8]\n    add r7, r1, #0\n    mov r4, #0\n    ldrb r3, [r5]\n    ldr r0, [sp, #8]\n    add r1, r7, #0\n    lsl r6, r3, #2\n    ldr r3, _02266430 ; =ov49_0226A70C\n    add r2, r4, #0\n    add r3, r3, r6\n    bl ov49_02265980\n    add r4, r4, #1\n    add r5, r5, #1\n    cmp r4, #0x10\n    blt _022663F8\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, _02266434 ; =0x00000954\n    ldr r1, _02266438 ; =ov49_0226A46C\n    add r0, r7, r0\n    mov r2, #2\n    mov r3, #0x21\n    str r7, [sp, #4]\n    bl ov49_02267D98\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _0226642C: .word ov49_0226A7B8\n    _02266430: .word ov49_0226A70C\n    _02266434: .word 0x00000954\n    _02266438: .word ov49_0226A46C"
    );
    #endif
}

void ov49_0226643C(void) {
    /* Original at 0x0226643C */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    ldr r5, _0226647C ; =ov49_0226A7C8\n    str r0, [sp, #8]\n    add r7, r1, #0\n    mov r4, #0\n    ldrb r3, [r5]\n    ldr r0, [sp, #8]\n    add r1, r7, #0\n    lsl r6, r3, #2\n    ldr r3, _02266480 ; =ov49_0226A70C\n    add r2, r4, #0\n    add r3, r3, r6\n    bl ov49_02265980\n    add r4, r4, #1\n    add r5, r5, #1\n    cmp r4, #0x10\n    blt _02266448\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, _02266484 ; =0x00000954\n    ldr r1, _02266488 ; =ov49_0226A4B4\n    add r0, r7, r0\n    mov r2, #3\n    mov r3, #0x21\n    str r7, [sp, #4]\n    bl ov49_02267D98\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _0226647C: .word ov49_0226A7C8\n    _02266480: .word ov49_0226A70C\n    _02266484: .word 0x00000954\n    _02266488: .word ov49_0226A4B4"
    );
    #endif
}

void ov49_0226648C(void) {
    /* Original at 0x0226648C */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    ldr r5, _022664CC ; =ov49_0226A7A8\n    str r0, [sp, #8]\n    add r7, r1, #0\n    mov r4, #0\n    ldrb r3, [r5]\n    ldr r0, [sp, #8]\n    add r1, r7, #0\n    lsl r6, r3, #2\n    ldr r3, _022664D0 ; =ov49_0226A70C\n    add r2, r4, #0\n    add r3, r3, r6\n    bl ov49_02265980\n    add r4, r4, #1\n    add r5, r5, #1\n    cmp r4, #0x10\n    blt _02266498\n    mov r0, #1\n    str r0, [sp]\n    ldr r0, _022664D4 ; =0x00000954\n    ldr r1, _022664D8 ; =ov49_0226A464\n    add r0, r7, r0\n    mov r2, #2\n    mov r3, #0x21\n    str r7, [sp, #4]\n    bl ov49_02267D98\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _022664CC: .word ov49_0226A7A8\n    _022664D0: .word ov49_0226A70C\n    _022664D4: .word 0x00000954\n    _022664D8: .word ov49_0226A464"
    );
    #endif
}

void ov49_022664DC(void) {
    /* Original at 0x022664DC */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    ldr r5, _0226651C ; =ov49_0226A7B8\n    str r0, [sp, #8]\n    add r7, r1, #0\n    mov r4, #0\n    ldrb r3, [r5]\n    ldr r0, [sp, #8]\n    add r1, r7, #0\n    lsl r6, r3, #2\n    ldr r3, _02266520 ; =ov49_0226A70C\n    add r2, r4, #0\n    add r3, r3, r6\n    bl ov49_02265980\n    add r4, r4, #1\n    add r5, r5, #1\n    cmp r4, #0x10\n    blt _022664E8\n    mov r0, #1\n    str r0, [sp]\n    ldr r0, _02266524 ; =0x00000954\n    ldr r1, _02266528 ; =ov49_0226A49C\n    add r0, r7, r0\n    mov r2, #3\n    mov r3, #0x29\n    str r7, [sp, #4]\n    bl ov49_02267D98\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _0226651C: .word ov49_0226A7B8\n    _02266520: .word ov49_0226A70C\n    _02266524: .word 0x00000954\n    _02266528: .word ov49_0226A49C"
    );
    #endif
}

void ov49_0226652C(void) {
    /* Original at 0x0226652C */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    ldr r5, _0226656C ; =ov49_0226A7C8\n    str r0, [sp, #8]\n    add r7, r1, #0\n    mov r4, #0\n    ldrb r3, [r5]\n    ldr r0, [sp, #8]\n    add r1, r7, #0\n    lsl r6, r3, #2\n    ldr r3, _02266570 ; =ov49_0226A70C\n    add r2, r4, #0\n    add r3, r3, r6\n    bl ov49_02265980\n    add r4, r4, #1\n    add r5, r5, #1\n    cmp r4, #0x10\n    blt _02266538\n    mov r0, #1\n    str r0, [sp]\n    ldr r0, _02266574 ; =0x00000954\n    ldr r1, _02266578 ; =ov49_0226A4C0\n    add r0, r7, r0\n    mov r2, #3\n    mov r3, #0x21\n    str r7, [sp, #4]\n    bl ov49_02267D98\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _0226656C: .word ov49_0226A7C8\n    _02266570: .word ov49_0226A70C\n    _02266574: .word 0x00000954\n    _02266578: .word ov49_0226A4C0"
    );
    #endif
}

void ov49_0226657C(void) {
    /* Original at 0x0226657C */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    ldr r5, _022665C0 ; =ov49_0226A7A8\n    str r0, [sp, #8]\n    add r7, r1, #0\n    mov r4, #0\n    ldrb r3, [r5]\n    ldr r0, [sp, #8]\n    add r1, r7, #0\n    lsl r6, r3, #2\n    ldr r3, _022665C4 ; =ov49_0226A70C\n    add r2, r4, #0\n    add r3, r3, r6\n    bl ov49_02265980\n    add r4, r4, #1\n    add r5, r5, #1\n    cmp r4, #0x10\n    blt _02266588\n    ldr r0, _022665C8 ; =0x00000954\n    mov r2, #2\n    str r2, [sp]\n    ldr r1, _022665CC ; =ov49_0226A47C\n    add r0, r7, r0\n    mov r3, #0x21\n    str r7, [sp, #4]\n    bl ov49_02267D98\n    ldr r0, [sp, #8]\n    add r1, r7, #0\n    bl ov49_02267C8C\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    _022665C0: .word ov49_0226A7A8\n    _022665C4: .word ov49_0226A70C\n    _022665C8: .word 0x00000954\n    _022665CC: .word ov49_0226A47C"
    );
    #endif
}

void ov49_022665D0(void) {
    /* Original at 0x022665D0 */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    ldr r5, _02266614 ; =ov49_0226A7B8\n    str r0, [sp, #8]\n    add r7, r1, #0\n    mov r4, #0\n    ldrb r3, [r5]\n    ldr r0, [sp, #8]\n    add r1, r7, #0\n    lsl r6, r3, #2\n    ldr r3, _02266618 ; =ov49_0226A70C\n    add r2, r4, #0\n    add r3, r3, r6\n    bl ov49_02265980\n    add r4, r4, #1\n    add r5, r5, #1\n    cmp r4, #0x10\n    blt _022665DC\n    ldr r0, _0226661C ; =0x00000954\n    mov r2, #2\n    str r2, [sp]\n    ldr r1, _02266620 ; =ov49_0226A45C\n    add r0, r7, r0\n    mov r3, #0x21\n    str r7, [sp, #4]\n    bl ov49_02267D98\n    ldr r0, [sp, #8]\n    add r1, r7, #0\n    bl ov49_02267C8C\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    _02266614: .word ov49_0226A7B8\n    _02266618: .word ov49_0226A70C\n    _0226661C: .word 0x00000954\n    _02266620: .word ov49_0226A45C"
    );
    #endif
}

void ov49_02266624(void) {
    /* Original at 0x02266624 */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    ldr r5, _02266668 ; =ov49_0226A7C8\n    str r0, [sp, #8]\n    add r7, r1, #0\n    mov r4, #0\n    ldrb r3, [r5]\n    ldr r0, [sp, #8]\n    add r1, r7, #0\n    lsl r6, r3, #2\n    ldr r3, _0226666C ; =ov49_0226A70C\n    add r2, r4, #0\n    add r3, r3, r6\n    bl ov49_02265980\n    add r4, r4, #1\n    add r5, r5, #1\n    cmp r4, #0x10\n    blt _02266630\n    ldr r0, _02266670 ; =0x00000954\n    mov r2, #2\n    str r2, [sp]\n    ldr r1, _02266674 ; =ov49_0226A474\n    add r0, r7, r0\n    mov r3, #0x21\n    str r7, [sp, #4]\n    bl ov49_02267D98\n    ldr r0, [sp, #8]\n    add r1, r7, #0\n    bl ov49_02267C8C\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    _02266668: .word ov49_0226A7C8\n    _0226666C: .word ov49_0226A70C\n    _02266670: .word 0x00000954\n    _02266674: .word ov49_0226A474"
    );
    #endif
}

void ov49_02266678(void) {
    /* Original at 0x02266678 */
    /* Requires manual decompilation - 95 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    str r0, [sp, #4]\n    add r5, r1, #0\n    mov r0, #2\n    ldrsh r0, [r5, r0]\n    add r0, r0, #1\n    cmp r0, #0x36\n    bgt _0226668C\n    strh r0, [r5, #2]\n    mov r0, #2\n    ldrsh r1, [r5, r0]\n    mov r0, #6\n    mul r0, r1\n    mov r1, #0x36\n    bl _s32_div_f\n    add r6, r0, #0\n    ldr r0, _02266740 ; =0x00000955\n    ldrsb r4, [r5, r0]\n    cmp r4, r6\n    bhs _022666CA\n    add r7, r5, #0\n    add r7, #0xc\n    add r0, r4, #0\n    mov r1, #3\n    bl _s32_div_f\n    ldr r0, _02266744 ; =0x00000954\n    ldrsb r0, [r5, r0]\n    cmp r1, r0\n    bhs _022666C4\n    mov r0, #0x78\n    mul r0, r1\n    add r0, r7, r0\n    mov r1, #1\n    bl sub_020182A0\n    add r4, r4, #1\n    cmp r4, r6\n    blo _022666A8\n    ldr r1, _02266740 ; =0x00000955\n    mov r0, #1\n    str r0, [sp, #8]\n    strb r6, [r5, r1]\n    sub r0, r1, #1\n    ldrsb r0, [r5, r0]\n    mov r4, #0\n    cmp r0, #0\n    ble _02266724\n    add r7, r5, #0\n    add r7, #0xc\n    add r6, r7, #0\n    add r0, r7, #0\n    bl sub_020182A4\n    cmp r0, #1\n    bne _02266716\n    ldr r0, [sp, #4]\n    add r1, r5, #0\n    add r2, r4, #0\n    mov r3, #0\n    bl ov49_02265B28\n    str r0, [sp, #8]\n    cmp r0, #0\n    beq _02266716\n    add r0, r6, #0\n    mov r1, #0\n    bl sub_020182A0\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, [sp, #4]\n    add r1, r5, #0\n    add r2, r4, #0\n    mov r3, #0\n    bl ov49_02265BE8\n    ldr r0, _02266744 ; =0x00000954\n    add r4, r4, #1\n    ldrsb r0, [r5, r0]\n    add r7, #0x78\n    add r6, #0x78\n    cmp r4, r0\n    blt _022666E2\n    ldr r0, _02266740 ; =0x00000955\n    ldrsb r0, [r5, r0]\n    cmp r0, #6\n    blt _02266738\n    ldr r0, [sp, #8]\n    cmp r0, #1\n    bne _02266738\n    add sp, #0xc\n    mov r0, #1\n    pop {r4, r5, r6, r7, pc}\n    mov r0, #0\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _02266740: .word 0x00000955\n    _02266744: .word 0x00000954"
    );
    #endif
}

void ov49_02266748(void) {
    ov49_02267AF0();
}

void ov49_02266754(void) {
    ov49_02267AF0();
}

void ov49_02266760(void) {
    ov49_02267AF0();
}

void ov49_0226676C(void) {
    /* Original at 0x0226676C */
    /* Requires manual decompilation - 83 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r0, #0\n    add r5, r1, #0\n    mov r0, #2\n    ldrsh r1, [r5, r0]\n    lsl r0, r1, #1\n    add r1, r1, r0\n    asr r0, r1, #4\n    lsr r0, r0, #0x1b\n    add r0, r1, r0\n    asr r4, r0, #5\n    ldr r0, _02266818 ; =0x00000954\n    ldrsh r1, [r5, r0]\n    cmp r4, r1\n    beq _022667BA\n    strh r4, [r5, r0]\n    add r0, r0, #2\n    ldrsh r0, [r5, r0]\n    cmp r0, r4\n    bls _022667BA\n    cmp r4, #0\n    beq _022667AA\n    add r2, r5, #0\n    sub r1, r4, #1\n    mov r0, #0x78\n    mul r0, r1\n    add r2, #0xc\n    add r0, r2, r0\n    mov r1, #0\n    bl sub_020182A0\n    add r1, r5, #0\n    mov r0, #0x78\n    add r1, #0xc\n    mul r0, r4\n    add r0, r1, r0\n    mov r1, #1\n    bl sub_020182A0\n    mov r0, #2\n    ldrsh r0, [r5, r0]\n    cmp r0, #0x20\n    bge _022667C6\n    add r0, r0, #1\n    strh r0, [r5, #2]\n    ldr r0, _0226681C ; =0x00000956\n    mov r4, #0\n    ldrsh r0, [r5, r0]\n    str r4, [sp]\n    cmp r0, #0\n    ble _02266812\n    add r6, r5, #0\n    add r6, #0xc\n    add r0, r6, #0\n    bl sub_020182A4\n    cmp r0, #0\n    beq _02266806\n    ldr r0, _0226681C ; =0x00000956\n    ldrsh r0, [r5, r0]\n    sub r0, r0, #1\n    cmp r4, r0\n    bne _022667FA\n    add r0, r7, #0\n    add r1, r5, #0\n    add r2, r4, #0\n    mov r3, #0\n    bl ov49_02265B28\n    str r0, [sp]\n    b _02266806\n    add r0, r7, #0\n    add r1, r5, #0\n    add r2, r4, #0\n    mov r3, #0\n    bl ov49_02265B14\n    ldr r0, _0226681C ; =0x00000956\n    add r4, r4, #1\n    ldrsh r0, [r5, r0]\n    add r6, #0x78\n    cmp r4, r0\n    blt _022667D6\n    ldr r0, [sp]\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02266818: .word 0x00000954\n    _0226681C: .word 0x00000956"
    );
    #endif
}

void ov49_02266820(void) {
    /* Original at 0x02266820 */
    /* Requires manual decompilation - 155 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    str r0, [sp, #4]\n    ldr r0, _02266968 ; =0x0000087C\n    add r5, r1, #0\n    ldr r0, [r5, r0]\n    ldrb r0, [r0, #2]\n    cmp r0, #0x11\n    bne _02266836\n    bl GF_AssertFail\n    ldr r0, _0226696C ; =0x00000954\n    ldr r1, [r5, r0]\n    cmp r1, #0\n    ble _0226684E\n    sub r1, r1, #1\n    str r1, [r5, r0]\n    add r0, r5, #0\n    add r0, #0xc\n    mov r1, #0\n    bl sub_020182A0\n    b _022668AA\n    mov r0, #2\n    ldrsh r1, [r5, r0]\n    cmp r1, #3\n    bge _022668AA\n    add r0, r5, #0\n    add r1, r1, #1\n    bl ov49_02265968\n    cmp r0, #1\n    bne _022668AA\n    add r0, r5, #0\n    add r0, #0xc\n    mov r1, #1\n    bl sub_020182A0\n    mov r2, #0\n    ldr r0, [sp, #4]\n    add r1, r5, #0\n    add r3, r2, #0\n    bl ov49_02265B28\n    cmp r0, #1\n    bne _022668AA\n    mov r1, #2\n    ldrsh r0, [r5, r1]\n    mov r2, #3\n    add r0, r0, #1\n    strh r0, [r5, #2]\n    ldr r0, _0226696C ; =0x00000954\n    str r2, [r5, r0]\n    ldrsh r0, [r5, r1]\n    cmp r0, #3\n    bge _022668A0\n    mov r2, #0\n    ldr r0, [sp, #4]\n    add r1, r5, #0\n    add r3, r2, #0\n    str r2, [sp]\n    bl ov49_02265BE8\n    b _022668AA\n    add r0, r5, #0\n    add r0, #0xc\n    mov r1, #0\n    bl sub_020182A0\n    add r7, r5, #0\n    mov r4, #1\n    add r7, #0xc\n    str r4, [sp, #8]\n    add r7, #0x78\n    add r6, r5, #4\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov49_02265968\n    cmp r0, #1\n    bne _02266956\n    mov r0, #2\n    ldrsh r1, [r5, r0]\n    sub r0, r4, #1\n    cmp r1, r0\n    ble _02266952\n    add r0, r7, #0\n    mov r1, #1\n    bl sub_020182A0\n    mov r0, #0xa\n    lsl r0, r0, #0xa\n    str r0, [sp]\n    ldr r0, [sp, #4]\n    add r1, r5, #0\n    add r2, r4, #0\n    mov r3, #0\n    bl ov49_02265B94\n    cmp r0, #0\n    bne _022668F0\n    mov r0, #0\n    str r0, [sp, #8]\n    b _02266956\n    sub r0, r4, #1\n    lsl r0, r0, #2\n    add r1, r5, r0\n    ldr r0, _02266970 ; =0x00000958\n    ldr r0, [r1, r0]\n    cmp r0, #0\n    bne _0226691E\n    add r0, r7, #0\n    mov r1, #0\n    bl sub_020182A0\n    ldr r0, _02266968 ; =0x0000087C\n    ldr r0, [r6, r0]\n    ldrb r0, [r0]\n    lsl r1, r0, #4\n    ldr r0, [sp, #4]\n    add r1, r0, r1\n    ldr r0, _02266974 ; =0x00010558\n    ldr r0, [r1, r0]\n    mov r1, #0x1f\n    bl NNS_G3dMdlSetMdlAlphaAll\n    b _02266956\n    ldr r0, _02266970 ; =0x00000958\n    ldr r0, [r1, r0]\n    sub r2, r0, #1\n    ldr r0, _02266970 ; =0x00000958\n    str r2, [r1, r0]\n    sub r0, #0xdc\n    ldr r0, [r6, r0]\n    ldrb r0, [r0]\n    lsl r2, r0, #4\n    ldr r0, [sp, #4]\n    add r2, r0, r2\n    ldr r0, _02266974 ; =0x00010558\n    ldr r0, [r2, r0]\n    ldr r2, _02266970 ; =0x00000958\n    ldr r1, [r1, r2]\n    mov r2, #0x14\n    mul r2, r1\n    asr r1, r2, #2\n    lsr r1, r1, #0x1d\n    add r1, r2, r1\n    asr r1, r1, #3\n    bl NNS_G3dMdlSetMdlAlphaAll\n    mov r0, #0\n    str r0, [sp, #8]\n    b _02266956\n    mov r0, #0\n    str r0, [sp, #8]\n    add r4, r4, #1\n    add r7, #0x78\n    add r6, r6, #4\n    cmp r4, #3\n    ble _022668B6\n    ldr r0, [sp, #8]\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _02266968: .word 0x0000087C\n    _0226696C: .word 0x00000954\n    _02266970: .word 0x00000958\n    _02266974: .word 0x00010558"
    );
    #endif
}

void ov49_02266978(void) {
    /* Original at 0x02266978 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    ldrb r2, [r4, #1]\n    add r5, r0, #0\n    cmp r2, #0\n    beq _0226698A\n    cmp r2, #1\n    beq _022669A0\n    b _022669AC\n    bl ov49_02266D60\n    cmp r0, #0\n    beq _022669AC\n    mov r0, #1\n    strb r0, [r4, #1]\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov49_02266EF8\n    b _022669AC\n    bl ov49_022670B8\n    cmp r0, #0\n    beq _022669AC\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov49_022669B0(void) {
    /* Original at 0x022669B0 */
    /* Requires manual decompilation - 101 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r5, r1, #0\n    ldr r1, _02266A7C ; =0x00000955\n    str r0, [sp]\n    add r0, r1, #1\n    ldrsb r2, [r5, r1]\n    ldrb r0, [r5, r0]\n    cmp r2, r0\n    bge _02266A1C\n    sub r0, r1, #1\n    ldrsb r0, [r5, r0]\n    add r2, r0, #1\n    sub r0, r1, #1\n    strb r2, [r5, r0]\n    ldrsb r0, [r5, r0]\n    cmp r0, #8\n    blt _022669E0\n    mov r2, #0\n    sub r0, r1, #1\n    strb r2, [r5, r0]\n    ldrsb r0, [r5, r1]\n    add r0, r0, #1\n    strb r0, [r5, r1]\n    ldr r0, _02266A80 ; =0x00000954\n    ldrsb r1, [r5, r0]\n    lsl r2, r1, #2\n    asr r1, r2, #2\n    lsr r1, r1, #0x1d\n    add r1, r2, r1\n    asr r2, r1, #3\n    add r1, r0, #1\n    ldrsb r1, [r5, r1]\n    add r0, r0, #3\n    ldrb r6, [r5, r0]\n    lsl r1, r1, #2\n    add r7, r2, r1\n    cmp r6, r7\n    bhs _02266A18\n    add r1, r5, #0\n    mov r0, #0x78\n    add r1, #0xc\n    mul r0, r6\n    add r4, r1, r0\n    add r0, r4, #0\n    mov r1, #1\n    bl sub_020182A0\n    add r6, r6, #1\n    add r4, #0x78\n    cmp r6, r7\n    blo _02266A08\n    ldr r0, _02266A84 ; =0x00000957\n    strb r7, [r5, r0]\n    ldr r0, _02266A84 ; =0x00000957\n    mov r4, #0\n    ldrb r0, [r5, r0]\n    cmp r0, #0\n    ble _02266A5C\n    add r7, r5, #0\n    add r7, #0xc\n    add r6, r7, #0\n    add r0, r7, #0\n    bl sub_020182A4\n    cmp r0, #1\n    bne _02266A4E\n    ldr r0, [sp]\n    add r1, r5, #0\n    add r2, r4, #0\n    bl ov49_02267A1C\n    str r0, [sp, #4]\n    cmp r0, #1\n    bne _02266A4E\n    add r0, r6, #0\n    mov r1, #0\n    bl sub_020182A0\n    ldr r0, _02266A84 ; =0x00000957\n    add r4, r4, #1\n    ldrb r0, [r5, r0]\n    add r7, #0x78\n    add r6, #0x78\n    cmp r4, r0\n    blt _02266A2C\n    ldr r0, _02266A7C ; =0x00000955\n    ldrsb r1, [r5, r0]\n    add r0, r0, #1\n    ldrb r0, [r5, r0]\n    cmp r1, r0\n    bne _02266A74\n    ldr r0, [sp, #4]\n    cmp r0, #1\n    bne _02266A74\n    add sp, #8\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02266A7C: .word 0x00000955\n    _02266A80: .word 0x00000954\n    _02266A84: .word 0x00000957"
    );
    #endif
}

void ov49_02266A88(void) {
    /* Original at 0x02266A88 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    mov r1, #2\n    ldr r0, _02266AAC ; =0x00000954\n    ldrsh r1, [r4, r1]\n    add r0, r4, r0\n    bl ov49_02267E18\n    mov r1, #2\n    ldrsh r1, [r4, r1]\n    add r1, r1, #1\n    strh r1, [r4, #2]\n    cmp r0, #2\n    bne _02266AA8\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}\n    _02266AAC: .word 0x00000954"
    );
    #endif
}

void ov49_02266AB0(void) {
    /* Original at 0x02266AB0 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r1, #0\n    mov r1, #2\n    add r6, r0, #0\n    ldr r0, _02266AEC ; =0x00000954\n    ldrsh r1, [r5, r1]\n    add r0, r5, r0\n    bl ov49_02267E18\n    add r4, r0, #0\n    mov r0, #2\n    ldrsh r0, [r5, r0]\n    add r0, r0, #1\n    strh r0, [r5, #2]\n    cmp r4, #1\n    bne _02266AD8\n    add r0, r6, #0\n    add r1, r5, #0\n    bl ov49_02267D00\n    add r0, r6, #0\n    add r1, r5, #0\n    bl ov49_02267D34\n    cmp r4, #2\n    bne _02266AE8\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    _02266AEC: .word 0x00000954"
    );
    #endif
}

void ov49_02266AF0(void) {
    /* Original at 0x02266AF0 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r1, #0\n    add r6, r0, #0\n    ldr r0, [r5, #8]\n    bl ov49_02258F70\n    cmp r0, #1\n    bne _02266B04\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    mov r4, #0\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov49_02265968\n    cmp r0, #1\n    bne _02266B1C\n    add r0, r6, #0\n    add r1, r5, #0\n    add r2, r4, #0\n    bl ov49_022659D0\n    add r4, r4, #1\n    cmp r4, #0x12\n    blt _02266B06\n    mov r0, #1\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov49_02266B28(void) {
    /* Original at 0x02266B28 */
    /* Requires manual decompilation - 138 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #8\n    add r5, r0, #0\n    ldr r0, [r5, #4]\n    add r4, r1, #0\n    add r6, r2, #0\n    bl ov49_02258DAC\n    ldr r1, [r4, #8]\n    cmp r1, r0\n    bne _02266B44\n    ldr r0, [r5, #8]\n    bl ov49_0225CC44\n    ldr r0, [r4, #8]\n    bl ov49_02258E34\n    add r2, sp, #0\n    strh r0, [r2]\n    lsr r0, r0, #0x10\n    strh r0, [r2, #2]\n    ldrh r0, [r2]\n    mov r1, #4\n    strh r0, [r2, #4]\n    ldrh r0, [r2, #2]\n    strh r0, [r2, #6]\n    ldrsh r1, [r2, r1]\n    ldr r0, [r5, #0xc]\n    asr r3, r1, #3\n    lsr r3, r3, #0x1c\n    add r3, r1, r3\n    lsl r1, r3, #0xc\n    mov r3, #6\n    ldrsh r2, [r2, r3]\n    lsr r1, r1, #0x10\n    asr r3, r2, #3\n    lsr r3, r3, #0x1c\n    add r3, r2, r3\n    lsl r2, r3, #0xc\n    lsr r2, r2, #0x10\n    bl ov49_022589C4\n    cmp r0, #0x2a\n    bne _02266B84\n    mov r1, #1\n    b _02266B86\n    mov r1, #0\n    ldr r0, _02266C58 ; =0x00000965\n    cmp r6, #1\n    strb r1, [r4, r0]\n    beq _02266B96\n    cmp r6, #2\n    beq _02266BB0\n    cmp r6, #3\n    b _02266BE2\n    ldr r3, _02266C5C ; =ov49_0226A74C\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #0\n    bl ov49_02265980\n    mov r2, #0\n    add r0, r5, #0\n    add r1, r4, #0\n    add r3, r2, #0\n    bl ov49_0226786C\n    b _02266C2A\n    ldr r3, _02266C5C ; =ov49_0226A74C\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #0\n    bl ov49_02265980\n    ldr r3, _02266C60 ; =ov49_0226A750\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #1\n    bl ov49_02265980\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #0\n    mov r3, #2\n    bl ov49_0226786C\n    mov r2, #1\n    add r0, r5, #0\n    add r1, r4, #0\n    add r3, r2, #0\n    bl ov49_0226786C\n    b _02266C2A\n    ldr r3, _02266C5C ; =ov49_0226A74C\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #0\n    bl ov49_02265980\n    ldr r3, _02266C60 ; =ov49_0226A750\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #1\n    bl ov49_02265980\n    ldr r3, _02266C64 ; =ov49_0226A754\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #2\n    bl ov49_02265980\n    mov r2, #0\n    add r0, r5, #0\n    add r1, r4, #0\n    add r3, r2, #0\n    bl ov49_0226786C\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #1\n    mov r3, #2\n    bl ov49_0226786C\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #2\n    mov r3, #1\n    bl ov49_0226786C\n    ldr r0, _02266C68 ; =0x00000955\n    mov r1, #0\n    strb r6, [r4, r0]\n    ldr r0, [r4, #8]\n    bl ov49_02259130\n    ldr r0, _02266C58 ; =0x00000965\n    ldrb r0, [r4, r0]\n    cmp r0, #0\n    bne _02266C4A\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov49_02266C6C\n    add sp, #8\n    pop {r4, r5, r6, pc}\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov49_02266D04\n    add sp, #8\n    pop {r4, r5, r6, pc}\n    nop\n    _02266C58: .word 0x00000965\n    _02266C5C: .word ov49_0226A74C\n    _02266C60: .word ov49_0226A750\n    _02266C64: .word ov49_0226A754\n    _02266C68: .word 0x00000955"
    );
    #endif
}

void ov49_02266C6C(void) {
    /* Original at 0x02266C6C */
    /* Requires manual decompilation - 61 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x1c\n    add r5, r1, #0\n    ldr r0, [r5, #8]\n    add r1, sp, #0x10\n    bl ov49_02259154\n    ldr r0, _02266CEC ; =0x00000955\n    ldrsb r0, [r5, r0]\n    sub r1, r0, #1\n    ldr r0, _02266CF0 ; =ov49_0226A450\n    ldrb r0, [r0, r1]\n    cmp r0, #0\n    beq _02266C9A\n    lsl r0, r0, #0xc\n    bl _fflt\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    b _02266CA8\n    lsl r0, r0, #0xc\n    bl _fflt\n    mov r1, #0x3f\n    lsl r1, r1, #0x18\n    bl _fsub\n    ldr r6, [sp, #0x14]\n    ldr r4, [sp, #0x18]\n    ldr r7, [sp, #0x10]\n    bl _ffix\n    add r0, r6, r0\n    str r0, [sp]\n    str r4, [sp, #4]\n    str r4, [sp, #8]\n    mov r0, #0x6c\n    str r0, [sp, #0xc]\n    ldr r0, _02266CF4 ; =0x00000A04\n    add r1, r7, #0\n    add r0, r5, r0\n    add r2, r7, #0\n    add r3, r6, #0\n    bl ov49_0226540C\n    ldr r0, _02266CF8 ; =0x00000A2C\n    mov r3, #2\n    ldr r2, _02266CFC ; =0x0000071C\n    add r0, r5, r0\n    mov r1, #0\n    lsl r3, r3, #0xe\n    bl ov49_022655F4\n    add r0, r5, #0\n    bl ov49_0226747C\n    ldr r0, _02266D00 ; =0x00000956\n    mov r1, #0\n    strh r1, [r5, r0]\n    add sp, #0x1c\n    pop {r4, r5, r6, r7, pc}\n    _02266CEC: .word 0x00000955\n    _02266CF0: .word ov49_0226A450\n    _02266CF4: .word 0x00000A04\n    _02266CF8: .word 0x00000A2C\n    _02266CFC: .word 0x0000071C\n    _02266D00: .word 0x00000956"
    );
    #endif
}

void ov49_02266D04(void) {
    /* Original at 0x02266D04 */
    /* Requires manual decompilation - 38 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0x1c\n    add r4, r1, #0\n    ldr r0, [r4, #8]\n    add r1, sp, #0x10\n    bl ov49_02259154\n    mov r0, #2\n    ldr r3, [sp, #0x14]\n    lsl r0, r0, #0xc\n    ldr r2, [sp, #0x18]\n    ldr r1, [sp, #0x10]\n    add r0, r3, r0\n    str r0, [sp]\n    str r2, [sp, #4]\n    str r2, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    ldr r0, _02266D50 ; =0x00000A04\n    add r2, r1, #0\n    add r0, r4, r0\n    bl ov49_0226540C\n    ldr r0, _02266D54 ; =0x00000A2C\n    mov r1, #0\n    ldr r2, _02266D58 ; =0x0000071C\n    add r0, r4, r0\n    add r3, r1, #0\n    bl ov49_022655F4\n    add r0, r4, #0\n    bl ov49_02267674\n    ldr r0, _02266D5C ; =0x00000956\n    mov r1, #0\n    strh r1, [r4, r0]\n    add sp, #0x1c\n    pop {r3, r4, pc}\n    _02266D50: .word 0x00000A04\n    _02266D54: .word 0x00000A2C\n    _02266D58: .word 0x0000071C\n    _02266D5C: .word 0x00000956"
    );
    #endif
}

void ov49_02266D60(void) {
    /* Original at 0x02266D60 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r2, _02266D78 ; =0x00000965\n    ldrb r2, [r1, r2]\n    cmp r2, #0\n    bne _02266D70\n    bl ov49_02266D7C\n    pop {r3, pc}\n    bl ov49_02266E78\n    pop {r3, pc}\n    nop\n    _02266D78: .word 0x00000965"
    );
    #endif
}

void ov49_02266D7C(void) {
    /* Original at 0x02266D7C */
    /* Requires manual decompilation - 109 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    add r5, r1, #0\n    ldr r1, _02266E64 ; =0x00000A04\n    add r6, r0, #0\n    add r0, r5, r1\n    sub r1, #0xae\n    ldrsh r1, [r5, r1]\n    bl ov49_02265434\n    str r0, [sp]\n    ldr r0, _02266E68 ; =0x00000A2C\n    add r0, r5, r0\n    bl ov49_02265628\n    ldr r0, _02266E6C ; =0x00000956\n    ldrsh r1, [r5, r0]\n    add r1, r1, #1\n    strh r1, [r5, r0]\n    ldr r0, [r5, #8]\n    add r1, sp, #0xc\n    bl ov49_02259154\n    ldr r0, _02266E64 ; =0x00000A04\n    add r1, sp, #0xc\n    add r0, r5, r0\n    add r2, sp, #0x10\n    add r3, sp, #0x14\n    bl ov49_022655E0\n    ldr r0, _02266E68 ; =0x00000A2C\n    add r1, sp, #8\n    add r0, r5, r0\n    bl ov49_02265660\n    ldr r0, [sp]\n    cmp r0, #0\n    bne _02266DD0\n    ldr r1, [sp, #0xc]\n    ldr r0, [sp, #8]\n    add r0, r1, r0\n    str r0, [sp, #0xc]\n    ldr r0, [r5, #8]\n    add r1, sp, #0xc\n    bl ov49_02259148\n    add r0, r5, #0\n    bl ov49_0226747C\n    ldr r0, _02266E70 ; =0x00000955\n    mov r4, #0\n    ldrsb r0, [r5, r0]\n    cmp r0, #0\n    ble _02266DFC\n    ldr r7, _02266E70 ; =0x00000955\n    add r0, r6, #0\n    add r1, r5, #0\n    add r2, r4, #0\n    bl ov49_0226789C\n    ldrsb r0, [r5, r7]\n    add r4, r4, #1\n    cmp r4, r0\n    blt _02266DEA\n    ldr r0, [r6, #4]\n    ldr r7, [r5, #8]\n    bl ov49_02258DAC\n    cmp r7, r0\n    bne _02266E5E\n    ldr r0, _02266E74 ; =gSystem\n    mov r1, #0x40\n    ldr r0, [r0, #0x48]\n    mov r4, #4\n    tst r1, r0\n    beq _02266E16\n    mov r4, #0\n    mov r1, #0x80\n    tst r1, r0\n    beq _02266E1E\n    mov r4, #1\n    mov r1, #0x10\n    tst r1, r0\n    beq _02266E26\n    mov r4, #3\n    mov r1, #0x20\n    tst r0, r1\n    beq _02266E2E\n    mov r4, #2\n    cmp r4, #4\n    beq _02266E5E\n    add r0, r7, #0\n    add r1, r4, #0\n    bl ov49_02259160\n    ldr r0, [r5, #8]\n    bl ov49_02258E34\n    add r1, sp, #4\n    strh r0, [r1]\n    lsr r0, r0, #0x10\n    strh r0, [r1, #2]\n    mov r3, sp\n    ldrh r2, [r1]\n    ldr r0, [r5, #8]\n    sub r3, r3, #4\n    strh r2, [r3]\n    ldrh r1, [r1, #2]\n    add r2, r4, #0\n    strh r1, [r3, #2]\n    ldr r1, [r3]\n    bl ov49_02258E04\n    ldr r0, [sp]\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    _02266E64: .word 0x00000A04\n    _02266E68: .word 0x00000A2C\n    _02266E6C: .word 0x00000956\n    _02266E70: .word 0x00000955\n    _02266E74: .word gSystem"
    );
    #endif
}

void ov49_02266E78(void) {
    /* Original at 0x02266E78 */
    /* Requires manual decompilation - 53 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r5, r1, #0\n    ldr r1, _02266EE8 ; =0x00000A04\n    add r6, r0, #0\n    add r0, r5, r1\n    sub r1, #0xae\n    ldrsh r1, [r5, r1]\n    bl ov49_02265434\n    str r0, [sp]\n    ldr r0, _02266EEC ; =0x00000A2C\n    add r0, r5, r0\n    bl ov49_02265628\n    ldr r0, _02266EF0 ; =0x00000956\n    ldrsh r1, [r5, r0]\n    add r1, r1, #1\n    strh r1, [r5, r0]\n    ldr r0, [r5, #8]\n    add r1, sp, #4\n    bl ov49_02259154\n    ldr r0, _02266EE8 ; =0x00000A04\n    add r1, sp, #4\n    add r0, r5, r0\n    add r2, sp, #8\n    add r3, sp, #0xc\n    bl ov49_022655E0\n    ldr r0, [r5, #8]\n    add r1, sp, #4\n    bl ov49_02259148\n    add r0, r5, #0\n    bl ov49_02267674\n    ldr r0, _02266EF4 ; =0x00000955\n    mov r4, #0\n    ldrsb r0, [r5, r0]\n    cmp r0, #0\n    ble _02266EE0\n    ldr r7, _02266EF4 ; =0x00000955\n    add r0, r6, #0\n    add r1, r5, #0\n    add r2, r4, #0\n    bl ov49_0226789C\n    ldrsb r0, [r5, r7]\n    add r4, r4, #1\n    cmp r4, r0\n    blt _02266ECE\n    ldr r0, [sp]\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02266EE8: .word 0x00000A04\n    _02266EEC: .word 0x00000A2C\n    _02266EF0: .word 0x00000956\n    _02266EF4: .word 0x00000955"
    );
    #endif
}

void ov49_02266EF8(void) {
    /* Original at 0x02266EF8 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r2, _02266F10 ; =0x00000965\n    ldrb r2, [r1, r2]\n    cmp r2, #0\n    bne _02266F08\n    bl ov49_02266F14\n    pop {r3, pc}\n    bl ov49_02267074\n    pop {r3, pc}\n    nop\n    _02266F10: .word 0x00000965"
    );
    #endif
}

void ov49_02266F14(void) {
    /* Original at 0x02266F14 */
    /* Requires manual decompilation - 159 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x30\n    add r5, r1, #0\n    str r0, [sp, #0x10]\n    ldr r0, [r5, #8]\n    add r1, sp, #0x24\n    bl ov49_02259154\n    ldr r0, _0226705C ; =0x00000955\n    ldrsb r0, [r5, r0]\n    sub r1, r0, #1\n    ldr r0, _02267060 ; =ov49_0226A450\n    ldrb r0, [r0, r1]\n    cmp r0, #0\n    beq _02266F44\n    lsl r0, r0, #0xc\n    bl _fflt\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    b _02266F52\n    lsl r0, r0, #0xc\n    bl _fflt\n    mov r1, #0x3f\n    lsl r1, r1, #0x18\n    bl _fsub\n    ldr r6, [sp, #0x28]\n    ldr r4, [sp, #0x2c]\n    ldr r7, [sp, #0x24]\n    bl _ffix\n    sub r0, r6, r0\n    str r0, [sp]\n    str r4, [sp, #4]\n    str r4, [sp, #8]\n    mov r0, #0xa\n    str r0, [sp, #0xc]\n    ldr r0, _02267064 ; =0x00000A04\n    add r1, r7, #0\n    add r0, r5, r0\n    add r2, r7, #0\n    add r3, r6, #0\n    bl ov49_0226540C\n    ldr r1, _02267068 ; =0x00000956\n    mov r4, #0\n    strh r4, [r5, r1]\n    sub r0, r1, #2\n    strb r4, [r5, r0]\n    sub r0, r1, #1\n    ldrsb r0, [r5, r0]\n    cmp r0, #0\n    ble _02267052\n    add r0, r5, #0\n    str r0, [sp, #0x14]\n    add r0, #0xc\n    str r0, [sp, #0x14]\n    add r0, r1, #0\n    add r0, #0x36\n    add r1, #0x12\n    add r7, r5, r0\n    add r6, r5, r1\n    ldr r0, [sp, #0x14]\n    add r1, sp, #0x24\n    add r2, sp, #0x28\n    add r3, sp, #0x2c\n    bl sub_020182B0\n    mov r0, #0x96\n    add r1, r5, r4\n    lsl r0, r0, #4\n    ldrb r0, [r1, r0]\n    cmp r0, #0\n    beq _02266FBC\n    cmp r0, #1\n    beq _02266FD6\n    cmp r0, #2\n    beq _02266FF0\n    b _02267008\n    ldr r0, [sp, #0x24]\n    ldr r1, [sp, #0x28]\n    str r0, [sp, #0x20]\n    mov r0, #1\n    lsl r0, r0, #0x12\n    add r0, r1, r0\n    str r0, [sp, #0x1c]\n    mov r0, #1\n    ldr r1, [sp, #0x2c]\n    lsl r0, r0, #0x12\n    sub r0, r1, r0\n    str r0, [sp, #0x18]\n    b _02267008\n    mov r0, #1\n    ldr r1, [sp, #0x24]\n    lsl r0, r0, #0x12\n    add r0, r1, r0\n    str r0, [sp, #0x20]\n    mov r0, #1\n    ldr r1, [sp, #0x28]\n    lsl r0, r0, #0x12\n    add r0, r1, r0\n    str r0, [sp, #0x1c]\n    ldr r0, [sp, #0x2c]\n    str r0, [sp, #0x18]\n    b _02267008\n    mov r0, #1\n    ldr r1, [sp, #0x24]\n    lsl r0, r0, #0x12\n    sub r0, r1, r0\n    str r0, [sp, #0x20]\n    mov r0, #1\n    ldr r1, [sp, #0x28]\n    lsl r0, r0, #0x12\n    add r0, r1, r0\n    str r0, [sp, #0x1c]\n    ldr r0, [sp, #0x2c]\n    str r0, [sp, #0x18]\n    ldr r0, [sp, #0x1c]\n    ldr r2, [sp, #0x20]\n    str r0, [sp]\n    ldr r0, [sp, #0x2c]\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x18]\n    str r0, [sp, #8]\n    mov r0, #0x1a\n    str r0, [sp, #0xc]\n    ldr r1, [sp, #0x24]\n    ldr r3, [sp, #0x28]\n    add r0, r7, #0\n    bl ov49_0226540C\n    mov r3, #6\n    ldr r2, _0226706C ; =0x00000AAA\n    add r0, r6, #0\n    mov r1, #0\n    lsl r3, r3, #0xc\n    bl ov49_022655F4\n    ldr r0, [sp, #0x10]\n    add r1, r5, #0\n    add r2, r4, #0\n    mov r3, #3\n    bl ov49_0226786C\n    ldr r0, [sp, #0x14]\n    add r4, r4, #1\n    add r0, #0x78\n    str r0, [sp, #0x14]\n    ldr r0, _0226705C ; =0x00000955\n    add r7, #0x28\n    ldrsb r0, [r5, r0]\n    add r6, #0xc\n    cmp r4, r0\n    blt _02266F9A\n    ldr r0, _02267070 ; =0x00000964\n    mov r1, #0\n    strb r1, [r5, r0]\n    add sp, #0x30\n    pop {r3, r4, r5, r6, r7, pc}\n    _0226705C: .word 0x00000955\n    _02267060: .word ov49_0226A450\n    _02267064: .word 0x00000A04\n    _02267068: .word 0x00000956\n    _0226706C: .word 0x00000AAA\n    _02267070: .word 0x00000964"
    );
    #endif
}

void ov49_02267074(void) {
    /* Original at 0x02267074 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0x1c\n    add r4, r1, #0\n    ldr r0, [r4, #8]\n    add r1, sp, #0x10\n    bl ov49_02259154\n    mov r0, #2\n    ldr r3, [sp, #0x14]\n    lsl r0, r0, #0xc\n    ldr r2, [sp, #0x18]\n    ldr r1, [sp, #0x10]\n    sub r0, r3, r0\n    str r0, [sp]\n    str r2, [sp, #4]\n    str r2, [sp, #8]\n    mov r0, #1\n    str r0, [sp, #0xc]\n    ldr r0, _022670B0 ; =0x00000A04\n    add r2, r1, #0\n    add r0, r4, r0\n    bl ov49_0226540C\n    ldr r0, _022670B4 ; =0x00000956\n    mov r1, #0\n    strh r1, [r4, r0]\n    sub r0, r0, #2\n    strb r1, [r4, r0]\n    add sp, #0x1c\n    pop {r3, r4, pc}\n    _022670B0: .word 0x00000A04\n    _022670B4: .word 0x00000956"
    );
    #endif
}

void ov49_022670B8(void) {
    /* Original at 0x022670B8 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r2, _022670D0 ; =0x00000965\n    ldrb r2, [r1, r2]\n    cmp r2, #0\n    bne _022670C8\n    bl ov49_022670D4\n    pop {r3, pc}\n    bl ov49_02267328\n    pop {r3, pc}\n    nop\n    _022670D0: .word 0x00000965"
    );
    #endif
}

void ov49_022670D4(void) {
    /* Original at 0x022670D4 */
    /* Requires manual decompilation - 260 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x3c\n    add r4, r1, #0\n    ldr r1, _02267300 ; =0x00000954\n    add r6, r0, #0\n    ldrsb r0, [r4, r1]\n    cmp r0, #4\n    bhi _0226710A\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _022670F0: ; jump table\n    add r0, r1, #2\n    ldrsh r0, [r4, r0]\n    add r2, r0, #1\n    add r0, r1, #2\n    strh r2, [r4, r0]\n    ldrsh r0, [r4, r0]\n    cmp r0, #8\n    bge _0226710C\n    b _02267230\n    mov r0, #1\n    strb r0, [r4, r1]\n    b _02267230\n    ldr r0, [r4, #8]\n    mov r1, #1\n    bl ov49_0225919C\n    ldr r0, _02267304 ; =0x00000956\n    mov r1, #0x10\n    strh r1, [r4, r0]\n    mov r1, #2\n    sub r0, r0, #2\n    strb r1, [r4, r0]\n    b _02267230\n    add r0, r1, #2\n    ldrsh r0, [r4, r0]\n    sub r2, r0, #1\n    add r0, r1, #2\n    strh r2, [r4, r0]\n    ldrsh r0, [r4, r0]\n    cmp r0, #0\n    bgt _02267230\n    ldr r0, [r4, #8]\n    mov r1, #0\n    bl ov49_0225919C\n    ldr r0, _02267300 ; =0x00000954\n    mov r1, #3\n    strb r1, [r4, r0]\n    mov r1, #0\n    add r0, r0, #2\n    strh r1, [r4, r0]\n    ldr r0, [r4, #8]\n    mov r1, #6\n    bl ov49_02258E60\n    add r1, r0, #0\n    ldr r0, [r4, #8]\n    bl ov49_02259160\n    b _02267230\n    add r0, r1, #0\n    add r1, r1, #2\n    add r0, #0xb0\n    ldrsh r1, [r4, r1]\n    add r0, r4, r0\n    bl ov49_02265434\n    add r5, r0, #0\n    ldr r0, _02267304 ; =0x00000956\n    ldrsh r1, [r4, r0]\n    add r1, r1, #1\n    strh r1, [r4, r0]\n    ldr r0, [r4, #8]\n    add r1, sp, #0x30\n    bl ov49_02259154\n    ldr r0, _02267308 ; =0x00000A04\n    add r1, sp, #0x30\n    add r0, r4, r0\n    add r2, sp, #0x34\n    add r3, sp, #0x38\n    bl ov49_022655E0\n    ldr r0, [r4, #8]\n    add r1, sp, #0x30\n    bl ov49_02259148\n    cmp r5, #1\n    bne _02267230\n    ldr r0, _02267300 ; =0x00000954\n    mov r1, #4\n    strb r1, [r4, r0]\n    add r1, r0, #2\n    mov r2, #0\n    strh r2, [r4, r1]\n    ldr r1, [sp, #0x34]\n    add r0, r0, #4\n    str r1, [r4, r0]\n    ldr r2, _0226730C ; =0x000005C2\n    add r0, r6, #0\n    add r1, r4, #0\n    bl ov49_02265668\n    b _02267230\n    add r0, r1, #2\n    ldrsh r1, [r4, r0]\n    ldr r0, _02267310 ; =0x00007FFF\n    mul r0, r1\n    mov r1, #0xa\n    bl _s32_div_f\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    asr r0, r0, #4\n    lsl r1, r0, #2\n    ldr r0, _02267314 ; =FX_SinCosTable_\n    ldrsh r2, [r0, r1]\n    asr r0, r2, #0x1f\n    lsr r1, r2, #0x11\n    lsl r0, r0, #0xf\n    orr r0, r1\n    mov r1, #2\n    lsl r3, r2, #0xf\n    mov r2, #0\n    lsl r1, r1, #0xa\n    add r1, r3, r1\n    adc r0, r2\n    lsr r5, r1, #0xc\n    lsl r0, r0, #0x14\n    orr r5, r0\n    ldr r0, [r4, #8]\n    add r1, sp, #0x24\n    bl ov49_02259154\n    ldr r0, _02267318 ; =0x00000958\n    add r1, sp, #0x24\n    ldr r0, [r4, r0]\n    add r0, r0, r5\n    str r0, [sp, #0x28]\n    ldr r0, [r4, #8]\n    bl ov49_02259148\n    ldr r0, _02267304 ; =0x00000956\n    ldrsh r1, [r4, r0]\n    add r1, r1, #1\n    cmp r1, #0xa\n    ble _0226722E\n    ldr r0, [r4, #8]\n    mov r1, #1\n    bl ov49_02259130\n    ldr r0, [r6, #4]\n    ldr r4, [r4, #8]\n    bl ov49_02258DAC\n    cmp r4, r0\n    bne _02267228\n    ldr r0, [r6, #8]\n    add r1, r4, #0\n    bl ov49_0225CC40\n    add sp, #0x3c\n    mov r0, #1\n    pop {r4, r5, r6, r7, pc}\n    strh r1, [r4, r0]\n    ldr r1, _0226731C ; =0x00000964\n    mov r5, #0\n    ldrb r0, [r4, r1]\n    add r0, r0, #1\n    strb r0, [r4, r1]\n    add r0, r1, #0\n    sub r0, #0xf\n    ldrsb r0, [r4, r0]\n    cmp r0, #0\n    ble _022672F8\n    add r0, r1, #0\n    add r0, #0x28\n    add r7, r4, r0\n    add r0, r1, #4\n    add r0, r4, r0\n    str r0, [sp, #0x10]\n    add r0, r4, #0\n    str r0, [sp, #0xc]\n    add r0, #0xc\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #0x10]\n    str r7, [sp, #8]\n    str r0, [sp, #4]\n    ldr r0, [sp, #0xc]\n    str r0, [sp]\n    ldr r1, _0226731C ; =0x00000964\n    add r0, r7, #0\n    ldrb r1, [r4, r1]\n    bl ov49_02265434\n    cmp r0, #0\n    bne _022672AA\n    ldr r0, [sp, #0x10]\n    bl ov49_02265628\n    ldr r0, [sp, #0xc]\n    add r1, sp, #0x18\n    add r2, sp, #0x1c\n    add r3, sp, #0x20\n    bl sub_020182B0\n    ldr r0, [sp, #8]\n    add r1, sp, #0x18\n    add r2, sp, #0x1c\n    add r3, sp, #0x20\n    bl ov49_022655E0\n    ldr r0, [sp, #4]\n    add r1, sp, #0x14\n    bl ov49_02265660\n    ldr r1, [sp, #0x18]\n    ldr r0, [sp, #0x14]\n    ldr r2, [sp, #0x1c]\n    add r1, r1, r0\n    ldr r0, [sp]\n    ldr r3, [sp, #0x20]\n    str r1, [sp, #0x18]\n    bl sub_020182A8\n    b _022672C4\n    add r0, r6, #0\n    add r1, r4, #0\n    add r2, r5, #0\n    mov r3, #4\n    bl ov49_0226786C\n    cmp r0, #1\n    bne _022672C4\n    ldr r2, _02267320 ; =0x000005A8\n    add r0, r6, #0\n    add r1, r4, #0\n    bl ov49_02265668\n    add r0, r6, #0\n    add r1, r4, #0\n    add r2, r5, #0\n    bl ov49_0226789C\n    ldr r0, [sp, #0x10]\n    add r5, r5, #1\n    add r0, #0xc\n    str r0, [sp, #0x10]\n    ldr r0, [sp, #0xc]\n    add r7, #0x28\n    add r0, #0x78\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #8]\n    add r0, #0x28\n    str r0, [sp, #8]\n    ldr r0, [sp, #4]\n    add r0, #0xc\n    str r0, [sp, #4]\n    ldr r0, [sp]\n    add r0, #0x78\n    str r0, [sp]\n    ldr r0, _02267324 ; =0x00000955\n    ldrsb r0, [r4, r0]\n    cmp r5, r0\n    blt _02267262\n    mov r0, #0\n    add sp, #0x3c\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _02267300: .word 0x00000954\n    _02267304: .word 0x00000956\n    _02267308: .word 0x00000A04\n    _0226730C: .word 0x000005C2\n    _02267310: .word 0x00007FFF\n    _02267314: .word FX_SinCosTable_\n    _02267318: .word 0x00000958\n    _0226731C: .word 0x00000964\n    _02267320: .word 0x000005A8\n    _02267324: .word 0x00000955"
    );
    #endif
}

void ov49_02267328(void) {
    /* Original at 0x02267328 */
    /* Requires manual decompilation - 146 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r6, r0, #0\n    ldr r0, _02267464 ; =0x00000955\n    add r4, r1, #0\n    ldrsb r0, [r4, r0]\n    mov r5, #0\n    cmp r0, #0\n    ble _0226734E\n    ldr r7, _02267464 ; =0x00000955\n    add r0, r6, #0\n    add r1, r4, #0\n    add r2, r5, #0\n    bl ov49_0226789C\n    ldrsb r0, [r4, r7]\n    add r5, r5, #1\n    cmp r5, r0\n    blt _0226733C\n    ldr r1, _02267468 ; =0x00000954\n    ldrsb r0, [r4, r1]\n    cmp r0, #3\n    bls _02267358\n    b _0226745C\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02267364: ; jump table\n    ldr r2, _0226746C ; =0x000005A8\n    add r0, r6, #0\n    add r1, r4, #0\n    bl ov49_02265668\n    ldr r0, _02267464 ; =0x00000955\n    mov r5, #0\n    ldrsb r0, [r4, r0]\n    cmp r0, #0\n    ble _02267396\n    ldr r7, _02267464 ; =0x00000955\n    add r0, r6, #0\n    add r1, r4, #0\n    add r2, r5, #0\n    mov r3, #4\n    bl ov49_0226786C\n    ldrsb r0, [r4, r7]\n    add r5, r5, #1\n    cmp r5, r0\n    blt _02267382\n    ldr r0, _02267468 ; =0x00000954\n    mov r1, #1\n    strb r1, [r4, r0]\n    b _0226745C\n    ldr r0, [r4, #8]\n    mov r1, #1\n    bl ov49_0225919C\n    ldr r0, _02267470 ; =0x00000956\n    mov r1, #8\n    strh r1, [r4, r0]\n    mov r1, #2\n    sub r0, r0, #2\n    strb r1, [r4, r0]\n    b _0226745C\n    add r0, r1, #2\n    ldrsh r0, [r4, r0]\n    sub r2, r0, #1\n    add r0, r1, #2\n    strh r2, [r4, r0]\n    ldrsh r0, [r4, r0]\n    cmp r0, #0\n    bgt _0226745C\n    ldr r0, [r4, #8]\n    mov r1, #0\n    bl ov49_0225919C\n    ldr r0, _02267468 ; =0x00000954\n    mov r1, #3\n    strb r1, [r4, r0]\n    mov r1, #0\n    add r0, r0, #2\n    strh r1, [r4, r0]\n    ldr r0, [r4, #8]\n    mov r1, #6\n    bl ov49_02258E60\n    add r1, r0, #0\n    ldr r0, [r4, #8]\n    bl ov49_02259160\n    b _0226745C\n    add r0, r1, #0\n    add r1, r1, #2\n    add r0, #0xb0\n    ldrsh r1, [r4, r1]\n    add r0, r4, r0\n    bl ov49_02265434\n    add r5, r0, #0\n    ldr r0, _02267470 ; =0x00000956\n    ldrsh r1, [r4, r0]\n    add r1, r1, #1\n    strh r1, [r4, r0]\n    ldr r0, [r4, #8]\n    add r1, sp, #0\n    bl ov49_02259154\n    ldr r0, _02267474 ; =0x00000A04\n    add r1, sp, #0\n    add r0, r4, r0\n    add r2, sp, #4\n    add r3, sp, #8\n    bl ov49_022655E0\n    ldr r0, [r4, #8]\n    add r1, sp, #0\n    bl ov49_02259148\n    cmp r5, #1\n    bne _0226745C\n    ldr r0, _02267470 ; =0x00000956\n    mov r1, #0\n    strh r1, [r4, r0]\n    ldr r1, [sp, #4]\n    add r0, r0, #2\n    str r1, [r4, r0]\n    ldr r2, _02267478 ; =0x000005C2\n    add r0, r6, #0\n    add r1, r4, #0\n    bl ov49_02265668\n    ldr r0, [r4, #8]\n    mov r1, #1\n    bl ov49_02259130\n    ldr r0, [r6, #4]\n    ldr r4, [r4, #8]\n    bl ov49_02258DAC\n    cmp r4, r0\n    bne _02267456\n    ldr r0, [r6, #8]\n    add r1, r4, #0\n    bl ov49_0225CC40\n    add sp, #0xc\n    mov r0, #1\n    pop {r4, r5, r6, r7, pc}\n    mov r0, #0\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _02267464: .word 0x00000955\n    _02267468: .word 0x00000954\n    _0226746C: .word 0x000005A8\n    _02267470: .word 0x00000956\n    _02267474: .word 0x00000A04\n    _02267478: .word 0x000005C2"
    );
    #endif
}

void ov49_0226747C(void) {
    /* Original at 0x0226747C */
    /* Requires manual decompilation - 208 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    ldr r0, [r5, #8]\n    add r1, sp, #0\n    bl ov49_02259154\n    ldr r0, _02267670 ; =0x00000955\n    ldrsb r0, [r5, r0]\n    cmp r0, #1\n    beq _0226749A\n    cmp r0, #2\n    beq _022674EA\n    cmp r0, #3\n    b _02267586\n    mov r0, #0xf\n    lsl r0, r0, #0xe\n    bl _fflt\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    add r6, r0, #0\n    mov r0, #2\n    lsl r0, r0, #0xe\n    bl _fflt\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    bl _ffix\n    add r4, r0, #0\n    add r0, r6, #0\n    bl _ffix\n    ldr r1, [sp]\n    ldr r2, [sp, #4]\n    add r3, r0, #0\n    add r1, r1, r4\n    add r2, r2, r3\n    mov r3, #1\n    add r5, #0xc\n    ldr r4, [sp, #8]\n    lsl r3, r3, #0xc\n    add r0, r5, #0\n    add r3, r4, r3\n    bl sub_020182A8\n    add sp, #0xc\n    pop {r3, r4, r5, r6, pc}\n    mov r0, #0xe\n    lsl r0, r0, #0xe\n    bl _fflt\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    add r6, r0, #0\n    mov r0, #2\n    lsl r0, r0, #0xc\n    bl _fflt\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    bl _ffix\n    add r4, r0, #0\n    add r0, r6, #0\n    bl _ffix\n    ldr r1, [sp]\n    add r3, r0, #0\n    ldr r2, [sp, #4]\n    add r1, r1, r4\n    add r2, r2, r3\n    mov r3, #1\n    add r0, r5, #0\n    ldr r4, [sp, #8]\n    lsl r3, r3, #0xc\n    add r0, #0xc\n    add r3, r4, r3\n    bl sub_020182A8\n    mov r0, #0xe\n    lsl r0, r0, #0xe\n    bl _fflt\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    add r6, r0, #0\n    mov r0, #0xe\n    lsl r0, r0, #0xc\n    bl _fflt\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    bl _ffix\n    add r4, r0, #0\n    add r0, r6, #0\n    bl _ffix\n    ldr r1, [sp]\n    ldr r2, [sp, #4]\n    add r3, r0, #0\n    add r1, r1, r4\n    add r2, r2, r3\n    mov r3, #1\n    add r5, #0x84\n    ldr r4, [sp, #8]\n    lsl r3, r3, #0xc\n    add r0, r5, #0\n    add r3, r4, r3\n    bl sub_020182A8\n    add sp, #0xc\n    pop {r3, r4, r5, r6, pc}\n    mov r0, #0xf\n    lsl r0, r0, #0xe\n    bl _fflt\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    add r6, r0, #0\n    mov r0, #2\n    lsl r0, r0, #0xe\n    bl _fflt\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    bl _ffix\n    add r4, r0, #0\n    add r0, r6, #0\n    bl _ffix\n    ldr r1, [sp]\n    add r3, r0, #0\n    ldr r2, [sp, #4]\n    add r1, r1, r4\n    add r2, r2, r3\n    mov r3, #1\n    add r0, r5, #0\n    ldr r4, [sp, #8]\n    lsl r3, r3, #0xc\n    add r0, #0xc\n    add r3, r4, r3\n    bl sub_020182A8\n    mov r0, #0xe\n    lsl r0, r0, #0xe\n    bl _fflt\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    add r6, r0, #0\n    mov r0, #2\n    lsl r0, r0, #0xc\n    bl _fflt\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    bl _ffix\n    add r4, r0, #0\n    add r0, r6, #0\n    bl _ffix\n    ldr r1, [sp]\n    add r3, r0, #0\n    ldr r2, [sp, #4]\n    add r1, r1, r4\n    add r2, r2, r3\n    mov r3, #1\n    add r0, r5, #0\n    ldr r4, [sp, #8]\n    lsl r3, r3, #0xc\n    add r0, #0x84\n    add r3, r4, r3\n    bl sub_020182A8\n    mov r0, #0xe\n    lsl r0, r0, #0xe\n    bl _fflt\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    add r6, r0, #0\n    mov r0, #0xe\n    lsl r0, r0, #0xc\n    bl _fflt\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    bl _ffix\n    add r4, r0, #0\n    add r0, r6, #0\n    bl _ffix\n    ldr r1, [sp]\n    ldr r2, [sp, #4]\n    add r3, r0, #0\n    add r1, r1, r4\n    add r2, r2, r3\n    mov r3, #1\n    add r5, #0xfc\n    ldr r4, [sp, #8]\n    lsl r3, r3, #0xc\n    add r0, r5, #0\n    add r3, r4, r3\n    bl sub_020182A8\n    add sp, #0xc\n    pop {r3, r4, r5, r6, pc}\n    nop\n    _02267670: .word 0x00000955"
    );
    #endif
}

void ov49_02267674(void) {
    /* Original at 0x02267674 */
    /* Requires manual decompilation - 208 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    ldr r0, [r5, #8]\n    add r1, sp, #0\n    bl ov49_02259154\n    ldr r0, _02267868 ; =0x00000955\n    ldrsb r0, [r5, r0]\n    cmp r0, #1\n    beq _02267692\n    cmp r0, #2\n    beq _022676E2\n    cmp r0, #3\n    b _0226777E\n    mov r0, #3\n    lsl r0, r0, #0x10\n    bl _fflt\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    add r6, r0, #0\n    mov r0, #2\n    lsl r0, r0, #0xe\n    bl _fflt\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    bl _ffix\n    add r4, r0, #0\n    add r0, r6, #0\n    bl _ffix\n    ldr r1, [sp]\n    ldr r2, [sp, #4]\n    add r3, r0, #0\n    add r1, r1, r4\n    add r2, r2, r3\n    mov r3, #2\n    add r5, #0xc\n    ldr r4, [sp, #8]\n    lsl r3, r3, #0xe\n    add r0, r5, #0\n    sub r3, r4, r3\n    bl sub_020182A8\n    add sp, #0xc\n    pop {r3, r4, r5, r6, pc}\n    mov r0, #0xb\n    lsl r0, r0, #0xe\n    bl _fflt\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    add r6, r0, #0\n    mov r0, #2\n    lsl r0, r0, #0xc\n    bl _fflt\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    bl _ffix\n    add r4, r0, #0\n    add r0, r6, #0\n    bl _ffix\n    ldr r1, [sp]\n    add r3, r0, #0\n    ldr r2, [sp, #4]\n    add r1, r1, r4\n    add r2, r2, r3\n    mov r3, #2\n    add r0, r5, #0\n    ldr r4, [sp, #8]\n    lsl r3, r3, #0xe\n    add r0, #0xc\n    sub r3, r4, r3\n    bl sub_020182A8\n    mov r0, #0xb\n    lsl r0, r0, #0xe\n    bl _fflt\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    add r6, r0, #0\n    mov r0, #0xe\n    lsl r0, r0, #0xc\n    bl _fflt\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    bl _ffix\n    add r4, r0, #0\n    add r0, r6, #0\n    bl _ffix\n    ldr r1, [sp]\n    ldr r2, [sp, #4]\n    add r3, r0, #0\n    add r1, r1, r4\n    add r2, r2, r3\n    mov r3, #2\n    add r5, #0x84\n    ldr r4, [sp, #8]\n    lsl r3, r3, #0xe\n    add r0, r5, #0\n    sub r3, r4, r3\n    bl sub_020182A8\n    add sp, #0xc\n    pop {r3, r4, r5, r6, pc}\n    mov r0, #3\n    lsl r0, r0, #0x10\n    bl _fflt\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    add r6, r0, #0\n    mov r0, #2\n    lsl r0, r0, #0xe\n    bl _fflt\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    bl _ffix\n    add r4, r0, #0\n    add r0, r6, #0\n    bl _ffix\n    ldr r1, [sp]\n    add r3, r0, #0\n    ldr r2, [sp, #4]\n    add r1, r1, r4\n    add r2, r2, r3\n    mov r3, #2\n    add r0, r5, #0\n    ldr r4, [sp, #8]\n    lsl r3, r3, #0xe\n    add r0, #0xc\n    sub r3, r4, r3\n    bl sub_020182A8\n    mov r0, #0xb\n    lsl r0, r0, #0xe\n    bl _fflt\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    add r6, r0, #0\n    mov r0, #2\n    lsl r0, r0, #0xc\n    bl _fflt\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    bl _ffix\n    add r4, r0, #0\n    add r0, r6, #0\n    bl _ffix\n    ldr r1, [sp]\n    add r3, r0, #0\n    ldr r2, [sp, #4]\n    add r1, r1, r4\n    add r2, r2, r3\n    mov r3, #2\n    add r0, r5, #0\n    ldr r4, [sp, #8]\n    lsl r3, r3, #0xe\n    add r0, #0x84\n    sub r3, r4, r3\n    bl sub_020182A8\n    mov r0, #0xb\n    lsl r0, r0, #0xe\n    bl _fflt\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    add r6, r0, #0\n    mov r0, #0xe\n    lsl r0, r0, #0xc\n    bl _fflt\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    bl _ffix\n    add r4, r0, #0\n    add r0, r6, #0\n    bl _ffix\n    ldr r1, [sp]\n    ldr r2, [sp, #4]\n    add r3, r0, #0\n    add r1, r1, r4\n    add r2, r2, r3\n    mov r3, #2\n    add r5, #0xfc\n    ldr r4, [sp, #8]\n    lsl r3, r3, #0xe\n    add r0, r5, #0\n    sub r3, r4, r3\n    bl sub_020182A8\n    add sp, #0xc\n    pop {r3, r4, r5, r6, pc}\n    nop\n    _02267868: .word 0x00000955"
    );
    #endif
}

void ov49_0226786C(void) {
    /* Original at 0x0226786C */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #4\n    mov r6, #0x96\n    lsl r6, r6, #4\n    add r5, r1, r6\n    add r4, r3, #0\n    ldrb r3, [r5, r2]\n    cmp r4, r3\n    beq _02267896\n    strb r4, [r5, r2]\n    mov r3, #0\n    add r5, r1, r2\n    sub r6, r6, #4\n    strb r3, [r5, r6]\n    lsl r4, r4, #0xd\n    str r4, [sp]\n    bl ov49_02265BE8\n    add sp, #4\n    mov r0, #1\n    pop {r3, r4, r5, r6, pc}\n    mov r0, #0\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void ov49_0226789C(void) {
    /* Original at 0x0226789C */
    /* Requires manual decompilation - 50 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    mov r3, #0x96\n    add r7, r1, #0\n    add r5, r2, #0\n    add r4, r7, r5\n    lsl r3, r3, #4\n    ldrb r6, [r4, r3]\n    sub r3, r3, #4\n    add r4, r7, r3\n    ldrb r3, [r4, r5]\n    str r0, [sp, #4]\n    cmp r3, #0\n    bne _022678FC\n    mov r3, #0\n    bl ov49_02265C40\n    lsl r1, r6, #0xd\n    str r0, [sp, #8]\n    cmp r0, r1\n    bne _022678D0\n    mov r0, #1\n    lsl r0, r0, #0xc\n    add r0, r1, r0\n    str r0, [sp, #8]\n    b _022678E8\n    cmp r6, #4\n    beq _022678D8\n    str r1, [sp, #8]\n    b _022678E8\n    add r1, r7, #0\n    mov r0, #0x78\n    add r1, #0xc\n    mul r0, r5\n    add r0, r1, r0\n    mov r1, #0\n    bl sub_020182A0\n    ldr r0, [sp, #8]\n    add r1, r7, #0\n    str r0, [sp]\n    ldr r0, [sp, #4]\n    add r2, r5, #0\n    mov r3, #0\n    bl ov49_02265BE8\n    mov r0, #8\n    strb r0, [r4, r5]\n    ldrb r0, [r4, r5]\n    sub r0, r0, #1\n    strb r0, [r4, r5]\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov49_02267908(void) {
    /* Original at 0x02267908 */
    /* Requires manual decompilation - 125 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x5c\n    str r0, [sp, #0x10]\n    add r0, r1, #0\n    str r1, [sp, #0x14]\n    ldr r0, [r0, #8]\n    add r1, sp, #0x50\n    str r2, [sp, #0x18]\n    bl ov49_02259154\n    mov r0, #0\n    str r0, [sp, #0x20]\n    ldr r0, [sp, #0x18]\n    cmp r0, #0\n    bls _022679E6\n    ldr r0, [sp, #0x20]\n    str r0, [sp, #0x1c]\n    ldr r1, [sp, #0x20]\n    add r1, #0xd\n    cmp r1, #0xf\n    bls _02267934\n    mov r1, #0xf\n    ldr r0, _02267A04 ; =ov49_0226A4D8\n    ldr r7, _02267A08 ; =ov49_0226A508\n    str r0, [sp, #0x34]\n    lsl r0, r1, #2\n    str r0, [sp, #0x24]\n    ldr r0, [sp, #0x14]\n    ldr r1, _02267A0C ; =0x00000968\n    str r0, [sp, #0x28]\n    add r0, #0xc\n    str r0, [sp, #0x28]\n    ldr r0, [sp, #0x14]\n    mov r4, #0\n    add r0, r0, r1\n    str r0, [sp, #0x30]\n    ldr r0, [sp, #0x1c]\n    ldr r6, _02267A10 ; =ov49_0226A70C\n    add r5, r4, r0\n    ldr r3, [sp, #0x24]\n    ldr r0, [sp, #0x10]\n    ldr r1, [sp, #0x14]\n    add r2, r5, #0\n    add r3, r6, r3\n    bl ov49_02265980\n    ldr r1, [sp, #0x34]\n    add r0, sp, #0x50\n    add r2, sp, #0x44\n    bl VEC_Add\n    add r0, sp, #0x44\n    add r1, r7, #0\n    add r2, sp, #0x38\n    bl VEC_Add\n    mov r0, #0x78\n    mul r0, r5\n    ldr r1, [sp, #0x28]\n    str r0, [sp, #0x2c]\n    add r0, r1, r0\n    ldr r1, [sp, #0x44]\n    ldr r2, [sp, #0x48]\n    ldr r3, [sp, #0x4c]\n    bl sub_020182A8\n    ldr r1, [sp, #0x28]\n    ldr r0, [sp, #0x2c]\n    add r0, r1, r0\n    mov r1, #0\n    bl sub_020182A0\n    ldr r0, [sp, #0x14]\n    mov r1, #0\n    add r2, r0, r5\n    ldr r0, _02267A14 ; =0x00000958\n    strb r1, [r2, r0]\n    ldr r0, [sp, #0x3c]\n    add r1, r5, #0\n    str r0, [sp]\n    ldr r0, [sp, #0x4c]\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x40]\n    str r0, [sp, #8]\n    mov r0, #0xe\n    str r0, [sp, #0xc]\n    mov r0, #0x28\n    mul r1, r0\n    ldr r0, [sp, #0x30]\n    ldr r2, [sp, #0x38]\n    add r0, r0, r1\n    ldr r1, [sp, #0x44]\n    ldr r3, [sp, #0x48]\n    bl ov49_0226540C\n    ldr r0, [sp, #0x34]\n    add r4, r4, #1\n    add r0, #0xc\n    add r7, #0xc\n    str r0, [sp, #0x34]\n    cmp r4, #4\n    blt _02267950\n    ldr r0, [sp, #0x1c]\n    add r0, r0, #4\n    str r0, [sp, #0x1c]\n    ldr r0, [sp, #0x20]\n    add r1, r0, #1\n    ldr r0, [sp, #0x18]\n    str r1, [sp, #0x20]\n    cmp r1, r0\n    blo _0226792A\n    ldr r2, _02267A18 ; =0x00000956\n    ldr r1, [sp, #0x18]\n    ldr r0, [sp, #0x14]\n    sub r3, r2, #1\n    strb r1, [r0, r2]\n    ldr r1, [sp, #0x14]\n    mov r0, #0\n    strb r0, [r1, r3]\n    sub r3, r2, #2\n    strb r0, [r1, r3]\n    add r2, r2, #1\n    strb r0, [r1, r2]\n    add sp, #0x5c\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _02267A04: .word ov49_0226A4D8\n    _02267A08: .word ov49_0226A508\n    _02267A0C: .word 0x00000968\n    _02267A10: .word ov49_0226A70C\n    _02267A14: .word 0x00000958\n    _02267A18: .word 0x00000956"
    );
    #endif
}

void ov49_02267A1C(void) {
    /* Original at 0x02267A1C */
    /* Requires manual decompilation - 46 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r4, r2, #0\n    ldr r2, _02267A7C ; =0x00000958\n    add r5, r1, #0\n    add r1, r5, r2\n    add r7, r0, #0\n    ldrsb r0, [r1, r4]\n    add r6, r4, #0\n    add r2, #0x10\n    add r0, r0, #1\n    strb r0, [r1, r4]\n    mov r0, #0x28\n    mul r6, r0\n    add r0, r5, r2\n    ldrsb r1, [r1, r4]\n    add r0, r0, r6\n    bl ov49_02265434\n    str r0, [sp]\n    ldr r0, _02267A80 ; =0x00000968\n    add r1, sp, #4\n    add r0, r5, r0\n    add r0, r0, r6\n    add r2, sp, #8\n    add r3, sp, #0xc\n    bl ov49_022655E0\n    add r1, r5, #0\n    mov r0, #0x78\n    add r1, #0xc\n    mul r0, r4\n    add r0, r1, r0\n    ldr r1, [sp, #4]\n    ldr r2, [sp, #8]\n    ldr r3, [sp, #0xc]\n    bl sub_020182A8\n    add r0, r7, #0\n    add r1, r5, #0\n    add r2, r4, #0\n    mov r3, #0\n    bl ov49_02265B14\n    ldr r0, [sp]\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02267A7C: .word 0x00000958\n    _02267A80: .word 0x00000968"
    );
    #endif
}

void ov49_02267A84(void) {
    /* Original at 0x02267A84 */
    /* Requires manual decompilation - 48 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    str r0, [sp]\n    add r7, r1, #0\n    mov r6, #0\n    str r2, [sp, #4]\n    add r0, r2, #0\n    beq _02267ADE\n    add r5, r7, #0\n    ldr r4, _02267AE8 ; =ov49_0226A70C\n    add r5, #0xc\n    ldr r0, [sp]\n    add r1, r7, #0\n    add r2, r6, #0\n    add r3, r4, #0\n    bl ov49_02265980\n    ldr r0, [r7, #8]\n    add r1, sp, #8\n    bl ov49_02259154\n    mov r0, #2\n    ldr r1, [sp, #0xc]\n    lsl r0, r0, #0xe\n    add r2, r1, r0\n    mov r0, #6\n    ldr r1, [sp, #0x10]\n    lsl r0, r0, #0xc\n    add r3, r1, r0\n    ldr r1, [sp, #8]\n    add r0, r5, #0\n    str r2, [sp, #0xc]\n    str r3, [sp, #0x10]\n    bl sub_020182A8\n    add r0, r5, #0\n    mov r1, #0\n    bl sub_020182A0\n    ldr r0, [sp, #4]\n    add r6, r6, #1\n    add r4, r4, #4\n    add r5, #0x78\n    cmp r6, r0\n    blo _02267A9A\n    ldr r1, _02267AEC ; =0x00000954\n    ldr r0, [sp, #4]\n    strb r0, [r7, r1]\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    _02267AE8: .word ov49_0226A70C\n    _02267AEC: .word 0x00000954"
    );
    #endif
}

void ov49_02267AF0(void) {
    /* Original at 0x02267AF0 */
    /* Requires manual decompilation - 133 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    str r0, [sp, #4]\n    add r5, r1, #0\n    mov r0, #2\n    ldrsh r1, [r5, r0]\n    mov r0, #0xc\n    add r6, r2, #0\n    mul r0, r1\n    mov r1, #0x30\n    bl _s32_div_f\n    add r4, r0, #0\n    ldr r0, _02267C14 ; =0x00000954\n    ldr r1, [r5, r0]\n    cmp r4, r1\n    beq _02267BF4\n    str r4, [r5, r0]\n    cmp r4, #0\n    beq _02267B42\n    mov r0, #0x30\n    add r2, r6, #0\n    mul r2, r0\n    ldr r0, _02267C18 ; =ov49_0226A678\n    lsl r1, r4, #2\n    add r0, r0, r2\n    add r2, r1, r0\n    ldrh r0, [r1, r0]\n    add r1, sp, #8\n    strh r0, [r1, #4]\n    ldrh r0, [r2, #2]\n    strh r0, [r1, #6]\n    ldrh r2, [r1, #4]\n    add r0, r5, #0\n    mov r1, #0x78\n    add r0, #0xc\n    mul r1, r2\n    add r0, r0, r1\n    mov r1, #0\n    bl sub_020182A0\n    mov r0, #0x30\n    add r2, r6, #0\n    mul r2, r0\n    ldr r0, _02267C1C ; =ov49_0226A67C\n    lsl r1, r4, #2\n    add r0, r0, r2\n    add r2, r1, r0\n    ldrh r1, [r1, r0]\n    add r0, sp, #8\n    strh r1, [r0]\n    ldrh r4, [r2, #2]\n    strh r4, [r0, #2]\n    cmp r4, #0\n    beq _02267BE2\n    beq _02267B74\n    lsl r7, r4, #0xc\n    add r0, r7, #0\n    bl _fflt\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    b _02267B84\n    lsl r7, r4, #0xc\n    add r0, r7, #0\n    bl _fflt\n    mov r1, #0x3f\n    lsl r1, r1, #0x18\n    bl _fsub\n    add r1, sp, #8\n    ldrh r6, [r1]\n    bl _ffix\n    str r0, [sp]\n    ldr r0, [sp, #4]\n    add r1, r5, #0\n    add r2, r6, #0\n    mov r3, #0\n    bl ov49_02265BE8\n    cmp r4, #0\n    beq _02267BB0\n    add r0, r7, #0\n    bl _fflt\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    b _02267BBE\n    add r0, r7, #0\n    bl _fflt\n    mov r1, #0x3f\n    lsl r1, r1, #0x18\n    bl _fsub\n    bl _ffix\n    str r0, [sp]\n    ldr r0, [sp, #4]\n    add r1, r5, #0\n    add r2, r6, #0\n    mov r3, #1\n    bl ov49_02265BE8\n    add r1, r5, #0\n    mov r0, #0x78\n    add r1, #0xc\n    mul r0, r6\n    add r0, r1, r0\n    mov r1, #1\n    bl sub_020182A0\n    b _02267BF4\n    ldrh r1, [r0]\n    add r2, r5, #0\n    mov r0, #0x78\n    mul r0, r1\n    add r2, #0xc\n    add r0, r2, r0\n    mov r1, #0\n    bl sub_020182A0\n    mov r0, #2\n    ldrsh r0, [r5, r0]\n    cmp r0, #0x30\n    bge _02267C00\n    add r0, r0, #1\n    strh r0, [r5, #2]\n    mov r0, #2\n    ldrsh r0, [r5, r0]\n    cmp r0, #0x30\n    blt _02267C0E\n    add sp, #0x10\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    _02267C14: .word 0x00000954\n    _02267C18: .word ov49_0226A678\n    _02267C1C: .word ov49_0226A67C"
    );
    #endif
}

void ov49_02267C20(void) {
    /* Original at 0x02267C20 */
    /* Requires manual decompilation - 48 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    str r0, [sp]\n    add r7, r1, #0\n    mov r4, #0\n    str r2, [sp, #4]\n    add r0, r2, #0\n    beq _02267C74\n    add r5, r7, #0\n    add r5, #0xc\n    add r3, r4, #6\n    lsl r6, r3, #2\n    ldr r3, _02267C84 ; =ov49_0226A70C\n    ldr r0, [sp]\n    add r1, r7, #0\n    add r2, r4, #0\n    add r3, r3, r6\n    bl ov49_02265980\n    ldr r0, [r7, #8]\n    add r1, sp, #8\n    bl ov49_02259154\n    mov r0, #2\n    ldr r1, [sp, #0xc]\n    lsl r0, r0, #0xe\n    add r2, r1, r0\n    ldr r1, [sp, #8]\n    ldr r3, [sp, #0x10]\n    add r0, r5, #0\n    str r2, [sp, #0xc]\n    bl sub_020182A8\n    add r0, r5, #0\n    mov r1, #0\n    bl sub_020182A0\n    ldr r0, [sp, #4]\n    add r4, r4, #1\n    add r5, #0x78\n    cmp r4, r0\n    blo _02267C34\n    ldr r0, _02267C88 ; =0x00000954\n    mov r1, #0xff\n    strh r1, [r7, r0]\n    add r1, r0, #2\n    ldr r0, [sp, #4]\n    strh r0, [r7, r1]\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    _02267C84: .word ov49_0226A70C\n    _02267C88: .word 0x00000954"
    );
    #endif
}

void ov49_02267C8C(void) {
    /* Original at 0x02267C8C */
    /* Requires manual decompilation - 54 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    str r0, [sp]\n    ldr r0, [r1, #8]\n    str r1, [sp, #4]\n    add r1, sp, #8\n    bl ov49_02259154\n    mov r0, #0xa\n    ldr r7, [sp, #4]\n    mov r4, #0\n    ldr r1, [sp, #0x10]\n    lsl r0, r0, #0xc\n    sub r0, r1, r0\n    str r0, [sp, #0x10]\n    mov r0, #1\n    ldr r1, [sp, #8]\n    lsl r0, r0, #0xe\n    sub r1, r1, r0\n    str r1, [sp, #8]\n    ldr r1, [sp, #0xc]\n    lsl r0, r0, #2\n    add r0, r1, r0\n    str r0, [sp, #0xc]\n    add r5, r4, #0\n    add r7, #0xc\n    add r3, r4, #0\n    add r3, #0x25\n    lsl r6, r3, #2\n    ldr r3, _02267CFC ; =ov49_0226A70C\n    add r2, r4, #0\n    ldr r0, [sp]\n    ldr r1, [sp, #4]\n    add r2, #0x10\n    add r3, r3, r6\n    bl ov49_02265980\n    add r1, r4, #0\n    add r1, #0x10\n    mov r0, #0x78\n    mul r0, r1\n    ldr r1, [sp, #8]\n    ldr r2, [sp, #0xc]\n    ldr r3, [sp, #0x10]\n    add r0, r7, r0\n    add r1, r1, r5\n    bl sub_020182A8\n    mov r0, #6\n    lsl r0, r0, #0xe\n    add r4, r4, #1\n    add r5, r5, r0\n    cmp r4, #2\n    blt _02267CC0\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    _02267CFC: .word ov49_0226A70C"
    );
    #endif
}

void ov49_02267D00(void) {
    /* Original at 0x02267D00 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    ldr r0, _02267D30 ; =0x00000D0C\n    mov r2, #1\n    strh r2, [r1, r0]\n    add r4, r1, #0\n    mov r5, #0\n    add r0, r0, #2\n    strh r5, [r1, r0]\n    add r4, #0xc\n    add r7, r2, #0\n    mov r6, #0x78\n    add r0, r5, #0\n    add r0, #0x10\n    add r1, r0, #0\n    mul r1, r6\n    add r0, r4, r1\n    add r1, r7, #0\n    bl sub_020182A0\n    add r5, r5, #1\n    cmp r5, #2\n    blt _02267D16\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02267D30: .word 0x00000D0C"
    );
    #endif
}

void ov49_02267D34(void) {
    /* Original at 0x02267D34 */
    /* Requires manual decompilation - 46 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r1, #0\n    ldr r1, _02267D90 ; =0x00000D0C\n    add r7, r0, #0\n    ldrh r0, [r5, r1]\n    cmp r0, #0\n    beq _02267D8E\n    add r0, r1, #2\n    ldrh r0, [r5, r0]\n    cmp r0, #0xd\n    bhs _02267D56\n    add r0, r1, #2\n    ldrh r0, [r5, r0]\n    add r2, r0, #1\n    add r0, r1, #2\n    strh r2, [r5, r0]\n    b _02267D5A\n    mov r0, #0\n    strh r0, [r5, r1]\n    add r6, r5, #0\n    mov r4, #0\n    add r6, #0xc\n    ldr r0, _02267D94 ; =0x00000D0E\n    ldrh r0, [r5, r0]\n    cmp r0, #0xd\n    bhs _02267D78\n    add r2, r4, #0\n    add r0, r7, #0\n    add r1, r5, #0\n    add r2, #0x10\n    mov r3, #0\n    bl ov49_02265B14\n    b _02267D88\n    add r1, r4, #0\n    add r1, #0x10\n    mov r0, #0x78\n    mul r0, r1\n    add r0, r6, r0\n    mov r1, #0\n    bl sub_020182A0\n    add r4, r4, #1\n    cmp r4, #2\n    blt _02267D60\n    pop {r3, r4, r5, r6, r7, pc}\n    _02267D90: .word 0x00000D0C\n    _02267D94: .word 0x00000D0E"
    );
    #endif
}

void ov49_02267D98(void) {
    /* Original at 0x02267D98 */
    /* Requires manual decompilation - 62 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    add r5, r0, #0\n    ldr r0, [sp, #0x30]\n    mov r7, #2\n    str r0, [sp, #0x30]\n    ldr r0, [sp, #0x34]\n    mov r6, #1\n    str r0, [sp, #0x34]\n    mov r0, #0x3b\n    lsl r0, r0, #4\n    str r1, [r5, r0]\n    add r1, r0, #4\n    ldr r4, [sp, #0x34]\n    strh r2, [r5, r1]\n    add r0, r0, #6\n    strh r3, [r5, r0]\n    mov r0, #0\n    str r0, [sp, #0x14]\n    mov r0, #3\n    str r0, [sp, #0x10]\n    ldr r0, [sp, #0x14]\n    add r4, #0xc\n    str r0, [sp, #0xc]\n    ldr r1, [sp, #0x10]\n    mov r0, #0x78\n    mul r0, r1\n    add r0, r4, r0\n    str r0, [sp]\n    ldr r0, [sp, #0x34]\n    ldr r2, [sp, #0xc]\n    ldr r0, [r0, #8]\n    mov r1, #0x78\n    mul r1, r2\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x30]\n    mov r2, #0x78\n    mov r3, #0x78\n    mul r2, r6\n    mul r3, r7\n    str r0, [sp, #8]\n    add r0, r5, #0\n    add r1, r4, r1\n    add r2, r4, r2\n    add r3, r4, r3\n    bl ov49_02267EBC\n    ldr r0, [sp, #0x10]\n    add r7, r7, #4\n    add r0, r0, #4\n    str r0, [sp, #0x10]\n    ldr r0, [sp, #0xc]\n    add r6, r6, #4\n    add r0, r0, #4\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #0x14]\n    add r5, #0xec\n    add r0, r0, #1\n    str r0, [sp, #0x14]\n    cmp r0, #4\n    blt _02267DC8\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov49_02267E18(void) {
    /* Original at 0x02267E18 */
    /* Requires manual decompilation - 77 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r5, r0, #0\n    mov r0, #0\n    str r0, [sp, #8]\n    str r0, [sp, #0xc]\n    mov r0, #0xed\n    lsl r0, r0, #2\n    ldrh r0, [r5, r0]\n    str r1, [sp]\n    cmp r0, #0\n    ble _02267E86\n    ldr r4, [sp, #8]\n    add r6, sp, #0x10\n    mov r0, #0x3b\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    add r1, r0, r4\n    ldrh r0, [r0, r4]\n    strh r0, [r6]\n    ldrh r0, [r1, #2]\n    strh r0, [r6, #2]\n    ldrh r1, [r6]\n    ldr r0, [sp]\n    cmp r1, r0\n    bne _02267E72\n    ldrb r7, [r6, #2]\n    cmp r7, #4\n    blo _02267E56\n    bl GF_AssertFail\n    ldrb r0, [r6, #3]\n    str r0, [sp, #4]\n    cmp r0, #4\n    bls _02267E62\n    bl GF_AssertFail\n    mov r0, #0xec\n    mul r0, r7\n    ldr r1, [sp, #4]\n    add r0, r5, r0\n    bl ov49_02267EF8\n    mov r0, #1\n    str r0, [sp, #8]\n    ldr r0, [sp, #0xc]\n    add r4, r4, #4\n    add r0, r0, #1\n    str r0, [sp, #0xc]\n    mov r0, #0xed\n    lsl r0, r0, #2\n    ldrh r1, [r5, r0]\n    ldr r0, [sp, #0xc]\n    cmp r0, r1\n    blt _02267E34\n    mov r7, #1\n    mov r6, #0\n    add r4, r5, #0\n    add r0, r4, #0\n    bl ov49_02267F40\n    cmp r0, #0\n    bne _02267E98\n    mov r7, #0\n    add r6, r6, #1\n    add r4, #0xec\n    cmp r6, #4\n    blt _02267E8C\n    ldr r0, _02267EB8 ; =0x000003B6\n    ldrh r1, [r5, r0]\n    ldr r0, [sp]\n    cmp r1, r0\n    bhi _02267EB2\n    cmp r7, #1\n    bne _02267EB2\n    mov r0, #2\n    str r0, [sp, #8]\n    ldr r0, [sp, #8]\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    _02267EB8: .word 0x000003B6"
    );
    #endif
}

void ov49_02267EBC(void) {
    /* Original at 0x02267EBC */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r0, [sp, #0x20]\n    add r4, r1, #0\n    add r6, r2, #0\n    add r7, r3, #0\n    cmp r0, #3\n    blo _02267ED0\n    bl GF_AssertFail\n    add r0, r5, #0\n    add r0, #0xd8\n    str r4, [r0]\n    add r0, r5, #0\n    add r0, #0xdc\n    str r6, [r0]\n    add r0, r5, #0\n    add r0, #0xe0\n    str r7, [r0]\n    add r0, r5, #0\n    ldr r1, [sp, #0x18]\n    add r0, #0xe4\n    str r1, [r0]\n    add r0, r5, #0\n    ldr r1, [sp, #0x1c]\n    add r0, #0xe8\n    str r1, [r0]\n    ldr r0, [sp, #0x20]\n    strh r0, [r5, #2]\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov49_02267EF8(void) {
    /* Original at 0x02267EF8 */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r0, #0\n    add r6, r1, #0\n    ldr r4, _02267F38 ; =0x00000000\n    beq _02267F18\n    add r5, r7, #0\n    add r0, r5, #0\n    add r0, #0xd8\n    ldr r0, [r0]\n    mov r1, #1\n    bl sub_020182A0\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, r6\n    blo _02267F04\n    mov r0, #0\n    strh r0, [r7]\n    mov r0, #1\n    strb r0, [r7, #6]\n    strh r6, [r7, #4]\n    ldrh r2, [r7, #2]\n    add r1, r7, #0\n    add r1, #0xe8\n    lsl r3, r2, #2\n    ldr r2, _02267F3C ; =ov49_0226A4CC\n    ldr r1, [r1]\n    ldr r2, [r2, r3]\n    add r0, r7, #0\n    blx r2\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02267F38: .word 0x00000000\n    _02267F3C: .word ov49_0226A4CC"
    );
    #endif
}

void ov49_02267F40(void) {
    /* Original at 0x02267F40 */
    /* Requires manual decompilation - 40 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldrb r1, [r5, #6]\n    cmp r1, #0\n    bne _02267F4E\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    ldrh r1, [r5, #2]\n    lsl r2, r1, #2\n    ldr r1, _02267F90 ; =ov49_0226A484\n    ldr r1, [r1, r2]\n    blx r1\n    mov r6, #0\n    str r0, [sp]\n    ldrsh r0, [r5, r6]\n    add r0, r0, #1\n    strh r0, [r5]\n    ldr r0, [sp]\n    cmp r0, #1\n    bne _02267F8C\n    ldrh r0, [r5, #4]\n    cmp r0, #0\n    ble _02267F88\n    add r4, r5, #0\n    add r7, r6, #0\n    add r0, r4, #0\n    add r0, #0xd8\n    ldr r0, [r0]\n    add r1, r7, #0\n    bl sub_020182A0\n    ldrh r0, [r5, #4]\n    add r6, r6, #1\n    add r4, r4, #4\n    cmp r6, r0\n    blt _02267F72\n    mov r0, #0\n    strb r0, [r5, #6]\n    ldr r0, [sp]\n    pop {r3, r4, r5, r6, r7, pc}\n    _02267F90: .word ov49_0226A484"
    );
    #endif
}

void ov49_02267F94(void) {
    /* Original at 0x02267F94 */
    /* Requires manual decompilation - 135 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x30\n    str r0, [sp, #0x10]\n    add r0, r1, #0\n    add r1, sp, #0x24\n    bl ov49_02259154\n    mov r1, #2\n    ldr r0, [sp, #0x24]\n    lsl r1, r1, #0xe\n    add r0, r0, r1\n    str r0, [sp, #0x24]\n    ldr r2, [sp, #0x28]\n    lsl r0, r1, #1\n    add r0, r2, r0\n    str r0, [sp, #0x28]\n    ldr r0, [sp, #0x2c]\n    mov r4, #0\n    sub r0, r0, r1\n    str r0, [sp, #0x2c]\n    ldr r0, [sp, #0x10]\n    ldrh r0, [r0, #4]\n    cmp r0, #0\n    ble _022680A8\n    ldr r0, [sp, #0x10]\n    str r0, [sp, #0x1c]\n    add r0, #8\n    str r0, [sp, #0x1c]\n    ldr r0, [sp, #0x10]\n    str r0, [sp, #0x18]\n    add r0, #0xa8\n    str r0, [sp, #0x18]\n    ldr r0, [sp, #0x10]\n    str r0, [sp, #0x14]\n    cmp r4, #3\n    bhi _02268056\n    add r0, r4, r4\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02267FE8: ; jump table\n    mov r0, #3\n    ldr r1, [sp, #0x24]\n    lsl r0, r0, #0xe\n    sub r7, r1, r0\n    mov r0, #1\n    ldr r1, [sp, #0x28]\n    lsl r0, r0, #0x10\n    add r6, r1, r0\n    ldr r5, [sp, #0x2c]\n    mov r0, #0\n    str r0, [sp, #0x20]\n    b _02268056\n    mov r0, #3\n    ldr r1, [sp, #0x24]\n    lsl r0, r0, #0xe\n    add r7, r1, r0\n    mov r0, #1\n    ldr r1, [sp, #0x28]\n    lsl r0, r0, #0x10\n    add r6, r1, r0\n    ldr r5, [sp, #0x2c]\n    ldr r0, _022680AC ; =0x00007FFF\n    str r0, [sp, #0x20]\n    b _02268056\n    mov r0, #2\n    ldr r1, [sp, #0x24]\n    lsl r0, r0, #0xe\n    sub r7, r1, r0\n    ldr r1, [sp, #0x28]\n    lsl r0, r0, #1\n    add r6, r1, r0\n    mov r0, #6\n    ldr r1, [sp, #0x2c]\n    lsl r0, r0, #0xc\n    sub r5, r1, r0\n    ldr r0, _022680AC ; =0x00007FFF\n    str r0, [sp, #0x20]\n    b _02268056\n    mov r0, #2\n    ldr r1, [sp, #0x24]\n    lsl r0, r0, #0xe\n    add r7, r1, r0\n    ldr r1, [sp, #0x28]\n    lsl r0, r0, #1\n    add r6, r1, r0\n    mov r0, #6\n    ldr r1, [sp, #0x2c]\n    lsl r0, r0, #0xc\n    sub r5, r1, r0\n    mov r0, #0\n    str r0, [sp, #0x20]\n    str r6, [sp]\n    ldr r0, [sp, #0x2c]\n    add r2, r7, #0\n    str r0, [sp, #4]\n    str r5, [sp, #8]\n    mov r0, #0x12\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #0x1c]\n    ldr r1, [sp, #0x24]\n    ldr r3, [sp, #0x28]\n    bl ov49_0226540C\n    mov r3, #6\n    ldr r0, [sp, #0x18]\n    ldr r1, [sp, #0x20]\n    ldr r2, _022680B0 ; =0x00000CCC\n    lsl r3, r3, #0xc\n    bl ov49_022655F4\n    ldr r0, [sp, #0x14]\n    ldr r1, [sp, #0x24]\n    add r0, #0xd8\n    ldr r0, [r0]\n    ldr r2, [sp, #0x28]\n    ldr r3, [sp, #0x2c]\n    bl sub_020182A8\n    ldr r0, [sp, #0x1c]\n    add r4, r4, #1\n    add r0, #0x28\n    str r0, [sp, #0x1c]\n    ldr r0, [sp, #0x18]\n    add r0, #0xc\n    str r0, [sp, #0x18]\n    ldr r0, [sp, #0x14]\n    add r0, r0, #4\n    str r0, [sp, #0x14]\n    ldr r0, [sp, #0x10]\n    ldrh r0, [r0, #4]\n    cmp r4, r0\n    blt _02267FD8\n    add sp, #0x30\n    pop {r3, r4, r5, r6, r7, pc}\n    _022680AC: .word 0x00007FFF\n    _022680B0: .word 0x00000CCC"
    );
    #endif
}

void ov49_022680B4(void) {
    /* Original at 0x022680B4 */
    /* Requires manual decompilation - 62 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x20\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    ldr r0, [sp]\n    ldrh r0, [r0, #4]\n    cmp r0, #0\n    ble _02268134\n    ldr r0, [sp]\n    ldr r6, [sp]\n    str r0, [sp, #4]\n    add r0, #0xa8\n    add r6, #8\n    ldr r5, [sp]\n    str r0, [sp, #4]\n    add r4, r0, #0\n    add r7, r6, #0\n    ldr r0, [sp, #4]\n    bl ov49_02265628\n    ldr r2, [sp]\n    mov r1, #0\n    ldrsh r1, [r2, r1]\n    add r0, r6, #0\n    bl ov49_02265434\n    str r0, [sp, #8]\n    add r0, r4, #0\n    add r1, sp, #0x10\n    bl ov49_02265660\n    add r0, r7, #0\n    add r1, sp, #0x14\n    add r2, sp, #0x18\n    add r3, sp, #0x1c\n    bl ov49_022655E0\n    ldr r1, [sp, #0x14]\n    ldr r0, [sp, #0x10]\n    ldr r2, [sp, #0x18]\n    add r1, r1, r0\n    add r0, r5, #0\n    str r1, [sp, #0x14]\n    add r0, #0xd8\n    ldr r0, [r0]\n    ldr r3, [sp, #0x1c]\n    bl sub_020182A8\n    ldr r0, [sp, #4]\n    add r6, #0x28\n    add r0, #0xc\n    str r0, [sp, #4]\n    ldr r0, [sp, #0xc]\n    add r4, #0xc\n    add r0, r0, #1\n    str r0, [sp, #0xc]\n    ldr r0, [sp]\n    add r7, #0x28\n    ldrh r1, [r0, #4]\n    ldr r0, [sp, #0xc]\n    add r5, r5, #4\n    cmp r0, r1\n    blt _022680D8\n    ldr r0, [sp, #8]\n    add sp, #0x20\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov49_0226813C(void) {
    /* Original at 0x0226813C */
    /* Requires manual decompilation - 113 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x28\n    str r0, [sp, #0x10]\n    add r0, r1, #0\n    add r1, sp, #0x1c\n    bl ov49_02259154\n    mov r0, #2\n    ldr r1, [sp, #0x1c]\n    lsl r0, r0, #0xe\n    add r1, r1, r0\n    str r1, [sp, #0x1c]\n    ldr r1, [sp, #0x20]\n    mov r4, #0\n    add r1, r1, r0\n    str r1, [sp, #0x20]\n    ldr r1, [sp, #0x24]\n    sub r0, r1, r0\n    str r0, [sp, #0x24]\n    ldr r0, [sp, #0x10]\n    ldrh r0, [r0, #4]\n    cmp r0, #0\n    ble _0226821E\n    ldr r1, [sp, #0x10]\n    str r1, [sp, #0x18]\n    add r1, #8\n    str r1, [sp, #0x18]\n    ldr r1, [sp, #0x10]\n    str r1, [sp, #0x14]\n    add r1, #0xa8\n    str r1, [sp, #0x14]\n    cmp r4, #3\n    bhi _022681E2\n    add r1, r4, r4\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _0226818A: ; jump table\n    mov r0, #1\n    ldr r1, [sp, #0x1c]\n    lsl r0, r0, #0x10\n    sub r7, r1, r0\n    ldr r1, [sp, #0x24]\n    ldr r6, [sp, #0x20]\n    add r5, r1, r0\n    b _022681E2\n    mov r0, #1\n    ldr r1, [sp, #0x1c]\n    lsl r0, r0, #0x10\n    add r7, r1, r0\n    ldr r1, [sp, #0x24]\n    ldr r6, [sp, #0x20]\n    add r5, r1, r0\n    b _022681E2\n    cmp r0, #3\n    bne _022681C4\n    mov r0, #2\n    ldr r1, [sp, #0x24]\n    lsl r0, r0, #0x10\n    ldr r7, [sp, #0x1c]\n    ldr r6, [sp, #0x20]\n    sub r5, r1, r0\n    b _022681E2\n    mov r0, #1\n    ldr r1, [sp, #0x1c]\n    lsl r0, r0, #0x10\n    sub r7, r1, r0\n    ldr r1, [sp, #0x24]\n    ldr r6, [sp, #0x20]\n    sub r5, r1, r0\n    b _022681E2\n    mov r0, #1\n    ldr r1, [sp, #0x1c]\n    lsl r0, r0, #0x10\n    add r7, r1, r0\n    ldr r1, [sp, #0x24]\n    ldr r6, [sp, #0x20]\n    sub r5, r1, r0\n    str r6, [sp]\n    ldr r0, [sp, #0x24]\n    add r2, r7, #0\n    str r0, [sp, #4]\n    str r5, [sp, #8]\n    mov r0, #0x13\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #0x18]\n    ldr r1, [sp, #0x1c]\n    ldr r3, [sp, #0x20]\n    bl ov49_0226540C\n    mov r3, #2\n    ldr r0, [sp, #0x14]\n    ldr r1, _02268228 ; =0x00001555\n    ldr r2, _0226822C ; =0x0000071C\n    lsl r3, r3, #0x10\n    bl ov49_022655F4\n    ldr r0, [sp, #0x18]\n    add r4, r4, #1\n    add r0, #0x28\n    str r0, [sp, #0x18]\n    ldr r0, [sp, #0x14]\n    add r0, #0xc\n    str r0, [sp, #0x14]\n    ldr r0, [sp, #0x10]\n    ldrh r0, [r0, #4]\n    cmp r4, r0\n    blt _0226817A\n    ldr r0, [sp, #0x10]\n    bl ov49_02268230\n    add sp, #0x28\n    pop {r3, r4, r5, r6, r7, pc}\n    _02268228: .word 0x00001555\n    _0226822C: .word 0x0000071C"
    );
    #endif
}

void ov49_02268230(void) {
    /* Original at 0x02268230 */
    /* Requires manual decompilation - 75 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x1c\n    add r5, r0, #0\n    mov r0, #0\n    str r0, [sp, #8]\n    ldrh r0, [r5, #4]\n    cmp r0, #0\n    ble _022682C2\n    add r4, r5, #0\n    add r0, r5, #0\n    add r4, #0xa8\n    str r0, [sp, #4]\n    add r0, #8\n    str r0, [sp, #4]\n    str r4, [sp]\n    add r6, r0, #0\n    add r7, r5, #0\n    mov r0, #0\n    ldrsh r0, [r5, r0]\n    cmp r0, #0xe\n    bne _0226826A\n    mov r3, #3\n    ldr r2, _022682D0 ; =0x00000E38\n    add r0, r4, #0\n    mov r1, #0\n    lsl r3, r3, #0xe\n    bl ov49_022655F4\n    b _02268270\n    add r0, r4, #0\n    bl ov49_02265628\n    mov r1, #0\n    ldrsh r1, [r5, r1]\n    ldr r0, [sp, #4]\n    bl ov49_02265434\n    ldr r0, [sp]\n    add r1, sp, #0xc\n    bl ov49_02265660\n    add r0, r6, #0\n    add r1, sp, #0x10\n    add r2, sp, #0x14\n    add r3, sp, #0x18\n    bl ov49_022655E0\n    ldr r1, [sp, #0x14]\n    ldr r0, [sp, #0xc]\n    ldr r3, [sp, #0x18]\n    add r2, r1, r0\n    add r0, r7, #0\n    str r2, [sp, #0x14]\n    add r0, #0xd8\n    ldr r0, [r0]\n    ldr r1, [sp, #0x10]\n    bl sub_020182A8\n    ldr r0, [sp, #4]\n    ldrh r1, [r5, #4]\n    add r0, #0x28\n    str r0, [sp, #4]\n    ldr r0, [sp]\n    add r4, #0xc\n    add r0, #0xc\n    str r0, [sp]\n    ldr r0, [sp, #8]\n    add r6, #0x28\n    add r0, r0, #1\n    add r7, r7, #4\n    str r0, [sp, #8]\n    cmp r0, r1\n    blt _02268252\n    mov r0, #0\n    ldrsh r1, [r5, r0]\n    cmp r1, #0x16\n    blt _022682CC\n    mov r0, #1\n    add sp, #0x1c\n    pop {r4, r5, r6, r7, pc}\n    _022682D0: .word 0x00000E38"
    );
    #endif
}

void ov49_022682D4(void) {
    /* Original at 0x022682D4 */
    /* Requires manual decompilation - 46 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x1c\n    add r5, r0, #0\n    add r0, r1, #0\n    add r1, sp, #0x10\n    bl ov49_02259154\n    mov r1, #2\n    ldr r0, [sp, #0x10]\n    lsl r1, r1, #0xe\n    add r0, r0, r1\n    str r0, [sp, #0x10]\n    mov r0, #5\n    ldr r2, [sp, #0x14]\n    lsl r0, r0, #0xe\n    add r0, r2, r0\n    str r0, [sp, #0x14]\n    ldr r0, [sp, #0x18]\n    mov r4, #0\n    sub r0, r0, r1\n    str r0, [sp, #0x18]\n    ldrh r0, [r5, #4]\n    cmp r0, #0\n    ble _02268330\n    mov r6, #5\n    mov r7, #7\n    lsl r6, r6, #0xc\n    lsl r7, r7, #0xc\n    str r6, [sp]\n    mov r0, #0xe\n    mov r3, #0xd\n    str r7, [sp, #4]\n    lsl r0, r0, #0xc\n    str r0, [sp, #8]\n    mov r0, #8\n    str r0, [sp, #0xc]\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, sp, #0x10\n    lsl r3, r3, #0xc\n    bl ov49_022683FC\n    ldrh r0, [r5, #4]\n    add r4, r4, #1\n    cmp r4, r0\n    blt _0226830C\n    add sp, #0x1c\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov49_02268334(void) {
    /* Original at 0x02268334 */
    /* Requires manual decompilation - 94 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x24\n    add r5, r0, #0\n    ldrh r0, [r5, #4]\n    mov r6, #0\n    cmp r0, #0\n    ble _022683D6\n    add r4, r5, #0\n    str r4, [sp, #0x10]\n    add r4, #8\n    str r4, [sp, #0x10]\n    add r7, r5, #0\n    mov r1, #0\n    ldrsh r1, [r5, r1]\n    ldr r0, [sp, #0x10]\n    bl ov49_02265434\n    str r0, [sp, #0x14]\n    add r0, r4, #0\n    add r1, sp, #0x18\n    add r2, sp, #0x1c\n    add r3, sp, #0x20\n    bl ov49_022655E0\n    add r0, r7, #0\n    add r0, #0xd8\n    ldr r0, [r0]\n    ldr r1, [sp, #0x18]\n    ldr r2, [sp, #0x1c]\n    ldr r3, [sp, #0x20]\n    bl sub_020182A8\n    ldr r0, [sp, #0x14]\n    cmp r0, #1\n    bne _022683C4\n    ldrb r0, [r5, #7]\n    add r2, sp, #0x18\n    cmp r0, #0\n    bne _022683A2\n    mov r0, #1\n    lsl r0, r0, #0xe\n    str r0, [sp]\n    ldr r0, _022683F8 ; =0xFFFFD000\n    ldr r3, _022683F8 ; =0xFFFFD000\n    str r0, [sp, #4]\n    mov r0, #3\n    lsl r0, r0, #0xc\n    str r0, [sp, #8]\n    mov r0, #3\n    str r0, [sp, #0xc]\n    add r0, r5, #0\n    add r1, r6, #0\n    bl ov49_022683FC\n    b _022683C4\n    mov r0, #5\n    lsl r0, r0, #0xc\n    str r0, [sp]\n    mov r0, #6\n    lsl r0, r0, #0xc\n    str r0, [sp, #4]\n    mov r0, #0xa\n    lsl r0, r0, #0xc\n    str r0, [sp, #8]\n    mov r0, #4\n    mov r3, #0xa\n    str r0, [sp, #0xc]\n    add r0, r5, #0\n    add r1, r6, #0\n    lsl r3, r3, #0xc\n    bl ov49_022683FC\n    ldr r0, [sp, #0x10]\n    add r6, r6, #1\n    add r0, #0x28\n    str r0, [sp, #0x10]\n    ldrh r0, [r5, #4]\n    add r4, #0x28\n    add r7, r7, #4\n    cmp r6, r0\n    blt _0226834C\n    ldr r0, [sp, #0x14]\n    cmp r0, #1\n    bne _022683F2\n    ldrb r0, [r5, #7]\n    add r0, r0, #1\n    cmp r0, #3\n    bge _022683EC\n    strb r0, [r5, #7]\n    mov r0, #0\n    strh r0, [r5]\n    b _022683F2\n    add sp, #0x24\n    mov r0, #1\n    pop {r4, r5, r6, r7, pc}\n    mov r0, #0\n    add sp, #0x24\n    pop {r4, r5, r6, r7, pc}\n    _022683F8: .word 0xFFFFD000"
    );
    #endif
}

void ov49_022683FC(void) {
    /* Original at 0x022683FC */
    /* Requires manual decompilation - 68 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r5, r1, #0\n    add r7, r0, #0\n    add r4, r2, #0\n    add r6, r3, #0\n    cmp r5, #3\n    bhi _0226845A\n    add r3, r5, r5\n    add r3, pc\n    ldrh r3, [r3, #6]\n    lsl r3, r3, #0x10\n    asr r3, r3, #0x10\n    add pc, r3\n    _02268418: ; jump table\n    ldr r0, [r4]\n    ldr r1, [r4, #4]\n    sub r2, r0, r6\n    ldr r0, [sp, #0x28]\n    add r0, r1, r0\n    ldr r1, [r4, #8]\n    b _0226845A\n    ldr r0, [r4]\n    ldr r1, [r4, #4]\n    add r2, r0, r6\n    ldr r0, [sp, #0x28]\n    add r0, r1, r0\n    ldr r1, [r4, #8]\n    b _0226845A\n    ldr r1, [r4]\n    ldr r0, [sp, #0x2c]\n    sub r2, r1, r0\n    ldr r1, [r4, #4]\n    ldr r0, [sp, #0x30]\n    add r0, r1, r0\n    ldr r1, [r4, #8]\n    b _0226845A\n    ldr r1, [r4]\n    ldr r0, [sp, #0x2c]\n    add r2, r1, r0\n    ldr r1, [r4, #4]\n    ldr r0, [sp, #0x30]\n    add r0, r1, r0\n    ldr r1, [r4, #8]\n    str r0, [sp]\n    ldr r0, [r4, #8]\n    str r0, [sp, #4]\n    str r1, [sp, #8]\n    ldr r0, [sp, #0x34]\n    add r1, r7, #0\n    str r0, [sp, #0xc]\n    mov r0, #0x28\n    add r1, #8\n    mul r0, r5\n    add r0, r1, r0\n    ldr r1, [r4]\n    ldr r3, [r4, #4]\n    bl ov49_0226540C\n    lsl r0, r5, #2\n    add r0, r7, r0\n    add r0, #0xd8\n    ldr r0, [r0]\n    ldr r1, [r4]\n    ldr r2, [r4, #4]\n    ldr r3, [r4, #8]\n    bl sub_020182A8\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov49_02268490(void) {
    /* Original at 0x02268490 */
    /* Requires manual decompilation - 43 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r1, #0\n    mov r1, #0x60\n    add r6, r2, #0\n    bl Heap_Alloc\n    mov r1, #0\n    mov r2, #0x60\n    add r4, r0, #0\n    bl memset\n    mov r1, #0xa\n    ldr r2, _022684EC ; =ov49_0226A7E0\n    mul r1, r5\n    add r0, r4, #0\n    add r1, r2, r1\n    bl ov49_022686C0\n    ldr r2, _022684F0 ; =ov49_0226A7D8\n    lsl r1, r6, #1\n    add r0, r4, #0\n    add r1, r2, r1\n    bl ov49_022686E4\n    mov r1, #0\n    add r2, r4, #0\n    mov r0, #0x3c\n    add r1, r1, #1\n    str r0, [r2, #0x48]\n    add r2, r2, #4\n    cmp r1, #2\n    blt _022684C6\n    mov r2, #0\n    add r1, r4, #0\n    mov r0, #0x3c\n    add r2, r2, #1\n    str r0, [r1, #0x50]\n    add r1, r1, #4\n    cmp r2, #4\n    blt _022684D6\n    add r0, r4, #0\n    bl ov49_022686F0\n    add r0, r4, #0\n    pop {r4, r5, r6, pc}\n    nop\n    _022684EC: .word ov49_0226A7E0\n    _022684F0: .word ov49_0226A7D8"
    );
    #endif
}

void ov49_022684F4(void) {
    Heap_Free();
}

void ov49_022684FC(void) {
    /* Original at 0x022684FC */
    /* Requires manual decompilation - 66 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    str r0, [sp, #4]\n    ldr r4, [sp, #4]\n    mov r0, #0\n    add r6, r4, #0\n    add r5, r4, #0\n    add r7, r0, #0\n    add r6, #0x30\n    add r5, #0x18\n    ldr r1, [r4, #0x48]\n    add r1, r1, #1\n    cmp r1, #0x3c\n    bgt _0226852C\n    str r1, [r4, #0x48]\n    mov r0, #0x3c\n    str r0, [sp]\n    ldr r3, [r4, #0x48]\n    add r0, r5, #0\n    add r1, r6, #0\n    add r2, r4, #0\n    bl ov49_02268664\n    mov r0, #1\n    add r7, r7, #1\n    add r4, r4, #4\n    add r6, r6, #4\n    add r5, r5, #4\n    cmp r7, #2\n    blt _02268510\n    ldr r4, [sp, #4]\n    mov r1, #0\n    add r7, r4, #0\n    add r6, r4, #0\n    add r5, r4, #0\n    str r1, [sp, #8]\n    add r7, #8\n    add r6, #0x38\n    add r5, #0x20\n    ldr r1, [r4, #0x50]\n    add r1, r1, #1\n    cmp r1, #0x3c\n    bgt _02268566\n    str r1, [r4, #0x50]\n    mov r0, #0x3c\n    str r0, [sp]\n    ldr r3, [r4, #0x50]\n    add r0, r5, #0\n    add r1, r6, #0\n    add r2, r7, #0\n    bl ov49_02268664\n    mov r0, #1\n    ldr r1, [sp, #8]\n    add r4, r4, #4\n    add r1, r1, #1\n    add r7, r7, #4\n    add r6, r6, #4\n    add r5, r5, #4\n    str r1, [sp, #8]\n    cmp r1, #4\n    blt _0226854A\n    cmp r0, #0\n    beq _02268582\n    ldr r0, [sp, #4]\n    bl ov49_022686F0\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov49_02268588(void) {
    /* Original at 0x02268588 */
    /* Requires manual decompilation - 53 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldrb r0, [r5]\n    ldr r2, _022685F4 ; =ov49_0226A7E0\n    strb r0, [r5, #0x18]\n    ldrb r0, [r5, #1]\n    strb r0, [r5, #0x19]\n    ldrb r0, [r5, #2]\n    strb r0, [r5, #0x1a]\n    ldrb r0, [r5, #3]\n    strb r0, [r5, #0x1b]\n    mov r0, #0\n    str r0, [r5, #0x48]\n    mov r0, #0xa\n    mul r0, r1\n    add r4, r2, r0\n    add r0, r5, #0\n    add r0, #0x30\n    add r1, r4, #0\n    bl ov49_02268640\n    add r6, r4, #2\n    add r4, r5, #0\n    mov r7, #0\n    add r4, #0x38\n    ldrb r1, [r5, #8]\n    add r0, r5, #0\n    add r0, #0x20\n    strb r1, [r0]\n    add r0, r5, #0\n    ldrb r1, [r5, #9]\n    add r0, #0x21\n    strb r1, [r0]\n    add r0, r5, #0\n    ldrb r1, [r5, #0xa]\n    add r0, #0x22\n    strb r1, [r0]\n    add r0, r5, #0\n    ldrb r1, [r5, #0xb]\n    add r0, #0x23\n    strb r1, [r0]\n    mov r0, #0\n    str r0, [r5, #0x50]\n    add r0, r4, #0\n    add r1, r6, #0\n    bl ov49_02268640\n    add r7, r7, #1\n    add r5, r5, #4\n    add r6, r6, #2\n    add r4, r4, #4\n    cmp r7, #4\n    blt _022685BA\n    pop {r3, r4, r5, r6, r7, pc}\n    _022685F4: .word ov49_0226A7E0"
    );
    #endif
}

void ov49_022685F8(void) {
    /* Original at 0x022685F8 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "ldrb r2, [r0, #4]\n    ldr r3, _02268618 ; =ov49_02268640\n    lsl r1, r1, #1\n    strb r2, [r0, #0x1c]\n    ldrb r2, [r0, #5]\n    strb r2, [r0, #0x1d]\n    ldrb r2, [r0, #6]\n    strb r2, [r0, #0x1e]\n    ldrb r2, [r0, #7]\n    strb r2, [r0, #0x1f]\n    mov r2, #0\n    str r2, [r0, #0x4c]\n    ldr r2, _0226861C ; =ov49_0226A7D8\n    add r0, #0x34\n    add r1, r2, r1\n    bx r3\n    _02268618: .word ov49_02268640\n    _0226861C: .word ov49_0226A7D8"
    );
    #endif
}

void ov49_02268620(void) {
    /* Original at 0x02268620 */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void ov49_02268624(void) {
    /* Original at 0x02268624 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    mov r3, #0\n    mov r2, #2\n    ldrsb r4, [r0, r3]\n    ldrsb r2, [r0, r2]\n    mov r3, #1\n    ldrsb r0, [r0, r3]\n    lsl r2, r2, #0xa\n    lsl r0, r0, #5\n    orr r0, r4\n    orr r0, r2\n    strh r0, [r1]\n    pop {r3, r4}\n    bx lr"
    );
    #endif
}

void ov49_02268640(void) {
    /* Original at 0x02268640 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    ldrh r3, [r1]\n    mov r2, #0x1f\n    and r3, r2\n    strb r3, [r0]\n    ldrh r4, [r1]\n    lsl r3, r2, #5\n    and r3, r4\n    asr r3, r3, #5\n    strb r3, [r0, #1]\n    ldrh r3, [r1]\n    lsl r1, r2, #0xa\n    and r1, r3\n    asr r1, r1, #0xa\n    strb r1, [r0, #2]\n    pop {r3, r4}\n    bx lr"
    );
    #endif
}

void ov49_02268664(void) {
    /* Original at 0x02268664 */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r5, r0, #0\n    mov r0, #1\n    add r4, r2, #0\n    ldrsb r2, [r1, r0]\n    ldrsb r0, [r5, r0]\n    add r6, r3, #0\n    sub r0, r2, r0\n    str r0, [sp, #4]\n    mov r0, #2\n    ldrsb r2, [r1, r0]\n    ldrsb r0, [r5, r0]\n    sub r0, r2, r0\n    str r0, [sp]\n    mov r0, #0\n    ldrsb r7, [r5, r0]\n    ldrsb r0, [r1, r0]\n    ldr r1, [sp, #0x20]\n    sub r0, r0, r7\n    mul r0, r6\n    bl _s32_div_f\n    add r0, r7, r0\n    strb r0, [r4]\n    ldr r0, [sp, #4]\n    ldr r1, [sp, #0x20]\n    mul r0, r6\n    bl _s32_div_f\n    mov r1, #1\n    ldrsb r1, [r5, r1]\n    add r0, r1, r0\n    strb r0, [r4, #1]\n    ldr r0, [sp]\n    ldr r1, [sp, #0x20]\n    mul r0, r6\n    bl _s32_div_f\n    mov r1, #2\n    ldrsb r1, [r5, r1]\n    add r0, r1, r0\n    strb r0, [r4, #2]\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov49_022686C0(void) {
    /* Original at 0x022686C0 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl ov49_02268640\n    mov r6, #0\n    add r4, r4, #2\n    add r5, #8\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov49_02268640\n    add r6, r6, #1\n    add r4, r4, #2\n    add r5, r5, #4\n    cmp r6, #4\n    blt _022686D0\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov49_022686E4(void) {
    ov49_02268640();
}

void ov49_022686F0(void) {
    /* Original at 0x022686F0 */
    /* Requires manual decompilation - 49 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r7, sp, #4\n    str r0, [sp]\n    mov r4, #0\n    add r5, r0, #0\n    add r7, #2\n    add r6, sp, #4\n    add r0, r5, #0\n    add r1, r7, #0\n    bl ov49_02268624\n    ldrh r1, [r6, #2]\n    add r0, r4, #0\n    bl NNS_G3dGlbLightColor\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #2\n    blt _02268700\n    ldr r0, [sp]\n    add r1, sp, #4\n    add r0, #8\n    add r1, #2\n    bl ov49_02268624\n    ldr r0, [sp]\n    add r1, sp, #4\n    add r0, #0xc\n    bl ov49_02268624\n    add r1, sp, #4\n    ldrh r0, [r1, #2]\n    ldrh r1, [r1]\n    mov r2, #0\n    bl NNS_G3dGlbMaterialColorDiffAmb\n    ldr r0, [sp]\n    add r1, sp, #4\n    add r0, #0x10\n    add r1, #2\n    bl ov49_02268624\n    ldr r0, [sp]\n    add r1, sp, #4\n    add r0, #0x14\n    str r0, [sp]\n    bl ov49_02268624\n    add r1, sp, #4\n    ldrh r0, [r1, #2]\n    ldrh r1, [r1]\n    mov r2, #0\n    bl NNS_G3dGlbMaterialColorSpecEmi\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov49_02268764(void) {
    /* Original at 0x02268764 */
    /* Requires manual decompilation - 94 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r5, r1, #0\n    mov r1, #0x1c\n    add r6, r0, #0\n    bl Heap_Alloc\n    add r4, r0, #0\n    add r2, r4, #0\n    mov r1, #0x1c\n    mov r0, #0\n    strb r0, [r2]\n    add r2, r2, #1\n    sub r1, r1, #1\n    bne _0226877A\n    str r5, [r4]\n    add r0, r5, #0\n    bl ov49_02259FE8\n    str r0, [r4, #4]\n    add r0, r5, #0\n    bl ov49_02259FF8\n    str r0, [r4, #8]\n    add r0, r5, #0\n    bl ov49_02259FF0\n    str r0, [r4, #0xc]\n    ldr r0, [r4, #4]\n    bl ov45_0222A3BC\n    bl ov49_02268974\n    add r7, r0, #0\n    ldr r0, [r4, #4]\n    bl ov45_0222A3D4\n    bl ov49_022689A0\n    str r0, [sp, #4]\n    ldr r0, [r4, #4]\n    bl ov45_0222A3EC\n    bl ov49_022689D4\n    add r3, r0, #0\n    ldr r2, [sp, #4]\n    add r0, r6, #0\n    add r1, r7, #0\n    bl ov49_02268490\n    str r0, [r4, #0x10]\n    add r0, r5, #0\n    add r1, r6, #0\n    bl ov49_02268FAC\n    str r0, [r4, #0x14]\n    ldr r0, [r4, #4]\n    ldr r1, [r4, #8]\n    add r2, r6, #0\n    bl ov49_02268A0C\n    str r0, [r4, #0x18]\n    ldr r0, [r4, #0xc]\n    add r1, r7, #0\n    bl ov49_02258BEC\n    ldr r0, [r4, #4]\n    bl ov45_0222A35C\n    add r5, r0, #0\n    ldr r0, [r4, #4]\n    bl ov45_0222A324\n    ldr r0, [r4, #4]\n    bl ov45_0222A374\n    str r0, [sp]\n    ldr r0, [r4, #4]\n    bl ov45_0222A3A0\n    add r7, r0, #0\n    ldr r0, [r4, #4]\n    bl ov45_0222A330\n    add r6, r0, #0\n    ldr r0, [r4, #4]\n    bl ov45_0222A394\n    cmp r5, #2\n    bne _02268820\n    ldr r0, [r4, #8]\n    bl ov49_0225E714\n    cmp r5, #1\n    beq _02268834\n    cmp r5, #0\n    bne _02268834\n    cmp r7, #1\n    bne _02268834\n    ldr r0, [r4, #8]\n    mov r1, #3\n    bl ov49_0225E760\n    ldr r0, [sp]\n    cmp r0, #1\n    bne _02268840\n    ldr r0, [r4, #8]\n    bl ov49_0225E574\n    cmp r6, #1\n    bne _0226884A\n    add r0, r4, #0\n    bl ov49_02268A00\n    add r0, r4, #0\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov49_02268850(void) {
    ov49_02268A6C(*((u32*)(r0 + 0x18)));
    ov49_02269090(*((u32*)(r4 + 0x14)));
    ov49_022684F4(*((u32*)(r4 + 0x10)));
    Heap_Free(r4);
}

void ov49_02268870(void) {
    /* Original at 0x02268870 */
    /* Requires manual decompilation - 94 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #4]\n    mov r1, #1\n    bl ov45_0222A288\n    cmp r0, #0\n    beq _0226889C\n    ldr r0, [r5, #4]\n    bl ov45_0222A3BC\n    bl ov49_02268974\n    add r4, r0, #0\n    ldr r0, [r5, #0x10]\n    add r1, r4, #0\n    bl ov49_02268588\n    ldr r0, [r5, #0xc]\n    add r1, r4, #0\n    bl ov49_02258C08\n    ldr r0, [r5, #4]\n    mov r1, #2\n    bl ov45_0222A288\n    cmp r0, #0\n    beq _022688BA\n    ldr r0, [r5, #4]\n    bl ov45_0222A3D4\n    bl ov49_022689A0\n    add r1, r0, #0\n    ldr r0, [r5, #0x10]\n    bl ov49_022685F8\n    ldr r0, [r5, #4]\n    mov r1, #3\n    bl ov45_0222A288\n    cmp r0, #0\n    beq _022688D8\n    ldr r0, [r5, #4]\n    bl ov45_0222A3EC\n    bl ov49_022689D4\n    add r1, r0, #0\n    ldr r0, [r5, #0x10]\n    bl ov49_02268620\n    ldr r0, [r5, #4]\n    bl ov45_0222A3A0\n    cmp r0, #1\n    bne _022688FE\n    ldr r0, [r5, #4]\n    bl ov45_0222A35C\n    cmp r0, #0\n    bne _022688FE\n    ldr r0, [r5, #8]\n    bl ov49_0225E824\n    cmp r0, #0\n    bne _022688FE\n    ldr r0, [r5, #8]\n    mov r1, #1\n    bl ov49_0225E760\n    ldr r0, [r5, #4]\n    mov r1, #5\n    bl ov45_0222A288\n    cmp r0, #0\n    beq _02268922\n    ldr r0, [r5, #4]\n    bl ov45_0222A35C\n    cmp r0, #1\n    bne _02268922\n    ldr r0, [r5, #8]\n    bl ov49_0225E714\n    ldr r0, [r5, #8]\n    mov r1, #2\n    bl ov49_0225E760\n    ldr r0, [r5, #4]\n    mov r1, #6\n    bl ov45_0222A288\n    cmp r0, #0\n    beq _0226893E\n    ldr r0, [r5, #4]\n    bl ov45_0222A374\n    cmp r0, #1\n    bne _0226893E\n    ldr r0, [r5, #8]\n    bl ov49_0225E574\n    ldr r0, [r5, #4]\n    bl ov45_0222A330\n    cmp r0, #1\n    bne _02268954\n    ldr r0, [r5, #8]\n    bl ov49_0225E580\n    add r0, r5, #0\n    bl ov49_02268A00\n    ldr r0, [r5, #0x10]\n    bl ov49_022684FC\n    ldr r0, [r5, #0x14]\n    bl ov49_02269098\n    ldr r0, [r5, #0x18]\n    bl ov49_02268A7C\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov49_02268968(void) {
    ov49_02269154();
}

void ov49_02268974(void) {
    GF_AssertFail(0);
}

void ov49_022689A0(void) {
    GF_AssertFail(0);
}

void ov49_022689D4(void) {
    /* Original at 0x022689D4 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    add r1, r0, #0\n    sub r1, #0xb\n    cmp r1, #3\n    bhi _022689F6\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _022689EA: ; jump table\n    sub r0, #0xb\n    pop {r3, pc}\n    bl GF_AssertFail\n    mov r0, #0\n    pop {r3, pc}"
    );
    #endif
}

void ov49_02268A00(void) {
    NNS_G3dGlbLightColor();
}

void ov49_02268A0C(void) {
    /* Original at 0x02268A0C */
    /* Requires manual decompilation - 40 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r6, r1, #0\n    add r0, r2, #0\n    mov r1, #0x10\n    bl Heap_Alloc\n    add r4, r0, #0\n    add r2, r4, #0\n    mov r1, #0x10\n    mov r0, #0\n    strb r0, [r2]\n    add r2, r2, #1\n    sub r1, r1, #1\n    bne _02268A22\n    str r5, [r4]\n    add r0, r5, #0\n    str r6, [r4, #4]\n    bl ov45_0222B1DC\n    add r7, r0, #0\n    add r0, r5, #0\n    bl ov45_0222A35C\n    strh r0, [r4, #0xa]\n    ldrh r0, [r4, #0xa]\n    cmp r0, #0\n    beq _02268A66\n    cmp r7, #0\n    beq _02268A66\n    add r0, r6, #0\n    mov r1, #1\n    bl ov49_0225E624\n    add r0, r4, #0\n    bl ov49_02268D94\n    add r0, r5, #0\n    bl ov45_0222B1EC\n    add r2, r0, #0\n    add r0, r4, #0\n    add r1, r7, #0\n    bl ov49_02268C74\n    add r0, r4, #0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov49_02268A6C(void) {
    ov49_02268DB0();
    Heap_Free(r4);
}

void ov49_02268A7C(void) {
    /* Original at 0x02268A7C */
    /* Requires manual decompilation - 40 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r0, [r5]\n    bl ov45_0222B1DC\n    add r4, r0, #0\n    ldr r0, [r5]\n    bl ov45_0222B1EC\n    add r7, r0, #0\n    ldr r0, [r5]\n    bl ov45_0222A35C\n    add r6, r0, #0\n    ldrh r0, [r5, #0xa]\n    cmp r0, r6\n    beq _02268ABC\n    strh r6, [r5, #0xa]\n    cmp r6, #1\n    bne _02268ABC\n    ldr r0, [r5, #4]\n    mov r1, #1\n    bl ov49_0225E624\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r7, #0\n    bl ov49_02268C74\n    add r0, r5, #0\n    bl ov49_02268D94\n    cmp r6, #0\n    beq _02268ADA\n    ldrb r0, [r5, #8]\n    cmp r0, r4\n    beq _02268AD0\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r7, #0\n    bl ov49_02268C74\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r7, #0\n    bl ov49_02268ADC\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov49_02268ADC(void) {
    /* Original at 0x02268ADC */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    add r6, r2, #0\n    cmp r4, #6\n    blo _02268AEC\n    bl GF_AssertFail\n    cmp r4, #6\n    bhs _02268AFC\n    ldr r2, _02268B00 ; =ov49_0226A84C\n    lsl r3, r4, #2\n    ldr r2, [r2, r3]\n    add r0, r5, #0\n    add r1, r6, #0\n    blx r2\n    pop {r4, r5, r6, pc}\n    nop\n    _02268B00: .word ov49_0226A84C"
    );
    #endif
}

void ov49_02268B04(void) {
    /* Original at 0x02268B04 */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void ov49_02268B08(void) {
    /* Original at 0x02268B08 */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void ov49_02268B0C(void) {
    /* Original at 0x02268B0C */
    /* Requires manual decompilation - 61 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r0, #0\n    add r0, r1, #0\n    mov r1, #0xe\n    bl _u32_div_f\n    cmp r1, #0\n    bne _02268B86\n    ldr r5, _02268B88 ; =ov49_0226A8B4\n    mov r4, #0\n    ldr r0, [r7, #0xc]\n    add r1, r4, #0\n    lsl r2, r0, #3\n    ldr r0, _02268B8C ; =ov49_0226A894\n    mov r6, #0\n    add r3, r0, r2\n    mov r0, #3\n    and r1, r0\n    ldr r0, _02268B8C ; =ov49_0226A894\n    ldr r0, [r0, r2]\n    cmp r1, r0\n    bne _02268B40\n    mov r0, #1\n    str r0, [sp]\n    add r6, r0, #0\n    b _02268B4C\n    ldr r0, [r3, #4]\n    cmp r1, r0\n    bne _02268B4C\n    add r0, r6, #0\n    str r0, [sp]\n    mov r6, #1\n    cmp r6, #1\n    bne _02268B72\n    cmp r4, #0x11\n    bhs _02268B6E\n    ldrb r1, [r5]\n    mov r3, #1\n    ldr r0, [r7, #4]\n    ldr r2, [sp]\n    lsl r3, r3, #0xc\n    bl ov49_0225E85C\n    add r6, r0, #0\n    cmp r6, #1\n    beq _02268B74\n    bl GF_AssertFail\n    b _02268B74\n    mov r6, #0\n    b _02268B74\n    mov r6, #1\n    add r5, r5, #1\n    add r4, r4, #1\n    cmp r6, #1\n    beq _02268B20\n    ldr r0, [r7, #0xc]\n    add r1, r0, #1\n    mov r0, #3\n    and r0, r1\n    str r0, [r7, #0xc]\n    pop {r3, r4, r5, r6, r7, pc}\n    _02268B88: .word ov49_0226A8B4\n    _02268B8C: .word ov49_0226A894"
    );
    #endif
}

void ov49_02268B90(void) {
    /* Original at 0x02268B90 */
    /* Requires manual decompilation - 68 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    add r0, r1, #0\n    mov r1, #6\n    bl _u32_div_f\n    cmp r1, #0\n    bne _02268C20\n    ldr r0, [r5, #0xc]\n    lsl r1, r0, #1\n    ldr r0, _02268C24 ; =ov49_0226A83C\n    ldrb r0, [r0, r1]\n    str r0, [sp]\n    ldr r0, _02268C28 ; =ov49_0226A83D\n    ldrb r0, [r0, r1]\n    add r1, sp, #4\n    bl ov49_02268D0C\n    ldr r0, [sp, #8]\n    mov r4, #0\n    cmp r0, #0\n    bls _02268BE2\n    mov r7, #1\n    add r6, r4, #0\n    lsl r7, r7, #0xc\n    ldr r1, [sp, #4]\n    ldr r0, [r5, #4]\n    ldrb r1, [r1, r4]\n    add r2, r6, #0\n    add r3, r7, #0\n    bl ov49_0225E85C\n    cmp r0, #1\n    beq _02268BDA\n    bl GF_AssertFail\n    ldr r0, [sp, #8]\n    add r4, r4, #1\n    cmp r4, r0\n    blo _02268BC4\n    ldr r0, [sp]\n    add r1, sp, #4\n    bl ov49_02268D0C\n    ldr r0, [sp, #8]\n    mov r4, #0\n    cmp r0, #0\n    bls _02268C14\n    mov r6, #1\n    lsl r7, r6, #0xc\n    ldr r1, [sp, #4]\n    ldr r0, [r5, #4]\n    ldrb r1, [r1, r4]\n    add r2, r6, #0\n    add r3, r7, #0\n    bl ov49_0225E85C\n    cmp r0, #1\n    beq _02268C0C\n    bl GF_AssertFail\n    ldr r0, [sp, #8]\n    add r4, r4, #1\n    cmp r4, r0\n    blo _02268BF6\n    ldr r0, [r5, #0xc]\n    mov r1, #7\n    add r0, r0, #1\n    bl _u32_div_f\n    str r1, [r5, #0xc]\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    _02268C24: .word ov49_0226A83C\n    _02268C28: .word ov49_0226A83D"
    );
    #endif
}

void ov49_02268C2C(void) {
    /* Original at 0x02268C2C */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0xc]\n    cmp r0, #3\n    bhs _02268C64\n    lsl r2, r0, #3\n    ldr r0, _02268C68 ; =ov49_0226A864\n    ldr r0, [r0, r2]\n    cmp r0, r1\n    bhs _02268C64\n    ldr r1, _02268C6C ; =ov49_0226A868\n    ldr r0, [r4, #4]\n    ldr r1, [r1, r2]\n    bl ov49_0225E894\n    ldr r1, [r4, #0xc]\n    ldr r0, [r4, #4]\n    lsl r2, r1, #3\n    ldr r1, _02268C6C ; =ov49_0226A868\n    ldr r1, [r1, r2]\n    bl ov49_0225E6E0\n    ldr r0, _02268C70 ; =0x000005B4\n    bl PlaySE\n    ldr r0, [r4, #0xc]\n    add r0, r0, #1\n    str r0, [r4, #0xc]\n    pop {r4, pc}\n    nop\n    _02268C68: .word ov49_0226A864\n    _02268C6C: .word ov49_0226A868\n    _02268C70: .word 0x000005B4"
    );
    #endif
}

void ov49_02268C74(void) {
    /* Original at 0x02268C74 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    add r6, r2, #0\n    cmp r4, #6\n    blo _02268C84\n    bl GF_AssertFail\n    cmp r4, #6\n    bhs _02268CA4\n    add r1, r5, #0\n    mov r0, #0\n    add r1, #0xc\n    strb r0, [r5, #0xc]\n    strb r0, [r1, #1]\n    strb r0, [r1, #2]\n    strb r0, [r1, #3]\n    ldr r2, _02268CA8 ; =ov49_0226A87C\n    lsl r3, r4, #2\n    ldr r2, [r2, r3]\n    add r0, r5, #0\n    add r1, r6, #0\n    blx r2\n    strb r4, [r5, #8]\n    pop {r4, r5, r6, pc}\n    nop\n    _02268CA8: .word ov49_0226A87C"
    );
    #endif
}

void ov49_02268CAC(void) {
    /* Original at 0x02268CAC */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _02268CB8 ; =ov49_0225E82C\n    mov r2, #1\n    ldr r0, [r0, #4]\n    mov r1, #0\n    lsl r2, r2, #0xc\n    bx r3\n    _02268CB8: .word ov49_0225E82C"
    );
    #endif
}

void ov49_02268CBC(void) {
    /* Original at 0x02268CBC */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _02268CC8 ; =ov49_0225E82C\n    mov r1, #1\n    ldr r0, [r0, #4]\n    lsl r2, r1, #0xc\n    bx r3\n    nop\n    _02268CC8: .word ov49_0225E82C"
    );
    #endif
}

void ov49_02268CCC(void) {
    /* Original at 0x02268CCC */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _02268CD8 ; =ov49_0225E82C\n    mov r2, #1\n    ldr r0, [r0, #4]\n    mov r1, #0\n    lsl r2, r2, #0xc\n    bx r3\n    _02268CD8: .word ov49_0225E82C"
    );
    #endif
}

void ov49_02268CDC(void) {
    /* Original at 0x02268CDC */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _02268CE8 ; =ov49_0225E82C\n    mov r2, #1\n    ldr r0, [r0, #4]\n    mov r1, #0\n    lsl r2, r2, #0xc\n    bx r3\n    _02268CE8: .word ov49_0225E82C"
    );
    #endif
}

void ov49_02268CEC(void) {
    /* Original at 0x02268CEC */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov49_02268DB0\n    mov r2, #1\n    ldr r0, [r4, #4]\n    mov r1, #0\n    lsl r2, r2, #0xc\n    bl ov49_0225E82C\n    ldr r0, [r4, #4]\n    mov r1, #0\n    bl ov49_0225E624\n    pop {r4, pc}"
    );
    #endif
}

void ov49_02268D0C(void) {
    /* Original at 0x02268D0C */
    /* Requires manual decompilation - 54 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    cmp r0, #6\n    bhi _02268D72\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02268D1E: ; jump table\n    mov r0, #6\n    str r0, [r1, #4]\n    ldr r0, _02268D78 ; =ov49_0226A834\n    str r0, [r1]\n    pop {r3, pc}\n    mov r0, #2\n    str r0, [r1, #4]\n    ldr r0, _02268D7C ; =ov49_0226A82C\n    str r0, [r1]\n    pop {r3, pc}\n    mov r0, #2\n    str r0, [r1, #4]\n    ldr r0, _02268D80 ; =ov49_0226A824\n    str r0, [r1]\n    pop {r3, pc}\n    mov r0, #1\n    str r0, [r1, #4]\n    ldr r0, _02268D84 ; =ov49_0226A81C\n    str r0, [r1]\n    pop {r3, pc}\n    mov r0, #1\n    str r0, [r1, #4]\n    ldr r0, _02268D88 ; =ov49_0226A820\n    str r0, [r1]\n    pop {r3, pc}\n    mov r0, #2\n    str r0, [r1, #4]\n    ldr r0, _02268D8C ; =ov49_0226A828\n    str r0, [r1]\n    pop {r3, pc}\n    mov r0, #3\n    str r0, [r1, #4]\n    ldr r0, _02268D90 ; =ov49_0226A830\n    str r0, [r1]\n    pop {r3, pc}\n    bl GF_AssertFail\n    pop {r3, pc}\n    _02268D78: .word ov49_0226A834\n    _02268D7C: .word ov49_0226A82C\n    _02268D80: .word ov49_0226A824\n    _02268D84: .word ov49_0226A81C\n    _02268D88: .word ov49_0226A820\n    _02268D8C: .word ov49_0226A828\n    _02268D90: .word ov49_0226A830"
    );
    #endif
}

void ov49_02268D94(void) {
    PlaySE(1);
}

void ov49_02268DB0(void) {
    StopSE(0, 0);
}

void ov49_02268DCC(void) {
    /* Original at 0x02268DCC */
    /* Requires manual decompilation - 187 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r4, r1, #0\n    add r5, r0, #0\n    bl ov49_0225EF84\n    add r6, r0, #0\n    add r0, r4, #0\n    bl ov49_02259FE8\n    str r0, [sp]\n    add r0, r4, #0\n    bl ov49_02259FF0\n    str r0, [sp, #4]\n    bl ov49_02258DB0\n    add r7, r0, #0\n    ldr r0, [sp, #4]\n    bl ov49_02258DAC\n    str r0, [sp, #8]\n    add r0, r5, #0\n    bl ov49_0225EF88\n    cmp r0, #5\n    bls _02268E04\n    b _02268F9E\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02268E10: ; jump table\n    add r0, r5, #0\n    mov r1, #4\n    bl ov49_0225EF40\n    add r6, r0, #0\n    ldr r0, _02268FA8 ; =0x000005DC\n    bl PlaySE\n    ldr r0, [sp, #8]\n    mov r1, #6\n    bl ov49_02258E60\n    bl ov42_022282A4\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #4]\n    add r1, r7, #0\n    mov r2, #0\n    bl ov49_02258EEC\n    add r0, r7, #0\n    mov r1, #0\n    bl ov49_02259130\n    ldr r1, [sp, #0xc]\n    add r0, r7, #0\n    bl ov49_02259160\n    ldr r0, [sp]\n    bl ov45_0222A330\n    cmp r0, #0\n    beq _02268E7E\n    add r0, r4, #0\n    mov r1, #1\n    mov r2, #3\n    bl ov49_0225A30C\n    add r1, r0, #0\n    mov r0, #4\n    str r0, [r6]\n    add r0, r4, #0\n    bl ov49_0225A08C\n    add r0, r5, #0\n    mov r1, #5\n    bl ov49_0225EF8C\n    b _02268FA2\n    ldr r0, [sp]\n    bl ov45_0222A3A0\n    cmp r0, #1\n    bne _02268EA8\n    add r0, r4, #0\n    mov r1, #1\n    mov r2, #0x58\n    bl ov49_0225A30C\n    add r1, r0, #0\n    mov r0, #4\n    str r0, [r6]\n    add r0, r4, #0\n    bl ov49_0225A08C\n    add r0, r5, #0\n    mov r1, #5\n    bl ov49_0225EF8C\n    b _02268FA2\n    ldr r0, [sp]\n    bl ov45_0222A2E0\n    cmp r0, #1\n    bne _02268ED2\n    add r0, r4, #0\n    mov r1, #1\n    mov r2, #0x57\n    bl ov49_0225A30C\n    add r1, r0, #0\n    mov r0, #4\n    str r0, [r6]\n    add r0, r4, #0\n    bl ov49_0225A08C\n    add r0, r5, #0\n    mov r1, #5\n    bl ov49_0225EF8C\n    b _02268FA2\n    add r0, r4, #0\n    mov r1, #1\n    mov r2, #0x51\n    bl ov49_0225A30C\n    add r1, r0, #0\n    mov r0, #1\n    str r0, [r6]\n    add r0, r4, #0\n    bl ov49_0225A08C\n    add r0, r5, #0\n    mov r1, #5\n    bl ov49_0225EF8C\n    b _02268FA2\n    add r0, r4, #0\n    bl ov49_0225A264\n    add r0, r5, #0\n    mov r1, #2\n    bl ov49_0225EF8C\n    b _02268FA2\n    add r0, r4, #0\n    bl ov49_0225A2C4\n    cmp r0, #0\n    beq _02268F14\n    cmp r0, #1\n    beq _02268F24\n    cmp r0, #2\n    b _02268FA2\n    add r0, r5, #0\n    mov r1, #3\n    bl ov49_0225EF8C\n    add r0, r4, #0\n    bl ov49_0225A2F8\n    b _02268FA2\n    add r0, r5, #0\n    mov r1, #4\n    bl ov49_0225EF8C\n    add r0, r4, #0\n    bl ov49_0225A2F8\n    b _02268FA2\n    add r0, r4, #0\n    mov r1, #1\n    mov r2, #0x55\n    bl ov49_0225A30C\n    add r1, r0, #0\n    mov r0, #4\n    str r0, [r6]\n    add r0, r4, #0\n    bl ov49_0225A08C\n    add r0, r5, #0\n    mov r1, #5\n    bl ov49_0225EF8C\n    b _02268FA2\n    add r0, r4, #0\n    bl ov49_0225A0EC\n    add r0, r4, #0\n    bl ov49_0225A2F8\n    ldr r0, [sp, #4]\n    ldr r1, [sp, #8]\n    mov r2, #1\n    bl ov49_02258EEC\n    add r0, r5, #0\n    bl ov49_0225EF68\n    add r0, r7, #0\n    mov r1, #1\n    bl ov49_02259130\n    ldr r0, [sp, #4]\n    add r1, r7, #0\n    mov r2, #0\n    mov r3, #1\n    bl ov49_02258EAC\n    add sp, #0x10\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r4, #0\n    bl ov49_0225A0AC\n    cmp r0, #1\n    bne _02268FA2\n    ldr r1, [r6]\n    add r0, r5, #0\n    bl ov49_0225EF8C\n    b _02268FA2\n    bl GF_AssertFail\n    mov r0, #0\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    _02268FA8: .word 0x000005DC"
    );
    #endif
}

void ov49_02268FAC(void) {
    /* Original at 0x02268FAC */
    /* Requires manual decompilation - 102 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r5, r0, #0\n    add r0, r1, #0\n    mov r1, #0xc4\n    bl Heap_Alloc\n    add r4, r0, #0\n    mov r1, #0\n    mov r2, #0xc4\n    bl memset\n    str r5, [r4]\n    add r0, r5, #0\n    bl ov49_02259FE8\n    str r0, [r4, #4]\n    add r0, r5, #0\n    bl ov49_02259FF8\n    str r0, [r4, #8]\n    add r0, r5, #0\n    bl ov49_0225A000\n    str r0, [r4, #0xc]\n    bl ov49_022589A8\n    add r1, r0, #6\n    add r0, r4, #0\n    add r0, #0xbc\n    str r1, [r0]\n    add r0, r4, #0\n    add r0, #0xbc\n    ldr r1, [r0]\n    mov r0, #7\n    mvn r0, r0\n    sub r1, r0, r1\n    add r0, r4, #0\n    add r0, #0xc0\n    str r1, [r0]\n    add r0, r4, #0\n    add r0, #0xbc\n    ldr r0, [r0]\n    ldr r6, _0226908C ; =ov49_0226A8C8\n    lsl r1, r0, #0x10\n    add r0, r4, #0\n    add r0, #0xbc\n    str r1, [r0]\n    add r0, r4, #0\n    add r0, #0xc0\n    ldr r0, [r0]\n    mov r7, #0\n    lsl r1, r0, #0x10\n    add r0, r4, #0\n    add r0, #0xc0\n    str r1, [r0]\n    add r5, r4, #0\n    mov r0, #0\n    str r0, [sp]\n    ldrb r1, [r6]\n    add r2, sp, #4\n    ldr r0, [r4, #0xc]\n    add r2, #2\n    add r3, sp, #4\n    bl ov49_022589D8\n    add r0, sp, #4\n    ldrh r0, [r0, #2]\n    add r7, r7, #1\n    add r6, r6, #1\n    lsl r1, r0, #4\n    add r0, r5, #0\n    add r0, #0xaa\n    strh r1, [r0]\n    add r0, sp, #4\n    ldrh r0, [r0]\n    lsl r1, r0, #4\n    add r0, r5, #0\n    add r0, #0xac\n    add r5, r5, #4\n    strh r1, [r0]\n    cmp r7, #3\n    blt _0226901E\n    mov r5, #0\n    add r2, r4, #0\n    add r2, #0xbc\n    ldr r0, [r4, #8]\n    ldr r2, [r2]\n    add r1, r5, #0\n    bl ov49_0225E3B8\n    ldr r0, [r4, #4]\n    add r1, r5, #0\n    bl ov45_0222AD80\n    cmp r0, #1\n    bne _0226907E\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov49_02269178\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov49_022695C4\n    add r5, r5, #1\n    cmp r5, #9\n    blt _02269054\n    add r0, r4, #0\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0226908C: .word ov49_0226A8C8"
    );
    #endif
}

void ov49_02269090(void) {
    Heap_Free();
}

void ov49_02269098(void) {
    /* Original at 0x02269098 */
    /* Requires manual decompilation - 81 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    ldr r0, [r5, #4]\n    bl ov45_0222A53C\n    add r1, r0, #0\n    ldr r0, [r5, #4]\n    bl ov45_0222ADA8\n    mov r1, #0\n    mvn r1, r1\n    str r0, [sp, #8]\n    cmp r0, r1\n    bne _022690BA\n    mov r6, #0\n    b _022690C4\n    add r1, sp, #8\n    add r2, sp, #4\n    bl ov45_0222AE08\n    mov r6, #1\n    mov r4, #0\n    ldr r0, [r5, #4]\n    add r1, r4, #0\n    bl ov45_0222AD80\n    cmp r0, #1\n    ldr r0, [r5, #8]\n    bne _0226910E\n    add r1, r4, #0\n    mov r2, #1\n    bl ov49_0225E4CC\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov49_02269178\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov49_022695C4\n    cmp r6, #0\n    beq _022690FC\n    ldr r0, [sp, #8]\n    cmp r0, r4\n    bne _022690FA\n    mov r7, #1\n    b _022690FC\n    mov r7, #0\n    ldr r0, [sp, #4]\n    add r1, r4, #0\n    str r0, [sp]\n    add r0, r5, #0\n    add r2, r6, #0\n    add r3, r7, #0\n    bl ov49_02269240\n    b _02269116\n    add r1, r4, #0\n    mov r2, #0\n    bl ov49_0225E4CC\n    add r4, r4, #1\n    cmp r4, #9\n    blt _022690C6\n    add r7, r5, #0\n    mov r6, #0\n    add r4, r5, #0\n    add r7, #0x2c\n    ldr r0, [r5, #8]\n    add r1, r6, #0\n    bl ov49_0225E524\n    strb r0, [r4, #0x10]\n    ldr r1, [r5, #8]\n    add r0, r7, #0\n    add r2, r6, #0\n    bl ov49_02269430\n    strb r0, [r4, #0x11]\n    ldr r0, [r5, #8]\n    add r1, r6, #0\n    bl ov49_0225E54C\n    strb r0, [r4, #0x12]\n    add r6, r6, #1\n    add r4, r4, #3\n    add r7, #0xe\n    cmp r6, #9\n    blt _02269124\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov49_02269154(void) {
    /* Original at 0x02269154 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r1, #0\n    add r6, r0, #0\n    add r4, r2, #0\n    cmp r5, #9\n    blo _02269164\n    bl GF_AssertFail\n    cmp r4, #3\n    blt _0226916C\n    bl GF_AssertFail\n    lsl r0, r5, #1\n    add r0, r5, r0\n    add r0, r6, r0\n    add r0, r0, r4\n    ldrb r0, [r0, #0x10]\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov49_02269178(void) {
    /* Original at 0x02269178 */
    /* Requires manual decompilation - 84 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #4]\n    str r1, [sp]\n    bl ov45_0222AD90\n    add r4, r0, #0\n    ldr r0, [r5, #4]\n    bl ov45_0222ADA0\n    add r6, r0, #0\n    add r0, r5, #0\n    add r0, #0xc0\n    mov r1, #2\n    ldr r0, [r0]\n    lsl r1, r1, #0xc\n    bl FX_Div\n    add r7, r0, #0\n    cmp r6, #0\n    ble _022691B4\n    lsl r0, r6, #0xc\n    bl _fflt\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    b _022691C2\n    lsl r0, r6, #0xc\n    bl _fflt\n    mov r1, #0x3f\n    lsl r1, r1, #0x18\n    bl _fsub\n    add r6, r0, #0\n    cmp r4, #0\n    ble _022691DA\n    lsl r0, r4, #0xc\n    bl _fflt\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    b _022691E8\n    lsl r0, r4, #0xc\n    bl _fflt\n    mov r1, #0x3f\n    lsl r1, r1, #0x18\n    bl _fsub\n    bl _ffix\n    asr r1, r0, #0x1f\n    asr r3, r7, #0x1f\n    add r2, r7, #0\n    bl _ll_mul\n    mov r2, #2\n    mov r3, #0\n    lsl r2, r2, #0xa\n    add r2, r0, r2\n    adc r1, r3\n    lsl r0, r1, #0x14\n    lsr r4, r2, #0xc\n    orr r4, r0\n    add r0, r6, #0\n    bl _ffix\n    add r1, r0, #0\n    add r0, r4, #0\n    bl FX_Div\n    asr r2, r0, #0x1f\n    lsl r3, r2, #0xd\n    lsr r1, r0, #0x13\n    lsl r2, r0, #0xd\n    mov r0, #2\n    orr r3, r1\n    mov r1, #0\n    lsl r0, r0, #0xa\n    add r2, r2, r0\n    adc r3, r1\n    lsl r0, r3, #0x14\n    lsr r3, r2, #0xc\n    orr r3, r0\n    add r0, r5, #0\n    add r0, #0xbc\n    ldr r2, [r0]\n    ldr r0, [r5, #8]\n    ldr r1, [sp]\n    add r2, r3, r2\n    bl ov49_0225E3B8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov49_02269240(void) {
    /* Original at 0x02269240 */
    /* Requires manual decompilation - 158 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x1c\n    add r7, r0, #0\n    ldr r0, [sp, #0x30]\n    str r1, [sp]\n    str r0, [sp, #0x30]\n    ldr r0, [r7, #4]\n    str r2, [sp, #4]\n    add r5, r3, #0\n    bl ov45_0222AD3C\n    add r6, r0, #0\n    ldr r0, [r7, #4]\n    bl ov45_0222AD2C\n    ldr r0, [sp]\n    mov r4, #0\n    lsl r1, r0, #1\n    add r0, r0, r1\n    str r0, [sp, #0x10]\n    ldr r0, [sp]\n    mov r1, #3\n    bl _u32_div_f\n    str r1, [sp, #8]\n    mov r0, #0xc\n    ldr r1, _02269398 ; =ov49_0226A8DC\n    mul r0, r6\n    add r0, r1, r0\n    str r0, [sp, #0xc]\n    add r0, r7, #0\n    str r0, [sp, #0x14]\n    add r0, #0x2c\n    str r0, [sp, #0x14]\n    ldr r0, [sp]\n    mov r1, #0xe\n    mul r1, r0\n    str r1, [sp, #0x18]\n    ldr r1, [sp, #0x10]\n    ldr r0, [r7, #4]\n    add r1, r4, r1\n    bl ov45_0222ADE8\n    mov r6, #0\n    cmp r5, #1\n    bne _022692A4\n    ldr r1, [sp, #0x30]\n    cmp r4, r1\n    bne _022692A4\n    mov r6, #1\n    cmp r0, #1\n    bne _0226938A\n    cmp r4, #0\n    beq _022692B6\n    cmp r4, #1\n    beq _0226931A\n    cmp r4, #2\n    beq _02269350\n    b _0226938A\n    ldr r0, [r7, #8]\n    ldr r1, [sp]\n    bl ov49_0225E47C\n    cmp r0, #1\n    bne _0226938A\n    ldr r0, [sp, #8]\n    cmp r0, #2\n    bne _022692EC\n    ldr r3, [sp, #0xc]\n    ldr r0, [sp, #4]\n    ldrh r3, [r3, #2]\n    add r1, r5, #0\n    add r2, r6, #0\n    bl ov49_022693D4\n    ldr r0, [sp, #0xc]\n    ldrh r3, [r0, #8]\n    ldr r0, _0226939C ; =0x0000FFFE\n    cmp r3, r0\n    beq _0226930E\n    ldr r0, [sp, #4]\n    add r1, r5, #0\n    add r2, r6, #0\n    bl ov49_022693A4\n    b _0226930E\n    ldr r3, [sp, #0xc]\n    ldr r0, [sp, #4]\n    ldrh r3, [r3]\n    add r1, r5, #0\n    add r2, r6, #0\n    bl ov49_022693D4\n    ldr r0, [sp, #0xc]\n    ldrh r3, [r0, #4]\n    ldr r0, _0226939C ; =0x0000FFFE\n    cmp r3, r0\n    beq _0226930E\n    ldr r0, [sp, #4]\n    add r1, r5, #0\n    add r2, r6, #0\n    bl ov49_022693A4\n    ldr r1, [sp, #0x10]\n    ldr r0, [r7, #4]\n    add r1, r4, r1\n    bl ov45_0222ADF8\n    b _0226938A\n    ldr r0, [sp, #8]\n    cmp r0, #2\n    bne _02269324\n    mov r1, #1\n    b _02269326\n    mov r1, #0\n    ldr r2, [sp, #0x14]\n    ldr r0, [sp, #0x18]\n    ldr r3, [sp]\n    add r0, r2, r0\n    ldr r2, [r7, #8]\n    bl ov49_022693F8\n    cmp r0, #1\n    bne _0226938A\n    ldr r1, [sp, #0x10]\n    ldr r0, [r7, #4]\n    add r1, r4, r1\n    bl ov45_0222ADF8\n    ldr r0, [sp, #4]\n    ldr r3, _022693A0 ; =0x000005C6\n    add r1, r5, #0\n    add r2, r6, #0\n    bl ov49_022693A4\n    b _0226938A\n    ldr r0, [r7, #8]\n    ldr r1, [sp]\n    bl ov49_0225E4A4\n    cmp r0, #1\n    bne _0226938A\n    ldr r1, [sp, #0x10]\n    ldr r0, [r7, #4]\n    add r1, r4, r1\n    bl ov45_0222ADF8\n    ldr r0, [sp, #8]\n    cmp r0, #2\n    bne _0226937C\n    ldr r3, [sp, #0xc]\n    ldr r0, [sp, #4]\n    ldrh r3, [r3, #0xa]\n    add r1, r5, #0\n    add r2, r6, #0\n    bl ov49_022693A4\n    b _0226938A\n    ldr r3, [sp, #0xc]\n    ldr r0, [sp, #4]\n    ldrh r3, [r3, #6]\n    add r1, r5, #0\n    add r2, r6, #0\n    bl ov49_022693A4\n    add r4, r4, #1\n    cmp r4, #3\n    bge _02269392\n    b _0226928C\n    add sp, #0x1c\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _02269398: .word ov49_0226A8DC\n    _0226939C: .word 0x0000FFFE\n    _022693A0: .word 0x000005C6"
    );
    #endif
}

void ov49_022693A4(void) {
    /* Original at 0x022693A4 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    cmp r0, #0\n    beq _022693C8\n    cmp r1, #0\n    beq _022693D0\n    cmp r2, #0\n    beq _022693BE\n    lsl r0, r3, #0x10\n    lsr r0, r0, #0x10\n    mov r1, #5\n    bl sub_0200606C\n    pop {r3, pc}\n    lsl r0, r3, #0x10\n    lsr r0, r0, #0x10\n    bl PlaySE\n    pop {r3, pc}\n    lsl r0, r3, #0x10\n    lsr r0, r0, #0x10\n    bl PlaySE\n    pop {r3, pc}"
    );
    #endif
}

void ov49_022693D4(void) {
    /* Original at 0x022693D4 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    cmp r0, #0\n    beq _022693EA\n    cmp r1, #0\n    beq _022693F4\n    lsl r0, r3, #0x10\n    lsr r0, r0, #0x10\n    mov r1, #0\n    bl PlayCry\n    pop {r3, pc}\n    lsl r0, r3, #0x10\n    lsr r0, r0, #0x10\n    mov r1, #0\n    bl PlayCry\n    pop {r3, pc}"
    );
    #endif
}

void ov49_022693F8(void) {
    /* Original at 0x022693F8 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    add r6, r2, #0\n    add r7, r3, #0\n    cmp r4, #2\n    blo _0226940A\n    bl GF_AssertFail\n    ldrh r0, [r5]\n    cmp r0, #1\n    bne _02269414\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r3, _0226942C ; =ov49_0226A8D4\n    strh r4, [r5, #2]\n    lsl r4, r4, #2\n    mov r0, #1\n    strh r0, [r5]\n    ldr r3, [r3, r4]\n    add r0, r5, #0\n    add r1, r6, #0\n    add r2, r7, #0\n    blx r3\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    _0226942C: .word ov49_0226A8D4"
    );
    #endif
}

void ov49_02269430(void) {
    /* Original at 0x02269430 */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    ldrh r3, [r4]\n    cmp r3, #0\n    beq _0226946A\n    ldrh r3, [r4, #2]\n    lsl r5, r3, #2\n    ldr r3, _02269470 ; =ov49_0226A8CC\n    ldr r3, [r3, r5]\n    blx r3\n    cmp r0, #1\n    bne _02269466\n    mov r0, #0\n    strb r0, [r4]\n    strb r0, [r4, #1]\n    strb r0, [r4, #2]\n    strb r0, [r4, #3]\n    strb r0, [r4, #4]\n    strb r0, [r4, #5]\n    strb r0, [r4, #6]\n    strb r0, [r4, #7]\n    strb r0, [r4, #8]\n    strb r0, [r4, #9]\n    strb r0, [r4, #0xa]\n    strb r0, [r4, #0xb]\n    strb r0, [r4, #0xc]\n    strb r0, [r4, #0xd]\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    nop\n    _02269470: .word ov49_0226A8CC"
    );
    #endif
}

void ov49_02269474(void) {
    GF_DegreeToSinCosIdx(0, 2, 4, 5, 8);
}

void ov49_02269494(void) {
    GF_DegreeToSinCosIdx(0, 0x10, 0xa, 2, 4);
}

void ov49_022694B4(void) {
    /* Original at 0x022694B4 */
    /* Requires manual decompilation - 119 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0x1c\n    add r5, r0, #0\n    add r0, sp, #0x10\n    mov r4, #0\n    str r4, [r0]\n    str r4, [r0, #4]\n    str r4, [r0, #8]\n    mov r0, #4\n    ldrsh r0, [r5, r0]\n    str r1, [sp]\n    str r2, [sp, #4]\n    add r1, r0, #1\n    mov r0, #6\n    ldrsh r0, [r5, r0]\n    cmp r1, r0\n    bge _022694DA\n    strh r1, [r5, #4]\n    b _022694EC\n    strh r4, [r5, #4]\n    mov r0, #0xc\n    ldrsh r0, [r5, r0]\n    sub r0, r0, #1\n    cmp r0, #0\n    ble _022694EA\n    strh r0, [r5, #0xc]\n    b _022694EC\n    mov r4, #1\n    mov r0, #4\n    ldrsh r1, [r5, r0]\n    ldr r0, _022695BC ; =0x0000FFFF\n    mul r0, r1\n    mov r1, #6\n    ldrsh r1, [r5, r1]\n    bl _s32_div_f\n    lsl r0, r0, #0x10\n    lsr r6, r0, #0x10\n    ldrh r0, [r5, #8]\n    cmp r0, #0\n    beq _02269518\n    lsl r0, r0, #0xc\n    bl _fflt\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    b _02269526\n    lsl r0, r0, #0xc\n    bl _fflt\n    mov r1, #0x3f\n    lsl r1, r1, #0x18\n    bl _fsub\n    bl _ffix\n    add r2, r0, #0\n    asr r0, r6, #4\n    lsl r1, r0, #2\n    ldr r0, _022695C0 ; =FX_SinCosTable_\n    asr r3, r2, #0x1f\n    ldrsh r0, [r0, r1]\n    str r0, [sp, #8]\n    asr r0, r0, #0x1f\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #8]\n    ldr r1, [sp, #0xc]\n    bl _ll_mul\n    mov r2, #2\n    mov r3, #0\n    lsl r2, r2, #0xa\n    add r2, r0, r2\n    adc r1, r3\n    lsl r0, r1, #0x14\n    lsr r1, r2, #0xc\n    orr r1, r0\n    lsl r0, r1, #4\n    lsr r6, r0, #0x10\n    mov r0, #0xa\n    ldrsh r0, [r5, r0]\n    cmp r0, #0\n    ble _02269572\n    lsl r0, r0, #0xc\n    bl _fflt\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    b _02269580\n    lsl r0, r0, #0xc\n    bl _fflt\n    mov r1, #0x3f\n    lsl r1, r1, #0x18\n    bl _fsub\n    bl _ffix\n    add r2, r0, #0\n    ldr r0, [sp, #8]\n    ldr r1, [sp, #0xc]\n    asr r3, r2, #0x1f\n    bl _ll_mul\n    mov r2, #2\n    mov r3, #0\n    lsl r2, r2, #0xa\n    add r2, r0, r2\n    adc r1, r3\n    lsl r0, r1, #0x14\n    lsr r1, r2, #0xc\n    orr r1, r0\n    str r1, [sp, #0x14]\n    ldr r0, [sp]\n    ldr r1, [sp, #4]\n    add r2, r6, #0\n    bl ov49_0225E4F8\n    ldr r0, [sp]\n    ldr r1, [sp, #4]\n    add r2, sp, #0x10\n    bl ov49_0225E3F4\n    add r0, r4, #0\n    add sp, #0x1c\n    pop {r3, r4, r5, r6, pc}\n    _022695BC: .word 0x0000FFFF\n    _022695C0: .word FX_SinCosTable_"
    );
    #endif
}

void ov49_022695C4(void) {
    /* Original at 0x022695C4 */
    /* Requires manual decompilation - 45 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r7, r0, #0\n    str r1, [sp]\n    add r0, r1, #0\n    lsl r1, r0, #1\n    ldr r0, [sp]\n    mov r6, #0\n    add r0, r0, r1\n    str r0, [sp, #4]\n    ldr r1, [sp, #4]\n    ldr r0, [r7, #4]\n    add r1, r6, r1\n    bl ov45_0222AE34\n    add r4, r0, #0\n    ldr r0, [r7, #8]\n    ldr r1, [sp]\n    add r2, r6, #0\n    add r3, sp, #8\n    bl ov49_0225E420\n    cmp r4, #3\n    bge _0226961A\n    lsl r0, r4, #2\n    add r5, r7, r0\n    mov r0, #0xaa\n    ldrsh r0, [r5, r0]\n    add r0, #0x10\n    lsl r1, r0, #0xc\n    ldr r0, [sp, #8]\n    cmp r1, r0\n    ble _02269612\n    ldr r1, [sp, #4]\n    ldr r0, [r7, #4]\n    add r1, r6, r1\n    add r2, r4, #0\n    bl ov45_0222AE24\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #3\n    blt _022695F8\n    add r6, r6, #1\n    cmp r6, #3\n    blt _022695D8\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}
