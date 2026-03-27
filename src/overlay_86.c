#include "overlay_86.h"
#include <string.h>

// ov86_021E5900 - Assembly: asm/overlay_86.s @ 0x021E5900
// Main init function for Frontier overlay
int ov86_021E5900(UnkStruct_021E5900 *structPtr) {
    void *heap;
    void *overlayData;
    void *args;
    void *options;
    void *frontierData;
    
    // Create heap (based on assembly - similar pattern to other overlays)
    // Heap ID likely 0x5a or similar for Frontier
    heap = Heap_Create(3, 0x5a, 0x20000); // 128KB heap
    
    // Create overlay data
    overlayData = OverlayManager_CreateAndGetData(0x40, structPtr); // 0x40 * 4 = 0x100 bytes
    
    // Zero out the struct
    MI_CpuFill8(overlayData, 0, 0x40 * 4);
    
    // Get args and store
    args = OverlayManager_GetArgs();
    *(void **)((u8 *)structPtr + 0x4) = args;
    
    // Get options from save
    options = Save_PlayerData_GetOptionsAddr();
    *(void **)((u8 *)structPtr + 0x8) = options;
    
    // Get Frontier data
    frontierData = Save_FrontierData_Get();
    *(void **)((u8 *)structPtr + 0x100) = (void *)frontierData;
    
    return 1;
}

// ov86_021E5A40 - Assembly: asm/overlay_86.s @ 0x021E5A40
// Main task function
void ov86_021E5A40(void *task) {
    UnkStruct_021E5900 *structPtr;
    int caseId;
    
    // Get overlay data
    structPtr = OverlayManager_GetData();
    
    // Get case from task
    caseId = *(int *)task;
    
    // Jump based on case - likely similar to other overlays
    // with init/main/exit pattern
    switch (caseId) {
    case 0:
        // Initialize BG and graphics
        ov86_021E5B38(structPtr);
        break;
    case 1:
        // Main display
        ov86_021E5C94(task);
        break;
    case 2:
        // Handle input
        ov86_021E5E0C(task);
        break;
    default:
        break;
    }
}

// ov86_021E5AA4 - Assembly: asm/overlay_86.s @ 0x021E5AA4
// Exit function
int ov86_021E5AA4(UnkStruct_021E5900 *structPtr) {
    void *bgConfig;
    void *spriteSystem;
    void *msgData;
    
    // Get and free BG config
    bgConfig = *(void **)((u8 *)structPtr + 0x110);
    if (bgConfig != NULL) {
        BgConfig_Alloc(FREE, 0, 0, 0); // Actually would use proper free
    }
    
    // Free sprite system
    spriteSystem = *(void **)((u8 *)structPtr + 0x170);
    if (spriteSystem != NULL) {
        SpriteSystem_Free(spriteSystem);
    }
    
    // Destroy message data
    msgData = *(void **)((u8 *)structPtr + 0x1d0);
    if (msgData != NULL) {
        DestroyMsgData(msgData);
    }
    
    // Free overlay data
    OverlayManager_FreeData(structPtr);
    
    // Destroy heap
    Heap_Destroy(0x5a);
    
    return 1;
}

// ov86_021E5B38 - Assembly: asm/overlay_86.s @ 0x021E5B38
// BG initialization
void ov86_021E5B38(UnkStruct_021E5900 *structPtr) {
    void *bgConfig;
    NARC *narc;
    
    // Allocate BG config
    bgConfig = BgConfig_Alloc(0, 4, 0, 0);
    *(void **)((u8 *)structPtr + 0x110) = bgConfig;
    
    // Set up screens
    SetBothScreensModesAndDisable();
    
    // Initialize BG templates
    // Based on InitBgFromTemplate calls in the function
    
    // Load graphics from NARC
    // NARC ID likely 0x234 or similar for Frontier graphics
    narc = NARC_New(0x234, 0); // Example NARC
    if (narc != NULL) {
        // Load character data
        GfGfxLoader_LoadCharDataFromOpenNarc(narc, 0, bgConfig, 0, 0);
        
        // Load screen data
        GfGfxLoader_LoadScrnDataFromOpenNarc(narc, 1, bgConfig, 0, 0, 0);
        
        // Load palette
        GfGfxLoader_GXLoadPalFromOpenNarc(narc, 2, 0, 0, 0);
        
        NARC_Delete(narc);
    }
}

// ov86_021E5BA0 - Assembly: asm/overlay_86.s @ 0x021E5BA0
// Graphics setup helper
void ov86_021E5BA0(void *param) {
    // Set up GPU banks
    GfGfx_SetBanks((void *)0x021E7E90); // Placeholder address
    
    // Enable/disable planes as needed
    GfGfx_DisableEngineAPlanes(0);
    GfGfx_DisableEngineBPlanes(0);
}

// ov86_021E5C94 - Assembly: asm/overlay_86.s @ 0x021E5C94
// Main display function - handles Frontier UI
void ov86_021E5C94(void *param) {
    UnkStruct_021E5900 *structPtr;
    void *bgConfig;
    void *spriteSystem;
    
    structPtr = OverlayManager_GetData();
    bgConfig = *(void **)((u8 *)structPtr + 0x110);
    spriteSystem = *(void **)((u8 *)structPtr + 0x170);
    
    // Update BG
    DoScheduledBgGpuUpdates(bgConfig);
    
    // Draw sprites
    SpriteSystem_DrawSprites(spriteSystem);
    
    // Transfer OAM
    SpriteSystem_TransferOam();
}

// ov86_021E5E0C - Assembly: asm/overlay_86.s @ 0x021E5E0C
// Input handling
void ov86_021E5E0C(void *param) {
    UnkStruct_021E5900 *structPtr;
    void *inputHandler;
    int input;
    
    structPtr = OverlayManager_GetData();
    
    // Get input handler from struct
    inputHandler = *(void **)((u8 *)structPtr + 0x180);
    
    if (inputHandler != NULL) {
        // Handle input
        input = GridInputHandler_HandleInput_NoHold(inputHandler);
        
        // Process input
        if (input != 0) {
            // Handle direction/button press
            input = GridInputHandler_GetNextInput(inputHandler);
        }
    }
    
    // Check touchscreen
    if (TouchscreenHitbox_TouchNewIsIn()) {
        // Handle touchscreen input
    }
}

// ov86_021E6064 - Assembly: asm/overlay_86.s @ 0x021E6064
// Case handler
void ov86_021E6064(void *param) {
    // Placeholder for specific case handling
}

// ov86_021E6114 - Assembly: asm/overlay_86.s @ 0x021E6114
// Another handler
void ov86_021E6114(void *param) {
    // Placeholder
}

// ov86_021E62F4 - Assembly: asm/overlay_86.s @ 0x021E62F4
// Data loading - loads Frontier data for display
void ov86_021E62F4(void *param) {
    UnkStruct_021E5900 *structPtr;
    void *frontierData;
    void *msgData;
    
    structPtr = OverlayManager_GetData();
    frontierData = *(void **)((u8 *)structPtr + 0x100);
    
    // Load message data
    msgData = NewMsgDataFromNarc(0x21C, 5, 0); // Example NARC/msg
    *(void **)((u8 *)structPtr + 0x1d0) = msgData;
    
    // Load Frontier data based on type
    if (frontierData != NULL) {
        // Get specific Frontier data based on args
        void *staticData = Save_Frontier_GetStatic();
        // Load appropriate data
    }
}

// Additional helper functions (placeholder implementations)

// ov86_021E5D10 - Helper function
void ov86_021E5D10(void *param) {
    // Placeholder
}

// ov86_021E5D30 - Helper function
void ov86_021E5D30(void *param) {
    // Placeholder
}

// ov86_021E5E54 - Helper function
void ov86_021E5E54(void *param) {
    // Placeholder
}

// ov86_021E5E90 - Helper function
void ov86_021E5E90(void *param) {
    // Placeholder
}

// ov86_021E5F58 - Helper function
void ov86_021E5F58(void *param) {
    // Placeholder
}

// ov86_021E60B8 - Helper function
void ov86_021E60B8(void *param) {
    // Placeholder
}

// Data section - BG configuration
// These would be in .rodata section
extern const u32 ov86_BgConfigData[16];  // Placeholder

// Message data configuration
static const u32 ov86_MessageNarcId = 0x21C;
static const u32 ov86_MessageIds[] = {
    0x1, 0x2, 0x3, 0x4, 0x5,  // Message IDs for Frontier UI
};

// Sprite resource IDs
static const u32 ov86_SpriteNarcId = 0x234;
static const u32 ov86_CharId = 5;
static const u32 ov86_PlttId = 5;
static const u32 ov86_CellId = 6;
static const u32 ov86_AnimId = 6;

// Frontier types
typedef enum {
    FRONTIER_TYPE_BATTLE_TOWER = 0,
    FRONTIER_TYPE_BATTLE_CASTLE = 1,
    FRONTIER_TYPE_BATTLE_ARCADE = 2,
    FRONTIER_TYPE_DOME = 3,
    FRONTIER_TYPE_PALACE = 4,
    FRONTIER_TYPE_ARENA = 5,
    FRONTIER_TYPE_FACTORY = 6,
    FRONTIER_TYPE_PIKE = 7,
} FrontierType;

// Frontier facility data structure
typedef struct {
    u8 type;
    u8 level;
    u8 maxStreak;
    u8 currentStreak;
    u32 wins;
    u32 losses;
    void *recordData;
} FrontierFacilityData;