/* Decompiled from asm/unk_020658D4.s */
#include "global.h"

void sub_020658D4(void) {
    sub_0205F370(0xc);
    sub_02065CD0(r4, r0);
    sub_0205F328(r4, 0);
    MapObject_ClearSingleMovement(r4);
    MapObject_ClearFlag18(r4, 0);
}

void sub_02065900(void) {
    /* Original at 0x02065900 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    bl sub_0205F394\n    add r4, r0, #0\n    add r0, r5, #0\n    add r1, r4, #0\n    bl sub_02065CD0\n    cmp r0, #0\n    beq _02065930\n    add r0, r5, #0\n    mov r1, #0\n    bl MapObject_ClearFlag18\n    ldr r6, _02065934 ; =_020FE404\n    ldrb r2, [r4]\n    add r0, r5, #0\n    add r1, r4, #0\n    lsl r2, r2, #2\n    ldr r2, [r6, r2]\n    blx r2\n    cmp r0, #1\n    beq _02065920\n    pop {r4, r5, r6, pc}\n    nop\n    _02065934: .word _020FE404"
    );
    #endif
}

void sub_02065938(void) {
    /* Original at 0x02065938 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    bl sub_0205F394\n    add r4, r0, #0\n    add r0, r5, #0\n    add r1, r4, #0\n    bl sub_02065CD0\n    cmp r0, #0\n    beq _02065960\n    ldr r6, _02065964 ; =_020FE414\n    ldrb r2, [r4]\n    add r0, r5, #0\n    add r1, r4, #0\n    lsl r2, r2, #2\n    ldr r2, [r6, r2]\n    blx r2\n    cmp r0, #1\n    beq _02065950\n    pop {r4, r5, r6, pc}\n    nop\n    _02065964: .word _020FE414"
    );
    #endif
}

void sub_02065968(void) {
    /* Original at 0x02065968 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    bl sub_0205F394\n    add r4, r0, #0\n    add r0, r5, #0\n    add r1, r4, #0\n    bl sub_02065CD0\n    cmp r0, #0\n    beq _02065990\n    ldr r6, _02065994 ; =_020FE424\n    ldrb r2, [r4]\n    add r0, r5, #0\n    add r1, r4, #0\n    lsl r2, r2, #2\n    ldr r2, [r6, r2]\n    blx r2\n    cmp r0, #1\n    beq _02065980\n    pop {r4, r5, r6, pc}\n    nop\n    _02065994: .word _020FE424"
    );
    #endif
}

void sub_02065998(void) {
    /* Original at 0x02065998 */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void sub_0206599C(void) {
    sub_0205F394();
}

void sub_020659A8(void) {
    sub_0205F394();
}

void sub_020659B8(void) {
    sub_0205F394(1, 1);
}

void sub_020659CC(void) {
    /* Original at 0x020659CC */
    /* Requires manual decompilation - 51 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    bl MapObject_GetFieldSystem\n    add r4, r0, #0\n    add r0, r5, #0\n    bl sub_0205F394\n    add r6, r0, #0\n    add r0, r5, #0\n    bl MapObject_ClearSingleMovement\n    add r0, r5, #0\n    bl MapObject_ClearFlag3\n    add r0, r5, #0\n    mov r1, #0x20\n    bl MapObject_ClearFlagsBits\n    add r0, r5, #0\n    mov r1, #0xff\n    bl MapObject_SetMovementCommand\n    add r0, r5, #0\n    mov r1, #0\n    bl MapObject_SetMovementStep\n    mov r1, #0\n    add r0, r4, #0\n    strb r1, [r6]\n    add r0, #0xe8 ; ->followMon.effectTimer\n    str r1, [r0]\n    mov r0, #1\n    lsl r0, r0, #8 ; ->followMon.fieldSystem\n    str r1, [r4, r0]\n    add r0, r4, #0\n    add r0, #0xec ; ->followMon.duration\n    str r1, [r0]\n    add r4, #0xf0 ; ->followMon.parentData\n    add r0, r5, #0\n    str r1, [r4]\n    bl MapObject_GetXCoord\n    add r4, r0, #0\n    add r0, r5, #0\n    bl MapObject_GetYCoord\n    add r6, r0, #0\n    add r0, r5, #0\n    bl MapObject_GetZCoord\n    add r7, r0, #0\n    add r0, r5, #0\n    bl MapObject_GetFacingDirection\n    str r0, [sp]\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r6, #0\n    add r3, r7, #0\n    bl MapObject_SetPositionFromXYZAndDirection\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_02065A4C(void) {
    /* Original at 0x02065A4C */
    /* Requires manual decompilation - 121 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r6, r1, #0\n    bl MapObject_GetFieldSystem\n    add r4, r0, #0\n    add r0, r5, #0\n    bl MapObject_ClearSingleMovement\n    add r0, r5, #0\n    bl MapObject_ClearFlag3\n    mov r0, #1\n    lsl r0, r0, #8\n    ldr r1, [r4, r0]\n    cmp r1, #1\n    bne _02065A76\n    mov r1, #2\n    str r1, [r4, r0]\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    cmp r1, #2\n    bne _02065B64\n    add r0, r5, #0\n    add r1, r6, #0\n    bl sub_02065D58\n    add r0, r5, #0\n    bl MapObject_GetXCoord\n    add r1, r4, #0\n    add r1, #0xec\n    ldr r1, [r1]\n    cmp r1, r0\n    bne _02065B12\n    add r0, r5, #0\n    bl MapObject_GetZCoord\n    add r1, r4, #0\n    add r1, #0xf0\n    ldr r1, [r1]\n    cmp r1, r0\n    bne _02065B12\n    mov r0, #1\n    mov r1, #0\n    lsl r0, r0, #8\n    str r1, [r4, r0]\n    mov r0, #3\n    strb r0, [r6]\n    add r0, r5, #0\n    bl sub_02069E14\n    cmp r0, #0\n    beq _02065AEA\n    ldrh r0, [r6, #0xa]\n    lsl r0, r0, #0x1f\n    lsr r0, r0, #0x1f\n    bne _02065AEA\n    add r0, r5, #0\n    bl sub_02069EAC\n    cmp r0, #0\n    beq _02065ADC\n    add r0, r5, #0\n    mov r1, #0\n    bl ov01_0220329C\n    add r0, r5, #0\n    mov r1, #0\n    bl sub_02069E84\n    b _02065AE4\n    add r0, r5, #0\n    mov r1, #0\n    bl sub_02069DC8\n    add r0, r5, #0\n    bl sub_020664D8\n    add r0, r5, #0\n    bl sub_02065D78\n    bl sub_020623C8\n    cmp r0, #0\n    beq _02065B0E\n    add r0, r4, #0\n    bl FieldSystem_GetPlayerAvatar\n    bl PlayerAvatar_GetFacingDirection\n    add r1, r0, #0\n    lsl r1, r1, #0x18\n    add r0, r5, #0\n    lsr r1, r1, #0x18\n    bl sub_02069E28\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    add r0, r5, #0\n    add r1, r6, #0\n    bl sub_02065DF4\n    cmp r0, #1\n    bne _02065B6C\n    add r0, r5, #0\n    bl sub_02069E14\n    cmp r0, #0\n    beq _02065B52\n    add r0, r5, #0\n    bl sub_02069EAC\n    cmp r0, #0\n    beq _02065B44\n    add r0, r5, #0\n    mov r1, #0\n    bl ov01_0220329C\n    add r0, r5, #0\n    mov r1, #0\n    bl sub_02069E84\n    b _02065B4C\n    add r0, r5, #0\n    mov r1, #0\n    bl sub_02069DC8\n    add r0, r5, #0\n    bl sub_020664D8\n    add r0, r5, #0\n    bl MapObject_SetSingleMovement\n    mov r1, #3\n    add r0, r1, #0\n    add r0, #0xfd\n    str r1, [r4, r0]\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    cmp r1, #3\n    bne _02065B6C\n    mov r1, #0\n    str r1, [r4, r0]\n    mov r0, #0\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void sub_02065B70(void) {
    /* Original at 0x02065B70 */
    /* Requires manual decompilation - 47 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl MapObject_ClearSingleMovement\n    add r0, r5, #0\n    bl MapObject_ClearFlag3\n    add r0, r5, #0\n    add r1, r4, #0\n    bl sub_02065D24\n    cmp r0, #1\n    bne _02065BE2\n    add r0, r5, #0\n    add r1, r4, #0\n    bl sub_02065D58\n    add r0, r5, #0\n    bl sub_02069E14\n    cmp r0, #0\n    beq _02065BC8\n    add r0, r5, #0\n    bl sub_02069EAC\n    cmp r0, #0\n    beq _02065BBA\n    add r0, r5, #0\n    mov r1, #0\n    bl ov01_0220329C\n    add r0, r5, #0\n    mov r1, #0\n    bl sub_02069E84\n    b _02065BC2\n    add r0, r5, #0\n    mov r1, #0\n    bl sub_02069DC8\n    add r0, r5, #0\n    bl sub_020664D8\n    add r0, r5, #0\n    bl sub_02065F44\n    cmp r0, #1\n    bne _02065BE2\n    add r0, r5, #0\n    bl MapObject_SetSingleMovement\n    ldrb r0, [r4]\n    add r0, r0, #1\n    strb r0, [r4]\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_02065BE8(void) {
    /* Original at 0x02065BE8 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl MapObject_ClearSingleMovement\n    add r0, r5, #0\n    bl MapObject_ClearFlag3\n    add r0, r5, #0\n    add r1, r4, #0\n    bl sub_02065D24\n    cmp r0, #1\n    bne _02065C26\n    add r0, r5, #0\n    add r1, r4, #0\n    bl sub_02065D58\n    add r0, r5, #0\n    bl sub_02065FBC\n    cmp r0, #1\n    bne _02065C26\n    add r0, r5, #0\n    bl MapObject_SetSingleMovement\n    ldrb r0, [r4]\n    add r0, r0, #1\n    strb r0, [r4]\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_02065C2C(void) {
    /* Original at 0x02065C2C */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl sub_02062428\n    cmp r0, #1\n    bne _02065C44\n    add r0, r5, #0\n    bl MapObject_ClearSingleMovement\n    mov r0, #0\n    strb r0, [r4]\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_02065C48(void) {
    /* Original at 0x02065C48 */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl sub_02062428\n    cmp r0, #1\n    bne _02065C86\n    ldrb r0, [r4, #2]\n    add r0, r0, #1\n    strb r0, [r4, #2]\n    ldrb r0, [r4, #2]\n    cmp r0, #2\n    blo _02065C78\n    add r0, r5, #0\n    bl MapObject_ClearSingleMovement\n    mov r0, #0\n    strb r0, [r4]\n    strb r0, [r4, #3]\n    ldrh r2, [r4, #0xa]\n    mov r1, #6\n    bic r2, r1\n    strh r2, [r4, #0xa]\n    pop {r3, r4, r5, pc}\n    add r0, r5, #0\n    bl sub_02069ED4\n    add r1, r0, #0\n    add r0, r5, #0\n    bl MapObject_ForceSetHeldMovement\n    ldrb r0, [r4, #3]\n    add r0, r0, #1\n    strb r0, [r4, #3]\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_02065C90(void) {
    /* Original at 0x02065C90 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r1, #0\n    bl MapObject_GetFieldSystem\n    bl FieldSystem_GetPlayerAvatar\n    add r4, r0, #0\n    bl PlayerAvatar_GetMapObject\n    mov r1, #0x10\n    add r6, r0, #0\n    bl MapObject_TestFlagsBits\n    cmp r0, #1\n    bne _02065CBE\n    add r0, r6, #0\n    mov r1, #0x20\n    bl MapObject_TestFlagsBits\n    cmp r0, #1\n    bne _02065CBE\n    mov r0, #0\n    strb r0, [r5]\n    add r0, r4, #0\n    bl PlayerAvatar_GetUnk14\n    cmp r0, #3\n    bne _02065CCC\n    mov r0, #0\n    strb r0, [r5]\n    mov r0, #0\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void sub_02065CD0(void) {
    /* Original at 0x02065CD0 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl MapObject_GetManager\n    bl MapObjectManager_GetFirstActiveObjectWithMovement1\n    cmp r0, #0\n    bne _02065CE8\n    mov r0, #0\n    strb r0, [r4, #1]\n    pop {r3, r4, r5, pc}\n    ldrb r0, [r4, #1]\n    cmp r0, #0\n    bne _02065CF6\n    add r0, r5, #0\n    add r1, r4, #0\n    bl sub_02065CFC\n    mov r0, #1\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_02065CFC(void) {
    MapObject_GetFieldSystem();
    FieldSystem_GetPlayerAvatar();
    *((u8*)(r5 + 1)) = 1;
    PlayerAvatar_GetXCoord(1);
    *((u16*)(r5 + 4)) = r0;
    PlayerAvatar_GetZCoord(r4);
    *((u16*)(r5 + 6)) = r0;
    *((u16*)(r5 + 8)) = 0xff;
}

void sub_02065D24(void) {
    /* Original at 0x02065D24 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r1, #0\n    bl MapObject_GetFieldSystem\n    bl FieldSystem_GetPlayerAvatar\n    add r6, r0, #0\n    beq _02065D54\n    bl PlayerAvatar_GetXCoord\n    add r4, r0, #0\n    add r0, r6, #0\n    bl PlayerAvatar_GetZCoord\n    mov r1, #4\n    ldrsh r1, [r5, r1]\n    cmp r4, r1\n    bne _02065D50\n    mov r1, #6\n    ldrsh r1, [r5, r1]\n    cmp r0, r1\n    beq _02065D54\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    mov r0, #0\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void sub_02065D58(void) {
    MapObject_GetFieldSystem();
    FieldSystem_GetPlayerAvatar();
    PlayerAvatar_GetXCoord();
    *((u16*)(r5 + 4)) = r0;
    PlayerAvatar_GetZCoord(r4);
    *((u16*)(r5 + 6)) = r0;
}

void sub_02065D78(void) {
    /* Original at 0x02065D78 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    bl MapObject_GetFieldSystem\n    add r4, r0, #0\n    bl FieldSystem_GetPlayerAvatar\n    add r4, #0xe8\n    ldr r0, [r4]\n    add r1, r0, #0\n    sub r1, #0x58\n    cmp r1, #3\n    bhi _02065DB2\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _02065D9C: ; jump table\n    mov r0, #0x10\n    pop {r4, pc}\n    mov r0, #0x11\n    pop {r4, pc}\n    mov r0, #0x12\n    pop {r4, pc}\n    mov r0, #0x13\n    pop {r4, pc}"
    );
    #endif
}

void sub_02065DB4(void) {
    /* Original at 0x02065DB4 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl MapObject_GetFieldSystem\n    bl FieldSystem_GetPlayerAvatar\n    bl PlayerAvatar_GetMapObject\n    bl MapObject_GetMovementCommand\n    add r1, r0, #0\n    sub r1, #0x58\n    cmp r1, #3\n    bhi _02065DF0\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _02065DDA: ; jump table\n    mov r0, #0x10\n    pop {r3, pc}\n    mov r0, #0x11\n    pop {r3, pc}\n    mov r0, #0x12\n    pop {r3, pc}\n    mov r0, #0x13\n    pop {r3, pc}"
    );
    #endif
}

void sub_02065DF4(void) {
    /* Original at 0x02065DF4 */
    /* Requires manual decompilation - 141 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    add r5, r0, #0\n    add r4, r1, #0\n    bl MapObject_GetFieldSystem\n    bl FieldSystem_GetPlayerAvatar\n    add r7, r0, #0\n    add r0, r5, #0\n    bl MapObject_GetXCoord\n    str r0, [sp, #8]\n    add r0, r5, #0\n    bl MapObject_GetZCoord\n    str r0, [sp, #4]\n    add r0, r7, #0\n    bl PlayerAvatar_GetPreviousXCoord\n    str r0, [sp]\n    add r0, r7, #0\n    bl PlayerAvatar_GetPreviousZCoord\n    add r6, r0, #0\n    ldr r1, [sp, #8]\n    ldr r0, [sp]\n    cmp r1, r0\n    bne _02065E36\n    ldr r0, [sp, #4]\n    cmp r0, r6\n    bne _02065E36\n    b _02065F3C\n    add r0, r5, #0\n    bl sub_02065D78\n    str r0, [sp, #0x10]\n    ldr r0, [sp, #8]\n    ldr r1, [sp, #4]\n    ldr r2, [sp]\n    add r3, r6, #0\n    bl sub_02061200\n    str r0, [sp, #0x14]\n    add r0, r5, #0\n    bl sub_02069EC0\n    add r6, r0, #0\n    ldr r0, [sp, #0x10]\n    bl sub_020623C8\n    mov r1, #1\n    str r1, [sp, #0xc]\n    cmp r6, #0\n    beq _02065F00\n    cmp r0, #0\n    beq _02065EB4\n    add r0, r6, #0\n    bl sub_020623D8\n    add r1, r0, #0\n    add r0, r6, #0\n    bl ov01_0220542C\n    add r6, r0, #0\n    bl sub_02066444\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    lsl r0, r0, #0x1e\n    ldrh r1, [r4, #0xa]\n    mov r2, #6\n    lsr r0, r0, #0x1d\n    bic r1, r2\n    orr r0, r1\n    lsl r1, r6, #0x18\n    strh r0, [r4, #0xa]\n    add r0, r5, #0\n    lsr r1, r1, #0x18\n    bl sub_02069E50\n    mov r0, #2\n    str r0, [sp, #0xc]\n    mov r0, #0\n    strb r0, [r4, #2]\n    strb r0, [r4, #3]\n    add r0, r7, #0\n    bl PlayerAvatar_GetFacingDirection\n    add r1, r0, #0\n    lsl r1, r1, #0x18\n    add r0, r5, #0\n    lsr r1, r1, #0x18\n    bl sub_02069E28\n    b _02065F2A\n    add r0, r7, #0\n    bl PlayerAvatar_CheckFlag6\n    cmp r0, #0\n    bne _02065EC4\n    add sp, #0x18\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r1, [sp, #0x10]\n    add r0, r6, #0\n    bl ov01_0220542C\n    add r6, r0, #0\n    bl sub_02066444\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    lsl r0, r0, #0x1e\n    ldrh r1, [r4, #0xa]\n    mov r2, #6\n    lsr r0, r0, #0x1d\n    bic r1, r2\n    orr r0, r1\n    lsl r1, r6, #0x18\n    strh r0, [r4, #0xa]\n    add r0, r5, #0\n    lsr r1, r1, #0x18\n    bl sub_02069E50\n    mov r0, #2\n    str r0, [sp, #0xc]\n    mov r1, #0\n    strb r1, [r4, #2]\n    add r0, r5, #0\n    strb r1, [r4, #3]\n    bl sub_02069E28\n    b _02065F2A\n    cmp r0, #0\n    beq _02065F20\n    ldr r0, [sp, #0x14]\n    bl sub_020623D8\n    add r6, r0, #0\n    add r0, r7, #0\n    bl PlayerAvatar_GetFacingDirection\n    add r1, r0, #0\n    lsl r1, r1, #0x18\n    add r0, r5, #0\n    lsr r1, r1, #0x18\n    bl sub_02069E28\n    b _02065F2A\n    ldr r0, [sp, #0x14]\n    ldr r1, [sp, #0x10]\n    bl sub_0206234C\n    add r6, r0, #0\n    add r0, r5, #0\n    add r1, r6, #0\n    bl MapObject_ForceSetHeldMovement\n    ldr r0, [sp, #0xc]\n    add sp, #0x18\n    strb r0, [r4]\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_02065F44(void) {
    /* Original at 0x02065F44 */
    /* Requires manual decompilation - 48 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r5, r0, #0\n    bl MapObject_GetFieldSystem\n    bl FieldSystem_GetPlayerAvatar\n    add r4, r0, #0\n    add r0, r5, #0\n    bl MapObject_GetXCoord\n    str r0, [sp]\n    add r0, r5, #0\n    bl MapObject_GetZCoord\n    add r7, r0, #0\n    add r0, r4, #0\n    bl PlayerAvatar_GetPreviousXCoord\n    add r6, r0, #0\n    add r0, r4, #0\n    bl PlayerAvatar_GetPreviousZCoord\n    add r4, r0, #0\n    ldr r0, [sp]\n    cmp r0, r6\n    bne _02065F7E\n    cmp r7, r4\n    beq _02065FB4\n    add r0, r5, #0\n    bl sub_02065DB4\n    str r0, [sp, #4]\n    ldr r0, [sp]\n    add r1, r7, #0\n    add r2, r6, #0\n    add r3, r4, #0\n    bl sub_02061200\n    ldr r1, [sp, #4]\n    cmp r1, #0xff\n    bne _02065FA2\n    bl GF_AssertFail\n    add sp, #8\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    bl sub_0206234C\n    add r1, r0, #0\n    add r0, r5, #0\n    bl MapObject_ForceSetHeldMovement\n    add sp, #8\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_02065FBC(void) {
    /* Original at 0x02065FBC */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    bl MapObject_GetFieldSystem\n    bl FieldSystem_GetPlayerAvatar\n    add r4, r0, #0\n    add r0, r5, #0\n    bl MapObject_GetXCoord\n    add r0, r5, #0\n    bl MapObject_GetZCoord\n    add r0, r4, #0\n    bl PlayerAvatar_GetPreviousXCoord\n    add r0, r4, #0\n    bl PlayerAvatar_GetPreviousZCoord\n    add r0, r5, #0\n    bl sub_02065DB4\n    add r1, r0, #0\n    cmp r1, #0xff\n    bne _02065FF2\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    add r0, r5, #0\n    bl MapObject_ForceSetHeldMovement\n    mov r0, #1\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_02065FFC(void) {
    sub_0205F370(0xc);
    sub_02066150(r5, r0);
    sub_0205F328(r5, 0);
    MapObject_ClearSingleMovement(r5);
    *((u8*)(r4 + 1)) = 0;
}

void sub_02066024(void) {
    /* Original at 0x02066024 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    bl sub_0205F394\n    add r4, r0, #0\n    add r0, r5, #0\n    add r1, r4, #0\n    bl sub_02066150\n    cmp r0, #0\n    beq _0206604C\n    ldr r6, _02066050 ; =_020FE3D4\n    ldrb r2, [r4]\n    add r0, r5, #0\n    add r1, r4, #0\n    lsl r2, r2, #2\n    ldr r2, [r6, r2]\n    blx r2\n    cmp r0, #1\n    beq _0206603C\n    pop {r4, r5, r6, pc}\n    nop\n    _02066050: .word _020FE3D4"
    );
    #endif
}

void sub_02066054(void) {
    /* Original at 0x02066054 */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void sub_02066058(void) {
    sub_0205F394();
}

void sub_02066064(void) {
    /* Original at 0x02066064 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl MapObject_ClearSingleMovement\n    add r0, r5, #0\n    bl MapObject_ClearFlag3\n    add r0, r5, #0\n    add r1, r4, #0\n    bl sub_020661F0\n    cmp r0, #1\n    bne _0206609C\n    add r0, r5, #0\n    add r1, r4, #0\n    bl sub_0206623C\n    cmp r0, #1\n    bne _0206609C\n    add r0, r5, #0\n    bl MapObject_SetSingleMovement\n    ldrb r0, [r4]\n    add r0, r0, #1\n    strb r0, [r4]\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_020660A0(void) {
    /* Original at 0x020660A0 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl sub_02062428\n    cmp r0, #0\n    bne _020660B2\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    add r0, r5, #0\n    bl MapObject_ClearSingleMovement\n    mov r0, #0\n    strb r0, [r4]\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_020660C0(void) {
    /* Original at 0x020660C0 */
    /* Requires manual decompilation - 55 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    mov r1, #0\n    add r4, r0, #0\n    str r1, [sp, #8]\n    bl MapObject_GetType\n    str r0, [sp]\n    add r0, r4, #0\n    bl MapObject_GetMapID\n    add r6, r0, #0\n    add r0, r4, #0\n    bl sub_02064518\n    add r5, r0, #0\n    add r0, r4, #0\n    bl MapObject_GetManager\n    ldr r1, [sp]\n    add r7, r0, #0\n    cmp r1, #8\n    bhi _02066148\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _020660FA: ; jump table\n    add r1, sp, #4\n    add r2, sp, #8\n    mov r3, #1\n    bl MapObjectManager_GetNextObjectWithFlagFromIndex\n    cmp r0, #1\n    bne _02066148\n    ldr r0, [sp, #4]\n    cmp r4, r0\n    beq _02066138\n    bl MapObject_GetMapID\n    cmp r6, r0\n    bne _02066138\n    ldr r0, [sp, #4]\n    bl sub_02064518\n    cmp r5, r0\n    bne _02066138\n    ldr r0, [sp, #4]\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    add r0, r7, #0\n    add r1, sp, #4\n    add r2, sp, #8\n    mov r3, #1\n    bl MapObjectManager_GetNextObjectWithFlagFromIndex\n    cmp r0, #1\n    beq _0206611A\n    mov r0, #0\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_02066150(void) {
    /* Original at 0x02066150 */
    /* Requires manual decompilation - 54 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    str r1, [sp]\n    bl MapObject_GetManager\n    add r4, r0, #0\n    mov r0, #0\n    str r0, [sp, #8]\n    add r0, r5, #0\n    bl MapObject_GetMapID\n    add r7, r0, #0\n    add r0, r5, #0\n    bl sub_02064518\n    add r6, r0, #0\n    add r0, r4, #0\n    add r1, sp, #4\n    add r2, sp, #8\n    mov r3, #1\n    bl MapObjectManager_GetNextObjectWithFlagFromIndex\n    cmp r0, #1\n    bne _020661C2\n    ldr r0, [sp, #4]\n    cmp r5, r0\n    beq _020661B2\n    bl MapObject_GetMapID\n    cmp r7, r0\n    bne _020661B2\n    ldr r0, [sp, #4]\n    bl sub_02064518\n    cmp r6, r0\n    bne _020661B2\n    ldr r0, [sp]\n    ldrb r0, [r0, #1]\n    cmp r0, #0\n    bne _020661AC\n    ldr r1, [sp]\n    ldr r2, [sp, #4]\n    add r0, r5, #0\n    bl sub_020661CC\n    add sp, #0xc\n    mov r0, #1\n    pop {r4, r5, r6, r7, pc}\n    add r0, r4, #0\n    add r1, sp, #4\n    add r2, sp, #8\n    mov r3, #1\n    bl MapObjectManager_GetNextObjectWithFlagFromIndex\n    cmp r0, #1\n    beq _02066182\n    ldr r1, [sp]\n    mov r0, #0\n    strb r0, [r1, #1]\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_020661CC(void) {
    *((u8*)(r1 + 1)) = 1;
    MapObject_GetXCoord(r2);
    *((u16*)(r5 + 2)) = r0;
    MapObject_GetZCoord(r4);
    *((u16*)(r5 + 4)) = r0;
    *((u16*)(r5 + 6)) = 0xff;
    *((u32*)(r5 + 8)) = r4;
}

void sub_020661F0(void) {
    /* Original at 0x020661F0 */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r4, r0, #0\n    ldr r5, [r1, #8]\n    bl MapObject_GetXCoord\n    add r6, r0, #0\n    add r0, r4, #0\n    bl MapObject_GetZCoord\n    add r7, r0, #0\n    add r0, r5, #0\n    bl MapObject_GetPreviousXCoord\n    add r4, r0, #0\n    add r0, r5, #0\n    bl MapObject_GetPreviousZCoord\n    cmp r6, r4\n    bne _0206621A\n    cmp r7, r0\n    beq _02066236\n    add r0, r5, #0\n    bl MapObject_CheckSingleMovement\n    cmp r0, #1\n    beq _02066232\n    mov r1, #0x61\n    add r0, r5, #0\n    lsl r1, r1, #6\n    bl MapObject_GetFlagsBitsMask\n    cmp r0, #0\n    bne _02066236\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_0206623C(void) {
    /* Original at 0x0206623C */
    /* Requires manual decompilation - 56 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    str r0, [sp]\n    add r5, r1, #0\n    bl MapObject_GetXCoord\n    add r4, r0, #0\n    ldr r0, [sp]\n    bl MapObject_GetZCoord\n    add r6, r0, #0\n    ldr r0, [r5, #8]\n    bl MapObject_GetXCoord\n    str r0, [sp, #8]\n    ldr r0, [r5, #8]\n    bl MapObject_GetZCoord\n    add r7, r0, #0\n    ldr r0, [r5, #8]\n    bl MapObject_GetPreviousXCoord\n    str r0, [sp, #4]\n    ldr r0, [r5, #8]\n    bl MapObject_GetPreviousZCoord\n    add r3, r0, #0\n    ldr r0, [sp, #8]\n    cmp r4, r0\n    bne _02066282\n    cmp r6, r7\n    bne _02066282\n    add sp, #0xc\n    mov r0, #0\n    pop {r4, r5, r6, r7, pc}\n    ldr r2, [sp, #4]\n    add r0, r4, #0\n    add r1, r6, #0\n    bl sub_02061200\n    add r5, r0, #0\n    bl GetDeltaXByFacingDirection\n    add r4, r4, r0\n    add r0, r5, #0\n    bl GetDeltaYByFacingDirection\n    add r1, r6, r0\n    ldr r0, [sp, #8]\n    cmp r4, r0\n    bne _020662A6\n    cmp r1, r7\n    beq _020662BC\n    add r0, r5, #0\n    mov r1, #0xc\n    bl sub_0206234C\n    add r1, r0, #0\n    ldr r0, [sp]\n    bl MapObject_ForceSetHeldMovement\n    add sp, #0xc\n    mov r0, #1\n    pop {r4, r5, r6, r7, pc}\n    mov r0, #0\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_020662C4(void) {
    /* Original at 0x020662C4 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r5, r1, #0\n    add r4, r0, #0\n    mov r1, #8\n    bl sub_0205F370\n    strb r5, [r0, #1]\n    add r0, r4, #0\n    mov r1, #0\n    bl sub_0205F328\n    add r0, r4, #0\n    bl MapObject_ClearSingleMovement\n    mov r1, #1\n    add r0, r4, #0\n    lsl r1, r1, #0x14\n    bl MapObject_SetFlagsBits\n    ldr r5, _02066308 ; =_020FE3DC\n    add r3, sp, #0\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    add r1, r2, #0\n    str r0, [r3]\n    add r0, r4, #0\n    bl MapObject_SetFacingVector\n    add sp, #0xc\n    pop {r4, r5, pc}\n    nop\n    _02066308: .word _020FE3DC"
    );
    #endif
}

void sub_0206630C(void) {
    sub_020662C4();
}

void sub_02066318(void) {
    sub_020662C4();
}

void sub_02066324(void) {
    sub_020662C4();
}

void sub_02066330(void) {
    sub_020662C4();
}

void sub_0206633C(void) {
    /* Original at 0x0206633C */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    bl sub_0205F394\n    ldr r6, _0206635C ; =_020FE3CC\n    add r4, r0, #0\n    ldrb r2, [r4]\n    add r0, r5, #0\n    add r1, r4, #0\n    lsl r2, r2, #2\n    ldr r2, [r6, r2]\n    blx r2\n    cmp r0, #1\n    beq _02066348\n    pop {r4, r5, r6, pc}\n    nop\n    _0206635C: .word _020FE3CC"
    );
    #endif
}

void sub_02066360(void) {
    /* Original at 0x02066360 */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl sub_0206642C\n    cmp r0, #0\n    beq _0206636E\n    bl ov01_021F1640\n    pop {r3, pc}"
    );
    #endif
}

void sub_02066370(void) {
    /* Original at 0x02066370 */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    bl sub_0205F394\n    add r5, r0, #0\n    mov r1, #0\n    strb r1, [r5]\n    add r0, r4, #0\n    bl sub_02066420\n    ldrb r0, [r5, #2]\n    cmp r0, #0\n    bne _020663AC\n    ldr r5, _020663B0 ; =_020FE3E8\n    add r3, sp, #0\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    add r1, r2, #0\n    str r0, [r3]\n    add r0, r4, #0\n    bl MapObject_SetFacingVector\n    mov r1, #1\n    add r0, r4, #0\n    lsl r1, r1, #0x14\n    bl MapObject_SetFlagsBits\n    add sp, #0xc\n    pop {r4, r5, pc}\n    _020663B0: .word _020FE3E8"
    );
    #endif
}

void sub_020663B4(void) {
    /* Original at 0x020663B4 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    ldrb r1, [r4, #2]\n    add r5, r0, #0\n    cmp r1, #0\n    bne _020663CE\n    ldrb r1, [r4, #1]\n    bl ov01_021FFF5C\n    add r1, r0, #0\n    add r0, r5, #0\n    bl sub_02066420\n    add r0, r5, #0\n    bl MapObject_ClearSingleMovement\n    add r0, r5, #0\n    bl MapObject_ClearFlag3\n    ldrb r0, [r4]\n    add r0, r0, #1\n    strb r0, [r4]\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_020663E4(void) {
    /* Original at 0x020663E4 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    ldrb r1, [r4, #2]\n    add r5, r0, #0\n    cmp r1, #0\n    bne _0206641C\n    bl sub_0206642C\n    cmp r0, #0\n    bne _02066412\n    add r0, r5, #0\n    bl sub_0205F73C\n    cmp r0, #1\n    bne _02066412\n    ldrb r1, [r4, #1]\n    add r0, r5, #0\n    bl ov01_021FFF5C\n    add r1, r0, #0\n    add r0, r5, #0\n    bl sub_02066420\n    mov r1, #1\n    add r0, r5, #0\n    lsl r1, r1, #0x14\n    bl MapObject_SetFlagsBits\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_02066420(void) {
    sub_0205F394();
}

void sub_0206642C(void) {
    sub_0205F394();
}

void sub_02066438(void) {
    sub_0205F394();
}

void sub_02066444(void) {
    /* Original at 0x02066444 */
    /* Requires manual decompilation - 70 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x30\n    ldr r5, _020664CC ; =_020FE3F4\n    add r3, r0, #0\n    ldmia r5!, {r0, r1}\n    add r4, sp, #0x20\n    add r2, r4, #0\n    stmia r4!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r4!, {r0, r1}\n    ldr r5, _020664D0 ; =_020FE434\n    add r4, sp, #0x10\n    ldmia r5!, {r0, r1}\n    stmia r4!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r4!, {r0, r1}\n    ldr r5, _020664D4 ; =_020FE444\n    add r4, sp, #0\n    ldmia r5!, {r0, r1}\n    stmia r4!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r4!, {r0, r1}\n    mov r1, #0\n    lsl r0, r1, #2\n    ldr r0, [r2, r0]\n    cmp r3, r0\n    bne _02066480\n    add sp, #0x30\n    mov r0, #3\n    pop {r3, r4, r5, pc}\n    add r0, r1, #1\n    lsl r0, r0, #0x18\n    lsr r1, r0, #0x18\n    cmp r1, #4\n    blo _02066472\n    mov r2, #0\n    add r1, sp, #0x10\n    lsl r0, r2, #2\n    ldr r0, [r1, r0]\n    cmp r3, r0\n    bne _0206649C\n    add sp, #0x30\n    mov r0, #2\n    pop {r3, r4, r5, pc}\n    add r0, r2, #1\n    lsl r0, r0, #0x18\n    lsr r2, r0, #0x18\n    cmp r2, #4\n    blo _0206648E\n    mov r2, #0\n    add r1, sp, #0\n    lsl r0, r2, #2\n    ldr r0, [r1, r0]\n    cmp r3, r0\n    bne _020664B8\n    add sp, #0x30\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    add r0, r2, #1\n    lsl r0, r0, #0x18\n    lsr r2, r0, #0x18\n    cmp r2, #4\n    blo _020664AA\n    bl GF_AssertFail\n    mov r0, #0\n    add sp, #0x30\n    pop {r3, r4, r5, pc}\n    _020664CC: .word _020FE3F4\n    _020664D0: .word _020FE434\n    _020664D4: .word _020FE444"
    );
    #endif
}

void sub_020664D8(void) {
    /* Original at 0x020664D8 */
    /* Requires manual decompilation - 81 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    bl MapObject_GetFieldSystem\n    add r4, r0, #0\n    add r0, r5, #0\n    bl MapObject_GetXCoord\n    str r0, [sp, #8]\n    add r0, r5, #0\n    bl MapObject_GetZCoord\n    add r2, r0, #0\n    ldr r1, [sp, #8]\n    add r0, r4, #0\n    str r2, [sp, #4]\n    bl GetMetatileBehavior\n    add r6, r0, #0\n    lsl r0, r6, #0x18\n    lsr r0, r0, #0x18\n    bl MetatileBehavior_IsEncounterGrass\n    cmp r0, #1\n    bne _02066516\n    add r0, r5, #0\n    mov r1, #0\n    bl ov01_021FF070\n    b _0206652A\n    lsl r0, r6, #0x18\n    lsr r0, r0, #0x18\n    bl sub_0205B6F4\n    cmp r0, #1\n    bne _0206652A\n    add r0, r5, #0\n    mov r1, #0\n    bl ov01_021FF8F0\n    add r0, r5, #0\n    bl ov01_022055DC\n    cmp r0, #0\n    beq _02066596\n    add r0, r5, #0\n    bl MapObject_GetFacingDirection\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    add r0, #0xfe\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    cmp r0, #1\n    bhi _02066596\n    add r0, r5, #0\n    add r1, sp, #8\n    add r2, sp, #4\n    bl ov01_02205604\n    ldr r1, [sp, #8]\n    ldr r2, [sp, #4]\n    add r0, r4, #0\n    bl GetMetatileBehavior\n    add r4, r0, #0\n    lsl r0, r4, #0x18\n    lsr r0, r0, #0x18\n    bl MetatileBehavior_IsEncounterGrass\n    cmp r0, #1\n    bne _0206657C\n    mov r1, #1\n    str r1, [sp]\n    ldr r2, [sp, #8]\n    ldr r3, [sp, #4]\n    add r0, r5, #0\n    bl ov01_021FF0E4\n    add sp, #0xc\n    pop {r3, r4, r5, r6, pc}\n    lsl r0, r4, #0x18\n    lsr r0, r0, #0x18\n    bl sub_0205B6F4\n    cmp r0, #1\n    bne _02066596\n    mov r1, #1\n    str r1, [sp]\n    ldr r2, [sp, #8]\n    ldr r3, [sp, #4]\n    add r0, r5, #0\n    bl ov01_021FF964\n    add sp, #0xc\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}
