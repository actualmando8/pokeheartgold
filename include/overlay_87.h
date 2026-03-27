#ifndef POKEHEARTGOLD_OVERLAY_87_H
#define POKEHEARTGOLD_OVERLAY_87_H

#include <global.h>

// Unknown structure used by overlay 87 (Scratch-off Cards mini-game)
// Based on analysis at 0x021E5900
typedef struct UnkStruct_021E5900 {
    u32 field_0x0;          // Heap ID
    void *args;             // offset 0x4: OverlayManager_GetArgs()
    void *options;          // offset 0x8: Save_PlayerData_GetOptionsAddr()
    // ... more fields
    void *bgConfig;         // offset 0x110: BG configuration
    void *spriteSystem;     // offset 0x170: Sprite system
    void *msgData;          // offset 0x1d0: Message data
    // Card state fields
    u8 field_0x200;         // Number of cards revealed
    u8 field_0x201;         // Card state (0=hidden, 1=revealed, 2=matching)
    u8 field_0x202;         // First card index
    u8 field_0x203;         // Second card index
    u32 field_0x204;        // Prize value
    u32 field_0x208;        // Total prizes won
    u32 field_0x20c;        // Game state
} UnkStruct_021E5900;

// ScratchOffCards_Init - Assembly: asm/overlay_87.s @ 0x021E5900
// Initializes the Scratch-off Cards mini-game
// Parameters: structPtr - pointer to UnkStruct_021E5900
// Returns: int (1 on success)
int ScratchOffCards_Init(UnkStruct_021E5900 *structPtr);

// ScratchOffCards_Main - Assembly: asm/overlay_87.s @ 0x021E5A40
// Main loop function
// Parameters: task - task pointer
void ScratchOffCards_Main(void *task);

// ScratchOffCards_Exit - Assembly: asm/overlay_87.s @ 0x021E5AA4
// Cleanup and exit function
// Parameters: structPtr - pointer to UnkStruct_021E5900
// Returns: int (1 on success)
int ScratchOffCards_Exit(UnkStruct_021E5900 *structPtr);

// ov87_021E5AFC - Assembly: asm/overlay_87.s @ 0x021E5AFC
// BG initialization
void ov87_021E5AFC(UnkStruct_021E5900 *structPtr);

// ov87_021E5B48 - Assembly: asm/overlay_87.s @ 0x021E5B48
// Graphics setup helper
void ov87_021E5B48(void *param);

// ov87_021E5C38 - Assembly: asm/overlay_87.s @ 0x021E5C38
// Main display function
void ov87_021E5C38(void *param);

// ov87_021E5CEC - Assembly: asm/overlay_87.s @ 0x021E5CEC
// Input handling
void ov87_021E5CEC(void *param);

// ov87_021E5E00 - Assembly: asm/overlay_87.s @ 0x021E5E00
// Card reveal animation
void ov87_021E5E00(void *param);

// ov87_021E6080 - Assembly: asm/overlay_87.s @ 0x021E6080
// Prize check and award
void ov87_021E6080(void *param);

#endif // POKEHEARTGOLD_OVERLAY_87_H
