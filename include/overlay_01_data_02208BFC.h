#ifndef POKEHEARTGOLD_OVERLAY_01_DATA_02208BFC_H
#define POKEHEARTGOLD_OVERLAY_01_DATA_02208BFC_H

#include <global.h>

// Data table at ov01_02208BFC (0x02208BFC)
// Contains 24 u32 values representing some kind of IDs
extern const u32 ov01_02208BFC[24];

// Function pointer table at ov01_02208C5C (0x02208C5C)
// Contains 24 entries, each with 3 u32 values:
// - u32 id
// - void *initFunc
// - void *mainFunc
// Entry 0x17 has NULL pointers (end marker)
typedef struct {
    u32 id;
    void *initFunc;
    void *mainFunc;
} ov01_02208C5C_Entry;

extern const ov01_02208C5C_Entry ov01_02208C5C[24];

#endif // POKEHEARTGOLD_OVERLAY_01_DATA_02208BFC_H
