/* Decompiled from asm/overlay_80_0222ACA0.s */
#include "global.h"

void ov80_0222ACA0(void) {
    /* Original at 0x0222ACA0 */
    /* Requires manual decompilation - 98 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    cmp r1, #0xd\n    bhi _0222AD5A\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _0222ACB2: ; jump table\n    mov r1, #0x28\n    mul r1, r0\n    ldr r0, _0222AD64 ; =ov80_0223B724\n    ldr r0, [r0, r1]\n    pop {r3, pc}\n    mov r1, #0x28\n    mul r1, r0\n    ldr r0, _0222AD68 ; =ov80_0223B730\n    ldrh r0, [r0, r1]\n    pop {r3, pc}\n    mov r1, #0x28\n    mul r1, r0\n    ldr r0, _0222AD6C ; =ov80_0223B732\n    ldrh r0, [r0, r1]\n    pop {r3, pc}\n    mov r1, #0x28\n    mul r1, r0\n    ldr r0, _0222AD70 ; =ov80_0223B734\n    ldrh r0, [r0, r1]\n    pop {r3, pc}\n    mov r1, #0x28\n    mul r1, r0\n    ldr r0, _0222AD74 ; =ov80_0223B736\n    ldrh r0, [r0, r1]\n    pop {r3, pc}\n    mov r1, #0x28\n    mul r1, r0\n    ldr r0, _0222AD78 ; =ov80_0223B738\n    ldrh r0, [r0, r1]\n    pop {r3, pc}\n    mov r1, #0x28\n    mul r1, r0\n    ldr r0, _0222AD7C ; =ov80_0223B73A\n    ldrh r0, [r0, r1]\n    pop {r3, pc}\n    mov r1, #0x28\n    mul r1, r0\n    ldr r0, _0222AD80 ; =ov80_0223B73C\n    ldrh r0, [r0, r1]\n    pop {r3, pc}\n    mov r1, #0x28\n    mul r1, r0\n    ldr r0, _0222AD84 ; =ov80_0223B73E\n    ldrh r0, [r0, r1]\n    pop {r3, pc}\n    mov r1, #0x28\n    mul r1, r0\n    ldr r0, _0222AD88 ; =ov80_0223B740\n    ldrh r0, [r0, r1]\n    pop {r3, pc}\n    mov r1, #0x28\n    mul r1, r0\n    ldr r0, _0222AD8C ; =ov80_0223B742\n    ldrh r0, [r0, r1]\n    pop {r3, pc}\n    mov r1, #0x28\n    mul r1, r0\n    ldr r0, _0222AD90 ; =ov80_0223B744\n    ldrh r0, [r0, r1]\n    pop {r3, pc}\n    mov r1, #0x28\n    mul r1, r0\n    ldr r0, _0222AD94 ; =ov80_0223B746\n    ldrb r0, [r0, r1]\n    pop {r3, pc}\n    mov r1, #0x28\n    mul r1, r0\n    ldr r0, _0222AD98 ; =ov80_0223B747\n    ldrb r0, [r0, r1]\n    pop {r3, pc}\n    bl GF_AssertFail\n    mov r0, #0\n    pop {r3, pc}\n    nop\n    _0222AD64: .word ov80_0223B724\n    _0222AD68: .word ov80_0223B730\n    _0222AD6C: .word ov80_0223B732\n    _0222AD70: .word ov80_0223B734\n    _0222AD74: .word ov80_0223B736\n    _0222AD78: .word ov80_0223B738\n    _0222AD7C: .word ov80_0223B73A\n    _0222AD80: .word ov80_0223B73C\n    _0222AD84: .word ov80_0223B73E\n    _0222AD88: .word ov80_0223B740\n    _0222AD8C: .word ov80_0223B742\n    _0222AD90: .word ov80_0223B744\n    _0222AD94: .word ov80_0223B746\n    _0222AD98: .word ov80_0223B747"
    );
    #endif
}

void ov80_0222AD9C(void) {
    /* Original at 0x0222AD9C */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    mov r3, #0x28\n    mul r3, r2\n    ldr r2, _0222ADB0 ; =ov80_0223B728\n    ldr r2, [r2, r3]\n    cmp r2, #0\n    beq _0222ADAC\n    blx r2\n    pop {r3, pc}\n    nop\n    _0222ADB0: .word ov80_0223B728"
    );
    #endif
}

void ov80_0222ADB4(void) {
    /* Original at 0x0222ADB4 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    mov r3, #0x28\n    mul r3, r2\n    ldr r2, _0222ADC8 ; =ov80_0223B72C\n    ldr r2, [r2, r3]\n    cmp r2, #0\n    beq _0222ADC4\n    blx r2\n    pop {r3, pc}\n    nop\n    _0222ADC8: .word ov80_0223B72C"
    );
    #endif
}

void ov80_0222ADCC(void) {
    Heap_Alloc();
}

void ov80_0222ADDC(void) {
    Heap_Free();
}

void ov80_0222ADE8(void) {
    /* Original at 0x0222ADE8 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r2, r0, #0\n    add r4, r1, #0\n    ldr r0, [r2]\n    ldr r1, [r2, #4]\n    bl ov80_02239D74\n    str r0, [r4]\n    mov r0, #0\n    mov r1, #1\n    bl SetBgPriority\n    mov r0, #2\n    add r1, r0, #0\n    bl SetBgPriority\n    mov r0, #3\n    add r1, r0, #0\n    bl SetBgPriority\n    mov r0, #4\n    mov r1, #0\n    bl GfGfx_EngineATogglePlanes\n    pop {r4, pc}"
    );
    #endif
}

void ov80_0222AE1C(void) {
    ov80_02239DB8();
}

void ov80_0222AE28(void) {
    /* Original at 0x0222AE28 */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void ov80_0222AE2C(void) {
    /* Original at 0x0222AE2C */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void ov80_0222AE30(void) {
    /* Original at 0x0222AE30 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    mov r0, #0\n    mov r1, #1\n    bl SetBgPriority\n    mov r0, #2\n    add r1, r0, #0\n    bl SetBgPriority\n    mov r0, #3\n    add r1, r0, #0\n    bl SetBgPriority\n    mov r3, #0x14\n    ldr r0, _0222AE64 ; =0x04000050\n    mov r1, #1\n    mov r2, #0x3c\n    str r3, [sp]\n    bl G2x_SetBlendAlpha_\n    mov r0, #4\n    mov r1, #0\n    bl GfGfx_EngineATogglePlanes\n    pop {r3, pc}\n    nop\n    _0222AE64: .word 0x04000050"
    );
    #endif
}

void ov80_0222AE68(void) {
    /* Original at 0x0222AE68 */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void ov80_0222AE6C(void) {
    SetBgPriority(2, 3);
    SetBgPriority(3, 2);
}

void ov80_0222AE80(void) {
    /* Original at 0x0222AE80 */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void ov80_0222AE84(void) {
    G2x_SetBlendAlpha_(1, 0x3c, 0x14);
}

void ov80_0222AE9C(void) {
    /* Original at 0x0222AE9C */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void ov80_0222AEA0(void) {
    ov80_022384D8();
}

void ov80_0222AEB0(void) {
    ov80_022385B0();
}

void ov80_0222AEBC(void) {
    /* Original at 0x0222AEBC */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    mov r0, #1\n    mov r1, #0\n    bl SetBgPriority\n    mov r0, #0\n    mov r1, #2\n    bl SetBgPriority\n    mov r0, #2\n    add r1, r0, #0\n    bl SetBgPriority\n    mov r0, #3\n    add r1, r0, #0\n    bl SetBgPriority\n    mov r3, #0x14\n    ldr r0, _0222AEF0 ; =0x04000050\n    mov r1, #1\n    mov r2, #0x3c\n    str r3, [sp]\n    bl G2x_SetBlendAlpha_\n    pop {r3, pc}\n    nop\n    _0222AEF0: .word 0x04000050"
    );
    #endif
}

void ov80_0222AEF4(void) {
    /* Original at 0x0222AEF4 */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}
