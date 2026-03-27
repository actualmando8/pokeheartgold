#ifndef POKEHEARTGOLD_OVERLAY_38_THUMB_H
#define POKEHEARTGOLD_OVERLAY_38_THUMB_H

#include <global.h>

// Structure for overlay 38 - related to save/data transfer or encryption
typedef struct Ov38Struct {
    u32 state;                  // 0x00
    u32 field_04;              // 0x04
    u32 field_08;              // 0x08
    u32 field_0c;              // 0x0c
    u32 field_10;              // 0x10
    u32 field_14;              // 0x14
    u32 field_18;              // 0x18
    u32 field_1c;              // 0x1c
    u32 field_20;              // 0x20
    u32 field_24;              // 0x24
    u32 field_28;              // 0x28
    u32 field_2c;              // 0x2c
    u32 field_30;              // 0x30
} Ov38Struct;

// Function declarations

// ov38_0221BA00 - Assembly: asm/overlay_38_thumb.s
// Updates global state value
// Parameters: value - new value to store
// Returns: void
void ov38_0221BA00(u32 value);

// ov38_0221BA10 - Assembly: asm/overlay_38_thumb.s
// Calculates a modified hash/ID
// Parameters: none (uses global state)
// Returns: modified value
u32 ov38_0221BA10(void);

// ov38_0221BA38 - Assembly: asm/overlay_38_thumb.s
// Complex data processing/encryption function
// Parameters: structPtr, length, data, param3
// Returns: result code
int ov38_0221BA38(Ov38Struct *structPtr, u32 length, void *data, u32 param3);

// ov38_0221BB44 - Assembly: asm/overlay_38_thumb.s
// Division helper
// Parameters: value
// Returns: processed value
u32 ov38_0221BB44(u32 value);

// ov38_0221BB68 - Assembly: asm/overlay_38_thumb.s
// State setter (8-case jump table)
// Parameters: state - state value (0-7)
// Returns: void
void ov38_0221BB68(int state);

// ov38_0221BBD0 - Assembly: asm/overlay_38_thumb.s
// Main handler for data operations
// Parameters: param0, param1, param2
// Returns: void
void ov38_0221BBD0(int param0, int param1, int param2);

#endif // POKEHEARTGOLD_OVERLAY_38_THUMB_H