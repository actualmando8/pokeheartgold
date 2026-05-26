#ifndef POKEHEARTGOLD_OVERLAY_105_H
#define POKEHEARTGOLD_OVERLAY_105_H

#include <global.h>

// Pokemon 3D View structure (similar to overlay_104)
#ifndef GUARD_UNKSTRUCT_021E5900
#define GUARD_UNKSTRUCT_021E5900
struct UnkStruct_021E5900 {
    void *camera;                 // 0x00 - camera pointer
    u8 field_0x4[0x98-0x4];       // 0x04 to 0x97 - data area
    u8 pokemonIndex;              // 0x9C
    u8 formIndex;                // 0x9D
    u8 field_0x9E;               // 0x9E
    u8 state1;                   // 0x9F
    u8 state2;                   // 0xA0
    u8 field_0xA1;               // 0xA1
    u8 field_0xA2;               // 0xA2
    u8 field_0xA3;               // 0xA3
    void *field_0xA4;            // 0xA4
    // More fields at 0x80+
    void *narcData;              // 0x58 - NARC data
    void *modelData;             // 0x5C - model pointer
    void *field_0x60;            // 0x60
    void *field_0x64;            // 0x64
    void *field_0x68;            // 0x68
    void *field_0x6C;            // 0x6C
    void *field_0x70;            // 0x70
    void *field_0x74;            // 0x74
    void *field_0x78;            // 0x78
    void *field_0x7C;            // 0x7C
    // Animation objects array at 0x80+
    void *animObjs[5];           // 0x80 - animation objects
};
#endif // GUARD_UNKSTRUCT_021E5900

// ov105_021E5900 - Assembly: asm/overlay_105.s
// Initialize Pokemon 3D view overlay
// Parameters: structPtr - overlay manager
// Returns: 1 on success
int ov105_021E5900(void *structPtr);

// ov105_021E59DC - Assembly: asm/overlay_105.s
// Main task handler (3 cases)
// Case 0: Check and load Pokemon
// Case 1: Wait for palette fade
// Default: Continue rendering
void ov105_021E59DC(void *taskPtr);

// ov105_021E5B14 - Assembly: asm/overlay_105.s
// Cleanup and exit
// Parameters: structPtr - overlay manager
// Returns: 1
int ov105_021E5B14(void *structPtr);

// ov105_021E5B68 - Assembly: asm/overlay_105.s
// Initialize graphics system for 3D
void ov105_021E5B68(void);

// ov105_021E5BCC - Assembly: asm/overlay_105.s
// Setup camera for Pokemon view
void ov105_021E5BCC(void *structPtr);

// ov105_021E5C84 - Assembly: asm/overlay_105.s
// Setup GFX banks
void ov105_021E5C84(void);

// ov105_021E5CA4 - Assembly: asm/overlay_105.s
// Load Pokemon model and animations
void ov105_021E5CA4(void *structPtr);

#endif // POKEHEARTGOLD_OVERLAY_105_H
