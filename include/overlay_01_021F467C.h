#ifndef POKEHEARTGOLD_OVERLAY_01_021F467C_H
#define POKEHEARTGOLD_OVERLAY_01_021F467C_H

#include <global.h>

// Data table at ov01_02206B94 (0x02206B94)
// Contains 44 bytes of initialization data
extern const u8 ov01_02206B94_data[44];

// ov01_021F467C - Assembly: asm/overlay_01_021F467C.s @ 0x021F467C
// Graphics initialization function
// Parameters: param1 - unknown, param2 - unknown
// Returns: void* - pointer to initialized structure
void *ov01_021F467C(void *param1, void *param2);

// ov01_021F46DC - Assembly: asm/overlay_01_021F467C.s @ 0x021F46DC
// Graphics cleanup function
// Parameters: structPtr - pointer to structure to clean up
// Returns: void
void ov01_021F46DC(void *structPtr);

#endif // POKEHEARTGOLD_OVERLAY_01_021F467C_H
