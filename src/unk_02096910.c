/* Decompiled from asm/unk_02096910.s */
#include "global.h"

void sub_02096910(void) {
    /* Original at 0x02096910 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _0209691C ; =sub_0203410C\n    add r2, r0, #0\n    ldr r0, _02096920 ; =_02108594\n    mov r1, #0x34\n    bx r3\n    nop\n    _0209691C: .word sub_0203410C\n    _02096920: .word _02108594"
    );
    #endif
}

void sub_02096924(void) {
    /* Original at 0x02096924 */
    /* Requires manual decompilation - 55 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r0, #0\n    ldr r0, _02096990 ; =0x000008D4\n    add r5, r3, #0\n    ldrb r1, [r5, r0]\n    add r6, r2, #0\n    mov r4, #0\n    add r1, r1, #1\n    strb r1, [r5, r0]\n    bl sub_0203769C\n    cmp r7, r0\n    beq _0209698E\n    ldrh r0, [r6]\n    mov r1, #0xe0\n    strb r0, [r5, #0x12]\n    ldrh r0, [r6, #2]\n    strh r0, [r5, #0x16]\n    ldrh r0, [r6, #4]\n    strh r0, [r5, #0x18]\n    ldrh r0, [r6, #6]\n    strh r0, [r5, #0x14]\n    ldrb r0, [r5, #0x10]\n    bic r0, r1\n    ldrb r1, [r5, #0x12]\n    add r1, r1, #5\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    lsl r1, r1, #0x1d\n    lsr r1, r1, #0x18\n    orr r0, r1\n    strb r0, [r5, #0x10]\n    ldrh r2, [r5, #0x16]\n    ldrh r1, [r5, #0x2e]\n    cmp r1, r2\n    beq _02096972\n    ldrh r0, [r5, #0x18]\n    cmp r1, r0\n    bne _02096978\n    add r0, r4, #1\n    lsl r0, r0, #0x10\n    lsr r4, r0, #0x10\n    ldrh r1, [r5, #0x30]\n    cmp r1, r2\n    beq _02096984\n    ldrh r0, [r5, #0x18]\n    cmp r1, r0\n    bne _0209698A\n    add r0, r4, #2\n    lsl r0, r0, #0x10\n    lsr r4, r0, #0x10\n    ldr r0, _02096994 ; =0x000008D8\n    strh r4, [r5, r0]\n    pop {r3, r4, r5, r6, r7, pc}\n    _02096990: .word 0x000008D4\n    _02096994: .word 0x000008D8"
    );
    #endif
}

void sub_02096998(void) {
    /* Original at 0x02096998 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r1, _020969C0 ; =0x0000083E\n    add r4, r0, #0\n    add r1, r4, r1\n    add r0, #0x3e\n    mov r2, #0x1c\n    bl MI_CpuCopy8\n    ldr r1, _020969C0 ; =0x0000083E\n    mov r0, #0x3f\n    add r1, r4, r1\n    mov r2, #0x1c\n    bl sub_02037030\n    cmp r0, #1\n    bne _020969BC\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}\n    _020969C0: .word 0x0000083E"
    );
    #endif
}

void sub_020969C4(void) {
    /* Original at 0x020969C4 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r0, _020969F4 ; =0x000008D4\n    add r4, r3, #0\n    ldrb r1, [r4, r0]\n    add r6, r2, #0\n    add r1, r1, #1\n    strb r1, [r4, r0]\n    bl sub_0203769C\n    cmp r5, r0\n    beq _020969F0\n    bl sub_0203769C\n    cmp r0, #0\n    beq _020969F0\n    add r4, #0x3e\n    add r0, r6, #0\n    add r1, r4, #0\n    mov r2, #0x1c\n    bl MI_CpuCopy8\n    pop {r4, r5, r6, pc}\n    nop\n    _020969F4: .word 0x000008D4"
    );
    #endif
}

void sub_020969F8(void) {
    /* Original at 0x020969F8 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r0, _02096A30 ; =0x000008D8\n    add r4, r3, #0\n    mov r1, #0\n    strh r1, [r4, r0]\n    sub r1, r0, #4\n    ldrb r1, [r4, r1]\n    sub r0, r0, #4\n    add r6, r2, #0\n    add r1, r1, #1\n    strb r1, [r4, r0]\n    bl sub_0203769C\n    cmp r5, r0\n    beq _02096A2C\n    ldrb r0, [r4, #0x10]\n    lsl r0, r0, #0x1c\n    lsr r0, r0, #0x1f\n    bne _02096A26\n    ldrh r0, [r6]\n    cmp r0, #0\n    beq _02096A2C\n    ldr r0, _02096A30 ; =0x000008D8\n    mov r1, #1\n    strh r1, [r4, r0]\n    pop {r4, r5, r6, pc}\n    nop\n    _02096A30: .word 0x000008D8"
    );
    #endif
}

void sub_02096A34(void) {
    /* Original at 0x02096A34 */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r0, #0xa0\n    ldrb r0, [r0]\n    strh r0, [r5, #8]\n    add r0, r5, #0\n    add r0, #0xa0\n    ldrb r0, [r0]\n    bl ov80_022385D8\n    add r4, r0, #0\n    ldr r0, [r5]\n    bl Save_Frontier_GetStatic\n    add r6, r0, #0\n    add r0, r4, #0\n    bl sub_0205C268\n    add r2, r0, #0\n    add r0, r6, #0\n    add r1, r4, #0\n    bl FrontierSave_GetStat\n    strh r0, [r5, #0xa]\n    add r5, #8\n    mov r0, #0x39\n    add r1, r5, #0\n    mov r2, #0x28\n    bl sub_02037030\n    cmp r0, #1\n    bne _02096A78\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    mov r0, #0\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void sub_02096A7C(void) {
    /* Original at 0x02096A7C */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r3, #0\n    add r6, r0, #0\n    add r0, r4, #0\n    add r0, #0x6f\n    ldrb r0, [r0]\n    add r5, r2, #0\n    add r1, r0, #1\n    add r0, r4, #0\n    add r0, #0x6f\n    strb r1, [r0]\n    bl sub_0203769C\n    cmp r6, r0\n    beq _02096AA8\n    ldrh r1, [r5]\n    add r0, r4, #0\n    add r0, #0x6e\n    strb r1, [r0]\n    ldrh r0, [r5, #2]\n    add r4, #0x72\n    strh r0, [r4]\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void sub_02096AAC(void) {
    sub_02037030(0, 0x3a, 1, 0x28);
}

void sub_02096ACC(void) {
    /* Original at 0x02096ACC */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r3, #0\n    add r5, r0, #0\n    add r0, r4, #0\n    add r0, #0x6f\n    ldrb r0, [r0]\n    add r6, r2, #0\n    add r1, r0, #1\n    add r0, r4, #0\n    add r0, #0x6f\n    strb r1, [r0]\n    bl sub_0203769C\n    cmp r5, r0\n    beq _02096AF0\n    ldrh r0, [r6]\n    add r4, #0x59\n    strb r0, [r4]\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void sub_02096AF4(void) {
    /* Original at 0x02096AF4 */
    /* Requires manual decompilation - 89 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r0, [r5]\n    add r4, r1, #0\n    add r6, r2, #0\n    bl SaveArray_Party_Get\n    add r1, r5, #0\n    add r1, #0x6a\n    strb r4, [r1]\n    add r1, r5, #0\n    add r1, #0x6b\n    add r7, r0, #0\n    strb r6, [r1]\n    cmp r4, #0xff\n    bne _02096B30\n    add r0, r5, #0\n    mov r1, #0\n    add r0, #0x76\n    strh r1, [r0]\n    add r0, r5, #0\n    add r0, #0x7e\n    strh r1, [r0]\n    add r0, r5, #0\n    add r0, #0x78\n    strh r1, [r0]\n    add r0, r5, #0\n    add r0, #0x80\n    strh r1, [r0]\n    b _02096B7E\n    add r1, r4, #0\n    bl Party_GetMonByIndex\n    mov r1, #MON_DATA_SPECIES\n    mov r2, #0\n    add r4, r0, #0\n    bl GetMonData\n    add r1, r5, #0\n    add r1, #0x76\n    strh r0, [r1]\n    add r0, r4, #0\n    mov r1, #MON_DATA_HELD_ITEM\n    mov r2, #0\n    bl GetMonData\n    add r1, r5, #0\n    add r1, #0x7e\n    strh r0, [r1]\n    add r0, r7, #0\n    add r1, r6, #0\n    bl Party_GetMonByIndex\n    mov r1, #MON_DATA_SPECIES\n    mov r2, #0\n    add r4, r0, #0\n    bl GetMonData\n    add r1, r5, #0\n    add r1, #0x78\n    strh r0, [r1]\n    add r0, r4, #0\n    mov r1, #MON_DATA_HELD_ITEM\n    mov r2, #0\n    bl GetMonData\n    add r1, r5, #0\n    add r1, #0x80\n    strh r0, [r1]\n    add r0, r5, #0\n    add r0, #0x76\n    ldrh r0, [r0]\n    mov r2, #0x28\n    strh r0, [r5, #8]\n    add r0, r5, #0\n    add r0, #0x7e\n    ldrh r0, [r0]\n    strh r0, [r5, #0xa]\n    add r0, r5, #0\n    add r0, #0x78\n    ldrh r0, [r0]\n    strh r0, [r5, #0xc]\n    add r0, r5, #0\n    add r0, #0x80\n    ldrh r0, [r0]\n    strh r0, [r5, #0xe]\n    add r5, #8\n    mov r0, #0x3b\n    add r1, r5, #0\n    bl sub_02037030\n    cmp r0, #1\n    bne _02096BB2\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_02096BB8(void) {
    /* Original at 0x02096BB8 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r3, #0\n    add r6, r0, #0\n    add r0, r4, #0\n    add r0, #0x6f\n    ldrb r0, [r0]\n    add r5, r2, #0\n    add r1, r0, #1\n    add r0, r4, #0\n    add r0, #0x6f\n    strb r1, [r0]\n    bl sub_0203769C\n    cmp r6, r0\n    beq _02096BF4\n    ldrh r1, [r5]\n    add r0, r4, #0\n    add r0, #0x86\n    strh r1, [r0]\n    add r0, r4, #0\n    ldrh r1, [r5, #2]\n    add r0, #0x8e\n    strh r1, [r0]\n    add r0, r4, #0\n    ldrh r1, [r5, #4]\n    add r0, #0x88\n    add r4, #0x90\n    strh r1, [r0]\n    ldrh r0, [r5, #6]\n    strh r0, [r4]\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void sub_02096BF8(void) {
    sub_02037030(0, 0x3c, 1, 0x28);
}

void sub_02096C18(void) {
    /* Original at 0x02096C18 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r3, #0\n    add r5, r0, #0\n    add r0, r4, #0\n    add r0, #0x6f\n    ldrb r0, [r0]\n    add r6, r2, #0\n    add r1, r0, #1\n    add r0, r4, #0\n    add r0, #0x6f\n    strb r1, [r0]\n    bl sub_0203769C\n    cmp r5, r0\n    beq _02096C3C\n    ldrh r0, [r6]\n    add r4, #0x74\n    strh r0, [r4]\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void sub_02096C40(void) {
    sub_02037030(0, 0x3d, 1, 0x28);
}

void sub_02096C60(void) {
    /* Original at 0x02096C60 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r3, #0\n    add r5, r0, #0\n    add r0, r4, #0\n    add r0, #0x6f\n    ldrb r0, [r0]\n    add r6, r2, #0\n    add r1, r0, #1\n    add r0, r4, #0\n    add r0, #0x6f\n    strb r1, [r0]\n    bl sub_0203769C\n    cmp r5, r0\n    beq _02096C84\n    ldrh r0, [r6]\n    add r4, #0x71\n    strb r0, [r4]\n    pop {r4, r5, r6, pc}"
    );
    #endif
}
