/* Decompiled from asm/overlay_01_021FF854.s */
#include "global.h"

void ov01_021FF854(void) {
    /* Original at 0x021FF854 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    mov r2, #0\n    mov r1, #4\n    add r3, r2, #0\n    add r5, r0, #0\n    bl ov01_021F1430\n    add r4, r0, #0\n    str r5, [r4]\n    bl ov01_021FF880\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_021FF870(void) {
    /* Original at 0x021FF870 */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov01_021FF8C8\n    add r0, r4, #0\n    bl ov01_021F1448\n    pop {r4, pc}"
    );
    #endif
}

void ov01_021FF880(void) {
    /* Original at 0x021FF880 */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    ldr r0, [r4]\n    mov r1, #7\n    mov r2, #0x7a\n    bl ov01_021F18D4\n    ldr r0, [r4]\n    mov r1, #7\n    mov r2, #0x92\n    bl ov01_021F1908\n    ldr r0, [r4]\n    mov r1, #8\n    mov r2, #0x15\n    mov r3, #1\n    bl ov01_021F1930\n    mov r0, #8\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    ldr r0, _021FF8C4 ; =ov01_0220922C\n    mov r2, #7\n    str r0, [sp, #8]\n    ldr r0, [r4]\n    mov r1, #9\n    add r3, r2, #0\n    bl ov01_021F1758\n    add sp, #0xc\n    pop {r3, r4, pc}\n    nop\n    _021FF8C4: .word ov01_0220922C"
    );
    #endif
}

void ov01_021FF8C8(void) {
    /* Original at 0x021FF8C8 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4]\n    mov r1, #7\n    bl ov01_021F18FC\n    ldr r0, [r4]\n    mov r1, #7\n    bl ov01_021F1924\n    ldr r0, [r4]\n    mov r1, #8\n    bl ov01_021F1970\n    ldr r0, [r4]\n    mov r1, #9\n    bl ov01_021F18C8\n    pop {r4, pc}"
    );
    #endif
}

void ov01_021FF8F0(void) {
    /* Original at 0x021FF8F0 */
    /* Requires manual decompilation - 48 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x38\n    add r5, r0, #0\n    add r6, r1, #0\n    bl ov01_021F146C\n    add r4, r0, #0\n    add r0, r5, #0\n    bl MapObject_GetXCoord\n    str r0, [sp, #8]\n    add r0, r5, #0\n    bl MapObject_GetYCoord\n    str r0, [sp, #0xc]\n    add r0, r5, #0\n    bl MapObject_GetZCoord\n    str r0, [sp, #0x10]\n    mov r1, #0\n    add r0, sp, #8\n    strh r1, [r0, #0x1c]\n    strh r1, [r0, #0x1e]\n    sub r1, r1, #1\n    add r0, sp, #0x28\n    strb r1, [r0]\n    add r0, r4, #0\n    str r4, [sp, #0x18]\n    bl ov01_021F1468\n    str r0, [sp, #0x14]\n    add r0, r4, #0\n    mov r1, #0xc\n    bl ov01_021F1450\n    str r0, [sp, #0x1c]\n    add r0, r5, #0\n    add r1, sp, #0x2c\n    str r5, [sp, #0x20]\n    bl MapObject_CopyPositionVector\n    add r0, r5, #0\n    mov r1, #2\n    bl MapObject_GetPriorityPlusValue\n    add r1, sp, #8\n    str r1, [sp]\n    str r0, [sp, #4]\n    ldr r1, _021FF960 ; =ov01_02209218\n    add r0, r4, #0\n    add r2, sp, #0x2c\n    add r3, r6, #0\n    bl ov01_021F1620\n    add sp, #0x38\n    pop {r4, r5, r6, pc}\n    _021FF960: .word ov01_02209218"
    );
    #endif
}

void ov01_021FF964(void) {
    /* Original at 0x021FF964 */
    /* Requires manual decompilation - 61 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x3c\n    add r5, r0, #0\n    str r1, [sp, #8]\n    add r4, r2, #0\n    add r6, r3, #0\n    bl ov01_021F146C\n    add r7, r0, #0\n    add r0, r5, #0\n    str r4, [sp, #0xc]\n    bl MapObject_GetYCoord\n    str r0, [sp, #0x10]\n    add r0, r5, #0\n    str r6, [sp, #0x14]\n    bl MapObject_GetXCoord\n    sub r1, r0, r4\n    add r0, sp, #0xc\n    strh r1, [r0, #0x1c]\n    add r0, r5, #0\n    bl MapObject_GetZCoord\n    sub r1, r0, r6\n    add r0, sp, #0xc\n    strh r1, [r0, #0x1e]\n    ldr r0, [sp, #0x50]\n    cmp r0, #0\n    beq _021FF9AC\n    add r0, r5, #0\n    bl MapObject_GetFacingDirection\n    add r1, sp, #0x2c\n    strb r0, [r1]\n    b _021FF9B4\n    mov r1, #0\n    mvn r1, r1\n    add r0, sp, #0x2c\n    strb r1, [r0]\n    add r0, r7, #0\n    str r7, [sp, #0x1c]\n    bl ov01_021F1468\n    str r0, [sp, #0x18]\n    add r0, r7, #0\n    mov r1, #0xc\n    bl ov01_021F1450\n    str r0, [sp, #0x20]\n    add r0, r5, #0\n    add r1, sp, #0x30\n    str r5, [sp, #0x24]\n    bl MapObject_CopyPositionVector\n    add r0, r5, #0\n    mov r1, #2\n    bl MapObject_GetPriorityPlusValue\n    add r1, sp, #0xc\n    str r1, [sp]\n    str r0, [sp, #4]\n    ldr r1, _021FF9F0 ; =ov01_02209218\n    ldr r3, [sp, #8]\n    add r0, r7, #0\n    add r2, sp, #0x30\n    bl ov01_021F1620\n    add sp, #0x3c\n    pop {r4, r5, r6, r7, pc}\n    _021FF9F0: .word ov01_02209218"
    );
    #endif
}

void ov01_021FF9F4(void) {
    /* Original at 0x021FF9F4 */
    /* Requires manual decompilation - 80 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    add r4, r1, #0\n    bl sub_02068D98\n    add r3, r4, #0\n    add r6, r0, #0\n    add r3, #0x18\n    mov r2, #4\n    ldmia r6!, {r0, r1}\n    stmia r3!, {r0, r1}\n    sub r2, r2, #1\n    bne _021FFA08\n    ldr r0, [r6]\n    str r0, [r3]\n    ldr r0, [r4, #0x30]\n    bl MapObject_GetSpriteID\n    str r0, [r4, #4]\n    ldr r0, [r4, #0x30]\n    bl MapObject_GetID\n    str r0, [r4, #8]\n    ldr r0, [r4, #0x30]\n    bl MapObject_GetMapID\n    str r0, [r4, #0xc]\n    ldr r0, [r4, #0x18]\n    lsl r0, r0, #0x10\n    str r0, [sp]\n    ldr r0, [r4, #0x20]\n    lsl r0, r0, #0x10\n    str r0, [sp, #8]\n    ldr r0, [r4, #0x30]\n    bl MapObject_GetPositionVectorYCoord\n    str r0, [sp, #4]\n    ldr r0, [r4, #0x24]\n    add r1, sp, #0\n    bl sub_0206121C\n    str r0, [r4, #0x14]\n    mov r0, #2\n    ldr r1, [sp]\n    lsl r0, r0, #0xe\n    add r0, r1, r0\n    str r0, [sp]\n    mov r0, #0x12\n    ldr r1, [sp, #8]\n    lsl r0, r0, #0xc\n    add r0, r1, r0\n    str r0, [sp, #8]\n    add r0, r5, #0\n    add r1, sp, #0\n    bl sub_02068DA8\n    ldr r0, [r4, #0x28]\n    mov r1, #9\n    add r2, sp, #0\n    bl ov01_021F1740\n    str r0, [r4, #0x3c]\n    mov r1, #2\n    ldr r0, [r4, #0x30]\n    lsl r1, r1, #8\n    bl MapObject_TestFlagsBits\n    cmp r0, #1\n    bne _021FFA88\n    ldr r0, [r4, #0x3c]\n    mov r1, #0\n    bl sub_02023EA4\n    add r0, r5, #0\n    bl sub_02068D90\n    cmp r0, #0\n    bne _021FFAA8\n    mov r1, #3\n    ldr r0, [r4, #0x3c]\n    lsl r1, r1, #0xe\n    bl sub_02023F1C\n    ldr r0, [r4, #0x3c]\n    mov r1, #0\n    bl sub_02023F04\n    mov r0, #2\n    str r0, [r4]\n    mov r0, #1\n    add sp, #0xc\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void ov01_021FFAB0(void) {
    sub_02023DA4();
}

void ov01_021FFABC(void) {
    /* Original at 0x021FFABC */
    /* Requires manual decompilation - 122 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    add r4, r1, #0\n    ldr r6, [r4, #0x30]\n    ldr r1, [r4, #4]\n    add r5, r0, #0\n    ldr r2, [r4, #8]\n    ldr r3, [r4, #0xc]\n    add r0, r6, #0\n    bl sub_0205F0F8\n    cmp r0, #0\n    bne _021FFAE0\n    add r0, r5, #0\n    bl ov01_021F1640\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r1, #2\n    add r0, r6, #0\n    lsl r1, r1, #8\n    bl MapObject_TestFlagsBits\n    cmp r0, #1\n    ldr r0, [r4, #0x3c]\n    bne _021FFAF8\n    mov r1, #0\n    bl sub_02023EA4\n    b _021FFAFE\n    mov r1, #1\n    bl sub_02023EA4\n    ldr r0, [r4, #0x14]\n    cmp r0, #0\n    bne _021FFB36\n    add r0, r5, #0\n    add r1, sp, #0xc\n    bl sub_02068DB8\n    ldr r0, [r4, #0x18]\n    add r1, sp, #0\n    lsl r0, r0, #0x10\n    str r0, [sp]\n    ldr r0, [r4, #0x20]\n    lsl r0, r0, #0x10\n    str r0, [sp, #8]\n    ldr r0, [sp, #0x10]\n    str r0, [sp, #4]\n    ldr r0, [r4, #0x24]\n    bl sub_0206121C\n    str r0, [r4, #0x14]\n    cmp r0, #1\n    bne _021FFB36\n    ldr r0, [sp, #4]\n    add r1, sp, #0xc\n    str r0, [sp, #0x10]\n    add r0, r5, #0\n    bl sub_02068DA8\n    ldr r0, [r4]\n    cmp r0, #0\n    beq _021FFB48\n    cmp r0, #1\n    beq _021FFB6C\n    cmp r0, #2\n    beq _021FFB82\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r1, #1\n    ldr r0, [r4, #0x3c]\n    lsl r1, r1, #0xc\n    bl sub_02023F04\n    ldr r0, [r4, #0x3c]\n    bl sub_02023F70\n    asr r1, r0, #0xb\n    lsr r1, r1, #0x14\n    add r1, r0, r1\n    asr r0, r1, #0xc\n    cmp r0, #0xc\n    blt _021FFBCE\n    mov r0, #1\n    add sp, #0x18\n    str r0, [r4]\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r1, #3\n    ldr r0, [r4, #0x3c]\n    lsl r1, r1, #0xe\n    bl sub_02023F1C\n    ldr r0, [r4, #0x3c]\n    mov r1, #0\n    bl sub_02023F04\n    mov r0, #2\n    str r0, [r4]\n    add r0, r6, #0\n    bl MapObject_GetXCoord\n    mov r1, #0x34\n    ldrsh r1, [r4, r1]\n    sub r7, r0, r1\n    add r0, r6, #0\n    bl MapObject_GetZCoord\n    mov r1, #0x36\n    ldrsh r1, [r4, r1]\n    sub r1, r0, r1\n    ldr r0, [r4, #0x18]\n    cmp r0, r7\n    bne _021FFBA6\n    ldr r0, [r4, #0x20]\n    cmp r0, r1\n    beq _021FFBB0\n    add r0, r5, #0\n    bl ov01_021F1640\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0x38\n    ldrsb r1, [r4, r0]\n    sub r0, #0x39\n    cmp r1, r0\n    beq _021FFBCE\n    add r0, r6, #0\n    bl MapObject_GetFacingDirection\n    mov r1, #0x38\n    ldrsb r1, [r4, r1]\n    cmp r1, r0\n    beq _021FFBCE\n    add r0, r5, #0\n    bl ov01_021F1640\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021FFBD4(void) {
    /* Original at 0x021FFBD4 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r4, r1, #0\n    add r5, r0, #0\n    ldr r0, [r4, #0x30]\n    ldr r1, [r4, #4]\n    ldr r2, [r4, #8]\n    ldr r3, [r4, #0xc]\n    bl sub_0205F0F8\n    cmp r0, #0\n    bne _021FFBF6\n    add r0, r5, #0\n    bl ov01_021F1640\n    add sp, #0xc\n    pop {r4, r5, pc}\n    add r0, r5, #0\n    add r1, sp, #0\n    bl sub_02068DB8\n    ldr r0, [r4, #0x3c]\n    add r1, sp, #0\n    bl sub_02023E50\n    add sp, #0xc\n    pop {r4, r5, pc}"
    );
    #endif
}
