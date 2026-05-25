/* Decompiled from asm/overlay_93_arm.s */
#include "global.h"

void ov93_0225EE98(void) {
    /* Original at 0x0225EE98 */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "stmdb sp!, {r4, r5, r6, lr}\n    sub sp, sp, #0x80\n    add r3, sp, #0\n    mov r6, #0\n    mov r0, r6, lsl #1\n    add r5, r0, #1\n    smull r1, r0, r5, r5\n    umull ip, r2, r5, r1\n    mla r2, r5, r0, r2\n    mov r4, r5, asr #0x1f\n    umull lr, r0, r5, ip\n    mla r2, r4, r1, r2\n    mla r0, r5, r2, r0\n    mla r0, r4, ip, r0\n    mov r1, lr, lsr #0x18\n    orr r1, r1, r0, lsl #8\n    add r0, r6, #1\n    strb r1, [r3, r6]\n    and r6, r0, #0xff\n    cmp r6, #0x7f\n    blo _0225EEA8\n    mov ip, #0xff\n    add r1, sp, #0\n    mov r0, #0x34\n    mov r2, #0x20\n    strb ip, [r3, #0x7f]\n    bl NNS_G3dGeBufferOP_N\n    add sp, sp, #0x80\n    ldmia sp!, {r4, r5, r6, pc}"
    );
    #endif
}

void ov93_0225EF0C(void) {
    /* Original at 0x0225EF0C */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "stmdb sp!, {r4, lr}\n    mov lr, #0\n    mov r4, lr\n    mov ip, lr\n    mov r1, #0x80000\n    add r3, r0, lr, lsl #5\n    str ip, [r3, #0xc]\n    str r4, [r3, #0x10]\n    str ip, [r3, #0x14]\n    sub r2, r4, #0x10000\n    str r2, [r3, #0x18]\n    str r1, [r3, #0x1c]\n    str r4, [r3, #0x20]\n    str r1, [r3, #0x24]\n    add lr, lr, #1\n    str r2, [r3, #0x28]\n    cmp lr, #8\n    sub r4, r4, #0x10000\n    blt _0225EF20\n    ldmia sp!, {r4, pc}"
    );
    #endif
}

void ov93_0225EF5C(void) {
    /* Original at 0x0225EF5C */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "stmdb sp!, {r4, lr}\n    mov lr, #0\n    mov r4, lr\n    mov ip, lr\n    mov r1, #0x80000\n    add r3, r0, lr, lsl #5\n    str ip, [r3, #0x10c]\n    str r4, [r3, #0x110]\n    str ip, [r3, #0x114]\n    add r2, r4, #0x10000\n    str r2, [r3, #0x118]\n    str r1, [r3, #0x11c]\n    str r4, [r3, #0x120]\n    str r1, [r3, #0x124]\n    add lr, lr, #1\n    mov r4, r2\n    str r2, [r3, #0x128]\n    cmp lr, #8\n    blt _0225EF70\n    ldmia sp!, {r4, pc}"
    );
    #endif
}

void ov93_0225EFAC(void) {
    /* Original at 0x0225EFAC */
    /* Requires manual decompilation - 175 instructions */
    #ifdef MWERKS
    asm(
        "stmdb sp!, {r3, r4, r5, r6, r7, r8, sb, sl, fp, lr}\n    sub sp, sp, #0x48\n    mov sb, #0\n    ldr r6, _0225F264 ; =0x1FF00000\n    mov sl, r0\n    mov r4, sb\n    add r8, sp, #2\n    add r7, sp, #0\n    mov fp, sb\n    mov r5, sb\n    mov r0, #1\n    str r0, [sp, #0x44]\n    mov r0, #0x40\n    add r1, sp, #0x44\n    mov r2, #1\n    bl NNS_G3dGeBufferOP_N\n    add r1, sl, sb, lsl #5\n    ldr r0, [r1, #0xc]\n    ldr r1, [r1, #0x10]\n    mov r2, r8\n    mov r3, r7\n    bl ov93_0225F268\n    add r1, sl, sb, lsl #5\n    ldr r0, [r1, #0x10c]\n    ldr r1, [r1, #0x110]\n    mov r0, r0, lsl #8\n    mov r1, r1, lsl #8\n    mov r1, r1, asr #0x10\n    mov r1, r1, lsl #0x10\n    mov r0, r0, asr #0x10\n    mov r1, r1, lsr #0x10\n    mov r0, r0, lsl #0x10\n    mov r1, r1, lsl #0x10\n    orr r0, r1, r0, lsr #16\n    str r0, [sp, #0x40]\n    mov r0, #0x22\n    add r1, sp, #0x40\n    mov r2, #1\n    bl NNS_G3dGeBufferOP_N\n    mov r0, #0x21\n    add r1, sp, #0x3c\n    mov r2, #1\n    str r6, [sp, #0x3c]\n    bl NNS_G3dGeBufferOP_N\n    ldrh r3, [sp, #2]\n    ldrh r2, [sp]\n    mov r0, #0x23\n    add r1, sp, #0x34\n    orr r2, r3, r2, lsl #16\n    str r2, [sp, #0x34]\n    mov r2, #2\n    str r5, [sp, #0x38]\n    bl NNS_G3dGeBufferOP_N\n    add r1, sl, sb, lsl #5\n    ldr r0, [r1, #0x14]\n    ldr r1, [r1, #0x18]\n    mov r2, r8\n    mov r3, r7\n    bl ov93_0225F268\n    add r1, sl, sb, lsl #5\n    ldr r0, [r1, #0x114]\n    ldr r1, [r1, #0x118]\n    mov r0, r0, lsl #8\n    mov r1, r1, lsl #8\n    mov r1, r1, asr #0x10\n    mov r1, r1, lsl #0x10\n    mov r0, r0, asr #0x10\n    mov r1, r1, lsr #0x10\n    mov r0, r0, lsl #0x10\n    mov r1, r1, lsl #0x10\n    orr r0, r1, r0, lsr #16\n    str r0, [sp, #0x30]\n    mov r0, #0x22\n    add r1, sp, #0x30\n    mov r2, #1\n    bl NNS_G3dGeBufferOP_N\n    mov r0, #0x21\n    add r1, sp, #0x2c\n    mov r2, #1\n    str r6, [sp, #0x2c]\n    bl NNS_G3dGeBufferOP_N\n    ldrh r3, [sp, #2]\n    ldrh r2, [sp]\n    mov r0, #0x23\n    add r1, sp, #0x24\n    orr r2, r3, r2, lsl #16\n    str r2, [sp, #0x24]\n    mov r2, #2\n    str r4, [sp, #0x28]\n    bl NNS_G3dGeBufferOP_N\n    add r1, sl, sb, lsl #5\n    ldr r0, [r1, #0x24]\n    ldr r1, [r1, #0x28]\n    mov r2, r8\n    mov r3, r7\n    bl ov93_0225F268\n    add r1, sl, sb, lsl #5\n    ldr r0, [r1, #0x124]\n    ldr r1, [r1, #0x128]\n    mov r0, r0, lsl #8\n    mov r1, r1, lsl #8\n    mov r1, r1, asr #0x10\n    mov r1, r1, lsl #0x10\n    mov r0, r0, asr #0x10\n    mov r1, r1, lsr #0x10\n    mov r0, r0, lsl #0x10\n    mov r1, r1, lsl #0x10\n    orr r0, r1, r0, lsr #16\n    str r0, [sp, #0x20]\n    mov r0, #0x22\n    add r1, sp, #0x20\n    mov r2, #1\n    bl NNS_G3dGeBufferOP_N\n    mov r0, #0x21\n    add r1, sp, #0x1c\n    mov r2, #1\n    str r6, [sp, #0x1c]\n    bl NNS_G3dGeBufferOP_N\n    ldrh r3, [sp, #2]\n    ldrh r2, [sp]\n    mov r0, #0x23\n    add r1, sp, #0x14\n    orr r2, r3, r2, lsl #16\n    str r2, [sp, #0x14]\n    mov r2, #2\n    str fp, [sp, #0x18]\n    bl NNS_G3dGeBufferOP_N\n    add r1, sl, sb, lsl #5\n    ldr r0, [r1, #0x1c]\n    ldr r1, [r1, #0x20]\n    mov r2, r8\n    mov r3, r7\n    bl ov93_0225F268\n    add r1, sl, sb, lsl #5\n    ldr r0, [r1, #0x11c]\n    ldr r1, [r1, #0x120]\n    mov r0, r0, lsl #8\n    mov r1, r1, lsl #8\n    mov r1, r1, asr #0x10\n    mov r1, r1, lsl #0x10\n    mov r0, r0, asr #0x10\n    mov r1, r1, lsr #0x10\n    mov r0, r0, lsl #0x10\n    mov r1, r1, lsl #0x10\n    orr r0, r1, r0, lsr #16\n    str r0, [sp, #0x10]\n    mov r0, #0x22\n    add r1, sp, #0x10\n    mov r2, #1\n    bl NNS_G3dGeBufferOP_N\n    mov r0, #0x21\n    add r1, sp, #0xc\n    mov r2, #1\n    str r6, [sp, #0xc]\n    bl NNS_G3dGeBufferOP_N\n    mov r0, #0\n    str r0, [sp, #8]\n    ldrh r3, [sp, #2]\n    ldrh r2, [sp]\n    mov r0, #0x23\n    add r1, sp, #4\n    orr r2, r3, r2, lsl #16\n    str r2, [sp, #4]\n    mov r2, #2\n    bl NNS_G3dGeBufferOP_N\n    mov r1, #0\n    mov r0, #0x41\n    mov r2, r1\n    bl NNS_G3dGeBufferOP_N\n    add sb, sb, #1\n    cmp sb, #8\n    blt _0225EFD4\n    add sp, sp, #0x48\n    ldmia sp!, {r3, r4, r5, r6, r7, r8, sb, sl, fp, pc}\n    _0225F264: .word 0x1FF00000"
    );
    #endif
}

void ov93_0225F268(void) {
    /* Original at 0x0225F268 */
    /* Requires manual decompilation - 66 instructions */
    #ifdef MWERKS
    asm(
        "stmdb sp!, {r3, r4, r5, r6, r7, lr}\n    mov r4, r0, asr #0x1f\n    mov r5, r1\n    mov r1, r4, lsl #0xc\n    mov r7, r2\n    mov r6, r3\n    orr r1, r1, r0, lsr #20\n    mov r0, r0, lsl #0xc\n    mov r2, #0x80000\n    mov r3, #0\n    bl _ll_sdiv\n    mov r1, r5, asr #0x1f\n    mov r1, r1, lsl #0xc\n    mov r4, r0\n    orr r1, r1, r5, lsr #20\n    mov r0, r5, lsl #0xc\n    mov r2, #0x80000\n    mov r3, #0\n    bl _ll_sdiv\n    mov r5, r0\n    ldr r0, _0225F36C ; =0x00007FFF\n    cmp r4, r0\n    ble _0225F2C8\n    bl GF_AssertFail\n    mov r0, #0x8000\n    rsb r0, r0, #0\n    cmp r4, r0\n    bge _0225F2DC\n    bl GF_AssertFail\n    ldr r0, _0225F36C ; =0x00007FFF\n    cmp r5, r0\n    ble _0225F2EC\n    bl GF_AssertFail\n    mov r0, #0x8000\n    rsb r0, r0, #0\n    cmp r5, r0\n    bge _0225F300\n    bl GF_AssertFail\n    ldr r0, _0225F36C ; =0x00007FFF\n    sub r1, r4, #0x800\n    cmp r1, r0\n    ble _0225F314\n    bl GF_AssertFail\n    mov r0, #0x8000\n    sub r1, r4, #0x800\n    rsb r0, r0, #0\n    cmp r1, r0\n    bge _0225F32C\n    bl GF_AssertFail\n    ldr r0, _0225F36C ; =0x00007FFF\n    add r1, r5, #0x800\n    cmp r1, r0\n    ble _0225F340\n    bl GF_AssertFail\n    mov r0, #0x8000\n    add r1, r5, #0x800\n    rsb r0, r0, #0\n    cmp r1, r0\n    bge _0225F358\n    bl GF_AssertFail\n    sub r0, r4, #0x800\n    strh r0, [r7]\n    add r0, r5, #0x800\n    strh r0, [r6]\n    ldmia sp!, {r3, r4, r5, r6, r7, pc}\n    _0225F36C: .word 0x00007FFF"
    );
    #endif
}

void ov93_0225F370(void) {
    /* Original at 0x0225F370 */
    /* Requires manual decompilation - 55 instructions */
    #ifdef MWERKS
    asm(
        "stmdb sp!, {r3, r4, r5, lr}\n    mov r4, r0\n    ldr r1, [r4, #0x238]\n    cmp r1, #1\n    ldrne r1, [r4, #0x218]\n    cmpne r1, #0\n    moveq r0, #0\n    ldmeqia sp!, {r3, r4, r5, pc}\n    ldr r2, [r4, #0x270]\n    ldr r3, _0225F43C ; =ov93_02262C07\n    ldr r1, _0225F440 ; =ov93_02262C05\n    ldrb lr, [r3, r2, lsl #2]\n    ldr r5, [r4, #0x230]\n    ldrb r3, [r1, r2, lsl #2]\n    ldr ip, [r4, #0x20c]\n    add r1, lr, r5, asr #12\n    cmp ip, r3\n    blt _0225F3E4\n    ldr r3, _0225F444 ; =ov93_02262C06\n    ldrb r3, [r3, r2, lsl #2]\n    cmp ip, r3\n    bgt _0225F3E4\n    ldr ip, [r4, #0x210]\n    cmp ip, r1\n    blt _0225F3E4\n    ldr r3, _0225F448 ; =ov93_02262C08\n    ldrb r2, [r3, r2, lsl #2]\n    cmp ip, r2\n    ble _0225F3EC\n    mov r0, #0\n    ldmia sp!, {r3, r4, r5, pc}\n    mov r2, #1\n    str r2, [r4, #0x238]\n    ldr r2, [r4, #0x20c]\n    str r2, [r4, #0x224]\n    ldr r2, [r4, #0x210]\n    str r2, [r4, #0x228]\n    ldr r2, [r4, #0x210]\n    sub r1, r2, r1\n    str r1, [r4, #0x22c]\n    ldr r2, [r4, #0x20]\n    ldr r1, [r4, #0x10]\n    sub r1, r1, r2\n    add r1, r1, r1, lsr #31\n    add r1, r2, r1, asr #1\n    rsb r1, r1, #0\n    str r1, [r4, #0x230]\n    bl ov93_0225F9AC\n    str r0, [r4, #0x240]\n    mov r0, #1\n    ldmia sp!, {r3, r4, r5, pc}\n    _0225F43C: .word ov93_02262C07\n    _0225F440: .word ov93_02262C05\n    _0225F444: .word ov93_02262C06\n    _0225F448: .word ov93_02262C08"
    );
    #endif
}

void ov93_0225F44C(void) {
    /* Original at 0x0225F44C */
    /* Requires manual decompilation - 63 instructions */
    #ifdef MWERKS
    asm(
        "stmdb sp!, {r3, r4, r5, lr}\n    mov r5, r0\n    ldr r0, [r5, #0x238]\n    mov r4, #0\n    cmp r0, #1\n    bne _0225F4E8\n    ldr r2, [r5, #0x23c]\n    ldr r1, [r5, #0x210]\n    cmp r1, r2\n    movlt r0, r4\n    strltb r4, [r5, #0x274]\n    ldmltia sp!, {r3, r4, r5, pc}\n    streqb r4, [r5, #0x274]\n    moveq r0, #1\n    ldmeqia sp!, {r3, r4, r5, pc}\n    sub r0, r4, #1\n    cmp r2, r0\n    beq _0225F4BC\n    cmp r1, r2\n    ble _0225F4BC\n    ldr r0, _0225F540 ; =0x0000058F\n    bl IsSEPlaying\n    cmp r0, #0\n    bne _0225F4BC\n    ldr r0, _0225F540 ; =0x0000058F\n    bl PlaySE\n    mov r0, #1\n    strb r0, [r5, #0x274]\n    ldr r1, [r5, #0x270]\n    ldr r0, _0225F544 ; =ov93_02262C07\n    ldr ip, [r5, #0x210]\n    ldr r3, [r5, #0x22c]\n    ldr r2, [r5, #0x230]\n    ldrb r0, [r0, r1, lsl #2]\n    sub r1, ip, r3\n    str ip, [r5, #0x23c]\n    add r0, r2, r0, lsl #12\n    rsb r2, r0, r1, lsl #12\n    b _0225F4F4\n    ldr r0, [r5, #0x248]\n    mov r4, #1\n    rsb r2, r0, #0\n    mov r0, r5\n    mov r1, r4\n    bl ov93_0225F548\n    cmp r0, #0\n    beq _0225F51C\n    cmp r0, #1\n    cmpne r0, #2\n    bne _0225F51C\n    mov r0, r5\n    bl ov93_0225EB38\n    ldr r2, [r5, #0x20]\n    ldr r1, [r5, #0x10]\n    mov r0, #1\n    sub r1, r1, r2\n    add r1, r1, r1, lsr #31\n    add r1, r2, r1, asr #1\n    rsb r1, r1, #0\n    str r1, [r5, #0x230]\n    ldmia sp!, {r3, r4, r5, pc}\n    _0225F540: .word 0x0000058F\n    _0225F544: .word ov93_02262C07"
    );
    #endif
}

void ov93_0225F548(void) {
    /* Original at 0x0225F548 */
    /* Requires manual decompilation - 217 instructions */
    #ifdef MWERKS
    asm(
        "stmdb sp!, {r4, r5, r6, r7, r8, sb, sl, fp, lr}\n    sub sp, sp, #0x14\n    mov r4, r0\n    ldr r5, [r4, #0x10]\n    ldr r3, [r4, #0x20]\n    rsb r6, r5, #0\n    rsb r7, r3, #0\n    sub r3, r6, r7\n    add r3, r3, r3, lsr #31\n    mov r5, r2\n    mov r2, #0\n    mov sb, r1\n    add r8, r7, r3, asr #1\n    str r2, [sp, #8]\n    bl ov93_0225F8AC\n    cmp r0, #0\n    beq _0225F5A0\n    cmp r0, #1\n    beq _0225F5B4\n    cmp r0, #2\n    beq _0225F5E0\n    b _0225F608\n    add r1, r6, r5\n    add r0, r7, r5\n    str r1, [sp, #0x10]\n    str r0, [sp, #0xc]\n    b _0225F608\n    add r0, sp, #0x10\n    str r0, [sp]\n    add sl, sp, #0xc\n    mov r0, r4\n    mov r1, r5\n    mov r2, r6\n    mov r3, r7\n    str sl, [sp, #4]\n    bl ov93_0225F8E4\n    str r0, [sp, #8]\n    b _0225F608\n    add r0, sp, #0xc\n    str r0, [sp]\n    add sl, sp, #0x10\n    mov r0, r4\n    mov r1, r5\n    mov r2, r7\n    mov r3, r6\n    str sl, [sp, #4]\n    bl ov93_0225F8E4\n    str r0, [sp, #8]\n    ldr r1, [sp, #0xc]\n    ldr r2, [sp, #0x10]\n    sub r0, r2, r1\n    add r0, r0, r0, lsr #31\n    add r5, r1, r0, asr #1\n    cmp r8, r5\n    cmpeq r6, r2\n    cmpeq r7, r1\n    addeq sp, sp, #0x14\n    moveq r0, #0\n    ldmeqia sp!, {r4, r5, r6, r7, r8, sb, sl, fp, pc}\n    cmp r5, #0\n    movlt r5, #0\n    cmp r2, #0\n    movlt r0, #0\n    strlt r0, [sp, #0x10]\n    cmp r1, #0\n    movlt r0, #0\n    strlt r0, [sp, #0xc]\n    cmp r5, #0x64000\n    movgt r0, #1\n    strgt r0, [sp, #8]\n    ldr r0, [sp, #0x10]\n    movgt r5, #0x64000\n    cmp r0, #0x64000\n    ble _0225F680\n    mov r0, #0x64000\n    str r0, [sp, #0x10]\n    mov r0, #1\n    str r0, [sp, #8]\n    ldr r0, [sp, #0xc]\n    cmp r0, #0x64000\n    ble _0225F69C\n    mov r0, #0x64000\n    str r0, [sp, #0xc]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, r4\n    mov r1, sb\n    bl ov93_0225F8AC\n    cmp r0, #0\n    beq _0225F6C0\n    cmp r0, #1\n    beq _0225F700\n    cmp r0, #2\n    beq _0225F6E0\n    ldr r0, [sp, #0xc]\n    mov r1, #0x40000\n    sub r0, r0, r5\n    bl FX_Atan2Idx\n    add r1, r0, #0x8000\n    mov r1, r1, lsl #0x10\n    mov fp, r1, lsr #0x10\n    b _0225F724\n    ldr r0, [sp, #0xc]\n    mov r1, #0x40000\n    sub r0, r0, r5\n    bl FX_Atan2Idx\n    add r1, r0, #0x8000\n    mov r1, r1, lsl #0x10\n    mov fp, r1, lsr #0x10\n    b _0225F724\n    ldr r0, [sp, #0x10]\n    mov r1, #0x40000\n    sub r0, r0, r5\n    rsb r1, r1, #0\n    bl FX_Atan2Idx\n    mov fp, r0\n    add r0, fp, #0x8000\n    mov r0, r0, lsl #0x10\n    mov r0, r0, lsr #0x10\n    mov r1, fp, asr #4\n    mov r7, r1, lsl #1\n    add r2, r7, #1\n    ldr r1, _0225F8A4 ; =FX_SinCosTable_\n    mov r2, r2, lsl #1\n    ldrsh r3, [r1, r2]\n    mov r2, r0, asr #4\n    mov r6, r2, lsl #1\n    mov r2, r3, lsl #6\n    add r2, r2, #0x40000\n    str r2, [r4, #0xc]\n    mov r2, r7, lsl #1\n    ldrsh r7, [r1, r2]\n    add r2, r6, #1\n    mov r2, r2, lsl #1\n    add r7, r5, r7, lsl #6\n    rsb r7, r7, #0\n    str r7, [r4, #0x10]\n    ldrsh r7, [r1, r2]\n    ldr r2, _0225F8A8 ; =0x92492493\n    rsb r3, r5, #0x70000\n    mov r7, r7, lsl #6\n    add r7, r7, #0x40000\n    mov r6, r6, lsl #1\n    str r7, [r4, #0x1c]\n    ldrsh r6, [r1, r6]\n    smull r1, lr, r2, r3\n    add r1, r5, r6, lsl #6\n    rsb r6, r1, #0\n    add lr, r3, lr\n    mov r1, r3, lsr #0x1f\n    str r6, [r4, #0x20]\n    cmp r0, #0x8000\n    add lr, r1, lr, asr #2\n    smullls r1, r6, r2, r0\n    addls r6, r0, r6\n    movls r1, r0, lsr #0x1f\n    bls _0225F7D0\n    rsb r1, r0, #0x10000\n    rsb r3, r1, #0\n    smull r1, r6, r2, r3\n    add r6, r3, r6\n    mov r1, r3, lsr #0x1f\n    add r6, r1, r6, asr #2\n    ldr r3, _0225F8A4 ; =FX_SinCosTable_\n    mov r7, r6\n    mov r8, lr\n    mov ip, #1\n    sub r1, fp, r7\n    mov r1, r1, asr #4\n    mov r1, r1, lsl #1\n    add r2, r3, r1, lsl #1\n    ldrsh sb, [r2, #2]\n    sub r2, r0, r7\n    mov r1, r1, lsl #1\n    mov sb, sb, lsl #6\n    add sl, sb, #0x40000\n    mov r2, r2, asr #4\n    mov sb, r2, lsl #1\n    add r2, r4, ip, lsl #5\n    str sl, [r2, #0xc]\n    ldrsh r1, [r3, r1]\n    mov sl, sb, lsl #1\n    add sb, r3, sb, lsl #1\n    add r1, r5, r1, lsl #6\n    add r1, r8, r1\n    rsb r1, r1, #0\n    str r1, [r2, #0x10]\n    ldrsh r1, [sb, #2]\n    add r7, r7, r6\n    add ip, ip, #1\n    mov r1, r1, lsl #6\n    add r1, r1, #0x40000\n    str r1, [r2, #0x1c]\n    ldrsh r1, [r3, sl]\n    cmp ip, #7\n    add r1, r5, r1, lsl #6\n    add r1, r8, r1\n    rsb r1, r1, #0\n    str r1, [r2, #0x20]\n    ldr r1, [r2, #0xc]\n    add r8, r8, lr\n    str r1, [r2, #-0xc]\n    ldr r1, [r2, #0x10]\n    str r1, [r2, #-8]\n    ldr r1, [r2, #0x1c]\n    str r1, [r2, #4]\n    ldr r1, [r2, #0x20]\n    str r1, [r2, #8]\n    blt _0225F7E4\n    ldr r0, [sp, #8]\n    cmp r0, #1\n    moveq r0, #2\n    movne r0, #0\n    add sp, sp, #0x14\n    ldmia sp!, {r4, r5, r6, r7, r8, sb, sl, fp, pc}\n    _0225F8A4: .word FX_SinCosTable_\n    _0225F8A8: .word 0x92492493"
    );
    #endif
}

void ov93_0225F8AC(void) {
    /* moveq r0, #0 */
    /* bxeq lr */
    /* ldr r2, [r0, #0x21c] */
    /* ldr r1, [r0, #0x224] */
    /* sub r0, r2, #0x10 */
    /* cmp r1, r0 */
    /* movlt r0, #1 */
    /* bxlt lr */
    r0 = r2 + 0x10;
    /* cmp r1, r0 */
    /* movgt r0, #2 */
    /* movle r0, #0 */
}

void ov93_0225F8E4(void) {
    /* Original at 0x0225F8E4 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "stmdb sp!, {r4, lr}\n    ldr lr, [sp, #8]\n    add r4, r2, r1\n    mov r0, #0\n    cmp r4, #0x64000\n    subgt r0, r4, #0x64000\n    subgt r1, r1, r0\n    movgt r0, #1\n    ldr ip, [sp, #0xc]\n    str r2, [lr]\n    str r3, [ip]\n    add r4, r2, r1\n    str r4, [lr]\n    cmp r3, r2\n    strgt r3, [ip]\n    ldmgtia sp!, {r4, pc}\n    mov r2, #0x19\n    mul r2, r1, r2\n    ldr lr, _0225F948 ; =0x51EB851F\n    mov r1, r2, lsr #0x1f\n    smull r2, r4, lr, r2\n    add r4, r1, r4, asr #5\n    sub r1, r3, r4\n    str r1, [ip]\n    ldmia sp!, {r4, pc}\n    _0225F948: .word 0x51EB851F"
    );
    #endif
}

void ov93_0225F94C(void) {
    /* Original at 0x0225F94C */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "stmdb sp!, {r3, r4, r5, lr}\n    ldr r5, [r0, #0x20]\n    ldr r1, [r0, #0x10]\n    ldr r4, [r0, #0x1c]\n    sub r1, r1, r5\n    add r1, r1, r1, lsr #31\n    ldr lr, [r0, #0xc]\n    ldr ip, [r0, #0xe4]\n    ldr r3, [r0, #0xd4]\n    ldr r2, [r0, #0xd8]\n    add r0, r5, r1, asr #1\n    sub r0, r2, r0\n    sub r2, r4, lr\n    sub r1, ip, r3\n    add r1, r2, r1\n    rsb r0, r0, #0\n    smull r2, r0, r1, r0\n    adds r1, r2, #0x800\n    adc r0, r0, #0\n    mov r1, r1, lsr #0xc\n    orr r1, r1, r0, lsl #20\n    add r0, r1, r1, lsr #31\n    mov r0, r0, asr #1\n    ldmia sp!, {r3, r4, r5, pc}"
    );
    #endif
}

void ov93_0225F9AC(void) {
    /* stmdb sp!, {r3, lr} */
    ov93_0225F94C();
    r2 = 0x64;
    /* umull r3, r1, r0, r2 */
    r0 = r0;
    /* mla r1, r0, r2, r1 */
    r0 = r3;
    r3 = 0;
    r2 = 0x3200000;
    _ll_sdiv(r3);
    /* ldmia sp!, {r3, pc} */
}

void ov93_0225F9D8(void) {
    /* Original at 0x0225F9D8 */
    /* Requires manual decompilation - 57 instructions */
    #ifdef MWERKS
    asm(
        "stmdb sp!, {r3, r4, r5, lr}\n    sub sp, sp, #0x18\n    mov r5, r0\n    mov r0, #0xc9\n    mov r1, #0x75\n    bl NARC_New\n    mov r4, r0\n    str r4, [sp]\n    mov r0, #0x3a\n    str r0, [sp, #4]\n    mov r0, #0\n    str r0, [sp, #8]\n    mov r1, #1\n    str r1, [sp, #0xc]\n    ldr r0, _0225FAB4 ; =0x00002715\n    str r1, [sp, #0x10]\n    str r0, [sp, #0x14]\n    ldr r0, [r5, #0x8c]\n    ldr r2, [r5, #0x24]\n    ldr r3, [r5, #0x28]\n    mov r1, #2\n    bl SpriteSystem_LoadPaletteBufferFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    mov r1, #1\n    ldr r0, _0225FAB8 ; =0x00002713\n    str r1, [sp, #4]\n    str r0, [sp, #8]\n    ldr r0, [r5, #0x24]\n    ldr r1, [r5, #0x28]\n    mov r2, r4\n    mov r3, #0x37\n    bl SpriteSystem_LoadCharResObjFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, _0225FAB8 ; =0x00002713\n    mov r2, r4\n    str r0, [sp, #4]\n    ldr r0, [r5, #0x24]\n    ldr r1, [r5, #0x28]\n    mov r3, #0x39\n    bl SpriteSystem_LoadCellResObjFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, _0225FAB8 ; =0x00002713\n    mov r2, r4\n    str r0, [sp, #4]\n    ldr r0, [r5, #0x24]\n    ldr r1, [r5, #0x28]\n    mov r3, #0x38\n    bl SpriteSystem_LoadAnimResObjFromOpenNarc\n    mov r0, r4\n    bl NARC_Delete\n    add sp, sp, #0x18\n    ldmia sp!, {r3, r4, r5, pc}\n    _0225FAB4: .word 0x00002715\n    _0225FAB8: .word 0x00002713"
    );
    #endif
}

void ov93_0225FABC(void) {
    /* Original at 0x0225FABC */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "stmdb sp!, {r4, lr}\n    mov r4, r0\n    ldr r0, [r4, #0x28]\n    ldr r1, _0225FAF8 ; =0x00002713\n    bl SpriteManager_UnloadCharObjById\n    ldr r0, [r4, #0x28]\n    ldr r1, _0225FAF8 ; =0x00002713\n    bl SpriteManager_UnloadCellObjById\n    ldr r0, [r4, #0x28]\n    ldr r1, _0225FAF8 ; =0x00002713\n    bl SpriteManager_UnloadAnimObjById\n    ldr r0, [r4, #0x28]\n    ldr r1, _0225FAFC ; =0x00002715\n    bl SpriteManager_UnloadPlttObjById\n    ldmia sp!, {r4, pc}\n    _0225FAF8: .word 0x00002713\n    _0225FAFC: .word 0x00002715"
    );
    #endif
}

void ov93_0225FB00(void) {
    /* Original at 0x0225FB00 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "stmdb sp!, {r4, r5, lr}\n    sub sp, sp, #0x34\n    ldr lr, _0225FB68 ; =ov93_02262C38\n    mov r5, r0\n    ldmia lr!, {r0, r1, r2, r3}\n    add ip, sp, #0\n    mov r4, ip\n    stmia ip!, {r0, r1, r2, r3}\n    ldmia lr!, {r0, r1, r2, r3}\n    stmia ip!, {r0, r1, r2, r3}\n    ldmia lr!, {r0, r1, r2, r3}\n    stmia ip!, {r0, r1, r2, r3}\n    ldr r0, [lr]\n    mov r2, r4\n    str r0, [ip]\n    ldr r0, [r5, #0x24]\n    ldr r1, [r5, #0x28]\n    bl SpriteSystem_NewSprite\n    mov r4, r0\n    mov r1, #0\n    bl ManagedSprite_SetDrawFlag\n    ldr r0, [r4]\n    bl Sprite_TickFrame\n    mov r0, r4\n    add sp, sp, #0x34\n    ldmia sp!, {r4, r5, pc}\n    _0225FB68: .word ov93_02262C38"
    );
    #endif
}

void ov93_0225FB6C(void) {
    /* Original at 0x0225FB6C */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "stmdb sp!, {r4, r5, r6, lr}\n    mov r6, r0\n    ldr r2, [r6, #0x238]\n    mov r5, r1\n    cmp r2, #0\n    moveq r4, #0\n    beq _0225FB94\n    mov r1, #0\n    bl ov93_0225F8AC\n    add r4, r0, #1\n    ldr r1, [r6, #0x270]\n    ldr r0, _0225FBE0 ; =ov93_02262C07\n    ldr r3, [r6, #0x21c]\n    ldrb r0, [r0, r1, lsl #2]\n    ldr r2, [r6, #0x230]\n    mov r1, r3, lsl #0x10\n    add r0, r0, r2, asr #12\n    mov r2, r0, lsl #0x10\n    mov r0, r5\n    mov r1, r1, asr #0x10\n    mov r2, r2, asr #0x10\n    mov r3, #0x160000\n    bl ManagedSprite_SetPositionXYWithSubscreenOffset\n    mov r0, r5\n    mov r1, r4\n    bl ManagedSprite_SetAnim\n    ldr r0, [r5]\n    bl Sprite_TickFrame\n    ldmia sp!, {r4, r5, r6, pc}\n    _0225FBE0: .word ov93_02262C07"
    );
    #endif
}

void ov93_0225FBE4(void) {
    /* ldr ip, _0225FBEC ; =Sprite_DeleteAndFreeResources */
    /* _0225FBEC: .word Sprite_DeleteAndFreeResources */
}
