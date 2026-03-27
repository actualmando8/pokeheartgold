#include "overlay_104.h"

// ov104_021E5900 - Assembly: asm/overlay_104.s
// Initializes 3D Pokemon view
// Parameters: structPtr - Ov104Struct
// Returns: 1 on success
int ov104_021E5900(Ov104Struct *structPtr) {
    // Create heap with ID 0x95
    void *heap = Heap_Create(0x31, 0x95 << 12);
    
    // Create overlay data
    void *data = OverlayManager_CreateAndGetData(0x17 * 16, 0x95, structPtr);
    
    // Clear data with memset
    memset(data, 0, 0x17 * 16);
    
    // Get arguments
    void *args = OverlayManager_GetArgs(structPtr);
    
    // Copy args (3 bytes + 1 zero byte)
    u8 *dataBytes = (u8 *)data;
    dataBytes[0x59 * 4] = *(u8 *)args;
    dataBytes[0x59 * 4 + 1] = *(u8 *)(args + 1);
    dataBytes[0x59 * 4 + 2] = *(u8 *)(args + 2);
    dataBytes[0x59 * 4 + 3] = 0;
    
    // Create camera
    structPtr->camera = Camera_New(0x95);
    
    // Initialize graphics
    ov104_021E5B88();
    ov104_021E5CC8(structPtr);
    ov104_021E5BEC(structPtr);
    
    // Setup lighting - loop 4 times
    for (int i = 0; i < 4; i++) {
        void *lightData = *(void **)(args + 4);
        NNS_G3dGlbLightVector(i, i * 6, lightData[i * 6], lightData[i * 6 + 2]);
        NNS_G3dGlbLightColor(i, *(u16 *)(lightData + i * 2 + 0x18));
    }
    
    // Setup material colors
    NNS_G3dGlbMaterialColorDiffAmb(*(u16 *)(args + 4 + 0x20), 
                                    *(u16 *)(args + 4 + 0x22),
                                    *(u32 *)(args + 4 + 0x28));
    
    NNS_G3dGlbMaterialColorSpecEmi(*(u16 *)(args + 4 + 0x24),
                                    *(u16 *)(args + 4 + 0x26),
                                    *(u32 *)(args + 4 + 0x2c));
    
    // Set polygon attributes
    NNS_G3dGlbPolygonAttr(*(u32 *)(args + 4 + 0x40),
                         *(u32 *)(args + 4 + 0x44),
                         *(u32 *)(args + 4 + 0x30),
                         *(u32 *)(args + 4 + 0x34),
                         *(u32 *)(args + 4 + 0x38),
                         *(u32 *)(args + 4 + 0x3c));
    
    // Start palette fade
    BeginNormalPaletteFade(6, 1, 0x95, 0, 3);
    
    return 1;
}

// ov104_021E59E4 - Assembly: asm/overlay_104.s
// Main update function for 3D view - handles state machine
// Parameters: structPtr - Ov104Struct, caseId - state
// Returns: void
void ov104_021E59E4(Ov104Struct *structPtr, int caseId) {
    void *data = OverlayManager_GetData();
    
    // Get view mode
    u8 viewMode = *(u8 *)(data + 0x5a * 4);
    
    // Calculate pointer
    void *ptr = data + 4 + viewMode * 0x6c;
    
    switch (caseId) {
        case 0:
            // Initialize state
            if (ov104_021E5E78() == 0) {
                return;
            }
            
            ov104_021E5EB0(viewMode, 0x95);
            structPtr->field_08 += 1;
            break;
            
        case 1:
            // Check palette fade
            if (!IsPaletteFadeFinished()) {
                return;
            }
            
            // Update view mode
            viewMode++;
            *(u8 *)(data + 0x5a * 4) = viewMode;
            *(u8 *)(data + 0x5a * 4 + 1) = viewMode + 1;
            
            if (viewMode >= 3) {
                // Set flag and return
                structPtr->field_08 = 1;
                return;
            }
            
            ov104_021E5BEC(structPtr);
            sub_020880CC(structPtr->field_08, 0x95);
            structPtr->field_08 = 0;
            break;
    }
    
    // Play sound effect based on some condition
    void *field_64 = *(void **)(ptr + 0x64);
    if (field_64 != NULL) {
        u32 currentTime = *(u32 *)field_64;
        u32 endTime = *(u32 *)(field_64 + 8);
        
        if (currentTime < endTime) {
            *(u32 *)field_64 = currentTime + 1;
            
            u8 mode = *(u8 *)(data + 0x5a * 4);
            if (mode == 2) {
                Sound_SetSceneAndPlayBGM(0x44, 1, 0x447);
            }
        }
    }
    
    // Animate - loop 3 times
    for (int i = 0; i < 3; i++) {
        void *animPtr = ptr + i * 0x64;
        u32 startTime = *(u32 *)animPtr;
        u32 duration = *(u32 *)(animPtr + 8);
        
        if (startTime < duration << 12) {
            *(u32 *)animPtr = startTime + (1 << 12);
        }
    }
    
    // Setup 3D rendering
    // Copy matrix data to stack
    u32 matrixData[10];
    matrixData[0] = 0;
    matrixData[1] = 0;
    matrixData[2] = 0;
    matrixData[3] = 0;
    matrixData[4] = 0;
    matrixData[5] = 0;
    matrixData[6] = 0;
    matrixData[7] = 0;
    matrixData[8] = 0;
    matrixData[9] = 0;
    
    // Get animation and render
    Thunk_G3X_Reset();
    Camera_PushLookAtToNNSGlb();
    GF3dRender_DrawModel(structPtr->camera, structPtr, ptr);
    RequestSwap3DBuffers(1);
    
    structPtr->field_08 = 0;
}

// ov104_021E5B14 - Assembly: asm/overlay_104.s
// Cleanup function - frees all resources
// Parameters: structPtr - Ov104Struct
// Returns: 1 on success
int ov104_021E5B14(Ov104Struct *structPtr) {
    void *data = OverlayManager_GetData();
    void *dataPtr = data + 4;
    
    // Free animation objects and resources
    // Loop 3 times for 3 slots
    for (int slot = 0; slot < 3; slot++) {
        void *slotData = dataPtr + slot * 0x6c;
        
        // Free animation objects (loop 3 times)
        for (int i = 0; i < 3; i++) {
            void *animObj = *(void **)(slotData + 0x64 + i * 4);
            if (animObj != NULL) {
                NNS_G3dFreeAnmObj(animObj);
            }
            
            void *res = *(void **)(slotData + 0x5c + i * 4);
            if (res != NULL) {
                Heap_Free(res);
            }
        }
        
        void *slotRes = *(void **)(slotData + 0x58);
        if (slotRes != NULL) {
            Heap_Free(slotRes);
        }
    }
    
    // Delete camera
    Camera_Delete(structPtr->camera);
    
    // Free overlay data
    OverlayManager_FreeData(structPtr);
    
    // Delete 3D render manager
    GF3dRender_DeleteSimpleManager();
    
    // Destroy heap
    Heap_Destroy(0x95);
    
    return 1;
}

// ov104_021E5B88 - Assembly: asm/overlay_104.s
// Graphics initialization - disables planes and sets up display
// Returns: void
void ov104_021E5B88(void) {
    Main_SetVBlankIntrCB(0, 0);
    HBlankInterruptDisable();
    GfGfx_DisableEngineAPlanes();
    GfGfx_DisableEngineBPlanes();
    
    // Modify display registers
    // reg = *(vu32 *)0x04001000; reg &= 0xFFFFE0FF; *(vu32 *)0x04001000 = reg
    
    ov104_021E5CA8();
    GF3dRender_InitSimpleManager(0x95);
    
    // Modify display control
    // reg = *(vu16 *)0x04000060; reg &= 0xFFFFCFFF; reg |= 0x20; *(vu16 *)0x04000060 = reg
    
    G3X_SetEdgeColorTable((void *)0x021E5F14);
    GfGfx_SwapDisplay();
}

// ov104_021E5BEC - Assembly: asm/overlay_104.s
// Camera setup for Pokemon view
// Parameters: structPtr - Ov104Struct
// Returns: void
void ov104_021E5BEC(Ov104Struct *structPtr) {
    // Create camera data on stack
    u32 cameraData[3] = {0};
    
    // Get data pointers
    u8 pkinfo1 = *(u8 *)(structPtr + 0x228);
    u8 pkinfo2 = *(u8 *)(structPtr + 0x229);
    
    // Calculate offsets
    void *modelPtr = (void *)0x021E5FD0 + pkinfo2 * 0x3c;
    void *animPtr = (void *)0x021E5FDC + pkinfo2 * 0x3c;
    u8 animByte = *(u8 *)(animPtr + pkinfo1 * 0xc);
    
    // Setup camera
    cameraData[0] = animByte;
    cameraData[1] = (u32)structPtr->camera;
    cameraData[2] = 0;
    
    Camera_Init_FromTargetDistanceAndAngle(structPtr->camera, 
                                           modelPtr + pkinfo1 * 0xc,
                                           (void *)0x021E5FDE + pkinfo2 * 0xc,
                                           *(u16 *)(animPtr + pkinfo1 * 2));
    
    // Setup camera position
    u8 index = *(u8 *)(structPtr + 0x228);
    Camera_OffsetLookAtPosAndTarget(index * 0xc, 
                                    (void *)0x021E5F88 + index * 0x24,
                                    structPtr->camera);
    
    // Set perspective
    Camera_SetPerspectiveClippingPlane(index * 4,
                                        (void *)0x021E5F24 + index * 4,
                                        (void *)0x021E5F26 + index * 4,
                                        structPtr->camera);
    
    Camera_SetStaticPtr(structPtr->camera);
}

// ov104_021E5CA8 - Assembly: asm/overlay_104.s
// GfGfx bank setup
// Returns: void
void ov104_021E5CA8(void) {
    u32 bankData[10];
    
    // Copy from data at 0x021E5F60
    bankData[0] = 0;
    bankData[1] = 0;
    bankData[2] = 0;
    bankData[3] = 0;
    bankData[4] = 0;
    bankData[5] = 0;
    bankData[6] = 0;
    bankData[7] = 0;
    bankData[8] = 0;
    bankData[9] = 0;
    
    GfGfx_SetBanks(bankData);
}

// ov104_021E5CC8 - Assembly: asm/overlay_104.s
// NARC and resource loading
// Parameters: structPtr - Ov104Struct
// Returns: void
void ov104_021E5CC8(Ov104Struct *structPtr) {
    // Open NARC file
    void *narc = NARC_New(0xEB, 0x95);
    
    // Initialize allocator
    HeapExp_FndInitAllocator(narc + 0x52 * 4, 0x95, 4);
    
    // Check monster index and load resources
    u8 index = *(u8 *)(structPtr + 0x228);
    
    if (index == 0) {
        // Load resources based on sub-index
    }
    
    // More loading logic follows...
}

// ov104_021E5E78 - Assembly: asm/overlay_104.s
// Helper function
// Returns: result
int ov104_021E5E78(void) {
    // Placeholder - requires more analysis
    return 1;
}

// ov104_021E5EB0 - Assembly: asm/overlay_104.s
// Helper function
// Parameters: index, id
// Returns: void
void ov104_021E5EB0(int index, int id) {
    // Placeholder - requires more analysis
}