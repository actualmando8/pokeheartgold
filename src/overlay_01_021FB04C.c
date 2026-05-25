/* Decompiled from asm/overlay_01_021FB04C.s */
#include "global.h"

void ov01_021FB04C(void) {
    /* Original at 0x021FB04C */
    /* Requires manual decompilation - 41 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #8\n    add r5, r0, #0\n    mov r0, #0\n    mov r2, #0x18\n    add r4, r1, #0\n    bl MIi_CpuClear32\n    add r0, r5, #0\n    mov r1, #4\n    add r2, sp, #0\n    bl NARC_ReadFile\n    add r0, r5, #0\n    mov r1, #2\n    add r2, r4, #0\n    bl NARC_ReadFile\n    add r0, r5, #0\n    mov r1, #2\n    add r2, r4, #4\n    bl NARC_ReadFile\n    add r2, r4, #0\n    add r0, r5, #0\n    mov r1, #2\n    add r2, #8\n    bl NARC_ReadFile\n    add r2, r4, #0\n    add r0, r5, #0\n    mov r1, #2\n    add r2, #0xc\n    bl NARC_ReadFile\n    add r2, r4, #0\n    add r0, r5, #0\n    mov r1, #2\n    add r2, #0x10\n    bl NARC_ReadFile\n    add r4, #0x14\n    add r0, r5, #0\n    mov r1, #2\n    add r2, r4, #0\n    bl NARC_ReadFile\n    add sp, #8\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_021FB0B0(void) {
    /* Original at 0x021FB0B0 */
    /* Requires manual decompilation - 46 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r3, r0, #0\n    add r0, r2, #0\n    ldr r2, [r0]\n    mov r4, #0\n    str r2, [r1, #0x10]\n    ldr r2, [r3]\n    lsl r2, r2, #3\n    add r2, r4, r2\n    ldr r4, [r0]\n    add r4, r4, r2\n    str r4, [r1, #0x14]\n    ldr r5, [r3, #4]\n    mov r4, #0xc\n    mul r4, r5\n    add r2, r2, r4\n    ldr r4, [r0]\n    add r4, r4, r2\n    str r4, [r1, #4]\n    ldr r4, [r3, #8]\n    lsl r4, r4, #2\n    add r2, r2, r4\n    ldr r4, [r0]\n    add r4, r4, r2\n    str r4, [r1]\n    ldr r4, [r3, #0xc]\n    lsl r4, r4, #3\n    add r2, r2, r4\n    ldr r4, [r0]\n    add r4, r4, r2\n    str r4, [r1, #8]\n    ldr r4, [r3, #0x10]\n    ldr r0, [r0]\n    lsl r4, r4, #3\n    add r2, r2, r4\n    add r0, r0, r2\n    str r0, [r1, #0xc]\n    ldr r0, [r3, #0x14]\n    lsl r0, r0, #1\n    add r1, r2, r0\n    mov r0, #9\n    lsl r0, r0, #0xc\n    cmp r1, r0\n    ble _021FB10C\n    bl GF_AssertFail\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_021FB110(void) {
    /* Original at 0x021FB110 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "add r3, r1, #0\n    ldr r1, [r2]\n    ldr r2, [r3, #0x10]\n    ldr r3, _021FB11C ; =NARC_ReadFile\n    lsl r1, r1, #3\n    bx r3\n    _021FB11C: .word NARC_ReadFile"
    );
    #endif
}

void ov01_021FB120(void) {
    /* Original at 0x021FB120 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "ldr r2, [r2, #4]\n    add r3, r1, #0\n    mov r1, #0xc\n    mul r1, r2\n    ldr r2, [r3, #0x14]\n    ldr r3, _021FB130 ; =NARC_ReadFile\n    bx r3\n    nop\n    _021FB130: .word NARC_ReadFile"
    );
    #endif
}

void ov01_021FB134(void) {
    /* Original at 0x021FB134 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "add r3, r1, #0\n    ldr r1, [r2, #8]\n    ldr r2, [r3, #4]\n    ldr r3, _021FB140 ; =NARC_ReadFile\n    lsl r1, r1, #2\n    bx r3\n    _021FB140: .word NARC_ReadFile"
    );
    #endif
}

void ov01_021FB144(void) {
    /* Original at 0x021FB144 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "add r3, r1, #0\n    ldr r1, [r2, #0xc]\n    ldr r2, [r3]\n    ldr r3, _021FB150 ; =NARC_ReadFile\n    lsl r1, r1, #3\n    bx r3\n    _021FB150: .word NARC_ReadFile"
    );
    #endif
}

void ov01_021FB154(void) {
    /* Original at 0x021FB154 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "add r3, r1, #0\n    ldr r1, [r2, #0x10]\n    ldr r2, [r3, #8]\n    ldr r3, _021FB160 ; =NARC_ReadFile\n    lsl r1, r1, #3\n    bx r3\n    _021FB160: .word NARC_ReadFile"
    );
    #endif
}

void ov01_021FB164(void) {
    /* Original at 0x021FB164 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "add r3, r1, #0\n    ldr r1, [r2, #0x14]\n    ldr r2, [r3, #0xc]\n    ldr r3, _021FB170 ; =NARC_ReadFile\n    lsl r1, r1, #1\n    bx r3\n    _021FB170: .word NARC_ReadFile"
    );
    #endif
}

void ov01_021FB174(void) {
    /* Original at 0x021FB174 */
    /* Requires manual decompilation - 101 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    ldr r0, [r4, #0x74]\n    cmp r0, #1\n    bne _021FB188\n    add r0, r4, #0\n    mov r1, #2\n    add r0, #0x68\n    strb r1, [r0]\n    add r0, r4, #0\n    add r0, #0x68\n    ldrb r0, [r0]\n    cmp r0, #0\n    beq _021FB19C\n    cmp r0, #1\n    beq _021FB1CE\n    cmp r0, #2\n    beq _021FB21A\n    b _021FB22E\n    add r0, r4, #0\n    add r0, #0x84\n    ldr r0, [r0]\n    ldr r0, [r0]\n    cmp r0, #0\n    beq _021FB1AC\n    mov r2, #0\n    b _021FB22E\n    add r1, r4, #0\n    ldr r0, [r4, #0x7c]\n    add r1, #0x4c\n    bl ov01_021FB04C\n    add r2, r4, #0\n    ldr r1, [r4, #0x5c]\n    ldr r0, [r4, #0x70]\n    add r2, #0x6c\n    str r1, [r0, #0x1c]\n    add r0, r4, #0\n    ldr r1, [r4, #0x70]\n    add r0, #0x4c\n    bl ov01_021FB0B0\n    mov r2, #1\n    b _021FB22E\n    add r2, r4, #0\n    ldr r0, [r4, #0x7c]\n    ldr r1, [r4, #0x70]\n    add r2, #0x4c\n    bl ov01_021FB110\n    add r2, r4, #0\n    ldr r0, [r4, #0x7c]\n    ldr r1, [r4, #0x70]\n    add r2, #0x4c\n    bl ov01_021FB120\n    add r2, r4, #0\n    ldr r0, [r4, #0x7c]\n    ldr r1, [r4, #0x70]\n    add r2, #0x4c\n    bl ov01_021FB134\n    add r2, r4, #0\n    ldr r0, [r4, #0x7c]\n    ldr r1, [r4, #0x70]\n    add r2, #0x4c\n    bl ov01_021FB144\n    add r2, r4, #0\n    ldr r0, [r4, #0x7c]\n    ldr r1, [r4, #0x70]\n    add r2, #0x4c\n    bl ov01_021FB154\n    add r2, r4, #0\n    ldr r0, [r4, #0x7c]\n    ldr r1, [r4, #0x70]\n    add r2, #0x4c\n    bl ov01_021FB164\n    mov r2, #1\n    b _021FB22E\n    ldr r0, [r4, #0x78]\n    mov r1, #0\n    str r1, [r0]\n    add r0, r4, #0\n    bl Heap_Free\n    add r0, r5, #0\n    bl SysTask_Destroy\n    pop {r3, r4, r5, pc}\n    cmp r2, #1\n    bne _021FB250\n    add r0, r4, #0\n    add r0, #0x68\n    ldrb r0, [r0]\n    add r1, r0, #1\n    add r0, r4, #0\n    add r0, #0x68\n    strb r1, [r0]\n    add r0, r4, #0\n    add r0, #0x68\n    ldrb r0, [r0]\n    cmp r0, #2\n    bne _021FB250\n    ldr r0, [r4, #0x70]\n    mov r1, #1\n    str r1, [r0, #0x18]\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_021FB254(void) {
    Heap_Alloc(4, 0, 0x20);
}

void ov01_021FB270(void) {
    /* Original at 0x021FB270 */
    /* Requires manual decompilation - 49 instructions */
    #ifdef MWERKS
    asm(
        "push {r0, r1, r2, r3}\n    push {r4, r5, r6, lr}\n    add r6, r0, #0\n    mov r0, #4\n    mov r1, #0x18\n    add r5, r2, #0\n    bl Heap_AllocAtEnd\n    add r4, r0, #0\n    add r0, r6, #0\n    add r1, r4, #0\n    bl ov01_021FB04C\n    ldr r0, [r4, #0x10]\n    add r1, r5, #0\n    str r0, [r5, #0x1c]\n    add r0, r4, #0\n    add r2, sp, #0x1c\n    bl ov01_021FB0B0\n    add r0, r6, #0\n    add r1, r5, #0\n    add r2, r4, #0\n    bl ov01_021FB110\n    add r0, r6, #0\n    add r1, r5, #0\n    add r2, r4, #0\n    bl ov01_021FB120\n    add r0, r6, #0\n    add r1, r5, #0\n    add r2, r4, #0\n    bl ov01_021FB134\n    add r0, r6, #0\n    add r1, r5, #0\n    add r2, r4, #0\n    bl ov01_021FB144\n    add r0, r6, #0\n    add r1, r5, #0\n    add r2, r4, #0\n    bl ov01_021FB154\n    add r0, r6, #0\n    add r1, r5, #0\n    add r2, r4, #0\n    bl ov01_021FB164\n    add r0, r4, #0\n    bl Heap_Free\n    mov r0, #1\n    str r0, [r5, #0x18]\n    pop {r4, r5, r6}\n    pop {r3}\n    add sp, #0x10\n    bx r3"
    );
    #endif
}

void ov01_021FB2E8(void) {
    Heap_Free();
}

void ov01_021FB2F4(void) {
    /* Original at 0x021FB2F4 */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "cmp r0, #0\n    beq _021FB306\n    mov r1, #0\n    str r1, [r0, #0x18]\n    str r1, [r0, #0x10]\n    str r1, [r0, #0x14]\n    str r1, [r0]\n    str r1, [r0, #8]\n    str r1, [r0, #0xc]\n    bx lr"
    );
    #endif
}

void ov01_021FB308(void) {
    /* Original at 0x021FB308 */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    mov r0, #4\n    mov r1, #0x88\n    add r6, r2, #0\n    add r7, r3, #0\n    bl Heap_AllocAtEnd\n    add r1, r0, #0\n    add r2, r1, #0\n    mov r0, #0\n    add r2, #0x68\n    strb r0, [r2]\n    add r2, r1, #0\n    str r5, [r1, #0x7c]\n    add r2, #0x80\n    str r4, [r2]\n    str r6, [r1, #0x70]\n    str r7, [r1, #0x78]\n    str r0, [r1, #0x74]\n    str r0, [r1, #0x64]\n    str r0, [r1, #0x48]\n    ldr r0, [sp, #0x18]\n    ldr r2, [sp, #0x1c]\n    ldr r0, [r0]\n    str r0, [r1, #0x6c]\n    add r0, r1, #0\n    add r0, #0x84\n    str r2, [r0]\n    ldr r0, _021FB350 ; =ov01_021FB174\n    mov r2, #1\n    bl SysTask_CreateOnMainQueue\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021FB350: .word ov01_021FB174"
    );
    #endif
}

void ov01_021FB354(void) {
    SysTask_GetData();
}

void ov01_021FB360(void) {
    /* Original at 0x021FB360 */
    /* Requires manual decompilation - 3 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0\n    str r1, [r0, #0x18]\n    bx lr"
    );
    #endif
}
