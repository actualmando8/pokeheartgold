#ifndef POKEHEARTGOLD_OVERLAY_119_H
#define POKEHEARTGOLD_OVERLAY_119_H

#include <global.h>

// Pokemon Compare (3-screen) structure
typedef struct UnkStruct_0225F020 {
    u32 field_0x0;                    // 0x00 - state counter
    u32 field_0x4;                    // 0x04 - substate
    void *field_0x8;                  // 0x08 - unknown
    void *field_0xc;                  // 0x0C - allocated work area
    void *field_0x10;                // 0x10 - field system
    void *field_0x14;                // 0x14 - callback return
    void *field_0x18;                // 0x18 - data
    void *field_0x1c;                // 0x1C - graphics
    void *field_0x20;                // 0x20 - save data
    u32 field_0x24;                  // 0x24
    u32 field_0x28;                  // 0x28
    // Work area at offset 0x1E * 4 = 0x78
} UnkStruct_0225F020;

// ov119_0225F020 - Assembly: asm/overlay_119.s
// Pokemon compare screen - 3 Pokemon comparison view (8 cases: 0-7)
// Case 0: Initialize screen
// Case 1: Setup message callback
// Case 2: Check data pointer
// Case 3: Setup sprites
// Case 4: Update animation
// Case 5: Play animation
// Case 6: Update camera
// Case 7: Cleanup
void ov119_0225F020(void *structPtr, int caseId);

// ov119_0225F37C - Assembly: asm/overlay_119.s
// Pokemon compare screen - 2 Pokemon comparison view (8 cases: 0-7)
void ov119_0225F37C(void *structPtr, int caseId);

// ov119_0225F670 - Assembly: asm/overlay_119.s
// Pokemon compare screen - rotation view (8 cases: 0-7)
void ov119_0225F670(void *structPtr, int caseId);

// ov119_0225FA2C - Assembly: asm/overlay_119.s
// Pokemon compare screen - stats view (8 cases: 0-7)
void ov119_0225FA2C(void *structPtr, int caseId);

#endif // POKEHEARTGOLD_OVERLAY_119_H