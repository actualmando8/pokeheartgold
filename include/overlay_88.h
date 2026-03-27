#ifndef POKEHEARTGOLD_OVERLAY_88_H
#define POKEHEARTGOLD_OVERLAY_88_H

#include "global.h"

// Overlay 88 - Mystery Gift data handling
// Assembly: asm/overlay_88.s
// Linked as: asm/overlay_88.o in main.lsf

// ov88_02258800 - Initialize mystery gift data structure
// Parameters: arg0, arg1
// Returns: unknown
void *ov88_02258800(void *arg0, void *arg1);

// ov88_022588C4 - Main mystery gift handler
// Parameters: manager, state
// Returns: int
int ov88_022588C4(void *manager, int *state);

// ov88_022589FC - Mystery gift state handler
// Parameters: structPtr, caseId
// Returns: unknown
void ov88_022589FC(void *structPtr, int caseId);

// ov88_02258A64 - VBlank callback
// Parameters: void
// Returns: void
void ov88_02258A64(void);

// ov88_02258A70 - Initialize graphics
// Parameters: structPtr
// Returns: void
void ov88_02258A70(void *structPtr);

// ov88_02258ABC - Initialize VRAM transfer manager
// Parameters: structPtr
// Returns: void
void ov88_02258ABC(void *structPtr);

// ov88_02258AF4 - Cleanup function
// Parameters: structPtr
// Returns: void
void ov88_02258AF4(void *structPtr);

// ov88_02258B14 - Render sprites
// Parameters: void
// Returns: void
void ov88_02258B14(void);

// ov88_02258B20 - VBlank callback continuation
// Parameters: arg0
// Returns: void
void ov88_02258B20(void *arg0);

// ov88_02258B34 - Initialize graphics data
// Parameters: arg0, structPtr
// Returns: void
void ov88_02258B34(void *arg0, void *structPtr);

// ov88_02258C60 - Load BG configuration
// Parameters: structPtr
// Returns: void
void ov88_02258C60(void *structPtr);

// ov88_02258C98 - Create OAM manager
// Parameters: structPtr
// Returns: void
void ov88_02258C98(void *structPtr);

// ov88_02258D38 - Setup BG templates
// Parameters: structPtr
// Returns: void
void ov88_02258D38(void *structPtr);

// ov88_02258D64 - Load overlay data
// Parameters: arg0, structPtr, size
// Returns: void
void ov88_02258D64(void *arg0, void *structPtr, int size);

// ov88_02258D84 - Free heap memory
// Parameters: ptr
// Returns: void
void ov88_02258D84(void *ptr);

// ov88_02258D90 - Process message data
// Parameters: msgData, structPtr
// Returns: void
void ov88_02258D90(void *msgData, void *structPtr);

// ov88_02258DE8 - Process array data
// Parameters: structPtr, count
// Returns: void
void ov88_02258DE8(void *structPtr, int count);

// ov88_02258EA8 - Process state data
// Parameters: arg0, arg1, structPtr, size
// Returns: void
void ov88_02258EA8(void *arg0, void *arg1, void *structPtr, int size);

// ov88_02258EF8 - Return function (likely a stub)
// Returns: void
void ov88_02258EF8(void);

// ov88_02258EFC - Check conditions
// Parameters: structPtr
// Returns: int
int ov88_02258EFC(void *structPtr);

// ov88_02258F60 - Branch based on state
// Parameters: structPtr
// Returns: void
void ov88_02258F60(void *structPtr);

// ov88_02258F74 - Get halfword value
// Parameters: structPtr
// Returns: u16
u16 ov88_02258F74(void *structPtr);

// ov88_02258F88 - Process loop data
// Parameters: structPtr
// Returns: void
void ov88_02258F88(void *structPtr);

// ov88_022590C0 - Process callback data
// Parameters: arg0, arg1, structPtr
// Returns: void
void ov88_022590C0(void *arg0, void *arg1, void *structPtr);

// ov88_022590D4 - Return function (likely a stub)
// Returns: void
void ov88_022590D4(void);

// ov88_022590D8 - Check condition
// Parameters: structPtr
// Returns: int
int ov88_022590D8(void *structPtr);

// ov88_02259104 - Multi-state handler
// Parameters: structPtr, state
// Returns: void
void ov88_02259104(void *structPtr, int state);

// ov88_0225918C - Process complex data
// Parameters: structPtr
// Returns: void
void ov88_0225918C(void *structPtr);

// ov88_02259244 - Callback wrapper 1
// Parameters: arg0, structPtr
// Returns: void
void ov88_02259244(void *arg0, void *structPtr);

// ov88_02259264 - Callback wrapper 2
// Parameters: arg0, structPtr
// Returns: void
void ov88_02259264(void *arg0, void *structPtr);

// ov88_02259280 - Process array element
// Parameters: structPtr, index
// Returns: void
void ov88_02259280(void *structPtr, int index);

// ov88_022592B8 - Process multiple elements
// Parameters: structPtr, count
// Returns: void
void ov88_022592B8(void *structPtr, int count);

// ov88_022592EC - Load message data
// Parameters: structPtr
// Returns: void
void ov88_022592EC(void *structPtr);

// ov88_022593D0 - Process index data
// Parameters: structPtr, index
// Returns: void
void ov88_022593D0(void *structPtr, int index);

// ov88_02259404 - Handle state transition
// Parameters: structPtr
// Returns: int
int ov88_02259404(void *structPtr);

// ov88_022594E0 - Process array with callback
// Parameters: structPtr
// Returns: void
void ov88_022594E0(void *structPtr);

// ov88_02259508 - Load palette data
// Parameters: structPtr
// Returns: void
void ov88_02259508(void *structPtr);

// ov88_0225954C - Simple callback
// Parameters: structPtr
// Returns: void
void ov88_0225954C(void *structPtr);

// ov88_02259560 - Process with loop
// Parameters: structPtr
// Returns: void
void ov88_02259560(void *structPtr);

// ov88_022595DC - Clear data
// Parameters: structPtr
// Returns: void
void ov88_022595DC(void *structPtr);

// ov88_022595E4 - Get halfword from struct
// Parameters: structPtr
// Returns: u16
u16 ov88_022595E4(void *structPtr);

// ov88_022595F8 - Complex array processing
// Parameters: structPtr
// Returns: void
void ov88_022595F8(void *structPtr);

// ov88_0225967C - Main data processor
// Parameters: structPtr
// Returns: void
void ov88_0225967C(void *structPtr);

// ov88_022597DC - Process index array
// Parameters: structPtr, index
// Returns: void
void ov88_022597DC(void *structPtr, int index);

// ov88_02259800 - Process with increment
// Parameters: structPtr
// Returns: void
void ov88_02259800(void *structPtr);

// ov88_02259818 - Process case handler
// Parameters: structPtr, caseId
// Returns: void
void ov88_02259818(void *structPtr, int caseId);

// ov88_0225983C - Simple setter
// Parameters: value
// Returns: void
void ov88_0225983C(int value);

// ov88_0225985C - Simple setter (alternate)
// Parameters: value
// Returns: void
void ov88_0225985C(int value);

// ov88_02259878 - Set state value
// Parameters: value
// Returns: void
void ov88_02259878(int value);

// ov88_02259884 - Complex initializer
// Parameters: structPtr
// Returns: void
void ov88_02259884(void *structPtr);

#endif // POKEHEARTGOLD_OVERLAY_88_H