/* Decompiled from asm/overlay_80_02238034.s */
#include "global.h"

void ov80_02238034(void) {
    /* Original at 0x02238034 */
    /* Requires manual decompilation - 47 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    cmp r0, #0\n    bne _02238054\n    mov r0, #7\n    add r3, r2, #1\n    mul r0, r1\n    add r0, r3, r0\n    cmp r0, #0x15\n    bne _0223804A\n    ldr r0, _0223808C ; =0x00000137\n    pop {r3, r4, r5, pc}\n    cmp r0, #0x31\n    bne _02238054\n    mov r0, #0x4e\n    lsl r0, r0, #2\n    pop {r3, r4, r5, pc}\n    cmp r1, #8\n    blo _0223805A\n    mov r1, #7\n    cmp r2, #6\n    beq _02238062\n    cmp r2, #0xd\n    bne _02238070\n    ldr r0, _02238090 ; =ov80_0223D518\n    lsl r1, r1, #3\n    ldrh r4, [r0, r1]\n    ldr r0, _02238094 ; =ov80_0223D51A\n    ldrh r0, [r0, r1]\n    sub r5, r0, r4\n    b _0223807C\n    ldr r0, _02238098 ; =ov80_0223D514\n    lsl r1, r1, #3\n    ldrh r4, [r0, r1]\n    ldr r0, _0223809C ; =ov80_0223D516\n    ldrh r0, [r0, r1]\n    sub r5, r0, r4\n    bl LCRandom\n    add r1, r5, #0\n    bl _s32_div_f\n    add r0, r4, r1\n    pop {r3, r4, r5, pc}\n    nop\n    _0223808C: .word 0x00000137\n    _02238090: .word ov80_0223D518\n    _02238094: .word ov80_0223D51A\n    _02238098: .word ov80_0223D514\n    _0223809C: .word ov80_0223D516"
    );
    #endif
}

void ov80_022380A0(void) {
    /* Original at 0x022380A0 */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r6, r2, #0\n    str r0, [sp]\n    str r1, [sp, #4]\n    add r7, r3, #0\n    mov r4, #0\n    add r5, r6, #0\n    ldr r0, [sp]\n    ldr r1, [sp, #4]\n    add r2, r4, #0\n    bl ov80_02238034\n    mov r1, #0\n    strh r0, [r5]\n    cmp r4, #0\n    ble _022380D6\n    lsl r0, r4, #1\n    ldrh r3, [r6, r0]\n    add r2, r6, #0\n    ldrh r0, [r2]\n    cmp r0, r3\n    beq _022380D6\n    add r1, r1, #1\n    add r2, r2, #2\n    cmp r1, r4\n    blt _022380C8\n    cmp r1, r4\n    bne _022380DE\n    add r5, r5, #2\n    add r4, r4, #1\n    cmp r4, r7\n    blt _022380B0\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void BattleArcade_GetMonCount(void) {
    /* Original at 0x022380E8 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    cmp r0, #3\n    bhi _02238112\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _022380FA: ; jump table\n    mov r0, #3\n    pop {r3, pc}\n    cmp r1, #0\n    bne _0223810E\n    mov r0, #2\n    pop {r3, pc}\n    mov r0, #4\n    pop {r3, pc}\n    bl GF_AssertFail\n    mov r0, #3\n    pop {r3, pc}"
    );
    #endif
}

void BattleArcade_GetOpponentMonCount(void) {
    /* Original at 0x0223811C */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    cmp r0, #3\n    bhi _02238146\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0223812E: ; jump table\n    mov r0, #3\n    pop {r3, pc}\n    cmp r1, #0\n    bne _02238142\n    mov r0, #2\n    pop {r3, pc}\n    mov r0, #4\n    pop {r3, pc}\n    bl GF_AssertFail\n    mov r0, #3\n    pop {r3, pc}"
    );
    #endif
}

void BattleArcade_NewBattleSetup(void) {
    /* Original at 0x02238150 */
    /* Requires manual decompilation - 209 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x50\n    add r7, r0, #0\n    ldrb r0, [r7, #0x10]\n    add r5, r1, #0\n    mov r1, #0\n    bl BattleArcade_GetMonCount\n    str r0, [sp, #0x10]\n    ldrb r0, [r7, #0x10]\n    mov r1, #0\n    bl BattleArcade_GetOpponentMonCount\n    str r0, [sp, #0xc]\n    ldrb r0, [r7, #0x10]\n    bl ov80_02238344\n    add r1, r0, #0\n    mov r0, #0xb\n    bl BattleSetup_New\n    ldr r1, [r5, #0xc]\n    add r4, r0, #0\n    str r1, [sp]\n    ldr r1, [r5, #0x1c]\n    str r1, [sp, #4]\n    ldr r2, [r5, #8]\n    ldr r3, [r5, #0x18]\n    mov r1, #0\n    bl sub_02051D18\n    mov r1, #0x53\n    lsl r1, r1, #2\n    mov r2, #0x14\n    str r2, [r4, r1]\n    add r0, r1, #4\n    str r2, [r4, r0]\n    ldr r0, [r7, #0x14]\n    add r1, #0x28\n    str r0, [r4, r1]\n    ldr r0, [r7, #0x74]\n    ldr r1, [r7, #0x70]\n    str r0, [sp, #0x14]\n    ldrb r0, [r7, #0x13]\n    str r1, [sp, #0x18]\n    cmp r0, #0x1b\n    bne _022381B4\n    ldr r0, [sp, #0x14]\n    str r0, [sp, #0x18]\n    str r1, [sp, #0x14]\n    ldr r0, [r4, #4]\n    ldr r1, [sp, #0x10]\n    bl Party_InitWithMaxSize\n    bl sub_0203769C\n    cmp r0, #0\n    bne _022381C8\n    mov r5, #0\n    b _022381CA\n    mov r5, #2\n    mov r0, #0xb\n    bl AllocMonZeroed\n    add r6, r0, #0\n    mov r0, #0\n    str r0, [sp, #0x1c]\n    ldr r0, [sp, #0x10]\n    cmp r0, #0\n    ble _02238202\n    ldr r0, [sp, #0x18]\n    add r1, r5, #0\n    bl Party_GetMonByIndex\n    add r1, r6, #0\n    bl CopyPokemonToPokemon\n    add r0, r4, #0\n    add r1, r6, #0\n    mov r2, #0\n    bl BattleSetup_AddMonToParty\n    ldr r0, [sp, #0x1c]\n    add r5, r5, #1\n    add r1, r0, #1\n    ldr r0, [sp, #0x10]\n    str r1, [sp, #0x1c]\n    cmp r1, r0\n    blt _022381DC\n    add r0, r6, #0\n    bl Heap_Free\n    add r0, r4, #0\n    bl BattleSetup_SetAllySideBattlersToPlayer\n    ldrb r1, [r7, #0x11]\n    add r0, sp, #0x20\n    mov r2, #0xb\n    lsl r1, r1, #1\n    add r1, r7, r1\n    add r1, #0x78\n    ldrh r1, [r1]\n    mov r3, #0xcc\n    bl ov80_02229F04\n    bl Heap_Free\n    mov r0, #0xb\n    str r0, [sp]\n    ldr r2, [sp, #0xc]\n    add r0, r4, #0\n    add r1, sp, #0x20\n    mov r3, #1\n    bl ov80_0222A480\n    ldrb r0, [r7, #0x10]\n    mov r1, #0\n    bl BattleArcade_GetOpponentMonCount\n    add r1, r0, #0\n    ldr r0, [r4, #8]\n    bl Party_InitWithMaxSize\n    mov r6, #0\n    add r5, r4, #0\n    add r0, r7, #0\n    bl ov80_02238444\n    str r0, [r5, #0x34]\n    add r6, r6, #1\n    add r5, #0x34\n    cmp r6, #4\n    blt _0223824A\n    mov r0, #0xb\n    bl AllocMonZeroed\n    add r6, r0, #0\n    ldr r0, [sp, #0xc]\n    mov r5, #0\n    cmp r0, #0\n    ble _0223828A\n    ldr r0, [sp, #0x14]\n    add r1, r5, #0\n    bl Party_GetMonByIndex\n    add r1, r6, #0\n    bl CopyPokemonToPokemon\n    add r0, r4, #0\n    add r1, r6, #0\n    mov r2, #1\n    bl BattleSetup_AddMonToParty\n    ldr r0, [sp, #0xc]\n    add r5, r5, #1\n    cmp r5, r0\n    blt _0223826A\n    add r0, r6, #0\n    bl Heap_Free\n    ldrb r0, [r7, #0x10]\n    cmp r0, #2\n    beq _0223829A\n    cmp r0, #3\n    bne _02238330\n    add r0, r4, #0\n    bl BattleSetup_SetAllySideBattlersToPlayer\n    bl sub_0203769C\n    mov r1, #1\n    sub r0, r1, r0\n    bl sub_02034818\n    mov r1, #1\n    lsl r1, r1, #8\n    ldr r1, [r4, r1]\n    bl PlayerProfile_Copy\n    ldrb r1, [r7, #0x11]\n    add r0, sp, #0x20\n    mov r2, #0xb\n    add r1, r1, #7\n    lsl r1, r1, #1\n    add r1, r7, r1\n    add r1, #0x78\n    ldrh r1, [r1]\n    mov r3, #0xcc\n    bl ov80_02229F04\n    bl Heap_Free\n    mov r0, #0xb\n    str r0, [sp]\n    ldr r2, [sp, #0xc]\n    add r0, r4, #0\n    add r1, sp, #0x20\n    mov r3, #3\n    bl ov80_0222A480\n    ldrb r0, [r7, #0x10]\n    mov r1, #0\n    bl BattleArcade_GetOpponentMonCount\n    add r1, r0, #0\n    ldr r0, [r4, #0x10]\n    bl Party_InitWithMaxSize\n    mov r0, #0xb\n    bl AllocMonZeroed\n    add r6, r0, #0\n    mov r0, #0\n    str r0, [sp, #8]\n    ldr r0, [sp, #0xc]\n    cmp r0, #0\n    ble _0223832A\n    add r5, r0, #0\n    ldr r0, [sp, #0x14]\n    add r1, r5, #0\n    bl Party_GetMonByIndex\n    add r1, r6, #0\n    bl CopyPokemonToPokemon\n    add r0, r4, #0\n    add r1, r6, #0\n    mov r2, #3\n    bl BattleSetup_AddMonToParty\n    ldr r0, [sp, #8]\n    add r5, r5, #1\n    add r1, r0, #1\n    ldr r0, [sp, #0xc]\n    str r1, [sp, #8]\n    cmp r1, r0\n    blt _02238304\n    add r0, r6, #0\n    bl Heap_Free\n    ldr r0, [r7, #0x70]\n    bl HealParty\n    ldr r0, [r7, #0x74]\n    bl HealParty\n    add r0, r4, #0\n    add sp, #0x50\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov80_02238344(void) {
    /* Original at 0x02238344 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "cmp r0, #3\n    bhi _0223836C\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02238354: ; jump table\n    mov r0, #0x81\n    bx lr\n    mov r0, #0x83\n    bx lr\n    mov r0, #0x8f\n    bx lr\n    mov r0, #0x8f\n    bx lr\n    mov r0, #0x81\n    bx lr"
    );
    #endif
}

void ov80_02238370(void) {
    /* Original at 0x02238370 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "mov r0, #0x32\n    bx lr"
    );
    #endif
}

void BattleArcade_MultiplayerCheck(void) {
    /* Original at 0x02238374 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "cmp r0, #2\n    beq _0223837C\n    cmp r0, #3\n    bne _02238380\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void ov80_02238384(void) {
    /* Original at 0x02238384 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #8\n    ldr r0, [r0, #4]\n    add r4, r1, #0\n    bl Save_PlayerData_GetProfile\n    mov r3, #0\n    add r1, r0, #0\n    str r3, [sp]\n    mov r0, #0xb\n    str r0, [sp, #4]\n    add r0, r4, #0\n    mov r2, #4\n    bl sub_0207217C\n    add sp, #8\n    pop {r4, pc}"
    );
    #endif
}

void ov80_022383A8(void) {
    /* Original at 0x022383A8 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r2, #0\n    add r5, r1, #0\n    add r1, r4, #0\n    bl ov80_02238384\n    add r0, r5, #0\n    add r1, r4, #0\n    bl Party_AddMon\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov80_022383C0(void) {
    /* Original at 0x022383C0 */
    /* Requires manual decompilation - 46 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r5, r0, #0\n    ldr r0, [r5, #0x74]\n    bl SaveArray_Party_Init\n    ldrb r0, [r5, #0x10]\n    mov r1, #1\n    bl BattleArcade_GetOpponentMonCount\n    str r0, [sp]\n    mov r0, #0xb\n    bl AllocMonZeroed\n    add r7, r0, #0\n    ldr r0, [sp]\n    mov r6, #0\n    cmp r0, #0\n    ble _02238424\n    mov r0, #0x33\n    lsl r0, r0, #4\n    add r4, r5, r0\n    add r0, r5, #0\n    bl ov80_02238370\n    add r2, r0, #0\n    add r0, r4, #0\n    add r1, r7, #0\n    bl ov80_0222A140\n    ldr r1, [r5, #0x74]\n    add r0, r5, #0\n    add r2, r7, #0\n    bl ov80_022383A8\n    ldr r0, [r5, #0x74]\n    add r1, r6, #0\n    bl Party_GetMonByIndex\n    mov r1, #0\n    str r1, [sp, #4]\n    mov r1, #6\n    add r2, sp, #4\n    bl SetMonData\n    ldr r0, [sp]\n    add r6, r6, #1\n    add r4, #0x38\n    cmp r6, r0\n    blt _022383EC\n    add r0, r7, #0\n    bl Heap_Free\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov80_02238430(void) {
    ov80_02238498(1, 3);
}

void ov80_02238444(void) {
    /* Original at 0x02238444 */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldrb r1, [r0, #0x10]\n    cmp r1, #0\n    bne _02238466\n    ldrb r1, [r0, #0x11]\n    lsl r1, r1, #1\n    add r1, r0, r1\n    add r1, #0x78\n    ldrh r2, [r1]\n    ldr r1, _02238494 ; =0x0000FEC9\n    add r1, r2, r1\n    lsl r1, r1, #0x10\n    lsr r1, r1, #0x10\n    cmp r1, #1\n    bhi _02238466\n    mov r0, #7\n    pop {r3, pc}\n    bl ov80_02238498\n    add r0, r0, #1\n    mov r1, #7\n    cmp r0, #4\n    bhi _0223848E\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0223847E: ; jump table\n    mov r1, #0\n    b _0223848E\n    mov r1, #1\n    add r0, r1, #0\n    pop {r3, pc}\n    nop\n    _02238494: .word 0x0000FEC9"
    );
    #endif
}

void ov80_02238498(void) {
    /* Original at 0x02238498 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldrb r0, [r5, #0x10]\n    ldrh r4, [r5, #0x1a]\n    bl BattleArcade_MultiplayerCheck\n    cmp r0, #1\n    bne _022384B4\n    ldr r0, _022384B8 ; =0x00000A76\n    ldrh r1, [r5, r0]\n    ldrh r0, [r5, #0x1a]\n    cmp r1, r0\n    bls _022384B4\n    add r4, r1, #0\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}\n    _022384B8: .word 0x00000A76"
    );
    #endif
}

void ov80_022384BC(void) {
    /* Original at 0x022384BC */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "cmp r0, #9\n    bhs _022384C4\n    mov r0, #0\n    bx lr\n    cmp r0, #0x12\n    bhs _022384CC\n    mov r0, #1\n    bx lr\n    cmp r0, #0x1b\n    bhs _022384D4\n    mov r0, #2\n    bx lr\n    mov r0, #3\n    bx lr"
    );
    #endif
}
