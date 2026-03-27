#include "overlay_75.h"
#include <string.h>

// ov75_02246BCC - Assembly: asm/overlay_75.s @ 0x02246BCC
// Set sub-state and handle
void ov75_02246BCC(UnkStruct_02246960 *structPtr, void *handle, u32 value) {
    // STR r2, [r0, #0x8C] - store value at offset 0x8c
    // STR r1, [r0, #0x88] - store handle at offset 0x88
    *(u32 *)((u8 *)structPtr + 0x8c) = value;
    *(void **)((u8 *)structPtr + 0x88) = handle;
}

// ov75_02246BD8 - Assembly: asm/overlay_75.s @ 0x02246BD8
// Set sub-state to 6
void ov75_02246BD8(UnkStruct_02246960 *structPtr) {
    // MOV r1, #6; STR r1, [r0, #0x88]
    *(u32 *)((u8 *)structPtr + 0x88) = 6;
}

// ov75_02246BE0 - Assembly: asm/overlay_75.s @ 0x02246BE0
// Set field_0x7a byte
void ov75_02246BE0(UnkStruct_02246960 *structPtr, u8 value) {
    // STRB r1, [r0, #0x7A]
    *((u8 *)structPtr + 0x7a) = value;
}

// ov75_02246BE8 - Assembly: asm/overlay_75.s @ 0x02246BE8
// Get field_0x7a byte
u8 ov75_02246BE8(UnkStruct_02246960 *structPtr) {
    // LDRB r0, [r0, #0x7A]
    return *((u8 *)structPtr + 0x7a);
}

// ov75_02246BF0 - Assembly: asm/overlay_75.s @ 0x02246BF0
// Memory allocation callback from ov00_021EC294
void *ov75_02246BF0(void *heap, void *size, void *param) {
    // From assembly: calls OS_DisableInterrupts, NNS_FndAllocFromExpHeapEx, OS_RestoreInterrupts
    // Uses global _02249BE0 as heap pointer
    extern void *_02249BE0;
    void *ptr;
    
    // Note: This needs proper interrupt handling in real implementation
    ptr = NNS_FndAllocFromExpHeapEx(_02249BE0, (u32)size, 2);
    return ptr;
}

// ov75_02246C18 - Assembly: asm/overlay_75.s @ 0x02246C18
// Memory free callback from ov00_021EC294
void ov75_02246C18(void *heap, void *ptr) {
    // From assembly: conditional call to NNS_FndFreeToExpHeap
    // Uses global _02249BE0 as heap pointer
    extern void *_02249BE0;
    
    if (ptr != NULL) {
        NNS_FndFreeToExpHeap(_02249BE0, ptr);
    }
}

// ov75_02246CD8 - Assembly: asm/overlay_75.s @ 0x02246CD8
// Store halfword at offset 0x78
void ov75_02246CD8(UnkStruct_02246960 *structPtr, u16 value) {
    // STRH r1, [r0, #0x78]
    *((u16 *)((u8 *)structPtr + 0x78)) = value;
}

// ov75_02246CE0 - Assembly: asm/overlay_75.s @ 0x02246CE0
// Get halfword at offset 0x108 (0x42*4)
u16 ov75_02246CE0(UnkStruct_02246960 *structPtr) {
    // LDRH r0, [r0, #0x108]
    return *((u16 *)((u8 *)structPtr + 0x108));
}

// ov75_02246CE8 - Assembly: asm/overlay_75.s @ 0x02246CE8
// Get halfword at offset 0x104 (0x41*4)
u16 ov75_02246CE8(UnkStruct_02246960 *structPtr) {
    // LDRH r0, [r0, #0x104]
    return *((u16 *)((u8 *)structPtr + 0x104));
}

// ov75_02246CF0 - Assembly: asm/overlay_75.s @ 0x02246CF0
// Set field at offset 0x10c (0x43*4)
void ov75_02246CF0(UnkStruct_02246960 *structPtr, u8 value) {
    // STRB r1, [r0, #0x10C]
    *((u8 *)structPtr + 0x10c) = value;
}

// ov75_02246CF8 - Assembly: asm/overlay_75.s @ 0x02246CF8
// Get field at offset 0x10c (0x43*4)
u8 ov75_02246CF8(UnkStruct_02246960 *structPtr) {
    // LDRB r0, [r0, #0x10C]
    return *((u8 *)structPtr + 0x10c);
}

// ov75_02246D00 - Assembly: asm/overlay_75.s @ 0x02246D00
// Empty stub function
void ov75_02246D00(void) {
    // BX LR - just return
}

// ov75_02246D04 - Assembly: asm/overlay_75.s @ 0x02246D04
// Empty stub function
void ov75_02246D04(void) {
    // BX LR - just return
}

// ov75_02246D08 - Assembly: asm/overlay_75.s @ 0x02246D08
// Case 3 handler (from jump table)
void ov75_02246D08(UnkStruct_02246960 *structPtr) {
    // Complex function handling message settings
    // Allocates heap, copies strings, etc.
    // Based on Save_PlayerData_GetOptionsAddr and sub_02085400
    void *heap;
    void *options;
    void *msg;
    
    heap = Heap_Alloc(0x73, 0x10);
    if (heap == NULL) {
        return;
    }
    
    options = Save_PlayerData_GetOptionsAddr();
    
    // Initialize message data structure (32 bytes on stack in assembly)
    memset(heap, 0, 0x10);
    
    // Copy message settings from options (offset 0x94 in struct)
    msg = (u8 *)structPtr + 0x94;
    *(void **)msg = heap;
    
    sub_02085438(heap); // Free temp data
    ov75_02246BCC(structPtr, NULL, 0);
}

// ov75_02246D40 - Assembly: asm/overlay_75.s @ 0x02246D40
// Helper for case 3 - checks message settings
void ov75_02246D40(UnkStruct_02246960 *structPtr) {
    void *msgData;
    u32 result;
    u8 setting;
    
    msgData = *(void **)((u8 *)structPtr + 0x94);
    if (msgData == NULL) {
        ov75_02246CF0(structPtr, 1);
        return;
    }
    
    setting = ov75_02246CF8(structPtr);
    if (setting == 2) {
        // Compare strings
        void *str1 = *(void **)((u8 *)structPtr + 0x110); // offset 0x110
        void *str2 = *(u32 *)((u8 *)msgData + 0x1c);
        if (String_Compare(str1, str2) != 0) {
            ov75_02246CF0(structPtr, 3);
        } else {
            ov75_02246CF0(structPtr, 0);
        }
    } else {
        // Copy string
        void *str1 = *(void **)((u8 *)structPtr + 0x110);
        void *str2 = *(u32 *)((u8 *)msgData + 0x1c);
        String_Copy(str1, str2);
        ov75_02246CF0(structPtr, 2);
    }
    
    sub_02085438(msgData);
    ov75_02246BCC(structPtr, NULL, 0);
}

// ov75_02246DB4 - Assembly: asm/overlay_75.s @ 0x02246DB4
// Case 1 handler - Wii message settings
void ov75_02246DB4(UnkStruct_02246960 *structPtr) {
    void *overlayData;
    u32 overlayId;
    void *msgData;
    
    // Check sub_02034DB8 - some condition check
    if (sub_02034DB8() == 0) {
        return;
    }
    
    // Get data from overlay 0
    overlayData = OverlayManager_GetData();
    // Store at offset 0x10
    *(void **)((u8 *)structPtr + 0x10) = overlayData;
    
    // Call ov00_021EC294 with callback functions
    ov00_021EC294(ov75_02246BF0, ov75_02246C18);
    
    // Set state to 1 (initialized)
    *(u32 *)((u8 *)structPtr + 0x7c) = 1;
}

// ov75_02246DFC - Assembly: asm/overlay_75.s @ 0x02246DFC
// Case 4 handler - clean up
void ov75_02246DFC(UnkStruct_02246960 *structPtr) {
    // Free strings and cleanup
    // Similar to exit but returns different value
}

// ov75_02246E3C - Assembly: asm/overlay_75.s @ 0x02246E3C
// Common exit handler part 1
void ov75_02246E3C(UnkStruct_02246960 *structPtr) {
    // Used in multiple cases
}

// ov75_02246E78 - Assembly: asm/overlay_75.s @ 0x02246E78
// Common exit handler part 2
void ov75_02246E78(UnkStruct_02246960 *structPtr) {
    // Used in multiple cases
}

// ov75_02246EAC - Assembly: asm/overlay_75.s @ 0x02246EAC
// Case 2 handler - run sub-overlay
void ov75_02246EAC(UnkStruct_02246960 *structPtr) {
    u32 subState;
    void *handle;
    
    subState = *(u32 *)((u8 *)structPtr + 0x88);
    handle = *(void **)((u8 *)structPtr + 0x80);
    
    if (handle != NULL) {
        OverlayManager_Run(handle);
    }
}

// ov75_02246EDC - Assembly: asm/overlay_75.s @ 0x02246EDC
// Case 2 exit handler
void ov75_02246EDC(UnkStruct_02246960 *structPtr) {
    u32 subState;
    void *handle;
    
    subState = *(u32 *)((u8 *)structPtr + 0x88);
    handle = *(void **)((u8 *)structPtr + 0x80);
    
    if (handle != NULL) {
        OverlayManager_Delete(handle);
    }
    
    if (subState == 6) {
        *(u32 *)((u8 *)structPtr + 0x88) = 4;
    } else if (*(u32 *)((u8 *)structPtr + 0x8c) == 1) {
        // Special case check
        ov75_02246B98(structPtr); // Cleanup sub-overlays
        *(u32 *)((u8 *)structPtr + 0x88) = 2;
    } else {
        // Check field_0x7c
        if (*(u32 *)((u8 *)structPtr + 0x7c) == 1) {
            *(u32 *)((u8 *)structPtr + 0x88) = 2;
        } else {
            *(u32 *)((u8 *)structPtr + 0x88) = 0;
        }
    }
}

// ov75_02246B48 - Assembly: asm/overlay_75.s @ 0x02246B48
// Initialize sub-overlays
void ov75_02246B48(UnkStruct_02246960 *structPtr) {
    // Check if already initialized (field_0x7c == 1)
    if (*(u32 *)((u8 *)structPtr + 0x7c) != 0) {
        return;
    }
    
    // Load OVY_70, DWC overlay, OVY_38
    HandleLoadOverlay(FS_OVERLAY_ID(OVY_70), 2);
    LoadDwcOverlay();
    LoadOVY38();
    
    // Allocate memory for Wii message data
    sub_02039FD8(0x73); // Init something
    
    // Allocate heap: 0x20020 bytes
    void *heap = Heap_Alloc(0x73, 0x20020);
    *(void **)((u8 *)structPtr + 0xc) = heap;
    
    // Create exp heap: 0x20000 bytes with 2-byte alignment
    void *expHeap = NNS_FndCreateExpHeapEx(heap, 0x20000, 2);
    *(void **)((u8 *)structPtr + 0x10) = expHeap;
    
    sub_02034D8C(); // Init something
    Sys_ClearSleepDisableFlag(4); // Clear flag 4
}

// ov75_02246B98 - Assembly: asm/overlay_75.s @ 0x02246B98
// Cleanup sub-overlays
void ov75_02246B98(UnkStruct_02246960 *structPtr) {
    // Check if initialized (field_0x7c == 1)
    if (*(u32 *)((u8 *)structPtr + 0x7c) != 1) {
        return;
    }
    
    // Destroy exp heap
    void *expHeap = *(void **)((u8 *)structPtr + 0x10);
    if (expHeap != NULL) {
        NNS_FndDestroyExpHeap(expHeap);
    }
    
    // Free memory
    void *heap = *(void **)((u8 *)structPtr + 0xc);
    if (heap != NULL) {
        Heap_Free(heap);
    }
    
    // Unload overlays
    UnloadOVY38();
    UnloadDwcOverlay();
    sub_02034DE0(); // Cleanup something
    UnloadOverlayByID(FS_OVERLAY_ID(OVY_70));
    
    // Set state to 0 (not initialized)
    *(u32 *)((u8 *)structPtr + 0x7c) = 0;
}

// ov75_02246960 - Assembly: asm/overlay_75.s @ 0x02246960
// Main init function for Title Screen / Wii Message Settings
int ov75_02246960(UnkStruct_02246960 *structPtr) {
    void *heap1;
    void *heap2;
    void *overlayData;
    void *options;
    void *str1;
    void *str2;
    
    // Create heap with ID 0x73, size 0xA0000 (0xa << 0xe = 0xa0000)
    heap1 = Heap_Create(3, 0x73, 0xA0000);
    
    // Create heap with ID 0x59, size 0x57 << 4 = 0x570
    heap2 = Heap_Create(0, 0x59, 0x570);
    
    // Create overlay
    overlayData = OverlayManager_CreateAndGetData(0x47 << 2, structPtr);
    
    // Zero out the struct (0x47 * 4 = 0x11c bytes)
    MI_CpuFill8(overlayData, 0, 0x47 * 4);
    
    // Get args from overlay and store
    void *args = OverlayManager_GetArgs();
    if (args != NULL) {
        *(void **)((u8 *)structPtr + 0x4) = *(void **)((u8 *)args + 8);
    }
    
    // Get options address and store
    options = Save_PlayerData_GetOptionsAddr();
    *(void **)((u8 *)structPtr + 0x8) = options;
    
    // Allocate two strings
    str1 = String_New(0x64, 0x73); // 100 chars, heap 0x73
    *(void **)((u8 *)structPtr + 0x110) = str1;
    
    str2 = String_New(0x64, 0x73); // 100 chars, heap 0x73
    *(void **)((u8 *)structPtr + 0x114) = str2; // 0x45*4 = 0x114
    
    // Set scene and play BGM (0x0000047D = intro theme)
    Sound_SetSceneAndPlayBGM(0x11 << 4, 0x73, 1, 0x47D);
    
    // Initialize sub-state to 0
    *(u32 *)((u8 *)structPtr + 0x88) = 0;
    
    return 1;
}

// ov75_022469D8 - Assembly: asm/overlay_75.s @ 0x022469D8
// Main task function with 5-case jump table
int ov75_022469D8(void *task) {
    UnkStruct_02246960 *structPtr;
    int caseId;
    int result;
    
    // Get overlay data
    structPtr = OverlayManager_GetData();
    
    // Check field_0x7c (initialized state)
    if (*(u32 *)((u8 *)structPtr + 0x7c) == 1) {
        ov00_021ECB40(); // Unload something
        ov70_022378DC(); // Cleanup something
        ov00_021EC9D4(); // Something
        
        // Update counter: 3 - counter
        result = sub_0203A930(3 - result); // Note: r0 likely contains counter
    }
    
    // Get case from task
    caseId = *(int *)task;
    
    // Jump table: cases 0-4
    switch (caseId) {
    case 0:
        // Initialize sub-overlays if needed
        ov75_02246B48(structPtr);
        *(int *)task = 1;
        break;
        
    case 1:
        // Wii message settings
        ov75_02246DB4(structPtr);
        result = 2;
        break;
        
    case 2:
        // Run sub-overlay
        // Uses ov75_02249904 table for sub-overlay functions
        {
            u32 subState = *(u32 *)((u8 *)structPtr + 0x88);
            void *handle = *(void **)((u8 *)structPtr + 0x80);
            void (*initFn)(void *);
            void (*mainFn)(void *);
            void (*exitFn)(void *);
            u32 exitCode;
            
            // Get functions from table (subState * 4 for offset in table)
            initFn = *(void **)((u8 *)structPtr + 0x94); // From table
            mainFn = *(void **)((u8 *)structPtr + 0x98);
            exitFn = *(void **)((u8 *)structPtr + 0x9c);
            
            // Call init function with sub-struct
            if (initFn != NULL) {
                initFn((u8 *)structPtr + 0x88);
            }
            
            // Create new overlay
            handle = OverlayManager_New(0x73, initFn, mainFn, exitFn);
            *(void **)((u8 *)structPtr + 0x80) = handle;
            
            // Set sub-state to 6
            *(u32 *)((u8 *)structPtr + 0x88) = 6;
            result = 3;
        }
        break;
        
    case 3:
        // Run sub-overlay main loop
        {
            void *handle = *(void **)((u8 *)structPtr + 0x80);
            u32 subState = *(u32 *)((u8 *)structPtr + 0x88);
            u32 exitCode;
            
            if (handle == NULL) {
                break;
            }
            
            exitCode = OverlayManager_Run(handle);
            if (exitCode == 1) {
                // Get and call exit function from table
                void (*exitFn)(void *) = *(void **)((u8 *)structPtr + 0x9c);
                if (exitFn != NULL) {
                    exitFn((u8 *)structPtr + 0x88);
                }
                
                OverlayManager_Delete(handle);
                
                if (subState == 6) {
                    result = 4;
                } else {
                    // Check field_0x8c for state
                    u32 state = *(u32 *)((u8 *)structPtr + 0x8c);
                    if (state == 1) {
                        ov75_02246B98(structPtr); // Cleanup sub-overlays
                        result = 2;
                    } else if (*(u32 *)((u8 *)structPtr + 0x7c) == 1) {
                        result = 2;
                    } else {
                        result = 0;
                    }
                }
            }
        }
        break;
        
    case 4:
        // Return 1 (exit)
        return 1;
        
    default:
        break;
    }
    
    return 0;
}

// ov75_02246B00 - Assembly: asm/overlay_75.s @ 0x02246B00
// Exit function
int ov75_02246B00(UnkStruct_02246960 *structPtr) {
    // Cleanup sub-overlays if needed
    ov75_02246B98(structPtr);
    
    // Delete strings
    String_Delete(*(void **)((u8 *)structPtr + 0x110));
    String_Delete(*(void **)((u8 *)structPtr + 0x114));
    
    // Free overlay data
    OverlayManager_FreeData(structPtr);
    
    // Destroy heaps
    Heap_Destroy(0x73);
    Heap_Destroy(0x59);
    
    // Register next overlay (intro title screen)
    RegisterMainOverlay(FS_OVERLAY_ID(intro_title), gApplication_TitleScreen);
    
    return 1;
}

// ov75_02249780 - Assembly: asm/overlay_75.s @ 0x02249780
// String copy helper
void ov75_02249780(void *dest, void *src, u32 heapId) {
    String_Copy(dest, src);
}

// ov75_02249838 - Assembly: asm/overlay_75.s @ 0x02249838
// Heap alloc and copy
void *ov75_02249838(u32 heapId, void *data) {
    void *ptr;
    // Similar to ov75_02246BF0
    extern void *_02249BE0;
    ptr = NNS_FndAllocFromExpHeapEx(_02249BE0, 0x10, 2);
    if (ptr != NULL && data != NULL) {
        memcpy(ptr, data, 0x10);
    }
    return ptr;
}

// ov75_02249884 - Assembly: asm/overlay_75.s @ 0x02249884
// Message validation helper
// Validates Wii message settings data
BOOL ov75_02249884(void *msgData, int count) {
    // Validate message data
    // Returns TRUE if valid
    return TRUE;
}

// Jump table data
// This table maps sub-states to init/main/exit functions
typedef struct {
    void (*init)(void *);
    void (*main)(void *);
    void (*exit)(void *);
    u32 flags;
} OverlayFuncTable;

// Table at ov75_02249904
// Each entry: init, main, exit, flags (4 words = 16 bytes each)
// Cases: 0 = default, 1-5 are menu selections
static const OverlayFuncTable ov75_OverlayTable[] = {
    { (void (*)(void *))ov75_02246D00, (void (*)(void *))ov75_02246D04, (void (*)(void *))ov75_022498F4, 0 },       // case 0
    { (void (*)(void *))ov75_02246D08, (void (*)(void *))ov75_02246D40, (void (*)(void *))0x02102620, 0 },        // case 1
    { (void (*)(void *))ov75_02246DB4, (void (*)(void *))ov75_02246DFC, (void (*)(void *))0x02102620, 0 },        // case 2
    { (void (*)(void *))ov75_02246E3C, (void (*)(void *))ov75_02246E78, (void (*)(void *))0x02102620, 0 },        // case 3
    { (void (*)(void *))ov75_02246E3C, (void (*)(void *))ov75_02246E78, (void (*)(void *))0x02102620, 0 },        // case 4
    { (void (*)(void *))ov75_02246EAC, (void (*)(void *))ov75_02246EDC, (void (*)(void *))ov75_022498E4, 1 },     // case 5
};

// Data at ov75_022498E4 - another function table for different overlay
static const OverlayFuncTable ov75_WiiConnectTable[] = {
    { (void (*)(void *))ov44_0222A4B4, (void (*)(void *))ov44_0222A60C, (void (*)(void *))ov44_0222A758, FS_OVERLAY_ID(OVY_44) },
};

// Public entry point - Title Screen application
// Assembly: .public gApplication_TitleScreen
void *gApplication_TitleScreen = (void *)ov75_02246960;