/* Decompiled from asm/overlay_89.s */
#include "global.h"

void ov89_02258800(void) {
    // push {r4, r5, lr}
    // sub sp, #0xc
    // add r4, r0, #0
    // mov r0, #0
    // add r1, r0, #0
    // bl Main_SetVBlankIntrCB
    // bl HBlankInterruptDisable
    // bl GfGfx_DisableEngineAPlanes
    // bl GfGfx_DisableEngineBPlanes
    // mov r1, #1
    // lsl r1, r1, #0x1a
    // ldr r0, [r1]
    // ldr r2, _02258AC4 ; =0xFFFFE0FF
    // and r0, r2
    // str r0, [r1]
    // ldr r0, _02258AC8 ; =0x04001000
    // ldr r3, [r0]
    // and r2, r3
    // str r2, [r0]
    // ldr r3, [r1]
    // ldr r2, _02258ACC ; =0xFFFF1FFF
    // and r3, r2
    // str r3, [r1]
    // ldr r3, [r0]
    // add r1, #0x50
    // and r2, r3
    // str r2, [r0]
    // mov r2, #0
    // strh r2, [r1]
    // add r0, #0x50
    // strh r2, [r0]
    // mov r2, #5
    // mov r0, #3
    // mov r1, #0x7d
    // lsl r2, r2, #0x10
    // bl Heap_Create
    // ldr r1, _02258AD0 ; =0x000019E4
    // add r0, r4, #0
    // mov r2, #0x7d
    // bl OverlayManager_CreateAndGetData
    // ldr r2, _02258AD0 ; =0x000019E4
    // mov r1, #0
    // add r5, r0, #0
    // bl MI_CpuFill8
    // add r0, r4, #0
    // bl OverlayManager_GetArgs
    // str r0, [r5]
    // ldr r0, [r0]
    // bl ov45_0222A2C8
    // str r0, [r5, #4]
    // ldr r0, [r5]
    // ldr r0, [r0]
    // bl ov45_0222A2CC
    // ldr r1, _02258AD4 ; =0x000019E0
    // str r0, [r5, r1]
    // add r0, r5, #0
    // bl ov89_02259E18
    // ldr r0, [r5]
    // ldr r2, _02258AD8 ; =0x000008D8
    // ldrb r0, [r0, #4]
    // ldr r1, [r5, #4]
    // add r2, r5, r2
    // bl ov89_02259E50
    // mov r1, #2
    // ldr r0, _02258ADC ; =0x000019D4
    // lsl r1, r1, #0xc
    // str r1, [r5, r0]
    // ldr r1, [r5, r0]
    // add r0, r0, #4
    // str r1, [r5, r0]
    // mov r0, #0x7d
    // bl ov89_02259D70
    // str r0, [r5, #0x14]
    // mov r0, #0x7d
    // bl PaletteData_Init
    // str r0, [r5, #0xc]
    // mov r1, #1
    // bl PaletteData_SetAutoTransparent
    // mov r2, #2
    // ldr r0, [r5, #0xc]
    // mov r1, #0
    // lsl r2, r2, #8
    // mov r3, #0x7d
    // bl PaletteData_AllocBuffers
    // mov r1, #1
    // ldr r0, [r5, #0xc]
    // lsl r2, r1, #9
    // mov r3, #0x7d
    // bl PaletteData_AllocBuffers
    // mov r2, #7
    // ldr r0, [r5, #0xc]
    // mov r1, #2
    // lsl r2, r2, #6
    // mov r3, #0x7d
    // bl PaletteData_AllocBuffers
    // mov r2, #2
    // ldr r0, [r5, #0xc]
    // mov r1, #3
    // lsl r2, r2, #8
    // mov r3, #0x7d
    // bl PaletteData_AllocBuffers
    // ldr r0, [r5, #0xc]
    // mov r1, #1
    // bl PaletteData_SetAutoTransparent
    // mov r0, #0x7d
    // bl BgConfig_Alloc
    // str r0, [r5, #8]
    // mov r0, #0x40
    // mov r1, #0x7d
    // bl GF_CreateVramTransferManager
    // mov r0, #4
    // mov r1, #8
    // bl SetKeyRepeatTimers
    // ldr r0, [r5, #8]
    // bl ov89_0225905C
    // bl sub_020210BC
    // mov r0, #4
    // bl sub_02021148
    // mov r0, #2
    // mov r1, #0x7d
    // bl FontID_Alloc
    // mov r0, #0x7d
    // bl MessageFormat_New
    // str r0, [r5, #0x2c]
    // ldr r2, _02258AE0 ; =0x000002F2
    // mov r0, #0
    // mov r1, #0x1b
    // mov r3, #0x7d
    // bl NewMsgDataFromNarc
    // str r0, [r5, #0x30]
    // mov r0, #4
    // mov r1, #0x7d
    // bl FontSystem_NewInit
    // str r0, [r5, #0x10]
    // mov r0, #0xd2
    // mov r1, #0x7d
    // bl NARC_New
    // mov r1, #0x16
    // lsl r1, r1, #4
    // str r0, [r5, r1]
    // mov r0, #0x45
    // mov r1, #0x7d
    // bl NARC_New
    // mov r1, #0x59
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // sub r1, r1, #4
    // ldr r1, [r5, r1]
    // add r0, r5, #0
    // bl ov89_02259264
    // mov r1, #0x16
    // lsl r1, r1, #4
    // ldr r1, [r5, r1]
    // add r0, r5, #0
    // bl ov89_02259BAC
    // add r0, r5, #0
    // bl ov89_02259B00
    // add r0, r5, #0
    // bl ov89_02259CD0
    // mov r0, #1
    // lsl r0, r0, #8
    // mov r1, #0x7d
    // bl String_New
    // add r1, r5, #0
    // add r1, #0xc4
    // str r0, [r1]
    // mov r0, #0x7d
    // bl SpriteSystem_Alloc
    // ldr r1, _02258AE4 ; =ov89_0225CA58
    // ldr r2, _02258AE8 ; =ov89_0225C9EC
    // mov r3, #0x20
    // str r0, [r5, #0x1c]
    // bl SpriteSystem_Init
    // ldr r1, _02258AEC ; =0x00200010
    // mov r0, #1
    // bl G2dRenderer_SetObjCharTransferReservedRegion
    // mov r0, #1
    // bl G2dRenderer_SetPlttTransferReservedRegion
    // ldr r0, [r5, #0x1c]
    // bl SpriteManager_New
    // str r0, [r5, #0x20]
    // ldr r0, [r5, #0x1c]
    // ldr r1, [r5, #0x20]
    // mov r2, #0x80
    // bl SpriteSystem_InitSprites
    // ldr r0, [r5, #0x1c]
    // ldr r1, [r5, #0x20]
    // ldr r2, _02258AF0 ; =ov89_0225CA00
    // bl SpriteSystem_InitManagerWithCapacities
    // ldr r0, [r5, #0x1c]
    // bl SpriteSystem_GetRenderer
    // mov r2, #0x11
    // mov r1, #0
    // lsl r2, r2, #0x10
    // bl G2dRenderer_SetSubSurfaceCoords
    // bl sub_0203A880
    // ldr r1, _02258AD4 ; =0x000019E0
    // mov r0, #0x65
    // lsl r0, r0, #2
    // ldr r1, [r5, r1]
    // add r0, r5, r0
    // bl ov89_0225A46C
    // mov r1, #0x16
    // lsl r1, r1, #4
    // ldr r1, [r5, r1]
    // add r0, r5, #0
    // bl ov89_02259408
    // mov r1, #0x16
    // lsl r1, r1, #4
    // ldr r1, [r5, r1]
    // add r0, r5, #0
    // bl ov89_02259734
    // add r0, r5, #0
    // bl ov89_02259588
    // add r0, r5, #0
    // bl ov89_022597FC
    // add r0, r5, #0
    // bl ov89_022598D0
    // mov r0, #0x7d
    // bl YesNoPrompt_Create
    // str r0, [r5, #0x24]
    // mov r0, #6
    // str r0, [sp]
    // mov r1, #1
    // str r1, [sp, #4]
    // mov r0, #0x7d
    // str r0, [sp, #8]
    // mov r0, #0
    // add r2, r1, #0
    // add r3, r0, #0
    // bl BeginNormalPaletteFade
    // ldr r0, [r5]
    // ldr r0, [r0]
    // cmp r0, #0
    // beq _02258A4A
    // mov r1, #1
    // bl ov45_0222A520
    // mov r0, #1
    // add r1, r0, #0
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #2
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #4
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #8
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #2
    // mov r1, #1
    // bl GfGfx_EngineBTogglePlanes
    // mov r0, #4
    // mov r1, #1
    // bl GfGfx_EngineBTogglePlanes
    // ldr r0, _02258AF4 ; =gSystem + 0x60
    // mov r1, #1
    // strb r1, [r0, #9]
    // bl GfGfx_SwapDisplay
    // bl GfGfx_BothDispOn
    // mov r0, #0x10
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #0x10
    // mov r1, #1
    // bl GfGfx_EngineBTogglePlanes
    // mov r0, #1
    // bl TextFlags_SetCanABSpeedUpPrint
    // mov r0, #0
    // bl TextFlags_SetAutoScrollParam
    // mov r0, #0
    // bl TextFlags_SetCanTouchSpeedUpPrint
    // ldr r0, _02258AF8 ; =ov89_02258FF4
    // ldr r2, _02258AFC ; =0x0000EA60
    // add r1, r5, #0
    // bl SysTask_CreateOnMainQueue
    // str r0, [r5, #0x18]
    // ldr r0, _02258B00 ; =ov89_0225901C
    // add r1, r5, #0
    // bl Main_SetVBlankIntrCB
    // mov r0, #1
    // add sp, #0xc
    // pop {r4, r5, pc}
    // _02258AC4: .word 0xFFFFE0FF
    // _02258AC8: .word 0x04001000
    // _02258ACC: .word 0xFFFF1FFF
    // _02258AD0: .word 0x000019E4
    // _02258AD4: .word 0x000019E0
    // _02258AD8: .word 0x000008D8
    // _02258ADC: .word 0x000019D4
    // _02258AE0: .word 0x000002F2
    // _02258AE4: .word ov89_0225CA58
    // _02258AE8: .word ov89_0225C9EC
    // _02258AEC: .word 0x00200010
    // _02258AF0: .word ov89_0225CA00
    // _02258AF4: .word gSystem + 0x60
    // _02258AF8: .word ov89_02258FF4
    // _02258AFC: .word 0x0000EA60
    // _02258B00: .word ov89_0225901C
    // TODO: decompile
}


void ov89_02258B04(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x2c
    // add r5, r1, #0
    // bl OverlayManager_GetData
    // add r4, r0, #0
    // ldr r3, [r4]
    // add r1, r4, #0
    // ldr r2, _02258E5C ; =0x000009BC
    // mov r0, #0x65
    // add r1, #0xcc
    // lsl r0, r0, #2
    // ldrb r3, [r3, #4]
    // ldr r1, [r1]
    // ldr r2, [r4, r2]
    // add r0, r4, r0
    // bl ov89_0225A4F4
    // ldr r0, [r5]
    // cmp r0, #0xa
    // bls _02258B30
    // b _02258E40
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _02258B3C: ; jump table
    // mov r0, #0x5a
    // mov r1, #1
    // lsl r0, r0, #2
    // str r1, [r4, r0]
    // add r0, r4, #0
    // bl ov89_0225C8DC
    // add r0, r4, #0
    // add r1, sp, #0x20
    // bl ov89_02259E28
    // ldr r0, [r5]
    // add r0, r0, #1
    // str r0, [r5]
    // b _02258E4A
    // bl IsPaletteFadeFinished
    // cmp r0, #1
    // beq _02258B7A
    // b _02258E4A
    // ldr r0, _02258E5C ; =0x000009BC
    // mov r1, #1
    // str r1, [r4, r0]
    // ldr r0, [r5]
    // add r0, r0, #1
    // str r0, [r5]
    // b _02258E4A
    // ldr r0, _02258E60 ; =gSystem + 0x40
    // ldrh r1, [r0, #0x24]
    // cmp r1, #0
    // beq _02258BF4
    // ldrh r0, [r0, #0x22]
    // cmp r0, #0xa0
    // bhs _02258BF4
    // ldr r1, _02258E64 ; =0x00000555
    // add r0, r4, #0
    // bl ov89_0225A41C
    // cmp r0, #1
    // bne _02258BF4
    // mov r2, #0x92
    // lsl r2, r2, #4
    // ldrb r1, [r4, r2]
    // ldr r7, _02258E60 ; =gSystem + 0x40
    // mov r3, #0xc
    // add r6, r1, #0
    // mul r6, r3
    // add r1, r2, #0
    // ldrh r0, [r7, #0x20]
    // add r6, r4, r6
    // sub r1, #0x3f
    // strb r0, [r6, r1]
    // ldrb r1, [r4, r2]
    // ldrh r0, [r7, #0x22]
    // add r6, r1, #0
    // mul r6, r3
    // add r1, r2, #0
    // add r6, r4, r6
    // sub r1, #0x3e
    // strb r0, [r6, r1]
    // add r1, r2, #0
    // ldrb r2, [r4, r2]
    // sub r1, #0x48
    // add r1, r4, r1
    // mul r3, r2
    // mov r2, #0x5b
    // lsl r2, r2, #2
    // ldr r2, [r4, r2]
    // add r0, r4, #0
    // add r1, r1, r3
    // bl ov89_02259EC4
    // ldr r0, _02258E68 ; =0x000008D8
    // add r2, r4, r0
    // add r0, #0x48
    // ldrb r1, [r4, r0]
    // mov r0, #0xc
    // mul r0, r1
    // add r0, r2, r0
    // bl ov89_0225C91C
    // ldr r1, _02258E68 ; =0x000008D8
    // add r0, r4, r1
    // add r1, #0x48
    // ldrb r1, [r4, r1]
    // bl ov89_0225C84C
    // add r1, r0, #0
    // cmp r1, #6
    // bge _02258C14
    // mov r0, #0x92
    // lsl r0, r0, #4
    // strb r1, [r4, r0]
    // add r0, r4, #0
    // bl ov89_0225A16C
    // b _02258E4A
    // ldr r0, [r5]
    // cmp r0, #2
    // bne _02258D0A
    // cmp r1, #0xfe
    // bne _02258D0A
    // ldr r0, _02258E6C ; =0x000005E5
    // bl PlaySE
    // mov r0, #8
    // str r0, [sp]
    // mov r1, #0
    // str r1, [sp, #4]
    // ldr r0, [r4, #0xc]
    // mov r2, #9
    // mov r3, #1
    // bl PaletteData_BlendPalette
    // mov r0, #8
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // ldr r2, _02258E70 ; =0x00000921
    // ldr r0, [r4, #0xc]
    // ldrb r2, [r4, r2]
    // mov r1, #2
    // mov r3, #0x10
    // lsl r2, r2, #0x14
    // lsr r2, r2, #0x10
    // bl PaletteData_BlendPalette
    // mov r0, #3
    // str r0, [r5]
    // b _02258E4A
    // add r0, r4, #0
    // add r0, #0xb4
    // mov r1, #0xf
    // bl FillWindowPixelBuffer
    // add r0, r4, #0
    // add r0, #0xb4
    // mov r1, #0
    // mov r2, #1
    // mov r3, #0xe
    // bl DrawFrameAndWindow2
    // add r2, r4, #0
    // add r2, #0xc4
    // ldr r0, [r4, #0x30]
    // ldr r2, [r2]
    // mov r1, #2
    // bl ReadMsgDataIntoString
    // ldr r0, [r4, #4]
    // bl Save_PlayerData_GetOptionsAddr
    // bl Options_GetTextFrameDelay
    // mov r3, #0
    // str r3, [sp]
    // str r0, [sp, #4]
    // add r2, r4, #0
    // add r0, r4, #0
    // str r3, [sp, #8]
    // add r2, #0xc4
    // ldr r2, [r2]
    // add r0, #0xb4
    // mov r1, #1
    // bl AddTextPrinterParameterized
    // add r1, r4, #0
    // add r1, #0xc8
    // strb r0, [r1]
    // ldr r0, [r5]
    // add r0, r0, #1
    // str r0, [r5]
    // b _02258E4A
    // add r0, r4, #0
    // add r0, #0xc8
    // ldrb r0, [r0]
    // bl TextPrinterCheckActive
    // cmp r0, #0
    // bne _02258D0A
    // ldr r0, [r4, #8]
    // mov r1, #0x19
    // str r0, [sp, #0xc]
    // mov r0, #1
    // str r0, [sp, #0x10]
    // mov r0, #0x1f
    // str r0, [sp, #0x14]
    // mov r0, #0xb
    // str r0, [sp, #0x18]
    // add r0, sp, #0xc
    // strb r1, [r0, #0x10]
    // mov r1, #6
    // strb r1, [r0, #0x11]
    // mov r1, #0
    // strb r1, [r0, #0x13]
    // ldr r0, [r4, #0x24]
    // add r1, sp, #0xc
    // bl YesNoPrompt_InitFromTemplate
    // add r0, r4, #0
    // mov r1, #1
    // add r0, #0x28
    // strb r1, [r0]
    // ldr r0, [r5]
    // add r0, r0, #1
    // str r0, [r5]
    // b _02258E4A
    // ldr r0, [r4, #0xc]
    // mov r1, #0
    // mov r2, #0xb0
    // mov r3, #0x40
    // bl PaletteData_LoadPaletteSlotFromHardware
    // ldr r0, [r4, #0x24]
    // bl YesNoPrompt_HandleInput
    // cmp r0, #1
    // beq _02258D0C
    // cmp r0, #2
    // beq _02258D36
    // b _02258E4A
    // ldr r0, [r4, #0x24]
    // bl YesNoPrompt_Reset
    // add r0, r4, #0
    // mov r1, #0
    // add r0, #0x28
    // strb r1, [r0]
    // add r0, r4, #0
    // add r0, #0xb4
    // bl ClearFrameAndWindow2
    // mov r0, #0x5a
    // mov r1, #0
    // lsl r0, r0, #2
    // str r1, [r4, r0]
    // ldr r0, _02258E5C ; =0x000009BC
    // mov r1, #3
    // str r1, [r4, r0]
    // mov r0, #9
    // str r0, [r5]
    // b _02258E4A
    // ldr r0, [r4, #0x24]
    // bl YesNoPrompt_Reset
    // add r0, r4, #0
    // mov r1, #0
    // add r0, #0x28
    // strb r1, [r0]
    // add r0, r4, #0
    // add r0, #0xb4
    // bl ClearFrameAndWindow2
    // mov r1, #0
    // str r1, [sp]
    // str r1, [sp, #4]
    // ldr r0, [r4, #0xc]
    // mov r2, #9
    // mov r3, #1
    // bl PaletteData_BlendPalette
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r2, _02258E70 ; =0x00000921
    // ldr r0, [r4, #0xc]
    // ldrb r2, [r4, r2]
    // mov r1, #2
    // mov r3, #0x10
    // lsl r2, r2, #0x14
    // lsr r2, r2, #0x10
    // bl PaletteData_BlendPalette
    // mov r0, #2
    // str r0, [r5]
    // b _02258E4A
    // add r0, r4, #0
    // add r0, #0xb4
    // mov r1, #0xf
    // bl FillWindowPixelBuffer
    // add r0, r4, #0
    // add r0, #0xb4
    // mov r1, #0
    // mov r2, #1
    // mov r3, #0xe
    // bl DrawFrameAndWindow2
    // add r2, r4, #0
    // add r2, #0xc4
    // ldr r0, [r4, #0x30]
    // ldr r2, [r2]
    // mov r1, #3
    // bl ReadMsgDataIntoString
    // ldr r0, [r4, #4]
    // bl Save_PlayerData_GetOptionsAddr
    // bl Options_GetTextFrameDelay
    // mov r3, #0
    // str r3, [sp]
    // str r0, [sp, #4]
    // add r2, r4, #0
    // add r0, r4, #0
    // str r3, [sp, #8]
    // add r2, #0xc4
    // ldr r2, [r2]
    // add r0, #0xb4
    // mov r1, #1
    // bl AddTextPrinterParameterized
    // add r1, r4, #0
    // add r1, #0xc8
    // strb r0, [r1]
    // ldr r0, [r5]
    // add r0, r0, #1
    // str r0, [r5]
    // b _02258E4A
    // add r0, r4, #0
    // add r0, #0xc8
    // ldrb r0, [r0]
    // bl TextPrinterCheckActive
    // cmp r0, #0
    // bne _02258E4A
    // ldr r0, [r5]
    // add r0, r0, #1
    // str r0, [r5]
    // b _02258E4A
    // add r0, r4, #0
    // add r0, #0x29
    // ldrb r0, [r0]
    // add r1, r0, #1
    // add r0, r4, #0
    // add r0, #0x29
    // strb r1, [r0]
    // add r0, r4, #0
    // add r0, #0x29
    // ldrb r0, [r0]
    // cmp r0, #0x5a
    // bls _02258E4A
    // mov r0, #9
    // str r0, [r5]
    // b _02258E4A
    // bl IsPaletteFadeFinished
    // cmp r0, #0
    // bne _02258E10
    // bl sub_0200FB70
    // mov r0, #6
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // mov r0, #0x7d
    // str r0, [sp, #8]
    // mov r0, #0
    // add r1, r0, #0
    // add r2, r0, #0
    // add r3, r0, #0
    // bl BeginNormalPaletteFade
    // ldr r0, [r5]
    // add r0, r0, #1
    // str r0, [r5]
    // b _02258E4A
    // bl IsPaletteFadeFinished
    // cmp r0, #1
    // bne _02258E4A
    // ldr r0, [r5]
    // add r0, r0, #1
    // str r0, [r5]
    // b _02258E4A
    // bl ov45_0222EEB8
    // add sp, #0x2c
    // mov r0, #1
    // pop {r4, r5, r6, r7, pc}
    // add r0, r4, #0
    // bl ov89_0225A21C
    // add r0, r4, #0
    // bl ov89_0225A398
    // ldr r0, _02258E5C ; =0x000009BC
    // b _02258E74
    // nop
    // _02258E5C: .word 0x000009BC
    // _02258E60: .word gSystem + 0x40
    // _02258E64: .word 0x00000555
    // _02258E68: .word 0x000008D8
    // _02258E6C: .word 0x000005E5
    // _02258E70: .word 0x00000921
    // ldr r0, [r4, r0]
    // cmp r0, #1
    // bne _02258EEC
    // mov r0, #0x19
    // lsl r0, r0, #4
    // ldr r1, [r4, r0]
    // add r1, r1, #1
    // str r1, [r4, r0]
    // ldr r1, [r4, r0]
    // cmp r1, #0x1e
    // ble _02258E94
    // mov r1, #0
    // str r1, [r4, r0]
    // add r0, r4, #0
    // bl ov89_02259F9C
    // bl ov45_0222D844
    // cmp r0, #1
    // beq _02258EA8
    // ldr r0, [r4]
    // ldr r0, [r0]
    // bl ov45_0222A330
    // cmp r0, #1
    // bne _02258EEC
    // ldr r0, [r5]
    // cmp r0, #4
    // beq _02258EEC
    // add r0, r4, #0
    // add r0, #0x28
    // ldrb r0, [r0]
    // cmp r0, #1
    // bne _02258EBE
    // ldr r0, [r4, #0x24]
    // bl YesNoPrompt_Reset
    // mov r0, #0x5a
    // mov r1, #0
    // lsl r0, r0, #2
    // str r1, [r4, r0]
    // ldr r0, _02258EF8 ; =0x000009BC
    // mov r1, #3
    // str r1, [r4, r0]
    // bl ov45_0222D844
    // cmp r0, #1
    // bne _02258EDA
    // mov r0, #9
    // str r0, [r5]
    // b _02258EEC
    // ldr r0, _02258EFC ; =0x000005F1
    // bl PlaySE
    // ldr r0, [r4]
    // ldr r0, [r0]
    // bl ov45_0222A4A8
    // mov r0, #6
    // str r0, [r5]
    // add r0, r4, #0
    // bl ov89_0225A468
    // mov r0, #0
    // add sp, #0x2c
    // pop {r4, r5, r6, r7, pc}
    // _02258EF8: .word 0x000009BC
    // _02258EFC: .word 0x000005F1
    // TODO: decompile
}


void ov89_02258F00(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // bl OverlayManager_GetData
    // add r4, r0, #0
    // ldr r0, [r4, #0x18]
    // bl SysTask_Destroy
    // add r0, r4, #0
    // bl ov89_022596DC
    // add r0, r4, #0
    // bl ov89_022598A8
    // ldr r0, [r4, #0x24]
    // bl YesNoPrompt_Destroy
    // mov r0, #0x65
    // lsl r0, r0, #2
    // add r0, r4, r0
    // bl ov89_0225A47C
    // add r0, r4, #0
    // add r0, #0xc4
    // ldr r0, [r0]
    // bl String_Delete
    // mov r0, #2
    // bl FontID_Release
    // ldr r0, [r4, #0x10]
    // bl sub_020135AC
    // ldr r0, [r4, #0x30]
    // bl DestroyMsgData
    // ldr r0, [r4, #0x2c]
    // bl MessageFormat_Delete
    // add r0, r4, #0
    // bl ov89_02259D50
    // ldr r0, [r4, #8]
    // bl ov89_02259230
    // ldr r0, [r4, #8]
    // bl Heap_Free
    // ldr r0, [r4, #0x1c]
    // ldr r1, [r4, #0x20]
    // bl SpriteSystem_FreeResourcesAndManager
    // ldr r0, [r4, #0x1c]
    // bl SpriteSystem_Free
    // ldr r0, [r4, #0xc]
    // mov r1, #0
    // bl PaletteData_FreeBuffers
    // ldr r0, [r4, #0xc]
    // mov r1, #1
    // bl PaletteData_FreeBuffers
    // ldr r0, [r4, #0xc]
    // mov r1, #2
    // bl PaletteData_FreeBuffers
    // ldr r0, [r4, #0xc]
    // mov r1, #3
    // bl PaletteData_FreeBuffers
    // ldr r0, [r4, #0xc]
    // bl PaletteData_Free
    // add r0, r4, #0
    // bl ov89_02259C00
    // add r0, r4, #0
    // bl ov89_02259BA0
    // ldr r0, [r4, #0x14]
    // bl ov89_02259E10
    // mov r0, #0x16
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // bl NARC_Delete
    // mov r0, #0x59
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl NARC_Delete
    // mov r0, #0
    // add r1, r0, #0
    // bl Main_SetVBlankIntrCB
    // bl HBlankInterruptDisable
    // bl GF_DestroyVramTransferManager
    // bl sub_02021238
    // mov r0, #0
    // bl TextFlags_SetCanABSpeedUpPrint
    // mov r0, #0
    // bl TextFlags_SetAutoScrollParam
    // mov r0, #0
    // bl TextFlags_SetCanTouchSpeedUpPrint
    // bl sub_0203A914
    // add r0, r5, #0
    // bl OverlayManager_FreeData
    // mov r0, #0x7d
    // bl Heap_Destroy
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov89_02258FF4(void) {
    // push {r4, lr}
    // mov r0, #0x65
    // add r4, r1, #0
    // lsl r0, r0, #2
    // add r0, r4, r0
    // bl ov89_0225A5EC
    // add r0, r4, #0
    // bl ov89_02259C0C
    // ldr r0, [r4, #0x20]
    // bl SpriteSystem_DrawSprites
    // bl SpriteSystem_UpdateTransfer
    // mov r0, #0
    // add r1, r0, #0
    // bl RequestSwap3DBuffers
    // pop {r4, pc}
    // TODO: decompile
}


void ov89_0225901C(void) {
    // push {r4, lr}
    // ldr r1, _02259050 ; =0x000009BC
    // add r4, r0, #0
    // mov r0, #0x65
    // lsl r0, r0, #2
    // ldr r1, [r4, r1]
    // add r0, r4, r0
    // bl ov89_0225A760
    // bl GF_RunVramTransferTasks
    // bl SpriteSystem_TransferOam
    // ldr r0, [r4, #0xc]
    // bl PaletteData_PushTransparentBuffers
    // ldr r0, [r4, #8]
    // bl DoScheduledBgGpuUpdates
    // ldr r3, _02259054 ; =0x027E0000
    // ldr r1, _02259058 ; =0x00003FF8
    // mov r0, #1
    // ldr r2, [r3, r1]
    // orr r0, r2
    // str r0, [r3, r1]
    // pop {r4, pc}
    // _02259050: .word 0x000009BC
    // _02259054: .word 0x027E0000
    // _02259058: .word 0x00003FF8
    // TODO: decompile
}


void ov89_0225905C(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0xe0
    // add r4, r0, #0
    // bl GfGfx_DisableEngineAPlanes
    // bl GfGfx_DisableEngineBPlanes
    // ldr r5, _0225921C ; =ov89_0225CA78
    // add r3, sp, #0x10
    // mov r2, #5
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // sub r2, r2, #1
    // bne _02259070
    // add r0, sp, #0x10
    // bl GfGfx_SetBanks
    // mov r1, #6
    // mov r2, #2
    // mov r0, #0
    // lsl r1, r1, #0x18
    // lsl r2, r2, #0x12
    // bl MIi_CpuClear32
    // mov r1, #0x62
    // mov r2, #2
    // mov r0, #0
    // lsl r1, r1, #0x14
    // lsl r2, r2, #0x10
    // bl MIi_CpuClear32
    // mov r1, #0x19
    // mov r2, #1
    // mov r0, #0
    // lsl r1, r1, #0x16
    // lsl r2, r2, #0x12
    // bl MIi_CpuClear32
    // mov r1, #0x66
    // mov r2, #2
    // mov r0, #0
    // lsl r1, r1, #0x14
    // lsl r2, r2, #0x10
    // bl MIi_CpuClear32
    // ldr r5, _02259220 ; =ov89_0225C9DC
    // add r3, sp, #0
    // add r2, r3, #0
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // add r0, r2, #0
    // bl SetBothScreensModesAndDisable
    // ldr r5, _02259224 ; =ov89_0225CC18
    // add r3, sp, #0x8c
    // mov r2, #0xa
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // sub r2, r2, #1
    // bne _022590D0
    // ldr r0, [r5]
    // mov r1, #1
    // str r0, [r3]
    // add r0, r4, #0
    // add r2, sp, #0x8c
    // mov r3, #0
    // bl InitBgFromTemplate
    // add r0, r4, #0
    // mov r1, #1
    // bl BgClearTilemapBufferAndCommit
    // mov r2, #0
    // add r0, r4, #0
    // mov r1, #1
    // add r3, r2, #0
    // bl BgSetPosTextAndCommit
    // add r0, r4, #0
    // mov r1, #1
    // mov r2, #3
    // mov r3, #0
    // bl BgSetPosTextAndCommit
    // add r0, r4, #0
    // mov r1, #2
    // add r2, sp, #0xa8
    // mov r3, #0
    // bl InitBgFromTemplate
    // add r0, r4, #0
    // mov r1, #2
    // bl BgClearTilemapBufferAndCommit
    // mov r2, #0
    // add r0, r4, #0
    // mov r1, #2
    // add r3, r2, #0
    // bl BgSetPosTextAndCommit
    // add r0, r4, #0
    // mov r1, #2
    // mov r2, #3
    // mov r3, #0
    // bl BgSetPosTextAndCommit
    // add r0, r4, #0
    // mov r1, #3
    // add r2, sp, #0xc4
    // mov r3, #0
    // bl InitBgFromTemplate
    // add r0, r4, #0
    // mov r1, #3
    // bl BgClearTilemapBufferAndCommit
    // mov r2, #0
    // add r0, r4, #0
    // mov r1, #3
    // add r3, r2, #0
    // bl BgSetPosTextAndCommit
    // mov r1, #3
    // add r0, r4, #0
    // add r2, r1, #0
    // mov r3, #0
    // bl BgSetPosTextAndCommit
    // ldr r1, _02259228 ; =0x04000008
    // mov r0, #3
    // ldrh r2, [r1]
    // bic r2, r0
    // mov r0, #2
    // orr r0, r2
    // strh r0, [r1]
    // mov r0, #1
    // add r1, r0, #0
    // bl GfGfx_EngineATogglePlanes
    // ldr r5, _0225922C ; =ov89_0225CC6C
    // add r3, sp, #0x38
    // mov r2, #0xa
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // sub r2, r2, #1
    // bne _0225917C
    // ldr r0, [r5]
    // mov r1, #5
    // str r0, [r3]
    // add r0, r4, #0
    // add r2, sp, #0x38
    // mov r3, #0
    // bl InitBgFromTemplate
    // add r0, r4, #0
    // mov r1, #5
    // bl BgClearTilemapBufferAndCommit
    // mov r2, #0
    // add r0, r4, #0
    // mov r1, #5
    // add r3, r2, #0
    // bl BgSetPosTextAndCommit
    // add r0, r4, #0
    // mov r1, #5
    // mov r2, #3
    // mov r3, #0
    // bl BgSetPosTextAndCommit
    // add r0, r4, #0
    // mov r1, #6
    // add r2, sp, #0x54
    // mov r3, #0
    // bl InitBgFromTemplate
    // add r0, r4, #0
    // mov r1, #6
    // bl BgClearTilemapBufferAndCommit
    // mov r2, #0
    // add r0, r4, #0
    // mov r1, #6
    // add r3, r2, #0
    // bl BgSetPosTextAndCommit
    // add r0, r4, #0
    // mov r1, #6
    // mov r2, #3
    // mov r3, #0
    // bl BgSetPosTextAndCommit
    // add r0, r4, #0
    // mov r1, #7
    // add r2, sp, #0x70
    // mov r3, #0
    // bl InitBgFromTemplate
    // add r0, r4, #0
    // mov r1, #7
    // bl BgClearTilemapBufferAndCommit
    // mov r2, #0
    // add r0, r4, #0
    // mov r1, #7
    // add r3, r2, #0
    // bl BgSetPosTextAndCommit
    // add r0, r4, #0
    // mov r1, #7
    // mov r2, #3
    // mov r3, #0
    // bl BgSetPosTextAndCommit
    // mov r0, #5
    // mov r1, #0x20
    // mov r2, #0
    // mov r3, #0x7d
    // bl BG_ClearCharDataRange
    // add sp, #0xe0
    // pop {r3, r4, r5, pc}
    // _0225921C: .word ov89_0225CA78
    // _02259220: .word ov89_0225C9DC
    // _02259224: .word ov89_0225CC18
    // _02259228: .word 0x04000008
    // _0225922C: .word ov89_0225CC6C
    // TODO: decompile
}


void ov89_02259230(void) {
    FreeBgTilemapBuffer(6);
    FreeBgTilemapBuffer(r4, 5);
    FreeBgTilemapBuffer(r4, 7);
    FreeBgTilemapBuffer(r4, 3);
    FreeBgTilemapBuffer(r4, 2);
    FreeBgTilemapBuffer(r4, 1);
}


void ov89_02259264(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x10
    // add r4, r0, #0
    // add r5, r1, #0
    // mov r1, #0
    // mov r0, #7
    // str r1, [sp]
    // lsl r0, r0, #6
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // ldr r0, [r4, #0xc]
    // mov r1, #0xd2
    // mov r2, #0x13
    // mov r3, #0x7d
    // bl PaletteData_LoadNarc
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x7d
    // str r0, [sp, #0xc]
    // ldr r2, [r4, #8]
    // add r0, r5, #0
    // mov r1, #0x12
    // mov r3, #2
    // bl GfGfxLoader_LoadCharDataFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x7d
    // str r0, [sp, #0xc]
    // ldr r2, [r4, #8]
    // add r0, r5, #0
    // mov r1, #0x11
    // mov r3, #2
    // bl GfGfxLoader_LoadScrnDataFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x7d
    // str r0, [sp, #0xc]
    // ldr r2, [r4, #8]
    // add r0, r5, #0
    // mov r1, #0x14
    // mov r3, #3
    // bl GfGfxLoader_LoadScrnDataFromOpenNarc
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [r4, #0xc]
    // mov r1, #0xd2
    // mov r2, #0x17
    // mov r3, #0x7d
    // bl PaletteData_LoadNarc
    // ldr r0, [r4]
    // ldrb r0, [r0, #4]
    // cmp r0, #0
    // bne _022592FE
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #0x20
    // str r0, [sp, #4]
    // mov r1, #1
    // ldr r0, [r4, #0xc]
    // mov r2, #0x10
    // add r3, r1, #0
    // bl PaletteData_CopyPalette
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x7d
    // str r0, [sp, #0xc]
    // ldr r2, [r4, #8]
    // add r0, r5, #0
    // mov r1, #0x16
    // mov r3, #6
    // bl GfGfxLoader_LoadCharDataFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x7d
    // str r0, [sp, #0xc]
    // ldr r2, [r4, #8]
    // add r0, r5, #0
    // mov r1, #0x15
    // mov r3, #6
    // bl GfGfxLoader_LoadScrnDataFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x7d
    // str r0, [sp, #0xc]
    // ldr r2, [r4, #8]
    // add r0, r5, #0
    // mov r1, #0x18
    // mov r3, #7
    // bl GfGfxLoader_LoadScrnDataFromOpenNarc
    // ldr r0, [r4, #8]
    // mov r1, #6
    // bl GetBgTilemapBuffer
    // mov r1, #0x27
    // lsl r1, r1, #6
    // mov r2, #2
    // add r1, r4, r1
    // lsl r2, r2, #0xa
    // add r5, r0, #0
    // bl MIi_CpuCopy16
    // mov r2, #2
    // mov r0, #0
    // add r1, r5, #0
    // lsl r2, r2, #0xa
    // bl MIi_CpuClear16
    // ldr r0, [r4, #4]
    // bl Save_PlayerData_GetOptionsAddr
    // bl Options_GetFrame
    // add r5, r0, #0
    // bl sub_0200E640
    // add r2, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #0x20
    // str r0, [sp, #4]
    // mov r0, #0xe0
    // str r0, [sp, #8]
    // ldr r0, [r4, #0xc]
    // mov r1, #0x26
    // mov r3, #0x7d
    // bl PaletteData_LoadNarc
    // lsl r0, r5, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp]
    // mov r0, #0x7d
    // str r0, [sp, #4]
    // mov r1, #1
    // ldr r0, [r4, #8]
    // add r2, r1, #0
    // mov r3, #0xe
    // bl LoadUserFrameGfx2
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #0x20
    // str r0, [sp, #4]
    // mov r0, #0xd0
    // str r0, [sp, #8]
    // ldr r0, [r4, #0xc]
    // mov r1, #0x10
    // mov r2, #7
    // mov r3, #0x7d
    // bl PaletteData_LoadNarc
    // ldr r0, [r4]
    // ldrb r0, [r0, #4]
    // cmp r0, #0
    // bne _022593E2
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #0x20
    // str r0, [sp, #4]
    // mov r0, #0xd0
    // str r0, [sp, #8]
    // ldr r0, [r4, #0xc]
    // mov r1, #0x10
    // mov r2, #7
    // mov r3, #0x7d
    // bl PaletteData_LoadNarc
    // b _022593FA
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #0x20
    // str r0, [sp, #4]
    // mov r0, #0xd0
    // str r0, [sp, #8]
    // ldr r0, [r4, #0xc]
    // mov r1, #0xd2
    // mov r2, #0x19
    // mov r3, #0x7d
    // bl PaletteData_LoadNarc
    // ldr r0, [r4, #8]
    // mov r1, #6
    // bl ScheduleBgTilemapBufferTransfer
    // add sp, #0x10
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov89_02259408(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x18
    // add r6, r1, #0
    // str r6, [sp]
    // mov r1, #3
    // add r5, r0, #0
    // str r1, [sp, #4]
    // mov r0, #0
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // mov r0, #1
    // str r0, [sp, #0x10]
    // ldr r0, _0225956C ; =0x00002711
    // mov r1, #2
    // str r0, [sp, #0x14]
    // ldr r0, [r5, #0xc]
    // ldr r2, [r5, #0x1c]
    // ldr r3, [r5, #0x20]
    // bl SpriteSystem_LoadPaletteBufferFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // ldr r0, _02259570 ; =0x00002717
    // add r2, r6, #0
    // str r0, [sp, #8]
    // ldr r0, [r5, #0x1c]
    // ldr r1, [r5, #0x20]
    // mov r3, #4
    // bl SpriteSystem_LoadCharResObjFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, _02259574 ; =0x00002712
    // add r2, r6, #0
    // str r0, [sp, #4]
    // ldr r0, [r5, #0x1c]
    // ldr r1, [r5, #0x20]
    // mov r3, #5
    // bl SpriteSystem_LoadCellResObjFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, _02259574 ; =0x00002712
    // add r2, r6, #0
    // str r0, [sp, #4]
    // ldr r0, [r5, #0x1c]
    // ldr r1, [r5, #0x20]
    // mov r3, #6
    // bl SpriteSystem_LoadAnimResObjFromOpenNarc
    // mov r4, #0
    // add r7, r4, #0
    // str r7, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // ldr r0, _0225956C ; =0x00002711
    // add r2, r6, #0
    // add r0, r4, r0
    // str r0, [sp, #8]
    // ldr r0, [r5, #0x1c]
    // ldr r1, [r5, #0x20]
    // mov r3, #0x10
    // bl SpriteSystem_LoadCharResObjFromOpenNarc
    // add r4, r4, #1
    // cmp r4, #6
    // blt _02259474
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, _0225956C ; =0x00002711
    // add r2, r6, #0
    // str r0, [sp, #4]
    // ldr r0, [r5, #0x1c]
    // ldr r1, [r5, #0x20]
    // mov r3, #0xf
    // bl SpriteSystem_LoadCellResObjFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, _0225956C ; =0x00002711
    // add r2, r6, #0
    // str r0, [sp, #4]
    // ldr r0, [r5, #0x1c]
    // ldr r1, [r5, #0x20]
    // mov r3, #0xe
    // bl SpriteSystem_LoadAnimResObjFromOpenNarc
    // str r6, [sp]
    // mov r0, #3
    // str r0, [sp, #4]
    // mov r0, #0
    // str r0, [sp, #8]
    // mov r0, #1
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r0, _02259574 ; =0x00002712
    // mov r1, #2
    // str r0, [sp, #0x14]
    // ldr r0, [r5, #0xc]
    // ldr r2, [r5, #0x1c]
    // ldr r3, [r5, #0x20]
    // bl SpriteSystem_LoadPaletteBufferFromOpenNarc
    // ldr r1, [r5]
    // ldrb r1, [r1, #4]
    // cmp r1, #0
    // bne _022594E6
    // mov r3, #0
    // b _022594E8
    // ldr r3, _02259578 ; =0x00007FFF
    // lsl r1, r0, #4
    // lsl r0, r1, #0x10
    // lsr r0, r0, #0x10
    // add r1, #0x10
    // str r0, [sp]
    // lsl r0, r1, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp, #4]
    // mov r1, #2
    // ldr r0, [r5, #0xc]
    // add r2, r1, #0
    // bl PaletteData_FillPaletteInBuffer
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // ldr r0, _0225957C ; =0x00002718
    // add r2, r6, #0
    // str r0, [sp, #8]
    // ldr r0, [r5, #0x1c]
    // ldr r1, [r5, #0x20]
    // mov r3, #2
    // bl SpriteSystem_LoadCharResObjFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, _02259580 ; =0x00002713
    // add r2, r6, #0
    // str r0, [sp, #4]
    // ldr r0, [r5, #0x1c]
    // ldr r1, [r5, #0x20]
    // mov r3, #1
    // bl SpriteSystem_LoadCellResObjFromOpenNarc
    // mov r3, #0
    // ldr r0, _02259580 ; =0x00002713
    // str r3, [sp]
    // str r0, [sp, #4]
    // ldr r0, [r5, #0x1c]
    // ldr r1, [r5, #0x20]
    // add r2, r6, #0
    // bl SpriteSystem_LoadAnimResObjFromOpenNarc
    // mov r0, #0xd2
    // str r0, [sp]
    // mov r0, #0x1a
    // str r0, [sp, #4]
    // mov r0, #0
    // str r0, [sp, #8]
    // mov r0, #1
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r0, _02259580 ; =0x00002713
    // mov r1, #2
    // str r0, [sp, #0x14]
    // ldr r0, [r5, #0xc]
    // ldr r2, [r5, #0x1c]
    // ldr r3, [r5, #0x20]
    // bl SpriteSystem_LoadPaletteBuffer
    // ldr r1, _02259584 ; =0x00000921
    // strb r0, [r5, r1]
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0225956C: .word 0x00002711
    // _02259570: .word 0x00002717
    // _02259574: .word 0x00002712
    // _02259578: .word 0x00007FFF
    // _0225957C: .word 0x00002718
    // _02259580: .word 0x00002713
    // _02259584: .word 0x00000921
    // TODO: decompile
}


void ov89_02259588(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x4c
    // ldr r4, _022596B8 ; =ov89_0225CB08
    // add r7, r0, #0
    // add r3, sp, #0x18
    // mov r2, #6
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // sub r2, r2, #1
    // bne _02259594
    // ldr r0, [r4]
    // mov r6, #0
    // str r0, [r3]
    // mov r4, #0x10
    // add r5, r7, #0
    // add r0, sp, #0x18
    // strh r4, [r0]
    // mov r1, #0xb0
    // strh r1, [r0, #2]
    // ldr r0, [r7, #0x1c]
    // ldr r1, [r7, #0x20]
    // add r2, sp, #0x18
    // bl SpriteSystem_NewSprite
    // ldr r1, _022596BC ; =0x00000924
    // str r0, [r5, r1]
    // add r0, r1, #0
    // ldr r0, [r5, r0]
    // add r1, r6, #0
    // bl ManagedSprite_SetAnim
    // ldr r0, _022596BC ; =0x00000924
    // ldr r0, [r5, r0]
    // ldr r0, [r0]
    // bl Sprite_TickFrame
    // add r6, r6, #1
    // add r4, #0x20
    // add r5, r5, #4
    // cmp r6, #6
    // blt _022595A6
    // ldr r4, _022596C0 ; =ov89_0225CB3C
    // add r3, sp, #0x18
    // mov r2, #6
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // sub r2, r2, #1
    // bne _022595E0
    // ldr r0, [r4]
    // mov r6, #0
    // str r0, [r3]
    // mov r4, #0x10
    // add r5, r7, #0
    // add r0, sp, #0x18
    // strh r4, [r0]
    // mov r1, #0xb0
    // strh r1, [r0, #2]
    // ldr r0, [r7, #0x1c]
    // ldr r1, [r7, #0x20]
    // add r2, sp, #0x18
    // bl SpriteSystem_NewSprite
    // ldr r1, _022596C4 ; =0x0000093C
    // str r0, [r5, r1]
    // add r0, r1, #0
    // ldr r0, [r5, r0]
    // add r1, r6, #0
    // bl ManagedSprite_SetAnim
    // ldr r0, _022596C4 ; =0x0000093C
    // ldr r0, [r5, r0]
    // ldr r0, [r0]
    // bl Sprite_TickFrame
    // add r6, r6, #1
    // add r4, #0x20
    // add r5, r5, #4
    // cmp r6, #6
    // blt _022595F2
    // ldr r4, _022596C8 ; =ov89_0225CB70
    // add r3, sp, #0x18
    // mov r2, #6
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // sub r2, r2, #1
    // bne _0225962C
    // ldr r0, [r4]
    // mov r5, #0
    // str r0, [r3]
    // mov r6, #0x10
    // add r4, r7, #0
    // add r0, sp, #0x18
    // strh r6, [r0]
    // mov r1, #0xb0
    // strh r1, [r0, #2]
    // ldr r0, _022596CC ; =0x00002711
    // add r2, sp, #0x18
    // add r0, r5, r0
    // str r0, [sp, #0x2c]
    // ldr r0, [r7, #0x1c]
    // ldr r1, [r7, #0x20]
    // bl SpriteSystem_NewSprite
    // ldr r1, _022596D0 ; =0x00000954
    // str r0, [r4, r1]
    // add r0, r1, #0
    // ldr r0, [r4, r0]
    // ldr r0, [r0]
    // bl Sprite_TickFrame
    // add r5, r5, #1
    // add r6, #0x20
    // add r4, r4, #4
    // cmp r5, #6
    // blt _0225963E
    // ldr r0, [r7, #0x30]
    // mov r1, #1
    // bl NewString_ReadMsgData
    // add r4, r0, #0
    // ldr r0, _022596D4 ; =0x00010203
    // mov r1, #0x67
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // ldr r0, _022596D8 ; =0x00002713
    // lsl r1, r1, #6
    // str r0, [sp, #8]
    // mov r0, #0xe0
    // str r0, [sp, #0xc]
    // mov r0, #0xb0
    // str r0, [sp, #0x10]
    // mov r0, #1
    // str r0, [sp, #0x14]
    // add r0, r7, #0
    // add r1, r7, r1
    // add r2, r4, #0
    // mov r3, #2
    // bl ov89_0225A260
    // mov r0, #0x67
    // lsl r0, r0, #6
    // ldr r0, [r7, r0]
    // mov r1, #1
    // bl TextOBJ_SetSpritesDrawFlag
    // add r0, r4, #0
    // bl String_Delete
    // add sp, #0x4c
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _022596B8: .word ov89_0225CB08
    // _022596BC: .word 0x00000924
    // _022596C0: .word ov89_0225CB3C
    // _022596C4: .word 0x0000093C
    // _022596C8: .word ov89_0225CB70
    // _022596CC: .word 0x00002711
    // _022596D0: .word 0x00000954
    // _022596D4: .word 0x00010203
    // _022596D8: .word 0x00002713
    // TODO: decompile
}


void ov89_022596DC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r7, r0, #0
    // ldr r6, _02259728 ; =0x00000924
    // mov r4, #0
    // add r5, r7, #0
    // ldr r0, [r5, r6]
    // bl Sprite_DeleteAndFreeResources
    // add r4, r4, #1
    // add r5, r5, #4
    // cmp r4, #6
    // blt _022596E6
    // ldr r6, _0225972C ; =0x0000093C
    // mov r5, #0
    // add r4, r7, #0
    // ldr r0, [r4, r6]
    // bl Sprite_DeleteAndFreeResources
    // add r5, r5, #1
    // add r4, r4, #4
    // cmp r5, #6
    // blt _022596FA
    // ldr r6, _02259730 ; =0x00000954
    // mov r5, #0
    // add r4, r7, #0
    // ldr r0, [r4, r6]
    // bl Sprite_DeleteAndFreeResources
    // add r5, r5, #1
    // add r4, r4, #4
    // cmp r5, #6
    // blt _0225970E
    // mov r0, #0x67
    // lsl r0, r0, #6
    // add r0, r7, r0
    // bl ov89_0225A354
    // pop {r3, r4, r5, r6, r7, pc}
    // _02259728: .word 0x00000924
    // _0225972C: .word 0x0000093C
    // _02259730: .word 0x00000954
    // TODO: decompile
}


void ov89_02259734(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x18
    // add r6, r1, #0
    // add r5, r0, #0
    // str r6, [sp]
    // mov r0, #0xa
    // str r0, [sp, #4]
    // mov r0, #0
    // str r0, [sp, #8]
    // mov r0, #1
    // str r0, [sp, #0xc]
    // mov r0, #2
    // str r0, [sp, #0x10]
    // ldr r0, _022597EC ; =0x00002714
    // mov r1, #3
    // str r0, [sp, #0x14]
    // ldr r0, [r5, #0xc]
    // ldr r2, [r5, #0x1c]
    // ldr r3, [r5, #0x20]
    // bl SpriteSystem_LoadPaletteBufferFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // ldr r0, _022597F0 ; =0x00002719
    // add r2, r6, #0
    // str r0, [sp, #8]
    // ldr r0, [r5, #0x1c]
    // ldr r1, [r5, #0x20]
    // mov r3, #9
    // bl SpriteSystem_LoadCharResObjFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, _022597EC ; =0x00002714
    // add r2, r6, #0
    // str r0, [sp, #4]
    // ldr r0, [r5, #0x1c]
    // ldr r1, [r5, #0x20]
    // mov r3, #8
    // bl SpriteSystem_LoadCellResObjFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, _022597EC ; =0x00002714
    // add r2, r6, #0
    // str r0, [sp, #4]
    // ldr r0, [r5, #0x1c]
    // ldr r1, [r5, #0x20]
    // mov r3, #7
    // bl SpriteSystem_LoadAnimResObjFromOpenNarc
    // mov r4, #0
    // add r7, r4, #0
    // str r7, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // ldr r0, _022597F4 ; =0x0000271A
    // add r2, r6, #0
    // add r0, r4, r0
    // str r0, [sp, #8]
    // ldr r0, [r5, #0x1c]
    // ldr r1, [r5, #0x20]
    // mov r3, #0xd
    // bl SpriteSystem_LoadCharResObjFromOpenNarc
    // add r4, r4, #1
    // cmp r4, #8
    // blt _022597A2
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, _022597F8 ; =0x00002715
    // add r2, r6, #0
    // str r0, [sp, #4]
    // ldr r0, [r5, #0x1c]
    // ldr r1, [r5, #0x20]
    // mov r3, #0xc
    // bl SpriteSystem_LoadCellResObjFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, _022597F8 ; =0x00002715
    // add r2, r6, #0
    // str r0, [sp, #4]
    // ldr r0, [r5, #0x1c]
    // ldr r1, [r5, #0x20]
    // mov r3, #0xb
    // bl SpriteSystem_LoadAnimResObjFromOpenNarc
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // _022597EC: .word 0x00002714
    // _022597F0: .word 0x00002719
    // _022597F4: .word 0x0000271A
    // _022597F8: .word 0x00002715
    // TODO: decompile
}


void ov89_022597FC(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x34
    // add r5, r0, #0
    // ldr r0, [r5, #0x1c]
    // ldr r1, [r5, #0x20]
    // ldr r2, _02259894 ; =ov89_0225CAA0
    // bl SpriteSystem_NewSprite
    // ldr r1, _02259898 ; =0x0000096C
    // str r0, [r5, r1]
    // ldr r0, [r5, r1]
    // ldr r0, [r0]
    // bl Sprite_TickFrame
    // ldr r0, _02259898 ; =0x0000096C
    // mov r1, #0
    // ldr r0, [r5, r0]
    // bl ManagedSprite_SetDrawFlag
    // ldr r4, _0225989C ; =ov89_0225CAD4
    // add r3, sp, #0
    // mov r2, #6
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // sub r2, r2, #1
    // bne _02259828
    // ldr r0, [r4]
    // mov r7, #0x97
    // str r0, [r3]
    // mov r4, #0
    // ldr r6, _022598A0 ; =ov89_0225CA38
    // lsl r7, r7, #4
    // b _0225988A
    // ldr r0, _022598A4 ; =0x0000271A
    // add r2, sp, #0
    // add r0, r4, r0
    // str r0, [sp, #0x14]
    // ldr r0, [r5, #0x1c]
    // ldr r1, [r5, #0x20]
    // bl SpriteSystem_NewSprite
    // add r3, r0, #0
    // lsl r2, r4, #2
    // mov r0, #0x97
    // add r1, r5, r2
    // lsl r0, r0, #4
    // str r3, [r1, r0]
    // ldr r0, [r1, r0]
    // ldrsh r1, [r6, r2]
    // add r3, r6, r2
    // mov r2, #2
    // ldrsh r2, [r3, r2]
    // mov r3, #0x11
    // lsl r3, r3, #0x10
    // bl ManagedSprite_SetPositionXYWithSubscreenOffset
    // lsl r0, r4, #2
    // add r1, r5, r0
    // mov r0, #0x97
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // ldr r0, [r0]
    // bl Sprite_TickFrame
    // lsl r0, r4, #2
    // add r0, r5, r0
    // ldr r0, [r0, r7]
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // add r4, r4, #1
    // cmp r4, #8
    // blt _0225983E
    // add sp, #0x34
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _02259894: .word ov89_0225CAA0
    // _02259898: .word 0x0000096C
    // _0225989C: .word ov89_0225CAD4
    // _022598A0: .word ov89_0225CA38
    // _022598A4: .word 0x0000271A
    // TODO: decompile
}


void ov89_022598A8(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // ldr r0, _022598CC ; =0x0000096C
    // ldr r0, [r5, r0]
    // bl Sprite_DeleteAndFreeResources
    // mov r6, #0x97
    // mov r4, #0
    // lsl r6, r6, #4
    // ldr r0, [r5, r6]
    // bl Sprite_DeleteAndFreeResources
    // add r4, r4, #1
    // add r5, r5, #4
    // cmp r4, #8
    // blt _022598BA
    // pop {r4, r5, r6, pc}
    // nop
    // _022598CC: .word 0x0000096C
    // TODO: decompile
}


void ov89_022598D0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x30
    // add r6, r0, #0
    // mov r0, #0
    // str r0, [sp, #0x24]
    // ldr r0, [r6, #0xc]
    // mov r1, #2
    // bl PaletteData_GetUnfadedBuf
    // str r0, [sp, #0x28]
    // ldr r0, [r6, #0xc]
    // mov r1, #2
    // bl PaletteData_GetFadedBuf
    // str r0, [sp, #0x10]
    // mov r0, #0
    // str r0, [sp, #0x2c]
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x28]
    // str r6, [sp, #0x20]
    // str r6, [sp, #0x1c]
    // str r0, [sp, #0x14]
    // ldr r2, _02259A1C ; =0x000008DA
    // ldr r0, [sp, #0x20]
    // ldrh r0, [r0, r2]
    // cmp r0, #0
    // beq _0225990C
    // ldr r3, _02259A20 ; =0x000001ED
    // cmp r0, r3
    // bls _02259966
    // ldr r1, _02259A24 ; =0x00000924
    // ldr r0, [sp, #0x1c]
    // ldr r0, [r0, r1]
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // ldr r1, _02259A28 ; =0x0000093C
    // ldr r0, [sp, #0x1c]
    // ldr r0, [r0, r1]
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // ldr r1, _02259A2C ; =0x00000954
    // ldr r0, [sp, #0x1c]
    // ldr r0, [r0, r1]
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // ldr r0, [sp, #0x18]
    // ldr r5, _02259A30 ; =_0225C9B0
    // lsl r0, r0, #0x18
    // mov r4, #0
    // lsr r7, r0, #0x18
    // add r0, r4, #0
    // add r0, #0x14
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp]
    // mov r0, #4
    // str r0, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // mov r0, #0x11
    // str r0, [sp, #0xc]
    // ldrh r2, [r5]
    // ldr r0, [r6, #8]
    // mov r1, #2
    // add r3, r7, #0
    // bl FillBgTilemapRect
    // add r4, r4, #1
    // add r5, r5, #2
    // cmp r4, #4
    // blt _0225993A
    // b _022599DC
    // add r1, r3, #0
    // sub r1, #0x89
    // ldr r1, [r6, r1]
    // add r4, r2, #6
    // str r1, [sp]
    // mov r1, #1
    // str r1, [sp, #4]
    // ldr r1, _02259A34 ; =0x000019E0
    // add r2, #0x7a
    // ldr r1, [r6, r1]
    // sub r3, #0x8d
    // str r1, [sp, #8]
    // ldr r1, [sp, #0x20]
    // ldr r3, [r6, r3]
    // ldrb r1, [r1, r4]
    // ldr r4, [sp, #0x1c]
    // ldr r2, [r4, r2]
    // bl ov89_02259A3C
    // ldr r1, _02259A38 ; =0x000008D8
    // ldr r0, [sp, #0x20]
    // mov r3, #0xc
    // ldrh r2, [r0, r1]
    // ldr r0, [sp, #0x14]
    // strh r2, [r0, #0x22]
    // ldr r0, [sp, #0x20]
    // ldrh r1, [r0, r1]
    // ldr r0, [sp, #0x10]
    // strh r1, [r0, #0x22]
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, [sp, #0x2c]
    // add r0, #0x11
    // lsl r1, r0, #1
    // ldr r0, [sp, #0x28]
    // add r0, r0, r1
    // ldr r1, [sp, #0x2c]
    // add r1, #0x21
    // lsl r2, r1, #1
    // ldr r1, [sp, #0x28]
    // add r1, r1, r2
    // mov r2, #1
    // bl BlendPalette
    // ldr r0, [sp, #0x14]
    // add r0, #0x42
    // ldrh r1, [r0]
    // ldr r0, [sp, #0x10]
    // add r0, #0x42
    // strh r1, [r0]
    // ldr r0, [sp, #0x24]
    // cmp r0, #0
    // bne _022599DC
    // add r0, r0, #1
    // str r0, [sp, #0x24]
    // mov r1, #0x92
    // ldr r0, [sp, #0x2c]
    // lsl r1, r1, #4
    // strb r0, [r6, r1]
    // ldr r0, [sp, #0x20]
    // add r0, #0xc
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x1c]
    // add r0, r0, #4
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x18]
    // add r0, r0, #4
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x14]
    // add r0, r0, #2
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x10]
    // add r0, r0, #2
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x2c]
    // add r0, r0, #1
    // str r0, [sp, #0x2c]
    // cmp r0, #6
    // bge _02259A06
    // b _022598FC
    // add r0, r6, #0
    // mov r1, #0
    // bl ov89_0225A1D8
    // ldr r0, [r6, #8]
    // mov r1, #2
    // bl ScheduleBgTilemapBufferTransfer
    // add sp, #0x30
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02259A1C: .word 0x000008DA
    // _02259A20: .word 0x000001ED
    // _02259A24: .word 0x00000924
    // _02259A28: .word 0x0000093C
    // _02259A2C: .word 0x00000954
    // _02259A30: .word _0225C9B0
    // _02259A34: .word 0x000019E0
    // _02259A38: .word 0x000008D8
    // TODO: decompile
}


void ov89_02259A3C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // add r4, r0, #0
    // add r6, r2, #0
    // add r5, r3, #0
    // cmp r4, #0
    // beq _02259A50
    // ldr r2, _02259AFC ; =0x000001ED
    // cmp r4, r2
    // ble _02259A56
    // add sp, #0x10
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r2, [sp, #0x30]
    // bl ov89_0225C88C
    // cmp r0, #1
    // bne _02259A90
    // ldr r0, [sp, #0x28]
    // mov r2, #1
    // add r1, r4, #3
    // mov r3, #0x7d
    // str r2, [sp]
    // bl GfGfxLoader_LoadFromOpenNarc
    // add r1, sp, #0xc
    // str r0, [sp, #8]
    // bl NNS_G2dGetUnpackedCharacterData
    // ldr r0, [sp, #0xc]
    // mov r1, #1
    // ldr r0, [r0, #0x14]
    // lsl r1, r1, #8
    // bl DC_FlushRange
    // ldr r0, [sp, #0xc]
    // ldr r4, [r0, #0x14]
    // add r0, r4, #0
    // str r0, [sp, #4]
    // add r0, #0x80
    // str r0, [sp, #4]
    // b _02259ABA
    // mov r0, #1
    // str r0, [sp]
    // add r0, r5, #0
    // mov r1, #0x10
    // mov r2, #0
    // mov r3, #0x7d
    // bl GfGfxLoader_LoadFromOpenNarc
    // add r1, sp, #0xc
    // str r0, [sp, #8]
    // bl NNS_G2dGetUnpackedCharacterData
    // ldr r0, [sp, #0xc]
    // mov r1, #0x80
    // ldr r0, [r0, #0x14]
    // bl DC_FlushRange
    // ldr r0, [sp, #0xc]
    // ldr r4, [r0, #0x14]
    // str r4, [sp, #4]
    // add r4, #0x40
    // ldr r0, [sp, #0x2c]
    // cmp r0, #1
    // bne _02259AC6
    // mov r5, #0x19
    // lsl r5, r5, #0x16
    // b _02259ACA
    // mov r5, #0x66
    // lsl r5, r5, #0x14
    // ldr r0, [r6]
    // bl Sprite_GetImageProxy
    // add r6, r0, #0
    // ldr r0, [sp, #0x2c]
    // mov r2, #0x40
    // lsl r7, r0, #2
    // ldr r1, [r6, r7]
    // ldr r0, [sp, #4]
    // add r1, r5, r1
    // bl MIi_CpuCopy16
    // ldr r1, [r6, r7]
    // add r5, #0x40
    // add r0, r4, #0
    // add r1, r5, r1
    // mov r2, #0x40
    // bl MIi_CpuCopy16
    // ldr r0, [sp, #8]
    // bl Heap_Free
    // mov r0, #1
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // _02259AFC: .word 0x000001ED
    // TODO: decompile
}


void ov89_02259B00(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x20
    // ldr r3, _02259B90 ; =ov89_0225C9C0
    // add r5, r0, #0
    // ldmia r3!, {r0, r1}
    // add r2, sp, #0x14
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // str r0, [r2]
    // mov r0, #0x7d
    // bl Camera_New
    // add r1, r5, #0
    // add r1, #0xcc
    // str r0, [r1]
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, r5, #0
    // add r0, #0xcc
    // ldr r0, [r0]
    // mov r1, #0x1f
    // str r0, [sp, #8]
    // ldr r2, _02259B94 ; =ov89_0225C9B8
    // ldr r3, _02259B98 ; =0x00000FA4
    // add r0, sp, #0x14
    // lsl r1, r1, #0xe
    // bl Camera_Init_FromTargetDistanceAndAngle
    // add r2, r5, #0
    // add r2, #0xcc
    // mov r0, #1
    // mov r1, #0xe1
    // ldr r2, [r2]
    // lsl r0, r0, #0xc
    // lsl r1, r1, #0xe
    // bl Camera_SetPerspectiveClippingPlane
    // add r0, r5, #0
    // add r0, #0xcc
    // ldr r0, [r0]
    // bl Camera_SetStaticPtr
    // add r0, r5, #0
    // add r0, #0xcc
    // ldr r0, [r0]
    // bl Camera_GetPerspectiveAngle
    // add r4, r0, #0
    // add r0, r5, #0
    // add r0, #0xcc
    // ldr r0, [r0]
    // bl Camera_GetDistance
    // add r1, r0, #0
    // add r0, sp, #0xc
    // str r0, [sp]
    // ldr r2, _02259B9C ; =0x00001555
    // add r0, r4, #0
    // add r3, sp, #0x10
    // bl sub_02020E10
    // add r0, r5, #0
    // ldr r1, [sp, #0x10]
    // add r0, #0xd0
    // str r1, [r0]
    // ldr r0, [sp, #0xc]
    // add r5, #0xd4
    // str r0, [r5]
    // add sp, #0x20
    // pop {r3, r4, r5, pc}
    // nop
    // _02259B90: .word ov89_0225C9C0
    // _02259B94: .word ov89_0225C9B8
    // _02259B98: .word 0x00000FA4
    // _02259B9C: .word 0x00001555
    // TODO: decompile
}


void ov89_02259BA0(void) {
    Camera_Delete();
}


void ov89_02259BAC(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4]
    // ldrb r0, [r0, #4]
    // cmp r0, #0
    // bne _02259BBC
    // mov r2, #0x1c
    // b _02259BBE
    // mov r2, #0x1b
    // add r0, r4, #0
    // add r0, #0xd8
    // mov r3, #0x7d
    // bl sub_02018030
    // add r0, r4, #0
    // add r1, r4, #0
    // add r0, #0xe8
    // add r1, #0xd8
    // bl sub_020181B0
    // mov r1, #0
    // add r0, r4, #0
    // add r0, #0xe8
    // add r2, r1, #0
    // add r3, r1, #0
    // bl sub_020182A8
    // mov r1, #1
    // lsl r1, r1, #0xc
    // add r0, r4, #0
    // add r0, #0xe8
    // add r2, r1, #0
    // add r3, r1, #0
    // bl sub_020182C4
    // add r4, #0xe8
    // add r0, r4, #0
    // mov r1, #1
    // bl sub_020182A0
    // pop {r4, pc}
    // TODO: decompile
}


void ov89_02259C00(void) {
    sub_02018068();
}


void ov89_02259C0C(void) {
    // push {r4, lr}
    // sub sp, #0x40
    // add r4, r0, #0
    // mov r0, #1
    // lsl r0, r0, #0xc
    // str r0, [sp, #0x34]
    // str r0, [sp, #0x38]
    // str r0, [sp, #0x3c]
    // mov r0, #0
    // str r0, [sp, #0x28]
    // str r0, [sp, #0x2c]
    // str r0, [sp, #0x30]
    // add r0, sp, #4
    // bl MTX_Identity33_
    // bl Thunk_G3X_Reset
    // add r0, r4, #0
    // add r0, #0xcc
    // ldr r0, [r0]
    // bl Camera_SetStaticPtr
    // add r1, r4, #0
    // add r1, #0xcc
    // ldr r1, [r1]
    // mov r0, #0
    // bl Camera_ApplyPerspectiveType
    // bl Camera_PushLookAtToNNSGlb
    // mov r0, #0
    // ldr r2, _02259CBC ; =0xFFFFF000
    // add r1, r0, #0
    // add r3, r0, #0
    // bl NNS_G3dGlbLightVector
    // ldr r1, _02259CC0 ; =0x0000739C
    // mov r0, #0
    // bl NNS_G3dGlbLightColor
    // ldr r0, _02259CC4 ; =0x00007FFF
    // mov r2, #0
    // add r1, r0, #0
    // bl NNS_G3dGlbMaterialColorDiffAmb
    // ldr r0, _02259CC4 ; =0x00007FFF
    // mov r2, #0
    // add r1, r0, #0
    // bl NNS_G3dGlbMaterialColorSpecEmi
    // add r0, sp, #0x28
    // bl NNS_G3dGlbSetBaseTrans
    // ldr r1, _02259CC8 ; =NNS_G3dGlb + 0xBC
    // add r0, sp, #4
    // bl MI_Copy36B
    // ldr r1, _02259CCC ; =NNS_G3dGlb + 0x80
    // mov r0, #0xa4
    // ldr r2, [r1, #0x7c]
    // bic r2, r0
    // add r0, sp, #0x34
    // str r2, [r1, #0x7c]
    // bl NNS_G3dGlbSetBaseScale
    // mov r1, #0
    // mov r0, #0x11
    // add r2, r1, #0
    // bl NNS_G3dGeBufferOP_N
    // add r0, r4, #0
    // add r0, #0xe8
    // bl sub_020181EC
    // mov r0, #0x65
    // lsl r0, r0, #2
    // add r0, r4, r0
    // bl ov89_0225A5A4
    // mov r2, #1
    // mov r0, #0x12
    // add r1, sp, #0
    // str r2, [sp]
    // bl NNS_G3dGeBufferOP_N
    // add sp, #0x40
    // pop {r4, pc}
    // nop
    // _02259CBC: .word 0xFFFFF000
    // _02259CC0: .word 0x0000739C
    // _02259CC4: .word 0x00007FFF
    // _02259CC8: .word NNS_G3dGlb + 0xBC
    // _02259CCC: .word NNS_G3dGlb + 0x80
    // TODO: decompile
}


void ov89_02259CD0(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // mov r2, #1
    // add r6, r0, #0
    // str r2, [sp]
    // mov r0, #0x1b
    // str r0, [sp, #4]
    // mov r0, #4
    // str r0, [sp, #8]
    // mov r0, #0xd
    // str r0, [sp, #0xc]
    // mov r0, #0x5b
    // str r0, [sp, #0x10]
    // add r1, r6, #0
    // ldr r0, [r6, #8]
    // add r1, #0xb4
    // mov r3, #2
    // bl AddWindowParameterized
    // add r0, r6, #0
    // add r0, #0xb4
    // mov r1, #0xf
    // bl FillWindowPixelBuffer
    // add r4, r6, #0
    // mov r5, #0
    // ldr r7, _02259D4C ; =ov89_0225C9CC
    // add r4, #0x34
    // b _02259D44
    // lsl r3, r5, #1
    // add r0, r7, r3
    // ldrb r0, [r0, #1]
    // lsl r1, r5, #4
    // mov r2, #5
    // str r0, [sp]
    // mov r0, #8
    // str r0, [sp, #4]
    // mov r0, #2
    // str r0, [sp, #8]
    // mov r0, #0xd
    // str r0, [sp, #0xc]
    // mov r0, #2
    // lsl r0, r0, #8
    // add r0, r1, r0
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp, #0x10]
    // ldrb r3, [r7, r3]
    // ldr r0, [r6, #8]
    // add r1, r4, r1
    // bl AddWindowParameterized
    // lsl r0, r5, #4
    // add r0, r4, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // add r5, r5, #1
    // cmp r5, #8
    // blt _02259D0A
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // _02259D4C: .word ov89_0225C9CC
    // TODO: decompile
}


void ov89_02259D50(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r0, #0xb4
    // bl RemoveWindow
    // mov r4, #0
    // add r5, #0x34
    // add r0, r5, #0
    // bl RemoveWindow
    // add r4, r4, #1
    // add r5, #0x10
    // cmp r4, #8
    // blt _02259D5E
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov89_02259D70(void) {
    GF_3DVramMan_Create(0, 2);
}


void ov89_02259D8C(void) {
    // push {r3, lr}
    // mov r0, #1
    // add r1, r0, #0
    // bl GfGfx_EngineATogglePlanes
    // ldr r0, _02259DF8 ; =0x04000008
    // mov r1, #3
    // ldrh r2, [r0]
    // bic r2, r1
    // mov r1, #1
    // orr r1, r2
    // strh r1, [r0]
    // add r0, #0x58
    // ldrh r2, [r0]
    // ldr r1, _02259DFC ; =0xFFFFCFFD
    // and r2, r1
    // strh r2, [r0]
    // add r2, r1, #2
    // ldrh r3, [r0]
    // add r1, r1, #2
    // and r3, r2
    // mov r2, #0x10
    // orr r2, r3
    // strh r2, [r0]
    // ldrh r3, [r0]
    // ldr r2, _02259E00 ; =0x0000CFFB
    // and r3, r2
    // strh r3, [r0]
    // ldrh r3, [r0]
    // sub r2, #0x1c
    // and r3, r1
    // mov r1, #8
    // orr r1, r3
    // strh r1, [r0]
    // ldrh r1, [r0]
    // and r1, r2
    // strh r1, [r0]
    // mov r0, #0
    // add r1, r0, #0
    // add r2, r0, #0
    // add r3, r0, #0
    // bl G3X_SetFog
    // mov r0, #0
    // ldr r2, _02259E04 ; =0x00007FFF
    // add r1, r0, #0
    // mov r3, #0x3f
    // str r0, [sp]
    // bl G3X_SetClearColor
    // ldr r1, _02259E08 ; =0xBFFF0000
    // ldr r0, _02259E0C ; =0x04000580
    // str r1, [r0]
    // pop {r3, pc}
    // _02259DF8: .word 0x04000008
    // _02259DFC: .word 0xFFFFCFFD
    // _02259E00: .word 0x0000CFFB
    // _02259E04: .word 0x00007FFF
    // _02259E08: .word 0xBFFF0000
    // _02259E0C: .word 0x04000580
    // TODO: decompile
}


void ov89_02259E10(void) {
    GF_3DVramMan_Delete();
}


void ov89_02259E18(void) {
    ov45_0222E9E0();
}


void ov89_02259E28(void) {
    MI_CpuFill8(r1, 0, 0xc);
    *((u16*)(r4 + 2)) = 0x96;
    *((u32*)(r4 + 4)) = 0x1f;
    *((u8*)(r4 + 8)) = 0;
}


void ov89_02259E48(void) {
    // mov r1, #0x5a
    // lsl r1, r1, #2
    // add r0, r0, r1
    // bx lr
    // TODO: decompile
}


void ov89_02259E50(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r5, r2, #0
    // str r0, [sp]
    // add r4, r1, #0
    // add r0, r5, #0
    // mov r1, #0
    // mov r2, #0x48
    // bl MI_CpuFill8
    // add r0, r4, #0
    // bl SaveArray_Party_Get
    // str r0, [sp, #4]
    // bl Party_GetCount
    // add r7, r0, #0
    // mov r6, #0
    // cmp r7, #0
    // ble _02259EC0
    // ldr r0, [sp, #4]
    // add r1, r6, #0
    // bl Party_GetMonByIndex
    // mov r1, #0xae
    // mov r2, #0
    // add r4, r0, #0
    // bl GetMonData
    // mov r1, #0
    // strh r0, [r5, #2]
    // add r0, r4, #0
    // add r2, r1, #0
    // bl GetMonData
    // str r0, [r5, #4]
    // add r0, r4, #0
    // mov r1, #0x70
    // mov r2, #0
    // bl GetMonData
    // strb r0, [r5, #8]
    // add r0, r4, #0
    // mov r1, #7
    // mov r2, #0
    // bl GetMonData
    // add r1, r0, #0
    // ldr r0, [sp]
    // bl ov89_0225C830
    // strh r0, [r5]
    // add r6, r6, #1
    // add r5, #0xc
    // cmp r6, r7
    // blt _02259E78
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov89_02259EC4(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // mov r3, #0x59
    // add r4, r0, #0
    // lsl r3, r3, #2
    // add r5, r1, #0
    // ldr r1, [r4, r3]
    // add r6, r2, #0
    // str r1, [sp]
    // ldr r1, _02259F8C ; =0x000019E0
    // add r2, r5, #0
    // ldr r1, [r4, r1]
    // str r1, [sp, #4]
    // add r1, r3, #0
    // sub r3, r3, #4
    // add r1, #0x30
    // ldr r3, [r4, r3]
    // add r1, r4, r1
    // bl ov89_0225A49C
    // str r0, [sp, #0xc]
    // cmp r0, #1
    // bne _02259F84
    // add r0, r6, #0
    // bl ov45_0222EC7C
    // add r6, r0, #0
    // mov r0, #0
    // mvn r0, r0
    // cmp r6, r0
    // beq _02259F7E
    // ldr r3, _02259F90 ; =0x0000099C
    // lsl r1, r6, #1
    // add r0, r4, r3
    // mov ip, r0
    // mov r2, ip
    // ldrh r0, [r5, #2]
    // ldrh r2, [r2, r1]
    // cmp r0, r2
    // bne _02259F20
    // add r2, r4, r1
    // add r3, #0x10
    // ldrh r7, [r5]
    // ldrh r2, [r2, r3]
    // cmp r7, r2
    // beq _02259F7E
    // mov r2, ip
    // strh r0, [r2, r1]
    // ldrh r2, [r5]
    // ldr r0, _02259F94 ; =0x000009AC
    // add r1, r4, r1
    // strh r2, [r1, r0]
    // sub r0, #0x3c
    // mov r3, #0x59
    // add r7, r4, r0
    // lsl r0, r6, #2
    // str r0, [sp, #0x10]
    // lsl r3, r3, #2
    // ldr r0, [r4, r3]
    // ldr r2, [sp, #0x10]
    // str r0, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // ldr r0, _02259F8C ; =0x000019E0
    // sub r3, r3, #4
    // ldr r0, [r4, r0]
    // str r0, [sp, #8]
    // ldrh r0, [r5, #2]
    // ldrb r1, [r5, #8]
    // ldr r2, [r7, r2]
    // ldr r3, [r4, r3]
    // bl ov89_02259A3C
    // ldr r0, [sp, #0x10]
    // mov r1, #1
    // ldr r0, [r7, r0]
    // bl ManagedSprite_SetDrawFlag
    // add r0, r6, #0
    // add r0, #0x21
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // add r6, #0x22
    // str r0, [sp]
    // lsl r0, r6, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp, #4]
    // ldrh r3, [r5]
    // ldr r0, [r4, #0xc]
    // mov r1, #1
    // mov r2, #2
    // bl PaletteData_FillPaletteInBuffer
    // ldr r0, _02259F98 ; =0x000005EB
    // bl PlaySE
    // ldr r0, [sp, #0xc]
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _02259F8C: .word 0x000019E0
    // _02259F90: .word 0x0000099C
    // _02259F94: .word 0x000009AC
    // _02259F98: .word 0x000005EB
    // TODO: decompile
}


void ov89_02259F9C(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x2c
    // add r6, r0, #0
    // mov r0, #0
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x14]
    // add r0, sp, #0x24
    // bl ov45_0222EC3C
    // mov r7, #0
    // b _0225A0DC
    // lsl r3, r7, #2
    // mov r0, #0x17
    // add r1, r6, r3
    // lsl r0, r0, #4
    // ldr r2, [r1, r0]
    // ldr r0, [sp, #0x28]
    // ldr r1, [r0, r3]
    // cmp r2, r1
    // bne _02259FC6
    // b _0225A0CC
    // mov r0, #0
    // mvn r0, r0
    // cmp r1, r0
    // beq _0225A036
    // str r1, [sp]
    // ldr r3, [r6]
    // add r2, r6, #0
    // ldr r0, [r6, #0x30]
    // ldr r1, [r6, #0x2c]
    // ldr r3, [r3]
    // add r2, #0x34
    // bl ov89_0225C724
    // ldr r0, [r6, #8]
    // mov r1, #6
    // bl GetBgTilemapBuffer
    // str r0, [sp, #0x10]
    // lsl r0, r7, #3
    // ldr r1, _0225A130 ; =ov89_0225CBD8
    // str r0, [sp, #0x1c]
    // add r4, r1, r0
    // mov r0, #0x27
    // lsl r0, r0, #6
    // add r0, r6, r0
    // ldrh r5, [r4, #2]
    // str r0, [sp, #0x20]
    // b _0225A01C
    // ldrh r0, [r4, #4]
    // ldr r1, _0225A130 ; =ov89_0225CBD8
    // lsl r3, r5, #5
    // lsl r2, r0, #1
    // ldr r0, [sp, #0x1c]
    // ldrh r0, [r1, r0]
    // ldr r1, [sp, #0x10]
    // add r0, r3, r0
    // lsl r3, r0, #1
    // ldr r0, [sp, #0x20]
    // add r1, r1, r3
    // add r0, r0, r3
    // bl MIi_CpuCopy16
    // add r5, r5, #1
    // ldrh r1, [r4, #2]
    // ldrh r0, [r4, #6]
    // add r0, r1, r0
    // cmp r5, r0
    // blt _02259FFE
    // ldr r0, [r6, #8]
    // mov r1, #6
    // bl ScheduleBgTilemapBufferTransfer
    // ldr r0, [sp, #0x18]
    // add r0, r0, #1
    // str r0, [sp, #0x18]
    // b _0225A09C
    // add r0, r6, #0
    // add r0, #0x34
    // add r1, r7, #0
    // bl ov89_0225C818
    // lsl r0, r7, #1
    // ldr r2, _0225A134 ; =0x0000099C
    // add r3, r6, r0
    // mov r1, #0
    // add r0, r2, #0
    // strh r1, [r3, r2]
    // add r0, #0x10
    // strh r1, [r3, r0]
    // lsl r0, r7, #2
    // add r0, r6, r0
    // sub r2, #0x2c
    // ldr r0, [r0, r2]
    // bl ManagedSprite_SetDrawFlag
    // ldr r3, _0225A130 ; =ov89_0225CBD8
    // lsl r4, r7, #3
    // add r0, r3, r4
    // ldrh r1, [r0, #2]
    // mov r2, #0
    // lsl r1, r1, #0x18
    // lsr r1, r1, #0x18
    // str r1, [sp]
    // ldrh r1, [r0, #4]
    // lsl r1, r1, #0x18
    // lsr r1, r1, #0x18
    // str r1, [sp, #4]
    // ldrh r0, [r0, #6]
    // mov r1, #6
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #8]
    // mov r0, #0x10
    // str r0, [sp, #0xc]
    // ldrh r3, [r3, r4]
    // ldr r0, [r6, #8]
    // lsl r3, r3, #0x18
    // lsr r3, r3, #0x18
    // bl FillBgTilemapRect
    // ldr r0, [r6, #8]
    // mov r1, #6
    // bl ScheduleBgTilemapBufferTransfer
    // ldr r0, [sp, #0x14]
    // add r0, r0, #1
    // str r0, [sp, #0x14]
    // mov r0, #0x5b
    // lsl r0, r0, #2
    // ldr r1, [r6, r0]
    // ldr r0, [sp, #0x28]
    // lsl r2, r7, #2
    // ldr r0, [r0, r2]
    // cmp r1, r0
    // bne _0225A0CC
    // ldr r3, _0225A138 ; =ov89_0225CA18
    // ldr r0, _0225A13C ; =0x0000096C
    // ldrsh r1, [r3, r2]
    // add r3, r3, r2
    // mov r2, #2
    // ldrsh r2, [r3, r2]
    // mov r3, #0x11
    // ldr r0, [r6, r0]
    // lsl r3, r3, #0x10
    // bl ManagedSprite_SetPositionXYWithSubscreenOffset
    // ldr r0, _0225A13C ; =0x0000096C
    // mov r1, #1
    // ldr r0, [r6, r0]
    // bl ManagedSprite_SetDrawFlag
    // ldr r1, [sp, #0x28]
    // lsl r0, r7, #2
    // ldr r2, [r1, r0]
    // add r1, r6, r0
    // mov r0, #0x17
    // lsl r0, r0, #4
    // str r2, [r1, r0]
    // add r7, r7, #1
    // cmp r7, #8
    // bge _0225A0E2
    // b _02259FB2
    // mov r0, #0
    // mov r1, #0x17
    // add r7, r0, #0
    // lsl r1, r1, #4
    // sub r2, r0, #1
    // b _0225A0FC
    // lsl r3, r7, #2
    // add r3, r6, r3
    // ldr r3, [r3, r1]
    // cmp r3, r2
    // beq _0225A0FA
    // add r0, r0, #1
    // add r7, r7, #1
    // cmp r7, #8
    // blt _0225A0EE
    // ldr r1, _0225A140 ; =0x000008D3
    // strb r0, [r6, r1]
    // ldr r0, [sp, #0x18]
    // cmp r0, #0
    // ble _0225A116
    // ldr r0, _0225A144 ; =0x000005E4
    // bl PlaySE
    // add sp, #0x2c
    // mov r0, #1
    // pop {r4, r5, r6, r7, pc}
    // ldr r0, [sp, #0x14]
    // cmp r0, #0
    // ble _0225A128
    // ldr r0, _0225A144 ; =0x000005E4
    // bl PlaySE
    // add sp, #0x2c
    // mov r0, #2
    // pop {r4, r5, r6, r7, pc}
    // mov r0, #0
    // add sp, #0x2c
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _0225A130: .word ov89_0225CBD8
    // _0225A134: .word 0x0000099C
    // _0225A138: .word ov89_0225CA18
    // _0225A13C: .word 0x0000096C
    // _0225A140: .word 0x000008D3
    // _0225A144: .word 0x000005E4
    // TODO: decompile
}


void ov89_0225A148(void) {
    ov89_0225C724();
}


void ov89_0225A160(void) {
    ov89_0225C818();
}


void ov89_0225A16C(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0x34
    // ldr r4, _0225A1D0 ; =ov89_0225CBA4
    // add r5, r0, #0
    // add r6, r1, #0
    // add r3, sp, #0
    // mov r2, #6
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // sub r2, r2, #1
    // bne _0225A17A
    // ldr r0, [r4]
    // mov r4, #0
    // str r0, [r3]
    // mov r0, #0x99
    // add r2, r5, #0
    // lsl r0, r0, #4
    // ldr r1, [r2, r0]
    // cmp r1, #0
    // bne _0225A1B6
    // lsl r1, r6, #5
    // add r1, #0x10
    // add r0, sp, #0
    // strh r1, [r0]
    // mov r1, #0xb0
    // strh r1, [r0, #2]
    // ldr r0, [r5, #0x1c]
    // ldr r1, [r5, #0x20]
    // add r2, sp, #0
    // bl SpriteSystem_NewSprite
    // lsl r1, r4, #2
    // add r2, r5, r1
    // mov r1, #0x99
    // lsl r1, r1, #4
    // str r0, [r2, r1]
    // b _0225A1BE
    // add r4, r4, #1
    // add r2, r2, #4
    // cmp r4, #3
    // blt _0225A18E
    // add r0, r5, #0
    // add r1, r6, #0
    // bl ov89_0225A1D8
    // ldr r0, _0225A1D4 ; =0x000005E5
    // bl PlaySE
    // add sp, #0x34
    // pop {r3, r4, r5, r6, pc}
    // _0225A1D0: .word ov89_0225CBA4
    // _0225A1D4: .word 0x000005E5
    // TODO: decompile
}


void ov89_0225A1D8(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #4
    // add r5, r0, #0
    // ldr r0, [r5, #0xc]
    // add r4, r1, #0
    // mov r1, #2
    // bl PaletteData_GetUnfadedBuf
    // add r6, r0, #0
    // ldr r0, [r5, #0xc]
    // mov r1, #2
    // bl PaletteData_GetFadedBuf
    // add r5, r0, #0
    // add r0, r6, #0
    // add r1, r5, #0
    // add r0, #0x22
    // add r1, #0x22
    // mov r2, #0xc
    // bl MIi_CpuCopy16
    // add r4, #0x11
    // mov r0, #0
    // lsl r1, r4, #1
    // str r0, [sp]
    // add r0, r6, r1
    // add r1, r5, r1
    // mov r2, #1
    // mov r3, #6
    // bl BlendPalette
    // add sp, #4
    // pop {r3, r4, r5, r6, pc}
    // TODO: decompile
}


void ov89_0225A21C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // mov r4, #0
    // mov r7, #0x99
    // add r5, r0, #0
    // add r6, r4, #0
    // lsl r7, r7, #4
    // ldr r0, [r5, r7]
    // cmp r0, #0
    // beq _0225A254
    // bl ManagedSprite_IsAnimated
    // cmp r0, #0
    // bne _0225A248
    // mov r0, #0x99
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // bl Sprite_DeleteAndFreeResources
    // mov r0, #0x99
    // lsl r0, r0, #4
    // str r6, [r5, r0]
    // b _0225A254
    // mov r0, #0x99
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // ldr r0, [r0]
    // bl Sprite_TickFrame
    // add r4, r4, #1
    // add r5, r5, #4
    // cmp r4, #3
    // blt _0225A228
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov89_0225A260(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x78
    // add r5, r1, #0
    // add r6, r0, #0
    // ldr r0, [r5]
    // str r2, [sp, #0x18]
    // str r3, [sp, #0x1c]
    // ldr r4, [sp, #0x9c]
    // cmp r0, #0
    // beq _0225A278
    // bl GF_AssertFail
    // ldr r0, [r6, #8]
    // ldr r1, [sp, #0x1c]
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x18]
    // add r2, sp, #0x28
    // add r3, sp, #0x24
    // ldr r7, [r6, #0x20]
    // bl ov89_0225A368
    // add r0, sp, #0x38
    // bl InitWindow
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x24]
    // ldr r0, [sp, #0x20]
    // lsl r2, r2, #0x18
    // add r1, sp, #0x38
    // lsr r2, r2, #0x18
    // mov r3, #2
    // bl AddTextWindowTopLeftCorner
    // mov r3, #0
    // str r3, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x90]
    // ldr r1, [sp, #0x1c]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // str r3, [sp, #0x10]
    // ldr r2, [sp, #0x18]
    // add r0, sp, #0x38
    // str r3, [sp, #0x14]
    // bl AddTextPrinterParameterizedWithColorAndSpacing
    // add r0, sp, #0x38
    // mov r1, #1
    // mov r2, #0x7d
    // bl sub_02013688
    // mov r1, #1
    // add r2, r1, #0
    // add r3, sp, #0x2c
    // bl sub_02021AC8
    // ldr r0, [sp, #0xa4]
    // cmp r0, #1
    // bne _0225A2E6
    // ldr r1, [sp, #0x28]
    // lsr r0, r1, #0x1f
    // add r0, r1, r0
    // asr r0, r0, #1
    // sub r4, r4, r0
    // ldr r0, [r6, #0x10]
    // str r0, [sp, #0x48]
    // add r0, sp, #0x38
    // str r0, [sp, #0x4c]
    // add r0, r7, #0
    // bl SpriteManager_GetSpriteList
    // str r0, [sp, #0x50]
    // ldr r1, [sp, #0x98]
    // add r0, r7, #0
    // bl SpriteManager_FindPlttResourceProxy
    // mov r1, #0
    // str r0, [sp, #0x54]
    // ldr r0, [sp, #0x30]
    // str r1, [sp, #0x58]
    // str r0, [sp, #0x5c]
    // ldr r0, [sp, #0xa0]
    // str r4, [sp, #0x60]
    // sub r0, #8
    // str r0, [sp, #0x64]
    // mov r0, #0x33
    // str r0, [sp, #0x6c]
    // mov r0, #1
    // str r0, [sp, #0x70]
    // mov r0, #0x7d
    // str r0, [sp, #0x74]
    // add r0, sp, #0x48
    // str r1, [sp, #0x68]
    // bl sub_020135D8
    // ldr r1, [sp, #0x94]
    // add r6, r0, #0
    // bl sub_020138E0
    // ldr r2, [sp, #0xa0]
    // add r0, r6, #0
    // add r1, r4, #0
    // sub r2, #8
    // bl sub_020136B4
    // add r0, sp, #0x38
    // bl RemoveWindow
    // str r6, [r5]
    // add r3, sp, #0x2c
    // ldmia r3!, {r0, r1}
    // add r2, r5, #4
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // str r0, [r2]
    // ldr r0, [sp, #0x28]
    // strh r0, [r5, #0x10]
    // add sp, #0x78
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov89_0225A354(void) {
    FontOAM_Delete();
    sub_02021B5C((r4 + 4));
}


void ov89_0225A368(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r4, r0, #0
    // add r6, r2, #0
    // add r0, r1, #0
    // add r1, r4, #0
    // mov r2, #0
    // add r7, r3, #0
    // bl FontID_String_GetWidth
    // add r4, r0, #0
    // asr r1, r4, #2
    // lsr r1, r1, #0x1d
    // add r1, r4, r1
    // asr r5, r1, #3
    // mov r1, #8
    // bl FX_ModS32
    // cmp r0, #0
    // beq _0225A390
    // add r5, r5, #1
    // str r4, [r6]
    // str r5, [r7]
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov89_0225A398(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // ldr r1, _0225A410 ; =0x000019D4
    // add r5, r0, #0
    // add r0, r1, #4
    // ldr r2, [r5, r1]
    // ldr r0, [r5, r0]
    // cmp r2, r0
    // bne _0225A3C2
    // add r2, #0x88
    // str r2, [r5, r1]
    // mov r0, #2
    // ldr r2, [r5, r1]
    // lsl r0, r0, #0xc
    // cmp r2, r0
    // ble _0225A3B8
    // str r0, [r5, r1]
    // ldr r0, _0225A410 ; =0x000019D4
    // ldr r1, [r5, r0]
    // add r0, r0, #4
    // str r1, [r5, r0]
    // b _0225A3DE
    // add r0, r1, #4
    // ldr r2, [r5, r0]
    // add r0, r1, #0
    // add r0, #8
    // ldr r0, [r5, r0]
    // sub r2, r2, r0
    // add r0, r1, #4
    // str r2, [r5, r0]
    // ldr r2, [r5, r1]
    // ldr r0, [r5, r0]
    // cmp r0, r2
    // bge _0225A3DE
    // add r0, r1, #4
    // str r2, [r5, r0]
    // ldr r0, _0225A414 ; =0x000019D8
    // mov r6, #0
    // ldr r0, [r5, r0]
    // mov r4, #0x10
    // asr r1, r0, #8
    // mov r0, #0x20
    // sub r0, r0, r1
    // add r0, #0xb0
    // lsl r0, r0, #0x10
    // asr r7, r0, #0x10
    // ldr r0, _0225A418 ; =0x00000924
    // lsl r1, r4, #0x10
    // mov r3, #0x11
    // ldr r0, [r5, r0]
    // asr r1, r1, #0x10
    // add r2, r7, #0
    // lsl r3, r3, #0x10
    // bl ManagedSprite_SetPositionXYWithSubscreenOffset
    // add r6, r6, #1
    // add r4, #0x20
    // add r5, r5, #4
    // cmp r6, #6
    // blt _0225A3F2
    // pop {r3, r4, r5, r6, r7, pc}
    // _0225A410: .word 0x000019D4
    // _0225A414: .word 0x000019D8
    // _0225A418: .word 0x00000924
    // TODO: decompile
}


void ov89_0225A41C(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, _0225A464 ; =0x000019D4
    // add r4, r1, #0
    // ldr r1, [r5, r0]
    // cmp r1, r4
    // bge _0225A42E
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // add r0, r0, #4
    // ldr r0, [r5, r0]
    // cmp r0, r1
    // bge _0225A442
    // bl GF_AssertFail
    // ldr r0, _0225A464 ; =0x000019D4
    // ldr r1, [r5, r0]
    // add r0, r0, #4
    // str r1, [r5, r0]
    // ldr r1, _0225A464 ; =0x000019D4
    // ldr r0, [r5, r1]
    // sub r0, r0, r4
    // str r0, [r5, r1]
    // add r0, r1, #4
    // ldr r2, [r5, r0]
    // ldr r0, [r5, r1]
    // add r1, #8
    // sub r2, r2, r0
    // asr r0, r2, #1
    // lsr r0, r0, #0x1e
    // add r0, r2, r0
    // asr r0, r0, #2
    // str r0, [r5, r1]
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // nop
    // _0225A464: .word 0x000019D4
    // TODO: decompile
}


void ov89_0225A468(void) {
    // bx lr
    // TODO: decompile
}


void ov89_0225A46C(void) {
    // ldr r3, _0225A474 ; =MI_CpuFill8
    // mov r1, #0
    // ldr r2, _0225A478 ; =0x00000744
    // bx r3
    // _0225A474: .word MI_CpuFill8
    // _0225A478: .word 0x00000744
    // TODO: decompile
}


void ov89_0225A47C(void) {
    ov89_0225AC10(0);
}


void ov89_0225A49C(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #8
    // ldr r4, _0225A4F0 ; =0x0000073C
    // ldrb r4, [r1, r4]
    // cmp r4, #0
    // beq _0225A4AE
    // add sp, #8
    // mov r0, #0
    // pop {r4, r5, r6, pc}
    // mov r4, #0
    // add r5, r1, #0
    // add r6, r5, #0
    // add r6, #0xb4
    // ldr r6, [r6]
    // cmp r6, #0
    // bne _0225A4E2
    // ldr r6, [sp, #0x18]
    // add r5, r1, #0
    // str r6, [sp]
    // ldr r6, [sp, #0x1c]
    // add r5, #0xb4
    // lsl r4, r4, #2
    // str r6, [sp, #4]
    // bl ov89_0225A7BC
    // str r0, [r5, r4]
    // ldr r0, [r5, r4]
    // cmp r0, #0
    // beq _0225A4DC
    // add sp, #8
    // mov r0, #1
    // pop {r4, r5, r6, pc}
    // add sp, #8
    // mov r0, #0
    // pop {r4, r5, r6, pc}
    // add r4, r4, #1
    // add r5, r5, #4
    // cmp r4, #0x80
    // blt _0225A4B2
    // mov r0, #0
    // add sp, #8
    // pop {r4, r5, r6, pc}
    // _0225A4F0: .word 0x0000073C
    // TODO: decompile
}


void ov89_0225A4F4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r4, r1, #0
    // ldr r1, _0225A590 ; =0x0000073D
    // add r7, r0, #0
    // ldrb r1, [r7, r1]
    // cmp r1, #0
    // beq _0225A50A
    // add r1, r7, #0
    // add r1, #0xb0
    // bl ov89_0225BE84
    // ldr r0, _0225A594 ; =0x0000073C
    // ldrb r3, [r7, r0]
    // cmp r3, #0
    // beq _0225A52A
    // add r2, r4, #0
    // lsl r4, r3, #2
    // ldr r3, _0225A598 ; =ov89_0225CD10
    // add r0, r7, #0
    // ldr r3, [r3, r4]
    // add r1, r7, #0
    // blx r3
    // cmp r0, #1
    // bne _0225A52A
    // ldr r0, _0225A594 ; =0x0000073C
    // mov r1, #0
    // strb r1, [r7, r0]
    // mov r4, #0
    // add r6, r7, #0
    // add r0, r6, #0
    // add r0, #0xb4
    // ldr r5, [r0]
    // cmp r5, #0
    // beq _0225A586
    // mov r0, #9
    // lsl r0, r0, #6
    // ldr r0, [r5, r0]
    // lsl r1, r0, #0x10
    // lsr r1, r1, #0x18
    // bne _0225A560
    // lsl r0, r0, #8
    // lsr r1, r0, #0x18
    // beq _0225A560
    // mov r0, #9
    // lsl r0, r0, #6
    // ldr r2, [r5, r0]
    // ldr r0, _0225A59C ; =0xFFFF00FF
    // lsl r1, r1, #0x18
    // and r0, r2
    // lsr r1, r1, #0x10
    // orr r1, r0
    // mov r0, #9
    // lsl r0, r0, #6
    // str r1, [r5, r0]
    // mov r2, #9
    // lsl r2, r2, #6
    // ldr r2, [r5, r2]
    // mov r3, #0xc
    // lsl r2, r2, #0x10
    // lsr r2, r2, #0x18
    // mul r3, r2
    // ldr r2, _0225A5A0 ; =ov89_0225CDB0
    // add r0, r7, #0
    // ldr r2, [r2, r3]
    // add r1, r5, #0
    // blx r2
    // cmp r0, #1
    // bne _0225A586
    // add r0, r7, #0
    // add r1, r5, #0
    // add r2, r4, #0
    // bl ov89_0225AC24
    // add r4, r4, #1
    // add r6, r6, #4
    // cmp r4, #0x80
    // blt _0225A52E
    // pop {r3, r4, r5, r6, r7, pc}
    // _0225A590: .word 0x0000073D
    // _0225A594: .word 0x0000073C
    // _0225A598: .word ov89_0225CD10
    // _0225A59C: .word 0xFFFF00FF
    // _0225A5A0: .word ov89_0225CDB0
    // TODO: decompile
}


void ov89_0225A5A4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r0, #0
    // ldr r7, _0225A5E8 ; =ov89_0225CDB0
    // mov r4, #0
    // add r5, r6, #0
    // add r0, r5, #0
    // add r0, #0xb4
    // ldr r1, [r0]
    // cmp r1, #0
    // beq _0225A5DC
    // mov r0, #9
    // lsl r0, r0, #6
    // ldr r0, [r1, r0]
    // lsl r0, r0, #0x10
    // lsr r2, r0, #0x18
    // mov r0, #0xc
    // mul r0, r2
    // add r0, r7, r0
    // ldr r2, [r0, #4]
    // cmp r2, #0
    // beq _0225A5D4
    // add r0, r6, #0
    // blx r2
    // b _0225A5DC
    // add r1, #0x1c
    // add r0, r1, #0
    // bl sub_020181EC
    // add r4, r4, #1
    // add r5, r5, #4
    // cmp r4, #0x80
    // blt _0225A5AE
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0225A5E8: .word ov89_0225CDB0
    // TODO: decompile
}


void ov89_0225A5EC(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // add r7, r0, #0
    // mov r0, #0
    // mov r6, #9
    // str r0, [sp, #0x10]
    // str r0, [sp, #0xc]
    // add r1, r0, #0
    // add r2, r7, #0
    // add r3, r7, #0
    // lsl r6, r6, #6
    // add r0, r2, #0
    // add r0, #0xb4
    // ldr r0, [r0]
    // cmp r0, #0
    // beq _0225A63A
    // ldr r4, [r0, r6]
    // lsl r4, r4, #0x10
    // lsr r4, r4, #0x18
    // beq _0225A624
    // mov r4, #0xad
    // lsl r4, r4, #2
    // str r0, [r3, r4]
    // ldr r0, [sp, #0x10]
    // add r3, r3, #4
    // add r0, r0, #1
    // str r0, [sp, #0x10]
    // b _0225A63A
    // ldr r4, [sp, #0xc]
    // mov r5, #0x7f
    // sub r4, r5, r4
    // lsl r4, r4, #2
    // add r5, r7, r4
    // mov r4, #0xad
    // lsl r4, r4, #2
    // str r0, [r5, r4]
    // ldr r0, [sp, #0xc]
    // add r0, r0, #1
    // str r0, [sp, #0xc]
    // add r1, r1, #1
    // add r2, r2, #4
    // cmp r1, #0x80
    // blt _0225A602
    // mov r0, #0
    // str r0, [sp, #4]
    // ldr r0, [sp, #0xc]
    // cmp r0, #0
    // ble _0225A6F6
    // ldr r0, [sp, #4]
    // mov r1, #0x7f
    // sub r0, r1, r0
    // lsl r0, r0, #2
    // add r1, r7, r0
    // mov r0, #0xad
    // lsl r0, r0, #2
    // ldr r4, [r1, r0]
    // mov r0, #0
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x10]
    // cmp r0, #0
    // ble _0225A6EA
    // add r5, r7, #0
    // mov r0, #0xad
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r3, #9
    // str r0, [sp]
    // ldr r1, [sp]
    // lsl r3, r3, #6
    // add r6, r1, #0
    // ldr r3, [r6, r3]
    // mov r6, #0xc
    // lsl r3, r3, #0x10
    // lsr r3, r3, #0x18
    // mul r6, r3
    // ldr r3, _0225A754 ; =ov89_0225CDB0
    // add r0, r7, #0
    // add r3, r3, r6
    // ldr r3, [r3, #8]
    // add r2, r4, #0
    // blx r3
    // cmp r0, #1
    // bne _0225A6DC
    // mov r1, #9
    // ldr r2, [sp]
    // lsl r1, r1, #6
    // ldr r1, [r2, r1]
    // add r0, r4, #0
    // lsl r1, r1, #0x10
    // lsr r1, r1, #0x18
    // bl ov89_0225AFC0
    // cmp r0, #1
    // bne _0225A6DC
    // mov r0, #9
    // lsl r0, r0, #6
    // ldr r0, [r4, r0]
    // lsr r0, r0, #0x18
    // cmp r0, #0xff
    // bne _0225A6DC
    // mov r1, #9
    // lsl r1, r1, #6
    // ldr r2, [r4, r1]
    // ldr r0, _0225A758 ; =0x00FFFFFF
    // and r0, r2
    // ldr r2, [sp]
    // ldr r2, [r2, r1]
    // lsr r2, r2, #0x18
    // lsl r2, r2, #0x18
    // orr r0, r2
    // str r0, [r4, r1]
    // ldr r2, [sp]
    // add r0, r7, #0
    // ldr r2, [r2, r1]
    // lsr r1, r2, #0x18
    // lsl r2, r2, #0x10
    // lsr r2, r2, #0x18
    // bl ov89_0225AF10
    // b _0225A6EA
    // ldr r0, [sp, #8]
    // add r5, r5, #4
    // add r1, r0, #1
    // ldr r0, [sp, #0x10]
    // str r1, [sp, #8]
    // cmp r1, r0
    // blt _0225A668
    // ldr r0, [sp, #4]
    // add r1, r0, #1
    // ldr r0, [sp, #0xc]
    // str r1, [sp, #4]
    // cmp r1, r0
    // blt _0225A64C
    // ldr r0, _0225A75C ; =0x0000073D
    // ldrb r1, [r7, r0]
    // cmp r1, #0
    // beq _0225A750
    // add r0, r0, #1
    // ldrb r0, [r7, r0]
    // cmp r0, #1
    // bne _0225A750
    // mov r5, #0
    // add r6, r7, #0
    // add r0, r6, #0
    // add r0, #0xb4
    // ldr r4, [r0]
    // cmp r4, #0
    // beq _0225A742
    // ldr r0, _0225A75C ; =0x0000073D
    // ldrb r1, [r7, r0]
    // mov r0, #9
    // lsl r0, r0, #6
    // ldr r0, [r4, r0]
    // lsl r2, r0, #0x10
    // lsr r2, r2, #0x18
    // cmp r2, r1
    // beq _0225A742
    // lsl r0, r0, #8
    // lsr r0, r0, #0x18
    // cmp r0, r1
    // beq _0225A742
    // add r0, r4, #0
    // bl ov89_0225AFC0
    // cmp r0, #0
    // bne _0225A742
    // add r0, r7, #0
    // add r1, r4, #0
    // add r2, r5, #0
    // bl ov89_0225AC24
    // add r5, r5, #1
    // add r6, r6, #4
    // cmp r5, #0x80
    // blt _0225A70A
    // add r0, r7, #0
    // bl ov89_0225AF9C
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // _0225A754: .word ov89_0225CDB0
    // _0225A758: .word 0x00FFFFFF
    // _0225A75C: .word 0x0000073D
    // TODO: decompile
}


void ov89_0225A760(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r0, #0
    // ldr r0, _0225A7B8 ; =0x000004B4
    // mov r4, #0
    // str r1, [sp]
    // add r5, r6, r0
    // add r7, r4, #0
    // ldr r0, [r5]
    // cmp r0, #0
    // beq _0225A78C
    // ldr r1, [r0, #4]
    // bl DC_FlushRange
    // ldr r0, [r5]
    // mov r1, #1
    // bl NNS_G3dTexLoad
    // ldr r0, [r5]
    // mov r1, #1
    // bl NNS_G3dPlttLoad
    // str r7, [r5]
    // add r4, r4, #1
    // add r5, r5, #4
    // cmp r4, #0x20
    // blt _0225A76E
    // mov r1, #0x1d
    // lsl r1, r1, #6
    // ldrb r0, [r6, r1]
    // cmp r0, #0
    // beq _0225A7B6
    // ldr r0, [sp]
    // cmp r0, #3
    // beq _0225A7B6
    // add r1, r1, #2
    // ldrsh r1, [r6, r1]
    // mov r0, #0
    // bl SetMasterBrightness
    // mov r0, #0x1d
    // mov r1, #0
    // lsl r0, r0, #6
    // strb r1, [r6, r0]
    // pop {r3, r4, r5, r6, r7, pc}
    // _0225A7B8: .word 0x000004B4
    // TODO: decompile
}


void ov89_0225A7BC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x18
    // str r1, [sp, #8]
    // mov r1, #0x91
    // add r7, r0, #0
    // mov r0, #0x7d
    // lsl r1, r1, #2
    // add r5, r2, #0
    // str r3, [sp, #0xc]
    // bl Heap_Alloc
    // mov r2, #0x91
    // mov r1, #0
    // lsl r2, r2, #2
    // add r4, r0, #0
    // bl MI_CpuFill8
    // mov r2, #9
    // lsl r2, r2, #6
    // ldr r1, [r4, r2]
    // ldr r0, _0225A874 ; =0x00FFFFFF
    // add r6, r5, #0
    // and r1, r0
    // lsl r0, r0, #0x18
    // orr r0, r1
    // str r0, [r4, r2]
    // ldmia r6!, {r0, r1}
    // add r3, r4, #0
    // stmia r3!, {r0, r1}
    // ldr r0, [r6]
    // sub r2, #0x53
    // str r0, [r3]
    // ldrh r0, [r4, #2]
    // cmp r0, r2
    // bls _0225A80A
    // bl GF_AssertFail
    // mov r0, #0x84
    // strh r0, [r4, #2]
    // ldr r0, [sp, #0x34]
    // str r4, [sp]
    // str r0, [sp, #4]
    // add r1, r4, #0
    // ldr r0, [sp, #8]
    // ldr r2, [sp, #0xc]
    // ldr r3, [sp, #0x30]
    // add r1, #0xc
    // bl ov89_0225A878
    // cmp r0, #0
    // bne _0225A828
    // add sp, #0x18
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r4, #0
    // add r1, r4, #0
    // add r0, #0x1c
    // add r1, #0xc
    // bl sub_020181B0
    // add r0, sp, #0x10
    // str r0, [sp]
    // ldrb r1, [r5, #9]
    // ldrb r2, [r5, #0xa]
    // add r0, r7, #0
    // add r3, sp, #0x14
    // bl ov89_0225AC68
    // add r0, r4, #0
    // mov r3, #1
    // ldr r1, [sp, #0x14]
    // ldr r2, [sp, #0x10]
    // add r0, #0x1c
    // lsl r3, r3, #0x10
    // bl sub_020182A8
    // mov r1, #1
    // lsl r1, r1, #0xc
    // add r0, r4, #0
    // add r0, #0x1c
    // add r2, r1, #0
    // add r3, r1, #0
    // bl sub_020182C4
    // add r0, r4, #0
    // add r0, #0x1c
    // mov r1, #0
    // bl sub_020182A0
    // add r0, r4, #0
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // _0225A874: .word 0x00FFFFFF
    // TODO: decompile
}


void ov89_0225A878(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // add r4, r2, #0
    // add r7, r0, #0
    // add r5, r1, #0
    // add r6, r3, #0
    // mov r2, #0
    // add r0, r4, #0
    // mov r1, #0x1d
    // mov r3, #0x7d
    // str r2, [sp]
    // bl GfGfxLoader_LoadFromOpenNarc
    // str r0, [r5]
    // cmp r0, #0
    // bne _0225A89C
    // bl GF_AssertFail
    // ldr r0, [r5]
    // bl NNS_G3dGetMdlSet
    // str r0, [r5, #4]
    // cmp r0, #0
    // beq _0225A8C8
    // add r1, r0, #0
    // add r1, #8
    // beq _0225A8BC
    // ldrb r2, [r0, #9]
    // cmp r2, #0
    // bls _0225A8BC
    // ldrh r2, [r0, #0xe]
    // add r1, r1, r2
    // add r1, r1, #4
    // b _0225A8BE
    // mov r1, #0
    // cmp r1, #0
    // beq _0225A8C8
    // ldr r1, [r1]
    // add r0, r0, r1
    // b _0225A8CA
    // mov r0, #0
    // str r0, [r5, #8]
    // ldr r0, [r5]
    // bl NNS_G3dGetTex
    // str r0, [r5, #0xc]
    // cmp r0, #0
    // beq _0225A94A
    // ldr r1, [sp, #0x24]
    // ldr r3, [sp, #0x20]
    // str r1, [sp]
    // add r1, r4, #0
    // add r2, r6, #0
    // bl ov89_0225AA24
    // ldr r0, [r5, #0xc]
    // bl ov89_0225A9B4
    // add r4, r0, #0
    // beq _0225A8FC
    // ldr r1, [r5, #0xc]
    // add r0, r7, #0
    // bl ov89_0225A958
    // cmp r0, #0
    // bne _0225A942
    // cmp r4, #1
    // bne _0225A926
    // ldr r0, [r5, #0xc]
    // add r1, sp, #8
    // add r2, sp, #4
    // bl NNS_G3dTexReleaseTexKey
    // ldr r1, _0225A950 ; =NNS_GfdDefaultFuncFreeTexVram
    // ldr r0, [sp, #8]
    // ldr r1, [r1]
    // blx r1
    // ldr r1, _0225A950 ; =NNS_GfdDefaultFuncFreeTexVram
    // ldr r0, [sp, #4]
    // ldr r1, [r1]
    // blx r1
    // ldr r0, [r5, #0xc]
    // bl NNS_G3dPlttReleasePlttKey
    // ldr r1, _0225A954 ; =NNS_GfdDefaultFuncFreePlttVram
    // ldr r1, [r1]
    // blx r1
    // ldr r0, [r5]
    // cmp r0, #0
    // beq _0225A930
    // bl Heap_Free
    // mov r1, #0x10
    // mov r0, #0
    // strb r0, [r5]
    // add r5, r5, #1
    // sub r1, r1, #1
    // bne _0225A934
    // add sp, #0xc
    // mov r0, #0
    // pop {r4, r5, r6, r7, pc}
    // ldr r0, [r5]
    // ldr r1, [r5, #0xc]
    // bl GF3dRender_BindModelSet
    // mov r0, #1
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // _0225A950: .word NNS_GfdDefaultFuncFreeTexVram
    // _0225A954: .word NNS_GfdDefaultFuncFreePlttVram
    // TODO: decompile
}


void ov89_0225A958(void) {
    // push {r4, r5}
    // ldr r2, _0225A984 ; =0x000004B4
    // mov r4, #0
    // add r5, r0, #0
    // ldr r3, [r5, r2]
    // cmp r3, #0
    // bne _0225A974
    // lsl r2, r4, #2
    // add r2, r0, r2
    // ldr r0, _0225A984 ; =0x000004B4
    // str r1, [r2, r0]
    // mov r0, #1
    // pop {r4, r5}
    // bx lr
    // add r4, r4, #1
    // add r5, r5, #4
    // cmp r4, #0x20
    // blt _0225A960
    // mov r0, #0
    // pop {r4, r5}
    // bx lr
    // nop
    // _0225A984: .word 0x000004B4
    // TODO: decompile
}


void ov89_0225A988(void) {
    // push {r4, r5}
    // ldr r2, _0225A9B0 ; =0x000004B4
    // mov r4, #0
    // add r5, r0, #0
    // ldr r3, [r5, r2]
    // cmp r3, r1
    // bne _0225A9A4
    // lsl r1, r4, #2
    // add r1, r0, r1
    // ldr r0, _0225A9B0 ; =0x000004B4
    // mov r2, #0
    // str r2, [r1, r0]
    // pop {r4, r5}
    // bx lr
    // add r4, r4, #1
    // add r5, r5, #4
    // cmp r4, #0x20
    // blt _0225A990
    // pop {r4, r5}
    // bx lr
    // _0225A9B0: .word 0x000004B4
    // TODO: decompile
}


void ov89_0225A9B4(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // mov r1, #0
    // str r1, [r5, #8]
    // bl NNS_G3dTexGetRequiredSize
    // add r4, r0, #0
    // add r0, r5, #0
    // bl NNS_G3dPlttGetRequiredSize
    // ldr r3, _0225AA18 ; =NNS_GfdDefaultFuncAllocTexVram
    // mov r1, #0
    // add r6, r0, #0
    // ldr r3, [r3]
    // add r0, r4, #0
    // add r2, r1, #0
    // blx r3
    // add r4, r0, #0
    // bne _0225A9DE
    // mov r0, #0
    // pop {r4, r5, r6, pc}
    // ldr r3, _0225AA1C ; =NNS_GfdDefaultFuncAllocPlttVram
    // mov r1, #2
    // ldrh r2, [r5, #0x20]
    // lsl r1, r1, #0xe
    // ldr r3, [r3]
    // and r1, r2
    // add r0, r6, #0
    // mov r2, #0
    // blx r3
    // add r6, r0, #0
    // bne _0225AA00
    // ldr r1, _0225AA20 ; =NNS_GfdDefaultFuncFreeTexVram
    // add r0, r4, #0
    // ldr r1, [r1]
    // blx r1
    // mov r0, #0
    // pop {r4, r5, r6, pc}
    // add r0, r5, #0
    // add r1, r4, #0
    // mov r2, #0
    // bl NNS_G3dTexSetTexKey
    // add r0, r5, #0
    // add r1, r6, #0
    // bl NNS_G3dPlttSetPlttKey
    // mov r0, #1
    // pop {r4, r5, r6, pc}
    // nop
    // _0225AA18: .word NNS_GfdDefaultFuncAllocTexVram
    // _0225AA1C: .word NNS_GfdDefaultFuncAllocPlttVram
    // _0225AA20: .word NNS_GfdDefaultFuncFreeTexVram
    // TODO: decompile
}


void ov89_0225AA24(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x24
    // add r4, r1, #0
    // add r1, r3, #0
    // str r0, [sp, #4]
    // add r5, r2, #0
    // ldrh r0, [r3, #2]
    // ldrb r1, [r1, #8]
    // ldr r2, [sp, #0x38]
    // str r3, [sp, #8]
    // bl ov89_0225C88C
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #4]
    // ldr r1, [r0, #0x14]
    // add r0, r0, r1
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x14]
    // cmp r0, #1
    // bne _0225AA68
    // mov r2, #1
    // ldr r1, [sp, #8]
    // str r2, [sp]
    // ldrh r1, [r1, #2]
    // add r0, r5, #0
    // mov r3, #0x7d
    // add r1, r1, #3
    // bl GfGfxLoader_LoadFromOpenNarc
    // add r1, sp, #0x20
    // str r0, [sp, #0x18]
    // bl NNS_G2dGetUnpackedCharacterData
    // b _0225AA80
    // mov r0, #1
    // str r0, [sp]
    // add r0, r4, #0
    // mov r1, #0x10
    // mov r2, #0
    // mov r3, #0x7d
    // bl GfGfxLoader_LoadFromOpenNarc
    // add r1, sp, #0x20
    // str r0, [sp, #0x18]
    // bl NNS_G2dGetUnpackedCharacterData
    // ldr r1, [sp, #0x1c]
    // mov r0, #0
    // mov r2, #0x40
    // bl MIi_CpuClear16
    // ldr r0, [sp, #0x20]
    // ldr r2, [sp, #0x1c]
    // ldr r1, [r0, #0x14]
    // mov r0, #0
    // str r1, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x10]
    // cmp r0, #3
    // bhi _0225AB00
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0225AAA8: ; jump table
    // ldr r0, [sp, #0x14]
    // cmp r0, #1
    // bne _0225AABC
    // ldr r1, [sp, #0xc]
    // add r1, #0x80
    // b _0225AABE
    // ldr r1, [sp, #0xc]
    // ldr r2, [sp, #0x1c]
    // b _0225AB00
    // ldr r0, [sp, #0x14]
    // cmp r0, #1
    // bne _0225AACE
    // ldr r1, [sp, #0xc]
    // add r1, #0xa0
    // b _0225AAD2
    // ldr r1, [sp, #0xc]
    // add r1, #0x20
    // ldr r0, [sp, #0x1c]
    // add r2, r0, #2
    // b _0225AB00
    // ldr r0, [sp, #0x14]
    // cmp r0, #1
    // bne _0225AAE2
    // ldr r1, [sp, #0xc]
    // b _0225AAE6
    // ldr r1, [sp, #0xc]
    // add r1, #0x40
    // ldr r2, [sp, #0x1c]
    // add r2, #0x20
    // b _0225AB00
    // ldr r0, [sp, #0x14]
    // cmp r0, #1
    // bne _0225AAF8
    // ldr r1, [sp, #0xc]
    // add r1, #0x20
    // b _0225AAFC
    // ldr r1, [sp, #0xc]
    // add r1, #0x60
    // ldr r2, [sp, #0x1c]
    // add r2, #0x22
    // mov r5, #0
    // mov ip, r5
    // mov r0, #0
    // add r7, r0, #0
    // ldrb r4, [r1, r5]
    // mov r3, #0xf
    // tst r3, r4
    // beq _0225AB1A
    // mov r3, #1
    // ldrh r4, [r2]
    // lsl r3, r0
    // orr r3, r4
    // strh r3, [r2]
    // ldrb r4, [r1, r5]
    // mov r3, #0xf0
    // tst r3, r4
    // beq _0225AB2E
    // ldrh r6, [r2]
    // add r4, r0, #2
    // mov r3, #1
    // lsl r3, r4
    // orr r3, r6
    // strh r3, [r2]
    // add r7, r7, #1
    // add r0, r0, #4
    // add r5, r5, #1
    // cmp r7, #4
    // blt _0225AB08
    // mov r0, ip
    // add r0, r0, #1
    // add r2, r2, #4
    // mov ip, r0
    // cmp r0, #8
    // blt _0225AB04
    // ldr r0, [sp, #0x10]
    // add r0, r0, #1
    // str r0, [sp, #0x10]
    // cmp r0, #4
    // blt _0225AA96
    // ldr r0, [sp, #8]
    // ldrh r2, [r0]
    // ldr r0, [sp, #4]
    // ldr r1, [r0, #0x38]
    // add r0, r0, r1
    // strh r2, [r0, #2]
    // ldr r0, [sp, #0x18]
    // bl Heap_Free
    // add sp, #0x24
    // pop {r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov89_0225AB64(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // str r0, [sp]
    // ldr r0, [r0, #0x14]
    // add r4, r1, #0
    // str r0, [sp, #8]
    // mov r0, #0x7d
    // mov r1, #0x40
    // bl Heap_Alloc
    // str r0, [sp, #4]
    // ldr r1, [sp]
    // ldr r0, [sp, #8]
    // mov r2, #0x40
    // add r0, r1, r0
    // ldr r1, [sp, #4]
    // bl MIi_CpuCopy16
    // ldr r2, [sp]
    // ldr r1, [sp, #8]
    // mov r0, #0
    // add r1, r2, r1
    // mov r2, #0x40
    // bl MIi_CpuClear16
    // cmp r4, #3
    // beq _0225ABA0
    // cmp r4, #4
    // beq _0225ABD0
    // b _0225AC06
    // ldr r3, [sp, #4]
    // mov r2, #0x1e
    // mov r7, #0
    // mov r5, #3
    // ldr r4, [sp]
    // ldr r0, [sp, #8]
    // mov r1, #0
    // add r4, r4, r0
    // ldr r6, [r3]
    // ldr r0, [r4]
    // lsr r6, r1
    // and r6, r5
    // lsl r6, r2
    // orr r0, r6
    // add r1, r1, #2
    // stmia r4!, {r0}
    // cmp r1, #0x20
    // blt _0225ABB0
    // add r7, r7, #1
    // sub r2, r2, #2
    // add r3, r3, #4
    // cmp r7, #0x10
    // blt _0225ABA8
    // b _0225AC06
    // ldr r2, [sp]
    // ldr r0, [sp, #8]
    // mov r3, #0
    // add r0, r2, r0
    // add r0, #0x3c
    // ldr r1, [sp, #4]
    // add r7, r3, #0
    // mov ip, r0
    // mov r6, #3
    // mov r4, #0
    // mov r2, ip
    // ldr r5, [r1]
    // ldr r0, [r2]
    // lsr r5, r4
    // and r5, r6
    // lsl r5, r3
    // orr r0, r5
    // str r0, [r2]
    // add r4, r4, #2
    // sub r2, r2, #4
    // cmp r4, #0x20
    // blt _0225ABE6
    // add r7, r7, #1
    // add r3, r3, #2
    // add r1, r1, #4
    // cmp r7, #0x10
    // blt _0225ABE2
    // ldr r0, [sp, #4]
    // bl Heap_Free
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov89_0225AC10(void) {
    sub_02018068();
    Heap_Free(r4);
}


void ov89_0225AC24(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // mov r0, #9
    // add r4, r1, #0
    // lsl r0, r0, #6
    // ldr r0, [r4, r0]
    // add r6, r2, #0
    // lsl r1, r0, #0x1c
    // lsr r1, r1, #0x1c
    // beq _0225AC40
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x1c
    // cmp r0, #1
    // bne _0225AC48
    // ldr r1, [r4, #0x18]
    // add r0, r5, #0
    // bl ov89_0225A988
    // mov r1, #9
    // lsl r1, r1, #6
    // ldr r1, [r4, r1]
    // add r0, r5, #0
    // lsr r1, r1, #0x18
    // bl ov89_0225AF7C
    // add r0, r4, #0
    // bl ov89_0225AC10
    // lsl r0, r6, #2
    // add r0, r5, r0
    // mov r1, #0
    // add r0, #0xb4
    // str r1, [r0]
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void ov89_0225AC68(void) {
    // push {r4, r5, r6, r7}
    // add r0, r2, #0
    // asr r2, r1, #3
    // lsr r2, r2, #0x1c
    // add r2, r1, r2
    // add r5, r3, #0
    // asr r3, r2, #4
    // ldr r4, [sp, #0x10]
    // cmp r3, #0x11
    // blo _0225AC7E
    // mov r3, #0x10
    // ldr r2, _0225ACF8 ; =ov89_0225CD6C
    // lsl r6, r3, #2
    // ldr r7, [r2, r6]
    // cmp r3, #0x10
    // str r7, [r5]
    // bhs _0225ACB4
    // ldr r2, [r5]
    // lsl r6, r1, #0x1c
    // mov ip, r2
    // lsr r2, r1, #0x1f
    // sub r6, r6, r2
    // mov r1, #0x1c
    // ror r6, r1
    // add r1, r2, r6
    // add r2, r3, #1
    // lsl r3, r2, #2
    // ldr r2, _0225ACF8 ; =ov89_0225CD6C
    // ldr r2, [r2, r3]
    // sub r3, r2, r7
    // asr r2, r3, #3
    // lsr r2, r2, #0x1c
    // add r2, r3, r2
    // asr r2, r2, #4
    // mul r2, r1
    // mov r1, ip
    // add r1, r1, r2
    // str r1, [r5]
    // asr r1, r0, #3
    // lsr r1, r1, #0x1c
    // add r1, r0, r1
    // asr r6, r1, #4
    // cmp r6, #0xb
    // blo _0225ACC2
    // mov r6, #0xa
    // ldr r5, _0225ACFC ; =ov89_0225CCE4
    // lsl r1, r6, #2
    // ldr r3, [r5, r1]
    // cmp r6, #0xa
    // str r3, [r4]
    // bhs _0225ACF2
    // lsr r1, r0, #0x1f
    // lsl r7, r0, #0x1c
    // sub r7, r7, r1
    // mov r0, #0x1c
    // ror r7, r0
    // add r0, r1, r7
    // add r1, r6, #1
    // lsl r1, r1, #2
    // ldr r1, [r5, r1]
    // ldr r2, [r4]
    // sub r3, r1, r3
    // asr r1, r3, #3
    // lsr r1, r1, #0x1c
    // add r1, r3, r1
    // asr r1, r1, #4
    // mul r1, r0
    // add r0, r2, r1
    // str r0, [r4]
    // pop {r4, r5, r6, r7}
    // bx lr
    // nop
    // _0225ACF8: .word ov89_0225CD6C
    // _0225ACFC: .word ov89_0225CCE4
    // TODO: decompile
}


void ov89_0225AD00(void) {
    // push {r3, r4, r5, r6}
    // ldr r2, _0225AD5C ; =0x00000534
    // mov r1, #1
    // ldr r5, [r0, r2]
    // add r3, r1, #0
    // add r4, r3, #0
    // lsl r4, r1
    // add r2, r5, #0
    // tst r2, r4
    // bne _0225AD22
    // ldr r2, _0225AD5C ; =0x00000534
    // ldr r3, [r0, r2]
    // orr r3, r4
    // str r3, [r0, r2]
    // add r0, r1, #0
    // pop {r3, r4, r5, r6}
    // bx lr
    // add r1, r1, #1
    // cmp r1, #0x20
    // blt _0225AD0A
    // mov r5, #0
    // cmp r1, #0x3f
    // bge _0225AD54
    // ldr r2, _0225AD60 ; =0x00000538
    // mov r3, #1
    // ldr r6, [r0, r2]
    // add r4, r3, #0
    // lsl r4, r5
    // add r2, r6, #0
    // tst r2, r4
    // bne _0225AD4C
    // ldr r2, _0225AD60 ; =0x00000538
    // ldr r3, [r0, r2]
    // orr r3, r4
    // str r3, [r0, r2]
    // add r0, r1, #0
    // pop {r3, r4, r5, r6}
    // bx lr
    // add r1, r1, #1
    // add r5, r5, #1
    // cmp r1, #0x3f
    // blt _0225AD34
    // mov r0, #0xff
    // pop {r3, r4, r5, r6}
    // bx lr
    // nop
    // _0225AD5C: .word 0x00000534
    // _0225AD60: .word 0x00000538
    // TODO: decompile
}


void ov89_0225AD64(void) {
    // push {r4, r5}
    // cmp r1, #0xff
    // beq _0225AD98
    // cmp r1, #0x20
    // bge _0225AD84
    // mov r3, #1
    // ldr r2, _0225AD9C ; =0x00000534
    // add r4, r3, #0
    // lsl r4, r1
    // sub r1, r3, #2
    // ldr r5, [r0, r2]
    // eor r1, r4
    // and r1, r5
    // str r1, [r0, r2]
    // pop {r4, r5}
    // bx lr
    // mov r3, #1
    // ldr r2, _0225ADA0 ; =0x00000538
    // sub r1, #0x20
    // add r4, r3, #0
    // lsl r4, r1
    // sub r1, r3, #2
    // ldr r5, [r0, r2]
    // eor r1, r4
    // and r1, r5
    // str r1, [r0, r2]
    // pop {r4, r5}
    // bx lr
    // _0225AD9C: .word 0x00000534
    // _0225ADA0: .word 0x00000538
    // TODO: decompile
}


void ov89_0225ADA4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x18
    // add r4, r0, #0
    // ldrh r0, [r1, #2]
    // ldrb r1, [r1, #8]
    // add r5, r2, #0
    // add r6, r3, #0
    // bl ov89_0225C8BC
    // add r7, r0, #0
    // cmp r7, #3
    // blo _0225ADC0
    // bl GF_AssertFail
    // add r0, r4, #0
    // add r1, sp, #0x14
    // add r2, sp, #0x10
    // add r3, sp, #0xc
    // bl sub_020182B0
    // ldr r1, _0225AE98 ; =ov89_0225CD3C
    // lsl r0, r7, #4
    // ldr r2, [sp, #0x14]
    // ldr r1, [r1, r0]
    // add r1, r2, r1
    // str r1, [r5]
    // ldr r1, _0225AE9C ; =ov89_0225CD40
    // ldr r2, [sp, #0x14]
    // ldr r1, [r1, r0]
    // add r1, r2, r1
    // str r1, [r5, #4]
    // ldr r1, _0225AEA0 ; =ov89_0225CD44
    // ldr r2, [sp, #0x10]
    // ldr r1, [r1, r0]
    // add r1, r2, r1
    // str r1, [r5, #8]
    // ldr r1, _0225AEA4 ; =ov89_0225CD48
    // ldr r2, [sp, #0x10]
    // ldr r0, [r1, r0]
    // add r0, r2, r0
    // str r0, [r5, #0xc]
    // cmp r6, #1
    // bne _0225AE92
    // add r0, r4, #0
    // add r1, sp, #8
    // add r2, sp, #4
    // add r3, sp, #0
    // bl sub_020182CC
    // ldr r1, [r5, #4]
    // ldr r0, [r5]
    // mov r2, #0x64
    // sub r4, r1, r0
    // ldr r0, [sp, #8]
    // mov r3, #0
    // asr r1, r0, #0x1f
    // asr r6, r4, #0x1f
    // bl _ll_mul
    // mov r2, #1
    // lsl r2, r2, #0xc
    // mov r3, #0
    // bl _ll_sdiv
    // add r2, r4, #0
    // add r3, r6, #0
    // bl _ll_mul
    // mov r2, #0x64
    // mov r3, #0
    // bl _ll_sdiv
    // sub r0, r0, r4
    // sbc r1, r6
    // mov r2, #2
    // mov r3, #0
    // bl _ll_sdiv
    // ldr r1, [r5, #4]
    // mov r2, #0x64
    // add r1, r1, r0
    // str r1, [r5, #4]
    // ldr r1, [r5]
    // mov r3, #0
    // sub r0, r1, r0
    // str r0, [r5]
    // ldr r1, [r5, #8]
    // ldr r0, [r5, #0xc]
    // sub r4, r1, r0
    // ldr r0, [sp, #4]
    // asr r6, r4, #0x1f
    // asr r1, r0, #0x1f
    // bl _ll_mul
    // mov r2, #1
    // lsl r2, r2, #0xc
    // mov r3, #0
    // bl _ll_sdiv
    // add r2, r4, #0
    // add r3, r6, #0
    // bl _ll_mul
    // mov r2, #0x64
    // mov r3, #0
    // bl _ll_sdiv
    // sub r0, r0, r4
    // sbc r1, r6
    // mov r2, #2
    // mov r3, #0
    // bl _ll_sdiv
    // ldr r1, [r5, #8]
    // add r1, r1, r0
    // str r1, [r5, #8]
    // ldr r1, [r5, #0xc]
    // sub r0, r1, r0
    // str r0, [r5, #0xc]
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0225AE98: .word ov89_0225CD3C
    // _0225AE9C: .word ov89_0225CD40
    // _0225AEA0: .word ov89_0225CD44
    // _0225AEA4: .word ov89_0225CD48
    // TODO: decompile
}


void ov89_0225AEA8(void) {
    // ldr r3, [r0]
    // ldr r2, [r1, #4]
    // cmp r3, r2
    // bgt _0225AECC
    // ldr r3, [r1]
    // ldr r2, [r0, #4]
    // cmp r3, r2
    // bgt _0225AECC
    // ldr r3, [r0, #8]
    // ldr r2, [r1, #0xc]
    // cmp r3, r2
    // blt _0225AECC
    // ldr r1, [r1, #8]
    // ldr r0, [r0, #0xc]
    // cmp r1, r0
    // blt _0225AECC
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // TODO: decompile
}


void ov89_0225AED0(void) {
    // push {r3, r4, r5, lr}
    // ldr r2, _0225AF08 ; =0x0000053C
    // add r2, r0, r2
    // mov r0, #0
    // ldrb r3, [r2, #1]
    // cmp r3, #0
    // bne _0225AEFA
    // mov r4, #9
    // lsl r4, r4, #6
    // ldr r5, [r1, r4]
    // ldr r3, _0225AF0C ; =0x00FFFFFF
    // lsl r0, r0, #0x18
    // and r3, r5
    // orr r0, r3
    // str r0, [r1, r4]
    // mov r0, #0
    // strb r0, [r2]
    // ldrb r0, [r2, #1]
    // add r0, r0, #1
    // strb r0, [r2, #1]
    // pop {r3, r4, r5, pc}
    // add r0, r0, #1
    // add r2, r2, #4
    // cmp r0, #0x80
    // blt _0225AED8
    // bl GF_AssertFail
    // pop {r3, r4, r5, pc}
    // _0225AF08: .word 0x0000053C
    // _0225AF0C: .word 0x00FFFFFF
    // TODO: decompile
}


void ov89_0225AF10(void) {
    // push {r3, r4, r5, lr}
    // add r3, r0, #0
    // add r0, r2, #0
    // cmp r1, #0xff
    // bne _0225AF1E
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // ldr r2, _0225AF70 ; =0x0000053C
    // lsl r4, r1, #2
    // add r5, r3, r2
    // ldrb r1, [r5, r4]
    // add r1, r1, #1
    // strb r1, [r5, r4]
    // add r1, r2, #1
    // add r5, r3, r1
    // ldrb r1, [r5, r4]
    // add r1, r1, #1
    // strb r1, [r5, r4]
    // ldr r1, _0225AF74 ; =0x0000073C
    // ldrb r5, [r3, r1]
    // cmp r5, #0
    // bne _0225AF6A
    // add r5, r1, #1
    // ldrb r5, [r3, r5]
    // cmp r5, #0
    // bne _0225AF6A
    // add r4, r3, r4
    // ldrb r2, [r4, r2]
    // add r4, r1, #3
    // ldrb r4, [r3, r4]
    // lsl r5, r4, #1
    // ldr r4, _0225AF78 ; =ov89_0225CCD0
    // ldrsh r4, [r4, r5]
    // cmp r2, r4
    // blt _0225AF6A
    // add r1, r1, #1
    // strb r0, [r3, r1]
    // add r3, #0xb0
    // add r0, r3, #0
    // mov r1, #0
    // mov r2, #4
    // bl MI_CpuFill8
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // nop
    // _0225AF70: .word 0x0000053C
    // _0225AF74: .word 0x0000073C
    // _0225AF78: .word ov89_0225CCD0
    // TODO: decompile
}


void ov89_0225AF7C(void) {
    GF_AssertFail(0);
}


void ov89_0225AF9C(void) {
    // push {r4, lr}
    // mov r1, #0
    // mov r2, #0xb0
    // add r4, r0, #0
    // bl MI_CpuFill8
    // ldr r1, _0225AFBC ; =0x0000073D
    // ldrb r2, [r4, r1]
    // sub r0, r1, #1
    // strb r2, [r4, r0]
    // mov r2, #0
    // strb r2, [r4, r1]
    // add r0, r1, #1
    // strb r2, [r4, r0]
    // pop {r4, pc}
    // nop
    // _0225AFBC: .word 0x0000073D
    // TODO: decompile
}


void ov89_0225AFC0(void) {
    // push {r4, lr}
    // mov r2, #9
    // lsl r2, r2, #6
    // ldr r3, [r0, r2]
    // lsl r4, r3, #0x10
    // lsr r4, r4, #0x18
    // bne _0225AFDA
    // lsl r4, r3, #8
    // lsr r4, r4, #0x18
    // bne _0225AFDA
    // lsl r4, r3, #0x1c
    // lsr r4, r4, #0x1c
    // bne _0225AFDE
    // mov r0, #0
    // pop {r4, pc}
    // ldr r4, _0225AFF8 ; =0xFF00FFFF
    // lsl r1, r1, #0x18
    // and r3, r4
    // lsr r1, r1, #8
    // orr r1, r3
    // str r1, [r0, r2]
    // add r0, #0x94
    // mov r1, #0
    // sub r2, #0x94
    // bl MI_CpuFill8
    // mov r0, #1
    // pop {r4, pc}
    // _0225AFF8: .word 0xFF00FFFF
    // TODO: decompile
}


void ov89_0225AFFC(void) {
    GetNatureFromPersonality();
}


void ov89_0225B010(void) {
    // push {r4, r5, r6, lr}
    // add r5, r1, #0
    // add r6, r0, #0
    // add r0, r5, #0
    // add r0, #0x94
    // ldr r0, [r0]
    // add r4, r5, #0
    // add r2, r0, #1
    // add r0, r5, #0
    // add r0, #0x94
    // str r2, [r0]
    // add r0, r5, #0
    // add r0, #0x94
    // ldr r0, [r0]
    // add r4, #0x94
    // cmp r0, #2
    // bne _0225B058
    // add r0, r5, #0
    // add r0, #0x1c
    // add r2, r4, #4
    // mov r3, #0
    // bl ov89_0225ADA4
    // add r0, r5, #0
    // add r0, #0x1c
    // mov r1, #1
    // bl sub_020182A0
    // mov r1, #9
    // lsl r1, r1, #6
    // ldr r2, [r5, r1]
    // mov r0, #0xf
    // bic r2, r0
    // mov r0, #1
    // orr r0, r2
    // str r0, [r5, r1]
    // ldr r0, [r4]
    // cmp r0, #0x28
    // ble _0225B074
    // add r0, r6, #0
    // add r1, r5, #0
    // bl ov89_0225AED0
    // add r0, r5, #0
    // bl ov89_0225AFFC
    // add r1, r0, #0
    // add r0, r5, #0
    // bl ov89_0225AFC0
    // mov r0, #0
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


u8 ov89_0225B078(void) {
    return 0;
}


void ov89_0225B07C(void) {
    // push {r3, r4, r5, lr}
    // add r5, r1, #0
    // add r4, r5, #0
    // add r4, #0x94
    // ldrb r1, [r4, #8]
    // cmp r1, #0
    // beq _0225B090
    // cmp r1, #1
    // beq _0225B0A8
    // b _0225B0E2
    // mov r1, #0x1f
    // lsl r1, r1, #8
    // str r1, [r4]
    // bl ov89_0225AD00
    // strb r0, [r4, #9]
    // mov r0, #1
    // lsl r0, r0, #0xc
    // str r0, [r4, #4]
    // ldrb r0, [r4, #8]
    // add r0, r0, #1
    // strb r0, [r4, #8]
    // ldr r0, [r4, #4]
    // mov r3, #1
    // add r0, #0xc0
    // str r0, [r4, #4]
    // ldr r0, [r4]
    // lsl r3, r3, #8
    // add r1, r0, #0
    // sub r1, #0xc0
    // cmp r1, r3
    // bge _0225B0CE
    // add r0, r5, #0
    // add r0, #0x1c
    // mov r1, #0
    // bl sub_020182A0
    // ldrb r0, [r4, #8]
    // add r0, r0, #1
    // strb r0, [r4, #8]
    // b _0225B0EC
    // sub r0, #0xc0
    // str r0, [r4]
    // ldr r1, [r4, #4]
    // add r0, r5, #0
    // add r0, #0x1c
    // add r2, r1, #0
    // lsl r3, r3, #4
    // bl sub_020182C4
    // b _0225B0EC
    // ldrb r1, [r4, #9]
    // bl ov89_0225AD64
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // add r0, r5, #0
    // add r4, #0xc
    // add r0, #0x1c
    // add r1, r5, #0
    // add r2, r4, #0
    // mov r3, #1
    // bl ov89_0225ADA4
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov89_0225B100(void) {
    // push {r4, lr}
    // sub sp, #8
    // add r4, r1, #0
    // add r0, r4, #0
    // add r0, #0x94
    // ldrb r3, [r0, #9]
    // cmp r3, #0xff
    // beq _0225B13A
    // ldr r0, [r0]
    // asr r0, r0, #8
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // add r1, r0, #0
    // add r2, r0, #0
    // bl NNS_G3dGlbPolygonAttr
    // mov r2, #0x3f
    // ldr r0, [r4, #0x14]
    // mov r1, #0
    // lsl r2, r2, #0x18
    // bl NNSi_G3dModifyPolygonAttrMask
    // mov r2, #0x1f
    // ldr r0, [r4, #0x14]
    // mov r1, #0
    // lsl r2, r2, #0x10
    // bl NNSi_G3dModifyPolygonAttrMask
    // add r4, #0x1c
    // add r0, r4, #0
    // bl sub_020181EC
    // add sp, #8
    // pop {r4, pc}
    // TODO: decompile
}


void ov89_0225B148(void) {
    ov89_0225AEA8(0, 1);
}


void ov89_0225B164(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // add r4, r1, #0
    // ldr r0, _0225B294 ; =0x0000016A
    // add r4, #0x94
    // ldrb r0, [r4, r0]
    // str r1, [sp]
    // cmp r0, #0
    // beq _0225B17C
    // cmp r0, #1
    // beq _0225B1B6
    // b _0225B258
    // add r0, r1, #0
    // add r0, #0x1c
    // add r1, sp, #0xc
    // add r2, sp, #8
    // add r3, sp, #4
    // bl sub_020182B0
    // ldr r7, [sp]
    // mov r6, #0
    // add r5, r4, #0
    // add r7, #0xc
    // add r0, r5, #0
    // add r1, r7, #0
    // bl sub_020181B0
    // ldr r1, [sp, #0xc]
    // ldr r2, [sp, #8]
    // ldr r3, [sp, #4]
    // add r0, r5, #0
    // bl sub_020182A8
    // add r6, r6, #1
    // add r5, #0x78
    // cmp r6, #3
    // blt _0225B192
    // ldr r0, _0225B294 ; =0x0000016A
    // ldrb r1, [r4, r0]
    // add r1, r1, #1
    // strb r1, [r4, r0]
    // ldr r0, [sp]
    // add r1, sp, #0xc
    // add r0, #0x1c
    // add r2, sp, #8
    // add r3, sp, #4
    // bl sub_020182B0
    // mov r2, #2
    // ldr r0, [sp]
    // ldr r1, [sp, #0xc]
    // lsl r2, r2, #0xc
    // ldr r3, [sp, #8]
    // sub r1, r1, r2
    // sub r2, r3, r2
    // ldr r3, [sp, #4]
    // add r0, #0x1c
    // bl sub_020182A8
    // add r0, r4, #0
    // add r1, sp, #0xc
    // add r2, sp, #8
    // add r3, sp, #4
    // bl sub_020182B0
    // mov r2, #2
    // ldr r1, [sp, #0xc]
    // lsl r2, r2, #0xc
    // ldr r3, [sp, #8]
    // add r1, r1, r2
    // sub r2, r3, r2
    // ldr r3, [sp, #4]
    // add r0, r4, #0
    // bl sub_020182A8
    // add r0, r4, #0
    // add r0, #0x78
    // add r1, sp, #0xc
    // add r2, sp, #8
    // add r3, sp, #4
    // bl sub_020182B0
    // mov r2, #2
    // add r0, r4, #0
    // ldr r1, [sp, #0xc]
    // lsl r2, r2, #0xc
    // ldr r3, [sp, #8]
    // sub r1, r1, r2
    // add r2, r3, r2
    // ldr r3, [sp, #4]
    // add r0, #0x78
    // bl sub_020182A8
    // add r0, r4, #0
    // add r0, #0xf0
    // add r1, sp, #0xc
    // add r2, sp, #8
    // add r3, sp, #4
    // bl sub_020182B0
    // mov r2, #2
    // add r0, r4, #0
    // ldr r1, [sp, #0xc]
    // lsl r2, r2, #0xc
    // ldr r3, [sp, #8]
    // add r1, r1, r2
    // add r2, r3, r2
    // ldr r3, [sp, #4]
    // add r0, #0xf0
    // bl sub_020182A8
    // mov r0, #0x5a
    // lsl r0, r0, #2
    // ldrh r1, [r4, r0]
    // add r1, r1, #1
    // strh r1, [r4, r0]
    // ldrh r0, [r4, r0]
    // cmp r0, #0x1e
    // bls _0225B258
    // add sp, #0x10
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [sp]
    // mov r2, #0x5b
    // lsl r2, r2, #2
    // ldr r1, [sp]
    // add r0, #0x1c
    // add r2, r4, r2
    // mov r3, #0
    // bl ov89_0225ADA4
    // mov r0, #0x5b
    // mov r5, #0
    // lsl r0, r0, #2
    // add r6, r4, r0
    // add r7, r5, #0
    // add r2, r5, #1
    // lsl r2, r2, #4
    // ldr r1, [sp]
    // add r0, r4, #0
    // add r2, r6, r2
    // add r3, r7, #0
    // bl ov89_0225ADA4
    // add r5, r5, #1
    // add r4, #0x78
    // cmp r5, #3
    // blt _0225B274
    // mov r0, #0
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0225B294: .word 0x0000016A
    // TODO: decompile
}


void ov89_0225B298(void) {
    // push {r4, r5, r6, lr}
    // add r6, r1, #0
    // add r5, r6, #0
    // mov r4, #0
    // add r5, #0x94
    // add r0, r5, #0
    // bl sub_020181EC
    // add r4, r4, #1
    // add r5, #0x78
    // cmp r4, #3
    // blt _0225B2A2
    // add r6, #0x1c
    // add r0, r6, #0
    // bl sub_020181EC
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void ov89_0225B2BC(void) {
    // push {r4, r5, r6, lr}
    // mov r0, #2
    // add r6, r2, #0
    // lsl r0, r0, #8
    // add r6, #0x94
    // mov r4, #0
    // add r5, r1, r0
    // add r0, r5, #0
    // add r1, r6, #4
    // bl ov89_0225AEA8
    // cmp r0, #1
    // bne _0225B2DA
    // mov r0, #1
    // pop {r4, r5, r6, pc}
    // add r4, r4, #1
    // add r5, #0x10
    // cmp r4, #4
    // blt _0225B2CA
    // mov r0, #0
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void ov89_0225B2E8(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // add r5, r1, #0
    // add r7, r0, #0
    // add r0, r5, #0
    // add r0, #0x94
    // add r4, r5, #0
    // ldr r0, [r0]
    // add r4, #0x94
    // cmp r0, #3
    // bls _0225B300
    // b _0225B42E
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0225B30C: ; jump table
    // add r0, r5, #0
    // add r0, #0x1c
    // mov r1, #2
    // bl sub_020182EC
    // ldr r1, _0225B444 ; =0x00000AAA
    // sub r0, r0, r1
    // lsl r0, r0, #0x10
    // lsr r6, r0, #0x10
    // mov r0, #0xe
    // lsl r0, r0, #0xc
    // cmp r6, r0
    // bhi _0225B364
    // mov r1, #9
    // lsl r1, r1, #6
    // ldr r1, [r5, r1]
    // ldr r0, [r5, #0x18]
    // lsl r1, r1, #0x10
    // lsr r1, r1, #0x18
    // bl ov89_0225AB64
    // ldr r1, [r5, #0x18]
    // add r0, r7, #0
    // bl ov89_0225A958
    // mov r1, #9
    // lsl r1, r1, #6
    // ldr r2, [r5, r1]
    // mov r0, #0xf0
    // bic r2, r0
    // mov r0, #0x10
    // orr r2, r0
    // lsl r0, r0, #0xa
    // add r0, r6, r0
    // lsl r0, r0, #0x10
    // str r2, [r5, r1]
    // lsr r6, r0, #0x10
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // add r0, r5, #0
    // add r0, #0x1c
    // add r1, r6, #0
    // mov r2, #2
    // bl sub_020182E0
    // b _0225B42E
    // mov r1, #9
    // lsl r1, r1, #6
    // ldr r2, [r5, r1]
    // mov r0, #0xf0
    // bic r2, r0
    // add r0, r5, #0
    // str r2, [r5, r1]
    // add r0, #0x1c
    // mov r1, #2
    // bl sub_020182EC
    // ldr r1, _0225B444 ; =0x00000AAA
    // sub r0, r0, r1
    // lsl r0, r0, #0x10
    // lsr r1, r0, #0x10
    // mov r0, #3
    // lsl r0, r0, #0xe
    // cmp r1, r0
    // blo _0225B3A0
    // ldr r0, [r4]
    // mov r1, #0
    // add r0, r0, #1
    // str r0, [r4]
    // add r0, r5, #0
    // add r0, #0x1c
    // mov r2, #2
    // bl sub_020182E0
    // b _0225B42E
    // ldr r0, [r4, #4]
    // add r0, r0, #1
    // str r0, [r4, #4]
    // cmp r0, #4
    // blt _0225B42E
    // mov r0, #0
    // str r0, [r4, #4]
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // add r0, r5, #0
    // add r0, #0x1c
    // add r1, sp, #8
    // add r2, sp, #4
    // add r3, sp, #0
    // bl sub_020182B0
    // ldr r1, [sp, #8]
    // ldr r0, _0225B448 ; =0xFFFB0000
    // cmp r1, r0
    // blt _0225B3EE
    // mov r0, #5
    // lsl r0, r0, #0x10
    // cmp r1, r0
    // bgt _0225B3EE
    // mov r2, #3
    // ldr r3, [sp, #4]
    // lsl r2, r2, #0x10
    // cmp r3, r2
    // bgt _0225B3EE
    // ldr r0, _0225B44C ; =0xFFFD0000
    // cmp r3, r0
    // bge _0225B3F4
    // add sp, #0xc
    // mov r0, #1
    // pop {r4, r5, r6, r7, pc}
    // ldr r0, [r4, #8]
    // cmp r0, #5
    // bge _0225B40E
    // lsr r6, r2, #4
    // lsr r2, r2, #4
    // add r0, r5, #0
    // sub r2, r3, r2
    // ldr r3, [sp]
    // add r0, #0x1c
    // add r1, r1, r6
    // bl sub_020182A8
    // b _0225B420
    // lsr r6, r2, #4
    // lsr r2, r2, #4
    // add r0, r5, #0
    // add r2, r3, r2
    // ldr r3, [sp]
    // add r0, #0x1c
    // add r1, r1, r6
    // bl sub_020182A8
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // cmp r0, #0xa
    // blt _0225B42E
    // mov r0, #0
    // str r0, [r4, #8]
    // add r0, r5, #0
    // add r4, #0xc
    // add r0, #0x1c
    // add r1, r5, #0
    // add r2, r4, #0
    // mov r3, #0
    // bl ov89_0225ADA4
    // mov r0, #0
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // _0225B444: .word 0x00000AAA
    // _0225B448: .word 0xFFFB0000
    // _0225B44C: .word 0xFFFD0000
    // TODO: decompile
}


void ov89_0225B450(void) {
    ov89_0225AEA8(0, 1);
}


void ov89_0225B46C(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // add r5, r1, #0
    // add r7, r0, #0
    // add r0, r5, #0
    // add r0, #0x94
    // add r4, r5, #0
    // ldr r0, [r0]
    // add r4, #0x94
    // cmp r0, #3
    // bls _0225B484
    // b _0225B5DE
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0225B490: ; jump table
    // add r0, r5, #0
    // add r0, #0x1c
    // mov r1, #2
    // bl sub_020182EC
    // ldr r1, _0225B5F4 ; =0x00000AAA
    // add r0, r0, r1
    // lsl r0, r0, #0x10
    // lsr r6, r0, #0x10
    // mov r0, #2
    // lsl r0, r0, #0xc
    // cmp r6, r0
    // blo _0225B4EA
    // mov r1, #9
    // lsl r1, r1, #6
    // ldr r1, [r5, r1]
    // ldr r0, [r5, #0x18]
    // lsl r1, r1, #0x10
    // lsr r1, r1, #0x18
    // bl ov89_0225AB64
    // mov r0, #1
    // lsl r0, r0, #0xe
    // sub r0, r6, r0
    // lsl r0, r0, #0x10
    // lsr r6, r0, #0x10
    // ldr r1, [r5, #0x18]
    // add r0, r7, #0
    // bl ov89_0225A958
    // mov r1, #9
    // lsl r1, r1, #6
    // ldr r2, [r5, r1]
    // mov r0, #0xf0
    // bic r2, r0
    // mov r0, #0x10
    // orr r0, r2
    // str r0, [r5, r1]
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // add r0, r5, #0
    // add r0, #0x1c
    // add r1, r6, #0
    // mov r2, #2
    // bl sub_020182E0
    // b _0225B5DE
    // mov r1, #9
    // lsl r1, r1, #6
    // ldr r2, [r5, r1]
    // mov r0, #0xf0
    // bic r2, r0
    // add r0, r5, #0
    // str r2, [r5, r1]
    // add r0, #0x1c
    // mov r1, #2
    // bl sub_020182EC
    // ldr r1, _0225B5F4 ; =0x00000AAA
    // add r0, r0, r1
    // lsl r0, r0, #0x10
    // lsr r1, r0, #0x10
    // mov r0, #1
    // lsl r0, r0, #0xe
    // cmp r1, r0
    // bhs _0225B526
    // ldr r0, [r4]
    // mov r1, #0
    // add r0, r0, #1
    // str r0, [r4]
    // add r0, r5, #0
    // add r0, #0x1c
    // mov r2, #2
    // bl sub_020182E0
    // b _0225B5DE
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // cmp r0, #4
    // blt _0225B5DE
    // add r0, r5, #0
    // add r0, #0x1c
    // add r1, sp, #8
    // add r2, sp, #4
    // add r3, sp, #0
    // bl sub_020182B0
    // ldr r0, [sp, #4]
    // str r0, [r4, #0xc]
    // mov r0, #0
    // str r0, [r4, #8]
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // add r0, r5, #0
    // add r0, #0x1c
    // add r1, sp, #8
    // add r2, sp, #4
    // add r3, sp, #0
    // bl sub_020182B0
    // ldr r1, [sp, #8]
    // ldr r0, _0225B5F8 ; =0xFFFB0000
    // cmp r1, r0
    // blt _0225B586
    // mov r0, #5
    // lsl r0, r0, #0x10
    // cmp r1, r0
    // bgt _0225B586
    // mov r0, #3
    // ldr r1, [sp, #4]
    // lsl r0, r0, #0x10
    // cmp r1, r0
    // bgt _0225B586
    // ldr r0, _0225B5FC ; =0xFFFD0000
    // cmp r1, r0
    // bge _0225B58C
    // add sp, #0xc
    // mov r0, #1
    // pop {r4, r5, r6, r7, pc}
    // mov r0, #2
    // ldr r1, [r4, #4]
    // lsl r0, r0, #0xe
    // add r1, r1, r0
    // mov r0, #0x5a
    // lsl r0, r0, #0xe
    // str r1, [r4, #4]
    // cmp r1, r0
    // blt _0225B5A4
    // ldr r1, [r4, #4]
    // sub r0, r1, r0
    // str r0, [r4, #4]
    // ldr r0, [r4, #4]
    // bl GF_SinDegFX32
    // add r2, r0, #0
    // mov r1, #1
    // add r0, r5, #0
    // ldr r3, [sp, #8]
    // lsl r1, r1, #0xc
    // sub r1, r3, r1
    // asr r3, r2, #0x1f
    // lsr r6, r2, #0x11
    // lsl r3, r3, #0xf
    // orr r3, r6
    // mov r6, #1
    // lsl r6, r6, #0xc
    // lsl r2, r2, #0xf
    // lsr r6, r6, #1
    // add r0, #0x1c
    // add r6, r2, r6
    // ldr r2, _0225B600 ; =0x00000000
    // ldr r7, [r4, #0xc]
    // adc r3, r2
    // lsl r2, r3, #0x14
    // lsr r3, r6, #0xc
    // orr r3, r2
    // add r2, r7, r3
    // ldr r3, [sp]
    // bl sub_020182A8
    // add r0, r5, #0
    // add r4, #0x10
    // add r0, #0x1c
    // add r1, r5, #0
    // add r2, r4, #0
    // mov r3, #0
    // bl ov89_0225ADA4
    // mov r0, #0
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // _0225B5F4: .word 0x00000AAA
    // _0225B5F8: .word 0xFFFB0000
    // _0225B5FC: .word 0xFFFD0000
    // _0225B600: .word 0x00000000
    // TODO: decompile
}


void ov89_0225B604(void) {
    ov89_0225AEA8(0, 1);
}


void ov89_0225B620(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // add r4, r1, #0
    // str r1, [sp]
    // ldr r1, _0225B770 ; =0x0000016D
    // add r4, #0x94
    // ldrb r2, [r4, r1]
    // cmp r2, #0
    // beq _0225B638
    // cmp r2, #1
    // beq _0225B684
    // b _0225B74A
    // bl ov89_0225AD00
    // mov r1, #0x5b
    // lsl r1, r1, #2
    // strb r0, [r4, r1]
    // ldr r0, [sp]
    // add r1, sp, #0xc
    // add r0, #0x1c
    // add r2, sp, #8
    // add r3, sp, #4
    // bl sub_020182B0
    // ldr r7, [sp]
    // mov r6, #0
    // add r5, r4, #0
    // add r7, #0xc
    // add r0, r5, #0
    // add r1, r7, #0
    // bl sub_020181B0
    // ldr r1, [sp, #0xc]
    // ldr r2, [sp, #8]
    // ldr r3, [sp, #4]
    // add r0, r5, #0
    // bl sub_020182A8
    // add r0, r5, #0
    // mov r1, #0
    // bl sub_020182A0
    // add r6, r6, #1
    // add r5, #0x78
    // cmp r6, #3
    // blt _0225B658
    // ldr r0, _0225B770 ; =0x0000016D
    // ldrb r1, [r4, r0]
    // add r1, r1, #1
    // strb r1, [r4, r0]
    // ldr r0, [sp]
    // add r1, sp, #0xc
    // add r0, #0x1c
    // add r2, sp, #8
    // add r3, sp, #4
    // bl sub_020182B0
    // ldr r1, [sp, #0xc]
    // ldr r0, _0225B774 ; =0xFFFB0000
    // cmp r1, r0
    // blt _0225B6BA
    // mov r2, #5
    // lsl r2, r2, #0x10
    // cmp r1, r2
    // bgt _0225B6BA
    // mov r0, #3
    // ldr r3, [sp, #8]
    // lsl r0, r0, #0x10
    // cmp r3, r0
    // bgt _0225B6BA
    // ldr r0, _0225B778 ; =0xFFFD0000
    // cmp r3, r0
    // blt _0225B6BA
    // ldr r0, _0225B77C ; =0x0000016B
    // ldrb r0, [r4, r0]
    // cmp r0, #1
    // bne _0225B6E4
    // mov r6, #0
    // add r5, r4, #0
    // add r7, r6, #0
    // add r0, r5, #0
    // add r1, r7, #0
    // bl sub_020182A0
    // add r6, r6, #1
    // add r5, #0x78
    // cmp r6, #3
    // blt _0225B6C0
    // ldr r0, [sp]
    // mov r1, #0
    // add r0, #0x1c
    // bl sub_020182A0
    // ldr r0, _0225B770 ; =0x0000016D
    // ldrb r1, [r4, r0]
    // add r1, r1, #1
    // strb r1, [r4, r0]
    // b _0225B758
    // ldr r0, [sp]
    // lsr r2, r2, #5
    // add r2, r3, r2
    // ldr r3, [sp, #4]
    // add r0, #0x1c
    // bl sub_020182A8
    // mov r0, #0x5a
    // lsl r0, r0, #2
    // ldrh r0, [r4, r0]
    // mov r1, #3
    // bl _s32_div_f
    // cmp r1, #0
    // bne _0225B73E
    // ldr r0, _0225B780 ; =0x0000016A
    // mov r2, #0xa
    // ldrb r1, [r4, r0]
    // ldr r3, [sp, #8]
    // mov r0, #0x78
    // mul r0, r1
    // lsl r2, r2, #0xa
    // add r2, r3, r2
    // ldr r1, [sp, #0xc]
    // ldr r3, [sp, #4]
    // add r0, r4, r0
    // bl sub_020182A8
    // ldr r0, _0225B780 ; =0x0000016A
    // ldrb r1, [r4, r0]
    // mov r0, #0x78
    // mul r0, r1
    // add r0, r4, r0
    // mov r1, #1
    // bl sub_020182A0
    // ldr r0, _0225B780 ; =0x0000016A
    // ldrb r1, [r4, r0]
    // add r1, r1, #1
    // strb r1, [r4, r0]
    // ldrb r1, [r4, r0]
    // cmp r1, #3
    // blo _0225B73E
    // mov r1, #0
    // strb r1, [r4, r0]
    // mov r0, #0x5a
    // lsl r0, r0, #2
    // ldrh r1, [r4, r0]
    // add r1, r1, #1
    // strh r1, [r4, r0]
    // b _0225B758
    // sub r1, r1, #1
    // ldrb r1, [r4, r1]
    // bl ov89_0225AD64
    // add sp, #0x10
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [sp]
    // mov r2, #0x17
    // lsl r2, r2, #4
    // ldr r1, [sp]
    // add r0, #0x1c
    // add r2, r4, r2
    // mov r3, #0
    // bl ov89_0225ADA4
    // mov r0, #0
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // _0225B770: .word 0x0000016D
    // _0225B774: .word 0xFFFB0000
    // _0225B778: .word 0xFFFD0000
    // _0225B77C: .word 0x0000016B
    // _0225B780: .word 0x0000016A
    // TODO: decompile
}


void ov89_0225B784(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r6, r1, #0
    // add r7, r6, #0
    // mov r0, #0x5b
    // add r7, #0x94
    // lsl r0, r0, #2
    // ldrb r3, [r7, r0]
    // cmp r3, #0xff
    // beq _0225B7C0
    // mov r0, #8
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // add r1, r0, #0
    // add r2, r0, #0
    // bl NNS_G3dGlbPolygonAttr
    // mov r2, #0x3f
    // ldr r0, [r6, #0x14]
    // mov r1, #0
    // lsl r2, r2, #0x18
    // bl NNSi_G3dModifyPolygonAttrMask
    // mov r2, #0x1f
    // ldr r0, [r6, #0x14]
    // mov r1, #0
    // lsl r2, r2, #0x10
    // bl NNSi_G3dModifyPolygonAttrMask
    // mov r4, #0
    // add r5, r7, #0
    // add r0, r5, #0
    // bl sub_020181EC
    // add r4, r4, #1
    // add r5, #0x78
    // cmp r4, #3
    // blt _0225B7C4
    // mov r0, #0x5b
    // lsl r0, r0, #2
    // ldrb r3, [r7, r0]
    // cmp r3, #0xff
    // beq _0225B804
    // mov r0, #0x1f
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // add r1, r0, #0
    // add r2, r0, #0
    // bl NNS_G3dGlbPolygonAttr
    // mov r2, #0x3f
    // ldr r0, [r6, #0x14]
    // mov r1, #0
    // lsl r2, r2, #0x18
    // bl NNSi_G3dModifyPolygonAttrMask
    // mov r2, #0x1f
    // ldr r0, [r6, #0x14]
    // mov r1, #0
    // lsl r2, r2, #0x10
    // bl NNSi_G3dModifyPolygonAttrMask
    // add r6, #0x1c
    // add r0, r6, #0
    // bl sub_020181EC
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov89_0225B810(void) {
    ov89_0225AEA8(0, 0x81, 1);
}


void ov89_0225B82C(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // add r5, r1, #0
    // add r0, r5, #0
    // add r0, #0x94
    // ldr r0, [r0]
    // add r4, r5, #0
    // add r4, #0x94
    // cmp r0, #0
    // beq _0225B846
    // cmp r0, #1
    // beq _0225B85E
    // b _0225B8E0
    // add r0, r5, #0
    // add r0, #0x1c
    // add r1, sp, #8
    // add r2, sp, #4
    // add r3, sp, #0
    // bl sub_020182B0
    // ldr r0, [sp, #8]
    // str r0, [r4, #8]
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // add r0, r5, #0
    // add r0, #0x1c
    // add r1, sp, #8
    // add r2, sp, #4
    // add r3, sp, #0
    // bl sub_020182B0
    // ldr r1, [sp, #8]
    // ldr r0, _0225B8F8 ; =0xFFFB0000
    // cmp r1, r0
    // blt _0225B88C
    // mov r0, #5
    // lsl r0, r0, #0x10
    // cmp r1, r0
    // bgt _0225B88C
    // mov r0, #3
    // ldr r1, [sp, #4]
    // lsl r0, r0, #0x10
    // cmp r1, r0
    // bgt _0225B88C
    // ldr r0, _0225B8FC ; =0xFFFD0000
    // cmp r1, r0
    // bge _0225B892
    // add sp, #0xc
    // mov r0, #1
    // pop {r4, r5, r6, r7, pc}
    // mov r0, #2
    // ldr r1, [r4, #4]
    // lsl r0, r0, #0xe
    // add r1, r1, r0
    // mov r0, #0x5a
    // lsl r0, r0, #0xe
    // str r1, [r4, #4]
    // cmp r1, r0
    // blt _0225B8AA
    // ldr r1, [r4, #4]
    // sub r0, r1, r0
    // str r0, [r4, #4]
    // ldr r0, [r4, #4]
    // bl GF_SinDegFX32
    // add r2, r0, #0
    // asr r6, r2, #0x1f
    // mov r7, #2
    // add r0, r5, #0
    // lsr r3, r2, #0x11
    // lsl r6, r6, #0xf
    // orr r6, r3
    // lsl r3, r2, #0xf
    // mov r2, #0
    // lsl r7, r7, #0xa
    // add r0, #0x1c
    // add r3, r3, r7
    // adc r6, r2
    // ldr r1, [r4, #8]
    // lsl r2, r6, #0x14
    // lsr r3, r3, #0xc
    // orr r3, r2
    // add r1, r1, r3
    // ldr r3, [sp, #4]
    // lsl r2, r7, #1
    // sub r2, r3, r2
    // ldr r3, [sp]
    // bl sub_020182A8
    // add r0, r5, #0
    // add r4, #0xc
    // add r0, #0x1c
    // add r1, r5, #0
    // add r2, r4, #0
    // mov r3, #0
    // bl ov89_0225ADA4
    // mov r0, #0
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _0225B8F8: .word 0xFFFB0000
    // _0225B8FC: .word 0xFFFD0000
    // TODO: decompile
}


void ov89_0225B900(void) {
    ov89_0225AEA8(0, 1);
}


void ov89_0225B91C(void) {
    // push {r3, r4, r5, lr}
    // add r5, r1, #0
    // add r4, r5, #0
    // add r4, #0x94
    // ldrb r0, [r4, #6]
    // cmp r0, #0
    // beq _0225B930
    // cmp r0, #1
    // beq _0225B93C
    // b _0225B964
    // mov r0, #1
    // lsl r0, r0, #0xc
    // str r0, [r4]
    // ldrb r0, [r4, #6]
    // add r0, r0, #1
    // strb r0, [r4, #6]
    // ldrh r0, [r4, #4]
    // add r0, r0, #1
    // strh r0, [r4, #4]
    // ldrh r0, [r4, #4]
    // cmp r0, #8
    // bls _0225B94C
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // mov r0, #3
    // ldr r1, [r4]
    // lsl r0, r0, #8
    // add r1, r1, r0
    // add r0, r5, #0
    // mov r3, #1
    // add r0, #0x1c
    // add r2, r1, #0
    // lsl r3, r3, #0xc
    // str r1, [r4]
    // bl sub_020182C4
    // add r0, r5, #0
    // add r4, #8
    // add r0, #0x1c
    // add r1, r5, #0
    // add r2, r4, #0
    // mov r3, #1
    // bl ov89_0225ADA4
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov89_0225B978(void) {
    ov89_0225AEA8(0, 1);
}


void ov89_0225B994(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // add r4, r1, #0
    // add r4, #0x94
    // str r1, [sp]
    // add r1, r4, #0
    // add r1, #0xf7
    // ldrb r1, [r1]
    // cmp r1, #0
    // beq _0225B9AE
    // cmp r1, #1
    // beq _0225BA0A
    // b _0225BAE4
    // bl ov89_0225AD00
    // add r1, r4, #0
    // add r1, #0xf6
    // strb r0, [r1]
    // ldr r0, [sp]
    // add r1, sp, #0xc
    // add r0, #0x1c
    // add r2, sp, #8
    // add r3, sp, #4
    // bl sub_020182B0
    // ldr r7, [sp]
    // mov r6, #0
    // add r5, r4, #0
    // add r7, #0xc
    // add r0, r5, #0
    // add r1, r7, #0
    // bl sub_020181B0
    // ldr r1, [sp, #0xc]
    // ldr r2, [sp, #8]
    // ldr r3, [sp, #4]
    // add r0, r5, #0
    // bl sub_020182A8
    // add r0, r5, #0
    // mov r1, #1
    // bl sub_020182A0
    // add r6, r6, #1
    // add r5, #0x78
    // cmp r6, #2
    // blt _0225B9CE
    // mov r1, #0x1f
    // add r0, r4, #0
    // lsl r1, r1, #8
    // add r0, #0xf4
    // strh r1, [r0]
    // add r0, r4, #0
    // add r0, #0xf7
    // ldrb r0, [r0]
    // add r1, r0, #1
    // add r0, r4, #0
    // add r0, #0xf7
    // strb r1, [r0]
    // add r0, r4, #0
    // add r0, #0xf4
    // ldrh r0, [r0]
    // mov r2, #1
    // lsl r2, r2, #8
    // sub r0, #0xa0
    // cmp r0, r2
    // bge _0225BA4A
    // mov r6, #0
    // add r5, r4, #0
    // add r7, r6, #0
    // add r0, r5, #0
    // add r1, r7, #0
    // bl sub_020182A0
    // add r6, r6, #1
    // add r5, #0x78
    // cmp r6, #2
    // blt _0225BA20
    // ldr r0, [sp]
    // mov r1, #0
    // add r0, #0x1c
    // bl sub_020182A0
    // add r0, r4, #0
    // add r0, #0xf7
    // ldrb r0, [r0]
    // add r1, r0, #1
    // add r0, r4, #0
    // add r0, #0xf7
    // strb r1, [r0]
    // b _0225BAF2
    // add r0, r4, #0
    // add r0, #0xf4
    // ldrh r1, [r0]
    // add r0, r4, #0
    // add r0, #0xf4
    // sub r1, #0xa0
    // strh r1, [r0]
    // add r1, r4, #0
    // add r1, #0xf0
    // ldr r3, [r1]
    // lsl r1, r2, #9
    // add r2, r3, r1
    // add r1, r4, #0
    // add r1, #0xf0
    // str r2, [r1]
    // add r1, r4, #0
    // add r1, #0xf0
    // ldr r2, [r1]
    // mov r1, #0x5a
    // add r0, r4, #0
    // lsl r1, r1, #0xe
    // add r0, #0xf0
    // cmp r2, r1
    // blt _0225BA80
    // ldr r2, [r0]
    // sub r1, r2, r1
    // str r1, [r0]
    // add r0, r4, #0
    // add r0, #0xf0
    // ldr r0, [r0]
    // bl GF_SinDegFX32
    // asr r2, r0, #0x1f
    // lsl r3, r2, #0x10
    // lsr r1, r0, #0x10
    // lsl r2, r0, #0x10
    // mov r0, #2
    // orr r3, r1
    // mov r1, #0
    // lsl r0, r0, #0xa
    // add r2, r2, r0
    // adc r3, r1
    // lsl r0, r3, #0x14
    // lsr r7, r2, #0xc
    // orr r7, r0
    // ldr r0, [sp]
    // add r1, sp, #0xc
    // add r0, #0x1c
    // add r2, sp, #8
    // add r3, sp, #4
    // bl sub_020182B0
    // mov r6, #0
    // add r5, r4, #0
    // mov r0, #1
    // tst r0, r6
    // beq _0225BACC
    // ldr r1, [sp, #0xc]
    // ldr r2, [sp, #8]
    // ldr r3, [sp, #4]
    // add r0, r5, #0
    // add r1, r1, r7
    // bl sub_020182A8
    // b _0225BADA
    // ldr r1, [sp, #0xc]
    // ldr r2, [sp, #8]
    // ldr r3, [sp, #4]
    // add r0, r5, #0
    // sub r1, r1, r7
    // bl sub_020182A8
    // add r6, r6, #1
    // add r5, #0x78
    // cmp r6, #2
    // blt _0225BAB6
    // b _0225BAF2
    // add r4, #0xf6
    // ldrb r1, [r4]
    // bl ov89_0225AD64
    // add sp, #0x10
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [sp]
    // add r2, r4, #0
    // ldr r1, [sp]
    // add r0, #0x1c
    // add r2, #0xf8
    // mov r3, #0
    // bl ov89_0225ADA4
    // mov r5, #0
    // add r6, r4, #0
    // add r6, #0xf8
    // add r7, r5, #0
    // add r2, r5, #1
    // lsl r2, r2, #4
    // ldr r1, [sp]
    // add r0, r4, #0
    // add r2, r6, r2
    // add r3, r7, #0
    // bl ov89_0225ADA4
    // add r5, r5, #1
    // add r4, #0x78
    // cmp r5, #2
    // blt _0225BB0A
    // mov r0, #0
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov89_0225BB28(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #8
    // add r6, r1, #0
    // add r5, r6, #0
    // add r5, #0x94
    // add r0, r5, #0
    // add r0, #0xf6
    // ldrb r3, [r0]
    // cmp r3, #0xff
    // beq _0225BB6A
    // add r0, r5, #0
    // add r0, #0xf4
    // ldrh r0, [r0]
    // asr r0, r0, #8
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // add r1, r0, #0
    // add r2, r0, #0
    // bl NNS_G3dGlbPolygonAttr
    // mov r2, #0x3f
    // ldr r0, [r6, #0x14]
    // mov r1, #0
    // lsl r2, r2, #0x18
    // bl NNSi_G3dModifyPolygonAttrMask
    // mov r2, #0x1f
    // ldr r0, [r6, #0x14]
    // mov r1, #0
    // lsl r2, r2, #0x10
    // bl NNSi_G3dModifyPolygonAttrMask
    // mov r4, #0
    // add r0, r5, #0
    // bl sub_020181EC
    // add r4, r4, #1
    // add r5, #0x78
    // cmp r4, #2
    // blt _0225BB6C
    // add r6, #0x1c
    // add r0, r6, #0
    // bl sub_020181EC
    // add sp, #8
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void ov89_0225BB88(void) {
    // push {r4, r5, r6, lr}
    // mov r0, #0x63
    // add r6, r2, #0
    // lsl r0, r0, #2
    // add r6, #0x94
    // mov r4, #0
    // add r5, r1, r0
    // add r0, r5, #0
    // add r1, r6, #4
    // bl ov89_0225AEA8
    // cmp r0, #1
    // bne _0225BBA6
    // mov r0, #1
    // pop {r4, r5, r6, pc}
    // add r4, r4, #1
    // add r5, #0x10
    // cmp r4, #3
    // blt _0225BB96
    // mov r0, #0
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void ov89_0225BBB4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // add r4, r1, #0
    // add r4, #0x94
    // str r1, [sp]
    // add r1, r4, #0
    // add r1, #0xf7
    // ldrb r1, [r1]
    // cmp r1, #0
    // beq _0225BBCE
    // cmp r1, #1
    // beq _0225BC2A
    // b _0225BD04
    // bl ov89_0225AD00
    // add r1, r4, #0
    // add r1, #0xf6
    // strb r0, [r1]
    // ldr r0, [sp]
    // add r1, sp, #0xc
    // add r0, #0x1c
    // add r2, sp, #8
    // add r3, sp, #4
    // bl sub_020182B0
    // ldr r7, [sp]
    // mov r6, #0
    // add r5, r4, #0
    // add r7, #0xc
    // add r0, r5, #0
    // add r1, r7, #0
    // bl sub_020181B0
    // ldr r1, [sp, #0xc]
    // ldr r2, [sp, #8]
    // ldr r3, [sp, #4]
    // add r0, r5, #0
    // bl sub_020182A8
    // add r0, r5, #0
    // mov r1, #1
    // bl sub_020182A0
    // add r6, r6, #1
    // add r5, #0x78
    // cmp r6, #2
    // blt _0225BBEE
    // mov r1, #0x1f
    // add r0, r4, #0
    // lsl r1, r1, #8
    // add r0, #0xf4
    // strh r1, [r0]
    // add r0, r4, #0
    // add r0, #0xf7
    // ldrb r0, [r0]
    // add r1, r0, #1
    // add r0, r4, #0
    // add r0, #0xf7
    // strb r1, [r0]
    // add r0, r4, #0
    // add r0, #0xf4
    // ldrh r0, [r0]
    // mov r2, #1
    // lsl r2, r2, #8
    // sub r0, #0xa0
    // cmp r0, r2
    // bge _0225BC6A
    // mov r6, #0
    // add r5, r4, #0
    // add r7, r6, #0
    // add r0, r5, #0
    // add r1, r7, #0
    // bl sub_020182A0
    // add r6, r6, #1
    // add r5, #0x78
    // cmp r6, #2
    // blt _0225BC40
    // ldr r0, [sp]
    // mov r1, #0
    // add r0, #0x1c
    // bl sub_020182A0
    // add r0, r4, #0
    // add r0, #0xf7
    // ldrb r0, [r0]
    // add r1, r0, #1
    // add r0, r4, #0
    // add r0, #0xf7
    // strb r1, [r0]
    // b _0225BD12
    // add r0, r4, #0
    // add r0, #0xf4
    // ldrh r1, [r0]
    // add r0, r4, #0
    // add r0, #0xf4
    // sub r1, #0xa0
    // strh r1, [r0]
    // add r1, r4, #0
    // add r1, #0xf0
    // ldr r3, [r1]
    // lsl r1, r2, #9
    // add r2, r3, r1
    // add r1, r4, #0
    // add r1, #0xf0
    // str r2, [r1]
    // add r1, r4, #0
    // add r1, #0xf0
    // ldr r2, [r1]
    // mov r1, #0x5a
    // add r0, r4, #0
    // lsl r1, r1, #0xe
    // add r0, #0xf0
    // cmp r2, r1
    // blt _0225BCA0
    // ldr r2, [r0]
    // sub r1, r2, r1
    // str r1, [r0]
    // add r0, r4, #0
    // add r0, #0xf0
    // ldr r0, [r0]
    // bl GF_SinDegFX32
    // asr r2, r0, #0x1f
    // lsl r3, r2, #0x10
    // lsr r1, r0, #0x10
    // lsl r2, r0, #0x10
    // mov r0, #2
    // orr r3, r1
    // mov r1, #0
    // lsl r0, r0, #0xa
    // add r2, r2, r0
    // adc r3, r1
    // lsl r0, r3, #0x14
    // lsr r7, r2, #0xc
    // orr r7, r0
    // ldr r0, [sp]
    // add r1, sp, #0xc
    // add r0, #0x1c
    // add r2, sp, #8
    // add r3, sp, #4
    // bl sub_020182B0
    // mov r6, #0
    // add r5, r4, #0
    // mov r0, #1
    // tst r0, r6
    // beq _0225BCEC
    // ldr r2, [sp, #8]
    // ldr r1, [sp, #0xc]
    // ldr r3, [sp, #4]
    // add r0, r5, #0
    // add r2, r2, r7
    // bl sub_020182A8
    // b _0225BCFA
    // ldr r2, [sp, #8]
    // ldr r1, [sp, #0xc]
    // ldr r3, [sp, #4]
    // add r0, r5, #0
    // sub r2, r2, r7
    // bl sub_020182A8
    // add r6, r6, #1
    // add r5, #0x78
    // cmp r6, #2
    // blt _0225BCD6
    // b _0225BD12
    // add r4, #0xf6
    // ldrb r1, [r4]
    // bl ov89_0225AD64
    // add sp, #0x10
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [sp]
    // add r2, r4, #0
    // ldr r1, [sp]
    // add r0, #0x1c
    // add r2, #0xf8
    // mov r3, #0
    // bl ov89_0225ADA4
    // mov r5, #0
    // add r6, r4, #0
    // add r6, #0xf8
    // add r7, r5, #0
    // add r2, r5, #1
    // lsl r2, r2, #4
    // ldr r1, [sp]
    // add r0, r4, #0
    // add r2, r6, r2
    // add r3, r7, #0
    // bl ov89_0225ADA4
    // add r5, r5, #1
    // add r4, #0x78
    // cmp r5, #2
    // blt _0225BD2A
    // mov r0, #0
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov89_0225BD48(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #8
    // add r6, r1, #0
    // add r5, r6, #0
    // add r5, #0x94
    // add r0, r5, #0
    // add r0, #0xf6
    // ldrb r3, [r0]
    // cmp r3, #0xff
    // beq _0225BD8A
    // add r0, r5, #0
    // add r0, #0xf4
    // ldrh r0, [r0]
    // asr r0, r0, #8
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // add r1, r0, #0
    // add r2, r0, #0
    // bl NNS_G3dGlbPolygonAttr
    // mov r2, #0x3f
    // ldr r0, [r6, #0x14]
    // mov r1, #0
    // lsl r2, r2, #0x18
    // bl NNSi_G3dModifyPolygonAttrMask
    // mov r2, #0x1f
    // ldr r0, [r6, #0x14]
    // mov r1, #0
    // lsl r2, r2, #0x10
    // bl NNSi_G3dModifyPolygonAttrMask
    // mov r4, #0
    // add r0, r5, #0
    // bl sub_020181EC
    // add r4, r4, #1
    // add r5, #0x78
    // cmp r4, #2
    // blt _0225BD8C
    // add r6, #0x1c
    // add r0, r6, #0
    // bl sub_020181EC
    // add sp, #8
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void ov89_0225BDA8(void) {
    // push {r4, r5, r6, lr}
    // mov r0, #0x63
    // add r6, r2, #0
    // lsl r0, r0, #2
    // add r6, #0x94
    // mov r4, #0
    // add r5, r1, r0
    // add r0, r5, #0
    // add r1, r6, #4
    // bl ov89_0225AEA8
    // cmp r0, #1
    // bne _0225BDC6
    // mov r0, #1
    // pop {r4, r5, r6, pc}
    // add r4, r4, #1
    // add r5, #0x10
    // cmp r4, #3
    // blt _0225BDB6
    // mov r0, #0
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void ov89_0225BDD4(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0xc
    // add r6, r1, #0
    // add r4, r6, #0
    // add r4, #0x94
    // ldrb r0, [r4, #6]
    // cmp r0, #0
    // beq _0225BDEA
    // cmp r0, #1
    // beq _0225BDF6
    // b _0225BE52
    // mov r0, #1
    // lsl r0, r0, #0xc
    // str r0, [r4]
    // ldrb r0, [r4, #6]
    // add r0, r0, #1
    // strb r0, [r4, #6]
    // ldrh r0, [r4, #4]
    // add r0, r0, #1
    // strh r0, [r4, #4]
    // ldrh r0, [r4, #4]
    // cmp r0, #0x1e
    // bls _0225BE08
    // add sp, #0xc
    // mov r0, #1
    // pop {r3, r4, r5, r6, pc}
    // mov r0, #6
    // ldr r1, [r4]
    // lsl r0, r0, #6
    // add r2, r1, r0
    // mov r1, #1
    // add r0, r6, #0
    // lsl r1, r1, #0xc
    // str r2, [r4]
    // add r0, #0x1c
    // add r3, r1, #0
    // bl sub_020182C4
    // mov r0, #1
    // ldr r1, [r4]
    // lsl r0, r0, #0xc
    // sub r0, r1, r0
    // lsl r1, r0, #0xc
    // asr r0, r1, #0xb
    // lsr r0, r0, #0x14
    // add r0, r1, r0
    // asr r0, r0, #0xc
    // neg r5, r0
    // add r0, r6, #0
    // add r0, #0x1c
    // add r1, sp, #8
    // add r2, sp, #4
    // add r3, sp, #0
    // bl sub_020182B0
    // ldr r2, [sp, #4]
    // add r0, r6, #0
    // ldr r1, [sp, #8]
    // ldr r3, [sp]
    // add r0, #0x1c
    // add r2, r2, r5
    // bl sub_020182A8
    // add r0, r6, #0
    // add r4, #8
    // add r0, #0x1c
    // add r1, r6, #0
    // add r2, r4, #0
    // mov r3, #1
    // bl ov89_0225ADA4
    // mov r0, #0
    // add sp, #0xc
    // pop {r3, r4, r5, r6, pc}
    // TODO: decompile
}


void ov89_0225BE68(void) {
    ov89_0225AEA8(0, 1);
}


void ov89_0225BE84(void) {
    // push {r4, r5}
    // add r4, r0, #0
    // cmp r2, #3
    // bne _0225BE92
    // mov r0, #0
    // pop {r4, r5}
    // bx lr
    // cmp r3, #0
    // bne _0225BE9C
    // mov r0, #0
    // mvn r0, r0
    // b _0225BE9E
    // mov r0, #1
    // ldrb r2, [r1]
    // cmp r2, #0
    // beq _0225BEAA
    // cmp r2, #1
    // beq _0225BEDC
    // b _0225BF1E
    // mov r3, #2
    // ldrsh r5, [r1, r3]
    // lsl r2, r3, #8
    // add r2, r5, r2
    // strh r2, [r1, #2]
    // ldrsh r5, [r1, r3]
    // lsl r2, r3, #0xa
    // cmp r5, r2
    // blt _0225BEC4
    // strh r2, [r1, #2]
    // ldrb r2, [r1]
    // add r2, r2, #1
    // strb r2, [r1]
    // mov r2, #0x1d
    // mov r3, #1
    // lsl r2, r2, #6
    // strb r3, [r4, r2]
    // mov r3, #2
    // ldrsh r1, [r1, r3]
    // asr r1, r1, #8
    // add r3, r1, #0
    // mul r3, r0
    // add r0, r2, #2
    // strh r3, [r4, r0]
    // b _0225BF28
    // mov r3, #2
    // ldrsh r5, [r1, r3]
    // lsl r2, r3, #8
    // sub r2, r5, r2
    // strh r2, [r1, #2]
    // ldrsh r2, [r1, r3]
    // cmp r2, #0
    // bgt _0225BF06
    // mov r3, #0
    // strh r3, [r1, #2]
    // ldrb r2, [r1, #1]
    // add r2, r2, #1
    // strb r2, [r1, #1]
    // ldrb r2, [r1, #1]
    // cmp r2, #2
    // bhs _0225BF00
    // strb r3, [r1]
    // b _0225BF06
    // ldrb r2, [r1]
    // add r2, r2, #1
    // strb r2, [r1]
    // mov r2, #0x1d
    // mov r3, #1
    // lsl r2, r2, #6
    // strb r3, [r4, r2]
    // mov r3, #2
    // ldrsh r1, [r1, r3]
    // asr r1, r1, #8
    // add r3, r1, #0
    // mul r3, r0
    // add r0, r2, #2
    // strh r3, [r4, r0]
    // b _0225BF28
    // ldr r1, _0225BF30 ; =0x0000073E
    // mov r0, #1
    // strb r0, [r4, r1]
    // pop {r4, r5}
    // bx lr
    // mov r0, #0
    // pop {r4, r5}
    // bx lr
    // nop
    // _0225BF30: .word 0x0000073E
    // TODO: decompile
}


void ov89_0225BF34(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // ldrb r0, [r4, #6]
    // add r5, r2, #0
    // cmp r0, #3
    // bhi _0225BFD2
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0225BF4C: ; jump table
    // add r0, r5, #0
    // bl Camera_GetDistance
    // str r0, [r4]
    // ldrb r0, [r4, #6]
    // add r0, r0, #1
    // strb r0, [r4, #6]
    // ldr r0, _0225BFD8 ; =0x000005D5
    // bl PlaySE
    // ldr r0, _0225BFDC ; =0xFFFFE556
    // add r1, r5, #0
    // bl Camera_AdjustDistance
    // mov r0, #4
    // ldrsh r1, [r4, r0]
    // add r1, r1, #1
    // strh r1, [r4, #4]
    // ldrsh r0, [r4, r0]
    // cmp r0, #0x1e
    // blt _0225BFD2
    // mov r0, #0
    // strh r0, [r4, #4]
    // ldrb r0, [r4, #6]
    // add r0, r0, #1
    // strb r0, [r4, #6]
    // b _0225BFD2
    // mov r0, #4
    // ldrsh r1, [r4, r0]
    // add r1, r1, #1
    // strh r1, [r4, #4]
    // ldrsh r0, [r4, r0]
    // cmp r0, #4
    // ble _0225BFD2
    // mov r0, #0
    // strh r0, [r4, #4]
    // ldrb r0, [r4, #6]
    // add r0, r0, #1
    // strb r0, [r4, #6]
    // b _0225BFD2
    // ldr r0, _0225BFE0 ; =0x00008555
    // add r1, r5, #0
    // bl Camera_AdjustDistance
    // mov r0, #4
    // ldrsh r1, [r4, r0]
    // add r1, r1, #1
    // strh r1, [r4, #4]
    // ldrsh r0, [r4, r0]
    // cmp r0, #6
    // bge _0225BFC6
    // add r0, r5, #0
    // bl Camera_GetDistance
    // ldr r1, [r4]
    // cmp r0, r1
    // blt _0225BFD2
    // ldr r0, [r4]
    // add r1, r5, #0
    // bl Camera_SetDistance
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // nop
    // _0225BFD8: .word 0x000005D5
    // _0225BFDC: .word 0xFFFFE556
    // _0225BFE0: .word 0x00008555
    // TODO: decompile
}


void ov89_0225BFE4(void) {
    // push {r3, r4, r5, lr}
    // add r5, r1, #0
    // add r5, #8
    // ldrb r0, [r5, #0xc]
    // add r4, r2, #0
    // cmp r0, #0
    // beq _0225BFF8
    // cmp r0, #1
    // beq _0225C004
    // b _0225C082
    // ldr r0, _0225C08C ; =0x000005D5
    // bl PlaySE
    // ldrb r0, [r5, #0xc]
    // add r0, r0, #1
    // strb r0, [r5, #0xc]
    // ldrb r0, [r5, #0xd]
    // mov r1, #2
    // lsl r1, r1, #0xc
    // add r0, r0, #1
    // strb r0, [r5, #0xd]
    // ldrb r0, [r5, #0xd]
    // lsl r0, r0, #0xa
    // cmp r0, r1
    // bge _0225C01C
    // lsr r1, r1, #1
    // sub r1, r1, r0
    // b _0225C022
    // mov r1, #3
    // lsl r1, r1, #0xc
    // sub r1, r0, r1
    // mov r2, #1
    // lsl r2, r2, #0xc
    // str r1, [r5, #4]
    // cmp r0, r2
    // bge _0225C030
    // str r0, [r5]
    // b _0225C054
    // lsl r1, r2, #1
    // cmp r0, r1
    // bge _0225C03C
    // sub r0, r1, r0
    // str r0, [r5]
    // b _0225C054
    // mov r1, #3
    // lsl r1, r1, #0xc
    // cmp r0, r1
    // bge _0225C04E
    // lsl r1, r2, #1
    // sub r0, r0, r1
    // neg r0, r0
    // str r0, [r5]
    // b _0225C054
    // lsl r1, r2, #2
    // sub r0, r0, r1
    // str r0, [r5]
    // ldrb r0, [r5, #0xd]
    // cmp r0, #0x10
    // blo _0225C078
    // mov r0, #1
    // lsl r0, r0, #0xc
    // str r0, [r5, #4]
    // mov r0, #0
    // str r0, [r5]
    // strb r0, [r5, #0xd]
    // ldrb r0, [r5, #0xe]
    // add r0, r0, #1
    // strb r0, [r5, #0xe]
    // ldrb r0, [r5, #0xe]
    // cmp r0, #2
    // blo _0225C078
    // ldrb r0, [r5, #0xc]
    // add r0, r0, #1
    // strb r0, [r5, #0xc]
    // add r0, r5, #0
    // add r1, r4, #0
    // bl Camera_SetLookAtCamUp
    // b _0225C086
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // nop
    // _0225C08C: .word 0x000005D5
    // TODO: decompile
}


void ov89_0225C090(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x10
    // add r4, r1, #0
    // add r0, sp, #8
    // mov r1, #0
    // strh r1, [r0]
    // strh r1, [r0, #2]
    // strh r1, [r0, #4]
    // add r4, #0x18
    // strh r1, [r0, #6]
    // ldrb r1, [r4, #0xe]
    // add r5, r2, #0
    // cmp r1, #3
    // bhi _0225C15E
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _0225C0B8: ; jump table
    // add r0, sp, #0
    // add r1, r5, #0
    // bl Camera_GetAngle
    // add r0, sp, #0
    // ldrh r1, [r0]
    // strh r1, [r4]
    // ldrh r1, [r0, #2]
    // strh r1, [r4, #2]
    // ldrh r1, [r0, #4]
    // strh r1, [r4, #4]
    // ldrh r0, [r0, #6]
    // strh r0, [r4, #6]
    // ldrh r0, [r4, #2]
    // str r0, [r4, #8]
    // ldrb r0, [r4, #0xe]
    // add r0, r0, #1
    // strb r0, [r4, #0xe]
    // ldr r0, _0225C164 ; =0x000005D5
    // bl PlaySE
    // add r1, sp, #0
    // ldrh r2, [r1, #0xa]
    // mov r0, #1
    // lsl r0, r0, #0xc
    // sub r2, r2, r0
    // strh r2, [r1, #0xa]
    // ldr r1, [r4, #8]
    // sub r0, r1, r0
    // str r0, [r4, #8]
    // add r0, sp, #8
    // add r1, r5, #0
    // bl Camera_AdjustAnglePos
    // mov r0, #2
    // ldrh r1, [r4, #2]
    // lsl r0, r0, #0xc
    // ldr r2, [r4, #8]
    // sub r0, r1, r0
    // cmp r2, r0
    // bgt _0225C15E
    // ldrb r0, [r4, #0xe]
    // add r0, r0, #1
    // strb r0, [r4, #0xe]
    // b _0225C15E
    // mov r0, #0xc
    // ldrsh r1, [r4, r0]
    // add r1, r1, #1
    // strh r1, [r4, #0xc]
    // ldrsh r0, [r4, r0]
    // cmp r0, #0x10
    // blt _0225C15E
    // ldrb r0, [r4, #0xe]
    // add r0, r0, #1
    // strb r0, [r4, #0xe]
    // b _0225C15E
    // add r2, sp, #0
    // ldrh r3, [r2, #0xa]
    // mov r1, #2
    // lsl r1, r1, #8
    // add r3, r3, r1
    // strh r3, [r2, #0xa]
    // ldr r2, [r4, #8]
    // add r1, r2, r1
    // str r1, [r4, #8]
    // add r1, r5, #0
    // bl Camera_AdjustAnglePos
    // ldrh r0, [r4, #2]
    // ldr r1, [r4, #8]
    // cmp r1, r0
    // blt _0225C15E
    // add r0, r4, #0
    // add r1, r5, #0
    // bl Camera_SetAnglePos
    // add sp, #0x10
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // mov r0, #0
    // add sp, #0x10
    // pop {r3, r4, r5, pc}
    // _0225C164: .word 0x000005D5
    // TODO: decompile
}


void ov89_0225C168(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x10
    // add r4, r1, #0
    // add r0, sp, #8
    // mov r1, #0
    // strh r1, [r0]
    // strh r1, [r0, #2]
    // strh r1, [r0, #4]
    // add r4, #0x28
    // strh r1, [r0, #6]
    // ldrb r1, [r4, #0xe]
    // add r5, r2, #0
    // cmp r1, #3
    // bhi _0225C236
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _0225C190: ; jump table
    // add r0, sp, #0
    // add r1, r5, #0
    // bl Camera_GetAngle
    // add r0, sp, #0
    // ldrh r1, [r0]
    // strh r1, [r4]
    // ldrh r1, [r0, #2]
    // strh r1, [r4, #2]
    // ldrh r1, [r0, #4]
    // strh r1, [r4, #4]
    // ldrh r0, [r0, #6]
    // strh r0, [r4, #6]
    // ldrh r0, [r4, #2]
    // str r0, [r4, #8]
    // ldrb r0, [r4, #0xe]
    // add r0, r0, #1
    // strb r0, [r4, #0xe]
    // ldr r0, _0225C23C ; =0x000005D5
    // bl PlaySE
    // add r1, sp, #0
    // ldrh r2, [r1, #0xa]
    // mov r0, #1
    // lsl r0, r0, #0xc
    // add r2, r2, r0
    // strh r2, [r1, #0xa]
    // ldr r1, [r4, #8]
    // add r0, r1, r0
    // str r0, [r4, #8]
    // add r0, sp, #8
    // add r1, r5, #0
    // bl Camera_AdjustAnglePos
    // mov r0, #2
    // ldrh r1, [r4, #2]
    // lsl r0, r0, #0xc
    // ldr r2, [r4, #8]
    // add r0, r1, r0
    // cmp r2, r0
    // blt _0225C236
    // ldrb r0, [r4, #0xe]
    // add r0, r0, #1
    // strb r0, [r4, #0xe]
    // b _0225C236
    // mov r0, #0xc
    // ldrsh r1, [r4, r0]
    // add r1, r1, #1
    // strh r1, [r4, #0xc]
    // ldrsh r0, [r4, r0]
    // cmp r0, #0x10
    // blt _0225C236
    // ldrb r0, [r4, #0xe]
    // add r0, r0, #1
    // strb r0, [r4, #0xe]
    // b _0225C236
    // add r2, sp, #0
    // ldrh r3, [r2, #0xa]
    // mov r1, #2
    // lsl r1, r1, #8
    // sub r3, r3, r1
    // strh r3, [r2, #0xa]
    // ldr r2, [r4, #8]
    // sub r1, r2, r1
    // str r1, [r4, #8]
    // add r1, r5, #0
    // bl Camera_AdjustAnglePos
    // ldrh r0, [r4, #2]
    // ldr r1, [r4, #8]
    // cmp r1, r0
    // bgt _0225C236
    // add r0, r4, #0
    // add r1, r5, #0
    // bl Camera_SetAnglePos
    // add sp, #0x10
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // mov r0, #0
    // add sp, #0x10
    // pop {r3, r4, r5, pc}
    // _0225C23C: .word 0x000005D5
    // TODO: decompile
}


void ov89_0225C240(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x10
    // add r4, r1, #0
    // add r0, sp, #8
    // mov r1, #0
    // strh r1, [r0]
    // strh r1, [r0, #2]
    // strh r1, [r0, #4]
    // add r4, #0x38
    // strh r1, [r0, #6]
    // ldrb r1, [r4, #0xe]
    // add r5, r2, #0
    // cmp r1, #3
    // bhi _0225C30C
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _0225C268: ; jump table
    // add r0, sp, #0
    // add r1, r5, #0
    // bl Camera_GetAngle
    // add r0, sp, #0
    // ldrh r1, [r0]
    // strh r1, [r4]
    // ldrh r1, [r0, #2]
    // strh r1, [r4, #2]
    // ldrh r1, [r0, #4]
    // strh r1, [r4, #4]
    // ldrh r0, [r0, #6]
    // strh r0, [r4, #6]
    // ldrh r0, [r4]
    // str r0, [r4, #8]
    // ldr r0, _0225C314 ; =0x000005D5
    // bl PlaySE
    // ldrb r0, [r4, #0xe]
    // add r0, r0, #1
    // strb r0, [r4, #0xe]
    // add r1, sp, #0
    // ldrh r2, [r1, #8]
    // ldr r0, _0225C318 ; =0x00000AAA
    // add r2, r2, r0
    // strh r2, [r1, #8]
    // ldr r1, [r4, #8]
    // add r0, r1, r0
    // str r0, [r4, #8]
    // add r0, sp, #8
    // add r1, r5, #0
    // bl Camera_AdjustAnglePos
    // mov r0, #2
    // ldrh r1, [r4]
    // lsl r0, r0, #0xc
    // ldr r2, [r4, #8]
    // add r0, r1, r0
    // cmp r2, r0
    // blt _0225C30C
    // ldrb r0, [r4, #0xe]
    // add r0, r0, #1
    // strb r0, [r4, #0xe]
    // b _0225C30C
    // mov r0, #0xc
    // ldrsh r1, [r4, r0]
    // add r1, r1, #1
    // strh r1, [r4, #0xc]
    // ldrsh r0, [r4, r0]
    // cmp r0, #0x10
    // blt _0225C30C
    // ldrb r0, [r4, #0xe]
    // add r0, r0, #1
    // strb r0, [r4, #0xe]
    // b _0225C30C
    // add r2, sp, #0
    // ldrh r3, [r2, #8]
    // mov r1, #2
    // lsl r1, r1, #8
    // sub r3, r3, r1
    // strh r3, [r2, #8]
    // ldr r2, [r4, #8]
    // sub r1, r2, r1
    // str r1, [r4, #8]
    // add r1, r5, #0
    // bl Camera_AdjustAnglePos
    // ldrh r0, [r4]
    // ldr r1, [r4, #8]
    // cmp r1, r0
    // bgt _0225C30C
    // add r0, r4, #0
    // add r1, r5, #0
    // bl Camera_SetAnglePos
    // add sp, #0x10
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // mov r0, #0
    // add sp, #0x10
    // pop {r3, r4, r5, pc}
    // nop
    // _0225C314: .word 0x000005D5
    // _0225C318: .word 0x00000AAA
    // TODO: decompile
}


void ov89_0225C31C(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x10
    // add r4, r1, #0
    // add r1, sp, #8
    // mov r0, #0
    // strh r0, [r1]
    // strh r0, [r1, #2]
    // strh r0, [r1, #4]
    // add r4, #0x48
    // strh r0, [r1, #6]
    // ldrb r0, [r4, #0xd]
    // add r5, r2, #0
    // cmp r0, #0
    // beq _0225C33E
    // cmp r0, #1
    // beq _0225C364
    // b _0225C3D6
    // add r0, sp, #0
    // add r1, r5, #0
    // bl Camera_GetAngle
    // add r0, sp, #0
    // ldrh r1, [r0]
    // strh r1, [r4]
    // ldrh r1, [r0, #2]
    // strh r1, [r4, #2]
    // ldrh r1, [r0, #4]
    // strh r1, [r4, #4]
    // ldrh r0, [r0, #6]
    // strh r0, [r4, #6]
    // ldrb r0, [r4, #0xd]
    // add r0, r0, #1
    // strb r0, [r4, #0xd]
    // ldr r0, _0225C3E4 ; =0x000005D5
    // bl PlaySE
    // mov r1, #6
    // ldr r2, [r4, #8]
    // lsl r1, r1, #0xe
    // add r2, r2, r1
    // mov r1, #0x5a
    // add r0, r4, #0
    // lsl r1, r1, #0xe
    // add r0, #8
    // str r2, [r4, #8]
    // cmp r2, r1
    // blt _0225C396
    // ldr r2, [r0]
    // sub r1, r2, r1
    // str r1, [r0]
    // ldrb r0, [r4, #0xc]
    // add r0, r0, #1
    // strb r0, [r4, #0xc]
    // ldrb r0, [r4, #0xc]
    // cmp r0, #2
    // blo _0225C396
    // ldrb r0, [r4, #0xd]
    // add r0, r0, #1
    // strb r0, [r4, #0xd]
    // mov r0, #0
    // str r0, [r4, #8]
    // ldr r0, [r4, #8]
    // bl GF_SinDegFX32
    // ldrh r2, [r4]
    // add r1, sp, #0
    // lsl r6, r0, #0xc
    // strh r2, [r1, #8]
    // ldrh r2, [r4, #2]
    // add r3, sp, #8
    // strh r2, [r1, #0xa]
    // ldrh r2, [r4, #4]
    // strh r2, [r1, #0xc]
    // ldrh r2, [r4, #6]
    // lsr r4, r0, #0x14
    // strh r2, [r1, #0xe]
    // asr r2, r0, #0x1f
    // lsl r2, r2, #0xc
    // mov r0, #2
    // orr r2, r4
    // mov r4, #0
    // lsl r0, r0, #0xa
    // add r6, r6, r0
    // adc r2, r4
    // lsl r0, r2, #0x14
    // lsr r2, r6, #0xc
    // orr r2, r0
    // strh r2, [r1, #0xa]
    // add r0, r3, #0
    // add r1, r5, #0
    // bl Camera_SetAngleTarget
    // b _0225C3DC
    // add sp, #0x10
    // mov r0, #1
    // pop {r4, r5, r6, pc}
    // add r0, r4, #0
    // add sp, #0x10
    // pop {r4, r5, r6, pc}
    // nop
    // _0225C3E4: .word 0x000005D5
    // TODO: decompile
}


void ov89_0225C3E8(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // add r4, #0x58
    // ldrb r0, [r4, #6]
    // add r5, r2, #0
    // cmp r0, #3
    // bhi _0225C488
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0225C402: ; jump table
    // add r0, r5, #0
    // bl Camera_GetDistance
    // str r0, [r4]
    // ldrb r0, [r4, #6]
    // add r0, r0, #1
    // strb r0, [r4, #6]
    // ldr r0, _0225C48C ; =0x000005D5
    // bl PlaySE
    // ldr r0, _0225C490 ; =0x00001AAA
    // add r1, r5, #0
    // bl Camera_AdjustDistance
    // mov r0, #4
    // ldrsh r1, [r4, r0]
    // add r1, r1, #1
    // strh r1, [r4, #4]
    // ldrsh r0, [r4, r0]
    // cmp r0, #0x1e
    // blt _0225C488
    // mov r0, #0
    // strh r0, [r4, #4]
    // ldrb r0, [r4, #6]
    // add r0, r0, #1
    // strb r0, [r4, #6]
    // b _0225C488
    // mov r0, #4
    // ldrsh r1, [r4, r0]
    // add r1, r1, #1
    // strh r1, [r4, #4]
    // ldrsh r0, [r4, r0]
    // cmp r0, #4
    // ble _0225C488
    // mov r0, #0
    // strh r0, [r4, #4]
    // ldrb r0, [r4, #6]
    // add r0, r0, #1
    // strb r0, [r4, #6]
    // b _0225C488
    // ldr r0, _0225C494 ; =0xFFFF7AAB
    // add r1, r5, #0
    // bl Camera_AdjustDistance
    // mov r0, #4
    // ldrsh r1, [r4, r0]
    // add r1, r1, #1
    // strh r1, [r4, #4]
    // ldrsh r0, [r4, r0]
    // cmp r0, #6
    // bge _0225C47C
    // add r0, r5, #0
    // bl Camera_GetDistance
    // ldr r1, [r4]
    // cmp r0, r1
    // bgt _0225C488
    // ldr r0, [r4]
    // add r1, r5, #0
    // bl Camera_SetDistance
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // _0225C48C: .word 0x000005D5
    // _0225C490: .word 0x00001AAA
    // _0225C494: .word 0xFFFF7AAB
    // TODO: decompile
}


void ov89_0225C498(void) {
    // push {r4, r5, lr}
    // sub sp, #0x24
    // add r4, r1, #0
    // add r1, sp, #0x18
    // mov r0, #0
    // str r0, [r1]
    // str r0, [r1, #4]
    // add r4, #0x60
    // str r0, [r1, #8]
    // ldrb r0, [r4, #0x1d]
    // add r5, r2, #0
    // cmp r0, #0
    // beq _0225C4B8
    // cmp r0, #1
    // beq _0225C4EE
    // b _0225C55E
    // add r0, sp, #0xc
    // add r1, r5, #0
    // bl Camera_GetLookAtCamPos
    // add r3, sp, #0xc
    // add r2, r4, #0
    // ldmia r3!, {r0, r1}
    // add r2, #0xc
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // add r1, r5, #0
    // str r0, [r2]
    // add r0, sp, #0
    // bl Camera_GetLookAtCamTarget
    // add r3, sp, #0
    // ldmia r3!, {r0, r1}
    // add r2, r4, #0
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // str r0, [r2]
    // ldrb r0, [r4, #0x1d]
    // add r0, r0, #1
    // strb r0, [r4, #0x1d]
    // ldr r0, _0225C56C ; =0x000005D5
    // bl PlaySE
    // mov r1, #2
    // ldr r2, [r4, #0x18]
    // lsl r1, r1, #0x10
    // add r2, r2, r1
    // mov r1, #0x5a
    // add r0, r4, #0
    // lsl r1, r1, #0xe
    // add r0, #0x18
    // str r2, [r4, #0x18]
    // cmp r2, r1
    // blt _0225C520
    // ldr r2, [r0]
    // sub r1, r2, r1
    // str r1, [r0]
    // ldrb r0, [r4, #0x1c]
    // add r0, r0, #1
    // strb r0, [r4, #0x1c]
    // ldrb r0, [r4, #0x1c]
    // cmp r0, #4
    // blo _0225C520
    // ldrb r0, [r4, #0x1d]
    // add r0, r0, #1
    // strb r0, [r4, #0x1d]
    // mov r0, #0
    // str r0, [r4, #0x18]
    // ldr r0, [r4, #0x18]
    // bl GF_SinDegFX32
    // asr r1, r0, #0x1f
    // lsr r2, r0, #0x10
    // lsl r1, r1, #0x10
    // lsl r3, r0, #0x10
    // mov r0, #2
    // orr r1, r2
    // mov r2, #0
    // lsl r0, r0, #0xa
    // add r3, r3, r0
    // adc r1, r2
    // lsl r0, r1, #0x14
    // lsr r1, r3, #0xc
    // orr r1, r0
    // str r1, [sp, #0x18]
    // add r0, r4, #0
    // add r1, r5, #0
    // bl Camera_SetLookAtCamTarget
    // add r4, #0xc
    // add r0, r4, #0
    // add r1, r5, #0
    // bl Camera_SetLookAtCamPos
    // add r0, sp, #0x18
    // add r1, r5, #0
    // bl Camera_OffsetLookAtPosAndTarget
    // b _0225C564
    // add sp, #0x24
    // mov r0, #1
    // pop {r4, r5, pc}
    // mov r0, #0
    // add sp, #0x24
    // pop {r4, r5, pc}
    // nop
    // _0225C56C: .word 0x000005D5
    // TODO: decompile
}


void ov89_0225C570(void) {
    // push {r4, r5, lr}
    // sub sp, #0x24
    // add r4, r1, #0
    // add r1, sp, #0x18
    // mov r0, #0
    // str r0, [r1]
    // str r0, [r1, #4]
    // add r4, #0x80
    // str r0, [r1, #8]
    // ldrb r0, [r4, #0x1d]
    // add r5, r2, #0
    // cmp r0, #0
    // beq _0225C590
    // cmp r0, #1
    // beq _0225C5C6
    // b _0225C636
    // add r0, sp, #0xc
    // add r1, r5, #0
    // bl Camera_GetLookAtCamPos
    // add r3, sp, #0xc
    // add r2, r4, #0
    // ldmia r3!, {r0, r1}
    // add r2, #0xc
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // add r1, r5, #0
    // str r0, [r2]
    // add r0, sp, #0
    // bl Camera_GetLookAtCamTarget
    // add r3, sp, #0
    // ldmia r3!, {r0, r1}
    // add r2, r4, #0
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // str r0, [r2]
    // ldrb r0, [r4, #0x1d]
    // add r0, r0, #1
    // strb r0, [r4, #0x1d]
    // ldr r0, _0225C644 ; =0x000005D5
    // bl PlaySE
    // mov r1, #2
    // ldr r2, [r4, #0x18]
    // lsl r1, r1, #0x10
    // add r2, r2, r1
    // mov r1, #0x5a
    // add r0, r4, #0
    // lsl r1, r1, #0xe
    // add r0, #0x18
    // str r2, [r4, #0x18]
    // cmp r2, r1
    // blt _0225C5F8
    // ldr r2, [r0]
    // sub r1, r2, r1
    // str r1, [r0]
    // ldrb r0, [r4, #0x1c]
    // add r0, r0, #1
    // strb r0, [r4, #0x1c]
    // ldrb r0, [r4, #0x1c]
    // cmp r0, #4
    // blo _0225C5F8
    // ldrb r0, [r4, #0x1d]
    // add r0, r0, #1
    // strb r0, [r4, #0x1d]
    // mov r0, #0
    // str r0, [r4, #0x18]
    // ldr r0, [r4, #0x18]
    // bl GF_SinDegFX32
    // asr r1, r0, #0x1f
    // lsr r2, r0, #0x11
    // lsl r1, r1, #0xf
    // lsl r3, r0, #0xf
    // mov r0, #2
    // orr r1, r2
    // mov r2, #0
    // lsl r0, r0, #0xa
    // add r3, r3, r0
    // adc r1, r2
    // lsl r0, r1, #0x14
    // lsr r1, r3, #0xc
    // orr r1, r0
    // str r1, [sp, #0x1c]
    // add r0, r4, #0
    // add r1, r5, #0
    // bl Camera_SetLookAtCamTarget
    // add r4, #0xc
    // add r0, r4, #0
    // add r1, r5, #0
    // bl Camera_SetLookAtCamPos
    // add r0, sp, #0x18
    // add r1, r5, #0
    // bl Camera_OffsetLookAtPosAndTarget
    // b _0225C63C
    // add sp, #0x24
    // mov r0, #1
    // pop {r4, r5, pc}
    // mov r0, #0
    // add sp, #0x24
    // pop {r4, r5, pc}
    // nop
    // _0225C644: .word 0x000005D5
    // TODO: decompile
}


void ov89_0225C648(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x10
    // add r4, r1, #0
    // add r0, sp, #8
    // mov r1, #0
    // strh r1, [r0]
    // strh r1, [r0, #2]
    // strh r1, [r0, #4]
    // add r4, #0xa0
    // strh r1, [r0, #6]
    // ldrb r1, [r4, #0xe]
    // add r5, r2, #0
    // cmp r1, #3
    // bhi _0225C714
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _0225C670: ; jump table
    // add r0, sp, #0
    // add r1, r5, #0
    // bl Camera_GetAngle
    // add r0, sp, #0
    // ldrh r1, [r0]
    // strh r1, [r4]
    // ldrh r1, [r0, #2]
    // strh r1, [r4, #2]
    // ldrh r1, [r0, #4]
    // strh r1, [r4, #4]
    // ldrh r0, [r0, #6]
    // strh r0, [r4, #6]
    // ldrh r0, [r4]
    // str r0, [r4, #8]
    // ldrb r0, [r4, #0xe]
    // add r0, r0, #1
    // strb r0, [r4, #0xe]
    // ldr r0, _0225C71C ; =0x000005D5
    // bl PlaySE
    // add r1, sp, #0
    // ldrh r2, [r1, #8]
    // ldr r0, _0225C720 ; =0x00000AAA
    // sub r2, r2, r0
    // strh r2, [r1, #8]
    // ldr r1, [r4, #8]
    // sub r0, r1, r0
    // str r0, [r4, #8]
    // add r0, sp, #8
    // add r1, r5, #0
    // bl Camera_AdjustAnglePos
    // mov r0, #2
    // ldrh r1, [r4]
    // lsl r0, r0, #0xc
    // ldr r2, [r4, #8]
    // sub r0, r1, r0
    // cmp r2, r0
    // bgt _0225C714
    // ldrb r0, [r4, #0xe]
    // add r0, r0, #1
    // strb r0, [r4, #0xe]
    // b _0225C714
    // mov r0, #0xc
    // ldrsh r1, [r4, r0]
    // add r1, r1, #1
    // strh r1, [r4, #0xc]
    // ldrsh r0, [r4, r0]
    // cmp r0, #0x10
    // blt _0225C714
    // ldrb r0, [r4, #0xe]
    // add r0, r0, #1
    // strb r0, [r4, #0xe]
    // b _0225C714
    // add r2, sp, #0
    // ldrh r3, [r2, #8]
    // mov r1, #2
    // lsl r1, r1, #8
    // add r3, r3, r1
    // strh r3, [r2, #8]
    // ldr r2, [r4, #8]
    // add r1, r2, r1
    // str r1, [r4, #8]
    // add r1, r5, #0
    // bl Camera_AdjustAnglePos
    // ldrh r0, [r4]
    // ldr r1, [r4, #8]
    // cmp r1, r0
    // blt _0225C714
    // add r0, r4, #0
    // add r1, r5, #0
    // bl Camera_SetAnglePos
    // add sp, #0x10
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // mov r0, #0
    // add sp, #0x10
    // pop {r3, r4, r5, pc}
    // nop
    // _0225C71C: .word 0x000005D5
    // _0225C720: .word 0x00000AAA
    // TODO: decompile
}


void ov89_0225C724(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x28
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x40]
    // str r1, [sp, #0x14]
    // add r4, r2, #0
    // str r3, [sp, #0x18]
    // bl ov45_0222EC7C
    // add r5, r0, #0
    // mov r0, #0
    // mvn r0, r0
    // cmp r5, r0
    // beq _0225C80A
    // ldr r0, [sp, #0x40]
    // bl ov45_0222EC68
    // mov r1, #0
    // mvn r1, r1
    // str r0, [sp, #0x24]
    // cmp r0, r1
    // beq _0225C80A
    // ldr r0, [sp, #0x18]
    // ldr r1, [sp, #0x24]
    // bl ov45_0222A578
    // add r7, r0, #0
    // beq _0225C80A
    // cmp r5, #8
    // blo _0225C768
    // bl GF_AssertFail
    // add sp, #0x28
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #0x7d
    // bl PlayerProfile_New
    // add r6, r0, #0
    // add r0, r7, #0
    // add r1, r6, #0
    // mov r2, #0x7d
    // bl ov45_0222A844
    // add r0, r6, #0
    // mov r1, #0x7d
    // bl PlayerProfile_GetPlayerName_NewString
    // str r0, [sp, #0x1c]
    // add r0, r6, #0
    // bl PlayerProfile_GetTrainerGender
    // add r3, r0, #0
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x14]
    // ldr r2, [sp, #0x1c]
    // mov r1, #0
    // bl BufferString
    // ldr r0, [sp, #0x10]
    // mov r1, #0
    // bl NewString_ReadMsgData
    // str r0, [sp, #0x20]
    // mov r0, #0x40
    // mov r1, #0x7d
    // bl String_New
    // add r7, r0, #0
    // ldr r0, [sp, #0x14]
    // ldr r2, [sp, #0x20]
    // add r1, r7, #0
    // bl StringExpandPlaceholders
    // lsl r5, r5, #4
    // add r0, r4, r5
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // ldr r0, [sp, #0x18]
    // ldr r1, [sp, #0x24]
    // bl ov45_0222AB28
    // cmp r0, #1
    // bne _0225C7D6
    // ldr r0, _0225C810 ; =0x00070800
    // b _0225C7D8
    // ldr r0, _0225C814 ; =0x00010200
    // mov r1, #0
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r4, r5
    // add r2, r7, #0
    // add r3, r1, #0
    // str r1, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r4, r5
    // bl CopyWindowToVram
    // ldr r0, [sp, #0x1c]
    // bl String_Delete
    // ldr r0, [sp, #0x20]
    // bl String_Delete
    // add r0, r7, #0
    // bl String_Delete
    // add r0, r6, #0
    // bl Heap_Free
    // add sp, #0x28
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0225C810: .word 0x00070800
    // _0225C814: .word 0x00010200
    // TODO: decompile
}


void ov89_0225C818(void) {
    // push {r3, lr}
    // cmp r1, #8
    // blo _0225C824
    // bl GF_AssertFail
    // pop {r3, pc}
    // lsl r1, r1, #4
    // add r0, r0, r1
    // bl ClearWindowTilemapAndCopyToVram
    // pop {r3, pc}
    // TODO: decompile
}


void ov89_0225C830(void) {
    _u32_div_f(9);
}


void ov89_0225C84C(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // ldr r0, _0225C888 ; =ov89_0225CE50
    // add r6, r1, #0
    // mov r4, #0xff
    // bl TouchscreenHitbox_FindRectAtTouchNew
    // cmp r0, #6
    // bge _0225C87A
    // cmp r6, r0
    // beq _0225C884
    // mov r1, #0xc
    // mul r1, r0
    // add r1, r5, r1
    // ldrh r2, [r1, #2]
    // cmp r2, #0
    // beq _0225C884
    // add r1, r4, #0
    // add r1, #0xee
    // cmp r2, r1
    // bhi _0225C884
    // add r4, r0, #0
    // b _0225C884
    // bne _0225C880
    // mov r4, #0xfe
    // b _0225C884
    // add r0, r4, #0
    // pop {r4, r5, r6, pc}
    // add r0, r4, #0
    // pop {r4, r5, r6, pc}
    // _0225C888: .word ov89_0225CE50
    // TODO: decompile
}


void ov89_0225C88C(void) {
    // ldr r3, _0225C8B0 ; =0x000001E7
    // cmp r0, r3
    // bne _0225C89A
    // cmp r1, #0
    // ble _0225C89A
    // mov r0, #0
    // bx lr
    // ldr r1, _0225C8B4 ; =0x000001ED
    // cmp r0, r1
    // bne _0225C8A8
    // cmp r2, #0
    // bne _0225C8A8
    // mov r0, #0
    // bx lr
    // lsl r1, r0, #2
    // ldr r0, _0225C8B8 ; =ov89_0225CE94
    // ldrb r0, [r0, r1]
    // bx lr
    // _0225C8B0: .word 0x000001E7
    // _0225C8B4: .word 0x000001ED
    // _0225C8B8: .word ov89_0225CE94
    // TODO: decompile
}


void ov89_0225C8BC(void) {
    // ldr r2, _0225C8D4 ; =0x000001E7
    // cmp r0, r2
    // bne _0225C8CA
    // cmp r1, #0
    // ble _0225C8CA
    // mov r0, #2
    // bx lr
    // lsl r1, r0, #2
    // ldr r0, _0225C8D8 ; =ov89_0225CE95
    // ldrb r0, [r0, r1]
    // bx lr
    // nop
    // _0225C8D4: .word 0x000001E7
    // _0225C8D8: .word ov89_0225CE95
    // TODO: decompile
}


void ov89_0225C8DC(void) {
    // ldr r3, _0225C8E8 ; =ov45_0222EE50
    // add r2, r0, #0
    // ldr r0, _0225C8EC ; =ov89_0225D64C
    // mov r1, #3
    // bx r3
    // nop
    // _0225C8E8: .word ov45_0222EE50
    // _0225C8EC: .word ov89_0225D64C
    // TODO: decompile
}


void ov89_0225C8F0(void) {
    // push {r3, lr}
    // ldr r2, [r1, #4]
    // cmp r2, r0
    // bne _0225C8FC
    // mov r0, #0
    // pop {r3, pc}
    // ldr r1, [r1]
    // cmp r1, #0
    // bne _0225C906
    // mov r0, #0
    // pop {r3, pc}
    // bl ov45_0222EC7C
    // mov r1, #0
    // mvn r1, r1
    // cmp r0, r1
    // beq _0225C916
    // mov r0, #1
    // pop {r3, pc}
    // mov r0, #0
    // pop {r3, pc}
    // TODO: decompile
}


void ov89_0225C91C(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl ov45_0222D844
    // cmp r0, #1
    // bne _0225C92C
    // mov r0, #0
    // pop {r4, pc}
    // mov r0, #2
    // add r1, r4, #0
    // mov r2, #0xc
    // bl ov45_0222EFAC
    // mov r0, #1
    // pop {r4, pc}
    // TODO: decompile
}


void ov89_0225C93C(void) {
    // push {r3, r4, r5, lr}
    // add r4, r3, #0
    // add r5, r0, #0
    // add r0, r4, #0
    // bl ov89_02259E48
    // add r1, r0, #0
    // add r0, r5, #0
    // bl ov89_0225C8F0
    // cmp r0, #0
    // beq _0225C95C
    // add r0, r4, #0
    // add r1, r5, #0
    // bl ov89_0225A148
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov89_0225C960(void) {
    // push {r3, r4, r5, lr}
    // add r4, r3, #0
    // add r5, r0, #0
    // add r0, r4, #0
    // bl ov89_02259E48
    // add r1, r0, #0
    // add r0, r5, #0
    // bl ov89_0225C8F0
    // cmp r0, #0
    // beq _0225C986
    // add r0, r5, #0
    // bl ov45_0222EC7C
    // add r1, r0, #0
    // add r0, r4, #0
    // bl ov89_0225A160
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov89_0225C988(void) {
    // push {r4, r5, r6, lr}
    // add r6, r3, #0
    // add r5, r0, #0
    // add r0, r6, #0
    // add r4, r1, #0
    // bl ov89_02259E48
    // add r1, r0, #0
    // add r0, r5, #0
    // bl ov89_0225C8F0
    // cmp r0, #0
    // beq _0225C9AC
    // add r0, r6, #0
    // add r1, r4, #0
    // add r2, r5, #0
    // bl ov89_02259EC4
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}

