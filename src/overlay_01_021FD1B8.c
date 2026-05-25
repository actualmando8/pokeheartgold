/* Decompiled from asm/overlay_01_021FD1B8.s */
#include "global.h"

void ov01_021FD1B8(void) {
    ov01_021F1430(0xc, 0);
}

void ov01_021FD1CC(void) {
    /* Original at 0x021FD1CC */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov01_021FD21C\n    ldr r0, [r4, #8]\n    cmp r0, #0\n    beq _021FD1DE\n    bl ov01_021F1448\n    add r0, r4, #0\n    bl ov01_021F1448\n    pop {r4, pc}"
    );
    #endif
}

void ov01_021FD1E8(void) {
    /* Original at 0x021FD1E8 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r2, #0\n    str r1, [r5]\n    mov r2, #0\n    add r0, r3, #0\n    add r1, r5, #4\n    add r3, r4, #0\n    str r2, [sp]\n    bl ov01_021F19F4\n    add r0, r5, #0\n    add r0, #0x18\n    add r1, r5, #4\n    bl sub_02069978\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_021FD20C(void) {
    /* Original at 0x021FD20C */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _021FD214 ; =0x0000FFFF\n    ldr r3, _021FD218 ; =sub_02069784\n    stmia r0!, {r1}\n    bx r3\n    _021FD214: .word 0x0000FFFF\n    _021FD218: .word sub_02069784"
    );
    #endif
}

void ov01_021FD21C(void) {
    /* Original at 0x021FD21C */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    ldr r6, [r0, #4]\n    mov r4, #0\n    ldr r5, [r0, #8]\n    cmp r6, #0\n    bls _021FD23E\n    ldr r7, _021FD240 ; =0x0000FFFF\n    ldr r0, [r5]\n    cmp r0, r7\n    beq _021FD236\n    add r0, r5, #0\n    bl ov01_021FD20C\n    add r4, r4, #1\n    add r5, #0x6c\n    cmp r4, r6\n    blo _021FD22A\n    pop {r3, r4, r5, r6, r7, pc}\n    _021FD240: .word 0x0000FFFF"
    );
    #endif
}

void ov01_021FD244(void) {
    /* Original at 0x021FD244 */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, [r0, #4]\n    ldr r0, [r0, #8]\n    ldr r2, [r0]\n    cmp r2, r1\n    beq _021FD256\n    add r0, #0x6c\n    sub r3, r3, #1\n    bne _021FD248\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void ov01_021FD258(void) {
    /* Original at 0x021FD258 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r1, #0\n    mov r1, #0x14\n    add r6, r0, #0\n    bl ov01_021F1450\n    add r4, r0, #0\n    cmp r5, #0\n    bne _021FD26E\n    bl GF_AssertFail\n    mov r1, #0x6c\n    mov r2, #0\n    add r0, r6, #0\n    mul r1, r5\n    add r3, r2, #0\n    str r5, [r4, #4]\n    bl ov01_021F1430\n    ldr r1, _021FD28C ; =0x0000FFFF\n    str r0, [r4, #8]\n    str r1, [r0]\n    add r0, #0x6c\n    sub r5, r5, #1\n    bne _021FD282\n    pop {r4, r5, r6, pc}\n    _021FD28C: .word 0x0000FFFF"
    );
    #endif
}

void ov01_021FD290(void) {
    /* Original at 0x021FD290 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r4, r1, #0\n    mov r1, #0x14\n    add r5, r0, #0\n    add r6, r2, #0\n    bl ov01_021F1450\n    add r1, r4, #0\n    add r7, r0, #0\n    bl ov01_021FD244\n    cmp r0, #0\n    bne _021FD2C6\n    ldr r1, _021FD2C8 ; =0x0000FFFF\n    add r0, r7, #0\n    bl ov01_021FD244\n    cmp r0, #0\n    bne _021FD2BC\n    bl GF_AssertFail\n    pop {r3, r4, r5, r6, r7, pc}\n    add r1, r4, #0\n    add r2, r6, #0\n    add r3, r5, #0\n    bl ov01_021FD1E8\n    pop {r3, r4, r5, r6, r7, pc}\n    _021FD2C8: .word 0x0000FFFF"
    );
    #endif
}

void ov01_021FD2CC(void) {
    /* Original at 0x021FD2CC */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    mov r1, #0x14\n    bl ov01_021F1450\n    add r1, r4, #0\n    bl ov01_021FD244\n    add r4, r0, #0\n    bne _021FD2E4\n    bl GF_AssertFail\n    add r4, #0x18\n    add r0, r4, #0\n    pop {r4, pc}"
    );
    #endif
}

void ov01_021FD2EC(void) {
    /* Original at 0x021FD2EC */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0x14\n    add r5, r0, #0\n    add r6, r1, #0\n    bl ov01_021F146C\n    add r4, r0, #0\n    add r0, r5, #0\n    bl MapObject_GetSpriteID\n    str r0, [sp, #8]\n    add r0, r5, #0\n    mov r1, #2\n    str r4, [sp, #0xc]\n    str r5, [sp, #0x10]\n    bl MapObject_GetPriorityPlusValue\n    add r1, sp, #8\n    str r1, [sp]\n    str r0, [sp, #4]\n    ldr r1, _021FD324 ; =ov01_02208E1C\n    add r0, r4, #0\n    add r2, r6, #0\n    mov r3, #0\n    bl ov01_021F1620\n    add sp, #0x14\n    pop {r3, r4, r5, r6, pc}\n    _021FD324: .word ov01_02208E1C"
    );
    #endif
}

void ov01_021FD328(void) {
    /* Original at 0x021FD328 */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl sub_02068D98\n    add r3, r0, #0\n    add r2, r4, #0\n    ldmia r3!, {r0, r1}\n    add r2, #0x1c\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    str r0, [r2]\n    ldr r0, [r4, #0x24]\n    bl MapObject_GetID\n    str r0, [r4, #4]\n    ldr r0, [r4, #0x20]\n    ldr r1, [r4, #0x1c]\n    bl ov01_021FD2CC\n    str r0, [r4, #0x18]\n    ldr r0, [r4, #0x24]\n    bl MapObject_CheckFlag25\n    cmp r0, #1\n    ldr r0, [r4, #0x24]\n    bne _021FD364\n    bl sub_0205F544\n    b _021FD368\n    bl MapObject_GetMapID\n    str r0, [r4, #8]\n    add r4, #0xc\n    add r0, r5, #0\n    add r1, r4, #0\n    bl sub_02068DB8\n    mov r0, #1\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_021FD378(void) {
    /* Original at 0x021FD378 */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void ov01_021FD37C(void) {
    /* Original at 0x021FD37C */
    /* Requires manual decompilation - 44 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x18\n    add r4, r1, #0\n    ldr r6, [r4, #0x24]\n    ldr r1, [r4, #4]\n    add r5, r0, #0\n    ldr r2, [r4, #8]\n    add r0, r6, #0\n    bl sub_0205F0A8\n    cmp r0, #0\n    bne _021FD39E\n    add r0, r5, #0\n    bl ov01_021F1640\n    add sp, #0x18\n    pop {r4, r5, r6, pc}\n    add r0, r6, #0\n    add r1, sp, #0xc\n    bl MapObject_CopyPositionVector\n    add r0, r6, #0\n    add r1, sp, #0\n    bl MapObject_CopyFacingVector\n    ldr r1, [sp]\n    ldr r0, [r4, #0xc]\n    ldr r2, [sp, #0xc]\n    add r0, r1, r0\n    add r0, r2, r0\n    str r0, [sp, #0xc]\n    ldr r1, [sp, #4]\n    ldr r0, [r4, #0x10]\n    ldr r2, [sp, #0x10]\n    add r0, r1, r0\n    add r0, r2, r0\n    str r0, [sp, #0x10]\n    ldr r1, [sp, #8]\n    ldr r0, [r4, #0x14]\n    ldr r2, [sp, #0x14]\n    add r0, r1, r0\n    add r0, r2, r0\n    str r0, [sp, #0x14]\n    add r0, r5, #0\n    add r1, sp, #0xc\n    bl sub_02068DA8\n    add sp, #0x18\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov01_021FD3E0(void) {
    sub_02068DB8();
    sub_020699BC(*((u32*)(r4 + 0x18)));
}

void ov01_021FD3F8(void) {
    /* Original at 0x021FD3F8 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    mov r5, #0xc\n    add r1, r5, #0\n    add r6, r0, #0\n    ldr r4, _021FD418 ; =ov01_02208E30\n    bl ov01_021FD258\n    ldr r1, [r4]\n    ldr r2, [r4, #4]\n    add r0, r6, #0\n    bl ov01_021FD290\n    add r4, #8\n    sub r5, r5, #1\n    bne _021FD406\n    pop {r4, r5, r6, pc}\n    _021FD418: .word ov01_02208E30"
    );
    #endif
}
