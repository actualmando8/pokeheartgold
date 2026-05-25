/* Decompiled from asm/overlay_80_022372D8.s */
#include "global.h"

void ov80_022372D8(void) {
    /* Original at 0x022372D8 */
    /* Requires manual decompilation - 41 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    add r5, r3, #0\n    add r0, r2, #0\n    str r1, [sp]\n    mov r4, #0\n    bl ov80_022379C0\n    lsl r1, r5, #0x19\n    lsl r0, r0, #0x18\n    ldr r2, [sp, #0x18]\n    lsr r1, r1, #0x17\n    add r5, r2, r1\n    ldr r1, _0223732C ; =ov80_0223C698\n    lsr r0, r0, #0x14\n    add r7, r1, r0\n    ldr r1, _02237330 ; =ov80_0223C608\n    lsl r0, r6, #3\n    add r6, r1, r0\n    bl LCRandom\n    mov r1, #0xc\n    bl _s32_div_f\n    lsl r0, r1, #0x10\n    lsr r0, r0, #0x10\n    cmp r0, #8\n    bhs _02237316\n    lsl r0, r0, #1\n    ldrh r0, [r7, r0]\n    b _0223731E\n    lsl r0, r0, #1\n    add r0, r6, r0\n    sub r0, #0x10\n    ldrh r0, [r0]\n    strh r0, [r5]\n    ldr r0, [sp]\n    add r4, r4, #1\n    add r5, r5, #2\n    cmp r4, r0\n    blt _022372FE\n    pop {r3, r4, r5, r6, r7, pc}\n    _0223732C: .word ov80_0223C698\n    _02237330: .word ov80_0223C608"
    );
    #endif
}

void ov80_02237334(void) {
    /* Original at 0x02237334 */
    /* Requires manual decompilation - 131 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x1c\n    add r5, r0, #0\n    ldr r0, [sp, #0x34]\n    str r1, [sp]\n    str r0, [sp, #0x34]\n    mov r0, #0\n    str r0, [sp, #0x10]\n    add r0, sp, #0x20\n    ldrb r4, [r0, #0x10]\n    add r6, r2, #0\n    lsl r0, r4, #0x19\n    lsr r0, r0, #0x18\n    str r0, [sp, #8]\n    add r0, r3, #0\n    bl ov80_022379C0\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #4]\n    cmp r5, #0\n    bne _0223738E\n    mov r0, #0xa\n    add r1, r4, #1\n    mul r0, r6\n    add r0, r1, r0\n    cmp r0, #0x32\n    bne _0223737A\n    ldr r0, [sp, #8]\n    ldr r2, _0223743C ; =0x00000133\n    lsl r1, r0, #1\n    ldr r0, [sp, #0x34]\n    add sp, #0x1c\n    strh r2, [r0, r1]\n    pop {r4, r5, r6, r7, pc}\n    cmp r0, #0xaa\n    bne _0223738E\n    ldr r0, [sp, #8]\n    mov r2, #0x4d\n    lsl r1, r0, #1\n    ldr r0, [sp, #0x34]\n    lsl r2, r2, #2\n    strh r2, [r0, r1]\n    add sp, #0x1c\n    pop {r4, r5, r6, r7, pc}\n    ldr r0, [sp, #8]\n    lsl r1, r0, #1\n    ldr r0, [sp, #0x34]\n    add r0, r0, r1\n    str r0, [sp, #0xc]\n    bl LCRandom\n    mov r1, #0x4b\n    lsl r1, r1, #2\n    bl _u32_div_f\n    lsl r0, r1, #0x10\n    lsr r4, r0, #0x10\n    ldr r1, [sp, #8]\n    ldr r0, [sp, #0x10]\n    str r4, [sp, #0x14]\n    add r5, r1, r0\n    lsl r0, r5, #1\n    str r0, [sp, #0x18]\n    ldr r0, [sp, #4]\n    lsl r1, r0, #4\n    ldr r0, _02237440 ; =ov80_0223C698\n    add r7, r0, r1\n    ldr r1, [sp, #0x34]\n    ldr r0, [sp, #0x18]\n    ldrh r6, [r1, r0]\n    ldr r0, _02237444 ; =ov80_0223C738\n    lsl r1, r4, #1\n    ldrh r0, [r0, r1]\n    cmp r6, r0\n    bne _022373F6\n    mov r1, #0\n    cmp r5, #0\n    ble _022373E2\n    ldr r2, [sp, #0x34]\n    ldrh r0, [r2]\n    cmp r4, r0\n    beq _022373E2\n    add r1, r1, #1\n    add r2, r2, #2\n    cmp r1, r5\n    blt _022373D4\n    cmp r1, r5\n    bne _022373F6\n    ldr r0, [sp, #0xc]\n    strh r4, [r0]\n    add r0, r0, #2\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #0x10]\n    add r0, r0, #1\n    str r0, [sp, #0x10]\n    b _0223742E\n    add r0, r4, #1\n    lsl r0, r0, #0x10\n    lsr r4, r0, #0x10\n    mov r0, #0x4b\n    lsl r0, r0, #2\n    cmp r4, r0\n    blo _02237406\n    mov r4, #0\n    ldr r0, [sp, #0x14]\n    cmp r4, r0\n    bne _022373BC\n    bl LCRandom\n    lsr r1, r0, #0x1f\n    lsl r2, r0, #0x1d\n    sub r2, r2, r1\n    mov r0, #0x1d\n    ror r2, r0\n    add r0, r1, r2\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0xf\n    ldrh r2, [r7, r0]\n    cmp r6, r2\n    beq _0223740C\n    ldr r1, [sp, #0x34]\n    ldr r0, [sp, #0x18]\n    strh r2, [r1, r0]\n    b _022373BC\n    add r1, r0, #0\n    ldr r0, [sp]\n    cmp r1, r0\n    blt _02237398\n    add sp, #0x1c\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _0223743C: .word 0x00000133\n    _02237440: .word ov80_0223C698\n    _02237444: .word ov80_0223C738"
    );
    #endif
}

void ov80_02237448(void) {
    /* Original at 0x02237448 */
    /* Requires manual decompilation - 187 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    str r0, [sp]\n    str r1, [sp, #4]\n    ldr r0, [sp, #0x28]\n    mov r7, #0\n    str r0, [sp, #0x28]\n    ldr r0, [sp, #0x30]\n    ldr r6, [sp, #0x2c]\n    str r0, [sp, #0x30]\n    lsl r0, r3, #0x19\n    lsr r4, r0, #0x18\n    add r0, r2, #0\n    str r7, [sp, #0xc]\n    bl ov80_022379C0\n    lsl r0, r0, #0x18\n    lsr r2, r0, #0x18\n    ldr r0, [sp, #0x30]\n    cmp r0, #0\n    beq _022374CE\n    ldr r3, _022375B8 ; =ov80_0223C990\n    add r2, r7, #0\n    lsl r0, r2, #1\n    ldrh r1, [r3, r0]\n    ldr r0, [sp, #0x28]\n    cmp r0, r1\n    bne _02237484\n    add r5, r2, #0\n    b _02237490\n    add r0, r2, #1\n    lsl r0, r0, #0x10\n    lsr r2, r0, #0x10\n    ldr r0, _022375BC ; =0x000001DD\n    cmp r2, r0\n    blo _02237476\n    ldr r0, _022375BC ; =0x000001DD\n    cmp r2, r0\n    bne _0223749A\n    add r5, r0, #0\n    sub r5, #0x65\n    ldr r0, _022375C0 ; =ov80_0223C5A8\n    mov r1, #0\n    lsl r2, r1, #2\n    add r2, r0, r2\n    ldrh r2, [r2, #2]\n    cmp r5, r2\n    blo _022374B2\n    add r1, r1, #1\n    lsl r1, r1, #0x10\n    lsr r1, r1, #0x10\n    cmp r1, #4\n    blo _0223749E\n    cmp r1, #4\n    bne _022374B8\n    mov r1, #3\n    ldr r0, [sp, #0x30]\n    cmp r0, #2\n    bne _022374C4\n    ldr r0, _022375C4 ; =ov80_0223C5B4\n    str r0, [sp, #0x10]\n    b _022374D6\n    ldr r2, _022375C0 ; =ov80_0223C5A8\n    lsl r0, r1, #2\n    add r0, r2, r0\n    str r0, [sp, #0x10]\n    b _022374D6\n    ldr r1, _022375C8 ; =ov80_0223C5E0\n    lsl r0, r2, #2\n    add r0, r1, r0\n    str r0, [sp, #0x10]\n    ldr r0, [sp, #0x10]\n    ldrh r1, [r0, #2]\n    ldrh r0, [r0]\n    sub r0, r1, r0\n    add r0, r0, #1\n    lsl r0, r0, #0x10\n    lsr r5, r0, #0x10\n    bl LCRandom\n    add r1, r5, #0\n    bl _s32_div_f\n    ldr r0, [sp, #0x10]\n    ldrh r0, [r0]\n    add r0, r0, r1\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    sub r0, r0, #1\n    lsl r0, r0, #0x10\n    lsr r2, r0, #0x10\n    str r2, [sp, #8]\n    ldr r0, [sp]\n    cmp r0, #0\n    ble _022375B4\n    sub r0, r4, #2\n    lsl r0, r0, #1\n    mov ip, r0\n    lsl r0, r4, #1\n    add r5, r6, r0\n    ldr r0, [sp, #0xc]\n    cmp r0, #0\n    bne _02237532\n    mov r0, #0\n    cmp r4, #0\n    ble _02237542\n    add r1, r2, #1\n    lsl r3, r0, #1\n    ldrh r3, [r6, r3]\n    cmp r1, r3\n    beq _02237542\n    add r0, r0, #1\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    cmp r0, r4\n    blt _0223751E\n    b _02237542\n    mov r1, ip\n    ldrh r1, [r6, r1]\n    add r0, r2, #1\n    cmp r0, r1\n    bne _02237540\n    mov r0, #0\n    b _02237542\n    add r0, r4, #0\n    cmp r0, r4\n    bne _0223758A\n    ldr r0, [sp, #0x30]\n    cmp r0, #0\n    beq _02237562\n    ldr r0, _022375B8 ; =ov80_0223C990\n    lsl r1, r2, #1\n    ldrh r1, [r0, r1]\n    ldr r0, [sp, #0x28]\n    cmp r0, r1\n    beq _0223758A\n    lsl r0, r7, #1\n    add r1, r2, #1\n    strh r1, [r5, r0]\n    add r7, r7, #1\n    b _0223758A\n    ldr r1, _022375CC ; =ov80_0223CD4A\n    lsl r0, r2, #2\n    add r3, r1, r0\n    ldrh r1, [r1, r0]\n    ldr r0, [sp, #4]\n    cmp r0, r1\n    beq _02237576\n    ldrh r1, [r3, #2]\n    cmp r0, r1\n    bne _0223758A\n    ldr r0, _022375B8 ; =ov80_0223C990\n    lsl r1, r2, #1\n    ldrh r1, [r0, r1]\n    ldr r0, [sp, #0x28]\n    cmp r0, r1\n    beq _0223758A\n    lsl r0, r7, #1\n    add r1, r2, #1\n    strh r1, [r5, r0]\n    add r7, r7, #1\n    ldr r1, [sp, #0x10]\n    add r0, r2, #1\n    lsl r0, r0, #0x10\n    lsr r2, r0, #0x10\n    ldrh r1, [r1, #2]\n    add r0, r2, #1\n    cmp r0, r1\n    blt _022375A4\n    ldr r0, [sp, #0x10]\n    ldrh r0, [r0]\n    sub r0, r0, #1\n    lsl r0, r0, #0x10\n    lsr r2, r0, #0x10\n    ldr r0, [sp, #8]\n    cmp r2, r0\n    bne _022375AE\n    mov r0, #1\n    str r0, [sp, #0xc]\n    ldr r0, [sp]\n    cmp r7, r0\n    blt _02237510\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    _022375B8: .word ov80_0223C990\n    _022375BC: .word 0x000001DD\n    _022375C0: .word ov80_0223C5A8\n    _022375C4: .word ov80_0223C5B4\n    _022375C8: .word ov80_0223C5E0\n    _022375CC: .word ov80_0223CD4A"
    );
    #endif
}

void ov80_022375D0(void) {
    /* Original at 0x022375D0 */
    /* Requires manual decompilation - 251 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x64\n    add r5, r0, #0\n    ldrb r0, [r5, #5]\n    add r6, r1, #0\n    lsl r0, r0, #0x19\n    lsr r7, r0, #0x18\n    ldrb r0, [r5, #4]\n    bl ov80_0223787C\n    str r0, [sp, #0x18]\n    ldrb r0, [r5, #4]\n    bl ov80_02237888\n    str r0, [sp, #0x10]\n    ldr r0, _02237818 ; =0x000006FC\n    ldr r0, [r5, r0]\n    bl SaveArray_Party_Get\n    str r0, [sp, #0x1c]\n    bl HealParty\n    ldrb r0, [r5, #4]\n    bl ov80_02237850\n    add r1, r0, #0\n    mov r0, #0xb\n    bl BattleSetup_New\n    ldr r1, [r6, #0xc]\n    add r4, r0, #0\n    str r1, [sp]\n    ldr r1, [r6, #0x1c]\n    str r1, [sp, #4]\n    ldr r2, [r6, #8]\n    ldr r3, [r6, #0x18]\n    mov r1, #0\n    bl sub_02051D18\n    mov r0, #0x53\n    mov r1, #0x16\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    add r0, r0, #4\n    str r1, [r4, r0]\n    ldr r0, [r4, #4]\n    ldr r1, [sp, #0x18]\n    bl Party_InitWithMaxSize\n    mov r0, #0xb\n    bl AllocMonZeroed\n    str r0, [sp, #0x20]\n    ldr r0, [sp, #0x18]\n    mov r6, #0\n    cmp r0, #0\n    ble _02237668\n    mov r1, #0x26\n    add r2, r5, r6\n    lsl r1, r1, #4\n    ldrb r1, [r2, r1]\n    ldr r0, [sp, #0x1c]\n    bl Party_GetMonByIndex\n    ldr r1, [sp, #0x20]\n    bl CopyPokemonToPokemon\n    ldr r1, [sp, #0x20]\n    add r0, r4, #0\n    mov r2, #0\n    bl BattleSetup_AddMonToParty\n    ldr r0, [sp, #0x18]\n    add r6, r6, #1\n    cmp r6, r0\n    blt _02237642\n    ldr r0, [sp, #0x20]\n    bl Heap_Free\n    add r0, r4, #0\n    bl BattleSetup_SetAllySideBattlersToPlayer\n    lsl r0, r7, #1\n    str r0, [sp, #0x28]\n    add r6, r5, #0\n    ldr r1, [sp, #0x28]\n    add r6, #0x18\n    ldrh r1, [r6, r1]\n    add r0, sp, #0x34\n    mov r2, #0xb\n    mov r3, #0xcc\n    bl ov80_02229F04\n    bl Heap_Free\n    mov r0, #0xb\n    str r0, [sp]\n    ldr r2, [sp, #0x10]\n    add r0, r4, #0\n    add r1, sp, #0x34\n    mov r3, #1\n    bl ov80_0222A480\n    ldr r0, [r4, #8]\n    ldr r1, [sp, #0x10]\n    bl Party_InitWithMaxSize\n    ldr r1, _0223781C ; =0x000006F5\n    ldrb r2, [r5, #4]\n    ldrb r0, [r5, r1]\n    add r1, #0xf\n    add r3, r5, r1\n    lsl r1, r2, #3\n    add r1, r2, r1\n    add r1, r3, r1\n    bl sub_02030BD0\n    str r0, [sp, #0x24]\n    ldrb r0, [r5, #4]\n    cmp r0, #2\n    bne _022376C6\n    mov r0, #9\n    str r0, [sp, #0x24]\n    ldr r2, [sp, #0x24]\n    add r0, r5, #0\n    add r1, r7, #0\n    bl ov80_02237980\n    mov r2, #0\n    add r1, r4, #0\n    add r2, r2, #1\n    str r0, [r1, #0x34]\n    add r1, #0x34\n    cmp r2, #4\n    blt _022376D4\n    mov r0, #0x38\n    mul r0, r7\n    str r0, [sp, #0x14]\n    ldr r0, [sp, #0x10]\n    mov r3, #0x29\n    str r0, [sp]\n    mov r0, #0xb\n    str r0, [sp, #4]\n    mov r0, #0xce\n    str r0, [sp, #8]\n    ldr r2, [sp, #0x28]\n    lsl r3, r3, #4\n    add r1, r5, r3\n    ldr r0, [sp, #0x14]\n    ldrh r2, [r6, r2]\n    sub r3, #0x28\n    add r0, r1, r0\n    add r6, r5, r3\n    lsl r3, r7, #1\n    ldr r1, [sp, #0x24]\n    add r3, r6, r3\n    bl ov80_02237894\n    mov r0, #0xb\n    bl AllocMonZeroed\n    add r6, r0, #0\n    mov r0, #0\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #0x10]\n    cmp r0, #0\n    ble _0223776E\n    mov r0, #0x29\n    lsl r0, r0, #4\n    add r0, r5, r0\n    str r0, [sp, #0x2c]\n    mov r0, #0x38\n    mul r0, r7\n    str r0, [sp, #0x30]\n    add r0, r5, #0\n    add r1, r7, #0\n    bl ov80_02237820\n    cmp r0, #0\n    bne _0223772C\n    ldr r1, [sp, #0x24]\n    add r0, r5, #0\n    bl ov80_022378F8\n    add r2, r0, #0\n    lsl r2, r2, #0x18\n    ldr r1, [sp, #0x2c]\n    ldr r0, [sp, #0x30]\n    lsr r2, r2, #0x18\n    add r0, r1, r0\n    add r1, r6, #0\n    bl ov80_0222A140\n    add r0, r6, #0\n    bl UpdateMonAbility\n    add r0, r4, #0\n    add r1, r6, #0\n    mov r2, #1\n    bl BattleSetup_AddMonToParty\n    ldr r0, [sp, #0xc]\n    add r1, r0, #1\n    ldr r0, [sp, #0x10]\n    str r1, [sp, #0xc]\n    cmp r1, r0\n    blt _0223772C\n    add r0, r6, #0\n    bl Heap_Free\n    ldrb r0, [r5, #4]\n    cmp r0, #2\n    beq _0223777E\n    cmp r0, #3\n    bne _02237810\n    add r0, r4, #0\n    bl BattleSetup_SetAllySideBattlersToPlayer\n    bl sub_0203769C\n    mov r1, #1\n    sub r0, r1, r0\n    bl sub_02034818\n    mov r1, #1\n    lsl r1, r1, #8\n    ldr r1, [r4, r1]\n    bl PlayerProfile_Copy\n    add r1, r7, #1\n    lsl r1, r1, #1\n    add r1, r5, r1\n    ldrh r1, [r1, #0x18]\n    add r0, sp, #0x34\n    mov r2, #0xb\n    mov r3, #0xcc\n    bl ov80_02229F04\n    bl Heap_Free\n    mov r0, #0xb\n    str r0, [sp]\n    ldr r2, [sp, #0x10]\n    add r0, r4, #0\n    add r1, sp, #0x34\n    mov r3, #3\n    bl ov80_0222A480\n    ldr r0, [r4, #0x10]\n    ldr r1, [sp, #0x10]\n    bl Party_InitWithMaxSize\n    mov r0, #0xb\n    bl AllocMonZeroed\n    add r6, r0, #0\n    add r0, r5, #0\n    add r1, r7, #0\n    bl ov80_02237820\n    cmp r0, #0\n    bne _022377D0\n    ldr r1, [sp, #0x24]\n    add r0, r5, #0\n    bl ov80_022378F8\n    add r2, r0, #0\n    mov r0, #0x29\n    lsl r0, r0, #4\n    add r1, r5, r0\n    ldr r0, [sp, #0x14]\n    lsl r2, r2, #0x18\n    add r0, r1, r0\n    add r1, r6, #0\n    lsr r2, r2, #0x18\n    bl ov80_0222A140\n    add r0, r6, #0\n    bl UpdateMonAbility\n    add r0, r4, #0\n    add r1, r6, #0\n    mov r2, #3\n    bl BattleSetup_AddMonToParty\n    add r0, r6, #0\n    bl Heap_Free\n    add r0, r4, #0\n    add sp, #0x64\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _02237818: .word 0x000006FC\n    _0223781C: .word 0x000006F5"
    );
    #endif
}

void ov80_02237820(void) {
    /* Original at 0x02237820 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r2, #0x38\n    mul r2, r1\n    mov r1, #0x2a\n    lsl r1, r1, #4\n    add r1, r0, r1\n    ldr r4, [r1, r2]\n    ldr r3, _0223784C ; =0x0003D0A9\n    cmp r4, r3\n    bls _02237838\n    sub r3, r4, r3\n    b _0223783A\n    add r3, r4, r3\n    str r3, [r1, r2]\n    add r3, r0, r2\n    mov r0, #0xa7\n    lsl r0, r0, #2\n    ldr r0, [r3, r0]\n    ldr r1, [r1, r2]\n    bl CalcShininessByOtIdAndPersonality\n    pop {r4, pc}\n    _0223784C: .word 0x0003D0A9"
    );
    #endif
}

void ov80_02237850(void) {
    /* Original at 0x02237850 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "cmp r0, #3\n    bhi _02237878\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02237860: ; jump table\n    mov r0, #0x81\n    bx lr\n    mov r0, #0x83\n    bx lr\n    mov r0, #0x8f\n    bx lr\n    mov r0, #0x8f\n    bx lr\n    mov r0, #0x81\n    bx lr"
    );
    #endif
}

void ov80_0223787C(void) {
    /* Original at 0x0223787C */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "cmp r0, #1\n    bne _02237884\n    mov r0, #2\n    bx lr\n    mov r0, #1\n    bx lr"
    );
    #endif
}

void ov80_02237888(void) {
    /* Original at 0x02237888 */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "cmp r0, #1\n    bne _02237890\n    mov r0, #2\n    bx lr\n    mov r0, #1\n    bx lr"
    );
    #endif
}

void ov80_02237894(void) {
    /* Original at 0x02237894 */
    /* Requires manual decompilation - 47 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r6, r0, #0\n    ldr r0, [sp, #0x2c]\n    add r5, r3, #0\n    str r0, [sp, #0x2c]\n    ldr r0, [sp, #0x30]\n    ldr r7, [sp, #0x28]\n    str r0, [sp, #0x30]\n    ldr r0, _022378F4 ; =0x00000133\n    cmp r2, r0\n    bne _022378B0\n    mov r0, #0x1f\n    b _022378C0\n    add r0, r0, #1\n    cmp r2, r0\n    bne _022378BA\n    mov r0, #0x1f\n    b _022378C0\n    add r0, r1, #0\n    bl ov80_0223796C\n    mov r4, #0\n    cmp r7, #0\n    ble _022378EE\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #0xc]\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, [sp, #0x2c]\n    ldr r3, [sp, #0xc]\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x30]\n    add r2, r4, #0\n    str r0, [sp, #8]\n    ldrh r1, [r5]\n    add r0, r6, #0\n    bl ov80_0222A4EC\n    add r4, r4, #1\n    add r5, r5, #2\n    add r6, #0x38\n    cmp r4, r7\n    blt _022378CC\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _022378F4: .word 0x00000133"
    );
    #endif
}

void ov80_022378F8(void) {
    /* Original at 0x022378F8 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldrb r1, [r0, #5]\n    lsl r1, r1, #0x19\n    lsr r1, r1, #0x17\n    add r1, r0, r1\n    ldrh r2, [r1, #0x18]\n    ldr r1, _0223791C ; =0x0000FECD\n    add r1, r2, r1\n    lsl r1, r1, #0x10\n    lsr r1, r1, #0x10\n    cmp r1, #1\n    bhi _02237916\n    bl ov80_022379C8\n    pop {r3, pc}\n    ldrb r0, [r0, #7]\n    pop {r3, pc}\n    nop\n    _0223791C: .word 0x0000FECD"
    );
    #endif
}

void ov80_02237920(void) {
    /* Original at 0x02237920 */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _02237928 ; =ov80_0223D4C0\n    ldrb r0, [r1, r0]\n    bx lr\n    nop\n    _02237928: .word ov80_0223D4C0"
    );
    #endif
}

void ov80_0223792C(void) {
    /* Original at 0x0223792C */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "cmp r0, #2\n    beq _02237934\n    cmp r0, #3\n    bne _02237938\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void ov80_0223793C(void) {
    /* Original at 0x0223793C */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _02237968 ; =0x000006FC\n    ldr r0, [r4, r0]\n    bl SaveArray_Party_Get\n    mov r1, #0x26\n    lsl r1, r1, #4\n    ldrb r1, [r4, r1]\n    bl Party_GetMonByIndex\n    mov r1, #0xa1\n    mov r2, #0\n    bl GetMonData\n    mov r1, #0xa\n    bl _s32_div_f\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    pop {r4, pc}\n    nop\n    _02237968: .word 0x000006FC"
    );
    #endif
}

void ov80_0223796C(void) {
    ov80_022379C0();
}

void ov80_02237980(void) {
    /* Original at 0x02237980 */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "add r2, r2, #1\n    cmp r2, #8\n    blt _0223798A\n    mov r2, #7\n    b _02237994\n    cmp r2, #4\n    blt _02237992\n    mov r2, #1\n    b _02237994\n    mov r2, #0\n    ldrb r3, [r0, #4]\n    cmp r3, #0\n    bne _022379B0\n    lsl r1, r1, #0x19\n    lsr r1, r1, #0x17\n    add r0, r0, r1\n    ldrh r1, [r0, #0x18]\n    ldr r0, _022379BC ; =0x0000FECD\n    add r0, r1, r0\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    cmp r0, #1\n    bhi _022379B0\n    mov r2, #7\n    cmp r3, #2\n    bne _022379B6\n    mov r2, #7\n    add r0, r2, #0\n    bx lr\n    nop\n    _022379BC: .word 0x0000FECD"
    );
    #endif
}

void ov80_022379C0(void) {
    /* Original at 0x022379C0 */
    /* Requires manual decompilation - 4 instructions */
    #ifdef MWERKS
    asm(
        "cmp r0, #0xa\n    blo _022379C6\n    mov r0, #9\n    bx lr"
    );
    #endif
}

void ov80_022379C8(void) {
    /* Original at 0x022379C8 */
    /* Requires manual decompilation - 50 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r0, _02237A34 ; =0x000006FC\n    ldr r0, [r5, r0]\n    bl SaveArray_Party_Get\n    mov r1, #0x26\n    lsl r1, r1, #4\n    ldrb r1, [r5, r1]\n    add r6, r0, #0\n    bl Party_GetMonByIndex\n    mov r1, #0xa1\n    mov r2, #0\n    bl GetMonData\n    lsl r0, r0, #0x10\n    lsr r4, r0, #0x10\n    ldrb r0, [r5, #4]\n    bl ov80_0223787C\n    cmp r0, #2\n    bne _02237A16\n    ldr r1, _02237A38 ; =0x00000261\n    add r0, r6, #0\n    ldrb r1, [r5, r1]\n    bl Party_GetMonByIndex\n    mov r1, #0xa1\n    mov r2, #0\n    bl GetMonData\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    cmp r4, r0\n    bhi _02237A12\n    add r4, r0, #0\n    add r0, r4, #0\n    pop {r4, r5, r6, pc}\n    ldrb r0, [r5, #4]\n    bl ov80_0223792C\n    cmp r0, #1\n    bne _02237A2E\n    ldr r0, _02237A3C ; =0x00000D84\n    ldrh r0, [r5, r0]\n    cmp r4, r0\n    bhi _02237A2A\n    add r4, r0, #0\n    add r0, r4, #0\n    pop {r4, r5, r6, pc}\n    add r0, r4, #0\n    pop {r4, r5, r6, pc}\n    nop\n    _02237A34: .word 0x000006FC\n    _02237A38: .word 0x00000261\n    _02237A3C: .word 0x00000D84"
    );
    #endif
}

void ov80_02237A40(void) {
    /* Original at 0x02237A40 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    cmp r0, #0\n    beq _02237A58\n    lsl r0, r0, #0xc\n    bl _ffltu\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    b _02237A66\n    lsl r0, r0, #0xc\n    bl _ffltu\n    mov r1, #0x3f\n    lsl r1, r1, #0x18\n    bl _fsub\n    bl _ffix\n    bl FX_Sqrt\n    pop {r3, pc}"
    );
    #endif
}
