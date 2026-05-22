#ifndef POKEHEARTGOLD_OVERLAY_99_H
#define POKEHEARTGOLD_OVERLAY_99_H

#include "overlay_manager.h"
#include "player_data.h"
#include "pokedex.h"
#include "pokeathlon/pokeathlon_save.h"

// PokeathlonCourseRecord functions
void PokeathlonCourseRecord_Init(void *args);
void PokeathlonCourseRecord_Exit(void *data);
void PokeathlonCourseRecord_Main(void *data);

typedef struct PokeathlonEventRecordArgs {
    Pokeathlon_RecordsSolo *recordsSolo;
    Pokeathlon_RecordsLink *recordsLink;
    void *unk8;
    PlayerProfile *profile;
    BOOL unk10;
} PokeathlonEventRecordArgs;

typedef struct PokeathlonCourseRecordArgs {
    PokeathlonSave *pokeathlon;
    BOOL unk4;
} PokeathlonCourseRecordArgs;

typedef struct UnkStruct_0203EFA0 {
    PokeathlonSave *pokeathlon;
    PlayerProfile *profile;
} UnkStruct_0203EFA0;

#endif // POKEHEARTGOLD_OVERLAY_99_H
