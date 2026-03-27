#ifndef POKEHEARTGOLD_OVERLAY_56_H
#define POKEHEARTGOLD_OVERLAY_56_H

#include <global.h>

// Function declarations

// ov56_021E5C20 - Assembly: asm/overlay_56.s
// Mail view initialization
// Parameters: param1
// Returns: int
int ov56_021E5C20(void *param1);

// ov56_021E5C9C - Assembly: asm/overlay_56.s
// Check if mail is initialized
// Returns: int
int ov56_021E5C9C(void);

// ov56_021E5CB4 - Assembly: asm/overlay_56.s
// Mail view cleanup
// Parameters: taskPtr
// Returns: int
int ov56_021E5CB4(void *taskPtr);

// ov56_021E5CE0 - Assembly: asm/overlay_56.s
// Check if mail messages are initialized
// Parameters: param1
// Returns: int
int ov56_021E5CE0(void *param1);

// ov56_021E5D08 - Assembly: asm/overlay_56.s
// Blend palette for mail
// Parameters: mailStruct
// Returns: void
void ov56_021E5D08(void *mailStruct);

// ov56_021E5D34 - Assembly: asm/overlay_56.s
// Mail palette update
// Parameters: mailStruct
// Returns: void
void ov56_021E5D34(void *mailStruct);

// ov56_021E5D40 - Assembly: asm/overlay_56.s
// Stub function - returns 0
// Returns: int
int ov56_021E5D40(void);

// ov56_021E5D44 - Assembly: asm/overlay_56.s
// Handle mail input
// Parameters: mailStruct
// Returns: int
int ov56_021E5D44(void *mailStruct);

// ov56_021E5DA4 - Assembly: asm/overlay_56.s
// Handle mail button press
// Parameters: mailStruct, param2
// Returns: int
int ov56_021E5DA4(void *mailStruct, void *param2);

// ov56_021E5DDC - Assembly: asm/overlay_56.s
// Display mail message
// Parameters: mailStruct
// Returns: void
void ov56_021E5DDC(void *mailStruct);

// ov56_021E5EFC - Assembly: asm/overlay_56.s
// Clear mail display
// Parameters: mailStruct
// Returns: void
void ov56_021E5EFC(void *mailStruct);

// ov56_021E5FB4 - Assembly: asm/overlay_56.s
// Initialize mail message data
// Parameters: mailStruct, mailIndex
// Returns: void
void ov56_021E5FB4(void *mailStruct, int mailIndex);

// ov56_021E5FDC - Assembly: asm/overlay_56.s
// Initialize mail message window
// Parameters: mailStruct, mailIndex
// Returns: void
void ov56_021E5FDC(void *mailStruct, int mailIndex);

// ov56_021E609C - Assembly: asm/overlay_56.s
// Setup mail message display
// Parameters: mailStruct, mailIndex
// Returns: void
void ov56_021E609C(void *mailStruct, int mailIndex);

// ov56_021E60F4 - Assembly: asm/overlay_56.s
// Initialize mail text
// Parameters: mailStruct
// Returns: void
void ov56_021E60F4(void *mailStruct);

// ov56_021E614C - Assembly: asm/overlay_56.s
// Initialize mail UI
// Parameters: mailStruct
// Returns: void
void ov56_021E614C(void *mailStruct);

// ov56_021E6228 - Assembly: asm/overlay_56.s
// Main mail task
// Parameters: mailStruct
// Returns: int
int ov56_021E6228(void *mailStruct);

// ov56_021E63C0 - Assembly: asm/overlay_56.s
// Display mail message text
// Parameters: mailStruct
// Returns: void
void ov56_021E63C0(void *mailStruct);

// ov56_021E63FC - Assembly: asm/overlay_56.s
// Setup mail text buffer
// Parameters: mailStruct, msgId
// Returns: void
void ov56_021E63FC(void *mailStruct, int msgId);

// ov56_021E647C - Assembly: asm/overlay_56.s
// Format mail text
// Parameters: mailStruct, msgId
// Returns: void
void ov56_021E647C(void *mailStruct, int msgId);

// ov56_021E64C8 - Assembly: asm/overlay_56.s
// Setup mail message page
// Parameters: mailStruct
// Returns: void
void ov56_021E64C8(void *mailStruct);

// ov56_021E64F4 - Assembly: asm/overlay_56.s
// Get mail message
// Parameters: mailStruct
// Returns: void*
void *ov56_021E64F4(void *mailStruct);

// ov56_021E6514 - Assembly: asm/overlay_56.s
// Format mail message string
// Parameters: mailStruct, stringPtr
// Returns: void
void ov56_021E6514(void *mailStruct, void *stringPtr);

// ov56_021E660C - Assembly: asm/overlay_56.s
// Format mail sender name
// Parameters: mailStruct, stringPtr
// Returns: void
void ov56_021E660C(void *mailStruct, void *stringPtr);

// ov56_021E6650 - Assembly: asm/overlay_56.s
// Display mail page
// Parameters: mailStruct
// Returns: void
void ov56_021E6650(void *mailStruct);

// ov56_021E692C - Assembly: asm/overlay_56.s
// Clear mail page
// Parameters: mailStruct
// Returns: void
void ov56_021E692C(void *mailStruct);

// ov56_021E696C - Assembly: asm/overlay_56.s
// Handle mail page navigation
// Parameters: mailStruct
// Returns: void
void ov56_021E696C(void *mailStruct);

// ov56_021E6A7C - Assembly: asm/overlay_56.s
// Clear mail window
// Parameters: mailStruct
// Returns: void
void ov56_021E6A7C(void *mailStruct);

// ov56_021E6AA4 - Assembly: asm/overlay_56.s
// Destroy mail windows
// Parameters: mailStruct
// Returns: void
void ov56_021E6AA4(void *mailStruct);

// ov56_021E6BB4 - Assembly: asm/overlay_56.s
// Handle mail input with callback
// Parameters: mailStruct, callback
// Returns: int
int ov56_021E6BB4(void *mailStruct, void *callback);

// ov56_021E6D90 - Assembly: asm/overlay_56.s
// Finalize mail view
// Parameters: mailStruct
// Returns: void
void ov56_021E6D90(void *mailStruct);

#endif // POKEHEARTGOLD_OVERLAY_56_H