/* Decompiled from asm/unk_0208F814.s */
#include "global.h"

void sub_0208F814(void) {
    /* Original at 0x0208F814 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _0208F820 ; =sub_0203410C\n    add r2, r0, #0\n    ldr r0, _0208F824 ; =_021054B4\n    mov r1, #0x6e\n    bx r3\n    nop\n    _0208F820: .word sub_0203410C\n    _0208F824: .word _021054B4"
    );
    #endif
}

void sub_0208F828(void) {
    /* Original at 0x0208F828 */
    /* Requires manual decompilation - 65 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r2, #0\n    add r4, r3, #0\n    bl sub_0203769C\n    cmp r0, #0\n    beq _0208F886\n    mov r3, #0xfb\n    lsl r3, r3, #2\n    ldrb r2, [r5, r3]\n    sub r0, r3, #4\n    add r1, r2, #0\n    mul r1, r0\n    mov r0, #0xe1\n    lsl r0, r0, #6\n    cmp r1, r0\n    ldr r2, _0208F8B4 ; =0x000043D0\n    ble _0208F85C\n    add r2, r4, r2\n    add r1, r2, r1\n    mov r2, #0x19\n    add r0, r5, #0\n    lsl r2, r2, #4\n    bl MIi_CpuCopyFast\n    b _0208F868\n    add r2, r4, r2\n    add r1, r2, r1\n    add r0, r5, #0\n    sub r2, r3, #4\n    bl MIi_CpuCopyFast\n    mov r1, #0xb5\n    ldr r0, _0208F8B4 ; =0x000043D0\n    lsl r1, r1, #2\n    mov r2, #0xe1\n    ldr r1, [r4, r1]\n    add r0, r4, r0\n    lsl r2, r2, #6\n    bl MIi_CpuCopyFast\n    mov r0, #0xb2\n    lsl r0, r0, #2\n    add r0, r4, r0\n    bl CopyWindowToVram\n    pop {r3, r4, r5, pc}\n    ldr r1, _0208F8B8 ; =0x000043CC\n    mov r0, #0xfa\n    ldr r2, [r4, r1]\n    lsl r0, r0, #2\n    add r3, r2, #0\n    mul r3, r0\n    mov r0, #0xe1\n    lsl r0, r0, #6\n    cmp r3, r0\n    bge _0208F8A8\n    add r0, r2, #1\n    str r0, [r4, r1]\n    ldr r1, [r4, r1]\n    add r0, r4, #0\n    bl sub_0208FAF8\n    pop {r3, r4, r5, pc}\n    mov r1, #0\n    mov r0, #0x7c\n    add r2, r1, #0\n    bl sub_02037108\n    pop {r3, r4, r5, pc}\n    _0208F8B4: .word 0x000043D0\n    _0208F8B8: .word 0x000043CC"
    );
    #endif
}

void sub_0208F8BC(void) {
    /* Original at 0x0208F8BC */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    cmp r0, #0\n    beq _0208F8DA\n    add r4, r0, #0\n    mov r1, #0xa\n    mul r4, r1\n    ldr r0, _0208F8E0 ; =0x000093BD\n    add r3, r3, r4\n    add r3, r3, r0\n    ldrb r0, [r2]\n    add r2, r2, #1\n    strb r0, [r3]\n    add r3, r3, #1\n    sub r1, r1, #1\n    bne _0208F8CE\n    pop {r3, r4}\n    bx lr\n    nop\n    _0208F8E0: .word 0x000093BD"
    );
    #endif
}

void sub_0208F8E4(void) {
    /* Original at 0x0208F8E4 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7}\n    cmp r3, #0\n    beq _0208F90E\n    cmp r0, #0\n    bne _0208F90E\n    ldr r0, _0208F914 ; =0x00004382\n    mov r7, #0\n    add r6, r2, #0\n    add r5, r3, r0\n    mov r4, #0xa\n    ldrb r1, [r6]\n    add r6, r6, #1\n    strb r1, [r5]\n    add r5, r5, #1\n    sub r4, r4, #1\n    bne _0208F8F8\n    add r7, r7, #1\n    add r2, #0xa\n    add r3, #0xa\n    cmp r7, #5\n    blt _0208F8F2\n    pop {r4, r5, r6, r7}\n    bx lr\n    nop\n    _0208F914: .word 0x00004382"
    );
    #endif
}

void sub_0208F918(void) {
    /* Original at 0x0208F918 */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r3, #0\n    add r0, r4, #0\n    mov r1, #3\n    mov r2, #0\n    bl ov37_021E6FC8\n    ldr r1, _0208F958 ; =0x000043D0\n    mov r2, #0xe1\n    mov r0, #0\n    add r1, r4, r1\n    lsl r2, r2, #6\n    bl MIi_CpuClearFast\n    bl sub_0203769C\n    cmp r0, #0\n    bne _0208F956\n    bl sub_02037454\n    mov r1, #0xc6\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    bl sub_02033250\n    mov r1, #0xc7\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    ldr r0, _0208F95C ; =0x000093F4\n    mov r1, #1\n    str r1, [r4, r0]\n    pop {r4, pc}\n    _0208F958: .word 0x000043D0\n    _0208F95C: .word 0x000093F4"
    );
    #endif
}

void sub_0208F960(void) {
    /* Original at 0x0208F960 */
    /* Requires manual decompilation - 106 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #4\n    add r6, r0, #0\n    add r5, r2, #0\n    add r4, r3, #0\n    cmp r6, #0\n    beq _0208F9FA\n    bl sub_0203769C\n    cmp r0, #0\n    bne _0208FA44\n    ldrb r0, [r5]\n    add r1, sp, #0\n    strb r0, [r1]\n    ldrb r0, [r5, #1]\n    strb r0, [r1, #1]\n    ldrb r0, [r5, #2]\n    strb r0, [r1, #2]\n    ldrb r0, [r5, #3]\n    strb r0, [r1, #3]\n    mov r0, #0xc6\n    strb r6, [r1]\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    strb r0, [r1, #1]\n    ldrb r0, [r5, #2]\n    cmp r0, #0\n    beq _0208F99C\n    cmp r0, #1\n    b _0208F9EC\n    bl sub_02037454\n    mov r1, #0xc6\n    lsl r1, r1, #2\n    ldr r1, [r4, r1]\n    cmp r1, r0\n    bne _0208F9CA\n    bl ov37_021E75E0\n    mov r1, #0xc6\n    lsl r1, r1, #2\n    ldr r1, [r4, r1]\n    cmp r1, r0\n    bne _0208F9CA\n    bl sub_02033250\n    bl MATH_CountPopulation\n    mov r1, #0xc6\n    lsl r1, r1, #2\n    ldr r1, [r4, r1]\n    cmp r1, r0\n    beq _0208F9D2\n    mov r1, #0\n    add r0, sp, #0\n    strb r1, [r0, #3]\n    b _0208F9EC\n    ldr r0, _0208FA48 ; =0x000093B4\n    mov r1, #1\n    add r2, r1, #0\n    ldr r3, [r4, r0]\n    lsl r2, r6\n    orr r2, r3\n    str r2, [r4, r0]\n    add r0, sp, #0\n    strb r1, [r0, #3]\n    bl sub_02037454\n    bl sub_02038C1C\n    mov r0, #0x7e\n    add r1, sp, #0\n    mov r2, #4\n    bl sub_02037108\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}\n    ldrb r0, [r5, #2]\n    cmp r0, #0\n    beq _0208FA08\n    cmp r0, #1\n    beq _0208FA3A\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}\n    ldrb r6, [r5]\n    bl sub_0203769C\n    cmp r6, r0\n    bne _0208FA44\n    ldrb r0, [r5, #3]\n    cmp r0, #0\n    bne _0208FA26\n    add r0, r4, #0\n    mov r1, #9\n    add r2, r6, #0\n    bl ov37_021E6FC8\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}\n    ldrb r1, [r5, #1]\n    ldr r0, _0208FA4C ; =0x000093B8\n    strh r1, [r4, r0]\n    ldrb r2, [r5]\n    add r0, r4, #0\n    mov r1, #8\n    bl ov37_021E6FC8\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}\n    ldrb r2, [r5]\n    add r0, r4, #0\n    mov r1, #0x15\n    bl ov37_021E6FC8\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}\n    _0208FA48: .word 0x000093B4\n    _0208FA4C: .word 0x000093B8"
    );
    #endif
}

void sub_0208FA50(void) {
    /* Original at 0x0208FA50 */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void sub_0208FA54(void) {
    /* Original at 0x0208FA54 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldrb r2, [r2]\n    add r4, r3, #0\n    add r0, r4, #0\n    mov r1, #1\n    bl ov37_021E6FC8\n    bl sub_0203769C\n    cmp r0, #0\n    bne _0208FA82\n    mov r0, #3\n    lsl r0, r0, #8\n    ldr r0, [r4, r0]\n    cmp r0, #1\n    bne _0208FA82\n    ldr r1, _0208FA84 ; =0x000043CC\n    mov r0, #0\n    str r0, [r4, r1]\n    ldr r1, [r4, r1]\n    add r0, r4, #0\n    bl sub_0208FAF8\n    pop {r4, pc}\n    _0208FA84: .word 0x000043CC"
    );
    #endif
}

void sub_0208FA88(void) {
    /* Original at 0x0208FA88 */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void sub_0208FA8C(void) {
    /* Original at 0x0208FA8C */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void sub_0208FA90(void) {
    /* Original at 0x0208FA90 */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r3, #0\n    bl sub_0203769C\n    cmp r0, #0\n    beq _0208FAA6\n    add r0, r4, #0\n    mov r1, #0xf\n    mov r2, #0\n    bl ov37_021E6FC8\n    pop {r4, pc}"
    );
    #endif
}

void sub_0208FAA8(void) {
    /* Original at 0x0208FAA8 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r3, #0\n    bl sub_0203769C\n    cmp r0, #0\n    beq _0208FABA\n    bl GF_AssertFail\n    bl sub_0203769C\n    cmp r0, #0\n    bne _0208FADE\n    ldr r0, _0208FAE8 ; =0x000093FC\n    ldr r1, [r4, r0]\n    cmp r1, #0\n    beq _0208FADA\n    add r0, sp, #0\n    strb r5, [r0]\n    mov r0, #0x7b\n    add r1, sp, #0\n    mov r2, #1\n    bl sub_02037108\n    b _0208FADE\n    mov r1, #1\n    str r1, [r4, r0]\n    mov r0, #0\n    mov r1, #1\n    bl sub_020398D4\n    pop {r3, r4, r5, pc}\n    _0208FAE8: .word 0x000093FC"
    );
    #endif
}

void sub_0208FAEC(void) {
    /* Original at 0x0208FAEC */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _0208FAF4 ; =0x000093F4\n    mov r1, #1\n    str r1, [r3, r0]\n    bx lr\n    _0208FAF4: .word 0x000093F4"
    );
    #endif
}

void sub_0208FAF8(void) {
    /* Original at 0x0208FAF8 */
    /* Requires manual decompilation - 38 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r0, #0xb5\n    mov r2, #0xfa\n    add r4, r1, #0\n    lsl r0, r0, #2\n    ldr r1, [r5, r0]\n    lsl r2, r2, #2\n    add r0, r4, #0\n    mul r0, r2\n    add r0, r1, r0\n    ldr r1, _0208FB44 ; =0x00007C10\n    add r1, r5, r1\n    bl MIi_CpuCopyFast\n    ldr r0, _0208FB44 ; =0x00007C10\n    mov r2, #0\n    add r1, r2, #0\n    add r3, r5, r0\n    ldr r0, [r3]\n    add r1, r1, #1\n    eor r2, r0\n    add r3, r3, #4\n    cmp r1, #0xfa\n    blt _0208FB1E\n    ldr r0, _0208FB48 ; =0x00007FF8\n    ldr r1, _0208FB44 ; =0x00007C10\n    str r2, [r5, r0]\n    add r0, r0, #4\n    mov r2, #0x3f\n    strb r4, [r5, r0]\n    mov r0, #0x76\n    add r1, r5, r1\n    lsl r2, r2, #4\n    bl sub_02037088\n    pop {r3, r4, r5, pc}\n    nop\n    _0208FB44: .word 0x00007C10\n    _0208FB48: .word 0x00007FF8"
    );
    #endif
}

void sub_0208FB4C(void) {
    /* Original at 0x0208FB4C */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "mov r2, #2\n    lsl r2, r2, #0xe\n    add r2, r1, r2\n    mov r1, #0x3f\n    lsl r1, r1, #4\n    mul r1, r0\n    add r0, r2, r1\n    bx lr"
    );
    #endif
}

u8 sub_0208FB5C(void) {
    return 4;
}

u8 sub_0208FB60(void) {
    return 4;
}
