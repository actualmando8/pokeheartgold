#ifndef POKEHEARTGOLD_OVERLAY_118_H
#define POKEHEARTGOLD_OVERLAY_118_H

#include <global.h>

// Function declarations

// ov118_0225F020 - Assembly: asm/overlay_118.s
// Main task handler with 9-case jump table (Pokemon summary screen)
// Parameters: param1, param2
// Returns: void
void ov118_0225F020(void *param1, void *param2);

// Data tables
extern const u8 ov118_0225F270[20];
extern const u8 ov118_0225F28C[24];

#endif // POKEHEARTGOLD_OVERLAY_118_H