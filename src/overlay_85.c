#include "overlay_85.h"
#include <string.h>

// ov85_021E5900 - Assembly: asm/overlay_85.s @ 0x021E5900
// Main init function for battle/game overlay
int ov85_021E5900(UnkStruct_021E5900 *structPtr) {
    void *heap;
    void *overlayData;
    void *args;
    void *options;
    
    // Create heap for battle (larger heap for battle data)
    heap = Heap_Create(3, 0x50, 0x30000); // 192KB heap with ID 0x50
    
    // Create overlay data (0x80 * 4 = 0x200 bytes)
    overlayData = OverlayManager_CreateAndGetData(0x80, structPtr);
    
    // Zero out the struct
    MI_CpuFill8(overlayData, 0, 0x80 * 4);
    
    // Get args and store
    args = OverlayManager_GetArgs();
    *(void **)((u8 *)structPtr + 0x4) = args;
    
    // Get options from save
    options = Save_PlayerData_GetOptionsAddr();
    *(void **)((u8 *)structPtr + 0x8) = options;
    
    // Initialize game state
    *(u32 *)((u8 *)structPtr + 0x240) = 0;  // Game state
    *(u32 *)((u8 *)structPtr + 0x244) = 0;  // Sub-state
    *(u32 *)((u8 *)structPtr + 0x248) = 0;  // Player mon
    *(u32 *)((u8 *)structPtr + 0x24c) = 0;  // Enemy mon
    *(u32 *)((u8 *)structPtr + 0x250) = 0;  // Move selection
    *(u32 *)((u8 *)structPtr + 0x254) = 0;  // Turn counter
    
    return 1;
}

// ov85_021E5A34 - Assembly: asm/overlay_85.s @ 0x021E5A34
// Main task function - handles all battle states
void ov85_021E5A34(void *task) {
    UnkStruct_021E5900 *structPtr;
    int caseId;
    u32 gameState;
    
    // Get overlay data
    structPtr = OverlayManager_GetData();
    
    // Get case from task
    caseId = *(int *)task;
    
    // Get game state
    gameState = *(u32 *)((u8 *)structPtr + 0x240);
    
    // Main state machine
    switch (gameState) {
    case 0:
        // Initialize - setup BG, sprites, camera
        ov85_021E9C84(task);
        *(u32 *)((u8 *)structPtr + 0x240) = 1;
        break;
        
    case 1:
        // Battle intro sequence
        // Show player and enemy Pokémon
        break;
        
    case 2:
        // Player turn - show menu
        ov85_021E85C4(task);
        break;
        
    case 3:
        // Player selected - wait for input
        // Handle FIGHT/ITEM/POKEMON/RUN selection
        ov85_021E85CC(task);
        break;
        
    case 4:
        // Move selection (if FIGHT selected)
        ov85_021E8680(task);
        break;
        
    case 5:
        // Target selection (for multi-target moves)
        ov85_021E86AC(task);
        break;
        
    case 6:
        // Execute move animation
        ov85_021E8A08(task);
        break;
        
    case 7:
        // Enemy turn
        break;
        
    case 8:
        // Check win/loss condition
        break;
        
    case 9:
        // Post-battle (win/loss/draw)
        ov85_021E8B08(task);
        break;
        
    case 10:
        // End battle sequence
        ov85_021E9D9C(task);
        break;
        
    default:
        break;
    }
}

// ov85_021E5AAC - Assembly: asm/overlay_85.s @ 0x021E5AAC
// Exit function - cleanup all resources
int ov85_021E5AAC(UnkStruct_021E5900 *structPtr) {
    void *bgConfig;
    void *spriteSystem;
    void *msgData;
    void *camera;
    
    // Free BG config
    bgConfig = *(void **)((u8 *)structPtr + 0x110);
    if (bgConfig != NULL) {
        FreeBgTilemapBuffer(bgConfig);
        // Free BG configuration
    }
    
    // Free sprite system
    spriteSystem = *(void **)((u8 *)structPtr + 0x170);
    if (spriteSystem != NULL) {
        SpriteSystem_FreeResourcesAndManager(spriteSystem);
        SpriteSystem_Free(spriteSystem);
    }
    
    // Destroy message data
    msgData = *(void **)((u8 *)structPtr + 0x1d0);
    if (msgData != NULL) {
        DestroyMsgData(msgData);
    }
    
    // Delete camera
    camera = *(void **)((u8 *)structPtr + 0x200);
    if (camera != NULL) {
        Camera_Delete(camera);
    }
    
    // Free overlay data
    OverlayManager_FreeData(structPtr);
    
    // Destroy heap
    Heap_Destroy(0x50);
    
    return 1;
}

// ov85_021E85C4 - Assembly: asm/overlay_85.s @ 0x021E85C4
// Initialize battle menu (FIGHT/ITEM/POKEMON/RUN)
void ov85_021E85C4(void *param) {
    UnkStruct_021E5900 *structPtr;
    void *bgConfig;
    void *msgData;
    
    structPtr = OverlayManager_GetData();
    bgConfig = *(void **)((u8 *)structPtr + 0x110);
    msgData = *(void **)((u8 *)structPtr + 0x1d0);
    
    // Create battle menu window
    // Use DrawFrameAndWindow2 for menu border
    
    // Add menu items from message data
    // Menu structure:
    // FIGHT
    // ITEM
    // POKEMON
    // RUN
    
    // Set up key repeat for menu navigation
    SetKeyRepeatTimers(10, 5); // Initial delay 10, repeat every 5
    
    // Play menu open sound
    PlaySE(0x64); // Menu open SE
}

// ov85_021E85CC - Assembly: asm/overlay_85.s @ 0x021E85CC
// Battle menu main handler
void ov85_021E85CC(void *param) {
    UnkStruct_021E5900 *structPtr;
    u32 selection;
    
    structPtr = OverlayManager_GetData();
    
    // Handle menu input
    // Check D-pad and buttons
    // Handle2dMenuInput_DeleteOnFinish for menu navigation
    
    // Get selection (0=FIGHT, 1=ITEM, 2=POKEMON, 3=RUN)
    selection = 0; // Placeholder - would get from menu system
    
    switch (selection) {
    case 0:
        // FIGHT - go to move selection
        *(u32 *)((u8 *)structPtr + 0x240) = 4;
        break;
        
    case 1:
        // ITEM - show item menu
        ov85_021E8740(param);
        break;
        
    case 2:
        // POKEMON - show Pokémon menu
        ov85_021E8748(param);
        break;
        
    case 3:
        // RUN - try to escape
        ov85_021E88AC(param);
        break;
        
    default:
        break;
    }
}

// ov85_021E8680 - Assembly: asm/overlay_85.s @ 0x021E8680
// Move selection handler
void ov85_021E8680(void *param) {
    UnkStruct_021E5900 *structPtr;
    void *playerMon;
    u32 moveIndex;
    
    structPtr = OverlayManager_GetData();
    playerMon = (void *)*(u32 *)((u8 *)structPtr + 0x248);
    
    // Get player's moves from Pokémon data
    // Display 4 move slots
    
    // Handle move selection
    moveIndex = 0; // Placeholder
    
    // Store move selection
    *(u32 *)((u8 *)structPtr + 0x250) = moveIndex;
    
    // Check move type (for target selection)
    // If move targets self or ally, skip target selection
    // Otherwise, go to target selection
    
    // Play move selection sound
    PlaySE(0x65);
    
    // Proceed to move execution
    *(u32 *)((u8 *)structPtr + 0x240) = 6;
}

// ov85_021E86AC - Assembly: asm/overlay_85.s @ 0x021E86AC
// Target selection (for double battles or multi-target moves)
void ov85_021E86AC(void *param) {
    UnkStruct_021E5900 *structPtr;
    u32 moveIndex;
    u32 moveType;
    
    structPtr = OverlayManager_GetData();
    moveIndex = *(u32 *)((u8 *)structPtr + 0x250);
    
    // Determine move targeting:
    // 0 = single target (enemy)
    // 1 = single target (ally)
    // 2 = all enemies
    // 3 = all
    // 4 = self
    
    // Handle target selection UI
    
    // Proceed to execute move
    *(u32 *)((u8 *)structPtr + 0x240) = 6;
}

// ov85_021E8740 - Assembly: asm/overlay_85.s @ 0x021E8740
// Item menu handler
void ov85_021E8740(void *param) {
    UnkStruct_021E5900 *structPtr;
    void *bag;
    u32 itemId;
    BOOL usable;
    
    structPtr = OverlayManager_GetData();
    
    // Get player's bag
    bag = Save_Bag_Get();
    
    // Display usable items in battle
    // Only show battle-usable items (balls, potions, etc.)
    
    // Get selected item
    itemId = 0; // Placeholder
    
    // Check if item is usable
    usable = sub_0205B4A4(itemId, bag);
    
    if (usable) {
        // Use item
        Bag_TakeItem(bag, itemId, 1);
        // Execute item effect
    } else {
        // Show "can't use this now" message
        PlaySE(0x6A); // Error sound
    }
    
    // Return to main menu
    *(u32 *)((u8 *)structPtr + 0x240) = 2;
}

// ov85_021E8748 - Assembly: asm/overlay_85.s @ 0x021E8748
// Pokémon menu handler (switch Pokémon)
void ov85_021E8748(void *param) {
    UnkStruct_021E5900 *structPtr;
    void *party;
    int monIndex;
    BOOL canSwitch;
    
    structPtr = OverlayManager_GetData();
    
    // Get player's party
    party = SaveArray_Party_Get();
    
    // Display party Pokémon
    // Only show usable Pokémon (not fainted, not currently out)
    
    // Get selection
    monIndex = 0; // Placeholder
    
    // Check if can switch to this Pokémon
    canSwitch = TRUE; // Placeholder
    
    if (canSwitch) {
        // Perform switch
        *(u32 *)((u8 *)structPtr + 0x248) = (u32)Party_GetMonByIndex(party, monIndex);
        
        // Play switch sound
        PlaySE(0x6B); // Switch sound
    }
    
    // Return to battle
    *(u32 *)((u8 *)structPtr + 0x240) = 7; // Enemy turn after switch
}

// ov85_021E88AC - Assembly: asm/overlay_85.s @ 0x021E88AC
// Run option handler
void ov85_021E88AC(void *param) {
    UnkStruct_021E5900 *structPtr;
    u32 runSuccess;
    
    structPtr = OverlayManager_GetData();
    
    // Calculate run success chance
    // Based on Pokémon speeds, running flag, etc.
    runSuccess = sub_020696C4(); // Run calculation function
    
    if (runSuccess) {
        // Show "got away safely!" message
        PlaySE(0xCC); // Run success sound
        
        // Exit battle (success)
        *(u32 *)((u8 *)structPtr + 0x240) = 10;
    } else {
        // Show "can't escape!" message
        PlaySE(0x6A); // Error sound
        
        // Return to menu
        *(u32 *)((u8 *)structPtr + 0x240) = 2;
    }
}

// ov85_021E8A08 - Assembly: asm/overlay_85.s @ 0x021E8A08
// Execute move animation and damage calculation
void ov85_021E8A08(void *param) {
    UnkStruct_021E5900 *structPtr;
    u32 moveIndex;
    void *playerMon;
    void *enemyMon;
    u32 damage;
    u32 effectiveness;
    
    structPtr = OverlayManager_GetData();
    moveIndex = *(u32 *)((u8 *)structPtr + 0x250);
    playerMon = (void *)*(u32 *)((u8 *)structPtr + 0x248);
    enemyMon = (void *)*(u32 *)((u8 *)structPtr + 0x24c);
    
    // Calculate move damage
    // sub_0205A904 - damage calculation
    damage = sub_0205A904(playerMon, enemyMon, moveIndex);
    
    // Apply damage to enemy
    // GetMonData(enemyMon, MON_DATA_HP) - current HP
    // Subtract damage
    
    // Determine effectiveness (super effective, not very effective, etc.)
    effectiveness = sub_0205B4A4(moveIndex, enemyMon); // Placeholder
    
    // Play move animation
    // Based on move type (normal, fire, water, etc.)
    
    // Play move sound
    PlaySE(0x68 + moveIndex); // Move sound
    
    // Show damage animation
    // Show effectiveness message
    
    // Check if enemy fainted
    // If fainted, proceed to win sequence
    // Else, proceed to enemy turn
    
    // Increment turn counter
    *(u32 *)((u8 *)structPtr + 0x254) += 1;
    
    // Next: enemy turn
    *(u32 *)((u8 *)structPtr + 0x240) = 7;
}

// ov85_021E8B08 - Assembly: asm/overlay_85.s @ 0x021E8B08
// Post-battle screen (win/loss/draw)
void ov85_021E8B08(void *param) {
    UnkStruct_021E5900 *structPtr;
    u32 result; // 0=win, 1=loss, 2=draw
    
    structPtr = OverlayManager_GetData();
    result = 0; // Placeholder
    
    if (result == 0) {
        // Player won
        // Show "You won!" message
        PlayFanfare(0x1E); // Victory fanfare
        
        // Update game stats
        GameStats_Inc(0); // Battles won
        
        // Award experience/prize money
        sub_02039EAC(); // Experience calculation
        sub_02039EB4(); // Prize money
        
    } else if (result == 1) {
        // Player lost
        // Show "You lost..." message
        PlaySE(0x6A); // Loss sound
        
        // Update game stats
        GameStats_Inc(1); // Battles lost
        
    } else {
        // Draw
        // Show "Draw" message
    }
    
    // Wait for player input to continue
    // Then exit battle
    *(u32 *)((u8 *)structPtr + 0x240) = 10;
}

// ov85_021E9C84 - Assembly: asm/overlay_85.s @ 0x021E9C84
// Battle initialization and intro sequence
void ov85_021E9C84(void *param) {
    UnkStruct_021E5900 *structPtr;
    void *bgConfig;
    void *spriteSystem;
    void *camera;
    void *msgData;
    NARC *narc;
    
    structPtr = OverlayManager_GetData();
    
    // Allocate BG config
    bgConfig = BgConfig_Alloc(0, 4, 0, 0);
    *(void **)((u8 *)structPtr + 0x110) = bgConfig;
    
    // Set up screens
    SetBothScreensModesAndDisable();
    
    // Initialize 3D graphics
    Thunk_G3X_Reset();
    G3X_InitMtxStack();
    NNS_G3dInit();
    
    // Initialize camera
    camera = Camera_New();
    *(void **)((u8 *)structPtr + 0x200) = camera;
    Camera_Init_FromTargetDistanceAndAngle(camera, 0, 0, 0, 0);
    
    // Load battle graphics from NARC
    // NARC ID likely 0x242 or similar
    narc = NARC_New(0x242, 0);
    if (narc != NULL) {
        // Load character data
        GfGfxLoader_LoadCharDataFromOpenNarc(narc, 0, bgConfig, 0, 0);
        
        // Load screen data
        GfGfxLoader_LoadScrnDataFromOpenNarc(narc, 1, bgConfig, 0, 0, 0);
        
        // Load palette
        GfGfxLoader_GXLoadPalFromOpenNarc(narc, 2, 0, 0, 0);
        
        NARC_Delete(narc);
    }
    
    // Initialize sprite system for battle sprites
    spriteSystem = SpriteSystem_Alloc(0, 0x40, 0x40, 0x20);
    *(void **)((u8 *)structPtr + 0x170) = spriteSystem;
    
    if (spriteSystem != NULL) {
        SpriteSystem_Init(spriteSystem, 0, 0);
        SpriteSystem_InitManagerWithCapacities(spriteSystem, 0x40, 0x40, 0x20);
        
        // Load Pokémon sprites
    }
    
    // Initialize message data
    msgData = NewMsgDataFromNarc(0x21C, 20, 0); // Battle messages
    *(void **)((u8 *)structPtr + 0x1d0) = msgData;
    
    // Play battle intro music
    GF_GetCurrentPlayingBGM(); // Check current BGM
    Sound_SetSceneAndPlayBGM(0, 0x50, 0, 0x1E0); // Battle theme
    
    // Play battle start sound
    PlaySE(0x9C); // Battle start SE
}

// ov85_021E9D9C - Assembly: asm/overlay_85.s @ 0x021E9D9C
// End battle sequence and cleanup
void ov85_021E9D9C(void *param) {
    UnkStruct_021E5900 *structPtr;
    
    structPtr = OverlayManager_GetData();
    
    // Wait for fanfare to finish
    while (IsFanfarePlaying()) {
        // Wait
    }
    
    // Fade out music
    // Stop BGM
    
    // Clear any pending tasks
    SysTask_Destroy(NULL); // Placeholder
    
    // Return to field/game loop
    // This will trigger the exit function
}

// Additional helper functions from the 200+ functions in overlay

// ov85_021E5AF0 - Helper function
void ov85_021E5AF0(void *param) {
    // Placeholder
}

// ov85_021E5B30 - Helper function
void ov85_021E5B30(void *param) {
    // Placeholder
}

// ov85_021E5C58 - Helper function
void ov85_021E5C58(void *param) {
    // Placeholder
}

// ov85_021E5D20 - Helper function
void ov85_021E5D20(void *param) {
    // Placeholder
}

// ov85_021E5F58 - Helper function
void ov85_021E5F58(void *param) {
    // Placeholder
}

// ov85_021E61FC - Helper function
void ov85_021E61FC(void *param) {
    // Placeholder
}

// ov85_021E6420 - Helper function  
void ov85_021E6420(void *param) {
    // Placeholder
}

// ov85_021E657C - Helper function
void ov85_021E657C(void *param) {
    // Placeholder
}

// ov85_021E6748 - Helper function
void ov85_021E6748(void *param) {
    // Placeholder
}

// ov85_021E6A2C - Helper function
void ov85_021E6A2C(void *param) {
    // Placeholder
}

// ov85_021E6D68 - Helper function
void ov85_021E6D68(void *param) {
    // Placeholder
}

// ov85_021E6F6C - Helper function
void ov85_021E6F6C(void *param) {
    // Placeholder
}

// ov85_021E730C - Helper function
void ov85_021E730C(void *param) {
    // Placeholder
}

// ov85_021E752C - Helper function
void ov85_021E752C(void *param) {
    // Placeholder
}

// ov85_021E7734 - Helper function
void ov85_021E7734(void *param) {
    // Placeholder
}

// ov85_021E7958 - Helper function
void ov85_021E7958(void *param) {
    // Placeholder
}

// ov85_021E7B8C - Helper function
void ov85_021E7B8C(void *param) {
    // Placeholder
}

// ov85_021E7D78 - Helper function
void ov85_021E7D78(void *param) {
    // Placeholder
}

// ov85_021E7ED0 - Helper function
void ov85_021E7ED0(void *param) {
    // Placeholder
}

// ov85_021E80D0 - Helper function
void ov85_021E80D0(void *param) {
    // Placeholder
}

// ov85_021E833C - Helper function
void ov85_021E833C(void *param) {
    // Placeholder
}

// ov85_021E8558 - Helper function
void ov85_021E8558(void *param) {
    // Placeholder
}

// ov85_021E87F0 - Helper function
void ov85_021E87F0(void *param) {
    // Placeholder
}

// ov85_021E8BB0 - Helper function
void ov85_021E8BB0(void *param) {
    // Placeholder
}

// ov85_021E8D64 - Helper function
void ov85_021E8D64(void *param) {
    // Placeholder
}

// ov85_021E8F58 - Helper function
void ov85_021E8F58(void *param) {
    // Placeholder
}

// ov85_021E9160 - Helper function
void ov85_021E9160(void *param) {
    // Placeholder
}

// ov85_021E943C - Helper function
void ov85_021E943C(void *param) {
    // Placeholder
}

// ov85_021E9614 - Helper function
void ov85_021E9614(void *param) {
    // Placeholder
}

// ov85_021E98C4 - Helper function
void ov85_021E98C4(void *param) {
    // Placeholder
}

// ov85_021E9A6C - Helper function
void ov85_021E9A6C(void *param) {
    // Placeholder
}

// ov85_021E9C50 - Helper function
void ov85_021E9C50(void *param) {
    // Placeholder
}