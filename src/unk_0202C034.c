/* Decompiled from asm/unk_0202C034.s */
#include "global.h"

void sub_0202C034(void) {
    r0 = r0 << 6;
}

void sub_0202C03C(void) {
    /* Original at 0x0202C03C */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r0, #0\n    mov r2, #0x23\n    mov r0, #0\n    add r1, r7, #0\n    lsl r2, r2, #6\n    bl MIi_CpuClearFast\n    mov r0, #0x1d\n    lsl r0, r0, #4\n    add r1, r0, #0\n    add r2, r0, #0\n    ldr r4, _0202C084 ; =0x0000FFFF\n    mov r5, #0\n    add r6, r7, #0\n    mov r3, #2\n    sub r1, #0x10\n    add r2, #0x1e\n    strh r4, [r6, r0]\n    strh r4, [r6, r1]\n    strb r3, [r6, r2]\n    add r5, r5, #1\n    add r6, #0x38\n    cmp r5, #0x20\n    blt _0202C060\n    add r0, r7, #0\n    bl sub_0203A01C\n    mov r2, #0x23\n    ldr r1, _0202C088 ; =_021D2230\n    add r0, r7, #0\n    lsl r2, r2, #6\n    bl MI_CpuCopy8\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0202C084: .word 0x0000FFFF\n    _0202C088: .word _021D2230"
    );
    #endif
}

void sub_0202C08C(void) {
    /* Original at 0x0202C08C */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void sub_0202C090(void) {
    /* Original at 0x0202C090 */
    /* Requires manual decompilation - 108 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    add r7, r2, #0\n    cmp r4, #0x20\n    blt _0202C0A0\n    bl GF_AssertFail\n    cmp r7, #0xc\n    bhi _0202C170\n    add r0, r7, r7\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0202C0B0: ; jump table\n    mov r0, #0x38\n    mul r0, r4\n    add r1, r5, r0\n    mov r0, #0x1e\n    lsl r0, r0, #4\n    ldr r6, [r1, r0]\n    b _0202C170\n    mov r0, #0x38\n    mul r0, r4\n    add r1, r5, r0\n    mov r0, #0x79\n    lsl r0, r0, #2\n    ldrh r6, [r1, r0]\n    b _0202C170\n    mov r0, #0x38\n    mul r0, r4\n    add r1, r5, r0\n    ldr r0, _0202C174 ; =0x000001E6\n    ldrh r6, [r1, r0]\n    b _0202C170\n    mov r0, #0x38\n    mul r0, r4\n    add r1, r5, r0\n    mov r0, #0x7a\n    lsl r0, r0, #2\n    ldrh r6, [r1, r0]\n    b _0202C170\n    mov r0, #0x38\n    mul r0, r4\n    add r1, r5, r0\n    ldr r0, _0202C178 ; =0x000001EA\n    ldrh r6, [r1, r0]\n    b _0202C170\n    mov r0, #0x38\n    mul r0, r4\n    add r1, r5, r0\n    mov r0, #0x7b\n    lsl r0, r0, #2\n    ldrb r6, [r1, r0]\n    b _0202C170\n    mov r0, #0x38\n    mul r0, r4\n    add r1, r5, r0\n    ldr r0, _0202C17C ; =0x000001ED\n    ldrb r6, [r1, r0]\n    b _0202C170\n    mov r0, #0x38\n    mul r0, r4\n    add r1, r5, r0\n    ldr r0, _0202C180 ; =0x000001EE\n    ldrb r6, [r1, r0]\n    b _0202C170\n    mov r0, #0x38\n    mul r0, r4\n    add r1, r5, r0\n    ldr r0, _0202C184 ; =0x000001EF\n    ldrb r6, [r1, r0]\n    b _0202C170\n    mov r0, #0x38\n    mul r0, r4\n    add r1, r5, r0\n    mov r0, #0x1f\n    lsl r0, r0, #4\n    ldrh r6, [r1, r0]\n    b _0202C170\n    mov r0, #0x38\n    mul r0, r4\n    add r1, r5, r0\n    ldr r0, _0202C188 ; =0x000001F2\n    ldrh r6, [r1, r0]\n    b _0202C170\n    mov r0, #0x38\n    mul r0, r4\n    add r1, r5, r0\n    mov r0, #0x7d\n    lsl r0, r0, #2\n    ldrh r6, [r1, r0]\n    b _0202C170\n    mov r0, #0x38\n    mul r0, r4\n    add r1, r5, r0\n    ldr r0, _0202C18C ; =0x000001F6\n    ldrh r6, [r1, r0]\n    add r0, r6, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    _0202C174: .word 0x000001E6\n    _0202C178: .word 0x000001EA\n    _0202C17C: .word 0x000001ED\n    _0202C180: .word 0x000001EE\n    _0202C184: .word 0x000001EF\n    _0202C188: .word 0x000001F2\n    _0202C18C: .word 0x000001F6"
    );
    #endif
}

void sub_0202C190(void) {
    /* Original at 0x0202C190 */
    /* Requires manual decompilation - 68 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    add r7, r2, #0\n    add r6, r3, #0\n    cmp r4, #0x20\n    blt _0202C1A2\n    bl GF_AssertFail\n    cmp r7, #9\n    bhi _0202C228\n    add r0, r7, r7\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0202C1B2: ; jump table\n    mov r0, #0x38\n    mul r0, r4\n    add r1, r5, r0\n    mov r0, #0x1e\n    lsl r0, r0, #4\n    str r6, [r1, r0]\n    pop {r3, r4, r5, r6, r7, pc}\n    bl GF_AssertFail\n    pop {r3, r4, r5, r6, r7, pc}\n    bl GF_AssertFail\n    pop {r3, r4, r5, r6, r7, pc}\n    bl GF_AssertFail\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0x38\n    mul r0, r4\n    add r1, r5, r0\n    ldr r0, _0202C22C ; =0x000001EA\n    strh r6, [r1, r0]\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0x38\n    mul r0, r4\n    add r1, r5, r0\n    mov r0, #0x7b\n    lsl r0, r0, #2\n    strb r6, [r1, r0]\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0x38\n    mul r0, r4\n    add r1, r5, r0\n    ldr r0, _0202C230 ; =0x000001ED\n    strb r6, [r1, r0]\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0x38\n    mul r0, r4\n    add r1, r5, r0\n    ldr r0, _0202C234 ; =0x000001EE\n    strb r6, [r1, r0]\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0x38\n    mul r0, r4\n    add r1, r5, r0\n    ldr r0, _0202C238 ; =0x000001EF\n    strb r6, [r1, r0]\n    pop {r3, r4, r5, r6, r7, pc}\n    bl GF_AssertFail\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0202C22C: .word 0x000001EA\n    _0202C230: .word 0x000001ED\n    _0202C234: .word 0x000001EE\n    _0202C238: .word 0x000001EF"
    );
    #endif
}

void sub_0202C23C(void) {
    GF_AssertFail(0xc);
}

void sub_0202C254(void) {
    GF_AssertFail(0x1d, 0x38);
}

void sub_0202C270(void) {
    /* Original at 0x0202C270 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    add r6, r2, #0\n    cmp r4, #0x20\n    blt _0202C280\n    bl GF_AssertFail\n    mov r1, #0x1d\n    lsl r1, r1, #4\n    add r2, r5, r1\n    mov r1, #0x38\n    mul r1, r4\n    add r1, r2, r1\n    add r0, r6, #0\n    mov r2, #0x10\n    bl CopyStringToU16Array\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void sub_0202C298(void) {
    GF_AssertFail(0x38, 7);
}

void sub_0202C2B4(void) {
    /* Original at 0x0202C2B4 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    add r6, r2, #0\n    cmp r4, #0x20\n    blt _0202C2C4\n    bl GF_AssertFail\n    mov r1, #7\n    lsl r1, r1, #6\n    add r2, r5, r1\n    mov r1, #0x38\n    mul r1, r4\n    add r1, r2, r1\n    add r0, r6, #0\n    mov r2, #0x10\n    bl CopyStringToU16Array\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void sub_0202C2DC(void) {
    /* Original at 0x0202C2DC */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    cmp r4, #0x20\n    blt _0202C2EA\n    bl GF_AssertFail\n    mov r0, #0xc\n    add r5, #0x40\n    mul r0, r4\n    add r0, r5, r0\n    bl DWC_IsValidFriendData\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_0202C2F8(void) {
    /* Original at 0x0202C2F8 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    mov r5, #0\n    add r6, r0, #0\n    add r4, r5, #0\n    add r0, r6, #0\n    add r1, r4, #0\n    bl sub_0202C2DC\n    cmp r0, #0\n    beq _0202C30E\n    add r5, r5, #1\n    add r4, r4, #1\n    cmp r4, #0x20\n    blt _0202C300\n    add r0, r5, #0\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void sub_0202C318(void) {
    /* Original at 0x0202C318 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    mov r6, #0\n    add r5, r0, #0\n    add r4, r6, #0\n    add r0, r5, #0\n    add r1, r4, #0\n    bl sub_0202C2DC\n    cmp r0, #0\n    beq _0202C32E\n    add r6, r4, #1\n    add r4, r4, #1\n    cmp r4, #0x20\n    blt _0202C320\n    add r0, r6, #0\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void sub_0202C338(void) {
    /* Original at 0x0202C338 */
    /* Requires manual decompilation - 81 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    str r0, [sp]\n    add r5, r1, #0\n    bmi _0202C3D8\n    cmp r5, #0x20\n    bge _0202C3D8\n    cmp r5, #0x1f\n    bge _0202C39E\n    mov r1, #7\n    lsl r1, r1, #6\n    add r0, r0, r1\n    str r0, [sp, #4]\n    mov r0, #0x38\n    add r1, r5, #0\n    mul r1, r0\n    ldr r0, [sp, #4]\n    add r6, r0, r1\n    ldr r0, [sp]\n    add r1, r5, #0\n    str r0, [sp, #8]\n    add r0, #0x40\n    str r0, [sp, #8]\n    mov r0, #0xc\n    mul r1, r0\n    ldr r0, [sp, #8]\n    add r4, r0, r1\n    add r7, r5, #1\n    mov r0, #0x38\n    add r1, r7, #0\n    mul r1, r0\n    ldr r0, [sp, #4]\n    mov r2, #0x38\n    add r0, r0, r1\n    add r1, r6, #0\n    bl MI_CpuCopy8\n    mov r0, #0xc\n    add r1, r7, #0\n    mul r1, r0\n    ldr r0, [sp, #8]\n    mov r2, #0xc\n    add r0, r0, r1\n    add r1, r4, #0\n    bl MI_CpuCopy8\n    add r5, r5, #1\n    add r6, #0x38\n    add r4, #0xc\n    cmp r5, #0x1f\n    blt _0202C36E\n    mov r2, #7\n    ldr r1, [sp]\n    lsl r2, r2, #6\n    add r2, r1, r2\n    ldr r1, _0202C3DC ; =0x000006C8\n    mov r0, #0\n    add r1, r2, r1\n    mov r2, #0x38\n    bl MIi_CpuClearFast\n    ldr r2, [sp]\n    mov r1, #0x5d\n    add r2, #0x40\n    lsl r1, r1, #2\n    add r1, r2, r1\n    mov r0, #0\n    mov r2, #0xc\n    bl MIi_CpuClearFast\n    ldr r2, _0202C3E0 ; =0x00000898\n    ldr r3, _0202C3E4 ; =0x0000FFFF\n    ldr r0, [sp]\n    add r1, r2, #0\n    strh r3, [r0, r2]\n    sub r1, #0x10\n    strh r3, [r0, r1]\n    mov r1, #2\n    add r2, #0x1e\n    strb r1, [r0, r2]\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    _0202C3DC: .word 0x000006C8\n    _0202C3E0: .word 0x00000898\n    _0202C3E4: .word 0x0000FFFF"
    );
    #endif
}

void sub_0202C3E8(void) {
    /* Original at 0x0202C3E8 */
    /* Requires manual decompilation - 61 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r5, r1, #0\n    add r6, r2, #0\n    str r0, [sp]\n    cmp r5, #0\n    blt _0202C462\n    cmp r5, #0x20\n    bge _0202C462\n    cmp r6, #0\n    blt _0202C462\n    cmp r6, #0x20\n    bge _0202C462\n    mov r2, #0x38\n    lsl r1, r2, #3\n    add r0, r0, r1\n    str r0, [sp, #4]\n    add r4, r6, #0\n    add r3, r5, #0\n    mul r4, r2\n    ldr r1, [sp, #4]\n    mul r3, r2\n    add r0, r0, r4\n    add r1, r1, r3\n    bl MI_CpuCopy8\n    ldr r7, [sp]\n    mov r2, #0xc\n    add r0, r6, #0\n    add r1, r5, #0\n    mul r0, r2\n    add r7, #0x40\n    mul r1, r2\n    str r0, [sp, #8]\n    add r0, r7, r0\n    add r1, r7, r1\n    bl MI_CpuCopy8\n    ldr r1, [sp, #4]\n    mov r0, #0\n    add r1, r1, r4\n    mov r2, #0x38\n    bl MIi_CpuClearFast\n    ldr r1, [sp, #8]\n    mov r0, #0\n    add r1, r7, r1\n    mov r2, #0xc\n    bl MIi_CpuClearFast\n    ldr r0, [sp]\n    mov r1, #0x1d\n    add r2, r0, r4\n    ldr r3, _0202C468 ; =0x0000FFFF\n    lsl r1, r1, #4\n    strh r3, [r2, r1]\n    ldr r0, [sp, #4]\n    add r1, #0x1e\n    strh r3, [r0, r4]\n    mov r0, #2\n    strb r0, [r2, r1]\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _0202C468: .word 0x0000FFFF"
    );
    #endif
}

void sub_0202C46C(void) {
    /* Original at 0x0202C46C */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    mov r5, #0\n    mvn r5, r5\n    add r6, r0, #0\n    mov r4, #0\n    add r7, r5, #0\n    add r0, r6, #0\n    add r1, r4, #0\n    bl sub_0202C2DC\n    cmp r0, #0\n    beq _0202C49C\n    mov r0, #0\n    mvn r0, r0\n    cmp r5, r0\n    beq _0202C4A6\n    add r0, r6, #0\n    add r1, r5, #0\n    add r2, r4, #0\n    bl sub_0202C3E8\n    add r4, r7, #0\n    add r5, r7, #0\n    b _0202C4A6\n    mov r0, #0\n    mvn r0, r0\n    cmp r5, r0\n    bne _0202C4A6\n    add r5, r4, #0\n    add r4, r4, #1\n    cmp r4, #0x20\n    blt _0202C478\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_0202C4B0(void) {
    /* Original at 0x0202C4B0 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    add r0, sp, #0\n    add r4, r1, #0\n    bl GF_RTC_CopyDate\n    cmp r4, #0\n    blt _0202C4E6\n    cmp r4, #0x20\n    bge _0202C4E6\n    mov r0, #0x38\n    add r2, r4, #0\n    mul r2, r0\n    mov r0, #0x7d\n    ldr r1, [sp]\n    lsl r0, r0, #4\n    add r1, r1, r0\n    ldr r0, _0202C4EC ; =0x000001EA\n    add r3, r5, r2\n    strh r1, [r3, r0]\n    add r1, r0, #2\n    ldr r2, [sp, #4]\n    add r0, r0, #3\n    strb r2, [r3, r1]\n    ldr r1, [sp, #8]\n    strb r1, [r3, r0]\n    add sp, #0x10\n    pop {r3, r4, r5, pc}\n    nop\n    _0202C4EC: .word 0x000001EA"
    );
    #endif
}

void sub_0202C4F0(void) {
    /* Original at 0x0202C4F0 */
    /* Requires manual decompilation - 47 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r0, #0\n    cmp r1, #0\n    blt _0202C548\n    cmp r1, #0x20\n    bge _0202C548\n    mov r5, #0x79\n    mov r0, #0x38\n    lsl r5, r5, #2\n    mul r0, r1\n    add r5, r4, r5\n    ldrh r6, [r5, r0]\n    add r2, r6, r2\n    strh r2, [r5, r0]\n    ldrh r6, [r5, r0]\n    ldr r2, _0202C54C ; =0x0000270F\n    cmp r6, r2\n    bls _0202C516\n    strh r2, [r5, r0]\n    ldr r2, _0202C550 ; =0x000001E6\n    add r2, r4, r2\n    ldrh r5, [r2, r0]\n    add r3, r5, r3\n    strh r3, [r2, r0]\n    ldrh r5, [r2, r0]\n    ldr r3, _0202C54C ; =0x0000270F\n    cmp r5, r3\n    bls _0202C52A\n    strh r3, [r2, r0]\n    mov r2, #0x7a\n    lsl r2, r2, #2\n    add r2, r4, r2\n    ldrh r5, [r2, r0]\n    ldr r3, [sp, #0x10]\n    add r3, r5, r3\n    strh r3, [r2, r0]\n    ldrh r5, [r2, r0]\n    ldr r3, _0202C54C ; =0x0000270F\n    cmp r5, r3\n    bls _0202C542\n    strh r3, [r2, r0]\n    add r0, r4, #0\n    bl sub_0202C4B0\n    pop {r4, r5, r6, pc}\n    nop\n    _0202C54C: .word 0x0000270F\n    _0202C550: .word 0x000001E6"
    );
    #endif
}

void sub_0202C554(void) {
    /* Original at 0x0202C554 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    cmp r1, #0\n    blt _0202C57A\n    cmp r1, #0x20\n    bge _0202C57A\n    ldr r3, _0202C57C ; =0x000001F2\n    add r4, r0, r3\n    mov r3, #0x38\n    mul r3, r1\n    ldrh r5, [r4, r3]\n    add r2, r5, r2\n    strh r2, [r4, r3]\n    ldrh r5, [r4, r3]\n    ldr r2, _0202C580 ; =0x0000270F\n    cmp r5, r2\n    bls _0202C576\n    strh r2, [r4, r3]\n    bl sub_0202C4B0\n    pop {r3, r4, r5, pc}\n    _0202C57C: .word 0x000001F2\n    _0202C580: .word 0x0000270F"
    );
    #endif
}

void sub_0202C584(void) {
    /* Original at 0x0202C584 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    cmp r1, #0\n    blt _0202C5AC\n    cmp r1, #0x20\n    bge _0202C5AC\n    mov r3, #0x7d\n    lsl r3, r3, #2\n    add r4, r0, r3\n    mov r3, #0x38\n    mul r3, r1\n    ldrh r5, [r4, r3]\n    add r2, r5, r2\n    strh r2, [r4, r3]\n    ldrh r5, [r4, r3]\n    ldr r2, _0202C5B0 ; =0x0000270F\n    cmp r5, r2\n    bls _0202C5A8\n    strh r2, [r4, r3]\n    bl sub_0202C4B0\n    pop {r3, r4, r5, pc}\n    nop\n    _0202C5B0: .word 0x0000270F"
    );
    #endif
}

void sub_0202C5B4(void) {
    /* Original at 0x0202C5B4 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    cmp r1, #0\n    blt _0202C5DA\n    cmp r1, #0x20\n    bge _0202C5DA\n    ldr r3, _0202C5DC ; =0x000001F6\n    add r4, r0, r3\n    mov r3, #0x38\n    mul r3, r1\n    ldrh r5, [r4, r3]\n    add r2, r5, r2\n    strh r2, [r4, r3]\n    ldrh r5, [r4, r3]\n    ldr r2, _0202C5E0 ; =0x0000270F\n    cmp r5, r2\n    bls _0202C5D6\n    strh r2, [r4, r3]\n    bl sub_0202C4B0\n    pop {r3, r4, r5, pc}\n    _0202C5DC: .word 0x000001F6\n    _0202C5E0: .word 0x0000270F"
    );
    #endif
}

void sub_0202C5E4(void) {
    /* Original at 0x0202C5E4 */
    /* Requires manual decompilation - 129 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    cmp r2, #0\n    blt _0202C6DE\n    cmp r2, #0x20\n    bge _0202C6DE\n    cmp r1, #0\n    blt _0202C6DE\n    cmp r1, #0x20\n    bge _0202C6DE\n    add r4, r1, #0\n    mov r0, #0x38\n    mov r3, #0x79\n    mul r4, r0\n    add r1, r2, #0\n    lsl r3, r3, #2\n    mul r1, r0\n    add r2, r5, r3\n    add r6, r5, r4\n    ldrh r0, [r2, r1]\n    ldrh r3, [r6, r3]\n    add r0, r0, r3\n    strh r0, [r2, r1]\n    ldrh r3, [r2, r1]\n    ldr r0, _0202C6E0 ; =0x0000270F\n    cmp r3, r0\n    bls _0202C61C\n    strh r0, [r2, r1]\n    ldr r3, _0202C6E4 ; =0x000001E6\n    add r6, r5, r4\n    add r2, r5, r3\n    ldrh r0, [r2, r1]\n    ldrh r3, [r6, r3]\n    add r0, r0, r3\n    strh r0, [r2, r1]\n    ldrh r3, [r2, r1]\n    ldr r0, _0202C6E0 ; =0x0000270F\n    cmp r3, r0\n    bls _0202C634\n    strh r0, [r2, r1]\n    mov r3, #0x7a\n    lsl r3, r3, #2\n    add r2, r5, r3\n    add r6, r5, r4\n    ldrh r0, [r2, r1]\n    ldrh r3, [r6, r3]\n    add r0, r0, r3\n    strh r0, [r2, r1]\n    ldrh r3, [r2, r1]\n    ldr r0, _0202C6E0 ; =0x0000270F\n    cmp r3, r0\n    bls _0202C64E\n    strh r0, [r2, r1]\n    mov r3, #0x1f\n    lsl r3, r3, #4\n    add r2, r5, r3\n    add r6, r5, r4\n    ldrh r0, [r2, r1]\n    ldrh r3, [r6, r3]\n    add r0, r0, r3\n    strh r0, [r2, r1]\n    ldrh r3, [r2, r1]\n    ldr r0, _0202C6E0 ; =0x0000270F\n    cmp r3, r0\n    bls _0202C668\n    strh r0, [r2, r1]\n    ldr r3, _0202C6E8 ; =0x000001F2\n    add r6, r5, r4\n    add r2, r5, r3\n    ldrh r0, [r2, r1]\n    ldrh r3, [r6, r3]\n    add r0, r0, r3\n    strh r0, [r2, r1]\n    ldrh r3, [r2, r1]\n    ldr r0, _0202C6E0 ; =0x0000270F\n    cmp r3, r0\n    bls _0202C680\n    strh r0, [r2, r1]\n    mov r3, #0x7d\n    lsl r3, r3, #2\n    add r2, r5, r3\n    add r6, r5, r4\n    ldrh r0, [r2, r1]\n    ldrh r3, [r6, r3]\n    add r0, r0, r3\n    strh r0, [r2, r1]\n    ldrh r3, [r2, r1]\n    ldr r0, _0202C6E0 ; =0x0000270F\n    cmp r3, r0\n    bls _0202C69A\n    strh r0, [r2, r1]\n    ldr r3, _0202C6EC ; =0x000001F6\n    add r6, r5, r4\n    add r2, r5, r3\n    ldrh r0, [r2, r1]\n    ldrh r3, [r6, r3]\n    add r0, r0, r3\n    strh r0, [r2, r1]\n    ldrh r3, [r2, r1]\n    ldr r0, _0202C6E0 ; =0x0000270F\n    cmp r3, r0\n    bls _0202C6B2\n    strh r0, [r2, r1]\n    mov r0, #7\n    lsl r0, r0, #6\n    add r6, r5, r0\n    add r0, r6, r4\n    add r1, r6, r1\n    mov r2, #0x10\n    bl MIi_CpuCopyFast\n    mov r0, #0\n    add r1, r6, r4\n    mov r2, #0x38\n    bl MIi_CpuClearFast\n    mov r0, #0x1d\n    ldr r1, _0202C6F0 ; =0x0000FFFF\n    add r2, r5, r4\n    lsl r0, r0, #4\n    strh r1, [r2, r0]\n    strh r1, [r6, r4]\n    mov r1, #2\n    add r0, #0x1e\n    strb r1, [r2, r0]\n    pop {r4, r5, r6, pc}\n    _0202C6E0: .word 0x0000270F\n    _0202C6E4: .word 0x000001E6\n    _0202C6E8: .word 0x000001F2\n    _0202C6EC: .word 0x000001F6\n    _0202C6F0: .word 0x0000FFFF"
    );
    #endif
}

void sub_0202C6F4(void) {
    /* Original at 0x0202C6F4 */
    /* Requires manual decompilation - 3 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _0202C6F8 ; =_021D2230\n    bx lr\n    _0202C6F8: .word _021D2230"
    );
    #endif
}

void sub_0202C6FC(void) {
    /* Original at 0x0202C6FC */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    mov r1, #0x19\n    bl SaveArray_Get\n    mov r2, #0x23\n    ldr r1, _0202C710 ; =_021D2230\n    lsl r2, r2, #6\n    bl MI_CpuCopy8\n    pop {r3, pc}\n    _0202C710: .word _021D2230"
    );
    #endif
}

void sub_0202C714(void) {
    /* Original at 0x0202C714 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    mov r1, #0x19\n    bl SaveArray_Get\n    add r1, r0, #0\n    mov r2, #0x23\n    ldr r0, _0202C72C ; =_021D2230\n    lsl r2, r2, #6\n    bl MI_CpuCopy8\n    pop {r3, pc}\n    nop\n    _0202C72C: .word _021D2230"
    );
    #endif
}
