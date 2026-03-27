#include "overlay_58.h"

// ov58_022378C0 - Assembly: asm/overlay_58.s
// Runs an overlay if loaded and returns result
// Parameters: structPtr - ApricornBoxStruct
// Returns: 1 if successful, 0 if not
int ov58_022378C0(ApricornBoxStruct *structPtr) {
    void *overlay = structPtr->overlayManager;
    if (overlay == NULL) {
        return 0;
    }
    
    int result = OverlayManager_Run(overlay);
    if (result == 0) {
        return 0;
    }
    
    OverlayManager_Delete(overlay);
    structPtr->overlayManager = NULL;
    return 1;
}

// ApricornBox_Init - Assembly: asm/overlay_58.s
// Initializes the Apricorn Box UI
// Parameters: structPtr - ApricornBoxStruct
// Returns: 1 on success
int ApricornBox_Init(ApricornBoxStruct *structPtr) {
    ov58_02237CCC();
    
    // Create heap with ID 0x85
    void *heap = Heap_Create(2, 0x85 << 12);
    
    // Create overlay data
    void *data = OverlayManager_CreateAndGetData(0x20, 0x85, structPtr);
    
    // Clear the data area
    MI_CpuFill8(data, 0, 0x20);
    
    // Store heap ID at offset 0
    *(u8 *)data = 0x85;
    
    // Get arguments from overlay manager
    structPtr->field_04 = OverlayManager_GetArgs(structPtr);
    
    // Initialize mode
    ov58_02237B40(structPtr);
    
    return 1;
}

// ApricornBox_Main - Assembly: asm/overlay_58.s
// Main loop for Apricorn Box UI - implements jump table for cases 0-7
// Parameters: resultPtr - pointer to store result, caseId - operation case (0-7)
// Returns: 1 to continue, 0 to exit
int ApricornBox_Main(int *resultPtr, int caseId) {
    ApricornBoxStruct *structPtr = OverlayManager_GetData();
    int *result = (int *)structPtr;
    
    // Jump table switch on caseId (0-7)
    switch (caseId) {
        case 0:
            // Check current mode and update
            if (structPtr->mode == 3) {
                *result = 3;
            } else {
                *result = 1;
            }
            return 0;
            
        case 1:
            *result = ov58_02237B98(structPtr);
            return 0;
            
        case 2:
            *result = ov58_02237BB0(structPtr);
            return 0;
            
        case 3:
            *result = ov58_02237BD4(structPtr);
            return 0;
            
        case 4:
            *result = ov58_02237C4C(structPtr);
            return 0;
            
        case 5:
            *result = ov58_02237C88(structPtr);
            return 0;
            
        case 6:
            *result = ov58_02237CA0(structPtr);
            return 0;
            
        case 7:
            return 1;
            
        default:
            return 0;
    }
}

// ApricornBox_Exit - Assembly: asm/overlay_58.s
// Cleans up Apricorn Box UI
// Parameters: structPtr - ApricornBoxStruct
// Returns: 1 on success
int ApricornBox_Exit(ApricornBoxStruct *structPtr) {
    void *data = OverlayManager_GetData();
    ApricornBoxStruct *structPtrCopy = data;
    
    ov58_02237CCC();
    ov58_02237B94(data);
    
    OverlayManager_FreeData(structPtr);
    Heap_Destroy(0x85);
    
    return 1;
}

// ov58_022379C0 - Assembly: asm/overlay_58.s
// Aprijuice modifier calculation and application - complex function
// Parameters: structPtr - ApricornBoxStruct, param1, param2
// Returns: void
void ov58_022379C0(ApricornBoxStruct *structPtr, u32 param1, u32 param2) {
    // This is a complex function that calculates aprijuice modifications
    // Based on the assembly, it involves:
    // - Getting party data and calculating modifiers
    // - Floating point calculations
    // - Setting values in a local buffer
    // - Calling Party functions
    
    // The function is complex with many floating-point operations
    // Refer to assembly for full behavior
    
    // Placeholder - the full implementation requires deep analysis
    // of the floating-point operations and party data handling
}

// ov58_02237B40 - Assembly: asm/overlay_58.s
// Initializes/applies mode-specific settings based on mode byte
// Parameters: structPtr - ApricornBoxStruct
// Returns: void
void ov58_02237B40(ApricornBoxStruct *structPtr) {
    void *data = OverlayManager_GetData();
    
    // Check mode at offset 8
    u8 mode = *(u8 *)((u8 *)data + 8);
    
    switch (mode) {
        case 0:
            structPtr->mode = 0;
            break;
        case 1:
            structPtr->mode = 1;
            break;
        case 2:
            structPtr->mode = 2;
            break;
        case 3:
            structPtr->mode = 1;
            structPtr->field_19 = 0;
            // field_14 = *(u32 *)(data + 0xc)
            break;
        default:
            structPtr->field_19 = 0;
            // field_14 = 8
            break;
    }
}

// ov58_02237B94 - Assembly: asm/overlay_58.s
// Empty handler - just returns
// Returns: void
void ov58_02237B94(void) {
    // Empty function - just returns
}

// ov58_02237B98 - Assembly: asm/overlay_58.s
// Case 1: Opens mystery gift overlay (OVY_59)
// Parameters: structPtr - ApricornBoxStruct
// Returns: 2
int ov58_02237B98(ApricornBoxStruct *structPtr) {
    void *overlay = OverlayManager_New(0x02237D1C, 0, structPtr);
    structPtr->overlayManager = overlay;
    return 2;
}

// ov58_02237BB0 - Assembly: asm/overlay_58.s
// Case 2: Opens party menu
// Parameters: structPtr - ApricornBoxStruct
// Returns: result code
int ov58_02237BB0(ApricornBoxStruct *structPtr) {
    // Try to run overlay at +8 offset
    int result = ov58_022378C0((ApricornBoxStruct *)((u8 *)structPtr + 8));
    
    if (result == 0) {
        return 2;
    }
    
    // Check mode at offset 0x18
    if (structPtr->mode == 3) {
        structPtr->partyMenuResult = 0;
        return 3;
    }
    
    return 7;
}

// ov58_02237BD4 - Assembly: asm/overlay_58.s
// Case 3: Creates party menu overlay and allocates data
// Parameters: structPtr - ApricornBoxStruct
// Returns: 4
int ov58_02237BD4(ApricornBoxStruct *structPtr) {
    // Allocate 0x44 bytes for party data
    void *partyData = Heap_Alloc(0x44);
    
    // Clear the allocated data
    MI_CpuFill8(partyData, 0, 0x44);
    
    // Get party from save data
    void *party = SaveArray_Party_Get();
    *(void **)partyData = party;
    
    // Get bag
    void *bag = Save_Bag_Get();
    *(void **)((u8 *)partyData + 4) = bag;
    
    // Set some fields
    *((u8 *)partyData + 0x25) = 0;
    *((u8 *)partyData + 0x24) = 0x14;
    
    // Get player options
    void *options = Save_PlayerData_GetOptionsAddr();
    *((u8 *)partyData + 0xc) = options;
    
    // Get mailbox
    void *mailbox = Save_Mailbox_Get();
    *((u8 *)partyData + 8) = mailbox;
    
    *((u32 *)partyData + 0x7) = 0;
    
    // Get other field from struct
    void *field_14 = *((void **)structPtr + 5);
    *((u32 *)partyData + 8) = (u32)field_14;
    
    // Copy field_1c
    *((u8 *)partyData + 0x26) = structPtr->partyMenuResult;
    
    // Create party menu overlay
    void *overlay = OverlayManager_New(gOverlayTemplate_PartyMenu, structPtr->overlayManager, partyData);
    structPtr->partyMenuOverlay = overlay;
    structPtr->partyData = partyData;
    
    return 4;
}

// ov58_02237C4C - Assembly: asm/overlay_58.s
// Case 4: Handles party menu close and selection
// Parameters: structPtr - ApricornBoxStruct
// Returns: result code
int ov58_02237C4C(ApricornBoxStruct *structPtr) {
    // Try to run overlay at +8 offset
    int result = ov58_022378C0((ApricornBoxStruct *)((u8 *)structPtr + 8));
    
    if (result == 0) {
        return 4;
    }
    
    // Get party data and check selection
    u8 selection = *((u8 *)structPtr->partyData + 0x26);
    structPtr->partyMenuResult = selection;
    
    // Free party data
    Heap_Free(structPtr->partyData);
    structPtr->partyData = NULL;
    
    // Check if selection is in range 0-6
    if (selection < 7) {
        // Check some condition
        u8 gameVersion = *(u8 *)structPtr->field_04;
        if (gameVersion == 3) {
            return 7;
        }
        return 1;
    }
    
    return 5;
}

// ov58_02237C88 - Assembly: asm/overlay_58.s
// Case 5: Opens mystery gift overlay (OVY_59)
// Parameters: structPtr - ApricornBoxStruct
// Returns: 6
int ov58_02237C88(ApricornBoxStruct *structPtr) {
    void *overlay = OverlayManager_New(0x02237D2C, structPtr->overlayManager, structPtr);
    structPtr->overlayManager = overlay;
    return 6;
}

// ov58_02237CA0 - Assembly: asm/overlay_58.s
// Case 6: Opens party menu with different parameters
// Parameters: structPtr - ApricornBoxStruct
// Returns: result code
int ov58_02237CA0(ApricornBoxStruct *structPtr) {
    // Try to run overlay at +8 offset
    int result = ov58_022378C0((ApricornBoxStruct *)((u8 *)structPtr + 8));
    
    if (result == 0) {
        return 6;
    }
    
    // Check mode at offset 0x18
    if (structPtr->mode == 3) {
        return 3;
    }
    
    // Check game version at offset 4
    u8 gameVersion = *(u8 *)structPtr->field_04;
    if (gameVersion != 3) {
        return 7;
    }
    
    return 1;
}

// ov58_02237CCC - Assembly: asm/overlay_58.s
// Disables graphics and clears display
// Returns: void
void ov58_02237CCC(void) {
    Main_SetVBlankIntrCB(0, 0);
    HBlankInterruptDisable();
    GfGfx_DisableEngineAPlanes();
    GfGfx_DisableEngineBPlanes();
    
    // Disable rendering
    // This is hardware register manipulation equivalent to:
    // reg = *(vu32 *)0x04001000
    // reg &= 0xFFFFE0FF
    // *(vu32 *)0x04001000 = reg
    
    // Similar display control changes
}