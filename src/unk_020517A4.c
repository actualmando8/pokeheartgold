/* Decompiled from asm/unk_020517A4.s */
#include "global.h"

int BattleSetup_GetTransitionAndMusicParam(void) {
    // tst r0, r4
    // add r2, #0x5d ; ->trainers[1].trainerClass
    // ldrb r0, [r2]
    NPCTrainerGetBattleIntroAndMusicParam(1, r0);
    // tst r1, r4
    // tst r0, r4
    // tst r1, r4
    // tst r1, r4
    // ldr r1, [r2, r1]
    WildPokemonGetBattleIntroAndMusicParam(*((u32*)(r2 + 8)), (0x56 << 2));
    // tst r1, r4
}



void BattleStartGetTransition(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // cmp r5, #0x2d
    // blo _020517B2
    // bl GF_AssertFail
    // ldr r0, _020517C8 ; =_020FC40A
    // lsl r1, r5, #2
    // ldrh r0, [r0, r1]
    // ldr r1, _020517CC ; =0x0000FFFF
    // cmp r0, r1
    // bne _020517C4
    // add r0, r4, #0
    // bl ov01_021F0D20
    // pop {r3, r4, r5, pc}
    // nop
    // _020517C8: .word _020FC40A
    // _020517CC: .word 0x0000FFFF
    // TODO: decompile
}



void BattleStartGetMusic(void) {
}



void BattleSetup_GetWildTransitionEffect(void) {
}



u8 sub_020517F8(void) {
}



void BattleSetup_GetWildBattleMusic(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // bl BattleSetup_GetTransitionAndMusicParam
    // add r1, r5, #0
    // add r6, r0, #0
    // bl BattleStartGetMusic
    // add r4, r0, #0
    // mov r0, #7
    // lsl r0, r0, #6
    // ldr r0, [r5, r0]
    // bl Save_VarsFlags_Get
    // mov r1, #2
    // mov r2, #5
    // bl Save_VarsFlags_FlypointFlagAction
    // cmp r0, #1
    // bne _0205185C
    // mov r0, #0x56
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // bl MapHeader_GetRegionNo
    // cmp r0, #0
    // beq _0205185C
    // ldr r1, _02051860 ; =0x0000045C
    // cmp r4, r1
    // bne _0205183E
    // add r4, r1, #0
    // add r4, #9
    // b _0205185C
    // add r0, r1, #1
    // cmp r4, r0
    // bne _0205184A
    // add r4, r1, #0
    // add r4, #0xa
    // b _0205185C
    // add r0, r1, #2
    // cmp r4, r0
    // bne _0205185C
    // add r0, r6, #0
    // bl sub_020517F8
    // cmp r0, #0
    // bne _0205185C
    // ldr r4, _02051864 ; =0x00000467
    // add r0, r4, #0
    // pop {r4, r5, r6, pc}
    // _02051860: .word 0x0000045C
    // _02051864: .word 0x00000467
    // TODO: decompile
}



void NPCTrainerGetBattleIntroAndMusicParam(void) {
    // ldr r3, _02051890 ; =_020FC3CA
    // mov r2, #0
    // ldrh r1, [r3]
    // lsl r1, r1, #0x16
    // lsr r1, r1, #0x16
    // cmp r0, r1
    // bne _02051882
    // ldr r0, _02051890 ; =_020FC3CA
    // lsl r1, r2, #1
    // ldrh r0, [r0, r1]
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x1a
    // bx lr
    // add r2, r2, #1
    // add r3, r3, #2
    // cmp r2, #0x20
    // blo _0205186C
    // mov r0, #0x29
    // bx lr
    // nop
    // _02051890: .word _020FC3CA
    // TODO: decompile
}



void WildPokemonGetBattleIntroAndMusicParam(void) {
    // push {r4, lr}
    // add r4, r1, #0
    // bl GetFirstAliveMonInParty_CrashIfNone
    // mov r1, #5
    // mov r2, #0
    // bl GetMonData
    // cmp r4, #0x6d
    // bne _020518AC
    // mov r0, #0x2a
    // pop {r4, pc}
    // ldr r3, _020518D4 ; =_020FC3B4
    // mov r2, #0
    // ldrh r1, [r3]
    // lsl r1, r1, #0x16
    // lsr r1, r1, #0x16
    // cmp r0, r1
    // bne _020518C6
    // ldr r0, _020518D4 ; =_020FC3B4
    // lsl r1, r2, #1
    // ldrh r0, [r0, r1]
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x1a
    // pop {r4, pc}
    // add r2, r2, #1
    // add r3, r3, #2
    // cmp r2, #0xb
    // blo _020518B0
    // mov r0, #0x2a
    // pop {r4, pc}
    // nop
    // _020518D4: .word _020FC3B4
    // TODO: decompile
}


