#ifndef POKEHEARTGOLD_OVERLAY_58_H
#define POKEHEARTGOLD_OVERLAY_58_H

#include <global.h>

// Apricorn Box UI structure (approximate based on field offsets)
typedef struct ApricornBoxStruct {
    void *overlayManager;       // 0x00 - overlay manager pointer
    void *field_04;             // 0x04
    u8 mode;                    // 0x18 - current mode (0-3)
    u8 field_19;               // 0x19
    u8 partyMenuResult;         // 0x1c - result from party menu
    void *partyMenuOverlay;     // 0x08 - party menu overlay
    void *partyData;            // 0x10 - party data pointer
    u32 field_14;               // 0x14
    u8 field_1c;                // 0x1c
    u8 field_26;                // 0x26 - apricorn count
} ApricornBoxStruct;

// Function declarations

// ov58_022378C0 - Assembly: asm/overlay_58.s
// Runs an overlay if loaded and returns result
// Parameters: structPtr - ApricornBoxStruct
// Returns: 1 if successful, 0 if not
int ov58_022378C0(ApricornBoxStruct *structPtr);

// ApricornBox_Init - Assembly: asm/overlay_58.s
// Initializes the Apricorn Box UI
// Parameters: structPtr - ApricornBoxStruct
// Returns: 1 on success
int ApricornBox_Init(ApricornBoxStruct *structPtr);

// ApricornBox_Main - Assembly: asm/overlay_58.s
// Main loop for Apricorn Box UI
// Parameters: resultPtr - pointer to store result, caseId - operation case (0-7)
// Returns: 1 to continue, 0 to exit
int ApricornBox_Main(int *resultPtr, int caseId);

// ApricornBox_Exit - Assembly: asm/overlay_58.s
// Cleans up Apricorn Box UI
// Parameters: structPtr - ApricornBoxStruct
// Returns: 1 on success
int ApricornBox_Exit(ApricornBoxStruct *structPtr);

// ov58_022379C0 - Assembly: asm/overlay_58.s
// Aprijuice modifier calculation and application
// Parameters: structPtr - ApricornBoxStruct, param1, param2
// Returns: void
void ov58_022379C0(ApricornBoxStruct *structPtr, u32 param1, u32 param2);

// ov58_02237B40 - Assembly: asm/overlay_58.s
// Initializes/applies mode-specific settings
// Parameters: structPtr - ApricornBoxStruct
// Returns: void
void ov58_02237B40(ApricornBoxStruct *structPtr);

// ov58_02237B94 - Assembly: asm/overlay_58.s
// Empty handler
// Returns: void
void ov58_02237B94(void);

// ov58_02237B98 - Assembly: asm/overlay_58.s
// Case 1: Opens mystery gift overlay (OVY_59)
// Parameters: structPtr - ApricornBoxStruct
// Returns: 2
int ov58_02237B98(ApricornBoxStruct *structPtr);

// ov58_02237BB0 - Assembly: asm/overlay_58.s
// Case 2: Opens party menu
// Parameters: structPtr - ApricornBoxStruct
// Returns: result code
int ov58_02237BB0(ApricornBoxStruct *structPtr);

// ov58_02237BD4 - Assembly: asm/overlay_58.s
// Case 3: Creates party menu overlay and allocates data
// Parameters: structPtr - ApricornBoxStruct
// Returns: 4
int ov58_02237BD4(ApricornBoxStruct *structPtr);

// ov58_02237C4C - Assembly: asm/overlay_58.s
// Case 4: Handles party menu close and selection
// Parameters: structPtr - ApricornBoxStruct
// Returns: result code
int ov58_02237C4C(ApricornBoxStruct *structPtr);

// ov58_02237C88 - Assembly: asm/overlay_58.s
// Case 5: Opens mystery gift overlay (OVY_59)
// Parameters: structPtr - ApricornBoxStruct
// Returns: 6
int ov58_02237C88(ApricornBoxStruct *structPtr);

// ov58_02237CA0 - Assembly: asm/overlay_58.s
// Case 6: Opens party menu with different parameters
// Parameters: structPtr - ApricornBoxStruct
// Returns: result code
int ov58_02237CA0(ApricornBoxStruct *structPtr);

// ov58_02237CCC - Assembly: asm/overlay_58.s
// Disables graphics and clears display
// Returns: void
void ov58_02237CCC(void);

#endif // POKEHEARTGOLD_OVERLAY_58_H
