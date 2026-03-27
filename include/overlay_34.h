#ifndef POKEHEARTGOLD_OVERLAY_34_H
#define POKEHEARTGOLD_OVERLAY_34_H

#include <global.h>

// Type definitions
typedef struct UnkStruct_0225D520 UnkStruct_0225D520;
typedef struct Ov34Struct Ov34Struct;

// ov34_0225D520 - Assembly: asm/overlay_34.s
// Initializes text display for friend trade/battle lobby
void ov34_0225D520(UnkStruct_0225D520 *structPtr);

// ov34_0225D558 - Assembly: asm/overlay_34.s  
// Main task entry point for friend lobby
void ov34_0225D558(UnkStruct_0225D520 *structPtr);

// ov34_0225D5A0 - Assembly: asm/overlay_34.s
// Main task handler with 6-case jump table
void ov34_0225D5A0(UnkStruct_0225D520 *structPtr, int caseId);

// ov34_0225D5F8 - Assembly: asm/overlay_34.s
// Initializes message format and graphics
void ov34_0225D5F8(UnkStruct_0225D520 *structPtr);

// ov34_0225D650 - Assembly: asm/overlay_34.s
// Creates windows for friend list display
void *ov34_0225D650(void *structPtr, int param1, int param2);

// ov34_0225D77C - Assembly: asm/overlay_34.s
// Cleanup and remove windows
void ov34_0225D77C(void *structPtr, int param);

// ov34_0225D7A8 - Assembly: asm/overlay_34.s
// Task creation and initialization
void ov34_0225D7A8(void *structPtr, int param);

// ov34_0225D87C - Assembly: asm/overlay_34.s
// Task exit and cleanup
void ov34_0225D87C(void *taskPtr);

// ov34_0225D900 - Assembly: asm/overlay_34.s
// Task deletion callback
void ov34_0225D900(void *taskPtr);

// ov34_0225D924 - Assembly: asm/overlay_34.s
// Additional initialization
void ov34_0225D924(void *taskPtr);

// ov34_0225DA50 - Assembly: asm/overlay_34.s
// Graphics loading for player list
void ov34_0225DA50(void *structPtr);

// ov34_0225DB20 - Assembly: asm/overlay_34.s
// Player list setup
void ov34_0225DB20(void *structPtr);

// ov34_0225DC00 - Assembly: asm/overlay_34.s
// Stub function - returns immediately
void ov34_0225DC00(void);

// ov34_0225DC0C - Assembly: asm/overlay_34.s
// Stub function - returns immediately  
void ov34_0225DC0C(void);

// ov34_0225DC18 - Assembly: asm/overlay_34.s
// Buffer player name
void ov34_0225DC18(void *structPtr, int param);

// ov34_0225DD04 - Assembly: asm/overlay_34.s
// Print player info to window
void ov34_0225DD04(void *structPtr);

// ov34_0225DDB8 - Assembly: asm/overlay_34.s
// Window clear
void ov34_0225DDB8(void *structPtr);

// ov34_0225DE04 - Assembly: asm/overlay_34.s
// Display player info
void ov34_0225DE04(void *structPtr);

// ov34_0225DE94 - Assembly: asm/overlay_34.s
// Display player details (name, ID, etc)
void ov34_0225DE94(void *structPtr);

// ov34_0225E020 - Assembly: asm/overlay_34.s
// Handle player selection
void ov34_0225E020(void *structPtr);

// ov34_0225E0E4 - Assembly: asm/overlay_34.s
// Handle player options
void ov34_0225E0E4(void *structPtr);

// ov34_0225E164 - Assembly: asm/overlay_34.s
// Check friend status
void ov34_0225E164(void *structPtr);

// ov34_0225E1C4 - Assembly: asm/overlay_34.s
// Handle friend battle request
void ov34_0225E1C4(void *structPtr, int param);

// ov34_0225E2BC - Assembly: asm/overlay_34.s
// Handle friend trade request
void ov34_0225E2BC(void *structPtr);

// ov34_0225E348 - Assembly: asm/overlay_34.s
// Check connection status
void ov34_0225E348(void *structPtr);

// ov34_0225E428 - Assembly: asm/overlay_34.s
// Handle connection state
void ov34_0225E428(void *structPtr);

// ov34_0225E4A8 - Assembly: asm/overlay_34.s
// Display connection status
void ov34_0225E4A8(void *structPtr);

// ov34_0225E4F8 - Assembly: asm/overlay_34.s
// Initialize display
void ov34_0225E4F8(void *structPtr);

// ov34_0225E560 - Assembly: asm/overlay_34.s
// Stub function
void ov34_0225E560(void);

// ov34_0225E56C - Assembly: asm/overlay_34.s
// Additional init
void ov34_0225E56C(void *structPtr);

// ov34_0225E58C - Assembly: asm/overlay_34.s
// Check system state
void ov34_0225E58C(void *structPtr);

// ov34_0225E5D4 - Assembly: asm/overlay_34.s
// Stub - returns
void ov34_0225E5D4(void);

// ov34_0225E5DC - Assembly: asm/overlay_34.s
// Stub - returns  
void ov34_0225E5DC(void);

// ov34_0225E5E4 - Assembly: asm/overlay_34.s
// Stub - returns
void ov34_0225E5E4(void);

// ov34_0225E5EC - Assembly: asm/overlay_34.s
// Wait for connection
void ov34_0225E5EC(void *structPtr);

// ov34_0225E630 - Assembly: asm/overlay_34.s
// Sprite setup
void ov34_0225E630(void *structPtr);

#endif // POKEHEARTGOLD_OVERLAY_34_H