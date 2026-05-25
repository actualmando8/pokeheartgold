/* Decompiled from asm/unk_0205AC88.s */
#include "global.h"

void sub_0205AC88(void) {
    /* Original at 0x0205AC88 */
    /* Requires manual decompilation - 52 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    ldr r1, _0205ACF4 ; =0x000004E8\n    add r5, r0, #0\n    mov r0, #0x1f\n    bl Heap_Alloc\n    add r4, r0, #0\n    ldr r2, _0205ACF4 ; =0x000004E8\n    mov r0, #0\n    add r1, r4, #0\n    bl MIi_CpuClearFast\n    mov r0, #0x4e\n    str r5, [r4]\n    mov r1, #1\n    lsl r0, r0, #4\n    str r1, [r4, r0]\n    ldr r0, _0205ACF8 ; =sub_0205AD60\n    add r1, r4, #0\n    mov r2, #0xb\n    bl SysTask_CreateOnMainQueue\n    str r0, [r4, #4]\n    add r0, r5, #0\n    bl sub_0205A1F0\n    ldr r1, _0205ACFC ; =0x000004D4\n    str r0, [r4, r1]\n    ldr r0, [r4, r1]\n    mov r1, #8\n    ldr r0, [r0, #0xc]\n    bl SaveArray_Get\n    ldr r1, _0205AD00 ; =0x000004D8\n    ldr r2, _0205AD04 ; =0x00002710\n    str r0, [r4, r1]\n    sub r0, r1, #4\n    ldr r0, [r4, r0]\n    mov r1, #0x57\n    ldr r0, [r0, #0x40]\n    str r0, [r4, #8]\n    mov r0, #0xb\n    bl Heap_CreateAtEnd\n    mov r0, #0x57\n    bl sub_0205B3B8\n    ldr r1, _0205AD08 ; =0x000004DC\n    str r0, [r4, r1]\n    add r0, r4, #0\n    bl sub_0205AD24\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}\n    _0205ACF4: .word 0x000004E8\n    _0205ACF8: .word sub_0205AD60\n    _0205ACFC: .word 0x000004D4\n    _0205AD00: .word 0x000004D8\n    _0205AD04: .word 0x00002710\n    _0205AD08: .word 0x000004DC"
    );
    #endif
}

void sub_0205AD0C(void) {
    /* Original at 0x0205AD0C */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "mov r3, #0\n    mov r1, #3\n    ldrb r2, [r0, #0xd]\n    cmp r2, #0\n    beq _0205AD18\n    strb r1, [r0, #0xc]\n    add r3, r3, #1\n    add r0, #0x18\n    cmp r3, #0x33\n    blt _0205AD10\n    bx lr"
    );
    #endif
}

void sub_0205AD24(void) {
    /* Original at 0x0205AD24 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "mov r2, #0\n    add r1, r2, #0\n    strb r1, [r0, #0xc]\n    strb r1, [r0, #0xd]\n    strb r1, [r0, #0xe]\n    strb r1, [r0, #0xf]\n    add r2, r2, #1\n    add r0, #0x18\n    cmp r2, #0x33\n    blt _0205AD28\n    bx lr"
    );
    #endif
}

void sub_0205AD3C(void) {
    /* Original at 0x0205AD3C */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #4]\n    bl SysTask_Destroy\n    ldr r0, _0205AD5C ; =0x000004DC\n    ldr r0, [r4, r0]\n    bl sub_0205B3CC\n    mov r0, #0x57\n    bl Heap_Destroy\n    add r0, r4, #0\n    bl Heap_Free\n    pop {r4, pc}\n    _0205AD5C: .word 0x000004DC"
    );
    #endif
}

void sub_0205AD60(void) {
    /* Original at 0x0205AD60 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    ldr r0, _0205AD98 ; =0x000004D4\n    add r5, r1, #0\n    ldr r0, [r5, r0]\n    ldr r4, [r5]\n    bl FieldSystem_TaskIsRunning\n    cmp r0, #0\n    bne _0205AD96\n    ldr r3, _0205AD98 ; =0x000004D4\n    add r1, r4, #0\n    ldr r0, [r5, r3]\n    ldr r0, [r0, #0x40]\n    str r0, [r5, #8]\n    ldr r2, [r5, r3]\n    add r3, r3, #4\n    ldr r2, [r2, #0x3c]\n    ldr r3, [r5, r3]\n    add r0, r5, #0\n    bl sub_0205AEA8\n    ldr r1, _0205AD98 ; =0x000004D4\n    add r0, r5, #0\n    ldr r1, [r5, r1]\n    ldr r1, [r1, #0x3c]\n    bl sub_0205AF78\n    pop {r3, r4, r5, pc}\n    _0205AD98: .word 0x000004D4"
    );
    #endif
}

void sub_0205AD9C(void) {
    /* Original at 0x0205AD9C */
    /* Requires manual decompilation - 125 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    mov r5, #0\n    str r0, [sp]\n    str r3, [sp, #4]\n    cmp r2, #0\n    bne _0205ADD0\n    ldr r0, _0205AE9C ; =_020FC824\n    lsl r1, r1, #1\n    ldrh r4, [r0, r1]\n    ldr r0, [sp]\n    mov r6, #3\n    add r0, #0xc\n    str r0, [sp]\n    ldr r0, [sp]\n    add r1, r4, #0\n    add r2, r6, #0\n    bl sub_0205AEA0\n    add r5, r5, #1\n    add r4, r4, #1\n    cmp r5, #4\n    blt _0205ADB8\n    add sp, #0x14\n    mov r0, #0\n    pop {r4, r5, r6, r7, pc}\n    add r0, r2, #0\n    str r0, [sp, #0xc]\n    add r0, #0x50\n    str r0, [sp, #0xc]\n    add r0, #0x30\n    str r0, [sp, #0xc]\n    ldr r0, [r2, #0x50]\n    mov r2, #0x18\n    add r3, r1, #0\n    mul r3, r2\n    ldr r2, [sp]\n    add r2, r2, r3\n    ldr r2, [r2, #0x18]\n    cmp r0, r2\n    beq _0205AE14\n    ldr r0, _0205AE9C ; =_020FC824\n    lsl r1, r1, #1\n    ldrh r4, [r0, r1]\n    ldr r0, [sp]\n    mov r6, #3\n    add r0, #0xc\n    str r0, [sp]\n    ldr r0, [sp]\n    add r1, r4, #0\n    add r2, r6, #0\n    bl sub_0205AEA0\n    add r5, r5, #1\n    add r4, r4, #1\n    cmp r5, #4\n    blt _0205ADFC\n    add sp, #0x14\n    mov r0, #0\n    pop {r4, r5, r6, r7, pc}\n    ldr r0, _0205AE9C ; =_020FC824\n    lsl r1, r1, #1\n    ldrh r7, [r0, r1]\n    ldr r0, [sp, #0xc]\n    add r6, r5, #0\n    str r0, [sp, #8]\n    ldr r0, [sp]\n    str r0, [sp, #0x10]\n    add r0, #0xc\n    str r0, [sp, #0x10]\n    mov r0, #0x18\n    add r1, r7, #0\n    mul r1, r0\n    ldr r0, [sp]\n    add r4, r0, r1\n    ldrb r0, [r4, #0xd]\n    cmp r0, #0\n    beq _0205AE42\n    cmp r0, #2\n    beq _0205AE68\n    cmp r0, #4\n    beq _0205AE82\n    b _0205AE86\n    ldr r0, [sp, #0xc]\n    add r1, r0, r6\n    ldrb r0, [r1, #0x18]\n    cmp r0, #0\n    beq _0205AE86\n    mov r0, #2\n    strb r0, [r4, #0xc]\n    ldrb r1, [r1, #0x18]\n    mov r0, #0x7f\n    and r0, r1\n    strb r0, [r4, #0x14]\n    ldr r1, [sp, #8]\n    ldr r0, [sp, #4]\n    ldr r1, [r1]\n    bl PalPad_PlayerIdIsFriendOrMutual\n    strb r0, [r4, #0xe]\n    mov r5, #1\n    b _0205AE86\n    ldr r0, [sp, #0xc]\n    add r0, r0, r6\n    ldrb r0, [r0, #0x18]\n    cmp r0, #0\n    bne _0205AE7E\n    ldr r0, [sp, #0x10]\n    add r1, r7, #0\n    mov r2, #3\n    bl sub_0205AEA0\n    b _0205AE86\n    mov r5, #1\n    b _0205AE86\n    mov r0, #0\n    strb r0, [r4, #0xc]\n    ldr r0, [sp, #8]\n    add r6, r6, #1\n    add r0, r0, #4\n    add r7, r7, #1\n    str r0, [sp, #8]\n    cmp r6, #4\n    blt _0205AE28\n    add r0, r5, #0\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _0205AE9C: .word _020FC824"
    );
    #endif
}

void sub_0205AEA0(void) {
    /* Original at 0x0205AEA0 */
    /* Requires manual decompilation - 4 instructions */
    #ifdef MWERKS
    asm(
        "mov r3, #0x18\n    mul r3, r1\n    strb r2, [r0, r3]\n    bx lr"
    );
    #endif
}

void sub_0205AEA8(void) {
    /* Original at 0x0205AEA8 */
    /* Requires manual decompilation - 95 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    str r0, [sp]\n    add r5, r0, #0\n    str r0, [sp, #0x10]\n    add r0, #0xc\n    str r1, [sp, #4]\n    str r3, [sp, #8]\n    mov r4, #0\n    str r0, [sp, #0x10]\n    ldr r0, [sp, #4]\n    add r1, r4, #0\n    bl sub_0205A1F4\n    add r6, r0, #0\n    beq _0205AED6\n    add r7, r6, #0\n    add r7, #0x50\n    add r0, r7, #0\n    str r0, [sp, #0xc]\n    add r0, #0x10\n    str r0, [sp, #0xc]\n    b _0205AEDC\n    mov r7, #0\n    add r0, r7, #0\n    str r0, [sp, #0xc]\n    ldrb r0, [r5, #0xd]\n    cmp r0, #0\n    beq _0205AEEC\n    cmp r0, #2\n    beq _0205AF28\n    cmp r0, #4\n    beq _0205AF66\n    b _0205AF6A\n    cmp r6, #0\n    beq _0205AF6A\n    ldr r0, [sp, #0xc]\n    bl PlayerProfile_GetAvatar\n    strb r0, [r5, #0x14]\n    ldr r0, [sp, #0xc]\n    bl PlayerProfile_GetTrainerID\n    add r1, r0, #0\n    ldr r0, [sp, #8]\n    bl PalPad_PlayerIdIsFriendOrMutual\n    strb r0, [r5, #0xe]\n    ldr r0, [r7]\n    ldr r3, [sp, #8]\n    str r0, [r5, #0x18]\n    ldr r0, [sp]\n    add r1, r4, #0\n    add r2, r6, #0\n    bl sub_0205AD9C\n    cmp r0, #0\n    beq _0205AF22\n    mov r0, #2\n    strb r0, [r5, #0xc]\n    b _0205AF6A\n    mov r0, #1\n    strb r0, [r5, #0xc]\n    b _0205AF6A\n    cmp r6, #0\n    bne _0205AF38\n    ldr r0, [sp, #0x10]\n    add r1, r4, #0\n    mov r2, #3\n    bl sub_0205AEA0\n    b _0205AF4A\n    ldr r1, [r7]\n    ldr r0, [r5, #0x18]\n    cmp r1, r0\n    beq _0205AF4A\n    ldr r0, [sp, #0x10]\n    add r1, r4, #0\n    mov r2, #3\n    bl sub_0205AEA0\n    ldr r0, [sp]\n    ldr r3, [sp, #8]\n    add r1, r4, #0\n    add r2, r6, #0\n    bl sub_0205AD9C\n    cmp r0, #0\n    beq _0205AF6A\n    ldrb r0, [r5, #0x15]\n    cmp r0, #1\n    bne _0205AF6A\n    mov r0, #3\n    strb r0, [r5, #0xc]\n    b _0205AF6A\n    mov r0, #0\n    strb r0, [r5, #0xc]\n    add r4, r4, #1\n    add r5, #0x18\n    cmp r4, #0xa\n    blt _0205AEBC\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_0205AF78(void) {
    /* Original at 0x0205AF78 */
    /* Requires manual decompilation - 148 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    str r0, [sp]\n    ldr r0, [r0, #8]\n    str r1, [sp, #4]\n    cmp r0, #0\n    bne _0205AF8A\n    bl GF_AssertFail\n    ldr r0, [sp]\n    ldr r0, [r0, #8]\n    bl PlayerAvatar_GetXCoord\n    str r0, [sp, #0xc]\n    ldr r0, [sp]\n    ldr r0, [r0, #8]\n    bl PlayerAvatar_GetZCoord\n    ldr r4, [sp]\n    str r0, [sp, #8]\n    add r6, r4, #0\n    mov r7, #0\n    add r6, #0xc\n    ldr r0, [sp, #4]\n    add r1, r7, #1\n    bl MapObjectManager_GetFirstActiveObjectByID\n    add r5, r0, #0\n    bne _0205AFB6\n    bl GF_AssertFail\n    ldrb r0, [r4, #0xd]\n    cmp r0, #4\n    bhi _0205B0AA\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0205AFC8: ; jump table\n    add r0, r5, #0\n    bl MapObject_AreBitsSetForMovementScriptInit\n    cmp r0, #1\n    bne _0205B0AA\n    ldrb r0, [r4, #0xc]\n    sub r0, r0, #1\n    cmp r0, #1\n    bhi _0205B0AA\n    ldr r2, [sp, #0xc]\n    ldr r3, [sp, #8]\n    add r0, r6, #0\n    add r1, r5, #0\n    bl sub_0205B13C\n    b _0205B0AA\n    add r0, r5, #0\n    bl MapObject_AreBitsSetForMovementScriptInit\n    cmp r0, #1\n    bne _0205B0AA\n    ldrb r0, [r4, #0xc]\n    cmp r0, #3\n    bne _0205B012\n    mov r0, #0\n    strb r0, [r4, #0xd]\n    strb r0, [r4, #0xc]\n    add r0, r6, #0\n    mov r1, #1\n    bl sub_0205B0DC\n    b _0205B0AA\n    add r0, r5, #0\n    bl MapObject_ClearHeldMovementIfActive\n    add r0, r5, #0\n    mov r1, #0\n    bl MapObject_SetFlag19\n    ldrb r0, [r4, #0xc]\n    cmp r0, #1\n    bne _0205B048\n    ldrb r0, [r4, #0x15]\n    cmp r0, #0\n    bne _0205B048\n    add r0, r5, #0\n    mov r1, #3\n    bl sub_0205FC94\n    add r0, r5, #0\n    mov r1, #1\n    bl MapObject_SetXRange\n    add r0, r5, #0\n    mov r1, #1\n    bl MapObject_SetYRange\n    mov r0, #1\n    strb r0, [r4, #0x15]\n    mov r0, #2\n    strb r0, [r4, #0xd]\n    mov r0, #0\n    strb r0, [r4, #0xc]\n    b _0205B0AA\n    add r0, r5, #0\n    bl MapObject_AreBitsSetForMovementScriptInit\n    cmp r0, #1\n    bne _0205B0AA\n    add r0, r6, #0\n    add r1, r5, #0\n    bl sub_0205B218\n    ldrb r0, [r4, #0xc]\n    cmp r0, #3\n    bne _0205B072\n    add r0, r6, #0\n    add r1, r5, #0\n    bl sub_0205B1E4\n    add r0, r6, #0\n    bl sub_0205B118\n    b _0205B0AA\n    add r0, r5, #0\n    bl MapObject_AreBitsSetForMovementScriptInit\n    cmp r0, #1\n    bne _0205B0AA\n    add r0, r5, #0\n    bl MapObject_ClearHeldMovementIfActive\n    mov r0, #4\n    strb r0, [r4, #0xd]\n    mov r0, #0\n    strb r0, [r4, #0xc]\n    strb r0, [r4, #0x15]\n    add r0, r5, #0\n    mov r1, #1\n    bl MapObject_SetVisible\n    add r0, r5, #0\n    mov r1, #0\n    bl MapObject_ClearFlag18\n    b _0205B0AA\n    mov r0, #0\n    strb r0, [r4, #0xd]\n    add r7, r7, #1\n    add r4, #0x18\n    add r6, #0x18\n    cmp r7, #0x32\n    bge _0205B0B6\n    b _0205AFA6\n    ldr r0, [sp]\n    ldr r0, [r0, #8]\n    bl PlayerAvatar_GetMapObject\n    add r1, r0, #0\n    ldr r2, _0205B0D8 ; =0x000004BC\n    ldr r0, [sp]\n    add r0, r0, r2\n    bl sub_0205B218\n    ldr r1, _0205B0D8 ; =0x000004BC\n    ldr r0, [sp]\n    add r0, r0, r1\n    bl sub_0205B118\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    _0205B0D8: .word 0x000004BC"
    );
    #endif
}

void sub_0205B0DC(void) {
    /* Original at 0x0205B0DC */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0x10]\n    add r4, r1, #0\n    cmp r0, #0\n    beq _0205B0FA\n    bl sub_02068CCC\n    cmp r0, #0\n    beq _0205B0F6\n    ldr r0, [r5, #0x10]\n    bl sub_02068B48\n    mov r0, #0\n    str r0, [r5, #0x10]\n    cmp r4, #0\n    beq _0205B116\n    ldr r0, [r5, #0x14]\n    cmp r0, #0\n    beq _0205B116\n    bl sub_02068CCC\n    cmp r0, #0\n    beq _0205B112\n    ldr r0, [r5, #0x14]\n    bl sub_02068B48\n    mov r0, #0\n    str r0, [r5, #0x14]\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_0205B118(void) {
    /* Original at 0x0205B118 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldrb r1, [r4, #4]\n    cmp r1, #0\n    beq _0205B138\n    ldrh r1, [r4, #6]\n    sub r1, r1, #1\n    strh r1, [r4, #6]\n    ldrh r1, [r4, #6]\n    cmp r1, #0\n    bne _0205B138\n    mov r1, #0\n    bl sub_0205B0DC\n    mov r0, #0\n    strb r0, [r4, #4]\n    pop {r4, pc}"
    );
    #endif
}

void sub_0205B13C(void) {
    /* Original at 0x0205B13C */
    /* Requires manual decompilation - 70 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r4, r1, #0\n    add r5, r0, #0\n    add r0, r4, #0\n    str r2, [sp, #4]\n    str r3, [sp, #8]\n    bl MapObject_GetInitialX\n    add r7, r0, #0\n    add r0, r4, #0\n    bl MapObject_GetInitialY\n    str r0, [sp, #0xc]\n    add r0, r4, #0\n    bl MapObject_GetInitialZ\n    add r6, r0, #0\n    ldr r0, [sp, #4]\n    cmp r7, r0\n    bne _0205B16C\n    ldr r0, [sp, #8]\n    cmp r6, r0\n    beq _0205B1DC\n    ldr r0, _0205B1E0 ; =0x0000064E\n    bl PlaySE\n    ldrb r1, [r5, #8]\n    add r0, r4, #0\n    bl sub_0205E3AC\n    add r0, r5, #0\n    mov r1, #0\n    bl sub_0205B0DC\n    mov r0, #1\n    str r0, [sp]\n    ldr r2, [sp, #0xc]\n    add r0, r4, #0\n    add r1, r7, #0\n    add r3, r6, #0\n    bl MapObject_SetPositionFromXYZAndDirection\n    add r0, r4, #0\n    mov r1, #1\n    bl MapObject_SetFacingDirectionDirect\n    add r0, r4, #0\n    mov r1, #0x44\n    bl MapObject_SetHeldMovement\n    add r0, r4, #0\n    mov r1, #0\n    bl MapObject_SetVisible\n    add r0, r4, #0\n    mov r1, #1\n    bl MapObject_ClearFlag18\n    mov r1, #1\n    strb r1, [r5, #1]\n    ldrb r0, [r5, #2]\n    cmp r0, #0\n    beq _0205B1DC\n    cmp r0, #1\n    bne _0205B1CA\n    add r0, r4, #0\n    bl ov01_021FD8E8\n    str r0, [r5, #0x14]\n    b _0205B1D8\n    cmp r0, #2\n    blo _0205B1D8\n    add r0, r4, #0\n    mov r1, #2\n    bl ov01_021FD8E8\n    str r0, [r5, #0x14]\n    mov r0, #0\n    strb r0, [r5, #2]\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    _0205B1E0: .word 0x0000064E"
    );
    #endif
}

void sub_0205B1E4(void) {
    /* Original at 0x0205B1E4 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r1, #0\n    add r4, r0, #0\n    add r0, r5, #0\n    mov r1, #0x43\n    bl MapObject_SetHeldMovement\n    add r0, r5, #0\n    mov r1, #1\n    bl MapObject_SetFlag19\n    add r0, r5, #0\n    mov r1, #0\n    bl sub_0205FC94\n    add r0, r4, #0\n    mov r1, #1\n    bl sub_0205B0DC\n    mov r0, #0\n    strb r0, [r4, #4]\n    strh r0, [r4, #6]\n    mov r0, #3\n    strb r0, [r4, #1]\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_0205B218(void) {
    /* Original at 0x0205B218 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldrb r0, [r4, #3]\n    cmp r0, #1\n    bne _0205B23C\n    ldrb r0, [r4, #4]\n    cmp r0, #0\n    bne _0205B23C\n    add r0, r1, #0\n    bl ov01_02200730\n    str r0, [r4, #0x10]\n    mov r0, #0x1e\n    strh r0, [r4, #6]\n    mov r0, #0\n    strb r0, [r4, #3]\n    mov r0, #1\n    strb r0, [r4, #4]\n    pop {r4, pc}"
    );
    #endif
}

void sub_0205B240(void) {
    /* Original at 0x0205B240 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r1, #0\n    add r6, r2, #0\n    add r7, r0, #0\n    cmp r5, r6\n    bge _0205B27A\n    add r0, r7, #0\n    add r1, r5, #0\n    bl MapObjectManager_GetFirstActiveObjectByID\n    add r4, r0, #0\n    bne _0205B25C\n    bl GF_AssertFail\n    add r0, r4, #0\n    mov r1, #1\n    bl MapObject_SetVisible\n    add r0, r4, #0\n    mov r1, #0\n    bl MapObject_ClearFlag18\n    add r0, r4, #0\n    mov r1, #1\n    bl MapObject_SetFlag19\n    add r5, r5, #1\n    cmp r5, r6\n    blt _0205B24C\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_0205B27C(void) {
    /* Original at 0x0205B27C */
    /* Requires manual decompilation - 78 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r1, #0\n    mov r1, #0\n    add r7, r0, #0\n    bl MapObjectManager_GetFirstActiveObjectByID\n    add r4, r0, #0\n    bne _0205B290\n    bl GF_AssertFail\n    add r0, r4, #0\n    bl MapObject_AreBitsSetForMovementScriptInit\n    cmp r0, #1\n    bne _0205B336\n    bl sub_02037FCC\n    cmp r0, #0\n    bne _0205B2AA\n    bl sub_02037F94\n    cmp r0, #0\n    beq _0205B32C\n    mov r6, #0\n    add r5, #0xc\n    ldrb r0, [r5, #1]\n    cmp r0, #1\n    bne _0205B318\n    add r0, r7, #0\n    add r1, r6, #1\n    bl MapObjectManager_GetFirstActiveObjectByID\n    add r4, r0, #0\n    bne _0205B2C4\n    bl GF_AssertFail\n    ldrb r1, [r5, #8]\n    add r0, r4, #0\n    bl sub_0205E3AC\n    add r0, r4, #0\n    mov r1, #1\n    bl MapObject_SetFacingDirectionDirect\n    add r0, r4, #0\n    mov r1, #0x44\n    bl MapObject_SetHeldMovement\n    add r0, r4, #0\n    mov r1, #0\n    bl MapObject_SetVisible\n    add r0, r4, #0\n    mov r1, #1\n    bl MapObject_ClearFlag18\n    mov r0, #1\n    strb r0, [r5, #1]\n    ldrb r0, [r5, #2]\n    cmp r0, #0\n    beq _0205B318\n    cmp r0, #1\n    bne _0205B306\n    add r0, r4, #0\n    mov r1, #1\n    bl ov01_021FD8E8\n    str r0, [r5, #0x14]\n    b _0205B314\n    cmp r0, #2\n    blo _0205B314\n    add r0, r4, #0\n    mov r1, #2\n    bl ov01_021FD8E8\n    str r0, [r5, #0x14]\n    mov r0, #0\n    strb r0, [r5, #2]\n    add r6, r6, #1\n    add r5, #0x18\n    cmp r6, #0xa\n    blt _0205B2AE\n    add r0, r7, #0\n    mov r1, #0xb\n    mov r2, #0x33\n    bl sub_0205B240\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r7, #0\n    mov r1, #1\n    mov r2, #0x33\n    bl sub_0205B240\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_0205B338(void) {
    String_New(8, 0x57);
    *((u32*)(r4 + 4)) = 0;
    *((u32*)(r4 + 8)) = 0;
    MailMsg_Init_WithBank(r4, 0);
    *((u32*)(r4 + 0x10)) = 0;
    *((u32*)(r4 + 0xc)) = 0;
}

void sub_0205B35C(void) {
    /* Original at 0x0205B35C */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r0, #0\n    mov r4, #0\n    add r5, r6, #0\n    add r0, r5, #0\n    bl sub_0205B338\n    add r4, r4, #1\n    add r5, #0x1c\n    cmp r4, #0x1e\n    blt _0205B364\n    mov r0, #0xd2\n    mov r1, #0\n    lsl r0, r0, #2\n    str r1, [r6, r0]\n    add r0, r0, #4\n    str r1, [r6, r0]\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void sub_0205B380(void) {
    /* Original at 0x0205B380 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4]\n    bl Heap_Free\n    ldr r0, [r4, #4]\n    cmp r0, #0\n    beq _0205B394\n    bl String_Delete\n    ldr r0, [r4, #8]\n    cmp r0, #0\n    beq _0205B39E\n    bl String_Delete\n    pop {r4, pc}"
    );
    #endif
}

void sub_0205B3A0(void) {
    sub_0205B380(0);
}

void sub_0205B3B8(void) {
    /* Original at 0x0205B3B8 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r1, #0x35\n    lsl r1, r1, #4\n    bl Heap_Alloc\n    add r4, r0, #0\n    bl sub_0205B35C\n    add r0, r4, #0\n    pop {r4, pc}"
    );
    #endif
}

void sub_0205B3CC(void) {
    sub_0205B3A0();
    Heap_Free(r4);
}
