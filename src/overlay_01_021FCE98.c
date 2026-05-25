/* Decompiled from asm/overlay_01_021FCE98.s */
#include "global.h"

void Task_UseSweetScentInField(void) {
    /* Original at 0x021FCE98 */
    /* Requires manual decompilation - 138 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    str r0, [sp]\n    bl TaskManager_GetFieldSystem\n    add r6, r0, #0\n    ldr r0, [sp]\n    bl TaskManager_GetEnvironment\n    add r7, r0, #0\n    ldr r0, [sp]\n    bl TaskManager_GetStatePtr\n    add r4, r0, #0\n    ldr r0, [r4]\n    ldr r5, [r7, #4]\n    cmp r0, #7\n    bls _021FCEBC\n    b _021FCFDE\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _021FCEC8: ; jump table\n    ldr r6, [r5]\n    add r0, r5, #0\n    bl Heap_Free\n    mov r0, #0xb\n    mov r1, #0xc\n    bl Heap_AllocAtEnd\n    str r0, [r7, #4]\n    str r6, [r0, #8]\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _021FCFDE\n    bl GetHoneySweetScentWorkSize\n    add r7, r0, #0\n    mov r0, #0xb\n    add r1, r7, #0\n    bl Heap_AllocAtEnd\n    str r0, [r5, #4]\n    mov r1, #0\n    add r2, r7, #0\n    bl memset\n    ldr r0, [r6, #0x40]\n    bl PlayerAvatar_GetState\n    sub r0, r0, #1\n    cmp r0, #1  ; walking or biking?\n    bhi _021FCF20\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _021FCFDE\n    add r0, r6, #0\n    bl ov01_022062CC\n    ldr r1, [r5, #8]\n    cmp r1, r0\n    bne _021FCF46\n    add r0, r6, #0\n    bl FollowMon_IsVisible\n    cmp r0, #0\n    beq _021FCF46\n    ldr r0, [sp]\n    ldr r1, _021FCFE4 ; =ov01_02205A60\n    mov r2, #0\n    bl TaskManager_Call\n    mov r0, #4\n    str r0, [r4]\n    b _021FCFDE\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _021FCFDE\n    ldr r0, [r6, #0x40]\n    bl PlayerAvatar_GetGender\n    add r3, r0, #0\n    ldr r2, [r7]\n    add r0, r6, #0\n    mov r1, #0\n    bl ov02_02249458\n    str r0, [r5]\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _021FCFDE\n    ldr r0, [r5]\n    bl ov02_0224953C\n    cmp r0, #0\n    beq _021FCFDE\n    ldr r0, [r5]\n    bl ov02_02249548\n    mov r0, #6\n    str r0, [r4]\n    b _021FCFDE\n    add r0, r6, #0\n    mov r1, #0xc\n    bl ov02_02250780\n    cmp r0, #0\n    beq _021FCF9C\n    mov r0, #0x42\n    lsl r0, r0, #2\n    ldr r0, [r6, r0]\n    mov r1, #1\n    mov r5, #2\n    bl FieldSystem_UnkSub108_AddMonMood\n    b _021FCF9E\n    mov r5, #1\n    add r0, r6, #0\n    add r1, r5, #0\n    bl ov02_022507B4\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _021FCFDE\n    add r0, r6, #0\n    bl ov01_021FCFEC\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _021FCFDE\n    ldr r0, [sp]\n    ldr r1, _021FCFE8 ; =Task_HoneyOrSweetScent\n    ldr r2, [r5, #4]\n    bl TaskManager_Call\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _021FCFDE\n    add r0, r5, #0\n    bl Heap_Free\n    add r0, r7, #0\n    bl Heap_Free\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021FCFE4: .word ov01_02205A60\n    _021FCFE8: .word Task_HoneyOrSweetScent"
    );
    #endif
}

void ov01_021FCFEC(void) {
    /* Original at 0x021FCFEC */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r0, #4\n    mov r1, #0xd4\n    bl Heap_AllocAtEnd\n    add r4, r0, #0\n    mov r0, #4\n    add r1, r5, #0\n    add r2, r4, #0\n    bl ov01_021FD064\n    ldr r0, [r5, #0x10]\n    ldr r1, _021FD010 ; =ov01_021FD014\n    add r2, r4, #0\n    bl TaskManager_Call\n    pop {r3, r4, r5, pc}\n    _021FD010: .word ov01_021FD014"
    );
    #endif
}

void ov01_021FD014(void) {
    /* Original at 0x021FD014 */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    bl TaskManager_GetEnvironment\n    add r5, r0, #0\n    add r0, r4, #0\n    bl TaskManager_GetStatePtr\n    add r4, r0, #0\n    ldr r0, [r4]\n    cmp r0, #0\n    beq _021FD032\n    cmp r0, #1\n    beq _021FD050\n    b _021FD060\n    add r0, r5, #0\n    add r0, #0x20\n    mov r1, #3\n    bl ov01_021FD154\n    cmp r0, #0\n    beq _021FD046\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    add r5, #0x5c\n    add r0, r5, #0\n    bl Field3dObject_Draw\n    b _021FD060\n    add r0, r5, #0\n    bl ov01_021FD128\n    add r0, r5, #0\n    bl Heap_Free\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_021FD064(void) {
    /* Original at 0x021FD064 */
    /* Requires manual decompilation - 83 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0x14\n    add r4, r2, #0\n    add r5, r0, #0\n    add r6, r1, #0\n    add r0, r4, #0\n    add r1, r5, #0\n    mov r2, #0x20\n    bl HeapExp_FndInitAllocator\n    add r0, r4, #0\n    add r0, #0x10\n    mov r1, #0x86\n    mov r2, #0x17\n    add r3, r5, #0\n    bl Field3dModel_LoadFromFilesystem\n    add r0, r4, #0\n    add r1, r4, #0\n    str r5, [sp]\n    add r0, #0x20\n    add r1, #0x10\n    mov r2, #0x86\n    mov r3, #0x15\n    str r4, [sp, #4]\n    bl Field3dModelAnimation_LoadFromFilesystem\n    add r0, r4, #0\n    add r1, r4, #0\n    str r5, [sp]\n    add r0, #0x34\n    add r1, #0x10\n    mov r2, #0x86\n    mov r3, #0x16\n    str r4, [sp, #4]\n    bl Field3dModelAnimation_LoadFromFilesystem\n    add r0, r4, #0\n    add r1, r4, #0\n    str r5, [sp]\n    add r0, #0x48\n    add r1, #0x10\n    mov r2, #0x86\n    mov r3, #0x14\n    str r4, [sp, #4]\n    bl Field3dModelAnimation_LoadFromFilesystem\n    add r0, r4, #0\n    add r1, r4, #0\n    add r0, #0x5c\n    add r1, #0x10\n    bl Field3dObject_InitFromModel\n    add r0, r4, #0\n    add r1, r4, #0\n    add r0, #0x5c\n    add r1, #0x20\n    bl Field3dObject_AddAnimation\n    add r0, r4, #0\n    add r1, r4, #0\n    add r0, #0x5c\n    add r1, #0x34\n    bl Field3dObject_AddAnimation\n    add r0, r4, #0\n    add r1, r4, #0\n    add r0, #0x5c\n    add r1, #0x48\n    bl Field3dObject_AddAnimation\n    add r0, r4, #0\n    add r0, #0x20\n    mov r1, #3\n    mov r2, #0\n    bl ov01_021FD190\n    add r0, r6, #0\n    bl FollowMon_GetMapObject\n    add r1, sp, #8\n    bl MapObject_CopyPositionVector\n    add r0, r4, #0\n    ldr r1, [sp, #8]\n    ldr r2, [sp, #0xc]\n    ldr r3, [sp, #0x10]\n    add r0, #0x5c\n    bl Field3dObject_SetPosEx\n    add r4, #0x5c\n    add r0, r4, #0\n    mov r1, #1\n    bl Field3dObject_SetActiveFlag\n    add sp, #0x14\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void ov01_021FD128(void) {
    Field3dModelAnimation_Unload(r0);
    Field3dModelAnimation_Unload(r4, r4);
    Field3dModelAnimation_Unload(r4, r4);
    Field3dModel_Unload(r4);
}

void ov01_021FD154(void) {
    /* Original at 0x021FD154 */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    mov r5, #0\n    add r6, r1, #0\n    add r7, r0, #0\n    add r4, r5, #0\n    cmp r6, #0\n    bls _021FD184\n    mov r0, #0x14\n    mul r0, r4\n    mov r1, #1\n    add r0, r7, r0\n    lsl r1, r1, #0xc\n    bl Field3dModelAnimation_FrameAdvanceAndCheck\n    cmp r0, #0\n    beq _021FD17A\n    add r0, r5, #1\n    lsl r0, r0, #0x18\n    lsr r5, r0, #0x18\n    add r0, r4, #1\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    cmp r4, r6\n    blo _021FD162\n    cmp r5, r6\n    bne _021FD18C\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021FD190(void) {
    /* Original at 0x021FD190 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r1, #0\n    add r6, r0, #0\n    add r7, r2, #0\n    mov r4, #0\n    cmp r5, #0\n    bls _021FD1B4\n    mov r0, #0x14\n    mul r0, r4\n    add r0, r6, r0\n    add r1, r7, #0\n    bl Field3dModelAnimation_FrameSet\n    add r0, r4, #1\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    cmp r4, r5\n    blo _021FD19E\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}
