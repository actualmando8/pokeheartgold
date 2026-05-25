#ifndef POKEHEARTGOLD_UNK_020517A4_H
#define POKEHEARTGOLD_UNK_020517A4_H

#include "battle/battle_setup.h"
#include "party.h"

int BattleSetup_GetTransitionAndMusicParam(BattleSetup *setup);
int BattleStartGetTransition(int paramIndex, int fallbackTransition);
int BattleStartGetMusic(int paramIndex);
int BattleSetup_GetWildTransitionEffect(BattleSetup *setup);
int BattleSetup_GetWildBattleMusic(BattleSetup *setup);
int NPCTrainerGetBattleIntroAndMusicParam(u8 trainerClass);
int WildPokemonGetBattleIntroAndMusicParam(Party *party, u32 mapId);

#endif
