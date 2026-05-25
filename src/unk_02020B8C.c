/* Decompiled from asm/unk_02020B8C.s */
#include "global.h"

void sub_02020B8C(void) {
    /* Original at 0x02020B8C */
    /* Requires manual decompilation - 4 instructions */
    #ifdef MWERKS
    asm(
        "cmp r0, r1\n    blt _02020B92\n    add r0, r1, #0\n    bx lr"
    );
    #endif
}

void sub_02020B94(void) {
    /* Original at 0x02020B94 */
    /* Requires manual decompilation - 4 instructions */
    #ifdef MWERKS
    asm(
        "cmp r0, r1\n    bgt _02020B9A\n    add r0, r1, #0\n    bx lr"
    );
    #endif
}

void GetDistanceFromPointToLine(void) {
    /* Original at 0x02020B9C */
    /* Requires manual decompilation - 89 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x50\n    add r5, r0, #0\n    add r3, sp, #0x14\n    mov r0, #0\n    str r0, [r3]\n    str r0, [r3, #4]\n    str r0, [r3, #8]\n    add r0, r2, #0\n    add r4, r1, #0\n    add r2, sp, #0x44\n    bl VEC_Subtract\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, sp, #0x38\n    bl VEC_Subtract\n    ldr r0, [sp, #0x48]\n    ldr r5, [sp, #0x4c]\n    str r0, [sp]\n    asr r0, r0, #0x1f\n    str r0, [sp, #0x10]\n    ldr r0, [sp, #0x44]\n    asr r4, r5, #0x1f\n    str r0, [sp, #4]\n    asr r7, r0, #0x1f\n    add r0, sp, #0x44\n    add r1, sp, #0x38\n    bl VEC_DotProduct\n    str r0, [sp, #8]\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r5, #0\n    add r3, r4, #0\n    bl _ll_mul\n    add r6, r0, #0\n    ldr r0, [sp, #4]\n    add r4, r1, #0\n    add r1, r7, #0\n    add r2, r0, #0\n    add r3, r7, #0\n    bl _ll_mul\n    str r0, [sp, #0xc]\n    add r5, r1, #0\n    ldr r0, [sp]\n    ldr r1, [sp, #0x10]\n    add r2, r0, #0\n    add r3, r1, #0\n    bl _ll_mul\n    mov r2, #2\n    add r3, r1, #0\n    add r7, r0, #0\n    mov r1, #0\n    lsl r2, r2, #0xa\n    add r2, r6, r2\n    adc r4, r1\n    lsl r4, r4, #0x14\n    lsr r2, r2, #0xc\n    orr r2, r4\n    mov r4, #2\n    ldr r6, [sp, #0xc]\n    lsl r4, r4, #0xa\n    add r4, r6, r4\n    adc r5, r1\n    lsl r5, r5, #0x14\n    lsr r4, r4, #0xc\n    orr r4, r5\n    mov r5, #2\n    lsl r5, r5, #0xa\n    add r5, r7, r5\n    adc r3, r1\n    lsl r1, r3, #0x14\n    lsr r3, r5, #0xc\n    orr r3, r1\n    add r1, r4, r3\n    ldr r0, [sp, #8]\n    add r1, r2, r1\n    bl FX_Div\n    add r1, sp, #0x44\n    add r2, sp, #0x14\n    add r3, sp, #0x20\n    bl VEC_MultAdd\n    add r0, sp, #0x20\n    add r1, sp, #0x38\n    add r2, sp, #0x2c\n    bl VEC_Subtract\n    add r0, sp, #0x2c\n    bl VEC_Mag\n    add sp, #0x50\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void CalcAngleBetweenVecs(void) {
    /* Original at 0x02020C64 */
    /* Requires manual decompilation - 92 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x30\n    add r4, r1, #0\n    add r1, sp, #0x24\n    bl VEC_Normalize\n    add r0, r4, #0\n    add r1, sp, #0x18\n    bl VEC_Normalize\n    ldr r0, [sp, #0x24]\n    ldr r4, [sp, #0x18]\n    str r0, [sp]\n    asr r0, r0, #0x1f\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x20]\n    asr r6, r4, #0x1f\n    str r0, [sp, #8]\n    asr r0, r0, #0x1f\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #0x2c]\n    ldr r2, [sp, #8]\n    asr r7, r0, #0x1f\n    ldr r3, [sp, #0xc]\n    add r1, r7, #0\n    str r0, [sp, #0x10]\n    bl _ll_mul\n    str r0, [sp, #0x14]\n    add r5, r1, #0\n    ldr r0, [sp]\n    ldr r1, [sp, #4]\n    add r2, r4, #0\n    add r3, r6, #0\n    bl _ll_mul\n    mov r2, #2\n    ldr r3, [sp, #0x14]\n    lsl r2, r2, #0xa\n    add r3, r3, r2\n    ldr r2, _02020D28 ; =0x00000000\n    adc r5, r2\n    lsl r2, r5, #0x14\n    lsr r3, r3, #0xc\n    orr r3, r2\n    mov r2, #2\n    lsl r2, r2, #0xa\n    add r0, r0, r2\n    ldr r2, _02020D28 ; =0x00000000\n    adc r1, r2\n    lsl r1, r1, #0x14\n    lsr r0, r0, #0xc\n    orr r0, r1\n    add r5, r3, r0\n    ldr r0, [sp, #0x10]\n    add r1, r7, #0\n    add r2, r4, #0\n    add r3, r6, #0\n    bl _ll_mul\n    add r6, r0, #0\n    add r4, r1, #0\n    ldr r0, [sp]\n    ldr r1, [sp, #4]\n    ldr r2, [sp, #8]\n    ldr r3, [sp, #0xc]\n    bl _ll_mul\n    mov r2, #2\n    mov r3, #0\n    lsl r2, r2, #0xa\n    add r6, r6, r2\n    adc r4, r3\n    lsl r4, r4, #0x14\n    lsr r6, r6, #0xc\n    orr r6, r4\n    add r4, r0, r2\n    adc r1, r3\n    lsl r0, r1, #0x14\n    lsr r1, r4, #0xc\n    orr r1, r0\n    sub r0, r6, r1\n    cmp r5, #0\n    bne _02020D1E\n    cmp r0, #0\n    ble _02020D16\n    add sp, #0x30\n    lsl r0, r2, #3\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #3\n    add sp, #0x30\n    lsl r0, r0, #0xe\n    pop {r3, r4, r5, r6, r7, pc}\n    add r1, r5, #0\n    bl FX_Atan2Idx\n    add sp, #0x30\n    pop {r3, r4, r5, r6, r7, pc}\n    _02020D28: .word 0x00000000"
    );
    #endif
}

void sub_02020D2C(void) {
    /* Original at 0x02020D2C */
    /* Requires manual decompilation - 54 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0x24\n    add r4, r1, #0\n    ldr r1, [r4]\n    ldr r3, _02020DA0 ; =FX_SinCosTable_\n    lsl r1, r1, #0x10\n    lsr r1, r1, #0x10\n    asr r1, r1, #4\n    lsl r2, r1, #1\n    lsl r1, r2, #1\n    add r2, r2, #1\n    lsl r2, r2, #1\n    ldrsh r1, [r3, r1]\n    ldrsh r2, [r3, r2]\n    add r5, r0, #0\n    bl MTX_RotX33_\n    ldr r0, [r4, #4]\n    ldr r3, _02020DA0 ; =FX_SinCosTable_\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    asr r0, r0, #4\n    lsl r2, r0, #1\n    lsl r1, r2, #1\n    add r2, r2, #1\n    lsl r2, r2, #1\n    ldrsh r1, [r3, r1]\n    ldrsh r2, [r3, r2]\n    add r0, sp, #0\n    bl MTX_RotY33_\n    add r0, r5, #0\n    add r1, sp, #0\n    add r2, r5, #0\n    bl MTX_Concat33\n    ldr r0, [r4, #8]\n    ldr r3, _02020DA0 ; =FX_SinCosTable_\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    asr r0, r0, #4\n    lsl r2, r0, #1\n    lsl r1, r2, #1\n    add r2, r2, #1\n    lsl r2, r2, #1\n    ldrsh r1, [r3, r1]\n    ldrsh r2, [r3, r2]\n    add r0, sp, #0\n    bl MTX_RotZ33_\n    add r0, r5, #0\n    add r1, sp, #0\n    add r2, r5, #0\n    bl MTX_Concat33\n    add sp, #0x24\n    pop {r4, r5, pc}\n    nop\n    _02020DA0: .word FX_SinCosTable_"
    );
    #endif
}

void sub_02020DA4(void) {
    /* Original at 0x02020DA4 */
    /* Requires manual decompilation - 43 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x28\n    add r5, r1, #0\n    str r0, [sp]\n    add r0, r5, #0\n    add r4, r2, #0\n    add r6, r3, #0\n    bl GF_CosDegNoWrap\n    add r7, r0, #0\n    add r0, r5, #0\n    bl GF_SinDegNoWrap\n    add r1, r0, #0\n    ldr r0, [sp]\n    add r2, r7, #0\n    bl MTX_RotX33_\n    add r0, r4, #0\n    bl GF_CosDegNoWrap\n    add r5, r0, #0\n    add r0, r4, #0\n    bl GF_SinDegNoWrap\n    add r1, r0, #0\n    add r0, sp, #4\n    add r2, r5, #0\n    bl MTX_RotY33_\n    ldr r0, [sp]\n    add r1, sp, #4\n    add r2, r0, #0\n    bl MTX_Concat33\n    add r0, r6, #0\n    bl GF_CosDegNoWrap\n    add r4, r0, #0\n    add r0, r6, #0\n    bl GF_SinDegNoWrap\n    add r1, r0, #0\n    add r0, sp, #4\n    add r2, r4, #0\n    bl MTX_RotZ33_\n    ldr r0, [sp]\n    add r1, sp, #4\n    add r2, r0, #0\n    bl MTX_Concat33\n    add sp, #0x28\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_02020E10(void) {
    /* Original at 0x02020E10 */
    /* Requires manual decompilation - 52 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    asr r0, r0, #4\n    add r7, r2, #0\n    lsl r2, r0, #1\n    add r6, r1, #0\n    lsl r0, r2, #1\n    ldr r1, _02020E7C ; =FX_SinCosTable_\n    add r2, r2, #1\n    lsl r2, r2, #1\n    ldrsh r0, [r1, r0]\n    ldrsh r1, [r1, r2]\n    add r5, r3, #0\n    ldr r4, [sp, #0x18]\n    bl FX_Div\n    add r2, r0, #0\n    asr r1, r6, #0x1f\n    add r0, r6, #0\n    asr r3, r2, #0x1f\n    bl _ll_mul\n    mov r6, #2\n    mov r2, #0\n    lsl r6, r6, #0xa\n    add r0, r0, r6\n    adc r1, r2\n    lsl r1, r1, #0x14\n    lsr r0, r0, #0xc\n    orr r0, r1\n    asr r3, r0, #0x1f\n    lsr r1, r0, #0x13\n    lsl r3, r3, #0xd\n    orr r3, r1\n    lsl r0, r0, #0xd\n    add r0, r0, r6\n    adc r3, r2\n    lsl r1, r3, #0x14\n    lsr r0, r0, #0xc\n    orr r0, r1\n    asr r1, r0, #0x1f\n    asr r3, r7, #0x1f\n    add r2, r7, #0\n    str r0, [r4]\n    bl _ll_mul\n    mov r3, #0\n    add r2, r6, #0\n    add r2, r0, r2\n    adc r1, r3\n    lsl r0, r1, #0x14\n    lsr r1, r2, #0xc\n    orr r1, r0\n    str r1, [r5]\n    pop {r3, r4, r5, r6, r7, pc}\n    _02020E7C: .word FX_SinCosTable_"
    );
    #endif
}

void sub_02020E80(void) {
    void *r4;
    void *r5;
    void *r6;
    void *r7;
    /* ldr r6, [r2, #4] */
    /* ldr r7, [r1] */
    /* ldr r4, [r0, #4] */
    /* ldr r5, [r1, #4] */
    /* sub r1, r6, r4 */
    r3 = r7 + 0;
    /* mul r3, r1 */
    /* ldr r2, [r2] */
    /* sub r1, r4, r5 */
    /* mul r1, r2 */
    /* ldr r2, [r0] */
    /* sub r0, r5, r6 */
    /* mul r0, r2 */
    /* add r0, r1, r0 */
    /* add r0, r3, r0 */
    /* bmi _02020EA8 */
    r0 = 1;
    r0 = 0;
}

void sub_02020EB0(void) {
    /* Original at 0x02020EB0 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r7, r1, #0\n    add r4, r3, #0\n    str r2, [sp]\n    bl sub_02020E80\n    add r6, r0, #0\n    add r0, r5, #0\n    add r1, r7, #0\n    add r2, r4, #0\n    bl sub_02020E80\n    eor r0, r6\n    cmp r0, #1\n    bne _02020EF0\n    ldr r0, [sp]\n    add r1, r4, #0\n    add r2, r5, #0\n    bl sub_02020E80\n    add r5, r0, #0\n    ldr r0, [sp]\n    add r1, r4, #0\n    add r2, r7, #0\n    bl sub_02020E80\n    eor r0, r5\n    cmp r0, #1\n    bne _02020EF0\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_02020EF4(void) {
    /* Original at 0x02020EF4 */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #8\n    add r5, r0, #0\n    add r4, r1, #0\n    sub r1, r3, r4\n    ldr r0, [sp, #0x18]\n    add r6, r2, #0\n    sub r0, r0, r6\n    lsl r0, r0, #0x10\n    lsl r1, r1, #0x10\n    asr r0, r0, #0x10\n    asr r1, r1, #0x10\n    beq _02020F1A\n    lsl r0, r0, #0xc\n    lsl r1, r1, #0xc\n    bl FX_Div\n    str r0, [sp]\n    b _02020F20\n    mov r0, #0xff\n    lsl r0, r0, #0xc\n    str r0, [sp]\n    ldr r0, [sp]\n    lsl r2, r4, #0xc\n    asr r1, r0, #0x1f\n    asr r3, r2, #0x1f\n    bl _ll_mul\n    mov r3, #2\n    mov r4, #0\n    lsl r3, r3, #0xa\n    lsl r2, r6, #0xc\n    add r3, r0, r3\n    adc r1, r4\n    lsl r0, r1, #0x14\n    lsr r1, r3, #0xc\n    orr r1, r0\n    ldr r0, [sp]\n    sub r1, r2, r1\n    str r0, [r5]\n    str r1, [sp, #4]\n    str r1, [r5, #4]\n    add sp, #8\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void sub_02020F4C(void) {
    /* Original at 0x02020F4C */
    /* Requires manual decompilation - 162 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x34\n    ldr r4, [sp, #0x48]\n    add r7, r0, #0\n    add r5, r1, #0\n    add r6, r3, #0\n    str r2, [sp, #4]\n    cmp r4, #0\n    beq _02020F64\n    ldr r0, _0202109C ; =0x0000FFFF\n    str r0, [r4]\n    str r0, [r4, #4]\n    ldr r2, [sp, #4]\n    add r0, r7, #0\n    add r1, r5, #0\n    add r3, r6, #0\n    bl sub_02020EB0\n    cmp r0, #0\n    bne _02020F7A\n    add sp, #0x34\n    mov r0, #0\n    pop {r4, r5, r6, r7, pc}\n    ldr r0, [r5, #4]\n    str r0, [sp]\n    ldr r1, [r7]\n    ldr r2, [r7, #4]\n    ldr r3, [r5]\n    add r0, sp, #0x24\n    bl sub_02020EF4\n    ldr r0, [r6, #4]\n    ldr r1, [sp, #4]\n    str r0, [sp]\n    ldr r2, [sp, #4]\n    ldr r1, [r1]\n    ldr r2, [r2, #4]\n    ldr r3, [r6]\n    add r0, sp, #0x1c\n    bl sub_02020EF4\n    ldr r1, [sp, #0x1c]\n    ldr r3, [sp, #0x24]\n    cmp r3, r1\n    bne _02020FAC\n    add sp, #0x34\n    mov r0, #0\n    pop {r4, r5, r6, r7, pc}\n    ldr r2, [sp, #0x20]\n    ldr r0, [sp, #0x28]\n    sub r1, r3, r1\n    sub r0, r2, r0\n    bl FX_Div\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #0x1c]\n    ldr r2, [sp, #0xc]\n    asr r1, r0, #0x1f\n    asr r3, r2, #0x1f\n    bl _ll_mul\n    add r2, r0, #0\n    ldr r0, [sp, #0x20]\n    mov r3, #0\n    str r0, [sp, #0x10]\n    mov r0, #2\n    lsl r0, r0, #0xa\n    add r0, r2, r0\n    adc r1, r3\n    lsr r0, r0, #0xc\n    lsl r1, r1, #0x14\n    str r0, [sp, #0x14]\n    orr r0, r1\n    str r0, [sp, #0x14]\n    ldr r0, [sp, #0xc]\n    add r1, sp, #0x30\n    bl FX_Modf\n    mov r1, #2\n    lsl r1, r1, #0xa\n    cmp r0, r1\n    blt _02020FF8\n    ldr r2, [sp, #0x30]\n    lsl r0, r1, #1\n    add r0, r2, r0\n    str r0, [sp, #0x30]\n    ldr r0, [sp, #0x30]\n    ldr r1, [sp, #0x10]\n    asr r0, r0, #0xc\n    str r0, [r4]\n    ldr r0, [sp, #0x14]\n    add r0, r1, r0\n    add r1, sp, #0x2c\n    bl FX_Modf\n    mov r1, #2\n    lsl r1, r1, #0xa\n    cmp r0, r1\n    blt _0202101A\n    ldr r2, [sp, #0x2c]\n    lsl r0, r1, #1\n    add r0, r2, r0\n    str r0, [sp, #0x2c]\n    ldr r0, [sp, #0x2c]\n    asr r0, r0, #0xc\n    str r0, [r4, #4]\n    ldr r1, [r5]\n    ldr r0, [r7]\n    cmp r0, r1\n    blt _0202102C\n    mov ip, r0\n    b _02021030\n    mov ip, r1\n    add r1, r0, #0\n    ldr r2, [r5, #4]\n    ldr r0, [r7, #4]\n    cmp r0, r2\n    blt _0202103C\n    str r0, [sp, #8]\n    b _02021040\n    str r2, [sp, #8]\n    add r2, r0, #0\n    ldr r0, [sp, #4]\n    ldr r3, [r6]\n    ldr r0, [r0]\n    cmp r0, r3\n    blt _0202104E\n    str r0, [sp, #0x18]\n    b _02021052\n    str r3, [sp, #0x18]\n    add r3, r0, #0\n    ldr r0, [sp, #4]\n    ldr r5, [r6, #4]\n    ldr r0, [r0, #4]\n    cmp r0, r5\n    blt _02021060\n    add r7, r0, #0\n    b _02021064\n    add r7, r5, #0\n    add r5, r0, #0\n    ldr r0, [r4]\n    mov r6, ip\n    cmp r6, r0\n    blt _02021094\n    cmp r1, r0\n    bgt _02021094\n    ldr r1, [r4, #4]\n    ldr r4, [sp, #8]\n    cmp r4, r1\n    blt _02021094\n    cmp r2, r1\n    bgt _02021094\n    ldr r2, [sp, #0x18]\n    cmp r2, r0\n    blt _02021094\n    cmp r3, r0\n    bgt _02021094\n    cmp r7, r1\n    blt _02021094\n    cmp r5, r1\n    bgt _02021094\n    add sp, #0x34\n    mov r0, #1\n    pop {r4, r5, r6, r7, pc}\n    mov r0, #0\n    add sp, #0x34\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _0202109C: .word 0x0000FFFF"
    );
    #endif
}
