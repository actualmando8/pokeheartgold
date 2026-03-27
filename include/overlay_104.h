#ifndef POKEHEARTGOLD_OVERLAY_104_H
#define POKEHEARTGOLD_OVERLAY_104_H

#include <global.h>

// Structure for overlay 104 (3D Pokemon view/render)
typedef struct Ov104Struct {
    void *camera;               // 0x00 - camera pointer
    u8 field_04;               // 0x04
    u8 field_05;               // 0x05
    u8 field_06;               // 0x06
    u8 field_07;               // 0x07
    u32 field_08;              // 0x08
    u32 field_0c;              // 0x0c
    u32 field_10;              // 0x10
    u32 field_14;              // 0x14
    u32 field_18;              // 0x18
    u32 field_1c;              // 0x1c
    u32 field_20;              // 0x20
    u32 field_24;              // 0x24
    u32 field_28;              // 0x28
    u32 field_2c;              // 0x2c
    u32 field_30;              // 0x30
    u32 field_34;              // 0x34
    u32 field_38;              // 0x38
    u32 field_3c;              // 0x3c
    u32 field_40;              // 0x40
    u32 field_44;              // 0x44
    u8 monsterIndex;           // 0x228 - monster index
    u8 field_229;             // 0x229
    u8 field_22a;             // 0x22a
    u8 field_22b;             // 0x22b
    u8 field_22c;             // 0x22c - view mode
    u8 field_22d;             // 0x22d
    u8 field_22e;             // 0x22e
    u8 field_22f;             // 0x22f
} Ov104Struct;

// Function declarations

// ov104_021E5900 - Assembly: asm/overlay_104.s
// Initializes 3D Pokemon view
// Parameters: structPtr - Ov104Struct
// Returns: 1 on success
int ov104_021E5900(Ov104Struct *structPtr);

// ov104_021E59E4 - Assembly: asm/overlay_104.s
// Main update function for 3D view
// Parameters: structPtr - Ov104Struct, caseId - state
// Returns: void
void ov104_021E59E4(Ov104Struct *structPtr, int caseId);

// ov104_021E5B14 - Assembly: asm/overlay_104.s
// Cleanup function
// Parameters: structPtr - Ov104Struct
// Returns: 1 on success
int ov104_021E5B14(Ov104Struct *structPtr);

// ov104_021E5B88 - Assembly: asm/overlay_104.s
// Graphics initialization
// Returns: void
void ov104_021E5B88(void);

// ov104_021E5BEC - Assembly: asm/overlay_104.s
// Camera setup for Pokemon view
// Parameters: structPtr - Ov104Struct
// Returns: void
void ov104_021E5BEC(Ov104Struct *structPtr);

// ov104_021E5CA8 - Assembly: asm/overlay_104.s
// GfGfx bank setup
// Returns: void
void ov104_021E5CA8(void);

// ov104_021E5CC8 - Assembly: asm/overlay_104.s
// NARC and resource loading
// Parameters: structPtr - Ov104Struct
// Returns: void
void ov104_021E5CC8(Ov104Struct *structPtr);

// ov104_021E5E78 - Assembly: asm/overlay_104.s
// Helper function
// Parameters: void
// Returns: result
int ov104_021E5E78(void);

// ov104_021E5EB0 - Assembly: asm/overlay_104.s
// Helper function
// Parameters: index, id
// Returns: void
void ov104_021E5EB0(int index, int id);

#endif // POKEHEARTGOLD_OVERLAY_104_H
