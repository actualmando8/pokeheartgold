/* Decompiled from asm/unk_02033AE0.s */
#include "global.h"

void sub_02033AE0(void) {
    /* Original at 0x02033AE0 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "str r1, [r0]\n    strh r2, [r0, #0xa]\n    mov r1, #0\n    strh r1, [r0, #4]\n    strh r1, [r0, #6]\n    strh r1, [r0, #8]\n    bx lr"
    );
    #endif
}

void sub_02033AF0(void) {
    /* Original at 0x02033AF0 */
    /* Requires manual decompilation - 40 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    str r2, [sp]\n    add r5, r0, #0\n    add r7, r1, #0\n    bl sub_02033BF4\n    ldr r1, [sp]\n    cmp r0, r1\n    bgt _02033B08\n    bl sub_02037974\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #8\n    ldrsh r4, [r5, r0]\n    ldrsh r1, [r5, r0]\n    ldr r0, [sp]\n    mov r6, #0\n    add r0, r1, r0\n    cmp r4, r0\n    bge _02033B3E\n    cmp r7, #0\n    bne _02033B20\n    bl GF_AssertFail\n    add r0, r5, #0\n    add r1, r4, #0\n    bl sub_02033C14\n    ldrb r2, [r7, r6]\n    ldr r1, [r5]\n    add r4, r4, #1\n    strb r2, [r1, r0]\n    mov r0, #8\n    ldrsh r1, [r5, r0]\n    ldr r0, [sp]\n    add r6, r6, #1\n    add r0, r1, r0\n    cmp r4, r0\n    blt _02033B18\n    add r0, r5, #0\n    add r1, r4, #0\n    bl sub_02033C14\n    strh r0, [r5, #8]\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_02033B4C(void) {
    /* Original at 0x02033B4C */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    bl sub_02033B78\n    mov r1, #4\n    add r4, r0, #0\n    ldrsh r1, [r5, r1]\n    add r0, r5, #0\n    add r1, r1, r4\n    bl sub_02033C14\n    strh r0, [r5, #4]\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_02033B68(void) {
    sub_02033B4C();
}

void sub_02033B78(void) {
    /* Original at 0x02033B78 */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    mov r0, #4\n    ldrsh r4, [r5, r0]\n    add r7, r2, #0\n    str r1, [sp]\n    add r0, r4, r7\n    mov r6, #0\n    cmp r4, r0\n    bge _02033BBE\n    add r0, r5, #0\n    add r1, r4, #0\n    bl sub_02033C14\n    mov r1, #6\n    ldrsh r1, [r5, r1]\n    cmp r1, r0\n    bne _02033BA0\n    add r0, r6, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r5, #0\n    add r1, r4, #0\n    bl sub_02033C14\n    ldr r1, [r5]\n    add r4, r4, #1\n    ldrb r1, [r1, r0]\n    ldr r0, [sp]\n    strb r1, [r0, r6]\n    mov r0, #4\n    ldrsh r0, [r5, r0]\n    add r6, r6, #1\n    add r0, r0, r7\n    cmp r4, r0\n    blt _02033B8C\n    add r0, r6, #0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_02033BC4(void) {
    /* Original at 0x02033BC4 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #4\n    mov r3, #6\n    ldrsh r1, [r0, r1]\n    ldrsh r2, [r0, r3]\n    cmp r1, r2\n    ble _02033BDC\n    mov r2, #0xa\n    ldrsh r2, [r0, r2]\n    ldrsh r0, [r0, r3]\n    add r0, r2, r0\n    sub r0, r0, r1\n    bx lr\n    ldrsh r0, [r0, r3]\n    sub r0, r0, r1\n    bx lr"
    );
    #endif
}

void sub_02033BE4(void) {
    sub_02033BC4();
}

void sub_02033BF4(void) {
    /* Original at 0x02033BF4 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #4\n    mov r2, #8\n    ldrsh r3, [r0, r1]\n    ldrsh r1, [r0, r2]\n    cmp r3, r1\n    ble _02033C06\n    ldrsh r0, [r0, r2]\n    sub r0, r3, r0\n    bx lr\n    mov r1, #0xa\n    ldrsh r1, [r0, r1]\n    ldrsh r0, [r0, r2]\n    sub r0, r0, r3\n    sub r0, r1, r0\n    bx lr"
    );
    #endif
}

void sub_02033C14(void) {
    _s32_div_f(0xa);
}

void sub_02033C28(void) {
    /* Original at 0x02033C28 */
    /* Requires manual decompilation - 4 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #8\n    ldrsh r1, [r0, r1]\n    strh r1, [r0, #6]\n    bx lr"
    );
    #endif
}

void sub_02033C30(void) {
    /* Original at 0x02033C30 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, [r0, #0x1c]\n    mov r2, #0\n    ldr r1, [r0, #0x18]\n    cmp r3, #0\n    ble _02033C4C\n    ldrb r0, [r1, #0xe]\n    cmp r0, #0\n    bne _02033C44\n    add r0, r1, #0\n    bx lr\n    add r2, r2, #1\n    add r1, #0x10\n    cmp r2, r3\n    blt _02033C3A\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void sub_02033C50(void) {
    /* Original at 0x02033C50 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, [r0, #0x1c]\n    mov r2, #0\n    ldr r1, [r0, #0x18]\n    cmp r3, #0\n    ble _02033C6C\n    ldrb r0, [r1, #0xe]\n    cmp r0, #0\n    beq _02033C64\n    mov r0, #0\n    bx lr\n    add r2, r2, #1\n    add r1, #0x10\n    cmp r2, r3\n    blt _02033C5A\n    mov r0, #1\n    bx lr"
    );
    #endif
}

void sub_02033C70(void) {
    /* Original at 0x02033C70 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, [r0]\n    cmp r1, #0\n    beq _02033C8E\n    ldr r1, [r1, #8]\n    cmp r1, #0\n    beq _02033C84\n    str r1, [r0]\n    mov r0, #0\n    str r0, [r1, #4]\n    b _02033C8A\n    mov r1, #0\n    str r1, [r0]\n    str r1, [r0, #4]\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void sub_02033C94(void) {
    /* Original at 0x02033C94 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "ldr r2, [r0]\n    strb r1, [r2]\n    ldr r1, [r0]\n    add r1, r1, #1\n    str r1, [r0]\n    ldr r1, [r0, #4]\n    sub r1, r1, #1\n    str r1, [r0, #4]\n    bne _02033CAA\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void sub_02033CB0(void) {
    /* Original at 0x02033CB0 */
    /* Requires manual decompilation - 55 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldrb r0, [r5, #0xe]\n    add r4, r1, #0\n    bl sub_020341DC\n    add r6, r0, #0\n    ldr r0, _02033D24 ; =0x0000FFFF\n    cmp r6, r0\n    ldr r0, [r4, #4]\n    bne _02033CD6\n    cmp r0, #3\n    bge _02033CE6\n    ldrb r1, [r5, #0xf]\n    mov r0, #1\n    bic r1, r0\n    strb r1, [r5, #0xf]\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    cmp r0, #1\n    bge _02033CE6\n    ldrb r1, [r5, #0xf]\n    mov r0, #1\n    bic r1, r0\n    strb r1, [r5, #0xf]\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    ldrb r1, [r5, #0xe]\n    add r0, r4, #0\n    bl sub_02033C94\n    ldr r0, _02033D24 ; =0x0000FFFF\n    cmp r6, r0\n    bne _02033D10\n    ldrh r1, [r5, #0xc]\n    add r0, r4, #0\n    asr r1, r1, #8\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    bl sub_02033C94\n    ldrh r1, [r5, #0xc]\n    add r0, r4, #0\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    bl sub_02033C94\n    b _02033D12\n    strh r6, [r5, #0xc]\n    ldrb r1, [r5, #0xf]\n    mov r0, #1\n    bic r1, r0\n    mov r0, #1\n    orr r0, r1\n    strb r0, [r5, #0xf]\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    nop\n    _02033D24: .word 0x0000FFFF"
    );
    #endif
}

void sub_02033D28(void) {
    /* Original at 0x02033D28 */
    /* Requires manual decompilation - 94 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldrb r0, [r5, #0xe]\n    add r4, r1, #0\n    add r6, r2, #0\n    add r7, r3, #0\n    bl sub_020341DC\n    ldr r1, _02033DEC ; =0x0000FFFF\n    cmp r0, r1\n    bne _02033D42\n    mov r2, #3\n    b _02033D44\n    mov r2, #1\n    ldrh r0, [r5, #0xc]\n    ldr r1, [r4, #4]\n    add r0, r0, r2\n    cmp r1, r0\n    bge _02033D56\n    cmp r7, #0\n    bne _02033D56\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldrb r0, [r5, #0xf]\n    lsl r0, r0, #0x1f\n    lsr r0, r0, #0x1f\n    cmp r0, #1\n    beq _02033D70\n    add r0, r5, #0\n    add r1, r4, #0\n    bl sub_02033CB0\n    cmp r0, #0\n    beq _02033D70\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldrh r3, [r5, #0xc]\n    ldr r2, [r4, #4]\n    cmp r2, r3\n    ldrb r0, [r5, #0xf]\n    bge _02033DBA\n    lsl r0, r0, #0x1e\n    lsr r0, r0, #0x1f\n    beq _02033D8A\n    ldr r1, [r4]\n    add r0, r6, #0\n    bl sub_02033B4C\n    b _02033DA0\n    mov r3, #0\n    cmp r2, #0\n    ble _02033DA0\n    ldr r0, [r5]\n    ldrb r1, [r0, r3]\n    ldr r0, [r4]\n    strb r1, [r0, r3]\n    ldr r0, [r4, #4]\n    add r3, r3, #1\n    cmp r3, r0\n    blt _02033D90\n    ldr r1, [r5]\n    ldr r0, [r4, #4]\n    add r0, r1, r0\n    str r0, [r5]\n    ldrh r1, [r5, #0xc]\n    ldr r0, [r4, #4]\n    sub r0, r1, r0\n    strh r0, [r5, #0xc]\n    mov r0, #0\n    mvn r0, r0\n    str r0, [r4, #4]\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    lsl r0, r0, #0x1e\n    lsr r0, r0, #0x1f\n    beq _02033DCC\n    ldr r1, [r4]\n    add r0, r6, #0\n    add r2, r3, #0\n    bl sub_02033B4C\n    b _02033DD6\n    ldr r0, [r5]\n    ldr r1, [r4]\n    add r2, r3, #0\n    bl MI_CpuCopy8\n    ldrh r0, [r5, #0xc]\n    ldr r1, [r4]\n    add r0, r1, r0\n    str r0, [r4]\n    ldrh r0, [r5, #0xc]\n    ldr r1, [r4, #4]\n    sub r0, r1, r0\n    str r0, [r4, #4]\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02033DEC: .word 0x0000FFFF"
    );
    #endif
}

void sub_02033DF0(void) {
    /* Original at 0x02033DF0 */
    /* Requires manual decompilation - 67 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r5, r0, #0\n    str r1, [sp]\n    str r2, [sp, #4]\n    add r7, r3, #0\n    bl sub_02033C30\n    add r4, r0, #0\n    bne _02033E0A\n    add sp, #8\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, _02033E7C ; =0x0000FFFE\n    cmp r7, r0\n    blt _02033E14\n    bl GF_AssertFail\n    ldr r0, [sp]\n    bl sub_020341DC\n    add r6, r0, #0\n    ldr r0, _02033E80 ; =0x0000FFFF\n    cmp r6, r0\n    bne _02033E24\n    add r6, r7, #0\n    ldr r0, [sp, #0x24]\n    cmp r0, #0\n    beq _02033E56\n    ldr r0, [r5, #0x14]\n    bl sub_02033BE4\n    add r1, r6, #3\n    cmp r1, r0\n    blt _02033E3C\n    add sp, #8\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [r5, #0x14]\n    ldr r1, [sp, #4]\n    ldr r3, _02033E84 ; =0x00000109\n    add r2, r6, #0\n    bl sub_02033AF0\n    ldr r0, [r5, #0x14]\n    bl sub_02033C28\n    ldrb r1, [r4, #0xf]\n    mov r0, #2\n    orr r0, r1\n    strb r0, [r4, #0xf]\n    ldr r0, [sp]\n    strh r6, [r4, #0xc]\n    strb r0, [r4, #0xe]\n    ldr r0, [sp, #4]\n    str r0, [r4]\n    ldr r0, [r5, #4]\n    cmp r0, #0\n    bne _02033E6C\n    str r4, [r5, #4]\n    str r4, [r5]\n    b _02033E74\n    str r4, [r0, #8]\n    ldr r0, [r5, #4]\n    str r0, [r4, #4]\n    str r4, [r5, #4]\n    mov r0, #1\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02033E7C: .word 0x0000FFFE\n    _02033E80: .word 0x0000FFFF\n    _02033E84: .word 0x00000109"
    );
    #endif
}

void sub_02033E88(void) {
    /* Original at 0x02033E88 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, [r0, #0x10]\n    cmp r1, #0\n    beq _02033E92\n    add r0, r1, #0\n    bx lr\n    ldr r1, [r0]\n    cmp r1, #0\n    beq _02033E9C\n    add r0, r1, #0\n    bx lr\n    ldr r0, [r0, #8]\n    cmp r0, #0\n    bne _02033EA4\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void sub_02033EA8(void) {
    /* Original at 0x02033EA8 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r1, [r4, #0x10]\n    cmp r1, #0\n    beq _02033EB8\n    mov r0, #0\n    str r0, [r4, #0x10]\n    pop {r4, pc}\n    bl sub_02033C70\n    cmp r0, #0\n    bne _02033EC8\n    add r4, #8\n    add r0, r4, #0\n    bl sub_02033C70\n    pop {r4, pc}"
    );
    #endif
}

void sub_02033ECC(void) {
    /* Original at 0x02033ECC */
    /* Requires manual decompilation - 55 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    ldr r0, [r4, #4]\n    mov r7, #1\n    str r2, [sp]\n    cmp r0, #0\n    ble _02033F22\n    add r0, r5, #0\n    bl sub_02033E88\n    add r6, r0, #0\n    beq _02033F22\n    add r0, r5, #0\n    bl sub_02033EA8\n    ldr r2, [r5, #0x14]\n    add r0, r6, #0\n    add r1, r4, #0\n    add r3, r7, #0\n    bl sub_02033D28\n    cmp r0, #0\n    bne _02033F00\n    str r6, [r5, #0x10]\n    b _02033F22\n    mov r0, #0\n    ldr r1, [r4, #4]\n    mvn r0, r0\n    cmp r1, r0\n    bne _02033F10\n    str r6, [r5, #0x10]\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r6, #0\n    mov r1, #0\n    mov r2, #0x10\n    bl MI_CpuFill8\n    ldr r0, [r4, #4]\n    ldr r7, [sp]\n    cmp r0, #0\n    bgt _02033EDC\n    ldr r0, [r4, #4]\n    mov r2, #0\n    cmp r0, #0\n    ble _02033F3E\n    mov r1, #0xee\n    ldr r0, [r4]\n    add r2, r2, #1\n    strb r1, [r0]\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    ldr r0, [r4, #4]\n    cmp r2, r0\n    blt _02033F2C\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_02033F44(void) {
    /* Original at 0x02033F44 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r4, r1, #0\n    add r6, r2, #0\n    mov r1, #0\n    mov r2, #0x20\n    add r5, r0, #0\n    bl MI_CpuFill8\n    lsl r7, r4, #4\n    mov r0, #0xf\n    add r1, r7, #0\n    bl Heap_Alloc\n    mov r1, #0\n    add r2, r7, #0\n    str r0, [r5, #0x18]\n    bl MI_CpuFill8\n    str r4, [r5, #0x1c]\n    str r6, [r5, #0x14]\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_02033F70(void) {
    MI_CpuFill8(0, 0);
}

void sub_02033F90(void) {
    Heap_Free();
}

void sub_02033F9C(void) {
    /* Original at 0x02033F9C */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    ldr r4, [r0, #0x1c]\n    mov r2, #0\n    ldr r3, [r0, #0x18]\n    cmp r4, #0\n    ble _02033FBC\n    ldrb r0, [r3, #0xe]\n    cmp r0, r1\n    bne _02033FB4\n    mov r0, #1\n    pop {r3, r4}\n    bx lr\n    add r2, r2, #1\n    add r3, #0x10\n    cmp r2, r4\n    blt _02033FA8\n    mov r0, #0\n    pop {r3, r4}\n    bx lr"
    );
    #endif
}

void sub_02033FC4(void) {
    /* Original at 0x02033FC4 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0x2c\n    ldr r3, _02033FEC ; =_020F692C\n    add r4, r0, #0\n    add r2, sp, #0\n    mov r1, #0x29\n    ldrb r0, [r3]\n    add r3, r3, #1\n    strb r0, [r2]\n    add r2, r2, #1\n    sub r1, r1, #1\n    bne _02033FD0\n    cmp r4, #0x29\n    blo _02033FE4\n    bl GF_AssertFail\n    add r0, sp, #0\n    ldrb r0, [r0, r4]\n    add sp, #0x2c\n    pop {r3, r4, pc}\n    _02033FEC: .word _020F692C"
    );
    #endif
}

void sub_02033FF0(void) {
    /* Original at 0x02033FF0 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0x2c\n    ldr r3, _02034018 ; =_020F6955\n    add r4, r0, #0\n    add r2, sp, #0\n    mov r1, #0x29\n    ldrb r0, [r3]\n    add r3, r3, #1\n    strb r0, [r2]\n    add r2, r2, #1\n    sub r1, r1, #1\n    bne _02033FFC\n    cmp r4, #0x29\n    blo _02034010\n    bl GF_AssertFail\n    add r0, sp, #0\n    ldrb r0, [r0, r4]\n    add sp, #0x2c\n    pop {r3, r4, pc}\n    _02034018: .word _020F6955"
    );
    #endif
}

void sub_0203401C(void) {
    /* Original at 0x0203401C */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "cmp r0, #0x12\n    bgt _02034036\n    bge _0203403A\n    cmp r0, #0xd\n    bgt _0203403E\n    cmp r0, #7\n    blt _0203403E\n    beq _0203403A\n    cmp r0, #9\n    beq _0203403A\n    cmp r0, #0xd\n    beq _0203403A\n    b _0203403E\n    cmp r0, #0x1a\n    bne _0203403E\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void sub_02034044(void) {
    /* Original at 0x02034044 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "sub r0, #0x13\n    cmp r0, #0x11\n    bhi _0203407E\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02034056: ; jump table\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void sub_02034084(void) {
    /* Original at 0x02034084 */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "cmp r0, #0x1d\n    beq _02034090\n    cmp r0, #0x21\n    beq _02034090\n    cmp r0, #0x23\n    bne _02034094\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void sub_02034098(void) {
    /* Original at 0x02034098 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "cmp r0, #0x17\n    bgt _020340B8\n    add r1, r0, #0\n    sub r1, #0x13\n    bmi _020340C0\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _020340AE: ; jump table\n    cmp r0, #0x22\n    bne _020340C0\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void sub_020340C4(void) {
    /* Original at 0x020340C4 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "cmp r0, #0x26\n    bgt _020340F6\n    bge _02034102\n    cmp r0, #8\n    bgt _020340F0\n    cmp r0, #0\n    blt _02034106\n    add r1, r0, r0\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _020340DE: ; jump table\n    cmp r0, #0x25\n    beq _02034102\n    b _02034106\n    cmp r0, #0x27\n    bgt _020340FE\n    beq _02034102\n    b _02034106\n    cmp r0, #0x28\n    bne _02034106\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void sub_0203410C(void) {
    /* Original at 0x0203410C */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r0, _02034150 ; =_021D412C\n    add r4, r1, #0\n    ldr r0, [r0]\n    add r6, r2, #0\n    cmp r0, #0\n    bne _02034128\n    mov r0, #0xf\n    mov r1, #0x18\n    bl Heap_Alloc\n    ldr r1, _02034150 ; =_021D412C\n    str r0, [r1]\n    ldr r0, _02034150 ; =_021D412C\n    mov r3, #0\n    ldr r1, [r0]\n    add r2, r3, #0\n    str r5, [r1]\n    ldr r1, [r0]\n    str r4, [r1, #4]\n    ldr r1, [r0]\n    str r6, [r1, #8]\n    ldr r1, [r0]\n    add r1, r1, r3\n    add r3, r3, #1\n    strb r2, [r1, #0xc]\n    cmp r3, #8\n    blt _0203413A\n    ldr r0, _02034150 ; =_021D412C\n    ldr r0, [r0]\n    strb r2, [r0, #0x14]\n    pop {r4, r5, r6, pc}\n    nop\n    _02034150: .word _021D412C"
    );
    #endif
}

void sub_02034154(void) {
    Heap_Free(0);
}

void sub_02034170(void) {
    /* Original at 0x02034170 */
    /* Requires manual decompilation - 50 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    add r6, r2, #0\n    add r7, r3, #0\n    cmp r4, #0x16\n    bge _02034188\n    mov r0, #0xc\n    mul r1, r0\n    ldr r0, _020341D4 ; =_020F6980\n    ldr r4, [r0, r1]\n    b _020341B0\n    ldr r0, _020341D8 ; =_021D412C\n    ldr r0, [r0]\n    cmp r0, #0\n    bne _02034194\n    bl GF_AssertFail\n    ldr r0, _020341D8 ; =_021D412C\n    ldr r1, [r0]\n    ldr r0, [r1, #4]\n    add r0, #0x16\n    cmp r4, r0\n    ble _020341A6\n    bl sub_02037974\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r1, [r1]\n    sub r4, #0x16\n    mov r0, #0xc\n    mul r0, r4\n    ldr r4, [r1, r0]\n    cmp r4, #0\n    beq _020341D2\n    ldr r0, _020341D8 ; =_021D412C\n    ldr r3, [r0]\n    cmp r3, #0\n    beq _020341C8\n    ldr r3, [r3, #8]\n    add r0, r5, #0\n    add r1, r6, #0\n    add r2, r7, #0\n    blx r4\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r5, #0\n    add r1, r6, #0\n    add r2, r7, #0\n    mov r3, #0\n    blx r4\n    pop {r3, r4, r5, r6, r7, pc}\n    _020341D4: .word _020F6980\n    _020341D8: .word _021D412C"
    );
    #endif
}

void sub_020341DC(void) {
    /* Original at 0x020341DC */
    /* Requires manual decompilation - 46 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r4, #0\n    cmp r5, #0x16\n    bge _020341F2\n    mov r0, #0xc\n    add r1, r5, #0\n    mul r1, r0\n    ldr r0, _0203423C ; =_020F6980 + 4\n    ldr r0, [r0, r1]\n    b _0203422E\n    ldr r0, _02034240 ; =_021D412C\n    ldr r0, [r0]\n    cmp r0, #0\n    bne _020341FE\n    bl GF_AssertFail\n    ldr r0, _02034240 ; =_021D412C\n    ldr r1, [r0]\n    cmp r1, #0\n    bne _0203420E\n    bl sub_02037974\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    ldr r0, [r1, #4]\n    add r0, #0x16\n    cmp r5, r0\n    ble _02034222\n    bl GF_AssertFail\n    bl sub_02037974\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    ldr r1, [r1]\n    sub r5, #0x16\n    mov r0, #0xc\n    mul r0, r5\n    add r0, r1, r0\n    ldr r0, [r0, #4]\n    cmp r0, #0\n    beq _02034236\n    blx r0\n    add r4, r0, #0\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}\n    nop\n    _0203423C: .word _020F6980 + 4\n    _02034240: .word _021D412C"
    );
    #endif
}

void sub_02034244(void) {
    /* Original at 0x02034244 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "cmp r0, #0x16\n    bge _0203425C\n    mov r1, #0xc\n    mul r1, r0\n    ldr r0, _02034278 ; =_020F6980 + 8\n    ldr r0, [r0, r1]\n    cmp r0, #0\n    beq _02034258\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr\n    ldr r1, _0203427C ; =_021D412C\n    sub r0, #0x16\n    ldr r1, [r1]\n    ldr r2, [r1]\n    mov r1, #0xc\n    mul r1, r0\n    add r0, r2, r1\n    ldr r0, [r0, #8]\n    cmp r0, #0\n    beq _02034274\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr\n    _02034278: .word _020F6980 + 8\n    _0203427C: .word _021D412C"
    );
    #endif
}

void sub_02034280(void) {
    /* Original at 0x02034280 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r3, r0, #0\n    cmp r3, #0x16\n    bge _02034298\n    mov r4, #0xc\n    mul r4, r3\n    ldr r3, _020342B0 ; =_020F6980 + 8\n    add r0, r1, #0\n    ldr r3, [r3, r4]\n    mov r1, #0\n    blx r3\n    pop {r3, r4, r5, pc}\n    ldr r0, _020342B4 ; =_021D412C\n    sub r3, #0x16\n    ldr r4, [r0]\n    add r0, r1, #0\n    ldr r1, [r4, #8]\n    ldr r5, [r4]\n    mov r4, #0xc\n    mul r4, r3\n    add r3, r5, r4\n    ldr r3, [r3, #8]\n    blx r3\n    pop {r3, r4, r5, pc}\n    _020342B0: .word _020F6980 + 8\n    _020342B4: .word _021D412C"
    );
    #endif
}

void sub_020342B8(void) {
    /* Original at 0x020342B8 */
    /* Requires manual decompilation - 3 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _020342BC ; =0x0000FFFF\n    bx lr\n    _020342BC: .word 0x0000FFFF"
    );
    #endif
}

u8 sub_020342C0(void) {
    return 0;
}

u8 sub_020342C4(void) {
    return 1;
}

u8 sub_020342C8(void) {
    return 2;
}

void sub_020342CC(void) {
    /* Original at 0x020342CC */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    bl sub_0203769C\n    cmp r0, #0\n    bne _0203430A\n    ldr r4, _0203430C ; =_021D412C\n    mov r1, #1\n    ldr r0, [r4]\n    add r0, r0, r5\n    strb r1, [r0, #0xc]\n    mov r5, #0\n    lsl r0, r5, #0x10\n    lsr r0, r0, #0x10\n    bl sub_020373B4\n    cmp r0, #0\n    beq _020342FA\n    ldr r0, [r4]\n    add r0, r0, r5\n    ldrb r0, [r0, #0xc]\n    cmp r0, #0\n    beq _0203430A\n    add r5, r5, #1\n    cmp r5, #8\n    blt _020342E4\n    mov r1, #0\n    mov r0, #0xe\n    add r2, r1, #0\n    bl sub_02037108\n    pop {r3, r4, r5, pc}\n    _0203430C: .word _021D412C"
    );
    #endif
}

void sub_02034310(void) {
    /* Original at 0x02034310 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _02034330 ; =_021D412C\n    mov r3, #0\n    ldr r1, [r0]\n    str r3, [r1]\n    ldr r1, [r0]\n    str r3, [r1, #4]\n    ldr r1, [r0]\n    str r3, [r1, #8]\n    ldr r0, [r0]\n    mov r1, #1\n    strb r1, [r0, #0x14]\n    ldr r3, _02034334 ; =sub_020376E0\n    mov r0, #0xf\n    add r1, r2, #0\n    bx r3\n    nop\n    _02034330: .word _021D412C\n    _02034334: .word sub_020376E0"
    );
    #endif
}

void sub_02034338(void) {
    sub_0203769C(0);
}
