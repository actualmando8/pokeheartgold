#ifndef POKEHEARTGOLD_OVERLAY_59_H
#define POKEHEARTGOLD_OVERLAY_59_H

#include "global.h"

// Overlay 59 - Mystery Gift functionality
// Assembly: asm/overlay_59.s
// Linked as: asm/overlay_59.o in main.lsf

// ov59_02237D40 - Main mystery gift handler
// Parameters: manager, state pointer
// Returns: int
int ov59_02237D40(void *manager, void *state);

// ov59_02238624 - Initialization helper
void ov59_02238624(void);

// ov59_02237E94 - Initialize structure
void ov59_02237E94(void *structPtr);

// ov59_02237F3C - Check condition
int ov59_02237F3C(void *structPtr);

// Additional functions would be discovered through disassembly

#endif // POKEHEARTGOLD_OVERLAY_59_H