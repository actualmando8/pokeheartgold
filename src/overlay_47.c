#include "overlay_47.h"

// ov47_02258800 - Assembly: asm/overlay_47.s
// Player selection screen initialization
// Parameters: param1, param2
// Returns: void
void ov47_02258800(void *param1, void *param2) {
    // Get arguments
    void *args = OverlayManager_GetArgs();
    
    // Create heap with ID 0x81
    void *heap = Heap_Create(3, 0x81 << 16);
    
    // Create overlay data (0xA3 * 4 = 0x288 bytes)
    void *overlayData = OverlayManager_CreateAndGetData(0xA3 << 2, 0x81);
    
    // Clear overlay data
    memset(overlayData, 0, 0xA3 << 2);
    
    // Initialize data structures
    ov47_02258A1C(overlayData, *(void **)args);
    ov47_02258C70(overlayData + 0x204, *(u32 *)(args + 4), *(void **)args);
    ov47_02259228(overlayData, *(u32 *)*args);
    
    // Get function pointer from jump table based on parameter
    u32 mode = *(u32 *)(args + 8);
    if (mode >= 2) {
        GF_AssertFail();
    }
    
    // Call initialization function based on mode
    void (*initFunc)(void *, void *, void *) = 
        (void (*)(void *, void *, void *))ov47_02259FB0[mode];
    if (initFunc) {
        initFunc(overlayData, overlayData + 0xC3, overlayData);
    }
    
    // Set VBlank callback
    Main_SetVBlankIntrCB((void *)ov47_02258A14, overlayData);
    HBlankInterruptDisable();
}

// ov47_02258898 - Assembly: asm/overlay_47.s
// Main task handler with 5-case jump table (player selection)
// Parameters: taskPtr, state
// Returns: void
void ov47_02258898(void *taskPtr, u16 state) {
    void *overlayData = OverlayManager_GetData();
    void *args = OverlayManager_GetArgs();
    
    switch (state) {
        case 0:
            // Fade in
            BeginNormalPaletteFade(6, 1, 0x81, 0, 0);
            ov45_0222A520(*(void **)(args + 4));
            *(u16 *)taskPtr = *(u16 *)taskPtr + 1;
            break;
            
        case 1:
            // Wait for fade
            if (IsPaletteFadeFinished()) {
                *(u16 *)taskPtr = *(u16 *)taskPtr + 1;
            }
            break;
            
        case 2:
            // Check palette fade and handle player selection
            if (IsPaletteFadeFinished()) {
                ov45_0222A330(*(void **)(args + 4));
                
                if (ov45_0222A4A8(*(void **)(args + 4)) == 1) {
                    // Player selected
                    *(u16 *)taskPtr = *(u16 *)taskPtr + 1;
                } else if (ov45_0222D844() == 1) {
                    // Back selected
                    *(u16 *)taskPtr = *(u16 *)taskPtr + 1;
                } else {
                    // Call mode handler
                    u32 mode = *(u32 *)(args + 8);
                    void (*modeHandler)(void *, void *, void *, void **) = 
                        (void (*)(void *, void *, void *, void **))ov47_02259FA8[mode];
                    if (modeHandler) {
                        if (modeHandler(overlayData + 0xC3, overlayData + 0xF7, overlayData, (void **)args + 8) == 1) {
                            *(u16 *)taskPtr = *(u16 *)taskPtr + 1;
                        }
                    }
                }
            }
            break;
            
        case 3:
            // Fade out
            BeginNormalPaletteFade(6, 1, 0x81, 0, 0);
            *(u16 *)taskPtr = *(u16 *)taskPtr + 1;
            break;
            
        case 4:
            // Exit when fade done
            if (IsPaletteFadeFinished()) {
                ov47_022593A0(overlayData + 0x268);
                return;
            }
            break;
    }
    
    // Render sprites
    ov47_02258A80(overlayData);
}

// ov47_022589A8 - Assembly: asm/overlay_47.s
// Player selection cleanup
// Parameters: taskPtr
// Returns: void
void ov47_022589A8(void *taskPtr) {
    void *overlayData = OverlayManager_GetData();
    void *args = OverlayManager_GetArgs();
    
    // Clear VBlank callback
    Main_SetVBlankIntrCB(NULL, NULL);
    HBlankInterruptDisable();
    
    // Get and call cleanup function
    u32 mode = *(u32 *)(args + 8);
    void (*cleanupFunc)(void *, void *, void *) = 
        (void (*)(void *, void *, void *))ov47_02259FA0[mode];
    if (cleanupFunc) {
        cleanupFunc(overlayData + 0x238, overlayData, overlayData);
    }
    
    // Cleanup graphics
    ov47_02259278(overlayData + 0x268);
    ov47_02258CC0(overlayData + 0x204);
    ov47_02258A60(overlayData);
    
    // Free overlay data and heap
    OverlayManager_FreeData();
    Heap_Destroy(0x81);
    
    // Exit
    sub_0200616C();
}

// ov47_02258A14 - Assembly: asm/overlay_47.s
// VBlank callback - calls sprite/BG rendering
// Returns: void
void ov47_02258A14(void) {
    void *data = OverlayManager_GetData();
    ov47_02258A8C(*(void **)data);
}

// ov47_02258A1C - Assembly: asm/overlay_47.s
// Graphics initialization for player selection
// Parameters: overlayData, bgConfig
// Returns: void
void ov47_02258A1C(void *overlayData, void *bgConfig) {
    // Open NARC for graphics
    void *narc = NARC_New(0xD1, bgConfig);
    *(void **)((u8 *)overlayData + 0x140) = narc;
    
    // Create VRAM transfer manager
    GF_CreateVramTransferManager(0x20, bgConfig);
    
    // Set GFX banks
    GfGfx_SetBanks((void *)ov47_02259EC0);
    
    // Initialize BG and sprites
    ov47_02258AA0(overlayData, bgConfig);
    ov47_02258BB4(overlayData, bgConfig);
}

// ov47_02258A60 - Assembly: asm/overlay_47.s
// Cleanup graphics resources
// Parameters: overlayData
// Returns: void
void ov47_02258A60(void *overlayData) {
    // Delete NARC
    NARC_Delete(*(void **)((u8 *)overlayData + 0x140));
    
    // Destroy VRAM transfer manager
    GF_DestroyVramTransferManager();
    
    // Free BG buffers
    ov47_02258B8C(overlayData);
    
    // Cleanup OAM
    ov47_02258C44(overlayData);
}

// ov47_02258A80 - Assembly: asm/overlay_47.s
// Sprite rendering callback
// Parameters: param1
// Returns: void
void ov47_02258A80(void *param1) {
    void *spriteList = *(void **)((u8 *)param1 + 4);
    SpriteList_RenderAndAnimateSprites(spriteList);
}

// ov47_02258A8C - Assembly: asm/overlay_47.s
// VBlank main function - BG update, OAM, VRAM transfer
// Parameters: param1
// Returns: void
void ov47_02258A8C(void *param1) {
    void *bgData = *(void **)param1;
    DoScheduledBgGpuUpdates(bgData);
    OamManager_ApplyAndResetBuffers();
    GF_RunVramTransferTasks();
}

// ov47_02258AA0 - Assembly: asm/overlay_47.s
// BG initialization for player selection
// Parameters: overlayData, bgConfig
// Returns: void
void ov47_02258AA0(void *overlayData, void *bgConfig) {
    // Set screen modes
    SetBothScreensModesAndDisable((void *)ov47_02259E48);
    
    // Allocate BG config
    void *bgPtr = BgConfig_Alloc(bgConfig);
    *(void **)overlayData = bgPtr;
    
    // Initialize BGs from template
    for (int i = 0; i < 5; i++) {
        u32 bgId = ov47_02259E68[i] & 0xFF;
        void *template = (void *)ov47_02259F18 + (i * 0x1C);
        InitBgFromTemplate(bgPtr, bgId, template, (ov47_02259E68[i] >> 8) & 0xFF, 0);
        
        // Clear BG
        BG_ClearCharDataRange(bgId, 0x20, 0);
        BgClearTilemapBufferAndCommit(bgPtr, bgId);
    }
    
    // Load fonts
    LoadFontPal1(0, 0x80, bgConfig);
    u8 frame = Options_GetFrame(Save_PlayerData_GetOptionsAddr());
    LoadUserFrameGfx2(1, frame, 5, bgConfig);
    LoadUserFrameGfx1(0, 1, 0x1F, 6, frame, bgConfig);
    
    // Load graphics
    GfGfxLoader_LoadCharData(0xC6, 2, 4, bgConfig);
    GfGfxLoader_LoadScrnData(0xC6, 6, 4, bgConfig);
    GfGfxLoader_GXLoadPal(0xC6, 4, 0, bgConfig);
}

// ov47_02258B8C - Assembly: asm/overlay_47.s
// Free BG buffers
// Parameters: overlayData
// Returns: void
void ov47_02258B8C(void *overlayData) {
    void *bgConfig = *(void **)overlayData;
    
    for (int i = 0; i < 5; i++) {
        u32 bgId = ov47_02259E68[i] & 0xFF;
        FreeBgTilemapBuffer(bgId);
    }
    
    Heap_Free(bgConfig);
}

// ov47_02258BB4 - Assembly: asm/overlay_47.s
// Initialize OAM and sprite managers
// Parameters: overlayData, bgConfig
// Returns: void
void ov47_02258BB4(void *overlayData, void *bgConfig) {
    // Initialize OAM manager
    NNS_G2dInitOamManagerModule();
    
    void *oamMgr = OamManager_Create(NULL, 0x7E, 0, 0x1F, NULL);
    
    // Initialize object char/pltt transfers
    ObjCharTransfer_InitEx((void *)ov47_02259E58, 0x10);
    ObjPlttTransfer_Init(0x20, bgConfig);
    ObjCharTransfer_ClearBuffers();
    ObjPlttTransfer_Reset();
    
    // Set reserved regions
    G2dRenderer_SetObjCharTransferReservedRegion(1, 0x10);
    G2dRenderer_SetPlttTransferReservedRegion(1);
    
    // Initialize renderer
    G2dRenderer_Init(overlayData + 8, 0x20, bgConfig);
    
    // Create sprite resources
    for (int i = 0; i < 5; i++) {
        *(void **)((u8 *)overlayData + 0x130 + i * 4) = 
            Create2DGfxResObjMan(0x20, i, bgConfig);
    }
    
    // Enable display planes
    GfGfx_EngineATogglePlanes(0x10, 1);
    GfGfx_EngineBTogglePlanes(0x10, 1);
}

// ov47_02258C44 - Assembly: asm/overlay_47.s
// Cleanup OAM and sprite resources
// Parameters: overlayData
// Returns: void
void ov47_02258C44(void *overlayData) {
    // Delete sprite list
    SpriteList_Delete(*(void **)((u8 *)overlayData + 4));
    
    // Destroy sprite resources
    for (int i = 0; i < 5; i++) {
        Destroy2DGfxResObjMan(*(void **)((u8 *)overlayData + 0x130 + i * 4));
    }
    
    // Destroy transfer managers
    ObjCharTransfer_Destroy();
    ObjPlttTransfer_Destroy();
    OamManager_Free();
}

// ov47_02258C70 - Assembly: asm/overlay_47.s
// Initialize message data for player names
// Parameters: overlayData, msgId, bgConfig
// Returns: void
void ov47_02258C70(void *overlayData, int msgId, void *bgConfig) {
    // Initialize 10 message data structures
    for (int i = 0; i < 10; i++) {
        *(void **)((u8 *)overlayData + i * 4) = 
            NewMsgDataFromNarc(0, 0x1B, bgConfig);
    }
    
    // Create message format
    *(void **)((u8 *)overlayData + 0x24) = MessageFormat_New(overlayData);
    
    // Create strings
    *(void **)((u8 *)overlayData + 0x28) = String_New(0x100, 1);
    *(void **)((u8 *)overlayData + 0x2C) = String_New(0x100, 1);
}

// ov47_02258CC0 - Assembly: asm/overlay_47.s
// Destroy message data
// Parameters: overlayData
// Returns: void
void ov47_02258CC0(void *overlayData) {
    // Destroy message data
    for (int i = 0; i < 10; i++) {
        DestroyMsgData(*(void **)((u8 *)overlayData + i * 4));
    }
    
    // Delete strings and message format
    MessageFormat_Delete(*(void **)((u8 *)overlayData + 0x24));
    String_Delete(*(void **)((u8 *)overlayData + 0x28));
    String_Delete(*(void **)((u8 *)overlayData + 0x2C));
}

// ov47_02258CEC - Assembly: asm/overlay_47.s
// Get message string for player
// Parameters: overlayData, playerIndex, msgId
// Returns: void*
void *ov47_02258CEC(void *overlayData, int playerIndex, int msgId) {
    if (playerIndex > 9) {
        GF_AssertFail();
    }
    
    // Get message data and read string
    void *msgData = *(void **)((u8 *)overlayData + playerIndex * 4);
    void *string = *(void **)((u8 *)overlayData + 0x2C);
    ReadMsgDataIntoString(msgData, msgId, string);
    
    // Expand placeholders
    void *msgFmt = *(void **)((u8 *)overlayData + 0x24);
    void *buffer = *(void **)((u8 *)overlayData + 0x28);
    StringExpandPlaceholders(msgFmt, buffer, string);
    
    return string;
}

// ov47_02258D18 - Assembly: asm/overlay_47.s
// Get player name string (variant 1)
// Parameters: overlayData, msgId
// Returns: void*
void *ov47_02258D18(void *overlayData, int msgId) {
    if (msgId > 0x3C) {
        GF_AssertFail();
    }
    
    if (msgId < 0x32) {
        return ov47_02258CEC(overlayData, 1, msgId);
    } else {
        return ov47_02258CEC(overlayData, 2, msgId - 0x32);
    }
}

// ov47_02258D44 - Assembly: asm/overlay_47.s
// Get player name string (variant 2)
// Parameters: overlayData, msgId, param3
// Returns: void*
void *ov47_02258D44(void *overlayData, int msgId, void *param3) {
    if (msgId > 0x3C) {
        GF_AssertFail();
    }
    
    if (msgId < 0x32) {
        return ov47_02258CEC(overlayData, (int)param3 + 3, msgId);
    } else {
        return ov47_02258CEC(overlayData, (int)param3 + 6, msgId - 0x32);
    }
}

// ov47_02258D78 - Assembly: asm/overlay_47.s
// Buffer player name into string
// Parameters: overlayData, playerIndex, msgId
// Returns: void
void ov47_02258D78(void *overlayData, int playerIndex, int msgId) {
    // Create player profile
    void *profile = PlayerProfile_New();
    
    // Initialize player data
    ov45_0222A5C0(*(void **)((u8 *)overlayData + 0x30));
    ov45_0222A844(profile, *(void **)((u8 *)overlayData + 0x30), profile);
    
    // Buffer player name
    void *msgData = *(void **)((u8 *)overlayData + 0x24);
    BufferPlayersName(msgData, profile, playerIndex);
    
    Heap_Free(profile);
}

// Stub functions - partial implementation for the many small functions
void ov47_02258DA8(void *param1, void *param2, void *param3) {
    // Load player sprite resources - would need more analysis
}

void ov47_02258DB4(void *param1, void *param2, void *param3) {
    // Player selection handler
    ov47_02258F48(param1, param2, param3);
}

void ov47_02258DC8(void *param1) {
    // Cleanup player resources
    ov47_0225912C(param1, NULL);
}

void ov47_02258DD0(void *spriteStruct, void *bgConfig, int playerIndex) {
    // Create player sprite - would need more analysis
}

// ov47_02258F48 - Assembly: asm/overlay_47.s
// Player selection UI handler with 11-case jump table
// Parameters: taskPtr, param2, param3
// Returns: void
void ov47_02258F48(void *taskPtr, void *param2, void *param3) {
    u16 state = *(u16 *)taskPtr;
    
    switch (state) {
        case 0:
            // Display player name
            ov47_02258CEC(param2, 0, 0x5E);
            ov47_022592B4(param3, NULL);
            *(u16 *)(taskPtr + 0x2A) = 1;
            *(u16 *)taskPtr = 0xA;
            break;
            
        case 1:
            // Handle button press
            ov47_02259404(param2, NULL);
            *(u16 *)taskPtr = 2;
            break;
            
        case 2:
            // Check selection
            int result = ov47_02259430(param2);
            if (result == 0) {
                *(u16 *)taskPtr = 3;
            } else if (result == -1) {
                *(u16 *)taskPtr = 9;
            }
            break;
            
        case 3:
            // Handle selection based on field_34
            int field34 = *(int *)((u8 *)taskPtr + 0x34);
            if (field34 == 0) {
                ov47_02258CEC(param2, 0, 0x5C);
            } else {
                ov47_02258CEC(param2, 0, 0x5D);
            }
            ov47_022592B4(param3, NULL);
            *(u16 *)(taskPtr + 0x2A) = 4;
            *(u16 *)taskPtr = 0xA;
            break;
            
        case 4:
            // Handle player action
            ov47_0225916C(taskPtr + 0x2C, 0);
            ov47_02259D40(taskPtr + 0x2C, param2);
            ov47_02259318(param3, NULL);
            ov47_022591F8(taskPtr);
            ov47_0225921C(taskPtr);
            *(u16 *)taskPtr = 5;
            break;
            
        case 5:
            // Handle input
            if ((*(vu32 *)((u8 *)gSystem + 0x48) & 1) != 0) {
                PlaySE(0x5DC);
                *(u16 *)taskPtr = *(u16 *)taskPtr + 1;
            } else if ((*(vu32 *)((u8 *)gSystem + 0x48) & 0x40) != 0) {
                int counter = *(int *)((u8 *)taskPtr + 0x10);
                if (counter > 0) {
                    counter--;
                    PlaySE(0x5E0);
                } else {
                    counter = 3;
                    PlaySE(0x5E0);
                }
                *(int *)((u8 *)taskPtr + 0x10) = counter;
                ov47_022591F8(taskPtr);
            } else if ((*(vu32 *)((u8 *)gSystem + 0x48) & 0x80) != 0) {
                int counter = *(int *)((u8 *)taskPtr + 0x10);
                if (counter < 3) {
                    counter++;
                    PlaySE(0x5E0);
                }
                *(int *)((u8 *)taskPtr + 0x10) = counter;
                ov47_022591F8(taskPtr);
            }
            break;
            
        case 6:
            // Handle player confirm
            ov45_0222A7DC(*(void **)((u8 *)taskPtr + 0x10), *(void **)((u8 *)taskPtr + 0x30));
            ov45_0222F4D4(*(void **)((u8 *)taskPtr + 0x10));
            ov47_02258CEC(param2, 0, 0x60);
            ov47_02259318(param3, NULL);
            ov47_02259384(param3);
            PlaySE(0x57D);
            *(u16 *)taskPtr = 7;
            break;
            
        case 7:
            // Wait for button release
            if (ov45_0222F524() != 1) {
                PlaySE(0x5E4);
                ov47_022593A0(param3);
                ov47_02258CEC(param2, 0, 0x61);
                ov47_022592B4(param3, NULL);
                *(u16 *)(taskPtr + 0x2A) = 8;
                *(u16 *)taskPtr = 0xA;
            }
            break;
            
        case 8:
            // Handle confirm selection
            int field34_2 = *(int *)((u8 *)taskPtr + 0x34);
            if (field34_2 == 0) {
                ov47_02258CEC(param2, 0, 0x62);
            } else {
                ov47_02258CEC(param2, 0, 0x63);
            }
            ov47_022592B4(param3, NULL);
            *(u16 *)(taskPtr + 0x2A) = 9;
            *(u16 *)taskPtr = 0xA;
            break;
            
        case 9:
            // Return selection
            if (ov47_022593CC(param3) == 1) {
                *(u16 *)taskPtr = *(u16 *)(taskPtr + 0x2A);
            }
            break;
            
        case 10:
            // Exit
            if (ov47_022593B4(param3) == 1) {
                *(u16 *)taskPtr = *(u16 *)(taskPtr + 0x2A);
            }
            break;
            
        default:
            GF_AssertFail();
            break;
    }
}

// More stub functions
void ov47_0225912C(void *param1, void *bgConfig) {
    // Cleanup player sprite and resources
}

void ov47_0225916C(void *windowPtr, int msgId) {
    // Clear player window
    FillWindowPixelBuffer(windowPtr + 0x2C, 0);
}

void ov47_022591F8(void *taskPtr) {
    // Update player sprite position
}

void ov47_0225921C(void *taskPtr) {
    // Update player sprite
}

void ov47_02259228(void *overlayData, int playerIndex) {
    // Setup player display
}

void ov47_02259278(void *overlayData) {
    // Enable player sprite visibility
}

void ov47_022592B4(void *param1, void *string) {
    // Display player name in window
}

void ov47_02259318(void *param1, void *string) {
    // Display player name centered
}

void ov47_02259384(void *param1) {
    // Position player window
}

void ov47_022593A0(void *overlayData) {
    // Clear player selection and exit
}

int ov47_022593B4(void *param1) {
    // Check player selection complete
    return 1;
}

int ov47_022593CC(void *param1) {
    // Check for player exit
    return 1;
}

void ov47_02259404(void *param1, void *param2) {
    // Handle player action
}

int ov47_02259430(void *param1) {
    // Check player button state
    return 0;
}

// Data tables
const u32 ov47_02259E48[4] = {0};

const u8 ov47_02259E58[16] = {0};

const u32 ov47_02259E68[4] = {0};

const u8 ov47_02259E9C[10] = {0};

const u8 ov47_02259EC0[16] = {0};

const u32 ov47_02259F18[4] = {0};

const u32 ov47_02259FA0[4] = {0};

const u32 ov47_02259FA8[4] = {0};

const u32 ov47_02259FB0[4] = {0};
