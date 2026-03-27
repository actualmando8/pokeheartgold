#include "overlay_33.h"

// ov33_0225D520 - Assembly: asm/overlay_33.s
// Mystery Events initialization
// Parameters: param1, param2, param3
// Returns: void
void ov33_0225D520(void *param1, u32 param2, void *param3) {
    // Create heap
    void *heap = Heap_Create(3, 8 << 15);
    
    // Clear hardware register
    *(vu16 *)0x04001050 = 0;
    
    // Create system task
    void *task = CreateSysTaskAndEnvironment(7, (void *)0x0225D5D0, 0x40, 0xa, 8);
    
    // Get task data
    void *taskData = SysTask_GetData(task);
    
    // Initialize task data structure
    *(void **)taskData = param1;
    *(void **)(taskData + 4) = param1;
    *(void **)(taskData + 8) = (void *)param2;
    *(void **)(taskData + 0xc) = param3;
    *(void **)(taskData + 0x14) = task;
    *(void **)(taskData + 0x10) = param3;
    
    // Set some values
    *(u16 *)(taskData + 0x1BA) = *(u8 *)(param3 + 4);
    *(u16 *)(param3 + 6) = 0xFFFF;
    *(u8 *)(param3 + 5) = 0;
    
    // Call initialization functions
    ov33_0225D6F8();
    ov33_0225D720(param1);
    ov33_0225D7D4(taskData);
    ov33_0225D84C(taskData);
    ov33_0225D8D4(taskData);
}

// ov33_0225D5A8 - Assembly: asm/overlay_33.s
// Mystery Events cleanup
// Parameters: taskPtr
// Returns: void
void ov33_0225D5A8(void *taskPtr) {
    void *taskData = SysTask_GetData(taskPtr);
    
    ov33_0225D820(taskData);
    void *field_00 = *(void **)taskData;
    ov33_0225D7B8(field_00);
    
    DestroySysTaskAndEnvironment(taskPtr);
    Heap_Destroy(8);
}

// ov33_0225D5CC - Assembly: asm/overlay_33.s
// Returns 1 (stub function)
// Returns: 1
int ov33_0225D5CC(void) {
    return 1;
}

// ov33_0225D5D0 - Assembly: asm/overlay_33.s
// Main mystery events task handler with 6-case jump table
// Parameters: taskPtr
// Returns: void
void ov33_0225D5D0(void *taskPtr) {
    u16 *ptr = (u16 *)taskPtr;
    u16 eventIndex = *(u16 *)(taskPtr + 0x1BA);
    
    // Decrement event index and multiply for table lookup
    u16 adjustedIndex = eventIndex - 1;
    void *jumpTable = (void *)0x0225DA50;
    void *casePtr = *(void **)((u8 *)jumpTable + adjustedIndex * 4);
    
    // Get offset 0x1B8 value
    u16 state = *(u16 *)(taskPtr + 0x1B8);
    
    // Jump table switch on state (0-5)
    switch (state) {
        case 0:
            // Handle touchscreen press
            // Find rect at touch position
            void *rect = TouchscreenHitbox_FindRectAtTouchNew((void *)taskPtr);
            *(void **)(taskPtr + 0x1BC) = rect;
            
            if (rect == (void *)-1) {
                break;
            }
            
            // Call handler
            ov33_0225D9D4(taskPtr, 1);
            
            // Store result
            u32 offset = 0x1BC - 4;
            *(u16 *)(*(void **)(taskPtr + 0x10) + 6) = *(u16 *)(taskPtr + offset);
            *(u16 *)(taskPtr + offset) = 1;
            break;
            
        case 1:
            // Handle touchscreen hold
            TouchscreenHitbox_FindRectAtTouchHeld((void *)taskPtr);
            *(u16 *)(*(void **)(taskPtr + 0x10) + 6) = 0xFFFF;
            
            void *heldRect = *(void **)(taskPtr + 0x1BC);
            void *currentRect = *(void **)(taskPtr + 0x1B8);
            
            if (heldRect == currentRect) {
                break;
            }
            
            ov33_0225D9D4(taskPtr, 0);
            *(u16 *)(taskPtr + 0x1B8) = 0;
            break;
            
        case 2:
            // Clear BGs 4 and 5
            BgClearTilemapBufferAndCommit(*(void **)taskPtr, 4);
            BgClearTilemapBufferAndCommit(*(void **)taskPtr, 5);
            ScheduleBgTilemapBufferTransfer(*(void **)taskPtr, 4);
            ScheduleBgTilemapBufferTransfer(*(void **)taskPtr, 5);
            *(u16 *)(taskPtr + 0x1B8) = 3;
            break;
            
        case 3:
            // Clear BGs 4 and 5 again
            BgClearTilemapBufferAndCommit(*(void **)taskPtr, 4);
            BgClearTilemapBufferAndCommit(*(void **)taskPtr, 5);
            ScheduleBgTilemapBufferTransfer(*(void **)taskPtr, 4);
            ScheduleBgTilemapBufferTransfer(*(void **)taskPtr, 5);
            *(u16 *)(taskPtr + 0x1B8) = 5;
            break;
            
        case 4:
            // Check L-key and set flag
            // gSystem + 0x40 offset 0x26
            // if (gSystem->someField != 0) gSystem->someFlag = 1
            break;
            
        case 5:
        default:
            break;
    }
}

// ov33_0225D6F8 - Assembly: asm/overlay_33.s
// Graphics setup for mystery events
// Returns: void
void ov33_0225D6F8(void) {
    GX_SetBankForSubBG(0x80);
    GX_SetBankForSubOBJ(0x100);
    
    // Modify display register
    // *(vu32 *)0x04001000 &= 0xFFCFFFEF; then |= 0x10
}

// ov33_0225D720 - Assembly: asm/overlay_33.s
// Initializes background layers for mystery events
// Parameters: bgPtr
// Returns: void
void ov33_0225D720(void *bgPtr) {
    GXS_SetGraphicsMode(0);
    
    // BG 4 setup from data at 0x0225DA68
    // BG 5 setup from data at 0x0225DA84
    // BG 6 setup from data at 0x0225DAA0
    
    InitBgFromTemplate(bgPtr, (void *)0x0225DA68, 4, 0, 0, 8);
    BG_ClearCharDataRange(4, 0x20, 0);
    BgClearTilemapBufferAndCommit(bgPtr, 4);
    
    InitBgFromTemplate(bgPtr, (void *)0x0225DA84, 5, 0, 0, 8);
    BgClearTilemapBufferAndCommit(bgPtr, 5);
    
    InitBgFromTemplate(bgPtr, (void *)0x0225DAA0, 6, 0, 0, 8);
}

// ov33_0225D7B8 - Assembly: asm/overlay_33.s
// Frees background buffers
// Parameters: bgPtr
// Returns: void
void ov33_0225D7B8(void *bgPtr) {
    FreeBgTilemapBuffer(bgPtr, 6);
    FreeBgTilemapBuffer(bgPtr, 5);
    FreeBgTilemapBuffer(bgPtr, 4);
}

// ov33_0225D7D4 - Assembly: asm/overlay_33.s
// Creates windows for event list
// Parameters: bgPtr
// Returns: void
void ov33_0225D7D4(void *bgPtr) {
    u16 eventCount = *(u16 *)(bgPtr + 0x1BA);
    
    if (eventCount == 0) {
        return;
    }
    
    void *windowPtr = bgPtr + 0x18;
    
    for (int i = 0; i < eventCount; i++) {
        void *jumpTable = (void *)0x0225DA50;
        void *windowData = *(void **)((u8 *)jumpTable + (eventCount - 1) * 4);
        
        AddWindow(windowPtr, windowData + i * 8);
        FillWindowPixelBuffer(windowPtr, 0);
    }
}

// ov33_0225D820 - Assembly: asm/overlay_33.s
// Removes windows for event list
// Parameters: bgPtr
// Returns: void
void ov33_0225D820(void *bgPtr) {
    u16 eventCount = *(u16 *)(bgPtr + 0x1BA);
    
    if (eventCount == 0) {
        return;
    }
    
    void *windowPtr = bgPtr + 0x18;
    
    for (int i = 0; i < eventCount; i++) {
        RemoveWindow(windowPtr);
    }
}

// ov33_0225D84C - Assembly: asm/overlay_33.s
// Loads graphics for mystery events
// Parameters: bgPtr
// Returns: void
void ov33_0225D84C(void *bgPtr) {
    // Open NARC file
    void *narc = NARC_New(0xEF, 8);
    
    // Load palette
    GfGfxLoader_GXLoadPalFromOpenNarc(narc, 0xA0, 8, 4, 0);
    
    // Load character data
    GfGfxLoader_LoadCharDataFromOpenNarc(narc, 8, 1, 5, 8);
    
    // Load screen data
    GfGfxLoader_LoadScrnDataFromOpenNarc(narc, 8, 9, 6, 8);
    
    // Get screen data and copy to destination
    void *screenData = GfGfxLoader_GetScrnDataFromOpenNarc(narc, 8, 0xa, 0, bgPtr + 0x38 + 0xc);
    
    // Free resources
    Heap_Free(screenData);
    NARC_Delete(narc);
}

// ov33_0225D8D4 - Assembly: asm/overlay_33.s
// Allocates fonts and message data
// Parameters: bgPtr
// Returns: void
void ov33_0225D8D4(void *bgPtr) {
    // Allocate fonts
    FontID_Alloc(4, 8);
    
    // Create message data from NARC
    void *msgData = NewMsgDataFromNarc(0, 0x1B, 0xBF, 8);
    
    // Process events
    u16 eventCount = *(u16 *)(bgPtr + 0x1BA);
    
    if (eventCount == 0) {
        return;
    }
    
    // Loop through events and process
    void *eventTable = (void *)0x0225DA50;
    void *eventData = eventTable + (eventCount - 1) * 12;
    
    // Continue with more complex logic...
}

// Stub function for ov33_0225D9D4
// This is referenced in the main handler
void ov33_0225D9D4(void *taskPtr, int caseId) {
    // Placeholder - requires more analysis
}