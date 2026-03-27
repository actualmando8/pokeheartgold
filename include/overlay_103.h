#ifndef POKEHEARTGOLD_OVERLAY_103_H
#define POKEHEARTGOLD_OVERLAY_103_H

#include <global.h>

// Unknown structure used by overlay 103 (Mailbox / Mail view)
// Based on analysis at 0x021EC940
typedef struct UnkStruct_021EC940 {
    void *options;          // offset 0x0: Save_PlayerData_GetOptionsAddr()
    void *mailbox;          // offset 0x4: Save_Mailbox_Get()
    void *args;             // offset 0x8: OverlayManager_GetArgs()
    // ... more fields
    u32 field_0x28;         // offset 0x28: set to 8
} UnkStruct_021EC940;

// MailboxApp_Init - Assembly: asm/overlay_103.s @ 0x021EC940
// Initializes the Mailbox/Mail view overlay
// Parameters: structPtr - pointer to UnkStruct_021EC940
// Returns: int (1 on success)
int ov103_021EC940(UnkStruct_021EC940 *structPtr);

// MailboxApp_Main - Assembly: asm/overlay_103.s @ 0x021EC988
// Main loop - calls ov103_021ED2D4 and returns result
// Parameters: task - task pointer
// Returns: int (0 = continue, 1 = exit)
int ov103_021EC988(void *task);

// MailboxApp_Exit - Assembly: asm/overlay_103.s @ 0x021EC9A4
// Cleanup and exit function
// Parameters: structPtr - pointer to UnkStruct_021EC940
// Returns: int (1 on success)
int ov103_021EC9A4(UnkStruct_021EC940 *structPtr);

// ov103_021EC9B4 - Assembly: asm/overlay_103.s @ 0x021EC9B4
// VBlank callback - updates BG and sprite OAM
void ov103_021EC9B4(void *param);

// ov103_021EC9D8 - Assembly: asm/overlay_103.s @ 0x021EC9D8
// Graphics setup - calls GfGfx_SetBanks
void ov103_021EC9D8(void);

// ov103_021EC9E8 - Assembly: asm/overlay_103.s @ 0x021EC9E8
// Main display function (large, complex)
void ov103_021EC9E8(void *param);

// ov103_021ED2D4 - Assembly: asm/overlay_103.s @ 0x021ED2D4
// Check if mailbox has mail
BOOL ov103_021ED2D4(UnkStruct_021EC940 *structPtr);

// Additional function declarations based on .inc file
void ov103_021EE0AC(void *param);
void ov103_021EE2E0(void *param);
void ov103_021EE468(void *param);

#endif // POKEHEARTGOLD_OVERLAY_103_H
