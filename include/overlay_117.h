#ifndef POKEHEARTGOLD_OVERLAY_117_H
#define POKEHEARTGOLD_OVERLAY_117_H

#include <global.h>

// Structure for Pokemon comparison/view screen
// Size: 0x3D * 4 = 0xF4 bytes (0x3D dwords)
typedef struct UnkStruct_0225F020 {
    u32 field_0x0;                    // 0x00 - state counter
    u32 field_0x4;                    // 0x04 - sub-state counter
    void *field_0x8;                  // 0x08 - pointer
    void *field_0xc;                 // 0x0C - allocated structure pointer
    void *field_0x10;                // 0x10 - field system
    void *field_0x14;                // 0x14 - callback return
    void *field_0x18;                // 0x18 - message data pointer
    void *field_0x1c;                // 0x1C - graphics pointer
    void *field_0x20;                // 0x20 - save data pointer
    u32 field_0x24;                  // 0x24 - trainer name id
    u32 field_0x28;                  // 0x28 - unused
    u32 field_0x2c;                  // 0x2C - unused
    u32 field_0x30;                  // 0x30 - unused
    u32 field_0x34;                  // 0x34 - unused
    u32 field_0x38;                  // 0x38 - unused
    u32 field_0x3c;                  // 0x3C - unused
    // Sprite array starts at offset 0x3D * 4 = 0xF4
    // Total size appears to be 0x3D * 4 = 0xF4 bytes
} UnkStruct_0225F020;

// ov117_0225F020 - Assembly: asm/overlay_117.s
// Main handler for Pokemon comparison view (8 cases: 0-7)
// Case 0: Initialize and allocate structure
// Case 1: Toggle BG layer
// Case 2: Set message data
// Case 3: Handle sprite animation frame
// Case 4: Update sprite animation
// Case 5: Start palette fade
// Case 6: Check palette fade completion
// Case 7: Cleanup and exit
// Parameters: structPtr - UnkStruct_0225F020, caseId - operation (0-7)
void ov117_0225F020(void *structPtr, int caseId);

// ov117_0225F420 - Assembly: asm/overlay_117.s
// Load screen data from NARC file
// Parameters: savePtr, bgId, narcId
void ov117_0225F420(void *savePtr, int bgId, int narcId);

// ov117_0225F470 - Assembly: asm/overlay_117.s
// Format trainer name into message buffer
// Parameters: trainerId, msgData
// Returns: formatted string
void *ov117_0225F470(int trainerId, void *msgData);

// ov117_0225F524 - Assembly: asm/overlay_117.s
// Secondary handler for Pokemon compare (13 cases: 0-12)
// Case 0: Initialize display
// Case 1: Toggle BG 1
// Case 2: Update text position
// Case 3: Enable BG 3
// Case 4: Update BG 3 scroll
// Case 5: BG scroll update complete
// Case 6: Load BG 2 data
// Case 7: Continue animation
// Case 8: Update blend alpha
// Case 9: Check brightness transition
// Case 10: Decrease brightness
// Case 11: Handle BG 3 position
// Case 12: Cleanup and exit
// Parameters: structPtr - UnkStruct_0225F020, caseId - operation (0-12)
void ov117_0225F524(void *structPtr, int caseId);

#endif // POKEHEARTGOLD_OVERLAY_117_H