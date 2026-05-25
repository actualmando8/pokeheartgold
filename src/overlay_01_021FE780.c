/* Decompiled from asm/overlay_01_021FE780.s */
#include "global.h"

void ov01_021FE780(void) {
    ov01_021F1430(0x6c, 0, 0);
    ov01_021FE7AC();
}

void ov01_021FE79C(void) {
    ov01_021FE7D0();
    ov01_021F1448(r4);
}

void ov01_021FE7AC(void) {
    /* Original at 0x021FE7AC */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    mov r2, #0\n    add r4, r0, #0\n    str r2, [sp]\n    ldr r0, [r4]\n    add r1, r4, #4\n    mov r3, #0x56\n    bl ov01_021F19F4\n    add r0, r4, #0\n    add r0, #0x18\n    add r1, r4, #4\n    bl sub_02069978\n    add sp, #4\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov01_021FE7D0(void) {
    sub_02069784();
}

void ov01_021FE7DC(void) {
    /* Original at 0x021FE7DC */
    /* Requires manual decompilation - 60 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x30\n    add r4, r1, #0\n    add r6, r2, #0\n    add r2, sp, #0x14\n    mov r1, #0\n    str r1, [r2]\n    str r1, [r2, #4]\n    add r5, r0, #0\n    str r1, [r2, #8]\n    str r3, [sp, #0x20]\n    bl ov01_021F146C\n    mov r1, #4\n    str r0, [sp, #0x24]\n    bl ov01_021F1450\n    str r0, [sp, #0x28]\n    ldr r0, [sp, #0x40]\n    str r5, [sp, #0x2c]\n    cmp r0, #0\n    bne _021FE826\n    add r0, r5, #0\n    bl MapObject_GetFieldSystem\n    mov r1, #2\n    lsl r2, r4, #0x10\n    lsl r1, r1, #0xe\n    add r2, r2, r1\n    str r2, [sp, #0x14]\n    lsl r2, r6, #0x10\n    add r1, r2, r1\n    str r1, [sp, #0x1c]\n    add r1, sp, #0x14\n    bl sub_0206121C\n    b _021FE842\n    ldr r3, _021FE860 ; =ov01_022090D0\n    add r2, sp, #8\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    add r1, sp, #0x14\n    str r0, [r2]\n    add r0, r5, #0\n    bl MapObject_CopyPositionVector\n    add r0, r5, #0\n    add r1, sp, #8\n    bl sub_0205F9A0\n    add r0, r5, #0\n    mov r1, #2\n    bl MapObject_GetPriorityPlusValue\n    add r1, sp, #0x20\n    str r1, [sp]\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x24]\n    ldr r1, _021FE864 ; =ov01_022090DC\n    ldr r3, [sp, #0x40]\n    add r2, sp, #0x14\n    bl ov01_021F1620\n    add sp, #0x30\n    pop {r4, r5, r6, pc}\n    _021FE860: .word ov01_022090D0\n    _021FE864: .word ov01_022090DC"
    );
    #endif
}

void ov01_021FE868(void) {
    /* Original at 0x021FE868 */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    add r5, r1, #0\n    bl sub_02068D98\n    add r7, r0, #0\n    add r2, r5, #0\n    add r3, r7, #0\n    ldr r4, [r7, #0xc]\n    add r2, #0x24\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    add r0, r4, #0\n    bl MapObject_GetID\n    str r0, [r5, #0xc]\n    add r0, r4, #0\n    bl MapObject_GetMapID\n    str r0, [r5, #0x10]\n    ldr r0, [r7]\n    str r0, [r5, #8]\n    add r0, r6, #0\n    bl sub_02068D90\n    str r0, [r5, #0x18]\n    mov r0, #1\n    lsl r0, r0, #0xc\n    str r0, [r5, #0x1c]\n    lsr r0, r0, #2\n    str r0, [r5, #0x20]\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021FE8B0(void) {
    sub_0205F9A0(0);
}

void ov01_021FE8C8(void) {
    /* Original at 0x021FE8C8 */
    /* Requires manual decompilation - 78 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x18\n    add r5, r1, #0\n    ldr r4, [r5, #0x30]\n    ldr r1, [r5, #0xc]\n    add r6, r0, #0\n    ldr r2, [r5, #0x10]\n    add r0, r4, #0\n    bl sub_0205F0A8\n    cmp r0, #0\n    bne _021FE8EA\n    add r0, r6, #0\n    bl ov01_021F1640\n    add sp, #0x18\n    pop {r4, r5, r6, pc}\n    mov r0, #0\n    str r0, [r5]\n    add r0, r4, #0\n    bl MapObject_GetFacingDirection\n    mov r1, #0\n    mvn r1, r1\n    str r0, [r5, #4]\n    cmp r0, r1\n    bne _021FE906\n    mov r0, #1\n    add sp, #0x18\n    str r0, [r5]\n    pop {r4, r5, r6, pc}\n    ldr r1, [r5, #0x18]\n    cmp r1, #0\n    beq _021FE96C\n    str r0, [r5, #8]\n    ldr r1, [r5, #0x1c]\n    ldr r0, [r5, #0x20]\n    add r2, r1, r0\n    mov r1, #1\n    lsl r1, r1, #0xe\n    str r2, [r5, #0x1c]\n    cmp r2, r1\n    blt _021FE928\n    str r1, [r5, #0x1c]\n    ldr r0, [r5, #0x20]\n    neg r0, r0\n    str r0, [r5, #0x20]\n    b _021FE936\n    lsr r0, r1, #2\n    cmp r2, r0\n    bgt _021FE936\n    str r0, [r5, #0x1c]\n    ldr r0, [r5, #0x20]\n    neg r0, r0\n    str r0, [r5, #0x20]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    mov r0, #1\n    ldr r1, [r5, #0x1c]\n    lsl r0, r0, #0xe\n    add r1, r1, r0\n    str r1, [sp, #0x10]\n    str r0, [sp, #0x14]\n    add r0, r4, #0\n    add r1, sp, #0xc\n    bl sub_0205F9A0\n    add r0, r4, #0\n    add r1, sp, #0\n    bl MapObject_CopyPositionVector\n    mov r0, #1\n    ldr r1, [r5, #0x1c]\n    lsl r0, r0, #0xc\n    sub r0, r1, r0\n    ldr r2, [sp, #4]\n    add r1, sp, #0\n    add r0, r2, r0\n    str r0, [sp, #4]\n    add r0, r6, #0\n    bl sub_02068DA8\n    add sp, #0x18\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov01_021FE970(void) {
    /* Original at 0x021FE970 */
    /* Requires manual decompilation - 58 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0x3c\n    add r3, r1, #0\n    add r6, r0, #0\n    ldr r0, [r3]\n    cmp r0, #1\n    beq _021FE9E6\n    mov r0, #0\n    ldr r1, [r3, #8]\n    mvn r0, r0\n    cmp r1, r0\n    beq _021FE9E6\n    ldr r0, [r3, #0x14]\n    ldr r5, _021FE9EC ; =ov01_022090C4\n    add r0, r0, #1\n    str r0, [r3, #0x14]\n    ldmia r5!, {r0, r1}\n    add r4, sp, #0\n    stmia r4!, {r0, r1}\n    ldr r0, [r5]\n    mov r2, #0\n    str r0, [r4]\n    ldr r4, [r3, #0x2c]\n    ldr r0, [r3, #8]\n    add r4, #0x18\n    cmp r0, #3\n    bhi _021FE9C4\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _021FE9B2: ; jump table\n    mov r2, #0xb4\n    b _021FE9C4\n    ldr r2, _021FE9F0 ; =0x0000010E\n    b _021FE9C4\n    mov r2, #0x5a\n    mov r1, #0\n    lsl r2, r2, #0x10\n    add r0, sp, #0x18\n    lsr r2, r2, #0x10\n    add r3, r1, #0\n    bl sub_02020DA4\n    add r0, r6, #0\n    add r1, sp, #0xc\n    bl sub_02068DB8\n    add r0, r4, #0\n    add r1, sp, #0xc\n    add r2, sp, #0\n    add r3, sp, #0x18\n    bl sub_020699AC\n    add sp, #0x3c\n    pop {r3, r4, r5, r6, pc}\n    nop\n    _021FE9EC: .word ov01_022090C4\n    _021FE9F0: .word 0x0000010E"
    );
    #endif
}

void ov01_021FE9F4(void) {
    sub_02068D74(1);
}
