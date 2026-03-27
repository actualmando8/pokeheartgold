#ifndef POKEHEARTGOLD_OVERLAY_116_H
#define POKEHEARTGOLD_OVERLAY_116_H

#include <global.h>

// Function declarations

// ov116_0225F020 - Assembly: asm/overlay_116.s
// Setup camera for Pokemon 3D view
// Parameters: param1, param2
// Returns: void
void ov116_0225F020(void *param1, void *param2);

// ov116_0225F054 - Assembly: asm/overlay_116.s
// Main task handler with 8-case jump table
// Parameters: param1, param2
// Returns: void
void ov116_0225F054(void *param1, void *param2);

// ov116_0225F1BC - Assembly: asm/overlay_116.s
// Main task handler 2 with 10-case jump table
// Parameters: param1, param2
// Returns: void
void ov116_0225F1BC(void *param1, void *param2);

// ov116_0225F364 - Assembly: asm/overlay_116.s
// Task wrapper 1
// Parameters: param1, param2
// Returns: void
void ov116_0225F364(void *param1, void *param2);

// ov116_0225F374 - Assembly: asm/overlay_116.s
// Task wrapper 2
// Parameters: param1, param2
// Returns: void
void ov116_0225F374(void *param1, void *param2);

// Data tables
extern const u8 ov116_0225F384[20];
extern const u8 ov116_0225F398[20];
extern const u8 ov116_0225F3AC[16];
extern const u8 ov116_0225F3B6[64];

#endif // POKEHEARTGOLD_OVERLAY_116_H