/* Decompiled from asm/frontier_map.s */
#include "global.h"

void FrontierMap_Init(void) {
    /* Original at 0x02238648 */
    /* Requires manual decompilation - 209 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    bl Frontier_GetLaunchArgs\n    add r4, r0, #0\n    ldr r0, [r4, #8]\n    bl Save_PlayerData_GetProfile\n    add r7, r0, #0\n    mov r0, #0\n    add r4, #0x20\n    add r1, r0, #0\n    ldrb r5, [r4]\n    bl Main_SetVBlankIntrCB\n    bl HBlankInterruptDisable\n    bl GfGfx_DisableEngineAPlanes\n    bl GfGfx_DisableEngineBPlanes\n    mov r1, #1\n    lsl r1, r1, #0x1a\n    ldr r0, [r1]\n    ldr r2, _02238828 ; =0xFFFFE0FF\n    and r0, r2\n    str r0, [r1]\n    ldr r0, _0223882C ; =0x04001000\n    ldr r3, [r0]\n    and r2, r3\n    str r2, [r0]\n    ldr r3, [r1]\n    ldr r2, _02238830 ; =0xFFFF1FFF\n    and r3, r2\n    str r3, [r1]\n    ldr r3, [r0]\n    add r1, #0x50\n    and r2, r3\n    str r2, [r0]\n    mov r2, #0\n    strh r2, [r1]\n    add r0, #0x50\n    strh r2, [r0]\n    ldr r2, _02238834 ; =0x04000304\n    ldrh r1, [r2]\n    lsr r0, r2, #0xb\n    orr r0, r1\n    strh r0, [r2]\n    mov r2, #9\n    mov r0, #3\n    mov r1, #0x65\n    lsl r2, r2, #0x10\n    bl Heap_Create\n    mov r0, #0x65\n    mov r1, #0xc4\n    bl Heap_Alloc\n    mov r1, #0\n    mov r2, #0xc4\n    add r4, r0, #0\n    bl MI_CpuFill8\n    add r0, r4, #0\n    str r6, [r4, #8]\n    add r0, #0xc1\n    ldr r1, _02238838 ; =0x0000FFFF\n    strb r5, [r0]\n    mov r2, #0\n    add r3, r4, #0\n    add r0, r3, #0\n    add r0, #0x70\n    add r2, r2, #1\n    add r3, r3, #2\n    strh r1, [r0]\n    cmp r2, #8\n    blt _022386D4\n    mov r0, #0x65\n    bl ov80_022392DC\n    str r0, [r4, #0xc]\n    mov r0, #0x65\n    bl PaletteData_Init\n    str r0, [r4, #4]\n    mov r1, #1\n    bl PaletteData_SetAutoTransparent\n    mov r2, #2\n    ldr r0, [r4, #4]\n    mov r1, #0\n    lsl r2, r2, #8\n    mov r3, #0x65\n    bl PaletteData_AllocBuffers\n    mov r1, #1\n    ldr r0, [r4, #4]\n    lsl r2, r1, #9\n    mov r3, #0x65\n    bl PaletteData_AllocBuffers\n    mov r2, #7\n    ldr r0, [r4, #4]\n    mov r1, #2\n    lsl r2, r2, #6\n    mov r3, #0x65\n    bl PaletteData_AllocBuffers\n    mov r2, #2\n    ldr r0, [r4, #4]\n    mov r1, #3\n    lsl r2, r2, #8\n    mov r3, #0x65\n    bl PaletteData_AllocBuffers\n    mov r0, #0x65\n    bl BgConfig_Alloc\n    str r0, [r4]\n    mov r0, #0x40\n    mov r1, #0x65\n    bl GF_CreateVramTransferManager\n    mov r0, #4\n    mov r1, #8\n    bl SetKeyRepeatTimers\n    ldr r0, [r4]\n    add r1, r5, #0\n    bl FrontierMap_SetVramBank\n    add r0, r4, #0\n    bl FrontierMap_LoadPaletteData\n    add r0, r4, #0\n    bl ov80_02238FA0\n    bl sub_020210BC\n    mov r0, #4\n    bl sub_02021148\n    add r0, r4, #0\n    bl ov80_02239384\n    mov r0, #0x65\n    bl ov80_02239960\n    str r0, [r4, #0x10]\n    add r0, r4, #0\n    add r1, r5, #0\n    add r2, r7, #0\n    bl ov80_02239004\n    ldr r0, _0223883C ; =ov80_02238AB0\n    ldr r2, _02238840 ; =0x0000EA60\n    add r1, r4, #0\n    bl SysTask_CreateOnMainQueue\n    add r1, r4, #0\n    add r1, #0x94\n    str r0, [r1]\n    ldr r0, _02238844 ; =ov80_02238ABC\n    ldr r2, _02238848 ; =0x0000EE48\n    add r1, r4, #0\n    bl SysTask_CreateOnMainQueue\n    add r1, r4, #0\n    add r1, #0x98\n    str r0, [r1]\n    ldr r0, _0223884C ; =FrontierMap_Update\n    ldr r2, _02238850 ; =0x00013880\n    add r1, r4, #0\n    bl SysTask_CreateOnMainQueue\n    add r1, r4, #0\n    add r1, #0x9c\n    str r0, [r1]\n    bl GfGfx_BothDispOn\n    mov r0, #0x10\n    mov r1, #1\n    bl GfGfx_EngineATogglePlanes\n    mov r0, #0x10\n    mov r1, #1\n    bl GfGfx_EngineBTogglePlanes\n    add r0, r5, #0\n    mov r1, #3\n    bl ov80_0222ACA0\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    bl Sound_SetFieldBGM\n    add r0, r5, #0\n    mov r1, #3\n    bl ov80_0222ACA0\n    add r1, r0, #0\n    lsl r1, r1, #0x10\n    mov r0, #0\n    lsr r1, r1, #0x10\n    bl sub_02055198\n    mov r0, #1\n    bl TextFlags_SetAutoScrollParam\n    mov r0, #0\n    bl TextFlags_SetCanABSpeedUpPrint\n    mov r0, #0\n    bl TextFlags_SetCanTouchSpeedUpPrint\n    ldr r0, _02238854 ; =FrontierMap_VBlank\n    add r1, r4, #0\n    bl Main_SetVBlankIntrCB\n    ldr r0, _02238858 ; =ov80_02238AAC\n    add r1, r4, #0\n    mov r2, #0xa\n    bl SysTask_CreateOnVBlankQueue\n    add r1, r4, #0\n    add r1, #0xa0\n    str r0, [r1]\n    add r2, r4, #0\n    add r2, #0xc1\n    add r1, r4, #0\n    ldrb r2, [r2]\n    add r0, r4, #0\n    add r1, #0x90\n    bl ov80_0222AD9C\n    bl sub_0203A880\n    add r0, r4, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02238828: .word 0xFFFFE0FF\n    _0223882C: .word 0x04001000\n    _02238830: .word 0xFFFF1FFF\n    _02238834: .word 0x04000304\n    _02238838: .word 0x0000FFFF\n    _0223883C: .word ov80_02238AB0\n    _02238840: .word 0x0000EA60\n    _02238844: .word ov80_02238ABC\n    _02238848: .word 0x0000EE48\n    _0223884C: .word FrontierMap_Update\n    _02238850: .word 0x00013880\n    _02238854: .word FrontierMap_VBlank\n    _02238858: .word ov80_02238AAC"
    );
    #endif
}

void FrontierMap_Free(void) {
    /* Original at 0x0223885C */
    /* Requires manual decompilation - 135 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #8]\n    bl Frontier_GetLaunchArgs\n    add r2, r4, #0\n    add r2, #0xc1\n    add r1, r4, #0\n    ldrb r2, [r2]\n    add r0, r4, #0\n    add r1, #0x90\n    bl ov80_0222ADB4\n    add r0, r4, #0\n    bl ov80_0223927C\n    mov r0, #1\n    mov r1, #0\n    bl GfGfx_EngineATogglePlanes\n    mov r0, #2\n    mov r1, #0\n    bl GfGfx_EngineATogglePlanes\n    ldr r0, [r4]\n    mov r1, #1\n    bl FreeBgTilemapBuffer\n    ldr r0, [r4]\n    mov r1, #2\n    bl FreeBgTilemapBuffer\n    ldr r0, [r4]\n    mov r1, #3\n    bl FreeBgTilemapBuffer\n    mov r0, #4\n    mov r1, #0\n    bl ToggleBgLayer\n    ldr r0, [r4]\n    mov r1, #4\n    bl FreeBgTilemapBuffer\n    add r0, r4, #0\n    bl ov80_022393E8\n    ldr r0, [r4, #0x10]\n    bl ov80_02239980\n    bl GF_DestroyVramTransferManager\n    ldr r0, [r4, #4]\n    mov r1, #0\n    bl PaletteData_FreeBuffers\n    ldr r0, [r4, #4]\n    mov r1, #1\n    bl PaletteData_FreeBuffers\n    ldr r0, [r4, #4]\n    mov r1, #2\n    bl PaletteData_FreeBuffers\n    ldr r0, [r4, #4]\n    mov r1, #3\n    bl PaletteData_FreeBuffers\n    ldr r0, [r4, #4]\n    bl PaletteData_Free\n    ldr r0, [r4]\n    bl Heap_Free\n    add r0, r4, #0\n    add r0, #0x94\n    ldr r0, [r0]\n    bl SysTask_Destroy\n    add r0, r4, #0\n    add r0, #0x98\n    ldr r0, [r0]\n    bl SysTask_Destroy\n    add r0, r4, #0\n    add r0, #0x9c\n    ldr r0, [r0]\n    bl SysTask_Destroy\n    add r0, r4, #0\n    add r0, #0xa0\n    ldr r0, [r0]\n    bl SysTask_Destroy\n    ldr r0, [r4, #0xc]\n    bl ov80_0223937C\n    bl sub_02021238\n    add r0, r4, #0\n    bl Heap_Free\n    mov r2, #1\n    lsl r2, r2, #0x1a\n    ldr r1, [r2]\n    ldr r0, _022389A4 ; =0xFFFF1FFF\n    and r1, r0\n    str r1, [r2]\n    ldr r2, _022389A8 ; =0x04001000\n    ldr r1, [r2]\n    and r0, r1\n    str r0, [r2]\n    mov r0, #0\n    add r1, r0, #0\n    bl Main_SetVBlankIntrCB\n    bl HBlankInterruptDisable\n    mov r0, #0x65\n    bl Heap_Destroy\n    mov r0, #0\n    bl TextFlags_SetCanABSpeedUpPrint\n    mov r0, #0\n    bl TextFlags_SetAutoScrollParam\n    mov r0, #0\n    bl TextFlags_SetCanTouchSpeedUpPrint\n    bl sub_0203A914\n    mov r1, #5\n    mov r2, #2\n    ldr r0, _022389AC ; =0x00007FFF\n    lsl r1, r1, #0x18\n    lsl r2, r2, #8\n    bl MIi_CpuClear16\n    mov r2, #2\n    ldr r0, _022389AC ; =0x00007FFF\n    ldr r1, _022389B0 ; =0x05000200\n    lsl r2, r2, #8\n    bl MIi_CpuClear16\n    mov r2, #2\n    ldr r0, _022389AC ; =0x00007FFF\n    ldr r1, _022389B4 ; =0x05000400\n    lsl r2, r2, #8\n    bl MIi_CpuClear16\n    mov r2, #2\n    ldr r0, _022389AC ; =0x00007FFF\n    ldr r1, _022389B8 ; =0x05000600\n    lsl r2, r2, #8\n    bl MIi_CpuClear16\n    ldr r0, _022389BC ; =0x04000050\n    mov r1, #0\n    strh r1, [r0]\n    ldr r0, _022389C0 ; =0x04001050\n    strh r1, [r0]\n    pop {r4, pc}\n    nop\n    _022389A4: .word 0xFFFF1FFF\n    _022389A8: .word 0x04001000\n    _022389AC: .word 0x00007FFF\n    _022389B0: .word 0x05000200\n    _022389B4: .word 0x05000400\n    _022389B8: .word 0x05000600\n    _022389BC: .word 0x04000050\n    _022389C0: .word 0x04001050"
    );
    #endif
}

void ov80_022389C4(void) {
    /* Original at 0x022389C4 */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    mov r5, #0\n    mov r7, #6\n    ldr r0, [r6, #8]\n    add r1, r5, #0\n    bl sub_0209686C\n    add r4, r0, #0\n    ldr r0, [r4]\n    cmp r0, #0\n    beq _02238A0A\n    add r1, r7, #0\n    bl ov42_02228188\n    strb r0, [r4, #0x12]\n    ldr r0, [r4]\n    mov r1, #5\n    bl ov42_02228188\n    strh r0, [r4, #0xa]\n    ldr r0, [r4]\n    mov r1, #0\n    bl ov42_02228188\n    strh r0, [r4, #0xe]\n    ldr r0, [r4]\n    mov r1, #1\n    bl ov42_02228188\n    strh r0, [r4, #0x10]\n    ldr r0, [r4, #4]\n    bl ov42_022291F4\n    strb r0, [r4, #0x13]\n    add r5, r5, #1\n    cmp r5, #0x20\n    blt _022389CC\n    add r0, r6, #0\n    bl ov80_02239740\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov80_02238A18(void) {
    /* Original at 0x02238A18 */
    /* Requires manual decompilation - 43 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x20\n    add r5, r0, #0\n    ldr r0, [r5, #8]\n    bl sub_02096864\n    ldr r7, _02238A78 ; =0x0000FFFF\n    add r4, r0, #0\n    mov r6, #0\n    ldrh r1, [r4]\n    cmp r1, r7\n    beq _02238A3A\n    ldrb r2, [r4, #2]\n    ldr r0, [r5, #0x20]\n    mov r3, #0x65\n    bl ov42_02228FE0\n    add r6, r6, #1\n    add r4, r4, #4\n    cmp r6, #0x18\n    blt _02238A2A\n    ldr r7, _02238A78 ; =0x0000FFFF\n    mov r4, #0\n    add r6, sp, #0\n    ldr r0, [r5, #8]\n    add r1, r4, #0\n    bl sub_0209686C\n    ldrh r1, [r0, #0xc]\n    cmp r1, r7\n    beq _02238A66\n    add r1, r6, #0\n    bl ov80_02239900\n    add r0, r5, #0\n    add r1, r6, #0\n    add r2, r4, #0\n    bl ov80_02239510\n    add r4, r4, #1\n    cmp r4, #0x20\n    blt _02238A48\n    add r0, r5, #0\n    bl ov80_02239828\n    add sp, #0x20\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02238A78: .word 0x0000FFFF"
    );
    #endif
}

void FrontierMap_VBlank(void) {
    /* Original at 0x02238A7C */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl GF_RunVramTransferTasks\n    bl SpriteSystem_TransferOam\n    ldr r0, [r4, #4]\n    bl PaletteData_PushTransparentBuffers\n    ldr r0, [r4]\n    bl DoScheduledBgGpuUpdates\n    ldr r3, _02238AA4 ; =0x027E0000\n    ldr r1, _02238AA8 ; =0x00003FF8\n    mov r0, #1\n    ldr r2, [r3, r1]\n    orr r0, r2\n    str r0, [r3, r1]\n    pop {r4, pc}\n    nop\n    _02238AA4: .word 0x027E0000\n    _02238AA8: .word 0x00003FF8"
    );
    #endif
}

void ov80_02238AAC(void) {
    /* Original at 0x02238AAC */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void ov80_02238AB0(void) {
    ov42_0222807C();
}

void ov80_02238ABC(void) {
    ov80_02238C78();
}

void FrontierMap_Update(void) {
    /* Original at 0x02238AC8 */
    /* Requires manual decompilation - 38 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r1, #0\n    ldr r0, [r7, #8]\n    mov r1, #0x1f\n    bl sub_0209686C\n    ldr r1, [r0]\n    cmp r1, #0\n    beq _02238AE2\n    add r0, r7, #0\n    add r0, #0x1c\n    bl ov42_02229358\n    add r0, r7, #0\n    bl FrontierMap_Scroll\n    ldr r0, [r7, #0x20]\n    bl ov42_022290DC\n    ldr r4, [r7, #0x6c]\n    mov r6, #0\n    add r5, r7, #0\n    ldr r0, [r5, #0x3c]\n    cmp r0, #0\n    beq _02238B04\n    mov r1, #1\n    tst r1, r4\n    beq _02238B04\n    bl ManagedSprite_TickFrame\n    add r6, r6, #1\n    lsr r4, r4, #1\n    add r5, r5, #4\n    cmp r6, #8\n    blt _02238AF4\n    ldr r0, [r7, #0x38]\n    bl SpriteSystem_DrawSprites\n    bl SpriteSystem_UpdateTransfer\n    bl ov80_02239A38\n    mov r0, #1\n    mov r1, #0\n    bl RequestSwap3DBuffers\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void FrontierMap_Scroll(void) {
    /* Original at 0x02238B28 */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #8]\n    bl Frontier_GetLaunchArgs\n    add r4, r0, #0\n    add r0, #0x20\n    ldrb r0, [r0]\n    mov r1, #0xc\n    bl ov80_0222ACA0\n    cmp r0, #0\n    beq _02238B46\n    cmp r0, #1\n    beq _02238B74\n    ldr r0, [r5, #0x24]\n    cmp r0, #0\n    beq _02238B54\n    add r1, r5, #0\n    add r1, #0x1c\n    bl ov42_02229420\n    ldr r0, [r5, #0x28]\n    cmp r0, #0\n    beq _02238B7A\n    add r4, #0x20\n    ldrb r0, [r4]\n    mov r1, #0xd\n    bl ov80_0222ACA0\n    cmp r0, #1\n    bne _02238B7A\n    ldr r0, [r5, #0x28]\n    add r5, #0x1c\n    add r1, r5, #0\n    bl ov42_02229420\n    pop {r3, r4, r5, pc}\n    add r0, r5, #0\n    bl ov80_02238B7C\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov80_02238B7C(void) {
    /* Original at 0x02238B7C */
    /* Requires manual decompilation - 104 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    ldr r0, [r5, #8]\n    bl Frontier_GetLaunchArgs\n    add r7, r0, #0\n    add r0, r5, #0\n    add r0, #0x1c\n    bl ov42_022293A8\n    mov r1, #0xaa\n    ldrsh r1, [r5, r1]\n    add r0, r1, r0\n    lsl r0, r0, #0x10\n    asr r4, r0, #0x10\n    add r0, r5, #0\n    add r0, #0x1c\n    bl ov42_022293B0\n    mov r1, #0xa8\n    ldrsh r1, [r5, r1]\n    add r0, r1, r0\n    lsl r0, r0, #0x10\n    asr r6, r0, #0x10\n    cmp r4, #0\n    ble _02238BC6\n    lsl r0, r4, #0xc\n    bl _fflt\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    str r0, [sp, #4]\n    b _02238BD6\n    lsl r0, r4, #0xc\n    bl _fflt\n    mov r1, #0x3f\n    lsl r1, r1, #0x18\n    bl _fsub\n    str r0, [sp, #4]\n    cmp r6, #0\n    ble _02238BEE\n    lsl r0, r6, #0xc\n    bl _fflt\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    str r0, [sp]\n    b _02238BFE\n    lsl r0, r6, #0xc\n    bl _fflt\n    mov r1, #0x3f\n    lsl r1, r1, #0x18\n    bl _fsub\n    str r0, [sp]\n    ldr r0, [r5, #0x34]\n    bl SpriteSystem_GetRenderer\n    str r0, [sp, #8]\n    ldr r0, [sp]\n    bl _ffix\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #4]\n    bl _ffix\n    add r2, r0, #0\n    ldr r0, [sp, #8]\n    ldr r1, [sp, #0xc]\n    bl G2dRenderer_SetMainSurfaceCoords\n    ldr r0, [r5]\n    mov r1, #3\n    mov r2, #0\n    add r3, r6, #0\n    bl ScheduleSetBgPosText\n    mov r1, #3\n    ldr r0, [r5]\n    add r2, r1, #0\n    add r3, r4, #0\n    bl ScheduleSetBgPosText\n    add r0, r7, #0\n    add r0, #0x20\n    ldrb r0, [r0]\n    mov r1, #9\n    bl ov80_0222ACA0\n    ldr r1, _02238C74 ; =0x0000FFFF\n    cmp r0, r1\n    beq _02238C6E\n    add r7, #0x20\n    ldrb r0, [r7]\n    mov r1, #0xd\n    bl ov80_0222ACA0\n    cmp r0, #1\n    bne _02238C6E\n    ldr r0, [r5]\n    mov r1, #2\n    mov r2, #0\n    add r3, r6, #0\n    bl ScheduleSetBgPosText\n    ldr r0, [r5]\n    mov r1, #2\n    mov r2, #3\n    add r3, r4, #0\n    bl ScheduleSetBgPosText\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02238C74: .word 0x0000FFFF"
    );
    #endif
}

void ov80_02238C78(void) {
    /* Original at 0x02238C78 */
    /* Requires manual decompilation - 41 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    ldr r0, [r5, #0x30]\n    add r1, sp, #0\n    bl ov42_02229A08\n    cmp r0, #1\n    bne _02238CA0\n    add r4, sp, #0\n    ldr r0, [r5, #0x14]\n    add r1, r4, #0\n    bl ov42_02228068\n    ldr r0, [r5, #0x30]\n    add r1, r4, #0\n    bl ov42_02229A08\n    cmp r0, #1\n    beq _02238C8C\n    ldr r0, [r5, #0x2c]\n    add r1, sp, #8\n    bl ov42_02229AC8\n    cmp r0, #1\n    bne _02238CD4\n    add r6, sp, #0\n    add r4, sp, #8\n    ldr r0, [r5, #0x18]\n    ldr r1, [r5, #0x14]\n    add r2, r4, #0\n    add r3, r6, #0\n    bl ov42_02228C80\n    cmp r0, #1\n    bne _02238CC8\n    ldr r0, [r5, #0x14]\n    add r1, r6, #0\n    bl ov42_02228068\n    ldr r0, [r5, #0x2c]\n    add r1, r4, #0\n    bl ov42_02229AC8\n    cmp r0, #1\n    beq _02238CB0\n    add sp, #0xc\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void FrontierMap_SetVramBank(void) {
    /* Original at 0x02238CD8 */
    /* Requires manual decompilation - 239 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0xa8\n    add r7, r1, #0\n    add r5, r0, #0\n    add r0, r7, #0\n    mov r1, #0\n    bl ov80_0222ACA0\n    add r4, r0, #0\n    bl GfGfx_DisableEngineAPlanes\n    ldr r6, _02238EF8 ; =ov80_0223D5D8\n    add r3, sp, #0x2c\n    mov r2, #5\n    ldmia r6!, {r0, r1}\n    stmia r3!, {r0, r1}\n    sub r2, r2, #1\n    bne _02238CF4\n    add r0, sp, #0x2c\n    bl GfGfx_SetBanks\n    mov r1, #6\n    mov r2, #2\n    mov r0, #0\n    lsl r1, r1, #0x18\n    lsl r2, r2, #0x12\n    bl MIi_CpuClear32\n    mov r1, #0x62\n    mov r2, #2\n    mov r0, #0\n    lsl r1, r1, #0x14\n    lsl r2, r2, #0x10\n    bl MIi_CpuClear32\n    mov r1, #0x19\n    mov r2, #1\n    mov r0, #0\n    lsl r1, r1, #0x16\n    lsl r2, r2, #0x12\n    bl MIi_CpuClear32\n    mov r1, #0x66\n    mov r2, #2\n    mov r0, #0\n    lsl r1, r1, #0x14\n    lsl r2, r2, #0x10\n    bl MIi_CpuClear32\n    ldr r6, _02238EFC ; =ov80_0223D560\n    add r3, sp, #0x1c\n    add r2, r3, #0\n    ldmia r6!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r6!, {r0, r1}\n    stmia r3!, {r0, r1}\n    add r0, r2, #0\n    str r4, [sp, #0x20]\n    bl SetBothScreensModesAndDisable\n    ldr r6, _02238F00 ; =ov80_0223D600\n    add r3, sp, #0x54\n    mov r2, #0xa\n    ldmia r6!, {r0, r1}\n    stmia r3!, {r0, r1}\n    sub r2, r2, #1\n    bne _02238D56\n    ldr r0, [r6]\n    cmp r4, #0\n    str r0, [r3]\n    bne _02238D74\n    mov r2, #0\n    add r1, sp, #0x74\n    strb r2, [r1, #0xd]\n    add r0, sp, #0x94\n    strb r2, [r0, #9]\n    strb r2, [r1, #0x10]\n    strb r2, [r0, #0xc]\n    add r0, r7, #0\n    mov r1, #4\n    bl ov80_0222ACA0\n    lsl r0, r0, #0x10\n    lsr r6, r0, #0x10\n    add r0, sp, #0x94\n    strb r6, [r0, #8]\n    add r0, r7, #0\n    mov r1, #9\n    bl ov80_0222ACA0\n    ldr r1, _02238F04 ; =0x0000FFFF\n    cmp r0, r1\n    beq _02238D96\n    add r0, sp, #0x74\n    strb r6, [r0, #0xc]\n    cmp r4, #0\n    add r2, sp, #0x54\n    bne _02238E20\n    add r0, r5, #0\n    mov r1, #1\n    mov r3, #0\n    bl InitBgFromTemplate\n    add r0, r5, #0\n    mov r1, #1\n    bl BgClearTilemapBufferAndCommit\n    mov r2, #0\n    add r0, r5, #0\n    mov r1, #1\n    add r3, r2, #0\n    bl BgSetPosTextAndCommit\n    add r0, r5, #0\n    mov r1, #1\n    mov r2, #3\n    mov r3, #0\n    bl BgSetPosTextAndCommit\n    add r0, r5, #0\n    mov r1, #2\n    add r2, sp, #0x70\n    mov r3, #0\n    bl InitBgFromTemplate\n    add r0, r5, #0\n    mov r1, #2\n    bl BgClearTilemapBufferAndCommit\n    mov r2, #0\n    add r0, r5, #0\n    mov r1, #2\n    add r3, r2, #0\n    bl BgSetPosTextAndCommit\n    add r0, r5, #0\n    mov r1, #2\n    mov r2, #3\n    mov r3, #0\n    bl BgSetPosTextAndCommit\n    add r0, r5, #0\n    mov r1, #3\n    add r2, sp, #0x8c\n    mov r3, #0\n    bl InitBgFromTemplate\n    add r0, r5, #0\n    mov r1, #3\n    bl BgClearTilemapBufferAndCommit\n    mov r2, #0\n    add r0, r5, #0\n    mov r1, #3\n    add r3, r2, #0\n    bl BgSetPosTextAndCommit\n    mov r1, #3\n    add r0, r5, #0\n    add r2, r1, #0\n    mov r3, #0\n    bl BgSetPosTextAndCommit\n    b _02238EA2\n    add r0, r5, #0\n    mov r1, #1\n    mov r3, #0\n    bl InitBgFromTemplate\n    add r0, r5, #0\n    mov r1, #1\n    bl BgClearTilemapBufferAndCommit\n    mov r2, #0\n    add r0, r5, #0\n    mov r1, #1\n    add r3, r2, #0\n    bl BgSetPosTextAndCommit\n    add r0, r5, #0\n    mov r1, #1\n    mov r2, #3\n    mov r3, #0\n    bl BgSetPosTextAndCommit\n    mov r1, #2\n    add r0, r5, #0\n    add r2, sp, #0x70\n    add r3, r1, #0\n    bl InitBgFromTemplate\n    add r0, r5, #0\n    mov r1, #2\n    bl BgClearTilemapBufferAndCommit\n    mov r2, #0\n    add r0, r5, #0\n    mov r1, #2\n    add r3, r2, #0\n    bl BgSetPosTextAndCommit\n    add r0, r5, #0\n    mov r1, #2\n    mov r2, #3\n    mov r3, #0\n    bl BgSetPosTextAndCommit\n    add r0, r5, #0\n    mov r1, #3\n    add r2, sp, #0x8c\n    mov r3, #2\n    bl InitBgFromTemplate\n    add r0, r5, #0\n    mov r1, #3\n    bl BgClearTilemapBufferAndCommit\n    mov r2, #0\n    add r0, r5, #0\n    mov r1, #3\n    add r3, r2, #0\n    bl BgSetPosTextAndCommit\n    mov r1, #3\n    add r0, r5, #0\n    add r2, r1, #0\n    mov r3, #0\n    bl BgSetPosTextAndCommit\n    ldr r1, _02238F08 ; =0x04000008\n    mov r0, #3\n    ldrh r2, [r1]\n    bic r2, r0\n    mov r0, #1\n    strh r2, [r1]\n    add r1, r0, #0\n    bl GfGfx_EngineATogglePlanes\n    ldr r4, _02238F0C ; =ov80_0223D59C\n    add r3, sp, #0\n    ldmia r4!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r4!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r4!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r4]\n    mov r1, #4\n    str r0, [r3]\n    add r0, r5, #0\n    mov r3, #0\n    bl InitBgFromTemplate\n    add r0, r5, #0\n    mov r1, #4\n    bl BgClearTilemapBufferAndCommit\n    mov r2, #0\n    add r0, r5, #0\n    mov r1, #4\n    add r3, r2, #0\n    bl BgSetPosTextAndCommit\n    add r0, r5, #0\n    mov r1, #4\n    mov r2, #3\n    mov r3, #0\n    bl BgSetPosTextAndCommit\n    add sp, #0xa8\n    pop {r3, r4, r5, r6, r7, pc}\n    _02238EF8: .word ov80_0223D5D8\n    _02238EFC: .word ov80_0223D560\n    _02238F00: .word ov80_0223D600\n    _02238F04: .word 0x0000FFFF\n    _02238F08: .word 0x04000008\n    _02238F0C: .word ov80_0223D59C"
    );
    #endif
}

void FrontierMap_LoadPaletteData(void) {
    /* Original at 0x02238F10 */
    /* Requires manual decompilation - 62 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    mov r0, #0xe0\n    str r0, [sp, #8]\n    ldr r0, [r4, #4]\n    mov r1, #0x10\n    mov r2, #7\n    mov r3, #0x65\n    bl PaletteData_LoadNarc\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    mov r0, #0xd0\n    str r0, [sp, #8]\n    ldr r0, [r4, #4]\n    mov r1, #0x10\n    mov r2, #8\n    mov r3, #0x65\n    bl PaletteData_LoadNarc\n    ldr r0, [r4, #8]\n    bl Frontier_GetLaunchArgs\n    ldr r0, [r0, #4]\n    bl Options_GetFrame\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #0x65\n    str r0, [sp, #4]\n    ldr r0, [r4]\n    ldr r2, _02238F98 ; =0x000003E2\n    mov r1, #1\n    mov r3, #0xb\n    bl LoadUserFrameGfx2\n    ldr r0, [r4, #4]\n    mov r1, #0\n    mov r2, #0xb0\n    mov r3, #0x20\n    bl PaletteData_LoadPaletteSlotFromHardware\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #0x65\n    str r0, [sp, #4]\n    ldr r0, [r4]\n    ldr r2, _02238F9C ; =0x000003D9\n    mov r1, #1\n    mov r3, #0xc\n    bl LoadUserFrameGfx1\n    ldr r0, [r4, #4]\n    mov r1, #0\n    mov r2, #0xc0\n    mov r3, #0x20\n    bl PaletteData_LoadPaletteSlotFromHardware\n    add sp, #0xc\n    pop {r3, r4, pc}\n    _02238F98: .word 0x000003E2\n    _02238F9C: .word 0x000003D9"
    );
    #endif
}

void ov80_02238FA0(void) {
    /* Original at 0x02238FA0 */
    /* Requires manual decompilation - 45 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    mov r0, #0xb7\n    mov r1, #0x65\n    bl NARC_New\n    mov r1, #0\n    str r1, [sp]\n    str r1, [sp, #4]\n    mov r1, #1\n    str r1, [sp, #8]\n    mov r1, #0x65\n    str r1, [sp, #0xc]\n    ldr r2, [r5]\n    mov r1, #0x81\n    mov r3, #4\n    add r4, r0, #0\n    bl GfGfxLoader_LoadCharDataFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #0x65\n    str r0, [sp, #0xc]\n    ldr r2, [r5]\n    add r0, r4, #0\n    mov r1, #0x82\n    mov r3, #4\n    bl GfGfxLoader_LoadScrnDataFromOpenNarc\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    mov r0, #0\n    str r0, [sp, #8]\n    ldr r0, [r5, #4]\n    mov r1, #0xb7\n    mov r2, #0xbe\n    mov r3, #0x65\n    bl PaletteData_LoadNarc\n    add r0, r4, #0\n    bl NARC_Delete\n    add sp, #0x10\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov80_02239004(void) {
    /* Original at 0x02239004 */
    /* Requires manual decompilation - 264 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x2c\n    add r5, r0, #0\n    add r4, r1, #0\n    mov r0, #0x20\n    mov r1, #0x65\n    add r6, r2, #0\n    bl ov42_02228010\n    str r0, [r5, #0x14]\n    mov r0, #0x10\n    add r1, r0, #0\n    mov r2, #0x65\n    bl ov42_02227EE0\n    str r0, [r5, #0x18]\n    add r0, r5, #0\n    add r0, #0x1c\n    bl ov42_02229394\n    ldr r0, [r5, #0x38]\n    bl SpriteManager_GetSpriteList\n    add r7, r0, #0\n    add r0, r6, #0\n    bl ov80_0222A7EC\n    add r3, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #0x65\n    str r0, [sp, #8]\n    ldr r1, [r5, #4]\n    add r0, r7, #0\n    mov r2, #0x20\n    bl ov42_02228F24\n    ldr r3, _02239270 ; =ov80_0223D554\n    str r0, [r5, #0x20]\n    add r2, sp, #0x20\n    mov r1, #0xb\n    ldrb r0, [r3]\n    add r3, r3, #1\n    strb r0, [r2]\n    add r2, r2, #1\n    sub r1, r1, #1\n    bne _0223905A\n    add r0, r4, #0\n    mov r1, #5\n    bl ov80_0222ACA0\n    add r1, sp, #0x18\n    strb r0, [r1, #0x10]\n    add r0, r4, #0\n    mov r1, #6\n    bl ov80_0222ACA0\n    add r1, sp, #0x18\n    strb r0, [r1, #0x11]\n    add r0, r4, #0\n    mov r1, #0xc\n    bl ov80_0222ACA0\n    add r6, r0, #0\n    bne _0223909C\n    ldr r0, [r5, #0x34]\n    bl SpriteSystem_GetRenderer\n    ldr r1, [r5]\n    add r2, sp, #0x20\n    mov r3, #0x65\n    bl ov42_022293B8\n    str r0, [r5, #0x24]\n    add r0, r4, #0\n    mov r1, #9\n    bl ov80_0222ACA0\n    ldr r1, _02239274 ; =0x0000FFFF\n    cmp r0, r1\n    beq _022390DA\n    add r0, r4, #0\n    mov r1, #9\n    bl ov80_0222ACA0\n    add r1, sp, #0x18\n    strb r0, [r1, #0x11]\n    mov r0, #2\n    strb r0, [r1, #9]\n    mov r2, #1\n    mov r0, #8\n    strb r2, [r1, #0xb]\n    strb r0, [r1, #0xc]\n    strb r2, [r1, #0xe]\n    cmp r6, #0\n    bne _022390DA\n    ldr r0, [r5, #0x34]\n    bl SpriteSystem_GetRenderer\n    ldr r1, [r5]\n    add r2, sp, #0x20\n    mov r3, #0x65\n    bl ov42_022293B8\n    str r0, [r5, #0x28]\n    mov r0, #0x80\n    mov r1, #0x65\n    bl ov42_02229A40\n    str r0, [r5, #0x2c]\n    mov r0, #0x80\n    mov r1, #0x65\n    bl ov42_02229974\n    str r0, [r5, #0x30]\n    ldr r0, [r5, #0x18]\n    ldr r1, _02239278 ; =ov80_0223D654\n    bl ov42_02227F48\n    add r0, r4, #0\n    mov r1, #0\n    bl ov80_0222ACA0\n    add r7, r0, #0\n    add r0, r4, #0\n    mov r1, #5\n    bl ov80_0222ACA0\n    mov r1, #0x65\n    str r0, [sp, #0x10]\n    bl NARC_New\n    add r6, r0, #0\n    add r0, r4, #0\n    mov r1, #7\n    bl ov80_0222ACA0\n    add r1, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #0x65\n    str r0, [sp, #0xc]\n    ldr r2, [r5]\n    add r0, r6, #0\n    mov r3, #3\n    bl GfGfxLoader_LoadCharDataFromOpenNarc\n    cmp r7, #0\n    bne _0223915A\n    add r0, r4, #0\n    mov r1, #8\n    bl ov80_0222ACA0\n    add r2, r0, #0\n    mov r1, #0\n    mov r0, #0x16\n    str r1, [sp]\n    lsl r0, r0, #4\n    str r0, [sp, #4]\n    str r1, [sp, #8]\n    ldr r0, [r5, #4]\n    ldr r1, [sp, #0x10]\n    mov r3, #0x65\n    bl PaletteData_LoadNarc\n    b _02239198\n    add r0, r4, #0\n    mov r1, #8\n    bl ov80_0222ACA0\n    add r1, r0, #0\n    add r0, r6, #0\n    add r2, sp, #0x1c\n    mov r3, #0x65\n    bl GfGfxLoader_GetPlttDataFromOpenNarc\n    ldr r1, [sp, #0x1c]\n    str r0, [sp, #0x14]\n    ldr r0, [r1, #0xc]\n    ldr r1, [r1, #8]\n    bl DC_FlushRange\n    bl GX_BeginLoadBGExtPltt\n    ldr r0, [sp, #0x1c]\n    mov r1, #6\n    mov r2, #2\n    ldr r0, [r0, #0xc]\n    lsl r1, r1, #0xc\n    lsl r2, r2, #0xc\n    bl GX_LoadBGExtPltt\n    bl GX_EndLoadBGExtPltt\n    ldr r0, [sp, #0x14]\n    bl Heap_Free\n    mov r1, #0\n    str r1, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r0, [r5, #4]\n    mov r2, #2\n    add r3, r1, #0\n    bl PaletteData_FillPaletteInBuffer\n    add r0, r4, #0\n    mov r1, #6\n    bl ov80_0222ACA0\n    add r1, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #0x65\n    str r0, [sp, #0xc]\n    ldr r2, [r5]\n    add r0, r6, #0\n    mov r3, #3\n    bl GfGfxLoader_LoadScrnDataFromOpenNarc\n    add r0, r4, #0\n    mov r1, #9\n    bl ov80_0222ACA0\n    ldr r1, _02239274 ; =0x0000FFFF\n    cmp r0, r1\n    beq _0223925E\n    add r0, r4, #0\n    mov r1, #0xa\n    bl ov80_0222ACA0\n    add r1, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #0x65\n    str r0, [sp, #0xc]\n    ldr r2, [r5]\n    add r0, r6, #0\n    mov r3, #2\n    bl GfGfxLoader_LoadCharDataFromOpenNarc\n    add r0, r4, #0\n    mov r1, #9\n    bl ov80_0222ACA0\n    add r1, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #0x65\n    str r0, [sp, #0xc]\n    ldr r2, [r5]\n    add r0, r6, #0\n    mov r3, #2\n    bl GfGfxLoader_LoadScrnDataFromOpenNarc\n    cmp r7, #0\n    beq _0223925E\n    add r0, r4, #0\n    mov r1, #0xb\n    bl ov80_0222ACA0\n    add r1, r0, #0\n    add r0, r6, #0\n    add r2, sp, #0x18\n    mov r3, #0x65\n    bl GfGfxLoader_GetPlttDataFromOpenNarc\n    ldr r1, [sp, #0x18]\n    add r4, r0, #0\n    ldr r0, [r1, #0xc]\n    ldr r1, [r1, #8]\n    bl DC_FlushRange\n    bl GX_BeginLoadBGExtPltt\n    ldr r0, [sp, #0x18]\n    mov r1, #1\n    lsl r1, r1, #0xe\n    ldr r0, [r0, #0xc]\n    lsr r2, r1, #1\n    bl GX_LoadBGExtPltt\n    bl GX_EndLoadBGExtPltt\n    add r0, r4, #0\n    bl Heap_Free\n    ldr r0, [r5]\n    mov r1, #3\n    bl ScheduleBgTilemapBufferTransfer\n    add r0, r6, #0\n    bl NARC_Delete\n    add sp, #0x2c\n    pop {r4, r5, r6, r7, pc}\n    _02239270: .word ov80_0223D554\n    _02239274: .word 0x0000FFFF\n    _02239278: .word ov80_0223D654"
    );
    #endif
}

void ov80_0223927C(void) {
    /* Original at 0x0223927C */
    /* Requires manual decompilation - 37 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r0, #0\n    ldr r0, [r6, #8]\n    bl sub_02096868\n    add r5, r0, #0\n    mov r4, #0\n    ldr r0, [r5]\n    cmp r0, #0\n    beq _0223929E\n    bl ov42_02228100\n    ldr r0, [r5, #0x38]\n    cmp r0, #0\n    beq _0223929E\n    bl GF_AssertFail\n    add r4, r4, #1\n    add r5, #0x3c\n    cmp r4, #0x20\n    blt _0223928A\n    ldr r0, [r6, #0x14]\n    bl ov42_02228050\n    ldr r0, [r6, #0x18]\n    bl ov42_02227F28\n    ldr r0, [r6, #0x20]\n    bl ov42_02228F94\n    ldr r0, [r6, #0x24]\n    cmp r0, #0\n    beq _022392C2\n    bl ov42_0222940C\n    ldr r0, [r6, #0x28]\n    cmp r0, #0\n    beq _022392CC\n    bl ov42_0222940C\n    ldr r0, [r6, #0x2c]\n    bl ov42_02229A78\n    ldr r0, [r6, #0x30]\n    bl ov42_022299AC\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov80_022392DC(void) {
    GF_3DVramMan_Create(0, 1);
}

void ov80_022392F8(void) {
    /* Original at 0x022392F8 */
    /* Requires manual decompilation - 57 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    mov r0, #1\n    add r1, r0, #0\n    bl GfGfx_EngineATogglePlanes\n    ldr r0, _02239364 ; =0x04000008\n    mov r1, #3\n    ldrh r2, [r0]\n    bic r2, r1\n    mov r1, #1\n    orr r1, r2\n    strh r1, [r0]\n    add r0, #0x58\n    ldrh r2, [r0]\n    ldr r1, _02239368 ; =0xFFFFCFFD\n    and r2, r1\n    strh r2, [r0]\n    add r2, r1, #2\n    ldrh r3, [r0]\n    add r1, r1, #2\n    and r3, r2\n    mov r2, #0x10\n    orr r2, r3\n    strh r2, [r0]\n    ldrh r3, [r0]\n    ldr r2, _0223936C ; =0x0000CFFB\n    and r3, r2\n    strh r3, [r0]\n    ldrh r3, [r0]\n    sub r2, #0x1c\n    and r3, r1\n    mov r1, #8\n    orr r1, r3\n    strh r1, [r0]\n    ldrh r1, [r0]\n    and r1, r2\n    strh r1, [r0]\n    mov r0, #0\n    add r1, r0, #0\n    add r2, r0, #0\n    add r3, r0, #0\n    bl G3X_SetFog\n    mov r0, #0\n    ldr r2, _02239370 ; =0x00007FFF\n    add r1, r0, #0\n    mov r3, #0x3f\n    str r0, [sp]\n    bl G3X_SetClearColor\n    ldr r1, _02239374 ; =0xBFFF0000\n    ldr r0, _02239378 ; =0x04000580\n    str r1, [r0]\n    pop {r3, pc}\n    _02239364: .word 0x04000008\n    _02239368: .word 0xFFFFCFFD\n    _0223936C: .word 0x0000CFFB\n    _02239370: .word 0x00007FFF\n    _02239374: .word 0xBFFF0000\n    _02239378: .word 0x04000580"
    );
    #endif
}

void ov80_0223937C(void) {
    GF_3DVramMan_Delete();
}

void ov80_02239384(void) {
    /* Original at 0x02239384 */
    /* Requires manual decompilation - 37 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0x65\n    bl SpriteSystem_Alloc\n    ldr r1, _022393D8 ; =ov80_0223D5B8\n    ldr r2, _022393DC ; =ov80_0223D570\n    mov r3, #0x20\n    str r0, [r4, #0x34]\n    bl SpriteSystem_Init\n    ldr r1, _022393E0 ; =0x00200010\n    mov r0, #1\n    bl G2dRenderer_SetObjCharTransferReservedRegion\n    mov r0, #1\n    bl G2dRenderer_SetPlttTransferReservedRegion\n    ldr r0, [r4, #0x34]\n    bl SpriteManager_New\n    str r0, [r4, #0x38]\n    ldr r0, [r4, #0x34]\n    ldr r1, [r4, #0x38]\n    mov r2, #0x80\n    bl SpriteSystem_InitSprites\n    ldr r0, [r4, #0x34]\n    ldr r1, [r4, #0x38]\n    ldr r2, _022393E4 ; =ov80_0223D584\n    bl SpriteSystem_InitManagerWithCapacities\n    ldr r0, [r4, #0x34]\n    bl SpriteSystem_GetRenderer\n    mov r2, #2\n    mov r1, #0\n    lsl r2, r2, #0x14\n    bl G2dRenderer_SetSubSurfaceCoords\n    pop {r4, pc}\n    nop\n    _022393D8: .word ov80_0223D5B8\n    _022393DC: .word ov80_0223D570\n    _022393E0: .word 0x00200010\n    _022393E4: .word ov80_0223D584"
    );
    #endif
}

void ov80_022393E8(void) {
    /* Original at 0x022393E8 */
    /* Requires manual decompilation - 63 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    mov r6, #0\n    add r4, r5, #0\n    ldr r0, [r4, #0x3c]\n    cmp r0, #0\n    beq _022393FA\n    bl ov80_02239BE8\n    add r6, r6, #1\n    add r4, r4, #4\n    cmp r6, #8\n    blt _022393F0\n    ldr r7, _02239474 ; =0x0000FFFF\n    mov r6, #0\n    add r4, r5, #0\n    add r0, r4, #0\n    add r0, #0x70\n    ldrh r1, [r0]\n    cmp r1, r7\n    beq _02239418\n    ldr r0, [r5, #0x38]\n    bl ov80_02239B7C\n    add r6, r6, #1\n    add r4, r4, #2\n    cmp r6, #8\n    blt _02239408\n    ldr r7, _02239478 ; =0x0000C350\n    mov r4, #0\n    add r6, r5, #0\n    add r0, r6, #0\n    add r0, #0x80\n    ldr r0, [r0]\n    cmp r0, #0\n    beq _0223945A\n    bl Sprite_DeleteAndFreeResources\n    ldr r1, _02239478 ; =0x0000C350\n    ldr r0, [r5, #0x38]\n    add r1, r4, r1\n    bl SpriteManager_UnloadCharObjById\n    ldr r1, _02239478 ; =0x0000C350\n    ldr r0, [r5, #0x38]\n    add r1, r4, r1\n    bl SpriteManager_UnloadPlttObjById\n    ldr r1, _02239478 ; =0x0000C350\n    ldr r0, [r5, #0x38]\n    add r1, r4, r1\n    bl SpriteManager_UnloadCellObjById\n    ldr r0, [r5, #0x38]\n    add r1, r4, r7\n    bl SpriteManager_UnloadAnimObjById\n    add r4, r4, #1\n    add r6, r6, #4\n    cmp r4, #4\n    blt _02239426\n    ldr r0, [r5, #0x34]\n    ldr r1, [r5, #0x38]\n    bl SpriteSystem_FreeResourcesAndManager\n    ldr r0, [r5, #0x34]\n    bl SpriteSystem_Free\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02239474: .word 0x0000FFFF\n    _02239478: .word 0x0000C350"
    );
    #endif
}

void ov80_0223947C(void) {
    /* Original at 0x0223947C */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    ldr r0, [r6, #8]\n    add r5, r1, #0\n    bl sub_02096864\n    add r7, r0, #0\n    ldrh r3, [r5]\n    mov r1, #0\n    add r2, r7, #0\n    ldrh r0, [r2]\n    cmp r3, r0\n    beq _022394D2\n    add r1, r1, #1\n    add r2, r2, #4\n    cmp r1, #0x18\n    blt _02239490\n    ldr r0, _022394D4 ; =0x0000FFFF\n    mov r4, #0\n    add r2, r7, #0\n    ldrh r1, [r2]\n    cmp r1, r0\n    beq _022394B2\n    add r4, r4, #1\n    add r2, r2, #4\n    cmp r4, #0x18\n    blt _022394A4\n    cmp r4, #0x18\n    bne _022394BA\n    bl GF_AssertFail\n    ldrh r0, [r5]\n    lsl r2, r4, #2\n    add r1, r7, r2\n    strh r0, [r7, r2]\n    ldrh r0, [r5, #2]\n    mov r3, #0x65\n    strh r0, [r1, #2]\n    ldrh r1, [r5]\n    ldrb r2, [r5, #2]\n    ldr r0, [r6, #0x20]\n    bl ov42_02228FE0\n    pop {r3, r4, r5, r6, r7, pc}\n    _022394D4: .word 0x0000FFFF"
    );
    #endif
}

void ov80_022394D8(void) {
    /* Original at 0x022394D8 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    ldr r0, [r6, #8]\n    add r5, r1, #0\n    bl sub_02096864\n    add r7, r0, #0\n    mov r4, #0\n    add r1, r7, #0\n    ldrh r0, [r1]\n    cmp r5, r0\n    bne _02239500\n    ldr r0, [r6, #0x20]\n    add r1, r5, #0\n    bl ov42_02229004\n    ldr r1, _0223950C ; =0x0000FFFF\n    lsl r0, r4, #2\n    strh r1, [r7, r0]\n    pop {r3, r4, r5, r6, r7, pc}\n    add r4, r4, #1\n    add r1, r1, #4\n    cmp r4, #0x18\n    blt _022394EA\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0223950C: .word 0x0000FFFF"
    );
    #endif
}

void ov80_02239510(void) {
    /* Original at 0x02239510 */
    /* Requires manual decompilation - 58 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r6, r0, #0\n    ldr r0, [r6, #8]\n    add r5, r1, #0\n    add r4, r2, #0\n    bl sub_02096868\n    mov r1, #0\n    mvn r1, r1\n    cmp r4, r1\n    bne _02239540\n    mov r4, #0\n    ldr r1, [r0]\n    cmp r1, #0\n    beq _02239538\n    add r4, r4, #1\n    add r0, #0x3c\n    cmp r4, #0x20\n    blt _0223952A\n    cmp r4, #0x20\n    bne _02239540\n    bl GF_AssertFail\n    mov r0, #6\n    ldrsh r0, [r5, r0]\n    add r1, sp, #8\n    strh r0, [r1]\n    mov r0, #8\n    ldrsh r0, [r5, r0]\n    strh r0, [r1, #2]\n    ldrh r0, [r5, #4]\n    strh r0, [r1, #4]\n    ldrh r0, [r5, #2]\n    strh r0, [r1, #6]\n    ldrb r0, [r5, #0xa]\n    strh r0, [r1, #8]\n    ldrh r0, [r5]\n    strh r0, [r1, #0xa]\n    ldr r0, [r6, #0x14]\n    add r1, sp, #8\n    bl ov42_022280B8\n    str r0, [sp, #4]\n    ldr r0, [r6, #0x20]\n    ldr r1, [sp, #4]\n    mov r2, #0\n    mov r3, #0x65\n    bl ov42_0222903C\n    ldrb r1, [r5, #0xb]\n    add r7, r0, #0\n    bl ov42_02229200\n    str r5, [sp]\n    ldr r0, [r6, #8]\n    ldr r2, [sp, #4]\n    add r1, r4, #0\n    add r3, r7, #0\n    bl ov80_02239914\n    ldr r0, [sp, #4]\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov80_02239590(void) {
    /* Original at 0x02239590 */
    /* Requires manual decompilation - 38 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    ldr r0, [r0, #8]\n    add r5, r1, #0\n    bl sub_02096868\n    add r4, r0, #0\n    mov r1, #0\n    add r2, r4, #0\n    ldr r0, [r2]\n    cmp r0, r5\n    bne _022395D8\n    mov r0, #0x3c\n    add r5, r1, #0\n    mul r5, r0\n    ldr r0, [r4, r5]\n    bl ov42_02228100\n    add r0, r4, r5\n    ldr r0, [r0, #4]\n    bl ov42_022290C4\n    add r0, r4, r5\n    ldr r0, [r0, #0x38]\n    cmp r0, #0\n    beq _022395C6\n    bl GF_AssertFail\n    add r0, r4, r5\n    mov r1, #0\n    mov r2, #0x3c\n    bl MI_CpuFill8\n    ldr r1, _022395E4 ; =0x0000FFFF\n    add r0, r4, r5\n    strh r1, [r0, #0xc]\n    pop {r3, r4, r5, pc}\n    add r1, r1, #1\n    add r2, #0x3c\n    cmp r1, #0x20\n    blt _022395A0\n    pop {r3, r4, r5, pc}\n    nop\n    _022395E4: .word 0x0000FFFF"
    );
    #endif
}

void ov80_022395E8(void) {
    /* Original at 0x022395E8 */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    ldr r0, [r0, #8]\n    add r5, r1, #0\n    add r4, r2, #0\n    add r6, r3, #0\n    bl sub_02096868\n    mov r1, #0\n    add r3, r0, #0\n    ldrh r2, [r3, #0xc]\n    cmp r5, r2\n    bne _0223961C\n    cmp r4, #0\n    beq _0223960C\n    mov r2, #0x3c\n    mul r2, r1\n    ldr r2, [r0, r2]\n    str r2, [r4]\n    cmp r6, #0\n    beq _02239628\n    mov r2, #0x3c\n    mul r2, r1\n    add r0, r0, r2\n    ldr r0, [r0, #4]\n    str r0, [r6]\n    pop {r4, r5, r6, pc}\n    add r1, r1, #1\n    add r3, #0x3c\n    cmp r1, #0x20\n    blt _022395FA\n    bl GF_AssertFail\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov80_0223962C(void) {
    /* Original at 0x0223962C */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    ldr r3, _02239658 ; =0x0000FFFF\n    mov r4, #0\n    add r5, r0, #0\n    add r2, r5, #0\n    add r2, #0x70\n    ldrh r2, [r2]\n    cmp r2, r3\n    bne _02239648\n    lsl r2, r4, #1\n    add r0, r0, r2\n    add r0, #0x70\n    strh r1, [r0]\n    pop {r3, r4, r5, pc}\n    add r4, r4, #1\n    add r5, r5, #2\n    cmp r4, #8\n    blt _02239634\n    bl GF_AssertFail\n    pop {r3, r4, r5, pc}\n    nop\n    _02239658: .word 0x0000FFFF"
    );
    #endif
}

void ov80_0223965C(void) {
    /* Original at 0x0223965C */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    mov r3, #0\n    add r4, r0, #0\n    add r2, r4, #0\n    add r2, #0x70\n    ldrh r2, [r2]\n    cmp r1, r2\n    bne _0223967A\n    lsl r1, r3, #1\n    add r0, r0, r1\n    ldr r2, _02239688 ; =0x0000FFFF\n    add r0, #0x70\n    strh r2, [r0]\n    pop {r3, r4}\n    bx lr\n    add r3, r3, #1\n    add r4, r4, #2\n    cmp r3, #8\n    blt _02239662\n    pop {r3, r4}\n    bx lr\n    nop\n    _02239688: .word 0x0000FFFF"
    );
    #endif
}

void ov80_0223968C(void) {
    /* Original at 0x0223968C */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r4, r1, #0\n    add r5, r0, #0\n    add r6, r2, #0\n    cmp r4, #8\n    blo _0223969E\n    bl GF_AssertFail\n    add r7, r5, #0\n    lsl r0, r4, #2\n    add r7, #0x3c\n    str r0, [sp]\n    ldr r0, [r7, r0]\n    cmp r0, #0\n    beq _022396B0\n    bl GF_AssertFail\n    ldr r0, [r5, #0x34]\n    ldr r1, [r5, #0x38]\n    add r2, r6, #0\n    bl ov80_02239BB8\n    ldr r1, [sp]\n    str r0, [sp, #4]\n    str r0, [r7, r1]\n    lsl r0, r4, #1\n    add r0, r5, r0\n    add r0, #0x5c\n    strh r6, [r0]\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #0\n    bl ov80_02239708\n    ldr r0, [sp, #4]\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov80_022396D8(void) {
    /* Original at 0x022396D8 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    cmp r4, #8\n    blo _022396E6\n    bl GF_AssertFail\n    lsl r4, r4, #2\n    add r5, #0x3c\n    ldr r0, [r5, r4]\n    cmp r0, #0\n    bne _022396F4\n    bl GF_AssertFail\n    ldr r0, [r5, r4]\n    bl ov80_02239BE8\n    mov r0, #0\n    str r0, [r5, r4]\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov80_02239700(void) {
    /* Original at 0x02239700 */
    /* Requires manual decompilation - 4 instructions */
    #ifdef MWERKS
    asm(
        "lsl r1, r1, #2\n    add r0, r0, r1\n    ldr r0, [r0, #0x3c]\n    bx lr"
    );
    #endif
}

void ov80_02239708(void) {
    /* Original at 0x02239708 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    cmp r2, #1\n    bne _0223971E\n    mov r2, #1\n    ldr r3, [r0, #0x6c]\n    lsl r2, r1\n    add r1, r3, #0\n    orr r1, r2\n    str r1, [r0, #0x6c]\n    pop {r3, r4}\n    bx lr\n    mov r2, #1\n    add r3, r2, #0\n    lsl r3, r1\n    sub r1, r2, #2\n    ldr r4, [r0, #0x6c]\n    eor r1, r3\n    and r1, r4\n    str r1, [r0, #0x6c]\n    pop {r3, r4}\n    bx lr"
    );
    #endif
}

void ov80_02239734(void) {
    /* Original at 0x02239734 */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0, #0x6c]\n    add r2, r0, #0\n    lsr r2, r1\n    mov r0, #1\n    and r0, r2\n    bx lr"
    );
    #endif
}

void ov80_02239740(void) {
    /* Original at 0x02239740 */
    /* Requires manual decompilation - 105 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    str r0, [sp]\n    ldr r0, [r0, #8]\n    bl sub_02096878\n    ldr r4, [sp]\n    add r6, r0, #0\n    ldr r0, _02239814 ; =0x0000FFFF\n    add r4, #0x3c\n    mov r3, #0\n    lsl r2, r3, #1\n    add r1, r4, r2\n    ldrh r1, [r1, #0x34]\n    cmp r1, r0\n    beq _02239764\n    strh r1, [r6, r2]\n    add r3, r3, #1\n    add r3, r3, #1\n    cmp r3, #8\n    blt _02239756\n    add r0, r6, #0\n    str r0, [sp, #8]\n    add r0, #0x12\n    str r0, [sp, #8]\n    add r0, r6, #0\n    add r5, r6, #0\n    str r0, [sp, #4]\n    add r0, #0x10\n    mov r7, #0\n    add r5, #0x16\n    str r4, [sp, #0xc]\n    str r0, [sp, #4]\n    ldr r0, [r4]\n    cmp r0, #0\n    beq _022397F0\n    bl ManagedSprite_GetActiveAnim\n    strb r0, [r6, #0x15]\n    ldr r0, [r4]\n    bl ManagedSprite_GetAnimationFrame\n    ldrh r2, [r5]\n    ldr r1, _02239818 ; =0xFFFFE000\n    and r1, r2\n    ldr r2, _0223981C ; =0x00001FFF\n    and r0, r2\n    orr r0, r1\n    strh r0, [r5]\n    lsl r1, r7, #0x10\n    ldr r0, [sp]\n    lsr r1, r1, #0x10\n    bl ov80_02239734\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    lsl r0, r0, #0x1f\n    ldrh r2, [r5]\n    ldr r1, _02239820 ; =0xFFFFDFFF\n    lsr r0, r0, #0x12\n    and r1, r2\n    orr r0, r1\n    strh r0, [r5]\n    ldr r0, [r4]\n    bl ManagedSprite_GetDrawFlag\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    lsl r0, r0, #0x1f\n    ldrh r2, [r5]\n    ldr r1, _02239824 ; =0xFFFFBFFF\n    lsr r0, r0, #0x11\n    and r1, r2\n    orr r0, r1\n    strh r0, [r5]\n    ldr r0, [sp, #0xc]\n    ldr r1, [sp, #4]\n    ldrh r0, [r0, #0x20]\n    ldr r2, [sp, #8]\n    strb r0, [r6, #0x14]\n    ldr r0, [r4]\n    bl ManagedSprite_GetPositionXY\n    mov r0, #2\n    ldrh r1, [r5]\n    lsl r0, r0, #0xe\n    orr r0, r1\n    strh r0, [r5]\n    ldr r0, [sp, #0xc]\n    add r7, r7, #1\n    add r0, r0, #2\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #8]\n    add r4, r4, #4\n    add r0, #8\n    str r0, [sp, #8]\n    ldr r0, [sp, #4]\n    add r6, #8\n    add r0, #8\n    add r5, #8\n    str r0, [sp, #4]\n    cmp r7, #8\n    blt _02239782\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02239814: .word 0x0000FFFF\n    _02239818: .word 0xFFFFE000\n    _0223981C: .word 0x00001FFF\n    _02239820: .word 0xFFFFDFFF\n    _02239824: .word 0xFFFFBFFF"
    );
    #endif
}

void ov80_02239828(void) {
    /* Original at 0x02239828 */
    /* Requires manual decompilation - 81 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r7, r0, #0\n    ldr r0, [r7, #8]\n    bl sub_02096878\n    add r5, r0, #0\n    mov r0, #0xb8\n    mov r1, #0x65\n    bl NARC_New\n    str r0, [sp, #4]\n    mov r6, #0\n    add r4, r5, #0\n    ldrh r1, [r4]\n    ldr r0, _022398E0 ; =0x0000FFFF\n    cmp r1, r0\n    beq _02239862\n    str r1, [sp]\n    ldr r0, [r7, #0x34]\n    ldr r1, [r7, #0x38]\n    ldr r2, [sp, #4]\n    ldr r3, [r7, #4]\n    bl ov80_02239AF8\n    ldrh r1, [r4]\n    add r0, r7, #0\n    bl ov80_0223962C\n    add r6, r6, #1\n    add r4, r4, #2\n    cmp r6, #8\n    blt _02239844\n    add r4, r5, #0\n    mov r6, #0\n    add r4, #0x16\n    ldrh r0, [r4]\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x1f\n    cmp r0, #1\n    bne _022398C4\n    ldrb r2, [r5, #0x14]\n    lsl r1, r6, #0x10\n    add r0, r7, #0\n    lsr r1, r1, #0x10\n    bl ov80_0223968C\n    mov r1, #0x10\n    mov r2, #0x12\n    ldrsh r1, [r5, r1]\n    ldrsh r2, [r5, r2]\n    str r0, [sp, #8]\n    bl ManagedSprite_SetPositionXY\n    ldrh r1, [r4]\n    ldr r0, [sp, #8]\n    lsl r1, r1, #0x11\n    lsr r1, r1, #0x1f\n    bl ManagedSprite_SetDrawFlag\n    ldrh r2, [r4]\n    lsl r1, r6, #0x10\n    add r0, r7, #0\n    lsl r2, r2, #0x12\n    lsr r1, r1, #0x10\n    lsr r2, r2, #0x1f\n    bl ov80_02239708\n    ldrb r1, [r5, #0x15]\n    ldr r0, [sp, #8]\n    bl ManagedSprite_SetAnim\n    ldrh r1, [r4]\n    ldr r0, [sp, #8]\n    lsl r1, r1, #0x13\n    lsr r1, r1, #0x13\n    bl ManagedSprite_SetAnimationFrame\n    add r6, r6, #1\n    add r4, #8\n    add r5, #8\n    cmp r6, #8\n    blt _02239870\n    ldr r0, [sp, #4]\n    bl NARC_Delete\n    ldr r0, [r7, #8]\n    bl sub_02096884\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _022398E0: .word 0x0000FFFF"
    );
    #endif
}

void ov80_022398E4(void) {
    /* Original at 0x022398E4 */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r0, #0x1c\n    add r6, r1, #0\n    add r4, r2, #0\n    bl ov42_022293A8\n    add r5, #0x1c\n    strh r0, [r4]\n    add r0, r5, #0\n    bl ov42_022293B0\n    strh r0, [r6]\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov80_02239900(void) {
    /* Original at 0x02239900 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "add r0, #8\n    mov r3, #0xf\n    ldrh r2, [r0]\n    add r0, r0, #2\n    strh r2, [r1]\n    add r1, r1, #2\n    sub r3, r3, #1\n    bne _02239904\n    bx lr"
    );
    #endif
}

void ov80_02239914(void) {
    /* Original at 0x02239914 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r2, #0\n    add r4, r3, #0\n    bl sub_0209686C\n    str r5, [r0]\n    str r4, [r0, #4]\n    ldr r3, [sp, #0x10]\n    add r0, #8\n    mov r2, #0xf\n    ldrh r1, [r3]\n    add r3, r3, #2\n    strh r1, [r0]\n    add r0, r0, #2\n    sub r2, r2, #1\n    bne _02239928\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov80_02239938(void) {
    /* Original at 0x02239938 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    bl sub_02096868\n    mov r2, #0\n    ldr r1, [r0]\n    cmp r1, #0\n    beq _0223994E\n    ldrh r1, [r0, #0xc]\n    cmp r1, r4\n    beq _0223995C\n    add r2, r2, #1\n    add r0, #0x3c\n    cmp r2, #0x20\n    blt _02239942\n    bl GF_AssertFail\n    mov r0, #0\n    pop {r4, pc}"
    );
    #endif
}
