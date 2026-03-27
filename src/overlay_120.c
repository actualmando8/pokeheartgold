#include "overlay_120.h"

#include <string.h>

// ov120_0225F020 - Allocate card structure
// Assembly: asm/overlay_120.s
void *ov120_0225F020(void) {
    void *ptr = Heap_Alloc(0x34);
    memset(ptr, 0, 0x34);
    return ptr;
}

// ov120_0225F038 - Free card structure
// Assembly: asm/overlay_120.s
void ov120_0225F038(void *ptr) {
    Heap_Free(ptr);
}

// ov120_0225F040 - Process card data
// Assembly: asm/overlay_120.s
void ov120_0225F040(void *ptr, u16 param1, u16 param2, u16 param3, u32 param4) {
    // TODO: Implement based on assembly
    (void)ptr;
    (void)param1;
    (void)param2;
    (void)param3;
    (void)param4;
}

// ov120_0225F08C - Check card collision
// Assembly: asm/overlay_120.s
int ov120_0225F08C(void *ptr) {
    // TODO: Implement based on assembly
    (void)ptr;
    return 0;
}

// ov120_0225F0FC - Allocate card table
// Assembly: asm/overlay_120.s
void *ov120_0225F0FC(void) {
    void *ptr = Heap_Alloc(0x114);
    memset(ptr, 0, 0x114);
    return ptr;
}

// ov120_0225F118 - Free card table
// Assembly: asm/overlay_120.s
void ov120_0225F118(void *ptr) {
    Heap_Free(ptr);
}

// ov120_0225F120 - Initialize card table
// Assembly: asm/overlay_120.s
void ov120_0225F120(void *table, u32 gameData, u8 param1, u8 param2) {
    // TODO: Implement based on assembly
    (void)table;
    (void)gameData;
    (void)param1;
    (void)param2;
}

// ov120_0225F14C - Process card game
// Assembly: asm/overlay_120.s
int ov120_0225F14C(void *table) {
    // TODO: Implement based on assembly
    (void)table;
    return 0;
}

// ov120_0225F1E8 - Fisher-Yates shuffle
// Assembly: asm/overlay_120.s
void ov120_0225F1E8(void *array, int count) {
    // TODO: Implement based on assembly
    (void)array;
    (void)count;
}

// ov120_0225F240 - Shuffle helper
// Assembly: asm/overlay_120.s
int ov120_0225F240(void *array) {
    // TODO: Implement based on assembly
    (void)array;
    return 0;
}

// ov120_0225F268 - Allocate card game manager
// Assembly: asm/overlay_120.s
void *ov120_0225F268(void) {
    CardGameManager *manager = (CardGameManager *)Heap_Alloc(sizeof(CardGameManager));
    memset(manager, 0, sizeof(CardGameManager));
    return manager;
}

// ov120_0225F294 - Free card game manager
// Assembly: asm/overlay_120.s
void ov120_0225F294(void *manager) {
    Heap_Free(manager);
}

// ov120_0225F2B8 - Setup card game parameters
// Assembly: asm/overlay_120.s
void ov120_0225F2B8(void *ptr, u8 param1, u8 param2, u8 param3, u32 param4) {
    // TODO: Implement based on assembly
    (void)ptr;
    (void)param1;
    (void)param2;
    (void)param3;
    (void)param4;
}

// ov120_0225F318 - Main game logic
// Assembly: asm/overlay_120.s
int ov120_0225F318(void *ptr) {
    // TODO: Implement based on assembly
    (void)ptr;
    return 0;
}

// ov120_0225F4DC - Secondary game logic
// Assembly: asm/overlay_120.s
int ov120_0225F4DC(void *ptr) {
    // TODO: Implement based on assembly
    (void)ptr;
    return 0;
}

// ov120_0225F6AC - Set card position
// Assembly: asm/overlay_120.s
void ov120_0225F6AC(void *ptr, u16 x, u16 y, u16 param3) {
    // TODO: Implement based on assembly
    (void)ptr;
    (void)x;
    (void)y;
    (void)param3;
}

// ov120_0225F6BC - Apply rotation to card
// Assembly: asm/overlay_120.s
void ov120_0225F6BC(void *ptr) {
    // TODO: Implement based on assembly
    (void)ptr;
}

// ov120_0225F6FC - Initialize callback
// Assembly: asm/overlay_120.s
void ov120_0225F6FC(void *ptr, void (*callback)(void)) {
    // TODO: Implement based on assembly
    (void)ptr;
    (void)callback;
}

// ov120_0225F704 - Call callback
// Assembly: asm/overlay_120.s
void ov120_0225F704(void *ptr, void (*callback)(void)) {
    // TODO: Implement based on assembly
    (void)ptr;
    (void)callback;
}

// ov120_0225F714 - Main handler
// Assembly: asm/overlay_120.s
void ov120_0225F714(void *structPtr, int caseId) {
    (void)structPtr;
    (void)caseId;
    // TODO: Implement
}