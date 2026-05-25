/* Decompiled from asm/overlay_01_021FB5D4.s */
#include "global.h"

void ov01_021FB5D4(void) {
    // push {r4, r5, r6, lr}
    // add r5, r1, #0
    // mov r1, #0xca
    // lsl r1, r1, #2
    // add r6, r0, #0
    // bl Heap_Alloc
    // mov r2, #0xca
    // mov r1, #0
    // lsl r2, r2, #2
    // add r4, r0, #0
    // bl memset
    // mov r2, #0x63
    // mov r0, #0
    // add r1, r4, #0
    // lsl r2, r2, #2
    // str r0, [r4]
    // add r0, r6, #0
    // add r1, #0xc
    // add r2, r4, r2
    // bl sub_02014A08
    // mov r1, #0xc3
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // add r0, r1, #4
    // str r5, [r4, r0]
    // add r0, r4, #0
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void ov01_021FB610(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r1, [r4]
    // cmp r1, #1
    // bne _021FB61E
    // bl ov01_021FB82C
    // mov r0, #0xc3
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl sub_02014A38
    // add r0, r4, #0
    // bl Heap_Free
    // pop {r4, pc}
    // TODO: decompile
}


void ov01_021FB630(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4]
    // cmp r0, #0
    // beq _021FB63E
    // bl GF_AssertFail
    // mov r0, #0x31
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // ldr r1, _021FB6B0 ; =ov01_021FB7DC
    // add r2, r4, #0
    // bl ov01_021FB530
    // mov r2, #0xc5
    // lsl r2, r2, #2
    // str r0, [r4, r2]
    // ldr r0, _021FB6B4 ; =ov01_021FB6C4
    // add r1, r4, #0
    // add r2, #0xec
    // bl SysTask_CreateOnMainQueue
    // mov r2, #0xc7
    // lsl r2, r2, #2
    // str r0, [r4, r2]
    // ldr r0, _021FB6B8 ; =ov01_021FB7CC
    // add r1, r4, #0
    // add r2, #0xe4
    // bl SysTask_CreateOnVBlankQueue
    // mov r2, #0x32
    // lsl r2, r2, #4
    // str r0, [r4, r2]
    // ldr r0, _021FB6BC ; =ov01_021FB800
    // add r1, r4, #0
    // add r2, #0xe0
    // bl SysTask_CreateOnVBlankQueue
    // mov r1, #0xc9
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // add r0, r4, #0
    // mov r2, #6
    // add r0, #0xc
    // mov r1, #0
    // lsl r2, r2, #6
    // bl memset
    // mov r2, #0x63
    // lsl r2, r2, #2
    // add r0, r4, r2
    // mov r1, #0
    // sub r2, #0xc
    // bl memset
    // mov r0, #1
    // str r0, [r4]
    // mov r0, #0
    // str r0, [r4, #8]
    // ldr r0, _021FB6C0 ; =SEQ_SE_DP_DOKU2
    // bl PlaySE
    // pop {r4, pc}
    // nop
    // _021FB6B0: .word ov01_021FB7DC
    // _021FB6B4: .word ov01_021FB6C4
    // _021FB6B8: .word ov01_021FB7CC
    // _021FB6BC: .word ov01_021FB800
    // _021FB6C0: .word SEQ_SE_DP_DOKU2
    // TODO: decompile
}


void ov01_021FB6C4(void) {
    // push {r4, lr}
    // add r4, r1, #0
    // ldr r0, [r4, #8]
    // cmp r0, #3
    // bhi _021FB74C
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _021FB6DA: ; jump table
    // mov r0, #3
    // str r0, [r4, #4]
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // pop {r4, pc}
    // ldr r0, [r4, #4]
    // sub r0, r0, #1
    // str r0, [r4, #4]
    // mov r0, #0xc3
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl sub_02014A4C
    // ldr r1, [r4, #4]
    // mov r2, #3
    // sub r1, r2, r1
    // bl ov01_021FB788
    // ldr r0, [r4, #4]
    // cmp r0, #0
    // bgt _021FB74C
    // mov r0, #3
    // str r0, [r4, #4]
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // pop {r4, pc}
    // ldr r0, [r4, #4]
    // sub r0, r0, #1
    // str r0, [r4, #4]
    // mov r0, #0xc3
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl sub_02014A4C
    // ldr r1, [r4, #4]
    // mov r2, #3
    // bl ov01_021FB788
    // ldr r0, [r4, #4]
    // cmp r0, #0
    // bgt _021FB74C
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // pop {r4, pc}
    // add r0, r4, #0
    // bl ov01_021FB82C
    // mov r0, #0
    // bl G3X_SetHOffset
    // pop {r4, pc}
    // TODO: decompile
}


void ov01_021FB750(void) {
    // push {r4, lr}
    // ldr r1, _021FB780 ; =0x04000006
    // ldrh r4, [r1]
    // mov r1, #0xc3
    // lsl r1, r1, #2
    // ldr r0, [r0, r1]
    // bl sub_02014A60
    // cmp r4, #0xc0
    // bge _021FB77E
    // add r3, r4, #1
    // cmp r3, #0xc0
    // blt _021FB76C
    // sub r3, #0xc0
    // ldr r1, _021FB784 ; =0x04000004
    // ldrh r2, [r1]
    // mov r1, #2
    // tst r1, r2
    // beq _021FB77E
    // lsl r1, r3, #1
    // ldrh r0, [r0, r1]
    // bl G3X_SetHOffset
    // pop {r4, pc}
    // _021FB780: .word 0x04000006
    // _021FB784: .word 0x04000004
    // TODO: decompile
}


void ov01_021FB788(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // lsl r0, r1, #1
    // add r0, r1, r0
    // add r1, r2, #0
    // mov r4, #1
    // bl _s32_div_f
    // neg r1, r0
    // lsl r1, r1, #0x10
    // lsr r1, r1, #0x10
    // lsl r0, r0, #0x10
    // mov r6, #0
    // str r1, [sp]
    // lsr r7, r0, #0x10
    // add r0, r6, #0
    // mov r1, #0xa
    // bl _s32_div_f
    // cmp r1, #0
    // bne _021FB7B6
    // mov r0, #1
    // eor r4, r0
    // cmp r4, #0
    // beq _021FB7BE
    // strh r7, [r5]
    // b _021FB7C2
    // ldr r0, [sp]
    // strh r0, [r5]
    // add r6, r6, #1
    // add r5, r5, #2
    // cmp r6, #0xc0
    // blt _021FB7A6
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov01_021FB7CC(void) {
    // mov r2, #0xc6
    // ldr r3, _021FB7D8 ; =G3X_SetHOffset
    // mov r0, #0
    // lsl r2, r2, #2
    // str r0, [r1, r2]
    // bx r3
    // _021FB7D8: .word G3X_SetHOffset
    // TODO: decompile
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
    // push {r4, lr}
    // add r4, r0, #0
    // mov r0, #0xc5
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl ov01_021FB554
    // mov r0, #0xc5
    // mov r1, #0
    // lsl r0, r0, #2
    // str r1, [r4, r0]
    // add r0, #8
    // ldr r0, [r4, r0]
    // bl SysTask_Destroy
    // mov r0, #0xc7
    // mov r1, #0
    // lsl r0, r0, #2
    // str r1, [r4, r0]
    // add r0, r0, #4
    // ldr r0, [r4, r0]
    // bl SysTask_Destroy
    // mov r0, #0x32
    // mov r1, #0
    // lsl r0, r0, #4
    // str r1, [r4, r0]
    // add r0, r0, #4
    // ldr r0, [r4, r0]
    // bl SysTask_Destroy
    // mov r0, #0xc9
    // mov r1, #0
    // lsl r0, r0, #2
    // str r1, [r4, r0]
    // str r1, [r4]
    // pop {r4, pc}
    // TODO: decompile
}

