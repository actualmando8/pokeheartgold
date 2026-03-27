#ifndef POKEHEARTGOLD_OVERLAY_98_H
#define POKEHEARTGOLD_OVERLAY_98_H

#include <global.h>

// Sprite system manager structure
typedef struct SpriteSystemManager {
    void *heapPtr;                 // 0x00 - heap pointer
    void *spriteSystem;            // 0x04 - sprite system
    void *spriteManager;           // 0x08 - sprite manager
    void *paletteData;             // 0x0C - palette data
    void *narc;                   // 0x10 - NARC file
    u8 field_0x14;                // 0x14
} SpriteSystemManager;

// ov98_0221E5C0 - Assembly: asm/overlay_98.s
// Get sprite system from manager
void *ov98_0221E5C0(void *ptr);

// ov98_0221E5D0 - Assembly: asm/overlay_98.s
// Get sprite manager from manager
void *ov98_0221E5D0(void *ptr);

// ov98_0221E5E0 - Assembly: asm/overlay_98.s
// Allocate and initialize sprite system manager
void *ov98_0221E5E0(void *heapPtr, int param1, int param2);

// ov98_0221E684 - Assembly: asm/overlay_98.s
// Free sprite system manager
void ov98_0221E684(void *manager, void *spriteArray, int spriteCount);

// ov98_0221E6CC - Assembly: asm/overlay_98.s
// Draw sprites
void ov98_0221E6CC(void *manager);

// ov98_0221E6E0 - Assembly: asm/overlay_98.s
// Create new sprite
void *ov98_0221E6E0(void *manager, void *params);

// ov98_0221E6F0 - Assembly: asm/overlay_98.s
// Create multiple sprites
void ov98_0221E6F0(void *manager, int spriteCount, void *paramsArray, void *spriteArray);

// ov98_0221E784 - Assembly: asm/overlay_98.s
// Load sprite resources
void ov98_0221E784(void *spriteSystem, void *resData, int param1);

// ov98_0221E7E8 - Assembly: asm/overlay_98.s
// Setup Pokemon sprite
void ov98_0221E7E8(void *sprite, void *monData, int param1, void *heap);

// ov98_0221E8A8 - Assembly: asm/overlay_98.s
// Load icon resources
void ov98_0221E8A8(void *manager, void *resData, int iconCount, int param1);

// ov98_0221E970 - Assembly: asm/overlay_98.s
// Setup Pokemon icon sprite
void ov98_0221E970(void *sprite, void *monData, int param1, int isAnimated);

// ov98_0221E9FC - Assembly: asm/overlay_98.s
// Load sprite image to VRAM
void ov98_0221E9FC(void *sprite, void *imageData, int size);

// ov98_0221EA4C - Assembly: asm/overlay_98.s
// Setup sprite parameters
void ov98_0221EA4C(void *sprite, void *monData, int param1);

#endif // POKEHEARTGOLD_OVERLAY_98_H