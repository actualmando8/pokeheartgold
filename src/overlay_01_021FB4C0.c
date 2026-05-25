/* Decompiled from asm/overlay_01_021FB4C0.s */
#include "global.h"

void ov01_021FB4C0(void) {
    /* Original at 0x021FB4C0 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r1, #0x1c\n    bl Heap_Alloc\n    add r4, r0, #0\n    bl ov01_021FB55C\n    add r0, r4, #0\n    pop {r4, pc}"
    );
    #endif
}

void ov01_021FB4D4(void) {
    /* Original at 0x021FB4D4 */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    beq _021FB4F0\n    ldr r1, [r4]\n    cmp r1, #1\n    bne _021FB4E4\n    bl ov01_021FB514\n    add r0, r4, #0\n    bl ov01_021FB55C\n    add r0, r4, #0\n    bl Heap_Free\n    pop {r4, pc}"
    );
    #endif
}

void ov01_021FB4F4(void) {
    /* Original at 0x021FB4F4 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _021FB510 ; =ov01_021FB594\n    add r1, r4, #0\n    bl Main_SetHBlankIntrCB\n    cmp r0, #1\n    beq _021FB508\n    bl GF_AssertFail\n    mov r0, #1\n    str r0, [r4]\n    pop {r4, pc}\n    nop\n    _021FB510: .word ov01_021FB594"
    );
    #endif
}

void ov01_021FB514(void) {
    /* Original at 0x021FB514 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0\n    add r1, r0, #0\n    bl Main_SetHBlankIntrCB\n    cmp r0, #1\n    beq _021FB528\n    bl GF_AssertFail\n    mov r0, #0\n    str r0, [r4]\n    pop {r4, pc}"
    );
    #endif
}

void ov01_021FB530(void) {
    /* Original at 0x021FB530 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r1, #0\n    add r6, r2, #0\n    bl ov01_021FB5B4\n    add r4, r0, #0\n    bne _021FB542\n    bl GF_AssertFail\n    cmp r4, #0\n    beq _021FB54E\n    str r6, [r4, #4]\n    str r5, [r4, #8]\n    mov r0, #1\n    str r0, [r4]\n    add r0, r4, #0\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov01_021FB554(void) {
    ov01_021FB584();
}

void ov01_021FB55C(void) {
    /* Original at 0x021FB55C */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r3, r0, #0\n    mov r2, #0x1c\n    mov r1, #0\n    strb r1, [r3]\n    add r3, r3, #1\n    sub r2, r2, #1\n    bne _021FB564\n    mov r4, #0\n    str r4, [r0]\n    add r5, r0, #4\n    add r0, r5, #0\n    bl ov01_021FB584\n    add r4, r4, #1\n    add r5, #0xc\n    cmp r4, #2\n    blt _021FB572\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_021FB584(void) {
    /* Original at 0x021FB584 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "mov r2, #0\n    ldr r1, _021FB590 ; =ov01_021FB5B0\n    str r2, [r0]\n    str r1, [r0, #8]\n    str r2, [r0, #4]\n    bx lr\n    _021FB590: .word ov01_021FB5B0"
    );
    #endif
}

void ov01_021FB594(void) {
    /* Original at 0x021FB594 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    mov r6, #0\n    add r4, r5, #4\n    ldr r1, [r5, #8]\n    ldr r2, [r5, #0xc]\n    add r0, r4, #0\n    blx r2\n    add r6, r6, #1\n    add r5, #0xc\n    add r4, #0xc\n    cmp r6, #2\n    blt _021FB59C\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov01_021FB5B0(void) {
    /* Original at 0x021FB5B0 */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void ov01_021FB5B4(void) {
    /* Original at 0x021FB5B4 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "mov r2, #0\n    add r3, r0, #0\n    ldr r1, [r3, #4]\n    cmp r1, #0\n    bne _021FB5C8\n    add r1, r0, #4\n    mov r0, #0xc\n    mul r0, r2\n    add r0, r1, r0\n    bx lr\n    add r2, r2, #1\n    add r3, #0xc\n    cmp r2, #2\n    blt _021FB5B8\n    mov r0, #0\n    bx lr"
    );
    #endif
}
