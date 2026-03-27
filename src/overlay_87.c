#include "overlay_87.h"
#include <string.h>

// ScratchOffCards_Init - Assembly: asm/overlay_87.s @ 0x021E5900
// Main init function for Scratch-off Cards mini-game
int ScratchOffCards_Init(UnkStruct_021E5900 *structPtr) {
    void *heap;
    void *overlayData;
    void *args;
    void *options;
    
    // Create heap for cards game
    heap = Heap_Create(3, 0x58, 0x10000); // 64KB heap with ID 0x58
    
    // Create overlay data (0x50 * 4 = 0x140 bytes)
    overlayData = OverlayManager_CreateAndGetData(0x50, structPtr);
    
    // Zero out the struct
    MI_CpuFill8(overlayData, 0, 0x50 * 4);
    
    // Get args and store
    args = OverlayManager_GetArgs();
    *(void **)((u8 *)structPtr + 0x4) = args;
    
    // Get options from save
    options = Save_PlayerData_GetOptionsAddr();
    *(void **)((u8 *)structPtr + 0x8) = options;
    
    // Initialize game state
    *(u8 *)((u8 *)structPtr + 0x200) = 0;  // No cards revealed
    *(u8 *)((u8 *)structPtr + 0x201) = 0;  // Card state
    *(u8 *)((u8 *)structPtr + 0x202) = 0xFF;  // No first card
    *(u8 *)((u8 *)structPtr + 0x203) = 0xFF;  // No second card
    *(u32 *)((u8 *)structPtr + 0x204) = 0;  // Prize value
    *(u32 *)((u8 *)structPtr + 0x208) = 0;  // Total prizes
    *(u32 *)((u8 *)structPtr + 0x20c) = 0;  // Game state
    
    return 1;
}

// ScratchOffCards_Main - Assembly: asm/overlay_87.s @ 0x021E5A40
// Main task function
void ScratchOffCards_Main(void *task) {
    UnkStruct_021E5900 *structPtr;
    int caseId;
    u32 gameState;
    
    // Get overlay data
    structPtr = OverlayManager_GetData();
    
    // Get case from task
    caseId = *(int *)task;
    
    // Get game state
    gameState = *(u32 *)((u8 *)structPtr + 0x20c);
    
    // Handle different states
    switch (gameState) {
    case 0:
        // Initialize game - load graphics
        ov87_021E5AFC(structPtr);
        *(u32 *)((u8 *)structPtr + 0x20c) = 1;
        break;
        
    case 1:
        // Main game loop - wait for input
        ov87_021E5C38(task);
        
        // Check for card selection
        if (*(u8 *)((u8 *)structPtr + 0x201) == 1) {
            // Card selected, show animation
            ov87_021E5E00(task);
        }
        break;
        
    case 2:
        // Check match
        ov87_021E6080(task);
        break;
        
    case 3:
        // Game over
        break;
        
    default:
        break;
    }
}

// ScratchOffCards_Exit - Assembly: asm/overlay_87.s @ 0x021E5AA4
// Exit function
int ScratchOffCards_Exit(UnkStruct_021E5900 *structPtr) {
    void *bgConfig;
    void *spriteSystem;
    void *msgData;
    
    // Get and free BG config
    bgConfig = *(void **)((u8 *)structPtr + 0x110);
    if (bgConfig != NULL) {
        // Free BG resources
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
    Heap_Destroy(0x58);
    
    return 1;
}

// ov87_021E5AFC - Assembly: asm/overlay_87.s @ 0x021E5AFC
// BG initialization
void ov87_021E5AFC(UnkStruct_021E5900 *structPtr) {
    void *bgConfig;
    NARC *narc;
    
    // Allocate BG config
    bgConfig = BgConfig_Alloc(0, 4, 0, 0);
    *(void **)((u8 *)structPtr + 0x110) = bgConfig;
    
    // Set up screens
    SetBothScreensModesAndDisable();
    
    // Load graphics from NARC (cards/scratch-off game graphics)
    // NARC ID likely 0x240 or similar
    narc = NARC_New(0x240, 0);
    if (narc != NULL) {
        // Load character data
        GfGfxLoader_LoadCharDataFromOpenNarc(narc, 0, bgConfig, 0, 0);
        
        // Load screen data (card layout)
        GfGfxLoader_LoadScrnDataFromOpenNarc(narc, 1, bgConfig, 0, 0, 0);
        
        // Load palette
        GfGfxLoader_GXLoadPalFromOpenNarc(narc, 2, 0, 0, 0);
        
        NARC_Delete(narc);
    }
    
    // Initialize message data
    void *msgData = NewMsgDataFromNarc(0x21C, 10, 0);
    *(void **)((u8 *)structPtr + 0x1d0) = msgData;
    
    // Initialize sprite system
    void *spriteSys = SpriteSystem_Alloc(0, 0x20, 0x20, 0x10);
    *(void **)((u8 *)structPtr + 0x170) = spriteSys;
    
    if (spriteSys != NULL) {
        SpriteSystem_Init(spriteSys, 0, 0);
        SpriteSystem_InitManagerWithCapacities(spriteSys, 0x20, 0x20, 0x10);
        
        // Load sprite resources
        // Load card sprites from NARC
    }
}

// ov87_021E5B48 - Assembly: asm/overlay_87.s @ 0x021E5B48
// Graphics setup helper
void ov87_021E5B48(void *param) {
    // Set up GPU banks
    // GfGfx_SetBanks()
    
    // Enable planes
    GfGfx_DisableEngineAPlanes(0);
    GfGfx_DisableEngineBPlanes(0);
}

// ov87_021E5C38 - Assembly: asm/overlay_87.s @ 0x021E5C38
// Main display function - handle rendering
void ov87_021E5C38(void *param) {
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

// ov87_021E5CEC - Assembly: asm/overlay_87.s @ 0x021E5CEC
// Input handling - check card selection
void ov87_021E5CEC(void *param) {
    UnkStruct_021E5900 *structPtr;
    int cardIndex;
    
    structPtr = OverlayManager_GetData();
    
    // Check touchscreen input
    if (TouchscreenHitbox_TouchNewIsIn()) {
        // Find which card was touched
        cardIndex = ov87_021E64F8(structPtr); // Helper to find card
        
        if (cardIndex >= 0 && cardIndex < 12) { // 12 cards total
            // Check if card is already revealed
            if (*(u8 *)((u8 *)structPtr + 0x201) == 0) {
                // Store first card selection
                *(u8 *)((u8 *)structPtr + 0x202) = (u8)cardIndex;
                *(u8 *)((u8 *)structPtr + 0x201) = 1; // First card selected
                
                // Play card flip sound
                PlaySE(0x64); // Card flip SE
            } else if (*(u8 *)((u8 *)structPtr + 0x201) == 1) {
                // Store second card selection
                *(u8 *)((u8 *)structPtr + 0x203) = (u8)cardIndex;
                *(u8 *)((u8 *)structPtr + 0x201) = 2; // Second card selected
                
                // Change state to check match
                *(u32 *)((u8 *)structPtr + 0x20c) = 2;
            }
        }
    }
}

// ov87_021E5E00 - Assembly: asm/overlay_87.s @ 0x021E5E00
// Card reveal animation
void ov87_021E5E00(void *param) {
    UnkStruct_021E5900 *structPtr;
    u8 firstCard;
    u8 secondCard;
    u32 *cardValues;
    u32 i;
    
    structPtr = OverlayManager_GetData();
    firstCard = *(u8 *)((u8 *)structPtr + 0x202);
    secondCard = *(u8 *)((u8 *)structPtr + 0x203);
    
    // Card values stored in data section
    // ov87_021E7FEC - card value table
    cardValues = (u32 *)0x021E7FEC;
    
    // Animate card flip (set sprite to revealed state)
    // ManagedSprite_SetAnim() for card sprites
    
    // Play reveal sound
    PlaySE(0x65); // Card reveal SE
    
    // Set revealed state
    *(u8 *)((u8 *)structPtr + 0x201) = 0; // Reset to allow next selection
}

// ov87_021E6080 - Assembly: asm/overlay_87.s @ 0x021E6080
// Prize check - compare two revealed cards
void ov87_021E6080(void *param) {
    UnkStruct_021E5900 *structPtr;
    u8 firstCard;
    u8 secondCard;
    u32 *cardValues;
    u32 prize;
    
    structPtr = OverlayManager_GetData();
    firstCard = *(u8 *)((u8 *)structPtr + 0x202);
    secondCard = *(u8 *)((u8 *)structPtr + 0x203);
    
    // Get card values
    cardValues = (u32 *)0x021E7FEC;
    
    // Check if cards match
    if (cardValues[firstCard] == cardValues[secondCard]) {
        // Match found!
        prize = cardValues[firstCard];
        
        // Add to total prizes
        *(u32 *)((u8 *)structPtr + 0x208) += prize;
        
        // Play win sound
        PlaySE(0xC8); // Prize win SE
        
        // Set cards as matched (won)
        // Mark cards as permanently revealed
    } else {
        // No match - cards will be hidden again
        PlaySE(0x64); // Card flip SE
        
        // Reset card state after delay
        *(u8 *)((u8 *)structPtr + 0x202) = 0xFF;
        *(u8 *)((u8 *)structPtr + 0x203) = 0xFF;
        *(u8 *)((u8 *)structPtr + 0x201) = 0;
        
        // Return to game state
        *(u32 *)((u8 *)structPtr + 0x20c) = 1;
    }
}

// Helper function - find card at touchscreen position
// ov87_021E64F8
int ov87_021E64F8(UnkStruct_021E5900 *structPtr) {
    s32 touchX;
    s32 touchY;
    s32 cardWidth;
    s32 cardHeight;
    s32 startX;
    s32 startY;
    int col;
    int row;
    int index;
    
    // Get touch position
    // System_GetTouchNew() returns touch data
    touchX = 100; // Placeholder - would get from touchscreen
    touchY = 100;
    
    // Card grid: 4 columns x 3 rows
    cardWidth = 48;
    cardHeight = 48;
    startX = 24;
    startY = 40;
    
    // Calculate card position
    col = (touchX - startX) / cardWidth;
    row = (touchY - startY) / cardHeight;
    
    // Check bounds
    if (col < 0 || col >= 4 || row < 0 || row >= 3) {
        return -1; // Not on a card
    }
    
    // Calculate index
    index = row * 4 + col;
    
    return index;
}

// Card prize values
// Data at ov87_021E7FEC
static const u32 ov87_CardValues[12] = {
    100, 200, 300, 500,    // Row 1
    100, 200, 300, 500,    // Row 2
    100, 200, 300, 500,    // Row 3
};

// Card sprite positions
static const s16 ov87_CardPositions[12 * 2] = {
    24, 40,
    72, 40,
    120, 40,
    168, 40,
    24, 88,
    72, 88,
    120, 88,
    168, 88,
    24, 136,
    72, 136,
    120, 136,
    168, 136,
};

// Game messages
static const u32 ov87_MessageNarcId = 0x21C;
static const u32 ov87_Messages[] = {
    100,  // "Scratch-off Cards" title
    101,  // "Select a card" prompt
    102,  // "Match the values!" message
    103,  // "Congratulations!" message
    104,  // "No match" message
    105,  // Prize amount format
};

// Prize amounts (multipliers)
static const u32 ov87_PrizeMultipliers[] = {
    1, 2, 3, 5,   // x100, x200, x300, x500
};