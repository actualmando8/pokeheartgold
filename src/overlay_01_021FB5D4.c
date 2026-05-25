/* Decompiled from asm/overlay_01_021FB5D4.s */
#include "global.h"

void ov01_021FB5D4(void) {
    /* Original at 0x021FB5D4 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r1, #0\n    mov r1, #0xca\n    lsl r1, r1, #2\n    add r6, r0, #0\n    bl Heap_Alloc\n    mov r2, #0xca\n    mov r1, #0\n    lsl r2, r2, #2\n    add r4, r0, #0\n    bl memset\n    mov r2, #0x63\n    mov r0, #0\n    add r1, r4, #0\n    lsl r2, r2, #2\n    str r0, [r4]\n    add r0, r6, #0\n    add r1, #0xc\n    add r2, r4, r2\n    bl sub_02014A08\n    mov r1, #0xc3\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    add r0, r1, #4\n    str r5, [r4, r0]\n    add r0, r4, #0\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov01_021FB610(void) {
    /* Original at 0x021FB610 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r1, [r4]\n    cmp r1, #1\n    bne _021FB61E\n    bl ov01_021FB82C\n    mov r0, #0xc3\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl sub_02014A38\n    add r0, r4, #0\n    bl Heap_Free\n    pop {r4, pc}"
    );
    #endif
}

void ov01_021FB630(void) {
    /* Original at 0x021FB630 */
    /* Requires manual decompilation - 61 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4]\n    cmp r0, #0\n    beq _021FB63E\n    bl GF_AssertFail\n    mov r0, #0x31\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    ldr r1, _021FB6B0 ; =ov01_021FB7DC\n    add r2, r4, #0\n    bl ov01_021FB530\n    mov r2, #0xc5\n    lsl r2, r2, #2\n    str r0, [r4, r2]\n    ldr r0, _021FB6B4 ; =ov01_021FB6C4\n    add r1, r4, #0\n    add r2, #0xec\n    bl SysTask_CreateOnMainQueue\n    mov r2, #0xc7\n    lsl r2, r2, #2\n    str r0, [r4, r2]\n    ldr r0, _021FB6B8 ; =ov01_021FB7CC\n    add r1, r4, #0\n    add r2, #0xe4\n    bl SysTask_CreateOnVBlankQueue\n    mov r2, #0x32\n    lsl r2, r2, #4\n    str r0, [r4, r2]\n    ldr r0, _021FB6BC ; =ov01_021FB800\n    add r1, r4, #0\n    add r2, #0xe0\n    bl SysTask_CreateOnVBlankQueue\n    mov r1, #0xc9\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    add r0, r4, #0\n    mov r2, #6\n    add r0, #0xc\n    mov r1, #0\n    lsl r2, r2, #6\n    bl memset\n    mov r2, #0x63\n    lsl r2, r2, #2\n    add r0, r4, r2\n    mov r1, #0\n    sub r2, #0xc\n    bl memset\n    mov r0, #1\n    str r0, [r4]\n    mov r0, #0\n    str r0, [r4, #8]\n    ldr r0, _021FB6C0 ; =SEQ_SE_DP_DOKU2\n    bl PlaySE\n    pop {r4, pc}\n    nop\n    _021FB6B0: .word ov01_021FB7DC\n    _021FB6B4: .word ov01_021FB6C4\n    _021FB6B8: .word ov01_021FB7CC\n    _021FB6BC: .word ov01_021FB800\n    _021FB6C0: .word SEQ_SE_DP_DOKU2"
    );
    #endif
}

void ov01_021FB6C4(void) {
    /* Original at 0x021FB6C4 */
    /* Requires manual decompilation - 60 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    ldr r0, [r4, #8]\n    cmp r0, #3\n    bhi _021FB74C\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _021FB6DA: ; jump table\n    mov r0, #3\n    str r0, [r4, #4]\n    ldr r0, [r4, #8]\n    add r0, r0, #1\n    str r0, [r4, #8]\n    pop {r4, pc}\n    ldr r0, [r4, #4]\n    sub r0, r0, #1\n    str r0, [r4, #4]\n    mov r0, #0xc3\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl sub_02014A4C\n    ldr r1, [r4, #4]\n    mov r2, #3\n    sub r1, r2, r1\n    bl ov01_021FB788\n    ldr r0, [r4, #4]\n    cmp r0, #0\n    bgt _021FB74C\n    mov r0, #3\n    str r0, [r4, #4]\n    ldr r0, [r4, #8]\n    add r0, r0, #1\n    str r0, [r4, #8]\n    pop {r4, pc}\n    ldr r0, [r4, #4]\n    sub r0, r0, #1\n    str r0, [r4, #4]\n    mov r0, #0xc3\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl sub_02014A4C\n    ldr r1, [r4, #4]\n    mov r2, #3\n    bl ov01_021FB788\n    ldr r0, [r4, #4]\n    cmp r0, #0\n    bgt _021FB74C\n    ldr r0, [r4, #8]\n    add r0, r0, #1\n    str r0, [r4, #8]\n    pop {r4, pc}\n    add r0, r4, #0\n    bl ov01_021FB82C\n    mov r0, #0\n    bl G3X_SetHOffset\n    pop {r4, pc}"
    );
    #endif
}

void ov01_021FB750(void) {
    /* Original at 0x021FB750 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r1, _021FB780 ; =0x04000006\n    ldrh r4, [r1]\n    mov r1, #0xc3\n    lsl r1, r1, #2\n    ldr r0, [r0, r1]\n    bl sub_02014A60\n    cmp r4, #0xc0\n    bge _021FB77E\n    add r3, r4, #1\n    cmp r3, #0xc0\n    blt _021FB76C\n    sub r3, #0xc0\n    ldr r1, _021FB784 ; =0x04000004\n    ldrh r2, [r1]\n    mov r1, #2\n    tst r1, r2\n    beq _021FB77E\n    lsl r1, r3, #1\n    ldrh r0, [r0, r1]\n    bl G3X_SetHOffset\n    pop {r4, pc}\n    _021FB780: .word 0x04000006\n    _021FB784: .word 0x04000004"
    );
    #endif
}

void ov01_021FB788(void) {
    /* Original at 0x021FB788 */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    lsl r0, r1, #1\n    add r0, r1, r0\n    add r1, r2, #0\n    mov r4, #1\n    bl _s32_div_f\n    neg r1, r0\n    lsl r1, r1, #0x10\n    lsr r1, r1, #0x10\n    lsl r0, r0, #0x10\n    mov r6, #0\n    str r1, [sp]\n    lsr r7, r0, #0x10\n    add r0, r6, #0\n    mov r1, #0xa\n    bl _s32_div_f\n    cmp r1, #0\n    bne _021FB7B6\n    mov r0, #1\n    eor r4, r0\n    cmp r4, #0\n    beq _021FB7BE\n    strh r7, [r5]\n    b _021FB7C2\n    ldr r0, [sp]\n    strh r0, [r5]\n    add r6, r6, #1\n    add r5, r5, #2\n    cmp r6, #0xc0\n    blt _021FB7A6\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021FB7CC(void) {
    /* Original at 0x021FB7CC */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "mov r2, #0xc6\n    ldr r3, _021FB7D8 ; =G3X_SetHOffset\n    mov r0, #0\n    lsl r2, r2, #2\n    str r0, [r1, r2]\n    bx r3\n    _021FB7D8: .word G3X_SetHOffset"
    );
    #endif
}

void ov01_021FB7DC(void) {
    ov01_021FB7E8();
}

void ov01_021FB7E8(void) {
    ov01_021FB750(0xc6);
}

void ov01_021FB800(void) {
    ov01_021FB80C();
}

void ov01_021FB80C(void) {
    sub_02014A8C(0xc3, 0xc6, 1);
}

void ov01_021FB82C(void) {
    /* Original at 0x021FB82C */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0xc5\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl ov01_021FB554\n    mov r0, #0xc5\n    mov r1, #0\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    add r0, #8\n    ldr r0, [r4, r0]\n    bl SysTask_Destroy\n    mov r0, #0xc7\n    mov r1, #0\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    add r0, r0, #4\n    ldr r0, [r4, r0]\n    bl SysTask_Destroy\n    mov r0, #0x32\n    mov r1, #0\n    lsl r0, r0, #4\n    str r1, [r4, r0]\n    add r0, r0, #4\n    ldr r0, [r4, r0]\n    bl SysTask_Destroy\n    mov r0, #0xc9\n    mov r1, #0\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    str r1, [r4]\n    pop {r4, pc}"
    );
    #endif
}
