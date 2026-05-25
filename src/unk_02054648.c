/* Decompiled from asm/unk_02054648.s */
#include "global.h"

void sub_02054648(void) {
    /* Original at 0x02054648 */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "cmp r0, r1\n    blt _02054650\n    sub r0, r0, r1\n    bx lr\n    sub r0, r1, r0\n    bx lr"
    );
    #endif
}

void sub_02054654(void) {
    /* Original at 0x02054654 */
    /* Requires manual decompilation - 134 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x3c\n    add r5, r0, #0\n    add r6, r3, #0\n    mov r4, #0\n    ldr r0, [sp, #0x50]\n    str r6, [sp, #0x30]\n    str r4, [sp, #0x34]\n    str r0, [sp, #0x38]\n    ldr r0, [r5, #0x2c]\n    str r1, [sp, #8]\n    str r0, [sp, #0x10]\n    ldr r0, [r5, #0x30]\n    str r2, [sp, #0xc]\n    bl MapMatrix_GetWidth\n    str r0, [sp, #0x28]\n    lsl r0, r0, #5\n    str r0, [sp, #0x14]\n    asr r0, r6, #0xf\n    lsr r0, r0, #0x10\n    add r0, r6, r0\n    add r2, r5, #0\n    add r2, #0x98\n    ldr r1, [sp, #0x50]\n    asr r7, r0, #0x10\n    asr r0, r1, #0xf\n    lsr r0, r0, #0x10\n    add r0, r1, r0\n    asr r0, r0, #0x10\n    str r0, [sp, #0x20]\n    ldr r1, [sp, #0x20]\n    ldr r2, [r2]\n    add r0, r7, #0\n    add r3, sp, #0x2c\n    bl ov01_021FB42C\n    str r0, [sp, #0x24]\n    lsr r0, r7, #5\n    str r0, [sp, #0x1c]\n    ldr r0, [sp, #0x20]\n    ldr r1, [sp, #0x50]\n    lsr r0, r0, #5\n    str r0, [sp, #0x18]\n    ldr r0, [sp, #0x1c]\n    lsl r0, r0, #5\n    add r0, #0x10\n    lsl r0, r0, #0x10\n    sub r0, r6, r0\n    str r0, [sp, #0x30]\n    ldr r0, [sp, #0x18]\n    lsl r0, r0, #5\n    add r0, #0x10\n    lsl r0, r0, #0x10\n    sub r0, r1, r0\n    str r0, [sp, #0x38]\n    ldr r1, [sp, #0x20]\n    ldr r0, [sp, #0x14]\n    mul r0, r1\n    ldr r1, [sp, #0x14]\n    add r0, r7, r0\n    bl ov01_021F6328\n    ldr r2, [sp, #0x18]\n    add r1, r0, #0\n    add r3, r2, #0\n    ldr r0, [sp, #0x28]\n    ldr r2, [sp, #0x10]\n    mul r3, r0\n    ldr r0, [sp, #0x1c]\n    add r0, r0, r3\n    bl ov01_021F635C\n    add r1, r0, #0\n    cmp r1, #3\n    bls _020546F0\n    add r6, r4, #0\n    b _0205470E\n    lsl r1, r1, #0x18\n    ldr r0, [sp, #0x10]\n    lsr r1, r1, #0x18\n    bl ov01_021F65D0\n    str r0, [sp]\n    add r0, sp, #0x34\n    str r0, [sp, #4]\n    ldr r0, [sp, #8]\n    ldr r1, [sp, #0xc]\n    ldr r2, [sp, #0x30]\n    ldr r3, [sp, #0x38]\n    bl ov01_021FAE50\n    add r6, r0, #0\n    ldr r0, [sp, #0x24]\n    cmp r0, #0\n    beq _02054758\n    add r0, sp, #0x2c\n    add r5, #0x98\n    ldrb r0, [r0]\n    ldr r1, [r5]\n    bl ov01_021FB474\n    add r5, r0, #0\n    cmp r6, #0\n    beq _02054752\n    ldr r4, [sp, #0x34]\n    cmp r5, r4\n    bgt _02054730\n    mov r1, #1\n    b _02054764\n    ldr r1, [sp, #0xc]\n    add r0, r4, #0\n    bl sub_02054648\n    add r4, r0, #0\n    ldr r1, [sp, #0xc]\n    add r0, r5, #0\n    bl sub_02054648\n    cmp r4, r0\n    bgt _0205474C\n    ldr r4, [sp, #0x34]\n    mov r1, #1\n    b _02054764\n    add r4, r5, #0\n    mov r1, #2\n    b _02054764\n    mov r1, #2\n    add r4, r5, #0\n    b _02054764\n    cmp r6, #0\n    beq _02054762\n    mov r1, #1\n    ldr r4, [sp, #0x34]\n    b _02054764\n    mov r1, #0\n    ldr r0, [sp, #0x54]\n    cmp r0, #0\n    beq _0205476C\n    strb r1, [r0]\n    add r0, r4, #0\n    add sp, #0x3c\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_02054774(void) {
    sub_02054654(0);
}

void sub_02054790(void) {
    sub_02054654();
}

void sub_020547A4(void) {
    /* Original at 0x020547A4 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    asr r1, r2, #0xf\n    lsr r1, r1, #0x10\n    add r1, r2, r1\n    asr r2, r3, #0xf\n    lsr r2, r2, #0x10\n    add r2, r3, r2\n    ldr r0, [r0, #0x2c]\n    asr r1, r1, #0x10\n    asr r2, r2, #0x10\n    mov r3, #0\n    bl ov01_021F654C\n    ldr r1, [sp, #8]\n    cmp r1, #0\n    beq _020547D2\n    cmp r0, #0\n    beq _020547CC\n    mov r1, #1\n    b _020547CE\n    mov r1, #0\n    ldr r0, [sp, #8]\n    strb r1, [r0]\n    mov r0, #0\n    pop {r3, pc}"
    );
    #endif
}

void sub_020547D8(void) {
    /* Original at 0x020547D8 */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    ldr r7, [r0, #0x2c]\n    add r4, r3, #0\n    add r0, r7, #0\n    add r3, sp, #0\n    add r5, r1, #0\n    add r6, r2, #0\n    bl ov01_021F654C\n    cmp r0, #0\n    bne _020547F6\n    mov r0, #0xff\n    strh r0, [r4]\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    add r1, sp, #0\n    ldrb r1, [r1]\n    add r0, r7, #0\n    bl ov01_021F65E4\n    lsr r2, r5, #0x1f\n    lsl r1, r5, #0x1b\n    sub r1, r1, r2\n    mov r3, #0x1b\n    ror r1, r3\n    add r1, r2, r1\n    lsr r5, r6, #0x1f\n    lsl r2, r6, #0x1b\n    sub r2, r2, r5\n    ror r2, r3\n    add r2, r5, r2\n    lsl r2, r2, #5\n    add r1, r1, r2\n    lsl r1, r1, #1\n    ldrh r0, [r0, r1]\n    strh r0, [r4]\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_02054824(void) {
    /* Original at 0x02054824 */
    /* Requires manual decompilation - 37 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    ldr r0, [r6, #0x30]\n    add r4, r2, #0\n    add r5, r1, #0\n    add r7, r3, #0\n    bl MapMatrix_GetWidth\n    asr r2, r4, #4\n    asr r1, r5, #4\n    lsr r2, r2, #0x1b\n    lsr r1, r1, #0x1b\n    add r2, r4, r2\n    add r1, r5, r1\n    asr r2, r2, #5\n    asr r1, r1, #5\n    mul r0, r2\n    add r0, r1, r0\n    ldr r1, [r6, #0x5c]\n    bl TerrainAttributes_Get\n    lsr r2, r5, #0x1f\n    lsl r1, r5, #0x1b\n    sub r1, r1, r2\n    mov r3, #0x1b\n    ror r1, r3\n    add r1, r2, r1\n    lsr r5, r4, #0x1f\n    lsl r2, r4, #0x1b\n    sub r2, r2, r5\n    ror r2, r3\n    add r2, r5, r2\n    lsl r2, r2, #5\n    add r1, r1, r2\n    lsl r1, r1, #1\n    ldrh r0, [r0, r1]\n    strh r0, [r7]\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_02054874(void) {
    /* Original at 0x02054874 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    ldr r4, [r0, #0x2c]\n    add r3, sp, #0\n    add r0, r4, #0\n    bl ov01_021F654C\n    cmp r0, #0\n    bne _0205488C\n    add sp, #4\n    mov r0, #0\n    pop {r3, r4, pc}\n    add r1, sp, #0\n    ldrb r1, [r1]\n    add r0, r4, #0\n    bl ov01_021F6600\n    add sp, #4\n    pop {r3, r4, pc}"
    );
    #endif
}

void sub_0205489C(void) {
    GF_AssertFail();
}

void sub_020548C0(void) {
    /* Original at 0x020548C0 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    ldr r4, [r0, #0x60]\n    add r3, sp, #0\n    ldr r4, [r4, #4]\n    blx r4\n    cmp r0, #0\n    beq _020548E6\n    add r0, sp, #0\n    ldrh r0, [r0]\n    asr r0, r0, #0xf\n    lsl r0, r0, #0x18\n    lsr r1, r0, #0x18\n    mov r0, #1\n    and r1, r0\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    cmp r1, #1\n    beq _020548E8\n    mov r0, #0\n    add sp, #4\n    pop {r3, r4, pc}"
    );
    #endif
}

void sub_020548EC(void) {
    /* Original at 0x020548EC */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    ldr r4, [r0, #0x60]\n    add r3, sp, #0\n    ldr r4, [r4, #4]\n    blx r4\n    cmp r0, #0\n    beq _02054912\n    add r0, sp, #0\n    ldrh r0, [r0]\n    add sp, #4\n    asr r0, r0, #8\n    lsl r0, r0, #0x18\n    lsr r1, r0, #0x18\n    mov r0, #0x7f\n    and r0, r1\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    pop {r3, r4, pc}\n    mov r0, #0\n    add sp, #4\n    pop {r3, r4, pc}"
    );
    #endif
}

void GetMetatileBehavior(void) {
    /* Original at 0x02054918 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    ldr r4, [r0, #0x60]\n    add r3, sp, #0\n    ldr r4, [r4, #4]\n    blx r4\n    cmp r0, #0\n    beq _02054938\n    add r0, sp, #0\n    ldrh r0, [r0]\n    add sp, #4\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    pop {r3, r4, pc}\n    mov r0, #0xff\n    add sp, #4\n    pop {r3, r4, pc}"
    );
    #endif
}

void sub_02054940(void) {
    /* Original at 0x02054940 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    ldr r4, [sp, #0x10]\n    str r4, [sp]\n    ldr r4, [r0, #0x60]\n    ldr r4, [r4]\n    blx r4\n    add sp, #4\n    pop {r3, r4, pc}"
    );
    #endif
}

void sub_02054954(void) {
    /* Original at 0x02054954 */
    /* Requires manual decompilation - 39 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    ldr r1, [sp, #0x10]\n    mov r5, #2\n    str r1, [sp]\n    ldr r1, [r4, #4]\n    lsl r2, r2, #0x10\n    lsl r5, r5, #0xe\n    lsl r3, r3, #0x10\n    add r2, r2, r5\n    add r3, r3, r5\n    bl sub_02054940\n    ldr r1, [r4, #4]\n    cmp r0, r1\n    bge _0205497C\n    mov r4, #0\n    add r2, r1, #0\n    mvn r4, r4\n    b _0205498C\n    cmp r0, r1\n    ble _02054988\n    add r2, r0, #0\n    add r0, r1, #0\n    mov r4, #1\n    b _0205498C\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    sub r1, r2, r0\n    mov r0, #5\n    lsl r0, r0, #0xe\n    cmp r1, r0\n    blt _020549A0\n    cmp r4, #0\n    bne _020549A2\n    bl GF_AssertFail\n    b _020549A2\n    mov r4, #0\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_020549A8(void) {
    /* Original at 0x020549A8 */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r6, sp, #4\n    add r5, r0, #0\n    add r4, r2, #0\n    add r7, r3, #0\n    str r6, [sp]\n    bl sub_02054954\n    ldr r1, [sp, #0x20]\n    cmp r1, #0\n    beq _020549C2\n    strb r0, [r1]\n    cmp r0, #0\n    bne _020549EC\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r7, #0\n    bl sub_020548C0\n    add r6, r0, #0\n    bne _020549E6\n    add r0, sp, #4\n    ldrb r0, [r0]\n    cmp r0, #2\n    bne _020549E6\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r7, #0\n    bl GetMetatileBehavior\n    add sp, #8\n    add r0, r6, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #1\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_020549F4(void) {
    /* Original at 0x020549F4 */
    /* Requires manual decompilation - 49 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r6, sp, #8\n    add r5, r0, #0\n    str r1, [sp, #4]\n    add r4, r2, #0\n    add r7, r3, #0\n    str r6, [sp]\n    bl sub_02054954\n    ldr r1, [sp, #0x28]\n    cmp r1, #0\n    beq _02054A10\n    strb r0, [r1]\n    cmp r0, #0\n    bne _02054A58\n    add r0, sp, #0xc\n    str r0, [sp]\n    ldr r3, [sp, #4]\n    add r0, r5, #0\n    ldr r3, [r3, #4]\n    add r1, r4, #0\n    add r2, r7, #0\n    bl sub_02064938\n    cmp r0, #0\n    bne _02054A52\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r7, #0\n    bl sub_020548C0\n    str r0, [sp, #0xc]\n    cmp r0, #0\n    bne _02054A4C\n    add r0, sp, #8\n    ldrb r0, [r0]\n    cmp r0, #2\n    bne _02054A4C\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r7, #0\n    bl GetMetatileBehavior\n    ldr r0, [sp, #0xc]\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [sp, #0xc]\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #1\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_02054A60(void) {
    /* Original at 0x02054A60 */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, r2\n    ldr r0, [sp, #0x18]\n    add r4, r1, r3\n    add r0, r6, r0\n    str r0, [sp]\n    ldr r0, [sp, #0x1c]\n    ldr r5, [sp, #0x20]\n    add r7, r4, r0\n    cmp r6, #0\n    blt _02054A84\n    cmp r4, #0\n    blt _02054A84\n    ldr r0, [sp]\n    cmp r0, #0\n    blt _02054A84\n    cmp r7, #0\n    bge _02054A88\n    bl GF_AssertFail\n    lsl r0, r6, #0x10\n    str r0, [r5]\n    lsl r0, r4, #0x10\n    str r0, [r5, #4]\n    ldr r0, [sp]\n    lsl r0, r0, #0x10\n    str r0, [r5, #8]\n    lsl r0, r7, #0x10\n    str r0, [r5, #0xc]\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_02054A9C(void) {
    /* Original at 0x02054A9C */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r3, r0, #0\n    add r5, r1, #0\n    add r4, r2, #0\n    add r0, sp, #0\n    add r1, r3, #0\n    bl ov01_021F3B0C\n    ldr r1, [sp]\n    ldr r0, [r4]\n    ldr r2, [sp, #8]\n    add r0, r1, r0\n    str r0, [sp]\n    ldr r1, [r4, #8]\n    add r2, r2, r1\n    str r2, [sp, #8]\n    ldr r1, [r5]\n    cmp r1, r0\n    bgt _02054ADC\n    ldr r1, [r5, #8]\n    cmp r0, r1\n    bgt _02054ADC\n    ldr r0, [r5, #4]\n    cmp r0, r2\n    bgt _02054ADC\n    ldr r0, [r5, #0xc]\n    cmp r2, r0\n    bgt _02054ADC\n    add sp, #0xc\n    mov r0, #1\n    pop {r4, r5, pc}\n    mov r0, #0\n    add sp, #0xc\n    pop {r4, r5, pc}"
    );
    #endif
}

void sub_02054AE4(void) {
    /* Original at 0x02054AE4 */
    /* Requires manual decompilation - 64 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x1c\n    str r0, [sp]\n    mov r0, #0\n    add r6, r1, #0\n    add r7, r2, #0\n    str r3, [sp, #4]\n    str r0, [sp, #8]\n    ldr r1, [sp]\n    ldr r0, [sp, #8]\n    ldr r1, [r1, #0x2c]\n    add r2, sp, #0xc\n    bl ov01_021F630C\n    ldr r0, [sp, #0xc]\n    cmp r0, #0\n    beq _02054B5E\n    ldr r0, [sp]\n    ldr r1, [sp, #8]\n    ldr r0, [r0, #0x2c]\n    bl ov01_021F652C\n    add r4, r0, #0\n    ldr r0, [sp]\n    ldr r0, [r0, #0x30]\n    bl MapMatrix_GetWidth\n    add r1, r0, #0\n    add r0, r4, #0\n    add r2, sp, #0x10\n    bl sub_02054DC8\n    mov r5, #0\n    ldr r0, [sp, #0xc]\n    add r1, r5, #0\n    bl ov01_021F3B44\n    add r1, r7, #0\n    add r2, sp, #0x10\n    add r4, r0, #0\n    bl sub_02054A9C\n    cmp r0, #0\n    beq _02054B54\n    add r0, r4, #0\n    bl ov01_021F3B34\n    cmp r0, r6\n    bne _02054B54\n    ldr r0, [sp, #4]\n    cmp r0, #0\n    beq _02054B4E\n    str r4, [r0]\n    add sp, #0x1c\n    mov r0, #1\n    pop {r4, r5, r6, r7, pc}\n    add r0, r5, #1\n    lsl r0, r0, #0x18\n    lsr r5, r0, #0x18\n    cmp r5, #0x20\n    blo _02054B26\n    ldr r0, [sp, #8]\n    add r0, r0, #1\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #8]\n    cmp r0, #4\n    blo _02054AF4\n    mov r0, #0\n    add sp, #0x1c\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_02054B74(void) {
    /* Original at 0x02054B74 */
    /* Requires manual decompilation - 78 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x1c\n    str r0, [sp]\n    mov r0, #0\n    add r5, r1, #0\n    add r4, r2, #0\n    str r3, [sp, #4]\n    str r0, [sp, #8]\n    ldr r1, [sp]\n    ldr r0, [sp, #8]\n    ldr r1, [r1, #0x2c]\n    add r2, sp, #0xc\n    bl ov01_021F630C\n    ldr r0, [sp, #0xc]\n    cmp r0, #0\n    beq _02054C0A\n    ldr r0, [sp]\n    ldr r1, [sp, #8]\n    ldr r0, [r0, #0x2c]\n    bl ov01_021F652C\n    add r6, r0, #0\n    ldr r0, [sp]\n    ldr r0, [r0, #0x30]\n    bl MapMatrix_GetWidth\n    add r1, r0, #0\n    add r0, r6, #0\n    add r2, sp, #0x10\n    bl sub_02054DC8\n    mov r6, #0\n    ldr r0, [sp, #0xc]\n    add r1, r6, #0\n    bl ov01_021F3B44\n    ldr r1, [sp, #4]\n    add r2, sp, #0x10\n    add r7, r0, #0\n    bl sub_02054A9C\n    cmp r0, #0\n    beq _02054C00\n    add r0, r7, #0\n    bl ov01_021F3B34\n    mov r1, #0\n    cmp r4, #0\n    bls _02054C00\n    lsl r2, r1, #2\n    ldr r2, [r5, r2]\n    cmp r0, r2\n    bne _02054BF6\n    ldr r1, [sp, #0x30]\n    cmp r1, #0\n    beq _02054BE8\n    str r7, [r1]\n    ldr r1, [sp, #0x34]\n    cmp r1, #0\n    beq _02054BF0\n    str r0, [r1]\n    add sp, #0x1c\n    mov r0, #1\n    pop {r4, r5, r6, r7, pc}\n    add r1, r1, #1\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    cmp r1, r4\n    blo _02054BD8\n    add r0, r6, #1\n    lsl r0, r0, #0x18\n    lsr r6, r0, #0x18\n    cmp r6, #0x20\n    blo _02054BB6\n    ldr r0, [sp, #8]\n    add r0, r0, #1\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #8]\n    cmp r0, #4\n    blo _02054B84\n    mov r0, #0\n    add sp, #0x1c\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_02054C20(void) {
    /* Original at 0x02054C20 */
    /* Requires manual decompilation - 52 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    str r0, [sp]\n    add r5, r1, #0\n    str r2, [sp, #4]\n    str r3, [sp, #8]\n    mov r7, #0\n    ldr r1, [sp]\n    add r0, r7, #0\n    ldr r1, [r1, #0x2c]\n    add r2, sp, #0xc\n    bl ov01_021F630C\n    ldr r0, [sp, #0xc]\n    cmp r0, #0\n    beq _02054C80\n    mov r4, #0\n    ldr r0, [sp, #0xc]\n    add r1, r4, #0\n    bl ov01_021F3B44\n    add r6, r0, #0\n    bl ov01_021F3B34\n    cmp r0, r5\n    bne _02054C76\n    ldr r0, [sp, #4]\n    cmp r0, #0\n    beq _02054C5C\n    str r6, [r0]\n    ldr r0, [sp, #8]\n    cmp r0, #0\n    beq _02054C70\n    ldr r0, [sp]\n    add r1, r7, #0\n    ldr r0, [r0, #0x2c]\n    bl ov01_021F652C\n    ldr r1, [sp, #8]\n    str r0, [r1]\n    add sp, #0x10\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r4, #1\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    cmp r4, #0x20\n    blo _02054C42\n    add r0, r7, #1\n    lsl r0, r0, #0x18\n    lsr r7, r0, #0x18\n    cmp r7, #4\n    blo _02054C2E\n    mov r0, #0\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_02054C90(void) {
    /* Original at 0x02054C90 */
    /* Requires manual decompilation - 60 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    str r0, [sp]\n    mov r0, #0\n    add r5, r1, #0\n    add r4, r2, #0\n    str r3, [sp, #4]\n    str r0, [sp, #8]\n    ldr r1, [sp]\n    ldr r0, [sp, #8]\n    ldr r1, [r1, #0x2c]\n    add r2, sp, #0xc\n    bl ov01_021F630C\n    ldr r0, [sp, #0xc]\n    cmp r0, #0\n    beq _02054CFA\n    mov r6, #0\n    ldr r0, [sp, #0xc]\n    add r1, r6, #0\n    bl ov01_021F3B44\n    add r7, r0, #0\n    bl ov01_021F3B34\n    mov r1, #0\n    cmp r4, #0\n    bls _02054CF0\n    lsl r2, r1, #2\n    ldr r2, [r5, r2]\n    cmp r0, r2\n    bne _02054CE6\n    ldr r1, [sp, #4]\n    cmp r1, #0\n    beq _02054CD8\n    str r7, [r1]\n    ldr r1, [sp, #0x28]\n    cmp r1, #0\n    beq _02054CE0\n    str r0, [r1]\n    add sp, #0x10\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    add r1, r1, #1\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    cmp r1, r4\n    blo _02054CC8\n    add r0, r6, #1\n    lsl r0, r0, #0x18\n    lsr r6, r0, #0x18\n    cmp r6, #0x20\n    blo _02054CB4\n    ldr r0, [sp, #8]\n    add r0, r0, #1\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #8]\n    cmp r0, #4\n    blo _02054CA0\n    mov r0, #0\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_02054D10(void) {
    /* Original at 0x02054D10 */
    /* Requires manual decompilation - 82 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x20\n    add r7, r2, #0\n    str r0, [sp]\n    add r0, r1, #0\n    lsl r1, r7, #2\n    str r3, [sp, #4]\n    bl Heap_AllocAtEnd\n    str r0, [sp, #8]\n    mov r0, #0\n    cmp r7, #0\n    ble _02054D36\n    ldr r1, [sp, #8]\n    ldr r2, [sp, #0x38]\n    add r0, r0, #1\n    stmia r1!, {r2}\n    cmp r0, r7\n    blt _02054D2E\n    mov r4, #0\n    str r4, [sp, #0xc]\n    ldr r1, [sp]\n    ldr r0, [sp, #0xc]\n    ldr r1, [r1, #0x2c]\n    add r2, sp, #0x10\n    bl ov01_021F630C\n    ldr r0, [sp, #0x10]\n    cmp r0, #0\n    beq _02054DB2\n    ldr r0, [sp]\n    ldr r1, [sp, #0xc]\n    ldr r0, [r0, #0x2c]\n    bl ov01_021F652C\n    add r5, r0, #0\n    ldr r0, [sp]\n    ldr r0, [r0, #0x30]\n    bl MapMatrix_GetWidth\n    add r1, r0, #0\n    add r0, r5, #0\n    add r2, sp, #0x14\n    bl sub_02054DC8\n    mov r5, #0\n    ldr r0, [sp, #0x10]\n    add r1, r5, #0\n    bl ov01_021F3B44\n    ldr r1, [sp, #4]\n    add r2, sp, #0x14\n    add r6, r0, #0\n    bl sub_02054A9C\n    cmp r0, #0\n    beq _02054DA8\n    add r0, r6, #0\n    bl ov01_021F3B34\n    cmp r0, #0\n    beq _02054DA8\n    cmp r4, r7\n    blo _02054D9A\n    bl GF_AssertFail\n    ldr r0, [sp, #8]\n    add sp, #0x20\n    pop {r3, r4, r5, r6, r7, pc}\n    add r1, r4, #1\n    lsl r1, r1, #0x18\n    add r2, r4, #0\n    lsr r4, r1, #0x18\n    ldr r1, [sp, #8]\n    lsl r2, r2, #2\n    str r0, [r1, r2]\n    add r0, r5, #1\n    lsl r0, r0, #0x18\n    lsr r5, r0, #0x18\n    cmp r5, #0x20\n    blo _02054D6C\n    ldr r0, [sp, #0xc]\n    add r0, r0, #1\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #0xc]\n    cmp r0, #4\n    blo _02054D3A\n    ldr r0, [sp, #8]\n    add sp, #0x20\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_02054DC8(void) {
    /* Original at 0x02054DC8 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r2, #0\n    mov r2, #1\n    lsl r2, r2, #0x14\n    str r2, [r4]\n    add r5, r0, #0\n    add r6, r1, #0\n    str r2, [r4, #8]\n    bl _s32_div_f\n    lsl r1, r1, #0x10\n    lsr r1, r1, #0x10\n    ldr r0, [r4]\n    lsl r1, r1, #0x15\n    add r0, r0, r1\n    str r0, [r4]\n    add r0, r5, #0\n    add r1, r6, #0\n    bl _s32_div_f\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    ldr r1, [r4, #8]\n    lsl r0, r0, #0x15\n    add r0, r1, r0\n    str r0, [r4, #8]\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void sub_02054E00(void) {
    /* Original at 0x02054E00 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _02054E1C ; =_020FC60C\n    mov r2, #0\n    ldrh r1, [r3]\n    cmp r0, r1\n    bne _02054E0E\n    mov r0, #1\n    bx lr\n    add r2, r2, #1\n    add r3, r3, #2\n    cmp r2, #4\n    blt _02054E04\n    mov r0, #0\n    bx lr\n    nop\n    _02054E1C: .word _020FC60C"
    );
    #endif
}

void sub_02054E20(void) {
    /* Original at 0x02054E20 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl sub_02054E00\n    cmp r0, #0\n    bne _02054E30\n    mov r0, #0\n    pop {r4, pc}\n    ldr r2, _02054E4C ; =_020FC5FC\n    mov r1, #0\n    ldrh r0, [r2]\n    cmp r4, r0\n    bne _02054E3E\n    mov r0, #1\n    pop {r4, pc}\n    add r1, r1, #1\n    add r2, r2, #2\n    cmp r1, #3\n    blt _02054E34\n    mov r0, #0\n    pop {r4, pc}\n    nop\n    _02054E4C: .word _020FC5FC"
    );
    #endif
}
