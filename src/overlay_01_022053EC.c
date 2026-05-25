/* Decompiled from asm/overlay_01_022053EC.s */
#include "global.h"

void ScrCmd_808(void) {
    /* Original at 0x022053EC */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    bl ScriptReadHalfword\n    add r1, r0, #0\n    add r0, r5, #0\n    add r0, #0x80\n    ldr r0, [r0]\n    bl FieldSystem_VarGet\n    ldr r6, _02205420 ; =FS_OVERLAY_ID(OVY_25)\n    add r4, r0, #0\n    add r0, r6, #0\n    mov r1, #2\n    bl HandleLoadOverlay\n    add r5, #0x80\n    ldr r0, [r5]\n    add r1, r4, #0\n    bl TrainerHouse_StartBattle\n    add r0, r6, #0\n    bl UnloadOverlayByID\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    _02205420: .word FS_OVERLAY_ID(OVY_25)"
    );
    #endif
}

void ov01_02205424(void) {
    /* Original at 0x02205424 */
    /* Requires manual decompilation - 4 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #1\n    add r0, #0xf9\n    strb r1, [r0]\n    bx lr"
    );
    #endif
}

void ov01_0220542C(void) {
    /* Original at 0x0220542C */
    /* Requires manual decompilation - 85 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x40\n    ldr r6, _022054D0 ; =ov01_02209720\n    add r5, sp, #0x30\n    add r4, r0, #0\n    add r3, r1, #0\n    ldmia r6!, {r0, r1}\n    add r2, r5, #0\n    stmia r5!, {r0, r1}\n    ldmia r6!, {r0, r1}\n    stmia r5!, {r0, r1}\n    ldr r6, _022054D4 ; =ov01_02209730\n    add r5, sp, #0x20\n    ldmia r6!, {r0, r1}\n    stmia r5!, {r0, r1}\n    ldmia r6!, {r0, r1}\n    stmia r5!, {r0, r1}\n    ldr r6, _022054D8 ; =ov01_02209740\n    add r5, sp, #0x10\n    ldmia r6!, {r0, r1}\n    stmia r5!, {r0, r1}\n    ldmia r6!, {r0, r1}\n    stmia r5!, {r0, r1}\n    ldr r6, _022054DC ; =ov01_02209710\n    add r5, sp, #0\n    ldmia r6!, {r0, r1}\n    stmia r5!, {r0, r1}\n    ldmia r6!, {r0, r1}\n    stmia r5!, {r0, r1}\n    mov r1, #0\n    lsl r0, r1, #2\n    ldr r0, [r2, r0]\n    cmp r3, r0\n    bne _0220547A\n    add r0, sp, #0x20\n    lsl r1, r4, #2\n    add sp, #0x40\n    ldr r0, [r0, r1]\n    pop {r4, r5, r6, pc}\n    add r0, r1, #1\n    lsl r0, r0, #0x18\n    lsr r1, r0, #0x18\n    cmp r1, #4\n    blo _02205468\n    mov r2, #0\n    add r1, sp, #0x20\n    lsl r0, r2, #2\n    ldr r0, [r1, r0]\n    cmp r3, r0\n    bne _0220549A\n    add r0, sp, #0x10\n    lsl r1, r4, #2\n    add sp, #0x40\n    ldr r0, [r0, r1]\n    pop {r4, r5, r6, pc}\n    add r0, r2, #1\n    lsl r0, r0, #0x18\n    lsr r2, r0, #0x18\n    cmp r2, #4\n    blo _02205488\n    mov r2, #0\n    add r1, sp, #0x10\n    lsl r0, r2, #2\n    ldr r0, [r1, r0]\n    cmp r3, r0\n    bne _022054BA\n    add r0, sp, #0\n    lsl r1, r4, #2\n    add sp, #0x40\n    ldr r0, [r0, r1]\n    pop {r4, r5, r6, pc}\n    add r0, r2, #1\n    lsl r0, r0, #0x18\n    lsr r2, r0, #0x18\n    cmp r2, #4\n    blo _022054A8\n    bl GF_AssertFail\n    mov r0, #0\n    add sp, #0x40\n    pop {r4, r5, r6, pc}\n    nop\n    _022054D0: .word ov01_02209720\n    _022054D4: .word ov01_02209730\n    _022054D8: .word ov01_02209740\n    _022054DC: .word ov01_02209710"
    );
    #endif
}

void ov01_022054E0(void) {
    /* Original at 0x022054E0 */
    /* Requires manual decompilation - 41 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0xc0\n    ldr r5, _02205538 ; =ov01_02209750\n    add r4, r0, #0\n    add r3, sp, #0\n    mov r2, #0x18\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    sub r2, r2, #1\n    bne _022054EC\n    add r0, r4, #0\n    bl ov01_02205584\n    cmp r0, #0\n    beq _02205504\n    add sp, #0xc0\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    add r0, r4, #0\n    bl sub_020659A8\n    lsl r0, r0, #0x18\n    lsr r5, r0, #0x18\n    bne _02205516\n    add sp, #0xc0\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    add r0, r4, #0\n    bl sub_0206599C\n    add r4, r0, #0\n    cmp r4, #0x10\n    blt _02205526\n    bl GF_AssertFail\n    sub r0, r5, #1\n    lsl r0, r0, #0x18\n    lsr r2, r0, #0x12\n    add r0, sp, #0\n    lsl r1, r4, #2\n    add r0, r0, r2\n    ldr r0, [r1, r0]\n    add sp, #0xc0\n    pop {r3, r4, r5, pc}\n    _02205538: .word ov01_02209750"
    );
    #endif
}

void ov01_0220553C(void) {
    /* Original at 0x0220553C */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl MapObject_GetID\n    cmp r0, #0xfd\n    beq _02205554\n    cmp r0, #0xfa\n    beq _02205554\n    cmp r0, #0xfb\n    beq _02205554\n    mov r0, #0\n    pop {r4, pc}\n    add r0, r4, #0\n    mov r1, #2\n    bl MapObject_GetParam\n    mov r1, #1\n    and r0, r1\n    pop {r4, pc}"
    );
    #endif
}

void ov01_02205564(void) {
    MapObject_GetSpriteID(0, 1);
}

void ov01_02205584(void) {
    /* Original at 0x02205584 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    mov r1, #1\n    add r4, r0, #0\n    bl MapObject_GetParam\n    lsl r0, r0, #0x10\n    lsr r5, r0, #0x10\n    add r0, r4, #0\n    bl MapObject_GetID\n    cmp r0, #0xfd\n    beq _022055A0\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    lsl r0, r5, #0x18\n    lsr r0, r0, #0x18\n    asr r1, r0, #4\n    mov r0, #0xf\n    and r0, r1\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_022055B0(void) {
    /* Original at 0x022055B0 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    mov r1, #1\n    add r4, r0, #0\n    bl MapObject_GetParam\n    lsl r0, r0, #0x10\n    lsr r5, r0, #0x10\n    add r0, r4, #0\n    bl MapObject_GetID\n    cmp r0, #0xfd\n    beq _022055CC\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    lsl r0, r5, #0x18\n    lsr r1, r0, #0x18\n    mov r0, #0xf\n    and r0, r1\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_022055DC(void) {
    /* Original at 0x022055DC */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    mov r1, #1\n    add r4, r0, #0\n    bl MapObject_GetParam\n    lsl r0, r0, #0x10\n    lsr r5, r0, #0x10\n    add r0, r4, #0\n    bl MapObject_GetID\n    cmp r0, #0xfd\n    beq _022055F8\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    asr r1, r5, #8\n    mov r0, #0xf\n    and r0, r1\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_02205604(void) {
    /* Original at 0x02205604 */
    /* Requires manual decompilation - 40 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r0, #0\n    add r4, r1, #0\n    add r5, r2, #0\n    bl MapObject_GetFacingDirection\n    lsl r0, r0, #0x18\n    lsr r6, r0, #0x18\n    add r0, r7, #0\n    bl MapObject_GetXCoord\n    str r0, [r4]\n    add r0, r7, #0\n    bl MapObject_GetZCoord\n    str r0, [r5]\n    cmp r6, #3\n    bhi _0220565C\n    add r0, r6, r6\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02205634: ; jump table\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [r5]\n    sub r0, r0, #1\n    str r0, [r5]\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [r4]\n    sub r0, r0, #1\n    str r0, [r4]\n    pop {r3, r4, r5, r6, r7, pc}\n    bl GF_AssertFail\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_02205664(void) {
    /* Original at 0x02205664 */
    /* Requires manual decompilation - 40 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r0, #0\n    add r4, r1, #0\n    add r5, r2, #0\n    bl MapObject_GetFacingDirection\n    lsl r0, r0, #0x18\n    lsr r6, r0, #0x18\n    add r0, r7, #0\n    bl MapObject_GetPreviousXCoord\n    str r0, [r4]\n    add r0, r7, #0\n    bl MapObject_GetPreviousZCoord\n    str r0, [r5]\n    cmp r6, #3\n    bhi _022056BC\n    add r0, r6, r6\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02205694: ; jump table\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [r5]\n    sub r0, r0, #1\n    str r0, [r5]\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [r4]\n    sub r0, r0, #1\n    str r0, [r4]\n    pop {r3, r4, r5, r6, r7, pc}\n    bl GF_AssertFail\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_022056C4(void) {
    /* Original at 0x022056C4 */
    /* Requires manual decompilation - 37 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    add r5, r1, #0\n    bl MapObject_GetFieldSystem\n    add r7, r0, #0\n    add r0, r6, #0\n    bl MapObject_GetXCoord\n    add r4, r0, #0\n    add r0, r6, #0\n    bl MapObject_GetZCoord\n    add r2, r0, #0\n    cmp r5, #5\n    bhi _02205716\n    add r0, r5, r5\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _022056F0: ; jump table\n    sub r2, r2, #1\n    b _02205716\n    add r2, r2, #1\n    b _02205716\n    sub r4, r4, #1\n    b _02205716\n    add r4, r4, #1\n    b _02205716\n    add r4, r4, #1\n    add r2, r2, #1\n    b _02205716\n    sub r4, r4, #1\n    add r2, r2, #1\n    add r0, r7, #0\n    add r1, r4, #0\n    bl GetMetatileBehavior\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_02205720(void) {
    /* Original at 0x02205720 */
    /* Requires manual decompilation - 45 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0xc\n    add r5, r1, #0\n    add r1, sp, #0\n    add r4, r2, #0\n    add r6, r3, #0\n    bl MapObject_CopyPositionVector\n    cmp r4, #3\n    bhi _02205776\n    add r0, r4, r4\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02205740: ; jump table\n    mov r0, #1\n    ldr r1, [sp, #8]\n    lsl r0, r0, #0x10\n    sub r0, r1, r0\n    str r0, [sp, #8]\n    b _02205776\n    mov r0, #1\n    ldr r1, [sp, #8]\n    lsl r0, r0, #0x10\n    add r0, r1, r0\n    str r0, [sp, #8]\n    b _02205776\n    mov r0, #1\n    ldr r1, [sp]\n    lsl r0, r0, #0x10\n    add r0, r1, r0\n    str r0, [sp]\n    b _02205776\n    mov r0, #1\n    ldr r1, [sp]\n    lsl r0, r0, #0x10\n    sub r0, r1, r0\n    str r0, [sp]\n    add r0, r5, #0\n    add r1, sp, #0\n    add r2, r6, #0\n    bl MapObject_SetPositionFromVectorAndDirection\n    add sp, #0xc\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void ov01_02205784(void) {
    ov01_0220329C();
}

void ov01_02205790(void) {
    /* Original at 0x02205790 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    add r4, r1, #0\n    bl FollowMon_IsActive\n    cmp r0, #0\n    beq _022057BE\n    add r0, r5, #0\n    bl FollowMon_GetMapObject\n    add r6, r0, #0\n    ldr r0, [r5, #0x40]\n    bl PlayerAvatar_GetMapObject\n    add r1, sp, #0\n    bl MapObject_CopyPositionVector\n    add r0, r6, #0\n    add r1, sp, #0\n    add r2, r4, #0\n    bl MapObject_SetPositionFromVectorAndDirection\n    add sp, #0xc\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void ov01_022057C4(void) {
    FollowMon_GetMapObject();
    MapObject_CheckVisible();
}

void ov01_022057D0(void) {
    FollowMon_GetMapObject();
    sub_020659B8();
}

void ov01_022057DC(void) {
    /* Original at 0x022057DC */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl sub_0205F1A0\n    add r0, #0xfc\n    ldr r0, [r0]\n    mov r1, #0x16\n    bl ov01_021FC5A4\n    ldr r2, [r0]\n    add r1, r0, #4\n    lsl r0, r2, #1\n    add r0, r1, r0\n    add r3, r0, r2\n    mov r1, #0\n    cmp r2, #0\n    ble _02205806\n    mov r0, #1\n    strb r0, [r3, r1]\n    add r1, r1, #1\n    cmp r1, r2\n    blt _022057FE\n    pop {r3, pc}"
    );
    #endif
}

void ov01_02205808(void) {
    /* Original at 0x02205808 */
    /* Requires manual decompilation - 41 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x28\n    add r5, r1, #0\n    add r6, r0, #0\n    add r0, r5, #0\n    add r4, r2, #0\n    bl MapObject_GetManager\n    add r7, r0, #0\n    add r0, r5, #0\n    bl MapObject_GetSpriteID\n    add r1, r0, #0\n    add r0, r7, #0\n    add r2, sp, #0\n    bl ov01_021F9744\n    add r0, r5, #0\n    bl MapObject_GetID\n    cmp r0, #0xfd\n    beq _0220583C\n    cmp r0, #0xfa\n    beq _0220583C\n    cmp r0, #0xfb\n    bne _0220586A\n    add r0, r6, #0\n    add r1, r5, #0\n    add r2, r4, #0\n    add r3, sp, #0\n    bl ov01_02205870\n    add r0, r4, #0\n    add r1, sp, #0\n    bl sub_02023EC8\n    add r0, r5, #0\n    bl MapObject_GetFacingDirection\n    bl ov01_021FA44C\n    add r1, r0, #0\n    add r0, r4, #0\n    bl sub_02023EE0\n    add r0, r4, #0\n    mov r1, #0\n    bl sub_02023F40\n    add sp, #0x28\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_02205870(void) {
    /* Original at 0x02205870 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r0, r1, #0\n    add r4, r3, #0\n    bl MapObject_GetManager\n    bl sub_0205F1A0\n    cmp r5, #0\n    beq _02205888\n    mov r1, #0x16\n    b _0220588A\n    mov r1, #0x15\n    add r0, #0xfc\n    ldr r0, [r0]\n    bl ov01_021FC5A4\n    add r4, #0xc\n    add r1, r4, #0\n    bl sub_02026E18\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_0220589C(void) {
    /* Original at 0x0220589C */
    /* Requires manual decompilation - 83 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r1, #0\n    mov r0, #0xb\n    mov r1, #0x28\n    add r5, r2, #0\n    bl Heap_AllocAtEnd\n    mov r1, #0\n    mov r2, #4\n    add r4, r0, #0\n    bl MI_CpuFill8\n    add r0, r6, #0\n    mov r1, #2\n    bl MapObject_GetParam\n    lsl r0, r0, #0xf\n    lsr r0, r0, #0x10\n    bl ov01_02206088\n    add r7, r0, #0\n    add r0, r6, #0\n    bl MapObject_GetManager\n    bl MapObjectManager_GetMapModelNarc\n    add r1, r7, #0\n    mov r2, #0xb\n    bl NARC_AllocAndReadWholeMember\n    str r0, [r4]\n    bl NNS_G3dGetTex\n    add r6, r0, #0\n    mov r1, #0\n    bl sub_02020888\n    add r7, r0, #0\n    add r0, r6, #0\n    mov r1, #0\n    bl sub_02020838\n    add r1, r4, #0\n    str r0, [r4, #4]\n    add r0, r7, #0\n    add r1, #8\n    mov r2, #0x20\n    bl MIi_CpuCopy16\n    add r0, r4, #0\n    add r0, #8\n    mov r1, #0x10\n    bl TintPalette_GrayScale\n    mov r0, #0\n    mov r1, #0x10\n    str r0, [sp]\n    add r0, r4, #0\n    add r2, r1, #0\n    add r0, #8\n    add r2, #0xf0\n    mov r3, #0xb4\n    bl TintPalette_CustomTone\n    add r0, r5, #0\n    bl sub_02023FB0\n    add r1, r0, #0\n    lsl r1, r1, #0x10\n    add r2, r4, #0\n    mov r0, #1\n    lsr r1, r1, #0xd\n    add r2, #8\n    mov r3, #0x20\n    bl GF_CreateNewVramTransferTask\n    add r0, r5, #0\n    bl sub_02023FA0\n    add r6, r0, #0\n    add r0, r5, #0\n    bl sub_02023FA0\n    add r1, r0, #0\n    ldr r3, _02205964 ; =0x7FFF0000\n    lsl r1, r1, #0x10\n    and r3, r6\n    lsr r3, r3, #0x10\n    ldr r2, [r4, #4]\n    mov r0, #0\n    lsr r1, r1, #0xd\n    lsl r3, r3, #4\n    bl GF_CreateNewVramTransferTask\n    ldr r0, _02205968 ; =ov01_0220596C\n    add r1, r4, #0\n    mov r2, #0\n    bl SysTask_CreateOnVWaitQueue\n    pop {r3, r4, r5, r6, r7, pc}\n    _02205964: .word 0x7FFF0000\n    _02205968: .word ov01_0220596C"
    );
    #endif
}

void ov01_0220596C(void) {
    /* Original at 0x0220596C */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl GF_GetNumPendingVramTransferTasks\n    cmp r0, #0\n    bne _0220598C\n    add r0, r5, #0\n    bl SysTask_Destroy\n    ldr r0, [r4]\n    bl Heap_Free\n    add r0, r4, #0\n    bl Heap_Free\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_02205990(void) {
    /* Original at 0x02205990 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "str r0, [r3, #4]\n    str r1, [r3, #8]\n    str r2, [r3, #0xc]\n    ldr r0, [r3, #0x1c]\n    cmp r0, #3\n    bne _022059A2\n    mov r0, #2\n    str r0, [r3, #0x1c]\n    bx lr\n    cmp r0, #0\n    bne _022059AA\n    mov r0, #1\n    str r0, [r3, #0x1c]\n    bx lr"
    );
    #endif
}

void ov01_022059AC(void) {
    /* Original at 0x022059AC */
    /* Requires manual decompilation - 60 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #4\n    add r5, r0, #0\n    add r0, #0xf9\n    ldrb r0, [r0]\n    cmp r0, #0\n    beq _02205A2A\n    add r0, r5, #0\n    add r0, #0xfa\n    ldrb r0, [r0]\n    cmp r0, #0\n    bne _02205A02\n    ldr r0, [r5, #0x40]\n    bl PlayerAvatar_GetXCoord\n    add r4, r0, #0\n    ldr r0, [r5, #0x40]\n    bl PlayerAvatar_GetZCoord\n    add r6, r0, #0\n    ldr r0, [r5, #0x40]\n    bl PlayerAvatar_GetFacingDirection\n    add r3, r0, #0\n    ldr r0, [r5, #0x20]\n    add r1, r4, #0\n    ldr r0, [r0]\n    add r2, r6, #0\n    str r0, [sp]\n    ldr r0, [r5, #0x3c]\n    bl FollowMon_InitMapObject\n    add r1, r5, #0\n    add r1, #0xfa\n    add r0, r5, #0\n    add r0, #0xe4\n    ldrb r1, [r1]\n    ldr r0, [r0]\n    cmp r1, #1\n    bne _02205A2A\n    bl ov01_021F9048\n    b _02205A2A\n    add r0, r5, #0\n    add r0, #0xe4\n    ldr r0, [r0]\n    bl FollowMon_GetSpecies\n    ldr r1, [r5, #0x20]\n    ldr r1, [r1]\n    bl FollowMon_GetPermissionBySpeciesAndMap\n    cmp r0, #0\n    bne _02205A2A\n    add r0, r5, #0\n    add r0, #0xe4\n    ldr r0, [r0]\n    bl MapObject_Remove\n    add r0, r5, #0\n    mov r1, #0\n    add r0, #0xfa\n    strb r1, [r0]\n    mov r0, #0\n    add r5, #0xf9\n    strb r0, [r5]\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void ov01_02205A34(void) {
    /* Original at 0x02205A34 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    add r5, r1, #0\n    bl FollowMon_IsActive\n    cmp r0, #0\n    beq _02205A5C\n    add r0, r4, #0\n    bl FollowMon_GetMapObject\n    add r4, r0, #0\n    add r1, sp, #0\n    bl MapObject_CopyPositionVector\n    add r0, r4, #0\n    add r1, sp, #0\n    str r5, [sp, #4]\n    bl MapObject_SetPositionVector\n    add sp, #0xc\n    pop {r4, r5, pc}"
    );
    #endif
}

void ov01_02205A60(void) {
    /* Original at 0x02205A60 */
    /* Requires manual decompilation - 59 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    bl TaskManager_GetFieldSystem\n    add r5, r0, #0\n    add r0, r4, #0\n    bl TaskManager_GetStatePtr\n    add r4, r0, #0\n    add r0, r5, #0\n    bl FollowMon_IsActive\n    cmp r0, #0\n    bne _02205A80\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    ldr r0, [r4]\n    add r5, #0xe4\n    ldr r5, [r5]\n    cmp r0, #0\n    beq _02205A94\n    cmp r0, #1\n    beq _02205AB0\n    cmp r0, #2\n    beq _02205ACE\n    b _02205AE6\n    add r0, r5, #0\n    bl MapObject_CheckMovementPaused\n    cmp r0, #0\n    beq _02205AAA\n    add r0, r5, #0\n    bl MapObject_UnpauseMovement\n    mov r0, #1\n    str r0, [r4]\n    b _02205AE6\n    mov r0, #2\n    str r0, [r4]\n    b _02205AE6\n    add r0, r5, #0\n    bl MapObject_IsMovementPaused\n    cmp r0, #0\n    beq _02205AE6\n    add r0, r5, #0\n    bl MapObject_AreBitsSetForMovementScriptInit\n    cmp r0, #0\n    beq _02205AE6\n    add r0, r5, #0\n    bl MapObject_PauseMovement\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    add r0, r5, #0\n    bl MapObject_IsMovementPaused\n    cmp r0, #0\n    beq _02205AE6\n    add r0, r5, #0\n    bl MapObject_AreBitsSetForMovementScriptInit\n    cmp r0, #0\n    beq _02205AE6\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_02205AEC(void) {
    /* Original at 0x02205AEC */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0xb\n    mov r1, #0x48\n    bl Heap_AllocAtEnd\n    add r2, r0, #0\n    mov r0, #0\n    strb r0, [r2]\n    strb r0, [r2, #1]\n    strb r0, [r2, #2]\n    strb r0, [r2, #3]\n    ldr r0, [r4, #0x10]\n    ldr r1, _02205B10 ; =ov01_02205B14\n    bl TaskManager_Call\n    pop {r4, pc}\n    nop\n    _02205B10: .word ov01_02205B14"
    );
    #endif
}

void ov01_02205B14(void) {
    /* Original at 0x02205B14 */
    /* Requires manual decompilation - 200 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x30\n    add r4, r0, #0\n    bl TaskManager_GetFieldSystem\n    add r5, r0, #0\n    add r0, r4, #0\n    bl TaskManager_GetEnvironment\n    add r4, r0, #0\n    ldrb r1, [r4]\n    cmp r1, #7\n    bhi _02205BD2\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _02205B3A: ; jump table\n    add r0, r5, #0\n    bl FollowMon_IsActive\n    cmp r0, #0\n    bne _02205B60\n    add r0, r4, #0\n    bl Heap_Free\n    add sp, #0x30\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    add r0, r5, #0\n    bl ov01_022057C4\n    cmp r0, #0\n    beq _02205B76\n    add r0, r4, #0\n    bl Heap_Free\n    add sp, #0x30\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    add r0, r5, #0\n    bl FollowMon_GetMapObject\n    bl MapObject_UnpauseMovement\n    ldrb r0, [r4]\n    add r0, r0, #1\n    strb r0, [r4]\n    add r0, r5, #0\n    bl FollowMon_GetMapObject\n    bl MapObject_IsMovementPaused\n    cmp r0, #0\n    beq _02205BD2\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov01_02205CF0\n    strb r0, [r4]\n    b _02205CDA\n    ldr r0, _02205CE0 ; =ov01_022096E0\n    ldr r1, [r0, #8]\n    ldr r0, [r0, #0xc]\n    str r1, [sp, #0x10]\n    str r0, [sp, #0x14]\n    add r0, r5, #0\n    bl FollowMon_GetMapObject\n    add r5, r0, #0\n    bl MapObject_IsMovementPaused\n    cmp r0, #0\n    beq _02205BD2\n    ldrb r1, [r4, #3]\n    add r0, r1, #1\n    lsl r2, r1, #2\n    add r1, sp, #0x10\n    strb r0, [r4, #3]\n    ldr r1, [r1, r2]\n    add r0, r5, #0\n    bl MapObject_SetHeldMovement\n    ldrb r0, [r4, #3]\n    cmp r0, #2\n    bhs _02205BD4\n    b _02205CDA\n    ldrb r0, [r4]\n    add r0, r0, #1\n    strb r0, [r4]\n    b _02205CDA\n    add r0, r5, #0\n    bl FollowMon_GetMapObject\n    add r5, r0, #0\n    bl MapObject_IsMovementPaused\n    cmp r0, #0\n    beq _02205CDA\n    add r0, r5, #0\n    mov r1, #0\n    bl MapObject_SetHeldMovement\n    ldrb r0, [r4]\n    add r0, r0, #1\n    strb r0, [r4]\n    b _02205CDA\n    ldr r3, _02205CE4 ; =ov01_022096F0\n    add r2, sp, #8\n    mov r1, #8\n    ldrb r0, [r3]\n    add r3, r3, #1\n    strb r0, [r2]\n    add r2, r2, #1\n    sub r1, r1, #1\n    bne _02205C02\n    ldr r3, _02205CE8 ; =ov01_022096E0\n    add r2, sp, #0\n    mov r1, #8\n    ldrb r0, [r3]\n    add r3, r3, #1\n    strb r0, [r2]\n    add r2, r2, #1\n    sub r1, r1, #1\n    bne _02205C14\n    add r0, r5, #0\n    bl FollowMon_GetMapObject\n    add r6, r0, #0\n    mov r5, #2\n    ldr r0, [r4, #0x44]\n    lsl r5, r5, #0xc\n    cmp r0, #0\n    bne _02205C38\n    mov r0, #0\n    mvn r0, r0\n    mul r5, r0\n    add r0, r6, #0\n    add r1, sp, #0x24\n    bl MapObject_CopyPositionVector\n    ldrb r2, [r4, #1]\n    add r1, sp, #8\n    ldr r0, [sp, #0x2c]\n    ldrsb r1, [r1, r2]\n    ldr r2, [sp, #0x28]\n    lsl r1, r1, #0xc\n    sub r0, r0, r1\n    str r0, [sp, #0x2c]\n    ldr r0, [sp, #0x24]\n    add r0, r0, r5\n    str r0, [sp, #0x24]\n    ldrb r1, [r4, #1]\n    add r0, sp, #0\n    ldrsb r0, [r0, r1]\n    add r1, sp, #0x24\n    lsl r0, r0, #0xc\n    add r0, r2, r0\n    str r0, [sp, #0x28]\n    add r0, r6, #0\n    bl MapObject_SetPositionVector\n    ldrb r0, [r4, #1]\n    add r0, r0, #1\n    strb r0, [r4, #1]\n    ldrb r0, [r4, #1]\n    cmp r0, #8\n    blo _02205CDA\n    ldrb r0, [r4]\n    add r0, r0, #1\n    strb r0, [r4]\n    b _02205CDA\n    add r0, r5, #0\n    bl FollowMon_GetMapObject\n    mov r1, #3\n    bl ov01_0220329C\n    ldrb r0, [r4]\n    add r0, r0, #1\n    strb r0, [r4]\n    b _02205CDA\n    ldrb r0, [r4, #2]\n    add r0, r0, #1\n    strb r0, [r4, #2]\n    ldrb r0, [r4, #2]\n    cmp r0, #0x14\n    blo _02205CDA\n    add r0, r5, #0\n    mov r1, #0\n    bl ov01_02205790\n    ldr r3, _02205CEC ; =ov01_02209704\n    add r2, sp, #0x18\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    str r0, [r2]\n    ldr r0, [r5, #0x3c]\n    bl ov01_021F771C\n    add r1, sp, #0x18\n    bl sub_02023E78\n    add r5, #0xe4\n    ldr r0, [r5]\n    mov r1, #1\n    bl sub_02069E84\n    ldrb r0, [r4]\n    add r0, r0, #1\n    strb r0, [r4]\n    b _02205CDA\n    bl Heap_Free\n    add sp, #0x30\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    mov r0, #0\n    add sp, #0x30\n    pop {r4, r5, r6, pc}\n    _02205CE0: .word ov01_022096E0\n    _02205CE4: .word ov01_022096F0\n    _02205CE8: .word ov01_022096E0\n    _02205CEC: .word ov01_02209704"
    );
    #endif
}

void ov01_02205CF0(void) {
    /* Original at 0x02205CF0 */
    /* Requires manual decompilation - 51 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0x40]\n    add r4, r1, #0\n    bl PlayerAvatar_GetMapObject\n    bl MapObject_GetXCoord\n    str r0, [sp]\n    ldr r0, [r5, #0x40]\n    bl PlayerAvatar_GetMapObject\n    bl MapObject_GetZCoord\n    add r7, r0, #0\n    add r0, r5, #0\n    bl FollowMon_GetMapObject\n    bl MapObject_GetXCoord\n    add r6, r0, #0\n    add r0, r5, #0\n    bl FollowMon_GetMapObject\n    bl MapObject_GetZCoord\n    ldr r1, [sp]\n    cmp r6, r1\n    bne _02205D38\n    add r1, r7, #1\n    cmp r0, r1\n    bne _02205D38\n    mov r0, #1\n    str r0, [r4, #0x44]\n    mov r0, #2\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r1, [sp]\n    add r1, r1, #1\n    cmp r6, r1\n    bne _02205D4C\n    cmp r0, r7\n    bne _02205D4C\n    mov r0, #0\n    str r0, [r4, #0x44]\n    mov r0, #3\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r1, [sp]\n    add r2, r6, #1\n    cmp r2, r1\n    bne _02205D60\n    cmp r0, r7\n    bne _02205D60\n    mov r0, #1\n    str r0, [r4, #0x44]\n    mov r0, #3\n    pop {r3, r4, r5, r6, r7, pc}\n    bl GF_AssertFail\n    mov r0, #2\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_02205D68(void) {
    /* Original at 0x02205D68 */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl FollowMon_IsActive\n    cmp r0, #0\n    bne _02205D78\n    mov r0, #0\n    pop {r4, pc}\n    add r0, r4, #0\n    bl ov01_022057C4\n    cmp r0, #0\n    beq _02205D94\n    add r0, r4, #0\n    bl sub_0206A054\n    add r0, r4, #0\n    mov r1, #0\n    bl ov01_02205790\n    mov r0, #0\n    pop {r4, pc}\n    mov r0, #0xb\n    mov r1, #0x44\n    bl Heap_AllocAtEnd\n    add r2, r0, #0\n    mov r0, #0\n    str r0, [r2]\n    ldr r0, [r4, #0x10]\n    ldr r1, _02205DB0 ; =ov01_02205DB4\n    bl TaskManager_Call\n    mov r0, #1\n    pop {r4, pc}\n    nop\n    _02205DB0: .word ov01_02205DB4"
    );
    #endif
}

void ov01_02205DB4(void) {
    /* Original at 0x02205DB4 */
    /* Requires manual decompilation - 118 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r4, r0, #0\n    bl TaskManager_GetFieldSystem\n    add r5, r0, #0\n    add r0, r4, #0\n    bl TaskManager_GetEnvironment\n    add r6, r0, #0\n    add r0, r4, #0\n    bl TaskManager_GetStatePtr\n    add r4, r0, #0\n    ldr r0, [r4]\n    cmp r0, #4\n    bhi _02205ED2\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02205DE2: ; jump table\n    add r0, r5, #0\n    bl FollowMon_GetMapObject\n    bl MapObject_UnpauseMovement\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    add r0, r5, #0\n    bl FollowMon_GetMapObject\n    bl MapObject_IsMovementPaused\n    cmp r0, #0\n    beq _02205ED2\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _02205ED2\n    add r0, r5, #0\n    bl FollowMon_GetMapObject\n    str r0, [sp]\n    bl MapObject_GetSpriteID\n    bl ov01_02206088\n    add r7, r0, #0\n    ldr r0, [r5, #0x3c]\n    bl MapObjectManager_GetMapModelNarc\n    add r1, r7, #0\n    mov r2, #0xb\n    bl NARC_AllocAndReadWholeMember\n    add r5, r0, #0\n    bl NNS_G3dGetTex\n    ldr r1, [r0, #0x38]\n    mov r2, #0x40\n    add r0, r0, r1\n    add r1, r6, #4\n    bl MIi_CpuCopy16\n    add r0, r5, #0\n    bl Heap_Free\n    ldr r0, [sp]\n    mov r1, #1\n    bl ov01_0220329C\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _02205ED2\n    ldr r0, [r6]\n    add r0, r0, #1\n    str r0, [r6]\n    cmp r0, #0x14\n    blt _02205ED2\n    add r0, r5, #0\n    mov r1, #0\n    bl ov01_02205790\n    ldr r3, _02205ED8 ; =ov01_022096F8\n    add r2, sp, #8\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    str r0, [r2]\n    ldr r0, [r5, #0x3c]\n    bl ov01_021F771C\n    add r7, r0, #0\n    add r1, sp, #8\n    bl sub_02023E78\n    add r0, r7, #0\n    bl sub_02023FB0\n    str r0, [sp, #4]\n    add r0, r7, #0\n    bl sub_02023FB0\n    add r1, r0, #0\n    add r2, r6, #4\n    lsl r1, r1, #0x10\n    ldr r6, _02205EDC ; =0xFFFF0000\n    ldr r3, [sp, #4]\n    mov r0, #1\n    and r3, r6\n    lsr r3, r3, #0x10\n    lsr r1, r1, #0xd\n    lsl r3, r3, #3\n    bl GF_CreateNewVramTransferTask\n    add r0, r5, #0\n    bl sub_0206A054\n    add r0, r5, #0\n    bl FollowMon_GetMapObject\n    mov r1, #0\n    bl sub_02069E28\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _02205ED2\n    add r0, r6, #0\n    bl Heap_Free\n    add sp, #0x14\n    mov r0, #1\n    pop {r4, r5, r6, r7, pc}\n    mov r0, #0\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    _02205ED8: .word ov01_022096F8\n    _02205EDC: .word 0xFFFF0000"
    );
    #endif
}

void ov01_02205EE0(void) {
    /* Original at 0x02205EE0 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0xb\n    mov r1, #4\n    bl Heap_AllocAtEnd\n    add r2, r0, #0\n    mov r0, #0\n    str r0, [r2]\n    ldr r1, _02205EFC ; =ov01_02205F00\n    add r0, r4, #0\n    bl TaskManager_Call\n    pop {r4, pc}\n    _02205EFC: .word ov01_02205F00"
    );
    #endif
}

void ov01_02205F00(void) {
    /* Original at 0x02205F00 */
    /* Requires manual decompilation - 120 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    bl TaskManager_GetFieldSystem\n    add r4, r0, #0\n    add r0, r5, #0\n    bl TaskManager_GetEnvironment\n    add r6, r0, #0\n    add r0, r5, #0\n    bl TaskManager_GetStatePtr\n    add r5, r0, #0\n    ldr r0, [r5]\n    cmp r0, #6\n    bls _02205F22\n    b _02206024\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02205F2E: ; jump table\n    add r0, r4, #0\n    add r0, #0xe4\n    ldr r0, [r0]\n    bl sub_020659CC\n    add r4, #0xe4\n    ldr r0, [r4]\n    bl sub_0205F484\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    b _02206024\n    add r0, r4, #0\n    add r0, #0xe4\n    ldr r0, [r0]\n    bl MapObject_AreBitsSetForMovementScriptInit\n    cmp r0, #1\n    bne _02206024\n    ldr r0, [r4, #0x40]\n    bl PlayerAvatar_GetMapObject\n    add r4, #0xe4\n    ldr r1, [r4]\n    bl ov01_02206028\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    b _02206024\n    add r0, r4, #0\n    add r0, #0xe4\n    ldr r0, [r0]\n    bl MapObject_AreBitsSetForMovementScriptInit\n    cmp r0, #1\n    bne _02206024\n    ldr r0, [r4, #0x40]\n    bl PlayerAvatar_GetMapObject\n    bl MapObject_GetFacingDirection\n    add r4, #0xe4\n    add r1, r0, #0\n    ldr r0, [r4]\n    bl MapObject_SetFacingDirection\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    b _02206024\n    ldr r0, [r6]\n    add r0, r0, #1\n    str r0, [r6]\n    cmp r0, #0xa\n    ble _02206024\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    b _02206024\n    add r0, r4, #0\n    add r0, #0xe4\n    ldr r0, [r0]\n    bl MapObject_AreBitsSetForMovementScriptInit\n    cmp r0, #1\n    bne _02206024\n    add r0, r4, #0\n    add r0, #0xe4\n    ldr r0, [r0]\n    mov r1, #0\n    bl sub_0206A040\n    ldr r0, [r4, #0x40]\n    bl PlayerAvatar_GetMapObject\n    bl MapObject_GetFacingDirection\n    mov r1, #0x34\n    bl sub_0206234C\n    add r4, #0xe4\n    add r1, r0, #0\n    ldr r0, [r4]\n    bl MapObject_SetHeldMovement\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    b _02206024\n    add r0, r4, #0\n    add r0, #0xe4\n    ldr r0, [r0]\n    bl MapObject_AreBitsSetForMovementScriptInit\n    cmp r0, #1\n    bne _02206024\n    add r0, r4, #0\n    add r0, #0xe4\n    ldr r0, [r0]\n    mov r1, #2\n    bl ov01_0220329C\n    add r0, r4, #0\n    bl sub_0206A054\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    b _02206024\n    add r0, r6, #0\n    bl Heap_Free\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    mov r0, #0\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov01_02206028(void) {
    /* Original at 0x02206028 */
    /* Requires manual decompilation - 39 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    str r0, [sp]\n    add r5, r1, #0\n    bl MapObject_GetXCoord\n    add r6, r0, #0\n    ldr r0, [sp]\n    bl MapObject_GetZCoord\n    add r7, r0, #0\n    add r0, r5, #0\n    bl MapObject_GetXCoord\n    add r4, r0, #0\n    add r0, r5, #0\n    bl MapObject_GetZCoord\n    sub r6, r6, r4\n    sub r4, r7, r0\n    ldr r0, [sp]\n    bl MapObject_GetFacingDirection\n    cmp r6, #0\n    bge _02206062\n    add r0, r5, #0\n    mov r1, #0xa\n    bl MapObject_SetHeldMovement\n    pop {r3, r4, r5, r6, r7, pc}\n    ble _0220606E\n    add r0, r5, #0\n    mov r1, #0xb\n    bl MapObject_SetHeldMovement\n    pop {r3, r4, r5, r6, r7, pc}\n    cmp r4, #0\n    bge _0220607C\n    add r0, r5, #0\n    mov r1, #8\n    bl MapObject_SetHeldMovement\n    pop {r3, r4, r5, r6, r7, pc}\n    ble _02206086\n    add r0, r5, #0\n    mov r1, #9\n    bl MapObject_SetHeldMovement\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_02206088(void) {
    /* Original at 0x02206088 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl GetMoveModelNoBySpriteId\n    cmp r0, #0\n    bge _02206098\n    bl GF_AssertFail\n    mov r0, #0\n    pop {r3, pc}"
    );
    #endif
}

void ov01_0220609C(void) {
    /* Original at 0x0220609C */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl FollowMon_IsActive\n    cmp r0, #0\n    beq _022060B4\n    add r5, #0xe4\n    ldr r0, [r5]\n    add r1, r4, #0\n    bl MapObject_SetFacingDirection\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_022060B8(void) {
    /* Original at 0x022060B8 */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    add r5, r1, #0\n    add r7, r2, #0\n    bl FollowMon_IsActive\n    cmp r0, #0\n    bne _022060CC\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r6, #0\n    bl ov01_022057C4\n    cmp r0, #0\n    beq _022060DA\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    cmp r5, #0\n    bne _022060E2\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0xb\n    mov r1, #0x84\n    bl Heap_AllocAtEnd\n    add r4, r0, #0\n    mov r1, #0\n    mov r2, #0x84\n    bl MI_CpuFill8\n    strb r5, [r4, #1]\n    strb r7, [r4, #3]\n    ldr r0, [r6, #0x10]\n    ldr r1, _02206108 ; =ov01_0220610C\n    add r2, r4, #0\n    bl TaskManager_Call\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02206108: .word ov01_0220610C"
    );
    #endif
}

void ov01_0220610C(void) {
    /* Original at 0x0220610C */
    /* Requires manual decompilation - 147 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    bl TaskManager_GetFieldSystem\n    add r6, r0, #0\n    add r0, r5, #0\n    bl TaskManager_GetEnvironment\n    add r4, r0, #0\n    add r0, r5, #0\n    bl TaskManager_GetStatePtr\n    add r5, r0, #0\n    ldr r0, [r5]\n    cmp r0, #3\n    bls _0220612E\n    b _0220625A\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0220613A: ; jump table\n    add r0, r6, #0\n    bl FollowMon_GetMapObject\n    bl MapObject_GetSpriteID\n    bl ov01_02206088\n    add r7, r0, #0\n    ldr r0, [r6, #0x3c]\n    bl MapObjectManager_GetMapModelNarc\n    add r1, r7, #0\n    mov r2, #0xb\n    bl NARC_AllocAndReadWholeMember\n    add r6, r0, #0\n    bl NNS_G3dGetTex\n    ldr r1, [r0, #0x38]\n    mov r2, #0x40\n    add r0, r0, r1\n    add r1, r4, #4\n    bl MIi_CpuCopy16\n    add r0, r6, #0\n    bl Heap_Free\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    b _0220625A\n    ldrb r0, [r4, #2]\n    cmp r0, #0\n    beq _0220618C\n    sub r0, r0, #1\n    strb r0, [r4, #2]\n    b _0220625A\n    mov r0, #0\n    ldrsb r2, [r4, r0]\n    ldrb r1, [r4, #1]\n    add r1, r2, r1\n    strb r1, [r4]\n    ldrsb r0, [r4, r0]\n    cmp r0, #0x10\n    blt _022061A6\n    mov r0, #0x10\n    strb r0, [r4]\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    ldr r0, _02206260 ; =0x0000FFFF\n    add r1, r4, #0\n    str r0, [sp]\n    ldrb r3, [r4]\n    add r0, r4, #4\n    add r1, #0x44\n    mov r2, #0x20\n    bl BlendPalette\n    ldr r0, [r6, #0x3c]\n    bl ov01_021F771C\n    add r6, r0, #0\n    bl sub_02023FB0\n    add r5, r0, #0\n    add r0, r6, #0\n    bl sub_02023FB0\n    add r1, r0, #0\n    ldr r3, _02206264 ; =0xFFFF0000\n    lsl r1, r1, #0x10\n    and r3, r5\n    add r2, r4, #0\n    lsr r3, r3, #0x10\n    mov r0, #1\n    lsr r1, r1, #0xd\n    add r2, #0x44\n    lsl r3, r3, #3\n    bl GF_CreateNewVramTransferTask\n    ldrb r0, [r4, #3]\n    strb r0, [r4, #2]\n    b _0220625A\n    ldrb r0, [r4, #2]\n    cmp r0, #0\n    beq _022061F6\n    sub r0, r0, #1\n    strb r0, [r4, #2]\n    b _0220625A\n    mov r0, #0\n    ldrsb r2, [r4, r0]\n    ldrb r1, [r4, #1]\n    sub r1, r2, r1\n    strb r1, [r4]\n    ldrsb r0, [r4, r0]\n    cmp r0, #0\n    bgt _0220620C\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    ldr r0, _02206260 ; =0x0000FFFF\n    add r1, r4, #0\n    str r0, [sp]\n    ldrb r3, [r4]\n    add r0, r4, #4\n    add r1, #0x44\n    mov r2, #0x20\n    bl BlendPalette\n    ldr r0, [r6, #0x3c]\n    bl ov01_021F771C\n    add r6, r0, #0\n    bl sub_02023FB0\n    add r5, r0, #0\n    add r0, r6, #0\n    bl sub_02023FB0\n    add r1, r0, #0\n    ldr r3, _02206264 ; =0xFFFF0000\n    lsl r1, r1, #0x10\n    and r3, r5\n    add r2, r4, #0\n    lsr r3, r3, #0x10\n    mov r0, #1\n    lsr r1, r1, #0xd\n    add r2, #0x44\n    lsl r3, r3, #3\n    bl GF_CreateNewVramTransferTask\n    ldrb r0, [r4, #3]\n    strb r0, [r4, #2]\n    b _0220625A\n    add r0, r4, #0\n    bl Heap_Free\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02206260: .word 0x0000FFFF\n    _02206264: .word 0xFFFF0000"
    );
    #endif
}

void ov01_02206268(void) {
    /* Original at 0x02206268 */
    /* Requires manual decompilation - 44 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    bl FollowMon_IsVisible\n    cmp r0, #0\n    bne _02206278\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [r5, #0x40]\n    bl PlayerAvatar_GetMapObject\n    add r5, #0xe4\n    add r4, r0, #0\n    ldr r7, [r5]\n    bl MapObject_GetXCoord\n    add r5, r0, #0\n    add r0, r4, #0\n    bl MapObject_GetZCoord\n    add r4, r0, #0\n    add r0, r7, #0\n    bl MapObject_GetXCoord\n    add r6, r0, #0\n    add r0, r7, #0\n    bl MapObject_GetZCoord\n    cmp r5, r6\n    bne _022062B4\n    add r1, r4, #1\n    cmp r1, r0\n    beq _022062B0\n    sub r1, r4, #1\n    cmp r1, r0\n    bne _022062C8\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    cmp r4, r0\n    bne _022062C8\n    add r0, r5, #1\n    cmp r0, r6\n    beq _022062C4\n    sub r0, r5, #1\n    cmp r0, r6\n    bne _022062C8\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_022062CC(void) {
    /* Original at 0x022062CC */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, [r0, #0xc]\n    bl SaveArray_Party_Get\n    bl GetIdxOfFirstAliveMonInParty_CrashIfNone\n    pop {r3, pc}"
    );
    #endif
}
