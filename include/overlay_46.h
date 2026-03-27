#ifndef POKEHEARTGOLD_OVERLAY_46_H
#define POKEHEARTGOLD_OVERLAY_46_H

#include <global.h>

// Mystery Gift / Download structure
typedef struct MysteryGiftStruct {
    void *field_00;
    void *field_04;
    void *field_08;
    void *field_0c;
    void *field_10;
    void *field_14;
    void *field_18;
    void *field_1c;
    void *field_20;
    void *field_24;
    void *field_28;
    void *field_2c;
    void *field_30;
    void *field_34;
    void *field_38;
    void *field_3c;
    void *field_40;
    void *field_44;
    void *field_48;
    void *field_4c;
    void *field_50;
    void *field_54;
    void *field_58;
    void *field_5c;
    void *field_60;
    void *field_64;
    void *field_68;
    void *field_6c;
    void *field_70;
    void *field_74;
    void *field_78;
    void *field_7c;
    void *field_80;
    void *field_84;
    void *field_88;
    void *field_8c;
    void *field_90;
    void *field_94;
    void *field_98;
    void *field_9c;
    void *field_a0;
    void *field_a4;
    void *field_a8;
    void *field_ac;
    void *field_b0;
    void *field_b4;
    void *field_b8;
    void *field_bc;
    void *field_c0;
    void *field_c4;
    void *field_c8;
    void *field_cc;
    void *field_d0;
    void *field_d4;
    void *field_d8;
    void *field_dc;
    void *field_e0;
    void *field_e4;
    void *field_e8;
    void *field_ec;
    void *field_f0;
    void *field_f4;
    void *field_f8;
    void *field_fc;
} MysteryGiftStruct;

// Function declarations

// ov46_02258800 - Assembly: asm/overlay_46.s
// Mystery Gift initialization - creates heap, overlay data, BG setup
// Parameters: param1, param2
// Returns: void
void ov46_02258800(void *param1, void *param2);

// ov46_0225892C - Assembly: asm/overlay_46.s
// Main task handler with 16-case jump table (Mystery Gift menu)
// Parameters: taskPtr, state
// Returns: void
void ov46_0225892C(void *taskPtr, u16 state);

// ov46_02258C38 - Assembly: asm/overlay_46.s
// Mystery Gift cleanup - frees BG buffers, tasks, heap
// Parameters: taskPtr
// Returns: void
void ov46_02258C38(void *taskPtr);

// ov46_02258CB4 - Assembly: asm/overlay_46.s
// Mystery Gift initialization 2 (different screen/mode)
// Parameters: param1, param2
// Returns: void
void ov46_02258CB4(void *param1, void *param2);

// ov46_02258DA8 - Assembly: asm/overlay_46.s
// Main task handler with 11-case jump table (Mystery Gift download)
// Parameters: taskPtr, state
// Returns: void
void ov46_02258DA8(void *taskPtr, u16 state);

// ov46_02258EFC - Assembly: asm/overlay_46.s
// Mystery Gift cleanup 2
// Parameters: taskPtr
// Returns: void
void ov46_02258EFC(void *taskPtr);

// ov46_02258F70 - Assembly: asm/overlay_46.s
// VBlank callback - calls BG update
// Returns: void
void ov46_02258F70(void);

// ov46_02258F78 - Assembly: asm/overlay_46.s
// BG initialization for Mystery Gift UI
// Parameters: param1, bgConfig
// Returns: void
void ov46_02258F78(void *param1, void *bgConfig);

// ov46_02259210 - Assembly: asm/overlay_46.s
// VBlank handler - palette updates
// Parameters: taskPtr
// Returns: void
void ov46_02259210(void *taskPtr);

// ov46_022592B8 - Assembly: asm/overlay_46.s
// Cleanup BG buffers
// Parameters: param1
// Returns: void
void ov46_022592B8(void *param1);

// ov46_022592E0 - Assembly: asm/overlay_46.s
// BG GPU update scheduler
// Parameters: param1
// Returns: void
void ov46_022592E0(void *param1);

// ov46_022592EC - Assembly: asm/overlay_46.s
// Message window setup
// Parameters: param1, msgId, param3, param4, param5, param6, param7, param8
// Returns: void
void ov46_022592EC(void *param1, int msgId, int param3, int param4, int param5, int param6, int param7, int param8);

// ov46_02259374 - Assembly: asm/overlay_46.s
// Display message in window
// Parameters: msgStruct, msgId
// Returns: void
void ov46_02259374(void *msgStruct, int msgId);

// ov46_022593F8 - Assembly: asm/overlay_46.s
// Clear message from window
// Parameters: msgStruct
// Returns: void
void ov46_022593F8(void *msgStruct);

// ov46_02259450 - Assembly: asm/overlay_46.s
// Show waiting icon
// Parameters: msgStruct
// Returns: void
void ov46_02259450(void *msgStruct);

// ov46_02259474 - Assembly: asm/overlay_46.s
// Remove waiting icon
// Parameters: msgStruct
// Returns: void
void ov46_02259474(void *msgStruct);

// ov46_02259494 - Assembly: asm/overlay_46.s
// Cleanup message windows and strings
// Parameters: msgStruct
// Returns: void
void ov46_02259494(void *msgStruct);

// ov46_022594E0 - Assembly: asm/overlay_46.s
// Display centered message
// Parameters: msgStruct, msgId
// Returns: void
void ov46_022594E0(void *msgStruct, int msgId);

// ov46_02259534 - Assembly: asm/overlay_46.s
// Buffer integer as string
// Parameters: param1, value
// Returns: void
void ov46_02259534(void *param1, int value);

// ov46_02259550 - Assembly: asm/overlay_46.s
// Create yes/no prompt
// Parameters: msgStruct, promptId
// Returns: void
void ov46_02259550(void *msgStruct, int promptId);

// BG configuration data
extern const u32 ov46_02259598[4];
extern const u8 ov46_022595A4[12];
extern const u8 ov46_022595B4[32];
extern const u8 ov46_022595DC[64];

#endif // POKEHEARTGOLD_OVERLAY_46_H