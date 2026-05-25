/* Decompiled from asm/unk_0208FB64.s */
#include "global.h"

void sub_0208FB64(void) {
    /* Original at 0x0208FB64 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _0208FB70 ; =sub_0203410C\n    add r2, r0, #0\n    ldr r0, _0208FB74 ; =_021059DC\n    mov r1, #0x6e\n    bx r3\n    nop\n    _0208FB70: .word sub_0203410C\n    _0208FB74: .word _021059DC"
    );
    #endif
}

void sub_0208FB78(void) {
    /* Original at 0x0208FB78 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _0208FB84 ; =0x00004A08\n    ldr r1, [r3, r0]\n    add r1, r1, #1\n    str r1, [r3, r0]\n    bx lr\n    nop\n    _0208FB84: .word 0x00004A08"
    );
    #endif
}

void sub_0208FB88(void) {
    /* Original at 0x0208FB88 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "cmp r0, #0\n    bne _0208FB92\n    ldrb r1, [r2]\n    ldr r0, _0208FB94 ; =0x00004A10\n    str r1, [r3, r0]\n    bx lr\n    _0208FB94: .word 0x00004A10"
    );
    #endif
}

void sub_0208FB98(void) {
    /* Original at 0x0208FB98 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, _0208FBD8 ; =0x00004A08\n    add r4, r3, #0\n    mov r1, #0\n    str r1, [r4, r0]\n    mov r1, #1\n    add r0, #0xc\n    strb r1, [r4, r0]\n    bl sub_0203769C\n    add r1, r0, #0\n    add r0, r4, #0\n    bl sub_0208FD3C\n    add r0, r4, #0\n    bl ov73_021E6B98\n    lsl r2, r5, #0x18\n    add r0, r4, #0\n    mov r1, #0x19\n    lsr r2, r2, #0x18\n    bl ov73_021E705C\n    mov r0, #1\n    add r1, r0, #0\n    bl sub_020398D4\n    ldr r0, _0208FBDC ; =0x00000657\n    bl PlaySE\n    pop {r3, r4, r5, pc}\n    _0208FBD8: .word 0x00004A08\n    _0208FBDC: .word 0x00000657"
    );
    #endif
}

void sub_0208FBE0(void) {
    /* Original at 0x0208FBE0 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "add r0, r3, #0\n    ldr r3, _0208FBEC ; =ov73_021E705C\n    mov r1, #2\n    mov r2, #0\n    bx r3\n    nop\n    _0208FBEC: .word ov73_021E705C"
    );
    #endif
}

void sub_0208FBF0(void) {
    /* Original at 0x0208FBF0 */
    /* Requires manual decompilation - 104 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #4\n    add r6, r0, #0\n    add r5, r2, #0\n    add r4, r3, #0\n    cmp r6, #0\n    beq _0208FC86\n    bl sub_0203769C\n    cmp r0, #0\n    bne _0208FCD0\n    ldrb r0, [r5]\n    add r1, sp, #0\n    strb r0, [r1]\n    ldrb r0, [r5, #1]\n    strb r0, [r1, #1]\n    ldrb r0, [r5, #2]\n    strb r0, [r1, #2]\n    ldrb r0, [r5, #3]\n    strb r0, [r1, #3]\n    ldr r0, _0208FCD4 ; =0x00004A1C\n    strb r6, [r1]\n    ldr r0, [r4, r0]\n    strb r0, [r1, #1]\n    ldrb r0, [r5, #2]\n    cmp r0, #0\n    beq _0208FC2A\n    cmp r0, #1\n    b _0208FC78\n    bl sub_02037454\n    ldr r1, _0208FCD4 ; =0x00004A1C\n    ldr r1, [r4, r1]\n    cmp r1, r0\n    bne _0208FC52\n    bl ov73_021E7488\n    ldr r1, _0208FCD4 ; =0x00004A1C\n    ldr r1, [r4, r1]\n    cmp r1, r0\n    bne _0208FC52\n    bl sub_02033250\n    bl MATH_CountPopulation\n    ldr r1, _0208FCD4 ; =0x00004A1C\n    ldr r2, [r4, r1]\n    cmp r2, r0\n    beq _0208FC5A\n    mov r1, #0\n    add r0, sp, #0\n    strb r1, [r0, #3]\n    b _0208FC78\n    add r0, r1, #0\n    add r0, #8\n    mov r2, #1\n    ldr r3, [r4, r0]\n    add r0, r2, #0\n    lsl r0, r6\n    orr r0, r3\n    add r1, #8\n    str r0, [r4, r1]\n    add r0, sp, #0\n    strb r2, [r0, #3]\n    bl sub_02037454\n    bl sub_02038C1C\n    mov r0, #0x70\n    add r1, sp, #0\n    mov r2, #4\n    bl sub_02037030\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}\n    ldrb r0, [r5, #2]\n    cmp r0, #0\n    beq _0208FC94\n    cmp r0, #1\n    beq _0208FCC6\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}\n    ldrb r6, [r5]\n    bl sub_0203769C\n    cmp r6, r0\n    bne _0208FCD0\n    ldrb r0, [r5, #3]\n    cmp r0, #0\n    bne _0208FCB2\n    add r0, r4, #0\n    mov r1, #8\n    add r2, r6, #0\n    bl ov73_021E705C\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}\n    ldrb r1, [r5, #1]\n    ldr r0, _0208FCD8 ; =0x00004A30\n    strh r1, [r4, r0]\n    ldrb r2, [r5]\n    add r0, r4, #0\n    mov r1, #7\n    bl ov73_021E705C\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}\n    ldrb r2, [r5]\n    add r0, r4, #0\n    mov r1, #0x13\n    bl ov73_021E705C\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}\n    _0208FCD4: .word 0x00004A1C\n    _0208FCD8: .word 0x00004A30"
    );
    #endif
}

void sub_0208FCDC(void) {
    /* Original at 0x0208FCDC */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldrb r2, [r2]\n    add r4, r3, #0\n    add r0, r4, #0\n    mov r1, #1\n    bl ov73_021E7120\n    bl sub_0203769C\n    cmp r0, #0\n    bne _0208FCFA\n    mov r0, #0xe1\n    mov r1, #0\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    pop {r4, pc}"
    );
    #endif
}

void sub_0208FCFC(void) {
    /* Original at 0x0208FCFC */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void sub_0208FD00(void) {
    /* Original at 0x0208FD00 */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void sub_0208FD04(void) {
    /* Original at 0x0208FD04 */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r3, #0\n    bl sub_0203769C\n    cmp r0, #0\n    beq _0208FD1A\n    add r0, r4, #0\n    mov r1, #0xd\n    mov r2, #0\n    bl ov73_021E705C\n    pop {r4, pc}"
    );
    #endif
}

void sub_0208FD1C(void) {
    /* Original at 0x0208FD1C */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    add r4, r0, #0\n    bl sub_0203769C\n    cmp r0, #0\n    bne _0208FD38\n    add r0, sp, #0\n    strb r4, [r0]\n    mov r0, #0x6e\n    add r1, sp, #0\n    mov r2, #1\n    bl sub_02037030\n    add sp, #4\n    pop {r3, r4, pc}"
    );
    #endif
}

void sub_0208FD3C(void) {
    /* Original at 0x0208FD3C */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    mov r0, #0xe2\n    mov r3, #0\n    lsl r0, r0, #2\n    add r5, r4, r0\n    add r2, r3, #0\n    sub r0, #0x9a\n    ldr r1, [r5]\n    add r2, r2, #1\n    eor r3, r1\n    add r5, r5, #4\n    cmp r2, r0\n    blt _0208FD4C\n    mov r0, #0x3d\n    lsl r0, r0, #6\n    str r3, [r4, r0]\n    bl LCRandom\n    ldr r1, _0208FD78 ; =0x00000F44\n    mov r2, #0x2f\n    str r0, [r4, r1]\n    mov r1, #0xe2\n    lsl r1, r1, #2\n    mov r0, #0x74\n    add r1, r4, r1\n    lsl r2, r2, #6\n    bl sub_02036FD8\n    pop {r3, r4, r5, pc}\n    _0208FD78: .word 0x00000F44"
    );
    #endif
}

u8 sub_0208FD7C(void) {
    return 0;
}

u8 sub_0208FD80(void) {
    return 1;
}

u8 sub_0208FD84(void) {
    return 4;
}

void sub_0208FD88(void) {
    /* Original at 0x0208FD88 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "ldr r2, _0208FD98 ; =0x00000F48\n    add r2, r1, r2\n    mov r1, #0x2f\n    lsl r1, r1, #6\n    mul r1, r0\n    add r0, r2, r1\n    bx lr\n    nop\n    _0208FD98: .word 0x00000F48"
    );
    #endif
}
