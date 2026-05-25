/* Decompiled from asm/overlay_01_022031C0.s */
#include "global.h"

void ov01_022031C0(void) {
    /* Original at 0x022031C0 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    mov r1, #5\n    mov r2, #0\n    lsl r1, r1, #6\n    add r3, r2, #0\n    add r5, r0, #0\n    bl ov01_021F1430\n    add r4, r0, #0\n    add r0, r4, #4\n    mov r1, #4\n    mov r2, #0x20\n    str r5, [r4]\n    bl HeapExp_FndInitAllocator\n    add r0, r4, #0\n    bl ov01_022031F8\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_022031E8(void) {
    ov01_02203270();
    ov01_021F1448(r4);
}

void ov01_022031F8(void) {
    /* Original at 0x022031F8 */
    /* Requires manual decompilation - 51 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #8\n    add r4, r0, #0\n    ldr r0, [r4]\n    mov r1, #0x81\n    mov r2, #0\n    bl ov01_021F14B4\n    str r0, [r4, #0x14]\n    add r0, r4, #0\n    ldr r1, [r4, #0x14]\n    add r0, #0x1c\n    bl ov01_021FBD38\n    add r0, r4, #0\n    add r1, r4, #0\n    add r0, #0x3c\n    add r1, #0x1c\n    bl Field3dObject_InitFromModel\n    ldr r0, [r4]\n    mov r1, #0x68\n    mov r2, #0\n    bl ov01_021F14B4\n    str r0, [r4, #0x18]\n    add r0, r4, #0\n    ldr r1, [r4, #0x18]\n    add r0, #0x2c\n    bl ov01_021FBD38\n    add r0, r4, #0\n    add r1, r4, #0\n    add r0, #0xb4\n    add r1, #0x2c\n    bl Field3dObject_InitFromModel\n    mov r0, #4\n    str r0, [sp]\n    add r0, r4, #4\n    str r0, [sp, #4]\n    mov r0, #0x4b\n    lsl r0, r0, #2\n    add r1, r4, #0\n    add r0, r4, r0\n    add r1, #0x2c\n    mov r2, #0x67\n    mov r3, #0xa4\n    bl Field3dModelAnimation_LoadFromFilesystem\n    mov r1, #0x4b\n    add r0, r4, #0\n    lsl r1, r1, #2\n    add r0, #0xb4\n    add r1, r4, r1\n    bl Field3dObject_AddAnimation\n    add sp, #8\n    pop {r4, pc}"
    );
    #endif
}

void ov01_02203270(void) {
    /* Original at 0x02203270 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    add r0, #0x1c\n    bl ov01_021FBDFC\n    ldr r0, [r4, #0x14]\n    bl ov01_021F1448\n    add r0, r4, #0\n    add r0, #0x2c\n    bl ov01_021FBDFC\n    ldr r0, [r4, #0x18]\n    bl ov01_021F1448\n    mov r0, #0x4b\n    lsl r0, r0, #2\n    add r0, r4, r0\n    add r1, r4, #4\n    bl Field3dModelAnimation_Unload\n    pop {r4, pc}"
    );
    #endif
}

void ov01_0220329C(void) {
    /* Original at 0x0220329C */
    /* Requires manual decompilation - 82 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x38\n    add r6, r0, #0\n    add r5, r1, #0\n    bl ov01_021F146C\n    add r4, r0, #0\n    add r0, r6, #0\n    add r1, sp, #8\n    bl MapObject_CopyPositionVector\n    mov r0, #6\n    ldr r1, [sp, #0x10]\n    lsl r0, r0, #0xc\n    add r0, r1, r0\n    str r0, [sp, #0x10]\n    mov r1, #0\n    add r0, sp, #8\n    strh r1, [r0, #0x1c]\n    strh r1, [r0, #0x1e]\n    sub r1, r1, #1\n    add r0, sp, #0x28\n    strb r1, [r0]\n    add r0, r4, #0\n    str r4, [sp, #0x18]\n    bl ov01_021F1468\n    str r0, [sp, #0x14]\n    add r0, r4, #0\n    mov r1, #0x11\n    bl ov01_021F1450\n    str r0, [sp, #0x1c]\n    add r0, r6, #0\n    add r1, sp, #0x2c\n    str r6, [sp, #0x20]\n    bl MapObject_CopyPositionVector\n    add r0, r6, #0\n    mov r1, #2\n    bl MapObject_GetPriorityPlusValue\n    cmp r5, #0\n    add r1, sp, #8\n    bne _0220330A\n    str r1, [sp]\n    str r0, [sp, #4]\n    ldr r1, _0220334C ; =ov01_022094DC\n    add r0, r4, #0\n    add r2, sp, #0x2c\n    mov r3, #1\n    bl ov01_021F1620\n    add sp, #0x38\n    pop {r4, r5, r6, pc}\n    cmp r5, #1\n    bne _02203322\n    str r1, [sp]\n    str r0, [sp, #4]\n    ldr r1, _02203350 ; =ov01_022094F0\n    add r0, r4, #0\n    add r2, sp, #0x2c\n    mov r3, #1\n    bl ov01_021F1620\n    add sp, #0x38\n    pop {r4, r5, r6, pc}\n    cmp r5, #2\n    add r2, sp, #0x2c\n    bne _0220333A\n    str r1, [sp]\n    str r0, [sp, #4]\n    ldr r1, _02203354 ; =ov01_02209504\n    add r0, r4, #0\n    mov r3, #1\n    bl ov01_021F1620\n    add sp, #0x38\n    pop {r4, r5, r6, pc}\n    str r1, [sp]\n    str r0, [sp, #4]\n    ldr r1, _02203358 ; =ov01_022094C8\n    add r0, r4, #0\n    mov r3, #1\n    bl ov01_021F1620\n    add sp, #0x38\n    pop {r4, r5, r6, pc}\n    _0220334C: .word ov01_022094DC\n    _02203350: .word ov01_022094F0\n    _02203354: .word ov01_02209504\n    _02203358: .word ov01_022094C8"
    );
    #endif
}

void ov01_0220335C(void) {
    /* Original at 0x0220335C */
    /* Requires manual decompilation - 56 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    add r4, r1, #0\n    bl sub_02068D98\n    add r3, r0, #0\n    mov r0, #0\n    add r2, r4, #0\n    str r0, [r4]\n    add r2, #0x18\n    mov r6, #4\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    sub r6, r6, #1\n    bne _02203374\n    ldr r0, [r3]\n    str r0, [r2]\n    ldr r0, [r4, #0x30]\n    bl MapObject_GetSpriteID\n    str r0, [r4, #4]\n    ldr r0, [r4, #0x30]\n    bl MapObject_GetID\n    str r0, [r4, #8]\n    ldr r0, [r4, #0x30]\n    bl MapObject_GetMapID\n    add r6, r4, #0\n    add r3, sp, #0\n    add r6, #0x18\n    str r0, [r4, #0xc]\n    ldmia r6!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldr r0, [r6]\n    add r1, r2, #0\n    str r0, [r3]\n    ldr r0, [r4, #0x24]\n    bl sub_0206121C\n    str r0, [r4, #0x14]\n    add r0, r5, #0\n    add r1, sp, #0\n    bl sub_02068DA8\n    ldr r0, [r4, #0x2c]\n    add r1, sp, #0\n    add r0, #0x3c\n    bl Field3dObject_SetPos\n    ldr r0, [r4, #0x2c]\n    add r1, sp, #0\n    add r0, #0xb4\n    bl Field3dObject_SetPos\n    ldr r0, [r4, #0x2c]\n    mov r1, #0\n    add r0, #0xb4\n    bl Field3dObject_SetActiveFlag\n    mov r0, #1\n    add sp, #0xc\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void ov01_022033E0(void) {
    /* Original at 0x022033E0 */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void ov01_022033E4(void) {
    /* Original at 0x022033E4 */
    /* Requires manual decompilation - 93 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    add r4, r1, #0\n    ldr r6, [r4, #0x30]\n    ldr r1, [r4, #4]\n    add r5, r0, #0\n    ldr r2, [r4, #8]\n    ldr r3, [r4, #0xc]\n    add r0, r6, #0\n    bl sub_0205F0F8\n    cmp r0, #0\n    bne _02203408\n    add r0, r5, #0\n    bl ov01_021F1640\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [r4, #0x14]\n    cmp r0, #0\n    bne _02203440\n    add r0, r5, #0\n    add r1, sp, #0xc\n    bl sub_02068DB8\n    add r3, r4, #0\n    add r3, #0x18\n    add r2, sp, #0\n    ldmia r3!, {r0, r1}\n    add r7, r2, #0\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    add r1, r7, #0\n    str r0, [r2]\n    ldr r0, [r4, #0x24]\n    bl sub_0206121C\n    str r0, [r4, #0x14]\n    cmp r0, #1\n    bne _02203440\n    ldr r0, [sp, #4]\n    add r1, sp, #0xc\n    str r0, [sp, #0x10]\n    add r0, r5, #0\n    bl sub_02068DA8\n    ldr r0, [r4]\n    cmp r0, #0\n    beq _02203452\n    cmp r0, #1\n    beq _02203464\n    cmp r0, #2\n    beq _02203498\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [r4, #0x10]\n    add r0, r0, #1\n    str r0, [r4, #0x10]\n    cmp r0, #2\n    blt _022034B2\n    mov r0, #1\n    add sp, #0x18\n    str r0, [r4]\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [r4, #0x2c]\n    mov r1, #0\n    add r0, #0x3c\n    bl Field3dObject_SetActiveFlag\n    ldr r0, [r4, #0x2c]\n    mov r1, #1\n    add r0, #0xb4\n    bl Field3dObject_SetActiveFlag\n    add r0, r6, #0\n    mov r1, #0\n    bl sub_02069DC8\n    add r0, r6, #0\n    bl sub_0205F484\n    mov r0, #0x4b\n    ldr r1, [r4, #0x2c]\n    lsl r0, r0, #2\n    add r0, r1, r0\n    mov r1, #0\n    bl Field3dModelAnimation_FrameSet\n    mov r0, #2\n    str r0, [r4]\n    mov r0, #0x4b\n    ldr r1, [r4, #0x2c]\n    lsl r0, r0, #2\n    add r0, r1, r0\n    mov r1, #1\n    lsl r1, r1, #0xc\n    bl Field3dModelAnimation_FrameAdvanceAndCheck\n    cmp r0, #0\n    beq _022034B2\n    add r0, r5, #0\n    bl ov01_021F1640\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_022034B8(void) {
    /* Original at 0x022034B8 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r4, r1, #0\n    add r5, r0, #0\n    ldr r0, [r4, #0x30]\n    ldr r1, [r4, #4]\n    ldr r2, [r4, #8]\n    ldr r3, [r4, #0xc]\n    bl sub_0205F0F8\n    cmp r0, #0\n    bne _022034DA\n    add r0, r5, #0\n    bl ov01_021F1640\n    add sp, #0xc\n    pop {r4, r5, pc}\n    add r0, r5, #0\n    add r1, sp, #0\n    bl sub_02068DB8\n    ldr r0, [r4, #0x2c]\n    add r0, #0x3c\n    bl Field3dObject_Draw\n    ldr r0, [r4, #0x2c]\n    add r0, #0xb4\n    bl Field3dObject_Draw\n    add sp, #0xc\n    pop {r4, r5, pc}"
    );
    #endif
}

void ov01_022034F8(void) {
    /* Original at 0x022034F8 */
    /* Requires manual decompilation - 76 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x18\n    add r4, r1, #0\n    add r5, r0, #0\n    ldr r0, [r4, #0x30]\n    ldr r1, [r4, #4]\n    ldr r2, [r4, #8]\n    ldr r3, [r4, #0xc]\n    bl sub_0205F0F8\n    cmp r0, #0\n    bne _0220351A\n    add r0, r5, #0\n    bl ov01_021F1640\n    add sp, #0x18\n    pop {r4, r5, r6, pc}\n    ldr r0, [r4, #0x14]\n    cmp r0, #0\n    bne _02203552\n    add r0, r5, #0\n    add r1, sp, #0xc\n    bl sub_02068DB8\n    add r6, r4, #0\n    add r6, #0x18\n    add r3, sp, #0\n    ldmia r6!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldr r0, [r6]\n    add r1, r2, #0\n    str r0, [r3]\n    ldr r0, [r4, #0x24]\n    bl sub_0206121C\n    str r0, [r4, #0x14]\n    cmp r0, #1\n    bne _02203552\n    ldr r0, [sp, #4]\n    add r1, sp, #0xc\n    str r0, [sp, #0x10]\n    add r0, r5, #0\n    bl sub_02068DA8\n    ldr r0, [r4]\n    cmp r0, #0\n    beq _02203560\n    cmp r0, #1\n    beq _02203586\n    add sp, #0x18\n    pop {r4, r5, r6, pc}\n    ldr r0, [r4, #0x2c]\n    mov r1, #0\n    add r0, #0x3c\n    bl Field3dObject_SetActiveFlag\n    ldr r0, [r4, #0x2c]\n    mov r1, #1\n    add r0, #0xb4\n    bl Field3dObject_SetActiveFlag\n    mov r0, #0x4b\n    ldr r1, [r4, #0x2c]\n    lsl r0, r0, #2\n    add r0, r1, r0\n    mov r1, #0\n    bl Field3dModelAnimation_FrameSet\n    mov r0, #1\n    str r0, [r4]\n    mov r0, #0x4b\n    ldr r1, [r4, #0x2c]\n    lsl r0, r0, #2\n    add r0, r1, r0\n    mov r1, #1\n    lsl r1, r1, #0xc\n    bl Field3dModelAnimation_FrameAdvanceAndCheck\n    cmp r0, #0\n    beq _022035A0\n    add r0, r5, #0\n    bl ov01_021F1640\n    add sp, #0x18\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov01_022035A4(void) {
    /* Original at 0x022035A4 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r4, r1, #0\n    add r5, r0, #0\n    ldr r0, [r4, #0x30]\n    ldr r1, [r4, #4]\n    ldr r2, [r4, #8]\n    ldr r3, [r4, #0xc]\n    bl sub_0205F0F8\n    cmp r0, #0\n    bne _022035C6\n    add r0, r5, #0\n    bl ov01_021F1640\n    add sp, #0xc\n    pop {r4, r5, pc}\n    add r0, r5, #0\n    add r1, sp, #0\n    bl sub_02068DB8\n    ldr r0, [r4, #0x2c]\n    add r0, #0xb4\n    bl Field3dObject_Draw\n    add sp, #0xc\n    pop {r4, r5, pc}"
    );
    #endif
}

void ov01_022035DC(void) {
    /* Original at 0x022035DC */
    /* Requires manual decompilation - 52 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    add r4, r1, #0\n    bl sub_02068D98\n    add r3, r0, #0\n    mov r0, #0\n    add r2, r4, #0\n    str r0, [r4]\n    add r2, #0x18\n    mov r6, #4\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    sub r6, r6, #1\n    bne _022035F4\n    ldr r0, [r3]\n    str r0, [r2]\n    ldr r0, [r4, #0x30]\n    bl MapObject_GetSpriteID\n    str r0, [r4, #4]\n    ldr r0, [r4, #0x30]\n    bl MapObject_GetID\n    str r0, [r4, #8]\n    ldr r0, [r4, #0x30]\n    bl MapObject_GetMapID\n    add r6, r4, #0\n    add r3, sp, #0\n    add r6, #0x18\n    str r0, [r4, #0xc]\n    ldmia r6!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldr r0, [r6]\n    add r1, r2, #0\n    str r0, [r3]\n    ldr r0, [r4, #0x24]\n    bl sub_0206121C\n    str r0, [r4, #0x14]\n    add r0, r5, #0\n    add r1, sp, #0\n    bl sub_02068DA8\n    ldr r0, [r4, #0x2c]\n    add r1, sp, #0\n    add r0, #0x3c\n    bl Field3dObject_SetPos\n    ldr r0, [r4, #0x2c]\n    mov r1, #0\n    add r0, #0x3c\n    bl Field3dObject_SetActiveFlag\n    mov r0, #1\n    add sp, #0xc\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void ov01_02203654(void) {
    /* Original at 0x02203654 */
    /* Requires manual decompilation - 175 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x28\n    add r5, r1, #0\n    add r4, r0, #0\n    ldr r0, [r5, #0x30]\n    ldr r1, [r5, #4]\n    ldr r2, [r5, #8]\n    ldr r3, [r5, #0xc]\n    str r0, [sp]\n    bl sub_0205F0F8\n    cmp r0, #0\n    bne _02203678\n    add r0, r4, #0\n    bl ov01_021F1640\n    add sp, #0x28\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [r5, #0x14]\n    cmp r0, #0\n    bne _022036B0\n    add r0, r4, #0\n    add r1, sp, #0x1c\n    bl sub_02068DB8\n    add r6, r5, #0\n    add r6, #0x18\n    add r3, sp, #0x10\n    ldmia r6!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldr r0, [r6]\n    add r1, r2, #0\n    str r0, [r3]\n    ldr r0, [r5, #0x24]\n    bl sub_0206121C\n    str r0, [r5, #0x14]\n    cmp r0, #1\n    bne _022036B0\n    ldr r0, [sp, #0x14]\n    add r1, sp, #0x1c\n    str r0, [sp, #0x20]\n    add r0, r4, #0\n    bl sub_02068DA8\n    ldr r0, [r5]\n    cmp r0, #0\n    beq _022036C4\n    cmp r0, #1\n    beq _0220373E\n    cmp r0, #2\n    bne _022036C0\n    b _022037C8\n    add sp, #0x28\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [r5, #0x24]\n    bl FollowMon_GetMapObject\n    add r6, r0, #0\n    ldr r0, [r5, #0x24]\n    ldr r0, [r0, #0x3c]\n    bl ov01_021F771C\n    add r7, r0, #0\n    bl sub_02023FB0\n    add r4, r0, #0\n    add r0, r7, #0\n    bl sub_02023FB0\n    add r1, r0, #0\n    ldr r3, _022037DC ; =0xFFFF0000\n    lsl r1, r1, #0x10\n    and r3, r4\n    lsr r3, r3, #0x10\n    ldr r2, _022037E0 ; =ov01_02209B18\n    mov r0, #1\n    lsr r1, r1, #0xd\n    lsl r3, r3, #3\n    bl GF_CreateNewVramTransferTask\n    add r0, r6, #0\n    bl ov01_022055DC\n    cmp r0, #0\n    beq _02203734\n    add r0, r6, #0\n    bl MapObject_GetFacingDirection\n    lsl r0, r0, #0x18\n    add r1, r5, #0\n    lsr r4, r0, #0x18\n    add r0, r6, #0\n    add r1, #0x48\n    bl MapObject_CopyPositionVector\n    add r1, r5, #0\n    add r2, r5, #0\n    add r0, r4, #0\n    add r1, #0x48\n    add r2, #0x3c\n    bl ov01_022039BC\n    ldr r0, [r5, #0x3c]\n    ldr r0, [r0]\n    str r0, [r5, #0x40]\n    add r0, r4, #0\n    bl ov01_022039E0\n    str r0, [r5, #0x44]\n    b _02203738\n    mov r0, #0\n    str r0, [r5, #0x3c]\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    ldr r3, _022037E4 ; =ov01_022094BC\n    add r2, sp, #4\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    str r0, [r2]\n    ldr r0, [r5, #0x10]\n    add r1, r0, #1\n    mov r0, #1\n    str r1, [r5, #0x10]\n    lsl r0, r0, #0xc\n    bl _s32_div_f\n    str r0, [sp, #4]\n    mov r0, #1\n    ldr r1, [r5, #0x10]\n    lsl r0, r0, #0xc\n    bl _s32_div_f\n    str r0, [sp, #8]\n    ldr r0, [r5, #0x24]\n    ldr r0, [r0, #0x3c]\n    bl ov01_021F771C\n    add r1, sp, #4\n    bl sub_02023E78\n    ldr r0, [r5, #0x3c]\n    cmp r0, #0\n    beq _022037A2\n    ldr r0, [r5, #0x24]\n    bl FollowMon_GetMapObject\n    ldr r3, [r5, #0x10]\n    ldr r2, [r5, #0x44]\n    add r4, r3, #0\n    lsl r2, r2, #0xc\n    mul r4, r2\n    asr r2, r4, #1\n    lsr r2, r2, #0x1e\n    add r2, r4, r2\n    ldr r1, [r5, #0x40]\n    asr r2, r2, #2\n    add r2, r1, r2\n    ldr r1, [r5, #0x3c]\n    str r2, [r1]\n    add r1, r5, #0\n    add r1, #0x48\n    bl MapObject_SetPositionVector\n    ldr r0, [r5, #0x10]\n    cmp r0, #4\n    blt _022037D8\n    ldr r0, [r5]\n    mov r1, #1\n    add r0, r0, #1\n    str r0, [r5]\n    ldr r0, [r5, #0x2c]\n    add r0, #0x3c\n    bl Field3dObject_SetActiveFlag\n    ldr r0, [sp]\n    mov r1, #1\n    bl MapObject_SetVisible\n    mov r0, #0\n    add sp, #0x28\n    str r0, [r5, #0x10]\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [r5, #0x10]\n    add r0, r0, #1\n    str r0, [r5, #0x10]\n    cmp r0, #4\n    blt _022037D8\n    add r0, r4, #0\n    bl ov01_021F1640\n    add sp, #0x28\n    pop {r3, r4, r5, r6, r7, pc}\n    _022037DC: .word 0xFFFF0000\n    _022037E0: .word ov01_02209B18\n    _022037E4: .word ov01_022094BC"
    );
    #endif
}

void ov01_022037E8(void) {
    /* Original at 0x022037E8 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r4, r1, #0\n    add r5, r0, #0\n    ldr r0, [r4, #0x30]\n    ldr r1, [r4, #4]\n    ldr r2, [r4, #8]\n    ldr r3, [r4, #0xc]\n    bl sub_0205F0F8\n    cmp r0, #0\n    bne _0220380A\n    add r0, r5, #0\n    bl ov01_021F1640\n    add sp, #0xc\n    pop {r4, r5, pc}\n    add r0, r5, #0\n    add r1, sp, #0\n    bl sub_02068DB8\n    ldr r0, [r4, #0x2c]\n    add r0, #0x3c\n    bl Field3dObject_Draw\n    add sp, #0xc\n    pop {r4, r5, pc}"
    );
    #endif
}

void ov01_02203820(void) {
    /* Original at 0x02203820 */
    /* Requires manual decompilation - 48 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    add r4, r1, #0\n    bl sub_02068D98\n    add r3, r0, #0\n    mov r0, #0\n    add r2, r4, #0\n    str r0, [r4]\n    add r2, #0x18\n    mov r6, #4\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    sub r6, r6, #1\n    bne _02203838\n    ldr r0, [r3]\n    str r0, [r2]\n    ldr r0, [r4, #0x30]\n    bl MapObject_GetSpriteID\n    str r0, [r4, #4]\n    ldr r0, [r4, #0x30]\n    bl MapObject_GetID\n    str r0, [r4, #8]\n    ldr r0, [r4, #0x30]\n    bl MapObject_GetMapID\n    add r6, r4, #0\n    add r3, sp, #0\n    add r6, #0x18\n    str r0, [r4, #0xc]\n    ldmia r6!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldr r0, [r6]\n    add r1, r2, #0\n    str r0, [r3]\n    add r0, r5, #0\n    bl sub_02068DA8\n    ldr r0, [r4, #0x2c]\n    add r1, sp, #0\n    add r0, #0x3c\n    bl Field3dObject_SetPos\n    ldr r0, [r4, #0x2c]\n    mov r1, #0\n    add r0, #0x3c\n    bl Field3dObject_SetActiveFlag\n    mov r0, #1\n    add sp, #0xc\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void ov01_02203890(void) {
    /* Original at 0x02203890 */
    /* Requires manual decompilation - 131 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r5, r1, #0\n    ldr r7, [r5, #0x30]\n    ldr r1, [r5, #4]\n    add r4, r0, #0\n    ldr r2, [r5, #8]\n    ldr r3, [r5, #0xc]\n    add r0, r7, #0\n    bl sub_0205F0F8\n    cmp r0, #0\n    bne _022038B4\n    add r0, r4, #0\n    bl ov01_021F1640\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    ldr r0, [r5]\n    cmp r0, #0\n    beq _022038C6\n    cmp r0, #1\n    beq _0220391C\n    cmp r0, #2\n    beq _022039A4\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    ldr r0, [r5, #0x24]\n    bl FollowMon_GetMapObject\n    add r6, r0, #0\n    ldr r0, [r5, #0x24]\n    ldr r0, [r0, #0x3c]\n    bl ov01_021F771C\n    add r0, r6, #0\n    bl ov01_022055DC\n    cmp r0, #0\n    beq _02203912\n    add r0, r6, #0\n    bl MapObject_GetFacingDirection\n    lsl r0, r0, #0x18\n    add r1, r5, #0\n    lsr r4, r0, #0x18\n    add r0, r6, #0\n    add r1, #0x48\n    bl MapObject_CopyPositionVector\n    add r1, r5, #0\n    add r2, r5, #0\n    add r0, r4, #0\n    add r1, #0x48\n    add r2, #0x3c\n    bl ov01_022039BC\n    ldr r0, [r5, #0x3c]\n    ldr r0, [r0]\n    str r0, [r5, #0x40]\n    add r0, r4, #0\n    bl ov01_022039E0\n    str r0, [r5, #0x44]\n    b _02203916\n    mov r0, #0\n    str r0, [r5, #0x3c]\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    ldr r3, _022039B8 ; =ov01_022094B0\n    add r2, sp, #0\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    str r0, [r2]\n    ldr r0, [r5, #0x10]\n    add r1, r0, #1\n    mov r0, #1\n    str r1, [r5, #0x10]\n    lsl r0, r0, #0xc\n    bl _s32_div_f\n    str r0, [sp]\n    mov r0, #1\n    ldr r1, [r5, #0x10]\n    lsl r0, r0, #0xc\n    bl _s32_div_f\n    str r0, [sp, #4]\n    ldr r0, [r5, #0x24]\n    ldr r0, [r0, #0x3c]\n    bl ov01_021F771C\n    add r1, sp, #0\n    bl sub_02023E78\n    ldr r0, [r5, #0x3c]\n    cmp r0, #0\n    beq _0220397E\n    ldr r0, [r5, #0x24]\n    bl FollowMon_GetMapObject\n    ldr r2, [r5, #0x44]\n    ldr r1, [r5, #0x10]\n    lsl r2, r2, #0xc\n    mul r2, r1\n    asr r1, r2, #1\n    lsr r1, r1, #0x1e\n    add r1, r2, r1\n    ldr r3, [r5, #0x40]\n    asr r1, r1, #2\n    add r2, r3, r1\n    ldr r1, [r5, #0x3c]\n    str r2, [r1]\n    add r1, r5, #0\n    add r1, #0x48\n    bl MapObject_SetPositionVector\n    ldr r0, [r5, #0x10]\n    cmp r0, #4\n    blt _022039B4\n    ldr r0, [r5]\n    mov r1, #1\n    add r0, r0, #1\n    str r0, [r5]\n    ldr r0, [r5, #0x2c]\n    add r0, #0x3c\n    bl Field3dObject_SetActiveFlag\n    add r0, r7, #0\n    mov r1, #1\n    bl sub_02069DC8\n    mov r0, #0\n    add sp, #0xc\n    str r0, [r5, #0x10]\n    pop {r4, r5, r6, r7, pc}\n    ldr r0, [r5, #0x10]\n    add r0, r0, #1\n    str r0, [r5, #0x10]\n    cmp r0, #0x10\n    blt _022039B4\n    add r0, r4, #0\n    bl ov01_021F1640\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    _022039B8: .word ov01_022094B0"
    );
    #endif
}

void ov01_022039BC(void) {
    /* Original at 0x022039BC */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "cmp r0, #3\n    bhi _022039DC\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _022039CC: ; jump table\n    add r1, #8\n    str r1, [r2]\n    bx lr\n    str r1, [r2]\n    bx lr"
    );
    #endif
}

void ov01_022039E0(void) {
    /* Original at 0x022039E0 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    cmp r0, #3\n    bhi _02203A0E\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _022039F2: ; jump table\n    mov r0, #0\n    mvn r0, r0\n    pop {r3, pc}\n    mov r0, #1\n    pop {r3, pc}\n    mov r0, #9\n    mvn r0, r0\n    pop {r3, pc}\n    mov r0, #0xa\n    pop {r3, pc}\n    bl GF_AssertFail\n    mov r0, #0\n    pop {r3, pc}"
    );
    #endif
}
