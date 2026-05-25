/* Decompiled from asm/overlay_01_021F3610.s */
#include "global.h"

void ov01_021F3610(void) {
    /* Original at 0x021F3610 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    mov r0, #7\n    lsl r0, r0, #8\n    mov r4, #0\n    str r1, [r6, r0]\n    add r7, r4, #0\n    mov r0, #0x38\n    mul r0, r4\n    add r5, r6, r0\n    add r0, r5, #0\n    bl ov01_021F3668\n    add r0, r4, #1\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    str r7, [r5, #0x10]\n    cmp r4, #0x20\n    blo _021F361E\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021F3638(void) {
    /* Original at 0x021F3638 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r1, #0\n    ldr r1, _021F365C ; =0x00000704\n    bl Heap_Alloc\n    add r4, r0, #0\n    ldr r2, _021F365C ; =0x00000704\n    mov r0, #0\n    add r1, r4, #0\n    bl MIi_CpuClearFast\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov01_021F3610\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}\n    nop\n    _021F365C: .word 0x00000704"
    );
    #endif
}

void ov01_021F3660(void) {
    Heap_Free();
}

void ov01_021F3668(void) {
    /* Original at 0x021F3668 */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5}\n    sub sp, #0xc\n    add r3, r0, #0\n    add r2, sp, #0\n    mov r0, #0\n    str r0, [r2]\n    str r0, [r2, #4]\n    str r0, [r2, #8]\n    str r0, [r3]\n    str r0, [r3, #4]\n    str r0, [r3, #8]\n    add r4, r3, #0\n    add r5, r2, #0\n    str r0, [r3, #0xc]\n    ldmia r5!, {r0, r1}\n    add r4, #0x14\n    stmia r4!, {r0, r1}\n    ldr r0, [r5]\n    add r5, r2, #0\n    str r0, [r4]\n    add r4, r3, #0\n    ldmia r5!, {r0, r1}\n    add r4, #0x20\n    stmia r4!, {r0, r1}\n    ldr r0, [r5]\n    add r3, #0x2c\n    str r0, [r4]\n    ldmia r2!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r2]\n    str r0, [r3]\n    add sp, #0xc\n    pop {r3, r4, r5}\n    bx lr"
    );
    #endif
}

void ov01_021F36AC(void) {
    /* Original at 0x021F36AC */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    mov r4, #0\n    add r6, r0, #0\n    add r7, r4, #0\n    mov r0, #0x38\n    mul r0, r4\n    add r5, r6, r0\n    add r0, r5, #0\n    bl ov01_021F3668\n    mov r0, #7\n    lsl r0, r0, #8\n    ldr r0, [r6, r0]\n    ldr r1, [r5, #0x10]\n    bl ov01_0220411C\n    add r0, r4, #1\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    str r7, [r5, #0x10]\n    cmp r4, #0x20\n    blo _021F36B4\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021F36DC(void) {
    /* Original at 0x021F36DC */
    /* Requires manual decompilation - 50 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    add r4, r1, #0\n    cmp r5, #0x20\n    blt _021F36EC\n    bl GF_AssertFail\n    add r3, sp, #0\n    mov r1, #0\n    str r1, [r3]\n    str r1, [r3, #4]\n    mov r0, #0x38\n    add r7, r5, #0\n    mul r7, r0\n    str r1, [r3, #8]\n    add r2, r4, r7\n    str r1, [r4, r7]\n    str r1, [r2, #4]\n    str r1, [r2, #8]\n    add r5, r2, #0\n    add r6, r3, #0\n    str r1, [r2, #0xc]\n    ldmia r6!, {r0, r1}\n    add r5, #0x14\n    stmia r5!, {r0, r1}\n    ldr r0, [r6]\n    add r6, r3, #0\n    str r0, [r5]\n    add r5, r2, #0\n    ldmia r6!, {r0, r1}\n    add r5, #0x20\n    stmia r5!, {r0, r1}\n    ldr r0, [r6]\n    add r2, #0x2c\n    str r0, [r5]\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    add r5, r4, #0\n    str r0, [r2]\n    mov r0, #0x38\n    add r5, #0x10\n    lsl r0, r0, #5\n    ldr r0, [r4, r0]\n    ldr r1, [r5, r7]\n    bl ov01_0220411C\n    mov r0, #0\n    str r0, [r5, r7]\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021F3744(void) {
    /* Original at 0x021F3744 */
    /* Requires manual decompilation - 114 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r5, r0, #0\n    mov r0, #0\n    add r4, r1, #0\n    add r7, r2, #0\n    str r0, [sp, #4]\n    cmp r4, #0\n    beq _021F3774\n    mov r0, #4\n    bl Heap_AllocAtEnd\n    str r0, [sp, #4]\n    ldr r2, [sp, #4]\n    add r0, r5, #0\n    add r1, r4, #0\n    bl NARC_ReadFile\n    add r0, r4, #0\n    mov r1, #0x30\n    bl _u32_div_f\n    str r0, [sp]\n    b _021F3776\n    str r0, [sp]\n    ldr r5, [sp, #4]\n    mov r6, #0\n    add r4, r7, #0\n    ldr r0, [sp]\n    cmp r6, r0\n    bhs _021F37E0\n    ldr r0, [r5]\n    add r2, r4, #0\n    str r0, [r4]\n    mov r0, #1\n    str r0, [r4, #4]\n    mov r0, #0\n    add r3, r5, #4\n    str r0, [r4, #0xc]\n    ldmia r3!, {r0, r1}\n    add r2, #0x14\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    add r3, r5, #0\n    str r0, [r2]\n    add r3, #0x10\n    add r2, r4, #0\n    ldmia r3!, {r0, r1}\n    add r2, #0x20\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    add r3, r5, #0\n    str r0, [r2]\n    add r3, #0x1c\n    add r2, r4, #0\n    ldmia r3!, {r0, r1}\n    add r2, #0x2c\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    str r0, [r2]\n    mov r0, #7\n    lsl r0, r0, #8\n    ldr r0, [r7, r0]\n    ldr r1, [r4]\n    bl ov01_02204154\n    cmp r0, #0\n    bne _021F37D0\n    mov r0, #0\n    str r0, [r4]\n    mov r0, #7\n    lsl r0, r0, #8\n    ldr r0, [r7, r0]\n    ldr r1, [r4]\n    bl ov01_022040F8\n    str r0, [r4, #0x10]\n    b _021F381C\n    mov r1, #0\n    add r0, sp, #8\n    str r1, [r0]\n    str r1, [r0, #4]\n    str r1, [r0, #8]\n    add r0, r1, #0\n    str r0, [r4]\n    str r0, [r4, #4]\n    add r2, r4, #0\n    add r3, sp, #8\n    str r0, [r4, #0xc]\n    ldmia r3!, {r0, r1}\n    add r2, #0x14\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    add r3, sp, #8\n    str r0, [r2]\n    add r2, r4, #0\n    ldmia r3!, {r0, r1}\n    add r2, #0x20\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    add r3, sp, #8\n    str r0, [r2]\n    add r2, r4, #0\n    ldmia r3!, {r0, r1}\n    add r2, #0x2c\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    str r0, [r2]\n    add r6, r6, #1\n    add r4, #0x38\n    add r5, #0x30\n    cmp r6, #0x20\n    blt _021F377C\n    ldr r0, [sp, #4]\n    cmp r0, #0\n    beq _021F3830\n    bl Heap_Free\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021F3834(void) {
    /* Original at 0x021F3834 */
    /* Requires manual decompilation - 239 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x30\n    ldr r0, [sp, #0x48]\n    add r4, r3, #0\n    str r0, [sp, #0x48]\n    ldr r0, [sp, #0x4c]\n    str r1, [sp]\n    str r0, [sp, #0x4c]\n    ldrb r0, [r4, #1]\n    str r0, [sp, #0x10]\n    cmp r0, #0x1e\n    bls _021F3854\n    bl GF_AssertFail\n    mov r0, #0\n    str r0, [sp, #0x10]\n    ldr r3, _021F3A34 ; =ov01_02206A84\n    mov r0, #0\n    str r0, [sp, #0xc]\n    ldmia r3!, {r0, r1}\n    add r2, sp, #0x18\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    str r0, [r2]\n    ldr r0, [sp]\n    str r0, [sp, #8]\n    add r2, sp, #0x24\n    mov r0, #0\n    str r0, [r2]\n    str r0, [r2, #4]\n    ldr r3, [sp, #0xc]\n    ldr r1, [sp, #0x10]\n    str r0, [r2, #8]\n    cmp r3, r1\n    blo _021F38AC\n    ldr r1, [sp, #8]\n    add r5, r2, #0\n    str r0, [r1]\n    str r0, [r1, #4]\n    add r3, r1, #0\n    str r0, [r1, #0xc]\n    ldmia r5!, {r0, r1}\n    add r3, #0x14\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    str r0, [r3]\n    ldr r3, [sp, #8]\n    ldmia r2!, {r0, r1}\n    add r3, #0x20\n    stmia r3!, {r0, r1}\n    ldr r0, [r2]\n    ldr r2, [sp, #8]\n    str r0, [r3]\n    add r3, sp, #0x18\n    ldmia r3!, {r0, r1}\n    add r2, #0x2c\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    str r0, [r2]\n    b _021F3A1C\n    ldrb r1, [r4, #2]\n    ldr r2, [sp, #0x4c]\n    add r0, sp, #0x14\n    bl GetSafariObjectConfig\n    add r1, sp, #0x14\n    ldrb r2, [r1]\n    ldr r0, [sp, #8]\n    str r2, [r0]\n    ldrb r0, [r1, #1]\n    ldrb r5, [r4, #4]\n    lsl r1, r0, #0x1c\n    lsl r0, r0, #0x19\n    lsr r0, r0, #0x1d\n    str r0, [sp, #4]\n    lsr r6, r1, #0x1d\n    ldr r1, [sp, #4]\n    mov r0, #2\n    sub r1, r0, r1\n    lsl r2, r1, #3\n    ldrb r1, [r4, #5]\n    add r0, #0xfe\n    lsl r1, r1, #4\n    add r1, r2, r1\n    ldrb r2, [r4, #3]\n    lsl r1, r1, #0x10\n    asr r7, r1, #0x10\n    lsl r1, r6, #3\n    lsl r2, r2, #4\n    add r1, r1, r2\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    sub r0, r1, r0\n    cmp r0, #0\n    ble _021F3904\n    lsl r0, r0, #0xc\n    bl _fflt\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    b _021F3912\n    lsl r0, r0, #0xc\n    bl _fflt\n    mov r1, #0x3f\n    lsl r1, r1, #0x18\n    bl _fsub\n    bl _ffix\n    ldr r1, [sp, #8]\n    cmp r5, #0\n    str r0, [r1, #0x14]\n    ble _021F3930\n    lsl r0, r5, #0xc\n    bl _fflt\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    b _021F393E\n    lsl r0, r5, #0xc\n    bl _fflt\n    mov r1, #0x3f\n    lsl r1, r1, #0x18\n    bl _fsub\n    bl _ffix\n    ldr r1, [sp, #8]\n    str r0, [r1, #0x18]\n    mov r0, #1\n    lsl r0, r0, #8\n    sub r0, r7, r0\n    cmp r0, #0\n    ble _021F3962\n    lsl r0, r0, #0xc\n    bl _fflt\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    b _021F3970\n    lsl r0, r0, #0xc\n    bl _fflt\n    mov r1, #0x3f\n    lsl r1, r1, #0x18\n    bl _fsub\n    bl _ffix\n    ldr r1, [sp, #8]\n    add r3, sp, #0x24\n    add r2, r1, #0\n    str r0, [r1, #0x1c]\n    ldmia r3!, {r0, r1}\n    add r2, #0x20\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    add r3, sp, #0x18\n    str r0, [r2]\n    ldr r2, [sp, #8]\n    ldmia r3!, {r0, r1}\n    add r2, #0x2c\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    mov r1, #1\n    str r0, [r2]\n    ldr r0, [sp, #8]\n    str r1, [r0, #4]\n    mov r1, #0\n    str r1, [r0, #0xc]\n    ldrb r7, [r4, #5]\n    ldr r0, [sp, #4]\n    sub r0, r7, r0\n    cmp r7, r0\n    ble _021F39EE\n    lsl r0, r7, #5\n    mov ip, r0\n    ldr r0, _021F3A38 ; =0x00008023\n    add r3, sp, #0x14\n    ldrb r1, [r4, #3]\n    add r2, r1, r6\n    cmp r1, r2\n    bge _021F39D8\n    mov r2, ip\n    lsl r5, r2, #1\n    ldr r2, [sp, #0x48]\n    add r5, r2, r5\n    lsl r2, r1, #1\n    add r2, r5, r2\n    strh r0, [r2]\n    ldrb r5, [r3, #1]\n    add r1, r1, #1\n    add r2, r2, #2\n    lsl r5, r5, #0x1c\n    lsr r6, r5, #0x1d\n    ldrb r5, [r4, #3]\n    add r5, r6, r5\n    cmp r1, r5\n    blt _021F39C4\n    mov r1, ip\n    ldrb r2, [r3, #1]\n    sub r1, #0x20\n    mov ip, r1\n    lsl r2, r2, #0x19\n    ldrb r1, [r4, #5]\n    lsr r2, r2, #0x1d\n    sub r7, r7, #1\n    sub r1, r1, r2\n    cmp r7, r1\n    bgt _021F39B0\n    mov r1, #7\n    ldr r0, [sp]\n    lsl r1, r1, #8\n    ldr r0, [r0, r1]\n    ldr r1, [sp, #8]\n    ldr r1, [r1]\n    bl ov01_02204154\n    cmp r0, #0\n    bne _021F3A08\n    ldr r0, [sp, #8]\n    mov r1, #0\n    str r1, [r0]\n    mov r1, #7\n    ldr r0, [sp]\n    lsl r1, r1, #8\n    ldr r0, [r0, r1]\n    ldr r1, [sp, #8]\n    ldr r1, [r1]\n    bl ov01_022040F8\n    ldr r1, [sp, #8]\n    str r0, [r1, #0x10]\n    ldr r0, [sp, #8]\n    add r4, r4, #4\n    add r0, #0x38\n    str r0, [sp, #8]\n    ldr r0, [sp, #0xc]\n    add r0, r0, #1\n    str r0, [sp, #0xc]\n    cmp r0, #0x20\n    bge _021F3A30\n    b _021F3868\n    add sp, #0x30\n    pop {r3, r4, r5, r6, r7, pc}\n    _021F3A34: .word ov01_02206A84\n    _021F3A38: .word 0x00008023"
    );
    #endif
}

void ov01_021F3A3C(void) {
    /* Original at 0x021F3A3C */
    /* Requires manual decompilation - 92 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x48\n    ldr r4, _021F3AFC ; =ov01_02206A90\n    str r2, [sp, #0xc]\n    str r3, [sp, #0x10]\n    add r6, r0, #0\n    str r1, [sp, #8]\n    add r3, sp, #0x18\n    mov r2, #4\n    ldmia r4!, {r0, r1}\n    stmia r3!, {r0, r1}\n    sub r2, r2, #1\n    bne _021F3A4E\n    ldr r0, [r4]\n    ldr r5, [sp, #0x60]\n    str r0, [r3]\n    mov r7, #0\n    ldr r0, [r5, #4]\n    cmp r0, #0\n    beq _021F3AEE\n    ldr r0, [r5, #8]\n    cmp r0, #0\n    bne _021F3AEE\n    add r4, r5, #0\n    add r4, #0x14\n    ldmia r4!, {r0, r1}\n    add r3, sp, #0x3c\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldr r0, [r4]\n    str r0, [r3]\n    ldr r1, [sp, #0x3c]\n    ldr r0, [r6]\n    add r3, r5, #0\n    add r0, r1, r0\n    str r0, [sp, #0x3c]\n    ldr r1, [sp, #0x44]\n    ldr r0, [r6, #8]\n    add r3, #0x2c\n    add r0, r1, r0\n    str r0, [sp, #0x44]\n    ldr r0, [r5, #0x10]\n    add r1, r2, #0\n    ldr r0, [r0, #0x54]\n    add r2, sp, #0x18\n    bl sub_0201F990\n    cmp r0, #0\n    beq _021F3AEE\n    ldr r0, [sp, #8]\n    bl ov01_021FB9F4\n    add r4, r0, #0\n    ldr r0, [sp, #0xc]\n    cmp r0, #1\n    bne _021F3AB8\n    ldr r1, [r5, #0x10]\n    ldr r0, [sp, #0x10]\n    ldr r1, [r1, #0x54]\n    ldr r2, _021F3B00 ; =0x00000F33\n    bl ov01_021EA9B0\n    ldr r0, [r5]\n    add r1, r4, #0\n    add r2, sp, #0x14\n    bl ov01_021EA7F8\n    add r0, sp, #0x14\n    ldrh r0, [r0]\n    add r1, sp, #0x3c\n    cmp r0, #0\n    bne _021F3ADA\n    add r3, r5, #0\n    ldr r0, [r5, #0x10]\n    add r2, sp, #0x18\n    add r3, #0x2c\n    bl GF3dRender_DrawModel\n    b _021F3AEE\n    str r4, [sp]\n    ldr r0, [r5]\n    add r3, r5, #0\n    str r0, [sp, #4]\n    ldr r0, [r5, #0x10]\n    add r2, sp, #0x18\n    ldr r0, [r0, #0x54]\n    add r3, #0x2c\n    bl ov01_021F3B84\n    add r7, r7, #1\n    add r5, #0x38\n    cmp r7, #0x20\n    blt _021F3A5E\n    add sp, #0x48\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021F3AFC: .word ov01_02206A90\n    _021F3B00: .word 0x00000F33"
    );
    #endif
}

void ov01_021F3B04(void) {
    /* Original at 0x021F3B04 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "add r0, #0x2c\n    bx lr"
    );
    #endif
}

void ov01_021F3B08(void) {
    /* Original at 0x021F3B08 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "add r0, #0x20\n    bx lr"
    );
    #endif
}

void ov01_021F3B0C(void) {
    /* Original at 0x021F3B0C */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "add r2, r1, #0\n    add r2, #0x14\n    add r3, r0, #0\n    ldmia r2!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r2]\n    str r0, [r3]\n    bx lr"
    );
    #endif
}

void ov01_021F3B1C(void) {
    /* Original at 0x021F3B1C */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "add r3, r1, #0\n    add r2, r0, #0\n    ldmia r3!, {r0, r1}\n    add r2, #0x14\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    str r0, [r2]\n    bx lr"
    );
    #endif
}

void ov01_021F3B2C(void) {
    ((u32*)r0)[8] = r1;
}

void ov01_021F3B30(void) {
    /* Original at 0x021F3B30 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0, #4]\n    bx lr"
    );
    #endif
}

void ov01_021F3B34(void) {
    /* Original at 0x021F3B34 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0]\n    bx lr"
    );
    #endif
}

void ov01_021F3B38(void) {
    /* Original at 0x021F3B38 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0, #0x10]\n    bx lr"
    );
    #endif
}

void ov01_021F3B3C(void) {
    /* Original at 0x021F3B3C */
    /* Requires manual decompilation - 3 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0, #0x10]\n    ldr r0, [r0, #0x54]\n    bx lr"
    );
    #endif
}

void ov01_021F3B44(void) {
    /* Original at 0x021F3B44 */
    /* Requires manual decompilation - 4 instructions */
    #ifdef MWERKS
    asm(
        "mov r2, #0x38\n    mul r2, r1\n    add r0, r0, r2\n    bx lr"
    );
    #endif
}

void ov01_021F3B4C(void) {
    /* Original at 0x021F3B4C */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "mov r3, #0\n    ldr r2, [r0]\n    cmp r2, r1\n    beq _021F3B5E\n    add r3, r3, #1\n    add r0, #0x38\n    cmp r3, #0x20\n    blt _021F3B4E\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void ov01_021F3B60(void) {
    /* Original at 0x021F3B60 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    cmp r4, #0x20\n    blt _021F3B6E\n    bl GF_AssertFail\n    mov r0, #0x38\n    mul r0, r4\n    add r4, r5, r0\n    ldr r0, [r4, #4]\n    cmp r0, #0\n    bne _021F3B7E\n    bl GF_AssertFail\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_021F3B84(void) {
    /* Original at 0x021F3B84 */
    /* Requires manual decompilation - 59 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r0, #0\n    add r0, r1, #0\n    add r4, r2, #0\n    add r5, r3, #0\n    bl NNS_G3dGlbSetBaseTrans\n    ldr r1, _021F3C04 ; =NNS_G3dGlb + 0xBC\n    add r0, r4, #0\n    bl MI_Copy36B\n    ldr r1, _021F3C08 ; =NNS_G3dGlb + 0x80\n    mov r0, #0xa4\n    ldr r2, [r1, #0x7c]\n    bic r2, r0\n    add r0, r5, #0\n    str r2, [r1, #0x7c]\n    bl NNS_G3dGlbSetBaseScale\n    bl NNS_G3dGlbFlushP\n    add r2, sp, #0\n    ldr r0, [sp, #0x1c]\n    ldr r1, [sp, #0x18]\n    add r2, #2\n    add r3, sp, #0\n    bl ov01_021EA804\n    add r0, sp, #0\n    ldrh r0, [r0]\n    ldr r1, [sp, #0x18]\n    bl ov01_021EA81C\n    add r6, r0, #0\n    add r0, sp, #0\n    ldrh r0, [r0, #2]\n    mov r5, #0xff\n    mov r4, #0\n    cmp r0, #0\n    ble _021F3C00\n    lsl r0, r4, #2\n    add r2, r6, r0\n    ldrh r0, [r6, r0]\n    cmp r5, r0\n    beq _021F3BE6\n    lsl r0, r0, #0x18\n    lsr r5, r0, #0x18\n    mov r3, #1\n    b _021F3BE8\n    mov r3, #0\n    ldrh r2, [r2, #2]\n    add r0, r7, #0\n    add r1, r5, #0\n    bl NNS_G3dDraw1Mat1Shp\n    add r0, r4, #1\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    add r0, sp, #0\n    ldrh r0, [r0, #2]\n    cmp r4, r0\n    blt _021F3BD4\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021F3C04: .word NNS_G3dGlb + 0xBC\n    _021F3C08: .word NNS_G3dGlb + 0x80"
    );
    #endif
}

void ov01_021F3C0C(void) {
    /* Original at 0x021F3C0C */
    /* Requires manual decompilation - 69 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    ldr r4, _021F3C98 ; =ov01_02206A78\n    add r7, r2, #0\n    add r6, r0, #0\n    mov ip, r1\n    add r2, r3, #0\n    ldmia r4!, {r0, r1}\n    add r3, sp, #0\n    stmia r3!, {r0, r1}\n    ldr r0, [r4]\n    mov r4, #0\n    str r0, [r3]\n    mov r0, #0x38\n    add r1, r4, #0\n    mul r1, r0\n    add r5, r6, r1\n    ldr r1, [r5, #4]\n    cmp r1, #0\n    bne _021F3C84\n    mov r0, #1\n    str r0, [r5, #4]\n    add r3, r5, #0\n    add r3, #0x14\n    ldmia r7!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r7]\n    cmp r2, #0\n    str r0, [r3]\n    beq _021F3C5A\n    mov r0, #1\n    str r0, [r5, #0xc]\n    add r3, r5, #0\n    ldmia r2!, {r0, r1}\n    add r3, #0x20\n    stmia r3!, {r0, r1}\n    ldr r0, [r2]\n    str r0, [r3]\n    b _021F3C5E\n    mov r0, #0\n    str r0, [r5, #0xc]\n    add r2, sp, #0\n    add r3, r5, #0\n    ldmia r2!, {r0, r1}\n    add r3, #0x2c\n    stmia r3!, {r0, r1}\n    ldr r0, [r2]\n    mov r1, ip\n    str r0, [r3]\n    mov r0, ip\n    str r0, [r5]\n    mov r0, #7\n    lsl r0, r0, #8\n    ldr r0, [r6, r0]\n    bl ov01_022040F8\n    str r0, [r5, #0x10]\n    add sp, #0xc\n    add r0, r4, #0\n    pop {r4, r5, r6, r7, pc}\n    add r1, r4, #1\n    lsl r1, r1, #0x18\n    lsr r4, r1, #0x18\n    cmp r4, #0x20\n    blo _021F3C28\n    bl GF_AssertFail\n    mov r0, #0x20\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    _021F3C98: .word ov01_02206A78"
    );
    #endif
}

void ov01_021F3C9C(void) {
    /* Original at 0x021F3C9C */
    /* Requires manual decompilation - 72 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x38\n    ldr r4, _021F3D34 ; =ov01_02206AB4\n    str r0, [sp, #8]\n    str r1, [sp, #0xc]\n    add r3, sp, #0x14\n    mov r2, #4\n    ldmia r4!, {r0, r1}\n    stmia r3!, {r0, r1}\n    sub r2, r2, #1\n    bne _021F3CAA\n    ldr r0, [r4]\n    mov r4, #0\n    str r0, [r3]\n    add r7, sp, #0x14\n    mov r0, #0x38\n    add r1, r4, #0\n    mul r1, r0\n    ldr r0, [sp, #8]\n    add r5, r0, r1\n    ldr r0, [r5, #4]\n    cmp r0, #0\n    beq _021F3D24\n    ldr r0, [r5, #8]\n    cmp r0, #0\n    bne _021F3D24\n    ldr r0, [sp, #0xc]\n    bl ov01_021FB9F4\n    add r6, r0, #0\n    ldr r0, [r5]\n    add r1, r6, #0\n    add r2, sp, #0x10\n    bl ov01_021EA7F8\n    ldr r0, [r5, #0xc]\n    cmp r0, #0\n    beq _021F3CF2\n    add r1, r5, #0\n    add r0, r7, #0\n    add r1, #0x20\n    bl sub_02020D2C\n    add r0, sp, #0x10\n    ldrh r0, [r0]\n    cmp r0, #0\n    bne _021F3D0C\n    add r1, r5, #0\n    ldr r0, [r5, #0x10]\n    add r5, #0x2c\n    add r1, #0x14\n    add r2, r7, #0\n    add r3, r5, #0\n    bl GF3dRender_DrawModel\n    b _021F3D24\n    str r6, [sp]\n    ldr r0, [r5]\n    add r1, r5, #0\n    str r0, [sp, #4]\n    ldr r0, [r5, #0x10]\n    add r5, #0x2c\n    ldr r0, [r0, #0x54]\n    add r1, #0x14\n    add r2, r7, #0\n    add r3, r5, #0\n    bl ov01_021F3B84\n    add r0, r4, #1\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    cmp r4, #0x20\n    blo _021F3CBA\n    add sp, #0x38\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021F3D34: .word ov01_02206AB4"
    );
    #endif
}
