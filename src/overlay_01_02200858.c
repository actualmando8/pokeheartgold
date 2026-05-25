/* Decompiled from asm/overlay_01_02200858.s */
#include "global.h"

void ov01_02200858(void) {
    /* Original at 0x02200858 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    mov r2, #0\n    mov r1, #0x6c\n    add r3, r2, #0\n    add r5, r0, #0\n    bl ov01_021F1430\n    add r4, r0, #0\n    str r5, [r4]\n    bl ov01_02200884\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_02200874(void) {
    ov01_022008A8();
    ov01_021F1448(r4);
}

void ov01_02200884(void) {
    /* Original at 0x02200884 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    mov r2, #0\n    add r4, r0, #0\n    str r2, [sp]\n    ldr r0, [r4]\n    add r1, r4, #4\n    mov r3, #0x55\n    bl ov01_021F19F4\n    add r0, r4, #0\n    add r0, #0x18\n    add r1, r4, #4\n    bl sub_02069978\n    add sp, #4\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov01_022008A8(void) {
    sub_02069784();
}

void ov01_022008B4(void) {
    /* Original at 0x022008B4 */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x20\n    add r2, sp, #8\n    mov r1, #0\n    str r1, [r2]\n    str r1, [r2, #4]\n    add r5, r0, #0\n    str r1, [r2, #8]\n    bl PlayerAvatar_GetMapObject\n    add r4, r0, #0\n    bl ov01_021F146C\n    add r6, r0, #0\n    mov r1, #3\n    str r6, [sp, #0x14]\n    bl ov01_021F1450\n    str r0, [sp, #0x18]\n    add r0, r4, #0\n    mov r1, #2\n    str r5, [sp, #0x1c]\n    bl MapObject_GetPriorityPlusValue\n    add r1, sp, #0x14\n    str r1, [sp]\n    str r0, [sp, #4]\n    ldr r1, _022008FC ; =ov01_02209340\n    add r0, r6, #0\n    add r2, sp, #8\n    mov r3, #0\n    bl ov01_021F1620\n    add sp, #0x20\n    pop {r4, r5, r6, pc}\n    nop\n    _022008FC: .word ov01_02209340"
    );
    #endif
}

void ov01_02200900(void) {
    /* Original at 0x02200900 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r1, #0\n    bl sub_02068D98\n    add r4, r0, #0\n    add r3, r4, #0\n    add r2, r5, #0\n    ldmia r3!, {r0, r1}\n    add r2, #0x24\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    str r0, [r2]\n    ldr r0, [r4, #8]\n    bl PlayerAvatar_GetMapObject\n    mov r1, #0\n    mvn r1, r1\n    add r4, r0, #0\n    str r1, [r5, #4]\n    bl MapObject_GetID\n    str r0, [r5, #0x14]\n    add r0, r4, #0\n    bl MapObject_GetMapID\n    str r0, [r5, #0x18]\n    mov r0, #1\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_02200938(void) {
    /* Original at 0x02200938 */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void ov01_0220093C(void) {
    /* Original at 0x0220093C */
    /* Requires manual decompilation - 89 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x24\n    add r5, r1, #0\n    str r0, [sp]\n    ldr r0, [r5, #0x2c]\n    str r0, [sp, #4]\n    bl PlayerAvatar_GetMapObject\n    ldr r1, [r5, #0x14]\n    ldr r2, [r5, #0x18]\n    add r6, r0, #0\n    bl sub_0205F0A8\n    cmp r0, #0\n    bne _02200964\n    ldr r0, [sp]\n    bl ov01_021F1640\n    add sp, #0x24\n    pop {r4, r5, r6, r7, pc}\n    ldr r7, [r5, #4]\n    add r0, r6, #0\n    bl sub_0205F504\n    strb r0, [r5, #8]\n    ldrb r0, [r5, #8]\n    bl ov01_02200AB0\n    str r0, [r5, #4]\n    mov r0, #0\n    str r0, [r5]\n    ldr r4, [r5, #4]\n    sub r0, r0, #1\n    cmp r4, r0\n    beq _0220098C\n    ldr r0, [sp, #4]\n    bl PlayerAvatar_GetFacingDirection\n    cmp r4, r0\n    beq _0220099A\n    mov r0, #0\n    str r0, [r5, #0x1c]\n    str r0, [r5, #0x20]\n    mov r0, #1\n    add sp, #0x24\n    str r0, [r5]\n    pop {r4, r5, r6, r7, pc}\n    cmp r7, r4\n    beq _022009A4\n    mov r0, #0\n    str r0, [r5, #0x1c]\n    str r0, [r5, #0x20]\n    add r0, r6, #0\n    bl MapObject_GetXCoord\n    add r4, r0, #0\n    ldr r0, [r5, #4]\n    bl GetDeltaXByFacingDirection\n    add r7, r0, #0\n    add r0, r6, #0\n    bl MapObject_GetZCoord\n    str r0, [sp, #8]\n    ldr r0, [r5, #4]\n    bl GetDeltaYByFacingDirection\n    add r2, r0, #0\n    ldr r1, [sp, #8]\n    add r0, r4, r7\n    add r1, r1, r2\n    add r2, sp, #0xc\n    bl sub_020611C8\n    add r0, r6, #0\n    add r1, sp, #0x18\n    bl MapObject_CopyPositionVector\n    ldr r0, [sp, #0x1c]\n    add r1, sp, #0xc\n    str r0, [sp, #0x10]\n    ldr r0, [sp]\n    bl sub_02068DA8\n    ldr r0, [r5, #0x1c]\n    add r0, r0, #1\n    str r0, [r5, #0x1c]\n    cmp r0, #0xf\n    ble _02200A04\n    mov r0, #0\n    str r0, [r5, #0x1c]\n    ldr r0, [r5, #0x20]\n    add r0, r0, #1\n    lsr r2, r0, #0x1f\n    lsl r1, r0, #0x1f\n    sub r1, r1, r2\n    mov r0, #0x1f\n    ror r1, r0\n    add r0, r2, r1\n    str r0, [r5, #0x20]\n    add sp, #0x24\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_02200A08(void) {
    /* Original at 0x02200A08 */
    /* Requires manual decompilation - 76 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x3c\n    add r3, r1, #0\n    add r6, r0, #0\n    ldr r0, [r3]\n    cmp r0, #1\n    beq _02200AA4\n    mov r0, #0\n    ldr r1, [r3, #4]\n    mvn r0, r0\n    cmp r1, r0\n    beq _02200AA4\n    ldr r5, _02200AA8 ; =ov01_02209334\n    add r4, sp, #0\n    ldmia r5!, {r0, r1}\n    stmia r4!, {r0, r1}\n    ldr r0, [r5]\n    mov r7, #0x18\n    str r0, [r4]\n    ldr r1, [r3, #4]\n    ldr r4, _02200AAC ; =ov01_02209354\n    add r0, r1, #0\n    mul r0, r7\n    add r0, r4, r0\n    ldr r5, [r3, #0x28]\n    ldr r4, [r3, #0x20]\n    mov r3, #0xc\n    mul r3, r4\n    mov r2, #0\n    add r5, #0x18\n    add r4, r0, r3\n    cmp r1, #3\n    bhi _02200A6A\n    add r0, r1, r1\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02200A56: ; jump table\n    mov r2, #0xb4\n    b _02200A6A\n    add r2, r7, #0\n    add r2, #0xf6\n    b _02200A6A\n    mov r2, #0x5a\n    mov r1, #0\n    lsl r2, r2, #0x10\n    add r0, sp, #0x18\n    lsr r2, r2, #0x10\n    add r3, r1, #0\n    bl sub_02020DA4\n    add r0, r6, #0\n    add r1, sp, #0xc\n    bl sub_02068DB8\n    ldr r1, [sp, #0xc]\n    ldr r0, [r4]\n    add r2, sp, #0\n    add r0, r1, r0\n    str r0, [sp, #0xc]\n    ldr r1, [sp, #0x10]\n    ldr r0, [r4, #4]\n    add r3, sp, #0x18\n    add r0, r1, r0\n    str r0, [sp, #0x10]\n    ldr r1, [sp, #0x14]\n    ldr r0, [r4, #8]\n    add r0, r1, r0\n    str r0, [sp, #0x14]\n    add r0, r5, #0\n    add r1, sp, #0xc\n    bl sub_020699AC\n    add sp, #0x3c\n    pop {r4, r5, r6, r7, pc}\n    _02200AA8: .word ov01_02209334\n    _02200AAC: .word ov01_02209354"
    );
    #endif
}

void ov01_02200AB0(void) {
    /* Original at 0x02200AB0 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl sub_0205B730\n    cmp r0, #0\n    beq _02200AC0\n    mov r0, #0\n    pop {r4, pc}\n    add r0, r4, #0\n    bl sub_0205B73C\n    cmp r0, #0\n    beq _02200ACE\n    mov r0, #1\n    pop {r4, pc}\n    add r0, r4, #0\n    bl sub_0205B724\n    cmp r0, #0\n    beq _02200ADC\n    mov r0, #2\n    pop {r4, pc}\n    add r0, r4, #0\n    bl sub_0205B718\n    cmp r0, #0\n    beq _02200AEA\n    mov r0, #3\n    pop {r4, pc}\n    mov r0, #0\n    mvn r0, r0\n    pop {r4, pc}"
    );
    #endif
}
