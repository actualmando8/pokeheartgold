#include "overlay_01_021F467C.h"

#include "gx.h"
#include "heap.h"
#include "MI/color.h"
#include "overlay_01_021F4464.h"

// External function declarations
extern void GfGfx_EngineATogglePlanes(int plane, int enable);
extern void GX_ResetBankForBG(void);
extern void GX_SetBankForBG(int bank);
extern void MIi_CpuClear32(int value, void *dest, u32 size);
extern void *Heap_Alloc(int heapId, u32 size);
extern void Heap_Free(void *ptr);
extern void Heap_FreeExplicit(int heapId, void *ptr);

// Data table at ov01_02206B94 (0x02206B94)
// Contains 44 bytes of initialization data
const u8 ov01_02206B94_data[44] = {
    // First 12 bytes (3 u32 values)
    0x0A, 0x00, 0x00, 0x00,  // 0x0A
    0x00, 0x00, 0x00, 0x00,  // 0x00
    0x01, 0x00, 0x00, 0x00,  // 0x01

    // Next 16 bytes (4 u32 values)
    0x03, 0x00, 0x00, 0x00,  // 0x03
    0x02, 0x00, 0x00, 0x00,  // 0x02
    0x00, 0x00, 0x00, 0x00,  // 0x00
    0x00, 0x00, 0x00, 0x00,  // 0x00

    // Last 16 bytes (4 u32 values)
    0x02, 0x00, 0x00, 0x00,  // 0x02
    0x00, 0x00, 0x00, 0x00,  // 0x00
    0x00, 0x00, 0x00, 0x00,  // 0x00
    0x04, 0x00, 0x00, 0x00   // 0x04
};

// ov01_021F467C - Assembly: asm/overlay_01_021F467C.s @ 0x021F467C
// Graphics initialization function
// Parameters: param1 - unknown, param2 - unknown
// Returns: void* - pointer to initialized structure
void *ov01_021F467C(void *param1, void *param2) {
    void *workBuffer;
    void *structPtr;
    u32 localData[5];

    // Toggle graphics planes (disable planes 2, 4, 8)
    GfGfx_EngineATogglePlanes(2, 0);
    GfGfx_EngineATogglePlanes(4, 0);
    GfGfx_EngineATogglePlanes(8, 0);

    // Reset BG banks
    GX_ResetBankForBG();

    // Allocate work buffer (4 bytes)
    workBuffer = Heap_Alloc(2, 4);

    // Clear the work buffer to zero
    MIi_CpuClear32(0, workBuffer, 4);

    // Copy data table to local stack (44 bytes)
    // 5 iterations of 8 bytes = 40 bytes, then 4 more bytes = 44 total
    // But actually it's loading 2 words (8 bytes) at a time for 5 iterations = 40
    // Then 1 word (4 bytes) = 44 total
    {
        int i;
        const u8 *src;
        u8 *dst;
        src = ov01_02206B94_data;
        dst = (u8 *)localData;
        for (i = 0; i < 5; i++) {
            // Copy 8 bytes
            dst[0] = src[0];
            dst[1] = src[1];
            dst[2] = src[2];
            dst[3] = src[3];
            dst[4] = src[4];
            dst[5] = src[5];
            dst[6] = src[6];
            dst[7] = src[7];
            src += 8;
            dst += 8;
        }
        // Copy remaining 4 bytes
        dst[0] = src[0];
        dst[1] = src[1];
        dst[2] = src[2];
        dst[3] = src[3];
    }

    // Store parameters
    localData[4] = (u32)param1;      // offset 0x20
    localData[5] = (u32)param2;      // offset 0x24 (but only 6 u32s on stack = 0x18 bytes...)

    // Call initialization function
    structPtr = ov01_021F4464((void *)localData);

    // Store result and return
    *(void **)workBuffer = structPtr;

    return workBuffer;
}

// ov01_021F46DC - Assembly: asm/overlay_01_021F467C.s @ 0x021F46DC
// Graphics cleanup function
// Parameters: structPtr - pointer to structure to clean up
// Returns: void
void ov01_021F46DC(void *structPtr) {
    // Call initialization function with specific parameters
    // From assembly: mov r1, #1; ldr r0, [r4]; mov r2, #0; add r3, r1, #0
    // This sets param1=1, param2=0 (from the struct at r4)
    ov01_021F44B4(structPtr, 1, 0, 1);

    // Set BG bank to 4
    GX_SetBankForBG(4);

    // Toggle plane
    GfGfx_EngineATogglePlanes(0xe, 1);

    // Free the work buffer
    Heap_FreeExplicit(2, structPtr);
}
