/* Decompiled from asm/unk_02025C44.s */
#include "global.h"

void GF_InitG2dRenderer(void) {
    NNS_G2dInitRenderer();
}

void sub_02025C54(void) {
    /* Original at 0x02025C54 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    add r6, r2, #0\n    add r7, r3, #0\n    bl NNS_G2dInitRenderSurface\n    add r2, r5, #0\n    ldmia r4!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r4!, {r0, r1}\n    stmia r2!, {r0, r1}\n    str r6, [r5, #0x28]\n    ldr r0, [sp, #0x18]\n    str r7, [r5, #0x2c]\n    str r0, [r5, #0x34]\n    ldr r0, [sp, #0x1c]\n    str r0, [r5, #0x14]\n    ldr r0, [sp, #0x20]\n    cmp r0, #0\n    beq _02025C84\n    add r1, r5, #0\n    bl NNS_G2dAddRendererTargetSurface\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void GF_SetG2dRendererSurface(void) {
    /* Original at 0x02025C88 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "add r3, r0, #0\n    add r2, r1, #0\n    ldmia r2!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r2!, {r0, r1}\n    stmia r3!, {r0, r1}\n    bx lr"
    );
    #endif
}

void sub_02025C98(void) {
    /* Original at 0x02025C98 */
    /* Requires manual decompilation - 239 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x60\n    add r5, r1, #0\n    add r6, r2, #0\n    ldr r4, [r5, #0x10]\n    ldr r3, [r6]\n    add r2, r0, #0\n    sub r3, r4, r3\n    ldrh r1, [r0, #2]\n    mov r0, #0x3f\n    str r3, [sp, #0x18]\n    and r0, r1\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    lsl r0, r0, #0x1a\n    ldr r4, [r5, #0x14]\n    ldr r3, [r6, #4]\n    add r2, #8\n    sub r3, r4, r3\n    str r3, [sp, #0x14]\n    asr r3, r1, #0xb\n    mov r1, #1\n    and r1, r3\n    lsr r0, r0, #0x18\n    cmp r1, #1\n    bne _02025CEC\n    mov r0, #6\n    ldrsh r0, [r2, r0]\n    lsl r4, r0, #0xc\n    mov r0, #2\n    ldrsh r0, [r2, r0]\n    lsl r0, r0, #0xc\n    str r0, [sp, #0x10]\n    mov r0, #4\n    ldrsh r0, [r2, r0]\n    lsl r0, r0, #0xc\n    str r0, [sp, #0xc]\n    mov r0, #0\n    ldrsh r0, [r2, r0]\n    lsl r0, r0, #0xc\n    str r0, [sp, #8]\n    b _02025CF8\n    neg r1, r0\n    lsl r0, r0, #0xc\n    lsl r4, r1, #0xc\n    str r0, [sp, #0x10]\n    str r4, [sp, #0xc]\n    str r0, [sp, #8]\n    ldr r0, [r5, #0xc]\n    str r0, [sp, #0x1c]\n    asr r0, r0, #0x1f\n    str r0, [sp, #0x20]\n    asr r0, r4, #0x1f\n    str r0, [sp, #0x24]\n    ldr r0, [r5, #4]\n    ldr r1, [sp, #0x24]\n    str r0, [sp, #0x28]\n    asr r0, r0, #0x1f\n    str r0, [sp, #0x2c]\n    ldr r2, [sp, #0x28]\n    ldr r3, [sp, #0x2c]\n    add r0, r4, #0\n    bl _ll_mul\n    add r7, r1, #0\n    str r0, [sp, #0x30]\n    ldr r1, [sp, #0x24]\n    ldr r2, [sp, #0x1c]\n    ldr r3, [sp, #0x20]\n    add r0, r4, #0\n    bl _ll_mul\n    add r2, r0, #0\n    add r3, r1, #0\n    mov r0, #2\n    ldr r1, [sp, #0x30]\n    mov r4, #0\n    lsl r0, r0, #0xa\n    add r0, r1, r0\n    adc r7, r4\n    lsl r1, r7, #0x14\n    lsr r0, r0, #0xc\n    orr r0, r1\n    mov r1, #2\n    lsl r1, r1, #0xa\n    add r2, r2, r1\n    adc r3, r4\n    lsl r1, r3, #0x14\n    lsr r2, r2, #0xc\n    orr r2, r1\n    add r1, r0, r2\n    ldr r0, [sp, #0x14]\n    ldr r2, [sp, #0x28]\n    add r0, r0, r1\n    str r0, [sp, #0x5c]\n    ldr r0, [sp, #0x10]\n    ldr r3, [sp, #0x2c]\n    asr r0, r0, #0x1f\n    str r0, [sp, #0x34]\n    ldr r0, [sp, #0x10]\n    ldr r1, [sp, #0x34]\n    bl _ll_mul\n    str r0, [sp, #0x38]\n    add r4, r1, #0\n    ldr r0, [sp, #0x10]\n    ldr r1, [sp, #0x34]\n    ldr r2, [sp, #0x1c]\n    ldr r3, [sp, #0x20]\n    bl _ll_mul\n    mov r2, #2\n    ldr r3, [sp, #0x38]\n    lsl r2, r2, #0xa\n    add r2, r3, r2\n    ldr r3, _02025E84 ; =0x00000000\n    adc r4, r3\n    lsl r3, r4, #0x14\n    lsr r2, r2, #0xc\n    orr r2, r3\n    mov r3, #2\n    lsl r3, r3, #0xa\n    add r3, r0, r3\n    ldr r0, _02025E84 ; =0x00000000\n    adc r1, r0\n    lsl r0, r1, #0x14\n    lsr r1, r3, #0xc\n    orr r1, r0\n    ldr r0, [sp, #0x14]\n    add r1, r2, r1\n    add r4, r0, r1\n    ldr r0, [r5, #8]\n    str r0, [sp, #0x3c]\n    asr r0, r0, #0x1f\n    str r0, [sp, #0x40]\n    ldr r0, [sp, #0xc]\n    asr r0, r0, #0x1f\n    str r0, [sp, #0x44]\n    ldr r0, [r5]\n    ldr r1, [sp, #0x44]\n    str r0, [sp, #0x48]\n    asr r0, r0, #0x1f\n    str r0, [sp, #0x4c]\n    ldr r0, [sp, #0xc]\n    ldr r2, [sp, #0x48]\n    ldr r3, [sp, #0x4c]\n    bl _ll_mul\n    str r0, [sp, #0x50]\n    add r5, r1, #0\n    ldr r0, [sp, #0xc]\n    ldr r1, [sp, #0x44]\n    ldr r2, [sp, #0x3c]\n    ldr r3, [sp, #0x40]\n    bl _ll_mul\n    mov r2, #2\n    ldr r3, [sp, #0x50]\n    lsl r2, r2, #0xa\n    add r2, r3, r2\n    ldr r3, _02025E84 ; =0x00000000\n    adc r5, r3\n    lsl r3, r5, #0x14\n    lsr r2, r2, #0xc\n    orr r2, r3\n    mov r3, #2\n    lsl r3, r3, #0xa\n    add r3, r0, r3\n    ldr r0, _02025E84 ; =0x00000000\n    adc r1, r0\n    lsl r0, r1, #0x14\n    lsr r1, r3, #0xc\n    orr r1, r0\n    ldr r0, [sp, #0x18]\n    add r1, r2, r1\n    add r5, r0, r1\n    ldr r0, [sp, #8]\n    asr r0, r0, #0x1f\n    str r0, [sp, #0x54]\n    ldr r0, [sp, #8]\n    ldr r1, [sp, #0x54]\n    ldr r2, [sp, #0x48]\n    ldr r3, [sp, #0x4c]\n    bl _ll_mul\n    str r0, [sp, #0x58]\n    str r1, [sp, #4]\n    ldr r0, [sp, #8]\n    ldr r1, [sp, #0x54]\n    ldr r2, [sp, #0x3c]\n    ldr r3, [sp, #0x40]\n    bl _ll_mul\n    mov ip, r0\n    add r2, r1, #0\n    mov r0, #2\n    ldr r1, [sp, #0x58]\n    lsl r0, r0, #0xa\n    add r3, r1, r0\n    ldr r1, [sp, #4]\n    ldr r0, _02025E84 ; =0x00000000\n    adc r1, r0\n    str r1, [sp, #4]\n    lsl r0, r1, #0x14\n    lsr r1, r3, #0xc\n    orr r1, r0\n    mov r0, #2\n    lsl r0, r0, #0xa\n    mov r3, ip\n    add r0, r3, r0\n    ldr r3, _02025E84 ; =0x00000000\n    adc r2, r3\n    lsl r2, r2, #0x14\n    lsr r0, r0, #0xc\n    orr r0, r2\n    add r1, r1, r0\n    ldr r0, [sp, #0x18]\n    add r0, r0, r1\n    ldr r1, [sp, #0x5c]\n    cmp r4, r1\n    bge _02025E58\n    add r1, r4, #0\n    ldr r4, [sp, #0x5c]\n    str r1, [sp, #0x5c]\n    cmp r0, r5\n    bge _02025E62\n    add r1, r0, #0\n    add r0, r5, #0\n    add r5, r1, #0\n    cmp r4, #0\n    ble _02025E7E\n    ldr r2, [r6, #0xc]\n    ldr r1, [sp, #0x5c]\n    cmp r1, r2\n    bge _02025E7E\n    cmp r0, #0\n    ble _02025E7E\n    ldr r0, [r6, #8]\n    cmp r5, r0\n    bge _02025E7E\n    add sp, #0x60\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0\n    add sp, #0x60\n    pop {r3, r4, r5, r6, r7, pc}\n    _02025E84: .word 0x00000000"
    );
    #endif
}
