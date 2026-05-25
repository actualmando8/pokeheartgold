/* Decompiled from asm/overlay_01_021FB368.s */
#include "global.h"

void ov01_021FB368(void) {
    /* Original at 0x021FB368 */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5}\n    ldr r3, [r2, #0x14]\n    cmp r3, #0\n    bne _021FB376\n    mov r0, #0\n    pop {r4, r5}\n    bx lr\n    ldr r5, [r2]\n    ldr r3, [r2, #8]\n    ldr r4, [r2, #4]\n    ldr r2, [r2, #0xc]\n    add r3, r5, r3\n    add r2, r4, r2\n    sub r3, r3, #1\n    sub r2, r2, #1\n    cmp r5, r0\n    bgt _021FB39C\n    cmp r0, r3\n    bgt _021FB39C\n    cmp r4, r1\n    bgt _021FB39C\n    cmp r1, r2\n    bgt _021FB39C\n    mov r0, #1\n    pop {r4, r5}\n    bx lr\n    mov r0, #0\n    pop {r4, r5}\n    bx lr"
    );
    #endif
}

void ov01_021FB3A4(void) {
    /* Original at 0x021FB3A4 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r1, #0\n    add r5, r0, #0\n    add r0, r6, #0\n    mov r1, #8\n    bl Heap_Alloc\n    mov r1, #0x18\n    add r4, r0, #0\n    add r0, r6, #0\n    mul r1, r5\n    bl Heap_Alloc\n    str r0, [r4, #4]\n    mov r6, #0\n    str r5, [r4]\n    cmp r5, #0\n    bls _021FB3E0\n    add r0, r6, #0\n    mov r1, #0x18\n    add r2, r6, #0\n    ldr r3, [r4, #4]\n    mul r2, r1\n    add r2, r3, r2\n    str r0, [r2, #0x14]\n    add r2, r6, #1\n    lsl r2, r2, #0x18\n    lsr r6, r2, #0x18\n    cmp r6, r5\n    blo _021FB3CC\n    add r0, r4, #0\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov01_021FB3E4(void) {
    /* Original at 0x021FB3E4 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5}\n    ldr r5, [sp, #0x10]\n    mov r4, #0x18\n    mul r4, r0\n    ldr r0, [r5, #4]\n    str r1, [r0, r4]\n    ldr r0, [r5, #4]\n    ldr r1, [sp, #8]\n    add r0, r0, r4\n    str r2, [r0, #4]\n    ldr r0, [r5, #4]\n    add r0, r0, r4\n    str r3, [r0, #8]\n    ldr r0, [r5, #4]\n    add r0, r0, r4\n    str r1, [r0, #0xc]\n    ldr r0, [r5, #4]\n    ldr r1, [sp, #0xc]\n    add r0, r0, r4\n    str r1, [r0, #0x10]\n    ldr r0, [r5, #4]\n    mov r1, #1\n    add r0, r0, r4\n    str r1, [r0, #0x14]\n    pop {r4, r5}\n    bx lr"
    );
    #endif
}

void ov01_021FB418(void) {
    /* Original at 0x021FB418 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #4]\n    bl Heap_Free\n    add r0, r4, #0\n    bl Heap_Free\n    pop {r4, pc}"
    );
    #endif
}

void ov01_021FB42C(void) {
    /* Original at 0x021FB42C */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    add r7, r1, #0\n    add r5, r2, #0\n    str r3, [sp]\n    cmp r3, #0\n    bne _021FB43E\n    bl GF_AssertFail\n    ldr r0, [r5]\n    mov r4, #0\n    cmp r0, #0\n    ble _021FB46E\n    mov r3, #0x18\n    ldr r2, [r5, #4]\n    mul r3, r4\n    add r0, r6, #0\n    add r1, r7, #0\n    add r2, r2, r3\n    bl ov01_021FB368\n    cmp r0, #0\n    beq _021FB462\n    ldr r0, [sp]\n    strb r4, [r0]\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r4, #1\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    ldr r0, [r5]\n    cmp r4, r0\n    blt _021FB446\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021FB474(void) {
    /* Original at 0x021FB474 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    ldr r0, [r4]\n    cmp r5, r0\n    blt _021FB484\n    bl GF_AssertFail\n    mov r0, #0x18\n    add r6, r5, #0\n    mul r6, r0\n    ldr r0, [r4, #4]\n    add r0, r0, r6\n    ldr r0, [r0, #0x14]\n    cmp r0, #0\n    bne _021FB498\n    bl GF_AssertFail\n    ldr r0, [r4, #4]\n    add r0, r0, r6\n    ldr r0, [r0, #0x10]\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov01_021FB4A0(void) {
    GF_AssertFail(0x18);
}
