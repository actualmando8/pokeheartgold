#ifndef POKEHEARTGOLD_OVERLAY_33_H
#define POKEHEARTGOLD_OVERLAY_33_H

#include <global.h>

// Mystery Events UI structure
typedef struct MysteryEventsStruct {
    void *field_00;
    void *field_04;
    void *field_08;
    void *field_0c;
    void *field_10;
    void *field_14;
    u16 field_18;               // event index
    u8 field_1a;
    u8 field_1b;
    u8 field_1c;
    u8 field_1d;
    u8 field_1e;
    u8 field_1f;
    u8 field_20;
    u8 field_21;
    u8 field_22;
    u8 field_23;
    u32 field_24;
} MysteryEventsStruct;

// Function declarations

// ov33_0225D520 - Assembly: asm/overlay_33.s
// Mystery Events initialization
// Parameters: param1, param2, param3
// Returns: void
void ov33_0225D520(void *param1, u32 param2, void *param3);

// ov33_0225D5A8 - Assembly: asm/overlay_33.s
// Mystery Events cleanup
// Parameters: taskPtr
// Returns: void
void ov33_0225D5A8(void *taskPtr);

// ov33_0225D5CC - Assembly: asm/overlay_33.s
// Returns 1 (stub function)
// Returns: 1
int ov33_0225D5CC(void);

// ov33_0225D5D0 - Assembly: asm/overlay_33.s
// Main mystery events task handler with 6-case jump table
// Parameters: taskPtr
// Returns: void
void ov33_0225D5D0(void *taskPtr);

// ov33_0225D6F8 - Assembly: asm/overlay_33.s
// Graphics setup for mystery events
// Returns: void
void ov33_0225D6F8(void);

// ov33_0225D720 - Assembly: asm/overlay_33.s
// Initializes background layers for mystery events
// Parameters: bgPtr
// Returns: void
void ov33_0225D720(void *bgPtr);

// ov33_0225D7B8 - Assembly: asm/overlay_33.s
// Frees background buffers
// Parameters: bgPtr
// Returns: void
void ov33_0225D7B8(void *bgPtr);

// ov33_0225D7D4 - Assembly: asm/overlay_33.s
// Creates windows for event list
// Parameters: bgPtr
// Returns: void
void ov33_0225D7D4(void *bgPtr);

// ov33_0225D820 - Assembly: asm/overlay_33.s
// Removes windows for event list
// Parameters: bgPtr
// Returns: void
void ov33_0225D820(void *bgPtr);

// ov33_0225D84C - Assembly: asm/overlay_33.s
// Loads graphics for mystery events
// Parameters: bgPtr
// Returns: void
void ov33_0225D84C(void *bgPtr);

// ov33_0225D8D4 - Assembly: asm/overlay_33.s
// Allocates fonts and message data
// Parameters: bgPtr
// Returns: void
void ov33_0225D8D4(void *bgPtr);

#endif // POKEHEARTGOLD_OVERLAY_33_H