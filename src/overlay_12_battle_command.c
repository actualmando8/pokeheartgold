/* Decompiled from asm/overlay_12_battle_command.s */
#include "global.h"

void BattleScript_CalcEffortValues(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x28
    // str r0, [sp]
    // str r1, [sp, #4]
    // add r0, r2, #0
    // add r1, r3, #0
    // mov r2, #5
    // mov r4, #0
    // bl AllocAndLoadMonPersonal_HandleAlternateForm
    // add r7, r0, #0
    // ldr r0, [sp]
    // ldr r1, [sp, #4]
    // bl Party_GetMonByIndex
    // mov r1, #6
    // add r2, r4, #0
    // str r0, [sp, #0x14]
    // bl GetMonData
    // lsl r0, r0, #0x10
    // lsr r6, r0, #0x10
    // add r0, r6, #0
    // mov r1, #1
    // mov r2, #5
    // bl GetItemAttr
    // add r5, r0, #0
    // add r0, r6, #0
    // mov r1, #2
    // mov r2, #5
    // bl GetItemAttr
    // add r6, r0, #0
    // add r0, r4, #0
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x1c]
    // add r0, sp, #0x20
    // str r0, [sp, #0xc]
    // ldr r1, [sp, #0x1c]
    // ldr r0, [sp, #0x14]
    // add r1, #0xd
    // mov r2, #0
    // bl GetMonData
    // ldr r1, [sp, #0xc]
    // strb r0, [r1]
    // add r0, r1, #0
    // ldrb r1, [r0]
    // ldr r0, [sp, #0x18]
    // add r0, r0, r1
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0xc]
    // add r0, r0, #1
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x1c]
    // add r0, r0, #1
    // str r0, [sp, #0x1c]
    // cmp r0, #6
    // blt _02246436
    // mov r0, #0
    // str r0, [sp, #8]
    // add r0, sp, #0x20
    // str r0, [sp, #0x10]
    // ldr r1, [sp, #0x18]
    // ldr r0, _022465A4 ; =0x000001FE
    // cmp r1, r0
    // blo _02246476
    // b _0224659A
    // ldr r0, [sp, #8]
    // cmp r0, #5
    // bhi _02246522
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _02246488: ; jump table
    // add r0, r7, #0
    // mov r1, #0xa
    // bl GetPersonalAttr
    // lsl r0, r0, #0x10
    // asr r4, r0, #0x10
    // cmp r5, #0x7a
    // bne _02246522
    // add r0, r4, r6
    // lsl r0, r0, #0x10
    // asr r4, r0, #0x10
    // b _02246522
    // add r0, r7, #0
    // mov r1, #0xb
    // bl GetPersonalAttr
    // lsl r0, r0, #0x10
    // asr r4, r0, #0x10
    // cmp r5, #0x75
    // bne _02246522
    // add r0, r4, r6
    // lsl r0, r0, #0x10
    // asr r4, r0, #0x10
    // b _02246522
    // add r0, r7, #0
    // mov r1, #0xc
    // bl GetPersonalAttr
    // lsl r0, r0, #0x10
    // asr r4, r0, #0x10
    // cmp r5, #0x76
    // bne _02246522
    // add r0, r4, r6
    // lsl r0, r0, #0x10
    // asr r4, r0, #0x10
    // b _02246522
    // add r0, r7, #0
    // mov r1, #0xd
    // bl GetPersonalAttr
    // lsl r0, r0, #0x10
    // asr r4, r0, #0x10
    // cmp r5, #0x79
    // bne _02246522
    // add r0, r4, r6
    // lsl r0, r0, #0x10
    // asr r4, r0, #0x10
    // b _02246522
    // add r0, r7, #0
    // mov r1, #0xe
    // bl GetPersonalAttr
    // lsl r0, r0, #0x10
    // asr r4, r0, #0x10
    // cmp r5, #0x77
    // bne _02246522
    // add r0, r4, r6
    // lsl r0, r0, #0x10
    // asr r4, r0, #0x10
    // b _02246522
    // add r0, r7, #0
    // mov r1, #0xf
    // bl GetPersonalAttr
    // lsl r0, r0, #0x10
    // asr r4, r0, #0x10
    // cmp r5, #0x78
    // bne _02246522
    // add r0, r4, r6
    // lsl r0, r0, #0x10
    // asr r4, r0, #0x10
    // ldr r0, [sp, #4]
    // bl MaskOfFlagNo
    // add r1, r0, #0
    // lsl r1, r1, #0x18
    // ldr r0, [sp]
    // lsr r1, r1, #0x18
    // bl Party_MaskMonsWithPokerus
    // cmp r0, #0
    // beq _0224653C
    // lsl r0, r4, #0x11
    // asr r4, r0, #0x10
    // cmp r5, #0x32
    // bne _02246544
    // lsl r0, r4, #0x11
    // asr r4, r0, #0x10
    // ldr r0, [sp, #0x18]
    // ldr r1, _022465A4 ; =0x000001FE
    // add r0, r0, r4
    // cmp r0, r1
    // ble _02246556
    // sub r0, r0, r1
    // sub r0, r4, r0
    // lsl r0, r0, #0x10
    // asr r4, r0, #0x10
    // ldr r0, [sp, #0x10]
    // ldrb r0, [r0]
    // add r0, r0, r4
    // cmp r0, #0xff
    // ble _02246568
    // sub r0, #0xff
    // sub r0, r4, r0
    // lsl r0, r0, #0x10
    // asr r4, r0, #0x10
    // ldr r0, [sp, #0x10]
    // ldr r2, [sp, #0x10]
    // ldrb r0, [r0]
    // add r1, r0, r4
    // ldr r0, [sp, #0x10]
    // strb r1, [r0]
    // ldr r0, [sp, #0x18]
    // ldr r1, [sp, #8]
    // add r0, r0, r4
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x14]
    // add r1, #0xd
    // bl SetMonData
    // ldr r0, [sp, #0x10]
    // add r0, r0, #1
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #8]
    // add r0, r0, #1
    // str r0, [sp, #8]
    // cmp r0, #6
    // bge _0224659A
    // b _0224646C
    // add r0, r7, #0
    // bl FreeMonPersonal
    // add sp, #0x28
    // pop {r3, r4, r5, r6, r7, pc}
    // _022465A4: .word 0x000001FE
    // TODO: decompile
}



void Task_GetPokemon(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x158
    // add r4, r1, #0
    // str r0, [sp, #0x10]
    // ldr r0, [r4]
    // bl BattleSystem_GetMessageLoader
    // str r0, [sp, #0x20]
    // ldr r0, [r4]
    // bl BattleSystem_GetPaletteData
    // add r5, r0, #0
    // ldr r0, [r4]
    // bl ov12_0223A8D4
    // mov r7, #1
    // str r0, [sp, #0x24]
    // add r0, r7, #0
    // ldr r6, [r4, #4]
    // bl MaskOfFlagNo
    // ldr r1, _02246900 ; =0x00003108
    // ldrb r1, [r6, r1]
    // tst r0, r1
    // beq _022465DC
    // mov r7, #3
    // ldr r0, [r4, #0x28]
    // cmp r0, #0x21
    // bls _022465E6
    // bl _02247216
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _022465F2: ; jump table
    // ldr r0, [r4, #0x24]
    // cmp r0, #0
    // bne _022466B0
    // mov r0, #3
    // str r0, [sp, #0x138]
    // mov r0, #5
    // str r0, [sp, #0x134]
    // ldr r0, _02246904 ; =0x00004E20
    // add r0, r7, r0
    // str r0, [sp, #0x13c]
    // ldr r0, [r4, #0x2c]
    // str r0, [sp, #0x140]
    // ldr r0, [r4]
    // bl BattleSystem_GetSpriteSystem
    // str r0, [sp, #0x14c]
    // ldr r0, [r4]
    // bl BattleSystem_GetPaletteData
    // str r0, [sp, #0x150]
    // mov r0, #1
    // str r0, [sp, #0x144]
    // mov r0, #0
    // str r0, [sp, #0x148]
    // ldr r0, [r4]
    // str r0, [sp, #0x154]
    // ldr r0, [r4]
    // bl BattleSystem_GetBattleType
    // mov r1, #2
    // tst r0, r1
    // beq _02246686
    // cmp r7, #1
    // bne _02246680
    // mov r0, #0x10
    // str r0, [sp, #0x130]
    // b _0224668A
    // mov r0, #0x11
    // str r0, [sp, #0x130]
    // b _0224668A
    // mov r0, #0xf
    // str r0, [sp, #0x130]
    // add r0, sp, #0x130
    // bl ov07_02233DB8
    // str r0, [r4, #8]
    // mov r0, #1
    // str r0, [r4, #0x28]
    // ldr r0, _02246908 ; =0x0000070A
    // bl PlaySE
    // ldr r2, [r4]
    // ldr r0, _0224690C ; =0x00002422
    // ldrh r1, [r2, r0]
    // add r1, r1, #1
    // strh r1, [r2, r0]
    // ldr r0, [r4, #8]
    // mov r1, #0
    // bl ov07_02232F58
    // b _022466F0
    // ldr r0, [r4]
    // mov r1, #0
    // bl BattleSystem_GetOpponentData
    // add r5, r0, #0
    // add r0, #0x88
    // ldr r0, [r0]
    // bl ov07_02233F20
    // cmp r0, #4
    // beq _022466F0
    // add r0, r5, #0
    // add r0, #0x88
    // ldr r0, [r0]
    // add r5, #0x88
    // str r0, [r4, #8]
    // mov r0, #0
    // str r0, [r5]
    // mov r0, #1
    // str r0, [r4, #0x28]
    // ldr r0, _02246908 ; =0x0000070A
    // bl PlaySE
    // ldr r2, [r4]
    // ldr r0, _0224690C ; =0x00002422
    // ldrh r1, [r2, r0]
    // add r1, r1, #1
    // strh r1, [r2, r0]
    // ldr r0, [r4, #8]
    // mov r1, #0
    // bl ov07_02232F58
    // mov r0, #0
    // add sp, #0x158
    // str r0, [r4, #0x40]
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [r4, #8]
    // mov r1, #0
    // bl ov07_02232F60
    // cmp r0, #0
    // bne _02246788
    // ldr r0, [r4]
    // bl BattleSystem_GetBattleType
    // mov r1, #1
    // tst r0, r1
    // beq _02246728
    // ldr r0, _02246910 ; =0x000005E6
    // mov r1, #0x75
    // bl sub_0200602C
    // ldr r0, [r4, #8]
    // mov r1, #2
    // bl ov07_02232F58
    // mov r0, #0x1a
    // add sp, #0x158
    // str r0, [r4, #0x28]
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, _02246914 ; =0x00000708
    // mov r1, #0x75
    // bl sub_0200602C
    // ldr r0, [r4, #8]
    // mov r1, #1
    // bl ov07_02232F58
    // mov r0, #2
    // str r0, [r4, #0x28]
    // mov r0, #0x17
    // add sp, #0x158
    // str r0, [r4, #0x34]
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [r4, #0x34]
    // sub r0, r0, #1
    // str r0, [r4, #0x34]
    // bne _02246788
    // ldr r0, [r4]
    // ldr r2, [r4, #0x2c]
    // add r1, r7, #0
    // bl ov12_022628A0
    // ldr r0, [r4]
    // ldr r1, [r4, #4]
    // bl ov12_02247228
    // str r0, [r4, #0x38]
    // cmp r0, #4
    // bge _02246766
    // b _02246768
    // mov r0, #3
    // str r0, [r4, #0x3c]
    // mov r0, #3
    // add sp, #0x158
    // str r0, [r4, #0x28]
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [r4, #8]
    // mov r1, #1
    // bl ov07_02232F60
    // cmp r0, #0
    // bne _02246788
    // ldr r0, [r4, #4]
    // bl Link_QueueNotEmpty
    // cmp r0, #0
    // bne _0224678C
    // bl _02247216
    // ldr r0, [r4, #8]
    // mov r1, #3
    // bl ov07_02232F58
    // mov r0, #4
    // add sp, #0x158
    // str r0, [r4, #0x28]
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [r4, #8]
    // mov r1, #3
    // bl ov07_02232F60
    // cmp r0, #0
    // bne _0224689E
    // mov r0, #5
    // add sp, #0x158
    // str r0, [r4, #0x28]
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [r4, #0x3c]
    // cmp r0, #0
    // bne _022467D0
    // ldr r0, [r4, #0x38]
    // cmp r0, #4
    // bne _022467C8
    // mov r0, #7
    // str r0, [r4, #0x28]
    // mov r0, #0xc
    // add sp, #0x158
    // str r0, [r4, #0x34]
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #0x1d
    // add sp, #0x158
    // str r0, [r4, #0x28]
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [r4, #8]
    // mov r1, #4
    // bl ov07_02232F58
    // mov r0, #6
    // str r0, [r4, #0x28]
    // mov r0, #0xc
    // add sp, #0x158
    // str r0, [r4, #0x34]
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [r4, #8]
    // mov r1, #4
    // bl ov07_02232F60
    // cmp r0, #0
    // bne _0224689E
    // ldr r0, [r4, #0x34]
    // sub r0, r0, #1
    // str r0, [r4, #0x34]
    // bne _0224689E
    // ldr r0, [r4, #0x3c]
    // add sp, #0x158
    // sub r0, r0, #1
    // str r0, [r4, #0x3c]
    // mov r0, #5
    // str r0, [r4, #0x28]
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [r4, #0x34]
    // sub r0, r0, #1
    // str r0, [r4, #0x34]
    // bne _0224689E
    // ldr r0, [r4, #8]
    // mov r1, #6
    // bl ov07_02232F58
    // ldr r0, _02246918 ; =0x00000709
    // mov r1, #0x75
    // bl sub_0200602C
    // mov r0, #8
    // add sp, #0x158
    // str r0, [r4, #0x28]
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [r4, #8]
    // mov r1, #6
    // bl ov07_02232F60
    // cmp r0, #0
    // bne _0224689E
    // ldr r1, _0224691C ; =0x00000363
    // add r0, sp, #0x10c
    // strh r1, [r0, #2]
    // mov r1, #0x82
    // strb r1, [r0, #1]
    // str r7, [sp, #0x110]
    // ldr r0, [r4]
    // bl BattleSystem_GetTextFrameDelay
    // add r3, r0, #0
    // ldr r0, [r4]
    // ldr r1, [sp, #0x20]
    // add r2, sp, #0x10c
    // bl BattleSystem_PrintBattleMessage
    // str r0, [r4, #0x30]
    // mov r0, #0x1e
    // str r0, [r4, #0x34]
    // mov r0, #9
    // str r0, [r4, #0x28]
    // ldr r0, _02246920 ; =SEQ_GS_WIN2
    // bl PlayBGM
    // ldr r0, [r4]
    // mov r1, #2
    // bl BattleSystem_SetCriticalHpMusicFlag
    // add sp, #0x158
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [r4, #0x30]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // bl TextPrinterCheckActive
    // cmp r0, #0
    // bne _0224689E
    // mov r0, #0xa
    // str r0, [r4, #0x28]
    // ldr r0, [r4, #8]
    // mov r1, #7
    // bl ov07_02232F58
    // add sp, #0x158
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [r4, #8]
    // mov r1, #7
    // bl ov07_02232F60
    // cmp r0, #0
    // bne _0224689E
    // ldr r0, [r4, #0x34]
    // sub r0, r0, #1
    // str r0, [r4, #0x34]
    // beq _022468A2
    // bl _02247216
    // ldr r0, [r4]
    // add r1, r7, #0
    // bl ov12_0223BD8C
    // ldr r2, [r4, #4]
    // ldr r0, [r4]
    // add r3, r2, r7
    // ldr r2, _02246924 ; =0x0000219C
    // add r1, r7, #0
    // ldrb r2, [r3, r2]
    // bl BattleSystem_GetPartyMon
    // add r6, r0, #0
    // ldr r0, [r4]
    // bl BattleSystem_GetBattleType
    // mov r1, #6
    // lsl r1, r1, #8
    // tst r0, r1
    // beq _02246950
    // ldr r2, [r4, #4]
    // ldr r0, [r4]
    // add r3, r2, r7
    // ldr r2, _02246924 ; =0x0000219C
    // add r1, r7, #0
    // ldrb r2, [r3, r2]
    // bl BattleSystem_GetPartyMon
    // add r2, r0, #0
    // ldr r0, [r4]
    // ldr r1, [r4, #4]
    // bl ov12_022567D4
    // ldr r0, [r4]
    // bl BattleSystem_GetMessageIcon
    // mov r1, #1
    // bl sub_0201649C
    // mov r1, #0
    // str r1, [sp]
    // mov r0, #0x10
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // ldr r2, _02246928 ; =0x0000FFFF
    // b _0224692C
    // nop
    // _02246900: .word 0x00003108
    // _02246904: .word 0x00004E20
    // _02246908: .word 0x0000070A
    // _0224690C: .word 0x00002422
    // _02246910: .word 0x000005E6
    // _02246914: .word 0x00000708
    // _02246918: .word 0x00000709
    // _0224691C: .word 0x00000363
    // _02246920: .word SEQ_GS_WIN2
    // _02246924: .word 0x0000219C
    // _02246928: .word 0x0000FFFF
    // add r0, r5, #0
    // mov r1, #0xf
    // mov r3, #1
    // bl PaletteData_BeginPaletteFade
    // mov r1, #0
    // ldr r0, [sp, #0x24]
    // mov r2, #0x10
    // add r3, r1, #0
    // str r1, [sp]
    // bl Pokepic_StartPaletteFadeAll
    // mov r0, #0x21
    // str r0, [r4, #0x28]
    // mov r0, #1
    // add sp, #0x158
    // str r0, [r4, #0x40]
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r6, #0
    // mov r1, #5
    // mov r2, #0
    // bl GetMonData
    // add r1, r0, #0
    // ldr r0, [r4]
    // bl BattleSystem_CheckMonCaught
    // cmp r0, #0
    // beq _022469E6
    // ldr r0, [r4]
    // bl BattleSystem_GetBattleType
    // mov r1, #1
    // lsl r1, r1, #0xc
    // tst r0, r1
    // ldr r0, [r4]
    // beq _022469B0
    // bl BattleSystem_GetMessageIcon
    // mov r1, #1
    // bl sub_0201649C
    // mov r1, #0
    // str r1, [sp]
    // mov r0, #0x10
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // ldr r2, _02246CB8 ; =0x0000FFFF
    // add r0, r5, #0
    // mov r1, #0xf
    // mov r3, #1
    // bl PaletteData_BeginPaletteFade
    // mov r1, #0
    // ldr r0, [sp, #0x24]
    // mov r2, #0x10
    // add r3, r1, #0
    // str r1, [sp]
    // bl Pokepic_StartPaletteFadeAll
    // mov r0, #0x16
    // str r0, [r4, #0x28]
    // mov r0, #1
    // add sp, #0x158
    // str r0, [r4, #0x40]
    // pop {r3, r4, r5, r6, r7, pc}
    // bl BattleSystem_GetMessageIcon
    // mov r1, #1
    // bl sub_0201649C
    // mov r1, #0
    // str r1, [sp]
    // mov r0, #0x10
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // ldr r2, _02246CB8 ; =0x0000FFFF
    // add r0, r5, #0
    // mov r1, #5
    // mov r3, #1
    // bl PaletteData_BeginPaletteFade
    // mov r1, #0
    // ldr r0, [sp, #0x24]
    // mov r2, #0x10
    // add r3, r1, #0
    // str r1, [sp]
    // bl Pokepic_StartPaletteFadeAll
    // mov r0, #0x10
    // add sp, #0x158
    // str r0, [r4, #0x28]
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r1, _02246CBC ; =0x00000367
    // add r0, sp, #0xe8
    // strh r1, [r0, #2]
    // mov r1, #0x82
    // strb r1, [r0, #1]
    // str r7, [sp, #0xec]
    // ldr r0, [r4]
    // bl BattleSystem_GetTextFrameDelay
    // add r3, r0, #0
    // ldr r0, [r4]
    // ldr r1, [sp, #0x20]
    // add r2, sp, #0xe8
    // bl BattleSystem_PrintBattleMessage
    // str r0, [r4, #0x30]
    // mov r0, #0x1e
    // str r0, [r4, #0x34]
    // mov r0, #0xb
    // str r0, [r4, #0x28]
    // ldr r0, [r4]
    // bl ov12_0223BB44
    // add sp, #0x158
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [r4, #0x30]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // bl TextPrinterCheckActive
    // cmp r0, #0
    // bne _02246A70
    // ldr r0, [r4, #0x34]
    // sub r0, r0, #1
    // str r0, [r4, #0x34]
    // bne _02246A70
    // mov r0, #0xc
    // str r0, [r4, #0x28]
    // mov r1, #0
    // str r1, [sp]
    // mov r0, #0x10
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // ldr r2, _02246CB8 ; =0x0000FFFF
    // add r0, r5, #0
    // mov r1, #5
    // mov r3, #1
    // bl PaletteData_BeginPaletteFade
    // mov r1, #0
    // ldr r0, [sp, #0x24]
    // str r1, [sp]
    // mov r2, #0x10
    // add r3, r1, #0
    // bl Pokepic_StartPaletteFadeAll
    // ldr r0, [r4]
    // bl BattleSystem_GetMessageIcon
    // mov r1, #1
    // bl sub_0201649C
    // add sp, #0x158
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r5, #0
    // bl PaletteData_GetSelectedBuffersBitmask
    // cmp r0, #0
    // beq _02246A72
    // b _02247216
    // ldr r0, [r4, #8]
    // bl ov07_02233ECC
    // ldr r0, [sp, #0x24]
    // bl PokepicManager_DeleteAllPics
    // ldr r0, [r4]
    // bl ov12_02237CC4
    // ldr r0, [r4]
    // mov r1, #0
    // bl ov12_0223A8F4
    // mov r1, #0
    // bl ov12_02265FC4
    // ldr r0, [r4]
    // mov r1, #1
    // bl ov12_0223A8F4
    // mov r1, #0
    // bl ov12_02265FC4
    // ldr r0, [r4]
    // mov r1, #0
    // bl BattleSystem_GetOpponentData
    // mov r1, #0
    // bl ov12_02261294
    // ldr r0, [r4]
    // bl BattleSystem_GetBgConfig
    // str r0, [sp, #0xd0]
    // ldr r0, [r4]
    // bl BattleSystem_GetPaletteData
    // str r0, [sp, #0xd4]
    // ldr r0, [sp, #0x24]
    // add r1, r7, #0
    // str r0, [sp, #0xd8]
    // mov r0, #5
    // str r0, [sp, #0xe4]
    // ldr r2, [r4, #4]
    // ldr r0, [r4]
    // add r3, r2, r7
    // ldr r2, _02246CC0 ; =0x0000219C
    // ldrb r2, [r3, r2]
    // bl BattleSystem_GetPartyMon
    // str r0, [sp, #0xdc]
    // ldr r0, [r4]
    // bl BattleSystem_GetPokedex
    // bl Pokedex_IsNatDexEnabled
    // str r0, [sp, #0xe0]
    // bl ObjCharTransfer_PopTaskManager
    // str r0, [r4, #0x54]
    // add r0, sp, #0xd0
    // bl ov18_021F8974
    // str r0, [r4, #0x50]
    // mov r0, #0xd
    // add sp, #0x158
    // str r0, [r4, #0x28]
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [r4, #0x50]
    // bl ov18_021F89C8
    // cmp r0, #1
    // bne _02246BFE
    // ldr r0, _02246CC4 ; =gSystem
    // ldr r1, [r0, #0x48]
    // mov r0, #1
    // tst r0, r1
    // beq _02246B14
    // mov r0, #0xe
    // str r0, [r4, #0x28]
    // b _02246B26
    // bl System_GetTouchNew
    // cmp r0, #0
    // beq _02246B26
    // ldr r0, _02246CC8 ; =0x000005DC
    // bl PlaySE
    // mov r0, #0xe
    // str r0, [r4, #0x28]
    // ldr r0, [r4, #0x28]
    // cmp r0, #0xe
    // bne _02246BFE
    // ldr r0, [r4]
    // bl BattleSystem_GetBattleType
    // mov r1, #1
    // lsl r1, r1, #0xc
    // tst r0, r1
    // ldr r2, _02246CB8 ; =0x0000FFFF
    // beq _02246B62
    // mov r1, #0
    // str r1, [sp]
    // mov r0, #0x10
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // add r0, r5, #0
    // mov r1, #0xf
    // mov r3, #1
    // bl PaletteData_BeginPaletteFade
    // mov r1, #0
    // ldr r0, [sp, #0x24]
    // mov r2, #0x10
    // add r3, r1, #0
    // str r1, [sp]
    // bl Pokepic_StartPaletteFadeAll
    // add sp, #0x158
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r1, #0
    // str r1, [sp]
    // mov r0, #0x10
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // add r0, r5, #0
    // mov r1, #5
    // mov r3, #1
    // bl PaletteData_BeginPaletteFade
    // add sp, #0x158
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [r4]
    // bl BattleSystem_GetBattleType
    // mov r1, #1
    // lsl r1, r1, #0xc
    // tst r0, r1
    // beq _02246B90
    // mov r0, #0x17
    // add sp, #0x158
    // str r0, [r4, #0x28]
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [r4, #0x50]
    // bl ov18_021F95F8
    // add r5, r0, #0
    // mov r1, #0
    // mov r2, #4
    // bl Pokepic_AddAttr
    // add r0, r5, #0
    // mov r1, #0
    // bl Pokepic_GetAttr
    // cmp r0, #0x80
    // blt _02246BFE
    // add r0, r5, #0
    // mov r1, #0
    // mov r2, #0x80
    // bl Pokepic_SetAttr
    // ldr r0, [r4, #0x50]
    // bl ov18_021F95AC
    // mov r0, #0xf
    // add sp, #0x158
    // str r0, [r4, #0x28]
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [r4, #0x50]
    // bl ov18_021F89D0
    // ldr r0, [r4, #0x54]
    // bl ObjCharTransfer_PushTaskManager
    // ldr r0, [r4]
    // bl ov12_02237D00
    // mov r0, #0x10
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r2, _02246CB8 ; =0x0000FFFF
    // add r0, r5, #0
    // mov r1, #5
    // mov r3, #1
    // bl PaletteData_BeginPaletteFade
    // mov r0, #0x11
    // add sp, #0x158
    // str r0, [r4, #0x28]
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r5, #0
    // bl PaletteData_GetSelectedBuffersBitmask
    // cmp r0, #0
    // beq _02246C00
    // b _02247216
    // ldr r2, [r4, #4]
    // ldr r0, [r4]
    // add r3, r2, r7
    // ldr r2, _02246CC0 ; =0x0000219C
    // add r1, r7, #0
    // ldrb r2, [r3, r2]
    // bl BattleSystem_GetPartyMon
    // add r6, r0, #0
    // ldr r0, [r4, #8]
    // bl ov07_02233ECC
    // ldr r0, [sp, #0x24]
    // bl PokepicManager_DeleteAllPics
    // ldr r0, [r4]
    // mov r1, #0
    // bl BattleSystem_GetOpponentData
    // mov r1, #0
    // bl ov12_02261294
    // ldr r0, [r4]
    // bl ov12_02237CC4
    // ldr r0, [r4]
    // bl ov12_02237D00
    // add r0, sp, #0xc0
    // add r1, r6, #0
    // mov r2, #2
    // bl GetPokemonSpriteCharAndPlttNarcIds
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x24]
    // add r1, sp, #0xc0
    // mov r2, #0x80
    // mov r3, #0x48
    // bl PokepicManager_CreatePokepic
    // mov r0, #0x10
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r2, _02246CB8 ; =0x0000FFFF
    // add r0, r5, #0
    // mov r1, #5
    // mov r3, #1
    // bl PaletteData_BeginPaletteFade
    // mov r2, #0
    // ldr r0, [sp, #0x24]
    // mov r1, #0x10
    // add r3, r2, #0
    // str r2, [sp]
    // bl Pokepic_StartPaletteFadeAll
    // mov r0, #0x11
    // add sp, #0x158
    // str r0, [r4, #0x28]
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r5, #0
    // bl PaletteData_GetSelectedBuffersBitmask
    // cmp r0, #0
    // bne _02246D4C
    // mov r0, #0x12
    // str r0, [r4, #0x28]
    // ldr r0, [r4]
    // bl BattleSystem_GetMessageIcon
    // mov r1, #0
    // bl sub_0201649C
    // add r0, r5, #0
    // mov r1, #1
    // bl PaletteData_SetAutoTransparent
    // add sp, #0x158
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r1, [r4, #4]
    // mov r0, #5
    // str r0, [sp]
    // mov r2, #0
    // ldr r0, _02246CC0 ; =0x0000219C
    // b _02246CCC
    // nop
    // _02246CB8: .word 0x0000FFFF
    // _02246CBC: .word 0x00000367
    // _02246CC0: .word 0x0000219C
    // _02246CC4: .word gSystem
    // _02246CC8: .word 0x000005DC
    // str r2, [sp, #4]
    // add r3, r1, r7
    // ldrb r0, [r3, r0]
    // mov r3, #0xd9
    // lsl r3, r3, #2
    // orr r0, r7
    // str r0, [sp, #8]
    // ldr r0, [r4]
    // bl BattleController_EmitDrawYesNoBox
    // ldr r0, [r4, #0x28]
    // add sp, #0x158
    // add r0, r0, #1
    // str r0, [r4, #0x28]
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r6, #0
    // mov r1, #0
    // bl BattleBuffer_GetNext
    // cmp r0, #0
    // beq _02246D4C
    // ldr r0, [r4, #4]
    // mov r1, #0
    // bl BattleBuffer_GetNext
    // cmp r0, #0xff
    // bne _02246D0A
    // mov r0, #0x16
    // add sp, #0x158
    // str r0, [r4, #0x28]
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [r4]
    // bl BattleSystem_GetMessageIcon
    // mov r1, #1
    // bl sub_0201649C
    // mov r1, #0
    // str r1, [sp]
    // mov r0, #0x10
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // ldr r2, _02247060 ; =0x0000FFFF
    // add r0, r5, #0
    // mov r1, #0xf
    // mov r3, #1
    // bl PaletteData_BeginPaletteFade
    // mov r1, #0
    // ldr r0, [sp, #0x24]
    // mov r2, #0x10
    // add r3, r1, #0
    // str r1, [sp]
    // bl Pokepic_StartPaletteFadeAll
    // mov r0, #0x14
    // add sp, #0x158
    // str r0, [r4, #0x28]
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r5, #0
    // bl PaletteData_GetSelectedBuffersBitmask
    // cmp r0, #0
    // beq _02246D4E
    // b _02247216
    // mov r0, #0
    // add r1, r0, #0
    // bl sub_0200FBF4
    // mov r0, #1
    // mov r1, #0
    // bl sub_0200FBF4
    // ldr r2, [r4, #4]
    // ldr r0, [r4]
    // add r3, r2, r7
    // ldr r2, _02247064 ; =0x0000219C
    // add r1, r7, #0
    // ldrb r2, [r3, r2]
    // bl BattleSystem_GetPartyMon
    // mov r1, #5
    // mov r2, #0
    // add r6, r0, #0
    // bl GetMonData
    // add r5, r0, #0
    // ldr r0, [r4]
    // bl BattleSystem_GetOptions
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // mov r0, #5
    // mov r1, #1
    // add r2, r5, #0
    // mov r3, #0xa
    // bl NamingScreen_CreateArgs
    // add r5, r0, #0
    // str r5, [r4, #0x54]
    // ldr r0, [r4]
    // mov r1, #0
    // bl BattleSystem_GetPartySize
    // cmp r0, #6
    // bge _02246DA6
    // mov r0, #0
    // b _02246DB0
    // ldr r0, [r4]
    // bl ov12_0223BB1C
    // ldr r1, _02247068 ; =0x00000496
    // add r0, r0, r1
    // str r0, [r5, #0x44]
    // add r0, r6, #0
    // mov r1, #0x70
    // mov r2, #0
    // bl GetMonData
    // str r0, [r5, #8]
    // ldr r0, [r4]
    // bl BattleSystem_GetPcStorage
    // str r0, [r5, #0x48]
    // add r0, r6, #0
    // mov r1, #0x6f
    // mov r2, #0
    // bl GetMonData
    // str r0, [r5, #0x10]
    // ldr r0, _0224706C ; =gOverlayTemplate_NamingScreen
    // add r1, r5, #0
    // mov r2, #5
    // bl OverlayManager_New
    // str r0, [r4, #0x50]
    // mov r0, #0x15
    // str r0, [r4, #0x28]
    // ldr r0, [r4]
    // bl BattleSystem_HpBar_Delete
    // ldr r0, [r4]
    // mov r5, #0
    // bl BattleSystem_GetMaxBattlers
    // cmp r0, #0
    // ble _02246E18
    // add r7, r5, #0
    // ldr r0, [r4]
    // add r1, r5, #0
    // bl BattleSystem_GetOpponentData
    // add r6, r0, #0
    // ldr r0, [r6, #0x18]
    // cmp r0, #0
    // beq _02246E0C
    // bl Sprite_DeleteAndFreeResources
    // str r7, [r6, #0x18]
    // ldr r0, [r4]
    // add r5, r5, #1
    // bl BattleSystem_GetMaxBattlers
    // cmp r5, r0
    // blt _02246DF6
    // ldr r0, [r4]
    // bl ov12_02237B6C
    // ldr r0, [r4]
    // mov r1, #1
    // bl ov12_0223BBF0
    // add sp, #0x158
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [r4, #0x50]
    // bl OverlayManager_Run
    // cmp r0, #0
    // beq _02246E82
    // ldr r2, [r4, #4]
    // ldr r5, [r4, #0x54]
    // add r3, r2, r7
    // ldr r2, _02247064 ; =0x0000219C
    // ldr r0, [r4]
    // ldrb r2, [r3, r2]
    // add r1, r7, #0
    // bl BattleSystem_GetPartyMon
    // ldr r1, [r5, #0x14]
    // cmp r1, #0
    // bne _02246E5C
    // ldr r2, [r5, #0x18]
    // mov r1, #0x78
    // bl SetMonData
    // ldr r0, [r4]
    // mov r1, #0x32
    // bl BattleSystem_GameStatIncrement
    // add r0, r5, #0
    // bl NamingScreen_DeleteArgs
    // ldr r0, [r4, #0x50]
    // bl OverlayManager_Delete
    // ldr r0, [r4]
    // mov r1, #2
    // bl ov12_0223BBF0
    // mov r0, #0x18
    // add sp, #0x158
    // str r0, [r4, #0x28]
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r5, #0
    // bl PaletteData_GetSelectedBuffersBitmask
    // cmp r0, #0
    // beq _02246E84
    // b _02247216
    // ldr r0, [r4]
    // mov r1, #0
    // bl BattleSystem_GetParty
    // ldr r2, [r4, #4]
    // str r0, [sp, #0x28]
    // add r3, r2, r7
    // ldr r2, _02247064 ; =0x0000219C
    // ldr r0, [r4]
    // ldrb r2, [r3, r2]
    // add r1, r7, #0
    // bl BattleSystem_GetPartyMon
    // add r6, r0, #0
    // ldr r0, [r4]
    // add r1, r7, #0
    // bl BattleSystem_SetPokedexCaught
    // ldr r0, [r4]
    // ldr r1, [r4, #4]
    // add r2, r6, #0
    // bl ov12_022567D4
    // ldr r0, [r4]
    // add r1, r6, #0
    // bl ov12_0223B870
    // mov r1, #0
    // ldr r0, [r4]
    // add r2, r1, #0
    // mov r3, #0xa
    // bl BattleController_EmitIncrementGameStat
    // ldr r0, [r4]
    // bl BattleSystem_GetBattleType
    // mov r1, #1
    // lsl r1, r1, #0xc
    // tst r0, r1
    // beq _02246F14
    // ldr r0, [r4, #0x28]
    // cmp r0, #0x17
    // bne _02246EEC
    // ldr r0, [r4, #0x50]
    // bl ov18_021F89D0
    // ldr r0, [r4, #0x54]
    // bl ObjCharTransfer_PushTaskManager
    // ldr r0, [r4]
    // bl ov12_02237D00
    // ldr r0, [r4]
    // bl BattleSystem_GetBugContestCaughtMon
    // add r1, r0, #0
    // add r0, r6, #0
    // bl CopyPokemonToPokemon
    // ldr r0, [r4, #0x28]
    // cmp r0, #0x16
    // bne _02246F0C
    // ldr r0, [r4]
    // bl BattleSystem_GetMessageIcon
    // mov r1, #1
    // bl sub_0201649C
    // mov r0, #0x21
    // add sp, #0x158
    // str r0, [r4, #0x28]
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [sp, #0x28]
    // add r1, r6, #0
    // bl Party_AddMon
    // cmp r0, #1
    // bne _02246F5E
    // ldr r0, [r4, #0x28]
    // cmp r0, #0x16
    // bne _02246F56
    // ldr r0, [r4]
    // bl BattleSystem_GetMessageIcon
    // mov r1, #1
    // bl sub_0201649C
    // mov r1, #0
    // str r1, [sp]
    // mov r0, #0x10
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // ldr r2, _02247060 ; =0x0000FFFF
    // add r0, r5, #0
    // mov r1, #0xf
    // mov r3, #1
    // bl PaletteData_BeginPaletteFade
    // mov r1, #0
    // ldr r0, [sp, #0x24]
    // mov r2, #0x10
    // add r3, r1, #0
    // str r1, [sp]
    // bl Pokepic_StartPaletteFadeAll
    // mov r0, #0x21
    // add sp, #0x158
    // str r0, [r4, #0x28]
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [r4]
    // bl BattleSystem_GetPcStorage
    // str r0, [sp, #0x1c]
    // bl PCStorage_GetActiveBox
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x1c]
    // bl PCStorage_FindFirstBoxWithEmptySlot
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x1c]
    // ldr r1, [sp, #0x14]
    // bl PCStorage_SetActiveBox
    // mov r5, #0
    // add r1, r5, #0
    // add r0, r6, #0
    // add r1, #0x42
    // mov r2, #0
    // bl GetMonData
    // add r1, r5, #0
    // str r0, [sp, #0x2c]
    // add r0, r6, #0
    // add r1, #0x3a
    // add r2, sp, #0x2c
    // bl SetMonData
    // add r5, r5, #1
    // cmp r5, #4
    // blt _02246F7E
    // add r0, r6, #0
    // bl Mon_UpdateGiratinaForm
    // mov r1, #0
    // mvn r1, r1
    // cmp r0, r1
    // beq _02246FB4
    // ldr r0, [r4]
    // add r1, r7, #0
    // bl BattleSystem_SetPokedexCaught
    // add r0, r6, #0
    // bl Mon_GetBoxMon
    // add r2, r0, #0
    // ldr r0, [sp, #0x1c]
    // ldr r1, [sp, #0x14]
    // bl PCStorage_PlaceMonInBoxFirstEmptySlot
    // ldr r0, [r4, #0x28]
    // cmp r0, #0x16
    // bne _02247026
    // ldr r1, [sp, #0x18]
    // ldr r0, [sp, #0x14]
    // cmp r1, r0
    // ldr r0, [r4]
    // bne _02246FEC
    // bl ov12_0223BB1C
    // ldr r1, _02247068 ; =0x00000496
    // add r1, r0, r1
    // add r0, sp, #0x9c
    // strh r1, [r0, #2]
    // mov r1, #0x93
    // strb r1, [r0, #1]
    // ldr r0, [sp, #0x18]
    // str r7, [sp, #0xa0]
    // str r0, [sp, #0xa4]
    // b _02247006
    // bl ov12_0223BB1C
    // ldr r1, _02247070 ; =0x00000498
    // add r1, r0, r1
    // add r0, sp, #0x9c
    // strh r1, [r0, #2]
    // mov r1, #0xaf
    // strb r1, [r0, #1]
    // ldr r0, [sp, #0x18]
    // str r7, [sp, #0xa0]
    // str r0, [sp, #0xa4]
    // ldr r0, [sp, #0x14]
    // str r0, [sp, #0xa8]
    // ldr r0, [r4]
    // bl BattleSystem_GetTextFrameDelay
    // add r3, r0, #0
    // ldr r0, [r4]
    // ldr r1, [sp, #0x20]
    // add r2, sp, #0x9c
    // bl BattleSystem_PrintBattleMessage
    // str r0, [r4, #0x30]
    // mov r0, #0x1e
    // str r0, [r4, #0x34]
    // mov r0, #0x19
    // add sp, #0x158
    // str r0, [r4, #0x28]
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #0x21
    // add sp, #0x158
    // str r0, [r4, #0x28]
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [r4, #0x30]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // bl TextPrinterCheckActive
    // cmp r0, #0
    // bne _022470E6
    // ldr r0, [r4, #0x34]
    // sub r0, r0, #1
    // str r0, [r4, #0x34]
    // bne _022470E6
    // ldr r0, [r4]
    // bl BattleSystem_GetMessageIcon
    // mov r1, #1
    // bl sub_0201649C
    // mov r1, #0
    // str r1, [sp]
    // mov r0, #0x10
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // ldr r2, _02247060 ; =0x0000FFFF
    // b _02247074
    // nop
    // _02247060: .word 0x0000FFFF
    // _02247064: .word 0x0000219C
    // _02247068: .word 0x00000496
    // _0224706C: .word gOverlayTemplate_NamingScreen
    // _02247070: .word 0x00000498
    // add r0, r5, #0
    // mov r1, #0xf
    // mov r3, #1
    // bl PaletteData_BeginPaletteFade
    // mov r1, #0
    // ldr r0, [sp, #0x24]
    // mov r2, #0x10
    // add r3, r1, #0
    // str r1, [sp]
    // bl Pokepic_StartPaletteFadeAll
    // mov r0, #0x21
    // add sp, #0x158
    // str r0, [r4, #0x28]
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [r4, #8]
    // mov r1, #2
    // bl ov07_02232F60
    // cmp r0, #0
    // bne _022470E6
    // ldr r0, [r4, #8]
    // bl ov07_02233ECC
    // ldr r1, _0224721C ; =0x0000035B
    // add r0, sp, #0x78
    // strh r1, [r0, #2]
    // mov r1, #0
    // strb r1, [r0, #1]
    // ldr r0, [r4]
    // bl BattleSystem_GetTextFrameDelay
    // add r3, r0, #0
    // ldr r0, [r4]
    // ldr r1, [sp, #0x20]
    // add r2, sp, #0x78
    // bl BattleSystem_PrintBattleMessage
    // str r0, [r4, #0x30]
    // mov r0, #0x1e
    // str r0, [r4, #0x34]
    // mov r0, #0x1b
    // add sp, #0x158
    // str r0, [r4, #0x28]
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [r4, #0x30]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // bl TextPrinterCheckActive
    // cmp r0, #0
    // bne _022470E6
    // ldr r0, [r4, #0x34]
    // sub r0, r0, #1
    // str r0, [r4, #0x34]
    // beq _022470E8
    // b _02247216
    // mov r1, #0xd7
    // lsl r1, r1, #2
    // add r0, sp, #0x2c
    // strh r1, [r0, #0x2a]
    // mov r1, #0
    // add r0, sp, #0x54
    // strb r1, [r0, #1]
    // ldr r0, [r4]
    // bl BattleSystem_GetTextFrameDelay
    // add r3, r0, #0
    // ldr r0, [r4]
    // ldr r1, [sp, #0x20]
    // add r2, sp, #0x54
    // bl BattleSystem_PrintBattleMessage
    // str r0, [r4, #0x30]
    // mov r0, #0x1e
    // str r0, [r4, #0x34]
    // mov r0, #0x1c
    // add sp, #0x158
    // str r0, [r4, #0x28]
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [r4, #0x30]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // bl TextPrinterCheckActive
    // cmp r0, #0
    // bne _02247216
    // ldr r0, [r4, #0x34]
    // sub r0, r0, #1
    // str r0, [r4, #0x34]
    // bne _02247216
    // mov r0, #0x5e
    // ldr r1, [r4, #4]
    // mov r2, #0
    // lsl r0, r0, #2
    // str r2, [r1, r0]
    // add r0, r4, #0
    // bl Heap_Free
    // ldr r0, [sp, #0x10]
    // bl SysTask_Destroy
    // add sp, #0x158
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [r4]
    // ldr r2, [r4, #0x2c]
    // add r1, r7, #0
    // mov r3, #1
    // bl BattleController_EmitPokemonSendOut
    // mov r0, #0x1e
    // str r0, [r4, #0x28]
    // mov r0, #2
    // add sp, #0x158
    // str r0, [r4, #0x34]
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [r4, #0x34]
    // sub r0, r0, #1
    // str r0, [r4, #0x34]
    // bne _02247216
    // ldr r0, [r4, #8]
    // bl ov07_02233ECC
    // mov r0, #0x1f
    // add sp, #0x158
    // str r0, [r4, #0x28]
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r6, #0
    // bl Link_QueueNotEmpty
    // cmp r0, #0
    // beq _02247216
    // ldr r1, [r4, #0x38]
    // ldr r0, _02247220 ; =0x0000035F
    // add r1, r1, r0
    // add r0, sp, #0x2c
    // strh r1, [r0, #6]
    // mov r1, #0
    // strb r1, [r0, #5]
    // ldr r0, [r4]
    // bl BattleSystem_GetTextFrameDelay
    // add r3, r0, #0
    // ldr r0, [r4]
    // ldr r1, [sp, #0x20]
    // add r2, sp, #0x30
    // bl BattleSystem_PrintBattleMessage
    // str r0, [r4, #0x30]
    // mov r0, #0x1e
    // str r0, [r4, #0x34]
    // mov r0, #0x20
    // add sp, #0x158
    // str r0, [r4, #0x28]
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [r4, #0x30]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // bl TextPrinterCheckActive
    // cmp r0, #0
    // bne _02247216
    // ldr r0, [r4, #0x34]
    // sub r0, r0, #1
    // str r0, [r4, #0x34]
    // bne _02247216
    // mov r0, #0x5e
    // ldr r1, [r4, #4]
    // mov r2, #0
    // lsl r0, r0, #2
    // str r2, [r1, r0]
    // add r0, r4, #0
    // bl Heap_Free
    // ldr r0, [sp, #0x10]
    // bl SysTask_Destroy
    // add sp, #0x158
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r5, #0
    // bl PaletteData_GetSelectedBuffersBitmask
    // cmp r0, #0
    // bne _02247216
    // ldr r0, [r4, #0x40]
    // cmp r0, #0
    // beq _022471F8
    // ldr r0, [r4, #8]
    // bl ov07_02233ECC
    // ldr r0, [sp, #0x24]
    // bl PokepicManager_DeleteAllPics
    // ldr r1, [r4]
    // ldr r0, _02247224 ; =0x00002420
    // mov r2, #4
    // strb r2, [r1, r0]
    // mov r0, #0x5e
    // ldr r1, [r4, #4]
    // mov r2, #0
    // lsl r0, r0, #2
    // str r2, [r1, r0]
    // add r0, r4, #0
    // bl Heap_Free
    // ldr r0, [sp, #0x10]
    // bl SysTask_Destroy
    // add sp, #0x158
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0224721C: .word 0x0000035B
    // _02247220: .word 0x0000035F
    // _02247224: .word 0x00002420
    // TODO: decompile
}



void ov12_02247228(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // add r7, r0, #0
    // add r4, r1, #0
    // bl BattleSystem_GetBattleType
    // mov r1, #6
    // lsl r1, r1, #8
    // tst r0, r1
    // beq _02247242
    // add sp, #0xc
    // mov r0, #4
    // pop {r4, r5, r6, r7, pc}
    // mov r0, #0x4a
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // ldr r1, [r4, #0x6c]
    // cmp r0, #5
    // bne _02247278
    // mov r0, #0xc0
    // mul r0, r1
    // add r1, r4, r0
    // mov r0, #0xb5
    // lsl r0, r0, #6
    // ldrh r0, [r1, r0]
    // mov r1, #8
    // bl GetMonBaseStat
    // ldr r1, _02247528 ; =0x0000311C
    // ldr r2, _0224752C ; =ov12_0226C3CE
    // ldrb r1, [r4, r1]
    // lsl r1, r1, #1
    // ldrb r2, [r2, r1]
    // mul r2, r0
    // add r0, r2, #0
    // ldr r2, _02247530 ; =ov12_0226C3CE + 1
    // ldrb r1, [r2, r1]
    // bl _s32_div_f
    // b _0224728A
    // mov r0, #0xc0
    // mul r0, r1
    // add r1, r4, r0
    // mov r0, #0xb5
    // lsl r0, r0, #6
    // ldrh r0, [r1, r0]
    // mov r1, #8
    // bl GetMonBaseStat
    // add r5, r0, #0
    // mov r0, #0xa
    // str r0, [sp, #4]
    // ldr r1, [r4, #0x6c]
    // add r0, r4, #0
    // mov r2, #0x1b
    // mov r3, #0
    // bl GetBattlerVar
    // add r6, r0, #0
    // ldr r1, [r4, #0x6c]
    // add r0, r4, #0
    // mov r2, #0x1c
    // mov r3, #0
    // bl GetBattlerVar
    // add r3, r0, #0
    // mov r0, #0x4a
    // lsl r0, r0, #2
    // ldr r1, [r4, r0]
    // cmp r1, #5
    // bgt _022472B8
    // b _02247522
    // add r2, r0, #0
    // add r2, #0xc6
    // cmp r1, r2
    // bgt _02247316
    // add r2, r0, #0
    // add r2, #0xc6
    // cmp r1, r2
    // blt _022472CA
    // b _0224745E
    // add r2, r0, #0
    // add r2, #0xc4
    // cmp r1, r2
    // bgt _0224730C
    // add r2, r0, #0
    // add r2, #0xc4
    // cmp r1, r2
    // blt _022472DC
    // b _02247410
    // cmp r1, #0xf
    // bhi _02247314
    // add r2, r1, r1
    // add r2, pc
    // ldrh r2, [r2, #6]
    // lsl r2, r2, #0x10
    // asr r2, r2, #0x10
    // add pc, r2
    // _022472EC: ; jump table
    // ldr r0, _02247534 ; =0x000001ED
    // cmp r1, r0
    // bne _02247314
    // b _0224742C
    // b _0224750E
    // add r2, r0, #0
    // add r2, #0xc8
    // cmp r1, r2
    // bgt _02247332
    // add r2, r0, #0
    // add r2, #0xc8
    // cmp r1, r2
    // blt _02247328
    // b _022474AC
    // add r0, #0xc7
    // cmp r1, r0
    // bne _02247330
    // b _0224746E
    // b _0224750E
    // add r2, r0, #0
    // add r2, #0xc9
    // cmp r1, r2
    // bgt _02247340
    // add r0, #0xc9
    // cmp r1, r0
    // b _0224750E
    // add r2, r0, #0
    // add r2, #0xcb
    // cmp r1, r2
    // bgt _02247362
    // add r2, r0, #0
    // add r2, #0xca
    // cmp r1, r2
    // blt _02247362
    // add r2, r0, #0
    // add r2, #0xca
    // cmp r1, r2
    // bne _0224735A
    // b _022474E2
    // add r0, #0xcb
    // cmp r1, r0
    // bne _02247362
    // b _02247508
    // b _0224750E
    // cmp r6, #0xb
    // beq _02247374
    // cmp r3, #0xb
    // beq _02247374
    // cmp r6, #6
    // beq _02247374
    // cmp r3, #6
    // bne _022473FA
    // mov r0, #0x1e
    // str r0, [sp, #4]
    // b _02247512
    // add r0, r7, #0
    // bl BattleSystem_GetTerrainId
    // cmp r0, #7
    // bne _022473FA
    // mov r0, #0x23
    // str r0, [sp, #4]
    // b _02247512
    // ldr r1, [r4, #0x6c]
    // mov r0, #0xc0
    // mul r0, r1
    // add r1, r4, r0
    // ldr r0, _02247538 ; =0x00002D74
    // ldrb r1, [r1, r0]
    // cmp r1, #0x28
    // bhs _022473FA
    // mov r0, #0x28
    // sub r0, r0, r1
    // str r0, [sp, #4]
    // cmp r0, #0xa
    // bhs _022473FA
    // mov r0, #0xa
    // str r0, [sp, #4]
    // b _02247512
    // ldr r2, [r4, #0x6c]
    // mov r1, #0xc0
    // mul r1, r2
    // add r2, r4, r1
    // mov r1, #0xb5
    // lsl r1, r1, #6
    // ldrh r1, [r2, r1]
    // add r0, r7, #0
    // bl BattleSystem_CheckMonCaught
    // cmp r0, #1
    // bne _022473FA
    // mov r0, #0x1e
    // str r0, [sp, #4]
    // b _02247512
    // add r0, #0x28
    // ldr r0, [r4, r0]
    // str r0, [sp, #4]
    // add r0, #0xa
    // str r0, [sp, #4]
    // cmp r0, #0x28
    // bls _022473FA
    // mov r0, #0x28
    // str r0, [sp, #4]
    // b _02247512
    // add r0, r7, #0
    // bl BattleSystem_GetTimezone
    // cmp r0, #3
    // beq _022473FC
    // add r0, r7, #0
    // bl BattleSystem_GetTimezone
    // cmp r0, #4
    // beq _022473FC
    // add r0, r7, #0
    // bl BattleSystem_GetTerrainId
    // cmp r0, #5
    // beq _022473FC
    // b _02247512
    // mov r0, #0x23
    // str r0, [sp, #4]
    // b _02247512
    // add r0, #0x28
    // ldr r0, [r4, r0]
    // cmp r0, #1
    // bge _02247506
    // mov r0, #0x28
    // str r0, [sp, #4]
    // b _02247512
    // ldr r1, [r4, #0x6c]
    // mov r0, #0xc0
    // mul r0, r1
    // add r1, r4, r0
    // mov r0, #0xb5
    // lsl r0, r0, #6
    // ldrh r0, [r1, r0]
    // mov r1, #3
    // bl GetMonBaseStat
    // cmp r0, #0x64
    // blo _02247512
    // lsl r5, r5, #2
    // b _02247512
    // ldr r0, [r4, #0x64]
    // mov r1, #0xc0
    // add r2, r0, #0
    // mul r2, r1
    // ldr r3, [r4, #0x6c]
    // add r0, r4, r2
    // ldr r2, _02247538 ; =0x00002D74
    // mul r1, r3
    // add r1, r4, r1
    // ldrb r0, [r0, r2]
    // ldrb r2, [r1, r2]
    // cmp r0, r2
    // bls _02247512
    // lsr r1, r0, #1
    // cmp r1, r2
    // bgt _02247450
    // lsl r5, r5, #1
    // b _02247512
    // lsr r0, r0, #2
    // cmp r0, r2
    // bgt _0224745A
    // lsl r5, r5, #2
    // b _02247512
    // lsl r5, r5, #3
    // b _02247512
    // add r0, r7, #0
    // bl ov12_0223AAB8
    // cmp r0, #0
    // beq _02247512
    // lsl r0, r5, #1
    // add r5, r5, r0
    // b _02247512
    // ldr r1, [r4, #0x6c]
    // mov r0, #0xc0
    // mul r0, r1
    // add r1, r4, r0
    // mov r0, #0xb5
    // lsl r0, r0, #6
    // ldrh r0, [r1, r0]
    // bl ov12_02247668
    // mov r2, #1
    // lsl r2, r2, #0xc
    // cmp r0, r2
    // blt _0224748C
    // add r5, #0x28
    // b _02247512
    // mov r1, #3
    // lsl r1, r1, #0xa
    // cmp r0, r1
    // blt _02247498
    // add r5, #0x1e
    // b _02247512
    // lsr r1, r2, #1
    // cmp r0, r1
    // blt _022474A2
    // add r5, #0x14
    // b _02247512
    // lsr r0, r2, #2
    // cmp r5, r0
    // bge _02247512
    // sub r5, #0x14
    // b _02247512
    // ldr r2, [r4, #0x6c]
    // mov r0, #0xc0
    // add r1, r2, #0
    // ldr r2, [r4, #0x64]
    // mul r1, r0
    // mul r0, r2
    // add r3, r4, r0
    // mov r0, #0xb5
    // lsl r0, r0, #6
    // add r6, r4, r1
    // ldrh r2, [r3, r0]
    // ldrh r1, [r6, r0]
    // cmp r2, r1
    // bne _02247512
    // add r1, r0, #0
    // add r1, #0x7e
    // add r0, #0x7e
    // ldrb r1, [r3, r1]
    // ldrb r0, [r6, r0]
    // lsl r1, r1, #0x1c
    // lsl r0, r0, #0x1c
    // lsr r1, r1, #0x1c
    // lsr r0, r0, #0x1c
    // cmp r1, r0
    // beq _02247512
    // lsl r5, r5, #3
    // b _02247512
    // ldr r3, [r4, #0x6c]
    // mov r2, #0xc0
    // mul r2, r3
    // add r3, r4, r2
    // mov r2, #0xb5
    // lsl r2, r2, #6
    // ldrh r3, [r3, r2]
    // ldr r1, _0224753C ; =ov12_0226C3E8
    // mov r0, #0
    // ldrh r2, [r1]
    // cmp r2, r3
    // bne _022474FE
    // lsl r5, r5, #2
    // b _02247512
    // add r0, r0, #1
    // add r1, r1, #2
    // cmp r0, #0xe
    // blo _022474F4
    // b _02247512
    // mov r0, #0xf
    // str r0, [sp, #4]
    // b _02247512
    // mov r0, #0xa
    // str r0, [sp, #4]
    // cmp r5, #0xff
    // ble _0224751A
    // mov r5, #0xff
    // b _0224754A
    // cmp r5, #0
    // bge _0224754A
    // mov r5, #1
    // b _0224754A
    // ldr r0, _02247540 ; =ov12_0226C2EC
    // b _02247544
    // nop
    // _02247528: .word 0x0000311C
    // _0224752C: .word ov12_0226C3CE
    // _02247530: .word ov12_0226C3CE + 1
    // _02247534: .word 0x000001ED
    // _02247538: .word 0x00002D74
    // _0224753C: .word ov12_0226C3E8
    // _02247540: .word ov12_0226C2EC
    // sub r1, r1, #2
    // ldrb r0, [r0, r1]
    // str r0, [sp, #4]
    // ldr r1, [r4, #0x6c]
    // mov r0, #0xc0
    // add r6, r1, #0
    // mul r6, r0
    // ldr r0, _0224764C ; =0x00002D90
    // add r1, r4, r6
    // ldr r1, [r1, r0]
    // lsl r0, r1, #1
    // add r0, r1, r0
    // str r0, [sp]
    // ldr r0, [sp, #4]
    // mov r1, #0xa
    // mul r0, r5
    // bl _u32_div_f
    // ldr r1, _02247650 ; =0x00002D8C
    // add r2, r4, r6
    // ldr r1, [r2, r1]
    // lsl r2, r1, #1
    // ldr r1, [sp]
    // sub r1, r1, r2
    // mul r1, r0
    // add r0, r1, #0
    // ldr r1, [sp]
    // bl _u32_div_f
    // add r1, r0, #0
    // ldr r0, _02247654 ; =0x00002DAC
    // add r2, r4, r6
    // ldr r2, [r2, r0]
    // mov r0, #0x27
    // tst r0, r2
    // beq _0224758E
    // lsl r1, r1, #1
    // mov r0, #0xd8
    // tst r0, r2
    // beq _022475A0
    // mov r0, #0xf
    // mul r0, r1
    // mov r1, #0xa
    // bl _u32_div_f
    // add r1, r0, #0
    // cmp r1, #0xff
    // blo _022475A8
    // mov r5, #4
    // b _02247618
    // ldr r0, _02247658 ; =0x040002B0
    // mov r2, #0
    // strh r2, [r0]
    // mov r0, #0xff
    // lsl r0, r0, #0x10
    // bl _u32_div_f
    // ldr r1, _0224765C ; =0x040002B8
    // add r2, r1, #0
    // str r0, [r1]
    // sub r2, #8
    // lsr r0, r1, #0xb
    // ldrh r1, [r2]
    // tst r1, r0
    // bne _022475C0
    // ldr r0, _02247658 ; =0x040002B0
    // lsr r1, r0, #0xb
    // ldrh r2, [r0]
    // tst r2, r1
    // bne _022475CA
    // ldr r3, _02247660 ; =0x040002B4
    // mov r1, #0
    // ldr r2, [r3]
    // strh r1, [r0]
    // str r2, [r3, #4]
    // sub r2, r3, #4
    // lsr r0, r3, #0xb
    // ldrh r1, [r2]
    // tst r1, r0
    // bne _022475DE
    // ldr r2, _02247658 ; =0x040002B0
    // lsr r0, r2, #0xb
    // ldrh r1, [r2]
    // tst r1, r0
    // bne _022475E8
    // ldr r1, _02247660 ; =0x040002B4
    // ldr r0, _02247664 ; =0x000FFFF0
    // ldr r1, [r1]
    // bl _u32_div_f
    // add r6, r0, #0
    // mov r5, #0
    // add r0, r7, #0
    // bl BattleSystem_Random
    // cmp r0, r6
    // bhs _0224760C
    // add r5, r5, #1
    // cmp r5, #4
    // blt _022475FC
    // mov r0, #0x4a
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // cmp r0, #1
    // bne _02247618
    // mov r5, #4
    // cmp r5, #4
    // bge _02247622
    // add sp, #0xc
    // add r0, r5, #0
    // pop {r4, r5, r6, r7, pc}
    // mov r0, #0x4a
    // lsl r0, r0, #2
    // ldr r1, [r4, r0]
    // add r0, #0xc9
    // cmp r1, r0
    // bne _02247646
    // mov r1, #0xc8
    // add r0, sp, #8
    // strb r1, [r0]
    // ldr r1, [r4, #0x6c]
    // add r0, r7, #0
    // mov r2, #0
    // bl BattleSystem_GetPartyMon
    // mov r1, #9
    // add r2, sp, #8
    // bl SetMonData
    // add r0, r5, #0
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // _0224764C: .word 0x00002D90
    // _02247650: .word 0x00002D8C
    // _02247654: .word 0x00002DAC
    // _02247658: .word 0x040002B0
    // _0224765C: .word 0x040002B8
    // _02247660: .word 0x040002B4
    // _02247664: .word 0x000FFFF0
    // TODO: decompile
}



void ov12_02247668(void) {
    // str r1, [sp]
    GfGfxLoader_LoadFromNarc(0x4a, 1, 0, 3);
    // ldr r4, [r0, r1]
    Heap_Free((r4 << 2));
}



void GetBattlerIDBySide(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // add r4, r0, #0
    // add r6, r1, #0
    // cmp r2, #0x16
    // bgt _022476D6
    // cmp r2, #0
    // blt _022476DC
    // add r1, r2, r2
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _022476A8: ; jump table
    // cmp r2, #0xff
    // bne _022476DC
    // b _022478DC
    // ldr r5, [r6, #0x64]
    // b _022478E2
    // ldr r5, [r6, #0x6c]
    // b _022478E2
    // ldr r5, [r6, #0x74]
    // b _022478E2
    // ldr r5, [r6, #0x78]
    // b _022478E2
    // add r6, #0x94
    // ldr r5, [r6]
    // b _022478E2
    // add r6, #0x80
    // ldr r5, [r6]
    // b _022478E2
    // bl BattleSystem_GetMaxBattlers
    // add r6, r0, #0
    // mov r5, #0
    // cmp r6, #0
    // ble _0224771C
    // mov r7, #1
    // add r0, r4, #0
    // add r1, r5, #0
    // bl BattleSystem_GetOpponentData
    // ldr r1, _022478F0 ; =0x00000195
    // ldrb r0, [r0, r1]
    // tst r0, r7
    // bne _0224771C
    // add r5, r5, #1
    // cmp r5, r6
    // blt _02247706
    // b _022478E2
    // bl BattleSystem_GetMaxBattlers
    // add r6, r0, #0
    // mov r5, #0
    // cmp r6, #0
    // ble _02247744
    // ldr r7, _022478F0 ; =0x00000195
    // add r0, r4, #0
    // add r1, r5, #0
    // bl BattleSystem_GetOpponentData
    // ldrb r0, [r0, r7]
    // cmp r0, #3
    // beq _02247744
    // cmp r0, #1
    // beq _02247744
    // add r5, r5, #1
    // cmp r5, r6
    // blt _0224772C
    // b _022478E2
    // bl BattleSystem_GetBattleType
    // mov r1, #2
    // tst r0, r1
    // beq _02247754
    // mov r6, #5
    // b _02247756
    // mov r6, #1
    // add r0, r4, #0
    // bl BattleSystem_GetMaxBattlers
    // add r7, r0, #0
    // mov r5, #0
    // cmp r7, #0
    // ble _0224777A
    // add r0, r4, #0
    // add r1, r5, #0
    // bl BattleSystem_GetOpponentData
    // ldr r1, _022478F0 ; =0x00000195
    // ldrb r0, [r0, r1]
    // cmp r0, r6
    // beq _0224777A
    // add r5, r5, #1
    // cmp r5, r7
    // blt _02247764
    // b _022478E2
    // bl BattleSystem_GetMaxBattlers
    // add r6, r0, #0
    // mov r5, #0
    // cmp r6, #0
    // ble _022477A0
    // mov r7, #1
    // add r0, r4, #0
    // add r1, r5, #0
    // bl BattleSystem_GetOpponentData
    // ldr r1, _022478F0 ; =0x00000195
    // ldrb r0, [r0, r1]
    // tst r0, r7
    // beq _022477A0
    // add r5, r5, #1
    // cmp r5, r6
    // blt _0224778A
    // b _022478E2
    // bl BattleSystem_GetMaxBattlers
    // add r6, r0, #0
    // mov r5, #0
    // cmp r6, #0
    // ble _022477C8
    // ldr r7, _022478F0 ; =0x00000195
    // add r0, r4, #0
    // add r1, r5, #0
    // bl BattleSystem_GetOpponentData
    // ldrb r0, [r0, r7]
    // cmp r0, #2
    // beq _022477C8
    // cmp r0, #0
    // beq _022477C8
    // add r5, r5, #1
    // cmp r5, r6
    // blt _022477B0
    // b _022478E2
    // bl BattleSystem_GetBattleType
    // mov r1, #2
    // tst r0, r1
    // beq _022477D8
    // mov r6, #4
    // b _022477DA
    // mov r6, #0
    // add r0, r4, #0
    // bl BattleSystem_GetMaxBattlers
    // add r7, r0, #0
    // mov r5, #0
    // cmp r7, #0
    // ble _022478E2
    // add r0, r4, #0
    // add r1, r5, #0
    // bl BattleSystem_GetOpponentData
    // ldr r1, _022478F0 ; =0x00000195
    // ldrb r0, [r0, r1]
    // cmp r0, r6
    // beq _022478E2
    // add r5, r5, #1
    // cmp r5, r7
    // blt _022477E8
    // b _022478E2
    // mov r0, #0x47
    // lsl r0, r0, #2
    // ldr r5, [r6, r0]
    // b _022478E2
    // mov r0, #0x12
    // lsl r0, r0, #4
    // ldr r5, [r6, r0]
    // b _022478E2
    // bl BattleSystem_GetMaxBattlers
    // mov r5, #0
    // str r0, [sp, #4]
    // cmp r0, #0
    // ble _02247842
    // ldr r7, [r6, #0x64]
    // cmp r5, r7
    // beq _0224783A
    // add r0, r4, #0
    // add r1, r5, #0
    // bl BattleSystem_GetFieldSide
    // str r0, [sp, #8]
    // add r0, r4, #0
    // add r1, r7, #0
    // bl BattleSystem_GetFieldSide
    // ldr r1, [sp, #8]
    // cmp r1, r0
    // beq _02247842
    // ldr r0, [sp, #4]
    // add r5, r5, #1
    // cmp r5, r0
    // blt _0224781C
    // ldr r0, [sp, #4]
    // cmp r5, r0
    // bne _022478E2
    // mov r5, #0
    // b _022478E2
    // bl BattleSystem_GetMaxBattlers
    // mov r5, #0
    // str r0, [sp]
    // cmp r0, #0
    // ble _0224787E
    // ldr r7, [r6, #0x6c]
    // cmp r5, r7
    // beq _02247876
    // add r0, r4, #0
    // add r1, r5, #0
    // bl BattleSystem_GetFieldSide
    // str r0, [sp, #0xc]
    // add r0, r4, #0
    // add r1, r7, #0
    // bl BattleSystem_GetFieldSide
    // ldr r1, [sp, #0xc]
    // cmp r1, r0
    // beq _0224787E
    // ldr r0, [sp]
    // add r5, r5, #1
    // cmp r5, r0
    // blt _02247858
    // ldr r0, [sp]
    // cmp r5, r0
    // bne _022478E2
    // mov r5, #0
    // b _022478E2
    // bl BattleSystem_GetMaxBattlers
    // add r7, r0, #0
    // ldr r1, [r6, #0x64]
    // add r0, r4, #0
    // bl BattleSystem_GetFieldSide
    // add r6, r0, #0
    // mov r5, #0
    // cmp r7, #0
    // ble _022478E2
    // add r0, r4, #0
    // add r1, r5, #0
    // bl BattleSystem_GetFieldSide
    // cmp r6, r0
    // bne _022478E2
    // add r5, r5, #1
    // cmp r5, r7
    // blt _0224789E
    // b _022478E2
    // bl BattleSystem_GetMaxBattlers
    // add r7, r0, #0
    // ldr r1, [r6, #0x6c]
    // add r0, r4, #0
    // bl BattleSystem_GetFieldSide
    // add r6, r0, #0
    // mov r5, #0
    // cmp r7, #0
    // ble _022478E2
    // add r0, r4, #0
    // add r1, r5, #0
    // bl BattleSystem_GetFieldSide
    // cmp r6, r0
    // bne _022478E2
    // add r5, r5, #1
    // cmp r5, r7
    // blt _022478C8
    // b _022478E2
    // mov r0, #0x46
    // lsl r0, r0, #2
    // ldr r5, [r6, r0]
    // cmp r5, #0xff
    // bne _022478EA
    // bl GF_AssertFail
    // add r0, r5, #0
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // _022478F0: .word 0x00000195
    // TODO: decompile
}



void InitBattleMsgData(void) {
    BattleScriptReadWord();
    // str r0, [r4]
    BattleScriptReadWord(r7);
    *((u32*)(r4 + 4)) = r0;
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0224791A: ; jump table
    BattleScriptReadWord(r7);
    *((u32*)(r4 + 8)) = r0;
}



void InitBattleMsg(void) {
    *((u16*)(r3 + 2)) = *((u32*)r2);
    *((u8*)(r3 + 1)) = *((u32*)(r2 + 4));
    // add r2, r2, r2
    // add r2, pc
    // asr r2, r2, #0x10
    // add pc, r2
    // _022479E6: ; jump table
    GetBattlerIDBySide(*((u32*)(r2 + 8)));
    *((u32*)(r5 + 4)) = r0;
    ov12_022480C0(*((u32*)(r4 + 8)));
    *((u32*)(r5 + 4)) = r0;
    GetMoveMessageNo(r6, *((u32*)(r4 + 8)));
    *((u32*)(r5 + 4)) = r0;
    ov12_022481D0(r6, *((u32*)(r4 + 8)));
    *((u32*)(r5 + 4)) = r0;
    ov12_0224810C(r6, *((u32*)(r4 + 8)));
    *((u32*)(r5 + 4)) = r0;
    ov12_02248184(r6, *((u32*)(r4 + 8)));
    *((u32*)(r5 + 4)) = r0;
    ov12_02248220(*((u32*)(r4 + 8)));
    *((u32*)(r5 + 4)) = r0;
    ov12_022480C0(*((u32*)(r4 + 8)));
    *((u32*)(r5 + 4)) = r0;
    ov12_022480C0(r7, r6, *((u32*)(r4 + 0xc)));
    *((u32*)(r5 + 8)) = r0;
    ov12_022480C0(*((u32*)(r4 + 8)));
    *((u32*)(r5 + 4)) = r0;
    GetMoveMessageNo(r6, *((u32*)(r4 + 0xc)));
    *((u32*)(r5 + 8)) = r0;
    ov12_022480C0(*((u32*)(r4 + 8)));
    *((u32*)(r5 + 4)) = r0;
    ov12_0224819C(r7, r6, *((u32*)(r4 + 0xc)));
    *((u32*)(r5 + 8)) = r0;
    ov12_022480C0(*((u32*)(r4 + 8)));
    *((u32*)(r5 + 4)) = r0;
    ov12_022481D0(r6, *((u32*)(r4 + 0xc)));
    *((u32*)(r5 + 8)) = r0;
    ov12_022480C0(*((u32*)(r4 + 8)));
    *((u32*)(r5 + 4)) = r0;
    ov12_02248190(r6, *((u32*)(r4 + 0xc)));
    *((u32*)(r5 + 8)) = r0;
    ov12_022480C0(*((u32*)(r4 + 8)));
    *((u32*)(r5 + 4)) = r0;
    ov12_022481E8(r7, r6, *((u32*)(r4 + 0xc)));
    *((u32*)(r5 + 8)) = r0;
    ov12_022480C0(*((u32*)(r4 + 8)));
    *((u32*)(r5 + 4)) = r0;
    ov12_0224810C(r6, *((u32*)(r4 + 0xc)));
    *((u32*)(r5 + 8)) = r0;
    ov12_022480C0(*((u32*)(r4 + 8)));
    *((u32*)(r5 + 4)) = r0;
    ov12_02248200(r6, *((u32*)(r4 + 0xc)));
    *((u32*)(r5 + 8)) = r0;
    ov12_022480C0(*((u32*)(r4 + 8)));
    *((u32*)(r5 + 4)) = r0;
    ov12_02248184(r6, *((u32*)(r4 + 0xc)));
    *((u32*)(r5 + 8)) = r0;
    ov12_022480C0(*((u32*)(r4 + 8)));
    *((u32*)(r5 + 4)) = r0;
    ov12_02248220(r7, r6, *((u32*)(r4 + 0xc)));
    *((u32*)(r5 + 8)) = r0;
    ov12_022480C0(*((u32*)(r4 + 8)));
    *((u32*)(r5 + 4)) = r0;
    *((u32*)(r5 + 8)) = *((u32*)(r4 + 0xc));
    GetMoveMessageNo(r6, *((u32*)(r4 + 8)));
    *((u32*)(r5 + 4)) = r0;
    GetBattlerIDBySide(r7, r6, *((u32*)(r4 + 0xc)));
    *((u32*)(r5 + 8)) = r0;
    GetMoveMessageNo(r6, *((u32*)(r4 + 8)));
    *((u32*)(r5 + 4)) = r0;
    ov12_022480C0(r7, r6, *((u32*)(r4 + 0xc)));
    *((u32*)(r5 + 8)) = r0;
    GetMoveMessageNo(r6, *((u32*)(r4 + 8)));
    *((u32*)(r5 + 4)) = r0;
    GetMoveMessageNo(r6, *((u32*)(r4 + 0xc)));
    *((u32*)(r5 + 8)) = r0;
    ov12_0224819C(*((u32*)(r4 + 8)));
    *((u32*)(r5 + 4)) = r0;
    ov12_022480C0(r7, r6, *((u32*)(r4 + 0xc)));
    *((u32*)(r5 + 8)) = r0;
    ov12_0224810C(r6, *((u32*)(r4 + 8)));
    *((u32*)(r5 + 4)) = r0;
    GetMoveMessageNo(r6, *((u32*)(r4 + 0xc)));
    *((u32*)(r5 + 8)) = r0;
    ov12_02248184(r6, *((u32*)(r4 + 8)));
    *((u32*)(r5 + 4)) = r0;
    ov12_02248184(r6, *((u32*)(r4 + 0xc)));
    *((u32*)(r5 + 8)) = r0;
    ov12_02248220(*((u32*)(r4 + 8)));
    *((u32*)(r5 + 4)) = r0;
    ov12_02248220(r7, r6, *((u32*)(r4 + 0xc)));
    *((u32*)(r5 + 8)) = r0;
    ov12_02248220(*((u32*)(r4 + 8)));
    *((u32*)(r5 + 4)) = r0;
    ov12_022480C0(r7, r6, *((u32*)(r4 + 0xc)));
    *((u32*)(r5 + 8)) = r0;
    ov12_02248220(*((u32*)(r4 + 8)));
    *((u32*)(r5 + 4)) = r0;
    ov12_0224810C(r6, *((u32*)(r4 + 0xc)));
    *((u32*)(r5 + 8)) = r0;
    ov12_02248220(*((u32*)(r4 + 8)));
    *((u32*)(r5 + 4)) = r0;
    ov12_02248184(r6, *((u32*)(r4 + 0xc)));
    *((u32*)(r5 + 8)) = r0;
    ov12_02248218(*((u32*)(r4 + 8)));
    *((u32*)(r5 + 4)) = r0;
    ov12_02248220(r7, r6, *((u32*)(r4 + 0xc)));
    *((u32*)(r5 + 8)) = r0;
    ov12_022480C0(*((u32*)(r4 + 8)));
    *((u32*)(r5 + 4)) = r0;
    ov12_022480C0(r7, r6, *((u32*)(r4 + 0xc)));
    *((u32*)(r5 + 8)) = r0;
    GetMoveMessageNo(r6, *((u32*)(r4 + 0x10)));
    *((u32*)(r5 + 0xc)) = r0;
    ov12_022480C0(*((u32*)(r4 + 8)));
    *((u32*)(r5 + 4)) = r0;
    ov12_022480C0(r7, r6, *((u32*)(r4 + 0xc)));
    *((u32*)(r5 + 8)) = r0;
    ov12_0224819C(r7, r6, *((u32*)(r4 + 0x10)));
    *((u32*)(r5 + 0xc)) = r0;
    ov12_022480C0(*((u32*)(r4 + 8)));
    *((u32*)(r5 + 4)) = r0;
    ov12_022480C0(r7, r6, *((u32*)(r4 + 0xc)));
    *((u32*)(r5 + 8)) = r0;
    ov12_0224810C(r6, *((u32*)(r4 + 0x10)));
    *((u32*)(r5 + 0xc)) = r0;
    ov12_022480C0(*((u32*)(r4 + 8)));
    *((u32*)(r5 + 4)) = r0;
    GetMoveMessageNo(r6, *((u32*)(r4 + 0xc)));
    *((u32*)(r5 + 8)) = r0;
    GetMoveMessageNo(r6, *((u32*)(r4 + 0x10)));
    *((u32*)(r5 + 0xc)) = r0;
    ov12_022480C0(*((u32*)(r4 + 8)));
    *((u32*)(r5 + 4)) = r0;
    GetMoveMessageNo(r6, *((u32*)(r4 + 0xc)));
    *((u32*)(r5 + 8)) = r0;
    ov12_02248184(r6, *((u32*)(r4 + 0x10)));
    *((u32*)(r5 + 0xc)) = r0;
    ov12_022480C0(*((u32*)(r4 + 8)));
    *((u32*)(r5 + 4)) = r0;
    ov12_0224819C(r7, r6, *((u32*)(r4 + 0xc)));
    *((u32*)(r5 + 8)) = r0;
    ov12_022480C0(r7, r6, *((u32*)(r4 + 0x10)));
    *((u32*)(r5 + 0xc)) = r0;
    ov12_022480C0(*((u32*)(r4 + 8)));
    *((u32*)(r5 + 4)) = r0;
    ov12_0224819C(r7, r6, *((u32*)(r4 + 0xc)));
    *((u32*)(r5 + 8)) = r0;
    GetMoveMessageNo(r6, *((u32*)(r4 + 0x10)));
    *((u32*)(r5 + 0xc)) = r0;
    ov12_022480C0(*((u32*)(r4 + 8)));
    *((u32*)(r5 + 4)) = r0;
    ov12_0224819C(r7, r6, *((u32*)(r4 + 0xc)));
    *((u32*)(r5 + 8)) = r0;
    ov12_0224810C(r6, *((u32*)(r4 + 0x10)));
    *((u32*)(r5 + 0xc)) = r0;
    ov12_022480C0(*((u32*)(r4 + 8)));
    *((u32*)(r5 + 4)) = r0;
    ov12_0224819C(r7, r6, *((u32*)(r4 + 0xc)));
    *((u32*)(r5 + 8)) = r0;
    ov12_022481D0(r6, *((u32*)(r4 + 0x10)));
    *((u32*)(r5 + 0xc)) = r0;
    ov12_022480C0(*((u32*)(r4 + 8)));
    *((u32*)(r5 + 4)) = r0;
    ov12_0224819C(r7, r6, *((u32*)(r4 + 0xc)));
    *((u32*)(r5 + 8)) = r0;
    ov12_02248190(r6, *((u32*)(r4 + 0x10)));
    *((u32*)(r5 + 0xc)) = r0;
    ov12_022480C0(*((u32*)(r4 + 8)));
    *((u32*)(r5 + 4)) = r0;
    ov12_0224819C(r7, r6, *((u32*)(r4 + 0xc)));
    *((u32*)(r5 + 8)) = r0;
    ov12_022481DC(r6, *((u32*)(r4 + 0x10)));
    *((u32*)(r5 + 0xc)) = r0;
    ov12_022480C0(*((u32*)(r4 + 8)));
    *((u32*)(r5 + 4)) = r0;
    ov12_0224819C(r7, r6, *((u32*)(r4 + 0xc)));
    *((u32*)(r5 + 8)) = r0;
    ov12_02248184(r6, *((u32*)(r4 + 0x10)));
    *((u32*)(r5 + 0xc)) = r0;
    ov12_022480C0(*((u32*)(r4 + 8)));
    *((u32*)(r5 + 4)) = r0;
    ov12_0224810C(r6, *((u32*)(r4 + 0xc)));
    *((u32*)(r5 + 8)) = r0;
    ov12_022480C0(r7, r6, *((u32*)(r4 + 0x10)));
    *((u32*)(r5 + 0xc)) = r0;
    ov12_022480C0(*((u32*)(r4 + 8)));
    *((u32*)(r5 + 4)) = r0;
    ov12_0224810C(r6, *((u32*)(r4 + 0xc)));
    *((u32*)(r5 + 8)) = r0;
    GetMoveMessageNo(r6, *((u32*)(r4 + 0x10)));
    *((u32*)(r5 + 0xc)) = r0;
    ov12_022480C0(*((u32*)(r4 + 8)));
    *((u32*)(r5 + 4)) = r0;
    ov12_0224810C(r6, *((u32*)(r4 + 0xc)));
    *((u32*)(r5 + 8)) = r0;
    ov12_022481D0(r6, *((u32*)(r4 + 0x10)));
    *((u32*)(r5 + 0xc)) = r0;
    ov12_022480C0(*((u32*)(r4 + 8)));
    *((u32*)(r5 + 4)) = r0;
    ov12_0224810C(r6, *((u32*)(r4 + 0xc)));
    *((u32*)(r5 + 8)) = r0;
    ov12_022481DC(r6, *((u32*)(r4 + 0x10)));
    *((u32*)(r5 + 0xc)) = r0;
    ov12_022480C0(*((u32*)(r4 + 8)));
    *((u32*)(r5 + 4)) = r0;
    *((u32*)(r5 + 8)) = *((u32*)(r4 + 0xc));
    *((u32*)(r5 + 0xc)) = *((u32*)(r4 + 0x10));
    ov12_0224810C(r6, *((u32*)(r4 + 8)));
    *((u32*)(r5 + 4)) = r0;
    ov12_022480C0(r7, r6, *((u32*)(r4 + 0xc)));
    *((u32*)(r5 + 8)) = r0;
    ov12_0224820C(r6, *((u32*)(r4 + 0x10)));
    *((u32*)(r5 + 0xc)) = r0;
    ov12_02248220(*((u32*)(r4 + 8)));
    *((u32*)(r5 + 4)) = r0;
    ov12_022480C0(r7, r6, *((u32*)(r4 + 0xc)));
    *((u32*)(r5 + 8)) = r0;
    ov12_022480C0(r7, r6, *((u32*)(r4 + 0x10)));
    *((u32*)(r5 + 0xc)) = r0;
    ov12_02248218(*((u32*)(r4 + 8)));
    *((u32*)(r5 + 4)) = r0;
    ov12_02248220(r7, r6, *((u32*)(r4 + 0xc)));
    *((u32*)(r5 + 8)) = r0;
    ov12_022480C0(r7, r6, *((u32*)(r4 + 0x10)));
    *((u32*)(r5 + 0xc)) = r0;
    ov12_02248218(*((u32*)(r4 + 8)));
    *((u32*)(r5 + 4)) = r0;
    ov12_02248220(r7, r6, *((u32*)(r4 + 0xc)));
    *((u32*)(r5 + 8)) = r0;
    ov12_0224810C(r6, *((u32*)(r4 + 0x10)));
    *((u32*)(r5 + 0xc)) = r0;
    ov12_022480C0(*((u32*)(r4 + 8)));
    *((u32*)(r5 + 4)) = r0;
    ov12_0224819C(r7, r6, *((u32*)(r4 + 0xc)));
    *((u32*)(r5 + 8)) = r0;
    ov12_022480C0(r7, r6, *((u32*)(r4 + 0x10)));
    *((u32*)(r5 + 0xc)) = r0;
    GetMoveMessageNo(r6, *((u32*)(r4 + 0x14)));
    *((u32*)(r5 + 0x10)) = r0;
    ov12_022480C0(*((u32*)(r4 + 8)));
    *((u32*)(r5 + 4)) = r0;
    ov12_0224819C(r7, r6, *((u32*)(r4 + 0xc)));
    *((u32*)(r5 + 8)) = r0;
    ov12_022480C0(r7, r6, *((u32*)(r4 + 0x10)));
    *((u32*)(r5 + 0xc)) = r0;
    ov12_0224819C(r7, r6, *((u32*)(r4 + 0x14)));
    *((u32*)(r5 + 0x10)) = r0;
    ov12_022480C0(*((u32*)(r4 + 8)));
    *((u32*)(r5 + 4)) = r0;
    ov12_0224819C(r7, r6, *((u32*)(r4 + 0xc)));
    *((u32*)(r5 + 8)) = r0;
    ov12_022480C0(r7, r6, *((u32*)(r4 + 0x10)));
    *((u32*)(r5 + 0xc)) = r0;
    ov12_022481D0(r6, *((u32*)(r4 + 0x14)));
    *((u32*)(r5 + 0x10)) = r0;
    ov12_022480C0(*((u32*)(r4 + 8)));
    *((u32*)(r5 + 4)) = r0;
    ov12_0224810C(r6, *((u32*)(r4 + 0xc)));
    *((u32*)(r5 + 8)) = r0;
    ov12_022480C0(r7, r6, *((u32*)(r4 + 0x10)));
    *((u32*)(r5 + 0xc)) = r0;
    ov12_0224810C(r6, *((u32*)(r4 + 0x14)));
    *((u32*)(r5 + 0x10)) = r0;
    ov12_02248220(*((u32*)(r4 + 8)));
    *((u32*)(r5 + 4)) = r0;
    ov12_022480C0(r7, r6, *((u32*)(r4 + 0xc)));
    *((u32*)(r5 + 8)) = r0;
    ov12_02248220(r7, r6, *((u32*)(r4 + 0x10)));
    *((u32*)(r5 + 0xc)) = r0;
    ov12_022480C0(r7, r6, *((u32*)(r4 + 0x14)));
    *((u32*)(r5 + 0x10)) = r0;
    ov12_02248218(*((u32*)(r4 + 8)));
    *((u32*)(r5 + 4)) = r0;
    ov12_02248220(r7, r6, *((u32*)(r4 + 0xc)));
    *((u32*)(r5 + 8)) = r0;
    ov12_022480C0(r7, r6, *((u32*)(r4 + 0x10)));
    *((u32*)(r5 + 0xc)) = r0;
    ov12_022480C0(r7, r6, *((u32*)(r4 + 0x14)));
    *((u32*)(r5 + 0x10)) = r0;
    ov12_02248218(*((u32*)(r4 + 8)));
    *((u32*)(r5 + 4)) = r0;
    ov12_02248220(r7, r6, *((u32*)(r4 + 0xc)));
    *((u32*)(r5 + 8)) = r0;
    ov12_022480C0(r7, r6, *((u32*)(r4 + 0x10)));
    *((u32*)(r5 + 0xc)) = r0;
    ov12_02248220(r7, r6, *((u32*)(r4 + 0x14)));
    *((u32*)(r5 + 0x10)) = r0;
    ov12_02248218(*((u32*)(r4 + 8)));
    *((u32*)(r5 + 4)) = r0;
    ov12_02248220(r7, r6, *((u32*)(r4 + 0xc)));
    *((u32*)(r5 + 8)) = r0;
    ov12_02248218(r7, r6, *((u32*)(r4 + 0x10)));
    *((u32*)(r5 + 0xc)) = r0;
    ov12_02248220(r7, r6, *((u32*)(r4 + 0x14)));
    *((u32*)(r5 + 0x10)) = r0;
    ov12_02248218(*((u32*)(r4 + 8)));
    *((u32*)(r5 + 4)) = r0;
    ov12_02248220(r7, r6, *((u32*)(r4 + 0xc)));
    *((u32*)(r5 + 8)) = r0;
    ov12_022480C0(r7, r6, *((u32*)(r4 + 0x10)));
    *((u32*)(r5 + 0xc)) = r0;
    ov12_02248218(r7, r6, *((u32*)(r4 + 0x14)));
    *((u32*)(r5 + 0x10)) = r0;
    ov12_02248220(r7, r6, *((u32*)(r4 + 0x18)));
    *((u32*)(r5 + 0x14)) = r0;
    ov12_022480C0(r7, r6, *((u32*)(r4 + 0x1c)));
    *((u32*)(r5 + 0x18)) = r0;
}



void ov12_022480C0(void) {
    // push {r3, r4, r5, lr}
    // add r5, r1, #0
    // add r4, r2, #0
    // bl GetBattlerIDBySide
    // cmp r4, #0x16
    // bne _022480DA
    // ldr r1, _022480E8 ; =0x000021A0
    // add r2, r5, r0
    // ldrb r1, [r2, r1]
    // lsl r1, r1, #8
    // orr r0, r1
    // pop {r3, r4, r5, pc}
    // ldr r1, _022480EC ; =0x0000219C
    // add r2, r5, r0
    // ldrb r1, [r2, r1]
    // lsl r1, r1, #8
    // orr r0, r1
    // pop {r3, r4, r5, pc}
    // nop
    // _022480E8: .word 0x000021A0
    // _022480EC: .word 0x0000219C
    // TODO: decompile
}



void GetMoveMessageNo(void) {
    // cmp r1, #1
    // beq _022480FA
    // cmp r1, #0xff
    // beq _02248100
    // bx lr
    // ldr r1, _02248108 ; =0x00003044
    // ldr r0, [r0, r1]
    // bx lr
    // mov r1, #0x49
    // lsl r1, r1, #2
    // ldr r0, [r0, r1]
    // bx lr
    // _02248108: .word 0x00003044
    // TODO: decompile
}



void ov12_0224810C(void) {
    // push {r4, lr}
    // cmp r1, #0x15
    // bgt _02248124
    // bge _0224815A
    // cmp r1, #2
    // bgt _0224817C
    // cmp r1, #1
    // blt _0224817C
    // beq _0224812A
    // cmp r1, #2
    // beq _02248142
    // b _0224817C
    // cmp r1, #0xff
    // beq _02248176
    // b _0224817C
    // ldr r3, [r0, #0x64]
    // mov r1, #0xc0
    // mul r1, r3
    // add r2, r0, r1
    // ldr r1, _02248180 ; =0x00002DB8
    // ldrh r4, [r2, r1]
    // lsl r1, r3, #0x18
    // lsr r1, r1, #0x18
    // add r2, r4, #0
    // bl ov12_02248654
    // b _0224817C
    // ldr r3, [r0, #0x6c]
    // mov r1, #0xc0
    // mul r1, r3
    // add r2, r0, r1
    // ldr r1, _02248180 ; =0x00002DB8
    // ldrh r4, [r2, r1]
    // lsl r1, r3, #0x18
    // lsr r1, r1, #0x18
    // add r2, r4, #0
    // bl ov12_02248654
    // b _0224817C
    // mov r1, #0x46
    // lsl r1, r1, #2
    // ldr r3, [r0, r1]
    // mov r1, #0xc0
    // mul r1, r3
    // add r2, r0, r1
    // ldr r1, _02248180 ; =0x00002DB8
    // ldrh r4, [r2, r1]
    // lsl r1, r3, #0x18
    // lsr r1, r1, #0x18
    // add r2, r4, #0
    // bl ov12_02248654
    // b _0224817C
    // mov r1, #0x4a
    // lsl r1, r1, #2
    // ldr r4, [r0, r1]
    // add r0, r4, #0
    // pop {r4, pc}
    // _02248180: .word 0x00002DB8
    // TODO: decompile
}



void ov12_02248184(void) {
    // ldr r0, [r0, r1]
}



void ov12_02248190(void) {
    // ldr r0, [r0, r1]
}



void ov12_0224819C(void) {
    // push {r3, r4, r5, lr}
    // add r5, r1, #0
    // cmp r2, #0xff
    // bne _022481AC
    // mov r0, #0x4b
    // lsl r0, r0, #2
    // ldr r4, [r5, r0]
    // b _022481C8
    // bl GetBattlerIDBySide
    // add r1, r0, #0
    // mov r0, #0xc0
    // mul r0, r1
    // add r2, r5, r0
    // ldr r0, _022481CC ; =0x00002D67
    // lsl r1, r1, #0x18
    // ldrb r4, [r2, r0]
    // add r0, r5, #0
    // lsr r1, r1, #0x18
    // add r2, r4, #0
    // bl BattlerSetAbility
    // add r0, r4, #0
    // pop {r3, r4, r5, pc}
    // _022481CC: .word 0x00002D67
    // TODO: decompile
}



void ov12_022481D0(void) {
    // ldr r0, [r0, r1]
}



void ov12_022481DC(void) {
    // ldr r0, [r0, r1]
}



void ov12_022481E8(void) {
}



void ov12_02248200(void) {
    // ldr r0, [r0, r1]
}



void ov12_0224820C(void) {
    // ldr r0, [r0, r1]
}



void ov12_02248218(void) {
}



void ov12_02248220(void) {
}



void ov12_02248228(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x78
    // add r7, r0, #0
    // add r5, r1, #0
    // str r2, [sp, #0x18]
    // bl BattleSystem_GetMessageLoader
    // str r0, [sp, #0x28]
    // add r0, r7, #0
    // bl BattleSystem_GetMessageBuffer
    // str r0, [sp, #0x20]
    // add r0, r7, #0
    // bl BattleSystem_GetMessageFormat
    // str r0, [sp, #0x24]
    // add r0, r7, #0
    // bl BattleSystem_GetBgConfig
    // str r0, [sp, #0x1c]
    // add r0, r7, #0
    // bl BattleSystem_GetSpriteSystem
    // add r6, r0, #0
    // add r0, r7, #0
    // bl BattleSystem_GetSpriteManager
    // add r4, r0, #0
    // add r0, r7, #0
    // bl BattleSystem_GetPaletteData
    // add r7, r0, #0
    // mov r0, #1
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, _022484A8 ; =0x00004E35
    // mov r3, #8
    // str r0, [sp, #8]
    // add r2, r3, #0
    // add r0, r6, #0
    // add r1, r4, #0
    // add r3, #0xf8
    // bl SpriteSystem_LoadCharResObj
    // mov r0, #8
    // str r0, [sp]
    // mov r0, #0x52
    // str r0, [sp, #4]
    // mov r0, #0
    // str r0, [sp, #8]
    // mov r1, #2
    // str r1, [sp, #0xc]
    // mov r0, #1
    // str r0, [sp, #0x10]
    // ldr r0, _022484AC ; =0x00004E30
    // add r2, r6, #0
    // str r0, [sp, #0x14]
    // add r0, r7, #0
    // add r3, r4, #0
    // bl SpriteSystem_LoadPaletteBuffer
    // mov r0, #1
    // str r0, [sp]
    // ldr r0, _022484B0 ; =0x00004E2D
    // mov r3, #8
    // str r0, [sp, #4]
    // add r2, r3, #0
    // add r0, r6, #0
    // add r1, r4, #0
    // add r3, #0xf9
    // bl SpriteSystem_LoadCellResObj
    // mov r0, #1
    // str r0, [sp]
    // ldr r0, _022484B0 ; =0x00004E2D
    // mov r3, #8
    // str r0, [sp, #4]
    // add r2, r3, #0
    // add r0, r6, #0
    // add r1, r4, #0
    // add r3, #0xfa
    // bl SpriteSystem_LoadAnimResObj
    // ldr r2, _022484B4 ; =ov12_0226C428
    // add r0, r6, #0
    // add r1, r4, #0
    // bl SpriteSystem_NewSprite
    // str r0, [r5, #0xc]
    // bl ManagedSprite_TickFrame
    // ldr r0, [sp, #0x18]
    // bl Pokemon_GetIconNaix
    // add r3, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // ldr r0, _022484B8 ; =0x00004E36
    // add r1, r4, #0
    // str r0, [sp, #8]
    // add r0, r6, #0
    // mov r2, #0x14
    // bl SpriteSystem_LoadCharResObjAtEndWithHardwareMappingType
    // bl sub_02074490
    // mov r1, #0x14
    // str r1, [sp]
    // str r0, [sp, #4]
    // mov r0, #0
    // str r0, [sp, #8]
    // mov r0, #3
    // str r0, [sp, #0xc]
    // mov r0, #1
    // str r0, [sp, #0x10]
    // ldr r0, _022484BC ; =0x00004E31
    // mov r1, #2
    // str r0, [sp, #0x14]
    // add r0, r7, #0
    // add r2, r6, #0
    // add r3, r4, #0
    // bl SpriteSystem_LoadPaletteBuffer
    // bl sub_0207449C
    // add r3, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, _022484C0 ; =0x00004E2E
    // add r1, r4, #0
    // str r0, [sp, #4]
    // add r0, r6, #0
    // mov r2, #0x14
    // bl SpriteSystem_LoadCellResObj
    // bl sub_020744A8
    // add r3, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, _022484C0 ; =0x00004E2E
    // add r1, r4, #0
    // str r0, [sp, #4]
    // add r0, r6, #0
    // mov r2, #0x14
    // bl SpriteSystem_LoadAnimResObj
    // ldr r2, _022484C4 ; =ov12_0226C45C
    // add r0, r6, #0
    // add r1, r4, #0
    // bl SpriteSystem_NewSprite
    // str r0, [r5, #0x10]
    // ldr r0, [sp, #0x18]
    // bl Pokemon_GetIconPalette
    // add r1, r0, #0
    // ldr r0, [r5, #0x10]
    // ldr r0, [r0]
    // bl Sprite_SetPalOffsetRespectVramOffset
    // ldr r0, [r5, #0x10]
    // bl ManagedSprite_TickFrame
    // mov r0, #1
    // mov r1, #5
    // bl FontSystem_NewInit
    // str r0, [r5, #0x50]
    // ldr r0, [sp, #0x18]
    // mov r1, #0xb0
    // mov r2, #0
    // bl GetMonData
    // cmp r0, #0
    // bne _02248390
    // mov r0, #2
    // b _0224839A
    // ldr r0, [sp, #0x18]
    // mov r1, #0x6f
    // mov r2, #0
    // bl GetMonData
    // cmp r0, #0
    // bne _022483AC
    // mov r1, #0x3b
    // ldr r0, [sp, #0x28]
    // lsl r1, r1, #4
    // bl NewString_ReadMsgData
    // add r6, r0, #0
    // b _022483C6
    // cmp r0, #1
    // bne _022483BC
    // ldr r0, [sp, #0x28]
    // ldr r1, _022484C8 ; =0x000003B1
    // bl NewString_ReadMsgData
    // add r6, r0, #0
    // b _022483C6
    // ldr r0, [sp, #0x28]
    // ldr r1, _022484CC ; =0x000003B2
    // bl NewString_ReadMsgData
    // add r6, r0, #0
    // ldr r0, [sp, #0x18]
    // bl Mon_GetBoxMon
    // add r2, r0, #0
    // ldr r0, [sp, #0x24]
    // mov r1, #0
    // bl BufferBoxMonNickname
    // ldr r0, [sp, #0x18]
    // mov r1, #0xa1
    // mov r2, #0
    // bl GetMonData
    // add r2, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // mov r1, #1
    // ldr r0, [sp, #0x24]
    // mov r3, #3
    // str r1, [sp, #4]
    // bl BufferIntegerAsString
    // ldr r0, [sp, #0x24]
    // ldr r1, [sp, #0x20]
    // add r2, r6, #0
    // bl StringExpandPlaceholders
    // add r0, r6, #0
    // bl String_Delete
    // add r0, sp, #0x68
    // bl InitWindow
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x1c]
    // add r1, sp, #0x68
    // mov r2, #0xc
    // mov r3, #4
    // bl AddTextWindowTopLeftCorner
    // mov r1, #0
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _022484D0 ; =0x00010200
    // ldr r2, [sp, #0x20]
    // str r0, [sp, #8]
    // add r0, sp, #0x68
    // add r3, r1, #0
    // str r1, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // add r0, sp, #0x68
    // mov r1, #1
    // mov r2, #5
    // bl sub_02013688
    // mov r1, #1
    // add r2, r1, #0
    // add r3, sp, #0x5c
    // bl sub_02021AC8
    // ldr r0, [r5, #0x50]
    // str r0, [sp, #0x2c]
    // add r0, sp, #0x68
    // str r0, [sp, #0x30]
    // add r0, r4, #0
    // bl SpriteManager_GetSpriteList
    // str r0, [sp, #0x34]
    // ldr r1, _022484AC ; =0x00004E30
    // add r0, r4, #0
    // bl SpriteManager_FindPlttResourceProxy
    // mov r1, #0
    // str r0, [sp, #0x38]
    // ldr r0, [sp, #0x60]
    // str r1, [sp, #0x3c]
    // str r0, [sp, #0x40]
    // mov r0, #0xb0
    // str r0, [sp, #0x44]
    // mov r0, #8
    // str r0, [sp, #0x48]
    // mov r0, #0x64
    // str r0, [sp, #0x50]
    // mov r0, #1
    // str r0, [sp, #0x54]
    // mov r0, #5
    // str r0, [sp, #0x58]
    // add r0, sp, #0x2c
    // str r1, [sp, #0x4c]
    // bl sub_020135D8
    // add r2, r5, #0
    // add r3, sp, #0x5c
    // str r0, [r5, #0x14]
    // ldmia r3!, {r0, r1}
    // add r2, #0x18
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // mov r1, #1
    // str r0, [r2]
    // ldr r0, [r5, #0x14]
    // bl sub_020138E0
    // add r0, sp, #0x68
    // bl RemoveWindow
    // add sp, #0x78
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _022484A8: .word 0x00004E35
    // _022484AC: .word 0x00004E30
    // _022484B0: .word 0x00004E2D
    // _022484B4: .word ov12_0226C428
    // _022484B8: .word 0x00004E36
    // _022484BC: .word 0x00004E31
    // _022484C0: .word 0x00004E2E
    // _022484C4: .word ov12_0226C45C
    // _022484C8: .word 0x000003B1
    // _022484CC: .word 0x000003B2
    // _022484D0: .word 0x00010200
    // TODO: decompile
}



void ov12_022484D4(void) {
    // push {r3, r4, r5, lr}
    // add r5, r1, #0
    // bl BattleSystem_GetSpriteManager
    // add r4, r0, #0
    // ldr r0, [r5, #0xc]
    // bl Sprite_DeleteAndFreeResources
    // ldr r0, [r5, #0x10]
    // bl Sprite_DeleteAndFreeResources
    // ldr r0, [r5, #0x14]
    // bl FontOAM_Delete
    // add r0, r5, #0
    // add r0, #0x18
    // bl sub_02021B5C
    // ldr r1, _02248540 ; =0x00004E35
    // add r0, r4, #0
    // bl SpriteManager_UnloadCharObjById
    // ldr r1, _02248544 ; =0x00004E30
    // add r0, r4, #0
    // bl SpriteManager_UnloadPlttObjById
    // ldr r1, _02248548 ; =0x00004E2D
    // add r0, r4, #0
    // bl SpriteManager_UnloadCellObjById
    // ldr r1, _02248548 ; =0x00004E2D
    // add r0, r4, #0
    // bl SpriteManager_UnloadAnimObjById
    // ldr r1, _0224854C ; =0x00004E36
    // add r0, r4, #0
    // bl SpriteManager_UnloadCharObjById
    // ldr r1, _02248550 ; =0x00004E31
    // add r0, r4, #0
    // bl SpriteManager_UnloadPlttObjById
    // ldr r1, _02248554 ; =0x00004E2E
    // add r0, r4, #0
    // bl SpriteManager_UnloadCellObjById
    // ldr r1, _02248554 ; =0x00004E2E
    // add r0, r4, #0
    // bl SpriteManager_UnloadAnimObjById
    // ldr r0, [r5, #0x50]
    // bl sub_020135AC
    // pop {r3, r4, r5, pc}
    // _02248540: .word 0x00004E35
    // _02248544: .word 0x00004E30
    // _02248548: .word 0x00004E2D
    // _0224854C: .word 0x00004E36
    // _02248550: .word 0x00004E31
    // _02248554: .word 0x00004E2E
    // TODO: decompile
}



void UpdateFrienshipFainted(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r4, r1, #0
    // add r1, r2, #0
    // add r5, r0, #0
    // str r2, [sp]
    // bl BattleSystem_GetFieldSide
    // cmp r0, #0
    // bne _0224863C
    // add r0, r5, #0
    // bl BattleSystem_GetBattleType
    // mov r1, #2
    // tst r0, r1
    // beq _022485A8
    // add r0, r5, #0
    // mov r1, #3
    // bl BattleSystem_GetBattlerFromBattlerType
    // lsl r0, r0, #0x18
    // lsr r6, r0, #0x18
    // add r0, r5, #0
    // mov r1, #5
    // bl BattleSystem_GetBattlerFromBattlerType
    // lsl r0, r0, #0x18
    // lsr r1, r0, #0x18
    // mov r2, #0xc0
    // add r0, r1, #0
    // mul r0, r2
    // mul r2, r6
    // ldr r3, _02248640 ; =0x00002D74
    // add r0, r4, r0
    // add r2, r4, r2
    // ldrb r0, [r0, r3]
    // ldrb r2, [r2, r3]
    // cmp r0, r2
    // bls _022485B4
    // add r6, r1, #0
    // b _022485B4
    // add r0, r5, #0
    // mov r1, #1
    // bl BattleSystem_GetBattlerFromBattlerType
    // lsl r0, r0, #0x18
    // lsr r6, r0, #0x18
    // ldr r1, [sp]
    // add r0, r5, #0
    // add r2, r1, #0
    // add r3, r4, r2
    // ldr r2, _02248644 ; =0x0000219C
    // ldrb r2, [r3, r2]
    // bl BattleSystem_GetPartyMon
    // add r7, r0, #0
    // ldr r0, [sp]
    // mov r1, #0xc0
    // add r2, r0, #0
    // mul r2, r1
    // add r0, r4, r2
    // ldr r2, _02248640 ; =0x00002D74
    // mul r1, r6
    // add r1, r4, r1
    // ldrb r0, [r0, r2]
    // ldrb r1, [r1, r2]
    // cmp r1, r0
    // bls _02248620
    // sub r0, r1, r0
    // cmp r0, #0x1e
    // blt _02248602
    // add r0, r5, #0
    // bl BattleSystem_GetLocation
    // add r2, r0, #0
    // lsl r2, r2, #0x10
    // add r0, r7, #0
    // mov r1, #8
    // lsr r2, r2, #0x10
    // bl MonApplyFriendshipMod
    // add r0, r7, #0
    // mov r1, #6
    // bl ApplyMonMoodModifier
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r5, #0
    // bl BattleSystem_GetLocation
    // add r2, r0, #0
    // lsl r2, r2, #0x10
    // add r0, r7, #0
    // mov r1, #6
    // lsr r2, r2, #0x10
    // bl MonApplyFriendshipMod
    // add r0, r7, #0
    // mov r1, #4
    // bl ApplyMonMoodModifier
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r5, #0
    // bl BattleSystem_GetLocation
    // add r2, r0, #0
    // lsl r2, r2, #0x10
    // add r0, r7, #0
    // mov r1, #6
    // lsr r2, r2, #0x10
    // bl MonApplyFriendshipMod
    // add r0, r7, #0
    // mov r1, #4
    // bl ApplyMonMoodModifier
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02248640: .word 0x00002D74
    // _02248644: .word 0x0000219C
    // TODO: decompile
}



void BattlerSetAbility(void) {
    // add r1, r0, r1
    // strb r2, [r1, r0]
}



void ov12_02248654(void) {
    // add r1, r0, r1
    // strh r2, [r1, r0]
}


