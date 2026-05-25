/* Decompiled from asm/overlay_15.s */
#include "global.h"

void Bag_Init(void) {
    /* Original at 0x021F9380 */
    /* Requires manual decompilation - 267 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    mov r0, #0\n    add r1, r0, #0\n    bl Main_SetVBlankIntrCB\n    bl HBlankInterruptDisable\n    bl GfGfx_DisableEngineAPlanes\n    bl GfGfx_DisableEngineBPlanes\n    mov r0, #1\n    lsl r0, r0, #0x1a\n    ldr r2, [r0]\n    ldr r1, _021F95EC ; =0xFFFFE0FF\n    ldr r3, _021F95F0 ; =0x04001000\n    and r2, r1\n    str r2, [r0]\n    ldr r2, [r3]\n    add r0, #0x50\n    and r1, r2\n    str r1, [r3]\n    mov r1, #0\n    strh r1, [r0]\n    add r3, #0x50\n    mov r2, #0x42\n    strh r1, [r3]\n    mov r0, #3\n    mov r1, #6\n    lsl r2, r2, #0xc\n    bl Heap_Create\n    ldr r1, _021F95F4 ; =0x0000094C\n    add r0, r5, #0\n    mov r2, #6\n    bl OverlayManager_CreateAndGetData\n    ldr r2, _021F95F4 ; =0x0000094C\n    mov r1, #0\n    add r4, r0, #0\n    bl memset\n    add r0, r5, #0\n    bl OverlayManager_GetArgs\n    mov r1, #0x8d\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    add r0, r4, #0\n    bl BagApp_GetSaveStructPtrs\n    mov r0, #6\n    bl BgConfig_Alloc\n    str r0, [r4]\n    mov r0, #0x8f\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl PlayerProfile_GetTrainerGender\n    ldr r1, _021F95F8 ; =0x00000615\n    mov r3, #0\n    strb r0, [r4, r1]\n    mov r1, #6\n    str r1, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    str r1, [sp, #8]\n    mov r1, #3\n    mov r0, #2\n    add r2, r1, #0\n    bl BeginNormalPaletteFade\n    mov r0, #3\n    mov r1, #8\n    bl SetKeyRepeatTimers\n    add r0, r4, #0\n    bl ov15_021F9DB4\n    add r0, r4, #0\n    bl ov15_021F9CBC\n    add r0, r4, #0\n    bl ov15_021FA008\n    add r0, r4, #0\n    bl ov15_021F9D28\n    add r0, r4, #0\n    bl ov15_021FA620\n    bl ov15_021F9984\n    ldr r0, [r4]\n    bl ov15_021F99A4\n    add r0, r4, #0\n    bl ov15_021F9AE4\n    bl sub_020210BC\n    mov r0, #4\n    bl sub_02021148\n    add r0, r4, #0\n    bl ov15_021FE020\n    mov r0, #1\n    bl TextFlags_SetCanTouchSpeedUpPrint\n    add r0, r4, #0\n    bl ov15_021FE4C8\n    add r0, r4, #0\n    bl ov15_021FE528\n    add r0, r4, #0\n    bl ov15_021FEA5C\n    add r0, r4, #0\n    bl ov15_021FE874\n    add r0, r4, #0\n    bl ov15_021F9F08\n    add r0, r4, #0\n    mov r1, #0\n    bl ov15_021FF29C\n    mov r0, #0x8d\n    lsl r0, r0, #2\n    ldr r3, [r4, r0]\n    add r0, r3, #0\n    add r0, #0x64\n    ldrb r1, [r0]\n    mov r0, #0xc\n    add r2, r1, #0\n    mul r2, r0\n    add r0, r3, #0\n    add r1, r3, #0\n    add r0, #0xa\n    add r1, #8\n    add r0, r0, r2\n    add r1, r1, r2\n    add r2, r3, r2\n    ldrb r2, [r2, #0xd]\n    bl ov15_021FA044\n    mov r0, #0x8d\n    lsl r0, r0, #2\n    ldr r3, [r4, r0]\n    add r0, r3, #0\n    add r0, #0x64\n    ldrb r1, [r0]\n    mov r0, #0xc\n    add r2, r1, #0\n    mul r2, r0\n    add r0, r3, #0\n    add r1, r3, #0\n    add r0, #0xa\n    add r1, #8\n    add r0, r0, r2\n    add r1, r1, r2\n    add r2, r3, r2\n    ldrb r2, [r2, #0xd]\n    mov r3, #6\n    bl ov15_021FA070\n    add r0, r4, #0\n    bl ov15_021FF850\n    add r0, r4, #0\n    bl ov15_021FA074\n    mov r1, #0\n    add r2, r0, #0\n    add r0, r4, #0\n    add r3, r1, #0\n    bl ov15_021FD574\n    mov r0, #0x8d\n    lsl r0, r0, #2\n    ldr r3, [r4, r0]\n    add r0, r4, #0\n    add r1, r3, #0\n    add r1, #0x64\n    ldrb r2, [r1]\n    mov r1, #0xc\n    mul r1, r2\n    add r1, r3, r1\n    mov r2, #0xa\n    ldrsh r1, [r1, r2]\n    sub r2, #0xb\n    mov r3, #0\n    bl ov15_021FF364\n    mov r1, #0x8d\n    lsl r1, r1, #2\n    ldr r1, [r4, r1]\n    add r0, r4, #0\n    add r1, #0x64\n    ldrb r1, [r1]\n    bl ov15_02200030\n    mov r2, #0x8d\n    lsl r2, r2, #2\n    ldr r2, [r4, r2]\n    add r0, r4, #0\n    add r2, #0x64\n    ldrb r2, [r2]\n    mov r1, #1\n    bl ov15_021FD404\n    mov r0, #0x8d\n    lsl r0, r0, #2\n    ldr r3, [r4, r0]\n    add r0, r3, #0\n    add r0, #0x64\n    ldrb r1, [r0]\n    mov r0, #0xc\n    add r2, r1, #0\n    mul r2, r0\n    add r3, r3, r2\n    mov r2, #0xa\n    ldrb r1, [r3, #0xd]\n    ldrsh r2, [r3, r2]\n    add r0, r4, #0\n    mov r3, #0\n    bl ov15_021FF6BC\n    mov r0, #0x8d\n    lsl r0, r0, #2\n    ldr r5, [r4, r0]\n    add r0, r4, #0\n    bl ov15_021FA074\n    add r1, r5, #4\n    add r5, #0x64\n    add r2, r0, #0\n    ldrb r5, [r5]\n    mov r3, #0xc\n    add r0, r4, #0\n    mul r3, r5\n    add r1, r1, r3\n    mov r3, #1\n    bl ov15_02200140\n    mov r0, #0x8d\n    lsl r0, r0, #2\n    ldr r2, [r4, r0]\n    add r0, r2, #0\n    add r0, #0x64\n    ldrb r1, [r0]\n    mov r0, #0xc\n    mul r0, r1\n    add r0, r2, r0\n    ldrh r0, [r0, #8]\n    ldr r1, _021F95FC ; =0x00000644\n    add r0, #8\n    str r0, [r4, r1]\n    ldr r1, [r4, r1]\n    add r0, r4, #0\n    bl ov15_021FFECC\n    add r0, r4, #0\n    bl ov15_021FA170\n    mov r0, #0x8d\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    add r0, #0x65\n    ldrb r0, [r0]\n    add r0, #0xfc\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    cmp r0, #1\n    bhi _021F95B6\n    add r0, r4, #0\n    bl ov15_021FF1E0\n    add r0, r4, #0\n    bl ov15_021FD93C\n    ldr r0, _021F9600 ; =ov15_021F995C\n    add r1, r4, #0\n    bl Main_SetVBlankIntrCB\n    mov r1, #0\n    mov r0, #0x33\n    add r2, r1, #0\n    bl Sound_SetSceneAndPlayBGM\n    bl sub_0203A964\n    ldr r2, _021F9604 ; =0x04000304\n    ldrh r1, [r2]\n    lsr r0, r2, #0xb\n    orr r0, r1\n    strh r0, [r2]\n    mov r0, #4\n    mov r1, #1\n    bl ToggleBgLayer\n    mov r0, #1\n    add sp, #0xc\n    pop {r4, r5, pc}\n    nop\n    _021F95EC: .word 0xFFFFE0FF\n    _021F95F0: .word 0x04001000\n    _021F95F4: .word 0x0000094C\n    _021F95F8: .word 0x00000615\n    _021F95FC: .word 0x00000644\n    _021F9600: .word ov15_021F995C\n    _021F9604: .word 0x04000304"
    );
    #endif
}

void Bag_Main(void) {
    /* Original at 0x021F9608 */
    /* Requires manual decompilation - 194 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    bl OverlayManager_GetData\n    ldr r1, [r4]\n    add r5, r0, #0\n    cmp r1, #0x25\n    bhi _021F96B8\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _021F9624: ; jump table\n    bl IsPaletteFadeFinished\n    cmp r0, #1\n    bne _021F96B8\n    mov r0, #0x8d\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    add r0, #0x65\n    ldrb r0, [r0]\n    cmp r0, #1\n    beq _021F9696\n    cmp r0, #2\n    beq _021F9690\n    cmp r0, #3\n    beq _021F969C\n    b _021F96A2\n    mov r0, #0x10\n    str r0, [r4]\n    b _021F9810\n    mov r0, #0xe\n    str r0, [r4]\n    b _021F9810\n    mov r0, #0x1a\n    str r0, [r4]\n    b _021F9810\n    mov r0, #1\n    str r0, [r4]\n    b _021F9810\n    bl ov15_021FA1BC\n    str r0, [r4]\n    b _021F9810\n    bl ov15_021FA93C\n    cmp r0, #1\n    beq _021F96BA\n    b _021F9810\n    mov r0, #0x8d\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    add r0, #0x65\n    ldrb r0, [r0]\n    cmp r0, #2\n    bne _021F96CE\n    mov r0, #0x10\n    str r0, [r4]\n    b _021F9810\n    cmp r0, #1\n    bne _021F96D8\n    mov r0, #0xe\n    str r0, [r4]\n    b _021F9810\n    cmp r0, #3\n    bne _021F96E2\n    mov r0, #0x1a\n    str r0, [r4]\n    b _021F9810\n    mov r0, #1\n    str r0, [r4]\n    b _021F9810\n    bl ov15_021FAE48\n    str r0, [r4]\n    b _021F9810\n    bl ov15_021FB5AC\n    str r0, [r4]\n    b _021F9810\n    bl ov15_021FBD50\n    str r0, [r4]\n    b _021F9810\n    bl ov15_021FBF98\n    str r0, [r4]\n    b _021F9810\n    bl ov15_021FBFC0\n    str r0, [r4]\n    b _021F9810\n    bl ov15_021FBFF8\n    str r0, [r4]\n    b _021F9810\n    bl ov15_021FC01C\n    str r0, [r4]\n    b _021F9810\n    bl ov15_021FC140\n    str r0, [r4]\n    b _021F9810\n    bl ov15_021FC164\n    str r0, [r4]\n    b _021F9810\n    bl ov15_021FB700\n    str r0, [r4]\n    b _021F9810\n    bl ov15_021FB820\n    str r0, [r4]\n    b _021F9810\n    bl ov15_021FC41C\n    str r0, [r4]\n    b _021F9810\n    bl ov15_021FC784\n    str r0, [r4]\n    b _021F9810\n    bl ov15_021FC7EC\n    str r0, [r4]\n    b _021F9810\n    bl ov15_021FCD80\n    str r0, [r4]\n    b _021F9810\n    bl ov15_021FCDE4\n    str r0, [r4]\n    b _021F9810\n    bl ov15_021FCFC8\n    str r0, [r4]\n    b _021F9810\n    bl ov15_021FD058\n    str r0, [r4]\n    b _021F9810\n    bl ov15_021FD0E8\n    str r0, [r4]\n    b _021F9810\n    bl ov15_021FD10C\n    str r0, [r4]\n    b _021F9810\n    bl ov15_021FD24C\n    str r0, [r4]\n    b _021F9810\n    bl ov15_021FD2FC\n    str r0, [r4]\n    b _021F9810\n    bl ov15_021FD3AC\n    str r0, [r4]\n    b _021F9810\n    bl ov15_021FC2E0\n    str r0, [r4]\n    b _021F9810\n    bl ov15_021FA4F8\n    str r0, [r4]\n    b _021F9810\n    bl ov15_021FB604\n    str r0, [r4]\n    b _021F9810\n    bl ov15_021FB654\n    str r0, [r4]\n    b _021F9810\n    mov r1, #1\n    bl ov15_021FA578\n    str r0, [r4]\n    b _021F9810\n    mov r1, #0\n    mvn r1, r1\n    bl ov15_021FA578\n    str r0, [r4]\n    b _021F9810\n    bl ov15_021FB060\n    str r0, [r4]\n    b _021F9810\n    bl ov15_021FAFFC\n    str r0, [r4]\n    b _021F9810\n    bl ov15_021FCB64\n    str r0, [r4]\n    b _021F9810\n    bl ov15_021FD850\n    str r0, [r4]\n    b _021F9810\n    mov r0, #1\n    mov r1, #6\n    bl sub_020880CC\n    mov r0, #0x25\n    str r0, [r4]\n    b _021F9810\n    bl IsPaletteFadeFinished\n    cmp r0, #1\n    bne _021F9810\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    add r0, r5, #0\n    bl ov15_021FF8D4\n    mov r0, #0x93\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl SpriteSystem_DrawSprites\n    add r0, r5, #0\n    bl ov15_021FDC88\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void Bag_Exit(void) {
    /* Original at 0x021F982C */
    /* Requires manual decompilation - 72 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    bl OverlayManager_GetData\n    add r4, r0, #0\n    bl ov15_021FDC6C\n    add r0, r4, #0\n    bl ov15_021FF894\n    ldr r0, _021F98EC ; =0x0000068C\n    ldr r0, [r4, r0]\n    bl Heap_Free\n    mov r0, #0x69\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    bl Heap_Free\n    add r0, r4, #0\n    bl ov15_021FA0D8\n    add r0, r4, #0\n    bl ov15_021F9EA8\n    add r0, r4, #0\n    bl ov15_021FE154\n    ldr r0, [r4]\n    bl ov15_021F9A8C\n    bl sub_02021238\n    bl GF_DestroyVramTransferManager\n    add r0, r4, #0\n    bl ov15_021FEB64\n    add r0, r4, #0\n    bl ov15_021FE504\n    add r0, r4, #0\n    bl ov15_021FE8A4\n    add r0, r4, #0\n    bl ov15_021FA028\n    ldr r0, _021F98F0 ; =0x000005E4\n    ldr r0, [r4, r0]\n    bl String_Delete\n    mov r0, #0xbf\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl DestroyMsgData\n    mov r0, #0xbe\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl DestroyMsgData\n    mov r0, #0x2f\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    bl DestroyMsgData\n    mov r0, #0xbb\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl MessagePrinter_Delete\n    mov r0, #0xbd\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl MessageFormat_Delete\n    mov r0, #0x91\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl NARC_Delete\n    add r0, r5, #0\n    bl OverlayManager_FreeData\n    bl sub_02004B10\n    mov r0, #0\n    add r1, r0, #0\n    bl Main_SetVBlankIntrCB\n    mov r0, #6\n    bl Heap_Destroy\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    nop\n    _021F98EC: .word 0x0000068C\n    _021F98F0: .word 0x000005E4"
    );
    #endif
}

void BagApp_GetSaveStructPtrs(void) {
    /* Original at 0x021F98F4 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0x8d\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    ldr r0, [r0]\n    bl Save_Bag_Get\n    mov r1, #0x8e\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    sub r0, r1, #4\n    ldr r0, [r4, r0]\n    ldr r0, [r0]\n    bl Save_PlayerData_GetProfile\n    mov r1, #0x8f\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    sub r1, #8\n    ldr r0, [r4, r1]\n    ldr r0, [r0]\n    bl Save_PlayerData_GetOptionsAddr\n    mov r1, #9\n    lsl r1, r1, #6\n    str r0, [r4, r1]\n    pop {r4, pc}"
    );
    #endif
}

void BagApp_GetSaveRoamers(void) {
    /* Original at 0x021F992C */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0x8d\n    lsl r1, r1, #2\n    ldr r0, [r0, r1]\n    ldr r3, _021F9938 ; =Save_Roamers_Get\n    ldr r0, [r0]\n    bx r3\n    _021F9938: .word Save_Roamers_Get"
    );
    #endif
}

void BagApp_GetRepelStepCountAddr(void) {
    /* Original at 0x021F993C */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    bl BagApp_GetSaveRoamers\n    bl RoamerSave_GetRepelAddr\n    strb r4, [r0]\n    pop {r4, pc}"
    );
    #endif
}

void BagApp_SetFlute(void) {
    /* Original at 0x021F994C */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    bl BagApp_GetSaveRoamers\n    add r1, r4, #0\n    bl RoamerSave_SetFlute\n    pop {r4, pc}"
    );
    #endif
}

void ov15_021F995C(void) {
    /* Original at 0x021F995C */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, [r0]\n    bl DoScheduledBgGpuUpdates\n    bl GF_RunVramTransferTasks\n    bl SpriteSystem_TransferOam\n    ldr r3, _021F997C ; =0x027E0000\n    ldr r1, _021F9980 ; =0x00003FF8\n    mov r0, #1\n    ldr r2, [r3, r1]\n    orr r0, r2\n    str r0, [r3, r1]\n    pop {r3, pc}\n    nop\n    _021F997C: .word 0x027E0000\n    _021F9980: .word 0x00003FF8"
    );
    #endif
}

void ov15_021F9984(void) {
    GfGfx_SetBanks(5);
}

void ov15_021F99A4(void) {
    /* Original at 0x021F99A4 */
    /* Requires manual decompilation - 91 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0x14\n    ldr r5, _021F9A68 ; =ov15_02200518\n    add r3, sp, #4\n    add r4, r0, #0\n    add r2, r3, #0\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    add r0, r2, #0\n    bl SetBothScreensModesAndDisable\n    ldr r2, _021F9A6C ; =ov15_022006CC\n    add r0, r4, #0\n    mov r1, #1\n    mov r3, #0\n    bl InitBgFromTemplate\n    ldr r2, _021F9A70 ; =ov15_022006E8\n    add r0, r4, #0\n    mov r1, #2\n    mov r3, #0\n    bl InitBgFromTemplate\n    ldr r2, _021F9A74 ; =ov15_02200704\n    add r0, r4, #0\n    mov r1, #3\n    mov r3, #0\n    bl InitBgFromTemplate\n    add r0, r4, #0\n    mov r1, #1\n    bl BgClearTilemapBufferAndCommit\n    add r0, r4, #0\n    mov r1, #3\n    bl BgClearTilemapBufferAndCommit\n    mov r0, #1\n    mov r1, #0x20\n    mov r2, #0\n    mov r3, #6\n    bl BG_ClearCharDataRange\n    ldr r2, _021F9A78 ; =ov15_02200720\n    add r0, r4, #0\n    mov r1, #4\n    mov r3, #0\n    bl InitBgFromTemplate\n    ldr r2, _021F9A7C ; =ov15_0220073C\n    add r0, r4, #0\n    mov r1, #5\n    mov r3, #0\n    bl InitBgFromTemplate\n    ldr r2, _021F9A80 ; =ov15_02200758\n    add r0, r4, #0\n    mov r1, #6\n    mov r3, #0\n    bl InitBgFromTemplate\n    ldr r2, _021F9A84 ; =ov15_02200774\n    add r0, r4, #0\n    mov r1, #7\n    mov r3, #0\n    bl InitBgFromTemplate\n    add r0, r4, #0\n    mov r1, #4\n    bl BgClearTilemapBufferAndCommit\n    add r0, r4, #0\n    mov r1, #7\n    bl BgClearTilemapBufferAndCommit\n    mov r0, #4\n    mov r1, #0x20\n    mov r2, #0\n    mov r3, #6\n    bl BG_ClearCharDataRange\n    mov r0, #7\n    mov r1, #0x20\n    mov r2, #0\n    mov r3, #6\n    bl BG_ClearCharDataRange\n    mov r1, #0\n    ldr r0, _021F9A88 ; =0x04000050\n    mov r2, #8\n    add r3, r1, #0\n    str r1, [sp]\n    bl G2x_SetBlendAlpha_\n    add sp, #0x14\n    pop {r4, r5, pc}\n    _021F9A68: .word ov15_02200518\n    _021F9A6C: .word ov15_022006CC\n    _021F9A70: .word ov15_022006E8\n    _021F9A74: .word ov15_02200704\n    _021F9A78: .word ov15_02200720\n    _021F9A7C: .word ov15_0220073C\n    _021F9A80: .word ov15_02200758\n    _021F9A84: .word ov15_02200774\n    _021F9A88: .word 0x04000050"
    );
    #endif
}

void ov15_021F9A8C(void) {
    /* Original at 0x021F9A8C */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0x1f\n    mov r1, #0\n    bl GfGfx_EngineATogglePlanes\n    mov r0, #0x1b\n    mov r1, #0\n    bl GfGfx_EngineBTogglePlanes\n    add r0, r4, #0\n    mov r1, #7\n    bl FreeBgTilemapBuffer\n    add r0, r4, #0\n    mov r1, #6\n    bl FreeBgTilemapBuffer\n    add r0, r4, #0\n    mov r1, #5\n    bl FreeBgTilemapBuffer\n    add r0, r4, #0\n    mov r1, #4\n    bl FreeBgTilemapBuffer\n    add r0, r4, #0\n    mov r1, #3\n    bl FreeBgTilemapBuffer\n    add r0, r4, #0\n    mov r1, #2\n    bl FreeBgTilemapBuffer\n    add r0, r4, #0\n    mov r1, #1\n    bl FreeBgTilemapBuffer\n    mov r0, #6\n    add r1, r4, #0\n    bl Heap_FreeExplicit\n    pop {r4, pc}"
    );
    #endif
}

void ov15_021F9AE4(void) {
    /* Original at 0x021F9AE4 */
    /* Requires manual decompilation - 177 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x10\n    add r4, r0, #0\n    mov r0, #0xf\n    mov r1, #6\n    bl NARC_New\n    mov r1, #0x91\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #6\n    str r0, [sp, #0xc]\n    ldr r2, [r4]\n    mov r0, #0xf\n    mov r1, #7\n    mov r3, #2\n    bl GfGfxLoader_LoadCharData\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #6\n    str r0, [sp, #0xc]\n    ldr r2, [r4]\n    mov r0, #0xf\n    mov r1, #0x36\n    mov r3, #2\n    bl GfGfxLoader_LoadScrnData\n    ldr r0, _021F9C60 ; =0x00000615\n    ldrb r0, [r4, r0]\n    cmp r0, #0\n    bne _021F9B4A\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #6\n    str r0, [sp, #0xc]\n    ldr r2, [r4]\n    mov r0, #0xf\n    mov r1, #0x5e\n    mov r3, #3\n    bl GfGfxLoader_LoadScrnData\n    b _021F9B62\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #6\n    str r0, [sp, #0xc]\n    ldr r2, [r4]\n    mov r0, #0xf\n    mov r1, #0x5d\n    mov r3, #3\n    bl GfGfxLoader_LoadScrnData\n    mov r2, #0\n    str r2, [sp]\n    mov r0, #6\n    str r0, [sp, #4]\n    mov r0, #0xf\n    mov r1, #8\n    add r3, r2, #0\n    bl GfGfxLoader_GXLoadPal\n    mov r0, #0x20\n    str r0, [sp]\n    mov r0, #6\n    mov r3, #0x1a\n    str r0, [sp, #4]\n    mov r0, #0xf\n    mov r1, #0x11\n    mov r2, #0\n    lsl r3, r3, #4\n    bl GfGfxLoader_GXLoadPal\n    mov r1, #0x16\n    mov r0, #0\n    lsl r1, r1, #4\n    mov r2, #6\n    bl LoadFontPal1\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #6\n    str r0, [sp, #4]\n    ldr r0, [r4]\n    ldr r2, _021F9C64 ; =0x000003F7\n    mov r1, #1\n    mov r3, #0xe\n    bl LoadUserFrameGfx1\n    mov r0, #9\n    lsl r0, r0, #6\n    ldr r0, [r4, r0]\n    bl Options_GetFrame\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #6\n    str r0, [sp, #4]\n    ldr r0, [r4]\n    ldr r2, _021F9C68 ; =0x000003D9\n    mov r1, #1\n    mov r3, #0xc\n    bl LoadUserFrameGfx2\n    mov r3, #0\n    str r3, [sp]\n    mov r0, #6\n    str r0, [sp, #4]\n    mov r0, #0xf\n    mov r1, #0x26\n    mov r2, #4\n    bl GfGfxLoader_GXLoadPal\n    mov r1, #0x16\n    mov r0, #4\n    lsl r1, r1, #4\n    mov r2, #6\n    bl LoadFontPal1\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r3, #6\n    str r3, [sp, #0xc]\n    ldr r2, [r4]\n    mov r0, #0xf\n    mov r1, #0x2e\n    bl GfGfxLoader_LoadCharData\n    ldr r2, _021F9C6C ; =0x00000694\n    mov r0, #0xf\n    mov r1, #0x28\n    add r2, r4, r2\n    mov r3, #6\n    bl GfGfxLoader_GetPlttData\n    ldr r2, _021F9C70 ; =0x0000068C\n    mov r1, #0x29\n    str r0, [r4, r2]\n    add r2, #0xc\n    mov r0, #0xf\n    add r2, r4, r2\n    mov r3, #6\n    bl GfGfxLoader_GetPlttData\n    mov r1, #0x69\n    lsl r1, r1, #4\n    str r0, [r4, r1]\n    mov r0, #0x80\n    mov r2, #4\n    str r0, [sp]\n    mov r0, #6\n    add r3, r2, #0\n    str r0, [sp, #4]\n    mov r0, #0xf\n    mov r1, #8\n    add r3, #0xfc\n    bl GfGfxLoader_GXLoadPal\n    mov r0, #9\n    lsl r0, r0, #6\n    ldr r0, [r4, r0]\n    bl Options_GetFrame\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #6\n    str r0, [sp, #4]\n    ldr r0, [r4]\n    ldr r2, _021F9C74 ; =0x000003E2\n    mov r1, #4\n    mov r3, #0xc\n    bl LoadUserFrameGfx2\n    add sp, #0x10\n    pop {r4, pc}\n    nop\n    _021F9C60: .word 0x00000615\n    _021F9C64: .word 0x000003F7\n    _021F9C68: .word 0x000003D9\n    _021F9C6C: .word 0x00000694\n    _021F9C70: .word 0x0000068C\n    _021F9C74: .word 0x000003E2"
    );
    #endif
}

void ov15_021F9C78(void) {
    /* Original at 0x021F9C78 */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    sub sp, #0x10\n    add r2, r0, #0\n    cmp r1, #1\n    bne _021F9C9E\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #6\n    str r0, [sp, #0xc]\n    ldr r2, [r2]\n    mov r0, #0xf\n    mov r1, #0x36\n    mov r3, #2\n    bl GfGfxLoader_LoadScrnData\n    add sp, #0x10\n    pop {r3, pc}\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #6\n    str r0, [sp, #0xc]\n    ldr r2, [r2]\n    mov r0, #0xf\n    mov r1, #9\n    mov r3, #2\n    bl GfGfxLoader_LoadScrnData\n    add sp, #0x10\n    pop {r3, pc}"
    );
    #endif
}

void ov15_021F9CBC(void) {
    /* Original at 0x021F9CBC */
    /* Requires manual decompilation - 47 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0\n    mov r1, #0x1b\n    mov r2, #0xa\n    mov r3, #6\n    bl NewMsgDataFromNarc\n    mov r1, #0x2f\n    lsl r1, r1, #4\n    str r0, [r4, r1]\n    mov r0, #1\n    mov r1, #2\n    mov r2, #0\n    mov r3, #6\n    bl MessagePrinter_New\n    mov r1, #0xbb\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    mov r0, #6\n    bl MessageFormat_New\n    mov r1, #0xbd\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    mov r0, #0\n    mov r1, #0x1b\n    mov r2, #0xde\n    mov r3, #6\n    bl NewMsgDataFromNarc\n    mov r2, #0xbe\n    lsl r2, r2, #2\n    str r0, [r4, r2]\n    mov r0, #0\n    mov r1, #0x1b\n    sub r2, #0xa\n    mov r3, #6\n    bl NewMsgDataFromNarc\n    mov r1, #0xbf\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    mov r0, #1\n    lsl r0, r0, #8\n    mov r1, #6\n    bl String_New\n    ldr r1, _021F9D24 ; =0x000005E4\n    str r0, [r4, r1]\n    pop {r4, pc}\n    _021F9D24: .word 0x000005E4"
    );
    #endif
}

void ov15_021F9D28(void) {
    /* Original at 0x021F9D28 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6}\n    ldr r2, _021F9D5C ; =0x00000614\n    mov r1, #0\n    strb r1, [r0, r2]\n    add r4, r2, #0\n    mov r2, #0x8d\n    lsl r2, r2, #2\n    mov r3, #0xc\n    add r5, r1, #0\n    ldr r6, [r0, r2]\n    mul r5, r3\n    add r5, r6, r5\n    ldr r5, [r5, #4]\n    cmp r5, #0\n    beq _021F9D4C\n    ldrb r5, [r0, r4]\n    add r5, r5, #1\n    strb r5, [r0, r4]\n    add r1, r1, #1\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    cmp r1, #8\n    blo _021F9D38\n    pop {r3, r4, r5, r6}\n    bx lr\n    nop\n    _021F9D5C: .word 0x00000614"
    );
    #endif
}

void ov15_021F9D60(void) {
    /* Original at 0x021F9D60 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    mov r3, #0x8d\n    lsl r3, r3, #2\n    ldr r0, [r0, r3]\n    add r4, r0, #4\n    add r0, #0x64\n    ldrb r3, [r0]\n    mov r0, #0xc\n    mul r0, r3\n    cmp r2, #0\n    ldr r2, [r4, r0]\n    bne _021F9D80\n    lsl r0, r1, #2\n    ldrh r0, [r2, r0]\n    pop {r3, r4}\n    bx lr\n    lsl r0, r1, #2\n    add r0, r2, r0\n    ldrh r0, [r0, #2]\n    pop {r3, r4}\n    bx lr"
    );
    #endif
}

void ov15_021F9D8C(void) {
    /* Original at 0x021F9D8C */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "add r3, r1, #0\n    add r1, r2, #0\n    add r2, r3, #0\n    ldr r3, _021F9D98 ; =ReadMsgDataIntoString\n    bx r3\n    nop\n    _021F9D98: .word ReadMsgDataIntoString"
    );
    #endif
}

void ov15_021F9D9C(void) {
    /* Original at 0x021F9D9C */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    add r0, r2, #0\n    bl TMHMGetMove\n    add r1, r0, #0\n    add r0, r5, #0\n    add r2, r4, #0\n    bl ReadMsgDataIntoString\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov15_021F9DB4(void) {
    /* Original at 0x021F9DB4 */
    /* Requires manual decompilation - 120 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r0, #0\n    mov r0, #0x8d\n    lsl r0, r0, #2\n    ldr r1, [r7, r0]\n    mov r5, #0\n    add r1, #0x64\n    strb r5, [r1]\n    ldr r0, [r7, r0]\n    add r4, r0, #4\n    ldr r0, [r0, #0x6c]\n    cmp r0, #0\n    bne _021F9E12\n    add r2, r5, #0\n    mov r1, #0xc\n    add r0, r5, #0\n    mul r0, r1\n    add r3, r4, r0\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    beq _021F9DE2\n    strh r2, [r3, #4]\n    strh r2, [r3, #6]\n    add r0, r5, #1\n    lsl r0, r0, #0x10\n    lsr r5, r0, #0x10\n    cmp r5, #8\n    blo _021F9DD2\n    mov r2, #0\n    mov r1, #0xc\n    add r0, r2, #0\n    mul r0, r1\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    beq _021F9E06\n    mov r0, #0x8d\n    lsl r0, r0, #2\n    ldr r0, [r7, r0]\n    add r0, #0x64\n    strb r2, [r0]\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r2, #1\n    lsl r0, r0, #0x10\n    lsr r2, r0, #0x10\n    cmp r2, #8\n    blo _021F9DF0\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0xc\n    mul r0, r5\n    add r6, r4, r0\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    beq _021F9E3E\n    mov r0, #0x8d\n    lsl r0, r0, #2\n    ldr r0, [r7, r0]\n    ldrb r1, [r6, #8]\n    add r2, sp, #0\n    ldr r0, [r0, #0x6c]\n    add r2, #1\n    add r3, sp, #0\n    bl BagCursor_Field_PocketGetPosition\n    add r0, sp, #0\n    ldrb r0, [r0, #1]\n    strh r0, [r6, #4]\n    add r0, sp, #0\n    ldrb r0, [r0]\n    strh r0, [r6, #6]\n    add r0, r5, #1\n    lsl r0, r0, #0x10\n    lsr r5, r0, #0x10\n    cmp r5, #8\n    blo _021F9E12\n    mov r0, #0x8d\n    lsl r0, r0, #2\n    ldr r0, [r7, r0]\n    ldr r0, [r0, #0x6c]\n    bl BagCursor_Field_GetPocket\n    mov r1, #0xc\n    mul r1, r0\n    ldr r1, [r4, r1]\n    cmp r1, #0\n    bne _021F9E7A\n    mov r3, #0\n    mov r2, #0xc\n    add r1, r3, #0\n    mul r1, r2\n    ldr r1, [r4, r1]\n    cmp r1, #0\n    beq _021F9E70\n    add r0, r3, #0\n    b _021F9E7A\n    add r1, r3, #1\n    lsl r1, r1, #0x10\n    lsr r3, r1, #0x10\n    cmp r3, #8\n    blo _021F9E62\n    mov r1, #0\n    mov r2, #0xc\n    add r3, r1, #0\n    mul r3, r2\n    add r5, r4, r3\n    ldr r3, [r4, r3]\n    cmp r3, #0\n    beq _021F9E9C\n    ldrb r3, [r5, #8]\n    cmp r0, r3\n    bne _021F9E9C\n    mov r0, #0x8d\n    lsl r0, r0, #2\n    ldr r0, [r7, r0]\n    add r0, #0x64\n    strb r1, [r0]\n    pop {r3, r4, r5, r6, r7, pc}\n    add r1, r1, #1\n    lsl r1, r1, #0x10\n    lsr r1, r1, #0x10\n    cmp r1, #8\n    blo _021F9E7E\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov15_021F9EA8(void) {
    /* Original at 0x021F9EA8 */
    /* Requires manual decompilation - 46 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    mov r0, #0x8d\n    lsl r0, r0, #2\n    ldr r1, [r6, r0]\n    ldr r0, [r1, #0x6c]\n    cmp r0, #0\n    beq _021F9F06\n    add r0, r1, #4\n    str r0, [sp]\n    mov r4, #0\n    add r5, r0, #0\n    mov r7, #6\n    ldr r0, [r5]\n    cmp r0, #0\n    beq _021F9EE2\n    mov r0, #0x8d\n    lsl r0, r0, #2\n    ldrh r2, [r5, #4]\n    ldrsh r3, [r5, r7]\n    ldr r0, [r6, r0]\n    lsl r2, r2, #0x18\n    lsl r3, r3, #0x18\n    ldrb r1, [r5, #8]\n    ldr r0, [r0, #0x6c]\n    lsr r2, r2, #0x18\n    lsr r3, r3, #0x18\n    bl BagCursor_Field_PocketSetPosition\n    add r4, r4, #1\n    add r5, #0xc\n    cmp r4, #8\n    blo _021F9EC2\n    mov r0, #0x8d\n    lsl r0, r0, #2\n    ldr r1, [r6, r0]\n    ldr r0, [r1, #0x6c]\n    add r1, #0x64\n    ldrb r2, [r1]\n    mov r1, #0xc\n    add r3, r2, #0\n    mul r3, r1\n    ldr r1, [sp]\n    add r1, r1, r3\n    ldrb r1, [r1, #8]\n    bl BagCursor_Field_SetPocket\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov15_021F9F08(void) {
    /* Original at 0x021F9F08 */
    /* Requires manual decompilation - 123 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    mov r1, #0x8d\n    lsl r1, r1, #2\n    str r0, [sp]\n    ldr r0, [r0, r1]\n    add r2, r0, #4\n    add r0, #0x64\n    ldrb r1, [r0]\n    mov r0, #0xc\n    mul r0, r1\n    add r4, r2, r0\n    ldrb r1, [r4, #8]\n    cmp r1, #3\n    bne _021F9F82\n    ldr r0, _021FA000 ; =ov15_022008B0\n    mov r6, #0\n    ldrb r0, [r0, r1]\n    cmp r0, #0\n    bls _021F9F7E\n    ldr r0, [sp]\n    add r5, r6, #0\n    str r0, [sp, #4]\n    add r7, r0, #0\n    ldr r0, [r4]\n    ldrh r3, [r0, r5]\n    add r1, r0, r5\n    cmp r3, #0\n    beq _021F9F7E\n    ldrh r0, [r1, #2]\n    cmp r0, #0\n    beq _021F9F7E\n    mov r0, #0xbf\n    ldr r1, [sp]\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    mov r1, #0x35\n    ldr r2, [sp, #4]\n    lsl r1, r1, #4\n    ldr r1, [r2, r1]\n    add r2, r3, #0\n    mov r3, #6\n    bl ov15_021F9D9C\n    ldr r0, [r4]\n    add r6, r6, #1\n    ldrh r1, [r0, r5]\n    ldr r0, _021FA004 ; =0x000006A4\n    add r5, r5, #4\n    strh r1, [r7, r0]\n    ldr r0, [sp, #4]\n    ldrb r1, [r4, #8]\n    add r0, r0, #4\n    str r0, [sp, #4]\n    ldr r0, _021FA000 ; =ov15_022008B0\n    add r7, r7, #2\n    ldrb r0, [r0, r1]\n    cmp r6, r0\n    blo _021F9F38\n    strb r6, [r4, #9]\n    b _021F9FDC\n    ldr r0, _021FA000 ; =ov15_022008B0\n    mov r6, #0\n    ldrb r0, [r0, r1]\n    cmp r0, #0\n    bls _021F9FDA\n    ldr r0, [sp]\n    add r5, r6, #0\n    str r0, [sp, #8]\n    add r7, r0, #0\n    ldr r0, [r4]\n    ldrh r3, [r0, r5]\n    add r1, r0, r5\n    cmp r3, #0\n    beq _021F9FDA\n    ldrh r0, [r1, #2]\n    cmp r0, #0\n    beq _021F9FDA\n    mov r0, #0xbe\n    ldr r1, [sp]\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    mov r1, #0x35\n    ldr r2, [sp, #8]\n    lsl r1, r1, #4\n    ldr r1, [r2, r1]\n    add r2, r3, #0\n    mov r3, #6\n    bl ov15_021F9D8C\n    ldr r0, [r4]\n    add r6, r6, #1\n    ldrh r1, [r0, r5]\n    ldr r0, _021FA004 ; =0x000006A4\n    add r5, r5, #4\n    strh r1, [r7, r0]\n    ldr r0, [sp, #8]\n    ldrb r1, [r4, #8]\n    add r0, r0, #4\n    str r0, [sp, #8]\n    ldr r0, _021FA000 ; =ov15_022008B0\n    add r7, r7, #2\n    ldrb r0, [r0, r1]\n    cmp r6, r0\n    blo _021F9F94\n    strb r6, [r4, #9]\n    ldrb r0, [r4, #9]\n    cmp r0, #0\n    bne _021F9FE6\n    mov r1, #0\n    b _021F9FF2\n    sub r0, r0, #1\n    mov r1, #6\n    bl _s32_div_f\n    mov r1, #6\n    mul r1, r0\n    mov r0, #6\n    ldrsh r0, [r4, r0]\n    cmp r0, r1\n    ble _021F9FFC\n    strh r1, [r4, #6]\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    _021FA000: .word ov15_022008B0\n    _021FA004: .word 0x000006A4"
    );
    #endif
}

void ov15_021FA008(void) {
    /* Original at 0x021FA008 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    mov r6, #0x35\n    add r5, r0, #0\n    mov r4, #0\n    mov r7, #0x12\n    lsl r6, r6, #4\n    add r0, r7, #0\n    mov r1, #6\n    bl String_New\n    str r0, [r5, r6]\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #0xa5\n    blo _021FA014\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov15_021FA028(void) {
    String_Delete(0, 0x35);
}

void ov15_021FA044(void) {
    /* Original at 0x021FA044 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0\n    ldrsh r3, [r4, r0]\n    ldrh r0, [r1]\n    add r0, r3, r0\n    cmp r0, r2\n    ble _021FA062\n    sub r0, r2, #1\n    mov r1, #6\n    bl _s32_div_f\n    mov r1, #6\n    mul r1, r0\n    strh r1, [r4]\n    mov r0, #0\n    ldrsh r1, [r4, r0]\n    cmp r1, #0\n    bge _021FA06C\n    strh r0, [r4]\n    pop {r4, pc}"
    );
    #endif
}

void ov15_021FA070(void) {
    /* Original at 0x021FA070 */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void ov15_021FA074(void) {
    /* Original at 0x021FA074 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0x8d\n    lsl r1, r1, #2\n    ldr r2, [r0, r1]\n    add r0, r2, #0\n    add r0, #0x64\n    ldrb r1, [r0]\n    mov r0, #0xc\n    mul r0, r1\n    add r2, r2, r0\n    mov r0, #0xa\n    ldrb r1, [r2, #0xd]\n    ldrsh r0, [r2, r0]\n    sub r0, r1, r0\n    cmp r0, #6\n    ble _021FA094\n    mov r0, #6\n    bx lr"
    );
    #endif
}

void ov15_021FA098(void) {
    /* Original at 0x021FA098 */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    ldr r1, _021FA0D4 ; =0x00000672\n    ldrb r4, [r0, r1]\n    mov r1, #0x8d\n    lsl r1, r1, #2\n    ldr r5, [r0, r1]\n    add r0, r4, #0\n    mov r1, #6\n    bl _s32_div_f\n    add r1, r5, #0\n    add r1, #0x64\n    ldrb r2, [r1]\n    mov r1, #0xc\n    mul r1, r2\n    add r2, r5, r1\n    mov r1, #0xa\n    ldrsh r3, [r2, r1]\n    mov r1, #6\n    add r2, r0, #0\n    mul r2, r1\n    cmp r3, r2\n    bne _021FA0CE\n    add r0, r4, #0\n    bl _s32_div_f\n    b _021FA0D0\n    sub r1, r1, #7\n    add r0, r1, #0\n    pop {r3, r4, r5, pc}\n    _021FA0D4: .word 0x00000672"
    );
    #endif
}

void ov15_021FA0D8(void) {
    /* Original at 0x021FA0D8 */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0xd2\n    mov r2, #0\n    lsl r1, r1, #2\n    str r2, [r0, r1]\n    bx lr"
    );
    #endif
}

void ov15_021FA0E4(void) {
    /* Original at 0x021FA0E4 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "cmp r1, #8\n    blt _021FA102\n    cmp r1, #0xe\n    bge _021FA102\n    mov r2, #0x8d\n    lsl r2, r2, #2\n    ldr r3, [r0, r2]\n    sub r1, #8\n    add r0, r3, #0\n    add r0, #0x64\n    ldrb r2, [r0]\n    mov r0, #0xc\n    mul r0, r2\n    add r0, r3, r0\n    strh r1, [r0, #8]\n    bx lr"
    );
    #endif
}

void ov15_021FA104(void) {
    /* Original at 0x021FA104 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "add r2, r1, #0\n    sub r2, #0xe\n    cmp r2, #1\n    bhi _021FA110\n    mov r0, #0\n    bx lr\n    cmp r1, #7\n    bgt _021FA124\n    ldr r1, _021FA128 ; =0x00000644\n    ldr r0, [r0, r1]\n    cmp r0, #8\n    blt _021FA124\n    cmp r0, #0xd\n    bgt _021FA124\n    mov r0, #0\n    bx lr\n    mov r0, #1\n    bx lr\n    _021FA128: .word 0x00000644"
    );
    #endif
}

void ov15_021FA12C(void) {
    /* Original at 0x021FA12C */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    mov r1, #0x8d\n    lsl r1, r1, #2\n    ldr r3, [r0, r1]\n    add r1, r3, #0\n    add r1, #0x64\n    ldrb r2, [r1]\n    mov r1, #0xc\n    add r3, r3, #4\n    mul r1, r2\n    add r1, r3, r1\n    mov r3, #6\n    ldrsh r4, [r1, r3]\n    ldr r3, _021FA168 ; =0x00000644\n    ldr r0, [r0, r3]\n    add r3, r4, r0\n    ldr r0, _021FA16C ; =ov15_022008B0\n    sub r3, #8\n    ldrb r0, [r0, r2]\n    cmp r0, r3\n    bhi _021FA15C\n    mov r0, #0\n    pop {r3, r4}\n    bx lr\n    ldr r1, [r1]\n    lsl r0, r3, #2\n    ldrh r0, [r1, r0]\n    pop {r3, r4}\n    bx lr\n    nop\n    _021FA168: .word 0x00000644\n    _021FA16C: .word ov15_022008B0"
    );
    #endif
}

void ov15_021FA170(void) {
    /* Original at 0x021FA170 */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r1, _021FA1B8 ; =0x00000644\n    add r4, r0, #0\n    ldr r2, [r4, r1]\n    cmp r2, #8\n    blt _021FA19C\n    cmp r2, #0xd\n    bgt _021FA19C\n    bl ov15_021FA12C\n    add r2, r0, #0\n    beq _021FA192\n    add r0, r4, #0\n    add r1, r4, #4\n    bl ov15_021FECA0\n    pop {r4, pc}\n    add r0, r4, #0\n    add r1, r4, #4\n    bl ov15_021FECC4\n    pop {r4, pc}\n    cmp r2, #0\n    blt _021FA1AE\n    cmp r2, #7\n    bgt _021FA1AE\n    add r0, r4, #0\n    add r1, r4, #4\n    bl ov15_021FECD8\n    pop {r4, pc}\n    add r0, r4, #0\n    add r1, r4, #4\n    bl ov15_021FECC4\n    pop {r4, pc}\n    _021FA1B8: .word 0x00000644"
    );
    #endif
}

void ov15_021FA1BC(void) {
    /* Original at 0x021FA1BC */
    /* Requires manual decompilation - 376 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x10\n    ldr r1, _021FA4A4 ; =gSystem\n    mov r2, #0x40\n    ldr r3, [r1, #0x4c]\n    add r5, r0, #0\n    mov r4, #0\n    tst r2, r3\n    beq _021FA1DE\n    ldr r0, _021FA4A8 ; =0x00000644\n    add r4, r4, #1\n    ldr r1, [r5, r0]\n    lsl r2, r1, #2\n    ldr r1, _021FA4AC ; =ov15_02200640\n    ldrb r1, [r1, r2]\n    str r1, [r5, r0]\n    b _021FA38C\n    mov r2, #0x80\n    tst r2, r3\n    beq _021FA1F4\n    ldr r0, _021FA4A8 ; =0x00000644\n    add r4, r4, #1\n    ldr r1, [r5, r0]\n    lsl r2, r1, #2\n    ldr r1, _021FA4B0 ; =ov15_02200641\n    ldrb r1, [r1, r2]\n    str r1, [r5, r0]\n    b _021FA38C\n    mov r2, #0x20\n    add r6, r3, #0\n    tst r6, r2\n    beq _021FA246\n    ldr r1, _021FA4A8 ; =0x00000644\n    ldr r3, _021FA4B4 ; =ov15_02200642\n    ldr r1, [r5, r1]\n    lsl r6, r1, #2\n    ldrb r3, [r3, r6]\n    cmp r3, #0xe\n    bne _021FA21E\n    mov r1, #2\n    str r1, [sp]\n    mov r1, #0xe\n    add r2, sp, #0xc\n    mov r3, #1\n    str r4, [sp, #4]\n    bl ov15_021FA73C\n    add sp, #0x10\n    pop {r4, r5, r6, pc}\n    cmp r1, #0x10\n    beq _021FA274\n    cmp r1, #0\n    blt _021FA23E\n    cmp r1, #8\n    bge _021FA23E\n    sub r2, #0x21\n    bl ov15_021FA6C0\n    ldr r1, _021FA4A8 ; =0x00000644\n    ldr r2, [r5, r1]\n    cmp r2, r0\n    beq _021FA274\n    str r0, [r5, r1]\n    add r4, r4, #1\n    b _021FA38C\n    ldr r0, _021FA4A8 ; =0x00000644\n    add r4, r4, #1\n    str r3, [r5, r0]\n    b _021FA38C\n    mov r2, #0x10\n    tst r3, r2\n    beq _021FA29A\n    ldr r1, _021FA4A8 ; =0x00000644\n    ldr r2, _021FA4B8 ; =ov15_02200643\n    ldr r1, [r5, r1]\n    lsl r3, r1, #2\n    ldrb r2, [r2, r3]\n    cmp r2, #0xf\n    bne _021FA270\n    mov r1, #2\n    str r1, [sp]\n    add r2, sp, #8\n    mov r1, #0xf\n    add r2, #3\n    mov r3, #1\n    str r4, [sp, #4]\n    bl ov15_021FA73C\n    add sp, #0x10\n    pop {r4, r5, r6, pc}\n    cmp r1, #0x10\n    bne _021FA276\n    b _021FA38C\n    cmp r1, #0\n    blt _021FA292\n    cmp r1, #8\n    bge _021FA292\n    mov r2, #1\n    bl ov15_021FA6C0\n    ldr r1, _021FA4A8 ; =0x00000644\n    ldr r2, [r5, r1]\n    cmp r2, r0\n    beq _021FA38C\n    str r0, [r5, r1]\n    add r4, r4, #1\n    b _021FA38C\n    ldr r0, _021FA4A8 ; =0x00000644\n    add r4, r4, #1\n    str r2, [r5, r0]\n    b _021FA38C\n    ldr r3, [r1, #0x48]\n    lsl r1, r2, #5\n    tst r1, r3\n    beq _021FA314\n    ldr r1, _021FA4A8 ; =0x00000644\n    ldr r1, [r5, r1]\n    cmp r1, #0\n    blt _021FA2E6\n    cmp r1, #8\n    bge _021FA2E6\n    mov r1, #0x8d\n    lsl r1, r1, #2\n    ldr r1, [r5, r1]\n    sub r2, #0x11\n    add r1, #0x64\n    ldrb r1, [r1]\n    bl ov15_021FA6C0\n    ldr r1, _021FA4A8 ; =0x00000644\n    str r0, [r5, r1]\n    ldr r1, [r5, r1]\n    add r0, r5, #0\n    bl ov15_021FFECC\n    mov r0, #2\n    str r0, [sp]\n    add r0, r4, #0\n    str r0, [sp, #4]\n    ldr r1, _021FA4A8 ; =0x00000644\n    add r2, sp, #8\n    ldr r1, [r5, r1]\n    add r0, r5, #0\n    add r2, #2\n    mov r3, #1\n    bl ov15_021FA73C\n    add sp, #0x10\n    pop {r4, r5, r6, pc}\n    mov r1, #0x8d\n    lsl r1, r1, #2\n    ldr r1, [r5, r1]\n    mov r2, #0\n    add r1, #0x64\n    ldrb r1, [r1]\n    add r0, r5, #0\n    mvn r2, r2\n    bl ov15_021FA6C0\n    add r1, r0, #0\n    mov r0, #2\n    str r0, [sp]\n    mov r0, #0\n    add r2, sp, #8\n    str r0, [sp, #4]\n    add r0, r5, #0\n    add r2, #2\n    mov r3, #1\n    bl ov15_021FA73C\n    add sp, #0x10\n    pop {r4, r5, r6, pc}\n    add r2, #0xf0\n    add r1, r3, #0\n    tst r1, r2\n    beq _021FA38C\n    ldr r1, _021FA4A8 ; =0x00000644\n    ldr r1, [r5, r1]\n    cmp r1, #0\n    blt _021FA360\n    cmp r1, #8\n    bge _021FA360\n    mov r1, #0x8d\n    lsl r1, r1, #2\n    ldr r1, [r5, r1]\n    mov r2, #1\n    add r1, #0x64\n    ldrb r1, [r1]\n    bl ov15_021FA6C0\n    ldr r1, _021FA4A8 ; =0x00000644\n    str r0, [r5, r1]\n    ldr r1, [r5, r1]\n    add r0, r5, #0\n    bl ov15_021FFECC\n    mov r0, #2\n    str r0, [sp]\n    add r0, r4, #0\n    str r0, [sp, #4]\n    ldr r1, _021FA4A8 ; =0x00000644\n    add r2, sp, #8\n    ldr r1, [r5, r1]\n    add r0, r5, #0\n    add r2, #1\n    mov r3, #1\n    bl ov15_021FA73C\n    add sp, #0x10\n    pop {r4, r5, r6, pc}\n    mov r1, #0x8d\n    lsl r1, r1, #2\n    ldr r1, [r5, r1]\n    add r0, r5, #0\n    add r1, #0x64\n    ldrb r1, [r1]\n    mov r2, #1\n    bl ov15_021FA6C0\n    add r1, r0, #0\n    mov r0, #2\n    str r0, [sp]\n    mov r0, #0\n    add r2, sp, #8\n    str r0, [sp, #4]\n    add r0, r5, #0\n    add r2, #1\n    mov r3, #1\n    bl ov15_021FA73C\n    add sp, #0x10\n    pop {r4, r5, r6, pc}\n    ldr r1, _021FA4A8 ; =0x00000644\n    ldr r0, [r5, r1]\n    cmp r0, #0x11\n    bne _021FA3A0\n    mov r0, #0x8d\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    add r0, #0x64\n    ldrb r0, [r0]\n    str r0, [r5, r1]\n    cmp r4, #0\n    beq _021FA3C4\n    ldr r0, _021FA4BC ; =0x000005DC\n    bl PlaySE\n    ldr r1, _021FA4A8 ; =0x00000644\n    add r0, r5, #0\n    ldr r1, [r5, r1]\n    bl ov15_021FFECC\n    ldr r1, _021FA4A8 ; =0x00000644\n    add r0, r5, #0\n    ldr r1, [r5, r1]\n    bl ov15_021FA0E4\n    add r0, r5, #0\n    bl ov15_021FA170\n    mov r1, #0\n    add r0, sp, #8\n    strb r1, [r0]\n    add r0, r5, #0\n    bl ov15_021FAC2C\n    add r4, r0, #0\n    mov r0, #0\n    mvn r0, r0\n    cmp r4, r0\n    beq _021FA440\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov15_021FA104\n    cmp r0, #0\n    beq _021FA426\n    cmp r4, #8\n    bhs _021FA408\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov15_021FA68C\n    mov r1, #0\n    mvn r1, r1\n    cmp r0, r1\n    beq _021FA426\n    ldr r1, _021FA4A8 ; =0x00000644\n    add r0, r5, #0\n    str r4, [r5, r1]\n    ldr r1, [r5, r1]\n    bl ov15_021FFECC\n    b _021FA426\n    ldr r1, _021FA4A8 ; =0x00000644\n    add r0, r5, #0\n    str r4, [r5, r1]\n    ldr r1, [r5, r1]\n    bl ov15_021FFECC\n    ldr r0, _021FA4A8 ; =0x00000644\n    ldr r1, [r5, r0]\n    cmp r1, #8\n    blt _021FA426\n    cmp r1, #0xd\n    bgt _021FA426\n    add r0, r5, #0\n    bl ov15_021FA0E4\n    mov r0, #2\n    str r0, [sp]\n    mov r3, #1\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, sp, #8\n    str r3, [sp, #4]\n    bl ov15_021FA73C\n    cmp r0, #1\n    beq _021FA4DA\n    add sp, #0x10\n    pop {r4, r5, r6, pc}\n    ldr r0, _021FA4A4 ; =gSystem\n    mov r3, #1\n    ldr r1, [r0, #0x48]\n    add r0, r1, #0\n    tst r0, r3\n    beq _021FA47E\n    mov r0, #2\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    ldr r1, _021FA4A8 ; =0x00000644\n    add r0, r5, #0\n    ldr r1, [r5, r1]\n    add r2, sp, #8\n    bl ov15_021FA73C\n    add r4, r0, #0\n    ldr r0, _021FA4A8 ; =0x00000644\n    ldr r1, [r5, r0]\n    cmp r1, #8\n    blt _021FA474\n    cmp r1, #0xd\n    bgt _021FA474\n    add r0, r5, #0\n    bl ov15_021FA0E4\n    cmp r4, #1\n    beq _021FA4DA\n    add sp, #0x10\n    add r0, r4, #0\n    pop {r4, r5, r6, pc}\n    mov r0, #2\n    tst r1, r0\n    beq _021FA4DA\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    add r0, r5, #0\n    mov r1, #0x10\n    add r2, sp, #8\n    bl ov15_021FA73C\n    add r4, r0, #0\n    add r0, r5, #0\n    mov r1, #0\n    bl ov15_021FD774\n    ldr r0, _021FA4A8 ; =0x00000644\n    b _021FA4C0\n    nop\n    _021FA4A4: .word gSystem\n    _021FA4A8: .word 0x00000644\n    _021FA4AC: .word ov15_02200640\n    _021FA4B0: .word ov15_02200641\n    _021FA4B4: .word ov15_02200642\n    _021FA4B8: .word ov15_02200643\n    _021FA4BC: .word 0x000005DC\n    ldr r1, [r5, r0]\n    cmp r1, #8\n    blt _021FA4D0\n    cmp r1, #0xd\n    bgt _021FA4D0\n    add r0, r5, #0\n    bl ov15_021FA0E4\n    cmp r4, #1\n    beq _021FA4DA\n    add sp, #0x10\n    add r0, r4, #0\n    pop {r4, r5, r6, pc}\n    add r0, sp, #8\n    ldrb r0, [r0]\n    cmp r0, #1\n    bne _021FA4F2\n    add r0, r5, #0\n    mov r1, #0x14\n    mov r2, #0x29\n    mov r3, #0x1b\n    bl ov15_021FD810\n    add sp, #0x10\n    pop {r4, r5, r6, pc}\n    mov r0, #1\n    add sp, #0x10\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov15_021FA4F8(void) {
    /* Original at 0x021FA4F8 */
    /* Requires manual decompilation - 59 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    mov r1, #0x8d\n    add r5, r0, #0\n    lsl r1, r1, #2\n    ldr r1, [r5, r1]\n    add r6, r1, #4\n    add r1, #0x64\n    ldrb r2, [r1]\n    mov r1, #0xc\n    add r7, r2, #0\n    mul r7, r1\n    mov r2, #0\n    mov r1, #2\n    add r3, r2, #0\n    add r4, r6, r7\n    bl ov15_021FD574\n    ldr r2, _021FA574 ; =0x00000644\n    mov r1, #6\n    ldr r2, [r5, r2]\n    ldrsh r1, [r4, r1]\n    add r0, r5, #0\n    sub r2, #8\n    bl ov15_021FF4EC\n    ldr r1, _021FA574 ; =0x00000644\n    add r0, r5, #0\n    ldr r1, [r5, r1]\n    sub r1, #8\n    bl ov15_022002B4\n    add r0, r5, #0\n    bl ov15_021FB14C\n    mov r0, #6\n    ldrsh r3, [r4, r0]\n    ldr r0, _021FA574 ; =0x00000644\n    ldr r1, [r6, r7]\n    ldr r2, [r5, r0]\n    add r2, r3, r2\n    sub r2, #8\n    lsl r2, r2, #2\n    ldrh r2, [r1, r2]\n    mov r1, #0x8d\n    lsl r1, r1, #2\n    ldr r1, [r5, r1]\n    add r1, #0x66\n    strh r2, [r1]\n    mov r2, #6\n    ldrsh r3, [r4, r2]\n    ldr r2, [r5, r0]\n    ldr r1, [r6, r7]\n    add r2, r3, r2\n    sub r2, #8\n    lsl r2, r2, #2\n    add r1, r1, r2\n    ldrh r1, [r1, #2]\n    add r0, #0x3e\n    strh r1, [r5, r0]\n    mov r0, #4\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021FA574: .word 0x00000644"
    );
    #endif
}

void ov15_021FA578(void) {
    /* Original at 0x021FA578 */
    /* Requires manual decompilation - 77 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r0, #0x8d\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    add r3, r0, #4\n    add r0, #0x64\n    ldrb r2, [r0]\n    mov r0, #0xc\n    mul r0, r2\n    add r4, r3, r0\n    cmp r1, #0\n    ble _021FA5A8\n    mov r0, #6\n    ldrsh r0, [r4, r0]\n    add r1, r0, #6\n    ldrb r0, [r4, #9]\n    cmp r1, r0\n    bge _021FA5A2\n    strh r1, [r4, #6]\n    b _021FA5C2\n    mov r0, #0\n    strh r0, [r4, #6]\n    b _021FA5C2\n    mov r1, #6\n    ldrsh r0, [r4, r1]\n    sub r0, r0, #6\n    bmi _021FA5B4\n    strh r0, [r4, #6]\n    b _021FA5C2\n    ldrb r0, [r4, #9]\n    sub r0, r0, #1\n    bl _s32_div_f\n    mov r1, #6\n    mul r1, r0\n    strh r1, [r4, #6]\n    ldr r0, _021FA618 ; =0x00000671\n    ldrb r0, [r5, r0]\n    cmp r0, #1\n    bne _021FA5E0\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov15_021FAD80\n    ldr r1, _021FA61C ; =0x0000066C\n    add r0, r5, #0\n    ldr r1, [r5, r1]\n    bl ov15_021FFF34\n    mov r0, #3\n    pop {r3, r4, r5, pc}\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov15_021FA6F4\n    add r0, r5, #0\n    bl ov15_021FA170\n    mov r0, #0x8d\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    add r0, #0x65\n    ldrb r0, [r0]\n    cmp r0, #1\n    beq _021FA60A\n    cmp r0, #2\n    beq _021FA606\n    cmp r0, #3\n    beq _021FA60E\n    b _021FA612\n    mov r0, #0x10\n    pop {r3, r4, r5, pc}\n    mov r0, #0xe\n    pop {r3, r4, r5, pc}\n    mov r0, #0x1a\n    pop {r3, r4, r5, pc}\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    nop\n    _021FA618: .word 0x00000671\n    _021FA61C: .word 0x0000066C"
    );
    #endif
}

void ov15_021FA620(void) {
    /* Original at 0x021FA620 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _021FA648 ; =0x00000614\n    ldrb r2, [r4, r0]\n    mov r0, #0xa\n    add r1, r2, #0\n    mul r1, r0\n    mov r0, #0x5a\n    sub r0, r0, r1\n    add r1, r2, #1\n    bl _s32_div_f\n    add r1, r0, #6\n    ldr r0, _021FA64C ; =0x00000617\n    strb r1, [r4, r0]\n    ldrb r1, [r4, r0]\n    add r0, r0, #1\n    add r1, r1, #4\n    strb r1, [r4, r0]\n    pop {r4, pc}\n    _021FA648: .word 0x00000614\n    _021FA64C: .word 0x00000617"
    );
    #endif
}

void ov15_021FA650(void) {
    /* Original at 0x021FA650 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r1, _021FA680 ; =gSystem\n    ldr r2, [r1, #0x48]\n    mov r1, #2\n    lsl r1, r1, #0xc\n    tst r1, r2\n    beq _021FA67C\n    ldr r3, _021FA684 ; =_02201480\n    ldr r1, [r3]\n    add r4, r1, #1\n    ldr r1, _021FA688 ; =_02201300\n    str r4, [r3]\n    ldr r2, [r1]\n    cmp r4, r2\n    blt _021FA672\n    mov r1, #0\n    str r1, [r3]\n    ldr r3, _021FA684 ; =_02201480\n    mov r1, #1\n    ldr r3, [r3]\n    bl ov15_021FD574\n    mov r0, #0\n    pop {r4, pc}\n    _021FA680: .word gSystem\n    _021FA684: .word _02201480\n    _021FA688: .word _02201300"
    );
    #endif
}

void ov15_021FA68C(void) {
    /* Original at 0x021FA68C */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5}\n    mov r2, #0x8d\n    lsl r2, r2, #2\n    ldr r5, [r0, r2]\n    mov r3, #0\n    add r2, r5, #0\n    add r4, r3, #0\n    ldrb r0, [r2, #0xc]\n    cmp r1, r0\n    bne _021FA6AE\n    add r0, r5, r4\n    ldr r0, [r0, #4]\n    cmp r0, #0\n    beq _021FA6AE\n    add r0, r3, #0\n    pop {r4, r5}\n    bx lr\n    add r3, r3, #1\n    add r2, #0xc\n    add r4, #0xc\n    cmp r3, #8\n    blt _021FA69A\n    mov r0, #0\n    mvn r0, r0\n    pop {r4, r5}\n    bx lr"
    );
    #endif
}

void ov15_021FA6C0(void) {
    /* Original at 0x021FA6C0 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r0, #0\n    add r5, r1, #0\n    add r6, r2, #0\n    mov r4, #0\n    add r5, r5, r6\n    bpl _021FA6D2\n    mov r5, #7\n    b _021FA6D8\n    cmp r5, #8\n    bne _021FA6D8\n    mov r5, #0\n    add r0, r7, #0\n    add r1, r5, #0\n    bl ov15_021FA68C\n    mov r1, #0\n    mvn r1, r1\n    cmp r0, r1\n    bne _021FA6EE\n    add r4, r4, #1\n    cmp r4, #8\n    blt _021FA6CA\n    add r0, r5, #0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov15_021FA6F4(void) {
    /* Original at 0x021FA6F4 */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl ov15_021FA074\n    mov r1, #0\n    add r2, r0, #0\n    add r0, r5, #0\n    add r3, r1, #0\n    bl ov15_021FD574\n    mov r2, #6\n    ldrsh r1, [r4, r2]\n    add r0, r5, #0\n    sub r2, r2, #7\n    mov r3, #0\n    bl ov15_021FF364\n    mov r2, #6\n    ldrb r1, [r4, #9]\n    ldrsh r2, [r4, r2]\n    add r0, r5, #0\n    mov r3, #0\n    bl ov15_021FF6BC\n    add r0, r5, #0\n    bl ov15_021FA074\n    add r2, r0, #0\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r3, #1\n    bl ov15_02200140\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov15_021FA73C(void) {
    /* Original at 0x021FA73C */
    /* Requires manual decompilation - 213 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r4, r0, #0\n    add r7, r2, #0\n    mov r6, #1\n    cmp r1, #0x10\n    bls _021FA74A\n    b _021FA92A\n    add r2, r1, r1\n    add r2, pc\n    ldrh r2, [r2, #6]\n    lsl r2, r2, #0x10\n    asr r2, r2, #0x10\n    add pc, r2\n    _021FA756: ; jump table\n    bl ov15_021FA68C\n    sub r1, r6, #2\n    cmp r0, r1\n    bne _021FA786\n    add r0, r6, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r1, #0x8d\n    lsl r1, r1, #2\n    ldr r2, [r4, r1]\n    add r1, r2, #0\n    add r1, #0x64\n    ldrb r1, [r1]\n    cmp r0, r1\n    bne _021FA7A0\n    ldr r1, [sp, #0x1c]\n    cmp r1, #0\n    bne _021FA7A0\n    add r0, r6, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    add r2, #0x64\n    strb r0, [r2]\n    add r0, r4, #0\n    bl ov15_021F9F08\n    mov r0, #0x8d\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    add r2, r0, #4\n    add r0, #0x64\n    ldrb r1, [r0]\n    mov r0, #0xc\n    mul r0, r1\n    add r5, r2, r0\n    add r0, r4, #0\n    bl ov15_021FA074\n    mov r1, #0\n    add r2, r0, #0\n    add r0, r4, #0\n    add r3, r1, #0\n    bl ov15_021FD574\n    mov r2, #6\n    ldrsh r1, [r5, r2]\n    add r0, r4, #0\n    sub r2, r2, #7\n    mov r3, #0\n    bl ov15_021FF364\n    mov r1, #0x8d\n    lsl r1, r1, #2\n    ldr r1, [r4, r1]\n    add r0, r4, #0\n    add r1, #0x64\n    ldrb r1, [r1]\n    bl ov15_02200030\n    mov r2, #6\n    ldrb r1, [r5, #9]\n    ldrsh r2, [r5, r2]\n    add r0, r4, #0\n    mov r3, #0\n    bl ov15_021FF6BC\n    add r0, r4, #0\n    bl ov15_021FA074\n    add r2, r0, #0\n    add r0, r4, #0\n    add r1, r5, #0\n    mov r3, #1\n    bl ov15_02200140\n    mov r2, #0x8d\n    lsl r2, r2, #2\n    ldr r2, [r4, r2]\n    add r0, r4, #0\n    add r2, #0x64\n    ldrb r2, [r2]\n    mov r1, #1\n    bl ov15_021FD404\n    ldr r0, _021FA930 ; =0x000005DC\n    bl PlaySE\n    add r0, r4, #0\n    bl ov15_021FA170\n    ldr r0, _021FA934 ; =0x00000644\n    ldr r1, [r4, r0]\n    cmp r1, #8\n    blt _021FA838\n    add r0, r4, #0\n    bl ov15_021FA0E4\n    add r0, r4, #0\n    bl ov15_021FDF88\n    mov r1, #0x8d\n    lsl r1, r1, #2\n    ldr r1, [r4, r1]\n    ldr r0, _021FA938 ; =0x00000808\n    add r1, #0x64\n    ldrb r1, [r1]\n    add r0, r4, r0\n    mov r2, #7\n    add r1, r1, #1\n    bl ov15_021FDAF4\n    b _021FA92A\n    mov r0, #0x8d\n    lsl r0, r0, #2\n    ldr r2, [r4, r0]\n    sub r1, #8\n    add r3, r2, #0\n    add r3, #0x64\n    ldrb r5, [r3]\n    mov r3, #0xc\n    add r0, r2, #4\n    mul r3, r5\n    add r3, r0, r3\n    mov r0, #6\n    ldrsh r0, [r3, r0]\n    add r0, r0, r1\n    ldrb r1, [r3, #9]\n    cmp r0, r1\n    bge _021FA88A\n    ldr r1, [r3]\n    lsl r0, r0, #2\n    ldrh r0, [r1, r0]\n    add r2, #0x66\n    strh r0, [r2]\n    ldr r0, _021FA930 ; =0x000005DC\n    strb r6, [r7]\n    bl PlaySE\n    add r0, r4, #0\n    bl ov15_021FA170\n    b _021FA92A\n    mov r0, #0x8d\n    lsl r0, r0, #2\n    ldr r2, [r4, r0]\n    add r0, r2, #0\n    add r0, #0x64\n    ldrb r1, [r0]\n    mov r0, #0xc\n    mul r0, r1\n    add r0, r2, r0\n    ldrb r0, [r0, #0xd]\n    cmp r0, #6\n    bls _021FA92A\n    ldr r0, _021FA930 ; =0x000005DC\n    bl PlaySE\n    mov r0, #0x1e\n    str r0, [sp]\n    add r0, r4, #0\n    mov r1, #0x12\n    mov r2, #9\n    mov r3, #8\n    bl ov15_021FD7D0\n    add r6, r0, #0\n    b _021FA92A\n    mov r0, #0x8d\n    lsl r0, r0, #2\n    ldr r2, [r4, r0]\n    add r0, r2, #0\n    add r0, #0x64\n    ldrb r1, [r0]\n    mov r0, #0xc\n    mul r0, r1\n    add r0, r2, r0\n    ldrb r0, [r0, #0xd]\n    cmp r0, #6\n    bls _021FA92A\n    ldr r0, _021FA930 ; =0x000005DC\n    bl PlaySE\n    mov r0, #0x1f\n    str r0, [sp]\n    add r0, r4, #0\n    mov r1, #0x11\n    mov r2, #9\n    mov r3, #8\n    bl ov15_021FD7D0\n    add r6, r0, #0\n    b _021FA92A\n    mov r1, #0x8d\n    lsl r1, r1, #2\n    ldr r2, [r4, r1]\n    mov r3, #0\n    add r2, #0x66\n    strh r3, [r2]\n    ldr r1, [r4, r1]\n    mov r2, #5\n    add r1, #0x68\n    strh r2, [r1]\n    ldr r1, [sp, #0x1c]\n    bl ov15_021FD774\n    mov r0, #SEQ_SE_GS_GEARCANCEL>>6\n    lsl r0, r0, #6\n    bl PlaySE\n    mov r0, #0x24\n    str r0, [sp]\n    add r0, r4, #0\n    mov r1, #0x13\n    mov r2, #9\n    mov r3, #8\n    bl ov15_021FD7D0\n    add r6, r0, #0\n    add r0, r6, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021FA930: .word 0x000005DC\n    _021FA934: .word 0x00000644\n    _021FA938: .word 0x00000808"
    );
    #endif
}

void ov15_021FA93C(void) {
    /* Original at 0x021FA93C */
    /* Requires manual decompilation - 101 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r0, _021FAA10 ; =0x00000619\n    add r4, r5, r0\n    bl System_GetTouchHeld\n    cmp r0, #0\n    bne _021FA958\n    ldrb r1, [r4, #7]\n    mov r0, #0x70\n    bic r1, r0\n    mov r0, #0x10\n    orr r0, r1\n    strb r0, [r4, #7]\n    add r0, r5, #0\n    bl ov15_021FAC40\n    add r6, r0, #0\n    mov r0, #0\n    mvn r0, r0\n    cmp r6, r0\n    beq _021FA96E\n    ldrb r0, [r4]\n    cmp r6, r0\n    beq _021FA97A\n    ldrb r1, [r4, #7]\n    mov r0, #0xf\n    bic r1, r0\n    mov r0, #1\n    orr r0, r1\n    strb r0, [r4, #7]\n    add r0, r5, #0\n    bl ov15_021FAA18\n    cmp r0, #0\n    bne _021FA9FE\n    ldrb r0, [r4, #7]\n    lsl r0, r0, #0x19\n    lsr r0, r0, #0x1d\n    cmp r0, #1\n    bne _021FA9FE\n    mov r0, #0\n    mvn r0, r0\n    cmp r6, r0\n    beq _021FA9FE\n    mov r0, #0x8d\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    ldrb r1, [r4]\n    add r0, #0x64\n    strb r1, [r0]\n    lsl r0, r6, #0x18\n    ldrb r1, [r4]\n    lsr r0, r0, #0x18\n    cmp r1, r0\n    bls _021FA9B4\n    mov r0, #0\n    strb r0, [r4, #1]\n    strb r0, [r4, #2]\n    b _021FA9C6\n    cmp r1, r0\n    bhs _021FA9C2\n    mov r0, #1\n    strb r0, [r4, #1]\n    mov r0, #0\n    strb r0, [r4, #2]\n    b _021FA9C6\n    mov r0, #2\n    strb r0, [r4, #1]\n    lsl r0, r6, #0x18\n    lsr r0, r0, #0x18\n    strb r0, [r4]\n    ldrb r2, [r4, #7]\n    mov r1, #0xf\n    bic r2, r1\n    strb r2, [r4, #7]\n    ldrb r2, [r4, #7]\n    mov r1, #0x70\n    bic r2, r1\n    strb r2, [r4, #7]\n    mov r1, #0\n    strb r1, [r4, #4]\n    mov r1, #0x67\n    lsl r1, r1, #4\n    strb r0, [r5, r1]\n    add r0, r5, #0\n    bl ov15_021FF950\n    mov r1, #0x67\n    lsl r1, r1, #4\n    ldrb r1, [r5, r1]\n    ldr r0, _021FAA14 ; =0x00000808\n    mov r2, #7\n    add r0, r5, r0\n    add r1, r1, #1\n    bl ov15_021FDAF4\n    add r0, r5, #0\n    bl ov15_021FAB34\n    add r0, r5, #0\n    bl ov15_021FF964\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    nop\n    _021FAA10: .word 0x00000619\n    _021FAA14: .word 0x00000808"
    );
    #endif
}

void ov15_021FAA18(void) {
    /* Original at 0x021FAA18 */
    /* Requires manual decompilation - 135 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    ldr r1, _021FAB28 ; =gSystem\n    add r5, r0, #0\n    ldr r0, _021FAB2C ; =0x00000619\n    ldr r2, [r1, #0x48]\n    mov r1, #0x20\n    add r4, r5, r0\n    tst r1, r2\n    beq _021FAAA6\n    sub r1, r0, #5\n    ldrb r1, [r5, r1]\n    cmp r1, #1\n    bne _021FAA36\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    sub r0, #0x3d\n    bl PlaySE\n    mov r0, #0x8d\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    ldrb r1, [r4]\n    add r0, #0x64\n    strb r1, [r0]\n    ldrb r0, [r4]\n    cmp r0, #0\n    beq _021FAA5C\n    sub r0, r0, #1\n    strb r0, [r4]\n    mov r0, #0x67\n    lsl r0, r0, #4\n    ldrb r1, [r5, r0]\n    sub r1, r1, #1\n    b _021FAA6A\n    ldr r0, _021FAB30 ; =0x00000614\n    ldrb r1, [r5, r0]\n    sub r1, r1, #1\n    strb r1, [r4]\n    ldrb r1, [r5, r0]\n    add r0, #0x5c\n    sub r1, r1, #1\n    strb r1, [r5, r0]\n    mov r0, #0\n    strb r0, [r4, #2]\n    strb r0, [r4, #1]\n    ldrb r1, [r4, #7]\n    mov r0, #0x70\n    bic r1, r0\n    mov r0, #0x10\n    orr r0, r1\n    strb r0, [r4, #7]\n    ldrb r1, [r4, #7]\n    mov r0, #0xf\n    bic r1, r0\n    mov r0, #1\n    orr r0, r1\n    strb r0, [r4, #7]\n    ldrb r1, [r4, #7]\n    mov r0, #0x80\n    bic r1, r0\n    strb r1, [r4, #7]\n    ldrb r0, [r4, #4]\n    cmp r0, #3\n    beq _021FAA9C\n    mov r0, #4\n    strb r0, [r4, #4]\n    add r0, r5, #0\n    bl ov15_021FF950\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r1, #0x10\n    tst r1, r2\n    beq _021FAB24\n    sub r1, r0, #5\n    ldrb r1, [r5, r1]\n    cmp r1, #1\n    bne _021FAAB8\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    sub r0, #0x3d\n    bl PlaySE\n    mov r0, #0x8d\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    ldrb r1, [r4]\n    add r0, #0x64\n    strb r1, [r0]\n    ldrb r0, [r4]\n    ldr r1, _021FAB30 ; =0x00000614\n    add r2, r0, #1\n    ldrb r0, [r5, r1]\n    cmp r2, r0\n    bge _021FAAE2\n    add r0, r1, #0\n    strb r2, [r4]\n    add r0, #0x5c\n    ldrb r0, [r5, r0]\n    add r0, r0, #1\n    b _021FAAE6\n    mov r0, #0\n    strb r0, [r4]\n    add r1, #0x5c\n    strb r0, [r5, r1]\n    mov r0, #0\n    strb r0, [r4, #2]\n    mov r0, #1\n    strb r0, [r4, #1]\n    ldrb r2, [r4, #7]\n    mov r1, #0x70\n    bic r2, r1\n    mov r1, #0x10\n    orr r1, r2\n    strb r1, [r4, #7]\n    ldrb r2, [r4, #7]\n    mov r1, #0xf\n    bic r2, r1\n    orr r0, r2\n    strb r0, [r4, #7]\n    ldrb r1, [r4, #7]\n    mov r0, #0x80\n    bic r1, r0\n    strb r1, [r4, #7]\n    ldrb r0, [r4, #4]\n    cmp r0, #3\n    beq _021FAB1A\n    mov r0, #4\n    strb r0, [r4, #4]\n    add r0, r5, #0\n    bl ov15_021FF950\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    _021FAB28: .word gSystem\n    _021FAB2C: .word 0x00000619\n    _021FAB30: .word 0x00000614"
    );
    #endif
}

void ov15_021FAB34(void) {
    /* Original at 0x021FAB34 */
    /* Requires manual decompilation - 115 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    ldr r1, _021FAC28 ; =0x00000619\n    add r5, r0, #0\n    add r4, r5, r1\n    ldrb r1, [r4, #2]\n    cmp r1, #0\n    beq _021FAB4C\n    cmp r1, #1\n    beq _021FAB58\n    cmp r1, #2\n    beq _021FAC20\n    b _021FAC24\n    mov r0, #0\n    strb r0, [r4, #3]\n    ldrb r0, [r4, #2]\n    add r0, r0, #1\n    strb r0, [r4, #2]\n    b _021FAC24\n    ldrb r1, [r4, #3]\n    cmp r1, #8\n    bhs _021FAB64\n    add r0, r1, #1\n    strb r0, [r4, #3]\n    b _021FAC24\n    mov r1, #0x8d\n    lsl r1, r1, #2\n    ldr r1, [r5, r1]\n    ldrb r2, [r4]\n    add r1, #0x64\n    strb r2, [r1]\n    bl ov15_021F9F08\n    mov r0, #0x8d\n    lsl r0, r0, #2\n    ldr r1, [r5, r0]\n    add r0, r5, #0\n    add r2, r1, #0\n    add r2, #0x64\n    ldrb r3, [r2]\n    mov r2, #0xc\n    mul r2, r3\n    add r1, r1, r2\n    mov r2, #0xa\n    ldrsh r1, [r1, r2]\n    sub r2, #0xb\n    mov r3, #0\n    bl ov15_021FF364\n    add r0, r5, #0\n    bl ov15_021FA074\n    mov r1, #0\n    add r2, r0, #0\n    add r0, r5, #0\n    add r3, r1, #0\n    bl ov15_021FD574\n    mov r1, #0x8d\n    lsl r1, r1, #2\n    ldr r1, [r5, r1]\n    add r0, r5, #0\n    add r1, #0x64\n    ldrb r1, [r1]\n    bl ov15_02200030\n    mov r2, #0x8d\n    lsl r2, r2, #2\n    ldr r2, [r5, r2]\n    add r0, r5, #0\n    add r2, #0x64\n    ldrb r2, [r2]\n    mov r1, #1\n    bl ov15_021FD404\n    mov r0, #0x8d\n    lsl r0, r0, #2\n    ldr r3, [r5, r0]\n    add r0, r3, #0\n    add r0, #0x64\n    ldrb r1, [r0]\n    mov r0, #0xc\n    add r2, r1, #0\n    mul r2, r0\n    add r0, r3, #0\n    add r1, r3, #0\n    add r0, #0xa\n    add r1, #8\n    add r0, r0, r2\n    add r1, r1, r2\n    add r2, r3, r2\n    ldrb r2, [r2, #0xd]\n    bl ov15_021FA044\n    mov r0, #0x8d\n    lsl r0, r0, #2\n    ldr r3, [r5, r0]\n    add r0, r3, #0\n    add r0, #0x64\n    ldrb r1, [r0]\n    mov r0, #0xc\n    add r2, r1, #0\n    mul r2, r0\n    add r0, r3, #0\n    add r1, r3, #0\n    add r0, #0xa\n    add r1, #8\n    add r0, r0, r2\n    add r1, r1, r2\n    add r2, r3, r2\n    ldrb r2, [r2, #0xd]\n    mov r3, #6\n    bl ov15_021FA070\n    ldrb r0, [r4, #2]\n    add r0, r0, #1\n    strb r0, [r4, #2]\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    _021FAC28: .word 0x00000619"
    );
    #endif
}

void ov15_021FAC2C(void) {
    /* Original at 0x021FAC2C */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _021FAC38 ; =ov15_02201314\n    lsl r1, r1, #2\n    ldr r3, _021FAC3C ; =TouchscreenHitbox_FindRectAtTouchNew\n    ldr r0, [r0, r1]\n    bx r3\n    nop\n    _021FAC38: .word ov15_02201314\n    _021FAC3C: .word TouchscreenHitbox_FindRectAtTouchNew"
    );
    #endif
}

void ov15_021FAC40(void) {
    /* Original at 0x021FAC40 */
    /* Requires manual decompilation - 3 instructions */
    #ifdef MWERKS
    asm(
        "mov r0, #0\n    mvn r0, r0\n    bx lr"
    );
    #endif
}

void ov15_021FAC48(void) {
    /* Original at 0x021FAC48 */
    /* Requires manual decompilation - 96 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    mov r1, #0x8d\n    add r5, r0, #0\n    lsl r1, r1, #2\n    ldr r1, [r5, r1]\n    add r3, r1, #4\n    add r1, #0x64\n    ldrb r2, [r1]\n    mov r1, #0xc\n    mul r1, r2\n    add r3, r3, r1\n    ldr r1, _021FAD20 ; =0x00000671\n    mov r2, #1\n    strb r2, [r5, r1]\n    mov r2, #6\n    ldrsh r3, [r3, r2]\n    add r2, r1, #0\n    sub r2, #0x2d\n    ldr r2, [r5, r2]\n    add r1, r1, #1\n    add r2, r3, r2\n    sub r2, #8\n    strb r2, [r5, r1]\n    bl ov15_021FED60\n    add r0, r5, #0\n    bl ov15_021FB114\n    add r0, r5, #0\n    bl ov15_02200294\n    add r0, r5, #0\n    bl ov15_021FF560\n    mov r0, #0x61\n    lsl r0, r0, #2\n    add r0, r5, r0\n    bl ov15_021FF7AC\n    add r0, r5, #0\n    bl ov15_021FED58\n    mov r0, #0x8d\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    add r2, r0, #4\n    add r0, #0x64\n    ldrb r1, [r0]\n    mov r0, #0xc\n    mul r0, r1\n    add r4, r2, r0\n    add r0, r5, #0\n    bl ov15_021FA074\n    ldr r3, _021FAD24 ; =0x00000644\n    add r2, r0, #0\n    ldr r3, [r5, r3]\n    add r0, r5, #0\n    mov r1, #1\n    sub r3, #8\n    bl ov15_021FD574\n    ldr r2, _021FAD24 ; =0x00000644\n    mov r1, #6\n    ldr r2, [r5, r2]\n    ldrsh r1, [r4, r1]\n    add r0, r5, #0\n    sub r2, #8\n    mov r3, #1\n    bl ov15_021FF364\n    mov r2, #6\n    ldrb r1, [r4, #9]\n    ldrsh r2, [r4, r2]\n    add r0, r5, #0\n    mov r3, #0\n    bl ov15_021FF6BC\n    add r0, r5, #0\n    bl ov15_021FA074\n    add r2, r0, #0\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r3, #0\n    bl ov15_02200140\n    mov r2, #6\n    ldrsh r3, [r4, r2]\n    ldr r2, _021FAD24 ; =0x00000644\n    add r0, r5, #0\n    ldr r2, [r5, r2]\n    add r1, r4, #0\n    add r2, r3, r2\n    sub r2, #8\n    bl ov15_022001C4\n    ldr r1, _021FAD24 ; =0x00000644\n    add r0, r5, #0\n    ldr r1, [r5, r1]\n    bl ov15_021FFECC\n    ldr r0, _021FAD24 ; =0x00000644\n    ldr r1, [r5, r0]\n    add r0, #0x28\n    sub r1, #8\n    str r1, [r5, r0]\n    pop {r3, r4, r5, pc}\n    _021FAD20: .word 0x00000671\n    _021FAD24: .word 0x00000644"
    );
    #endif
}

void ov15_021FAD28(void) {
    /* Original at 0x021FAD28 */
    /* Requires manual decompilation - 39 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _021FAD6C ; =gSystem\n    mov r2, #0x40\n    ldr r1, [r1, #0x48]\n    tst r2, r1\n    beq _021FAD3C\n    lsl r1, r0, #2\n    ldr r0, _021FAD70 ; =ov15_02200584\n    ldrb r0, [r0, r1]\n    sub r0, #8\n    bx lr\n    mov r2, #0x80\n    tst r2, r1\n    beq _021FAD4C\n    lsl r1, r0, #2\n    ldr r0, _021FAD74 ; =ov15_02200585\n    ldrb r0, [r0, r1]\n    sub r0, #8\n    bx lr\n    mov r2, #0x20\n    tst r2, r1\n    beq _021FAD5C\n    lsl r1, r0, #2\n    ldr r0, _021FAD78 ; =ov15_02200586\n    ldrb r0, [r0, r1]\n    sub r0, #8\n    bx lr\n    mov r2, #0x10\n    tst r1, r2\n    beq _021FAD6A\n    lsl r1, r0, #2\n    ldr r0, _021FAD7C ; =ov15_02200587\n    ldrb r0, [r0, r1]\n    sub r0, #8\n    bx lr\n    _021FAD6C: .word gSystem\n    _021FAD70: .word ov15_02200584\n    _021FAD74: .word ov15_02200585\n    _021FAD78: .word ov15_02200586\n    _021FAD7C: .word ov15_02200587"
    );
    #endif
}

void ov15_021FAD80(void) {
    /* Original at 0x021FAD80 */
    /* Requires manual decompilation - 44 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl ov15_021FA074\n    add r6, r0, #0\n    add r0, r5, #0\n    bl ov15_021FA098\n    add r3, r0, #0\n    add r0, r5, #0\n    mov r1, #1\n    add r2, r6, #0\n    bl ov15_021FD574\n    add r0, r5, #0\n    bl ov15_021FA098\n    mov r1, #6\n    add r2, r0, #0\n    ldrsh r1, [r4, r1]\n    add r0, r5, #0\n    mov r3, #1\n    bl ov15_021FF364\n    ldr r2, _021FADE4 ; =0x00000672\n    add r0, r5, #0\n    ldrb r2, [r5, r2]\n    add r1, r4, #0\n    bl ov15_022001C4\n    mov r0, #0x8d\n    lsl r0, r0, #2\n    ldr r3, [r5, r0]\n    add r0, r3, #0\n    add r0, #0x64\n    ldrb r1, [r0]\n    mov r0, #0xc\n    add r2, r1, #0\n    mul r2, r0\n    add r3, r3, r2\n    mov r2, #0xa\n    ldrb r1, [r3, #0xd]\n    ldrsh r2, [r3, r2]\n    add r0, r5, #0\n    mov r3, #0\n    bl ov15_021FF6BC\n    pop {r4, r5, r6, pc}\n    nop\n    _021FADE4: .word 0x00000672"
    );
    #endif
}

void ov15_021FADE8(void) {
    /* Original at 0x021FADE8 */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    mov r4, #0\n    add r5, r1, #0\n    add r6, r0, #0\n    mvn r4, r4\n    cmp r5, #8\n    bhi _021FAE3A\n    add r1, r5, r5\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _021FAE02: ; jump table\n    bl ov15_021FA074\n    cmp r0, r5\n    ble _021FAE28\n    ldr r0, _021FAE40 ; =0x0000066C\n    ldr r4, [r6, r0]\n    sub r0, #0x90\n    bl PlaySE\n    b _021FAE3A\n    ldr r0, _021FAE44 ; =0x000005F3\n    bl PlaySE\n    b _021FAE3A\n    mov r4, #0xe\n    b _021FAE3A\n    mov r4, #0xf\n    b _021FAE3A\n    sub r4, r4, #1\n    add r0, r4, #0\n    pop {r4, r5, r6, pc}\n    nop\n    _021FAE40: .word 0x0000066C\n    _021FAE44: .word 0x000005F3"
    );
    #endif
}

void ov15_021FAE48(void) {
    /* Original at 0x021FAE48 */
    /* Requires manual decompilation - 189 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    mov r0, #0x8d\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r4, #0\n    add r2, r0, #4\n    add r0, #0x64\n    ldrb r1, [r0]\n    mov r0, #0xc\n    mvn r4, r4\n    mul r0, r1\n    add r7, r2, r0\n    ldr r0, _021FAFE4 ; =0x0000066C\n    ldr r0, [r5, r0]\n    bl ov15_021FAD28\n    lsl r0, r0, #0x10\n    ldr r2, _021FAFE4 ; =0x0000066C\n    lsr r1, r0, #0x10\n    ldr r0, [r5, r2]\n    cmp r0, r1\n    beq _021FAE9C\n    ldr r0, _021FAFE8 ; =0x0000FFFA\n    add r0, r1, r0\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    cmp r0, #1\n    bhi _021FAE8C\n    add r0, r5, #0\n    bl ov15_021FADE8\n    add r4, r0, #0\n    b _021FAE9C\n    str r1, [r5, r2]\n    ldr r1, [r5, r2]\n    add r0, r5, #0\n    bl ov15_021FFF34\n    ldr r0, _021FAFEC ; =0x000005DC\n    bl PlaySE\n    add r0, r5, #0\n    mov r1, #2\n    bl ov15_021FAC2C\n    add r6, r0, #0\n    mov r0, #0\n    mvn r0, r0\n    cmp r6, r0\n    beq _021FAF04\n    cmp r6, #8\n    bne _021FAEC6\n    add r0, r5, #0\n    add r1, r6, #0\n    bl ov15_021FADE8\n    add r4, r0, #0\n    add r0, r5, #0\n    add r1, r6, #0\n    bl ov15_021FFF34\n    b _021FAF24\n    sub r0, r6, #6\n    cmp r0, #1\n    bhi _021FAED8\n    add r0, r5, #0\n    add r1, r6, #0\n    bl ov15_021FADE8\n    add r4, r0, #0\n    b _021FAF24\n    ldr r0, _021FAFE4 ; =0x0000066C\n    str r6, [r5, r0]\n    add r0, r5, #0\n    bl ov15_021FA074\n    cmp r0, r6\n    bls _021FAEF2\n    add r0, r5, #0\n    add r1, r6, #0\n    bl ov15_021FADE8\n    add r4, r0, #0\n    b _021FAEF8\n    ldr r0, _021FAFF0 ; =0x000005F3\n    bl PlaySE\n    ldr r1, _021FAFE4 ; =0x0000066C\n    add r0, r5, #0\n    ldr r1, [r5, r1]\n    bl ov15_021FFF34\n    b _021FAF24\n    ldr r0, _021FAFF4 ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #1\n    tst r0, r1\n    beq _021FAF1C\n    ldr r1, _021FAFE4 ; =0x0000066C\n    add r0, r5, #0\n    ldr r1, [r5, r1]\n    bl ov15_021FADE8\n    add r4, r0, #0\n    b _021FAF24\n    mov r0, #2\n    tst r1, r0\n    beq _021FAF24\n    sub r4, r0, #4\n    mov r0, #1\n    mvn r0, r0\n    cmp r4, r0\n    bhi _021FAF3E\n    bhs _021FAF46\n    cmp r4, #0xf\n    bhi _021FAFAC\n    cmp r4, #0xe\n    blo _021FAFAC\n    beq _021FAF70\n    cmp r4, #0xf\n    beq _021FAF8E\n    b _021FAFAC\n    add r0, r0, #1\n    cmp r4, r0\n    beq _021FAFE0\n    b _021FAFAC\n    mov r0, #SEQ_SE_GS_GEARCANCEL>>6\n    lsl r0, r0, #6\n    bl PlaySE\n    ldr r0, _021FAFF8 ; =0x00000672\n    mov r1, #6\n    ldrb r0, [r5, r0]\n    bl _s32_div_f\n    mov r1, #6\n    mul r1, r0\n    strh r1, [r7, #6]\n    mov r0, #0x20\n    str r0, [sp]\n    add r0, r5, #0\n    mov r1, #0x13\n    mov r2, #9\n    mov r3, #8\n    bl ov15_021FD7D0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldrb r0, [r7, #9]\n    cmp r0, #6\n    bls _021FAFE0\n    ldr r0, _021FAFEC ; =0x000005DC\n    bl PlaySE\n    mov r0, #0x1f\n    str r0, [sp]\n    add r0, r5, #0\n    mov r1, #0x11\n    mov r2, #9\n    mov r3, #8\n    bl ov15_021FD7D0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldrb r0, [r7, #9]\n    cmp r0, #6\n    bls _021FAFE0\n    ldr r0, _021FAFEC ; =0x000005DC\n    bl PlaySE\n    mov r0, #0x1e\n    str r0, [sp]\n    add r0, r5, #0\n    mov r1, #0x12\n    mov r2, #9\n    mov r3, #8\n    bl ov15_021FD7D0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, _021FAFEC ; =0x000005DC\n    bl PlaySE\n    ldr r1, _021FAFF8 ; =0x00000672\n    mov r2, #6\n    ldrb r0, [r5, r1]\n    sub r1, r1, #6\n    ldrsh r2, [r7, r2]\n    ldr r1, [r5, r1]\n    add r1, r2, r1\n    cmp r0, r1\n    bne _021FAFD2\n    add r0, r5, #0\n    mov r1, #0x14\n    mov r2, #0x29\n    mov r3, #0x21\n    bl ov15_021FD810\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r5, #0\n    mov r1, #0x14\n    mov r2, #0x2a\n    mov r3, #0x21\n    bl ov15_021FD810\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #3\n    pop {r3, r4, r5, r6, r7, pc}\n    _021FAFE4: .word 0x0000066C\n    _021FAFE8: .word 0x0000FFFA\n    _021FAFEC: .word 0x000005DC\n    _021FAFF0: .word 0x000005F3\n    _021FAFF4: .word gSystem\n    _021FAFF8: .word 0x00000672"
    );
    #endif
}

void ov15_021FAFFC(void) {
    /* Original at 0x021FAFFC */
    /* Requires manual decompilation - 45 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #4\n    add r4, r0, #0\n    mov r0, #0x8d\n    lsl r0, r0, #2\n    ldr r1, [r4, r0]\n    add r0, r1, #0\n    add r0, #0x64\n    ldrb r3, [r0]\n    mov r0, #0xc\n    add r1, r1, #4\n    mul r0, r3\n    add r5, r1, r0\n    mov r0, #6\n    ldr r1, _021FB05C ; =0x0000066C\n    ldrsh r6, [r5, r0]\n    ldr r2, [r4, r1]\n    add r1, r1, #6\n    add r2, r6, r2\n    lsl r2, r2, #0x10\n    ldrb r1, [r4, r1]\n    lsr r2, r2, #0x10\n    cmp r1, r2\n    beq _021FB050\n    str r0, [sp]\n    ldr r0, [r5]\n    bl MoveItemSlotInList\n    add r0, r4, #0\n    bl ov15_021F9F08\n    ldr r1, _021FB05C ; =0x0000066C\n    ldr r2, [r4, r1]\n    add r0, r1, #0\n    add r2, #8\n    sub r0, #0x28\n    str r2, [r4, r0]\n    sub r1, #0x28\n    ldr r1, [r4, r1]\n    add r0, r4, #0\n    bl ov15_021FA0E4\n    add r0, r4, #0\n    bl ov15_021FB060\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}\n    nop\n    _021FB05C: .word 0x0000066C"
    );
    #endif
}

void ov15_021FB060(void) {
    /* Original at 0x021FB060 */
    /* Requires manual decompilation - 76 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    mov r1, #0xd2\n    add r5, r0, #0\n    mov r3, #0\n    lsl r1, r1, #2\n    str r3, [r5, r1]\n    ldr r1, _021FB10C ; =0x00000671\n    strb r3, [r5, r1]\n    add r2, r1, #1\n    strb r3, [r5, r2]\n    add r1, r1, #3\n    str r3, [r5, r1]\n    bl ov15_021FB114\n    add r0, r5, #0\n    bl ov15_021F9F08\n    mov r0, #0x8d\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    add r2, r0, #4\n    add r0, #0x64\n    ldrb r1, [r0]\n    mov r0, #0xc\n    mul r0, r1\n    add r4, r2, r0\n    add r0, r5, #0\n    bl ov15_021FA074\n    mov r1, #0\n    add r2, r0, #0\n    add r0, r5, #0\n    add r3, r1, #0\n    bl ov15_021FD574\n    mov r2, #6\n    ldrsh r1, [r4, r2]\n    add r0, r5, #0\n    sub r2, r2, #7\n    mov r3, #0\n    bl ov15_021FF364\n    mov r1, #0x8d\n    lsl r1, r1, #2\n    ldr r1, [r5, r1]\n    add r0, r5, #0\n    add r1, #0x64\n    ldrb r1, [r1]\n    bl ov15_02200030\n    mov r2, #0x8d\n    lsl r2, r2, #2\n    ldr r2, [r5, r2]\n    add r0, r5, #0\n    add r2, #0x64\n    ldrb r2, [r2]\n    mov r1, #1\n    bl ov15_021FD404\n    mov r2, #6\n    ldrb r1, [r4, #9]\n    ldrsh r2, [r4, r2]\n    add r0, r5, #0\n    mov r3, #0\n    bl ov15_021FF6BC\n    add r0, r5, #0\n    bl ov15_021FA074\n    add r2, r0, #0\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r3, #1\n    bl ov15_02200140\n    add r0, r5, #0\n    bl ov15_021FED24\n    ldr r1, _021FB110 ; =0x00000644\n    add r0, r5, #0\n    ldr r1, [r5, r1]\n    bl ov15_021FFECC\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    nop\n    _021FB10C: .word 0x00000671\n    _021FB110: .word 0x00000644"
    );
    #endif
}

void ov15_021FB114(void) {
    /* Original at 0x021FB114 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r1, #0x8d\n    lsl r1, r1, #2\n    ldr r2, [r0, r1]\n    add r4, r2, #4\n    add r2, #0x64\n    ldrb r3, [r2]\n    mov r2, #0xc\n    mul r2, r3\n    add r3, r4, r2\n    ldr r2, _021FB148 ; =0x00000671\n    ldrb r2, [r0, r2]\n    cmp r2, #0\n    beq _021FB146\n    ldrh r2, [r3, #4]\n    add r1, #0x1c\n    ldr r0, [r0, r1]\n    sub r2, r2, #1\n    lsl r2, r2, #4\n    add r2, #0x10\n    lsl r2, r2, #0x10\n    mov r1, #0xb1\n    asr r2, r2, #0x10\n    bl ManagedSprite_SetPositionXY\n    pop {r4, pc}\n    _021FB148: .word 0x00000671"
    );
    #endif
}

void ov15_021FB14C(void) {
    /* Original at 0x021FB14C */
    /* Requires manual decompilation - 265 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    ldr r1, _021FB370 ; =_022004EC\n    add r4, r0, #0\n    ldrb r2, [r1]\n    add r0, sp, #0\n    strb r2, [r0]\n    ldrb r2, [r1, #1]\n    strb r2, [r0, #1]\n    ldrb r2, [r1, #2]\n    strb r2, [r0, #2]\n    ldrb r2, [r1, #3]\n    ldrb r1, [r1, #4]\n    strb r2, [r0, #3]\n    strb r1, [r0, #4]\n    mov r0, #0x8d\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0\n    add r0, #0x66\n    ldrh r0, [r0]\n    mov r2, #6\n    bl LoadItemDataOrGfx\n    add r7, r0, #0\n    mov r0, #0x8d\n    lsl r0, r0, #2\n    ldr r2, [r4, r0]\n    add r3, r4, #0\n    add r0, r2, #0\n    add r0, #0x64\n    ldrb r1, [r0]\n    mov r0, #0xc\n    mul r0, r1\n    add r0, r2, r0\n    ldrb r5, [r0, #0xc]\n    mov r2, #0\n    mov r0, #0x7f\n    add r1, r2, #0\n    lsl r0, r0, #4\n    add r2, r2, #1\n    str r1, [r3, r0]\n    add r3, r3, #4\n    cmp r2, #5\n    blt _021FB19C\n    mov r0, #0x8d\n    lsl r0, r0, #2\n    ldr r1, [r4, r0]\n    add r0, r1, #0\n    add r0, #0x65\n    ldrb r0, [r0]\n    cmp r0, #0\n    beq _021FB1B8\n    b _021FB2F8\n    add r0, r1, #0\n    add r0, #0x76\n    ldrh r0, [r0]\n    lsl r0, r0, #0x10\n    lsr r2, r0, #0x11\n    ldr r0, _021FB374 ; =0x0000FFFE\n    add r0, r2, r0\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    cmp r0, #1\n    bhi _021FB1E8\n    add r0, r1, #0\n    add r0, #0x64\n    ldrb r2, [r0]\n    mov r0, #0xc\n    mul r0, r2\n    add r0, r1, r0\n    ldrb r0, [r0, #0xc]\n    cmp r0, #5\n    bne _021FB280\n    mov r1, #2\n    add r0, sp, #0\n    strb r1, [r0]\n    b _021FB280\n    add r0, r7, #0\n    mov r1, #6\n    bl GetItemAttr_PreloadedItemData\n    cmp r0, #0\n    beq _021FB280\n    mov r2, #0x8d\n    lsl r2, r2, #2\n    ldr r1, [r4, r2]\n    sub r2, #0x72\n    add r0, r1, #0\n    add r0, #0x66\n    ldrh r0, [r0]\n    cmp r0, r2\n    bne _021FB21C\n    add r2, r1, #0\n    add r2, #0x76\n    ldrh r2, [r2]\n    lsl r2, r2, #0x1f\n    lsr r2, r2, #0x1f\n    cmp r2, #1\n    bne _021FB21C\n    mov r1, #1\n    add r0, sp, #0\n    strb r1, [r0]\n    b _021FB280\n    add r2, r1, #0\n    add r2, #0x64\n    ldrb r3, [r2]\n    mov r2, #0xc\n    mul r2, r3\n    add r2, r1, r2\n    ldrb r3, [r2, #0xc]\n    cmp r3, #5\n    bne _021FB236\n    mov r1, #2\n    add r0, sp, #0\n    strb r1, [r0]\n    b _021FB280\n    ldr r2, _021FB378 ; =0x000001C1\n    cmp r0, r2\n    bne _021FB244\n    mov r1, #4\n    add r0, sp, #0\n    strb r1, [r0]\n    b _021FB280\n    cmp r3, #4\n    bne _021FB25A\n    ldr r0, [r1, #0x70]\n    bl Leftover_CanPlantBerry\n    cmp r0, #1\n    bne _021FB25A\n    mov r1, #3\n    add r0, sp, #0\n    strb r1, [r0]\n    b _021FB280\n    mov r0, #0x8d\n    lsl r0, r0, #2\n    ldr r1, [r4, r0]\n    sub r0, #0x3e\n    add r1, #0x66\n    ldrh r1, [r1]\n    cmp r1, r0\n    bne _021FB27A\n    bl SoundSys_GetGBSoundsState\n    cmp r0, #1\n    bne _021FB27A\n    mov r1, #0xf\n    add r0, sp, #0\n    strb r1, [r0]\n    b _021FB280\n    mov r1, #0\n    add r0, sp, #0\n    strb r1, [r0]\n    add r0, r7, #0\n    mov r1, #3\n    bl GetItemAttr_PreloadedItemData\n    cmp r0, #0\n    bne _021FB2AE\n    mov r0, #0x8d\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    add r0, #0x66\n    ldrh r0, [r0]\n    bl ItemIdIsNotJohtoBall\n    cmp r0, #1\n    bne _021FB2A4\n    mov r1, #8\n    add r0, sp, #0\n    strb r1, [r0, #2]\n    cmp r5, #3\n    beq _021FB2AE\n    mov r1, #5\n    add r0, sp, #0\n    strb r1, [r0, #1]\n    add r0, r7, #0\n    mov r1, #4\n    bl GetItemAttr_PreloadedItemData\n    cmp r0, #0\n    beq _021FB310\n    mov r0, #0x8e\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl Bag_GetRegisteredItem1\n    mov r1, #0x8d\n    lsl r1, r1, #2\n    ldr r2, [r4, r1]\n    add r2, #0x66\n    ldrh r2, [r2]\n    cmp r2, r0\n    beq _021FB2E8\n    add r0, r1, #4\n    ldr r0, [r4, r0]\n    bl Bag_GetRegisteredItem2\n    mov r1, #0x8d\n    lsl r1, r1, #2\n    ldr r1, [r4, r1]\n    add r1, #0x66\n    ldrh r1, [r1]\n    cmp r1, r0\n    bne _021FB2F0\n    mov r1, #7\n    add r0, sp, #0\n    strb r1, [r0, #1]\n    b _021FB310\n    mov r1, #6\n    add r0, sp, #0\n    strb r1, [r0, #1]\n    b _021FB310\n    cmp r0, #6\n    bne _021FB310\n    add r1, #0x66\n    ldrh r1, [r1]\n    add r0, r5, #0\n    bl ov15_021FD3F0\n    cmp r0, #1\n    bne _021FB310\n    mov r1, #0xe\n    add r0, sp, #0\n    strb r1, [r0]\n    mov r0, #0x8d\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    add r0, #0x65\n    ldrb r0, [r0]\n    cmp r0, #6\n    beq _021FB32C\n    cmp r5, #3\n    beq _021FB32C\n    cmp r5, #4\n    beq _021FB32C\n    mov r1, #0xc\n    add r0, sp, #0\n    strb r1, [r0, #3]\n    mov r3, #0x7f\n    mov r1, #0xb\n    add r0, sp, #0\n    strb r1, [r0, #4]\n    ldr r6, _021FB37C ; =ov15_02201368\n    mov r2, #0\n    add r0, sp, #0\n    add r1, r4, #0\n    lsl r3, r3, #4\n    ldrb r5, [r0]\n    cmp r5, #0xff\n    beq _021FB34A\n    lsl r5, r5, #2\n    ldr r5, [r6, r5]\n    str r5, [r1, r3]\n    add r2, r2, #1\n    add r0, r0, #1\n    add r1, r1, #4\n    cmp r2, #5\n    blt _021FB33E\n    add r0, r4, #0\n    add r1, sp, #0\n    mov r2, #5\n    bl ov15_021FEB84\n    add r0, r4, #0\n    add r1, sp, #0\n    bl ov15_021FB380\n    add r0, r7, #0\n    bl Heap_Free\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    _021FB370: .word _022004EC\n    _021FB374: .word 0x0000FFFE\n    _021FB378: .word 0x000001C1\n    _021FB37C: .word ov15_02201368"
    );
    #endif
}

void ov15_021FB380(void) {
    /* Original at 0x021FB380 */
    /* Requires manual decompilation - 48 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    ldr r1, _021FB3E8 ; =0x0000066C\n    add r5, r0, #0\n    mov r2, #0\n    str r2, [r5, r1]\n    ldr r2, [r5, r1]\n    ldr r1, _021FB3EC ; =ov15_02201468\n    ldrb r1, [r1, r2]\n    bl ov15_021FFECC\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov15_0220023C\n    mov r0, #0x61\n    mov r1, #3\n    lsl r0, r0, #2\n    lsl r1, r1, #8\n    ldrb r2, [r4]\n    add r0, r5, r0\n    add r1, r5, r1\n    bl ov15_021FF758\n    mov r0, #0x65\n    mov r1, #3\n    lsl r0, r0, #2\n    lsl r1, r1, #8\n    ldrb r2, [r4, #1]\n    add r0, r5, r0\n    add r1, r5, r1\n    bl ov15_021FF758\n    mov r0, #0x69\n    mov r1, #3\n    lsl r0, r0, #2\n    lsl r1, r1, #8\n    ldrb r2, [r4, #2]\n    add r0, r5, r0\n    add r1, r5, r1\n    bl ov15_021FF758\n    mov r0, #0x6d\n    mov r1, #3\n    lsl r0, r0, #2\n    lsl r1, r1, #8\n    ldrb r2, [r4, #3]\n    add r0, r5, r0\n    add r1, r5, r1\n    bl ov15_021FF758\n    pop {r3, r4, r5, pc}\n    _021FB3E8: .word 0x0000066C\n    _021FB3EC: .word ov15_02201468"
    );
    #endif
}

void ov15_021FB3F0(void) {
    /* Original at 0x021FB3F0 */
    /* Requires manual decompilation - 129 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r0, _021FB4F8 ; =0x0000066C\n    mov r2, #0x40\n    ldr r1, [r5, r0]\n    ldr r0, _021FB4FC ; =gSystem\n    add r4, r1, #0\n    ldr r0, [r0, #0x48]\n    tst r2, r0\n    beq _021FB40C\n    ldr r0, _021FB500 ; =ov15_02200528\n    lsl r2, r1, #2\n    ldrb r4, [r0, r2]\n    b _021FB434\n    mov r2, #0x80\n    tst r2, r0\n    beq _021FB41A\n    ldr r0, _021FB504 ; =ov15_02200529\n    lsl r2, r1, #2\n    ldrb r4, [r0, r2]\n    b _021FB434\n    mov r2, #0x20\n    tst r2, r0\n    beq _021FB428\n    ldr r0, _021FB508 ; =ov15_0220052A\n    lsl r2, r1, #2\n    ldrb r4, [r0, r2]\n    b _021FB434\n    mov r2, #0x10\n    tst r0, r2\n    beq _021FB434\n    ldr r0, _021FB50C ; =ov15_0220052B\n    lsl r2, r1, #2\n    ldrb r4, [r0, r2]\n    cmp r4, r1\n    beq _021FB452\n    ldr r0, _021FB4F8 ; =0x0000066C\n    ldr r1, _021FB510 ; =ov15_02201468\n    str r4, [r5, r0]\n    ldrb r1, [r1, r4]\n    add r0, r5, #0\n    bl ov15_021FFECC\n    ldr r0, _021FB514 ; =0x000005DC\n    bl PlaySE\n    mov r0, #0\n    mvn r0, r0\n    pop {r4, r5, r6, pc}\n    add r0, r5, #0\n    mov r1, #1\n    bl ov15_021FAC2C\n    add r6, r0, #0\n    mov r0, #0\n    mvn r0, r0\n    cmp r6, r0\n    beq _021FB4A4\n    add r0, r5, #0\n    mov r1, #1\n    bl ov15_021FD774\n    ldr r0, _021FB4F8 ; =0x0000066C\n    ldr r1, _021FB510 ; =ov15_02201468\n    str r6, [r5, r0]\n    ldrb r1, [r1, r6]\n    add r0, r5, #0\n    bl ov15_021FFECC\n    cmp r6, #4\n    bne _021FB48C\n    mov r0, #SEQ_SE_GS_GEARCANCEL>>6\n    lsl r0, r0, #6\n    bl PlaySE\n    mov r0, #1\n    mvn r0, r0\n    pop {r4, r5, r6, pc}\n    lsl r0, r6, #2\n    add r1, r5, r0\n    mov r0, #0x7f\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    cmp r0, #0\n    beq _021FB4F2\n    ldr r0, _021FB514 ; =0x000005DC\n    bl PlaySE\n    add r0, r6, #0\n    pop {r4, r5, r6, pc}\n    ldr r0, _021FB4FC ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #1\n    tst r0, r1\n    beq _021FB4DE\n    lsl r0, r4, #2\n    add r1, r5, r0\n    mov r0, #0x7f\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    cmp r0, #0\n    beq _021FB4CE\n    ldr r0, _021FB514 ; =0x000005DC\n    bl PlaySE\n    add r0, r5, #0\n    mov r1, #0\n    bl ov15_021FD774\n    add r0, r4, #0\n    pop {r4, r5, r6, pc}\n    cmp r4, #4\n    bne _021FB4F2\n    ldr r0, _021FB514 ; =0x000005DC\n    bl PlaySE\n    mov r0, #1\n    mvn r0, r0\n    pop {r4, r5, r6, pc}\n    mov r0, #2\n    tst r0, r1\n    beq _021FB4F2\n    mov r0, #SEQ_SE_GS_GEARCANCEL>>6\n    lsl r0, r0, #6\n    bl PlaySE\n    mov r0, #1\n    mvn r0, r0\n    pop {r4, r5, r6, pc}\n    mov r0, #0\n    mvn r0, r0\n    pop {r4, r5, r6, pc}\n    _021FB4F8: .word 0x0000066C\n    _021FB4FC: .word gSystem\n    _021FB500: .word ov15_02200528\n    _021FB504: .word ov15_02200529\n    _021FB508: .word ov15_0220052A\n    _021FB50C: .word ov15_0220052B\n    _021FB510: .word ov15_02201468\n    _021FB514: .word 0x000005DC"
    );
    #endif
}

void ov15_021FB518(void) {
    /* Original at 0x021FB518 */
    /* Requires manual decompilation - 62 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    bl ov15_021F9F08\n    mov r0, #0x8d\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    add r2, r0, #4\n    add r0, #0x64\n    ldrb r1, [r0]\n    mov r0, #0xc\n    mul r0, r1\n    add r4, r2, r0\n    add r0, r5, #0\n    bl ov15_021FA074\n    mov r1, #0\n    add r2, r0, #0\n    add r0, r5, #0\n    add r3, r1, #0\n    bl ov15_021FD574\n    mov r2, #6\n    ldrsh r1, [r4, r2]\n    add r0, r5, #0\n    sub r2, r2, #7\n    mov r3, #0\n    bl ov15_021FF364\n    mov r1, #0x8d\n    lsl r1, r1, #2\n    ldr r1, [r5, r1]\n    add r0, r5, #0\n    add r1, #0x64\n    ldrb r1, [r1]\n    bl ov15_02200030\n    mov r2, #0x8d\n    lsl r2, r2, #2\n    ldr r2, [r5, r2]\n    add r0, r5, #0\n    add r2, #0x64\n    ldrb r2, [r2]\n    mov r1, #1\n    bl ov15_021FD404\n    mov r2, #6\n    ldrb r1, [r4, #9]\n    ldrsh r2, [r4, r2]\n    add r0, r5, #0\n    mov r3, #0\n    bl ov15_021FF6BC\n    add r0, r5, #0\n    bl ov15_021FA074\n    add r2, r0, #0\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r3, #0\n    bl ov15_02200140\n    ldr r1, _021FB5A8 ; =0x00000644\n    add r0, r5, #0\n    ldr r1, [r5, r1]\n    bl ov15_021FFECC\n    add r0, r5, #0\n    mov r1, #1\n    bl ov15_021F9C78\n    pop {r3, r4, r5, pc}\n    _021FB5A8: .word 0x00000644"
    );
    #endif
}

void ov15_021FB5AC(void) {
    /* Original at 0x021FB5AC */
    /* Requires manual decompilation - 40 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    add r4, r0, #0\n    bl ov15_021FB3F0\n    add r1, r0, #0\n    mov r0, #1\n    mvn r0, r0\n    cmp r1, r0\n    beq _021FB5C8\n    add r0, r0, #1\n    cmp r1, r0\n    beq _021FB5F8\n    b _021FB5DC\n    mov r0, #0x1c\n    str r0, [sp]\n    add r0, r4, #0\n    mov r1, #0x13\n    mov r2, #9\n    mov r3, #8\n    bl ov15_021FD7D0\n    add sp, #4\n    pop {r3, r4, pc}\n    ldr r0, _021FB600 ; =0x00000948\n    mov r2, #9\n    str r1, [r4, r0]\n    add r1, #0x1c\n    mov r0, #0x1d\n    lsl r1, r1, #0x18\n    str r0, [sp]\n    add r0, r4, #0\n    lsr r1, r1, #0x18\n    mov r3, #8\n    bl ov15_021FD7D0\n    add sp, #4\n    pop {r3, r4, pc}\n    mov r0, #4\n    add sp, #4\n    pop {r3, r4, pc}\n    nop\n    _021FB600: .word 0x00000948"
    );
    #endif
}

void ov15_021FB604(void) {
    /* Original at 0x021FB604 */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    bl ov15_02200294\n    add r0, r5, #0\n    bl ov15_021FF560\n    mov r0, #0x61\n    lsl r0, r0, #2\n    add r0, r5, r0\n    bl ov15_021FF7AC\n    mov r0, #0x8d\n    lsl r0, r0, #2\n    ldr r4, [r5, r0]\n    add r0, r5, #0\n    bl ov15_021FA074\n    add r1, r4, #4\n    add r4, #0x64\n    add r2, r0, #0\n    ldrb r4, [r4]\n    mov r3, #0xc\n    add r0, r5, #0\n    mul r3, r4\n    add r1, r1, r3\n    mov r3, #0\n    bl ov15_02200140\n    add r0, r5, #0\n    bl ov15_021FE868\n    add r0, r5, #0\n    bl ov15_021FED3C\n    add r0, r5, #0\n    bl ov15_021FB518\n    mov r0, #1\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov15_021FB654(void) {
    /* Original at 0x021FB654 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov15_02200294\n    mov r0, #0x61\n    lsl r0, r0, #2\n    add r0, r4, r0\n    bl ov15_021FF7AC\n    ldr r1, _021FB67C ; =0x00000948\n    add r0, r4, #0\n    ldr r1, [r4, r1]\n    lsl r1, r1, #2\n    add r2, r4, r1\n    mov r1, #0x7f\n    lsl r1, r1, #4\n    ldr r1, [r2, r1]\n    blx r1\n    pop {r4, pc}\n    nop\n    _021FB67C: .word 0x00000948"
    );
    #endif
}

void ov15_021FB680(void) {
    /* Original at 0x021FB680 */
    /* Requires manual decompilation - 55 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    add r4, r0, #0\n    mov r1, #0\n    bl ov15_021FD788\n    add r0, r4, #0\n    bl ov15_021FFF24\n    mov r0, #0x8d\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #6\n    add r0, #0x66\n    ldrh r0, [r0]\n    add r2, r1, #0\n    bl GetItemAttr\n    add r1, r0, #0\n    lsl r1, r1, #0x10\n    mov r0, #2\n    lsr r1, r1, #0x10\n    bl GetItemFieldUseFunc\n    add r1, r0, #0\n    beq _021FB6EE\n    mov r0, #0x8d\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    ldr r0, [r0, #0x70]\n    blx r1\n    add r3, r0, #0\n    beq _021FB6EE\n    mov r2, #0x8f\n    mov r0, #6\n    lsl r2, r2, #2\n    str r0, [sp]\n    ldr r0, [r4, r2]\n    sub r2, #8\n    ldr r2, [r4, r2]\n    ldr r1, _021FB6F8 ; =0x000005E4\n    add r2, #0x66\n    ldrh r2, [r2]\n    ldr r1, [r4, r1]\n    bl GetItemUseErrorMessage\n    add r0, r4, #0\n    mov r1, #0\n    bl ov15_021FEF48\n    ldr r1, _021FB6FC ; =0x00000616\n    add sp, #4\n    strb r0, [r4, r1]\n    mov r0, #0xc\n    pop {r3, r4, pc}\n    add r0, r4, #0\n    bl ov15_021FB784\n    add sp, #4\n    pop {r3, r4, pc}\n    _021FB6F8: .word 0x000005E4\n    _021FB6FC: .word 0x00000616"
    );
    #endif
}

void ov15_021FB700(void) {
    /* Original at 0x021FB700 */
    /* Requires manual decompilation - 56 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _021FB778 ; =0x00000616\n    ldrb r0, [r4, r0]\n    bl TextPrinterCheckActive\n    cmp r0, #0\n    bne _021FB772\n    ldr r0, _021FB77C ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #3\n    tst r0, r1\n    bne _021FB722\n    ldr r0, _021FB780 ; =gSystem + 0x40\n    ldrh r0, [r0, #0x24]\n    cmp r0, #0\n    beq _021FB772\n    mov r0, #0x8d\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    add r0, #0x65\n    ldrb r0, [r0]\n    cmp r0, #3\n    beq _021FB736\n    add r0, r4, #0\n    bl ov15_021FED3C\n    add r0, r4, #0\n    add r0, #0x34\n    mov r1, #1\n    bl ClearFrameAndWindow2\n    add r0, r4, #0\n    add r0, #0x34\n    bl ClearWindowTilemapAndScheduleTransfer\n    add r0, r4, #4\n    bl ScheduleWindowCopyToVram\n    add r0, r4, #0\n    mov r1, #1\n    bl ov15_021FD788\n    add r0, r4, #0\n    bl ov15_021FB518\n    mov r0, #0x8d\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    add r0, #0x65\n    ldrb r0, [r0]\n    cmp r0, #3\n    bne _021FB76E\n    mov r0, #0x1a\n    pop {r4, pc}\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0xc\n    pop {r4, pc}\n    nop\n    _021FB778: .word 0x00000616\n    _021FB77C: .word gSystem\n    _021FB780: .word gSystem + 0x40"
    );
    #endif
}

void ov15_021FB784(void) {
    /* Original at 0x021FB784 */
    /* Requires manual decompilation - 69 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0x8d\n    lsl r0, r0, #2\n    ldr r1, [r4, r0]\n    add r3, r1, #4\n    add r1, #0x64\n    ldrb r2, [r1]\n    mov r1, #0xc\n    mul r1, r2\n    add r3, r3, r1\n    ldr r1, _021FB80C ; =0x0000067B\n    mov r2, #0\n    strb r2, [r4, r1]\n    ldrb r2, [r3, #8]\n    cmp r2, #3\n    bne _021FB7B0\n    ldr r2, _021FB810 ; =ov15_021FB830\n    add r0, r1, #1\n    str r2, [r4, r0]\n    mov r0, #0xd\n    pop {r4, pc}\n    ldr r2, [r4, r0]\n    sub r1, #0x97\n    ldr r0, [r2]\n    add r2, #0x66\n    ldrh r2, [r2]\n    ldr r1, [r4, r1]\n    mov r3, #6\n    bl TryFormatRegisteredKeyItemUseMessage\n    cmp r0, #1\n    bne _021FB7D6\n    add r0, r4, #0\n    mov r1, #0\n    bl ov15_021FEF48\n    ldr r1, _021FB814 ; =0x00000616\n    strb r0, [r4, r1]\n    mov r0, #0xc\n    pop {r4, pc}\n    mov r1, #0x8d\n    lsl r1, r1, #2\n    ldr r1, [r4, r1]\n    add r0, r4, #0\n    add r1, #0x66\n    ldrh r1, [r1]\n    bl BagApp_TryUseItemInPlace\n    cmp r0, #1\n    bne _021FB7F4\n    ldr r1, _021FB818 ; =ov15_021FBBB0\n    ldr r0, _021FB81C ; =0x0000067C\n    str r1, [r4, r0]\n    mov r0, #0xd\n    pop {r4, pc}\n    mov r0, #1\n    mov r1, #6\n    bl sub_020880CC\n    mov r0, #0x8d\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0\n    add r0, #0x68\n    strh r1, [r0]\n    mov r0, #0x25\n    pop {r4, pc}\n    _021FB80C: .word 0x0000067B\n    _021FB810: .word ov15_021FB830\n    _021FB814: .word 0x00000616\n    _021FB818: .word ov15_021FBBB0\n    _021FB81C: .word 0x0000067C"
    );
    #endif
}

void ov15_021FB820(void) {
    /* Original at 0x021FB820 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r1, _021FB82C ; =0x0000067C\n    ldr r1, [r0, r1]\n    blx r1\n    pop {r3, pc}\n    nop\n    _021FB82C: .word 0x0000067C"
    );
    #endif
}

void ov15_021FB830(void) {
    /* Original at 0x021FB830 */
    /* Requires manual decompilation - 175 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    ldr r1, _021FB9C0 ; =0x0000067B\n    add r4, r0, #0\n    ldrb r0, [r4, r1]\n    cmp r0, #3\n    bhi _021FB936\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _021FB848: ; jump table\n    mov r0, #0x8d\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    add r0, #0x66\n    ldrh r0, [r0]\n    bl TMHMGetMove\n    add r5, r0, #0\n    mov r0, #0xbd\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0\n    add r2, r5, #0\n    bl BufferMoveName\n    add r0, r5, #0\n    bl MoveIsHM\n    cmp r0, #1\n    ldr r2, _021FB9C4 ; =0x000005E4\n    bne _021FB88A\n    mov r0, #0x2f\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    ldr r2, [r4, r2]\n    mov r1, #0x3c\n    bl ReadMsgDataIntoString\n    b _021FB898\n    mov r0, #0x2f\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    ldr r2, [r4, r2]\n    mov r1, #0x3b\n    bl ReadMsgDataIntoString\n    add r0, r4, #0\n    mov r1, #0\n    bl ov15_021FEF48\n    ldr r1, _021FB9C8 ; =0x00000616\n    strb r0, [r4, r1]\n    mov r0, #1\n    add r1, #0x65\n    strb r0, [r4, r1]\n    b _021FB9BA\n    sub r1, #0x65\n    ldrb r0, [r4, r1]\n    bl TextPrinterCheckActive\n    cmp r0, #0\n    bne _021FB936\n    ldr r0, _021FB9CC ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #3\n    tst r0, r1\n    bne _021FB8CA\n    ldr r0, _021FB9D0 ; =gSystem + 0x40\n    ldrh r0, [r0, #0x24]\n    cmp r0, #0\n    beq _021FB9BA\n    mov r0, #0x2f\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #0x3d\n    bl NewString_ReadMsgData\n    add r5, r0, #0\n    add r0, r4, #0\n    add r0, #0x34\n    mov r1, #0xf\n    bl FillWindowPixelBuffer\n    mov r0, #0xbd\n    ldr r1, _021FB9C4 ; =0x000005E4\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    ldr r1, [r4, r1]\n    add r2, r5, #0\n    bl StringExpandPlaceholders\n    add r0, r5, #0\n    bl String_Delete\n    add r0, r4, #0\n    mov r1, #0\n    bl ov15_021FEF48\n    ldr r1, _021FB9C8 ; =0x00000616\n    strb r0, [r4, r1]\n    mov r0, #2\n    add r1, #0x65\n    strb r0, [r4, r1]\n    b _021FB9BA\n    sub r1, #0x65\n    ldrb r0, [r4, r1]\n    bl TextPrinterCheckActive\n    cmp r0, #0\n    bne _021FB9BA\n    add r0, r4, #0\n    bl ov15_021FF004\n    ldr r0, _021FB9C0 ; =0x0000067B\n    mov r1, #3\n    strb r1, [r4, r0]\n    b _021FB9BA\n    ldr r0, _021FB9D4 ; =0x00000804\n    ldr r0, [r4, r0]\n    bl YesNoPrompt_HandleInput\n    cmp r0, #1\n    beq _021FB938\n    cmp r0, #2\n    beq _021FB956\n    b _021FB9BA\n    add r0, r4, #0\n    bl ov15_021FF058\n    mov r0, #1\n    mov r1, #6\n    bl sub_020880CC\n    mov r0, #0x8d\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0\n    add r0, #0x68\n    strh r1, [r0]\n    mov r0, #0x25\n    pop {r3, r4, r5, pc}\n    add r0, r4, #0\n    bl ov15_021FF058\n    add r0, r4, #0\n    bl ov15_021FED3C\n    add r0, r4, #0\n    add r0, #0x34\n    mov r1, #1\n    bl ClearFrameAndWindow2\n    add r0, r4, #0\n    add r0, #0x34\n    bl ClearWindowTilemapAndScheduleTransfer\n    add r0, r4, #4\n    bl ScheduleWindowCopyToVram\n    mov r0, #0x8d\n    lsl r0, r0, #2\n    ldr r5, [r4, r0]\n    add r0, r4, #0\n    bl ov15_021FA074\n    add r1, r5, #4\n    add r5, #0x64\n    add r2, r0, #0\n    ldrb r5, [r5]\n    mov r3, #0xc\n    add r0, r4, #0\n    mul r3, r5\n    add r1, r1, r3\n    mov r3, #0\n    bl ov15_02200140\n    add r0, r4, #0\n    bl ov15_021FE868\n    add r0, r4, #0\n    bl ov15_02200294\n    add r0, r4, #0\n    bl ov15_021FB518\n    add r0, r4, #0\n    mov r1, #1\n    bl ov15_021FD788\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #0xd\n    pop {r3, r4, r5, pc}\n    nop\n    _021FB9C0: .word 0x0000067B\n    _021FB9C4: .word 0x000005E4\n    _021FB9C8: .word 0x00000616\n    _021FB9CC: .word gSystem\n    _021FB9D0: .word gSystem + 0x40\n    _021FB9D4: .word 0x00000804"
    );
    #endif
}

void BagApp_TryUseItemInPlace(void) {
    /* Original at 0x021FB9D8 */
    /* Requires manual decompilation - 86 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    mov r2, #0xbd\n    add r4, r0, #0\n    lsl r2, r2, #2\n    ldr r0, [r4, r2]\n    sub r2, #0xb8\n    add r5, r1, #0\n    ldr r2, [r4, r2]\n    mov r1, #0\n    bl BufferPlayersName\n    mov r0, #0xbd\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #1\n    add r2, r5, #0\n    bl BufferItemName\n    cmp r5, #ITEM_BLACK_FLUTE\n    bne _021FBA20\n    mov r0, #0x2f\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #msg_0010_00065\n    bl NewString_ReadMsgData\n    add r5, r0, #0\n    add r0, r4, #0\n    mov r1, #1\n    bl BagApp_SetFlute\n    mov r0, #0x1a\n    mov r1, #0\n    lsl r0, r0, #6\n    strh r1, [r4, r0]\n    b _021FBA7A\n    cmp r5, #ITEM_WHITE_FLUTE\n    bne _021FBA44\n    mov r0, #0x2f\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #msg_0010_00064\n    bl NewString_ReadMsgData\n    add r5, r0, #0\n    add r0, r4, #0\n    mov r1, #2\n    bl BagApp_SetFlute\n    mov r0, #0x1a\n    mov r1, #0\n    lsl r0, r0, #6\n    strh r1, [r4, r0]\n    b _021FBA7A\n    cmp r5, #ITEM_MAX_REPEL\n    beq _021FBA50\n    cmp r5, #ITEM_SUPER_REPEL\n    beq _021FBA50\n    cmp r5, #ITEM_REPEL\n    bne _021FBA5C\n    add r0, r4, #0\n    add r1, r5, #0\n    bl BagApp_TryUseRepel\n    add r5, r0, #0\n    b _021FBA7A\n    ldr r0, _021FBA94 ; =ITEM_GB_SOUNDS\n    cmp r5, r0\n    bne _021FBA76\n    add r0, r4, #0\n    add r1, r5, #0\n    bl BagApp_ToggleGBSounds\n    add r5, r0, #0\n    mov r0, #0x1a\n    mov r1, #0\n    lsl r0, r0, #6\n    strh r1, [r4, r0]\n    b _021FBA7A\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    mov r0, #0xbd\n    ldr r1, _021FBA98 ; =0x000005E4\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    ldr r1, [r4, r1]\n    add r2, r5, #0\n    bl StringExpandPlaceholders\n    add r0, r5, #0\n    bl String_Delete\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    _021FBA94: .word ITEM_GB_SOUNDS\n    _021FBA98: .word 0x000005E4"
    );
    #endif
}

void BagApp_TryUseRepel(void) {
    /* Original at 0x021FBA9C */
    /* Requires manual decompilation - 38 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    add r5, r1, #0\n    bl BagApp_GetSaveRoamers\n    bl RoamerSave_RepelNotInUse\n    cmp r0, #0\n    bne _021FBAC4\n    mov r0, #0x1a\n    mov r1, #0\n    lsl r0, r0, #6\n    strh r1, [r4, r0]\n    mov r0, #0x2f\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #msg_0010_00063\n    bl NewString_ReadMsgData\n    pop {r3, r4, r5, pc}\n    add r0, r5, #0\n    mov r1, #2\n    mov r2, #6\n    bl GetItemAttr\n    add r1, r0, #0\n    lsl r1, r1, #0x18\n    add r0, r4, #0\n    lsr r1, r1, #0x18\n    bl BagApp_GetRepelStepCountAddr\n    mov r0, #0x680>>6\n    mov r1, #1\n    lsl r0, r0, #6\n    strh r1, [r4, r0]\n    sub r0, #0x680-SEQ_SE_DP_CARD2\n    bl PlaySE\n    mov r0, #0x2f\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #msg_0010_00062\n    bl NewString_ReadMsgData\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void BagApp_ToggleGBSounds(void) {
    /* Original at 0x021FBAF8 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl SoundSys_GetGBSoundsState\n    cmp r0, #1\n    bne _021FBB16\n    bl SoundSys_ToggleGBSounds\n    mov r0, #0x2f\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #msg_0010_00105\n    bl NewString_ReadMsgData\n    pop {r4, pc}\n    bl SoundSys_ToggleGBSounds\n    mov r0, #0x2f\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #msg_0010_00104\n    bl NewString_ReadMsgData\n    pop {r4, pc}"
    );
    #endif
}

void ov15_021FBB28(void) {
    /* Original at 0x021FBB28 */
    /* Requires manual decompilation - 64 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    add r4, r0, #0\n    mov r0, #0x8d\n    lsl r0, r0, #2\n    ldr r2, [r4, r0]\n    add r0, r2, #0\n    add r0, #0x64\n    ldrb r1, [r0]\n    mov r0, #0xc\n    add r3, r1, #0\n    mul r3, r0\n    add r1, r2, r3\n    mov r0, #6\n    mov r3, #0x1a\n    str r0, [sp]\n    add r2, #0x66\n    lsl r3, r3, #6\n    ldr r0, [r1, #4]\n    ldrb r1, [r1, #0xd]\n    ldrh r2, [r2]\n    ldrh r3, [r4, r3]\n    bl Pocket_TakeItem\n    add r0, r4, #0\n    bl ov15_021F9F08\n    mov r0, #0x8d\n    lsl r0, r0, #2\n    ldr r3, [r4, r0]\n    add r0, r3, #0\n    add r0, #0x64\n    ldrb r1, [r0]\n    mov r0, #0xc\n    add r2, r1, #0\n    mul r2, r0\n    add r0, r3, #0\n    add r1, r3, #0\n    add r0, #0xa\n    add r1, #8\n    add r0, r0, r2\n    add r1, r1, r2\n    add r2, r3, r2\n    ldrb r2, [r2, #0xd]\n    bl ov15_021FA044\n    mov r0, #0x8d\n    lsl r0, r0, #2\n    ldr r2, [r4, r0]\n    add r0, r2, #0\n    add r0, #0x64\n    ldrb r1, [r0]\n    mov r0, #0xc\n    add r3, r1, #0\n    mul r3, r0\n    add r0, r2, #0\n    add r1, r2, #0\n    add r2, r2, r3\n    add r0, #0xa\n    add r1, #8\n    ldrb r2, [r2, #0xd]\n    add r0, r0, r3\n    add r1, r1, r3\n    mov r3, #6\n    bl ov15_021FA070\n    add sp, #4\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov15_021FBBB0(void) {
    /* Original at 0x021FBBB0 */
    /* Requires manual decompilation - 78 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    ldr r1, _021FBC5C ; =0x0000067B\n    add r5, r0, #0\n    ldrb r2, [r5, r1]\n    cmp r2, #0\n    beq _021FBBC2\n    cmp r2, #1\n    beq _021FBBD4\n    b _021FBC56\n    mov r1, #0\n    bl ov15_021FEF48\n    ldr r1, _021FBC60 ; =0x00000616\n    strb r0, [r5, r1]\n    mov r0, #1\n    add r1, #0x65\n    strb r0, [r5, r1]\n    b _021FBC56\n    sub r1, #0x65\n    ldrb r0, [r5, r1]\n    bl TextPrinterCheckActive\n    cmp r0, #0\n    bne _021FBC56\n    ldr r0, _021FBC64 ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #3\n    tst r0, r1\n    bne _021FBBF2\n    ldr r0, _021FBC68 ; =gSystem + 0x40\n    ldrh r0, [r0, #0x24]\n    cmp r0, #0\n    beq _021FBC56\n    add r0, r5, #0\n    bl ov15_021FED3C\n    add r0, r5, #0\n    add r0, #0x34\n    mov r1, #1\n    bl ClearFrameAndWindow2\n    add r0, r5, #0\n    add r0, #0x34\n    bl ClearWindowTilemapAndScheduleTransfer\n    add r0, r5, #0\n    bl ov15_021FBB28\n    add r0, r5, #0\n    bl ov15_021FB518\n    mov r0, #0x8d\n    lsl r0, r0, #2\n    ldr r4, [r5, r0]\n    add r0, r5, #0\n    bl ov15_021FA074\n    add r1, r4, #4\n    add r4, #0x64\n    add r2, r0, #0\n    ldrb r4, [r4]\n    mov r3, #0xc\n    add r0, r5, #0\n    mul r3, r4\n    add r1, r1, r3\n    mov r3, #1\n    bl ov15_02200140\n    add r0, r5, #0\n    bl ov15_021FA170\n    add r0, r5, #4\n    bl ScheduleWindowCopyToVram\n    add r0, r5, #0\n    mov r1, #1\n    bl ov15_021FD788\n    ldr r0, _021FBC5C ; =0x0000067B\n    mov r1, #0\n    strb r1, [r5, r0]\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #0xd\n    pop {r3, r4, r5, pc}\n    nop\n    _021FBC5C: .word 0x0000067B\n    _021FBC60: .word 0x00000616\n    _021FBC64: .word gSystem\n    _021FBC68: .word gSystem + 0x40"
    );
    #endif
}

void ov15_021FBC6C(void) {
    /* Original at 0x021FBC6C */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov15_021FED3C\n    mov r0, #1\n    mov r1, #6\n    bl sub_020880CC\n    mov r0, #0x8d\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #1\n    add r0, #0x68\n    strh r1, [r0]\n    mov r0, #0x25\n    pop {r4, pc}"
    );
    #endif
}

void ov15_021FBC8C(void) {
    /* Original at 0x021FBC8C */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov15_021FED3C\n    mov r0, #1\n    mov r1, #6\n    bl sub_020880CC\n    mov r0, #0x8d\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #3\n    add r0, #0x68\n    strh r1, [r0]\n    mov r0, #0x25\n    pop {r4, pc}"
    );
    #endif
}

void ov15_021FBCAC(void) {
    /* Original at 0x021FBCAC */
    /* Requires manual decompilation - 52 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r1, #0x1a\n    add r4, r0, #0\n    mov r2, #1\n    lsl r1, r1, #6\n    strh r2, [r4, r1]\n    bl ov15_021FFF24\n    mov r0, #0x8d\n    lsl r0, r0, #2\n    ldr r2, [r4, r0]\n    mov r3, #6\n    add r0, r2, #0\n    add r0, #0x64\n    ldrb r1, [r0]\n    mov r0, #0xc\n    mul r0, r1\n    add r1, r2, r0\n    add r2, #0x66\n    ldr r0, [r1, #4]\n    ldrb r1, [r1, #0xd]\n    ldrh r2, [r2]\n    bl Pocket_GetQuantity\n    cmp r0, #1\n    bne _021FBCF2\n    add r0, r4, #0\n    bl ov15_021FEEA4\n    add r0, r4, #0\n    mov r1, #0\n    bl ov15_021FD788\n    mov r0, #8\n    pop {r4, pc}\n    mov r2, #0\n    add r0, r4, #0\n    mov r1, #3\n    add r3, r2, #0\n    bl ov15_021FD574\n    ldr r2, _021FBD24 ; =0x00000682\n    add r0, r4, #0\n    ldrh r2, [r4, r2]\n    mov r1, #3\n    bl ov15_02200300\n    add r0, r4, #0\n    mov r1, #3\n    bl ov15_021FEDEC\n    add r0, r4, #0\n    bl ov15_021FF7C4\n    add r0, r4, #0\n    mov r1, #1\n    bl ov15_021FF29C\n    mov r0, #5\n    pop {r4, pc}\n    _021FBD24: .word 0x00000682"
    );
    #endif
}

void ov15_021FBD28(void) {
    /* Original at 0x021FBD28 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "cmp r2, #0\n    ble _021FBD3E\n    cmp r0, r1\n    bne _021FBD34\n    mov r0, #1\n    bx lr\n    add r0, r0, r2\n    cmp r0, r1\n    ble _021FBD4E\n    add r0, r1, #0\n    bx lr\n    cmp r0, #1\n    bne _021FBD46\n    add r0, r1, #0\n    bx lr\n    add r0, r0, r2\n    cmp r0, #0\n    bgt _021FBD4E\n    mov r0, #1\n    bx lr"
    );
    #endif
}

void ov15_021FBD50(void) {
    /* Original at 0x021FBD50 */
    /* Requires manual decompilation - 250 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #4\n    mov r6, #0\n    mov r1, #3\n    add r4, r0, #0\n    bl ov15_021FAC2C\n    add r5, r0, #0\n    sub r0, r6, #1\n    cmp r5, r0\n    bne _021FBD68\n    b _021FBEF6\n    ldr r0, _021FBF88 ; =0x00000682\n    ldrh r0, [r4, r0]\n    bl ov15_022002EC\n    cmp r0, #1\n    beq _021FBD7A\n    cmp r0, #2\n    beq _021FBD88\n    b _021FBD9A\n    cmp r5, #0\n    beq _021FBD82\n    cmp r5, #3\n    bne _021FBD9A\n    mov r5, #0\n    mvn r5, r5\n    b _021FBD9A\n    cmp r5, #0\n    beq _021FBD96\n    cmp r5, #1\n    beq _021FBD96\n    sub r0, r5, #3\n    cmp r0, #1\n    bhi _021FBD9A\n    mov r5, #0\n    mvn r5, r5\n    cmp r5, #7\n    bls _021FBDA0\n    b _021FBF1E\n    add r0, r5, r5\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _021FBDAC: ; jump table\n    mov r1, #0x1a\n    lsl r1, r1, #6\n    ldrsh r0, [r4, r1]\n    add r1, r1, #2\n    ldrh r1, [r4, r1]\n    mov r2, #0x64\n    bl ov15_021FBD28\n    mov r1, #0x1a\n    lsl r1, r1, #6\n    strh r0, [r4, r1]\n    mov r0, #0x2d\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl ManagedSprite_SetAnimationFrame\n    mov r0, #0x2d\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #0x1a\n    bl ManagedSprite_SetAnim\n    mov r6, #1\n    b _021FBF1E\n    mov r1, #0x1a\n    lsl r1, r1, #6\n    ldrsh r0, [r4, r1]\n    add r1, r1, #2\n    ldrh r1, [r4, r1]\n    mov r2, #0xa\n    bl ov15_021FBD28\n    mov r1, #0x1a\n    lsl r1, r1, #6\n    strh r0, [r4, r1]\n    mov r0, #0xb5\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl ManagedSprite_SetAnimationFrame\n    mov r0, #0xb5\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0x1a\n    bl ManagedSprite_SetAnim\n    mov r6, #1\n    b _021FBF1E\n    mov r1, #0x1a\n    lsl r1, r1, #6\n    ldrsh r0, [r4, r1]\n    add r1, r1, #2\n    ldrh r1, [r4, r1]\n    mov r2, #1\n    bl ov15_021FBD28\n    mov r1, #0x1a\n    lsl r1, r1, #6\n    strh r0, [r4, r1]\n    mov r0, #0xb6\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl ManagedSprite_SetAnimationFrame\n    mov r0, #0xb6\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0x1a\n    bl ManagedSprite_SetAnim\n    mov r6, #1\n    b _021FBF1E\n    mov r1, #0x1a\n    lsl r1, r1, #6\n    ldrsh r0, [r4, r1]\n    add r1, r1, #2\n    mov r2, #0x63\n    ldrh r1, [r4, r1]\n    mvn r2, r2\n    bl ov15_021FBD28\n    mov r1, #0x1a\n    lsl r1, r1, #6\n    strh r0, [r4, r1]\n    mov r0, #0xb7\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl ManagedSprite_SetAnimationFrame\n    mov r0, #0xb7\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0x1c\n    bl ManagedSprite_SetAnim\n    mov r6, #2\n    b _021FBF1E\n    mov r1, #0x1a\n    lsl r1, r1, #6\n    ldrsh r0, [r4, r1]\n    add r1, r1, #2\n    mov r2, #9\n    ldrh r1, [r4, r1]\n    mvn r2, r2\n    bl ov15_021FBD28\n    mov r1, #0x1a\n    lsl r1, r1, #6\n    strh r0, [r4, r1]\n    mov r0, #0x2e\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl ManagedSprite_SetAnimationFrame\n    mov r0, #0x2e\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #0x1c\n    bl ManagedSprite_SetAnim\n    mov r6, #2\n    b _021FBF1E\n    mov r1, #0x1a\n    lsl r1, r1, #6\n    ldrsh r0, [r4, r1]\n    add r1, r1, #2\n    mov r2, #0\n    ldrh r1, [r4, r1]\n    mvn r2, r2\n    bl ov15_021FBD28\n    mov r1, #0x1a\n    lsl r1, r1, #6\n    strh r0, [r4, r1]\n    mov r0, #0xb9\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl ManagedSprite_SetAnimationFrame\n    mov r0, #0xb9\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0x1c\n    bl ManagedSprite_SetAnim\n    mov r6, #2\n    b _021FBF1E\n    mov r6, #3\n    b _021FBF1E\n    mov r6, #4\n    b _021FBF1E\n    mov r1, #0x1a\n    lsl r1, r1, #6\n    add r0, r4, r1\n    add r1, r1, #2\n    ldrh r1, [r4, r1]\n    bl sub_020881C0\n    add r6, r0, #0\n    bne _021FBF1E\n    ldr r0, _021FBF8C ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #1\n    tst r0, r1\n    beq _021FBF16\n    mov r6, #3\n    b _021FBF1E\n    mov r0, #2\n    tst r0, r1\n    beq _021FBF1E\n    mov r6, #4\n    cmp r6, #4\n    bhi _021FBF82\n    add r0, r6, r6\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _021FBF2E: ; jump table\n    add r0, r4, #0\n    mov r1, #3\n    bl ov15_021FEDEC\n    ldr r0, _021FBF90 ; =0x00000637\n    bl PlaySE\n    add sp, #4\n    mov r0, #5\n    pop {r3, r4, r5, r6, pc}\n    ldr r0, _021FBF94 ; =0x000005DC\n    bl PlaySE\n    mov r0, #6\n    str r0, [sp]\n    add r0, r4, #0\n    mov r1, #0x26\n    mov r2, #9\n    mov r3, #8\n    bl ov15_021FD7D0\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}\n    mov r0, #SEQ_SE_GS_GEARCANCEL>>6\n    lsl r0, r0, #6\n    bl PlaySE\n    mov r0, #7\n    str r0, [sp]\n    add r0, r4, #0\n    mov r1, #0x13\n    mov r2, #9\n    mov r3, #8\n    bl ov15_021FD7D0\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}\n    mov r0, #5\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}\n    _021FBF88: .word 0x00000682\n    _021FBF8C: .word gSystem\n    _021FBF90: .word 0x00000637\n    _021FBF94: .word 0x000005DC"
    );
    #endif
}

void ov15_021FBF98(void) {
    /* Original at 0x021FBF98 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov15_021FEEA4\n    add r0, r4, #0\n    bl ov15_02200428\n    add r0, r4, #0\n    bl ov15_021FFF24\n    add r0, r4, #0\n    bl ov15_021FF834\n    add r0, r4, #0\n    mov r1, #0\n    bl ov15_021FD788\n    mov r0, #8\n    pop {r4, pc}"
    );
    #endif
}

void ov15_021FBFC0(void) {
    /* Original at 0x021FBFC0 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov15_021FED3C\n    add r0, r4, #0\n    bl ov15_021FB518\n    add r0, r4, #0\n    bl ov15_02200428\n    add r0, r4, #0\n    mov r1, #0\n    bl ov15_021FF29C\n    mov r0, #0xa7\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl ManagedSprite_SetAnimationFrame\n    mov r0, #0xa7\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0x10\n    bl ManagedSprite_SetAnim\n    mov r0, #1\n    pop {r4, pc}"
    );
    #endif
}

void ov15_021FBFF8(void) {
    /* Original at 0x021FBFF8 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _021FC018 ; =0x00000616\n    ldrb r0, [r4, r0]\n    bl TextPrinterCheckActive\n    cmp r0, #0\n    bne _021FC012\n    add r0, r4, #0\n    bl ov15_021FF004\n    mov r0, #9\n    pop {r4, pc}\n    mov r0, #8\n    pop {r4, pc}\n    nop\n    _021FC018: .word 0x00000616"
    );
    #endif
}

void ov15_021FC01C(void) {
    /* Original at 0x021FC01C */
    /* Requires manual decompilation - 123 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #8\n    add r5, r0, #0\n    ldr r0, _021FC134 ; =0x00000804\n    ldr r0, [r5, r0]\n    bl YesNoPrompt_HandleInput\n    cmp r0, #1\n    beq _021FC03A\n    cmp r0, #2\n    beq _021FC0CE\n    mov r1, #0\n    mvn r1, r1\n    cmp r0, r1\n    b _021FC12E\n    add r0, r5, #0\n    bl ov15_021FF058\n    mov r0, #0x2f\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    mov r1, #0x36\n    bl NewString_ReadMsgData\n    add r4, r0, #0\n    mov r0, #0x1a\n    lsl r0, r0, #6\n    ldrsh r0, [r5, r0]\n    cmp r0, #1\n    bne _021FC06E\n    mov r2, #0xbd\n    lsl r2, r2, #2\n    ldr r0, [r5, r2]\n    sub r2, #0xc0\n    ldr r2, [r5, r2]\n    mov r1, #0\n    add r2, #0x66\n    ldrh r2, [r2]\n    bl BufferItemName\n    b _021FC082\n    mov r2, #0xbd\n    lsl r2, r2, #2\n    ldr r0, [r5, r2]\n    sub r2, #0xc0\n    ldr r2, [r5, r2]\n    mov r1, #0\n    add r2, #0x66\n    ldrh r2, [r2]\n    bl BufferItemNamePlural\n    mov r0, #0\n    str r0, [sp]\n    mov r1, #1\n    mov r2, #0x1a\n    mov r0, #0xbd\n    str r1, [sp, #4]\n    lsl r2, r2, #6\n    lsl r0, r0, #2\n    ldrsh r2, [r5, r2]\n    ldr r0, [r5, r0]\n    mov r3, #3\n    bl BufferIntegerAsString\n    mov r0, #0xbd\n    ldr r1, _021FC138 ; =0x000005E4\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    ldr r1, [r5, r1]\n    add r2, r4, #0\n    bl StringExpandPlaceholders\n    add r0, r4, #0\n    bl String_Delete\n    add r0, r5, #0\n    add r0, #0x34\n    mov r1, #0xf\n    bl FillWindowPixelBuffer\n    add r0, r5, #0\n    mov r1, #0\n    bl ov15_021FEF48\n    ldr r1, _021FC13C ; =0x00000616\n    add sp, #8\n    strb r0, [r5, r1]\n    mov r0, #0xa\n    pop {r3, r4, r5, pc}\n    add r0, r5, #0\n    bl ov15_021FF058\n    add r0, r5, #0\n    add r0, #0x34\n    mov r1, #1\n    bl ClearFrameAndWindow2\n    add r0, r5, #0\n    add r0, #0x34\n    bl ClearWindowTilemapAndScheduleTransfer\n    add r0, r5, #4\n    bl ScheduleWindowCopyToVram\n    mov r0, #0x8d\n    lsl r0, r0, #2\n    ldr r4, [r5, r0]\n    add r0, r5, #0\n    bl ov15_021FA074\n    add r1, r4, #4\n    add r4, #0x64\n    add r2, r0, #0\n    ldrb r4, [r4]\n    mov r3, #0xc\n    add r0, r5, #0\n    mul r3, r4\n    add r1, r1, r3\n    mov r3, #0\n    bl ov15_02200140\n    add r0, r5, #0\n    bl ov15_021FE868\n    add r0, r5, #0\n    bl ov15_021FED3C\n    add r0, r5, #0\n    mov r1, #1\n    bl ov15_021FD788\n    add r0, r5, #0\n    bl ov15_021FB518\n    add sp, #8\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #9\n    add sp, #8\n    pop {r3, r4, r5, pc}\n    _021FC134: .word 0x00000804\n    _021FC138: .word 0x000005E4\n    _021FC13C: .word 0x00000616"
    );
    #endif
}

void ov15_021FC140(void) {
    /* Original at 0x021FC140 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _021FC160 ; =0x00000616\n    ldrb r0, [r4, r0]\n    bl TextPrinterCheckActive\n    cmp r0, #0\n    beq _021FC154\n    mov r0, #0xa\n    pop {r4, pc}\n    add r4, #0x34\n    add r0, r4, #0\n    bl ScheduleWindowCopyToVram\n    mov r0, #0xb\n    pop {r4, pc}\n    _021FC160: .word 0x00000616"
    );
    #endif
}

void ov15_021FC164(void) {
    /* Original at 0x021FC164 */
    /* Requires manual decompilation - 80 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, _021FC218 ; =0x00000616\n    ldrb r0, [r5, r0]\n    bl TextPrinterCheckActive\n    cmp r0, #0\n    bne _021FC214\n    ldr r0, _021FC21C ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #3\n    tst r0, r1\n    bne _021FC186\n    ldr r0, _021FC220 ; =gSystem + 0x40\n    ldrh r0, [r0, #0x24]\n    cmp r0, #0\n    beq _021FC214\n    add r0, r5, #0\n    add r0, #0x34\n    mov r1, #1\n    bl ClearFrameAndWindow2\n    add r0, r5, #0\n    add r0, #0x34\n    bl ClearWindowTilemapAndScheduleTransfer\n    add r0, r5, #4\n    bl ScheduleWindowCopyToVram\n    mov r0, #0x8d\n    lsl r0, r0, #2\n    ldr r2, [r5, r0]\n    add r0, r2, #0\n    add r0, #0x64\n    ldrb r1, [r0]\n    mov r0, #0xc\n    add r3, r1, #0\n    mul r3, r0\n    add r1, r2, r3\n    mov r0, #6\n    mov r3, #0x1a\n    str r0, [sp]\n    add r2, #0x66\n    lsl r3, r3, #6\n    ldr r0, [r1, #4]\n    ldrb r1, [r1, #0xd]\n    ldrh r2, [r2]\n    ldrh r3, [r5, r3]\n    bl Pocket_TakeItem\n    add r0, r5, #0\n    bl ov15_021F9F08\n    mov r0, #0x8d\n    lsl r0, r0, #2\n    ldr r4, [r5, r0]\n    add r0, r5, #0\n    bl ov15_021FA074\n    add r1, r4, #4\n    add r4, #0x64\n    add r2, r0, #0\n    ldrb r4, [r4]\n    mov r3, #0xc\n    add r0, r5, #0\n    mul r3, r4\n    add r1, r1, r3\n    mov r3, #1\n    bl ov15_02200140\n    add r0, r5, #0\n    bl ov15_021FE868\n    add r0, r5, #0\n    bl ov15_021FED3C\n    add r0, r5, #0\n    bl ov15_021FB518\n    add r0, r5, #0\n    bl ov15_021FA170\n    add r0, r5, #0\n    mov r1, #1\n    bl ov15_021FD788\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #0xb\n    pop {r3, r4, r5, pc}\n    _021FC218: .word 0x00000616\n    _021FC21C: .word gSystem\n    _021FC220: .word gSystem + 0x40"
    );
    #endif
}

void ov15_021FC224(void) {
    /* Original at 0x021FC224 */
    /* Requires manual decompilation - 76 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    mov r1, #0x8e\n    add r5, r0, #0\n    lsl r1, r1, #2\n    ldr r0, [r5, r1]\n    sub r1, r1, #4\n    ldr r1, [r5, r1]\n    add r1, #0x66\n    ldrh r1, [r1]\n    bl Bag_TryRegisterItem\n    cmp r0, #0\n    bne _021FC28C\n    mov r0, #0x2f\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    mov r1, #0x67\n    bl NewString_ReadMsgData\n    add r4, r0, #0\n    add r0, r5, #0\n    add r0, #0x34\n    mov r1, #0xf\n    bl FillWindowPixelBuffer\n    mov r0, #0xbd\n    ldr r1, _021FC2DC ; =0x000005E4\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    ldr r1, [r5, r1]\n    add r2, r4, #0\n    bl StringExpandPlaceholders\n    add r0, r4, #0\n    bl String_Delete\n    add r0, r5, #0\n    mov r1, #0\n    bl ov15_021FEF48\n    add r0, r5, #0\n    bl ov15_02200294\n    add r0, r5, #0\n    bl ov15_021FFF24\n    add r0, r5, #0\n    mov r1, #0\n    bl ov15_021FD788\n    mov r0, #0x19\n    pop {r3, r4, r5, pc}\n    add r0, r5, #0\n    bl ov15_02200294\n    add r0, r5, #0\n    bl ov15_021FF560\n    mov r0, #0x61\n    lsl r0, r0, #2\n    add r0, r5, r0\n    bl ov15_021FF7AC\n    mov r0, #0x8d\n    lsl r0, r0, #2\n    ldr r4, [r5, r0]\n    add r0, r5, #0\n    bl ov15_021FA074\n    add r1, r4, #4\n    add r4, #0x64\n    add r2, r0, #0\n    ldrb r4, [r4]\n    mov r3, #0xc\n    add r0, r5, #0\n    mul r3, r4\n    add r1, r1, r3\n    mov r3, #0\n    bl ov15_02200140\n    add r0, r5, #0\n    bl ov15_021FE868\n    add r0, r5, #0\n    bl ov15_021FED3C\n    add r0, r5, #0\n    bl ov15_021FB518\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    nop\n    _021FC2DC: .word 0x000005E4"
    );
    #endif
}

void ov15_021FC2E0(void) {
    /* Original at 0x021FC2E0 */
    /* Requires manual decompilation - 63 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, _021FC370 ; =0x00000616\n    ldrb r0, [r5, r0]\n    bl TextPrinterCheckActive\n    cmp r0, #0\n    bne _021FC36A\n    ldr r0, _021FC374 ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #3\n    tst r0, r1\n    bne _021FC302\n    ldr r0, _021FC378 ; =gSystem + 0x40\n    ldrh r0, [r0, #0x24]\n    cmp r0, #0\n    beq _021FC36A\n    add r0, r5, #0\n    add r0, #0x34\n    mov r1, #1\n    bl ClearFrameAndWindow2\n    add r0, r5, #0\n    add r0, #0x34\n    bl ClearWindowTilemapAndScheduleTransfer\n    add r0, r5, #0\n    bl ov15_02200294\n    add r0, r5, #0\n    bl ov15_021FF560\n    mov r0, #0x61\n    lsl r0, r0, #2\n    add r0, r5, r0\n    bl ov15_021FF7AC\n    mov r0, #0x8d\n    lsl r0, r0, #2\n    ldr r4, [r5, r0]\n    add r0, r5, #0\n    bl ov15_021FA074\n    add r1, r4, #4\n    add r4, #0x64\n    add r2, r0, #0\n    ldrb r4, [r4]\n    mov r3, #0xc\n    add r0, r5, #0\n    mul r3, r4\n    add r1, r1, r3\n    mov r3, #0\n    bl ov15_02200140\n    add r0, r5, #0\n    bl ov15_021FE868\n    add r0, r5, #0\n    bl ov15_021FED3C\n    add r0, r5, #0\n    bl ov15_021FB518\n    add r0, r5, #0\n    mov r1, #1\n    bl ov15_021FD788\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #0x19\n    pop {r3, r4, r5, pc}\n    nop\n    _021FC370: .word 0x00000616\n    _021FC374: .word gSystem\n    _021FC378: .word gSystem + 0x40"
    );
    #endif
}

void ov15_021FC37C(void) {
    /* Original at 0x021FC37C */
    /* Requires manual decompilation - 41 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    mov r1, #0x8e\n    add r5, r0, #0\n    lsl r1, r1, #2\n    ldr r0, [r5, r1]\n    sub r1, r1, #4\n    ldr r1, [r5, r1]\n    add r1, #0x66\n    ldrh r1, [r1]\n    bl Bag_UnregisterItem\n    add r0, r5, #0\n    bl ov15_02200294\n    add r0, r5, #0\n    bl ov15_021FF560\n    mov r0, #0x61\n    lsl r0, r0, #2\n    add r0, r5, r0\n    bl ov15_021FF7AC\n    mov r0, #0x8d\n    lsl r0, r0, #2\n    ldr r4, [r5, r0]\n    add r0, r5, #0\n    bl ov15_021FA074\n    add r1, r4, #4\n    add r4, #0x64\n    add r2, r0, #0\n    ldrb r4, [r4]\n    mov r3, #0xc\n    add r0, r5, #0\n    mul r3, r4\n    add r1, r1, r3\n    mov r3, #0\n    bl ov15_02200140\n    add r0, r5, #0\n    bl ov15_021FE868\n    add r0, r5, #0\n    bl ov15_021FED3C\n    add r0, r5, #0\n    bl ov15_021FB518\n    mov r0, #1\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov15_021FC3E0(void) {
    ov15_021FAC48();
}

void ov15_021FC3EC(void) {
    /* Original at 0x021FC3EC */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov15_021FED3C\n    add r0, r4, #0\n    mov r1, #0\n    bl ov15_021FD788\n    add r0, r4, #0\n    bl ov15_021FFF24\n    mov r0, #1\n    mov r1, #6\n    bl sub_020880CC\n    mov r0, #0x8d\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #2\n    add r0, #0x68\n    strh r1, [r0]\n    mov r0, #0x25\n    pop {r4, pc}"
    );
    #endif
}

void ov15_021FC41C(void) {
    /* Original at 0x021FC41C */
    /* Requires manual decompilation - 396 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x10\n    ldr r1, _021FC70C ; =gSystem\n    mov r2, #0x40\n    ldr r3, [r1, #0x4c]\n    add r5, r0, #0\n    mov r4, #0\n    tst r2, r3\n    beq _021FC43E\n    ldr r0, _021FC710 ; =0x00000644\n    add r4, r4, #1\n    ldr r1, [r5, r0]\n    lsl r2, r1, #2\n    ldr r1, _021FC714 ; =ov15_02200640\n    ldrb r1, [r1, r2]\n    str r1, [r5, r0]\n    b _021FC56E\n    mov r2, #0x80\n    tst r2, r3\n    beq _021FC454\n    ldr r0, _021FC710 ; =0x00000644\n    add r4, r4, #1\n    ldr r1, [r5, r0]\n    lsl r2, r1, #2\n    ldr r1, _021FC718 ; =ov15_02200641\n    ldrb r1, [r1, r2]\n    str r1, [r5, r0]\n    b _021FC56E\n    mov r2, #0x20\n    add r6, r3, #0\n    tst r6, r2\n    beq _021FC4AC\n    ldr r1, _021FC710 ; =0x00000644\n    ldr r3, _021FC71C ; =ov15_02200642\n    ldr r1, [r5, r1]\n    lsl r6, r1, #2\n    ldrb r3, [r3, r6]\n    cmp r3, #0xe\n    bne _021FC484\n    mov r1, #2\n    str r1, [sp]\n    mov r1, #0xe\n    add r2, sp, #0xc\n    add r3, r4, #0\n    str r4, [sp, #4]\n    bl ov15_021FA73C\n    cmp r0, #1\n    bne _021FC4D6\n    add sp, #0x10\n    mov r0, #0xe\n    pop {r4, r5, r6, pc}\n    cmp r1, #0x10\n    beq _021FC56E\n    cmp r1, #0\n    blt _021FC4A4\n    cmp r1, #8\n    bge _021FC4A4\n    sub r2, #0x21\n    bl ov15_021FA6C0\n    ldr r1, _021FC710 ; =0x00000644\n    ldr r2, [r5, r1]\n    cmp r2, r0\n    beq _021FC56E\n    str r0, [r5, r1]\n    add r4, r4, #1\n    b _021FC56E\n    ldr r0, _021FC710 ; =0x00000644\n    add r4, r4, #1\n    str r3, [r5, r0]\n    b _021FC56E\n    mov r2, #0x10\n    tst r3, r2\n    beq _021FC506\n    ldr r1, _021FC710 ; =0x00000644\n    ldr r2, _021FC720 ; =ov15_02200643\n    ldr r1, [r5, r1]\n    lsl r3, r1, #2\n    ldrb r2, [r2, r3]\n    cmp r2, #0xf\n    bne _021FC4DE\n    mov r1, #2\n    str r1, [sp]\n    add r2, sp, #8\n    mov r1, #0xf\n    add r2, #3\n    add r3, r4, #0\n    str r4, [sp, #4]\n    bl ov15_021FA73C\n    cmp r0, #1\n    beq _021FC4D8\n    b _021FC77A\n    add sp, #0x10\n    mov r0, #0xe\n    pop {r4, r5, r6, pc}\n    cmp r1, #0x10\n    beq _021FC56E\n    cmp r1, #0\n    blt _021FC4FE\n    cmp r1, #8\n    bge _021FC4FE\n    mov r2, #1\n    bl ov15_021FA6C0\n    ldr r1, _021FC710 ; =0x00000644\n    ldr r2, [r5, r1]\n    cmp r2, r0\n    beq _021FC56E\n    str r0, [r5, r1]\n    add r4, r4, #1\n    b _021FC56E\n    ldr r0, _021FC710 ; =0x00000644\n    add r4, r4, #1\n    str r2, [r5, r0]\n    b _021FC56E\n    ldr r3, [r1, #0x48]\n    lsl r1, r2, #5\n    tst r1, r3\n    beq _021FC53A\n    mov r1, #0x8d\n    lsl r1, r1, #2\n    ldr r1, [r5, r1]\n    sub r2, #0x11\n    add r1, #0x64\n    ldrb r1, [r1]\n    bl ov15_021FA6C0\n    add r1, r0, #0\n    mov r0, #2\n    str r0, [sp]\n    add r0, r4, #0\n    add r2, sp, #8\n    str r0, [sp, #4]\n    add r0, r5, #0\n    add r2, #2\n    mov r3, #1\n    bl ov15_021FA73C\n    add sp, #0x10\n    mov r0, #0xe\n    pop {r4, r5, r6, pc}\n    add r2, #0xf0\n    add r1, r3, #0\n    tst r1, r2\n    beq _021FC56E\n    mov r1, #0x8d\n    lsl r1, r1, #2\n    ldr r1, [r5, r1]\n    mov r2, #1\n    add r1, #0x64\n    ldrb r1, [r1]\n    bl ov15_021FA6C0\n    add r1, r0, #0\n    mov r0, #2\n    str r0, [sp]\n    add r0, r4, #0\n    add r2, sp, #8\n    str r0, [sp, #4]\n    add r0, r5, #0\n    add r2, #1\n    mov r3, #1\n    bl ov15_021FA73C\n    add sp, #0x10\n    mov r0, #0xe\n    pop {r4, r5, r6, pc}\n    ldr r1, _021FC710 ; =0x00000644\n    ldr r0, [r5, r1]\n    cmp r0, #0x11\n    bne _021FC582\n    mov r0, #0x8d\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    add r0, #0x64\n    ldrb r0, [r0]\n    str r0, [r5, r1]\n    cmp r4, #0\n    beq _021FC5A6\n    ldr r0, _021FC724 ; =0x000005DC\n    bl PlaySE\n    ldr r1, _021FC710 ; =0x00000644\n    add r0, r5, #0\n    ldr r1, [r5, r1]\n    bl ov15_021FFECC\n    ldr r1, _021FC710 ; =0x00000644\n    add r0, r5, #0\n    ldr r1, [r5, r1]\n    bl ov15_021FA0E4\n    add r0, r5, #0\n    bl ov15_021FA170\n    mov r1, #0\n    add r0, sp, #8\n    strb r1, [r0]\n    add r0, r5, #0\n    bl ov15_021FAC2C\n    add r4, r0, #0\n    mov r0, #0\n    mvn r0, r0\n    cmp r4, r0\n    beq _021FC630\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov15_021FA104\n    cmp r0, #0\n    beq _021FC608\n    cmp r4, #8\n    bhs _021FC5EA\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov15_021FA68C\n    mov r1, #0\n    mvn r1, r1\n    cmp r0, r1\n    beq _021FC608\n    ldr r1, _021FC710 ; =0x00000644\n    add r0, r5, #0\n    str r4, [r5, r1]\n    ldr r1, [r5, r1]\n    bl ov15_021FFECC\n    b _021FC608\n    ldr r1, _021FC710 ; =0x00000644\n    add r0, r5, #0\n    str r4, [r5, r1]\n    ldr r1, [r5, r1]\n    bl ov15_021FFECC\n    ldr r0, _021FC710 ; =0x00000644\n    ldr r1, [r5, r0]\n    cmp r1, #8\n    blt _021FC608\n    cmp r1, #0xd\n    bgt _021FC608\n    add r0, r5, #0\n    bl ov15_021FA0E4\n    mov r0, #2\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, sp, #8\n    mov r3, #0\n    bl ov15_021FA73C\n    cmp r0, #1\n    beq _021FC6B4\n    mov r1, #0x8d\n    lsl r1, r1, #2\n    ldr r1, [r5, r1]\n    mov r2, #4\n    add r1, #0x68\n    strh r2, [r1]\n    add sp, #0x10\n    pop {r4, r5, r6, pc}\n    ldr r0, _021FC70C ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #1\n    tst r0, r1\n    beq _021FC678\n    mov r0, #2\n    str r0, [sp]\n    mov r3, #0\n    ldr r1, _021FC710 ; =0x00000644\n    str r3, [sp, #4]\n    ldr r1, [r5, r1]\n    add r0, r5, #0\n    add r2, sp, #8\n    bl ov15_021FA73C\n    add r4, r0, #0\n    ldr r0, _021FC710 ; =0x00000644\n    ldr r1, [r5, r0]\n    cmp r1, #8\n    blt _021FC662\n    cmp r1, #0xd\n    bgt _021FC662\n    add r0, r5, #0\n    bl ov15_021FA0E4\n    cmp r4, #1\n    beq _021FC6B4\n    mov r0, #0x8d\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #4\n    add r0, #0x68\n    strh r1, [r0]\n    add sp, #0x10\n    add r0, r4, #0\n    pop {r4, r5, r6, pc}\n    mov r0, #2\n    tst r1, r0\n    beq _021FC6B4\n    str r0, [sp]\n    mov r3, #0\n    add r0, r5, #0\n    mov r1, #0x10\n    add r2, sp, #8\n    str r3, [sp, #4]\n    bl ov15_021FA73C\n    add r4, r0, #0\n    mov r0, #0x8d\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #4\n    add r0, #0x68\n    strh r1, [r0]\n    ldr r0, _021FC710 ; =0x00000644\n    ldr r1, [r5, r0]\n    cmp r1, #8\n    blt _021FC6AE\n    cmp r1, #0xd\n    bgt _021FC6AE\n    add r0, r5, #0\n    bl ov15_021FA0E4\n    add sp, #0x10\n    add r0, r4, #0\n    pop {r4, r5, r6, pc}\n    add r0, sp, #8\n    ldrb r0, [r0]\n    cmp r0, #1\n    bne _021FC778\n    mov r0, #0x8d\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #3\n    add r0, #0x66\n    ldrh r0, [r0]\n    mov r2, #6\n    bl GetItemAttr\n    cmp r0, #0\n    bne _021FC6E4\n    mov r0, #0x8d\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    add r0, #0x66\n    ldrh r0, [r0]\n    bl ItemIdIsNotJohtoBall\n    cmp r0, #0\n    bne _021FC75C\n    mov r2, #0xbd\n    lsl r2, r2, #2\n    ldr r0, [r5, r2]\n    sub r2, #0xc0\n    ldr r2, [r5, r2]\n    mov r1, #0\n    add r2, #0x66\n    ldrh r2, [r2]\n    bl BufferItemName\n    mov r0, #0x2f\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    mov r1, #0x2f\n    bl NewString_ReadMsgData\n    add r4, r0, #0\n    mov r0, #0xbd\n    ldr r1, _021FC728 ; =0x000005E4\n    b _021FC72C\n    _021FC70C: .word gSystem\n    _021FC710: .word 0x00000644\n    _021FC714: .word ov15_02200640\n    _021FC718: .word ov15_02200641\n    _021FC71C: .word ov15_02200642\n    _021FC720: .word ov15_02200643\n    _021FC724: .word 0x000005DC\n    _021FC728: .word 0x000005E4\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    ldr r1, [r5, r1]\n    add r2, r4, #0\n    bl StringExpandPlaceholders\n    add r0, r4, #0\n    bl String_Delete\n    add r0, r5, #0\n    mov r1, #0\n    bl ov15_021FEF48\n    ldr r1, _021FC780 ; =0x00000616\n    add sp, #0x10\n    strb r0, [r5, r1]\n    mov r0, #0x8d\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #5\n    add r0, #0x68\n    strh r1, [r0]\n    mov r0, #0xf\n    pop {r4, r5, r6, pc}\n    mov r0, #0x8d\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #4\n    add r0, #0x68\n    strh r1, [r0]\n    add r0, r5, #0\n    mov r1, #0x14\n    mov r2, #0x29\n    mov r3, #0x24\n    bl ov15_021FD810\n    add sp, #0x10\n    pop {r4, r5, r6, pc}\n    mov r0, #0xe\n    add sp, #0x10\n    pop {r4, r5, r6, pc}\n    nop\n    _021FC780: .word 0x00000616"
    );
    #endif
}

void ov15_021FC784(void) {
    /* Original at 0x021FC784 */
    /* Requires manual decompilation - 45 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _021FC7E0 ; =0x00000616\n    ldrb r0, [r4, r0]\n    bl TextPrinterCheckActive\n    cmp r0, #0\n    bne _021FC7DC\n    ldr r0, _021FC7E4 ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #3\n    tst r0, r1\n    bne _021FC7A6\n    ldr r0, _021FC7E8 ; =gSystem + 0x40\n    ldrh r0, [r0, #0x24]\n    cmp r0, #0\n    beq _021FC7DC\n    add r0, r4, #0\n    add r0, #0x34\n    mov r1, #1\n    bl ClearFrameAndWindow2\n    add r0, r4, #0\n    add r0, #0x34\n    bl ClearWindowTilemapAndScheduleTransfer\n    mov r0, #0x8d\n    lsl r0, r0, #2\n    ldr r3, [r4, r0]\n    add r0, r4, #0\n    add r1, r3, #0\n    add r1, #0x64\n    ldrb r2, [r1]\n    mov r1, #0xc\n    mul r1, r2\n    add r1, r3, r1\n    mov r2, #0xa\n    ldrsh r1, [r1, r2]\n    sub r2, #0xb\n    mov r3, #0\n    bl ov15_021FF364\n    mov r0, #0xe\n    pop {r4, pc}\n    mov r0, #0xf\n    pop {r4, pc}\n    _021FC7E0: .word 0x00000616\n    _021FC7E4: .word gSystem\n    _021FC7E8: .word gSystem + 0x40"
    );
    #endif
}

void ov15_021FC7EC(void) {
    /* Original at 0x021FC7EC */
    /* Requires manual decompilation - 404 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x10\n    ldr r1, _021FCAB0 ; =gSystem\n    mov r2, #0x40\n    ldr r3, [r1, #0x4c]\n    add r5, r0, #0\n    mov r4, #0\n    tst r2, r3\n    beq _021FC80E\n    ldr r0, _021FCAB4 ; =0x00000644\n    add r4, r4, #1\n    ldr r1, [r5, r0]\n    lsl r2, r1, #2\n    ldr r1, _021FCAB8 ; =ov15_02200640\n    ldrb r1, [r1, r2]\n    str r1, [r5, r0]\n    b _021FC9CA\n    mov r2, #0x80\n    tst r2, r3\n    beq _021FC824\n    ldr r0, _021FCAB4 ; =0x00000644\n    add r4, r4, #1\n    ldr r1, [r5, r0]\n    lsl r2, r1, #2\n    ldr r1, _021FCABC ; =ov15_02200641\n    ldrb r1, [r1, r2]\n    str r1, [r5, r0]\n    b _021FC9CA\n    mov r2, #0x20\n    add r6, r3, #0\n    tst r6, r2\n    beq _021FC87C\n    ldr r1, _021FCAB4 ; =0x00000644\n    ldr r3, _021FCAC0 ; =ov15_02200642\n    ldr r1, [r5, r1]\n    lsl r6, r1, #2\n    ldrb r3, [r3, r6]\n    cmp r3, #0xe\n    bne _021FC854\n    mov r1, #4\n    str r1, [sp]\n    mov r1, #0xe\n    add r2, sp, #0xc\n    mov r3, #1\n    str r4, [sp, #4]\n    bl ov15_021FA73C\n    cmp r0, #1\n    bne _021FC8A6\n    add sp, #0x10\n    mov r0, #0x10\n    pop {r4, r5, r6, pc}\n    cmp r1, #0x10\n    beq _021FC8B2\n    cmp r1, #0\n    blt _021FC874\n    cmp r1, #8\n    bge _021FC874\n    sub r2, #0x21\n    bl ov15_021FA6C0\n    ldr r1, _021FCAB4 ; =0x00000644\n    ldr r2, [r5, r1]\n    cmp r2, r0\n    beq _021FC8B2\n    str r0, [r5, r1]\n    add r4, r4, #1\n    b _021FC9CA\n    ldr r0, _021FCAB4 ; =0x00000644\n    add r4, r4, #1\n    str r3, [r5, r0]\n    b _021FC9CA\n    mov r2, #0x10\n    tst r3, r2\n    beq _021FC8D8\n    ldr r1, _021FCAB4 ; =0x00000644\n    ldr r2, _021FCAC4 ; =ov15_02200643\n    ldr r1, [r5, r1]\n    lsl r3, r1, #2\n    ldrb r2, [r2, r3]\n    cmp r2, #0xf\n    bne _021FC8AE\n    mov r1, #4\n    str r1, [sp]\n    add r2, sp, #8\n    mov r1, #0xf\n    add r2, #3\n    mov r3, #1\n    str r4, [sp, #4]\n    bl ov15_021FA73C\n    cmp r0, #1\n    beq _021FC8A8\n    b _021FCB5A\n    add sp, #0x10\n    mov r0, #0x10\n    pop {r4, r5, r6, pc}\n    cmp r1, #0x10\n    bne _021FC8B4\n    b _021FC9CA\n    cmp r1, #0\n    blt _021FC8D0\n    cmp r1, #8\n    bge _021FC8D0\n    mov r2, #1\n    bl ov15_021FA6C0\n    ldr r1, _021FCAB4 ; =0x00000644\n    ldr r2, [r5, r1]\n    cmp r2, r0\n    beq _021FC9CA\n    str r0, [r5, r1]\n    add r4, r4, #1\n    b _021FC9CA\n    ldr r0, _021FCAB4 ; =0x00000644\n    add r4, r4, #1\n    str r2, [r5, r0]\n    b _021FC9CA\n    ldr r3, [r1, #0x48]\n    lsl r1, r2, #5\n    tst r1, r3\n    beq _021FC952\n    ldr r1, _021FCAB4 ; =0x00000644\n    ldr r1, [r5, r1]\n    cmp r1, #0\n    blt _021FC922\n    cmp r1, #8\n    bge _021FC922\n    mov r1, #0x8d\n    lsl r1, r1, #2\n    ldr r1, [r5, r1]\n    sub r2, #0x11\n    add r1, #0x64\n    ldrb r1, [r1]\n    bl ov15_021FA6C0\n    ldr r1, _021FCAB4 ; =0x00000644\n    str r0, [r5, r1]\n    ldr r1, [r5, r1]\n    add r0, r5, #0\n    bl ov15_021FFECC\n    mov r0, #4\n    str r0, [sp]\n    add r0, r4, #0\n    str r0, [sp, #4]\n    ldr r1, _021FCAB4 ; =0x00000644\n    add r2, sp, #8\n    ldr r1, [r5, r1]\n    add r0, r5, #0\n    add r2, #2\n    mov r3, #1\n    bl ov15_021FA73C\n    b _021FC94C\n    mov r1, #0x8d\n    lsl r1, r1, #2\n    ldr r1, [r5, r1]\n    mov r2, #0\n    add r1, #0x64\n    ldrb r1, [r1]\n    add r0, r5, #0\n    mvn r2, r2\n    bl ov15_021FA6C0\n    add r1, r0, #0\n    mov r0, #4\n    str r0, [sp]\n    mov r0, #0\n    add r2, sp, #8\n    str r0, [sp, #4]\n    add r0, r5, #0\n    add r2, #2\n    mov r3, #1\n    bl ov15_021FA73C\n    add sp, #0x10\n    mov r0, #0x10\n    pop {r4, r5, r6, pc}\n    add r2, #0xf0\n    add r1, r3, #0\n    tst r1, r2\n    beq _021FC9CA\n    ldr r1, _021FCAB4 ; =0x00000644\n    ldr r1, [r5, r1]\n    cmp r1, #0\n    blt _021FC99C\n    cmp r1, #8\n    bge _021FC99C\n    mov r1, #0x8d\n    lsl r1, r1, #2\n    ldr r1, [r5, r1]\n    mov r2, #1\n    add r1, #0x64\n    ldrb r1, [r1]\n    bl ov15_021FA6C0\n    ldr r1, _021FCAB4 ; =0x00000644\n    str r0, [r5, r1]\n    ldr r1, [r5, r1]\n    add r0, r5, #0\n    bl ov15_021FFECC\n    mov r0, #4\n    str r0, [sp]\n    add r0, r4, #0\n    str r0, [sp, #4]\n    ldr r1, _021FCAB4 ; =0x00000644\n    add r2, sp, #8\n    ldr r1, [r5, r1]\n    add r0, r5, #0\n    add r2, #1\n    mov r3, #1\n    bl ov15_021FA73C\n    b _021FC9C4\n    mov r1, #0x8d\n    lsl r1, r1, #2\n    ldr r1, [r5, r1]\n    add r0, r5, #0\n    add r1, #0x64\n    ldrb r1, [r1]\n    mov r2, #1\n    bl ov15_021FA6C0\n    add r1, r0, #0\n    mov r0, #4\n    str r0, [sp]\n    mov r0, #0\n    add r2, sp, #8\n    str r0, [sp, #4]\n    add r0, r5, #0\n    add r2, #1\n    mov r3, #1\n    bl ov15_021FA73C\n    add sp, #0x10\n    mov r0, #0x10\n    pop {r4, r5, r6, pc}\n    ldr r1, _021FCAB4 ; =0x00000644\n    ldr r0, [r5, r1]\n    cmp r0, #0x11\n    bne _021FC9DE\n    mov r0, #0x8d\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    add r0, #0x64\n    ldrb r0, [r0]\n    str r0, [r5, r1]\n    cmp r4, #0\n    beq _021FCA02\n    ldr r0, _021FCAC8 ; =0x000005DC\n    bl PlaySE\n    ldr r1, _021FCAB4 ; =0x00000644\n    add r0, r5, #0\n    ldr r1, [r5, r1]\n    bl ov15_021FFECC\n    ldr r1, _021FCAB4 ; =0x00000644\n    add r0, r5, #0\n    ldr r1, [r5, r1]\n    bl ov15_021FA0E4\n    add r0, r5, #0\n    bl ov15_021FA170\n    mov r1, #0\n    add r0, sp, #8\n    strb r1, [r0]\n    add r0, r5, #0\n    bl ov15_021FAC2C\n    add r4, r0, #0\n    mov r0, #0\n    mvn r0, r0\n    cmp r4, r0\n    beq _021FCA8A\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov15_021FA104\n    cmp r0, #0\n    beq _021FCA64\n    cmp r4, #8\n    bhs _021FCA46\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov15_021FA68C\n    mov r1, #0\n    mvn r1, r1\n    cmp r0, r1\n    beq _021FCA64\n    ldr r1, _021FCAB4 ; =0x00000644\n    add r0, r5, #0\n    str r4, [r5, r1]\n    ldr r1, [r5, r1]\n    bl ov15_021FFECC\n    b _021FCA64\n    ldr r1, _021FCAB4 ; =0x00000644\n    add r0, r5, #0\n    str r4, [r5, r1]\n    ldr r1, [r5, r1]\n    bl ov15_021FFECC\n    ldr r0, _021FCAB4 ; =0x00000644\n    ldr r1, [r5, r0]\n    cmp r1, #8\n    blt _021FCA64\n    cmp r1, #0xd\n    bgt _021FCA64\n    add r0, r5, #0\n    bl ov15_021FA0E4\n    mov r0, #4\n    str r0, [sp]\n    mov r3, #1\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, sp, #8\n    str r3, [sp, #4]\n    bl ov15_021FA73C\n    cmp r0, #1\n    beq _021FCB40\n    mov r1, #0x8d\n    lsl r1, r1, #2\n    ldr r1, [r5, r1]\n    mov r2, #5\n    add r1, #0x68\n    strh r2, [r1]\n    add sp, #0x10\n    pop {r4, r5, r6, pc}\n    ldr r0, _021FCAB0 ; =gSystem\n    mov r3, #1\n    ldr r1, [r0, #0x48]\n    add r0, r1, #0\n    tst r0, r3\n    beq _021FCAF2\n    mov r0, #4\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    ldr r1, _021FCAB4 ; =0x00000644\n    add r0, r5, #0\n    ldr r1, [r5, r1]\n    add r2, sp, #8\n    bl ov15_021FA73C\n    add r4, r0, #0\n    ldr r0, _021FCAB4 ; =0x00000644\n    b _021FCACC\n    _021FCAB0: .word gSystem\n    _021FCAB4: .word 0x00000644\n    _021FCAB8: .word ov15_02200640\n    _021FCABC: .word ov15_02200641\n    _021FCAC0: .word ov15_02200642\n    _021FCAC4: .word ov15_02200643\n    _021FCAC8: .word 0x000005DC\n    ldr r1, [r5, r0]\n    cmp r1, #8\n    blt _021FCADC\n    cmp r1, #0xd\n    bgt _021FCADC\n    add r0, r5, #0\n    bl ov15_021FA0E4\n    cmp r4, #1\n    beq _021FCB40\n    mov r0, #0x8d\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #5\n    add r0, #0x68\n    strh r1, [r0]\n    add sp, #0x10\n    add r0, r4, #0\n    pop {r4, r5, r6, pc}\n    mov r0, #2\n    tst r0, r1\n    beq _021FCB40\n    mov r0, #0x8d\n    lsl r0, r0, #2\n    ldr r2, [r5, r0]\n    mov r1, #0\n    add r2, #0x66\n    strh r1, [r2]\n    ldr r0, [r5, r0]\n    mov r2, #5\n    add r0, #0x68\n    strh r2, [r0]\n    add r0, r5, #0\n    bl ov15_021FD774\n    mov r0, #SEQ_SE_GS_GEARCANCEL>>6\n    lsl r0, r0, #6\n    bl PlaySE\n    ldr r0, _021FCB60 ; =0x00000644\n    ldr r1, [r5, r0]\n    cmp r1, #8\n    blt _021FCB2C\n    cmp r1, #0xd\n    bgt _021FCB2C\n    add r0, r5, #0\n    bl ov15_021FA0E4\n    mov r0, #0x24\n    str r0, [sp]\n    add r0, r5, #0\n    mov r1, #0x13\n    mov r2, #9\n    mov r3, #8\n    bl ov15_021FD7D0\n    add sp, #0x10\n    pop {r4, r5, r6, pc}\n    add r0, sp, #8\n    ldrb r0, [r0]\n    cmp r0, #1\n    bne _021FCB58\n    add r0, r5, #0\n    mov r1, #0x14\n    mov r2, #0x29\n    mov r3, #0x22\n    bl ov15_021FD810\n    add sp, #0x10\n    pop {r4, r5, r6, pc}\n    mov r0, #0x10\n    add sp, #0x10\n    pop {r4, r5, r6, pc}\n    nop\n    _021FCB60: .word 0x00000644"
    );
    #endif
}

void ov15_021FCB64(void) {
    /* Original at 0x021FCB64 */
    /* Requires manual decompilation - 234 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #8\n    mov r1, #0x8d\n    add r4, r0, #0\n    lsl r1, r1, #2\n    ldr r1, [r4, r1]\n    add r3, r1, #4\n    add r1, #0x64\n    ldrb r2, [r1]\n    mov r1, #0xc\n    mul r1, r2\n    add r5, r3, r1\n    mov r2, #0\n    mov r1, #4\n    add r3, r2, #0\n    bl ov15_021FD574\n    mov r0, #0x1a\n    mov r1, #1\n    lsl r0, r0, #6\n    strh r1, [r4, r0]\n    mov r0, #0x8d\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0\n    add r0, #0x66\n    ldrh r0, [r0]\n    mov r2, #6\n    bl GetItemAttr\n    asr r1, r0, #1\n    ldr r0, _021FCD70 ; =0x00000684\n    mov r2, #0\n    str r1, [r4, r0]\n    ldr r0, [r4]\n    mov r1, #5\n    bl ov15_021FD43C\n    ldr r0, [r4]\n    mov r1, #5\n    bl ScheduleBgTilemapBufferTransfer\n    mov r0, #0xa5\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl ManagedSprite_SetDrawFlag\n    mov r0, #0xa6\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl ManagedSprite_SetDrawFlag\n    add r0, r4, #0\n    mov r1, #0\n    bl ov15_02200458\n    add r0, r4, #0\n    mov r1, #0\n    bl ov15_021FD788\n    ldr r2, _021FCD74 ; =0x00000644\n    mov r1, #6\n    ldr r2, [r4, r2]\n    ldrsh r1, [r5, r1]\n    add r0, r4, #0\n    sub r2, #8\n    bl ov15_021FF4EC\n    ldr r1, _021FCD74 ; =0x00000644\n    add r0, r4, #0\n    ldr r1, [r4, r1]\n    sub r1, #8\n    bl ov15_022002B4\n    mov r2, #0x8d\n    lsl r2, r2, #2\n    ldr r2, [r4, r2]\n    add r0, r4, #0\n    add r2, #0x66\n    ldrh r2, [r2]\n    add r1, r4, #4\n    bl ov15_021FECA0\n    add r0, r4, #0\n    bl ov15_021FFF24\n    mov r0, #0x8d\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #3\n    add r0, #0x66\n    ldrh r0, [r0]\n    mov r2, #6\n    bl GetItemAttr\n    cmp r0, #0\n    bne _021FCC32\n    ldr r0, _021FCD70 ; =0x00000684\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    bne _021FCC7C\n    mov r0, #0x2f\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #0x4c\n    bl NewString_ReadMsgData\n    mov r2, #0xbd\n    lsl r2, r2, #2\n    add r5, r0, #0\n    ldr r0, [r4, r2]\n    sub r2, #0xc0\n    ldr r2, [r4, r2]\n    mov r1, #0\n    add r2, #0x66\n    ldrh r2, [r2]\n    bl BufferItemName\n    mov r0, #0xbd\n    ldr r1, _021FCD78 ; =0x000005E4\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    ldr r1, [r4, r1]\n    add r2, r5, #0\n    bl StringExpandPlaceholders\n    add r0, r5, #0\n    bl String_Delete\n    add r0, r4, #0\n    mov r1, #0\n    bl ov15_021FEF48\n    ldr r1, _021FCD7C ; =0x00000616\n    add sp, #8\n    strb r0, [r4, r1]\n    mov r0, #0x18\n    pop {r3, r4, r5, pc}\n    add r0, r4, #0\n    mov r1, #0\n    bl ov15_021FF0FC\n    add r0, r4, #0\n    bl ov15_021FF068\n    add r0, r4, #0\n    mov r1, #2\n    bl ov15_021FEDEC\n    mov r0, #0x8d\n    lsl r0, r0, #2\n    ldr r2, [r4, r0]\n    mov r3, #6\n    add r0, r2, #0\n    add r0, #0x64\n    ldrb r1, [r0]\n    mov r0, #0xc\n    mul r0, r1\n    add r1, r2, r0\n    add r2, #0x66\n    ldr r0, [r1, #4]\n    ldrb r1, [r1, #0xd]\n    ldrh r2, [r2]\n    bl Pocket_GetQuantity\n    cmp r0, #1\n    bne _021FCD0C\n    mov r0, #0x2f\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #0x4e\n    bl NewString_ReadMsgData\n    mov r1, #0\n    add r5, r0, #0\n    mov r2, #0x1a\n    str r1, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    lsl r2, r2, #6\n    mov r0, #0xbd\n    ldrsh r3, [r4, r2]\n    add r2, r2, #4\n    lsl r0, r0, #2\n    ldr r2, [r4, r2]\n    ldr r0, [r4, r0]\n    mul r2, r3\n    mov r3, #6\n    bl BufferIntegerAsString\n    mov r0, #0xbd\n    ldr r1, _021FCD78 ; =0x000005E4\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    ldr r1, [r4, r1]\n    add r2, r5, #0\n    bl StringExpandPlaceholders\n    add r0, r5, #0\n    bl String_Delete\n    add r0, r4, #0\n    mov r1, #1\n    bl ov15_021FEF48\n    ldr r1, _021FCD7C ; =0x00000616\n    add sp, #8\n    strb r0, [r4, r1]\n    mov r0, #0x15\n    pop {r3, r4, r5, pc}\n    mov r1, #6\n    ldrsh r3, [r5, r1]\n    ldr r1, _021FCD74 ; =0x00000644\n    ldr r0, [r5]\n    ldr r2, [r4, r1]\n    add r1, #0x3e\n    add r2, r3, r2\n    sub r2, #8\n    lsl r2, r2, #2\n    add r0, r0, r2\n    ldrh r0, [r0, #2]\n    strh r0, [r4, r1]\n    mov r0, #0x2f\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #0x4d\n    bl NewString_ReadMsgData\n    mov r2, #0xbd\n    lsl r2, r2, #2\n    add r5, r0, #0\n    ldr r0, [r4, r2]\n    sub r2, #0xc0\n    ldr r2, [r4, r2]\n    mov r1, #0\n    add r2, #0x66\n    ldrh r2, [r2]\n    bl BufferItemName\n    mov r0, #0xbd\n    ldr r1, _021FCD78 ; =0x000005E4\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    ldr r1, [r4, r1]\n    add r2, r5, #0\n    bl StringExpandPlaceholders\n    add r0, r5, #0\n    bl String_Delete\n    add r0, r4, #0\n    mov r1, #1\n    bl ov15_021FEF48\n    ldr r1, _021FCD7C ; =0x00000616\n    strb r0, [r4, r1]\n    mov r0, #0x11\n    add sp, #8\n    pop {r3, r4, r5, pc}\n    nop\n    _021FCD70: .word 0x00000684\n    _021FCD74: .word 0x00000644\n    _021FCD78: .word 0x000005E4\n    _021FCD7C: .word 0x00000616"
    );
    #endif
}

void ov15_021FCD80(void) {
    /* Original at 0x021FCD80 */
    /* Requires manual decompilation - 41 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _021FCDDC ; =0x00000616\n    ldrb r0, [r4, r0]\n    bl TextPrinterCheckActive\n    cmp r0, #0\n    bne _021FCDD6\n    ldr r0, _021FCDE0 ; =0x00000682\n    ldrh r1, [r4, r0]\n    cmp r1, #0x63\n    bls _021FCD9C\n    mov r1, #0x63\n    strh r1, [r4, r0]\n    mov r2, #0\n    add r0, r4, #0\n    mov r1, #4\n    add r3, r2, #0\n    bl ov15_021FD574\n    ldr r2, _021FCDE0 ; =0x00000682\n    add r0, r4, #0\n    ldrh r2, [r4, r2]\n    mov r1, #2\n    bl ov15_02200300\n    add r0, r4, #0\n    bl ov15_021FF7FC\n    add r0, r4, #0\n    mov r1, #1\n    bl ov15_021FF29C\n    add r0, r4, #0\n    mov r1, #1\n    bl ov15_022004DC\n    add r0, r4, #0\n    mov r1, #0\n    bl ov15_021FFFDC\n    mov r0, #0x12\n    pop {r4, pc}\n    mov r0, #0x11\n    pop {r4, pc}\n    nop\n    _021FCDDC: .word 0x00000616\n    _021FCDE0: .word 0x00000682"
    );
    #endif
}

void ov15_021FCDE4(void) {
    /* Original at 0x021FCDE4 */
    /* Requires manual decompilation - 204 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #4\n    mov r5, #0\n    mov r1, #4\n    add r4, r0, #0\n    bl ov15_021FAC2C\n    add r6, r0, #0\n    sub r0, r5, #1\n    cmp r6, r0\n    bne _021FCDFC\n    b _021FCF06\n    ldr r0, _021FCFB8 ; =0x00000682\n    ldrh r0, [r4, r0]\n    bl ov15_022002EC\n    cmp r0, #2\n    bne _021FCE14\n    cmp r6, #0\n    beq _021FCE10\n    cmp r6, #2\n    bne _021FCE14\n    mov r6, #0\n    mvn r6, r6\n    cmp r6, #5\n    bls _021FCE1A\n    b _021FCF2E\n    add r0, r6, r6\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _021FCE26: ; jump table\n    mov r1, #0x1a\n    lsl r1, r1, #6\n    ldrsh r0, [r4, r1]\n    add r1, r1, #2\n    ldrh r1, [r4, r1]\n    mov r2, #0xa\n    bl ov15_021FBD28\n    mov r1, #0x1a\n    lsl r1, r1, #6\n    strh r0, [r4, r1]\n    mov r0, #0x2d\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl ManagedSprite_SetAnimationFrame\n    mov r0, #0x2d\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #0x1a\n    bl ManagedSprite_SetAnim\n    mov r5, #1\n    b _021FCF2E\n    mov r1, #0x1a\n    lsl r1, r1, #6\n    ldrsh r0, [r4, r1]\n    add r1, r1, #2\n    ldrh r1, [r4, r1]\n    mov r2, #1\n    bl ov15_021FBD28\n    mov r1, #0x1a\n    lsl r1, r1, #6\n    strh r0, [r4, r1]\n    mov r0, #0xb5\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl ManagedSprite_SetAnimationFrame\n    mov r0, #0xb5\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0x1a\n    bl ManagedSprite_SetAnim\n    mov r5, #1\n    b _021FCF2E\n    mov r1, #0x1a\n    lsl r1, r1, #6\n    ldrsh r0, [r4, r1]\n    add r1, r1, #2\n    mov r2, #9\n    ldrh r1, [r4, r1]\n    mvn r2, r2\n    bl ov15_021FBD28\n    mov r1, #0x1a\n    lsl r1, r1, #6\n    strh r0, [r4, r1]\n    mov r0, #0xb7\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl ManagedSprite_SetAnimationFrame\n    mov r0, #0xb7\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0x1c\n    bl ManagedSprite_SetAnim\n    mov r5, #2\n    b _021FCF2E\n    mov r1, #0x1a\n    lsl r1, r1, #6\n    ldrsh r0, [r4, r1]\n    add r1, r1, #2\n    mov r2, #0\n    ldrh r1, [r4, r1]\n    mvn r2, r2\n    bl ov15_021FBD28\n    mov r1, #0x1a\n    lsl r1, r1, #6\n    strh r0, [r4, r1]\n    mov r0, #0x2e\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl ManagedSprite_SetAnimationFrame\n    mov r0, #0x2e\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #0x1c\n    bl ManagedSprite_SetAnim\n    mov r5, #2\n    b _021FCF2E\n    mov r5, #3\n    b _021FCF2E\n    mov r5, #4\n    b _021FCF2E\n    mov r1, #0x1a\n    lsl r1, r1, #6\n    add r0, r4, r1\n    add r1, r1, #2\n    ldrh r1, [r4, r1]\n    bl sub_020881C0\n    add r5, r0, #0\n    bne _021FCF2E\n    ldr r0, _021FCFBC ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #1\n    tst r0, r1\n    beq _021FCF26\n    mov r5, #3\n    b _021FCF2E\n    mov r0, #2\n    tst r0, r1\n    beq _021FCF2E\n    mov r5, #4\n    cmp r5, #4\n    bhi _021FCFB2\n    add r0, r5, r5\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _021FCF3E: ; jump table\n    add r0, r4, #0\n    bl ov15_021FF068\n    add r0, r4, #0\n    mov r1, #2\n    bl ov15_021FEDEC\n    ldr r0, _021FCFC0 ; =0x00000637\n    bl PlaySE\n    add sp, #4\n    mov r0, #0x12\n    pop {r3, r4, r5, r6, pc}\n    add r0, r4, #0\n    bl ov15_021FF068\n    add r0, r4, #0\n    mov r1, #2\n    bl ov15_021FEDEC\n    ldr r0, _021FCFC0 ; =0x00000637\n    bl PlaySE\n    add sp, #4\n    mov r0, #0x12\n    pop {r3, r4, r5, r6, pc}\n    ldr r0, _021FCFC4 ; =0x000005DC\n    bl PlaySE\n    mov r0, #0x13\n    str r0, [sp]\n    add r0, r4, #0\n    mov r1, #0x26\n    mov r2, #9\n    mov r3, #8\n    bl ov15_021FD7D0\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}\n    mov r0, #SEQ_SE_GS_GEARCANCEL>>6\n    lsl r0, r0, #6\n    bl PlaySE\n    mov r0, #0x14\n    str r0, [sp]\n    add r0, r4, #0\n    mov r1, #0x13\n    mov r2, #9\n    mov r3, #8\n    bl ov15_021FD7D0\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}\n    mov r0, #0x12\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}\n    _021FCFB8: .word 0x00000682\n    _021FCFBC: .word gSystem\n    _021FCFC0: .word 0x00000637\n    _021FCFC4: .word 0x000005DC"
    );
    #endif
}

void ov15_021FCFC8(void) {
    /* Original at 0x021FCFC8 */
    /* Requires manual decompilation - 59 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #8\n    add r5, r0, #0\n    add r0, #0x44\n    mov r1, #1\n    bl sub_0200E5D4\n    add r0, r5, #0\n    bl ov15_021FF834\n    add r0, r5, #0\n    add r0, #0x34\n    mov r1, #0xf\n    bl FillWindowPixelBuffer\n    mov r0, #0x2f\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    mov r1, #0x4e\n    bl NewString_ReadMsgData\n    mov r1, #0\n    add r4, r0, #0\n    mov r2, #0x1a\n    str r1, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    lsl r2, r2, #6\n    mov r0, #0xbd\n    ldrsh r3, [r5, r2]\n    add r2, r2, #4\n    lsl r0, r0, #2\n    ldr r2, [r5, r2]\n    ldr r0, [r5, r0]\n    mul r2, r3\n    mov r3, #6\n    bl BufferIntegerAsString\n    mov r0, #0xbd\n    ldr r1, _021FD050 ; =0x000005E4\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    ldr r1, [r5, r1]\n    add r2, r4, #0\n    bl StringExpandPlaceholders\n    add r0, r4, #0\n    bl String_Delete\n    add r0, r5, #0\n    mov r1, #1\n    bl ov15_021FEF48\n    ldr r1, _021FD054 ; =0x00000616\n    strb r0, [r5, r1]\n    add r0, r5, #0\n    bl ov15_02200428\n    add r0, r5, #0\n    bl ov15_021FFF24\n    add r0, r5, #0\n    mov r1, #0\n    bl ov15_021FD788\n    mov r0, #0x15\n    add sp, #8\n    pop {r3, r4, r5, pc}\n    _021FD050: .word 0x000005E4\n    _021FD054: .word 0x00000616"
    );
    #endif
}

void ov15_021FD058(void) {
    /* Original at 0x021FD058 */
    /* Requires manual decompilation - 57 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, _021FD0E4 ; =0x00000684\n    mov r1, #0\n    str r1, [r5, r0]\n    mov r0, #0x85\n    lsl r0, r0, #2\n    add r0, r5, r0\n    mov r1, #1\n    bl sub_0200E5D4\n    add r0, r5, #0\n    add r0, #0x44\n    mov r1, #1\n    bl sub_0200E5D4\n    add r0, r5, #0\n    add r0, #0x34\n    mov r1, #1\n    bl ClearFrameAndWindow2\n    add r0, r5, #0\n    add r0, #0x34\n    bl ClearWindowTilemapAndScheduleTransfer\n    add r0, r5, #4\n    bl ScheduleWindowCopyToVram\n    add r0, r5, #0\n    bl ov15_02200428\n    add r0, r5, #0\n    bl ov15_021FFF24\n    mov r0, #0x8d\n    lsl r0, r0, #2\n    ldr r4, [r5, r0]\n    add r0, r5, #0\n    bl ov15_021FA074\n    add r1, r4, #4\n    add r4, #0x64\n    add r2, r0, #0\n    ldrb r4, [r4]\n    mov r3, #0xc\n    add r0, r5, #0\n    mul r3, r4\n    add r1, r1, r3\n    mov r3, #0\n    bl ov15_02200140\n    add r0, r5, #0\n    bl ov15_021FE868\n    add r0, r5, #0\n    bl ov15_021FED3C\n    add r0, r5, #0\n    bl ov15_021FB518\n    add r0, r5, #0\n    mov r1, #1\n    bl ov15_02200458\n    add r0, r5, #0\n    mov r1, #1\n    bl ov15_021FD788\n    mov r0, #0x10\n    pop {r3, r4, r5, pc}\n    _021FD0E4: .word 0x00000684"
    );
    #endif
}

void ov15_021FD0E8(void) {
    /* Original at 0x021FD0E8 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _021FD108 ; =0x00000616\n    ldrb r0, [r4, r0]\n    bl TextPrinterCheckActive\n    cmp r0, #0\n    bne _021FD102\n    add r0, r4, #0\n    bl ov15_021FF004\n    mov r0, #0x16\n    pop {r4, pc}\n    mov r0, #0x15\n    pop {r4, pc}\n    nop\n    _021FD108: .word 0x00000616"
    );
    #endif
}

void ov15_021FD10C(void) {
    /* Original at 0x021FD10C */
    /* Requires manual decompilation - 135 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #8\n    add r4, r0, #0\n    ldr r0, _021FD23C ; =0x00000804\n    ldr r0, [r4, r0]\n    bl YesNoPrompt_HandleInput\n    cmp r0, #1\n    beq _021FD12A\n    cmp r0, #2\n    beq _021FD1BA\n    mov r1, #0\n    mvn r1, r1\n    cmp r0, r1\n    b _021FD234\n    add r0, r4, #0\n    bl ov15_021FF058\n    mov r0, #0x2f\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #0x4f\n    bl NewString_ReadMsgData\n    add r5, r0, #0\n    mov r0, #0x1a\n    lsl r0, r0, #6\n    ldrsh r0, [r4, r0]\n    cmp r0, #1\n    ble _021FD15E\n    mov r2, #0xbd\n    lsl r2, r2, #2\n    ldr r0, [r4, r2]\n    sub r2, #0xc0\n    ldr r2, [r4, r2]\n    mov r1, #0\n    add r2, #0x66\n    ldrh r2, [r2]\n    bl BufferItemNamePlural\n    b _021FD172\n    mov r2, #0xbd\n    lsl r2, r2, #2\n    ldr r0, [r4, r2]\n    sub r2, #0xc0\n    ldr r2, [r4, r2]\n    mov r1, #0\n    add r2, #0x66\n    ldrh r2, [r2]\n    bl BufferItemName\n    mov r0, #0\n    str r0, [sp]\n    mov r1, #1\n    mov r2, #0x1a\n    mov r0, #0xbd\n    str r1, [sp, #4]\n    lsl r2, r2, #6\n    ldrsh r3, [r4, r2]\n    add r2, r2, #4\n    lsl r0, r0, #2\n    ldr r2, [r4, r2]\n    ldr r0, [r4, r0]\n    mul r2, r3\n    mov r3, #6\n    bl BufferIntegerAsString\n    mov r0, #0xbd\n    ldr r1, _021FD240 ; =0x000005E4\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    ldr r1, [r4, r1]\n    add r2, r5, #0\n    bl StringExpandPlaceholders\n    add r0, r5, #0\n    bl String_Delete\n    add r0, r4, #0\n    mov r1, #0\n    bl ov15_021FEF48\n    ldr r1, _021FD244 ; =0x00000616\n    add sp, #8\n    strb r0, [r4, r1]\n    mov r0, #0x17\n    pop {r3, r4, r5, pc}\n    add r0, r4, #0\n    bl ov15_021FF058\n    ldr r0, _021FD248 ; =0x00000684\n    mov r1, #0\n    str r1, [r4, r0]\n    mov r0, #0x85\n    lsl r0, r0, #2\n    add r0, r4, r0\n    mov r1, #1\n    bl sub_0200E5D4\n    add r0, r4, #0\n    add r0, #0x34\n    mov r1, #1\n    bl ClearFrameAndWindow2\n    add r0, r4, #0\n    add r0, #0x34\n    bl ClearWindowTilemapAndScheduleTransfer\n    add r0, r4, #4\n    bl ScheduleWindowCopyToVram\n    mov r0, #0x8d\n    lsl r0, r0, #2\n    ldr r5, [r4, r0]\n    add r0, r4, #0\n    bl ov15_021FA074\n    add r1, r5, #4\n    add r5, #0x64\n    add r2, r0, #0\n    ldrb r5, [r5]\n    mov r3, #0xc\n    add r0, r4, #0\n    mul r3, r5\n    add r1, r1, r3\n    mov r3, #0\n    bl ov15_02200140\n    add r0, r4, #0\n    bl ov15_021FE868\n    add r0, r4, #0\n    bl ov15_021FED3C\n    add r0, r4, #0\n    bl ov15_021FB518\n    add r0, r4, #0\n    mov r1, #1\n    bl ov15_02200458\n    add r0, r4, #0\n    mov r1, #1\n    bl ov15_021FD788\n    add sp, #8\n    mov r0, #0x10\n    pop {r3, r4, r5, pc}\n    mov r0, #0x16\n    add sp, #8\n    pop {r3, r4, r5, pc}\n    nop\n    _021FD23C: .word 0x00000804\n    _021FD240: .word 0x000005E4\n    _021FD244: .word 0x00000616\n    _021FD248: .word 0x00000684"
    );
    #endif
}

void ov15_021FD24C(void) {
    /* Original at 0x021FD24C */
    /* Requires manual decompilation - 80 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    add r4, r0, #0\n    ldr r0, _021FD2F4 ; =0x00000616\n    ldrb r0, [r4, r0]\n    bl TextPrinterCheckActive\n    cmp r0, #0\n    beq _021FD264\n    add sp, #4\n    mov r0, #0x17\n    pop {r3, r4, pc}\n    ldr r0, _021FD2F8 ; =0x00000643\n    bl PlaySE\n    mov r1, #0x1a\n    lsl r1, r1, #6\n    mov r0, #0x8f\n    ldrsh r2, [r4, r1]\n    add r1, r1, #4\n    lsl r0, r0, #2\n    ldr r1, [r4, r1]\n    ldr r0, [r4, r0]\n    mul r1, r2\n    bl PlayerProfile_AddMoney\n    mov r0, #0x1a\n    lsl r0, r0, #6\n    ldrsh r0, [r4, r0]\n    cmp r0, #1\n    bne _021FD2A8\n    mov r0, #0x8d\n    lsl r0, r0, #2\n    ldr r1, [r4, r0]\n    add r0, r1, #0\n    add r0, #0x75\n    ldrb r0, [r0]\n    cmp r0, #0xff\n    beq _021FD2B4\n    add r0, r1, #0\n    add r0, #0x75\n    ldrb r0, [r0]\n    add r1, #0x75\n    add r0, r0, #1\n    strb r0, [r1]\n    b _021FD2B4\n    mov r0, #0x8d\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #2\n    add r0, #0x75\n    strb r1, [r0]\n    mov r0, #0x8d\n    lsl r0, r0, #2\n    ldr r2, [r4, r0]\n    add r0, r2, #0\n    add r0, #0x64\n    ldrb r1, [r0]\n    mov r0, #0xc\n    add r3, r1, #0\n    mul r3, r0\n    add r1, r2, r3\n    mov r0, #6\n    mov r3, #0x1a\n    str r0, [sp]\n    add r2, #0x66\n    lsl r3, r3, #6\n    ldr r0, [r1, #4]\n    ldrb r1, [r1, #0xd]\n    ldrh r2, [r2]\n    ldrh r3, [r4, r3]\n    bl Pocket_TakeItem\n    add r0, r4, #0\n    bl ov15_021F9F08\n    add r4, #0x34\n    add r0, r4, #0\n    bl ScheduleWindowCopyToVram\n    mov r0, #0x18\n    add sp, #4\n    pop {r3, r4, pc}\n    nop\n    _021FD2F4: .word 0x00000616\n    _021FD2F8: .word 0x00000643"
    );
    #endif
}

void ov15_021FD2FC(void) {
    /* Original at 0x021FD2FC */
    /* Requires manual decompilation - 71 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, _021FD39C ; =0x00000616\n    ldrb r0, [r5, r0]\n    bl TextPrinterCheckActive\n    cmp r0, #0\n    bne _021FD396\n    ldr r0, _021FD3A0 ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #3\n    tst r0, r1\n    bne _021FD31E\n    ldr r0, _021FD3A4 ; =gSystem + 0x40\n    ldrh r0, [r0, #0x24]\n    cmp r0, #0\n    beq _021FD396\n    ldr r0, _021FD3A8 ; =0x00000684\n    mov r1, #0\n    str r1, [r5, r0]\n    mov r0, #0x85\n    lsl r0, r0, #2\n    add r0, r5, r0\n    mov r1, #1\n    bl sub_0200E5D4\n    add r0, r5, #0\n    add r0, #0x34\n    mov r1, #1\n    bl ClearFrameAndWindow2\n    add r0, r5, #0\n    add r0, #0x34\n    bl ClearWindowTilemapAndScheduleTransfer\n    add r0, r5, #4\n    bl ScheduleWindowCopyToVram\n    mov r0, #0x8d\n    lsl r0, r0, #2\n    ldr r4, [r5, r0]\n    add r0, r5, #0\n    bl ov15_021FA074\n    add r1, r4, #4\n    add r4, #0x64\n    add r2, r0, #0\n    ldrb r4, [r4]\n    mov r3, #0xc\n    add r0, r5, #0\n    mul r3, r4\n    add r1, r1, r3\n    mov r3, #1\n    bl ov15_02200140\n    add r0, r5, #0\n    bl ov15_021FE868\n    add r0, r5, #0\n    bl ov15_021FED3C\n    add r0, r5, #0\n    bl ov15_021FB518\n    add r0, r5, #0\n    bl ov15_021FA170\n    add r0, r5, #0\n    mov r1, #1\n    bl ov15_02200458\n    add r0, r5, #0\n    mov r1, #1\n    bl ov15_021FD788\n    mov r0, #0x10\n    pop {r3, r4, r5, pc}\n    mov r0, #0x18\n    pop {r3, r4, r5, pc}\n    nop\n    _021FD39C: .word 0x00000616\n    _021FD3A0: .word gSystem\n    _021FD3A4: .word gSystem + 0x40\n    _021FD3A8: .word 0x00000684"
    );
    #endif
}

void ov15_021FD3AC(void) {
    ov15_021FA650();
}

void ov15_021FD3C0(void) {
    /* Original at 0x021FD3C0 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov15_021FED3C\n    add r0, r4, #0\n    mov r1, #0\n    bl ov15_021FD788\n    add r0, r4, #0\n    bl ov15_021FFF24\n    mov r0, #1\n    mov r1, #6\n    bl sub_020880CC\n    mov r0, #0x8d\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #4\n    add r0, #0x68\n    strh r1, [r0]\n    mov r0, #0x25\n    pop {r4, pc}"
    );
    #endif
}

void ov15_021FD3F0(void) {
    /* Original at 0x021FD3F0 */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "cmp r0, #4\n    beq _021FD3FC\n    cmp r1, #0x5f\n    blo _021FD400\n    cmp r1, #0x63\n    bhs _021FD400\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void ov15_021FD404(void) {
    /* Original at 0x021FD404 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    lsl r1, r1, #2\n    add r1, r0, r1\n    ldr r0, _021FD438 ; =0x00000694\n    cmp r2, #7\n    ldr r0, [r1, r0]\n    ldr r5, [r0, #0xc]\n    bgt _021FD434\n    lsl r4, r2, #5\n    add r0, r5, r4\n    mov r1, #0\n    mov r2, #0x20\n    bl GXS_LoadBGPltt\n    add r0, r5, r4\n    mov r1, #0x20\n    mov r2, #0x40\n    bl GXS_LoadBGPltt\n    add r0, r5, r4\n    mov r1, #0x60\n    mov r2, #0x20\n    bl GXS_LoadBGPltt\n    pop {r3, r4, r5, pc}\n    nop\n    _021FD438: .word 0x00000694"
    );
    #endif
}

void ov15_021FD43C(void) {
    /* Original at 0x021FD43C */
    /* Requires manual decompilation - 62 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    str r1, [sp, #0x10]\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    add r6, r0, #0\n    add r4, r2, #0\n    bl GetBgTilemapBuffer\n    str r0, [sp, #0x14]\n    cmp r4, #6\n    beq _021FD4B6\n    ldr r1, _021FD4BC ; =ov15_022013A8\n    lsl r0, r4, #5\n    add r5, r1, r0\n    ldr r0, [sp, #0x10]\n    mov r7, #0\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    ldrb r0, [r5]\n    cmp r0, #1\n    bne _021FD48E\n    ldrb r0, [r5, #4]\n    add r1, r4, #0\n    str r0, [sp]\n    ldrb r0, [r5, #5]\n    str r0, [sp, #4]\n    ldrb r0, [r5, #6]\n    str r0, [sp, #8]\n    ldrb r3, [r5, #2]\n    ldrb r2, [r5, #1]\n    add r0, r6, #0\n    lsl r3, r3, #5\n    add r2, r2, r3\n    lsl r3, r2, #1\n    ldr r2, [sp, #0x14]\n    add r2, r2, r3\n    ldrb r3, [r5, #3]\n    bl LoadRectToBgTilemapRect\n    b _021FD4AE\n    cmp r0, #2\n    bne _021FD4AE\n    ldrb r0, [r5, #4]\n    add r1, r4, #0\n    mov r2, #0\n    str r0, [sp]\n    ldrb r0, [r5, #5]\n    str r0, [sp, #4]\n    ldrb r0, [r5, #6]\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    ldrb r3, [r5, #3]\n    add r0, r6, #0\n    bl FillBgTilemapRect\n    add r7, r7, #1\n    add r5, #8\n    cmp r7, #4\n    blt _021FD462\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021FD4BC: .word ov15_022013A8"
    );
    #endif
}

void ov15_021FD4C0(void) {
    /* Original at 0x021FD4C0 */
    /* Requires manual decompilation - 84 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x1c\n    str r1, [sp, #0x10]\n    lsl r1, r1, #0x18\n    add r5, r2, #0\n    lsr r1, r1, #0x18\n    add r6, r0, #0\n    str r3, [sp, #0x14]\n    bl GetBgTilemapBuffer\n    str r0, [sp, #0x18]\n    sub r0, r5, #1\n    ldr r1, _021FD56C ; =ov15_02201340\n    lsl r0, r0, #3\n    add r5, r1, r0\n    ldr r0, [sp, #0x10]\n    mov r4, #0\n    lsl r0, r0, #0x18\n    lsr r7, r0, #0x18\n    ldrb r0, [r5, #1]\n    add r1, r7, #0\n    mov r2, #0\n    str r0, [sp]\n    ldrb r0, [r5, #2]\n    str r0, [sp, #4]\n    ldrb r0, [r5, #3]\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    ldrb r3, [r5]\n    add r0, r6, #0\n    bl FillBgTilemapRect\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #2\n    blt _021FD4E6\n    mov r1, #0\n    ldr r0, [sp, #0x14]\n    mvn r1, r1\n    cmp r0, r1\n    beq _021FD566\n    ldr r1, _021FD570 ; =ov15_02201328\n    lsl r0, r0, #2\n    add r3, r1, r0\n    ldr r0, [sp, #0x14]\n    cmp r0, #1\n    ldrb r0, [r3, #1]\n    bhi _021FD546\n    str r0, [sp]\n    ldrb r0, [r3, #2]\n    ldr r1, [sp, #0x10]\n    mov r4, #6\n    str r0, [sp, #4]\n    ldrb r0, [r3, #3]\n    lsl r1, r1, #0x18\n    ldr r2, [sp, #0x18]\n    str r0, [sp, #8]\n    lsl r4, r4, #8\n    ldrb r3, [r3]\n    add r0, r6, #0\n    lsr r1, r1, #0x18\n    add r2, r2, r4\n    bl LoadRectToBgTilemapRect\n    add sp, #0x1c\n    pop {r4, r5, r6, r7, pc}\n    str r0, [sp]\n    ldrb r0, [r3, #2]\n    ldr r1, [sp, #0x10]\n    mov r4, #0x1b\n    str r0, [sp, #4]\n    ldrb r0, [r3, #3]\n    lsl r1, r1, #0x18\n    ldr r2, [sp, #0x18]\n    str r0, [sp, #8]\n    lsl r4, r4, #6\n    ldrb r3, [r3]\n    add r0, r6, #0\n    lsr r1, r1, #0x18\n    add r2, r2, r4\n    bl LoadRectToBgTilemapRect\n    add sp, #0x1c\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _021FD56C: .word ov15_02201340\n    _021FD570: .word ov15_02201328"
    );
    #endif
}

void ov15_021FD574(void) {
    /* Original at 0x021FD574 */
    /* Requires manual decompilation - 211 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r5, r1, #0\n    add r4, r0, #0\n    add r6, r2, #0\n    add r7, r3, #0\n    cmp r5, #4\n    bls _021FD588\n    bl GF_AssertFail\n    cmp r5, #4\n    bls _021FD58E\n    b _021FD770\n    add r0, r5, r5\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _021FD59A: ; jump table\n    mov r0, #6\n    str r0, [sp]\n    mov r0, #0xf\n    mov r1, #0x2b\n    mov r2, #0\n    add r3, sp, #4\n    bl GfGfxLoader_GetScrnData\n    ldr r3, [sp, #4]\n    add r5, r0, #0\n    add r2, r3, #0\n    ldr r0, [r4]\n    ldr r3, [r3, #8]\n    mov r1, #5\n    add r2, #0xc\n    bl BG_LoadScreenTilemapData\n    ldr r0, [r4]\n    mov r1, #5\n    bl GetBgTilemapBuffer\n    ldr r1, [sp, #4]\n    ldr r1, [r1, #8]\n    bl DC_FlushRange\n    ldr r0, [r4]\n    mov r1, #5\n    add r2, r6, #0\n    bl ov15_021FD43C\n    ldr r0, [r4]\n    mov r1, #5\n    bl ScheduleBgTilemapBufferTransfer\n    add r0, r5, #0\n    bl Heap_Free\n    mov r0, #6\n    str r0, [sp]\n    mov r0, #0xf\n    mov r1, #0x27\n    mov r2, #0\n    add r3, sp, #4\n    bl GfGfxLoader_GetScrnData\n    ldr r3, [sp, #4]\n    add r5, r0, #0\n    add r2, r3, #0\n    ldr r0, [r4]\n    ldr r3, [r3, #8]\n    mov r1, #6\n    add r2, #0xc\n    bl BG_LoadScreenTilemapData\n    ldr r0, [r4]\n    mov r1, #6\n    bl ScheduleBgTilemapBufferTransfer\n    add r0, r5, #0\n    bl Heap_Free\n    mov r1, #0\n    add r0, r4, #0\n    add r2, r1, #0\n    add r3, r1, #0\n    bl ov15_0220005C\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #6\n    str r0, [sp]\n    mov r0, #0xf\n    mov r1, #0x2c\n    mov r2, #0\n    add r3, sp, #4\n    bl GfGfxLoader_GetScrnData\n    ldr r3, [sp, #4]\n    add r5, r0, #0\n    add r2, r3, #0\n    ldr r0, [r4]\n    ldr r3, [r3, #8]\n    mov r1, #5\n    add r2, #0xc\n    bl BG_LoadScreenTilemapData\n    ldr r0, [r4]\n    mov r1, #5\n    bl GetBgTilemapBuffer\n    ldr r1, [sp, #4]\n    ldr r1, [r1, #8]\n    bl DC_FlushRange\n    ldr r0, [r4]\n    mov r1, #5\n    add r2, r6, #0\n    add r3, r7, #0\n    bl ov15_021FD4C0\n    ldr r0, [r4]\n    mov r1, #5\n    bl ScheduleBgTilemapBufferTransfer\n    add r0, r5, #0\n    bl Heap_Free\n    mov r0, #6\n    str r0, [sp]\n    mov r0, #0xf\n    mov r1, #0x2a\n    mov r2, #0\n    add r3, sp, #4\n    bl GfGfxLoader_GetScrnData\n    ldr r3, [sp, #4]\n    add r5, r0, #0\n    add r2, r3, #0\n    ldr r0, [r4]\n    ldr r3, [r3, #8]\n    mov r1, #6\n    add r2, #0xc\n    bl BG_LoadScreenTilemapData\n    ldr r0, [r4]\n    mov r1, #6\n    bl ScheduleBgTilemapBufferTransfer\n    add r0, r5, #0\n    bl Heap_Free\n    add r0, r4, #0\n    bl ov15_02200294\n    add r0, r4, #0\n    bl ov15_021FA098\n    add r2, r0, #0\n    add r0, r4, #0\n    add r1, r6, #0\n    mov r3, #0\n    bl ov15_0220005C\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #6\n    str r0, [sp]\n    mov r0, #0xf\n    mov r1, #0x2d\n    mov r2, #0\n    add r3, sp, #4\n    bl GfGfxLoader_GetScrnData\n    ldr r3, [sp, #4]\n    add r5, r0, #0\n    add r2, r3, #0\n    ldr r0, [r4]\n    ldr r3, [r3, #8]\n    mov r1, #6\n    add r2, #0xc\n    bl BG_LoadScreenTilemapData\n    ldr r0, [r4]\n    mov r1, #6\n    bl ScheduleBgTilemapBufferTransfer\n    add r0, r5, #0\n    bl Heap_Free\n    ldr r0, [r4]\n    mov r1, #5\n    add r2, r6, #0\n    bl ov15_021FD43C\n    ldr r0, [r4]\n    mov r1, #5\n    bl ScheduleBgTilemapBufferTransfer\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #6\n    str r0, [sp]\n    mov r0, #0xf\n    mov r1, #0x34\n    mov r2, #0\n    add r3, sp, #4\n    bl GfGfxLoader_GetScrnData\n    ldr r3, [sp, #4]\n    add r5, r0, #0\n    add r2, r3, #0\n    ldr r0, [r4]\n    ldr r3, [r3, #8]\n    mov r1, #6\n    add r2, #0xc\n    bl BG_LoadScreenTilemapData\n    ldr r0, [r4]\n    mov r1, #6\n    bl ScheduleBgTilemapBufferTransfer\n    add r0, r5, #0\n    bl Heap_Free\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #6\n    str r0, [sp]\n    mov r0, #0xf\n    mov r1, #0x35\n    mov r2, #0\n    add r3, sp, #4\n    bl GfGfxLoader_GetScrnData\n    ldr r3, [sp, #4]\n    add r5, r0, #0\n    add r2, r3, #0\n    ldr r0, [r4]\n    ldr r3, [r3, #8]\n    mov r1, #6\n    add r2, #0xc\n    bl BG_LoadScreenTilemapData\n    ldr r0, [r4]\n    mov r1, #6\n    bl ScheduleBgTilemapBufferTransfer\n    add r0, r5, #0\n    bl Heap_Free\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov15_021FD774(void) {
    MenuInputStateMgr_SetState(0x8d);
}

void ov15_021FD788(void) {
    /* Original at 0x021FD788 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    cmp r1, #1\n    bne _021FD7C0\n    mov r1, #1\n    bl ov15_022004DC\n    add r0, r4, #0\n    mov r1, #0\n    bl ov15_021FF29C\n    add r0, r4, #0\n    add r0, #0x74\n    bl ScheduleWindowCopyToVram\n    mov r0, #0xa7\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl ManagedSprite_SetAnimationFrame\n    mov r0, #0xa7\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0x10\n    bl ManagedSprite_SetAnim\n    pop {r4, pc}\n    mov r1, #0\n    bl ov15_022004DC\n    add r0, r4, #0\n    bl ov15_021FF844\n    pop {r4, pc}"
    );
    #endif
}

void ov15_021FD7D0(void) {
    /* Original at 0x021FD7D0 */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5}\n    mov r4, #0x25\n    lsl r4, r4, #6\n    add r0, r0, r4\n    mov r4, #0\n    strb r4, [r0, #2]\n    strb r1, [r0]\n    ldrb r5, [r0, #1]\n    mov r4, #0xf\n    mov r1, #0xf\n    and r1, r2\n    bic r5, r4\n    orr r1, r5\n    strb r1, [r0, #1]\n    lsl r2, r3, #0x1c\n    ldrb r5, [r0, #1]\n    mov r1, #0xf0\n    lsr r2, r2, #0x18\n    bic r5, r1\n    orr r2, r5\n    strb r2, [r0, #1]\n    ldr r2, [sp, #8]\n    str r2, [r0, #4]\n    ldrb r2, [r0, #3]\n    bic r2, r4\n    strb r2, [r0, #3]\n    ldrb r2, [r0, #3]\n    bic r2, r1\n    strb r2, [r0, #3]\n    mov r0, #0x23\n    pop {r4, r5}\n    bx lr"
    );
    #endif
}

void ov15_021FD810(void) {
    /* Original at 0x021FD810 */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r2, #0\n    mov r2, #0x25\n    add r4, r0, #0\n    lsl r2, r2, #6\n    add r0, r4, r2\n    mov r5, #1\n    strb r5, [r0, #2]\n    strb r1, [r0]\n    str r3, [r0, #4]\n    ldrb r5, [r0, #3]\n    mov r3, #0xf\n    bic r5, r3\n    strb r5, [r0, #3]\n    ldrb r5, [r0, #3]\n    mov r3, #0xf0\n    bic r5, r3\n    strb r5, [r0, #3]\n    lsr r0, r2, #2\n    add r5, r4, r0\n    lsl r4, r1, #2\n    ldr r0, [r5, r4]\n    mov r1, #0\n    bl ManagedSprite_SetAnimationFrame\n    ldr r0, [r5, r4]\n    add r1, r6, #0\n    bl ManagedSprite_SetAnim\n    mov r0, #0x23\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov15_021FD850(void) {
    /* Original at 0x021FD850 */
    /* Requires manual decompilation - 114 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    mov r5, #0x25\n    lsl r5, r5, #6\n    add r4, r0, r5\n    ldrb r1, [r4, #2]\n    cmp r1, #1\n    bne _021FD874\n    ldrb r1, [r4]\n    lsl r1, r1, #2\n    add r1, r0, r1\n    lsr r0, r5, #2\n    ldr r0, [r1, r0]\n    bl ManagedSprite_IsAnimated\n    cmp r0, #0\n    bne _021FD936\n    ldr r0, [r4, #4]\n    pop {r3, r4, r5, pc}\n    ldrb r2, [r4, #3]\n    lsl r1, r2, #0x1c\n    lsr r1, r1, #0x1c\n    beq _021FD886\n    cmp r1, #1\n    beq _021FD8B6\n    cmp r1, #2\n    beq _021FD910\n    b _021FD936\n    ldrb r1, [r4]\n    lsl r1, r1, #2\n    add r1, r0, r1\n    lsr r0, r5, #2\n    ldr r0, [r1, r0]\n    ldrb r1, [r4, #1]\n    lsl r1, r1, #0x1c\n    lsr r1, r1, #0x1c\n    bl ManagedSprite_SetPaletteOverride\n    ldrb r2, [r4, #3]\n    mov r1, #0xf\n    add r0, r2, #0\n    bic r0, r1\n    lsl r1, r2, #0x1c\n    lsr r1, r1, #0x1c\n    add r1, r1, #1\n    lsl r1, r1, #0x18\n    lsr r2, r1, #0x18\n    mov r1, #0xf\n    and r1, r2\n    orr r0, r1\n    strb r0, [r4, #3]\n    b _021FD936\n    add r1, r2, #0\n    lsl r2, r2, #0x18\n    lsr r2, r2, #0x1c\n    add r2, r2, #1\n    lsl r2, r2, #0x18\n    lsr r2, r2, #0x18\n    mov r3, #0xf0\n    lsl r2, r2, #0x1c\n    bic r1, r3\n    lsr r2, r2, #0x18\n    orr r1, r2\n    strb r1, [r4, #3]\n    ldrb r1, [r4, #3]\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x1c\n    cmp r1, #4\n    bne _021FD936\n    ldrb r1, [r4]\n    lsl r1, r1, #2\n    add r1, r0, r1\n    lsr r0, r5, #2\n    ldr r0, [r1, r0]\n    ldrb r1, [r4, #1]\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x1c\n    bl ManagedSprite_SetPaletteOverride\n    ldrb r1, [r4, #3]\n    mov r0, #0xf0\n    bic r1, r0\n    strb r1, [r4, #3]\n    ldrb r2, [r4, #3]\n    mov r1, #0xf\n    add r0, r2, #0\n    bic r0, r1\n    lsl r1, r2, #0x1c\n    lsr r1, r1, #0x1c\n    add r1, r1, #1\n    lsl r1, r1, #0x18\n    lsr r2, r1, #0x18\n    mov r1, #0xf\n    and r1, r2\n    orr r0, r1\n    strb r0, [r4, #3]\n    b _021FD936\n    mov r1, #0xf0\n    add r0, r2, #0\n    bic r0, r1\n    lsl r1, r2, #0x18\n    lsr r1, r1, #0x1c\n    add r1, r1, #1\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    lsl r1, r1, #0x1c\n    lsr r1, r1, #0x18\n    orr r0, r1\n    strb r0, [r4, #3]\n    ldrb r0, [r4, #3]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x1c\n    cmp r0, #2\n    bne _021FD936\n    ldr r0, [r4, #4]\n    pop {r3, r4, r5, pc}\n    mov r0, #0x23\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov15_021FD93C(void) {
    /* Original at 0x021FD93C */
    /* Requires manual decompilation - 168 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    mov r0, #6\n    bl GF3dRender_InitSimpleManager\n    ldr r2, _021FDA94 ; =0x04000060\n    ldr r0, _021FDA98 ; =0xFFFFCFFF\n    ldrh r1, [r2]\n    and r1, r0\n    mov r0, #0x10\n    orr r0, r1\n    strh r0, [r2]\n    mov r0, #0\n    add r1, r0, #0\n    add r2, r0, #0\n    add r3, r0, #0\n    bl G3X_SetFog\n    mov r0, #0\n    ldr r2, _021FDA9C ; =0x00007FFF\n    add r1, r0, #0\n    add r3, r0, #0\n    str r0, [sp]\n    bl G3X_SetClearColor\n    ldr r0, _021FDAA0 ; =0x00003DEF\n    ldr r1, _021FDAA4 ; =0x0000294A\n    mov r2, #0\n    bl NNS_G3dGlbMaterialColorDiffAmb\n    ldr r0, _021FDAA0 ; =0x00003DEF\n    mov r2, #0\n    add r1, r0, #0\n    bl NNS_G3dGlbMaterialColorSpecEmi\n    mov r0, #0x1f\n    mov r1, #0\n    str r0, [sp]\n    mov r0, #0xf\n    mov r2, #3\n    add r3, r1, #0\n    str r1, [sp, #4]\n    bl NNS_G3dGlbPolygonAttr\n    ldr r2, _021FDA94 ; =0x04000060\n    ldr r0, _021FDA98 ; =0xFFFFCFFF\n    ldrh r1, [r2]\n    and r1, r0\n    mov r0, #0x20\n    orr r0, r1\n    strh r0, [r2]\n    ldr r0, _021FDAA8 ; =ov15_02201304\n    bl G3X_SetEdgeColorTable\n    mov r0, #0\n    add r1, r0, #0\n    bl SetBgPriority\n    mov r0, #1\n    add r1, r0, #0\n    bl GfGfx_EngineATogglePlanes\n    mov r0, #6\n    bl Camera_New\n    ldr r2, _021FDAAC ; =0x00000818\n    ldr r4, _021FDAB0 ; =ov15_02200500\n    str r0, [r5, r2]\n    add r0, r2, #0\n    add r0, #0xec\n    add r3, r5, r0\n    ldmia r4!, {r0, r1}\n    add r6, r3, #0\n    stmia r3!, {r0, r1}\n    ldr r0, [r4]\n    ldr r4, _021FDAB4 ; =ov15_0220053C\n    str r0, [r3]\n    add r0, r2, #0\n    add r0, #0xf8\n    add r3, r5, r0\n    ldmia r4!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r4!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r4]\n    str r0, [r3]\n    ldr r3, _021FDAB8 ; =0x0000091C\n    ldrb r0, [r5, r3]\n    add r1, r3, #0\n    sub r1, #0xc\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r0, [r5, r2]\n    add r2, r3, #0\n    str r0, [sp, #8]\n    add r3, r3, #2\n    sub r2, #8\n    ldrh r3, [r5, r3]\n    ldr r1, [r5, r1]\n    add r0, r6, #0\n    add r2, r5, r2\n    bl Camera_Init_FromTargetDistanceAndAngle\n    ldr r0, _021FDABC ; =0x00000934\n    ldr r3, _021FDAC0 ; =ov15_0220050C\n    add r2, r5, r0\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    str r0, [r2]\n    ldr r0, _021FDAC4 ; =0x00000808\n    add r0, r5, r0\n    bl ov15_021FDAD0\n    mov r1, #0x8d\n    lsl r1, r1, #2\n    ldr r1, [r5, r1]\n    ldr r0, _021FDAC4 ; =0x00000808\n    add r1, #0x64\n    ldrb r1, [r1]\n    add r0, r5, r0\n    mov r2, #7\n    add r1, r1, #1\n    bl ov15_021FDAF4\n    ldr r2, _021FDAAC ; =0x00000818\n    mov r0, #0x7b\n    ldr r1, _021FDAC8 ; =0x006A4000\n    ldr r2, [r5, r2]\n    lsl r0, r0, #0xc\n    bl Camera_SetPerspectiveClippingPlane\n    ldr r0, _021FDAAC ; =0x00000818\n    ldr r0, [r5, r0]\n    bl Camera_SetStaticPtr\n    mov r6, #1\n    ldr r7, _021FDA9C ; =0x00007FFF\n    mov r4, #0\n    lsl r6, r6, #0xc\n    mov r2, #0\n    add r0, r4, #0\n    add r1, r6, #0\n    add r3, r2, #0\n    bl NNS_G3dGlbLightVector\n    add r0, r4, #0\n    add r1, r7, #0\n    bl NNS_G3dGlbLightColor\n    add r4, r4, #1\n    cmp r4, #4\n    blo _021FDA58\n    add r0, r5, #0\n    bl ov15_021FDD70\n    mov r0, #1\n    add r1, r0, #0\n    bl GfGfx_EngineATogglePlanes\n    ldr r1, _021FDACC ; =0x04000008\n    mov r0, #3\n    ldrh r2, [r1]\n    bic r2, r0\n    mov r0, #2\n    orr r0, r2\n    strh r0, [r1]\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _021FDA94: .word 0x04000060\n    _021FDA98: .word 0xFFFFCFFF\n    _021FDA9C: .word 0x00007FFF\n    _021FDAA0: .word 0x00003DEF\n    _021FDAA4: .word 0x0000294A\n    _021FDAA8: .word ov15_02201304\n    _021FDAAC: .word 0x00000818\n    _021FDAB0: .word ov15_02200500\n    _021FDAB4: .word ov15_0220053C\n    _021FDAB8: .word 0x0000091C\n    _021FDABC: .word 0x00000934\n    _021FDAC0: .word ov15_0220050C\n    _021FDAC4: .word 0x00000808\n    _021FDAC8: .word 0x006A4000\n    _021FDACC: .word 0x04000008"
    );
    #endif
}

void ov15_021FDAD0(void) {
    /* Original at 0x021FDAD0 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "mov r2, #0x47\n    lsl r2, r2, #2\n    mov r3, #0\n    str r3, [r0, r2]\n    add r1, r2, #4\n    str r3, [r0, r1]\n    add r1, r2, #0\n    sub r3, r3, #1\n    add r1, #8\n    str r3, [r0, r1]\n    add r1, r2, #0\n    mov r3, #7\n    add r1, #0xc\n    strh r3, [r0, r1]\n    add r2, #0xe\n    strh r3, [r0, r2]\n    bx lr"
    );
    #endif
}

void ov15_021FDAF4(void) {
    /* Original at 0x021FDAF4 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5}\n    mov r4, #0x4a\n    lsl r4, r4, #2\n    add r3, r4, #2\n    ldrh r5, [r0, r4]\n    ldrh r3, [r0, r3]\n    cmp r5, r3\n    bne _021FDB22\n    add r3, r4, #0\n    sub r3, #8\n    ldr r5, [r0, r3]\n    add r3, r4, #0\n    sub r3, #0xc\n    str r5, [r0, r3]\n    add r3, r4, #0\n    sub r3, #8\n    str r1, [r0, r3]\n    mov r1, #0\n    strh r1, [r0, r4]\n    add r1, r4, #2\n    strh r2, [r0, r1]\n    pop {r4, r5}\n    bx lr\n    sub r2, r4, #4\n    str r1, [r0, r2]\n    pop {r4, r5}\n    bx lr"
    );
    #endif
}

void ov15_021FDB2C(void) {
    /* Original at 0x021FDB2C */
    /* Requires manual decompilation - 153 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    add r5, r0, #0\n    mov r0, #0x90\n    add r2, r1, #0\n    add r1, r0, #0\n    ldr r3, _021FDC64 ; =ov15_02200790\n    mul r2, r0\n    add r1, #0x98\n    add r4, r3, r2\n    ldrh r2, [r5, r1]\n    add r1, r0, #0\n    add r1, #0x9a\n    ldrh r1, [r5, r1]\n    cmp r2, r1\n    beq _021FDC28\n    add r1, r0, #0\n    add r1, #0x98\n    ldrh r1, [r5, r1]\n    add r2, r1, #1\n    add r1, r0, #0\n    add r1, #0x98\n    strh r2, [r5, r1]\n    add r1, r0, #0\n    add r1, #0x8c\n    add r0, #0x90\n    ldr r1, [r5, r1]\n    ldr r0, [r5, r0]\n    lsl r1, r1, #4\n    lsl r0, r0, #4\n    str r1, [sp, #8]\n    ldrh r7, [r4, r1]\n    ldrh r1, [r4, r0]\n    str r0, [sp, #4]\n    sub r0, r1, r7\n    bpl _021FDB76\n    neg r0, r0\n    cmp r1, r7\n    bhs _021FDB80\n    mov r1, #0\n    mvn r1, r1\n    b _021FDB82\n    mov r1, #1\n    mov r2, #2\n    lsl r2, r2, #0xe\n    cmp r0, r2\n    ble _021FDB94\n    lsl r2, r2, #1\n    sub r0, r2, r0\n    mov r2, #0\n    mvn r2, r2\n    mul r1, r2\n    cmp r1, #0\n    ldr r2, _021FDC68 ; =0x0000012A\n    ble _021FDBB0\n    ldrh r1, [r5, r2]\n    str r1, [sp]\n    sub r1, r2, #2\n    ldrh r6, [r5, r1]\n    ldr r1, [sp]\n    bl _s32_div_f\n    mul r0, r6\n    add r0, r7, r0\n    str r0, [sp, #0x14]\n    b _021FDBC4\n    ldrh r1, [r5, r2]\n    str r1, [sp]\n    sub r1, r2, #2\n    ldrh r6, [r5, r1]\n    ldr r1, [sp]\n    bl _s32_div_f\n    mul r0, r6\n    sub r0, r7, r0\n    str r0, [sp, #0x14]\n    ldr r0, [sp, #8]\n    ldr r1, [sp]\n    add r0, r4, r0\n    ldrh r7, [r0, #2]\n    ldr r0, [sp, #4]\n    add r0, r4, r0\n    ldrh r0, [r0, #2]\n    sub r0, r0, r7\n    bl _s32_div_f\n    mul r0, r6\n    add r0, r7, r0\n    str r0, [sp, #0x10]\n    ldr r0, [sp, #8]\n    ldr r1, [sp]\n    add r0, r4, r0\n    ldr r7, [r0, #8]\n    ldr r0, [sp, #4]\n    add r0, r4, r0\n    ldr r0, [r0, #8]\n    sub r0, r0, r7\n    bl _s32_div_f\n    mul r0, r6\n    add r0, r7, r0\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #8]\n    ldr r1, [sp]\n    add r0, r4, r0\n    ldr r7, [r0, #0xc]\n    ldr r0, [sp, #4]\n    add r0, r4, r0\n    ldr r0, [r0, #0xc]\n    sub r0, r0, r7\n    bl _s32_div_f\n    mul r0, r6\n    add r1, r7, r0\n    mov r0, #0x43\n    lsl r0, r0, #2\n    ldr r2, [sp, #0x14]\n    add r3, r0, #2\n    strh r2, [r5, r0]\n    ldr r2, [sp, #0x10]\n    strh r2, [r5, r3]\n    sub r3, r0, #4\n    ldr r2, [sp, #0xc]\n    add r0, #0x24\n    str r2, [r5, r3]\n    str r1, [r5, r0]\n    mov r1, #0x4a\n    lsl r1, r1, #2\n    add r0, r1, #2\n    ldrh r2, [r5, r1]\n    ldrh r0, [r5, r0]\n    cmp r2, r0\n    bne _021FDC60\n    sub r0, r1, #4\n    mov r2, #0\n    ldr r0, [r5, r0]\n    mvn r2, r2\n    cmp r0, r2\n    beq _021FDC60\n    add r0, r1, #0\n    sub r0, #8\n    ldr r3, [r5, r0]\n    add r0, r1, #0\n    sub r0, #0xc\n    str r3, [r5, r0]\n    sub r0, r1, #4\n    ldr r3, [r5, r0]\n    add r0, r1, #0\n    sub r0, #8\n    str r3, [r5, r0]\n    sub r0, r1, #4\n    str r2, [r5, r0]\n    mov r0, #0\n    strh r0, [r5, r1]\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    _021FDC64: .word ov15_02200790\n    _021FDC68: .word 0x0000012A"
    );
    #endif
}

void ov15_021FDC6C(void) {
    /* Original at 0x021FDC6C */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov15_021FDF20\n    ldr r0, _021FDC84 ; =0x00000818\n    ldr r0, [r4, r0]\n    bl Camera_Delete\n    bl GF3dRender_DeleteSimpleManager\n    pop {r4, pc}\n    nop\n    _021FDC84: .word 0x00000818"
    );
    #endif
}

void ov15_021FDC88(void) {
    /* Original at 0x021FDC88 */
    /* Requires manual decompilation - 85 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0x3c\n    ldr r4, _021FDD34 ; =ov15_022005CC\n    add r5, r0, #0\n    add r3, sp, #0x18\n    mov r2, #4\n    ldmia r4!, {r0, r1}\n    stmia r3!, {r0, r1}\n    sub r2, r2, #1\n    bne _021FDC94\n    ldr r0, [r4]\n    add r2, sp, #0xc\n    str r0, [r3]\n    ldr r3, _021FDD38 ; =ov15_022004F4\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    ldr r1, _021FDD3C ; =0x00000615\n    str r0, [r2]\n    ldr r0, _021FDD40 ; =0x00000808\n    ldrb r1, [r5, r1]\n    add r0, r5, r0\n    bl ov15_021FDB2C\n    ldr r3, _021FDD44 ; =0x0000091C\n    ldr r2, _021FDD48 ; =0x00000818\n    ldrb r0, [r5, r3]\n    add r1, r2, #0\n    add r3, r3, #2\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r0, [r5, r2]\n    add r1, #0xf8\n    str r0, [sp, #8]\n    add r0, r2, #0\n    add r0, #0xec\n    add r2, #0xfc\n    ldrh r3, [r5, r3]\n    ldr r1, [r5, r1]\n    add r0, r5, r0\n    add r2, r5, r2\n    bl Camera_Init_FromTargetDistanceAndAngle\n    bl Thunk_G3X_Reset\n    bl Camera_PushLookAtToNNSGlb\n    ldr r0, _021FDD4C ; =0x0000081C\n    add r4, r5, r0\n    add r0, r4, #0\n    add r0, #0xe4\n    ldr r0, [r0]\n    lsl r0, r0, #2\n    add r0, r4, r0\n    add r0, #0xa0\n    ldr r0, [r0]\n    bl ov15_021FDD54\n    add r0, r4, #0\n    add r0, #0xe4\n    ldr r0, [r0]\n    lsl r0, r0, #2\n    add r0, r4, r0\n    add r0, #0xc0\n    ldr r0, [r0]\n    bl ov15_021FDD54\n    add r0, r4, #0\n    add r0, #0xe0\n    ldr r0, [r0]\n    bl ov15_021FDD54\n    ldr r1, _021FDD50 ; =0x00000934\n    add r0, r4, #0\n    add r1, r5, r1\n    add r2, sp, #0x18\n    add r3, sp, #0xc\n    bl GF3dRender_DrawModel\n    mov r0, #0\n    add r1, r0, #0\n    bl RequestSwap3DBuffers\n    add sp, #0x3c\n    pop {r4, r5, pc}\n    _021FDD34: .word ov15_022005CC\n    _021FDD38: .word ov15_022004F4\n    _021FDD3C: .word 0x00000615\n    _021FDD40: .word 0x00000808\n    _021FDD44: .word 0x0000091C\n    _021FDD48: .word 0x00000818\n    _021FDD4C: .word 0x0000081C\n    _021FDD50: .word 0x00000934"
    );
    #endif
}

void ov15_021FDD54(void) {
    /* Original at 0x021FDD54 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #1\n    ldr r2, [r0]\n    lsl r1, r1, #0xc\n    add r2, r2, r1\n    ldr r1, [r0, #8]\n    ldrh r1, [r1, #4]\n    lsl r1, r1, #0xc\n    cmp r2, r1\n    bge _021FDD6A\n    str r2, [r0]\n    bx lr\n    mov r1, #0\n    str r1, [r0]\n    bx lr"
    );
    #endif
}

void ov15_021FDD70(void) {
    /* Original at 0x021FDD70 */
    /* Requires manual decompilation - 187 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x1c\n    add r7, r0, #0\n    mov r0, #0xf\n    mov r1, #6\n    bl NARC_New\n    str r0, [sp, #0x10]\n    ldr r0, _021FDF14 ; =0x00000808\n    mov r1, #6\n    add r0, r7, r0\n    mov r2, #4\n    bl HeapExp_FndInitAllocator\n    ldr r0, _021FDF18 ; =0x0000081C\n    add r4, r7, r0\n    ldr r0, _021FDF1C ; =0x00000615\n    ldrb r0, [r7, r0]\n    cmp r0, #0\n    bne _021FDDA8\n    mov r0, #0x39\n    str r0, [sp, #8]\n    mov r0, #0x41\n    str r0, [sp, #4]\n    mov r0, #0x49\n    mov r1, #0x37\n    str r0, [sp]\n    b _021FDDB6\n    mov r0, #0x4c\n    str r0, [sp, #8]\n    mov r0, #0x54\n    str r0, [sp, #4]\n    mov r0, #0x5c\n    mov r1, #0x4a\n    str r0, [sp]\n    ldr r0, [sp, #0x10]\n    mov r2, #6\n    bl NARC_AllocAndReadWholeMember\n    add r1, r4, #0\n    add r2, r4, #0\n    str r0, [r4, #0x58]\n    add r0, r4, #0\n    add r1, #0x54\n    add r2, #0x58\n    bl GF3dRender_InitObjFromHeader\n    ldr r0, [r4, #0x58]\n    bl NNS_G3dGetTex\n    str r0, [sp, #0xc]\n    ldr r0, [r4, #0x54]\n    mov r1, #1\n    mov r2, #0x40\n    bl NNSi_G3dModifyMatFlag\n    ldr r0, [r4, #0x54]\n    mov r1, #1\n    mov r2, #0x80\n    bl NNSi_G3dModifyMatFlag\n    mov r1, #1\n    ldr r0, [r4, #0x54]\n    lsl r2, r1, #9\n    bl NNSi_G3dModifyMatFlag\n    mov r1, #1\n    ldr r0, [r4, #0x54]\n    lsl r2, r1, #0xa\n    bl NNSi_G3dModifyMatFlag\n    mov r2, #0x3f\n    ldr r0, [r4, #0x54]\n    mov r1, #1\n    lsl r2, r2, #0x18\n    bl NNSi_G3dModifyPolygonAttrMask\n    mov r6, #0\n    add r5, r4, #0\n    ldr r1, [sp, #8]\n    ldr r0, [sp, #0x10]\n    add r1, r1, r6\n    mov r2, #6\n    bl NARC_AllocAndReadWholeMember\n    mov r1, #0\n    str r0, [r5, #0x5c]\n    bl NNS_G3dGetAnmByIdx\n    str r0, [sp, #0x14]\n    ldr r0, _021FDF14 ; =0x00000808\n    ldr r1, [sp, #0x14]\n    ldr r2, [r4, #0x54]\n    add r0, r7, r0\n    bl NNS_G3dAllocAnmObj\n    add r1, r5, #0\n    add r1, #0xa0\n    str r0, [r1]\n    add r0, r5, #0\n    add r0, #0xa0\n    ldr r0, [r0]\n    ldr r1, [sp, #0x14]\n    ldr r2, [r4, #0x54]\n    ldr r3, [sp, #0xc]\n    bl NNS_G3dAnmObjInit\n    ldr r1, [sp, #4]\n    ldr r0, [sp, #0x10]\n    add r1, r1, r6\n    mov r2, #6\n    bl NARC_AllocAndReadWholeMember\n    mov r1, #0\n    str r0, [r5, #0x7c]\n    bl NNS_G3dGetAnmByIdx\n    str r0, [sp, #0x18]\n    ldr r0, _021FDF14 ; =0x00000808\n    ldr r1, [sp, #0x18]\n    ldr r2, [r4, #0x54]\n    add r0, r7, r0\n    bl NNS_G3dAllocAnmObj\n    add r1, r5, #0\n    add r1, #0xc0\n    str r0, [r1]\n    add r0, r5, #0\n    add r0, #0xc0\n    ldr r0, [r0]\n    ldr r1, [sp, #0x18]\n    ldr r2, [r4, #0x54]\n    ldr r3, [sp, #0xc]\n    bl NNS_G3dAnmObjInit\n    add r6, r6, #1\n    add r5, r5, #4\n    cmp r6, #8\n    blo _021FDE0E\n    ldr r0, [sp, #0x10]\n    ldr r1, [sp]\n    mov r2, #6\n    bl NARC_AllocAndReadWholeMember\n    add r1, r4, #0\n    add r1, #0x9c\n    str r0, [r1]\n    add r0, r4, #0\n    add r0, #0x9c\n    ldr r0, [r0]\n    mov r1, #0\n    bl NNS_G3dGetAnmByIdx\n    add r5, r0, #0\n    ldr r0, _021FDF14 ; =0x00000808\n    ldr r2, [r4, #0x54]\n    add r0, r7, r0\n    add r1, r5, #0\n    bl NNS_G3dAllocAnmObj\n    add r1, r4, #0\n    add r1, #0xe0\n    str r0, [r1]\n    add r0, r4, #0\n    add r0, #0xe0\n    ldr r0, [r0]\n    ldr r2, [r4, #0x54]\n    ldr r3, [sp, #0xc]\n    add r1, r5, #0\n    bl NNS_G3dAnmObjInit\n    mov r0, #0x8d\n    lsl r0, r0, #2\n    ldr r0, [r7, r0]\n    add r0, #0x64\n    ldrb r1, [r0]\n    add r0, r4, #0\n    add r0, #0xe4\n    str r1, [r0]\n    add r1, r4, #0\n    add r1, #0xe4\n    ldr r1, [r1]\n    add r0, r4, #0\n    lsl r1, r1, #2\n    add r1, r4, r1\n    add r1, #0xa0\n    ldr r1, [r1]\n    bl NNS_G3dRenderObjAddAnmObj\n    add r1, r4, #0\n    add r1, #0xe4\n    ldr r1, [r1]\n    add r0, r4, #0\n    lsl r1, r1, #2\n    add r1, r4, r1\n    add r1, #0xc0\n    ldr r1, [r1]\n    bl NNS_G3dRenderObjAddAnmObj\n    add r0, r4, #0\n    add r4, #0xe0\n    ldr r1, [r4]\n    bl NNS_G3dRenderObjAddAnmObj\n    ldr r0, [sp, #0x10]\n    bl NARC_Delete\n    add sp, #0x1c\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _021FDF14: .word 0x00000808\n    _021FDF18: .word 0x0000081C\n    _021FDF1C: .word 0x00000615"
    );
    #endif
}

void ov15_021FDF20(void) {
    /* Original at 0x021FDF20 */
    /* Requires manual decompilation - 43 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r0, _021FDF80 ; =0x0000081C\n    ldr r7, _021FDF84 ; =0x00000808\n    add r0, r5, r0\n    str r0, [sp]\n    mov r6, #0\n    add r4, r0, #0\n    add r1, r4, #0\n    add r1, #0xa0\n    ldr r1, [r1]\n    add r0, r5, r7\n    bl NNS_G3dFreeAnmObj\n    add r1, r4, #0\n    add r1, #0xc0\n    ldr r1, [r1]\n    add r0, r5, r7\n    bl NNS_G3dFreeAnmObj\n    ldr r0, [r4, #0x5c]\n    bl Heap_Free\n    ldr r0, [r4, #0x7c]\n    bl Heap_Free\n    add r6, r6, #1\n    add r4, r4, #4\n    cmp r6, #8\n    blo _021FDF30\n    ldr r1, [sp]\n    ldr r0, _021FDF84 ; =0x00000808\n    add r1, #0xe0\n    ldr r1, [r1]\n    add r0, r5, r0\n    bl NNS_G3dFreeAnmObj\n    ldr r0, [sp]\n    add r0, #0x9c\n    ldr r0, [r0]\n    bl Heap_Free\n    ldr r0, [sp]\n    ldr r0, [r0, #0x58]\n    bl Heap_Free\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021FDF80: .word 0x0000081C\n    _021FDF84: .word 0x00000808"
    );
    #endif
}

void ov15_021FDF88(void) {
    /* Original at 0x021FDF88 */
    /* Requires manual decompilation - 71 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, _021FE01C ; =0x0000081C\n    add r4, r5, r0\n    add r1, r4, #0\n    add r1, #0xe4\n    ldr r1, [r1]\n    add r0, r4, #0\n    lsl r1, r1, #2\n    add r1, r4, r1\n    add r1, #0xc0\n    ldr r1, [r1]\n    bl NNS_G3dRenderObjRemoveAnmObj\n    add r1, r4, #0\n    add r1, #0xe4\n    ldr r1, [r1]\n    add r0, r4, #0\n    lsl r1, r1, #2\n    add r1, r4, r1\n    add r1, #0xa0\n    ldr r1, [r1]\n    bl NNS_G3dRenderObjRemoveAnmObj\n    mov r0, #0x8d\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    add r0, #0x64\n    ldrb r1, [r0]\n    add r0, r4, #0\n    add r0, #0xe4\n    str r1, [r0]\n    add r1, r4, #0\n    add r1, #0xe4\n    ldr r1, [r1]\n    mov r0, #0\n    lsl r1, r1, #2\n    add r1, r4, r1\n    add r1, #0xa0\n    ldr r1, [r1]\n    str r0, [r1]\n    add r1, r4, #0\n    add r1, #0xe4\n    ldr r1, [r1]\n    lsl r1, r1, #2\n    add r1, r4, r1\n    add r1, #0xc0\n    ldr r1, [r1]\n    str r0, [r1]\n    add r1, r4, #0\n    add r1, #0xe0\n    ldr r1, [r1]\n    str r0, [r1]\n    add r1, r4, #0\n    add r1, #0xe4\n    ldr r1, [r1]\n    add r0, r4, #0\n    lsl r1, r1, #2\n    add r1, r4, r1\n    add r1, #0xa0\n    ldr r1, [r1]\n    bl NNS_G3dRenderObjAddAnmObj\n    add r1, r4, #0\n    add r1, #0xe4\n    ldr r1, [r1]\n    add r0, r4, #0\n    lsl r1, r1, #2\n    add r1, r4, r1\n    add r1, #0xc0\n    ldr r1, [r1]\n    bl NNS_G3dRenderObjAddAnmObj\n    pop {r3, r4, r5, pc}\n    _021FE01C: .word 0x0000081C"
    );
    #endif
}

void ov15_021FE020(void) {
    /* Original at 0x021FE020 */
    /* Requires manual decompilation - 143 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0x14\n    add r4, r0, #0\n    mov r0, #0x12\n    str r0, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    mov r0, #6\n    str r0, [sp, #8]\n    mov r0, #4\n    str r0, [sp, #0xc]\n    mov r2, #1\n    str r2, [sp, #0x10]\n    ldr r0, [r4]\n    add r1, r4, #4\n    mov r3, #0\n    bl AddWindowParameterized\n    mov r0, #0xd\n    str r0, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    mov r0, #4\n    str r0, [sp, #8]\n    str r0, [sp, #0xc]\n    mov r0, #0xc1\n    str r0, [sp, #0x10]\n    add r1, r4, #0\n    ldr r0, [r4]\n    add r1, #0x14\n    mov r2, #1\n    mov r3, #0\n    bl AddWindowParameterized\n    mov r1, #1\n    str r1, [sp]\n    mov r0, #0x1b\n    str r0, [sp, #4]\n    mov r3, #2\n    str r3, [sp, #8]\n    mov r0, #0xb\n    str r0, [sp, #0xc]\n    str r1, [sp, #0x10]\n    add r1, r4, #0\n    ldr r0, [r4]\n    add r1, #0x24\n    mov r2, #4\n    bl AddWindowParameterized\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #0x1b\n    str r0, [sp, #4]\n    mov r2, #4\n    add r1, r4, #0\n    str r2, [sp, #8]\n    mov r0, #0xb\n    str r0, [sp, #0xc]\n    mov r0, #0x53\n    str r0, [sp, #0x10]\n    ldr r0, [r4]\n    add r1, #0x34\n    mov r3, #2\n    bl AddWindowParameterized\n    mov r0, #0xd\n    str r0, [sp]\n    mov r0, #0xc\n    str r0, [sp, #4]\n    mov r0, #4\n    str r0, [sp, #8]\n    str r0, [sp, #0xc]\n    mov r0, #0xdb\n    str r0, [sp, #0x10]\n    add r1, r4, #0\n    ldr r0, [r4]\n    add r1, #0x44\n    mov r2, #1\n    mov r3, #0x13\n    bl AddWindowParameterized\n    mov r0, #0xc\n    str r0, [sp]\n    mov r0, #0xb\n    str r0, [sp, #4]\n    mov r0, #4\n    str r0, [sp, #8]\n    str r0, [sp, #0xc]\n    ldr r0, _021FE150 ; =0x0000012B\n    add r1, r4, #0\n    str r0, [sp, #0x10]\n    mov r2, #1\n    ldr r0, [r4]\n    add r1, #0x54\n    add r3, r2, #0\n    bl AddWindowParameterized\n    mov r0, #0x15\n    str r0, [sp]\n    mov r0, #7\n    str r0, [sp, #4]\n    mov r0, #2\n    str r0, [sp, #8]\n    mov r0, #0xb\n    str r0, [sp, #0xc]\n    mov r0, #0x37\n    str r0, [sp, #0x10]\n    add r1, r4, #0\n    ldr r0, [r4]\n    add r1, #0x64\n    mov r2, #4\n    mov r3, #0xa\n    bl AddWindowParameterized\n    add r0, r4, #0\n    add r0, #0x64\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r0, #0x15\n    str r0, [sp]\n    mov r0, #7\n    str r0, [sp, #4]\n    mov r0, #2\n    str r0, [sp, #8]\n    mov r0, #0xb\n    str r0, [sp, #0xc]\n    mov r0, #0x45\n    str r0, [sp, #0x10]\n    add r1, r4, #0\n    ldr r0, [r4]\n    add r1, #0x74\n    mov r2, #4\n    mov r3, #0x18\n    bl AddWindowParameterized\n    add r0, r4, #0\n    add r0, #0x74\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r2, #0\n    add r1, r2, #0\n    add r0, r4, #0\n    add r0, #0xb4\n    add r2, r2, #1\n    add r4, #0x10\n    str r1, [r0]\n    cmp r2, #0x18\n    blt _021FE13E\n    add sp, #0x14\n    pop {r3, r4, pc}\n    _021FE150: .word 0x0000012B"
    );
    #endif
}

void ov15_021FE154(void) {
    /* Original at 0x021FE154 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r0, #0\n    mov r5, #0\n    add r4, r6, #4\n    lsl r0, r5, #4\n    add r0, r4, r0\n    bl RemoveWindow\n    add r0, r5, #1\n    lsl r0, r0, #0x10\n    lsr r5, r0, #0x10\n    cmp r5, #8\n    blo _021FE15C\n    add r0, r6, #0\n    bl ov15_021FE3E0\n    add r0, r6, #0\n    bl ov15_021FE1D0\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov15_021FE17C(void) {
    /* Original at 0x021FE17C */
    /* Requires manual decompilation - 40 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r7, r0, #0\n    add r0, #0xb4\n    ldr r0, [r0]\n    cmp r0, #0\n    bne _021FE1C8\n    add r5, r7, #0\n    ldr r4, _021FE1CC ; =ov15_02200908\n    mov r6, #0\n    add r5, #0xb4\n    ldr r0, [r4, #4]\n    add r1, r5, #0\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #0xb\n    str r0, [sp, #4]\n    mov r0, #4\n    str r0, [sp, #8]\n    mov r0, #0xb\n    str r0, [sp, #0xc]\n    ldr r0, [r4, #8]\n    mov r2, #4\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp, #0x10]\n    ldr r3, [r4]\n    ldr r0, [r7]\n    lsl r3, r3, #0x18\n    lsr r3, r3, #0x18\n    bl AddWindowParameterized\n    add r6, r6, #1\n    add r4, #0xc\n    add r5, #0x10\n    cmp r6, #0xc\n    blt _021FE192\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    _021FE1CC: .word ov15_02200908"
    );
    #endif
}

void ov15_021FE1D0(void) {
    /* Original at 0x021FE1D0 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r0, #0xb4\n    ldr r0, [r0]\n    cmp r0, #0\n    beq _021FE200\n    mov r6, #0\n    add r4, r5, #0\n    add r4, #0xb4\n    add r7, r6, #0\n    add r0, r4, #0\n    bl ClearWindowTilemapAndScheduleTransfer\n    add r0, r4, #0\n    bl RemoveWindow\n    add r0, r5, #0\n    add r0, #0xb4\n    add r6, r6, #1\n    str r7, [r0]\n    add r4, #0x10\n    add r5, #0x10\n    cmp r6, #0xc\n    blt _021FE1E4\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov15_021FE204(void) {
    /* Original at 0x021FE204 */
    /* Requires manual decompilation - 216 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x20\n    mov r3, #0x5d\n    lsl r3, r3, #2\n    str r0, [sp, #0x14]\n    ldr r0, [r0, r3]\n    cmp r0, #0\n    beq _021FE216\n    b _021FE3BC\n    mov r0, #7\n    str r0, [sp]\n    mov r0, #0xb\n    str r0, [sp, #4]\n    mov r2, #4\n    str r2, [sp, #8]\n    str r0, [sp, #0xc]\n    ldr r0, _021FE3C0 ; =0x000002CF\n    ldr r1, [sp, #0x14]\n    str r0, [sp, #0x10]\n    ldr r0, [sp, #0x14]\n    add r1, r1, r3\n    ldr r0, [r0]\n    mov r3, #0xc\n    bl AddWindowParameterized\n    mov r1, #0x5d\n    ldr r0, [sp, #0x14]\n    lsl r1, r1, #2\n    add r0, r0, r1\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    ldr r0, [sp, #0x14]\n    ldr r4, _021FE3C4 ; =0x0000031B\n    str r0, [sp, #0x18]\n    add r0, #0xb4\n    ldr r5, _021FE3C8 ; =ov15_022008E8\n    mov r6, #0\n    str r0, [sp, #0x18]\n    add r0, r6, #0\n    add r0, #0xd\n    lsl r7, r0, #4\n    ldr r0, [r5, #4]\n    ldr r1, [sp, #0x18]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #0xa\n    str r0, [sp, #4]\n    mov r0, #2\n    str r0, [sp, #8]\n    mov r0, #0xb\n    str r0, [sp, #0xc]\n    lsl r0, r4, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp, #0x10]\n    ldr r0, [sp, #0x14]\n    ldr r3, [r5]\n    ldr r0, [r0]\n    lsl r3, r3, #0x18\n    add r1, r1, r7\n    mov r2, #4\n    lsr r3, r3, #0x18\n    bl AddWindowParameterized\n    ldr r0, [sp, #0x18]\n    mov r1, #0\n    add r0, r0, r7\n    bl FillWindowPixelBuffer\n    add r6, r6, #1\n    add r4, #0x14\n    add r5, #8\n    cmp r6, #4\n    blt _021FE252\n    ldr r0, [sp, #0x14]\n    ldr r4, _021FE3CC ; =0x000002FB\n    str r0, [sp, #0x1c]\n    add r0, #0xb4\n    ldr r5, _021FE3D0 ; =ov15_022008D0\n    mov r6, #0\n    str r0, [sp, #0x1c]\n    add r0, r6, #0\n    add r0, #0x11\n    lsl r7, r0, #4\n    ldr r0, [r5, #4]\n    ldr r1, [sp, #0x1c]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    mov r0, #3\n    str r0, [sp, #8]\n    mov r0, #0xb\n    str r0, [sp, #0xc]\n    lsl r0, r4, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp, #0x10]\n    ldr r0, [sp, #0x14]\n    ldr r3, [r5]\n    ldr r0, [r0]\n    lsl r3, r3, #0x18\n    add r1, r1, r7\n    mov r2, #4\n    lsr r3, r3, #0x18\n    bl AddWindowParameterized\n    ldr r0, [sp, #0x1c]\n    mov r1, #0\n    add r0, r0, r7\n    bl FillWindowPixelBuffer\n    add r6, r6, #1\n    add r4, r4, #6\n    add r5, #8\n    cmp r6, #3\n    blt _021FE2A8\n    mov r0, #0x15\n    str r0, [sp]\n    mov r0, #7\n    str r0, [sp, #4]\n    mov r0, #2\n    str r0, [sp, #8]\n    mov r0, #0xb\n    str r0, [sp, #0xc]\n    ldr r0, _021FE3D4 ; =0x0000030D\n    mov r2, #0x7d\n    str r0, [sp, #0x10]\n    ldr r0, [sp, #0x14]\n    ldr r1, [sp, #0x14]\n    lsl r2, r2, #2\n    add r1, r1, r2\n    ldr r0, [r0]\n    mov r2, #4\n    mov r3, #0xe\n    bl AddWindowParameterized\n    mov r1, #0x7d\n    ldr r0, [sp, #0x14]\n    lsl r1, r1, #2\n    add r0, r0, r1\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #0x12\n    str r0, [sp, #4]\n    mov r2, #4\n    mov r4, #0x81\n    str r2, [sp, #8]\n    mov r3, #0xb\n    ldr r0, _021FE3C4 ; =0x0000031B\n    str r3, [sp, #0xc]\n    str r0, [sp, #0x10]\n    ldr r0, [sp, #0x14]\n    ldr r1, [sp, #0x14]\n    lsl r4, r4, #2\n    ldr r0, [r0]\n    add r1, r1, r4\n    bl AddWindowParameterized\n    ldr r0, [sp, #0x14]\n    add r1, r4, #0\n    add r0, r0, r1\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r3, #0\n    str r3, [sp]\n    mov r0, #9\n    str r0, [sp, #4]\n    mov r2, #4\n    str r2, [sp, #8]\n    mov r0, #0xb\n    str r0, [sp, #0xc]\n    ldr r0, _021FE3D8 ; =0x00000363\n    ldr r1, [sp, #0x14]\n    str r0, [sp, #0x10]\n    ldr r0, [sp, #0x14]\n    add r4, #0x10\n    ldr r0, [r0]\n    add r1, r1, r4\n    bl AddWindowParameterized\n    mov r1, #0x85\n    ldr r0, [sp, #0x14]\n    lsl r1, r1, #2\n    add r0, r0, r1\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r0, #0xe\n    str r0, [sp]\n    mov r0, #8\n    str r0, [sp, #4]\n    mov r0, #3\n    str r0, [sp, #8]\n    mov r0, #0xb\n    str r0, [sp, #0xc]\n    ldr r0, _021FE3DC ; =0x00000387\n    mov r2, #0x89\n    str r0, [sp, #0x10]\n    ldr r0, [sp, #0x14]\n    ldr r1, [sp, #0x14]\n    lsl r2, r2, #2\n    add r1, r1, r2\n    ldr r0, [r0]\n    mov r2, #4\n    mov r3, #0x18\n    bl AddWindowParameterized\n    mov r1, #0x89\n    ldr r0, [sp, #0x14]\n    lsl r1, r1, #2\n    add r0, r0, r1\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    add sp, #0x20\n    pop {r3, r4, r5, r6, r7, pc}\n    _021FE3C0: .word 0x000002CF\n    _021FE3C4: .word 0x0000031B\n    _021FE3C8: .word ov15_022008E8\n    _021FE3CC: .word 0x000002FB\n    _021FE3D0: .word ov15_022008D0\n    _021FE3D4: .word 0x0000030D\n    _021FE3D8: .word 0x00000363\n    _021FE3DC: .word 0x00000387"
    );
    #endif
}

void ov15_021FE3E0(void) {
    /* Original at 0x021FE3E0 */
    /* Requires manual decompilation - 104 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    mov r1, #0x5d\n    lsl r1, r1, #2\n    str r0, [sp]\n    ldr r0, [r0, r1]\n    cmp r0, #0\n    beq _021FE4C6\n    ldr r5, [sp]\n    mov r4, #0\n    add r6, r5, #0\n    add r6, #0xb4\n    add r0, r4, #0\n    add r0, #0x11\n    lsl r7, r0, #4\n    add r0, r6, r7\n    bl ClearWindowTilemapAndScheduleTransfer\n    add r0, r6, r7\n    bl RemoveWindow\n    mov r0, #0x71\n    mov r1, #0\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    add r4, r4, #1\n    add r5, #0x10\n    cmp r4, #3\n    blt _021FE3F6\n    add r1, r0, #0\n    ldr r0, [sp]\n    add r1, #0x60\n    add r0, r0, r1\n    bl ClearWindowTilemapAndScheduleTransfer\n    mov r1, #0x89\n    ldr r0, [sp]\n    lsl r1, r1, #2\n    add r0, r0, r1\n    bl RemoveWindow\n    mov r1, #0x89\n    ldr r0, [sp]\n    mov r2, #0\n    lsl r1, r1, #2\n    str r2, [r0, r1]\n    sub r1, #0x10\n    add r0, r0, r1\n    bl RemoveWindow\n    mov r1, #0x85\n    ldr r0, [sp]\n    mov r2, #0\n    lsl r1, r1, #2\n    str r2, [r0, r1]\n    sub r1, #0x10\n    add r0, r0, r1\n    bl RemoveWindow\n    mov r1, #0x81\n    ldr r0, [sp]\n    mov r2, #0\n    lsl r1, r1, #2\n    str r2, [r0, r1]\n    sub r1, #0x10\n    add r0, r0, r1\n    bl ClearWindowTilemapAndScheduleTransfer\n    mov r1, #0x7d\n    ldr r0, [sp]\n    lsl r1, r1, #2\n    add r0, r0, r1\n    bl RemoveWindow\n    ldr r0, [sp]\n    mov r1, #0x7d\n    add r6, r0, #0\n    mov r5, #0\n    lsl r1, r1, #2\n    str r5, [r0, r1]\n    add r4, r0, #0\n    add r6, #0xb4\n    add r0, r5, #0\n    add r0, #0xd\n    lsl r7, r0, #4\n    add r0, r6, r7\n    bl ClearWindowTilemapAndScheduleTransfer\n    add r0, r6, r7\n    bl RemoveWindow\n    mov r0, #0x61\n    mov r1, #0\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    add r5, r5, #1\n    add r4, #0x10\n    cmp r5, #4\n    blt _021FE482\n    add r1, r0, #0\n    ldr r0, [sp]\n    sub r1, #0x10\n    add r0, r0, r1\n    bl ClearWindowTilemapAndScheduleTransfer\n    mov r1, #0x5d\n    ldr r0, [sp]\n    lsl r1, r1, #2\n    add r0, r0, r1\n    bl RemoveWindow\n    mov r1, #0x5d\n    ldr r0, [sp]\n    mov r2, #0\n    lsl r1, r1, #2\n    str r2, [r0, r1]\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov15_021FE4C8(void) {
    /* Original at 0x021FE4C8 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    mov r0, #1\n    mov r1, #0x1b\n    mov r2, #0xe1\n    mov r3, #6\n    bl NewMsgDataFromNarc\n    ldr r7, _021FE500 ; =0x000005F4\n    add r6, r0, #0\n    mov r4, #0\n    add r0, r6, #0\n    add r1, r4, #0\n    bl NewString_ReadMsgData\n    lsl r1, r4, #2\n    add r1, r5, r1\n    str r0, [r1, r7]\n    add r0, r4, #1\n    lsl r0, r0, #0x10\n    lsr r4, r0, #0x10\n    cmp r4, #8\n    blo _021FE4DE\n    add r0, r6, #0\n    bl DestroyMsgData\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021FE500: .word 0x000005F4"
    );
    #endif
}

void ov15_021FE504(void) {
    /* Original at 0x021FE504 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    ldr r6, _021FE524 ; =0x000005F4\n    add r5, r0, #0\n    mov r4, #0\n    lsl r0, r4, #2\n    add r0, r5, r0\n    ldr r0, [r0, r6]\n    bl String_Delete\n    add r0, r4, #1\n    lsl r0, r0, #0x10\n    lsr r4, r0, #0x10\n    cmp r4, #8\n    blo _021FE50C\n    pop {r4, r5, r6, pc}\n    nop\n    _021FE524: .word 0x000005F4"
    );
    #endif
}

void ov15_021FE528(void) {
    /* Original at 0x021FE528 */
    /* Requires manual decompilation - 43 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    mov r4, #0\n    mov r6, #0xd\n    mov r7, #1\n    str r6, [sp]\n    str r7, [sp, #4]\n    add r2, r4, #0\n    add r2, #0xcd\n    lsl r2, r2, #0x10\n    lsl r3, r4, #0x18\n    str r7, [sp, #8]\n    mov r0, #4\n    str r0, [sp, #0xc]\n    ldr r0, [r5]\n    mov r1, #3\n    lsr r2, r2, #0x10\n    lsr r3, r3, #0x18\n    bl FillBgTilemapRect\n    mov r0, #0xe\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    add r2, r4, #0\n    str r0, [sp, #8]\n    mov r0, #4\n    add r2, #0xf1\n    str r0, [sp, #0xc]\n    lsl r2, r2, #0x10\n    lsl r3, r4, #0x18\n    ldr r0, [r5]\n    mov r1, #3\n    lsr r2, r2, #0x10\n    lsr r3, r3, #0x18\n    bl FillBgTilemapRect\n    add r0, r4, #1\n    lsl r0, r0, #0x10\n    lsr r4, r0, #0x10\n    cmp r4, #0xc\n    blo _021FE534\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov15_021FE584(void) {
    /* Original at 0x021FE584 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    lsl r1, r1, #0x10\n    add r4, r2, #0\n    lsr r1, r1, #0x10\n    mov r2, #0\n    add r5, r0, #0\n    bl ov15_021F9D60\n    add r2, r0, #0\n    mov r0, #0xbd\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    add r1, r4, #0\n    bl BufferItemName\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov15_021FE5A4(void) {
    /* Original at 0x021FE5A4 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    lsl r1, r1, #0x10\n    add r4, r2, #0\n    lsr r1, r1, #0x10\n    mov r2, #0\n    add r5, r0, #0\n    bl ov15_021F9D60\n    add r2, r0, #0\n    mov r0, #0xbd\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    add r1, r4, #0\n    bl BufferItemNamePlural\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov15_021FE5C4(void) {
    /* Original at 0x021FE5C4 */
    /* Requires manual decompilation - 39 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    ldr r0, _021FE618 ; =0x0000FFFF\n    add r6, r1, #0\n    cmp r6, r0\n    beq _021FE5E6\n    mov r0, #0x82\n    mov r1, #6\n    bl String_New\n    add r1, r6, #0\n    mov r2, #6\n    add r4, r0, #0\n    bl GetItemDescIntoString\n    b _021FE5F4\n    mov r0, #0x2f\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    mov r1, #0x61\n    bl NewString_ReadMsgData\n    add r4, r0, #0\n    mov r1, #0\n    str r1, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _021FE61C ; =0x000F0E00\n    add r2, r4, #0\n    str r0, [sp, #8]\n    add r0, r5, #4\n    mov r3, #0x14\n    str r1, [sp, #0xc]\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r4, #0\n    bl String_Delete\n    add sp, #0x10\n    pop {r4, r5, r6, pc}\n    nop\n    _021FE618: .word 0x0000FFFF\n    _021FE61C: .word 0x000F0E00"
    );
    #endif
}

void ov15_021FE620(void) {
    /* Original at 0x021FE620 */
    /* Requires manual decompilation - 253 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r5, r0, #0\n    add r4, r5, #0\n    add r0, r1, #0\n    add r4, #0x14\n    bl TMHMGetMove\n    str r0, [sp, #0x10]\n    mov r0, #0x2f\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    mov r1, #0x65\n    bl NewString_ReadMsgData\n    mov r1, #0\n    add r6, r0, #0\n    str r1, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _021FE860 ; =0x000F0E00\n    add r2, r6, #0\n    str r0, [sp, #8]\n    add r0, r4, #0\n    add r3, r1, #0\n    str r1, [sp, #0xc]\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r6, #0\n    bl String_Delete\n    mov r0, #0x2f\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    mov r1, #0x59\n    bl NewString_ReadMsgData\n    add r6, r0, #0\n    mov r0, #0x10\n    str r0, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _021FE860 ; =0x000F0E00\n    mov r1, #0\n    str r0, [sp, #8]\n    add r0, r4, #0\n    add r2, r6, #0\n    add r3, r1, #0\n    str r1, [sp, #0xc]\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r6, #0\n    bl String_Delete\n    mov r0, #0x2f\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    mov r1, #0x5c\n    bl NewString_ReadMsgData\n    add r6, r0, #0\n    mov r1, #0\n    str r1, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _021FE860 ; =0x000F0E00\n    add r2, r6, #0\n    str r0, [sp, #8]\n    add r0, r4, #0\n    mov r3, #0x48\n    str r1, [sp, #0xc]\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r6, #0\n    bl String_Delete\n    mov r0, #0x2f\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    mov r1, #0x5a\n    bl NewString_ReadMsgData\n    add r6, r0, #0\n    mov r1, #0\n    str r1, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _021FE860 ; =0x000F0E00\n    add r2, r6, #0\n    str r0, [sp, #8]\n    add r0, r4, #0\n    mov r3, #0xa8\n    str r1, [sp, #0xc]\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r6, #0\n    bl String_Delete\n    mov r0, #0x2f\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    mov r1, #0x5b\n    bl NewString_ReadMsgData\n    add r6, r0, #0\n    mov r0, #0x10\n    str r0, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _021FE860 ; =0x000F0E00\n    mov r1, #0\n    str r0, [sp, #8]\n    add r0, r4, #0\n    add r2, r6, #0\n    mov r3, #0xa8\n    str r1, [sp, #0xc]\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r6, #0\n    bl String_Delete\n    ldr r0, [sp, #0x10]\n    mov r1, #0\n    bl GetMoveMaxPP\n    add r7, r0, #0\n    mov r0, #0x2f\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    mov r1, #0x5d\n    bl NewString_ReadMsgData\n    add r6, r0, #0\n    mov r0, #1\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #0xbd\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #0\n    add r2, r7, #0\n    mov r3, #2\n    bl BufferIntegerAsString\n    mov r0, #0xbd\n    ldr r1, _021FE864 ; =0x000005E4\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    ldr r1, [r5, r1]\n    add r2, r6, #0\n    bl StringExpandPlaceholders\n    add r0, r6, #0\n    bl String_Delete\n    mov r0, #0x10\n    str r0, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _021FE860 ; =0x000F0E00\n    mov r1, #0\n    str r0, [sp, #8]\n    ldr r2, _021FE864 ; =0x000005E4\n    str r1, [sp, #0xc]\n    ldr r2, [r5, r2]\n    add r0, r4, #0\n    mov r3, #0x30\n    bl AddTextPrinterParameterizedWithColor\n    ldr r0, [sp, #0x10]\n    mov r1, #2\n    bl GetMoveAttr\n    lsl r0, r0, #0x10\n    lsr r7, r0, #0x10\n    cmp r7, #1\n    bhi _021FE790\n    mov r0, #0x2f\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    mov r1, #0x19\n    bl NewString_ReadMsgData\n    b _021FE79C\n    mov r0, #0x2f\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    mov r1, #0x5e\n    bl NewString_ReadMsgData\n    mov r1, #0\n    add r6, r0, #0\n    str r1, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #0xbd\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    add r2, r7, #0\n    mov r3, #3\n    bl BufferIntegerAsString\n    mov r0, #0xbd\n    ldr r1, _021FE864 ; =0x000005E4\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    ldr r1, [r5, r1]\n    add r2, r6, #0\n    bl StringExpandPlaceholders\n    add r0, r6, #0\n    bl String_Delete\n    mov r1, #0\n    str r1, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _021FE860 ; =0x000F0E00\n    ldr r2, _021FE864 ; =0x000005E4\n    str r0, [sp, #8]\n    str r1, [sp, #0xc]\n    ldr r2, [r5, r2]\n    add r0, r4, #0\n    mov r3, #0xe8\n    bl AddTextPrinterParameterizedWithColor\n    ldr r0, [sp, #0x10]\n    mov r1, #4\n    bl GetMoveAttr\n    lsl r0, r0, #0x10\n    lsr r7, r0, #0x10\n    bne _021FE800\n    mov r0, #0x2f\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    mov r1, #0x19\n    bl NewString_ReadMsgData\n    b _021FE80C\n    mov r0, #0x2f\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    mov r1, #0x5e\n    bl NewString_ReadMsgData\n    mov r1, #0\n    add r6, r0, #0\n    str r1, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #0xbd\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    add r2, r7, #0\n    mov r3, #3\n    bl BufferIntegerAsString\n    mov r0, #0xbd\n    ldr r1, _021FE864 ; =0x000005E4\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    ldr r1, [r5, r1]\n    add r2, r6, #0\n    bl StringExpandPlaceholders\n    add r0, r6, #0\n    bl String_Delete\n    mov r0, #0x10\n    str r0, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _021FE860 ; =0x000F0E00\n    mov r1, #0\n    str r0, [sp, #8]\n    ldr r2, _021FE864 ; =0x000005E4\n    str r1, [sp, #0xc]\n    ldr r2, [r5, r2]\n    add r0, r4, #0\n    mov r3, #0xe8\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r4, #0\n    bl ScheduleWindowCopyToVram\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    _021FE860: .word 0x000F0E00\n    _021FE864: .word 0x000005E4"
    );
    #endif
}

void ov15_021FE868(void) {
    ClearWindowTilemapAndScheduleTransfer();
}

void ov15_021FE874(void) {
    /* Original at 0x021FE874 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0x2f\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #0x27\n    bl NewString_ReadMsgData\n    ldr r1, _021FE89C ; =0x000005E8\n    str r0, [r4, r1]\n    mov r0, #0x2f\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #0x26\n    bl NewString_ReadMsgData\n    ldr r1, _021FE8A0 ; =0x000005EC\n    str r0, [r4, r1]\n    pop {r4, pc}\n    nop\n    _021FE89C: .word 0x000005E8\n    _021FE8A0: .word 0x000005EC"
    );
    #endif
}

void ov15_021FE8A4(void) {
    /* Original at 0x021FE8A4 */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _021FE8BC ; =0x000005E8\n    ldr r0, [r4, r0]\n    bl String_Delete\n    ldr r0, _021FE8C0 ; =0x000005EC\n    ldr r0, [r4, r0]\n    bl String_Delete\n    pop {r4, pc}\n    nop\n    _021FE8BC: .word 0x000005E8\n    _021FE8C0: .word 0x000005EC"
    );
    #endif
}

void ov15_021FE8C4(void) {
    /* Original at 0x021FE8C4 */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #8\n    add r5, r0, #0\n    add r6, r1, #0\n    mov r0, #0xa\n    mov r1, #6\n    bl String_New\n    mov r1, #0\n    add r4, r0, #0\n    str r1, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #0xbd\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    add r2, r6, #0\n    mov r3, #3\n    bl BufferIntegerAsString\n    mov r0, #0xbd\n    ldr r2, _021FE910 ; =0x000005EC\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    ldr r2, [r5, r2]\n    add r1, r4, #0\n    bl StringExpandPlaceholders\n    mov r0, #0\n    add r1, r4, #0\n    add r2, r0, #0\n    bl FontID_String_GetWidth\n    add r0, r4, #0\n    bl String_Delete\n    add sp, #8\n    pop {r4, r5, r6, pc}\n    _021FE910: .word 0x000005EC"
    );
    #endif
}

void ov15_021FE914(void) {
    /* Original at 0x021FE914 */
    /* Requires manual decompilation - 57 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r7, r2, #0\n    add r6, r1, #0\n    add r5, r0, #0\n    mov r0, #0x69\n    ldrh r1, [r7]\n    lsl r0, r0, #2\n    add r4, r3, #0\n    cmp r1, r0\n    bhs _021FE95E\n    sub r0, #0x5d\n    sub r0, r1, r0\n    mov r1, #2\n    lsl r0, r0, #0x10\n    str r1, [sp]\n    lsr r2, r0, #0x10\n    str r6, [sp, #4]\n    mov r0, #0\n    str r0, [sp, #8]\n    add r0, r4, #5\n    str r0, [sp, #0xc]\n    mov r0, #0xbb\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    add r3, r1, #0\n    bl sub_0200CE7C\n    lsl r2, r4, #0x10\n    ldrh r1, [r7, #2]\n    ldr r3, _021FE98C ; =0x00010200\n    add r0, r5, #0\n    lsr r2, r2, #0x10\n    bl ov15_021FE8C4\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    sub r0, r0, #1\n    sub r0, r1, r0\n    lsl r0, r0, #0x10\n    lsr r1, r0, #0x10\n    str r6, [sp]\n    mov r0, #0x10\n    str r0, [sp, #4]\n    add r0, r4, #5\n    str r0, [sp, #8]\n    mov r0, #0xbb\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r2, #2\n    mov r3, #1\n    bl PrintUIntOnWindow\n    add r0, r5, #0\n    add r1, r6, #0\n    mov r2, #0x10\n    bl ov15_021FE9B0\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    _021FE98C: .word 0x00010200"
    );
    #endif
}

void ov15_021FE990(void) {
    /* Original at 0x021FE990 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    mov r1, #0x91\n    lsl r1, r1, #2\n    ldr r0, [r0, r1]\n    mov r1, #0x25\n    mov r2, #6\n    bl NARC_AllocAndReadWholeMember\n    add r1, r4, #0\n    add r5, r0, #0\n    bl NNS_G2dGetUnpackedBGCharacterData\n    add r0, r5, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov15_021FE9B0(void) {
    /* Original at 0x021FE9B0 */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0x1c\n    add r5, r1, #0\n    add r1, sp, #0x18\n    add r4, r2, #0\n    bl ov15_021FE990\n    add r6, r0, #0\n    mov r0, #0x68\n    str r0, [sp]\n    mov r0, #0x10\n    mov r2, #0\n    str r0, [sp, #4]\n    lsl r1, r4, #0x10\n    str r2, [sp, #8]\n    lsr r1, r1, #0x10\n    str r1, [sp, #0xc]\n    mov r1, #0x18\n    str r1, [sp, #0x10]\n    str r0, [sp, #0x14]\n    ldr r1, [sp, #0x18]\n    add r0, r5, #0\n    ldr r1, [r1, #0x14]\n    add r3, r2, #0\n    bl BlitBitmapRectToWindow\n    mov r0, #6\n    add r1, r6, #0\n    bl Heap_FreeExplicit\n    add sp, #0x1c\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void ov15_021FE9F0(void) {
    /* Original at 0x021FE9F0 */
    /* Requires manual decompilation - 50 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x1c\n    add r5, r1, #0\n    add r1, sp, #0x18\n    add r4, r2, #0\n    add r6, r3, #0\n    bl ov15_021FE990\n    add r7, r0, #0\n    cmp r6, #0\n    bne _021FEA2C\n    mov r0, #0x68\n    str r0, [sp]\n    mov r0, #0x10\n    lsl r1, r4, #0x10\n    str r0, [sp, #4]\n    mov r3, #0\n    str r3, [sp, #8]\n    lsr r1, r1, #0x10\n    str r1, [sp, #0xc]\n    mov r1, #0x28\n    str r1, [sp, #0x10]\n    str r0, [sp, #0x14]\n    ldr r1, [sp, #0x18]\n    add r0, r5, #0\n    ldr r1, [r1, #0x14]\n    mov r2, #0x18\n    bl BlitBitmapRectToWindow\n    b _021FEA50\n    mov r0, #0x68\n    str r0, [sp]\n    mov r0, #0x10\n    lsl r1, r4, #0x10\n    str r0, [sp, #4]\n    mov r3, #0\n    str r3, [sp, #8]\n    lsr r1, r1, #0x10\n    str r1, [sp, #0xc]\n    mov r1, #0x28\n    str r1, [sp, #0x10]\n    str r0, [sp, #0x14]\n    ldr r1, [sp, #0x18]\n    add r0, r5, #0\n    ldr r1, [r1, #0x14]\n    mov r2, #0x40\n    bl BlitBitmapRectToWindow\n    mov r0, #6\n    add r1, r7, #0\n    bl Heap_FreeExplicit\n    add sp, #0x1c\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov15_021FEA5C(void) {
    /* Original at 0x021FEA5C */
    /* Requires manual decompilation - 116 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0x2f\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl NewString_ReadMsgData\n    mov r1, #3\n    lsl r1, r1, #8\n    str r0, [r4, r1]\n    sub r1, #0x10\n    ldr r0, [r4, r1]\n    mov r1, #6\n    bl NewString_ReadMsgData\n    mov r1, #0xc1\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    sub r1, #0x14\n    ldr r0, [r4, r1]\n    mov r1, #0x10\n    bl NewString_ReadMsgData\n    mov r1, #0xc2\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    sub r1, #0x18\n    ldr r0, [r4, r1]\n    mov r1, #0x62\n    bl NewString_ReadMsgData\n    mov r1, #0xc3\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    sub r1, #0x1c\n    ldr r0, [r4, r1]\n    mov r1, #0x63\n    bl NewString_ReadMsgData\n    mov r1, #0x31\n    lsl r1, r1, #4\n    str r0, [r4, r1]\n    sub r1, #0x20\n    ldr r0, [r4, r1]\n    mov r1, #1\n    bl NewString_ReadMsgData\n    mov r1, #0xc5\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    sub r1, #0x24\n    ldr r0, [r4, r1]\n    mov r1, #2\n    bl NewString_ReadMsgData\n    mov r1, #0xc6\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    sub r1, #0x28\n    ldr r0, [r4, r1]\n    mov r1, #0x12\n    bl NewString_ReadMsgData\n    mov r1, #0xc7\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    sub r1, #0x2c\n    ldr r0, [r4, r1]\n    mov r1, #3\n    bl NewString_ReadMsgData\n    mov r1, #0x32\n    lsl r1, r1, #4\n    str r0, [r4, r1]\n    sub r1, #0x30\n    ldr r0, [r4, r1]\n    mov r1, #4\n    bl NewString_ReadMsgData\n    mov r1, #0xc9\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    sub r1, #0x34\n    ldr r0, [r4, r1]\n    mov r1, #5\n    bl NewString_ReadMsgData\n    mov r1, #0xca\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    sub r1, #0x38\n    ldr r0, [r4, r1]\n    mov r1, #8\n    bl NewString_ReadMsgData\n    mov r1, #0xcb\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    sub r1, #0x3c\n    ldr r0, [r4, r1]\n    mov r1, #0x4b\n    bl NewString_ReadMsgData\n    mov r1, #0x33\n    lsl r1, r1, #4\n    str r0, [r4, r1]\n    sub r1, #0x40\n    ldr r0, [r4, r1]\n    mov r1, #0x56\n    bl NewString_ReadMsgData\n    mov r1, #0xcd\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    sub r1, #0x44\n    ldr r0, [r4, r1]\n    mov r1, #0\n    bl NewString_ReadMsgData\n    mov r1, #0xce\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    sub r1, #0x48\n    ldr r0, [r4, r1]\n    mov r1, #0x80\n    bl NewString_ReadMsgData\n    mov r1, #0xcf\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    pop {r4, pc}"
    );
    #endif
}

void ov15_021FEB64(void) {
    /* Original at 0x021FEB64 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    mov r6, #3\n    add r5, r0, #0\n    mov r4, #0\n    lsl r6, r6, #8\n    lsl r0, r4, #2\n    add r0, r5, r0\n    ldr r0, [r0, r6]\n    bl String_Delete\n    add r0, r4, #1\n    lsl r0, r0, #0x10\n    lsr r4, r0, #0x10\n    cmp r4, #0x10\n    blo _021FEB6E\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov15_021FEB84(void) {
    /* Original at 0x021FEB84 */
    /* Requires manual decompilation - 123 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    mov r0, #0x8d\n    lsl r0, r0, #2\n    ldr r2, [r5, r0]\n    add r0, r2, #0\n    add r0, #0x64\n    ldrb r1, [r0]\n    mov r0, #0xc\n    mul r0, r1\n    add r0, r2, r0\n    ldrb r0, [r0, #0xc]\n    cmp r0, #3\n    bne _021FEBDC\n    add r0, r5, #0\n    add r0, #0x14\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r1, #0x8d\n    lsl r1, r1, #2\n    ldr r1, [r5, r1]\n    add r0, r5, #0\n    add r1, #0x66\n    ldrh r1, [r1]\n    bl ov15_021FE620\n    add r0, r5, #4\n    bl ScheduleWindowCopyToVram\n    mov r1, #0x8d\n    lsl r1, r1, #2\n    ldr r1, [r5, r1]\n    add r0, r5, #0\n    add r1, #0x66\n    ldrh r1, [r1]\n    mov r2, #1\n    bl ov15_021FF97C\n    add r0, r5, #0\n    mov r1, #0\n    bl ov15_021F9C78\n    add r0, r5, #0\n    ldr r2, _021FEC98 ; =0x000003E2\n    add r0, #0x24\n    mov r1, #1\n    mov r3, #0xc\n    bl DrawFrameAndWindow2\n    add r0, r5, #0\n    add r0, #0x24\n    mov r1, #0xf\n    bl FillWindowPixelBuffer\n    mov r0, #0x8d\n    lsl r0, r0, #2\n    ldr r1, [r5, r0]\n    add r0, r1, #0\n    add r0, #0x64\n    ldrb r2, [r0]\n    mov r0, #0xc\n    add r3, r1, #4\n    mul r0, r2\n    add r4, r3, r0\n    add r0, r1, #0\n    add r0, #0x65\n    ldrb r0, [r0]\n    cmp r0, #6\n    bne _021FEC30\n    add r1, #0x66\n    ldrb r0, [r4, #8]\n    ldrh r1, [r1]\n    bl ov15_021FD3F0\n    cmp r0, #0\n    bne _021FEC30\n    mov r0, #0x2f\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    mov r1, #0x6a\n    bl NewString_ReadMsgData\n    add r7, r0, #0\n    b _021FEC3E\n    mov r0, #0x2f\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    mov r1, #0x2b\n    bl NewString_ReadMsgData\n    add r7, r0, #0\n    mov r0, #0x6c\n    mov r1, #6\n    bl String_New\n    mov r1, #6\n    ldrsh r2, [r4, r1]\n    ldr r1, _021FEC9C ; =0x00000644\n    add r6, r0, #0\n    ldr r1, [r5, r1]\n    add r0, r5, #0\n    add r1, r2, r1\n    sub r1, #8\n    mov r2, #0\n    bl ov15_021FE584\n    mov r0, #0xbd\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    add r1, r6, #0\n    add r2, r7, #0\n    bl StringExpandPlaceholders\n    mov r3, #0\n    str r3, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    add r0, r5, #0\n    add r0, #0x24\n    mov r1, #1\n    add r2, r6, #0\n    str r3, [sp, #8]\n    bl AddTextPrinterParameterized\n    add r0, r6, #0\n    bl String_Delete\n    add r0, r7, #0\n    bl String_Delete\n    add r5, #0x24\n    add r0, r5, #0\n    bl ScheduleWindowCopyToVram\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    _021FEC98: .word 0x000003E2\n    _021FEC9C: .word 0x00000644"
    );
    #endif
}

void ov15_021FECA0(void) {
    /* Original at 0x021FECA0 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r1, #0\n    add r6, r0, #0\n    add r4, r2, #0\n    add r0, r5, #0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    lsl r1, r4, #0x10\n    add r0, r6, #0\n    lsr r1, r1, #0x10\n    bl ov15_021FE5C4\n    add r0, r5, #0\n    bl ScheduleWindowCopyToVram\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov15_021FECC4(void) {
    /* Original at 0x021FECC4 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    add r0, r4, #0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    add r0, r4, #0\n    bl ScheduleWindowCopyToVram\n    pop {r4, pc}"
    );
    #endif
}

void ov15_021FECD8(void) {
    /* Original at 0x021FECD8 */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    add r5, r1, #0\n    mov r1, #0x2f\n    lsl r1, r1, #4\n    ldr r0, [r0, r1]\n    add r2, #0x78\n    add r1, r2, #0\n    bl NewString_ReadMsgData\n    add r4, r0, #0\n    add r0, r5, #0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r1, #0\n    str r1, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _021FED20 ; =0x000F0E00\n    add r2, r4, #0\n    str r0, [sp, #8]\n    add r0, r5, #0\n    mov r3, #0x14\n    str r1, [sp, #0xc]\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r4, #0\n    bl String_Delete\n    add r0, r5, #0\n    bl ScheduleWindowCopyToVram\n    add sp, #0x10\n    pop {r3, r4, r5, pc}\n    nop\n    _021FED20: .word 0x000F0E00"
    );
    #endif
}

void ov15_021FED24(void) {
    /* Original at 0x021FED24 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    add r0, #0x24\n    mov r1, #1\n    bl ClearFrameAndWindow2\n    add r4, #0x24\n    add r0, r4, #0\n    bl ClearWindowTilemapAndScheduleTransfer\n    pop {r4, pc}"
    );
    #endif
}

void ov15_021FED3C(void) {
    /* Original at 0x021FED3C */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov15_021FED24\n    add r0, r4, #0\n    bl ov15_021FE3E0\n    mov r1, #0\n    add r0, r4, #0\n    add r2, r1, #0\n    bl ov15_021FF97C\n    pop {r4, pc}"
    );
    #endif
}

void ov15_021FED58(void) {
    ov15_021FE3E0();
}

void ov15_021FED60(void) {
    /* Original at 0x021FED60 */
    /* Requires manual decompilation - 57 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    add r0, #0x24\n    mov r1, #0xff\n    bl FillWindowPixelBuffer\n    mov r0, #0x2f\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    mov r1, #0x2e\n    bl NewString_ReadMsgData\n    add r6, r0, #0\n    mov r0, #0x82\n    mov r1, #6\n    bl String_New\n    ldr r1, _021FEDE0 ; =0x00000672\n    add r4, r0, #0\n    ldrb r1, [r5, r1]\n    add r0, r5, #0\n    mov r2, #0\n    bl ov15_021FE584\n    mov r0, #0xbd\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    add r1, r4, #0\n    add r2, r6, #0\n    bl StringExpandPlaceholders\n    add r0, r5, #0\n    ldr r2, _021FEDE4 ; =0x000003E2\n    add r0, #0x24\n    mov r1, #1\n    mov r3, #0xc\n    bl DrawFrameAndWindow2\n    mov r3, #0\n    str r3, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _021FEDE8 ; =0x00010200\n    mov r1, #1\n    str r0, [sp, #8]\n    add r0, r5, #0\n    add r0, #0x24\n    add r2, r4, #0\n    str r3, [sp, #0xc]\n    bl AddTextPrinterParameterizedWithColor\n    add r5, #0x24\n    add r0, r5, #0\n    bl ScheduleWindowCopyToVram\n    add r0, r4, #0\n    bl String_Delete\n    add r0, r6, #0\n    bl String_Delete\n    add sp, #0x10\n    pop {r4, r5, r6, pc}\n    _021FEDE0: .word 0x00000672\n    _021FEDE4: .word 0x000003E2\n    _021FEDE8: .word 0x00010200"
    );
    #endif
}

void ov15_021FEDEC(void) {
    /* Original at 0x021FEDEC */
    /* Requires manual decompilation - 82 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x20\n    add r5, r0, #0\n    mov r0, #0x1a\n    lsl r0, r0, #6\n    str r1, [sp, #0x10]\n    ldrsh r1, [r5, r0]\n    mov r0, #0xfa\n    lsl r0, r0, #2\n    cmp r1, r0\n    blt _021FEE06\n    bl GF_AssertFail\n    mov r0, #2\n    mov r1, #6\n    bl String_New\n    str r0, [sp, #0x14]\n    ldr r0, [sp, #0x10]\n    cmp r0, #2\n    bne _021FEE1A\n    mov r4, #0xa\n    b _021FEE1C\n    mov r4, #0x64\n    mov r0, #0x1a\n    lsl r0, r0, #6\n    ldrsh r7, [r5, r0]\n    ldr r0, [sp, #0x10]\n    mov r6, #0\n    cmp r0, #0\n    bls _021FEE96\n    add r5, #0xb4\n    add r0, r7, #0\n    add r1, r4, #0\n    bl _u32_div_f\n    str r0, [sp, #0x18]\n    mov r0, #1\n    str r0, [sp]\n    ldr r0, [sp, #0x14]\n    ldr r1, [sp, #0x18]\n    mov r2, #1\n    mov r3, #0\n    bl String16_FormatInteger\n    ldr r0, [sp, #0x18]\n    add r1, r0, #0\n    mul r1, r4\n    sub r7, r7, r1\n    add r0, r4, #0\n    mov r1, #0xa\n    bl _u32_div_f\n    add r4, r0, #0\n    add r0, r6, #0\n    add r0, #0x11\n    lsl r0, r0, #4\n    str r0, [sp, #0x1c]\n    add r0, r5, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r0, #4\n    str r0, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _021FEEA0 ; =0x00010200\n    mov r1, #0\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #0x1c]\n    ldr r2, [sp, #0x14]\n    add r0, r5, r0\n    add r3, r1, #0\n    bl AddTextPrinterParameterizedWithColor\n    ldr r0, [sp, #0x1c]\n    add r0, r5, r0\n    bl ScheduleWindowCopyToVram\n    ldr r0, [sp, #0x10]\n    add r6, r6, #1\n    cmp r6, r0\n    blo _021FEE2C\n    ldr r0, [sp, #0x14]\n    bl String_Delete\n    add sp, #0x20\n    pop {r3, r4, r5, r6, r7, pc}\n    _021FEEA0: .word 0x00010200"
    );
    #endif
}

void ov15_021FEEA4(void) {
    /* Original at 0x021FEEA4 */
    /* Requires manual decompilation - 73 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #8\n    add r5, r0, #0\n    mov r0, #0x2f\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    mov r1, #0x37\n    bl NewString_ReadMsgData\n    add r4, r0, #0\n    mov r0, #0x8d\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r3, #0x1a\n    add r2, r0, #4\n    add r0, #0x64\n    ldrb r1, [r0]\n    mov r0, #0xc\n    lsl r3, r3, #6\n    mul r0, r1\n    add r1, r2, r0\n    ldrsh r0, [r5, r3]\n    cmp r0, #1\n    ble _021FEEEA\n    mov r2, #6\n    ldrsh r2, [r1, r2]\n    sub r3, #0x3c\n    ldr r1, [r5, r3]\n    add r0, r5, #0\n    add r1, r2, r1\n    sub r1, #8\n    mov r2, #0\n    bl ov15_021FE5A4\n    b _021FEEFE\n    mov r2, #6\n    ldrsh r2, [r1, r2]\n    sub r3, #0x3c\n    ldr r1, [r5, r3]\n    add r0, r5, #0\n    add r1, r2, r1\n    sub r1, #8\n    mov r2, #0\n    bl ov15_021FE584\n    mov r0, #0\n    str r0, [sp]\n    mov r1, #1\n    mov r2, #0x1a\n    mov r0, #0xbd\n    str r1, [sp, #4]\n    lsl r2, r2, #6\n    lsl r0, r0, #2\n    ldrsh r2, [r5, r2]\n    ldr r0, [r5, r0]\n    mov r3, #3\n    bl BufferIntegerAsString\n    mov r0, #0xbd\n    ldr r1, _021FEF40 ; =0x000005E4\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    ldr r1, [r5, r1]\n    add r2, r4, #0\n    bl StringExpandPlaceholders\n    add r0, r4, #0\n    bl String_Delete\n    add r0, r5, #0\n    mov r1, #0\n    bl ov15_021FEF48\n    ldr r1, _021FEF44 ; =0x00000616\n    strb r0, [r5, r1]\n    add sp, #8\n    pop {r3, r4, r5, pc}\n    nop\n    _021FEF40: .word 0x000005E4\n    _021FEF44: .word 0x00000616"
    );
    #endif
}

void ov15_021FEF48(void) {
    /* Original at 0x021FEF48 */
    /* Requires manual decompilation - 51 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    cmp r1, #0\n    bne _021FEF58\n    add r4, r5, #0\n    add r4, #0x34\n    b _021FEF6C\n    mov r0, #0x81\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    cmp r0, #0\n    bne _021FEF66\n    bl GF_AssertFail\n    mov r0, #0x81\n    lsl r0, r0, #2\n    add r4, r5, r0\n    add r0, r4, #0\n    mov r1, #0xf\n    bl FillWindowPixelBuffer\n    ldr r2, _021FEFB8 ; =0x000003E2\n    add r0, r4, #0\n    mov r1, #1\n    mov r3, #0xc\n    bl DrawFrameAndWindow2\n    add r0, r4, #0\n    bl ScheduleWindowCopyToVram\n    mov r0, #1\n    bl TextFlags_SetCanABSpeedUpPrint\n    mov r0, #0\n    bl TextFlags_SetAutoScrollParam\n    mov r0, #9\n    lsl r0, r0, #6\n    ldr r0, [r5, r0]\n    bl Options_GetTextFrameDelay\n    mov r3, #0\n    str r3, [sp]\n    str r0, [sp, #4]\n    ldr r0, _021FEFBC ; =ov15_021FEFC4\n    ldr r2, _021FEFC0 ; =0x000005E4\n    str r0, [sp, #8]\n    ldr r2, [r5, r2]\n    add r0, r4, #0\n    mov r1, #1\n    bl AddTextPrinterParameterized\n    add sp, #0xc\n    pop {r4, r5, pc}\n    nop\n    _021FEFB8: .word 0x000003E2\n    _021FEFBC: .word ov15_021FEFC4\n    _021FEFC0: .word 0x000005E4"
    );
    #endif
}

void ov15_021FEFC4(void) {
    /* Original at 0x021FEFC4 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    cmp r1, #4\n    bhi _021FEFFC\n    add r0, r1, r1\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _021FEFD6: ; jump table\n    bl GF_IsAnySEPlaying\n    pop {r3, pc}\n    bl IsFanfarePlaying\n    pop {r3, pc}\n    ldr r0, _021FF000 ; =SEQ_SE_DP_PC_LOGIN\n    bl PlaySE\n    b _021FEFFC\n    ldr r0, _021FF000 ; =SEQ_SE_DP_PC_LOGIN\n    bl IsSEPlaying\n    pop {r3, pc}\n    mov r0, #0\n    pop {r3, pc}\n    _021FF000: .word SEQ_SE_DP_PC_LOGIN"
    );
    #endif
}

void ov15_021FF004(void) {
    /* Original at 0x021FF004 */
    /* Requires manual decompilation - 39 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0x14\n    add r4, r0, #0\n    ldr r0, [r4]\n    add r2, sp, #0\n    str r0, [sp]\n    mov r0, #5\n    str r0, [sp, #4]\n    mov r0, #0x81\n    str r0, [sp, #8]\n    mov r0, #9\n    str r0, [sp, #0xc]\n    mov r0, #0x19\n    strb r0, [r2, #0x10]\n    mov r0, #6\n    strb r0, [r2, #0x11]\n    ldrb r3, [r2, #0x12]\n    mov r1, #0xf\n    bic r3, r1\n    strb r3, [r2, #0x12]\n    ldrb r3, [r2, #0x12]\n    mov r1, #0xf0\n    bic r3, r1\n    strb r3, [r2, #0x12]\n    ldrb r3, [r2, #0x12]\n    bic r3, r1\n    strb r3, [r2, #0x12]\n    mov r1, #0\n    strb r1, [r2, #0x13]\n    bl YesNoPrompt_Create\n    ldr r1, _021FF054 ; =0x00000804\n    str r0, [r4, r1]\n    ldr r0, [r4, r1]\n    add r1, sp, #0\n    bl YesNoPrompt_InitFromTemplate\n    add sp, #0x14\n    pop {r3, r4, pc}\n    nop\n    _021FF054: .word 0x00000804"
    );
    #endif
}

void ov15_021FF058(void) {
    /* Original at 0x021FF058 */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _021FF060 ; =0x00000804\n    ldr r3, _021FF064 ; =YesNoPrompt_Destroy\n    ldr r0, [r0, r1]\n    bx r3\n    _021FF060: .word 0x00000804\n    _021FF064: .word YesNoPrompt_Destroy"
    );
    #endif
}

void ov15_021FF068(void) {
    /* Original at 0x021FF068 */
    /* Requires manual decompilation - 63 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x10\n    mov r6, #0x89\n    add r5, r0, #0\n    lsl r6, r6, #2\n    add r0, r5, r6\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    add r0, r6, #0\n    add r0, #0xcc\n    ldr r0, [r5, r0]\n    mov r1, #0x53\n    bl NewString_ReadMsgData\n    add r4, r0, #0\n    mov r0, #1\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r2, _021FF0F0 ; =0x00000684\n    add r0, r6, #0\n    ldr r3, [r5, r2]\n    sub r2, r2, #4\n    ldrsh r2, [r5, r2]\n    add r0, #0xd0\n    ldr r0, [r5, r0]\n    mul r2, r3\n    mov r1, #0\n    mov r3, #6\n    bl BufferIntegerAsString\n    add r0, r6, #0\n    ldr r1, _021FF0F4 ; =0x000005E4\n    add r0, #0xd0\n    ldr r0, [r5, r0]\n    ldr r1, [r5, r1]\n    add r2, r4, #0\n    bl StringExpandPlaceholders\n    ldr r1, _021FF0F4 ; =0x000005E4\n    mov r0, #0\n    ldr r1, [r5, r1]\n    add r2, r0, #0\n    bl FontID_String_GetWidth\n    mov r0, #4\n    str r0, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _021FF0F8 ; =0x00010200\n    mov r1, #0\n    str r0, [sp, #8]\n    ldr r2, _021FF0F4 ; =0x000005E4\n    str r1, [sp, #0xc]\n    ldr r2, [r5, r2]\n    add r0, r5, r6\n    add r3, r1, #0\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r5, r6\n    bl ScheduleWindowCopyToVram\n    add r0, r4, #0\n    bl String_Delete\n    add sp, #0x10\n    pop {r4, r5, r6, pc}\n    nop\n    _021FF0F0: .word 0x00000684\n    _021FF0F4: .word 0x000005E4\n    _021FF0F8: .word 0x00010200"
    );
    #endif
}

void ov15_021FF0FC(void) {
    /* Original at 0x021FF0FC */
    /* Requires manual decompilation - 98 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r5, r0, #0\n    mov r0, #1\n    add r7, r1, #0\n    lsl r0, r0, #8\n    mov r1, #6\n    bl String_New\n    mov r6, #0x85\n    add r4, r0, #0\n    lsl r6, r6, #2\n    cmp r7, #0\n    bne _021FF14E\n    add r0, r5, r6\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    add r0, r6, #0\n    add r0, #0xdc\n    ldr r0, [r5, r0]\n    mov r1, #0x50\n    bl NewString_ReadMsgData\n    add r7, r0, #0\n    mov r1, #0\n    str r1, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _021FF1DC ; =0x00010200\n    add r2, r7, #0\n    str r0, [sp, #8]\n    add r0, r5, r6\n    mov r3, #4\n    str r1, [sp, #0xc]\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r7, #0\n    bl String_Delete\n    b _021FF160\n    mov r0, #0x48\n    mov r1, #0\n    str r0, [sp]\n    mov r3, #0x10\n    add r0, r5, r6\n    add r2, r1, #0\n    str r3, [sp, #4]\n    bl FillWindowPixelRect\n    mov r0, #0x2f\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    mov r1, #0x51\n    bl NewString_ReadMsgData\n    str r0, [sp, #0x10]\n    mov r0, #0x8f\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl PlayerProfile_GetMoney\n    add r2, r0, #0\n    mov r0, #1\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #0xbd\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #0\n    mov r3, #6\n    bl BufferIntegerAsString\n    mov r0, #0xbd\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    ldr r2, [sp, #0x10]\n    add r1, r4, #0\n    bl StringExpandPlaceholders\n    mov r0, #0\n    add r1, r4, #0\n    add r2, r0, #0\n    bl FontID_String_GetWidth\n    add r7, r0, #0\n    mov r0, #0x10\n    str r0, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _021FF1DC ; =0x00010200\n    add r7, #8\n    mov r3, #0x44\n    str r0, [sp, #8]\n    mov r1, #0\n    add r0, r5, r6\n    add r2, r4, #0\n    sub r3, r3, r7\n    str r1, [sp, #0xc]\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r5, r6\n    bl ScheduleWindowCopyToVram\n    ldr r0, [sp, #0x10]\n    bl String_Delete\n    add r0, r4, #0\n    bl String_Delete\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    _021FF1DC: .word 0x00010200"
    );
    #endif
}

void ov15_021FF1E0(void) {
    /* Original at 0x021FF1E0 */
    /* Requires manual decompilation - 80 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    add r4, r5, #0\n    add r4, #0x54\n    add r0, r4, #0\n    mov r1, #0xf\n    bl FillWindowPixelBuffer\n    ldr r2, _021FF294 ; =0x000003F7\n    add r0, r4, #0\n    mov r1, #1\n    mov r3, #0xe\n    bl DrawFrameAndWindow1\n    mov r0, #0x2f\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    mov r1, #0x73\n    bl NewString_ReadMsgData\n    mov r1, #0\n    add r6, r0, #0\n    str r1, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    add r0, r4, #0\n    add r2, r6, #0\n    add r3, r1, #0\n    str r1, [sp, #8]\n    bl AddTextPrinterParameterized\n    add r0, r6, #0\n    bl String_Delete\n    mov r0, #0x2f\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    mov r1, #0x74\n    bl NewString_ReadMsgData\n    add r6, r0, #0\n    mov r0, #1\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #0xbd\n    lsl r0, r0, #2\n    mov r1, #0\n    ldr r0, [r5, r0]\n    add r2, r1, #0\n    mov r3, #3\n    bl BufferIntegerAsString\n    mov r0, #0xbd\n    ldr r1, _021FF298 ; =0x000005E4\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    ldr r1, [r5, r1]\n    add r2, r6, #0\n    bl StringExpandPlaceholders\n    add r0, r6, #0\n    bl String_Delete\n    ldr r1, _021FF298 ; =0x000005E4\n    mov r0, #0\n    ldr r1, [r5, r1]\n    add r2, r0, #0\n    bl FontID_String_GetWidth\n    add r3, r0, #0\n    mov r0, #0x10\n    str r0, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    mov r1, #0\n    ldr r2, _021FF298 ; =0x000005E4\n    str r1, [sp, #8]\n    ldr r2, [r5, r2]\n    mov r5, #0x58\n    add r0, r4, #0\n    sub r3, r5, r3\n    bl AddTextPrinterParameterized\n    add r0, r4, #0\n    bl ScheduleWindowCopyToVram\n    add sp, #0xc\n    pop {r3, r4, r5, r6, pc}\n    nop\n    _021FF294: .word 0x000003F7\n    _021FF298: .word 0x000005E4"
    );
    #endif
}

void ov15_021FF29C(void) {
    /* Original at 0x021FF29C */
    /* Requires manual decompilation - 58 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    mov r0, #0x2f\n    lsl r0, r0, #4\n    add r6, r1, #0\n    ldr r0, [r5, r0]\n    mov r1, #8\n    bl NewString_ReadMsgData\n    add r4, r0, #0\n    add r0, r5, #0\n    add r0, #0x74\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    cmp r6, #0\n    bne _021FF2EE\n    mov r0, #0\n    add r1, r4, #0\n    add r2, r0, #0\n    bl FontID_String_GetWidth\n    mov r1, #0\n    add r3, r0, #0\n    mov r6, #0x30\n    sub r3, r6, r3\n    lsr r3, r3, #1\n    str r1, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _021FF31C ; =0x000F0E00\n    add r2, r4, #0\n    str r0, [sp, #8]\n    add r0, r5, #0\n    add r0, #0x74\n    add r3, #8\n    str r1, [sp, #0xc]\n    bl AddTextPrinterParameterizedWithColor\n    b _021FF308\n    mov r1, #0\n    str r1, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _021FF31C ; =0x000F0E00\n    add r2, r4, #0\n    str r0, [sp, #8]\n    add r0, r5, #0\n    add r0, #0x74\n    mov r3, #5\n    str r1, [sp, #0xc]\n    bl AddTextPrinterParameterizedWithColor\n    add r5, #0x74\n    add r0, r5, #0\n    bl ScheduleWindowCopyToVram\n    add r0, r4, #0\n    bl String_Delete\n    add sp, #0x10\n    pop {r4, r5, r6, pc}\n    nop\n    _021FF31C: .word 0x000F0E00"
    );
    #endif
}

void ov15_021FF320(void) {
    /* Original at 0x021FF320 */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7}\n    add r3, r1, #0\n    add r1, r2, #0\n    ldr r2, _021FF360 ; =ov15_022008C8\n    mov r5, #0\n    ldrb r6, [r2, r3]\n    add r4, r5, #0\n    cmp r6, #0\n    ble _021FF35A\n    ldr r7, [r0]\n    ldrb r2, [r2, r3]\n    add r0, r7, #0\n    add r6, r5, #0\n    add r1, r1, #1\n    ldrh r3, [r0]\n    cmp r3, #0\n    beq _021FF350\n    add r3, r7, r6\n    ldrh r3, [r3, #2]\n    cmp r3, #0\n    beq _021FF350\n    add r5, r5, #1\n    cmp r5, r1\n    beq _021FF35A\n    add r4, r4, #1\n    add r0, r0, #4\n    add r6, r6, #4\n    cmp r4, r2\n    blt _021FF33C\n    add r0, r4, #0\n    pop {r4, r5, r6, r7}\n    bx lr\n    _021FF360: .word ov15_022008C8"
    );
    #endif
}

void ov15_021FF364(void) {
    /* Original at 0x021FF364 */
    /* Requires manual decompilation - 184 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x34\n    add r5, r0, #0\n    mov r0, #0x8d\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    str r1, [sp, #0x10]\n    add r2, r0, #4\n    add r0, #0x64\n    ldrb r1, [r0]\n    mov r0, #0xc\n    str r3, [sp, #0x14]\n    mul r0, r1\n    add r0, r2, r0\n    mov r1, #6\n    str r0, [sp, #0x24]\n    ldrb r2, [r0, #9]\n    ldrsh r0, [r0, r1]\n    sub r0, r2, r0\n    str r0, [sp, #0x20]\n    cmp r0, #6\n    ble _021FF392\n    str r1, [sp, #0x20]\n    ldr r0, _021FF4DC ; =0x0000068A\n    ldrb r0, [r5, r0]\n    cmp r0, #0\n    bne _021FF3A2\n    mov r0, #0\n    str r0, [sp, #0x18]\n    mov r4, #6\n    b _021FF3A8\n    mov r0, #6\n    str r0, [sp, #0x18]\n    mov r4, #0\n    ldr r1, _021FF4DC ; =0x0000068A\n    mov r0, #1\n    ldrb r2, [r5, r1]\n    eor r0, r2\n    strb r0, [r5, r1]\n    add r0, r5, #0\n    bl ov15_021FE17C\n    mov r0, #0\n    add r7, r5, #0\n    ldr r6, [sp, #0x18]\n    str r0, [sp, #0x2c]\n    add r7, #0xb4\n    lsl r0, r6, #4\n    add r0, r7, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    lsl r0, r4, #4\n    add r0, r7, r0\n    bl ClearWindowTilemapAndScheduleTransfer\n    ldr r0, [sp, #0x2c]\n    add r6, r6, #1\n    add r0, r0, #1\n    add r4, r4, #1\n    str r0, [sp, #0x2c]\n    cmp r0, #6\n    blt _021FF3C2\n    mov r1, #0x8d\n    lsl r1, r1, #2\n    ldr r1, [r5, r1]\n    mov r0, #0\n    add r1, #0x64\n    ldrb r1, [r1]\n    str r0, [sp, #0x28]\n    ldr r0, [sp, #0x24]\n    ldr r2, [sp, #0x10]\n    bl ov15_021FF320\n    add r4, r0, #0\n    mov r0, #0x8d\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    add r0, #0x64\n    ldrb r1, [r0]\n    ldr r0, _021FF4E0 ; =ov15_022008C8\n    ldrb r0, [r0, r1]\n    cmp r4, r0\n    bge _021FF4BE\n    lsl r0, r4, #2\n    str r0, [sp, #0x1c]\n    add r7, r5, r0\n    add r0, r5, #0\n    str r0, [sp, #0x30]\n    add r0, #0xb4\n    ldr r6, [sp, #0x18]\n    str r0, [sp, #0x30]\n    ldr r0, [sp, #0x24]\n    ldr r1, [sp, #0x1c]\n    ldr r0, [r0]\n    ldr r2, [sp, #0x1c]\n    add r1, r0, r1\n    ldrh r0, [r0, r2]\n    cmp r0, #0\n    beq _021FF4A2\n    ldrh r0, [r1, #2]\n    cmp r0, #0\n    beq _021FF4A2\n    ldr r0, [sp, #0x14]\n    cmp r0, #0\n    bne _021FF450\n    ldr r1, [sp, #0x30]\n    lsl r2, r6, #4\n    add r1, r1, r2\n    mov r2, #0x35\n    str r4, [sp]\n    lsl r2, r2, #4\n    ldr r2, [r7, r2]\n    ldr r3, [sp, #0x24]\n    add r0, r5, #0\n    bl ov15_021FF570\n    b _021FF494\n    ldr r0, _021FF4E4 ; =0x00000672\n    ldrb r0, [r5, r0]\n    cmp r4, r0\n    bne _021FF470\n    ldr r1, [sp, #0x30]\n    lsl r2, r6, #4\n    add r1, r1, r2\n    mov r2, #0x35\n    str r4, [sp]\n    lsl r2, r2, #4\n    ldr r2, [r7, r2]\n    ldr r3, [sp, #0x24]\n    add r0, r5, #0\n    bl ov15_021FF570\n    b _021FF494\n    mov r0, #0x10\n    str r0, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _021FF4E8 ; =0x00010200\n    mov r2, #0x35\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    lsl r2, r2, #4\n    ldr r0, [sp, #0x30]\n    lsl r1, r6, #4\n    add r0, r0, r1\n    mov r1, #0\n    ldr r2, [r7, r2]\n    add r3, r1, #0\n    bl AddTextPrinterParameterizedWithColor\n    ldr r0, [sp, #0x28]\n    add r6, r6, #1\n    add r1, r0, #1\n    ldr r0, [sp, #0x20]\n    str r1, [sp, #0x28]\n    cmp r1, r0\n    bge _021FF4BE\n    ldr r0, [sp, #0x1c]\n    add r4, r4, #1\n    add r0, r0, #4\n    str r0, [sp, #0x1c]\n    mov r0, #0x8d\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    add r7, r7, #4\n    add r0, #0x64\n    ldrb r1, [r0]\n    ldr r0, _021FF4E0 ; =ov15_022008C8\n    ldrb r0, [r0, r1]\n    cmp r4, r0\n    blt _021FF41C\n    mov r4, #0\n    add r5, #0xb4\n    ldr r0, [sp, #0x18]\n    lsl r0, r0, #4\n    add r0, r5, r0\n    bl ScheduleWindowCopyToVram\n    ldr r0, [sp, #0x18]\n    add r4, r4, #1\n    add r0, r0, #1\n    str r0, [sp, #0x18]\n    cmp r4, #6\n    blt _021FF4C2\n    add sp, #0x34\n    pop {r4, r5, r6, r7, pc}\n    _021FF4DC: .word 0x0000068A\n    _021FF4E0: .word ov15_022008C8\n    _021FF4E4: .word 0x00000672\n    _021FF4E8: .word 0x00010200"
    );
    #endif
}

void ov15_021FF4EC(void) {
    /* Original at 0x021FF4EC */
    /* Requires manual decompilation - 51 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r6, r0, #0\n    mov r0, #0x8d\n    add r7, r2, #0\n    lsl r0, r0, #2\n    ldr r2, [r6, r0]\n    add r5, r6, #0\n    add r0, r2, #4\n    add r2, #0x64\n    str r0, [sp, #4]\n    ldrb r2, [r2]\n    mov r0, #0xc\n    add r7, r7, r1\n    mul r0, r2\n    str r0, [sp, #8]\n    mov r4, #0\n    add r5, #0xb4\n    add r0, r5, #0\n    bl ClearWindowTilemapAndScheduleTransfer\n    add r4, r4, #1\n    add r5, #0x10\n    cmp r4, #6\n    blt _021FF510\n    add r0, r6, #0\n    bl ov15_021FE1D0\n    add r0, r6, #0\n    add r0, #0x64\n    bl ClearWindowTilemapAndScheduleTransfer\n    add r0, r6, #0\n    bl ov15_021FE204\n    lsl r2, r7, #2\n    add r3, r6, r2\n    mov r2, #0x35\n    mov r1, #0x5d\n    lsl r1, r1, #2\n    str r7, [sp]\n    lsl r2, r2, #4\n    ldr r2, [r3, r2]\n    ldr r4, [sp, #4]\n    ldr r3, [sp, #8]\n    add r0, r6, #0\n    add r1, r6, r1\n    add r3, r4, r3\n    bl ov15_021FF570\n    mov r0, #0x5d\n    lsl r0, r0, #2\n    add r0, r6, r0\n    bl ScheduleWindowCopyToVram\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov15_021FF560(void) {
    /* Original at 0x021FF560 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0x5d\n    lsl r1, r1, #2\n    ldr r3, _021FF56C ; =ClearWindowTilemapAndScheduleTransfer\n    add r0, r0, r1\n    bx r3\n    nop\n    _021FF56C: .word ClearWindowTilemapAndScheduleTransfer"
    );
    #endif
}

void ov15_021FF570(void) {
    /* Original at 0x021FF570 */
    /* Requires manual decompilation - 115 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r4, r3, #0\n    add r5, r0, #0\n    ldrb r0, [r4, #8]\n    add r6, r1, #0\n    cmp r0, #3\n    beq _021FF586\n    cmp r0, #7\n    beq _021FF5D8\n    b _021FF632\n    mov r1, #0\n    str r1, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _021FF668 ; =0x00010200\n    add r3, r1, #0\n    str r0, [sp, #8]\n    add r0, r6, #0\n    str r1, [sp, #0xc]\n    bl AddTextPrinterParameterizedWithColor\n    ldr r0, [sp, #0x28]\n    ldr r2, [r4]\n    lsl r7, r0, #2\n    add r0, r5, #0\n    add r1, r6, #0\n    add r2, r2, r7\n    mov r3, #0x10\n    bl ov15_021FE914\n    ldr r3, [r4]\n    mov r0, #0x52\n    ldrh r1, [r3, r7]\n    lsl r0, r0, #2\n    cmp r1, r0\n    blo _021FF662\n    add r0, #0x5b\n    cmp r1, r0\n    bhi _021FF662\n    mov r1, #0xbd\n    lsl r1, r1, #2\n    add r3, r3, r7\n    ldr r0, [r5, r1]\n    sub r1, r1, #4\n    ldrh r3, [r3, #2]\n    ldr r1, [r5, r1]\n    add r2, r6, #0\n    bl ov15_021FF66C\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r1, #0\n    str r1, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _021FF668 ; =0x00010200\n    add r3, r1, #0\n    str r0, [sp, #8]\n    add r0, r6, #0\n    str r1, [sp, #0xc]\n    bl AddTextPrinterParameterizedWithColor\n    ldr r0, [sp, #0x28]\n    lsl r7, r0, #2\n    mov r0, #0x8e\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl Bag_GetRegisteredItem1\n    ldr r1, [r4]\n    ldrh r1, [r1, r7]\n    cmp r1, r0\n    bne _021FF610\n    add r0, r5, #0\n    add r1, r6, #0\n    mov r2, #0x10\n    mov r3, #0\n    bl ov15_021FE9F0\n    mov r0, #0x8e\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl Bag_GetRegisteredItem2\n    ldr r1, [r4]\n    ldrh r1, [r1, r7]\n    cmp r1, r0\n    bne _021FF662\n    add r0, r5, #0\n    add r1, r6, #0\n    mov r2, #0x10\n    mov r3, #1\n    bl ov15_021FE9F0\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r1, #0\n    str r1, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _021FF668 ; =0x00010200\n    add r3, r1, #0\n    str r0, [sp, #8]\n    add r0, r6, #0\n    str r1, [sp, #0xc]\n    bl AddTextPrinterParameterizedWithColor\n    ldr r3, [sp, #0x28]\n    mov r1, #0xbd\n    lsl r1, r1, #2\n    ldr r0, [r5, r1]\n    sub r1, r1, #4\n    ldr r4, [r4]\n    lsl r3, r3, #2\n    add r3, r4, r3\n    ldrh r3, [r3, #2]\n    ldr r1, [r5, r1]\n    add r2, r6, #0\n    bl ov15_021FF66C\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021FF668: .word 0x00010200"
    );
    #endif
}

void ov15_021FF66C(void) {
    /* Original at 0x021FF66C */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x10\n    add r4, r1, #0\n    mov r1, #0\n    add r6, r2, #0\n    str r1, [sp]\n    mov r2, #1\n    str r2, [sp, #4]\n    add r2, r3, #0\n    add r5, r0, #0\n    mov r3, #3\n    bl BufferIntegerAsString\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #0x57\n    mov r3, #6\n    bl ReadMsgData_ExpandPlaceholders\n    add r4, r0, #0\n    mov r0, #0x10\n    str r0, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _021FF6B8 ; =0x00010200\n    mov r1, #0\n    str r0, [sp, #8]\n    add r0, r6, #0\n    add r2, r4, #0\n    mov r3, #0x30\n    str r1, [sp, #0xc]\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r4, #0\n    bl String_Delete\n    add sp, #0x10\n    pop {r4, r5, r6, pc}\n    _021FF6B8: .word 0x00010200"
    );
    #endif
}

void ov15_021FF6BC(void) {
    /* Original at 0x021FF6BC */
    /* Requires manual decompilation - 68 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x10\n    add r4, r0, #0\n    add r5, r1, #0\n    add r0, r2, r3\n    mov r1, #6\n    bl _s32_div_f\n    add r6, r0, #0\n    cmp r5, #0\n    bne _021FF6D6\n    mov r5, #1\n    b _021FF6E0\n    add r0, r5, #5\n    mov r1, #6\n    bl _s32_div_f\n    add r5, r0, #0\n    add r0, r4, #0\n    add r0, #0x64\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r0, #1\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #0xbd\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0\n    add r2, r6, #1\n    mov r3, #3\n    bl BufferIntegerAsString\n    mov r1, #1\n    str r1, [sp]\n    mov r0, #0xbd\n    str r1, [sp, #4]\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    add r2, r5, #0\n    mov r3, #3\n    bl BufferIntegerAsString\n    mov r1, #0xbd\n    lsl r1, r1, #2\n    ldr r0, [r4, r1]\n    sub r1, r1, #4\n    ldr r1, [r4, r1]\n    mov r2, #0x16\n    mov r3, #6\n    bl ReadMsgData_ExpandPlaceholders\n    mov r1, #0\n    add r5, r0, #0\n    str r1, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _021FF754 ; =0x000F0100\n    add r2, r5, #0\n    str r0, [sp, #8]\n    add r0, r4, #0\n    add r0, #0x64\n    add r3, r1, #0\n    str r1, [sp, #0xc]\n    bl AddTextPrinterParameterizedWithColor\n    add r4, #0x64\n    add r0, r4, #0\n    bl ScheduleWindowCopyToVram\n    add r0, r5, #0\n    bl String_Delete\n    add sp, #0x10\n    pop {r4, r5, r6, pc}\n    _021FF754: .word 0x000F0100"
    );
    #endif
}

void ov15_021FF758(void) {
    /* Original at 0x021FF758 */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r4, r1, #0\n    mov r1, #0\n    add r6, r0, #0\n    add r5, r2, #0\n    bl FillWindowPixelBuffer\n    cmp r5, #0xff\n    beq _021FF79E\n    lsl r5, r5, #2\n    add r0, r6, #0\n    bl GetWindowWidth\n    add r7, r0, #0\n    mov r0, #0\n    ldr r1, [r4, r5]\n    add r2, r0, #0\n    bl FontID_String_GetWidth\n    mov r1, #0\n    add r3, r0, #0\n    str r1, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _021FF7A8 ; =0x000F0E00\n    str r0, [sp, #8]\n    str r1, [sp, #0xc]\n    ldr r2, [r4, r5]\n    lsl r4, r7, #3\n    sub r3, r4, r3\n    add r0, r6, #0\n    lsr r3, r3, #1\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r6, #0\n    bl ScheduleWindowCopyToVram\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    _021FF7A8: .word 0x000F0E00"
    );
    #endif
}

void ov15_021FF7AC(void) {
    ClearWindowTilemapAndScheduleTransfer(0);
}

void ov15_021FF7C4(void) {
    /* Original at 0x021FF7C4 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x10\n    mov r1, #0\n    add r4, r0, #0\n    str r1, [sp]\n    mov r2, #0xff\n    str r2, [sp, #4]\n    ldr r0, _021FF7F8 ; =0x000F0E00\n    add r2, #0xf5\n    str r0, [sp, #8]\n    add r0, r4, r2\n    mov r2, #0xc5\n    str r1, [sp, #0xc]\n    lsl r2, r2, #2\n    ldr r2, [r4, r2]\n    mov r3, #5\n    bl AddTextPrinterParameterizedWithColor\n    mov r0, #0x7d\n    lsl r0, r0, #2\n    add r0, r4, r0\n    bl ScheduleWindowCopyToVram\n    add sp, #0x10\n    pop {r4, pc}\n    nop\n    _021FF7F8: .word 0x000F0E00"
    );
    #endif
}

void ov15_021FF7FC(void) {
    /* Original at 0x021FF7FC */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x10\n    mov r1, #0\n    add r4, r0, #0\n    str r1, [sp]\n    mov r2, #0xff\n    str r2, [sp, #4]\n    ldr r0, _021FF830 ; =0x000F0E00\n    add r2, #0xf5\n    str r0, [sp, #8]\n    add r0, r4, r2\n    mov r2, #0xcd\n    str r1, [sp, #0xc]\n    lsl r2, r2, #2\n    ldr r2, [r4, r2]\n    mov r3, #5\n    bl AddTextPrinterParameterizedWithColor\n    mov r0, #0x7d\n    lsl r0, r0, #2\n    add r0, r4, r0\n    bl ScheduleWindowCopyToVram\n    add sp, #0x10\n    pop {r4, pc}\n    nop\n    _021FF830: .word 0x000F0E00"
    );
    #endif
}

void ov15_021FF834(void) {
    /* Original at 0x021FF834 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0x7d\n    lsl r1, r1, #2\n    ldr r3, _021FF840 ; =ClearWindowTilemapAndScheduleTransfer\n    add r0, r0, r1\n    bx r3\n    nop\n    _021FF840: .word ClearWindowTilemapAndScheduleTransfer"
    );
    #endif
}

void ov15_021FF844(void) {
    ClearWindowTilemapAndScheduleTransfer();
}

void ov15_021FF850(void) {
    /* Original at 0x021FF850 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0x10\n    mov r1, #1\n    bl GfGfx_EngineATogglePlanes\n    mov r0, #0x10\n    mov r1, #1\n    bl GfGfx_EngineBTogglePlanes\n    mov r0, #0x20\n    mov r1, #6\n    bl GF_CreateVramTransferManager\n    add r0, r4, #0\n    bl ov15_021FFA40\n    add r0, r4, #0\n    bl ov15_021FFAD0\n    add r0, r4, #0\n    bl ov15_021FFDD8\n    mov r0, #0x92\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl SpriteSystem_GetRenderer\n    mov r2, #1\n    mov r1, #0\n    lsl r2, r2, #0x14\n    bl G2dRenderer_SetSubSurfaceCoords\n    pop {r4, pc}"
    );
    #endif
}

void ov15_021FF894(void) {
    /* Original at 0x021FF894 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    mov r7, #0x25\n    mov r4, #0\n    add r5, r6, #0\n    lsl r7, r7, #4\n    ldr r0, [r5, r7]\n    bl Sprite_DeleteAndFreeResources\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #0x27\n    blo _021FF8A0\n    mov r1, #0x92\n    lsl r1, r1, #2\n    ldr r0, [r6, r1]\n    add r1, r1, #4\n    ldr r1, [r6, r1]\n    bl SpriteSystem_FreeResourcesAndManager\n    mov r0, #0x92\n    lsl r0, r0, #2\n    ldr r0, [r6, r0]\n    bl SpriteSystem_Free\n    ldr r0, _021FF8D0 ; =0x0000069C\n    ldr r0, [r6, r0]\n    bl Heap_Free\n    pop {r3, r4, r5, r6, r7, pc}\n    _021FF8D0: .word 0x0000069C"
    );
    #endif
}

void ov15_021FF8D4(void) {
    ManagedSprite_TickFrame(0, 0x25);
}

void ov15_021FF8F0(void) {
    /* Original at 0x021FF8F0 */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #8\n    add r6, r2, #0\n    add r5, r0, #0\n    add r4, r1, #0\n    add r0, r6, #0\n    mov r1, #1\n    bl GetItemIndexMapping\n    add r3, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, _021FF948 ; =0x0000C0FC\n    mov r1, #0x92\n    add r0, r4, r0\n    lsl r1, r1, #2\n    str r0, [sp, #4]\n    ldr r0, [r5, r1]\n    add r1, r1, #4\n    ldr r1, [r5, r1]\n    mov r2, #0x12\n    bl SpriteSystem_ReplaceCharResObj\n    add r0, r6, #0\n    mov r1, #2\n    bl GetItemIndexMapping\n    add r3, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, _021FF94C ; =0x0000C0FB\n    mov r1, #0x92\n    add r0, r4, r0\n    lsl r1, r1, #2\n    str r0, [sp, #4]\n    ldr r0, [r5, r1]\n    add r1, r1, #4\n    ldr r1, [r5, r1]\n    mov r2, #0x12\n    bl SpriteSystem_ReplacePlttResObj\n    add sp, #8\n    pop {r4, r5, r6, pc}\n    nop\n    _021FF948: .word 0x0000C0FC\n    _021FF94C: .word 0x0000C0FB"
    );
    #endif
}

void ov15_021FF950(void) {
    /* Original at 0x021FF950 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _021FF960 ; =0x0000064B\n    mov r2, #0\n    strb r2, [r0, r1]\n    mov r2, #1\n    sub r1, r1, #3\n    strb r2, [r0, r1]\n    bx lr\n    nop\n    _021FF960: .word 0x0000064B"
    );
    #endif
}

void ov15_021FF964(void) {
    ov15_021FFEC0();
}

void ov15_021FF97C(void) {
    /* Original at 0x021FF97C */
    /* Requires manual decompilation - 81 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r5, r0, #0\n    mov r0, #0x9b\n    lsl r0, r0, #2\n    add r4, r2, #0\n    add r6, r1, #0\n    ldr r0, [r5, r0]\n    add r1, r4, #0\n    bl ManagedSprite_SetDrawFlag\n    mov r0, #0x27\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    add r1, r4, #0\n    bl ManagedSprite_SetDrawFlag\n    cmp r4, #0\n    beq _021FFA34\n    add r0, r6, #0\n    bl TMHMGetMove\n    mov r1, #3\n    add r4, r0, #0\n    bl GetMoveAttr\n    lsl r0, r0, #0x10\n    lsr r6, r0, #0x10\n    add r0, r4, #0\n    mov r1, #1\n    bl GetMoveAttr\n    lsl r0, r0, #0x10\n    lsr r4, r0, #0x10\n    bl sub_020776B4\n    add r7, r0, #0\n    add r0, r6, #0\n    bl sub_02077678\n    add r3, r0, #0\n    mov r0, #1\n    str r0, [sp]\n    ldr r0, _021FFA38 ; =0x0000C103\n    mov r1, #0x92\n    lsl r1, r1, #2\n    str r0, [sp, #4]\n    ldr r0, [r5, r1]\n    add r1, r1, #4\n    ldr r1, [r5, r1]\n    add r2, r7, #0\n    bl SpriteSystem_ReplaceCharResObj\n    add r0, r6, #0\n    bl sub_0207769C\n    add r1, r0, #0\n    mov r0, #0x9b\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    add r1, r1, #4\n    bl ManagedSprite_SetPaletteOverride\n    bl sub_02077830\n    add r6, r0, #0\n    add r0, r4, #0\n    bl sub_02077800\n    add r3, r0, #0\n    mov r0, #1\n    str r0, [sp]\n    ldr r0, _021FFA3C ; =0x0000C104\n    mov r1, #0x92\n    lsl r1, r1, #2\n    str r0, [sp, #4]\n    ldr r0, [r5, r1]\n    add r1, r1, #4\n    ldr r1, [r5, r1]\n    add r2, r6, #0\n    bl SpriteSystem_ReplaceCharResObj\n    add r0, r4, #0\n    bl sub_02077818\n    add r1, r0, #0\n    mov r0, #0x27\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    add r1, r1, #4\n    bl ManagedSprite_SetPaletteOverride\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    _021FFA38: .word 0x0000C103\n    _021FFA3C: .word 0x0000C104"
    );
    #endif
}

void ov15_021FFA40(void) {
    /* Original at 0x021FFA40 */
    /* Requires manual decompilation - 64 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x4c\n    ldr r3, _021FFAC4 ; =ov15_022009BC\n    add r2, sp, #0x34\n    add r4, r0, #0\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    mov r0, #6\n    bl SpriteSystem_Alloc\n    mov r1, #0x92\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    ldr r0, [r4, r1]\n    bl SpriteManager_New\n    mov r7, #0x93\n    lsl r7, r7, #2\n    add r2, sp, #0x14\n    ldr r3, _021FFAC8 ; =ov15_022009F4\n    str r0, [r4, r7]\n    ldmia r3!, {r0, r1}\n    add r6, r2, #0\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    ldr r5, _021FFACC ; =ov15_022009A8\n    stmia r2!, {r0, r1}\n    add r3, sp, #0\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    add r1, r6, #0\n    str r0, [r3]\n    sub r0, r7, #4\n    ldr r0, [r4, r0]\n    mov r3, #0x20\n    bl SpriteSystem_Init\n    sub r1, r7, #4\n    ldr r0, [r4, r1]\n    add r1, r1, #4\n    ldr r1, [r4, r1]\n    mov r2, #0x27\n    bl SpriteSystem_InitSprites\n    sub r1, r7, #4\n    ldr r0, [r4, r1]\n    add r1, r1, #4\n    ldr r1, [r4, r1]\n    add r2, sp, #0x34\n    bl SpriteSystem_InitManagerWithCapacities\n    add sp, #0x4c\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _021FFAC4: .word ov15_022009BC\n    _021FFAC8: .word ov15_022009F4\n    _021FFACC: .word ov15_022009A8"
    );
    #endif
}

void ov15_021FFAD0(void) {
    /* Original at 0x021FFAD0 */
    /* Requires manual decompilation - 348 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r0, _021FFDAC ; =0x0000C0F9\n    mov r1, #0x92\n    lsl r1, r1, #2\n    str r0, [sp, #8]\n    ldr r0, [r5, r1]\n    add r1, r1, #4\n    ldr r1, [r5, r1]\n    mov r2, #0xf\n    mov r3, #0x1a\n    bl SpriteSystem_LoadCharResObj\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r0, _021FFDB0 ; =0x0000C0FA\n    mov r1, #0x92\n    lsl r1, r1, #2\n    str r0, [sp, #8]\n    ldr r0, [r5, r1]\n    add r1, r1, #4\n    ldr r1, [r5, r1]\n    mov r2, #0xf\n    mov r3, #6\n    bl SpriteSystem_LoadCharResObj\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    ldr r0, _021FFDB4 ; =0x0000C0FB\n    mov r1, #0x92\n    lsl r1, r1, #2\n    str r0, [sp, #8]\n    ldr r0, [r5, r1]\n    add r1, r1, #4\n    ldr r1, [r5, r1]\n    mov r2, #0xf\n    mov r3, #0x33\n    bl SpriteSystem_LoadCharResObj\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r0, _021FFDB8 ; =0x0000C102\n    mov r1, #0x92\n    lsl r1, r1, #2\n    str r0, [sp, #8]\n    ldr r0, [r5, r1]\n    add r1, r1, #4\n    ldr r1, [r5, r1]\n    mov r2, #0x3c\n    mov r3, #4\n    bl SpriteSystem_LoadCharResObj\n    mov r4, #0\n    add r6, r4, #0\n    mov r7, #2\n    mov r0, #0\n    mov r1, #1\n    bl GetItemIndexMapping\n    add r3, r0, #0\n    ldr r0, _021FFDBC ; =0x0000C0FC\n    str r6, [sp]\n    mov r1, #0x93\n    str r7, [sp, #4]\n    add r0, r4, r0\n    str r0, [sp, #8]\n    mov r0, #0x92\n    lsl r0, r0, #2\n    lsl r1, r1, #2\n    ldr r0, [r5, r0]\n    ldr r1, [r5, r1]\n    mov r2, #0x12\n    bl SpriteSystem_LoadCharResObj\n    add r4, r4, #1\n    cmp r4, #6\n    blt _021FFB54\n    ldr r0, _021FFDC0 ; =0x0000C103\n    mov r1, #0x92\n    lsl r1, r1, #2\n    str r0, [sp]\n    ldr r0, [r5, r1]\n    add r1, r1, #4\n    ldr r1, [r5, r1]\n    mov r2, #1\n    mov r3, #0\n    bl sub_020776B8\n    ldr r0, _021FFDC4 ; =0x0000C104\n    mov r1, #0x92\n    lsl r1, r1, #2\n    str r0, [sp]\n    ldr r0, [r5, r1]\n    add r1, r1, #4\n    ldr r1, [r5, r1]\n    mov r2, #1\n    mov r3, #0\n    bl sub_02077834\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    ldr r0, _021FFDAC ; =0x0000C0F9\n    mov r1, #0x92\n    mov r2, #0xf\n    lsl r1, r1, #2\n    str r0, [sp, #0xc]\n    ldr r0, [r5, r1]\n    add r1, r1, #4\n    ldr r1, [r5, r1]\n    add r3, r2, #0\n    bl SpriteSystem_LoadPlttResObj\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    ldr r0, _021FFDC8 ; =0x0000C101\n    mov r1, #0x92\n    lsl r1, r1, #2\n    str r0, [sp, #0xc]\n    ldr r0, [r5, r1]\n    add r1, r1, #4\n    ldr r1, [r5, r1]\n    mov r2, #0x3c\n    mov r3, #0xa\n    bl SpriteSystem_LoadPlttResObj\n    mov r1, #0x92\n    lsl r1, r1, #2\n    ldr r0, [r5, r1]\n    add r1, r1, #4\n    ldr r1, [r5, r1]\n    ldr r3, _021FFDB8 ; =0x0000C102\n    mov r2, #1\n    bl sub_020776EC\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #0xa\n    str r0, [sp, #4]\n    mov r0, #2\n    str r0, [sp, #8]\n    ldr r0, _021FFDB0 ; =0x0000C0FA\n    mov r1, #0x92\n    lsl r1, r1, #2\n    str r0, [sp, #0xc]\n    ldr r0, [r5, r1]\n    add r1, r1, #4\n    ldr r1, [r5, r1]\n    mov r2, #0xf\n    mov r3, #0x2f\n    bl SpriteSystem_LoadPlttResObj\n    mov r4, #0\n    add r6, r4, #0\n    mov r7, #1\n    mov r0, #0\n    mov r1, #2\n    bl GetItemIndexMapping\n    str r6, [sp]\n    add r3, r0, #0\n    mov r1, #0x93\n    str r7, [sp, #4]\n    mov r0, #2\n    str r0, [sp, #8]\n    ldr r0, _021FFDB4 ; =0x0000C0FB\n    lsl r1, r1, #2\n    add r0, r4, r0\n    str r0, [sp, #0xc]\n    mov r0, #0x92\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    ldr r1, [r5, r1]\n    mov r2, #0x12\n    bl SpriteSystem_LoadPlttResObj\n    add r4, r4, #1\n    cmp r4, #6\n    blt _021FFC2A\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, _021FFDAC ; =0x0000C0F9\n    mov r1, #0x92\n    lsl r1, r1, #2\n    str r0, [sp, #4]\n    ldr r0, [r5, r1]\n    add r1, r1, #4\n    ldr r1, [r5, r1]\n    mov r2, #0xf\n    mov r3, #0x19\n    bl SpriteSystem_LoadCellResObj\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, _021FFDB0 ; =0x0000C0FA\n    mov r1, #0x92\n    lsl r1, r1, #2\n    str r0, [sp, #4]\n    ldr r0, [r5, r1]\n    add r1, r1, #4\n    ldr r1, [r5, r1]\n    mov r2, #0xf\n    mov r3, #5\n    bl SpriteSystem_LoadCellResObj\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, _021FFDB4 ; =0x0000C0FB\n    mov r1, #0x92\n    lsl r1, r1, #2\n    str r0, [sp, #4]\n    ldr r0, [r5, r1]\n    add r1, r1, #4\n    ldr r1, [r5, r1]\n    mov r2, #0xf\n    mov r3, #0x31\n    bl SpriteSystem_LoadCellResObj\n    bl GetItemIconCell\n    add r3, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, _021FFDBC ; =0x0000C0FC\n    mov r1, #0x92\n    lsl r1, r1, #2\n    str r0, [sp, #4]\n    ldr r0, [r5, r1]\n    add r1, r1, #4\n    ldr r1, [r5, r1]\n    mov r2, #0x12\n    bl SpriteSystem_LoadCellResObj\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, _021FFDCC ; =0x0000C0FD\n    mov r1, #0x92\n    lsl r1, r1, #2\n    str r0, [sp, #4]\n    ldr r0, [r5, r1]\n    add r1, r1, #4\n    ldr r1, [r5, r1]\n    mov r2, #0x3c\n    mov r3, #5\n    bl SpriteSystem_LoadCellResObj\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, _021FFDAC ; =0x0000C0F9\n    mov r1, #0x92\n    lsl r1, r1, #2\n    str r0, [sp, #4]\n    ldr r0, [r5, r1]\n    add r1, r1, #4\n    ldr r1, [r5, r1]\n    mov r2, #0xf\n    mov r3, #0x15\n    bl SpriteSystem_LoadAnimResObj\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, _021FFDB0 ; =0x0000C0FA\n    mov r1, #0x92\n    lsl r1, r1, #2\n    str r0, [sp, #4]\n    ldr r0, [r5, r1]\n    add r1, r1, #4\n    ldr r1, [r5, r1]\n    mov r2, #0xf\n    mov r3, #0x18\n    bl SpriteSystem_LoadAnimResObj\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, _021FFDB4 ; =0x0000C0FB\n    mov r1, #0x92\n    lsl r1, r1, #2\n    str r0, [sp, #4]\n    ldr r0, [r5, r1]\n    add r1, r1, #4\n    ldr r1, [r5, r1]\n    mov r2, #0xf\n    mov r3, #4\n    bl SpriteSystem_LoadAnimResObj\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, _021FFDBC ; =0x0000C0FC\n    mov r1, #0x92\n    lsl r1, r1, #2\n    str r0, [sp, #4]\n    ldr r0, [r5, r1]\n    add r1, r1, #4\n    ldr r1, [r5, r1]\n    mov r2, #0xf\n    mov r3, #0x32\n    bl SpriteSystem_LoadAnimResObj\n    bl GetItemIconAnim\n    add r3, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, _021FFDCC ; =0x0000C0FD\n    mov r1, #0x92\n    lsl r1, r1, #2\n    str r0, [sp, #4]\n    ldr r0, [r5, r1]\n    add r1, r1, #4\n    ldr r1, [r5, r1]\n    mov r2, #0x12\n    bl SpriteSystem_LoadAnimResObj\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, _021FFDD0 ; =0x0000C0FE\n    mov r1, #0x92\n    lsl r1, r1, #2\n    str r0, [sp, #4]\n    ldr r0, [r5, r1]\n    add r1, r1, #4\n    ldr r1, [r5, r1]\n    mov r2, #0x3c\n    mov r3, #6\n    bl SpriteSystem_LoadAnimResObj\n    mov r1, #0x92\n    lsl r1, r1, #2\n    ldr r0, [r5, r1]\n    add r1, r1, #4\n    ldr r2, _021FFDD0 ; =0x0000C0FE\n    ldr r1, [r5, r1]\n    add r3, r2, #1\n    bl sub_0207775C\n    mov r2, #0x6a\n    lsl r2, r2, #4\n    mov r0, #0xf\n    mov r1, #0x30\n    add r2, r5, r2\n    mov r3, #6\n    bl GfGfxLoader_GetPlttData\n    ldr r1, _021FFDD4 ; =0x0000069C\n    str r0, [r5, r1]\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021FFDAC: .word 0x0000C0F9\n    _021FFDB0: .word 0x0000C0FA\n    _021FFDB4: .word 0x0000C0FB\n    _021FFDB8: .word 0x0000C102\n    _021FFDBC: .word 0x0000C0FC\n    _021FFDC0: .word 0x0000C103\n    _021FFDC4: .word 0x0000C104\n    _021FFDC8: .word 0x0000C101\n    _021FFDCC: .word 0x0000C0FD\n    _021FFDD0: .word 0x0000C0FE\n    _021FFDD4: .word 0x0000069C"
    );
    #endif
}

void ov15_021FFDD8(void) {
    /* Original at 0x021FFDD8 */
    /* Requires manual decompilation - 103 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    ldr r4, _021FFEBC ; =ov15_02200B0C\n    mov r7, #0\n    add r5, r6, #0\n    mov r0, #0x92\n    mov r1, #0x93\n    lsl r0, r0, #2\n    lsl r1, r1, #2\n    mov r3, #1\n    ldr r0, [r6, r0]\n    ldr r1, [r6, r1]\n    add r2, r4, #0\n    lsl r3, r3, #0x14\n    bl SpriteSystem_NewSpriteWithYOffset\n    mov r1, #0x25\n    lsl r1, r1, #4\n    str r0, [r5, r1]\n    add r7, r7, #1\n    add r4, #0x34\n    add r5, r5, #4\n    cmp r7, #0x27\n    blo _021FFDE2\n    add r0, r1, #0\n    add r0, #0x4c\n    ldr r0, [r6, r0]\n    mov r1, #1\n    bl ManagedSprite_SetPriority\n    mov r7, #0xb\n    mov r5, #0\n    add r4, r6, #0\n    lsl r7, r7, #6\n    ldr r0, [r4, r7]\n    mov r1, #1\n    bl ManagedSprite_SetPriority\n    add r5, r5, #1\n    add r4, r4, #4\n    cmp r5, #4\n    blo _021FFE1C\n    mov r7, #0x9d\n    mov r5, #0\n    add r4, r6, #0\n    lsl r7, r7, #2\n    ldr r0, [r4, r7]\n    mov r1, #1\n    bl ManagedSprite_SetPriority\n    add r5, r5, #1\n    add r4, r4, #4\n    cmp r5, #8\n    blo _021FFE34\n    add r0, r6, #0\n    mov r1, #1\n    bl ov15_02200458\n    mov r0, #0x25\n    lsl r0, r0, #4\n    ldr r0, [r6, r0]\n    mov r1, #0\n    bl ManagedSprite_SetDrawFlag\n    mov r0, #0x9b\n    lsl r0, r0, #2\n    ldr r0, [r6, r0]\n    mov r1, #0\n    bl ManagedSprite_SetDrawFlag\n    mov r0, #0x27\n    lsl r0, r0, #4\n    ldr r0, [r6, r0]\n    mov r1, #0\n    bl ManagedSprite_SetDrawFlag\n    mov r7, #0xb\n    mov r5, #0\n    add r4, r6, #0\n    lsl r7, r7, #6\n    ldr r0, [r4, r7]\n    mov r1, #0\n    bl ManagedSprite_SetDrawFlag\n    add r5, r5, #1\n    add r4, r4, #4\n    cmp r5, #4\n    blo _021FFE78\n    mov r7, #0x2d\n    mov r5, #0\n    add r4, r6, #0\n    lsl r7, r7, #4\n    ldr r0, [r4, r7]\n    mov r1, #0\n    bl ManagedSprite_SetDrawFlag\n    add r5, r5, #1\n    add r4, r4, #4\n    cmp r5, #6\n    blo _021FFE90\n    mov r0, #0xba\n    lsl r0, r0, #2\n    ldr r0, [r6, r0]\n    mov r1, #0\n    bl ManagedSprite_SetDrawFlag\n    mov r0, #0xba\n    lsl r0, r0, #2\n    ldr r0, [r6, r0]\n    mov r1, #1\n    bl ManagedSprite_SetPriority\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021FFEBC: .word ov15_02200B0C"
    );
    #endif
}

void ov15_021FFEC0(void) {
    /* Original at 0x021FFEC0 */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _021FFEC8 ; =0x00000648\n    mov r2, #0\n    strb r2, [r0, r1]\n    bx lr\n    _021FFEC8: .word 0x00000648"
    );
    #endif
}

void ov15_021FFECC(void) {
    /* Original at 0x021FFECC */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    lsl r4, r1, #2\n    ldr r1, _021FFF14 ; =ov15_02200AB8\n    ldr r2, _021FFF18 ; =ov15_02200AB9\n    add r5, r0, #0\n    mov r0, #0x2a\n    lsl r0, r0, #4\n    mov r3, #1\n    ldrb r1, [r1, r4]\n    ldrb r2, [r2, r4]\n    ldr r0, [r5, r0]\n    lsl r3, r3, #0x14\n    bl ManagedSprite_SetPositionXYWithSubscreenOffset\n    ldr r1, _021FFF1C ; =ov15_02200ABA\n    mov r0, #0x2a\n    lsl r0, r0, #4\n    ldrb r1, [r1, r4]\n    ldr r0, [r5, r0]\n    bl ManagedSprite_SetAnim\n    ldr r1, _021FFF20 ; =ov15_02200ABB\n    mov r0, #0x2a\n    lsl r0, r0, #4\n    ldrb r1, [r1, r4]\n    ldr r0, [r5, r0]\n    bl ManagedSprite_SetPaletteOverride\n    mov r0, #0x2a\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    mov r1, #1\n    bl ManagedSprite_SetDrawFlag\n    pop {r3, r4, r5, pc}\n    nop\n    _021FFF14: .word ov15_02200AB8\n    _021FFF18: .word ov15_02200AB9\n    _021FFF1C: .word ov15_02200ABA\n    _021FFF20: .word ov15_02200ABB"
    );
    #endif
}

void ov15_021FFF24(void) {
    /* Original at 0x021FFF24 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0x2a\n    lsl r1, r1, #4\n    ldr r0, [r0, r1]\n    ldr r3, _021FFF30 ; =ManagedSprite_SetDrawFlag\n    mov r1, #0\n    bx r3\n    _021FFF30: .word ManagedSprite_SetDrawFlag"
    );
    #endif
}

void ov15_021FFF34(void) {
    /* Original at 0x021FFF34 */
    /* Requires manual decompilation - 72 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    cmp r4, #9\n    blt _021FFF42\n    bl GF_AssertFail\n    cmp r4, #8\n    bne _021FFF58\n    ldr r1, _021FFFC8 ; =ov15_02200A36\n    mov r0, #0x2a\n    lsl r2, r4, #2\n    lsl r0, r0, #4\n    ldrb r1, [r1, r2]\n    ldr r0, [r5, r0]\n    bl ManagedSprite_SetAnim\n    b _021FFFA0\n    mov r2, #0x8d\n    lsl r2, r2, #2\n    ldr r0, [r5, r2]\n    add r3, r0, #4\n    add r0, #0x64\n    ldrb r1, [r0]\n    mov r0, #0xc\n    mul r0, r1\n    add r1, r3, r0\n    mov r0, #6\n    ldr r3, _021FFFCC ; =0x00000672\n    ldrsh r0, [r1, r0]\n    ldrb r3, [r5, r3]\n    add r0, r0, r4\n    cmp r0, r3\n    bne _021FFF84\n    add r2, #0x6c\n    ldr r0, [r5, r2]\n    mov r1, #0xa\n    bl ManagedSprite_SetAnim\n    b _021FFFA0\n    ldrb r1, [r1, #9]\n    cmp r0, r1\n    blt _021FFF96\n    add r2, #0x6c\n    ldr r0, [r5, r2]\n    mov r1, #0x28\n    bl ManagedSprite_SetAnim\n    b _021FFFA0\n    add r2, #0x6c\n    ldr r0, [r5, r2]\n    mov r1, #0x14\n    bl ManagedSprite_SetAnim\n    ldr r1, _021FFFD0 ; =ov15_02200A34\n    lsl r4, r4, #2\n    ldr r2, _021FFFD4 ; =ov15_02200A35\n    mov r0, #0x2a\n    lsl r0, r0, #4\n    mov r3, #1\n    ldrb r1, [r1, r4]\n    ldrb r2, [r2, r4]\n    ldr r0, [r5, r0]\n    lsl r3, r3, #0x14\n    bl ManagedSprite_SetPositionXYWithSubscreenOffset\n    ldr r1, _021FFFD8 ; =ov15_02200A37\n    mov r0, #0x2a\n    lsl r0, r0, #4\n    ldrb r1, [r1, r4]\n    ldr r0, [r5, r0]\n    bl ManagedSprite_SetPaletteOverride\n    pop {r3, r4, r5, pc}\n    _021FFFC8: .word ov15_02200A36\n    _021FFFCC: .word 0x00000672\n    _021FFFD0: .word ov15_02200A34\n    _021FFFD4: .word ov15_02200A35\n    _021FFFD8: .word ov15_02200A37"
    );
    #endif
}

void ov15_021FFFDC(void) {
    /* Original at 0x021FFFDC */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    cmp r4, #8\n    blt _021FFFEA\n    bl GF_AssertFail\n    ldr r1, _02200020 ; =ov15_022009D4\n    lsl r4, r4, #2\n    ldr r2, _02200024 ; =ov15_022009D5\n    mov r0, #0x2a\n    lsl r0, r0, #4\n    mov r3, #1\n    ldrb r1, [r1, r4]\n    ldrb r2, [r2, r4]\n    ldr r0, [r5, r0]\n    lsl r3, r3, #0x14\n    bl ManagedSprite_SetPositionXYWithSubscreenOffset\n    ldr r1, _02200028 ; =ov15_022009D6\n    mov r0, #0x2a\n    lsl r0, r0, #4\n    ldrb r1, [r1, r4]\n    ldr r0, [r5, r0]\n    bl ManagedSprite_SetAnim\n    ldr r1, _0220002C ; =ov15_022009D7\n    mov r0, #0x2a\n    lsl r0, r0, #4\n    ldrb r1, [r1, r4]\n    ldr r0, [r5, r0]\n    bl ManagedSprite_SetPaletteOverride\n    pop {r3, r4, r5, pc}\n    _02200020: .word ov15_022009D4\n    _02200024: .word ov15_022009D5\n    _02200028: .word ov15_022009D6\n    _0220002C: .word ov15_022009D7"
    );
    #endif
}

void ov15_02200030(void) {
    /* Original at 0x02200030 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r1, #0\n    cmp r5, #7\n    bgt _02200058\n    mov r1, #0x6a\n    lsl r1, r1, #4\n    ldr r0, [r0, r1]\n    mov r2, #1\n    ldr r4, [r0, #0xc]\n    lsl r2, r2, #8\n    add r0, r4, r2\n    mov r1, #0\n    bl GXS_LoadOBJPltt\n    lsl r0, r5, #5\n    add r0, r4, r0\n    lsl r1, r5, #5\n    mov r2, #0x20\n    bl GXS_LoadOBJPltt\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov15_0220005C(void) {
    /* Original at 0x0220005C */
    /* Requires manual decompilation - 70 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    str r0, [sp]\n    add r6, r1, #0\n    str r2, [sp, #4]\n    str r3, [sp, #8]\n    bne _02200096\n    mov r4, #0\n    mov r6, #0xa9\n    add r5, r0, #0\n    add r7, r4, #0\n    lsl r6, r6, #2\n    ldr r0, [r5, r6]\n    add r1, r7, #0\n    bl ManagedSprite_SetDrawFlag\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #6\n    blt _02200074\n    mov r1, #0xaf\n    ldr r0, [sp]\n    lsl r1, r1, #2\n    ldr r0, [r0, r1]\n    mov r1, #0\n    bl ManagedSprite_SetDrawFlag\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    mov r7, #0xa9\n    mov r5, #0\n    add r4, r0, #0\n    lsl r7, r7, #2\n    cmp r5, r6\n    bge _022000AC\n    ldr r0, [r4, r7]\n    mov r1, #1\n    bl ManagedSprite_SetDrawFlag\n    b _022000B8\n    mov r0, #0xa9\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl ManagedSprite_SetDrawFlag\n    add r5, r5, #1\n    add r4, r4, #4\n    cmp r5, #6\n    blt _0220009E\n    ldr r0, [sp, #4]\n    cmp r0, #0\n    blt _022000DC\n    add r0, #0x15\n    str r0, [sp, #4]\n    lsl r1, r0, #2\n    ldr r0, [sp]\n    add r1, r0, r1\n    mov r0, #0x25\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #0\n    bl ManagedSprite_SetDrawFlag\n    ldr r0, [sp, #8]\n    cmp r0, #0\n    beq _022000F0\n    mov r1, #0xaf\n    ldr r0, [sp]\n    lsl r1, r1, #2\n    ldr r0, [r0, r1]\n    mov r1, #0\n    bl ManagedSprite_SetDrawFlag\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov15_022000F4(void) {
    /* Original at 0x022000F4 */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0x8d\n    lsl r0, r0, #2\n    ldr r3, [r4, r0]\n    add r1, r3, #0\n    add r1, #0x64\n    ldrb r2, [r1]\n    mov r1, #0xc\n    mul r1, r2\n    add r1, r3, r1\n    ldrb r1, [r1, #0xd]\n    cmp r1, #6\n    bhi _02200128\n    add r0, #0x60\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl ManagedSprite_SetDrawFlag\n    mov r0, #0xa6\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl ManagedSprite_SetDrawFlag\n    pop {r4, pc}\n    add r0, #0x60\n    ldr r0, [r4, r0]\n    mov r1, #1\n    bl ManagedSprite_SetDrawFlag\n    mov r0, #0xa6\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #1\n    bl ManagedSprite_SetDrawFlag\n    pop {r4, pc}"
    );
    #endif
}

void ov15_02200140(void) {
    /* Original at 0x02200140 */
    /* Requires manual decompilation - 59 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r7, r0, #0\n    ldr r6, _022001BC ; =ov15_02200B0C\n    str r1, [sp]\n    str r2, [sp, #4]\n    str r3, [sp, #8]\n    mov r4, #0\n    add r5, r7, #0\n    mov r0, #0x95\n    mov r1, #0x34\n    mov r2, #0x36\n    lsl r0, r0, #2\n    mov r3, #1\n    ldrsh r1, [r6, r1]\n    ldrsh r2, [r6, r2]\n    ldr r0, [r5, r0]\n    lsl r3, r3, #0x14\n    bl ManagedSprite_SetPositionXYWithSubscreenOffset\n    ldr r0, [sp, #4]\n    cmp r4, r0\n    bge _0220019A\n    ldr r0, [sp, #8]\n    cmp r0, #0\n    beq _0220018C\n    ldr r3, [sp]\n    mov r2, #6\n    ldrsh r2, [r3, r2]\n    add r0, r7, #0\n    add r1, r4, #0\n    add r2, r2, r4\n    lsl r2, r2, #1\n    add r3, r7, r2\n    ldr r2, _022001C0 ; =0x000006A4\n    ldrh r2, [r3, r2]\n    bl ov15_021FF8F0\n    mov r0, #0x95\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #1\n    bl ManagedSprite_SetDrawFlag\n    b _022001A6\n    mov r0, #0x95\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #0\n    bl ManagedSprite_SetDrawFlag\n    add r4, r4, #1\n    add r6, #0x34\n    add r5, r5, #4\n    cmp r4, #6\n    blt _02200152\n    add r0, r7, #0\n    bl ov15_022000F4\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _022001BC: .word ov15_02200B0C\n    _022001C0: .word 0x000006A4"
    );
    #endif
}

void ov15_022001C4(void) {
    /* Original at 0x022001C4 */
    /* Requires manual decompilation - 53 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r2, #0\n    str r0, [sp]\n    add r4, r1, #0\n    mov r7, #0\n    add r0, r5, #0\n    mov r1, #6\n    mvn r7, r7\n    bl _s32_div_f\n    mov r1, #6\n    add r2, r0, #0\n    ldrsh r3, [r4, r1]\n    mul r2, r1\n    cmp r3, r2\n    bne _022001EC\n    add r0, r5, #0\n    bl _s32_div_f\n    add r7, r1, #0\n    ldr r4, _02200238 ; =ov15_02200B0C\n    ldr r5, [sp]\n    mov r6, #0\n    mov r0, #0x95\n    mov r1, #0x34\n    mov r2, #0x36\n    lsl r0, r0, #2\n    mov r3, #1\n    ldrsh r1, [r4, r1]\n    ldrsh r2, [r4, r2]\n    ldr r0, [r5, r0]\n    lsl r3, r3, #0x14\n    bl ManagedSprite_SetPositionXYWithSubscreenOffset\n    cmp r6, r7\n    bne _0220021A\n    mov r0, #0x95\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #1\n    bl ManagedSprite_SetDrawFlag\n    b _02200226\n    mov r0, #0x95\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #0\n    bl ManagedSprite_SetDrawFlag\n    add r6, r6, #1\n    add r4, #0x34\n    add r5, r5, #4\n    cmp r6, #6\n    blt _022001F2\n    ldr r0, [sp]\n    bl ov15_022000F4\n    pop {r3, r4, r5, r6, r7, pc}\n    _02200238: .word ov15_02200B0C"
    );
    #endif
}

void ov15_0220023C(void) {
    /* Original at 0x0220023C */
    /* Requires manual decompilation - 39 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r0, #0\n    mov r0, #0x2a\n    lsl r0, r0, #4\n    add r6, r1, #0\n    ldr r0, [r7, r0]\n    mov r1, #1\n    bl ManagedSprite_SetDrawFlag\n    mov r4, #0\n    add r5, r7, #0\n    ldrb r0, [r6, r4]\n    cmp r0, #0xff\n    beq _02200266\n    mov r0, #0xb\n    lsl r0, r0, #6\n    ldr r0, [r5, r0]\n    mov r1, #1\n    bl ManagedSprite_SetDrawFlag\n    b _02200272\n    mov r0, #0xb\n    lsl r0, r0, #6\n    ldr r0, [r5, r0]\n    mov r1, #0\n    bl ManagedSprite_SetDrawFlag\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #4\n    blt _02200252\n    mov r0, #0xa5\n    lsl r0, r0, #2\n    ldr r0, [r7, r0]\n    mov r1, #0\n    bl ManagedSprite_SetDrawFlag\n    mov r0, #0xa6\n    lsl r0, r0, #2\n    ldr r0, [r7, r0]\n    mov r1, #0\n    bl ManagedSprite_SetDrawFlag\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov15_02200294(void) {
    ManagedSprite_SetDrawFlag(0, 0xb);
}

void ov15_022002B4(void) {
    /* Original at 0x022002B4 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    mov r7, #0x95\n    add r5, r0, #0\n    add r6, r1, #0\n    mov r4, #0\n    lsl r7, r7, #2\n    cmp r6, r4\n    beq _022002CE\n    ldr r0, [r5, r7]\n    mov r1, #0\n    bl ManagedSprite_SetDrawFlag\n    b _022002E0\n    mov r0, #0x95\n    lsl r0, r0, #2\n    mov r3, #1\n    ldr r0, [r5, r0]\n    mov r1, #0x56\n    mov r2, #0x4c\n    lsl r3, r3, #0x14\n    bl ManagedSprite_SetPositionXYWithSubscreenOffset\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #6\n    blt _022002C0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov15_022002EC(void) {
    /* Original at 0x022002EC */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0\n    cmp r0, #0x64\n    bge _022002F4\n    mov r1, #1\n    cmp r0, #0xa\n    bge _022002FA\n    mov r1, #2\n    add r0, r1, #0\n    bx lr"
    );
    #endif
}

void ov15_02200300(void) {
    /* Original at 0x02200300 */
    /* Requires manual decompilation - 132 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    add r0, r1, #0\n    str r1, [sp]\n    str r2, [sp, #4]\n    cmp r0, #2\n    bne _0220031A\n    add r0, r2, #0\n    cmp r0, #0x63\n    ble _0220031A\n    mov r0, #0x63\n    str r0, [sp, #4]\n    ldr r0, [sp]\n    ldr r2, _02200414 ; =ov15_02200998\n    sub r0, r0, #2\n    lsl r1, r0, #2\n    str r1, [sp, #8]\n    ldr r1, [r2, r1]\n    mov r7, #0\n    cmp r1, #0\n    ble _0220036C\n    mov r1, #0x18\n    mul r1, r0\n    ldr r0, _02200418 ; =ov15_02200A58\n    add r4, r0, r1\n    ldr r0, _0220041C ; =ov15_02200A88\n    add r6, r0, r1\n    ldr r0, [r4]\n    lsl r0, r0, #2\n    add r1, r5, r0\n    mov r0, #0x2d\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #1\n    bl ManagedSprite_SetDrawFlag\n    ldr r0, [r4]\n    lsl r0, r0, #2\n    add r1, r5, r0\n    mov r0, #0x2d\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    ldr r1, [r6]\n    bl ManagedSprite_SetAnim\n    ldr r1, _02200414 ; =ov15_02200998\n    ldr r0, [sp, #8]\n    add r7, r7, #1\n    ldr r0, [r1, r0]\n    add r4, r4, #4\n    add r6, r6, #4\n    cmp r7, r0\n    blt _02200338\n    ldr r0, [sp, #4]\n    bl ov15_022002EC\n    cmp r0, #0\n    beq _022003D4\n    ldr r1, [sp]\n    sub r1, r1, #2\n    bne _0220039A\n    cmp r0, #2\n    bne _0220039A\n    mov r0, #0x2d\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    mov r1, #0\n    bl ManagedSprite_SetDrawFlag\n    mov r0, #0xb7\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #0\n    bl ManagedSprite_SetDrawFlag\n    b _022003D4\n    ldr r1, [sp]\n    sub r1, r1, #2\n    cmp r1, #1\n    bne _022003D4\n    sub r2, r0, #1\n    ldr r0, _02200420 ; =ov15_022009A0\n    lsl r7, r2, #2\n    ldr r0, [r0, r7]\n    mov r4, #0\n    cmp r0, #0\n    ble _022003D4\n    ldr r1, _02200424 ; =ov15_02200A14\n    lsl r0, r2, #4\n    add r6, r1, r0\n    ldr r0, [r6]\n    lsl r0, r0, #2\n    add r1, r5, r0\n    mov r0, #0x2d\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #0\n    bl ManagedSprite_SetDrawFlag\n    ldr r0, _02200420 ; =ov15_022009A0\n    add r4, r4, #1\n    ldr r0, [r0, r7]\n    add r6, r6, #4\n    cmp r4, r0\n    blt _022003B6\n    mov r0, #0xba\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #1\n    bl ManagedSprite_SetDrawFlag\n    mov r0, #0xba\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #0\n    bl ManagedSprite_SetAnimationFrame\n    mov r0, #0xba\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #0x25\n    bl ManagedSprite_SetAnim\n    mov r0, #0xa7\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #0\n    bl ManagedSprite_SetAnimationFrame\n    mov r0, #0xa7\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #0x27\n    bl ManagedSprite_SetAnim\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    _02200414: .word ov15_02200998\n    _02200418: .word ov15_02200A58\n    _0220041C: .word ov15_02200A88\n    _02200420: .word ov15_022009A0\n    _02200424: .word ov15_02200A14"
    );
    #endif
}

void ov15_02200428(void) {
    /* Original at 0x02200428 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    mov r4, #0\n    mov r6, #0x2d\n    str r0, [sp]\n    add r5, r0, #0\n    add r7, r4, #0\n    lsl r6, r6, #4\n    ldr r0, [r5, r6]\n    add r1, r7, #0\n    bl ManagedSprite_SetDrawFlag\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #6\n    blt _02200436\n    mov r1, #0xba\n    ldr r0, [sp]\n    lsl r1, r1, #2\n    ldr r0, [r0, r1]\n    mov r1, #0\n    bl ManagedSprite_SetDrawFlag\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov15_02200458(void) {
    /* Original at 0x02200458 */
    /* Requires manual decompilation - 61 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r7, r1, #0\n    add r5, r0, #0\n    cmp r7, #1\n    beq _0220046C\n    cmp r7, #0\n    beq _0220046C\n    bl GF_AssertFail\n    add r0, sp, #0\n    mov r1, #0\n    mov r2, #8\n    bl MI_CpuFill8\n    mov r6, #0\n    add r4, r6, #0\n    mov r0, #0x8d\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    add r0, r0, r4\n    ldrb r0, [r0, #0xc]\n    cmp r0, #8\n    blo _0220048C\n    bl GF_AssertFail\n    mov r0, #0x8d\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    add r1, r0, r4\n    ldr r0, [r1, #4]\n    cmp r0, #0\n    beq _022004A2\n    ldrb r2, [r1, #0xc]\n    mov r1, #1\n    add r0, sp, #0\n    strb r1, [r0, r2]\n    add r6, r6, #1\n    add r4, #0xc\n    cmp r6, #8\n    blt _0220047A\n    mov r6, #0\n    add r4, sp, #0\n    ldrb r0, [r4]\n    cmp r0, #0\n    beq _022004C2\n    mov r0, #0x9d\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    add r1, r7, #0\n    bl ManagedSprite_SetDrawFlag\n    b _022004CE\n    mov r0, #0x9d\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #0\n    bl ManagedSprite_SetDrawFlag\n    add r6, r6, #1\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r6, #8\n    blt _022004AE\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov15_022004DC(void) {
    /* Original at 0x022004DC */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "mov r2, #0xa7\n    lsl r2, r2, #2\n    ldr r3, _022004E8 ; =ManagedSprite_SetDrawFlag\n    ldr r0, [r0, r2]\n    bx r3\n    nop\n    _022004E8: .word ManagedSprite_SetDrawFlag"
    );
    #endif
}
