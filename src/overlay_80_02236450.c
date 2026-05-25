/* Decompiled from asm/overlay_80_02236450.s */
#include "global.h"

void ov80_02236450(void) {
    /* Original at 0x02236450 */
    /* Requires manual decompilation - 37 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    add r5, r0, #0\n    ldrb r0, [r5, #0xf]\n    add r4, r1, #0\n    add r6, r2, #0\n    add r7, r3, #0\n    bl ov80_02236B04\n    add r3, r0, #0\n    ldr r2, [sp, #0x3c]\n    add r0, r4, #0\n    add r1, r6, #0\n    bl ov80_02229F04\n    str r0, [sp, #0x14]\n    lsl r0, r7, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    ldr r0, [sp, #0x30]\n    add r4, #0x30\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x34]\n    ldr r1, [sp, #0x14]\n    str r0, [sp, #8]\n    ldr r0, [sp, #0x38]\n    add r2, r6, #0\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #0x3c]\n    add r3, r4, #0\n    str r0, [sp, #0x10]\n    add r0, r5, #0\n    bl ov80_022364A4\n    add r4, r0, #0\n    ldr r0, [sp, #0x14]\n    bl Heap_Free\n    add r0, r4, #0\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov80_022364A4(void) {
    /* Original at 0x022364A4 */
    /* Requires manual decompilation - 236 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x84\n    add r7, r0, #0\n    ldr r0, [sp, #0x9c]\n    str r2, [sp, #0x18]\n    str r0, [sp, #0x9c]\n    ldr r0, [sp, #0xa0]\n    str r1, [sp, #0x14]\n    str r0, [sp, #0xa0]\n    ldr r0, [sp, #0xa4]\n    str r3, [sp, #0x1c]\n    str r0, [sp, #0xa4]\n    ldr r0, [sp, #0xa8]\n    str r0, [sp, #0xa8]\n    mov r0, #0\n    str r0, [sp, #0x2c]\n    add r0, sp, #0x88\n    ldrb r0, [r0, #0x10]\n    cmp r0, #4\n    bls _022364D0\n    bl GF_AssertFail\n    add r0, sp, #0x88\n    ldrb r6, [r0, #0x10]\n    mov r4, #0\n    str r4, [sp, #0x30]\n    cmp r6, #0\n    bne _022364DE\n    b _022365EE\n    add r0, sp, #0x74\n    str r0, [sp, #0x24]\n    add r0, r7, #0\n    bl FrontierFieldSystem_0204B510\n    ldr r1, [sp, #0x14]\n    ldrh r1, [r1, #2]\n    bl _s32_div_f\n    lsl r0, r1, #0x18\n    lsr r1, r0, #0x17\n    ldr r0, [sp, #0x14]\n    add r0, r0, r1\n    ldrh r0, [r0, #4]\n    str r0, [sp, #0x34]\n    ldrb r0, [r7, #0xf]\n    bl ov80_02236AF0\n    add r2, r0, #0\n    ldr r1, [sp, #0x34]\n    add r0, sp, #0x44\n    bl ov80_02229EF4\n    mov r0, #0\n    str r0, [sp, #0x40]\n    cmp r4, #0\n    ble _0223653C\n    add r5, sp, #0x74\n    ldrb r0, [r7, #0xf]\n    bl ov80_02236AF0\n    add r2, r0, #0\n    ldr r1, [r5]\n    add r0, sp, #0x54\n    bl ov80_02229EF4\n    add r0, sp, #0x44\n    ldrh r1, [r0, #0x10]\n    ldrh r0, [r0]\n    cmp r1, r0\n    beq _0223653C\n    ldr r0, [sp, #0x40]\n    add r5, r5, #4\n    add r0, r0, #1\n    str r0, [sp, #0x40]\n    cmp r0, r4\n    blt _02236516\n    ldr r0, [sp, #0x40]\n    cmp r0, r4\n    bne _022365E8\n    ldr r0, [sp, #0x9c]\n    cmp r0, #0\n    beq _02236566\n    mov r0, #0\n    cmp r6, #0\n    ble _02236562\n    add r1, sp, #0x44\n    ldrh r3, [r1]\n    ldr r2, [sp, #0x9c]\n    ldrh r1, [r2]\n    cmp r3, r1\n    beq _02236562\n    add r0, r0, #1\n    add r2, r2, #2\n    cmp r0, r6\n    blt _02236554\n    cmp r0, r6\n    bne _022365E8\n    ldr r0, [sp, #0x30]\n    cmp r0, #0x32\n    bge _022365DE\n    mov r0, #0\n    str r0, [sp, #0x20]\n    cmp r4, #0\n    ble _022365A0\n    add r5, sp, #0x74\n    ldrb r0, [r7, #0xf]\n    bl ov80_02236AF0\n    add r2, r0, #0\n    ldr r1, [r5]\n    add r0, sp, #0x54\n    bl ov80_02229EF4\n    add r0, sp, #0x44\n    ldrh r1, [r0, #0x1c]\n    cmp r1, #0\n    beq _02236594\n    ldrh r0, [r0, #0xc]\n    cmp r1, r0\n    beq _022365A0\n    ldr r0, [sp, #0x20]\n    add r5, r5, #4\n    add r0, r0, #1\n    str r0, [sp, #0x20]\n    cmp r0, r4\n    blt _02236576\n    ldr r0, [sp, #0x20]\n    cmp r0, r4\n    beq _022365AE\n    ldr r0, [sp, #0x30]\n    add r0, r0, #1\n    str r0, [sp, #0x30]\n    b _022365E8\n    ldr r0, [sp, #0xa0]\n    cmp r0, #0\n    beq _022365DE\n    mov r0, #0\n    cmp r6, #0\n    ble _022365D2\n    add r1, sp, #0x44\n    ldrh r3, [r1, #0xc]\n    ldr r2, [sp, #0xa0]\n    ldrh r1, [r2]\n    cmp r3, r1\n    bne _022365CA\n    cmp r1, #0\n    bne _022365D2\n    add r0, r0, #1\n    add r2, r2, #2\n    cmp r0, r6\n    blt _022365C0\n    cmp r0, r6\n    beq _022365DE\n    ldr r0, [sp, #0x30]\n    add r0, r0, #1\n    str r0, [sp, #0x30]\n    b _022365E8\n    ldr r1, [sp, #0x34]\n    ldr r0, [sp, #0x24]\n    add r4, r4, #1\n    stmia r0!, {r1}\n    str r0, [sp, #0x24]\n    cmp r4, r6\n    beq _022365EE\n    b _022364E2\n    ldr r0, [sp, #0x18]\n    bl GetFrontierTrainerIVs\n    str r0, [sp, #0x3c]\n    add r0, r7, #0\n    bl FrontierFieldSystem_0204B510\n    add r5, r0, #0\n    add r0, r7, #0\n    bl FrontierFieldSystem_0204B510\n    lsl r0, r0, #0x10\n    orr r0, r5\n    str r0, [sp, #0x38]\n    ldr r0, [sp, #0x30]\n    cmp r0, #0x32\n    blt _02236614\n    mov r0, #1\n    str r0, [sp, #0x2c]\n    mov r5, #0\n    cmp r4, #0\n    ble _0223665C\n    add r0, sp, #0x74\n    str r0, [sp, #0x28]\n    add r6, sp, #0x64\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, [sp, #0x3c]\n    ldr r2, [sp, #0x28]\n    str r0, [sp, #4]\n    lsl r0, r5, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #8]\n    ldr r0, [sp, #0x2c]\n    ldr r1, [sp, #0x1c]\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #0xa8]\n    ldr r3, [sp, #0x38]\n    str r0, [sp, #0x10]\n    ldr r2, [r2]\n    add r0, r7, #0\n    lsl r2, r2, #0x10\n    lsr r2, r2, #0x10\n    bl ov80_02236734\n    stmia r6!, {r0}\n    ldr r0, [sp, #0x28]\n    add r5, r5, #1\n    add r0, r0, #4\n    str r0, [sp, #0x28]\n    ldr r0, [sp, #0x1c]\n    add r0, #0x38\n    str r0, [sp, #0x1c]\n    cmp r5, r4\n    blt _02236620\n    ldr r0, [sp, #0xa4]\n    cmp r0, #0\n    bne _02236668\n    ldr r0, [sp, #0x2c]\n    add sp, #0x84\n    pop {r4, r5, r6, r7, pc}\n    ldr r1, [sp, #0x38]\n    ldr r2, [sp, #0xa4]\n    str r1, [r0]\n    mov r3, #0\n    add r0, sp, #0x74\n    add r1, sp, #0x64\n    ldr r5, [r0]\n    ldr r4, [sp, #0xa4]\n    add r3, r3, #1\n    strh r5, [r4, #4]\n    ldr r4, [r1]\n    add r0, r0, #4\n    str r4, [r2, #8]\n    ldr r4, [sp, #0xa4]\n    add r1, r1, #4\n    add r4, r4, #2\n    add r2, r2, #4\n    str r4, [sp, #0xa4]\n    cmp r3, #2\n    blt _02236674\n    ldr r0, [sp, #0x2c]\n    add sp, #0x84\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov80_02236698(void) {
    /* Original at 0x02236698 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r1, #0\n    add r4, r2, #0\n    mov r2, #0x11\n    add r6, r0, #0\n    add r0, r5, #0\n    mov r1, #0\n    lsl r2, r2, #4\n    bl MI_CpuFill8\n    add r0, r6, #0\n    bl sub_0202D928\n    add r6, r0, #0\n    bl sub_0202D7B0\n    cmp r0, #0\n    bne _022366C6\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov80_022366D4\n    pop {r4, r5, r6, pc}\n    add r0, r6, #0\n    add r1, r5, #0\n    add r2, r4, #0\n    bl sub_0202D804\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov80_022366D4(void) {
    /* Original at 0x022366D4 */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    mov r2, #0x11\n    add r4, r1, #0\n    mov r1, #0\n    lsl r2, r2, #4\n    add r5, r0, #0\n    bl MI_CpuFill8\n    mov r0, #6\n    mul r0, r4\n    ldr r1, _02236728 ; =ov80_0223C050\n    str r0, [sp]\n    add r6, r1, r0\n    ldr r1, _0223672C ; =ov80_0223C07C\n    mov r2, #0x30\n    add r0, r4, #0\n    mul r0, r2\n    add r0, r1, r0\n    add r1, r5, #0\n    ldr r7, _02236730 ; =ov80_0223C0AC\n    bl MI_CpuCopy8\n    ldr r1, _02236728 ; =ov80_0223C050\n    ldr r0, [sp]\n    mov r4, #0\n    ldrh r0, [r1, r0]\n    strh r0, [r5, #6]\n    add r5, #0x30\n    add r0, r6, r4\n    ldrb r1, [r0, #2]\n    mov r0, #0x38\n    mov r2, #0x38\n    mul r0, r1\n    add r0, r7, r0\n    add r1, r5, #0\n    bl MI_CpuCopy8\n    add r4, r4, #1\n    add r5, #0x38\n    cmp r4, #4\n    blt _0223670C\n    pop {r3, r4, r5, r6, r7, pc}\n    _02236728: .word ov80_0223C050\n    _0223672C: .word ov80_0223C07C\n    _02236730: .word ov80_0223C0AC"
    );
    #endif
}

void ov80_02236734(void) {
    /* Original at 0x02236734 */
    /* Requires manual decompilation - 212 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    add r5, r1, #0\n    add r4, r0, #0\n    add r6, r2, #0\n    add r0, r5, #0\n    mov r1, #0\n    mov r2, #0x38\n    str r3, [sp]\n    bl MI_CpuFill8\n    ldrb r0, [r4, #0xf]\n    bl ov80_02236AF0\n    add r2, r0, #0\n    add r0, sp, #8\n    add r1, r6, #0\n    bl ov80_02229EF4\n    add r2, sp, #8\n    ldrh r0, [r5]\n    ldr r1, _022368E4 ; =0xFFFFF800\n    ldrh r3, [r2]\n    and r0, r1\n    lsr r1, r1, #0x15\n    and r1, r3\n    orr r0, r1\n    strh r0, [r5]\n    ldrh r1, [r5]\n    ldr r0, _022368E8 ; =0xFFFF07FF\n    and r1, r0\n    ldrh r0, [r2, #0xe]\n    lsl r0, r0, #0x1b\n    lsr r0, r0, #0x10\n    orr r0, r1\n    strh r0, [r5]\n    ldr r0, [sp, #0x3c]\n    cmp r0, #0\n    beq _0223678E\n    add r0, sp, #0x20\n    ldrb r0, [r0, #0x18]\n    lsl r1, r0, #1\n    ldr r0, _022368EC ; =ov80_0223C048\n    ldrh r0, [r0, r1]\n    b _02236790\n    ldrh r0, [r2, #0xc]\n    strh r0, [r5, #2]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    mov r0, #0\n    add r1, sp, #8\n    add r2, r5, #0\n    add r3, r0, #0\n    ldrh r6, [r1, #2]\n    strh r6, [r2, #4]\n    ldrh r6, [r1, #2]\n    cmp r6, #0xda\n    bne _022367AA\n    str r3, [sp, #4]\n    add r0, r0, #1\n    add r1, r1, #2\n    add r2, r2, #2\n    cmp r0, #4\n    blt _0223679E\n    ldr r0, [sp]\n    ldr r7, [sp, #0x30]\n    str r0, [r5, #0xc]\n    cmp r7, #0\n    bne _022367F0\n    add r0, r4, #0\n    bl FrontierFieldSystem_0204B510\n    add r6, r0, #0\n    add r0, r4, #0\n    bl FrontierFieldSystem_0204B510\n    lsl r0, r0, #0x10\n    add r7, r6, #0\n    orr r7, r0\n    add r0, r7, #0\n    bl GetNatureFromPersonality\n    add r1, sp, #8\n    ldrb r1, [r1, #0xb]\n    cmp r1, r0\n    bne _022367BE\n    ldr r0, [sp]\n    add r1, r7, #0\n    bl CalcShininessByOtIdAndPersonality\n    cmp r0, #1\n    beq _022367BE\n    str r7, [r5, #0x10]\n    b _022367F2\n    str r7, [r5, #0x10]\n    add r0, sp, #0x20\n    ldrb r1, [r0, #0x14]\n    ldr r2, [r5, #0x14]\n    mov r0, #0x1f\n    bic r2, r0\n    mov r0, #0x1f\n    and r0, r1\n    orr r2, r0\n    ldr r0, _022368F0 ; =0xFFFFFC1F\n    mov r6, #0\n    and r2, r0\n    lsl r0, r1, #0x1b\n    lsr r1, r0, #0x16\n    orr r2, r1\n    ldr r1, _022368F4 ; =0xFFFF83FF\n    add r4, r6, #0\n    and r2, r1\n    lsr r1, r0, #0x11\n    orr r2, r1\n    ldr r1, _022368F8 ; =0xFFF07FFF\n    and r2, r1\n    lsr r1, r0, #0xc\n    orr r2, r1\n    ldr r1, _022368FC ; =0xFE0FFFFF\n    and r2, r1\n    lsr r1, r0, #7\n    orr r2, r1\n    ldr r1, _02236900 ; =0xC1FFFFFF\n    lsr r0, r0, #2\n    and r1, r2\n    orr r0, r1\n    str r0, [r5, #0x14]\n    add r0, r4, #0\n    bl MaskOfFlagNo\n    add r1, sp, #8\n    ldrb r1, [r1, #0xa]\n    tst r0, r1\n    beq _02236842\n    add r6, r6, #1\n    add r4, r4, #1\n    cmp r4, #6\n    blt _02236832\n    ldr r0, _02236904 ; =0x000001FE\n    add r1, r6, #0\n    bl _s32_div_f\n    cmp r0, #0xff\n    ble _02236856\n    mov r0, #0xff\n    lsl r0, r0, #0x18\n    mov r4, #0\n    lsr r6, r0, #0x18\n    add r0, r4, #0\n    bl MaskOfFlagNo\n    add r1, sp, #8\n    ldrb r1, [r1, #0xa]\n    tst r0, r1\n    beq _0223686E\n    add r0, r5, r4\n    strb r6, [r0, #0x18]\n    add r4, r4, #1\n    cmp r4, #6\n    blt _0223685C\n    mov r0, #0\n    strb r0, [r5, #0x1e]\n    ldr r0, _02236908 ; =gGameLanguage\n    mov r1, #0x19\n    ldrb r0, [r0]\n    strb r0, [r5, #0x1f]\n    ldrh r0, [r5]\n    lsl r0, r0, #0x15\n    lsr r0, r0, #0x15\n    bl GetMonBaseStat\n    cmp r0, #0\n    beq _022368B2\n    ldr r2, [r5, #0x10]\n    mov r1, #1\n    tst r1, r2\n    beq _0223689E\n    add r1, r5, #0\n    add r1, #0x20\n    strb r0, [r1]\n    b _022368C4\n    ldrh r0, [r5]\n    mov r1, #0x18\n    lsl r0, r0, #0x15\n    lsr r0, r0, #0x15\n    bl GetMonBaseStat\n    add r1, r5, #0\n    add r1, #0x20\n    strb r0, [r1]\n    b _022368C4\n    ldrh r0, [r5]\n    mov r1, #0x18\n    lsl r0, r0, #0x15\n    lsr r0, r0, #0x15\n    bl GetMonBaseStat\n    add r1, r5, #0\n    add r1, #0x20\n    strb r0, [r1]\n    add r1, r5, #0\n    ldr r0, [sp, #4]\n    add r1, #0x21\n    strb r0, [r1]\n    ldrh r0, [r5]\n    add r5, #0x22\n    ldr r1, [sp, #0x40]\n    lsl r0, r0, #0x15\n    lsr r0, r0, #0x15\n    add r2, r5, #0\n    bl GetSpeciesNameIntoArray\n    add r0, r7, #0\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _022368E4: .word 0xFFFFF800\n    _022368E8: .word 0xFFFF07FF\n    _022368EC: .word ov80_0223C048\n    _022368F0: .word 0xFFFFFC1F\n    _022368F4: .word 0xFFFF83FF\n    _022368F8: .word 0xFFF07FFF\n    _022368FC: .word 0xFE0FFFFF\n    _02236900: .word 0xC1FFFFFF\n    _02236904: .word 0x000001FE\n    _02236908: .word gGameLanguage"
    );
    #endif
}

void ov80_0223690C(void) {
    /* Original at 0x0223690C */
    /* Requires manual decompilation - 128 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    ldrb r0, [r5, #0xf]\n    add r4, r1, #0\n    bl ov80_02236A88\n    add r1, r0, #0\n    ldr r0, [r5, #4]\n    bl BattleSetup_New\n    add r7, r0, #0\n    ldr r0, [r4, #8]\n    bl SaveArray_Party_Get\n    str r0, [sp, #8]\n    ldr r0, [r4, #0xc]\n    mov r1, #0\n    str r0, [sp]\n    ldr r0, [r4, #0x1c]\n    str r0, [sp, #4]\n    ldr r2, [r4, #8]\n    ldr r3, [r4, #0x18]\n    add r0, r7, #0\n    bl sub_02051D18\n    mov r0, #0x53\n    mov r1, #0x12\n    lsl r0, r0, #2\n    str r1, [r7, r0]\n    add r0, r0, #4\n    str r1, [r7, r0]\n    ldr r0, [r5, #4]\n    bl AllocMonZeroed\n    add r4, r0, #0\n    ldrb r1, [r5, #0xe]\n    ldr r0, [r7, #4]\n    bl Party_InitWithMaxSize\n    ldrb r0, [r5, #0xe]\n    mov r6, #0\n    cmp r0, #0\n    ble _022369B8\n    add r1, r5, r6\n    add r1, #0x2a\n    ldrb r1, [r1]\n    ldr r0, [sp, #8]\n    bl Party_GetMonByIndex\n    add r1, r4, #0\n    bl CopyPokemonToPokemon\n    add r0, r4, #0\n    mov r1, #0xa1\n    mov r2, #0\n    bl GetMonData\n    cmp r0, #0x32\n    bls _022369A6\n    add r0, r4, #0\n    mov r1, #5\n    mov r2, #0\n    bl GetMonData\n    mov r1, #0x32\n    bl GetMonExpBySpeciesAndLevel\n    str r0, [sp, #0xc]\n    add r0, r4, #0\n    mov r1, #8\n    add r2, sp, #0xc\n    bl SetMonData\n    add r0, r4, #0\n    bl CalcMonLevelAndStats\n    add r0, r7, #0\n    add r1, r4, #0\n    mov r2, #0\n    bl BattleSetup_AddMonToParty\n    ldrb r0, [r5, #0xe]\n    add r6, r6, #1\n    cmp r6, r0\n    blt _02236964\n    add r0, r4, #0\n    bl Heap_Free\n    add r0, r7, #0\n    bl BattleSetup_SetAllySideBattlersToPlayer\n    ldr r0, [r5, #4]\n    add r1, r5, #0\n    str r0, [sp]\n    ldrb r2, [r5, #0xe]\n    add r0, r7, #0\n    add r1, #0x78\n    mov r3, #1\n    bl ov80_02236A34\n    mov r2, #0\n    add r1, r7, #0\n    mov r0, #7\n    add r2, r2, #1\n    str r0, [r1, #0x34]\n    add r1, #0x34\n    cmp r2, #4\n    blt _022369DC\n    ldrb r0, [r5, #0xf]\n    cmp r0, #2\n    beq _022369F6\n    cmp r0, #3\n    beq _02236A18\n    cmp r0, #6\n    beq _02236A18\n    b _02236A2C\n    ldr r0, [r5, #4]\n    mov r1, #0xa6\n    str r0, [sp]\n    ldrb r2, [r5, #0x10]\n    lsl r1, r1, #2\n    add r1, r5, r1\n    lsl r2, r2, #0x18\n    lsr r3, r2, #0x1d\n    lsl r2, r3, #4\n    add r2, r3, r2\n    lsl r2, r2, #4\n    add r1, r1, r2\n    ldrb r2, [r5, #0xe]\n    add r0, r7, #0\n    mov r3, #2\n    bl ov80_02236A34\n    ldr r0, [r5, #4]\n    mov r1, #0x62\n    str r0, [sp]\n    ldrb r2, [r5, #0xe]\n    lsl r1, r1, #2\n    add r0, r7, #0\n    add r1, r5, r1\n    mov r3, #3\n    bl ov80_02236A34\n    add r0, r7, #0\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov80_02236A34(void) {
    /* Original at 0x02236A34 */
    /* Requires manual decompilation - 37 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    ldr r4, [sp, #0x28]\n    str r0, [sp, #4]\n    add r5, r1, #0\n    add r7, r2, #0\n    str r3, [sp, #8]\n    str r4, [sp]\n    bl ov80_0222A480\n    ldr r0, [sp, #0x28]\n    bl AllocMonZeroed\n    add r4, r0, #0\n    mov r6, #0\n    cmp r7, #0\n    ble _02236A7E\n    ldr r0, [sp, #8]\n    add r5, #0x30\n    lsl r1, r0, #2\n    ldr r0, [sp, #4]\n    add r0, r0, r1\n    str r0, [sp, #0xc]\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #0x78\n    bl ov80_0222A140\n    ldr r0, [sp, #0xc]\n    add r1, r4, #0\n    ldr r0, [r0, #4]\n    bl Party_AddMon\n    add r6, r6, #1\n    add r5, #0x38\n    cmp r6, r7\n    blt _02236A62\n    add r0, r4, #0\n    bl Heap_Free\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov80_02236A88(void) {
    /* Original at 0x02236A88 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "cmp r0, #6\n    bhi _02236AB6\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02236A98: ; jump table\n    mov r0, #0x81\n    bx lr\n    mov r0, #0x83\n    bx lr\n    mov r0, #0xcb\n    bx lr\n    mov r0, #0x8f\n    bx lr\n    mov r0, #0x81\n    bx lr"
    );
    #endif
}

void ov80_02236ABC(void) {
    /* Original at 0x02236ABC */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "ldrb r3, [r0, #0x10]\n    mov r2, #8\n    bic r3, r2\n    lsl r2, r1, #0x18\n    lsr r2, r2, #0x18\n    lsl r2, r2, #0x1f\n    lsr r2, r2, #0x1c\n    orr r2, r3\n    strb r2, [r0, #0x10]\n    ldr r2, _02236AD4 ; =0x0000083E\n    strh r1, [r0, r2]\n    bx lr\n    _02236AD4: .word 0x0000083E"
    );
    #endif
}

void ov80_02236AD8(void) {
    /* Original at 0x02236AD8 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "ldrb r0, [r0, #0x10]\n    lsl r0, r0, #0x1c\n    lsr r0, r0, #0x1f\n    bne _02236AE6\n    ldrh r0, [r1]\n    cmp r0, #0\n    beq _02236AEA\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void ov80_02236AF0(void) {
    ov80_02236B30();
}

void ov80_02236B04(void) {
    ov80_02236B30();
}

void ov80_02236B18(void) {
    ov80_02236B30(0xb5);
}

void ov80_02236B30(void) {
    /* Original at 0x02236B30 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    cmp r0, #3\n    beq _02236B3A\n    cmp r0, #6\n    bne _02236B74\n    mov r0, #0\n    bl sub_02034818\n    add r5, r0, #0\n    bne _02236B48\n    bl GF_AssertFail\n    mov r0, #1\n    bl sub_02034818\n    add r4, r0, #0\n    bne _02236B56\n    bl GF_AssertFail\n    add r0, r5, #0\n    bl PlayerProfile_GetVersion\n    add r5, r0, #0\n    add r0, r4, #0\n    bl PlayerProfile_GetVersion\n    cmp r5, #0\n    beq _02236B6C\n    cmp r0, #0\n    bne _02236B70\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #1\n    pop {r3, r4, r5, pc}"
    );
    #endif
}
