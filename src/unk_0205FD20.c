/* Decompiled from asm/unk_0205FD20.s */
#include "global.h"

void sub_0205FD20(void) {
    /* Original at 0x0205FD20 */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl sub_0205F41C\n    add r0, r4, #0\n    bl sub_02063A14\n    pop {r4, pc}"
    );
    #endif
}

void sub_0205FD30(void) {
    /* Original at 0x0205FD30 */
    /* Requires manual decompilation - 39 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r1, #2\n    add r4, r0, #0\n    bl sub_0205F5E8\n    cmp r0, #0\n    bne _0205FD94\n    add r0, r4, #0\n    bl sub_0205FE0C\n    add r0, r4, #0\n    bl sub_0205FE24\n    add r0, r4, #0\n    bl sub_0205FE48\n    add r0, r4, #0\n    mov r1, #0x10\n    bl MapObject_GetFlagsBitsMask\n    cmp r0, #0\n    beq _0205FD64\n    add r0, r4, #0\n    bl sub_02062400\n    b _0205FD88\n    add r0, r4, #0\n    bl MapObject_CheckMovementPaused\n    cmp r0, #0\n    bne _0205FD88\n    add r0, r4, #0\n    bl sub_0205FD98\n    cmp r0, #1\n    bne _0205FD88\n    add r0, r4, #0\n    bl sub_02063A1C\n    cmp r0, #0\n    bne _0205FD88\n    add r0, r4, #0\n    bl sub_0205F430\n    add r0, r4, #0\n    bl sub_0205FE6C\n    add r0, r4, #0\n    bl sub_0205FEA4\n    pop {r4, pc}"
    );
    #endif
}

void sub_0205FD98(void) {
    /* Original at 0x0205FD98 */
    /* Requires manual decompilation - 51 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl MapObject_CheckSingleMovement\n    cmp r0, #1\n    bne _0205FDA8\n    mov r0, #1\n    pop {r4, pc}\n    mov r1, #6\n    add r0, r4, #0\n    lsl r1, r1, #0xa\n    bl MapObject_GetFlagsBitsMask\n    cmp r0, #0\n    bne _0205FDBA\n    mov r0, #1\n    pop {r4, pc}\n    add r0, r4, #0\n    bl MapObject_GetMovement\n    cmp r0, #0x32\n    bne _0205FDC8\n    mov r0, #1\n    pop {r4, pc}\n    add r0, r4, #0\n    bl MapObject_GetMovement\n    cmp r0, #0x30\n    bne _0205FDD6\n    mov r0, #1\n    pop {r4, pc}\n    add r0, r4, #0\n    bl MapObject_GetFlags\n    mov r1, #1\n    lsl r1, r1, #0xc\n    add r2, r0, #0\n    tst r2, r1\n    beq _0205FDF0\n    lsl r1, r1, #0xb\n    tst r1, r0\n    bne _0205FDF0\n    mov r0, #0\n    pop {r4, pc}\n    mov r1, #2\n    lsl r1, r1, #0xa\n    tst r0, r1\n    beq _0205FE06\n    add r0, r4, #0\n    bl sub_0205F8D0\n    cmp r0, #0\n    bne _0205FE06\n    mov r0, #0\n    pop {r4, pc}\n    mov r0, #1\n    pop {r4, pc}"
    );
    #endif
}

void sub_0205FE0C(void) {
    /* Original at 0x0205FE0C */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r1, #1\n    lsl r1, r1, #0xc\n    add r4, r0, #0\n    bl MapObject_GetFlagsBitsMask\n    cmp r0, #0\n    beq _0205FE22\n    add r0, r4, #0\n    bl sub_02061070\n    pop {r4, pc}"
    );
    #endif
}

void sub_0205FE24(void) {
    /* Original at 0x0205FE24 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r1, #2\n    lsl r1, r1, #0xa\n    add r4, r0, #0\n    bl MapObject_GetFlagsBitsMask\n    cmp r0, #0\n    beq _0205FE44\n    add r0, r4, #0\n    bl sub_02061108\n    cmp r0, #1\n    bne _0205FE44\n    add r0, r4, #0\n    bl MapObject_SetFlag2\n    pop {r4, pc}"
    );
    #endif
}

void sub_0205FE48(void) {
    /* Original at 0x0205FE48 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r1, #4\n    add r4, r0, #0\n    bl MapObject_GetFlagsBitsMask\n    cmp r0, #0\n    beq _0205FE5C\n    add r0, r4, #0\n    bl sub_0205FEDC\n    ldr r1, _0205FE68 ; =0x00010004\n    add r0, r4, #0\n    bl MapObject_ClearFlagsBits\n    pop {r4, pc}\n    nop\n    _0205FE68: .word 0x00010004"
    );
    #endif
}

void sub_0205FE6C(void) {
    /* Original at 0x0205FE6C */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r1, #1\n    lsl r1, r1, #0x10\n    add r4, r0, #0\n    bl MapObject_GetFlagsBitsMask\n    cmp r0, #0\n    beq _0205FE84\n    add r0, r4, #0\n    bl sub_02060020\n    b _0205FE96\n    add r0, r4, #0\n    mov r1, #4\n    bl MapObject_GetFlagsBitsMask\n    cmp r0, #0\n    beq _0205FE96\n    add r0, r4, #0\n    bl sub_0205FF6C\n    ldr r1, _0205FEA0 ; =0x00010004\n    add r0, r4, #0\n    bl MapObject_ClearFlagsBits\n    pop {r4, pc}\n    _0205FEA0: .word 0x00010004"
    );
    #endif
}

void sub_0205FEA4(void) {
    /* Original at 0x0205FEA4 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r1, #2\n    lsl r1, r1, #0x10\n    add r4, r0, #0\n    bl MapObject_GetFlagsBitsMask\n    cmp r0, #0\n    beq _0205FEBC\n    add r0, r4, #0\n    bl sub_02060114\n    b _0205FECE\n    add r0, r4, #0\n    mov r1, #8\n    bl MapObject_GetFlagsBitsMask\n    cmp r0, #0\n    beq _0205FECE\n    add r0, r4, #0\n    bl sub_0206008C\n    ldr r1, _0205FED8 ; =0x00020008\n    add r0, r4, #0\n    bl MapObject_ClearFlagsBits\n    pop {r4, pc}\n    _0205FED8: .word 0x00020008"
    );
    #endif
}

void sub_0205FEDC(void) {
    /* Original at 0x0205FEDC */
    /* Requires manual decompilation - 59 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    bl sub_02061108\n    add r0, r5, #0\n    bl sub_0205F73C\n    cmp r0, #1\n    bne _0205FF6A\n    add r0, r5, #0\n    bl sub_0205F504\n    lsl r0, r0, #0x18\n    lsr r6, r0, #0x18\n    add r0, r5, #0\n    bl sub_0205F514\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    add r0, r5, #0\n    bl ov01_021F9318\n    add r7, r0, #0\n    add r0, r5, #0\n    add r1, r6, #0\n    add r2, r4, #0\n    add r3, r7, #0\n    bl sub_02060AB8\n    add r0, r5, #0\n    add r1, r6, #0\n    add r2, r4, #0\n    add r3, r7, #0\n    bl sub_020601BC\n    add r0, r5, #0\n    add r1, r6, #0\n    add r2, r4, #0\n    add r3, r7, #0\n    bl sub_0206039C\n    add r0, r5, #0\n    add r1, r6, #0\n    add r2, r4, #0\n    add r3, r7, #0\n    bl sub_020603DC\n    add r0, r5, #0\n    add r1, r6, #0\n    add r2, r4, #0\n    add r3, r7, #0\n    bl sub_020601A4\n    add r0, r5, #0\n    add r1, r6, #0\n    add r2, r4, #0\n    add r3, r7, #0\n    bl sub_02060698\n    add r0, r5, #0\n    add r1, r6, #0\n    add r2, r4, #0\n    add r3, r7, #0\n    bl sub_02060700\n    add r0, r5, #0\n    add r1, r6, #0\n    add r2, r4, #0\n    add r3, r7, #0\n    bl sub_020607D8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_0205FF6C(void) {
    /* Original at 0x0205FF6C */
    /* Requires manual decompilation - 74 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    bl sub_02061108\n    add r0, r5, #0\n    bl sub_0205F73C\n    cmp r0, #1\n    bne _0206001E\n    add r0, r5, #0\n    bl sub_0205F504\n    lsl r0, r0, #0x18\n    lsr r6, r0, #0x18\n    add r0, r5, #0\n    bl sub_0205F514\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    add r0, r5, #0\n    bl ov01_021F9318\n    add r7, r0, #0\n    add r0, r5, #0\n    add r1, r6, #0\n    add r2, r4, #0\n    add r3, r7, #0\n    bl sub_02060AB8\n    add r0, r5, #0\n    add r1, r6, #0\n    add r2, r4, #0\n    add r3, r7, #0\n    bl sub_02060274\n    add r0, r5, #0\n    add r1, r6, #0\n    add r2, r4, #0\n    add r3, r7, #0\n    bl sub_02060328\n    add r0, r5, #0\n    add r1, r6, #0\n    add r2, r4, #0\n    add r3, r7, #0\n    bl sub_0206039C\n    add r0, r5, #0\n    add r1, r6, #0\n    add r2, r4, #0\n    add r3, r7, #0\n    bl sub_020603F8\n    add r0, r5, #0\n    add r1, r6, #0\n    add r2, r4, #0\n    add r3, r7, #0\n    bl sub_020606CC\n    add r0, r5, #0\n    add r1, r6, #0\n    add r2, r4, #0\n    add r3, r7, #0\n    bl sub_02060704\n    add r0, r5, #0\n    add r1, r6, #0\n    add r2, r4, #0\n    add r3, r7, #0\n    bl sub_02060708\n    add r0, r5, #0\n    add r1, r6, #0\n    add r2, r4, #0\n    add r3, r7, #0\n    bl sub_02060770\n    add r0, r5, #0\n    add r1, r6, #0\n    add r2, r4, #0\n    add r3, r7, #0\n    bl sub_020607D8\n    add r0, r5, #0\n    add r1, r6, #0\n    add r2, r4, #0\n    add r3, r7, #0\n    bl sub_02060AF0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_02060020(void) {
    /* Original at 0x02060020 */
    /* Requires manual decompilation - 44 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    bl sub_02061108\n    add r0, r5, #0\n    bl sub_0205F73C\n    cmp r0, #1\n    bne _0206008A\n    add r0, r5, #0\n    bl sub_0205F504\n    lsl r0, r0, #0x18\n    lsr r6, r0, #0x18\n    add r0, r5, #0\n    bl sub_0205F514\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    add r0, r5, #0\n    bl ov01_021F9318\n    add r7, r0, #0\n    add r0, r5, #0\n    add r1, r6, #0\n    add r2, r4, #0\n    add r3, r7, #0\n    bl sub_02060AB8\n    add r0, r5, #0\n    add r1, r6, #0\n    add r2, r4, #0\n    add r3, r7, #0\n    bl sub_020603F8\n    add r0, r5, #0\n    add r1, r6, #0\n    add r2, r4, #0\n    add r3, r7, #0\n    bl sub_020607D8\n    add r0, r5, #0\n    add r1, r6, #0\n    add r2, r4, #0\n    add r3, r7, #0\n    bl sub_020603D0\n    add r0, r5, #0\n    add r1, r6, #0\n    add r2, r4, #0\n    add r3, r7, #0\n    bl sub_02060AF0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_0206008C(void) {
    /* Original at 0x0206008C */
    /* Requires manual decompilation - 55 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    bl sub_0205F514\n    lsl r0, r0, #0x18\n    lsr r1, r0, #0x18\n    add r0, r5, #0\n    bl sub_0205F51C\n    add r0, r5, #0\n    bl sub_02061108\n    add r0, r5, #0\n    bl sub_0205F73C\n    cmp r0, #1\n    bne _02060112\n    add r0, r5, #0\n    bl sub_0205F504\n    lsl r0, r0, #0x18\n    lsr r6, r0, #0x18\n    add r0, r5, #0\n    bl sub_0205F514\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    add r0, r5, #0\n    bl ov01_021F9318\n    add r7, r0, #0\n    add r0, r5, #0\n    add r1, r6, #0\n    add r2, r4, #0\n    add r3, r7, #0\n    bl sub_020601A4\n    add r0, r5, #0\n    add r1, r6, #0\n    add r2, r4, #0\n    add r3, r7, #0\n    bl sub_0206073C\n    add r0, r5, #0\n    add r1, r6, #0\n    add r2, r4, #0\n    add r3, r7, #0\n    bl sub_020607A4\n    add r0, r5, #0\n    add r1, r6, #0\n    add r2, r4, #0\n    add r3, r7, #0\n    bl sub_0206039C\n    add r0, r5, #0\n    add r1, r6, #0\n    add r2, r4, #0\n    add r3, r7, #0\n    bl sub_020609D4\n    add r0, r5, #0\n    add r1, r6, #0\n    add r2, r4, #0\n    add r3, r7, #0\n    bl sub_02060530\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_02060114(void) {
    /* Original at 0x02060114 */
    /* Requires manual decompilation - 59 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    bl sub_02061108\n    add r0, r5, #0\n    bl sub_0205F73C\n    cmp r0, #1\n    bne _020601A2\n    add r0, r5, #0\n    bl sub_0205F504\n    lsl r0, r0, #0x18\n    lsr r6, r0, #0x18\n    add r0, r5, #0\n    bl sub_0205F514\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    add r0, r5, #0\n    bl ov01_021F9318\n    add r7, r0, #0\n    add r0, r5, #0\n    add r1, r6, #0\n    add r2, r4, #0\n    add r3, r7, #0\n    bl sub_020601A4\n    add r0, r5, #0\n    add r1, r6, #0\n    add r2, r4, #0\n    add r3, r7, #0\n    bl sub_0206073C\n    add r0, r5, #0\n    add r1, r6, #0\n    add r2, r4, #0\n    add r3, r7, #0\n    bl sub_020607A4\n    add r0, r5, #0\n    add r1, r6, #0\n    add r2, r4, #0\n    add r3, r7, #0\n    bl sub_0206039C\n    add r0, r5, #0\n    add r1, r6, #0\n    add r2, r4, #0\n    add r3, r7, #0\n    bl sub_020609D4\n    add r0, r5, #0\n    add r1, r6, #0\n    add r2, r4, #0\n    add r3, r7, #0\n    bl sub_02060530\n    add r0, r5, #0\n    add r1, r6, #0\n    add r2, r4, #0\n    add r3, r7, #0\n    bl sub_02060274\n    add r0, r5, #0\n    add r1, r6, #0\n    add r2, r4, #0\n    add r3, r7, #0\n    bl sub_0206064C\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_020601A4(void) {
    sub_0205F9C0(0);
}

void sub_020601BC(void) {
    /* Original at 0x020601BC */
    /* Requires manual decompilation - 78 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0xc\n    add r6, r1, #0\n    add r5, r0, #0\n    bl MapObject_GetID\n    add r4, r0, #0\n    add r0, r6, #0\n    bl MetatileBehavior_IsEncounterGrass\n    cmp r0, #1\n    bne _020601EE\n    cmp r4, #0xfd\n    bne _020601E6\n    mov r1, #2\n    add r0, r5, #0\n    lsl r1, r1, #8\n    bl MapObject_TestFlagsBits\n    cmp r0, #1\n    beq _02060270\n    add r0, r5, #0\n    mov r1, #0\n    bl ov01_021FF070\n    add r0, r5, #0\n    bl MapObject_GetID\n    cmp r0, #0xfd\n    bne _02060270\n    add r0, r5, #0\n    bl ov01_022055DC\n    cmp r0, #0\n    beq _02060270\n    add r0, r5, #0\n    bl MapObject_GetFacingDirection\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    add r0, r5, #0\n    bl MapObject_GetFieldSystem\n    add r4, #0xfe\n    add r6, r0, #0\n    lsl r0, r4, #0x18\n    lsr r0, r0, #0x18\n    cmp r0, #1\n    bhi _02060270\n    add r0, r5, #0\n    add r1, sp, #8\n    add r2, sp, #4\n    bl ov01_02205604\n    ldr r1, [sp, #8]\n    ldr r2, [sp, #4]\n    add r0, r6, #0\n    bl GetMetatileBehavior\n    add r4, r0, #0\n    lsl r0, r4, #0x18\n    lsr r0, r0, #0x18\n    bl MetatileBehavior_IsEncounterGrass\n    cmp r0, #1\n    bne _02060254\n    mov r0, #1\n    str r0, [sp]\n    ldr r2, [sp, #8]\n    ldr r3, [sp, #4]\n    add r0, r5, #0\n    mov r1, #0\n    bl ov01_021FF0E4\n    add sp, #0xc\n    pop {r3, r4, r5, r6, pc}\n    lsl r0, r4, #0x18\n    lsr r0, r0, #0x18\n    bl sub_0205B6F4\n    cmp r0, #1\n    bne _02060270\n    mov r0, #1\n    str r0, [sp]\n    ldr r2, [sp, #8]\n    ldr r3, [sp, #4]\n    add r0, r5, #0\n    mov r1, #0\n    bl ov01_021FF964\n    add sp, #0xc\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void sub_02060274(void) {
    /* Original at 0x02060274 */
    /* Requires manual decompilation - 76 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0xc\n    add r6, r1, #0\n    add r5, r0, #0\n    bl MapObject_GetID\n    add r4, r0, #0\n    add r0, r6, #0\n    bl MetatileBehavior_IsEncounterGrass\n    cmp r0, #1\n    bne _020602A6\n    cmp r4, #0xfd\n    bne _0206029E\n    mov r1, #2\n    add r0, r5, #0\n    lsl r1, r1, #8\n    bl MapObject_TestFlagsBits\n    cmp r0, #1\n    beq _02060324\n    add r0, r5, #0\n    mov r1, #1\n    bl ov01_021FF070\n    add r0, r5, #0\n    bl MapObject_GetID\n    cmp r0, #0xfd\n    bne _02060324\n    add r0, r5, #0\n    bl ov01_022055DC\n    cmp r0, #0\n    beq _02060324\n    add r0, r5, #0\n    bl MapObject_GetFacingDirection\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    add r0, r5, #0\n    bl MapObject_GetFieldSystem\n    add r4, #0xfe\n    add r6, r0, #0\n    lsl r0, r4, #0x18\n    lsr r0, r0, #0x18\n    cmp r0, #1\n    bhi _02060324\n    add r0, r5, #0\n    add r1, sp, #8\n    add r2, sp, #4\n    bl ov01_02205604\n    ldr r1, [sp, #8]\n    ldr r2, [sp, #4]\n    add r0, r6, #0\n    bl GetMetatileBehavior\n    add r4, r0, #0\n    lsl r0, r4, #0x18\n    lsr r0, r0, #0x18\n    bl MetatileBehavior_IsEncounterGrass\n    cmp r0, #1\n    bne _0206030A\n    mov r1, #1\n    str r1, [sp]\n    ldr r2, [sp, #8]\n    ldr r3, [sp, #4]\n    add r0, r5, #0\n    bl ov01_021FF0E4\n    add sp, #0xc\n    pop {r3, r4, r5, r6, pc}\n    lsl r0, r4, #0x18\n    lsr r0, r0, #0x18\n    bl sub_0205B6F4\n    cmp r0, #1\n    bne _02060324\n    mov r1, #1\n    str r1, [sp]\n    ldr r2, [sp, #8]\n    ldr r3, [sp, #4]\n    add r0, r5, #0\n    bl ov01_021FF964\n    add sp, #0xc\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void sub_02060328(void) {
    /* Original at 0x02060328 */
    /* Requires manual decompilation - 50 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r3, #0\n    add r5, r0, #0\n    ldrh r0, [r4]\n    add r6, r2, #0\n    lsl r0, r0, #0x15\n    lsr r0, r0, #0x1c\n    beq _0206039A\n    add r0, r6, #0\n    bl sub_0205BA94\n    cmp r0, #1\n    bne _0206035E\n    ldrh r0, [r4]\n    lsl r0, r0, #0x15\n    lsr r0, r0, #0x1c\n    cmp r0, #1\n    bne _02060354\n    add r0, r5, #0\n    bl ov01_021FE3E8\n    b _0206035E\n    cmp r0, #2\n    bne _0206035E\n    add r0, r5, #0\n    bl ov01_021FE3F4\n    add r0, r5, #0\n    add r1, r6, #0\n    bl sub_02060EA4\n    cmp r0, #1\n    bne _02060388\n    ldrh r0, [r4]\n    lsl r0, r0, #0x15\n    lsr r0, r0, #0x1c\n    cmp r0, #1\n    bne _0206037C\n    add r0, r5, #0\n    bl ov01_021FE3C4\n    pop {r4, r5, r6, pc}\n    cmp r0, #2\n    bne _0206039A\n    add r0, r5, #0\n    bl ov01_021FE3D0\n    pop {r4, r5, r6, pc}\n    add r0, r5, #0\n    add r1, r6, #0\n    bl sub_02060ED4\n    cmp r0, #1\n    bne _0206039A\n    add r0, r5, #0\n    bl ov01_021FE3DC\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void sub_0206039C(void) {
    /* Original at 0x0206039C */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    add r0, r1, #0\n    bl sub_0205B7A4\n    cmp r0, #1\n    bne _020603C6\n    add r0, r4, #0\n    bl MapObject_CheckFlag26\n    cmp r0, #0\n    bne _020603CE\n    add r0, r4, #0\n    mov r1, #1\n    bl ov01_021FF4FC\n    add r0, r4, #0\n    mov r1, #1\n    bl MapObject_SetFlag26\n    pop {r4, pc}\n    add r0, r4, #0\n    mov r1, #0\n    bl MapObject_SetFlag26\n    pop {r4, pc}"
    );
    #endif
}

void sub_020603D0(void) {
    MapObject_SetFlag26();
}

void sub_020603DC(void) {
    /* Original at 0x020603DC */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    add r6, r3, #0\n    bl sub_0205F524\n    lsl r0, r0, #0x18\n    lsr r2, r0, #0x18\n    add r0, r5, #0\n    add r1, r4, #0\n    add r3, r6, #0\n    bl sub_020603F8\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void sub_020603F8(void) {
    /* Original at 0x020603F8 */
    /* Requires manual decompilation - 128 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    add r6, r2, #0\n    add r7, r3, #0\n    bl MapObject_GetManager\n    bl sub_0205F610\n    cmp r0, #0\n    beq _02060416\n    ldrh r0, [r7]\n    lsl r0, r0, #0x19\n    lsr r0, r0, #0x1d\n    bne _02060418\n    b _0206052E\n    cmp r0, #2\n    bne _020604B0\n    add r0, r4, #0\n    bl MetatileBehavior_IsEncounterGrass\n    cmp r0, #1\n    beq _02060484\n    add r0, r4, #0\n    bl sub_0205B6F4\n    cmp r0, #1\n    beq _02060484\n    add r0, r6, #0\n    bl MetatileBehavior_IsEncounterGrass\n    cmp r0, #1\n    beq _02060484\n    add r0, r6, #0\n    bl sub_0205B6F4\n    cmp r0, #1\n    beq _02060484\n    add r0, r5, #0\n    add r1, r4, #0\n    bl sub_02060E54\n    cmp r0, #1\n    beq _02060484\n    add r0, r4, #0\n    bl sub_0205B984\n    cmp r0, #1\n    beq _02060484\n    add r0, r4, #0\n    bl sub_0205B7A4\n    cmp r0, #1\n    beq _02060484\n    add r0, r5, #0\n    add r1, r4, #0\n    bl sub_02060EBC\n    cmp r0, #1\n    beq _02060484\n    add r0, r4, #0\n    bl sub_0205B8AC\n    cmp r0, #1\n    beq _02060484\n    add r0, r4, #0\n    bl sub_0205BA70\n    cmp r0, #0\n    beq _02060490\n    mov r1, #1\n    add r0, r5, #0\n    lsl r1, r1, #0x14\n    bl MapObject_SetFlagsBits\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r1, #2\n    add r0, r5, #0\n    lsl r1, r1, #0xe\n    bl MapObject_GetFlagsBitsMask\n    cmp r0, #0\n    bne _0206052E\n    add r0, r5, #0\n    bl ov01_021FD684\n    mov r1, #2\n    add r0, r5, #0\n    lsl r1, r1, #0xe\n    bl MapObject_SetFlagsBits\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r4, #0\n    bl MetatileBehavior_IsEncounterGrass\n    cmp r0, #1\n    beq _02060504\n    add r0, r4, #0\n    bl sub_0205B6F4\n    cmp r0, #1\n    beq _02060504\n    add r0, r5, #0\n    add r1, r4, #0\n    bl sub_02060E54\n    cmp r0, #1\n    beq _02060504\n    add r0, r4, #0\n    bl sub_0205B984\n    cmp r0, #1\n    beq _02060504\n    add r0, r4, #0\n    bl sub_0205B7A4\n    cmp r0, #1\n    beq _02060504\n    add r0, r5, #0\n    add r1, r4, #0\n    bl sub_02060EBC\n    cmp r0, #1\n    beq _02060504\n    add r0, r4, #0\n    bl sub_0205B8AC\n    cmp r0, #1\n    beq _02060504\n    add r0, r4, #0\n    bl sub_0205BA70\n    cmp r0, #0\n    beq _02060510\n    mov r1, #1\n    add r0, r5, #0\n    lsl r1, r1, #0x14\n    bl MapObject_SetFlagsBits\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r1, #2\n    add r0, r5, #0\n    lsl r1, r1, #0xe\n    bl MapObject_GetFlagsBitsMask\n    cmp r0, #0\n    bne _0206052E\n    add r0, r5, #0\n    bl ov01_021FD640\n    mov r1, #2\n    add r0, r5, #0\n    lsl r1, r1, #0xe\n    bl MapObject_SetFlagsBits\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_02060530(void) {
    /* Original at 0x02060530 */
    /* Requires manual decompilation - 117 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    add r6, r3, #0\n    bl MapObject_GetManager\n    bl sub_0205F610\n    cmp r0, #0\n    bne _02060546\n    b _0206064A\n    ldrh r0, [r6]\n    lsl r0, r0, #0x19\n    lsr r0, r0, #0x1d\n    beq _0206064A\n    cmp r0, #2\n    bne _020605E0\n    add r0, r5, #0\n    bl sub_0205F524\n    lsl r0, r0, #0x10\n    lsr r6, r0, #0x10\n    add r0, r4, #0\n    bl MetatileBehavior_IsEncounterGrass\n    cmp r0, #1\n    beq _020605C8\n    add r0, r4, #0\n    bl sub_0205B6F4\n    cmp r0, #1\n    beq _020605C8\n    lsl r0, r6, #0x18\n    lsr r0, r0, #0x18\n    bl MetatileBehavior_IsEncounterGrass\n    cmp r0, #1\n    beq _020605C8\n    lsl r0, r6, #0x18\n    lsr r0, r0, #0x18\n    bl sub_0205B6F4\n    cmp r0, #1\n    beq _020605C8\n    add r0, r5, #0\n    add r1, r4, #0\n    bl sub_02060E54\n    cmp r0, #1\n    beq _020605C8\n    add r0, r4, #0\n    bl sub_0205B984\n    cmp r0, #1\n    beq _020605C8\n    add r0, r4, #0\n    bl sub_0205B7A4\n    cmp r0, #1\n    beq _020605C8\n    add r0, r5, #0\n    add r1, r4, #0\n    bl sub_02060EBC\n    cmp r0, #1\n    beq _020605C8\n    add r0, r4, #0\n    bl sub_0205B8AC\n    cmp r0, #1\n    beq _020605C8\n    add r0, r4, #0\n    bl sub_0205BA70\n    cmp r0, #0\n    beq _020605D4\n    mov r1, #1\n    add r0, r5, #0\n    lsl r1, r1, #0x14\n    bl MapObject_SetFlagsBits\n    pop {r4, r5, r6, pc}\n    mov r1, #1\n    add r0, r5, #0\n    lsl r1, r1, #0x14\n    bl MapObject_ClearFlagsBits\n    pop {r4, r5, r6, pc}\n    add r0, r4, #0\n    bl MetatileBehavior_IsEncounterGrass\n    cmp r0, #1\n    beq _02060634\n    add r0, r4, #0\n    bl sub_0205B6F4\n    cmp r0, #1\n    beq _02060634\n    add r0, r5, #0\n    add r1, r4, #0\n    bl sub_02060E54\n    cmp r0, #1\n    beq _02060634\n    add r0, r4, #0\n    bl sub_0205B984\n    cmp r0, #1\n    beq _02060634\n    add r0, r4, #0\n    bl sub_0205B7A4\n    cmp r0, #1\n    beq _02060634\n    add r0, r5, #0\n    add r1, r4, #0\n    bl sub_02060EBC\n    cmp r0, #1\n    beq _02060634\n    add r0, r4, #0\n    bl sub_0205B8AC\n    cmp r0, #1\n    beq _02060634\n    add r0, r4, #0\n    bl sub_0205BA70\n    cmp r0, #0\n    beq _02060640\n    mov r1, #1\n    add r0, r5, #0\n    lsl r1, r1, #0x14\n    bl MapObject_SetFlagsBits\n    pop {r4, r5, r6, pc}\n    mov r1, #1\n    add r0, r5, #0\n    lsl r1, r1, #0x14\n    bl MapObject_ClearFlagsBits\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void sub_0206064C(void) {
    /* Original at 0x0206064C */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl sub_02060E54\n    cmp r0, #1\n    beq _02060694\n    add r0, r4, #0\n    bl sub_0205B7A4\n    cmp r0, #1\n    beq _02060694\n    add r0, r4, #0\n    bl sub_0205B828\n    cmp r0, #1\n    beq _02060694\n    add r0, r4, #0\n    bl sub_0205B8AC\n    cmp r0, #1\n    beq _02060694\n    add r0, r5, #0\n    add r1, r4, #0\n    bl sub_02060EBC\n    cmp r0, #1\n    beq _02060694\n    add r0, r5, #0\n    bl MapObject_CheckVisible\n    cmp r0, #0\n    bne _02060694\n    add r0, r5, #0\n    bl ov01_021FF74C\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_02060698(void) {
    /* Original at 0x02060698 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r1, #0\n    add r5, r0, #0\n    bl MapObject_GetID\n    add r4, r0, #0\n    add r0, r6, #0\n    bl sub_0205B6F4\n    cmp r0, #1\n    bne _020606C8\n    cmp r4, #0xfd\n    bne _020606C0\n    mov r1, #2\n    add r0, r5, #0\n    lsl r1, r1, #8\n    bl MapObject_TestFlagsBits\n    cmp r0, #1\n    beq _020606C8\n    add r0, r5, #0\n    mov r1, #0\n    bl ov01_021FF8F0\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void sub_020606CC(void) {
    /* Original at 0x020606CC */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r1, #0\n    add r5, r0, #0\n    bl MapObject_GetID\n    add r4, r0, #0\n    add r0, r6, #0\n    bl sub_0205B6F4\n    cmp r0, #1\n    bne _020606FC\n    cmp r4, #0xfd\n    bne _020606F4\n    mov r1, #2\n    add r0, r5, #0\n    lsl r1, r1, #8\n    bl MapObject_TestFlagsBits\n    cmp r0, #1\n    beq _020606FC\n    add r0, r5, #0\n    mov r1, #1\n    bl ov01_021FF8F0\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void sub_02060700(void) {
    /* Original at 0x02060700 */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void sub_02060704(void) {
    /* Original at 0x02060704 */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void sub_02060708(void) {
    /* Original at 0x02060708 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r0, r2, #0\n    bl sub_0205B984\n    cmp r0, #1\n    bne _02060738\n    add r0, r5, #0\n    bl MapObject_GetPreviousXCoord\n    add r4, r0, #0\n    add r0, r5, #0\n    bl MapObject_GetPreviousYCoord\n    add r6, r0, #0\n    add r0, r5, #0\n    bl MapObject_GetPreviousZCoord\n    add r3, r0, #0\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r6, #0\n    bl ov01_021FECA0\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void sub_0206073C(void) {
    /* Original at 0x0206073C */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r0, r1, #0\n    bl sub_0205B984\n    cmp r0, #1\n    bne _0206076C\n    add r0, r5, #0\n    bl MapObject_GetXCoord\n    add r4, r0, #0\n    add r0, r5, #0\n    bl MapObject_GetYCoord\n    add r6, r0, #0\n    add r0, r5, #0\n    bl MapObject_GetZCoord\n    add r3, r0, #0\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r6, #0\n    bl ov01_021FECA0\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void sub_02060770(void) {
    /* Original at 0x02060770 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r0, r2, #0\n    bl sub_0205B8AC\n    cmp r0, #1\n    bne _020607A0\n    add r0, r5, #0\n    bl MapObject_GetPreviousXCoord\n    add r4, r0, #0\n    add r0, r5, #0\n    bl MapObject_GetPreviousYCoord\n    add r6, r0, #0\n    add r0, r5, #0\n    bl MapObject_GetPreviousZCoord\n    add r3, r0, #0\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r6, #0\n    bl ov01_021FEE04\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void sub_020607A4(void) {
    /* Original at 0x020607A4 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r0, r1, #0\n    bl sub_0205B8AC\n    cmp r0, #1\n    bne _020607D4\n    add r0, r5, #0\n    bl MapObject_GetXCoord\n    add r4, r0, #0\n    add r0, r5, #0\n    bl MapObject_GetYCoord\n    add r6, r0, #0\n    add r0, r5, #0\n    bl MapObject_GetZCoord\n    add r3, r0, #0\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r6, #0\n    bl ov01_021FEE04\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void sub_020607D8(void) {
    /* Original at 0x020607D8 */
    /* Requires manual decompilation - 214 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r6, r1, #0\n    ldrh r1, [r3]\n    add r5, r0, #0\n    lsl r1, r1, #0x13\n    lsr r1, r1, #0x1e\n    beq _020607F0\n    bl MapObject_CheckFlag24\n    cmp r0, #1\n    bne _020607F2\n    b _020609CE\n    bl sub_0205BA6C\n    add r4, r0, #0\n    add r0, r5, #0\n    bl MapObject_GetID\n    cmp r0, #0xfd\n    beq _02060804\n    b _0206096A\n    add r0, r5, #0\n    bl ov01_022055DC\n    cmp r0, #0\n    beq _02060902\n    add r0, r5, #0\n    bl MapObject_CheckFlag24\n    cmp r0, #0\n    beq _0206081A\n    b _020609CE\n    add r0, r6, #0\n    bl sub_0205B9B8\n    cmp r0, #1\n    bne _02060828\n    add r4, r6, #0\n    b _020608CA\n    add r0, r5, #0\n    mov r1, #1\n    bl sub_02060FA8\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #0xc]\n    add r0, r5, #0\n    mov r1, #3\n    bl sub_02060FA8\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #8]\n    add r0, r5, #0\n    mov r1, #2\n    bl sub_02060FA8\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #4]\n    add r0, r5, #0\n    mov r1, #4\n    bl ov01_022056C4\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    add r0, r5, #0\n    mov r1, #5\n    bl ov01_022056C4\n    lsl r0, r0, #0x18\n    lsr r7, r0, #0x18\n    ldr r0, [sp, #0xc]\n    mov r6, #0\n    bl sub_0205B9B8\n    cmp r0, #1\n    bne _02060880\n    ldr r0, [sp, #0xc]\n    mov r6, #1\n    str r0, [sp, #0x10]\n    b _020608C4\n    ldr r0, [sp, #8]\n    bl sub_0205B9B8\n    cmp r0, #1\n    bne _02060892\n    ldr r0, [sp, #8]\n    mov r6, #1\n    str r0, [sp, #0x10]\n    b _020608C4\n    ldr r0, [sp, #4]\n    bl sub_0205B9B8\n    cmp r0, #1\n    bne _020608A4\n    ldr r0, [sp, #4]\n    mov r6, #1\n    str r0, [sp, #0x10]\n    b _020608C4\n    ldr r0, [sp]\n    bl sub_0205B9B8\n    cmp r0, #1\n    bne _020608B6\n    ldr r0, [sp]\n    mov r6, #1\n    str r0, [sp, #0x10]\n    b _020608C4\n    add r0, r7, #0\n    bl sub_0205B9B8\n    cmp r0, #1\n    bne _020608C4\n    str r7, [sp, #0x10]\n    mov r6, #1\n    cmp r6, #1\n    bne _020608CA\n    ldr r4, [sp, #0x10]\n    bl sub_0205BA6C\n    cmp r4, r0\n    beq _020609CE\n    add r0, r5, #0\n    mov r1, #1\n    bl MapObject_SetFlag24\n    add r0, r4, #0\n    bl sub_0205BA70\n    cmp r0, #1\n    bne _020608E8\n    mov r1, #5\n    b _020608F8\n    add r0, r4, #0\n    bl sub_0205B984\n    cmp r0, #1\n    bne _020608F6\n    mov r1, #3\n    b _020608F8\n    mov r1, #4\n    add r0, r5, #0\n    bl ov01_021FDF88\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    add r0, r5, #0\n    bl MapObject_CheckFlag24\n    cmp r0, #0\n    bne _020609CE\n    add r0, r6, #0\n    bl sub_0205B9B8\n    cmp r0, #1\n    bne _0206091A\n    add r4, r6, #0\n    b _02060932\n    add r0, r5, #0\n    mov r1, #1\n    bl sub_02060FA8\n    lsl r0, r0, #0x18\n    lsr r6, r0, #0x18\n    add r0, r6, #0\n    bl sub_0205B9B8\n    cmp r0, #1\n    bne _02060932\n    add r4, r6, #0\n    bl sub_0205BA6C\n    cmp r4, r0\n    beq _020609CE\n    add r0, r5, #0\n    mov r1, #1\n    bl MapObject_SetFlag24\n    add r0, r4, #0\n    bl sub_0205BA70\n    cmp r0, #1\n    bne _02060950\n    mov r1, #2\n    b _02060960\n    add r0, r4, #0\n    bl sub_0205B984\n    cmp r0, #1\n    bne _0206095E\n    mov r1, #0\n    b _02060960\n    mov r1, #1\n    add r0, r5, #0\n    bl ov01_021FDF88\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    add r0, r5, #0\n    bl MapObject_CheckFlag24\n    cmp r0, #0\n    bne _020609CE\n    add r0, r6, #0\n    bl sub_0205B9B8\n    cmp r0, #1\n    bne _02060982\n    add r4, r6, #0\n    b _0206099A\n    add r0, r5, #0\n    mov r1, #1\n    bl sub_02060FA8\n    lsl r0, r0, #0x18\n    lsr r6, r0, #0x18\n    add r0, r6, #0\n    bl sub_0205B9B8\n    cmp r0, #1\n    bne _0206099A\n    add r4, r6, #0\n    bl sub_0205BA6C\n    cmp r4, r0\n    beq _020609CE\n    add r0, r5, #0\n    mov r1, #1\n    bl MapObject_SetFlag24\n    add r0, r4, #0\n    bl sub_0205BA70\n    cmp r0, #1\n    bne _020609B8\n    mov r1, #2\n    b _020609C8\n    add r0, r4, #0\n    bl sub_0205B984\n    cmp r0, #1\n    bne _020609C6\n    mov r1, #0\n    b _020609C8\n    mov r1, #1\n    add r0, r5, #0\n    bl ov01_021FDA74\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_020609D4(void) {
    /* Original at 0x020609D4 */
    /* Requires manual decompilation - 96 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    ldrh r1, [r3]\n    add r5, r0, #0\n    lsl r1, r1, #0x13\n    lsr r1, r1, #0x1e\n    beq _02060AB2\n    bl MapObject_CheckFlag24\n    cmp r0, #0\n    beq _02060AB2\n    add r0, r5, #0\n    bl MapObject_GetID\n    cmp r0, #0xfd\n    bne _02060A96\n    add r0, r5, #0\n    bl ov01_022055DC\n    cmp r0, #0\n    beq _02060A96\n    add r0, r5, #0\n    mov r1, #1\n    bl sub_02060FA8\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #8]\n    add r0, r5, #0\n    mov r1, #3\n    bl sub_02060FA8\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #4]\n    add r0, r5, #0\n    mov r1, #2\n    bl sub_02060FA8\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    add r0, r5, #0\n    mov r1, #4\n    bl ov01_022056C4\n    lsl r0, r0, #0x18\n    lsr r7, r0, #0x18\n    add r0, r5, #0\n    mov r1, #5\n    bl ov01_022056C4\n    lsl r0, r0, #0x18\n    lsr r6, r0, #0x18\n    ldr r0, [sp, #8]\n    mov r4, #0\n    bl sub_0205B9B8\n    cmp r0, #1\n    bne _02060A50\n    mov r4, #1\n    b _02060A86\n    ldr r0, [sp, #4]\n    bl sub_0205B9B8\n    cmp r0, #1\n    bne _02060A5E\n    mov r4, #1\n    b _02060A86\n    ldr r0, [sp]\n    bl sub_0205B9B8\n    cmp r0, #1\n    bne _02060A6C\n    mov r4, #1\n    b _02060A86\n    add r0, r7, #0\n    bl sub_0205B9B8\n    cmp r0, #1\n    bne _02060A7A\n    mov r4, #1\n    b _02060A86\n    add r0, r6, #0\n    bl sub_0205B9B8\n    cmp r0, #1\n    bne _02060A86\n    mov r4, #1\n    cmp r4, #0\n    bne _02060AB2\n    add r0, r5, #0\n    mov r1, #0\n    bl MapObject_SetFlag24\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    add r0, r5, #0\n    mov r1, #1\n    bl sub_02060FA8\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl sub_0205B9B8\n    cmp r0, #0\n    bne _02060AB2\n    add r0, r5, #0\n    mov r1, #0\n    bl MapObject_SetFlag24\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_02060AB8(void) {
    /* Original at 0x02060AB8 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    add r0, r4, #0\n    bl sub_0205BA24\n    cmp r0, #1\n    bne _02060AD2\n    add r0, r5, #0\n    mov r1, #1\n    bl MapObject_SetFlag28\n    pop {r3, r4, r5, pc}\n    add r0, r5, #0\n    bl MapObject_CheckFlag28\n    cmp r0, #1\n    bne _02060AEE\n    add r0, r4, #0\n    bl sub_0205BA30\n    cmp r0, #0\n    bne _02060AEE\n    add r0, r5, #0\n    mov r1, #0\n    bl MapObject_SetFlag28\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_02060AF0(void) {
    /* Original at 0x02060AF0 */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void sub_02060AF4(void) {
    /* Original at 0x02060AF4 */
    /* Requires manual decompilation - 70 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    ldr r7, [sp, #0x28]\n    add r5, r2, #0\n    str r1, [sp, #4]\n    str r3, [sp, #8]\n    add r2, r3, #0\n    add r1, r5, #0\n    add r3, r7, #0\n    add r6, r0, #0\n    mov r4, #0\n    bl sub_02060D94\n    cmp r0, #1\n    bne _02060B16\n    mov r0, #1\n    orr r4, r0\n    add r0, r6, #0\n    bl MapObject_GetFieldSystem\n    add r1, sp, #0xc\n    str r1, [sp]\n    ldr r1, [sp, #4]\n    add r2, r5, #0\n    add r3, r7, #0\n    bl sub_020549A8\n    cmp r0, #1\n    bne _02060B40\n    mov r0, #2\n    orr r4, r0\n    add r1, sp, #0xc\n    mov r0, #0\n    ldrsb r0, [r1, r0]\n    cmp r0, #0\n    beq _02060B40\n    mov r0, #8\n    orr r4, r0\n    ldr r3, [sp, #0x2c]\n    add r0, r6, #0\n    add r1, r5, #0\n    add r2, r7, #0\n    bl sub_02060DEC\n    cmp r0, #1\n    bne _02060B54\n    mov r0, #2\n    orr r4, r0\n    bl sub_0203993C\n    bl sub_0203401C\n    cmp r0, #0\n    beq _02060B76\n    ldr r2, [sp, #8]\n    add r0, r6, #0\n    add r1, r5, #0\n    add r3, r7, #0\n    bl sub_02060BFC\n    cmp r0, #1\n    bne _02060B8A\n    mov r0, #4\n    orr r4, r0\n    b _02060B8A\n    ldr r2, [sp, #8]\n    add r0, r6, #0\n    add r1, r5, #0\n    add r3, r7, #0\n    bl sub_02060CA8\n    cmp r0, #1\n    bne _02060B8A\n    mov r0, #4\n    orr r4, r0\n    add r0, r4, #0\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_02060B90(void) {
    /* Original at 0x02060B90 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r6, r1, #0\n    add r1, sp, #8\n    add r5, r0, #0\n    add r7, r2, #0\n    add r4, r3, #0\n    bl MapObject_CopyPositionVector\n    ldr r0, [sp, #0x28]\n    str r4, [sp]\n    str r0, [sp, #4]\n    add r0, r5, #0\n    add r1, sp, #8\n    add r2, r6, #0\n    add r3, r7, #0\n    bl sub_02060AF4\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_02060BB8(void) {
    /* Original at 0x02060BB8 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r4, r1, #0\n    add r5, r0, #0\n    bl MapObject_GetXCoord\n    add r6, r0, #0\n    add r0, r4, #0\n    bl GetDeltaXByFacingDirection\n    add r7, r0, #0\n    add r0, r5, #0\n    bl MapObject_GetYCoord\n    str r0, [sp, #4]\n    add r0, r5, #0\n    bl MapObject_GetZCoord\n    str r0, [sp, #8]\n    add r0, r4, #0\n    bl GetDeltaYByFacingDirection\n    str r4, [sp]\n    add r3, r0, #0\n    ldr r4, [sp, #8]\n    ldr r2, [sp, #4]\n    add r0, r5, #0\n    add r1, r6, r7\n    add r3, r4, r3\n    bl sub_02060B90\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_02060BFC(void) {
    /* Original at 0x02060BFC */
    /* Requires manual decompilation - 74 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    str r0, [sp]\n    add r4, r1, #0\n    add r6, r2, #0\n    add r7, r3, #0\n    bl MapObject_GetManager\n    add r5, r0, #0\n    bl MapObjectManager_GetObjects2\n    str r0, [sp, #8]\n    add r0, r5, #0\n    bl MapObjectManager_GetObjectCount\n    str r0, [sp, #4]\n    ldr r0, [sp, #8]\n    ldr r1, [sp]\n    cmp r0, r1\n    beq _02060C94\n    mov r1, #1\n    bl MapObject_GetFlagsBitsMask\n    cmp r0, #0\n    beq _02060C94\n    mov r1, #1\n    ldr r0, [sp, #8]\n    lsl r1, r1, #0x12\n    bl MapObject_GetFlagsBitsMask\n    cmp r0, #0\n    bne _02060C94\n    ldr r0, [sp, #8]\n    bl MapObject_GetXCoord\n    add r5, r0, #0\n    ldr r0, [sp, #8]\n    bl MapObject_GetZCoord\n    cmp r5, r4\n    bne _02060C68\n    cmp r0, r7\n    bne _02060C68\n    ldr r0, [sp, #8]\n    bl MapObject_GetYCoord\n    sub r0, r0, r6\n    bpl _02060C5E\n    neg r0, r0\n    cmp r0, #2\n    bge _02060C68\n    add sp, #0xc\n    mov r0, #1\n    pop {r4, r5, r6, r7, pc}\n    ldr r0, [sp, #8]\n    bl MapObject_GetPreviousXCoord\n    add r5, r0, #0\n    ldr r0, [sp, #8]\n    bl MapObject_GetPreviousZCoord\n    cmp r5, r4\n    bne _02060C94\n    cmp r0, r7\n    bne _02060C94\n    ldr r0, [sp, #8]\n    bl MapObject_GetYCoord\n    sub r0, r0, r6\n    bpl _02060C8A\n    neg r0, r0\n    cmp r0, #2\n    bge _02060C94\n    add sp, #0xc\n    mov r0, #1\n    pop {r4, r5, r6, r7, pc}\n    add r0, sp, #8\n    bl MapObjectArray_NextObject\n    ldr r0, [sp, #4]\n    sub r0, r0, #1\n    str r0, [sp, #4]\n    bne _02060C1C\n    mov r0, #0\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_02060CA8(void) {
    /* Original at 0x02060CA8 */
    /* Requires manual decompilation - 102 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    str r0, [sp]\n    add r5, r1, #0\n    add r4, r2, #0\n    add r6, r3, #0\n    bl MapObject_GetManager\n    add r7, r0, #0\n    bl MapObjectManager_GetObjects2\n    str r0, [sp, #4]\n    add r0, r7, #0\n    bl MapObjectManager_GetObjectCount\n    add r7, r0, #0\n    ldr r0, [sp, #4]\n    ldr r1, [sp]\n    cmp r0, r1\n    beq _02060D84\n    mov r1, #1\n    bl MapObject_GetFlagsBitsMask\n    cmp r0, #0\n    beq _02060D84\n    ldr r0, [sp, #4]\n    bl MapObject_GetXCoord\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #4]\n    bl MapObject_GetZCoord\n    ldr r1, [sp, #0xc]\n    str r0, [sp, #8]\n    cmp r1, r5\n    bne _02060D0A\n    cmp r0, r6\n    bne _02060D0A\n    ldr r0, [sp, #4]\n    bl MapObject_GetYCoord\n    sub r0, r0, r4\n    bpl _02060D00\n    neg r0, r0\n    cmp r0, #2\n    bge _02060D0A\n    add sp, #0x10\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [sp, #4]\n    bl MapObject_GetPreviousXCoord\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #4]\n    bl MapObject_GetPreviousZCoord\n    ldr r1, [sp, #0xc]\n    str r0, [sp, #8]\n    cmp r1, r5\n    bne _02060D3A\n    cmp r0, r6\n    bne _02060D3A\n    ldr r0, [sp, #4]\n    bl MapObject_GetYCoord\n    sub r0, r0, r4\n    bpl _02060D30\n    neg r0, r0\n    cmp r0, #2\n    bge _02060D3A\n    add sp, #0x10\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [sp, #4]\n    bl MapObject_GetID\n    cmp r0, #0xfd\n    bne _02060D84\n    ldr r0, [sp, #4]\n    bl ov01_022055DC\n    cmp r0, #0\n    beq _02060D84\n    ldr r0, [sp, #4]\n    bl MapObject_CheckVisible\n    cmp r0, #0\n    bne _02060D84\n    ldr r0, [sp, #4]\n    add r1, sp, #0xc\n    add r2, sp, #8\n    bl ov01_02205664\n    ldr r0, [sp, #0xc]\n    cmp r0, r5\n    bne _02060D84\n    ldr r0, [sp, #8]\n    cmp r0, r6\n    bne _02060D84\n    ldr r0, [sp, #4]\n    bl MapObject_GetYCoord\n    sub r0, r0, r4\n    bpl _02060D7A\n    neg r0, r0\n    cmp r0, #2\n    bge _02060D84\n    add sp, #0x10\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, sp, #4\n    bl MapObjectArray_NextObject\n    sub r7, r7, #1\n    bne _02060CC8\n    mov r0, #0\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_02060D94(void) {
    /* Original at 0x02060D94 */
    /* Requires manual decompilation - 39 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    add r5, r1, #0\n    add r4, r3, #0\n    bl MapObject_GetInitialX\n    add r7, r0, #0\n    add r0, r6, #0\n    bl MapObject_GetXRange\n    mov r1, #0\n    mvn r1, r1\n    cmp r0, r1\n    beq _02060DC0\n    add r1, r7, r0\n    sub r0, r7, r0\n    cmp r0, r5\n    bgt _02060DBC\n    cmp r1, r5\n    bge _02060DC0\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r6, #0\n    bl MapObject_GetInitialZ\n    add r5, r0, #0\n    add r0, r6, #0\n    bl MapObject_GetYRange\n    mov r1, #0\n    mvn r1, r1\n    cmp r0, r1\n    beq _02060DE6\n    add r1, r5, r0\n    sub r0, r5, r0\n    cmp r0, r4\n    bgt _02060DE2\n    cmp r1, r4\n    bge _02060DE6\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_02060DEC(void) {
    /* Original at 0x02060DEC */
    /* Requires manual decompilation - 45 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r4, r0, #0\n    add r6, r1, #0\n    add r7, r2, #0\n    add r5, r3, #0\n    bl sub_0205F8D0\n    cmp r0, #0\n    bne _02060E46\n    add r0, r4, #0\n    bl MapObject_GetFieldSystem\n    str r0, [sp]\n    add r0, r4, #0\n    bl sub_0205F504\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    ldr r0, [sp]\n    add r1, r6, #0\n    add r2, r7, #0\n    bl GetMetatileBehavior\n    add r6, r0, #0\n    bl sub_0205BA6C\n    cmp r6, r0\n    bne _02060E28\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r1, _02060E4C ; =_020FD4CC\n    lsl r5, r5, #2\n    ldr r1, [r1, r5]\n    add r0, r4, #0\n    blx r1\n    cmp r0, #1\n    beq _02060E42\n    ldr r1, _02060E50 ; =_020FD4BC\n    add r0, r6, #0\n    ldr r1, [r1, r5]\n    blx r1\n    cmp r0, #1\n    bne _02060E46\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02060E4C: .word _020FD4CC\n    _02060E50: .word _020FD4BC"
    );
    #endif
}

void sub_02060E54(void) {
    /* Original at 0x02060E54 */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    lsl r0, r4, #0x18\n    lsr r0, r0, #0x18\n    bl sub_0205BA54\n    cmp r0, #0\n    beq _02060E74\n    add r0, r5, #0\n    bl MapObject_CheckFlag28\n    cmp r0, #0\n    bne _02060EA0\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    lsl r0, r4, #0x18\n    lsr r0, r0, #0x18\n    bl MetatileBehavior_IsSurfableWater\n    cmp r0, #0\n    beq _02060E84\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    lsl r0, r4, #0x18\n    lsr r0, r0, #0x18\n    bl sub_0205B78C\n    cmp r0, #0\n    beq _02060EA0\n    add r0, r5, #0\n    bl MapObject_GetSpriteID\n    sub r0, #0xb2\n    cmp r0, #1\n    bhi _02060EA0\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_02060EA4(void) {
    sub_0205B798(0, 1);
}

void sub_02060EBC(void) {
    sub_0205B8B8(0, 1);
}

void sub_02060ED4(void) {
    sub_0205B8C4(0, 1);
}

void sub_02060EEC(void) {
    /* Original at 0x02060EEC */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    bl MapObject_CheckFlag28\n    cmp r0, #1\n    bne _02060F08\n    lsl r0, r4, #0x18\n    lsr r0, r0, #0x18\n    bl sub_0205BA30\n    cmp r0, #1\n    bne _02060F08\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}"
    );
    #endif
}

void GetDeltaXByFacingDirection(void) {
    /* Original at 0x02060F0C */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "lsl r1, r0, #2\n    ldr r0, _02060F14 ; =_020FD4AC\n    ldr r0, [r0, r1]\n    bx lr\n    _02060F14: .word _020FD4AC"
    );
    #endif
}

void GetDeltaYByFacingDirection(void) {
    /* Original at 0x02060F18 */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "lsl r1, r0, #2\n    ldr r0, _02060F20 ; =_020FD49C\n    ldr r0, [r0, r1]\n    bx lr\n    _02060F20: .word _020FD49C"
    );
    #endif
}

void sub_02060F24(void) {
    /* Original at 0x02060F24 */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl MapObject_GetXCoord\n    add r1, r0, #0\n    add r0, r5, #0\n    bl MapObject_SetPreviousX\n    add r0, r5, #0\n    bl MapObject_GetYCoord\n    add r1, r0, #0\n    add r0, r5, #0\n    bl MapObject_SetPreviousY\n    add r0, r5, #0\n    bl MapObject_GetZCoord\n    add r1, r0, #0\n    add r0, r5, #0\n    bl MapObject_SetPreviousZ\n    add r0, r4, #0\n    bl GetDeltaXByFacingDirection\n    add r1, r0, #0\n    add r0, r5, #0\n    bl MapObject_AddCurrentX\n    add r0, r5, #0\n    mov r1, #0\n    bl MapObject_AddCurrentY\n    add r0, r4, #0\n    bl GetDeltaYByFacingDirection\n    add r1, r0, #0\n    add r0, r5, #0\n    bl MapObject_AddCurrentZ\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_02060F78(void) {
    /* Original at 0x02060F78 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl MapObject_GetXCoord\n    add r1, r0, #0\n    add r0, r4, #0\n    bl MapObject_SetPreviousX\n    add r0, r4, #0\n    bl MapObject_GetYCoord\n    add r1, r0, #0\n    add r0, r4, #0\n    bl MapObject_SetPreviousY\n    add r0, r4, #0\n    bl MapObject_GetZCoord\n    add r1, r0, #0\n    add r0, r4, #0\n    bl MapObject_SetPreviousZ\n    pop {r4, pc}"
    );
    #endif
}

void sub_02060FA8(void) {
    /* Original at 0x02060FA8 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r1, #0\n    add r4, r0, #0\n    bl MapObject_GetXCoord\n    add r6, r0, #0\n    add r0, r5, #0\n    bl GetDeltaXByFacingDirection\n    add r7, r0, #0\n    add r0, r4, #0\n    bl MapObject_GetZCoord\n    str r0, [sp]\n    add r0, r5, #0\n    bl GetDeltaYByFacingDirection\n    add r5, r0, #0\n    add r0, r4, #0\n    bl MapObject_GetFieldSystem\n    ldr r2, [sp]\n    add r1, r6, r7\n    add r2, r2, r5\n    bl GetMetatileBehavior\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_02060FE0(void) {
    /* Original at 0x02060FE0 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r1, #0\n    add r4, r0, #0\n    bl MapObject_GetXCoord\n    add r6, r0, #0\n    add r0, r5, #0\n    bl GetDeltaXByFacingDirection\n    add r7, r0, #0\n    add r0, r4, #0\n    bl MapObject_GetZCoord\n    str r0, [sp]\n    add r0, r5, #0\n    bl GetDeltaYByFacingDirection\n    add r5, r0, #0\n    add r0, r4, #0\n    bl MapObject_GetFieldSystem\n    ldr r2, [sp]\n    add r1, r6, r7\n    add r2, r2, r5\n    bl sub_020548EC\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_0206101C(void) {
    /* Original at 0x0206101C */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0xc\n    add r5, r1, #0\n    add r1, sp, #0\n    add r6, r0, #0\n    add r4, r2, #0\n    bl MapObject_CopyPositionVector\n    cmp r5, #3\n    bhi _02061062\n    add r0, r5, r5\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0206103C: ; jump table\n    ldr r0, [sp, #8]\n    sub r0, r0, r4\n    str r0, [sp, #8]\n    b _02061062\n    ldr r0, [sp, #8]\n    add r0, r0, r4\n    str r0, [sp, #8]\n    b _02061062\n    ldr r0, [sp]\n    sub r0, r0, r4\n    str r0, [sp]\n    b _02061062\n    ldr r0, [sp]\n    add r0, r0, r4\n    str r0, [sp]\n    add r0, r6, #0\n    add r1, sp, #0\n    bl MapObject_SetPositionVector\n    add sp, #0xc\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void sub_02061070(void) {
    /* Original at 0x02061070 */
    /* Requires manual decompilation - 63 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x18\n    add r1, sp, #0xc\n    add r5, r0, #0\n    bl MapObject_CopyPositionVector\n    add r3, sp, #0xc\n    ldmia r3!, {r0, r1}\n    add r2, sp, #0\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    str r0, [r2]\n    add r0, r5, #0\n    bl MapObject_CheckIgnoreHeights\n    cmp r0, #1\n    bne _020610A2\n    mov r1, #1\n    add r0, r5, #0\n    lsl r1, r1, #0xc\n    bl MapObject_ClearFlagsBits\n    add sp, #0x18\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    add r0, r5, #0\n    bl MapObject_CheckFlag29\n    add r4, r0, #0\n    add r0, r5, #0\n    bl MapObject_GetFieldSystem\n    add r1, sp, #0\n    add r2, r4, #0\n    bl sub_02061248\n    add r4, r0, #0\n    cmp r4, #1\n    bne _020610F6\n    ldr r0, [sp, #4]\n    add r1, sp, #0xc\n    str r0, [sp, #0x10]\n    add r0, r5, #0\n    bl MapObject_SetPositionVector\n    add r0, r5, #0\n    bl MapObject_GetYCoord\n    add r1, r0, #0\n    add r0, r5, #0\n    bl MapObject_SetPreviousY\n    ldr r1, [sp, #0x10]\n    add r0, r5, #0\n    asr r2, r1, #3\n    asr r1, r2, #0xb\n    lsr r1, r1, #0x14\n    add r1, r2, r1\n    asr r1, r1, #0xc\n    bl MapObject_SetCurrentY\n    mov r1, #1\n    add r0, r5, #0\n    lsl r1, r1, #0xc\n    bl MapObject_ClearFlagsBits\n    b _02061100\n    mov r1, #1\n    add r0, r5, #0\n    lsl r1, r1, #0xc\n    bl MapObject_SetFlagsBits\n    add r0, r4, #0\n    add sp, #0x18\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_02061108(void) {
    /* Original at 0x02061108 */
    /* Requires manual decompilation - 54 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    bl sub_0205BA6C\n    add r6, r0, #0\n    add r0, r5, #0\n    add r4, r6, #0\n    bl sub_0205F8D0\n    cmp r0, #0\n    bne _0206115A\n    add r0, r5, #0\n    bl MapObject_GetPreviousXCoord\n    add r4, r0, #0\n    add r0, r5, #0\n    bl MapObject_GetPreviousZCoord\n    add r6, r0, #0\n    add r0, r5, #0\n    bl MapObject_GetFieldSystem\n    add r1, r4, #0\n    add r2, r6, #0\n    add r7, r0, #0\n    bl GetMetatileBehavior\n    add r6, r0, #0\n    add r0, r5, #0\n    bl MapObject_GetXCoord\n    add r4, r0, #0\n    add r0, r5, #0\n    bl MapObject_GetZCoord\n    add r2, r0, #0\n    add r0, r7, #0\n    add r1, r4, #0\n    bl GetMetatileBehavior\n    add r4, r0, #0\n    add r0, r5, #0\n    add r1, r6, #0\n    bl sub_0205F50C\n    add r0, r5, #0\n    add r1, r4, #0\n    bl sub_0205F4FC\n    add r0, r4, #0\n    bl MetatileBehavior_IsNone\n    cmp r0, #1\n    bne _02061182\n    mov r1, #2\n    add r0, r5, #0\n    lsl r1, r1, #0xa\n    bl MapObject_SetFlagsBits\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r1, #2\n    add r0, r5, #0\n    lsl r1, r1, #0xa\n    bl MapObject_ClearFlagsBits\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_02061190(void) {
    /* Original at 0x02061190 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "cmp r0, #3\n    bhi _020611C6\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _020611A0: ; jump table\n    ldr r0, [r1, #8]\n    sub r0, r0, r2\n    str r0, [r1, #8]\n    bx lr\n    ldr r0, [r1, #8]\n    add r0, r0, r2\n    str r0, [r1, #8]\n    bx lr\n    ldr r0, [r1]\n    sub r0, r0, r2\n    str r0, [r1]\n    bx lr\n    ldr r0, [r1]\n    add r0, r0, r2\n    str r0, [r1]\n    bx lr"
    );
    #endif
}

void sub_020611C8(void) {
    /* Original at 0x020611C8 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "lsl r3, r0, #0x10\n    mov r0, #2\n    lsl r0, r0, #0xe\n    add r3, r3, r0\n    lsl r1, r1, #0x10\n    str r3, [r2]\n    add r0, r1, r0\n    str r0, [r2, #8]\n    bx lr"
    );
    #endif
}

void sub_020611DC(void) {
    /* Original at 0x020611DC */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl MapObject_GetMovement\n    sub r0, #0x33\n    cmp r0, #3\n    bhi _020611F0\n    add r0, r4, #0\n    bl sub_0205F430\n    pop {r4, pc}"
    );
    #endif
}

void sub_020611F4(void) {
    /* Original at 0x020611F4 */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "lsl r1, r0, #2\n    ldr r0, _020611FC ; =_020FD4DC\n    ldr r0, [r0, r1]\n    bx lr\n    _020611FC: .word _020FD4DC"
    );
    #endif
}

void sub_02061200(void) {
    /* Original at 0x02061200 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "cmp r0, r2\n    ble _02061208\n    mov r0, #2\n    bx lr\n    cmp r0, r2\n    bge _02061210\n    mov r0, #3\n    bx lr\n    cmp r1, r3\n    bgt _02061218\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void sub_0206121C(void) {
    /* Original at 0x0206121C */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #8\n    add r4, r1, #0\n    add r1, sp, #4\n    str r1, [sp]\n    ldr r1, [r4, #4]\n    ldr r2, [r4]\n    ldr r3, [r4, #8]\n    bl sub_02054940\n    add r1, sp, #4\n    ldrb r1, [r1]\n    cmp r1, #0\n    bne _0206123E\n    add sp, #8\n    mov r0, #0\n    pop {r4, pc}\n    str r0, [r4, #4]\n    mov r0, #1\n    add sp, #8\n    pop {r4, pc}"
    );
    #endif
}

void sub_02061248(void) {
    /* Original at 0x02061248 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #8\n    add r5, r1, #0\n    add r1, sp, #4\n    str r1, [sp]\n    add r4, r2, #0\n    ldr r1, [r5, #4]\n    ldr r2, [r5]\n    ldr r3, [r5, #8]\n    bl sub_02054940\n    add r1, sp, #4\n    ldrb r1, [r1]\n    cmp r1, #0\n    bne _0206126C\n    add sp, #8\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    cmp r1, #2\n    bne _0206127A\n    cmp r4, #0\n    bne _0206127A\n    add sp, #8\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    str r0, [r5, #4]\n    mov r0, #1\n    add sp, #8\n    pop {r3, r4, r5, pc}"
    );
    #endif
}
