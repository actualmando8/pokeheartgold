#ifndef POKEHEARTGOLD_UNK_02068FC8_H
#define POKEHEARTGOLD_UNK_02068FC8_H

#include "field_system_def.h"
#include "task.h"

void sub_02068FC8(FieldSystem *fieldSystem, void *profile, SaveData *saveData, u8 someFlag);
void *sub_020691A8(void);
void *sub_020691C4(void);
void sub_020691E0(void *ptr);
u32 sub_020691E8(FieldSystem *fieldSystem);
void sub_020692A0(u8 language, u8 version, u8 *buffer, u8 field5, u32 field2);
void sub_020692C4(u32 score, u8 *buffer, u32 trainerId, u16 *name, u32 money, u32 dexOwned, u32 dexEnabled, u32 gender);
void sub_02069308(u8 *buffer, u32 *igtAddr, u32 *igtTime, u32 *clearTime, u32 gameClear);
void sub_020693AC(u32 score, u32 stat1, u32 stat2, u32 money, u8 *buffer);
void sub_0206940C(void *profile, FieldSystem *fieldSystem, u8 *buffer);
void sub_02069464(TaskManager *taskManager, void *env);
BOOL sub_02069498(TaskManager *taskManager, void *unused);

#endif // POKEHEARTGOLD_UNK_02068FC8_H
