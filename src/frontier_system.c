/* Decompiled from asm/frontier_system.s */
#include "global.h"

void FrontierSystem_Create(void) {
    /* Original at 0x0222A84C */
    /* Requires manual decompilation - 46 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r1, #0\n    add r7, r0, #0\n    add r0, r5, #0\n    mov r1, #0xbc\n    add r6, r2, #0\n    bl Heap_Alloc\n    add r4, r0, #0\n    mov r1, #0\n    mov r2, #0xbc\n    bl MI_CpuFill8\n    str r7, [r4]\n    add r0, r4, #0\n    add r1, r4, #0\n    str r5, [r4, #0x34]\n    add r0, #0x52\n    strh r6, [r0]\n    add r0, r4, #0\n    add r0, #0x40\n    add r1, #0x3c\n    add r2, r6, #0\n    add r3, r5, #0\n    bl ov80_0222AA40\n    mov r0, #8\n    mov r1, #0x40\n    add r2, r5, #0\n    bl MessageFormat_New_Custom\n    str r0, [r4, #0x44]\n    mov r0, #1\n    lsl r0, r0, #0xa\n    add r1, r5, #0\n    bl String_New\n    str r0, [r4, #0x48]\n    mov r0, #1\n    lsl r0, r0, #0xa\n    add r1, r5, #0\n    bl String_New\n    lsl r1, r6, #0x10\n    mov r2, #0\n    str r0, [r4, #0x4c]\n    add r0, r4, #0\n    lsr r1, r1, #0x10\n    add r3, r2, #0\n    bl FrontierSystem_deadstripped_0222AA3C\n    add r0, r4, #0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void FrontierSystem_Main(void) {
    /* Original at 0x0222A8B8 */
    /* Requires manual decompilation - 48 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    mov r1, #0x51\n    str r0, [sp]\n    ldrsb r0, [r0, r1]\n    cmp r0, #0\n    bne _0222A8C8\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [sp]\n    add r0, #0x38\n    ldrb r0, [r0]\n    cmp r0, #0\n    bne _0222A90C\n    ldr r5, [sp]\n    mov r7, #0\n    add r6, r5, #0\n    add r6, #0x51\n    ldr r4, [r5, #4]\n    cmp r4, #0\n    beq _0222A8FC\n    add r0, r4, #0\n    bl FrontierScriptContext_Run\n    cmp r0, #0\n    bne _0222A8FC\n    ldr r0, [sp]\n    add r1, r4, #0\n    bl ov80_0222AA0C\n    mov r0, #0\n    str r0, [r5, #4]\n    ldrsb r0, [r6, r0]\n    sub r0, r0, #1\n    strb r0, [r6]\n    add r7, r7, #1\n    add r5, r5, #4\n    cmp r7, #8\n    blt _0222A8DA\n    ldr r0, [sp]\n    ldr r0, [r0]\n    bl ov80_02239C54\n    ldr r0, [sp]\n    mov r1, #0x51\n    ldrsb r0, [r0, r1]\n    cmp r0, #0\n    bne _0222A91A\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov80_0222A920(void) {
    /* Original at 0x0222A920 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0x51\n    ldrsb r0, [r4, r0]\n    cmp r0, #0\n    beq _0222A930\n    bl GF_AssertFail\n    ldr r0, [r4, #0x44]\n    bl MessageFormat_Delete\n    ldr r0, [r4, #0x48]\n    bl String_Delete\n    ldr r0, [r4, #0x4c]\n    bl String_Delete\n    ldr r0, [r4, #0x40]\n    bl Heap_Free\n    ldr r0, [r4, #0x3c]\n    bl DestroyMsgData\n    add r0, r4, #0\n    bl Heap_Free\n    pop {r4, pc}"
    );
    #endif
}

void FrontierSystem_AddTask(void) {
    /* Original at 0x0222A958 */
    /* Requires manual decompilation - 56 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0x34]\n    add r6, r1, #0\n    mov r1, #0x90\n    add r7, r2, #0\n    bl Heap_Alloc\n    mov r1, #0\n    mov r2, #0x90\n    add r4, r0, #0\n    bl MI_CpuFill8\n    ldr r2, _0222A9D0 ; =ov80_0223B9CC\n    ldr r1, _0222A9D4 ; =gFrontierCommandTable\n    ldr r2, [r2]\n    add r0, r4, #0\n    bl FrontierScriptContext_Init\n    ldr r0, _0222A9D8 ; =0x0000FFFF\n    str r5, [r4]\n    cmp r6, r0\n    beq _0222A990\n    add r0, r5, #0\n    add r0, #0x52\n    ldrh r0, [r0]\n    cmp r0, r6\n    bne _0222A9A2\n    add r0, r4, #0\n    ldr r1, [r5, #0x40]\n    add r0, #0x84\n    str r1, [r0]\n    add r0, r4, #0\n    ldr r1, [r5, #0x3c]\n    add r0, #0x80\n    str r1, [r0]\n    b _0222A9B2\n    add r0, r4, #0\n    add r1, r4, #0\n    ldr r3, [r5, #0x34]\n    add r0, #0x84\n    add r1, #0x80\n    add r2, r6, #0\n    bl ov80_0222AA40\n    add r1, r4, #0\n    add r1, #0x84\n    ldr r1, [r1]\n    add r0, r4, #0\n    bl FrontierScriptContext_Start\n    add r0, r4, #0\n    add r1, r7, #0\n    bl ov80_0222AB14\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov80_0222A9DC\n    pop {r3, r4, r5, r6, r7, pc}\n    _0222A9D0: .word ov80_0223B9CC\n    _0222A9D4: .word gFrontierCommandTable\n    _0222A9D8: .word 0x0000FFFF"
    );
    #endif
}

void ov80_0222A9DC(void) {
    /* Original at 0x0222A9DC */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r3, #0\n    add r4, r0, #0\n    ldr r2, [r4, #4]\n    cmp r2, #0\n    bne _0222A9FC\n    lsl r2, r3, #2\n    add r2, r0, r2\n    str r1, [r2, #4]\n    mov r1, #0x51\n    ldrsb r1, [r0, r1]\n    add r0, #0x51\n    add r1, r1, #1\n    strb r1, [r0]\n    mov r0, #1\n    pop {r4, pc}\n    add r3, r3, #1\n    add r4, r4, #4\n    cmp r3, #8\n    blt _0222A9E2\n    bl GF_AssertFail\n    mov r0, #0\n    pop {r4, pc}"
    );
    #endif
}

void ov80_0222AA0C(void) {
    /* Original at 0x0222AA0C */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    add r0, r4, #0\n    add r0, #0x80\n    ldr r0, [r0]\n    ldr r1, [r5, #0x3c]\n    cmp r0, r1\n    beq _0222AA22\n    bl DestroyMsgData\n    add r0, r4, #0\n    add r0, #0x84\n    ldr r0, [r0]\n    ldr r1, [r5, #0x40]\n    cmp r0, r1\n    beq _0222AA32\n    bl Heap_Free\n    add r0, r4, #0\n    bl Heap_Free\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void FrontierSystem_deadstripped_0222AA3C(void) {
    /* Original at 0x0222AA3C */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void ov80_0222AA40(void) {
    /* Original at 0x0222AA40 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r2, #0\n    add r5, r0, #0\n    add r4, r1, #0\n    add r0, r6, #0\n    mov r1, #1\n    add r7, r3, #0\n    bl ov80_0222ACA0\n    str r0, [sp]\n    add r0, r6, #0\n    mov r1, #2\n    bl ov80_0222ACA0\n    add r6, r0, #0\n    ldr r1, [sp]\n    mov r0, #0xb6\n    add r2, r7, #0\n    bl AllocAndReadWholeNarcMemberByIdPair\n    str r0, [r5]\n    mov r0, #1\n    mov r1, #0x1b\n    add r2, r6, #0\n    add r3, r7, #0\n    bl NewMsgDataFromNarc\n    str r0, [r4]\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov80_0222AA7C(void) {
    /* Original at 0x0222AA7C */
    /* Requires manual decompilation - 41 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r0, #0x52\n    ldrh r0, [r0]\n    add r6, r1, #0\n    mov r1, #2\n    add r7, r2, #0\n    bl ov80_0222ACA0\n    add r4, r0, #0\n    add r0, r6, #0\n    mov r1, #2\n    bl ov80_0222ACA0\n    add r2, r0, #0\n    cmp r4, r2\n    beq _0222AAD4\n    mov r0, #1\n    mov r1, #0x1b\n    add r3, r7, #0\n    bl NewMsgDataFromNarc\n    add r4, r0, #0\n    mov r1, #0\n    add r2, r5, #0\n    ldr r0, [r2, #4]\n    cmp r0, #0\n    beq _0222AAC4\n    add r3, r0, #0\n    add r3, #0x80\n    ldr r6, [r3]\n    ldr r3, [r5, #0x3c]\n    cmp r6, r3\n    bne _0222AAC4\n    add r0, #0x80\n    str r4, [r0]\n    add r1, r1, #1\n    add r2, r2, #4\n    cmp r1, #8\n    blt _0222AAAE\n    ldr r0, [r5, #0x3c]\n    bl DestroyMsgData\n    str r4, [r5, #0x3c]\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov80_0222AAD8(void) {
    /* Original at 0x0222AAD8 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    add r0, r1, #0\n    mov r1, #0x10\n    bl Heap_Alloc\n    add r4, #0x24\n    add r3, r0, #0\n    mov r2, #8\n    ldrh r1, [r4]\n    add r4, r4, #2\n    strh r1, [r3]\n    add r3, r3, #2\n    sub r2, r2, #1\n    bne _0222AAEA\n    pop {r4, pc}"
    );
    #endif
}

void ov80_0222AAF8(void) {
    Heap_Free(8);
}

void ov80_0222AB14(void) {
    FrontierScriptContext_ReadWord();
}

void ov80_0222AB2C(void) {
    /* Original at 0x0222AB2C */
    /* Requires manual decompilation - 4 instructions */
    #ifdef MWERKS
    asm(
        "add r0, #0x24\n    lsl r1, r1, #1\n    add r0, r0, r1\n    bx lr"
    );
    #endif
}

void FrontierSystem_GetFrontierMap(void) {
    sub_0209680C();
}
