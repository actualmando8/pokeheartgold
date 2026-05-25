/* Decompiled from asm/overlay_01_021FAD1C.s */
#include "global.h"

void ov01_021FAD1C(void) {
    /* Original at 0x021FAD1C */
    /* Requires manual decompilation - 39 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6}\n    ldr r4, [r0]\n    ldr r3, [r1]\n    cmp r4, r3\n    bgt _021FAD2C\n    add r3, r0, #0\n    add r4, r1, #0\n    b _021FAD30\n    add r3, r1, #0\n    add r4, r0, #0\n    ldr r6, [r0, #4]\n    ldr r5, [r1, #4]\n    cmp r6, r5\n    bgt _021FAD3E\n    add r5, r0, #4\n    add r0, r1, #4\n    b _021FAD42\n    add r5, r1, #4\n    add r0, r0, #4\n    ldr r6, [r2]\n    ldr r1, [r3]\n    cmp r1, r6\n    bgt _021FAD64\n    ldr r1, [r4]\n    cmp r6, r1\n    bgt _021FAD64\n    ldr r2, [r2, #4]\n    ldr r1, [r5]\n    cmp r1, r2\n    bgt _021FAD64\n    ldr r0, [r0]\n    cmp r2, r0\n    bgt _021FAD64\n    mov r0, #1\n    pop {r3, r4, r5, r6}\n    bx lr\n    mov r0, #0\n    pop {r3, r4, r5, r6}\n    bx lr"
    );
    #endif
}

void ov01_021FAD6C(void) {
    void *r4;
    void *r5;
    /* lsl r3, r1, #3 */
    /* ldr r1, [r0] */
    /* ldr r5, [r0, #0x10] */
    /* ldrh r1, [r1, r3] */
    /* lsl r4, r1, #3 */
    /* add r1, r5, r4 */
    /* ldr r4, [r5, r4] */
    /* ldr r1, [r1, #4] */
    *(u32*)r2 = r4;
    ((u32*)r2)[4] = r1;
    /* ldr r1, [r0, #0x10] */
    /* ldr r0, [r0] */
    /* add r0, r0, r3 */
    /* ldrh r0, [r0, #2] */
    /* lsl r3, r0, #3 */
    /* add r0, r1, r3 */
    /* ldr r1, [r1, r3] */
    /* ldr r0, [r0, #4] */
    ((u32*)r2)[8] = r1;
    ((u32*)r2)[0xc] = r0;
}

void ov01_021FAD9C(void) {
    void *r3;
    void *r4;
    /* ldr r4, [r0] */
    /* ldr r3, [r0, #0x14] */
    /* lsl r0, r1, #3 */
    /* add r0, r4, r0 */
    /* ldrh r1, [r0, #4] */
    r0 = 0xc;
    /* mul r0, r1 */
    /* add r3, r3, r0 */
    /* ldmia r3!, {r0, r1} */
    /* stmia r2!, {r0, r1} */
    /* ldr r0, [r3] */
    *(u32*)r2 = 0xc;
}

void ov01_021FADBC(void) {
    void *r3;
    void *r4;
    /* ldr r4, [r0] */
    /* ldr r3, [r0, #4] */
    /* lsl r0, r1, #3 */
    /* add r0, r4, r0 */
    /* ldrh r0, [r0, #6] */
    /* lsl r0, r0, #2 */
    /* ldr r0, [r3, r0] */
    *(u32*)r2 = r0;
}

void ov01_021FADD4(void) {
    /* Original at 0x021FADD4 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "mov r3, #0\n    add r2, r3, #0\n    sub r1, r3, #1\n    str r2, [r0]\n    str r1, [r0, #4]\n    str r1, [r0, #8]\n    add r3, r3, #1\n    add r0, #0xc\n    cmp r3, #0xa\n    blt _021FADDA\n    bx lr"
    );
    #endif
}

void ov01_021FADEC(void) {
    /* Original at 0x021FADEC */
    /* Requires manual decompilation - 49 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6}\n    cmp r1, #0\n    bne _021FADF8\n    mov r0, #0\n    pop {r3, r4, r5, r6}\n    bx lr\n    cmp r1, #1\n    bne _021FAE06\n    mov r0, #0\n    strh r0, [r3]\n    mov r0, #1\n    pop {r3, r4, r5, r6}\n    bx lr\n    sub r1, r1, #1\n    lsr r5, r1, #0x1f\n    add r5, r1, r5\n    mov r4, #0\n    asr r5, r5, #1\n    lsl r6, r5, #3\n    ldr r6, [r0, r6]\n    cmp r6, r2\n    ble _021FAE32\n    sub r1, r1, #1\n    cmp r1, r4\n    ble _021FAE2A\n    add r6, r4, r5\n    add r1, r5, #0\n    lsr r5, r6, #0x1f\n    add r5, r6, r5\n    asr r5, r5, #1\n    b _021FAE10\n    strh r5, [r3]\n    mov r0, #1\n    pop {r3, r4, r5, r6}\n    bx lr\n    add r4, r4, #1\n    cmp r4, r1\n    bge _021FAE44\n    add r6, r5, r1\n    add r4, r5, #0\n    lsr r5, r6, #0x1f\n    add r5, r6, r5\n    asr r5, r5, #1\n    b _021FAE10\n    add r0, r5, #1\n    strh r0, [r3]\n    mov r0, #1\n    pop {r3, r4, r5, r6}\n    bx lr"
    );
    #endif
}

void ov01_021FAE50(void) {
    /* Original at 0x021FAE50 */
    /* Requires manual decompilation - 240 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xcc\n    str r0, [sp]\n    ldr r0, [sp, #0xe4]\n    ldr r5, [sp, #0xe0]\n    str r0, [sp, #0xe4]\n    ldr r0, [r5, #0x18]\n    str r1, [sp, #4]\n    cmp r0, #0\n    bne _021FAE6A\n    add sp, #0xcc\n    mov r0, #0\n    pop {r4, r5, r6, r7, pc}\n    str r2, [sp, #0x30]\n    str r3, [sp, #0x34]\n    add r0, sp, #0x54\n    mov r4, #0\n    bl ov01_021FADD4\n    ldr r1, [r5, #0x1c]\n    ldr r6, [r5, #8]\n    lsl r1, r1, #0x10\n    ldr r2, [sp, #0x34]\n    add r0, r6, #0\n    lsr r1, r1, #0x10\n    add r3, sp, #0x28\n    bl ov01_021FADEC\n    cmp r0, #0\n    bne _021FAE92\n    add sp, #0xcc\n    add r0, r4, #0\n    pop {r4, r5, r6, r7, pc}\n    add r0, sp, #0x28\n    ldrh r0, [r0]\n    lsl r0, r0, #3\n    add r1, r6, r0\n    ldrh r0, [r1, #4]\n    str r0, [sp, #0x14]\n    ldrh r1, [r1, #6]\n    add r0, r4, #0\n    str r0, [sp, #0x18]\n    ldr r0, [sp, #0x14]\n    cmp r0, #0\n    bls _021FAF58\n    lsl r0, r1, #1\n    add r7, sp, #0x54\n    str r0, [sp, #0x10]\n    ldr r0, [sp, #0x18]\n    ldr r2, [r5, #0xc]\n    lsl r1, r0, #1\n    ldr r0, [sp, #0x10]\n    add r0, r0, r2\n    ldrh r6, [r1, r0]\n    add r0, r5, #0\n    add r2, sp, #0x44\n    add r1, r6, #0\n    bl ov01_021FAD6C\n    add r0, sp, #0x44\n    add r1, sp, #0x4c\n    add r2, sp, #0x30\n    bl ov01_021FAD1C\n    cmp r0, #1\n    bne _021FAF48\n    add r0, r5, #0\n    add r1, r6, #0\n    add r2, sp, #0x38\n    bl ov01_021FAD9C\n    add r0, r5, #0\n    add r1, r6, #0\n    add r2, sp, #0x2c\n    bl ov01_021FADBC\n    ldr r0, [sp, #0x38]\n    ldr r2, [sp, #0x30]\n    asr r1, r0, #0x1f\n    asr r3, r2, #0x1f\n    bl _ll_mul\n    str r0, [sp, #0x1c]\n    ldr r2, [sp, #0x34]\n    ldr r0, [sp, #0x40]\n    str r1, [sp, #0xc]\n    asr r1, r0, #0x1f\n    asr r3, r2, #0x1f\n    bl _ll_mul\n    add r6, r0, #0\n    ldr r0, [sp, #0x2c]\n    ldr r2, [sp, #0x1c]\n    mov ip, r0\n    mov r0, #2\n    lsl r0, r0, #0xa\n    add r0, r2, r0\n    ldr r3, [sp, #0xc]\n    ldr r2, _021FB048 ; =0x00000000\n    adc r3, r2\n    lsl r2, r3, #0x14\n    lsr r0, r0, #0xc\n    orr r0, r2\n    mov r2, #2\n    lsl r2, r2, #0xa\n    str r3, [sp, #0xc]\n    add r3, r6, r2\n    ldr r2, _021FB048 ; =0x00000000\n    adc r1, r2\n    lsl r1, r1, #0x14\n    lsr r2, r3, #0xc\n    orr r2, r1\n    add r1, r0, r2\n    mov r0, ip\n    add r0, r0, r1\n    ldr r1, [sp, #0x3c]\n    neg r0, r0\n    bl FX_Div\n    str r0, [r7]\n    add r4, r4, #1\n    add r7, #0xc\n    cmp r4, #0xa\n    bge _021FAF58\n    ldr r0, [sp, #0x18]\n    add r0, r0, #1\n    lsl r0, r0, #0x10\n    lsr r1, r0, #0x10\n    str r1, [sp, #0x18]\n    ldr r0, [sp, #0x14]\n    cmp r1, r0\n    blo _021FAEB0\n    cmp r4, #1\n    ble _021FB022\n    ldr r0, [sp]\n    mov r6, #0\n    cmp r0, #0\n    beq _021FAFBE\n    cmp r0, #1\n    beq _021FAF6E\n    cmp r0, #2\n    beq _021FAF96\n    b _021FAFBE\n    mov r1, #0xff\n    lsl r1, r1, #0x18\n    add r2, r6, #0\n    cmp r4, #0\n    ble _021FB00E\n    add r0, sp, #0x54\n    mov r3, #0xc\n    add r5, r2, #0\n    mul r5, r3\n    ldr r5, [r0, r5]\n    cmp r1, r5\n    bge _021FAF8A\n    add r1, r5, #0\n    add r6, r2, #0\n    add r2, r2, #1\n    lsl r2, r2, #0x10\n    lsr r2, r2, #0x10\n    cmp r2, r4\n    blt _021FAF7C\n    b _021FB00E\n    mov r2, #1\n    lsl r2, r2, #0x18\n    add r1, r6, #0\n    cmp r4, #0\n    ble _021FB00E\n    add r0, sp, #0x54\n    mov r3, #0xc\n    add r5, r1, #0\n    mul r5, r3\n    ldr r5, [r0, r5]\n    cmp r2, r5\n    ble _021FAFB2\n    add r2, r5, #0\n    add r6, r1, #0\n    add r1, r1, #1\n    lsl r1, r1, #0x10\n    lsr r1, r1, #0x10\n    cmp r1, r4\n    blt _021FAFA4\n    b _021FB00E\n    ldr r0, [sp, #4]\n    ldr r1, [sp, #0x54]\n    bl sub_02020B94\n    add r5, r0, #0\n    ldr r0, [sp, #4]\n    ldr r1, [sp, #0x54]\n    bl sub_02020B8C\n    sub r7, r5, r0\n    mov r5, #1\n    cmp r4, #1\n    ble _021FB00E\n    mov r0, #0xc\n    mul r0, r5\n    str r0, [sp, #0x20]\n    ldr r1, [sp, #0x20]\n    add r2, sp, #0x54\n    ldr r0, [sp, #4]\n    ldr r1, [r2, r1]\n    bl sub_02020B94\n    str r0, [sp, #0x24]\n    ldr r1, [sp, #0x20]\n    add r2, sp, #0x54\n    ldr r0, [sp, #4]\n    ldr r1, [r2, r1]\n    bl sub_02020B8C\n    ldr r1, [sp, #0x24]\n    sub r0, r1, r0\n    cmp r7, r0\n    ble _021FB004\n    add r7, r0, #0\n    add r6, r5, #0\n    add r0, r5, #1\n    lsl r0, r0, #0x10\n    lsr r5, r0, #0x10\n    cmp r5, r4\n    blt _021FAFD8\n    mov r0, #0xc\n    add r1, r6, #0\n    mul r1, r0\n    add r0, sp, #0x54\n    ldr r1, [r0, r1]\n    ldr r0, [sp, #0xe4]\n    add sp, #0xcc\n    str r1, [r0]\n    mov r0, #1\n    pop {r4, r5, r6, r7, pc}\n    bne _021FB030\n    ldr r1, [sp, #0x54]\n    ldr r0, [sp, #0xe4]\n    add sp, #0xcc\n    str r1, [r0]\n    mov r0, #1\n    pop {r4, r5, r6, r7, pc}\n    cmp r4, #0\n    beq _021FB040\n    ldr r1, [sp, #0x54]\n    ldr r0, [sp, #0xe4]\n    add sp, #0xcc\n    str r1, [r0]\n    mov r0, #1\n    pop {r4, r5, r6, r7, pc}\n    mov r0, #0\n    add sp, #0xcc\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _021FB048: .word 0x00000000"
    );
    #endif
}
