/* Decompiled from asm/overlay_01_021FDA14.s */
#include "global.h"

void ov01_021FDA14(void) {
    ov01_021F1430(4, 0, 0);
    ov01_021FDA40();
}

void ov01_021FDA30(void) {
    ov01_021FDA5C();
    ov01_021F1448(r4);
}

void ov01_021FDA40(void) {
    ov01_021F18D4(2, 0x23);
    ov01_021F18D4(0xd, 0x69);
}

void ov01_021FDA5C(void) {
    ov01_021F18FC(2);
    ov01_021F18FC(0xd);
}

void ov01_021FDA74(void) {
    /* Original at 0x021FDA74 */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0x24\n    add r5, r0, #0\n    add r4, r1, #0\n    bl MapObject_GetFieldSystem\n    str r0, [sp, #8]\n    add r0, r5, #0\n    bl ov01_021F146C\n    mov r1, #1\n    str r0, [sp, #0xc]\n    bl ov01_021F1450\n    str r0, [sp, #0x10]\n    add r0, r5, #0\n    add r1, sp, #0x18\n    str r5, [sp, #0x14]\n    bl MapObject_CopyPositionVector\n    add r0, r5, #0\n    mov r1, #2\n    bl MapObject_GetPriorityPlusValue\n    add r1, sp, #8\n    str r1, [sp]\n    str r0, [sp, #4]\n    ldr r0, [sp, #0xc]\n    ldr r1, _021FDABC ; =ov01_02208F88\n    add r2, sp, #0x18\n    add r3, r4, #0\n    bl ov01_021F1620\n    add sp, #0x24\n    pop {r4, r5, pc}\n    nop\n    _021FDABC: .word ov01_02208F88"
    );
    #endif
}

void ov01_021FDAC0(void) {
    /* Original at 0x021FDAC0 */
    /* Requires manual decompilation - 49 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r4, r1, #0\n    add r5, r0, #0\n    bl sub_02068D98\n    add r2, r4, #0\n    add r3, r0, #0\n    add r2, #0x14\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    add r0, r5, #0\n    bl sub_02068D90\n    str r0, [r4, #0x10]\n    ldr r0, [r4, #0x20]\n    bl MapObject_GetID\n    str r0, [r4]\n    ldr r0, [r4, #0x20]\n    bl MapObject_GetMapID\n    str r0, [r4, #4]\n    ldr r0, [r4, #0x20]\n    bl MapObject_GetSpriteID\n    str r0, [r4, #8]\n    mov r0, #1\n    lsl r0, r0, #0xc\n    str r0, [r4, #0x28]\n    str r0, [r4, #0x2c]\n    str r0, [r4, #0x30]\n    mov r0, #0x40\n    str r0, [r4, #0x34]\n    ldr r0, [r4, #0x10]\n    cmp r0, #2\n    bne _021FDB12\n    mov r0, #0\n    str r0, [r4, #0x34]\n    ldr r1, [r4, #0x20]\n    add r0, r4, #0\n    add r2, sp, #0\n    bl ov01_021FDC7C\n    add r0, r5, #0\n    add r1, sp, #0\n    bl sub_02068DA8\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov01_021FDD48\n    mov r0, #1\n    add sp, #0xc\n    pop {r4, r5, pc}"
    );
    #endif
}

void ov01_021FDB34(void) {
    sub_02023DA4();
}

void ov01_021FDB44(void) {
    /* Original at 0x021FDB44 */
    /* Requires manual decompilation - 60 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0xc\n    add r4, r1, #0\n    ldr r6, [r4, #0x20]\n    add r5, r0, #0\n    add r0, r6, #0\n    bl MapObject_GetSpriteID\n    ldr r1, [r4, #8]\n    cmp r1, r0\n    bne _021FDB72\n    ldr r1, [r4]\n    ldr r2, [r4, #4]\n    add r0, r6, #0\n    bl sub_0205F0A8\n    cmp r0, #0\n    beq _021FDB72\n    add r0, r6, #0\n    bl MapObject_CheckFlag24\n    cmp r0, #0\n    bne _021FDB7C\n    add r0, r5, #0\n    bl ov01_021F1640\n    add sp, #0xc\n    pop {r3, r4, r5, r6, pc}\n    ldr r1, [r4, #0x28]\n    ldr r0, [r4, #0x34]\n    add r1, r1, r0\n    mov r0, #0x12\n    lsl r0, r0, #8\n    str r1, [r4, #0x28]\n    cmp r1, r0\n    blt _021FDB96\n    str r0, [r4, #0x28]\n    ldr r0, [r4, #0x34]\n    neg r0, r0\n    str r0, [r4, #0x34]\n    b _021FDBA6\n    mov r0, #0xe\n    lsl r0, r0, #8\n    cmp r1, r0\n    bgt _021FDBA6\n    str r0, [r4, #0x28]\n    ldr r0, [r4, #0x34]\n    neg r0, r0\n    str r0, [r4, #0x34]\n    add r0, r4, #0\n    add r1, r6, #0\n    add r2, sp, #0\n    bl ov01_021FDC7C\n    add r0, r5, #0\n    add r1, sp, #0\n    bl sub_02068DA8\n    ldr r0, [r4, #0xc]\n    cmp r0, #0\n    bne _021FDBC6\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov01_021FDD48\n    add sp, #0xc\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void ov01_021FDBCC(void) {
    /* Original at 0x021FDBCC */
    /* Requires manual decompilation - 72 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    add r5, r1, #0\n    ldr r6, [r5, #0x20]\n    add r7, r0, #0\n    add r0, r6, #0\n    mov r4, #0\n    bl MapObject_GetSpriteID\n    ldr r1, [r5, #8]\n    cmp r1, r0\n    bne _021FDBFC\n    ldr r1, [r5]\n    ldr r2, [r5, #4]\n    add r0, r6, #0\n    bl sub_0205F0A8\n    cmp r0, #0\n    beq _021FDBFC\n    add r0, r6, #0\n    bl MapObject_CheckFlag24\n    cmp r0, #0\n    bne _021FDC06\n    add r0, r7, #0\n    bl ov01_021F1640\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [r5, #0xc]\n    cmp r0, #0\n    beq _021FDC78\n    ldr r0, [r5, #0x20]\n    add r1, sp, #0xc\n    bl MapObject_CopyFacingVector\n    ldr r0, [sp, #0x10]\n    cmp r0, #0\n    beq _021FDC1C\n    mov r4, #1\n    add r0, r6, #0\n    bl MapObject_CheckVisible\n    cmp r0, #1\n    bne _021FDC28\n    mov r4, #1\n    cmp r4, #0\n    ldr r0, [r5, #0x24]\n    beq _021FDC36\n    mov r1, #0\n    bl sub_02023EA4\n    b _021FDC3C\n    mov r1, #1\n    bl sub_02023EA4\n    add r0, r7, #0\n    add r1, sp, #0\n    bl sub_02068DB8\n    ldr r0, [r5, #0x24]\n    add r1, sp, #0\n    bl sub_02023E50\n    add r1, r5, #0\n    ldr r0, [r5, #0x24]\n    add r1, #0x28\n    bl sub_02023E78\n    ldr r0, [r5, #0x20]\n    bl ov01_021F72DC\n    add r4, r0, #0\n    bl sub_02023EF4\n    add r1, r0, #0\n    ldr r0, [r5, #0x24]\n    bl sub_02023EE0\n    add r0, r4, #0\n    bl sub_02023F30\n    add r1, r0, #0\n    ldr r0, [r5, #0x24]\n    bl sub_02023F1C\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021FDC7C(void) {
    /* Original at 0x021FDC7C */
    /* Requires manual decompilation - 91 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x2c\n    ldr r3, _021FDD44 ; =ov01_02208FC8\n    add r4, r2, #0\n    add r2, sp, #8\n    add r5, r0, #0\n    add r6, r1, #0\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    add r0, r6, #0\n    add r1, sp, #0x20\n    bl MapObject_CopyFacingVector\n    ldr r0, [sp, #0x20]\n    str r0, [sp, #4]\n    add r0, r6, #0\n    bl MapObject_GetID\n    cmp r0, #0xff\n    bne _021FDCD2\n    add r0, r6, #0\n    bl MapObject_GetSpriteID\n    cmp r0, #0xbc\n    bne _021FDCD2\n    add r0, r6, #0\n    bl MapObject_GetFacingDirection\n    mov r1, #2\n    lsl r1, r1, #0xa\n    cmp r0, #1\n    bne _021FDCCE\n    lsl r0, r1, #1\n    add r1, r1, r0\n    ldr r0, [sp, #0x28]\n    sub r7, r1, r0\n    b _021FDCD4\n    ldr r7, [sp, #0x28]\n    b _021FDCD4\n    ldr r7, [sp, #0x28]\n    ldr r0, [sp, #0x24]\n    mov r1, #6\n    bl _s32_div_f\n    neg r0, r0\n    str r0, [sp]\n    add r0, r6, #0\n    bl MapObject_GetID\n    cmp r0, #0xfd\n    bne _021FDCFE\n    ldr r0, [r5, #0x14]\n    ldr r0, [r0, #0x40]\n    bl PlayerAvatar_GetMapObject\n    bl MapObject_GetSpriteID\n    cmp r0, #0xbc\n    bne _021FDCFE\n    mov r0, #0\n    str r0, [sp]\n    add r0, r6, #0\n    add r1, r4, #0\n    bl MapObject_CopyPositionVector\n    ldr r0, [r5, #0x14]\n    add r1, r4, #0\n    bl sub_0206121C\n    ldr r2, [r4]\n    ldr r1, [sp, #4]\n    add r1, r2, r1\n    str r1, [r4]\n    mov r1, #7\n    lsl r1, r1, #0xc\n    ldr r2, [r4, #8]\n    sub r1, r7, r1\n    add r1, r2, r1\n    str r1, [r4, #8]\n    cmp r0, #0\n    bne _021FDD2A\n    mov r0, #0\n    b _021FDD36\n    ldr r0, [r5, #0x10]\n    ldr r2, [r4, #4]\n    lsl r1, r0, #2\n    add r0, sp, #8\n    ldr r0, [r0, r1]\n    sub r0, r2, r0\n    str r0, [r4, #4]\n    ldr r1, [r4, #4]\n    ldr r0, [sp]\n    add r0, r1, r0\n    str r0, [r4, #4]\n    add sp, #0x2c\n    pop {r4, r5, r6, r7, pc}\n    _021FDD44: .word ov01_02208FC8"
    );
    #endif
}

void ov01_021FDD48(void) {
    /* Original at 0x021FDD48 */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0x34\n    add r4, r1, #0\n    add r5, r0, #0\n    ldr r0, [r4, #0x20]\n    bl MapObject_GetManager\n    ldr r1, [r4, #8]\n    add r2, sp, #0\n    bl ov01_021F9744\n    cmp r0, #0\n    beq _021FDD8E\n    ldr r0, [r4, #0x20]\n    bl ov01_021FA2D4\n    cmp r0, #1\n    beq _021FDD8E\n    ldr r0, [r4, #0x18]\n    mov r1, #2\n    bl ov01_021F18F0\n    str r0, [sp]\n    add r0, r5, #0\n    add r1, sp, #0x28\n    bl sub_02068DB8\n    ldr r0, [r4, #0x18]\n    add r1, sp, #0\n    add r2, sp, #0x28\n    bl ov01_021F16EC\n    str r0, [r4, #0x24]\n    mov r0, #1\n    str r0, [r4, #0xc]\n    add sp, #0x34\n    pop {r4, r5, pc}"
    );
    #endif
}

void ov01_021FDD94(void) {
    /* Original at 0x021FDD94 */
    /* Requires manual decompilation - 47 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0x34\n    add r4, r1, #0\n    add r6, r4, #0\n    add r5, r0, #0\n    add r6, #0x10\n    add r3, sp, #0\n    mov r2, #5\n    ldmia r6!, {r0, r1}\n    stmia r3!, {r0, r1}\n    sub r2, r2, #1\n    bne _021FDDA4\n    ldr r0, [r4, #8]\n    mov r1, #2\n    bl ov01_021F18F0\n    str r0, [sp]\n    add r0, r5, #0\n    add r1, sp, #0x28\n    bl sub_02068DB8\n    ldr r0, [r4, #8]\n    add r1, sp, #0\n    add r2, sp, #0x28\n    bl ov01_021F16EC\n    str r0, [r4, #0x3c]\n    ldr r5, [r4, #0x38]\n    add r0, r5, #0\n    bl sub_02023EF4\n    add r1, r0, #0\n    ldr r0, [r4, #0x3c]\n    bl sub_02023EE0\n    add r0, r5, #0\n    bl sub_02023F70\n    add r1, r0, #0\n    ldr r0, [r4, #0x3c]\n    bl sub_02023F40\n    add r0, r5, #0\n    bl sub_02023F30\n    add r1, r0, #0\n    ldr r0, [r4, #0x3c]\n    bl sub_02023F1C\n    ldr r0, [r4, #0x3c]\n    mov r1, #0\n    bl sub_02023F04\n    ldr r0, [r4, #0x3c]\n    bl sub_02023FC0\n    add sp, #0x34\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void ov01_021FDE08(void) {
    /* Original at 0x021FDE08 */
    /* Requires manual decompilation - 44 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x18\n    ldr r3, _021FDE60 ; =ov01_02208FB0\n    add r5, r0, #0\n    add r4, r1, #0\n    ldmia r3!, {r0, r1}\n    add r2, sp, #0\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    add r3, r5, #0\n    stmia r2!, {r0, r1}\n    add r3, #0x50\n    ldmia r3!, {r0, r1}\n    add r2, r4, #0\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    add r1, r4, #0\n    str r0, [r2]\n    ldr r0, [r5, #4]\n    bl sub_0206121C\n    mov r1, #7\n    ldr r2, [r4, #8]\n    lsl r1, r1, #0xc\n    sub r1, r2, r1\n    str r1, [r4, #8]\n    cmp r0, #0\n    bne _021FDE4C\n    mov r0, #0\n    add sp, #0x18\n    str r0, [r4, #4]\n    pop {r3, r4, r5, pc}\n    ldr r0, [r5]\n    ldr r2, [r4, #4]\n    lsl r1, r0, #2\n    add r0, sp, #0\n    ldr r0, [r0, r1]\n    sub r0, r2, r0\n    str r0, [r4, #4]\n    add sp, #0x18\n    pop {r3, r4, r5, pc}\n    nop\n    _021FDE60: .word ov01_02208FB0"
    );
    #endif
}

void ov01_021FDE64(void) {
    /* Original at 0x021FDE64 */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x40\n    add r5, r0, #0\n    add r4, r1, #0\n    add r6, r2, #0\n    add r7, r3, #0\n    bl ov01_021F1468\n    str r0, [sp, #8]\n    add r0, r5, #0\n    mov r1, #1\n    str r5, [sp, #0xc]\n    bl ov01_021F1450\n    str r0, [sp, #0x10]\n    add r3, sp, #0x14\n    mov r2, #5\n    ldmia r4!, {r0, r1}\n    stmia r3!, {r0, r1}\n    sub r2, r2, #1\n    bne _021FDE86\n    str r6, [sp, #0x3c]\n    add r0, sp, #8\n    str r0, [sp]\n    ldr r0, [sp, #0x5c]\n    ldr r1, _021FDEA8 ; =ov01_02208F9C\n    str r0, [sp, #4]\n    ldr r3, [sp, #0x58]\n    add r0, r5, #0\n    add r2, r7, #0\n    bl ov01_021F1620\n    add sp, #0x40\n    pop {r3, r4, r5, r6, r7, pc}\n    _021FDEA8: .word ov01_02208F9C"
    );
    #endif
}

void ov01_021FDEAC(void) {
    /* Original at 0x021FDEAC */
    /* Requires manual decompilation - 45 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    add r4, r1, #0\n    bl sub_02068D98\n    add r6, r0, #0\n    add r3, r4, #4\n    mov r2, #7\n    ldmia r6!, {r0, r1}\n    stmia r3!, {r0, r1}\n    sub r2, r2, #1\n    bne _021FDEBE\n    add r0, r5, #0\n    bl sub_02068D90\n    str r0, [r4]\n    mov r0, #1\n    lsl r0, r0, #0xc\n    str r0, [r4, #0x40]\n    str r0, [r4, #0x44]\n    str r0, [r4, #0x48]\n    mov r0, #0x40\n    str r0, [r4, #0x4c]\n    ldr r0, [r4]\n    cmp r0, #2\n    bne _021FDEE6\n    mov r0, #0\n    str r0, [r4, #0x4c]\n    add r1, r4, #0\n    add r0, r5, #0\n    add r1, #0x50\n    bl sub_02068DB8\n    add r0, r4, #0\n    add r1, sp, #0\n    bl ov01_021FDE08\n    add r0, r5, #0\n    add r1, sp, #0\n    bl sub_02068DA8\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov01_021FDD94\n    add r0, r5, #0\n    bl sub_02068D18\n    mov r0, #1\n    add sp, #0xc\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void ov01_021FDF14(void) {
    sub_02023DA4();
}

void ov01_021FDF20(void) {
    /* Original at 0x021FDF20 */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    ldr r2, [r1, #0x40]\n    ldr r0, [r1, #0x4c]\n    add r2, r2, r0\n    mov r0, #0x12\n    lsl r0, r0, #8\n    str r2, [r1, #0x40]\n    cmp r2, r0\n    blt _021FDF40\n    str r0, [r1, #0x40]\n    ldr r0, [r1, #0x4c]\n    neg r0, r0\n    str r0, [r1, #0x4c]\n    b _021FDF50\n    mov r0, #0xe\n    lsl r0, r0, #8\n    cmp r2, r0\n    bgt _021FDF50\n    str r0, [r1, #0x40]\n    ldr r0, [r1, #0x4c]\n    neg r0, r0\n    str r0, [r1, #0x4c]\n    add r0, r1, #0\n    add r1, sp, #0\n    bl ov01_021FDE08\n    add r0, r4, #0\n    add r1, sp, #0\n    bl sub_02068DA8\n    add sp, #0xc\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov01_021FDF64(void) {
    sub_02068DB8();
    sub_02023E50(*((u32*)(r4 + 0x3c)));
    sub_02023E78(*((u32*)(r4 + 0x3c)), r4);
}

void ov01_021FDF88(void) {
    /* Original at 0x021FDF88 */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0x24\n    add r5, r0, #0\n    add r4, r1, #0\n    bl MapObject_GetFieldSystem\n    str r0, [sp, #8]\n    add r0, r5, #0\n    bl ov01_021F146C\n    mov r1, #1\n    str r0, [sp, #0xc]\n    bl ov01_021F1450\n    str r0, [sp, #0x10]\n    add r0, r5, #0\n    add r1, sp, #0x18\n    str r5, [sp, #0x14]\n    bl MapObject_CopyPositionVector\n    add r0, r5, #0\n    mov r1, #2\n    bl MapObject_GetPriorityPlusValue\n    add r1, sp, #8\n    str r1, [sp]\n    str r0, [sp, #4]\n    ldr r0, [sp, #0xc]\n    ldr r1, _021FDFD0 ; =ov01_02208F74\n    add r2, sp, #0x18\n    add r3, r4, #0\n    bl ov01_021F1620\n    add sp, #0x24\n    pop {r4, r5, pc}\n    nop\n    _021FDFD0: .word ov01_02208F74"
    );
    #endif
}

void ov01_021FDFD4(void) {
    /* Original at 0x021FDFD4 */
    /* Requires manual decompilation - 57 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r4, r1, #0\n    add r5, r0, #0\n    bl sub_02068D98\n    add r2, r4, #0\n    add r3, r0, #0\n    add r2, #0x14\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    add r0, r5, #0\n    bl sub_02068D90\n    str r0, [r4, #0x10]\n    ldr r0, [r4, #0x20]\n    bl MapObject_GetID\n    str r0, [r4]\n    ldr r0, [r4, #0x20]\n    bl MapObject_GetMapID\n    str r0, [r4, #4]\n    ldr r0, [r4, #0x20]\n    bl MapObject_GetSpriteID\n    str r0, [r4, #8]\n    mov r0, #1\n    lsl r0, r0, #0xc\n    str r0, [r4, #0x28]\n    str r0, [r4, #0x2c]\n    str r0, [r4, #0x30]\n    mov r0, #0x40\n    str r0, [r4, #0x34]\n    ldr r0, [r4, #0x10]\n    cmp r0, #2\n    beq _021FE026\n    cmp r0, #5\n    bne _021FE02A\n    mov r0, #0\n    str r0, [r4, #0x34]\n    ldr r1, [r4, #0x20]\n    add r0, r4, #0\n    add r2, sp, #0\n    bl ov01_021FDC7C\n    ldr r1, [sp, #4]\n    ldr r0, _021FE054 ; =0x00000514\n    sub r0, r1, r0\n    str r0, [sp, #4]\n    add r0, r5, #0\n    add r1, sp, #0\n    bl sub_02068DA8\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov01_021FE190\n    mov r0, #1\n    add sp, #0xc\n    pop {r4, r5, pc}\n    nop\n    _021FE054: .word 0x00000514"
    );
    #endif
}

void ov01_021FE058(void) {
    /* Original at 0x021FE058 */
    /* Requires manual decompilation - 66 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0xc\n    add r4, r1, #0\n    ldr r6, [r4, #0x20]\n    add r5, r0, #0\n    add r0, r6, #0\n    bl MapObject_GetSpriteID\n    ldr r1, [r4, #8]\n    cmp r1, r0\n    bne _021FE086\n    ldr r1, [r4]\n    ldr r2, [r4, #4]\n    add r0, r6, #0\n    bl sub_0205F0A8\n    cmp r0, #0\n    beq _021FE086\n    add r0, r6, #0\n    bl MapObject_CheckFlag24\n    cmp r0, #0\n    bne _021FE090\n    add r0, r5, #0\n    bl ov01_021F1640\n    add sp, #0xc\n    pop {r3, r4, r5, r6, pc}\n    ldr r1, [r4, #0x28]\n    ldr r0, [r4, #0x34]\n    add r1, r1, r0\n    mov r0, #0x12\n    lsl r0, r0, #8\n    str r1, [r4, #0x28]\n    cmp r1, r0\n    blt _021FE0AA\n    str r0, [r4, #0x28]\n    ldr r0, [r4, #0x34]\n    neg r0, r0\n    str r0, [r4, #0x34]\n    b _021FE0BA\n    mov r0, #0xe\n    lsl r0, r0, #8\n    cmp r1, r0\n    bgt _021FE0BA\n    str r0, [r4, #0x28]\n    ldr r0, [r4, #0x34]\n    neg r0, r0\n    str r0, [r4, #0x34]\n    add r0, r4, #0\n    add r1, r6, #0\n    add r2, sp, #0\n    bl ov01_021FDC7C\n    ldr r1, [sp, #4]\n    ldr r0, _021FE0E8 ; =0x00000514\n    sub r0, r1, r0\n    str r0, [sp, #4]\n    add r0, r5, #0\n    add r1, sp, #0\n    bl sub_02068DA8\n    ldr r0, [r4, #0xc]\n    cmp r0, #0\n    bne _021FE0E2\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov01_021FE190\n    add sp, #0xc\n    pop {r3, r4, r5, r6, pc}\n    nop\n    _021FE0E8: .word 0x00000514"
    );
    #endif
}

void ov01_021FE0EC(void) {
    /* Original at 0x021FE0EC */
    /* Requires manual decompilation - 66 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0xc\n    add r5, r1, #0\n    ldr r4, [r5, #0x20]\n    add r6, r0, #0\n    add r0, r4, #0\n    bl MapObject_GetSpriteID\n    ldr r1, [r5, #8]\n    cmp r1, r0\n    bne _021FE11A\n    ldr r1, [r5]\n    ldr r2, [r5, #4]\n    add r0, r4, #0\n    bl sub_0205F0A8\n    cmp r0, #0\n    beq _021FE11A\n    add r0, r4, #0\n    bl MapObject_CheckFlag24\n    cmp r0, #0\n    bne _021FE124\n    add r0, r6, #0\n    bl ov01_021F1640\n    add sp, #0xc\n    pop {r3, r4, r5, r6, pc}\n    ldr r0, [r5, #0xc]\n    cmp r0, #0\n    beq _021FE18A\n    add r0, r4, #0\n    bl MapObject_CheckVisible\n    cmp r0, #1\n    ldr r0, [r5, #0x24]\n    bne _021FE13E\n    mov r1, #0\n    bl sub_02023EA4\n    b _021FE144\n    mov r1, #1\n    bl sub_02023EA4\n    add r0, r6, #0\n    add r1, sp, #0\n    bl sub_02068DB8\n    mov r0, #1\n    ldr r1, [sp, #8]\n    lsl r0, r0, #0xc\n    sub r0, r1, r0\n    str r0, [sp, #8]\n    ldr r0, [r5, #0x24]\n    add r1, sp, #0\n    bl sub_02023E50\n    add r1, r5, #0\n    ldr r0, [r5, #0x24]\n    add r1, #0x28\n    bl sub_02023E78\n    ldr r0, [r5, #0x20]\n    bl ov01_021F72DC\n    add r4, r0, #0\n    bl sub_02023EF4\n    add r1, r0, #0\n    ldr r0, [r5, #0x24]\n    bl sub_02023EE0\n    add r0, r4, #0\n    bl sub_02023F30\n    add r1, r0, #0\n    ldr r0, [r5, #0x24]\n    bl sub_02023F1C\n    add sp, #0xc\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void ov01_021FE190(void) {
    /* Original at 0x021FE190 */
    /* Requires manual decompilation - 46 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0x34\n    add r4, r1, #0\n    add r5, r0, #0\n    ldr r0, [r4, #0x20]\n    bl MapObject_GetManager\n    ldr r1, [r4, #8]\n    add r2, sp, #0\n    bl ov01_021F9744\n    cmp r0, #0\n    beq _021FE1FA\n    ldr r0, [r4, #0x20]\n    bl ov01_021FA2D4\n    cmp r0, #1\n    beq _021FE1FA\n    ldr r0, [r4, #0x10]\n    cmp r0, #2\n    ldr r0, [r4, #0x18]\n    bhi _021FE1C4\n    mov r1, #2\n    bl ov01_021F18F0\n    b _021FE1CA\n    mov r1, #0xd\n    bl ov01_021F18F0\n    str r0, [sp]\n    ldr r0, [r4, #0x20]\n    bl ov01_0220553C\n    cmp r0, #0\n    beq _021FE1E2\n    ldr r1, [r4, #0x20]\n    ldr r2, [r4, #0x24]\n    mov r0, #1\n    add r3, sp, #0\n    bl ov01_02205870\n    add r0, r5, #0\n    add r1, sp, #0x28\n    bl sub_02068DB8\n    ldr r0, [r4, #0x18]\n    add r1, sp, #0\n    add r2, sp, #0x28\n    bl ov01_021F16EC\n    str r0, [r4, #0x24]\n    mov r0, #1\n    str r0, [r4, #0xc]\n    add sp, #0x34\n    pop {r4, r5, pc}"
    );
    #endif
}
