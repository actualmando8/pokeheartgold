#include "overlay_114.h"

// ov114_0225F020 - Assembly: asm/overlay_114.s
// Main update function with 8-case jump table (cases 0-7)
// Parameters: structPtr - Ov114Struct, caseId - operation type
// Returns: void
void ov114_0225F020(Ov114Struct *structPtr, int caseId) {
    if (caseId > 7) {
        goto exit;
    }
    
    // Get data pointers
    void *statePtr = (void *)structPtr;
    void *spriteData = structPtr->field_0c;
    
    switch (caseId) {
        case 0:
            // Initialize/allocate
            // Allocate 0x69 * 4 bytes
            spriteData = Heap_Alloc(0x69 * 4);
            structPtr->field_0c = spriteData;
            
            // Clear with memset
            memset(spriteData, 0, 0x69 * 4);
            
            // Call ov01_021F05C4
            ov01_021F05C4(spriteData + 0x2c, 1);
            
            // Set up palette and sprite
            ov01_021F0614(spriteData, 0x2c, structPtr->field_20, 0x5a * 4, 0x927C0);
            ov01_021F0718(spriteData, 0x2c, 0x5a * 4, 2, 6, 0x20000);
            
            // Set sprite properties
            Sprite_SetDrawFlag(spriteData + 0x67 * 4, 0);
            Sprite_SetOamMode(spriteData + 0x67 * 4, 1);
            GfGfx_EngineATogglePlanes(0x10, 1);
            
            // Increment state
            structPtr->state += 1;
            break;
            
        case 1:
            // Update case
            ov01_021EFCF8(2, 0x10, structPtr->field_20 - 0x20, structPtr + 4);
            structPtr->state += 1;
            break;
            
        case 2:
            // Check field_04 and increment
            if (structPtr->field_04 != NULL) {
                structPtr->state += 1;
            }
            break;
            
        case 3:
            // Set blend alpha and sprite
            ov01_021EFE34(spriteData, 0, 0x10, 0xc);
            
            u32 spriteCount = *(u32 *)spriteData;
            G2x_SetBlendAlpha_(0x40, 0x10 - spriteCount, 0);
            
            Sprite_SetDrawFlag(spriteData + 0x67 * 4, 1);
            structPtr->state += 1;
            break;
            
        case 4:
            // Handle fade/transition
            ov01_021EFE44(spriteData);
            
            u32 val = *(u32 *)spriteData;
            u16 blendValue = ((0x10 - val) << 8) | val;
            *(vu16 *)0x04000052 = blendValue;
            
            if (ov01_021EFE44(spriteData) == 1) {
                *(vu16 *)0x04000050 = 0;
                Sprite_SetOamMode(spriteData + 0x67 * 4, 0);
            }
            structPtr->state += 1;
            break;
            
        case 5:
            // Setup affine transformation
            ov01_021EFEC8(spriteData + 0x14, 1, 0x19A, 1, 1, 0x1000);
            Sprite_SetAffineOverwriteMode(spriteData + 0x67 * 4, 2);
            
            // Get matrix from sprite
            ov01_021F074C(spriteData + 0x14, structPtr->field_14, structPtr->field_14);
            
            // Copy OAM data
            // stmia r3!, {r0, r1}
            
            Sprite_SetAffineScale(spriteData + 0x67 * 4, 0.0f); // needs actual scale
            
            // Set sprite callback
            void *callback = *(void **)(structPtr->field_10 + 4);
            ov01_021FB514(callback + 0x1c);
            
            // Start palette fade
            BeginNormalPaletteFade(6, 1, 4, 0, 3, 0x10);
            
            structPtr->state += 1;
            break;
            
        case 6:
            // Handle palette fade animation
            ov01_021EFF28(spriteData + 0x14);
            
            ov01_021F074C(spriteData + 0x14, structPtr->field_14, structPtr->field_14);
            
            Sprite_SetAffineScale(spriteData + 0x67 * 4, 0.0f); // needs actual scale
            
            // Check if fade finished
            if (ov01_021EFF28(spriteData + 0x14) == 1) {
                if (IsPaletteFadeFinished() == 1) {
                    structPtr->state += 1;
                }
            }
            break;
            
        case 7:
            // Cleanup
            sub_0200FBF4(1, 0);
            
            void *callback = *(void **)(structPtr->field_10 + 4);
            ov01_021FB4F4(callback + 0x1c);
            
            // Clear flag
            if (structPtr->field_14 != NULL) {
                *(u32 *)structPtr->field_14 = 1;
            }
            
            // Delete sprite
            Sprite_Delete(spriteData + 0x67 * 4);
            
            // Free resources
            ov01_021F06EC(spriteData + 0x2c, 0x5a * 4);
            ov01_021F05F4(spriteData + 0x2c);
            ov01_021EFCDC(structPtr, spriteData);
            
            structPtr->state += 1;
            break;
    }
    
exit:
    // Render sprites if not in state 7
    if (structPtr->state != 7) {
        if (structPtr->field_2c != NULL) {
            SpriteList_RenderAndAnimateSprites(structPtr->field_2c);
        }
    }
}

// ov114_0225F280 - Assembly: asm/overlay_114.s
// Secondary update function with 8-case jump table
// Parameters: structPtr - Ov114Struct, caseId - operation type
// Returns: void
void ov114_0225F280(Ov114Struct *structPtr, int caseId) {
    if (caseId > 7) {
        return;
    }
    
    void *statePtr = (void *)structPtr;
    void *spriteData = structPtr->field_0c;
    
    switch (caseId) {
        case 0:
            // Allocate 0x1B * 0x10 = 0x1B0 bytes
            spriteData = Heap_Alloc(0x1B * 16);
            structPtr->field_0c = spriteData;
            
            // Clear
            memset(spriteData, 0, 0x1B * 16);
            
            // Initialize
            ov01_021F05C4(spriteData, 4, 1);
            
            // Setup sprites
            ov01_021F0614(spriteData, 0x4, structPtr->field_20, 0x4F * 4, 0x927C0);
            
            // Create 4 sprites in a loop
            for (int i = 0; i < 4; i++) {
                ov01_021F0718(spriteData, 0x4F * 4, 2, 6, 0x20000);
                Sprite_SetDrawFlag(spriteData + 0x17 * 0x10 + i * 4, 0);
            }
            
            GfGfx_EngineATogglePlanes(0x10, 1);
            structPtr->state += 1;
            break;
            
        case 1:
            // Update
            ov01_021EFCF8(2, 0x10, structPtr->field_20 - 0x20, structPtr + 4);
            structPtr->state += 1;
            break;
            
        case 2:
            // Check and increment
            if (structPtr->field_04 != NULL) {
                structPtr->state += 1;
            }
            break;
            
        case 3:
            // Create additional sprites
            ov01_021EFEC8(spriteData + 0x180, 6, 0, 4, 0x21000);
            ov01_021EFEC8(spriteData + 0x198, 4, 0, 0xa, 0x10000);
            
            // Set draw flags for 4 sprites
            for (int i = 0; i < 4; i++) {
                Sprite_SetDrawFlag(spriteData + 0x17 * 0x10 + i * 4, 1);
            }
            
            structPtr->state += 1;
            break;
            
        case 4:
            // Animate/matrix setup
            for (int i = 0; i < 2; i++) {
                ov01_021EFF28(spriteData + 0x180 + i * 0x18);
            }
            
            ov01_021F074C(spriteData + 0x180, structPtr->field_14, structPtr->field_14);
            Sprite_SetMatrix(spriteData + 0x17 * 0x10, spriteData + 0x1c);
            
            ov01_021F074C(spriteData + 0x198, structPtr->field_14, structPtr->field_14);
            Sprite_SetMatrix(spriteData + 0x17 * 0x10 + 4, spriteData + 0x1c);
            
            ov01_021F074C(spriteData + 0x174, structPtr->field_14, structPtr->field_14);
            Sprite_SetMatrix(spriteData + 0x17 * 0x10 + 8, spriteData + 0x1c);
            break;
            
        case 5:
            // Continue animation
            // Similar to case 4
            break;
            
        case 6:
            // Fade
            break;
            
        case 7:
            // Cleanup
            break;
    }
}