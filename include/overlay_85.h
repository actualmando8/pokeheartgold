#ifndef POKEHEARTGOLD_OVERLAY_85_H
#define POKEHEARTGOLD_OVERLAY_85_H

#include <global.h>

// Unknown structure used by overlay 85 (Battle / Game feature)
// Based on analysis at 0x021E5900
typedef struct UnkStruct_021E5900 {
    u32 field_0x0;          // Heap ID
    void *args;             // offset 0x4: OverlayManager_GetArgs()
    void *options;          // offset 0x8: Save_PlayerData_GetOptionsAddr()
    // ... more fields based on game functions
    void *bgConfig;         // offset 0x110: BG configuration
    void *spriteSystem;     // offset 0x170: Sprite system
    void *msgData;          // offset 0x1d0: Message data
    void *camera;           // offset 0x200: 3D camera
    // Game-specific fields
    u32 field_0x240;        // Game state
    u32 field_0x244;        // Sub-state
    u32 field_0x248;        // Player Pokémon
    u32 field_0x24c;        // Enemy Pokémon
    u32 field_0x250;        // Move selection
    u32 field_0x254;        // Turn counter
} UnkStruct_021E5900;

// Battle_Init - Assembly: asm/overlay_85.s @ 0x021E5900
// Initializes the battle/game overlay
// Parameters: structPtr - pointer to UnkStruct_021E5900
// Returns: int (1 on success)
int ov85_021E5900(UnkStruct_021E5900 *structPtr);

// Battle_Main - Assembly: asm/overlay_85.s @ 0x021E5A34
// Main loop function
// Parameters: task - task pointer
void ov85_021E5A34(void *task);

// Battle_Exit - Assembly: asm/overlay_85.s @ 0x021E5AAC
// Cleanup and exit function
// Parameters: structPtr - pointer to UnkStruct_021E5900
// Returns: int (1 on success)
int ov85_021E5AAC(UnkStruct_021E5900 *structPtr);

// ov85_021E85C4 - Assembly: asm/overlay_85.s @ 0x021E85C4
// Menu initialization
void ov85_021E85C4(void *param);

// ov85_021E85CC - Assembly: asm/overlay_85.s @ 0x021E85CC
// Menu main function
void ov85_021E85CC(void *param);

// ov85_021E8680 - Assembly: asm/overlay_85.s @ 0x021E8680
// Move selection handler
void ov85_021E8680(void *param);

// ov85_021E86AC - Assembly: asm/overlay_85.s @ 0x021E86AC
// Target selection handler
void ov85_021E86AC(void *param);

// ov85_021E8740 - Assembly: asm/overlay_85.s @ 0x021E8740
// Item menu handler
void ov85_021E8740(void *param);

// ov85_021E8748 - Assembly: asm/overlay_85.s @ 0x021E8748
// Pokémon menu handler
void ov85_021E8748(void *param);

// ov85_021E88AC - Assembly: asm/overlay_85.s @ 0x021E88AC
// Run option handler
void ov85_021E88AC(void *param);

// ov85_021E8A08 - Assembly: asm/overlay_85.s @ 0x021E8A08
// Battle animation handler
void ov85_021E8A08(void *param);

// ov85_021E8B08 - Assembly: asm/overlay_85.s @ 0x021E8B08
// Post-battle screen
void ov85_021E8B08(void *param);

// ov85_021E9C84 - Assembly: asm/overlay_85.s @ 0x021E9C84
// Battle start sequence
void ov85_021E9C84(void *param);

// ov85_021E9D9C - Assembly: asm/overlay_85.s @ 0x021E9D9C
// End battle sequence
void ov85_021E9D9C(void *param);

#endif // POKEHEARTGOLD_OVERLAY_85_H