#ifndef POKEHEARTGOLD_OVERLAY_31_H
#define POKEHEARTGOLD_OVERLAY_31_H

#include <global.h>

// Type definitions
typedef struct UnkStruct_0225D520 UnkStruct_0225D520;

// ov31_0225D520 - Assembly: asm/overlay_31.s
// Initialize friend code lobby display
void ov31_0225D520(UnkStruct_0225D520 *structPtr);

// ov31_0225D60C - Assembly: asm/overlay_31.s
// Main task setup
void ov31_0225D60C(UnkStruct_0225D520 *structPtr);

// ov31_0225D654 - Assembly: asm/overlay_31.s
// Additional initialization
void ov31_0225D654(UnkStruct_0225D520 *structPtr);

// ov31_0225D684 - Assembly: asm/overlay_31.s
// Initialize message system
void ov31_0225D684(UnkStruct_0225D520 *structPtr);

// ov31_0225D710 - Assembly: asm/overlay_31.s
// Load graphics data
void ov31_0225D710(UnkStruct_0225D520 *structPtr);

// ov31_0225D758 - Assembly: asm/overlay_31.s
// Stub function
void ov31_0225D758(void);

// ov31_0225D75C - Assembly: asm/overlay_31.s
// Stub function
void ov31_0225D75C(void);

// ov31_0225D7A0 - Assembly: asm/overlay_31.s
// Main task with 6-case handler
void ov31_0225D7A0(UnkStruct_0225D520 *structPtr, int caseId);

// ov31_0225D83C - Assembly: asm/overlay_31.s
// Create system task
void ov31_0225D83C(void *structPtr, int param);

// ov31_0225D9D4 - Assembly: asm/overlay_31.s
// Task deletion callback
void ov31_0225D9D4(void *taskPtr);

// ov31_0225DAA4 - Assembly: asm/overlay_31.s
// Exit task
void ov31_0225DAA4(void *taskPtr);

// ov31_0225DAC4 - Assembly: asm/overlay_31.s
// Exit and cleanup
void ov31_0225DAC4(void *taskPtr);

// ov31_0225DB38 - Assembly: asm/overlay_31.s
// Additional setup
void ov31_0225DB38(void *structPtr);

// ov31_0225DBA0 - Assembly: asm/overlay_31.s
// Load friend code graphics
void ov31_0225DBA0(void *structPtr);

// ov31_0225DBD4 - Assembly: asm/overlay_31.s
// Display setup
void ov31_0225DBD4(void *structPtr);

// ov31_0225DCA8 - Assembly: asm/overlay_31.s
// Setup windows
void ov31_0225DCA8(void *structPtr);

// ov31_0225DCF4 - Assembly: asm/overlay_31.s
// Remove windows
void ov31_0225DCF4(void *structPtr);

// ov31_0225DD14 - Assembly: asm/overlay_31.s
// Buffer player data
void ov31_0225DD14(void *structPtr, int param);

// ov31_0225DE00 - Assembly: asm/overlay_31.s
// Display player info
void ov31_0225DE00(void *structPtr);

// ov31_0225DE24 - Assembly: asm/overlay_31.s
// Print to window
void ov31_0225DE24(void *structPtr);

// ov31_0225DE84 - Assembly: asm/overlay_31.s
// Display friend code
void ov31_0225DE84(void *structPtr);

// ov31_0225DF98 - Assembly: asm/overlay_31.s
// Handle input
void ov31_0225DF98(void *structPtr);

// ov31_0225E060 - Assembly: asm/overlay_31.s
// Navigation handler
void ov31_0225E060(void *structPtr);

// ov31_0225E0E4 - Assembly: asm/overlay_31.s
// Menu display
void ov31_0225E0E4(void *structPtr);

// ov31_0225E12C - Assembly: asm/overlay_31.s
// Menu handler
void ov31_0225E12C(void *structPtr);

// ov31_0225E184 - Assembly: asm/overlay_31.s
// Confirm selection
void ov31_0225E184(void *structPtr);

// ov31_0225E20C - Assembly: asm/overlay_31.s
// Handle battle request
void ov31_0225E20C(void *structPtr);

// ov31_0225E2D4 - Assembly: asm/overlay_31.s
// Battle request handler
void ov31_0225E2D4(void *structPtr);

// ov31_0225E474 - Assembly: asm/overlay_31.s
// Handle trade request
void ov31_0225E474(void *structPtr);

// ov31_0225E4BC - Assembly: asm/overlay_31.s
// Trade handler
void ov31_0225E4BC(void *structPtr);

// ov31_0225E4EC - Assembly: asm/overlay_31.s
// Connection check
void ov31_0225E4EC(void *structPtr);

// ov31_0225E51C - Assembly: asm/overlay_31.s
// Check connection
void ov31_0225E51C(void *structPtr);

// ov31_0225E54C - Assembly: asm/overlay_31.s
// Connection handler
void ov31_0225E54C(void *structPtr);

// ov31_0225E5FC - Assembly: asm/overlay_31.s
// Display status
void ov31_0225E5FC(void *structPtr);

// ov31_0225E700 - Assembly: asm/overlay_31.s
// Status handler
void ov31_0225E700(void *structPtr);

// ov31_0225E774 - Assembly: asm/overlay_31.s
// Setup sprites
void ov31_0225E774(void *structPtr);

// ov31_0225E7D4 - Assembly: asm/overlay_31.s
// Sprite handler
void ov31_0225E7D4(void *structPtr);

// ov31_0225E948 - Assembly: asm/overlay_31.s
// Stub function
void ov31_0225E948(void);

// ov31_0225E95C - Assembly: asm/overlay_31.s
// Stub function
void ov31_0225E95C(void);

// ov31_0225E9CC - Assembly: asm/overlay_31.s
// Get data
void ov31_0225E9CC(void *structPtr);

// ov31_0225EA08 - Assembly: asm/overlay_31.s
// Return data
void *ov31_0225EA08(void *structPtr);

// ov31_0225EA9C - Assembly: asm/overlay_31.s
// Process data
void ov31_0225EA9C(void *structPtr);

// ov31_0225EB30 - Assembly: asm/overlay_31.s
// Handle data
void ov31_0225EB30(void *structPtr);

// ov31_0225EBC4 - Assembly: asm/overlay_31.s
// Process handler
void ov31_0225EBC4(void *structPtr);

// ov31_0225EC58 - Assembly: asm/overlay_31.s
// Update data
void ov31_0225EC58(void *structPtr);

// ov31_0225EDA0 - Assembly: asm/overlay_31.s
// Finalize
void ov31_0225EDA0(void *structPtr);

#endif // POKEHEARTGOLD_OVERLAY_31_H