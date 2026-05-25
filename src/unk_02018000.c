/* Decompiled from asm/unk_02018000.s */
#include "global.h"

void sub_02018030(void) {
    /* Original at 0x02018030 */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    mov r4, #0\n    add r5, r0, #0\n    add r0, r1, #0\n    add r1, r2, #0\n    str r4, [sp]\n    add r2, r4, #0\n    bl GfGfxLoader_LoadFromOpenNarc\n    str r0, [r5]\n    add r0, r5, #0\n    bl sub_02018324\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_0201804C(void) {
    /* Original at 0x0201804C */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    ldr r0, [r4, #0xc]\n    bl GF3dRender_AllocAndLoadTexResources\n    ldr r0, [r4]\n    ldr r1, [r4, #0xc]\n    bl GF3dRender_BindModelSet\n    add r0, r5, #0\n    bl SysTask_Destroy\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_02018068(void) {
    /* Original at 0x02018068 */
    /* Requires manual decompilation - 37 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #8\n    add r4, r0, #0\n    ldr r0, [r4, #0xc]\n    cmp r0, #0\n    beq _02018098\n    add r1, sp, #4\n    add r2, sp, #0\n    bl NNS_G3dTexReleaseTexKey\n    ldr r1, _020180B4 ; =NNS_GfdDefaultFuncFreeTexVram\n    ldr r0, [sp, #4]\n    ldr r1, [r1]\n    blx r1\n    ldr r1, _020180B4 ; =NNS_GfdDefaultFuncFreeTexVram\n    ldr r0, [sp]\n    ldr r1, [r1]\n    blx r1\n    ldr r0, [r4, #0xc]\n    bl NNS_G3dPlttReleasePlttKey\n    ldr r1, _020180B8 ; =NNS_GfdDefaultFuncFreePlttVram\n    ldr r1, [r1]\n    blx r1\n    ldr r0, [r4]\n    cmp r0, #0\n    beq _020180A2\n    bl Heap_Free\n    mov r1, #0x10\n    mov r0, #0\n    strb r0, [r4]\n    add r4, r4, #1\n    sub r1, r1, #1\n    bne _020180A6\n    add sp, #8\n    pop {r4, pc}\n    nop\n    _020180B4: .word NNS_GfdDefaultFuncFreeTexVram\n    _020180B8: .word NNS_GfdDefaultFuncFreePlttVram"
    );
    #endif
}

void sub_020180BC(void) {
    /* Original at 0x020180BC */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #4\n    add r4, r1, #0\n    mov r6, #0\n    add r1, r3, #0\n    add r5, r0, #0\n    add r0, r2, #0\n    ldr r3, [sp, #0x18]\n    add r2, r6, #0\n    str r6, [sp]\n    bl GfGfxLoader_LoadFromOpenNarc\n    add r2, r0, #0\n    ldr r3, [sp, #0x1c]\n    add r0, r5, #0\n    add r1, r4, #0\n    bl sub_020182F8\n    add r0, r6, #0\n    str r0, [r5, #0x10]\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void sub_020180E8(void) {
    sub_020182F8();
}

void sub_020180F8(void) {
    /* Original at 0x020180F8 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4]\n    cmp r0, #0\n    beq _02018116\n    add r0, r1, #0\n    ldr r1, [r4, #8]\n    bl NNS_G3dFreeAnmObj\n    ldr r0, [r4, #0x10]\n    cmp r0, #0\n    bne _02018116\n    ldr r0, [r4]\n    bl Heap_Free\n    mov r1, #0x14\n    mov r0, #0\n    strb r0, [r4]\n    add r4, r4, #1\n    sub r1, r1, #1\n    bne _0201811A\n    pop {r4, pc}"
    );
    #endif
}

void sub_02018124(void) {
    /* Original at 0x02018124 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #8]\n    ldr r0, [r0, #8]\n    ldrh r0, [r0, #4]\n    lsl r2, r0, #0xc\n    cmp r1, #0\n    ble _02018142\n    ldr r0, [r4, #0xc]\n    add r0, r0, r1\n    add r1, r2, #0\n    bl _s32_div_f\n    str r1, [r4, #0xc]\n    b _02018154\n    ldr r0, [r4, #0xc]\n    add r3, r4, #0\n    add r3, #0xc\n    add r0, r0, r1\n    str r0, [r4, #0xc]\n    bpl _02018154\n    ldr r0, [r3]\n    add r0, r0, r2\n    str r0, [r3]\n    ldr r1, [r4, #0xc]\n    ldr r0, [r4, #8]\n    str r1, [r0]\n    pop {r4, pc}"
    );
    #endif
}

void sub_0201815C(void) {
    /* Original at 0x0201815C */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    ldr r2, [r0, #8]\n    ldr r3, [r0, #0xc]\n    ldr r2, [r2, #8]\n    ldrh r2, [r2, #4]\n    lsl r4, r2, #0xc\n    mov r2, #0\n    cmp r1, #0\n    ble _0201817E\n    add r1, r3, r1\n    cmp r1, r4\n    bge _02018178\n    str r1, [r0, #0xc]\n    b _0201818A\n    str r4, [r0, #0xc]\n    mov r2, #1\n    b _0201818A\n    add r1, r3, r1\n    bmi _02018186\n    str r1, [r0, #0xc]\n    b _0201818A\n    str r2, [r0, #0xc]\n    mov r2, #1\n    ldr r1, [r0, #0xc]\n    ldr r0, [r0, #8]\n    str r1, [r0]\n    add r0, r2, #0\n    pop {r3, r4}\n    bx lr"
    );
    #endif
}

void sub_02018198(void) {
    /* Original at 0x02018198 */
    /* Requires manual decompilation - 4 instructions */
    #ifdef MWERKS
    asm(
        "str r1, [r0, #0xc]\n    ldr r0, [r0, #8]\n    str r1, [r0]\n    bx lr"
    );
    #endif
}

void sub_020181A0(void) {
    /* Original at 0x020181A0 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0, #0xc]\n    bx lr"
    );
    #endif
}

void sub_020181A4(void) {
    /* Original at 0x020181A4 */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0, #8]\n    ldr r0, [r0, #8]\n    ldrh r0, [r0, #4]\n    lsl r0, r0, #0xc\n    bx lr"
    );
    #endif
}

void sub_020181B0(void) {
    /* Original at 0x020181B0 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r1, #0\n    mov r1, #0\n    mov r2, #0x78\n    add r4, r0, #0\n    bl memset\n    ldr r1, [r5, #8]\n    add r0, r4, #0\n    bl NNS_G3dRenderObjInit\n    mov r0, #1\n    str r0, [r4, #0x6c]\n    lsl r0, r0, #0xc\n    str r0, [r4, #0x60]\n    str r0, [r4, #0x64]\n    str r0, [r4, #0x68]\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_020181D4(void) {
    NNS_G3dRenderObjAddAnmObj();
}

void sub_020181E0(void) {
    NNS_G3dRenderObjRemoveAnmObj();
}

void sub_020181EC(void) {
    /* Original at 0x020181EC */
    /* Requires manual decompilation - 69 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x48\n    add r4, r0, #0\n    ldr r0, [r4, #0x6c]\n    cmp r0, #0\n    beq _02018280\n    add r0, sp, #0x24\n    bl MTX_Identity33_\n    add r0, r4, #0\n    add r0, #0x70\n    ldrh r0, [r0]\n    ldr r3, _02018284 ; =FX_SinCosTable_\n    asr r0, r0, #4\n    lsl r2, r0, #1\n    lsl r1, r2, #1\n    add r2, r2, #1\n    lsl r2, r2, #1\n    ldrsh r1, [r3, r1]\n    ldrsh r2, [r3, r2]\n    add r0, sp, #0\n    bl MTX_RotX33_\n    add r1, sp, #0x24\n    add r0, sp, #0\n    add r2, r1, #0\n    bl MTX_Concat33\n    add r0, r4, #0\n    add r0, #0x74\n    ldrh r0, [r0]\n    ldr r3, _02018284 ; =FX_SinCosTable_\n    asr r0, r0, #4\n    lsl r2, r0, #1\n    lsl r1, r2, #1\n    add r2, r2, #1\n    lsl r2, r2, #1\n    ldrsh r1, [r3, r1]\n    ldrsh r2, [r3, r2]\n    add r0, sp, #0\n    bl MTX_RotZ33_\n    add r1, sp, #0x24\n    add r0, sp, #0\n    add r2, r1, #0\n    bl MTX_Concat33\n    add r0, r4, #0\n    add r0, #0x72\n    ldrh r0, [r0]\n    ldr r3, _02018284 ; =FX_SinCosTable_\n    asr r0, r0, #4\n    lsl r2, r0, #1\n    lsl r1, r2, #1\n    add r2, r2, #1\n    lsl r2, r2, #1\n    ldrsh r1, [r3, r1]\n    ldrsh r2, [r3, r2]\n    add r0, sp, #0\n    bl MTX_RotY33_\n    add r1, sp, #0x24\n    add r0, sp, #0\n    add r2, r1, #0\n    bl MTX_Concat33\n    add r1, r4, #0\n    add r0, r4, #0\n    add r4, #0x60\n    add r1, #0x54\n    add r2, sp, #0x24\n    add r3, r4, #0\n    bl GF3dRender_DrawModel\n    add sp, #0x48\n    pop {r4, pc}\n    _02018284: .word FX_SinCosTable_"
    );
    #endif
}

void sub_02018288(void) {
    GF3dRender_DrawModel();
}

void sub_020182A0(void) {
    /* Original at 0x020182A0 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "str r1, [r0, #0x6c]\n    bx lr"
    );
    #endif
}

void sub_020182A4(void) {
    /* Original at 0x020182A4 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0, #0x6c]\n    bx lr"
    );
    #endif
}

void sub_020182A8(void) {
    /* Original at 0x020182A8 */
    /* Requires manual decompilation - 4 instructions */
    #ifdef MWERKS
    asm(
        "str r1, [r0, #0x54]\n    str r2, [r0, #0x58]\n    str r3, [r0, #0x5c]\n    bx lr"
    );
    #endif
}

void sub_020182B0(void) {
    /* Original at 0x020182B0 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    ldr r4, [r0, #0x54]\n    str r4, [r1]\n    ldr r1, [r0, #0x58]\n    str r1, [r2]\n    ldr r0, [r0, #0x5c]\n    str r0, [r3]\n    pop {r3, r4}\n    bx lr"
    );
    #endif
}

void sub_020182C4(void) {
    /* Original at 0x020182C4 */
    /* Requires manual decompilation - 4 instructions */
    #ifdef MWERKS
    asm(
        "str r1, [r0, #0x60]\n    str r2, [r0, #0x64]\n    str r3, [r0, #0x68]\n    bx lr"
    );
    #endif
}

void sub_020182CC(void) {
    /* Original at 0x020182CC */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    ldr r4, [r0, #0x60]\n    str r4, [r1]\n    ldr r1, [r0, #0x64]\n    str r1, [r2]\n    ldr r0, [r0, #0x68]\n    str r0, [r3]\n    pop {r3, r4}\n    bx lr"
    );
    #endif
}

void sub_020182E0(void) {
    /* Original at 0x020182E0 */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "lsl r2, r2, #1\n    add r0, r0, r2\n    add r0, #0x70\n    strh r1, [r0]\n    bx lr"
    );
    #endif
}

void sub_020182EC(void) {
    /* Original at 0x020182EC */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "lsl r1, r1, #1\n    add r0, r0, r1\n    add r0, #0x70\n    ldrh r0, [r0]\n    bx lr"
    );
    #endif
}

void sub_020182F8(void) {
    /* Original at 0x020182F8 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    str r2, [r5]\n    add r0, r2, #0\n    mov r1, #0\n    add r6, r3, #0\n    bl NNS_G3dGetAnmByIdx\n    str r0, [r5, #4]\n    ldr r1, [r5, #4]\n    ldr r2, [r4, #8]\n    add r0, r6, #0\n    bl NNS_G3dAllocAnmObj\n    str r0, [r5, #8]\n    ldr r1, [r5, #4]\n    ldr r2, [r4, #8]\n    ldr r3, [r4, #0xc]\n    bl NNS_G3dAnmObjInit\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void sub_02018324(void) {
    /* Original at 0x02018324 */
    /* Requires manual decompilation - 41 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4]\n    cmp r0, #0\n    bne _02018332\n    bl GF_AssertFail\n    ldr r0, [r4]\n    bl NNS_G3dGetMdlSet\n    str r0, [r4, #4]\n    cmp r0, #0\n    beq _0201835E\n    add r2, r0, #0\n    add r2, #8\n    beq _02018352\n    ldrb r1, [r0, #9]\n    cmp r1, #0\n    bls _02018352\n    ldrh r1, [r0, #0xe]\n    add r1, r2, r1\n    add r1, r1, #4\n    b _02018354\n    mov r1, #0\n    cmp r1, #0\n    beq _0201835E\n    ldr r1, [r1]\n    add r0, r0, r1\n    b _02018360\n    mov r0, #0\n    str r0, [r4, #8]\n    ldr r0, [r4]\n    bl NNS_G3dGetTex\n    str r0, [r4, #0xc]\n    cmp r0, #0\n    beq _0201837A\n    mov r2, #1\n    ldr r0, _0201837C ; =sub_0201804C\n    add r1, r4, #0\n    lsl r2, r2, #0xa\n    bl SysTask_CreateOnVWaitQueue\n    pop {r4, pc}\n    _0201837C: .word sub_0201804C"
    );
    #endif
}
