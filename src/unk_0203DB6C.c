/* Decompiled from asm/unk_0203DB6C.s */
#include "global.h"

void sub_0203DB6C(void) {
    /* Original at 0x0203DB6C */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void sub_0203DB70(void) {
    /* Original at 0x0203DB70 */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

u8 sub_0203DB74(void) {
    return 1;
}

void _GetCoordsOfFacingTile(void) {
    /* Original at 0x0203DB78 */
    /* Requires manual decompilation - 39 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    ldr r0, [r6, #0x40]\n    add r4, r1, #0\n    add r5, r2, #0\n    bl PlayerAvatar_GetFacingDirection\n    add r7, r0, #0\n    ldr r0, [r6, #0x40]\n    bl PlayerAvatar_GetXCoord\n    str r0, [r4]\n    ldr r0, [r6, #0x40]\n    bl PlayerAvatar_GetZCoord\n    str r0, [r5]\n    cmp r7, #3\n    bhi _0203DBCE\n    add r0, r7, r7\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0203DBA8: ; jump table\n    ldr r0, [r5]\n    sub r0, r0, #1\n    str r0, [r5]\n    b _0203DBCE\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    b _0203DBCE\n    ldr r0, [r4]\n    sub r0, r0, #1\n    str r0, [r4]\n    b _0203DBCE\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    add r0, r7, #0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_0203DBD4(void) {
    /* Original at 0x0203DBD4 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r1, #0\n    bl PlayerAvatar_GetMapObject\n    bl MapObject_GetPositionVectorYCoordUInt\n    add r4, r0, #0\n    add r0, r5, #0\n    bl MapObject_GetPositionVectorYCoordUInt\n    cmp r4, r0\n    bne _0203DBF0\n    mov r0, #1\n    b _0203DBF2\n    mov r0, #0\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void FieldSystem_GetFacingObject(void) {
    /* Original at 0x0203DBF8 */
    /* Requires manual decompilation - 47 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #8\n    add r6, r1, #0\n    add r1, sp, #4\n    add r2, sp, #0\n    add r5, r0, #0\n    bl _GetCoordsOfFacingTile\n    add r4, r0, #0\n    ldr r1, [sp, #4]\n    ldr r2, [sp]\n    add r0, r5, #0\n    bl GetMetatileBehavior\n    bl sub_0205B700\n    cmp r0, #1\n    bne _0203DC52\n    cmp r4, #3\n    bhi _0203DC52\n    add r0, r4, r4\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0203DC2C: ; jump table\n    ldr r0, [sp]\n    sub r0, r0, #1\n    str r0, [sp]\n    b _0203DC52\n    ldr r0, [sp]\n    add r0, r0, #1\n    str r0, [sp]\n    b _0203DC52\n    ldr r0, [sp, #4]\n    sub r0, r0, #1\n    str r0, [sp, #4]\n    b _0203DC52\n    ldr r0, [sp, #4]\n    add r0, r0, #1\n    str r0, [sp, #4]\n    ldr r0, [r5, #0x3c]\n    ldr r1, [sp, #4]\n    ldr r2, [sp]\n    mov r3, #0\n    bl MapObjectManager_GetFirstObjectWithXAndZ\n    str r0, [r6]\n    add sp, #8\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void sub_0203DC64(void) {
    /* Original at 0x0203DC64 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    bl FieldSystem_GetFacingObject\n    ldr r0, [r4]\n    cmp r0, #0\n    beq _0203DC8C\n    bl MapObject_CheckFlag19Disabled\n    cmp r0, #1\n    bne _0203DC8C\n    ldr r0, [r5, #0x40]\n    ldr r1, [r4]\n    bl sub_0203DBD4\n    cmp r0, #1\n    bne _0203DC8C\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void GetInteractedBackgroundEventScript(void) {
    /* Original at 0x0203DC90 */
    /* Requires manual decompilation - 60 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    str r1, [sp]\n    str r2, [sp, #4]\n    add r1, sp, #0xc\n    add r2, sp, #8\n    add r6, r0, #0\n    bl _GetCoordsOfFacingTile\n    ldr r0, [sp, #4]\n    mov r7, #0\n    cmp r0, #0\n    ble _0203DD04\n    ldr r4, [sp]\n    add r5, r4, #0\n    ldr r1, [sp, #0xc]\n    ldr r0, [r4, #4]\n    cmp r1, r0\n    bne _0203DCF8\n    ldr r1, [sp, #8]\n    ldr r0, [r4, #8]\n    cmp r1, r0\n    bne _0203DCF8\n    ldrh r0, [r4, #2]\n    cmp r0, #2\n    bne _0203DCDE\n    add r0, r6, #0\n    add r1, r5, #0\n    bl BgEventIsUncollectedHiddenItem\n    cmp r0, #1\n    bne _0203DCF8\n    mov r0, #0x14\n    add r1, r7, #0\n    mul r1, r0\n    ldr r0, [sp]\n    add sp, #0x10\n    ldrh r0, [r0, r1]\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r6, #0\n    add r1, r5, #0\n    bl BgEventDirectionIsCompatibleWithPlayerFacing\n    cmp r0, #1\n    bne _0203DCF8\n    mov r0, #0x14\n    add r1, r7, #0\n    mul r1, r0\n    ldr r0, [sp]\n    add sp, #0x10\n    ldrh r0, [r0, r1]\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [sp, #4]\n    add r7, r7, #1\n    add r4, #0x14\n    add r5, #0x14\n    cmp r7, r0\n    blt _0203DCAE\n    ldr r0, _0203DD0C ; =0x0000FFFF\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0203DD0C: .word 0x0000FFFF"
    );
    #endif
}

void BgEventIsUncollectedHiddenItem(void) {
    /* Original at 0x0203DD10 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldrh r0, [r1, #2]\n    cmp r0, #2\n    beq _0203DD1E\n    mov r0, #0\n    pop {r4, pc}\n    ldrh r0, [r1]\n    bl HiddenItemScriptNoToFlagId\n    add r1, r0, #0\n    add r0, r4, #0\n    bl FieldSystem_FlagCheck\n    cmp r0, #1\n    beq _0203DD34\n    mov r0, #1\n    b _0203DD36\n    mov r0, #0\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    pop {r4, pc}"
    );
    #endif
}

void BgEventDirectionIsCompatibleWithPlayerFacing(void) {
    /* Original at 0x0203DD3C */
    /* Requires manual decompilation - 48 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    ldrh r1, [r4, #0x10]\n    cmp r1, #4\n    bne _0203DD4A\n    mov r0, #1\n    pop {r4, pc}\n    ldr r0, [r0, #0x40]\n    bl PlayerAvatar_GetFacingDirection\n    cmp r0, #3\n    bhi _0203DDA0\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0203DD60: ; jump table\n    ldrh r0, [r4, #0x10]\n    cmp r0, #0\n    beq _0203DD72\n    cmp r0, #6\n    bne _0203DDA0\n    mov r0, #1\n    pop {r4, pc}\n    ldrh r0, [r4, #0x10]\n    cmp r0, #3\n    beq _0203DD80\n    cmp r0, #6\n    bne _0203DDA0\n    mov r0, #1\n    pop {r4, pc}\n    ldrh r0, [r4, #0x10]\n    cmp r0, #2\n    beq _0203DD8E\n    cmp r0, #5\n    bne _0203DDA0\n    mov r0, #1\n    pop {r4, pc}\n    ldrh r0, [r4, #0x10]\n    cmp r0, #1\n    beq _0203DD9C\n    cmp r0, #5\n    bne _0203DDA0\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}"
    );
    #endif
}

void sub_0203DDA4(void) {
    /* Original at 0x0203DDA4 */
    /* Requires manual decompilation - 45 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #8\n    add r5, r0, #0\n    ldr r0, [r5, #0x40]\n    add r6, r1, #0\n    add r4, r2, #0\n    bl PlayerAvatar_GetFacingDirection\n    cmp r0, #0\n    beq _0203DDBE\n    add sp, #8\n    ldr r0, _0203DE00 ; =0x0000FFFF\n    pop {r4, r5, r6, pc}\n    add r0, r5, #0\n    add r1, sp, #4\n    add r2, sp, #0\n    bl _GetCoordsOfFacingTile\n    mov r0, #0\n    cmp r4, #0\n    ble _0203DDF8\n    ldr r2, [sp, #4]\n    ldr r3, [sp]\n    add r1, r6, #0\n    ldr r5, [r1, #4]\n    cmp r2, r5\n    bne _0203DDF0\n    ldr r5, [r1, #8]\n    cmp r3, r5\n    bne _0203DDF0\n    ldrh r5, [r1, #2]\n    cmp r5, #1\n    bne _0203DDF0\n    mov r1, #0x14\n    mul r1, r0\n    add sp, #8\n    ldrh r0, [r6, r1]\n    pop {r4, r5, r6, pc}\n    add r0, r0, #1\n    add r1, #0x14\n    cmp r0, r4\n    blt _0203DDD4\n    ldr r0, _0203DE00 ; =0x0000FFFF\n    add sp, #8\n    pop {r4, r5, r6, pc}\n    nop\n    _0203DE00: .word 0x0000FFFF"
    );
    #endif
}

void sub_0203DE04(void) {
    /* Original at 0x0203DE04 */
    /* Requires manual decompilation - 52 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    str r0, [sp]\n    ldr r0, [r0, #0x40]\n    str r1, [sp, #4]\n    str r2, [sp, #8]\n    bl PlayerAvatar_GetXCoord\n    add r6, r0, #0\n    ldr r0, [sp]\n    ldr r0, [r0, #0x40]\n    bl PlayerAvatar_GetZCoord\n    add r4, r0, #0\n    ldr r0, [sp, #8]\n    mov r7, #0\n    cmp r0, #0\n    ble _0203DE68\n    ldr r5, [sp, #4]\n    ldrh r1, [r5, #2]\n    cmp r6, r1\n    blt _0203DE5E\n    ldrh r0, [r5, #6]\n    add r0, r1, r0\n    cmp r6, r0\n    bge _0203DE5E\n    ldrh r1, [r5, #4]\n    cmp r4, r1\n    blt _0203DE5E\n    ldrh r0, [r5, #8]\n    add r0, r1, r0\n    cmp r4, r0\n    bge _0203DE5E\n    ldrh r1, [r5, #0xe]\n    ldr r0, [sp]\n    bl FieldSystem_VarGet\n    ldrh r1, [r5, #0xc]\n    cmp r1, r0\n    bne _0203DE5E\n    ldr r0, [sp, #4]\n    lsl r1, r7, #4\n    add sp, #0xc\n    ldrh r0, [r0, r1]\n    pop {r4, r5, r6, r7, pc}\n    ldr r0, [sp, #8]\n    add r7, r7, #1\n    add r5, #0x10\n    cmp r7, r0\n    blt _0203DE2A\n    ldr r0, _0203DE70 ; =0x0000FFFF\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _0203DE70: .word 0x0000FFFF"
    );
    #endif
}
