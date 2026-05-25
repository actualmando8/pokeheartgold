/* Decompiled from asm/overlay_108_021E8850.s */
#include "global.h"

void SafariDecoration_Init(void) {
    /* Original at 0x021E8850 */
    /* Requires manual decompilation - 49 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r1, #0\n    ldr r1, [r5]\n    add r4, r0, #0\n    cmp r1, #0\n    beq _021E8862\n    cmp r1, #1\n    beq _021E88B0\n    b _021E88C0\n    bl ov108_021E8AD4\n    mov r2, #0x12\n    mov r0, #3\n    mov r1, #0x5f\n    lsl r2, r2, #0xe\n    bl Heap_Create\n    add r0, r4, #0\n    bl OverlayManager_GetArgs\n    mov r1, #0x53\n    add r6, r0, #0\n    add r0, r4, #0\n    lsl r1, r1, #4\n    mov r2, #0x5f\n    bl OverlayManager_CreateAndGetData\n    mov r2, #0x53\n    mov r1, #0\n    lsl r2, r2, #4\n    add r4, r0, #0\n    bl MI_CpuFill8\n    mov r0, #0x5f\n    str r0, [r4]\n    add r0, r4, #0\n    add r1, r6, #0\n    bl ov108_021E8968\n    mov r1, #0\n    mov r0, #0x43\n    add r2, r1, #0\n    bl Sound_SetSceneAndPlayBGM\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    b _021E88C0\n    bl OverlayManager_GetData\n    bl ov108_021E929C\n    cmp r0, #0\n    beq _021E88C0\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    mov r0, #0\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void SafariDecoration_Exit(void) {
    /* Original at 0x021E88C4 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r0, #0\n    bl OverlayManager_GetData\n    add r4, r0, #0\n    bl ov108_021E9304\n    cmp r0, #0\n    bne _021E88DA\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    bl ov108_021E8AD4\n    add r0, r4, #0\n    bl ov108_021E8A88\n    mov r2, #0x53\n    ldr r5, [r4]\n    add r0, r4, #0\n    mov r1, #0\n    lsl r2, r2, #4\n    bl MI_CpuFill8\n    add r0, r6, #0\n    bl OverlayManager_FreeData\n    add r0, r5, #0\n    bl Heap_Destroy\n    mov r0, #1\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void SafariDecoration_Main(void) {
    /* Original at 0x021E8904 */
    /* Requires manual decompilation - 38 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    bl OverlayManager_GetData\n    ldr r1, [r4]\n    add r5, r0, #0\n    cmp r1, #4\n    bhi _021E894E\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _021E8920: ; jump table\n    bl ov108_021E8BC0\n    str r0, [r4]\n    b _021E894E\n    bl ov108_021E8B24\n    str r0, [r4]\n    b _021E894E\n    bl ov108_021E8B68\n    str r0, [r4]\n    b _021E894E\n    bl ov108_021E8C18\n    str r0, [r4]\n    b _021E894E\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #0x11\n    lsl r0, r0, #6\n    ldr r0, [r5, r0]\n    bl SpriteSystem_DrawSprites\n    mov r0, #0xce\n    lsl r0, r0, #2\n    add r0, r5, r0\n    bl ov108_021E8E10\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov108_021E8968(void) {
    /* Original at 0x021E8968 */
    /* Requires manual decompilation - 122 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r4, r1, #0\n    add r5, r0, #0\n    ldr r0, [r4]\n    bl Save_SafariZone_Get\n    add r2, r5, #0\n    str r0, [r5, #0x20]\n    mov r1, #0\n    add r2, #0x24\n    bl SafariZone_CopyAreaSet\n    ldr r0, [r4]\n    bl Save_PlayerData_GetOptionsAddr\n    add r6, r0, #0\n    bl Options_GetTextSpeed\n    strb r0, [r5, #0x18]\n    add r0, r6, #0\n    bl Options_GetFrame\n    strb r0, [r5, #0x19]\n    ldr r0, [r4, #4]\n    bl MenuInputStateMgr_GetState\n    str r0, [r5, #0x10]\n    str r4, [r5, #0x1c]\n    ldr r0, [r4, #0x20]\n    mov r1, #6\n    ldrb r0, [r0]\n    bl _s32_div_f\n    ldr r0, _021E8A74 ; =0x00000431\n    strb r1, [r5, r0]\n    ldr r0, [r5, #0x1c]\n    mov r1, #6\n    ldr r0, [r0, #0x20]\n    ldrb r0, [r0]\n    bl _s32_div_f\n    mov r1, #0x43\n    lsl r1, r1, #4\n    strb r0, [r5, r1]\n    ldr r0, [r4]\n    bl Save_PlayerData_GetProfile\n    add r6, r0, #0\n    ldr r0, [r5, #0x20]\n    bl SafariZone_GetObjectUnlockLevel\n    add r7, r0, #0\n    add r0, r6, #0\n    bl PlayerProfile_GetTrainerID\n    str r0, [sp, #4]\n    add r0, r6, #0\n    bl PlayerProfile_GetTrainerGender\n    lsl r0, r0, #0x18\n    lsr r2, r0, #0x18\n    ldr r0, [r5]\n    ldr r3, _021E8A78 ; =0x0000042D\n    str r0, [sp]\n    ldr r0, [sp, #4]\n    add r1, r7, #0\n    add r3, r5, r3\n    bl ov108_021EA63C\n    mov r1, #0xcd\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    ldrb r0, [r4, #0x19]\n    strb r0, [r5, #0x1a]\n    cmp r0, #5\n    bls _021E8A06\n    mov r0, #0\n    strb r0, [r5, #0x1a]\n    ldrb r1, [r5, #0x1a]\n    mov r0, #0x7a\n    mul r0, r1\n    add r0, r5, r0\n    add r0, #0x25\n    ldrb r1, [r0]\n    mov r0, #0x1e\n    sub r1, r0, r1\n    ldr r0, _021E8A7C ; =0x00000435\n    strb r1, [r5, r0]\n    sub r0, #8\n    ldrb r0, [r5, r0]\n    mov r1, #6\n    bl _s32_div_f\n    ldr r1, _021E8A80 ; =0x0000042E\n    strb r0, [r5, r1]\n    sub r0, r1, #1\n    ldrb r0, [r5, r0]\n    mov r1, #6\n    bl _s32_div_f\n    cmp r1, #0\n    ble _021E8A3E\n    ldr r0, _021E8A80 ; =0x0000042E\n    ldrb r1, [r5, r0]\n    add r1, r1, #1\n    strb r1, [r5, r0]\n    mov r0, #0x43\n    lsl r0, r0, #4\n    sub r1, r0, #2\n    ldrb r2, [r5, r0]\n    ldrb r1, [r5, r1]\n    cmp r2, r1\n    blo _021E8A50\n    mov r1, #0\n    strb r1, [r5, r0]\n    ldr r0, [r5, #0x1c]\n    mov r1, #0xff\n    strh r1, [r0, #0x1c]\n    ldr r0, [r4]\n    bl Save_SysInfo_RTC_Get\n    ldr r0, [r0, #0x14]\n    bl GF_RTC_GetTimeOfDayByHour\n    ldr r1, _021E8A84 ; =0x0000042C\n    strb r0, [r5, r1]\n    ldrb r0, [r5, r1]\n    cmp r0, #4\n    bne _021E8A70\n    mov r0, #3\n    strb r0, [r5, r1]\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    _021E8A74: .word 0x00000431\n    _021E8A78: .word 0x0000042D\n    _021E8A7C: .word 0x00000435\n    _021E8A80: .word 0x0000042E\n    _021E8A84: .word 0x0000042C"
    );
    #endif
}

void ov108_021E8A88(void) {
    /* Original at 0x021E8A88 */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0xcd\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl Heap_Free\n    add r2, r4, #0\n    ldr r0, [r4, #0x20]\n    mov r1, #0\n    add r2, #0x24\n    bl SafariZone_SetAreaSet\n    ldr r0, _021E8AD0 ; =0x00000431\n    ldrb r1, [r4, r0]\n    cmp r1, #6\n    blo _021E8AAE\n    mov r1, #5\n    strb r1, [r4, r0]\n    ldr r0, _021E8AD0 ; =0x00000431\n    ldrb r2, [r4, r0]\n    sub r0, r0, #1\n    ldrb r1, [r4, r0]\n    mov r0, #6\n    mul r0, r1\n    add r1, r2, r0\n    ldr r0, [r4, #0x1c]\n    ldr r0, [r0, #0x20]\n    strb r1, [r0]\n    ldr r0, [r4, #0x1c]\n    ldr r1, [r4, #0x10]\n    ldr r0, [r0, #4]\n    bl MenuInputStateMgr_SetState\n    pop {r4, pc}\n    nop\n    _021E8AD0: .word 0x00000431"
    );
    #endif
}

void ov108_021E8AD4(void) {
    /* Original at 0x021E8AD4 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    mov r0, #0\n    add r1, r0, #0\n    bl Main_SetVBlankIntrCB\n    bl HBlankInterruptDisable\n    bl GfGfx_DisableEngineAPlanes\n    bl GfGfx_DisableEngineBPlanes\n    mov r2, #1\n    lsl r2, r2, #0x1a\n    ldr r1, [r2]\n    ldr r0, _021E8B1C ; =0xFFFFE0FF\n    and r1, r0\n    str r1, [r2]\n    ldr r2, _021E8B20 ; =0x04001000\n    ldr r1, [r2]\n    and r0, r1\n    str r0, [r2]\n    mov r0, #0\n    add r1, r0, #0\n    bl sub_0200FBF4\n    mov r0, #1\n    mov r1, #0\n    bl sub_0200FBF4\n    mov r0, #0\n    bl sub_0200FBDC\n    mov r0, #1\n    bl sub_0200FBDC\n    pop {r3, pc}\n    _021E8B1C: .word 0xFFFFE0FF\n    _021E8B20: .word 0x04001000"
    );
    #endif
}

void ov108_021E8B24(void) {
    /* Original at 0x021E8B24 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r1, [r4, #4]\n    cmp r1, #3\n    bhi _021E8B62\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _021E8B3A: ; jump table\n    bl ov108_021E9388\n    str r0, [r4, #4]\n    b _021E8B62\n    mov r0, #0\n    str r0, [r4, #4]\n    mov r0, #2\n    pop {r4, pc}\n    bl ov108_021E93A8\n    str r0, [r4, #4]\n    b _021E8B62\n    mov r0, #0\n    str r0, [r4, #4]\n    ldr r0, [r4, #0xc]\n    pop {r4, pc}\n    mov r0, #1\n    pop {r4, pc}"
    );
    #endif
}

void ov108_021E8B68(void) {
    /* Original at 0x021E8B68 */
    /* Requires manual decompilation - 39 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r1, [r4, #4]\n    cmp r1, #0\n    beq _021E8B78\n    cmp r1, #1\n    beq _021E8B8C\n    b _021E8BAE\n    mov r1, #1\n    bl ov108_021E940C\n    add r0, r4, #0\n    bl ov108_021E9488\n    ldr r0, [r4, #4]\n    add r0, r0, #1\n    str r0, [r4, #4]\n    b _021E8BBC\n    bl ov108_021E94E8\n    cmp r0, #0\n    blt _021E8BBC\n    cmp r0, #1\n    bne _021E8BA6\n    add r0, r4, #0\n    bl ov108_021E8C64\n    mov r0, #0\n    str r0, [r4, #4]\n    mov r0, #3\n    pop {r4, pc}\n    ldr r0, [r4, #4]\n    add r0, r0, #1\n    str r0, [r4, #4]\n    b _021E8BBC\n    mov r1, #0\n    bl ov108_021E940C\n    mov r0, #0\n    str r0, [r4, #4]\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #2\n    pop {r4, pc}"
    );
    #endif
}

void ov108_021E8BC0(void) {
    /* Original at 0x021E8BC0 */
    /* Requires manual decompilation - 40 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    ldr r0, [r4, #4]\n    cmp r0, #0\n    beq _021E8BD2\n    cmp r0, #1\n    beq _021E8C00\n    b _021E8C12\n    mov r0, #6\n    mov r1, #1\n    str r0, [sp]\n    str r1, [sp, #4]\n    ldr r0, [r4]\n    add r2, r1, #0\n    str r0, [sp, #8]\n    mov r0, #0\n    add r3, r0, #0\n    bl BeginNormalPaletteFade\n    mov r0, #0x10\n    mov r1, #1\n    bl GfGfx_EngineATogglePlanes\n    mov r0, #0x10\n    mov r1, #1\n    bl GfGfx_EngineBTogglePlanes\n    ldr r0, [r4, #4]\n    add r0, r0, #1\n    str r0, [r4, #4]\n    b _021E8C12\n    bl IsPaletteFadeFinished\n    cmp r0, #0\n    beq _021E8C12\n    mov r0, #0\n    str r0, [r4, #4]\n    add sp, #0xc\n    mov r0, #1\n    pop {r3, r4, pc}\n    mov r0, #0\n    add sp, #0xc\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov108_021E8C18(void) {
    /* Original at 0x021E8C18 */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    ldr r0, [r4, #4]\n    cmp r0, #0\n    beq _021E8C2A\n    cmp r0, #1\n    beq _021E8C4A\n    b _021E8C5C\n    mov r0, #6\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r0, [r4]\n    str r0, [sp, #8]\n    mov r0, #0\n    add r1, r0, #0\n    add r2, r0, #0\n    add r3, r0, #0\n    bl BeginNormalPaletteFade\n    ldr r0, [r4, #4]\n    add r0, r0, #1\n    str r0, [r4, #4]\n    b _021E8C5C\n    bl IsPaletteFadeFinished\n    cmp r0, #0\n    beq _021E8C5C\n    mov r0, #0\n    str r0, [r4, #4]\n    add sp, #0xc\n    mov r0, #4\n    pop {r3, r4, pc}\n    mov r0, #3\n    add sp, #0xc\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov108_021E8C64(void) {
    /* Original at 0x021E8C64 */
    /* Requires manual decompilation - 54 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    add r0, sp, #0\n    mov r1, #0\n    mov r2, #4\n    bl MI_CpuFill8\n    mov r0, #0xcd\n    lsl r0, r0, #2\n    ldr r2, [r4, r0]\n    add r0, #0xfe\n    ldrb r1, [r4, r0]\n    mov r5, #0x1b\n    lsl r0, r1, #2\n    add r0, r1, r0\n    add r1, r2, r0\n    ldrb r2, [r2, r0]\n    add r0, sp, #0\n    strb r2, [r0]\n    ldrb r2, [r1, #1]\n    ldr r3, [r4, #0x1c]\n    lsl r2, r2, #2\n    add r2, r3, r2\n    ldrb r2, [r2, #9]\n    lsr r3, r2, #0x1f\n    lsl r2, r2, #0x1b\n    sub r2, r2, r3\n    ror r2, r5\n    add r2, r3, r2\n    strb r2, [r0, #1]\n    ldrb r1, [r1, #1]\n    ldr r2, [r4, #0x1c]\n    lsl r1, r1, #2\n    add r1, r2, r1\n    ldrb r1, [r1, #0xb]\n    lsr r2, r1, #0x1f\n    lsl r1, r1, #0x1b\n    sub r1, r1, r2\n    ror r1, r5\n    add r1, r2, r1\n    strb r1, [r0, #3]\n    ldr r1, [r4, #0x1c]\n    add r2, sp, #0\n    ldrb r1, [r1, #0x1a]\n    strb r1, [r0, #2]\n    ldr r1, [r4, #0x1c]\n    add r0, r4, #0\n    ldrb r1, [r1, #0x19]\n    add r0, #0x24\n    bl SafariZone_AddObjectToArea\n    add r0, sp, #0\n    ldrb r1, [r0]\n    ldr r0, [r4, #0x1c]\n    strh r1, [r0, #0x1c]\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov108_021E8CD4(void) {
    /* Original at 0x021E8CD4 */
    /* Requires manual decompilation - 133 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #4\n    add r6, r1, #0\n    add r4, r2, #0\n    mov r1, #0\n    mov r2, #0xf4\n    add r5, r0, #0\n    bl MI_CpuFill8\n    bl NNS_G3dInit\n    bl G3X_Init\n    bl G3X_InitMtxStack\n    ldr r0, _021E8DF4 ; =0x04000060\n    ldr r1, _021E8DF8 ; =0xFFFFCFFD\n    ldrh r2, [r0]\n    and r2, r1\n    strh r2, [r0]\n    ldrh r3, [r0]\n    ldr r2, _021E8DFC ; =0x0000CFFB\n    and r2, r3\n    strh r2, [r0]\n    ldrh r3, [r0]\n    add r2, r1, #2\n    and r3, r2\n    mov r2, #8\n    orr r2, r3\n    strh r2, [r0]\n    add r2, r1, #2\n    ldrh r3, [r0]\n    add r1, r1, #2\n    and r3, r2\n    mov r2, #0x10\n    orr r2, r3\n    strh r2, [r0]\n    ldrh r2, [r0]\n    and r2, r1\n    mov r1, #0x20\n    orr r1, r2\n    strh r1, [r0]\n    mov r0, #0\n    add r1, r0, #0\n    add r2, r0, #0\n    add r3, r0, #0\n    bl G3X_SetFog\n    mov r0, #0\n    ldr r2, _021E8E00 ; =0x00007FFF\n    add r1, r0, #0\n    mov r3, #0x3f\n    str r0, [sp]\n    bl G3X_SetClearColor\n    ldr r1, _021E8E04 ; =0x04000540\n    mov r0, #2\n    str r0, [r1]\n    ldr r0, _021E8E08 ; =0xBFFF0000\n    str r0, [r1, #0x40]\n    add r0, r5, #0\n    str r4, [r5, #0x14]\n    add r0, #0xf1\n    strb r6, [r0]\n    mov r0, #0x80\n    bl NNS_GfdGetLnkTexVramManagerWorkSize\n    add r6, r0, #0\n    ldr r0, [r5, #0x14]\n    add r1, r6, #0\n    bl Heap_Alloc\n    add r1, r5, #0\n    add r1, #0xec\n    str r0, [r1]\n    mov r0, #1\n    add r2, r5, #0\n    str r0, [sp]\n    add r2, #0xec\n    ldr r2, [r2]\n    lsl r0, r0, #0x11\n    mov r1, #0\n    add r3, r6, #0\n    bl GF_3DVramMan_InitLinkedListTexVramManager\n    mov r0, #1\n    lsl r0, r0, #8\n    bl NNS_GfdGetLnkPlttVramManagerWorkSize\n    add r6, r0, #0\n    ldr r0, [r5, #0x14]\n    add r1, r6, #0\n    bl Heap_Alloc\n    add r1, r5, #0\n    add r1, #0xe8\n    str r0, [r1]\n    add r1, r5, #0\n    add r1, #0xe8\n    mov r0, #1\n    ldr r1, [r1]\n    lsl r0, r0, #0xe\n    add r2, r6, #0\n    mov r3, #1\n    bl GF_3DVramMan_InitLinkedListPlttVramManager\n    add r0, r5, #4\n    add r1, r4, #0\n    mov r2, #0x20\n    bl HeapExp_FndInitAllocator\n    mov r0, #0x28\n    add r1, r4, #0\n    bl NARC_New\n    str r0, [r5, #0x18]\n    mov r0, #0x6b\n    add r1, r4, #0\n    bl NARC_New\n    str r0, [r5, #0x1c]\n    mov r0, #0x6a\n    add r1, r4, #0\n    bl NARC_New\n    str r0, [r5, #0x20]\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov108_021E9230\n    mov r0, #1\n    add r1, r0, #0\n    bl GfGfx_EngineATogglePlanes\n    ldr r1, _021E8E0C ; =0x04000008\n    mov r0, #3\n    ldrh r2, [r1]\n    bic r2, r0\n    mov r0, #1\n    orr r0, r2\n    strh r0, [r1]\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}\n    nop\n    _021E8DF4: .word 0x04000060\n    _021E8DF8: .word 0xFFFFCFFD\n    _021E8DFC: .word 0x0000CFFB\n    _021E8E00: .word 0x00007FFF\n    _021E8E04: .word 0x04000540\n    _021E8E08: .word 0xBFFF0000\n    _021E8E0C: .word 0x04000008"
    );
    #endif
}

void ov108_021E8E10(void) {
    /* Original at 0x021E8E10 */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl Thunk_G3X_Reset\n    bl Camera_PushLookAtToNNSGlb\n    bl NNS_G3dGeFlushBuffer\n    ldr r2, _021E8E58 ; =0x04000440\n    mov r3, #0\n    add r1, r2, #0\n    str r3, [r2]\n    add r1, #0x14\n    str r3, [r1]\n    mov r0, #2\n    str r0, [r2]\n    add r0, r4, #0\n    str r3, [r1]\n    add r0, #0xf0\n    ldrb r0, [r0]\n    cmp r0, #0\n    beq _021E8E4E\n    add r0, r4, #0\n    add r0, #0xd8\n    ldrh r0, [r0]\n    cmp r0, #0\n    beq _021E8E4E\n    add r4, #0x24\n    add r0, r4, #0\n    bl ov108_021E9144\n    ldr r0, _021E8E5C ; =0x04000540\n    mov r1, #1\n    str r1, [r0]\n    pop {r4, pc}\n    nop\n    _021E8E58: .word 0x04000440\n    _021E8E5C: .word 0x04000540"
    );
    #endif
}

void ov108_021E8E60(void) {
    /* Original at 0x021E8E60 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    add r1, r4, #0\n    add r1, #0xd8\n    ldrh r1, [r1]\n    cmp r1, #0\n    beq _021E8E76\n    add r1, r4, #0\n    add r1, #0x24\n    bl ov108_021E90C4\n    ldr r0, [r4]\n    bl Camera_Delete\n    add r0, r4, #0\n    add r0, #0xe8\n    ldr r0, [r0]\n    bl Heap_Free\n    add r0, r4, #0\n    add r0, #0xec\n    ldr r0, [r0]\n    bl Heap_Free\n    ldr r0, [r4, #0x20]\n    bl NARC_Delete\n    ldr r0, [r4, #0x1c]\n    bl NARC_Delete\n    ldr r0, [r4, #0x18]\n    bl NARC_Delete\n    pop {r4, pc}"
    );
    #endif
}

void ov108_021E8EA4(void) {
    /* Original at 0x021E8EA4 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r6, r1, #0\n    add r1, r5, #0\n    add r1, #0xd8\n    ldrh r1, [r1]\n    add r4, r2, #0\n    cmp r1, #0\n    beq _021E8EBE\n    add r1, r5, #0\n    add r1, #0x24\n    bl ov108_021E90C4\n    add r0, r5, #0\n    mov r1, #1\n    add r0, #0xf0\n    strb r1, [r0]\n    cmp r4, #0\n    beq _021E8ED4\n    add r0, r5, #0\n    add r1, r6, #0\n    add r2, r4, #0\n    bl ov108_021E8F00\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov108_021E8ED8(void) {
    /* Original at 0x021E8ED8 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    add r2, r0, #0\n    add r2, #0xf0\n    strb r1, [r2]\n    add r0, #0xf0\n    ldrb r0, [r0]\n    cmp r0, #0\n    bne _021E8EFA\n    bl Thunk_G3X_Reset\n    bl Camera_PushLookAtToNNSGlb\n    bl NNS_G3dGeFlushBuffer\n    ldr r0, _021E8EFC ; =0x04000540\n    mov r1, #1\n    str r1, [r0]\n    pop {r3, pc}\n    _021E8EFC: .word 0x04000540"
    );
    #endif
}

void ov108_021E8F00(void) {
    /* Original at 0x021E8F00 */
    /* Requires manual decompilation - 194 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x28\n    str r0, [sp, #4]\n    add r4, r2, #0\n    mov r2, #0\n    add r5, r0, #0\n    str r2, [sp]\n    ldr r3, [sp, #4]\n    str r1, [sp, #8]\n    ldrb r1, [r4]\n    ldr r0, [r0, #0x18]\n    ldr r3, [r3, #0x14]\n    add r5, #0x24\n    bl GfGfxLoader_LoadFromOpenNarc\n    ldr r1, [sp, #4]\n    str r0, [r1, #0x24]\n    bl NNS_G3dGetMdlSet\n    str r0, [r5, #4]\n    cmp r0, #0\n    beq _021E8F4C\n    add r2, r0, #0\n    add r2, #8\n    beq _021E8F40\n    ldrb r1, [r0, #9]\n    cmp r1, #0\n    bls _021E8F40\n    ldrh r1, [r0, #0xe]\n    add r1, r2, r1\n    add r1, r1, #4\n    b _021E8F42\n    mov r1, #0\n    cmp r1, #0\n    beq _021E8F4C\n    ldr r1, [r1]\n    add r0, r0, r1\n    b _021E8F4E\n    mov r0, #0\n    str r0, [r5, #8]\n    ldr r0, [r5]\n    bl NNS_G3dGetTex\n    str r0, [r5, #0xc]\n    cmp r0, #0\n    beq _021E8F68\n    bl GF3dRender_AllocAndLoadTexResources\n    ldr r0, [r5]\n    ldr r1, [r5, #0xc]\n    bl GF3dRender_BindModelSet\n    add r0, r5, #0\n    ldr r1, [r5, #8]\n    add r0, #0x10\n    bl NNS_G3dRenderObjInit\n    bl DC_FlushAll\n    add r0, r5, #0\n    mov r1, #1\n    add r0, #0xb4\n    strh r1, [r0]\n    ldr r0, [sp, #4]\n    ldrb r1, [r4]\n    ldr r0, [r0, #0x1c]\n    add r2, sp, #0x10\n    bl NARC_ReadWholeMember\n    add r0, sp, #0x10\n    ldrb r1, [r0]\n    cmp r1, #0\n    beq _021E8FEC\n    ldrb r0, [r0, #1]\n    cmp r0, #8\n    beq _021E8FEC\n    mov r0, #0\n    add r6, r5, #0\n    add r7, r5, #0\n    str r0, [sp, #0xc]\n    add r4, sp, #0x10\n    add r6, #0x64\n    add r7, #0xb6\n    ldr r1, [r4, #8]\n    mov r0, #0\n    mvn r0, r0\n    mov ip, r1\n    cmp r1, r0\n    beq _021E8FEC\n    add r2, r5, #0\n    add r2, #0xb6\n    ldrh r3, [r2]\n    mov r2, #0x14\n    ldr r0, [sp, #4]\n    mul r2, r3\n    add r1, r5, #0\n    add r2, r6, r2\n    mov r3, ip\n    bl ov108_021E9198\n    add r1, r5, #0\n    add r1, #0xb6\n    ldrh r2, [r1]\n    mov r1, #0x14\n    add r0, r5, #0\n    mul r1, r2\n    add r1, r6, r1\n    bl ov108_021E91F8\n    ldrh r0, [r7]\n    add r4, r4, #4\n    add r0, r0, #1\n    strh r0, [r7]\n    ldr r0, [sp, #0xc]\n    add r0, r0, #1\n    str r0, [sp, #0xc]\n    cmp r0, #4\n    blt _021E8FA6\n    ldr r0, [sp, #8]\n    ldr r1, _021E90C0 ; =ov108_021EA9E4\n    lsl r0, r0, #3\n    add r4, r1, r0\n    mov r0, #2\n    ldrsh r0, [r4, r0]\n    cmp r0, #0\n    ble _021E900E\n    lsl r0, r0, #0xc\n    bl _fflt\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    b _021E901C\n    lsl r0, r0, #0xc\n    bl _fflt\n    mov r1, #0x3f\n    lsl r1, r1, #0x18\n    bl _fsub\n    bl _ffix\n    ldr r1, [sp, #4]\n    add r1, #0xdc\n    str r0, [r1]\n    mov r0, #4\n    ldrsh r0, [r4, r0]\n    cmp r0, #0\n    ble _021E9040\n    lsl r0, r0, #0xc\n    bl _fflt\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    b _021E904E\n    lsl r0, r0, #0xc\n    bl _fflt\n    mov r1, #0x3f\n    lsl r1, r1, #0x18\n    bl _fsub\n    bl _ffix\n    ldr r1, [sp, #4]\n    add r1, #0xe0\n    str r0, [r1]\n    mov r0, #6\n    ldrsh r0, [r4, r0]\n    cmp r0, #0\n    ble _021E9072\n    lsl r0, r0, #0xc\n    bl _fflt\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    b _021E9080\n    lsl r0, r0, #0xc\n    bl _fflt\n    mov r1, #0x3f\n    lsl r1, r1, #0x18\n    bl _fsub\n    bl _ffix\n    ldr r1, [sp, #4]\n    add r1, #0xe4\n    str r0, [r1]\n    ldrh r0, [r4]\n    cmp r0, #0\n    beq _021E90A2\n    lsl r0, r0, #0xc\n    bl _fflt\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    b _021E90B0\n    lsl r0, r0, #0xc\n    bl _fflt\n    mov r1, #0x3f\n    lsl r1, r1, #0x18\n    bl _fsub\n    bl _ffix\n    ldr r1, [sp, #4]\n    ldr r1, [r1]\n    bl Camera_SetDistance\n    add sp, #0x28\n    pop {r3, r4, r5, r6, r7, pc}\n    _021E90C0: .word ov108_021EA9E4"
    );
    #endif
}

void ov108_021E90C4(void) {
    /* Original at 0x021E90C4 */
    /* Requires manual decompilation - 56 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r6, r1, #0\n    add r7, r0, #0\n    add r0, r6, #0\n    add r0, #0xb6\n    ldrh r0, [r0]\n    mov r4, #0\n    cmp r0, #0\n    ble _021E90FA\n    add r5, r6, #0\n    add r5, #0x64\n    add r0, r6, #0\n    add r1, r5, #0\n    bl ov108_021E9204\n    add r0, r7, #0\n    add r1, r5, #0\n    bl ov108_021E91D4\n    add r0, r6, #0\n    add r0, #0xb6\n    ldrh r0, [r0]\n    add r4, r4, #1\n    add r5, #0x14\n    cmp r4, r0\n    blt _021E90DC\n    ldr r0, [r6, #0xc]\n    cmp r0, #0\n    beq _021E9124\n    add r1, sp, #4\n    add r2, sp, #0\n    bl NNS_G3dTexReleaseTexKey\n    ldr r1, _021E913C ; =NNS_GfdDefaultFuncFreeTexVram\n    ldr r0, [sp, #4]\n    ldr r1, [r1]\n    blx r1\n    ldr r1, _021E913C ; =NNS_GfdDefaultFuncFreeTexVram\n    ldr r0, [sp]\n    ldr r1, [r1]\n    blx r1\n    ldr r0, [r6, #0xc]\n    bl NNS_G3dPlttReleasePlttKey\n    ldr r1, _021E9140 ; =NNS_GfdDefaultFuncFreePlttVram\n    ldr r1, [r1]\n    blx r1\n    ldr r0, [r6]\n    cmp r0, #0\n    beq _021E912E\n    bl Heap_Free\n    add r0, r6, #0\n    mov r1, #0\n    mov r2, #0xb8\n    bl MI_CpuFill8\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    _021E913C: .word NNS_GfdDefaultFuncFreeTexVram\n    _021E9140: .word NNS_GfdDefaultFuncFreePlttVram"
    );
    #endif
}

void ov108_021E9144(void) {
    /* Original at 0x021E9144 */
    /* Requires manual decompilation - 38 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0x3c\n    add r6, r0, #0\n    add r0, #0xb6\n    ldrh r0, [r0]\n    mov r4, #0\n    cmp r0, #0\n    ble _021E916C\n    add r5, r6, #0\n    add r5, #0x64\n    add r0, r5, #0\n    bl ov108_021E9210\n    add r0, r6, #0\n    add r0, #0xb6\n    ldrh r0, [r0]\n    add r4, r4, #1\n    add r5, #0x14\n    cmp r4, r0\n    blt _021E9158\n    mov r0, #0\n    str r0, [sp, #0xc]\n    str r0, [sp, #0x10]\n    str r0, [sp, #0x14]\n    mov r0, #1\n    lsl r0, r0, #0xc\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    add r0, sp, #0x18\n    bl MTX_Identity33_\n    add r6, #0x10\n    add r0, r6, #0\n    add r1, sp, #0xc\n    add r2, sp, #0x18\n    add r3, sp, #0\n    bl GF3dRender_DrawModel\n    add sp, #0x3c\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void ov108_021E9198(void) {
    /* Original at 0x021E9198 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #4\n    add r4, r2, #0\n    mov r2, #0\n    add r6, r1, #0\n    add r5, r0, #0\n    str r2, [sp]\n    add r1, r3, #0\n    ldr r0, [r5, #0x20]\n    ldr r3, [r5, #0x14]\n    bl GfGfxLoader_LoadFromOpenNarc\n    str r0, [r4]\n    mov r1, #0\n    bl NNS_G3dGetAnmByIdx\n    str r0, [r4, #4]\n    ldr r1, [r4, #4]\n    ldr r2, [r6, #8]\n    add r0, r5, #4\n    bl NNS_G3dAllocAnmObj\n    str r0, [r4, #8]\n    ldr r1, [r4, #4]\n    ldr r2, [r6, #8]\n    ldr r3, [r6, #0xc]\n    bl NNS_G3dAnmObjInit\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void ov108_021E91D4(void) {
    /* Original at 0x021E91D4 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    ldr r1, [r4]\n    cmp r1, #0\n    beq _021E91F6\n    ldr r1, [r4, #8]\n    add r0, r0, #4\n    bl NNS_G3dFreeAnmObj\n    ldr r0, [r4]\n    bl Heap_Free\n    add r0, r4, #0\n    mov r1, #0\n    mov r2, #0x14\n    bl MI_CpuFill8\n    pop {r4, pc}"
    );
    #endif
}

void ov108_021E91F8(void) {
    NNS_G3dRenderObjAddAnmObj();
}

void ov108_021E9204(void) {
    NNS_G3dRenderObjRemoveAnmObj();
}

void ov108_021E9210(void) {
    /* Original at 0x021E9210 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #1\n    ldr r1, [r4, #0xc]\n    lsl r0, r0, #0xc\n    add r0, r1, r0\n    ldr r1, [r4, #8]\n    ldr r1, [r1, #8]\n    ldrh r1, [r1, #4]\n    lsl r1, r1, #0xc\n    bl _s32_div_f\n    str r1, [r4, #0xc]\n    ldr r0, [r4, #8]\n    str r1, [r0]\n    pop {r4, pc}"
    );
    #endif
}

void ov108_021E9230(void) {
    /* Original at 0x021E9230 */
    /* Requires manual decompilation - 45 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    add r0, r1, #0\n    bl Camera_New\n    str r0, [r4]\n    add r0, r4, #0\n    mov r1, #0\n    add r0, #0xdc\n    str r1, [r0]\n    add r0, r4, #0\n    add r0, #0xe0\n    str r1, [r0]\n    add r0, r4, #0\n    add r0, #0xe4\n    str r1, [r0]\n    str r1, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r0, [r4]\n    ldr r1, _021E928C ; =0x0015B000\n    str r0, [sp, #8]\n    add r0, r4, #0\n    ldr r2, _021E9290 ; =ov108_021EA9C4\n    ldr r3, _021E9294 ; =0x000005C1\n    add r0, #0xdc\n    bl Camera_Init_FromTargetDistanceAndAngle\n    ldr r0, [r4]\n    bl Camera_SetStaticPtr\n    mov r0, #0x19\n    mov r1, #0x4b\n    ldr r2, [r4]\n    lsl r0, r0, #0xe\n    lsl r1, r1, #0x10\n    bl Camera_SetPerspectiveClippingPlane\n    ldr r0, _021E9298 ; =ov108_021EA9D8\n    ldr r1, [r4]\n    bl Camera_OffsetLookAtPosAndTarget\n    add sp, #0xc\n    pop {r3, r4, pc}\n    nop\n    _021E928C: .word 0x0015B000\n    _021E9290: .word ov108_021EA9C4\n    _021E9294: .word 0x000005C1\n    _021E9298: .word ov108_021EA9D8"
    );
    #endif
}

void ov108_021E929C(void) {
    /* Original at 0x021E929C */
    /* Requires manual decompilation - 40 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r1, [r4, #8]\n    cmp r1, #0\n    beq _021E92AC\n    cmp r1, #1\n    beq _021E92D6\n    b _021E92F4\n    bl ov108_021E9850\n    add r0, r4, #0\n    bl ov108_021E9A60\n    add r0, r4, #0\n    bl ov108_021E9C14\n    add r0, r4, #0\n    bl ov108_021E9C3C\n    add r0, r4, #0\n    bl ov108_021E9D30\n    add r0, r4, #0\n    bl ov108_021E9E10\n    add r0, r4, #0\n    bl ov108_021E9EB8\n    b _021E92F4\n    bl ov108_021EA50C\n    ldr r0, _021E9300 ; =ov108_021E979C\n    add r1, r4, #0\n    bl Main_SetVBlankIntrCB\n    bl sub_020210BC\n    mov r0, #4\n    bl sub_02021148\n    mov r0, #0\n    str r0, [r4, #8]\n    mov r0, #1\n    pop {r4, pc}\n    ldr r0, [r4, #8]\n    add r0, r0, #1\n    str r0, [r4, #8]\n    mov r0, #0\n    pop {r4, pc}\n    nop\n    _021E9300: .word ov108_021E979C"
    );
    #endif
}

void ov108_021E9304(void) {
    /* Original at 0x021E9304 */
    /* Requires manual decompilation - 52 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #8]\n    cmp r0, #0\n    beq _021E9314\n    cmp r0, #2\n    beq _021E934C\n    b _021E9374\n    mov r0, #0\n    add r1, r0, #0\n    bl Main_SetVBlankIntrCB\n    bl HBlankInterruptDisable\n    add r0, r4, #0\n    bl ov108_021E9F04\n    add r0, r4, #0\n    bl ov108_021E9E80\n    add r0, r4, #0\n    bl ov108_021E9DE0\n    add r0, r4, #0\n    bl ov108_021E9CD0\n    add r0, r4, #0\n    bl ov108_021E9C2C\n    add r0, r4, #0\n    bl ov108_021E9BD4\n    add r0, r4, #0\n    bl ov108_021E9A08\n    b _021E9374\n    bl sub_02021238\n    mov r2, #1\n    lsl r2, r2, #0x1a\n    ldr r1, [r2]\n    ldr r0, _021E9380 ; =0xFFFFE0FF\n    and r1, r0\n    str r1, [r2]\n    ldr r2, _021E9384 ; =0x04001000\n    ldr r1, [r2]\n    and r0, r1\n    str r0, [r2]\n    bl GfGfx_DisableEngineAPlanes\n    bl GfGfx_DisableEngineBPlanes\n    mov r0, #0\n    str r0, [r4, #8]\n    mov r0, #1\n    pop {r4, pc}\n    ldr r0, [r4, #8]\n    add r0, r0, #1\n    str r0, [r4, #8]\n    mov r0, #0\n    pop {r4, pc}\n    nop\n    _021E9380: .word 0xFFFFE0FF\n    _021E9384: .word 0x04001000"
    );
    #endif
}

void ov108_021E9388(void) {
    /* Original at 0x021E9388 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    mov r1, #0\n    str r1, [sp]\n    add r1, sp, #0\n    add r4, r0, #0\n    bl ov108_021E96FC\n    ldr r1, [sp]\n    cmp r1, #0\n    bne _021E93A4\n    add r0, r4, #0\n    bl ov108_021E95AC\n    add sp, #4\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov108_021E93A8(void) {
    /* Original at 0x021E93A8 */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r4, #0\n    bl System_GetTouchNew\n    cmp r0, #0\n    beq _021E93BC\n    mov r4, #1\n    str r4, [r5, #0x10]\n    b _021E93D6\n    ldr r0, _021E93FC ; =gSystem\n    ldr r1, [r0, #0x48]\n    ldr r0, _021E9400 ; =0x00000CF3\n    tst r0, r1\n    beq _021E93CA\n    add r0, r4, #0\n    str r0, [r5, #0x10]\n    ldr r0, _021E93FC ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #3\n    tst r0, r1\n    beq _021E93D6\n    mov r4, #1\n    cmp r4, #0\n    beq _021E93F6\n    ldr r0, _021E9404 ; =0x000005E5\n    bl PlaySE\n    ldr r0, _021E9408 ; =0x00000464\n    mov r1, #1\n    add r0, r5, r0\n    bl ClearFrameAndWindow2\n    ldr r0, _021E9408 ; =0x00000464\n    add r0, r5, r0\n    bl ClearWindowTilemapAndScheduleTransfer\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    mov r0, #2\n    pop {r3, r4, r5, pc}\n    nop\n    _021E93FC: .word gSystem\n    _021E9400: .word 0x00000CF3\n    _021E9404: .word 0x000005E5\n    _021E9408: .word 0x00000464"
    );
    #endif
}

void ov108_021E940C(void) {
    /* Original at 0x021E940C */
    /* Requires manual decompilation - 47 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    cmp r1, #1\n    bne _021E9434\n    mov r1, #1\n    bl ov108_021E9F94\n    add r0, r5, #0\n    mov r1, #2\n    bl ov108_021E9F20\n    add r0, r5, #0\n    bl ov108_021EA260\n    add r0, r5, #0\n    mov r1, #0\n    bl ov108_021EA334\n    mov r4, #0\n    b _021E945A\n    mov r1, #0\n    bl ov108_021E9F94\n    ldr r0, _021E947C ; =0x00000494\n    add r0, r5, r0\n    bl ClearWindowTilemapAndScheduleTransfer\n    add r0, r5, #0\n    mov r1, #0\n    bl ov108_021E9F20\n    add r0, r5, #0\n    bl ov108_021EA040\n    add r0, r5, #0\n    mov r1, #2\n    bl ov108_021EA334\n    mov r4, #1\n    ldr r0, _021E9480 ; =0x0000044C\n    add r1, r4, #0\n    ldr r0, [r5, r0]\n    bl Sprite_SetDrawFlag\n    mov r0, #0x45\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    add r1, r4, #0\n    bl Sprite_SetDrawFlag\n    ldr r0, _021E9484 ; =0x00000444\n    add r1, r4, #0\n    ldr r0, [r5, r0]\n    bl Sprite_SetDrawFlag\n    pop {r3, r4, r5, pc}\n    _021E947C: .word 0x00000494\n    _021E9480: .word 0x0000044C\n    _021E9484: .word 0x00000444"
    );
    #endif
}

void ov108_021E9488(void) {
    /* Original at 0x021E9488 */
    /* Requires manual decompilation - 45 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0x14\n    add r4, r0, #0\n    add r0, sp, #0\n    mov r1, #0\n    mov r2, #0x14\n    bl MI_CpuFill8\n    ldr r0, _021E94E4 ; =0x00000438\n    mov r3, #4\n    ldr r1, [r4, r0]\n    mov r2, #0x1a\n    str r1, [sp]\n    add r1, r0, #0\n    sub r1, #0x92\n    str r1, [sp, #8]\n    mov r1, #0xe\n    str r1, [sp, #0xc]\n    str r3, [sp, #4]\n    add r1, sp, #0\n    strb r2, [r1, #0x10]\n    strb r3, [r1, #0x11]\n    ldrb r2, [r1, #0x12]\n    mov r3, #0xf\n    add r0, #0xdc\n    bic r2, r3\n    ldr r3, [r4, #0x10]\n    lsl r3, r3, #0x18\n    lsr r5, r3, #0x18\n    mov r3, #0xf\n    and r3, r5\n    orr r2, r3\n    strb r2, [r1, #0x12]\n    ldrb r3, [r1, #0x12]\n    mov r2, #0xf0\n    bic r3, r2\n    strb r3, [r1, #0x12]\n    mov r2, #0\n    strb r2, [r1, #0x13]\n    ldr r0, [r4, r0]\n    add r1, sp, #0\n    bl YesNoPrompt_InitFromTemplateWithPalette\n    add sp, #0x14\n    pop {r4, r5, pc}\n    nop\n    _021E94E4: .word 0x00000438"
    );
    #endif
}

void ov108_021E94E8(void) {
    /* Original at 0x021E94E8 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, _021E9524 ; =0x00000514\n    ldr r0, [r5, r0]\n    bl YesNoPrompt_HandleInput\n    cmp r0, #1\n    beq _021E94FE\n    cmp r0, #2\n    beq _021E9502\n    b _021E9506\n    mov r4, #1\n    b _021E950C\n    mov r4, #0\n    b _021E950C\n    mov r0, #0\n    mvn r0, r0\n    pop {r3, r4, r5, pc}\n    ldr r0, _021E9524 ; =0x00000514\n    ldr r0, [r5, r0]\n    bl YesNoPrompt_IsInTouchMode\n    str r0, [r5, #0x10]\n    ldr r0, _021E9524 ; =0x00000514\n    ldr r0, [r5, r0]\n    bl YesNoPrompt_Reset\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}\n    nop\n    _021E9524: .word 0x00000514"
    );
    #endif
}

void ov108_021E9528(void) {
    /* Original at 0x021E9528 */
    /* Requires manual decompilation - 57 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    cmp r1, #6\n    blo _021E9544\n    ldr r0, _021E95A0 ; =0x000005DC\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #1\n    bl ov108_021E9F20\n    mov r0, #3\n    str r0, [r4, #0xc]\n    pop {r3, r4, r5, pc}\n    ldr r2, _021E95A4 ; =0x00000431\n    sub r3, r2, #1\n    ldrb r5, [r4, r3]\n    ldrb r1, [r4, r2]\n    mov r3, #6\n    mul r3, r5\n    add r3, r1, r3\n    add r1, r2, #1\n    strb r3, [r4, r1]\n    sub r2, r2, #4\n    ldrb r1, [r4, r1]\n    ldrb r2, [r4, r2]\n    cmp r1, r2\n    blo _021E9564\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    bl ov108_021EA52C\n    lsl r0, r0, #0x18\n    lsr r5, r0, #0x18\n    beq _021E9580\n    ldr r0, _021E95A8 ; =0x000005F3\n    bl PlaySE\n    add r0, r4, #0\n    sub r1, r5, #1\n    bl ov108_021EA418\n    mov r0, #2\n    pop {r3, r4, r5, pc}\n    ldr r0, _021E95A0 ; =0x000005DC\n    bl PlaySE\n    mov r1, #0xcd\n    lsl r1, r1, #2\n    add r0, r1, #0\n    add r0, #0xfe\n    ldrb r2, [r4, r0]\n    ldr r3, [r4, r1]\n    add r1, #0xff\n    lsl r0, r2, #2\n    add r0, r2, r0\n    ldrb r0, [r3, r0]\n    strb r0, [r4, r1]\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    _021E95A0: .word 0x000005DC\n    _021E95A4: .word 0x00000431\n    _021E95A8: .word 0x000005F3"
    );
    #endif
}

void ov108_021E95AC(void) {
    /* Original at 0x021E95AC */
    /* Requires manual decompilation - 158 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r4, r0, #0\n    ldr r0, _021E96EC ; =gSystem\n    mov r1, #0\n    ldr r2, [r0, #0x48]\n    ldr r0, _021E96F0 ; =0x00000CF3\n    tst r0, r2\n    beq _021E95BE\n    str r1, [r4, #0x10]\n    ldr r0, _021E96EC ; =gSystem\n    ldr r6, [r0, #0x48]\n    mov r0, #2\n    tst r0, r6\n    beq _021E95D2\n    add r0, r4, #0\n    mov r1, #6\n    bl ov108_021E9528\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #1\n    tst r0, r6\n    beq _021E95E4\n    ldr r1, _021E96F4 ; =0x00000431\n    add r0, r4, #0\n    ldrb r1, [r4, r1]\n    bl ov108_021E9528\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0xf0\n    tst r0, r6\n    bne _021E95EE\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, _021E96F4 ; =0x00000431\n    mov r2, #0x1f\n    ldrb r5, [r4, r0]\n    lsr r3, r5, #0x1f\n    lsl r7, r5, #0x1f\n    sub r7, r7, r3\n    ror r7, r2\n    add r2, r3, r7\n    lsl r3, r5, #0x17\n    lsl r2, r2, #0x18\n    mov r5, #0x10\n    lsr r2, r2, #0x18\n    lsr r3, r3, #0x18\n    tst r5, r6\n    beq _021E9644\n    cmp r3, #3\n    bne _021E9614\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    cmp r2, #1\n    bne _021E963C\n    sub r5, r0, #3\n    sub r1, r0, #1\n    ldrb r5, [r4, r5]\n    ldrb r1, [r4, r1]\n    sub r5, r5, #1\n    cmp r1, r5\n    bge _021E9638\n    cmp r3, #3\n    bhs _021E9638\n    sub r1, r0, #1\n    ldrb r1, [r4, r1]\n    sub r0, r0, #1\n    add r1, r1, #1\n    strb r1, [r4, r0]\n    mov r1, #2\n    b _021E96AE\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r2, #1\n    lsl r0, r0, #0x18\n    lsr r2, r0, #0x18\n    b _021E96AE\n    mov r5, #0x20\n    tst r5, r6\n    beq _021E967C\n    cmp r3, #3\n    bne _021E9652\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    cmp r2, #0\n    bne _021E9674\n    sub r1, r0, #1\n    ldrb r1, [r4, r1]\n    cmp r1, #0\n    beq _021E9670\n    cmp r3, #3\n    bhs _021E9670\n    sub r1, r0, #1\n    ldrb r1, [r4, r1]\n    sub r0, r0, #1\n    sub r1, r1, #1\n    strb r1, [r4, r0]\n    mov r1, #1\n    b _021E96AE\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    sub r0, r2, #1\n    lsl r0, r0, #0x18\n    lsr r2, r0, #0x18\n    b _021E96AE\n    mov r0, #0x40\n    tst r0, r6\n    beq _021E9696\n    add r0, r3, #3\n    lsr r5, r0, #0x1f\n    lsl r3, r0, #0x1e\n    sub r3, r3, r5\n    mov r0, #0x1e\n    ror r3, r0\n    add r0, r5, r3\n    lsl r0, r0, #0x18\n    lsr r3, r0, #0x18\n    b _021E96AE\n    mov r0, #0x80\n    tst r0, r6\n    beq _021E96AE\n    add r0, r3, #1\n    lsr r5, r0, #0x1f\n    lsl r3, r0, #0x1e\n    sub r3, r3, r5\n    mov r0, #0x1e\n    ror r3, r0\n    add r0, r5, r3\n    lsl r0, r0, #0x18\n    lsr r3, r0, #0x18\n    lsl r0, r3, #1\n    add r2, r2, r0\n    ldr r0, _021E96F4 ; =0x00000431\n    cmp r1, #0\n    strb r2, [r4, r0]\n    beq _021E96D0\n    sub r1, r1, #1\n    add r0, r4, #0\n    lsl r1, r1, #0x18\n    add r4, #0x14\n    lsr r1, r1, #0x18\n    add r2, r4, #0\n    mov r3, #0\n    bl ov108_021EA584\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, _021E96F8 ; =0x000005E5\n    bl PlaySE\n    ldr r1, _021E96F4 ; =0x00000431\n    add r0, r4, #0\n    ldrb r1, [r4, r1]\n    bl ov108_021EA2EC\n    add r0, r4, #0\n    bl ov108_021EA47C\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021E96EC: .word gSystem\n    _021E96F0: .word 0x00000CF3\n    _021E96F4: .word 0x00000431\n    _021E96F8: .word 0x000005E5"
    );
    #endif
}

void ov108_021E96FC(void) {
    /* Original at 0x021E96FC */
    /* Requires manual decompilation - 72 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, _021E9794 ; =ov108_021EABF0\n    add r4, r1, #0\n    bl TouchscreenHitbox_FindRectAtTouchNew\n    mov r1, #0\n    mvn r1, r1\n    cmp r0, r1\n    bne _021E9716\n    mov r0, #0\n    str r0, [r4]\n    pop {r3, r4, r5, pc}\n    cmp r0, #7\n    bne _021E973E\n    mov r0, #0x43\n    lsl r0, r0, #4\n    ldrb r1, [r5, r0]\n    cmp r1, #0\n    beq _021E973A\n    sub r1, r1, #1\n    strb r1, [r5, r0]\n    add r0, r5, #0\n    mov r1, #0\n    add r5, #0x14\n    add r2, r5, #0\n    add r3, r1, #0\n    bl ov108_021EA584\n    mov r0, #1\n    str r0, [r4]\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    cmp r0, #8\n    bne _021E976C\n    mov r0, #0x43\n    lsl r0, r0, #4\n    sub r1, r0, #2\n    ldrb r1, [r5, r1]\n    ldrb r2, [r5, r0]\n    sub r1, r1, #1\n    cmp r2, r1\n    bge _021E9768\n    add r1, r2, #1\n    strb r1, [r5, r0]\n    add r0, r5, #0\n    add r5, #0x14\n    mov r1, #1\n    add r2, r5, #0\n    mov r3, #0\n    bl ov108_021EA584\n    mov r0, #1\n    str r0, [r4]\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    ldr r1, _021E9798 ; =0x00000431\n    ldrb r2, [r5, r1]\n    cmp r0, r2\n    beq _021E9784\n    strb r0, [r5, r1]\n    ldrb r1, [r5, r1]\n    add r0, r5, #0\n    bl ov108_021EA2EC\n    add r0, r5, #0\n    bl ov108_021EA47C\n    mov r0, #1\n    str r0, [r4]\n    ldr r1, _021E9798 ; =0x00000431\n    add r0, r5, #0\n    ldrb r1, [r5, r1]\n    bl ov108_021E9528\n    pop {r3, r4, r5, pc}\n    _021E9794: .word ov108_021EABF0\n    _021E9798: .word 0x00000431"
    );
    #endif
}

void ov108_021E979C(void) {
    /* Original at 0x021E979C */
    /* Requires manual decompilation - 64 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _021E981C ; =0x00000434\n    ldrb r1, [r4, r0]\n    cmp r1, #0\n    beq _021E97F4\n    sub r2, r0, #4\n    sub r1, r0, #3\n    ldrb r3, [r4, r2]\n    mov r2, #6\n    ldrb r1, [r4, r1]\n    mul r2, r3\n    add r2, r1, r2\n    lsl r2, r2, #0x18\n    lsr r2, r2, #0x18\n    cmp r1, #6\n    bhs _021E97C6\n    sub r0, r0, #7\n    ldrb r0, [r4, r0]\n    cmp r2, r0\n    blo _021E97D6\n    mov r0, #0xce\n    lsl r0, r0, #2\n    add r0, r4, r0\n    mov r1, #0x18\n    mov r2, #0\n    bl ov108_021E8EA4\n    b _021E97EE\n    mov r0, #0xcd\n    lsl r0, r0, #2\n    ldr r1, [r4, r0]\n    lsl r3, r2, #2\n    add r3, r2, r3\n    add r2, r1, r3\n    add r0, r0, #4\n    ldrb r1, [r1, r3]\n    add r0, r4, r0\n    add r2, r2, #2\n    bl ov108_021E8EA4\n    ldr r0, _021E981C ; =0x00000434\n    mov r1, #0\n    strb r1, [r4, r0]\n    ldr r0, _021E9820 ; =0x0000043C\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    beq _021E9800\n    bl SpriteSystem_TransferOam\n    bl GF_RunVramTransferTasks\n    ldr r0, _021E9824 ; =0x00000438\n    ldr r0, [r4, r0]\n    bl DoScheduledBgGpuUpdates\n    ldr r3, _021E9828 ; =0x027E0000\n    ldr r1, _021E982C ; =0x00003FF8\n    mov r0, #1\n    ldr r2, [r3, r1]\n    orr r0, r2\n    str r0, [r3, r1]\n    pop {r4, pc}\n    nop\n    _021E981C: .word 0x00000434\n    _021E9820: .word 0x0000043C\n    _021E9824: .word 0x00000438\n    _021E9828: .word 0x027E0000\n    _021E982C: .word 0x00003FF8"
    );
    #endif
}

void ov108_021E9830(void) {
    GfGfx_SetBanks(5);
}

void ov108_021E9850(void) {
    /* Original at 0x021E9850 */
    /* Requires manual decompilation - 190 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xd4\n    add r4, r0, #0\n    bl ov108_021E9830\n    ldr r2, _021E99E0 ; =0x04000304\n    ldrh r1, [r2]\n    lsr r0, r2, #0xb\n    orr r0, r1\n    strh r0, [r2]\n    ldr r0, [r4]\n    bl BgConfig_Alloc\n    ldr r1, _021E99E4 ; =0x00000438\n    add r3, sp, #0xc4\n    ldr r5, _021E99E8 ; =ov108_021EAAC0\n    str r0, [r4, r1]\n    add r2, r3, #0\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    add r0, r2, #0\n    bl SetBothScreensModesAndDisable\n    ldr r5, _021E99EC ; =ov108_021EAB54\n    add r3, sp, #0xa8\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #1\n    str r0, [r3]\n    ldr r0, _021E99E4 ; =0x00000438\n    mov r3, #0\n    ldr r0, [r4, r0]\n    bl InitBgFromTemplate\n    ldr r0, _021E99E4 ; =0x00000438\n    mov r1, #1\n    ldr r0, [r4, r0]\n    bl BgClearTilemapBufferAndCommit\n    ldr r5, _021E99F0 ; =ov108_021EAB1C\n    add r3, sp, #0x8c\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #2\n    str r0, [r3]\n    ldr r0, _021E99E4 ; =0x00000438\n    mov r3, #0\n    ldr r0, [r4, r0]\n    bl InitBgFromTemplate\n    ldr r0, _021E99E4 ; =0x00000438\n    mov r1, #2\n    ldr r0, [r4, r0]\n    bl BgClearTilemapBufferAndCommit\n    ldr r5, _021E99F4 ; =ov108_021EAB38\n    add r3, sp, #0x70\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #3\n    str r0, [r3]\n    ldr r0, _021E99E4 ; =0x00000438\n    mov r3, #0\n    ldr r0, [r4, r0]\n    bl InitBgFromTemplate\n    ldr r0, _021E99E4 ; =0x00000438\n    mov r1, #3\n    ldr r0, [r4, r0]\n    bl BgClearTilemapBufferAndCommit\n    ldr r5, _021E99F8 ; =ov108_021EAB8C\n    add r3, sp, #0x54\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    str r0, [r3]\n    ldr r0, _021E99E4 ; =0x00000438\n    mov r1, #4\n    ldr r0, [r4, r0]\n    mov r3, #0\n    bl InitBgFromTemplate\n    ldr r0, _021E99E4 ; =0x00000438\n    mov r1, #4\n    ldr r0, [r4, r0]\n    bl BgClearTilemapBufferAndCommit\n    ldr r5, _021E99FC ; =ov108_021EAAE4\n    add r3, sp, #0x38\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #5\n    str r0, [r3]\n    ldr r0, _021E99E4 ; =0x00000438\n    mov r3, #0\n    ldr r0, [r4, r0]\n    bl InitBgFromTemplate\n    ldr r0, _021E99E4 ; =0x00000438\n    mov r1, #5\n    ldr r0, [r4, r0]\n    bl BgClearTilemapBufferAndCommit\n    ldr r5, _021E9A00 ; =ov108_021EAB00\n    add r3, sp, #0x1c\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #6\n    str r0, [r3]\n    ldr r0, _021E99E4 ; =0x00000438\n    mov r3, #0\n    ldr r0, [r4, r0]\n    bl InitBgFromTemplate\n    ldr r0, _021E99E4 ; =0x00000438\n    mov r1, #6\n    ldr r0, [r4, r0]\n    bl BgClearTilemapBufferAndCommit\n    ldr r5, _021E9A04 ; =ov108_021EAB70\n    add r3, sp, #0\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #7\n    str r0, [r3]\n    ldr r0, _021E99E4 ; =0x00000438\n    mov r3, #0\n    ldr r0, [r4, r0]\n    bl InitBgFromTemplate\n    ldr r0, _021E99E4 ; =0x00000438\n    mov r1, #7\n    ldr r0, [r4, r0]\n    bl BgClearTilemapBufferAndCommit\n    ldr r3, [r4]\n    mov r0, #3\n    mov r1, #0x20\n    mov r2, #0\n    bl BG_ClearCharDataRange\n    ldr r3, [r4]\n    mov r0, #4\n    mov r1, #0x20\n    mov r2, #0\n    bl BG_ClearCharDataRange\n    ldr r3, [r4]\n    mov r0, #7\n    mov r1, #0x20\n    mov r2, #0\n    bl BG_ClearCharDataRange\n    add sp, #0xd4\n    pop {r4, r5, pc}\n    nop\n    _021E99E0: .word 0x04000304\n    _021E99E4: .word 0x00000438\n    _021E99E8: .word ov108_021EAAC0\n    _021E99EC: .word ov108_021EAB54\n    _021E99F0: .word ov108_021EAB1C\n    _021E99F4: .word ov108_021EAB38\n    _021E99F8: .word ov108_021EAB8C\n    _021E99FC: .word ov108_021EAAE4\n    _021E9A00: .word ov108_021EAB00\n    _021E9A04: .word ov108_021EAB70"
    );
    #endif
}

void ov108_021E9A08(void) {
    /* Original at 0x021E9A08 */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _021E9A5C ; =0x00000438\n    mov r1, #7\n    ldr r0, [r4, r0]\n    bl FreeBgTilemapBuffer\n    ldr r0, _021E9A5C ; =0x00000438\n    mov r1, #6\n    ldr r0, [r4, r0]\n    bl FreeBgTilemapBuffer\n    ldr r0, _021E9A5C ; =0x00000438\n    mov r1, #5\n    ldr r0, [r4, r0]\n    bl FreeBgTilemapBuffer\n    ldr r0, _021E9A5C ; =0x00000438\n    mov r1, #4\n    ldr r0, [r4, r0]\n    bl FreeBgTilemapBuffer\n    ldr r0, _021E9A5C ; =0x00000438\n    mov r1, #3\n    ldr r0, [r4, r0]\n    bl FreeBgTilemapBuffer\n    ldr r0, _021E9A5C ; =0x00000438\n    mov r1, #2\n    ldr r0, [r4, r0]\n    bl FreeBgTilemapBuffer\n    ldr r0, _021E9A5C ; =0x00000438\n    mov r1, #1\n    ldr r0, [r4, r0]\n    bl FreeBgTilemapBuffer\n    ldr r0, _021E9A5C ; =0x00000438\n    ldr r0, [r4, r0]\n    bl Heap_Free\n    pop {r4, pc}\n    _021E9A5C: .word 0x00000438"
    );
    #endif
}

void ov108_021E9A60(void) {
    /* Original at 0x021E9A60 */
    /* Requires manual decompilation - 162 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    ldr r1, [r5]\n    mov r0, #0xe1\n    bl NARC_New\n    mov r1, #0\n    str r1, [sp]\n    str r1, [sp, #4]\n    str r1, [sp, #8]\n    ldr r1, [r5]\n    ldr r2, _021E9BC0 ; =0x00000438\n    str r1, [sp, #0xc]\n    ldr r2, [r5, r2]\n    mov r1, #1\n    mov r3, #3\n    add r4, r0, #0\n    bl GfGfxLoader_LoadCharDataFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    ldr r0, [r5]\n    ldr r2, _021E9BC0 ; =0x00000438\n    str r0, [sp, #0xc]\n    ldr r2, [r5, r2]\n    add r0, r4, #0\n    mov r1, #5\n    mov r3, #7\n    bl GfGfxLoader_LoadCharDataFromOpenNarc\n    mov r1, #0\n    str r1, [sp]\n    ldr r0, [r5]\n    add r2, r1, #0\n    str r0, [sp, #4]\n    add r0, r4, #0\n    add r3, r1, #0\n    bl GfGfxLoader_GXLoadPalFromOpenNarc\n    mov r3, #0\n    str r3, [sp]\n    ldr r0, [r5]\n    mov r1, #4\n    str r0, [sp, #4]\n    add r0, r4, #0\n    add r2, r1, #0\n    bl GfGfxLoader_GXLoadPalFromOpenNarc\n    mov r1, #0x1a\n    ldr r2, [r5]\n    mov r0, #0\n    lsl r1, r1, #4\n    bl LoadFontPal1\n    mov r1, #0x1a\n    ldr r2, [r5]\n    mov r0, #4\n    lsl r1, r1, #4\n    bl LoadFontPal1\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    ldr r0, [r5]\n    ldr r2, _021E9BC0 ; =0x00000438\n    str r0, [sp, #0xc]\n    ldr r2, [r5, r2]\n    add r0, r4, #0\n    mov r1, #2\n    mov r3, #3\n    bl GfGfxLoader_LoadScrnDataFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    ldr r0, [r5]\n    ldr r2, _021E9BC0 ; =0x00000438\n    str r0, [sp, #0xc]\n    ldr r2, [r5, r2]\n    add r0, r4, #0\n    mov r1, #3\n    mov r3, #2\n    bl GfGfxLoader_LoadScrnDataFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    ldr r0, [r5]\n    ldr r2, _021E9BC0 ; =0x00000438\n    str r0, [sp, #0xc]\n    ldr r2, [r5, r2]\n    add r0, r4, #0\n    mov r1, #6\n    mov r3, #7\n    bl GfGfxLoader_LoadScrnDataFromOpenNarc\n    ldr r0, [r5]\n    ldr r3, _021E9BC4 ; =0x0000051C\n    str r0, [sp]\n    add r0, r4, #0\n    mov r1, #8\n    mov r2, #0\n    add r3, r5, r3\n    bl GfGfxLoader_GetScrnDataFromOpenNarc\n    ldr r3, _021E9BC8 ; =0x00000518\n    mov r1, #6\n    str r0, [r5, r3]\n    ldr r0, [r5]\n    add r3, #0xc\n    str r0, [sp]\n    add r0, r4, #0\n    mov r2, #0\n    add r3, r5, r3\n    bl GfGfxLoader_GetScrnDataFromOpenNarc\n    mov r3, #0x52\n    lsl r3, r3, #4\n    str r0, [r5, r3]\n    ldr r0, [r5]\n    add r3, #0xc\n    str r0, [sp]\n    add r0, r4, #0\n    mov r1, #7\n    mov r2, #0\n    add r3, r5, r3\n    bl GfGfxLoader_GetScrnDataFromOpenNarc\n    ldr r1, _021E9BCC ; =0x00000528\n    str r0, [r5, r1]\n    add r0, r4, #0\n    bl NARC_Delete\n    ldrb r0, [r5, #0x19]\n    ldr r2, _021E9BC0 ; =0x00000438\n    mov r1, #4\n    str r0, [sp]\n    ldr r0, [r5]\n    mov r3, #0xc\n    str r0, [sp, #4]\n    ldr r0, [r5, r2]\n    sub r2, #0x56\n    bl LoadUserFrameGfx2\n    mov r1, #0x1a\n    ldr r2, [r5]\n    mov r0, #0\n    lsl r1, r1, #4\n    bl LoadFontPal1\n    ldr r0, _021E9BC0 ; =0x00000438\n    mov r1, #7\n    ldr r0, [r5, r0]\n    bl ScheduleBgTilemapBufferTransfer\n    ldr r0, _021E9BC0 ; =0x00000438\n    mov r1, #3\n    ldr r0, [r5, r0]\n    bl ScheduleBgTilemapBufferTransfer\n    mov r0, #4\n    str r0, [sp]\n    ldr r0, _021E9BD0 ; =0x04000050\n    mov r1, #1\n    mov r2, #0x1e\n    mov r3, #0x1c\n    bl G2x_SetBlendAlpha_\n    add sp, #0x10\n    pop {r3, r4, r5, pc}\n    _021E9BC0: .word 0x00000438\n    _021E9BC4: .word 0x0000051C\n    _021E9BC8: .word 0x00000518\n    _021E9BCC: .word 0x00000528\n    _021E9BD0: .word 0x04000050"
    );
    #endif
}

void ov108_021E9BD4(void) {
    /* Original at 0x021E9BD4 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    mov r1, #0\n    add r4, r0, #0\n    ldr r0, _021E9C08 ; =0x04000050\n    add r2, r1, #0\n    mov r3, #0x1f\n    str r1, [sp]\n    bl G2x_SetBlendAlpha_\n    ldr r0, _021E9C0C ; =0x00000528\n    ldr r0, [r4, r0]\n    bl Heap_Free\n    mov r0, #0x52\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    bl Heap_Free\n    ldr r0, _021E9C10 ; =0x00000518\n    ldr r0, [r4, r0]\n    bl Heap_Free\n    add sp, #4\n    pop {r3, r4, pc}\n    nop\n    _021E9C08: .word 0x04000050\n    _021E9C0C: .word 0x00000528\n    _021E9C10: .word 0x00000518"
    );
    #endif
}

void ov108_021E9C14(void) {
    /* Original at 0x021E9C14 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0xce\n    add r2, r0, #0\n    lsl r1, r1, #2\n    add r0, r2, r1\n    add r1, #0xf4\n    ldrb r1, [r2, r1]\n    ldr r3, _021E9C28 ; =ov108_021E8CD4\n    ldr r2, [r2]\n    bx r3\n    nop\n    _021E9C28: .word ov108_021E8CD4"
    );
    #endif
}

void ov108_021E9C2C(void) {
    /* Original at 0x021E9C2C */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0xce\n    lsl r1, r1, #2\n    ldr r3, _021E9C38 ; =ov108_021E8E60\n    add r0, r0, r1\n    bx r3\n    nop\n    _021E9C38: .word ov108_021E8E60"
    );
    #endif
}

void ov108_021E9C3C(void) {
    /* Original at 0x021E9C3C */
    /* Requires manual decompilation - 65 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r1, [r5]\n    mov r0, #4\n    bl FontID_Alloc\n    ldr r2, _021E9CCC ; =0x000001AE\n    ldr r3, [r5]\n    mov r0, #0\n    mov r1, #0x1b\n    bl NewMsgDataFromNarc\n    mov r1, #0xc3\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    ldr r2, [r5]\n    mov r0, #2\n    mov r1, #0x10\n    bl MessageFormat_New_Custom\n    mov r1, #0x31\n    lsl r1, r1, #4\n    str r0, [r5, r1]\n    mov r0, #1\n    ldr r1, [r5]\n    lsl r0, r0, #8\n    bl String_New\n    mov r1, #0xc5\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    mov r0, #1\n    ldr r1, [r5]\n    lsl r0, r0, #8\n    bl String_New\n    mov r1, #0xc6\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    sub r1, #0xc\n    ldr r0, [r5, r1]\n    mov r1, #0xc\n    bl NewString_ReadMsgData\n    mov r1, #0xcb\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    sub r1, #0x20\n    ldr r0, [r5, r1]\n    mov r1, #8\n    bl NewString_ReadMsgData\n    mov r1, #0x33\n    lsl r1, r1, #4\n    add r7, r1, #0\n    str r0, [r5, r1]\n    mov r6, #0\n    add r4, r5, #0\n    sub r7, #0x14\n    mov r0, #0xc3\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    add r1, r6, #0\n    bl NewString_ReadMsgData\n    str r0, [r4, r7]\n    add r6, r6, #1\n    add r4, r4, #4\n    cmp r6, #4\n    blt _021E9CB2\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021E9CCC: .word 0x000001AE"
    );
    #endif
}

void ov108_021E9CD0(void) {
    /* Original at 0x021E9CD0 */
    /* Requires manual decompilation - 39 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    mov r7, #0xc7\n    mov r4, #0\n    add r5, r6, #0\n    lsl r7, r7, #2\n    ldr r0, [r5, r7]\n    bl String_Delete\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #4\n    blt _021E9CDC\n    mov r0, #0x33\n    lsl r0, r0, #4\n    ldr r0, [r6, r0]\n    bl String_Delete\n    mov r0, #0xcb\n    lsl r0, r0, #2\n    ldr r0, [r6, r0]\n    bl String_Delete\n    mov r0, #0xc6\n    lsl r0, r0, #2\n    ldr r0, [r6, r0]\n    bl String_Delete\n    mov r0, #0xc5\n    lsl r0, r0, #2\n    ldr r0, [r6, r0]\n    bl String_Delete\n    mov r0, #0x31\n    lsl r0, r0, #4\n    ldr r0, [r6, r0]\n    bl MessageFormat_Delete\n    mov r0, #0xc3\n    lsl r0, r0, #2\n    ldr r0, [r6, r0]\n    bl DestroyMsgData\n    mov r0, #4\n    bl FontID_Release\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov108_021E9D30(void) {
    /* Original at 0x021E9D30 */
    /* Requires manual decompilation - 79 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x1c\n    add r7, r0, #0\n    ldr r0, _021E9DCC ; =0x00000454\n    ldr r4, _021E9DD0 ; =ov108_021EAC18\n    mov r6, #0\n    add r5, r7, r0\n    ldr r0, _021E9DD4 ; =0x00000438\n    add r1, r5, #0\n    ldr r0, [r7, r0]\n    add r2, r4, #0\n    bl AddWindow\n    add r0, r5, #0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    add r6, r6, #1\n    add r4, #8\n    add r5, #0x10\n    cmp r6, #5\n    ble _021E9D3E\n    ldr r0, _021E9DCC ; =0x00000454\n    ldr r6, _021E9DD8 ; =0x000002E2\n    add r0, r7, r0\n    mov r4, #0\n    str r0, [sp, #0x14]\n    lsr r0, r4, #0x1f\n    add r0, r4, r0\n    asr r1, r0, #1\n    lsl r0, r1, #2\n    add r0, r1, r0\n    lsr r3, r4, #0x1f\n    str r3, [sp, #0x18]\n    add r0, r0, #6\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #0xe\n    str r0, [sp, #4]\n    mov r0, #2\n    str r0, [sp, #8]\n    mov r0, #4\n    str r0, [sp, #0xc]\n    add r1, r4, #6\n    lsl r2, r1, #4\n    ldr r1, [sp, #0x14]\n    ldr r5, [sp, #0x18]\n    lsl r3, r4, #0x1f\n    sub r3, r3, r5\n    mov r5, #0x1f\n    ror r3, r5\n    ldr r5, [sp, #0x18]\n    add r1, r1, r2\n    add r3, r5, r3\n    lsl r3, r3, #4\n    add r3, r3, #1\n    lsl r3, r3, #0x18\n    ldr r0, _021E9DD4 ; =0x00000438\n    str r6, [sp, #0x10]\n    ldr r0, [r7, r0]\n    mov r2, #5\n    lsr r3, r3, #0x18\n    bl AddWindowParameterized\n    sub r6, #0x1c\n    lsl r0, r6, #0x10\n    add r4, r4, #1\n    lsr r6, r0, #0x10\n    cmp r4, #6\n    blt _021E9D66\n    ldr r0, [r7]\n    bl YesNoPrompt_Create\n    ldr r1, _021E9DDC ; =0x00000514\n    str r0, [r7, r1]\n    add sp, #0x1c\n    pop {r4, r5, r6, r7, pc}\n    _021E9DCC: .word 0x00000454\n    _021E9DD0: .word ov108_021EAC18\n    _021E9DD4: .word 0x00000438\n    _021E9DD8: .word 0x000002E2\n    _021E9DDC: .word 0x00000514"
    );
    #endif
}

void ov108_021E9DE0(void) {
    /* Original at 0x021E9DE0 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, _021E9E08 ; =0x00000514\n    ldr r0, [r5, r0]\n    bl YesNoPrompt_Destroy\n    ldr r0, _021E9E0C ; =0x00000454\n    mov r4, #0\n    add r5, r5, r0\n    add r0, r5, #0\n    bl ClearWindowTilemapAndCopyToVram\n    add r0, r5, #0\n    bl RemoveWindow\n    add r4, r4, #1\n    add r5, #0x10\n    cmp r4, #0xc\n    blt _021E9DF2\n    pop {r3, r4, r5, pc}\n    _021E9E08: .word 0x00000514\n    _021E9E0C: .word 0x00000454"
    );
    #endif
}

void ov108_021E9E10(void) {
    /* Original at 0x021E9E10 */
    /* Requires manual decompilation - 44 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    add r4, r0, #0\n    ldr r1, [r4]\n    mov r0, #0x20\n    bl GF_CreateVramTransferManager\n    ldr r0, [r4]\n    bl SpriteSystem_Alloc\n    ldr r1, _021E9E70 ; =0x0000043C\n    ldr r2, _021E9E74 ; =ov108_021EAAD0\n    str r0, [r4, r1]\n    ldr r0, [r4, r1]\n    ldr r1, _021E9E78 ; =ov108_021EABA8\n    mov r3, #1\n    bl SpriteSystem_Init\n    ldr r0, _021E9E70 ; =0x0000043C\n    ldr r0, [r4, r0]\n    bl SpriteManager_New\n    mov r1, #0x11\n    lsl r1, r1, #6\n    str r0, [r4, r1]\n    sub r0, r1, #4\n    ldr r0, [r4, r0]\n    ldr r1, [r4, r1]\n    mov r2, #4\n    bl SpriteSystem_InitSprites\n    mov r3, #0\n    ldr r1, _021E9E70 ; =0x0000043C\n    str r3, [sp]\n    ldr r0, [r4, r1]\n    add r1, r1, #4\n    ldr r1, [r4, r1]\n    ldr r2, _021E9E7C ; =ov108_021EAAB0\n    bl sub_0200D2A4\n    ldr r0, [r4]\n    bl thunk_ClearMainOAM\n    ldr r0, [r4]\n    bl thunk_ClearSubOAM\n    add sp, #4\n    pop {r3, r4, pc}\n    _021E9E70: .word 0x0000043C\n    _021E9E74: .word ov108_021EAAD0\n    _021E9E78: .word ov108_021EABA8\n    _021E9E7C: .word ov108_021EAAB0"
    );
    #endif
}

void ov108_021E9E80(void) {
    /* Original at 0x021E9E80 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r1, _021E9EB4 ; =0x0000043C\n    add r4, r0, #0\n    ldr r0, [r4, r1]\n    add r1, r1, #4\n    ldr r1, [r4, r1]\n    bl SpriteSystem_DestroySpriteManager\n    ldr r0, _021E9EB4 ; =0x0000043C\n    ldr r0, [r4, r0]\n    bl SpriteSystem_Free\n    ldr r0, _021E9EB4 ; =0x0000043C\n    mov r1, #0\n    str r1, [r4, r0]\n    add r0, r0, #4\n    str r1, [r4, r0]\n    bl GF_DestroyVramTransferManager\n    ldr r0, [r4]\n    bl thunk_ClearMainOAM\n    ldr r0, [r4]\n    bl thunk_ClearSubOAM\n    pop {r4, pc}\n    _021E9EB4: .word 0x0000043C"
    );
    #endif
}

void ov108_021E9EB8(void) {
    /* Original at 0x021E9EB8 */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    ldr r4, _021E9EF8 ; =ov108_021EAC48\n    mov r7, #0\n    add r5, r6, #0\n    ldr r0, _021E9EFC ; =0x0000043C\n    mov r1, #0x11\n    lsl r1, r1, #6\n    ldr r0, [r6, r0]\n    ldr r1, [r6, r1]\n    add r2, r4, #0\n    bl SpriteSystem_CreateSpriteFromResourceHeader\n    ldr r1, _021E9F00 ; =0x00000444\n    str r0, [r5, r1]\n    add r0, r1, #0\n    ldr r0, [r5, r0]\n    mov r1, #1\n    bl Sprite_SetDrawFlag\n    add r7, r7, #1\n    add r4, #0x28\n    add r5, r5, #4\n    cmp r7, #4\n    blt _021E9EC2\n    ldr r0, _021E9F00 ; =0x00000444\n    mov r1, #1\n    ldr r0, [r6, r0]\n    bl thunk_Sprite_SetPriority\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021E9EF8: .word ov108_021EAC48\n    _021E9EFC: .word 0x0000043C\n    _021E9F00: .word 0x00000444"
    );
    #endif
}

void ov108_021E9F04(void) {
    thunk_Sprite_Delete(0);
}

void ov108_021E9F20(void) {
    /* Original at 0x021E9F20 */
    /* Requires manual decompilation - 49 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    ldr r0, _021E9F88 ; =0x00000448\n    add r4, r1, #0\n    ldr r0, [r5, r0]\n    add r1, r4, #2\n    bl Sprite_SetAnimCtrlSeq\n    ldr r0, _021E9F88 ; =0x00000448\n    ldr r0, [r5, r0]\n    bl Sprite_ResetAnimCtrlState\n    ldr r0, _021E9F8C ; =0x00000474\n    mov r1, #0\n    add r0, r5, r0\n    bl FillWindowPixelBuffer\n    mov r1, #0x33\n    lsl r1, r1, #4\n    ldr r1, [r5, r1]\n    mov r0, #4\n    mov r2, #0\n    bl FontID_String_GetWidth\n    mov r1, #4\n    add r3, r0, #0\n    lsl r2, r4, #2\n    mov r4, #0x30\n    sub r3, r4, r3\n    str r1, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _021E9F90 ; =ov108_021EAAA4\n    lsr r3, r3, #1\n    ldr r0, [r0, r2]\n    mov r2, #0x33\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    ldr r0, _021E9F8C ; =0x00000474\n    lsl r2, r2, #4\n    ldr r2, [r5, r2]\n    add r0, r5, r0\n    bl AddTextPrinterParameterizedWithColor\n    ldr r0, _021E9F8C ; =0x00000474\n    add r0, r5, r0\n    bl ScheduleWindowCopyToVram\n    add sp, #0x10\n    pop {r3, r4, r5, pc}\n    _021E9F88: .word 0x00000448\n    _021E9F8C: .word 0x00000474\n    _021E9F90: .word ov108_021EAAA4"
    );
    #endif
}

void ov108_021E9F94(void) {
    /* Original at 0x021E9F94 */
    /* Requires manual decompilation - 77 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0x1c\n    add r5, r0, #0\n    cmp r1, #0\n    bne _021E9FA2\n    ldr r0, _021EA034 ; =0x00000524\n    b _021E9FA4\n    ldr r0, _021EA038 ; =0x0000052C\n    ldr r4, [r5, r0]\n    mov r1, #5\n    str r1, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    mov r0, #0xe\n    str r0, [sp, #8]\n    mov r0, #0x11\n    str r0, [sp, #0xc]\n    ldr r0, _021EA03C ; =0x00000438\n    mov r2, #0\n    ldr r0, [r5, r0]\n    add r3, r2, #0\n    bl FillBgTilemapRect\n    mov r0, #5\n    str r0, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    mov r0, #0xe\n    str r0, [sp, #8]\n    mov r0, #0x11\n    str r0, [sp, #0xc]\n    ldr r0, _021EA03C ; =0x00000438\n    mov r2, #0\n    ldr r0, [r5, r0]\n    mov r1, #6\n    add r3, r2, #0\n    bl FillBgTilemapRect\n    mov r0, #0x20\n    str r0, [sp]\n    mov r0, #0x18\n    str r0, [sp, #4]\n    add r0, r4, #0\n    add r0, #0xc\n    mov r2, #0\n    str r0, [sp, #8]\n    str r2, [sp, #0xc]\n    str r2, [sp, #0x10]\n    ldrh r0, [r4]\n    mov r1, #7\n    add r3, r2, #0\n    lsl r0, r0, #0x15\n    lsr r0, r0, #0x18\n    str r0, [sp, #0x14]\n    ldrh r0, [r4, #2]\n    lsl r0, r0, #0x15\n    lsr r0, r0, #0x18\n    str r0, [sp, #0x18]\n    ldr r0, _021EA03C ; =0x00000438\n    ldr r0, [r5, r0]\n    bl CopyToBgTilemapRect\n    ldr r0, _021EA03C ; =0x00000438\n    mov r1, #5\n    ldr r0, [r5, r0]\n    bl ScheduleBgTilemapBufferTransfer\n    ldr r0, _021EA03C ; =0x00000438\n    mov r1, #6\n    ldr r0, [r5, r0]\n    bl ScheduleBgTilemapBufferTransfer\n    ldr r0, _021EA03C ; =0x00000438\n    mov r1, #7\n    ldr r0, [r5, r0]\n    bl ScheduleBgTilemapBufferTransfer\n    add sp, #0x1c\n    pop {r4, r5, pc}\n    nop\n    _021EA034: .word 0x00000524\n    _021EA038: .word 0x0000052C\n    _021EA03C: .word 0x00000438"
    );
    #endif
}

void ov108_021EA040(void) {
    /* Original at 0x021EA040 */
    /* Requires manual decompilation - 244 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x24\n    add r5, r0, #0\n    mov r0, #5\n    str r0, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    mov r0, #0xe\n    str r0, [sp, #8]\n    mov r0, #0x11\n    str r0, [sp, #0xc]\n    ldr r0, _021EA244 ; =0x00000438\n    mov r2, #0\n    ldr r0, [r5, r0]\n    mov r1, #6\n    add r3, r2, #0\n    bl FillBgTilemapRect\n    ldr r0, _021EA248 ; =0x00000454\n    mov r4, #0\n    add r7, r5, r0\n    mov r0, #0x43\n    lsl r0, r0, #4\n    ldrb r1, [r5, r0]\n    mov r0, #6\n    mul r0, r1\n    add r0, r4, r0\n    str r0, [sp, #0x1c]\n    add r0, r4, #6\n    lsl r0, r0, #4\n    str r0, [sp, #0x20]\n    add r0, r7, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    ldr r0, _021EA24C ; =0x0000042D\n    ldrb r1, [r5, r0]\n    ldr r0, [sp, #0x1c]\n    cmp r0, r1\n    blt _021EA09A\n    ldr r0, [sp, #0x20]\n    add r0, r7, r0\n    bl ScheduleWindowCopyToVram\n    b _021EA168\n    ldr r1, [sp, #0x1c]\n    add r0, r5, #0\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    bl ov108_021EA52C\n    cmp r0, #0\n    ble _021EA0AE\n    mov r0, #1\n    b _021EA0B0\n    mov r0, #0\n    lsl r0, r0, #0x18\n    lsr r1, r0, #0x18\n    ldr r0, _021EA250 ; =0x0000051C\n    lsl r1, r1, #0x1c\n    ldr r0, [r5, r0]\n    mov r2, #0x10\n    str r2, [sp]\n    mov r2, #4\n    str r2, [sp, #4]\n    add r2, r0, #0\n    add r2, #0xc\n    str r2, [sp, #8]\n    lsr r1, r1, #0x18\n    str r1, [sp, #0xc]\n    mov r1, #0\n    str r1, [sp, #0x10]\n    ldrh r1, [r0]\n    lsr r3, r4, #0x1f\n    lsl r6, r4, #0x1f\n    lsl r1, r1, #0x15\n    lsr r1, r1, #0x18\n    str r1, [sp, #0x14]\n    ldrh r0, [r0, #2]\n    sub r6, r6, r3\n    mov r2, #0x1f\n    ror r6, r2\n    add r2, r3, r6\n    add r3, r4, r3\n    lsl r0, r0, #0x15\n    asr r3, r3, #1\n    lsr r0, r0, #0x18\n    add r6, r3, #1\n    str r0, [sp, #0x18]\n    ldr r0, _021EA244 ; =0x00000438\n    lsl r3, r6, #2\n    add r3, r6, r3\n    lsl r2, r2, #0x1c\n    lsl r3, r3, #0x18\n    ldr r0, [r5, r0]\n    mov r1, #6\n    lsr r2, r2, #0x18\n    lsr r3, r3, #0x18\n    bl CopyToBgTilemapRect\n    mov r1, #0xcd\n    ldr r2, [sp, #0x1c]\n    lsl r1, r1, #2\n    lsl r3, r2, #2\n    mov r0, #0xc3\n    lsl r0, r0, #2\n    ldr r1, [r5, r1]\n    add r2, r2, r3\n    ldrb r1, [r1, r2]\n    mov r2, #0xc6\n    lsl r2, r2, #2\n    ldr r0, [r5, r0]\n    ldr r2, [r5, r2]\n    add r1, #0xe\n    bl ReadMsgDataIntoString\n    mov r1, #0xc6\n    lsl r1, r1, #2\n    ldr r1, [r5, r1]\n    mov r0, #4\n    mov r2, #0\n    bl FontID_String_GetWidth\n    mov r1, #0x70\n    sub r3, r1, r0\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _021EA254 ; =0x00010200\n    mov r2, #0xc6\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #0x20]\n    lsl r2, r2, #2\n    lsr r6, r3, #0x1f\n    add r6, r3, r6\n    ldr r2, [r5, r2]\n    add r0, r7, r0\n    mov r1, #4\n    asr r3, r6, #1\n    bl AddTextPrinterParameterizedWithColor\n    ldr r0, [sp, #0x20]\n    add r0, r7, r0\n    bl ScheduleWindowCopyToVram\n    add r4, r4, #1\n    cmp r4, #6\n    bge _021EA170\n    b _021EA06A\n    ldr r0, _021EA258 ; =0x00000484\n    mov r1, #0\n    add r0, r5, r0\n    bl FillWindowPixelBuffer\n    mov r3, #1\n    str r3, [sp]\n    mov r2, #0x43\n    mov r0, #0x31\n    str r3, [sp, #4]\n    lsl r2, r2, #4\n    ldrb r2, [r5, r2]\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    mov r1, #0\n    add r2, r2, #1\n    bl BufferIntegerAsString\n    mov r1, #1\n    str r1, [sp]\n    mov r0, #0x31\n    ldr r2, _021EA25C ; =0x0000042E\n    str r1, [sp, #4]\n    lsl r0, r0, #4\n    ldrb r2, [r5, r2]\n    ldr r0, [r5, r0]\n    add r3, r1, #0\n    bl BufferIntegerAsString\n    mov r2, #0x31\n    lsl r2, r2, #4\n    add r1, r2, #4\n    ldr r0, [r5, r2]\n    add r2, #0x1c\n    ldr r1, [r5, r1]\n    ldr r2, [r5, r2]\n    bl StringExpandPlaceholders\n    mov r1, #0\n    mov r2, #0xc5\n    str r1, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    mov r0, #0xc1\n    lsl r0, r0, #0xa\n    str r0, [sp, #8]\n    ldr r0, _021EA258 ; =0x00000484\n    str r1, [sp, #0xc]\n    lsl r2, r2, #2\n    ldr r2, [r5, r2]\n    add r0, r5, r0\n    add r3, r1, #0\n    bl AddTextPrinterParameterizedWithColor\n    ldr r0, _021EA258 ; =0x00000484\n    add r0, r5, r0\n    bl ScheduleWindowCopyToVram\n    ldr r0, _021EA244 ; =0x00000438\n    mov r1, #5\n    ldr r0, [r5, r0]\n    bl ScheduleBgTilemapBufferTransfer\n    ldr r0, _021EA244 ; =0x00000438\n    mov r1, #6\n    ldr r0, [r5, r0]\n    bl ScheduleBgTilemapBufferTransfer\n    mov r0, #0x43\n    lsl r0, r0, #4\n    ldrb r1, [r5, r0]\n    cmp r1, #0\n    bne _021EA20E\n    add r0, #0x1c\n    ldr r0, [r5, r0]\n    mov r1, #7\n    bl Sprite_SetAnimCtrlSeq\n    b _021EA218\n    add r0, #0x1c\n    ldr r0, [r5, r0]\n    mov r1, #5\n    bl Sprite_SetAnimCtrlSeq\n    mov r0, #0x43\n    lsl r0, r0, #4\n    sub r1, r0, #2\n    ldrb r1, [r5, r1]\n    ldrb r2, [r5, r0]\n    sub r1, r1, #1\n    cmp r2, r1\n    bne _021EA236\n    add r0, #0x20\n    ldr r0, [r5, r0]\n    mov r1, #0xa\n    bl Sprite_SetAnimCtrlSeq\n    add sp, #0x24\n    pop {r4, r5, r6, r7, pc}\n    add r0, #0x20\n    ldr r0, [r5, r0]\n    mov r1, #8\n    bl Sprite_SetAnimCtrlSeq\n    add sp, #0x24\n    pop {r4, r5, r6, r7, pc}\n    _021EA244: .word 0x00000438\n    _021EA248: .word 0x00000454\n    _021EA24C: .word 0x0000042D\n    _021EA250: .word 0x0000051C\n    _021EA254: .word 0x00010200\n    _021EA258: .word 0x00000484\n    _021EA25C: .word 0x0000042E"
    );
    #endif
}

void ov108_021EA260(void) {
    /* Original at 0x021EA260 */
    /* Requires manual decompilation - 60 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    add r4, r0, #0\n    ldr r0, _021EA2DC ; =0x00000494\n    mov r1, #0\n    add r0, r4, r0\n    bl FillWindowPixelBuffer\n    ldr r3, _021EA2E0 ; =0x00000432\n    mov r2, #0xc3\n    lsl r2, r2, #2\n    ldrb r5, [r4, r3]\n    add r1, r2, #0\n    add r1, #0x28\n    lsl r3, r5, #2\n    ldr r0, [r4, r2]\n    add r2, #0xc\n    ldr r1, [r4, r1]\n    add r3, r5, r3\n    ldrb r1, [r1, r3]\n    ldr r2, [r4, r2]\n    add r1, #0xe\n    bl ReadMsgDataIntoString\n    mov r1, #0xc6\n    lsl r1, r1, #2\n    ldr r1, [r4, r1]\n    mov r0, #4\n    mov r2, #0\n    bl FontID_String_GetWidth\n    mov r1, #0x70\n    sub r3, r1, r0\n    mov r1, #0\n    mov r2, #0xc6\n    lsr r5, r3, #0x1f\n    add r5, r3, r5\n    str r1, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _021EA2E4 ; =0x00010200\n    lsl r2, r2, #2\n    str r0, [sp, #8]\n    str r1, [sp, #0xc]\n    ldr r0, _021EA2DC ; =0x00000494\n    ldr r2, [r4, r2]\n    add r0, r4, r0\n    mov r1, #4\n    asr r3, r5, #1\n    bl AddTextPrinterParameterizedWithColor\n    ldr r0, _021EA2DC ; =0x00000494\n    add r0, r4, r0\n    bl ScheduleWindowCopyToVram\n    ldr r0, _021EA2E8 ; =0x00000484\n    add r0, r4, r0\n    bl ClearWindowTilemapAndScheduleTransfer\n    add sp, #0x10\n    pop {r3, r4, r5, pc}\n    nop\n    _021EA2DC: .word 0x00000494\n    _021EA2E0: .word 0x00000432\n    _021EA2E4: .word 0x00010200\n    _021EA2E8: .word 0x00000484"
    );
    #endif
}

void ov108_021EA2EC(void) {
    /* Original at 0x021EA2EC */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    cmp r1, #6\n    blo _021EA2FC\n    mov r3, #0xe0\n    mov r2, #0xb4\n    mov r5, #1\n    b _021EA31A\n    lsr r3, r1, #0x1f\n    lsl r2, r1, #0x1f\n    sub r2, r2, r3\n    mov r0, #0x1f\n    ror r2, r0\n    add r0, r3, r2\n    lsl r0, r0, #0x17\n    asr r3, r0, #0x10\n    lsr r0, r1, #1\n    add r1, r0, #1\n    mov r0, #0x28\n    mul r0, r1\n    lsl r0, r0, #0x10\n    asr r2, r0, #0x10\n    mov r5, #0\n    ldr r0, _021EA330 ; =0x00000444\n    add r1, r3, #0\n    ldr r0, [r4, r0]\n    bl Sprite_SetPositionXY\n    ldr r0, _021EA330 ; =0x00000444\n    add r1, r5, #0\n    ldr r0, [r4, r0]\n    bl Sprite_SetAnimCtrlSeq\n    pop {r3, r4, r5, pc}\n    _021EA330: .word 0x00000444"
    );
    #endif
}

void ov108_021EA334(void) {
    /* Original at 0x021EA334 */
    /* Requires manual decompilation - 102 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    ldr r0, _021EA40C ; =0x00000454\n    mov r6, #0\n    add r4, r1, #0\n    add r0, r5, r0\n    add r1, r6, #0\n    bl FillWindowPixelBuffer\n    cmp r4, #0\n    beq _021EA352\n    cmp r4, #2\n    beq _021EA382\n    b _021EA3A4\n    ldr r1, _021EA410 ; =0x00000433\n    mov r2, #0xc3\n    lsl r2, r2, #2\n    ldrb r1, [r5, r1]\n    ldr r0, [r5, r2]\n    add r2, #8\n    ldr r2, [r5, r2]\n    add r1, #0xe\n    bl ReadMsgDataIntoString\n    add r1, r6, #0\n    mov r2, #0x31\n    str r1, [sp]\n    mov r0, #2\n    lsl r2, r2, #4\n    str r0, [sp, #4]\n    ldr r0, [r5, r2]\n    add r2, r2, #4\n    ldr r2, [r5, r2]\n    mov r3, #1\n    bl BufferString\n    mov r6, #1\n    b _021EA3A4\n    ldr r0, _021EA414 ; =0x00000435\n    ldrb r2, [r5, r0]\n    cmp r2, #0\n    bne _021EA38E\n    mov r4, #3\n    b _021EA3A4\n    mov r0, #1\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #0x31\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    add r1, r6, #0\n    mov r3, #2\n    bl BufferIntegerAsString\n    mov r6, #1\n    cmp r6, #0\n    beq _021EA3CE\n    mov r2, #0xc3\n    lsl r2, r2, #2\n    ldr r0, [r5, r2]\n    add r2, #8\n    ldr r2, [r5, r2]\n    add r1, r4, #0\n    bl ReadMsgDataIntoString\n    mov r2, #0x31\n    lsl r2, r2, #4\n    add r1, r2, #0\n    ldr r0, [r5, r2]\n    add r1, #8\n    add r2, r2, #4\n    ldr r1, [r5, r1]\n    ldr r2, [r5, r2]\n    bl StringExpandPlaceholders\n    b _021EA3DE\n    mov r2, #0xc3\n    lsl r2, r2, #2\n    ldr r0, [r5, r2]\n    add r2, #0xc\n    ldr r2, [r5, r2]\n    add r1, r4, #0\n    bl ReadMsgDataIntoString\n    mov r1, #0\n    str r1, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    mov r0, #0xc1\n    lsl r0, r0, #0xa\n    str r0, [sp, #8]\n    mov r2, #0xc6\n    ldr r0, _021EA40C ; =0x00000454\n    str r1, [sp, #0xc]\n    lsl r2, r2, #2\n    ldr r2, [r5, r2]\n    add r0, r5, r0\n    add r3, r1, #0\n    bl AddTextPrinterParameterizedWithColor\n    ldr r0, _021EA40C ; =0x00000454\n    add r0, r5, r0\n    bl ScheduleWindowCopyToVram\n    add sp, #0x10\n    pop {r4, r5, r6, pc}\n    nop\n    _021EA40C: .word 0x00000454\n    _021EA410: .word 0x00000433\n    _021EA414: .word 0x00000435"
    );
    #endif
}

void ov108_021EA418(void) {
    /* Original at 0x021EA418 */
    /* Requires manual decompilation - 43 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    ldr r0, _021EA474 ; =0x00000464\n    add r4, r1, #0\n    add r0, r5, r0\n    mov r1, #0xf\n    bl FillWindowPixelBuffer\n    mov r2, #0xc3\n    lsl r2, r2, #2\n    ldr r0, [r5, r2]\n    add r2, #0xc\n    ldr r2, [r5, r2]\n    add r1, r4, #4\n    bl ReadMsgDataIntoString\n    ldr r2, _021EA474 ; =0x00000464\n    mov r1, #1\n    add r0, r5, r2\n    sub r2, #0x82\n    mov r3, #0xc\n    bl DrawFrameAndWindow2\n    mov r3, #0\n    mov r2, #0xc6\n    str r3, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _021EA478 ; =0x0001020F\n    lsl r2, r2, #2\n    str r0, [sp, #8]\n    str r3, [sp, #0xc]\n    ldr r0, _021EA474 ; =0x00000464\n    ldr r2, [r5, r2]\n    add r0, r5, r0\n    mov r1, #1\n    bl AddTextPrinterParameterizedWithColor\n    ldr r0, _021EA474 ; =0x00000464\n    add r0, r5, r0\n    bl ScheduleWindowCopyToVram\n    add sp, #0x10\n    pop {r3, r4, r5, pc}\n    nop\n    _021EA474: .word 0x00000464\n    _021EA478: .word 0x0001020F"
    );
    #endif
}

void ov108_021EA47C(void) {
    /* Original at 0x021EA47C */
    /* Requires manual decompilation - 63 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    add r4, r0, #0\n    bl ov108_021EA624\n    ldr r0, _021EA500 ; =0x000004A4\n    mov r1, #0\n    add r0, r4, r0\n    bl FillWindowPixelBuffer\n    ldr r2, _021EA504 ; =0x00000431\n    sub r1, r2, #1\n    ldrb r3, [r4, r1]\n    mov r1, #6\n    ldrb r0, [r4, r2]\n    mul r1, r3\n    add r1, r0, r1\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    cmp r0, #6\n    bhs _021EA4AE\n    sub r0, r2, #4\n    ldrb r0, [r4, r0]\n    cmp r1, r0\n    blo _021EA4BA\n    ldr r0, _021EA500 ; =0x000004A4\n    add r0, r4, r0\n    bl ScheduleWindowCopyToVram\n    add sp, #0x10\n    pop {r3, r4, r5, pc}\n    mov r3, #0xc3\n    lsl r3, r3, #2\n    add r2, r3, #0\n    add r2, #0x28\n    ldr r5, [r4, r2]\n    lsl r2, r1, #2\n    add r1, r1, r2\n    ldrb r1, [r5, r1]\n    ldr r0, [r4, r3]\n    add r3, #0xc\n    ldr r2, [r4, r3]\n    add r1, #0x26\n    bl ReadMsgDataIntoString\n    mov r1, #0\n    mov r2, #0xc6\n    str r1, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _021EA508 ; =0x00010200\n    lsl r2, r2, #2\n    str r0, [sp, #8]\n    str r1, [sp, #0xc]\n    ldr r0, _021EA500 ; =0x000004A4\n    ldr r2, [r4, r2]\n    add r0, r4, r0\n    add r3, r1, #0\n    bl AddTextPrinterParameterizedWithColor\n    ldr r0, _021EA500 ; =0x000004A4\n    add r0, r4, r0\n    bl ScheduleWindowCopyToVram\n    add sp, #0x10\n    pop {r3, r4, r5, pc}\n    _021EA500: .word 0x000004A4\n    _021EA504: .word 0x00000431\n    _021EA508: .word 0x00010200"
    );
    #endif
}

void ov108_021EA50C(void) {
    /* Original at 0x021EA50C */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r1, #0\n    add r4, r0, #0\n    bl ov108_021E940C\n    ldr r1, _021EA528 ; =0x00000431\n    add r0, r4, #0\n    ldrb r1, [r4, r1]\n    bl ov108_021EA2EC\n    add r0, r4, #0\n    bl ov108_021EA47C\n    pop {r4, pc}\n    _021EA528: .word 0x00000431"
    );
    #endif
}

void ov108_021EA52C(void) {
    /* Original at 0x021EA52C */
    /* Requires manual decompilation - 43 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    ldr r2, _021EA580 ; =0x00000435\n    ldrb r2, [r0, r2]\n    cmp r2, #0\n    bne _021EA53C\n    mov r0, #4\n    pop {r3, r4}\n    bx lr\n    lsl r2, r1, #2\n    add r4, r1, r2\n    mov r1, #0xcd\n    lsl r1, r1, #2\n    ldr r1, [r0, r1]\n    ldr r3, [r0, #0x1c]\n    add r1, r1, r4\n    ldrb r0, [r1, #3]\n    ldrb r2, [r3, #0x18]\n    lsl r0, r0, #0x1f\n    lsr r0, r0, #0x1f\n    cmp r2, r0\n    beq _021EA566\n    cmp r2, #0\n    bne _021EA560\n    mov r0, #2\n    pop {r3, r4}\n    bx lr\n    mov r0, #3\n    pop {r3, r4}\n    bx lr\n    ldrb r0, [r1, #1]\n    lsl r0, r0, #2\n    add r0, r3, r0\n    ldrb r0, [r0, #8]\n    cmp r0, #0\n    bne _021EA578\n    mov r0, #1\n    pop {r3, r4}\n    bx lr\n    mov r0, #0\n    pop {r3, r4}\n    bx lr\n    nop\n    _021EA580: .word 0x00000435"
    );
    #endif
}

void ov108_021EA584(void) {
    /* Original at 0x021EA584 */
    /* Requires manual decompilation - 40 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    str r3, [sp]\n    add r6, r1, #0\n    ldr r0, [r5]\n    mov r1, #0x14\n    add r7, r2, #0\n    bl Heap_Alloc\n    mov r1, #0\n    mov r2, #0x14\n    add r4, r0, #0\n    bl MI_CpuFill8\n    add r0, r6, #2\n    str r5, [r4, #4]\n    lsl r0, r0, #2\n    str r7, [r4]\n    add r1, r5, r0\n    ldr r0, _021EA5D8 ; =0x00000444\n    strb r6, [r4, #8]\n    ldr r0, [r1, r0]\n    lsl r1, r6, #1\n    add r1, r6, r1\n    add r1, r1, #6\n    bl Sprite_SetAnimCtrlSeq\n    ldr r0, _021EA5DC ; =0x000005E1\n    bl PlaySE\n    ldr r1, [r4]\n    cmp r1, #0\n    beq _021EA5CC\n    ldr r0, [r1]\n    add r0, r0, #1\n    str r0, [r1]\n    ldr r0, _021EA5E0 ; =ov108_021EA5E4\n    ldr r2, [sp]\n    add r1, r4, #0\n    bl SysTask_CreateOnMainQueue\n    pop {r3, r4, r5, r6, r7, pc}\n    _021EA5D8: .word 0x00000444\n    _021EA5DC: .word 0x000005E1\n    _021EA5E0: .word ov108_021EA5E4"
    );
    #endif
}

void ov108_021EA5E4(void) {
    /* Original at 0x021EA5E4 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    ldrb r1, [r4, #9]\n    add r5, r0, #0\n    add r0, r1, #1\n    strb r0, [r4, #9]\n    cmp r1, #2\n    blo _021EA61E\n    ldr r0, [r4, #4]\n    bl ov108_021EA040\n    ldr r0, [r4, #4]\n    bl ov108_021EA47C\n    ldr r0, [r4, #4]\n    ldr r1, _021EA620 ; =0x00000431\n    ldrb r1, [r0, r1]\n    bl ov108_021EA2EC\n    ldr r1, [r4]\n    ldr r0, [r1]\n    sub r0, r0, #1\n    str r0, [r1]\n    add r0, r4, #0\n    bl Heap_Free\n    add r0, r5, #0\n    bl SysTask_Destroy\n    pop {r3, r4, r5, pc}\n    _021EA620: .word 0x00000431"
    );
    #endif
}

void ov108_021EA624(void) {
    /* Original at 0x021EA624 */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _021EA634 ; =0x00000434\n    mov r2, #1\n    strb r2, [r0, r1]\n    sub r1, #0xfc\n    add r0, r0, r1\n    ldr r3, _021EA638 ; =ov108_021E8ED8\n    mov r1, #0\n    bx r3\n    _021EA634: .word 0x00000434\n    _021EA638: .word ov108_021E8ED8"
    );
    #endif
}

void ov108_021EA63C(void) {
    /* Original at 0x021EA63C */
    /* Requires manual decompilation - 91 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    str r1, [sp]\n    mov r6, #0\n    mov r1, #0xa\n    str r2, [sp, #4]\n    str r3, [sp, #8]\n    add r4, r6, #0\n    bl _u32_div_f\n    ldr r2, _021EA6F8 ; =ov108_021EAD28\n    lsl r0, r1, #2\n    add r0, r2, r0\n    str r0, [sp, #0xc]\n    add r0, r6, #0\n    mov ip, r0\n    ldr r0, [sp]\n    cmp r0, #0\n    ble _021EA69C\n    mov r7, #1\n    ldr r1, [sp, #0xc]\n    mov r0, ip\n    ldrb r0, [r1, r0]\n    mov r2, #0\n    lsl r1, r0, #3\n    ldr r0, _021EA6FC ; =ov108_021EAD08\n    ldrb r5, [r0, r1]\n    add r3, r0, r1\n    cmp r5, #0\n    ble _021EA690\n    ldr r3, [r3, #4]\n    ldrb r0, [r3]\n    add r1, r7, #0\n    add r2, r2, #1\n    lsl r1, r0\n    add r0, r6, #1\n    lsl r0, r0, #0x18\n    orr r4, r1\n    lsr r6, r0, #0x18\n    add r3, r3, #1\n    cmp r2, r5\n    blt _021EA67A\n    mov r0, ip\n    add r1, r0, #1\n    ldr r0, [sp]\n    mov ip, r1\n    cmp r1, r0\n    blt _021EA664\n    lsl r5, r6, #2\n    ldr r0, [sp, #0x28]\n    add r1, r6, r5\n    bl Heap_Alloc\n    mov r1, #0\n    add r2, r6, r5\n    str r0, [sp, #0x10]\n    bl MI_CpuFill8\n    mov r7, #0\n    add r6, r7, #0\n    mov r0, #1\n    tst r0, r4\n    beq _021EA6E4\n    lsl r0, r7, #2\n    add r1, r7, r0\n    ldr r0, [sp, #0x10]\n    strb r6, [r0, r1]\n    add r5, r0, r1\n    ldr r2, [sp, #4]\n    add r0, r5, #2\n    add r1, r6, #0\n    bl GetSafariObjectConfig\n    ldrb r1, [r5, #3]\n    lsl r0, r1, #0x1c\n    lsl r1, r1, #0x19\n    lsr r0, r0, #0x1d\n    lsr r1, r1, #0x1d\n    bl ov108_021EA700\n    strb r0, [r5, #1]\n    add r0, r7, #1\n    lsl r0, r0, #0x18\n    lsr r7, r0, #0x18\n    add r6, r6, #1\n    lsr r4, r4, #1\n    cmp r6, #0x18\n    blt _021EA6B4\n    ldr r0, [sp, #8]\n    strb r7, [r0]\n    ldr r0, [sp, #0x10]\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _021EA6F8: .word ov108_021EAD28\n    _021EA6FC: .word ov108_021EAD08"
    );
    #endif
}

void ov108_021EA700(void) {
    /* Original at 0x021EA700 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "cmp r0, #1\n    bne _021EA714\n    cmp r1, #1\n    beq _021EA70C\n    mov r0, #1\n    b _021EA70E\n    mov r0, #0\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bx lr\n    cmp r1, #1\n    bne _021EA71C\n    mov r0, #2\n    bx lr\n    mov r0, #3\n    bx lr"
    );
    #endif
}
