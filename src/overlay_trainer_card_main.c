/* Decompiled from asm/overlay_trainer_card_main.s */
#include "global.h"

void TrainerCardMainApp_Init(void) {
    /* Original at 0x021E5AC0 */
    /* Requires manual decompilation - 298 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    mov r0, #0\n    add r1, r0, #0\n    bl Main_SetVBlankIntrCB\n    mov r0, #0\n    add r1, r0, #0\n    bl Main_SetHBlankIntrCB\n    bl GfGfx_DisableEngineAPlanes\n    bl GfGfx_DisableEngineBPlanes\n    mov r2, #1\n    lsl r2, r2, #0x1a\n    ldr r1, [r2]\n    ldr r0, _021E5D44 ; =0xFFFFE0FF\n    and r1, r0\n    str r1, [r2]\n    ldr r2, _021E5D48 ; =0x04001000\n    ldr r1, [r2]\n    and r0, r1\n    str r0, [r2]\n    mov r0, #0\n    add r1, r0, #0\n    bl sub_0200FBF4\n    mov r0, #1\n    mov r1, #0\n    bl sub_0200FBF4\n    mov r0, #0\n    bl sub_0200FBDC\n    mov r0, #1\n    bl sub_0200FBDC\n    mov r0, #4\n    mov r1, #8\n    bl SetKeyRepeatTimers\n    mov r2, #5\n    mov r0, #3\n    mov r1, #0x19\n    lsl r2, r2, #0x10\n    bl Heap_Create\n    ldr r1, _021E5D4C ; =0x00003444\n    add r0, r5, #0\n    mov r2, #0x19\n    bl OverlayManager_CreateAndGetData\n    ldr r2, _021E5D4C ; =0x00003444\n    mov r1, #0\n    add r4, r0, #0\n    bl memset\n    add r0, r5, #0\n    bl OverlayManager_GetArgs\n    add r1, r4, #0\n    add r1, #0xe4\n    str r0, [r1]\n    add r0, r4, #0\n    add r0, #0xe4\n    ldr r1, [r0]\n    add r0, r4, #0\n    add r0, #0xe8\n    str r1, [r0]\n    add r0, r4, #0\n    add r0, #0xe4\n    ldr r1, [r0]\n    ldr r0, _021E5D50 ; =0x0000066C\n    ldr r0, [r1, r0]\n    bl MenuInputStateMgr_GetState\n    ldr r1, _021E5D54 ; =0x0000310C\n    str r0, [r4, r1]\n    add r0, r4, #0\n    add r0, #0xe4\n    ldr r1, [r0]\n    mov r0, #0x67\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl Save_PlayerData_GetOptionsAddr\n    add r5, r0, #0\n    bl Options_GetTextFrameDelay\n    ldr r1, _021E5D58 ; =0x0000343E\n    strb r0, [r4, r1]\n    add r0, r5, #0\n    bl Options_GetFrame\n    ldr r1, _021E5D5C ; =0x0000343D\n    strb r0, [r4, r1]\n    bl sub_02037474\n    cmp r0, #1\n    bne _021E5B96\n    ldr r1, _021E5D60 ; =0x0000343A\n    mov r0, #2\n    ldrb r2, [r4, r1]\n    orr r0, r2\n    strb r0, [r4, r1]\n    add r0, r4, #0\n    add r0, #0xe8\n    ldr r0, [r0]\n    ldr r1, _021E5D60 ; =0x0000343A\n    add r0, #0x33\n    ldrb r0, [r0]\n    cmp r0, #0\n    beq _021E5BB4\n    ldrb r2, [r4, r1]\n    mov r0, #1\n    bic r2, r0\n    mov r0, #1\n    orr r0, r2\n    strb r0, [r4, r1]\n    b _021E5BBC\n    ldrb r2, [r4, r1]\n    mov r0, #1\n    bic r2, r0\n    strb r2, [r4, r1]\n    ldr r2, _021E5D60 ; =0x0000343A\n    ldrb r0, [r4, r2]\n    lsl r1, r0, #0x1e\n    lsr r1, r1, #0x1f\n    cmp r1, #1\n    bne _021E5BDC\n    add r1, r4, #0\n    add r1, #0xe4\n    ldr r3, [r1]\n    ldr r1, _021E5D64 ; =0x00000678\n    ldr r1, [r3, r1]\n    cmp r1, #0\n    bne _021E5BDC\n    mov r1, #1\n    bic r0, r1\n    strb r0, [r4, r2]\n    add r0, r4, #0\n    add r0, #0xe8\n    ldr r0, [r0]\n    ldrb r0, [r0]\n    add r0, #0xf9\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    cmp r0, #1\n    bhi _021E5C1C\n    ldr r7, _021E5D68 ; =0x00003424\n    mov r3, #1\n    mov r2, #0\n    add r0, r2, #0\n    add r1, r3, #0\n    add r5, r7, #0\n    add r6, r4, #0\n    add r6, #0xe8\n    ldr r6, [r6]\n    ldrh r6, [r6, #6]\n    tst r6, r3\n    beq _021E5C0C\n    add r6, r4, r2\n    strb r1, [r6, r5]\n    b _021E5C10\n    add r6, r4, r2\n    strb r0, [r6, r7]\n    lsl r3, r3, #0x11\n    add r2, r2, #1\n    lsr r3, r3, #0x10\n    cmp r2, #0x10\n    blt _021E5BFA\n    b _021E5C2C\n    mov r3, #0\n    ldr r0, _021E5D68 ; =0x00003424\n    add r2, r3, #0\n    add r1, r4, r3\n    add r3, r3, #1\n    strb r2, [r1, r0]\n    cmp r3, #0x10\n    blt _021E5C22\n    mov r0, #0x19\n    bl BgConfig_Alloc\n    str r0, [r4]\n    add r0, r4, #0\n    bl ov51_021E5F64\n    bl ov51_021E60D4\n    ldr r0, [r4]\n    bl ov51_021E6238\n    add r0, r4, #0\n    bl ov51_021E6354\n    bl sub_020210BC\n    mov r0, #4\n    bl sub_02021148\n    mov r0, #1\n    bl TextFlags_SetCanTouchSpeedUpPrint\n    mov r0, #1\n    bl TextFlags_SetCanABSpeedUpPrint\n    mov r1, #0\n    mov r0, #0x38\n    add r2, r1, #0\n    bl Sound_SetSceneAndPlayBGM\n    ldr r0, _021E5D6C ; =0x000033A0\n    add r0, r4, r0\n    bl ov51_021E7DA4\n    ldr r0, _021E5D70 ; =SEQ_SE_DP_CARD3\n    bl PlaySE\n    ldr r0, _021E5D74 ; =0x0000311C\n    add r0, r4, r0\n    bl ov51_021E78F8\n    ldr r2, _021E5D68 ; =0x00003424\n    ldr r0, _021E5D74 ; =0x0000311C\n    add r1, r4, r2\n    add r2, #0x16\n    ldrb r2, [r4, r2]\n    add r0, r4, r0\n    lsl r2, r2, #0x1f\n    lsr r2, r2, #0x1f\n    bl ov51_021E7AF4\n    ldr r0, _021E5D74 ; =0x0000311C\n    add r0, r4, r0\n    bl ov51_021E7BD0\n    add r0, r4, #0\n    bl ov51_021E6E60\n    ldr r2, _021E5D78 ; =0x000033CC\n    add r0, r4, #0\n    ldr r2, [r4, r2]\n    add r0, #0x54\n    mov r1, #1\n    bl ov51_021E7664\n    add r0, r4, #0\n    add r0, #0xe4\n    ldr r1, [r0]\n    ldr r0, _021E5D7C ; =0x00000674\n    ldr r0, [r1, r0]\n    cmp r0, #0\n    beq _021E5CC2\n    mov r1, #1\n    b _021E5CC4\n    mov r1, #0\n    ldr r0, _021E5D80 ; =0x000030F4\n    str r1, [r4, r0]\n    add r1, r4, #0\n    add r1, #0xe4\n    ldr r2, [r1]\n    mov r0, #0\n    ldr r1, _021E5D7C ; =0x00000674\n    sub r3, r0, #1\n    str r0, [r2, r1]\n    ldr r1, _021E5D84 ; =0x00003434\n    ldr r2, _021E5D88 ; =0x00003108\n    strb r0, [r4, r1]\n    str r3, [r4, r2]\n    add r2, r1, #0\n    sub r2, #0x98\n    str r0, [r4, r2]\n    add r1, r1, #4\n    strb r0, [r4, r1]\n    bl ov51_021E6C00\n    add r0, r4, #0\n    bl ov51_021E6734\n    add r0, r4, #0\n    mov r1, #0\n    bl ov51_021E76A4\n    ldr r0, _021E5D8C ; =ov51_021E6B88\n    add r1, r4, #0\n    bl Main_SetVBlankIntrCB\n    bl sub_0203A964\n    mov r0, #1\n    mov r1, #0x2a\n    bl GF_SndHandleSetPlayerVolume\n    mov r0, #6\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #0x19\n    mov r1, #3\n    str r0, [sp, #8]\n    mov r0, #2\n    add r2, r1, #0\n    mov r3, #0\n    bl BeginNormalPaletteFade\n    add r4, #0xe8\n    ldr r0, [r4]\n    ldrb r0, [r0]\n    cmp r0, #7\n    beq _021E5D3C\n    cmp r0, #8\n    beq _021E5D3C\n    mov r0, #4\n    mov r1, #0\n    bl GfGfx_EngineATogglePlanes\n    mov r0, #1\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _021E5D44: .word 0xFFFFE0FF\n    _021E5D48: .word 0x04001000\n    _021E5D4C: .word 0x00003444\n    _021E5D50: .word 0x0000066C\n    _021E5D54: .word 0x0000310C\n    _021E5D58: .word 0x0000343E\n    _021E5D5C: .word 0x0000343D\n    _021E5D60: .word 0x0000343A\n    _021E5D64: .word 0x00000678\n    _021E5D68: .word 0x00003424\n    _021E5D6C: .word 0x000033A0\n    _021E5D70: .word SEQ_SE_DP_CARD3\n    _021E5D74: .word 0x0000311C\n    _021E5D78: .word 0x000033CC\n    _021E5D7C: .word 0x00000674\n    _021E5D80: .word 0x000030F4\n    _021E5D84: .word 0x00003434\n    _021E5D88: .word 0x00003108\n    _021E5D8C: .word ov51_021E6B88"
    );
    #endif
}

void TrainerCardMainApp_Main(void) {
    /* Original at 0x021E5D90 */
    /* Requires manual decompilation - 135 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r5, r1, #0\n    bl OverlayManager_GetData\n    ldr r1, [r5]\n    add r4, r0, #0\n    cmp r1, #5\n    bhi _021E5E96\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _021E5DAE: ; jump table\n    bl IsPaletteFadeFinished\n    cmp r0, #0\n    beq _021E5E96\n    mov r0, #1\n    str r0, [r5]\n    b _021E5E96\n    bl ov51_021E6B44\n    cmp r0, #3\n    bne _021E5DDC\n    ldr r0, _021E5EB8 ; =0x00003436\n    mov r1, #0\n    strb r1, [r4, r0]\n    mov r0, #3\n    str r0, [r5]\n    b _021E5E26\n    cmp r0, #4\n    bne _021E5DFA\n    ldr r0, _021E5EBC ; =0x0000311C\n    mov r1, #1\n    add r0, r4, r0\n    mov r2, #3\n    add r3, r1, #0\n    bl ov51_021E7D44\n    ldr r0, _021E5EB8 ; =0x00003436\n    mov r1, #0\n    strb r1, [r4, r0]\n    mov r0, #4\n    str r0, [r5]\n    b _021E5E26\n    cmp r0, #5\n    bne _021E5E26\n    ldr r0, _021E5EBC ; =0x0000311C\n    mov r2, #1\n    add r0, r4, r0\n    mov r1, #0\n    add r3, r2, #0\n    bl ov51_021E7D44\n    mov r0, #6\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r1, #0x19\n    str r1, [sp, #8]\n    mov r1, #4\n    add r2, r1, #0\n    mov r3, #0\n    bl BeginNormalPaletteFade\n    mov r0, #2\n    str r0, [r5]\n    add r1, r4, #0\n    add r1, #0xe8\n    ldr r1, [r1]\n    add r0, r4, #0\n    ldrb r1, [r1, #4]\n    lsl r1, r1, #0x1e\n    lsr r1, r1, #0x1f\n    bl ov51_021E6DA8\n    b _021E5E96\n    bl IsPaletteFadeFinished\n    cmp r0, #0\n    beq _021E5E96\n    add sp, #0xc\n    mov r0, #1\n    pop {r4, r5, pc}\n    bl ov51_021E6888\n    cmp r0, #0\n    beq _021E5E96\n    mov r0, #1\n    str r0, [r5]\n    b _021E5E96\n    bl ov51_021E67A4\n    cmp r0, #1\n    beq _021E5E64\n    cmp r0, #2\n    beq _021E5E6A\n    b _021E5E96\n    mov r0, #1\n    str r0, [r5]\n    b _021E5E96\n    mov r0, #5\n    str r0, [r5]\n    b _021E5E96\n    mov r0, #6\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r1, #0x19\n    str r1, [sp, #8]\n    mov r1, #4\n    add r2, r1, #0\n    mov r3, #0\n    bl BeginNormalPaletteFade\n    add r0, r4, #0\n    add r0, #0xe4\n    ldr r1, [r0]\n    ldr r0, _021E5EC0 ; =0x00000674\n    mov r2, #1\n    str r2, [r1, r0]\n    mov r0, #2\n    str r0, [r5]\n    ldr r0, _021E5EC4 ; =0x0000343F\n    ldrb r1, [r4, r0]\n    add r1, r1, #1\n    strb r1, [r4, r0]\n    ldrb r1, [r4, r0]\n    cmp r1, #0x80\n    blo _021E5EA8\n    mov r1, #0\n    strb r1, [r4, r0]\n    ldr r0, _021E5EBC ; =0x0000311C\n    ldr r0, [r4, r0]\n    bl SpriteList_RenderAndAnimateSprites\n    mov r0, #0\n    add sp, #0xc\n    pop {r4, r5, pc}\n    nop\n    _021E5EB8: .word 0x00003436\n    _021E5EBC: .word 0x0000311C\n    _021E5EC0: .word 0x00000674\n    _021E5EC4: .word 0x0000343F"
    );
    #endif
}

void TrainerCardMainApp_Exit(void) {
    /* Original at 0x021E5EC8 */
    /* Requires manual decompilation - 55 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    bl OverlayManager_GetData\n    add r4, r0, #0\n    bl ov51_021E6C00\n    add r0, r4, #0\n    bl ov51_021E6038\n    ldr r0, _021E5F4C ; =0x0000311C\n    add r0, r4, r0\n    bl ov51_021E7CA4\n    ldr r0, _021E5F50 ; =0x000030EC\n    ldr r0, [r4, r0]\n    bl Heap_Free\n    ldr r0, _021E5F54 ; =0x000033B8\n    ldr r0, [r4, r0]\n    bl Heap_Free\n    ldr r0, _021E5F58 ; =0x000033B0\n    ldr r0, [r4, r0]\n    bl Heap_Free\n    add r0, r4, #0\n    bl ov51_021E6EF0\n    ldr r0, [r4]\n    bl ov51_021E6644\n    bl sub_02021238\n    mov r0, #0\n    bl TextFlags_SetCanTouchSpeedUpPrint\n    mov r0, #0\n    bl TextFlags_SetCanABSpeedUpPrint\n    add r0, r4, #0\n    add r0, #0xe4\n    ldr r1, [r0]\n    ldr r0, _021E5F5C ; =0x0000066C\n    ldr r0, [r1, r0]\n    ldr r1, _021E5F60 ; =0x0000310C\n    ldr r1, [r4, r1]\n    bl MenuInputStateMgr_SetState\n    add r0, r5, #0\n    bl OverlayManager_FreeData\n    mov r0, #0\n    add r1, r0, #0\n    bl Main_SetVBlankIntrCB\n    mov r0, #0x19\n    bl Heap_Destroy\n    mov r0, #1\n    mov r1, #0x7f\n    bl GF_SndHandleSetPlayerVolume\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    nop\n    _021E5F4C: .word 0x0000311C\n    _021E5F50: .word 0x000030EC\n    _021E5F54: .word 0x000033B8\n    _021E5F58: .word 0x000033B0\n    _021E5F5C: .word 0x0000066C\n    _021E5F60: .word 0x0000310C"
    );
    #endif
}

void ov51_021E5F64(void) {
    /* Original at 0x021E5F64 */
    /* Requires manual decompilation - 87 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    mov r0, #4\n    mov r1, #0x19\n    bl FontID_Alloc\n    ldr r2, _021E6014 ; =0x000002D7\n    mov r0, #0\n    mov r1, #0x1b\n    mov r3, #0x19\n    bl NewMsgDataFromNarc\n    ldr r1, _021E6018 ; =0x000033C4\n    str r0, [r5, r1]\n    mov r0, #4\n    mov r1, #0x19\n    bl String_New\n    ldr r1, _021E601C ; =0x000033C8\n    str r0, [r5, r1]\n    mov r0, #0x20\n    mov r1, #0x19\n    bl String_New\n    ldr r1, _021E6020 ; =0x000033D0\n    str r0, [r5, r1]\n    mov r0, #0xa\n    mov r1, #0x19\n    bl String_New\n    ldr r1, _021E6024 ; =0x000033D4\n    str r0, [r5, r1]\n    mov r0, #5\n    mov r1, #0x19\n    bl String_New\n    ldr r2, _021E6028 ; =0x000033CC\n    mov r1, #0xb\n    str r0, [r5, r2]\n    add r0, r2, #0\n    sub r0, #8\n    ldr r0, [r5, r0]\n    ldr r2, [r5, r2]\n    bl ReadMsgDataIntoString\n    ldr r7, _021E602C ; =0x000033D8\n    mov r6, #0\n    add r4, r5, #0\n    ldr r0, _021E6018 ; =0x000033C4\n    add r1, r6, #0\n    ldr r0, [r5, r0]\n    add r1, #0xe\n    bl NewString_ReadMsgData\n    str r0, [r4, r7]\n    add r6, r6, #1\n    add r4, r4, #4\n    cmp r6, #3\n    blt _021E5FC4\n    ldr r7, _021E6030 ; =0x000033E4\n    mov r4, #0\n    add r6, r5, #0\n    ldr r0, _021E6018 ; =0x000033C4\n    add r1, r4, #0\n    ldr r0, [r5, r0]\n    add r1, #0x11\n    bl NewString_ReadMsgData\n    str r0, [r6, r7]\n    add r4, r4, #1\n    add r6, r6, #4\n    cmp r4, #2\n    blt _021E5FE0\n    ldr r7, _021E6034 ; =0x000033EC\n    mov r4, #0\n    add r6, r5, #0\n    ldr r0, _021E6018 ; =0x000033C4\n    add r1, r4, #0\n    ldr r0, [r5, r0]\n    bl NewString_ReadMsgData\n    str r0, [r6, r7]\n    add r4, r4, #1\n    add r6, r6, #4\n    cmp r4, #0xe\n    blt _021E5FFC\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021E6014: .word 0x000002D7\n    _021E6018: .word 0x000033C4\n    _021E601C: .word 0x000033C8\n    _021E6020: .word 0x000033D0\n    _021E6024: .word 0x000033D4\n    _021E6028: .word 0x000033CC\n    _021E602C: .word 0x000033D8\n    _021E6030: .word 0x000033E4\n    _021E6034: .word 0x000033EC"
    );
    #endif
}

void ov51_021E6038(void) {
    /* Original at 0x021E6038 */
    /* Requires manual decompilation - 55 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    ldr r7, _021E60A8 ; =0x000033EC\n    mov r4, #0\n    add r5, r6, #0\n    ldr r0, [r5, r7]\n    bl String_Delete\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #0xe\n    blt _021E6042\n    ldr r0, _021E60AC ; =0x000033E8\n    ldr r0, [r6, r0]\n    bl String_Delete\n    ldr r0, _021E60B0 ; =0x000033E4\n    ldr r0, [r6, r0]\n    bl String_Delete\n    ldr r0, _021E60B4 ; =0x000033E0\n    ldr r0, [r6, r0]\n    bl String_Delete\n    ldr r0, _021E60B8 ; =0x000033DC\n    ldr r0, [r6, r0]\n    bl String_Delete\n    ldr r0, _021E60BC ; =0x000033D8\n    ldr r0, [r6, r0]\n    bl String_Delete\n    ldr r0, _021E60C0 ; =0x000033CC\n    ldr r0, [r6, r0]\n    bl String_Delete\n    ldr r0, _021E60C4 ; =0x000033D4\n    ldr r0, [r6, r0]\n    bl String_Delete\n    ldr r0, _021E60C8 ; =0x000033D0\n    ldr r0, [r6, r0]\n    bl String_Delete\n    ldr r0, _021E60CC ; =0x000033C8\n    ldr r0, [r6, r0]\n    bl String_Delete\n    ldr r0, _021E60D0 ; =0x000033C4\n    ldr r0, [r6, r0]\n    bl DestroyMsgData\n    mov r0, #4\n    bl FontID_Release\n    pop {r3, r4, r5, r6, r7, pc}\n    _021E60A8: .word 0x000033EC\n    _021E60AC: .word 0x000033E8\n    _021E60B0: .word 0x000033E4\n    _021E60B4: .word 0x000033E0\n    _021E60B8: .word 0x000033DC\n    _021E60BC: .word 0x000033D8\n    _021E60C0: .word 0x000033CC\n    _021E60C4: .word 0x000033D4\n    _021E60C8: .word 0x000033D0\n    _021E60CC: .word 0x000033C8\n    _021E60D0: .word 0x000033C4"
    );
    #endif
}

void ov51_021E60D4(void) {
    GfGfx_SetBanks(5);
}

void ov51_021E60F4(void) {
    /* Original at 0x021E60F4 */
    /* Requires manual decompilation - 120 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0x64\n    add r3, r0, #0\n    add r0, r2, #0\n    add r0, #0xf9\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    cmp r0, #1\n    bhi _021E6132\n    cmp r1, #0\n    beq _021E612E\n    ldr r5, _021E61F0 ; =ov51_021E7E08\n    add r4, sp, #0x4c\n    add r2, r4, #0\n    ldmia r5!, {r0, r1}\n    stmia r4!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r4!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r4!, {r0, r1}\n    cmp r3, #5\n    bls _021E6128\n    bl GF_AssertFail\n    ldr r1, [sp, #0x4c]\n    b _021E61B0\n    lsl r0, r3, #2\n    ldr r1, [r2, r0]\n    b _021E61B0\n    mov r1, #6\n    b _021E61B0\n    cmp r2, #0xa\n    bne _021E615A\n    ldr r5, _021E61F4 ; =ov51_021E7DF0\n    add r4, sp, #0x34\n    add r2, r4, #0\n    ldmia r5!, {r0, r1}\n    stmia r4!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r4!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r4!, {r0, r1}\n    cmp r3, #5\n    bls _021E6154\n    bl GF_AssertFail\n    ldr r1, [sp, #0x34]\n    b _021E61B0\n    lsl r0, r3, #2\n    ldr r1, [r2, r0]\n    b _021E61B0\n    cmp r2, #0xb\n    bne _021E6182\n    ldr r5, _021E61F8 ; =ov51_021E7E20\n    add r4, sp, #0x1c\n    add r2, r4, #0\n    ldmia r5!, {r0, r1}\n    stmia r4!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r4!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r4!, {r0, r1}\n    cmp r3, #5\n    bls _021E617C\n    bl GF_AssertFail\n    ldr r1, [sp, #0x1c]\n    b _021E61B0\n    lsl r0, r3, #2\n    ldr r1, [r2, r0]\n    b _021E61B0\n    cmp r2, #0xc\n    bne _021E61AA\n    ldr r5, _021E61FC ; =ov51_021E7DD8\n    add r4, sp, #4\n    add r2, r4, #0\n    ldmia r5!, {r0, r1}\n    stmia r4!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r4!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r4!, {r0, r1}\n    cmp r3, #5\n    bls _021E61A4\n    bl GF_AssertFail\n    ldr r1, [sp, #4]\n    b _021E61B0\n    lsl r0, r3, #2\n    ldr r1, [r2, r0]\n    b _021E61B0\n    bl GF_AssertFail\n    mov r1, #0\n    mov r0, #0x31\n    add r2, sp, #0\n    mov r3, #0x19\n    bl GfGfxLoader_GetPlttData\n    add r4, r0, #0\n    ldr r0, [sp]\n    mov r1, #2\n    ldr r0, [r0, #0xc]\n    lsl r1, r1, #8\n    bl DC_FlushRange\n    ldr r0, [sp]\n    mov r1, #0x20\n    ldr r5, [r0, #0xc]\n    add r2, r1, #0\n    add r0, r5, #0\n    add r0, #0x20\n    add r2, #0xe0\n    bl GXS_LoadBGPltt\n    mov r1, #0x1e\n    lsl r1, r1, #4\n    add r0, r5, r1\n    mov r2, #0x20\n    bl GXS_LoadBGPltt\n    add r0, r4, #0\n    bl Heap_Free\n    add sp, #0x64\n    pop {r4, r5, pc}\n    _021E61F0: .word ov51_021E7E08\n    _021E61F4: .word ov51_021E7DF0\n    _021E61F8: .word ov51_021E7E20\n    _021E61FC: .word ov51_021E7DD8"
    );
    #endif
}

void ov51_021E6200(void) {
    /* Original at 0x021E6200 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #4\n    add r4, r0, #0\n    mov r0, #0x31\n    mov r1, #0x3c\n    add r2, sp, #0\n    mov r3, #0x19\n    bl GfGfxLoader_GetPlttData\n    add r6, r0, #0\n    ldr r0, [sp]\n    lsl r4, r4, #5\n    ldr r5, [r0, #0xc]\n    mov r1, #0x20\n    add r0, r5, r4\n    bl DC_FlushRange\n    add r0, r5, r4\n    mov r1, #0x80\n    mov r2, #0x20\n    bl GXS_LoadBGPltt\n    add r0, r6, #0\n    bl Heap_Free\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void ov51_021E6238(void) {
    /* Original at 0x021E6238 */
    /* Requires manual decompilation - 122 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0xb8\n    ldr r2, _021E6338 ; =0x04000304\n    add r4, r0, #0\n    ldrh r1, [r2]\n    lsr r0, r2, #0xb\n    ldr r5, _021E633C ; =ov51_021E7DC8\n    orr r0, r1\n    strh r0, [r2]\n    add r3, sp, #0xa8\n    add r2, r3, #0\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    add r0, r2, #0\n    bl SetBothScreensModesAndDisable\n    ldr r5, _021E6340 ; =ov51_021E7E8C\n    add r3, sp, #0x8c\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #7\n    str r0, [r3]\n    add r0, r4, #0\n    mov r3, #2\n    bl InitBgFromTemplate\n    add r0, r4, #0\n    mov r1, #7\n    bl BgClearTilemapBufferAndCommit\n    ldr r5, _021E6344 ; =ov51_021E7ED0\n    add r3, sp, #0x54\n    mov r2, #7\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    sub r2, r2, #1\n    bne _021E628A\n    add r0, r4, #0\n    mov r1, #4\n    add r2, sp, #0x54\n    mov r3, #0\n    bl InitBgFromTemplate\n    add r0, r4, #0\n    mov r1, #4\n    bl BgClearTilemapBufferAndCommit\n    add r0, r4, #0\n    mov r1, #5\n    add r2, sp, #0x70\n    mov r3, #0\n    bl InitBgFromTemplate\n    add r0, r4, #0\n    mov r1, #5\n    bl BgClearTilemapBufferAndCommit\n    ldr r5, _021E6348 ; =ov51_021E7E70\n    add r3, sp, #0x38\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #6\n    str r0, [r3]\n    add r0, r4, #0\n    mov r3, #2\n    bl InitBgFromTemplate\n    add r0, r4, #0\n    mov r1, #6\n    bl BgClearTilemapBufferAndCommit\n    ldr r5, _021E634C ; =ov51_021E7E38\n    add r3, sp, #0x1c\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #2\n    str r0, [r3]\n    add r0, r4, #0\n    mov r3, #0\n    bl InitBgFromTemplate\n    add r0, r4, #0\n    mov r1, #2\n    bl BgClearTilemapBufferAndCommit\n    ldr r5, _021E6350 ; =ov51_021E7E54\n    add r3, sp, #0\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #3\n    str r0, [r3]\n    add r0, r4, #0\n    mov r3, #0\n    bl InitBgFromTemplate\n    add r0, r4, #0\n    mov r1, #3\n    bl BgClearTilemapBufferAndCommit\n    add sp, #0xb8\n    pop {r3, r4, r5, pc}\n    nop\n    _021E6338: .word 0x04000304\n    _021E633C: .word ov51_021E7DC8\n    _021E6340: .word ov51_021E7E8C\n    _021E6344: .word ov51_021E7ED0\n    _021E6348: .word ov51_021E7E70\n    _021E634C: .word ov51_021E7E38\n    _021E6350: .word ov51_021E7E54"
    );
    #endif
}

void ov51_021E6354(void) {
    /* Original at 0x021E6354 */
    /* Requires manual decompilation - 333 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0x24\n    add r4, r0, #0\n    mov r0, #0x31\n    mov r1, #0\n    add r2, sp, #0x20\n    mov r3, #0x19\n    bl GfGfxLoader_GetPlttData\n    add r5, r0, #0\n    ldr r0, [sp, #0x20]\n    mov r1, #2\n    ldr r0, [r0, #0xc]\n    lsl r1, r1, #8\n    bl DC_FlushRange\n    ldr r0, [sp, #0x20]\n    mov r2, #2\n    ldr r0, [r0, #0xc]\n    mov r1, #0\n    lsl r2, r2, #8\n    bl GXS_LoadBGPltt\n    add r0, r5, #0\n    bl Heap_Free\n    add r0, r4, #0\n    add r0, #0xe8\n    ldr r2, [r0]\n    ldrb r1, [r2, #4]\n    ldrb r0, [r2, #3]\n    ldrb r2, [r2]\n    lsl r1, r1, #0x1c\n    lsr r1, r1, #0x1f\n    bl ov51_021E60F4\n    mov r0, #0x31\n    mov r1, #0x1c\n    add r2, sp, #0x1c\n    mov r3, #0x19\n    bl GfGfxLoader_GetPlttData\n    add r5, r0, #0\n    ldr r0, [sp, #0x1c]\n    mov r1, #2\n    ldr r0, [r0, #0xc]\n    lsl r1, r1, #8\n    bl DC_FlushRange\n    ldr r0, [sp, #0x1c]\n    mov r2, #2\n    ldr r0, [r0, #0xc]\n    mov r1, #0\n    lsl r2, r2, #8\n    bl GX_LoadBGPltt\n    add r0, r5, #0\n    bl Heap_Free\n    add r0, r4, #0\n    add r0, #0xe8\n    ldr r0, [r0]\n    ldrb r1, [r0, #5]\n    cmp r1, #0xff\n    bne _021E6442\n    mov r2, #0\n    mov r0, #0x31\n    mov r1, #0x2c\n    mov r3, #0x19\n    str r2, [sp]\n    bl GfGfxLoader_LoadFromNarc\n    ldr r1, _021E6624 ; =0x000030EC\n    str r0, [r4, r1]\n    ldr r0, [r4, r1]\n    cmp r0, #0\n    bne _021E63F2\n    bl GF_AssertFail\n    ldr r1, _021E6624 ; =0x000030EC\n    ldr r0, [r4, r1]\n    add r1, r1, #4\n    add r1, r4, r1\n    bl NNS_G2dGetUnpackedBGCharacterData\n    cmp r0, #0\n    bne _021E6406\n    bl GF_AssertFail\n    add r0, r4, #0\n    add r0, #0xe8\n    ldr r0, [r0]\n    ldr r3, _021E6628 ; =0x000033B4\n    ldrb r0, [r0, #4]\n    lsl r0, r0, #0x1d\n    lsr r0, r0, #0x1f\n    bne _021E642C\n    mov r0, #0x19\n    str r0, [sp]\n    mov r0, #0x31\n    mov r1, #0x36\n    mov r2, #0\n    add r3, r4, r3\n    bl GfGfxLoader_GetScrnData\n    ldr r1, _021E662C ; =0x000033B0\n    str r0, [r4, r1]\n    b _021E6498\n    mov r0, #0x19\n    str r0, [sp]\n    mov r0, #0x31\n    mov r1, #0x37\n    mov r2, #0\n    add r3, r4, r3\n    bl GfGfxLoader_GetScrnData\n    ldr r1, _021E662C ; =0x000033B0\n    str r0, [r4, r1]\n    b _021E6498\n    lsl r3, r1, #2\n    ldr r1, _021E6630 ; =ov51_021E7F08\n    mov r2, #0\n    ldr r1, [r1, r3]\n    mov r0, #0x31\n    mov r3, #0x19\n    str r2, [sp]\n    bl GfGfxLoader_LoadFromNarc\n    ldr r1, _021E6624 ; =0x000030EC\n    str r0, [r4, r1]\n    ldr r0, [r4, r1]\n    cmp r0, #0\n    bne _021E6462\n    bl GF_AssertFail\n    ldr r1, _021E6624 ; =0x000030EC\n    ldr r0, [r4, r1]\n    add r1, r1, #4\n    add r1, r4, r1\n    bl NNS_G2dGetUnpackedBGCharacterData\n    cmp r0, #0\n    bne _021E6476\n    bl GF_AssertFail\n    ldr r3, _021E6628 ; =0x000033B4\n    mov r0, #0x19\n    str r0, [sp]\n    mov r0, #0x31\n    mov r1, #0x3d\n    mov r2, #0\n    add r3, r4, r3\n    bl GfGfxLoader_GetScrnData\n    ldr r1, _021E662C ; =0x000033B0\n    str r0, [r4, r1]\n    add r0, r4, #0\n    add r0, #0xe8\n    ldr r0, [r0]\n    ldrb r0, [r0, #5]\n    bl ov51_021E6200\n    add r0, r4, #0\n    bl ov51_021E6C6C\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0x19\n    str r0, [sp, #0xc]\n    ldr r2, [r4]\n    mov r0, #0x31\n    mov r1, #0x29\n    mov r3, #6\n    bl GfGfxLoader_LoadCharData\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0x19\n    str r0, [sp, #0xc]\n    ldr r2, [r4]\n    mov r0, #0x31\n    mov r1, #0x2f\n    mov r3, #6\n    bl GfGfxLoader_LoadScrnData\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0x19\n    str r0, [sp, #0xc]\n    ldr r2, [r4]\n    mov r0, #0x31\n    mov r1, #0x2a\n    mov r3, #5\n    bl GfGfxLoader_LoadCharData\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0x19\n    str r0, [sp, #0xc]\n    mov r0, #0x31\n    ldr r2, [r4]\n    add r1, r0, #0\n    mov r3, #5\n    bl GfGfxLoader_LoadScrnData\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0x19\n    str r0, [sp, #0xc]\n    ldr r2, [r4]\n    mov r0, #0x31\n    mov r1, #0x2b\n    mov r3, #2\n    bl GfGfxLoader_LoadCharData\n    ldr r3, _021E6634 ; =0x000033BC\n    mov r0, #0x19\n    str r0, [sp]\n    mov r0, #0x31\n    mov r1, #0x35\n    mov r2, #0\n    add r3, r4, r3\n    bl GfGfxLoader_GetScrnData\n    ldr r1, _021E6638 ; =0x000033B8\n    str r0, [r4, r1]\n    add r1, #0x82\n    ldrb r0, [r4, r1]\n    lsl r0, r0, #0x1f\n    lsr r0, r0, #0x1f\n    beq _021E6550\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0x19\n    str r0, [sp, #0xc]\n    ldr r2, [r4]\n    mov r0, #0x31\n    mov r1, #0x34\n    mov r3, #2\n    bl GfGfxLoader_LoadScrnData\n    b _021E6568\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0x19\n    str r0, [sp, #0xc]\n    ldr r2, [r4]\n    mov r0, #0x31\n    mov r1, #0x33\n    mov r3, #2\n    bl GfGfxLoader_LoadScrnData\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0x19\n    str r0, [sp, #0xc]\n    ldr r2, [r4]\n    mov r0, #0x31\n    mov r1, #0x32\n    mov r3, #3\n    bl GfGfxLoader_LoadScrnData\n    ldr r1, _021E663C ; =0x0000343A\n    ldrb r0, [r4, r1]\n    lsl r0, r0, #0x1f\n    lsr r0, r0, #0x1f\n    bne _021E65C8\n    add r0, r4, #0\n    add r0, #0xe8\n    ldr r0, [r0]\n    ldrh r0, [r0, #6]\n    cmp r0, #0xff\n    blo _021E65C8\n    sub r1, #0x7e\n    ldr r0, [r4, r1]\n    mov r3, #7\n    str r3, [sp]\n    mov r1, #9\n    str r1, [sp, #4]\n    add r1, r0, #0\n    add r1, #0xc\n    str r1, [sp, #8]\n    mov r2, #0\n    str r2, [sp, #0xc]\n    str r2, [sp, #0x10]\n    ldrh r1, [r0]\n    lsl r1, r1, #0x15\n    lsr r1, r1, #0x18\n    str r1, [sp, #0x14]\n    ldrh r0, [r0, #2]\n    mov r1, #2\n    lsl r0, r0, #0x15\n    lsr r0, r0, #0x18\n    str r0, [sp, #0x18]\n    ldr r0, [r4]\n    bl CopyToBgTilemapRect\n    b _021E6608\n    add r0, r4, #0\n    add r0, #0xe8\n    ldr r0, [r0]\n    ldrh r1, [r0, #6]\n    ldr r0, _021E6640 ; =0x0000FFFF\n    cmp r1, r0\n    bne _021E6608\n    ldr r0, _021E6634 ; =0x000033BC\n    mov r2, #7\n    ldr r0, [r4, r0]\n    mov r1, #9\n    str r2, [sp]\n    str r1, [sp, #4]\n    add r1, r0, #0\n    add r1, #0xc\n    str r1, [sp, #8]\n    str r2, [sp, #0xc]\n    mov r2, #0\n    str r2, [sp, #0x10]\n    ldrh r1, [r0]\n    mov r3, #0xe\n    lsl r1, r1, #0x15\n    lsr r1, r1, #0x18\n    str r1, [sp, #0x14]\n    ldrh r0, [r0, #2]\n    mov r1, #2\n    lsl r0, r0, #0x15\n    lsr r0, r0, #0x18\n    str r0, [sp, #0x18]\n    ldr r0, [r4]\n    bl CopyToBgTilemapRect\n    ldr r0, [r4]\n    mov r1, #2\n    bl BgCommitTilemapBufferToVram\n    add r0, r4, #0\n    add r0, #0xe8\n    ldr r0, [r0]\n    add r4, #0xec\n    add r0, #0x68\n    add r1, r4, #0\n    bl ov51_021E6CF0\n    add sp, #0x24\n    pop {r4, r5, pc}\n    _021E6624: .word 0x000030EC\n    _021E6628: .word 0x000033B4\n    _021E662C: .word 0x000033B0\n    _021E6630: .word ov51_021E7F08\n    _021E6634: .word 0x000033BC\n    _021E6638: .word 0x000033B8\n    _021E663C: .word 0x0000343A\n    _021E6640: .word 0x0000FFFF"
    );
    #endif
}

void ov51_021E6644(void) {
    /* Original at 0x021E6644 */
    /* Requires manual decompilation - 49 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0x1f\n    mov r1, #0\n    bl GfGfx_EngineATogglePlanes\n    mov r0, #0x1f\n    mov r1, #0\n    bl GfGfx_EngineBTogglePlanes\n    mov r2, #0\n    add r0, r4, #0\n    mov r1, #5\n    add r3, r2, #0\n    bl BgSetPosTextAndCommit\n    add r0, r4, #0\n    mov r1, #5\n    mov r2, #3\n    mov r3, #0\n    bl BgSetPosTextAndCommit\n    mov r2, #0\n    add r0, r4, #0\n    mov r1, #3\n    add r3, r2, #0\n    bl BgSetPosTextAndCommit\n    mov r1, #3\n    add r0, r4, #0\n    add r2, r1, #0\n    mov r3, #0\n    bl BgSetPosTextAndCommit\n    add r0, r4, #0\n    mov r1, #7\n    bl FreeBgTilemapBuffer\n    add r0, r4, #0\n    mov r1, #6\n    bl FreeBgTilemapBuffer\n    add r0, r4, #0\n    mov r1, #4\n    bl FreeBgTilemapBuffer\n    add r0, r4, #0\n    mov r1, #5\n    bl FreeBgTilemapBuffer\n    add r0, r4, #0\n    mov r1, #2\n    bl FreeBgTilemapBuffer\n    add r0, r4, #0\n    mov r1, #3\n    bl FreeBgTilemapBuffer\n    add r0, r4, #0\n    bl Heap_Free\n    pop {r4, pc}"
    );
    #endif
}

void ov51_021E66C0(void) {
    /* Original at 0x021E66C0 */
    /* Requires manual decompilation - 50 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x10\n    add r4, r0, #0\n    ldr r0, _021E6730 ; =0x000030F4\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    bne _021E66FC\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0x19\n    str r0, [sp, #0xc]\n    ldr r2, [r4]\n    mov r0, #0x31\n    mov r1, #0x2f\n    mov r3, #6\n    bl GfGfxLoader_LoadScrnData\n    add r0, r4, #4\n    mov r1, #7\n    mov r2, #0xa\n    bl ov51_021E74D4\n    ldr r0, [r4]\n    mov r1, #7\n    bl BgClearTilemapBufferAndCommit\n    add sp, #0x10\n    pop {r4, pc}\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0x19\n    str r0, [sp, #0xc]\n    ldr r2, [r4]\n    mov r0, #0x31\n    mov r1, #0x30\n    mov r3, #6\n    bl GfGfxLoader_LoadScrnData\n    add r0, r4, #4\n    mov r1, #0\n    mov r2, #6\n    bl ov51_021E74D4\n    add r0, r4, #0\n    bl ov51_021E6CCC\n    ldr r0, [r4]\n    mov r1, #7\n    bl BgClearTilemapBufferAndCommit\n    add sp, #0x10\n    pop {r4, pc}\n    _021E6730: .word 0x000030F4"
    );
    #endif
}

void ov51_021E6734(void) {
    /* Original at 0x021E6734 */
    /* Requires manual decompilation - 45 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov51_021E66C0\n    ldr r0, _021E679C ; =0x0000311C\n    mov r1, #0\n    add r0, r4, r0\n    add r2, r1, #0\n    mov r3, #1\n    bl ov51_021E7D44\n    ldr r0, _021E67A0 ; =0x000030F4\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    bne _021E6762\n    add r0, r4, #0\n    bl ov51_021E6C6C\n    add r0, r4, #0\n    mov r1, #1\n    bl ov51_021E76EC\n    b _021E6776\n    add r2, r4, #0\n    ldr r0, [r4]\n    mov r1, #7\n    add r2, #0xec\n    bl ov51_021E6D44\n    add r0, r4, #0\n    mov r1, #0\n    bl ov51_021E76EC\n    add r2, r4, #0\n    add r2, #0xe8\n    ldr r2, [r2]\n    add r0, r4, #0\n    add r1, r4, #4\n    bl ov51_021E6F18\n    add r2, r4, #0\n    add r2, #0xe8\n    ldr r2, [r2]\n    add r0, r4, #0\n    add r1, r4, #4\n    bl ov51_021E7208\n    add r0, r4, #0\n    add r1, r4, #4\n    bl ov51_021E71D0\n    pop {r4, pc}\n    _021E679C: .word 0x0000311C\n    _021E67A0: .word 0x000030F4"
    );
    #endif
}

void ov51_021E67A4(void) {
    /* Original at 0x021E67A4 */
    /* Requires manual decompilation - 98 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r1, _021E6884 ; =0x00003436\n    add r4, r0, #0\n    ldrb r2, [r4, r1]\n    cmp r2, #4\n    bhi _021E6880\n    add r2, r2, r2\n    add r2, pc\n    ldrh r2, [r2, #6]\n    lsl r2, r2, #0x10\n    asr r2, r2, #0x10\n    add pc, r2\n    _021E67BC: ; jump table\n    mov r1, #0\n    bl ov51_021E77A0\n    ldr r0, _021E6884 ; =0x00003436\n    ldrb r1, [r4, r0]\n    add r1, r1, #1\n    strb r1, [r4, r0]\n    b _021E6880\n    add r0, r1, #6\n    ldrb r0, [r4, r0]\n    bl TextPrinterCheckActive\n    cmp r0, #0\n    beq _021E67E6\n    mov r0, #0\n    pop {r4, pc}\n    add r0, r4, #0\n    mov r1, #0\n    bl ov51_021E7804\n    add r0, r4, #0\n    mov r1, #1\n    bl ov51_021E6E10\n    ldr r0, _021E6884 ; =0x00003436\n    ldrb r1, [r4, r0]\n    add r1, r1, #1\n    strb r1, [r4, r0]\n    b _021E6880\n    mov r1, #0\n    bl ov51_021E786C\n    cmp r0, #0\n    blt _021E6880\n    bne _021E6818\n    add r0, r4, #0\n    mov r1, #0\n    bl ov51_021E6E10\n    mov r0, #1\n    pop {r4, pc}\n    add r0, r4, #0\n    add r0, #0xe8\n    ldr r0, [r0]\n    ldrb r0, [r0, #4]\n    lsl r0, r0, #0x1b\n    lsr r0, r0, #0x1f\n    beq _021E6830\n    add r0, r4, #0\n    mov r1, #1\n    bl ov51_021E77A0\n    b _021E6834\n    mov r0, #2\n    pop {r4, pc}\n    ldr r0, _021E6884 ; =0x00003436\n    ldrb r1, [r4, r0]\n    add r1, r1, #1\n    strb r1, [r4, r0]\n    b _021E6880\n    add r0, r1, #6\n    ldrb r0, [r4, r0]\n    bl TextPrinterCheckActive\n    cmp r0, #0\n    beq _021E684E\n    mov r0, #0\n    pop {r4, pc}\n    add r0, r4, #0\n    mov r1, #1\n    bl ov51_021E7804\n    ldr r0, _021E6884 ; =0x00003436\n    ldrb r1, [r4, r0]\n    add r1, r1, #1\n    strb r1, [r4, r0]\n    b _021E6880\n    mov r1, #1\n    bl ov51_021E786C\n    cmp r0, #0\n    beq _021E6870\n    cmp r0, #1\n    beq _021E687C\n    b _021E6880\n    add r0, r4, #0\n    mov r1, #0\n    bl ov51_021E6E10\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #2\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}\n    _021E6884: .word 0x00003436"
    );
    #endif
}

void ov51_021E6888(void) {
    /* Original at 0x021E6888 */
    /* Requires manual decompilation - 160 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    ldr r1, _021E69D4 ; =0x00003436\n    add r4, r0, #0\n    ldrb r2, [r4, r1]\n    mov r5, #0\n    cmp r2, #5\n    bls _021E6898\n    b _021E69C4\n    add r2, r2, r2\n    add r2, pc\n    ldrh r2, [r2, #6]\n    lsl r2, r2, #0x10\n    asr r2, r2, #0x10\n    add pc, r2\n    _021E68A4: ; jump table\n    mov r0, #8\n    sub r1, #0xa2\n    str r0, [r4, r1]\n    ldr r1, _021E69D8 ; =0x000030FC\n    lsl r2, r0, #9\n    str r2, [r4, r1]\n    add r0, r1, #4\n    str r2, [r4, r0]\n    ldr r0, [r4, r1]\n    add r0, #0x80\n    str r0, [r4, r1]\n    add r0, r1, #4\n    ldr r2, [r4, r0]\n    add r2, #0x80\n    str r2, [r4, r0]\n    ldr r0, _021E69DC ; =SEQ_SE_DP_CARD5\n    bl PlaySE\n    ldr r0, _021E69D4 ; =0x00003436\n    ldrb r1, [r4, r0]\n    add r1, r1, #1\n    strb r1, [r4, r0]\n    b _021E69C4\n    add r3, r1, #0\n    sub r3, #0xa2\n    ldr r7, [r4, r3]\n    ldr r6, _021E69D8 ; =0x000030FC\n    mov r3, #0xc\n    mov r0, #2\n    sub r3, r3, r7\n    ldr r2, [r4, r6]\n    lsl r0, r3\n    sub r0, r2, r0\n    str r0, [r4, r6]\n    ldr r0, [r4, r6]\n    cmp r0, #0\n    bgt _021E6904\n    mov r0, #0x24\n    str r0, [r4, r6]\n    ldrb r0, [r4, r1]\n    add r0, r0, #1\n    strb r0, [r4, r1]\n    ldr r0, _021E69E0 ; =0x00003394\n    ldr r1, [r4, r0]\n    sub r1, r1, #1\n    str r1, [r4, r0]\n    ldr r1, [r4, r0]\n    cmp r1, #1\n    bgt _021E69C4\n    mov r1, #1\n    str r1, [r4, r0]\n    b _021E69C4\n    ldr r2, _021E69E4 ; =0x000030F4\n    mov r1, #1\n    ldr r3, [r4, r2]\n    eor r1, r3\n    str r1, [r4, r2]\n    bl ov51_021E66C0\n    ldr r0, _021E69D4 ; =0x00003436\n    ldrb r1, [r4, r0]\n    add r1, r1, #1\n    strb r1, [r4, r0]\n    b _021E69C4\n    ldr r1, _021E69E4 ; =0x000030F4\n    ldr r1, [r4, r1]\n    cmp r1, #0\n    bne _021E6946\n    bl ov51_021E6C6C\n    add r0, r4, #0\n    mov r1, #1\n    bl ov51_021E76EC\n    b _021E6964\n    add r2, r4, #0\n    ldr r0, [r4]\n    mov r1, #7\n    add r2, #0xec\n    bl ov51_021E6D44\n    ldr r0, _021E69E8 ; =0x0000343A\n    ldrb r0, [r4, r0]\n    lsl r0, r0, #0x1e\n    lsr r0, r0, #0x1f\n    bne _021E6964\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov51_021E76EC\n    ldr r0, _021E69D4 ; =0x00003436\n    ldrb r1, [r4, r0]\n    add r1, r1, #1\n    strb r1, [r4, r0]\n    b _021E69C4\n    add r1, r4, #4\n    bl ov51_021E71D0\n    ldr r0, _021E69D4 ; =0x00003436\n    ldrb r1, [r4, r0]\n    add r1, r1, #1\n    strb r1, [r4, r0]\n    b _021E69C4\n    add r0, r1, #0\n    sub r0, #0xa2\n    ldr r0, [r4, r0]\n    add r2, r0, #1\n    add r0, r1, #0\n    sub r0, #0xa2\n    str r2, [r4, r0]\n    add r0, r1, #0\n    sub r0, #0xa2\n    ldr r0, [r4, r0]\n    cmp r0, #8\n    ble _021E699C\n    mov r0, #8\n    sub r1, #0xa2\n    str r0, [r4, r1]\n    ldr r2, _021E69E0 ; =0x00003394\n    ldr r3, _021E69D8 ; =0x000030FC\n    ldr r6, [r4, r2]\n    mov r2, #0xc\n    mov r0, #2\n    sub r2, r2, r6\n    add r6, r0, #0\n    ldr r1, [r4, r3]\n    lsl r6, r2\n    add r1, r1, r6\n    str r1, [r4, r3]\n    ldr r2, [r4, r3]\n    lsl r1, r0, #0xb\n    cmp r2, r1\n    blt _021E69C4\n    str r1, [r4, r3]\n    str r1, [r4, r3]\n    add r0, r3, #4\n    str r1, [r4, r0]\n    mov r5, #1\n    ldr r1, _021E69E8 ; =0x0000343A\n    mov r0, #4\n    ldrb r2, [r4, r1]\n    orr r0, r2\n    strb r0, [r4, r1]\n    add r0, r5, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021E69D4: .word 0x00003436\n    _021E69D8: .word 0x000030FC\n    _021E69DC: .word SEQ_SE_DP_CARD5\n    _021E69E0: .word 0x00003394\n    _021E69E4: .word 0x000030F4\n    _021E69E8: .word 0x0000343A"
    );
    #endif
}

void ov51_021E69EC(void) {
    /* Original at 0x021E69EC */
    /* Requires manual decompilation - 43 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x18\n    add r4, r0, #0\n    ldr r0, _021E6A44 ; =0x000030FC\n    ldr r0, [r4, r0]\n    bl FX_Inv\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    str r0, [sp, #0x10]\n    mov r0, #0x31\n    lsl r0, r0, #8\n    ldr r0, [r4, r0]\n    bl FX_Inv\n    str r0, [sp, #0x14]\n    bl OS_WaitVBlankIntr\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, _021E6A48 ; =0x04001020\n    add r1, sp, #8\n    mov r2, #0x80\n    mov r3, #0x60\n    bl G2x_SetBGyAffine_\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, _021E6A4C ; =0x04001030\n    add r1, sp, #8\n    mov r2, #0x80\n    mov r3, #0x60\n    bl G2x_SetBGyAffine_\n    ldr r1, _021E6A50 ; =0x0000343A\n    mov r0, #4\n    ldrb r2, [r4, r1]\n    bic r2, r0\n    strb r2, [r4, r1]\n    add sp, #0x18\n    pop {r4, pc}\n    _021E6A44: .word 0x000030FC\n    _021E6A48: .word 0x04001020\n    _021E6A4C: .word 0x04001030\n    _021E6A50: .word 0x0000343A"
    );
    #endif
}

void ov51_021E6A54(void) {
    /* Original at 0x021E6A54 */
    /* Requires manual decompilation - 38 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r1, _021E6A9C ; =gSystem\n    mov r2, #1\n    ldr r1, [r1, #0x48]\n    tst r2, r1\n    beq _021E6A7C\n    ldr r2, _021E6AA0 ; =0x000030F4\n    ldr r2, [r0, r2]\n    cmp r2, #0\n    beq _021E6A8E\n    ldr r2, _021E6AA4 ; =0x0000343A\n    ldrb r0, [r0, r2]\n    lsl r0, r0, #0x1e\n    lsr r0, r0, #0x1f\n    bne _021E6A8E\n    ldr r0, _021E6AA8 ; =SEQ_SE_DP_SELECT\n    bl PlaySE\n    mov r0, #4\n    pop {r3, pc}\n    mov r0, #2\n    tst r0, r1\n    beq _021E6A8E\n    mov r0, #SEQ_SE_GS_GEARCANCEL>>6\n    lsl r0, r0, #6\n    bl PlaySE\n    mov r0, #5\n    pop {r3, pc}\n    mov r0, #0x30\n    tst r0, r1\n    beq _021E6A98\n    mov r0, #3\n    pop {r3, pc}\n    mov r0, #0\n    pop {r3, pc}\n    _021E6A9C: .word gSystem\n    _021E6AA0: .word 0x000030F4\n    _021E6AA4: .word 0x0000343A\n    _021E6AA8: .word SEQ_SE_DP_SELECT"
    );
    #endif
}

void ov51_021E6AAC(void) {
    /* Original at 0x021E6AAC */
    /* Requires manual decompilation - 63 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl System_GetTouchNew\n    cmp r0, #0\n    bne _021E6ABE\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    ldr r0, _021E6B28 ; =_021E7DB8\n    bl TouchscreenHitbox_TouchNewIsIn\n    cmp r0, #0\n    beq _021E6AD8\n    mov r0, #1\n    str r0, [r4]\n    mov r0, #SEQ_SE_GS_GEARCANCEL>>6\n    lsl r0, r0, #6\n    bl PlaySE\n    mov r0, #5\n    pop {r3, r4, r5, pc}\n    ldr r0, _021E6B2C ; =0x000030F4\n    ldr r0, [r5, r0]\n    cmp r0, #0\n    beq _021E6B02\n    ldr r0, _021E6B30 ; =0x0000343A\n    ldrb r0, [r5, r0]\n    lsl r0, r0, #0x1e\n    lsr r0, r0, #0x1f\n    bne _021E6B02\n    ldr r0, _021E6B34 ; =ov51_021E7DBC\n    bl TouchscreenHitbox_TouchNewIsIn\n    cmp r0, #0\n    beq _021E6B02\n    mov r0, #1\n    str r0, [r4]\n    ldr r0, _021E6B38 ; =SEQ_SE_DP_SELECT\n    bl PlaySE\n    mov r0, #4\n    pop {r3, r4, r5, pc}\n    ldr r0, _021E6B3C ; =ov51_021E7DC0\n    bl TouchscreenHitbox_TouchNewIsIn\n    cmp r0, #0\n    beq _021E6B24\n    ldr r1, _021E6B40 ; =gSystem + 0x40\n    mov r0, #0xd1\n    ldrh r2, [r1, #0x20]\n    lsl r0, r0, #6\n    strb r2, [r5, r0]\n    ldrh r1, [r1, #0x22]\n    add r0, r0, #1\n    strb r1, [r5, r0]\n    mov r0, #1\n    str r0, [r4]\n    mov r0, #3\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    _021E6B28: .word _021E7DB8\n    _021E6B2C: .word 0x000030F4\n    _021E6B30: .word 0x0000343A\n    _021E6B34: .word ov51_021E7DBC\n    _021E6B38: .word SEQ_SE_DP_SELECT\n    _021E6B3C: .word ov51_021E7DC0\n    _021E6B40: .word gSystem + 0x40"
    );
    #endif
}

void ov51_021E6B44(void) {
    /* Original at 0x021E6B44 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    mov r1, #0\n    str r1, [sp]\n    sub r2, r1, #1\n    ldr r1, _021E6B80 ; =0x00003108\n    add r4, r0, #0\n    str r2, [r4, r1]\n    add r1, sp, #0\n    bl ov51_021E6AAC\n    ldr r1, [sp]\n    cmp r1, #0\n    beq _021E6B6A\n    ldr r1, _021E6B84 ; =0x0000310C\n    mov r2, #1\n    add sp, #4\n    str r2, [r4, r1]\n    pop {r3, r4, pc}\n    add r0, r4, #0\n    bl ov51_021E6A54\n    cmp r0, #0\n    beq _021E6B7A\n    ldr r1, _021E6B84 ; =0x0000310C\n    mov r2, #0\n    str r2, [r4, r1]\n    add sp, #4\n    pop {r3, r4, pc}\n    nop\n    _021E6B80: .word 0x00003108\n    _021E6B84: .word 0x0000310C"
    );
    #endif
}

void ov51_021E6B88(void) {
    /* Original at 0x021E6B88 */
    /* Requires manual decompilation - 48 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    ldr r0, _021E6BF0 ; =0x0000343F\n    mov r1, #5\n    ldrb r0, [r4, r0]\n    mov r2, #0\n    neg r5, r0\n    ldr r0, [r4]\n    add r3, r5, #0\n    bl BgSetPosTextAndCommit\n    ldr r0, [r4]\n    mov r1, #5\n    mov r2, #3\n    add r3, r5, #0\n    bl BgSetPosTextAndCommit\n    ldr r0, [r4]\n    mov r1, #3\n    mov r2, #0\n    add r3, r5, #0\n    bl BgSetPosTextAndCommit\n    mov r1, #3\n    ldr r0, [r4]\n    add r2, r1, #0\n    add r3, r5, #0\n    bl BgSetPosTextAndCommit\n    ldr r0, _021E6BF4 ; =0x0000343A\n    ldrb r0, [r4, r0]\n    lsl r0, r0, #0x1d\n    lsr r0, r0, #0x1f\n    beq _021E6BD2\n    add r0, r4, #0\n    bl ov51_021E69EC\n    ldr r0, [r4]\n    bl DoScheduledBgGpuUpdates\n    bl GF_RunVramTransferTasks\n    bl OamManager_ApplyAndResetBuffers\n    ldr r3, _021E6BF8 ; =0x027E0000\n    ldr r1, _021E6BFC ; =0x00003FF8\n    mov r0, #1\n    ldr r2, [r3, r1]\n    orr r0, r2\n    str r0, [r3, r1]\n    pop {r3, r4, r5, pc}\n    nop\n    _021E6BF0: .word 0x0000343F\n    _021E6BF4: .word 0x0000343A\n    _021E6BF8: .word 0x027E0000\n    _021E6BFC: .word 0x00003FF8"
    );
    #endif
}

void ov51_021E6C00(void) {
    /* Original at 0x021E6C00 */
    /* Requires manual decompilation - 44 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x18\n    mov r0, #1\n    lsl r0, r0, #0xc\n    bl FX_Inv\n    add r4, r0, #0\n    mov r0, #1\n    lsl r0, r0, #0xc\n    bl FX_Inv\n    mov r1, #0\n    str r4, [sp, #8]\n    str r1, [sp, #0xc]\n    str r1, [sp, #0x10]\n    str r0, [sp, #0x14]\n    bl OS_WaitVBlankIntr\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, _021E6C60 ; =0x04001020\n    add r1, sp, #8\n    mov r2, #0x80\n    mov r3, #0x60\n    bl G2x_SetBGyAffine_\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, _021E6C64 ; =0x04001030\n    add r1, sp, #8\n    mov r2, #0x80\n    mov r3, #0x60\n    bl G2x_SetBGyAffine_\n    bl OS_WaitVBlankIntr\n    mov r3, #0\n    str r3, [sp]\n    ldr r0, _021E6C68 ; =0x04000030\n    add r1, sp, #8\n    mov r2, #0x80\n    str r3, [sp, #4]\n    bl G2x_SetBGyAffine_\n    add sp, #0x18\n    pop {r4, pc}\n    _021E6C60: .word 0x04001020\n    _021E6C64: .word 0x04001030\n    _021E6C68: .word 0x04000030"
    );
    #endif
}

void ov51_021E6C6C(void) {
    /* Original at 0x021E6C6C */
    /* Requires manual decompilation - 43 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0x1c\n    add r4, r0, #0\n    ldr r0, _021E6CC4 ; =0x000030F0\n    mov r1, #7\n    ldr r3, [r4, r0]\n    mov r0, #0\n    str r0, [sp]\n    ldr r2, [r3, #0x14]\n    ldr r0, [r4]\n    ldr r3, [r3, #0x10]\n    bl BG_LoadCharTilesData\n    ldr r0, _021E6CC8 ; =0x000033B4\n    mov r1, #0xa\n    ldr r0, [r4, r0]\n    mov r2, #0x15\n    str r1, [sp]\n    mov r1, #0xb\n    str r1, [sp, #4]\n    add r1, r0, #0\n    add r1, #0xc\n    str r1, [sp, #8]\n    str r2, [sp, #0xc]\n    mov r3, #5\n    str r3, [sp, #0x10]\n    ldrh r1, [r0]\n    lsl r1, r1, #0x15\n    lsr r1, r1, #0x18\n    str r1, [sp, #0x14]\n    ldrh r0, [r0, #2]\n    mov r1, #7\n    lsl r0, r0, #0x15\n    lsr r0, r0, #0x18\n    str r0, [sp, #0x18]\n    ldr r0, [r4]\n    bl CopyToBgTilemapRect\n    ldr r0, [r4]\n    mov r1, #7\n    bl BgCommitTilemapBufferToVram\n    add sp, #0x1c\n    pop {r3, r4, pc}\n    _021E6CC4: .word 0x000030F0\n    _021E6CC8: .word 0x000033B4"
    );
    #endif
}

void ov51_021E6CCC(void) {
    FillBgTilemapRect(0x10, 6, 7, 9, 0, 0x14);
}

void ov51_021E6CF0(void) {
    /* Original at 0x021E6CF0 */
    /* Requires manual decompilation - 41 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7}\n    mov r2, #3\n    mov r4, #0\n    lsl r2, r2, #0xc\n    asr r3, r4, #2\n    lsr r3, r3, #0x1d\n    add r3, r4, r3\n    asr r3, r3, #3\n    lsr r6, r3, #0x1f\n    lsl r5, r3, #0x1d\n    sub r5, r5, r6\n    mov r3, #0x1d\n    ror r5, r3\n    add r3, r6, r5\n    asr r5, r4, #5\n    lsr r5, r5, #0x1a\n    lsl r3, r3, #0x18\n    add r5, r4, r5\n    lsr r3, r3, #0x18\n    asr r5, r5, #6\n    lsl r5, r5, #3\n    add r3, r0, r3\n    ldrb r3, [r5, r3]\n    lsr r7, r4, #0x1f\n    lsl r6, r4, #0x1d\n    sub r6, r6, r7\n    mov r5, #0x1d\n    ror r6, r5\n    add r5, r7, r6\n    lsl r5, r5, #0x18\n    add r6, r3, #0\n    lsr r5, r5, #0x18\n    asr r6, r5\n    mov r3, #1\n    and r3, r6\n    strb r3, [r1, r4]\n    add r4, r4, #1\n    cmp r4, r2\n    blt _021E6CF8\n    pop {r4, r5, r6, r7}\n    bx lr"
    );
    #endif
}

void ov51_021E6D44(void) {
    /* Original at 0x021E6D44 */
    /* Requires manual decompilation - 46 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r7, r1, #0\n    mov r1, #1\n    str r1, [sp]\n    lsl r1, r7, #0x18\n    mov r3, #3\n    str r0, [sp, #4]\n    lsr r1, r1, #0x18\n    lsl r3, r3, #0xc\n    bl BG_LoadCharTilesData\n    lsl r1, r7, #0x18\n    ldr r0, [sp, #4]\n    lsr r1, r1, #0x18\n    bl GetBgTilemapBuffer\n    mov r4, #0\n    add r1, r0, #0\n    add r3, r4, #0\n    add r0, r4, #0\n    add r5, r3, #0\n    add r5, #0xc\n    lsl r5, r5, #6\n    add r2, r0, #0\n    add r5, r1, r5\n    lsl r6, r2, #1\n    add r4, r4, #1\n    add r2, r2, #1\n    lsl r4, r4, #0x10\n    lsl r2, r2, #0x18\n    lsr r4, r4, #0x10\n    add r6, r5, r6\n    lsr r2, r2, #0x18\n    strh r4, [r6, #8]\n    cmp r2, #0x18\n    blo _021E6D78\n    add r2, r3, #1\n    lsl r2, r2, #0x18\n    lsr r3, r2, #0x18\n    cmp r3, #8\n    blo _021E6D6E\n    lsl r1, r7, #0x18\n    ldr r0, [sp, #4]\n    lsr r1, r1, #0x18\n    bl ScheduleBgTilemapBufferTransfer\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov51_021E6DA8(void) {
    /* Original at 0x021E6DA8 */
    /* Requires manual decompilation - 45 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    cmp r1, #0\n    beq _021E6E02\n    ldr r0, _021E6E04 ; =0x000030F4\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    bne _021E6DF2\n    ldr r2, _021E6E08 ; =0x00003439\n    ldrb r0, [r4, r2]\n    cmp r0, #0\n    bne _021E6DE0\n    add r1, r4, #0\n    add r1, #0xe8\n    sub r2, #0x71\n    ldr r1, [r1]\n    ldr r2, [r4, r2]\n    add r0, r4, #4\n    bl ov51_021E757C\n    ldr r2, _021E6E0C ; =0x000033CC\n    add r0, r4, #0\n    ldr r2, [r4, r2]\n    add r0, #0x54\n    mov r1, #1\n    bl ov51_021E7664\n    b _021E6DF2\n    cmp r0, #0xf\n    bne _021E6DF2\n    sub r2, #0x6d\n    add r0, r4, #0\n    ldr r2, [r4, r2]\n    add r0, #0x54\n    mov r1, #0\n    bl ov51_021E7664\n    ldr r0, _021E6E08 ; =0x00003439\n    mov r1, #0x1e\n    ldrb r0, [r4, r0]\n    add r0, r0, #1\n    bl _s32_div_f\n    ldr r0, _021E6E08 ; =0x00003439\n    strb r1, [r4, r0]\n    pop {r4, pc}\n    _021E6E04: .word 0x000030F4\n    _021E6E08: .word 0x00003439\n    _021E6E0C: .word 0x000033CC"
    );
    #endif
}

void ov51_021E6E10(void) {
    /* Original at 0x021E6E10 */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    cmp r4, #1\n    ldr r0, _021E6E5C ; =0x0000311C\n    bne _021E6E38\n    add r0, r5, r0\n    mov r1, #1\n    mov r2, #2\n    mov r3, #0\n    bl ov51_021E7D44\n    mov r1, #0\n    ldr r0, _021E6E5C ; =0x0000311C\n    add r2, r1, #0\n    add r0, r5, r0\n    add r3, r1, #0\n    bl ov51_021E7D44\n    b _021E6E52\n    mov r1, #1\n    add r0, r5, r0\n    mov r2, #2\n    add r3, r1, #0\n    bl ov51_021E7D44\n    ldr r0, _021E6E5C ; =0x0000311C\n    mov r1, #0\n    add r0, r5, r0\n    add r2, r1, #0\n    mov r3, #1\n    bl ov51_021E7D44\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov51_021E78D0\n    pop {r3, r4, r5, pc}\n    _021E6E5C: .word 0x0000311C"
    );
    #endif
}

void ov51_021E6E60(void) {
    /* Original at 0x021E6E60 */
    /* Requires manual decompilation - 61 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r5, r0, #0\n    ldr r7, _021E6EE4 ; =ov51_021E7F48\n    mov r4, #0\n    add r6, r5, #4\n    lsl r1, r4, #4\n    lsl r2, r4, #3\n    ldr r0, [r5]\n    add r1, r6, r1\n    add r2, r7, r2\n    bl AddWindow\n    add r0, r4, #1\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    cmp r4, #0xe\n    blo _021E6E6C\n    mov r2, #0\n    str r2, [sp]\n    ldr r0, [r5]\n    mov r1, #7\n    mov r3, #1\n    bl BG_FillCharDataRange\n    mov r2, #0\n    str r2, [sp]\n    ldr r0, [r5]\n    mov r1, #4\n    mov r3, #1\n    bl BG_FillCharDataRange\n    ldr r0, _021E6EE8 ; =0x0000343D\n    ldr r2, _021E6EEC ; =0x000003E1\n    ldrb r0, [r5, r0]\n    mov r1, #4\n    mov r3, #0xd\n    str r0, [sp]\n    mov r0, #0x19\n    str r0, [sp, #4]\n    ldr r0, [r5]\n    bl LoadUserFrameGfx2\n    mov r1, #7\n    mov r0, #4\n    lsl r1, r1, #6\n    mov r2, #0x19\n    bl LoadFontPal0\n    mov r0, #0x19\n    bl YesNoPrompt_Create\n    mov r1, #0xcf\n    lsl r1, r1, #6\n    str r0, [r5, r1]\n    ldr r0, [r5]\n    mov r1, #7\n    bl ScheduleBgTilemapBufferTransfer\n    ldr r0, [r5]\n    mov r1, #4\n    bl ScheduleBgTilemapBufferTransfer\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021E6EE4: .word ov51_021E7F48\n    _021E6EE8: .word 0x0000343D\n    _021E6EEC: .word 0x000003E1"
    );
    #endif
}

void ov51_021E6EF0(void) {
    /* Original at 0x021E6EF0 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    mov r0, #0xcf\n    lsl r0, r0, #6\n    ldr r0, [r4, r0]\n    bl YesNoPrompt_Destroy\n    mov r5, #0\n    add r4, r4, #4\n    lsl r0, r5, #4\n    add r0, r4, r0\n    bl RemoveWindow\n    add r0, r5, #1\n    lsl r0, r0, #0x10\n    lsr r5, r0, #0x10\n    cmp r5, #0xe\n    blo _021E6F02\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov51_021E6F18(void) {
    /* Original at 0x021E6F18 */
    /* Requires manual decompilation - 305 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x28\n    add r7, r0, #0\n    ldr r0, _021E71BC ; =0x000033C4\n    add r6, r1, #0\n    ldr r0, [r7, r0]\n    add r5, r2, #0\n    str r0, [sp, #0x20]\n    mov r4, #0\n    lsl r0, r4, #4\n    str r0, [sp, #0x24]\n    add r0, r6, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    cmp r4, #3\n    bne _021E6F44\n    bne _021E6F68\n    ldrb r0, [r5, #4]\n    lsl r0, r0, #0x1c\n    lsr r0, r0, #0x1f\n    beq _021E6F68\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _021E71C0 ; =0x00010200\n    lsl r2, r4, #2\n    str r0, [sp, #8]\n    mov r0, #0\n    add r3, r7, r2\n    str r0, [sp, #0xc]\n    ldr r2, _021E71C4 ; =0x000033EC\n    ldr r0, [sp, #0x24]\n    mov r1, #0\n    ldr r2, [r3, r2]\n    add r0, r6, r0\n    add r3, r1, #0\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r4, #1\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    cmp r4, #7\n    blo _021E6F2A\n    mov r0, #0x20\n    mov r1, #0x19\n    bl String_New\n    str r0, [sp, #0x1c]\n    ldr r0, _021E71C8 ; =0x000033D0\n    mov r1, #0x20\n    ldr r0, [r7, r0]\n    mov r2, #0x19\n    str r0, [sp, #0x18]\n    mov r0, #6\n    bl MessageFormat_New_Custom\n    add r4, r0, #0\n    ldr r0, _021E71CC ; =0x000033D4\n    mov r2, #0\n    ldr r0, [r7, r0]\n    mov r1, #0x60\n    str r0, [sp, #0x14]\n    str r0, [sp]\n    ldrh r0, [r5, #0x28]\n    add r3, r2, #0\n    str r0, [sp, #4]\n    mov r0, #5\n    str r0, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    mov r0, #0xff\n    str r0, [sp, #0x10]\n    add r0, r6, #0\n    bl ov51_021E74F4\n    ldr r0, _021E71C8 ; =0x000033D0\n    add r1, r5, #0\n    ldr r0, [r7, r0]\n    add r1, #8\n    bl CopyU16ArrayToString\n    ldr r0, _021E71C8 ; =0x000033D0\n    mov r2, #0\n    ldr r0, [r7, r0]\n    mov r1, #0x68\n    str r0, [sp]\n    add r0, r6, #0\n    add r0, #0x10\n    add r3, r2, #0\n    bl ov51_021E7540\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r2, [r5, #0x1c]\n    add r0, r4, #0\n    mov r1, #5\n    mov r3, #6\n    bl BufferIntegerAsString\n    ldr r0, [sp, #0x20]\n    ldr r2, [sp, #0x1c]\n    mov r1, #0x13\n    bl ReadMsgDataIntoString\n    ldr r1, [sp, #0x18]\n    ldr r2, [sp, #0x1c]\n    add r0, r4, #0\n    bl StringExpandPlaceholders\n    mov r0, #0\n    ldr r1, [sp, #0x18]\n    add r2, r0, #0\n    bl FontID_String_GetWidth\n    mov r1, #0x88\n    sub r3, r1, r0\n    mov r1, #0\n    str r1, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _021E71C0 ; =0x00010200\n    ldr r2, [sp, #0x18]\n    str r0, [sp, #8]\n    add r0, r6, #0\n    add r0, #0x20\n    str r1, [sp, #0xc]\n    bl AddTextPrinterParameterizedWithColor\n    ldrb r0, [r5, #4]\n    lsl r0, r0, #0x1c\n    lsr r0, r0, #0x1f\n    beq _021E7076\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r2, [r5, #0x20]\n    add r0, r4, #0\n    mov r1, #5\n    mov r3, #3\n    bl BufferIntegerAsString\n    ldr r0, [sp, #0x20]\n    ldr r2, [sp, #0x1c]\n    mov r1, #0x1a\n    bl ReadMsgDataIntoString\n    ldr r1, [sp, #0x18]\n    ldr r2, [sp, #0x1c]\n    add r0, r4, #0\n    bl StringExpandPlaceholders\n    mov r0, #0\n    ldr r1, [sp, #0x18]\n    add r2, r0, #0\n    bl FontID_String_GetWidth\n    mov r1, #0x88\n    sub r3, r1, r0\n    mov r1, #0\n    str r1, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _021E71C0 ; =0x00010200\n    ldr r2, [sp, #0x18]\n    str r0, [sp, #8]\n    add r0, r6, #0\n    add r0, #0x30\n    str r1, [sp, #0xc]\n    bl AddTextPrinterParameterizedWithColor\n    ldr r0, [sp, #0x14]\n    mov r2, #0\n    str r0, [sp]\n    ldr r0, [r5, #0x24]\n    mov r1, #0x88\n    str r0, [sp, #4]\n    mov r0, #9\n    str r0, [sp, #8]\n    mov r0, #1\n    str r0, [sp, #0xc]\n    mov r0, #0xff\n    str r0, [sp, #0x10]\n    add r0, r6, #0\n    add r0, #0x40\n    add r3, r2, #0\n    bl ov51_021E74F4\n    ldrb r0, [r5, #4]\n    lsl r0, r0, #0x1e\n    lsr r0, r0, #0x1f\n    beq _021E70DA\n    ldr r0, [r5, #0x18]\n    bl GetIGTHours\n    add r2, r0, #0\n    mov r0, #1\n    str r0, [sp]\n    str r0, [sp, #4]\n    add r0, r4, #0\n    mov r1, #0\n    mov r3, #3\n    bl BufferIntegerAsString\n    ldr r0, [r5, #0x18]\n    bl GetIGTMinutes\n    mov r3, #2\n    add r2, r0, #0\n    str r3, [sp]\n    mov r1, #1\n    add r0, r4, #0\n    str r1, [sp, #4]\n    bl BufferIntegerAsString\n    ldr r0, [sp, #0x20]\n    ldr r2, [sp, #0x1c]\n    mov r1, #0x15\n    bl ReadMsgDataIntoString\n    b _021E710A\n    mov r0, #1\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldrh r2, [r5, #0x2a]\n    add r0, r4, #0\n    mov r1, #0\n    mov r3, #3\n    bl BufferIntegerAsString\n    mov r3, #2\n    add r2, r5, #0\n    str r3, [sp]\n    mov r1, #1\n    str r1, [sp, #4]\n    add r2, #0x2e\n    ldrb r2, [r2]\n    add r0, r4, #0\n    bl BufferIntegerAsString\n    ldr r0, [sp, #0x20]\n    ldr r2, [sp, #0x1c]\n    mov r1, #0x14\n    bl ReadMsgDataIntoString\n    ldr r1, [sp, #0x18]\n    ldr r2, [sp, #0x1c]\n    add r0, r4, #0\n    bl StringExpandPlaceholders\n    mov r0, #0\n    ldr r1, [sp, #0x18]\n    add r2, r0, #0\n    bl FontID_String_GetWidth\n    mov r1, #0xe0\n    sub r3, r1, r0\n    mov r1, #0\n    str r1, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _021E71C0 ; =0x00010200\n    ldr r2, [sp, #0x18]\n    str r0, [sp, #8]\n    add r0, r6, #0\n    add r0, #0x50\n    str r1, [sp, #0xc]\n    bl AddTextPrinterParameterizedWithColor\n    mov r1, #2\n    add r2, r5, #0\n    str r1, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    add r2, #0x2f\n    ldrb r2, [r2]\n    add r0, r4, #0\n    add r3, r1, #0\n    bl BufferIntegerAsString\n    add r2, r5, #0\n    add r2, #0x30\n    ldrb r2, [r2]\n    add r0, r4, #0\n    mov r1, #3\n    bl BufferMonthNameAbbr\n    mov r3, #2\n    str r3, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    add r5, #0x31\n    ldrb r2, [r5]\n    add r0, r4, #0\n    mov r1, #4\n    bl BufferIntegerAsString\n    ldr r0, [sp, #0x20]\n    ldr r2, [sp, #0x1c]\n    mov r1, #0x16\n    bl ReadMsgDataIntoString\n    ldr r1, [sp, #0x18]\n    ldr r2, [sp, #0x1c]\n    add r0, r4, #0\n    bl StringExpandPlaceholders\n    mov r0, #0\n    ldr r1, [sp, #0x18]\n    add r2, r0, #0\n    bl FontID_String_GetWidth\n    mov r1, #0xe0\n    sub r3, r1, r0\n    mov r1, #0\n    str r1, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _021E71C0 ; =0x00010200\n    add r6, #0x60\n    str r0, [sp, #8]\n    ldr r2, [sp, #0x18]\n    add r0, r6, #0\n    str r1, [sp, #0xc]\n    bl AddTextPrinterParameterizedWithColor\n    ldr r0, [sp, #0x1c]\n    bl String_Delete\n    add r0, r4, #0\n    bl MessageFormat_Delete\n    add sp, #0x28\n    pop {r3, r4, r5, r6, r7, pc}\n    _021E71BC: .word 0x000033C4\n    _021E71C0: .word 0x00010200\n    _021E71C4: .word 0x000033EC\n    _021E71C8: .word 0x000033D0\n    _021E71CC: .word 0x000033D4"
    );
    #endif
}

void ov51_021E71D0(void) {
    /* Original at 0x021E71D0 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    ldr r1, _021E7204 ; =0x000030F4\n    ldr r0, [r0, r1]\n    cmp r0, #0\n    beq _021E71F0\n    mov r5, #7\n    add r4, #0x70\n    add r0, r4, #0\n    bl CopyWindowToVram\n    add r5, r5, #1\n    add r4, #0x10\n    cmp r5, #0xb\n    blt _021E71E0\n    pop {r3, r4, r5, pc}\n    mov r5, #0\n    add r0, r4, #0\n    bl CopyWindowToVram\n    add r5, r5, #1\n    add r4, #0x10\n    cmp r5, #7\n    blt _021E71F2\n    pop {r3, r4, r5, pc}\n    nop\n    _021E7204: .word 0x000030F4"
    );
    #endif
}

void ov51_021E7208(void) {
    /* Original at 0x021E7208 */
    /* Requires manual decompilation - 315 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x20\n    add r5, r1, #0\n    ldr r1, _021E74C4 ; =0x000033C4\n    str r0, [sp, #0x14]\n    ldr r0, [r0, r1]\n    str r2, [sp, #0x18]\n    str r0, [sp, #0x1c]\n    mov r4, #7\n    mov r6, #0\n    lsl r7, r4, #4\n    add r0, r5, r7\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    str r6, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _021E74C8 ; =0x00010200\n    ldr r2, [sp, #0x14]\n    str r0, [sp, #8]\n    lsl r3, r4, #2\n    add r3, r2, r3\n    ldr r2, _021E74CC ; =0x000033EC\n    str r6, [sp, #0xc]\n    ldr r2, [r3, r2]\n    add r0, r5, r7\n    add r1, r6, #0\n    add r3, r6, #0\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r4, #1\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    cmp r4, #0xb\n    blo _021E721C\n    mov r0, #0x20\n    mov r1, #0x19\n    bl String_New\n    add r7, r0, #0\n    ldr r1, _021E74D0 ; =0x000033D0\n    ldr r0, [sp, #0x14]\n    mov r2, #0x19\n    ldr r4, [r0, r1]\n    mov r0, #6\n    mov r1, #0x20\n    bl MessageFormat_New_Custom\n    ldr r1, [sp, #0x18]\n    add r6, r0, #0\n    add r1, #0x33\n    ldrb r1, [r1]\n    cmp r1, #0\n    beq _021E72EC\n    mov r1, #2\n    str r1, [sp]\n    mov r2, #1\n    str r2, [sp, #4]\n    ldr r2, [sp, #0x18]\n    add r3, r1, #0\n    add r2, #0x32\n    ldrb r2, [r2]\n    bl BufferIntegerAsString\n    ldr r2, [sp, #0x18]\n    add r0, r6, #0\n    add r2, #0x33\n    ldrb r2, [r2]\n    mov r1, #3\n    bl BufferMonthNameAbbr\n    mov r3, #2\n    ldr r2, [sp, #0x18]\n    str r3, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    add r2, #0x34\n    ldrb r2, [r2]\n    add r0, r6, #0\n    mov r1, #4\n    bl BufferIntegerAsString\n    mov r0, #1\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r2, [sp, #0x18]\n    add r0, r6, #0\n    ldrh r2, [r2, #0x2c]\n    mov r1, #0\n    mov r3, #3\n    bl BufferIntegerAsString\n    mov r3, #2\n    ldr r2, [sp, #0x18]\n    str r3, [sp]\n    mov r1, #1\n    str r1, [sp, #4]\n    add r2, #0x35\n    ldrb r2, [r2]\n    add r0, r6, #0\n    bl BufferIntegerAsString\n    ldr r0, [sp, #0x1c]\n    mov r1, #0x16\n    add r2, r7, #0\n    bl ReadMsgDataIntoString\n    add r0, r6, #0\n    add r1, r4, #0\n    add r2, r7, #0\n    bl StringExpandPlaceholders\n    b _021E7324\n    ldr r0, [sp, #0x1c]\n    mov r1, #0xc\n    add r2, r7, #0\n    bl ReadMsgDataIntoString\n    mov r1, #0\n    str r1, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    add r0, r6, #0\n    add r2, r7, #0\n    add r3, r1, #0\n    bl BufferString\n    mov r3, #0\n    str r3, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    add r0, r6, #0\n    mov r1, #1\n    add r2, r7, #0\n    bl BufferString\n    ldr r0, [sp, #0x1c]\n    mov r1, #0x19\n    add r2, r4, #0\n    bl ReadMsgDataIntoString\n    mov r0, #0\n    add r1, r4, #0\n    add r2, r0, #0\n    bl FontID_String_GetWidth\n    mov r1, #0xe0\n    sub r3, r1, r0\n    mov r1, #0\n    str r1, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _021E74C8 ; =0x00010200\n    add r2, r4, #0\n    str r0, [sp, #8]\n    add r0, r5, #0\n    add r0, #0x70\n    str r1, [sp, #0xc]\n    bl AddTextPrinterParameterizedWithColor\n    ldr r0, [sp, #0x1c]\n    mov r1, #0x14\n    add r2, r7, #0\n    bl ReadMsgDataIntoString\n    add r0, r6, #0\n    add r1, r4, #0\n    add r2, r7, #0\n    bl StringExpandPlaceholders\n    mov r0, #0\n    add r1, r4, #0\n    add r2, r0, #0\n    bl FontID_String_GetWidth\n    mov r1, #0xe0\n    sub r3, r1, r0\n    mov r0, #0x10\n    str r0, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _021E74C8 ; =0x00010200\n    mov r1, #0\n    str r0, [sp, #8]\n    add r0, r5, #0\n    add r0, #0x70\n    add r2, r4, #0\n    str r1, [sp, #0xc]\n    bl AddTextPrinterParameterizedWithColor\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r2, [sp, #0x18]\n    add r0, r6, #0\n    ldr r2, [r2, #0x38]\n    mov r1, #5\n    mov r3, #6\n    bl BufferIntegerAsString\n    ldr r0, [sp, #0x1c]\n    mov r1, #0x1b\n    add r2, r7, #0\n    bl ReadMsgDataIntoString\n    add r0, r6, #0\n    add r1, r4, #0\n    add r2, r7, #0\n    bl StringExpandPlaceholders\n    mov r0, #0\n    add r1, r4, #0\n    add r2, r0, #0\n    bl FontID_String_GetWidth\n    mov r1, #0xe0\n    sub r3, r1, r0\n    mov r1, #0\n    str r1, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _021E74C8 ; =0x00010200\n    add r2, r4, #0\n    str r0, [sp, #8]\n    add r0, r5, #0\n    add r0, #0x80\n    str r1, [sp, #0xc]\n    bl AddTextPrinterParameterizedWithColor\n    ldr r0, [sp, #0x1c]\n    mov r1, #0x17\n    add r2, r4, #0\n    bl ReadMsgDataIntoString\n    mov r1, #0\n    str r1, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _021E74C8 ; =0x00010200\n    add r2, r4, #0\n    str r0, [sp, #8]\n    add r0, r5, #0\n    add r0, #0x90\n    mov r3, #0x70\n    str r1, [sp, #0xc]\n    bl AddTextPrinterParameterizedWithColor\n    mov r2, #0\n    ldr r0, [sp, #0x18]\n    str r4, [sp]\n    ldr r0, [r0, #0x40]\n    mov r1, #0xe0\n    str r0, [sp, #4]\n    mov r0, #4\n    str r0, [sp, #8]\n    mov r0, #1\n    str r0, [sp, #0xc]\n    mov r0, #0xff\n    str r0, [sp, #0x10]\n    add r0, r5, #0\n    add r0, #0x90\n    add r3, r2, #0\n    bl ov51_021E74F4\n    ldr r0, [sp, #0x1c]\n    mov r1, #0x18\n    add r2, r4, #0\n    bl ReadMsgDataIntoString\n    mov r1, #0\n    str r1, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _021E74C8 ; =0x00010200\n    add r2, r4, #0\n    str r0, [sp, #8]\n    add r0, r5, #0\n    add r0, #0x90\n    mov r3, #0xb0\n    str r1, [sp, #0xc]\n    bl AddTextPrinterParameterizedWithColor\n    ldr r0, [sp, #0x18]\n    str r4, [sp]\n    ldr r0, [r0, #0x3c]\n    mov r1, #0xe0\n    str r0, [sp, #4]\n    mov r0, #4\n    str r0, [sp, #8]\n    mov r0, #1\n    str r0, [sp, #0xc]\n    mov r0, #0xff\n    str r0, [sp, #0x10]\n    add r0, r5, #0\n    add r0, #0x90\n    mov r2, #0x40\n    mov r3, #0\n    bl ov51_021E74F4\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r2, [sp, #0x18]\n    add r0, r6, #0\n    ldr r2, [r2, #0x44]\n    mov r1, #5\n    mov r3, #6\n    bl BufferIntegerAsString\n    ldr r0, [sp, #0x1c]\n    mov r1, #0x1b\n    add r2, r7, #0\n    bl ReadMsgDataIntoString\n    add r0, r6, #0\n    add r1, r4, #0\n    add r2, r7, #0\n    bl StringExpandPlaceholders\n    mov r0, #0\n    add r1, r4, #0\n    add r2, r0, #0\n    bl FontID_String_GetWidth\n    mov r1, #0xe0\n    sub r3, r1, r0\n    mov r1, #0\n    str r1, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _021E74C8 ; =0x00010200\n    add r5, #0xa0\n    str r0, [sp, #8]\n    add r0, r5, #0\n    add r2, r4, #0\n    str r1, [sp, #0xc]\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r7, #0\n    bl String_Delete\n    add r0, r6, #0\n    bl MessageFormat_Delete\n    add sp, #0x20\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021E74C4: .word 0x000033C4\n    _021E74C8: .word 0x00010200\n    _021E74CC: .word 0x000033EC\n    _021E74D0: .word 0x000033D0"
    );
    #endif
}

void ov51_021E74D4(void) {
    /* Original at 0x021E74D4 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r1, #0\n    add r6, r2, #0\n    add r5, r0, #0\n    cmp r4, r6\n    bhi _021E74F2\n    lsl r0, r4, #4\n    add r0, r5, r0\n    bl ClearWindowTilemapAndCopyToVram\n    add r0, r4, #1\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    cmp r4, r6\n    bls _021E74E0\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov51_021E74F4(void) {
    /* Original at 0x021E74F4 */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r7, r0, #0\n    mov r0, #1\n    add r4, r2, #0\n    str r0, [sp]\n    add r2, sp, #0x18\n    add r5, r1, #0\n    add r6, r3, #0\n    ldrb r2, [r2, #0x18]\n    ldr r0, [sp, #0x28]\n    ldr r1, [sp, #0x2c]\n    ldr r3, [sp, #0x34]\n    bl String16_FormatInteger\n    mov r0, #0\n    ldr r1, [sp, #0x28]\n    add r2, r0, #0\n    bl FontID_String_GetWidth\n    add r3, r0, #0\n    add r3, r3, r4\n    str r6, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _021E753C ; =0x00010200\n    ldr r2, [sp, #0x28]\n    str r0, [sp, #8]\n    mov r1, #0\n    add r0, r7, #0\n    sub r3, r5, r3\n    str r1, [sp, #0xc]\n    bl AddTextPrinterParameterizedWithColor\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    _021E753C: .word 0x00010200"
    );
    #endif
}

void ov51_021E7540(void) {
    /* Original at 0x021E7540 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r7, r0, #0\n    add r5, r1, #0\n    mov r0, #0\n    add r4, r2, #0\n    ldr r1, [sp, #0x28]\n    add r6, r3, #0\n    add r2, r0, #0\n    bl FontID_String_GetWidth\n    add r3, r0, #0\n    add r3, r3, r4\n    str r6, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _021E7578 ; =0x00010200\n    ldr r2, [sp, #0x28]\n    str r0, [sp, #8]\n    mov r1, #0\n    add r0, r7, #0\n    sub r3, r5, r3\n    str r1, [sp, #0xc]\n    bl AddTextPrinterParameterizedWithColor\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021E7578: .word 0x00010200"
    );
    #endif
}

void ov51_021E757C(void) {
    /* Original at 0x021E757C */
    /* Requires manual decompilation - 95 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    add r5, r1, #0\n    add r7, r0, #0\n    ldr r0, [r5, #0x18]\n    cmp r0, #0\n    bne _021E758E\n    bl GF_AssertFail\n    ldr r0, [r5, #0x18]\n    bl GetIGTHours\n    mov r0, #0x28\n    str r0, [sp]\n    mov r0, #0x10\n    str r0, [sp, #4]\n    add r0, r7, #0\n    mov r1, #0\n    add r0, #0x50\n    mov r2, #0xb8\n    add r3, r1, #0\n    bl FillWindowPixelRect\n    ldr r2, _021E765C ; =0x000002D7\n    mov r0, #0\n    mov r1, #0x1b\n    mov r3, #0x19\n    bl NewMsgDataFromNarc\n    str r0, [sp, #0x10]\n    mov r0, #0x20\n    mov r1, #0x19\n    bl String_New\n    add r4, r0, #0\n    mov r0, #0x20\n    mov r1, #0x19\n    bl String_New\n    str r0, [sp, #0x14]\n    mov r0, #2\n    mov r1, #0x20\n    mov r2, #0x19\n    bl MessageFormat_New_Custom\n    add r6, r0, #0\n    ldr r0, [r5, #0x18]\n    bl GetIGTHours\n    add r2, r0, #0\n    mov r0, #1\n    str r0, [sp]\n    str r0, [sp, #4]\n    add r0, r6, #0\n    mov r1, #0\n    mov r3, #3\n    bl BufferIntegerAsString\n    ldr r0, [r5, #0x18]\n    bl GetIGTMinutes\n    mov r3, #2\n    add r2, r0, #0\n    str r3, [sp]\n    mov r1, #1\n    add r0, r6, #0\n    str r1, [sp, #4]\n    bl BufferIntegerAsString\n    ldr r0, [sp, #0x10]\n    ldr r2, [sp, #0x14]\n    mov r1, #0x15\n    bl ReadMsgDataIntoString\n    ldr r2, [sp, #0x14]\n    add r0, r6, #0\n    add r1, r4, #0\n    bl StringExpandPlaceholders\n    mov r0, #0\n    add r1, r4, #0\n    add r2, r0, #0\n    bl FontID_String_GetWidth\n    mov r1, #0xe0\n    sub r3, r1, r0\n    mov r1, #0\n    str r1, [sp]\n    ldr r0, _021E7660 ; =0x00010200\n    str r1, [sp, #4]\n    str r0, [sp, #8]\n    add r7, #0x50\n    add r0, r7, #0\n    add r2, r4, #0\n    str r1, [sp, #0xc]\n    bl AddTextPrinterParameterizedWithColor\n    ldr r0, [sp, #0x10]\n    bl DestroyMsgData\n    add r0, r4, #0\n    bl String_Delete\n    ldr r0, [sp, #0x14]\n    bl String_Delete\n    add r0, r6, #0\n    bl MessageFormat_Delete\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021E765C: .word 0x000002D7\n    _021E7660: .word 0x00010200"
    );
    #endif
}

void ov51_021E7664(void) {
    /* Original at 0x021E7664 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x10\n    add r4, r0, #0\n    cmp r1, #0\n    beq _021E7684\n    mov r1, #0\n    str r1, [sp]\n    ldr r3, _021E76A0 ; =0x00010200\n    str r1, [sp, #4]\n    str r3, [sp, #8]\n    mov r3, #0xcd\n    str r1, [sp, #0xc]\n    bl AddTextPrinterParameterizedWithColor\n    add sp, #0x10\n    pop {r4, pc}\n    mov r1, #5\n    str r1, [sp]\n    mov r1, #0x10\n    str r1, [sp, #4]\n    mov r1, #0\n    mov r2, #0xcd\n    add r3, r1, #0\n    bl FillWindowPixelRect\n    add r0, r4, #0\n    bl CopyWindowToVram\n    add sp, #0x10\n    pop {r4, pc}\n    _021E76A0: .word 0x00010200"
    );
    #endif
}

void ov51_021E76A4(void) {
    /* Original at 0x021E76A4 */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    ldr r1, _021E76E4 ; =0x000033D8\n    add r5, r0, #0\n    ldr r1, [r5, r1]\n    mov r0, #4\n    mov r2, #0\n    bl FontID_String_GetWidth\n    mov r1, #0x30\n    sub r4, r1, r0\n    add r0, r5, #0\n    add r0, #0xd4\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r1, #4\n    str r1, [sp]\n    mov r2, #0\n    ldr r0, _021E76E8 ; =0x00050400\n    str r2, [sp, #4]\n    str r0, [sp, #8]\n    str r2, [sp, #0xc]\n    ldr r2, _021E76E4 ; =0x000033D8\n    add r0, r5, #0\n    ldr r2, [r5, r2]\n    add r0, #0xd4\n    lsr r3, r4, #1\n    bl AddTextPrinterParameterizedWithColor\n    add sp, #0x10\n    pop {r3, r4, r5, pc}\n    _021E76E4: .word 0x000033D8\n    _021E76E8: .word 0x00050400"
    );
    #endif
}

void ov51_021E76EC(void) {
    /* Original at 0x021E76EC */
    /* Requires manual decompilation - 78 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    add r4, r5, #0\n    add r4, #0xc4\n    cmp r1, #0\n    bne _021E7706\n    ldr r0, _021E778C ; =0x0000343A\n    ldrb r0, [r5, r0]\n    lsl r0, r0, #0x1e\n    lsr r0, r0, #0x1f\n    beq _021E7706\n    mov r1, #1\n    cmp r1, #0\n    beq _021E7712\n    cmp r1, #1\n    beq _021E7756\n    add sp, #0x10\n    pop {r3, r4, r5, pc}\n    add r0, r4, #0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    ldr r1, _021E7790 ; =0x000033E0\n    mov r0, #4\n    ldr r1, [r5, r1]\n    mov r2, #0\n    bl FontID_String_GetWidth\n    mov r1, #0x60\n    sub r3, r1, r0\n    mov r1, #4\n    str r1, [sp]\n    mov r2, #0\n    ldr r0, _021E7794 ; =0x00050400\n    str r2, [sp, #4]\n    str r0, [sp, #8]\n    str r2, [sp, #0xc]\n    ldr r2, _021E7790 ; =0x000033E0\n    add r0, r4, #0\n    ldr r2, [r5, r2]\n    lsr r3, r3, #1\n    bl AddTextPrinterParameterizedWithColor\n    ldr r0, _021E7798 ; =0x0000311C\n    mov r1, #1\n    add r0, r5, r0\n    mov r2, #2\n    add r3, r1, #0\n    bl ov51_021E7D44\n    add sp, #0x10\n    pop {r3, r4, r5, pc}\n    add r0, r4, #0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r0, #4\n    str r0, [sp]\n    mov r1, #0\n    ldr r0, _021E7794 ; =0x00050400\n    str r1, [sp, #4]\n    str r0, [sp, #8]\n    ldr r2, _021E779C ; =0x000033DC\n    str r1, [sp, #0xc]\n    ldr r2, [r5, r2]\n    add r0, r4, #0\n    add r3, r1, #0\n    bl AddTextPrinterParameterizedWithColor\n    ldr r0, _021E7798 ; =0x0000311C\n    mov r1, #1\n    add r0, r5, r0\n    mov r2, #4\n    add r3, r1, #0\n    bl ov51_021E7D44\n    add sp, #0x10\n    pop {r3, r4, r5, pc}\n    nop\n    _021E778C: .word 0x0000343A\n    _021E7790: .word 0x000033E0\n    _021E7794: .word 0x00050400\n    _021E7798: .word 0x0000311C\n    _021E779C: .word 0x000033DC"
    );
    #endif
}

void ov51_021E77A0(void) {
    /* Original at 0x021E77A0 */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    add r4, r1, #0\n    bne _021E77B6\n    ldr r2, _021E77F4 ; =0x000003E1\n    add r0, #0xb4\n    mov r1, #1\n    mov r3, #0xd\n    bl DrawFrameAndWindow2\n    add r0, r5, #0\n    add r0, #0xb4\n    mov r1, #0xf\n    bl FillWindowPixelBuffer\n    mov r3, #0\n    ldr r2, _021E77F8 ; =0x0000343E\n    str r3, [sp]\n    ldrb r0, [r5, r2]\n    lsl r4, r4, #2\n    add r4, r5, r4\n    str r0, [sp, #4]\n    ldr r0, _021E77FC ; =0x0001020F\n    sub r2, #0x5a\n    str r0, [sp, #8]\n    str r3, [sp, #0xc]\n    add r0, r5, #0\n    ldr r2, [r4, r2]\n    add r0, #0xb4\n    mov r1, #1\n    bl AddTextPrinterParameterizedWithColor\n    ldr r1, _021E7800 ; =0x0000343C\n    strb r0, [r5, r1]\n    ldr r0, [r5]\n    mov r1, #4\n    bl ScheduleBgTilemapBufferTransfer\n    add sp, #0x10\n    pop {r3, r4, r5, pc}\n    nop\n    _021E77F4: .word 0x000003E1\n    _021E77F8: .word 0x0000343E\n    _021E77FC: .word 0x0001020F\n    _021E7800: .word 0x0000343C"
    );
    #endif
}

void ov51_021E7804(void) {
    /* Original at 0x021E7804 */
    /* Requires manual decompilation - 47 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0x14\n    add r4, r0, #0\n    add r0, sp, #0\n    mov r1, #0\n    mov r2, #0x14\n    bl MI_CpuFill8\n    ldr r0, [r4]\n    mov r1, #0x1a\n    str r0, [sp]\n    mov r0, #4\n    str r0, [sp, #4]\n    ldr r0, _021E7864 ; =0x000003A5\n    mov r2, #0xf\n    str r0, [sp, #8]\n    mov r0, #0xb\n    str r0, [sp, #0xc]\n    add r0, sp, #0\n    strb r1, [r0, #0x10]\n    mov r1, #6\n    strb r1, [r0, #0x11]\n    ldrb r1, [r0, #0x12]\n    bic r1, r2\n    ldr r2, _021E7868 ; =0x0000310C\n    ldr r2, [r4, r2]\n    lsl r2, r2, #0x18\n    lsr r3, r2, #0x18\n    mov r2, #0xf\n    and r2, r3\n    orr r1, r2\n    strb r1, [r0, #0x12]\n    ldrb r2, [r0, #0x12]\n    mov r1, #0xf0\n    bic r2, r1\n    strb r2, [r0, #0x12]\n    mov r0, #0xcf\n    lsl r0, r0, #6\n    ldr r0, [r4, r0]\n    add r1, sp, #0\n    bl YesNoPrompt_InitFromTemplate\n    ldr r0, [r4]\n    mov r1, #4\n    bl ScheduleBgTilemapBufferTransfer\n    add sp, #0x14\n    pop {r3, r4, pc}\n    _021E7864: .word 0x000003A5\n    _021E7868: .word 0x0000310C"
    );
    #endif
}

void ov51_021E786C(void) {
    /* Original at 0x021E786C */
    /* Requires manual decompilation - 44 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    mov r0, #0xcf\n    lsl r0, r0, #6\n    ldr r0, [r5, r0]\n    add r6, r1, #0\n    bl YesNoPrompt_HandleInput\n    cmp r0, #1\n    beq _021E7886\n    cmp r0, #2\n    beq _021E788A\n    b _021E788E\n    mov r4, #1\n    b _021E7894\n    mov r4, #0\n    b _021E7894\n    mov r0, #0\n    mvn r0, r0\n    pop {r4, r5, r6, pc}\n    mov r0, #0xcf\n    lsl r0, r0, #6\n    ldr r0, [r5, r0]\n    bl YesNoPrompt_IsInTouchMode\n    ldr r1, _021E78CC ; =0x0000310C\n    str r0, [r5, r1]\n    mov r0, #0xcf\n    lsl r0, r0, #6\n    ldr r0, [r5, r0]\n    bl YesNoPrompt_Reset\n    cmp r4, #0\n    beq _021E78B4\n    cmp r6, #0\n    beq _021E78C6\n    add r0, r5, #0\n    add r0, #0xb4\n    mov r1, #0\n    bl ClearFrameAndWindow2\n    ldr r0, [r5]\n    mov r1, #4\n    bl ScheduleBgTilemapBufferTransfer\n    add r0, r4, #0\n    pop {r4, r5, r6, pc}\n    nop\n    _021E78CC: .word 0x0000310C"
    );
    #endif
}

void ov51_021E78D0(void) {
    /* Original at 0x021E78D0 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    cmp r1, #1\n    bne _021E78E8\n    add r0, #0xd4\n    bl ClearWindowTilemapAndScheduleTransfer\n    add r4, #0xc4\n    add r0, r4, #0\n    bl ClearWindowTilemapAndScheduleTransfer\n    pop {r4, pc}\n    add r0, #0xd4\n    bl ScheduleWindowCopyToVram\n    add r4, #0xc4\n    add r0, r4, #0\n    bl ScheduleWindowCopyToVram\n    pop {r4, pc}"
    );
    #endif
}

void ov51_021E78F8(void) {
    /* Original at 0x021E78F8 */
    /* Requires manual decompilation - 225 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x6c\n    mov r2, #1\n    lsl r2, r2, #0x1a\n    str r0, [sp, #0x14]\n    ldr r0, [r2]\n    ldr r1, _021E7AD8 ; =0xFFCFFFEF\n    add r3, r0, #0\n    ldr r0, _021E7ADC ; =0x00200010\n    and r3, r1\n    orr r0, r3\n    str r0, [r2]\n    ldr r2, _021E7AE0 ; =0x04001000\n    ldr r0, [r2]\n    and r1, r0\n    mov r0, #0x10\n    orr r0, r1\n    str r0, [r2]\n    bl ov51_021E7D68\n    bl NNS_G2dInitOamManagerModule\n    mov r0, #0\n    str r0, [sp]\n    mov r1, #0x80\n    str r1, [sp, #4]\n    str r0, [sp, #8]\n    mov r3, #0x20\n    str r3, [sp, #0xc]\n    mov r2, #0x19\n    str r2, [sp, #0x10]\n    add r2, r0, #0\n    bl OamManager_Create\n    ldr r1, [sp, #0x14]\n    mov r0, #0x21\n    add r1, r1, #4\n    mov r2, #0x19\n    bl G2dRenderer_Init\n    ldr r1, [sp, #0x14]\n    mov r2, #0xe\n    str r0, [r1]\n    add r0, r1, #0\n    add r0, r0, #4\n    mov r1, #0\n    lsl r2, r2, #0x10\n    bl G2dRenderer_SetSubSurfaceCoords\n    mov r7, #0x4f\n    ldr r4, _021E7AE4 ; =ov51_021E7FB8\n    ldr r5, [sp, #0x14]\n    mov r6, #0\n    lsl r7, r7, #2\n    ldrb r0, [r4]\n    add r1, r6, #0\n    mov r2, #0x19\n    bl Create2DGfxResObjMan\n    mov r1, #0x4b\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    ldrb r0, [r4]\n    add r1, r6, #0\n    mov r2, #0x19\n    bl Create2DGfxResObjMan\n    str r0, [r5, r7]\n    add r6, r6, #1\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r6, #4\n    blt _021E7964\n    ldr r0, _021E7AE8 ; =ov51_021E7FBC\n    ldr r3, _021E7AEC ; =ov51_021E7FC4\n    ldr r1, [r0]\n    ldr r0, [r0, #4]\n    str r1, [sp, #0x24]\n    mov r5, #0\n    str r0, [sp, #0x28]\n    add r2, sp, #0x1c\n    mov r1, #8\n    ldrb r0, [r3]\n    add r3, r3, #1\n    strb r0, [r2]\n    add r2, r2, #1\n    sub r1, r1, #1\n    bne _021E799C\n    ldr r4, [sp, #0x14]\n    add r7, sp, #0x24\n    add r6, sp, #0x1c\n    str r5, [sp]\n    ldr r0, [r7]\n    mov r1, #0x31\n    str r0, [sp, #4]\n    mov r0, #0x19\n    str r0, [sp, #8]\n    mov r0, #0x4b\n    lsl r0, r0, #2\n    ldrb r2, [r6]\n    ldr r0, [r4, r0]\n    mov r3, #0\n    bl AddCharResObjFromNarc\n    mov r1, #0x53\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    str r5, [sp]\n    ldr r0, [r7]\n    mov r3, #0\n    str r0, [sp, #4]\n    mov r0, #0x10\n    str r0, [sp, #8]\n    mov r0, #0x19\n    str r0, [sp, #0xc]\n    add r0, r1, #0\n    sub r0, #0x1c\n    ldrb r2, [r6, #1]\n    ldr r0, [r4, r0]\n    mov r1, #0x31\n    bl AddPlttResObjFromNarc\n    mov r1, #0x15\n    lsl r1, r1, #4\n    str r0, [r4, r1]\n    str r5, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    mov r0, #0x19\n    str r0, [sp, #8]\n    add r0, r1, #0\n    sub r0, #0x1c\n    ldrb r2, [r6, #2]\n    ldr r0, [r4, r0]\n    mov r1, #0x31\n    mov r3, #0\n    bl AddCellOrAnimResObjFromNarc\n    mov r1, #0x55\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    str r5, [sp]\n    mov r0, #3\n    str r0, [sp, #4]\n    mov r0, #0x19\n    str r0, [sp, #8]\n    add r0, r1, #0\n    sub r0, #0x1c\n    ldrb r2, [r6, #3]\n    ldr r0, [r4, r0]\n    mov r1, #0x31\n    mov r3, #0\n    bl AddCellOrAnimResObjFromNarc\n    mov r1, #0x56\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    add r0, r1, #0\n    sub r0, #0xc\n    ldr r0, [r4, r0]\n    bl sub_0200ACF0\n    mov r0, #0x15\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    bl sub_0200AF94\n    add r5, r5, #1\n    add r7, r7, #4\n    add r6, r6, #4\n    add r4, #0x10\n    cmp r5, #2\n    blt _021E79AE\n    ldr r4, _021E7AF0 ; =ov51_021E7FDC\n    add r3, sp, #0x2c\n    mov r2, #8\n    ldmia r4!, {r0, r1}\n    stmia r3!, {r0, r1}\n    sub r2, r2, #1\n    bne _021E7A58\n    mov r0, #0x31\n    mov r1, #0x19\n    bl NARC_New\n    str r0, [sp, #0x18]\n    mov r1, #0x8e\n    ldr r0, [sp, #0x14]\n    lsl r1, r1, #2\n    mov r4, #0\n    add r7, r0, r1\n    ldr r0, [sp, #0x14]\n    lsl r6, r4, #2\n    add r1, sp, #0x2c\n    add r5, r0, r6\n    ldr r0, [sp, #0x18]\n    ldr r1, [r1, r6]\n    mov r2, #0x19\n    bl NARC_AllocAndReadWholeMember\n    mov r1, #0x7e\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    add r0, r1, #0\n    ldr r0, [r5, r0]\n    cmp r0, #0\n    beq _021E7AAE\n    add r1, r7, r6\n    bl NNS_G2dGetUnpackedPaletteData\n    cmp r0, #0\n    bne _021E7AB2\n    mov r0, #0x8e\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl Heap_Free\n    bl GF_AssertFail\n    b _021E7AB2\n    bl GF_AssertFail\n    add r0, r4, #1\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    cmp r4, #0x10\n    blo _021E7A74\n    ldr r0, [sp, #0x18]\n    bl NARC_Delete\n    mov r0, #0x10\n    mov r1, #1\n    bl GfGfx_EngineATogglePlanes\n    mov r0, #0x10\n    mov r1, #1\n    bl GfGfx_EngineBTogglePlanes\n    add sp, #0x6c\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _021E7AD8: .word 0xFFCFFFEF\n    _021E7ADC: .word 0x00200010\n    _021E7AE0: .word 0x04001000\n    _021E7AE4: .word ov51_021E7FB8\n    _021E7AE8: .word ov51_021E7FBC\n    _021E7AEC: .word ov51_021E7FC4\n    _021E7AF0: .word ov51_021E7FDC"
    );
    #endif
}

void ov51_021E7AF4(void) {
    /* Original at 0x021E7AF4 */
    /* Requires manual decompilation - 104 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x88\n    str r1, [sp, #0x2c]\n    mov r1, #0\n    add r5, r0, #0\n    str r2, [sp, #0x30]\n    mov r2, #0x4b\n    str r1, [sp]\n    sub r0, r1, #1\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    str r1, [sp, #0xc]\n    mov r0, #1\n    lsl r2, r2, #2\n    str r0, [sp, #0x10]\n    ldr r0, [r5, r2]\n    add r3, r1, #0\n    str r0, [sp, #0x14]\n    add r0, r2, #4\n    ldr r0, [r5, r0]\n    str r0, [sp, #0x18]\n    add r0, r2, #0\n    add r0, #8\n    ldr r0, [r5, r0]\n    add r2, #0xc\n    str r0, [sp, #0x1c]\n    ldr r0, [r5, r2]\n    add r2, r1, #0\n    str r0, [sp, #0x20]\n    str r1, [sp, #0x24]\n    str r1, [sp, #0x28]\n    add r0, sp, #0x64\n    bl CreateSpriteResourcesHeader\n    ldr r0, [r5]\n    mov r7, #0\n    str r0, [sp, #0x34]\n    add r0, sp, #0x64\n    str r0, [sp, #0x38]\n    mov r0, #1\n    lsl r0, r0, #0xc\n    str r7, [sp, #0x3c]\n    str r7, [sp, #0x40]\n    str r7, [sp, #0x44]\n    str r0, [sp, #0x48]\n    str r0, [sp, #0x4c]\n    str r0, [sp, #0x50]\n    add r0, sp, #0x34\n    strh r7, [r0, #0x20]\n    mov r0, #2\n    str r0, [sp, #0x58]\n    mov r0, #1\n    str r0, [sp, #0x5c]\n    mov r0, #0x19\n    str r0, [sp, #0x60]\n    ldr r0, [sp, #0x30]\n    cmp r0, #0\n    bne _021E7B6A\n    mov r7, #0x28\n    ldr r6, _021E7BCC ; =ov51_021E801C\n    mov r4, #0\n    ldr r0, [r6]\n    lsl r0, r0, #0xc\n    str r0, [sp, #0x3c]\n    ldr r0, [r6, #4]\n    add r0, r7, r0\n    lsl r0, r0, #0xc\n    str r0, [sp, #0x40]\n    add r0, sp, #0x34\n    bl Sprite_CreateAffine\n    mov r1, #0x5b\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    add r0, r1, #0\n    ldr r0, [r5, r0]\n    mov r1, #1\n    bl Sprite_SetAnimActiveFlag\n    mov r0, #0x5b\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    add r1, r4, #0\n    bl Sprite_SetAnimCtrlSeq\n    ldr r0, [sp, #0x2c]\n    ldrb r0, [r0, r4]\n    cmp r0, #0\n    beq _021E7BB0\n    ldr r0, [sp, #0x30]\n    cmp r0, #0\n    bne _021E7BBC\n    cmp r4, #7\n    ble _021E7BBC\n    mov r0, #0x5b\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    add r4, r4, #1\n    add r6, #8\n    add r5, r5, #4\n    cmp r4, #0x10\n    blt _021E7B6E\n    add sp, #0x88\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021E7BCC: .word ov51_021E801C"
    );
    #endif
}

void ov51_021E7BD0(void) {
    /* Original at 0x021E7BD0 */
    /* Requires manual decompilation - 98 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x80\n    mov r1, #1\n    add r5, r0, #0\n    str r1, [sp]\n    sub r0, r1, #2\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    mov r3, #0x4f\n    str r1, [sp, #0x10]\n    lsl r3, r3, #2\n    ldr r2, [r5, r3]\n    str r2, [sp, #0x14]\n    add r2, r3, #4\n    ldr r2, [r5, r2]\n    str r2, [sp, #0x18]\n    add r2, r3, #0\n    add r2, #8\n    ldr r2, [r5, r2]\n    add r3, #0xc\n    str r2, [sp, #0x1c]\n    ldr r2, [r5, r3]\n    add r3, r1, #0\n    str r2, [sp, #0x20]\n    str r0, [sp, #0x24]\n    str r0, [sp, #0x28]\n    add r0, sp, #0x5c\n    add r2, r1, #0\n    bl CreateSpriteResourcesHeader\n    ldr r0, [r5]\n    mov r6, #0\n    str r0, [sp, #0x2c]\n    add r0, sp, #0x5c\n    str r0, [sp, #0x30]\n    mov r0, #1\n    lsl r0, r0, #0xc\n    str r6, [sp, #0x34]\n    str r6, [sp, #0x38]\n    str r6, [sp, #0x3c]\n    str r0, [sp, #0x40]\n    str r0, [sp, #0x44]\n    str r0, [sp, #0x48]\n    add r0, sp, #0x2c\n    strh r6, [r0, #0x20]\n    mov r0, #2\n    str r0, [sp, #0x54]\n    mov r0, #0x19\n    ldr r4, _021E7C9C ; =ov51_021E80A4\n    ldr r7, _021E7CA0 ; =_021E80A0\n    str r6, [sp, #0x50]\n    str r0, [sp, #0x58]\n    ldrb r0, [r4]\n    lsl r0, r0, #0xc\n    str r0, [sp, #0x34]\n    ldrb r0, [r4, #1]\n    lsl r1, r0, #0xc\n    mov r0, #0xe\n    lsl r0, r0, #0x10\n    add r0, r1, r0\n    str r0, [sp, #0x38]\n    add r0, sp, #0x2c\n    bl Sprite_CreateAffine\n    mov r1, #0x1f\n    lsl r1, r1, #4\n    str r0, [r5, r1]\n    add r0, r1, #0\n    ldr r0, [r5, r0]\n    mov r1, #1\n    bl Sprite_SetAnimActiveFlag\n    mov r0, #0x1f\n    lsl r0, r0, #4\n    ldrb r1, [r7]\n    ldr r0, [r5, r0]\n    bl Sprite_SetAnimCtrlSeq\n    mov r0, #0x1f\n    lsl r0, r0, #4\n    mov r1, #2\n    ldr r0, [r5, r0]\n    sub r1, r1, r6\n    bl Sprite_SetDrawPriority\n    mov r0, #0x1f\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    add r6, r6, #1\n    add r4, r4, #2\n    add r5, r5, #4\n    add r7, r7, #1\n    cmp r6, #2\n    blt _021E7C3C\n    add sp, #0x80\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021E7C9C: .word ov51_021E80A4\n    _021E7CA0: .word _021E80A0"
    );
    #endif
}

void ov51_021E7CA4(void) {
    /* Original at 0x021E7CA4 */
    /* Requires manual decompilation - 67 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    mov r6, #0x7e\n    add r5, r0, #0\n    mov r4, #0\n    lsl r6, r6, #2\n    lsl r0, r4, #2\n    add r0, r5, r0\n    ldr r0, [r0, r6]\n    bl Heap_Free\n    add r0, r4, #1\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    cmp r4, #0x10\n    blo _021E7CAE\n    mov r0, #0x53\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl sub_0200AEB0\n    mov r0, #0x57\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl sub_0200AEB0\n    mov r0, #0x15\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    bl sub_0200B0A8\n    mov r0, #0x16\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    bl sub_0200B0A8\n    mov r7, #0x4f\n    mov r4, #0\n    lsl r7, r7, #2\n    lsl r0, r4, #2\n    add r6, r5, r0\n    mov r0, #0x4b\n    lsl r0, r0, #2\n    ldr r0, [r6, r0]\n    bl Destroy2DGfxResObjMan\n    ldr r0, [r6, r7]\n    bl Destroy2DGfxResObjMan\n    add r0, r4, #1\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    cmp r4, #4\n    blo _021E7CF0\n    mov r2, #3\n    add r0, r5, #4\n    mov r1, #0\n    lsl r2, r2, #0x12\n    bl G2dRenderer_SetSubSurfaceCoords\n    ldr r0, [r5]\n    bl SpriteList_Delete\n    bl OamManager_Free\n    bl ObjCharTransfer_Destroy\n    bl ObjPlttTransfer_Destroy\n    mov r2, #1\n    lsl r2, r2, #0x1a\n    ldr r1, [r2]\n    ldr r0, _021E7D40 ; =0xFFCFFFEF\n    and r1, r0\n    mov r0, #0x10\n    orr r0, r1\n    str r0, [r2]\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021E7D40: .word 0xFFCFFFEF"
    );
    #endif
}

void ov51_021E7D44(void) {
    /* Original at 0x021E7D44 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r3, #0\n    mov r3, #0x1f\n    lsl r3, r3, #4\n    lsl r4, r1, #2\n    add r5, r0, r3\n    ldr r0, [r5, r4]\n    add r1, r2, #0\n    bl Sprite_SetAnimCtrlSeq\n    ldr r0, [r5, r4]\n    bl Sprite_ResetAnimCtrlState\n    ldr r0, [r5, r4]\n    add r1, r6, #0\n    bl Sprite_SetDrawFlag\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov51_021E7D68(void) {
    /* Original at 0x021E7D68 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x10\n    ldr r4, _021E7DA0 ; =ov51_021E7FCC\n    add r3, sp, #0\n    add r2, r3, #0\n    ldmia r4!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r4!, {r0, r1}\n    stmia r3!, {r0, r1}\n    add r0, r2, #0\n    bl ObjCharTransfer_Init\n    mov r0, #2\n    mov r1, #0x19\n    bl ObjPlttTransfer_Init\n    bl ObjCharTransfer_ClearBuffers\n    bl ObjPlttTransfer_Reset\n    mov r0, #0x19\n    bl thunk_ClearMainOAM\n    mov r0, #0x19\n    bl thunk_ClearSubOAM\n    add sp, #0x10\n    pop {r4, pc}\n    _021E7DA0: .word ov51_021E7FCC"
    );
    #endif
}

void ov51_021E7DA4(void) {
    /* Original at 0x021E7DA4 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "mov r2, #0\n    mov r1, #0xff\n    strb r2, [r0]\n    strb r1, [r0, #1]\n    add r2, r2, #1\n    add r0, r0, #2\n    cmp r2, #4\n    blt _021E7DA8\n    bx lr"
    );
    #endif
}
