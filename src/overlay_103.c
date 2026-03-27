#include "overlay_103.h"
#include <string.h>

// ov103_021EC940 - Assembly: asm/overlay_103.s @ 0x021EC940
// Main init function for Mailbox/Mail view
int ov103_021EC940(UnkStruct_021EC940 *structPtr) {
    void *heap;
    void *overlayData;
    void *args;
    void *options;
    void *mailbox;
    
    // Create heap with ID 0x9c, size 1 << 0x10 = 0x10000
    heap = Heap_Create(3, 0x9c, 0x10000);
    
    // Create overlay data (0x2c * 4 = 0xb0 bytes)
    overlayData = OverlayManager_CreateAndGetData(0x2c, structPtr);
    
    // Zero out the struct
    MI_CpuFill8(overlayData, 0, 0x2c * 4);
    
    // Get args and store
    args = OverlayManager_GetArgs();
    *(void **)((u8 *)structPtr + 0x8) = args;
    
    // Get options and store
    if (args != NULL) {
        options = Save_PlayerData_GetOptionsAddr();
    } else {
        options = NULL;
    }
    *(void **)structPtr = options;
    
    // Get mailbox and store
    if (args != NULL) {
        void *mailId = *(void **)args;
        mailbox = Save_Mailbox_Get();
    } else {
        mailbox = NULL;
    }
    *(void **)((u8 *)structPtr + 0x4) = mailbox;
    
    // Set field_0x28 to 8
    *(u32 *)((u8 *)structPtr + 0x28) = 8;
    
    return 1;
}

// ov103_021EC988 - Assembly: asm/overlay_103.s @ 0x021EC988
// Main task function - checks if mail exists and continues/exits
int ov103_021EC988(void *task) {
    UnkStruct_021EC940 *structPtr;
    BOOL hasMail;
    
    // Get overlay data
    structPtr = OverlayManager_GetData();
    
    // Check if mailbox has mail
    hasMail = ov103_021ED2D4(structPtr);
    
    if (hasMail != 0) {
        // Has mail - continue
        return 0;
    } else {
        // No mail - exit
        return 1;
    }
}

// ov103_021EC9A4 - Assembly: asm/overlay_103.s @ 0x021EC9A4
// Exit function
int ov103_021EC9A4(UnkStruct_021EC940 *structPtr) {
    // Free overlay data
    OverlayManager_FreeData(structPtr);
    
    // Destroy heap
    Heap_Destroy(0x9c);
    
    return 1;
}

// ov103_021EC9B4 - Assembly: asm/overlay_103.s @ 0x021EC9B4
// VBlank callback - updates BG and sprite OAM
void ov103_021EC9B4(void *param) {
    void *bgConfig;
    
    // Get BG config and do updates
    bgConfig = *(void **)((u8 *)param + 0xc);
    if (bgConfig != NULL) {
        DoScheduledBgGpuUpdates(bgConfig);
    }
    
    // Transfer OAM
    SpriteSystem_TransferOam();
    
    // Set display option flag (0x027E0000 + 0x3FF8)
    // This sets bit 0 to enable something
    *(volatile u32 *)0x027E3FF8 |= 1;
}

// ov103_021EC9D8 - Assembly: asm/overlay_103.s @ 0x021EC9D8
// Graphics setup - calls GfGfx_SetBanks with bank config
void ov103_021EC9D8(void) {
    // Calls GfGfx_SetBanks with ov103_021EEC30 bank config
    // Based on .inc, this sets GPU banks for the overlay
    GfGfx_SetBanks((void *)ov103_021EEC30);
}

// ov103_021EC9E8 - Assembly: asm/overlay_103.s @ 0x021EC9E8
// Main display function - large function handling mailbox UI
// Parameters: param - typically task pointer or NULL
void ov103_021EC9E8(void *param) {
    // This is a complex function with many local variables
    // It handles:
    // - BG initialization
    // - Sprite system setup
    // - Message data loading
    // - List menu creation
    // - Touchscreen input handling
    // - Mail display
    
    // Large stack frame (0xf0 bytes based on assembly)
    // Multiple cases for mail operations
    
    // Placeholder - detailed implementation would require
    // full disassembly of this 100+ line function
}

// ov103_021ED2D4 - Assembly: asm/overlay_103.s @ 0x021ED2D4
// Check if mailbox has any mail
BOOL ov103_021ED2D4(UnkStruct_021EC940 *structPtr) {
    void *mailbox;
    
    // Get mailbox from struct
    mailbox = *(void **)((u8 *)structPtr + 0x4);
    
    if (mailbox == NULL) {
        return FALSE;
    }
    
    // Check if mailbox has mail (function likely returns count > 0)
    // sub_0202B404 likely returns mail count or mail slot info
    return sub_0202B404(mailbox);
}

// ov103_021EE0AC - Assembly: asm/overlay_103.s @ 0x021EE0AC
// Helper function - likely mail list display
void ov103_021EE0AC(void *param) {
    // Placeholder - handles mail list rendering
}

// ov103_021EE2E0 - Assembly: asm/overlay_103.s @ 0x021EE2E0
// Helper function - likely mail item handler
void ov103_021EE2E0(void *param) {
    // Placeholder - handles individual mail items
}

// ov103_021EE468 - Assembly: asm/overlay_103.s @ 0x021EE468
// Helper function - likely cleanup
void ov103_021EE468(void *param) {
    // Placeholder - cleanup resources
}

// ov103_021EEAB4 - Assembly: asm/overlay_103.s @ 0x021EEAB4
// Empty stub function (just returns)
void ov103_021EEAB4(void) {
    // BX LR - just return
}

// Additional function placeholders based on function count
// The overlay has many helper functions for UI, mail handling, etc.

// Data section - bank configuration for GfGfx_SetBanks
// This would be in .rodata section
extern const u32 ov103_021EEC30[16];  // Placeholder for bank config

// Jump table data for main handler (at 0x021EEAB0)
// Each entry is a function pointer for different mail operations
static const void *ov103_JumpTable[] = {
    ov103_021EEAB0,  // case 0 handler
    ov103_021EEAB4,  // case 1 handler
    ov103_021EEAB8,  // case 2 handler
    // ... more cases
};

// Mail operation table (at 0x021EEB04)
static const void *ov103_MailOpsTable[] = {
    // Function pointers for mail operations
};

// Message data configuration
// Loaded from NARC for mailbox messages
static const u32 ov103_MessageNarcId = 0x21C;  // Example NARC ID
static const u32 ov103_MessageIds[] = {
    0x1, 0x2, 0x3,  // Message IDs for mail UI
};

// Font configuration
static const u32 ov103_FontId = 0;  // Default font

// BG configuration IDs
static const s32 ov103_BgIds[] = {
    0, 1, 2, 3,  // BG layers used
};

// Sprite resource IDs (from NARC)
static const u32 ov103_SpriteNarcId = 0x234;  // Example
static const u32 ov103_SpriteCharId = 5;
static const u32 ov103_SpritePlttId = 5;
static const u32 ov103_SpriteCellId = 6;
static const u32 ov103_SpriteAnimId = 6;

// List menu configuration
// Used for mail selection list
typedef struct {
    u32 count;
    void *items;
    void *msgData;
    u32 msgId;
} Ov103_ListMenuConfig;

// Touchscreen configuration
// Used for mail touch input
typedef struct {
    s16 x;
    s16 y;
    s16 width;
    s16 height;
} Ov103_TouchArea;

// Touch areas for mailbox UI
static const Ov103_TouchArea ov103_TouchAreas[] = {
    { 0, 0, 240, 160 },    // Main area
    { 0, 160, 240, 80 },   // Bottom area
    // More touch areas
};

// Window configuration
// Used for mail message windows
typedef struct {
    u8 left;
    u8 top;
    u8 right;
    u8 bottom;
} Ov103_WindowConfig;

// Window positions
static const Ov103_WindowConfig ov103_Windows[] = {
    { 2, 2, 27, 17 },      // Main window
    { 2, 2, 27, 17 },      // List window
    // More windows
};