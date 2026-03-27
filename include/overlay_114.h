#ifndef POKEHEARTGOLD_OVERLAY_114_H
#define POKEHEARTGOLD_OVERLAY_114_H

#include <global.h>

// Structure for overlay 114 (some kind of sprite/display overlay)
typedef struct Ov114Struct {
    u32 state;                  // 0x00
    void *field_04;            // 0x04
    void *field_08;            // 0x08
    void *field_0c;            // 0x0c
    void *field_10;            // 0x10
    void *field_14;            // 0x14
    void *field_18;            // 0x18
    void *field_1c;            // 0x1c
    void *field_20;            // 0x20
    u32 state2;                // 0x24
    void *field_28;            // 0x28
    void *field_2c;            // 0x2c - sprite array
} Ov114Struct;

// Function declarations

// ov114_0225F020 - Assembly: asm/overlay_114.s
// Main update function with 8-case jump table (cases 0-7)
// Parameters: structPtr, caseId
// Returns: void
void ov114_0225F020(Ov114Struct *structPtr, int caseId);

// ov114_0225F280 - Assembly: asm/overlay_114.s
// Secondary update function with 8-case jump table
// Parameters: structPtr, caseId
// Returns: void
void ov114_0225F280(Ov114Struct *structPtr, int caseId);

#endif // POKEHEARTGOLD_OVERLAY_114_H