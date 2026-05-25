/* Decompiled from asm/overlay_80_0222ACA0.s */
#include "global.h"

void ov80_0222ACA0(void) {
    // push {r3, lr}
    // cmp r1, #0xd
    // bhi _0222AD5A
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _0222ACB2: ; jump table
    // mov r1, #0x28
    // mul r1, r0
    // ldr r0, _0222AD64 ; =ov80_0223B724
    // ldr r0, [r0, r1]
    // pop {r3, pc}
    // mov r1, #0x28
    // mul r1, r0
    // ldr r0, _0222AD68 ; =ov80_0223B730
    // ldrh r0, [r0, r1]
    // pop {r3, pc}
    // mov r1, #0x28
    // mul r1, r0
    // ldr r0, _0222AD6C ; =ov80_0223B732
    // ldrh r0, [r0, r1]
    // pop {r3, pc}
    // mov r1, #0x28
    // mul r1, r0
    // ldr r0, _0222AD70 ; =ov80_0223B734
    // ldrh r0, [r0, r1]
    // pop {r3, pc}
    // mov r1, #0x28
    // mul r1, r0
    // ldr r0, _0222AD74 ; =ov80_0223B736
    // ldrh r0, [r0, r1]
    // pop {r3, pc}
    // mov r1, #0x28
    // mul r1, r0
    // ldr r0, _0222AD78 ; =ov80_0223B738
    // ldrh r0, [r0, r1]
    // pop {r3, pc}
    // mov r1, #0x28
    // mul r1, r0
    // ldr r0, _0222AD7C ; =ov80_0223B73A
    // ldrh r0, [r0, r1]
    // pop {r3, pc}
    // mov r1, #0x28
    // mul r1, r0
    // ldr r0, _0222AD80 ; =ov80_0223B73C
    // ldrh r0, [r0, r1]
    // pop {r3, pc}
    // mov r1, #0x28
    // mul r1, r0
    // ldr r0, _0222AD84 ; =ov80_0223B73E
    // ldrh r0, [r0, r1]
    // pop {r3, pc}
    // mov r1, #0x28
    // mul r1, r0
    // ldr r0, _0222AD88 ; =ov80_0223B740
    // ldrh r0, [r0, r1]
    // pop {r3, pc}
    // mov r1, #0x28
    // mul r1, r0
    // ldr r0, _0222AD8C ; =ov80_0223B742
    // ldrh r0, [r0, r1]
    // pop {r3, pc}
    // mov r1, #0x28
    // mul r1, r0
    // ldr r0, _0222AD90 ; =ov80_0223B744
    // ldrh r0, [r0, r1]
    // pop {r3, pc}
    // mov r1, #0x28
    // mul r1, r0
    // ldr r0, _0222AD94 ; =ov80_0223B746
    // ldrb r0, [r0, r1]
    // pop {r3, pc}
    // mov r1, #0x28
    // mul r1, r0
    // ldr r0, _0222AD98 ; =ov80_0223B747
    // ldrb r0, [r0, r1]
    // pop {r3, pc}
    // bl GF_AssertFail
    // mov r0, #0
    // pop {r3, pc}
    // nop
    // _0222AD64: .word ov80_0223B724
    // _0222AD68: .word ov80_0223B730
    // _0222AD6C: .word ov80_0223B732
    // _0222AD70: .word ov80_0223B734
    // _0222AD74: .word ov80_0223B736
    // _0222AD78: .word ov80_0223B738
    // _0222AD7C: .word ov80_0223B73A
    // _0222AD80: .word ov80_0223B73C
    // _0222AD84: .word ov80_0223B73E
    // _0222AD88: .word ov80_0223B740
    // _0222AD8C: .word ov80_0223B742
    // _0222AD90: .word ov80_0223B744
    // _0222AD94: .word ov80_0223B746
    // _0222AD98: .word ov80_0223B747
    // TODO: decompile
}


void ov80_0222AD9C(void) {
    // push {r3, lr}
    // mov r3, #0x28
    // mul r3, r2
    // ldr r2, _0222ADB0 ; =ov80_0223B728
    // ldr r2, [r2, r3]
    // cmp r2, #0
    // beq _0222ADAC
    // blx r2
    // pop {r3, pc}
    // nop
    // _0222ADB0: .word ov80_0223B728
    // TODO: decompile
}


void ov80_0222ADB4(void) {
    // push {r3, lr}
    // mov r3, #0x28
    // mul r3, r2
    // ldr r2, _0222ADC8 ; =ov80_0223B72C
    // ldr r2, [r2, r3]
    // cmp r2, #0
    // beq _0222ADC4
    // blx r2
    // pop {r3, pc}
    // nop
    // _0222ADC8: .word ov80_0223B72C
    // TODO: decompile
}


void ov80_0222ADCC(void) {
    Heap_Alloc();
}


void ov80_0222ADDC(void) {
    Heap_Free();
}


void ov80_0222ADE8(void) {
    ov80_02239D74(*((u32*)(r0 + 4)), r0);
    SetBgPriority(0, 1);
    SetBgPriority(2, 2);
    SetBgPriority(3, 3);
    GfGfx_EngineATogglePlanes(4, 0);
}


void ov80_0222AE1C(void) {
    ov80_02239DB8();
}


void ov80_0222AE28(void) {
    // bx lr
    // TODO: decompile
}


void ov80_0222AE2C(void) {
    // bx lr
    // TODO: decompile
}


void ov80_0222AE30(void) {
    // push {r3, lr}
    // mov r0, #0
    // mov r1, #1
    // bl SetBgPriority
    // mov r0, #2
    // add r1, r0, #0
    // bl SetBgPriority
    // mov r0, #3
    // add r1, r0, #0
    // bl SetBgPriority
    // mov r3, #0x14
    // ldr r0, _0222AE64 ; =0x04000050
    // mov r1, #1
    // mov r2, #0x3c
    // str r3, [sp]
    // bl G2x_SetBlendAlpha_
    // mov r0, #4
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // pop {r3, pc}
    // nop
    // _0222AE64: .word 0x04000050
    // TODO: decompile
}


void ov80_0222AE68(void) {
    // bx lr
    // TODO: decompile
}


void ov80_0222AE6C(void) {
    SetBgPriority(2, 3);
    SetBgPriority(3, 2);
}


void ov80_0222AE80(void) {
    // bx lr
    // TODO: decompile
}


void ov80_0222AE84(void) {
    G2x_SetBlendAlpha_(1, 0x3c, 0x14);
}


void ov80_0222AE9C(void) {
    // bx lr
    // TODO: decompile
}


void ov80_0222AEA0(void) {
    ov80_022384D8();
}


void ov80_0222AEB0(void) {
    ov80_022385B0();
}


void ov80_0222AEBC(void) {
    // push {r3, lr}
    // mov r0, #1
    // mov r1, #0
    // bl SetBgPriority
    // mov r0, #0
    // mov r1, #2
    // bl SetBgPriority
    // mov r0, #2
    // add r1, r0, #0
    // bl SetBgPriority
    // mov r0, #3
    // add r1, r0, #0
    // bl SetBgPriority
    // mov r3, #0x14
    // ldr r0, _0222AEF0 ; =0x04000050
    // mov r1, #1
    // mov r2, #0x3c
    // str r3, [sp]
    // bl G2x_SetBlendAlpha_
    // pop {r3, pc}
    // nop
    // _0222AEF0: .word 0x04000050
    // TODO: decompile
}


void ov80_0222AEF4(void) {
    // bx lr
    // TODO: decompile
}

