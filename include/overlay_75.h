#ifndef POKEHEARTGOLD_OVERLAY_75_H
#define POKEHEARTGOLD_OVERLAY_75_H

#include <global.h>

// Unknown structure used by overlay 75 (Wii Message Settings / Title Screen)
// Based on analysis at 0x02246960
typedef struct UnkStruct_02246960 {
    u32 field_0x0;          // Heap ID (0x73)
    u32 field_0x4;          // Args pointer
    u32 field_0x8;          // Options address
    u8 field_0xc;
    u8 field_0xd;
    u8 field_0xe;
    u8 field_0xf;
    void *field_0x10;      // Heap handle (NNS_FndExpHeap*)
    void *field_0x14;      // Allocated memory
    u32 field_0x18;
    u32 field_0x1c;
    u32 field_0x20;
    u32 field_0x24;
    u32 field_0x28;
    u32 field_0x2c;
    u32 field_0x30;
    u32 field_0x34;
    u32 field_0x38;
    u32 field_0x3c;
    u32 field_0x40;
    u32 field_0x44;
    u32 field_0x48;
    u32 field_0x4c;
    u32 field_0x50;
    u32 field_0x54;
    u32 field_0x58;
    u32 field_0x5c;
    u32 field_0x60;
    u32 field_0x64;
    u32 field_0x68;
    u32 field_0x6c;
    u32 field_0x70;
    u32 field_0x74;
    u32 field_0x78;
    u32 field_0x7c;        // State (0 = not initialized, 1 = initialized)
    void *field_0x80;      // Sub-overlay handle
    void *field_0x84;
    u32 field_0x88;        // Sub-state
    // +0x110: String*
    // +0x190: String*
} UnkStruct_02246960;

// WiiMessageSettings_Init - Assembly: asm/overlay_75.s @ 0x02246960
// Initializes Wii Message Settings / Title Screen overlay
// Parameters: structPtr - pointer to UnkStruct_02246960
// Returns: int (1 on success)
int ov75_02246960(UnkStruct_02246960 *structPtr);

// WiiMessageSettings_Main - Assembly: asm/overlay_75.s @ 0x022469D8
// Main loop with 5-case jump table (cases 0-4)
// Parameters: task - task pointer
// Returns: int
int ov75_022469D8(void *task);

// WiiMessageSettings_Exit - Assembly: asm/overlay_75.s @ 0x02246B00
// Cleanup and exit function
// Parameters: structPtr - pointer to UnkStruct_02246960
// Returns: int (1 on success)
int ov75_02246B00(UnkStruct_02246960 *structPtr);

// ov75_02246B48 - Assembly: asm/overlay_75.s @ 0x02246B48
// Initialize sub-overlays helper
void ov75_02246B48(UnkStruct_02246960 *structPtr);

// ov75_02246B98 - Assembly: asm/overlay_75.s @ 0x02246B98
// Cleanup sub-overlays helper
void ov75_02246B98(UnkStruct_02246960 *structPtr);

// ov75_02246BCC - Assembly: asm/overlay_75.s @ 0x02246BCC
// Set sub-state and handle
void ov75_02246BCC(UnkStruct_02246960 *structPtr, void *handle, u32 value);

// ov75_02246BD8 - Assembly: asm/overlay_75.s @ 0x02246BD8
// Set sub-state to 6
void ov75_02246BD8(UnkStruct_02246960 *structPtr);

// ov75_02246BE0 - Assembly: asm/overlay_75.s @ 0x02246BE0
// Set field_0x7a byte
void ov75_02246BE0(UnkStruct_02246960 *structPtr, u8 value);

// ov75_02246BE8 - Assembly: asm/overlay_75.s @ 0x02246BE8
// Get field_0x7a byte
u8 ov75_02246BE8(UnkStruct_02246960 *structPtr);

// ov75_02246BF0 - Assembly: asm/overlay_75.s @ 0x02246BF0
// Memory allocation callback from ov00_021EC294
void *ov75_02246BF0(void *heap, void *size, void *param);

// ov75_02246C18 - Assembly: asm/overlay_75.s @ 0x02246C18
// Memory free callback from ov00_021EC294
void ov75_02246C18(void *heap, void *ptr);

// Public application entry point
extern void *gApplication_TitleScreen;

#endif // POKEHEARTGOLD_OVERLAY_75_H