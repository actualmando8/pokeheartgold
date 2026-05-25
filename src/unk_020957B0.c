/* Decompiled from asm/unk_020957B0.s */
#include "global.h"

void sub_020957B0(void) {
    /* Original at 0x020957B0 */
    /* Requires manual decompilation - 59 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r5, sp, #0x10\n    mov r4, #0x10\n    ldrsb r4, [r5, r4]\n    add r7, r0, #0\n    add r6, r1, #0\n    str r4, [sp]\n    bl sub_02095BF0\n    str r0, [sp, #4]\n    cmp r0, #4\n    bhi _02095834\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _020957D6: ; jump table\n    mov r0, #1\n    ldrsb r1, [r6, r0]\n    add r0, sp, #4\n    add r2, sp, #4\n    strb r1, [r0, #4]\n    add r0, r7, #0\n    mov r1, #3\n    bl sub_02095CB8\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    mov r0, #1\n    ldrsb r1, [r6, r0]\n    add r0, sp, #4\n    add r2, sp, #4\n    strb r1, [r0, #4]\n    add r0, r7, #0\n    mov r1, #3\n    bl sub_02095CB8\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    mov r0, #0\n    ldrsb r1, [r6, r0]\n    add r0, sp, #4\n    add r2, sp, #4\n    strb r1, [r0, #4]\n    add r0, r7, #0\n    mov r1, #5\n    bl sub_02095CB8\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    mov r0, #0\n    ldrsb r1, [r6, r0]\n    add r0, sp, #4\n    add r2, sp, #4\n    strb r1, [r0, #4]\n    add r0, r7, #0\n    mov r1, #5\n    bl sub_02095CB8\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_02095838(void) {
    /* Original at 0x02095838 */
    /* Requires manual decompilation - 63 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    ldr r0, [r3]\n    cmp r0, #4\n    bhi _020958BA\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0209584C: ; jump table\n    mov r0, #2\n    strb r0, [r1]\n    mov r0, #0\n    strb r0, [r1, #1]\n    ldrsb r4, [r1, r0]\n    mov r0, #1\n    ldrsb r3, [r1, r0]\n    ldrb r0, [r2]\n    mul r0, r3\n    add r0, r4, r0\n    strb r0, [r1, #2]\n    pop {r3, r4}\n    bx lr\n    mov r0, #2\n    strb r0, [r1]\n    mov r0, #4\n    strb r0, [r1, #1]\n    mov r0, #0\n    ldrsb r4, [r1, r0]\n    mov r0, #1\n    ldrsb r3, [r1, r0]\n    ldrb r0, [r2]\n    mul r0, r3\n    add r0, r4, r0\n    strb r0, [r1, #2]\n    pop {r3, r4}\n    bx lr\n    mov r0, #5\n    strb r0, [r1]\n    ldrb r0, [r3, #4]\n    strb r0, [r1, #1]\n    mov r0, #0\n    ldrsb r4, [r1, r0]\n    mov r0, #1\n    ldrsb r3, [r1, r0]\n    ldrb r0, [r2]\n    mul r0, r3\n    add r0, r4, r0\n    strb r0, [r1, #2]\n    pop {r3, r4}\n    bx lr\n    mov r0, #0\n    strb r0, [r1]\n    ldrb r0, [r3, #4]\n    strb r0, [r1, #1]\n    mov r0, #1\n    ldrsb r3, [r1, r0]\n    ldrb r0, [r2]\n    mul r0, r3\n    strb r0, [r1, #2]\n    pop {r3, r4}\n    bx lr"
    );
    #endif
}

void sub_020958C0(void) {
    /* Original at 0x020958C0 */
    /* Requires manual decompilation - 44 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r6, sp, #0x10\n    mov r5, #0x10\n    ldrsb r5, [r6, r5]\n    add r4, r0, #0\n    add r7, r1, #0\n    str r5, [sp]\n    bl sub_02095BF0\n    mov r2, #0\n    str r0, [sp, #4]\n    ldrsb r3, [r7, r2]\n    add r1, sp, #4\n    cmp r0, #1\n    strb r3, [r1, #4]\n    beq _020958F6\n    cmp r0, #3\n    bne _0209591C\n    strb r2, [r1, #4]\n    add r0, r4, #0\n    mov r1, #3\n    add r2, sp, #4\n    bl sub_02095CB8\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    ldr r0, [r4, #4]\n    ldrb r0, [r0]\n    cmp r0, #0x12\n    bne _0209590E\n    strb r2, [r1, #4]\n    add r0, r4, #0\n    mov r1, #6\n    add r2, sp, #4\n    bl sub_02095CB8\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    mov r0, #4\n    strb r0, [r1, #4]\n    add r0, r4, #0\n    mov r1, #2\n    add r2, sp, #4\n    bl sub_02095CB8\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_02095920(void) {
    r0 = 0;
    *(u8*)r1 = 0;
    ((u8*)r1)[1] = 0;
    ((u8*)r1)[2] = 0;
}

void sub_0209592C(void) {
    /* Original at 0x0209592C */
    /* Requires manual decompilation - 79 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r6, sp, #0x10\n    mov r5, #0x10\n    ldrsb r5, [r6, r5]\n    add r4, r0, #0\n    add r7, r1, #0\n    str r5, [sp]\n    bl sub_02095BF0\n    str r0, [sp, #4]\n    mov r1, #1\n    ldrsb r1, [r7, r1]\n    cmp r1, #0\n    bne _02095952\n    mov r2, #0\n    add r1, sp, #4\n    strb r2, [r1, #4]\n    b _02095962\n    cmp r1, #1\n    add r1, sp, #4\n    bne _0209595E\n    mov r2, #2\n    strb r2, [r1, #4]\n    b _02095962\n    mov r2, #3\n    strb r2, [r1, #4]\n    cmp r0, #1\n    beq _02095972\n    cmp r0, #2\n    beq _0209599A\n    cmp r0, #4\n    beq _020959C2\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    ldr r0, [r4, #4]\n    add r2, sp, #4\n    ldrb r0, [r0]\n    cmp r0, #0x12\n    bne _0209598E\n    mov r1, #0\n    add r0, sp, #4\n    strb r1, [r0, #4]\n    add r0, r4, #0\n    mov r1, #6\n    bl sub_02095CB8\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    add r0, r4, #0\n    mov r1, #2\n    bl sub_02095CB8\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    ldr r0, [r4, #4]\n    add r2, sp, #4\n    ldrb r0, [r0]\n    cmp r0, #0x12\n    bne _020959B6\n    mov r1, #0\n    add r0, sp, #4\n    strb r1, [r0, #4]\n    add r0, r4, #0\n    mov r1, #6\n    bl sub_02095CB8\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    add r0, r4, #0\n    mov r1, #2\n    bl sub_02095CB8\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    ldrb r0, [r4, #2]\n    cmp r0, #0\n    beq _020959D2\n    add r0, r4, #0\n    mov r1, #1\n    add r2, sp, #4\n    bl sub_02095CB8\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_020959D8(void) {
    /* Original at 0x020959D8 */
    /* Requires manual decompilation - 43 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    ldr r0, [r3]\n    add r5, r1, #0\n    add r4, r2, #0\n    cmp r0, #1\n    beq _02095A12\n    cmp r0, #2\n    beq _02095A12\n    cmp r0, #3\n    bne _02095A32\n    ldrb r6, [r4]\n    ldrb r0, [r4, #2]\n    add r1, r6, #0\n    sub r0, r0, #1\n    bl _s32_div_f\n    mul r0, r6\n    strb r0, [r5, #2]\n    ldrb r0, [r5, #2]\n    ldrb r1, [r4]\n    bl _s32_div_f\n    strb r1, [r5]\n    ldrb r0, [r5, #2]\n    ldrb r1, [r4]\n    bl _s32_div_f\n    strb r0, [r5, #1]\n    pop {r4, r5, r6, pc}\n    ldrb r0, [r3, #4]\n    cmp r0, #2\n    bhs _02095A1E\n    mov r0, #0\n    strb r0, [r5, #2]\n    b _02095A2A\n    bls _02095A26\n    mov r0, #2\n    strb r0, [r5, #2]\n    b _02095A2A\n    mov r0, #1\n    strb r0, [r5, #2]\n    mov r0, #0\n    strb r0, [r5]\n    ldrb r0, [r5, #2]\n    strb r0, [r5, #1]\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void sub_02095A34(void) {
    /* Original at 0x02095A34 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0xc\n    add r6, sp, #0x10\n    mov r5, #0x10\n    ldrsb r5, [r6, r5]\n    add r4, r0, #0\n    str r5, [sp]\n    bl sub_02095BF0\n    mov r2, #0\n    str r0, [sp, #4]\n    add r1, sp, #4\n    strb r2, [r1, #4]\n    cmp r0, #3\n    beq _02095A5A\n    cmp r0, #4\n    beq _02095A68\n    add sp, #0xc\n    pop {r3, r4, r5, r6, pc}\n    add r0, r4, #0\n    mov r1, #4\n    add r2, sp, #4\n    bl sub_02095CB8\n    add sp, #0xc\n    pop {r3, r4, r5, r6, pc}\n    add r0, r4, #0\n    mov r1, #4\n    add r2, sp, #4\n    bl sub_02095CB8\n    add sp, #0xc\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void sub_02095A78(void) {
    /* Original at 0x02095A78 */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void sub_02095A7C(void) {
    /* Original at 0x02095A7C */
    /* Requires manual decompilation - 53 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r5, sp, #0x10\n    mov r4, #0x10\n    ldrsb r4, [r5, r4]\n    add r6, r0, #0\n    add r7, r1, #0\n    str r4, [sp]\n    bl sub_02095BF0\n    mov r1, #0\n    str r0, [sp, #4]\n    ldrsb r2, [r7, r1]\n    add r1, sp, #4\n    cmp r0, #4\n    strb r2, [r1, #4]\n    bhi _02095AF4\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02095AAA: ; jump table\n    ldr r0, [r6, #4]\n    add r2, sp, #4\n    ldrb r0, [r0]\n    cmp r0, #0x12\n    bne _02095ACA\n    add r0, r6, #0\n    mov r1, #6\n    bl sub_02095CB8\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    add r0, r6, #0\n    mov r1, #2\n    bl sub_02095CB8\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    ldr r0, [r6, #4]\n    add r2, sp, #4\n    ldrb r0, [r0]\n    cmp r0, #0x12\n    bne _02095AEC\n    add r0, r6, #0\n    mov r1, #6\n    bl sub_02095CB8\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    add r0, r6, #0\n    mov r1, #2\n    bl sub_02095CB8\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_02095AF8(void) {
    r0 = 0;
    *(u8*)r1 = 0;
    ((u8*)r1)[1] = 0;
    ((u8*)r1)[2] = 0;
}

void sub_02095B04(void) {
    /* Original at 0x02095B04 */
    /* Requires manual decompilation - 57 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r5, sp, #0x10\n    mov r4, #0x10\n    ldrsb r4, [r5, r4]\n    add r7, r0, #0\n    add r6, r1, #0\n    str r4, [sp]\n    bl sub_02095BF0\n    mov r1, #0\n    str r0, [sp, #4]\n    ldrsb r3, [r6, r1]\n    add r2, sp, #4\n    cmp r0, #4\n    strb r3, [r2, #4]\n    bhi _02095B84\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02095B32: ; jump table\n    mov r0, #1\n    ldrsb r0, [r6, r0]\n    mov r1, #3\n    strb r0, [r2, #4]\n    add r0, r7, #0\n    add r2, sp, #4\n    bl sub_02095CB8\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    mov r0, #1\n    ldrsb r0, [r6, r0]\n    mov r1, #3\n    strb r0, [r2, #4]\n    add r0, r7, #0\n    add r2, sp, #4\n    bl sub_02095CB8\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    ldrsb r0, [r6, r1]\n    mov r1, #5\n    strb r0, [r2, #4]\n    add r0, r7, #0\n    add r2, sp, #4\n    bl sub_02095CB8\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    ldrsb r0, [r6, r1]\n    mov r1, #5\n    strb r0, [r2, #4]\n    add r0, r7, #0\n    add r2, sp, #4\n    bl sub_02095CB8\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_02095B88(void) {
    /* Original at 0x02095B88 */
    /* Requires manual decompilation - 47 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    ldr r0, [r3]\n    cmp r0, #4\n    bhi _02095BEA\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02095B9C: ; jump table\n    mov r0, #2\n    strb r0, [r1]\n    mov r0, #0\n    strb r0, [r1, #1]\n    ldrsb r4, [r1, r0]\n    mov r0, #1\n    ldrsb r3, [r1, r0]\n    ldrb r0, [r2]\n    mul r0, r3\n    add r0, r4, r0\n    strb r0, [r1, #2]\n    pop {r3, r4}\n    bx lr\n    mov r0, #5\n    strb r0, [r1]\n    mov r0, #0\n    strb r0, [r1, #1]\n    ldrsb r4, [r1, r0]\n    mov r0, #1\n    ldrsb r3, [r1, r0]\n    ldrb r0, [r2]\n    mul r0, r3\n    add r0, r4, r0\n    strb r0, [r1, #2]\n    pop {r3, r4}\n    bx lr\n    mov r0, #0\n    strb r0, [r1]\n    strb r0, [r1, #1]\n    mov r0, #1\n    ldrsb r3, [r1, r0]\n    ldrb r0, [r2]\n    mul r0, r3\n    strb r0, [r1, #2]\n    pop {r3, r4}\n    bx lr"
    );
    #endif
}

void sub_02095BF0(void) {
    /* Original at 0x02095BF0 */
    /* Requires manual decompilation - 79 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7}\n    add r7, r2, #0\n    ldrb r2, [r7, #1]\n    add r4, r1, #0\n    mov r0, #0\n    ldrb r1, [r7]\n    mov ip, r2\n    cmp r3, #0\n    beq _02095C3C\n    ldrsb r2, [r4, r0]\n    add r2, r2, r3\n    lsl r2, r2, #0x18\n    asr r5, r2, #0x18\n    ldr r2, _02095C8C ; =FS_OVERLAY_ID(field)\n    ldrsb r6, [r4, r2]\n    bpl _02095C14\n    add r0, r2, #0\n    b _02095C2E\n    cmp r5, r1\n    blt _02095C1C\n    mov r0, #2\n    b _02095C2E\n    add r2, r6, #0\n    mul r2, r1\n    add r2, r5, r2\n    lsl r2, r2, #0x18\n    lsr r3, r2, #0x18\n    ldrb r2, [r7, #2]\n    cmp r3, r2\n    blo _02095C2E\n    mov r0, #2\n    cmp r0, #0\n    bne _02095C86\n    add r2, r6, #0\n    mul r2, r1\n    strb r5, [r4]\n    add r2, r5, r2\n    strb r2, [r4, #2]\n    add r3, sp, #0\n    mov r2, #0x10\n    ldrsb r2, [r3, r2]\n    cmp r2, #0\n    beq _02095C84\n    mov r5, #1\n    ldrsb r5, [r4, r5]\n    mov r3, #0\n    ldrsb r3, [r4, r3]\n    add r2, r5, r2\n    lsl r2, r2, #0x18\n    asr r2, r2, #0x18\n    bpl _02095C5A\n    mov r0, #3\n    b _02095C76\n    mov r5, ip\n    cmp r2, r5\n    blt _02095C64\n    mov r0, #4\n    b _02095C76\n    add r5, r2, #0\n    mul r5, r1\n    add r5, r3, r5\n    lsl r5, r5, #0x18\n    lsr r6, r5, #0x18\n    ldrb r5, [r7, #2]\n    cmp r6, r5\n    blo _02095C76\n    mov r0, #4\n    cmp r0, #0\n    bne _02095C86\n    add r0, r2, #0\n    mul r0, r1\n    strb r2, [r4, #1]\n    add r0, r3, r0\n    strb r0, [r4, #2]\n    mov r0, #0\n    pop {r4, r5, r6, r7}\n    bx lr\n    nop\n    _02095C8C: .word FS_OVERLAY_ID(field)"
    );
    #endif
}

void sub_02095C90(void) {
    /* Original at 0x02095C90 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5}\n    ldrb r5, [r0, #1]\n    mov r3, #0\n    cmp r5, #0\n    ble _02095CB2\n    ldr r4, [r0, #8]\n    ldr r2, [r4]\n    ldrb r2, [r2, #3]\n    cmp r1, r2\n    bne _02095CAA\n    strb r3, [r0]\n    pop {r4, r5}\n    bx lr\n    add r3, r3, #1\n    add r4, #0xc\n    cmp r3, r5\n    blt _02095C9C\n    pop {r4, r5}\n    bx lr"
    );
    #endif
}

void sub_02095CB8(void) {
    void *r3;
    void *r4;
    void *r5;
    void *r6;
    void *r7;
    r4 = r0 + 0;
    r7 = r2 + 0;
    sub_02095C90();
    /* ldrb r1, [r4] */
    r0 = 0xc;
    /* ldr r5, [r4, #8] */
    r6 = r1 + 0;
    /* mul r6, r0 */
    /* ldr r2, [r4, #0xc] */
    r0 = r4 + 0;
    /* lsl r1, r1, #2 */
    /* add r4, r5, r6 */
    /* add r1, r2, r1 */
    /* ldr r2, [r5, r6] */
    /* ldr r4, [r4, #8] */
    r3 = r7 + 0;
    /* blx r4 */
}

void sub_02095CE0(void) {
    /* Original at 0x02095CE0 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r1, #0\n    mov r1, #0x10\n    add r6, r0, #0\n    bl Heap_Alloc\n    add r4, r0, #0\n    add r2, r4, #0\n    mov r1, #0x10\n    mov r0, #0\n    strb r0, [r2]\n    add r2, r2, #1\n    sub r1, r1, #1\n    bne _02095CF4\n    mov r0, #6\n    strb r0, [r4, #1]\n    ldrb r1, [r4, #1]\n    add r0, r6, #0\n    lsl r1, r1, #2\n    bl Heap_Alloc\n    str r0, [r4, #0xc]\n    ldrb r2, [r4, #1]\n    mov r1, #0\n    lsl r2, r2, #2\n    bl memset\n    str r5, [r4, #4]\n    add r0, r4, #0\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void sub_02095D1C(void) {
    /* Original at 0x02095D1C */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "mov r2, #0\n    strb r2, [r0]\n    ldr r2, _02095D28 ; =_02108434\n    str r2, [r0, #8]\n    strb r1, [r0, #2]\n    bx lr\n    _02095D28: .word _02108434"
    );
    #endif
}

void sub_02095D2C(void) {
    void *r4;
    r4 = r0 + 0;
    /* ldr r0, [r4, #0xc] */
    Heap_Free();
    r0 = r4 + 0;
    Heap_Free((r4 + 0));
}

void sub_02095D40(void) {
    /* Original at 0x02095D40 */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r6, r2, #0\n    bl sub_02095C90\n    ldrb r0, [r5]\n    ldr r2, [r5, #0xc]\n    lsl r1, r0, #2\n    add r4, r2, r1\n    mov r1, #0xc\n    ldr r2, [r5, #8]\n    mul r1, r0\n    ldr r5, [r2, r1]\n    ldrb r0, [r5, #2]\n    cmp r6, r0\n    blo _02095D64\n    bl GF_AssertFail\n    strb r6, [r4, #2]\n    ldrb r1, [r4, #2]\n    ldrb r0, [r5, #2]\n    cmp r1, r0\n    blo _02095D72\n    mov r0, #0\n    strb r0, [r4, #2]\n    ldrb r0, [r4, #2]\n    ldrb r1, [r5]\n    bl _s32_div_f\n    strb r1, [r4]\n    ldrb r0, [r4, #2]\n    ldrb r1, [r5]\n    bl _s32_div_f\n    strb r0, [r4, #1]\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void sub_02095D88(void) {
    /* Original at 0x02095D88 */
    /* Requires manual decompilation - 39 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    str r2, [sp, #8]\n    ldrb r7, [r4]\n    ldr r2, [r4, #0xc]\n    mov ip, r1\n    lsl r1, r7, #2\n    add r5, r2, r1\n    mov r1, #0xc\n    add r3, r7, #0\n    mul r3, r1\n    ldr r2, [r4, #8]\n    ldrb r1, [r5, #2]\n    add r6, r2, r3\n    str r1, [sp, #4]\n    ldr r1, [sp, #8]\n    str r1, [sp]\n    ldr r2, [r2, r3]\n    ldr r6, [r6, #4]\n    add r1, r5, #0\n    mov r3, ip\n    blx r6\n    ldrb r0, [r4]\n    cmp r7, r0\n    beq _02095DC2\n    add sp, #0xc\n    mov r0, #1\n    pop {r4, r5, r6, r7, pc}\n    ldrb r1, [r5, #2]\n    ldr r0, [sp, #4]\n    cmp r0, r1\n    beq _02095DD0\n    add sp, #0xc\n    mov r0, #1\n    pop {r4, r5, r6, r7, pc}\n    mov r0, #0\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_02095DD8(void) {
    /* ldrb r1, [r0] */
    /* ldr r2, [r0, #8] */
    r0 = 0xc;
    /* mul r0, r1 */
    /* ldr r0, [r2, r0] */
    /* ldrb r0, [r0, #3] */
}

void sub_02095DE8(void) {
    /* ldr r1, [r0, #0xc] */
    /* ldrb r0, [r0] */
    /* lsl r0, r0, #2 */
    /* add r0, r1, r0 */
    /* ldrb r0, [r0, #2] */
}
