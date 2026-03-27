#ifndef POKEHEARTGOLD_OVERLAY_97_H
#define POKEHEARTGOLD_OVERLAY_97_H

#include <global.h>

// Unknown structure used by overlay 97
// Based on jump table at 0x0221E5F2 with 6 cases (0-5)
// Size: at least 0x2C bytes based on field accesses
typedef struct UnkStruct_0221E5D4 {
    u32 field_0x0;      // State field, values 0-5
    u32 field_0x4;      // Set in case 0 (value 1), case 1 (value 2), case 2 (value 3), case 4 (value 4)
    u32 field_0x8;      // Compared/checked in case 3
    u32 field_0xc;      // Compared with 2 and 3 in case 3
    u32 field_0x10;
    u32 field_0x14;
    u32 field_0x18;
    u32 field_0x1c;
    u32 field_0x20;
    u32 field_0x24;
    u32 field_0x28;     // Set to 0 or 1 in case 3
    u32 field_0x2c;
} UnkStruct_0221E5D4;

// ov97_0221E5C0 - Assembly: asm/overlay_97.s
// Checks if ov97_0221E6DC returns non-zero
// Returns: 1 if ov97_0221E6DC returns non-zero, 0 otherwise
int ov97_0221E5C0(void);

// ov97_0221E5D4 - Assembly: asm/overlay_97.s
// Main state machine handler with 6-case jump table
// Cases: 0=set state 1, 1=palette fade, 2=check fade, 3=check sub_020935E0, 4=palette fade, 5=default
// Parameters: param - pointer to UnkStruct_0221E5D4
void ov97_0221E5D4(UnkStruct_0221E5D4 *param);

// ov97_0221E69C - Assembly: asm/overlay_97.s
void ov97_0221E69C(void);

// ov97_0221E6DC - Assembly: asm/overlay_97.s
// Initializes overlay data
// Returns: result of initialization
int ov97_0221E6DC(void);

// ov97_0221E700 - Assembly: asm/overlay_97.s
void ov97_0221E700(void);

// ov97_0221E7F4 - Assembly: asm/overlay_97.s
void ov97_0221E7F4(void);

// ov97_0221E814 - Assembly: asm/overlay_97.s
void ov97_0221E814(void);

// ov97_0221E834 - Assembly: asm/overlay_97.s
void ov97_0221E834(void);

// ov97_0221E864 - Assembly: asm/overlay_97.s
void ov97_0221E864(void);

// ov97_0221E88C - Assembly: asm/overlay_97.s
void ov97_0221E88C(void);

// ov97_0221E898 - Assembly: asm/overlay_97.s
void ov97_0221E898(void);

// ov97_0221E91C - Assembly: asm/overlay_97.s
void ov97_0221E91C(void);

// ov97_0221E97C - Assembly: asm/overlay_97.s
void ov97_0221E97C(void);

// ov97_0221E98C - Assembly: asm/overlay_97.s
void ov97_0221E98C(void);

// ov97_0221EA88 - Assembly: asm/overlay_97.s
void ov97_0221EA88(void);

// ov97_0221EB38 - Assembly: asm/overlay_97.s
void ov97_0221EB38(void);

// ov97_0221EBD8 - Assembly: asm/overlay_97.s
void ov97_0221EBD8(void);

// ov97_0221EC14 - Assembly: asm/overlay_97.s
void ov97_0221EC14(void);

// ov97_0221EDE4 - Assembly: asm/overlay_97.s
void ov97_0221EDE4(void);

// ov97_0221EE84 - Assembly: asm/overlay_97.s
void ov97_0221EE84(void);

// ov97_0221EEA4 - Assembly: asm/overlay_97.s
void ov97_0221EEA4(void);

// ov97_0221EFD0 - Assembly: asm/overlay_97.s
void ov97_0221EFD0(void);

// ov97_0221F010 - Assembly: asm/overlay_97.s
void ov97_0221F010(void);

// ov97_0221F020 - Assembly: asm/overlay_97.s
void ov97_0221F020(void);

// ov97_0221F0E0 - Assembly: asm/overlay_97.s
void ov97_0221F0E0(void);

// ov97_0221F14C - Assembly: asm/overlay_97.s
void ov97_0221F14C(void);

// ov97_0221F1D8 - Assembly: asm/overlay_97.s
void ov97_0221F1D8(void);

// ov97_0221F294 - Assembly: asm/overlay_97.s
void ov97_0221F294(void);

// ov97_0221F428 - Assembly: asm/overlay_97.s
void ov97_0221F428(void);

// ov97_0221F56C - Assembly: asm/overlay_97.s
void ov97_0221F56C(void);

// ov97_0221F5F8 - Assembly: asm/overlay_97.s
void ov97_0221F5F8(void);

// ov97_0221F74C - Assembly: asm/overlay_97.s
void ov97_0221F74C(void);

// ov97_0221F7DC - Assembly: asm/overlay_97.s
void ov97_0221F7DC(void);

// ov97_0221F9E0 - Assembly: asm/overlay_97.s
void ov97_0221F9E0(void);

// ov97_0221FAEC - Assembly: asm/overlay_97.s
void ov97_0221FAEC(void);

// ov97_0221FB80 - Assembly: asm/overlay_97.s
void ov97_0221FB80(void);

// ov97_0221FBA0 - Assembly: asm/overlay_97.s
void ov97_0221FBA0(void);

// ov97_0221FBDC - Assembly: asm/overlay_97.s
void ov97_0221FBDC(void);

// ov97_0221FC54 - Assembly: asm/overlay_97.s
// Loads OBJ graphics using DC_FlushRange and GXS_LoadOBJ/GXS_LoadOBJPltt
void ov97_0221FC54(UnkStruct_0221E5D4 *param);

#endif // POKEHEARTGOLD_OVERLAY_97_H
