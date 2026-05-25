/* Decompiled from asm/overlay_01_021FFC0C.s */
#include "global.h"

void ov01_021FFC0C(void) {
    /* Original at 0x021FFC0C */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    mov r2, #0\n    mov r1, #4\n    add r3, r2, #0\n    add r5, r0, #0\n    bl ov01_021F1430\n    add r4, r0, #0\n    str r5, [r4]\n    bl ov01_021FFC38\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_021FFC28(void) {
    ov01_021FFC80();
    ov01_021F1448(r4);
}

void ov01_021FFC38(void) {
    /* Original at 0x021FFC38 */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    ldr r0, [r4]\n    mov r1, #8\n    mov r2, #0x7b\n    bl ov01_021F18D4\n    ldr r0, [r4]\n    mov r1, #8\n    mov r2, #0x93\n    bl ov01_021F1908\n    ldr r0, [r4]\n    mov r1, #9\n    mov r2, #0x16\n    mov r3, #1\n    bl ov01_021F1930\n    mov r0, #9\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    ldr r0, _021FFC7C ; =ov01_02209258\n    mov r2, #8\n    str r0, [sp, #8]\n    ldr r0, [r4]\n    mov r1, #0xa\n    add r3, r2, #0\n    bl ov01_021F1758\n    add sp, #0xc\n    pop {r3, r4, pc}\n    nop\n    _021FFC7C: .word ov01_02209258"
    );
    #endif
}

void ov01_021FFC80(void) {
    /* Original at 0x021FFC80 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4]\n    mov r1, #8\n    bl ov01_021F18FC\n    ldr r0, [r4]\n    mov r1, #8\n    bl ov01_021F1924\n    ldr r0, [r4]\n    mov r1, #9\n    bl ov01_021F1970\n    ldr r0, [r4]\n    mov r1, #0xa\n    bl ov01_021F18C8\n    pop {r4, pc}"
    );
    #endif
}

void ov01_021FFCA8(void) {
    /* Original at 0x021FFCA8 */
    /* Requires manual decompilation - 82 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    add r4, r1, #0\n    bl sub_02068D98\n    add r3, r4, #0\n    add r6, r0, #0\n    add r3, #0x18\n    mov r2, #4\n    ldmia r6!, {r0, r1}\n    stmia r3!, {r0, r1}\n    sub r2, r2, #1\n    bne _021FFCBC\n    ldr r0, [r6]\n    str r0, [r3]\n    ldr r0, [r4, #0x30]\n    bl MapObject_GetSpriteID\n    str r0, [r4, #4]\n    ldr r0, [r4, #0x30]\n    bl MapObject_GetID\n    str r0, [r4, #8]\n    ldr r0, [r4, #0x30]\n    bl MapObject_GetMapID\n    str r0, [r4, #0xc]\n    ldr r0, [r4, #0x18]\n    lsl r0, r0, #0x10\n    str r0, [sp]\n    ldr r0, [r4, #0x20]\n    lsl r0, r0, #0x10\n    str r0, [sp, #8]\n    ldr r0, [r4, #0x30]\n    bl MapObject_GetPositionVectorYCoord\n    str r0, [sp, #4]\n    ldr r0, [r4, #0x24]\n    add r1, sp, #0\n    bl sub_0206121C\n    str r0, [r4, #0x14]\n    mov r0, #0x1e\n    ldr r1, [sp]\n    lsl r0, r0, #0xa\n    add r0, r1, r0\n    str r0, [sp]\n    mov r0, #2\n    ldr r1, [sp, #4]\n    lsl r0, r0, #0xe\n    sub r0, r1, r0\n    str r0, [sp, #4]\n    mov r0, #0xd\n    ldr r1, [sp, #8]\n    lsl r0, r0, #0xc\n    add r0, r1, r0\n    str r0, [sp, #8]\n    add r0, r5, #0\n    add r1, sp, #0\n    bl sub_02068DA8\n    ldr r0, [r4, #0x28]\n    mov r1, #0xa\n    add r2, sp, #0\n    bl ov01_021F1740\n    str r0, [r4, #0x3c]\n    mov r1, #2\n    ldr r0, [r4, #0x30]\n    lsl r1, r1, #8\n    bl MapObject_TestFlagsBits\n    cmp r0, #1\n    bne _021FFD46\n    ldr r0, [r4, #0x3c]\n    mov r1, #0\n    bl sub_02023EA4\n    add r0, r5, #0\n    bl sub_02068D90\n    cmp r0, #0\n    bne _021FFD5E\n    mov r1, #2\n    ldr r0, [r4, #0x3c]\n    lsl r1, r1, #0xc\n    bl sub_02023F1C\n    mov r0, #2\n    str r0, [r4]\n    mov r0, #1\n    add sp, #0xc\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void ov01_021FFD64(void) {
    sub_02023DA4();
}

void ov01_021FFD70(void) {
    /* Original at 0x021FFD70 */
    /* Requires manual decompilation - 128 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    add r5, r1, #0\n    ldr r7, [r5, #0x30]\n    ldr r1, [r5, #4]\n    add r6, r0, #0\n    ldr r2, [r5, #8]\n    ldr r3, [r5, #0xc]\n    add r0, r7, #0\n    bl sub_0205F0F8\n    cmp r0, #0\n    bne _021FFD94\n    add r0, r6, #0\n    bl ov01_021F1640\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r1, #2\n    add r0, r7, #0\n    lsl r1, r1, #8\n    bl MapObject_TestFlagsBits\n    cmp r0, #1\n    ldr r0, [r5, #0x3c]\n    bne _021FFDAC\n    mov r1, #0\n    bl sub_02023EA4\n    b _021FFDB2\n    mov r1, #1\n    bl sub_02023EA4\n    ldr r0, [r5, #0x14]\n    cmp r0, #0\n    bne _021FFDEA\n    add r0, r6, #0\n    add r1, sp, #0xc\n    bl sub_02068DB8\n    ldr r0, [r5, #0x18]\n    add r1, sp, #0\n    lsl r0, r0, #0x10\n    str r0, [sp]\n    ldr r0, [r5, #0x20]\n    lsl r0, r0, #0x10\n    str r0, [sp, #8]\n    ldr r0, [sp, #0x10]\n    str r0, [sp, #4]\n    ldr r0, [r5, #0x24]\n    bl sub_0206121C\n    str r0, [r5, #0x14]\n    cmp r0, #1\n    bne _021FFDEA\n    ldr r0, [sp, #4]\n    add r1, sp, #0xc\n    str r0, [sp, #0x10]\n    add r0, r6, #0\n    bl sub_02068DA8\n    ldr r0, [r5]\n    cmp r0, #0\n    beq _021FFDFC\n    cmp r0, #1\n    beq _021FFE20\n    cmp r0, #2\n    beq _021FFE36\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r1, #1\n    ldr r0, [r5, #0x3c]\n    lsl r1, r1, #0xc\n    bl sub_02023F04\n    ldr r0, [r5, #0x3c]\n    bl sub_02023F70\n    asr r1, r0, #0xb\n    lsr r1, r1, #0x14\n    add r1, r0, r1\n    asr r0, r1, #0xc\n    cmp r0, #2\n    blt _021FFE92\n    mov r0, #1\n    add sp, #0x18\n    str r0, [r5]\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r1, #2\n    ldr r0, [r5, #0x3c]\n    lsl r1, r1, #0xc\n    bl sub_02023F1C\n    ldr r0, [r5, #0x3c]\n    mov r1, #0\n    bl sub_02023F04\n    mov r0, #2\n    str r0, [r5]\n    ldr r1, [r5, #4]\n    ldr r2, [r5, #8]\n    ldr r3, [r5, #0xc]\n    add r0, r7, #0\n    bl sub_0205F0F8\n    cmp r0, #0\n    bne _021FFE50\n    add r0, r6, #0\n    bl ov01_021F1640\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r7, #0\n    bl MapObject_GetXCoord\n    add r4, r0, #0\n    add r0, r7, #0\n    bl MapObject_GetZCoord\n    ldr r1, [r5, #0x18]\n    cmp r1, r4\n    bne _021FFE6A\n    ldr r1, [r5, #0x20]\n    cmp r1, r0\n    beq _021FFE74\n    add r0, r6, #0\n    bl ov01_021F1640\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0x38\n    ldrsb r1, [r5, r0]\n    sub r0, #0x39\n    cmp r1, r0\n    beq _021FFE92\n    add r0, r7, #0\n    bl MapObject_GetFacingDirection\n    mov r1, #0x38\n    ldrsb r1, [r5, r1]\n    cmp r1, r0\n    beq _021FFE92\n    add r0, r6, #0\n    bl ov01_021F1640\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021FFE98(void) {
    /* Original at 0x021FFE98 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r4, r1, #0\n    add r5, r0, #0\n    ldr r0, [r4, #0x30]\n    ldr r1, [r4, #8]\n    ldr r2, [r4, #0xc]\n    bl sub_0205F0A8\n    cmp r0, #0\n    bne _021FFEB8\n    add r0, r5, #0\n    bl ov01_021F1640\n    add sp, #0xc\n    pop {r4, r5, pc}\n    add r0, r5, #0\n    add r1, sp, #0\n    bl sub_02068DB8\n    ldr r0, [r4, #0x3c]\n    add r1, sp, #0\n    bl sub_02023E50\n    add sp, #0xc\n    pop {r4, r5, pc}"
    );
    #endif
}
