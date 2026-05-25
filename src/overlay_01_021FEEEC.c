/* Decompiled from asm/overlay_01_021FEEEC.s */
#include "global.h"

void ov01_021FEEEC(void) {
    ov01_021F1430(4, 0, 0);
    ov01_021FEF18();
}

void ov01_021FEF08(void) {
    ov01_021FEFF8();
    ov01_021F1448(r4);
}

void ov01_021FEF18(void) {
    /* Original at 0x021FEF18 */
    /* Requires manual decompilation - 94 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    ldr r0, [r4]\n    mov r1, #0\n    mov r2, #0x7e\n    bl ov01_021F18D4\n    ldr r0, [r4]\n    mov r1, #5\n    mov r2, #0x7f\n    bl ov01_021F18D4\n    ldr r0, [r4]\n    mov r1, #0\n    mov r2, #0x8c\n    bl ov01_021F1908\n    ldr r0, [r4]\n    mov r1, #3\n    mov r2, #0x8d\n    bl ov01_021F1908\n    ldr r0, [r4]\n    mov r1, #4\n    mov r2, #0x8e\n    bl ov01_021F1908\n    ldr r0, [r4]\n    mov r1, #5\n    mov r2, #0x8f\n    bl ov01_021F1908\n    ldr r0, [r4]\n    mov r1, #0\n    mov r2, #0x19\n    mov r3, #1\n    bl ov01_021F1930\n    ldr r0, [r4]\n    mov r1, #4\n    mov r2, #0x10\n    mov r3, #1\n    bl ov01_021F1930\n    ldr r0, [r4]\n    mov r1, #5\n    mov r2, #0\n    mov r3, #1\n    bl ov01_021F1930\n    mov r2, #1\n    ldr r0, [r4]\n    mov r1, #6\n    add r3, r2, #0\n    bl ov01_021F1930\n    mov r1, #0\n    str r1, [sp]\n    ldr r0, _021FEFE8 ; =ov01_02209178\n    str r1, [sp, #4]\n    str r0, [sp, #8]\n    ldr r0, [r4]\n    add r2, r1, #0\n    add r3, r1, #0\n    bl ov01_021F1758\n    mov r0, #4\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    ldr r0, _021FEFEC ; =ov01_02209190\n    mov r1, #5\n    str r0, [sp, #8]\n    ldr r0, [r4]\n    add r2, r1, #0\n    mov r3, #3\n    bl ov01_021F1758\n    mov r2, #5\n    str r2, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    ldr r0, _021FEFF0 ; =ov01_02209160\n    mov r1, #6\n    str r0, [sp, #8]\n    ldr r0, [r4]\n    mov r3, #4\n    bl ov01_021F1758\n    mov r0, #6\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    ldr r0, _021FEFF4 ; =ov01_022091A8\n    mov r2, #5\n    str r0, [sp, #8]\n    ldr r0, [r4]\n    mov r1, #7\n    add r3, r2, #0\n    bl ov01_021F1758\n    add sp, #0xc\n    pop {r3, r4, pc}\n    _021FEFE8: .word ov01_02209178\n    _021FEFEC: .word ov01_02209190\n    _021FEFF0: .word ov01_02209160\n    _021FEFF4: .word ov01_022091A8"
    );
    #endif
}

void ov01_021FEFF8(void) {
    /* Original at 0x021FEFF8 */
    /* Requires manual decompilation - 45 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4]\n    mov r1, #0\n    bl ov01_021F18FC\n    ldr r0, [r4]\n    mov r1, #5\n    bl ov01_021F18FC\n    ldr r0, [r4]\n    mov r1, #0\n    bl ov01_021F1924\n    ldr r0, [r4]\n    mov r1, #3\n    bl ov01_021F1924\n    ldr r0, [r4]\n    mov r1, #4\n    bl ov01_021F1924\n    ldr r0, [r4]\n    mov r1, #5\n    bl ov01_021F1924\n    ldr r0, [r4]\n    mov r1, #0\n    bl ov01_021F1970\n    ldr r0, [r4]\n    mov r1, #4\n    bl ov01_021F1970\n    ldr r0, [r4]\n    mov r1, #5\n    bl ov01_021F1970\n    ldr r0, [r4]\n    mov r1, #6\n    bl ov01_021F1970\n    ldr r0, [r4]\n    mov r1, #0\n    bl ov01_021F18C8\n    ldr r0, [r4]\n    mov r1, #5\n    bl ov01_021F18C8\n    ldr r0, [r4]\n    mov r1, #6\n    bl ov01_021F18C8\n    ldr r0, [r4]\n    mov r1, #7\n    bl ov01_021F18C8\n    pop {r4, pc}"
    );
    #endif
}

void ov01_021FF070(void) {
    /* Original at 0x021FF070 */
    /* Requires manual decompilation - 48 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x38\n    add r5, r0, #0\n    add r6, r1, #0\n    bl ov01_021F146C\n    add r4, r0, #0\n    add r0, r5, #0\n    bl MapObject_GetXCoord\n    str r0, [sp, #8]\n    add r0, r5, #0\n    bl MapObject_GetYCoord\n    str r0, [sp, #0xc]\n    add r0, r5, #0\n    bl MapObject_GetZCoord\n    str r0, [sp, #0x10]\n    mov r1, #0\n    add r0, sp, #8\n    strh r1, [r0, #0x1c]\n    strh r1, [r0, #0x1e]\n    sub r1, r1, #1\n    add r0, sp, #0x28\n    strb r1, [r0]\n    add r0, r4, #0\n    str r4, [sp, #0x18]\n    bl ov01_021F1468\n    str r0, [sp, #0x14]\n    add r0, r4, #0\n    mov r1, #8\n    bl ov01_021F1450\n    str r0, [sp, #0x1c]\n    add r0, r5, #0\n    add r1, sp, #0x2c\n    str r5, [sp, #0x20]\n    bl MapObject_CopyPositionVector\n    add r0, r5, #0\n    mov r1, #2\n    bl MapObject_GetPriorityPlusValue\n    add r1, sp, #8\n    str r1, [sp]\n    str r0, [sp, #4]\n    ldr r1, _021FF0E0 ; =ov01_02209138\n    add r0, r4, #0\n    add r2, sp, #0x2c\n    add r3, r6, #0\n    bl ov01_021F1620\n    add sp, #0x38\n    pop {r4, r5, r6, pc}\n    _021FF0E0: .word ov01_02209138"
    );
    #endif
}

void ov01_021FF0E4(void) {
    /* Original at 0x021FF0E4 */
    /* Requires manual decompilation - 61 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x3c\n    add r5, r0, #0\n    str r1, [sp, #8]\n    add r4, r2, #0\n    add r6, r3, #0\n    bl ov01_021F146C\n    add r7, r0, #0\n    add r0, r5, #0\n    str r4, [sp, #0xc]\n    bl MapObject_GetYCoord\n    str r0, [sp, #0x10]\n    add r0, r5, #0\n    str r6, [sp, #0x14]\n    bl MapObject_GetXCoord\n    sub r1, r0, r4\n    add r0, sp, #0xc\n    strh r1, [r0, #0x1c]\n    add r0, r5, #0\n    bl MapObject_GetZCoord\n    sub r1, r0, r6\n    add r0, sp, #0xc\n    strh r1, [r0, #0x1e]\n    ldr r0, [sp, #0x50]\n    cmp r0, #0\n    beq _021FF12C\n    add r0, r5, #0\n    bl MapObject_GetFacingDirection\n    add r1, sp, #0x2c\n    strb r0, [r1]\n    b _021FF134\n    mov r1, #0\n    mvn r1, r1\n    add r0, sp, #0x2c\n    strb r1, [r0]\n    add r0, r7, #0\n    str r7, [sp, #0x1c]\n    bl ov01_021F1468\n    str r0, [sp, #0x18]\n    add r0, r7, #0\n    mov r1, #8\n    bl ov01_021F1450\n    str r0, [sp, #0x20]\n    add r0, r5, #0\n    add r1, sp, #0x30\n    str r5, [sp, #0x24]\n    bl MapObject_CopyPositionVector\n    add r0, r5, #0\n    mov r1, #2\n    bl MapObject_GetPriorityPlusValue\n    add r1, sp, #0xc\n    str r1, [sp]\n    str r0, [sp, #4]\n    ldr r1, _021FF170 ; =ov01_02209138\n    ldr r3, [sp, #8]\n    add r0, r7, #0\n    add r2, sp, #0x30\n    bl ov01_021F1620\n    add sp, #0x3c\n    pop {r4, r5, r6, r7, pc}\n    _021FF170: .word ov01_02209138"
    );
    #endif
}

void ov01_021FF174(void) {
    /* Original at 0x021FF174 */
    /* Requires manual decompilation - 77 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    add r4, r1, #0\n    bl sub_02068D98\n    add r3, r4, #0\n    add r6, r0, #0\n    add r3, #0x18\n    mov r2, #4\n    ldmia r6!, {r0, r1}\n    stmia r3!, {r0, r1}\n    sub r2, r2, #1\n    bne _021FF188\n    ldr r0, [r6]\n    str r0, [r3]\n    ldr r0, [r4, #0x30]\n    bl MapObject_GetSpriteID\n    str r0, [r4, #4]\n    ldr r0, [r4, #0x30]\n    bl MapObject_GetID\n    str r0, [r4, #8]\n    ldr r0, [r4, #0x30]\n    bl MapObject_GetMapID\n    str r0, [r4, #0xc]\n    ldr r0, [r4, #0x18]\n    lsl r0, r0, #0x10\n    str r0, [sp]\n    ldr r0, [r4, #0x20]\n    lsl r0, r0, #0x10\n    str r0, [sp, #8]\n    ldr r0, [r4, #0x30]\n    bl MapObject_GetPositionVectorYCoord\n    str r0, [sp, #4]\n    ldr r0, [r4, #0x24]\n    add r1, sp, #0\n    bl sub_0206121C\n    str r0, [r4, #0x14]\n    mov r0, #2\n    ldr r1, [sp]\n    lsl r0, r0, #0xe\n    add r0, r1, r0\n    str r0, [sp]\n    mov r0, #0x12\n    ldr r1, [sp, #8]\n    lsl r0, r0, #0xc\n    add r0, r1, r0\n    str r0, [sp, #8]\n    add r0, r5, #0\n    add r1, sp, #0\n    bl sub_02068DA8\n    ldr r0, [r4, #0x28]\n    mov r1, #0\n    add r2, sp, #0\n    bl ov01_021F1740\n    str r0, [r4, #0x3c]\n    mov r1, #2\n    ldr r0, [r4, #0x30]\n    lsl r1, r1, #8\n    bl MapObject_TestFlagsBits\n    cmp r0, #1\n    bne _021FF208\n    ldr r0, [r4, #0x3c]\n    mov r1, #0\n    bl sub_02023EA4\n    add r0, r5, #0\n    bl sub_02068D90\n    cmp r0, #0\n    bne _021FF220\n    mov r1, #3\n    ldr r0, [r4, #0x3c]\n    lsl r1, r1, #0xe\n    bl sub_02023F1C\n    mov r0, #2\n    str r0, [r4]\n    mov r0, #1\n    add sp, #0xc\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void ov01_021FF228(void) {
    sub_02023DA4();
}

void ov01_021FF234(void) {
    /* Original at 0x021FF234 */
    /* Requires manual decompilation - 130 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    add r4, r1, #0\n    ldr r6, [r4, #0x30]\n    ldr r1, [r4, #4]\n    add r5, r0, #0\n    ldr r2, [r4, #8]\n    ldr r3, [r4, #0xc]\n    add r0, r6, #0\n    bl sub_0205F0F8\n    cmp r0, #0\n    bne _021FF258\n    add r0, r5, #0\n    bl ov01_021F1640\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r1, #2\n    add r0, r6, #0\n    lsl r1, r1, #8\n    bl MapObject_TestFlagsBits\n    cmp r0, #1\n    ldr r0, [r4, #0x3c]\n    bne _021FF270\n    mov r1, #0\n    bl sub_02023EA4\n    b _021FF276\n    mov r1, #1\n    bl sub_02023EA4\n    ldr r0, [r4, #0x14]\n    cmp r0, #0\n    bne _021FF2AE\n    add r0, r5, #0\n    add r1, sp, #0xc\n    bl sub_02068DB8\n    ldr r0, [r4, #0x18]\n    add r1, sp, #0\n    lsl r0, r0, #0x10\n    str r0, [sp]\n    ldr r0, [r4, #0x20]\n    lsl r0, r0, #0x10\n    str r0, [sp, #8]\n    ldr r0, [sp, #0x10]\n    str r0, [sp, #4]\n    ldr r0, [r4, #0x24]\n    bl sub_0206121C\n    str r0, [r4, #0x14]\n    cmp r0, #1\n    bne _021FF2AE\n    ldr r0, [sp, #4]\n    add r1, sp, #0xc\n    str r0, [sp, #0x10]\n    add r0, r5, #0\n    bl sub_02068DA8\n    ldr r0, [r4]\n    cmp r0, #0\n    beq _021FF2C0\n    cmp r0, #1\n    beq _021FF2E4\n    cmp r0, #2\n    beq _021FF2F2\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r1, #1\n    ldr r0, [r4, #0x3c]\n    lsl r1, r1, #0xc\n    bl sub_02023F04\n    ldr r0, [r4, #0x3c]\n    bl sub_02023F70\n    asr r1, r0, #0xb\n    lsr r1, r1, #0x14\n    add r1, r0, r1\n    asr r0, r1, #0xc\n    cmp r0, #0xc\n    blt _021FF358\n    mov r0, #1\n    add sp, #0x18\n    str r0, [r4]\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r1, #3\n    ldr r0, [r4, #0x3c]\n    lsl r1, r1, #0xe\n    bl sub_02023F1C\n    mov r0, #2\n    str r0, [r4]\n    ldr r1, [r4, #4]\n    ldr r2, [r4, #8]\n    ldr r3, [r4, #0xc]\n    add r0, r6, #0\n    bl sub_0205F0F8\n    cmp r0, #0\n    bne _021FF30C\n    add r0, r5, #0\n    bl ov01_021F1640\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r6, #0\n    bl MapObject_GetXCoord\n    mov r1, #0x34\n    ldrsh r1, [r4, r1]\n    sub r7, r0, r1\n    add r0, r6, #0\n    bl MapObject_GetZCoord\n    mov r1, #0x36\n    ldrsh r1, [r4, r1]\n    sub r1, r0, r1\n    ldr r0, [r4, #0x18]\n    cmp r0, r7\n    bne _021FF330\n    ldr r0, [r4, #0x20]\n    cmp r0, r1\n    beq _021FF33A\n    add r0, r5, #0\n    bl ov01_021F1640\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0x38\n    ldrsb r1, [r4, r0]\n    sub r0, #0x39\n    cmp r1, r0\n    beq _021FF358\n    add r0, r6, #0\n    bl MapObject_GetFacingDirection\n    mov r1, #0x38\n    ldrsb r1, [r4, r1]\n    cmp r1, r0\n    beq _021FF358\n    add r0, r5, #0\n    bl ov01_021F1640\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021FF35C(void) {
    /* Original at 0x021FF35C */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r4, r1, #0\n    add r5, r0, #0\n    ldr r0, [r4, #0x30]\n    ldr r1, [r4, #4]\n    ldr r2, [r4, #8]\n    ldr r3, [r4, #0xc]\n    bl sub_0205F0F8\n    cmp r0, #0\n    bne _021FF37E\n    add r0, r5, #0\n    bl ov01_021F1640\n    add sp, #0xc\n    pop {r4, r5, pc}\n    add r0, r5, #0\n    add r1, sp, #0\n    bl sub_02068DB8\n    ldr r0, [r4, #0x3c]\n    add r1, sp, #0\n    bl sub_02023E50\n    add sp, #0xc\n    pop {r4, r5, pc}"
    );
    #endif
}

void ov01_021FF394(void) {
    /* Original at 0x021FF394 */
    /* Requires manual decompilation - 61 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    add r4, r1, #0\n    bl sub_02068D98\n    add r3, r0, #0\n    add r2, r4, #0\n    ldmia r3!, {r0, r1}\n    add r2, #0x10\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    str r0, [r2]\n    add r0, r5, #0\n    bl sub_02068D90\n    str r0, [r4, #0xc]\n    ldr r0, [r4, #0x10]\n    lsl r1, r0, #0x10\n    mov r0, #2\n    lsl r0, r0, #0xe\n    add r0, r1, r0\n    str r0, [sp]\n    ldr r0, [r4, #0x14]\n    lsl r1, r0, #0x10\n    mov r0, #9\n    lsl r0, r0, #0xc\n    add r0, r1, r0\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #4]\n    ldr r0, [r4, #0x18]\n    add r1, sp, #0\n    bl sub_0206121C\n    mov r0, #1\n    ldr r1, [sp, #4]\n    lsl r0, r0, #0xc\n    add r0, r1, r0\n    str r0, [sp, #4]\n    add r0, r5, #0\n    add r1, sp, #0\n    bl sub_02068DA8\n    ldr r0, [r4, #0xc]\n    cmp r0, #0\n    beq _021FF3FE\n    cmp r0, #1\n    beq _021FF402\n    cmp r0, #2\n    b _021FF406\n    mov r1, #5\n    b _021FF408\n    mov r1, #6\n    b _021FF408\n    mov r1, #7\n    ldr r0, [r4, #0x1c]\n    add r2, sp, #0\n    bl ov01_021F1740\n    str r0, [r4, #0x24]\n    mov r0, #1\n    add sp, #0xc\n    pop {r4, r5, pc}"
    );
    #endif
}

void ov01_021FF418(void) {
    sub_02023DA4();
}

void ov01_021FF424(void) {
    /* Original at 0x021FF424 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    ldr r0, [r4]\n    cmp r0, #0\n    beq _021FF432\n    cmp r0, #1\n    pop {r4, pc}\n    mov r1, #1\n    ldr r0, [r4, #0x24]\n    lsl r1, r1, #0xc\n    bl sub_02023F04\n    cmp r0, #1\n    bne _021FF44A\n    mov r0, #1\n    str r0, [r4, #4]\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    pop {r4, pc}"
    );
    #endif
}

void ov01_021FF44C(void) {
    sub_02068DB8();
    sub_02023E50(*((u32*)(r4 + 0x24)));
}
