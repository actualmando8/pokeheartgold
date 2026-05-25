/* Decompiled from asm/unk_0200B150.s */
#include "global.h"

void OamManager_Create(void) {
    /* Original at 0x0200B150 */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0x14\n    add r4, r0, #0\n    cmp r4, #4\n    bge _0200B164\n    mov r0, #4\n    cmp r1, #0x7c\n    ble _0200B164\n    sub r4, r0, r4\n    sub r1, r1, r4\n    cmp r2, #1\n    bge _0200B174\n    mov r4, #1\n    cmp r3, #0x1e\n    ble _0200B176\n    sub r2, r4, r2\n    sub r3, r3, r2\n    b _0200B176\n    add r4, r2, #0\n    ldr r2, [sp, #0x20]\n    str r2, [sp]\n    ldr r2, [sp, #0x24]\n    str r2, [sp, #4]\n    ldr r2, [sp, #0x28]\n    str r2, [sp, #8]\n    ldr r2, [sp, #0x2c]\n    str r2, [sp, #0xc]\n    ldr r2, [sp, #0x30]\n    str r2, [sp, #0x10]\n    add r2, r4, #0\n    bl sub_0200B194\n    add sp, #0x14\n    pop {r3, r4, pc}"
    );
    #endif
}

void sub_0200B194(void) {
    /* Original at 0x0200B194 */
    /* Requires manual decompilation - 64 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r5, r0, #0\n    ldr r0, _0200B220 ; =_021D0EB0\n    add r4, r1, #0\n    ldr r0, [r0]\n    add r6, r2, #0\n    add r7, r3, #0\n    cmp r0, #0\n    beq _0200B1AC\n    bl GF_AssertFail\n    ldr r0, [sp, #0x30]\n    mov r1, #0x3c\n    bl Heap_Alloc\n    ldr r1, _0200B220 ; =_021D0EB0\n    cmp r0, #0\n    str r0, [r1]\n    bne _0200B1C0\n    bl GF_AssertFail\n    ldr r1, _0200B220 ; =_021D0EB0\n    lsl r3, r6, #0x10\n    ldr r2, [sp, #0x30]\n    ldr r0, [r1]\n    lsr r3, r3, #0x10\n    str r2, [r0, #0x38]\n    lsl r0, r7, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    ldr r0, [r1]\n    lsl r1, r5, #0x10\n    lsl r2, r4, #0x10\n    lsr r1, r1, #0x10\n    lsr r2, r2, #0x10\n    bl NNS_G2dGetNewOamManagerInstance\n    cmp r0, #0\n    bne _0200B1EC\n    bl GF_AssertFail\n    ldr r0, [sp, #0x2c]\n    ldr r1, [sp, #0x20]\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r0, _0200B220 ; =_021D0EB0\n    ldr r2, [sp, #0x24]\n    ldr r3, [sp, #0x28]\n    ldr r0, [r0]\n    lsl r1, r1, #0x10\n    lsl r2, r2, #0x10\n    lsl r3, r3, #0x10\n    add r0, #0x1c\n    lsr r1, r1, #0x10\n    lsr r2, r2, #0x10\n    lsr r3, r3, #0x10\n    bl NNS_G2dGetNewOamManagerInstance\n    cmp r0, #0\n    bne _0200B21C\n    bl GF_AssertFail\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    _0200B220: .word _021D0EB0"
    );
    #endif
}

void OamManager_ApplyAndResetBuffers(void) {
    /* Original at 0x0200B224 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, _0200B240 ; =_021D0EB0\n    ldr r0, [r0]\n    cmp r0, #0\n    beq _0200B23C\n    bl NNS_G2dApplyAndResetOamManagerBuffer\n    ldr r0, _0200B240 ; =_021D0EB0\n    ldr r0, [r0]\n    add r0, #0x1c\n    bl NNS_G2dApplyAndResetOamManagerBuffer\n    pop {r3, pc}\n    nop\n    _0200B240: .word _021D0EB0"
    );
    #endif
}

void OamManager_Free(void) {
    /* Original at 0x0200B244 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, _0200B278 ; =_021D0EB0\n    ldr r0, [r0]\n    cmp r0, #0\n    bne _0200B252\n    bl GF_AssertFail\n    ldr r0, _0200B278 ; =_021D0EB0\n    ldr r0, [r0]\n    ldr r0, [r0, #0x38]\n    bl thunk_ClearMainOAM\n    ldr r0, _0200B278 ; =_021D0EB0\n    ldr r0, [r0]\n    ldr r0, [r0, #0x38]\n    bl thunk_ClearSubOAM\n    ldr r0, _0200B278 ; =_021D0EB0\n    ldr r0, [r0]\n    bl Heap_Free\n    ldr r0, _0200B278 ; =_021D0EB0\n    mov r1, #0\n    str r1, [r0]\n    pop {r3, pc}\n    nop\n    _0200B278: .word _021D0EB0"
    );
    #endif
}

void sub_0200B27C(void) {
    /* Original at 0x0200B27C */
    /* Requires manual decompilation - 41 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r6, r0, #0\n    ldr r0, _0200B2C8 ; =_021D0EB0\n    add r7, r1, #0\n    ldr r0, [r0]\n    add r5, r2, #0\n    add r4, r3, #0\n    cmp r0, #0\n    bne _0200B294\n    bl GF_AssertFail\n    cmp r5, #1\n    bne _0200B2B0\n    ldr r0, _0200B2CC ; =sub_02025C98\n    ldr r2, _0200B2D0 ; =sub_0200B2F0\n    str r0, [sp]\n    str r5, [sp, #4]\n    ldr r3, _0200B2D4 ; =sub_0200B334\n    add r0, r6, #0\n    add r1, r7, #0\n    str r4, [sp, #8]\n    bl sub_02025C54\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    ldr r0, _0200B2CC ; =sub_02025C98\n    ldr r2, _0200B2D8 ; =sub_0200B310\n    str r0, [sp]\n    str r5, [sp, #4]\n    ldr r3, _0200B2DC ; =sub_0200B358\n    add r0, r6, #0\n    add r1, r7, #0\n    str r4, [sp, #8]\n    bl sub_02025C54\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    _0200B2C8: .word _021D0EB0\n    _0200B2CC: .word sub_02025C98\n    _0200B2D0: .word sub_0200B2F0\n    _0200B2D4: .word sub_0200B334\n    _0200B2D8: .word sub_0200B310\n    _0200B2DC: .word sub_0200B358"
    );
    #endif
}

void thunk_ClearMainOAM(void) {
    ClearMainOAM();
}

void thunk_ClearSubOAM(void) {
    ClearSubOAM();
}

void sub_0200B2F0(void) {
    /* Original at 0x0200B2F0 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r3, r0, #0\n    ldr r0, _0200B30C ; =_021D0EB0\n    add r2, r1, #0\n    ldr r0, [r0]\n    add r1, r3, #0\n    bl NNS_G2dEntryOamManagerOamWithAffineIdx\n    add r4, r0, #0\n    bne _0200B308\n    bl GF_AssertFail\n    add r0, r4, #0\n    pop {r4, pc}\n    _0200B30C: .word _021D0EB0"
    );
    #endif
}

void sub_0200B310(void) {
    /* Original at 0x0200B310 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r3, r0, #0\n    ldr r0, _0200B330 ; =_021D0EB0\n    add r2, r1, #0\n    ldr r0, [r0]\n    add r1, r3, #0\n    add r0, #0x1c\n    bl NNS_G2dEntryOamManagerOamWithAffineIdx\n    add r4, r0, #0\n    bne _0200B32A\n    bl GF_AssertFail\n    add r0, r4, #0\n    pop {r4, pc}\n    nop\n    _0200B330: .word _021D0EB0"
    );
    #endif
}

void sub_0200B334(void) {
    /* Original at 0x0200B334 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r1, r0, #0\n    ldr r0, _0200B350 ; =_021D0EB0\n    ldr r0, [r0]\n    bl NNS_G2dEntryOamManagerAffine\n    add r4, r0, #0\n    ldr r0, _0200B354 ; =0x0000FFFE\n    cmp r4, r0\n    bne _0200B34C\n    bl GF_AssertFail\n    add r0, r4, #0\n    pop {r4, pc}\n    _0200B350: .word _021D0EB0\n    _0200B354: .word 0x0000FFFE"
    );
    #endif
}

void sub_0200B358(void) {
    /* Original at 0x0200B358 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r1, r0, #0\n    ldr r0, _0200B378 ; =_021D0EB0\n    ldr r0, [r0]\n    add r0, #0x1c\n    bl NNS_G2dEntryOamManagerAffine\n    add r4, r0, #0\n    ldr r0, _0200B37C ; =0x0000FFFE\n    cmp r4, r0\n    bne _0200B372\n    bl GF_AssertFail\n    add r0, r4, #0\n    pop {r4, pc}\n    nop\n    _0200B378: .word _021D0EB0\n    _0200B37C: .word 0x0000FFFE"
    );
    #endif
}
