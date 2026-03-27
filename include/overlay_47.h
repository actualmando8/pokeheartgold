#ifndef POKEHEARTGOLD_OVERLAY_47_H
#define POKEHEARTGOLD_OVERLAY_47_H

#include <global.h>

// Function declarations

// ov47_02258800 - Assembly: asm/overlay_47.s
// Player selection screen initialization
// Parameters: param1, param2
// Returns: void
void ov47_02258800(void *param1, void *param2);

// ov47_02258898 - Assembly: asm/overlay_47.s
// Main task handler with 5-case jump table (player selection)
// Parameters: taskPtr, state
// Returns: void
void ov47_02258898(void *taskPtr, u16 state);

// ov47_022589A8 - Assembly: asm/overlay_47.s
// Player selection cleanup
// Parameters: taskPtr
// Returns: void
void ov47_022589A8(void *taskPtr);

// ov47_02258A14 - Assembly: asm/overlay_47.s
// VBlank callback - calls sprite/BG rendering
// Returns: void
void ov47_02258A14(void);

// ov47_02258A1C - Assembly: asm/overlay_47.s
// Graphics initialization for player selection
// Parameters: overlayData, bgConfig
// Returns: void
void ov47_02258A1C(void *overlayData, void *bgConfig);

// ov47_02258A60 - Assembly: asm/overlay_47.s
// Cleanup graphics resources
// Parameters: overlayData
// Returns: void
void ov47_02258A60(void *overlayData);

// ov47_02258A80 - Assembly: asm/overlay_47.s
// Sprite rendering callback
// Parameters: param1
// Returns: void
void ov47_02258A80(void *param1);

// ov47_02258A8C - Assembly: asm/overlay_47.s
// VBlank main function - BG update, OAM, VRAM transfer
// Parameters: param1
// Returns: void
void ov47_02258A8C(void *param1);

// ov47_02258AA0 - Assembly: asm/overlay_47.s
// BG initialization for player selection
// Parameters: overlayData, bgConfig
// Returns: void
void ov47_02258AA0(void *overlayData, void *bgConfig);

// ov47_02258B8C - Assembly: asm/overlay_47.s
// Free BG buffers
// Parameters: overlayData
// Returns: void
void ov47_02258B8C(void *overlayData);

// ov47_02258BB4 - Assembly: asm/overlay_47.s
// Initialize OAM and sprite managers
// Parameters: overlayData, bgConfig
// Returns: void
void ov47_02258BB4(void *overlayData, void *bgConfig);

// ov47_02258C44 - Assembly: asm/overlay_47.s
// Cleanup OAM and sprite resources
// Parameters: overlayData
// Returns: void
void ov47_02258C44(void *overlayData);

// ov47_02258C70 - Assembly: asm/overlay_47.s
// Initialize message data for player names
// Parameters: overlayData, msgId, bgConfig
// Returns: void
void ov47_02258C70(void *overlayData, int msgId, void *bgConfig);

// ov47_02258CC0 - Assembly: asm/overlay_47.s
// Destroy message data
// Parameters: overlayData
// Returns: void
void ov47_02258CC0(void *overlayData);

// ov47_02258CEC - Assembly: asm/overlay_47.s
// Get message string for player
// Parameters: overlayData, playerIndex, msgId
// Returns: void*
void *ov47_02258CEC(void *overlayData, int playerIndex, int msgId);

// ov47_02258D18 - Assembly: asm/overlay_47.s
// Get player name string (variant 1)
// Parameters: overlayData, msgId
// Returns: void*
void *ov47_02258D18(void *overlayData, int msgId);

// ov47_02258D44 - Assembly: asm/overlay_47.s
// Get player name string (variant 2)
// Parameters: overlayData, msgId, param3
// Returns: void*
void *ov47_02258D44(void *overlayData, int msgId, void *param3);

// ov47_02258D78 - Assembly: asm/overlay_47.s
// Buffer player name into string
// Parameters: overlayData, playerIndex, msgId
// Returns: void
void ov47_02258D78(void *overlayData, int playerIndex, int msgId);

// ov47_02258DA8 - Assembly: asm/overlay_47.s
// Load player sprite resources
// Parameters: param1, param2, param3
// Returns: void
void ov47_02258DA8(void *param1, void *param2, void *param3);

// ov47_02258DB4 - Assembly: asm/overlay_47.s
// Player selection handler
// Parameters: param1, param2, param3
// Returns: void
void ov47_02258DB4(void *param1, void *param2, void *param3);

// ov47_02258DC8 - Assembly: asm/overlay_47.s
// Cleanup player resources
// Parameters: param1
// Returns: void
void ov47_02258DC8(void *param1);

// ov47_02258DD0 - Assembly: asm/overlay_47.s
// Create player sprite
// Parameters: spriteStruct, bgConfig, playerIndex
// Returns: void
void ov47_02258DD0(void *spriteStruct, void *bgConfig, int playerIndex);

// ov47_02258F48 - Assembly: asm/overlay_47.s
// Player selection UI handler with 11-case jump table
// Parameters: taskPtr, param2, param3
// Returns: void
void ov47_02258F48(void *taskPtr, void *param2, void *param3);

// ov47_0225912C - Assembly: asm/overlay_47.s
// Cleanup player sprite and resources
// Parameters: param1, bgConfig
// Returns: void
void ov47_0225912C(void *param1, void *bgConfig);

// ov47_0225916C - Assembly: asm/overlay_47.s
// Clear player window
// Parameters: windowPtr, msgId
// Returns: void
void ov47_0225916C(void *windowPtr, int msgId);

// ov47_022591F8 - Assembly: asm/overlay_47.s
// Update player sprite position
// Parameters: taskPtr
// Returns: void
void ov47_022591F8(void *taskPtr);

// ov47_0225921C - Assembly: asm/overlay_47.s
// Update player sprite
// Parameters: taskPtr
// Returns: void
void ov47_0225921C(void *taskPtr);

// ov47_02259228 - Assembly: asm/overlay_47.s
// Setup player display
// Parameters: overlayData, playerIndex
// Returns: void
void ov47_02259228(void *overlayData, int playerIndex);

// ov47_02259278 - Assembly: asm/overlay_47.s
// Enable player sprite visibility
// Parameters: overlayData
// Returns: void
void ov47_02259278(void *overlayData);

// ov47_022592B4 - Assembly: asm/overlay_47.s
// Display player name in window
// Parameters: param1, string
// Returns: void
void ov47_022592B4(void *param1, void *string);

// ov47_02259318 - Assembly: asm/overlay_47.s
// Display player name centered
// Parameters: param1, string
// Returns: void
void ov47_02259318(void *param1, void *string);

// ov47_02259384 - Assembly: asm/overlay_47.s
// Position player window
// Parameters: param1
// Returns: void
void ov47_02259384(void *param1);

// ov47_022593A0 - Assembly: asm/overlay_47.s
// Clear player selection and exit
// Parameters: overlayData
// Returns: void
void ov47_022593A0(void *overlayData);

// ov47_022593B4 - Assembly: asm/overlay_47.s
// Check player selection complete
// Parameters: param1
// Returns: int
int ov47_022593B4(void *param1);

// ov47_022593CC - Assembly: asm/overlay_47.s
// Check for player exit
// Parameters: param1
// Returns: int
int ov47_022593CC(void *param1);

// ov47_02259404 - Assembly: asm/overlay_47.s
// Handle player action
// Parameters: param1, param2
// Returns: void
void ov47_02259404(void *param1, void *param2);

// ov47_02259430 - Assembly: asm/overlay_47.s
// Check player button state
// Parameters: param1
// Returns: int
int ov47_02259430(void *param1);

// Data tables
extern const u32 ov47_02259E48[4];
extern const u8 ov47_02259E58[16];
extern const u32 ov47_02259E68[4];
extern const u8 ov47_02259E9C[10];
extern const u8 ov47_02259EC0[16];
extern const u32 ov47_02259F18[4];
extern const u32 ov47_02259FA0[4];
extern const u32 ov47_02259FA8[4];
extern const u32 ov47_02259FB0[4];

#endif // POKEHEARTGOLD_OVERLAY_47_H