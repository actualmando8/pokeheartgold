#ifndef POKEHEARTGOLD_OVERLAY_37_H
#define POKEHEARTGOLD_OVERLAY_37_H

#include <global.h>

// Type definitions
#ifndef GUARD_UNKSTRUCT_021E5900
typedef struct UnkStruct_021E5900 UnkStruct_021E5900;
#endif

// ov37_021E5900 - Assembly: asm/overlay_37.s
// Initialize global trade system
void ov37_021E5900(UnkStruct_021E5900 *structPtr);

// ov37_021E5A84 - Assembly: asm/overlay_37.s
// Main task setup
void ov37_021E5A84(UnkStruct_021E5900 *structPtr);

// ov37_021E5B94 - Assembly: asm/overlay_37.s
// Initialize graphics
void ov37_021E5B94(UnkStruct_021E5900 *structPtr);

// ov37_021E5CC8 - Assembly: asm/overlay_37.s
// Stub function
void ov37_021E5CC8(void);

// ov37_021E5CF0 - Assembly: asm/overlay_37.s
// Stub function
void ov37_021E5CF0(void);

// ov37_021E5D10 - Assembly: asm/overlay_37.s
// Main task with 5-case handler
void ov37_021E5D10(UnkStruct_021E5900 *structPtr, int caseId);

// ov37_021E5E30 - Assembly: asm/overlay_37.s
// Create system task
void ov37_021E5E30(void *structPtr, int param);

// ov37_021E5F20 - Assembly: asm/overlay_37.s
// Task deletion callback
void ov37_021E5F20(void *taskPtr);

// ov37_021E5F5C - Assembly: asm/overlay_37.s
// Exit setup
void ov37_021E5F5C(void *taskPtr);

// ov37_021E5F98 - Assembly: asm/overlay_37.s
// Exit and cleanup
void ov37_021E5F98(void *taskPtr);

// ov37_021E6090 - Assembly: asm/overlay_37.s
// Additional init
void ov37_021E6090(void *structPtr);

// ov37_021E60C0 - Assembly: asm/overlay_37.s
// Load graphics
void ov37_021E60C0(void *structPtr);

// ov37_021E6244 - Assembly: asm/overlay_37.s
// Display setup
void ov37_021E6244(void *structPtr);

// ov37_021E6418 - Assembly: asm/overlay_37.s
// Setup windows
void ov37_021E6418(void *structPtr);

// ov37_021E6540 - Assembly: asm/overlay_37.s
// Remove windows
void ov37_021E6540(void *structPtr);

// ov37_021E657C - Assembly: asm/overlay_37.s
// Cleanup windows
void ov37_021E657C(void *structPtr);

// ov37_021E65EC - Assembly: asm/overlay_37.s
// Buffer trade data
void ov37_021E65EC(void *structPtr, int param);

// ov37_021E6818 - Assembly: asm/overlay_37.s
// Display trade info
void ov37_021E6818(void *structPtr);

// ov37_021E6848 - Assembly: asm/overlay_37.s
// Stub
void ov37_021E6848(void);

// ov37_021E6860 - Assembly: asm/overlay_37.s
// Stub
void ov37_021E6860(void);

// ov37_021E68AC - Assembly: asm/overlay_37.s
// Print to window
void ov37_021E68AC(void *structPtr);

// ov37_021E68D0 - Assembly: asm/overlay_37.s
// Display trade info
void ov37_021E68D0(void *structPtr);

// ov37_021E6928 - Assembly: asm/overlay_37.s
// Display details
void ov37_021E6928(void *structPtr);

// ov37_0225E700 - Assembly: asm/overlay_37.s
// Print details
void ov37_0225E700(void *structPtr);

// Additional functions (67 total in file)
// ... (remaining functions need implementation)

#endif // POKEHEARTGOLD_OVERLAY_37_H
