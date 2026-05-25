/* Decompiled from asm/unk_0202D230.s */
#include "global.h"

u8 sub_0202D230(void) {
    return 0xe4;
}

void sub_0202D234(void) {
    MI_CpuFill8();
}

void sub_0202D240(void) {
    MI_CpuFill8(1, 0, 0x5a);
}

void sub_0202D254(void) {
    MailMsg_Init_FromTemplate(0);
}

void sub_0202D274(void) {
    /* Original at 0x0202D274 */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _0202D27C ; =MI_CpuFill8\n    mov r1, #0\n    ldr r2, _0202D280 ; =0x00000B3C\n    bx r3\n    _0202D27C: .word MI_CpuFill8\n    _0202D280: .word 0x00000B3C"
    );
    #endif
}

void sub_0202D284(void) {
    /* Original at 0x0202D284 */
    /* Requires manual decompilation - 52 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    cmp r1, #0xa\n    bhi _0202D302\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _0202D296: ; jump table\n    ldrb r0, [r0]\n    lsl r0, r0, #0x1b\n    lsr r0, r0, #0x1d\n    pop {r3, pc}\n    ldrb r0, [r0, #2]\n    pop {r3, pc}\n    ldrb r0, [r0, #3]\n    pop {r3, pc}\n    ldrh r0, [r0, #4]\n    pop {r3, pc}\n    ldrh r0, [r0, #6]\n    pop {r3, pc}\n    add r1, r2, #0\n    add r0, #8\n    mov r2, #4\n    bl MI_CpuCopy8\n    mov r0, #0\n    pop {r3, pc}\n    add r1, r2, #0\n    add r0, #0x2c\n    mov r2, #0x10\n    bl MI_CpuCopy8\n    mov r0, #0\n    pop {r3, pc}\n    ldrb r0, [r0]\n    lsl r0, r0, #0x1f\n    lsr r0, r0, #0x1f\n    pop {r3, pc}\n    add r1, r2, #0\n    add r0, #0xc\n    mov r2, #0x1c\n    bl MI_CpuCopy8\n    mov r0, #0\n    pop {r3, pc}\n    ldrb r0, [r0]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x1d\n    pop {r3, pc}\n    ldr r0, [r0, #0x28]\n    pop {r3, pc}\n    mov r0, #0\n    pop {r3, pc}"
    );
    #endif
}

void sub_0202D308(void) {
    /* Original at 0x0202D308 */
    /* Requires manual decompilation - 71 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r3, r0, #0\n    cmp r1, #0xa\n    bhi _0202D3AE\n    add r0, r1, r1\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0202D31C: ; jump table\n    ldrb r1, [r3]\n    mov r0, #0x1c\n    bic r1, r0\n    ldrb r0, [r2]\n    lsl r0, r0, #0x1d\n    lsr r0, r0, #0x1b\n    orr r0, r1\n    strb r0, [r3]\n    pop {r4, pc}\n    ldrb r0, [r2]\n    strb r0, [r3, #2]\n    pop {r4, pc}\n    ldrb r0, [r2]\n    strb r0, [r3, #3]\n    pop {r4, pc}\n    ldrh r0, [r2]\n    strh r0, [r3, #4]\n    pop {r4, pc}\n    ldrh r0, [r2]\n    strh r0, [r3, #6]\n    pop {r4, pc}\n    add r3, #8\n    add r0, r2, #0\n    add r1, r3, #0\n    mov r2, #4\n    bl MI_CpuCopy8\n    pop {r4, pc}\n    add r3, #0x2c\n    add r0, r2, #0\n    add r1, r3, #0\n    mov r2, #0x10\n    bl MI_CpuCopy8\n    pop {r4, pc}\n    ldrb r4, [r3]\n    ldrb r1, [r2]\n    mov r0, #1\n    bic r4, r0\n    mov r0, #1\n    and r0, r1\n    orr r0, r4\n    strb r0, [r3]\n    pop {r4, pc}\n    add r3, #0xc\n    add r0, r2, #0\n    add r1, r3, #0\n    mov r2, #0x1c\n    bl MI_CpuCopy8\n    pop {r4, pc}\n    ldr r0, [r2]\n    str r0, [r3, #0x28]\n    pop {r4, pc}\n    ldrb r1, [r3]\n    mov r0, #0xe0\n    bic r1, r0\n    ldrb r0, [r2]\n    lsl r0, r0, #0x1d\n    lsr r0, r0, #0x18\n    orr r0, r1\n    strb r0, [r3]\n    pop {r4, pc}"
    );
    #endif
}

void sub_0202D3B0(void) {
    /* Original at 0x0202D3B0 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    ldrb r4, [r0, #3]\n    add r1, r4, r1\n    cmp r1, #0xff\n    bge _0202D3BC\n    strb r1, [r0, #3]\n    ldrh r1, [r0, #4]\n    add r2, r1, r2\n    ldr r1, _0202D3D8 ; =0x0000FFFF\n    cmp r2, r1\n    bge _0202D3C8\n    strh r2, [r0, #4]\n    ldrh r1, [r0, #6]\n    add r2, r1, r3\n    ldr r1, _0202D3D8 ; =0x0000FFFF\n    cmp r2, r1\n    bge _0202D3D4\n    strh r2, [r0, #6]\n    pop {r3, r4}\n    bx lr\n    _0202D3D8: .word 0x0000FFFF"
    );
    #endif
}

void sub_0202D3DC(void) {
    /* Original at 0x0202D3DC */
    /* Requires manual decompilation - 4 instructions */
    #ifdef MWERKS
    asm(
        "ldrb r0, [r0]\n    lsl r0, r0, #0x1e\n    lsr r0, r0, #0x1f\n    bx lr"
    );
    #endif
}

void sub_0202D3E4(void) {
    /* Original at 0x0202D3E4 */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    lsl r1, r1, #0x1f\n    ldrb r3, [r0]\n    mov r2, #2\n    lsr r1, r1, #0x1e\n    bic r3, r2\n    orr r1, r3\n    strb r1, [r0]\n    bx lr"
    );
    #endif
}

void FrontierData_BattlePointAction(void) {
    /* Original at 0x0202D3F8 */
    /* Requires manual decompilation - 37 instructions */
    #ifdef MWERKS
    asm(
        "cmp r2, #6\n    bhi _0202D446\n    add r2, r2, r2\n    add r2, pc\n    ldrh r2, [r2, #6]\n    lsl r2, r2, #0x10\n    asr r2, r2, #0x10\n    add pc, r2\n    _0202D408: ; jump table\n    ldr r2, _0202D44C ; =0x0000270F\n    cmp r1, r2\n    bls _0202D420\n    strh r2, [r0]\n    b _0202D446\n    strh r1, [r0]\n    b _0202D446\n    ldrh r2, [r0]\n    add r2, r2, r1\n    ldr r1, _0202D44C ; =0x0000270F\n    cmp r2, r1\n    ble _0202D432\n    strh r1, [r0]\n    b _0202D446\n    strh r2, [r0]\n    b _0202D446\n    ldrh r2, [r0]\n    cmp r2, r1\n    bhs _0202D442\n    mov r1, #0\n    strh r1, [r0]\n    b _0202D446\n    sub r1, r2, r1\n    strh r1, [r0]\n    ldrh r0, [r0]\n    bx lr\n    nop\n    _0202D44C: .word 0x0000270F"
    );
    #endif
}

void sub_0202D450(void) {
    /* Original at 0x0202D450 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "cmp r1, #2\n    beq _0202D45A\n    cmp r1, #3\n    beq _0202D468\n    b _0202D484\n    mov r1, #0\n    strb r1, [r0, #2]\n    ldrh r2, [r0, #8]\n    mov r1, #0x10\n    bic r2, r1\n    strh r2, [r0, #8]\n    b _0202D484\n    ldrh r1, [r0, #8]\n    lsl r1, r1, #0x1b\n    lsr r1, r1, #0x1f\n    beq _0202D478\n    ldrb r1, [r0, #2]\n    add r1, r1, #1\n    strb r1, [r0, #2]\n    b _0202D484\n    mov r1, #1\n    strb r1, [r0, #2]\n    ldrh r2, [r0, #8]\n    mov r1, #0x10\n    orr r1, r2\n    strh r1, [r0, #8]\n    ldrb r0, [r0, #2]\n    bx lr"
    );
    #endif
}

void sub_0202D488(void) {
    /* Original at 0x0202D488 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "cmp r1, #2\n    beq _0202D496\n    cmp r1, #3\n    beq _0202D49C\n    cmp r1, #4\n    beq _0202D4A8\n    b _0202D4B2\n    mov r1, #1\n    strb r1, [r0, #3]\n    b _0202D4B2\n    ldrb r1, [r0, #3]\n    cmp r1, #0xa\n    bhs _0202D4B2\n    add r1, r1, #1\n    strb r1, [r0, #3]\n    b _0202D4B2\n    ldrb r1, [r0, #3]\n    cmp r1, #1\n    bls _0202D4B2\n    sub r1, r1, #1\n    strb r1, [r0, #3]\n    ldrb r0, [r0, #3]\n    bx lr"
    );
    #endif
}

void sub_0202D4B8(void) {
    /* Original at 0x0202D4B8 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    add r3, r0, #0\n    cmp r1, #0\n    bne _0202D4CE\n    add r3, #0xc0\n    add r0, r2, #0\n    add r1, r3, #0\n    mov r2, #0xa8\n    bl MI_CpuCopy8\n    pop {r3, pc}\n    add r3, #0x18\n    add r0, r2, #0\n    add r1, r3, #0\n    mov r2, #0xa8\n    bl MI_CpuCopy8\n    pop {r3, pc}"
    );
    #endif
}

void sub_0202D4DC(void) {
    /* Original at 0x0202D4DC */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    cmp r1, #0\n    bne _0202D4EE\n    add r1, r2, #0\n    add r0, #0xc0\n    mov r2, #0xa8\n    bl MI_CpuCopy8\n    pop {r3, pc}\n    add r1, r2, #0\n    add r0, #0x18\n    mov r2, #0xa8\n    bl MI_CpuCopy8\n    pop {r3, pc}"
    );
    #endif
}

void sub_0202D4FC(void) {
    /* Original at 0x0202D4FC */
    /* Requires manual decompilation - 50 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r0, #0\n    ldrb r0, [r1, #2]\n    mov r2, #0xfa\n    lsl r2, r2, #2\n    sub r0, r0, #1\n    add r3, r0, #0\n    mul r3, r2\n    lsl r0, r3, #0x10\n    lsr r4, r0, #0x10\n    ldrh r3, [r1, #4]\n    mov r0, #0xa\n    ldrb r5, [r1, #3]\n    mul r0, r3\n    mov r3, #0x14\n    mul r3, r5\n    lsl r0, r0, #0x10\n    lsl r3, r3, #0x10\n    lsr r0, r0, #0x10\n    lsr r3, r3, #0x10\n    add r3, r0, r3\n    add r0, r2, #0\n    sub r0, #0x32\n    cmp r3, r0\n    ble _0202D532\n    mov r5, #0\n    b _0202D53A\n    sub r2, #0x32\n    sub r0, r2, r3\n    lsl r0, r0, #0x10\n    lsr r5, r0, #0x10\n    ldrh r1, [r1, #6]\n    ldr r0, _0202D560 ; =0x000003CA\n    cmp r1, r0\n    bls _0202D546\n    mov r1, #0\n    b _0202D554\n    add r0, #0x1e\n    sub r0, r0, r1\n    mov r1, #0x1e\n    bl _s32_div_f\n    lsl r0, r0, #0x10\n    lsr r1, r0, #0x10\n    add r0, r4, r5\n    add r0, r1, r0\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    strh r0, [r6, #0x16]\n    pop {r4, r5, r6, pc}\n    _0202D560: .word 0x000003CA"
    );
    #endif
}

void sub_0202D564(void) {
    /* Original at 0x0202D564 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "ldrh r0, [r0, #0x16]\n    bx lr"
    );
    #endif
}

void sub_0202D568(void) {
    _s32_div_f(0xfa);
}

void sub_0202D57C(void) {
    /* Original at 0x0202D57C */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5}\n    cmp r1, #5\n    bne _0202D588\n    mov r0, #0\n    pop {r4, r5}\n    bx lr\n    cmp r1, #6\n    bne _0202D58E\n    mov r1, #5\n    cmp r2, #2\n    beq _0202D598\n    cmp r2, #3\n    beq _0202D5A2\n    b _0202D5B4\n    lsl r2, r1, #1\n    mov r3, #0\n    add r2, r0, r2\n    strh r3, [r2, #0xa]\n    b _0202D5B4\n    add r5, r0, #0\n    add r5, #0xa\n    lsl r4, r1, #1\n    ldrh r3, [r5, r4]\n    ldr r2, _0202D5C0 ; =0x0000FFFE\n    cmp r3, r2\n    bhs _0202D5B4\n    add r2, r3, #1\n    strh r2, [r5, r4]\n    lsl r1, r1, #1\n    add r0, r0, r1\n    ldrh r0, [r0, #0xa]\n    pop {r4, r5}\n    bx lr\n    nop\n    _0202D5C0: .word 0x0000FFFE"
    );
    #endif
}

void sub_0202D5C4(void) {
    /* Original at 0x0202D5C4 */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "cmp r1, #5\n    bne _0202D5CC\n    mov r0, #0\n    bx lr\n    cmp r1, #6\n    bne _0202D5D2\n    mov r1, #5\n    add r0, #0xa\n    lsl r1, r1, #1\n    strh r2, [r0, r1]\n    ldrh r0, [r0, r1]\n    bx lr"
    );
    #endif
}

void sub_0202D5DC(void) {
    /* Original at 0x0202D5DC */
    /* Requires manual decompilation - 44 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r3, #1\n    cmp r1, #0x10\n    blo _0202D5EC\n    bl GF_AssertFail\n    mov r0, #0\n    pop {r4, pc}\n    mov r4, #0\n    cmp r1, #0\n    bls _0202D600\n    add r4, r4, #1\n    lsl r4, r4, #0x10\n    lsl r3, r3, #0x11\n    lsr r4, r4, #0x10\n    lsr r3, r3, #0x10\n    cmp r4, r1\n    blo _0202D5F2\n    cmp r2, #0\n    beq _0202D624\n    cmp r2, #1\n    beq _0202D61C\n    cmp r2, #2\n    bne _0202D630\n    ldr r1, _0202D634 ; =0x0000FFFF\n    eor r1, r3\n    lsl r1, r1, #0x10\n    lsr r2, r1, #0x10\n    ldrh r1, [r0, #8]\n    and r1, r2\n    strh r1, [r0, #8]\n    b _0202D630\n    ldrh r1, [r0, #8]\n    orr r1, r3\n    strh r1, [r0, #8]\n    b _0202D630\n    ldrh r0, [r0, #8]\n    add r2, r0, #0\n    asr r2, r1\n    mov r0, #1\n    and r0, r2\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}\n    _0202D634: .word 0x0000FFFF"
    );
    #endif
}

void sub_0202D638(void) {
    /* Original at 0x0202D638 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "str r1, [r0, #4]\n    bx lr"
    );
    #endif
}

void sub_0202D63C(void) {
    /* Original at 0x0202D63C */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0, #4]\n    bx lr"
    );
    #endif
}

void sub_0202D640(void) {
    /* Original at 0x0202D640 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r1, #0\n    add r4, r2, #0\n    bl Save_Frontier_GetStatic\n    ldr r1, _0202D65C ; =0x00000ABC\n    add r1, r0, r1\n    lsl r0, r5, #3\n    add r0, r1, r0\n    add r1, r4, #0\n    bl MailMsg_Copy\n    pop {r3, r4, r5, pc}\n    nop\n    _0202D65C: .word 0x00000ABC"
    );
    #endif
}

void sub_0202D660(void) {
    Save_Frontier_GetStatic();
}

void sub_0202D678(void) {
    /* Original at 0x0202D678 */
    /* Requires manual decompilation - 50 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6}\n    add r4, r3, #0\n    mov r3, #1\n    cmp r2, #0\n    beq _0202D6D8\n    cmp r2, #0xc8\n    bhi _0202D6D8\n    cmp r1, #0\n    beq _0202D6D8\n    cmp r1, #0xa\n    bhi _0202D6D8\n    sub r5, r2, #1\n    sub r2, r1, #1\n    mov r1, #0xc8\n    mul r1, r2\n    add r1, r5, r1\n    lsl r1, r1, #0x10\n    lsr r1, r1, #0x10\n    lsr r6, r1, #0x1f\n    lsl r5, r1, #0x1d\n    sub r5, r5, r6\n    mov r2, #0x1d\n    ror r5, r2\n    add r2, r6, r5\n    lsl r2, r2, #0x18\n    lsr r2, r2, #0x18\n    lsl r3, r2\n    lsl r2, r3, #0x18\n    lsl r1, r1, #0x15\n    lsr r5, r2, #0x18\n    add r3, r0, #4\n    lsr r2, r1, #0x18\n    ldrb r1, [r3, r2]\n    orr r1, r5\n    strb r1, [r3, r2]\n    ldr r3, [r4]\n    ldr r1, [r4, #8]\n    lsl r5, r3, #0x18\n    ldr r3, [r4, #4]\n    lsl r1, r1, #0x18\n    lsl r3, r3, #0x18\n    lsr r3, r3, #8\n    ldr r2, [r4, #0xc]\n    lsr r1, r1, #0x10\n    orr r3, r5\n    orr r1, r3\n    orr r1, r2\n    str r1, [r0]\n    pop {r3, r4, r5, r6}\n    bx lr"
    );
    #endif
}

void sub_0202D6DC(void) {
    MI_CpuFill8(0, 0xfa);
    MI_CpuFill8(r4, 0, 4);
}

void sub_0202D6F8(void) {
    /* Original at 0x0202D6F8 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, [r0]\n    ldr r2, [r1]\n    cmp r3, r2\n    bls _0202D704\n    mov r0, #1\n    bx lr\n    ldr r3, [r0, #4]\n    ldr r2, [r1, #4]\n    cmp r3, r2\n    bls _0202D710\n    mov r0, #1\n    bx lr\n    ldr r2, [r0, #8]\n    ldr r0, [r1, #8]\n    cmp r2, r0\n    bls _0202D71C\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void sub_0202D720(void) {
    /* Original at 0x0202D720 */
    /* Requires manual decompilation - 70 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r6, r2, #0\n    add r5, r0, #0\n    add r4, r1, #0\n    mov r7, #1\n    cmp r6, #0xc8\n    bhi _0202D734\n    cmp r4, #0xa\n    bls _0202D73A\n    add sp, #0x10\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [r5]\n    lsr r1, r0, #0x18\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    str r1, [sp]\n    lsr r1, r0, #0x10\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    str r1, [sp, #4]\n    lsr r1, r0, #8\n    lsl r1, r1, #0x18\n    lsl r0, r0, #0x18\n    lsr r1, r1, #0x18\n    lsr r0, r0, #0x18\n    str r1, [sp, #8]\n    str r0, [sp, #0xc]\n    add r0, r3, #0\n    add r1, sp, #0\n    bl sub_0202D6F8\n    cmp r0, #0\n    beq _0202D772\n    add r0, r5, #0\n    bl sub_0202D6DC\n    add sp, #0x10\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    sub r1, r4, #1\n    mov r0, #0xc8\n    mul r0, r1\n    sub r2, r6, #1\n    add r0, r2, r0\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    lsr r3, r0, #0x1f\n    lsl r2, r0, #0x1d\n    lsl r0, r0, #0x15\n    lsr r0, r0, #0x18\n    add r0, r5, r0\n    sub r2, r2, r3\n    mov r1, #0x1d\n    ror r2, r1\n    add r1, r3, r2\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    add r2, r7, #0\n    lsl r2, r1\n    lsl r1, r2, #0x18\n    ldrb r0, [r0, #4]\n    lsr r1, r1, #0x18\n    tst r0, r1\n    beq _0202D7AA\n    add sp, #0x10\n    add r0, r7, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_0202D7B0(void) {
    /* Original at 0x0202D7B0 */
    /* Requires manual decompilation - 3 instructions */
    #ifdef MWERKS
    asm(
        "add r0, #0xfe\n    ldrb r0, [r0]\n    bx lr"
    );
    #endif
}

void sub_0202D7B8(void) {
    /* Original at 0x0202D7B8 */
    /* Requires manual decompilation - 3 instructions */
    #ifdef MWERKS
    asm(
        "add r0, #0xff\n    ldrb r0, [r0]\n    bx lr"
    );
    #endif
}

void sub_0202D7C0(void) {
    /* Original at 0x0202D7C0 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r0, r1, #0\n    mov r1, #0x41\n    add r4, r2, #0\n    lsl r1, r1, #2\n    ldr r2, _0202D7E8 ; =0x0000063C\n    add r1, r5, r1\n    add r6, r3, #0\n    bl MI_CpuCopy8\n    ldr r0, _0202D7EC ; =0x00000101\n    strb r4, [r5, r0]\n    sub r0, r0, #1\n    strb r6, [r5, r0]\n    mov r0, #1\n    add r5, #0xfe\n    strb r0, [r5]\n    pop {r4, r5, r6, pc}\n    nop\n    _0202D7E8: .word 0x0000063C\n    _0202D7EC: .word 0x00000101"
    );
    #endif
}

void sub_0202D7F0(void) {
    /* Original at 0x0202D7F0 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "ldr r2, _0202D800 ; =0x00000101\n    ldrb r3, [r0, r2]\n    sub r2, r2, #1\n    strb r3, [r1]\n    ldrb r0, [r0, r2]\n    strb r0, [r1, #1]\n    bx lr\n    nop\n    _0202D800: .word 0x00000101"
    );
    #endif
}

void sub_0202D804(void) {
    /* Original at 0x0202D804 */
    /* Requires manual decompilation - 71 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r1, #0\n    mov r1, #0x41\n    lsl r1, r1, #2\n    add r5, r0, r1\n    mov r0, #0xe4\n    add r4, r2, #0\n    mul r4, r0\n    ldr r0, _0202D8A0 ; =0x00002710\n    add r7, r6, #0\n    str r0, [r6]\n    add r0, r5, r4\n    add r0, #0xc9\n    ldrb r0, [r0]\n    add r7, #0x30\n    strh r0, [r6, #4]\n    add r0, r5, r4\n    add r0, #0xc8\n    ldrb r0, [r0]\n    lsl r0, r0, #0x1f\n    lsr r0, r0, #0x1f\n    beq _0202D85A\n    mov r0, #0\n    mov r1, #0x1b\n    mov r2, #0x1c\n    mov r3, #0xb\n    bl NewMsgDataFromNarc\n    add r1, r5, r4\n    add r1, #0xc8\n    ldrb r1, [r1]\n    add r2, r6, #0\n    str r0, [sp]\n    lsl r1, r1, #0x1e\n    lsr r1, r1, #0x1f\n    add r1, #0x21\n    add r2, #8\n    bl ReadMsgDataIntoU16Array\n    ldr r0, [sp]\n    bl DestroyMsgData\n    b _0202D868\n    add r0, r5, r4\n    add r1, r6, #0\n    add r0, #0xa8\n    add r1, #8\n    mov r2, #0x10\n    bl MI_CpuCopy8\n    add r0, r5, r4\n    add r1, r6, #0\n    add r0, #0xca\n    add r1, #0x18\n    mov r2, #8\n    bl MI_CpuCopy8\n    add r0, r5, r4\n    add r1, r6, #0\n    add r0, #0xd2\n    add r1, #0x20\n    mov r2, #8\n    bl MI_CpuCopy8\n    add r0, r5, r4\n    add r6, #0x28\n    add r0, #0xda\n    add r1, r6, #0\n    mov r2, #8\n    bl MI_CpuCopy8\n    add r0, r5, r4\n    add r1, r7, #0\n    mov r2, #0xa8\n    bl MI_CpuCopy8\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0202D8A0: .word 0x00002710"
    );
    #endif
}

void sub_0202D8A4(void) {
    /* Original at 0x0202D8A4 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r0, r1, #0\n    mov r1, #0x1d\n    add r4, r2, #0\n    lsl r1, r1, #6\n    mov r2, #0xff\n    add r1, r5, r1\n    lsl r2, r2, #2\n    add r6, r3, #0\n    bl MI_CpuCopy8\n    ldr r0, _0202D8CC ; =0x00000103\n    strb r4, [r5, r0]\n    sub r0, r0, #1\n    strb r6, [r5, r0]\n    mov r0, #1\n    add r5, #0xff\n    strb r0, [r5]\n    pop {r4, r5, r6, pc}\n    _0202D8CC: .word 0x00000103"
    );
    #endif
}

void sub_0202D8D0(void) {
    /* Original at 0x0202D8D0 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "ldr r2, _0202D8E0 ; =0x00000103\n    ldrb r3, [r0, r2]\n    sub r2, r2, #1\n    strb r3, [r1]\n    ldrb r0, [r0, r2]\n    strb r0, [r1, #1]\n    bx lr\n    nop\n    _0202D8E0: .word 0x00000103"
    );
    #endif
}

void sub_0202D8E4(void) {
    /* Original at 0x0202D8E4 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r0, r1, #0\n    mov r1, #0xff\n    lsl r1, r1, #2\n    bl Heap_Alloc\n    add r4, r0, #0\n    mov r0, #0x1d\n    lsl r0, r0, #6\n    mov r2, #0xff\n    add r0, r5, r0\n    add r1, r4, #0\n    lsl r2, r2, #2\n    bl MI_CpuCopy8\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_0202D908(void) {
    Save_Frontier_GetStatic();
}

void Save_FrontierData_Get(void) {
    Save_Frontier_GetStatic();
}

void sub_0202D928(void) {
    Save_Frontier_GetStatic();
}
