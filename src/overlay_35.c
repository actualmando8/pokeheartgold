#include "overlay_35.h"

#include "global.h"

// ov35_02259D80 - Assembly: asm/overlay_35.s
// Case-based handler for mystery gift data structure.
// The assembly contains a jump table with 6 cases (0-5).
// Case 0: return (default)
// Case 1: Set field_0x4 to 1, then return
// Case 2: return (default)
// Case 3: return (default)
// Case 4: Check conditions - if field_0x2 == 2 and callback != NULL, call callback
// Case 5: return (default)
//
// Parameters: structPtr - pointer to UnkStruct_02259D80, caseId - operation (0-5)
void ov35_02259D80(UnkStruct_02259D80 *structPtr, int caseId) {
    switch (caseId) {
    case 0:
        // Default case - fall through to return
        break;
    case 1:
        // mov r1, #1; strb r1, [r0, #4]
        // Set field_0x4 to 1
        structPtr->field_0x4 = 1;
        break;
    case 2:
        // Default case - fall through to return
        break;
    case 3:
        // Default case - fall through to return
        break;
    case 4:
        // ldrb r1, [r0, #2]
        // cmp r1, #2
        // bne _02259DB4
        // ldr r1, [r0, #0x44]
        // cmp r1, #0
        // beq _02259DB4
        // ldr r0, [r0, #0x48]
        // blx r1
        // Check if field_0x2 == 2, then call callback if set
        if (structPtr->field_0x2 == 2) {
            if (structPtr->callback != NULL) {
                structPtr->callback(structPtr->callbackArg);
            }
        }
        break;
    case 5:
        // Default case - fall through to return
        break;
    default:
        // Safety default - should not be reached
        break;
    }
}

// ov35_02259DB8 - Assembly: asm/overlay_35.s
// Simple getter function - returns the byte at offset 3 of the structure.
// This is equivalent to: ldrb r0, [r0, #3]; bx lr
//
// Parameters: structPtr - pointer to UnkStruct_02259D80
// Returns: u8 value at offset 3
u8 ov35_02259DB8(UnkStruct_02259D80 *structPtr) {
    return structPtr->field_0x3;
}