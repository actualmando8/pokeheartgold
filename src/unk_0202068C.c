/* Decompiled from asm/unk_0202068C.s */
#include "global.h"

void sub_0202068C(void) {
    /* Original at 0x0202068C */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r1, #0\n    add r5, r0, #0\n    add r0, r6, #0\n    mov r1, #8\n    bl Heap_Alloc\n    mov r1, #0x14\n    add r4, r0, #0\n    add r0, r6, #0\n    mul r1, r5\n    bl Heap_Alloc\n    str r0, [r4]\n    mov r6, #0\n    str r5, [r4, #4]\n    cmp r5, #0\n    ble _020206C4\n    add r5, r6, #0\n    ldr r0, [r4]\n    add r0, r0, r5\n    bl sub_02020770\n    ldr r0, [r4, #4]\n    add r6, r6, #1\n    add r5, #0x14\n    cmp r6, r0\n    blt _020206B2\n    add r0, r4, #0\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void sub_020206C8(void) {
    sub_02020740();
    Heap_Free();
    Heap_Free(r4);
}

void sub_020206E0(void) {
    /* Original at 0x020206E0 */
    /* Requires manual decompilation - 43 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #4]\n    mov r4, #0\n    add r7, r2, #0\n    mov ip, r1\n    add r6, r3, #0\n    add r2, r4, #0\n    cmp r0, #0\n    ble _0202070E\n    ldr r5, [r5]\n    add r3, r5, #0\n    ldr r1, [r3]\n    cmp r1, #0\n    bne _02020706\n    mov r0, #0x14\n    mul r0, r2\n    add r4, r5, r0\n    b _0202070E\n    add r2, r2, #1\n    add r3, #0x14\n    cmp r2, r0\n    blt _020206F8\n    cmp r4, #0\n    bne _02020716\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, ip\n    str r0, [r4]\n    str r7, [r4, #4]\n    ldr r1, [sp, #0x1c]\n    ldr r0, [sp, #0x18]\n    str r6, [r4, #8]\n    str r0, [r4, #0xc]\n    mov r0, #0xff\n    strb r0, [r4, #0x10]\n    lsl r1, r1, #4\n    strb r0, [r4, #0x11]\n    add r0, r4, #0\n    lsr r1, r1, #0x10\n    bl sub_02020780\n    add r0, r4, #0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_02020738(void) {
    sub_02020770();
}

void sub_02020740(void) {
    /* Original at 0x02020740 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #4]\n    mov r6, #0\n    cmp r0, #0\n    ble _02020760\n    add r4, r6, #0\n    ldr r0, [r5]\n    add r0, r0, r4\n    bl sub_02020770\n    ldr r0, [r5, #4]\n    add r6, r6, #1\n    add r4, #0x14\n    cmp r6, r0\n    blt _0202074E\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void sub_02020764(void) {
    sub_02020780();
}

void sub_02020770(void) {
    *(u32*)r0 = 0;
    ((u32*)r0)[4] = 0;
    ((u32*)r0)[8] = 0;
    ((u32*)r0)[0xc] = 0;
    ((u8*)r0)[0x10] = 0;
    ((u8*)r0)[0x11] = 0;
}

void sub_02020780(void) {
    /* Original at 0x02020780 */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    add r4, r0, #0\n    ldr r0, [r4]\n    bl sub_02026DE0\n    add r2, sp, #0\n    strb r0, [r2]\n    lsr r0, r0, #8\n    strb r0, [r2, #1]\n    ldrb r0, [r2]\n    add r1, sp, #0\n    add r1, #2\n    strb r0, [r2, #2]\n    ldrb r0, [r2, #1]\n    strb r0, [r2, #3]\n    ldrb r3, [r4, #0x10]\n    ldrb r0, [r2, #2]\n    cmp r3, r0\n    beq _020207AE\n    add r0, r4, #0\n    bl sub_020207C8\n    add r0, sp, #0\n    ldrb r1, [r4, #0x11]\n    ldrb r0, [r0, #3]\n    cmp r1, r0\n    beq _020207C2\n    add r1, sp, #0\n    add r0, r4, #0\n    add r1, #2\n    bl sub_020207F4\n    add sp, #4\n    pop {r3, r4, pc}"
    );
    #endif
}

void sub_020207C8(void) {
    /* Original at 0x020207C8 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl sub_02020820\n    ldr r3, [r5, #8]\n    add r2, r0, #0\n    lsl r1, r3, #0x10\n    ldr r6, _020207F0 ; =0x7FFF0000\n    mov r0, #0\n    and r3, r6\n    lsr r3, r3, #0x10\n    lsr r1, r1, #0xd\n    lsl r3, r3, #4\n    bl GF_CreateNewVramTransferTask\n    ldrb r0, [r4]\n    strb r0, [r5, #0x10]\n    pop {r4, r5, r6, pc}\n    nop\n    _020207F0: .word 0x7FFF0000"
    );
    #endif
}

void sub_020207F4(void) {
    /* Original at 0x020207F4 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl sub_0202082C\n    ldr r3, [r5, #0xc]\n    add r2, r0, #0\n    lsl r1, r3, #0x10\n    ldr r6, _0202081C ; =0xFFFF0000\n    mov r0, #1\n    and r3, r6\n    lsr r3, r3, #0x10\n    lsr r1, r1, #0xd\n    lsl r3, r3, #3\n    bl GF_CreateNewVramTransferTask\n    ldrb r0, [r4, #1]\n    strb r0, [r5, #0x11]\n    pop {r4, r5, r6, pc}\n    nop\n    _0202081C: .word 0xFFFF0000"
    );
    #endif
}

void sub_02020820(void) {
    sub_02020838();
}

void sub_0202082C(void) {
    sub_02020888();
}

void sub_02020838(void) {
    /* Original at 0x02020838 */
    /* Requires manual decompilation - 39 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    cmp r0, #0\n    beq _02020864\n    add r2, r0, #0\n    add r2, #0x3c\n    beq _02020860\n    add r3, r0, #0\n    add r3, #0x3d\n    ldrb r3, [r3]\n    cmp r1, r3\n    bhs _02020860\n    add r3, r0, #0\n    add r3, #0x42\n    ldrh r4, [r3]\n    add r3, r2, r4\n    ldrh r2, [r2, r4]\n    add r3, r3, #4\n    mul r1, r2\n    add r3, r3, r1\n    b _02020866\n    mov r3, #0\n    b _02020866\n    mov r3, #0\n    cmp r3, #0\n    bne _02020870\n    mov r0, #0\n    pop {r3, r4}\n    bx lr\n    ldr r1, [r0, #0x14]\n    add r2, r0, r1\n    ldr r1, [r3]\n    ldr r0, [r0, #8]\n    lsl r1, r1, #0x10\n    lsr r1, r1, #0x10\n    add r0, r1, r0\n    lsl r0, r0, #3\n    add r0, r2, r0\n    pop {r3, r4}\n    bx lr"
    );
    #endif
}

void sub_02020888(void) {
    /* Original at 0x02020888 */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    cmp r0, #0\n    beq _020208B0\n    ldrh r2, [r0, #0x34]\n    cmp r2, #0\n    beq _020208B0\n    add r4, r0, r2\n    beq _020208AC\n    ldrb r2, [r4, #1]\n    cmp r1, r2\n    bhs _020208AC\n    ldrh r2, [r4, #6]\n    add r3, r4, r2\n    ldrh r2, [r4, r2]\n    add r3, r3, #4\n    mul r1, r2\n    add r2, r3, r1\n    b _020208B2\n    mov r2, #0\n    b _020208B2\n    mov r2, #0\n    cmp r2, #0\n    bne _020208BC\n    mov r0, #0\n    pop {r3, r4}\n    bx lr\n    ldr r1, [r0, #0x38]\n    add r1, r0, r1\n    ldrh r0, [r2]\n    lsl r0, r0, #3\n    add r0, r1, r0\n    pop {r3, r4}\n    bx lr"
    );
    #endif
}

void sub_020208CC(void) {
    /* Original at 0x020208CC */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, [r1]\n    ldr r0, [r0, #8]\n    lsl r1, r1, #0x10\n    lsl r0, r0, #0x10\n    lsr r1, r1, #0xd\n    lsr r0, r0, #0xd\n    add r0, r1, r0\n    bx lr"
    );
    #endif
}

void sub_020208DC(void) {
    /* Original at 0x020208DC */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x10\n    add r4, r0, #0\n    add r0, sp, #0\n    bl sub_02020B3C\n    cmp r4, #0\n    beq _020208FA\n    add r0, r4, #0\n    add r0, #0x3c\n    add r1, sp, #0\n    bl NNS_G3dGetResDataByName\n    add r1, r0, #0\n    b _020208FC\n    mov r1, #0\n    cmp r1, #0\n    bne _02020906\n    add sp, #0x10\n    mov r0, #0\n    pop {r4, pc}\n    add r0, r4, #0\n    bl sub_020208CC\n    add sp, #0x10\n    pop {r4, pc}"
    );
    #endif
}

void sub_02020910(void) {
    /* Original at 0x02020910 */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    cmp r0, #0\n    beq _0202093C\n    add r2, r0, #0\n    add r2, #0x3c\n    beq _02020938\n    add r3, r0, #0\n    add r3, #0x3d\n    ldrb r3, [r3]\n    cmp r1, r3\n    bhs _02020938\n    add r3, r0, #0\n    add r3, #0x42\n    ldrh r4, [r3]\n    add r3, r2, r4\n    ldrh r2, [r2, r4]\n    add r3, r3, #4\n    mul r1, r2\n    add r1, r3, r1\n    b _0202093E\n    mov r1, #0\n    b _0202093E\n    mov r1, #0\n    cmp r1, #0\n    bne _02020946\n    mov r0, #0\n    pop {r4, pc}\n    bl sub_020208CC\n    pop {r4, pc}"
    );
    #endif
}

void sub_0202094C(void) {
    /* Original at 0x0202094C */
    /* Requires manual decompilation - 40 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, [r1]\n    mov r1, #7\n    lsl r1, r1, #0x1a\n    and r1, r0\n    lsr r1, r1, #0x1a\n    cmp r1, #6\n    bhi _0202098A\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _02020968: ; jump table\n    mov r1, #4\n    b _0202098E\n    mov r1, #2\n    b _0202098E\n    mov r1, #1\n    b _0202098E\n    mov r1, #1\n    b _0202098E\n    mov r1, #1\n    b _0202098E\n    mov r0, #0\n    pop {r3, pc}\n    mov r3, #7\n    lsl r3, r3, #0x14\n    add r2, r0, #0\n    and r2, r3\n    lsl r3, r3, #3\n    and r0, r3\n    lsr r2, r2, #0x14\n    lsr r0, r0, #0x17\n    lsl r2, r2, #4\n    lsl r0, r0, #4\n    mul r0, r2\n    bl _u32_div_f\n    pop {r3, pc}"
    );
    #endif
}

void sub_020209AC(void) {
    /* Original at 0x020209AC */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    cmp r0, #0\n    beq _020209D8\n    add r2, r0, #0\n    add r2, #0x3c\n    beq _020209D4\n    add r3, r0, #0\n    add r3, #0x3d\n    ldrb r3, [r3]\n    cmp r1, r3\n    bhs _020209D4\n    add r3, r0, #0\n    add r3, #0x42\n    ldrh r4, [r3]\n    add r3, r2, r4\n    ldrh r2, [r2, r4]\n    add r3, r3, #4\n    mul r1, r2\n    add r1, r3, r1\n    b _020209DA\n    mov r1, #0\n    b _020209DA\n    mov r1, #0\n    bl sub_0202094C\n    pop {r4, pc}"
    );
    #endif
}

void sub_020209E0(void) {
    /* Original at 0x020209E0 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x10\n    add r4, r0, #0\n    add r0, sp, #0\n    bl sub_02020B3C\n    cmp r4, #0\n    beq _020209FE\n    add r0, r4, #0\n    add r0, #0x3c\n    add r1, sp, #0\n    bl NNS_G3dGetResDataByName\n    add r1, r0, #0\n    b _02020A00\n    mov r1, #0\n    add r0, r4, #0\n    bl sub_0202094C\n    add sp, #0x10\n    pop {r4, pc}"
    );
    #endif
}
