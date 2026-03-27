#include "overlay_118.h"

// ov118_0225F020 - Assembly: asm/overlay_118.s
// Main task handler with 9-case jump table (Pokemon summary screen)
// Parameters: param1, param2
// Returns: void
void ov118_0225F020(void *param1, void *param2) {
    u32 state = *(u32 *)param1;
    void *dataPtr = *(void **)((u8 *)param2 + 0xC);
    void *extraData = param2;
    
    switch (state) {
        case 0:
            // Allocate memory
            dataPtr = Heap_Alloc(0x20, 0x20);
            memset(dataPtr, 0, 0x20);
            
            // Enable display planes
            GfGfx_EngineATogglePlanes(2, 1);
            GfGfx_EngineATogglePlanes(8, 1);
            
            // Configure display registers
            *(vu32 *)(0x4000010) = (*(vu32 *)(0x4000010) & 0xFFFFE0FF) | (0x15 << 8);
            
            // Get BG config
            void *bgConfig = *(void **)((u8 *)param2 + 0x10);
            void *bgData = *(void **)((u8 *)bgConfig + 8);
            
            // Free and reinit BG 1
            FreeBgTilemapBuffer(bgData);
            InitBgFromTemplate(bgData, 1, (void *)ov118_0225F270, 1, 0);
            BgClearTilemapBufferAndCommit(bgData);
            
            // Free and reinit BG 3
            bgData = *(void **)((u8 *)bgConfig + 8);
            FreeBgTilemapBuffer(bgData);
            InitBgFromTemplate(bgData, 3, (void *)ov118_0225F28C, 3, 0);
            BgClearTilemapBufferAndCommit(bgData);
            
            // Setup BG positions
            ov01_021F0500(bgConfig, 1, 0xA8, 0xA7, 0xA6, 3);
            
            // Set BG priorities
            SetBgPriority(2, 0);
            SetBgPriority(8, 0);
            
            // Set mask color
            BG_SetMaskColor(1);
            
            // Position BGs
            bgData = *(void **)((u8 *)bgConfig + 8);
            BgSetPosTextAndCommit(bgData, 1, 0, 0, 0x80);
            
            bgData = *(void **)((u8 *)bgConfig + 8);
            BgSetPosTextAndCommit(bgData, 3, 0, 0, 0);
            
            // Enable plane
            GfGfx_EngineASetPlanes(0x15);
            
            *(u32 *)param1 = 1;
            break;
            
        case 1:
            // Initialize graphics
            ov01_021EFCF8(2, 0x1, param2 + 4, dataPtr);
            *(u32 *)param1 = 2;
            break;
            
        case 2:
            // Check condition
            if (*(u32 *)((u8 *)param2 + 4) != 0) {
                *(u32 *)param1 = 3;
            }
            break;
            
        case 3:
            // Animate camera/scroll
            ov01_021EFEC8(dataPtr, 0x12, 2, 5);
            
            // Toggle planes
            GfGfx_EngineATogglePlanes(2, 1);
            GfGfx_EngineATogglePlanes(8, 1);
            
            *(u32 *)((u8 *)dataPtr + 0x1C) = 1;
            *(u32 *)param1 = 4;
            break;
            
        case 4:
            // Wait for animation
            if (ov01_021EFF28(dataPtr) != 0) {
                *(u32 *)param1 = 5;
            }
            break;
            
        case 5:
            // Scroll BG
            void *bgConfig = *(void **)((u8 *)param2 + 0x10);
            void *bgData = *(void **)((u8 *)bgConfig + 8);
            
            BgSetPosTextAndCommit(bgData, 1, 0, 0, 0);
            BgSetPosTextAndCommit(bgData, 3, 0, 0, 0);
            
            *(u32 *)((u8 *)dataPtr + 0x1C) = 0;
            
            // Increment counter
            *(u32 *)((u8 *)dataPtr + 0x18) = *(u32 *)((u8 *)dataPtr + 0x18) + 1;
            
            if (*(u32 *)((u8 *)dataPtr + 0x18) > 5) {
                // Toggle plane and reset
                GfGfx_EngineATogglePlanes(1, 1);
                *(u32 *)((u8 *)dataPtr + 0x1C) = 1;
                *(u32 *)((u8 *)dataPtr + 0x18) = 0;
                *(u32 *)param1 = 6;
            }
            break;
            
        case 6:
            // Animate camera/scroll 2
            ov01_021EFEC8(dataPtr, 0x12, 0, 5);
            *(u32 *)((u8 *)dataPtr + 0x1C) = 1;
            *(u32 *)param1 = 7;
            break;
            
        case 7:
            // Wait for animation 2
            if (ov01_021EFF28(dataPtr) != 0) {
                *(u32 *)param1 = 8;
            }
            break;
            
        case 8:
            // Exit
            *(u32 *)((u8 *)dataPtr + 0x1C) = 0;
            sub_0200FC20();
            
            // Signal completion
            if (*(u32 *)((u8 *)param2 + 0x14) != 0) {
                *(u32 *)*((u8 *)param2 + 0x14) = 1;
            }
            
            // Cleanup
            ov01_021EFCDC(param2, extraData);
            break;
            
        default:
            // Update BG scroll positions
            if (*(u32 *)((u8 *)dataPtr + 0x1C) != 0) {
                void *bgConfig = *(void **)((u8 *)param2 + 0x10);
                void *bgData = *(void **)((u8 *)bgConfig + 8);
                u32 scrollY = *(u32 *)dataPtr;
                
                ScheduleSetBgPosText(bgData, 1, 0, scrollY >> 12);
                ScheduleSetBgPosText(bgData, 3, 0, 0);
                
                u32 scrollY2 = *(u32 *)((u8 *)dataPtr);
                ScheduleSetBgPosText(bgData, 3, 3, (3 << 7) - (scrollY2 >> 12));
                ScheduleSetBgPosText(bgData, 3, 3, 0);
            }
            break;
    }
}

// Data tables

// BG template for screen 1
const u8 ov118_0225F270[20] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x03, 0x00, 0x00, 0x01
};

// BG template for screen 3
const u8 ov118_0225F28C[24] = {
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x02, 0x02,
    0x01, 0x00, 0x00, 0x00
};
