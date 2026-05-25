/* Decompiled from asm/overlay_80_0223AC24.s */
#include "global.h"

void ov80_0223AC24(void) {
    /* Original at 0x0223AC24 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    add r7, r1, #0\n    mov r0, #0xb\n    mov r1, #0x4c\n    str r2, [sp]\n    add r5, r3, #0\n    bl Heap_Alloc\n    mov r1, #0\n    mov r2, #0x4c\n    add r4, r0, #0\n    bl memset\n    ldr r0, _0223AC64 ; =ov80_0223AC68\n    add r1, r4, #0\n    mov r2, #5\n    bl SysTask_CreateOnMainQueue\n    str r5, [r4, #0x48]\n    cmp r5, #0\n    beq _0223AC54\n    mov r0, #0\n    str r0, [r5]\n    str r6, [r4, #0xc]\n    ldr r0, [sp]\n    str r7, [r4, #0x10]\n    str r0, [r4, #0x14]\n    ldr r0, [sp, #0x18]\n    str r0, [r4, #4]\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0223AC64: .word ov80_0223AC68"
    );
    #endif
}

void ov80_0223AC68(void) {
    /* Original at 0x0223AC68 */
    /* Requires manual decompilation - 107 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    add r4, r1, #0\n    ldr r1, [r4]\n    cmp r1, #5\n    bhi _0223AD4E\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _0223AC80: ; jump table\n    ldr r0, [r4, #0xc]\n    cmp r0, #1\n    bne _0223ACA6\n    mov r0, #8\n    str r0, [sp]\n    add r0, r4, #0\n    ldr r2, [r4, #0x14]\n    add r0, #0x30\n    mov r1, #0\n    mov r3, #2\n    bl ov80_0223AD7C\n    b _0223ACBC\n    cmp r0, #2\n    bne _0223ACBC\n    mov r0, #8\n    str r0, [sp]\n    add r0, r4, #0\n    ldr r2, [r4, #0x14]\n    add r0, #0x30\n    mov r1, #0\n    mov r3, #1\n    bl ov80_0223AD7C\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _0223AD4E\n    mov r0, #3\n    str r0, [sp]\n    add r0, r4, #0\n    ldr r2, [r4, #0x10]\n    ldr r3, [r4, #0xc]\n    add r0, #0x18\n    mov r1, #0\n    bl ov80_0223AD7C\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _0223AD4E\n    add r0, r4, #0\n    add r0, #0x18\n    bl ov80_0223AD88\n    cmp r0, #0\n    beq _0223AD4E\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _0223AD4E\n    mov r0, #3\n    str r0, [sp]\n    add r0, r4, #0\n    ldr r1, [r4, #0x10]\n    ldr r3, [r4, #0xc]\n    add r0, #0x18\n    mov r2, #0\n    bl ov80_0223AD7C\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _0223AD4E\n    add r0, r4, #0\n    add r0, #0x18\n    bl ov80_0223AD88\n    cmp r0, #0\n    beq _0223AD4E\n    ldr r0, [r4, #8]\n    add r1, r0, #1\n    str r1, [r4, #8]\n    ldr r0, [r4, #4]\n    cmp r1, r0\n    bne _0223AD2A\n    mov r0, #5\n    str r0, [r4]\n    b _0223AD4E\n    mov r0, #1\n    str r0, [r4]\n    b _0223AD4E\n    mov r1, #0\n    str r1, [r4]\n    str r1, [r4, #8]\n    ldr r2, [r4, #0x48]\n    cmp r2, #0\n    beq _0223AD40\n    mov r1, #1\n    str r1, [r2]\n    bl SysTask_Destroy\n    add r0, r4, #0\n    bl Heap_Free\n    add sp, #4\n    pop {r3, r4, pc}\n    add r4, #0x30\n    add r0, r4, #0\n    bl ov80_0223AD88\n    add sp, #4\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov80_0223AD5C(void) {
    /* Original at 0x0223AD5C */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    cmp r0, #1\n    bne _0223AD6A\n    ldr r0, _0223AD74 ; =0x0400006C\n    bl GXx_SetMasterBrightness_\n    pop {r3, pc}\n    ldr r0, _0223AD78 ; =0x0400106C\n    bl GXx_SetMasterBrightness_\n    pop {r3, pc}\n    nop\n    _0223AD74: .word 0x0400006C\n    _0223AD78: .word 0x0400106C"
    );
    #endif
}

void ov80_0223AD7C(void) {
    ov80_0223ADB8();
}

void ov80_0223AD88(void) {
    /* Original at 0x0223AD88 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    bl ov80_0223ADC8\n    add r4, r0, #0\n    ldr r0, _0223ADA0 ; =ov80_0223ADA4\n    add r1, r5, #0\n    mov r2, #0xa\n    bl SysTask_CreateOnVWaitQueue\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}\n    _0223ADA0: .word ov80_0223ADA4"
    );
    #endif
}

void ov80_0223ADA4(void) {
    /* Original at 0x0223ADA4 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r1, #0x14]\n    ldr r1, [r1]\n    bl ov80_0223AD5C\n    add r0, r4, #0\n    bl SysTask_Destroy\n    pop {r4, pc}"
    );
    #endif
}

void ov80_0223ADB8(void) {
    /* Original at 0x0223ADB8 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "str r1, [r0]\n    str r1, [r0, #4]\n    sub r1, r2, r1\n    str r1, [r0, #8]\n    str r3, [r0, #0x10]\n    mov r1, #0\n    str r1, [r0, #0xc]\n    bx lr"
    );
    #endif
}

void ov80_0223ADC8(void) {
    /* Original at 0x0223ADC8 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r1, [r4, #8]\n    ldr r0, [r4, #0xc]\n    mul r0, r1\n    ldr r1, [r4, #0x10]\n    bl _s32_div_f\n    ldr r1, [r4, #4]\n    add r0, r0, r1\n    str r0, [r4]\n    ldr r0, [r4, #0xc]\n    ldr r1, [r4, #0x10]\n    add r0, r0, #1\n    cmp r0, r1\n    bgt _0223ADEE\n    str r0, [r4, #0xc]\n    mov r0, #0\n    pop {r4, pc}\n    str r1, [r4, #0xc]\n    mov r0, #1\n    pop {r4, pc}"
    );
    #endif
}

void ov80_0223ADF4(void) {
    /* Original at 0x0223ADF4 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r1, #0x30\n    bl Heap_Alloc\n    mov r1, #0\n    mov r2, #0x30\n    add r4, r0, #0\n    bl memset\n    add r0, r4, #0\n    pop {r4, pc}"
    );
    #endif
}

void ov80_0223AE0C(void) {
    Heap_Free();
}

void ov80_0223AE14(void) {
    /* Original at 0x0223AE14 */
    /* Requires manual decompilation - 40 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r0, #0x2e\n    ldrb r0, [r0]\n    add r4, r1, #0\n    add r6, r2, #0\n    add r7, r3, #0\n    cmp r0, #0\n    beq _0223AE2A\n    bl GF_AssertFail\n    ldr r3, [sp, #0x1c]\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r6, #0\n    bl ov80_0223ADB8\n    add r0, r5, #0\n    ldr r2, [sp, #0x18]\n    ldr r3, [sp, #0x1c]\n    add r0, #0x14\n    add r1, r7, #0\n    bl ov80_0223ADB8\n    ldr r0, [sp, #0x20]\n    ldr r1, [sp, #0x24]\n    str r0, [r5, #0x28]\n    add r0, r5, #0\n    add r0, #0x2c\n    strb r1, [r0]\n    add r0, r5, #0\n    ldr r1, [sp, #0x28]\n    add r0, #0x2d\n    strb r1, [r0]\n    add r0, sp, #0x2c\n    ldrb r1, [r0]\n    add r0, r5, #0\n    add r0, #0x2f\n    strb r1, [r0]\n    mov r0, #1\n    add r5, #0x2e\n    strb r0, [r5]\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov80_0223AE6C(void) {
    /* Original at 0x0223AE6C */
    /* Requires manual decompilation - 48 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #8\n    add r5, r0, #0\n    add r1, r5, #0\n    add r1, #0x2e\n    ldrb r1, [r1]\n    cmp r1, #0\n    bne _0223AE82\n    add sp, #8\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    bl ov80_0223ADC8\n    add r4, r0, #0\n    add r0, r5, #0\n    add r0, #0x14\n    bl ov80_0223ADC8\n    add r0, r5, #0\n    add r0, #0x2c\n    ldrb r0, [r0]\n    ldr r2, [r5]\n    ldr r6, [r5, #0x14]\n    lsr r1, r0, #1\n    sub r1, r2, r1\n    lsl r1, r1, #0x10\n    asr r3, r1, #0x10\n    add r1, r5, #0\n    add r1, #0x2d\n    ldrb r2, [r1]\n    add r0, r3, r0\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    lsr r1, r2, #1\n    str r0, [sp]\n    add r0, r5, #0\n    sub r1, r6, r1\n    add r0, #0x2f\n    lsl r1, r1, #0x10\n    ldrb r0, [r0]\n    asr r1, r1, #0x10\n    add r2, r1, r2\n    str r0, [sp, #4]\n    lsl r2, r2, #0x10\n    ldr r0, [r5, #0x28]\n    asr r2, r2, #0x10\n    bl ov80_0223AED4\n    add r0, r4, #0\n    add sp, #8\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov80_0223AED4(void) {
    /* Original at 0x0223AED4 */
    /* Requires manual decompilation - 45 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #8\n    ldr r5, [sp, #0x18]\n    add r4, r1, #0\n    cmp r5, #0\n    ble _0223AF2C\n    cmp r2, #0\n    ble _0223AF2C\n    cmp r3, r5\n    beq _0223AF2C\n    cmp r4, r2\n    beq _0223AF2C\n    cmp r3, #0\n    bge _0223AEF2\n    mov r3, #0\n    mov r1, #1\n    lsl r1, r1, #8\n    cmp r5, r1\n    ble _0223AEFC\n    add r5, r1, #0\n    cmp r4, #0\n    bge _0223AF02\n    mov r4, #0\n    mov r1, #1\n    lsl r1, r1, #8\n    cmp r2, r1\n    ble _0223AF0C\n    add r2, r1, #0\n    sub r1, r5, r3\n    lsl r1, r1, #0x10\n    lsr r1, r1, #0x10\n    str r1, [sp]\n    sub r1, r2, r4\n    lsl r1, r1, #0x10\n    lsr r1, r1, #0x10\n    str r1, [sp, #4]\n    lsl r2, r3, #0x10\n    add r1, sp, #8\n    lsl r3, r4, #0x10\n    ldrb r1, [r1, #0x14]\n    lsr r2, r2, #0x10\n    lsr r3, r3, #0x10\n    bl FillWindowPixelRect\n    add sp, #8\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov80_0223AF30(void) {
    /* Original at 0x0223AF30 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    mov r1, #0x19\n    lsl r1, r1, #4\n    add r6, r0, #0\n    bl Heap_Alloc\n    mov r2, #0x19\n    mov r1, #0\n    lsl r2, r2, #4\n    add r7, r0, #0\n    bl memset\n    mov r4, #0\n    add r5, r7, #0\n    add r0, r6, #0\n    bl ov80_0223ADF4\n    str r0, [r5, #4]\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #0x60\n    blt _0223AF4C\n    add r0, r7, #0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov80_0223AF60(void) {
    /* Original at 0x0223AF60 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r0, #0\n    mov r4, #0\n    add r5, r6, #0\n    ldr r0, [r5, #4]\n    bl ov80_0223AE0C\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #0x60\n    blt _0223AF68\n    add r0, r6, #0\n    bl Heap_Free\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov80_0223AF80(void) {
    /* Original at 0x0223AF80 */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    str r3, [r0]\n    ldr r3, _0223AFC0 ; =0xFFFFFFF8\n    add r3, sp\n    ldrb r4, [r3, #0x10]\n    mov r3, #0x63\n    lsl r3, r3, #2\n    strb r4, [r0, r3]\n    sub r4, r3, #3\n    strb r1, [r0, r4]\n    sub r1, r3, #2\n    strb r2, [r0, r1]\n    add r2, r3, #0\n    mov r1, #0\n    sub r2, #8\n    strb r1, [r0, r2]\n    sub r2, r3, #7\n    strb r1, [r0, r2]\n    sub r2, r3, #6\n    strb r1, [r0, r2]\n    sub r2, r3, #5\n    strb r1, [r0, r2]\n    sub r2, r3, #4\n    strb r1, [r0, r2]\n    sub r2, r3, #1\n    strb r1, [r0, r2]\n    mov r2, #1\n    add r1, r3, #1\n    strb r2, [r0, r1]\n    pop {r3, r4}\n    bx lr\n    nop\n    _0223AFC0: .word 0xFFFFFFF8"
    );
    #endif
}

void ov80_0223AFC4(void) {
    /* Original at 0x0223AFC4 */
    /* Requires manual decompilation - 256 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x1c\n    add r5, r0, #0\n    ldr r0, _0223B1C8 ; =0x0000018D\n    ldrb r1, [r5, r0]\n    cmp r1, #0\n    bne _0223AFD8\n    add sp, #0x1c\n    mov r0, #1\n    pop {r4, r5, r6, r7, pc}\n    add r1, r0, #0\n    sub r1, #9\n    ldrb r1, [r5, r1]\n    cmp r1, #0x60\n    bhs _0223AFF2\n    sub r1, r0, #2\n    ldrsb r1, [r5, r1]\n    sub r2, r1, #1\n    sub r1, r0, #2\n    strb r2, [r5, r1]\n    ldrsb r1, [r5, r1]\n    cmp r1, #0\n    ble _0223AFF4\n    b _0223B16E\n    sub r1, r0, #3\n    ldrb r2, [r5, r1]\n    sub r1, r0, #2\n    ldr r3, _0223B1CC ; =ov80_0223DBEC\n    strb r2, [r5, r1]\n    sub r1, r0, #6\n    ldrb r1, [r5, r1]\n    lsl r4, r1, #4\n    add r1, r0, #0\n    sub r1, #8\n    ldrb r2, [r5, r1]\n    add r1, r3, r4\n    sub r3, r0, #7\n    ldrb r3, [r5, r3]\n    sub r4, r0, #4\n    ldrb r1, [r2, r1]\n    lsl r3, r3, #4\n    add r3, #8\n    str r3, [sp]\n    ldrb r4, [r5, r4]\n    lsl r1, r1, #5\n    add r2, r1, #0\n    str r4, [sp, #4]\n    ldr r4, [r5]\n    add r2, #0x20\n    str r4, [sp, #8]\n    mov r4, #0x20\n    str r4, [sp, #0xc]\n    mov r4, #0x10\n    str r4, [sp, #0x10]\n    sub r4, r0, #1\n    ldrb r4, [r5, r4]\n    sub r0, #9\n    str r4, [sp, #0x14]\n    ldrb r0, [r5, r0]\n    lsl r0, r0, #2\n    add r0, r5, r0\n    ldr r0, [r0, #4]\n    bl ov80_0223AE14\n    ldr r0, _0223B1D0 ; =0x00000187\n    mov r1, #1\n    ldrb r2, [r5, r0]\n    ldr r3, _0223B1CC ; =ov80_0223DBEC\n    eor r1, r2\n    lsl r4, r1, #4\n    sub r1, r0, #2\n    ldrb r2, [r5, r1]\n    add r1, r3, r4\n    sub r3, r0, #1\n    ldrb r4, [r5, r3]\n    mov r3, #5\n    ldrb r1, [r2, r1]\n    sub r3, r3, r4\n    lsl r3, r3, #4\n    add r3, #8\n    str r3, [sp]\n    add r4, r0, #2\n    ldrb r4, [r5, r4]\n    lsl r1, r1, #5\n    add r2, r1, #0\n    str r4, [sp, #4]\n    ldr r4, [r5]\n    add r2, #0x20\n    str r4, [sp, #8]\n    mov r4, #0x20\n    str r4, [sp, #0xc]\n    mov r4, #0x10\n    str r4, [sp, #0x10]\n    add r4, r0, #5\n    ldrb r4, [r5, r4]\n    sub r0, r0, #3\n    str r4, [sp, #0x14]\n    ldrb r0, [r5, r0]\n    add r0, r0, #1\n    lsl r0, r0, #2\n    add r0, r5, r0\n    ldr r0, [r0, #4]\n    bl ov80_0223AE14\n    ldr r0, _0223B1D0 ; =0x00000187\n    ldr r3, _0223B1CC ; =ov80_0223DBEC\n    ldrb r1, [r5, r0]\n    lsl r4, r1, #4\n    sub r1, r0, #2\n    ldrb r2, [r5, r1]\n    add r1, r3, r4\n    ldrb r1, [r2, r1]\n    sub r2, r0, #1\n    ldrb r2, [r5, r2]\n    lsl r1, r1, #5\n    add r2, r2, #6\n    lsl r3, r2, #4\n    add r3, #8\n    str r3, [sp]\n    add r2, r0, #2\n    ldrb r2, [r5, r2]\n    str r2, [sp, #4]\n    ldr r2, [r5]\n    str r2, [sp, #8]\n    mov r2, #0x20\n    str r2, [sp, #0xc]\n    mov r2, #0x10\n    str r2, [sp, #0x10]\n    add r2, r0, #5\n    ldrb r2, [r5, r2]\n    sub r0, r0, #3\n    str r2, [sp, #0x14]\n    ldrb r0, [r5, r0]\n    add r2, r1, #0\n    add r2, #0x20\n    add r0, r0, #2\n    lsl r0, r0, #2\n    add r0, r5, r0\n    ldr r0, [r0, #4]\n    bl ov80_0223AE14\n    ldr r0, _0223B1D0 ; =0x00000187\n    mov r1, #1\n    ldrb r2, [r5, r0]\n    ldr r3, _0223B1CC ; =ov80_0223DBEC\n    eor r1, r2\n    lsl r4, r1, #4\n    sub r1, r0, #2\n    ldrb r2, [r5, r1]\n    add r1, r3, r4\n    ldrb r1, [r2, r1]\n    sub r2, r0, #1\n    ldrb r3, [r5, r2]\n    mov r2, #0xb\n    lsl r1, r1, #5\n    sub r2, r2, r3\n    lsl r3, r2, #4\n    add r3, #8\n    str r3, [sp]\n    add r2, r0, #2\n    ldrb r2, [r5, r2]\n    str r2, [sp, #4]\n    ldr r2, [r5]\n    str r2, [sp, #8]\n    mov r2, #0x20\n    str r2, [sp, #0xc]\n    mov r2, #0x10\n    str r2, [sp, #0x10]\n    add r2, r0, #5\n    ldrb r2, [r5, r2]\n    sub r0, r0, #3\n    str r2, [sp, #0x14]\n    ldrb r0, [r5, r0]\n    add r2, r1, #0\n    add r2, #0x20\n    add r0, r0, #3\n    lsl r0, r0, #2\n    add r0, r5, r0\n    ldr r0, [r0, #4]\n    bl ov80_0223AE14\n    mov r1, #0x61\n    lsl r1, r1, #2\n    ldrb r0, [r5, r1]\n    add r0, r0, #4\n    strb r0, [r5, r1]\n    add r0, r1, #1\n    ldrb r0, [r5, r0]\n    add r2, r0, #1\n    add r0, r1, #1\n    strb r2, [r5, r0]\n    ldrb r0, [r5, r0]\n    lsr r3, r0, #0x1f\n    lsl r2, r0, #0x1d\n    sub r2, r2, r3\n    mov r0, #0x1d\n    ror r2, r0\n    add r0, r3, r2\n    bne _0223B16E\n    add r0, r1, #3\n    ldrb r2, [r5, r0]\n    mov r0, #1\n    eor r2, r0\n    add r0, r1, #3\n    strb r2, [r5, r0]\n    add r0, r1, #2\n    ldrb r0, [r5, r0]\n    add r2, r0, #1\n    add r0, r1, #2\n    strb r2, [r5, r0]\n    mov r2, #0\n    add r0, r1, #1\n    strb r2, [r5, r0]\n    mov r0, #0x62\n    lsl r0, r0, #2\n    ldrb r4, [r5, r0]\n    sub r0, r0, #4\n    ldrb r0, [r5, r0]\n    cmp r4, r0\n    bge _0223B1A4\n    lsl r0, r4, #2\n    mov r7, #0x62\n    add r6, r5, r0\n    lsl r7, r7, #2\n    ldr r0, [r6, #4]\n    bl ov80_0223AE6C\n    str r0, [sp, #0x18]\n    cmp r0, #1\n    bne _0223B196\n    ldrb r0, [r5, r7]\n    add r0, r0, #1\n    strb r0, [r5, r7]\n    mov r0, #0x61\n    lsl r0, r0, #2\n    ldrb r0, [r5, r0]\n    add r4, r4, #1\n    add r6, r6, #4\n    cmp r4, r0\n    blt _0223B184\n    mov r1, #0x62\n    lsl r1, r1, #2\n    ldrb r0, [r5, r1]\n    cmp r0, #0x60\n    blo _0223B1C0\n    ldr r0, [sp, #0x18]\n    cmp r0, #1\n    bne _0223B1C0\n    mov r2, #0\n    add r0, r1, #5\n    strb r2, [r5, r0]\n    add sp, #0x1c\n    mov r0, #1\n    pop {r4, r5, r6, r7, pc}\n    mov r0, #0\n    add sp, #0x1c\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _0223B1C8: .word 0x0000018D\n    _0223B1CC: .word ov80_0223DBEC\n    _0223B1D0: .word 0x00000187"
    );
    #endif
}

void ov80_0223B1D4(void) {
    /* Original at 0x0223B1D4 */
    /* Requires manual decompilation - 258 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x1c\n    add r5, r0, #0\n    ldr r0, _0223B3DC ; =0x0000018D\n    ldrb r1, [r5, r0]\n    cmp r1, #0\n    bne _0223B1E8\n    add sp, #0x1c\n    mov r0, #1\n    pop {r4, r5, r6, r7, pc}\n    add r1, r0, #0\n    sub r1, #9\n    ldrb r1, [r5, r1]\n    cmp r1, #0x60\n    bhs _0223B202\n    sub r1, r0, #2\n    ldrsb r1, [r5, r1]\n    sub r2, r1, #1\n    sub r1, r0, #2\n    strb r2, [r5, r1]\n    ldrsb r1, [r5, r1]\n    cmp r1, #0\n    ble _0223B204\n    b _0223B384\n    sub r1, r0, #3\n    ldrb r2, [r5, r1]\n    sub r1, r0, #2\n    ldr r4, _0223B3E0 ; =ov80_0223DBE0\n    strb r2, [r5, r1]\n    sub r2, r0, #6\n    ldrb r3, [r5, r2]\n    mov r2, #6\n    add r1, r0, #0\n    mul r2, r3\n    sub r3, r0, #7\n    ldrb r3, [r5, r3]\n    add r2, r4, r2\n    sub r1, #8\n    ldrb r2, [r3, r2]\n    ldrb r1, [r5, r1]\n    lsl r3, r2, #5\n    add r2, r3, #0\n    add r2, #0x20\n    str r2, [sp]\n    sub r2, r0, #4\n    ldrb r2, [r5, r2]\n    lsl r1, r1, #4\n    add r1, #8\n    str r2, [sp, #4]\n    ldr r2, [r5]\n    str r2, [sp, #8]\n    mov r2, #0x10\n    str r2, [sp, #0xc]\n    mov r2, #0x20\n    str r2, [sp, #0x10]\n    sub r2, r0, #1\n    ldrb r2, [r5, r2]\n    sub r0, #9\n    str r2, [sp, #0x14]\n    ldrb r0, [r5, r0]\n    add r2, r1, #0\n    lsl r0, r0, #2\n    add r0, r5, r0\n    ldr r0, [r0, #4]\n    bl ov80_0223AE14\n    ldr r2, _0223B3E4 ; =0x00000185\n    mov r0, #7\n    ldrb r1, [r5, r2]\n    sub r0, r0, r1\n    lsl r1, r0, #4\n    add r0, r2, #2\n    ldrb r3, [r5, r0]\n    mov r0, #1\n    add r1, #8\n    eor r3, r0\n    mov r0, #6\n    mul r0, r3\n    add r3, r2, #1\n    ldrb r3, [r5, r3]\n    add r0, r4, r0\n    ldrb r0, [r3, r0]\n    lsl r3, r0, #5\n    add r0, r3, #0\n    add r0, #0x20\n    str r0, [sp]\n    add r0, r2, #4\n    ldrb r0, [r5, r0]\n    str r0, [sp, #4]\n    ldr r0, [r5]\n    str r0, [sp, #8]\n    mov r0, #0x10\n    str r0, [sp, #0xc]\n    mov r0, #0x20\n    str r0, [sp, #0x10]\n    add r0, r2, #7\n    ldrb r0, [r5, r0]\n    str r0, [sp, #0x14]\n    sub r0, r2, #1\n    ldrb r0, [r5, r0]\n    add r2, r1, #0\n    add r0, r0, #1\n    lsl r0, r0, #2\n    add r0, r5, r0\n    ldr r0, [r0, #4]\n    bl ov80_0223AE14\n    ldr r2, _0223B3E4 ; =0x00000185\n    ldrb r0, [r5, r2]\n    add r0, #8\n    lsl r1, r0, #4\n    add r0, r2, #2\n    ldrb r3, [r5, r0]\n    mov r0, #6\n    add r1, #8\n    mul r0, r3\n    add r3, r2, #1\n    ldrb r3, [r5, r3]\n    add r0, r4, r0\n    ldrb r0, [r3, r0]\n    lsl r3, r0, #5\n    add r0, r3, #0\n    add r0, #0x20\n    str r0, [sp]\n    add r0, r2, #4\n    ldrb r0, [r5, r0]\n    str r0, [sp, #4]\n    ldr r0, [r5]\n    str r0, [sp, #8]\n    mov r0, #0x10\n    str r0, [sp, #0xc]\n    mov r0, #0x20\n    str r0, [sp, #0x10]\n    add r0, r2, #7\n    ldrb r0, [r5, r0]\n    str r0, [sp, #0x14]\n    sub r0, r2, #1\n    ldrb r0, [r5, r0]\n    add r2, r1, #0\n    add r0, r0, #2\n    lsl r0, r0, #2\n    add r0, r5, r0\n    ldr r0, [r0, #4]\n    bl ov80_0223AE14\n    ldr r2, _0223B3E4 ; =0x00000185\n    mov r0, #0xf\n    ldrb r1, [r5, r2]\n    sub r0, r0, r1\n    lsl r1, r0, #4\n    add r0, r2, #2\n    ldrb r3, [r5, r0]\n    mov r0, #1\n    add r1, #8\n    eor r3, r0\n    mov r0, #6\n    mul r0, r3\n    add r3, r2, #1\n    ldrb r3, [r5, r3]\n    add r0, r4, r0\n    ldrb r0, [r3, r0]\n    lsl r3, r0, #5\n    add r0, r3, #0\n    add r0, #0x20\n    str r0, [sp]\n    add r0, r2, #4\n    ldrb r0, [r5, r0]\n    str r0, [sp, #4]\n    ldr r0, [r5]\n    str r0, [sp, #8]\n    mov r0, #0x10\n    str r0, [sp, #0xc]\n    mov r0, #0x20\n    str r0, [sp, #0x10]\n    add r0, r2, #7\n    ldrb r0, [r5, r0]\n    str r0, [sp, #0x14]\n    sub r0, r2, #1\n    ldrb r0, [r5, r0]\n    add r2, r1, #0\n    add r0, r0, #3\n    lsl r0, r0, #2\n    add r0, r5, r0\n    ldr r0, [r0, #4]\n    bl ov80_0223AE14\n    mov r0, #0x61\n    lsl r0, r0, #2\n    ldrb r1, [r5, r0]\n    add r1, r1, #4\n    strb r1, [r5, r0]\n    add r1, r0, #2\n    ldrb r1, [r5, r1]\n    add r2, r1, #1\n    add r1, r0, #2\n    strb r2, [r5, r1]\n    add r0, r0, #2\n    ldrb r0, [r5, r0]\n    mov r1, #6\n    bl _s32_div_f\n    cmp r1, #0\n    bne _0223B384\n    ldr r1, _0223B3E8 ; =0x00000187\n    mov r0, #1\n    ldrb r2, [r5, r1]\n    eor r0, r2\n    strb r0, [r5, r1]\n    sub r0, r1, #2\n    ldrb r0, [r5, r0]\n    add r2, r0, #1\n    sub r0, r1, #2\n    strb r2, [r5, r0]\n    mov r2, #0\n    sub r0, r1, #1\n    strb r2, [r5, r0]\n    mov r0, #0x62\n    lsl r0, r0, #2\n    ldrb r4, [r5, r0]\n    sub r0, r0, #4\n    ldrb r0, [r5, r0]\n    cmp r4, r0\n    bge _0223B3BA\n    lsl r0, r4, #2\n    mov r7, #0x62\n    add r6, r5, r0\n    lsl r7, r7, #2\n    ldr r0, [r6, #4]\n    bl ov80_0223AE6C\n    str r0, [sp, #0x18]\n    cmp r0, #1\n    bne _0223B3AC\n    ldrb r0, [r5, r7]\n    add r0, r0, #1\n    strb r0, [r5, r7]\n    mov r0, #0x61\n    lsl r0, r0, #2\n    ldrb r0, [r5, r0]\n    add r4, r4, #1\n    add r6, r6, #4\n    cmp r4, r0\n    blt _0223B39A\n    mov r1, #0x62\n    lsl r1, r1, #2\n    ldrb r0, [r5, r1]\n    cmp r0, #0x60\n    blo _0223B3D6\n    ldr r0, [sp, #0x18]\n    cmp r0, #1\n    bne _0223B3D6\n    mov r2, #0\n    add r0, r1, #5\n    strb r2, [r5, r0]\n    add sp, #0x1c\n    mov r0, #1\n    pop {r4, r5, r6, r7, pc}\n    mov r0, #0\n    add sp, #0x1c\n    pop {r4, r5, r6, r7, pc}\n    _0223B3DC: .word 0x0000018D\n    _0223B3E0: .word ov80_0223DBE0\n    _0223B3E4: .word 0x00000185\n    _0223B3E8: .word 0x00000187"
    );
    #endif
}

void ov80_0223B3EC(void) {
    /* Original at 0x0223B3EC */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _0223B3F8 ; =SysTask_CreateOnVBlankQueue\n    mov r2, #1\n    add r1, r0, #0\n    ldr r0, _0223B3FC ; =ov80_0223B400\n    lsl r2, r2, #0xa\n    bx r3\n    _0223B3F8: .word SysTask_CreateOnVBlankQueue\n    _0223B3FC: .word ov80_0223B400"
    );
    #endif
}

void ov80_0223B400(void) {
    /* Original at 0x0223B400 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    ldr r0, [r4, #8]\n    cmp r0, #2\n    blo _0223B414\n    ldr r0, [r4]\n    bl sub_02014C08\n    mov r0, #0\n    str r0, [r4, #8]\n    ldr r0, [r4]\n    bl sub_02014C40\n    ldr r0, [r4, #8]\n    add r0, r0, #1\n    str r0, [r4, #8]\n    pop {r4, pc}"
    );
    #endif
}

void ov80_0223B424(void) {
    /* Original at 0x0223B424 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    add r0, r1, #0\n    bl sub_02014AD8\n    str r0, [r4]\n    mov r0, #0\n    str r0, [r4, #8]\n    add r0, r4, #0\n    bl ov80_0223B3EC\n    str r0, [r4, #4]\n    pop {r4, pc}"
    );
    #endif
}

void ov80_0223B440(void) {
    /* Original at 0x0223B440 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0x14\n    ldr r4, [sp, #0x20]\n    add r5, sp, #0x10\n    str r4, [sp]\n    mov r4, #0x14\n    ldrsh r4, [r5, r4]\n    str r4, [sp, #4]\n    ldr r4, [sp, #0x28]\n    str r4, [sp, #8]\n    ldr r4, [sp, #0x2c]\n    str r4, [sp, #0xc]\n    ldr r4, [sp, #0x30]\n    str r4, [sp, #0x10]\n    ldr r0, [r0]\n    bl sub_02014B08\n    add sp, #0x14\n    pop {r4, r5, pc}"
    );
    #endif
}

void ov80_0223B468(void) {
    sub_02014AA0(1);
}

void ov80_0223B484(void) {
    /* Original at 0x0223B484 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    ldr r0, [r4, #8]\n    cmp r0, #0\n    beq _0223B49E\n    ldr r0, [r4, #0xc]\n    cmp r0, #0\n    beq _0223B49E\n    ldr r0, [r4, #0x18]\n    ldr r1, [r4, #0x14]\n    blx r1\n    mov r0, #0\n    str r0, [r4, #0xc]\n    pop {r4, pc}"
    );
    #endif
}

void ov80_0223B4A0(void) {
    /* Original at 0x0223B4A0 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    add r6, r2, #0\n    add r7, r3, #0\n    cmp r5, #0\n    bne _0223B4B2\n    bl GF_AssertFail\n    mov r0, #1\n    str r0, [r5, #8]\n    mov r2, #0\n    str r2, [r5, #0xc]\n    str r4, [r5, #0x18]\n    str r6, [r5, #0x10]\n    ldr r0, gApp_MainMenu_SelectOption_MigrateFromAgb ; =ov80_0223B468\n    str r7, [r5, #0x14]\n    add r1, r5, #0\n    bl SysTask_CreateOnVWaitQueue\n    str r0, [r5, #4]\n    ldr r0, _0223B4DC ; =ov80_0223B484\n    add r1, r5, #0\n    mov r2, #0\n    bl SysTask_CreateOnVBlankQueue\n    str r0, [r5]\n    pop {r3, r4, r5, r6, r7, pc}\n    gApp_MainMenu_SelectOption_MigrateFromAgb: .word ov80_0223B468\n    _0223B4DC: .word ov80_0223B484"
    );
    #endif
}

void ov80_0223B4E0(void) {
    /* Original at 0x0223B4E0 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bne _0223B4EA\n    bl GF_AssertFail\n    ldr r0, [r4, #4]\n    cmp r0, #0\n    beq _0223B4F4\n    bl SysTask_Destroy\n    ldr r0, [r4]\n    cmp r0, #0\n    beq _0223B4FE\n    bl SysTask_Destroy\n    bl sub_02014AA0\n    pop {r4, pc}"
    );
    #endif
}

void ov80_0223B504(void) {
    /* Original at 0x0223B504 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x1c]\n    bl sub_02014A60\n    add r5, r0, #0\n    bl sub_02014AA0\n    ldr r1, _0223B524 ; =0x00003020\n    add r0, r5, #0\n    ldr r1, [r4, r1]\n    mov r2, #0x20\n    mov r3, #1\n    bl sub_02014AB0\n    pop {r3, r4, r5, pc}\n    _0223B524: .word 0x00003020"
    );
    #endif
}

void ov80_0223B528(void) {
    /* Original at 0x0223B528 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x1c]\n    bl sub_02014A8C\n    add r0, r4, #0\n    bl ov80_0223B504\n    pop {r4, pc}"
    );
    #endif
}

void ov80_0223B53C(void) {
    ov80_0223B504();
}

void ov80_0223B544(void) {
    /* Original at 0x0223B544 */
    /* Requires manual decompilation - 71 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r1, #0\n    add r5, r2, #0\n    add r4, r0, #0\n    ldr r1, _0223B5D4 ; =0x00003024\n    add r0, r5, #0\n    bl Heap_Alloc\n    ldr r2, _0223B5D4 ; =0x00003024\n    str r0, [sp]\n    mov r1, #0\n    bl memset\n    ldr r0, [sp]\n    cmp r0, #0\n    bne _0223B568\n    bl GF_AssertFail\n    ldr r1, [sp]\n    ldr r3, _0223B5D8 ; =0x00001820\n    ldr r2, [sp]\n    add r0, r5, #0\n    add r1, #0x20\n    add r2, r2, r3\n    bl sub_02014A08\n    ldr r1, [sp]\n    cmp r0, #0\n    str r0, [r1, #0x1c]\n    bne _0223B584\n    bl GF_AssertFail\n    ldr r0, [sp]\n    ldr r1, _0223B5DC ; =0x00003020\n    mov r5, #0\n    str r4, [r0, r1]\n    add r6, r0, #0\n    add r3, r6, #0\n    add r4, r7, #0\n    add r3, #0x20\n    add r2, r3, #0\n    ldmia r4!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r4!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r4!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r4!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, _0223B5D8 ; =0x00001820\n    add r3, r7, #0\n    add r4, r6, r0\n    ldmia r3!, {r0, r1}\n    stmia r4!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r4!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r4!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    add r5, r5, #1\n    add r6, r2, #0\n    stmia r4!, {r0, r1}\n    cmp r5, #0xc0\n    blt _0223B58E\n    ldr r0, [sp]\n    ldr r2, _0223B5E0 ; =ov80_0223B528\n    ldr r3, _0223B5E4 ; =ov80_0223B53C\n    add r1, r0, #0\n    bl ov80_0223B4A0\n    ldr r0, [sp]\n    pop {r3, r4, r5, r6, r7, pc}\n    _0223B5D4: .word 0x00003024\n    _0223B5D8: .word 0x00001820\n    _0223B5DC: .word 0x00003020\n    _0223B5E0: .word ov80_0223B528\n    _0223B5E4: .word ov80_0223B53C"
    );
    #endif
}

void ov80_0223B5E8(void) {
    /* Original at 0x0223B5E8 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bne _0223B5F2\n    bl GF_AssertFail\n    add r0, r4, #0\n    bl ov80_0223B4E0\n    ldr r0, [r4, #0x1c]\n    cmp r0, #0\n    beq _0223B602\n    bl sub_02014A38\n    add r0, r4, #0\n    bl Heap_Free\n    pop {r4, pc}"
    );
    #endif
}

void ov80_0223B60C(void) {
    /* Original at 0x0223B60C */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bne _0223B616\n    bl GF_AssertFail\n    ldr r0, [r4, #0x1c]\n    bl sub_02014A4C\n    pop {r4, pc}"
    );
    #endif
}
