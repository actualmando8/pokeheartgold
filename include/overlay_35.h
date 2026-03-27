#ifndef POKEHEARTGOLD_OVERLAY_35_H
#define POKEHEARTGOLD_OVERLAY_35_H

#include <global.h>

// Unknown structure - appears to be related to mystery gift or similar system
// Size: at least 0x4C bytes
// Offset 0x0: unknown
// Offset 0x2: u8 compared to value 2
// Offset 0x3: u8 returned by ov35_02259DB8
// Offset 0x4: u8 set to 1 in case 1
// Offset 0x44: function pointer callback
// Offset 0x48: void* - pointer passed to callback
typedef struct UnkStruct_02259D80 {
    u8 field_0x0;
    u8 field_0x1;
    u8 field_0x2;
    u8 field_0x3;
    u8 field_0x4;
    u8 field_0x5[0x3F];  // padding to 0x44
    void (*callback)(void);  // offset 0x44
    void *callbackArg;       // offset 0x48
} UnkStruct_02259D80;

// ov35_02259D80 - Assembly: asm/overlay_35.s
// Case-based handler for mystery gift data structure
// Parameters: structPtr - pointer to UnkStruct_02259D80, caseId - operation (0-5)
// Returns: void
void ov35_02259D80(UnkStruct_02259D80 *structPtr, int caseId);

// ov35_02259DB8 - Assembly: asm/overlay_35.s
// Gets byte field at offset 3 from the structure
// Parameters: structPtr - pointer to UnkStruct_02259D80
// Returns: u8 value at offset 3
u8 ov35_02259DB8(UnkStruct_02259D80 *structPtr);

#endif // POKEHEARTGOLD_OVERLAY_35_H
