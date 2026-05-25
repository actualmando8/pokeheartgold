/* Decompiled from asm/unk_02031B0C.s */
#include "global.h"

void Save_ApricornBox_sizeof(void) {
    /* Original at 0x02031B0C */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "mov r0, #0x80\n    bx lr"
    );
    #endif
}

void sub_02031B10(void) {
    /* Original at 0x02031B10 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "mov r0, #0x20\n    bx lr"
    );
    #endif
}

void Save_ApricornBox_Get(void) {
    SaveArray_Get();
}

void InitApricornBox(void) {
    /* Original at 0x02031B20 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r1, #0\n    mov r2, #0x80\n    bl MI_CpuFill8\n    add r0, r4, #0\n    add r0, #0xc\n    bl sub_02031B5C\n    add r0, r4, #0\n    bl sub_02031B3C\n    pop {r4, pc}"
    );
    #endif
}

void sub_02031B3C(void) {
    sub_020325CC(0);
}

void Save_ApricornBox_Init(void) {
    InitApricornBox();
}

void sub_02031B5C(void) {
    MI_CpuFill8();
}

void ApricornBox_GiveApricorn(void) {
    GF_AssertFail(0, 0x63);
}

void ApricornBox_TakeApricorn(void) {
    GF_AssertFail(0);
}

void ApricornBox_CountApricorn(void) {
    GF_AssertFail();
}

void ApricornBox_SetKurtApricorn(void) {
    /* Original at 0x02031BB8 */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldrb r3, [r0, r1]\n    cmp r3, r2\n    bhs _02031BC6\n    bl GF_AssertFail\n    pop {r3, pc}\n    strb r1, [r0, #8]\n    strb r2, [r0, #7]\n    bl ApricornBox_TakeApricorn\n    pop {r3, pc}"
    );
    #endif
}

void ApricornBox_GetKurtQuantity(void) {
    /* Original at 0x02031BD0 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "ldrb r0, [r0, #7]\n    bx lr"
    );
    #endif
}

void ApricornBox_GetKurtBall(void) {
    /* Original at 0x02031BD4 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "ldrb r0, [r0, #8]\n    cmp r0, #7\n    blo _02031BDE\n    mov r0, #ITEM_POKE_BALL\n    bx lr\n    lsl r1, r0, #1\n    ldr r0, _02031BE8 ; =_020F68D0\n    ldrh r0, [r0, r1]\n    bx lr\n    nop\n    _02031BE8: .word _020F68D0"
    );
    #endif
}

void sub_02031BEC(void) {
    /* Original at 0x02031BEC */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, [r0, #0x1c]\n    ldr r2, _02031BFC ; =0x3FFFFFFF\n    lsl r1, r1, #0x1e\n    and r2, r3\n    orr r1, r2\n    str r1, [r0, #0x1c]\n    bx lr\n    nop\n    _02031BFC: .word 0x3FFFFFFF"
    );
    #endif
}

void sub_02031C00(void) {
    /* Original at 0x02031C00 */
    /* Requires manual decompilation - 3 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0, #0x1c]\n    lsr r0, r0, #0x1e\n    bx lr"
    );
    #endif
}

void sub_02031C08(void) {
    /* Original at 0x02031C08 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    ldrh r4, [r0, #0xa]\n    mov r3, #0\n    add r2, r3, #0\n    mov r1, #7\n    add r0, r4, #0\n    tst r0, r1\n    beq _02031C1E\n    add r0, r3, #1\n    lsl r0, r0, #0x18\n    lsr r3, r0, #0x18\n    lsl r0, r4, #0xd\n    add r2, r2, #1\n    lsr r4, r0, #0x10\n    cmp r2, #5\n    blt _02031C12\n    add r0, r3, #0\n    pop {r3, r4}\n    bx lr"
    );
    #endif
}

void sub_02031C30(void) {
    /* Original at 0x02031C30 */
    /* Requires manual decompilation - 54 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    ldrh r6, [r5, #0xa]\n    cmp r4, #7\n    blt _02031C44\n    bl GF_AssertFail\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    mov r3, #0\n    mov r1, #7\n    add r0, r6, #0\n    tst r0, r1\n    beq _02031C54\n    lsl r0, r6, #0xd\n    lsr r6, r0, #0x10\n    b _02031C96\n    add r6, r4, #1\n    mov r0, #7\n    and r0, r6\n    lsl r6, r3, #1\n    add r3, r3, r6\n    lsl r0, r3\n    lsl r0, r0, #0x10\n    ldrh r1, [r5, #0xa]\n    lsr r0, r0, #0x10\n    orr r0, r1\n    strh r0, [r5, #0xa]\n    mov r0, #2\n    ldrh r1, [r5, #0xa]\n    lsl r0, r0, #0xe\n    orr r0, r1\n    strh r0, [r5, #0xa]\n    str r2, [r5, #0x14]\n    ldrb r0, [r5, #9]\n    cmp r0, #0\n    bne _02031C7E\n    str r2, [r5, #0x18]\n    mov r0, #3\n    ldr r1, [r5, #0x1c]\n    lsl r0, r0, #0x1e\n    and r0, r1\n    str r0, [r5, #0x1c]\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #1\n    bl ApricornBox_TakeApricorn\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    add r3, r3, #1\n    cmp r3, #5\n    blt _02031C48\n    mov r0, #0\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void sub_02031CA0(void) {
    /* Original at 0x02031CA0 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl sub_02031C08\n    cmp r0, #0\n    bne _02031CB0\n    mov r0, #0\n    pop {r4, pc}\n    ldr r0, [r4, #0x1c]\n    lsl r0, r0, #2\n    lsr r0, r0, #2\n    cmp r0, #0x32\n    bhs _02031CBE\n    mov r0, #1\n    pop {r4, pc}\n    cmp r0, #0x50\n    bhs _02031CC6\n    mov r0, #2\n    pop {r4, pc}\n    mov r0, #3\n    pop {r4, pc}"
    );
    #endif
}

void sub_02031CCC(void) {
    /* Original at 0x02031CCC */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "mov r2, #0xa\n    mul r2, r1\n    ldrb r1, [r0, #9]\n    cmp r1, #0\n    beq _02031CE6\n    ldrb r1, [r0, #0xe]\n    add r1, r1, r2\n    cmp r1, #0xff\n    ble _02031CE4\n    mov r1, #0xff\n    strb r1, [r0, #0xe]\n    bx lr\n    strb r1, [r0, #0xe]\n    bx lr"
    );
    #endif
}

void sub_02031CE8(void) {
    /* Original at 0x02031CE8 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "ldrb r0, [r0, #9]\n    bx lr"
    );
    #endif
}

void sub_02031CEC(void) {
    /* Original at 0x02031CEC */
    /* Requires manual decompilation - 60 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r2, #0\n    cmp r1, #9\n    blt _02031CF6\n    mov r1, #0\n    cmp r1, #4\n    bgt _02031D12\n    ldr r0, _02031D68 ; =_020F6902\n    lsl r2, r1, #3\n    add r1, r0, r2\n    ldrh r0, [r0, r2]\n    strh r0, [r5]\n    ldrh r0, [r1, #2]\n    strh r0, [r5, #2]\n    ldrh r0, [r1, #4]\n    strh r0, [r5, #4]\n    ldrh r0, [r1, #6]\n    strh r0, [r5, #6]\n    b _02031D64\n    cmp r1, #7\n    bgt _02031D44\n    sub r1, r1, #5\n    add r0, #0x38\n    lsl r1, r1, #5\n    add r4, r0, r1\n    add r0, r4, #0\n    bl sub_02031D80\n    cmp r0, #0\n    bne _02031D32\n    add r0, r5, #0\n    bl sub_02031B5C\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    ldrh r0, [r4]\n    strh r0, [r5]\n    ldrh r0, [r4, #2]\n    strh r0, [r5, #2]\n    ldrh r0, [r4, #4]\n    strh r0, [r5, #4]\n    ldrh r0, [r4, #6]\n    strh r0, [r5, #6]\n    b _02031D64\n    ldrb r1, [r0, #9]\n    cmp r1, #0\n    bne _02031D54\n    add r0, r5, #0\n    bl sub_02031B5C\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    ldrh r1, [r0, #0xc]\n    strh r1, [r5]\n    ldrh r1, [r0, #0xe]\n    strh r1, [r5, #2]\n    ldrh r1, [r0, #0x10]\n    strh r1, [r5, #4]\n    ldrh r0, [r0, #0x12]\n    strh r0, [r5, #6]\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    _02031D68: .word _020F6902"
    );
    #endif
}

void sub_02031D6C(void) {
    sub_02031D80();
}

void sub_02031D80(void) {
    /* Original at 0x02031D80 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "mov r3, #0\n    add r2, r3, #0\n    add r1, r0, r2\n    ldrb r1, [r1, #3]\n    add r2, r2, #1\n    add r1, r3, r1\n    lsl r1, r1, #0x10\n    lsr r3, r1, #0x10\n    cmp r2, #5\n    blt _02031D84\n    cmp r3, #0x64\n    bls _02031D9A\n    mov r3, #0x64\n    lsl r0, r3, #0x18\n    lsr r0, r0, #0x18\n    bx lr"
    );
    #endif
}

void sub_02031DA0(void) {
    /* Original at 0x02031DA0 */
    /* Requires manual decompilation - 275 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r6, r1, #0\n    add r4, r0, #0\n    add r0, r6, #0\n    mov r1, #0\n    mov r2, #0xe\n    bl MI_CpuFill8\n    add r0, sp, #4\n    add r0, #2\n    mov r1, #0\n    mov r2, #0xa\n    bl MI_CpuFill8\n    mov r0, #0\n    add r1, sp, #4\n    str r0, [sp]\n    add r1, #2\n    add r2, r4, r0\n    ldrb r2, [r2, #3]\n    strb r0, [r1]\n    strb r2, [r1, #1]\n    cmp r2, #0\n    beq _02031DDC\n    ldr r2, [sp]\n    add r2, r2, #1\n    lsl r2, r2, #0x18\n    lsr r2, r2, #0x18\n    str r2, [sp]\n    add r0, r0, #1\n    add r1, r1, #2\n    cmp r0, #5\n    blt _02031DC6\n    ldr r0, [sp]\n    cmp r0, #0\n    beq _02031E3C\n    add r0, sp, #4\n    add r0, #2\n    mov r7, #0\n    mov ip, r0\n    add r5, r7, #1\n    cmp r5, #5\n    bge _02031E34\n    lsl r2, r5, #1\n    mov r1, ip\n    add r1, r1, r2\n    add r2, sp, #4\n    ldrb r4, [r1, #1]\n    ldrb r3, [r0, #1]\n    cmp r3, r4\n    bhi _02031E2C\n    cmp r3, r4\n    bne _02031E14\n    ldrb r4, [r0]\n    ldrb r3, [r1]\n    cmp r4, r3\n    blo _02031E2C\n    ldrb r3, [r0]\n    strb r3, [r2]\n    ldrb r3, [r0, #1]\n    strb r3, [r2, #1]\n    ldrb r3, [r1]\n    strb r3, [r0]\n    ldrb r3, [r1, #1]\n    strb r3, [r0, #1]\n    ldrb r3, [r2]\n    strb r3, [r1]\n    ldrb r3, [r2, #1]\n    strb r3, [r1, #1]\n    add r5, r5, #1\n    add r1, r1, #2\n    cmp r5, #5\n    blt _02031E00\n    add r7, r7, #1\n    add r0, r0, #2\n    cmp r7, #5\n    blt _02031DF2\n    add r0, sp, #4\n    ldrb r5, [r0, #0xb]\n    add r3, sp, #4\n    add r0, r6, #0\n    mov r4, #0\n    add r3, #2\n    add r0, #0xb\n    ldrb r2, [r3]\n    add r1, r6, r4\n    strb r2, [r1, #6]\n    ldrb r1, [r3, #1]\n    cmp r5, r1\n    bne _02031E5C\n    ldrb r1, [r0]\n    add r1, r1, #1\n    strb r1, [r0]\n    add r4, r4, #1\n    add r3, r3, #2\n    cmp r4, #5\n    blt _02031E4A\n    ldr r0, [sp]\n    strb r0, [r6, #0xc]\n    ldr r0, [sp]\n    cmp r0, #5\n    bls _02031E70\n    b _02031FDC\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02031E7C: ; jump table\n    ldrh r1, [r6]\n    mov r0, #0xf\n    add sp, #0x10\n    bic r1, r0\n    mov r0, #6\n    orr r0, r1\n    strh r0, [r6]\n    pop {r3, r4, r5, r6, r7, pc}\n    add r1, sp, #4\n    add r0, r6, #0\n    add r1, #2\n    mov r2, #0\n    bl sub_02032588\n    ldrh r1, [r6, #2]\n    mov r0, #0xf\n    bic r1, r0\n    mov r0, #6\n    orr r0, r1\n    strh r0, [r6, #2]\n    b _02031FDC\n    add r1, sp, #4\n    add r0, r6, #0\n    add r1, #2\n    mov r2, #0\n    bl sub_02032588\n    add r0, r6, #2\n    add r1, sp, #8\n    mov r2, #1\n    bl sub_02032588\n    ldrh r1, [r6, #4]\n    mov r0, #0xf\n    bic r1, r0\n    mov r0, #6\n    orr r0, r1\n    strh r0, [r6, #4]\n    b _02031FDC\n    add r1, sp, #4\n    add r0, r6, #0\n    add r1, #2\n    mov r2, #0\n    bl sub_02032588\n    add r0, r6, #2\n    add r1, sp, #8\n    mov r2, #1\n    bl sub_02032588\n    add r1, sp, #8\n    add r0, r6, #4\n    add r1, #2\n    mov r2, #2\n    bl sub_02032588\n    b _02031FDC\n    add r0, sp, #4\n    ldrb r2, [r0, #3]\n    ldrb r1, [r0, #9]\n    sub r1, r2, r1\n    cmp r1, #0xc\n    bgt _02031F88\n    ldrh r3, [r6]\n    mov r2, #0xf\n    mov r1, #5\n    bic r3, r2\n    orr r1, r3\n    strh r1, [r6]\n    ldrb r3, [r0, #3]\n    ldrh r1, [r6]\n    ldr r4, _02031FE4 ; =0xFFFF00FF\n    lsl r3, r3, #0x18\n    and r1, r4\n    lsr r3, r3, #0x10\n    orr r1, r3\n    strh r1, [r6]\n    ldrh r1, [r6, #2]\n    mov r3, #6\n    bic r1, r2\n    orr r1, r3\n    strh r1, [r6, #2]\n    ldrb r5, [r0, #5]\n    ldrh r1, [r6, #2]\n    lsl r5, r5, #0x18\n    and r1, r4\n    lsr r5, r5, #0x10\n    orr r1, r5\n    strh r1, [r6, #2]\n    ldrh r1, [r6, #4]\n    bic r1, r2\n    orr r1, r3\n    strh r1, [r6, #4]\n    ldrh r1, [r6, #4]\n    add r2, r1, #0\n    ldrb r1, [r0, #7]\n    and r2, r4\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x10\n    orr r1, r2\n    strh r1, [r6, #4]\n    mov r1, #1\n    strb r1, [r6, #0xc]\n    ldrb r0, [r0, #3]\n    cmp r0, #0x14\n    bls _02031F6A\n    ldrh r1, [r6]\n    mov r0, #0xf0\n    bic r1, r0\n    mov r0, #0x30\n    orr r0, r1\n    strh r0, [r6]\n    b _02031FDC\n    cmp r0, #7\n    ldrh r1, [r6]\n    bls _02031F7C\n    mov r0, #0xf0\n    bic r1, r0\n    mov r0, #0x20\n    orr r0, r1\n    strh r0, [r6]\n    b _02031FDC\n    mov r0, #0xf0\n    bic r1, r0\n    mov r0, #0x10\n    orr r0, r1\n    strh r0, [r6]\n    b _02031FDC\n    add r1, sp, #4\n    add r0, r6, #0\n    add r1, #2\n    mov r2, #0\n    bl sub_02032588\n    add r0, r6, #2\n    add r1, sp, #8\n    mov r2, #1\n    bl sub_02032588\n    ldr r0, [sp]\n    cmp r0, #4\n    bne _02031FB2\n    add r1, sp, #0xc\n    add r0, r6, #4\n    add r1, #2\n    mov r2, #2\n    bl sub_02032588\n    b _02031FDC\n    ldrh r1, [r6, #4]\n    mov r0, #0xf\n    bic r1, r0\n    mov r0, #5\n    orr r0, r1\n    strh r0, [r6, #4]\n    ldrh r1, [r6, #4]\n    mov r0, #0xf0\n    bic r1, r0\n    mov r0, #0x10\n    orr r0, r1\n    strh r0, [r6, #4]\n    ldrh r1, [r6, #4]\n    ldr r0, _02031FE4 ; =0xFFFF00FF\n    and r1, r0\n    add r0, sp, #4\n    ldrb r0, [r0, #7]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x10\n    orr r0, r1\n    strh r0, [r6, #4]\n    ldr r0, [sp]\n    strb r0, [r6, #0xc]\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    _02031FE4: .word 0xFFFF00FF"
    );
    #endif
}

void sub_02031FE8(void) {
    sub_02031DA0(5);
}

void sub_02032004(void) {
    sub_02031DA0(0);
}

void sub_02032024(void) {
    /* Original at 0x02032024 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldrb r0, [r4, #9]\n    cmp r0, #0\n    bne _02032032\n    mov r0, #0\n    pop {r4, pc}\n    sub r0, r0, #1\n    strb r0, [r4, #9]\n    ldrb r0, [r4, #9]\n    cmp r0, #0\n    bne _02032054\n    add r0, r4, #0\n    add r0, #0xc\n    bl sub_02031B5C\n    mov r0, #0\n    str r0, [r4, #0x18]\n    str r0, [r4, #0x14]\n    mov r0, #3\n    ldr r1, [r4, #0x1c]\n    lsl r0, r0, #0x1e\n    and r0, r1\n    str r0, [r4, #0x1c]\n    ldrb r0, [r4, #9]\n    pop {r4, pc}"
    );
    #endif
}

void sub_02032058(void) {
    /* Original at 0x02032058 */
    /* Requires manual decompilation - 61 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldrh r0, [r5, #0xa]\n    add r4, r1, #0\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x1f\n    bne _0203206C\n    ldrb r0, [r5, #9]\n    cmp r0, #0\n    beq _020320D8\n    ldr r0, [r5, #0x18]\n    sub r6, r4, r0\n    cmp r6, #0x64\n    blo _02032094\n    add r0, r6, #0\n    mov r1, #0x64\n    bl _u32_div_f\n    add r1, r0, #0\n    lsl r1, r1, #0x18\n    add r0, r5, #0\n    lsr r1, r1, #0x18\n    bl sub_02032340\n    add r0, r6, #0\n    mov r1, #0x64\n    bl _u32_div_f\n    sub r0, r4, r1\n    str r0, [r5, #0x18]\n    ldrh r0, [r5, #0xa]\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x1f\n    beq _020320D8\n    ldr r1, [r5, #0x1c]\n    mov r0, #3\n    lsl r0, r0, #0x1e\n    add r2, r1, #0\n    and r2, r0\n    ldr r0, [r5, #0x14]\n    sub r1, r4, r0\n    ldr r0, _020320DC ; =0x3FFFFFFF\n    and r0, r1\n    orr r0, r2\n    str r0, [r5, #0x1c]\n    lsl r0, r0, #2\n    lsr r0, r0, #2\n    cmp r0, #0x64\n    blo _020320D8\n    ldrb r0, [r5, #9]\n    cmp r0, #0\n    beq _020320CA\n    add r0, r5, #0\n    mov r1, #3\n    bl sub_02031BEC\n    b _020320D2\n    add r0, r5, #0\n    mov r1, #2\n    bl sub_02031BEC\n    add r0, r5, #0\n    bl sub_02032354\n    pop {r4, r5, r6, pc}\n    nop\n    _020320DC: .word 0x3FFFFFFF"
    );
    #endif
}

void sub_020320E0(void) {
    /* Original at 0x020320E0 */
    /* Requires manual decompilation - 49 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r0, #0\n    add r5, r1, #0\n    add r0, r3, #0\n    mov r1, #0x20\n    add r6, r2, #0\n    bl Heap_AllocAtEnd\n    mov r1, #0\n    mov r2, #0x20\n    add r4, r0, #0\n    bl MI_CpuFill8\n    add r0, r5, #0\n    bl PlayerProfile_GetTrainerID\n    str r0, [r4]\n    add r0, r5, #0\n    bl PlayerProfile_GetTrainerGender\n    strb r0, [r4, #4]\n    add r0, r5, #0\n    bl PlayerProfile_GetLanguage\n    strb r0, [r4, #5]\n    add r0, r5, #0\n    bl PlayerProfile_GetVersion\n    strb r0, [r4, #6]\n    add r0, r4, #0\n    add r0, #8\n    mov r1, #8\n    bl StringFillEOS\n    add r0, r5, #0\n    bl PlayerProfile_GetNamePtr\n    add r1, r0, #0\n    add r0, r4, #0\n    add r0, #8\n    mov r2, #7\n    bl CopyU16StringArrayN\n    add r2, r4, #0\n    add r0, r7, #0\n    mov r1, #8\n    add r2, #0x18\n    bl sub_02031CEC\n    ldr r0, _02032154 ; =0x0000FFFF\n    cmp r6, r0\n    bls _0203214C\n    strh r0, [r4, #0x18]\n    b _0203214E\n    strh r6, [r4, #0x18]\n    add r0, r4, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02032154: .word 0x0000FFFF"
    );
    #endif
}

void sub_02032158(void) {
    /* Original at 0x02032158 */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r3, [r0]\n    ldr r2, [r1]\n    cmp r3, r2\n    beq _02032166\n    mov r0, #0\n    pop {r3, pc}\n    ldrb r3, [r0, #4]\n    ldrb r2, [r1, #4]\n    cmp r3, r2\n    beq _02032172\n    mov r0, #0\n    pop {r3, pc}\n    ldrb r3, [r0, #6]\n    ldrb r2, [r1, #6]\n    cmp r3, r2\n    beq _0203217E\n    mov r0, #0\n    pop {r3, pc}\n    ldrb r3, [r0, #5]\n    ldrb r2, [r1, #5]\n    cmp r3, r2\n    beq _0203218A\n    mov r0, #0\n    pop {r3, pc}\n    add r0, #8\n    add r1, #8\n    bl StringNotEqual\n    cmp r0, #0\n    bne _0203219A\n    mov r0, #1\n    pop {r3, pc}\n    mov r0, #0\n    pop {r3, pc}"
    );
    #endif
}

void sub_020321A0(void) {
    /* Original at 0x020321A0 */
    /* Requires manual decompilation - 130 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    mov r4, #0\n    add r5, r0, #0\n    str r0, [sp]\n    add r7, r1, #0\n    str r2, [sp, #4]\n    str r3, [sp, #8]\n    str r4, [sp, #0x10]\n    add r5, #0x38\n    add r0, r5, #0\n    bl sub_02031D6C\n    cmp r0, #0\n    beq _020321CC\n    ldr r0, [sp, #0x10]\n    add r4, r4, #1\n    add r0, r0, #1\n    add r5, #0x20\n    str r0, [sp, #0x10]\n    cmp r4, #3\n    blt _020321B4\n    mov r0, #0\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #4]\n    cmp r0, #0\n    ble _020322A6\n    ldr r1, [sp, #0xc]\n    ldr r0, [sp, #8]\n    cmp r1, r0\n    beq _02032298\n    add r0, r7, #0\n    add r0, #0x18\n    bl sub_02031D6C\n    cmp r0, #0\n    beq _02032298\n    mov r4, #0\n    str r4, [sp, #0x14]\n    ldr r5, [sp]\n    ldr r6, [sp, #0x14]\n    add r5, #0x20\n    add r0, r7, #0\n    add r1, r5, #0\n    bl sub_02032158\n    cmp r0, #0\n    beq _0203220A\n    lsl r0, r6, #0x18\n    lsr r4, r0, #0x18\n    mov r0, #1\n    str r0, [sp, #0x14]\n    b _02032212\n    add r6, r6, #1\n    add r5, #0x20\n    cmp r6, #3\n    blt _020321F4\n    ldr r0, [sp, #0x10]\n    cmp r0, #3\n    blt _02032222\n    mov r0, #2\n    mov ip, r0\n    mov r0, #1\n    str r0, [sp, #0x14]\n    b _02032242\n    ldr r0, [sp, #0x14]\n    cmp r0, #0\n    beq _02032234\n    ldr r0, [sp, #0x10]\n    sub r0, r0, #1\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    mov ip, r0\n    b _02032242\n    ldr r0, [sp, #0x10]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    mov ip, r0\n    ldr r0, [sp, #0x10]\n    add r0, r0, #1\n    str r0, [sp, #0x10]\n    ldr r0, [sp, #0x14]\n    cmp r0, #0\n    beq _0203227C\n    mov r0, ip\n    cmp r4, r0\n    bhs _0203227C\n    ldr r0, [sp, #0x10]\n    sub r6, r0, #1\n    cmp r4, r6\n    bge _0203227C\n    ldr r0, [sp]\n    lsl r1, r4, #5\n    add r5, r0, r1\n    add r3, r5, #0\n    add r2, r5, #0\n    add r3, #0x40\n    add r2, #0x20\n    add r5, r2, #0\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    add r4, r4, #1\n    stmia r2!, {r0, r1}\n    cmp r4, r6\n    blt _0203225C\n    mov r0, ip\n    lsl r1, r0, #5\n    ldr r0, [sp]\n    add r3, r7, #0\n    add r2, r0, r1\n    add r2, #0x20\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldr r0, [sp, #0xc]\n    add r7, #0x20\n    add r1, r0, #1\n    ldr r0, [sp, #4]\n    str r1, [sp, #0xc]\n    cmp r1, r0\n    blt _020321D6\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_020322AC(void) {
    /* Original at 0x020322AC */
    /* Requires manual decompilation - 40 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r2, #0\n    add r4, r0, #0\n    add r5, r1, #0\n    mov r0, #9\n    add r1, r7, #0\n    bl String_New\n    add r6, r0, #0\n    cmp r5, #5\n    bge _020322E2\n    mov r0, #1\n    mov r1, #0x1b\n    mov r2, #0x15\n    add r3, r7, #0\n    bl NewMsgDataFromNarc\n    add r5, #0xe\n    add r4, r0, #0\n    add r1, r5, #0\n    add r2, r6, #0\n    bl ReadMsgDataIntoString\n    add r0, r4, #0\n    bl DestroyMsgData\n    b _02032304\n    cmp r5, #8\n    bge _02032304\n    sub r0, r5, #5\n    lsl r0, r0, #0x18\n    lsr r5, r0, #0x13\n    add r0, r4, #0\n    add r0, #0x38\n    add r0, r0, r5\n    bl sub_02031D6C\n    cmp r0, #0\n    beq _02032304\n    add r4, #0x28\n    add r0, r6, #0\n    add r1, r4, r5\n    bl CopyU16ArrayToString\n    add r0, r6, #0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_02032308(void) {
    /* Original at 0x02032308 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #8\n    add r4, r2, #0\n    add r2, sp, #0\n    bl sub_02031CEC\n    mov r0, #1\n    mov r1, #0x1b\n    mov r2, #0x15\n    add r3, r4, #0\n    bl NewMsgDataFromNarc\n    add r5, r0, #0\n    add r0, sp, #0\n    bl sub_02032004\n    add r1, r0, #0\n    add r0, r5, #0\n    add r1, #0x13\n    bl NewString_ReadMsgData\n    add r4, r0, #0\n    add r0, r5, #0\n    bl DestroyMsgData\n    add r0, r4, #0\n    add sp, #8\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_02032340(void) {
    /* Original at 0x02032340 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "ldrb r2, [r0, #0xe]\n    add r1, r2, r1\n    cmp r1, #0xff\n    ble _0203234E\n    mov r1, #0xff\n    strb r1, [r0, #0xe]\n    bx lr\n    strb r1, [r0, #0xe]\n    bx lr"
    );
    #endif
}

void sub_02032354(void) {
    /* Original at 0x02032354 */
    /* Requires manual decompilation - 206 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x3c\n    str r0, [sp]\n    ldrh r0, [r0, #0xa]\n    add r1, sp, #0x34\n    add r1, #1\n    str r0, [sp, #0x14]\n    ldr r0, [sp]\n    add r0, #0xc\n    bl sub_020324F4\n    mov r0, #0\n    str r0, [sp, #0x28]\n    mov r0, #0\n    str r0, [sp, #0x10]\n    ldr r0, [sp, #0x14]\n    mov r1, #7\n    and r0, r1\n    lsl r0, r0, #0x18\n    lsr r1, r0, #0x18\n    bne _02032380\n    b _020324CA\n    ldr r0, [sp, #0x10]\n    str r0, [sp, #0x24]\n    ldr r0, [sp, #0x10]\n    str r0, [sp, #0x18]\n    ldr r0, [sp, #0x10]\n    str r0, [sp, #0x1c]\n    sub r0, r1, #1\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #0x20]\n    ldr r0, [sp, #0x10]\n    add r1, sp, #0x30\n    strb r0, [r1]\n    add r0, r0, #1\n    add r1, r1, #1\n    cmp r0, #5\n    blt _02032398\n    mov r0, #0\n    add r2, sp, #0x30\n    add r7, sp, #0x34\n    str r0, [sp, #4]\n    add r7, #1\n    mov ip, r2\n    ldr r0, [sp, #4]\n    add r1, r0, #1\n    cmp r1, #5\n    bge _020323DE\n    mov r0, ip\n    add r3, r0, r1\n    mov r0, #0\n    mov r5, #0\n    ldrsb r4, [r3, r0]\n    ldrsb r5, [r2, r5]\n    ldrsb r0, [r7, r4]\n    ldrsb r6, [r7, r5]\n    cmp r6, r0\n    bgt _020323D6\n    cmp r6, r0\n    bne _020323D2\n    cmp r5, r4\n    blt _020323D6\n    strb r4, [r2]\n    strb r5, [r3]\n    add r1, r1, #1\n    add r3, r3, #1\n    cmp r1, #5\n    blt _020323BA\n    ldr r0, [sp, #4]\n    add r2, r2, #1\n    add r0, r0, #1\n    str r0, [sp, #4]\n    cmp r0, #2\n    blt _020323AE\n    ldr r0, [sp, #0x20]\n    ldr r2, _020324F0 ; =_020F68DE\n    lsl r1, r0, #2\n    add r0, r0, r1\n    add r1, r2, r0\n    add r2, sp, #0x34\n    mov r4, #0\n    add r3, sp, #0x30\n    ldrsb r0, [r3, r4]\n    add r2, #1\n    str r0, [sp, #8]\n    add r0, r2, r0\n    str r0, [sp, #0xc]\n    mov r0, #1\n    ldrsb r7, [r3, r0]\n    add r0, r2, r7\n    str r0, [sp, #0x2c]\n    mov r0, #0\n    ldrsb r5, [r1, r0]\n    ldrsb r3, [r2, r0]\n    add r0, r3, r5\n    lsl r0, r0, #0x18\n    asr r0, r0, #0x18\n    cmp r5, #0\n    ble _0203243E\n    ldr r6, [sp, #0xc]\n    mov r5, #0\n    ldrsb r5, [r6, r5]\n    cmp r5, #0\n    beq _0203243E\n    ldr r5, [sp, #8]\n    cmp r5, r4\n    beq _0203243E\n    ldr r5, [sp, #0x2c]\n    mov r6, #0\n    ldrsb r5, [r5, r6]\n    cmp r5, #0\n    beq _0203243E\n    cmp r7, r4\n    beq _0203243E\n    mov r5, #1\n    str r5, [sp, #0x10]\n    cmp r0, #0x3f\n    blt _02032446\n    mov r0, #0x3f\n    b _0203244C\n    cmp r0, #0\n    bge _0203244C\n    mov r0, #0\n    ldr r5, [sp, #0x20]\n    cmp r5, #6\n    beq _02032456\n    cmp r0, r3\n    bgt _02032468\n    ldr r3, [sp, #0x1c]\n    cmp r0, r3\n    ble _02032468\n    lsl r3, r0, #0x18\n    lsr r3, r3, #0x18\n    str r3, [sp, #0x1c]\n    lsl r3, r4, #0x18\n    lsr r3, r3, #0x18\n    str r3, [sp, #0x18]\n    strb r0, [r2]\n    ldr r3, [sp, #0x24]\n    add r4, r4, #1\n    add r0, r3, r0\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #0x24]\n    add r1, r1, #1\n    add r2, r2, #1\n    cmp r4, #5\n    blt _0203240C\n    ldr r0, [sp, #0x14]\n    lsl r0, r0, #0xd\n    lsr r0, r0, #0x10\n    str r0, [sp, #0x14]\n    ldr r0, [sp, #0x10]\n    cmp r0, #0\n    beq _0203249E\n    ldr r0, [sp]\n    ldrb r1, [r0, #0xe]\n    cmp r1, #0xa\n    bhs _0203249A\n    mov r1, #0\n    strb r1, [r0, #0xe]\n    b _0203249E\n    sub r1, #0xa\n    strb r1, [r0, #0xe]\n    ldr r0, [sp, #0x20]\n    cmp r0, #5\n    beq _020324BE\n    ldr r0, [sp, #0x24]\n    cmp r0, #0x64\n    bls _020324BE\n    add r2, sp, #0x34\n    ldr r0, [sp, #0x18]\n    add r2, #1\n    ldrsb r1, [r2, r0]\n    ldr r0, [sp, #0x24]\n    sub r0, #0x64\n    str r0, [sp, #0x24]\n    sub r1, r1, r0\n    ldr r0, [sp, #0x18]\n    strb r1, [r2, r0]\n    ldr r0, [sp, #0x28]\n    add r0, r0, #1\n    str r0, [sp, #0x28]\n    cmp r0, #5\n    bge _020324CA\n    b _0203236E\n    mov r4, #0\n    add r3, sp, #0x34\n    add r3, #1\n    add r1, r4, #0\n    ldrsb r2, [r3, r1]\n    ldr r0, [sp]\n    add r3, r3, #1\n    add r0, r0, r4\n    add r4, r4, #1\n    strb r2, [r0, #0xf]\n    cmp r4, #5\n    blt _020324D2\n    ldr r0, [sp]\n    mov r1, #3\n    strb r1, [r0, #9]\n    mov r1, #0\n    strh r1, [r0, #0xa]\n    add sp, #0x3c\n    pop {r4, r5, r6, r7, pc}\n    _020324F0: .word _020F68DE"
    );
    #endif
}

void sub_020324F4(void) {
    /* Original at 0x020324F4 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "mov r3, #0\n    add r2, r0, r3\n    ldrb r2, [r2, #3]\n    strb r2, [r1, r3]\n    add r3, r3, #1\n    cmp r3, #5\n    blt _020324F6\n    bx lr"
    );
    #endif
}

void sub_02032504(void) {
    /* Original at 0x02032504 */
    /* Requires manual decompilation - 65 instructions */
    #ifdef MWERKS
    asm(
        "cmp r1, #0\n    bne _0203250C\n    mov r0, #0\n    bx lr\n    cmp r0, #0\n    beq _0203251A\n    cmp r0, #1\n    beq _0203254A\n    cmp r0, #2\n    beq _0203256A\n    b _02032582\n    cmp r1, #0x3e\n    bls _02032522\n    mov r0, #6\n    bx lr\n    cmp r1, #0x32\n    bls _0203252A\n    mov r0, #5\n    bx lr\n    cmp r1, #0x28\n    bls _02032532\n    mov r0, #4\n    bx lr\n    cmp r1, #0x1e\n    bls _0203253A\n    mov r0, #3\n    bx lr\n    cmp r1, #0x14\n    bls _02032542\n    mov r0, #2\n    bx lr\n    cmp r1, #0\n    beq _02032582\n    mov r0, #1\n    bx lr\n    cmp r1, #0x28\n    bls _02032552\n    mov r0, #4\n    bx lr\n    cmp r1, #0x1e\n    bls _0203255A\n    mov r0, #3\n    bx lr\n    cmp r1, #0x14\n    bls _02032562\n    mov r0, #2\n    bx lr\n    cmp r1, #0\n    beq _02032582\n    mov r0, #1\n    bx lr\n    cmp r1, #0x14\n    bls _02032572\n    mov r0, #3\n    bx lr\n    cmp r1, #0xa\n    bls _0203257A\n    mov r0, #2\n    bx lr\n    cmp r1, #0\n    beq _02032582\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void sub_02032588(void) {
    /* Original at 0x02032588 */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    ldrh r0, [r4]\n    ldrb r5, [r1]\n    mov r3, #0xf\n    bic r0, r3\n    mov r3, #0xf\n    and r3, r5\n    orr r0, r3\n    strh r0, [r4]\n    ldrh r3, [r4]\n    ldr r0, _020325C8 ; =0xFFFF00FF\n    and r3, r0\n    ldrb r0, [r1, #1]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x10\n    orr r0, r3\n    strh r0, [r4]\n    lsl r0, r2, #0x18\n    ldrb r1, [r1, #1]\n    lsr r0, r0, #0x18\n    bl sub_02032504\n    lsl r0, r0, #0x1c\n    ldrh r2, [r4]\n    mov r1, #0xf0\n    lsr r0, r0, #0x18\n    bic r2, r1\n    orr r0, r2\n    strh r0, [r4]\n    pop {r3, r4, r5, pc}\n    nop\n    _020325C8: .word 0xFFFF00FF"
    );
    #endif
}

void sub_020325CC(void) {
    /* Original at 0x020325CC */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r1, #0\n    mov r2, #0x20\n    bl MI_CpuFill8\n    add r0, r4, #0\n    add r0, #0x18\n    bl sub_02031B5C\n    add r4, #8\n    add r0, r4, #0\n    mov r1, #8\n    bl StringFillEOS\n    pop {r4, pc}"
    );
    #endif
}
