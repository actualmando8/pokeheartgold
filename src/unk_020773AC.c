/* Decompiled from asm/unk_020773AC.s */
#include "global.h"

void sub_020773AC(void) {
    /* Original at 0x020773AC */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl GfGfx_DisableEngineAPlanes\n    bl GfGfx_DisableEngineBPlanes\n    mov r2, #1\n    lsl r2, r2, #0x1a\n    ldr r1, [r2]\n    ldr r0, _020773CC ; =0xFFFFE0FF\n    and r1, r0\n    str r1, [r2]\n    ldr r2, _020773D0 ; =0x04001000\n    ldr r1, [r2]\n    and r0, r1\n    str r0, [r2]\n    pop {r3, pc}\n    _020773CC: .word 0xFFFFE0FF\n    _020773D0: .word 0x04001000"
    );
    #endif
}

void sub_020773D4(void) {
    /* Original at 0x020773D4 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    mov r0, #7\n    str r0, [sp]\n    ldr r0, _020773F8 ; =0x04000050\n    mov r1, #0\n    mov r2, #0xe\n    mov r3, #0xb\n    bl G2x_SetBlendAlpha_\n    mov r0, #8\n    str r0, [sp]\n    ldr r0, _020773FC ; =0x04001050\n    mov r1, #0\n    mov r2, #0xe\n    mov r3, #7\n    bl G2x_SetBlendAlpha_\n    pop {r3, pc}\n    _020773F8: .word 0x04000050\n    _020773FC: .word 0x04001050"
    );
    #endif
}

void sub_02077400(void) {
    GF_3DVramMan_Create(0, 2);
}

void sub_0207741C(void) {
    /* Original at 0x0207741C */
    /* Requires manual decompilation - 57 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    mov r0, #1\n    add r1, r0, #0\n    bl GfGfx_EngineATogglePlanes\n    ldr r0, _02077488 ; =0x04000008\n    mov r1, #3\n    ldrh r2, [r0]\n    bic r2, r1\n    mov r1, #1\n    orr r1, r2\n    strh r1, [r0]\n    add r0, #0x58\n    ldrh r2, [r0]\n    ldr r1, _0207748C ; =0xFFFFCFFD\n    and r2, r1\n    strh r2, [r0]\n    add r2, r1, #2\n    ldrh r3, [r0]\n    add r1, r1, #2\n    and r3, r2\n    mov r2, #0x10\n    orr r2, r3\n    strh r2, [r0]\n    ldrh r3, [r0]\n    ldr r2, _02077490 ; =0x0000CFFB\n    and r3, r2\n    strh r3, [r0]\n    ldrh r3, [r0]\n    sub r2, #0x1c\n    and r3, r1\n    mov r1, #8\n    orr r1, r3\n    strh r1, [r0]\n    ldrh r1, [r0]\n    and r1, r2\n    strh r1, [r0]\n    mov r0, #0\n    add r1, r0, #0\n    add r2, r0, #0\n    add r3, r0, #0\n    bl G3X_SetFog\n    mov r0, #0\n    ldr r2, _02077494 ; =0x00007FFF\n    add r1, r0, #0\n    mov r3, #0x3f\n    str r0, [sp]\n    bl G3X_SetClearColor\n    ldr r1, _02077498 ; =0xBFFF0000\n    ldr r0, _0207749C ; =0x04000580\n    str r1, [r0]\n    pop {r3, pc}\n    _02077488: .word 0x04000008\n    _0207748C: .word 0xFFFFCFFD\n    _02077490: .word 0x0000CFFB\n    _02077494: .word 0x00007FFF\n    _02077498: .word 0xBFFF0000\n    _0207749C: .word 0x04000580"
    );
    #endif
}

void sub_020774A0(void) {
    /* Original at 0x020774A0 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    ldr r3, _020774D8 ; =NNS_GfdDefaultFuncAllocTexVram\n    mov r0, #2\n    mov r1, #0\n    ldr r3, [r3]\n    lsl r0, r0, #0xe\n    add r2, r1, #0\n    blx r3\n    ldr r3, _020774DC ; =NNS_GfdDefaultFuncAllocPlttVram\n    mov r1, #0\n    add r4, r0, #0\n    ldr r3, [r3]\n    mov r0, #0xa0\n    add r2, r1, #0\n    blx r3\n    add r5, r0, #0\n    cmp r4, #0\n    bne _020774C8\n    bl GF_AssertFail\n    cmp r5, #0\n    bne _020774D0\n    bl GF_AssertFail\n    bl sub_02014DA0\n    pop {r3, r4, r5, pc}\n    nop\n    _020774D8: .word NNS_GfdDefaultFuncAllocTexVram\n    _020774DC: .word NNS_GfdDefaultFuncAllocPlttVram"
    );
    #endif
}

void sub_020774E0(void) {
    /* Original at 0x020774E0 */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl Thunk_G3X_Reset\n    bl sub_0201543C\n    cmp r0, #0\n    ble _020774F6\n    bl Thunk_G3X_Reset\n    bl NNS_G2dSetupSoftwareSpriteCamera\n    bl sub_02015460\n    mov r0, #1\n    mov r1, #0\n    bl RequestSwap3DBuffers\n    pop {r3, pc}"
    );
    #endif
}

void sub_02077504(void) {
    sub_02015354(0);
}

void sub_02077520(void) {
    sub_02015394(0);
}

void sub_0207753C(void) {
    /* Original at 0x0207753C */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #8\n    mov r1, #0x12\n    lsl r1, r1, #0xa\n    add r4, r0, #0\n    bl Heap_Alloc\n    add r2, r0, #0\n    mov r0, #1\n    str r0, [sp]\n    mov r3, #0x12\n    ldr r0, _0207757C ; =sub_02077504\n    ldr r1, _02077580 ; =sub_02077520\n    lsl r3, r3, #0xa\n    str r4, [sp, #4]\n    bl sub_02014DB4\n    add r4, r0, #0\n    bl sub_02015524\n    add r2, r0, #0\n    beq _02077574\n    mov r0, #1\n    mov r1, #0xe1\n    lsl r0, r0, #0xc\n    lsl r1, r1, #0xe\n    bl Camera_SetPerspectiveClippingPlane\n    add r0, r4, #0\n    add sp, #8\n    pop {r4, pc}\n    nop\n    _0207757C: .word sub_02077504\n    _02077580: .word sub_02077520"
    );
    #endif
}

void sub_02077584(void) {
    sub_0207753C();
    sub_02015264(r6, r7, r5);
    sub_0201526C(r4, r0, 0xa, 1);
}

void sub_020775AC(void) {
    sub_020154D0();
    sub_02014EBC(r5);
    Heap_Free(r4);
}

void sub_020775C4(void) {
    /* Original at 0x020775C4 */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r3}\n    sub sp, #0xc\n    add r1, sp, #0\n    mov r2, #0\n    str r2, [r1]\n    str r2, [r1, #4]\n    str r2, [r1, #8]\n    mov r1, #0x56\n    lsl r1, r1, #4\n    str r2, [sp]\n    str r2, [sp, #8]\n    str r1, [sp, #4]\n    ldr r1, [r0, #0x20]\n    ldr r1, [r1]\n    ldr r1, [r1, #4]\n    add r1, r2, r1\n    str r1, [r0, #0x28]\n    ldr r1, [r0, #0x20]\n    ldr r2, [sp, #4]\n    ldr r1, [r1]\n    ldr r1, [r1, #8]\n    add r1, r2, r1\n    str r1, [r0, #0x2c]\n    ldr r1, [r0, #0x20]\n    ldr r2, [sp, #8]\n    ldr r1, [r1]\n    ldr r1, [r1, #0xc]\n    add r1, r2, r1\n    str r1, [r0, #0x30]\n    add sp, #0xc\n    pop {r3}\n    bx lr"
    );
    #endif
}

void sub_02077604(void) {
    /* Original at 0x02077604 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r5]\n    mov r1, #0x10\n    bl Heap_Alloc\n    add r4, r0, #0\n    bne _02077618\n    bl GF_AssertFail\n    ldr r0, [r5]\n    ldr r2, [r5, #4]\n    mov r1, #0x77\n    str r0, [r4]\n    str r2, [r4, #4]\n    ldr r0, [r4]\n    bl sub_02077584\n    mov r1, #1\n    str r0, [r4, #0xc]\n    bl sub_02015528\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_02077634(void) {
    /* Original at 0x02077634 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0xc]\n    ldr r2, _0207764C ; =sub_020775C4\n    add r3, r4, #0\n    bl sub_02015494\n    ldr r0, [r4, #0xc]\n    mov r1, #1\n    bl sub_02015528\n    pop {r4, pc}\n    _0207764C: .word sub_020775C4"
    );
    #endif
}

void sub_02077650(void) {
    sub_020154B0(0, 1);
}

void sub_02077664(void) {
    sub_020775AC(*((u32*)(r0 + 0xc)));
    Heap_Free(r4);
}
