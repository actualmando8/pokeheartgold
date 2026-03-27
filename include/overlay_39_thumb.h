#ifndef POKEHEARTGOLD_OVERLAY_39_THUMB_H
#define POKEHEARTGOLD_OVERLAY_39_THUMB_H

#include <global.h>

// Type definitions
typedef struct UnkStruct_02227060 UnkStruct_02227060;

// ov39_02227060 - Assembly: asm/overlay_39_thumb.s
// Initialize union room system
void ov39_02227060(UnkStruct_02227060 *structPtr);

// ov39_02227080 - Assembly: asm/overlay_39_thumb.s
// Stub function
void ov39_02227080(void);

// ov39_02227088 - Assembly: asm/overlay_39_thumb.s
// Main task entry
void ov39_02227088(UnkStruct_02227060 *structPtr);

// ov39_02227188 - Assembly: asm/overlay_39_thumb.s
// Task handler setup
void ov39_02227188(UnkStruct_02227060 *structPtr);

// ov39_022271A4 - Assembly: asm/overlay_39_thumb.s
// Additional init
void ov39_022271A4(void *structPtr);

// ov39_022271C0 - Assembly: asm/overlay_39_thumb.s
// Stub
void ov39_022271C0(void);

// ov39_022271CC - Assembly: asm/overlay_39_thumb.s
// Main task with 4-case handler
void ov39_022271CC(void *structPtr, int caseId);

// ov39_02227208 - Assembly: asm/overlay_39_thumb.s
// Create system task
void ov39_02227208(void *structPtr, int param);

// ov39_022272EC - Assembly: asm/overlay_39_thumb.s
// Task deletion callback
void ov39_022272EC(void *taskPtr);

// ov39_02227334 - Assembly: asm/overlay_39_thumb.s
// Exit setup
void ov39_02227334(void *taskPtr);

// ov39_02227348 - Assembly: asm/overlay_39_thumb.s
// Cleanup
void ov39_02227348(void *taskPtr);

// ov39_02227364 - Assembly: asm/overlay_39_thumb.s
// Additional initialization
void ov39_02227364(void *structPtr);

// ov39_0222738C - Assembly: asm/overlay_39_thumb.s
// Load graphics
void ov39_0222738C(void *structPtr);

// ov39_022273B0 - Assembly: asm/overlay_39_thumb.s
// Display setup
void ov39_022273B0(void *structPtr);

// ov39_022273F8 - Assembly: asm/overlay_39_thumb.s
// Setup windows
void ov39_022273F8(void *structPtr);

// ov39_02227420 - Assembly: asm/overlay_39_thumb.s
// Window handler
void ov39_02227420(void *structPtr);

// ov39_0222748C - Assembly: asm/overlay_39_thumb.s
// Buffer data
void ov39_0222748C(void *structPtr, int param);

// ov39_022274B4 - Assembly: asm/overlay_39_thumb.s
// Display info
void ov39_022274B4(void *structPtr);

// ov39_022274D4 - Assembly: asm/overlay_39_thumb.s
// Print to window
void ov39_022274D4(void *structPtr);

// ov39_02227534 - Assembly: asm/overlay_39_thumb.s
// Display details
void ov39_02227534(void *structPtr);

// ov39_02227590 - Assembly: asm/overlay_39_thumb.s
// Handle input
void ov39_02227590(void *structPtr);

// ov39_022275E8 - Assembly: asm/overlay_39_thumb.s
// Input handler
void ov39_022275E8(void *structPtr);

// ov39_02227648 - Assembly: asm/overlay_39_thumb.s
// Navigation
void ov39_02227648(void *structPtr);

// ov39_022276A4 - Assembly: asm/overlay_39_thumb.s
// Menu display
void ov39_022276A4(void *structPtr);

// ov39_022276E0 - Assembly: asm/overlay_39_thumb.s
// Menu handler
void ov39_022276E0(void *structPtr);

// ov39_02227720 - Assembly: asm/overlay_39_thumb.s
// Selection handler
void ov39_02227720(void *structPtr);

// ov39_0222774C - Assembly: asm/overlay_39_thumb.s
// Confirm selection
void ov39_0222774C(void *structPtr);

// ov39_02227778 - Assembly: asm/overlay_39_thumb.s
// Process selection
void ov39_02227778(void *structPtr);

// Additional 70+ functions in file...

#endif // POKEHEARTGOLD_OVERLAY_39_THUMB_H