/* Decompiled from asm/overlay_01_021F72DC.s */
#include "global.h"

void ov01_021F72DC(void) {
    /* Original at 0x021F72DC */
    /* Requires manual decompilation - 88 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl MapObject_GetSpriteID\n    cmp r0, #0xf8\n    bgt _021F7356\n    bge _021F737E\n    cmp r0, #0x62\n    bgt _021F7308\n    cmp r0, #0x61\n    blt _021F72FA\n    beq _021F737E\n    cmp r0, #0x62\n    beq _021F737E\n    b _021F7388\n    cmp r0, #0\n    bgt _021F7302\n    beq _021F737E\n    b _021F7388\n    cmp r0, #0x15\n    beq _021F737E\n    b _021F7388\n    cmp r0, #0xb0\n    bgt _021F7310\n    beq _021F737E\n    b _021F7388\n    add r1, r0, #0\n    sub r1, #0xb1\n    cmp r1, #0x18\n    bhi _021F7388\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _021F7324: ; jump table\n    ldr r2, _021F73C0 ; =0x00000103\n    cmp r0, r2\n    bgt _021F736E\n    bge _021F737E\n    cmp r0, #0xf9\n    bgt _021F7366\n    beq _021F737E\n    b _021F7388\n    sub r1, r2, #1\n    cmp r0, r1\n    beq _021F737E\n    b _021F7388\n    add r1, r2, #1\n    cmp r0, r1\n    bgt _021F7378\n    beq _021F737E\n    b _021F7388\n    add r1, r2, #2\n    cmp r0, r1\n    bne _021F7388\n    add r0, r4, #0\n    bl sub_0205F40C\n    ldr r0, [r0, #4]\n    pop {r4, pc}\n    mov r1, #0x6b\n    lsl r1, r1, #2\n    cmp r0, r1\n    blt _021F73A0\n    ldr r1, _021F73C4 ; =0x000003E1\n    cmp r0, r1\n    bgt _021F73A0\n    add r0, r4, #0\n    bl sub_0205F40C\n    ldr r0, [r0]\n    pop {r4, pc}\n    ldr r1, _021F73C8 ; =0x00000106\n    cmp r0, r1\n    blt _021F73B4\n    add r1, r1, #7\n    cmp r0, r1\n    bgt _021F73B4\n    add r0, r4, #0\n    bl sub_02064084\n    pop {r4, pc}\n    add r0, r4, #0\n    bl sub_0205F40C\n    ldr r0, [r0, #4]\n    pop {r4, pc}\n    nop\n    _021F73C0: .word 0x00000103\n    _021F73C4: .word 0x000003E1\n    _021F73C8: .word 0x00000106"
    );
    #endif
}

void ov01_021F73CC(void) {
    /* Original at 0x021F73CC */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    mov r1, #0x14\n    add r5, r0, #0\n    bl sub_0205F3E8\n    add r4, r0, #0\n    mov r0, #0\n    mvn r0, r0\n    strb r0, [r4, #2]\n    add r0, r5, #0\n    add r1, r4, #4\n    bl ov01_021F9510\n    ldr r0, [r4, #4]\n    cmp r0, #0\n    beq _021F73F2\n    add r0, r5, #0\n    bl sub_0205F484\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_021F73F4(void) {
    /* Original at 0x021F73F4 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl sub_0205F40C\n    add r1, r0, #0\n    add r0, r4, #0\n    add r1, r1, #4\n    bl ov01_021F95A8\n    pop {r4, pc}"
    );
    #endif
}

void ov01_021F7408(void) {
    /* Original at 0x021F7408 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    bl sub_0205F40C\n    add r4, r0, #0\n    ldr r0, [r4, #4]\n    cmp r0, #0\n    beq _021F7420\n    add r1, r4, #0\n    add r1, #8\n    bl ov01_021F9610\n    add r0, r5, #0\n    add r1, r4, #4\n    bl ov01_021F95A8\n    mov r1, #2\n    add r0, r5, #0\n    lsl r1, r1, #0x14\n    bl MapObject_SetFlagsBits\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_021F7434(void) {
    /* Original at 0x021F7434 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    bl sub_0205F40C\n    add r4, r0, #0\n    add r0, r5, #0\n    bl ov01_021FA2D4\n    cmp r0, #1\n    beq _021F7476\n    ldr r0, [r4, #4]\n    cmp r0, #0\n    bne _021F7456\n    add r0, r5, #0\n    add r1, r4, #4\n    bl ov01_021F9510\n    ldr r0, [r4, #4]\n    cmp r0, #0\n    beq _021F7476\n    add r1, r4, #0\n    add r1, #8\n    bl ov01_021F9630\n    ldr r1, [r4, #4]\n    add r0, r5, #0\n    bl ov01_021FA3E8\n    mov r1, #2\n    add r0, r5, #0\n    lsl r1, r1, #0x14\n    bl MapObject_ClearFlagsBits\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_021F7478(void) {
    /* Original at 0x021F7478 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    mov r1, #0x18\n    add r5, r0, #0\n    bl sub_0205F3E8\n    add r4, r0, #0\n    mov r0, #0\n    mvn r0, r0\n    strb r0, [r4, #0x10]\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov01_021F9510\n    mov r0, #0\n    strb r0, [r4, #0x15]\n    ldrb r1, [r4, #0x17]\n    mov r0, #2\n    bic r1, r0\n    strb r1, [r4, #0x17]\n    ldrb r1, [r4, #0x17]\n    mov r0, #1\n    bic r1, r0\n    strb r1, [r4, #0x17]\n    ldr r0, [r4]\n    cmp r0, #0\n    beq _021F74B2\n    add r0, r5, #0\n    bl sub_0205F484\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_021F74B4(void) {
    /* Original at 0x021F74B4 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl sub_0205F40C\n    add r1, r0, #0\n    add r0, r4, #0\n    bl ov01_021F95A8\n    pop {r4, pc}"
    );
    #endif
}

void ov01_021F74C8(void) {
    /* Original at 0x021F74C8 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    bl sub_0205F40C\n    add r4, r0, #0\n    ldr r0, [r4]\n    cmp r0, #0\n    beq _021F74DE\n    add r1, r4, #4\n    bl ov01_021F9610\n    ldrb r1, [r4, #0x17]\n    mov r0, #2\n    bic r1, r0\n    strb r1, [r4, #0x17]\n    ldrb r1, [r4, #0x17]\n    mov r0, #1\n    bic r1, r0\n    strb r1, [r4, #0x17]\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov01_021F95A8\n    mov r1, #2\n    add r0, r5, #0\n    lsl r1, r1, #0x14\n    bl MapObject_SetFlagsBits\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_021F7504(void) {
    /* Original at 0x021F7504 */
    /* Requires manual decompilation - 213 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x3c\n    add r5, r0, #0\n    bl sub_0205F40C\n    add r4, r0, #0\n    ldrb r0, [r4, #0x17]\n    lsl r0, r0, #0x1e\n    lsr r0, r0, #0x1f\n    bne _021F7522\n    add r0, r5, #0\n    bl MapObject_GetID\n    cmp r0, #0xfd\n    beq _021F7524\n    b _021F7654\n    add r0, r5, #0\n    bl MapObject_GetManager\n    bl MapObjectManager_GetFieldSystem\n    str r0, [sp, #0x10]\n    ldr r0, [r0, #0xc]\n    bl SaveArray_Party_Get\n    bl GetFirstAliveMonInParty_CrashIfNone\n    str r0, [sp, #0xc]\n    mov r1, #5\n    mov r2, #0\n    bl GetMonData\n    add r7, r0, #0\n    ldr r0, [sp, #0xc]\n    mov r1, #0x70\n    mov r2, #0\n    bl GetMonData\n    add r6, r0, #0\n    ldr r0, [sp, #0xc]\n    bl GetMonGender\n    str r0, [sp, #8]\n    lsl r1, r6, #0x10\n    ldr r2, [sp, #8]\n    add r0, r7, #0\n    lsr r1, r1, #0x10\n    bl FollowMon_GetSpriteID\n    str r0, [sp, #0x14]\n    ldr r0, [sp, #0xc]\n    bl MonIsShiny\n    str r0, [sp, #4]\n    lsl r2, r6, #0x18\n    ldrb r1, [r4, #0x17]\n    mov r0, #2\n    lsr r2, r2, #0x18\n    orr r0, r1\n    strb r0, [r4, #0x17]\n    ldr r3, [sp, #4]\n    add r0, r5, #0\n    add r1, r7, #0\n    bl FollowMon_SetObjectParams\n    ldr r1, [sp, #0x14]\n    add r0, r5, #0\n    bl MapObject_SetSpriteID\n    add r0, r5, #0\n    bl sub_0205FCD4\n    add r0, r5, #0\n    mov r1, #4\n    bl MapObject_SetFlagsBits\n    add r0, r5, #0\n    add r1, sp, #0x30\n    bl MapObject_CopyPositionVector\n    add r0, r5, #0\n    bl MapObject_GetXCoord\n    add r1, r0, #0\n    mov r0, #2\n    lsl r2, r1, #0x10\n    lsl r0, r0, #0xe\n    add r0, r2, r0\n    str r0, [sp, #0x30]\n    add r0, r5, #0\n    bl MapObject_SetPreviousX\n    add r0, r5, #0\n    bl MapObject_GetYCoord\n    add r1, r0, #0\n    add r0, r5, #0\n    bl MapObject_SetPreviousY\n    add r0, r5, #0\n    bl MapObject_GetZCoord\n    add r1, r0, #0\n    mov r0, #2\n    lsl r2, r1, #0x10\n    lsl r0, r0, #0xe\n    add r0, r2, r0\n    str r0, [sp, #0x38]\n    add r0, r5, #0\n    bl MapObject_SetPreviousZ\n    add r0, r5, #0\n    add r1, sp, #0x30\n    bl MapObject_SetPositionVector\n    add r0, r5, #0\n    bl MapObject_ClearHeldMovement\n    ldr r0, [sp, #0x10]\n    add r0, #0xf4\n    ldr r0, [r0]\n    cmp r0, r7\n    bne _021F761C\n    ldr r0, [sp, #0x10]\n    add r0, #0xfc\n    ldrh r0, [r0]\n    cmp r0, r6\n    bne _021F761C\n    ldr r0, [sp, #0x10]\n    add r0, #0xfb\n    ldrb r1, [r0]\n    ldr r0, [sp, #4]\n    cmp r1, r0\n    bne _021F761C\n    ldr r0, [sp, #0x10]\n    add r0, #0xf8\n    ldrb r1, [r0]\n    ldr r0, [sp, #8]\n    cmp r1, r0\n    beq _021F7636\n    ldr r0, [sp, #8]\n    lsl r2, r6, #0x18\n    str r0, [sp]\n    ldr r0, [sp, #0x10]\n    ldr r3, [sp, #4]\n    add r1, r7, #0\n    lsr r2, r2, #0x18\n    bl FieldSystem_SetFollowerPokeParam\n    add r0, r5, #0\n    mov r1, #1\n    bl MapObject_SetFacingDirectionDirect\n    mov r1, #0\n    ldr r0, [sp, #0xc]\n    add r2, r1, #0\n    bl GetMonData\n    add r3, r0, #0\n    mov r1, #0x42\n    lsl r2, r7, #0x10\n    ldr r0, [sp, #0x10]\n    lsl r1, r1, #2\n    ldr r0, [r0, r1]\n    ldr r1, [sp, #0xc]\n    lsr r2, r2, #0x10\n    bl FieldSystem_UnkSub108_Set\n    add r0, r5, #0\n    bl ov01_021FA2D4\n    cmp r0, #1\n    beq _021F7700\n    ldr r0, [r4]\n    cmp r0, #0\n    bne _021F766C\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov01_021F9510\n    ldr r0, [r4]\n    cmp r0, #0\n    beq _021F7700\n    ldrb r1, [r4, #0x17]\n    mov r0, #1\n    bic r1, r0\n    mov r0, #1\n    orr r0, r1\n    strb r0, [r4, #0x17]\n    add r1, sp, #0x18\n    mov r0, #0\n    str r0, [r1]\n    str r0, [r1, #4]\n    str r0, [r1, #8]\n    add r0, r5, #0\n    add r1, sp, #0x24\n    bl MapObject_CopyFacingVector\n    add r0, r5, #0\n    bl MapObject_GetSpriteID\n    add r0, r5, #0\n    bl MapObject_GetFacingDirection\n    add r1, r0, #0\n    add r0, r5, #0\n    add r2, sp, #0x18\n    bl ov01_021F8E70\n    ldr r0, [sp, #0x18]\n    add r1, sp, #0x24\n    str r0, [sp, #0x24]\n    ldr r0, [sp, #0x20]\n    str r0, [sp, #0x2c]\n    add r0, r5, #0\n    bl MapObject_SetFacingVector\n    add r0, r5, #0\n    bl ov01_02205564\n    cmp r0, #0\n    beq _021F76CC\n    ldr r2, [r4]\n    mov r0, #1\n    add r1, r5, #0\n    bl ov01_0220589C\n    b _021F76E0\n    add r0, r5, #0\n    bl ov01_0220553C\n    cmp r0, #0\n    beq _021F76E0\n    ldr r2, [r4]\n    mov r0, #1\n    add r1, r5, #0\n    bl ov01_02205808\n    ldr r0, [r4]\n    add r1, r4, #4\n    bl ov01_021F9630\n    ldr r1, [r4]\n    add r0, r5, #0\n    bl ov01_021FA3E8\n    mov r1, #2\n    add r0, r5, #0\n    lsl r1, r1, #0x14\n    bl MapObject_ClearFlagsBits\n    add r0, r5, #0\n    bl sub_0205F484\n    add sp, #0x3c\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021F7704(void) {
    /* Original at 0x021F7704 */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl sub_0205F40C\n    mov r1, #0\n    strb r1, [r0, #0x15]\n    add r0, r4, #0\n    bl MapObject_GetFacingVector\n    mov r1, #0\n    str r1, [r0, #4]\n    pop {r4, pc}"
    );
    #endif
}

void ov01_021F771C(void) {
    /* Original at 0x021F771C */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    mov r1, #0xfd\n    bl MapObjectManager_GetFirstActiveObjectByID\n    bl sub_0205F40C\n    ldr r0, [r0]\n    pop {r3, pc}"
    );
    #endif
}

void ov01_021F772C(void) {
    /* Original at 0x021F772C */
    /* Requires manual decompilation - 50 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r4, r0, #0\n    bl sub_0205F40C\n    str r0, [sp]\n    ldr r7, [r0, #4]\n    add r0, r4, #0\n    bl ov01_021FA2D4\n    cmp r0, #1\n    beq _021F779C\n    cmp r7, #0\n    beq _021F779C\n    add r0, r4, #0\n    bl MapObject_GetFacingDirection\n    str r0, [sp, #4]\n    add r0, r4, #0\n    bl sub_0205F330\n    add r5, r0, #0\n    cmp r5, #9\n    blt _021F7760\n    bl GF_AssertFail\n    lsl r6, r5, #2\n    ldr r5, _021F77A0 ; =ov01_02208AC0\n    ldr r2, [sp]\n    ldr r3, [sp, #4]\n    ldr r5, [r5, r6]\n    add r0, r4, #0\n    add r1, r7, #0\n    blx r5\n    add r0, r4, #0\n    bl MapObject_GetFacingVector\n    mov r1, #2\n    lsl r1, r1, #0xa\n    str r1, [r0, #8]\n    ldr r1, [sp, #4]\n    ldr r0, [sp]\n    strb r1, [r0, #2]\n    add r0, r4, #0\n    bl sub_0205F330\n    ldr r1, [sp]\n    strb r0, [r1, #3]\n    add r0, r4, #0\n    add r1, r7, #0\n    bl ov01_021FA3E8\n    add r0, r4, #0\n    add r1, r7, #0\n    bl ov01_021F8C88\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    _021F77A0: .word ov01_02208AC0"
    );
    #endif
}

void ov01_021F77A4(void) {
    /* Original at 0x021F77A4 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    bl sub_0205F40C\n    add r5, r0, #0\n    add r0, r4, #0\n    bl ov01_021FA2D4\n    cmp r0, #1\n    beq _021F77CE\n    ldr r5, [r5, #4]\n    cmp r5, #0\n    beq _021F77CE\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov01_021FA3E8\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov01_021F8C88\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_021F77D0(void) {
    /* Original at 0x021F77D0 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    bl sub_0205F40C\n    add r5, r0, #0\n    add r0, r4, #0\n    bl ov01_021FA2D4\n    cmp r0, #1\n    beq _021F780E\n    ldr r5, [r5, #4]\n    cmp r5, #0\n    beq _021F780E\n    add r0, r4, #0\n    bl ov01_021F9344\n    cmp r0, #0\n    bne _021F77FE\n    mov r1, #1\n    add r0, r5, #0\n    lsl r1, r1, #0xc\n    bl sub_02023F04\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov01_021FA3E8\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov01_021F8C88\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_021F7810(void) {
    /* Original at 0x021F7810 */
    /* Requires manual decompilation - 55 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    bl sub_0205F40C\n    add r4, r0, #0\n    add r0, r5, #0\n    ldr r6, [r4]\n    bl ov01_021FA2D4\n    cmp r0, #1\n    beq _021F7890\n    cmp r6, #0\n    beq _021F7890\n    ldrb r1, [r4, #0x17]\n    lsl r0, r1, #0x1f\n    lsr r0, r0, #0x1f\n    bne _021F7866\n    mov r0, #1\n    bic r1, r0\n    mov r0, #1\n    orr r0, r1\n    strb r0, [r4, #0x17]\n    add r0, r5, #0\n    bl ov01_02205564\n    cmp r0, #0\n    beq _021F7852\n    ldr r2, [r4]\n    mov r0, #1\n    add r1, r5, #0\n    bl ov01_0220589C\n    b _021F7866\n    add r0, r5, #0\n    bl ov01_0220553C\n    cmp r0, #0\n    beq _021F7866\n    mov r0, #1\n    add r1, r5, #0\n    add r2, r6, #0\n    bl ov01_02205808\n    add r0, r5, #0\n    bl MapObject_GetFacingDirection\n    add r7, r0, #0\n    mov r0, #1\n    str r0, [sp]\n    add r0, r5, #0\n    add r1, r6, #0\n    add r2, r4, #0\n    add r3, r7, #0\n    bl ov01_021F8D80\n    add r0, r5, #0\n    add r1, r6, #0\n    strb r7, [r4, #0x10]\n    bl ov01_021FA3E8\n    add r0, r5, #0\n    add r1, r6, #0\n    bl ov01_021F8C88\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021F7894(void) {
    /* Original at 0x021F7894 */
    /* Requires manual decompilation - 55 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    bl sub_0205F40C\n    add r4, r0, #0\n    add r0, r5, #0\n    ldr r6, [r4]\n    bl ov01_021FA2D4\n    cmp r0, #1\n    beq _021F7914\n    cmp r6, #0\n    beq _021F7914\n    ldrb r1, [r4, #0x17]\n    lsl r0, r1, #0x1f\n    lsr r0, r0, #0x1f\n    bne _021F78EA\n    mov r0, #1\n    bic r1, r0\n    mov r0, #1\n    orr r0, r1\n    strb r0, [r4, #0x17]\n    add r0, r5, #0\n    bl ov01_02205564\n    cmp r0, #0\n    beq _021F78D6\n    ldr r2, [r4]\n    mov r0, #1\n    add r1, r5, #0\n    bl ov01_0220589C\n    b _021F78EA\n    add r0, r5, #0\n    bl ov01_0220553C\n    cmp r0, #0\n    beq _021F78EA\n    mov r0, #1\n    add r1, r5, #0\n    add r2, r6, #0\n    bl ov01_02205808\n    add r0, r5, #0\n    bl MapObject_GetFacingDirection\n    add r7, r0, #0\n    mov r0, #1\n    str r0, [sp]\n    add r0, r5, #0\n    add r1, r6, #0\n    add r2, r4, #0\n    add r3, r7, #0\n    bl ov01_021F8D80\n    add r0, r5, #0\n    add r1, r6, #0\n    strb r7, [r4, #0x10]\n    bl ov01_021FA3E8\n    add r0, r5, #0\n    add r1, r6, #0\n    bl ov01_021F8C88\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021F7918(void) {
    /* Original at 0x021F7918 */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    bl sub_0205F40C\n    add r4, r0, #0\n    add r0, r5, #0\n    bl ov01_021FA2D4\n    cmp r0, #1\n    beq _021F7968\n    ldr r6, [r4]\n    cmp r6, #0\n    beq _021F7968\n    ldrb r1, [r4, #0x17]\n    lsl r0, r1, #0x1f\n    lsr r0, r0, #0x1f\n    bne _021F7958\n    mov r0, #1\n    bic r1, r0\n    mov r0, #1\n    orr r0, r1\n    strb r0, [r4, #0x17]\n    add r0, r5, #0\n    bl ov01_0220553C\n    cmp r0, #0\n    beq _021F7958\n    mov r0, #1\n    add r1, r5, #0\n    add r2, r6, #0\n    bl ov01_02205808\n    add r0, r5, #0\n    add r1, r6, #0\n    bl ov01_021FA3E8\n    add r0, r5, #0\n    add r1, r6, #0\n    bl ov01_021F8C88\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov01_021F796C(void) {
    /* Original at 0x021F796C */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r0, #2\n    ldrsb r0, [r2, r0]\n    add r4, r1, #0\n    cmp r3, r0\n    beq _021F7990\n    add r0, r3, #0\n    bl ov01_021FA44C\n    add r1, r0, #0\n    add r0, r4, #0\n    bl sub_02023EE0\n    add r0, r4, #0\n    mov r1, #0\n    bl sub_02023F40\n    b _021F7996\n    add r0, r4, #0\n    bl ov01_021F8C30\n    add r0, r4, #0\n    mov r1, #0\n    bl sub_02023F04\n    pop {r4, pc}"
    );
    #endif
}

void ov01_021F79A0(void) {
    /* Original at 0x021F79A0 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r0, #2\n    ldrsb r0, [r2, r0]\n    add r4, r1, #0\n    cmp r3, r0\n    beq _021F79C4\n    add r0, r3, #0\n    bl ov01_021FA44C\n    add r1, r0, #0\n    add r0, r4, #0\n    bl sub_02023EE0\n    add r0, r4, #0\n    mov r1, #0\n    bl sub_02023F40\n    add r0, r5, #0\n    bl ov01_021F9344\n    cmp r0, #0\n    bne _021F79D8\n    mov r1, #2\n    add r0, r4, #0\n    lsl r1, r1, #0xa\n    bl sub_02023F04\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_021F79DC(void) {
    /* Original at 0x021F79DC */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r0, #2\n    ldrsb r0, [r2, r0]\n    add r4, r1, #0\n    cmp r3, r0\n    beq _021F7A00\n    add r0, r3, #0\n    bl ov01_021FA44C\n    add r1, r0, #0\n    add r0, r4, #0\n    bl sub_02023EE0\n    add r0, r4, #0\n    mov r1, #0\n    bl sub_02023F40\n    add r0, r5, #0\n    bl ov01_021F9344\n    cmp r0, #0\n    bne _021F7A14\n    mov r1, #1\n    add r0, r4, #0\n    lsl r1, r1, #0xc\n    bl sub_02023F04\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_021F7A18(void) {
    /* Original at 0x021F7A18 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r0, #2\n    ldrsb r0, [r2, r0]\n    add r4, r1, #0\n    cmp r3, r0\n    beq _021F7A3C\n    add r0, r3, #0\n    bl ov01_021FA44C\n    add r1, r0, #0\n    add r0, r4, #0\n    bl sub_02023EE0\n    add r0, r4, #0\n    mov r1, #0\n    bl sub_02023F40\n    add r0, r5, #0\n    bl ov01_021F9344\n    cmp r0, #0\n    bne _021F7A50\n    mov r1, #2\n    add r0, r4, #0\n    lsl r1, r1, #0xc\n    bl sub_02023F04\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_021F7A54(void) {
    /* Original at 0x021F7A54 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r0, #2\n    ldrsb r0, [r2, r0]\n    add r4, r1, #0\n    cmp r3, r0\n    beq _021F7A78\n    add r0, r3, #0\n    bl ov01_021FA44C\n    add r1, r0, #0\n    add r0, r4, #0\n    bl sub_02023EE0\n    add r0, r4, #0\n    mov r1, #0\n    bl sub_02023F40\n    add r0, r5, #0\n    bl ov01_021F9344\n    cmp r0, #0\n    bne _021F7A8C\n    mov r1, #1\n    add r0, r4, #0\n    lsl r1, r1, #0xe\n    bl sub_02023F04\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_021F7A90(void) {
    /* Original at 0x021F7A90 */
    /* Requires manual decompilation - 60 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0x1c\n    add r6, r0, #0\n    add r4, r2, #0\n    mov r0, #2\n    ldrsb r0, [r4, r0]\n    add r5, r1, #0\n    cmp r3, r0\n    beq _021F7ABC\n    add r0, r3, #0\n    bl ov01_021FA44C\n    add r1, r0, #0\n    add r0, r5, #0\n    bl sub_02023EE0\n    add r0, r5, #0\n    mov r1, #0\n    bl sub_02023F40\n    mov r0, #0\n    strh r0, [r4]\n    mov r0, #3\n    ldrsb r0, [r4, r0]\n    cmp r0, #6\n    beq _021F7AC8\n    mov r0, #0\n    strh r0, [r4]\n    add r0, r6, #0\n    bl ov01_021F9344\n    cmp r0, #0\n    bne _021F7B0C\n    ldr r6, _021F7B10 ; =ov01_02208A64\n    add r3, sp, #0\n    ldmia r6!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r6!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r6!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r6]\n    mov r1, #0\n    str r0, [r3]\n    ldrsh r1, [r4, r1]\n    add r0, r5, #0\n    lsl r1, r1, #2\n    ldr r1, [r2, r1]\n    bl sub_02023F04\n    mov r0, #0\n    ldrsh r1, [r4, r0]\n    add r1, r1, #1\n    strh r1, [r4]\n    ldrsh r1, [r4, r0]\n    lsl r2, r1, #2\n    add r1, sp, #0\n    ldr r1, [r1, r2]\n    cmp r1, #0\n    bne _021F7B0C\n    strh r0, [r4]\n    add sp, #0x1c\n    pop {r3, r4, r5, r6, pc}\n    _021F7B10: .word ov01_02208A64"
    );
    #endif
}

void ov01_021F7B14(void) {
    /* Original at 0x021F7B14 */
    /* Requires manual decompilation - 56 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x10\n    add r6, r0, #0\n    add r4, r2, #0\n    mov r0, #2\n    ldrsb r0, [r4, r0]\n    add r5, r1, #0\n    cmp r3, r0\n    beq _021F7B40\n    add r0, r3, #0\n    bl ov01_021FA44C\n    add r1, r0, #0\n    add r0, r5, #0\n    bl sub_02023EE0\n    add r0, r5, #0\n    mov r1, #0\n    bl sub_02023F40\n    mov r0, #0\n    strh r0, [r4]\n    mov r0, #3\n    ldrsb r0, [r4, r0]\n    cmp r0, #7\n    beq _021F7B4C\n    mov r0, #0\n    strh r0, [r4]\n    add r0, r6, #0\n    bl ov01_021F9344\n    cmp r0, #0\n    bne _021F7B88\n    ldr r6, _021F7B8C ; =ov01_02208A08\n    add r3, sp, #0\n    add r2, r3, #0\n    ldmia r6!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r6!, {r0, r1}\n    stmia r3!, {r0, r1}\n    mov r1, #0\n    ldrsh r1, [r4, r1]\n    add r0, r5, #0\n    lsl r1, r1, #2\n    ldr r1, [r2, r1]\n    bl sub_02023F04\n    mov r0, #0\n    ldrsh r1, [r4, r0]\n    add r1, r1, #1\n    strh r1, [r4]\n    ldrsh r1, [r4, r0]\n    lsl r2, r1, #2\n    add r1, sp, #0\n    ldr r1, [r1, r2]\n    cmp r1, #0\n    bne _021F7B88\n    strh r0, [r4]\n    add sp, #0x10\n    pop {r4, r5, r6, pc}\n    _021F7B8C: .word ov01_02208A08"
    );
    #endif
}

void ov01_021F7B90(void) {
    /* Original at 0x021F7B90 */
    /* Requires manual decompilation - 60 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x20\n    add r6, r0, #0\n    add r4, r2, #0\n    mov r0, #2\n    ldrsb r0, [r4, r0]\n    add r5, r1, #0\n    cmp r3, r0\n    beq _021F7BBC\n    add r0, r3, #0\n    bl ov01_021FA44C\n    add r1, r0, #0\n    add r0, r5, #0\n    bl sub_02023EE0\n    add r0, r5, #0\n    mov r1, #0\n    bl sub_02023F40\n    mov r0, #0\n    strh r0, [r4]\n    mov r0, #3\n    ldrsb r0, [r4, r0]\n    cmp r0, #8\n    beq _021F7BC8\n    mov r0, #0\n    strh r0, [r4]\n    add r0, r6, #0\n    bl ov01_021F9344\n    cmp r0, #0\n    bne _021F7C0C\n    ldr r6, _021F7C10 ; =ov01_02208A80\n    add r3, sp, #0\n    add r2, r3, #0\n    ldmia r6!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r6!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r6!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r6!, {r0, r1}\n    stmia r3!, {r0, r1}\n    mov r1, #0\n    ldrsh r1, [r4, r1]\n    add r0, r5, #0\n    lsl r1, r1, #2\n    ldr r1, [r2, r1]\n    bl sub_02023F04\n    mov r0, #0\n    ldrsh r1, [r4, r0]\n    add r1, r1, #1\n    strh r1, [r4]\n    ldrsh r1, [r4, r0]\n    lsl r2, r1, #2\n    add r1, sp, #0\n    ldr r1, [r1, r2]\n    cmp r1, #0\n    bne _021F7C0C\n    strh r0, [r4]\n    add sp, #0x20\n    pop {r4, r5, r6, pc}\n    _021F7C10: .word ov01_02208A80"
    );
    #endif
}

void ov01_021F7C14(void) {
    /* Original at 0x021F7C14 */
    /* Requires manual decompilation - 45 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r4, r0, #0\n    bl sub_0205F40C\n    str r0, [sp]\n    ldr r7, [r0, #4]\n    add r0, r4, #0\n    bl ov01_021FA2D4\n    cmp r0, #1\n    beq _021F7C78\n    cmp r7, #0\n    beq _021F7C78\n    add r0, r4, #0\n    bl MapObject_GetFacingDirection\n    str r0, [sp, #4]\n    add r0, r4, #0\n    bl sub_0205F330\n    add r5, r0, #0\n    cmp r5, #0xa\n    blt _021F7C48\n    bl GF_AssertFail\n    lsl r6, r5, #2\n    ldr r5, _021F7C7C ; =ov01_02208B0C\n    ldr r2, [sp]\n    ldr r3, [sp, #4]\n    ldr r5, [r5, r6]\n    add r0, r4, #0\n    add r1, r7, #0\n    blx r5\n    ldr r1, [sp, #4]\n    ldr r0, [sp]\n    strb r1, [r0, #2]\n    add r0, r4, #0\n    bl sub_0205F330\n    ldr r1, [sp]\n    strb r0, [r1, #3]\n    add r0, r4, #0\n    add r1, r7, #0\n    bl ov01_021FA3E8\n    add r0, r4, #0\n    add r1, r7, #0\n    bl ov01_021F8C88\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    _021F7C7C: .word ov01_02208B0C"
    );
    #endif
}

void ov01_021F7C80(void) {
    /* Original at 0x021F7C80 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r0, #2\n    ldrsb r0, [r2, r0]\n    add r4, r1, #0\n    cmp r3, r0\n    bne _021F7C94\n    mov r0, #3\n    ldrsb r0, [r2, r0]\n    cmp r0, #9\n    bne _021F7CAC\n    add r0, r3, #0\n    bl ov01_021FA44C\n    add r1, r0, #0\n    add r0, r4, #0\n    bl sub_02023EE0\n    add r0, r4, #0\n    mov r1, #0\n    bl sub_02023F40\n    b _021F7CB2\n    add r0, r4, #0\n    bl ov01_021F8C30\n    add r0, r4, #0\n    mov r1, #0\n    bl sub_02023F04\n    pop {r4, pc}"
    );
    #endif
}

void ov01_021F7CBC(void) {
    /* Original at 0x021F7CBC */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r0, #3\n    ldrsb r0, [r2, r0]\n    add r4, r1, #0\n    cmp r0, #9\n    beq _021F7CD8\n    add r0, r4, #0\n    mov r1, #4\n    bl sub_02023EE0\n    add r0, r4, #0\n    mov r1, #0\n    bl sub_02023F40\n    mov r1, #1\n    add r0, r4, #0\n    lsl r1, r1, #0xc\n    bl sub_02023F04\n    pop {r4, pc}"
    );
    #endif
}

void ov01_021F7CE4(void) {
    /* Original at 0x021F7CE4 */
    /* Requires manual decompilation - 81 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r5, r0, #0\n    bl sub_0205F40C\n    add r6, r0, #0\n    add r0, r5, #0\n    ldr r4, [r6, #4]\n    bl ov01_021FA2D4\n    cmp r0, #1\n    beq _021F7DA2\n    cmp r4, #0\n    beq _021F7DA2\n    add r0, r5, #0\n    bl MapObject_GetFacingDirection\n    add r7, r0, #0\n    add r0, r5, #0\n    bl sub_0205F330\n    cmp r0, #0\n    bne _021F7D56\n    cmp r7, #1\n    bls _021F7D1C\n    mov r0, #1\n    str r0, [sp, #4]\n    b _021F7D20\n    mov r0, #0\n    str r0, [sp, #4]\n    add r0, r4, #0\n    bl sub_02023EF4\n    ldr r1, [sp, #4]\n    cmp r1, r0\n    bne _021F7D34\n    mov r0, #3\n    ldrsb r0, [r6, r0]\n    cmp r0, #0\n    bne _021F7D4C\n    ldr r1, [sp, #4]\n    add r0, r4, #0\n    bl sub_02023EE0\n    add r0, r4, #0\n    mov r1, #0\n    bl sub_02023F40\n    add r0, r4, #0\n    mov r1, #0\n    bl sub_02023F04\n    add r0, r4, #0\n    mov r1, #0\n    bl sub_02023F04\n    b _021F7D88\n    cmp r7, #1\n    bls _021F7D60\n    mov r0, #1\n    str r0, [sp]\n    b _021F7D64\n    mov r0, #0\n    str r0, [sp]\n    add r0, r4, #0\n    bl sub_02023EF4\n    ldr r1, [sp]\n    cmp r1, r0\n    beq _021F7D7E\n    add r0, r4, #0\n    bl sub_02023EE0\n    add r0, r4, #0\n    mov r1, #0\n    bl sub_02023F40\n    mov r1, #1\n    add r0, r4, #0\n    lsl r1, r1, #0xc\n    bl sub_02023F04\n    strb r7, [r6, #2]\n    add r0, r5, #0\n    bl sub_0205F330\n    strb r0, [r6, #3]\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov01_021FA3E8\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov01_021F8C88\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021F7DA8(void) {
    /* Original at 0x021F7DA8 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    mov r1, #0x14\n    add r5, r0, #0\n    bl sub_0205F3E8\n    add r4, r0, #0\n    mov r0, #0\n    mvn r0, r0\n    strb r0, [r4]\n    add r0, r5, #0\n    add r1, r4, #4\n    bl ov01_021F9510\n    ldr r0, [r4, #4]\n    cmp r0, #0\n    beq _021F7DCE\n    add r0, r5, #0\n    bl sub_0205F484\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_021F7DD0(void) {
    /* Original at 0x021F7DD0 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r2, sp, #0\n    mov r1, #0\n    str r1, [r2]\n    str r1, [r2, #4]\n    add r4, r0, #0\n    str r1, [r2, #8]\n    bl sub_0205F40C\n    add r1, r0, #0\n    add r0, r4, #0\n    add r1, r1, #4\n    bl ov01_021F95A8\n    add r0, r4, #0\n    add r1, sp, #0\n    bl MapObject_SetFacingVector\n    add sp, #0xc\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov01_021F7DFC(void) {
    /* Original at 0x021F7DFC */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    bl sub_0205F40C\n    add r4, r0, #0\n    ldr r0, [r4, #4]\n    cmp r0, #0\n    beq _021F7E14\n    add r1, r4, #0\n    add r1, #8\n    bl ov01_021F9610\n    add r0, r5, #0\n    add r1, r4, #4\n    bl ov01_021F95A8\n    mov r1, #2\n    add r0, r5, #0\n    lsl r1, r1, #0x14\n    bl MapObject_SetFlagsBits\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_021F7E28(void) {
    /* Original at 0x021F7E28 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    bl sub_0205F40C\n    add r4, r0, #0\n    add r0, r5, #0\n    bl ov01_021FA2D4\n    cmp r0, #1\n    beq _021F7E6A\n    ldr r0, [r4, #4]\n    cmp r0, #0\n    bne _021F7E4A\n    add r0, r5, #0\n    add r1, r4, #4\n    bl ov01_021F9510\n    ldr r0, [r4, #4]\n    cmp r0, #0\n    beq _021F7E6A\n    add r1, r4, #0\n    add r1, #8\n    bl ov01_021F9630\n    ldr r1, [r4, #4]\n    add r0, r5, #0\n    bl ov01_021FA3E8\n    mov r1, #2\n    add r0, r5, #0\n    lsl r1, r1, #0x14\n    bl MapObject_ClearFlagsBits\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_021F7E6C(void) {
    /* Original at 0x021F7E6C */
    /* Requires manual decompilation - 50 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r4, r0, #0\n    bl sub_0205F40C\n    str r0, [sp]\n    ldr r7, [r0, #4]\n    add r0, r4, #0\n    bl ov01_021FA2D4\n    cmp r0, #1\n    beq _021F7EDC\n    cmp r7, #0\n    beq _021F7EDC\n    add r0, r4, #0\n    bl MapObject_GetFacingDirection\n    str r0, [sp, #4]\n    add r0, r4, #0\n    bl sub_0205F330\n    add r5, r0, #0\n    cmp r5, #0xa\n    blt _021F7EA0\n    bl GF_AssertFail\n    lsl r6, r5, #2\n    ldr r5, _021F7EE0 ; =ov01_02208B34\n    ldr r2, [sp]\n    ldr r3, [sp, #4]\n    ldr r5, [r5, r6]\n    add r0, r4, #0\n    add r1, r7, #0\n    blx r5\n    add r0, r4, #0\n    bl MapObject_GetFacingVector\n    mov r1, #2\n    lsl r1, r1, #0xa\n    str r1, [r0, #8]\n    ldr r1, [sp, #4]\n    ldr r0, [sp]\n    strb r1, [r0]\n    add r0, r4, #0\n    bl sub_0205F330\n    ldr r1, [sp]\n    strb r0, [r1, #2]\n    add r0, r4, #0\n    add r1, r7, #0\n    bl ov01_021FA3E8\n    add r0, r4, #0\n    add r1, r7, #0\n    bl ov01_021F8C88\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    _021F7EE0: .word ov01_02208B34"
    );
    #endif
}

void ov01_021F7EE4(void) {
    /* Original at 0x021F7EE4 */
    /* Requires manual decompilation - 49 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r2, #0\n    mov r0, #0\n    ldrsb r0, [r4, r0]\n    add r5, r1, #0\n    cmp r3, r0\n    beq _021F7F12\n    add r0, r3, #0\n    bl ov01_021FA44C\n    add r1, r0, #0\n    add r0, r5, #0\n    bl sub_02023EE0\n    add r0, r5, #0\n    mov r1, #0\n    bl sub_02023F40\n    ldrb r1, [r4, #3]\n    mov r0, #1\n    bic r1, r0\n    strb r1, [r4, #3]\n    pop {r3, r4, r5, pc}\n    mov r0, #2\n    ldrsb r0, [r4, r0]\n    cmp r0, #9\n    bne _021F7F28\n    ldrb r1, [r4, #3]\n    mov r0, #1\n    bic r1, r0\n    mov r0, #1\n    orr r0, r1\n    strb r0, [r4, #3]\n    pop {r3, r4, r5, pc}\n    ldrb r0, [r4, #3]\n    lsl r0, r0, #0x1f\n    lsr r0, r0, #0x1f\n    cmp r0, #1\n    bne _021F7F4A\n    add r0, r3, #0\n    bl ov01_021FA44C\n    add r1, r0, #0\n    add r0, r5, #0\n    bl ov01_021F8C64\n    ldrb r1, [r4, #3]\n    mov r0, #1\n    bic r1, r0\n    strb r1, [r4, #3]\n    pop {r3, r4, r5, pc}\n    add r0, r5, #0\n    bl ov01_021F8C30\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_021F7F54(void) {
    /* Original at 0x021F7F54 */
    /* Requires manual decompilation - 51 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r0, #0\n    add r4, r2, #0\n    mov r0, #0\n    ldrsb r0, [r4, r0]\n    add r5, r1, #0\n    cmp r3, r0\n    beq _021F7F7C\n    add r0, r3, #0\n    bl ov01_021FA44C\n    add r1, r0, #0\n    add r0, r5, #0\n    bl sub_02023EE0\n    add r0, r5, #0\n    mov r1, #0\n    bl sub_02023F40\n    b _021F7FB2\n    mov r0, #2\n    ldrsb r0, [r4, r0]\n    cmp r0, #9\n    bne _021F7F92\n    ldrb r1, [r4, #3]\n    mov r0, #1\n    bic r1, r0\n    mov r0, #1\n    orr r0, r1\n    strb r0, [r4, #3]\n    pop {r4, r5, r6, pc}\n    ldrb r0, [r4, #3]\n    lsl r0, r0, #0x1f\n    lsr r0, r0, #0x1f\n    cmp r0, #1\n    bne _021F7FB2\n    add r0, r3, #0\n    bl ov01_021FA44C\n    add r1, r0, #0\n    add r0, r5, #0\n    bl ov01_021F8C64\n    ldrb r1, [r4, #3]\n    mov r0, #1\n    bic r1, r0\n    strb r1, [r4, #3]\n    add r0, r6, #0\n    bl ov01_021F9344\n    cmp r0, #0\n    bne _021F7FC6\n    mov r1, #2\n    add r0, r5, #0\n    lsl r1, r1, #0xa\n    bl sub_02023F04\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov01_021F7FC8(void) {
    /* Original at 0x021F7FC8 */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r0, #0\n    ldrsb r0, [r2, r0]\n    add r4, r1, #0\n    cmp r3, r0\n    beq _021F7FEE\n    add r0, r3, #0\n    bl ov01_021FA44C\n    add r1, r0, #0\n    add r0, r4, #0\n    bl sub_02023EE0\n    add r0, r4, #0\n    mov r1, #0\n    bl sub_02023F40\n    b _021F8004\n    mov r0, #2\n    ldrsb r0, [r2, r0]\n    cmp r0, #9\n    bne _021F8004\n    add r0, r3, #0\n    bl ov01_021FA44C\n    add r1, r0, #0\n    add r0, r4, #0\n    bl ov01_021F8C64\n    add r0, r5, #0\n    bl ov01_021F9344\n    cmp r0, #0\n    bne _021F8018\n    mov r1, #1\n    add r0, r4, #0\n    lsl r1, r1, #0xc\n    bl sub_02023F04\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_021F801C(void) {
    /* Original at 0x021F801C */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r0, #0\n    ldrsb r0, [r2, r0]\n    add r4, r1, #0\n    cmp r3, r0\n    beq _021F8042\n    add r0, r3, #0\n    bl ov01_021FA44C\n    add r1, r0, #0\n    add r0, r4, #0\n    bl sub_02023EE0\n    add r0, r4, #0\n    mov r1, #0\n    bl sub_02023F40\n    b _021F8058\n    mov r0, #2\n    ldrsb r0, [r2, r0]\n    cmp r0, #9\n    bne _021F8058\n    add r0, r3, #0\n    bl ov01_021FA44C\n    add r1, r0, #0\n    add r0, r4, #0\n    bl ov01_021F8C64\n    add r0, r5, #0\n    bl ov01_021F9344\n    cmp r0, #0\n    bne _021F806C\n    mov r1, #2\n    add r0, r4, #0\n    lsl r1, r1, #0xc\n    bl sub_02023F04\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_021F8070(void) {
    /* Original at 0x021F8070 */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r0, #0\n    ldrsb r0, [r2, r0]\n    add r4, r1, #0\n    cmp r3, r0\n    beq _021F8096\n    add r0, r3, #0\n    bl ov01_021FA44C\n    add r1, r0, #0\n    add r0, r4, #0\n    bl sub_02023EE0\n    add r0, r4, #0\n    mov r1, #0\n    bl sub_02023F40\n    b _021F80AC\n    mov r0, #2\n    ldrsb r0, [r2, r0]\n    cmp r0, #9\n    bne _021F80AC\n    add r0, r3, #0\n    bl ov01_021FA44C\n    add r1, r0, #0\n    add r0, r4, #0\n    bl ov01_021F8C64\n    add r0, r5, #0\n    bl ov01_021F9344\n    cmp r0, #0\n    bne _021F80C0\n    mov r1, #1\n    add r0, r4, #0\n    lsl r1, r1, #0xe\n    bl sub_02023F04\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_021F80C4(void) {
    /* Original at 0x021F80C4 */
    /* Requires manual decompilation - 72 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0x1c\n    add r6, r0, #0\n    add r4, r2, #0\n    mov r0, #0\n    ldrsb r0, [r4, r0]\n    add r5, r1, #0\n    cmp r3, r0\n    beq _021F80F2\n    add r0, r3, #0\n    bl ov01_021FA44C\n    add r1, r0, #0\n    add r0, r5, #0\n    bl sub_02023EE0\n    add r0, r5, #0\n    mov r1, #0\n    bl sub_02023F40\n    mov r0, #0\n    strb r0, [r4, #1]\n    b _021F8108\n    mov r0, #2\n    ldrsb r0, [r4, r0]\n    cmp r0, #9\n    bne _021F8108\n    add r0, r3, #0\n    bl ov01_021FA44C\n    add r1, r0, #0\n    add r0, r5, #0\n    bl ov01_021F8C64\n    mov r0, #2\n    ldrsb r0, [r4, r0]\n    cmp r0, #6\n    beq _021F8114\n    mov r0, #0\n    strb r0, [r4, #1]\n    add r0, r6, #0\n    bl ov01_021F9344\n    cmp r0, #0\n    bne _021F815A\n    ldr r6, _021F8160 ; =ov01_02208A48\n    add r3, sp, #0\n    ldmia r6!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r6!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r6!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r6]\n    mov r1, #1\n    str r0, [r3]\n    ldrsb r1, [r4, r1]\n    add r0, r5, #0\n    lsl r1, r1, #2\n    ldr r1, [r2, r1]\n    bl sub_02023F04\n    mov r0, #1\n    ldrsb r1, [r4, r0]\n    add r1, r1, #1\n    strb r1, [r4, #1]\n    ldrsb r0, [r4, r0]\n    lsl r1, r0, #2\n    add r0, sp, #0\n    ldr r0, [r0, r1]\n    cmp r0, #0\n    bne _021F815A\n    mov r0, #0\n    strb r0, [r4, #1]\n    add sp, #0x1c\n    pop {r3, r4, r5, r6, pc}\n    nop\n    _021F8160: .word ov01_02208A48"
    );
    #endif
}

void ov01_021F8164(void) {
    /* Original at 0x021F8164 */
    /* Requires manual decompilation - 68 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x10\n    add r6, r0, #0\n    add r4, r2, #0\n    mov r0, #0\n    ldrsb r0, [r4, r0]\n    add r5, r1, #0\n    cmp r3, r0\n    beq _021F8192\n    add r0, r3, #0\n    bl ov01_021FA44C\n    add r1, r0, #0\n    add r0, r5, #0\n    bl sub_02023EE0\n    add r0, r5, #0\n    mov r1, #0\n    bl sub_02023F40\n    mov r0, #0\n    strb r0, [r4, #1]\n    b _021F81A8\n    mov r0, #2\n    ldrsb r0, [r4, r0]\n    cmp r0, #9\n    bne _021F81A8\n    add r0, r3, #0\n    bl ov01_021FA44C\n    add r1, r0, #0\n    add r0, r5, #0\n    bl ov01_021F8C64\n    mov r0, #2\n    ldrsb r0, [r4, r0]\n    cmp r0, #7\n    beq _021F81B4\n    mov r0, #0\n    strb r0, [r4, #1]\n    add r0, r6, #0\n    bl ov01_021F9344\n    cmp r0, #0\n    bne _021F81F2\n    ldr r6, _021F81F8 ; =ov01_022089D8\n    add r3, sp, #0\n    add r2, r3, #0\n    ldmia r6!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r6!, {r0, r1}\n    stmia r3!, {r0, r1}\n    mov r1, #1\n    ldrsb r1, [r4, r1]\n    add r0, r5, #0\n    lsl r1, r1, #2\n    ldr r1, [r2, r1]\n    bl sub_02023F04\n    mov r0, #1\n    ldrsb r1, [r4, r0]\n    add r1, r1, #1\n    strb r1, [r4, #1]\n    ldrsb r0, [r4, r0]\n    lsl r1, r0, #2\n    add r0, sp, #0\n    ldr r0, [r0, r1]\n    cmp r0, #0\n    bne _021F81F2\n    mov r0, #0\n    strb r0, [r4, #1]\n    add sp, #0x10\n    pop {r4, r5, r6, pc}\n    nop\n    _021F81F8: .word ov01_022089D8"
    );
    #endif
}

void ov01_021F81FC(void) {
    /* Original at 0x021F81FC */
    /* Requires manual decompilation - 72 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x20\n    add r6, r0, #0\n    add r4, r2, #0\n    mov r0, #0\n    ldrsb r0, [r4, r0]\n    add r5, r1, #0\n    cmp r3, r0\n    beq _021F822A\n    add r0, r3, #0\n    bl ov01_021FA44C\n    add r1, r0, #0\n    add r0, r5, #0\n    bl sub_02023EE0\n    add r0, r5, #0\n    mov r1, #0\n    bl sub_02023F40\n    mov r0, #0\n    strb r0, [r4, #1]\n    b _021F8240\n    mov r0, #2\n    ldrsb r0, [r4, r0]\n    cmp r0, #9\n    bne _021F8240\n    add r0, r3, #0\n    bl ov01_021FA44C\n    add r1, r0, #0\n    add r0, r5, #0\n    bl ov01_021F8C64\n    mov r0, #2\n    ldrsb r0, [r4, r0]\n    cmp r0, #8\n    beq _021F824C\n    mov r0, #0\n    strb r0, [r4, #1]\n    add r0, r6, #0\n    bl ov01_021F9344\n    cmp r0, #0\n    bne _021F8292\n    ldr r6, _021F8298 ; =ov01_02208AA0\n    add r3, sp, #0\n    add r2, r3, #0\n    ldmia r6!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r6!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r6!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r6!, {r0, r1}\n    stmia r3!, {r0, r1}\n    mov r1, #1\n    ldrsb r1, [r4, r1]\n    add r0, r5, #0\n    lsl r1, r1, #2\n    ldr r1, [r2, r1]\n    bl sub_02023F04\n    mov r0, #1\n    ldrsb r1, [r4, r0]\n    add r1, r1, #1\n    strb r1, [r4, #1]\n    ldrsb r0, [r4, r0]\n    lsl r1, r0, #2\n    add r0, sp, #0\n    ldr r0, [r0, r1]\n    cmp r0, #0\n    bne _021F8292\n    mov r0, #0\n    strb r0, [r4, #1]\n    add sp, #0x20\n    pop {r4, r5, r6, pc}\n    nop\n    _021F8298: .word ov01_02208AA0"
    );
    #endif
}

void ov01_021F829C(void) {
    /* Original at 0x021F829C */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r0, #0\n    ldrsb r0, [r2, r0]\n    add r4, r1, #0\n    cmp r3, r0\n    beq _021F82C2\n    add r0, r3, #0\n    bl ov01_021FA458\n    add r1, r0, #0\n    add r0, r4, #0\n    bl sub_02023EE0\n    add r0, r4, #0\n    mov r1, #0\n    bl sub_02023F40\n    b _021F82DA\n    mov r0, #2\n    ldrsb r0, [r2, r0]\n    cmp r0, #9\n    beq _021F82DA\n    add r0, r3, #0\n    bl ov01_021FA458\n    add r1, r0, #0\n    add r0, r4, #0\n    mov r2, #4\n    bl ov01_021F8C3C\n    add r0, r5, #0\n    bl ov01_021F9344\n    cmp r0, #0\n    bne _021F82EE\n    mov r1, #1\n    add r0, r4, #0\n    lsl r1, r1, #0xc\n    bl sub_02023F04\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_021F82F0(void) {
    /* Original at 0x021F82F0 */
    /* Requires manual decompilation - 58 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r7, r0, #0\n    bl sub_0205F40C\n    add r4, r0, #0\n    ldr r0, [r4, #4]\n    str r0, [sp]\n    add r0, r7, #0\n    bl ov01_021FA2D4\n    cmp r0, #1\n    beq _021F836C\n    ldr r0, [sp]\n    cmp r0, #0\n    beq _021F836C\n    add r0, r7, #0\n    bl MapObject_GetFacingDirection\n    str r0, [sp, #8]\n    add r0, r7, #0\n    bl sub_0205F330\n    str r0, [sp, #4]\n    cmp r0, #0xc\n    blt _021F8328\n    bl GF_AssertFail\n    mov r1, #2\n    ldrsb r2, [r4, r1]\n    cmp r2, #0\n    bne _021F8342\n    ldr r0, [sp, #4]\n    cmp r0, r2\n    beq _021F8342\n    ldrb r0, [r4, #3]\n    lsl r0, r0, #0x1f\n    lsr r0, r0, #0x1f\n    bne _021F8342\n    sub r0, r1, #3\n    strb r0, [r4]\n    ldr r5, [sp, #4]\n    ldr r1, [sp]\n    lsl r6, r5, #2\n    ldr r5, _021F8370 ; =ov01_02208AE4\n    ldr r3, [sp, #8]\n    ldr r5, [r5, r6]\n    add r0, r7, #0\n    add r2, r4, #0\n    blx r5\n    ldr r0, [sp, #8]\n    ldr r1, [sp]\n    strb r0, [r4]\n    ldr r0, [sp, #4]\n    strb r0, [r4, #2]\n    add r0, r7, #0\n    bl ov01_021FA3E8\n    ldr r1, [sp]\n    add r0, r7, #0\n    bl ov01_021F8C88\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    _021F8370: .word ov01_02208AE4"
    );
    #endif
}

void ov01_021F8374(void) {
    /* Original at 0x021F8374 */
    /* Requires manual decompilation - 64 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r6, r3, #0\n    add r4, r2, #0\n    add r2, sp, #0\n    ldr r3, _021F83FC ; =ov01_02208A38\n    add r5, r1, #0\n    add r7, r2, #0\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    lsl r0, r6, #2\n    ldr r1, [r7, r0]\n    mov r0, #0\n    ldrsb r0, [r4, r0]\n    cmp r6, r0\n    beq _021F83B2\n    add r0, r5, #0\n    bl sub_02023EE0\n    add r0, r5, #0\n    mov r1, #0\n    bl sub_02023F40\n    ldrb r1, [r4, #3]\n    mov r0, #1\n    add sp, #0x10\n    bic r1, r0\n    strb r1, [r4, #3]\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r2, #2\n    ldrsb r0, [r4, r2]\n    cmp r0, #0\n    beq _021F83CA\n    ldrb r1, [r4, #3]\n    mov r0, #1\n    add sp, #0x10\n    bic r1, r0\n    mov r0, #1\n    orr r0, r1\n    strb r0, [r4, #3]\n    pop {r3, r4, r5, r6, r7, pc}\n    ldrb r0, [r4, #3]\n    lsl r0, r0, #0x1f\n    lsr r0, r0, #0x1f\n    cmp r0, #1\n    bne _021F83EE\n    add r0, r5, #0\n    bl sub_02023EE0\n    add r0, r5, #0\n    mov r1, #0\n    bl sub_02023F40\n    ldrb r1, [r4, #3]\n    mov r0, #1\n    add sp, #0x10\n    bic r1, r0\n    strb r1, [r4, #3]\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r5, #0\n    lsl r1, r2, #0xb\n    bl sub_02023F04\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021F83FC: .word ov01_02208A38"
    );
    #endif
}

void ov01_021F8400(void) {
    /* Original at 0x021F8400 */
    /* Requires manual decompilation - 52 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r0, #0\n    add r0, r3, #0\n    add r5, r1, #0\n    add r6, r2, #0\n    str r3, [sp]\n    bl ov01_021FA464\n    add r4, r0, #0\n    mov r0, #0\n    ldrsb r1, [r6, r0]\n    ldr r0, [sp]\n    cmp r0, r1\n    bne _021F8424\n    mov r0, #2\n    ldrsb r0, [r6, r0]\n    cmp r0, #0\n    beq _021F8436\n    add r0, r5, #0\n    add r1, r4, #0\n    bl sub_02023EE0\n    add r0, r5, #0\n    mov r1, #0\n    bl sub_02023F40\n    b _021F8466\n    cmp r0, #0xa\n    beq _021F844C\n    add r0, r5, #0\n    add r1, r4, #0\n    bl sub_02023EE0\n    add r0, r5, #0\n    mov r1, #0\n    bl sub_02023F40\n    b _021F8466\n    add r0, r5, #0\n    bl sub_02023EF4\n    cmp r4, r0\n    beq _021F8466\n    add r0, r5, #0\n    add r1, r4, #0\n    bl sub_02023EE0\n    add r0, r5, #0\n    mov r1, #0\n    bl sub_02023F40\n    add r0, r7, #0\n    bl ov01_021F9344\n    cmp r0, #0\n    bne _021F847A\n    mov r1, #2\n    add r0, r5, #0\n    lsl r1, r1, #0xa\n    bl sub_02023F04\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021F847C(void) {
    /* Original at 0x021F847C */
    /* Requires manual decompilation - 50 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r0, #0\n    add r0, r3, #0\n    add r5, r1, #0\n    add r6, r2, #0\n    str r3, [sp]\n    bl ov01_021FA464\n    add r4, r0, #0\n    mov r0, #0\n    ldrsb r1, [r6, r0]\n    ldr r0, [sp]\n    cmp r0, r1\n    beq _021F84AA\n    add r0, r5, #0\n    add r1, r4, #0\n    bl sub_02023EE0\n    add r0, r5, #0\n    mov r1, #0\n    bl sub_02023F40\n    b _021F84DE\n    mov r0, #2\n    ldrsb r0, [r6, r0]\n    cmp r0, #0xb\n    beq _021F84C4\n    add r0, r5, #0\n    add r1, r4, #0\n    bl sub_02023EE0\n    add r0, r5, #0\n    mov r1, #0\n    bl sub_02023F40\n    b _021F84DE\n    add r0, r5, #0\n    bl sub_02023EF4\n    cmp r4, r0\n    beq _021F84DE\n    add r0, r5, #0\n    add r1, r4, #0\n    bl sub_02023EE0\n    add r0, r5, #0\n    mov r1, #0\n    bl sub_02023F40\n    add r0, r7, #0\n    bl ov01_021F9344\n    cmp r0, #0\n    bne _021F84F2\n    mov r1, #1\n    add r0, r5, #0\n    lsl r1, r1, #0xc\n    bl sub_02023F04\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021F84F4(void) {
    /* Original at 0x021F84F4 */
    /* Requires manual decompilation - 50 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r4, r0, #0\n    bl sub_0205F40C\n    ldr r7, [r0, #4]\n    str r0, [sp]\n    cmp r7, #0\n    beq _021F8562\n    add r0, r4, #0\n    bl ov01_021FA2D4\n    cmp r0, #1\n    beq _021F8562\n    add r0, r4, #0\n    bl MapObject_GetFacingDirection\n    str r0, [sp, #4]\n    add r0, r4, #0\n    bl sub_0205F330\n    add r5, r0, #0\n    cmp r5, #4\n    blt _021F8528\n    bl GF_AssertFail\n    lsl r6, r5, #2\n    ldr r5, _021F8568 ; =ov01_022089E8\n    ldr r2, [sp]\n    ldr r3, [sp, #4]\n    ldr r5, [r5, r6]\n    add r0, r4, #0\n    add r1, r7, #0\n    blx r5\n    ldr r2, [sp, #4]\n    add r0, r4, #0\n    add r1, r7, #0\n    bl ov01_021F8708\n    ldr r1, [sp, #4]\n    ldr r0, [sp]\n    strb r1, [r0]\n    add r0, r4, #0\n    bl sub_0205F330\n    ldr r1, [sp]\n    strb r0, [r1, #2]\n    add r0, r4, #0\n    add r1, r7, #0\n    bl ov01_021FA3E8\n    add r0, r4, #0\n    add r1, r7, #0\n    bl ov01_021F8C88\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021F8568: .word ov01_022089E8"
    );
    #endif
}

void ov01_021F856C(void) {
    /* Original at 0x021F856C */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r0, #0\n    ldrsb r0, [r2, r0]\n    add r4, r1, #0\n    cmp r3, r0\n    bne _021F8580\n    mov r0, #2\n    ldrsb r0, [r2, r0]\n    cmp r0, #0\n    beq _021F8596\n    ldr r1, _021F85B8 ; =ov01_022089F8\n    lsl r2, r3, #2\n    ldr r1, [r1, r2]\n    add r0, r4, #0\n    bl sub_02023EE0\n    mov r1, #0xf\n    add r0, r4, #0\n    lsl r1, r1, #0xc\n    bl sub_02023F40\n    add r0, r4, #0\n    bl sub_02023F70\n    mov r1, #1\n    lsl r1, r1, #0xc\n    sub r1, r0, r1\n    bpl _021F85A6\n    mov r1, #0\n    add r0, r4, #0\n    bl sub_02023F40\n    add r0, r4, #0\n    mov r1, #0\n    bl sub_02023F04\n    pop {r4, pc}\n    nop\n    _021F85B8: .word ov01_022089F8"
    );
    #endif
}

void ov01_021F85BC(void) {
    /* Original at 0x021F85BC */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r0, #0\n    ldrsb r0, [r2, r0]\n    add r4, r1, #0\n    cmp r3, r0\n    bne _021F85D0\n    mov r0, #2\n    ldrsb r0, [r2, r0]\n    cmp r0, #1\n    beq _021F85E4\n    ldr r1, _021F85F0 ; =ov01_022089F8\n    lsl r2, r3, #2\n    ldr r1, [r1, r2]\n    add r0, r4, #0\n    bl sub_02023EE0\n    add r0, r4, #0\n    mov r1, #0\n    bl sub_02023F40\n    mov r1, #1\n    add r0, r4, #0\n    lsl r1, r1, #0xc\n    bl sub_02023F04\n    pop {r4, pc}\n    _021F85F0: .word ov01_022089F8"
    );
    #endif
}

void ov01_021F85F4(void) {
    /* Original at 0x021F85F4 */
    /* Requires manual decompilation - 92 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r2, #0\n    mov r0, #0\n    ldrsb r0, [r4, r0]\n    add r5, r1, #0\n    cmp r3, r0\n    bne _021F860A\n    mov r0, #2\n    ldrsb r0, [r4, r0]\n    cmp r0, #2\n    beq _021F8628\n    ldr r1, _021F86B4 ; =ov01_022089F8\n    lsl r2, r3, #2\n    ldr r1, [r1, r2]\n    add r0, r5, #0\n    bl sub_02023EE0\n    mov r1, #0xf\n    add r0, r5, #0\n    lsl r1, r1, #0xc\n    bl sub_02023F40\n    ldrb r1, [r4, #3]\n    mov r0, #0xfe\n    bic r1, r0\n    strb r1, [r4, #3]\n    add r0, r5, #0\n    bl sub_02023F70\n    add r1, r0, #0\n    ldrb r0, [r4, #3]\n    lsl r2, r0, #0x18\n    lsr r2, r2, #0x19\n    beq _021F8642\n    cmp r2, #1\n    beq _021F8664\n    cmp r2, #2\n    beq _021F868A\n    b _021F86A4\n    mov r3, #1\n    lsl r3, r3, #0xc\n    sub r1, r1, r3\n    mov r3, #0xa\n    lsl r3, r3, #0xc\n    cmp r1, r3\n    bgt _021F86A4\n    add r2, r2, #1\n    lsl r2, r2, #0x18\n    lsr r2, r2, #0x18\n    mov r3, #0xfe\n    lsl r2, r2, #0x19\n    bic r0, r3\n    lsr r2, r2, #0x18\n    orr r0, r2\n    strb r0, [r4, #3]\n    b _021F86A4\n    mov r3, #1\n    lsl r3, r3, #0xc\n    add r1, r1, r3\n    mov r3, #0xf\n    lsl r3, r3, #0xc\n    cmp r1, r3\n    blt _021F86A4\n    add r2, r2, #1\n    lsl r2, r2, #0x18\n    lsr r2, r2, #0x18\n    mov r3, #0xfe\n    lsl r2, r2, #0x19\n    bic r0, r3\n    lsr r2, r2, #0x18\n    orr r0, r2\n    strb r0, [r4, #3]\n    mov r0, #0\n    strb r0, [r4, #1]\n    b _021F86A4\n    mov r0, #1\n    ldrsb r2, [r4, r0]\n    add r2, r2, #1\n    strb r2, [r4, #1]\n    ldrsb r0, [r4, r0]\n    cmp r0, #0x1e\n    blt _021F86A4\n    mov r0, #0\n    strb r0, [r4, #1]\n    ldrb r2, [r4, #3]\n    mov r0, #0xfe\n    bic r2, r0\n    strb r2, [r4, #3]\n    add r0, r5, #0\n    bl sub_02023F40\n    add r0, r5, #0\n    mov r1, #0\n    bl sub_02023F04\n    pop {r3, r4, r5, pc}\n    _021F86B4: .word ov01_022089F8"
    );
    #endif
}

void ov01_021F86B8(void) {
    /* Original at 0x021F86B8 */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r0, #0\n    ldrsb r0, [r2, r0]\n    add r4, r1, #0\n    cmp r3, r0\n    bne _021F86CC\n    mov r0, #2\n    ldrsb r0, [r2, r0]\n    cmp r0, #3\n    beq _021F86E2\n    ldr r1, _021F8704 ; =ov01_022089F8\n    lsl r2, r3, #2\n    ldr r1, [r1, r2]\n    add r0, r4, #0\n    bl sub_02023EE0\n    mov r1, #0xf\n    add r0, r4, #0\n    lsl r1, r1, #0xc\n    bl sub_02023F40\n    add r0, r4, #0\n    bl sub_02023F70\n    mov r1, #1\n    lsl r1, r1, #0xc\n    sub r1, r0, r1\n    bpl _021F86F2\n    mov r1, #0\n    add r0, r4, #0\n    bl sub_02023F40\n    add r0, r4, #0\n    mov r1, #0\n    bl sub_02023F04\n    pop {r4, pc}\n    nop\n    _021F8704: .word ov01_022089F8"
    );
    #endif
}

void ov01_021F8708(void) {
    /* Original at 0x021F8708 */
    /* Requires manual decompilation - 59 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    add r4, r2, #0\n    add r2, sp, #0\n    mov r0, #0\n    str r0, [r2]\n    str r0, [r2, #4]\n    str r0, [r2, #8]\n    add r0, r1, #0\n    bl sub_02023F30\n    asr r1, r0, #0xb\n    lsr r1, r1, #0x14\n    add r1, r0, r1\n    asr r0, r1, #0xc\n    cmp r4, #3\n    bhi _021F876E\n    add r1, r4, r4\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _021F8738: ; jump table\n    cmp r0, #0x18\n    blt _021F876E\n    mov r0, #6\n    lsl r0, r0, #0xc\n    str r0, [sp, #8]\n    b _021F876E\n    cmp r0, #0x28\n    bge _021F8758\n    mov r0, #1\n    lsl r0, r0, #0xc\n    str r0, [sp]\n    b _021F876E\n    ldr r0, _021F8784 ; =0xFFFFB000\n    str r0, [sp]\n    b _021F876E\n    cmp r0, #0x38\n    bge _021F8768\n    ldr r0, _021F8788 ; =0xFFFFF000\n    str r0, [sp]\n    b _021F876E\n    mov r0, #5\n    lsl r0, r0, #0xc\n    str r0, [sp]\n    mov r0, #2\n    ldr r1, [sp, #8]\n    lsl r0, r0, #0xa\n    add r0, r1, r0\n    str r0, [sp, #8]\n    add r0, r5, #0\n    add r1, sp, #0\n    bl MapObject_SetFacingVector\n    add sp, #0xc\n    pop {r4, r5, pc}\n    _021F8784: .word 0xFFFFB000\n    _021F8788: .word 0xFFFFF000"
    );
    #endif
}

void ov01_021F878C(void) {
    /* Original at 0x021F878C */
    /* Requires manual decompilation - 50 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r4, r0, #0\n    bl sub_0205F40C\n    ldr r7, [r0, #4]\n    str r0, [sp]\n    cmp r7, #0\n    beq _021F87FA\n    add r0, r4, #0\n    bl ov01_021FA2D4\n    cmp r0, #1\n    beq _021F87FA\n    add r0, r4, #0\n    bl MapObject_GetFacingDirection\n    str r0, [sp, #4]\n    add r0, r4, #0\n    bl sub_0205F330\n    add r5, r0, #0\n    cmp r5, #2\n    blt _021F87C0\n    bl GF_AssertFail\n    lsl r6, r5, #2\n    ldr r5, _021F8800 ; =ov01_022089CC + 4\n    ldr r2, [sp]\n    ldr r3, [sp, #4]\n    ldr r5, [r5, r6]\n    add r0, r4, #0\n    add r1, r7, #0\n    blx r5\n    ldr r2, [sp, #4]\n    add r0, r4, #0\n    add r1, r7, #0\n    bl ov01_021F8874\n    ldr r1, [sp, #4]\n    ldr r0, [sp]\n    strb r1, [r0]\n    add r0, r4, #0\n    bl sub_0205F330\n    ldr r1, [sp]\n    strb r0, [r1, #2]\n    add r0, r4, #0\n    add r1, r7, #0\n    bl ov01_021FA3E8\n    add r0, r4, #0\n    add r1, r7, #0\n    bl ov01_021F8C88\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021F8800: .word ov01_022089CC + 4"
    );
    #endif
}

void ov01_021F8804(void) {
    /* Original at 0x021F8804 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r0, #0\n    ldrsb r0, [r2, r0]\n    add r4, r1, #0\n    cmp r3, r0\n    bne _021F8818\n    mov r0, #2\n    ldrsb r0, [r2, r0]\n    cmp r0, #0\n    beq _021F882C\n    ldr r1, _021F8838 ; =ov01_02208A18\n    lsl r2, r3, #2\n    ldr r1, [r1, r2]\n    add r0, r4, #0\n    bl sub_02023EE0\n    add r0, r4, #0\n    mov r1, #0\n    bl sub_02023F40\n    mov r1, #1\n    add r0, r4, #0\n    lsl r1, r1, #0xc\n    bl sub_02023F04\n    pop {r4, pc}\n    _021F8838: .word ov01_02208A18"
    );
    #endif
}

void ov01_021F883C(void) {
    /* Original at 0x021F883C */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r0, #0\n    ldrsb r0, [r2, r0]\n    add r4, r1, #0\n    cmp r3, r0\n    bne _021F8850\n    mov r0, #2\n    ldrsb r0, [r2, r0]\n    cmp r0, #1\n    beq _021F8864\n    ldr r1, _021F8870 ; =ov01_02208A18\n    lsl r2, r3, #2\n    ldr r1, [r1, r2]\n    add r0, r4, #0\n    bl sub_02023EE0\n    add r0, r4, #0\n    mov r1, #0\n    bl sub_02023F40\n    mov r1, #1\n    add r0, r4, #0\n    lsl r1, r1, #0xc\n    bl sub_02023F04\n    pop {r4, pc}\n    _021F8870: .word ov01_02208A18"
    );
    #endif
}

void ov01_021F8874(void) {
    /* Original at 0x021F8874 */
    /* Requires manual decompilation - 55 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    add r4, r2, #0\n    add r2, sp, #0\n    mov r0, #0\n    str r0, [r2]\n    str r0, [r2, #4]\n    str r0, [r2, #8]\n    add r0, r1, #0\n    bl sub_02023F30\n    asr r1, r0, #0xb\n    lsr r1, r1, #0x14\n    add r1, r0, r1\n    asr r0, r1, #0xc\n    cmp r4, #3\n    bhi _021F88DA\n    add r1, r4, r4\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _021F88A4: ; jump table\n    cmp r0, #0x18\n    blt _021F88DA\n    mov r0, #6\n    lsl r0, r0, #0xc\n    str r0, [sp, #8]\n    b _021F88DA\n    cmp r0, #0x28\n    bge _021F88C4\n    mov r0, #1\n    lsl r0, r0, #0xc\n    str r0, [sp]\n    b _021F88DA\n    ldr r0, _021F88E8 ; =0xFFFFB000\n    str r0, [sp]\n    b _021F88DA\n    cmp r0, #0x38\n    bge _021F88D4\n    ldr r0, _021F88EC ; =0xFFFFF000\n    str r0, [sp]\n    b _021F88DA\n    mov r0, #5\n    lsl r0, r0, #0xc\n    str r0, [sp]\n    add r0, r5, #0\n    add r1, sp, #0\n    bl MapObject_SetFacingVector\n    add sp, #0xc\n    pop {r4, r5, pc}\n    nop\n    _021F88E8: .word 0xFFFFB000\n    _021F88EC: .word 0xFFFFF000"
    );
    #endif
}

void ov01_021F88F0(void) {
    /* Original at 0x021F88F0 */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    bl sub_0205F40C\n    add r6, r0, #0\n    add r0, r5, #0\n    ldr r4, [r6, #4]\n    bl ov01_021FA2D4\n    cmp r0, #1\n    beq _021F894A\n    cmp r4, #0\n    beq _021F894A\n    add r0, r5, #0\n    bl MapObject_GetFacingDirection\n    add r7, r0, #0\n    strb r7, [r6]\n    add r0, r5, #0\n    bl sub_0205F330\n    strb r0, [r6, #2]\n    add r0, r7, #0\n    bl ov01_021FA44C\n    add r1, r0, #0\n    add r0, r4, #0\n    bl sub_02023EE0\n    add r0, r4, #0\n    mov r1, #0\n    bl sub_02023F40\n    add r0, r4, #0\n    mov r1, #0\n    bl sub_02023F04\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov01_021FA3E8\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov01_021F8C88\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021F894C(void) {
    /* Original at 0x021F894C */
    /* Requires manual decompilation - 43 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    bl sub_0205F40C\n    add r6, r0, #0\n    add r0, r5, #0\n    ldr r4, [r6, #4]\n    bl ov01_021FA2D4\n    cmp r0, #1\n    beq _021F89B6\n    cmp r4, #0\n    beq _021F89B6\n    add r0, r5, #0\n    bl MapObject_GetFacingDirection\n    strb r0, [r6]\n    add r0, r5, #0\n    bl sub_0205F330\n    strb r0, [r6, #2]\n    add r0, r4, #0\n    bl sub_02023EF4\n    cmp r0, #0\n    beq _021F8990\n    add r0, r4, #0\n    mov r1, #0\n    bl sub_02023EE0\n    add r0, r4, #0\n    mov r1, #0\n    bl sub_02023F40\n    mov r1, #1\n    add r0, r4, #0\n    lsl r1, r1, #0xc\n    bl sub_02023F04\n    add r0, r5, #0\n    bl MapObject_GetFacingVector\n    mov r1, #2\n    lsl r1, r1, #0xa\n    str r1, [r0, #8]\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov01_021FA3E8\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov01_021F8C88\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov01_021F89B8(void) {
    /* Original at 0x021F89B8 */
    /* Requires manual decompilation - 58 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    bl sub_0205F40C\n    add r6, r0, #0\n    add r0, r5, #0\n    ldr r4, [r6, #4]\n    bl ov01_021FA2D4\n    cmp r0, #1\n    beq _021F8A48\n    cmp r4, #0\n    beq _021F8A48\n    add r0, r5, #0\n    bl MapObject_GetFacingDirection\n    add r7, r0, #0\n    add r0, r5, #0\n    bl sub_0205F330\n    cmp r0, #0\n    bne _021F8A0A\n    add r0, r4, #0\n    bl sub_02023EF4\n    cmp r0, #1\n    beq _021F89FE\n    add r0, r4, #0\n    mov r1, #1\n    bl sub_02023EE0\n    add r0, r4, #0\n    mov r1, #0\n    bl sub_02023F40\n    mov r1, #1\n    add r0, r4, #0\n    lsl r1, r1, #0xc\n    bl sub_02023F04\n    b _021F8A2E\n    add r0, r4, #0\n    bl sub_02023EF4\n    cmp r0, #0\n    beq _021F8A24\n    add r0, r4, #0\n    mov r1, #0\n    bl sub_02023EE0\n    add r0, r4, #0\n    mov r1, #0\n    bl sub_02023F40\n    mov r1, #1\n    add r0, r4, #0\n    lsl r1, r1, #0xc\n    bl sub_02023F04\n    strb r7, [r6]\n    add r0, r5, #0\n    bl sub_0205F330\n    strb r0, [r6, #2]\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov01_021FA3E8\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov01_021F8C88\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021F8A4C(void) {
    /* Original at 0x021F8A4C */
    /* Requires manual decompilation - 40 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    bl sub_0205F40C\n    add r4, r0, #0\n    add r0, r6, #0\n    ldr r5, [r4, #4]\n    bl ov01_021FA2D4\n    cmp r0, #1\n    beq _021F8AAE\n    cmp r5, #0\n    beq _021F8AAE\n    add r0, r6, #0\n    bl MapObject_GetFacingDirection\n    mov r1, #0\n    ldrsb r1, [r4, r1]\n    add r7, r0, #0\n    cmp r7, r1\n    beq _021F8A8A\n    bl ov01_021FA44C\n    add r1, r0, #0\n    add r0, r5, #0\n    bl sub_02023EE0\n    add r0, r5, #0\n    mov r1, #0\n    bl sub_02023F40\n    mov r1, #1\n    add r0, r5, #0\n    lsl r1, r1, #0xc\n    bl sub_02023F04\n    add r0, r6, #0\n    add r1, r5, #0\n    bl ov01_021FA3E8\n    add r0, r6, #0\n    add r1, r5, #0\n    bl ov01_021F8C88\n    add r0, r6, #0\n    strb r7, [r4]\n    bl sub_0205F330\n    strb r0, [r4, #2]\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021F8AB0(void) {
    /* Original at 0x021F8AB0 */
    /* Requires manual decompilation - 52 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    bl sub_0205F40C\n    add r6, r0, #0\n    add r0, r5, #0\n    ldr r4, [r6, #4]\n    bl ov01_021FA2D4\n    cmp r0, #1\n    beq _021F8B2C\n    cmp r4, #0\n    beq _021F8B2C\n    add r0, r5, #0\n    bl MapObject_GetFacingDirection\n    str r0, [sp]\n    add r0, r5, #0\n    bl sub_0205F330\n    add r7, r0, #0\n    mov r0, #2\n    ldrsb r0, [r6, r0]\n    cmp r7, r0\n    beq _021F8B00\n    cmp r7, #0\n    bne _021F8AF0\n    add r0, r4, #0\n    mov r1, #0\n    bl sub_02023EE0\n    b _021F8AF8\n    add r0, r4, #0\n    mov r1, #1\n    bl sub_02023EE0\n    add r0, r4, #0\n    mov r1, #0\n    bl sub_02023F40\n    mov r1, #1\n    add r0, r4, #0\n    lsl r1, r1, #0xc\n    bl sub_02023F04\n    add r0, r5, #0\n    bl MapObject_GetFacingVector\n    mov r1, #2\n    lsl r1, r1, #0xa\n    str r1, [r0, #8]\n    ldr r0, [sp]\n    add r1, r4, #0\n    strb r0, [r6]\n    add r0, r5, #0\n    strb r7, [r6, #2]\n    bl ov01_021FA3E8\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov01_021F8C88\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021F8B30(void) {
    /* Original at 0x021F8B30 */
    /* Requires manual decompilation - 50 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r4, r0, #0\n    bl sub_0205F40C\n    ldr r7, [r0, #4]\n    str r0, [sp]\n    cmp r7, #0\n    beq _021F8B9E\n    add r0, r4, #0\n    bl ov01_021FA2D4\n    cmp r0, #1\n    beq _021F8B9E\n    add r0, r4, #0\n    bl MapObject_GetFacingDirection\n    str r0, [sp, #4]\n    add r0, r4, #0\n    bl sub_0205F330\n    add r5, r0, #0\n    cmp r5, #1\n    blt _021F8B64\n    bl GF_AssertFail\n    lsl r6, r5, #2\n    ldr r5, _021F8BA4 ; =ov01_022089CC\n    ldr r2, [sp]\n    ldr r3, [sp, #4]\n    ldr r5, [r5, r6]\n    add r0, r4, #0\n    add r1, r7, #0\n    blx r5\n    ldr r2, [sp, #4]\n    add r0, r4, #0\n    add r1, r7, #0\n    bl ov01_021F8BE0\n    ldr r1, [sp, #4]\n    ldr r0, [sp]\n    strb r1, [r0]\n    add r0, r4, #0\n    bl sub_0205F330\n    ldr r1, [sp]\n    strb r0, [r1, #2]\n    add r0, r4, #0\n    add r1, r7, #0\n    bl ov01_021FA3E8\n    add r0, r4, #0\n    add r1, r7, #0\n    bl ov01_021F8C88\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021F8BA4: .word ov01_022089CC"
    );
    #endif
}

void ov01_021F8BA8(void) {
    /* Original at 0x021F8BA8 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r0, #0\n    ldrsb r0, [r2, r0]\n    add r4, r1, #0\n    cmp r3, r0\n    bne _021F8BBC\n    mov r0, #2\n    ldrsb r0, [r2, r0]\n    cmp r0, #0\n    beq _021F8BD0\n    ldr r1, _021F8BDC ; =ov01_02208A28\n    lsl r2, r3, #2\n    ldr r1, [r1, r2]\n    add r0, r4, #0\n    bl sub_02023EE0\n    add r0, r4, #0\n    mov r1, #0\n    bl sub_02023F40\n    mov r1, #1\n    add r0, r4, #0\n    lsl r1, r1, #0xc\n    bl sub_02023F04\n    pop {r4, pc}\n    _021F8BDC: .word ov01_02208A28"
    );
    #endif
}

void ov01_021F8BE0(void) {
    MapObject_SetFacingVector(0, 2);
}

void ov01_021F8C00(void) {
    /* Original at 0x021F8C00 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r6, r1, #0\n    bl sub_02023F70\n    asr r1, r0, #0xb\n    lsr r1, r1, #0x14\n    add r1, r0, r1\n    asr r4, r1, #0xc\n    add r0, r4, #0\n    add r1, r6, #0\n    bl _s32_div_f\n    sub r1, r4, r1\n    add r0, r5, #0\n    lsl r1, r1, #0xc\n    bl sub_02023F40\n    add r0, r5, #0\n    mov r1, #0\n    bl sub_02023F04\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov01_021F8C30(void) {
    ov01_021F8C00();
}

void ov01_021F8C3C(void) {
    /* Original at 0x021F8C3C */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    add r1, r2, #0\n    bl ov01_021F8C00\n    add r0, r5, #0\n    bl sub_02023F70\n    add r6, r0, #0\n    add r0, r5, #0\n    add r1, r4, #0\n    bl sub_02023EE0\n    add r0, r5, #0\n    add r1, r6, #0\n    bl sub_02023F40\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov01_021F8C64(void) {
    /* Original at 0x021F8C64 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl ov01_021F8C30\n    add r0, r5, #0\n    bl sub_02023F70\n    add r6, r0, #0\n    add r0, r5, #0\n    add r1, r4, #0\n    bl sub_02023EE0\n    add r0, r5, #0\n    add r1, r6, #0\n    bl sub_02023F40\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov01_021F8C88(void) {
    /* Original at 0x021F8C88 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    mov r4, #1\n    add r6, r1, #0\n    lsl r1, r4, #9\n    add r5, r0, #0\n    bl MapObject_TestFlagsBits\n    cmp r0, #1\n    bne _021F8C9C\n    mov r4, #0\n    mov r1, #1\n    add r0, r5, #0\n    lsl r1, r1, #0xc\n    bl MapObject_TestFlagsBits\n    cmp r0, #1\n    bne _021F8CBA\n    mov r1, #2\n    add r0, r5, #0\n    lsl r1, r1, #0xc\n    bl MapObject_TestFlagsBits\n    cmp r0, #0\n    bne _021F8CBA\n    mov r4, #0\n    lsl r1, r4, #0x18\n    add r0, r6, #0\n    lsr r1, r1, #0x18\n    bl sub_02023EA4\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov01_021F8CC8(void) {
    /* Original at 0x021F8CC8 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r3, _021F8CF4 ; =ov01_022073D8\n    add r2, r1, #0\n    ldr r4, [r3]\n    ldr r1, _021F8CF8 ; =0x0000FFFF\n    cmp r4, r1\n    beq _021F8CEE\n    cmp r4, r0\n    bne _021F8CE6\n    add r3, r3, #4\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    str r0, [r2]\n    pop {r4, pc}\n    add r3, #0x10\n    ldr r4, [r3]\n    cmp r4, r1\n    bne _021F8CD6\n    bl GF_AssertFail\n    pop {r4, pc}\n    _021F8CF4: .word ov01_022073D8\n    _021F8CF8: .word 0x0000FFFF"
    );
    #endif
}

void ov01_021F8CFC(void) {
    /* Original at 0x021F8CFC */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    mov r1, #4\n    bl sub_0205F3E8\n    add r4, r0, #0\n    add r0, r5, #0\n    bl MapObject_GetSpriteID\n    add r1, sp, #0\n    bl ov01_021F8CC8\n    add r0, r5, #0\n    add r1, sp, #0\n    bl ov01_021FD2EC\n    str r0, [r4]\n    add sp, #0xc\n    pop {r4, r5, pc}"
    );
    #endif
}

void ov01_021F8D24(void) {
    /* Original at 0x021F8D24 */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void ov01_021F8D28(void) {
    /* Original at 0x021F8D28 */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    bl sub_0205F40C\n    add r4, r0, #0\n    ldr r0, [r4]\n    cmp r0, #0\n    beq _021F8D3E\n    bl ov01_021F1640\n    mov r0, #0\n    str r0, [r4]\n    pop {r4, pc}"
    );
    #endif
}

void ov01_021F8D40(void) {
    /* Original at 0x021F8D40 */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    bl sub_0205F40C\n    add r4, r0, #0\n    ldr r0, [r4]\n    cmp r0, #0\n    beq _021F8D56\n    bl ov01_021F1640\n    mov r0, #0\n    str r0, [r4]\n    pop {r4, pc}"
    );
    #endif
}

void ov01_021F8D58(void) {
    /* Original at 0x021F8D58 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    bl sub_0205F40C\n    add r4, r0, #0\n    add r0, r5, #0\n    bl MapObject_GetSpriteID\n    add r1, sp, #0\n    bl ov01_021F8CC8\n    add r0, r5, #0\n    add r1, sp, #0\n    bl ov01_021FD2EC\n    str r0, [r4]\n    add sp, #0xc\n    pop {r4, r5, pc}"
    );
    #endif
}
