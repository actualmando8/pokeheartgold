#include "overlay_46.h"

// ov46_02258800 - Assembly: asm/overlay_46.s
// Mystery Gift initialization - creates heap, overlay data, BG setup
// Parameters: param1, param2
// Returns: void
void ov46_02258800(void *param1, void *param2) {
    // Create heap with ID 0x77
    void *heap = Heap_Create(3, 0x77 << 16);
    
    // Create overlay data
    void *overlayData = OverlayManager_CreateAndGetData(0x404, 0x77);
    
    // Clear overlay data
    memset(overlayData, 0, 0x404);
    
    // Get args
    void *args = OverlayManager_GetArgs();
    
    // Store args pointer
    void *argsPtr = args;
    *(void **)overlayData = *(void **)argsPtr;
    
    // Set BGM scene
    Sound_SetSceneAndPlayBGM(0xB, 0, 0x477);
    
    // Clear some field
    *(u32 *)(argsPtr + 0x10) = 0;
    
    // Call BG init
    ov46_02258F78(overlayData, 0x77);
    
    // Setup message windows with various parameters
    // (multiple calls to ov46_022592EC with different positions/sizes)
    // This is the initialization of multiple text windows for the UI
    
    // Set VBlank callback
    Main_SetVBlankIntrCB((void *)ov46_02258F70, overlayData);
    
    // Disable HBlank interrupt
    HBlankInterruptDisable();
    
    // Enable display
    *(vu8 *)(0x4000060) = 1;
    
    // Swap display
    GfGfx_SwapDisplay();
}

// ov46_0225892C - Assembly: asm/overlay_46.s
// Main task handler with 16-case jump table (Mystery Gift menu)
// Parameters: taskPtr, state
// Returns: void
void ov46_0225892C(void *taskPtr, u16 state) {
    void *overlayData = OverlayManager_GetData();
    void *args = OverlayManager_GetArgs();
    void *argsPtr = args;
    
    // Jump table switch on state (0-15)
    switch (state) {
        case 0:
            // Start palette fade
            BeginNormalPaletteFade(6, 1, 0x77, 0xFFFF, 0);
            // Increment state
            *(u16 *)taskPtr = *(u16 *)taskPtr + 1;
            break;
            
        case 1:
            // Wait for palette fade
            if (IsPaletteFadeFinished()) {
                *(u16 *)taskPtr = *(u16 *)taskPtr + 1;
            }
            break;
            
        case 2:
            // Check if data available
            if (*(void **)(argsPtr + 8) == NULL) {
                // Setup window at 0x70 + offset
                ov46_02259374(overlayData + 0x70, 0x11);
                // Setup prompt
                ov46_02259550(overlayData + 0x70, 0x23);
                // Store result
                *(void **)(overlayData + 0xD0) = (void *)1;
                *(u16 *)taskPtr = *(u16 *)taskPtr + 1;
            } else {
                *(u16 *)taskPtr = 4;
            }
            break;
            
        case 3:
            // Handle yes/no prompt
            if (YesNoPrompt_HandleInput(*(void **)(overlayData + 0xD0)) == 1) {
                // Yes - destroy prompt
                YesNoPrompt_Destroy(*(void **)(overlayData + 0xD0));
                *(u16 *)taskPtr = 4;
            } else if (YesNoPrompt_HandleInput(*(void **)(overlayData + 0xD0)) == 2) {
                // No - destroy prompt and setup different window
                YesNoPrompt_Destroy(*(void **)(overlayData + 0xD0));
                ov46_022593F8(overlayData + 0x40);
                *(u16 *)taskPtr = 7;
            }
            break;
            
        case 4:
            // Call some handler function
            ov45_0222A5C0(*(void **)(argsPtr + 4));
            sub_0203976C(*(void **)overlayData, 0);
            ov46_02259374(overlayData + 0x70, 0x17);
            ov46_02259450(overlayData + 0x70);
            *(u16 *)taskPtr = *(u16 *)taskPtr + 1;
            break;
            
        case 5:
            // Wait for something
            if (sub_020393C8() != 0 || sub_020397FC() != 0) {
                ov46_02259474(overlayData + 0x70);
                *(u16 *)taskPtr = 9;
            }
            
            if (sub_020397E4() == 1) {
                ov45_0222B244(*(void **)(argsPtr + 4));
                *(u16 *)taskPtr = *(u16 *)taskPtr + 1;
            }
            break;
            
        case 6:
            // More handling
            if (sub_020393C8() != 0 || sub_020397FC() != 0) {
                ov46_02259474(overlayData + 0x70);
                *(u16 *)taskPtr = 9;
            }
            
            if (sub_02039274() != 0) {
                ov46_02259474(overlayData + 0x70);
                // Get save stats and add score
                void *stats = Save_GameStats_Get();
                GameStats_AddScore(stats, 0x21);
                
                // Get time
                u32 *timePtr = (u32 *)(argsPtr + 0xC);
                GF_RTC_DateTimeToSec();
                *timePtr = 0;
                *(timePtr + 1) = 0;
                *(u32 *)(argsPtr + 0x10) = 1;
                
                *(u16 *)taskPtr = *(u16 *)taskPtr + 1;
            }
            break;
            
        case 7:
            // Handle download/process
            if (sub_020393C8() != 0) {
                void *data = sub_020392D8();
                ov45_0222D7CC(*(u32 *)data, *(u32 *)(data + 4));
            } else {
                ov45_0222E7CC();
                ov45_0222E7FC();
            }
            
            ov45_0222B270(*(void **)(argsPtr + 4));
            ov46_022593F8(overlayData + 0x40);
            ov46_022593F8(overlayData + 0x70);
            ov46_02259534(overlayData + 0xA0, 0x20);
            ov46_02259374(overlayData + 0xA0, 0x20);
            *(u16 *)taskPtr = *(u16 *)taskPtr + 1;
            break;
            
        case 8:
            // Check system state
            if ((*(vu32 *)((u8 *)gSystem + 0x48) & 3) != 0 || System_GetTouchNew() == 1) {
                if (sub_020393C8() != 0) {
                    void *data = sub_020392D8();
                    if (ov45_0222D7FC(*(u32 *)data, *(u32 *)(data + 4)) == 0) {
                        *(u16 *)taskPtr = 0xB;
                    } else {
                        *(u16 *)taskPtr = 0xE;
                    }
                } else {
                    *(u16 *)taskPtr = 0xB;
                }
            }
            break;
            
        case 9:
            // Display more info
            ov46_022593F8(overlayData + 0xA0);
            ov46_02259374(overlayData + 0x40, 0x58);
            ov46_02259550(overlayData + 0x70, 0x23);
            *(void **)(overlayData + 0xD0) = (void *)1;
            *(u16 *)taskPtr = *(u16 *)taskPtr + 1;
            break;
            
        case 10:
            // Handle another yes/no
            if (YesNoPrompt_HandleInput(*(void **)(overlayData + 0xD0)) == 1) {
                YesNoPrompt_Destroy(*(void **)(overlayData + 0xD0));
                sub_020397C8();
                *(u16 *)taskPtr = 0xD;
            } else if (YesNoPrompt_HandleInput(*(void **)(overlayData + 0xD0)) == 2) {
                YesNoPrompt_Destroy(*(void **)(overlayData + 0xD0));
                *(u16 *)taskPtr = 0xE;
            }
            break;
            
        case 11:
            // Check something
            if (sub_02037D78() == 0) {
                *(u16 *)taskPtr = 4;
            }
            break;
            
        case 12:
            // Clear windows
            ov46_022593F8(overlayData + 0x40);
            ov46_022593F8(overlayData + 0x70);
            ov46_022593F8(overlayData + 0xA0);
            sub_020397C8();
            *(u16 *)taskPtr = *(u16 *)taskPtr + 1;
            break;
            
        case 13:
            // Clear and exit
            if (sub_02037D78() == 0) {
                ov46_022593F8(overlayData + 0x40);
                ov46_022593F8(overlayData + 0x70);
                *(u16 *)taskPtr = 7;
            }
            break;
            
        case 14:
            // Fade out
            BeginNormalPaletteFade(6, 1, 0x77, 0, 0);
            *(u16 *)taskPtr = *(u16 *)taskPtr + 1;
            break;
            
        case 15:
            // Exit when fade done
            if (IsPaletteFadeFinished()) {
                // Return 1 to close overlay
                return;
            }
            break;
            
        default:
            GF_AssertFail();
            break;
    }
}

// ov46_02258C38 - Assembly: asm/overlay_46.s
// Mystery Gift cleanup - frees BG buffers, tasks, heap
// Parameters: taskPtr
// Returns: void
void ov46_02258C38(void *taskPtr) {
    void *overlayData = OverlayManager_GetData();
    
    // Clear VBlank callback
    Main_SetVBlankIntrCB(NULL, NULL);
    HBlankInterruptDisable();
    
    // Destroy task if exists
    if (*(void **)(overlayData + 0xD4) != NULL) {
        SysTask_Destroy(*(void **)(overlayData + 0xD4));
        *(void **)(overlayData + 0xD4) = NULL;
        *(void **)(overlayData + 0xD8) = NULL;
    }
    
    // Cleanup BG buffers
    ov46_02259494(overlayData + 0x40);
    ov46_02259494(overlayData + 0x70);
    ov46_02259494(overlayData + 0xA0);
    ov46_02259494(overlayData + 0x10);
    ov46_022592B8(overlayData);
    
    // Clear task data
    *(void **)(overlayData + 0xD8) = NULL;
    
    // Free heap
    Heap_Free(overlayData);
    Heap_Destroy(0x77);
    
    // Disable display
    *(vu8 *)(0x4000060) = 0;
    GfGfx_SwapDisplay();
}

// ov46_02258CB4 - Assembly: asm/overlay_46.s
// Mystery Gift initialization 2 (different screen/mode)
// Parameters: param1, param2
// Returns: void
void ov46_02258CB4(void *param1, void *param2) {
    // Similar to ov46_02258800 but for different screen
    void *heap = Heap_Create(3, 0x77 << 16);
    void *overlayData = OverlayManager_CreateAndGetData(0x404, 0x77);
    memset(overlayData, 0, 0x404);
    
    void *args = OverlayManager_GetArgs();
    *(void **)overlayData = *(void **)args;
    
    ov46_02258F78(overlayData, 0x77);
    
    // Setup windows (simplified - same pattern as above)
    
    // Set VBlank callback
    Main_SetVBlankIntrCB((void *)ov46_02258F70, overlayData);
    HBlankInterruptDisable();
    
    // Enable display
    *(vu8 *)(0x4000060) = 1;
    GfGfx_SwapDisplay();
}

// ov46_02258DA8 - Assembly: asm/overlay_46.s
// Main task handler with 11-case jump table (Mystery Gift download)
// Parameters: taskPtr, state
// Returns: void
void ov46_02258DA8(void *taskPtr, u16 state) {
    void *overlayData = OverlayManager_GetData();
    void *args = OverlayManager_GetArgs();
    void *argsPtr = args;
    
    // Jump table switch on state (0-10)
    switch (state) {
        case 0:
            // Start fade
            BeginNormalPaletteFade(6, 1, 0x77, 0xFFFF, 0);
            *(u16 *)taskPtr = *(u16 *)taskPtr + 1;
            break;
            
        case 1:
            // Wait for fade
            if (IsPaletteFadeFinished()) {
                *(u16 *)taskPtr = 2;
            }
            break;
            
        case 2:
            // Setup window and check state
            ov46_02259374(overlayData + 0x40, 0x1A);
            if (sub_020393C8() != 0 || sub_020397FC() != 0) {
                ov46_02259450(overlayData + 0x40);
                *(u16 *)taskPtr = 5;
            } else {
                ov46_02259450(overlayData + 0x40);
                *(u16 *)taskPtr = 3;
            }
            break;
            
        case 3:
            // Process something
            ov45_0222ED7C();
            *(u32 *)(overlayData + 8) = 0xE1 << 2;
            *(u16 *)taskPtr = 4;
            break;
            
        case 4:
            // Decrement and check
            *(u32 *)(overlayData + 8) = *(u32 *)(overlayData + 8) - 1;
            ov45_0222EDA8();
            if (*(u32 *)(overlayData + 8) == 0) {
                *(u16 *)taskPtr = 5;
            }
            break;
            
        case 5:
            // Exit
            sub_020397C8();
            *(u16 *)taskPtr = 6;
            break;
            
        case 6:
            // Check and wait
            if (sub_02037D78() != 0) {
                return;
            }
            ov46_02259474(overlayData + 0x70);
            ov45_0222B270(*(void **)(argsPtr + 4));
            *(u16 *)taskPtr = 7;
            break;
            
        case 7:
            // Display message
            ov46_02259374(overlayData + 0x40, 0x1B);
            *(u32 *)(overlayData + 8) = 0x5A;
            *(u16 *)taskPtr = 8;
            break;
            
        case 8:
            // Countdown
            *(u32 *)(overlayData + 8) = *(u32 *)(overlayData + 8) - 1;
            if (*(u32 *)(overlayData + 8) == 0) {
                *(u16 *)taskPtr = 9;
            }
            break;
            
        case 9:
            // Fade out
            BeginNormalPaletteFade(6, 1, 0x77, 0, 0);
            *(u16 *)taskPtr = *(u16 *)taskPtr + 1;
            break;
            
        case 10:
            // Exit when fade done
            if (IsPaletteFadeFinished()) {
                ov46_02259474(overlayData + 0x40);
                return;
            }
            break;
            
        default:
            break;
    }
}

// ov46_02258EFC - Assembly: asm/overlay_46.s
// Mystery Gift cleanup 2
// Parameters: taskPtr
// Returns: void
void ov46_02258EFC(void *taskPtr) {
    void *overlayData = OverlayManager_GetData();
    
    Main_SetVBlankIntrCB(NULL, NULL);
    HBlankInterruptDisable();
    
    if (*(void **)(overlayData + 0xD4) != NULL) {
        SysTask_Destroy(*(void **)(overlayData + 0xD4));
        *(void **)(overlayData + 0xD4) = NULL;
        *(void **)(overlayData + 0xD8) = NULL;
    }
    
    ov46_02259494(overlayData + 0x40);
    ov46_02259494(overlayData + 0xA0);
    ov46_02259494(overlayData + 0x10);
    ov46_022592B8(overlayData);
    
    *(void **)(overlayData + 0xD8) = NULL;
    Heap_Free(overlayData);
    Heap_Destroy(0x77);
    
    *(vu8 *)(0x4000060) = 0;
    GfGfx_SwapDisplay();
}

// ov46_02258F70 - Assembly: asm/overlay_46.s
// VBlank callback - calls BG update
// Returns: void
void ov46_02258F70(void) {
    void *data = OverlayManager_GetData();
    void *bgData = *(void **)(data + 0xC);
    DoScheduledBgGpuUpdates(bgData);
}

// ov46_02258F78 - Assembly: asm/overlay_46.s
// BG initialization for Mystery Gift UI
// Parameters: param1, bgConfig
// Returns: void
void ov46_02258F78(void *param1, void *bgConfig) {
    // Clear hardware registers
    *(vu16 *)0x04000050 = 0;
    *(vu16 *)0x04001050 = 0;
    
    // Set up GFX banks
    GfGfx_SetBanks((void *)ov46_022595B4);
    
    // Set mask color
    BG_SetMaskColor(0);
    
    // Set screen modes
    SetBothScreensModesAndDisable((void *)ov46_022595A4);
    
    // Allocate BG config
    void *bgPtr = BgConfig_Alloc(bgConfig);
    *(void **)(param1 + 0xC) = bgPtr;
    
    // Initialize BGs from template
    for (int i = 0; i < 4; i++) {
        void *template = (void *)ov46_022595DC + (i * 0x1C);
        u32 value = ov46_02259598[i];
        InitBgFromTemplate(bgPtr, value & 0xFF, template, (value >> 8) & 0xFF, 0);
        
        // Clear BG
        u32 bgId = value & 0xFF;
        BG_ClearCharDataRange(bgId, 0x20, 0);
        BgClearTilemapBufferAndCommit(bgPtr, bgId);
    }
    
    // Load fonts
    void *options = Save_PlayerData_GetOptionsAddr();
    u8 frame = Options_GetFrame(options);
    
    LoadFontPal0(0, 5, frame, bgConfig);
    LoadFontPal1(0, 0x12, 0, bgConfig);
    
    // Load user frame graphics
    LoadUserFrameGfx1(0, 1, 0x1F, 0xC, frame, bgConfig);
    LoadUserFrameGfx2(1, frame, 0xB, bgConfig);
    
    // Load more palettes
    GfGfxLoader_GXLoadPal(0x58, 3, 0, bgConfig);
    GfGfxLoader_GXLoadPal(0x58, 3, 4, 0, bgConfig);
    
    // Load character and screen data
    GfGfxLoader_LoadCharData(0x58, 2, 0, bgConfig);
    GfGfxLoader_LoadCharData(0x58, 0xB, 4, bgConfig);
    GfGfxLoader_LoadScrnData(0x58, 6, 0, bgConfig);
    GfGfxLoader_LoadScrnData(0x58, 0xC, 4, bgConfig);
    
    // Enable engine A
    GfGfx_EngineATogglePlanes(0x10, 1);
    
    // Open NARC and load palette
    void *narc = NARC_New(0x58, bgConfig);
    *(void **)(param1 + 0x2C) = narc;
    
    // Clear some memory
    MI_CpuFill8(param1 + 0xD4, 0, 0x330);
    
    // Get and copy palette data
    void *palData = GfGfxLoader_GetPlttDataFromOpenNarc(narc, 5, param1 + 0x38, bgConfig);
    MIi_CpuCopy16(palData + 0xC, param1 + 0xDC, 0x80);
    MIi_CpuCopy16(palData + 0x15C, param1 + 0x15C, 0x80);
    Heap_Free(palData);
    
    // Create VBlank task
    void *vblankTask = SysTask_CreateOnVBlankQueue((void *)ov46_02259210, param1, 0x14);
    *(void **)(param1 + 0xD4) = vblankTask;
    
    NARC_Delete(narc);
}

// ov46_02259210 - Assembly: asm/overlay_46.s
// VBlank handler - palette updates
// Parameters: taskPtr
// Returns: void
void ov46_02259210(void *taskPtr) {
    // Check and update palette-related fields
    u8 *ptr = (u8 *)taskPtr;
    
    if (*(u8 *)(ptr + 0x32B) != 0) {
        *(u8 *)(ptr + 0x32B) ^= 1;
        
        if ((*(u8 *)(ptr + 0x32B) & 1) == 0) {
            // Load BG palette
            s16 palIdx = *(s16 *)(ptr + 0x328);
            if (palIdx > 0) {
                void *palPtr = ptr + 0x88 + (palIdx << 5);
                GX_LoadBGPltt(palPtr, 0, 0x20);
            }
        }
    }
    
    // Handle palette switching
    u32 *palPtr1 = (u32 *)(ptr + 0x324);
    if (*palPtr1 == 0 || *palPtr1 == 2) {
        s16 idx = *(s16 *)(ptr + 0x320);
        void *dest = ptr + 0x88 + (idx << 5);
        GXS_LoadBGPltt(dest, 0, 0x32);
    }
    
    // Update some counter
    if (*(s8 *)(ptr + 0x32A) == 0) {
        s16 val = *(s16 *)(ptr + 0x328);
        val++;
        *(s16 *)(ptr + 0x328) = val;
        
        if (val >= 0x15) {
            *(s16 *)(ptr + 0x328) = 0x13;
            *(u8 *)(ptr + 0x32A) ^= 1;
        }
    } else {
        s16 val = *(s16 *)(ptr + 0x328);
        val--;
        *(s16 *)(ptr + 0x328) = val;
        
        if (val < 0) {
            *(s16 *)(ptr + 0x328) = 1;
            *(u8 *)(ptr + 0x32A) ^= 1;
        }
    }
}

// ov46_022592B8 - Assembly: asm/overlay_46.s
// Cleanup BG buffers
// Parameters: param1
// Returns: void
void ov46_022592B8(void *param1) {
    void *bgConfig = *(void **)(param1 + 0xC);
    
    for (int i = 0; i < 4; i++) {
        u32 bgId = ov46_02259598[i] & 0xFF;
        FreeBgTilemapBuffer(bgId);
    }
    
    Heap_Free(bgConfig);
}

// ov46_022592E0 - Assembly: asm/overlay_46.s
// BG GPU update scheduler
// Parameters: param1
// Returns: void
void ov46_022592E0(void *param1) {
    void *bgData = *(void **)((u8 *)param1 + 0xC);
    DoScheduledBgGpuUpdates(bgData);
}

// ov46_022592EC - Assembly: asm/overlay_46.s
// Message window setup
// Parameters: param1, msgId, param3, param4, param5, param6, param7, param8
// Returns: void
void ov46_022592EC(void *param1, int msgId, int param3, int param4, int param5, int param6, int param7, int param8) {
    // Create message format
    void *msgFmt = MessageFormat_New(param1);
    *(void **)param1 = msgFmt;
    
    // Create message data from NARC
    void *msgData = NewMsgDataFromNarc(0, 0x1B, param1);
    *(void **)(param1 + 4) = msgData;
    
    // Create strings
    *(void **)(param1 + 0x18) = String_New(0x100, 1);
    *(void **)(param1 + 0x1C) = String_New(0x100, 1);
    
    // Get text delay from options
    void *options = Save_PlayerData_GetOptionsAddr();
    *(u8 *)(param1 + 0x28) = Options_GetTextFrameDelay(options);
    
    // Clear field
    *(u32 *)(param1 + 0x2C) = 0;
    
    // Store parameters
    *(u8 *)(param1 + 8) = (u8)param3;
    *(u8 *)(param1 + 9) = (u8)param4;
    *(u8 *)(param1 + 10) = (u8)param5;
    *(u8 *)(param1 + 11) = (u8)param6;
    *(u32 *)(param1 + 0x20) = param8;
    
    // Add window
    AddWindowParameterized(param1 + 8, param1, 1, param7, (param5 << 16) >> 16);
}

// ov46_02259374 - Assembly: asm/overlay_46.s
// Display message in window
// Parameters: msgStruct, msgId
// Returns: void
void ov46_02259374(void *msgStruct, int msgId) {
    // Check if text printer is active
    u32 printer = *(u32 *)(msgStruct + 0x2C);
    if ((printer >> 24) != 0) {
        RemoveTextPrinter(printer & 0xFFFFFF);
    }
    
    // Clear window
    FillWindowPixelBuffer(msgStruct + 8, 0xF);
    
    // Read message
    ReadMsgDataIntoString(*(void **)(msgStruct + 4), msgId, *(void **)(msgStruct + 0x1C));
    
    // Expand placeholders
    StringExpandPlaceholders(*(void **)msgStruct, *(void **)(msgStruct + 0x18), *(void **)(msgStruct + 0x1C));
    
    // Add text printer
    AddTextPrinterParameterized(msgStruct + 8, 1, *(void **)(msgStruct + 0x18), 0xFF, 0, 0);
    
    // Draw frame
    if (*(u32 *)(msgStruct + 0x20) == 0) {
        DrawFrameAndWindow1(msgStruct + 8, 1, 0x1F, 0xC);
    } else {
        DrawFrameAndWindow2(msgStruct + 8, 1, 1, 0xB);
    }
    
    // Schedule copy to VRAM
    ScheduleWindowCopyToVram(msgStruct + 8);
}

// ov46_022593F8 - Assembly: asm/overlay_46.s
// Clear message from window
// Parameters: msgStruct
// Returns: void
void ov46_022593F8(void *msgStruct) {
    // Check and remove active printer
    u32 printer = *(u32 *)(msgStruct + 0x2C);
    if ((printer >> 24) != 0) {
        RemoveTextPrinter(printer & 0xFFFFFF);
    }
    
    // Check and remove waiting icon
    if (*(u32 *)(msgStruct + 0x20) != 0) {
        if (*(u32 *)(msgStruct + 0x24) != 0) {
            ov46_02259474(msgStruct);
        }
    }
    
    // Clear frame
    ClearFrameAndWindow2(msgStruct + 8, 1);
    ClearWindowTilemapAndScheduleTransfer(msgStruct + 8);
}

// ov46_02259450 - Assembly: asm/overlay_46.s
// Show waiting icon
// Parameters: msgStruct
// Returns: void
void ov46_02259450(void *msgStruct) {
    if (*(u32 *)(msgStruct + 0x20) == 1) {
        if (*(u32 *)(msgStruct + 0x24) == 0) {
            GF_AssertFail();
        }
        *(void **)(msgStruct + 0x24) = WaitingIcon_New(msgStruct + 8, 1);
    }
}

// ov46_02259474 - Assembly: asm/overlay_46.s
// Remove waiting icon
// Parameters: msgStruct
// Returns: void
void ov46_02259474(void *msgStruct) {
    if (*(u32 *)(msgStruct + 0x20) == 1) {
        if (*(u32 *)(msgStruct + 0x24) != 0) {
            sub_0200F450(*(void **)(msgStruct + 0x24));
            *(u32 *)(msgStruct + 0x24) = 0;
        }
    }
}

// ov46_02259494 - Assembly: asm/overlay_46.s
// Cleanup message windows and strings
// Parameters: msgStruct
// Returns: void
void ov46_02259494(void *msgStruct) {
    // Remove text printer if active
    u32 printer = *(u32 *)(msgStruct + 0x2C);
    if ((printer >> 24) != 0) {
        RemoveTextPrinter(printer & 0xFFFFFF);
    }
    
    // Remove waiting icon if present
    if (*(u32 *)(msgStruct + 0x24) != 0) {
        ov46_02259474(msgStruct);
    }
    
    // Remove window
    RemoveWindow(msgStruct + 8);
    
    // Delete strings
    String_Delete(*(void **)(msgStruct + 0x1C));
    String_Delete(*(void **)(msgStruct + 0x18));
    
    // Destroy message data
    DestroyMsgData(*(void **)(msgStruct + 4));
    MessageFormat_Delete(*(void **)msgStruct);
}

// ov46_022594E0 - Assembly: asm/overlay_46.s
// Display centered message
// Parameters: msgStruct, msgId
// Returns: void
void ov46_022594E0(void *msgStruct, int msgId) {
    // Clear window
    FillWindowPixelBuffer(msgStruct + 8, 0);
    
    // Read message
    ReadMsgDataIntoString(*(void **)(msgStruct + 4), msgId, *(void **)(msgStruct + 0x1C));
    
    // Expand placeholders
    StringExpandPlaceholders(*(void **)msgStruct, *(void **)(msgStruct + 0x18), *(void **)(msgStruct + 0x1C));
    
    // Get centered X position
    int x = FontID_String_GetCenterAlignmentX(*(void **)(msgStruct + 0x18), 0, 0xB0);
    
    // Add text printer with color
    AddTextPrinterParameterizedWithColor(msgStruct + 8, 1, *(void **)(msgStruct + 0x18), 0, 0xF0E00, 0, x);
}

// ov46_02259534 - Assembly: asm/overlay_46.s
// Buffer integer as string
// Parameters: param1, value
// Returns: void
void ov46_02259534(void *param1, int value) {
    BufferIntegerAsString(*(void **)param1, 2, 1, 5);
}

// ov46_02259550 - Assembly: asm/overlay_46.s
// Create yes/no prompt
// Parameters: msgStruct, promptId
// Returns: void
void ov46_02259550(void *msgStruct, int promptId) {
    void *prompt = YesNoPrompt_Create(0x77, msgStruct);
    
    // Setup prompt parameters
    YesNoPrompt_InitFromTemplate(prompt, 1, 0xD, msgStruct, promptId, 0x19, 0x0A, 0, 0xF0, 0);
}

// Data tables

// BG configuration table
const u32 ov46_02259598[4] = {
    0x00000000,
    0x00010000,
    0x00040000,
    0x00000000
};

// Screen mode data
const u8 ov46_022595A4[12] = {
    0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00
};

// Bank configuration
const u8 ov46_022595B4[32] = {
    0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

// BG template data
const u8 ov46_022595DC[64] = {
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x01, 0x00, 0x1D, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x1C, 0x04,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x1D, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
