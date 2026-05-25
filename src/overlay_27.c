/* Decompiled from asm/overlay_27.s */
#include "global.h"

void ov27_02259F80(void) {
    /* Original at 0x02259F80 */
    /* Requires manual decompilation - 223 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r5, r2, #0\n    add r6, r0, #0\n    str r1, [sp, #0x10]\n    ldr r2, _0225A170 ; =0x00018D00\n    mov r0, #3\n    mov r1, #8\n    bl Heap_Create\n    mov r0, #0\n    bl GXS_SetGraphicsMode\n    mov r0, #0x80\n    bl GX_SetBankForSubBG\n    mov r0, #1\n    lsl r0, r0, #8\n    bl GX_SetBankForSubOBJ\n    ldr r2, _0225A174 ; =0x04001000\n    ldr r0, _0225A178 ; =0xFFCFFFEF\n    ldr r1, [r2]\n    mov r3, #0\n    and r1, r0\n    mov r0, #0x10\n    orr r0, r1\n    str r0, [r2]\n    ldr r2, _0225A17C ; =ov27_0225D000\n    add r0, r6, #0\n    mov r1, #4\n    bl InitBgFromTemplate\n    ldr r2, _0225A180 ; =ov27_0225D01C\n    add r0, r6, #0\n    mov r1, #5\n    mov r3, #0\n    bl InitBgFromTemplate\n    mov r1, #0x15\n    ldr r0, _0225A184 ; =ov27_0225A320\n    lsl r1, r1, #6\n    mov r2, #0xa\n    mov r3, #8\n    bl CreateSysTaskAndEnvironment\n    add r7, r0, #0\n    bl SysTask_GetData\n    add r4, r0, #0\n    str r7, [r4, #8]\n    mov r0, #0\n    str r0, [r4]\n    ldr r0, [sp, #0x10]\n    str r6, [r4, #4]\n    str r0, [r4, #0xc]\n    add r0, r5, #0\n    str r5, [r4, #0x10]\n    bl ov27_0225BD50\n    ldr r3, _0225A188 ; =0x0000051C\n    add r2, r0, #0\n    ldr r1, [r4, r3]\n    mov r0, #0x1e\n    bic r1, r0\n    lsl r0, r2, #0x1c\n    lsr r0, r0, #0x1b\n    orr r0, r1\n    str r0, [r4, r3]\n    ldr r1, [r4, r3]\n    mov r0, #0x20\n    bic r1, r0\n    str r1, [r4, r3]\n    mov r3, #0x3f\n    lsl r3, r3, #4\n    add r0, r4, r3\n    str r0, [sp]\n    add r2, r3, #0\n    sub r2, #0x20\n    sub r3, #0x10\n    ldr r1, [r4]\n    add r0, r6, #0\n    add r2, r4, r2\n    add r3, r4, r3\n    bl ov27_0225AC00\n    mov r0, #4\n    mov r1, #8\n    bl FontID_Alloc\n    mov r0, #8\n    bl MessageFormat_New\n    ldr r1, _0225A18C ; =0x000004AC\n    mov r2, #0xc4\n    str r0, [r4, r1]\n    mov r0, #0\n    mov r1, #0x1b\n    mov r3, #8\n    bl NewMsgDataFromNarc\n    ldr r1, _0225A190 ; =0x000004A8\n    str r0, [r4, r1]\n    add r0, r4, #0\n    bl ov27_0225C10C\n    add r1, r5, #0\n    add r1, #0xd3\n    ldrb r1, [r1]\n    add r0, r4, #0\n    bl ov27_0225C1AC\n    str r0, [r4, #0x14]\n    add r0, r4, #0\n    bl ov27_0225C1EC\n    add r0, r4, #0\n    bl ov27_0225AD0C\n    add r0, r4, #0\n    bl ov27_0225B010\n    ldr r1, [r4, #0x10]\n    add r0, r4, #0\n    add r1, #0xd2\n    ldrb r1, [r1]\n    lsl r1, r1, #0x1a\n    lsr r1, r1, #0x1a\n    bl ov27_0225BB6C\n    mov r3, #0\n    str r3, [sp]\n    mov r2, #0x3d\n    ldr r0, _0225A194 ; =0x000F0100\n    str r3, [sp, #4]\n    str r0, [sp, #8]\n    lsl r2, r2, #4\n    add r0, r4, r2\n    str r3, [sp, #0xc]\n    add r2, #0xe4\n    ldr r2, [r4, r2]\n    mov r1, #4\n    bl AddTextPrinterParameterizedWithColor\n    mov r1, #0\n    mov r2, #0x3e\n    str r1, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _0225A194 ; =0x000F0100\n    lsl r2, r2, #4\n    str r0, [sp, #8]\n    add r0, r4, r2\n    str r1, [sp, #0xc]\n    add r2, #0xe4\n    ldr r2, [r4, r2]\n    add r3, r1, #0\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r4, #0\n    bl ov27_0225BCE8\n    add r0, r4, #0\n    bl ov27_0225BC84\n    add r0, r4, #0\n    mov r1, #1\n    bl ov27_0225A690\n    add r0, r4, #0\n    bl ov27_0225C0E0\n    mov r0, #0x52\n    lsl r0, r0, #4\n    add r0, r4, r0\n    add r1, r4, #0\n    bl ov27_0225BDDC\n    mov r0, #0x43\n    lsl r0, r0, #2\n    add r0, r5, r0\n    bl MenuInputStateMgr_GetState\n    cmp r0, #0\n    bne _0225A102\n    add r0, r5, #0\n    add r0, #0xd2\n    ldrb r1, [r0]\n    mov r0, #0x80\n    add r5, #0xd2\n    bic r1, r0\n    strb r1, [r5]\n    b _0225A11A\n    add r0, r5, #0\n    bl FieldSystem_TaskIsRunning\n    cmp r0, #0\n    bne _0225A11A\n    add r0, r5, #0\n    add r0, #0xd2\n    ldrb r1, [r0]\n    mov r0, #0x80\n    add r5, #0xd2\n    orr r0, r1\n    strb r0, [r5]\n    add r0, r4, #0\n    bl ov27_0225A714\n    cmp r0, #0\n    bne _0225A12A\n    add sp, #0x14\n    add r0, r7, #0\n    pop {r4, r5, r6, r7, pc}\n    add r0, r4, #0\n    bl ov27_0225A7FC\n    ldr r0, [r4, #0x18]\n    bl SpriteList_RenderAndAnimateSprites\n    ldr r2, _0225A174 ; =0x04001000\n    ldr r0, _0225A198 ; =0xFFFF1FFF\n    ldr r1, [r2]\n    and r0, r1\n    str r0, [r2]\n    mov r0, #1\n    add r1, r0, #0\n    bl GfGfx_EngineBTogglePlanes\n    mov r0, #2\n    mov r1, #1\n    bl GfGfx_EngineBTogglePlanes\n    mov r0, #4\n    mov r1, #0\n    bl GfGfx_EngineBTogglePlanes\n    mov r0, #8\n    mov r1, #0\n    bl GfGfx_EngineBTogglePlanes\n    mov r0, #0x10\n    mov r1, #1\n    bl GfGfx_EngineBTogglePlanes\n    add r0, r7, #0\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _0225A170: .word 0x00018D00\n    _0225A174: .word 0x04001000\n    _0225A178: .word 0xFFCFFFEF\n    _0225A17C: .word ov27_0225D000\n    _0225A180: .word ov27_0225D01C\n    _0225A184: .word ov27_0225A320\n    _0225A188: .word 0x0000051C\n    _0225A18C: .word 0x000004AC\n    _0225A190: .word 0x000004A8\n    _0225A194: .word 0x000F0100\n    _0225A198: .word 0xFFFF1FFF"
    );
    #endif
}

void ov27_0225A19C(void) {
    /* Original at 0x0225A19C */
    /* Requires manual decompilation - 119 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    str r0, [sp]\n    add r0, r1, #0\n    str r1, [sp, #4]\n    bl SysTask_GetData\n    add r6, r0, #0\n    ldr r1, _0225A2B0 ; =FS_OVERLAY_ID(ds_protect)\n    mov r0, #0\n    bl FS_LoadOverlay\n    ldr r0, _0225A2B4 ; =ov27_0225C238\n    bl DSProt_DetectFlashcart\n    cmp r0, #0\n    beq _0225A1C8\n    mov r1, #0xfa\n    mov r0, #3\n    lsl r1, r1, #2\n    bl Heap_AllocAtEnd\n    mov r0, #0x52\n    lsl r0, r0, #4\n    add r0, r6, r0\n    bl ov27_0225BEB0\n    ldr r0, _0225A2B8 ; =0x000004A8\n    ldr r0, [r6, r0]\n    bl DestroyMsgData\n    ldr r0, _0225A2BC ; =0x000004AC\n    ldr r0, [r6, r0]\n    bl MessageFormat_Delete\n    mov r7, #0x55\n    mov r4, #0\n    add r5, r6, #0\n    lsl r7, r7, #2\n    ldr r0, [r5, r7]\n    bl sub_0200AEB0\n    add r4, r4, #1\n    add r5, #0x10\n    cmp r4, #0xb\n    blt _0225A1EA\n    mov r7, #0x56\n    mov r5, #0\n    add r4, r6, #0\n    lsl r7, r7, #2\n    ldr r0, [r4, r7]\n    bl sub_0200B0A8\n    add r5, r5, #1\n    add r4, #0x10\n    cmp r5, #0xb\n    blt _0225A200\n    mov r7, #0x51\n    mov r5, #0\n    add r4, r6, #0\n    lsl r7, r7, #2\n    ldr r0, [r4, r7]\n    bl Destroy2DGfxResObjMan\n    add r5, r5, #1\n    add r4, r4, #4\n    cmp r5, #4\n    blt _0225A216\n    ldr r0, _0225A2C0 ; =ov27_0225C248\n    bl DSProt_DetectNotEmulator\n    cmp r0, #0\n    bne _0225A238\n    mov r1, #0xfa\n    mov r0, #3\n    lsl r1, r1, #2\n    bl Heap_AllocAtEnd\n    ldr r0, [r6, #0x18]\n    bl SpriteList_Delete\n    mov r0, #0x3f\n    lsl r0, r0, #4\n    mov r5, #0\n    add r4, r6, r0\n    add r0, r4, #0\n    bl RemoveWindow\n    add r5, r5, #1\n    add r4, #0x10\n    cmp r5, #8\n    blt _0225A246\n    mov r0, #0x3e\n    lsl r0, r0, #4\n    add r0, r6, r0\n    bl RemoveWindow\n    mov r0, #0x3d\n    lsl r0, r0, #4\n    add r0, r6, r0\n    bl RemoveWindow\n    add r0, r6, #0\n    bl ov27_0225BC34\n    mov r0, #4\n    bl FontID_Release\n    ldr r0, [sp, #4]\n    bl DestroySysTaskAndEnvironment\n    ldr r0, [sp]\n    mov r1, #5\n    bl FreeBgTilemapBuffer\n    ldr r0, [sp]\n    mov r1, #4\n    bl FreeBgTilemapBuffer\n    mov r0, #8\n    bl Heap_Destroy\n    ldr r0, _0225A2C4 ; =ov27_0225C24C\n    bl DSProt_DetectNotDummy\n    cmp r0, #0\n    bne _0225A2A4\n    mov r1, #0xfa\n    mov r0, #3\n    lsl r1, r1, #2\n    bl Heap_AllocAtEnd\n    ldr r1, _0225A2B0 ; =FS_OVERLAY_ID(ds_protect)\n    mov r0, #0\n    bl FS_UnloadOverlay\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    _0225A2B0: .word FS_OVERLAY_ID(ds_protect)\n    _0225A2B4: .word ov27_0225C238\n    _0225A2B8: .word 0x000004A8\n    _0225A2BC: .word 0x000004AC\n    _0225A2C0: .word ov27_0225C248\n    _0225A2C4: .word ov27_0225C24C"
    );
    #endif
}

u8 ov27_0225A2C8(void) {
    return 1;
}

void ov27_0225A2CC(void) {
    /* Original at 0x0225A2CC */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    bl SysTask_GetData\n    add r4, r0, #0\n    bne _0225A2DA\n    bl GF_AssertFail\n    ldr r1, _0225A2E8 ; =0x0000051C\n    mov r0, #0x20\n    ldr r2, [r4, r1]\n    orr r0, r2\n    str r0, [r4, r1]\n    pop {r4, pc}\n    nop\n    _0225A2E8: .word 0x0000051C"
    );
    #endif
}

void ov27_0225A2EC(void) {
    /* Original at 0x0225A2EC */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r1, #0\n    bl SysTask_GetData\n    add r4, r0, #0\n    bne _0225A2FC\n    bl GF_AssertFail\n    cmp r5, #1\n    beq _0225A308\n    cmp r5, #2\n    beq _0225A308\n    bl GF_AssertFail\n    ldr r1, _0225A31C ; =0x0000051C\n    mov r0, #0xc0\n    ldr r2, [r4, r1]\n    bic r2, r0\n    lsl r0, r5, #0x1e\n    lsr r0, r0, #0x18\n    orr r0, r2\n    str r0, [r4, r1]\n    pop {r3, r4, r5, pc}\n    nop\n    _0225A31C: .word 0x0000051C"
    );
    #endif
}

void ov27_0225A320(void) {
    /* Original at 0x0225A320 */
    /* Requires manual decompilation - 142 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r1, #0\n    ldr r0, [r5, #0x10]\n    bl ov27_0225A89C\n    add r4, r0, #0\n    ldr r0, [r5, #0x10]\n    bl FieldSystem_IsPlayerMovementAllowed\n    add r6, r0, #0\n    ldr r0, [r5, #0x10]\n    add r0, #0xd2\n    ldrb r0, [r0]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x1f\n    beq _0225A366\n    cmp r6, #0\n    beq _0225A35E\n    bl IsPaletteFadeFinished\n    cmp r0, #0\n    beq _0225A35E\n    ldr r2, [r5, #0x10]\n    add r0, r2, #0\n    add r0, #0xd2\n    ldrb r1, [r0]\n    mov r0, #0x80\n    add r2, #0xd2\n    bic r1, r0\n    strb r1, [r2]\n    b _0225A36E\n    ldr r0, _0225A45C ; =0x04001050\n    mov r1, #0\n    strh r1, [r0]\n    b _0225A36E\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov27_0225A8E8\n    ldr r0, _0225A460 ; =0x0000051C\n    ldr r0, [r5, r0]\n    lsl r0, r0, #0x1a\n    lsr r0, r0, #0x1f\n    beq _0225A38A\n    ldr r0, [r5, #0x14]\n    lsl r0, r0, #2\n    add r1, r5, r0\n    mov r0, #0x39\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #2\n    bl Sprite_TryChangeAnimSeq\n    ldr r0, _0225A460 ; =0x0000051C\n    ldr r0, [r5, r0]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x1e\n    cmp r0, #1\n    bne _0225A3AE\n    mov r0, #0xeb\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #2\n    bl Sprite_SetAnimCtrlSeq\n    ldr r1, _0225A460 ; =0x0000051C\n    mov r0, #0xc0\n    ldr r2, [r5, r1]\n    bic r2, r0\n    str r2, [r5, r1]\n    b _0225A3C8\n    cmp r0, #2\n    bne _0225A3C8\n    mov r0, #0x3b\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    mov r1, #2\n    bl Sprite_SetAnimCtrlSeq\n    ldr r1, _0225A460 ; =0x0000051C\n    mov r0, #0xc0\n    ldr r2, [r5, r1]\n    bic r2, r0\n    str r2, [r5, r1]\n    ldr r0, [r5, #0x10]\n    bl FieldSystem_TaskIsRunning\n    cmp r0, #0\n    beq _0225A3DA\n    add r0, r5, #0\n    bl ov27_0225A7FC\n    b _0225A412\n    ldr r0, [r5, #0x10]\n    add r0, #0xd2\n    ldrb r0, [r0]\n    lsl r0, r0, #0x1a\n    lsr r0, r0, #0x1a\n    cmp r0, #2\n    bne _0225A3FE\n    add r0, r5, #0\n    bl ov27_0225A86C\n    ldr r2, [r5, #0x10]\n    add r0, r2, #0\n    add r0, #0xd2\n    ldrb r1, [r0]\n    mov r0, #0x3f\n    add r2, #0xd2\n    bic r1, r0\n    strb r1, [r2]\n    cmp r6, #0\n    beq _0225A408\n    add r0, r5, #0\n    bl ov27_0225A66C\n    cmp r4, #0\n    bne _0225A412\n    add r0, r5, #0\n    bl ov27_0225B4D8\n    ldr r0, _0225A464 ; =ov27_0225CECC\n    bl TouchscreenHitbox_FindRectAtTouchHeld\n    add r6, r0, #0\n    ldr r0, _0225A464 ; =ov27_0225CECC\n    bl TouchscreenHitbox_FindRectAtTouchNew\n    add r7, r0, #0\n    add r0, r5, #0\n    add r1, r6, #0\n    bl ov27_0225A530\n    ldr r0, _0225A460 ; =0x0000051C\n    ldr r0, [r5, r0]\n    lsl r0, r0, #0x1f\n    lsr r0, r0, #0x1f\n    beq _0225A44A\n    add r0, r5, #0\n    bl ov27_0225A4D0\n    cmp r0, #0\n    beq _0225A44A\n    cmp r4, #0\n    bne _0225A44A\n    add r0, r5, #0\n    add r1, r7, #0\n    bl ov27_0225A48C\n    mov r0, #0x52\n    lsl r0, r0, #4\n    add r0, r5, r0\n    bl ov27_0225BDFC\n    ldr r0, [r5, #0x18]\n    bl SpriteList_RenderAndAnimateSprites\n    pop {r3, r4, r5, r6, r7, pc}\n    _0225A45C: .word 0x04001050\n    _0225A460: .word 0x0000051C\n    _0225A464: .word ov27_0225CECC"
    );
    #endif
}

void ov27_0225A468(void) {
    /* Original at 0x0225A468 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    mov r0, #0xf1\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    lsl r2, r4, #2\n    mov r1, #0xb\n    sub r1, r1, r2\n    bl Sprite_SetAnimCtrlSeq\n    mov r0, #0xef\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    add r1, r4, #3\n    bl Sprite_SetAnimCtrlSeq\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov27_0225A48C(void) {
    /* Original at 0x0225A48C */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    cmp r1, #0\n    bne _0225A4B6\n    ldr r0, [r5, #0x10]\n    bl FieldSystem_GetPlayerAvatar\n    add r6, r0, #0\n    bl PlayerAvatar_CheckRunningShoesLock\n    add r4, r0, #0\n    mov r1, #1\n    eor r4, r1\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov27_0225A468\n    add r0, r6, #0\n    add r1, r4, #0\n    bl PlayerAvatar_SetRunningShoesLock\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov27_0225A4B8(void) {
    /* Original at 0x0225A4B8 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x10]\n    bl FieldSystem_GetPlayerAvatar\n    bl PlayerAvatar_CheckRunningShoesLock\n    add r1, r0, #0\n    add r0, r4, #0\n    bl ov27_0225A468\n    pop {r4, pc}"
    );
    #endif
}

void ov27_0225A4D0(void) {
    /* Original at 0x0225A4D0 */
    /* Requires manual decompilation - 41 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    bl ov27_0225BDC8\n    add r4, r0, #0\n    ldr r0, [r5, #0x10]\n    ldr r0, [r0, #0x40]\n    bl PlayerAvatar_GetState\n    cmp r0, #1\n    beq _0225A4F2\n    ldr r0, [r5, #0x10]\n    add r0, #0xd2\n    ldrb r0, [r0]\n    lsl r0, r0, #0x1a\n    lsr r0, r0, #0x1a\n    beq _0225A4F4\n    mov r4, #0\n    cmp r4, #0\n    beq _0225A512\n    mov r0, #0xef\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #1\n    bl Sprite_SetDrawFlag\n    mov r0, #0xf1\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #1\n    bl Sprite_SetDrawFlag\n    b _0225A52A\n    mov r0, #0xef\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    mov r0, #0xf1\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov27_0225A530(void) {
    /* Original at 0x0225A530 */
    /* Requires manual decompilation - 44 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    mov r0, #0xf\n    lsl r0, r0, #6\n    ldr r0, [r5, r0]\n    add r4, r1, #0\n    bl Sprite_GetAnimationNumber\n    add r6, r0, #0\n    mov r0, #0xf\n    lsl r0, r0, #6\n    ldr r0, [r5, r0]\n    bl Sprite_GetDrawFlag\n    cmp r0, #0\n    beq _0225A58C\n    cmp r4, #1\n    bne _0225A570\n    bl System_GetTouchNew\n    cmp r0, #0\n    beq _0225A570\n    ldr r0, _0225A590 ; =gSystem\n    mov r1, #1\n    str r1, [r0, #0x5c]\n    mov r0, #0xf\n    lsl r0, r0, #6\n    ldr r0, [r5, r0]\n    mov r1, #6\n    bl Sprite_SetAnimCtrlSeq\n    pop {r4, r5, r6, pc}\n    cmp r4, #1\n    bne _0225A580\n    cmp r6, #6\n    bne _0225A580\n    ldr r0, _0225A590 ; =gSystem\n    mov r1, #1\n    str r1, [r0, #0x5c]\n    pop {r4, r5, r6, pc}\n    mov r0, #0xf\n    lsl r0, r0, #6\n    ldr r0, [r5, r0]\n    mov r1, #5\n    bl Sprite_SetAnimCtrlSeq\n    pop {r4, r5, r6, pc}\n    nop\n    _0225A590: .word gSystem"
    );
    #endif
}

void ov27_0225A594(void) {
    /* Original at 0x0225A594 */
    /* Requires manual decompilation - 56 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r4, [r5, #0x10]\n    add r0, r4, #0\n    bl ov27_0225BD44\n    cmp r0, #0\n    beq _0225A5A8\n    mov r0, #4\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r4, #0\n    bl FieldSystem_IsPlayerMovementAllowed\n    cmp r0, #0\n    bne _0225A5E6\n    add r0, r4, #0\n    bl FieldSystem_GetPlayerAvatar\n    bl PlayerAvatar_GetMapObject\n    add r7, r0, #0\n    bl sub_0205F330\n    add r6, r0, #0\n    add r0, r7, #0\n    bl MapObject_GetSpriteID\n    sub r0, #0xbc\n    cmp r0, #1\n    bhi _0225A5DC\n    cmp r6, #1\n    bne _0225A5D8\n    mov r0, #3\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #4\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0x51\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    cmp r0, #4\n    bne _0225A61A\n    add r0, r4, #0\n    bl ov01_021E7F54\n    add r5, r0, #0\n    cmp r5, #1\n    bne _0225A618\n    add r0, r4, #0\n    add r1, sp, #0\n    bl FieldSystem_GetFacingObject\n    ldr r0, [sp]\n    bl MapObject_GetScriptID\n    bl ov01_021F6BD0\n    cmp r0, #0\n    bne _0225A616\n    ldr r0, [sp]\n    bl MapObject_GetSpriteID\n    bl ov01_021F6BB0\n    cmp r0, #0\n    beq _0225A618\n    mov r5, #0\n    add r0, r5, #0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov27_0225A61C(void) {
    /* Original at 0x0225A61C */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    mov r0, #0x3d\n    lsl r0, r0, #4\n    add r4, r1, #0\n    add r0, r5, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    ldr r6, _0225A664 ; =ov27_0225D108\n    mov r3, #0\n    ldrb r4, [r6, r4]\n    str r3, [sp]\n    mov r2, #0x3d\n    lsl r4, r4, #2\n    ldr r0, _0225A668 ; =0x000F0100\n    str r3, [sp, #4]\n    str r0, [sp, #8]\n    lsl r2, r2, #4\n    add r0, r5, r2\n    str r3, [sp, #0xc]\n    add r4, r5, r4\n    add r2, #0xe0\n    ldr r2, [r4, r2]\n    mov r1, #4\n    bl AddTextPrinterParameterizedWithColor\n    mov r0, #0xf\n    lsl r0, r0, #6\n    ldr r0, [r5, r0]\n    mov r1, #1\n    bl Sprite_SetDrawFlag\n    add sp, #0x10\n    pop {r4, r5, r6, pc}\n    _0225A664: .word ov27_0225D108\n    _0225A668: .word 0x000F0100"
    );
    #endif
}

void ov27_0225A66C(void) {
    /* Original at 0x0225A66C */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    bl ov27_0225A594\n    add r4, r0, #0\n    mov r0, #0x51\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    cmp r0, r4\n    beq _0225A68E\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov27_0225A61C\n    mov r0, #0x51\n    lsl r0, r0, #4\n    str r4, [r5, r0]\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov27_0225A690(void) {
    /* Original at 0x0225A690 */
    /* Requires manual decompilation - 56 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    cmp r1, #0\n    beq _0225A6C0\n    ldr r2, _0225A710 ; =0x0000051C\n    mov r1, #1\n    ldr r3, [r4, r2]\n    bic r3, r1\n    mov r1, #1\n    orr r1, r3\n    str r1, [r4, r2]\n    bl ov27_0225A4D0\n    add r0, r4, #0\n    mov r1, #1\n    bl ov27_0225A9C0\n    mov r0, #0xf\n    lsl r0, r0, #6\n    ldr r0, [r4, r0]\n    mov r1, #1\n    bl Sprite_SetDrawFlag\n    pop {r4, pc}\n    ldr r1, _0225A710 ; =0x0000051C\n    mov r0, #1\n    ldr r2, [r4, r1]\n    bic r2, r0\n    mov r0, #0x3d\n    lsl r0, r0, #4\n    str r2, [r4, r1]\n    add r0, r4, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r0, #0x3d\n    lsl r0, r0, #4\n    add r0, r4, r0\n    bl CopyWindowToVram\n    mov r0, #0xf\n    lsl r0, r0, #6\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    mov r0, #0xef\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    mov r0, #0xf1\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    add r0, r4, #0\n    mov r1, #0\n    bl ov27_0225A9C0\n    pop {r4, pc}\n    nop\n    _0225A710: .word 0x0000051C"
    );
    #endif
}

void ov27_0225A714(void) {
    /* Original at 0x0225A714 */
    /* Requires manual decompilation - 73 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0xc]\n    cmp r0, #0\n    bne _0225A722\n    bl GF_AssertFail\n    ldr r4, [r5, #0x10]\n    ldr r6, [r5, #0xc]\n    add r0, r4, #0\n    add r0, #0xd2\n    ldrb r0, [r0]\n    lsl r0, r0, #0x1a\n    lsr r0, r0, #0x1a\n    cmp r0, #4\n    bne _0225A75C\n    mov r0, #0x43\n    lsl r0, r0, #2\n    add r0, r4, r0\n    bl MenuInputStateMgr_GetState\n    cmp r0, #0\n    bne _0225A74C\n    add r0, r5, #0\n    mov r1, #1\n    bl ov27_0225A8E8\n    b _0225A7AC\n    add r0, r4, #0\n    add r0, #0xd2\n    ldrb r1, [r0]\n    mov r0, #0x3f\n    add r4, #0xd2\n    bic r1, r0\n    strb r1, [r4]\n    b _0225A7AC\n    cmp r0, #3\n    bne _0225A7AC\n    mov r0, #0x43\n    lsl r0, r0, #2\n    add r0, r4, r0\n    bl MenuInputStateMgr_GetState\n    cmp r0, #1\n    bne _0225A792\n    mov r0, #1\n    strh r0, [r6]\n    add r0, r4, #0\n    add r0, #0xd2\n    ldrb r1, [r0]\n    mov r0, #0x3f\n    bic r1, r0\n    add r0, r4, #0\n    add r0, #0xd2\n    strb r1, [r0]\n    add r0, r4, #0\n    add r0, #0xd2\n    ldrb r1, [r0]\n    mov r0, #0x80\n    add r4, #0xd2\n    orr r0, r1\n    strb r0, [r4]\n    b _0225A7AC\n    ldr r1, [r5, #0x14]\n    add r0, r5, #0\n    bl ov27_0225B398\n    add r0, r4, #0\n    add r0, #0xd2\n    ldrb r1, [r0]\n    mov r0, #0x3f\n    add r4, #0xd2\n    bic r1, r0\n    mov r0, #1\n    orr r0, r1\n    strb r0, [r4]\n    mov r0, #1\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov27_0225A7B0(void) {
    /* Original at 0x0225A7B0 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x10]\n    bl sub_0203DF8C\n    cmp r0, #1\n    bne _0225A7C4\n    add r0, r4, #0\n    bl ov27_0225A66C\n    ldr r0, _0225A7D8 ; =0x0000051C\n    ldr r0, [r4, r0]\n    lsl r0, r0, #0x1b\n    lsr r0, r0, #0x1c\n    bne _0225A7D4\n    add r0, r4, #0\n    bl ov27_0225AAD4\n    pop {r4, pc}\n    nop\n    _0225A7D8: .word 0x0000051C"
    );
    #endif
}

void ov27_0225A7DC(void) {
    /* Original at 0x0225A7DC */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x14]\n    cmp r0, #7\n    blt _0225A7EA\n    bl GF_AssertFail\n    ldr r1, [r4, #0x14]\n    add r0, r4, #0\n    bl ov27_0225B398\n    add r0, r4, #0\n    mov r1, #0\n    bl ov27_0225A690\n    pop {r4, pc}"
    );
    #endif
}

void ov27_0225A7FC(void) {
    /* Original at 0x0225A7FC */
    /* Requires manual decompilation - 46 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r1, [r4, #0x10]\n    add r2, r1, #0\n    add r2, #0xd2\n    ldrb r2, [r2]\n    lsl r2, r2, #0x1a\n    lsr r2, r2, #0x1a\n    cmp r2, #4\n    bhi _0225A866\n    add r2, r2, r2\n    add r2, pc\n    ldrh r2, [r2, #6]\n    lsl r2, r2, #0x10\n    asr r2, r2, #0x10\n    add pc, r2\n    _0225A81C: ; jump table\n    bl ov27_0225A7B0\n    pop {r4, pc}\n    bl ov27_0225A7DC\n    ldr r2, [r4, #0x10]\n    add r0, r2, #0\n    add r0, #0xd2\n    ldrb r1, [r0]\n    mov r0, #0x3f\n    add r2, #0xd2\n    bic r1, r0\n    mov r0, #2\n    orr r0, r1\n    strb r0, [r2]\n    pop {r4, pc}\n    ldr r0, [r1, #0x6c]\n    cmp r0, #0\n    beq _0225A86A\n    bl IsPaletteFadeFinished\n    cmp r0, #0\n    beq _0225A86A\n    add r0, r4, #0\n    bl ov27_0225B4D8\n    cmp r0, #0\n    beq _0225A86A\n    add r0, r4, #0\n    bl ov27_0225B404\n    pop {r4, pc}\n    bl GF_AssertFail\n    pop {r4, pc}"
    );
    #endif
}

void ov27_0225A86C(void) {
    /* Original at 0x0225A86C */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov27_0225A594\n    add r1, r0, #0\n    add r0, r4, #0\n    bl ov27_0225A61C\n    mov r1, #0\n    add r0, r4, #0\n    mvn r1, r1\n    bl ov27_0225B398\n    mov r0, #0x3d\n    lsl r0, r0, #4\n    add r0, r4, r0\n    bl CopyWindowToVram\n    add r0, r4, #0\n    mov r1, #1\n    bl ov27_0225A690\n    pop {r4, pc}"
    );
    #endif
}

void ov27_0225A89C(void) {
    /* Original at 0x0225A89C */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl IsPaletteFadeFinished\n    cmp r0, #0\n    beq _0225A8E0\n    ldr r0, [r4, #0x6c]\n    cmp r0, #0\n    beq _0225A8E0\n    add r0, r4, #0\n    add r0, #0xd2\n    ldrb r0, [r0]\n    lsl r0, r0, #0x1a\n    lsr r0, r0, #0x1a\n    bne _0225A8E0\n    add r0, r4, #0\n    bl FieldSystem_IsPlayerMovementAllowed\n    cmp r0, #0\n    beq _0225A8E0\n    add r0, r4, #0\n    bl ov27_0225BD44\n    cmp r0, #0\n    bne _0225A8E0\n    add r0, r4, #0\n    bl MapSceneScriptCheck\n    cmp r0, #0\n    bne _0225A8E0\n    bl sub_02058AA0\n    cmp r0, #0\n    beq _0225A8E4\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}"
    );
    #endif
}

void ov27_0225A8E8(void) {
    /* Original at 0x0225A8E8 */
    /* Requires manual decompilation - 95 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    add r4, r0, #0\n    cmp r1, #0\n    beq _0225A9AE\n    ldr r1, _0225A9B8 ; =0x0000051C\n    ldr r1, [r4, r1]\n    lsl r1, r1, #0x1b\n    lsr r1, r1, #0x1c\n    cmp r1, #5\n    bne _0225A912\n    ldr r1, [r4, #0x10]\n    add r1, #0xd2\n    ldrb r1, [r1]\n    lsl r1, r1, #0x1a\n    lsr r1, r1, #0x1a\n    bne _0225A912\n    mov r1, #0\n    mvn r1, r1\n    bl ov27_0225B398\n    mov r0, #0xef\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #1\n    bl Sprite_SetOamMode\n    mov r0, #0xf1\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #1\n    bl Sprite_SetOamMode\n    mov r0, #0xeb\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #1\n    bl Sprite_SetOamMode\n    mov r0, #0xed\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #1\n    bl Sprite_SetOamMode\n    mov r0, #0x3b\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #1\n    bl Sprite_SetOamMode\n    mov r0, #0xee\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #1\n    bl Sprite_SetOamMode\n    ldr r0, [r4, #0x10]\n    add r0, #0xd2\n    ldrb r0, [r0]\n    lsl r0, r0, #0x1a\n    lsr r0, r0, #0x1a\n    beq _0225A974\n    mov r0, #0x39\n    lsl r0, r0, #4\n    ldr r1, [r4, #0x14]\n    add r0, r4, r0\n    bl ov27_0225B4AC\n    b _0225A982\n    mov r0, #0x39\n    lsl r0, r0, #4\n    mov r1, #0\n    add r0, r4, r0\n    mvn r1, r1\n    bl ov27_0225B4AC\n    ldr r0, _0225A9B8 ; =0x0000051C\n    ldr r0, [r4, r0]\n    lsl r0, r0, #0x1b\n    lsr r0, r0, #0x1c\n    cmp r0, #2\n    bne _0225A99A\n    mov r0, #0xea\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl Sprite_SetOamMode\n    mov r0, #9\n    str r0, [sp]\n    ldr r0, _0225A9BC ; =0x04001050\n    mov r1, #0\n    mov r2, #0x23\n    mov r3, #6\n    bl G2x_SetBlendAlpha_\n    add sp, #4\n    pop {r3, r4, pc}\n    ldr r0, _0225A9BC ; =0x04001050\n    mov r1, #0\n    strh r1, [r0]\n    add sp, #4\n    pop {r3, r4, pc}\n    _0225A9B8: .word 0x0000051C\n    _0225A9BC: .word 0x04001050"
    );
    #endif
}

void ov27_0225A9C0(void) {
    /* Original at 0x0225A9C0 */
    /* Requires manual decompilation - 68 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl ov27_0225BDAC\n    cmp r0, #0\n    bne _0225A9D0\n    mov r4, #0\n    cmp r4, #0\n    beq _0225AA2E\n    ldr r0, [r5, #0x10]\n    ldr r0, [r0, #0xc]\n    bl Save_Bag_Get\n    add r4, r0, #0\n    bl Bag_GetRegisteredItem1\n    cmp r0, #0\n    beq _0225A9EA\n    mov r6, #1\n    b _0225A9EC\n    mov r6, #0\n    add r0, r4, #0\n    bl Bag_GetRegisteredItem2\n    cmp r0, #0\n    beq _0225A9FA\n    mov r4, #1\n    b _0225A9FC\n    mov r4, #0\n    mov r0, #0xeb\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    add r1, r6, #0\n    bl Sprite_SetDrawFlag\n    mov r0, #0xed\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    add r1, r6, #0\n    bl Sprite_SetDrawFlag\n    mov r0, #0x3b\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    add r1, r4, #0\n    bl Sprite_SetDrawFlag\n    mov r0, #0xee\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    add r1, r4, #0\n    bl Sprite_SetDrawFlag\n    pop {r4, r5, r6, pc}\n    mov r0, #0xeb\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    mov r0, #0xed\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    mov r0, #0x3b\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    mov r0, #0xee\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov27_0225AA60(void) {
    /* Original at 0x0225AA60 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    mov r4, #0\n    add r3, r4, #0\n    cmp r1, #0\n    ble _0225AA74\n    ldrb r2, [r0, r3]\n    add r3, r3, #1\n    add r4, r4, r2\n    cmp r3, r1\n    blt _0225AA6A\n    lsl r0, r4, #0x18\n    lsr r0, r0, #0x18\n    pop {r3, r4}\n    bx lr"
    );
    #endif
}

void ov27_0225AA7C(void) {
    /* Original at 0x0225AA7C */
    /* Requires manual decompilation - 38 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    ldr r7, _0225AACC ; =0x00000514\n    mov r4, #0\n    add r5, r6, #0\n    mov r0, #0x39\n    add r1, r6, r4\n    lsl r0, r0, #4\n    ldrb r1, [r1, r7]\n    ldr r0, [r5, r0]\n    bl Sprite_SetDrawFlag\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #7\n    blt _0225AA86\n    ldr r0, _0225AAD0 ; =0x0000050C\n    mov r1, #1\n    strb r1, [r6, r0]\n    add r0, r6, #0\n    bl ov27_0225BDC8\n    cmp r0, #0\n    bne _0225AACA\n    mov r0, #0xef\n    lsl r0, r0, #2\n    ldr r0, [r6, r0]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    mov r0, #0xf1\n    lsl r0, r0, #2\n    ldr r0, [r6, r0]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    ldr r0, _0225AAD0 ; =0x0000050C\n    mov r1, #0\n    strb r1, [r6, r0]\n    pop {r3, r4, r5, r6, r7, pc}\n    _0225AACC: .word 0x00000514\n    _0225AAD0: .word 0x0000050C"
    );
    #endif
}

void ov27_0225AAD4(void) {
    /* Original at 0x0225AAD4 */
    /* Requires manual decompilation - 134 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    ldr r0, _0225ABF4 ; =0x00000514\n    mov r1, #7\n    add r0, r5, r0\n    bl ov27_0225AA60\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0x3f\n    lsl r0, r0, #4\n    add r0, r5, r0\n    ldr r4, _0225ABF8 ; =ov27_0225CF10\n    mov r6, #0\n    add r7, r5, #0\n    str r0, [sp, #0xc]\n    ldr r0, [r5, #0x10]\n    add r1, r6, #0\n    bl FieldSystem_ShouldDrawStartMenuIcon\n    cmp r0, #1\n    bne _0225AB62\n    ldr r0, _0225ABF4 ; =0x00000514\n    add r1, r5, r6\n    ldrb r0, [r1, r0]\n    str r1, [sp]\n    cmp r0, #0\n    bne _0225AB62\n    ldrh r0, [r4]\n    lsl r0, r0, #2\n    add r1, r5, r0\n    mov r0, #0x39\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #1\n    bl Sprite_SetDrawFlag\n    ldrh r0, [r4]\n    lsl r0, r0, #2\n    add r1, r5, r0\n    mov r0, #0x39\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    ldrh r1, [r4, #2]\n    bl Sprite_SetAnimCtrlSeq\n    ldrb r0, [r4, #4]\n    lsl r1, r0, #4\n    ldr r0, [sp, #0xc]\n    add r0, r0, r1\n    bl CopyWindowToVram\n    ldr r1, [sp]\n    ldr r0, _0225ABF4 ; =0x00000514\n    mov r2, #1\n    strb r2, [r1, r0]\n    add r1, r2, #0\n    sub r0, #0xa4\n    strb r1, [r7, r0]\n    ldr r0, [r5, #0x10]\n    add r1, r0, #0\n    add r1, #0xd2\n    ldrb r2, [r1]\n    mov r1, #0x80\n    add r0, #0xd2\n    orr r1, r2\n    strb r1, [r0]\n    ldr r0, [sp, #8]\n    add r0, r0, #1\n    str r0, [sp, #8]\n    add r6, r6, #1\n    add r4, r4, #6\n    add r7, #8\n    cmp r6, #7\n    blt _0225AAF6\n    ldr r0, [sp, #8]\n    cmp r0, #0\n    beq _0225AB8E\n    ldr r0, [sp, #4]\n    cmp r0, #0\n    bne _0225AB8E\n    mov r0, #0xf2\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #1\n    bl Sprite_SetDrawFlag\n    mov r0, #0x3e\n    lsl r0, r0, #4\n    add r0, r5, r0\n    bl CopyWindowToVram\n    ldr r1, [sp, #4]\n    ldr r0, [sp, #8]\n    cmp r1, r0\n    beq _0225ABB2\n    ldr r0, [r5, #0x10]\n    mov r1, #0\n    add r0, #0xd3\n    strb r1, [r0]\n    ldr r1, [r5, #0x10]\n    add r0, r5, #0\n    add r1, #0xd3\n    ldrb r1, [r1]\n    bl ov27_0225C1AC\n    str r0, [r5, #0x14]\n    add r0, r5, #0\n    bl ov27_0225C1EC\n    add r0, r5, #0\n    bl ov27_0225BDC8\n    cmp r0, #1\n    bne _0225ABEE\n    ldr r0, _0225ABFC ; =0x0000050C\n    ldrb r0, [r5, r0]\n    cmp r0, #0\n    bne _0225ABEE\n    mov r0, #0xef\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #1\n    bl Sprite_SetDrawFlag\n    mov r0, #0xf1\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #1\n    bl Sprite_SetDrawFlag\n    mov r0, #0xef\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #0xa\n    bl Sprite_SetAnimCtrlSeq\n    ldr r0, _0225ABFC ; =0x0000050C\n    mov r1, #1\n    strb r1, [r5, r0]\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0225ABF4: .word 0x00000514\n    _0225ABF8: .word ov27_0225CF10\n    _0225ABFC: .word 0x0000050C"
    );
    #endif
}

void ov27_0225AC00(void) {
    /* Original at 0x0225AC00 */
    /* Requires manual decompilation - 121 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    str r0, [sp, #0x14]\n    add r4, r1, #0\n    mov r0, #0xc\n    mul r4, r0\n    mov r0, #0\n    str r0, [sp]\n    ldr r1, _0225ACFC ; =ov27_0225CEF0\n    str r0, [sp, #4]\n    mov r0, #1\n    add r5, r2, #0\n    str r0, [sp, #8]\n    mov r0, #8\n    add r6, r3, #0\n    str r0, [sp, #0xc]\n    ldr r1, [r1, r4]\n    ldr r2, [sp, #0x14]\n    mov r0, #0xe\n    mov r3, #4\n    bl GfGfxLoader_LoadCharData\n    mov r0, #0\n    str r0, [sp]\n    ldr r1, _0225AD00 ; =ov27_0225CEF4\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #8\n    str r0, [sp, #0xc]\n    ldr r1, [r1, r4]\n    ldr r2, [sp, #0x14]\n    mov r0, #0xe\n    mov r3, #4\n    bl GfGfxLoader_LoadScrnData\n    mov r0, #2\n    ldr r1, _0225AD04 ; =ov27_0225CEEC\n    lsl r0, r0, #8\n    str r0, [sp]\n    mov r0, #8\n    str r0, [sp, #4]\n    ldr r1, [r1, r4]\n    mov r0, #0xe\n    mov r2, #4\n    mov r3, #0\n    bl GfGfxLoader_GXLoadPal\n    mov r0, #0x14\n    str r0, [sp]\n    mov r0, #8\n    str r0, [sp, #4]\n    mov r0, #2\n    str r0, [sp, #8]\n    mov r0, #4\n    str r0, [sp, #0xc]\n    mov r0, #0xd2\n    str r0, [sp, #0x10]\n    ldr r0, [sp, #0x14]\n    add r1, r5, #0\n    mov r2, #5\n    mov r3, #0x18\n    bl AddWindowParameterized\n    add r0, r5, #0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #0xa\n    str r0, [sp, #4]\n    mov r0, #2\n    str r0, [sp, #8]\n    mov r0, #4\n    str r0, [sp, #0xc]\n    mov r0, #0xe2\n    str r0, [sp, #0x10]\n    ldr r0, [sp, #0x14]\n    add r1, r6, #0\n    mov r2, #5\n    mov r3, #9\n    bl AddWindowParameterized\n    add r0, r6, #0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    ldr r4, _0225AD08 ; =ov27_0225D074\n    ldr r5, [sp, #0x30]\n    mov r7, #0\n    mov r6, #0xf6\n    ldr r0, [r4, #4]\n    add r1, r5, #0\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #9\n    str r0, [sp, #4]\n    mov r0, #2\n    str r0, [sp, #8]\n    mov r0, #4\n    str r0, [sp, #0xc]\n    lsl r0, r6, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp, #0x10]\n    ldr r3, [r4]\n    ldr r0, [sp, #0x14]\n    lsl r3, r3, #0x18\n    mov r2, #5\n    lsr r3, r3, #0x18\n    bl AddWindowParameterized\n    add r0, r5, #0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    add r7, r7, #1\n    add r6, #0x12\n    add r4, #8\n    add r5, #0x10\n    cmp r7, #8\n    blt _0225ACB8\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0225ACFC: .word ov27_0225CEF0\n    _0225AD00: .word ov27_0225CEF4\n    _0225AD04: .word ov27_0225CEEC\n    _0225AD08: .word ov27_0225D074"
    );
    #endif
}

void ov27_0225AD0C(void) {
    /* Original at 0x0225AD0C */
    /* Requires manual decompilation - 173 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r5, r0, #0\n    add r1, r5, #0\n    mov r0, #0x10\n    add r1, #0x1c\n    mov r2, #8\n    bl G2dRenderer_Init\n    str r0, [r5, #0x18]\n    add r0, r5, #0\n    mov r2, #1\n    add r0, #0x1c\n    mov r1, #0\n    lsl r2, r2, #0x14\n    bl G2dRenderer_SetSubSurfaceCoords\n    mov r7, #0x51\n    mov r6, #0\n    add r4, r5, #0\n    lsl r7, r7, #2\n    mov r0, #0xb\n    add r1, r6, #0\n    mov r2, #8\n    bl Create2DGfxResObjMan\n    str r0, [r4, r7]\n    add r6, r6, #1\n    add r4, r4, #4\n    cmp r6, #4\n    blt _0225AD36\n    mov r0, #0x55\n    lsl r0, r0, #2\n    mov r4, #0\n    add r6, r5, r0\n    ldr r0, [r5, #0x10]\n    ldr r0, [r0, #0xc]\n    bl Save_PlayerData_GetProfile\n    bl PlayerProfile_GetTrainerGender\n    add r7, r0, #0\n    ldr r0, [r5, #0x10]\n    ldr r0, [r0, #0xc]\n    bl Save_Bag_Get\n    add r1, r4, #0\n    add r1, #0x64\n    str r1, [sp]\n    str r7, [sp, #4]\n    str r0, [sp, #8]\n    ldr r0, _0225AE84 ; =0x0000051C\n    mov r1, #0x51\n    ldr r0, [r5, r0]\n    lsl r1, r1, #2\n    lsl r0, r0, #0x1b\n    lsr r0, r0, #0x1c\n    str r0, [sp, #0xc]\n    ldr r0, [r5, #0x10]\n    add r1, r5, r1\n    add r2, r6, #0\n    add r3, r4, #0\n    bl ov27_0225AEA8\n    add r4, r4, #1\n    add r6, #0x10\n    cmp r4, #0xb\n    blt _0225AD52\n    mov r1, #0x64\n    str r1, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    mov r0, #8\n    add r1, #0xe8\n    str r0, [sp, #8]\n    ldr r0, [r5, r1]\n    mov r1, #0xe\n    mov r2, #0x10\n    mov r3, #1\n    bl AddCellOrAnimResObjFromNarc\n    mov r1, #0x57\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    mov r1, #0x64\n    str r1, [sp]\n    mov r0, #3\n    str r0, [sp, #4]\n    mov r0, #8\n    add r1, #0xec\n    str r0, [sp, #8]\n    ldr r0, [r5, r1]\n    mov r1, #0xe\n    mov r2, #0x11\n    mov r3, #1\n    bl AddCellOrAnimResObjFromNarc\n    mov r1, #0x16\n    lsl r1, r1, #4\n    str r0, [r5, r1]\n    mov r1, #0x65\n    str r1, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    mov r0, #8\n    add r1, #0xe7\n    str r0, [sp, #8]\n    ldr r0, [r5, r1]\n    mov r1, #0xe\n    mov r2, #0x44\n    mov r3, #1\n    bl AddCellOrAnimResObjFromNarc\n    mov r1, #0x5b\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    mov r1, #0x65\n    str r1, [sp]\n    mov r0, #3\n    str r0, [sp, #4]\n    mov r0, #8\n    add r1, #0xeb\n    str r0, [sp, #8]\n    ldr r0, [r5, r1]\n    mov r1, #0xe\n    mov r2, #0x45\n    mov r3, #1\n    bl AddCellOrAnimResObjFromNarc\n    mov r1, #0x17\n    lsl r1, r1, #4\n    str r0, [r5, r1]\n    mov r1, #0x66\n    str r1, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    mov r0, #8\n    add r1, #0xe6\n    str r0, [sp, #8]\n    ldr r0, [r5, r1]\n    mov r1, #0xe\n    mov r2, #0x36\n    mov r3, #1\n    bl AddCellOrAnimResObjFromNarc\n    mov r1, #0x5f\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    mov r1, #0x66\n    str r1, [sp]\n    mov r0, #3\n    str r0, [sp, #4]\n    mov r0, #8\n    add r1, #0xea\n    str r0, [sp, #8]\n    ldr r0, [r5, r1]\n    mov r1, #0xe\n    mov r2, #0x37\n    mov r3, #1\n    bl AddCellOrAnimResObjFromNarc\n    mov r1, #6\n    lsl r1, r1, #6\n    str r0, [r5, r1]\n    mov r0, #0xe\n    add r1, r0, #0\n    add r2, sp, #0x10\n    mov r3, #8\n    bl GfGfxLoader_GetPlttData\n    add r4, r0, #0\n    ldr r0, [sp, #0x10]\n    mov r1, #0x40\n    ldr r0, [r0, #0xc]\n    bl DC_FlushRange\n    ldr r0, [sp, #0x10]\n    ldr r1, _0225AE88 ; =0x000004CC\n    ldr r0, [r0, #0xc]\n    add r1, r5, r1\n    mov r2, #0x40\n    bl MIi_CpuCopyFast\n    add r0, r4, #0\n    bl Heap_Free\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    _0225AE84: .word 0x0000051C\n    _0225AE88: .word 0x000004CC"
    );
    #endif
}

void ov27_0225AE8C(void) {
    /* Original at 0x0225AE8C */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "cmp r0, #1\n    bne _0225AE94\n    mov r0, #5\n    bx lr\n    cmp r0, #3\n    bne _0225AE9E\n    mov r0, #0x7d\n    lsl r0, r0, #2\n    bx lr\n    ldr r0, _0225AEA4 ; =0x000001F3\n    bx lr\n    nop\n    _0225AEA4: .word 0x000001F3"
    );
    #endif
}

void ov27_0225AEA8(void) {
    /* Original at 0x0225AEA8 */
    /* Requires manual decompilation - 156 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x24\n    mov ip, r0\n    ldr r0, [sp, #0x44]\n    str r1, [sp, #0x10]\n    lsl r1, r0, #3\n    ldr r0, _0225B004 ; =ov27_0225CFC8\n    add r5, r3, #0\n    add r0, r0, r1\n    ldrb r1, [r5, r0]\n    mov r0, #1\n    mov r6, #0xe ; NARC_a_0_1_4\n    add r4, r2, #0\n    mov r2, #0x12\n    ldr r7, [sp, #0x40]\n    str r6, [sp, #0x20]\n    str r0, [sp, #0x1c]\n    str r0, [sp, #0x18]\n    cmp r1, #0xd\n    beq _0225AF22\n    cmp r1, #2\n    bne _0225AEDE\n    ldr r0, [sp, #0x3c]\n    cmp r0, #1\n    bne _0225AEDE\n    mov r2, #0x1b\n    b _0225AF22\n    ldr r0, _0225B008 ; =ov27_0225CF94\n    lsl r1, r1, #2\n    ldrh r2, [r0, r1]\n    ldr r0, _0225B00C ; =0x0000FFFF\n    cmp r2, r0\n    bne _0225AF22\n    mov r0, ip\n    bl FieldSystem_BugContest_Get\n    str r0, [sp, #0x14]\n    cmp r0, #0\n    bne _0225AEFA\n    bl GF_AssertFail\n    ldr r0, [sp, #0x14]\n    ldrb r0, [r0, #0x17]\n    lsl r0, r0, #0x1f\n    lsr r0, r0, #0x1f\n    beq _0225AF20\n    mov r0, #0\n    str r0, [sp, #0x1c]\n    mov r0, #3\n    mov r6, #0x14 ; NARC_poketool_icongra_poke_icon\n    str r0, [sp, #0x18]\n    bl sub_02074490\n    str r0, [sp, #0x20]\n    ldr r0, [sp, #0x14]\n    ldr r0, [r0, #0x10]\n    bl Pokemon_GetIconNaix\n    add r2, r0, #0\n    b _0225AF22\n    mov r2, #0x12\n    cmp r5, #7\n    bne _0225AF4A\n    mov r0, #0\n    str r0, [sp, #0x1c]\n    add r0, r7, #0\n    mov r6, #0x12 ; NARC_itemtool_itemdata_item_icon\n    bl Bag_GetRegisteredItem1\n    mov r1, #2\n    bl GetItemIndexMapping\n    str r0, [sp, #0x20]\n    add r0, r7, #0\n    bl Bag_GetRegisteredItem1\n    mov r1, #1\n    bl GetItemIndexMapping\n    add r2, r0, #0\n    b _0225AFAC\n    cmp r5, #8\n    bne _0225AF72\n    mov r0, #0\n    str r0, [sp, #0x1c]\n    add r0, r7, #0\n    mov r6, #0x12 ; NARC_itemtool_itemdata_item_icon\n    bl Bag_GetRegisteredItem2\n    mov r1, #2\n    bl GetItemIndexMapping\n    str r0, [sp, #0x20]\n    add r0, r7, #0\n    bl Bag_GetRegisteredItem2\n    mov r1, #1\n    bl GetItemIndexMapping\n    add r2, r0, #0\n    b _0225AFAC\n    cmp r5, #9\n    bne _0225AF82\n    mov r0, #7\n    str r0, [sp, #0x20]\n    mov r0, #4\n    mov r2, #0x46\n    str r0, [sp, #0x18]\n    b _0225AFAC\n    cmp r5, #0xa\n    bne _0225AFAC\n    ldr r0, [sp, #0x44]\n    bl ov27_0225AE8C\n    add r5, r0, #0\n    mov r0, #0\n    str r0, [sp, #0x1c]\n    lsl r0, r5, #0x10\n    lsr r0, r0, #0x10\n    mov r1, #2\n    mov r6, #0x12 ; NARC_itemtool_itemdata_item_icon\n    bl GetItemIndexMapping\n    str r0, [sp, #0x20]\n    lsl r0, r5, #0x10\n    lsr r0, r0, #0x10\n    mov r1, #1\n    bl GetItemIndexMapping\n    add r2, r0, #0\n    ldr r0, [sp, #0x38]\n    ldr r3, [sp, #0x1c]\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    mov r0, #8\n    str r0, [sp, #8]\n    ldr r0, [sp, #0x10]\n    add r1, r6, #0\n    ldr r0, [r0]\n    bl AddCharResObjFromNarc\n    str r0, [r4]\n    ldr r0, [sp, #0x38]\n    ldr r2, [sp, #0x20]\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x18]\n    add r1, r6, #0\n    str r0, [sp, #8]\n    mov r0, #8\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #0x10]\n    mov r3, #0\n    ldr r0, [r0, #4]\n    bl AddPlttResObjFromNarc\n    str r0, [r4, #4]\n    ldr r0, [r4]\n    bl sub_0200ADA4\n    ldr r0, [r4]\n    bl sub_0200A740\n    ldr r0, [r4, #4]\n    bl sub_0200B00C\n    ldr r0, [r4, #4]\n    bl sub_0200A740\n    add sp, #0x24\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _0225B004: .word ov27_0225CFC8\n    _0225B008: .word ov27_0225CF94\n    _0225B00C: .word 0x0000FFFF"
    );
    #endif
}

void ov27_0225B010(void) {
    /* Original at 0x0225B010 */
    /* Requires manual decompilation - 363 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x6c\n    add r5, r0, #0\n    mov r0, #0x81\n    lsl r0, r0, #2\n    ldr r4, _0225B350 ; =ov27_0225CF3C\n    mov r7, #0\n    add r6, r5, r0\n    ldr r3, [r4]\n    mov r0, #0\n    str r3, [sp]\n    mvn r0, r0\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    str r0, [sp, #0x10]\n    mov r0, #0x51\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    add r1, r7, #0\n    str r0, [sp, #0x14]\n    mov r0, #0x52\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    add r1, #0x64\n    str r0, [sp, #0x18]\n    mov r0, #0x53\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    add r2, r1, #0\n    str r0, [sp, #0x1c]\n    mov r0, #0x15\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    str r0, [sp, #0x20]\n    mov r0, #0\n    str r0, [sp, #0x24]\n    str r0, [sp, #0x28]\n    add r0, r6, #0\n    bl CreateSpriteResourcesHeader\n    add r7, r7, #1\n    add r4, r4, #4\n    add r6, #0x24\n    cmp r7, #0xb\n    blt _0225B020\n    ldr r0, [r5, #0x18]\n    add r1, sp, #0x3c\n    str r0, [sp, #0x3c]\n    mov r0, #0x81\n    lsl r0, r0, #2\n    add r7, r5, r0\n    mov r0, #0\n    str r0, [sp, #0x2c]\n    str r0, [sp, #0x4c]\n    mov r0, #1\n    lsl r0, r0, #0xc\n    str r0, [sp, #0x50]\n    str r0, [sp, #0x54]\n    str r0, [sp, #0x58]\n    ldr r0, [sp, #0x2c]\n    str r7, [sp, #0x40]\n    strh r0, [r1, #0x20]\n    mov r0, #1\n    str r0, [sp, #0x60]\n    mov r0, #2\n    str r0, [sp, #0x64]\n    mov r0, #8\n    ldr r6, _0225B354 ; =ov27_0225D038\n    str r0, [sp, #0x68]\n    add r4, r5, #0\n    ldrh r0, [r6]\n    str r7, [sp, #0x40]\n    cmp r0, #0\n    beq _0225B0BA\n    lsl r0, r0, #0xc\n    bl _fflt\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    b _0225B0C8\n    lsl r0, r0, #0xc\n    bl _fflt\n    mov r1, #0x3f\n    lsl r1, r1, #0x18\n    bl _fsub\n    bl _ffix\n    str r0, [sp, #0x44]\n    ldrh r0, [r6, #2]\n    cmp r0, #0\n    beq _0225B0E6\n    lsl r0, r0, #0xc\n    bl _fflt\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    b _0225B0F4\n    lsl r0, r0, #0xc\n    bl _fflt\n    mov r1, #0x3f\n    lsl r1, r1, #0x18\n    bl _fsub\n    bl _ffix\n    mov r1, #1\n    lsl r1, r1, #0x14\n    add r0, r0, r1\n    str r0, [sp, #0x48]\n    add r0, sp, #0x3c\n    bl Sprite_CreateAffine\n    mov r1, #0x39\n    lsl r1, r1, #4\n    str r0, [r4, r1]\n    add r0, r1, #0\n    ldr r0, [r4, r0]\n    mov r1, #1\n    bl Sprite_SetAnimActiveFlag\n    mov r0, #0x39\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl Sprite_SetPriority\n    mov r0, #0x39\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #1\n    bl Sprite_SetAffineOverwriteMode\n    ldr r0, [sp, #0x2c]\n    add r7, #0x24\n    add r0, r0, #1\n    add r6, r6, #4\n    add r4, r4, #4\n    str r0, [sp, #0x2c]\n    cmp r0, #9\n    blt _0225B0A0\n    mov r0, #9\n    str r0, [sp, #0x30]\n    mov r0, #0xd2\n    lsl r0, r0, #2\n    add r4, r5, #0\n    mov r7, #0x3f\n    add r0, r5, r0\n    ldr r6, _0225B358 ; =ov27_0225D05C\n    add r4, #0x24\n    lsl r7, r7, #0x18\n    str r0, [sp, #0x38]\n    ldr r0, [sp, #0x38]\n    str r0, [sp, #0x40]\n    ldrh r0, [r6]\n    cmp r0, #0\n    beq _0225B16E\n    lsl r0, r0, #0xc\n    bl _fflt\n    add r1, r0, #0\n    add r0, r7, #0\n    bl _fadd\n    b _0225B17A\n    lsl r0, r0, #0xc\n    bl _fflt\n    add r1, r7, #0\n    bl _fsub\n    bl _ffix\n    str r0, [sp, #0x44]\n    ldrh r0, [r6, #2]\n    cmp r0, #0\n    beq _0225B196\n    lsl r0, r0, #0xc\n    bl _fflt\n    add r1, r0, #0\n    add r0, r7, #0\n    bl _fadd\n    b _0225B1A2\n    lsl r0, r0, #0xc\n    bl _fflt\n    add r1, r7, #0\n    bl _fsub\n    bl _ffix\n    mov r1, #1\n    lsl r1, r1, #0x14\n    add r0, r0, r1\n    str r0, [sp, #0x48]\n    add r0, sp, #0x3c\n    bl Sprite_CreateAffine\n    mov r1, #0x39\n    lsl r1, r1, #4\n    str r0, [r4, r1]\n    add r0, r1, #0\n    ldr r0, [r4, r0]\n    mov r1, #1\n    bl Sprite_SetAnimActiveFlag\n    mov r0, #0x39\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #2\n    bl Sprite_SetPriority\n    ldr r0, [sp, #0x30]\n    add r6, r6, #4\n    add r0, r0, #1\n    add r4, r4, #4\n    str r0, [sp, #0x30]\n    cmp r0, #0xf\n    blt _0225B154\n    ldr r0, _0225B35C ; =0x0000051C\n    ldr r0, [r5, r0]\n    lsl r0, r0, #0x1b\n    lsr r1, r0, #0x1c\n    sub r0, r1, #1\n    cmp r0, #2\n    bhi _0225B27E\n    cmp r1, #1\n    bne _0225B1F6\n    mov r0, #0x90\n    str r0, [sp, #0x34]\n    b _0225B200\n    sub r0, r1, #2\n    cmp r0, #1\n    bhi _0225B200\n    mov r0, #0x68\n    str r0, [sp, #0x34]\n    mov r0, #0xdb\n    lsl r0, r0, #2\n    add r0, r5, r0\n    str r0, [sp, #0x40]\n    mov r0, #0x19\n    lsl r0, r0, #0xe\n    bl _fflt\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    bl _ffix\n    str r0, [sp, #0x44]\n    ldr r0, [sp, #0x34]\n    cmp r0, #0\n    ble _0225B238\n    lsl r0, r0, #0xc\n    bl _fflt\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    b _0225B246\n    lsl r0, r0, #0xc\n    bl _fflt\n    mov r1, #0x3f\n    lsl r1, r1, #0x18\n    bl _fsub\n    bl _ffix\n    mov r1, #1\n    lsl r1, r1, #0x14\n    add r0, r0, r1\n    str r0, [sp, #0x48]\n    add r0, sp, #0x3c\n    bl Sprite_CreateAffine\n    mov r1, #0xf3\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    ldr r0, [r5, r1]\n    mov r1, #1\n    bl Sprite_SetAnimActiveFlag\n    mov r0, #0xf3\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #0\n    bl Sprite_SetPriority\n    mov r0, #0xf3\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #6\n    bl Sprite_SetAnimCtrlSeq\n    ldr r0, _0225B35C ; =0x0000051C\n    ldr r0, [r5, r0]\n    lsl r0, r0, #0x1b\n    lsr r0, r0, #0x1c\n    cmp r0, #2\n    bne _0225B2D2\n    ldr r0, [r5, #0x10]\n    bl FieldSystem_BugContest_Get\n    add r4, r0, #0\n    bne _0225B298\n    bl GF_AssertFail\n    ldrb r0, [r4, #0x17]\n    lsl r0, r0, #0x1f\n    lsr r0, r0, #0x1f\n    beq _0225B2E2\n    mov r0, #0xea\n    lsl r0, r0, #2\n    mov r3, #1\n    ldr r0, [r5, r0]\n    mov r1, #0x68\n    mov r2, #0x88\n    lsl r3, r3, #0x14\n    bl Sprite_SetPositionXYWithSubscreenOffset\n    ldr r0, [r4, #0x10]\n    bl Pokemon_GetIconPalette\n    add r1, r0, #0\n    mov r0, #0xea\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl Sprite_SetPalOffsetRespectVramOffset\n    mov r0, #0xea\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #6\n    bl Sprite_SetAnimCtrlSeq\n    b _0225B2E2\n    cmp r0, #3\n    bne _0225B2E2\n    mov r0, #0xea\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    mov r0, #0xed\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #0\n    bl Sprite_SetAnimCtrlSeq\n    mov r0, #0xee\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #8\n    bl Sprite_SetAnimCtrlSeq\n    mov r0, #0xef\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #3\n    bl Sprite_SetAnimCtrlSeq\n    mov r0, #0xf\n    lsl r0, r0, #6\n    ldr r0, [r5, r0]\n    mov r1, #5\n    bl Sprite_SetAnimCtrlSeq\n    mov r0, #0xf2\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #0xc\n    bl Sprite_SetAnimCtrlSeq\n    mov r0, #0xf2\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    mov r0, #0xf1\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #1\n    bl Sprite_SetPriority\n    add r0, r5, #0\n    bl ov27_0225A4B8\n    add r0, r5, #0\n    mov r1, #1\n    bl ov27_0225A9C0\n    add r0, r5, #0\n    bl ov27_0225AA7C\n    add sp, #0x6c\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _0225B350: .word ov27_0225CF3C\n    _0225B354: .word ov27_0225D038\n    _0225B358: .word ov27_0225D05C\n    _0225B35C: .word 0x0000051C"
    );
    #endif
}

void ov27_0225B360(void) {
    /* Original at 0x0225B360 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6}\n    mov r5, #0xc\n    mul r5, r0\n    ldr r6, _0225B394 ; =ov27_0225D0B4\n    lsl r0, r1, #1\n    mov r4, #0\n    add r5, r6, r5\n    add r0, r1, r0\n    mvn r4, r4\n    mov r3, #0\n    add r5, r5, r0\n    ldrb r1, [r5]\n    lsl r0, r1, #3\n    ldrb r0, [r2, r0]\n    cmp r0, #0\n    beq _0225B384\n    add r4, r1, #0\n    b _0225B38C\n    add r3, r3, #1\n    add r5, r5, #1\n    cmp r3, #3\n    blt _0225B376\n    add r0, r4, #0\n    pop {r3, r4, r5, r6}\n    bx lr\n    nop\n    _0225B394: .word ov27_0225D0B4"
    );
    #endif
}

void ov27_0225B398(void) {
    /* Original at 0x0225B398 */
    /* Requires manual decompilation - 47 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    str r1, [sp]\n    cmp r1, #7\n    blt _0225B3A6\n    bl GF_AssertFail\n    ldr r0, _0225B3F0 ; =0x000004CC\n    mov r4, #0\n    add r5, r4, #0\n    add r7, r6, r0\n    ldr r0, _0225B3F4 ; =0x0000051C\n    ldr r0, [r6, r0]\n    lsl r0, r0, #0x1b\n    lsr r0, r0, #0x1c\n    lsl r1, r0, #3\n    ldr r0, _0225B3F8 ; =ov27_0225CFC8\n    add r0, r0, r1\n    ldrb r1, [r4, r0]\n    ldr r0, _0225B3FC ; =ov27_0225CF94\n    lsl r2, r1, #2\n    ldrh r0, [r0, r2]\n    mov r2, #0\n    cmp r1, #0xd\n    beq _0225B3E4\n    ldr r1, _0225B400 ; =0x0000FFFF\n    cmp r0, r1\n    beq _0225B3E4\n    ldr r0, [sp]\n    cmp r4, r0\n    bne _0225B3D8\n    mov r2, #0x10\n    lsl r0, r2, #1\n    add r0, r7, r0\n    add r1, r5, #0\n    mov r2, #0x20\n    bl GXS_LoadOBJPltt\n    add r4, r4, #1\n    add r5, #0x20\n    cmp r4, #7\n    blt _0225B3AE\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0225B3F0: .word 0x000004CC\n    _0225B3F4: .word 0x0000051C\n    _0225B3F8: .word ov27_0225CFC8\n    _0225B3FC: .word ov27_0225CF94\n    _0225B400: .word 0x0000FFFF"
    );
    #endif
}

void ov27_0225B404(void) {
    /* Original at 0x0225B404 */
    /* Requires manual decompilation - 77 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    ldr r1, _0225B4A8 ; =gSystem\n    add r5, r0, #0\n    ldr r1, [r1, #0x48]\n    mov r4, #0\n    mov r2, #0x40\n    mvn r4, r4\n    ldr r0, [r5, #0x14]\n    tst r2, r1\n    beq _0225B41C\n    mov r4, #0\n    b _0225B438\n    mov r2, #0x80\n    tst r2, r1\n    beq _0225B426\n    mov r4, #1\n    b _0225B438\n    mov r2, #0x20\n    tst r2, r1\n    beq _0225B430\n    mov r4, #2\n    b _0225B438\n    mov r2, #0x10\n    tst r1, r2\n    beq _0225B438\n    mov r4, #3\n    cmp r4, #0\n    blt _0225B448\n    mov r2, #0x47\n    lsl r2, r2, #4\n    add r1, r4, #0\n    add r2, r5, r2\n    bl ov27_0225B360\n    mov r1, #0\n    mvn r1, r1\n    cmp r0, r1\n    beq _0225B4A6\n    ldr r1, [r5, #0x14]\n    cmp r1, r0\n    beq _0225B4A6\n    str r0, [r5, #0x14]\n    mov r0, #0x5e\n    lsl r0, r0, #4\n    bl PlaySE\n    cmp r4, #1\n    bhi _0225B478\n    ldr r0, [r5, #0x14]\n    lsl r0, r0, #2\n    add r1, r5, r0\n    mov r0, #0x39\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #3\n    bl Sprite_SetAnimCtrlSeq\n    b _0225B490\n    sub r0, r4, #2\n    cmp r0, #1\n    bhi _0225B490\n    ldr r0, [r5, #0x14]\n    lsl r0, r0, #2\n    add r1, r5, r0\n    mov r0, #0x39\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #1\n    bl Sprite_SetAnimCtrlSeq\n    ldr r1, [r5, #0x14]\n    add r0, r5, #0\n    bl ov27_0225B398\n    ldr r1, [r5, #0x14]\n    add r0, r5, #0\n    bl ov27_0225C170\n    ldr r1, [r5, #0x10]\n    add r1, #0xd3\n    strb r0, [r1]\n    pop {r3, r4, r5, pc}\n    _0225B4A8: .word gSystem"
    );
    #endif
}

void ov27_0225B4AC(void) {
    /* Original at 0x0225B4AC */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r6, r1, #0\n    mov r4, #0\n    mov r7, #1\n    ldr r0, [r5]\n    cmp r0, #0\n    beq _0225B4CE\n    cmp r6, r4\n    beq _0225B4C8\n    add r1, r7, #0\n    bl Sprite_SetOamMode\n    b _0225B4CE\n    mov r1, #0\n    bl Sprite_SetOamMode\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #9\n    blt _0225B4B6\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov27_0225B4D8(void) {
    /* Original at 0x0225B4D8 */
    /* Requires manual decompilation - 152 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0x10]\n    ldr r0, [r0, #0x40]\n    bl PlayerAvatar_GetUnk14\n    cmp r0, #0\n    bne _0225B4F2\n    ldr r0, _0225B624 ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #0xf0\n    tst r0, r1\n    beq _0225B4F6\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    ldr r0, _0225B628 ; =0x0000051C\n    ldr r0, [r5, r0]\n    lsl r0, r0, #0x1b\n    lsr r0, r0, #0x1c\n    cmp r0, #5\n    bne _0225B53E\n    bl sub_0203769C\n    add r4, r0, #0\n    bl sub_02058740\n    cmp r0, #0\n    beq _0225B53A\n    bl sub_02058258\n    cmp r0, #0\n    beq _0225B53A\n    bl sub_02056EE0\n    cmp r0, #0\n    beq _0225B53A\n    bl sub_02057A0C\n    cmp r0, #0\n    beq _0225B53A\n    add r0, r4, #0\n    bl sub_02057F18\n    cmp r0, #0\n    bne _0225B53A\n    bl sub_02037958\n    cmp r0, #0\n    beq _0225B53E\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    bl IsPaletteFadeFinished\n    cmp r0, #0\n    bne _0225B54A\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    ldr r0, _0225B628 ; =0x0000051C\n    ldr r0, [r5, r0]\n    lsl r0, r0, #0x1a\n    lsr r0, r0, #0x1f\n    cmp r0, #1\n    bne _0225B55A\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    ldr r0, _0225B62C ; =ov27_0225CF68\n    bl TouchscreenHitbox_FindRectAtTouchNew\n    add r4, r0, #0\n    cmp r4, #0\n    ble _0225B57E\n    cmp r4, #8\n    bge _0225B57E\n    sub r0, r4, #1\n    lsl r0, r0, #3\n    add r1, r5, r0\n    mov r0, #0x47\n    lsl r0, r0, #4\n    ldrb r0, [r1, r0]\n    cmp r0, #0\n    bne _0225B57E\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    ldr r0, [r5, #0x10]\n    ldr r0, [r0, #0xc]\n    bl Save_Bag_Get\n    add r6, r0, #0\n    add r0, r4, #0\n    sub r0, #8\n    cmp r0, #1\n    bhi _0225B5AC\n    ldr r0, _0225B628 ; =0x0000051C\n    ldr r0, [r5, r0]\n    lsl r0, r0, #0x1f\n    lsr r0, r0, #0x1f\n    bne _0225B59E\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    add r0, r5, #0\n    bl ov27_0225BDAC\n    cmp r0, #0\n    bne _0225B5AC\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    cmp r4, #8\n    bne _0225B5BE\n    add r0, r6, #0\n    bl Bag_GetRegisteredItem1\n    cmp r0, #0\n    bne _0225B5D0\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    cmp r4, #9\n    bne _0225B5D0\n    add r0, r6, #0\n    bl Bag_GetRegisteredItem2\n    cmp r0, #0\n    bne _0225B5D0\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    mov r0, #0\n    mvn r0, r0\n    cmp r4, r0\n    beq _0225B620\n    cmp r4, #0\n    bne _0225B5E4\n    ldr r0, [r5, #0xc]\n    mov r1, #1\n    strh r1, [r0]\n    b _0225B61C\n    sub r1, r4, #1\n    lsl r0, r1, #2\n    add r2, r5, r0\n    mov r0, #0x39\n    lsl r0, r0, #4\n    ldr r0, [r2, r0]\n    cmp r0, #0\n    beq _0225B61C\n    cmp r4, #8\n    bge _0225B60E\n    str r1, [r5, #0x14]\n    add r0, r5, #0\n    bl ov27_0225C170\n    ldr r1, [r5, #0x10]\n    add r1, #0xd3\n    strb r0, [r1]\n    ldr r1, [r5, #0x14]\n    add r0, r5, #0\n    bl ov27_0225B398\n    add r0, r5, #0\n    sub r1, r4, #1\n    bl ov27_0225C170\n    add r1, r0, #2\n    ldr r0, [r5, #0xc]\n    strh r1, [r0]\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    _0225B624: .word gSystem\n    _0225B628: .word 0x0000051C\n    _0225B62C: .word ov27_0225CF68"
    );
    #endif
}

void ov27_0225B630(void) {
    /* Original at 0x0225B630 */
    /* Requires manual decompilation - 600 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x1c\n    add r7, r0, #0\n    str r1, [sp, #0x10]\n    ldr r6, [r7]\n    bl GetWindowX\n    add r5, r0, #0\n    add r0, r7, #0\n    bl GetWindowY\n    add r4, r0, #0\n    add r0, r7, #0\n    bl GetWindowWidth\n    str r0, [sp, #0x14]\n    add r0, r7, #0\n    bl GetWindowHeight\n    str r0, [sp, #0x18]\n    ldr r0, [sp, #0x10]\n    cmp r0, #1\n    beq _0225B666\n    cmp r0, #2\n    bne _0225B664\n    b _0225B8C2\n    b _0225BB1E\n    sub r0, r4, #1\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    sub r3, r5, #3\n    str r0, [sp, #8]\n    mov r0, #2\n    lsl r3, r3, #0x18\n    str r0, [sp, #0xc]\n    add r0, r6, #0\n    mov r1, #4\n    mov r2, #0xa9\n    lsr r3, r3, #0x18\n    bl FillBgTilemapRect\n    sub r0, r4, #1\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    sub r3, r5, #2\n    str r0, [sp, #8]\n    mov r0, #2\n    lsl r3, r3, #0x18\n    str r0, [sp, #0xc]\n    add r0, r6, #0\n    mov r1, #4\n    mov r2, #0xaa\n    lsr r3, r3, #0x18\n    bl FillBgTilemapRect\n    sub r0, r4, #1\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    sub r3, r5, #1\n    str r0, [sp, #8]\n    mov r0, #2\n    lsl r3, r3, #0x18\n    str r0, [sp, #0xc]\n    add r0, r6, #0\n    mov r1, #4\n    mov r2, #0xab\n    lsr r3, r3, #0x18\n    bl FillBgTilemapRect\n    sub r0, r4, #1\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    ldr r0, [sp, #0x14]\n    lsl r3, r5, #0x18\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    add r0, r6, #0\n    mov r1, #5\n    mov r2, #0xac\n    lsr r3, r3, #0x18\n    bl FillBgTilemapRect\n    ldr r0, [sp, #0x14]\n    mov r1, #5\n    add r7, r5, r0\n    sub r0, r4, #1\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #2\n    lsl r3, r7, #0x18\n    str r0, [sp, #0xc]\n    add r0, r6, #0\n    mov r2, #0xad\n    lsr r3, r3, #0x18\n    bl FillBgTilemapRect\n    lsl r0, r4, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    sub r3, r5, #3\n    str r0, [sp, #8]\n    mov r0, #2\n    lsl r3, r3, #0x18\n    str r0, [sp, #0xc]\n    add r0, r6, #0\n    mov r1, #4\n    mov r2, #0x64\n    lsr r3, r3, #0x18\n    bl FillBgTilemapRect\n    lsl r0, r4, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    sub r3, r5, #2\n    str r0, [sp, #8]\n    mov r0, #2\n    lsl r3, r3, #0x18\n    str r0, [sp, #0xc]\n    add r0, r6, #0\n    mov r1, #4\n    mov r2, #0x65\n    lsr r3, r3, #0x18\n    bl FillBgTilemapRect\n    lsl r0, r4, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    sub r3, r5, #1\n    str r0, [sp, #8]\n    mov r0, #2\n    lsl r3, r3, #0x18\n    str r0, [sp, #0xc]\n    add r0, r6, #0\n    mov r1, #4\n    mov r2, #0x66\n    lsr r3, r3, #0x18\n    bl FillBgTilemapRect\n    lsl r0, r4, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #2\n    lsl r3, r7, #0x18\n    str r0, [sp, #0xc]\n    add r0, r6, #0\n    mov r1, #5\n    mov r2, #0x68\n    lsr r3, r3, #0x18\n    bl FillBgTilemapRect\n    add r0, r4, #1\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    sub r3, r5, #3\n    str r0, [sp, #8]\n    mov r0, #2\n    lsl r3, r3, #0x18\n    str r0, [sp, #0xc]\n    add r0, r6, #0\n    mov r1, #4\n    mov r2, #0x84\n    lsr r3, r3, #0x18\n    bl FillBgTilemapRect\n    add r0, r4, #1\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    sub r3, r5, #2\n    str r0, [sp, #8]\n    mov r0, #2\n    lsl r3, r3, #0x18\n    str r0, [sp, #0xc]\n    add r0, r6, #0\n    mov r1, #4\n    mov r2, #0x85\n    lsr r3, r3, #0x18\n    bl FillBgTilemapRect\n    add r0, r4, #1\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    sub r3, r5, #1\n    str r0, [sp, #8]\n    mov r0, #2\n    lsl r3, r3, #0x18\n    str r0, [sp, #0xc]\n    add r0, r6, #0\n    mov r1, #4\n    mov r2, #0x86\n    lsr r3, r3, #0x18\n    bl FillBgTilemapRect\n    add r0, r4, #1\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #2\n    lsl r3, r7, #0x18\n    str r0, [sp, #0xc]\n    add r0, r6, #0\n    mov r1, #5\n    mov r2, #0x88\n    lsr r3, r3, #0x18\n    bl FillBgTilemapRect\n    ldr r0, [sp, #0x18]\n    sub r3, r5, #3\n    add r4, r4, r0\n    lsl r0, r4, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #2\n    lsl r3, r3, #0x18\n    str r0, [sp, #0xc]\n    add r0, r6, #0\n    mov r1, #4\n    mov r2, #0xa4\n    lsr r3, r3, #0x18\n    bl FillBgTilemapRect\n    lsl r0, r4, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    sub r3, r5, #2\n    str r0, [sp, #8]\n    mov r0, #2\n    lsl r3, r3, #0x18\n    str r0, [sp, #0xc]\n    add r0, r6, #0\n    mov r1, #4\n    mov r2, #0xa5\n    lsr r3, r3, #0x18\n    bl FillBgTilemapRect\n    lsl r0, r4, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    sub r3, r5, #1\n    str r0, [sp, #8]\n    mov r0, #2\n    lsl r3, r3, #0x18\n    str r0, [sp, #0xc]\n    add r0, r6, #0\n    mov r1, #4\n    mov r2, #0xa6\n    lsr r3, r3, #0x18\n    bl FillBgTilemapRect\n    lsl r0, r4, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    ldr r0, [sp, #0x14]\n    lsl r3, r5, #0x18\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    add r0, r6, #0\n    mov r1, #5\n    mov r2, #0xa7\n    lsr r3, r3, #0x18\n    bl FillBgTilemapRect\n    lsl r0, r4, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #2\n    lsl r3, r7, #0x18\n    str r0, [sp, #0xc]\n    add r0, r6, #0\n    mov r1, #5\n    mov r2, #0xa8\n    lsr r3, r3, #0x18\n    bl FillBgTilemapRect\n    b _0225BB22\n    sub r0, r4, #1\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    sub r3, r5, #3\n    str r0, [sp, #8]\n    mov r0, #0\n    lsl r3, r3, #0x18\n    str r0, [sp, #0xc]\n    add r0, r6, #0\n    mov r1, #4\n    mov r2, #7\n    lsr r3, r3, #0x18\n    bl FillBgTilemapRect\n    sub r0, r4, #1\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    sub r3, r5, #2\n    str r0, [sp, #8]\n    mov r0, #0\n    lsl r3, r3, #0x18\n    str r0, [sp, #0xc]\n    add r0, r6, #0\n    mov r1, #4\n    mov r2, #7\n    lsr r3, r3, #0x18\n    bl FillBgTilemapRect\n    sub r0, r4, #1\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    sub r3, r5, #1\n    str r0, [sp, #8]\n    mov r0, #0\n    lsl r3, r3, #0x18\n    str r0, [sp, #0xc]\n    add r0, r6, #0\n    mov r1, #4\n    mov r2, #7\n    lsr r3, r3, #0x18\n    bl FillBgTilemapRect\n    sub r0, r4, #1\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    ldr r0, [sp, #0x14]\n    lsl r3, r5, #0x18\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    add r0, r6, #0\n    mov r1, #5\n    mov r2, #0\n    lsr r3, r3, #0x18\n    bl FillBgTilemapRect\n    ldr r0, [sp, #0x14]\n    mov r1, #5\n    add r7, r5, r0\n    sub r0, r4, #1\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #2\n    lsl r3, r7, #0x18\n    str r0, [sp, #0xc]\n    add r0, r6, #0\n    mov r2, #0\n    lsr r3, r3, #0x18\n    bl FillBgTilemapRect\n    lsl r0, r4, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    sub r3, r5, #3\n    str r0, [sp, #8]\n    mov r0, #0\n    lsl r3, r3, #0x18\n    str r0, [sp, #0xc]\n    add r0, r6, #0\n    mov r1, #4\n    mov r2, #7\n    lsr r3, r3, #0x18\n    bl FillBgTilemapRect\n    lsl r0, r4, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    sub r3, r5, #2\n    str r0, [sp, #8]\n    mov r0, #0\n    lsl r3, r3, #0x18\n    str r0, [sp, #0xc]\n    add r0, r6, #0\n    mov r1, #4\n    mov r2, #7\n    lsr r3, r3, #0x18\n    bl FillBgTilemapRect\n    lsl r0, r4, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    sub r3, r5, #1\n    str r0, [sp, #8]\n    mov r0, #0\n    lsl r3, r3, #0x18\n    str r0, [sp, #0xc]\n    add r0, r6, #0\n    mov r1, #4\n    mov r2, #7\n    lsr r3, r3, #0x18\n    bl FillBgTilemapRect\n    lsl r0, r4, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #2\n    lsl r3, r7, #0x18\n    str r0, [sp, #0xc]\n    add r0, r6, #0\n    mov r1, #5\n    mov r2, #0\n    lsr r3, r3, #0x18\n    bl FillBgTilemapRect\n    add r0, r4, #1\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    sub r3, r5, #3\n    str r0, [sp, #8]\n    mov r0, #0\n    lsl r3, r3, #0x18\n    str r0, [sp, #0xc]\n    add r0, r6, #0\n    mov r1, #4\n    mov r2, #7\n    lsr r3, r3, #0x18\n    bl FillBgTilemapRect\n    add r0, r4, #1\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    sub r3, r5, #2\n    str r0, [sp, #8]\n    mov r0, #0\n    lsl r3, r3, #0x18\n    str r0, [sp, #0xc]\n    add r0, r6, #0\n    mov r1, #4\n    mov r2, #7\n    lsr r3, r3, #0x18\n    bl FillBgTilemapRect\n    add r0, r4, #1\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    sub r3, r5, #1\n    str r0, [sp, #8]\n    mov r0, #0\n    lsl r3, r3, #0x18\n    str r0, [sp, #0xc]\n    add r0, r6, #0\n    mov r1, #4\n    mov r2, #7\n    lsr r3, r3, #0x18\n    bl FillBgTilemapRect\n    add r0, r4, #1\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #2\n    lsl r3, r7, #0x18\n    str r0, [sp, #0xc]\n    add r0, r6, #0\n    mov r1, #5\n    mov r2, #0\n    lsr r3, r3, #0x18\n    bl FillBgTilemapRect\n    ldr r0, [sp, #0x18]\n    sub r3, r5, #3\n    add r4, r4, r0\n    lsl r0, r4, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0\n    lsl r3, r3, #0x18\n    str r0, [sp, #0xc]\n    add r0, r6, #0\n    mov r1, #4\n    mov r2, #7\n    lsr r3, r3, #0x18\n    bl FillBgTilemapRect\n    lsl r0, r4, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    sub r3, r5, #2\n    str r0, [sp, #8]\n    mov r0, #0\n    lsl r3, r3, #0x18\n    str r0, [sp, #0xc]\n    add r0, r6, #0\n    mov r1, #4\n    mov r2, #7\n    lsr r3, r3, #0x18\n    bl FillBgTilemapRect\n    lsl r0, r4, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    sub r3, r5, #1\n    str r0, [sp, #8]\n    mov r0, #0\n    lsl r3, r3, #0x18\n    str r0, [sp, #0xc]\n    add r0, r6, #0\n    mov r1, #4\n    mov r2, #7\n    lsr r3, r3, #0x18\n    bl FillBgTilemapRect\n    lsl r0, r4, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    ldr r0, [sp, #0x14]\n    lsl r3, r5, #0x18\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    add r0, r6, #0\n    mov r1, #5\n    mov r2, #0\n    lsr r3, r3, #0x18\n    bl FillBgTilemapRect\n    lsl r0, r4, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #2\n    lsl r3, r7, #0x18\n    str r0, [sp, #0xc]\n    add r0, r6, #0\n    mov r1, #5\n    mov r2, #0\n    lsr r3, r3, #0x18\n    bl FillBgTilemapRect\n    b _0225BB22\n    bl GF_AssertFail\n    add r0, r6, #0\n    mov r1, #4\n    bl ScheduleBgTilemapBufferTransfer\n    add r0, r6, #0\n    mov r1, #5\n    bl ScheduleBgTilemapBufferTransfer\n    add sp, #0x1c\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov27_0225BB38(void) {
    /* Original at 0x0225BB38 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x10\n    add r6, r1, #0\n    ldr r1, _0225BB68 ; =ov27_0225CEC4\n    lsl r2, r2, #2\n    ldr r4, [r1, r2]\n    add r5, r0, #0\n    lsl r1, r4, #0x18\n    lsr r1, r1, #0x18\n    bl FillWindowPixelBuffer\n    mov r1, #0\n    str r1, [sp]\n    str r1, [sp, #4]\n    str r4, [sp, #8]\n    add r0, r5, #0\n    add r2, r6, #0\n    mov r3, #3\n    str r1, [sp, #0xc]\n    bl AddTextPrinterParameterizedWithColor\n    add sp, #0x10\n    pop {r4, r5, r6, pc}\n    nop\n    _0225BB68: .word ov27_0225CEC4"
    );
    #endif
}

void ov27_0225BB6C(void) {
    /* Original at 0x0225BB6C */
    /* Requires manual decompilation - 85 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0x10]\n    ldr r0, [r0, #0xc]\n    bl Save_PlayerData_GetProfile\n    add r2, r0, #0\n    ldr r0, _0225BC10 ; =0x000004AC\n    mov r1, #0\n    ldr r0, [r5, r0]\n    bl BufferPlayersName\n    ldr r7, _0225BC14 ; =ov27_0225CFC8\n    mov r4, #0\n    add r6, r5, #0\n    ldr r0, _0225BC18 ; =0x0000051C\n    ldr r0, [r5, r0]\n    lsl r0, r0, #0x1b\n    lsr r0, r0, #0x1c\n    lsl r0, r0, #3\n    add r0, r7, r0\n    ldrb r2, [r4, r0]\n    cmp r2, #0xd\n    beq _0225BBBA\n    lsl r3, r2, #2\n    ldr r2, _0225BC1C ; =ov27_0225CF94\n    ldr r0, _0225BC10 ; =0x000004AC\n    add r2, r2, r3\n    ldrh r2, [r2, #2]\n    ldr r1, _0225BC20 ; =0x000004A8\n    ldr r0, [r5, r0]\n    lsl r2, r2, #0x11\n    ldr r1, [r5, r1]\n    lsr r2, r2, #0x11\n    mov r3, #8\n    bl ReadMsgData_ExpandPlaceholders\n    ldr r1, _0225BC24 ; =0x00000474\n    str r0, [r6, r1]\n    add r4, r4, #1\n    add r6, #8\n    cmp r4, #7\n    blt _0225BB8A\n    ldr r4, _0225BC28 ; =ov27_0225CED8\n    mov r7, #0\n    add r6, r5, #0\n    ldr r0, _0225BC20 ; =0x000004A8\n    ldr r1, [r4]\n    ldr r0, [r5, r0]\n    bl NewString_ReadMsgData\n    mov r1, #0x4b\n    lsl r1, r1, #4\n    str r0, [r6, r1]\n    add r7, r7, #1\n    add r4, r4, #4\n    add r6, r6, #4\n    cmp r7, #5\n    blt _0225BBC8\n    sub r1, r1, #4\n    ldr r0, [r5, r1]\n    sub r1, r1, #4\n    ldr r1, [r5, r1]\n    mov r2, #0xc\n    mov r3, #8\n    bl ReadMsgData_ExpandPlaceholders\n    ldr r1, _0225BC2C ; =0x000004C4\n    mov r2, #0xd\n    str r0, [r5, r1]\n    add r0, r1, #0\n    sub r0, #0x18\n    sub r1, #0x1c\n    ldr r0, [r5, r0]\n    ldr r1, [r5, r1]\n    mov r3, #8\n    bl ReadMsgData_ExpandPlaceholders\n    ldr r1, _0225BC30 ; =0x000004C8\n    str r0, [r5, r1]\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0225BC10: .word 0x000004AC\n    _0225BC14: .word ov27_0225CFC8\n    _0225BC18: .word 0x0000051C\n    _0225BC1C: .word ov27_0225CF94\n    _0225BC20: .word 0x000004A8\n    _0225BC24: .word 0x00000474\n    _0225BC28: .word ov27_0225CED8\n    _0225BC2C: .word 0x000004C4\n    _0225BC30: .word 0x000004C8"
    );
    #endif
}

void ov27_0225BC34(void) {
    /* Original at 0x0225BC34 */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r0, _0225BC78 ; =0x000004C8\n    ldr r0, [r5, r0]\n    bl String_Delete\n    ldr r0, _0225BC7C ; =0x000004C4\n    ldr r0, [r5, r0]\n    bl String_Delete\n    mov r7, #0x4b\n    mov r6, #0\n    add r4, r5, #0\n    lsl r7, r7, #4\n    ldr r0, [r4, r7]\n    bl String_Delete\n    add r6, r6, #1\n    add r4, r4, #4\n    cmp r6, #5\n    blt _0225BC50\n    ldr r6, _0225BC80 ; =0x00000474\n    mov r4, #0\n    ldr r0, [r5, r6]\n    cmp r0, #0\n    beq _0225BC6C\n    bl String_Delete\n    add r4, r4, #1\n    add r5, #8\n    cmp r4, #7\n    blt _0225BC62\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0225BC78: .word 0x000004C8\n    _0225BC7C: .word 0x000004C4\n    _0225BC80: .word 0x00000474"
    );
    #endif
}

void ov27_0225BC84(void) {
    /* Original at 0x0225BC84 */
    /* Requires manual decompilation - 46 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x24\n    mov r7, #0\n    str r0, [sp]\n    add r4, r7, #0\n    add r5, sp, #4\n    ldr r0, [sp]\n    add r1, r4, #0\n    ldr r0, [r0, #0x10]\n    bl FieldSystem_ShouldDrawStartMenuIcon\n    add r4, r4, #1\n    stmia r5!, {r0}\n    cmp r4, #8\n    blt _0225BC90\n    mov r1, #0x3f\n    ldr r0, [sp]\n    lsl r1, r1, #4\n    mov r6, #0\n    add r4, sp, #4\n    add r5, r0, r1\n    ldr r0, [r4]\n    cmp r0, #0\n    beq _0225BCBC\n    add r0, r5, #0\n    bl CopyWindowToVram\n    add r7, r7, #1\n    add r6, r6, #1\n    add r4, r4, #4\n    add r5, #0x10\n    cmp r6, #8\n    blt _0225BCAE\n    cmp r7, #0\n    beq _0225BCE4\n    mov r1, #0xf2\n    ldr r0, [sp]\n    lsl r1, r1, #2\n    ldr r0, [r0, r1]\n    mov r1, #1\n    bl Sprite_SetDrawFlag\n    mov r1, #0x3e\n    ldr r0, [sp]\n    lsl r1, r1, #4\n    add r0, r0, r1\n    bl CopyWindowToVram\n    add sp, #0x24\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov27_0225BCE8(void) {
    /* Original at 0x0225BCE8 */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #4\n    mov r6, #0\n    add r4, r5, r0\n    ldr r0, _0225BD3C ; =0x00000474\n    ldr r1, [r5, r0]\n    cmp r1, #0\n    beq _0225BD2C\n    mov r0, #0\n    add r2, r0, #0\n    bl FontID_String_GetWidth\n    mov r1, #0x48\n    sub r3, r1, r0\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _0225BD40 ; =0x000E0200\n    lsr r7, r3, #0x1f\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    ldr r2, _0225BD3C ; =0x00000474\n    add r7, r3, r7\n    ldr r2, [r5, r2]\n    add r0, r4, #0\n    mov r1, #0\n    asr r3, r7, #1\n    bl AddTextPrinterParameterizedWithColor\n    add r6, r6, #1\n    add r5, #8\n    add r4, #0x10\n    cmp r6, #7\n    blt _0225BCF6\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0225BD3C: .word 0x00000474\n    _0225BD40: .word 0x000E0200"
    );
    #endif
}

void ov27_0225BD44(void) {
    /* Original at 0x0225BD44 */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "add r0, #0xd2\n    ldrb r0, [r0]\n    lsl r0, r0, #0x19\n    lsr r0, r0, #0x1f\n    bx lr"
    );
    #endif
}

void ov27_0225BD50(void) {
    /* Original at 0x0225BD50 */
    /* Requires manual decompilation - 41 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0xc]\n    bl Save_VarsFlags_Get\n    add r5, r0, #0\n    add r0, r4, #0\n    bl FieldSystem_MapIsBattleTowerMultiPartnerSelectRoom\n    cmp r0, #0\n    beq _0225BD6A\n    mov r0, #6\n    pop {r3, r4, r5, pc}\n    add r0, r5, #0\n    bl Save_VarsFlags_CheckSafariSysFlag\n    cmp r0, #0\n    beq _0225BD78\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    add r0, r5, #0\n    bl Save_VarsFlags_CheckBugContestFlag\n    cmp r0, #0\n    beq _0225BD86\n    mov r0, #2\n    pop {r3, r4, r5, pc}\n    add r0, r5, #0\n    bl Save_VarsFlags_CheckPalParkSysFlag\n    cmp r0, #0\n    beq _0225BD94\n    mov r0, #3\n    pop {r3, r4, r5, pc}\n    ldr r0, [r4, #0x18]\n    cmp r0, #3\n    bne _0225BD9E\n    mov r0, #4\n    pop {r3, r4, r5, pc}\n    ldr r0, [r4, #0x70]\n    cmp r0, #3\n    bne _0225BDA8\n    mov r0, #5\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov27_0225BDAC(void) {
    /* Original at 0x0225BDAC */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _0225BDC4 ; =0x0000051C\n    ldr r0, [r0, r1]\n    lsl r0, r0, #0x1b\n    lsr r0, r0, #0x1c\n    sub r0, r0, #2\n    cmp r0, #4\n    bls _0225BDBE\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr\n    nop\n    _0225BDC4: .word 0x0000051C"
    );
    #endif
}

void ov27_0225BDC8(void) {
    /* Original at 0x0225BDC8 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, [r0, #0x10]\n    ldr r0, [r0, #0xc]\n    bl Save_LocalFieldData_Get\n    bl LocalFieldData_GetPlayer\n    bl PlayerSaveData_CheckRunningShoes\n    pop {r3, pc}"
    );
    #endif
}

void ov27_0225BDDC(void) {
    /* Original at 0x0225BDDC */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    ldr r0, [r4, #0x10]\n    bl FieldSystem_GetGearPhoneRingManager\n    str r0, [r5, #4]\n    mov r0, #0xe7\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    str r0, [r5, #8]\n    ldr r0, [r4, #4]\n    str r0, [r5]\n    mov r0, #0\n    str r0, [r5, #0x1c]\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov27_0225BDFC(void) {
    /* Original at 0x0225BDFC */
    /* Requires manual decompilation - 78 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0x14\n    add r5, r0, #0\n    ldr r0, [r5, #4]\n    bl GearPhoneRingManager_IsRinging\n    ldr r1, [r5, #0x1c]\n    cmp r1, #0\n    bne _0225BE8A\n    cmp r0, #1\n    bne _0225BEAA\n    cmp r1, #0\n    bne _0225BEAA\n    ldr r0, [r5, #4]\n    mov r1, #8\n    bl GetPhoneBookEntryName\n    add r4, r0, #0\n    mov r0, #0\n    add r1, r4, #0\n    add r2, r0, #0\n    bl FontID_String_GetWidth\n    asr r1, r0, #2\n    lsr r1, r1, #0x1d\n    add r1, r0, r1\n    asr r0, r1, #3\n    add r1, r0, #2\n    cmp r1, #9\n    ble _0225BE3A\n    mov r1, #9\n    mov r0, #0x13\n    str r0, [sp]\n    lsl r0, r1, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #4]\n    mov r0, #2\n    str r0, [sp, #8]\n    mov r0, #4\n    str r0, [sp, #0xc]\n    mov r0, #0xc0\n    str r0, [sp, #0x10]\n    add r1, r5, #0\n    ldr r0, [r5]\n    add r1, #0xc\n    mov r2, #5\n    mov r3, #0xb\n    bl AddWindowParameterized\n    add r0, r5, #0\n    add r0, #0xc\n    mov r1, #1\n    bl ov27_0225B630\n    add r0, r5, #0\n    add r0, #0xc\n    add r1, r4, #0\n    mov r2, #1\n    bl ov27_0225BB38\n    add r0, r4, #0\n    bl String_Delete\n    ldr r0, [r5, #8]\n    mov r1, #5\n    bl Sprite_TryChangeAnimSeq\n    mov r0, #1\n    add sp, #0x14\n    str r0, [r5, #0x1c]\n    pop {r4, r5, pc}\n    cmp r0, #0\n    ldr r0, [r5, #8]\n    beq _0225BE9A\n    mov r1, #5\n    bl Sprite_TryChangeAnimSeq\n    add sp, #0x14\n    pop {r4, r5, pc}\n    mov r1, #0\n    bl Sprite_TryChangeAnimSeq\n    add r0, r5, #0\n    bl ov27_0225BEB0\n    mov r0, #0\n    str r0, [r5, #0x1c]\n    add sp, #0x14\n    pop {r4, r5, pc}"
    );
    #endif
}

void ov27_0225BEB0(void) {
    /* Original at 0x0225BEB0 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x1c]\n    cmp r0, #0\n    beq _0225BED4\n    add r0, r4, #0\n    add r0, #0xc\n    mov r1, #2\n    bl ov27_0225B630\n    add r0, r4, #0\n    add r0, #0xc\n    bl ClearWindowTilemapAndCopyToVram\n    add r4, #0xc\n    add r0, r4, #0\n    bl RemoveWindow\n    pop {r4, pc}"
    );
    #endif
}

void ov27_0225BED8(void) {
    /* Original at 0x0225BED8 */
    /* Requires manual decompilation - 76 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x24\n    ldr r5, [sp, #0x44]\n    add r4, r0, #0\n    str r3, [sp]\n    add r0, sp, #0x28\n    add r7, r1, #0\n    ldrb r1, [r0, #0x10]\n    add r6, r2, #0\n    mov r2, #5\n    str r1, [sp, #4]\n    ldrb r0, [r0, #0x14]\n    add r1, sp, #0x14\n    add r3, r6, #0\n    str r0, [sp, #8]\n    mov r0, #4\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #0x40]\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp, #0x10]\n    ldr r0, [r4, #4]\n    bl AddWindowParameterized\n    add r0, sp, #0x14\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    ldr r1, _0225BF7C ; =0x000004AC\n    add r2, r7, #0\n    ldr r0, [r4, r1]\n    sub r1, r1, #4\n    ldr r1, [r4, r1]\n    mov r3, #8\n    bl ReadMsgData_ExpandPlaceholders\n    add r4, r0, #0\n    mov r0, #0\n    mvn r0, r0\n    cmp r5, r0\n    bne _0225BF48\n    mov r0, #0\n    add r1, r4, #0\n    add r2, r0, #0\n    bl FontID_String_GetWidth\n    add r1, sp, #0x28\n    ldrb r1, [r1, #0x10]\n    lsl r1, r1, #3\n    sub r0, r1, r0\n    lsl r0, r0, #0x10\n    asr r1, r0, #0x10\n    lsr r0, r1, #0x1f\n    add r0, r1, r0\n    lsl r0, r0, #0xf\n    asr r5, r0, #0x10\n    add r1, sp, #0x28\n    mov r0, #0x20\n    ldrsh r0, [r1, r0]\n    mov r1, #0\n    add r2, r4, #0\n    str r0, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _0225BF80 ; =0x000E0200\n    add r3, r5, #0\n    str r0, [sp, #8]\n    add r0, sp, #0x14\n    str r1, [sp, #0xc]\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r4, #0\n    bl String_Delete\n    add r0, sp, #0x14\n    bl CopyWindowToVram\n    add r0, sp, #0x14\n    bl RemoveWindow\n    add sp, #0x24\n    pop {r4, r5, r6, r7, pc}\n    _0225BF7C: .word 0x000004AC\n    _0225BF80: .word 0x000E0200"
    );
    #endif
}

void ov27_0225BF84(void) {
    /* Original at 0x0225BF84 */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0x14\n    add r4, r1, #0\n    mov r1, #0\n    add r5, r0, #0\n    str r1, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r0, _0225BFC4 ; =0x000004AC\n    add r6, r2, #0\n    add r2, r3, #0\n    ldr r0, [r5, r0]\n    mov r3, #2\n    bl BufferIntegerAsString\n    mov r0, #6\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    ldr r0, _0225BFC8 ; =0x00000186\n    mov r1, #0x1f\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    str r0, [sp, #0x10]\n    add r0, r5, #0\n    add r2, r4, #0\n    add r3, r6, #0\n    bl ov27_0225BED8\n    add sp, #0x14\n    pop {r3, r4, r5, r6, pc}\n    _0225BFC4: .word 0x000004AC\n    _0225BFC8: .word 0x00000186"
    );
    #endif
}

void ov27_0225BFCC(void) {
    /* Original at 0x0225BFCC */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0x14\n    add r4, r0, #0\n    ldr r0, [r1, #0x10]\n    mov r1, #0xa1\n    mov r2, #0\n    bl GetMonData\n    mov r1, #0\n    add r2, r0, #0\n    str r1, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r0, _0225C014 ; =0x000004AC\n    mov r3, #3\n    ldr r0, [r4, r0]\n    bl BufferIntegerAsString\n    mov r0, #6\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    ldr r0, _0225C018 ; =0x00000192\n    mov r1, #0x21\n    str r0, [sp, #8]\n    mov r0, #4\n    str r0, [sp, #0xc]\n    mov r0, #0\n    str r0, [sp, #0x10]\n    add r0, r4, #0\n    mov r2, #0xc\n    mov r3, #0x15\n    bl ov27_0225BED8\n    add sp, #0x14\n    pop {r3, r4, pc}\n    _0225C014: .word 0x000004AC\n    _0225C018: .word 0x00000192"
    );
    #endif
}

void ov27_0225C01C(void) {
    /* Original at 0x0225C01C */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {lr}\n    sub sp, #0x14\n    mov r1, #9\n    str r1, [sp]\n    mov r2, #2\n    mov r1, #0x5d\n    str r2, [sp, #4]\n    lsl r1, r1, #2\n    str r1, [sp, #8]\n    sub r1, r2, #3\n    str r1, [sp, #0xc]\n    mov r1, #0\n    str r1, [sp, #0x10]\n    mov r1, #0x20\n    mov r2, #0xb\n    mov r3, #0x15\n    bl ov27_0225BED8\n    add sp, #0x14\n    pop {pc}"
    );
    #endif
}

void ov27_0225C044(void) {
    /* Original at 0x0225C044 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x10]\n    ldr r0, [r0, #0xc]\n    bl Save_LocalFieldData_Get\n    bl LocalFieldData_GetSafariBallsCounter\n    add r3, r0, #0\n    ldrh r3, [r3]\n    add r0, r4, #0\n    mov r1, #0xe\n    mov r2, #0x13\n    bl ov27_0225BF84\n    add r0, r4, #0\n    bl ov27_0225C01C\n    pop {r4, pc}"
    );
    #endif
}

void ov27_0225C06C(void) {
    /* Original at 0x0225C06C */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x10]\n    bl FieldSystem_GetParkBallCount\n    add r3, r0, #0\n    mov r1, #0xe\n    lsl r3, r3, #0x10\n    add r0, r4, #0\n    add r2, r1, #0\n    lsr r3, r3, #0x10\n    bl ov27_0225BF84\n    pop {r4, pc}"
    );
    #endif
}

void ov27_0225C088(void) {
    /* Original at 0x0225C088 */
    /* Requires manual decompilation - 37 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0x10]\n    bl FieldSystem_BugContest_Get\n    add r4, r0, #0\n    bne _0225C09A\n    bl GF_AssertFail\n    add r0, r4, #0\n    bl BugContest_GetSportBallsAddr\n    add r3, r0, #0\n    mov r1, #0xe\n    ldrh r3, [r3]\n    add r0, r5, #0\n    add r2, r1, #0\n    bl ov27_0225BF84\n    ldrb r0, [r4, #0x17]\n    lsl r0, r0, #0x1f\n    lsr r0, r0, #0x1f\n    beq _0225C0BE\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov27_0225BFCC\n    ldrb r1, [r4, #0x17]\n    mov r0, #0xea\n    lsl r0, r0, #2\n    lsl r1, r1, #0x1f\n    ldr r0, [r5, r0]\n    lsr r1, r1, #0x1f\n    bl Sprite_SetDrawFlag\n    ldr r0, _0225C0DC ; =0x0000051A\n    mov r1, #0\n    strb r1, [r5, r0]\n    sub r0, #0x7a\n    strb r1, [r5, r0]\n    pop {r3, r4, r5, pc}\n    nop\n    _0225C0DC: .word 0x0000051A"
    );
    #endif
}

void ov27_0225C0E0(void) {
    /* Original at 0x0225C0E0 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r1, _0225C108 ; =0x0000051C\n    ldr r1, [r0, r1]\n    lsl r1, r1, #0x1b\n    lsr r1, r1, #0x1c\n    cmp r1, #1\n    bne _0225C0F4\n    bl ov27_0225C044\n    pop {r3, pc}\n    cmp r1, #2\n    bne _0225C0FE\n    bl ov27_0225C088\n    pop {r3, pc}\n    cmp r1, #3\n    bne _0225C106\n    bl ov27_0225C06C\n    pop {r3, pc}\n    _0225C108: .word 0x0000051C"
    );
    #endif
}

void ov27_0225C10C(void) {
    /* Original at 0x0225C10C */
    /* Requires manual decompilation - 45 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r7, _0225C160 ; =ov27_0225CFC8\n    mov r4, #0\n    add r6, r5, #0\n    ldr r0, _0225C164 ; =0x0000051C\n    ldr r0, [r5, r0]\n    lsl r0, r0, #0x1b\n    lsr r0, r0, #0x1c\n    lsl r0, r0, #3\n    add r0, r7, r0\n    ldrb r1, [r4, r0]\n    cmp r1, #0xd\n    beq _0225C14C\n    cmp r1, #7\n    bge _0225C13A\n    ldr r0, [r5, #0x10]\n    bl FieldSystem_ShouldDrawStartMenuIcon\n    ldr r1, _0225C168 ; =0x00000514\n    add r2, r5, r4\n    strb r0, [r2, r1]\n    b _0225C14C\n    ldr r0, _0225C16C ; =ov27_0225CF94\n    lsl r1, r1, #2\n    add r0, r0, r1\n    ldrh r0, [r0, #2]\n    add r1, r5, r4\n    lsl r0, r0, #0x10\n    lsr r2, r0, #0x1f\n    ldr r0, _0225C168 ; =0x00000514\n    strb r2, [r1, r0]\n    ldr r0, _0225C168 ; =0x00000514\n    add r1, r5, r4\n    ldrb r1, [r1, r0]\n    sub r0, #0xa4\n    add r4, r4, #1\n    strb r1, [r6, r0]\n    add r6, #8\n    cmp r4, #7\n    blt _0225C116\n    pop {r3, r4, r5, r6, r7, pc}\n    _0225C160: .word ov27_0225CFC8\n    _0225C164: .word 0x0000051C\n    _0225C168: .word 0x00000514\n    _0225C16C: .word ov27_0225CF94"
    );
    #endif
}

void ov27_0225C170(void) {
    /* Original at 0x0225C170 */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    mov r4, #0\n    sub r2, r1, #7\n    mvn r4, r4\n    cmp r2, #1\n    bhi _0225C180\n    add r0, r1, #0\n    pop {r3, r4, r5, pc}\n    add r3, r1, #1\n    mov r5, #0\n    cmp r3, #0\n    ble _0225C19C\n    mov r1, #0x47\n    lsl r1, r1, #4\n    ldrb r2, [r0, r1]\n    cmp r2, #0\n    beq _0225C194\n    add r4, r4, #1\n    add r5, r5, #1\n    add r0, #8\n    cmp r5, r3\n    blt _0225C18C\n    mov r0, #0\n    mvn r0, r0\n    cmp r4, r0\n    bne _0225C1A8\n    bl GF_AssertFail\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov27_0225C1AC(void) {
    /* Original at 0x0225C1AC */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7}\n    mov r5, #0\n    mov r6, #0\n    mov r2, #0x47\n    mvn r5, r5\n    add r4, r6, #0\n    add r7, r0, #0\n    lsl r2, r2, #4\n    ldrb r3, [r7, r2]\n    cmp r3, #0\n    beq _0225C1CC\n    cmp r1, r6\n    bne _0225C1CA\n    add r5, r4, #0\n    b _0225C1D4\n    add r6, r6, #1\n    add r4, r4, #1\n    add r7, #8\n    cmp r4, #7\n    blt _0225C1BC\n    mov r1, #0\n    mvn r1, r1\n    cmp r5, r1\n    bne _0225C1E4\n    ldr r0, [r0, #0x10]\n    mov r5, #0\n    add r0, #0xd3\n    strb r5, [r0]\n    add r0, r5, #0\n    pop {r4, r5, r6, r7}\n    bx lr"
    );
    #endif
}

void ov27_0225C1EC(void) {
    /* Original at 0x0225C1EC */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x10]\n    cmp r0, #0\n    bne _0225C1FA\n    bl GF_AssertFail\n    ldr r0, [r4, #0x14]\n    lsl r0, r0, #3\n    add r1, r4, r0\n    mov r0, #0x47\n    lsl r0, r0, #4\n    ldrb r0, [r1, r0]\n    cmp r0, #0\n    bne _0225C236\n    mov r0, #0x47\n    mov r2, #0\n    add r3, r4, #0\n    lsl r0, r0, #4\n    ldrb r1, [r3, r0]\n    cmp r1, #0\n    beq _0225C22E\n    ldr r0, [r4, #0x10]\n    add r0, #0xd3\n    strb r2, [r0]\n    ldr r1, [r4, #0x10]\n    add r0, r4, #0\n    add r1, #0xd3\n    ldrb r1, [r1]\n    bl ov27_0225C1AC\n    str r0, [r4, #0x14]\n    pop {r4, pc}\n    add r2, r2, #1\n    add r3, #8\n    cmp r2, #7\n    blt _0225C212\n    pop {r4, pc}"
    );
    #endif
}

void ov27_0225C238(void) {
    /* Original at 0x0225C238 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _0225C244 ; =Heap_AllocAtEnd\n    mov r1, #0xfa\n    mov r0, #3\n    lsl r1, r1, #2\n    bx r3\n    nop\n    _0225C244: .word Heap_AllocAtEnd"
    );
    #endif
}

void ov27_0225C248(void) {
    /* Original at 0x0225C248 */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void ov27_0225C24C(void) {
    /* Original at 0x0225C24C */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void ov27_0225C250(void) {
    /* Original at 0x0225C250 */
    /* Requires manual decompilation - 133 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r5, r0, #0\n    add r7, r1, #0\n    mov r0, #3\n    str r2, [sp]\n    mov r1, #8\n    lsl r2, r0, #0xf\n    str r3, [sp, #4]\n    bl Heap_Create\n    mov r0, #0\n    bl GXS_SetGraphicsMode\n    mov r0, #0x80\n    bl GX_SetBankForSubBG\n    mov r0, #1\n    lsl r0, r0, #8\n    bl GX_SetBankForSubOBJ\n    ldr r2, _0225C37C ; =0x04001000\n    ldr r0, _0225C380 ; =0xFFCFFFEF\n    ldr r1, [r2]\n    mov r3, #0\n    and r1, r0\n    mov r0, #0x10\n    orr r0, r1\n    str r0, [r2]\n    ldr r2, _0225C384 ; =ov27_0225D370\n    add r0, r5, #0\n    mov r1, #4\n    bl InitBgFromTemplate\n    ldr r2, _0225C388 ; =ov27_0225D38C\n    add r0, r5, #0\n    mov r1, #5\n    mov r3, #0\n    bl InitBgFromTemplate\n    ldr r2, _0225C38C ; =ov27_0225D3A8\n    add r0, r5, #0\n    mov r1, #6\n    mov r3, #0\n    bl InitBgFromTemplate\n    mov r0, #4\n    mov r1, #0x20\n    mov r2, #0\n    add r3, r0, #0\n    bl BG_ClearCharDataRange\n    mov r0, #5\n    mov r1, #0x20\n    mov r2, #0\n    mov r3, #4\n    bl BG_ClearCharDataRange\n    mov r0, #6\n    mov r1, #0x20\n    mov r2, #0\n    mov r3, #4\n    bl BG_ClearCharDataRange\n    add r0, r5, #0\n    mov r1, #4\n    bl BgClearTilemapBufferAndCommit\n    add r0, r5, #0\n    mov r1, #5\n    bl BgClearTilemapBufferAndCommit\n    mov r1, #0xe9\n    ldr r0, _0225C390 ; =ov27_0225C434\n    lsl r1, r1, #2\n    mov r2, #0xa\n    mov r3, #8\n    bl CreateSysTaskAndEnvironment\n    add r6, r0, #0\n    bl SysTask_GetData\n    add r4, r0, #0\n    str r6, [r4, #0x1c]\n    mov r0, #0\n    str r0, [r4, #0x14]\n    str r5, [r4, #0x18]\n    ldr r1, [sp]\n    str r7, [r4, #0x20]\n    str r1, [r4, #0x24]\n    str r0, [r4, #0x48]\n    ldr r1, [sp, #4]\n    str r0, [r4]\n    str r1, [r4, #4]\n    mov r1, #0xe7\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    add r1, r1, #4\n    str r0, [r4, r1]\n    str r0, [r4, #0x34]\n    str r0, [r4, #0x44]\n    mov r0, #4\n    mov r1, #8\n    bl FontID_Alloc\n    ldr r1, [r4, #0x24]\n    add r0, r4, #0\n    add r1, #0xd2\n    ldrb r1, [r1]\n    lsl r1, r1, #0x1a\n    lsr r1, r1, #0x1a\n    bl ov27_0225C914\n    add r0, r4, #0\n    bl ov27_0225C4AC\n    add r0, r4, #0\n    bl ov27_0225C72C\n    add r0, r4, #0\n    mov r1, #0\n    bl ov27_0225C80C\n    ldr r2, _0225C37C ; =0x04001000\n    ldr r0, _0225C394 ; =0xFFFF1FFF\n    ldr r1, [r2]\n    and r0, r1\n    str r0, [r2]\n    mov r0, #1\n    add r1, r0, #0\n    bl GfGfx_EngineBTogglePlanes\n    mov r0, #2\n    mov r1, #1\n    bl GfGfx_EngineBTogglePlanes\n    mov r0, #4\n    mov r1, #1\n    bl GfGfx_EngineBTogglePlanes\n    mov r0, #0x10\n    mov r1, #1\n    bl GfGfx_EngineBTogglePlanes\n    mov r0, #1\n    bl TextFlags_SetCanTouchSpeedUpPrint\n    add r0, r6, #0\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    _0225C37C: .word 0x04001000\n    _0225C380: .word 0xFFCFFFEF\n    _0225C384: .word ov27_0225D370\n    _0225C388: .word ov27_0225D38C\n    _0225C38C: .word ov27_0225D3A8\n    _0225C390: .word ov27_0225C434\n    _0225C394: .word 0xFFFF1FFF"
    );
    #endif
}

void ov27_0225C398(void) {
    /* Original at 0x0225C398 */
    /* Requires manual decompilation - 50 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    str r0, [sp]\n    add r0, r1, #0\n    str r1, [sp, #4]\n    bl SysTask_GetData\n    add r7, r0, #0\n    mov r0, #0xd5\n    lsl r0, r0, #2\n    ldr r0, [r7, r0]\n    bl sub_0200AEB0\n    mov r0, #0xd6\n    lsl r0, r0, #2\n    ldr r0, [r7, r0]\n    bl sub_0200B0A8\n    mov r6, #0xd1\n    mov r4, #0\n    add r5, r7, #0\n    lsl r6, r6, #2\n    ldr r0, [r5, r6]\n    bl Destroy2DGfxResObjMan\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #4\n    blt _0225C3C4\n    mov r0, #0x86\n    lsl r0, r0, #2\n    ldr r0, [r7, r0]\n    bl SpriteList_Delete\n    mov r0, #0\n    bl TextFlags_SetCanTouchSpeedUpPrint\n    add r0, r7, #0\n    bl ov27_0225C930\n    mov r0, #4\n    bl FontID_Release\n    ldr r0, [sp, #4]\n    bl DestroySysTaskAndEnvironment\n    ldr r0, [sp]\n    mov r1, #6\n    bl FreeBgTilemapBuffer\n    ldr r0, [sp]\n    mov r1, #5\n    bl FreeBgTilemapBuffer\n    ldr r0, [sp]\n    mov r1, #4\n    bl FreeBgTilemapBuffer\n    mov r0, #8\n    bl Heap_Destroy\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

u8 ov27_0225C418(void) {
    return 1;
}

void ov27_0225C41C(void) {
    SysTask_GetData(0xe7);
}

void ov27_0225C434(void) {
    /* Original at 0x0225C434 */
    /* Requires manual decompilation - 55 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    ldr r0, [r4, #0x24]\n    bl FieldSystem_TaskIsRunning\n    cmp r0, #0\n    bne _0225C46C\n    ldr r0, [r4, #0x24]\n    add r1, r0, #0\n    add r1, #0xd2\n    ldrb r1, [r1]\n    lsl r1, r1, #0x1a\n    lsr r1, r1, #0x1a\n    cmp r1, #2\n    bne _0225C464\n    add r1, r0, #0\n    add r1, #0xd2\n    ldrb r2, [r1]\n    mov r1, #0x3f\n    add r0, #0xd2\n    bic r2, r1\n    mov r1, #3\n    orr r1, r2\n    strb r1, [r0]\n    ldr r0, _0225C4A4 ; =0x04001050\n    mov r1, #0\n    strh r1, [r0]\n    b _0225C496\n    ldr r1, [r4]\n    add r0, r4, #0\n    lsl r2, r1, #2\n    ldr r1, _0225C4A8 ; =ov27_0225D4D4\n    ldr r1, [r1, r2]\n    blx r1\n    cmp r0, #1\n    bne _0225C496\n    ldr r2, [r4, #0x24]\n    add r0, r2, #0\n    add r0, #0xd2\n    ldrb r1, [r0]\n    mov r0, #0x3f\n    add r2, #0xd2\n    bic r1, r0\n    strb r1, [r2]\n    mov r1, #0\n    ldr r0, [r4, #0x24]\n    add r2, r1, #0\n    bl ov01_021F6A9C\n    mov r0, #0x86\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl SpriteList_RenderAndAnimateSprites\n    pop {r4, pc}\n    nop\n    _0225C4A4: .word 0x04001050\n    _0225C4A8: .word ov27_0225D4D4"
    );
    #endif
}

void ov27_0225C4AC(void) {
    /* Original at 0x0225C4AC */
    /* Requires manual decompilation - 64 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0x14\n    add r5, r0, #0\n    mov r0, #0xef\n    mov r1, #8\n    bl NARC_New\n    mov r1, #0\n    ldr r2, _0225C53C ; =0x04001050\n    add r3, r1, #0\n    strh r1, [r2]\n    mov r2, #0xa0\n    str r2, [sp]\n    mov r2, #8\n    str r2, [sp, #4]\n    mov r2, #4\n    add r4, r0, #0\n    bl GfGfxLoader_GXLoadPalFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #8\n    str r0, [sp, #0xc]\n    ldr r2, [r5, #0x18]\n    add r0, r4, #0\n    mov r1, #1\n    mov r3, #6\n    bl GfGfxLoader_LoadCharDataFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #8\n    str r0, [sp, #0xc]\n    ldr r2, [r5, #0x18]\n    add r0, r4, #0\n    mov r1, #9\n    mov r3, #6\n    bl GfGfxLoader_LoadScrnDataFromOpenNarc\n    mov r0, #8\n    str r0, [sp]\n    add r0, r4, #0\n    mov r1, #9\n    mov r2, #0\n    add r3, sp, #0x10\n    bl GfGfxLoader_GetScrnDataFromOpenNarc\n    ldr r3, [sp, #0x10]\n    add r6, r0, #0\n    add r2, r3, #0\n    ldr r0, [r5, #0x18]\n    ldr r3, [r3, #8]\n    mov r1, #6\n    add r2, #0xc\n    bl BG_LoadScreenTilemapData\n    ldr r0, [r5, #0x18]\n    mov r1, #6\n    bl ScheduleBgTilemapBufferTransfer\n    add r0, r6, #0\n    bl Heap_Free\n    add r0, r4, #0\n    bl NARC_Delete\n    add sp, #0x14\n    pop {r3, r4, r5, r6, pc}\n    _0225C53C: .word 0x04001050"
    );
    #endif
}

void ov27_0225C540(void) {
    /* Original at 0x0225C540 */
    /* Requires manual decompilation - 73 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0x14\n    add r5, r0, #0\n    mov r0, #0xef\n    mov r1, #8\n    bl NARC_New\n    mov r1, #0\n    str r1, [sp]\n    str r1, [sp, #4]\n    str r1, [sp, #8]\n    mov r1, #8\n    str r1, [sp, #0xc]\n    ldr r2, [r5, #0x18]\n    mov r1, #1\n    mov r3, #4\n    add r4, r0, #0\n    bl GfGfxLoader_LoadCharDataFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #8\n    str r0, [sp, #0xc]\n    ldr r2, [r5, #0x18]\n    add r0, r4, #0\n    mov r1, #0xa\n    mov r3, #4\n    bl GfGfxLoader_LoadScrnDataFromOpenNarc\n    add r0, r4, #0\n    bl NARC_Delete\n    mov r0, #8\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #2\n    str r0, [sp, #8]\n    mov r0, #4\n    str r0, [sp, #0xc]\n    mov r0, #0x80\n    str r0, [sp, #0x10]\n    add r1, r5, #0\n    ldr r0, [r5, #0x18]\n    add r1, #0x28\n    mov r2, #5\n    mov r3, #0xc\n    bl AddWindowParameterized\n    mov r0, #0xe\n    str r0, [sp]\n    mov r0, #8\n    str r0, [sp, #4]\n    mov r0, #2\n    str r0, [sp, #8]\n    mov r0, #4\n    str r0, [sp, #0xc]\n    mov r0, #0x90\n    str r0, [sp, #0x10]\n    add r1, r5, #0\n    ldr r0, [r5, #0x18]\n    add r1, #0x38\n    mov r2, #5\n    mov r3, #0xc\n    bl AddWindowParameterized\n    add r0, r5, #0\n    ldr r1, [r5, #0x4c]\n    add r0, #0x28\n    mov r2, #0x2e\n    bl ov27_0225C8D0\n    add r0, r5, #0\n    ldr r1, [r5, #0x4c]\n    add r0, #0x38\n    mov r2, #0x2f\n    bl ov27_0225C8D0\n    add sp, #0x14\n    pop {r4, r5, pc}"
    );
    #endif
}

void ov27_0225C5E4(void) {
    /* Original at 0x0225C5E4 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x18]\n    mov r1, #4\n    bl BgClearTilemapBufferAndCommit\n    ldr r0, [r4, #0x18]\n    mov r1, #5\n    bl BgClearTilemapBufferAndCommit\n    ldr r0, [r4, #0x34]\n    cmp r0, #0\n    beq _0225C606\n    add r0, r4, #0\n    add r0, #0x28\n    bl RemoveWindow\n    ldr r0, [r4, #0x44]\n    cmp r0, #0\n    beq _0225C614\n    add r4, #0x38\n    add r0, r4, #0\n    bl RemoveWindow\n    pop {r4, pc}"
    );
    #endif
}

void ov27_0225C618(void) {
    /* Original at 0x0225C618 */
    /* Requires manual decompilation - 100 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x1c\n    str r0, [sp, #0x10]\n    ldr r0, [r0, #0xc]\n    bl ov01_021EEF58\n    add r7, r0, #0\n    ldr r0, [sp, #0x10]\n    ldr r0, [r0, #0xc]\n    bl ov01_021EEF60\n    add r6, r0, #0\n    mov r0, #0xef\n    mov r1, #8\n    bl NARC_New\n    mov r1, #0\n    str r1, [sp]\n    str r1, [sp, #4]\n    str r1, [sp, #8]\n    mov r1, #8\n    str r1, [sp, #0xc]\n    ldr r2, [sp, #0x10]\n    mov r1, #1\n    ldr r2, [r2, #0x18]\n    mov r3, #4\n    add r4, r0, #0\n    bl GfGfxLoader_LoadCharDataFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #8\n    str r0, [sp, #0xc]\n    ldr r2, [sp, #0x10]\n    add r0, r4, #0\n    ldr r2, [r2, #0x18]\n    add r1, r6, #0\n    mov r3, #4\n    bl GfGfxLoader_LoadScrnDataFromOpenNarc\n    add r0, r4, #0\n    bl NARC_Delete\n    mov r0, #0\n    str r0, [sp, #0x14]\n    cmp r6, #0\n    ble _0225C6A6\n    add r4, r0, #0\n    ldr r5, [sp, #0x10]\n    sub r0, r6, #2\n    lsl r0, r0, #2\n    add r5, #0x54\n    str r0, [sp, #0x18]\n    ldr r3, _0225C6F0 ; =ov27_0225D4B8\n    ldr r2, [sp, #0x18]\n    ldr r0, [sp, #0x10]\n    ldr r2, [r3, r2]\n    ldr r0, [r0, #0x18]\n    add r1, r5, #0\n    add r2, r2, r4\n    bl AddWindow\n    ldr r0, [sp, #0x14]\n    add r4, #8\n    add r0, r0, #1\n    add r5, #0x10\n    str r0, [sp, #0x14]\n    cmp r0, r6\n    blt _0225C686\n    mov r5, #0\n    cmp r6, #0\n    ble _0225C6E4\n    ldr r4, [sp, #0x10]\n    add r4, #0x54\n    add r0, r4, #0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _0225C6F4 ; =0x00020100\n    mov r1, #4\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    ldr r2, [r7]\n    add r0, r4, #0\n    mov r3, #0\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r4, #0\n    bl ScheduleWindowCopyToVram\n    add r5, r5, #1\n    add r4, #0x10\n    add r7, #8\n    cmp r5, r6\n    blt _0225C6B0\n    mov r1, #0x85\n    ldr r0, [sp, #0x10]\n    lsl r1, r1, #2\n    str r6, [r0, r1]\n    add sp, #0x1c\n    pop {r4, r5, r6, r7, pc}\n    _0225C6F0: .word ov27_0225D4B8\n    _0225C6F4: .word 0x00020100"
    );
    #endif
}

void ov27_0225C6F8(void) {
    /* Original at 0x0225C6F8 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0xc]\n    bl ov01_021EEF60\n    add r6, r0, #0\n    ldr r0, [r5, #0x18]\n    mov r1, #4\n    bl BgClearTilemapBufferAndCommit\n    ldr r0, [r5, #0x18]\n    mov r1, #5\n    bl BgClearTilemapBufferAndCommit\n    mov r4, #0\n    cmp r6, #0\n    ble _0225C72A\n    add r5, #0x54\n    add r0, r5, #0\n    bl RemoveWindow\n    add r4, r4, #1\n    add r5, #0x10\n    cmp r4, r6\n    blt _0225C71C\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov27_0225C72C(void) {
    /* Original at 0x0225C72C */
    /* Requires manual decompilation - 103 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    mov r1, #0x87\n    add r6, r0, #0\n    lsl r1, r1, #2\n    mov r0, #0x15\n    add r1, r6, r1\n    mov r2, #8\n    bl G2dRenderer_Init\n    mov r1, #0x86\n    lsl r1, r1, #2\n    str r0, [r6, r1]\n    add r0, r1, #4\n    mov r2, #1\n    add r0, r6, r0\n    mov r1, #0\n    lsl r2, r2, #0x14\n    bl G2dRenderer_SetSubSurfaceCoords\n    mov r7, #0xd1\n    mov r4, #0\n    add r5, r6, #0\n    lsl r7, r7, #2\n    mov r0, #0xa\n    add r1, r4, #0\n    mov r2, #8\n    bl Create2DGfxResObjMan\n    str r0, [r5, r7]\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #4\n    blt _0225C75C\n    mov r0, #0xa\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    mov r0, #8\n    str r0, [sp, #8]\n    mov r0, #0xd1\n    lsl r0, r0, #2\n    ldr r0, [r6, r0]\n    mov r1, #0xef\n    mov r2, #0xc\n    mov r3, #0\n    bl AddCharResObjFromNarc\n    mov r1, #0xd5\n    lsl r1, r1, #2\n    str r0, [r6, r1]\n    mov r0, #0xa\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #8\n    sub r1, #0xc\n    str r0, [sp, #0xc]\n    ldr r0, [r6, r1]\n    mov r1, #0xef\n    mov r2, #0xb\n    mov r3, #0\n    bl AddPlttResObjFromNarc\n    mov r1, #0xd6\n    lsl r1, r1, #2\n    str r0, [r6, r1]\n    mov r0, #0xa\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    mov r0, #8\n    sub r1, #0xc\n    str r0, [sp, #8]\n    ldr r0, [r6, r1]\n    mov r1, #0xef\n    mov r2, #0xd\n    mov r3, #0\n    bl AddCellOrAnimResObjFromNarc\n    mov r1, #0xd7\n    lsl r1, r1, #2\n    str r0, [r6, r1]\n    mov r0, #0xa\n    str r0, [sp]\n    mov r0, #3\n    str r0, [sp, #4]\n    mov r0, #8\n    sub r1, #0xc\n    str r0, [sp, #8]\n    ldr r0, [r6, r1]\n    mov r1, #0xef\n    mov r2, #0xe\n    mov r3, #0\n    bl AddCellOrAnimResObjFromNarc\n    mov r1, #0x36\n    lsl r1, r1, #4\n    str r0, [r6, r1]\n    sub r1, #0xc\n    ldr r0, [r6, r1]\n    bl sub_0200ADA4\n    mov r0, #0xd6\n    lsl r0, r0, #2\n    ldr r0, [r6, r0]\n    bl sub_0200B00C\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov27_0225C80C(void) {
    /* Original at 0x0225C80C */
    /* Requires manual decompilation - 91 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0x5c\n    add r4, r1, #0\n    mov r1, #0xa\n    add r5, r0, #0\n    add r0, r1, #0\n    str r1, [sp]\n    sub r0, #0xb\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r2, #0\n    str r2, [sp, #0xc]\n    mov r0, #0xd1\n    str r2, [sp, #0x10]\n    lsl r0, r0, #2\n    ldr r3, [r5, r0]\n    str r3, [sp, #0x14]\n    add r3, r0, #4\n    ldr r3, [r5, r3]\n    str r3, [sp, #0x18]\n    add r3, r0, #0\n    add r3, #8\n    ldr r3, [r5, r3]\n    str r3, [sp, #0x1c]\n    add r3, r0, #0\n    add r3, #0xc\n    ldr r3, [r5, r3]\n    add r0, #0x20\n    str r3, [sp, #0x20]\n    str r2, [sp, #0x24]\n    str r2, [sp, #0x28]\n    add r0, r5, r0\n    add r2, r1, #0\n    add r3, r1, #0\n    bl CreateSpriteResourcesHeader\n    mov r0, #0x86\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    ldr r1, _0225C8C8 ; =ov27_0225D118\n    lsl r2, r4, #2\n    ldrh r1, [r1, r2]\n    str r0, [sp, #0x2c]\n    mov r0, #0xd9\n    lsl r1, r1, #0xc\n    str r1, [sp, #0x34]\n    ldr r1, _0225C8CC ; =ov27_0225D11A\n    lsl r0, r0, #2\n    ldrh r2, [r1, r2]\n    mov r1, #1\n    lsl r1, r1, #8\n    add r2, r2, r1\n    lsl r1, r1, #4\n    add r0, r5, r0\n    str r0, [sp, #0x30]\n    mov r0, #0\n    lsl r2, r2, #0xc\n    str r0, [sp, #0x3c]\n    str r2, [sp, #0x38]\n    str r1, [sp, #0x40]\n    str r1, [sp, #0x44]\n    str r1, [sp, #0x48]\n    add r1, sp, #0x2c\n    strh r0, [r1, #0x20]\n    mov r0, #1\n    str r0, [sp, #0x50]\n    mov r0, #2\n    str r0, [sp, #0x54]\n    mov r0, #8\n    str r0, [sp, #0x58]\n    add r0, sp, #0x2c\n    bl Sprite_CreateAffine\n    mov r1, #0xe2\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    ldr r0, [r5, r1]\n    mov r1, #1\n    bl Sprite_SetAnimCtrlSeq\n    mov r0, #0xe2\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #1\n    bl Sprite_SetAnimActiveFlag\n    mov r0, #0xe2\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    add sp, #0x5c\n    pop {r4, r5, pc}\n    _0225C8C8: .word ov27_0225D118\n    _0225C8CC: .word ov27_0225D11A"
    );
    #endif
}

void ov27_0225C8D0(void) {
    /* Original at 0x0225C8D0 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    add r0, r1, #0\n    add r1, r2, #0\n    bl NewString_ReadMsgData\n    add r4, r0, #0\n    add r0, r5, #0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r3, #0\n    str r3, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _0225C910 ; =0x00020100\n    mov r1, #4\n    str r0, [sp, #8]\n    add r0, r5, #0\n    add r2, r4, #0\n    str r3, [sp, #0xc]\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r5, #0\n    bl ScheduleWindowCopyToVram\n    add r0, r4, #0\n    bl String_Delete\n    add sp, #0x10\n    pop {r3, r4, r5, pc}\n    _0225C910: .word 0x00020100"
    );
    #endif
}

void ov27_0225C914(void) {
    /* Original at 0x0225C914 */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #8\n    bl MessageFormat_New\n    str r0, [r4, #0x50]\n    mov r0, #0\n    mov r1, #0x1b\n    mov r2, #0xbf\n    mov r3, #8\n    bl NewMsgDataFromNarc\n    str r0, [r4, #0x4c]\n    pop {r4, pc}"
    );
    #endif
}

void ov27_0225C930(void) {
    /* Original at 0x0225C930 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x4c]\n    bl DestroyMsgData\n    ldr r0, [r4, #0x50]\n    bl MessageFormat_Delete\n    pop {r4, pc}"
    );
    #endif
}

void ov27_0225C944(void) {
    /* Original at 0x0225C944 */
    /* Requires manual decompilation - 4 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #1\n    str r1, [r0]\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void ov27_0225C94C(void) {
    /* Original at 0x0225C94C */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r1, #0xe5\n    add r4, r0, #0\n    mov r2, #0\n    lsl r1, r1, #2\n    str r2, [r4, r1]\n    bl ov27_0225C540\n    mov r0, #0xe2\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #1\n    bl Sprite_SetDrawFlag\n    mov r1, #0xe5\n    lsl r1, r1, #2\n    ldr r1, [r4, r1]\n    add r0, r4, #0\n    bl ov27_0225CCE0\n    mov r0, #0xe2\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #1\n    bl Sprite_SetAnimCtrlSeq\n    mov r0, #4\n    str r0, [r4]\n    mov r0, #0\n    pop {r4, pc}"
    );
    #endif
}

void ov27_0225C988(void) {
    ov27_0225CD94();
}

void ov27_0225C994(void) {
    /* Original at 0x0225C994 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0xe2\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl Sprite_IsAnimated\n    cmp r0, #0\n    bne _0225C9C6\n    mov r0, #0xe2\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    add r0, r4, #0\n    bl ov27_0225C5E4\n    mov r0, #0xe5\n    lsl r0, r0, #2\n    ldr r1, [r4, r0]\n    ldr r0, [r4, #4]\n    strh r1, [r0]\n    mov r0, #6\n    str r0, [r4]\n    mov r0, #0\n    pop {r4, pc}"
    );
    #endif
}

void ov27_0225C9CC(void) {
    Sprite_SetDrawFlag(0, 0xe2, 1, 0);
}

void ov27_0225C9E4(void) {
    /* Original at 0x0225C9E4 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, [r0, #0x10]\n    add r1, r1, #1\n    str r1, [r0, #0x10]\n    cmp r1, #0x14\n    ble _0225C9F2\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void ov27_0225C9F8(void) {
    /* Original at 0x0225C9F8 */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _0225CA0C ; =gSystem + 0x40\n    ldrh r0, [r0, #0x26]\n    cmp r0, #0\n    beq _0225CA06\n    ldr r0, _0225CA10 ; =gSystem\n    mov r1, #1\n    str r1, [r0, #0x5c]\n    mov r0, #0\n    bx lr\n    nop\n    _0225CA0C: .word gSystem + 0x40\n    _0225CA10: .word gSystem"
    );
    #endif
}

void ov27_0225CA14(void) {
    /* Original at 0x0225CA14 */
    /* Requires manual decompilation - 38 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r1, #8\n    str r1, [r4]\n    mov r1, #0xe5\n    mov r2, #0\n    lsl r1, r1, #2\n    str r2, [r4, r1]\n    bl ov27_0225C618\n    mov r0, #0xe2\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #1\n    bl Sprite_SetDrawFlag\n    mov r1, #0x85\n    mov r2, #0xe5\n    lsl r1, r1, #2\n    lsl r2, r2, #2\n    ldr r1, [r4, r1]\n    ldr r2, [r4, r2]\n    add r0, r4, #0\n    bl ov27_0225CD18\n    mov r1, #0xe7\n    lsl r1, r1, #2\n    ldr r2, [r4, r1]\n    cmp r2, #0\n    beq _0225CA5A\n    add r0, r1, #4\n    sub r1, #8\n    ldr r0, [r4, r0]\n    ldr r1, [r4, r1]\n    blx r2\n    ldr r1, _0225CA64 ; =0x0000EEEE\n    ldr r0, [r4, #4]\n    strh r1, [r0]\n    mov r0, #0\n    pop {r4, pc}\n    _0225CA64: .word 0x0000EEEE"
    );
    #endif
}

void ov27_0225CA68(void) {
    /* Original at 0x0225CA68 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    sub r1, r1, #2\n    lsl r4, r1, #2\n    ldr r1, _0225CA94 ; =ov27_0225D480\n    ldr r3, [r0]\n    ldr r4, [r1, r4]\n    lsl r1, r3, #2\n    add r1, r4, r1\n    ldrsb r2, [r2, r1]\n    mov r1, #0\n    mvn r1, r1\n    cmp r2, r1\n    beq _0225CA86\n    cmp r3, r2\n    bne _0225CA8C\n    mov r0, #0\n    pop {r3, r4}\n    bx lr\n    str r2, [r0]\n    mov r0, #1\n    pop {r3, r4}\n    bx lr\n    _0225CA94: .word ov27_0225D480"
    );
    #endif
}

void ov27_0225CA98(void) {
    /* Original at 0x0225CA98 */
    /* Requires manual decompilation - 227 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0x85\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    sub r0, r0, #2\n    lsl r1, r0, #2\n    ldr r0, _0225CC84 ; =ov27_0225D49C\n    ldr r0, [r0, r1]\n    bl TouchscreenHitbox_FindRectAtTouchNew\n    mov r1, #0\n    mvn r1, r1\n    cmp r0, r1\n    beq _0225CAF6\n    mov r2, #0xe5\n    lsl r2, r2, #2\n    str r0, [r4, r2]\n    mov r1, #0x85\n    lsl r1, r1, #2\n    ldr r1, [r4, r1]\n    ldr r2, [r4, r2]\n    add r0, r4, #0\n    bl ov27_0225CD18\n    ldr r0, _0225CC88 ; =0x000005DC\n    bl PlaySE\n    mov r0, #9\n    mov r1, #0x85\n    str r0, [r4]\n    lsl r1, r1, #2\n    ldr r1, [r4, r1]\n    add r0, r4, #0\n    bl ov27_0225CD74\n    mov r1, #0xe7\n    lsl r1, r1, #2\n    ldr r2, [r4, r1]\n    cmp r2, #0\n    beq _0225CB60\n    add r0, r1, #4\n    sub r1, #8\n    ldr r0, [r4, r0]\n    ldr r1, [r4, r1]\n    blx r2\n    b _0225CC80\n    ldr r0, _0225CC8C ; =gSystem\n    mov r1, #0x40\n    ldr r0, [r0, #0x48]\n    tst r1, r0\n    beq _0225CB44\n    mov r1, #0x85\n    mov r0, #0xe5\n    lsl r1, r1, #2\n    lsl r0, r0, #2\n    ldr r1, [r4, r1]\n    add r0, r4, r0\n    mov r2, #0\n    bl ov27_0225CA68\n    cmp r0, #0\n    beq _0225CB60\n    mov r1, #0x85\n    mov r2, #0xe5\n    lsl r1, r1, #2\n    lsl r2, r2, #2\n    ldr r1, [r4, r1]\n    ldr r2, [r4, r2]\n    add r0, r4, #0\n    bl ov27_0225CD18\n    ldr r0, _0225CC88 ; =0x000005DC\n    bl PlaySE\n    mov r1, #0xe7\n    lsl r1, r1, #2\n    ldr r2, [r4, r1]\n    cmp r2, #0\n    beq _0225CB60\n    add r0, r1, #4\n    sub r1, #8\n    ldr r0, [r4, r0]\n    ldr r1, [r4, r1]\n    blx r2\n    b _0225CC80\n    mov r1, #0x80\n    tst r1, r0\n    beq _0225CB90\n    mov r1, #0x85\n    mov r0, #0xe5\n    lsl r1, r1, #2\n    lsl r0, r0, #2\n    ldr r1, [r4, r1]\n    add r0, r4, r0\n    mov r2, #1\n    bl ov27_0225CA68\n    cmp r0, #0\n    bne _0225CB62\n    b _0225CC80\n    mov r1, #0x85\n    mov r2, #0xe5\n    lsl r1, r1, #2\n    lsl r2, r2, #2\n    ldr r1, [r4, r1]\n    ldr r2, [r4, r2]\n    add r0, r4, #0\n    bl ov27_0225CD18\n    ldr r0, _0225CC88 ; =0x000005DC\n    bl PlaySE\n    mov r1, #0xe7\n    lsl r1, r1, #2\n    ldr r2, [r4, r1]\n    cmp r2, #0\n    beq _0225CC80\n    add r0, r1, #4\n    sub r1, #8\n    ldr r0, [r4, r0]\n    ldr r1, [r4, r1]\n    blx r2\n    b _0225CC80\n    mov r1, #0x20\n    tst r1, r0\n    beq _0225CBDA\n    mov r1, #0x85\n    mov r0, #0xe5\n    lsl r1, r1, #2\n    lsl r0, r0, #2\n    ldr r1, [r4, r1]\n    add r0, r4, r0\n    mov r2, #2\n    bl ov27_0225CA68\n    cmp r0, #0\n    beq _0225CC80\n    mov r1, #0x85\n    mov r2, #0xe5\n    lsl r1, r1, #2\n    lsl r2, r2, #2\n    ldr r1, [r4, r1]\n    ldr r2, [r4, r2]\n    add r0, r4, #0\n    bl ov27_0225CD18\n    ldr r0, _0225CC88 ; =0x000005DC\n    bl PlaySE\n    mov r1, #0xe7\n    lsl r1, r1, #2\n    ldr r2, [r4, r1]\n    cmp r2, #0\n    beq _0225CC80\n    add r0, r1, #4\n    sub r1, #8\n    ldr r0, [r4, r0]\n    ldr r1, [r4, r1]\n    blx r2\n    b _0225CC80\n    mov r1, #0x10\n    tst r1, r0\n    beq _0225CC24\n    mov r1, #0x85\n    mov r0, #0xe5\n    lsl r1, r1, #2\n    lsl r0, r0, #2\n    ldr r1, [r4, r1]\n    add r0, r4, r0\n    mov r2, #3\n    bl ov27_0225CA68\n    cmp r0, #0\n    beq _0225CC80\n    mov r1, #0x85\n    mov r2, #0xe5\n    lsl r1, r1, #2\n    lsl r2, r2, #2\n    ldr r1, [r4, r1]\n    ldr r2, [r4, r2]\n    add r0, r4, #0\n    bl ov27_0225CD18\n    ldr r0, _0225CC88 ; =0x000005DC\n    bl PlaySE\n    mov r1, #0xe7\n    lsl r1, r1, #2\n    ldr r2, [r4, r1]\n    cmp r2, #0\n    beq _0225CC80\n    add r0, r1, #4\n    sub r1, #8\n    ldr r0, [r4, r0]\n    ldr r1, [r4, r1]\n    blx r2\n    b _0225CC80\n    mov r1, #1\n    tst r1, r0\n    beq _0225CC42\n    mov r1, #0x85\n    lsl r1, r1, #2\n    ldr r1, [r4, r1]\n    add r0, r4, #0\n    bl ov27_0225CD74\n    mov r0, #9\n    str r0, [r4]\n    ldr r0, _0225CC88 ; =0x000005DC\n    bl PlaySE\n    b _0225CC80\n    mov r1, #2\n    tst r0, r1\n    beq _0225CC80\n    ldr r0, [r4, #0xc]\n    bl ov01_021EF00C\n    cmp r0, #0\n    beq _0225CC80\n    mov r1, #0x85\n    lsl r1, r1, #2\n    ldr r0, [r4, r1]\n    mov r2, #0xe5\n    sub r0, r0, #1\n    lsl r2, r2, #2\n    str r0, [r4, r2]\n    ldr r1, [r4, r1]\n    ldr r2, [r4, r2]\n    add r0, r4, #0\n    bl ov27_0225CD18\n    mov r1, #0x85\n    lsl r1, r1, #2\n    ldr r1, [r4, r1]\n    add r0, r4, #0\n    bl ov27_0225CD74\n    mov r0, #9\n    str r0, [r4]\n    ldr r0, _0225CC88 ; =0x000005DC\n    bl PlaySE\n    mov r0, #0\n    pop {r4, pc}\n    _0225CC84: .word ov27_0225D49C\n    _0225CC88: .word 0x000005DC\n    _0225CC8C: .word gSystem"
    );
    #endif
}

void ov27_0225CC90(void) {
    /* Original at 0x0225CC90 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0xe2\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl Sprite_IsAnimated\n    cmp r0, #0\n    bne _0225CCB8\n    mov r0, #0xe2\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    add r0, r4, #0\n    bl ov27_0225C6F8\n    mov r0, #0xa\n    str r0, [r4]\n    mov r0, #0\n    pop {r4, pc}"
    );
    #endif
}

void ov27_0225CCBC(void) {
    /* Original at 0x0225CCBC */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0xc]\n    bl ov01_021EEF58\n    mov r1, #0xe5\n    lsl r1, r1, #2\n    ldr r1, [r4, r1]\n    lsl r1, r1, #3\n    add r0, r0, r1\n    ldr r1, [r0, #4]\n    ldr r0, [r4, #4]\n    strh r1, [r0]\n    mov r0, #1\n    str r0, [r4]\n    mov r0, #0\n    pop {r4, pc}"
    );
    #endif
}

void ov27_0225CCE0(void) {
    /* Original at 0x0225CCE0 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {lr}\n    sub sp, #0xc\n    lsl r2, r1, #2\n    ldr r1, _0225CD10 ; =ov27_0225D118\n    ldrh r1, [r1, r2]\n    lsl r1, r1, #0xc\n    str r1, [sp]\n    ldr r1, _0225CD14 ; =ov27_0225D11A\n    ldrh r2, [r1, r2]\n    mov r1, #1\n    lsl r1, r1, #8\n    add r1, r2, r1\n    lsl r1, r1, #0xc\n    str r1, [sp, #4]\n    mov r1, #0\n    str r1, [sp, #8]\n    mov r1, #0xe2\n    lsl r1, r1, #2\n    ldr r0, [r0, r1]\n    add r1, sp, #0\n    bl Sprite_SetMatrix\n    add sp, #0xc\n    pop {pc}\n    _0225CD10: .word ov27_0225D118\n    _0225CD14: .word ov27_0225D11A"
    );
    #endif
}

void ov27_0225CD18(void) {
    /* Original at 0x0225CD18 */
    /* Requires manual decompilation - 41 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    lsl r0, r2, #1\n    sub r3, r1, #2\n    add r2, r2, r0\n    add r1, r3, #0\n    mov r0, #0x18\n    mul r1, r0\n    ldr r3, _0225CD68 ; =ov27_0225D3C4\n    add r0, #0xe8\n    add r3, r3, r1\n    ldrb r3, [r2, r3]\n    lsl r3, r3, #0xc\n    str r3, [sp]\n    ldr r3, _0225CD6C ; =ov27_0225D3C5\n    add r3, r3, r1\n    ldrb r3, [r2, r3]\n    add r0, r3, r0\n    lsl r0, r0, #0xc\n    ldr r3, _0225CD70 ; =ov27_0225D3C6\n    str r0, [sp, #4]\n    mov r0, #0\n    str r0, [sp, #8]\n    mov r0, #0xe2\n    add r1, r3, r1\n    lsl r0, r0, #2\n    ldrb r1, [r2, r1]\n    ldr r0, [r4, r0]\n    bl Sprite_SetAnimCtrlSeq\n    mov r0, #0xe2\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    add r1, sp, #0\n    bl Sprite_SetMatrix\n    add sp, #0xc\n    pop {r3, r4, pc}\n    nop\n    _0225CD68: .word ov27_0225D3C4\n    _0225CD6C: .word ov27_0225D3C5\n    _0225CD70: .word ov27_0225D3C6"
    );
    #endif
}

void ov27_0225CD74(void) {
    /* Original at 0x0225CD74 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "mov r2, #0xe2\n    lsl r2, r2, #2\n    ldr r0, [r0, r2]\n    sub r2, r1, #2\n    mov r1, #0x18\n    add r3, r2, #0\n    mul r3, r1\n    ldr r1, _0225CD8C ; =ov27_0225D3C6\n    ldrb r1, [r1, r3]\n    ldr r3, _0225CD90 ; =sub_020248F0\n    add r1, r1, #2\n    bx r3\n    _0225CD8C: .word ov27_0225D3C6\n    _0225CD90: .word Sprite_SetAnimCtrlSeq"
    );
    #endif
}

void ov27_0225CD94(void) {
    /* Original at 0x0225CD94 */
    /* Requires manual decompilation - 121 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _0225CEA0 ; =ov27_0225D120\n    bl TouchscreenHitbox_FindRectAtTouchNew\n    mov r1, #0\n    mvn r1, r1\n    cmp r0, r1\n    beq _0225CDFE\n    cmp r0, #0\n    bne _0225CDD2\n    mov r1, #0xe5\n    mov r0, #0\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    ldr r1, [r4, r1]\n    add r0, r4, #0\n    bl ov27_0225CCE0\n    mov r0, #0xe2\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #3\n    bl Sprite_SetAnimCtrlSeq\n    ldr r0, _0225CEA4 ; =0x000005DC\n    bl PlaySE\n    mov r0, #5\n    str r0, [r4]\n    b _0225CE9C\n    cmp r0, #1\n    bne _0225CE9C\n    mov r1, #0xe5\n    mov r0, #1\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    ldr r1, [r4, r1]\n    add r0, r4, #0\n    bl ov27_0225CCE0\n    mov r0, #0xe2\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #3\n    bl Sprite_SetAnimCtrlSeq\n    ldr r0, _0225CEA4 ; =0x000005DC\n    bl PlaySE\n    mov r0, #5\n    str r0, [r4]\n    b _0225CE9C\n    ldr r0, _0225CEA8 ; =gSystem\n    mov r1, #0x40\n    ldr r0, [r0, #0x48]\n    tst r1, r0\n    beq _0225CE2A\n    mov r0, #0xe5\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    cmp r0, #1\n    bne _0225CE18\n    ldr r0, _0225CEA4 ; =0x000005DC\n    bl PlaySE\n    mov r1, #0xe5\n    mov r0, #0\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    ldr r1, [r4, r1]\n    add r0, r4, #0\n    bl ov27_0225CCE0\n    b _0225CE9C\n    mov r1, #0x80\n    tst r1, r0\n    beq _0225CE52\n    mov r0, #0xe5\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    bne _0225CE40\n    ldr r0, _0225CEA4 ; =0x000005DC\n    bl PlaySE\n    mov r1, #0xe5\n    mov r0, #1\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    ldr r1, [r4, r1]\n    add r0, r4, #0\n    bl ov27_0225CCE0\n    b _0225CE9C\n    mov r2, #1\n    add r1, r0, #0\n    tst r1, r2\n    beq _0225CE72\n    mov r0, #0xe2\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #3\n    bl Sprite_SetAnimCtrlSeq\n    mov r0, #5\n    str r0, [r4]\n    ldr r0, _0225CEA4 ; =0x000005DC\n    bl PlaySE\n    b _0225CE9C\n    mov r1, #2\n    tst r0, r1\n    beq _0225CE9C\n    mov r1, #0xe5\n    lsl r1, r1, #2\n    str r2, [r4, r1]\n    ldr r1, [r4, r1]\n    add r0, r4, #0\n    bl ov27_0225CCE0\n    mov r0, #0xe2\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #3\n    bl Sprite_SetAnimCtrlSeq\n    ldr r0, _0225CEA4 ; =0x000005DC\n    bl PlaySE\n    mov r0, #5\n    str r0, [r4]\n    mov r0, #0\n    pop {r4, pc}\n    _0225CEA0: .word ov27_0225D120\n    _0225CEA4: .word 0x000005DC\n    _0225CEA8: .word gSystem"
    );
    #endif
}

void ov27_0225CEAC(void) {
    ov27_0225C5E4();
    ov27_0225C9CC(r4);
}
