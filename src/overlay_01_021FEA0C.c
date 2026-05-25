/* Decompiled from asm/overlay_01_021FEA0C.s */
#include "global.h"

void ov01_021FEA0C(void) {
    ov01_021F1430(0x7c, 0);
}

void ov01_021FEA20(void) {
    ov01_021FEA7C();
    ov01_021F1448(r4);
}

void ov01_021FEA30(void) {
    /* Original at 0x021FEA30 */
    /* Requires manual decompilation - 4 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, [r0]\n    add r1, r1, #1\n    str r1, [r0]\n    bx lr"
    );
    #endif
}

void ov01_021FEA38(void) {
    GF_AssertFail();
}

void ov01_021FEA48(void) {
    /* Original at 0x021FEA48 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    add r4, r0, #0\n    ldr r0, [r4, #4]\n    cmp r0, #0\n    bne _021FEA76\n    mov r0, #1\n    str r0, [sp]\n    add r1, r4, #0\n    ldr r0, [r4, #0x10]\n    add r1, #0x14\n    mov r2, #0\n    mov r3, #0x57\n    bl ov01_021F19F4\n    add r0, r4, #0\n    add r1, r4, #0\n    add r0, #0x28\n    add r1, #0x14\n    bl sub_02069978\n    mov r0, #1\n    str r0, [r4, #4]\n    add sp, #4\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov01_021FEA7C(void) {
    sub_02069784(0);
}

void ov01_021FEA90(void) {
    ov01_021FEA48();
}

void ov01_021FEAA0(void) {
    ov01_021FEA7C();
}

void ov01_021FEAB0(void) {
    /* Original at 0x021FEAB0 */
    /* Requires manual decompilation - 56 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x2c\n    add r6, r1, #0\n    add r7, r2, #0\n    add r2, sp, #0xc\n    mov r1, #0\n    str r1, [r2]\n    str r1, [r2, #4]\n    str r3, [sp, #8]\n    add r5, r0, #0\n    str r1, [r2, #8]\n    bl ov01_021F146C\n    add r4, r0, #0\n    ldr r0, [sp, #8]\n    str r4, [sp, #0x1c]\n    str r0, [sp, #0x18]\n    add r0, r5, #0\n    bl MapObject_GetFieldSystem\n    str r0, [sp, #0x20]\n    add r0, r4, #0\n    mov r1, #5\n    bl ov01_021F1450\n    str r0, [sp, #0x24]\n    ldr r0, [sp, #0x40]\n    str r5, [sp, #0x28]\n    cmp r0, #0\n    bne _021FEB06\n    mov r0, #2\n    lsl r1, r6, #0x10\n    lsl r0, r0, #0xe\n    add r1, r1, r0\n    str r1, [sp, #0xc]\n    lsl r1, r7, #0x10\n    add r0, r1, r0\n    str r0, [sp, #0x14]\n    ldr r0, [sp, #0x20]\n    add r1, sp, #0xc\n    bl sub_0206121C\n    b _021FEB0E\n    add r0, r5, #0\n    add r1, sp, #0xc\n    bl MapObject_CopyPositionVector\n    add r0, r5, #0\n    mov r1, #2\n    bl MapObject_GetPriorityPlusValue\n    add r1, sp, #0x18\n    str r1, [sp]\n    str r0, [sp, #4]\n    ldr r1, _021FEB2C ; =ov01_022090FC\n    ldr r3, [sp, #0x40]\n    add r0, r4, #0\n    add r2, sp, #0xc\n    bl ov01_021F1620\n    add sp, #0x2c\n    pop {r4, r5, r6, r7, pc}\n    _021FEB2C: .word ov01_022090FC"
    );
    #endif
}

void ov01_021FEB30(void) {
    sub_02068D74();
}

void ov01_021FEB3C(void) {
    /* Original at 0x021FEB3C */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl sub_02068D98\n    add r2, r0, #0\n    add r6, r2, #0\n    add r3, r4, #0\n    ldmia r6!, {r0, r1}\n    add r3, #0x10\n    stmia r3!, {r0, r1}\n    ldmia r6!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r6]\n    str r0, [r3]\n    ldr r0, [r2]\n    str r0, [r4, #4]\n    add r0, r5, #0\n    bl sub_02068D90\n    str r0, [r4, #0xc]\n    ldr r0, [r4, #0x1c]\n    bl ov01_021FEA90\n    ldr r0, [r4, #0x1c]\n    bl ov01_021FEA30\n    mov r0, #1\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov01_021FEB78(void) {
    ov01_021FEA38(*((u32*)(r1 + 0x1c)));
    ov01_021FEAA0(*((u32*)(r4 + 0x1c)));
}

void ov01_021FEB8C(void) {
    /* Original at 0x021FEB8C */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x18\n    add r5, r0, #0\n    ldr r0, [r1, #0xc]\n    ldr r4, [r1, #0x20]\n    cmp r0, #0\n    beq _021FEBBA\n    add r1, sp, #0xc\n    mov r0, #0\n    str r0, [r1]\n    str r0, [r1, #4]\n    str r0, [r1, #8]\n    add r0, r4, #0\n    bl sub_0205F9A0\n    add r0, r4, #0\n    add r1, sp, #0\n    bl MapObject_CopyPositionVector\n    add r0, r5, #0\n    add r1, sp, #0\n    bl sub_02068DA8\n    add sp, #0x18\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_021FEBC0(void) {
    /* Original at 0x021FEBC0 */
    /* Requires manual decompilation - 52 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0x3c\n    add r3, r1, #0\n    add r6, r0, #0\n    ldr r0, [r3]\n    cmp r0, #1\n    beq _021FEC2C\n    ldr r0, [r3, #8]\n    ldr r5, _021FEC30 ; =ov01_022090F0\n    add r0, r0, #1\n    str r0, [r3, #8]\n    ldmia r5!, {r0, r1}\n    add r4, sp, #0\n    stmia r4!, {r0, r1}\n    ldr r0, [r5]\n    mov r2, #0\n    str r0, [r4]\n    ldr r4, [r3, #0x1c]\n    ldr r0, [r3, #4]\n    add r4, #0x28\n    cmp r0, #3\n    bhi _021FEC0A\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _021FEBF8: ; jump table\n    mov r2, #0xb4\n    b _021FEC0A\n    ldr r2, _021FEC34 ; =0x0000010E\n    b _021FEC0A\n    mov r2, #0x5a\n    mov r1, #0\n    lsl r2, r2, #0x10\n    add r0, sp, #0x18\n    lsr r2, r2, #0x10\n    add r3, r1, #0\n    bl sub_02020DA4\n    add r0, r6, #0\n    add r1, sp, #0xc\n    bl sub_02068DB8\n    add r0, r4, #0\n    add r1, sp, #0xc\n    add r2, sp, #0\n    add r3, sp, #0x18\n    bl sub_020699AC\n    add sp, #0x3c\n    pop {r3, r4, r5, r6, pc}\n    _021FEC30: .word ov01_022090F0\n    _021FEC34: .word 0x0000010E"
    );
    #endif
}
