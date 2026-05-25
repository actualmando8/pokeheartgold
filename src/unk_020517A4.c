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



int BattleStartGetTransition(void) {
    GF_AssertFail();
    ov01_021F0D20(r4, 0x0000FFFF);
}




void BattleStartGetMusic(void) {
}




void BattleSetup_GetWildTransitionEffect(void) {
}




u8 sub_020517F8(void) {
}




int BattleSetup_GetWildBattleMusic(void) {
    BattleSetup_GetTransitionAndMusicParam();
    BattleStartGetMusic(r5);
    Save_VarsFlags_Get(*((u32*)(r5 + (7 << 6))));
    Save_VarsFlags_FlypointFlagAction(2, 5);
    MapHeader_GetRegionNo(*((u32*)(r5 + (0x56 << 2))));
    // add r4, #9
    // add r4, #0xa
    sub_020517F8(r6, 0x0000045C);
}




void NPCTrainerGetBattleIntroAndMusicParam(void) {
    // bne _02051882
    // ldrh r0, [r0, r1]
    // cmp r2, #0x20
    // blo _0205186C
    // nop
    // _02051890: .word _020FC3CA
}




int WildPokemonGetBattleIntroAndMusicParam(void) {
    GetFirstAliveMonInParty_CrashIfNone();
    GetMonData(5, 0);
}



