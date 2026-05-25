/* Decompiled from asm/unk_0201956C.s */
#include "global.h"

void sub_0201956C(void) {
    /* Original at 0x0201956C */
    /* Requires manual decompilation - 38 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    add r7, r1, #0\n    add r0, r3, #0\n    mov r1, #0x10\n    add r5, r2, #0\n    str r3, [sp]\n    bl Heap_Alloc\n    add r4, r0, #0\n    str r6, [r4]\n    strh r5, [r4, #8]\n    ldr r0, [sp]\n    lsl r2, r7, #0x10\n    str r0, [r4, #0xc]\n    ldrh r0, [r4, #0xa]\n    ldr r1, _020195BC ; =0xFFFF8000\n    lsr r3, r2, #0x10\n    lsr r2, r1, #0x11\n    and r0, r1\n    and r2, r3\n    orr r0, r2\n    strh r0, [r4, #0xa]\n    ldrh r2, [r4, #0xa]\n    sub r0, r1, #1\n    lsl r5, r5, #4\n    and r0, r2\n    strh r0, [r4, #0xa]\n    ldr r0, [sp]\n    add r1, r5, #0\n    bl Heap_Alloc\n    mov r1, #0\n    add r2, r5, #0\n    str r0, [r4, #4]\n    bl MI_CpuFill8\n    add r0, r4, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _020195BC: .word 0xFFFF8000"
    );
    #endif
}

void sub_020195C0(void) {
    /* Original at 0x020195C0 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldrh r0, [r5, #8]\n    mov r6, #0\n    cmp r0, #0\n    bls _020195E4\n    add r4, r6, #0\n    ldr r0, [r5, #4]\n    ldr r0, [r0, r4]\n    cmp r0, #0\n    beq _020195DA\n    bl Heap_Free\n    ldrh r0, [r5, #8]\n    add r6, r6, #1\n    add r4, #0x10\n    cmp r6, r0\n    blo _020195CE\n    ldr r0, [r5, #4]\n    bl Heap_Free\n    add r0, r5, #0\n    bl Heap_Free\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void sub_020195F4(void) {
    /* Original at 0x020195F4 */
    /* Requires manual decompilation - 55 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    lsl r7, r1, #4\n    ldr r4, [r0, #4]\n    ldr r1, [sp, #0x18]\n    add r6, r3, #0\n    mul r1, r6\n    ldr r0, [r0, #0xc]\n    add r5, r4, r7\n    lsl r1, r1, #1\n    str r2, [sp]\n    bl Heap_Alloc\n    str r0, [r4, r7]\n    ldrh r0, [r5, #4]\n    mov r1, #0x3f\n    bic r0, r1\n    lsl r1, r6, #0x10\n    lsr r2, r1, #0x10\n    mov r1, #0x3f\n    and r1, r2\n    orr r0, r1\n    strh r0, [r5, #4]\n    ldrh r1, [r5, #4]\n    ldr r0, _02019660 ; =0xFFFFF03F\n    and r1, r0\n    ldr r0, [sp, #0x18]\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    lsl r0, r0, #0x1a\n    lsr r0, r0, #0x14\n    orr r0, r1\n    strh r0, [r5, #4]\n    ldr r0, [sp]\n    ldr r1, _02019664 ; =0xFFFF1FFF\n    strb r0, [r5, #0xa]\n    mov r0, #0\n    strb r0, [r5, #6]\n    strb r0, [r5, #7]\n    ldrh r2, [r5, #4]\n    and r1, r2\n    strh r1, [r5, #4]\n    mov r1, #1\n    ldrh r2, [r5, #4]\n    lsl r1, r1, #0xc\n    orr r1, r2\n    strh r1, [r5, #4]\n    strb r0, [r5, #0xc]\n    mov r1, #0x20\n    strb r1, [r5, #0xd]\n    strb r0, [r5, #0xe]\n    mov r0, #0x18\n    strb r0, [r5, #0xf]\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02019660: .word 0xFFFFF03F\n    _02019664: .word 0xFFFF1FFF"
    );
    #endif
}

void sub_02019668(void) {
    /* Original at 0x02019668 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r3, [r0, #4]\n    lsl r1, r1, #4\n    add r4, r3, r1\n    add r0, r2, #0\n    ldrh r2, [r4, #4]\n    ldr r1, [r3, r1]\n    lsl r3, r2, #0x1a\n    lsl r2, r2, #0x14\n    lsr r3, r3, #0x1a\n    lsr r2, r2, #0x1a\n    mul r2, r3\n    lsl r2, r2, #1\n    bl MIi_CpuCopy16\n    pop {r4, pc}"
    );
    #endif
}

void sub_02019688(void) {
    /* Original at 0x02019688 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #8\n    add r5, r0, #0\n    ldr r0, [r5, #0xc]\n    add r4, r1, #0\n    str r0, [sp]\n    add r0, r2, #0\n    add r1, r3, #0\n    ldr r2, [sp, #0x18]\n    add r3, sp, #4\n    bl GfGfxLoader_GetScrnData\n    ldr r2, [sp, #4]\n    add r6, r0, #0\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, #0xc\n    bl sub_02019668\n    add r0, r6, #0\n    bl Heap_Free\n    add sp, #8\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void sub_020196B8(void) {
    /* Original at 0x020196B8 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #8\n    add r5, r0, #0\n    ldr r0, [r5, #0xc]\n    add r4, r1, #0\n    str r0, [sp]\n    add r0, r2, #0\n    add r1, r3, #0\n    ldr r2, [sp, #0x18]\n    add r3, sp, #4\n    bl GfGfxLoader_GetScrnDataFromOpenNarc\n    ldr r2, [sp, #4]\n    add r6, r0, #0\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, #0xc\n    bl sub_02019668\n    add r0, r6, #0\n    bl Heap_Free\n    add sp, #8\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void sub_020196E8(void) {
    /* Original at 0x020196E8 */
    /* Requires manual decompilation - 131 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x38\n    str r0, [sp, #0x1c]\n    add r0, r2, #0\n    ldr r2, [sp, #0x1c]\n    lsl r1, r1, #4\n    ldr r2, [r2, #4]\n    add r4, r2, r1\n    strb r0, [r4, #6]\n    strb r3, [r4, #7]\n    mov r1, #0xd\n    ldrsb r1, [r4, r1]\n    str r1, [sp, #0x28]\n    cmp r0, r1\n    bge _020197E6\n    mov r1, #0xf\n    ldrsb r1, [r4, r1]\n    str r1, [sp, #0x20]\n    cmp r3, r1\n    bge _020197E6\n    ldrh r1, [r4, #4]\n    lsl r2, r1, #0x1a\n    lsr r2, r2, #0x1a\n    str r2, [sp, #0x2c]\n    add r7, r0, r2\n    mov r2, #0xc\n    ldrsb r2, [r4, r2]\n    mov ip, r2\n    cmp r7, r2\n    blt _020197E6\n    lsl r1, r1, #0x14\n    lsr r1, r1, #0x1a\n    str r1, [sp, #0x24]\n    add r6, r3, r1\n    mov r1, #0xe\n    ldrsb r2, [r4, r1]\n    cmp r6, r2\n    blt _020197E6\n    lsl r1, r0, #0x18\n    lsr r1, r1, #0x18\n    str r1, [sp, #0x34]\n    ldr r1, [sp, #0x2c]\n    mov r5, #0\n    lsl r1, r1, #0x18\n    str r5, [sp, #0x30]\n    mov r5, ip\n    lsr r1, r1, #0x18\n    cmp r0, r5\n    bge _02019762\n    mov r5, ip\n    lsl r5, r5, #0x18\n    lsr r5, r5, #0x18\n    str r5, [sp, #0x34]\n    mov r5, ip\n    sub r0, r5, r0\n    sub r1, r1, r0\n    lsl r0, r0, #0x18\n    lsl r1, r1, #0x18\n    lsr r0, r0, #0x18\n    lsr r1, r1, #0x18\n    str r0, [sp, #0x30]\n    ldr r0, [sp, #0x28]\n    cmp r7, r0\n    blt _02019770\n    sub r0, r7, r0\n    sub r0, r1, r0\n    lsl r0, r0, #0x18\n    lsr r1, r0, #0x18\n    lsl r0, r3, #0x18\n    lsr r7, r0, #0x18\n    ldr r0, [sp, #0x24]\n    mov r5, #0\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    cmp r3, r2\n    bge _02019790\n    lsl r5, r2, #0x18\n    sub r2, r2, r3\n    sub r0, r0, r2\n    lsl r0, r0, #0x18\n    lsl r2, r2, #0x18\n    lsr r7, r5, #0x18\n    lsr r0, r0, #0x18\n    lsr r5, r2, #0x18\n    ldr r2, [sp, #0x20]\n    cmp r6, r2\n    blt _0201979E\n    sub r2, r6, r2\n    sub r0, r0, r2\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r1, [sp]\n    str r0, [sp, #4]\n    ldr r0, [r4]\n    add r3, r7, #0\n    str r0, [sp, #8]\n    ldr r0, [sp, #0x30]\n    str r0, [sp, #0xc]\n    str r5, [sp, #0x10]\n    ldr r0, [sp, #0x2c]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #0x14]\n    ldr r0, [sp, #0x24]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #0x18]\n    ldr r0, [sp, #0x1c]\n    ldrb r1, [r4, #0xa]\n    ldr r0, [r0]\n    ldr r2, [sp, #0x34]\n    bl CopyToBgTilemapRect\n    ldr r2, [sp, #0x1c]\n    ldr r0, [sp, #0x1c]\n    ldrh r2, [r2, #0xa]\n    ldrb r1, [r4, #0xa]\n    ldr r0, [r0]\n    lsl r2, r2, #0x11\n    lsr r3, r2, #0xf\n    ldr r2, _020197EC ; =_020F6298\n    ldr r2, [r2, r3]\n    blx r2\n    ldrh r1, [r4, #4]\n    ldr r0, _020197F0 ; =0xFFFFEFFF\n    and r0, r1\n    strh r0, [r4, #4]\n    add sp, #0x38\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _020197EC: .word _020F6298\n    _020197F0: .word 0xFFFFEFFF"
    );
    #endif
}

void sub_020197F4(void) {
    sub_020196E8(6, 7);
}

void sub_0201980C(void) {
    /* Original at 0x0201980C */
    /* Requires manual decompilation - 118 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x2c\n    ldr r2, [r0, #4]\n    str r0, [sp, #0x10]\n    lsl r0, r1, #4\n    add r4, r2, r0\n    mov r0, #1\n    ldrh r1, [r4, #4]\n    lsl r0, r0, #0xc\n    orr r0, r1\n    strh r0, [r4, #4]\n    mov r0, #0xd\n    ldrsb r6, [r4, r0]\n    mov r0, #6\n    ldrsb r0, [r4, r0]\n    cmp r0, r6\n    bge _020198F4\n    mov r1, #0xf\n    ldrsb r1, [r4, r1]\n    str r1, [sp, #0x28]\n    mov r1, #7\n    ldrsb r3, [r4, r1]\n    ldr r1, [sp, #0x28]\n    cmp r3, r1\n    bge _020198F4\n    ldrh r2, [r4, #4]\n    lsl r1, r2, #0x1a\n    lsr r1, r1, #0x1a\n    str r1, [sp, #0x24]\n    add r7, r0, r1\n    mov r1, #0xc\n    ldrsb r1, [r4, r1]\n    mov ip, r1\n    cmp r7, r1\n    blt _020198F4\n    lsl r1, r2, #0x14\n    lsr r1, r1, #0x1a\n    str r1, [sp, #0x1c]\n    ldr r1, [sp, #0x1c]\n    str r3, [sp, #0x18]\n    add r2, r3, r1\n    mov r1, #0xe\n    ldrsb r1, [r4, r1]\n    str r1, [sp, #0x14]\n    cmp r2, r1\n    blt _020198F4\n    ldr r1, [sp, #0x24]\n    mov r5, ip\n    lsl r1, r1, #0x18\n    str r0, [sp, #0x20]\n    asr r1, r1, #0x18\n    cmp r0, r5\n    bge _02019884\n    mov r5, ip\n    str r5, [sp, #0x20]\n    mov r5, ip\n    sub r0, r5, r0\n    sub r0, r1, r0\n    lsl r0, r0, #0x18\n    asr r1, r0, #0x18\n    cmp r7, r6\n    blt _02019890\n    sub r0, r7, r6\n    sub r0, r1, r0\n    lsl r0, r0, #0x18\n    asr r1, r0, #0x18\n    ldr r0, [sp, #0x1c]\n    ldr r5, [sp, #0x14]\n    lsl r0, r0, #0x18\n    asr r0, r0, #0x18\n    cmp r3, r5\n    bge _020198AA\n    add r3, r5, #0\n    add r6, r5, #0\n    ldr r5, [sp, #0x18]\n    sub r5, r6, r5\n    sub r0, r0, r5\n    lsl r0, r0, #0x18\n    asr r0, r0, #0x18\n    ldr r5, [sp, #0x28]\n    cmp r2, r5\n    blt _020198B8\n    sub r2, r2, r5\n    sub r0, r0, r2\n    lsl r0, r0, #0x18\n    asr r0, r0, #0x18\n    lsl r2, r3, #0x18\n    lsr r2, r2, #0x18\n    lsl r1, r1, #0x18\n    str r2, [sp]\n    lsr r1, r1, #0x18\n    lsl r0, r0, #0x18\n    str r1, [sp, #4]\n    lsr r0, r0, #0x18\n    str r0, [sp, #8]\n    mov r0, #0x10\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #0x10]\n    ldr r3, [sp, #0x20]\n    ldrb r1, [r4, #0xa]\n    lsl r3, r3, #0x18\n    ldr r0, [r0]\n    mov r2, #0\n    lsr r3, r3, #0x18\n    bl FillBgTilemapRect\n    ldr r2, [sp, #0x10]\n    ldr r0, [sp, #0x10]\n    ldrh r2, [r2, #0xa]\n    ldrb r1, [r4, #0xa]\n    ldr r0, [r0]\n    lsl r2, r2, #0x11\n    lsr r3, r2, #0xf\n    ldr r2, _020198F8 ; =_020F6298\n    ldr r2, [r2, r3]\n    blx r2\n    add sp, #0x2c\n    pop {r4, r5, r6, r7, pc}\n    _020198F8: .word _020F6298"
    );
    #endif
}

void sub_020198FC(void) {
    /* Original at 0x020198FC */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    ldr r4, [r0, #4]\n    lsl r1, r1, #4\n    add r1, r4, r1\n    strb r2, [r1, #8]\n    ldr r2, _0201992C ; =0xFFFFFFF8\n    strb r3, [r1, #9]\n    add r2, sp\n    ldrb r2, [r2, #0x10]\n    strb r2, [r1, #0xb]\n    ldrh r3, [r1, #4]\n    ldr r2, _02019930 ; =0xFFFF1FFF\n    and r3, r2\n    mov r2, #2\n    lsl r2, r2, #0xc\n    orr r3, r2\n    strh r3, [r1, #4]\n    ldrh r3, [r0, #0xa]\n    lsl r1, r2, #2\n    orr r1, r3\n    strh r1, [r0, #0xa]\n    pop {r3, r4}\n    bx lr\n    nop\n    _0201992C: .word 0xFFFFFFF8\n    _02019930: .word 0xFFFF1FFF"
    );
    #endif
}

void sub_02019934(void) {
    /* Original at 0x02019934 */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldrh r1, [r5, #0xa]\n    lsl r0, r1, #0x10\n    lsr r0, r0, #0x1f\n    beq _02019970\n    ldr r0, _02019974 ; =0xFFFF7FFF\n    add r6, r5, #0\n    and r0, r1\n    strh r0, [r5, #0xa]\n    ldrh r0, [r5, #8]\n    add r6, #0xa\n    mov r4, #0\n    cmp r0, #0\n    bls _02019970\n    mov r7, #2\n    lsl r7, r7, #0xe\n    add r0, r5, #0\n    add r1, r4, #0\n    bl sub_02019978\n    cmp r0, #1\n    bne _02019968\n    ldrh r0, [r6]\n    orr r0, r7\n    strh r0, [r6]\n    ldrh r0, [r5, #8]\n    add r4, r4, #1\n    cmp r4, r0\n    blo _02019956\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02019974: .word 0xFFFF7FFF"
    );
    #endif
}

void sub_02019978(void) {
    /* Original at 0x02019978 */
    /* Requires manual decompilation - 51 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r6, r1, #0\n    ldr r2, [r5, #4]\n    lsl r4, r6, #4\n    add r2, r2, r4\n    ldrh r2, [r2, #4]\n    lsl r2, r2, #0x10\n    lsr r2, r2, #0x1d\n    bne _02019990\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    bl sub_0201980C\n    ldr r2, [r5, #4]\n    add r1, r2, #6\n    add r3, r2, r4\n    mov r2, #8\n    ldrsb r0, [r1, r4]\n    ldrsb r2, [r3, r2]\n    add r0, r0, r2\n    strb r0, [r1, r4]\n    ldr r2, [r5, #4]\n    add r1, r2, #7\n    add r3, r2, r4\n    mov r2, #9\n    ldrsb r0, [r1, r4]\n    ldrsb r2, [r3, r2]\n    add r0, r0, r2\n    strb r0, [r1, r4]\n    add r0, r5, #0\n    add r1, r6, #0\n    bl sub_020197F4\n    ldr r1, [r5, #4]\n    add r1, #0xb\n    ldrb r0, [r1, r4]\n    sub r0, r0, #1\n    strb r0, [r1, r4]\n    ldr r0, [r5, #4]\n    add r2, r0, r4\n    ldrb r0, [r2, #0xb]\n    cmp r0, #0\n    bne _020199DC\n    ldrh r1, [r2, #4]\n    ldr r0, _020199E0 ; =0xFFFF1FFF\n    and r0, r1\n    strh r0, [r2, #4]\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    _020199E0: .word 0xFFFF1FFF"
    );
    #endif
}

void sub_020199E4(void) {
    /* Original at 0x020199E4 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r2, [r0, #4]\n    lsl r0, r1, #4\n    add r0, r2, r0\n    ldrh r0, [r0, #4]\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x1d\n    bx lr"
    );
    #endif
}

void sub_020199F4(void) {
    /* Original at 0x020199F4 */
    /* Requires manual decompilation - 53 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    str r2, [sp]\n    ldr r2, [r0, #4]\n    lsl r0, r1, #4\n    add r1, r2, r0\n    ldr r0, [r2, r0]\n    add r7, r3, #0\n    mov ip, r0\n    ldrh r0, [r1, #4]\n    add r1, sp, #0x10\n    lsl r0, r0, #0x1a\n    lsr r0, r0, #0x1a\n    mov lr, r0\n    ldrb r0, [r1, #0x14]\n    add r0, r7, r0\n    str r0, [sp, #4]\n    cmp r7, r0\n    bge _02019A58\n    ldrb r0, [r1, #0x18]\n    ldrb r1, [r1, #0x10]\n    ldr r6, _02019A5C ; =0x00000FFF\n    lsl r5, r0, #0xc\n    ldr r0, [sp]\n    add r2, r0, r1\n    ldr r1, [sp]\n    add r0, r1, #0\n    cmp r0, r2\n    bge _02019A4C\n    mov r0, lr\n    mul r0, r7\n    lsl r3, r0, #1\n    mov r0, ip\n    add r3, r0, r3\n    lsl r0, r1, #1\n    ldrh r4, [r3, r0]\n    and r4, r6\n    orr r4, r5\n    strh r4, [r3, r0]\n    add r0, r1, #1\n    lsl r0, r0, #0x10\n    lsr r1, r0, #0x10\n    cmp r1, r2\n    blt _02019A38\n    add r0, r7, #1\n    lsl r0, r0, #0x10\n    lsr r7, r0, #0x10\n    ldr r0, [sp, #4]\n    cmp r7, r0\n    blt _02019A26\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    _02019A5C: .word 0x00000FFF"
    );
    #endif
}

void sub_02019A60(void) {
    /* Original at 0x02019A60 */
    /* Requires manual decompilation - 84 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    str r0, [sp]\n    lsl r0, r1, #4\n    str r0, [sp, #0xc]\n    ldr r0, [sp]\n    mov r6, #0\n    ldr r1, [r0, #4]\n    ldr r0, [sp, #0xc]\n    add r3, r1, r0\n    ldr r0, [r1, r0]\n    mov ip, r0\n    ldrh r0, [r3, #4]\n    lsl r0, r0, #0x1a\n    lsr r0, r0, #0x1a\n    mov lr, r0\n    ldrh r0, [r2, #0xa]\n    lsl r0, r0, #0x11\n    lsr r7, r0, #0x11\n    ldrb r0, [r2, #9]\n    lsl r0, r0, #0x1c\n    lsr r0, r0, #0x10\n    str r0, [sp, #8]\n    ldrb r0, [r2, #8]\n    cmp r0, #0\n    ble _02019B04\n    ldrb r0, [r2, #6]\n    add r3, r0, r6\n    ldr r0, [sp]\n    ldr r1, [r0, #4]\n    ldr r0, [sp, #0xc]\n    add r0, r1, r0\n    ldrh r0, [r0, #4]\n    lsl r0, r0, #0x14\n    lsr r0, r0, #0x1a\n    cmp r3, r0\n    bge _02019B04\n    ldrb r0, [r2, #7]\n    mov r1, #0\n    str r0, [sp, #4]\n    cmp r0, #0\n    ble _02019AF0\n    ldr r0, [sp]\n    ldrb r5, [r2, #5]\n    ldr r3, [r0, #4]\n    ldr r0, [sp, #0xc]\n    add r4, r5, r1\n    add r0, r3, r0\n    ldrh r0, [r0, #4]\n    lsl r0, r0, #0x1a\n    lsr r0, r0, #0x1a\n    cmp r4, r0\n    bge _02019AF0\n    ldr r0, [sp, #8]\n    add r3, r7, r1\n    add r0, r0, r3\n    ldrb r3, [r2, #6]\n    add r4, r3, r6\n    mov r3, lr\n    mul r4, r3\n    add r3, r5, r4\n    add r3, r1, r3\n    lsl r4, r3, #1\n    mov r3, ip\n    strh r0, [r3, r4]\n    add r0, r1, #1\n    lsl r0, r0, #0x10\n    lsr r1, r0, #0x10\n    ldrb r0, [r2, #7]\n    str r0, [sp, #4]\n    cmp r1, r0\n    blt _02019AB4\n    ldr r0, [sp, #4]\n    add r0, r7, r0\n    lsl r0, r0, #0x10\n    lsr r7, r0, #0x10\n    add r0, r6, #1\n    lsl r0, r0, #0x10\n    lsr r6, r0, #0x10\n    ldrb r0, [r2, #8]\n    cmp r6, r0\n    blt _02019A94\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_02019B08(void) {
    /* Original at 0x02019B08 */
    /* Requires manual decompilation - 4 instructions */
    #ifdef MWERKS
    asm(
        "ldr r2, [r0, #4]\n    lsl r0, r1, #4\n    ldr r0, [r2, r0]\n    bx lr"
    );
    #endif
}

void sub_02019B10(void) {
    /* Original at 0x02019B10 */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "ldr r2, [r0, #4]\n    lsl r0, r1, #4\n    add r0, r2, r0\n    ldrb r0, [r0, #0xa]\n    bx lr"
    );
    #endif
}

void sub_02019B1C(void) {
    /* Original at 0x02019B1C */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5}\n    cmp r2, #0\n    beq _02019B2E\n    ldr r5, [r0, #4]\n    lsl r4, r1, #4\n    add r5, r5, r4\n    mov r4, #6\n    ldrsb r4, [r5, r4]\n    strb r4, [r2]\n    cmp r3, #0\n    beq _02019B3E\n    ldr r2, [r0, #4]\n    lsl r0, r1, #4\n    add r1, r2, r0\n    mov r0, #7\n    ldrsb r0, [r1, r0]\n    strb r0, [r3]\n    pop {r4, r5}\n    bx lr"
    );
    #endif
}

void sub_02019B44(void) {
    /* Original at 0x02019B44 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5}\n    cmp r2, #0\n    beq _02019B58\n    ldr r5, [r0, #4]\n    lsl r4, r1, #4\n    add r4, r5, r4\n    ldrh r4, [r4, #4]\n    lsl r4, r4, #0x1a\n    lsr r4, r4, #0x1a\n    strh r4, [r2]\n    cmp r3, #0\n    beq _02019B6A\n    ldr r2, [r0, #4]\n    lsl r0, r1, #4\n    add r0, r2, r0\n    ldrh r0, [r0, #4]\n    lsl r0, r0, #0x14\n    lsr r0, r0, #0x1a\n    strh r0, [r3]\n    pop {r4, r5}\n    bx lr"
    );
    #endif
}

void sub_02019B70(void) {
    /* Original at 0x02019B70 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    ldr r4, [r0, #4]\n    lsl r1, r1, #4\n    add r4, r4, r1\n    strb r2, [r4, #0xc]\n    ldr r2, [r0, #4]\n    add r2, r2, r1\n    strb r3, [r2, #0xd]\n    ldr r3, _02019B9C ; =0xFFFFFFF8\n    mov r2, #0x10\n    add r3, sp\n    ldrsb r4, [r3, r2]\n    ldr r2, [r0, #4]\n    add r2, r2, r1\n    strb r4, [r2, #0xe]\n    mov r2, #0x14\n    ldr r0, [r0, #4]\n    ldrsb r2, [r3, r2]\n    add r0, r0, r1\n    strb r2, [r0, #0xf]\n    pop {r3, r4}\n    bx lr\n    _02019B9C: .word 0xFFFFFFF8"
    );
    #endif
}

void sub_02019BA0(void) {
    /* Original at 0x02019BA0 */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}
