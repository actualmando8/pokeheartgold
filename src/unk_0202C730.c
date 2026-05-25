/* Decompiled from asm/unk_0202C730.s */
#include "global.h"

void Save_FriendGroup_sizeof(void) {
    r0 = r0 << 2;
}

void sub_0202C738(void) {
    /* Original at 0x0202C738 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5}\n    add r5, r2, #0\n    mov r3, #0x2c\n    add r2, r1, #0\n    mul r2, r3\n    mul r5, r3\n    add r4, r0, r2\n    add r3, r0, r5\n    mov r2, #5\n    ldmia r4!, {r0, r1}\n    stmia r3!, {r0, r1}\n    sub r2, r2, #1\n    bne _0202C74A\n    ldr r0, [r4]\n    str r0, [r3]\n    pop {r4, r5}\n    bx lr"
    );
    #endif
}

void Save_FriendGroup_Init(void) {
    /* Original at 0x0202C75C */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r2, #0x42\n    mov r0, #0\n    add r1, r4, #0\n    lsl r2, r2, #2\n    bl MIi_CpuClearFast\n    ldr r0, _0202C784 ; =0x0000FFFF\n    mov r1, #0\n    add r2, r4, #0\n    strh r0, [r2]\n    strh r0, [r2, #0x10]\n    add r1, r1, #1\n    add r2, #0x2c\n    cmp r1, #6\n    blt _0202C772\n    ldr r0, _0202C788 ; =_021D2AF0\n    str r4, [r0]\n    pop {r4, pc}\n    _0202C784: .word 0x0000FFFF\n    _0202C788: .word _021D2AF0"
    );
    #endif
}

void sub_0202C78C(void) {
    /* Original at 0x0202C78C */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r6, r1, #0\n    mov r7, #0\n    mov r4, #0\n    cmp r6, #0\n    bls _0202C7A8\n    ldr r0, [r5, #0x28]\n    bl PRandom\n    add r4, r4, #1\n    str r0, [r5, #0x28]\n    cmp r4, r6\n    blo _0202C79A\n    add r7, r7, #1\n    add r5, #0x2c\n    cmp r7, #6\n    blo _0202C794\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void Save_FriendGroup_GetGroupId(void) {
    /* Original at 0x0202C7B4 */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "mov r2, #0x2c\n    mul r2, r1\n    add r0, r0, r2\n    ldr r0, [r0, #0x24]\n    bx lr"
    );
    #endif
}

void sub_0202C7C0(void) {
    PRandom(0x2c);
}

void sub_0202C7DC(void) {
    /* Original at 0x0202C7DC */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0, #0x54]\n    bx lr"
    );
    #endif
}

void sub_0202C7E0(void) {
    /* Original at 0x0202C7E0 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "cmp r2, #0\n    bne _0202C7EC\n    mov r2, #0x2c\n    mul r2, r1\n    add r0, r0, r2\n    bx lr\n    mov r2, #0x2c\n    mul r2, r1\n    add r0, r0, r2\n    add r0, #0x10\n    bx lr"
    );
    #endif
}

void sub_0202C7F8(void) {
    /* Original at 0x0202C7F8 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    cmp r2, #0\n    bne _0202C810\n    mov r2, #0x2c\n    mul r2, r1\n    add r1, r4, r2\n    add r0, r3, #0\n    mov r2, #8\n    bl CopyStringToU16Array\n    pop {r4, pc}\n    mov r2, #0x2c\n    mul r2, r1\n    add r1, r4, r2\n    add r0, r3, #0\n    add r1, #0x10\n    mov r2, #8\n    bl CopyStringToU16Array\n    pop {r4, pc}"
    );
    #endif
}

void sub_0202C824(void) {
    /* Original at 0x0202C824 */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "mov r3, #0x2c\n    mul r3, r1\n    add r0, r0, r3\n    add r0, #0x20\n    strb r2, [r0]\n    bx lr"
    );
    #endif
}

void sub_0202C830(void) {
    /* Original at 0x0202C830 */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "mov r2, #0x2c\n    mul r2, r1\n    add r0, r0, r2\n    add r0, #0x20\n    ldrb r0, [r0]\n    bx lr"
    );
    #endif
}

void sub_0202C83C(void) {
    /* Original at 0x0202C83C */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "mov r2, #0x2c\n    mul r2, r1\n    add r0, r0, r2\n    add r0, #0x21\n    ldrb r0, [r0]\n    bx lr"
    );
    #endif
}

void sub_0202C848(void) {
    /* Original at 0x0202C848 */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "mov r3, #0x2c\n    mul r3, r1\n    add r0, r0, r3\n    add r0, #0x21\n    strb r2, [r0]\n    bx lr"
    );
    #endif
}

void Save_FriendGroup_Get(void) {
    SaveArray_Get();
}

void sub_0202C860(void) {
    sub_0202C8C4(0, 1, 0x2c);
}

void sub_0202C878(void) {
    /* Original at 0x0202C878 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "mov r2, #0x2c\n    add r3, r0, #0\n    mul r2, r1\n    add r1, r3, r2\n    ldr r3, _0202C888 ; =sub_0202C8E4\n    add r0, #0x2c\n    bx r3\n    nop\n    _0202C888: .word sub_0202C8E4"
    );
    #endif
}

void sub_0202C88C(void) {
    /* Original at 0x0202C88C */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r1, #0\n    ldrh r1, [r6]\n    add r5, r0, #0\n    ldr r0, _0202C8C0 ; =0x0000FFFF\n    cmp r1, r0\n    bne _0202C89E\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r4, #0\n    mov r7, #8\n    add r0, r6, #0\n    add r1, r5, #0\n    add r2, r7, #0\n    bl StringNotEqualN\n    cmp r0, #0\n    bne _0202C8B4\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    add r4, r4, #1\n    add r5, #0x2c\n    cmp r4, #6\n    blt _0202C8A2\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    _0202C8C0: .word 0x0000FFFF"
    );
    #endif
}

void sub_0202C8C4(void) {
    /* Original at 0x0202C8C4 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "ldrh r2, [r0]\n    ldr r1, _0202C8E0 ; =0x0000FFFF\n    cmp r2, r1\n    bne _0202C8D0\n    mov r0, #1\n    bx lr\n    ldrh r0, [r0, #0x10]\n    cmp r0, r1\n    bne _0202C8DA\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr\n    nop\n    _0202C8E0: .word 0x0000FFFF"
    );
    #endif
}

void sub_0202C8E4(void) {
    /* Original at 0x0202C8E4 */
    /* Requires manual decompilation - 47 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    add r0, #0x10\n    add r1, #0x10\n    mov r2, #8\n    bl StringNotEqualN\n    cmp r0, #0\n    beq _0202C8FC\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #8\n    bl StringNotEqualN\n    cmp r0, #0\n    beq _0202C90E\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    add r0, r5, #0\n    add r0, #0x20\n    ldrb r1, [r0]\n    add r0, r4, #0\n    add r0, #0x20\n    ldrb r0, [r0]\n    cmp r1, r0\n    beq _0202C922\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    add r0, r5, #0\n    add r0, #0x21\n    ldrb r1, [r0]\n    add r0, r4, #0\n    add r0, #0x21\n    ldrb r0, [r0]\n    cmp r1, r0\n    beq _0202C936\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    ldr r1, [r5, #0x24]\n    ldr r0, [r4, #0x24]\n    cmp r1, r0\n    bne _0202C942\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}
