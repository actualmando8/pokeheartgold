/* Decompiled from asm/overlay_01_021EAFD4.s */
#include "global.h"

void ov01_021EAFD4(void) {
    /* Original at 0x021EAFD4 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r1, #0x63\n    mov r0, #4\n    lsl r1, r1, #2\n    bl Heap_Alloc\n    add r4, r0, #0\n    bne _021EAFE8\n    bl GF_AssertFail\n    mov r0, #0\n    add r2, r4, #0\n    add r1, r0, #0\n    strh r1, [r2, #0x1c]\n    strh r1, [r2, #0x1e]\n    str r1, [r2, #8]\n    str r1, [r2, #0x10]\n    str r1, [r2, #0x18]\n    str r1, [r2, #0x14]\n    add r0, r0, #1\n    add r2, #0x18\n    cmp r0, #0x10\n    blt _021EAFEE\n    mov r0, #0x62\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    add r0, r4, #0\n    pop {r4, pc}"
    );
    #endif
}

void ov01_021EB00C(void) {
    /* Original at 0x021EB00C */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    str r1, [sp]\n    mov r6, #0\n    mov r0, #0x8b\n    mov r1, #4\n    bl NARC_New\n    add r1, r6, #0\n    mov r2, #4\n    add r7, r0, #0\n    bl NARC_AllocAndReadWholeMember\n    str r0, [r5]\n    str r0, [r5, #4]\n    ldr r0, [r0]\n    add r4, r6, #0\n    cmp r0, #0\n    bls _021EB04E\n    ldr r1, [sp]\n    add r0, r5, #0\n    add r2, r4, #0\n    add r3, r7, #0\n    bl ov01_021EB058\n    cmp r0, #0\n    blt _021EB044\n    add r6, r6, #1\n    ldr r0, [r5, #4]\n    add r4, r4, #1\n    ldr r0, [r0]\n    cmp r4, r0\n    blo _021EB032\n    add r0, r7, #0\n    bl NARC_Delete\n    add r0, r6, #0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021EB058(void) {
    /* Original at 0x021EB058 */
    /* Requires manual decompilation - 88 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x38\n    add r5, r0, #0\n    str r1, [sp]\n    str r2, [sp, #4]\n    str r3, [sp, #8]\n    bne _021EB06E\n    mov r0, #0\n    add sp, #0x38\n    mvn r0, r0\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r4, #0\n    add r1, r5, #0\n    ldr r0, [r1, #0x14]\n    cmp r0, #0\n    beq _021EB080\n    add r4, r4, #1\n    add r1, #0x18\n    cmp r4, #0x10\n    blt _021EB072\n    cmp r4, #0x10\n    beq _021EB08A\n    ldr r0, [sp]\n    cmp r0, #0\n    bne _021EB092\n    mov r0, #0\n    add sp, #0x38\n    mvn r0, r0\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0x18\n    add r6, r4, #0\n    mul r6, r0\n    add r0, r5, #0\n    str r0, [sp, #0xc]\n    add r0, #8\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #4]\n    mov r1, #0x34\n    add r7, r0, #0\n    mul r7, r1\n    ldr r1, [r5, #4]\n    ldr r0, [sp]\n    add r1, r1, #4\n    add r1, r1, r7\n    bl sub_020208DC\n    ldr r1, [sp, #0xc]\n    str r0, [r1, r6]\n    add r0, r1, #0\n    ldr r0, [r0, r6]\n    cmp r0, #0\n    bne _021EB0C8\n    mov r0, #0\n    add sp, #0x38\n    mvn r0, r0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r1, [r5, #4]\n    ldr r0, [sp]\n    add r1, r1, #4\n    add r1, r1, r7\n    bl sub_020209E0\n    add r1, r5, r6\n    str r0, [r1, #0xc]\n    ldr r1, _021EB110 ; =ov01_02209898\n    ldr r2, [sp, #4]\n    add r0, sp, #0x10\n    bl sprintf ; result never used\n    ldr r0, [r5, #4]\n    mov r2, #4\n    add r0, r0, #4\n    add r1, r0, r7\n    add r0, r5, r6\n    str r1, [r0, #0x18]\n    ldr r1, [sp, #4]\n    add r7, r5, #0\n    ldr r0, [sp, #8]\n    add r7, #0x14\n    add r1, r1, #1\n    bl NARC_AllocAndReadWholeMember\n    str r0, [r7, r6]\n    ldr r0, [r7, r6]\n    bl NNS_G3dGetTex\n    add r1, r5, r6\n    str r0, [r1, #0x10]\n    add r0, r4, #0\n    add sp, #0x38\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021EB110: .word ov01_02209898"
    );
    #endif
}

void ov01_021EB114(void) {
    /* Original at 0x021EB114 */
    /* Requires manual decompilation - 58 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    cmp r0, #0\n    beq _021EB18A\n    mov r1, #0x62\n    lsl r1, r1, #2\n    ldr r1, [r0, r1]\n    cmp r1, #0\n    bne _021EB18A\n    mov r4, #0\n    add r5, r0, #0\n    add r5, #8\n    add r7, r4, #0\n    mov r6, #1\n    ldr r0, [r5, #0xc]\n    cmp r0, #0\n    beq _021EB182\n    ldr r1, [r5, #0x10]\n    cmp r1, #0\n    beq _021EB182\n    ldrh r0, [r5, #0x14]\n    lsl r0, r0, #1\n    add r0, r1, r0\n    ldrb r1, [r0, #0x11]\n    ldrh r0, [r5, #0x16]\n    cmp r1, r0\n    bgt _021EB17E\n    strh r6, [r5, #0x16]\n    ldrh r0, [r5, #0x14]\n    add r0, r0, #1\n    strh r0, [r5, #0x14]\n    ldrh r0, [r5, #0x14]\n    ldr r1, [r5, #0x10]\n    lsl r0, r0, #1\n    add r0, r1, r0\n    ldrb r0, [r0, #0x10]\n    cmp r0, #0xff\n    bne _021EB160\n    strh r7, [r5, #0x14]\n    ldrh r2, [r5, #0x14]\n    ldr r1, [r5, #0x10]\n    ldr r0, [r5, #8]\n    lsl r2, r2, #1\n    add r1, r1, r2\n    ldrb r1, [r1, #0x10]\n    bl sub_02020838\n    add r2, r0, #0\n    ldr r1, [r5]\n    ldr r3, [r5, #4]\n    mov r0, #0\n    bl GF_CreateNewVramTransferTask\n    b _021EB182\n    add r0, r0, #1\n    strh r0, [r5, #0x16]\n    add r4, r4, #1\n    add r5, #0x18\n    cmp r4, #0x10\n    blt _021EB12E\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021EB18C(void) {
    /* Original at 0x021EB18C */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    beq _021EB1BA\n    mov r0, #0x18\n    add r4, r1, #0\n    mul r4, r0\n    add r0, r5, r4\n    ldr r0, [r0, #0x14]\n    cmp r0, #0\n    beq _021EB1A4\n    bl Heap_Free\n    add r1, r5, #0\n    add r1, #0x18\n    ldr r0, [r1, r4]\n    cmp r0, #0\n    beq _021EB1B2\n    mov r0, #0\n    str r0, [r1, r4]\n    mov r1, #0\n    add r0, r5, r4\n    strh r1, [r0, #0x1c]\n    strh r1, [r0, #0x1e]\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_021EB1BC(void) {
    /* Original at 0x021EB1BC */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    beq _021EB1D8\n    mov r4, #0\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov01_021EB18C\n    add r4, r4, #1\n    cmp r4, #0x10\n    blt _021EB1C4\n    ldr r0, [r5]\n    bl Heap_Free\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_021EB1DC(void) {
    Heap_Free();
}
