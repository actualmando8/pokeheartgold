/* Decompiled from asm/overlay_80_0222AEF8.s */
#include "global.h"

void ov80_0222AEF8(void) {
    sub_0203769C(0xd9);
}

void ov80_0222AF10(void) {
    /* Original at 0x0222AF10 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _0222AF34 ; =0x000006FC\n    ldr r0, [r4, r0]\n    bl Save_PlayerData_GetProfile\n    ldr r1, _0222AF38 ; =0x0000072C\n    mov r0, #0x22\n    add r1, r4, r1\n    mov r2, #0x2c\n    bl sub_02037030\n    cmp r0, #1\n    bne _0222AF30\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}\n    _0222AF34: .word 0x000006FC\n    _0222AF38: .word 0x0000072C"
    );
    #endif
}

void ov80_0222AF3C(void) {
    sub_0203769C(0xd9);
}

void ov80_0222AF54(void) {
    /* Original at 0x0222AF54 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r1, _0222AF80 ; =0x0000072C\n    mov r3, #0\n    add r1, r0, r1\n    add r4, r1, #0\n    ldrh r2, [r0, #0x18]\n    add r3, r3, #1\n    add r0, r0, #2\n    strh r2, [r4]\n    add r4, r4, #2\n    cmp r3, #0x14\n    blt _0222AF5E\n    mov r0, #0x23\n    mov r2, #0x2c\n    bl sub_02037030\n    cmp r0, #1\n    bne _0222AF7C\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}\n    _0222AF80: .word 0x0000072C"
    );
    #endif
}

void ov80_0222AF84(void) {
    /* Original at 0x0222AF84 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r0, #0\n    mov r0, #0xd9\n    add r4, r3, #0\n    lsl r0, r0, #4\n    ldrb r1, [r4, r0]\n    add r5, r2, #0\n    add r1, r1, #1\n    strb r1, [r4, r0]\n    bl sub_0203769C\n    cmp r6, r0\n    beq _0222AFB6\n    bl sub_0203769C\n    cmp r0, #0\n    beq _0222AFB6\n    mov r1, #0\n    ldrh r0, [r5]\n    add r1, r1, #1\n    add r5, r5, #2\n    strh r0, [r4, #0x18]\n    add r4, r4, #2\n    cmp r1, #0x14\n    blt _0222AFA8\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov80_0222AFB8(void) {
    /* Original at 0x0222AFB8 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    ldr r1, _0222AFE8 ; =0x0000072C\n    mov r2, #0x9a\n    add r1, r0, r1\n    mov r4, #0\n    add r5, r1, #0\n    lsl r2, r2, #2\n    ldrh r3, [r0, r2]\n    add r4, r4, #1\n    add r0, r0, #2\n    strh r3, [r5]\n    add r5, r5, #2\n    cmp r4, #0x14\n    blt _0222AFC6\n    mov r0, #0x24\n    mov r2, #0x2c\n    bl sub_02037030\n    cmp r0, #1\n    bne _0222AFE4\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    _0222AFE8: .word 0x0000072C"
    );
    #endif
}

void ov80_0222AFEC(void) {
    /* Original at 0x0222AFEC */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r0, #0\n    mov r0, #0xd9\n    add r4, r3, #0\n    lsl r0, r0, #4\n    ldrb r1, [r4, r0]\n    add r5, r2, #0\n    add r1, r1, #1\n    strb r1, [r4, r0]\n    bl sub_0203769C\n    cmp r6, r0\n    beq _0222B022\n    bl sub_0203769C\n    cmp r0, #0\n    beq _0222B022\n    mov r0, #0x9a\n    mov r2, #0\n    lsl r0, r0, #2\n    ldrh r1, [r5]\n    add r2, r2, #1\n    add r5, r5, #2\n    strh r1, [r4, r0]\n    add r4, r4, #2\n    cmp r2, #0x14\n    blt _0222B014\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov80_0222B024(void) {
    sub_02037030(0, 0x25, 1, 0x2c);
}

void ov80_0222B048(void) {
    /* Original at 0x0222B048 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    mov r0, #0xd9\n    add r4, r3, #0\n    lsl r0, r0, #4\n    ldrb r1, [r4, r0]\n    add r6, r2, #0\n    add r1, r1, #1\n    strb r1, [r4, r0]\n    bl sub_0203769C\n    cmp r5, r0\n    beq _0222B068\n    ldrh r1, [r6]\n    ldr r0, _0222B06C ; =0x00000D88\n    strb r1, [r4, r0]\n    pop {r4, r5, r6, pc}\n    nop\n    _0222B06C: .word 0x00000D88"
    );
    #endif
}

void ov80_0222B070(void) {
    /* Original at 0x0222B070 */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    bl SizeOfStructPokemon\n    add r4, r0, #0\n    ldr r0, _0222B0B0 ; =0x000006FC\n    ldr r0, [r5, r0]\n    bl SaveArray_Party_Get\n    mov r1, #0x26\n    lsl r1, r1, #4\n    ldrb r1, [r5, r1]\n    bl Party_GetMonByIndex\n    ldr r1, _0222B0B4 ; =0x00000784\n    add r2, r4, #0\n    add r1, r5, r1\n    bl MI_CpuCopy8\n    ldr r1, _0222B0B4 ; =0x00000784\n    mov r2, #2\n    mov r0, #0x26\n    add r1, r5, r1\n    lsl r2, r2, #8\n    bl sub_02036FD8\n    cmp r0, #1\n    bne _0222B0AC\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    _0222B0B0: .word 0x000006FC\n    _0222B0B4: .word 0x00000784"
    );
    #endif
}

void ov80_0222B0B8(void) {
    /* Original at 0x0222B0B8 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    mov r0, #0xd9\n    add r4, r3, #0\n    lsl r0, r0, #4\n    ldrb r1, [r4, r0]\n    add r6, r2, #0\n    add r1, r1, #1\n    strb r1, [r4, r0]\n    bl sub_0203769C\n    cmp r5, r0\n    beq _0222B0E2\n    bl SizeOfStructPokemon\n    ldr r1, _0222B0E4 ; =0x00000D8C\n    add r2, r0, #0\n    ldr r1, [r4, r1]\n    add r0, r6, #0\n    bl MI_CpuCopy8\n    pop {r4, r5, r6, pc}\n    _0222B0E4: .word 0x00000D8C"
    );
    #endif
}

void ov80_0222B0E8(void) {
    GF_AssertFail(2);
}

void ov80_0222B108(void) {
    /* Original at 0x0222B108 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, _0222B13C ; =0x00000504\n    add r4, r5, r0\n    sub r0, #0xc\n    ldr r0, [r5, r0]\n    bl Save_PlayerData_GetProfile\n    ldrh r0, [r5, #8]\n    add r1, r4, #0\n    mov r2, #0x3c\n    strh r0, [r4, #2]\n    ldrh r0, [r5, #0xc]\n    strh r0, [r4, #4]\n    ldrh r0, [r5, #0xe]\n    strh r0, [r4, #6]\n    mov r0, #0x16\n    bl sub_02037030\n    cmp r0, #1\n    bne _0222B136\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    nop\n    _0222B13C: .word 0x00000504"
    );
    #endif
}

void ov80_0222B140(void) {
    /* Original at 0x0222B140 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r0, #0\n    ldr r0, _0222B170 ; =0x00000702\n    add r4, r3, #0\n    ldrb r1, [r4, r0]\n    add r5, r2, #0\n    add r1, r1, #1\n    strb r1, [r4, r0]\n    bl sub_0203769C\n    cmp r6, r0\n    beq _0222B16C\n    ldrh r1, [r5, #2]\n    mov r0, #0x16\n    lsl r0, r0, #6\n    strh r1, [r4, r0]\n    ldrh r2, [r5, #4]\n    add r1, r0, #2\n    sub r0, r0, #2\n    strh r2, [r4, r1]\n    ldrh r1, [r5, #6]\n    strh r1, [r4, r0]\n    pop {r4, r5, r6, pc}\n    nop\n    _0222B170: .word 0x00000702"
    );
    #endif
}

void ov80_0222B174(void) {
    /* Original at 0x0222B174 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r1, _0222B1A0 ; =0x00000504\n    mov r3, #0\n    add r1, r0, r1\n    add r4, r1, #0\n    ldrh r2, [r0, #0x18]\n    add r3, r3, #1\n    add r0, r0, #2\n    strh r2, [r4]\n    add r4, r4, #2\n    cmp r3, #0xe\n    blt _0222B17E\n    mov r0, #0x17\n    mov r2, #0x3c\n    bl sub_02037030\n    cmp r0, #1\n    bne _0222B19C\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}\n    _0222B1A0: .word 0x00000504"
    );
    #endif
}

void ov80_0222B1A4(void) {
    /* Original at 0x0222B1A4 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r0, #0\n    ldr r0, _0222B1D8 ; =0x00000702\n    add r4, r3, #0\n    ldrb r1, [r4, r0]\n    add r5, r2, #0\n    add r1, r1, #1\n    strb r1, [r4, r0]\n    bl sub_0203769C\n    cmp r6, r0\n    beq _0222B1D4\n    bl sub_0203769C\n    cmp r0, #0\n    beq _0222B1D4\n    mov r1, #0\n    ldrh r0, [r5]\n    add r1, r1, #1\n    add r5, r5, #2\n    strh r0, [r4, #0x18]\n    add r4, r4, #2\n    cmp r1, #0xe\n    blt _0222B1C6\n    pop {r4, r5, r6, pc}\n    nop\n    _0222B1D8: .word 0x00000702"
    );
    #endif
}

void ov80_0222B1DC(void) {
    /* Original at 0x0222B1DC */
    /* Requires manual decompilation - 52 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    ldr r1, _0222B240 ; =0x00000504\n    ldr r2, _0222B244 ; =0x00000584\n    add r1, r0, r1\n    mov r4, #0\n    add r5, r0, #0\n    add r6, r1, #0\n    ldrh r3, [r5, r2]\n    add r4, r4, #1\n    add r5, r5, #2\n    strh r3, [r6]\n    add r6, r6, #2\n    cmp r4, #6\n    blt _0222B1EA\n    mov r2, #0x59\n    mov r5, #0\n    add r4, r1, #0\n    lsl r2, r2, #4\n    add r3, r0, r5\n    ldrb r3, [r3, r2]\n    add r5, r5, #1\n    strh r3, [r4, #0xc]\n    add r4, r4, #2\n    cmp r5, #6\n    blt _0222B200\n    ldr r4, _0222B248 ; =0x00000598\n    add r2, r1, #0\n    mov r3, #0\n    add r2, #0x18\n    add r5, r4, #0\n    ldr r6, [r0, r4]\n    add r3, r3, #1\n    strh r6, [r2]\n    ldr r6, [r0, r5]\n    add r0, r0, #4\n    lsr r6, r6, #0x10\n    strh r6, [r2, #0xc]\n    add r2, r2, #2\n    cmp r3, #6\n    blt _0222B218\n    mov r0, #0x18\n    mov r2, #0x3c\n    bl sub_02037030\n    cmp r0, #1\n    bne _0222B23C\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    _0222B240: .word 0x00000504\n    _0222B244: .word 0x00000584\n    _0222B248: .word 0x00000598"
    );
    #endif
}

void ov80_0222B24C(void) {
    /* Original at 0x0222B24C */
    /* Requires manual decompilation - 57 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    ldr r0, _0222B2C0 ; =0x00000702\n    add r4, r3, #0\n    ldrb r1, [r4, r0]\n    add r5, r2, #0\n    add r1, r1, #1\n    strb r1, [r4, r0]\n    bl sub_0203769C\n    cmp r6, r0\n    beq _0222B2BE\n    bl sub_0203769C\n    cmp r0, #0\n    beq _0222B2BE\n    mov r0, #0x95\n    mov r2, #0\n    add r3, r5, #0\n    add r6, r4, #0\n    lsl r0, r0, #2\n    ldrh r1, [r3]\n    add r2, r2, #1\n    add r3, r3, #2\n    strh r1, [r6, r0]\n    add r6, r6, #2\n    cmp r2, #6\n    blt _0222B276\n    mov r0, #0x26\n    mov r6, #0\n    add r3, r5, #0\n    lsl r0, r0, #4\n    ldrh r2, [r3, #0xc]\n    add r1, r4, r6\n    add r6, r6, #1\n    add r3, r3, #2\n    strb r2, [r1, r0]\n    cmp r6, #6\n    blt _0222B28C\n    mov r2, #0x9a\n    lsl r2, r2, #2\n    mov r1, #0\n    add r5, #0x18\n    add r3, r2, #0\n    add r6, r2, #0\n    ldrh r0, [r5]\n    add r1, r1, #1\n    str r0, [r4, r2]\n    ldrh r7, [r5, #0xc]\n    ldr r0, [r4, r3]\n    add r5, r5, #2\n    lsl r7, r7, #0x10\n    orr r0, r7\n    str r0, [r4, r6]\n    add r4, r4, #4\n    cmp r1, #6\n    blt _0222B2A6\n    pop {r3, r4, r5, r6, r7, pc}\n    _0222B2C0: .word 0x00000702"
    );
    #endif
}

void ov80_0222B2C4(void) {
    /* Original at 0x0222B2C4 */
    /* Requires manual decompilation - 52 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    ldr r1, _0222B328 ; =0x00000504\n    ldr r2, _0222B32C ; =0x000003D2\n    add r1, r0, r1\n    mov r4, #0\n    add r5, r0, #0\n    add r6, r1, #0\n    ldrh r3, [r5, r2]\n    add r4, r4, #1\n    add r5, r5, #2\n    strh r3, [r6]\n    add r6, r6, #2\n    cmp r4, #4\n    blt _0222B2D2\n    ldr r2, _0222B330 ; =0x000003DA\n    mov r5, #0\n    add r4, r1, #0\n    add r3, r0, r5\n    ldrb r3, [r3, r2]\n    add r5, r5, #1\n    strh r3, [r4, #8]\n    add r4, r4, #2\n    cmp r5, #4\n    blt _0222B2E6\n    mov r4, #0x3e\n    add r2, r1, #0\n    lsl r4, r4, #4\n    mov r3, #0\n    add r2, #0x10\n    add r5, r4, #0\n    ldr r6, [r0, r4]\n    add r3, r3, #1\n    strh r6, [r2]\n    ldr r6, [r0, r5]\n    add r0, r0, #4\n    lsr r6, r6, #0x10\n    strh r6, [r2, #8]\n    add r2, r2, #2\n    cmp r3, #4\n    blt _0222B300\n    mov r0, #0x19\n    mov r2, #0x3c\n    bl sub_02037030\n    cmp r0, #1\n    bne _0222B324\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    _0222B328: .word 0x00000504\n    _0222B32C: .word 0x000003D2\n    _0222B330: .word 0x000003DA"
    );
    #endif
}

void ov80_0222B334(void) {
    /* Original at 0x0222B334 */
    /* Requires manual decompilation - 57 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    ldr r0, _0222B3A4 ; =0x00000702\n    add r4, r3, #0\n    ldrb r1, [r4, r0]\n    add r5, r2, #0\n    add r1, r1, #1\n    strb r1, [r4, r0]\n    bl sub_0203769C\n    cmp r6, r0\n    beq _0222B3A2\n    bl sub_0203769C\n    cmp r0, #0\n    beq _0222B3A2\n    ldr r0, _0222B3A8 ; =0x000003D2\n    mov r2, #0\n    add r3, r5, #0\n    add r6, r4, #0\n    ldrh r1, [r3]\n    add r2, r2, #1\n    add r3, r3, #2\n    strh r1, [r6, r0]\n    add r6, r6, #2\n    cmp r2, #4\n    blt _0222B35C\n    ldr r0, _0222B3AC ; =0x000003DA\n    mov r6, #0\n    add r3, r5, #0\n    ldrh r2, [r3, #8]\n    add r1, r4, r6\n    add r6, r6, #1\n    add r3, r3, #2\n    strb r2, [r1, r0]\n    cmp r6, #4\n    blt _0222B370\n    mov r2, #0x3e\n    lsl r2, r2, #4\n    mov r1, #0\n    add r5, #0x10\n    add r3, r2, #0\n    add r6, r2, #0\n    ldrh r0, [r5]\n    add r1, r1, #1\n    str r0, [r4, r2]\n    ldrh r7, [r5, #8]\n    ldr r0, [r4, r3]\n    add r5, r5, #2\n    lsl r7, r7, #0x10\n    orr r0, r7\n    str r0, [r4, r6]\n    add r4, r4, #4\n    cmp r1, #4\n    blt _0222B38A\n    pop {r3, r4, r5, r6, r7, pc}\n    _0222B3A4: .word 0x00000702\n    _0222B3A8: .word 0x000003D2\n    _0222B3AC: .word 0x000003DA"
    );
    #endif
}

void ov80_0222B3B0(void) {
    sub_02037030(0, 0x1a, 1, 0x3c);
}

void ov80_0222B3D4(void) {
    /* Original at 0x0222B3D4 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r0, _0222B3F4 ; =0x00000702\n    add r4, r3, #0\n    ldrb r1, [r4, r0]\n    add r6, r2, #0\n    add r1, r1, #1\n    strb r1, [r4, r0]\n    bl sub_0203769C\n    cmp r5, r0\n    beq _0222B3F2\n    ldrh r1, [r6]\n    ldr r0, _0222B3F8 ; =0x0000057C\n    strb r1, [r4, r0]\n    pop {r4, r5, r6, pc}\n    _0222B3F4: .word 0x00000702\n    _0222B3F8: .word 0x0000057C"
    );
    #endif
}

void ov80_0222B3FC(void) {
    sub_02037030(0, 0x1b, 1, 0x3c);
}

void ov80_0222B420(void) {
    /* Original at 0x0222B420 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r0, _0222B440 ; =0x00000702\n    add r4, r3, #0\n    ldrb r1, [r4, r0]\n    add r6, r2, #0\n    add r1, r1, #1\n    strb r1, [r4, r0]\n    bl sub_0203769C\n    cmp r5, r0\n    beq _0222B43E\n    ldrh r1, [r6]\n    ldr r0, _0222B444 ; =0x0000057D\n    strb r1, [r4, r0]\n    pop {r4, r5, r6, pc}\n    _0222B440: .word 0x00000702\n    _0222B444: .word 0x0000057D"
    );
    #endif
}

void ov80_0222B448(void) {
    /* Original at 0x0222B448 */
    /* Requires manual decompilation - 106 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x1c\n    add r5, r0, #0\n    ldr r0, _0222B520 ; =0x00000504\n    add r0, r5, r0\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    ldrb r0, [r5, #4]\n    bl ov80_02236DD4\n    add r4, r0, #0\n    mov r0, #0\n    str r0, [sp, #8]\n    cmp r4, #0\n    ble _0222B49A\n    add r7, sp, #0x10\n    add r6, sp, #0x14\n    ldr r0, _0222B524 ; =0x000004D4\n    ldr r1, [sp, #8]\n    ldr r0, [r5, r0]\n    bl Party_GetMonByIndex\n    str r0, [sp, #0xc]\n    mov r1, #0x47\n    mov r2, #0\n    bl GetMonData\n    strb r0, [r7]\n    mov r1, #0\n    ldr r0, [sp, #0xc]\n    add r2, r1, #0\n    bl GetMonData\n    stmia r6!, {r0}\n    ldr r0, [sp, #8]\n    add r7, r7, #1\n    add r0, r0, #1\n    str r0, [sp, #8]\n    cmp r0, r4\n    blt _0222B46C\n    mov r3, #0\n    cmp r4, #0\n    ble _0222B4B2\n    ldr r2, [sp]\n    ldr r0, _0222B528 ; =0x000004E8\n    ldrh r1, [r5, r0]\n    add r3, r3, #1\n    add r5, r5, #2\n    strh r1, [r2]\n    add r2, r2, #2\n    cmp r3, r4\n    blt _0222B4A4\n    ldr r0, [sp, #4]\n    add r0, r0, r4\n    str r0, [sp, #4]\n    mov r0, #0\n    cmp r4, #0\n    ble _0222B4D6\n    ldr r1, [sp, #4]\n    add r3, sp, #0x10\n    lsl r2, r1, #1\n    ldr r1, [sp]\n    add r2, r1, r2\n    ldrb r1, [r3]\n    add r0, r0, #1\n    add r3, r3, #1\n    strh r1, [r2]\n    add r2, r2, #2\n    cmp r0, r4\n    blt _0222B4C8\n    ldr r0, [sp, #4]\n    mov r3, #0\n    add r0, r0, r4\n    cmp r4, #0\n    ble _0222B506\n    ldr r5, [sp]\n    lsl r6, r4, #1\n    ldr r2, [sp]\n    lsl r0, r0, #1\n    add r5, r5, r6\n    add r2, r2, r0\n    add r1, sp, #0x14\n    add r0, r5, r0\n    ldr r5, [r1]\n    add r3, r3, #1\n    strh r5, [r2]\n    ldr r5, [r1]\n    add r1, r1, #4\n    lsr r5, r5, #0x10\n    strh r5, [r0]\n    add r2, r2, #2\n    add r0, r0, #2\n    cmp r3, r4\n    blt _0222B4F0\n    ldr r1, [sp]\n    mov r0, #0x1c\n    mov r2, #0x3c\n    bl sub_02037030\n    cmp r0, #1\n    bne _0222B51A\n    add sp, #0x1c\n    mov r0, #1\n    pop {r4, r5, r6, r7, pc}\n    mov r0, #0\n    add sp, #0x1c\n    pop {r4, r5, r6, r7, pc}\n    _0222B520: .word 0x00000504\n    _0222B524: .word 0x000004D4\n    _0222B528: .word 0x000004E8"
    );
    #endif
}

void ov80_0222B52C(void) {
    /* Original at 0x0222B52C */
    /* Requires manual decompilation - 73 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r0, _0222B5BC ; =0x00000702\n    add r4, r3, #0\n    ldrb r1, [r4, r0]\n    str r2, [sp]\n    mov r7, #0\n    add r1, r1, #1\n    strb r1, [r4, r0]\n    bl sub_0203769C\n    cmp r5, r0\n    beq _0222B5B8\n    ldrb r0, [r4, #4]\n    bl ov80_02236DD4\n    add r3, r7, #0\n    cmp r0, #0\n    ble _0222B566\n    ldr r5, [sp]\n    ldr r1, _0222B5C0 ; =0x00000584\n    add r6, r4, #0\n    ldrh r2, [r5]\n    add r3, r3, #1\n    add r5, r5, #2\n    strh r2, [r6, r1]\n    add r6, r6, #2\n    cmp r3, r0\n    blt _0222B558\n    add r7, r7, r0\n    mov r6, #0\n    cmp r0, #0\n    ble _0222B586\n    ldr r1, [sp]\n    lsl r2, r7, #1\n    add r5, r1, r2\n    mov r1, #0x59\n    lsl r1, r1, #4\n    ldrh r3, [r5]\n    add r2, r4, r6\n    add r6, r6, #1\n    strb r3, [r2, r1]\n    add r5, r5, #2\n    cmp r6, r0\n    blt _0222B578\n    add r2, r7, r0\n    mov r1, #0\n    cmp r0, #0\n    ble _0222B5B8\n    ldr r3, [sp]\n    lsl r2, r2, #1\n    lsl r6, r0, #1\n    add r5, r3, r2\n    add r3, r3, r6\n    add r6, r3, r2\n    ldr r2, _0222B5C4 ; =0x00000598\n    ldrh r7, [r5]\n    ldr r3, _0222B5C4 ; =0x00000598\n    add r1, r1, #1\n    str r7, [r4, r3]\n    ldrh r7, [r6]\n    ldr r3, [r4, r3]\n    add r5, r5, #2\n    lsl r7, r7, #0x10\n    orr r3, r7\n    str r3, [r4, r2]\n    add r4, r4, #4\n    add r6, r6, #2\n    cmp r1, r0\n    blt _0222B59C\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0222B5BC: .word 0x00000702\n    _0222B5C0: .word 0x00000584\n    _0222B5C4: .word 0x00000598"
    );
    #endif
}

void ov80_0222B5C8(void) {
    /* Original at 0x0222B5C8 */
    /* Requires manual decompilation - 39 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #4]\n    bl sub_02030E08\n    ldrh r1, [r5, #0x14]\n    ldr r0, _0222B620 ; =0x000003C2\n    strh r1, [r5, r0]\n    ldrh r1, [r5, #0x16]\n    add r0, r0, #2\n    strh r1, [r5, r0]\n    ldr r0, [r5, #4]\n    bl Save_Frontier_GetStatic\n    add r4, r0, #0\n    ldrb r0, [r5, #0x10]\n    bl sub_0205C1F0\n    add r6, r0, #0\n    ldrb r0, [r5, #0x10]\n    bl sub_0205C1F0\n    bl sub_0205C268\n    add r2, r0, #0\n    add r0, r4, #0\n    add r1, r6, #0\n    bl FrontierSave_GetStat\n    ldr r1, _0222B624 ; =0x000003D6\n    mov r2, #0x28\n    strh r0, [r5, r1]\n    sub r1, #0x16\n    mov r0, #0x2a\n    add r1, r5, r1\n    bl sub_02037030\n    cmp r0, #1\n    bne _0222B61A\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    nop\n    _0222B620: .word 0x000003C2\n    _0222B624: .word 0x000003D6"
    );
    #endif
}

void ov80_0222B628(void) {
    /* Original at 0x0222B628 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r0, #0\n    ldr r0, _0222B654 ; =0x00000A1A\n    add r4, r3, #0\n    ldrb r1, [r4, r0]\n    add r5, r2, #0\n    add r1, r1, #1\n    strb r1, [r4, r0]\n    bl sub_0203769C\n    cmp r6, r0\n    beq _0222B652\n    ldrh r1, [r5, #2]\n    ldr r0, _0222B658 ; =0x00000A16\n    strh r1, [r4, r0]\n    ldrh r2, [r5, #4]\n    sub r1, r0, #4\n    add r0, r0, #6\n    strh r2, [r4, r1]\n    ldrh r1, [r5, #0x16]\n    strh r1, [r4, r0]\n    pop {r4, r5, r6, pc}\n    _0222B654: .word 0x00000A1A\n    _0222B658: .word 0x00000A16"
    );
    #endif
}

void ov80_0222B65C(void) {
    /* Original at 0x0222B65C */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0xf\n    mov r2, #0\n    add r3, r4, #0\n    lsl r0, r0, #6\n    ldrh r1, [r3, #0x30]\n    add r2, r2, #1\n    strh r1, [r3, r0]\n    add r3, r3, #2\n    cmp r2, #0xe\n    blt _0222B668\n    mov r1, #0xf\n    lsl r1, r1, #6\n    mov r0, #0x2b\n    add r1, r4, r1\n    mov r2, #0x28\n    bl sub_02037030\n    cmp r0, #1\n    bne _0222B68A\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}"
    );
    #endif
}

void ov80_0222B690(void) {
    /* Original at 0x0222B690 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r0, #0\n    ldr r0, _0222B6C4 ; =0x00000A1A\n    add r4, r3, #0\n    ldrb r1, [r4, r0]\n    add r5, r2, #0\n    add r1, r1, #1\n    strb r1, [r4, r0]\n    bl sub_0203769C\n    cmp r6, r0\n    beq _0222B6C0\n    bl sub_0203769C\n    cmp r0, #0\n    beq _0222B6C0\n    mov r1, #0\n    ldrh r0, [r5]\n    add r1, r1, #1\n    add r5, r5, #2\n    strh r0, [r4, #0x30]\n    add r4, r4, #2\n    cmp r1, #0xe\n    blt _0222B6B2\n    pop {r4, r5, r6, pc}\n    nop\n    _0222B6C4: .word 0x00000A1A"
    );
    #endif
}

void ov80_0222B6C8(void) {
    /* Original at 0x0222B6C8 */
    /* Requires manual decompilation - 55 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _0222B734 ; =0x00000A18\n    ldrb r1, [r4, r0]\n    mov r0, #0xf\n    lsl r0, r0, #6\n    strh r1, [r4, r0]\n    bl sub_0203769C\n    cmp r0, #0\n    ldr r1, _0222B738 ; =0x00000A1B\n    bne _0222B700\n    ldrb r0, [r4, r1]\n    cmp r0, #0\n    bne _0222B6EE\n    sub r0, r1, #3\n    ldrb r0, [r4, r0]\n    strb r0, [r4, r1]\n    b _0222B712\n    sub r0, r0, #6\n    cmp r0, #4\n    bne _0222B712\n    sub r0, r1, #3\n    ldrb r0, [r4, r0]\n    cmp r0, #4\n    beq _0222B712\n    strb r0, [r4, r1]\n    b _0222B712\n    ldrb r0, [r4, r1]\n    cmp r0, #4\n    bne _0222B712\n    sub r0, r1, #3\n    ldrb r0, [r4, r0]\n    cmp r0, #4\n    beq _0222B712\n    add r0, r0, #6\n    strb r0, [r4, r1]\n    ldr r0, _0222B738 ; =0x00000A1B\n    ldr r1, _0222B73C ; =0x000003C2\n    ldrb r0, [r4, r0]\n    mov r2, #0x28\n    strh r0, [r4, r1]\n    sub r1, r1, #2\n    mov r0, #0x2c\n    add r1, r4, r1\n    bl sub_02037030\n    cmp r0, #1\n    bne _0222B72E\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}\n    nop\n    _0222B734: .word 0x00000A18\n    _0222B738: .word 0x00000A1B\n    _0222B73C: .word 0x000003C2"
    );
    #endif
}

void ov80_0222B740(void) {
    /* Original at 0x0222B740 */
    /* Requires manual decompilation - 76 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r0, #0\n    ldr r0, _0222B7D4 ; =0x00000A1A\n    add r4, r3, #0\n    ldrb r1, [r4, r0]\n    add r5, r2, #0\n    add r1, r1, #1\n    strb r1, [r4, r0]\n    bl sub_0203769C\n    cmp r6, r0\n    beq _0222B7D2\n    ldrh r1, [r5]\n    ldr r0, _0222B7D8 ; =0x00000A19\n    strb r1, [r4, r0]\n    bl sub_0203769C\n    cmp r0, #0\n    bne _0222B7A4\n    ldr r1, _0222B7DC ; =0x00000A1B\n    ldrb r0, [r4, r1]\n    cmp r0, #0\n    beq _0222B78A\n    cmp r0, #4\n    bne _0222B7D2\n    sub r0, r1, #2\n    ldrb r0, [r4, r0]\n    cmp r0, #4\n    beq _0222B7D2\n    add r2, r0, #6\n    sub r0, r1, #3\n    strb r2, [r4, r0]\n    sub r0, r1, #2\n    ldrb r0, [r4, r0]\n    add r0, r0, #6\n    strb r0, [r4, r1]\n    pop {r4, r5, r6, pc}\n    sub r0, r1, #2\n    ldrb r0, [r4, r0]\n    add r0, r0, #6\n    strb r0, [r4, r1]\n    sub r0, r1, #2\n    ldrb r0, [r4, r0]\n    cmp r0, #4\n    beq _0222B7D2\n    add r0, r1, #5\n    ldr r2, _0222B7E0 ; =0x0000EEDD\n    ldr r0, [r4, r0]\n    strh r2, [r0]\n    pop {r4, r5, r6, pc}\n    ldrh r1, [r5, #2]\n    ldr r0, _0222B7DC ; =0x00000A1B\n    strb r1, [r4, r0]\n    ldrb r1, [r4, r0]\n    cmp r1, #4\n    beq _0222B7B8\n    add r0, r0, #5\n    ldr r1, _0222B7E0 ; =0x0000EEDD\n    ldr r0, [r4, r0]\n    strh r1, [r0]\n    ldr r1, _0222B7D8 ; =0x00000A19\n    ldrb r0, [r4, r1]\n    cmp r0, #4\n    bne _0222B7D2\n    sub r0, r1, #1\n    ldrb r0, [r4, r0]\n    cmp r0, #0\n    beq _0222B7D2\n    cmp r0, #4\n    beq _0222B7D2\n    add r2, r0, #6\n    add r0, r1, #2\n    strb r2, [r4, r0]\n    pop {r4, r5, r6, pc}\n    _0222B7D4: .word 0x00000A1A\n    _0222B7D8: .word 0x00000A19\n    _0222B7DC: .word 0x00000A1B\n    _0222B7E0: .word 0x0000EEDD"
    );
    #endif
}

void ov80_0222B7E4(void) {
    /* Original at 0x0222B7E4 */
    /* Requires manual decompilation - 61 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r3, r0, #0\n    mov r0, #0x9b\n    mov r1, #0xf\n    mov r4, #0\n    add r5, r3, #0\n    lsl r0, r0, #2\n    lsl r1, r1, #6\n    ldrh r2, [r5, r0]\n    add r4, r4, #1\n    strh r2, [r5, r1]\n    add r5, r5, #2\n    cmp r4, #4\n    blt _0222B7F4\n    mov r0, #0x9d\n    mov r1, #0xf2\n    mov r5, #0\n    add r4, r3, #0\n    lsl r0, r0, #2\n    lsl r1, r1, #2\n    add r2, r3, r5\n    ldrb r2, [r2, r0]\n    add r5, r5, #1\n    strh r2, [r4, r1]\n    add r4, r4, #2\n    cmp r5, #4\n    blt _0222B80C\n    mov r7, #0xf\n    lsl r7, r7, #6\n    add r1, r3, #0\n    mov r5, #0x9e\n    add r6, r7, #0\n    mov r2, #0\n    add r0, r3, #0\n    add r1, #0x10\n    lsl r5, r5, #2\n    add r6, #8\n    mov r4, #0x9e\n    lsl r4, r4, #2\n    ldr r4, [r0, r4]\n    add r2, r2, #1\n    strh r4, [r1, r7]\n    ldr r4, [r0, r5]\n    add r0, r0, #4\n    lsr r4, r4, #0x10\n    strh r4, [r1, r6]\n    add r1, r1, #2\n    cmp r2, #4\n    blt _0222B82E\n    mov r1, #0xf\n    lsl r1, r1, #6\n    mov r0, #0x2d\n    add r1, r3, r1\n    mov r2, #0x28\n    bl sub_02037030\n    cmp r0, #1\n    bne _0222B85C\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov80_0222B860(void) {
    /* Original at 0x0222B860 */
    /* Requires manual decompilation - 57 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    ldr r0, _0222B8D4 ; =0x00000A1A\n    add r4, r3, #0\n    ldrb r1, [r4, r0]\n    add r5, r2, #0\n    add r1, r1, #1\n    strb r1, [r4, r0]\n    bl sub_0203769C\n    cmp r6, r0\n    beq _0222B8D2\n    bl sub_0203769C\n    cmp r0, #0\n    beq _0222B8D2\n    mov r0, #0x9b\n    mov r2, #0\n    add r3, r5, #0\n    add r6, r4, #0\n    lsl r0, r0, #2\n    ldrh r1, [r3]\n    add r2, r2, #1\n    add r3, r3, #2\n    strh r1, [r6, r0]\n    add r6, r6, #2\n    cmp r2, #4\n    blt _0222B88A\n    mov r0, #0x9d\n    mov r6, #0\n    add r3, r5, #0\n    lsl r0, r0, #2\n    ldrh r2, [r3, #8]\n    add r1, r4, r6\n    add r6, r6, #1\n    add r3, r3, #2\n    strb r2, [r1, r0]\n    cmp r6, #4\n    blt _0222B8A0\n    mov r2, #0x9e\n    lsl r2, r2, #2\n    mov r1, #0\n    add r5, #0x10\n    add r3, r2, #0\n    add r6, r2, #0\n    ldrh r0, [r5]\n    add r1, r1, #1\n    str r0, [r4, r2]\n    ldrh r7, [r5, #8]\n    ldr r0, [r4, r3]\n    add r5, r5, #2\n    lsl r7, r7, #0x10\n    orr r0, r7\n    str r0, [r4, r6]\n    add r4, r4, #4\n    cmp r1, #4\n    blt _0222B8BA\n    pop {r3, r4, r5, r6, r7, pc}\n    _0222B8D4: .word 0x00000A1A"
    );
    #endif
}

void ov80_0222B8D8(void) {
    sub_02037030(0, 0x2e, 1, 0x28, 0xf);
}

void ov80_0222B8F8(void) {
    /* Original at 0x0222B8F8 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r0, _0222B91C ; =0x00000A1A\n    add r4, r3, #0\n    ldrb r1, [r4, r0]\n    add r6, r2, #0\n    add r1, r1, #1\n    strb r1, [r4, r0]\n    bl sub_0203769C\n    cmp r5, r0\n    beq _0222B918\n    ldrh r1, [r6]\n    mov r0, #0xa1\n    lsl r0, r0, #4\n    strb r1, [r4, r0]\n    pop {r4, r5, r6, pc}\n    nop\n    _0222B91C: .word 0x00000A1A"
    );
    #endif
}

void ov80_0222B920(void) {
    sub_02037030(0, 0x2f, 1, 0x28, 0xf);
}

void ov80_0222B940(void) {
    /* Original at 0x0222B940 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r0, _0222B960 ; =0x00000A1A\n    add r4, r3, #0\n    ldrb r1, [r4, r0]\n    add r6, r2, #0\n    add r1, r1, #1\n    strb r1, [r4, r0]\n    bl sub_0203769C\n    cmp r5, r0\n    beq _0222B95E\n    ldrh r1, [r6]\n    ldr r0, _0222B964 ; =0x00000A11\n    strb r1, [r4, r0]\n    pop {r4, r5, r6, pc}\n    _0222B960: .word 0x00000A1A\n    _0222B964: .word 0x00000A11"
    );
    #endif
}

void ov80_0222B968(void) {
    /* Original at 0x0222B968 */
    /* Requires manual decompilation - 45 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r7, r0, #0\n    ldrb r0, [r7, #0x10]\n    mov r1, #0\n    bl ov80_02237B24\n    str r0, [sp]\n    bl SizeOfStructPokemon\n    add r6, r0, #0\n    ldr r0, [sp]\n    mov r4, #0\n    cmp r0, #0\n    ble _0222B9AC\n    mov r0, #0x41\n    lsl r0, r0, #4\n    add r0, r7, r0\n    add r5, r4, #0\n    str r0, [sp, #4]\n    ldr r0, [r7, #0x28]\n    add r1, r4, #0\n    bl Party_GetMonByIndex\n    ldr r1, [sp, #4]\n    add r2, r6, #0\n    add r1, r1, r5\n    bl MI_CpuCopy8\n    ldr r0, [sp]\n    add r4, r4, #1\n    add r5, r5, r6\n    cmp r4, r0\n    blt _0222B990\n    mov r1, #0x41\n    lsl r1, r1, #4\n    mov r2, #2\n    mov r0, #0x30\n    add r1, r7, r1\n    lsl r2, r2, #8\n    bl sub_02036FD8\n    cmp r0, #1\n    bne _0222B9C6\n    add sp, #8\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov80_0222B9CC(void) {
    /* Original at 0x0222B9CC */
    /* Requires manual decompilation - 61 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    ldr r1, _0222BA58 ; =0x00000A1A\n    add r4, r0, #0\n    add r0, r3, #0\n    ldrb r0, [r0, r1]\n    str r2, [sp]\n    str r3, [sp, #4]\n    add r2, r0, #1\n    add r0, r3, #0\n    strb r2, [r0, r1]\n    bl sub_0203769C\n    cmp r4, r0\n    beq _0222BA54\n    ldr r0, [sp, #4]\n    mov r1, #0\n    ldrb r0, [r0, #0x10]\n    bl ov80_02237B24\n    str r0, [sp, #8]\n    bl SizeOfStructPokemon\n    add r5, r0, #0\n    mov r0, #0xb\n    bl AllocMonZeroed\n    add r6, r0, #0\n    ldr r0, [sp, #8]\n    mov r7, #0\n    cmp r0, #0\n    ble _0222BA2E\n    add r4, r7, #0\n    ldr r0, [sp]\n    add r1, r6, #0\n    add r0, r0, r4\n    add r2, r5, #0\n    bl MI_CpuCopy8\n    ldr r0, [sp, #4]\n    add r1, r6, #0\n    ldr r0, [r0, #0x28]\n    bl Party_AddMon\n    ldr r0, [sp, #8]\n    add r7, r7, #1\n    add r4, r4, r5\n    cmp r7, r0\n    blt _0222BA0E\n    add r0, r6, #0\n    bl Heap_Free\n    bl sub_0203769C\n    cmp r0, #0\n    beq _0222BA54\n    ldr r0, [sp, #4]\n    mov r1, #0\n    ldr r0, [r0, #0x28]\n    mov r2, #2\n    bl Party_SwapSlots\n    ldr r0, [sp, #4]\n    mov r1, #1\n    ldr r0, [r0, #0x28]\n    mov r2, #3\n    bl Party_SwapSlots\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    _0222BA58: .word 0x00000A1A"
    );
    #endif
}

void ov80_0222BA5C(void) {
    GF_AssertFail(0x61, 2);
}

void ov80_0222BA7C(void) {
    /* Original at 0x0222BA7C */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #4]\n    bl sub_02030FA0\n    ldrh r0, [r4, #0x18]\n    ldr r1, _0222BAAC ; =0x00000426\n    strh r0, [r4, r1]\n    add r0, r1, #2\n    ldrh r2, [r4, #0x1a]\n    sub r1, r1, #2\n    add r1, r4, r1\n    strh r2, [r4, r0]\n    mov r0, #0x41\n    mov r2, #0x28\n    bl sub_02037030\n    cmp r0, #1\n    bne _0222BAA6\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}\n    nop\n    _0222BAAC: .word 0x00000426"
    );
    #endif
}

void ov80_0222BAB0(void) {
    /* Original at 0x0222BAB0 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r0, #0\n    ldr r0, _0222BAD8 ; =0x00000A7C\n    add r4, r3, #0\n    ldrb r1, [r4, r0]\n    add r5, r2, #0\n    add r1, r1, #1\n    strb r1, [r4, r0]\n    bl sub_0203769C\n    cmp r6, r0\n    beq _0222BAD4\n    ldrh r1, [r5, #2]\n    ldr r0, _0222BADC ; =0x00000A78\n    strh r1, [r4, r0]\n    ldrh r1, [r5, #4]\n    sub r0, r0, #2\n    strh r1, [r4, r0]\n    pop {r4, r5, r6, pc}\n    nop\n    _0222BAD8: .word 0x00000A7C\n    _0222BADC: .word 0x00000A78"
    );
    #endif
}

void ov80_0222BAE0(void) {
    /* Original at 0x0222BAE0 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r1, r0, #0\n    ldr r2, _0222BB14 ; =0x00000424\n    mov r3, #0\n    add r4, r1, #0\n    add r0, r4, #0\n    add r0, #0x78\n    ldrh r0, [r0]\n    add r3, r3, #1\n    strh r0, [r4, r2]\n    add r4, r4, #2\n    cmp r3, #0xe\n    blt _0222BAEA\n    ldr r2, _0222BB14 ; =0x00000424\n    mov r0, #0x42\n    add r1, r1, r2\n    mov r2, #0x28\n    bl sub_02037030\n    cmp r0, #1\n    bne _0222BB0E\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}\n    nop\n    _0222BB14: .word 0x00000424"
    );
    #endif
}

void ov80_0222BB18(void) {
    /* Original at 0x0222BB18 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r0, #0\n    ldr r0, _0222BB50 ; =0x00000A7C\n    add r4, r3, #0\n    ldrb r1, [r4, r0]\n    add r5, r2, #0\n    add r1, r1, #1\n    strb r1, [r4, r0]\n    bl sub_0203769C\n    cmp r6, r0\n    beq _0222BB4C\n    bl sub_0203769C\n    cmp r0, #0\n    beq _0222BB4C\n    mov r2, #0\n    ldrh r1, [r5]\n    add r0, r4, #0\n    add r0, #0x78\n    add r2, r2, #1\n    strh r1, [r0]\n    add r5, r5, #2\n    add r4, r4, #2\n    cmp r2, #0xe\n    blt _0222BB3A\n    pop {r4, r5, r6, pc}\n    nop\n    _0222BB50: .word 0x00000A7C"
    );
    #endif
}

void ov80_0222BB54(void) {
    /* Original at 0x0222BB54 */
    /* Requires manual decompilation - 59 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r3, r0, #0\n    mov r0, #0xc5\n    ldr r1, _0222BBC8 ; =0x00000424\n    mov r4, #0\n    add r5, r3, #0\n    lsl r0, r0, #2\n    ldrh r2, [r5, r0]\n    add r4, r4, #1\n    strh r2, [r5, r1]\n    add r5, r5, #2\n    cmp r4, #4\n    blt _0222BB62\n    mov r0, #0xc7\n    ldr r1, _0222BBCC ; =0x0000042C\n    mov r5, #0\n    add r4, r3, #0\n    lsl r0, r0, #2\n    add r2, r3, r5\n    ldrb r2, [r2, r0]\n    add r5, r5, #1\n    strh r2, [r4, r1]\n    add r4, r4, #2\n    cmp r5, #4\n    blt _0222BB78\n    ldr r7, _0222BBC8 ; =0x00000424\n    add r1, r3, #0\n    mov r5, #0x32\n    add r6, r7, #0\n    mov r2, #0\n    add r0, r3, #0\n    add r1, #0x10\n    lsl r5, r5, #4\n    add r6, #8\n    mov r4, #0x32\n    lsl r4, r4, #4\n    ldr r4, [r0, r4]\n    add r2, r2, #1\n    strh r4, [r1, r7]\n    ldr r4, [r0, r5]\n    add r0, r0, #4\n    lsr r4, r4, #0x10\n    strh r4, [r1, r6]\n    add r1, r1, #2\n    cmp r2, #4\n    blt _0222BB98\n    ldr r1, _0222BBC8 ; =0x00000424\n    mov r0, #0x43\n    add r1, r3, r1\n    mov r2, #0x28\n    bl sub_02037030\n    cmp r0, #1\n    bne _0222BBC4\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    _0222BBC8: .word 0x00000424\n    _0222BBCC: .word 0x0000042C"
    );
    #endif
}

void ov80_0222BBD0(void) {
    /* Original at 0x0222BBD0 */
    /* Requires manual decompilation - 57 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    ldr r0, _0222BC44 ; =0x00000A7C\n    add r4, r3, #0\n    ldrb r1, [r4, r0]\n    add r5, r2, #0\n    add r1, r1, #1\n    strb r1, [r4, r0]\n    bl sub_0203769C\n    cmp r6, r0\n    beq _0222BC42\n    bl sub_0203769C\n    cmp r0, #0\n    beq _0222BC42\n    mov r0, #0xc5\n    mov r2, #0\n    add r3, r5, #0\n    add r6, r4, #0\n    lsl r0, r0, #2\n    ldrh r1, [r3]\n    add r2, r2, #1\n    add r3, r3, #2\n    strh r1, [r6, r0]\n    add r6, r6, #2\n    cmp r2, #4\n    blt _0222BBFA\n    mov r0, #0xc7\n    mov r6, #0\n    add r3, r5, #0\n    lsl r0, r0, #2\n    ldrh r2, [r3, #8]\n    add r1, r4, r6\n    add r6, r6, #1\n    add r3, r3, #2\n    strb r2, [r1, r0]\n    cmp r6, #4\n    blt _0222BC10\n    mov r2, #0x32\n    lsl r2, r2, #4\n    mov r1, #0\n    add r5, #0x10\n    add r3, r2, #0\n    add r6, r2, #0\n    ldrh r0, [r5]\n    add r1, r1, #1\n    str r0, [r4, r2]\n    ldrh r7, [r5, #8]\n    ldr r0, [r4, r3]\n    add r5, r5, #2\n    lsl r7, r7, #0x10\n    orr r0, r7\n    str r0, [r4, r6]\n    add r4, r4, #4\n    cmp r1, #4\n    blt _0222BC2A\n    pop {r3, r4, r5, r6, r7, pc}\n    _0222BC44: .word 0x00000A7C"
    );
    #endif
}

void ov80_0222BC48(void) {
    sub_02037030(0, 0x44, 1, 0x28);
}

void ov80_0222BC6C(void) {
    /* Original at 0x0222BC6C */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r0, _0222BC8C ; =0x00000A7C\n    add r4, r3, #0\n    ldrb r1, [r4, r0]\n    add r6, r2, #0\n    add r1, r1, #1\n    strb r1, [r4, r0]\n    bl sub_0203769C\n    cmp r5, r0\n    beq _0222BC8A\n    ldrh r1, [r6]\n    ldr r0, _0222BC90 ; =0x00000A74\n    strb r1, [r4, r0]\n    pop {r4, r5, r6, pc}\n    _0222BC8C: .word 0x00000A7C\n    _0222BC90: .word 0x00000A74"
    );
    #endif
}

void ov80_0222BC94(void) {
    sub_02037030(0, 0x45, 1, 0x28);
}

void ov80_0222BCB8(void) {
    /* Original at 0x0222BCB8 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r0, _0222BCD8 ; =0x00000A7C\n    add r4, r3, #0\n    ldrb r1, [r4, r0]\n    add r6, r2, #0\n    add r1, r1, #1\n    strb r1, [r4, r0]\n    bl sub_0203769C\n    cmp r5, r0\n    beq _0222BCD6\n    ldrh r1, [r6]\n    ldr r0, _0222BCDC ; =0x00000A75\n    strb r1, [r4, r0]\n    pop {r4, r5, r6, pc}\n    _0222BCD8: .word 0x00000A7C\n    _0222BCDC: .word 0x00000A75"
    );
    #endif
}

void ov80_0222BCE0(void) {
    /* Original at 0x0222BCE0 */
    /* Requires manual decompilation - 44 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r7, r0, #0\n    ldrb r0, [r7, #0x10]\n    mov r1, #0\n    bl BattleArcade_GetMonCount\n    str r0, [sp]\n    bl SizeOfStructPokemon\n    add r6, r0, #0\n    ldr r0, [sp]\n    mov r4, #0\n    cmp r0, #0\n    ble _0222BD22\n    ldr r0, _0222BD40 ; =0x00000474\n    add r5, r4, #0\n    add r0, r7, r0\n    str r0, [sp, #4]\n    ldr r0, [r7, #0x70]\n    add r1, r4, #0\n    bl Party_GetMonByIndex\n    ldr r1, [sp, #4]\n    add r2, r6, #0\n    add r1, r1, r5\n    bl MI_CpuCopy8\n    ldr r0, [sp]\n    add r4, r4, #1\n    add r5, r5, r6\n    cmp r4, r0\n    blt _0222BD06\n    ldr r1, _0222BD40 ; =0x00000474\n    mov r2, #2\n    mov r0, #0x46\n    add r1, r7, r1\n    lsl r2, r2, #8\n    bl sub_02036FD8\n    cmp r0, #1\n    bne _0222BD3A\n    add sp, #8\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    _0222BD40: .word 0x00000474"
    );
    #endif
}

void ov80_0222BD44(void) {
    /* Original at 0x0222BD44 */
    /* Requires manual decompilation - 61 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    ldr r1, _0222BDD0 ; =0x00000A7C\n    add r4, r0, #0\n    add r0, r3, #0\n    ldrb r0, [r0, r1]\n    str r2, [sp]\n    str r3, [sp, #4]\n    add r2, r0, #1\n    add r0, r3, #0\n    strb r2, [r0, r1]\n    bl sub_0203769C\n    cmp r4, r0\n    beq _0222BDCC\n    ldr r0, [sp, #4]\n    mov r1, #0\n    ldrb r0, [r0, #0x10]\n    bl BattleArcade_GetMonCount\n    str r0, [sp, #8]\n    bl SizeOfStructPokemon\n    add r5, r0, #0\n    mov r0, #0xb\n    bl AllocMonZeroed\n    add r6, r0, #0\n    ldr r0, [sp, #8]\n    mov r7, #0\n    cmp r0, #0\n    ble _0222BDA6\n    add r4, r7, #0\n    ldr r0, [sp]\n    add r1, r6, #0\n    add r0, r0, r4\n    add r2, r5, #0\n    bl MI_CpuCopy8\n    ldr r0, [sp, #4]\n    add r1, r6, #0\n    ldr r0, [r0, #0x70]\n    bl Party_AddMon\n    ldr r0, [sp, #8]\n    add r7, r7, #1\n    add r4, r4, r5\n    cmp r7, r0\n    blt _0222BD86\n    add r0, r6, #0\n    bl Heap_Free\n    bl sub_0203769C\n    cmp r0, #0\n    beq _0222BDCC\n    ldr r0, [sp, #4]\n    mov r1, #0\n    ldr r0, [r0, #0x70]\n    mov r2, #2\n    bl Party_SwapSlots\n    ldr r0, [sp, #4]\n    mov r1, #1\n    ldr r0, [r0, #0x70]\n    mov r2, #3\n    bl Party_SwapSlots\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    _0222BDD0: .word 0x00000A7C"
    );
    #endif
}

void ov80_0222BDD4(void) {
    GF_AssertFail(2);
}
