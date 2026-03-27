#include "overlay_116.h"

// ov116_0225F020 - Assembly: asm/overlay_116.s
// Setup camera for Pokemon 3D view
// Parameters: param1, param2
// Returns: void
void ov116_0225F020(void *param1, void *param2) {
    void *camera = *(void **)((u8 *)param2 + 0x24);
    
    // Set camera perspective angle
    Camera_SetPerspectiveAngle(*(u16 *)((u8 *)param1 + 8), camera);
    
    // Set camera distance
    Camera_SetDistance(*(u32 *)param1, camera);
    
    // Set camera angle/position
    u16 angleX = *(u16 *)((u8 *)param1 + 4);
    u16 angleY = *(u16 *)((u8 *)param1 + 6);
    u16 angleZ = 0;
    
    Camera_SetAnglePos(&angleX, &angleY, &angleZ, camera);
}

// ov116_0225F054 - Assembly: asm/overlay_116.s
// Main task handler with 8-case jump table
// Parameters: param1, param2
// Returns: void
void ov116_0225F054(void *param1, void *param2) {
    u32 state = *(u32 *)param1;
    void *structPtr = param2;
    void *dataPtr = *(void **)((u8 *)structPtr + 0xC);
    
    switch (state) {
        case 0:
            // Allocate memory and initialize
            dataPtr = Heap_Alloc(0x10, 0x10);
            memset(dataPtr, 0, 0x10);
            
            // Disable some display planes
            GfGfx_EngineATogglePlanes(4, 0);
            GfGfx_EngineATogglePlanes(4, 0);
            GfGfx_EngineATogglePlanes(8, 0);
            
            *(void **)((u8 *)structPtr + 0xC) = dataPtr;
            *(u32 *)param1 = *(u32 *)param1 + 1;
            break;
            
        case 1:
            // Initialize graphics
            ov01_021EFCF8(1, 0x10, structPtr + 4, dataPtr);
            *(u32 *)param1 = *(u32 *)param1 + 1;
            break;
            
        case 2:
            // Check condition and continue
            if (*(u32 *)((u8 *)structPtr + 4) != 0) {
                *(u32 *)param1 = *(u32 *)param1 + 1;
            }
            break;
            
        case 3:
            // Setup graphics data
            ov01_021F467C(3, 0xF, structPtr + 4);
            
            // Store some data
            *(u32 *)dataPtr = 0;
            *(u32 *)((u8 *)dataPtr + 8) = 0;
            *(u16 *)((u8 *)dataPtr + 0xC) = ov116_0225F3B6[0];
            
            *(u32 *)param1 = *(u32 *)param1 + 1;
            break;
            
        case 4:
            // Animate camera positions
            *(u32 *)((u8 *)dataPtr + 0xC) = *(u32 *)((u8 *)dataPtr + 0xC) - 1;
            
            if ((*(s32 *)((u8 *)dataPtr + 0xC)) >= 0) {
                // Setup camera for next position
                void *nextPosData = (void *)ov116_0225F3AC + (*(u32 *)((u8 *)dataPtr + 8) * 4);
                ov116_0225F020(structPtr + 0x10, nextPosData);
                
                *(u32 *)((u8 *)dataPtr + 8) = *(u32 *)((u8 *)dataPtr + 8) + 1;
                
                if (*(u32 *)((u8 *)dataPtr + 8) >= 0x10) {
                    *(u32 *)param1 = *(u32 *)param1 + 1;
                } else {
                    // Setup next frame
                    *(u16 *)((u8 *)dataPtr + 0xC) = ov116_0225F3B6[*(u32 *)((u8 *)dataPtr + 8) * 4];
                }
            }
            break;
            
        case 5:
            // Start palette fade
            BeginNormalPaletteFade(10, 1, 4, 0, 0x7FFF);
            *(u32 *)param1 = *(u32 *)param1 + 1;
            break;
            
        case 6:
            // Wait for fade
            if (IsPaletteFadeFinished()) {
                *(u32 *)((u8 *)structPtr + 4) = 0;
                *(u32 *)param1 = *(u32 *)param1 + 1;
            }
            break;
            
        case 7:
            // Cleanup and exit
            sub_0200FBF4(1, 0x7FFF);
            ov01_021F46DC(dataPtr);
            
            // Clear hardware register
            *(vu16 *)0x04000050 = 0;
            
            // Signal completion
            if (*(u32 *)((u8 *)structPtr + 0x14) != 0) {
                *(u32 *)*((u8 *)structPtr + 0x14) = 1;
            }
            
            // Call cleanup
            ov01_021EFCDC(structPtr, param1);
            sub_0200FBF4(1, 0x7FFF);
            break;
    }
}

// ov116_0225F1BC - Assembly: asm/overlay_116.s
// Main task handler 2 with 10-case jump table
// Parameters: param1, param2
// Returns: void
void ov116_0225F1BC(void *param1, void *param2) {
    u32 state = *(u32 *)param1;
    void *camera = *(void **)((u8 *)param2 + 0xC);
    void *extraData = param2;
    
    switch (state) {
        case 0:
            // Allocate memory
            camera = Heap_Alloc(0x38, 0x38);
            memset(camera, 0, 0x38);
            
            // Disable display planes
            GfGfx_EngineATogglePlanes(2, 0);
            GfGfx_EngineATogglePlanes(4, 0);
            GfGfx_EngineATogglePlanes(8, 0);
            
            *(void **)((u8 *)param2 + 0xC) = camera;
            *(u32 *)param1 = *(u32 *)param1 + 1;
            break;
            
        case 1:
            // Initialize
            ov01_021EFCF8(1, 0x10, param2 + 4, camera);
            *(u32 *)param1 = *(u32 *)param1 + 1;
            break;
            
        case 2:
            // Check condition
            if (*(u32 *)((u8 *)param2 + 4) != 0) {
                *(u32 *)param1 = *(u32 *)param1 + 1;
            }
            break;
            
        case 3:
            // Setup camera for Pokemon display
            ov01_021F467C(3, 0xF, param2 + 4);
            *(u32 *)camera = 0;
            
            // Get camera data
            void *cameraData = *(void **)((u8 *)param2 + 0x10);
            void *camPtr = *(void **)((u8 *)cameraData + 0x24);
            
            // Setup camera angle
            u16 *angles = (u16 *)extraData;
            ov01_021EFE34(angles[0], camPtr, *(u32 *)((u8 *)extraData + 4), camera + 8);
            
            *(u32 *)param1 = *(u32 *)param1 + 1;
            break;
            
        case 4:
            // Animate camera rotation
            ov01_021EFE44(camera + 8);
            
            // Check if done
            if (ov01_021EFE44(camera + 8) == 1) {
                *(u32 *)param1 = *(u32 *)param1 + 1;
                *(u8 *)((u8 *)camera + 0x34) = *(u8 *)((u8 *)extraData + 1);
            }
            break;
            
        case 5:
            // Animate camera distance
            *(u8 *)((u8 *)camera + 0x34) = *(u8 *)((u8 *)camera + 0x34) - 1;
            
            if ((*(s8 *)((u8 *)camera + 0x34)) >= 0) {
                void *cameraData = *(void **)((u8 *)param2 + 0x10);
                void *camPtr = *(void **)((u8 *)cameraData + 0x24);
                
                u16 dist = Camera_GetDistance(camPtr);
                ov01_021EFEC8(camera + 0x1C, dist, *(u32 *)((u8 *)extraData + 8), *(u32 *)((u8 *)extraData + 0xC), camPtr);
                
                *(u32 *)param1 = *(u32 *)param1 + 1;
            }
            break;
            
        case 6:
            // Animate camera movement
            ov01_021EFF28(camera + 0x1C);
            
            void *cameraData = *(void **)((u8 *)param2 + 0x10);
            void *camPtr = *(void **)((u8 *)cameraData + 0x24);
            
            u16 newDist = Camera_SetDistance(camPtr, 0);
            
            if (ov01_021EFF28(camera + 0x1C) == 1) {
                *(u32 *)param1 = *(u32 *)param1 + 1;
            }
            break;
            
        case 7:
            // Start palette fade out
            BeginNormalPaletteFade(*(u8 *)((u8 *)extraData + 3), 0, 4, 0, 0x7FFF);
            *(u32 *)param1 = *(u32 *)param1 + 1;
            break;
            
        case 8:
            // Wait for fade
            if (IsPaletteFadeFinished()) {
                *(u32 *)((u8 *)param2 + 4) = 0;
                *(u32 *)param1 = *(u32 *)param1 + 1;
            }
            break;
            
        case 9:
            // Cleanup and exit
            sub_0200FBF4(1, 0x7FFF);
            ov01_021F46DC(camera);
            
            *(vu16 *)0x04000050 = 0;
            
            if (*(u32 *)((u8 *)param2 + 0x14) != 0) {
                *(u32 *)*((u8 *)param2 + 0x14) = 1;
            }
            
            ov01_021EFCDC(param2, extraData);
            sub_0200FBF4(1, 0x7FFF);
            break;
    }
}

// ov116_0225F364 - Assembly: asm/overlay_116.s
// Task wrapper 1
// Parameters: param1, param2
// Returns: void
void ov116_0225F364(void *param1, void *param2) {
    ov116_0225F1BC(param1, param2);
}

// ov116_0225F374 - Assembly: asm/overlay_116.s
// Task wrapper 2
// Parameters: param1, param2
// Returns: void
void ov116_0225F374(void *param1, void *param2) {
    ov116_0225F1BC(param1, param2);
}

// Data tables

// Camera configuration data 1
const u8 ov116_0225F384[20] = {
    0x28, 0x05, 0x08, 0x3C, 0x00, 0x01, 0x00, 0x00,
    0x00, 0xC0, 0xD6, 0xFF, 0x00, 0x08, 0x00, 0x00,
    0x05, 0x00, 0x0D, 0x00
};

// Camera configuration data 2
const u8 ov116_0225F398[20] = {
    0x28, 0x05, 0x08, 0x3C, 0x00, 0x01, 0x00, 0x00,
    0x00, 0xA0, 0xDD, 0xFF, 0x00, 0x08, 0x00, 0x00,
    0x05, 0x00, 0x0D, 0x00
};

// Animation frame data
const u8 ov116_0225F3AC[16] = {
    0xC1, 0xAE, 0x29, 0x00,
    0x02, 0xD6, 0x00, 0x00, 0xC1, 0x05
};

// Frame table
const u8 ov116_0225F3B6[64] = {
    0x04, 0x00, 0xC1, 0xAE, 0x29, 0x00, 0x02, 0xCF,
    0x00, 0xFF, 0x01, 0x06, 0x04, 0x00, 0xC1, 0xAE,
    0x29, 0x00, 0x02, 0xE6, 0x00, 0x10, 0x91, 0x06,
    0x04, 0x00, 0xC1, 0xAE, 0x29, 0x00, 0x02, 0xD6,
    0x00, 0x0A, 0x11, 0x07, 0x03, 0x00, 0xC1, 0xAE,
    0x29, 0x00, 0x02, 0xE1, 0x00, 0xF0, 0x80, 0x07,
    0x03, 0x00, 0xC1, 0xAE, 0x29, 0x00, 0x02, 0xC6,
    0x00, 0x00, 0x51, 0x07, 0x03, 0x00
};
