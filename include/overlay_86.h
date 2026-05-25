#ifndef POKEHEARTGOLD_OVERLAY_86_H
#define POKEHEARTGOLD_OVERLAY_86_H

#include <global.h>

// Unknown structure used by overlay 86 (Frontier-related)
// Based on analysis at 0x021E5900
#ifndef UNKSTRUCT_021E5900_DEFINED
typedef struct UnkStruct_021E5900 {
    u32 field_0x0;          // Heap ID
    void *args;             // offset 0x4: OverlayManager_GetArgs()
    void *options;          // offset 0x8: Save_PlayerData_GetOptionsAddr()
    // ... more fields based on Frontier data access
    u32 field_0x100;        // Frontier data pointer
    u32 field_0x104;
    u32 field_0x108;
    // BG config at offset 0x110
    // Sprite system at offset 0x170
    // Message data at offset 0x1d0
} UnkStruct_021E5900;
#define UNKSTRUCT_021E5900_DEFINED
#endif

// FrontierApp_Init - Assembly: asm/overlay_86.s @ 0x021E5900
// Initializes the Frontier overlay
// Parameters: structPtr - pointer to UnkStruct_021E5900
// Returns: int (1 on success)
int ov86_021E5900(UnkStruct_021E5900 *structPtr);

// FrontierApp_Main - Assembly: asm/overlay_86.s @ 0x021E5A40
// Main loop function
// Parameters: task - task pointer
void ov86_021E5A40(void *task);

// FrontierApp_Exit - Assembly: asm/overlay_86.s @ 0x021E5AA4
// Cleanup and exit function
// Parameters: structPtr - pointer to UnkStruct_021E5900
// Returns: int (1 on success)
int ov86_021E5AA4(UnkStruct_021E5900 *structPtr);

// ov86_021E5B38 - Assembly: asm/overlay_86.s @ 0x021E5B38
// BG initialization
void ov86_021E5B38(UnkStruct_021E5900 *structPtr);

// ov86_021E5BA0 - Assembly: asm/overlay_86.s @ 0x021E5BA0
// Graphics setup helper
void ov86_021E5BA0(void *param);

// ov86_021E5C94 - Assembly: asm/overlay_86.s @ 0x021E5C94
// Main display function
void ov86_021E5C94(void *param);

// ov86_021E5E0C - Assembly: asm/overlay_86.s @ 0x021E5E0C
// Input handling
void ov86_021E5E0C(void *param);

// ov86_021E6064 - Assembly: asm/overlay_86.s @ 0x021E6064
// Case handler
void ov86_021E6064(void *param);

// ov86_021E6114 - Assembly: asm/overlay_86.s @ 0x021E6114
// Another handler
void ov86_021E6114(void *param);

// ov86_021E62F4 - Assembly: asm/overlay_86.s @ 0x021E62F4
// Data loading
void ov86_021E62F4(void *param);

#endif // POKEHEARTGOLD_OVERLAY_86_H
