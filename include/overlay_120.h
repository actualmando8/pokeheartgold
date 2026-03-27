#ifndef POKEHEARTGOLD_OVERLAY_120_H
#define POKEHEARTGOLD_OVERLAY_120_H

#include <global.h>

// Card game structure - size 0x34 bytes
typedef struct CardGameStruct_0225F020 {
    u32 field_0x0;            // 0x00
    u32 field_0x4;            // 0x04
    u32 field_0x8;            // 0x08
    u32 field_0xc;            // 0x0C
    u32 field_0x10;           // 0x10
    u32 field_0x14;           // 0x14
    u16 field_0x18;           // 0x18
    u16 field_0x1a;           // 0x1A
    u16 field_0x1c;           // 0x1C
    u16 field_0x1e;           // 0x1E
    u16 field_0x20;           // 0x20
    u16 field_0x22;           // 0x22
    u8 field_0x24;            // 0x24
    u8 field_0x25;            // 0x25
    u8 field_0x26;            // 0x26
    u8 field_0x27;            // 0x27
    u8 field_0x28;            // 0x28
    u8 field_0x29;            // 0x29
    u8 field_0x2a;            // 0x2A
    u8 field_0x2b;            // 0x2B
    u8 field_0x2c;            // 0x2C
    u8 field_0x2d;            // 0x2D
    u8 field_0x2e;            // 0x2E
    u8 field_0x2f;            // 0x2F
    u8 field_0x30;            // 0x30 - initialized to 1
    u8 field_0x31;            // 0x31
    u8 field_0x32;            // 0x32
    u8 field_0x33;            // 0x33
} CardGameStruct_0225F020;

// Card game table structure - size 0x114 bytes
typedef struct CardGameTable_0225F0FC {
    u32 field_0x0;            // 0x00
    u8 field_0x4;            // 0x04 - game type
    u8 field_0x5;            // 0x05
    u8 field_0x6;            // 0x06
    u8 field_0x7;            // 0x07 - initialized to 1
    u8 field_0x108[0x8];     // 0x108 - padding to 0x110
    u32 field_0x110;         // 0x110
} CardGameTable_0225F0FC;

// Card game manager - size 0xCC bytes (holds 49 CardGameStruct_0225F020)
typedef struct CardGameManager {
    CardGameStruct_0225F020 cards[49];  // 49 cards
} CardGameManager;

// Main handler structure
typedef struct UnkStruct_0225F714 {
    u32 field_0x0;            // 0x00 - state counter
    u32 field_0x4;            // 0x04 - substate
    void *field_0x8;          // 0x08 - unknown
    void *field_0xc;          // 0x0C - allocated work area
    void *field_0x10;         // 0x10 - field system
    void *field_0x14;         // 0x14 - callback return
    void *field_0x18;         // 0x18 - data
    void *field_0x1c;         // 0x1C - graphics
    void *field_0x20;         // 0x20 - save data
    u32 field_0x24;           // 0x24
} UnkStruct_0225F714;

// ov120_0225F020 - Assembly: asm/overlay_120.s
// Allocate card structure (0x34 bytes)
void *ov120_0225F020(void);

// ov120_0225F038 - Assembly: asm/overlay_120.s
// Free card structure
void ov120_0225F038(void *ptr);

// ov120_0225F040 - Assembly: asm/overlay_120.s
// Process card data
void ov120_0225F040(void *ptr, u16 param1, u16 param2, u16 param3, u32 param4);

// ov120_0225F08C - Assembly: asm/overlay_120.s
// Check card collision/interaction
// Returns: 0 if no collision, non-zero if collision
int ov120_0225F08C(void *ptr);

// ov120_0225F0FC - Assembly: asm/overlay_120.s
// Allocate card table (0x114 bytes)
void *ov120_0225F0FC(void);

// ov120_0225F118 - Assembly: asm/overlay_120.s
// Free card table
void ov120_0225F118(void *ptr);

// ov120_0225F120 - Assembly: asm/overlay_120.s
// Initialize card table with game data
void ov120_0225F120(void *table, u32 gameData, u8 param1, u8 param2);

// ov120_0225F14C - Assembly: asm/overlay_120.s
// Process/update card game
// Returns: 1 if done, 0 if not done
int ov120_0225F14C(void *table);

// ov120_0225F1E8 - Assembly: asm/overlay_120.s
// Fisher-Yates shuffle algorithm
void ov120_0225F1E8(void *array, int count);

// ov120_0225F240 - Assembly: asm/overlay_120.s
// Helper function for shuffle
int ov120_0225F240(void *array);

// ov120_0225F268 - Assembly: asm/overlay_120.s
// Allocate card game manager (0xCC bytes, holds 49 cards)
void *ov120_0225F268(void);

// ov120_0225F294 - Assembly: asm/overlay_120.s
// Free card game manager
void ov120_0225F294(void *manager);

// ov120_0225F2B8 - Assembly: asm/overlay_120.s
// Setup card game parameters
void ov120_0225F2B8(void *ptr, u8 param1, u8 param2, u8 param3, u32 param4);

// ov120_0225F318 - Assembly: asm/overlay_120.s
// Main game logic
int ov120_0225F318(void *ptr);

// ov120_0225F4DC - Assembly: asm/overlay_120.s
// Secondary game logic
int ov120_0225F4DC(void *ptr);

// ov120_0225F6AC - Assembly: asm/overlay_120.s
// Set card position data
void ov120_0225F6AC(void *ptr, u16 x, u16 y, u16 param3);

// ov120_0225F6BC - Assembly: asm/overlay_120.s
// Apply sine/cosine rotation to card
void ov120_0225F6BC(void *ptr);

// ov120_0225F6FC - Assembly: asm/overlay_120.s
// Initialize callback structure
void ov120_0225F6FC(void *ptr, void (*callback)(void));

// ov120_0225F704 - Assembly: asm/overlay_120.s
// Call callback function
void ov120_0225F704(void *ptr, void (*callback)(void));

// ov120_0225F714 - Assembly: asm/overlay_120.s
// Main handler (6 cases: 0-5)
// Case 0: Initialize
// Case 1: Setup message
// Case 2: Check data
// Case 3: Process game
// Case 4: Update
// Case 5: Cleanup
void ov120_0225F714(void *structPtr, int caseId);

#endif // POKEHEARTGOLD_OVERLAY_120_H