/* Decompiled from asm/unk_020517A4.s */
#include "global.h"

void BattleSetup_GetTransitionAndMusicParam(void) {
    /* Original at 0x02051738 */
    /* Requires manual decompilation - 51 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r2, r0, #0\n    ldr r4, [r2]\n    mov r0, #1\n    tst r0, r4\n    beq _02051788\n    add r2, #0x5d ; ->trainers[1].trainerClass\n    ldrb r0, [r2]\n    bl NPCTrainerGetBattleIntroAndMusicParam\n    mov r1, #0x80\n    tst r1, r4\n    beq _02051764\n    cmp r0, #39\n    beq _020517A0\n    mov r0, #2\n    tst r0, r4\n    beq _02051760\n    mov r0, #37\n    pop {r4, pc}\n    mov r0, #35\n    pop {r4, pc}\n    cmp r0, #29\n    blo _0205176C\n    cmp r0, #34\n    bls _020517A0\n    cmp r0, #43\n    beq _020517A0\n    cmp r0, #44\n    beq _020517A0\n    mov r1, #2\n    tst r1, r4\n    beq _0205177E\n    mov r0, #37\n    pop {r4, pc}\n    mov r1, #4\n    tst r1, r4\n    beq _020517A0\n    mov r0, #36\n    pop {r4, pc}\n    mov r1, #0x56\n    lsl r1, r1, #2\n    ldr r0, [r2, #8] ; ->parties[1]\n    ldr r1, [r2, r1]\n    bl WildPokemonGetBattleIntroAndMusicParam\n    cmp r0, #42\n    blo _020517A0\n    mov r1, #2\n    tst r1, r4\n    beq _020517A0\n    mov r0, #38\n    pop {r4, pc}"
    );
    #endif
}

void BattleStartGetTransition(void) {
    /* Original at 0x020517A4 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    cmp r5, #0x2d\n    blo _020517B2\n    bl GF_AssertFail\n    ldr r0, _020517C8 ; =_020FC40A\n    lsl r1, r5, #2\n    ldrh r0, [r0, r1]\n    ldr r1, _020517CC ; =0x0000FFFF\n    cmp r0, r1\n    bne _020517C4\n    add r0, r4, #0\n    bl ov01_021F0D20\n    pop {r3, r4, r5, pc}\n    nop\n    _020517C8: .word _020FC40A\n    _020517CC: .word 0x0000FFFF"
    );
    #endif
}

void BattleStartGetMusic(void) {
    GF_AssertFail();
}

void BattleSetup_GetWildTransitionEffect(void) {
    BattleSetup_GetTransitionAndMusicParam();
    BattleStartGetTransition(r4);
}

u8 sub_020517F8(void) {
    return 1;
}

void BattleSetup_GetWildBattleMusic(void) {
    /* Original at 0x020517FC */
    /* Requires manual decompilation - 46 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    bl BattleSetup_GetTransitionAndMusicParam\n    add r1, r5, #0\n    add r6, r0, #0\n    bl BattleStartGetMusic\n    add r4, r0, #0\n    mov r0, #7\n    lsl r0, r0, #6\n    ldr r0, [r5, r0]\n    bl Save_VarsFlags_Get\n    mov r1, #2\n    mov r2, #5\n    bl Save_VarsFlags_FlypointFlagAction\n    cmp r0, #1\n    bne _0205185C\n    mov r0, #0x56\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl MapHeader_GetRegionNo\n    cmp r0, #0\n    beq _0205185C\n    ldr r1, _02051860 ; =0x0000045C\n    cmp r4, r1\n    bne _0205183E\n    add r4, r1, #0\n    add r4, #9\n    b _0205185C\n    add r0, r1, #1\n    cmp r4, r0\n    bne _0205184A\n    add r4, r1, #0\n    add r4, #0xa\n    b _0205185C\n    add r0, r1, #2\n    cmp r4, r0\n    bne _0205185C\n    add r0, r6, #0\n    bl sub_020517F8\n    cmp r0, #0\n    bne _0205185C\n    ldr r4, _02051864 ; =0x00000467\n    add r0, r4, #0\n    pop {r4, r5, r6, pc}\n    _02051860: .word 0x0000045C\n    _02051864: .word 0x00000467"
    );
    #endif
}

void NPCTrainerGetBattleIntroAndMusicParam(void) {
    /* Original at 0x02051868 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _02051890 ; =_020FC3CA\n    mov r2, #0\n    ldrh r1, [r3]\n    lsl r1, r1, #0x16\n    lsr r1, r1, #0x16\n    cmp r0, r1\n    bne _02051882\n    ldr r0, _02051890 ; =_020FC3CA\n    lsl r1, r2, #1\n    ldrh r0, [r0, r1]\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x1a\n    bx lr\n    add r2, r2, #1\n    add r3, r3, #2\n    cmp r2, #0x20\n    blo _0205186C\n    mov r0, #0x29\n    bx lr\n    nop\n    _02051890: .word _020FC3CA"
    );
    #endif
}

void WildPokemonGetBattleIntroAndMusicParam(void) {
    /* Original at 0x02051894 */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    bl GetFirstAliveMonInParty_CrashIfNone\n    mov r1, #5\n    mov r2, #0\n    bl GetMonData\n    cmp r4, #0x6d\n    bne _020518AC\n    mov r0, #0x2a\n    pop {r4, pc}\n    ldr r3, _020518D4 ; =_020FC3B4\n    mov r2, #0\n    ldrh r1, [r3]\n    lsl r1, r1, #0x16\n    lsr r1, r1, #0x16\n    cmp r0, r1\n    bne _020518C6\n    ldr r0, _020518D4 ; =_020FC3B4\n    lsl r1, r2, #1\n    ldrh r0, [r0, r1]\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x1a\n    pop {r4, pc}\n    add r2, r2, #1\n    add r3, r3, #2\n    cmp r2, #0xb\n    blo _020518B0\n    mov r0, #0x2a\n    pop {r4, pc}\n    nop\n    _020518D4: .word _020FC3B4"
    );
    #endif
}
