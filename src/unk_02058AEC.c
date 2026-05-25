/* Decompiled from asm/unk_02058AEC.s */
#include "global.h"

void sub_02058AEC(void) {
    /* Original at 0x02058AEC */
    /* Requires manual decompilation - 62 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r7, r0, #0\n    add r6, r1, #0\n    ldr r0, [sp, #0x24]\n    mov r1, #0x3c\n    str r2, [sp]\n    str r3, [sp, #4]\n    ldr r5, [r6, #0xc]\n    bl Heap_AllocAtEnd\n    mov r1, #0\n    mov r2, #0x3c\n    add r4, r0, #0\n    bl MI_CpuFill8\n    ldr r0, [r6, #0xc]\n    bl Save_PlayerData_GetProfile\n    add r1, r0, #0\n    add r0, r4, #0\n    bl sub_0208AD34\n    add r0, r5, #0\n    bl SaveArray_IsNatDexEnabled\n    str r0, [r4, #0x1c]\n    add r0, r5, #0\n    bl sub_02088288\n    str r0, [r4, #0x2c]\n    add r0, r5, #0\n    bl Save_PlayerData_GetOptionsAddr\n    str r0, [r4, #4]\n    ldr r0, [sp]\n    str r0, [r4]\n    mov r0, #1\n    strb r0, [r4, #0x11]\n    ldr r0, [sp, #4]\n    strb r0, [r4, #0x14]\n    ldr r0, [r4]\n    bl Party_GetCount\n    strb r0, [r4, #0x13]\n    mov r0, #0\n    strh r0, [r4, #0x18]\n    ldr r0, [sp, #0x20]\n    strb r0, [r4, #0x12]\n    add r0, r5, #0\n    bl Save_SpecialRibbons_Get\n    str r0, [r4, #0x20]\n    mov r0, #0\n    str r0, [r4, #0x30]\n    add r0, r5, #0\n    bl sub_0208828C\n    str r0, [r4, #0x34]\n    ldr r1, _02058B7C ; =_020FC7CC\n    add r0, r4, #0\n    bl sub_02089D40\n    ldr r1, _02058B80 ; =gOverlayTemplate_PokemonSummary\n    add r0, r6, #0\n    add r2, r4, #0\n    bl FieldSystem_LaunchApplication\n    str r4, [r7]\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02058B7C: .word _020FC7CC\n    _02058B80: .word gOverlayTemplate_PokemonSummary"
    );
    #endif
}

void sub_02058B84(void) {
    /* Original at 0x02058B84 */
    /* Requires manual decompilation - 118 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r0, r1, #0\n    mov r1, #0x44\n    bl Heap_Alloc\n    mov r1, #0\n    mov r2, #0x44\n    add r4, r0, #0\n    bl MI_CpuFill8\n    ldr r0, [r5, #0x24]\n    ldr r0, [r0, #0xc]\n    bl Save_PlayerData_GetOptionsAddr\n    str r0, [r4, #0xc]\n    ldr r0, [r5, #0x24]\n    add r0, #0xa4\n    ldr r0, [r0]\n    str r0, [r4, #0x14]\n    ldr r0, [r5, #0x24]\n    ldr r0, [r0, #0xc]\n    bl SaveArray_Party_Get\n    str r0, [r4]\n    ldr r0, [r5, #0x24]\n    ldr r0, [r0, #0xc]\n    bl Save_Bag_Get\n    str r0, [r4, #4]\n    mov r0, #0x43\n    ldr r1, [r5, #0x24]\n    lsl r0, r0, #2\n    add r0, r1, r0\n    str r0, [r4, #0x20]\n    add r0, r4, #0\n    mov r1, #0\n    add r0, #0x25\n    strb r1, [r0]\n    add r0, r4, #0\n    mov r1, #2\n    add r0, #0x24\n    strb r1, [r0]\n    ldr r0, [r5, #0x24]\n    add r0, #0xa4\n    ldr r0, [r0]\n    cmp r0, #0\n    beq _02058C1E\n    mov r1, #1\n    bl LinkBattleRuleset_GetRuleValue\n    add r1, r4, #0\n    add r1, #0x36\n    ldrb r1, [r1]\n    mov r2, #0xf\n    lsl r0, r0, #0x18\n    bic r1, r2\n    lsr r2, r0, #0x18\n    mov r0, #0xf\n    and r0, r2\n    orr r1, r0\n    add r0, r4, #0\n    add r0, #0x36\n    strb r1, [r0]\n    add r0, r4, #0\n    add r0, #0x36\n    ldrb r0, [r0]\n    mov r1, #0xf0\n    bic r0, r1\n    add r1, r4, #0\n    add r1, #0x36\n    ldrb r1, [r1]\n    lsl r1, r1, #0x1c\n    lsr r1, r1, #0x1c\n    lsl r1, r1, #0x1c\n    lsr r1, r1, #0x18\n    b _02058C3E\n    add r0, r4, #0\n    add r0, #0x36\n    ldrb r1, [r0]\n    mov r0, #0xf\n    bic r1, r0\n    mov r0, #3\n    orr r1, r0\n    add r0, r4, #0\n    add r0, #0x36\n    strb r1, [r0]\n    add r0, r4, #0\n    add r0, #0x36\n    ldrb r1, [r0]\n    mov r0, #0xf0\n    bic r1, r0\n    mov r0, #0x30\n    orr r1, r0\n    add r0, r4, #0\n    add r0, #0x36\n    strb r1, [r0]\n    add r0, r4, #0\n    mov r1, #0x64\n    add r0, #0x37\n    strb r1, [r0]\n    add r0, r5, #0\n    add r0, #0x3c\n    ldrb r1, [r0]\n    add r0, r4, #0\n    add r0, #0x26\n    strb r1, [r0]\n    mov r2, #0\n    add r0, r5, r2\n    add r0, #0x3d\n    ldrb r1, [r0]\n    add r0, r4, r2\n    add r0, #0x30\n    add r2, r2, #1\n    strb r1, [r0]\n    cmp r2, #6\n    blt _02058C5C\n    ldr r0, [r5, #0x24]\n    ldr r1, _02058C7C ; =gOverlayTemplate_PartyMenu\n    add r2, r4, #0\n    bl FieldSystem_LaunchApplication\n    str r4, [r5, #4]\n    pop {r3, r4, r5, pc}\n    _02058C7C: .word gOverlayTemplate_PartyMenu"
    );
    #endif
}

void sub_02058C80(void) {
    /* Original at 0x02058C80 */
    /* Requires manual decompilation - 41 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    add r0, r1, #0\n    bl FieldSystem_ApplicationIsRunning\n    cmp r0, #0\n    beq _02058C92\n    mov r0, #0\n    pop {r4, pc}\n    ldr r0, [r4, #4]\n    add r1, r4, #0\n    add r0, #0x30\n    add r1, #0x3d\n    mov r2, #6\n    bl MI_CpuCopy8\n    ldr r0, [r4, #4]\n    add r0, #0x26\n    ldrb r0, [r0]\n    cmp r0, #6\n    beq _02058CB4\n    cmp r0, #7\n    bne _02058CBA\n    mov r0, #0\n    str r0, [r4, #0x38]\n    b _02058CBE\n    mov r0, #1\n    str r0, [r4, #0x38]\n    b _02058CBE\n    mov r0, #2\n    str r0, [r4, #0x38]\n    ldr r0, [r4, #4]\n    add r0, #0x26\n    ldrb r1, [r0]\n    add r0, r4, #0\n    add r0, #0x3c\n    strb r1, [r0]\n    ldr r0, [r4, #4]\n    bl Heap_Free\n    mov r0, #0\n    str r0, [r4, #4]\n    mov r0, #1\n    pop {r4, pc}"
    );
    #endif
}

void sub_02058CD8(void) {
    /* Original at 0x02058CD8 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    add r0, r1, #0\n    bl FieldSystem_ApplicationIsRunning\n    cmp r0, #0\n    beq _02058CEA\n    mov r0, #0\n    pop {r4, pc}\n    ldr r0, [r4]\n    ldrb r1, [r0, #0x14]\n    add r0, r4, #0\n    add r0, #0x3c\n    strb r1, [r0]\n    ldr r0, [r4]\n    bl Heap_Free\n    mov r0, #0\n    str r0, [r4]\n    mov r0, #1\n    pop {r4, pc}"
    );
    #endif
}

void sub_02058D04(void) {
    /* Original at 0x02058D04 */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, [r0, #0x24]\n    bl sub_020505C8\n    cmp r0, #0\n    beq _02058D1E\n    mov r0, #1\n    bl ov01_021E636C\n    bl sub_02056E60\n    mov r0, #1\n    pop {r3, pc}\n    mov r0, #0\n    pop {r3, pc}"
    );
    #endif
}

void sub_02058D24(void) {
    /* Original at 0x02058D24 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    bl sub_02037454\n    add r5, r0, #0\n    mov r4, #0\n    cmp r5, #0\n    ble _02058D46\n    add r0, r4, #0\n    bl sub_02037B5C\n    cmp r0, #0x5e\n    bne _02058D40\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    add r4, r4, #1\n    cmp r4, r5\n    blt _02058D32\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_02058D4C(void) {
    /* Original at 0x02058D4C */
    /* Requires manual decompilation - 765 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #8\n    add r5, r0, #0\n    bl TaskManager_GetEnvironment\n    add r4, r0, #0\n    add r0, r5, #0\n    bl TaskManager_GetFieldSystem\n    ldr r1, [r4, #0x34]\n    cmp r1, #0x2c\n    bls _02058D66\n    b _02059472\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _02058D72: ; jump table\n    add r0, r4, #0\n    add r0, #0x43\n    ldrb r0, [r0]\n    sub r1, r0, #1\n    add r0, r4, #0\n    add r0, #0x43\n    strb r1, [r0]\n    add r0, r4, #0\n    add r0, #0x43\n    ldrb r0, [r0]\n    cmp r0, #0\n    bne _02058E94\n    mov r0, #1\n    str r0, [r4, #0x34]\n    bl sub_02057E08\n    b _02059472\n    ldr r0, [r4, #0x2c]\n    ldr r2, [r4, #0xc]\n    mov r1, #1\n    bl ReadMsgDataIntoString\n    ldr r1, [r4, #0xc]\n    add r0, r4, #0\n    bl sub_02059478\n    str r0, [r4, #0x30]\n    mov r0, #2\n    str r0, [r4, #0x34]\n    b _02059472\n    ldr r0, [r4, #0x30]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl IsPrintFinished\n    cmp r0, #0\n    beq _02058E94\n    mov r0, #0x5d\n    bl sub_02037AC0\n    mov r0, #3\n    str r0, [r4, #0x34]\n    b _02059472\n    mov r0, #0x5d\n    bl sub_02037B38\n    cmp r0, #0\n    beq _02058E42\n    mov r0, #7\n    str r0, [r4, #0x34]\n    ldr r0, [r4, #0x24]\n    ldr r0, [r0, #0x3c]\n    bl sub_0205F55C\n    ldr r1, [r4, #0x50]\n    ldr r2, [r4, #8]\n    mov r0, #1\n    blx r2\n    b _02059472\n    ldr r0, _02059148 ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #2\n    tst r0, r1\n    beq _02058E94\n    mov r0, #4\n    str r0, [r4, #0x34]\n    mov r0, #0x5c\n    bl sub_02037AC0\n    mov r0, #5\n    add r4, #0x43\n    strb r0, [r4]\n    b _02059472\n    mov r0, #0x5d\n    bl sub_02037B38\n    cmp r0, #0\n    beq _02058E7C\n    mov r0, #7\n    str r0, [r4, #0x34]\n    ldr r0, [r4, #0x24]\n    ldr r0, [r0, #0x3c]\n    bl sub_0205F55C\n    ldr r1, [r4, #0x50]\n    ldr r2, [r4, #8]\n    mov r0, #1\n    blx r2\n    add r0, r4, #0\n    add r0, #0x43\n    ldrb r0, [r0]\n    sub r1, r0, #1\n    add r0, r4, #0\n    add r0, #0x43\n    strb r1, [r0]\n    add r0, r4, #0\n    add r0, #0x43\n    ldrb r0, [r0]\n    cmp r0, #0\n    beq _02058E96\n    b _02059472\n    mov r0, #8\n    str r0, [r4, #0x34]\n    b _02059472\n    add r0, r4, #0\n    bl sub_02059650\n    add r0, r4, #0\n    bl Heap_Free\n    add sp, #8\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    add r0, r4, #0\n    bl sub_02059650\n    add r0, r4, #0\n    bl Heap_Free\n    bl sub_02057F70\n    add sp, #8\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #0x5d\n    bl sub_02037B38\n    cmp r0, #0\n    beq _02058EDC\n    mov r0, #5\n    str r0, [r4, #0x34]\n    ldr r1, [r4, #0x50]\n    ldr r2, [r4, #8]\n    mov r0, #1\n    blx r2\n    b _02059472\n    ldr r1, [r4, #0x50]\n    ldr r2, [r4, #8]\n    mov r0, #0\n    blx r2\n    mov r0, #5\n    str r0, [r4, #0x34]\n    b _02059472\n    mov r0, #0xa\n    str r0, [r4, #0x34]\n    mov r0, #5\n    add r4, #0x44\n    strb r0, [r4]\n    b _02059472\n    add r1, r4, #0\n    add r1, #0x44\n    ldrb r1, [r1]\n    cmp r1, #0\n    beq _02058F0E\n    add r0, r4, #0\n    add r0, #0x44\n    ldrb r0, [r0]\n    add r4, #0x44\n    sub r0, r0, #1\n    strb r0, [r4]\n    b _02059472\n    ldr r0, [r0, #0x40]\n    bl PlayerAvatar_GetMapObject\n    bl MapObject_IsMovementPaused\n    cmp r0, #0\n    beq _02058FB2\n    mov r0, #0xb\n    str r0, [r4, #0x34]\n    b _02059472\n    bl sub_02057E08\n    ldr r0, [r4, #0x2c]\n    ldr r2, [r4, #0xc]\n    mov r1, #0xd\n    bl ReadMsgDataIntoString\n    ldr r1, [r4, #0xc]\n    add r0, r4, #0\n    bl sub_02059478\n    str r0, [r4, #0x30]\n    mov r0, #0xc\n    str r0, [r4, #0x34]\n    b _02059472\n    ldr r0, [r4, #0x30]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl IsPrintFinished\n    cmp r0, #0\n    beq _02058FB2\n    mov r0, #0xd\n    str r0, [r4, #0x34]\n    b _02059472\n    mov r0, #0\n    bl ov01_021E636C\n    mov r0, #0xe\n    str r0, [r4, #0x34]\n    b _02059472\n    add r0, r4, #0\n    add r0, #0x43\n    ldrb r0, [r0]\n    sub r1, r0, #1\n    add r0, r4, #0\n    add r0, #0x43\n    strb r1, [r0]\n    add r0, r4, #0\n    add r0, #0x43\n    ldrb r0, [r0]\n    cmp r0, #0\n    bne _02058FB2\n    bl sub_02057E08\n    mov r0, #0xf\n    str r0, [r4, #0x34]\n    b _02059472\n    add r0, r4, #0\n    mov r1, #0\n    bl sub_020594C8\n    add r0, r4, #0\n    mov r1, #0xb\n    bl sub_02058B84\n    mov r0, #0x10\n    str r0, [r4, #0x34]\n    b _02059472\n    ldr r1, [r4, #0x24]\n    add r0, r4, #0\n    bl sub_02058C80\n    cmp r0, #0\n    beq _02058FB2\n    ldr r0, [r4, #0x38]\n    cmp r0, #0\n    beq _02058FB4\n    cmp r0, #1\n    beq _02058FBA\n    cmp r0, #2\n    beq _02058FC0\n    b _02059472\n    mov r0, #0x14\n    str r0, [r4, #0x34]\n    b _02059472\n    mov r0, #0x13\n    str r0, [r4, #0x34]\n    b _02059472\n    mov r0, #0x11\n    str r0, [r4, #0x34]\n    b _02059472\n    ldr r0, [r4, #0x24]\n    ldr r0, [r0, #0xc]\n    bl SaveArray_Party_Get\n    add r2, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #0xb\n    str r0, [sp, #4]\n    add r3, r4, #0\n    add r3, #0x3c\n    ldrb r3, [r3]\n    ldr r1, [r4, #0x24]\n    add r0, r4, #0\n    bl sub_02058AEC\n    mov r0, #0x12\n    str r0, [r4, #0x34]\n    b _02059472\n    ldr r1, [r4, #0x24]\n    add r0, r4, #0\n    bl sub_02058CD8\n    cmp r0, #0\n    beq _020590C8\n    mov r0, #0xf\n    str r0, [r4, #0x34]\n    b _02059472\n    ldr r0, [r4, #0x24]\n    bl FieldSystem_LoadFieldOverlay\n    add r0, r4, #0\n    add r0, #0x88\n    ldrb r0, [r0]\n    cmp r0, #3\n    beq _0205901C\n    add r0, r4, #0\n    mov r1, #5\n    add r0, #0x43\n    strb r1, [r0]\n    mov r0, #0x15\n    str r0, [r4, #0x34]\n    b _02059472\n    mov r0, #0x1a\n    str r0, [r4, #0x34]\n    b _02059472\n    add r0, r4, #0\n    add r0, #0x3d\n    bl sub_0203996C\n    add r0, r4, #0\n    bl sub_02058D04\n    cmp r0, #0\n    beq _020590C8\n    add r0, r4, #0\n    mov r1, #5\n    add r0, #0x43\n    strb r1, [r0]\n    mov r0, #0\n    str r0, [r4, #0x34]\n    b _02059472\n    ldr r0, [r4, #0x24]\n    bl FieldSystem_LoadFieldOverlay\n    add r0, r4, #0\n    add r0, #0x88\n    ldrb r0, [r0]\n    cmp r0, #3\n    beq _02059058\n    mov r0, #0x16\n    str r0, [r4, #0x34]\n    b _02059472\n    mov r0, #0x1a\n    str r0, [r4, #0x34]\n    b _02059472\n    add r0, r4, #0\n    bl sub_02058D04\n    cmp r0, #0\n    beq _020590C8\n    mov r0, #8\n    str r0, [r4, #0x34]\n    b _02059472\n    add r0, r4, #0\n    add r0, #0x44\n    ldrb r0, [r0]\n    sub r1, r0, #1\n    add r0, r4, #0\n    add r0, #0x44\n    strb r1, [r0]\n    add r0, r4, #0\n    add r0, #0x44\n    ldrb r0, [r0]\n    cmp r0, #0\n    bne _020590C8\n    mov r0, #0x18\n    str r0, [r4, #0x34]\n    b _02059472\n    bl sub_02057E08\n    ldr r0, [r4, #0x2c]\n    ldr r2, [r4, #0xc]\n    mov r1, #0x13\n    bl ReadMsgDataIntoString\n    ldr r1, [r4, #0xc]\n    add r0, r4, #0\n    bl sub_02059478\n    str r0, [r4, #0x30]\n    mov r0, #0x19\n    str r0, [r4, #0x34]\n    b _02059472\n    ldr r0, [r4, #0x30]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl IsPrintFinished\n    cmp r0, #0\n    beq _020590C8\n    mov r0, #0xd\n    str r0, [r4, #0x34]\n    b _02059472\n    add r0, r4, #0\n    bl sub_02058D04\n    cmp r0, #0\n    bne _020590CA\n    b _02059472\n    bl sub_02058D24\n    cmp r0, #0\n    beq _020590D8\n    mov r0, #5\n    str r0, [r4, #0x34]\n    b _02059472\n    ldr r0, [r4, #0x38]\n    cmp r0, #0\n    beq _020590E2\n    mov r1, #1\n    b _020590E4\n    mov r1, #0\n    add r0, r4, #0\n    add r0, #0x82\n    strb r1, [r0]\n    add r1, r4, #0\n    add r1, #0x82\n    ldrb r1, [r1]\n    add r0, r4, #0\n    bl sub_020596A8\n    mov r0, #0\n    bl sub_02037AC0\n    ldr r0, [r4, #0x28]\n    ldr r2, [r4, #0x74]\n    mov r1, #0\n    bl BufferPlayersName\n    ldr r0, [r4, #0x2c]\n    ldr r2, [r4, #0xc]\n    mov r1, #0xe\n    bl ReadMsgDataIntoString\n    ldr r0, [r4, #0x28]\n    ldr r1, [r4, #0x10]\n    ldr r2, [r4, #0xc]\n    bl StringExpandPlaceholders\n    ldr r1, [r4, #0x10]\n    add r0, r4, #0\n    bl sub_02059478\n    str r0, [r4, #0x30]\n    mov r0, #0x1b\n    str r0, [r4, #0x34]\n    b _02059472\n    ldr r0, [r4, #0x30]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl IsPrintFinished\n    cmp r0, #0\n    beq _0205922E\n    bl sub_02058D24\n    cmp r0, #0\n    beq _0205914C\n    mov r0, #5\n    str r0, [r4, #0x34]\n    b _02059472\n    nop\n    _02059148: .word gSystem\n    mov r0, #0\n    bl sub_02037B38\n    cmp r0, #0\n    beq _0205922E\n    add r0, r4, #0\n    bl sub_020596F0\n    mov r0, #0x1c\n    str r0, [r4, #0x34]\n    b _02059472\n    add r0, r4, #0\n    bl sub_02059738\n    cmp r0, #0\n    beq _0205922E\n    mov r0, #1\n    bl sub_02037AC0\n    mov r0, #0x1d\n    str r0, [r4, #0x34]\n    b _02059472\n    mov r0, #1\n    bl sub_02037B38\n    cmp r0, #0\n    beq _0205922E\n    add r0, r4, #0\n    bl sub_02059748\n    add r1, r4, #0\n    add r1, #0x83\n    strb r0, [r1]\n    add r0, r4, #0\n    add r0, #0x82\n    ldrb r0, [r0]\n    cmp r0, #0\n    beq _020591BC\n    add r0, r4, #0\n    add r0, #0x83\n    ldrb r0, [r0]\n    cmp r0, #0\n    beq _020591BC\n    ldr r0, [r4, #0x2c]\n    ldr r2, [r4, #0xc]\n    mov r1, #0x14\n    bl ReadMsgDataIntoString\n    ldr r1, [r4, #0xc]\n    add r0, r4, #0\n    bl sub_02059478\n    str r0, [r4, #0x30]\n    mov r0, #0x1e\n    str r0, [r4, #0x34]\n    b _02059472\n    mov r0, #0x2a\n    str r0, [r4, #0x34]\n    b _02059472\n    ldr r0, [r4, #0x30]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl IsPrintFinished\n    cmp r0, #0\n    beq _0205922E\n    add r0, r4, #0\n    mov r1, #0\n    add r0, #0x89\n    strb r1, [r0]\n    ldr r0, [r4, #0x2c]\n    ldr r2, [r4, #0xc]\n    mov r1, #0x11\n    bl ReadMsgDataIntoString\n    ldr r1, [r4, #0xc]\n    add r0, r4, #0\n    bl sub_02059478\n    str r0, [r4, #0x30]\n    add r0, r4, #0\n    mov r1, #0\n    add r0, #0x84\n    strb r1, [r0]\n    mov r0, #0x1f\n    str r0, [r4, #0x34]\n    b _02059472\n    ldr r0, [r4, #0x30]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl IsPrintFinished\n    cmp r0, #0\n    beq _0205922E\n    add r0, r4, #0\n    bl sub_020597A8\n    add r1, r4, #0\n    add r1, #0x84\n    ldrb r1, [r1]\n    add r0, r4, #0\n    bl sub_02059820\n    mov r0, #0x20\n    str r0, [r4, #0x34]\n    b _02059472\n    add r0, r4, #0\n    bl sub_02059A08\n    cmp r0, #1\n    beq _02059230\n    cmp r0, #2\n    beq _02059246\n    b _02059472\n    add r0, r4, #0\n    bl sub_02059AD8\n    mov r0, #0x81\n    ldrsb r1, [r4, r0]\n    add r0, r4, #0\n    add r0, #0x84\n    strb r1, [r0]\n    mov r0, #0x24\n    str r0, [r4, #0x34]\n    b _02059472\n    add r0, r4, #0\n    bl sub_02059AD8\n    add r0, r4, #0\n    mov r1, #0xff\n    add r0, #0x84\n    strb r1, [r0]\n    ldr r0, [r4, #0x2c]\n    ldr r2, [r4, #0xc]\n    mov r1, #0xf\n    bl ReadMsgDataIntoString\n    ldr r1, [r4, #0xc]\n    add r0, r4, #0\n    bl sub_02059478\n    str r0, [r4, #0x30]\n    mov r0, #2\n    bl sub_02037AC0\n    mov r0, #0x27\n    str r0, [r4, #0x34]\n    b _02059472\n    add r1, r4, #0\n    add r1, #0x84\n    ldrb r1, [r1]\n    ldr r0, [r4, #0x50]\n    bl Party_GetMonByIndex\n    bl Mon_GetBoxMon\n    add r2, r0, #0\n    ldr r0, [r4, #0x28]\n    mov r1, #1\n    bl BufferBoxMonSpeciesName\n    ldr r0, [r4, #0x2c]\n    ldr r2, [r4, #0xc]\n    mov r1, #0x12\n    bl ReadMsgDataIntoString\n    ldr r0, [r4, #0x28]\n    ldr r1, [r4, #0x10]\n    ldr r2, [r4, #0xc]\n    bl StringExpandPlaceholders\n    ldr r1, [r4, #0x10]\n    add r0, r4, #0\n    bl sub_02059478\n    str r0, [r4, #0x30]\n    mov r0, #0x25\n    str r0, [r4, #0x34]\n    b _02059472\n    ldr r0, [r4, #0x30]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl IsPrintFinished\n    cmp r0, #0\n    beq _02059348\n    add r0, r4, #0\n    mov r1, #0\n    bl sub_0205993C\n    mov r0, #0x26\n    str r0, [r4, #0x34]\n    b _02059472\n    add r0, r4, #0\n    bl sub_02059A08\n    cmp r0, #1\n    beq _020592FC\n    cmp r0, #2\n    bne _02059348\n    add r0, r4, #0\n    bl sub_02059AD8\n    ldr r0, [r4, #0x2c]\n    ldr r2, [r4, #0xc]\n    mov r1, #0x11\n    bl ReadMsgDataIntoString\n    ldr r1, [r4, #0xc]\n    add r0, r4, #0\n    bl sub_02059478\n    str r0, [r4, #0x30]\n    mov r0, #0x1f\n    str r0, [r4, #0x34]\n    b _02059472\n    mov r0, #0x81\n    ldrsb r0, [r4, r0]\n    cmp r0, #1\n    bne _02059334\n    add r0, r4, #0\n    bl sub_02059AD8\n    ldr r0, [r4, #0x2c]\n    ldr r2, [r4, #0xc]\n    mov r1, #0xe\n    bl ReadMsgDataIntoString\n    ldr r0, [r4, #0x28]\n    ldr r1, [r4, #0x10]\n    ldr r2, [r4, #0xc]\n    bl StringExpandPlaceholders\n    ldr r1, [r4, #0x10]\n    add r0, r4, #0\n    bl sub_02059478\n    str r0, [r4, #0x30]\n    mov r0, #2\n    bl sub_02037AC0\n    mov r0, #0x27\n    str r0, [r4, #0x34]\n    b _02059472\n    mov r0, #0\n    bl ov01_021E636C\n    mov r0, #0x21\n    str r0, [r4, #0x34]\n    b _02059472\n    bl IsPaletteFadeFinished\n    cmp r0, #0\n    bne _0205934A\n    b _02059472\n    add r0, r4, #0\n    mov r1, #0\n    bl sub_020594C8\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #0xb\n    str r0, [sp, #4]\n    add r3, r4, #0\n    add r3, #0x84\n    ldrb r3, [r3]\n    ldr r1, [r4, #0x24]\n    ldr r2, [r4, #0x50]\n    add r0, r4, #0\n    bl sub_02058AEC\n    mov r0, #0x22\n    str r0, [r4, #0x34]\n    b _02059472\n    ldr r1, [r4, #0x24]\n    add r0, r4, #0\n    bl sub_02058CD8\n    cmp r0, #0\n    beq _02059472\n    ldr r0, [r4, #0x24]\n    bl FieldSystem_LoadFieldOverlay\n    mov r0, #0x23\n    str r0, [r4, #0x34]\n    b _02059472\n    add r0, r4, #0\n    bl sub_02058D04\n    cmp r0, #0\n    beq _02059472\n    mov r0, #0x24\n    str r0, [r4, #0x34]\n    b _02059472\n    ldr r0, [r4, #0x30]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl IsPrintFinished\n    cmp r0, #0\n    beq _02059472\n    mov r0, #2\n    bl sub_02037B38\n    cmp r0, #0\n    beq _02059472\n    add r0, r4, #0\n    bl sub_0205975C\n    mov r0, #0x29\n    str r0, [r4, #0x34]\n    b _02059472\n    add r0, r4, #0\n    bl sub_02059798\n    cmp r0, #0\n    beq _02059472\n    add r0, r4, #0\n    add r0, #0x84\n    ldrb r0, [r0]\n    cmp r0, #0xff\n    bne _020593DC\n    mov r0, #4\n    bl sub_02037AC0\n    mov r0, #0x2c\n    str r0, [r4, #0x34]\n    b _02059472\n    add r0, r4, #0\n    add r0, #0x85\n    ldrb r0, [r0]\n    cmp r0, #0xff\n    bne _020593EC\n    mov r0, #0x2a\n    str r0, [r4, #0x34]\n    b _02059472\n    add r0, r4, #0\n    bl sub_020597D4\n    mov r0, #0x5d\n    bl sub_02037AC0\n    mov r0, #2\n    str r0, [r4, #0x34]\n    b _02059472\n    ldr r0, [r4, #0x2c]\n    ldr r2, [r4, #0xc]\n    mov r1, #0xf\n    bl ReadMsgDataIntoString\n    ldr r1, [r4, #0xc]\n    add r0, r4, #0\n    bl sub_02059478\n    str r0, [r4, #0x30]\n    add r0, r4, #0\n    mov r1, #0\n    add r0, #0x43\n    strb r1, [r0]\n    mov r0, #0x2b\n    str r0, [r4, #0x34]\n    b _02059472\n    ldr r0, [r4, #0x30]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl IsPrintFinished\n    cmp r0, #0\n    beq _02059472\n    add r0, r4, #0\n    add r0, #0x43\n    ldrb r0, [r0]\n    add r1, r0, #1\n    add r0, r4, #0\n    add r0, #0x43\n    strb r1, [r0]\n    add r0, r4, #0\n    add r0, #0x43\n    ldrb r0, [r0]\n    cmp r0, #0x3c\n    bls _02059472\n    mov r0, #4\n    bl sub_02037AC0\n    mov r0, #0x2c\n    str r0, [r4, #0x34]\n    b _02059472\n    mov r0, #4\n    bl sub_02037B38\n    cmp r0, #0\n    beq _02059472\n    add r0, r4, #0\n    add r0, #0x14\n    mov r1, #0\n    bl ClearFrameAndWindow2\n    mov r0, #0\n    ldr r2, [r4, #8]\n    add r1, r0, #0\n    blx r2\n    mov r0, #5\n    str r0, [r4, #0x34]\n    mov r0, #0\n    add sp, #8\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_02059478(void) {
    /* Original at 0x02059478 */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r4, r5, #0\n    add r4, #0x14\n    add r0, r4, #0\n    add r6, r1, #0\n    bl WindowIsInUse\n    cmp r0, #0\n    bne _020594AA\n    ldr r0, [r5, #0x24]\n    add r1, r4, #0\n    ldr r0, [r0, #8]\n    mov r2, #3\n    bl sub_0205B514\n    ldr r0, [r5, #0x24]\n    ldr r0, [r0, #0xc]\n    bl Save_PlayerData_GetOptionsAddr\n    add r1, r0, #0\n    add r0, r4, #0\n    bl sub_0205B564\n    b _020594B0\n    add r0, r4, #0\n    bl sub_0205B5A8\n    ldr r0, [r5, #0x24]\n    ldr r0, [r0, #0xc]\n    bl Save_PlayerData_GetOptionsAddr\n    add r2, r0, #0\n    add r0, r4, #0\n    add r1, r6, #0\n    mov r3, #1\n    bl sub_0205B5B4\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void sub_020594C8(void) {
    /* Original at 0x020594C8 */
    /* Requires manual decompilation - 45 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r0, #0x14\n    add r4, r1, #0\n    bl WindowIsInUse\n    cmp r0, #0\n    beq _020594FE\n    cmp r4, #0\n    beq _020594EE\n    add r0, r5, #0\n    add r0, #0x14\n    mov r1, #0\n    bl ClearFrameAndWindow2\n    add r0, r5, #0\n    add r0, #0x14\n    bl ClearWindowTilemapAndCopyToVram\n    add r0, r5, #0\n    add r0, #0x14\n    bl RemoveWindow\n    add r0, r5, #0\n    add r0, #0x14\n    bl InitWindow\n    add r0, r5, #0\n    add r0, #0x54\n    bl WindowIsInUse\n    cmp r0, #0\n    beq _0205951A\n    add r0, r5, #0\n    add r0, #0x54\n    bl RemoveWindow\n    add r0, r5, #0\n    add r0, #0x54\n    bl InitWindow\n    add r0, r5, #0\n    add r0, #0x64\n    bl WindowIsInUse\n    cmp r0, #0\n    beq _02059536\n    add r0, r5, #0\n    add r0, #0x64\n    bl RemoveWindow\n    add r5, #0x64\n    add r0, r5, #0\n    bl InitWindow\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_02059538(void) {
    /* Original at 0x02059538 */
    /* Requires manual decompilation - 120 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0x10]\n    add r6, r1, #0\n    cmp r0, #0\n    beq _02059546\n    b _0205964A\n    mov r0, #0xb\n    mov r1, #0x8c\n    bl Heap_AllocAtEnd\n    add r4, r0, #0\n    mov r1, #0\n    mov r2, #0x8c\n    bl MI_CpuFill8\n    add r0, r4, #0\n    mov r1, #5\n    add r0, #0x43\n    strb r1, [r0]\n    str r5, [r4, #0x24]\n    str r6, [r4, #8]\n    mov r0, #0xb\n    bl MessageFormat_New\n    str r0, [r4, #0x28]\n    mov r0, #0\n    mov r1, #0x1b\n    mov r2, #0xe\n    mov r3, #0xb\n    bl NewMsgDataFromNarc\n    str r0, [r4, #0x2c]\n    mov r0, #0xc8\n    mov r1, #0xb\n    bl String_New\n    str r0, [r4, #0xc]\n    mov r0, #0xc8\n    mov r1, #0xb\n    bl String_New\n    str r0, [r4, #0x10]\n    add r0, r4, #0\n    add r0, #0x14\n    bl InitWindow\n    add r0, r4, #0\n    add r0, #0x54\n    bl InitWindow\n    add r0, r4, #0\n    add r0, #0x64\n    bl InitWindow\n    mov r0, #0xb\n    bl ListMenuCursorNew\n    str r0, [r4, #0x78]\n    bl sub_0203993C\n    add r1, r4, #0\n    add r1, #0x88\n    strb r0, [r1]\n    mov r1, #0\n    str r1, [r4, #0x4c]\n    str r1, [r4, #0x48]\n    add r0, r4, #0\n    str r1, [r4, #0x50]\n    add r0, #0x89\n    strb r1, [r0]\n    bl sub_0203769C\n    add r1, r4, #0\n    add r1, #0x86\n    strh r0, [r1]\n    add r0, r4, #0\n    add r0, #0x86\n    ldrh r1, [r0]\n    mov r0, #1\n    eor r0, r1\n    bl sub_02034818\n    str r0, [r4, #0x74]\n    add r0, r4, #0\n    add r0, #0x88\n    ldrb r0, [r0]\n    cmp r0, #3\n    beq _020595F0\n    cmp r0, #4\n    beq _02059626\n    b _0205962C\n    bl sub_02059B08\n    add r6, r0, #0\n    mov r0, #0xb\n    add r1, r6, #0\n    bl Heap_AllocAtEnd\n    str r0, [r4, #0x4c]\n    mov r0, #0xb\n    add r1, r6, #0\n    bl Heap_AllocAtEnd\n    str r0, [r4, #0x48]\n    mov r0, #0xb\n    bl SaveArray_Party_Alloc\n    mov r1, #3\n    str r0, [r4, #0x50]\n    bl Party_InitWithMaxSize\n    add r0, r4, #0\n    mov r1, #5\n    add r0, #0x44\n    strb r1, [r0]\n    mov r0, #0x17\n    str r0, [r4, #0x34]\n    b _02059640\n    mov r0, #9\n    str r0, [r4, #0x34]\n    b _02059640\n    ldr r0, [r4, #0x24]\n    add r0, #0xa4\n    ldr r0, [r0]\n    cmp r0, #0\n    beq _0205963C\n    mov r0, #9\n    str r0, [r4, #0x34]\n    b _02059640\n    mov r0, #0\n    str r0, [r4, #0x34]\n    ldr r1, _0205964C ; =sub_02058D4C\n    add r0, r5, #0\n    add r2, r4, #0\n    bl FieldSystem_CreateTask\n    pop {r4, r5, r6, pc}\n    _0205964C: .word sub_02058D4C"
    );
    #endif
}

void sub_02059650(void) {
    /* Original at 0x02059650 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x50]\n    cmp r0, #0\n    beq _0205965E\n    bl Heap_Free\n    ldr r0, [r4, #0x4c]\n    cmp r0, #0\n    beq _02059668\n    bl Heap_Free\n    ldr r0, [r4, #0x48]\n    cmp r0, #0\n    beq _02059672\n    bl Heap_Free\n    ldr r0, [r4, #0x2c]\n    bl DestroyMsgData\n    ldr r0, [r4, #0x28]\n    bl MessageFormat_Delete\n    ldr r0, [r4, #0xc]\n    bl String_Delete\n    ldr r0, [r4, #0x10]\n    bl String_Delete\n    ldr r0, [r4, #0x78]\n    bl DestroyListMenuCursorObj\n    add r0, r4, #0\n    mov r1, #1\n    bl sub_020594C8\n    pop {r4, pc}"
    );
    #endif
}

void sub_0205969C(void) {
    TaskManager_GetEnvironment();
}

void sub_020596A8(void) {
    /* Original at 0x020596A8 */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r0, #0\n    ldr r0, [r7, #0x24]\n    add r5, r1, #0\n    ldr r0, [r0, #0xc]\n    bl SaveArray_Party_Get\n    str r0, [sp]\n    ldr r4, [r7, #0x4c]\n    bl sub_02070D90\n    add r6, r0, #0\n    lsl r0, r6, #1\n    add r0, r6, r0\n    str r5, [r4, r0]\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    beq _020596EC\n    mov r5, #0\n    add r1, r7, r5\n    add r1, #0x3d\n    ldrb r1, [r1]\n    ldr r0, [sp]\n    sub r1, r1, #1\n    bl Party_GetMonByIndex\n    add r1, r4, #0\n    add r2, r6, #0\n    bl MI_CpuCopy8\n    add r5, r5, #1\n    add r4, r4, r6\n    cmp r5, #3\n    blt _020596CE\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_020596F0(void) {
    /* Original at 0x020596F0 */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r0, #0x89\n    ldrb r1, [r0]\n    mov r0, #1\n    tst r1, r0\n    bne _02059734\n    ldr r4, [r5, #0x4c]\n    bl sub_02059B08\n    add r2, r0, #0\n    add r0, r5, #0\n    add r0, #0x86\n    ldrh r0, [r0]\n    cmp r0, #0\n    bne _0205971A\n    mov r0, #0x6a\n    add r1, r4, #0\n    bl sub_02037088\n    b _02059722\n    mov r0, #0x6a\n    add r1, r4, #0\n    bl sub_02036FD8\n    cmp r0, #0\n    beq _02059734\n    add r1, r5, #0\n    add r1, #0x89\n    ldrb r2, [r1]\n    mov r1, #1\n    add r5, #0x89\n    orr r1, r2\n    strb r1, [r5]\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_02059738(void) {
    /* Original at 0x02059738 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "add r0, #0x89\n    ldrb r0, [r0]\n    cmp r0, #3\n    bne _02059744\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void sub_02059748(void) {
    sub_02070D90();
}

void sub_0205975C(void) {
    /* Original at 0x0205975C */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    add r0, #0x86\n    ldrh r0, [r0]\n    cmp r0, #0\n    bne _02059776\n    add r1, r4, #0\n    mov r0, #0x6b\n    add r1, #0x84\n    mov r2, #1\n    bl sub_02037108\n    b _02059782\n    add r1, r4, #0\n    mov r0, #0x6b\n    add r1, #0x84\n    mov r2, #1\n    bl sub_02037030\n    cmp r0, #0\n    beq _02059794\n    add r1, r4, #0\n    add r1, #0x89\n    ldrb r2, [r1]\n    mov r1, #1\n    add r4, #0x89\n    orr r1, r2\n    strb r1, [r4]\n    pop {r4, pc}"
    );
    #endif
}

void sub_02059798(void) {
    /* Original at 0x02059798 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "add r0, #0x89\n    ldrb r0, [r0]\n    cmp r0, #3\n    bne _020597A4\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void sub_020597A8(void) {
    /* Original at 0x020597A8 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    bl sub_02070D90\n    add r6, r0, #0\n    ldr r0, [r5, #0x50]\n    mov r1, #3\n    bl Party_InitWithMaxSize\n    mov r4, #0\n    add r1, r4, #0\n    ldr r2, [r5, #0x48]\n    mul r1, r6\n    ldr r0, [r5, #0x50]\n    add r1, r2, r1\n    bl Party_AddMon\n    add r4, r4, #1\n    cmp r4, #3\n    blt _020597BC\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void sub_020597D4(void) {
    /* Original at 0x020597D4 */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r0, #0\n    bl sub_02070D90\n    add r4, r0, #0\n    add r0, r6, #0\n    add r0, #0x84\n    ldrb r0, [r0]\n    ldr r2, [r6, #0x48]\n    ldr r3, [r6, #0x4c]\n    add r1, r0, #0\n    mul r1, r4\n    add r0, r2, r1\n    add r1, r6, #0\n    add r1, #0x85\n    ldrb r1, [r1]\n    add r2, r1, #0\n    mul r2, r4\n    add r1, r3, r2\n    add r2, r4, #0\n    bl MI_CpuCopy8\n    ldr r0, [r6, #0x50]\n    mov r1, #3\n    bl Party_InitWithMaxSize\n    mov r5, #0\n    add r1, r5, #0\n    ldr r2, [r6, #0x4c]\n    mul r1, r4\n    ldr r0, [r6, #0x50]\n    add r1, r2, r1\n    bl Party_AddMon\n    add r5, r5, #1\n    cmp r5, #3\n    blt _0205980A\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void sub_02059820(void) {
    /* Original at 0x02059820 */
    /* Requires manual decompilation - 127 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x24\n    add r5, r0, #0\n    str r0, [sp, #0x20]\n    add r0, #0x54\n    str r1, [sp, #0x14]\n    str r0, [sp, #0x20]\n    bl WindowIsInUse\n    cmp r0, #0\n    bne _020598EC\n    mov r0, #1\n    mov r1, #0x1b\n    mov r2, #0xed\n    mov r3, #4\n    bl NewMsgDataFromNarc\n    str r0, [sp, #0x18]\n    bl sub_02070D90\n    str r0, [sp, #0x1c]\n    mov r0, #9\n    str r0, [sp]\n    mov r1, #0xa\n    str r1, [sp, #4]\n    mov r0, #8\n    str r0, [sp, #8]\n    mov r0, #0xd\n    str r0, [sp, #0xc]\n    str r1, [sp, #0x10]\n    ldr r0, [r5, #0x24]\n    ldr r1, [sp, #0x20]\n    ldr r0, [r0, #8]\n    mov r2, #3\n    mov r3, #0x15\n    bl AddWindowParameterized\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #4\n    str r0, [sp, #4]\n    ldr r0, [r5, #0x24]\n    mov r1, #3\n    ldr r0, [r0, #8]\n    mov r2, #1\n    mov r3, #0xb\n    bl LoadUserFrameGfx1\n    ldr r0, [sp, #0x20]\n    mov r1, #0xf\n    bl FillWindowPixelBuffer\n    mov r7, #0\n    add r6, r7, #0\n    add r4, r7, #0\n    ldr r0, [r5, #0x48]\n    mov r1, #5\n    add r0, r0, r6\n    mov r2, #0\n    bl GetMonData\n    add r1, r0, #0\n    ldr r0, [sp, #0x18]\n    ldr r2, [r5, #0xc]\n    bl ReadMsgDataIntoString\n    str r4, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    mov r0, #0\n    str r0, [sp, #8]\n    ldr r0, [sp, #0x20]\n    ldr r2, [r5, #0xc]\n    mov r1, #0\n    mov r3, #0x10\n    bl AddTextPrinterParameterized\n    ldr r0, [sp, #0x1c]\n    add r7, r7, #1\n    add r6, r6, r0\n    add r4, #0x10\n    cmp r7, #3\n    blt _0205988E\n    ldr r0, [r5, #0x2c]\n    ldr r2, [r5, #0xc]\n    mov r1, #0x15\n    bl ReadMsgDataIntoString\n    lsl r0, r7, #4\n    str r0, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    mov r1, #0\n    str r1, [sp, #8]\n    ldr r0, [sp, #0x20]\n    ldr r2, [r5, #0xc]\n    mov r3, #0x10\n    bl AddTextPrinterParameterized\n    ldr r0, [sp, #0x18]\n    bl DestroyMsgData\n    mov r0, #0x10\n    str r0, [sp]\n    ldr r0, [sp, #0x20]\n    mov r2, #0\n    ldrb r0, [r0, #8]\n    mov r1, #0xf\n    add r3, r2, #0\n    lsl r0, r0, #0x13\n    lsr r0, r0, #0x10\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x20]\n    bl FillWindowPixelRect\n    ldr r3, [sp, #0x14]\n    add r1, r5, #0\n    ldr r0, [r5, #0x78]\n    add r1, #0x54\n    mov r2, #0\n    lsl r3, r3, #4\n    bl ListMenuUpdateCursorObj\n    add r0, r5, #0\n    add r0, #0x54\n    mov r1, #0\n    mov r2, #1\n    mov r3, #0xb\n    bl DrawFrameAndWindow1\n    add r1, r5, #0\n    ldr r0, [sp, #0x14]\n    add r1, #0x81\n    strb r0, [r1]\n    add r0, r5, #0\n    mov r1, #4\n    add r0, #0x80\n    strb r1, [r0]\n    ldr r0, [sp, #0x20]\n    str r0, [r5, #0x7c]\n    add sp, #0x24\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_0205993C(void) {
    /* Original at 0x0205993C */
    /* Requires manual decompilation - 92 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    add r5, r0, #0\n    add r7, r5, #0\n    add r7, #0x64\n    add r0, r7, #0\n    str r1, [sp, #0x14]\n    bl WindowIsInUse\n    cmp r0, #0\n    bne _020599BE\n    mov r0, #0xb\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #6\n    str r0, [sp, #8]\n    mov r0, #0xd\n    str r0, [sp, #0xc]\n    mov r0, #0x5a\n    str r0, [sp, #0x10]\n    ldr r0, [r5, #0x24]\n    add r1, r7, #0\n    ldr r0, [r0, #8]\n    mov r2, #3\n    mov r3, #0x14\n    bl AddWindowParameterized\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #4\n    str r0, [sp, #4]\n    ldr r0, [r5, #0x24]\n    mov r1, #3\n    ldr r0, [r0, #8]\n    mov r2, #1\n    mov r3, #0xb\n    bl LoadUserFrameGfx1\n    add r0, r7, #0\n    mov r1, #0xf\n    bl FillWindowPixelBuffer\n    mov r6, #0\n    add r4, r6, #0\n    add r1, r6, #0\n    ldr r0, [r5, #0x2c]\n    ldr r2, [r5, #0xc]\n    add r1, #0x16\n    bl ReadMsgDataIntoString\n    str r4, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    mov r0, #0\n    str r0, [sp, #8]\n    ldr r2, [r5, #0xc]\n    add r0, r7, #0\n    mov r1, #0\n    mov r3, #0x10\n    bl AddTextPrinterParameterized\n    add r6, r6, #1\n    add r4, #0x10\n    cmp r6, #3\n    blt _02059994\n    add r0, r5, #0\n    mov r1, #3\n    add r0, #0x80\n    strb r1, [r0]\n    add r1, r5, #0\n    ldr r0, [sp, #0x14]\n    str r7, [r5, #0x7c]\n    add r1, #0x81\n    strb r0, [r1]\n    mov r0, #0x10\n    str r0, [sp]\n    ldrb r0, [r7, #8]\n    mov r2, #0\n    mov r1, #0xf\n    lsl r0, r0, #0x13\n    lsr r0, r0, #0x10\n    str r0, [sp, #4]\n    add r0, r7, #0\n    add r3, r2, #0\n    bl FillWindowPixelRect\n    ldr r3, [sp, #0x14]\n    ldr r0, [r5, #0x78]\n    ldr r1, [r5, #0x7c]\n    mov r2, #0\n    lsl r3, r3, #4\n    bl ListMenuUpdateCursorObj\n    ldr r0, [r5, #0x7c]\n    mov r1, #0\n    mov r2, #1\n    mov r3, #0xb\n    bl DrawFrameAndWindow1\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_02059A08(void) {
    /* Original at 0x02059A08 */
    /* Requires manual decompilation - 96 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #8\n    add r4, r0, #0\n    ldr r0, _02059AD0 ; =gSystem\n    mov r1, #0x40\n    ldr r0, [r0, #0x48]\n    tst r1, r0\n    beq _02059A32\n    mov r0, #0x81\n    ldrsb r0, [r4, r0]\n    cmp r0, #0\n    bne _02059A28\n    add r0, r4, #0\n    add r0, #0x80\n    ldrb r0, [r0]\n    b _02059A28\n    sub r1, r0, #1\n    add r0, r4, #0\n    add r0, #0x81\n    strb r1, [r0]\n    b _02059A94\n    mov r1, #0x80\n    tst r1, r0\n    beq _02059A56\n    mov r0, #0x81\n    ldrsb r1, [r4, r0]\n    add r0, r4, #0\n    add r0, #0x80\n    ldrb r0, [r0]\n    sub r0, r0, #1\n    cmp r1, r0\n    bne _02059A4C\n    mov r1, #0\n    b _02059A4E\n    add r1, r1, #1\n    add r0, r4, #0\n    add r0, #0x81\n    strb r1, [r0]\n    b _02059A94\n    mov r1, #1\n    tst r1, r0\n    beq _02059A7C\n    ldr r0, _02059AD4 ; =0x000005DC\n    bl PlaySE\n    mov r0, #0x81\n    ldrsb r1, [r4, r0]\n    add r4, #0x80\n    ldrb r0, [r4]\n    sub r0, r0, #1\n    cmp r1, r0\n    bge _02059A76\n    add sp, #8\n    mov r0, #1\n    pop {r4, pc}\n    add sp, #8\n    mov r0, #2\n    pop {r4, pc}\n    mov r1, #2\n    tst r0, r1\n    beq _02059A8E\n    ldr r0, _02059AD4 ; =0x000005DC\n    bl PlaySE\n    add sp, #8\n    mov r0, #2\n    pop {r4, pc}\n    add sp, #8\n    mov r0, #0\n    pop {r4, pc}\n    ldr r0, _02059AD4 ; =0x000005DC\n    bl PlaySE\n    ldr r0, [r4, #0x7c]\n    mov r1, #0x10\n    str r1, [sp]\n    ldrb r1, [r0, #8]\n    mov r2, #0\n    add r3, r2, #0\n    lsl r1, r1, #0x13\n    lsr r1, r1, #0x10\n    str r1, [sp, #4]\n    mov r1, #0xf\n    bl FillWindowPixelRect\n    mov r3, #0x81\n    ldrsb r3, [r4, r3]\n    ldr r0, [r4, #0x78]\n    ldr r1, [r4, #0x7c]\n    mov r2, #0\n    lsl r3, r3, #4\n    bl ListMenuUpdateCursorObj\n    ldr r0, [r4, #0x7c]\n    bl CopyWindowPixelsToVram_TextMode\n    mov r0, #0\n    add sp, #8\n    pop {r4, pc}\n    nop\n    _02059AD0: .word gSystem\n    _02059AD4: .word 0x000005DC"
    );
    #endif
}

void sub_02059AD8(void) {
    sub_0200E5D4();
}

void sub_02059AE4(void) {
    /* Original at 0x02059AE4 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    add r0, r3, #0\n    bl sub_0205969C\n    add r1, r0, #0\n    add r1, #0x86\n    ldrh r1, [r1]\n    cmp r1, r4\n    beq _02059B06\n    add r1, r0, #0\n    add r1, #0x89\n    ldrb r2, [r1]\n    mov r1, #2\n    add r0, #0x89\n    orr r1, r2\n    strb r1, [r0]\n    pop {r4, pc}"
    );
    #endif
}

void sub_02059B08(void) {
    sub_02070D90();
}

void sub_02059B18(void) {
    sub_0205969C(0);
}

void sub_02059B34(void) {
    /* Original at 0x02059B34 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r0, r3, #0\n    add r4, r2, #0\n    bl sub_0205969C\n    add r1, r0, #0\n    add r1, #0x86\n    ldrh r1, [r1]\n    cmp r1, r5\n    beq _02059B60\n    ldrb r2, [r4]\n    add r1, r0, #0\n    add r1, #0x85\n    strb r2, [r1]\n    add r1, r0, #0\n    add r1, #0x89\n    ldrb r2, [r1]\n    mov r1, #2\n    add r0, #0x89\n    orr r1, r2\n    strb r1, [r0]\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_02059B64(void) {
    /* Original at 0x02059B64 */
    /* Requires manual decompilation - 185 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r0, #0\n    bl TaskManager_GetFieldSystem\n    add r5, r0, #0\n    add r0, r4, #0\n    bl TaskManager_GetEnvironment\n    add r4, r0, #0\n    mov r1, #0\n    ldr r0, [r4, #0x24]\n    add r2, r1, #0\n    bl sub_020588DC\n    ldr r1, [r4, #0x28]\n    add r6, r0, #0\n    cmp r1, #7\n    bls _02059B8A\n    b _02059D32\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _02059B96: ; jump table\n    mov r0, #4\n    bl MessageFormat_New\n    str r0, [r4, #0x18]\n    mov r0, #0\n    mov r1, #0x1b\n    mov r2, #0xe\n    mov r3, #4\n    bl NewMsgDataFromNarc\n    str r0, [r4, #0x1c]\n    mov r0, #0xc8\n    mov r1, #4\n    bl String_New\n    str r0, [r4]\n    mov r0, #0xc8\n    mov r1, #4\n    bl String_New\n    str r0, [r4, #4]\n    ldrb r0, [r6]\n    cmp r0, #0xc\n    bhi _02059C0E\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02059BE2: ; jump table\n    ldrb r0, [r6, #3]\n    add r1, r0, #2\n    b _02059C10\n    mov r1, #0x19\n    b _02059C10\n    mov r1, #0x1a\n    b _02059C10\n    mov r1, #0x1b\n    b _02059C10\n    mov r1, #2\n    ldr r0, [r4, #0x1c]\n    ldr r2, [r4]\n    bl ReadMsgDataIntoString\n    ldr r0, [r4, #0x24]\n    bl sub_02034818\n    add r2, r0, #0\n    ldr r0, [r4, #0x18]\n    mov r1, #0\n    bl BufferPlayersName\n    ldr r0, [r4, #0x18]\n    ldr r1, [r4, #4]\n    ldr r2, [r4]\n    bl StringExpandPlaceholders\n    add r1, r4, #0\n    ldr r0, [r5, #8]\n    add r1, #8\n    mov r2, #3\n    bl sub_0205B514\n    ldr r0, [r5, #0xc]\n    bl Save_PlayerData_GetOptionsAddr\n    add r1, r0, #0\n    add r0, r4, #0\n    add r0, #8\n    bl sub_0205B564\n    ldr r0, [r5, #0xc]\n    bl Save_PlayerData_GetOptionsAddr\n    add r2, r0, #0\n    add r0, r4, #0\n    ldr r1, [r4, #4]\n    add r0, #8\n    mov r3, #1\n    bl sub_0205B5B4\n    str r0, [r4, #0x20]\n    ldr r0, [r4, #0x28]\n    add r0, r0, #1\n    str r0, [r4, #0x28]\n    b _02059D36\n    ldr r0, [r4, #0x20]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl IsPrintFinished\n    cmp r0, #0\n    beq _02059D36\n    ldr r0, _02059D3C ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #1\n    tst r0, r1\n    beq _02059D36\n    ldr r0, [r4, #0x1c]\n    bl DestroyMsgData\n    ldr r0, [r4, #0x18]\n    bl MessageFormat_Delete\n    ldr r0, [r4]\n    bl String_Delete\n    ldr r0, [r4, #4]\n    bl String_Delete\n    add r0, r4, #0\n    add r0, #8\n    mov r1, #0\n    bl ClearFrameAndWindow2\n    add r0, r4, #0\n    add r0, #8\n    bl RemoveWindow\n    mov r0, #0\n    bl ov01_021E636C\n    ldr r0, [r4, #0x28]\n    add r0, r0, #1\n    str r0, [r4, #0x28]\n    b _02059D36\n    bl IsPaletteFadeFinished\n    cmp r0, #0\n    beq _02059D36\n    ldr r0, [r4, #0x28]\n    add r0, r0, #1\n    str r0, [r4, #0x28]\n    b _02059D36\n    add r1, r4, #0\n    ldr r2, _02059D40 ; =0x0000066C\n    add r1, #0x2c\n    bl MI_CpuCopy8\n    add r1, r4, #0\n    add r0, r5, #0\n    add r1, #0x2c\n    bl TrainerCard_LaunchApp\n    ldr r0, [r4, #0x28]\n    add r0, r0, #1\n    str r0, [r4, #0x28]\n    b _02059D36\n    add r0, r5, #0\n    bl FieldSystem_ApplicationIsRunning\n    cmp r0, #0\n    bne _02059D36\n    ldr r0, [r4, #0x28]\n    add r0, r0, #1\n    str r0, [r4, #0x28]\n    b _02059D36\n    add r0, r5, #0\n    bl FieldSystem_LoadFieldOverlay\n    ldr r0, [r4, #0x28]\n    add r0, r0, #1\n    str r0, [r4, #0x28]\n    b _02059D36\n    add r0, r5, #0\n    bl sub_020505C8\n    cmp r0, #0\n    bne _02059D36\n    mov r0, #1\n    bl ov01_021E636C\n    bl sub_02056E60\n    ldr r0, [r4, #0x28]\n    add r0, r0, #1\n    str r0, [r4, #0x28]\n    b _02059D36\n    bl sub_02057F70\n    add r0, r4, #0\n    bl Heap_Free\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    nop\n    _02059D3C: .word gSystem\n    _02059D40: .word 0x0000066C"
    );
    #endif
}

void sub_02059D44(void) {
    /* Original at 0x02059D44 */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    str r0, [sp]\n    bl sub_0203769C\n    add r5, r0, #0\n    bl sub_02057ADC\n    add r7, r0, #0\n    add r0, r5, #0\n    bl sub_02057B14\n    add r6, r0, #0\n    mov r4, #0\n    bl sub_02037454\n    cmp r0, #0\n    ble _02059DA6\n    cmp r4, r5\n    beq _02059D9C\n    add r0, r4, #0\n    bl sub_02057A34\n    cmp r7, r0\n    bne _02059D9C\n    add r0, r4, #0\n    bl sub_02057A88\n    cmp r6, r0\n    bne _02059D9C\n    ldr r1, _02059DA8 ; =0x000006A8\n    mov r0, #0xb\n    bl Heap_AllocAtEnd\n    add r2, r0, #0\n    str r4, [r2, #0x24]\n    mov r0, #0\n    str r0, [r2, #0x28]\n    ldr r0, [sp]\n    ldr r1, _02059DAC ; =sub_02059B64\n    bl FieldSystem_CreateTask\n    bl sub_0203E2F4\n    pop {r3, r4, r5, r6, r7, pc}\n    add r4, r4, #1\n    bl sub_02037454\n    cmp r4, r0\n    blt _02059D66\n    pop {r3, r4, r5, r6, r7, pc}\n    _02059DA8: .word 0x000006A8\n    _02059DAC: .word sub_02059B64"
    );
    #endif
}

void sub_02059DB0(void) {
    /* Original at 0x02059DB0 */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    bne _02059DBA\n    bl GF_AssertFail\n    add r0, r4, #0\n    add r0, #0x80\n    ldr r0, [r0]\n    cmp r0, #0\n    beq _02059DC8\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    mov r2, #0x2a\n    mov r0, #3\n    mov r1, #0x1f\n    lsl r2, r2, #6\n    bl Heap_CreateAtEnd\n    add r0, r4, #0\n    bl sub_02059E1C\n    add r5, r0, #0\n    bne _02059DE4\n    add r0, r4, #0\n    add r0, #0x80\n    ldr r5, [r0]\n    add r0, r4, #0\n    bl sub_02091574\n    mov r0, #2\n    bl sub_02038C1C\n    ldr r1, _02059E00 ; =sub_02059E88\n    add r0, r5, #0\n    mov r2, #0x28\n    bl sub_0205A034\n    add r0, r5, #0\n    pop {r3, r4, r5, pc}\n    nop\n    _02059E00: .word sub_02059E88"
    );
    #endif
}

void sub_02059E04(void) {
    sub_0205A034(5);
}

void sub_02059E1C(void) {
    /* Original at 0x02059E1C */
    /* Requires manual decompilation - 45 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r1, r5, #0\n    add r1, #0x80\n    ldr r1, [r1]\n    cmp r1, #0\n    beq _02059E2E\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    bl FieldSystem_GetSaveData\n    add r6, r0, #0\n    bl sub_02037F18\n    mov r1, #0x19\n    mov r0, #0x1f\n    lsl r1, r1, #4\n    bl Heap_Alloc\n    mov r2, #0x19\n    mov r1, #0\n    lsl r2, r2, #4\n    add r4, r0, #0\n    bl MI_CpuFill8\n    mov r0, #0\n    str r0, [r4, #0x10]\n    mov r0, #0x28\n    str r0, [r4, #0x14]\n    ldr r0, _02059E84 ; =sub_0205A03C\n    add r1, r4, #0\n    mov r2, #0xa\n    bl SysTask_CreateOnMainQueue\n    str r0, [r4, #0xc]\n    str r5, [r4]\n    str r6, [r4, #4]\n    add r0, r6, #0\n    bl Save_PlayerData_GetProfile\n    str r0, [r4, #8]\n    add r0, r4, #0\n    bl sub_0205ABBC\n    mov r0, #0x15\n    lsl r0, r0, #4\n    add r0, r4, r0\n    bl sub_0203778C\n    add r0, r4, #0\n    pop {r4, r5, r6, pc}\n    nop\n    _02059E84: .word sub_0205A03C"
    );
    #endif
}

void sub_02059E88(void) {
    /* Original at 0x02059E88 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #8\n    add r4, r0, #0\n    bl sub_02035650\n    cmp r0, #0\n    beq _02059EB4\n    add r0, sp, #0\n    bl MailMsg_Init_Default\n    add r0, sp, #0\n    bl sub_0205AB88\n    add r0, r4, #0\n    add r1, sp, #0\n    bl sub_0205AA6C\n    ldr r1, _02059EB8 ; =sub_02059EBC\n    add r0, r4, #0\n    mov r2, #0x28\n    bl sub_0205A034\n    add sp, #8\n    pop {r4, pc}\n    _02059EB8: .word sub_02059EBC"
    );
    #endif
}

void sub_02059EBC(void) {
    /* Original at 0x02059EBC */
    /* Requires manual decompilation - 47 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl sub_02037FCC\n    cmp r0, #0\n    beq _02059ED8\n    ldr r0, _02059F24 ; =_021D41CC\n    mov r2, #0\n    str r2, [r0]\n    ldr r1, _02059F28 ; =sub_02059F78\n    add r0, r4, #0\n    bl sub_0205A034\n    pop {r4, pc}\n    ldr r0, [r4, #0x20]\n    cmp r0, #0\n    beq _02059F22\n    mov r0, #2\n    str r0, [r4, #0x28]\n    ldr r0, [r4, #0x20]\n    cmp r0, #1\n    bne _02059F08\n    ldr r0, [r4, #0x30]\n    cmp r0, #5\n    bne _02059EF6\n    ldr r0, [r4, #0x18]\n    bl sub_0203894C\n    b _02059F18\n    cmp r0, #6\n    ldr r0, [r4, #0x18]\n    bne _02059F02\n    bl sub_0203898C\n    b _02059F18\n    bl sub_02037F64\n    b _02059F18\n    cmp r0, #2\n    bne _02059F18\n    mov r0, #0\n    bl sub_0208F814\n    ldr r0, [r4, #0x18]\n    bl sub_02038918\n    ldr r1, _02059F2C ; =sub_0205A0B4\n    add r0, r4, #0\n    mov r2, #0xc\n    bl sub_0205A034\n    pop {r4, pc}\n    _02059F24: .word _021D41CC\n    _02059F28: .word sub_02059F78\n    _02059F2C: .word sub_0205A0B4"
    );
    #endif
}

void sub_02059F30(void) {
    /* Original at 0x02059F30 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl sub_02038070\n    cmp r0, #1\n    bne _02059F4C\n    ldr r0, [r4]\n    bl sub_02091574\n    ldr r1, _02059F50 ; =sub_02059EBC\n    add r0, r4, #0\n    mov r2, #2\n    bl sub_0205A034\n    pop {r4, pc}\n    nop\n    _02059F50: .word sub_02059EBC"
    );
    #endif
}

void sub_02059F54(void) {
    /* Original at 0x02059F54 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    mov r5, #0\n    mov r4, #1\n    add r0, r4, #0\n    bl sub_02034818\n    cmp r0, #0\n    beq _02059F66\n    add r5, r5, #1\n    add r4, r4, #1\n    cmp r4, #5\n    blt _02059F5A\n    cmp r5, #1\n    blt _02059F74\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_02059F78(void) {
    /* Original at 0x02059F78 */
    /* Requires manual decompilation - 49 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x14]\n    cmp r0, #0\n    ble _02059F88\n    sub r0, r0, #1\n    str r0, [r4, #0x14]\n    pop {r3, r4, r5, pc}\n    ldr r0, _02059FEC ; =_021D41CC\n    ldr r1, [r0]\n    add r1, r1, #1\n    str r1, [r0]\n    bl sub_02035878\n    add r5, r0, #0\n    bl sub_020376F8\n    cmp r0, #0\n    beq _02059FC8\n    bl sub_02059F54\n    cmp r0, #1\n    bne _02059FC8\n    ldrb r0, [r5, #0x1c]\n    cmp r0, #4\n    beq _02059FC8\n    bl sub_02034434\n    mov r0, #1\n    add r1, r0, #0\n    bl sub_020398D4\n    mov r0, #0xb\n    bl sub_0205A904\n    ldr r1, _02059FF0 ; =sub_02059FF8\n    add r0, r4, #0\n    mov r2, #0\n    bl sub_0205A034\n    bl sub_02037FCC\n    cmp r0, #0\n    bne _02059FEA\n    bl sub_02037FF0\n    add r0, r4, #0\n    bl sub_0205ABBC\n    mov r0, #0\n    bl sub_0205A904\n    ldr r1, _02059FF4 ; =sub_02059F30\n    add r0, r4, #0\n    mov r2, #2\n    bl sub_0205A034\n    pop {r3, r4, r5, pc}\n    _02059FEC: .word _021D41CC\n    _02059FF0: .word sub_02059FF8\n    _02059FF4: .word sub_02059F30"
    );
    #endif
}

void sub_02059FF8(void) {
    /* Original at 0x02059FF8 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl sub_02039918\n    cmp r0, #0\n    beq _0205A00C\n    bl sub_020376F8\n    cmp r0, #0\n    beq _0205A02E\n    bl sub_020376F8\n    cmp r0, #0\n    bne _0205A02E\n    bl sub_02037FF0\n    add r0, r4, #0\n    bl sub_0205ABBC\n    mov r0, #0\n    bl sub_0205A904\n    ldr r1, _0205A030 ; =sub_02059F30\n    add r0, r4, #0\n    mov r2, #2\n    bl sub_0205A034\n    pop {r4, pc}\n    _0205A030: .word sub_02059F30"
    );
    #endif
}

void sub_0205A034(void) {
    ((u32*)r0)[0x10] = r1;
    ((u32*)r0)[0x14] = r2;
}

void sub_0205A03C(void) {
    /* Original at 0x0205A03C */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    str r1, [sp]\n    cmp r1, #0\n    bne _0205A04A\n    bl SysTask_Destroy\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r7, #0x11\n    ldr r5, _0205A078 ; =_021D41D8\n    mov r6, #0\n    add r4, r1, #0\n    lsl r7, r7, #4\n    add r0, r6, #0\n    bl sub_02035754\n    mov r1, #0x11\n    lsl r1, r1, #4\n    str r0, [r4, r1]\n    ldr r0, [r4, r7]\n    add r6, r6, #1\n    add r4, r4, #4\n    stmia r5!, {r0}\n    cmp r6, #0x10\n    blt _0205A054\n    ldr r0, [sp]\n    ldr r1, [r0, #0x10]\n    cmp r1, #0\n    beq _0205A076\n    blx r1\n    pop {r3, r4, r5, r6, r7, pc}\n    _0205A078: .word _021D41D8"
    );
    #endif
}

void sub_0205A07C(void) {
    /* Original at 0x0205A07C */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x14]\n    cmp r0, #0\n    beq _0205A08C\n    sub r0, r0, #1\n    str r0, [r4, #0x14]\n    pop {r4, pc}\n    bl sub_02038094\n    ldr r1, _0205A09C ; =sub_0205A0A0\n    add r0, r4, #0\n    mov r2, #0\n    bl sub_0205A034\n    pop {r4, pc}\n    _0205A09C: .word sub_0205A0A0"
    );
    #endif
}

void sub_0205A0A0(void) {
    /* Original at 0x0205A0A0 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl sub_02037474\n    cmp r0, #0\n    bne _0205A0B2\n    add r0, r4, #0\n    bl sub_0205A1D4\n    pop {r4, pc}"
    );
    #endif
}

void sub_0205A0B4(void) {
    /* Original at 0x0205A0B4 */
    /* Requires manual decompilation - 38 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl sub_02037F94\n    cmp r0, #1\n    bne _0205A0D0\n    bl sub_02034434\n    ldr r1, _0205A108 ; =sub_0205A144\n    add r0, r4, #0\n    mov r2, #3\n    bl sub_0205A034\n    pop {r4, pc}\n    bl sub_020376F8\n    cmp r0, #0\n    beq _0205A0E8\n    mov r2, #0\n    str r2, [r4, #0x20]\n    mov r0, #3\n    str r0, [r4, #0x1c]\n    ldr r1, _0205A10C ; =sub_02059F78\n    add r0, r4, #0\n    bl sub_0205A034\n    bl sub_02037F94\n    cmp r0, #0\n    beq _0205A106\n    ldr r1, _0205A110 ; =sub_0205A114\n    add r0, r4, #0\n    mov r2, #2\n    bl sub_0205A034\n    mov r1, #0\n    str r1, [r4, #0x24]\n    mov r0, #2\n    str r0, [r4, #0x1c]\n    str r1, [r4, #0x20]\n    str r1, [r4, #0x44]\n    pop {r4, pc}\n    _0205A108: .word sub_0205A144\n    _0205A10C: .word sub_02059F78\n    _0205A110: .word sub_0205A114"
    );
    #endif
}

void sub_0205A114(void) {
    /* Original at 0x0205A114 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4]\n    bl FieldSystem_TaskIsRunning\n    cmp r0, #0\n    bne _0205A13C\n    bl sub_02037FF0\n    add r0, r4, #0\n    bl sub_0205ABBC\n    mov r0, #0\n    bl sub_0205A904\n    ldr r1, _0205A140 ; =sub_02059F30\n    add r0, r4, #0\n    mov r2, #2\n    bl sub_0205A034\n    pop {r4, pc}\n    nop\n    _0205A140: .word sub_02059F30"
    );
    #endif
}

void sub_0205A144(void) {
    /* Original at 0x0205A144 */
    /* Requires manual decompilation - 41 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl sub_02037F94\n    cmp r0, #1\n    bne _0205A178\n    bl sub_0203769C\n    bl sub_02034818\n    cmp r0, #0\n    beq _0205A1A0\n    mov r1, #0\n    str r1, [r4, #0x20]\n    mov r0, #1\n    str r0, [r4, #0x1c]\n    str r1, [r4, #0x44]\n    add r1, r0, #0\n    bl sub_020398D4\n    ldr r1, _0205A1A4 ; =sub_0205A1AC\n    add r0, r4, #0\n    mov r2, #3\n    bl sub_0205A034\n    pop {r4, pc}\n    bl sub_02037F94\n    cmp r0, #0\n    bne _0205A1A0\n    bl sub_02037FF0\n    add r0, r4, #0\n    bl sub_0205ABBC\n    ldr r1, _0205A1A8 ; =sub_02059F30\n    add r0, r4, #0\n    mov r2, #2\n    bl sub_0205A034\n    mov r1, #0\n    str r1, [r4, #0x24]\n    mov r0, #2\n    str r0, [r4, #0x1c]\n    str r1, [r4, #0x20]\n    str r1, [r4, #0x44]\n    pop {r4, pc}\n    nop\n    _0205A1A4: .word sub_0205A1AC\n    _0205A1A8: .word sub_02059F30"
    );
    #endif
}

void sub_0205A1AC(void) {
    /* Original at 0x0205A1AC */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl sub_02037F94\n    cmp r0, #0\n    bne _0205A1CC\n    bl sub_02037FF0\n    add r0, r4, #0\n    bl sub_0205ABBC\n    ldr r1, _0205A1D0 ; =sub_02059F30\n    add r0, r4, #0\n    mov r2, #2\n    bl sub_0205A034\n    pop {r4, pc}\n    nop\n    _0205A1D0: .word sub_02059F30"
    );
    #endif
}

void sub_0205A1D4(void) {
    /* Original at 0x0205A1D4 */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    beq _0205A1EC\n    ldr r0, [r4, #0xc]\n    bl SysTask_Destroy\n    add r0, r4, #0\n    bl Heap_Free\n    mov r0, #0x1f\n    bl Heap_Destroy\n    pop {r4, pc}"
    );
    #endif
}

void sub_0205A1F0(void) {
    /* Original at 0x0205A1F0 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0]\n    bx lr"
    );
    #endif
}

void sub_0205A1F4(void) {
    /* Original at 0x0205A1F4 */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "lsl r1, r1, #2\n    add r1, r0, r1\n    mov r0, #0x11\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bx lr"
    );
    #endif
}

void sub_0205A200(void) {
    /* Original at 0x0205A200 */
    /* Requires manual decompilation - 50 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r1, #0\n    add r4, r0, #0\n    sub r0, r5, #1\n    bl sub_02035798\n    add r6, r0, #0\n    add r0, r4, #0\n    bl sub_0205ABB0\n    cmp r6, #0\n    bne _0205A21C\n    mov r0, #5\n    pop {r4, r5, r6, pc}\n    sub r0, r5, #1\n    lsl r0, r0, #2\n    add r1, r4, r0\n    mov r0, #0x11\n    lsl r0, r0, #4\n    ldr r1, [r1, r0]\n    cmp r1, #0\n    bne _0205A230\n    mov r0, #5\n    pop {r4, r5, r6, pc}\n    add r1, #0x50\n    ldr r0, _0205A280 ; =_021D41CC\n    add r1, #0x30\n    str r1, [r0, #4]\n    ldrb r0, [r1, #0x1c]\n    cmp r0, #0xd\n    bhi _0205A27A\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0205A24A: ; jump table\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    mov r0, #2\n    pop {r4, r5, r6, pc}\n    mov r0, #3\n    pop {r4, r5, r6, pc}\n    mov r0, #4\n    pop {r4, r5, r6, pc}\n    mov r0, #5\n    pop {r4, r5, r6, pc}\n    mov r0, #5\n    pop {r4, r5, r6, pc}\n    nop\n    _0205A280: .word _021D41CC"
    );
    #endif
}

void sub_0205A284(void) {
    /* Original at 0x0205A284 */
    /* Requires manual decompilation - 92 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    sub r1, r1, #1\n    lsl r3, r1, #2\n    add r4, r0, r3\n    mov r3, #0x11\n    lsl r3, r3, #4\n    ldr r4, [r4, r3]\n    cmp r4, #0\n    bne _0205A29C\n    mov r0, #5\n    pop {r3, r4}\n    bx lr\n    add r4, #0x50\n    ldr r3, _0205A354 ; =_021D41CC\n    add r4, #0x30\n    str r4, [r3, #4]\n    ldrb r3, [r4, #0x1c]\n    cmp r3, #0xd\n    bhi _0205A34E\n    add r3, r3, r3\n    add r3, pc\n    ldrh r3, [r3, #6]\n    lsl r3, r3, #0x10\n    asr r3, r3, #0x10\n    add pc, r3\n    _0205A2B6: ; jump table\n    cmp r2, #3\n    beq _0205A2DC\n    mov r0, #5\n    pop {r3, r4}\n    bx lr\n    mov r2, #5\n    str r2, [r0, #0x30]\n    str r1, [r0, #0x18]\n    mov r2, #1\n    str r2, [r0, #0x20]\n    mov r1, #0\n    str r1, [r0, #0x24]\n    str r1, [r0, #0x1c]\n    add r0, r2, #0\n    pop {r3, r4}\n    bx lr\n    cmp r2, #1\n    beq _0205A2FC\n    mov r0, #5\n    pop {r3, r4}\n    bx lr\n    str r1, [r0, #0x18]\n    mov r2, #1\n    str r2, [r0, #0x20]\n    mov r1, #0\n    str r1, [r0, #0x24]\n    str r1, [r0, #0x1c]\n    add r0, r2, #0\n    pop {r3, r4}\n    bx lr\n    cmp r2, #2\n    beq _0205A318\n    mov r0, #5\n    pop {r3, r4}\n    bx lr\n    str r1, [r0, #0x18]\n    mov r1, #2\n    str r1, [r0, #0x20]\n    mov r1, #0\n    str r1, [r0, #0x24]\n    str r1, [r0, #0x1c]\n    mov r0, #1\n    pop {r3, r4}\n    bx lr\n    cmp r2, #4\n    beq _0205A334\n    mov r0, #5\n    pop {r3, r4}\n    bx lr\n    mov r2, #6\n    str r2, [r0, #0x30]\n    str r1, [r0, #0x18]\n    mov r2, #1\n    str r2, [r0, #0x20]\n    mov r1, #0\n    str r1, [r0, #0x1c]\n    add r0, r2, #0\n    pop {r3, r4}\n    bx lr\n    mov r0, #5\n    pop {r3, r4}\n    bx lr\n    mov r0, #5\n    pop {r3, r4}\n    bx lr\n    _0205A354: .word _021D41CC"
    );
    #endif
}

void sub_0205A358(void) {
    /* Original at 0x0205A358 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0, #0x1c]\n    bx lr"
    );
    #endif
}

void sub_0205A35C(void) {
    /* Original at 0x0205A35C */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x44]\n    cmp r0, #0\n    beq _0205A36A\n    mov r0, #7\n    pop {r4, pc}\n    bl sub_02037454\n    cmp r0, #2\n    bge _0205A376\n    mov r0, #7\n    pop {r4, pc}\n    bl sub_0203769C\n    cmp r0, #0\n    bne _0205A38A\n    bl sub_02037FCC\n    cmp r0, #1\n    bne _0205A396\n    ldr r0, [r4, #0x40]\n    pop {r4, pc}\n    bl sub_02037F94\n    cmp r0, #1\n    bne _0205A396\n    ldr r0, [r4, #0x40]\n    pop {r4, pc}\n    mov r0, #7\n    pop {r4, pc}"
    );
    #endif
}

void sub_0205A39C(void) {
    sub_02037FCC(7);
}

void sub_0205A3B0(void) {
    /* Original at 0x0205A3B0 */
    /* Requires manual decompilation - 40 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r2, #0\n    add r0, sp, #0\n    strb r4, [r0, #2]\n    cmp r1, #0\n    beq _0205A3C4\n    cmp r1, #1\n    beq _0205A3DC\n    pop {r3, r4, r5, pc}\n    ldr r1, [r5, #0x44]\n    cmp r1, #0\n    bne _0205A404\n    ldrb r0, [r0, #2]\n    add r1, sp, #0\n    add r1, #2\n    str r0, [r5, #0x34]\n    mov r0, #0x63\n    mov r2, #1\n    bl sub_02037030\n    pop {r3, r4, r5, pc}\n    cmp r4, #0\n    bne _0205A3F4\n    ldr r1, [r5, #0x30]\n    mov r2, #1\n    strb r1, [r0, #1]\n    add r1, sp, #0\n    mov r0, #0x67\n    add r1, #1\n    bl sub_02037108\n    str r4, [r5, #0x3c]\n    pop {r3, r4, r5, pc}\n    mov r1, #7\n    strb r1, [r0]\n    mov r0, #0x67\n    add r1, sp, #0\n    mov r2, #1\n    bl sub_02037108\n    str r4, [r5, #0x3c]\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_0205A408(void) {
    /* Original at 0x0205A408 */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void sub_0205A40C(void) {
    /* Original at 0x0205A40C */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void sub_0205A410(void) {
    /* Original at 0x0205A410 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r3, #0\n    add r0, r4, #0\n    add r0, #0x80\n    ldr r0, [r0]\n    ldr r1, _0205A42C ; =sub_02059EBC\n    mov r2, #2\n    bl sub_0205A034\n    add r4, #0x80\n    ldr r0, [r4]\n    bl sub_0205ABBC\n    pop {r4, pc}\n    _0205A42C: .word sub_02059EBC"
    );
    #endif
}

void sub_0205A430(void) {
    /* Original at 0x0205A430 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "add r3, #0x80\n    ldr r1, [r3]\n    ldr r0, [r1, #0x44]\n    cmp r0, #0\n    bne _0205A444\n    ldrb r0, [r2]\n    str r0, [r1, #0x30]\n    ldrb r1, [r2]\n    ldr r0, _0205A448 ; =_021D41CC\n    str r1, [r0, #8]\n    bx lr\n    nop\n    _0205A448: .word _021D41CC"
    );
    #endif
}
