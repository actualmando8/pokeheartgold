/* Decompiled from asm/unk_0200FA24.s */
#include "global.h"

void BeginNormalPaletteFade(void) {
    /* Original at 0x0200FA24 */
    /* Requires manual decompilation - 108 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x1c\n    add r5, r0, #0\n    ldr r0, [sp, #0x30]\n    add r4, r1, #0\n    add r7, r2, #0\n    add r6, r3, #0\n    cmp r0, #0\n    bne _0200FA3A\n    bl GF_AssertFail\n    ldr r0, [sp, #0x34]\n    cmp r0, #0\n    bne _0200FA44\n    bl GF_AssertFail\n    ldr r0, _0200FB00 ; =_021D1034\n    ldrh r0, [r0, #0xc]\n    cmp r0, #0\n    beq _0200FA50\n    bl GF_AssertFail\n    ldr r0, _0200FB04 ; =_021D0EF4\n    bl sub_020100C4\n    ldr r1, _0200FB04 ; =_021D0EF4\n    add r0, r5, #0\n    bl sub_0200FE14\n    ldr r0, _0200FB08 ; =_021D0F68\n    bl sub_0200FEB0\n    ldr r0, _0200FB04 ; =_021D0EF4\n    add r1, r6, #0\n    bl sub_02010018\n    add r5, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    ldr r0, _0200FB0C ; =_021D0F80\n    ldr r2, [sp, #0x30]\n    str r0, [sp, #0xc]\n    ldr r0, _0200FB08 ; =_021D0F68\n    ldr r3, [sp, #0x34]\n    str r0, [sp, #0x10]\n    ldr r0, [sp, #0x38]\n    add r1, r4, #0\n    str r0, [sp, #0x14]\n    ldr r0, _0200FB10 ; =_021D0F08\n    str r5, [sp, #0x18]\n    bl sub_0200FE84\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    ldr r0, _0200FB0C ; =_021D0F80\n    ldr r2, [sp, #0x30]\n    str r0, [sp, #0xc]\n    ldr r0, _0200FB08 ; =_021D0F68\n    ldr r3, [sp, #0x34]\n    str r0, [sp, #0x10]\n    ldr r0, [sp, #0x38]\n    add r1, r7, #0\n    str r0, [sp, #0x14]\n    ldr r0, _0200FB14 ; =_021D0F38\n    str r5, [sp, #0x18]\n    bl sub_0200FE84\n    ldr r0, _0200FB00 ; =_021D1034\n    mov r1, #1\n    strh r1, [r0, #0xc]\n    ldr r0, _0200FB18 ; =_021D0EF8\n    ldr r1, _0200FB10 ; =_021D0F08\n    bl FadeWork_UpdateFrame\n    ldr r0, _0200FB1C ; =_021D0EFC\n    ldr r1, _0200FB14 ; =_021D0F38\n    bl FadeWork_UpdateFrame\n    ldr r0, _0200FB20 ; =_021D0EF4\n    ldr r0, [r0, #0xc]\n    cmp r0, #0\n    beq _0200FAE2\n    ldr r0, _0200FB04 ; =_021D0EF4\n    add r0, #0x14\n    bl sub_02010064\n    ldr r1, _0200FB24 ; =0x0000014E\n    ldr r0, _0200FB04 ; =_021D0EF4\n    mov r2, #1\n    strb r2, [r0, r1]\n    ldr r0, _0200FB04 ; =_021D0EF4\n    ldr r0, [r0, #0x10]\n    cmp r0, #0\n    beq _0200FAFA\n    ldr r0, _0200FB04 ; =_021D0EF4\n    add r0, #0x44\n    bl sub_02010064\n    ldr r1, _0200FB28 ; =0x0000014F\n    ldr r0, _0200FB04 ; =_021D0EF4\n    mov r2, #1\n    strb r2, [r0, r1]\n    add sp, #0x1c\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _0200FB00: .word _021D1034\n    _0200FB04: .word _021D0EF4\n    _0200FB08: .word _021D0F68\n    _0200FB0C: .word _021D0F80\n    _0200FB10: .word _021D0F08\n    _0200FB14: .word _021D0F38\n    _0200FB18: .word _021D0EF8\n    _0200FB1C: .word _021D0EFC\n    _0200FB20: .word _021D0EF4\n    _0200FB24: .word 0x0000014E\n    _0200FB28: .word 0x0000014F"
    );
    #endif
}

void HandleFadeUpdateFrame(void) {
    /* Original at 0x0200FB2C */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r0, _0200FB54 ; =_021D1034\n    ldr r4, _0200FB58 ; =_021D0EF4\n    ldrh r0, [r0, #0xc]\n    cmp r0, #0\n    beq _0200FB50\n    add r1, r4, #0\n    add r2, r4, #0\n    add r0, r4, #0\n    add r1, #0x14\n    add r2, #0x44\n    bl DoFadeUpdateFrame\n    cmp r0, #1\n    bne _0200FB50\n    add r0, r4, #0\n    bl HandleEndFade\n    pop {r4, pc}\n    nop\n    _0200FB54: .word _021D1034\n    _0200FB58: .word _021D0EF4"
    );
    #endif
}

void IsPaletteFadeFinished(void) {
    /* Original at 0x0200FB5C */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _0200FB6C ; =_021D1034\n    ldrh r0, [r0, #0xc]\n    cmp r0, #0\n    bne _0200FB68\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr\n    _0200FB6C: .word _021D1034"
    );
    #endif
}

void sub_0200FB70(void) {
    /* Original at 0x0200FB70 */
    /* Requires manual decompilation - 41 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, _0200FBBC ; =_021D0F68\n    mov r1, #0\n    bl sub_0200FF5C\n    ldr r0, _0200FBBC ; =_021D0F68\n    mov r1, #1\n    bl sub_0200FF5C\n    ldr r0, _0200FBC0 ; =_021D0EF4\n    ldr r1, [r0, #4]\n    cmp r1, #0\n    beq _0200FB8E\n    mov r1, #2\n    str r1, [r0, #0x20]\n    ldr r0, _0200FBC0 ; =_021D0EF4\n    ldr r1, [r0, #8]\n    cmp r1, #0\n    beq _0200FB9A\n    mov r1, #2\n    str r1, [r0, #0x50]\n    ldr r0, _0200FBC4 ; =_021D0EF8\n    ldr r1, _0200FBC8 ; =_021D0F08\n    bl FadeWork_UpdateFrame\n    ldr r0, _0200FBCC ; =_021D0EFC\n    ldr r1, _0200FBD0 ; =_021D0F38\n    bl FadeWork_UpdateFrame\n    ldr r0, _0200FBD4 ; =_021D1034\n    mov r1, #0\n    strh r1, [r0, #0xc]\n    strb r1, [r0, #0xe]\n    strb r1, [r0, #0xf]\n    ldr r0, _0200FBD8 ; =_021D0EF4\n    bl sub_020100C4\n    pop {r3, pc}\n    _0200FBBC: .word _021D0F68\n    _0200FBC0: .word _021D0EF4\n    _0200FBC4: .word _021D0EF8\n    _0200FBC8: .word _021D0F08\n    _0200FBCC: .word _021D0EFC\n    _0200FBD0: .word _021D0F38\n    _0200FBD4: .word _021D1034\n    _0200FBD8: .word _021D0EF4"
    );
    #endif
}

void sub_0200FBDC(void) {
    sub_020131F4();
}

void SetMasterBrightnessNeutral(void) {
    SetMasterBrightness();
}

void sub_0200FBF4(void) {
    /* Original at 0x0200FBF4 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "ldr r2, _0200FC10 ; =0x0000FFFF\n    cmp r1, r2\n    bne _0200FBFE\n    ldr r1, _0200FC14 ; =_021D1034\n    ldrh r1, [r1, #0x10]\n    ldr r2, _0200FC18 ; =0x00007FFF\n    cmp r1, r2\n    bne _0200FC08\n    mov r1, #0x10\n    b _0200FC0C\n    mov r1, #0xf\n    mvn r1, r1\n    ldr r3, _0200FC1C ; =SetMasterBrightness\n    bx r3\n    _0200FC10: .word 0x0000FFFF\n    _0200FC14: .word _021D1034\n    _0200FC18: .word 0x00007FFF\n    _0200FC1C: .word SetMasterBrightness"
    );
    #endif
}

void sub_0200FC20(void) {
    /* Original at 0x0200FC20 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    ldr r0, _0200FC54 ; =0x0000FFFF\n    cmp r4, r0\n    bne _0200FC2E\n    ldr r0, _0200FC58 ; =_021D1034\n    ldrh r4, [r0, #0x10]\n    ldr r0, _0200FC5C ; =0x00007FFF\n    cmp r4, r0\n    bne _0200FC38\n    mov r5, #0x10\n    b _0200FC3C\n    mov r5, #0xf\n    mvn r5, r5\n    mov r0, #0\n    add r1, r5, #0\n    bl SetMasterBrightness\n    mov r0, #1\n    add r1, r5, #0\n    bl SetMasterBrightness\n    ldr r0, _0200FC58 ; =_021D1034\n    strh r4, [r0, #0x10]\n    pop {r3, r4, r5, pc}\n    nop\n    _0200FC54: .word 0x0000FFFF\n    _0200FC58: .word _021D1034\n    _0200FC5C: .word 0x00007FFF"
    );
    #endif
}

void sub_0200FC60(void) {
    /* Original at 0x0200FC60 */
    /* Requires manual decompilation - 53 instructions */
    #ifdef MWERKS
    asm(
        "push {r0, r1, r2, r3}\n    push {r3, r4, lr}\n    sub sp, #0xc\n    add r1, sp, #0x18\n    ldrh r2, [r1, #4]\n    add r4, r0, #0\n    ldr r0, _0200FCD0 ; =0x0000FFFF\n    cmp r2, r0\n    bne _0200FC78\n    ldr r0, _0200FCD4 ; =_021D1034\n    ldrh r0, [r0, #0x10]\n    strh r0, [r1, #4]\n    cmp r4, #0\n    add r0, sp, #0x1c\n    bne _0200FC88\n    mov r1, #0\n    mov r2, #2\n    bl GX_LoadBGPltt\n    b _0200FC90\n    mov r1, #0\n    mov r2, #2\n    bl GXS_LoadBGPltt\n    ldr r0, _0200FCD8 ; =_021D0F80\n    mov r1, #1\n    add r2, r4, #0\n    bl sub_02013424\n    mov r2, #0\n    ldr r0, _0200FCD8 ; =_021D0F80\n    mov r1, #0x3f\n    add r3, r2, #0\n    str r4, [sp]\n    bl sub_02013440\n    mov r1, #0\n    str r1, [sp]\n    str r1, [sp, #4]\n    ldr r0, _0200FCD8 ; =_021D0F80\n    add r2, r1, #0\n    add r3, r1, #0\n    str r4, [sp, #8]\n    bl sub_02013488\n    ldr r0, _0200FCD8 ; =_021D0F80\n    mov r1, #0x20\n    mov r2, #0\n    add r3, r4, #0\n    bl sub_02013468\n    add sp, #0xc\n    pop {r3, r4}\n    pop {r3}\n    add sp, #0x10\n    bx r3\n    _0200FCD0: .word 0x0000FFFF\n    _0200FCD4: .word _021D1034\n    _0200FCD8: .word _021D0F80"
    );
    #endif
}

void sub_0200FCDC(void) {
    GX_LoadBGPltt(0, 2);
    GXS_LoadBGPltt(0, 2);
}

void SetMasterBrightness(void) {
    /* Original at 0x0200FCFC */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    cmp r0, #0\n    bne _0200FD0A\n    ; GX_SetMasterBrightness(a1);\n    ldr r0, _0200FD14 ; =0x0400006C\n    bl GXx_SetMasterBrightness_\n    pop {r3, pc}\n    ; GXS_SetMasterBrightness(a1);\n    ldr r0, _0200FD18 ; =0x0400106C\n    bl GXx_SetMasterBrightness_\n    pop {r3, pc}\n    nop\n    _0200FD14: .word 0x0400006C\n    _0200FD18: .word 0x0400106C"
    );
    #endif
}

void HandleEndFade(void) {
    /* Original at 0x0200FD1C */
    /* Requires manual decompilation - 39 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r1, #0x53\n    add r4, r0, #0\n    mov r2, #0\n    lsl r1, r1, #2\n    strh r2, [r4, r1]\n    bl sub_0201002C\n    mov r1, #0x15\n    lsl r1, r1, #4\n    strh r0, [r4, r1]\n    ldr r0, [r4, #0xc]\n    cmp r0, #0\n    beq _0200FD4C\n    add r0, r4, #0\n    add r0, #0x14\n    bl sub_02010094\n    ldr r0, [r4, #0x3c]\n    cmp r0, #0\n    bne _0200FD4C\n    ldr r0, _0200FD70 ; =_021D1034\n    mov r1, #0\n    strb r1, [r0, #0xe]\n    ldr r0, [r4, #0x10]\n    cmp r0, #0\n    beq _0200FD66\n    add r0, r4, #0\n    add r0, #0x44\n    bl sub_02010094\n    ldr r0, [r4, #0x3c]\n    cmp r0, #0\n    bne _0200FD66\n    ldr r0, _0200FD70 ; =_021D1034\n    mov r1, #0\n    strb r1, [r0, #0xf]\n    add r0, r4, #0\n    bl sub_020100C4\n    pop {r4, pc}\n    nop\n    _0200FD70: .word _021D1034"
    );
    #endif
}

void DoFadeUpdateFrame(void) {
    /* Original at 0x0200FD74 */
    /* Requires manual decompilation - 49 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r5]\n    add r4, r2, #0\n    cmp r0, #0\n    beq _0200FD8A\n    cmp r0, #1\n    beq _0200FD9C\n    cmp r0, #2\n    beq _0200FDB6\n    b _0200FDCE\n    add r0, r5, #4\n    bl FadeWork_UpdateFrame\n    add r0, r5, #0\n    add r0, #8\n    add r1, r4, #0\n    bl FadeWork_UpdateFrame\n    b _0200FDCE\n    ldr r0, [r5, #4]\n    cmp r0, #0\n    beq _0200FDAA\n    add r0, r5, #4\n    bl FadeWork_UpdateFrame\n    b _0200FDCE\n    add r0, r5, #0\n    add r0, #8\n    add r1, r4, #0\n    bl FadeWork_UpdateFrame\n    b _0200FDCE\n    ldr r0, [r5, #8]\n    cmp r0, #0\n    beq _0200FDC8\n    add r0, r5, #0\n    add r0, #8\n    add r1, r4, #0\n    bl FadeWork_UpdateFrame\n    b _0200FDCE\n    add r0, r5, #4\n    bl FadeWork_UpdateFrame\n    ldr r0, [r5, #4]\n    cmp r0, #0\n    bne _0200FDDE\n    ldr r0, [r5, #8]\n    cmp r0, #0\n    bne _0200FDDE\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void FadeWork_UpdateFrame(void) {
    CallFadeFunc(0);
}

void CallFadeFunc(void) {
    /* Original at 0x0200FE00 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r1, [r0]\n    lsl r2, r1, #2\n    ldr r1, _0200FE10 ; =sFadeFuncPtrs\n    ldr r1, [r1, r2]\n    blx r1\n    pop {r3, pc}\n    nop\n    _0200FE10: .word sFadeFuncPtrs"
    );
    #endif
}

void sub_0200FE14(void) {
    /* Original at 0x0200FE14 */
    /* Requires manual decompilation - 40 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    cmp r0, #4\n    bhi _0200FE74\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0200FE26: ; jump table\n    mov r2, #1\n    add r0, r1, #0\n    mov r1, #0\n    add r3, r2, #0\n    bl sub_0200FE78\n    pop {r3, pc}\n    add r0, r1, #0\n    mov r1, #1\n    add r2, r1, #0\n    add r3, r1, #0\n    bl sub_0200FE78\n    pop {r3, pc}\n    mov r2, #1\n    add r0, r1, #0\n    mov r1, #2\n    add r3, r2, #0\n    bl sub_0200FE78\n    pop {r3, pc}\n    add r0, r1, #0\n    mov r1, #1\n    add r2, r1, #0\n    mov r3, #0\n    bl sub_0200FE78\n    pop {r3, pc}\n    add r0, r1, #0\n    mov r1, #2\n    mov r2, #0\n    mov r3, #1\n    bl sub_0200FE78\n    pop {r3, pc}"
    );
    #endif
}

void sub_0200FE78(void) {
    *(u32*)r0 = r1;
    ((u32*)r0)[4] = r2;
    ((u32*)r0)[8] = r3;
    ((u32*)r0)[0xc] = r2;
    ((u32*)r0)[0x10] = r3;
}

void sub_0200FE84(void) {
    /* Original at 0x0200FE84 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "str r1, [r0]\n    str r2, [r0, #4]\n    ldr r1, [sp]\n    str r3, [r0, #8]\n    str r1, [r0, #0xc]\n    ldr r1, [sp, #4]\n    str r1, [r0, #0x14]\n    ldr r1, [sp, #8]\n    str r1, [r0, #0x10]\n    ldr r1, [sp, #0xc]\n    str r1, [r0, #0x18]\n    ldr r1, [sp, #0x10]\n    str r1, [r0, #0x1c]\n    ldr r1, [sp, #0x14]\n    str r1, [r0, #0x20]\n    ldr r1, _0200FEAC ; =0xFFFFFFF0\n    add r1, sp\n    ldrh r1, [r1, #0x28]\n    strh r1, [r0, #0x24]\n    bx lr\n    _0200FEAC: .word 0xFFFFFFF0"
    );
    #endif
}

void sub_0200FEB0(void) {
    /* Original at 0x0200FEB0 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "mov r3, #0\n    ldr r1, _0200FEC8 ; =sub_02010014\n    add r2, r3, #0\n    str r2, [r0]\n    str r1, [r0, #8]\n    str r2, [r0, #0x10]\n    add r3, r3, #1\n    add r0, r0, #4\n    cmp r3, #2\n    blt _0200FEB6\n    bx lr\n    nop\n    _0200FEC8: .word sub_02010014"
    );
    #endif
}

void sub_0200FECC(void) {
    /* Original at 0x0200FECC */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r4, #0\n    ldr r0, [r5]\n    ldr r1, [r5, #8]\n    blx r1\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #2\n    blt _0200FED2\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_0200FEE4(void) {
    /* Original at 0x0200FEE4 */
    /* Requires manual decompilation - 54 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    mov r0, #1\n    str r0, [sp, #4]\n    add r0, r5, #0\n    str r0, [sp, #8]\n    add r0, #0x10\n    lsl r4, r3, #2\n    str r0, [sp, #8]\n    ldr r0, [r0, r4]\n    add r7, r2, #0\n    str r1, [sp]\n    cmp r0, #0\n    beq _0200FF06\n    bl GF_AssertFail\n    add r6, r5, #0\n    add r6, #8\n    ldr r0, [r6, r4]\n    cmp r0, #0\n    bne _0200FF14\n    bl GF_AssertFail\n    ldr r0, [r5, #0x10]\n    cmp r0, #0\n    bne _0200FF2E\n    ldr r0, [r5, #0x14]\n    cmp r0, #0\n    bne _0200FF2E\n    ldr r0, _0200FF54 ; =sub_0200FECC\n    add r1, r5, #0\n    bl Main_SetHBlankIntrCB\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #4]\n    ldr r0, [sp, #4]\n    cmp r0, #1\n    beq _0200FF38\n    bl GF_AssertFail\n    ldr r0, [sp]\n    cmp r7, #0\n    str r0, [r5, r4]\n    beq _0200FF44\n    str r7, [r6, r4]\n    b _0200FF48\n    ldr r0, _0200FF58 ; =sub_02010014\n    str r0, [r6, r4]\n    ldr r0, [sp, #8]\n    mov r1, #1\n    str r1, [r0, r4]\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _0200FF54: .word sub_0200FECC\n    _0200FF58: .word sub_02010014"
    );
    #endif
}

void sub_0200FF5C(void) {
    /* Original at 0x0200FF5C */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    lsl r4, r1, #2\n    add r5, r0, #0\n    mov r1, #0\n    add r0, r5, r4\n    str r1, [r0, #0x10]\n    ldr r0, [r5, #0x10]\n    cmp r0, #0\n    bne _0200FF78\n    ldr r0, [r5, #0x14]\n    cmp r0, #0\n    bne _0200FF78\n    bl HBlankInterruptDisable\n    ldr r1, _0200FF84 ; =sub_02010014\n    add r0, r5, r4\n    str r1, [r0, #8]\n    mov r0, #0\n    str r0, [r5, r4]\n    pop {r3, r4, r5, pc}\n    _0200FF84: .word sub_02010014"
    );
    #endif
}

void sub_0200FF88(void) {
    /* Original at 0x0200FF88 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    ldr r0, [sp, #0x18]\n    mov r1, #0x10\n    add r6, r2, #0\n    add r7, r3, #0\n    bl Heap_AllocAtEnd\n    add r1, r0, #0\n    str r5, [r1]\n    str r4, [r1, #4]\n    mov r2, #1\n    str r6, [r1, #8]\n    ldr r0, _0200FFB0 ; =sub_0200FFD8\n    lsl r2, r2, #0xa\n    str r7, [r1, #0xc]\n    bl SysTask_CreateOnVWaitQueue\n    pop {r3, r4, r5, r6, r7, pc}\n    _0200FFB0: .word sub_0200FFD8"
    );
    #endif
}

void sub_0200FFB4(void) {
    /* Original at 0x0200FFB4 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    add r0, r2, #0\n    mov r1, #8\n    bl Heap_AllocAtEnd\n    add r1, r0, #0\n    mov r2, #1\n    str r5, [r1]\n    ldr r0, _0200FFD4 ; =sub_0200FFF8\n    lsl r2, r2, #0xa\n    str r4, [r1, #4]\n    bl SysTask_CreateOnVWaitQueue\n    pop {r3, r4, r5, pc}\n    _0200FFD4: .word sub_0200FFF8"
    );
    #endif
}

void sub_0200FFD8(void) {
    sub_0200FEE4(*((u32*)(r1 + 4)), *((u32*)(r1 + 8)), *((u32*)(r1 + 0xc)));
    SysTask_Destroy(r5);
    Heap_Free(r4);
}

void sub_0200FFF8(void) {
    sub_0200FF5C(*((u32*)(r1 + 4)));
    SysTask_Destroy(r5);
    Heap_Free(r4);
}

void sub_02010014(void) {
    /* Original at 0x02010014 */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void sub_02010018(void) {
    /* Original at 0x02010018 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "ldr r2, _02010028 ; =0x0000FFFF\n    cmp r1, r2\n    bne _02010024\n    mov r1, #0x15\n    lsl r1, r1, #4\n    ldrh r1, [r0, r1]\n    add r0, r1, #0\n    bx lr\n    _02010028: .word 0x0000FFFF"
    );
    #endif
}

void sub_0201002C(void) {
    /* Original at 0x0201002C */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, [r0, #0xc]\n    cmp r1, #1\n    bne _02010038\n    add r2, r0, #0\n    add r2, #0x14\n    b _0201003C\n    add r2, r0, #0\n    add r2, #0x44\n    ldr r1, [r2, #0x28]\n    cmp r1, #1\n    bne _02010046\n    ldrh r0, [r2, #0x24]\n    bx lr\n    mov r1, #0x15\n    lsl r1, r1, #4\n    ldrh r0, [r0, r1]\n    bx lr"
    );
    #endif
}

void sub_02010050(void) {
    SetMasterBrightness(*((u32*)(r1 + 0x10)), 0);
    SysTask_Destroy(r4);
}

void sub_02010064(void) {
    /* Original at 0x02010064 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    add r1, r0, #0\n    ldr r0, [r1, #0x28]\n    cmp r0, #0\n    bne _0201008A\n    ldrh r2, [r1, #0x24]\n    ldr r0, _0201008C ; =0x00007FFF\n    cmp r2, r0\n    beq _0201007A\n    cmp r2, #0\n    bne _0201008A\n    ldr r0, [r1, #0x2c]\n    cmp r0, #0\n    bne _0201008A\n    mov r2, #1\n    ldr r0, _02010090 ; =sub_02010050\n    lsl r2, r2, #0xa\n    bl SysTask_CreateOnVWaitQueue\n    pop {r3, pc}\n    _0201008C: .word 0x00007FFF\n    _02010090: .word sub_02010050"
    );
    #endif
}

void sub_02010094(void) {
    /* Original at 0x02010094 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x28]\n    cmp r0, #1\n    bne _020100BC\n    ldrh r1, [r4, #0x24]\n    ldr r0, _020100C0 ; =0x00007FFF\n    cmp r1, r0\n    beq _020100AA\n    cmp r1, #0\n    bne _020100BC\n    ldr r0, [r4, #0x2c]\n    cmp r0, #0\n    bne _020100BC\n    ldr r0, [r4, #0x10]\n    bl sub_0200FBF4\n    ldr r0, [r4, #0x10]\n    bl sub_0200FBDC\n    pop {r4, pc}\n    nop\n    _020100C0: .word 0x00007FFF"
    );
    #endif
}

void sub_020100C4(void) {
    /* Original at 0x020100C4 */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    add r2, r4, #0\n    mov r1, #0x14\n    mov r0, #0\n    strb r0, [r2]\n    add r2, r2, #1\n    sub r1, r1, #1\n    bne _020100CE\n    add r0, r4, #0\n    add r0, #0x14\n    mov r1, #0\n    mov r2, #0x30\n    bl memset\n    add r0, r4, #0\n    add r0, #0x44\n    mov r1, #0\n    mov r2, #0x30\n    bl memset\n    add r2, r4, #0\n    add r2, #0x74\n    mov r1, #0x18\n    mov r0, #0\n    strb r0, [r2]\n    add r2, r2, #1\n    sub r1, r1, #1\n    bne _020100F6\n    add r4, #0x8c\n    add r0, r4, #0\n    mov r1, #0\n    mov r2, #0xc0\n    bl memset\n    pop {r4, pc}"
    );
    #endif
}
