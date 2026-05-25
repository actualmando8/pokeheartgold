/* Decompiled from asm/overlay_01_022001E4.s */
#include "global.h"

void ov01_022001E4(void) {
    ov01_021F1430(0x14, 0);
}

void ov01_022001F8(void) {
    ov01_022002FC();
    ov01_021F1448(r4);
}

void ov01_02200208(void) {
    /* Original at 0x02200208 */
    /* Requires manual decompilation - 4 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, [r0]\n    add r1, r1, #1\n    str r1, [r0]\n    bx lr"
    );
    #endif
}

void ov01_02200210(void) {
    GF_AssertFail();
}

void ov01_02200220(void) {
    /* Original at 0x02200220 */
    /* Requires manual decompilation - 4 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, [r0, #4]\n    add r1, r1, #1\n    str r1, [r0, #4]\n    bx lr"
    );
    #endif
}

void ov01_02200228(void) {
    GF_AssertFail();
}

void ov01_02200238(void) {
    /* Original at 0x02200238 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    cmp r1, #0\n    bne _02200244\n    bl ov01_02200208\n    pop {r3, pc}\n    bl ov01_02200220\n    pop {r3, pc}"
    );
    #endif
}

void ov01_0220024C(void) {
    /* Original at 0x0220024C */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    cmp r1, #0\n    bne _02200258\n    bl ov01_02200210\n    pop {r3, pc}\n    bl ov01_02200228\n    pop {r3, pc}"
    );
    #endif
}

void ov01_02200260(void) {
    /* Original at 0x02200260 */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    ldr r0, [r4, #8]\n    cmp r0, #0\n    bne _022002A4\n    mov r1, #1\n    str r1, [r4, #8]\n    ldr r0, [r4, #0x10]\n    mov r2, #0x76\n    bl ov01_021F18D4\n    ldr r0, [r4, #0x10]\n    mov r1, #1\n    mov r2, #0x8c\n    bl ov01_021F1908\n    mov r1, #1\n    ldr r0, [r4, #0x10]\n    mov r2, #0x11\n    add r3, r1, #0\n    bl ov01_021F1930\n    mov r1, #1\n    str r1, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    ldr r0, _022002A8 ; =ov01_022092F0\n    add r2, r1, #0\n    str r0, [sp, #8]\n    ldr r0, [r4, #0x10]\n    add r3, r1, #0\n    bl ov01_021F1758\n    add sp, #0xc\n    pop {r3, r4, pc}\n    _022002A8: .word ov01_022092F0"
    );
    #endif
}

void ov01_022002AC(void) {
    /* Original at 0x022002AC */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    ldr r0, [r4, #0xc]\n    cmp r0, #0\n    bne _022002F4\n    mov r0, #1\n    str r0, [r4, #0xc]\n    ldr r0, [r4, #0x10]\n    mov r1, #0xa\n    mov r2, #0x7d\n    bl ov01_021F18D4\n    ldr r0, [r4, #0x10]\n    mov r1, #0xa\n    mov r2, #0x8c\n    bl ov01_021F1908\n    ldr r0, [r4, #0x10]\n    mov r1, #0xb\n    mov r2, #0x18\n    mov r3, #1\n    bl ov01_021F1930\n    mov r0, #0xb\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    ldr r0, _022002F8 ; =ov01_022092F0\n    mov r2, #0xa\n    str r0, [sp, #8]\n    ldr r0, [r4, #0x10]\n    mov r1, #0xc\n    add r3, r2, #0\n    bl ov01_021F1758\n    add sp, #0xc\n    pop {r3, r4, pc}\n    _022002F8: .word ov01_022092F0"
    );
    #endif
}

void ov01_022002FC(void) {
    /* Original at 0x022002FC */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #8]\n    cmp r0, #1\n    bne _0220032A\n    mov r0, #0\n    str r0, [r4, #8]\n    ldr r0, [r4, #0x10]\n    mov r1, #1\n    bl ov01_021F18FC\n    ldr r0, [r4, #0x10]\n    mov r1, #1\n    bl ov01_021F1924\n    ldr r0, [r4, #0x10]\n    mov r1, #1\n    bl ov01_021F1970\n    ldr r0, [r4, #0x10]\n    mov r1, #1\n    bl ov01_021F18C8\n    pop {r4, pc}"
    );
    #endif
}

void ov01_0220032C(void) {
    /* Original at 0x0220032C */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0xc]\n    cmp r0, #1\n    bne _0220035A\n    mov r0, #0\n    str r0, [r4, #0xc]\n    ldr r0, [r4, #0x10]\n    mov r1, #0xa\n    bl ov01_021F18FC\n    ldr r0, [r4, #0x10]\n    mov r1, #0xa\n    bl ov01_021F1924\n    ldr r0, [r4, #0x10]\n    mov r1, #0xb\n    bl ov01_021F1970\n    ldr r0, [r4, #0x10]\n    mov r1, #0xc\n    bl ov01_021F18C8\n    pop {r4, pc}"
    );
    #endif
}

void ov01_0220035C(void) {
    ov01_02200260();
}

void ov01_0220036C(void) {
    ov01_022002AC();
}

void ov01_0220037C(void) {
    ov01_022002FC();
}

void ov01_0220038C(void) {
    ov01_0220032C();
}

void ov01_0220039C(void) {
    /* Original at 0x0220039C */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    cmp r1, #0\n    bne _022003A8\n    bl ov01_0220035C\n    pop {r3, pc}\n    bl ov01_0220036C\n    pop {r3, pc}"
    );
    #endif
}

void ov01_022003B0(void) {
    /* Original at 0x022003B0 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    cmp r1, #0\n    bne _022003BC\n    bl ov01_0220037C\n    pop {r3, pc}\n    bl ov01_0220038C\n    pop {r3, pc}"
    );
    #endif
}

void ov01_022003C4(void) {
    /* Original at 0x022003C4 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #8\n    ldr r3, _022003F0 ; =ov01_022092C0\n    add r4, sp, #0\n    ldr r5, [r3]\n    ldr r3, [r3, #4]\n    str r5, [sp]\n    str r3, [sp, #4]\n    lsl r1, r1, #2\n    ldr r1, [r4, r1]\n    bl ov01_021F1740\n    add r4, r0, #0\n    bl sub_02023F90\n    mov r1, #0\n    bl NNS_G3dMdlSetMdlFogEnableFlagAll\n    add r0, r4, #0\n    add sp, #8\n    pop {r3, r4, r5, pc}\n    nop\n    _022003F0: .word ov01_022092C0"
    );
    #endif
}

void ov01_022003F4(void) {
    sub_02068D74();
}

void ov01_02200400(void) {
    /* Original at 0x02200400 */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl sub_02068D74\n    mov r1, #1\n    str r1, [r0, #0x10]\n    ldr r0, [r0, #0x40]\n    cmp r0, #0\n    beq _02200416\n    mov r1, #0\n    bl sub_02023EA4\n    pop {r3, pc}"
    );
    #endif
}

void ov01_02200418(void) {
    /* Original at 0x02200418 */
    /* Requires manual decompilation - 43 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r4, r1, #0\n    add r5, r0, #0\n    bl sub_02068D98\n    add r2, r4, #0\n    add r3, r0, #0\n    add r2, #0x30\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    mov r0, #6\n    lsl r0, r0, #0xc\n    str r0, [r4, #0x28]\n    ldr r0, [r4, #0x38]\n    ldr r1, [r4, #0x30]\n    bl ov01_0220039C\n    add r0, r5, #0\n    add r1, sp, #0\n    bl sub_02068DB8\n    ldr r0, [r4, #0x34]\n    ldr r1, [r4, #0x30]\n    add r2, sp, #0\n    bl ov01_022003C4\n    str r0, [r4, #0x40]\n    ldr r0, [r4, #0x38]\n    ldr r1, [r4, #0x30]\n    bl ov01_02200238\n    ldr r0, [r4, #0x40]\n    mov r1, #0\n    bl sub_02023EA4\n    add r0, r5, #0\n    bl sub_02068D90\n    cmp r0, #1\n    bne _02200474\n    ldr r0, _0220047C ; =SEQ_SE_DP_DECIDE\n    bl PlaySE\n    mov r0, #1\n    add sp, #0xc\n    pop {r4, r5, pc}\n    nop\n    _0220047C: .word SEQ_SE_DP_DECIDE"
    );
    #endif
}

void ov01_02200480(void) {
    /* Original at 0x02200480 */
    /* Requires manual decompilation - 50 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r4, r1, #0\n    add r1, sp, #0\n    add r5, r0, #0\n    bl sub_02068DB8\n    ldr r0, [r4]\n    cmp r0, #0\n    beq _0220049C\n    cmp r0, #1\n    beq _022004C6\n    cmp r0, #2\n    b _022004DE\n    ldr r0, [r4, #0x40]\n    mov r1, #1\n    bl sub_02023EA4\n    ldr r1, [r4, #0x1c]\n    ldr r0, [r4, #0x28]\n    add r0, r1, r0\n    str r0, [r4, #0x1c]\n    beq _022004BA\n    mov r0, #2\n    ldr r1, [r4, #0x28]\n    lsl r0, r0, #0xc\n    sub r0, r1, r0\n    str r0, [r4, #0x28]\n    b _022004DE\n    mov r0, #0\n    str r0, [r4, #0x28]\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _022004DE\n    ldr r0, [r4, #4]\n    add r0, r0, #1\n    str r0, [r4, #4]\n    cmp r0, #0x1e\n    blt _022004DE\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    mov r0, #0\n    str r0, [r4, #4]\n    mov r0, #1\n    str r0, [r4, #0x14]\n    add r0, r5, #0\n    add r1, sp, #0\n    bl sub_02068DA8\n    add sp, #0xc\n    pop {r4, r5, pc}"
    );
    #endif
}

void ov01_022004EC(void) {
    sub_02023DA4(*((u32*)(r1 + 0x40)));
    ov01_0220024C(*((u32*)(r4 + 0x38)), *((u32*)(r4 + 0x30)));
    ov01_022003B0(*((u32*)(r4 + 0x38)), *((u32*)(r4 + 0x30)));
}

void ov01_02200508(void) {
    /* Original at 0x02200508 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r1, #0\n    ldr r1, [r4, #0x10]\n    cmp r1, #1\n    beq _0220053A\n    add r1, sp, #0\n    bl sub_02068DB8\n    ldr r1, [sp]\n    ldr r0, [r4, #0x18]\n    add r0, r1, r0\n    str r0, [sp]\n    ldr r1, [sp, #4]\n    ldr r0, [r4, #0x1c]\n    add r0, r1, r0\n    str r0, [sp, #4]\n    ldr r1, [sp, #8]\n    ldr r0, [r4, #0x20]\n    add r0, r1, r0\n    str r0, [sp, #8]\n    ldr r0, [r4, #0x40]\n    add r1, sp, #0\n    bl sub_02023E50\n    add sp, #0xc\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov01_02200540(void) {
    /* Original at 0x02200540 */
    /* Requires manual decompilation - 38 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x30\n    add r5, r0, #0\n    add r6, r1, #0\n    add r7, r2, #0\n    bl ov01_021F146C\n    add r4, r0, #0\n    mov r1, #9\n    str r6, [sp, #0x20]\n    str r4, [sp, #0x24]\n    bl ov01_021F1450\n    str r0, [sp, #0x28]\n    add r0, r5, #0\n    add r1, sp, #0x14\n    str r5, [sp, #0x2c]\n    bl MapObject_CopyPositionVector\n    add r0, r5, #0\n    add r1, sp, #8\n    bl MapObject_CopyFacingVector\n    add r0, sp, #0x14\n    add r1, sp, #8\n    add r2, r0, #0\n    bl VEC_Add\n    add r0, r5, #0\n    bl MapObject_GetPriority\n    add r1, r0, #1\n    add r0, sp, #0x20\n    str r0, [sp]\n    str r1, [sp, #4]\n    ldr r1, _02200598 ; =ov01_022092DC\n    add r0, r4, #0\n    add r2, sp, #0x14\n    add r3, r7, #0\n    bl ov01_021F1620\n    add sp, #0x30\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02200598: .word ov01_022092DC"
    );
    #endif
}

void ov01_0220059C(void) {
    /* Original at 0x0220059C */
    /* Requires manual decompilation - 49 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r4, r1, #0\n    add r5, r0, #0\n    bl sub_02068D98\n    add r2, r4, #0\n    add r3, r0, #0\n    add r2, #0x30\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldr r0, [r4, #0x3c]\n    bl MapObject_GetID\n    str r0, [r4, #8]\n    ldr r0, [r4, #0x3c]\n    bl MapObject_GetMapID\n    str r0, [r4, #0xc]\n    mov r0, #6\n    lsl r0, r0, #0xc\n    str r0, [r4, #0x28]\n    ldr r0, [r4, #0x38]\n    ldr r1, [r4, #0x30]\n    bl ov01_0220039C\n    add r0, r5, #0\n    add r1, sp, #0\n    bl sub_02068DB8\n    ldr r0, [r4, #0x34]\n    ldr r1, [r4, #0x30]\n    add r2, sp, #0\n    bl ov01_022003C4\n    str r0, [r4, #0x40]\n    ldr r0, [r4, #0x38]\n    ldr r1, [r4, #0x30]\n    bl ov01_02200238\n    ldr r0, [r4, #0x40]\n    mov r1, #0\n    bl sub_02023EA4\n    add r0, r5, #0\n    bl sub_02068D90\n    cmp r0, #1\n    bne _02200608\n    ldr r0, _02200610 ; =SEQ_SE_DP_DECIDE\n    bl PlaySE\n    mov r0, #1\n    add sp, #0xc\n    pop {r4, r5, pc}\n    nop\n    _02200610: .word SEQ_SE_DP_DECIDE"
    );
    #endif
}

void ov01_02200614(void) {
    /* Original at 0x02200614 */
    /* Requires manual decompilation - 68 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0xc\n    add r4, r1, #0\n    ldr r6, [r4, #0x3c]\n    ldr r1, [r4, #8]\n    add r5, r0, #0\n    ldr r2, [r4, #0xc]\n    add r0, r6, #0\n    bl sub_0205F0A8\n    cmp r0, #0\n    bne _02200630\n    bl GF_AssertFail\n    add r0, r6, #0\n    add r1, sp, #0\n    bl ov01_021F93AC\n    mov r0, #2\n    ldr r1, [sp, #4]\n    lsl r0, r0, #0x10\n    add r1, r1, r0\n    str r1, [sp, #4]\n    ldr r1, [sp, #8]\n    lsr r0, r0, #5\n    add r0, r1, r0\n    str r0, [sp, #8]\n    ldr r0, [r4]\n    cmp r0, #0\n    beq _02200658\n    cmp r0, #1\n    beq _02200682\n    cmp r0, #2\n    b _0220069A\n    ldr r0, [r4, #0x40]\n    mov r1, #1\n    bl sub_02023EA4\n    ldr r1, [r4, #0x1c]\n    ldr r0, [r4, #0x28]\n    add r0, r1, r0\n    str r0, [r4, #0x1c]\n    beq _02200676\n    mov r0, #2\n    ldr r1, [r4, #0x28]\n    lsl r0, r0, #0xc\n    sub r0, r1, r0\n    str r0, [r4, #0x28]\n    b _0220069A\n    mov r0, #0\n    str r0, [r4, #0x28]\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _0220069A\n    ldr r0, [r4, #4]\n    add r0, r0, #1\n    str r0, [r4, #4]\n    cmp r0, #0x1e\n    blt _0220069A\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    mov r0, #0\n    str r0, [r4, #4]\n    mov r0, #1\n    str r0, [r4, #0x14]\n    add r0, r5, #0\n    add r1, sp, #0\n    bl sub_02068DA8\n    add sp, #0xc\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}
