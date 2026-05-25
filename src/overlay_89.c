/* Decompiled from asm/overlay_89.s */
#include "global.h"

void ov89_02258800(void) {
    /* Original at 0x02258800 */
    /* Requires manual decompilation - 299 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    mov r0, #0\n    add r1, r0, #0\n    bl Main_SetVBlankIntrCB\n    bl HBlankInterruptDisable\n    bl GfGfx_DisableEngineAPlanes\n    bl GfGfx_DisableEngineBPlanes\n    mov r1, #1\n    lsl r1, r1, #0x1a\n    ldr r0, [r1]\n    ldr r2, _02258AC4 ; =0xFFFFE0FF\n    and r0, r2\n    str r0, [r1]\n    ldr r0, _02258AC8 ; =0x04001000\n    ldr r3, [r0]\n    and r2, r3\n    str r2, [r0]\n    ldr r3, [r1]\n    ldr r2, _02258ACC ; =0xFFFF1FFF\n    and r3, r2\n    str r3, [r1]\n    ldr r3, [r0]\n    add r1, #0x50\n    and r2, r3\n    str r2, [r0]\n    mov r2, #0\n    strh r2, [r1]\n    add r0, #0x50\n    strh r2, [r0]\n    mov r2, #5\n    mov r0, #3\n    mov r1, #0x7d\n    lsl r2, r2, #0x10\n    bl Heap_Create\n    ldr r1, _02258AD0 ; =0x000019E4\n    add r0, r4, #0\n    mov r2, #0x7d\n    bl OverlayManager_CreateAndGetData\n    ldr r2, _02258AD0 ; =0x000019E4\n    mov r1, #0\n    add r5, r0, #0\n    bl MI_CpuFill8\n    add r0, r4, #0\n    bl OverlayManager_GetArgs\n    str r0, [r5]\n    ldr r0, [r0]\n    bl ov45_0222A2C8\n    str r0, [r5, #4]\n    ldr r0, [r5]\n    ldr r0, [r0]\n    bl ov45_0222A2CC\n    ldr r1, _02258AD4 ; =0x000019E0\n    str r0, [r5, r1]\n    add r0, r5, #0\n    bl ov89_02259E18\n    ldr r0, [r5]\n    ldr r2, _02258AD8 ; =0x000008D8\n    ldrb r0, [r0, #4]\n    ldr r1, [r5, #4]\n    add r2, r5, r2\n    bl ov89_02259E50\n    mov r1, #2\n    ldr r0, _02258ADC ; =0x000019D4\n    lsl r1, r1, #0xc\n    str r1, [r5, r0]\n    ldr r1, [r5, r0]\n    add r0, r0, #4\n    str r1, [r5, r0]\n    mov r0, #0x7d\n    bl ov89_02259D70\n    str r0, [r5, #0x14]\n    mov r0, #0x7d\n    bl PaletteData_Init\n    str r0, [r5, #0xc]\n    mov r1, #1\n    bl PaletteData_SetAutoTransparent\n    mov r2, #2\n    ldr r0, [r5, #0xc]\n    mov r1, #0\n    lsl r2, r2, #8\n    mov r3, #0x7d\n    bl PaletteData_AllocBuffers\n    mov r1, #1\n    ldr r0, [r5, #0xc]\n    lsl r2, r1, #9\n    mov r3, #0x7d\n    bl PaletteData_AllocBuffers\n    mov r2, #7\n    ldr r0, [r5, #0xc]\n    mov r1, #2\n    lsl r2, r2, #6\n    mov r3, #0x7d\n    bl PaletteData_AllocBuffers\n    mov r2, #2\n    ldr r0, [r5, #0xc]\n    mov r1, #3\n    lsl r2, r2, #8\n    mov r3, #0x7d\n    bl PaletteData_AllocBuffers\n    ldr r0, [r5, #0xc]\n    mov r1, #1\n    bl PaletteData_SetAutoTransparent\n    mov r0, #0x7d\n    bl BgConfig_Alloc\n    str r0, [r5, #8]\n    mov r0, #0x40\n    mov r1, #0x7d\n    bl GF_CreateVramTransferManager\n    mov r0, #4\n    mov r1, #8\n    bl SetKeyRepeatTimers\n    ldr r0, [r5, #8]\n    bl ov89_0225905C\n    bl sub_020210BC\n    mov r0, #4\n    bl sub_02021148\n    mov r0, #2\n    mov r1, #0x7d\n    bl FontID_Alloc\n    mov r0, #0x7d\n    bl MessageFormat_New\n    str r0, [r5, #0x2c]\n    ldr r2, _02258AE0 ; =0x000002F2\n    mov r0, #0\n    mov r1, #0x1b\n    mov r3, #0x7d\n    bl NewMsgDataFromNarc\n    str r0, [r5, #0x30]\n    mov r0, #4\n    mov r1, #0x7d\n    bl FontSystem_NewInit\n    str r0, [r5, #0x10]\n    mov r0, #0xd2\n    mov r1, #0x7d\n    bl NARC_New\n    mov r1, #0x16\n    lsl r1, r1, #4\n    str r0, [r5, r1]\n    mov r0, #0x45\n    mov r1, #0x7d\n    bl NARC_New\n    mov r1, #0x59\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    sub r1, r1, #4\n    ldr r1, [r5, r1]\n    add r0, r5, #0\n    bl ov89_02259264\n    mov r1, #0x16\n    lsl r1, r1, #4\n    ldr r1, [r5, r1]\n    add r0, r5, #0\n    bl ov89_02259BAC\n    add r0, r5, #0\n    bl ov89_02259B00\n    add r0, r5, #0\n    bl ov89_02259CD0\n    mov r0, #1\n    lsl r0, r0, #8\n    mov r1, #0x7d\n    bl String_New\n    add r1, r5, #0\n    add r1, #0xc4\n    str r0, [r1]\n    mov r0, #0x7d\n    bl SpriteSystem_Alloc\n    ldr r1, _02258AE4 ; =ov89_0225CA58\n    ldr r2, _02258AE8 ; =ov89_0225C9EC\n    mov r3, #0x20\n    str r0, [r5, #0x1c]\n    bl SpriteSystem_Init\n    ldr r1, _02258AEC ; =0x00200010\n    mov r0, #1\n    bl G2dRenderer_SetObjCharTransferReservedRegion\n    mov r0, #1\n    bl G2dRenderer_SetPlttTransferReservedRegion\n    ldr r0, [r5, #0x1c]\n    bl SpriteManager_New\n    str r0, [r5, #0x20]\n    ldr r0, [r5, #0x1c]\n    ldr r1, [r5, #0x20]\n    mov r2, #0x80\n    bl SpriteSystem_InitSprites\n    ldr r0, [r5, #0x1c]\n    ldr r1, [r5, #0x20]\n    ldr r2, _02258AF0 ; =ov89_0225CA00\n    bl SpriteSystem_InitManagerWithCapacities\n    ldr r0, [r5, #0x1c]\n    bl SpriteSystem_GetRenderer\n    mov r2, #0x11\n    mov r1, #0\n    lsl r2, r2, #0x10\n    bl G2dRenderer_SetSubSurfaceCoords\n    bl sub_0203A880\n    ldr r1, _02258AD4 ; =0x000019E0\n    mov r0, #0x65\n    lsl r0, r0, #2\n    ldr r1, [r5, r1]\n    add r0, r5, r0\n    bl ov89_0225A46C\n    mov r1, #0x16\n    lsl r1, r1, #4\n    ldr r1, [r5, r1]\n    add r0, r5, #0\n    bl ov89_02259408\n    mov r1, #0x16\n    lsl r1, r1, #4\n    ldr r1, [r5, r1]\n    add r0, r5, #0\n    bl ov89_02259734\n    add r0, r5, #0\n    bl ov89_02259588\n    add r0, r5, #0\n    bl ov89_022597FC\n    add r0, r5, #0\n    bl ov89_022598D0\n    mov r0, #0x7d\n    bl YesNoPrompt_Create\n    str r0, [r5, #0x24]\n    mov r0, #6\n    str r0, [sp]\n    mov r1, #1\n    str r1, [sp, #4]\n    mov r0, #0x7d\n    str r0, [sp, #8]\n    mov r0, #0\n    add r2, r1, #0\n    add r3, r0, #0\n    bl BeginNormalPaletteFade\n    ldr r0, [r5]\n    ldr r0, [r0]\n    cmp r0, #0\n    beq _02258A4A\n    mov r1, #1\n    bl ov45_0222A520\n    mov r0, #1\n    add r1, r0, #0\n    bl GfGfx_EngineATogglePlanes\n    mov r0, #2\n    mov r1, #1\n    bl GfGfx_EngineATogglePlanes\n    mov r0, #4\n    mov r1, #1\n    bl GfGfx_EngineATogglePlanes\n    mov r0, #8\n    mov r1, #1\n    bl GfGfx_EngineATogglePlanes\n    mov r0, #2\n    mov r1, #1\n    bl GfGfx_EngineBTogglePlanes\n    mov r0, #4\n    mov r1, #1\n    bl GfGfx_EngineBTogglePlanes\n    ldr r0, _02258AF4 ; =gSystem + 0x60\n    mov r1, #1\n    strb r1, [r0, #9]\n    bl GfGfx_SwapDisplay\n    bl GfGfx_BothDispOn\n    mov r0, #0x10\n    mov r1, #1\n    bl GfGfx_EngineATogglePlanes\n    mov r0, #0x10\n    mov r1, #1\n    bl GfGfx_EngineBTogglePlanes\n    mov r0, #1\n    bl TextFlags_SetCanABSpeedUpPrint\n    mov r0, #0\n    bl TextFlags_SetAutoScrollParam\n    mov r0, #0\n    bl TextFlags_SetCanTouchSpeedUpPrint\n    ldr r0, _02258AF8 ; =ov89_02258FF4\n    ldr r2, _02258AFC ; =0x0000EA60\n    add r1, r5, #0\n    bl SysTask_CreateOnMainQueue\n    str r0, [r5, #0x18]\n    ldr r0, _02258B00 ; =ov89_0225901C\n    add r1, r5, #0\n    bl Main_SetVBlankIntrCB\n    mov r0, #1\n    add sp, #0xc\n    pop {r4, r5, pc}\n    _02258AC4: .word 0xFFFFE0FF\n    _02258AC8: .word 0x04001000\n    _02258ACC: .word 0xFFFF1FFF\n    _02258AD0: .word 0x000019E4\n    _02258AD4: .word 0x000019E0\n    _02258AD8: .word 0x000008D8\n    _02258ADC: .word 0x000019D4\n    _02258AE0: .word 0x000002F2\n    _02258AE4: .word ov89_0225CA58\n    _02258AE8: .word ov89_0225C9EC\n    _02258AEC: .word 0x00200010\n    _02258AF0: .word ov89_0225CA00\n    _02258AF4: .word gSystem + 0x60\n    _02258AF8: .word ov89_02258FF4\n    _02258AFC: .word 0x0000EA60\n    _02258B00: .word ov89_0225901C"
    );
    #endif
}

void ov89_02258B04(void) {
    /* Original at 0x02258B04 */
    /* Requires manual decompilation - 441 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x2c\n    add r5, r1, #0\n    bl OverlayManager_GetData\n    add r4, r0, #0\n    ldr r3, [r4]\n    add r1, r4, #0\n    ldr r2, _02258E5C ; =0x000009BC\n    mov r0, #0x65\n    add r1, #0xcc\n    lsl r0, r0, #2\n    ldrb r3, [r3, #4]\n    ldr r1, [r1]\n    ldr r2, [r4, r2]\n    add r0, r4, r0\n    bl ov89_0225A4F4\n    ldr r0, [r5]\n    cmp r0, #0xa\n    bls _02258B30\n    b _02258E40\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02258B3C: ; jump table\n    mov r0, #0x5a\n    mov r1, #1\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    add r0, r4, #0\n    bl ov89_0225C8DC\n    add r0, r4, #0\n    add r1, sp, #0x20\n    bl ov89_02259E28\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    b _02258E4A\n    bl IsPaletteFadeFinished\n    cmp r0, #1\n    beq _02258B7A\n    b _02258E4A\n    ldr r0, _02258E5C ; =0x000009BC\n    mov r1, #1\n    str r1, [r4, r0]\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    b _02258E4A\n    ldr r0, _02258E60 ; =gSystem + 0x40\n    ldrh r1, [r0, #0x24]\n    cmp r1, #0\n    beq _02258BF4\n    ldrh r0, [r0, #0x22]\n    cmp r0, #0xa0\n    bhs _02258BF4\n    ldr r1, _02258E64 ; =0x00000555\n    add r0, r4, #0\n    bl ov89_0225A41C\n    cmp r0, #1\n    bne _02258BF4\n    mov r2, #0x92\n    lsl r2, r2, #4\n    ldrb r1, [r4, r2]\n    ldr r7, _02258E60 ; =gSystem + 0x40\n    mov r3, #0xc\n    add r6, r1, #0\n    mul r6, r3\n    add r1, r2, #0\n    ldrh r0, [r7, #0x20]\n    add r6, r4, r6\n    sub r1, #0x3f\n    strb r0, [r6, r1]\n    ldrb r1, [r4, r2]\n    ldrh r0, [r7, #0x22]\n    add r6, r1, #0\n    mul r6, r3\n    add r1, r2, #0\n    add r6, r4, r6\n    sub r1, #0x3e\n    strb r0, [r6, r1]\n    add r1, r2, #0\n    ldrb r2, [r4, r2]\n    sub r1, #0x48\n    add r1, r4, r1\n    mul r3, r2\n    mov r2, #0x5b\n    lsl r2, r2, #2\n    ldr r2, [r4, r2]\n    add r0, r4, #0\n    add r1, r1, r3\n    bl ov89_02259EC4\n    ldr r0, _02258E68 ; =0x000008D8\n    add r2, r4, r0\n    add r0, #0x48\n    ldrb r1, [r4, r0]\n    mov r0, #0xc\n    mul r0, r1\n    add r0, r2, r0\n    bl ov89_0225C91C\n    ldr r1, _02258E68 ; =0x000008D8\n    add r0, r4, r1\n    add r1, #0x48\n    ldrb r1, [r4, r1]\n    bl ov89_0225C84C\n    add r1, r0, #0\n    cmp r1, #6\n    bge _02258C14\n    mov r0, #0x92\n    lsl r0, r0, #4\n    strb r1, [r4, r0]\n    add r0, r4, #0\n    bl ov89_0225A16C\n    b _02258E4A\n    ldr r0, [r5]\n    cmp r0, #2\n    bne _02258D0A\n    cmp r1, #0xfe\n    bne _02258D0A\n    ldr r0, _02258E6C ; =0x000005E5\n    bl PlaySE\n    mov r0, #8\n    str r0, [sp]\n    mov r1, #0\n    str r1, [sp, #4]\n    ldr r0, [r4, #0xc]\n    mov r2, #9\n    mov r3, #1\n    bl PaletteData_BlendPalette\n    mov r0, #8\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    ldr r2, _02258E70 ; =0x00000921\n    ldr r0, [r4, #0xc]\n    ldrb r2, [r4, r2]\n    mov r1, #2\n    mov r3, #0x10\n    lsl r2, r2, #0x14\n    lsr r2, r2, #0x10\n    bl PaletteData_BlendPalette\n    mov r0, #3\n    str r0, [r5]\n    b _02258E4A\n    add r0, r4, #0\n    add r0, #0xb4\n    mov r1, #0xf\n    bl FillWindowPixelBuffer\n    add r0, r4, #0\n    add r0, #0xb4\n    mov r1, #0\n    mov r2, #1\n    mov r3, #0xe\n    bl DrawFrameAndWindow2\n    add r2, r4, #0\n    add r2, #0xc4\n    ldr r0, [r4, #0x30]\n    ldr r2, [r2]\n    mov r1, #2\n    bl ReadMsgDataIntoString\n    ldr r0, [r4, #4]\n    bl Save_PlayerData_GetOptionsAddr\n    bl Options_GetTextFrameDelay\n    mov r3, #0\n    str r3, [sp]\n    str r0, [sp, #4]\n    add r2, r4, #0\n    add r0, r4, #0\n    str r3, [sp, #8]\n    add r2, #0xc4\n    ldr r2, [r2]\n    add r0, #0xb4\n    mov r1, #1\n    bl AddTextPrinterParameterized\n    add r1, r4, #0\n    add r1, #0xc8\n    strb r0, [r1]\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    b _02258E4A\n    add r0, r4, #0\n    add r0, #0xc8\n    ldrb r0, [r0]\n    bl TextPrinterCheckActive\n    cmp r0, #0\n    bne _02258D0A\n    ldr r0, [r4, #8]\n    mov r1, #0x19\n    str r0, [sp, #0xc]\n    mov r0, #1\n    str r0, [sp, #0x10]\n    mov r0, #0x1f\n    str r0, [sp, #0x14]\n    mov r0, #0xb\n    str r0, [sp, #0x18]\n    add r0, sp, #0xc\n    strb r1, [r0, #0x10]\n    mov r1, #6\n    strb r1, [r0, #0x11]\n    mov r1, #0\n    strb r1, [r0, #0x13]\n    ldr r0, [r4, #0x24]\n    add r1, sp, #0xc\n    bl YesNoPrompt_InitFromTemplate\n    add r0, r4, #0\n    mov r1, #1\n    add r0, #0x28\n    strb r1, [r0]\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    b _02258E4A\n    ldr r0, [r4, #0xc]\n    mov r1, #0\n    mov r2, #0xb0\n    mov r3, #0x40\n    bl PaletteData_LoadPaletteSlotFromHardware\n    ldr r0, [r4, #0x24]\n    bl YesNoPrompt_HandleInput\n    cmp r0, #1\n    beq _02258D0C\n    cmp r0, #2\n    beq _02258D36\n    b _02258E4A\n    ldr r0, [r4, #0x24]\n    bl YesNoPrompt_Reset\n    add r0, r4, #0\n    mov r1, #0\n    add r0, #0x28\n    strb r1, [r0]\n    add r0, r4, #0\n    add r0, #0xb4\n    bl ClearFrameAndWindow2\n    mov r0, #0x5a\n    mov r1, #0\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    ldr r0, _02258E5C ; =0x000009BC\n    mov r1, #3\n    str r1, [r4, r0]\n    mov r0, #9\n    str r0, [r5]\n    b _02258E4A\n    ldr r0, [r4, #0x24]\n    bl YesNoPrompt_Reset\n    add r0, r4, #0\n    mov r1, #0\n    add r0, #0x28\n    strb r1, [r0]\n    add r0, r4, #0\n    add r0, #0xb4\n    bl ClearFrameAndWindow2\n    mov r1, #0\n    str r1, [sp]\n    str r1, [sp, #4]\n    ldr r0, [r4, #0xc]\n    mov r2, #9\n    mov r3, #1\n    bl PaletteData_BlendPalette\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r2, _02258E70 ; =0x00000921\n    ldr r0, [r4, #0xc]\n    ldrb r2, [r4, r2]\n    mov r1, #2\n    mov r3, #0x10\n    lsl r2, r2, #0x14\n    lsr r2, r2, #0x10\n    bl PaletteData_BlendPalette\n    mov r0, #2\n    str r0, [r5]\n    b _02258E4A\n    add r0, r4, #0\n    add r0, #0xb4\n    mov r1, #0xf\n    bl FillWindowPixelBuffer\n    add r0, r4, #0\n    add r0, #0xb4\n    mov r1, #0\n    mov r2, #1\n    mov r3, #0xe\n    bl DrawFrameAndWindow2\n    add r2, r4, #0\n    add r2, #0xc4\n    ldr r0, [r4, #0x30]\n    ldr r2, [r2]\n    mov r1, #3\n    bl ReadMsgDataIntoString\n    ldr r0, [r4, #4]\n    bl Save_PlayerData_GetOptionsAddr\n    bl Options_GetTextFrameDelay\n    mov r3, #0\n    str r3, [sp]\n    str r0, [sp, #4]\n    add r2, r4, #0\n    add r0, r4, #0\n    str r3, [sp, #8]\n    add r2, #0xc4\n    ldr r2, [r2]\n    add r0, #0xb4\n    mov r1, #1\n    bl AddTextPrinterParameterized\n    add r1, r4, #0\n    add r1, #0xc8\n    strb r0, [r1]\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    b _02258E4A\n    add r0, r4, #0\n    add r0, #0xc8\n    ldrb r0, [r0]\n    bl TextPrinterCheckActive\n    cmp r0, #0\n    bne _02258E4A\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    b _02258E4A\n    add r0, r4, #0\n    add r0, #0x29\n    ldrb r0, [r0]\n    add r1, r0, #1\n    add r0, r4, #0\n    add r0, #0x29\n    strb r1, [r0]\n    add r0, r4, #0\n    add r0, #0x29\n    ldrb r0, [r0]\n    cmp r0, #0x5a\n    bls _02258E4A\n    mov r0, #9\n    str r0, [r5]\n    b _02258E4A\n    bl IsPaletteFadeFinished\n    cmp r0, #0\n    bne _02258E10\n    bl sub_0200FB70\n    mov r0, #6\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #0x7d\n    str r0, [sp, #8]\n    mov r0, #0\n    add r1, r0, #0\n    add r2, r0, #0\n    add r3, r0, #0\n    bl BeginNormalPaletteFade\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    b _02258E4A\n    bl IsPaletteFadeFinished\n    cmp r0, #1\n    bne _02258E4A\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    b _02258E4A\n    bl ov45_0222EEB8\n    add sp, #0x2c\n    mov r0, #1\n    pop {r4, r5, r6, r7, pc}\n    add r0, r4, #0\n    bl ov89_0225A21C\n    add r0, r4, #0\n    bl ov89_0225A398\n    ldr r0, _02258E5C ; =0x000009BC\n    b _02258E74\n    nop\n    _02258E5C: .word 0x000009BC\n    _02258E60: .word gSystem + 0x40\n    _02258E64: .word 0x00000555\n    _02258E68: .word 0x000008D8\n    _02258E6C: .word 0x000005E5\n    _02258E70: .word 0x00000921\n    ldr r0, [r4, r0]\n    cmp r0, #1\n    bne _02258EEC\n    mov r0, #0x19\n    lsl r0, r0, #4\n    ldr r1, [r4, r0]\n    add r1, r1, #1\n    str r1, [r4, r0]\n    ldr r1, [r4, r0]\n    cmp r1, #0x1e\n    ble _02258E94\n    mov r1, #0\n    str r1, [r4, r0]\n    add r0, r4, #0\n    bl ov89_02259F9C\n    bl ov45_0222D844\n    cmp r0, #1\n    beq _02258EA8\n    ldr r0, [r4]\n    ldr r0, [r0]\n    bl ov45_0222A330\n    cmp r0, #1\n    bne _02258EEC\n    ldr r0, [r5]\n    cmp r0, #4\n    beq _02258EEC\n    add r0, r4, #0\n    add r0, #0x28\n    ldrb r0, [r0]\n    cmp r0, #1\n    bne _02258EBE\n    ldr r0, [r4, #0x24]\n    bl YesNoPrompt_Reset\n    mov r0, #0x5a\n    mov r1, #0\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    ldr r0, _02258EF8 ; =0x000009BC\n    mov r1, #3\n    str r1, [r4, r0]\n    bl ov45_0222D844\n    cmp r0, #1\n    bne _02258EDA\n    mov r0, #9\n    str r0, [r5]\n    b _02258EEC\n    ldr r0, _02258EFC ; =0x000005F1\n    bl PlaySE\n    ldr r0, [r4]\n    ldr r0, [r0]\n    bl ov45_0222A4A8\n    mov r0, #6\n    str r0, [r5]\n    add r0, r4, #0\n    bl ov89_0225A468\n    mov r0, #0\n    add sp, #0x2c\n    pop {r4, r5, r6, r7, pc}\n    _02258EF8: .word 0x000009BC\n    _02258EFC: .word 0x000005F1"
    );
    #endif
}

void ov89_02258F00(void) {
    /* Original at 0x02258F00 */
    /* Requires manual decompilation - 86 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    bl OverlayManager_GetData\n    add r4, r0, #0\n    ldr r0, [r4, #0x18]\n    bl SysTask_Destroy\n    add r0, r4, #0\n    bl ov89_022596DC\n    add r0, r4, #0\n    bl ov89_022598A8\n    ldr r0, [r4, #0x24]\n    bl YesNoPrompt_Destroy\n    mov r0, #0x65\n    lsl r0, r0, #2\n    add r0, r4, r0\n    bl ov89_0225A47C\n    add r0, r4, #0\n    add r0, #0xc4\n    ldr r0, [r0]\n    bl String_Delete\n    mov r0, #2\n    bl FontID_Release\n    ldr r0, [r4, #0x10]\n    bl sub_020135AC\n    ldr r0, [r4, #0x30]\n    bl DestroyMsgData\n    ldr r0, [r4, #0x2c]\n    bl MessageFormat_Delete\n    add r0, r4, #0\n    bl ov89_02259D50\n    ldr r0, [r4, #8]\n    bl ov89_02259230\n    ldr r0, [r4, #8]\n    bl Heap_Free\n    ldr r0, [r4, #0x1c]\n    ldr r1, [r4, #0x20]\n    bl SpriteSystem_FreeResourcesAndManager\n    ldr r0, [r4, #0x1c]\n    bl SpriteSystem_Free\n    ldr r0, [r4, #0xc]\n    mov r1, #0\n    bl PaletteData_FreeBuffers\n    ldr r0, [r4, #0xc]\n    mov r1, #1\n    bl PaletteData_FreeBuffers\n    ldr r0, [r4, #0xc]\n    mov r1, #2\n    bl PaletteData_FreeBuffers\n    ldr r0, [r4, #0xc]\n    mov r1, #3\n    bl PaletteData_FreeBuffers\n    ldr r0, [r4, #0xc]\n    bl PaletteData_Free\n    add r0, r4, #0\n    bl ov89_02259C00\n    add r0, r4, #0\n    bl ov89_02259BA0\n    ldr r0, [r4, #0x14]\n    bl ov89_02259E10\n    mov r0, #0x16\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    bl NARC_Delete\n    mov r0, #0x59\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl NARC_Delete\n    mov r0, #0\n    add r1, r0, #0\n    bl Main_SetVBlankIntrCB\n    bl HBlankInterruptDisable\n    bl GF_DestroyVramTransferManager\n    bl sub_02021238\n    mov r0, #0\n    bl TextFlags_SetCanABSpeedUpPrint\n    mov r0, #0\n    bl TextFlags_SetAutoScrollParam\n    mov r0, #0\n    bl TextFlags_SetCanTouchSpeedUpPrint\n    bl sub_0203A914\n    add r0, r5, #0\n    bl OverlayManager_FreeData\n    mov r0, #0x7d\n    bl Heap_Destroy\n    mov r0, #1\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov89_02258FF4(void) {
    /* Original at 0x02258FF4 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r0, #0x65\n    add r4, r1, #0\n    lsl r0, r0, #2\n    add r0, r4, r0\n    bl ov89_0225A5EC\n    add r0, r4, #0\n    bl ov89_02259C0C\n    ldr r0, [r4, #0x20]\n    bl SpriteSystem_DrawSprites\n    bl SpriteSystem_UpdateTransfer\n    mov r0, #0\n    add r1, r0, #0\n    bl RequestSwap3DBuffers\n    pop {r4, pc}"
    );
    #endif
}

void ov89_0225901C(void) {
    /* Original at 0x0225901C */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r1, _02259050 ; =0x000009BC\n    add r4, r0, #0\n    mov r0, #0x65\n    lsl r0, r0, #2\n    ldr r1, [r4, r1]\n    add r0, r4, r0\n    bl ov89_0225A760\n    bl GF_RunVramTransferTasks\n    bl SpriteSystem_TransferOam\n    ldr r0, [r4, #0xc]\n    bl PaletteData_PushTransparentBuffers\n    ldr r0, [r4, #8]\n    bl DoScheduledBgGpuUpdates\n    ldr r3, _02259054 ; =0x027E0000\n    ldr r1, _02259058 ; =0x00003FF8\n    mov r0, #1\n    ldr r2, [r3, r1]\n    orr r0, r2\n    str r0, [r3, r1]\n    pop {r4, pc}\n    _02259050: .word 0x000009BC\n    _02259054: .word 0x027E0000\n    _02259058: .word 0x00003FF8"
    );
    #endif
}

void ov89_0225905C(void) {
    /* Original at 0x0225905C */
    /* Requires manual decompilation - 195 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0xe0\n    add r4, r0, #0\n    bl GfGfx_DisableEngineAPlanes\n    bl GfGfx_DisableEngineBPlanes\n    ldr r5, _0225921C ; =ov89_0225CA78\n    add r3, sp, #0x10\n    mov r2, #5\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    sub r2, r2, #1\n    bne _02259070\n    add r0, sp, #0x10\n    bl GfGfx_SetBanks\n    mov r1, #6\n    mov r2, #2\n    mov r0, #0\n    lsl r1, r1, #0x18\n    lsl r2, r2, #0x12\n    bl MIi_CpuClear32\n    mov r1, #0x62\n    mov r2, #2\n    mov r0, #0\n    lsl r1, r1, #0x14\n    lsl r2, r2, #0x10\n    bl MIi_CpuClear32\n    mov r1, #0x19\n    mov r2, #1\n    mov r0, #0\n    lsl r1, r1, #0x16\n    lsl r2, r2, #0x12\n    bl MIi_CpuClear32\n    mov r1, #0x66\n    mov r2, #2\n    mov r0, #0\n    lsl r1, r1, #0x14\n    lsl r2, r2, #0x10\n    bl MIi_CpuClear32\n    ldr r5, _02259220 ; =ov89_0225C9DC\n    add r3, sp, #0\n    add r2, r3, #0\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    add r0, r2, #0\n    bl SetBothScreensModesAndDisable\n    ldr r5, _02259224 ; =ov89_0225CC18\n    add r3, sp, #0x8c\n    mov r2, #0xa\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    sub r2, r2, #1\n    bne _022590D0\n    ldr r0, [r5]\n    mov r1, #1\n    str r0, [r3]\n    add r0, r4, #0\n    add r2, sp, #0x8c\n    mov r3, #0\n    bl InitBgFromTemplate\n    add r0, r4, #0\n    mov r1, #1\n    bl BgClearTilemapBufferAndCommit\n    mov r2, #0\n    add r0, r4, #0\n    mov r1, #1\n    add r3, r2, #0\n    bl BgSetPosTextAndCommit\n    add r0, r4, #0\n    mov r1, #1\n    mov r2, #3\n    mov r3, #0\n    bl BgSetPosTextAndCommit\n    add r0, r4, #0\n    mov r1, #2\n    add r2, sp, #0xa8\n    mov r3, #0\n    bl InitBgFromTemplate\n    add r0, r4, #0\n    mov r1, #2\n    bl BgClearTilemapBufferAndCommit\n    mov r2, #0\n    add r0, r4, #0\n    mov r1, #2\n    add r3, r2, #0\n    bl BgSetPosTextAndCommit\n    add r0, r4, #0\n    mov r1, #2\n    mov r2, #3\n    mov r3, #0\n    bl BgSetPosTextAndCommit\n    add r0, r4, #0\n    mov r1, #3\n    add r2, sp, #0xc4\n    mov r3, #0\n    bl InitBgFromTemplate\n    add r0, r4, #0\n    mov r1, #3\n    bl BgClearTilemapBufferAndCommit\n    mov r2, #0\n    add r0, r4, #0\n    mov r1, #3\n    add r3, r2, #0\n    bl BgSetPosTextAndCommit\n    mov r1, #3\n    add r0, r4, #0\n    add r2, r1, #0\n    mov r3, #0\n    bl BgSetPosTextAndCommit\n    ldr r1, _02259228 ; =0x04000008\n    mov r0, #3\n    ldrh r2, [r1]\n    bic r2, r0\n    mov r0, #2\n    orr r0, r2\n    strh r0, [r1]\n    mov r0, #1\n    add r1, r0, #0\n    bl GfGfx_EngineATogglePlanes\n    ldr r5, _0225922C ; =ov89_0225CC6C\n    add r3, sp, #0x38\n    mov r2, #0xa\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    sub r2, r2, #1\n    bne _0225917C\n    ldr r0, [r5]\n    mov r1, #5\n    str r0, [r3]\n    add r0, r4, #0\n    add r2, sp, #0x38\n    mov r3, #0\n    bl InitBgFromTemplate\n    add r0, r4, #0\n    mov r1, #5\n    bl BgClearTilemapBufferAndCommit\n    mov r2, #0\n    add r0, r4, #0\n    mov r1, #5\n    add r3, r2, #0\n    bl BgSetPosTextAndCommit\n    add r0, r4, #0\n    mov r1, #5\n    mov r2, #3\n    mov r3, #0\n    bl BgSetPosTextAndCommit\n    add r0, r4, #0\n    mov r1, #6\n    add r2, sp, #0x54\n    mov r3, #0\n    bl InitBgFromTemplate\n    add r0, r4, #0\n    mov r1, #6\n    bl BgClearTilemapBufferAndCommit\n    mov r2, #0\n    add r0, r4, #0\n    mov r1, #6\n    add r3, r2, #0\n    bl BgSetPosTextAndCommit\n    add r0, r4, #0\n    mov r1, #6\n    mov r2, #3\n    mov r3, #0\n    bl BgSetPosTextAndCommit\n    add r0, r4, #0\n    mov r1, #7\n    add r2, sp, #0x70\n    mov r3, #0\n    bl InitBgFromTemplate\n    add r0, r4, #0\n    mov r1, #7\n    bl BgClearTilemapBufferAndCommit\n    mov r2, #0\n    add r0, r4, #0\n    mov r1, #7\n    add r3, r2, #0\n    bl BgSetPosTextAndCommit\n    add r0, r4, #0\n    mov r1, #7\n    mov r2, #3\n    mov r3, #0\n    bl BgSetPosTextAndCommit\n    mov r0, #5\n    mov r1, #0x20\n    mov r2, #0\n    mov r3, #0x7d\n    bl BG_ClearCharDataRange\n    add sp, #0xe0\n    pop {r3, r4, r5, pc}\n    _0225921C: .word ov89_0225CA78\n    _02259220: .word ov89_0225C9DC\n    _02259224: .word ov89_0225CC18\n    _02259228: .word 0x04000008\n    _0225922C: .word ov89_0225CC6C"
    );
    #endif
}

void ov89_02259230(void) {
    /* Original at 0x02259230 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r1, #6\n    bl FreeBgTilemapBuffer\n    add r0, r4, #0\n    mov r1, #5\n    bl FreeBgTilemapBuffer\n    add r0, r4, #0\n    mov r1, #7\n    bl FreeBgTilemapBuffer\n    add r0, r4, #0\n    mov r1, #3\n    bl FreeBgTilemapBuffer\n    add r0, r4, #0\n    mov r1, #2\n    bl FreeBgTilemapBuffer\n    add r0, r4, #0\n    mov r1, #1\n    bl FreeBgTilemapBuffer\n    pop {r4, pc}"
    );
    #endif
}

void ov89_02259264(void) {
    /* Original at 0x02259264 */
    /* Requires manual decompilation - 188 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    add r4, r0, #0\n    add r5, r1, #0\n    mov r1, #0\n    mov r0, #7\n    str r1, [sp]\n    lsl r0, r0, #6\n    str r0, [sp, #4]\n    str r1, [sp, #8]\n    ldr r0, [r4, #0xc]\n    mov r1, #0xd2\n    mov r2, #0x13\n    mov r3, #0x7d\n    bl PaletteData_LoadNarc\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0x7d\n    str r0, [sp, #0xc]\n    ldr r2, [r4, #8]\n    add r0, r5, #0\n    mov r1, #0x12\n    mov r3, #2\n    bl GfGfxLoader_LoadCharDataFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0x7d\n    str r0, [sp, #0xc]\n    ldr r2, [r4, #8]\n    add r0, r5, #0\n    mov r1, #0x11\n    mov r3, #2\n    bl GfGfxLoader_LoadScrnDataFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0x7d\n    str r0, [sp, #0xc]\n    ldr r2, [r4, #8]\n    add r0, r5, #0\n    mov r1, #0x14\n    mov r3, #3\n    bl GfGfxLoader_LoadScrnDataFromOpenNarc\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    ldr r0, [r4, #0xc]\n    mov r1, #0xd2\n    mov r2, #0x17\n    mov r3, #0x7d\n    bl PaletteData_LoadNarc\n    ldr r0, [r4]\n    ldrb r0, [r0, #4]\n    cmp r0, #0\n    bne _022592FE\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    mov r1, #1\n    ldr r0, [r4, #0xc]\n    mov r2, #0x10\n    add r3, r1, #0\n    bl PaletteData_CopyPalette\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0x7d\n    str r0, [sp, #0xc]\n    ldr r2, [r4, #8]\n    add r0, r5, #0\n    mov r1, #0x16\n    mov r3, #6\n    bl GfGfxLoader_LoadCharDataFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0x7d\n    str r0, [sp, #0xc]\n    ldr r2, [r4, #8]\n    add r0, r5, #0\n    mov r1, #0x15\n    mov r3, #6\n    bl GfGfxLoader_LoadScrnDataFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0x7d\n    str r0, [sp, #0xc]\n    ldr r2, [r4, #8]\n    add r0, r5, #0\n    mov r1, #0x18\n    mov r3, #7\n    bl GfGfxLoader_LoadScrnDataFromOpenNarc\n    ldr r0, [r4, #8]\n    mov r1, #6\n    bl GetBgTilemapBuffer\n    mov r1, #0x27\n    lsl r1, r1, #6\n    mov r2, #2\n    add r1, r4, r1\n    lsl r2, r2, #0xa\n    add r5, r0, #0\n    bl MIi_CpuCopy16\n    mov r2, #2\n    mov r0, #0\n    add r1, r5, #0\n    lsl r2, r2, #0xa\n    bl MIi_CpuClear16\n    ldr r0, [r4, #4]\n    bl Save_PlayerData_GetOptionsAddr\n    bl Options_GetFrame\n    add r5, r0, #0\n    bl sub_0200E640\n    add r2, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    mov r0, #0xe0\n    str r0, [sp, #8]\n    ldr r0, [r4, #0xc]\n    mov r1, #0x26\n    mov r3, #0x7d\n    bl PaletteData_LoadNarc\n    lsl r0, r5, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #0x7d\n    str r0, [sp, #4]\n    mov r1, #1\n    ldr r0, [r4, #8]\n    add r2, r1, #0\n    mov r3, #0xe\n    bl LoadUserFrameGfx2\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    mov r0, #0xd0\n    str r0, [sp, #8]\n    ldr r0, [r4, #0xc]\n    mov r1, #0x10\n    mov r2, #7\n    mov r3, #0x7d\n    bl PaletteData_LoadNarc\n    ldr r0, [r4]\n    ldrb r0, [r0, #4]\n    cmp r0, #0\n    bne _022593E2\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    mov r0, #0xd0\n    str r0, [sp, #8]\n    ldr r0, [r4, #0xc]\n    mov r1, #0x10\n    mov r2, #7\n    mov r3, #0x7d\n    bl PaletteData_LoadNarc\n    b _022593FA\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    mov r0, #0xd0\n    str r0, [sp, #8]\n    ldr r0, [r4, #0xc]\n    mov r1, #0xd2\n    mov r2, #0x19\n    mov r3, #0x7d\n    bl PaletteData_LoadNarc\n    ldr r0, [r4, #8]\n    mov r1, #6\n    bl ScheduleBgTilemapBufferTransfer\n    add sp, #0x10\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov89_02259408(void) {
    /* Original at 0x02259408 */
    /* Requires manual decompilation - 172 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    add r6, r1, #0\n    str r6, [sp]\n    mov r1, #3\n    add r5, r0, #0\n    str r1, [sp, #4]\n    mov r0, #0\n    str r0, [sp, #8]\n    str r1, [sp, #0xc]\n    mov r0, #1\n    str r0, [sp, #0x10]\n    ldr r0, _0225956C ; =0x00002711\n    mov r1, #2\n    str r0, [sp, #0x14]\n    ldr r0, [r5, #0xc]\n    ldr r2, [r5, #0x1c]\n    ldr r3, [r5, #0x20]\n    bl SpriteSystem_LoadPaletteBufferFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r0, _02259570 ; =0x00002717\n    add r2, r6, #0\n    str r0, [sp, #8]\n    ldr r0, [r5, #0x1c]\n    ldr r1, [r5, #0x20]\n    mov r3, #4\n    bl SpriteSystem_LoadCharResObjFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, _02259574 ; =0x00002712\n    add r2, r6, #0\n    str r0, [sp, #4]\n    ldr r0, [r5, #0x1c]\n    ldr r1, [r5, #0x20]\n    mov r3, #5\n    bl SpriteSystem_LoadCellResObjFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, _02259574 ; =0x00002712\n    add r2, r6, #0\n    str r0, [sp, #4]\n    ldr r0, [r5, #0x1c]\n    ldr r1, [r5, #0x20]\n    mov r3, #6\n    bl SpriteSystem_LoadAnimResObjFromOpenNarc\n    mov r4, #0\n    add r7, r4, #0\n    str r7, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r0, _0225956C ; =0x00002711\n    add r2, r6, #0\n    add r0, r4, r0\n    str r0, [sp, #8]\n    ldr r0, [r5, #0x1c]\n    ldr r1, [r5, #0x20]\n    mov r3, #0x10\n    bl SpriteSystem_LoadCharResObjFromOpenNarc\n    add r4, r4, #1\n    cmp r4, #6\n    blt _02259474\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, _0225956C ; =0x00002711\n    add r2, r6, #0\n    str r0, [sp, #4]\n    ldr r0, [r5, #0x1c]\n    ldr r1, [r5, #0x20]\n    mov r3, #0xf\n    bl SpriteSystem_LoadCellResObjFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, _0225956C ; =0x00002711\n    add r2, r6, #0\n    str r0, [sp, #4]\n    ldr r0, [r5, #0x1c]\n    ldr r1, [r5, #0x20]\n    mov r3, #0xe\n    bl SpriteSystem_LoadAnimResObjFromOpenNarc\n    str r6, [sp]\n    mov r0, #3\n    str r0, [sp, #4]\n    mov r0, #0\n    str r0, [sp, #8]\n    mov r0, #1\n    str r0, [sp, #0xc]\n    str r0, [sp, #0x10]\n    ldr r0, _02259574 ; =0x00002712\n    mov r1, #2\n    str r0, [sp, #0x14]\n    ldr r0, [r5, #0xc]\n    ldr r2, [r5, #0x1c]\n    ldr r3, [r5, #0x20]\n    bl SpriteSystem_LoadPaletteBufferFromOpenNarc\n    ldr r1, [r5]\n    ldrb r1, [r1, #4]\n    cmp r1, #0\n    bne _022594E6\n    mov r3, #0\n    b _022594E8\n    ldr r3, _02259578 ; =0x00007FFF\n    lsl r1, r0, #4\n    lsl r0, r1, #0x10\n    lsr r0, r0, #0x10\n    add r1, #0x10\n    str r0, [sp]\n    lsl r0, r1, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp, #4]\n    mov r1, #2\n    ldr r0, [r5, #0xc]\n    add r2, r1, #0\n    bl PaletteData_FillPaletteInBuffer\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r0, _0225957C ; =0x00002718\n    add r2, r6, #0\n    str r0, [sp, #8]\n    ldr r0, [r5, #0x1c]\n    ldr r1, [r5, #0x20]\n    mov r3, #2\n    bl SpriteSystem_LoadCharResObjFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, _02259580 ; =0x00002713\n    add r2, r6, #0\n    str r0, [sp, #4]\n    ldr r0, [r5, #0x1c]\n    ldr r1, [r5, #0x20]\n    mov r3, #1\n    bl SpriteSystem_LoadCellResObjFromOpenNarc\n    mov r3, #0\n    ldr r0, _02259580 ; =0x00002713\n    str r3, [sp]\n    str r0, [sp, #4]\n    ldr r0, [r5, #0x1c]\n    ldr r1, [r5, #0x20]\n    add r2, r6, #0\n    bl SpriteSystem_LoadAnimResObjFromOpenNarc\n    mov r0, #0xd2\n    str r0, [sp]\n    mov r0, #0x1a\n    str r0, [sp, #4]\n    mov r0, #0\n    str r0, [sp, #8]\n    mov r0, #1\n    str r0, [sp, #0xc]\n    str r0, [sp, #0x10]\n    ldr r0, _02259580 ; =0x00002713\n    mov r1, #2\n    str r0, [sp, #0x14]\n    ldr r0, [r5, #0xc]\n    ldr r2, [r5, #0x1c]\n    ldr r3, [r5, #0x20]\n    bl SpriteSystem_LoadPaletteBuffer\n    ldr r1, _02259584 ; =0x00000921\n    strb r0, [r5, r1]\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0225956C: .word 0x00002711\n    _02259570: .word 0x00002717\n    _02259574: .word 0x00002712\n    _02259578: .word 0x00007FFF\n    _0225957C: .word 0x00002718\n    _02259580: .word 0x00002713\n    _02259584: .word 0x00000921"
    );
    #endif
}

void ov89_02259588(void) {
    /* Original at 0x02259588 */
    /* Requires manual decompilation - 149 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x4c\n    ldr r4, _022596B8 ; =ov89_0225CB08\n    add r7, r0, #0\n    add r3, sp, #0x18\n    mov r2, #6\n    ldmia r4!, {r0, r1}\n    stmia r3!, {r0, r1}\n    sub r2, r2, #1\n    bne _02259594\n    ldr r0, [r4]\n    mov r6, #0\n    str r0, [r3]\n    mov r4, #0x10\n    add r5, r7, #0\n    add r0, sp, #0x18\n    strh r4, [r0]\n    mov r1, #0xb0\n    strh r1, [r0, #2]\n    ldr r0, [r7, #0x1c]\n    ldr r1, [r7, #0x20]\n    add r2, sp, #0x18\n    bl SpriteSystem_NewSprite\n    ldr r1, _022596BC ; =0x00000924\n    str r0, [r5, r1]\n    add r0, r1, #0\n    ldr r0, [r5, r0]\n    add r1, r6, #0\n    bl ManagedSprite_SetAnim\n    ldr r0, _022596BC ; =0x00000924\n    ldr r0, [r5, r0]\n    ldr r0, [r0]\n    bl Sprite_TickFrame\n    add r6, r6, #1\n    add r4, #0x20\n    add r5, r5, #4\n    cmp r6, #6\n    blt _022595A6\n    ldr r4, _022596C0 ; =ov89_0225CB3C\n    add r3, sp, #0x18\n    mov r2, #6\n    ldmia r4!, {r0, r1}\n    stmia r3!, {r0, r1}\n    sub r2, r2, #1\n    bne _022595E0\n    ldr r0, [r4]\n    mov r6, #0\n    str r0, [r3]\n    mov r4, #0x10\n    add r5, r7, #0\n    add r0, sp, #0x18\n    strh r4, [r0]\n    mov r1, #0xb0\n    strh r1, [r0, #2]\n    ldr r0, [r7, #0x1c]\n    ldr r1, [r7, #0x20]\n    add r2, sp, #0x18\n    bl SpriteSystem_NewSprite\n    ldr r1, _022596C4 ; =0x0000093C\n    str r0, [r5, r1]\n    add r0, r1, #0\n    ldr r0, [r5, r0]\n    add r1, r6, #0\n    bl ManagedSprite_SetAnim\n    ldr r0, _022596C4 ; =0x0000093C\n    ldr r0, [r5, r0]\n    ldr r0, [r0]\n    bl Sprite_TickFrame\n    add r6, r6, #1\n    add r4, #0x20\n    add r5, r5, #4\n    cmp r6, #6\n    blt _022595F2\n    ldr r4, _022596C8 ; =ov89_0225CB70\n    add r3, sp, #0x18\n    mov r2, #6\n    ldmia r4!, {r0, r1}\n    stmia r3!, {r0, r1}\n    sub r2, r2, #1\n    bne _0225962C\n    ldr r0, [r4]\n    mov r5, #0\n    str r0, [r3]\n    mov r6, #0x10\n    add r4, r7, #0\n    add r0, sp, #0x18\n    strh r6, [r0]\n    mov r1, #0xb0\n    strh r1, [r0, #2]\n    ldr r0, _022596CC ; =0x00002711\n    add r2, sp, #0x18\n    add r0, r5, r0\n    str r0, [sp, #0x2c]\n    ldr r0, [r7, #0x1c]\n    ldr r1, [r7, #0x20]\n    bl SpriteSystem_NewSprite\n    ldr r1, _022596D0 ; =0x00000954\n    str r0, [r4, r1]\n    add r0, r1, #0\n    ldr r0, [r4, r0]\n    ldr r0, [r0]\n    bl Sprite_TickFrame\n    add r5, r5, #1\n    add r6, #0x20\n    add r4, r4, #4\n    cmp r5, #6\n    blt _0225963E\n    ldr r0, [r7, #0x30]\n    mov r1, #1\n    bl NewString_ReadMsgData\n    add r4, r0, #0\n    ldr r0, _022596D4 ; =0x00010203\n    mov r1, #0x67\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    ldr r0, _022596D8 ; =0x00002713\n    lsl r1, r1, #6\n    str r0, [sp, #8]\n    mov r0, #0xe0\n    str r0, [sp, #0xc]\n    mov r0, #0xb0\n    str r0, [sp, #0x10]\n    mov r0, #1\n    str r0, [sp, #0x14]\n    add r0, r7, #0\n    add r1, r7, r1\n    add r2, r4, #0\n    mov r3, #2\n    bl ov89_0225A260\n    mov r0, #0x67\n    lsl r0, r0, #6\n    ldr r0, [r7, r0]\n    mov r1, #1\n    bl TextOBJ_SetSpritesDrawFlag\n    add r0, r4, #0\n    bl String_Delete\n    add sp, #0x4c\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _022596B8: .word ov89_0225CB08\n    _022596BC: .word 0x00000924\n    _022596C0: .word ov89_0225CB3C\n    _022596C4: .word 0x0000093C\n    _022596C8: .word ov89_0225CB70\n    _022596CC: .word 0x00002711\n    _022596D0: .word 0x00000954\n    _022596D4: .word 0x00010203\n    _022596D8: .word 0x00002713"
    );
    #endif
}

void ov89_022596DC(void) {
    /* Original at 0x022596DC */
    /* Requires manual decompilation - 37 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r0, #0\n    ldr r6, _02259728 ; =0x00000924\n    mov r4, #0\n    add r5, r7, #0\n    ldr r0, [r5, r6]\n    bl Sprite_DeleteAndFreeResources\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #6\n    blt _022596E6\n    ldr r6, _0225972C ; =0x0000093C\n    mov r5, #0\n    add r4, r7, #0\n    ldr r0, [r4, r6]\n    bl Sprite_DeleteAndFreeResources\n    add r5, r5, #1\n    add r4, r4, #4\n    cmp r5, #6\n    blt _022596FA\n    ldr r6, _02259730 ; =0x00000954\n    mov r5, #0\n    add r4, r7, #0\n    ldr r0, [r4, r6]\n    bl Sprite_DeleteAndFreeResources\n    add r5, r5, #1\n    add r4, r4, #4\n    cmp r5, #6\n    blt _0225970E\n    mov r0, #0x67\n    lsl r0, r0, #6\n    add r0, r7, r0\n    bl ov89_0225A354\n    pop {r3, r4, r5, r6, r7, pc}\n    _02259728: .word 0x00000924\n    _0225972C: .word 0x0000093C\n    _02259730: .word 0x00000954"
    );
    #endif
}

void ov89_02259734(void) {
    /* Original at 0x02259734 */
    /* Requires manual decompilation - 89 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    add r6, r1, #0\n    add r5, r0, #0\n    str r6, [sp]\n    mov r0, #0xa\n    str r0, [sp, #4]\n    mov r0, #0\n    str r0, [sp, #8]\n    mov r0, #1\n    str r0, [sp, #0xc]\n    mov r0, #2\n    str r0, [sp, #0x10]\n    ldr r0, _022597EC ; =0x00002714\n    mov r1, #3\n    str r0, [sp, #0x14]\n    ldr r0, [r5, #0xc]\n    ldr r2, [r5, #0x1c]\n    ldr r3, [r5, #0x20]\n    bl SpriteSystem_LoadPaletteBufferFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    ldr r0, _022597F0 ; =0x00002719\n    add r2, r6, #0\n    str r0, [sp, #8]\n    ldr r0, [r5, #0x1c]\n    ldr r1, [r5, #0x20]\n    mov r3, #9\n    bl SpriteSystem_LoadCharResObjFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, _022597EC ; =0x00002714\n    add r2, r6, #0\n    str r0, [sp, #4]\n    ldr r0, [r5, #0x1c]\n    ldr r1, [r5, #0x20]\n    mov r3, #8\n    bl SpriteSystem_LoadCellResObjFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, _022597EC ; =0x00002714\n    add r2, r6, #0\n    str r0, [sp, #4]\n    ldr r0, [r5, #0x1c]\n    ldr r1, [r5, #0x20]\n    mov r3, #7\n    bl SpriteSystem_LoadAnimResObjFromOpenNarc\n    mov r4, #0\n    add r7, r4, #0\n    str r7, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    ldr r0, _022597F4 ; =0x0000271A\n    add r2, r6, #0\n    add r0, r4, r0\n    str r0, [sp, #8]\n    ldr r0, [r5, #0x1c]\n    ldr r1, [r5, #0x20]\n    mov r3, #0xd\n    bl SpriteSystem_LoadCharResObjFromOpenNarc\n    add r4, r4, #1\n    cmp r4, #8\n    blt _022597A2\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, _022597F8 ; =0x00002715\n    add r2, r6, #0\n    str r0, [sp, #4]\n    ldr r0, [r5, #0x1c]\n    ldr r1, [r5, #0x20]\n    mov r3, #0xc\n    bl SpriteSystem_LoadCellResObjFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, _022597F8 ; =0x00002715\n    add r2, r6, #0\n    str r0, [sp, #4]\n    ldr r0, [r5, #0x1c]\n    ldr r1, [r5, #0x20]\n    mov r3, #0xb\n    bl SpriteSystem_LoadAnimResObjFromOpenNarc\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    _022597EC: .word 0x00002714\n    _022597F0: .word 0x00002719\n    _022597F4: .word 0x0000271A\n    _022597F8: .word 0x00002715"
    );
    #endif
}

void ov89_022597FC(void) {
    /* Original at 0x022597FC */
    /* Requires manual decompilation - 74 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x34\n    add r5, r0, #0\n    ldr r0, [r5, #0x1c]\n    ldr r1, [r5, #0x20]\n    ldr r2, _02259894 ; =ov89_0225CAA0\n    bl SpriteSystem_NewSprite\n    ldr r1, _02259898 ; =0x0000096C\n    str r0, [r5, r1]\n    ldr r0, [r5, r1]\n    ldr r0, [r0]\n    bl Sprite_TickFrame\n    ldr r0, _02259898 ; =0x0000096C\n    mov r1, #0\n    ldr r0, [r5, r0]\n    bl ManagedSprite_SetDrawFlag\n    ldr r4, _0225989C ; =ov89_0225CAD4\n    add r3, sp, #0\n    mov r2, #6\n    ldmia r4!, {r0, r1}\n    stmia r3!, {r0, r1}\n    sub r2, r2, #1\n    bne _02259828\n    ldr r0, [r4]\n    mov r7, #0x97\n    str r0, [r3]\n    mov r4, #0\n    ldr r6, _022598A0 ; =ov89_0225CA38\n    lsl r7, r7, #4\n    b _0225988A\n    ldr r0, _022598A4 ; =0x0000271A\n    add r2, sp, #0\n    add r0, r4, r0\n    str r0, [sp, #0x14]\n    ldr r0, [r5, #0x1c]\n    ldr r1, [r5, #0x20]\n    bl SpriteSystem_NewSprite\n    add r3, r0, #0\n    lsl r2, r4, #2\n    mov r0, #0x97\n    add r1, r5, r2\n    lsl r0, r0, #4\n    str r3, [r1, r0]\n    ldr r0, [r1, r0]\n    ldrsh r1, [r6, r2]\n    add r3, r6, r2\n    mov r2, #2\n    ldrsh r2, [r3, r2]\n    mov r3, #0x11\n    lsl r3, r3, #0x10\n    bl ManagedSprite_SetPositionXYWithSubscreenOffset\n    lsl r0, r4, #2\n    add r1, r5, r0\n    mov r0, #0x97\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    ldr r0, [r0]\n    bl Sprite_TickFrame\n    lsl r0, r4, #2\n    add r0, r5, r0\n    ldr r0, [r0, r7]\n    mov r1, #0\n    bl ManagedSprite_SetDrawFlag\n    add r4, r4, #1\n    cmp r4, #8\n    blt _0225983E\n    add sp, #0x34\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _02259894: .word ov89_0225CAA0\n    _02259898: .word 0x0000096C\n    _0225989C: .word ov89_0225CAD4\n    _022598A0: .word ov89_0225CA38\n    _022598A4: .word 0x0000271A"
    );
    #endif
}

void ov89_022598A8(void) {
    /* Original at 0x022598A8 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r0, _022598CC ; =0x0000096C\n    ldr r0, [r5, r0]\n    bl Sprite_DeleteAndFreeResources\n    mov r6, #0x97\n    mov r4, #0\n    lsl r6, r6, #4\n    ldr r0, [r5, r6]\n    bl Sprite_DeleteAndFreeResources\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #8\n    blt _022598BA\n    pop {r4, r5, r6, pc}\n    nop\n    _022598CC: .word 0x0000096C"
    );
    #endif
}

void ov89_022598D0(void) {
    /* Original at 0x022598D0 */
    /* Requires manual decompilation - 164 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x30\n    add r6, r0, #0\n    mov r0, #0\n    str r0, [sp, #0x24]\n    ldr r0, [r6, #0xc]\n    mov r1, #2\n    bl PaletteData_GetUnfadedBuf\n    str r0, [sp, #0x28]\n    ldr r0, [r6, #0xc]\n    mov r1, #2\n    bl PaletteData_GetFadedBuf\n    str r0, [sp, #0x10]\n    mov r0, #0\n    str r0, [sp, #0x2c]\n    str r0, [sp, #0x18]\n    ldr r0, [sp, #0x28]\n    str r6, [sp, #0x20]\n    str r6, [sp, #0x1c]\n    str r0, [sp, #0x14]\n    ldr r2, _02259A1C ; =0x000008DA\n    ldr r0, [sp, #0x20]\n    ldrh r0, [r0, r2]\n    cmp r0, #0\n    beq _0225990C\n    ldr r3, _02259A20 ; =0x000001ED\n    cmp r0, r3\n    bls _02259966\n    ldr r1, _02259A24 ; =0x00000924\n    ldr r0, [sp, #0x1c]\n    ldr r0, [r0, r1]\n    mov r1, #0\n    bl ManagedSprite_SetDrawFlag\n    ldr r1, _02259A28 ; =0x0000093C\n    ldr r0, [sp, #0x1c]\n    ldr r0, [r0, r1]\n    mov r1, #0\n    bl ManagedSprite_SetDrawFlag\n    ldr r1, _02259A2C ; =0x00000954\n    ldr r0, [sp, #0x1c]\n    ldr r0, [r0, r1]\n    mov r1, #0\n    bl ManagedSprite_SetDrawFlag\n    ldr r0, [sp, #0x18]\n    ldr r5, _02259A30 ; =_0225C9B0\n    lsl r0, r0, #0x18\n    mov r4, #0\n    lsr r7, r0, #0x18\n    add r0, r4, #0\n    add r0, #0x14\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #4\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #0x11\n    str r0, [sp, #0xc]\n    ldrh r2, [r5]\n    ldr r0, [r6, #8]\n    mov r1, #2\n    add r3, r7, #0\n    bl FillBgTilemapRect\n    add r4, r4, #1\n    add r5, r5, #2\n    cmp r4, #4\n    blt _0225993A\n    b _022599DC\n    add r1, r3, #0\n    sub r1, #0x89\n    ldr r1, [r6, r1]\n    add r4, r2, #6\n    str r1, [sp]\n    mov r1, #1\n    str r1, [sp, #4]\n    ldr r1, _02259A34 ; =0x000019E0\n    add r2, #0x7a\n    ldr r1, [r6, r1]\n    sub r3, #0x8d\n    str r1, [sp, #8]\n    ldr r1, [sp, #0x20]\n    ldr r3, [r6, r3]\n    ldrb r1, [r1, r4]\n    ldr r4, [sp, #0x1c]\n    ldr r2, [r4, r2]\n    bl ov89_02259A3C\n    ldr r1, _02259A38 ; =0x000008D8\n    ldr r0, [sp, #0x20]\n    mov r3, #0xc\n    ldrh r2, [r0, r1]\n    ldr r0, [sp, #0x14]\n    strh r2, [r0, #0x22]\n    ldr r0, [sp, #0x20]\n    ldrh r1, [r0, r1]\n    ldr r0, [sp, #0x10]\n    strh r1, [r0, #0x22]\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, [sp, #0x2c]\n    add r0, #0x11\n    lsl r1, r0, #1\n    ldr r0, [sp, #0x28]\n    add r0, r0, r1\n    ldr r1, [sp, #0x2c]\n    add r1, #0x21\n    lsl r2, r1, #1\n    ldr r1, [sp, #0x28]\n    add r1, r1, r2\n    mov r2, #1\n    bl BlendPalette\n    ldr r0, [sp, #0x14]\n    add r0, #0x42\n    ldrh r1, [r0]\n    ldr r0, [sp, #0x10]\n    add r0, #0x42\n    strh r1, [r0]\n    ldr r0, [sp, #0x24]\n    cmp r0, #0\n    bne _022599DC\n    add r0, r0, #1\n    str r0, [sp, #0x24]\n    mov r1, #0x92\n    ldr r0, [sp, #0x2c]\n    lsl r1, r1, #4\n    strb r0, [r6, r1]\n    ldr r0, [sp, #0x20]\n    add r0, #0xc\n    str r0, [sp, #0x20]\n    ldr r0, [sp, #0x1c]\n    add r0, r0, #4\n    str r0, [sp, #0x1c]\n    ldr r0, [sp, #0x18]\n    add r0, r0, #4\n    str r0, [sp, #0x18]\n    ldr r0, [sp, #0x14]\n    add r0, r0, #2\n    str r0, [sp, #0x14]\n    ldr r0, [sp, #0x10]\n    add r0, r0, #2\n    str r0, [sp, #0x10]\n    ldr r0, [sp, #0x2c]\n    add r0, r0, #1\n    str r0, [sp, #0x2c]\n    cmp r0, #6\n    bge _02259A06\n    b _022598FC\n    add r0, r6, #0\n    mov r1, #0\n    bl ov89_0225A1D8\n    ldr r0, [r6, #8]\n    mov r1, #2\n    bl ScheduleBgTilemapBufferTransfer\n    add sp, #0x30\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02259A1C: .word 0x000008DA\n    _02259A20: .word 0x000001ED\n    _02259A24: .word 0x00000924\n    _02259A28: .word 0x0000093C\n    _02259A2C: .word 0x00000954\n    _02259A30: .word _0225C9B0\n    _02259A34: .word 0x000019E0\n    _02259A38: .word 0x000008D8"
    );
    #endif
}

void ov89_02259A3C(void) {
    /* Original at 0x02259A3C */
    /* Requires manual decompilation - 86 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r4, r0, #0\n    add r6, r2, #0\n    add r5, r3, #0\n    cmp r4, #0\n    beq _02259A50\n    ldr r2, _02259AFC ; =0x000001ED\n    cmp r4, r2\n    ble _02259A56\n    add sp, #0x10\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r2, [sp, #0x30]\n    bl ov89_0225C88C\n    cmp r0, #1\n    bne _02259A90\n    ldr r0, [sp, #0x28]\n    mov r2, #1\n    add r1, r4, #3\n    mov r3, #0x7d\n    str r2, [sp]\n    bl GfGfxLoader_LoadFromOpenNarc\n    add r1, sp, #0xc\n    str r0, [sp, #8]\n    bl NNS_G2dGetUnpackedCharacterData\n    ldr r0, [sp, #0xc]\n    mov r1, #1\n    ldr r0, [r0, #0x14]\n    lsl r1, r1, #8\n    bl DC_FlushRange\n    ldr r0, [sp, #0xc]\n    ldr r4, [r0, #0x14]\n    add r0, r4, #0\n    str r0, [sp, #4]\n    add r0, #0x80\n    str r0, [sp, #4]\n    b _02259ABA\n    mov r0, #1\n    str r0, [sp]\n    add r0, r5, #0\n    mov r1, #0x10\n    mov r2, #0\n    mov r3, #0x7d\n    bl GfGfxLoader_LoadFromOpenNarc\n    add r1, sp, #0xc\n    str r0, [sp, #8]\n    bl NNS_G2dGetUnpackedCharacterData\n    ldr r0, [sp, #0xc]\n    mov r1, #0x80\n    ldr r0, [r0, #0x14]\n    bl DC_FlushRange\n    ldr r0, [sp, #0xc]\n    ldr r4, [r0, #0x14]\n    str r4, [sp, #4]\n    add r4, #0x40\n    ldr r0, [sp, #0x2c]\n    cmp r0, #1\n    bne _02259AC6\n    mov r5, #0x19\n    lsl r5, r5, #0x16\n    b _02259ACA\n    mov r5, #0x66\n    lsl r5, r5, #0x14\n    ldr r0, [r6]\n    bl Sprite_GetImageProxy\n    add r6, r0, #0\n    ldr r0, [sp, #0x2c]\n    mov r2, #0x40\n    lsl r7, r0, #2\n    ldr r1, [r6, r7]\n    ldr r0, [sp, #4]\n    add r1, r5, r1\n    bl MIi_CpuCopy16\n    ldr r1, [r6, r7]\n    add r5, #0x40\n    add r0, r4, #0\n    add r1, r5, r1\n    mov r2, #0x40\n    bl MIi_CpuCopy16\n    ldr r0, [sp, #8]\n    bl Heap_Free\n    mov r0, #1\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    _02259AFC: .word 0x000001ED"
    );
    #endif
}

void ov89_02259B00(void) {
    /* Original at 0x02259B00 */
    /* Requires manual decompilation - 69 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x20\n    ldr r3, _02259B90 ; =ov89_0225C9C0\n    add r5, r0, #0\n    ldmia r3!, {r0, r1}\n    add r2, sp, #0x14\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    str r0, [r2]\n    mov r0, #0x7d\n    bl Camera_New\n    add r1, r5, #0\n    add r1, #0xcc\n    str r0, [r1]\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    add r0, r5, #0\n    add r0, #0xcc\n    ldr r0, [r0]\n    mov r1, #0x1f\n    str r0, [sp, #8]\n    ldr r2, _02259B94 ; =ov89_0225C9B8\n    ldr r3, _02259B98 ; =0x00000FA4\n    add r0, sp, #0x14\n    lsl r1, r1, #0xe\n    bl Camera_Init_FromTargetDistanceAndAngle\n    add r2, r5, #0\n    add r2, #0xcc\n    mov r0, #1\n    mov r1, #0xe1\n    ldr r2, [r2]\n    lsl r0, r0, #0xc\n    lsl r1, r1, #0xe\n    bl Camera_SetPerspectiveClippingPlane\n    add r0, r5, #0\n    add r0, #0xcc\n    ldr r0, [r0]\n    bl Camera_SetStaticPtr\n    add r0, r5, #0\n    add r0, #0xcc\n    ldr r0, [r0]\n    bl Camera_GetPerspectiveAngle\n    add r4, r0, #0\n    add r0, r5, #0\n    add r0, #0xcc\n    ldr r0, [r0]\n    bl Camera_GetDistance\n    add r1, r0, #0\n    add r0, sp, #0xc\n    str r0, [sp]\n    ldr r2, _02259B9C ; =0x00001555\n    add r0, r4, #0\n    add r3, sp, #0x10\n    bl sub_02020E10\n    add r0, r5, #0\n    ldr r1, [sp, #0x10]\n    add r0, #0xd0\n    str r1, [r0]\n    ldr r0, [sp, #0xc]\n    add r5, #0xd4\n    str r0, [r5]\n    add sp, #0x20\n    pop {r3, r4, r5, pc}\n    nop\n    _02259B90: .word ov89_0225C9C0\n    _02259B94: .word ov89_0225C9B8\n    _02259B98: .word 0x00000FA4\n    _02259B9C: .word 0x00001555"
    );
    #endif
}

void ov89_02259BA0(void) {
    Camera_Delete();
}

void ov89_02259BAC(void) {
    /* Original at 0x02259BAC */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4]\n    ldrb r0, [r0, #4]\n    cmp r0, #0\n    bne _02259BBC\n    mov r2, #0x1c\n    b _02259BBE\n    mov r2, #0x1b\n    add r0, r4, #0\n    add r0, #0xd8\n    mov r3, #0x7d\n    bl sub_02018030\n    add r0, r4, #0\n    add r1, r4, #0\n    add r0, #0xe8\n    add r1, #0xd8\n    bl sub_020181B0\n    mov r1, #0\n    add r0, r4, #0\n    add r0, #0xe8\n    add r2, r1, #0\n    add r3, r1, #0\n    bl sub_020182A8\n    mov r1, #1\n    lsl r1, r1, #0xc\n    add r0, r4, #0\n    add r0, #0xe8\n    add r2, r1, #0\n    add r3, r1, #0\n    bl sub_020182C4\n    add r4, #0xe8\n    add r0, r4, #0\n    mov r1, #1\n    bl sub_020182A0\n    pop {r4, pc}"
    );
    #endif
}

void ov89_02259C00(void) {
    sub_02018068();
}

void ov89_02259C0C(void) {
    /* Original at 0x02259C0C */
    /* Requires manual decompilation - 77 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x40\n    add r4, r0, #0\n    mov r0, #1\n    lsl r0, r0, #0xc\n    str r0, [sp, #0x34]\n    str r0, [sp, #0x38]\n    str r0, [sp, #0x3c]\n    mov r0, #0\n    str r0, [sp, #0x28]\n    str r0, [sp, #0x2c]\n    str r0, [sp, #0x30]\n    add r0, sp, #4\n    bl MTX_Identity33_\n    bl Thunk_G3X_Reset\n    add r0, r4, #0\n    add r0, #0xcc\n    ldr r0, [r0]\n    bl Camera_SetStaticPtr\n    add r1, r4, #0\n    add r1, #0xcc\n    ldr r1, [r1]\n    mov r0, #0\n    bl Camera_ApplyPerspectiveType\n    bl Camera_PushLookAtToNNSGlb\n    mov r0, #0\n    ldr r2, _02259CBC ; =0xFFFFF000\n    add r1, r0, #0\n    add r3, r0, #0\n    bl NNS_G3dGlbLightVector\n    ldr r1, _02259CC0 ; =0x0000739C\n    mov r0, #0\n    bl NNS_G3dGlbLightColor\n    ldr r0, _02259CC4 ; =0x00007FFF\n    mov r2, #0\n    add r1, r0, #0\n    bl NNS_G3dGlbMaterialColorDiffAmb\n    ldr r0, _02259CC4 ; =0x00007FFF\n    mov r2, #0\n    add r1, r0, #0\n    bl NNS_G3dGlbMaterialColorSpecEmi\n    add r0, sp, #0x28\n    bl NNS_G3dGlbSetBaseTrans\n    ldr r1, _02259CC8 ; =NNS_G3dGlb + 0xBC\n    add r0, sp, #4\n    bl MI_Copy36B\n    ldr r1, _02259CCC ; =NNS_G3dGlb + 0x80\n    mov r0, #0xa4\n    ldr r2, [r1, #0x7c]\n    bic r2, r0\n    add r0, sp, #0x34\n    str r2, [r1, #0x7c]\n    bl NNS_G3dGlbSetBaseScale\n    mov r1, #0\n    mov r0, #0x11\n    add r2, r1, #0\n    bl NNS_G3dGeBufferOP_N\n    add r0, r4, #0\n    add r0, #0xe8\n    bl sub_020181EC\n    mov r0, #0x65\n    lsl r0, r0, #2\n    add r0, r4, r0\n    bl ov89_0225A5A4\n    mov r2, #1\n    mov r0, #0x12\n    add r1, sp, #0\n    str r2, [sp]\n    bl NNS_G3dGeBufferOP_N\n    add sp, #0x40\n    pop {r4, pc}\n    nop\n    _02259CBC: .word 0xFFFFF000\n    _02259CC0: .word 0x0000739C\n    _02259CC4: .word 0x00007FFF\n    _02259CC8: .word NNS_G3dGlb + 0xBC\n    _02259CCC: .word NNS_G3dGlb + 0x80"
    );
    #endif
}

void ov89_02259CD0(void) {
    /* Original at 0x02259CD0 */
    /* Requires manual decompilation - 59 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    mov r2, #1\n    add r6, r0, #0\n    str r2, [sp]\n    mov r0, #0x1b\n    str r0, [sp, #4]\n    mov r0, #4\n    str r0, [sp, #8]\n    mov r0, #0xd\n    str r0, [sp, #0xc]\n    mov r0, #0x5b\n    str r0, [sp, #0x10]\n    add r1, r6, #0\n    ldr r0, [r6, #8]\n    add r1, #0xb4\n    mov r3, #2\n    bl AddWindowParameterized\n    add r0, r6, #0\n    add r0, #0xb4\n    mov r1, #0xf\n    bl FillWindowPixelBuffer\n    add r4, r6, #0\n    mov r5, #0\n    ldr r7, _02259D4C ; =ov89_0225C9CC\n    add r4, #0x34\n    b _02259D44\n    lsl r3, r5, #1\n    add r0, r7, r3\n    ldrb r0, [r0, #1]\n    lsl r1, r5, #4\n    mov r2, #5\n    str r0, [sp]\n    mov r0, #8\n    str r0, [sp, #4]\n    mov r0, #2\n    str r0, [sp, #8]\n    mov r0, #0xd\n    str r0, [sp, #0xc]\n    mov r0, #2\n    lsl r0, r0, #8\n    add r0, r1, r0\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp, #0x10]\n    ldrb r3, [r7, r3]\n    ldr r0, [r6, #8]\n    add r1, r4, r1\n    bl AddWindowParameterized\n    lsl r0, r5, #4\n    add r0, r4, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    add r5, r5, #1\n    cmp r5, #8\n    blt _02259D0A\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    _02259D4C: .word ov89_0225C9CC"
    );
    #endif
}

void ov89_02259D50(void) {
    /* Original at 0x02259D50 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r0, #0xb4\n    bl RemoveWindow\n    mov r4, #0\n    add r5, #0x34\n    add r0, r5, #0\n    bl RemoveWindow\n    add r4, r4, #1\n    add r5, #0x10\n    cmp r4, #8\n    blt _02259D5E\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov89_02259D70(void) {
    GF_3DVramMan_Create(0, 2);
}

void ov89_02259D8C(void) {
    /* Original at 0x02259D8C */
    /* Requires manual decompilation - 57 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    mov r0, #1\n    add r1, r0, #0\n    bl GfGfx_EngineATogglePlanes\n    ldr r0, _02259DF8 ; =0x04000008\n    mov r1, #3\n    ldrh r2, [r0]\n    bic r2, r1\n    mov r1, #1\n    orr r1, r2\n    strh r1, [r0]\n    add r0, #0x58\n    ldrh r2, [r0]\n    ldr r1, _02259DFC ; =0xFFFFCFFD\n    and r2, r1\n    strh r2, [r0]\n    add r2, r1, #2\n    ldrh r3, [r0]\n    add r1, r1, #2\n    and r3, r2\n    mov r2, #0x10\n    orr r2, r3\n    strh r2, [r0]\n    ldrh r3, [r0]\n    ldr r2, _02259E00 ; =0x0000CFFB\n    and r3, r2\n    strh r3, [r0]\n    ldrh r3, [r0]\n    sub r2, #0x1c\n    and r3, r1\n    mov r1, #8\n    orr r1, r3\n    strh r1, [r0]\n    ldrh r1, [r0]\n    and r1, r2\n    strh r1, [r0]\n    mov r0, #0\n    add r1, r0, #0\n    add r2, r0, #0\n    add r3, r0, #0\n    bl G3X_SetFog\n    mov r0, #0\n    ldr r2, _02259E04 ; =0x00007FFF\n    add r1, r0, #0\n    mov r3, #0x3f\n    str r0, [sp]\n    bl G3X_SetClearColor\n    ldr r1, _02259E08 ; =0xBFFF0000\n    ldr r0, _02259E0C ; =0x04000580\n    str r1, [r0]\n    pop {r3, pc}\n    _02259DF8: .word 0x04000008\n    _02259DFC: .word 0xFFFFCFFD\n    _02259E00: .word 0x0000CFFB\n    _02259E04: .word 0x00007FFF\n    _02259E08: .word 0xBFFF0000\n    _02259E0C: .word 0x04000580"
    );
    #endif
}

void ov89_02259E10(void) {
    GF_3DVramMan_Delete();
}

void ov89_02259E18(void) {
    ov45_0222E9E0();
}

void ov89_02259E28(void) {
    /* Original at 0x02259E28 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    add r0, r4, #0\n    mov r1, #0\n    mov r2, #0xc\n    bl MI_CpuFill8\n    mov r0, #0x96\n    strh r0, [r4, #2]\n    mov r0, #0x1f\n    strh r0, [r4]\n    add r0, #0xe2\n    str r0, [r4, #4]\n    mov r0, #0\n    strb r0, [r4, #8]\n    pop {r4, pc}"
    );
    #endif
}

void ov89_02259E48(void) {
    /* Original at 0x02259E48 */
    /* Requires manual decompilation - 4 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0x5a\n    lsl r1, r1, #2\n    add r0, r0, r1\n    bx lr"
    );
    #endif
}

void ov89_02259E50(void) {
    /* Original at 0x02259E50 */
    /* Requires manual decompilation - 49 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r5, r2, #0\n    str r0, [sp]\n    add r4, r1, #0\n    add r0, r5, #0\n    mov r1, #0\n    mov r2, #0x48\n    bl MI_CpuFill8\n    add r0, r4, #0\n    bl SaveArray_Party_Get\n    str r0, [sp, #4]\n    bl Party_GetCount\n    add r7, r0, #0\n    mov r6, #0\n    cmp r7, #0\n    ble _02259EC0\n    ldr r0, [sp, #4]\n    add r1, r6, #0\n    bl Party_GetMonByIndex\n    mov r1, #0xae\n    mov r2, #0\n    add r4, r0, #0\n    bl GetMonData\n    mov r1, #0\n    strh r0, [r5, #2]\n    add r0, r4, #0\n    add r2, r1, #0\n    bl GetMonData\n    str r0, [r5, #4]\n    add r0, r4, #0\n    mov r1, #0x70\n    mov r2, #0\n    bl GetMonData\n    strb r0, [r5, #8]\n    add r0, r4, #0\n    mov r1, #7\n    mov r2, #0\n    bl GetMonData\n    add r1, r0, #0\n    ldr r0, [sp]\n    bl ov89_0225C830\n    strh r0, [r5]\n    add r6, r6, #1\n    add r5, #0xc\n    cmp r6, r7\n    blt _02259E78\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov89_02259EC4(void) {
    /* Original at 0x02259EC4 */
    /* Requires manual decompilation - 98 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    mov r3, #0x59\n    add r4, r0, #0\n    lsl r3, r3, #2\n    add r5, r1, #0\n    ldr r1, [r4, r3]\n    add r6, r2, #0\n    str r1, [sp]\n    ldr r1, _02259F8C ; =0x000019E0\n    add r2, r5, #0\n    ldr r1, [r4, r1]\n    str r1, [sp, #4]\n    add r1, r3, #0\n    sub r3, r3, #4\n    add r1, #0x30\n    ldr r3, [r4, r3]\n    add r1, r4, r1\n    bl ov89_0225A49C\n    str r0, [sp, #0xc]\n    cmp r0, #1\n    bne _02259F84\n    add r0, r6, #0\n    bl ov45_0222EC7C\n    add r6, r0, #0\n    mov r0, #0\n    mvn r0, r0\n    cmp r6, r0\n    beq _02259F7E\n    ldr r3, _02259F90 ; =0x0000099C\n    lsl r1, r6, #1\n    add r0, r4, r3\n    mov ip, r0\n    mov r2, ip\n    ldrh r0, [r5, #2]\n    ldrh r2, [r2, r1]\n    cmp r0, r2\n    bne _02259F20\n    add r2, r4, r1\n    add r3, #0x10\n    ldrh r7, [r5]\n    ldrh r2, [r2, r3]\n    cmp r7, r2\n    beq _02259F7E\n    mov r2, ip\n    strh r0, [r2, r1]\n    ldrh r2, [r5]\n    ldr r0, _02259F94 ; =0x000009AC\n    add r1, r4, r1\n    strh r2, [r1, r0]\n    sub r0, #0x3c\n    mov r3, #0x59\n    add r7, r4, r0\n    lsl r0, r6, #2\n    str r0, [sp, #0x10]\n    lsl r3, r3, #2\n    ldr r0, [r4, r3]\n    ldr r2, [sp, #0x10]\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    ldr r0, _02259F8C ; =0x000019E0\n    sub r3, r3, #4\n    ldr r0, [r4, r0]\n    str r0, [sp, #8]\n    ldrh r0, [r5, #2]\n    ldrb r1, [r5, #8]\n    ldr r2, [r7, r2]\n    ldr r3, [r4, r3]\n    bl ov89_02259A3C\n    ldr r0, [sp, #0x10]\n    mov r1, #1\n    ldr r0, [r7, r0]\n    bl ManagedSprite_SetDrawFlag\n    add r0, r6, #0\n    add r0, #0x21\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    add r6, #0x22\n    str r0, [sp]\n    lsl r0, r6, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp, #4]\n    ldrh r3, [r5]\n    ldr r0, [r4, #0xc]\n    mov r1, #1\n    mov r2, #2\n    bl PaletteData_FillPaletteInBuffer\n    ldr r0, _02259F98 ; =0x000005EB\n    bl PlaySE\n    ldr r0, [sp, #0xc]\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _02259F8C: .word 0x000019E0\n    _02259F90: .word 0x0000099C\n    _02259F94: .word 0x000009AC\n    _02259F98: .word 0x000005EB"
    );
    #endif
}

void ov89_02259F9C(void) {
    /* Original at 0x02259F9C */
    /* Requires manual decompilation - 195 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x2c\n    add r6, r0, #0\n    mov r0, #0\n    str r0, [sp, #0x18]\n    str r0, [sp, #0x14]\n    add r0, sp, #0x24\n    bl ov45_0222EC3C\n    mov r7, #0\n    b _0225A0DC\n    lsl r3, r7, #2\n    mov r0, #0x17\n    add r1, r6, r3\n    lsl r0, r0, #4\n    ldr r2, [r1, r0]\n    ldr r0, [sp, #0x28]\n    ldr r1, [r0, r3]\n    cmp r2, r1\n    bne _02259FC6\n    b _0225A0CC\n    mov r0, #0\n    mvn r0, r0\n    cmp r1, r0\n    beq _0225A036\n    str r1, [sp]\n    ldr r3, [r6]\n    add r2, r6, #0\n    ldr r0, [r6, #0x30]\n    ldr r1, [r6, #0x2c]\n    ldr r3, [r3]\n    add r2, #0x34\n    bl ov89_0225C724\n    ldr r0, [r6, #8]\n    mov r1, #6\n    bl GetBgTilemapBuffer\n    str r0, [sp, #0x10]\n    lsl r0, r7, #3\n    ldr r1, _0225A130 ; =ov89_0225CBD8\n    str r0, [sp, #0x1c]\n    add r4, r1, r0\n    mov r0, #0x27\n    lsl r0, r0, #6\n    add r0, r6, r0\n    ldrh r5, [r4, #2]\n    str r0, [sp, #0x20]\n    b _0225A01C\n    ldrh r0, [r4, #4]\n    ldr r1, _0225A130 ; =ov89_0225CBD8\n    lsl r3, r5, #5\n    lsl r2, r0, #1\n    ldr r0, [sp, #0x1c]\n    ldrh r0, [r1, r0]\n    ldr r1, [sp, #0x10]\n    add r0, r3, r0\n    lsl r3, r0, #1\n    ldr r0, [sp, #0x20]\n    add r1, r1, r3\n    add r0, r0, r3\n    bl MIi_CpuCopy16\n    add r5, r5, #1\n    ldrh r1, [r4, #2]\n    ldrh r0, [r4, #6]\n    add r0, r1, r0\n    cmp r5, r0\n    blt _02259FFE\n    ldr r0, [r6, #8]\n    mov r1, #6\n    bl ScheduleBgTilemapBufferTransfer\n    ldr r0, [sp, #0x18]\n    add r0, r0, #1\n    str r0, [sp, #0x18]\n    b _0225A09C\n    add r0, r6, #0\n    add r0, #0x34\n    add r1, r7, #0\n    bl ov89_0225C818\n    lsl r0, r7, #1\n    ldr r2, _0225A134 ; =0x0000099C\n    add r3, r6, r0\n    mov r1, #0\n    add r0, r2, #0\n    strh r1, [r3, r2]\n    add r0, #0x10\n    strh r1, [r3, r0]\n    lsl r0, r7, #2\n    add r0, r6, r0\n    sub r2, #0x2c\n    ldr r0, [r0, r2]\n    bl ManagedSprite_SetDrawFlag\n    ldr r3, _0225A130 ; =ov89_0225CBD8\n    lsl r4, r7, #3\n    add r0, r3, r4\n    ldrh r1, [r0, #2]\n    mov r2, #0\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    str r1, [sp]\n    ldrh r1, [r0, #4]\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    str r1, [sp, #4]\n    ldrh r0, [r0, #6]\n    mov r1, #6\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #8]\n    mov r0, #0x10\n    str r0, [sp, #0xc]\n    ldrh r3, [r3, r4]\n    ldr r0, [r6, #8]\n    lsl r3, r3, #0x18\n    lsr r3, r3, #0x18\n    bl FillBgTilemapRect\n    ldr r0, [r6, #8]\n    mov r1, #6\n    bl ScheduleBgTilemapBufferTransfer\n    ldr r0, [sp, #0x14]\n    add r0, r0, #1\n    str r0, [sp, #0x14]\n    mov r0, #0x5b\n    lsl r0, r0, #2\n    ldr r1, [r6, r0]\n    ldr r0, [sp, #0x28]\n    lsl r2, r7, #2\n    ldr r0, [r0, r2]\n    cmp r1, r0\n    bne _0225A0CC\n    ldr r3, _0225A138 ; =ov89_0225CA18\n    ldr r0, _0225A13C ; =0x0000096C\n    ldrsh r1, [r3, r2]\n    add r3, r3, r2\n    mov r2, #2\n    ldrsh r2, [r3, r2]\n    mov r3, #0x11\n    ldr r0, [r6, r0]\n    lsl r3, r3, #0x10\n    bl ManagedSprite_SetPositionXYWithSubscreenOffset\n    ldr r0, _0225A13C ; =0x0000096C\n    mov r1, #1\n    ldr r0, [r6, r0]\n    bl ManagedSprite_SetDrawFlag\n    ldr r1, [sp, #0x28]\n    lsl r0, r7, #2\n    ldr r2, [r1, r0]\n    add r1, r6, r0\n    mov r0, #0x17\n    lsl r0, r0, #4\n    str r2, [r1, r0]\n    add r7, r7, #1\n    cmp r7, #8\n    bge _0225A0E2\n    b _02259FB2\n    mov r0, #0\n    mov r1, #0x17\n    add r7, r0, #0\n    lsl r1, r1, #4\n    sub r2, r0, #1\n    b _0225A0FC\n    lsl r3, r7, #2\n    add r3, r6, r3\n    ldr r3, [r3, r1]\n    cmp r3, r2\n    beq _0225A0FA\n    add r0, r0, #1\n    add r7, r7, #1\n    cmp r7, #8\n    blt _0225A0EE\n    ldr r1, _0225A140 ; =0x000008D3\n    strb r0, [r6, r1]\n    ldr r0, [sp, #0x18]\n    cmp r0, #0\n    ble _0225A116\n    ldr r0, _0225A144 ; =0x000005E4\n    bl PlaySE\n    add sp, #0x2c\n    mov r0, #1\n    pop {r4, r5, r6, r7, pc}\n    ldr r0, [sp, #0x14]\n    cmp r0, #0\n    ble _0225A128\n    ldr r0, _0225A144 ; =0x000005E4\n    bl PlaySE\n    add sp, #0x2c\n    mov r0, #2\n    pop {r4, r5, r6, r7, pc}\n    mov r0, #0\n    add sp, #0x2c\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _0225A130: .word ov89_0225CBD8\n    _0225A134: .word 0x0000099C\n    _0225A138: .word ov89_0225CA18\n    _0225A13C: .word 0x0000096C\n    _0225A140: .word 0x000008D3\n    _0225A144: .word 0x000005E4"
    );
    #endif
}

void ov89_0225A148(void) {
    ov89_0225C724();
}

void ov89_0225A160(void) {
    ov89_0225C818();
}

void ov89_0225A16C(void) {
    /* Original at 0x0225A16C */
    /* Requires manual decompilation - 49 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0x34\n    ldr r4, _0225A1D0 ; =ov89_0225CBA4\n    add r5, r0, #0\n    add r6, r1, #0\n    add r3, sp, #0\n    mov r2, #6\n    ldmia r4!, {r0, r1}\n    stmia r3!, {r0, r1}\n    sub r2, r2, #1\n    bne _0225A17A\n    ldr r0, [r4]\n    mov r4, #0\n    str r0, [r3]\n    mov r0, #0x99\n    add r2, r5, #0\n    lsl r0, r0, #4\n    ldr r1, [r2, r0]\n    cmp r1, #0\n    bne _0225A1B6\n    lsl r1, r6, #5\n    add r1, #0x10\n    add r0, sp, #0\n    strh r1, [r0]\n    mov r1, #0xb0\n    strh r1, [r0, #2]\n    ldr r0, [r5, #0x1c]\n    ldr r1, [r5, #0x20]\n    add r2, sp, #0\n    bl SpriteSystem_NewSprite\n    lsl r1, r4, #2\n    add r2, r5, r1\n    mov r1, #0x99\n    lsl r1, r1, #4\n    str r0, [r2, r1]\n    b _0225A1BE\n    add r4, r4, #1\n    add r2, r2, #4\n    cmp r4, #3\n    blt _0225A18E\n    add r0, r5, #0\n    add r1, r6, #0\n    bl ov89_0225A1D8\n    ldr r0, _0225A1D4 ; =0x000005E5\n    bl PlaySE\n    add sp, #0x34\n    pop {r3, r4, r5, r6, pc}\n    _0225A1D0: .word ov89_0225CBA4\n    _0225A1D4: .word 0x000005E5"
    );
    #endif
}

void ov89_0225A1D8(void) {
    /* Original at 0x0225A1D8 */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #4\n    add r5, r0, #0\n    ldr r0, [r5, #0xc]\n    add r4, r1, #0\n    mov r1, #2\n    bl PaletteData_GetUnfadedBuf\n    add r6, r0, #0\n    ldr r0, [r5, #0xc]\n    mov r1, #2\n    bl PaletteData_GetFadedBuf\n    add r5, r0, #0\n    add r0, r6, #0\n    add r1, r5, #0\n    add r0, #0x22\n    add r1, #0x22\n    mov r2, #0xc\n    bl MIi_CpuCopy16\n    add r4, #0x11\n    mov r0, #0\n    lsl r1, r4, #1\n    str r0, [sp]\n    add r0, r6, r1\n    add r1, r5, r1\n    mov r2, #1\n    mov r3, #6\n    bl BlendPalette\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void ov89_0225A21C(void) {
    /* Original at 0x0225A21C */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    mov r4, #0\n    mov r7, #0x99\n    add r5, r0, #0\n    add r6, r4, #0\n    lsl r7, r7, #4\n    ldr r0, [r5, r7]\n    cmp r0, #0\n    beq _0225A254\n    bl ManagedSprite_IsAnimated\n    cmp r0, #0\n    bne _0225A248\n    mov r0, #0x99\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    bl Sprite_DeleteAndFreeResources\n    mov r0, #0x99\n    lsl r0, r0, #4\n    str r6, [r5, r0]\n    b _0225A254\n    mov r0, #0x99\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    ldr r0, [r0]\n    bl Sprite_TickFrame\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #3\n    blt _0225A228\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov89_0225A260(void) {
    /* Original at 0x0225A260 */
    /* Requires manual decompilation - 109 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x78\n    add r5, r1, #0\n    add r6, r0, #0\n    ldr r0, [r5]\n    str r2, [sp, #0x18]\n    str r3, [sp, #0x1c]\n    ldr r4, [sp, #0x9c]\n    cmp r0, #0\n    beq _0225A278\n    bl GF_AssertFail\n    ldr r0, [r6, #8]\n    ldr r1, [sp, #0x1c]\n    str r0, [sp, #0x20]\n    ldr r0, [sp, #0x18]\n    add r2, sp, #0x28\n    add r3, sp, #0x24\n    ldr r7, [r6, #0x20]\n    bl ov89_0225A368\n    add r0, sp, #0x38\n    bl InitWindow\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r2, [sp, #0x24]\n    ldr r0, [sp, #0x20]\n    lsl r2, r2, #0x18\n    add r1, sp, #0x38\n    lsr r2, r2, #0x18\n    mov r3, #2\n    bl AddTextWindowTopLeftCorner\n    mov r3, #0\n    str r3, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x90]\n    ldr r1, [sp, #0x1c]\n    str r0, [sp, #8]\n    str r3, [sp, #0xc]\n    str r3, [sp, #0x10]\n    ldr r2, [sp, #0x18]\n    add r0, sp, #0x38\n    str r3, [sp, #0x14]\n    bl AddTextPrinterParameterizedWithColorAndSpacing\n    add r0, sp, #0x38\n    mov r1, #1\n    mov r2, #0x7d\n    bl sub_02013688\n    mov r1, #1\n    add r2, r1, #0\n    add r3, sp, #0x2c\n    bl sub_02021AC8\n    ldr r0, [sp, #0xa4]\n    cmp r0, #1\n    bne _0225A2E6\n    ldr r1, [sp, #0x28]\n    lsr r0, r1, #0x1f\n    add r0, r1, r0\n    asr r0, r0, #1\n    sub r4, r4, r0\n    ldr r0, [r6, #0x10]\n    str r0, [sp, #0x48]\n    add r0, sp, #0x38\n    str r0, [sp, #0x4c]\n    add r0, r7, #0\n    bl SpriteManager_GetSpriteList\n    str r0, [sp, #0x50]\n    ldr r1, [sp, #0x98]\n    add r0, r7, #0\n    bl SpriteManager_FindPlttResourceProxy\n    mov r1, #0\n    str r0, [sp, #0x54]\n    ldr r0, [sp, #0x30]\n    str r1, [sp, #0x58]\n    str r0, [sp, #0x5c]\n    ldr r0, [sp, #0xa0]\n    str r4, [sp, #0x60]\n    sub r0, #8\n    str r0, [sp, #0x64]\n    mov r0, #0x33\n    str r0, [sp, #0x6c]\n    mov r0, #1\n    str r0, [sp, #0x70]\n    mov r0, #0x7d\n    str r0, [sp, #0x74]\n    add r0, sp, #0x48\n    str r1, [sp, #0x68]\n    bl sub_020135D8\n    ldr r1, [sp, #0x94]\n    add r6, r0, #0\n    bl sub_020138E0\n    ldr r2, [sp, #0xa0]\n    add r0, r6, #0\n    add r1, r4, #0\n    sub r2, #8\n    bl sub_020136B4\n    add r0, sp, #0x38\n    bl RemoveWindow\n    str r6, [r5]\n    add r3, sp, #0x2c\n    ldmia r3!, {r0, r1}\n    add r2, r5, #4\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    str r0, [r2]\n    ldr r0, [sp, #0x28]\n    strh r0, [r5, #0x10]\n    add sp, #0x78\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov89_0225A354(void) {
    /* Original at 0x0225A354 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4]\n    bl FontOAM_Delete\n    add r0, r4, #4\n    bl sub_02021B5C\n    pop {r4, pc}"
    );
    #endif
}

void ov89_0225A368(void) {
    /* Original at 0x0225A368 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r4, r0, #0\n    add r6, r2, #0\n    add r0, r1, #0\n    add r1, r4, #0\n    mov r2, #0\n    add r7, r3, #0\n    bl FontID_String_GetWidth\n    add r4, r0, #0\n    asr r1, r4, #2\n    lsr r1, r1, #0x1d\n    add r1, r4, r1\n    asr r5, r1, #3\n    mov r1, #8\n    bl FX_ModS32\n    cmp r0, #0\n    beq _0225A390\n    add r5, r5, #1\n    str r4, [r6]\n    str r5, [r7]\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov89_0225A398(void) {
    /* Original at 0x0225A398 */
    /* Requires manual decompilation - 62 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    ldr r1, _0225A410 ; =0x000019D4\n    add r5, r0, #0\n    add r0, r1, #4\n    ldr r2, [r5, r1]\n    ldr r0, [r5, r0]\n    cmp r2, r0\n    bne _0225A3C2\n    add r2, #0x88\n    str r2, [r5, r1]\n    mov r0, #2\n    ldr r2, [r5, r1]\n    lsl r0, r0, #0xc\n    cmp r2, r0\n    ble _0225A3B8\n    str r0, [r5, r1]\n    ldr r0, _0225A410 ; =0x000019D4\n    ldr r1, [r5, r0]\n    add r0, r0, #4\n    str r1, [r5, r0]\n    b _0225A3DE\n    add r0, r1, #4\n    ldr r2, [r5, r0]\n    add r0, r1, #0\n    add r0, #8\n    ldr r0, [r5, r0]\n    sub r2, r2, r0\n    add r0, r1, #4\n    str r2, [r5, r0]\n    ldr r2, [r5, r1]\n    ldr r0, [r5, r0]\n    cmp r0, r2\n    bge _0225A3DE\n    add r0, r1, #4\n    str r2, [r5, r0]\n    ldr r0, _0225A414 ; =0x000019D8\n    mov r6, #0\n    ldr r0, [r5, r0]\n    mov r4, #0x10\n    asr r1, r0, #8\n    mov r0, #0x20\n    sub r0, r0, r1\n    add r0, #0xb0\n    lsl r0, r0, #0x10\n    asr r7, r0, #0x10\n    ldr r0, _0225A418 ; =0x00000924\n    lsl r1, r4, #0x10\n    mov r3, #0x11\n    ldr r0, [r5, r0]\n    asr r1, r1, #0x10\n    add r2, r7, #0\n    lsl r3, r3, #0x10\n    bl ManagedSprite_SetPositionXYWithSubscreenOffset\n    add r6, r6, #1\n    add r4, #0x20\n    add r5, r5, #4\n    cmp r6, #6\n    blt _0225A3F2\n    pop {r3, r4, r5, r6, r7, pc}\n    _0225A410: .word 0x000019D4\n    _0225A414: .word 0x000019D8\n    _0225A418: .word 0x00000924"
    );
    #endif
}

void ov89_0225A41C(void) {
    /* Original at 0x0225A41C */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, _0225A464 ; =0x000019D4\n    add r4, r1, #0\n    ldr r1, [r5, r0]\n    cmp r1, r4\n    bge _0225A42E\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    add r0, r0, #4\n    ldr r0, [r5, r0]\n    cmp r0, r1\n    bge _0225A442\n    bl GF_AssertFail\n    ldr r0, _0225A464 ; =0x000019D4\n    ldr r1, [r5, r0]\n    add r0, r0, #4\n    str r1, [r5, r0]\n    ldr r1, _0225A464 ; =0x000019D4\n    ldr r0, [r5, r1]\n    sub r0, r0, r4\n    str r0, [r5, r1]\n    add r0, r1, #4\n    ldr r2, [r5, r0]\n    ldr r0, [r5, r1]\n    add r1, #8\n    sub r2, r2, r0\n    asr r0, r2, #1\n    lsr r0, r0, #0x1e\n    add r0, r2, r0\n    asr r0, r0, #2\n    str r0, [r5, r1]\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    nop\n    _0225A464: .word 0x000019D4"
    );
    #endif
}

void ov89_0225A468(void) {
    /* Original at 0x0225A468 */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void ov89_0225A46C(void) {
    /* Original at 0x0225A46C */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _0225A474 ; =MI_CpuFill8\n    mov r1, #0\n    ldr r2, _0225A478 ; =0x00000744\n    bx r3\n    _0225A474: .word MI_CpuFill8\n    _0225A478: .word 0x00000744"
    );
    #endif
}

void ov89_0225A47C(void) {
    ov89_0225AC10(0);
}

void ov89_0225A49C(void) {
    /* Original at 0x0225A49C */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #8\n    ldr r4, _0225A4F0 ; =0x0000073C\n    ldrb r4, [r1, r4]\n    cmp r4, #0\n    beq _0225A4AE\n    add sp, #8\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    mov r4, #0\n    add r5, r1, #0\n    add r6, r5, #0\n    add r6, #0xb4\n    ldr r6, [r6]\n    cmp r6, #0\n    bne _0225A4E2\n    ldr r6, [sp, #0x18]\n    add r5, r1, #0\n    str r6, [sp]\n    ldr r6, [sp, #0x1c]\n    add r5, #0xb4\n    lsl r4, r4, #2\n    str r6, [sp, #4]\n    bl ov89_0225A7BC\n    str r0, [r5, r4]\n    ldr r0, [r5, r4]\n    cmp r0, #0\n    beq _0225A4DC\n    add sp, #8\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    add sp, #8\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #0x80\n    blt _0225A4B2\n    mov r0, #0\n    add sp, #8\n    pop {r4, r5, r6, pc}\n    _0225A4F0: .word 0x0000073C"
    );
    #endif
}

void ov89_0225A4F4(void) {
    /* Original at 0x0225A4F4 */
    /* Requires manual decompilation - 81 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r4, r1, #0\n    ldr r1, _0225A590 ; =0x0000073D\n    add r7, r0, #0\n    ldrb r1, [r7, r1]\n    cmp r1, #0\n    beq _0225A50A\n    add r1, r7, #0\n    add r1, #0xb0\n    bl ov89_0225BE84\n    ldr r0, _0225A594 ; =0x0000073C\n    ldrb r3, [r7, r0]\n    cmp r3, #0\n    beq _0225A52A\n    add r2, r4, #0\n    lsl r4, r3, #2\n    ldr r3, _0225A598 ; =ov89_0225CD10\n    add r0, r7, #0\n    ldr r3, [r3, r4]\n    add r1, r7, #0\n    blx r3\n    cmp r0, #1\n    bne _0225A52A\n    ldr r0, _0225A594 ; =0x0000073C\n    mov r1, #0\n    strb r1, [r7, r0]\n    mov r4, #0\n    add r6, r7, #0\n    add r0, r6, #0\n    add r0, #0xb4\n    ldr r5, [r0]\n    cmp r5, #0\n    beq _0225A586\n    mov r0, #9\n    lsl r0, r0, #6\n    ldr r0, [r5, r0]\n    lsl r1, r0, #0x10\n    lsr r1, r1, #0x18\n    bne _0225A560\n    lsl r0, r0, #8\n    lsr r1, r0, #0x18\n    beq _0225A560\n    mov r0, #9\n    lsl r0, r0, #6\n    ldr r2, [r5, r0]\n    ldr r0, _0225A59C ; =0xFFFF00FF\n    lsl r1, r1, #0x18\n    and r0, r2\n    lsr r1, r1, #0x10\n    orr r1, r0\n    mov r0, #9\n    lsl r0, r0, #6\n    str r1, [r5, r0]\n    mov r2, #9\n    lsl r2, r2, #6\n    ldr r2, [r5, r2]\n    mov r3, #0xc\n    lsl r2, r2, #0x10\n    lsr r2, r2, #0x18\n    mul r3, r2\n    ldr r2, _0225A5A0 ; =ov89_0225CDB0\n    add r0, r7, #0\n    ldr r2, [r2, r3]\n    add r1, r5, #0\n    blx r2\n    cmp r0, #1\n    bne _0225A586\n    add r0, r7, #0\n    add r1, r5, #0\n    add r2, r4, #0\n    bl ov89_0225AC24\n    add r4, r4, #1\n    add r6, r6, #4\n    cmp r4, #0x80\n    blt _0225A52E\n    pop {r3, r4, r5, r6, r7, pc}\n    _0225A590: .word 0x0000073D\n    _0225A594: .word 0x0000073C\n    _0225A598: .word ov89_0225CD10\n    _0225A59C: .word 0xFFFF00FF\n    _0225A5A0: .word ov89_0225CDB0"
    );
    #endif
}

void ov89_0225A5A4(void) {
    /* Original at 0x0225A5A4 */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    ldr r7, _0225A5E8 ; =ov89_0225CDB0\n    mov r4, #0\n    add r5, r6, #0\n    add r0, r5, #0\n    add r0, #0xb4\n    ldr r1, [r0]\n    cmp r1, #0\n    beq _0225A5DC\n    mov r0, #9\n    lsl r0, r0, #6\n    ldr r0, [r1, r0]\n    lsl r0, r0, #0x10\n    lsr r2, r0, #0x18\n    mov r0, #0xc\n    mul r0, r2\n    add r0, r7, r0\n    ldr r2, [r0, #4]\n    cmp r2, #0\n    beq _0225A5D4\n    add r0, r6, #0\n    blx r2\n    b _0225A5DC\n    add r1, #0x1c\n    add r0, r1, #0\n    bl sub_020181EC\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #0x80\n    blt _0225A5AE\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0225A5E8: .word ov89_0225CDB0"
    );
    #endif
}

void ov89_0225A5EC(void) {
    /* Original at 0x0225A5EC */
    /* Requires manual decompilation - 178 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r7, r0, #0\n    mov r0, #0\n    mov r6, #9\n    str r0, [sp, #0x10]\n    str r0, [sp, #0xc]\n    add r1, r0, #0\n    add r2, r7, #0\n    add r3, r7, #0\n    lsl r6, r6, #6\n    add r0, r2, #0\n    add r0, #0xb4\n    ldr r0, [r0]\n    cmp r0, #0\n    beq _0225A63A\n    ldr r4, [r0, r6]\n    lsl r4, r4, #0x10\n    lsr r4, r4, #0x18\n    beq _0225A624\n    mov r4, #0xad\n    lsl r4, r4, #2\n    str r0, [r3, r4]\n    ldr r0, [sp, #0x10]\n    add r3, r3, #4\n    add r0, r0, #1\n    str r0, [sp, #0x10]\n    b _0225A63A\n    ldr r4, [sp, #0xc]\n    mov r5, #0x7f\n    sub r4, r5, r4\n    lsl r4, r4, #2\n    add r5, r7, r4\n    mov r4, #0xad\n    lsl r4, r4, #2\n    str r0, [r5, r4]\n    ldr r0, [sp, #0xc]\n    add r0, r0, #1\n    str r0, [sp, #0xc]\n    add r1, r1, #1\n    add r2, r2, #4\n    cmp r1, #0x80\n    blt _0225A602\n    mov r0, #0\n    str r0, [sp, #4]\n    ldr r0, [sp, #0xc]\n    cmp r0, #0\n    ble _0225A6F6\n    ldr r0, [sp, #4]\n    mov r1, #0x7f\n    sub r0, r1, r0\n    lsl r0, r0, #2\n    add r1, r7, r0\n    mov r0, #0xad\n    lsl r0, r0, #2\n    ldr r4, [r1, r0]\n    mov r0, #0\n    str r0, [sp, #8]\n    ldr r0, [sp, #0x10]\n    cmp r0, #0\n    ble _0225A6EA\n    add r5, r7, #0\n    mov r0, #0xad\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r3, #9\n    str r0, [sp]\n    ldr r1, [sp]\n    lsl r3, r3, #6\n    add r6, r1, #0\n    ldr r3, [r6, r3]\n    mov r6, #0xc\n    lsl r3, r3, #0x10\n    lsr r3, r3, #0x18\n    mul r6, r3\n    ldr r3, _0225A754 ; =ov89_0225CDB0\n    add r0, r7, #0\n    add r3, r3, r6\n    ldr r3, [r3, #8]\n    add r2, r4, #0\n    blx r3\n    cmp r0, #1\n    bne _0225A6DC\n    mov r1, #9\n    ldr r2, [sp]\n    lsl r1, r1, #6\n    ldr r1, [r2, r1]\n    add r0, r4, #0\n    lsl r1, r1, #0x10\n    lsr r1, r1, #0x18\n    bl ov89_0225AFC0\n    cmp r0, #1\n    bne _0225A6DC\n    mov r0, #9\n    lsl r0, r0, #6\n    ldr r0, [r4, r0]\n    lsr r0, r0, #0x18\n    cmp r0, #0xff\n    bne _0225A6DC\n    mov r1, #9\n    lsl r1, r1, #6\n    ldr r2, [r4, r1]\n    ldr r0, _0225A758 ; =0x00FFFFFF\n    and r0, r2\n    ldr r2, [sp]\n    ldr r2, [r2, r1]\n    lsr r2, r2, #0x18\n    lsl r2, r2, #0x18\n    orr r0, r2\n    str r0, [r4, r1]\n    ldr r2, [sp]\n    add r0, r7, #0\n    ldr r2, [r2, r1]\n    lsr r1, r2, #0x18\n    lsl r2, r2, #0x10\n    lsr r2, r2, #0x18\n    bl ov89_0225AF10\n    b _0225A6EA\n    ldr r0, [sp, #8]\n    add r5, r5, #4\n    add r1, r0, #1\n    ldr r0, [sp, #0x10]\n    str r1, [sp, #8]\n    cmp r1, r0\n    blt _0225A668\n    ldr r0, [sp, #4]\n    add r1, r0, #1\n    ldr r0, [sp, #0xc]\n    str r1, [sp, #4]\n    cmp r1, r0\n    blt _0225A64C\n    ldr r0, _0225A75C ; =0x0000073D\n    ldrb r1, [r7, r0]\n    cmp r1, #0\n    beq _0225A750\n    add r0, r0, #1\n    ldrb r0, [r7, r0]\n    cmp r0, #1\n    bne _0225A750\n    mov r5, #0\n    add r6, r7, #0\n    add r0, r6, #0\n    add r0, #0xb4\n    ldr r4, [r0]\n    cmp r4, #0\n    beq _0225A742\n    ldr r0, _0225A75C ; =0x0000073D\n    ldrb r1, [r7, r0]\n    mov r0, #9\n    lsl r0, r0, #6\n    ldr r0, [r4, r0]\n    lsl r2, r0, #0x10\n    lsr r2, r2, #0x18\n    cmp r2, r1\n    beq _0225A742\n    lsl r0, r0, #8\n    lsr r0, r0, #0x18\n    cmp r0, r1\n    beq _0225A742\n    add r0, r4, #0\n    bl ov89_0225AFC0\n    cmp r0, #0\n    bne _0225A742\n    add r0, r7, #0\n    add r1, r4, #0\n    add r2, r5, #0\n    bl ov89_0225AC24\n    add r5, r5, #1\n    add r6, r6, #4\n    cmp r5, #0x80\n    blt _0225A70A\n    add r0, r7, #0\n    bl ov89_0225AF9C\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    _0225A754: .word ov89_0225CDB0\n    _0225A758: .word 0x00FFFFFF\n    _0225A75C: .word 0x0000073D"
    );
    #endif
}

void ov89_0225A760(void) {
    /* Original at 0x0225A760 */
    /* Requires manual decompilation - 41 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    ldr r0, _0225A7B8 ; =0x000004B4\n    mov r4, #0\n    str r1, [sp]\n    add r5, r6, r0\n    add r7, r4, #0\n    ldr r0, [r5]\n    cmp r0, #0\n    beq _0225A78C\n    ldr r1, [r0, #4]\n    bl DC_FlushRange\n    ldr r0, [r5]\n    mov r1, #1\n    bl NNS_G3dTexLoad\n    ldr r0, [r5]\n    mov r1, #1\n    bl NNS_G3dPlttLoad\n    str r7, [r5]\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #0x20\n    blt _0225A76E\n    mov r1, #0x1d\n    lsl r1, r1, #6\n    ldrb r0, [r6, r1]\n    cmp r0, #0\n    beq _0225A7B6\n    ldr r0, [sp]\n    cmp r0, #3\n    beq _0225A7B6\n    add r1, r1, #2\n    ldrsh r1, [r6, r1]\n    mov r0, #0\n    bl SetMasterBrightness\n    mov r0, #0x1d\n    mov r1, #0\n    lsl r0, r0, #6\n    strb r1, [r6, r0]\n    pop {r3, r4, r5, r6, r7, pc}\n    _0225A7B8: .word 0x000004B4"
    );
    #endif
}

void ov89_0225A7BC(void) {
    /* Original at 0x0225A7BC */
    /* Requires manual decompilation - 84 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    str r1, [sp, #8]\n    mov r1, #0x91\n    add r7, r0, #0\n    mov r0, #0x7d\n    lsl r1, r1, #2\n    add r5, r2, #0\n    str r3, [sp, #0xc]\n    bl Heap_Alloc\n    mov r2, #0x91\n    mov r1, #0\n    lsl r2, r2, #2\n    add r4, r0, #0\n    bl MI_CpuFill8\n    mov r2, #9\n    lsl r2, r2, #6\n    ldr r1, [r4, r2]\n    ldr r0, _0225A874 ; =0x00FFFFFF\n    add r6, r5, #0\n    and r1, r0\n    lsl r0, r0, #0x18\n    orr r0, r1\n    str r0, [r4, r2]\n    ldmia r6!, {r0, r1}\n    add r3, r4, #0\n    stmia r3!, {r0, r1}\n    ldr r0, [r6]\n    sub r2, #0x53\n    str r0, [r3]\n    ldrh r0, [r4, #2]\n    cmp r0, r2\n    bls _0225A80A\n    bl GF_AssertFail\n    mov r0, #0x84\n    strh r0, [r4, #2]\n    ldr r0, [sp, #0x34]\n    str r4, [sp]\n    str r0, [sp, #4]\n    add r1, r4, #0\n    ldr r0, [sp, #8]\n    ldr r2, [sp, #0xc]\n    ldr r3, [sp, #0x30]\n    add r1, #0xc\n    bl ov89_0225A878\n    cmp r0, #0\n    bne _0225A828\n    add sp, #0x18\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r4, #0\n    add r1, r4, #0\n    add r0, #0x1c\n    add r1, #0xc\n    bl sub_020181B0\n    add r0, sp, #0x10\n    str r0, [sp]\n    ldrb r1, [r5, #9]\n    ldrb r2, [r5, #0xa]\n    add r0, r7, #0\n    add r3, sp, #0x14\n    bl ov89_0225AC68\n    add r0, r4, #0\n    mov r3, #1\n    ldr r1, [sp, #0x14]\n    ldr r2, [sp, #0x10]\n    add r0, #0x1c\n    lsl r3, r3, #0x10\n    bl sub_020182A8\n    mov r1, #1\n    lsl r1, r1, #0xc\n    add r0, r4, #0\n    add r0, #0x1c\n    add r2, r1, #0\n    add r3, r1, #0\n    bl sub_020182C4\n    add r0, r4, #0\n    add r0, #0x1c\n    mov r1, #0\n    bl sub_020182A0\n    add r0, r4, #0\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    _0225A874: .word 0x00FFFFFF"
    );
    #endif
}

void ov89_0225A878(void) {
    /* Original at 0x0225A878 */
    /* Requires manual decompilation - 99 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r4, r2, #0\n    add r7, r0, #0\n    add r5, r1, #0\n    add r6, r3, #0\n    mov r2, #0\n    add r0, r4, #0\n    mov r1, #0x1d\n    mov r3, #0x7d\n    str r2, [sp]\n    bl GfGfxLoader_LoadFromOpenNarc\n    str r0, [r5]\n    cmp r0, #0\n    bne _0225A89C\n    bl GF_AssertFail\n    ldr r0, [r5]\n    bl NNS_G3dGetMdlSet\n    str r0, [r5, #4]\n    cmp r0, #0\n    beq _0225A8C8\n    add r1, r0, #0\n    add r1, #8\n    beq _0225A8BC\n    ldrb r2, [r0, #9]\n    cmp r2, #0\n    bls _0225A8BC\n    ldrh r2, [r0, #0xe]\n    add r1, r1, r2\n    add r1, r1, #4\n    b _0225A8BE\n    mov r1, #0\n    cmp r1, #0\n    beq _0225A8C8\n    ldr r1, [r1]\n    add r0, r0, r1\n    b _0225A8CA\n    mov r0, #0\n    str r0, [r5, #8]\n    ldr r0, [r5]\n    bl NNS_G3dGetTex\n    str r0, [r5, #0xc]\n    cmp r0, #0\n    beq _0225A94A\n    ldr r1, [sp, #0x24]\n    ldr r3, [sp, #0x20]\n    str r1, [sp]\n    add r1, r4, #0\n    add r2, r6, #0\n    bl ov89_0225AA24\n    ldr r0, [r5, #0xc]\n    bl ov89_0225A9B4\n    add r4, r0, #0\n    beq _0225A8FC\n    ldr r1, [r5, #0xc]\n    add r0, r7, #0\n    bl ov89_0225A958\n    cmp r0, #0\n    bne _0225A942\n    cmp r4, #1\n    bne _0225A926\n    ldr r0, [r5, #0xc]\n    add r1, sp, #8\n    add r2, sp, #4\n    bl NNS_G3dTexReleaseTexKey\n    ldr r1, _0225A950 ; =NNS_GfdDefaultFuncFreeTexVram\n    ldr r0, [sp, #8]\n    ldr r1, [r1]\n    blx r1\n    ldr r1, _0225A950 ; =NNS_GfdDefaultFuncFreeTexVram\n    ldr r0, [sp, #4]\n    ldr r1, [r1]\n    blx r1\n    ldr r0, [r5, #0xc]\n    bl NNS_G3dPlttReleasePlttKey\n    ldr r1, _0225A954 ; =NNS_GfdDefaultFuncFreePlttVram\n    ldr r1, [r1]\n    blx r1\n    ldr r0, [r5]\n    cmp r0, #0\n    beq _0225A930\n    bl Heap_Free\n    mov r1, #0x10\n    mov r0, #0\n    strb r0, [r5]\n    add r5, r5, #1\n    sub r1, r1, #1\n    bne _0225A934\n    add sp, #0xc\n    mov r0, #0\n    pop {r4, r5, r6, r7, pc}\n    ldr r0, [r5]\n    ldr r1, [r5, #0xc]\n    bl GF3dRender_BindModelSet\n    mov r0, #1\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    _0225A950: .word NNS_GfdDefaultFuncFreeTexVram\n    _0225A954: .word NNS_GfdDefaultFuncFreePlttVram"
    );
    #endif
}

void ov89_0225A958(void) {
    /* Original at 0x0225A958 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5}\n    ldr r2, _0225A984 ; =0x000004B4\n    mov r4, #0\n    add r5, r0, #0\n    ldr r3, [r5, r2]\n    cmp r3, #0\n    bne _0225A974\n    lsl r2, r4, #2\n    add r2, r0, r2\n    ldr r0, _0225A984 ; =0x000004B4\n    str r1, [r2, r0]\n    mov r0, #1\n    pop {r4, r5}\n    bx lr\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #0x20\n    blt _0225A960\n    mov r0, #0\n    pop {r4, r5}\n    bx lr\n    nop\n    _0225A984: .word 0x000004B4"
    );
    #endif
}

void ov89_0225A988(void) {
    /* Original at 0x0225A988 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5}\n    ldr r2, _0225A9B0 ; =0x000004B4\n    mov r4, #0\n    add r5, r0, #0\n    ldr r3, [r5, r2]\n    cmp r3, r1\n    bne _0225A9A4\n    lsl r1, r4, #2\n    add r1, r0, r1\n    ldr r0, _0225A9B0 ; =0x000004B4\n    mov r2, #0\n    str r2, [r1, r0]\n    pop {r4, r5}\n    bx lr\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #0x20\n    blt _0225A990\n    pop {r4, r5}\n    bx lr\n    _0225A9B0: .word 0x000004B4"
    );
    #endif
}

void ov89_0225A9B4(void) {
    /* Original at 0x0225A9B4 */
    /* Requires manual decompilation - 49 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    mov r1, #0\n    str r1, [r5, #8]\n    bl NNS_G3dTexGetRequiredSize\n    add r4, r0, #0\n    add r0, r5, #0\n    bl NNS_G3dPlttGetRequiredSize\n    ldr r3, _0225AA18 ; =NNS_GfdDefaultFuncAllocTexVram\n    mov r1, #0\n    add r6, r0, #0\n    ldr r3, [r3]\n    add r0, r4, #0\n    add r2, r1, #0\n    blx r3\n    add r4, r0, #0\n    bne _0225A9DE\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    ldr r3, _0225AA1C ; =NNS_GfdDefaultFuncAllocPlttVram\n    mov r1, #2\n    ldrh r2, [r5, #0x20]\n    lsl r1, r1, #0xe\n    ldr r3, [r3]\n    and r1, r2\n    add r0, r6, #0\n    mov r2, #0\n    blx r3\n    add r6, r0, #0\n    bne _0225AA00\n    ldr r1, _0225AA20 ; =NNS_GfdDefaultFuncFreeTexVram\n    add r0, r4, #0\n    ldr r1, [r1]\n    blx r1\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #0\n    bl NNS_G3dTexSetTexKey\n    add r0, r5, #0\n    add r1, r6, #0\n    bl NNS_G3dPlttSetPlttKey\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    nop\n    _0225AA18: .word NNS_GfdDefaultFuncAllocTexVram\n    _0225AA1C: .word NNS_GfdDefaultFuncAllocPlttVram\n    _0225AA20: .word NNS_GfdDefaultFuncFreeTexVram"
    );
    #endif
}

void ov89_0225AA24(void) {
    /* Original at 0x0225AA24 */
    /* Requires manual decompilation - 150 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x24\n    add r4, r1, #0\n    add r1, r3, #0\n    str r0, [sp, #4]\n    add r5, r2, #0\n    ldrh r0, [r3, #2]\n    ldrb r1, [r1, #8]\n    ldr r2, [sp, #0x38]\n    str r3, [sp, #8]\n    bl ov89_0225C88C\n    str r0, [sp, #0x14]\n    ldr r0, [sp, #4]\n    ldr r1, [r0, #0x14]\n    add r0, r0, r1\n    str r0, [sp, #0x1c]\n    ldr r0, [sp, #0x14]\n    cmp r0, #1\n    bne _0225AA68\n    mov r2, #1\n    ldr r1, [sp, #8]\n    str r2, [sp]\n    ldrh r1, [r1, #2]\n    add r0, r5, #0\n    mov r3, #0x7d\n    add r1, r1, #3\n    bl GfGfxLoader_LoadFromOpenNarc\n    add r1, sp, #0x20\n    str r0, [sp, #0x18]\n    bl NNS_G2dGetUnpackedCharacterData\n    b _0225AA80\n    mov r0, #1\n    str r0, [sp]\n    add r0, r4, #0\n    mov r1, #0x10\n    mov r2, #0\n    mov r3, #0x7d\n    bl GfGfxLoader_LoadFromOpenNarc\n    add r1, sp, #0x20\n    str r0, [sp, #0x18]\n    bl NNS_G2dGetUnpackedCharacterData\n    ldr r1, [sp, #0x1c]\n    mov r0, #0\n    mov r2, #0x40\n    bl MIi_CpuClear16\n    ldr r0, [sp, #0x20]\n    ldr r2, [sp, #0x1c]\n    ldr r1, [r0, #0x14]\n    mov r0, #0\n    str r1, [sp, #0xc]\n    str r0, [sp, #0x10]\n    ldr r0, [sp, #0x10]\n    cmp r0, #3\n    bhi _0225AB00\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0225AAA8: ; jump table\n    ldr r0, [sp, #0x14]\n    cmp r0, #1\n    bne _0225AABC\n    ldr r1, [sp, #0xc]\n    add r1, #0x80\n    b _0225AABE\n    ldr r1, [sp, #0xc]\n    ldr r2, [sp, #0x1c]\n    b _0225AB00\n    ldr r0, [sp, #0x14]\n    cmp r0, #1\n    bne _0225AACE\n    ldr r1, [sp, #0xc]\n    add r1, #0xa0\n    b _0225AAD2\n    ldr r1, [sp, #0xc]\n    add r1, #0x20\n    ldr r0, [sp, #0x1c]\n    add r2, r0, #2\n    b _0225AB00\n    ldr r0, [sp, #0x14]\n    cmp r0, #1\n    bne _0225AAE2\n    ldr r1, [sp, #0xc]\n    b _0225AAE6\n    ldr r1, [sp, #0xc]\n    add r1, #0x40\n    ldr r2, [sp, #0x1c]\n    add r2, #0x20\n    b _0225AB00\n    ldr r0, [sp, #0x14]\n    cmp r0, #1\n    bne _0225AAF8\n    ldr r1, [sp, #0xc]\n    add r1, #0x20\n    b _0225AAFC\n    ldr r1, [sp, #0xc]\n    add r1, #0x60\n    ldr r2, [sp, #0x1c]\n    add r2, #0x22\n    mov r5, #0\n    mov ip, r5\n    mov r0, #0\n    add r7, r0, #0\n    ldrb r4, [r1, r5]\n    mov r3, #0xf\n    tst r3, r4\n    beq _0225AB1A\n    mov r3, #1\n    ldrh r4, [r2]\n    lsl r3, r0\n    orr r3, r4\n    strh r3, [r2]\n    ldrb r4, [r1, r5]\n    mov r3, #0xf0\n    tst r3, r4\n    beq _0225AB2E\n    ldrh r6, [r2]\n    add r4, r0, #2\n    mov r3, #1\n    lsl r3, r4\n    orr r3, r6\n    strh r3, [r2]\n    add r7, r7, #1\n    add r0, r0, #4\n    add r5, r5, #1\n    cmp r7, #4\n    blt _0225AB08\n    mov r0, ip\n    add r0, r0, #1\n    add r2, r2, #4\n    mov ip, r0\n    cmp r0, #8\n    blt _0225AB04\n    ldr r0, [sp, #0x10]\n    add r0, r0, #1\n    str r0, [sp, #0x10]\n    cmp r0, #4\n    blt _0225AA96\n    ldr r0, [sp, #8]\n    ldrh r2, [r0]\n    ldr r0, [sp, #4]\n    ldr r1, [r0, #0x38]\n    add r0, r0, r1\n    strh r2, [r0, #2]\n    ldr r0, [sp, #0x18]\n    bl Heap_Free\n    add sp, #0x24\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov89_0225AB64(void) {
    /* Original at 0x0225AB64 */
    /* Requires manual decompilation - 82 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    str r0, [sp]\n    ldr r0, [r0, #0x14]\n    add r4, r1, #0\n    str r0, [sp, #8]\n    mov r0, #0x7d\n    mov r1, #0x40\n    bl Heap_Alloc\n    str r0, [sp, #4]\n    ldr r1, [sp]\n    ldr r0, [sp, #8]\n    mov r2, #0x40\n    add r0, r1, r0\n    ldr r1, [sp, #4]\n    bl MIi_CpuCopy16\n    ldr r2, [sp]\n    ldr r1, [sp, #8]\n    mov r0, #0\n    add r1, r2, r1\n    mov r2, #0x40\n    bl MIi_CpuClear16\n    cmp r4, #3\n    beq _0225ABA0\n    cmp r4, #4\n    beq _0225ABD0\n    b _0225AC06\n    ldr r3, [sp, #4]\n    mov r2, #0x1e\n    mov r7, #0\n    mov r5, #3\n    ldr r4, [sp]\n    ldr r0, [sp, #8]\n    mov r1, #0\n    add r4, r4, r0\n    ldr r6, [r3]\n    ldr r0, [r4]\n    lsr r6, r1\n    and r6, r5\n    lsl r6, r2\n    orr r0, r6\n    add r1, r1, #2\n    stmia r4!, {r0}\n    cmp r1, #0x20\n    blt _0225ABB0\n    add r7, r7, #1\n    sub r2, r2, #2\n    add r3, r3, #4\n    cmp r7, #0x10\n    blt _0225ABA8\n    b _0225AC06\n    ldr r2, [sp]\n    ldr r0, [sp, #8]\n    mov r3, #0\n    add r0, r2, r0\n    add r0, #0x3c\n    ldr r1, [sp, #4]\n    add r7, r3, #0\n    mov ip, r0\n    mov r6, #3\n    mov r4, #0\n    mov r2, ip\n    ldr r5, [r1]\n    ldr r0, [r2]\n    lsr r5, r4\n    and r5, r6\n    lsl r5, r3\n    orr r0, r5\n    str r0, [r2]\n    add r4, r4, #2\n    sub r2, r2, #4\n    cmp r4, #0x20\n    blt _0225ABE6\n    add r7, r7, #1\n    add r3, r3, #2\n    add r1, r1, #4\n    cmp r7, #0x10\n    blt _0225ABE2\n    ldr r0, [sp, #4]\n    bl Heap_Free\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov89_0225AC10(void) {
    /* Original at 0x0225AC10 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    add r0, #0xc\n    bl sub_02018068\n    add r0, r4, #0\n    bl Heap_Free\n    pop {r4, pc}"
    );
    #endif
}

void ov89_0225AC24(void) {
    /* Original at 0x0225AC24 */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    mov r0, #9\n    add r4, r1, #0\n    lsl r0, r0, #6\n    ldr r0, [r4, r0]\n    add r6, r2, #0\n    lsl r1, r0, #0x1c\n    lsr r1, r1, #0x1c\n    beq _0225AC40\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x1c\n    cmp r0, #1\n    bne _0225AC48\n    ldr r1, [r4, #0x18]\n    add r0, r5, #0\n    bl ov89_0225A988\n    mov r1, #9\n    lsl r1, r1, #6\n    ldr r1, [r4, r1]\n    add r0, r5, #0\n    lsr r1, r1, #0x18\n    bl ov89_0225AF7C\n    add r0, r4, #0\n    bl ov89_0225AC10\n    lsl r0, r6, #2\n    add r0, r5, r0\n    mov r1, #0\n    add r0, #0xb4\n    str r1, [r0]\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov89_0225AC68(void) {
    /* Original at 0x0225AC68 */
    /* Requires manual decompilation - 74 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7}\n    add r0, r2, #0\n    asr r2, r1, #3\n    lsr r2, r2, #0x1c\n    add r2, r1, r2\n    add r5, r3, #0\n    asr r3, r2, #4\n    ldr r4, [sp, #0x10]\n    cmp r3, #0x11\n    blo _0225AC7E\n    mov r3, #0x10\n    ldr r2, _0225ACF8 ; =ov89_0225CD6C\n    lsl r6, r3, #2\n    ldr r7, [r2, r6]\n    cmp r3, #0x10\n    str r7, [r5]\n    bhs _0225ACB4\n    ldr r2, [r5]\n    lsl r6, r1, #0x1c\n    mov ip, r2\n    lsr r2, r1, #0x1f\n    sub r6, r6, r2\n    mov r1, #0x1c\n    ror r6, r1\n    add r1, r2, r6\n    add r2, r3, #1\n    lsl r3, r2, #2\n    ldr r2, _0225ACF8 ; =ov89_0225CD6C\n    ldr r2, [r2, r3]\n    sub r3, r2, r7\n    asr r2, r3, #3\n    lsr r2, r2, #0x1c\n    add r2, r3, r2\n    asr r2, r2, #4\n    mul r2, r1\n    mov r1, ip\n    add r1, r1, r2\n    str r1, [r5]\n    asr r1, r0, #3\n    lsr r1, r1, #0x1c\n    add r1, r0, r1\n    asr r6, r1, #4\n    cmp r6, #0xb\n    blo _0225ACC2\n    mov r6, #0xa\n    ldr r5, _0225ACFC ; =ov89_0225CCE4\n    lsl r1, r6, #2\n    ldr r3, [r5, r1]\n    cmp r6, #0xa\n    str r3, [r4]\n    bhs _0225ACF2\n    lsr r1, r0, #0x1f\n    lsl r7, r0, #0x1c\n    sub r7, r7, r1\n    mov r0, #0x1c\n    ror r7, r0\n    add r0, r1, r7\n    add r1, r6, #1\n    lsl r1, r1, #2\n    ldr r1, [r5, r1]\n    ldr r2, [r4]\n    sub r3, r1, r3\n    asr r1, r3, #3\n    lsr r1, r1, #0x1c\n    add r1, r3, r1\n    asr r1, r1, #4\n    mul r1, r0\n    add r0, r2, r1\n    str r0, [r4]\n    pop {r4, r5, r6, r7}\n    bx lr\n    nop\n    _0225ACF8: .word ov89_0225CD6C\n    _0225ACFC: .word ov89_0225CCE4"
    );
    #endif
}

void ov89_0225AD00(void) {
    /* Original at 0x0225AD00 */
    /* Requires manual decompilation - 48 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6}\n    ldr r2, _0225AD5C ; =0x00000534\n    mov r1, #1\n    ldr r5, [r0, r2]\n    add r3, r1, #0\n    add r4, r3, #0\n    lsl r4, r1\n    add r2, r5, #0\n    tst r2, r4\n    bne _0225AD22\n    ldr r2, _0225AD5C ; =0x00000534\n    ldr r3, [r0, r2]\n    orr r3, r4\n    str r3, [r0, r2]\n    add r0, r1, #0\n    pop {r3, r4, r5, r6}\n    bx lr\n    add r1, r1, #1\n    cmp r1, #0x20\n    blt _0225AD0A\n    mov r5, #0\n    cmp r1, #0x3f\n    bge _0225AD54\n    ldr r2, _0225AD60 ; =0x00000538\n    mov r3, #1\n    ldr r6, [r0, r2]\n    add r4, r3, #0\n    lsl r4, r5\n    add r2, r6, #0\n    tst r2, r4\n    bne _0225AD4C\n    ldr r2, _0225AD60 ; =0x00000538\n    ldr r3, [r0, r2]\n    orr r3, r4\n    str r3, [r0, r2]\n    add r0, r1, #0\n    pop {r3, r4, r5, r6}\n    bx lr\n    add r1, r1, #1\n    add r5, r5, #1\n    cmp r1, #0x3f\n    blt _0225AD34\n    mov r0, #0xff\n    pop {r3, r4, r5, r6}\n    bx lr\n    nop\n    _0225AD5C: .word 0x00000534\n    _0225AD60: .word 0x00000538"
    );
    #endif
}

void ov89_0225AD64(void) {
    /* Original at 0x0225AD64 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5}\n    cmp r1, #0xff\n    beq _0225AD98\n    cmp r1, #0x20\n    bge _0225AD84\n    mov r3, #1\n    ldr r2, _0225AD9C ; =0x00000534\n    add r4, r3, #0\n    lsl r4, r1\n    sub r1, r3, #2\n    ldr r5, [r0, r2]\n    eor r1, r4\n    and r1, r5\n    str r1, [r0, r2]\n    pop {r4, r5}\n    bx lr\n    mov r3, #1\n    ldr r2, _0225ADA0 ; =0x00000538\n    sub r1, #0x20\n    add r4, r3, #0\n    lsl r4, r1\n    sub r1, r3, #2\n    ldr r5, [r0, r2]\n    eor r1, r4\n    and r1, r5\n    str r1, [r0, r2]\n    pop {r4, r5}\n    bx lr\n    _0225AD9C: .word 0x00000534\n    _0225ADA0: .word 0x00000538"
    );
    #endif
}

void ov89_0225ADA4(void) {
    /* Original at 0x0225ADA4 */
    /* Requires manual decompilation - 112 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    add r4, r0, #0\n    ldrh r0, [r1, #2]\n    ldrb r1, [r1, #8]\n    add r5, r2, #0\n    add r6, r3, #0\n    bl ov89_0225C8BC\n    add r7, r0, #0\n    cmp r7, #3\n    blo _0225ADC0\n    bl GF_AssertFail\n    add r0, r4, #0\n    add r1, sp, #0x14\n    add r2, sp, #0x10\n    add r3, sp, #0xc\n    bl sub_020182B0\n    ldr r1, _0225AE98 ; =ov89_0225CD3C\n    lsl r0, r7, #4\n    ldr r2, [sp, #0x14]\n    ldr r1, [r1, r0]\n    add r1, r2, r1\n    str r1, [r5]\n    ldr r1, _0225AE9C ; =ov89_0225CD40\n    ldr r2, [sp, #0x14]\n    ldr r1, [r1, r0]\n    add r1, r2, r1\n    str r1, [r5, #4]\n    ldr r1, _0225AEA0 ; =ov89_0225CD44\n    ldr r2, [sp, #0x10]\n    ldr r1, [r1, r0]\n    add r1, r2, r1\n    str r1, [r5, #8]\n    ldr r1, _0225AEA4 ; =ov89_0225CD48\n    ldr r2, [sp, #0x10]\n    ldr r0, [r1, r0]\n    add r0, r2, r0\n    str r0, [r5, #0xc]\n    cmp r6, #1\n    bne _0225AE92\n    add r0, r4, #0\n    add r1, sp, #8\n    add r2, sp, #4\n    add r3, sp, #0\n    bl sub_020182CC\n    ldr r1, [r5, #4]\n    ldr r0, [r5]\n    mov r2, #0x64\n    sub r4, r1, r0\n    ldr r0, [sp, #8]\n    mov r3, #0\n    asr r1, r0, #0x1f\n    asr r6, r4, #0x1f\n    bl _ll_mul\n    mov r2, #1\n    lsl r2, r2, #0xc\n    mov r3, #0\n    bl _ll_sdiv\n    add r2, r4, #0\n    add r3, r6, #0\n    bl _ll_mul\n    mov r2, #0x64\n    mov r3, #0\n    bl _ll_sdiv\n    sub r0, r0, r4\n    sbc r1, r6\n    mov r2, #2\n    mov r3, #0\n    bl _ll_sdiv\n    ldr r1, [r5, #4]\n    mov r2, #0x64\n    add r1, r1, r0\n    str r1, [r5, #4]\n    ldr r1, [r5]\n    mov r3, #0\n    sub r0, r1, r0\n    str r0, [r5]\n    ldr r1, [r5, #8]\n    ldr r0, [r5, #0xc]\n    sub r4, r1, r0\n    ldr r0, [sp, #4]\n    asr r6, r4, #0x1f\n    asr r1, r0, #0x1f\n    bl _ll_mul\n    mov r2, #1\n    lsl r2, r2, #0xc\n    mov r3, #0\n    bl _ll_sdiv\n    add r2, r4, #0\n    add r3, r6, #0\n    bl _ll_mul\n    mov r2, #0x64\n    mov r3, #0\n    bl _ll_sdiv\n    sub r0, r0, r4\n    sbc r1, r6\n    mov r2, #2\n    mov r3, #0\n    bl _ll_sdiv\n    ldr r1, [r5, #8]\n    add r1, r1, r0\n    str r1, [r5, #8]\n    ldr r1, [r5, #0xc]\n    sub r0, r1, r0\n    str r0, [r5, #0xc]\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0225AE98: .word ov89_0225CD3C\n    _0225AE9C: .word ov89_0225CD40\n    _0225AEA0: .word ov89_0225CD44\n    _0225AEA4: .word ov89_0225CD48"
    );
    #endif
}

void ov89_0225AEA8(void) {
    /* Original at 0x0225AEA8 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, [r0]\n    ldr r2, [r1, #4]\n    cmp r3, r2\n    bgt _0225AECC\n    ldr r3, [r1]\n    ldr r2, [r0, #4]\n    cmp r3, r2\n    bgt _0225AECC\n    ldr r3, [r0, #8]\n    ldr r2, [r1, #0xc]\n    cmp r3, r2\n    blt _0225AECC\n    ldr r1, [r1, #8]\n    ldr r0, [r0, #0xc]\n    cmp r1, r0\n    blt _0225AECC\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void ov89_0225AED0(void) {
    /* Original at 0x0225AED0 */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    ldr r2, _0225AF08 ; =0x0000053C\n    add r2, r0, r2\n    mov r0, #0\n    ldrb r3, [r2, #1]\n    cmp r3, #0\n    bne _0225AEFA\n    mov r4, #9\n    lsl r4, r4, #6\n    ldr r5, [r1, r4]\n    ldr r3, _0225AF0C ; =0x00FFFFFF\n    lsl r0, r0, #0x18\n    and r3, r5\n    orr r0, r3\n    str r0, [r1, r4]\n    mov r0, #0\n    strb r0, [r2]\n    ldrb r0, [r2, #1]\n    add r0, r0, #1\n    strb r0, [r2, #1]\n    pop {r3, r4, r5, pc}\n    add r0, r0, #1\n    add r2, r2, #4\n    cmp r0, #0x80\n    blt _0225AED8\n    bl GF_AssertFail\n    pop {r3, r4, r5, pc}\n    _0225AF08: .word 0x0000053C\n    _0225AF0C: .word 0x00FFFFFF"
    );
    #endif
}

void ov89_0225AF10(void) {
    /* Original at 0x0225AF10 */
    /* Requires manual decompilation - 50 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r3, r0, #0\n    add r0, r2, #0\n    cmp r1, #0xff\n    bne _0225AF1E\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    ldr r2, _0225AF70 ; =0x0000053C\n    lsl r4, r1, #2\n    add r5, r3, r2\n    ldrb r1, [r5, r4]\n    add r1, r1, #1\n    strb r1, [r5, r4]\n    add r1, r2, #1\n    add r5, r3, r1\n    ldrb r1, [r5, r4]\n    add r1, r1, #1\n    strb r1, [r5, r4]\n    ldr r1, _0225AF74 ; =0x0000073C\n    ldrb r5, [r3, r1]\n    cmp r5, #0\n    bne _0225AF6A\n    add r5, r1, #1\n    ldrb r5, [r3, r5]\n    cmp r5, #0\n    bne _0225AF6A\n    add r4, r3, r4\n    ldrb r2, [r4, r2]\n    add r4, r1, #3\n    ldrb r4, [r3, r4]\n    lsl r5, r4, #1\n    ldr r4, _0225AF78 ; =ov89_0225CCD0\n    ldrsh r4, [r4, r5]\n    cmp r2, r4\n    blt _0225AF6A\n    add r1, r1, #1\n    strb r0, [r3, r1]\n    add r3, #0xb0\n    add r0, r3, #0\n    mov r1, #0\n    mov r2, #4\n    bl MI_CpuFill8\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    nop\n    _0225AF70: .word 0x0000053C\n    _0225AF74: .word 0x0000073C\n    _0225AF78: .word ov89_0225CCD0"
    );
    #endif
}

void ov89_0225AF7C(void) {
    GF_AssertFail(0);
}

void ov89_0225AF9C(void) {
    /* Original at 0x0225AF9C */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r1, #0\n    mov r2, #0xb0\n    add r4, r0, #0\n    bl MI_CpuFill8\n    ldr r1, _0225AFBC ; =0x0000073D\n    ldrb r2, [r4, r1]\n    sub r0, r1, #1\n    strb r2, [r4, r0]\n    mov r2, #0\n    strb r2, [r4, r1]\n    add r0, r1, #1\n    strb r2, [r4, r0]\n    pop {r4, pc}\n    nop\n    _0225AFBC: .word 0x0000073D"
    );
    #endif
}

void ov89_0225AFC0(void) {
    /* Original at 0x0225AFC0 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r2, #9\n    lsl r2, r2, #6\n    ldr r3, [r0, r2]\n    lsl r4, r3, #0x10\n    lsr r4, r4, #0x18\n    bne _0225AFDA\n    lsl r4, r3, #8\n    lsr r4, r4, #0x18\n    bne _0225AFDA\n    lsl r4, r3, #0x1c\n    lsr r4, r4, #0x1c\n    bne _0225AFDE\n    mov r0, #0\n    pop {r4, pc}\n    ldr r4, _0225AFF8 ; =0xFF00FFFF\n    lsl r1, r1, #0x18\n    and r3, r4\n    lsr r1, r1, #8\n    orr r1, r3\n    str r1, [r0, r2]\n    add r0, #0x94\n    mov r1, #0\n    sub r2, #0x94\n    bl MI_CpuFill8\n    mov r0, #1\n    pop {r4, pc}\n    _0225AFF8: .word 0xFF00FFFF"
    );
    #endif
}

void ov89_0225AFFC(void) {
    GetNatureFromPersonality();
}

void ov89_0225B010(void) {
    /* Original at 0x0225B010 */
    /* Requires manual decompilation - 47 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r1, #0\n    add r6, r0, #0\n    add r0, r5, #0\n    add r0, #0x94\n    ldr r0, [r0]\n    add r4, r5, #0\n    add r2, r0, #1\n    add r0, r5, #0\n    add r0, #0x94\n    str r2, [r0]\n    add r0, r5, #0\n    add r0, #0x94\n    ldr r0, [r0]\n    add r4, #0x94\n    cmp r0, #2\n    bne _0225B058\n    add r0, r5, #0\n    add r0, #0x1c\n    add r2, r4, #4\n    mov r3, #0\n    bl ov89_0225ADA4\n    add r0, r5, #0\n    add r0, #0x1c\n    mov r1, #1\n    bl sub_020182A0\n    mov r1, #9\n    lsl r1, r1, #6\n    ldr r2, [r5, r1]\n    mov r0, #0xf\n    bic r2, r0\n    mov r0, #1\n    orr r0, r2\n    str r0, [r5, r1]\n    ldr r0, [r4]\n    cmp r0, #0x28\n    ble _0225B074\n    add r0, r6, #0\n    add r1, r5, #0\n    bl ov89_0225AED0\n    add r0, r5, #0\n    bl ov89_0225AFFC\n    add r1, r0, #0\n    add r0, r5, #0\n    bl ov89_0225AFC0\n    mov r0, #0\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov89_0225B078(void) {
    /* Original at 0x0225B078 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "mov r0, #0\n    bx lr"
    );
    #endif
}

void ov89_0225B07C(void) {
    /* Original at 0x0225B07C */
    /* Requires manual decompilation - 61 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r1, #0\n    add r4, r5, #0\n    add r4, #0x94\n    ldrb r1, [r4, #8]\n    cmp r1, #0\n    beq _0225B090\n    cmp r1, #1\n    beq _0225B0A8\n    b _0225B0E2\n    mov r1, #0x1f\n    lsl r1, r1, #8\n    str r1, [r4]\n    bl ov89_0225AD00\n    strb r0, [r4, #9]\n    mov r0, #1\n    lsl r0, r0, #0xc\n    str r0, [r4, #4]\n    ldrb r0, [r4, #8]\n    add r0, r0, #1\n    strb r0, [r4, #8]\n    ldr r0, [r4, #4]\n    mov r3, #1\n    add r0, #0xc0\n    str r0, [r4, #4]\n    ldr r0, [r4]\n    lsl r3, r3, #8\n    add r1, r0, #0\n    sub r1, #0xc0\n    cmp r1, r3\n    bge _0225B0CE\n    add r0, r5, #0\n    add r0, #0x1c\n    mov r1, #0\n    bl sub_020182A0\n    ldrb r0, [r4, #8]\n    add r0, r0, #1\n    strb r0, [r4, #8]\n    b _0225B0EC\n    sub r0, #0xc0\n    str r0, [r4]\n    ldr r1, [r4, #4]\n    add r0, r5, #0\n    add r0, #0x1c\n    add r2, r1, #0\n    lsl r3, r3, #4\n    bl sub_020182C4\n    b _0225B0EC\n    ldrb r1, [r4, #9]\n    bl ov89_0225AD64\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    add r0, r5, #0\n    add r4, #0xc\n    add r0, #0x1c\n    add r1, r5, #0\n    add r2, r4, #0\n    mov r3, #1\n    bl ov89_0225ADA4\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov89_0225B100(void) {
    /* Original at 0x0225B100 */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #8\n    add r4, r1, #0\n    add r0, r4, #0\n    add r0, #0x94\n    ldrb r3, [r0, #9]\n    cmp r3, #0xff\n    beq _0225B13A\n    ldr r0, [r0]\n    asr r0, r0, #8\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    add r1, r0, #0\n    add r2, r0, #0\n    bl NNS_G3dGlbPolygonAttr\n    mov r2, #0x3f\n    ldr r0, [r4, #0x14]\n    mov r1, #0\n    lsl r2, r2, #0x18\n    bl NNSi_G3dModifyPolygonAttrMask\n    mov r2, #0x1f\n    ldr r0, [r4, #0x14]\n    mov r1, #0\n    lsl r2, r2, #0x10\n    bl NNSi_G3dModifyPolygonAttrMask\n    add r4, #0x1c\n    add r0, r4, #0\n    bl sub_020181EC\n    add sp, #8\n    pop {r4, pc}"
    );
    #endif
}

void ov89_0225B148(void) {
    ov89_0225AEA8(0, 1);
}

void ov89_0225B164(void) {
    /* Original at 0x0225B164 */
    /* Requires manual decompilation - 140 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r4, r1, #0\n    ldr r0, _0225B294 ; =0x0000016A\n    add r4, #0x94\n    ldrb r0, [r4, r0]\n    str r1, [sp]\n    cmp r0, #0\n    beq _0225B17C\n    cmp r0, #1\n    beq _0225B1B6\n    b _0225B258\n    add r0, r1, #0\n    add r0, #0x1c\n    add r1, sp, #0xc\n    add r2, sp, #8\n    add r3, sp, #4\n    bl sub_020182B0\n    ldr r7, [sp]\n    mov r6, #0\n    add r5, r4, #0\n    add r7, #0xc\n    add r0, r5, #0\n    add r1, r7, #0\n    bl sub_020181B0\n    ldr r1, [sp, #0xc]\n    ldr r2, [sp, #8]\n    ldr r3, [sp, #4]\n    add r0, r5, #0\n    bl sub_020182A8\n    add r6, r6, #1\n    add r5, #0x78\n    cmp r6, #3\n    blt _0225B192\n    ldr r0, _0225B294 ; =0x0000016A\n    ldrb r1, [r4, r0]\n    add r1, r1, #1\n    strb r1, [r4, r0]\n    ldr r0, [sp]\n    add r1, sp, #0xc\n    add r0, #0x1c\n    add r2, sp, #8\n    add r3, sp, #4\n    bl sub_020182B0\n    mov r2, #2\n    ldr r0, [sp]\n    ldr r1, [sp, #0xc]\n    lsl r2, r2, #0xc\n    ldr r3, [sp, #8]\n    sub r1, r1, r2\n    sub r2, r3, r2\n    ldr r3, [sp, #4]\n    add r0, #0x1c\n    bl sub_020182A8\n    add r0, r4, #0\n    add r1, sp, #0xc\n    add r2, sp, #8\n    add r3, sp, #4\n    bl sub_020182B0\n    mov r2, #2\n    ldr r1, [sp, #0xc]\n    lsl r2, r2, #0xc\n    ldr r3, [sp, #8]\n    add r1, r1, r2\n    sub r2, r3, r2\n    ldr r3, [sp, #4]\n    add r0, r4, #0\n    bl sub_020182A8\n    add r0, r4, #0\n    add r0, #0x78\n    add r1, sp, #0xc\n    add r2, sp, #8\n    add r3, sp, #4\n    bl sub_020182B0\n    mov r2, #2\n    add r0, r4, #0\n    ldr r1, [sp, #0xc]\n    lsl r2, r2, #0xc\n    ldr r3, [sp, #8]\n    sub r1, r1, r2\n    add r2, r3, r2\n    ldr r3, [sp, #4]\n    add r0, #0x78\n    bl sub_020182A8\n    add r0, r4, #0\n    add r0, #0xf0\n    add r1, sp, #0xc\n    add r2, sp, #8\n    add r3, sp, #4\n    bl sub_020182B0\n    mov r2, #2\n    add r0, r4, #0\n    ldr r1, [sp, #0xc]\n    lsl r2, r2, #0xc\n    ldr r3, [sp, #8]\n    add r1, r1, r2\n    add r2, r3, r2\n    ldr r3, [sp, #4]\n    add r0, #0xf0\n    bl sub_020182A8\n    mov r0, #0x5a\n    lsl r0, r0, #2\n    ldrh r1, [r4, r0]\n    add r1, r1, #1\n    strh r1, [r4, r0]\n    ldrh r0, [r4, r0]\n    cmp r0, #0x1e\n    bls _0225B258\n    add sp, #0x10\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [sp]\n    mov r2, #0x5b\n    lsl r2, r2, #2\n    ldr r1, [sp]\n    add r0, #0x1c\n    add r2, r4, r2\n    mov r3, #0\n    bl ov89_0225ADA4\n    mov r0, #0x5b\n    mov r5, #0\n    lsl r0, r0, #2\n    add r6, r4, r0\n    add r7, r5, #0\n    add r2, r5, #1\n    lsl r2, r2, #4\n    ldr r1, [sp]\n    add r0, r4, #0\n    add r2, r6, r2\n    add r3, r7, #0\n    bl ov89_0225ADA4\n    add r5, r5, #1\n    add r4, #0x78\n    cmp r5, #3\n    blt _0225B274\n    mov r0, #0\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0225B294: .word 0x0000016A"
    );
    #endif
}

void ov89_0225B298(void) {
    /* Original at 0x0225B298 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r1, #0\n    add r5, r6, #0\n    mov r4, #0\n    add r5, #0x94\n    add r0, r5, #0\n    bl sub_020181EC\n    add r4, r4, #1\n    add r5, #0x78\n    cmp r4, #3\n    blt _0225B2A2\n    add r6, #0x1c\n    add r0, r6, #0\n    bl sub_020181EC\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov89_0225B2BC(void) {
    /* Original at 0x0225B2BC */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    mov r0, #2\n    add r6, r2, #0\n    lsl r0, r0, #8\n    add r6, #0x94\n    mov r4, #0\n    add r5, r1, r0\n    add r0, r5, #0\n    add r1, r6, #4\n    bl ov89_0225AEA8\n    cmp r0, #1\n    bne _0225B2DA\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    add r4, r4, #1\n    add r5, #0x10\n    cmp r4, #4\n    blt _0225B2CA\n    mov r0, #0\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov89_0225B2E8(void) {
    /* Original at 0x0225B2E8 */
    /* Requires manual decompilation - 164 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r5, r1, #0\n    add r7, r0, #0\n    add r0, r5, #0\n    add r0, #0x94\n    add r4, r5, #0\n    ldr r0, [r0]\n    add r4, #0x94\n    cmp r0, #3\n    bls _0225B300\n    b _0225B42E\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0225B30C: ; jump table\n    add r0, r5, #0\n    add r0, #0x1c\n    mov r1, #2\n    bl sub_020182EC\n    ldr r1, _0225B444 ; =0x00000AAA\n    sub r0, r0, r1\n    lsl r0, r0, #0x10\n    lsr r6, r0, #0x10\n    mov r0, #0xe\n    lsl r0, r0, #0xc\n    cmp r6, r0\n    bhi _0225B364\n    mov r1, #9\n    lsl r1, r1, #6\n    ldr r1, [r5, r1]\n    ldr r0, [r5, #0x18]\n    lsl r1, r1, #0x10\n    lsr r1, r1, #0x18\n    bl ov89_0225AB64\n    ldr r1, [r5, #0x18]\n    add r0, r7, #0\n    bl ov89_0225A958\n    mov r1, #9\n    lsl r1, r1, #6\n    ldr r2, [r5, r1]\n    mov r0, #0xf0\n    bic r2, r0\n    mov r0, #0x10\n    orr r2, r0\n    lsl r0, r0, #0xa\n    add r0, r6, r0\n    lsl r0, r0, #0x10\n    str r2, [r5, r1]\n    lsr r6, r0, #0x10\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    add r0, r5, #0\n    add r0, #0x1c\n    add r1, r6, #0\n    mov r2, #2\n    bl sub_020182E0\n    b _0225B42E\n    mov r1, #9\n    lsl r1, r1, #6\n    ldr r2, [r5, r1]\n    mov r0, #0xf0\n    bic r2, r0\n    add r0, r5, #0\n    str r2, [r5, r1]\n    add r0, #0x1c\n    mov r1, #2\n    bl sub_020182EC\n    ldr r1, _0225B444 ; =0x00000AAA\n    sub r0, r0, r1\n    lsl r0, r0, #0x10\n    lsr r1, r0, #0x10\n    mov r0, #3\n    lsl r0, r0, #0xe\n    cmp r1, r0\n    blo _0225B3A0\n    ldr r0, [r4]\n    mov r1, #0\n    add r0, r0, #1\n    str r0, [r4]\n    add r0, r5, #0\n    add r0, #0x1c\n    mov r2, #2\n    bl sub_020182E0\n    b _0225B42E\n    ldr r0, [r4, #4]\n    add r0, r0, #1\n    str r0, [r4, #4]\n    cmp r0, #4\n    blt _0225B42E\n    mov r0, #0\n    str r0, [r4, #4]\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    add r0, r5, #0\n    add r0, #0x1c\n    add r1, sp, #8\n    add r2, sp, #4\n    add r3, sp, #0\n    bl sub_020182B0\n    ldr r1, [sp, #8]\n    ldr r0, _0225B448 ; =0xFFFB0000\n    cmp r1, r0\n    blt _0225B3EE\n    mov r0, #5\n    lsl r0, r0, #0x10\n    cmp r1, r0\n    bgt _0225B3EE\n    mov r2, #3\n    ldr r3, [sp, #4]\n    lsl r2, r2, #0x10\n    cmp r3, r2\n    bgt _0225B3EE\n    ldr r0, _0225B44C ; =0xFFFD0000\n    cmp r3, r0\n    bge _0225B3F4\n    add sp, #0xc\n    mov r0, #1\n    pop {r4, r5, r6, r7, pc}\n    ldr r0, [r4, #8]\n    cmp r0, #5\n    bge _0225B40E\n    lsr r6, r2, #4\n    lsr r2, r2, #4\n    add r0, r5, #0\n    sub r2, r3, r2\n    ldr r3, [sp]\n    add r0, #0x1c\n    add r1, r1, r6\n    bl sub_020182A8\n    b _0225B420\n    lsr r6, r2, #4\n    lsr r2, r2, #4\n    add r0, r5, #0\n    add r2, r3, r2\n    ldr r3, [sp]\n    add r0, #0x1c\n    add r1, r1, r6\n    bl sub_020182A8\n    ldr r0, [r4, #8]\n    add r0, r0, #1\n    str r0, [r4, #8]\n    cmp r0, #0xa\n    blt _0225B42E\n    mov r0, #0\n    str r0, [r4, #8]\n    add r0, r5, #0\n    add r4, #0xc\n    add r0, #0x1c\n    add r1, r5, #0\n    add r2, r4, #0\n    mov r3, #0\n    bl ov89_0225ADA4\n    mov r0, #0\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    _0225B444: .word 0x00000AAA\n    _0225B448: .word 0xFFFB0000\n    _0225B44C: .word 0xFFFD0000"
    );
    #endif
}

void ov89_0225B450(void) {
    ov89_0225AEA8(0, 1);
}

void ov89_0225B46C(void) {
    /* Original at 0x0225B46C */
    /* Requires manual decompilation - 186 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r5, r1, #0\n    add r7, r0, #0\n    add r0, r5, #0\n    add r0, #0x94\n    add r4, r5, #0\n    ldr r0, [r0]\n    add r4, #0x94\n    cmp r0, #3\n    bls _0225B484\n    b _0225B5DE\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0225B490: ; jump table\n    add r0, r5, #0\n    add r0, #0x1c\n    mov r1, #2\n    bl sub_020182EC\n    ldr r1, _0225B5F4 ; =0x00000AAA\n    add r0, r0, r1\n    lsl r0, r0, #0x10\n    lsr r6, r0, #0x10\n    mov r0, #2\n    lsl r0, r0, #0xc\n    cmp r6, r0\n    blo _0225B4EA\n    mov r1, #9\n    lsl r1, r1, #6\n    ldr r1, [r5, r1]\n    ldr r0, [r5, #0x18]\n    lsl r1, r1, #0x10\n    lsr r1, r1, #0x18\n    bl ov89_0225AB64\n    mov r0, #1\n    lsl r0, r0, #0xe\n    sub r0, r6, r0\n    lsl r0, r0, #0x10\n    lsr r6, r0, #0x10\n    ldr r1, [r5, #0x18]\n    add r0, r7, #0\n    bl ov89_0225A958\n    mov r1, #9\n    lsl r1, r1, #6\n    ldr r2, [r5, r1]\n    mov r0, #0xf0\n    bic r2, r0\n    mov r0, #0x10\n    orr r0, r2\n    str r0, [r5, r1]\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    add r0, r5, #0\n    add r0, #0x1c\n    add r1, r6, #0\n    mov r2, #2\n    bl sub_020182E0\n    b _0225B5DE\n    mov r1, #9\n    lsl r1, r1, #6\n    ldr r2, [r5, r1]\n    mov r0, #0xf0\n    bic r2, r0\n    add r0, r5, #0\n    str r2, [r5, r1]\n    add r0, #0x1c\n    mov r1, #2\n    bl sub_020182EC\n    ldr r1, _0225B5F4 ; =0x00000AAA\n    add r0, r0, r1\n    lsl r0, r0, #0x10\n    lsr r1, r0, #0x10\n    mov r0, #1\n    lsl r0, r0, #0xe\n    cmp r1, r0\n    bhs _0225B526\n    ldr r0, [r4]\n    mov r1, #0\n    add r0, r0, #1\n    str r0, [r4]\n    add r0, r5, #0\n    add r0, #0x1c\n    mov r2, #2\n    bl sub_020182E0\n    b _0225B5DE\n    ldr r0, [r4, #8]\n    add r0, r0, #1\n    str r0, [r4, #8]\n    cmp r0, #4\n    blt _0225B5DE\n    add r0, r5, #0\n    add r0, #0x1c\n    add r1, sp, #8\n    add r2, sp, #4\n    add r3, sp, #0\n    bl sub_020182B0\n    ldr r0, [sp, #4]\n    str r0, [r4, #0xc]\n    mov r0, #0\n    str r0, [r4, #8]\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    add r0, r5, #0\n    add r0, #0x1c\n    add r1, sp, #8\n    add r2, sp, #4\n    add r3, sp, #0\n    bl sub_020182B0\n    ldr r1, [sp, #8]\n    ldr r0, _0225B5F8 ; =0xFFFB0000\n    cmp r1, r0\n    blt _0225B586\n    mov r0, #5\n    lsl r0, r0, #0x10\n    cmp r1, r0\n    bgt _0225B586\n    mov r0, #3\n    ldr r1, [sp, #4]\n    lsl r0, r0, #0x10\n    cmp r1, r0\n    bgt _0225B586\n    ldr r0, _0225B5FC ; =0xFFFD0000\n    cmp r1, r0\n    bge _0225B58C\n    add sp, #0xc\n    mov r0, #1\n    pop {r4, r5, r6, r7, pc}\n    mov r0, #2\n    ldr r1, [r4, #4]\n    lsl r0, r0, #0xe\n    add r1, r1, r0\n    mov r0, #0x5a\n    lsl r0, r0, #0xe\n    str r1, [r4, #4]\n    cmp r1, r0\n    blt _0225B5A4\n    ldr r1, [r4, #4]\n    sub r0, r1, r0\n    str r0, [r4, #4]\n    ldr r0, [r4, #4]\n    bl GF_SinDegFX32\n    add r2, r0, #0\n    mov r1, #1\n    add r0, r5, #0\n    ldr r3, [sp, #8]\n    lsl r1, r1, #0xc\n    sub r1, r3, r1\n    asr r3, r2, #0x1f\n    lsr r6, r2, #0x11\n    lsl r3, r3, #0xf\n    orr r3, r6\n    mov r6, #1\n    lsl r6, r6, #0xc\n    lsl r2, r2, #0xf\n    lsr r6, r6, #1\n    add r0, #0x1c\n    add r6, r2, r6\n    ldr r2, _0225B600 ; =0x00000000\n    ldr r7, [r4, #0xc]\n    adc r3, r2\n    lsl r2, r3, #0x14\n    lsr r3, r6, #0xc\n    orr r3, r2\n    add r2, r7, r3\n    ldr r3, [sp]\n    bl sub_020182A8\n    add r0, r5, #0\n    add r4, #0x10\n    add r0, #0x1c\n    add r1, r5, #0\n    add r2, r4, #0\n    mov r3, #0\n    bl ov89_0225ADA4\n    mov r0, #0\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    _0225B5F4: .word 0x00000AAA\n    _0225B5F8: .word 0xFFFB0000\n    _0225B5FC: .word 0xFFFD0000\n    _0225B600: .word 0x00000000"
    );
    #endif
}

void ov89_0225B604(void) {
    ov89_0225AEA8(0, 1);
}

void ov89_0225B620(void) {
    /* Original at 0x0225B620 */
    /* Requires manual decompilation - 159 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r4, r1, #0\n    str r1, [sp]\n    ldr r1, _0225B770 ; =0x0000016D\n    add r4, #0x94\n    ldrb r2, [r4, r1]\n    cmp r2, #0\n    beq _0225B638\n    cmp r2, #1\n    beq _0225B684\n    b _0225B74A\n    bl ov89_0225AD00\n    mov r1, #0x5b\n    lsl r1, r1, #2\n    strb r0, [r4, r1]\n    ldr r0, [sp]\n    add r1, sp, #0xc\n    add r0, #0x1c\n    add r2, sp, #8\n    add r3, sp, #4\n    bl sub_020182B0\n    ldr r7, [sp]\n    mov r6, #0\n    add r5, r4, #0\n    add r7, #0xc\n    add r0, r5, #0\n    add r1, r7, #0\n    bl sub_020181B0\n    ldr r1, [sp, #0xc]\n    ldr r2, [sp, #8]\n    ldr r3, [sp, #4]\n    add r0, r5, #0\n    bl sub_020182A8\n    add r0, r5, #0\n    mov r1, #0\n    bl sub_020182A0\n    add r6, r6, #1\n    add r5, #0x78\n    cmp r6, #3\n    blt _0225B658\n    ldr r0, _0225B770 ; =0x0000016D\n    ldrb r1, [r4, r0]\n    add r1, r1, #1\n    strb r1, [r4, r0]\n    ldr r0, [sp]\n    add r1, sp, #0xc\n    add r0, #0x1c\n    add r2, sp, #8\n    add r3, sp, #4\n    bl sub_020182B0\n    ldr r1, [sp, #0xc]\n    ldr r0, _0225B774 ; =0xFFFB0000\n    cmp r1, r0\n    blt _0225B6BA\n    mov r2, #5\n    lsl r2, r2, #0x10\n    cmp r1, r2\n    bgt _0225B6BA\n    mov r0, #3\n    ldr r3, [sp, #8]\n    lsl r0, r0, #0x10\n    cmp r3, r0\n    bgt _0225B6BA\n    ldr r0, _0225B778 ; =0xFFFD0000\n    cmp r3, r0\n    blt _0225B6BA\n    ldr r0, _0225B77C ; =0x0000016B\n    ldrb r0, [r4, r0]\n    cmp r0, #1\n    bne _0225B6E4\n    mov r6, #0\n    add r5, r4, #0\n    add r7, r6, #0\n    add r0, r5, #0\n    add r1, r7, #0\n    bl sub_020182A0\n    add r6, r6, #1\n    add r5, #0x78\n    cmp r6, #3\n    blt _0225B6C0\n    ldr r0, [sp]\n    mov r1, #0\n    add r0, #0x1c\n    bl sub_020182A0\n    ldr r0, _0225B770 ; =0x0000016D\n    ldrb r1, [r4, r0]\n    add r1, r1, #1\n    strb r1, [r4, r0]\n    b _0225B758\n    ldr r0, [sp]\n    lsr r2, r2, #5\n    add r2, r3, r2\n    ldr r3, [sp, #4]\n    add r0, #0x1c\n    bl sub_020182A8\n    mov r0, #0x5a\n    lsl r0, r0, #2\n    ldrh r0, [r4, r0]\n    mov r1, #3\n    bl _s32_div_f\n    cmp r1, #0\n    bne _0225B73E\n    ldr r0, _0225B780 ; =0x0000016A\n    mov r2, #0xa\n    ldrb r1, [r4, r0]\n    ldr r3, [sp, #8]\n    mov r0, #0x78\n    mul r0, r1\n    lsl r2, r2, #0xa\n    add r2, r3, r2\n    ldr r1, [sp, #0xc]\n    ldr r3, [sp, #4]\n    add r0, r4, r0\n    bl sub_020182A8\n    ldr r0, _0225B780 ; =0x0000016A\n    ldrb r1, [r4, r0]\n    mov r0, #0x78\n    mul r0, r1\n    add r0, r4, r0\n    mov r1, #1\n    bl sub_020182A0\n    ldr r0, _0225B780 ; =0x0000016A\n    ldrb r1, [r4, r0]\n    add r1, r1, #1\n    strb r1, [r4, r0]\n    ldrb r1, [r4, r0]\n    cmp r1, #3\n    blo _0225B73E\n    mov r1, #0\n    strb r1, [r4, r0]\n    mov r0, #0x5a\n    lsl r0, r0, #2\n    ldrh r1, [r4, r0]\n    add r1, r1, #1\n    strh r1, [r4, r0]\n    b _0225B758\n    sub r1, r1, #1\n    ldrb r1, [r4, r1]\n    bl ov89_0225AD64\n    add sp, #0x10\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [sp]\n    mov r2, #0x17\n    lsl r2, r2, #4\n    ldr r1, [sp]\n    add r0, #0x1c\n    add r2, r4, r2\n    mov r3, #0\n    bl ov89_0225ADA4\n    mov r0, #0\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    _0225B770: .word 0x0000016D\n    _0225B774: .word 0xFFFB0000\n    _0225B778: .word 0xFFFD0000\n    _0225B77C: .word 0x0000016B\n    _0225B780: .word 0x0000016A"
    );
    #endif
}

void ov89_0225B784(void) {
    /* Original at 0x0225B784 */
    /* Requires manual decompilation - 62 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r6, r1, #0\n    add r7, r6, #0\n    mov r0, #0x5b\n    add r7, #0x94\n    lsl r0, r0, #2\n    ldrb r3, [r7, r0]\n    cmp r3, #0xff\n    beq _0225B7C0\n    mov r0, #8\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    add r1, r0, #0\n    add r2, r0, #0\n    bl NNS_G3dGlbPolygonAttr\n    mov r2, #0x3f\n    ldr r0, [r6, #0x14]\n    mov r1, #0\n    lsl r2, r2, #0x18\n    bl NNSi_G3dModifyPolygonAttrMask\n    mov r2, #0x1f\n    ldr r0, [r6, #0x14]\n    mov r1, #0\n    lsl r2, r2, #0x10\n    bl NNSi_G3dModifyPolygonAttrMask\n    mov r4, #0\n    add r5, r7, #0\n    add r0, r5, #0\n    bl sub_020181EC\n    add r4, r4, #1\n    add r5, #0x78\n    cmp r4, #3\n    blt _0225B7C4\n    mov r0, #0x5b\n    lsl r0, r0, #2\n    ldrb r3, [r7, r0]\n    cmp r3, #0xff\n    beq _0225B804\n    mov r0, #0x1f\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    add r1, r0, #0\n    add r2, r0, #0\n    bl NNS_G3dGlbPolygonAttr\n    mov r2, #0x3f\n    ldr r0, [r6, #0x14]\n    mov r1, #0\n    lsl r2, r2, #0x18\n    bl NNSi_G3dModifyPolygonAttrMask\n    mov r2, #0x1f\n    ldr r0, [r6, #0x14]\n    mov r1, #0\n    lsl r2, r2, #0x10\n    bl NNSi_G3dModifyPolygonAttrMask\n    add r6, #0x1c\n    add r0, r6, #0\n    bl sub_020181EC\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov89_0225B810(void) {
    ov89_0225AEA8(0, 0x81, 1);
}

void ov89_0225B82C(void) {
    /* Original at 0x0225B82C */
    /* Requires manual decompilation - 99 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r5, r1, #0\n    add r0, r5, #0\n    add r0, #0x94\n    ldr r0, [r0]\n    add r4, r5, #0\n    add r4, #0x94\n    cmp r0, #0\n    beq _0225B846\n    cmp r0, #1\n    beq _0225B85E\n    b _0225B8E0\n    add r0, r5, #0\n    add r0, #0x1c\n    add r1, sp, #8\n    add r2, sp, #4\n    add r3, sp, #0\n    bl sub_020182B0\n    ldr r0, [sp, #8]\n    str r0, [r4, #8]\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    add r0, r5, #0\n    add r0, #0x1c\n    add r1, sp, #8\n    add r2, sp, #4\n    add r3, sp, #0\n    bl sub_020182B0\n    ldr r1, [sp, #8]\n    ldr r0, _0225B8F8 ; =0xFFFB0000\n    cmp r1, r0\n    blt _0225B88C\n    mov r0, #5\n    lsl r0, r0, #0x10\n    cmp r1, r0\n    bgt _0225B88C\n    mov r0, #3\n    ldr r1, [sp, #4]\n    lsl r0, r0, #0x10\n    cmp r1, r0\n    bgt _0225B88C\n    ldr r0, _0225B8FC ; =0xFFFD0000\n    cmp r1, r0\n    bge _0225B892\n    add sp, #0xc\n    mov r0, #1\n    pop {r4, r5, r6, r7, pc}\n    mov r0, #2\n    ldr r1, [r4, #4]\n    lsl r0, r0, #0xe\n    add r1, r1, r0\n    mov r0, #0x5a\n    lsl r0, r0, #0xe\n    str r1, [r4, #4]\n    cmp r1, r0\n    blt _0225B8AA\n    ldr r1, [r4, #4]\n    sub r0, r1, r0\n    str r0, [r4, #4]\n    ldr r0, [r4, #4]\n    bl GF_SinDegFX32\n    add r2, r0, #0\n    asr r6, r2, #0x1f\n    mov r7, #2\n    add r0, r5, #0\n    lsr r3, r2, #0x11\n    lsl r6, r6, #0xf\n    orr r6, r3\n    lsl r3, r2, #0xf\n    mov r2, #0\n    lsl r7, r7, #0xa\n    add r0, #0x1c\n    add r3, r3, r7\n    adc r6, r2\n    ldr r1, [r4, #8]\n    lsl r2, r6, #0x14\n    lsr r3, r3, #0xc\n    orr r3, r2\n    add r1, r1, r3\n    ldr r3, [sp, #4]\n    lsl r2, r7, #1\n    sub r2, r3, r2\n    ldr r3, [sp]\n    bl sub_020182A8\n    add r0, r5, #0\n    add r4, #0xc\n    add r0, #0x1c\n    add r1, r5, #0\n    add r2, r4, #0\n    mov r3, #0\n    bl ov89_0225ADA4\n    mov r0, #0\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _0225B8F8: .word 0xFFFB0000\n    _0225B8FC: .word 0xFFFD0000"
    );
    #endif
}

void ov89_0225B900(void) {
    ov89_0225AEA8(0, 1);
}

void ov89_0225B91C(void) {
    /* Original at 0x0225B91C */
    /* Requires manual decompilation - 44 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r1, #0\n    add r4, r5, #0\n    add r4, #0x94\n    ldrb r0, [r4, #6]\n    cmp r0, #0\n    beq _0225B930\n    cmp r0, #1\n    beq _0225B93C\n    b _0225B964\n    mov r0, #1\n    lsl r0, r0, #0xc\n    str r0, [r4]\n    ldrb r0, [r4, #6]\n    add r0, r0, #1\n    strb r0, [r4, #6]\n    ldrh r0, [r4, #4]\n    add r0, r0, #1\n    strh r0, [r4, #4]\n    ldrh r0, [r4, #4]\n    cmp r0, #8\n    bls _0225B94C\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #3\n    ldr r1, [r4]\n    lsl r0, r0, #8\n    add r1, r1, r0\n    add r0, r5, #0\n    mov r3, #1\n    add r0, #0x1c\n    add r2, r1, #0\n    lsl r3, r3, #0xc\n    str r1, [r4]\n    bl sub_020182C4\n    add r0, r5, #0\n    add r4, #8\n    add r0, #0x1c\n    add r1, r5, #0\n    add r2, r4, #0\n    mov r3, #1\n    bl ov89_0225ADA4\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov89_0225B978(void) {
    ov89_0225AEA8(0, 1);
}

void ov89_0225B994(void) {
    /* Original at 0x0225B994 */
    /* Requires manual decompilation - 188 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r4, r1, #0\n    add r4, #0x94\n    str r1, [sp]\n    add r1, r4, #0\n    add r1, #0xf7\n    ldrb r1, [r1]\n    cmp r1, #0\n    beq _0225B9AE\n    cmp r1, #1\n    beq _0225BA0A\n    b _0225BAE4\n    bl ov89_0225AD00\n    add r1, r4, #0\n    add r1, #0xf6\n    strb r0, [r1]\n    ldr r0, [sp]\n    add r1, sp, #0xc\n    add r0, #0x1c\n    add r2, sp, #8\n    add r3, sp, #4\n    bl sub_020182B0\n    ldr r7, [sp]\n    mov r6, #0\n    add r5, r4, #0\n    add r7, #0xc\n    add r0, r5, #0\n    add r1, r7, #0\n    bl sub_020181B0\n    ldr r1, [sp, #0xc]\n    ldr r2, [sp, #8]\n    ldr r3, [sp, #4]\n    add r0, r5, #0\n    bl sub_020182A8\n    add r0, r5, #0\n    mov r1, #1\n    bl sub_020182A0\n    add r6, r6, #1\n    add r5, #0x78\n    cmp r6, #2\n    blt _0225B9CE\n    mov r1, #0x1f\n    add r0, r4, #0\n    lsl r1, r1, #8\n    add r0, #0xf4\n    strh r1, [r0]\n    add r0, r4, #0\n    add r0, #0xf7\n    ldrb r0, [r0]\n    add r1, r0, #1\n    add r0, r4, #0\n    add r0, #0xf7\n    strb r1, [r0]\n    add r0, r4, #0\n    add r0, #0xf4\n    ldrh r0, [r0]\n    mov r2, #1\n    lsl r2, r2, #8\n    sub r0, #0xa0\n    cmp r0, r2\n    bge _0225BA4A\n    mov r6, #0\n    add r5, r4, #0\n    add r7, r6, #0\n    add r0, r5, #0\n    add r1, r7, #0\n    bl sub_020182A0\n    add r6, r6, #1\n    add r5, #0x78\n    cmp r6, #2\n    blt _0225BA20\n    ldr r0, [sp]\n    mov r1, #0\n    add r0, #0x1c\n    bl sub_020182A0\n    add r0, r4, #0\n    add r0, #0xf7\n    ldrb r0, [r0]\n    add r1, r0, #1\n    add r0, r4, #0\n    add r0, #0xf7\n    strb r1, [r0]\n    b _0225BAF2\n    add r0, r4, #0\n    add r0, #0xf4\n    ldrh r1, [r0]\n    add r0, r4, #0\n    add r0, #0xf4\n    sub r1, #0xa0\n    strh r1, [r0]\n    add r1, r4, #0\n    add r1, #0xf0\n    ldr r3, [r1]\n    lsl r1, r2, #9\n    add r2, r3, r1\n    add r1, r4, #0\n    add r1, #0xf0\n    str r2, [r1]\n    add r1, r4, #0\n    add r1, #0xf0\n    ldr r2, [r1]\n    mov r1, #0x5a\n    add r0, r4, #0\n    lsl r1, r1, #0xe\n    add r0, #0xf0\n    cmp r2, r1\n    blt _0225BA80\n    ldr r2, [r0]\n    sub r1, r2, r1\n    str r1, [r0]\n    add r0, r4, #0\n    add r0, #0xf0\n    ldr r0, [r0]\n    bl GF_SinDegFX32\n    asr r2, r0, #0x1f\n    lsl r3, r2, #0x10\n    lsr r1, r0, #0x10\n    lsl r2, r0, #0x10\n    mov r0, #2\n    orr r3, r1\n    mov r1, #0\n    lsl r0, r0, #0xa\n    add r2, r2, r0\n    adc r3, r1\n    lsl r0, r3, #0x14\n    lsr r7, r2, #0xc\n    orr r7, r0\n    ldr r0, [sp]\n    add r1, sp, #0xc\n    add r0, #0x1c\n    add r2, sp, #8\n    add r3, sp, #4\n    bl sub_020182B0\n    mov r6, #0\n    add r5, r4, #0\n    mov r0, #1\n    tst r0, r6\n    beq _0225BACC\n    ldr r1, [sp, #0xc]\n    ldr r2, [sp, #8]\n    ldr r3, [sp, #4]\n    add r0, r5, #0\n    add r1, r1, r7\n    bl sub_020182A8\n    b _0225BADA\n    ldr r1, [sp, #0xc]\n    ldr r2, [sp, #8]\n    ldr r3, [sp, #4]\n    add r0, r5, #0\n    sub r1, r1, r7\n    bl sub_020182A8\n    add r6, r6, #1\n    add r5, #0x78\n    cmp r6, #2\n    blt _0225BAB6\n    b _0225BAF2\n    add r4, #0xf6\n    ldrb r1, [r4]\n    bl ov89_0225AD64\n    add sp, #0x10\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [sp]\n    add r2, r4, #0\n    ldr r1, [sp]\n    add r0, #0x1c\n    add r2, #0xf8\n    mov r3, #0\n    bl ov89_0225ADA4\n    mov r5, #0\n    add r6, r4, #0\n    add r6, #0xf8\n    add r7, r5, #0\n    add r2, r5, #1\n    lsl r2, r2, #4\n    ldr r1, [sp]\n    add r0, r4, #0\n    add r2, r6, r2\n    add r3, r7, #0\n    bl ov89_0225ADA4\n    add r5, r5, #1\n    add r4, #0x78\n    cmp r5, #2\n    blt _0225BB0A\n    mov r0, #0\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov89_0225BB28(void) {
    /* Original at 0x0225BB28 */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #8\n    add r6, r1, #0\n    add r5, r6, #0\n    add r5, #0x94\n    add r0, r5, #0\n    add r0, #0xf6\n    ldrb r3, [r0]\n    cmp r3, #0xff\n    beq _0225BB6A\n    add r0, r5, #0\n    add r0, #0xf4\n    ldrh r0, [r0]\n    asr r0, r0, #8\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    add r1, r0, #0\n    add r2, r0, #0\n    bl NNS_G3dGlbPolygonAttr\n    mov r2, #0x3f\n    ldr r0, [r6, #0x14]\n    mov r1, #0\n    lsl r2, r2, #0x18\n    bl NNSi_G3dModifyPolygonAttrMask\n    mov r2, #0x1f\n    ldr r0, [r6, #0x14]\n    mov r1, #0\n    lsl r2, r2, #0x10\n    bl NNSi_G3dModifyPolygonAttrMask\n    mov r4, #0\n    add r0, r5, #0\n    bl sub_020181EC\n    add r4, r4, #1\n    add r5, #0x78\n    cmp r4, #2\n    blt _0225BB6C\n    add r6, #0x1c\n    add r0, r6, #0\n    bl sub_020181EC\n    add sp, #8\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov89_0225BB88(void) {
    /* Original at 0x0225BB88 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    mov r0, #0x63\n    add r6, r2, #0\n    lsl r0, r0, #2\n    add r6, #0x94\n    mov r4, #0\n    add r5, r1, r0\n    add r0, r5, #0\n    add r1, r6, #4\n    bl ov89_0225AEA8\n    cmp r0, #1\n    bne _0225BBA6\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    add r4, r4, #1\n    add r5, #0x10\n    cmp r4, #3\n    blt _0225BB96\n    mov r0, #0\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov89_0225BBB4(void) {
    /* Original at 0x0225BBB4 */
    /* Requires manual decompilation - 188 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r4, r1, #0\n    add r4, #0x94\n    str r1, [sp]\n    add r1, r4, #0\n    add r1, #0xf7\n    ldrb r1, [r1]\n    cmp r1, #0\n    beq _0225BBCE\n    cmp r1, #1\n    beq _0225BC2A\n    b _0225BD04\n    bl ov89_0225AD00\n    add r1, r4, #0\n    add r1, #0xf6\n    strb r0, [r1]\n    ldr r0, [sp]\n    add r1, sp, #0xc\n    add r0, #0x1c\n    add r2, sp, #8\n    add r3, sp, #4\n    bl sub_020182B0\n    ldr r7, [sp]\n    mov r6, #0\n    add r5, r4, #0\n    add r7, #0xc\n    add r0, r5, #0\n    add r1, r7, #0\n    bl sub_020181B0\n    ldr r1, [sp, #0xc]\n    ldr r2, [sp, #8]\n    ldr r3, [sp, #4]\n    add r0, r5, #0\n    bl sub_020182A8\n    add r0, r5, #0\n    mov r1, #1\n    bl sub_020182A0\n    add r6, r6, #1\n    add r5, #0x78\n    cmp r6, #2\n    blt _0225BBEE\n    mov r1, #0x1f\n    add r0, r4, #0\n    lsl r1, r1, #8\n    add r0, #0xf4\n    strh r1, [r0]\n    add r0, r4, #0\n    add r0, #0xf7\n    ldrb r0, [r0]\n    add r1, r0, #1\n    add r0, r4, #0\n    add r0, #0xf7\n    strb r1, [r0]\n    add r0, r4, #0\n    add r0, #0xf4\n    ldrh r0, [r0]\n    mov r2, #1\n    lsl r2, r2, #8\n    sub r0, #0xa0\n    cmp r0, r2\n    bge _0225BC6A\n    mov r6, #0\n    add r5, r4, #0\n    add r7, r6, #0\n    add r0, r5, #0\n    add r1, r7, #0\n    bl sub_020182A0\n    add r6, r6, #1\n    add r5, #0x78\n    cmp r6, #2\n    blt _0225BC40\n    ldr r0, [sp]\n    mov r1, #0\n    add r0, #0x1c\n    bl sub_020182A0\n    add r0, r4, #0\n    add r0, #0xf7\n    ldrb r0, [r0]\n    add r1, r0, #1\n    add r0, r4, #0\n    add r0, #0xf7\n    strb r1, [r0]\n    b _0225BD12\n    add r0, r4, #0\n    add r0, #0xf4\n    ldrh r1, [r0]\n    add r0, r4, #0\n    add r0, #0xf4\n    sub r1, #0xa0\n    strh r1, [r0]\n    add r1, r4, #0\n    add r1, #0xf0\n    ldr r3, [r1]\n    lsl r1, r2, #9\n    add r2, r3, r1\n    add r1, r4, #0\n    add r1, #0xf0\n    str r2, [r1]\n    add r1, r4, #0\n    add r1, #0xf0\n    ldr r2, [r1]\n    mov r1, #0x5a\n    add r0, r4, #0\n    lsl r1, r1, #0xe\n    add r0, #0xf0\n    cmp r2, r1\n    blt _0225BCA0\n    ldr r2, [r0]\n    sub r1, r2, r1\n    str r1, [r0]\n    add r0, r4, #0\n    add r0, #0xf0\n    ldr r0, [r0]\n    bl GF_SinDegFX32\n    asr r2, r0, #0x1f\n    lsl r3, r2, #0x10\n    lsr r1, r0, #0x10\n    lsl r2, r0, #0x10\n    mov r0, #2\n    orr r3, r1\n    mov r1, #0\n    lsl r0, r0, #0xa\n    add r2, r2, r0\n    adc r3, r1\n    lsl r0, r3, #0x14\n    lsr r7, r2, #0xc\n    orr r7, r0\n    ldr r0, [sp]\n    add r1, sp, #0xc\n    add r0, #0x1c\n    add r2, sp, #8\n    add r3, sp, #4\n    bl sub_020182B0\n    mov r6, #0\n    add r5, r4, #0\n    mov r0, #1\n    tst r0, r6\n    beq _0225BCEC\n    ldr r2, [sp, #8]\n    ldr r1, [sp, #0xc]\n    ldr r3, [sp, #4]\n    add r0, r5, #0\n    add r2, r2, r7\n    bl sub_020182A8\n    b _0225BCFA\n    ldr r2, [sp, #8]\n    ldr r1, [sp, #0xc]\n    ldr r3, [sp, #4]\n    add r0, r5, #0\n    sub r2, r2, r7\n    bl sub_020182A8\n    add r6, r6, #1\n    add r5, #0x78\n    cmp r6, #2\n    blt _0225BCD6\n    b _0225BD12\n    add r4, #0xf6\n    ldrb r1, [r4]\n    bl ov89_0225AD64\n    add sp, #0x10\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [sp]\n    add r2, r4, #0\n    ldr r1, [sp]\n    add r0, #0x1c\n    add r2, #0xf8\n    mov r3, #0\n    bl ov89_0225ADA4\n    mov r5, #0\n    add r6, r4, #0\n    add r6, #0xf8\n    add r7, r5, #0\n    add r2, r5, #1\n    lsl r2, r2, #4\n    ldr r1, [sp]\n    add r0, r4, #0\n    add r2, r6, r2\n    add r3, r7, #0\n    bl ov89_0225ADA4\n    add r5, r5, #1\n    add r4, #0x78\n    cmp r5, #2\n    blt _0225BD2A\n    mov r0, #0\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov89_0225BD48(void) {
    /* Original at 0x0225BD48 */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #8\n    add r6, r1, #0\n    add r5, r6, #0\n    add r5, #0x94\n    add r0, r5, #0\n    add r0, #0xf6\n    ldrb r3, [r0]\n    cmp r3, #0xff\n    beq _0225BD8A\n    add r0, r5, #0\n    add r0, #0xf4\n    ldrh r0, [r0]\n    asr r0, r0, #8\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    add r1, r0, #0\n    add r2, r0, #0\n    bl NNS_G3dGlbPolygonAttr\n    mov r2, #0x3f\n    ldr r0, [r6, #0x14]\n    mov r1, #0\n    lsl r2, r2, #0x18\n    bl NNSi_G3dModifyPolygonAttrMask\n    mov r2, #0x1f\n    ldr r0, [r6, #0x14]\n    mov r1, #0\n    lsl r2, r2, #0x10\n    bl NNSi_G3dModifyPolygonAttrMask\n    mov r4, #0\n    add r0, r5, #0\n    bl sub_020181EC\n    add r4, r4, #1\n    add r5, #0x78\n    cmp r4, #2\n    blt _0225BD8C\n    add r6, #0x1c\n    add r0, r6, #0\n    bl sub_020181EC\n    add sp, #8\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov89_0225BDA8(void) {
    /* Original at 0x0225BDA8 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    mov r0, #0x63\n    add r6, r2, #0\n    lsl r0, r0, #2\n    add r6, #0x94\n    mov r4, #0\n    add r5, r1, r0\n    add r0, r5, #0\n    add r1, r6, #4\n    bl ov89_0225AEA8\n    cmp r0, #1\n    bne _0225BDC6\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    add r4, r4, #1\n    add r5, #0x10\n    cmp r4, #3\n    blt _0225BDB6\n    mov r0, #0\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov89_0225BDD4(void) {
    /* Original at 0x0225BDD4 */
    /* Requires manual decompilation - 70 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0xc\n    add r6, r1, #0\n    add r4, r6, #0\n    add r4, #0x94\n    ldrb r0, [r4, #6]\n    cmp r0, #0\n    beq _0225BDEA\n    cmp r0, #1\n    beq _0225BDF6\n    b _0225BE52\n    mov r0, #1\n    lsl r0, r0, #0xc\n    str r0, [r4]\n    ldrb r0, [r4, #6]\n    add r0, r0, #1\n    strb r0, [r4, #6]\n    ldrh r0, [r4, #4]\n    add r0, r0, #1\n    strh r0, [r4, #4]\n    ldrh r0, [r4, #4]\n    cmp r0, #0x1e\n    bls _0225BE08\n    add sp, #0xc\n    mov r0, #1\n    pop {r3, r4, r5, r6, pc}\n    mov r0, #6\n    ldr r1, [r4]\n    lsl r0, r0, #6\n    add r2, r1, r0\n    mov r1, #1\n    add r0, r6, #0\n    lsl r1, r1, #0xc\n    str r2, [r4]\n    add r0, #0x1c\n    add r3, r1, #0\n    bl sub_020182C4\n    mov r0, #1\n    ldr r1, [r4]\n    lsl r0, r0, #0xc\n    sub r0, r1, r0\n    lsl r1, r0, #0xc\n    asr r0, r1, #0xb\n    lsr r0, r0, #0x14\n    add r0, r1, r0\n    asr r0, r0, #0xc\n    neg r5, r0\n    add r0, r6, #0\n    add r0, #0x1c\n    add r1, sp, #8\n    add r2, sp, #4\n    add r3, sp, #0\n    bl sub_020182B0\n    ldr r2, [sp, #4]\n    add r0, r6, #0\n    ldr r1, [sp, #8]\n    ldr r3, [sp]\n    add r0, #0x1c\n    add r2, r2, r5\n    bl sub_020182A8\n    add r0, r6, #0\n    add r4, #8\n    add r0, #0x1c\n    add r1, r6, #0\n    add r2, r4, #0\n    mov r3, #1\n    bl ov89_0225ADA4\n    mov r0, #0\n    add sp, #0xc\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void ov89_0225BE68(void) {
    ov89_0225AEA8(0, 1);
}

void ov89_0225BE84(void) {
    /* Original at 0x0225BE84 */
    /* Requires manual decompilation - 87 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5}\n    add r4, r0, #0\n    cmp r2, #3\n    bne _0225BE92\n    mov r0, #0\n    pop {r4, r5}\n    bx lr\n    cmp r3, #0\n    bne _0225BE9C\n    mov r0, #0\n    mvn r0, r0\n    b _0225BE9E\n    mov r0, #1\n    ldrb r2, [r1]\n    cmp r2, #0\n    beq _0225BEAA\n    cmp r2, #1\n    beq _0225BEDC\n    b _0225BF1E\n    mov r3, #2\n    ldrsh r5, [r1, r3]\n    lsl r2, r3, #8\n    add r2, r5, r2\n    strh r2, [r1, #2]\n    ldrsh r5, [r1, r3]\n    lsl r2, r3, #0xa\n    cmp r5, r2\n    blt _0225BEC4\n    strh r2, [r1, #2]\n    ldrb r2, [r1]\n    add r2, r2, #1\n    strb r2, [r1]\n    mov r2, #0x1d\n    mov r3, #1\n    lsl r2, r2, #6\n    strb r3, [r4, r2]\n    mov r3, #2\n    ldrsh r1, [r1, r3]\n    asr r1, r1, #8\n    add r3, r1, #0\n    mul r3, r0\n    add r0, r2, #2\n    strh r3, [r4, r0]\n    b _0225BF28\n    mov r3, #2\n    ldrsh r5, [r1, r3]\n    lsl r2, r3, #8\n    sub r2, r5, r2\n    strh r2, [r1, #2]\n    ldrsh r2, [r1, r3]\n    cmp r2, #0\n    bgt _0225BF06\n    mov r3, #0\n    strh r3, [r1, #2]\n    ldrb r2, [r1, #1]\n    add r2, r2, #1\n    strb r2, [r1, #1]\n    ldrb r2, [r1, #1]\n    cmp r2, #2\n    bhs _0225BF00\n    strb r3, [r1]\n    b _0225BF06\n    ldrb r2, [r1]\n    add r2, r2, #1\n    strb r2, [r1]\n    mov r2, #0x1d\n    mov r3, #1\n    lsl r2, r2, #6\n    strb r3, [r4, r2]\n    mov r3, #2\n    ldrsh r1, [r1, r3]\n    asr r1, r1, #8\n    add r3, r1, #0\n    mul r3, r0\n    add r0, r2, #2\n    strh r3, [r4, r0]\n    b _0225BF28\n    ldr r1, _0225BF30 ; =0x0000073E\n    mov r0, #1\n    strb r0, [r4, r1]\n    pop {r4, r5}\n    bx lr\n    mov r0, #0\n    pop {r4, r5}\n    bx lr\n    nop\n    _0225BF30: .word 0x0000073E"
    );
    #endif
}

void ov89_0225BF34(void) {
    /* Original at 0x0225BF34 */
    /* Requires manual decompilation - 76 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    ldrb r0, [r4, #6]\n    add r5, r2, #0\n    cmp r0, #3\n    bhi _0225BFD2\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0225BF4C: ; jump table\n    add r0, r5, #0\n    bl Camera_GetDistance\n    str r0, [r4]\n    ldrb r0, [r4, #6]\n    add r0, r0, #1\n    strb r0, [r4, #6]\n    ldr r0, _0225BFD8 ; =0x000005D5\n    bl PlaySE\n    ldr r0, _0225BFDC ; =0xFFFFE556\n    add r1, r5, #0\n    bl Camera_AdjustDistance\n    mov r0, #4\n    ldrsh r1, [r4, r0]\n    add r1, r1, #1\n    strh r1, [r4, #4]\n    ldrsh r0, [r4, r0]\n    cmp r0, #0x1e\n    blt _0225BFD2\n    mov r0, #0\n    strh r0, [r4, #4]\n    ldrb r0, [r4, #6]\n    add r0, r0, #1\n    strb r0, [r4, #6]\n    b _0225BFD2\n    mov r0, #4\n    ldrsh r1, [r4, r0]\n    add r1, r1, #1\n    strh r1, [r4, #4]\n    ldrsh r0, [r4, r0]\n    cmp r0, #4\n    ble _0225BFD2\n    mov r0, #0\n    strh r0, [r4, #4]\n    ldrb r0, [r4, #6]\n    add r0, r0, #1\n    strb r0, [r4, #6]\n    b _0225BFD2\n    ldr r0, _0225BFE0 ; =0x00008555\n    add r1, r5, #0\n    bl Camera_AdjustDistance\n    mov r0, #4\n    ldrsh r1, [r4, r0]\n    add r1, r1, #1\n    strh r1, [r4, #4]\n    ldrsh r0, [r4, r0]\n    cmp r0, #6\n    bge _0225BFC6\n    add r0, r5, #0\n    bl Camera_GetDistance\n    ldr r1, [r4]\n    cmp r0, r1\n    blt _0225BFD2\n    ldr r0, [r4]\n    add r1, r5, #0\n    bl Camera_SetDistance\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    nop\n    _0225BFD8: .word 0x000005D5\n    _0225BFDC: .word 0xFFFFE556\n    _0225BFE0: .word 0x00008555"
    );
    #endif
}

void ov89_0225BFE4(void) {
    /* Original at 0x0225BFE4 */
    /* Requires manual decompilation - 83 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r1, #0\n    add r5, #8\n    ldrb r0, [r5, #0xc]\n    add r4, r2, #0\n    cmp r0, #0\n    beq _0225BFF8\n    cmp r0, #1\n    beq _0225C004\n    b _0225C082\n    ldr r0, _0225C08C ; =0x000005D5\n    bl PlaySE\n    ldrb r0, [r5, #0xc]\n    add r0, r0, #1\n    strb r0, [r5, #0xc]\n    ldrb r0, [r5, #0xd]\n    mov r1, #2\n    lsl r1, r1, #0xc\n    add r0, r0, #1\n    strb r0, [r5, #0xd]\n    ldrb r0, [r5, #0xd]\n    lsl r0, r0, #0xa\n    cmp r0, r1\n    bge _0225C01C\n    lsr r1, r1, #1\n    sub r1, r1, r0\n    b _0225C022\n    mov r1, #3\n    lsl r1, r1, #0xc\n    sub r1, r0, r1\n    mov r2, #1\n    lsl r2, r2, #0xc\n    str r1, [r5, #4]\n    cmp r0, r2\n    bge _0225C030\n    str r0, [r5]\n    b _0225C054\n    lsl r1, r2, #1\n    cmp r0, r1\n    bge _0225C03C\n    sub r0, r1, r0\n    str r0, [r5]\n    b _0225C054\n    mov r1, #3\n    lsl r1, r1, #0xc\n    cmp r0, r1\n    bge _0225C04E\n    lsl r1, r2, #1\n    sub r0, r0, r1\n    neg r0, r0\n    str r0, [r5]\n    b _0225C054\n    lsl r1, r2, #2\n    sub r0, r0, r1\n    str r0, [r5]\n    ldrb r0, [r5, #0xd]\n    cmp r0, #0x10\n    blo _0225C078\n    mov r0, #1\n    lsl r0, r0, #0xc\n    str r0, [r5, #4]\n    mov r0, #0\n    str r0, [r5]\n    strb r0, [r5, #0xd]\n    ldrb r0, [r5, #0xe]\n    add r0, r0, #1\n    strb r0, [r5, #0xe]\n    ldrb r0, [r5, #0xe]\n    cmp r0, #2\n    blo _0225C078\n    ldrb r0, [r5, #0xc]\n    add r0, r0, #1\n    strb r0, [r5, #0xc]\n    add r0, r5, #0\n    add r1, r4, #0\n    bl Camera_SetLookAtCamUp\n    b _0225C086\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    nop\n    _0225C08C: .word 0x000005D5"
    );
    #endif
}

void ov89_0225C090(void) {
    /* Original at 0x0225C090 */
    /* Requires manual decompilation - 99 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    add r4, r1, #0\n    add r0, sp, #8\n    mov r1, #0\n    strh r1, [r0]\n    strh r1, [r0, #2]\n    strh r1, [r0, #4]\n    add r4, #0x18\n    strh r1, [r0, #6]\n    ldrb r1, [r4, #0xe]\n    add r5, r2, #0\n    cmp r1, #3\n    bhi _0225C15E\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _0225C0B8: ; jump table\n    add r0, sp, #0\n    add r1, r5, #0\n    bl Camera_GetAngle\n    add r0, sp, #0\n    ldrh r1, [r0]\n    strh r1, [r4]\n    ldrh r1, [r0, #2]\n    strh r1, [r4, #2]\n    ldrh r1, [r0, #4]\n    strh r1, [r4, #4]\n    ldrh r0, [r0, #6]\n    strh r0, [r4, #6]\n    ldrh r0, [r4, #2]\n    str r0, [r4, #8]\n    ldrb r0, [r4, #0xe]\n    add r0, r0, #1\n    strb r0, [r4, #0xe]\n    ldr r0, _0225C164 ; =0x000005D5\n    bl PlaySE\n    add r1, sp, #0\n    ldrh r2, [r1, #0xa]\n    mov r0, #1\n    lsl r0, r0, #0xc\n    sub r2, r2, r0\n    strh r2, [r1, #0xa]\n    ldr r1, [r4, #8]\n    sub r0, r1, r0\n    str r0, [r4, #8]\n    add r0, sp, #8\n    add r1, r5, #0\n    bl Camera_AdjustAnglePos\n    mov r0, #2\n    ldrh r1, [r4, #2]\n    lsl r0, r0, #0xc\n    ldr r2, [r4, #8]\n    sub r0, r1, r0\n    cmp r2, r0\n    bgt _0225C15E\n    ldrb r0, [r4, #0xe]\n    add r0, r0, #1\n    strb r0, [r4, #0xe]\n    b _0225C15E\n    mov r0, #0xc\n    ldrsh r1, [r4, r0]\n    add r1, r1, #1\n    strh r1, [r4, #0xc]\n    ldrsh r0, [r4, r0]\n    cmp r0, #0x10\n    blt _0225C15E\n    ldrb r0, [r4, #0xe]\n    add r0, r0, #1\n    strb r0, [r4, #0xe]\n    b _0225C15E\n    add r2, sp, #0\n    ldrh r3, [r2, #0xa]\n    mov r1, #2\n    lsl r1, r1, #8\n    add r3, r3, r1\n    strh r3, [r2, #0xa]\n    ldr r2, [r4, #8]\n    add r1, r2, r1\n    str r1, [r4, #8]\n    add r1, r5, #0\n    bl Camera_AdjustAnglePos\n    ldrh r0, [r4, #2]\n    ldr r1, [r4, #8]\n    cmp r1, r0\n    blt _0225C15E\n    add r0, r4, #0\n    add r1, r5, #0\n    bl Camera_SetAnglePos\n    add sp, #0x10\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    add sp, #0x10\n    pop {r3, r4, r5, pc}\n    _0225C164: .word 0x000005D5"
    );
    #endif
}

void ov89_0225C168(void) {
    /* Original at 0x0225C168 */
    /* Requires manual decompilation - 99 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    add r4, r1, #0\n    add r0, sp, #8\n    mov r1, #0\n    strh r1, [r0]\n    strh r1, [r0, #2]\n    strh r1, [r0, #4]\n    add r4, #0x28\n    strh r1, [r0, #6]\n    ldrb r1, [r4, #0xe]\n    add r5, r2, #0\n    cmp r1, #3\n    bhi _0225C236\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _0225C190: ; jump table\n    add r0, sp, #0\n    add r1, r5, #0\n    bl Camera_GetAngle\n    add r0, sp, #0\n    ldrh r1, [r0]\n    strh r1, [r4]\n    ldrh r1, [r0, #2]\n    strh r1, [r4, #2]\n    ldrh r1, [r0, #4]\n    strh r1, [r4, #4]\n    ldrh r0, [r0, #6]\n    strh r0, [r4, #6]\n    ldrh r0, [r4, #2]\n    str r0, [r4, #8]\n    ldrb r0, [r4, #0xe]\n    add r0, r0, #1\n    strb r0, [r4, #0xe]\n    ldr r0, _0225C23C ; =0x000005D5\n    bl PlaySE\n    add r1, sp, #0\n    ldrh r2, [r1, #0xa]\n    mov r0, #1\n    lsl r0, r0, #0xc\n    add r2, r2, r0\n    strh r2, [r1, #0xa]\n    ldr r1, [r4, #8]\n    add r0, r1, r0\n    str r0, [r4, #8]\n    add r0, sp, #8\n    add r1, r5, #0\n    bl Camera_AdjustAnglePos\n    mov r0, #2\n    ldrh r1, [r4, #2]\n    lsl r0, r0, #0xc\n    ldr r2, [r4, #8]\n    add r0, r1, r0\n    cmp r2, r0\n    blt _0225C236\n    ldrb r0, [r4, #0xe]\n    add r0, r0, #1\n    strb r0, [r4, #0xe]\n    b _0225C236\n    mov r0, #0xc\n    ldrsh r1, [r4, r0]\n    add r1, r1, #1\n    strh r1, [r4, #0xc]\n    ldrsh r0, [r4, r0]\n    cmp r0, #0x10\n    blt _0225C236\n    ldrb r0, [r4, #0xe]\n    add r0, r0, #1\n    strb r0, [r4, #0xe]\n    b _0225C236\n    add r2, sp, #0\n    ldrh r3, [r2, #0xa]\n    mov r1, #2\n    lsl r1, r1, #8\n    sub r3, r3, r1\n    strh r3, [r2, #0xa]\n    ldr r2, [r4, #8]\n    sub r1, r2, r1\n    str r1, [r4, #8]\n    add r1, r5, #0\n    bl Camera_AdjustAnglePos\n    ldrh r0, [r4, #2]\n    ldr r1, [r4, #8]\n    cmp r1, r0\n    bgt _0225C236\n    add r0, r4, #0\n    add r1, r5, #0\n    bl Camera_SetAnglePos\n    add sp, #0x10\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    add sp, #0x10\n    pop {r3, r4, r5, pc}\n    _0225C23C: .word 0x000005D5"
    );
    #endif
}

void ov89_0225C240(void) {
    /* Original at 0x0225C240 */
    /* Requires manual decompilation - 100 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    add r4, r1, #0\n    add r0, sp, #8\n    mov r1, #0\n    strh r1, [r0]\n    strh r1, [r0, #2]\n    strh r1, [r0, #4]\n    add r4, #0x38\n    strh r1, [r0, #6]\n    ldrb r1, [r4, #0xe]\n    add r5, r2, #0\n    cmp r1, #3\n    bhi _0225C30C\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _0225C268: ; jump table\n    add r0, sp, #0\n    add r1, r5, #0\n    bl Camera_GetAngle\n    add r0, sp, #0\n    ldrh r1, [r0]\n    strh r1, [r4]\n    ldrh r1, [r0, #2]\n    strh r1, [r4, #2]\n    ldrh r1, [r0, #4]\n    strh r1, [r4, #4]\n    ldrh r0, [r0, #6]\n    strh r0, [r4, #6]\n    ldrh r0, [r4]\n    str r0, [r4, #8]\n    ldr r0, _0225C314 ; =0x000005D5\n    bl PlaySE\n    ldrb r0, [r4, #0xe]\n    add r0, r0, #1\n    strb r0, [r4, #0xe]\n    add r1, sp, #0\n    ldrh r2, [r1, #8]\n    ldr r0, _0225C318 ; =0x00000AAA\n    add r2, r2, r0\n    strh r2, [r1, #8]\n    ldr r1, [r4, #8]\n    add r0, r1, r0\n    str r0, [r4, #8]\n    add r0, sp, #8\n    add r1, r5, #0\n    bl Camera_AdjustAnglePos\n    mov r0, #2\n    ldrh r1, [r4]\n    lsl r0, r0, #0xc\n    ldr r2, [r4, #8]\n    add r0, r1, r0\n    cmp r2, r0\n    blt _0225C30C\n    ldrb r0, [r4, #0xe]\n    add r0, r0, #1\n    strb r0, [r4, #0xe]\n    b _0225C30C\n    mov r0, #0xc\n    ldrsh r1, [r4, r0]\n    add r1, r1, #1\n    strh r1, [r4, #0xc]\n    ldrsh r0, [r4, r0]\n    cmp r0, #0x10\n    blt _0225C30C\n    ldrb r0, [r4, #0xe]\n    add r0, r0, #1\n    strb r0, [r4, #0xe]\n    b _0225C30C\n    add r2, sp, #0\n    ldrh r3, [r2, #8]\n    mov r1, #2\n    lsl r1, r1, #8\n    sub r3, r3, r1\n    strh r3, [r2, #8]\n    ldr r2, [r4, #8]\n    sub r1, r2, r1\n    str r1, [r4, #8]\n    add r1, r5, #0\n    bl Camera_AdjustAnglePos\n    ldrh r0, [r4]\n    ldr r1, [r4, #8]\n    cmp r1, r0\n    bgt _0225C30C\n    add r0, r4, #0\n    add r1, r5, #0\n    bl Camera_SetAnglePos\n    add sp, #0x10\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    add sp, #0x10\n    pop {r3, r4, r5, pc}\n    nop\n    _0225C314: .word 0x000005D5\n    _0225C318: .word 0x00000AAA"
    );
    #endif
}

void ov89_0225C31C(void) {
    /* Original at 0x0225C31C */
    /* Requires manual decompilation - 97 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x10\n    add r4, r1, #0\n    add r1, sp, #8\n    mov r0, #0\n    strh r0, [r1]\n    strh r0, [r1, #2]\n    strh r0, [r1, #4]\n    add r4, #0x48\n    strh r0, [r1, #6]\n    ldrb r0, [r4, #0xd]\n    add r5, r2, #0\n    cmp r0, #0\n    beq _0225C33E\n    cmp r0, #1\n    beq _0225C364\n    b _0225C3D6\n    add r0, sp, #0\n    add r1, r5, #0\n    bl Camera_GetAngle\n    add r0, sp, #0\n    ldrh r1, [r0]\n    strh r1, [r4]\n    ldrh r1, [r0, #2]\n    strh r1, [r4, #2]\n    ldrh r1, [r0, #4]\n    strh r1, [r4, #4]\n    ldrh r0, [r0, #6]\n    strh r0, [r4, #6]\n    ldrb r0, [r4, #0xd]\n    add r0, r0, #1\n    strb r0, [r4, #0xd]\n    ldr r0, _0225C3E4 ; =0x000005D5\n    bl PlaySE\n    mov r1, #6\n    ldr r2, [r4, #8]\n    lsl r1, r1, #0xe\n    add r2, r2, r1\n    mov r1, #0x5a\n    add r0, r4, #0\n    lsl r1, r1, #0xe\n    add r0, #8\n    str r2, [r4, #8]\n    cmp r2, r1\n    blt _0225C396\n    ldr r2, [r0]\n    sub r1, r2, r1\n    str r1, [r0]\n    ldrb r0, [r4, #0xc]\n    add r0, r0, #1\n    strb r0, [r4, #0xc]\n    ldrb r0, [r4, #0xc]\n    cmp r0, #2\n    blo _0225C396\n    ldrb r0, [r4, #0xd]\n    add r0, r0, #1\n    strb r0, [r4, #0xd]\n    mov r0, #0\n    str r0, [r4, #8]\n    ldr r0, [r4, #8]\n    bl GF_SinDegFX32\n    ldrh r2, [r4]\n    add r1, sp, #0\n    lsl r6, r0, #0xc\n    strh r2, [r1, #8]\n    ldrh r2, [r4, #2]\n    add r3, sp, #8\n    strh r2, [r1, #0xa]\n    ldrh r2, [r4, #4]\n    strh r2, [r1, #0xc]\n    ldrh r2, [r4, #6]\n    lsr r4, r0, #0x14\n    strh r2, [r1, #0xe]\n    asr r2, r0, #0x1f\n    lsl r2, r2, #0xc\n    mov r0, #2\n    orr r2, r4\n    mov r4, #0\n    lsl r0, r0, #0xa\n    add r6, r6, r0\n    adc r2, r4\n    lsl r0, r2, #0x14\n    lsr r2, r6, #0xc\n    orr r2, r0\n    strh r2, [r1, #0xa]\n    add r0, r3, #0\n    add r1, r5, #0\n    bl Camera_SetAngleTarget\n    b _0225C3DC\n    add sp, #0x10\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    add r0, r4, #0\n    add sp, #0x10\n    pop {r4, r5, r6, pc}\n    nop\n    _0225C3E4: .word 0x000005D5"
    );
    #endif
}

void ov89_0225C3E8(void) {
    /* Original at 0x0225C3E8 */
    /* Requires manual decompilation - 76 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r4, #0x58\n    ldrb r0, [r4, #6]\n    add r5, r2, #0\n    cmp r0, #3\n    bhi _0225C488\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0225C402: ; jump table\n    add r0, r5, #0\n    bl Camera_GetDistance\n    str r0, [r4]\n    ldrb r0, [r4, #6]\n    add r0, r0, #1\n    strb r0, [r4, #6]\n    ldr r0, _0225C48C ; =0x000005D5\n    bl PlaySE\n    ldr r0, _0225C490 ; =0x00001AAA\n    add r1, r5, #0\n    bl Camera_AdjustDistance\n    mov r0, #4\n    ldrsh r1, [r4, r0]\n    add r1, r1, #1\n    strh r1, [r4, #4]\n    ldrsh r0, [r4, r0]\n    cmp r0, #0x1e\n    blt _0225C488\n    mov r0, #0\n    strh r0, [r4, #4]\n    ldrb r0, [r4, #6]\n    add r0, r0, #1\n    strb r0, [r4, #6]\n    b _0225C488\n    mov r0, #4\n    ldrsh r1, [r4, r0]\n    add r1, r1, #1\n    strh r1, [r4, #4]\n    ldrsh r0, [r4, r0]\n    cmp r0, #4\n    ble _0225C488\n    mov r0, #0\n    strh r0, [r4, #4]\n    ldrb r0, [r4, #6]\n    add r0, r0, #1\n    strb r0, [r4, #6]\n    b _0225C488\n    ldr r0, _0225C494 ; =0xFFFF7AAB\n    add r1, r5, #0\n    bl Camera_AdjustDistance\n    mov r0, #4\n    ldrsh r1, [r4, r0]\n    add r1, r1, #1\n    strh r1, [r4, #4]\n    ldrsh r0, [r4, r0]\n    cmp r0, #6\n    bge _0225C47C\n    add r0, r5, #0\n    bl Camera_GetDistance\n    ldr r1, [r4]\n    cmp r0, r1\n    bgt _0225C488\n    ldr r0, [r4]\n    add r1, r5, #0\n    bl Camera_SetDistance\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    _0225C48C: .word 0x000005D5\n    _0225C490: .word 0x00001AAA\n    _0225C494: .word 0xFFFF7AAB"
    );
    #endif
}

void ov89_0225C498(void) {
    /* Original at 0x0225C498 */
    /* Requires manual decompilation - 100 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0x24\n    add r4, r1, #0\n    add r1, sp, #0x18\n    mov r0, #0\n    str r0, [r1]\n    str r0, [r1, #4]\n    add r4, #0x60\n    str r0, [r1, #8]\n    ldrb r0, [r4, #0x1d]\n    add r5, r2, #0\n    cmp r0, #0\n    beq _0225C4B8\n    cmp r0, #1\n    beq _0225C4EE\n    b _0225C55E\n    add r0, sp, #0xc\n    add r1, r5, #0\n    bl Camera_GetLookAtCamPos\n    add r3, sp, #0xc\n    add r2, r4, #0\n    ldmia r3!, {r0, r1}\n    add r2, #0xc\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    add r1, r5, #0\n    str r0, [r2]\n    add r0, sp, #0\n    bl Camera_GetLookAtCamTarget\n    add r3, sp, #0\n    ldmia r3!, {r0, r1}\n    add r2, r4, #0\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    str r0, [r2]\n    ldrb r0, [r4, #0x1d]\n    add r0, r0, #1\n    strb r0, [r4, #0x1d]\n    ldr r0, _0225C56C ; =0x000005D5\n    bl PlaySE\n    mov r1, #2\n    ldr r2, [r4, #0x18]\n    lsl r1, r1, #0x10\n    add r2, r2, r1\n    mov r1, #0x5a\n    add r0, r4, #0\n    lsl r1, r1, #0xe\n    add r0, #0x18\n    str r2, [r4, #0x18]\n    cmp r2, r1\n    blt _0225C520\n    ldr r2, [r0]\n    sub r1, r2, r1\n    str r1, [r0]\n    ldrb r0, [r4, #0x1c]\n    add r0, r0, #1\n    strb r0, [r4, #0x1c]\n    ldrb r0, [r4, #0x1c]\n    cmp r0, #4\n    blo _0225C520\n    ldrb r0, [r4, #0x1d]\n    add r0, r0, #1\n    strb r0, [r4, #0x1d]\n    mov r0, #0\n    str r0, [r4, #0x18]\n    ldr r0, [r4, #0x18]\n    bl GF_SinDegFX32\n    asr r1, r0, #0x1f\n    lsr r2, r0, #0x10\n    lsl r1, r1, #0x10\n    lsl r3, r0, #0x10\n    mov r0, #2\n    orr r1, r2\n    mov r2, #0\n    lsl r0, r0, #0xa\n    add r3, r3, r0\n    adc r1, r2\n    lsl r0, r1, #0x14\n    lsr r1, r3, #0xc\n    orr r1, r0\n    str r1, [sp, #0x18]\n    add r0, r4, #0\n    add r1, r5, #0\n    bl Camera_SetLookAtCamTarget\n    add r4, #0xc\n    add r0, r4, #0\n    add r1, r5, #0\n    bl Camera_SetLookAtCamPos\n    add r0, sp, #0x18\n    add r1, r5, #0\n    bl Camera_OffsetLookAtPosAndTarget\n    b _0225C564\n    add sp, #0x24\n    mov r0, #1\n    pop {r4, r5, pc}\n    mov r0, #0\n    add sp, #0x24\n    pop {r4, r5, pc}\n    nop\n    _0225C56C: .word 0x000005D5"
    );
    #endif
}

void ov89_0225C570(void) {
    /* Original at 0x0225C570 */
    /* Requires manual decompilation - 100 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0x24\n    add r4, r1, #0\n    add r1, sp, #0x18\n    mov r0, #0\n    str r0, [r1]\n    str r0, [r1, #4]\n    add r4, #0x80\n    str r0, [r1, #8]\n    ldrb r0, [r4, #0x1d]\n    add r5, r2, #0\n    cmp r0, #0\n    beq _0225C590\n    cmp r0, #1\n    beq _0225C5C6\n    b _0225C636\n    add r0, sp, #0xc\n    add r1, r5, #0\n    bl Camera_GetLookAtCamPos\n    add r3, sp, #0xc\n    add r2, r4, #0\n    ldmia r3!, {r0, r1}\n    add r2, #0xc\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    add r1, r5, #0\n    str r0, [r2]\n    add r0, sp, #0\n    bl Camera_GetLookAtCamTarget\n    add r3, sp, #0\n    ldmia r3!, {r0, r1}\n    add r2, r4, #0\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    str r0, [r2]\n    ldrb r0, [r4, #0x1d]\n    add r0, r0, #1\n    strb r0, [r4, #0x1d]\n    ldr r0, _0225C644 ; =0x000005D5\n    bl PlaySE\n    mov r1, #2\n    ldr r2, [r4, #0x18]\n    lsl r1, r1, #0x10\n    add r2, r2, r1\n    mov r1, #0x5a\n    add r0, r4, #0\n    lsl r1, r1, #0xe\n    add r0, #0x18\n    str r2, [r4, #0x18]\n    cmp r2, r1\n    blt _0225C5F8\n    ldr r2, [r0]\n    sub r1, r2, r1\n    str r1, [r0]\n    ldrb r0, [r4, #0x1c]\n    add r0, r0, #1\n    strb r0, [r4, #0x1c]\n    ldrb r0, [r4, #0x1c]\n    cmp r0, #4\n    blo _0225C5F8\n    ldrb r0, [r4, #0x1d]\n    add r0, r0, #1\n    strb r0, [r4, #0x1d]\n    mov r0, #0\n    str r0, [r4, #0x18]\n    ldr r0, [r4, #0x18]\n    bl GF_SinDegFX32\n    asr r1, r0, #0x1f\n    lsr r2, r0, #0x11\n    lsl r1, r1, #0xf\n    lsl r3, r0, #0xf\n    mov r0, #2\n    orr r1, r2\n    mov r2, #0\n    lsl r0, r0, #0xa\n    add r3, r3, r0\n    adc r1, r2\n    lsl r0, r1, #0x14\n    lsr r1, r3, #0xc\n    orr r1, r0\n    str r1, [sp, #0x1c]\n    add r0, r4, #0\n    add r1, r5, #0\n    bl Camera_SetLookAtCamTarget\n    add r4, #0xc\n    add r0, r4, #0\n    add r1, r5, #0\n    bl Camera_SetLookAtCamPos\n    add r0, sp, #0x18\n    add r1, r5, #0\n    bl Camera_OffsetLookAtPosAndTarget\n    b _0225C63C\n    add sp, #0x24\n    mov r0, #1\n    pop {r4, r5, pc}\n    mov r0, #0\n    add sp, #0x24\n    pop {r4, r5, pc}\n    nop\n    _0225C644: .word 0x000005D5"
    );
    #endif
}

void ov89_0225C648(void) {
    /* Original at 0x0225C648 */
    /* Requires manual decompilation - 100 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    add r4, r1, #0\n    add r0, sp, #8\n    mov r1, #0\n    strh r1, [r0]\n    strh r1, [r0, #2]\n    strh r1, [r0, #4]\n    add r4, #0xa0\n    strh r1, [r0, #6]\n    ldrb r1, [r4, #0xe]\n    add r5, r2, #0\n    cmp r1, #3\n    bhi _0225C714\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _0225C670: ; jump table\n    add r0, sp, #0\n    add r1, r5, #0\n    bl Camera_GetAngle\n    add r0, sp, #0\n    ldrh r1, [r0]\n    strh r1, [r4]\n    ldrh r1, [r0, #2]\n    strh r1, [r4, #2]\n    ldrh r1, [r0, #4]\n    strh r1, [r4, #4]\n    ldrh r0, [r0, #6]\n    strh r0, [r4, #6]\n    ldrh r0, [r4]\n    str r0, [r4, #8]\n    ldrb r0, [r4, #0xe]\n    add r0, r0, #1\n    strb r0, [r4, #0xe]\n    ldr r0, _0225C71C ; =0x000005D5\n    bl PlaySE\n    add r1, sp, #0\n    ldrh r2, [r1, #8]\n    ldr r0, _0225C720 ; =0x00000AAA\n    sub r2, r2, r0\n    strh r2, [r1, #8]\n    ldr r1, [r4, #8]\n    sub r0, r1, r0\n    str r0, [r4, #8]\n    add r0, sp, #8\n    add r1, r5, #0\n    bl Camera_AdjustAnglePos\n    mov r0, #2\n    ldrh r1, [r4]\n    lsl r0, r0, #0xc\n    ldr r2, [r4, #8]\n    sub r0, r1, r0\n    cmp r2, r0\n    bgt _0225C714\n    ldrb r0, [r4, #0xe]\n    add r0, r0, #1\n    strb r0, [r4, #0xe]\n    b _0225C714\n    mov r0, #0xc\n    ldrsh r1, [r4, r0]\n    add r1, r1, #1\n    strh r1, [r4, #0xc]\n    ldrsh r0, [r4, r0]\n    cmp r0, #0x10\n    blt _0225C714\n    ldrb r0, [r4, #0xe]\n    add r0, r0, #1\n    strb r0, [r4, #0xe]\n    b _0225C714\n    add r2, sp, #0\n    ldrh r3, [r2, #8]\n    mov r1, #2\n    lsl r1, r1, #8\n    add r3, r3, r1\n    strh r3, [r2, #8]\n    ldr r2, [r4, #8]\n    add r1, r2, r1\n    str r1, [r4, #8]\n    add r1, r5, #0\n    bl Camera_AdjustAnglePos\n    ldrh r0, [r4]\n    ldr r1, [r4, #8]\n    cmp r1, r0\n    blt _0225C714\n    add r0, r4, #0\n    add r1, r5, #0\n    bl Camera_SetAnglePos\n    add sp, #0x10\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    add sp, #0x10\n    pop {r3, r4, r5, pc}\n    nop\n    _0225C71C: .word 0x000005D5\n    _0225C720: .word 0x00000AAA"
    );
    #endif
}

void ov89_0225C724(void) {
    /* Original at 0x0225C724 */
    /* Requires manual decompilation - 100 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x28\n    str r0, [sp, #0x10]\n    ldr r0, [sp, #0x40]\n    str r1, [sp, #0x14]\n    add r4, r2, #0\n    str r3, [sp, #0x18]\n    bl ov45_0222EC7C\n    add r5, r0, #0\n    mov r0, #0\n    mvn r0, r0\n    cmp r5, r0\n    beq _0225C80A\n    ldr r0, [sp, #0x40]\n    bl ov45_0222EC68\n    mov r1, #0\n    mvn r1, r1\n    str r0, [sp, #0x24]\n    cmp r0, r1\n    beq _0225C80A\n    ldr r0, [sp, #0x18]\n    ldr r1, [sp, #0x24]\n    bl ov45_0222A578\n    add r7, r0, #0\n    beq _0225C80A\n    cmp r5, #8\n    blo _0225C768\n    bl GF_AssertFail\n    add sp, #0x28\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0x7d\n    bl PlayerProfile_New\n    add r6, r0, #0\n    add r0, r7, #0\n    add r1, r6, #0\n    mov r2, #0x7d\n    bl ov45_0222A844\n    add r0, r6, #0\n    mov r1, #0x7d\n    bl PlayerProfile_GetPlayerName_NewString\n    str r0, [sp, #0x1c]\n    add r0, r6, #0\n    bl PlayerProfile_GetTrainerGender\n    add r3, r0, #0\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x14]\n    ldr r2, [sp, #0x1c]\n    mov r1, #0\n    bl BufferString\n    ldr r0, [sp, #0x10]\n    mov r1, #0\n    bl NewString_ReadMsgData\n    str r0, [sp, #0x20]\n    mov r0, #0x40\n    mov r1, #0x7d\n    bl String_New\n    add r7, r0, #0\n    ldr r0, [sp, #0x14]\n    ldr r2, [sp, #0x20]\n    add r1, r7, #0\n    bl StringExpandPlaceholders\n    lsl r5, r5, #4\n    add r0, r4, r5\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    ldr r0, [sp, #0x18]\n    ldr r1, [sp, #0x24]\n    bl ov45_0222AB28\n    cmp r0, #1\n    bne _0225C7D6\n    ldr r0, _0225C810 ; =0x00070800\n    b _0225C7D8\n    ldr r0, _0225C814 ; =0x00010200\n    mov r1, #0\n    str r1, [sp]\n    str r1, [sp, #4]\n    str r0, [sp, #8]\n    add r0, r4, r5\n    add r2, r7, #0\n    add r3, r1, #0\n    str r1, [sp, #0xc]\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r4, r5\n    bl CopyWindowToVram\n    ldr r0, [sp, #0x1c]\n    bl String_Delete\n    ldr r0, [sp, #0x20]\n    bl String_Delete\n    add r0, r7, #0\n    bl String_Delete\n    add r0, r6, #0\n    bl Heap_Free\n    add sp, #0x28\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0225C810: .word 0x00070800\n    _0225C814: .word 0x00010200"
    );
    #endif
}

void ov89_0225C818(void) {
    /* Original at 0x0225C818 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    cmp r1, #8\n    blo _0225C824\n    bl GF_AssertFail\n    pop {r3, pc}\n    lsl r1, r1, #4\n    add r0, r0, r1\n    bl ClearWindowTilemapAndCopyToVram\n    pop {r3, pc}"
    );
    #endif
}

void ov89_0225C830(void) {
    _u32_div_f(9);
}

void ov89_0225C84C(void) {
    /* Original at 0x0225C84C */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r0, _0225C888 ; =ov89_0225CE50\n    add r6, r1, #0\n    mov r4, #0xff\n    bl TouchscreenHitbox_FindRectAtTouchNew\n    cmp r0, #6\n    bge _0225C87A\n    cmp r6, r0\n    beq _0225C884\n    mov r1, #0xc\n    mul r1, r0\n    add r1, r5, r1\n    ldrh r2, [r1, #2]\n    cmp r2, #0\n    beq _0225C884\n    add r1, r4, #0\n    add r1, #0xee\n    cmp r2, r1\n    bhi _0225C884\n    add r4, r0, #0\n    b _0225C884\n    bne _0225C880\n    mov r4, #0xfe\n    b _0225C884\n    add r0, r4, #0\n    pop {r4, r5, r6, pc}\n    add r0, r4, #0\n    pop {r4, r5, r6, pc}\n    _0225C888: .word ov89_0225CE50"
    );
    #endif
}

void ov89_0225C88C(void) {
    /* Original at 0x0225C88C */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _0225C8B0 ; =0x000001E7\n    cmp r0, r3\n    bne _0225C89A\n    cmp r1, #0\n    ble _0225C89A\n    mov r0, #0\n    bx lr\n    ldr r1, _0225C8B4 ; =0x000001ED\n    cmp r0, r1\n    bne _0225C8A8\n    cmp r2, #0\n    bne _0225C8A8\n    mov r0, #0\n    bx lr\n    lsl r1, r0, #2\n    ldr r0, _0225C8B8 ; =ov89_0225CE94\n    ldrb r0, [r0, r1]\n    bx lr\n    _0225C8B0: .word 0x000001E7\n    _0225C8B4: .word 0x000001ED\n    _0225C8B8: .word ov89_0225CE94"
    );
    #endif
}

void ov89_0225C8BC(void) {
    /* Original at 0x0225C8BC */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "ldr r2, _0225C8D4 ; =0x000001E7\n    cmp r0, r2\n    bne _0225C8CA\n    cmp r1, #0\n    ble _0225C8CA\n    mov r0, #2\n    bx lr\n    lsl r1, r0, #2\n    ldr r0, _0225C8D8 ; =ov89_0225CE95\n    ldrb r0, [r0, r1]\n    bx lr\n    nop\n    _0225C8D4: .word 0x000001E7\n    _0225C8D8: .word ov89_0225CE95"
    );
    #endif
}

void ov89_0225C8DC(void) {
    /* Original at 0x0225C8DC */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _0225C8E8 ; =ov45_0222EE50\n    add r2, r0, #0\n    ldr r0, _0225C8EC ; =ov89_0225D64C\n    mov r1, #3\n    bx r3\n    nop\n    _0225C8E8: .word ov45_0222EE50\n    _0225C8EC: .word ov89_0225D64C"
    );
    #endif
}

void ov89_0225C8F0(void) {
    /* Original at 0x0225C8F0 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r2, [r1, #4]\n    cmp r2, r0\n    bne _0225C8FC\n    mov r0, #0\n    pop {r3, pc}\n    ldr r1, [r1]\n    cmp r1, #0\n    bne _0225C906\n    mov r0, #0\n    pop {r3, pc}\n    bl ov45_0222EC7C\n    mov r1, #0\n    mvn r1, r1\n    cmp r0, r1\n    beq _0225C916\n    mov r0, #1\n    pop {r3, pc}\n    mov r0, #0\n    pop {r3, pc}"
    );
    #endif
}

void ov89_0225C91C(void) {
    /* Original at 0x0225C91C */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov45_0222D844\n    cmp r0, #1\n    bne _0225C92C\n    mov r0, #0\n    pop {r4, pc}\n    mov r0, #2\n    add r1, r4, #0\n    mov r2, #0xc\n    bl ov45_0222EFAC\n    mov r0, #1\n    pop {r4, pc}"
    );
    #endif
}

void ov89_0225C93C(void) {
    /* Original at 0x0225C93C */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r3, #0\n    add r5, r0, #0\n    add r0, r4, #0\n    bl ov89_02259E48\n    add r1, r0, #0\n    add r0, r5, #0\n    bl ov89_0225C8F0\n    cmp r0, #0\n    beq _0225C95C\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov89_0225A148\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov89_0225C960(void) {
    /* Original at 0x0225C960 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r3, #0\n    add r5, r0, #0\n    add r0, r4, #0\n    bl ov89_02259E48\n    add r1, r0, #0\n    add r0, r5, #0\n    bl ov89_0225C8F0\n    cmp r0, #0\n    beq _0225C986\n    add r0, r5, #0\n    bl ov45_0222EC7C\n    add r1, r0, #0\n    add r0, r4, #0\n    bl ov89_0225A160\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov89_0225C988(void) {
    /* Original at 0x0225C988 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r3, #0\n    add r5, r0, #0\n    add r0, r6, #0\n    add r4, r1, #0\n    bl ov89_02259E48\n    add r1, r0, #0\n    add r0, r5, #0\n    bl ov89_0225C8F0\n    cmp r0, #0\n    beq _0225C9AC\n    add r0, r6, #0\n    add r1, r4, #0\n    add r2, r5, #0\n    bl ov89_02259EC4\n    pop {r4, r5, r6, pc}"
    );
    #endif
}
