#ifndef POKEHEARTGOLD_UNK_02067A60_H
#define POKEHEARTGOLD_UNK_02067A60_H

#include "field_types_def.h"
#include "heap.h"
#include "pokemon_types_def.h"
#include "save_arrays.h"

struct UnkStruct_02067A60 {
    /* 0x00 */ u32 unk_0;
    /* 0x04 */ u32 unk_4;
    /* 0x08 */ u32 unk_8;
    /* 0x0C */ SaveData *saveData;
    /* 0x10 */ u32 unk_10;
    /* 0x14 */ u32 unk_14;
    /* 0x18 */ u32 unk_18;
    /* 0x1C */ u32 unk_1C;
    /* 0x20 */ u32 *mapIdPtr;
};

struct UnkStruct_02067BF8 {
    /* 0x00 */ FieldSystem *fieldSystem;
    /* 0x04 */ Pokemon *pokemon;
    /* 0x08 */ u16 unk_8;
    /* 0x0A */ s16 unk_A;
    /* 0x0C */ s16 unk_C;
    /* 0x0E */ u16 unk_E;
    /* 0x10 */ Pokemon *pokemon2;
    /* 0x14 */ void *unk_14;
    /* 0x18 */ void *movementMan;
};

struct UnkStruct_02067A60 *sub_02067A60(enum HeapID heapID);
void sub_02067A78(struct UnkStruct_02067A60 *s);
void sub_02067A80(struct UnkStruct_02067A60 *s, void (*func)(struct UnkStruct_02067A60 *));
void sub_02067A88(struct UnkStruct_02067A60 *s);
void sub_02067AE4(struct UnkStruct_02067A60 *s);
void sub_02067B88(struct UnkStruct_02067A60 *s);
void sub_02067BA4(struct UnkStruct_02067A60 *s);
void sub_02067BC0(struct UnkStruct_02067A60 *s);
void FieldSystem_ClearFollowingTrainer(struct UnkStruct_02067A60 *s);
void sub_02067BE8(struct UnkStruct_02067A60 *s);
struct UnkStruct_02067BF8 *sub_02067BF8(enum HeapID heapID, FieldSystem *fieldSystem, Pokemon *pokemon, u16 a3, s16 a5, s16 a6);
BOOL sub_02067C30(TaskManager *taskManager);

#endif // POKEHEARTGOLD_UNK_02067A60_H
