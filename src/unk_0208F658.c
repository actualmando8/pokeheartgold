/* Decompiled from asm/unk_0208F658.s */
#include "global.h"

void sub_0208F658(void) {
    /* Original at 0x0208F658 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _0208F664 ; =sub_0203410C\n    add r2, r0, #0\n    ldr r0, _0208F668 ; =_02105430\n    mov r1, #0xb\n    bx r3\n    nop\n    _0208F664: .word sub_0203410C\n    _0208F668: .word _02105430"
    );
    #endif
}

void sub_0208F66C(void) {
    /* Original at 0x0208F66C */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "cmp r0, #0xc\n    bne _0208F674\n    mov r0, #0xc\n    bx lr\n    cmp r0, #6\n    bhs _0208F67C\n    add r0, r0, #6\n    bx lr\n    sub r0, r0, #6\n    bx lr"
    );
    #endif
}

void sub_0208F680(void) {
    /* Original at 0x0208F680 */
    /* Requires manual decompilation - 48 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r3, #0x88\n    add r5, r0, #0\n    add r6, r2, #0\n    ldr r4, [r3]\n    bl sub_0203769C\n    cmp r5, r0\n    beq _0208F6EA\n    ldr r0, _0208F6EC ; =0x00002228\n    mov r2, #0x59\n    ldr r0, [r4, r0]\n    add r1, r6, #0\n    lsl r2, r2, #4\n    bl memcpy\n    ldr r0, [r4, #0x64]\n    add r2, r0, #1\n    mov r0, #0x59\n    lsl r0, r0, #4\n    add r1, r2, #0\n    mul r1, r0\n    str r2, [r4, #0x64]\n    cmp r1, r0\n    blt _0208F6D6\n    bl sub_0203769C\n    cmp r0, #1\n    bne _0208F6C6\n    add r0, r4, #0\n    mov r1, #0x1b\n    mov r2, #0\n    bl ov65_0221DE24\n    b _0208F6E4\n    bl sub_0203769C\n    ldr r1, _0208F6F0 ; =0x00002224\n    ldr r2, [r4, #0x5c]\n    ldr r1, [r4, r1]\n    bl ov65_0221DE64\n    b _0208F6E4\n    bl sub_0203769C\n    ldr r1, _0208F6F0 ; =0x00002224\n    ldr r2, [r4, #0x5c]\n    ldr r1, [r4, r1]\n    bl ov65_0221DE64\n    ldr r0, [r4, #0x5c]\n    add r0, r0, #1\n    str r0, [r4, #0x5c]\n    pop {r4, r5, r6, pc}\n    _0208F6EC: .word 0x00002228\n    _0208F6F0: .word 0x00002224"
    );
    #endif
}

void sub_0208F6F4(void) {
    /* Original at 0x0208F6F4 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r3, #0x88\n    add r5, r0, #0\n    add r6, r2, #0\n    ldr r4, [r3]\n    bl sub_0203769C\n    cmp r5, r0\n    beq _0208F710\n    ldrb r0, [r6]\n    bl sub_0208F66C\n    add r4, #0x98\n    str r0, [r4]\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void sub_0208F714(void) {
    /* Original at 0x0208F714 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "add r3, #0x88\n    ldrb r2, [r2]\n    ldr r1, [r3]\n    lsl r0, r0, #2\n    add r0, r1, r0\n    str r2, [r0, #0x6c]\n    bx lr"
    );
    #endif
}

void sub_0208F724(void) {
    /* Original at 0x0208F724 */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void sub_0208F728(void) {
    /* Original at 0x0208F728 */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void sub_0208F72C(void) {
    /* Original at 0x0208F72C */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "add r3, #0x88\n    ldr r0, [r3]\n    mov r1, #2\n    str r1, [r0, #0x60]\n    bx lr"
    );
    #endif
}

void sub_0208F738(void) {
    /* Original at 0x0208F738 */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void sub_0208F73C(void) {
    /* Original at 0x0208F73C */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "add r3, #0x88\n    ldrb r2, [r2]\n    ldr r1, [r3]\n    ldr r0, _0208F748 ; =0x000022CC\n    str r2, [r1, r0]\n    bx lr\n    _0208F748: .word 0x000022CC"
    );
    #endif
}

void sub_0208F74C(void) {
    /* Original at 0x0208F74C */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r0, #0\n    ldr r0, [r3, #0xc]\n    add r5, r2, #0\n    bl Save_SpecialRibbons_Get\n    add r4, r0, #0\n    bl sub_0203769C\n    cmp r6, r0\n    beq _0208F778\n    mov r2, #0\n    ldrb r1, [r5, r2]\n    cmp r1, #0\n    beq _0208F772\n    ldrb r0, [r4, r2]\n    cmp r0, r1\n    beq _0208F772\n    strb r1, [r4, r2]\n    add r2, r2, #1\n    cmp r2, #0xe\n    blt _0208F764\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void sub_0208F77C(void) {
    /* Original at 0x0208F77C */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r3, #0x88\n    add r5, r0, #0\n    add r6, r2, #0\n    ldr r4, [r3]\n    bl sub_0203769C\n    cmp r5, r0\n    beq _0208F7A0\n    ldr r0, _0208F7A4 ; =0x00002230\n    add r1, r6, #0\n    ldr r0, [r4, r0]\n    mov r2, #1\n    mov r3, #0x1a\n    bl SavePalPad_Merge\n    mov r0, #3\n    str r0, [r4, #0x60]\n    pop {r4, r5, r6, pc}\n    nop\n    _0208F7A4: .word 0x00002230"
    );
    #endif
}

void sub_0208F7A8(void) {
    /* Original at 0x0208F7A8 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r3, #0x88\n    add r5, r0, #0\n    add r6, r2, #0\n    ldr r4, [r3]\n    bl sub_0203769C\n    cmp r5, r0\n    beq _0208F7DA\n    ldr r1, _0208F7DC ; =0x00002E20\n    mov r2, #0xfb\n    add r3, r4, r1\n    lsl r2, r2, #2\n    add r1, r5, #0\n    mul r1, r2\n    add r0, r6, #0\n    add r1, r3, r1\n    sub r2, r2, #4\n    bl MIi_CpuCopyFast\n    mov r0, #4\n    str r0, [r4, #0x60]\n    mov r0, #0\n    bl sub_020378E4\n    pop {r4, r5, r6, pc}\n    _0208F7DC: .word 0x00002E20"
    );
    #endif
}

void sub_0208F7E0(void) {
    /* Original at 0x0208F7E0 */
    /* Requires manual decompilation - 3 instructions */
    #ifdef MWERKS
    asm(
        "add r0, #0x88\n    str r1, [r0]\n    bx lr"
    );
    #endif
}

void sub_0208F7E8(void) {
    /* Original at 0x0208F7E8 */
    /* Requires manual decompilation - 3 instructions */
    #ifdef MWERKS
    asm(
        "mov r0, #0xfb\n    lsl r0, r0, #2\n    bx lr"
    );
    #endif
}

u8 sub_0208F7F0(void) {
    return 0xe;
}

u8 sub_0208F7F4(void) {
    return 0x88;
}

void sub_0208F7F8(void) {
    /* Original at 0x0208F7F8 */
    /* Requires manual decompilation - 3 instructions */
    #ifdef MWERKS
    asm(
        "mov r0, #0x59\n    lsl r0, r0, #4\n    bx lr"
    );
    #endif
}

void sub_0208F800(void) {
    /* Original at 0x0208F800 */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "add r1, #0x88\n    ldr r2, [r1]\n    mov r1, #0x23\n    lsl r1, r1, #8\n    add r2, r2, r1\n    mov r1, #0x59\n    lsl r1, r1, #4\n    mul r1, r0\n    add r0, r2, r1\n    bx lr"
    );
    #endif
}
