/* Decompiled from asm/unk_02014A08.s */
#include "global.h"

void sub_02014A08(void) {
    Heap_Alloc(0xc);
    *((u8*)(r0 + 1)) = 0;
    *((u8*)(r0 + 2)) = 0;
    *((u8*)(r0 + 3)) = 0;
    *((u8*)(r0 + 4)) = 0;
    *((u8*)(r0 + 5)) = 0;
    *((u8*)(r0 + 6)) = 0;
    *((u8*)(r0 + 7)) = 0;
    *((u8*)(r0 + 8)) = 0;
    *((u8*)(r0 + 9)) = 0;
    *((u8*)(r0 + 0xa)) = 0;
    *((u8*)(r0 + 0xb)) = 0;
    *((u8*)(r0 + 9)) = 1;
    *((u32*)(r0 + 4)) = r4;
}

void sub_02014A38(void) {
    /* Original at 0x02014A38 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bne _02014A42\n    bl GF_AssertFail\n    add r0, r4, #0\n    bl Heap_Free\n    pop {r4, pc}"
    );
    #endif
}

void sub_02014A4C(void) {
    GF_AssertFail();
}

void sub_02014A60(void) {
    GF_AssertFail(1);
}

void sub_02014A78(void) {
    GF_AssertFail();
}

void sub_02014A8C(void) {
    /* Original at 0x02014A8C */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "cmp r0, #0\n    beq _02014A9E\n    ldrb r1, [r0, #9]\n    cmp r1, #0\n    beq _02014A9E\n    ldrb r2, [r0, #8]\n    mov r1, #1\n    eor r1, r2\n    strb r1, [r0, #8]\n    bx lr"
    );
    #endif
}

void sub_02014AA0(void) {
    MI_StopDma(0);
    MI_WaitDma(0);
}

void sub_02014AB0(void) {
    /* Original at 0x02014AB0 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r0, #0\n    add r5, r1, #0\n    add r4, r2, #0\n    cmp r3, #1\n    bne _02014ACA\n    mov r0, #0\n    add r1, r6, #0\n    add r2, r5, #0\n    add r3, r4, #0\n    bl MI_HBlankDmaCopy32\n    pop {r4, r5, r6, pc}\n    mov r0, #0\n    add r1, r6, #0\n    add r2, r5, #0\n    add r3, r4, #0\n    bl MI_HBlankDmaCopy16\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void sub_02014AD8(void) {
    /* Original at 0x02014AD8 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    ldr r1, _02014B04 ; =0x0000079C\n    add r5, r0, #0\n    bl Heap_Alloc\n    ldr r2, _02014B04 ; =0x0000079C\n    mov r1, #0\n    add r4, r0, #0\n    bl memset\n    mov r2, #3\n    lsl r2, r2, #8\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r4, r2\n    bl sub_02014A08\n    mov r1, #6\n    lsl r1, r1, #8\n    str r0, [r4, r1]\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}\n    _02014B04: .word 0x0000079C"
    );
    #endif
}

void sub_02014B08(void) {
    /* Original at 0x02014B08 */
    /* Requires manual decompilation - 63 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    add r6, r2, #0\n    add r7, r3, #0\n    cmp r5, #0\n    bne _02014B1A\n    bl GF_AssertFail\n    ldr r0, _02014B88 ; =0x00000604\n    ldr r0, [r5, r0]\n    cmp r0, #0\n    beq _02014B26\n    bl GF_AssertFail\n    ldr r0, _02014B8C ; =0x0000078C\n    mov r2, #0\n    strb r4, [r5, r0]\n    add r1, r0, #1\n    strb r6, [r5, r1]\n    add r1, r0, #0\n    add r1, #0xc\n    strh r2, [r5, r1]\n    add r2, sp, #8\n    mov r1, #0x14\n    ldrsh r2, [r2, r1]\n    add r1, r0, #0\n    add r1, #0xe\n    strh r2, [r5, r1]\n    add r1, r0, #4\n    ldr r2, [sp, #0x20]\n    add r0, #8\n    str r2, [r5, r1]\n    ldr r1, [sp, #0x24]\n    ldr r3, [sp, #0x18]\n    str r1, [r5, r0]\n    ldr r0, _02014B90 ; =0x0000060C\n    mov r1, #0xc0\n    add r0, r5, r0\n    add r2, r7, #0\n    bl sub_02014C60\n    ldr r0, _02014B94 ; =sub_02014CBC\n    ldr r2, [sp, #0x28]\n    add r1, r5, #0\n    bl SysTask_CreateOnMainQueue\n    ldr r1, _02014B88 ; =0x00000604\n    mov r2, #3\n    str r0, [r5, r1]\n    ldr r0, _02014B98 ; =0x00000794\n    add r1, r5, #0\n    ldr r0, [r5, r0]\n    lsl r2, r2, #8\n    bl MIi_CpuClear32\n    ldr r0, _02014B98 ; =0x00000794\n    mov r2, #3\n    lsl r2, r2, #8\n    ldr r0, [r5, r0]\n    add r1, r5, r2\n    bl MIi_CpuClear32\n    pop {r3, r4, r5, r6, r7, pc}\n    _02014B88: .word 0x00000604\n    _02014B8C: .word 0x0000078C\n    _02014B90: .word 0x0000060C\n    _02014B94: .word sub_02014CBC\n    _02014B98: .word 0x00000794"
    );
    #endif
}

void sub_02014B9C(void) {
    /* Original at 0x02014B9C */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bne _02014BA6\n    bl GF_AssertFail\n    ldr r0, _02014BD0 ; =0x00000604\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    beq _02014BCC\n    bl SysTask_Destroy\n    ldr r0, _02014BD0 ; =0x00000604\n    mov r1, #0\n    str r1, [r4, r0]\n    sub r0, r0, #4\n    ldr r0, [r4, r0]\n    bl sub_02014A4C\n    ldr r1, _02014BD4 ; =0x00000794\n    mov r2, #3\n    ldr r1, [r4, r1]\n    lsl r2, r2, #8\n    bl memset\n    pop {r4, pc}\n    nop\n    _02014BD0: .word 0x00000604\n    _02014BD4: .word 0x00000794"
    );
    #endif
}

void sub_02014BD8(void) {
    /* Original at 0x02014BD8 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl sub_02014B9C\n    bl sub_02014D68\n    mov r0, #6\n    lsl r0, r0, #8\n    ldr r0, [r4, r0]\n    bl sub_02014A38\n    add r0, r4, #0\n    bl Heap_Free\n    pop {r4, pc}"
    );
    #endif
}

void sub_02014BF8(void) {
    /* Original at 0x02014BF8 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #6\n    lsl r1, r1, #8\n    ldr r3, _02014C04 ; =sub_02014A4C\n    ldr r0, [r0, r1]\n    bx r3\n    nop\n    _02014C04: .word sub_02014A4C"
    );
    #endif
}

void sub_02014C08(void) {
    /* Original at 0x02014C08 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    beq _02014C36\n    ldr r0, _02014C38 ; =0x00000604\n    ldr r1, [r4, r0]\n    cmp r1, #0\n    beq _02014C36\n    sub r0, r0, #4\n    ldr r0, [r4, r0]\n    bl sub_02014A8C\n    mov r0, #6\n    lsl r0, r0, #8\n    ldr r0, [r4, r0]\n    bl sub_02014A4C\n    add r1, r0, #0\n    ldr r0, _02014C3C ; =0x00000794\n    mov r2, #3\n    ldr r0, [r4, r0]\n    lsl r2, r2, #8\n    bl MIi_CpuClear32\n    pop {r4, pc}\n    _02014C38: .word 0x00000604\n    _02014C3C: .word 0x00000794"
    );
    #endif
}

void sub_02014C40(void) {
    /* Original at 0x02014C40 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    beq _02014C58\n    ldr r0, _02014C5C ; =0x00000604\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    beq _02014C58\n    bl sub_02014D68\n    add r0, r4, #0\n    bl sub_02014D70\n    pop {r4, pc}\n    nop\n    _02014C5C: .word 0x00000604"
    );
    #endif
}

void sub_02014C60(void) {
    /* Original at 0x02014C60 */
    /* Requires manual decompilation - 43 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    mov r4, #0\n    add r7, r1, #0\n    add r5, r0, #0\n    add r6, r4, #0\n    str r2, [sp]\n    cmp r7, #0\n    bls _02014CAE\n    asr r0, r3, #0x1f\n    str r3, [sp, #4]\n    str r0, [sp, #8]\n    asr r0, r4, #4\n    lsl r1, r0, #2\n    ldr r0, _02014CB4 ; =FX_SinCosTable_\n    ldr r2, [sp, #4]\n    ldrsh r0, [r0, r1]\n    ldr r3, [sp, #8]\n    asr r1, r0, #0x1f\n    bl _ll_mul\n    mov r2, #2\n    lsl r2, r2, #0xa\n    add r0, r0, r2\n    ldr r2, _02014CB8 ; =0x00000000\n    adc r1, r2\n    lsl r1, r1, #0x14\n    lsr r0, r0, #0xc\n    orr r0, r1\n    asr r0, r0, #0xc\n    strh r0, [r5]\n    ldr r0, [sp]\n    add r6, r6, #1\n    add r0, r4, r0\n    lsl r0, r0, #0x10\n    lsr r4, r0, #0x10\n    add r5, r5, #2\n    cmp r6, r7\n    blo _02014C78\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _02014CB4: .word FX_SinCosTable_\n    _02014CB8: .word 0x00000000"
    );
    #endif
}

void sub_02014CBC(void) {
    /* Original at 0x02014CBC */
    /* Requires manual decompilation - 78 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    mov r0, #6\n    add r6, r1, #0\n    lsl r0, r0, #8\n    ldr r0, [r6, r0]\n    bl sub_02014A4C\n    add r5, r0, #0\n    ldr r0, _02014D58 ; =0x00000798\n    mov r1, #0x64\n    ldrsh r0, [r6, r0]\n    bl _s32_div_f\n    lsl r0, r0, #0x18\n    lsr r3, r0, #0x18\n    ldr r0, _02014D5C ; =0x0000078C\n    ldrb r4, [r6, r0]\n    add r0, r0, #1\n    ldrb r0, [r6, r0]\n    cmp r4, r0\n    bgt _02014D24\n    lsl r0, r4, #2\n    add r5, r5, r0\n    ldr r2, [r5]\n    lsl r0, r2, #0x10\n    asr r7, r0, #0x10\n    lsl r0, r3, #1\n    add r1, r6, r0\n    ldr r0, _02014D60 ; =0x0000060C\n    ldrsh r0, [r1, r0]\n    add r0, r7, r0\n    lsl r0, r0, #0x10\n    asr r1, r0, #0x10\n    lsr r0, r2, #0x10\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    lsl r1, r1, #0x10\n    lsl r0, r0, #0x10\n    lsr r1, r1, #0x10\n    orr r0, r1\n    stmia r5!, {r0}\n    add r0, r3, #1\n    mov r1, #0xc0\n    bl _s32_div_f\n    lsl r0, r1, #0x18\n    lsr r3, r0, #0x18\n    ldr r0, _02014D64 ; =0x0000078D\n    add r4, r4, #1\n    ldrb r0, [r6, r0]\n    cmp r4, r0\n    ble _02014CEA\n    ldr r1, _02014D58 ; =0x00000798\n    add r0, r1, #2\n    ldrsh r2, [r6, r1]\n    ldrsh r0, [r6, r0]\n    add r4, r6, r1\n    add r0, r2, r0\n    strh r0, [r4]\n    ldrsh r0, [r6, r1]\n    mov r1, #0x4b\n    lsl r1, r1, #8\n    cmp r0, r1\n    blt _02014D48\n    mov r0, #0\n    ldrsh r0, [r4, r0]\n    bl _s32_div_f\n    strh r1, [r4]\n    pop {r3, r4, r5, r6, r7, pc}\n    cmp r0, #0\n    bge _02014D54\n    mov r0, #0\n    ldrsh r0, [r4, r0]\n    add r0, r0, r1\n    strh r0, [r4]\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02014D58: .word 0x00000798\n    _02014D5C: .word 0x0000078C\n    _02014D60: .word 0x0000060C\n    _02014D64: .word 0x0000078D"
    );
    #endif
}

void sub_02014D68(void) {
    sub_02014AA0();
}

void sub_02014D70(void) {
    /* Original at 0x02014D70 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    bne _02014D7A\n    bl GF_AssertFail\n    mov r0, #6\n    lsl r0, r0, #8\n    ldr r0, [r4, r0]\n    bl sub_02014A60\n    mov r1, #3\n    lsl r1, r1, #8\n    add r5, r0, #0\n    bl DC_FlushRange\n    mov r1, #0x79\n    lsl r1, r1, #4\n    ldr r1, [r4, r1]\n    add r0, r5, #0\n    mov r2, #4\n    mov r3, #1\n    bl sub_02014AB0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}
