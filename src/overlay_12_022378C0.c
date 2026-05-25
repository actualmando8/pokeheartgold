/* Decompiled from asm/overlay_12_022378C0.s */
#include "global.h"

void ov12_02237D00(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x68
    // ldr r1, _02237EB4 ; =0x000023FF
    // add r5, r0, #0
    // ldrb r2, [r5, r1]
    // mov r0, #1
    // ldr r4, _02237EB8 ; =ov12_0226C120
    // bic r2, r0
    // mov r0, #1
    // orr r0, r2
    // strb r0, [r5, r1]
    // add r3, sp, #0x14
    // mov r2, #0xa
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // sub r2, r2, #1
    // bne _02237D1A
    // ldr r0, [r4]
    // mov r1, #1
    // str r0, [r3]
    // ldr r0, [r5, #4]
    // add r2, sp, #0x14
    // mov r3, #0
    // bl InitBgFromTemplate
    // ldr r0, [r5, #4]
    // mov r1, #1
    // bl BgClearTilemapBufferAndCommit
    // ldr r0, [r5, #4]
    // mov r1, #2
    // add r2, sp, #0x30
    // mov r3, #0
    // bl InitBgFromTemplate
    // ldr r0, [r5, #4]
    // mov r1, #2
    // bl BgClearTilemapBufferAndCommit
    // ldr r0, [r5, #4]
    // mov r1, #3
    // add r2, sp, #0x4c
    // mov r3, #0
    // bl InitBgFromTemplate
    // ldr r0, [r5, #4]
    // mov r1, #3
    // bl BgClearTilemapBufferAndCommit
    // ldr r1, _02237EBC ; =0x04000008
    // mov r0, #3
    // ldrh r2, [r1]
    // bic r2, r0
    // mov r0, #1
    // orr r2, r0
    // strh r2, [r1]
    // add r1, r0, #0
    // bl GfGfx_EngineATogglePlanes
    // add r0, r5, #0
    // bl BattleSystem_GetFrame
    // add r4, r0, #0
    // lsl r0, r4, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp]
    // mov r0, #5
    // str r0, [sp, #4]
    // mov r1, #1
    // ldr r0, [r5, #4]
    // add r2, r1, #0
    // mov r3, #0xa
    // bl sub_0200EB80
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // mov r0, #5
    // str r0, [sp, #0xc]
    // ldr r1, _02237EC0 ; =0x00002404
    // ldr r2, [r5, #4]
    // ldr r1, [r5, r1]
    // mov r0, #7
    // add r1, r1, #3
    // mov r3, #3
    // bl GfGfxLoader_LoadCharData
    // add r0, r5, #0
    // bl ov12_0223B52C
    // add r2, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r3, _02237EC0 ; =0x00002404
    // ldr r0, [r5, #0x28]
    // ldr r6, [r5, r3]
    // mov r1, #7
    // lsl r3, r6, #1
    // add r3, r6, r3
    // add r3, #0xb0
    // add r2, r3, r2
    // mov r3, #5
    // bl PaletteData_LoadNarc
    // add r0, r4, #0
    // bl sub_0200E640
    // add r2, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #0x20
    // str r0, [sp, #4]
    // mov r0, #0xa0
    // str r0, [sp, #8]
    // ldr r0, [r5, #0x28]
    // mov r1, #0x26
    // mov r3, #5
    // bl PaletteData_LoadNarc
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #0x20
    // str r0, [sp, #4]
    // mov r0, #0xb0
    // str r0, [sp, #8]
    // ldr r0, [r5, #0x28]
    // mov r1, #0x10
    // mov r2, #8
    // mov r3, #5
    // bl PaletteData_LoadNarc
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // mov r0, #5
    // str r0, [sp, #0xc]
    // ldr r2, [r5, #4]
    // mov r0, #7
    // mov r1, #2
    // mov r3, #3
    // bl GfGfxLoader_LoadScrnData
    // mov r0, #1
    // lsl r0, r0, #0x1a
    // ldr r2, [r0]
    // ldr r1, _02237EC4 ; =0xFFFF1FFF
    // ldr r3, _02237EC8 ; =0x04001000
    // and r2, r1
    // str r2, [r0]
    // ldr r2, [r3]
    // and r1, r2
    // add r2, r0, #0
    // str r1, [r3]
    // add r2, #0x48
    // ldrh r3, [r2]
    // mov r1, #0x3f
    // add r0, #0x4a
    // bic r3, r1
    // strh r3, [r2]
    // ldrh r2, [r0]
    // bic r2, r1
    // strh r2, [r0]
    // bl GfGfx_BothDispOn
    // mov r0, #0x10
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #0x10
    // mov r1, #1
    // bl GfGfx_EngineBTogglePlanes
    // ldr r0, _02237ECC ; =ov12_02239730
    // add r1, r5, #0
    // bl Main_SetVBlankIntrCB
    // ldr r0, _02237EB4 ; =0x000023FF
    // mov r3, #2
    // ldrb r1, [r5, r0]
    // mov r2, #1
    // orr r1, r3
    // strb r1, [r5, r0]
    // mov r0, #0x13
    // str r0, [sp]
    // mov r0, #0x1b
    // str r0, [sp, #4]
    // mov r0, #4
    // str r0, [sp, #8]
    // mov r0, #0xb
    // str r0, [sp, #0xc]
    // mov r0, #0x1f
    // str r0, [sp, #0x10]
    // ldr r0, [r5, #4]
    // ldr r1, [r5, #8]
    // bl AddWindowParameterized
    // ldr r0, [r5, #8]
    // mov r1, #0xff
    // bl FillWindowPixelBuffer
    // ldr r0, [r5, #8]
    // mov r1, #0
    // mov r2, #1
    // mov r3, #0xa
    // bl DrawFrameAndWindow2
    // add r0, r5, #0
    // bl ov12_0223A620
    // add sp, #0x68
    // pop {r4, r5, r6, pc}
    // nop
    // _02237EB4: .word 0x000023FF
    // _02237EB8: .word ov12_0226C120
    // _02237EBC: .word 0x04000008
    // _02237EC0: .word 0x00002404
    // _02237EC4: .word 0xFFFF1FFF
    // _02237EC8: .word 0x04001000
    // _02237ECC: .word ov12_02239730
    // TODO: decompile
}


void ov12_02237ED0(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, _02237F0C ; =0x00002445
    // add r4, r1, #0
    // ldrb r0, [r5, r0]
    // cmp r0, r4
    // bne _02237EE2
    // bl GF_AssertFail
    // ldr r0, _02237F0C ; =0x00002445
    // cmp r4, #0
    // strb r4, [r5, r0]
    // bne _02237EFA
    // ldr r0, _02237F10 ; =FS_OVERLAY_ID(OVY_10)
    // bl UnloadOverlayByID
    // ldr r0, _02237F14 ; =FS_OVERLAY_ID(OVY_7)
    // mov r1, #2
    // bl HandleLoadOverlay
    // pop {r3, r4, r5, pc}
    // ldr r0, _02237F14 ; =FS_OVERLAY_ID(OVY_7)
    // bl UnloadOverlayByID
    // ldr r0, _02237F10 ; =FS_OVERLAY_ID(OVY_10)
    // mov r1, #2
    // bl HandleLoadOverlay
    // pop {r3, r4, r5, pc}
    // nop
    // _02237F0C: .word 0x00002445
    // _02237F10: .word FS_OVERLAY_ID(OVY_10)
    // _02237F14: .word FS_OVERLAY_ID(OVY_7)
    // TODO: decompile
}


void ov12_02237F18(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // add r5, r0, #0
    // bl OverlayManager_GetData
    // add r4, r0, #0
    // add r0, r5, #0
    // bl OverlayManager_GetArgs
    // add r7, r0, #0
    // bl sub_02026E8C
    // add r5, r0, #0
    // bl GetMainBgPlttAddr
    // add r1, r0, #0
    // mov r0, #0
    // add r2, r5, #0
    // bl MIi_CpuClear16
    // bl sub_02026E9C
    // add r5, r0, #0
    // bl GetSubBgPlttAddr
    // add r1, r0, #0
    // mov r0, #0
    // add r2, r5, #0
    // bl MIi_CpuClear16
    // bl ov12_02239644
    // str r0, [r4]
    // bl HBlankInterruptDisable
    // mov r0, #4
    // mov r1, #5
    // bl FontID_Alloc
    // mov r0, #0xe
    // mov r1, #2
    // mov r2, #0xf
    // mov r3, #5
    // bl MessagePrinter_New
    // mov r1, #0x6a
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // ldr r2, [r4, r1]
    // add r0, r1, #4
    // str r2, [r4, r0]
    // mov r0, #5
    // bl PaletteData_Init
    // str r0, [r4, #0x28]
    // mov r1, #1
    // bl PaletteData_SetAutoTransparent
    // mov r2, #2
    // ldr r0, [r4, #0x28]
    // mov r1, #0
    // lsl r2, r2, #8
    // mov r3, #5
    // bl PaletteData_AllocBuffers
    // mov r1, #1
    // ldr r0, [r4, #0x28]
    // lsl r2, r1, #9
    // mov r3, #5
    // bl PaletteData_AllocBuffers
    // mov r2, #7
    // ldr r0, [r4, #0x28]
    // mov r1, #2
    // lsl r2, r2, #6
    // mov r3, #5
    // bl PaletteData_AllocBuffers
    // mov r2, #2
    // ldr r0, [r4, #0x28]
    // mov r1, #3
    // lsl r2, r2, #8
    // mov r3, #5
    // bl PaletteData_AllocBuffers
    // mov r0, #5
    // bl BgConfig_Alloc
    // str r0, [r4, #4]
    // mov r0, #5
    // mov r1, #3
    // bl AllocWindows
    // str r0, [r4, #8]
    // mov r6, #0
    // add r5, r4, #0
    // mov r1, #0x32
    // mov r0, #5
    // lsl r1, r1, #6
    // bl Heap_Alloc
    // mov r1, #0x1d
    // lsl r1, r1, #4
    // str r0, [r5, r1]
    // add r6, r6, #1
    // add r5, #0x10
    // cmp r6, #4
    // blt _02237FD8
    // mov r0, #0x40
    // mov r1, #5
    // bl GF_CreateVramTransferManager
    // mov r0, #7
    // mov r1, #5
    // bl NARC_New
    // add r5, r0, #0
    // mov r0, #8
    // mov r1, #5
    // bl NARC_New
    // add r6, r0, #0
    // add r0, r4, #0
    // bl ov12_0223BFC0
    // add r1, r0, #0
    // add r0, r4, #0
    // bl BattleSystem_GetTrainerGender
    // add r3, r0, #0
    // mov r0, #7
    // lsl r0, r0, #6
    // ldr r0, [r4, r0]
    // add r1, r6, #0
    // str r0, [sp]
    // add r0, r5, #0
    // add r2, r4, #0
    // bl BattleInput_NewInit
    // mov r1, #0x67
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // add r0, r5, #0
    // bl NARC_Delete
    // add r0, r6, #0
    // bl NARC_Delete
    // ldr r1, [r4, #4]
    // add r0, r4, #0
    // bl ov12_022387AC
    // mov r0, #0x13
    // str r0, [sp]
    // mov r0, #0x1b
    // str r0, [sp, #4]
    // mov r0, #4
    // str r0, [sp, #8]
    // mov r0, #0xb
    // str r0, [sp, #0xc]
    // mov r0, #0x1f
    // str r0, [sp, #0x10]
    // ldr r0, [r4, #4]
    // ldr r1, [r4, #8]
    // mov r2, #1
    // mov r3, #2
    // bl AddWindowParameterized
    // ldr r0, [r4, #8]
    // mov r1, #0xff
    // bl FillWindowPixelBuffer
    // ldr r0, [r4, #8]
    // mov r1, #0
    // mov r2, #1
    // mov r3, #0xa
    // bl DrawFrameAndWindow2
    // mov r0, #5
    // bl SpriteSystem_Alloc
    // add r1, r4, #0
    // add r1, #0x90
    // str r0, [r1]
    // add r0, r4, #0
    // add r0, #0x90
    // ldr r0, [r0]
    // ldr r1, _02238314 ; =ov12_0226C060
    // ldr r2, _02238318 ; =ov12_0226C018
    // mov r3, #0x20
    // bl SpriteSystem_Init
    // ldr r1, _0223831C ; =0x00100010
    // mov r0, #1
    // bl G2dRenderer_SetObjCharTransferReservedRegion
    // mov r0, #1
    // bl G2dRenderer_SetPlttTransferReservedRegion
    // add r0, r4, #0
    // add r0, #0x90
    // ldr r0, [r0]
    // bl SpriteManager_New
    // add r1, r4, #0
    // add r1, #0x94
    // str r0, [r1]
    // add r0, r4, #0
    // add r1, r4, #0
    // add r0, #0x90
    // add r1, #0x94
    // ldr r0, [r0]
    // ldr r1, [r1]
    // mov r2, #0x80
    // bl SpriteSystem_InitSprites
    // add r0, r4, #0
    // add r1, r4, #0
    // add r0, #0x90
    // add r1, #0x94
    // ldr r0, [r0]
    // ldr r1, [r1]
    // ldr r2, _02238320 ; =ov12_0226C02C
    // bl SpriteSystem_InitManagerWithCapacities
    // add r0, r4, #0
    // add r0, #0x90
    // ldr r0, [r0]
    // bl SpriteSystem_GetRenderer
    // mov r2, #0x11
    // mov r1, #0
    // lsl r2, r2, #0x10
    // bl G2dRenderer_SetSubSurfaceCoords
    // mov r0, #0x67
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl BattleInput_LoadDefaultResources
    // mov r0, #7
    // mov r1, #5
    // bl NARC_New
    // add r6, r0, #0
    // mov r0, #8
    // mov r1, #5
    // bl NARC_New
    // add r5, r0, #0
    // mov r0, #1
    // str r0, [sp]
    // mov r3, #0
    // mov r2, #0x67
    // str r3, [sp, #4]
    // lsl r2, r2, #2
    // ldr r2, [r4, r2]
    // add r0, r6, #0
    // add r1, r5, #0
    // bl BattleInput_ChangeMenu
    // mov r1, #0x67
    // lsl r1, r1, #2
    // ldr r1, [r4, r1]
    // add r0, r5, #0
    // bl BattleInput_LoadBallGaugeResources
    // add r0, r6, #0
    // bl NARC_Delete
    // add r0, r5, #0
    // bl NARC_Delete
    // mov r0, #5
    // bl PokepicManager_Create
    // add r1, r4, #0
    // add r1, #0x88
    // str r0, [r1]
    // add r0, r4, #0
    // add r0, #0x88
    // ldr r0, [r0]
    // mov r1, #0
    // mov r2, #0xc0
    // bl PokepicManager_SetPlttBaseAddrAndSize
    // add r0, r4, #0
    // bl BattleSystem_HpBar_Init
    // bl ov12_022396F0
    // mov r0, #5
    // bl ov07_0221BEDC
    // add r1, r4, #0
    // add r1, #0x8c
    // str r0, [r1]
    // add r0, r4, #0
    // bl ov12_022389B8
    // bl sub_020210BC
    // mov r0, #4
    // bl sub_02021148
    // mov r0, #1
    // mov r1, #0x1b
    // mov r2, #0xc5
    // mov r3, #5
    // bl NewMsgDataFromNarc
    // str r0, [r4, #0xc]
    // mov r0, #1
    // mov r1, #0x1b
    // mov r2, #3
    // mov r3, #5
    // bl NewMsgDataFromNarc
    // str r0, [r4, #0x10]
    // mov r0, #5
    // bl MessageFormat_New
    // str r0, [r4, #0x14]
    // mov r0, #5
    // lsl r0, r0, #6
    // mov r1, #5
    // bl String_New
    // str r0, [r4, #0x18]
    // ldr r0, [r4, #0x28]
    // mov r1, #0
    // bl PaletteData_GetUnfadedBuf
    // ldr r1, _02238324 ; =0x00002228
    // mov r2, #0xe0
    // add r1, r4, r1
    // bl MIi_CpuCopy16
    // ldr r0, [r4, #0x28]
    // mov r1, #2
    // bl PaletteData_GetUnfadedBuf
    // ldr r1, _02238328 ; =0x00002308
    // mov r2, #0xe0
    // add r1, r4, r1
    // bl MIi_CpuCopy16
    // add r0, r4, #0
    // bl ov12_0223B52C
    // mov r1, #0
    // lsl r6, r0, #2
    // str r1, [sp]
    // mov r0, #0x70
    // str r0, [sp, #4]
    // ldr r3, _0223832C ; =0x00002404
    // mov r5, #0xc
    // ldr r3, [r4, r3]
    // ldr r0, [r4, #0x28]
    // mul r5, r3
    // ldr r3, _02238330 ; =ov12_0226C1C8
    // mov r2, #2
    // add r3, r3, r5
    // ldr r3, [r6, r3]
    // lsl r3, r3, #0x10
    // lsr r3, r3, #0x10
    // bl PaletteData_FillPaletteInBuffer
    // mov r0, #0xc0
    // str r0, [sp]
    // add r0, #0x40
    // str r0, [sp, #4]
    // ldr r3, _0223832C ; =0x00002404
    // mov r5, #0xc
    // ldr r3, [r4, r3]
    // ldr r0, [r4, #0x28]
    // mul r5, r3
    // ldr r3, _02238330 ; =ov12_0226C1C8
    // mov r1, #0
    // add r3, r3, r5
    // ldr r3, [r6, r3]
    // mov r2, #2
    // lsl r3, r3, #0x10
    // lsr r3, r3, #0x10
    // bl PaletteData_FillPaletteInBuffer
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #0xdf
    // str r0, [sp, #4]
    // ldr r3, _0223832C ; =0x00002404
    // mov r5, #0xc
    // ldr r3, [r4, r3]
    // mov r1, #2
    // mul r5, r3
    // ldr r3, _02238330 ; =ov12_0226C1C8
    // ldr r0, [r4, #0x28]
    // add r3, r3, r5
    // ldr r3, [r6, r3]
    // add r2, r1, #0
    // lsl r3, r3, #0x10
    // lsr r3, r3, #0x10
    // bl PaletteData_FillPaletteInBuffer
    // mov r1, #0
    // mov r0, #0xa0
    // str r0, [sp]
    // mov r0, #0xc0
    // str r0, [sp, #4]
    // ldr r0, [r4, #0x28]
    // add r2, r1, #0
    // add r3, r1, #0
    // bl PaletteData_FillPaletteInBuffer
    // mov r2, #0
    // str r2, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, [r4, #0x28]
    // mov r1, #1
    // add r3, r2, #0
    // bl PaletteData_FillPaletteInBuffer
    // mov r2, #0
    // str r2, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, [r4, #0x28]
    // ldr r3, _02238334 ; =0x0000FFFF
    // mov r1, #3
    // bl PaletteData_FillPaletteInBuffer
    // ldr r0, [r4, #0x28]
    // mov r1, #0
    // mov r2, #0xb
    // mov r3, #5
    // bl sub_020163E0
    // mov r1, #0x1b
    // lsl r1, r1, #4
    // str r0, [r4, r1]
    // ldr r0, [r4, r1]
    // mov r1, #1
    // bl sub_0201649C
    // ldr r0, _02238338 ; =ov12_02239810
    // ldr r2, _0223833C ; =0x0000EA60
    // add r1, r4, #0
    // bl SysTask_CreateOnMainQueue
    // str r0, [r4, #0x1c]
    // ldr r0, _02238340 ; =ov12_02239854
    // ldr r2, _02238344 ; =0x0000C350
    // add r1, r4, #0
    // bl SysTask_CreateOnMainQueue
    // str r0, [r4, #0x20]
    // mov r2, #0x4b
    // ldr r0, _02238348 ; =ov12_0223998C
    // add r1, r4, #0
    // lsl r2, r2, #4
    // bl SysTask_CreateOnVBlankQueue
    // str r0, [r4, #0x24]
    // mov r1, #0x32
    // ldr r0, _0223834C ; =0x00002438
    // mvn r1, r1
    // str r1, [r4, r0]
    // add r0, r4, #0
    // bl ov12_0223A620
    // add r0, r4, #0
    // bl BattleSystem_GetBagCursor
    // bl BagCursor_Battle_Init
    // mov r0, #5
    // mov r1, #4
    // mov r2, #0
    // bl sub_02016EDC
    // mov r1, #0x72
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // mov r0, #4
    // mov r1, #5
    // bl sub_02020654
    // mov r1, #0x73
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // ldr r0, _02238350 ; =0x0000240C
    // ldr r1, [r4, r0]
    // mov r0, #0x10
    // tst r0, r1
    // beq _0223830E
    // mov r0, #0x6f
    // ldr r1, _02238354 ; =0x00002484
    // mov r5, #0
    // lsl r0, r0, #2
    // add r2, r7, r5
    // ldrb r3, [r2, r0]
    // add r2, r4, r5
    // add r5, r5, #1
    // strb r3, [r2, r1]
    // cmp r5, #4
    // blt _02238300
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _02238314: .word ov12_0226C060
    // _02238318: .word ov12_0226C018
    // _0223831C: .word 0x00100010
    // _02238320: .word ov12_0226C02C
    // _02238324: .word 0x00002228
    // _02238328: .word 0x00002308
    // _0223832C: .word 0x00002404
    // _02238330: .word ov12_0226C1C8
    // _02238334: .word 0x0000FFFF
    // _02238338: .word ov12_02239810
    // _0223833C: .word 0x0000EA60
    // _02238340: .word ov12_02239854
    // _02238344: .word 0x0000C350
    // _02238348: .word ov12_0223998C
    // _0223834C: .word 0x00002438
    // _02238350: .word 0x0000240C
    // _02238354: .word 0x00002484
    // TODO: decompile
}


void ov12_02238358(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // bl OverlayManager_GetData
    // add r4, r0, #0
    // ldr r2, [r4, #0x2c]
    // mov r1, #4
    // tst r1, r2
    // beq _0223839E
    // ldr r1, _02238430 ; =0x0000240C
    // mov r2, #0x10
    // ldr r3, [r4, r1]
    // tst r2, r3
    // bne _0223839E
    // sub r1, #0x10
    // ldrb r1, [r4, r1]
    // cmp r1, #0
    // beq _02238380
    // ldr r1, [r4, #0x30]
    // bl BattleContext_Main
    // ldr r0, [r4, #0x44]
    // mov r6, #0
    // cmp r0, #0
    // ble _0223842A
    // add r5, r4, #0
    // ldr r1, [r5, #0x34]
    // add r0, r4, #0
    // bl ov12_02258E54
    // ldr r0, [r4, #0x44]
    // add r6, r6, #1
    // add r5, r5, #4
    // cmp r6, r0
    // blt _0223838A
    // b _0223842A
    // ldr r0, _02238434 ; =0x000023FC
    // ldrb r0, [r4, r0]
    // cmp r0, #0
    // beq _022383BA
    // ldr r1, [r4, #0x30]
    // add r0, r4, #0
    // bl BattleContext_Main
    // ldr r1, _02238438 ; =0x000023FE
    // strb r0, [r4, r1]
    // add r0, r4, #0
    // mov r1, #1
    // bl ov12_022621C4
    // ldr r0, [r4, #0x44]
    // mov r6, #0
    // cmp r0, #0
    // ble _022383E0
    // add r5, r4, #0
    // add r7, r6, #0
    // ldr r1, [r5, #0x34]
    // add r0, r4, #0
    // bl ov12_02258E54
    // add r0, r4, #0
    // add r1, r7, #0
    // bl ov12_022621C4
    // ldr r0, [r4, #0x44]
    // add r6, r6, #1
    // add r5, r5, #4
    // cmp r6, r0
    // blt _022383C6
    // ldr r0, _02238438 ; =0x000023FE
    // ldrb r1, [r4, r0]
    // cmp r1, #0
    // bne _0223842A
    // sub r0, r0, #2
    // ldrb r0, [r4, r0]
    // cmp r0, #0
    // beq _02238404
    // ldr r1, [r4, #0x30]
    // add r0, r4, #0
    // bl BattleContext_Main
    // ldr r1, _02238438 ; =0x000023FE
    // strb r0, [r4, r1]
    // add r0, r4, #0
    // mov r1, #1
    // bl ov12_022621C4
    // ldr r0, [r4, #0x44]
    // mov r6, #0
    // cmp r0, #0
    // ble _0223842A
    // add r5, r4, #0
    // add r7, r6, #0
    // ldr r1, [r5, #0x34]
    // add r0, r4, #0
    // bl ov12_02258E54
    // add r0, r4, #0
    // add r1, r7, #0
    // bl ov12_022621C4
    // ldr r0, [r4, #0x44]
    // add r6, r6, #1
    // add r5, r5, #4
    // cmp r6, r0
    // blt _02238410
    // ldr r0, _02238438 ; =0x000023FE
    // ldrb r0, [r4, r0]
    // pop {r3, r4, r5, r6, r7, pc}
    // _02238430: .word 0x0000240C
    // _02238434: .word 0x000023FC
    // _02238438: .word 0x000023FE
    // TODO: decompile
}


void ov12_0223843C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // bl OverlayManager_GetData
    // add r4, r0, #0
    // add r0, r5, #0
    // bl OverlayManager_GetArgs
    // ldr r3, _02238778 ; =0x0000244C
    // mov r2, #0x67
    // ldr r1, [r4, r3]
    // add r7, r0, #0
    // lsl r2, r2, #2
    // str r1, [r7, r2]
    // add r1, r3, #0
    // sub r1, #0x40
    // ldr r1, [r4, r1]
    // sub r2, #0x10
    // str r1, [r7, r2]
    // sub r3, #0x40
    // ldr r2, [r4, r3]
    // mov r1, #0x10
    // tst r1, r2
    // bne _02238470
    // bl sub_020302A4
    // ldr r0, _0223877C ; =0x00002445
    // ldrb r0, [r4, r0]
    // cmp r0, #0
    // beq _02238480
    // add r0, r4, #0
    // mov r1, #0
    // bl ov12_02237ED0
    // ldr r1, [r7]
    // ldr r0, _02238780 ; =0x00000AA4
    // tst r0, r1
    // beq _0223848C
    // mov r5, #0
    // b _022384A0
    // ldr r0, _02238784 ; =0x00002420
    // ldrb r0, [r4, r0]
    // add r0, #0xfe
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // cmp r0, #1
    // bhi _0223849E
    // ldr r5, _02238788 ; =0x00007FFF
    // b _022384A0
    // mov r5, #0
    // mov r0, #0
    // add r1, r5, #0
    // bl sub_0200FBF4
    // mov r0, #1
    // add r1, r5, #0
    // bl sub_0200FBF4
    // add r0, r4, #0
    // bl BattleSystem_TryChangeForm
    // ldr r0, _02238784 ; =0x00002420
    // ldrb r0, [r4, r0]
    // cmp r0, #4
    // beq _022384CE
    // ldr r0, [r4, #0x6c]
    // mov r1, #0
    // bl Party_GetMonByIndex
    // add r1, r0, #0
    // add r0, r4, #0
    // bl ov12_0223B870
    // mov r0, #0
    // str r0, [sp]
    // add r6, r7, #0
    // add r5, r4, #0
    // ldr r0, [r5, #0x68]
    // ldr r1, [r6, #4]
    // bl Party_Copy
    // ldr r0, [r5, #0x68]
    // bl Heap_Free
    // add r1, r6, #0
    // add r1, #0xf8
    // ldr r0, [r5, #0x48]
    // ldr r1, [r1]
    // bl PlayerProfile_Copy
    // ldr r0, [r5, #0x48]
    // bl Heap_Free
    // ldr r0, [sp]
    // add r6, r6, #4
    // add r0, r0, #1
    // add r5, r5, #4
    // str r0, [sp]
    // cmp r0, #4
    // blt _022384D6
    // mov r0, #0x1b
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // bl sub_020164C4
    // mov r1, #0x42
    // lsl r1, r1, #2
    // ldr r0, [r4, #0x58]
    // ldr r1, [r7, r1]
    // bl Save_Bag_Copy
    // ldr r0, [r4, #0x58]
    // bl Heap_Free
    // mov r1, #0x11
    // lsl r1, r1, #4
    // ldr r0, [r4, #0x60]
    // ldr r1, [r7, r1]
    // bl Pokedex_Copy
    // ldr r0, [r4, #0x60]
    // bl Heap_Free
    // mov r0, #0x45
    // ldr r1, [r4, #0x64]
    // lsl r0, r0, #2
    // str r1, [r7, r0]
    // add r1, r0, #0
    // ldr r2, [r4, #0x5c]
    // sub r1, #8
    // str r2, [r7, r1]
    // add r1, r0, #0
    // add r1, #0xac
    // ldr r2, [r4, r1]
    // add r1, r0, #0
    // add r1, #0xa4
    // str r2, [r7, r1]
    // add r1, r4, #0
    // add r1, #0x98
    // ldr r2, [r1]
    // add r1, r0, #0
    // add r1, #0x14
    // str r2, [r7, r1]
    // add r1, r4, #0
    // add r1, #0x9c
    // ldr r2, [r1]
    // add r1, r0, #0
    // add r1, #0x20
    // str r2, [r7, r1]
    // add r1, r0, #0
    // ldr r2, _0223878C ; =0x00002414
    // add r1, #0x7c
    // ldr r3, [r4, r2]
    // add r0, #0x5c
    // str r3, [r7, r1]
    // add r1, r2, #0
    // add r1, #0xc
    // ldrb r3, [r4, r1]
    // mov r1, #0x3f
    // add r2, #0x28
    // and r1, r3
    // str r1, [r7, #0x14]
    // ldr r1, [r4, r2]
    // mov r2, #4
    // str r1, [r7, r0]
    // ldr r1, [r4, #0x30]
    // add r0, r4, #0
    // mov r3, #0
    // bl ov12_022581D4
    // mov r1, #0x5e
    // lsl r1, r1, #2
    // str r0, [r7, r1]
    // ldr r1, [r4, #0x30]
    // add r0, r4, #0
    // mov r2, #3
    // mov r3, #0
    // bl ov12_022581D4
    // mov r1, #0x4e
    // lsl r1, r1, #2
    // ldr r2, [r7, r1]
    // mov r3, #0
    // add r0, r2, r0
    // str r0, [r7, r1]
    // ldr r1, [r4, #0x30]
    // add r0, r4, #0
    // mov r2, #6
    // bl ov12_022581D4
    // add r5, r0, #0
    // ldr r1, [r4, #0x30]
    // add r0, r4, #0
    // mov r2, #6
    // mov r3, #2
    // bl ov12_022581D4
    // mov r1, #0x4f
    // lsl r1, r1, #2
    // ldr r2, [r7, r1]
    // add r0, r5, r0
    // add r0, r2, r0
    // str r0, [r7, r1]
    // ldr r1, [r4, #0x30]
    // add r0, r4, #0
    // mov r2, #7
    // mov r3, #0
    // bl ov12_022581D4
    // add r5, r0, #0
    // ldr r1, [r4, #0x30]
    // add r0, r4, #0
    // mov r2, #7
    // mov r3, #2
    // bl ov12_022581D4
    // mov r1, #5
    // lsl r1, r1, #6
    // ldr r2, [r7, r1]
    // add r0, r5, r0
    // add r0, r2, r0
    // str r0, [r7, r1]
    // ldr r1, [r4, #0x30]
    // add r0, r4, #0
    // mov r2, #3
    // mov r3, #0
    // bl ov12_022581D4
    // mov r1, #0x6d
    // lsl r1, r1, #2
    // str r0, [r7, r1]
    // ldr r0, _02238790 ; =0x00002478
    // add r1, #0x10
    // ldr r0, [r4, r0]
    // mov r6, #0
    // lsl r0, r0, #0x1f
    // lsr r0, r0, #0x1f
    // str r0, [r7, r1]
    // mov r7, #0x1d
    // add r5, r4, #0
    // lsl r7, r7, #4
    // ldr r0, [r5, r7]
    // bl Heap_Free
    // add r6, r6, #1
    // add r5, #0x10
    // cmp r6, #4
    // blt _0223861E
    // ldr r0, [r4, #0x18]
    // bl Heap_Free
    // ldr r0, [r4, #0x28]
    // mov r1, #0
    // bl PaletteData_FreeBuffers
    // ldr r0, [r4, #0x28]
    // mov r1, #1
    // bl PaletteData_FreeBuffers
    // ldr r0, [r4, #0x28]
    // mov r1, #2
    // bl PaletteData_FreeBuffers
    // ldr r0, [r4, #0x28]
    // mov r1, #3
    // bl PaletteData_FreeBuffers
    // ldr r0, [r4, #0x28]
    // bl PaletteData_Free
    // ldr r0, [r4, #0xc]
    // bl DestroyMsgData
    // ldr r0, [r4, #0x10]
    // bl DestroyMsgData
    // ldr r0, [r4, #0x14]
    // bl MessageFormat_Delete
    // mov r0, #0x72
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl sub_02016F2C
    // bl sub_02014F84
    // add r0, r4, #0
    // add r0, #0x8c
    // ldr r0, [r0]
    // bl ov07_0221BFE0
    // ldr r0, [r4, #0x30]
    // bl BattleContext_Delete
    // ldr r0, [r4, #0x44]
    // mov r6, #0
    // cmp r0, #0
    // ble _022386A8
    // ldr r7, _02238794 ; =0x000023FD
    // add r5, r4, #0
    // ldrb r2, [r4, r7]
    // ldr r1, [r5, #0x34]
    // add r0, r4, #0
    // bl ov12_02258E7C
    // ldr r0, [r4, #0x44]
    // add r6, r6, #1
    // add r5, r5, #4
    // cmp r6, r0
    // blt _02238694
    // add r0, r4, #0
    // add r0, #0x88
    // ldr r0, [r0]
    // bl PokepicManager_Delete
    // ldr r0, _02238794 ; =0x000023FD
    // ldrb r0, [r4, r0]
    // cmp r0, #2
    // beq _022386C0
    // add r0, r4, #0
    // bl ov12_02237B6C
    // mov r0, #0
    // bl TextFlags_SetCanABSpeedUpPrint
    // mov r0, #0
    // bl TextFlags_SetAutoScrollParam
    // mov r0, #0
    // bl TextFlags_SetCanTouchSpeedUpPrint
    // ldr r0, [r4, #8]
    // mov r1, #3
    // bl WindowArray_Delete
    // ldr r0, [r4, #4]
    // bl Heap_Free
    // mov r0, #0x22
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // bl Heap_Free
    // mov r0, #0x89
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl Heap_Free
    // mov r0, #0x6a
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl MessagePrinter_Delete
    // ldr r0, [r4, #0x1c]
    // bl SysTask_Destroy
    // ldr r0, [r4, #0x20]
    // bl SysTask_Destroy
    // bl sub_02021238
    // ldr r0, [r4]
    // bl ov12_022396E8
    // ldr r0, _02238798 ; =0x00002434
    // ldr r0, [r4, r0]
    // bl SetLCRNGSeed
    // add r0, r4, #0
    // bl BattleSystem_GetCriticalHpMusicFlag
    // cmp r0, #0
    // beq _0223872E
    // ldr r0, _0223879C ; =0x00000704
    // mov r1, #0
    // bl StopSE
    // mov r0, #0x73
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl sub_0202067C
    // add r0, r4, #0
    // bl BattleSystem_IsRecordingPaused
    // cmp r0, #0
    // beq _02238748
    // mov r0, #0x7f
    // bl Sound_SetMasterVolume
    // mov r0, #0x92
    // lsl r0, r0, #6
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // beq _02238756
    // bl ov12_0226BEF0
    // add r0, r4, #0
    // bl Heap_Free
    // ldr r0, _022387A0 ; =FS_OVERLAY_ID(OVY_6)
    // bl UnloadOverlayByID
    // ldr r0, _022387A4 ; =FS_OVERLAY_ID(OVY_7)
    // bl UnloadOverlayByID
    // bl sub_02039998
    // cmp r0, #0
    // bne _02238776
    // ldr r0, _022387A8 ; =FS_OVERLAY_ID(OVY_18)
    // bl UnloadOverlayByID
    // pop {r3, r4, r5, r6, r7, pc}
    // _02238778: .word 0x0000244C
    // _0223877C: .word 0x00002445
    // _02238780: .word 0x00000AA4
    // _02238784: .word 0x00002420
    // _02238788: .word 0x00007FFF
    // _0223878C: .word 0x00002414
    // _02238790: .word 0x00002478
    // _02238794: .word 0x000023FD
    // _02238798: .word 0x00002434
    // _0223879C: .word 0x00000704
    // _022387A0: .word FS_OVERLAY_ID(OVY_6)
    // _022387A4: .word FS_OVERLAY_ID(OVY_7)
    // _022387A8: .word FS_OVERLAY_ID(OVY_18)
    // TODO: decompile
}


void ov12_022387AC(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x9c
    // add r5, r0, #0
    // add r4, r1, #0
    // bl GfGfx_DisableEngineAPlanes
    // ldr r6, _02238994 ; =ov12_0226C0A8
    // add r3, sp, #0x20
    // mov r2, #5
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // sub r2, r2, #1
    // bne _022387BE
    // add r0, sp, #0x20
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
    // mov r0, #0
    // bl SetMasterBrightnessNeutral
    // mov r0, #1
    // bl SetMasterBrightnessNeutral
    // ldr r6, _02238998 ; =ov12_0226BFE8
    // add r3, sp, #0x10
    // add r2, r3, #0
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // add r0, r2, #0
    // bl SetBothScreensModesAndDisable
    // ldr r1, _0223899C ; =0x000023FF
    // mov r0, #1
    // ldrb r2, [r5, r1]
    // ldr r6, _022389A0 ; =ov12_0226C174
    // add r3, sp, #0x48
    // bic r2, r0
    // mov r0, #1
    // orr r0, r2
    // strb r0, [r5, r1]
    // mov r2, #0xa
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // sub r2, r2, #1
    // bne _02238838
    // ldr r0, [r6]
    // mov r1, #1
    // str r0, [r3]
    // add r0, r4, #0
    // add r2, sp, #0x48
    // mov r3, #0
    // bl InitBgFromTemplate
    // add r0, r4, #0
    // mov r1, #1
    // bl BgClearTilemapBufferAndCommit
    // add r0, r4, #0
    // mov r1, #2
    // add r2, sp, #0x64
    // mov r3, #0
    // bl InitBgFromTemplate
    // add r0, r4, #0
    // mov r1, #2
    // bl BgClearTilemapBufferAndCommit
    // add r0, r4, #0
    // mov r1, #3
    // add r2, sp, #0x80
    // mov r3, #0
    // bl InitBgFromTemplate
    // add r0, r4, #0
    // mov r1, #3
    // bl BgClearTilemapBufferAndCommit
    // ldr r1, _022389A4 ; =0x04000008
    // mov r0, #3
    // ldrh r2, [r1]
    // bic r2, r0
    // mov r0, #1
    // orr r2, r0
    // strh r2, [r1]
    // add r1, r0, #0
    // bl GfGfx_EngineATogglePlanes
    // add r0, r4, #0
    // bl BgConfig_InitBattleMenuBackgrounds
    // add r0, r5, #0
    // bl BattleSystem_GetFrame
    // add r7, r0, #0
    // lsl r0, r7, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp]
    // mov r0, #5
    // mov r1, #1
    // str r0, [sp, #4]
    // add r0, r4, #0
    // add r2, r1, #0
    // mov r3, #0xa
    // bl sub_0200EB80
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // mov r0, #5
    // str r0, [sp, #0xc]
    // ldr r1, _022389A8 ; =0x00002404
    // mov r0, #7
    // ldr r1, [r5, r1]
    // add r2, r4, #0
    // add r1, r1, #3
    // mov r3, #3
    // bl GfGfxLoader_LoadCharData
    // add r0, r5, #0
    // bl ov12_0223B52C
    // add r6, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r2, _022389A8 ; =0x00002404
    // ldr r0, [r5, #0x28]
    // ldr r3, [r5, r2]
    // mov r1, #7
    // lsl r2, r3, #1
    // add r2, r3, r2
    // add r2, #0xb0
    // add r2, r2, r6
    // mov r3, #5
    // bl PaletteData_LoadNarc
    // add r0, r7, #0
    // bl sub_0200E640
    // add r2, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #0x20
    // str r0, [sp, #4]
    // mov r0, #0xa0
    // str r0, [sp, #8]
    // ldr r0, [r5, #0x28]
    // mov r1, #0x26
    // mov r3, #5
    // bl PaletteData_LoadNarc
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #0x20
    // str r0, [sp, #4]
    // mov r0, #0xb0
    // str r0, [sp, #8]
    // ldr r0, [r5, #0x28]
    // mov r1, #0x10
    // mov r2, #8
    // mov r3, #5
    // bl PaletteData_LoadNarc
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // mov r0, #5
    // str r0, [sp, #0xc]
    // mov r0, #7
    // mov r1, #2
    // add r2, r4, #0
    // mov r3, #3
    // bl GfGfxLoader_LoadScrnData
    // mov r0, #1
    // lsl r0, r0, #0x1a
    // ldr r2, [r0]
    // ldr r1, _022389AC ; =0xFFFF1FFF
    // ldr r3, _022389B0 ; =0x04001000
    // and r2, r1
    // str r2, [r0]
    // ldr r2, [r3]
    // and r1, r2
    // add r2, r0, #0
    // str r1, [r3]
    // add r2, #0x48
    // ldrh r3, [r2]
    // mov r1, #0x3f
    // add r0, #0x4a
    // bic r3, r1
    // strh r3, [r2]
    // ldrh r2, [r0]
    // bic r2, r1
    // strh r2, [r0]
    // bl GfGfx_BothDispOn
    // mov r0, #0x10
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #0x10
    // mov r1, #1
    // bl GfGfx_EngineBTogglePlanes
    // ldr r0, _022389B4 ; =ov12_02239730
    // add r1, r5, #0
    // bl Main_SetVBlankIntrCB
    // add sp, #0x9c
    // pop {r4, r5, r6, r7, pc}
    // _02238994: .word ov12_0226C0A8
    // _02238998: .word ov12_0226BFE8
    // _0223899C: .word 0x000023FF
    // _022389A0: .word ov12_0226C174
    // _022389A4: .word 0x04000008
    // _022389A8: .word 0x00002404
    // _022389AC: .word 0xFFFF1FFF
    // _022389B0: .word 0x04001000
    // _022389B4: .word ov12_02239730
    // TODO: decompile
}


void ov12_022389B8(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // bl BattleSystem_GetTerrainId
    // add r4, r0, #0
    // mov r0, #0x5f
    // lsl r0, r0, #2
    // add r0, r5, r0
    // add r1, r5, #0
    // mov r2, #0
    // add r3, r4, #0
    // bl ov12_02265FD4
    // mov r0, #0x63
    // lsl r0, r0, #2
    // add r0, r5, r0
    // add r1, r5, #0
    // mov r2, #1
    // add r3, r4, #0
    // bl ov12_02265FD4
    // add r0, r5, #0
    // bl BattleSystem_GetBattleContext
    // str r0, [sp]
    // ldr r0, [r5, #0x44]
    // mov r4, #0
    // cmp r0, #0
    // ble _02238A2A
    // add r6, r5, #0
    // ldr r1, [sp]
    // add r0, r5, #0
    // mov r2, #2
    // add r3, r4, #0
    // bl ov12_022581D4
    // add r7, r0, #0
    // add r0, r5, #0
    // add r1, r4, #0
    // add r2, r7, #0
    // bl BattleSystem_GetPartyMon
    // add r1, r0, #0
    // add r0, r5, #0
    // bl BattleSystem_GetMonBall
    // add r2, r0, #0
    // ldr r1, [r6, #0x34]
    // add r0, r5, #0
    // add r3, r7, #0
    // bl ov12_02258DB0
    // ldr r0, [r5, #0x44]
    // add r4, r4, #1
    // add r6, r6, #4
    // cmp r4, r0
    // blt _022389F4
    // bl ov12_0223A7A0
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov12_02238A30(void) {
    GfGfx_EngineATogglePlanes(1, 0);
    GfGfx_EngineATogglePlanes(2, 0);
    FreeBgTilemapBuffer(r4, 1);
    FreeBgTilemapBuffer(r4, 2);
    FreeBgTilemapBuffer(r4, 3);
    BgConfig_CleanupBattleMenuBackgrounds(r4);
}


void ov12_02238A64(void) {
    // bx lr
    // TODO: decompile
}


void ov12_02238A68(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x48
    // add r4, r0, #0
    // ldr r0, [r1]
    // str r1, [sp, #4]
    // str r0, [r4, #0x2c]
    // mov r7, #0
    // add r6, r4, #0
    // add r5, r1, #0
    // mov r0, #5
    // bl PlayerProfile_New
    // add r1, r0, #0
    // add r0, r5, #0
    // str r1, [r6, #0x48]
    // add r0, #0xf8
    // ldr r0, [r0]
    // bl PlayerProfile_Copy
    // mov r0, #0x46
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // add r7, r7, #1
    // str r0, [r6, #0x78]
    // add r6, r6, #4
    // add r5, r5, #4
    // cmp r7, #4
    // blt _02238A7A
    // mov r1, #0x1b
    // ldr r0, [sp, #4]
    // lsl r1, r1, #4
    // ldrh r1, [r0, r1]
    // ldr r0, _02238D44 ; =0x00002446
    // ldr r3, [sp, #4]
    // strh r1, [r4, r0]
    // mov r0, #0x1a
    // ldr r1, _02238D48 ; =0x00002468
    // mov r6, #0
    // add r5, r4, #0
    // lsl r0, r0, #4
    // ldr r2, [r3, r0]
    // add r6, r6, #1
    // str r2, [r5, r1]
    // add r3, r3, #4
    // add r5, r5, #4
    // cmp r6, #4
    // blt _02238AB8
    // bl GetLCRNGSeed
    // ldr r1, _02238D4C ; =0x00002434
    // ldr r2, [sp, #4]
    // str r0, [r4, r1]
    // mov r0, #0x67
    // lsl r0, r0, #2
    // ldr r3, [r2, r0]
    // add r2, r1, #0
    // add r2, #0x14
    // str r3, [r4, r2]
    // ldr r2, [sp, #4]
    // ldr r3, [r2, r0]
    // add r2, r1, #0
    // add r2, #0x18
    // str r3, [r4, r2]
    // ldr r2, [sp, #4]
    // sub r0, #0x10
    // ldr r0, [r2, r0]
    // sub r1, #0x28
    // str r0, [r4, r1]
    // mov r0, #5
    // bl Save_Bag_New
    // str r0, [r4, #0x58]
    // mov r1, #0x42
    // ldr r0, [sp, #4]
    // lsl r1, r1, #2
    // ldr r0, [r0, r1]
    // ldr r1, [r4, #0x58]
    // bl Save_Bag_Copy
    // mov r0, #5
    // bl Pokedex_New
    // str r0, [r4, #0x60]
    // mov r1, #0x11
    // ldr r0, [sp, #4]
    // lsl r1, r1, #4
    // ldr r0, [r0, r1]
    // ldr r1, [r4, #0x60]
    // bl Pokedex_Copy
    // mov r1, #0x45
    // lsl r1, r1, #2
    // ldr r0, [sp, #4]
    // add r2, r1, #0
    // ldr r0, [r0, r1]
    // add r3, r1, #0
    // str r0, [r4, #0x64]
    // ldr r0, [sp, #4]
    // add r2, #0x1c
    // ldr r2, [r0, r2]
    // add r0, r1, #0
    // add r0, #0xa0
    // str r2, [r4, r0]
    // add r2, r1, #0
    // ldr r0, [sp, #4]
    // add r2, #0x34
    // ldr r2, [r0, r2]
    // add r0, r1, #0
    // add r0, #0xa4
    // str r2, [r4, r0]
    // add r2, r1, #0
    // ldr r0, [sp, #4]
    // sub r2, #8
    // ldr r0, [r0, r2]
    // add r2, r1, #0
    // str r0, [r4, #0x5c]
    // ldr r0, [sp, #4]
    // add r2, #0xa4
    // ldr r2, [r0, r2]
    // add r0, r1, #0
    // add r0, #0xac
    // str r2, [r4, r0]
    // add r2, r1, #0
    // ldr r0, [sp, #4]
    // add r2, #0x14
    // ldr r2, [r0, r2]
    // add r0, r4, #0
    // add r0, #0x98
    // str r2, [r0]
    // add r2, r1, #0
    // add r5, r1, #0
    // ldr r0, [sp, #4]
    // add r2, #0x4c
    // ldr r2, [r0, r2]
    // ldr r0, _02238D50 ; =0x00002424
    // add r3, #0x20
    // str r2, [r4, r0]
    // ldr r2, [sp, #4]
    // add r5, #0x58
    // ldr r3, [r2, r3]
    // add r2, r4, #0
    // add r2, #0x9c
    // str r3, [r2]
    // add r3, r1, #0
    // ldr r2, [sp, #4]
    // add r3, #0x7c
    // ldr r3, [r2, r3]
    // add r2, r0, #0
    // sub r2, #0x10
    // str r3, [r4, r2]
    // add r3, r1, #0
    // ldr r2, [sp, #4]
    // add r3, #0x3c
    // ldr r3, [r2, r3]
    // add r2, r0, #0
    // sub r2, #0x24
    // str r3, [r4, r2]
    // add r3, r1, #0
    // ldr r2, [sp, #4]
    // add r3, #0x38
    // ldr r3, [r2, r3]
    // add r2, r0, #0
    // sub r2, #0x20
    // str r3, [r4, r2]
    // add r3, r1, #0
    // ldr r2, [sp, #4]
    // add r3, #0x40
    // ldr r3, [r2, r3]
    // add r2, r0, #0
    // sub r2, #0x1c
    // str r3, [r4, r2]
    // add r3, r1, #0
    // ldr r2, [sp, #4]
    // add r3, #0x48
    // ldr r3, [r2, r3]
    // add r2, r0, #0
    // sub r2, #0x14
    // str r3, [r4, r2]
    // add r3, r1, #0
    // ldr r2, [sp, #4]
    // add r3, #0x80
    // ldr r3, [r2, r3]
    // add r2, r0, #0
    // sub r2, #8
    // str r3, [r4, r2]
    // add r3, r1, #0
    // ldr r2, [sp, #4]
    // add r3, #0x50
    // ldr r3, [r2, r3]
    // add r2, r0, #4
    // str r3, [r4, r2]
    // add r3, r1, #0
    // ldr r2, [sp, #4]
    // add r3, #0x54
    // ldr r3, [r2, r3]
    // add r2, r0, #0
    // add r2, #0xc
    // str r3, [r4, r2]
    // add r2, r0, #0
    // add r2, #0x54
    // ldr r2, [r4, r2]
    // mov r3, #2
    // bic r2, r3
    // ldr r3, [sp, #4]
    // ldr r3, [r3, r5]
    // add r5, r1, #0
    // lsl r3, r3, #0x1f
    // lsr r3, r3, #0x1e
    // orr r3, r2
    // add r2, r0, #0
    // add r2, #0x54
    // str r3, [r4, r2]
    // add r2, r0, #0
    // add r2, #0x54
    // ldr r2, [r4, r2]
    // mov r3, #8
    // bic r2, r3
    // ldr r3, [sp, #4]
    // add r5, #0xbc
    // ldr r3, [r3, r5]
    // lsl r3, r3, #0x1f
    // lsr r3, r3, #0x1c
    // orr r3, r2
    // add r2, r0, #0
    // add r2, #0x54
    // str r3, [r4, r2]
    // add r3, r1, #0
    // ldr r2, [sp, #4]
    // add r3, #0x60
    // ldr r2, [r2, r3]
    // add r0, #8
    // str r2, [r4, r0]
    // ldr r0, [sp, #4]
    // add r1, #0x30
    // ldr r0, [r0, r1]
    // mov r1, #0x87
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // ldr r0, [sp, #4]
    // sub r1, #0xd8
    // ldr r0, [r0, r1]
    // cmp r0, #0
    // bne _02238C52
    // bl GF_AssertFail
    // mov r1, #0x72
    // ldr r0, [sp, #4]
    // lsl r1, r1, #2
    // ldr r1, [r0, r1]
    // ldr r0, _02238D54 ; =0x00002488
    // ldr r5, [sp, #4]
    // str r1, [r4, r0]
    // mov r0, #0
    // str r0, [sp, #8]
    // str r4, [sp, #0x34]
    // add r6, r5, #0
    // add r7, r4, #0
    // ldr r0, [sp, #0x34]
    // ldr r1, [r5, #0x18]
    // add r0, #0xa0
    // strh r1, [r0]
    // add r3, r6, #0
    // add r2, r7, #0
    // mov r0, #6
    // add r3, #0x28
    // add r2, #0xac
    // mov ip, r0
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // mov r0, ip
    // sub r0, r0, #1
    // mov ip, r0
    // bne _02238C7E
    // ldr r0, [r3]
    // add r5, r5, #4
    // str r0, [r2]
    // ldr r0, [sp, #0x34]
    // add r6, #0x34
    // add r0, r0, #2
    // str r0, [sp, #0x34]
    // ldr r0, [sp, #8]
    // add r7, #0x34
    // add r0, r0, #1
    // str r0, [sp, #8]
    // cmp r0, #4
    // blt _02238C6A
    // add r0, r4, #0
    // bl BattleContext_New
    // ldr r7, _02238D58 ; =0x0000248C
    // str r0, [r4, #0x30]
    // mov r5, #0
    // add r6, r4, #0
    // mov r0, #5
    // bl SaveArray_Party_Alloc
    // str r0, [r6, #0x68]
    // ldr r0, [sp, #4]
    // add r6, r6, #4
    // add r1, r0, r5
    // mov r0, #0x73
    // lsl r0, r0, #2
    // ldrb r1, [r1, r0]
    // add r0, r4, r5
    // add r5, r5, #1
    // strb r1, [r0, r7]
    // cmp r5, #4
    // blt _02238CB2
    // mov r0, #0
    // ldr r6, [sp, #4]
    // str r0, [sp, #0xc]
    // ldr r0, [r6, #4]
    // mov r5, #0
    // bl Party_GetCount
    // cmp r0, #0
    // ble _02238D08
    // ldr r0, [r6, #4]
    // add r1, r5, #0
    // bl Party_GetMonByIndex
    // add r7, r0, #0
    // bl GetMonGender
    // str r0, [sp, #0x44]
    // add r0, r7, #0
    // mov r1, #0x6f
    // add r2, sp, #0x44
    // bl SetMonData
    // ldr r0, [r6, #4]
    // add r5, r5, #1
    // bl Party_GetCount
    // cmp r5, r0
    // blt _02238CE2
    // ldr r0, [sp, #0xc]
    // add r6, r6, #4
    // add r0, r0, #1
    // str r0, [sp, #0xc]
    // cmp r0, #4
    // blt _02238CD6
    // ldr r0, [r4, #0x2c]
    // mov r1, #4
    // tst r1, r0
    // bne _02238D1E
    // b _022390CE
    // add r0, r4, #0
    // bl sub_02074E5C
    // add r0, r4, #0
    // bl ov12_0223BFC0
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #0x38]
    // ldr r1, [sp, #4]
    // add r0, r4, #0
    // bl ov12_0223A664
    // ldr r1, [r4, #0x2c]
    // mov r0, #0x80
    // tst r0, r1
    // beq _02238E22
    // ldr r6, _02238D5C ; =ov12_0226C2DC
    // b _02238D60
    // _02238D44: .word 0x00002446
    // _02238D48: .word 0x00002468
    // _02238D4C: .word 0x00002434
    // _02238D50: .word 0x00002424
    // _02238D54: .word 0x00002488
    // _02238D58: .word 0x0000248C
    // _02238D5C: .word ov12_0226C2DC
    // mov r5, #0
    // add r7, r4, #0
    // add r0, sp, #0x40
    // strb r5, [r0]
    // ldrb r1, [r6]
    // strb r1, [r0, #1]
    // add r0, r4, #0
    // add r1, sp, #0x40
    // bl ov12_02258D74
    // str r0, [r7, #0x34]
    // add r5, r5, #1
    // add r6, r6, #1
    // add r7, r7, #4
    // cmp r5, #4
    // blt _02238D64
    // str r5, [r4, #0x44]
    // mov r6, #0
    // add r5, r4, #0
    // ldr r1, [r5, #0x34]
    // add r0, r4, #0
    // bl ov12_02260EA4
    // ldr r0, [sp, #4]
    // ldr r1, [r5, #0x68]
    // ldr r0, [r0, #4]
    // bl Party_Copy
    // ldr r0, [sp, #4]
    // add r6, r6, #1
    // add r0, r0, #4
    // add r5, r5, #4
    // str r0, [sp, #4]
    // cmp r6, #4
    // blt _02238D86
    // mov r0, #0
    // str r0, [sp, #0x10]
    // ldr r0, [r4, #0x44]
    // cmp r0, #0
    // ble _02238E18
    // add r7, r4, #0
    // ldr r0, [r7, #0x68]
    // mov r5, #0
    // bl Party_GetCount
    // cmp r0, #0
    // ble _02238DFC
    // ldr r0, [r7, #0x68]
    // add r1, r5, #0
    // bl Party_GetMonByIndex
    // mov r1, #5
    // mov r2, #0
    // add r6, r0, #0
    // bl GetMonData
    // cmp r0, #0
    // beq _02238DF0
    // add r0, r6, #0
    // mov r1, #0x4c
    // mov r2, #0
    // bl GetMonData
    // cmp r0, #0
    // bne _02238DF0
    // add r0, r6, #0
    // mov r1, #0xa3
    // mov r2, #0
    // bl GetMonData
    // cmp r0, #0
    // bne _02238DFC
    // ldr r0, [r7, #0x68]
    // add r5, r5, #1
    // bl Party_GetCount
    // cmp r5, r0
    // blt _02238DBE
    // str r5, [sp]
    // ldr r1, [r4, #0x30]
    // ldr r3, [sp, #0x10]
    // add r0, r4, #0
    // mov r2, #2
    // bl ov12_022582B8
    // ldr r0, [sp, #0x10]
    // ldr r1, [r4, #0x44]
    // add r0, r0, #1
    // add r7, r7, #4
    // str r0, [sp, #0x10]
    // cmp r0, r1
    // blt _02238DB2
    // ldr r1, [r4, #0x30]
    // add r0, r4, #0
    // bl ov12_02256F28
    // b _022390C4
    // mov r0, #8
    // tst r0, r1
    // beq _02238F04
    // mov r5, #0
    // add r6, r4, #0
    // add r0, sp, #0x40
    // strb r5, [r0]
    // ldr r1, [sp, #0x38]
    // add r0, r4, #0
    // bl ov12_0223BFCC
    // lsl r1, r5, #0x10
    // add r7, r0, #0
    // add r0, r4, #0
    // lsr r1, r1, #0x10
    // bl ov12_0223BFCC
    // ldr r1, _022390DC ; =ov12_0226C008
    // lsl r2, r7, #2
    // add r1, r1, r2
    // ldrb r1, [r0, r1]
    // add r0, sp, #0x40
    // strb r1, [r0, #1]
    // add r0, r4, #0
    // add r1, sp, #0x40
    // bl ov12_02258D74
    // str r0, [r6, #0x34]
    // add r5, r5, #1
    // add r6, r6, #4
    // cmp r5, #4
    // blt _02238E2C
    // str r5, [r4, #0x44]
    // mov r6, #0
    // add r5, r4, #0
    // ldr r1, [r5, #0x34]
    // add r0, r4, #0
    // bl ov12_02260EA4
    // ldr r0, [sp, #4]
    // ldr r1, [r5, #0x68]
    // ldr r0, [r0, #4]
    // bl Party_Copy
    // ldr r0, [sp, #4]
    // add r6, r6, #1
    // add r0, r0, #4
    // add r5, r5, #4
    // str r0, [sp, #4]
    // cmp r6, #4
    // blt _02238E68
    // mov r0, #0
    // str r0, [sp, #0x14]
    // ldr r0, [r4, #0x44]
    // cmp r0, #0
    // ble _02238EFA
    // add r7, r4, #0
    // ldr r0, [r7, #0x68]
    // mov r5, #0
    // bl Party_GetCount
    // cmp r0, #0
    // ble _02238EDE
    // ldr r0, [r7, #0x68]
    // add r1, r5, #0
    // bl Party_GetMonByIndex
    // mov r1, #5
    // mov r2, #0
    // add r6, r0, #0
    // bl GetMonData
    // cmp r0, #0
    // beq _02238ED2
    // add r0, r6, #0
    // mov r1, #0x4c
    // mov r2, #0
    // bl GetMonData
    // cmp r0, #0
    // bne _02238ED2
    // add r0, r6, #0
    // mov r1, #0xa3
    // mov r2, #0
    // bl GetMonData
    // cmp r0, #0
    // bne _02238EDE
    // ldr r0, [r7, #0x68]
    // add r5, r5, #1
    // bl Party_GetCount
    // cmp r5, r0
    // blt _02238EA0
    // str r5, [sp]
    // ldr r1, [r4, #0x30]
    // ldr r3, [sp, #0x14]
    // add r0, r4, #0
    // mov r2, #2
    // bl ov12_022582B8
    // ldr r0, [sp, #0x14]
    // ldr r1, [r4, #0x44]
    // add r0, r0, #1
    // add r7, r7, #4
    // str r0, [sp, #0x14]
    // cmp r0, r1
    // blt _02238E94
    // ldr r1, [r4, #0x30]
    // add r0, r4, #0
    // bl ov12_02256F28
    // b _022390C4
    // mov r0, #2
    // tst r0, r1
    // bne _02238F0C
    // b _02239018
    // ldr r0, [sp, #0x38]
    // ldr r1, _022390E0 ; =ov12_0226BFE0
    // lsl r0, r0, #2
    // mov r5, #0
    // add r6, r1, r0
    // add r7, r4, #0
    // add r0, sp, #0x40
    // strb r5, [r0]
    // ldrb r1, [r6]
    // strb r1, [r0, #1]
    // add r0, r4, #0
    // add r1, sp, #0x40
    // bl ov12_02258D74
    // add r1, r0, #0
    // add r0, r4, #0
    // str r1, [r7, #0x34]
    // bl ov12_02260EA4
    // add r5, r5, #1
    // add r6, r6, #1
    // add r7, r7, #4
    // cmp r5, #4
    // blt _02238F18
    // str r5, [r4, #0x44]
    // mov r6, #0
    // add r5, r4, #0
    // ldr r0, [sp, #4]
    // ldr r1, [r5, #0x68]
    // ldr r0, [r0, #4]
    // bl Party_Copy
    // ldr r0, [sp, #4]
    // add r6, r6, #1
    // add r0, r0, #4
    // add r5, r5, #4
    // str r0, [sp, #4]
    // cmp r6, #4
    // blt _02238F42
    // mov r0, #0
    // str r0, [sp, #0x18]
    // ldr r0, [r4, #0x44]
    // cmp r0, #0
    // ble _02239016
    // ldr r0, [sp, #0x18]
    // mov r1, #1
    // and r0, r1
    // str r0, [sp, #0x30]
    // lsl r0, r0, #2
    // add r7, r4, r0
    // ldr r0, [r7, #0x68]
    // mov r6, #0
    // bl Party_GetCount
    // cmp r0, #0
    // ble _02238FFC
    // ldr r0, [r7, #0x68]
    // add r1, r6, #0
    // bl Party_GetMonByIndex
    // ldr r1, [sp, #0x18]
    // add r5, r0, #0
    // cmp r1, #1
    // ble _02238FC8
    // ldr r1, [r4, #0x30]
    // ldr r3, [sp, #0x30]
    // add r0, r4, #0
    // mov r2, #2
    // bl ov12_022581D4
    // cmp r6, r0
    // beq _02238FF0
    // add r0, r5, #0
    // mov r1, #5
    // mov r2, #0
    // bl GetMonData
    // cmp r0, #0
    // beq _02238FF0
    // add r0, r5, #0
    // mov r1, #0x4c
    // mov r2, #0
    // bl GetMonData
    // cmp r0, #0
    // bne _02238FF0
    // add r0, r5, #0
    // mov r1, #0xa3
    // mov r2, #0
    // bl GetMonData
    // cmp r0, #0
    // bne _02238FFC
    // b _02238FF0
    // mov r1, #5
    // mov r2, #0
    // bl GetMonData
    // cmp r0, #0
    // beq _02238FF0
    // add r0, r5, #0
    // mov r1, #0x4c
    // mov r2, #0
    // bl GetMonData
    // cmp r0, #0
    // bne _02238FF0
    // add r0, r5, #0
    // mov r1, #0xa3
    // mov r2, #0
    // bl GetMonData
    // cmp r0, #0
    // bne _02238FFC
    // ldr r0, [r7, #0x68]
    // add r6, r6, #1
    // bl Party_GetCount
    // cmp r6, r0
    // blt _02238F7C
    // str r6, [sp]
    // ldr r1, [r4, #0x30]
    // ldr r3, [sp, #0x18]
    // add r0, r4, #0
    // mov r2, #2
    // bl ov12_022582B8
    // ldr r0, [sp, #0x18]
    // ldr r1, [r4, #0x44]
    // add r0, r0, #1
    // str r0, [sp, #0x18]
    // cmp r0, r1
    // blt _02238F64
    // b _022390C4
    // ldr r0, [sp, #0x38]
    // ldr r1, _022390E4 ; =ov12_0226BFDC
    // lsl r0, r0, #1
    // mov r5, #0
    // add r6, r1, r0
    // add r7, r4, #0
    // add r0, sp, #0x40
    // strb r5, [r0]
    // ldrb r1, [r6]
    // strb r1, [r0, #1]
    // add r0, r4, #0
    // add r1, sp, #0x40
    // bl ov12_02258D74
    // add r1, r0, #0
    // add r0, r4, #0
    // str r1, [r7, #0x34]
    // bl ov12_02260EA4
    // add r5, r5, #1
    // add r6, r6, #1
    // add r7, r7, #4
    // cmp r5, #2
    // blt _02239024
    // mov r0, #0
    // str r5, [r4, #0x44]
    // str r0, [sp, #0x1c]
    // add r7, r4, #0
    // ldr r0, [sp, #4]
    // ldr r1, [r7, #0x68]
    // ldr r0, [r0, #4]
    // bl Party_Copy
    // ldr r0, [r7, #0x68]
    // mov r5, #0
    // bl Party_GetCount
    // cmp r0, #0
    // ble _022390A4
    // ldr r0, [r7, #0x68]
    // add r1, r5, #0
    // bl Party_GetMonByIndex
    // mov r1, #5
    // mov r2, #0
    // add r6, r0, #0
    // bl GetMonData
    // cmp r0, #0
    // beq _02239098
    // add r0, r6, #0
    // mov r1, #0x4c
    // mov r2, #0
    // bl GetMonData
    // cmp r0, #0
    // bne _02239098
    // add r0, r6, #0
    // mov r1, #0xa3
    // mov r2, #0
    // bl GetMonData
    // cmp r0, #0
    // bne _022390A4
    // ldr r0, [r7, #0x68]
    // add r5, r5, #1
    // bl Party_GetCount
    // cmp r5, r0
    // blt _02239066
    // str r5, [sp]
    // ldr r1, [r4, #0x30]
    // ldr r3, [sp, #0x1c]
    // add r0, r4, #0
    // mov r2, #2
    // bl ov12_022582B8
    // ldr r0, [sp, #4]
    // add r7, r7, #4
    // add r0, r0, #4
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x1c]
    // add r0, r0, #1
    // str r0, [sp, #0x1c]
    // cmp r0, #4
    // blt _02239050
    // ldr r1, [r4, #0x30]
    // add r0, r4, #0
    // bl ov12_02256F28
    // b _0223948A
    // mov r1, #0x10
    // tst r1, r0
    // bne _022390D6
    // b _022391EA
    // ldr r6, _022390E8 ; =ov12_0226C2DC
    // b _022390EC
    // nop
    // _022390DC: .word ov12_0226C008
    // _022390E0: .word ov12_0226BFE0
    // _022390E4: .word ov12_0226BFDC
    // _022390E8: .word ov12_0226C2DC
    // mov r5, #0
    // add r7, r4, #0
    // add r0, sp, #0x40
    // strb r5, [r0]
    // ldrb r1, [r6]
    // strb r1, [r0, #1]
    // add r0, r4, #0
    // add r1, sp, #0x40
    // bl ov12_02258D74
    // add r1, r0, #0
    // add r0, r4, #0
    // str r1, [r7, #0x34]
    // bl ov12_02260EA4
    // add r5, r5, #1
    // add r6, r6, #1
    // add r7, r7, #4
    // cmp r5, #4
    // blt _022390F0
    // str r5, [r4, #0x44]
    // mov r6, #0
    // add r5, r4, #0
    // ldr r0, [sp, #4]
    // ldr r1, [r5, #0x68]
    // ldr r0, [r0, #4]
    // bl Party_Copy
    // ldr r0, [sp, #4]
    // add r6, r6, #1
    // add r0, r0, #4
    // add r5, r5, #4
    // str r0, [sp, #4]
    // cmp r6, #4
    // blt _0223911A
    // ldr r0, [r4, #0x44]
    // mov r7, #0
    // cmp r0, #0
    // ble _022391DA
    // add r0, r4, #0
    // add r1, r7, #0
    // mov r5, #0
    // bl BattleSystem_GetPartySize
    // cmp r0, #0
    // ble _022391BE
    // add r0, r4, #0
    // add r1, r7, #0
    // add r2, r5, #0
    // bl BattleSystem_GetPartyMon
    // add r6, r0, #0
    // cmp r7, #2
    // bne _02239188
    // mov r1, #5
    // mov r2, #0
    // bl GetMonData
    // cmp r0, #0
    // beq _022391B0
    // add r0, r6, #0
    // mov r1, #0x4c
    // mov r2, #0
    // bl GetMonData
    // cmp r0, #0
    // bne _022391B0
    // add r0, r6, #0
    // mov r1, #0xa3
    // mov r2, #0
    // bl GetMonData
    // cmp r0, #0
    // beq _022391B0
    // ldr r0, [sp, #0x3c]
    // cmp r0, r5
    // bne _022391BE
    // b _022391B0
    // mov r1, #5
    // mov r2, #0
    // bl GetMonData
    // cmp r0, #0
    // beq _022391B0
    // add r0, r6, #0
    // mov r1, #0x4c
    // mov r2, #0
    // bl GetMonData
    // cmp r0, #0
    // bne _022391B0
    // add r0, r6, #0
    // mov r1, #0xa3
    // mov r2, #0
    // bl GetMonData
    // cmp r0, #0
    // bne _022391BE
    // add r0, r4, #0
    // add r1, r7, #0
    // add r5, r5, #1
    // bl BattleSystem_GetPartySize
    // cmp r5, r0
    // blt _02239148
    // str r5, [sp]
    // ldr r1, [r4, #0x30]
    // add r0, r4, #0
    // mov r2, #2
    // add r3, r7, #0
    // bl ov12_022582B8
    // cmp r7, #0
    // bne _022391D2
    // str r5, [sp, #0x3c]
    // ldr r0, [r4, #0x44]
    // add r7, r7, #1
    // cmp r7, r0
    // blt _0223913A
    // ldr r1, [r4, #0x30]
    // add r0, r4, #0
    // bl ov12_02256F28
    // ldr r0, _022394D8 ; =0x000023FC
    // mov r1, #1
    // strb r1, [r4, r0]
    // b _0223948A
    // mov r1, #8
    // tst r1, r0
    // beq _022392BA
    // ldr r6, _022394DC ; =ov12_0226C2DC
    // mov r5, #0
    // add r7, r4, #0
    // add r0, sp, #0x40
    // strb r5, [r0]
    // ldrb r1, [r6]
    // strb r1, [r0, #1]
    // add r0, r4, #0
    // add r1, sp, #0x40
    // bl ov12_02258D74
    // add r1, r0, #0
    // add r0, r4, #0
    // str r1, [r7, #0x34]
    // bl ov12_02260EA4
    // add r5, r5, #1
    // add r6, r6, #1
    // add r7, r7, #4
    // cmp r5, #4
    // blt _022391F6
    // str r5, [r4, #0x44]
    // mov r6, #0
    // add r5, r4, #0
    // ldr r0, [sp, #4]
    // ldr r1, [r5, #0x68]
    // ldr r0, [r0, #4]
    // bl Party_Copy
    // ldr r0, [sp, #4]
    // add r6, r6, #1
    // add r0, r0, #4
    // add r5, r5, #4
    // str r0, [sp, #4]
    // cmp r6, #4
    // blt _02239220
    // mov r0, #0
    // str r0, [sp, #0x20]
    // ldr r0, [r4, #0x44]
    // cmp r0, #0
    // ble _022392AA
    // add r7, r4, #0
    // ldr r0, [r7, #0x68]
    // mov r5, #0
    // bl Party_GetCount
    // cmp r0, #0
    // ble _0223928E
    // ldr r0, [r7, #0x68]
    // add r1, r5, #0
    // bl Party_GetMonByIndex
    // mov r1, #5
    // mov r2, #0
    // add r6, r0, #0
    // bl GetMonData
    // cmp r0, #0
    // beq _02239282
    // add r0, r6, #0
    // mov r1, #0x4c
    // mov r2, #0
    // bl GetMonData
    // cmp r0, #0
    // bne _02239282
    // add r0, r6, #0
    // mov r1, #0xa3
    // mov r2, #0
    // bl GetMonData
    // cmp r0, #0
    // bne _0223928E
    // ldr r0, [r7, #0x68]
    // add r5, r5, #1
    // bl Party_GetCount
    // cmp r5, r0
    // blt _02239250
    // str r5, [sp]
    // ldr r1, [r4, #0x30]
    // ldr r3, [sp, #0x20]
    // add r0, r4, #0
    // mov r2, #2
    // bl ov12_022582B8
    // ldr r0, [sp, #0x20]
    // ldr r1, [r4, #0x44]
    // add r0, r0, #1
    // add r7, r7, #4
    // str r0, [sp, #0x20]
    // cmp r0, r1
    // blt _02239244
    // ldr r1, [r4, #0x30]
    // add r0, r4, #0
    // bl ov12_02256F28
    // ldr r0, _022394D8 ; =0x000023FC
    // mov r1, #1
    // strb r1, [r4, r0]
    // b _0223948A
    // mov r1, #2
    // tst r0, r1
    // bne _022392C2
    // b _022393D6
    // ldr r6, _022394DC ; =ov12_0226C2DC
    // mov r5, #0
    // add r7, r4, #0
    // add r0, sp, #0x40
    // strb r5, [r0]
    // ldrb r1, [r6]
    // strb r1, [r0, #1]
    // add r0, r4, #0
    // add r1, sp, #0x40
    // bl ov12_02258D74
    // add r1, r0, #0
    // add r0, r4, #0
    // str r1, [r7, #0x34]
    // bl ov12_02260EA4
    // add r5, r5, #1
    // add r6, r6, #1
    // add r7, r7, #4
    // cmp r5, #4
    // blt _022392C8
    // str r5, [r4, #0x44]
    // mov r6, #0
    // add r5, r4, #0
    // ldr r0, [sp, #4]
    // ldr r1, [r5, #0x68]
    // ldr r0, [r0, #4]
    // bl Party_Copy
    // ldr r0, [sp, #4]
    // add r6, r6, #1
    // add r0, r0, #4
    // add r5, r5, #4
    // str r0, [sp, #4]
    // cmp r6, #4
    // blt _022392F2
    // mov r0, #0
    // str r0, [sp, #0x24]
    // ldr r0, [r4, #0x44]
    // cmp r0, #0
    // ble _022393C6
    // ldr r0, [sp, #0x24]
    // mov r1, #1
    // and r0, r1
    // str r0, [sp, #0x2c]
    // lsl r0, r0, #2
    // add r7, r4, r0
    // ldr r0, [r7, #0x68]
    // mov r6, #0
    // bl Party_GetCount
    // cmp r0, #0
    // ble _022393AC
    // ldr r0, [r7, #0x68]
    // add r1, r6, #0
    // bl Party_GetMonByIndex
    // ldr r1, [sp, #0x24]
    // add r5, r0, #0
    // cmp r1, #1
    // ble _02239378
    // ldr r1, [r4, #0x30]
    // ldr r3, [sp, #0x2c]
    // add r0, r4, #0
    // mov r2, #2
    // bl ov12_022581D4
    // cmp r6, r0
    // beq _022393A0
    // add r0, r5, #0
    // mov r1, #5
    // mov r2, #0
    // bl GetMonData
    // cmp r0, #0
    // beq _022393A0
    // add r0, r5, #0
    // mov r1, #0x4c
    // mov r2, #0
    // bl GetMonData
    // cmp r0, #0
    // bne _022393A0
    // add r0, r5, #0
    // mov r1, #0xa3
    // mov r2, #0
    // bl GetMonData
    // cmp r0, #0
    // bne _022393AC
    // b _022393A0
    // mov r1, #5
    // mov r2, #0
    // bl GetMonData
    // cmp r0, #0
    // beq _022393A0
    // add r0, r5, #0
    // mov r1, #0x4c
    // mov r2, #0
    // bl GetMonData
    // cmp r0, #0
    // bne _022393A0
    // add r0, r5, #0
    // mov r1, #0xa3
    // mov r2, #0
    // bl GetMonData
    // cmp r0, #0
    // bne _022393AC
    // ldr r0, [r7, #0x68]
    // add r6, r6, #1
    // bl Party_GetCount
    // cmp r6, r0
    // blt _0223932C
    // str r6, [sp]
    // ldr r1, [r4, #0x30]
    // ldr r3, [sp, #0x24]
    // add r0, r4, #0
    // mov r2, #2
    // bl ov12_022582B8
    // ldr r0, [sp, #0x24]
    // ldr r1, [r4, #0x44]
    // add r0, r0, #1
    // str r0, [sp, #0x24]
    // cmp r0, r1
    // blt _02239314
    // ldr r1, [r4, #0x30]
    // add r0, r4, #0
    // bl ov12_02256F28
    // ldr r0, _022394D8 ; =0x000023FC
    // mov r1, #1
    // strb r1, [r4, r0]
    // b _0223948A
    // ldr r6, _022394E0 ; =_0226BFD8
    // mov r5, #0
    // add r7, r4, #0
    // add r0, sp, #0x40
    // strb r5, [r0]
    // ldrb r1, [r6]
    // strb r1, [r0, #1]
    // add r0, r4, #0
    // add r1, sp, #0x40
    // bl ov12_02258D74
    // add r1, r0, #0
    // add r0, r4, #0
    // str r1, [r7, #0x34]
    // bl ov12_02260EA4
    // add r5, r5, #1
    // add r6, r6, #1
    // add r7, r7, #4
    // cmp r5, #2
    // blt _022393DC
    // mov r0, #0
    // str r5, [r4, #0x44]
    // str r0, [sp, #0x28]
    // add r7, r4, #0
    // ldr r0, [sp, #4]
    // ldr r1, [r7, #0x68]
    // ldr r0, [r0, #4]
    // bl Party_Copy
    // ldr r0, [r7, #0x68]
    // mov r5, #0
    // bl Party_GetCount
    // cmp r0, #0
    // ble _0223945C
    // ldr r0, [r7, #0x68]
    // add r1, r5, #0
    // bl Party_GetMonByIndex
    // mov r1, #5
    // mov r2, #0
    // add r6, r0, #0
    // bl GetMonData
    // cmp r0, #0
    // beq _02239450
    // add r0, r6, #0
    // mov r1, #0x4c
    // mov r2, #0
    // bl GetMonData
    // cmp r0, #0
    // bne _02239450
    // add r0, r6, #0
    // mov r1, #0xa3
    // mov r2, #0
    // bl GetMonData
    // cmp r0, #0
    // bne _0223945C
    // ldr r0, [r7, #0x68]
    // add r5, r5, #1
    // bl Party_GetCount
    // cmp r5, r0
    // blt _0223941E
    // str r5, [sp]
    // ldr r1, [r4, #0x30]
    // ldr r3, [sp, #0x28]
    // add r0, r4, #0
    // mov r2, #2
    // bl ov12_022582B8
    // ldr r0, [sp, #4]
    // add r7, r7, #4
    // add r0, r0, #4
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x28]
    // add r0, r0, #1
    // str r0, [sp, #0x28]
    // cmp r0, #4
    // blt _02239408
    // ldr r1, [r4, #0x30]
    // add r0, r4, #0
    // bl ov12_02256F28
    // ldr r0, _022394D8 ; =0x000023FC
    // mov r1, #1
    // strb r1, [r4, r0]
    // mov r0, #2
    // ldr r1, [r4, #0x2c]
    // lsl r0, r0, #8
    // tst r0, r1
    // beq _022394A6
    // ldr r0, [r4, #0x6c]
    // mov r1, #0
    // bl Party_GetMonByIndex
    // add r2, r4, #0
    // mov r1, #0x90
    // add r2, #0xf4
    // bl GetMonData
    // ldr r1, [r4, #0x2c]
    // mov r0, #1
    // tst r0, r1
    // beq _0223954E
    // add r0, r4, #0
    // add r0, #0xe1
    // ldrb r0, [r0]
    // bl ov12_022395BC
    // cmp r0, #1
    // beq _022394C8
    // ldr r0, _022394E4 ; =0x00000149
    // ldrb r0, [r4, r0]
    // bl ov12_022395BC
    // cmp r0, #1
    // bne _0223954E
    // ldr r0, [r4, #0x68]
    // mov r5, #0
    // bl Party_GetCount
    // cmp r0, #0
    // ble _02239516
    // ldr r7, _022394E8 ; =0x00002408
    // b _022394EC
    // _022394D8: .word 0x000023FC
    // _022394DC: .word ov12_0226C2DC
    // _022394E0: .word _0226BFD8
    // _022394E4: .word 0x00000149
    // _022394E8: .word 0x00002408
    // ldr r0, [r4, #0x68]
    // add r1, r5, #0
    // bl Party_GetMonByIndex
    // ldr r2, [r4, r7]
    // add r6, r0, #0
    // lsl r2, r2, #0x10
    // mov r1, #3
    // lsr r2, r2, #0x10
    // bl MonApplyFriendshipMod
    // add r0, r6, #0
    // mov r1, #2
    // bl ApplyMonMoodModifier
    // ldr r0, [r4, #0x68]
    // add r5, r5, #1
    // bl Party_GetCount
    // cmp r5, r0
    // blt _022394EC
    // ldr r0, [r4, #0x70]
    // mov r5, #0
    // bl Party_GetCount
    // cmp r0, #0
    // ble _0223954E
    // ldr r7, _022395B0 ; =0x00002408
    // ldr r0, [r4, #0x70]
    // add r1, r5, #0
    // bl Party_GetMonByIndex
    // ldr r2, [r4, r7]
    // add r6, r0, #0
    // lsl r2, r2, #0x10
    // mov r1, #3
    // lsr r2, r2, #0x10
    // bl MonApplyFriendshipMod
    // add r0, r6, #0
    // mov r1, #2
    // bl ApplyMonMoodModifier
    // ldr r0, [r4, #0x70]
    // add r5, r5, #1
    // bl Party_GetCount
    // cmp r5, r0
    // blt _02239524
    // ldr r0, _022395B4 ; =0x0000247C
    // mov r7, #0
    // sub r6, r0, #4
    // str r7, [r4, r0]
    // add r1, r6, #0
    // ldr r2, [r4, r1]
    // mov r1, #4
    // bic r2, r1
    // sub r0, r0, #4
    // str r2, [r4, r0]
    // ldr r0, [r4, #0x44]
    // add r5, r7, #0
    // cmp r0, #0
    // ble _02239594
    // add r0, r4, #0
    // add r1, r5, #0
    // bl BattleSystem_GetPlayerProfile
    // bl PlayerProfile_GetVersion
    // cmp r0, #GAME_VERSION
    // beq _0223957C
    // mov r7, #1
    // cmp r0, #7
    // beq _0223958C
    // cmp r0, #8
    // beq _0223958C
    // ldr r1, [r4, r6]
    // mov r0, #4
    // orr r0, r1
    // str r0, [r4, r6]
    // ldr r0, [r4, #0x44]
    // add r5, r5, #1
    // cmp r5, r0
    // blt _0223956A
    // ldr r0, _022395B8 ; =0x000023FC
    // ldrb r1, [r4, r0]
    // cmp r1, #0
    // beq _022395A4
    // add r0, #0x80
    // add sp, #0x48
    // str r7, [r4, r0]
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r1, #0
    // add r0, #0x80
    // str r1, [r4, r0]
    // add sp, #0x48
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _022395B0: .word 0x00002408
    // _022395B4: .word 0x0000247C
    // _022395B8: .word 0x000023FC
    // TODO: decompile
}


void ov12_022395BC(void) {
    // cmp r0, #0x69
    // bgt _0223961A
    // bge _0223963C
    // cmp r0, #0x62
    // bgt _0223960C
    // bge _0223963C
    // add r1, r0, #0
    // sub r1, #0x42
    // cmp r1, #0x17
    // bhi _02239640
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _022395DC: ; jump table
    // cmp r0, #0x67
    // bgt _02239614
    // beq _0223963C
    // b _02239640
    // cmp r0, #0x68
    // beq _0223963C
    // b _02239640
    // cmp r0, #0x6b
    // bgt _02239626
    // bge _0223963C
    // cmp r0, #0x6a
    // beq _0223963C
    // b _02239640
    // cmp r0, #0x6c
    // bgt _0223962E
    // beq _0223963C
    // b _02239640
    // cmp r0, #0x70
    // bgt _02239640
    // cmp r0, #0x6e
    // blt _02239640
    // beq _0223963C
    // cmp r0, #0x70
    // bne _02239640
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // TODO: decompile
}


void ov12_02239644(void) {
    GF_3DVramMan_Create(5, 0, 2);
}


void ov12_02239664(void) {
    // push {r3, lr}
    // mov r0, #1
    // add r1, r0, #0
    // bl GfGfx_EngineATogglePlanes
    // ldr r0, _022396D0 ; =0x04000008
    // mov r1, #3
    // ldrh r2, [r0]
    // bic r2, r1
    // mov r1, #1
    // orr r1, r2
    // strh r1, [r0]
    // add r0, #0x58
    // ldrh r2, [r0]
    // ldr r1, _022396D4 ; =0xFFFFCFFD
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
    // ldr r2, _022396D8 ; =0x0000CFFB
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
    // ldr r2, _022396DC ; =0x00007FFF
    // add r1, r0, #0
    // mov r3, #0x3f
    // str r0, [sp]
    // bl G3X_SetClearColor
    // ldr r1, _022396E0 ; =0xBFFF0000
    // ldr r0, _022396E4 ; =0x04000580
    // str r1, [r0]
    // pop {r3, pc}
    // _022396D0: .word 0x04000008
    // _022396D4: .word 0xFFFFCFFD
    // _022396D8: .word 0x0000CFFB
    // _022396DC: .word 0x00007FFF
    // _022396E0: .word 0xBFFF0000
    // _022396E4: .word 0x04000580
    // TODO: decompile
}


void ov12_022396E8(void) {
    GF_3DVramMan_Delete();
}


void ov12_022396F0(void) {
    // push {r3, r4, r5, lr}
    // ldr r3, _02239728 ; =NNS_GfdDefaultFuncAllocTexVram
    // mov r0, #2
    // mov r1, #0
    // ldr r3, [r3]
    // lsl r0, r0, #0xe
    // add r2, r1, #0
    // blx r3
    // ldr r3, _0223972C ; =NNS_GfdDefaultFuncAllocPlttVram
    // mov r1, #0
    // add r4, r0, #0
    // ldr r3, [r3]
    // mov r0, #0xc0
    // add r2, r1, #0
    // blx r3
    // add r5, r0, #0
    // cmp r4, #0
    // bne _02239718
    // bl GF_AssertFail
    // cmp r5, #0
    // bne _02239720
    // bl GF_AssertFail
    // bl sub_02014DA0
    // pop {r3, r4, r5, pc}
    // nop
    // _02239728: .word NNS_GfdDefaultFuncAllocTexVram
    // _0223972C: .word NNS_GfdDefaultFuncAllocPlttVram
    // TODO: decompile
}


void ov12_02239730(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x50
    // ldr r1, _022397C8 ; =0x000023FF
    // add r4, r0, #0
    // ldrb r2, [r4, r1]
    // lsl r0, r2, #0x1f
    // lsr r0, r0, #0x1f
    // beq _02239750
    // mov r0, #1
    // bic r2, r0
    // strb r2, [r4, r1]
    // ldr r0, _022397CC ; =0x04000050
    // mov r1, #0
    // strh r1, [r0]
    // ldr r0, _022397D0 ; =0x04001050
    // strh r1, [r0]
    // ldr r1, _022397C8 ; =0x000023FF
    // ldrb r2, [r4, r1]
    // lsl r0, r2, #0x1e
    // lsr r0, r0, #0x1f
    // beq _02239774
    // mov r0, #2
    // bic r2, r0
    // strb r2, [r4, r1]
    // ldr r5, _022397D4 ; =ov12_0226C0D0
    // add r3, sp, #0x28
    // mov r2, #5
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // sub r2, r2, #1
    // bne _02239766
    // add r0, sp, #0x28
    // bl GfGfx_SetBanks
    // ldr r1, _022397C8 ; =0x000023FF
    // ldrb r2, [r4, r1]
    // lsl r0, r2, #0x1d
    // lsr r0, r0, #0x1f
    // beq _02239798
    // mov r0, #4
    // bic r2, r0
    // strb r2, [r4, r1]
    // ldr r5, _022397D8 ; =ov12_0226C0F8
    // add r3, sp, #0
    // mov r2, #5
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // sub r2, r2, #1
    // bne _0223978A
    // add r0, sp, #0
    // bl GfGfx_SetBanks
    // add r0, r4, #0
    // add r0, #0x88
    // ldr r0, [r0]
    // bl PokepicManager_HandleLoadImgAndOrPltt
    // bl GF_RunVramTransferTasks
    // bl SpriteSystem_TransferOam
    // ldr r0, [r4, #0x28]
    // bl PaletteData_PushTransparentBuffers
    // ldr r0, [r4, #4]
    // bl DoScheduledBgGpuUpdates
    // ldr r3, _022397DC ; =0x027E0000
    // ldr r1, _022397E0 ; =0x00003FF8
    // mov r0, #1
    // ldr r2, [r3, r1]
    // orr r0, r2
    // str r0, [r3, r1]
    // add sp, #0x50
    // pop {r3, r4, r5, pc}
    // nop
    // _022397C8: .word 0x000023FF
    // _022397CC: .word 0x04000050
    // _022397D0: .word 0x04001050
    // _022397D4: .word ov12_0226C0D0
    // _022397D8: .word ov12_0226C0F8
    // _022397DC: .word 0x027E0000
    // _022397E0: .word 0x00003FF8
    // TODO: decompile
}


void ov12_022397E4(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4, #0xc]
    // bl PaletteData_PushTransparentBuffers
    // bl GF_RunVramTransferTasks
    // ldr r0, [r4, #4]
    // bl DoScheduledBgGpuUpdates
    // ldr r3, _02239808 ; =0x027E0000
    // ldr r1, _0223980C ; =0x00003FF8
    // mov r0, #1
    // ldr r2, [r3, r1]
    // orr r0, r2
    // str r0, [r3, r1]
    // pop {r4, pc}
    // nop
    // _02239808: .word 0x027E0000
    // _0223980C: .word 0x00003FF8
    // TODO: decompile
}


void ov12_02239810(void) {
    // push {r4, lr}
    // add r4, r1, #0
    // ldr r1, [r4, #4]
    // mov r0, #5
    // bl sub_020399FC
    // ldr r0, _02239850 ; =0x000023FD
    // ldrb r0, [r4, r0]
    // cmp r0, #0
    // beq _02239828
    // cmp r0, #3
    // bne _0223984E
    // cmp r0, #0
    // bne _02239830
    // bl ov06_0221BAF0
    // add r0, r4, #0
    // add r0, #0x88
    // ldr r0, [r0]
    // bl PokepicManager_DrawAll
    // add r4, #0x94
    // ldr r0, [r4]
    // bl SpriteSystem_DrawSprites
    // bl SpriteSystem_UpdateTransfer
    // mov r0, #1
    // mov r1, #0
    // bl RequestSwap3DBuffers
    // pop {r4, pc}
    // _02239850: .word 0x000023FD
    // TODO: decompile
}


void ov12_02239854(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r1, #0
    // add r0, r5, #0
    // bl BattleSystem_GetMaxBattlers
    // str r0, [sp]
    // add r0, r5, #0
    // mov r6, #0
    // bl BattleSystem_GetCriticalHpMusicFlag
    // add r4, r0, #0
    // add r0, r5, #0
    // bl BattleSystem_GetBattleType
    // mov r1, #0x22
    // lsl r1, r1, #4
    // tst r0, r1
    // beq _0223987A
    // b _02239984
    // mov r0, #2
    // tst r0, r4
    // beq _02239898
    // mov r0, #1
    // tst r0, r4
    // beq _02239984
    // ldr r0, _02239988 ; =0x00000704
    // add r1, r6, #0
    // bl StopSE
    // add r0, r5, #0
    // mov r1, #2
    // bl BattleSystem_SetCriticalHpMusicFlag
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [sp]
    // add r4, r6, #0
    // cmp r0, #0
    // ble _02239906
    // add r0, r5, #0
    // add r1, r4, #0
    // bl BattleSystem_GetOpponentData
    // add r7, r0, #0
    // bl ov12_02261264
    // cmp r0, #0
    // bne _022398BE
    // add r0, r5, #0
    // bl BattleSystem_GetBattleSpecial
    // mov r1, #0x10
    // tst r0, r1
    // beq _022398D6
    // add r0, r5, #0
    // add r1, r4, #0
    // bl BattleSystem_GetFieldSide
    // cmp r0, #0
    // bne _022398FE
    // add r0, r5, #0
    // bl BattleSystem_GetBattleSpecial
    // mov r1, #0x10
    // tst r0, r1
    // beq _022398FE
    // add r0, r7, #0
    // bl OpponentData_GetHpBar
    // add r1, r0, #0
    // beq _022398FE
    // ldr r0, [r1, #0x28]
    // ldr r1, [r1, #0x2c]
    // lsl r0, r0, #0x10
    // lsl r1, r1, #0x10
    // lsr r0, r0, #0x10
    // lsr r1, r1, #0x10
    // mov r2, #0x30
    // bl CalculateHpBarColor
    // cmp r0, #1
    // bne _022398FE
    // add r0, r4, #0
    // bl MaskOfFlagNo
    // orr r6, r0
    // ldr r0, [sp]
    // add r4, r4, #1
    // cmp r4, r0
    // blt _022398A0
    // cmp r6, #0
    // beq _0223992C
    // add r0, r5, #0
    // bl BattleSystem_GetCriticalHpMusicFlag
    // cmp r0, #0
    // bne _0223992C
    // ldr r0, _02239988 ; =0x00000704
    // bl PlaySE
    // add r0, r5, #0
    // mov r1, #1
    // bl BattleSystem_SetCriticalHpMusicFlag
    // add r0, r5, #0
    // mov r1, #4
    // bl BattleSystem_SetCriticalHpMusicDelay
    // b _0223994A
    // cmp r6, #0
    // bne _0223994A
    // add r0, r5, #0
    // bl BattleSystem_GetCriticalHpMusicFlag
    // cmp r0, #0
    // beq _0223994A
    // ldr r0, _02239988 ; =0x00000704
    // mov r1, #0
    // bl StopSE
    // add r0, r5, #0
    // mov r1, #0
    // bl BattleSystem_SetCriticalHpMusicFlag
    // add r0, r5, #0
    // bl BattleSystem_GetCriticalHpMusicFlag
    // cmp r0, #0
    // beq _02239984
    // add r0, r5, #0
    // bl BattleSystem_GetCriticalHpMusicDelay
    // add r4, r0, #0
    // ldr r0, _02239988 ; =0x00000704
    // bl IsSEPlaying
    // cmp r0, #0
    // bne _02239984
    // sub r1, r4, #1
    // bne _0223997A
    // ldr r0, _02239988 ; =0x00000704
    // bl PlaySE
    // add r0, r5, #0
    // mov r1, #4
    // bl BattleSystem_SetCriticalHpMusicDelay
    // pop {r3, r4, r5, r6, r7, pc}
    // lsl r1, r1, #0x18
    // add r0, r5, #0
    // lsr r1, r1, #0x18
    // bl BattleSystem_SetCriticalHpMusicDelay
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02239988: .word 0x00000704
    // TODO: decompile
}


void ov12_0223998C(void) {
    // push {r3, r4, r5, lr}
    // ldr r3, _022399B8 ; =0x00002438
    // add r4, r1, #0
    // add r5, r0, #0
    // ldr r0, [r4, r3]
    // mov r1, #1
    // add r0, r0, #3
    // str r0, [r4, r3]
    // ldr r0, [r4, #4]
    // ldr r3, [r4, r3]
    // mov r2, #3
    // bl BgSetPosTextAndCommit
    // ldr r0, _022399B8 ; =0x00002438
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // bne _022399B4
    // add r0, r5, #0
    // bl SysTask_Destroy
    // pop {r3, r4, r5, pc}
    // nop
    // _022399B8: .word 0x00002438
    // TODO: decompile
}


void ov12_022399BC(void) {
    // push {r3, lr}
    // bl sub_02039998
    // cmp r0, #0
    // bne _022399CE
    // ldr r0, _022399D0 ; =FS_OVERLAY_ID(OVY_18)
    // mov r1, #2
    // bl HandleLoadOverlay
    // pop {r3, pc}
    // _022399D0: .word FS_OVERLAY_ID(OVY_18)
    // TODO: decompile
}


void ov12_022399D4(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x68
    // add r4, r1, #0
    // ldr r1, _02239C00 ; =0x00001028
    // mov r2, #5
    // bl OverlayManager_CreateAndGetData
    // add r5, r0, #0
    // ldr r0, _02239C04 ; =0x00001020
    // str r4, [r5]
    // mov r2, #0
    // strb r2, [r5, r0]
    // add r1, r0, #1
    // strb r2, [r5, r1]
    // add r0, r0, #2
    // strh r2, [r5, r0]
    // mov r0, #5
    // bl PaletteData_Init
    // str r0, [r5, #0xc]
    // mov r1, #1
    // bl PaletteData_SetAutoTransparent
    // mov r2, #2
    // ldr r0, [r5, #0xc]
    // mov r1, #0
    // lsl r2, r2, #8
    // mov r3, #5
    // bl PaletteData_AllocBuffers
    // mov r1, #0
    // mov r0, #1
    // str r1, [sp]
    // lsl r0, r0, #8
    // str r0, [sp, #4]
    // ldr r0, [r5, #0xc]
    // mov r2, #2
    // add r3, r1, #0
    // bl PaletteData_FillPaletteInBuffer
    // mov r0, #5
    // bl BgConfig_Alloc
    // str r0, [r5, #4]
    // mov r0, #5
    // mov r1, #1
    // bl AllocWindows
    // str r0, [r5, #8]
    // add r0, r5, #0
    // bl sub_02074EC4
    // bl GfGfx_DisableEngineAPlanes
    // ldr r6, _02239C08 ; =ov12_0226C080
    // add r3, sp, #0x40
    // mov r2, #5
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // sub r2, r2, #1
    // bne _02239A46
    // add r0, sp, #0x40
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
    // mov r1, #5
    // mov r2, #2
    // mov r0, #0
    // lsl r1, r1, #0x18
    // lsl r2, r2, #8
    // bl MIi_CpuClear16
    // ldr r6, _02239C0C ; =ov12_0226BFF8
    // add r3, sp, #0x30
    // add r2, r3, #0
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // add r0, r2, #0
    // bl SetBothScreensModesAndDisable
    // ldr r6, _02239C10 ; =ov12_0226C044
    // add r3, sp, #0x14
    // ldmia r6!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r6]
    // mov r1, #1
    // str r0, [r3]
    // ldr r0, [r5, #4]
    // mov r3, #0
    // bl InitBgFromTemplate
    // ldr r0, [r5, #4]
    // mov r1, #1
    // bl BgClearTilemapBufferAndCommit
    // mov r0, #0x13
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // bl Options_GetFrame
    // add r4, r0, #0
    // lsl r0, r4, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp]
    // mov r0, #5
    // str r0, [sp, #4]
    // mov r1, #1
    // ldr r0, [r5, #4]
    // add r2, r1, #0
    // mov r3, #0xa
    // bl sub_0200EB80
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #0x20
    // str r0, [sp, #4]
    // mov r0, #0xb0
    // str r0, [sp, #8]
    // ldr r0, [r5, #0xc]
    // mov r1, #0x10
    // mov r2, #8
    // mov r3, #5
    // bl PaletteData_LoadNarc
    // add r0, r4, #0
    // bl sub_0200E640
    // add r2, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #0x20
    // str r0, [sp, #4]
    // mov r0, #0xa0
    // str r0, [sp, #8]
    // ldr r0, [r5, #0xc]
    // mov r1, #0x26
    // mov r3, #5
    // bl PaletteData_LoadNarc
    // mov r1, #0
    // mov r0, #1
    // str r1, [sp]
    // lsl r0, r0, #8
    // str r0, [sp, #4]
    // ldr r0, [r5, #0xc]
    // add r2, r1, #0
    // add r3, r1, #0
    // bl PaletteData_FillPaletteInBuffer
    // bl GfGfx_BothDispOn
    // mov r0, #0x10
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // ldr r2, _02239C14 ; =0x04000304
    // mov r3, #2
    // ldrh r1, [r2]
    // lsr r0, r2, #0xb
    // orr r0, r1
    // strh r0, [r2]
    // mov r0, #0x13
    // str r0, [sp]
    // mov r0, #0x1b
    // str r0, [sp, #4]
    // mov r0, #4
    // str r0, [sp, #8]
    // mov r0, #0xb
    // str r0, [sp, #0xc]
    // mov r0, #0x1f
    // str r0, [sp, #0x10]
    // ldr r0, [r5, #4]
    // ldr r1, [r5, #8]
    // mov r2, #1
    // bl AddWindowParameterized
    // ldr r0, [r5, #8]
    // mov r1, #0xff
    // bl FillWindowPixelBuffer
    // ldr r0, [r5, #8]
    // mov r1, #0
    // mov r2, #1
    // mov r3, #0xa
    // bl DrawFrameAndWindow2
    // mov r0, #1
    // mov r1, #0x1b
    // mov r2, #0xc5
    // mov r3, #5
    // bl NewMsgDataFromNarc
    // add r4, r0, #0
    // mov r0, #1
    // lsl r0, r0, #8
    // mov r1, #5
    // bl String_New
    // add r6, r0, #0
    // ldr r1, _02239C18 ; =0x0000039B
    // add r0, r4, #0
    // add r2, r6, #0
    // bl ReadMsgDataIntoString
    // mov r3, #0
    // str r3, [sp]
    // str r3, [sp, #4]
    // str r3, [sp, #8]
    // ldr r0, [r5, #8]
    // mov r1, #1
    // add r2, r6, #0
    // bl AddTextPrinterParameterized
    // add r0, r6, #0
    // bl String_Delete
    // add r0, r4, #0
    // bl DestroyMsgData
    // ldr r0, _02239C1C ; =ov12_022397E4
    // add r1, r5, #0
    // bl Main_SetVBlankIntrCB
    // mov r0, #0x10
    // str r0, [sp]
    // mov r3, #0
    // str r3, [sp, #4]
    // str r3, [sp, #8]
    // ldr r0, [r5, #0xc]
    // ldr r2, _02239C20 ; =0x0000FFFF
    // mov r1, #5
    // bl PaletteData_BeginPaletteFade
    // ldr r0, [r5, #8]
    // mov r1, #1
    // bl WaitingIcon_New
    // ldr r1, _02239C24 ; =0x00001024
    // str r0, [r5, r1]
    // bl ov12_0223A7A0
    // add sp, #0x68
    // pop {r4, r5, r6, pc}
    // nop
    // _02239C00: .word 0x00001028
    // _02239C04: .word 0x00001020
    // _02239C08: .word ov12_0226C080
    // _02239C0C: .word ov12_0226BFF8
    // _02239C10: .word ov12_0226C044
    // _02239C14: .word 0x04000304
    // _02239C18: .word 0x0000039B
    // _02239C1C: .word ov12_022397E4
    // _02239C20: .word 0x0000FFFF
    // _02239C24: .word 0x00001024
    // TODO: decompile
}


void ov12_02239C28(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // bl OverlayManager_GetData
    // add r4, r0, #0
    // ldr r1, [r4, #4]
    // mov r0, #5
    // bl sub_020399FC
    // ldr r0, _02239F2C ; =0x00001021
    // mov r7, #0
    // ldrb r1, [r4, r0]
    // cmp r1, #0x21
    // bls _02239C46
    // b _0223A06C
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _02239C52: ; jump table
    // add r0, r7, #0
    // bl SetMasterBrightnessNeutral
    // mov r0, #1
    // bl sub_02037930
    // ldr r0, _02239F2C ; =0x00001021
    // ldrb r1, [r4, r0]
    // add r1, r1, #1
    // strb r1, [r4, r0]
    // b _0223A06C
    // ldr r0, [r4, #0xc]
    // bl PaletteData_GetSelectedBuffersBitmask
    // cmp r0, #0
    // bne _02239D5A
    // ldr r0, _02239F2C ; =0x00001021
    // ldrb r1, [r4, r0]
    // add r1, r1, #1
    // strb r1, [r4, r0]
    // b _0223A06C
    // mov r0, #0x32
    // bl sub_02037AC0
    // ldr r0, _02239F2C ; =0x00001021
    // ldrb r1, [r4, r0]
    // add r1, r1, #1
    // strb r1, [r4, r0]
    // b _0223A06C
    // mov r0, #0x32
    // bl sub_02037B38
    // cmp r0, #0
    // beq _02239CF2
    // mov r0, #0x33
    // bl sub_02037AC0
    // ldr r0, _02239F30 ; =0x00001022
    // add r1, r7, #0
    // strh r1, [r4, r0]
    // sub r1, r0, #1
    // ldrb r1, [r4, r1]
    // sub r0, r0, #1
    // add r1, r1, #1
    // strb r1, [r4, r0]
    // b _0223A06C
    // ldr r0, _02239F30 ; =0x00001022
    // ldrh r1, [r4, r0]
    // add r1, r1, #1
    // strh r1, [r4, r0]
    // ldrh r1, [r4, r0]
    // ldr r0, _02239F34 ; =0x00000708
    // cmp r1, r0
    // bls _02239D5A
    // mov r0, #1
    // bl sub_02039AD8
    // b _0223A06C
    // mov r1, #5
    // add r0, r4, #0
    // lsl r1, r1, #6
    // bl sub_02075074
    // cmp r0, #1
    // bne _02239D5A
    // ldr r0, _02239F2C ; =0x00001021
    // ldrb r1, [r4, r0]
    // add r1, r1, #1
    // strb r1, [r4, r0]
    // b _0223A06C
    // add r0, r4, #0
    // bl sub_020750E0
    // cmp r0, #1
    // bne _02239D5A
    // mov r0, #0x34
    // bl sub_02037AC0
    // ldr r0, _02239F2C ; =0x00001021
    // ldrb r1, [r4, r0]
    // add r1, r1, #1
    // strb r1, [r4, r0]
    // b _0223A06C
    // add r0, r4, #0
    // bl sub_02075108
    // cmp r0, #1
    // bne _02239D5A
    // ldr r0, _02239F2C ; =0x00001021
    // ldrb r1, [r4, r0]
    // add r1, r1, #1
    // strb r1, [r4, r0]
    // b _0223A06C
    // add r0, r4, #0
    // bl sub_0207514C
    // cmp r0, #1
    // beq _02239D5C
    // b _0223A06C
    // mov r0, #0x35
    // bl sub_02037AC0
    // ldr r0, _02239F2C ; =0x00001021
    // ldrb r1, [r4, r0]
    // add r1, r1, #1
    // strb r1, [r4, r0]
    // b _0223A06C
    // add r0, r4, #0
    // bl sub_02075178
    // cmp r0, #1
    // bne _02239E66
    // ldr r0, _02239F2C ; =0x00001021
    // ldrb r1, [r4, r0]
    // add r1, r1, #1
    // strb r1, [r4, r0]
    // b _0223A06C
    // add r0, r4, #0
    // bl sub_020751B8
    // cmp r0, #1
    // bne _02239E66
    // mov r0, #0x36
    // bl sub_02037AC0
    // ldr r0, _02239F2C ; =0x00001021
    // ldrb r1, [r4, r0]
    // add r1, r1, #1
    // strb r1, [r4, r0]
    // b _0223A06C
    // add r0, r4, #0
    // bl sub_020751DC
    // cmp r0, #1
    // bne _02239E66
    // ldr r0, _02239F2C ; =0x00001021
    // ldrb r1, [r4, r0]
    // add r1, r1, #1
    // strb r1, [r4, r0]
    // b _0223A06C
    // add r0, r4, #0
    // bl sub_02075220
    // cmp r0, #1
    // bne _02239E66
    // mov r0, #0x37
    // bl sub_02037AC0
    // ldr r0, _02239F2C ; =0x00001021
    // ldrb r1, [r4, r0]
    // add r1, r1, #1
    // strb r1, [r4, r0]
    // b _0223A06C
    // add r0, r4, #0
    // bl sub_02075248
    // cmp r0, #1
    // bne _02239E66
    // ldr r0, _02239F2C ; =0x00001021
    // ldrb r1, [r4, r0]
    // add r1, r1, #1
    // strb r1, [r4, r0]
    // b _0223A06C
    // add r0, r4, #0
    // bl sub_0207527C
    // cmp r0, #1
    // bne _02239E66
    // mov r0, #0x38
    // bl sub_02037AC0
    // ldr r0, _02239F2C ; =0x00001021
    // ldrb r1, [r4, r0]
    // add r1, r1, #1
    // strb r1, [r4, r0]
    // b _0223A06C
    // add r0, r4, #0
    // bl sub_020752D8
    // cmp r0, #1
    // bne _02239E66
    // ldr r0, _02239F2C ; =0x00001021
    // ldrb r1, [r4, r0]
    // add r1, r1, #1
    // strb r1, [r4, r0]
    // b _0223A06C
    // ldr r1, [r4]
    // ldr r2, [r1]
    // mov r1, #0x80
    // tst r1, r2
    // bne _02239E1A
    // mov r1, #0x21
    // strb r1, [r4, r0]
    // b _0223A06C
    // bl sub_0203769C
    // cmp r0, #0
    // beq _02239E32
    // mov r0, #0x39
    // bl sub_02037AC0
    // ldr r0, _02239F2C ; =0x00001021
    // ldrb r1, [r4, r0]
    // add r1, r1, #1
    // strb r1, [r4, r0]
    // b _0223A06C
    // add r0, r4, #0
    // mov r1, #1
    // bl sub_0207531C
    // cmp r0, #1
    // bne _02239E66
    // mov r0, #0x39
    // bl sub_02037AC0
    // ldr r0, _02239F2C ; =0x00001021
    // ldrb r1, [r4, r0]
    // add r1, r1, #1
    // strb r1, [r4, r0]
    // b _0223A06C
    // mov r1, #1
    // sub r0, r0, #1
    // strb r1, [r4, r0]
    // bl sub_0203769C
    // cmp r0, #0
    // beq _02239E72
    // mov r0, #0x39
    // bl sub_02037B38
    // cmp r0, #1
    // beq _02239E68
    // b _0223A06C
    // ldr r0, _02239F2C ; =0x00001021
    // ldrb r1, [r4, r0]
    // add r1, r1, #1
    // strb r1, [r4, r0]
    // b _0223A06C
    // add r0, r4, #0
    // mov r1, #1
    // mov r2, #0x39
    // bl sub_02075350
    // cmp r0, #1
    // bne _02239F68
    // ldr r0, _02239F2C ; =0x00001021
    // ldrb r1, [r4, r0]
    // add r1, r1, #1
    // strb r1, [r4, r0]
    // b _0223A06C
    // bl sub_0203769C
    // cmp r0, #0
    // beq _02239EA2
    // mov r0, #0x3a
    // bl sub_02037AC0
    // ldr r0, _02239F2C ; =0x00001021
    // ldrb r1, [r4, r0]
    // add r1, r1, #1
    // strb r1, [r4, r0]
    // b _0223A06C
    // add r0, r4, #0
    // mov r1, #3
    // bl sub_0207531C
    // cmp r0, #1
    // bne _02239F68
    // mov r0, #0x3a
    // bl sub_02037AC0
    // ldr r0, _02239F2C ; =0x00001021
    // ldrb r1, [r4, r0]
    // add r1, r1, #1
    // strb r1, [r4, r0]
    // b _0223A06C
    // mov r1, #1
    // sub r0, r0, #1
    // strb r1, [r4, r0]
    // bl sub_0203769C
    // cmp r0, #0
    // beq _02239EE0
    // mov r0, #0x3a
    // bl sub_02037B38
    // cmp r0, #1
    // bne _02239F68
    // ldr r0, _02239F2C ; =0x00001021
    // ldrb r1, [r4, r0]
    // add r1, r1, #1
    // strb r1, [r4, r0]
    // b _0223A06C
    // add r0, r4, #0
    // mov r1, #3
    // mov r2, #0x3a
    // bl sub_02075350
    // cmp r0, #1
    // bne _02239F68
    // ldr r0, _02239F2C ; =0x00001021
    // ldrb r1, [r4, r0]
    // add r1, r1, #1
    // strb r1, [r4, r0]
    // b _0223A06C
    // bl sub_0203769C
    // cmp r0, #0
    // beq _02239F10
    // mov r0, #0x3b
    // bl sub_02037AC0
    // ldr r0, _02239F2C ; =0x00001021
    // ldrb r1, [r4, r0]
    // add r1, r1, #1
    // strb r1, [r4, r0]
    // b _0223A06C
    // add r0, r4, #0
    // mov r1, #1
    // bl sub_020753A8
    // cmp r0, #1
    // bne _02239F68
    // mov r0, #0x3b
    // bl sub_02037AC0
    // ldr r0, _02239F2C ; =0x00001021
    // ldrb r1, [r4, r0]
    // add r1, r1, #1
    // strb r1, [r4, r0]
    // b _0223A06C
    // _02239F2C: .word 0x00001021
    // _02239F30: .word 0x00001022
    // _02239F34: .word 0x00000708
    // mov r1, #1
    // sub r0, r0, #1
    // strb r1, [r4, r0]
    // bl sub_0203769C
    // cmp r0, #0
    // beq _02239F5A
    // mov r0, #0x3b
    // bl sub_02037B38
    // cmp r0, #1
    // bne _02239F68
    // ldr r0, _0223A074 ; =0x00001021
    // ldrb r1, [r4, r0]
    // add r1, r1, #1
    // strb r1, [r4, r0]
    // b _0223A06C
    // add r0, r4, #0
    // mov r1, #1
    // mov r2, #0x3b
    // bl sub_020753D4
    // cmp r0, #1
    // beq _02239F6A
    // b _0223A06C
    // ldr r0, _0223A074 ; =0x00001021
    // ldrb r1, [r4, r0]
    // add r1, r1, #1
    // strb r1, [r4, r0]
    // b _0223A06C
    // bl sub_0203769C
    // cmp r0, #0
    // beq _02239F8C
    // mov r0, #0x3c
    // bl sub_02037AC0
    // ldr r0, _0223A074 ; =0x00001021
    // ldrb r1, [r4, r0]
    // add r1, r1, #1
    // strb r1, [r4, r0]
    // b _0223A06C
    // add r0, r4, #0
    // mov r1, #3
    // bl sub_020753A8
    // cmp r0, #1
    // bne _0223A06C
    // mov r0, #0x3c
    // bl sub_02037AC0
    // ldr r0, _0223A074 ; =0x00001021
    // ldrb r1, [r4, r0]
    // add r1, r1, #1
    // strb r1, [r4, r0]
    // b _0223A06C
    // mov r1, #1
    // sub r0, r0, #1
    // strb r1, [r4, r0]
    // bl sub_0203769C
    // cmp r0, #0
    // beq _02239FCA
    // mov r0, #0x3c
    // bl sub_02037B38
    // cmp r0, #1
    // bne _0223A06C
    // ldr r0, _0223A074 ; =0x00001021
    // ldrb r1, [r4, r0]
    // add r1, r1, #1
    // strb r1, [r4, r0]
    // b _0223A06C
    // add r0, r4, #0
    // mov r1, #3
    // mov r2, #0x3c
    // bl sub_020753D4
    // cmp r0, #1
    // bne _0223A06C
    // ldr r0, _0223A074 ; =0x00001021
    // ldrb r1, [r4, r0]
    // add r1, r1, #1
    // strb r1, [r4, r0]
    // b _0223A06C
    // bl sub_02037454
    // ldr r1, _0223A078 ; =0x00001020
    // ldrb r2, [r4, r1]
    // cmp r2, r0
    // bne _0223A038
    // add r0, r1, #1
    // ldrb r0, [r4, r0]
    // cmp r0, #0x14
    // bne _0223A008
    // add r6, r7, #0
    // add r5, r4, #0
    // ldr r0, [r5, #0x10]
    // bl Heap_Free
    // add r6, r6, #1
    // add r5, r5, #4
    // cmp r6, #4
    // blt _02239FFA
    // ldr r0, _0223A078 ; =0x00001020
    // mov r3, #0
    // strb r3, [r4, r0]
    // add r1, r0, #2
    // strh r3, [r4, r1]
    // add r1, r0, #1
    // ldrb r1, [r4, r1]
    // add r2, r1, #1
    // add r1, r0, #1
    // strb r2, [r4, r1]
    // add r0, r0, #1
    // ldrb r0, [r4, r0]
    // cmp r0, #0x21
    // bne _0223A06C
    // str r3, [sp]
    // mov r0, #0x10
    // str r0, [sp, #4]
    // str r3, [sp, #8]
    // ldr r0, [r4, #0xc]
    // ldr r2, _0223A07C ; =0x0000FFFF
    // mov r1, #5
    // bl PaletteData_BeginPaletteFade
    // b _0223A06C
    // add r0, r1, #2
    // ldrh r0, [r4, r0]
    // add r2, r0, #1
    // add r0, r1, #2
    // strh r2, [r4, r0]
    // ldrh r1, [r4, r0]
    // ldr r0, _0223A080 ; =0x00000708
    // cmp r1, r0
    // bls _0223A06C
    // mov r0, #1
    // bl sub_02039AD8
    // b _0223A06C
    // ldr r0, [r4, #0xc]
    // bl PaletteData_GetSelectedBuffersBitmask
    // cmp r0, #0
    // bne _0223A06C
    // ldr r0, _0223A084 ; =0x00001024
    // mov r7, #1
    // ldr r0, [r4, r0]
    // bl sub_0200F450
    // mov r0, #0
    // bl sub_02037930
    // add r0, r7, #0
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _0223A074: .word 0x00001021
    // _0223A078: .word 0x00001020
    // _0223A07C: .word 0x0000FFFF
    // _0223A080: .word 0x00000708
    // _0223A084: .word 0x00001024
    // TODO: decompile
}


void ov12_0223A088(void) {
    // push {r4, lr}
    // bl OverlayManager_GetData
    // add r4, r0, #0
    // mov r0, #0
    // add r1, r0, #0
    // bl Main_SetVBlankIntrCB
    // mov r0, #0
    // add r1, r0, #0
    // bl sub_0200FBF4
    // ldr r0, [r4, #0xc]
    // mov r1, #0
    // bl PaletteData_FreeBuffers
    // ldr r0, [r4, #0xc]
    // bl PaletteData_Free
    // ldr r0, [r4, #8]
    // mov r1, #1
    // bl WindowArray_Delete
    // mov r0, #2
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // ldr r0, [r4, #4]
    // mov r1, #1
    // bl FreeBgTilemapBuffer
    // ldr r0, [r4, #4]
    // bl Heap_Free
    // add r0, r4, #0
    // bl Heap_Free
    // pop {r4, pc}
    // TODO: decompile
}


void ov12_0223A0D4(void) {
    // push {r3, r4, r5, lr}
    // ldr r1, _0223A20C ; =0x00002490
    // add r5, r0, #0
    // mov r2, #5
    // bl OverlayManager_CreateAndGetData
    // add r4, r0, #0
    // add r0, r5, #0
    // bl OverlayManager_GetArgs
    // add r5, r0, #0
    // ldr r2, _0223A20C ; =0x00002490
    // mov r0, #0
    // add r1, r4, #0
    // bl MIi_CpuClearFast
    // add r0, r4, #0
    // add r1, r5, #0
    // bl ov12_02238A68
    // ldr r0, [r4, #0x2c]
    // mov r1, #4
    // tst r1, r0
    // beq _0223A114
    // ldr r1, _0223A210 ; =0x0000240C
    // ldr r2, [r4, r1]
    // mov r1, #0x10
    // tst r1, r2
    // bne _0223A114
    // mov r1, #0x80
    // tst r0, r1
    // beq _0223A11C
    // bl sub_0203A914
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // ldr r0, _0223A214 ; =FS_OVERLAY_ID(OVY_5)
    // mov r1, #2
    // bl HandleLoadOverlay
    // ldr r1, [r4, #0x2c]
    // mov r0, #8
    // tst r0, r1
    // bne _0223A130
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // mov r0, #5
    // mov r1, #0x30
    // bl Heap_Alloc
    // mov r1, #0x71
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // ldr r1, [r4, r1]
    // mov r0, #0
    // mov r2, #0x30
    // bl MIi_CpuClearFast
    // bl sub_0203769C
    // lsl r0, r0, #0x18
    // lsr r5, r0, #0x18
    // add r0, r5, #0
    // bl sub_020378AC
    // cmp r0, #3
    // bhi _0223A1B4
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0223A166: ; jump table
    // lsl r0, r5, #2
    // add r0, r4, r0
    // ldr r1, [r0, #0x68]
    // mov r0, #0x71
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // str r1, [r0, #4]
    // add r0, r4, #0
    // add r1, r5, #0
    // bl BattleSystem_GetBattlerIdPartner
    // lsl r0, r0, #2
    // add r0, r4, r0
    // ldr r1, [r0, #0x68]
    // mov r0, #0x71
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // str r1, [r0, #0xc]
    // b _0223A1B4
    // add r0, r4, #0
    // add r1, r5, #0
    // bl BattleSystem_GetBattlerIdPartner
    // lsl r0, r0, #2
    // add r0, r4, r0
    // ldr r2, [r0, #0x68]
    // mov r0, #0x71
    // lsl r0, r0, #2
    // ldr r1, [r4, r0]
    // str r2, [r1, #4]
    // lsl r1, r5, #2
    // add r1, r4, r1
    // ldr r1, [r1, #0x68]
    // ldr r0, [r4, r0]
    // str r1, [r0, #0xc]
    // mov r0, #0x71
    // lsl r0, r0, #2
    // ldr r1, [r4, r0]
    // mov r2, #5
    // str r2, [r1, #0x24]
    // ldr r0, [r4, r0]
    // mov r1, #0
    // add r0, #0x28
    // strb r1, [r0]
    // add r0, r5, #0
    // bl sub_020378AC
    // cmp r0, #3
    // bhi _0223A1FE
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0223A1DC: ; jump table
    // mov r0, #0x71
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #0
    // add r0, #0x29
    // strb r1, [r0]
    // b _0223A1FE
    // mov r0, #0x71
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #1
    // add r0, #0x29
    // strb r1, [r0]
    // mov r0, #0x71
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl ov05_0221BA00
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // _0223A20C: .word 0x00002490
    // _0223A210: .word 0x0000240C
    // _0223A214: .word FS_OVERLAY_ID(OVY_5)
    // TODO: decompile
}


void ov12_0223A218(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // bl OverlayManager_GetData
    // add r6, r0, #0
    // mov r0, #0x71
    // lsl r0, r0, #2
    // ldr r0, [r6, r0]
    // add r0, #0x2b
    // ldrb r0, [r0]
    // cmp r0, #0
    // beq _0223A25A
    // mov r4, #0
    // mov r7, #0x71
    // add r5, r4, #0
    // lsl r7, r7, #2
    // ldr r0, [r6, r7]
    // add r0, r0, r5
    // ldr r0, [r0, #0x14]
    // cmp r0, #0
    // beq _0223A244
    // bl Heap_Free
    // add r4, r4, #1
    // add r5, r5, #4
    // cmp r4, #4
    // blt _0223A236
    // mov r0, #0x71
    // lsl r0, r0, #2
    // ldr r0, [r6, r0]
    // bl Heap_Free
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov12_0223A260(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // bl OverlayManager_GetData
    // add r4, r0, #0
    // add r0, r5, #0
    // bl OverlayManager_GetArgs
    // ldr r0, [r4, #0x2c]
    // mov r1, #4
    // tst r1, r0
    // beq _0223A288
    // ldr r1, _0223A3A4 ; =0x0000240C
    // ldr r2, [r4, r1]
    // mov r1, #0x10
    // tst r1, r2
    // bne _0223A288
    // mov r1, #0x80
    // tst r0, r1
    // beq _0223A290
    // bl sub_0203A914
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // bl sub_0203769C
    // lsl r0, r0, #0x18
    // lsr r5, r0, #0x18
    // mov r0, #5
    // mov r1, #0x30
    // bl Heap_Alloc
    // mov r1, #0x71
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // ldr r1, [r4, r1]
    // mov r0, #0
    // mov r2, #0x30
    // bl MIi_CpuClearFast
    // ldr r1, [r4, #0x2c]
    // mov r0, #8
    // tst r0, r1
    // beq _0223A30E
    // mov r6, #0
    // add r5, r4, #0
    // add r0, r6, #0
    // bl sub_020378AC
    // mov r2, #0x71
    // lsl r2, r2, #2
    // ldr r2, [r4, r2]
    // lsl r0, r0, #2
    // ldr r1, [r5, #0x68]
    // add r0, r2, r0
    // str r1, [r0, #4]
    // add r0, r6, #0
    // bl sub_020378AC
    // add r7, r0, #0
    // ldr r0, [r5, #0x48]
    // mov r1, #5
    // bl PlayerProfile_GetPlayerName_NewString
    // mov r1, #0x71
    // lsl r1, r1, #2
    // ldr r2, [r4, r1]
    // lsl r1, r7, #2
    // add r1, r2, r1
    // add r6, r6, #1
    // add r5, r5, #4
    // str r0, [r1, #0x14]
    // cmp r6, #4
    // blt _0223A2BC
    // mov r0, #0x71
    // lsl r0, r0, #2
    // ldr r1, [r4, r0]
    // mov r2, #5
    // str r2, [r1, #0x24]
    // ldr r1, [r4, r0]
    // mov r2, #1
    // add r1, #0x28
    // strb r2, [r1]
    // ldr r0, [r4, r0]
    // add r0, #0x29
    // strb r2, [r0]
    // b _0223A394
    // add r0, r5, #0
    // lsl r7, r5, #2
    // bl sub_020378AC
    // mov r2, #0x71
    // lsl r2, r2, #2
    // add r1, r4, r7
    // ldr r2, [r4, r2]
    // lsl r0, r0, #2
    // ldr r1, [r1, #0x68]
    // add r0, r2, r0
    // str r1, [r0, #4]
    // mov r0, #1
    // eor r0, r5
    // lsl r6, r0, #2
    // str r0, [sp]
    // bl sub_020378AC
    // add r1, r4, r6
    // ldr r2, [r1, #0x68]
    // mov r1, #0x71
    // lsl r1, r1, #2
    // ldr r1, [r4, r1]
    // lsl r0, r0, #2
    // add r0, r1, r0
    // str r2, [r0, #4]
    // add r0, r5, #0
    // bl sub_020378AC
    // add r5, r0, #0
    // add r0, r4, r7
    // ldr r0, [r0, #0x48]
    // mov r1, #5
    // bl PlayerProfile_GetPlayerName_NewString
    // mov r1, #0x71
    // lsl r1, r1, #2
    // ldr r2, [r4, r1]
    // lsl r1, r5, #2
    // add r1, r2, r1
    // str r0, [r1, #0x14]
    // ldr r0, [sp]
    // bl sub_020378AC
    // add r5, r0, #0
    // add r0, r4, r6
    // ldr r0, [r0, #0x48]
    // mov r1, #5
    // bl PlayerProfile_GetPlayerName_NewString
    // mov r1, #0x71
    // lsl r1, r1, #2
    // ldr r3, [r4, r1]
    // lsl r2, r5, #2
    // add r2, r3, r2
    // str r0, [r2, #0x14]
    // ldr r0, [r4, r1]
    // mov r2, #5
    // str r2, [r0, #0x24]
    // ldr r0, [r4, r1]
    // mov r2, #1
    // add r0, #0x28
    // strb r2, [r0]
    // ldr r0, [r4, r1]
    // mov r2, #0
    // add r0, #0x29
    // strb r2, [r0]
    // mov r0, #0x71
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl ov05_0221BA00
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0223A3A4: .word 0x0000240C
    // TODO: decompile
}


void ov12_0223A3A8(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // bl OverlayManager_GetData
    // add r6, r0, #0
    // mov r0, #0x71
    // lsl r0, r0, #2
    // ldr r0, [r6, r0]
    // add r0, #0x2b
    // ldrb r0, [r0]
    // cmp r0, #0
    // beq _0223A3EA
    // mov r4, #0
    // mov r7, #0x71
    // add r5, r4, #0
    // lsl r7, r7, #2
    // ldr r0, [r6, r7]
    // add r0, r0, r5
    // ldr r0, [r0, #0x14]
    // cmp r0, #0
    // beq _0223A3D4
    // bl Heap_Free
    // add r4, r4, #1
    // add r5, r5, #4
    // cmp r4, #4
    // blt _0223A3C6
    // mov r0, #0x71
    // lsl r0, r0, #2
    // ldr r0, [r6, r0]
    // bl Heap_Free
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov12_0223A3F0(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // bl OverlayManager_GetArgs
    // add r7, r0, #0
    // ldr r0, [r7]
    // mov r1, #4
    // tst r1, r0
    // beq _0223A414
    // mov r1, #0x63
    // lsl r1, r1, #2
    // ldr r2, [r7, r1]
    // mov r1, #0x10
    // tst r1, r2
    // bne _0223A414
    // mov r1, #0x80
    // tst r0, r1
    // beq _0223A41A
    // add sp, #0xc
    // mov r0, #0
    // pop {r4, r5, r6, r7, pc}
    // bl sub_0203769C
    // lsl r0, r0, #0x18
    // lsr r4, r0, #0x18
    // ldr r0, _0223A5DC ; =FS_OVERLAY_ID(OVY_5)
    // mov r1, #2
    // bl HandleLoadOverlay
    // mov r0, #5
    // mov r1, #0x30
    // bl Heap_Alloc
    // add r6, r0, #0
    // mov r0, #0x66
    // lsl r0, r0, #2
    // str r6, [r7, r0]
    // mov r0, #0
    // add r1, r6, #0
    // mov r2, #0x30
    // bl MIi_CpuClearFast
    // str r7, [r6]
    // ldr r0, [r7, #0x14]
    // cmp r0, #5
    // bhi _0223A4CE
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0223A458: ; jump table
    // bl sub_02039998
    // cmp r0, #0
    // bne _0223A47A
    // mov r0, #0x51
    // lsl r0, r0, #2
    // ldr r0, [r7, r0]
    // mov r1, #0x16
    // bl GameStats_Inc
    // b _0223A4CE
    // mov r0, #0x51
    // lsl r0, r0, #2
    // ldr r0, [r7, r0]
    // mov r1, #0x1b
    // bl GameStats_Inc
    // b _0223A4CE
    // bl sub_02039998
    // cmp r0, #0
    // bne _0223A49E
    // mov r0, #0x51
    // lsl r0, r0, #2
    // ldr r0, [r7, r0]
    // mov r1, #0x17
    // bl GameStats_Inc
    // b _0223A4CE
    // mov r0, #0x51
    // lsl r0, r0, #2
    // ldr r0, [r7, r0]
    // mov r1, #0x1c
    // bl GameStats_Inc
    // b _0223A4CE
    // bl sub_02039998
    // cmp r0, #0
    // bne _0223A4C2
    // mov r0, #0x51
    // lsl r0, r0, #2
    // ldr r0, [r7, r0]
    // mov r1, #0x18
    // bl GameStats_Inc
    // b _0223A4CE
    // mov r0, #0x51
    // lsl r0, r0, #2
    // ldr r0, [r7, r0]
    // mov r1, #0x1d
    // bl GameStats_Inc
    // ldr r1, [r7]
    // mov r0, #8
    // tst r0, r1
    // beq _0223A538
    // mov r4, #0
    // add r5, r7, #0
    // add r0, r4, #0
    // bl sub_020378AC
    // lsl r0, r0, #2
    // ldr r1, [r5, #4]
    // add r0, r6, r0
    // str r1, [r0, #4]
    // add r0, r4, #0
    // bl sub_020378AC
    // str r0, [sp, #8]
    // add r0, r5, #0
    // add r0, #0xf8
    // ldr r0, [r0]
    // mov r1, #5
    // bl PlayerProfile_GetPlayerName_NewString
    // ldr r1, [sp, #8]
    // add r4, r4, #1
    // lsl r1, r1, #2
    // add r1, r6, r1
    // add r5, r5, #4
    // str r0, [r1, #0x14]
    // cmp r4, #4
    // blt _0223A4DA
    // mov r0, #5
    // str r0, [r6, #0x24]
    // add r0, r6, #0
    // mov r1, #2
    // add r0, #0x28
    // strb r1, [r0]
    // add r0, r6, #0
    // mov r1, #1
    // add r0, #0x29
    // strb r1, [r0]
    // ldr r1, [r7, #0x14]
    // cmp r1, #5
    // beq _0223A52E
    // add r0, r6, #0
    // add r0, #0x2a
    // strb r1, [r0]
    // b _0223A5C4
    // add r0, r6, #0
    // mov r1, #3
    // add r0, #0x2a
    // strb r1, [r0]
    // b _0223A5C4
    // lsl r0, r4, #2
    // str r0, [sp]
    // add r0, r4, #0
    // bl sub_020378AC
    // ldr r1, [sp]
    // lsl r0, r0, #2
    // add r1, r7, r1
    // ldr r1, [r1, #4]
    // add r0, r6, r0
    // str r1, [r0, #4]
    // mov r0, #1
    // eor r0, r4
    // lsl r5, r0, #2
    // str r0, [sp, #4]
    // bl sub_020378AC
    // add r1, r7, r5
    // lsl r0, r0, #2
    // ldr r1, [r1, #4]
    // add r0, r6, r0
    // str r1, [r0, #4]
    // add r0, r4, #0
    // bl sub_020378AC
    // add r4, r0, #0
    // ldr r0, [sp]
    // mov r1, #5
    // add r0, r7, r0
    // add r0, #0xf8
    // ldr r0, [r0]
    // bl PlayerProfile_GetPlayerName_NewString
    // lsl r1, r4, #2
    // add r1, r6, r1
    // str r0, [r1, #0x14]
    // ldr r0, [sp, #4]
    // bl sub_020378AC
    // add r4, r0, #0
    // add r0, r7, r5
    // add r0, #0xf8
    // ldr r0, [r0]
    // mov r1, #5
    // bl PlayerProfile_GetPlayerName_NewString
    // lsl r1, r4, #2
    // add r1, r6, r1
    // str r0, [r1, #0x14]
    // mov r0, #5
    // str r0, [r6, #0x24]
    // add r0, r6, #0
    // mov r1, #2
    // add r0, #0x28
    // strb r1, [r0]
    // add r0, r6, #0
    // mov r1, #0
    // add r0, #0x29
    // strb r1, [r0]
    // ldr r1, [r7, #0x14]
    // cmp r1, #5
    // beq _0223A5BC
    // add r0, r6, #0
    // add r0, #0x2a
    // strb r1, [r0]
    // b _0223A5C4
    // add r0, r6, #0
    // mov r1, #3
    // add r0, #0x2a
    // strb r1, [r0]
    // ldr r0, _0223A5E0 ; =0x000001B2
    // ldrb r1, [r7, r0]
    // add r0, r6, #0
    // add r0, #0x2c
    // strb r1, [r0]
    // add r0, r6, #0
    // bl ov05_0221BA00
    // mov r0, #1
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _0223A5DC: .word FS_OVERLAY_ID(OVY_5)
    // _0223A5E0: .word 0x000001B2
    // TODO: decompile
}


void ov12_0223A5E4(void) {
    // push {r4, r5, r6, lr}
    // bl OverlayManager_GetArgs
    // mov r1, #0x66
    // lsl r1, r1, #2
    // ldr r6, [r0, r1]
    // add r0, r6, #0
    // add r0, #0x2b
    // ldrb r0, [r0]
    // cmp r0, #0
    // beq _0223A61A
    // mov r4, #0
    // add r5, r6, #0
    // ldr r0, [r5, #0x14]
    // cmp r0, #0
    // beq _0223A608
    // bl Heap_Free
    // add r4, r4, #1
    // add r5, r5, #4
    // cmp r4, #4
    // blt _0223A5FE
    // add r0, r6, #0
    // bl Heap_Free
    // mov r0, #1
    // pop {r4, r5, r6, pc}
    // mov r0, #0
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void ov12_0223A620(void) {
    // push {r3, lr}
    // ldr r2, [r0, #0x2c]
    // ldr r1, _0223A65C ; =0x00000404
    // tst r1, r2
    // bne _0223A634
    // ldr r1, _0223A660 ; =0x0000240C
    // ldr r1, [r0, r1]
    // mov r0, #0x10
    // tst r0, r1
    // beq _0223A648
    // mov r0, #1
    // bl TextFlags_SetAutoScrollParam
    // mov r0, #1
    // bl TextFlags_SetCanABSpeedUpPrint
    // mov r0, #0
    // bl TextFlags_SetCanTouchSpeedUpPrint
    // pop {r3, pc}
    // mov r0, #3
    // bl TextFlags_SetAutoScrollParam
    // mov r0, #1
    // bl TextFlags_SetCanABSpeedUpPrint
    // mov r0, #1
    // bl TextFlags_SetCanTouchSpeedUpPrint
    // pop {r3, pc}
    // _0223A65C: .word 0x00000404
    // _0223A660: .word 0x0000240C
    // TODO: decompile
}


void ov12_0223A664(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x40
    // ldr r2, _0223A798 ; =0x0000240C
    // str r0, [sp]
    // ldr r3, [r0, r2]
    // mov r0, #0x10
    // tst r0, r3
    // beq _0223A680
    // ldr r0, [sp]
    // mov r1, #1
    // sub r2, #0x10
    // strb r1, [r0, r2]
    // add sp, #0x40
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #0x5f
    // mov r3, #0
    // add r4, sp, #0x30
    // add r5, sp, #0x20
    // lsl r0, r0, #2
    // stmia r4!, {r3}
    // ldr r2, [r1, r0]
    // add r3, r3, #1
    // add r1, r1, #4
    // stmia r5!, {r2}
    // cmp r3, #4
    // blt _0223A68A
    // bl sub_0203769C
    // str r0, [sp, #0x10]
    // bl sub_02037454
    // str r0, [sp, #0xc]
    // mov r0, #0
    // str r0, [sp, #4]
    // ldr r0, [sp, #0xc]
    // sub r0, r0, #1
    // str r0, [sp, #0x14]
    // cmp r0, #0
    // ble _0223A70A
    // add r0, sp, #0x30
    // add r2, sp, #0x20
    // str r0, [sp, #8]
    // str r2, [sp, #0x18]
    // mov ip, r0
    // ldr r0, [sp, #4]
    // add r5, r0, #1
    // ldr r0, [sp, #0xc]
    // cmp r5, r0
    // bge _0223A6F6
    // ldr r1, [sp, #0x18]
    // lsl r0, r5, #2
    // add r3, r1, r0
    // mov r1, ip
    // add r4, r1, r0
    // ldr r0, [r3]
    // ldr r7, [r2]
    // str r0, [sp, #0x1c]
    // cmp r7, r0
    // bge _0223A6EA
    // ldr r0, [sp, #8]
    // ldr r1, [r4]
    // ldr r6, [r0]
    // str r1, [r0]
    // ldr r0, [sp, #0x1c]
    // str r6, [r4]
    // str r0, [r2]
    // str r7, [r3]
    // ldr r0, [sp, #0xc]
    // add r5, r5, #1
    // add r3, r3, #4
    // add r4, r4, #4
    // cmp r5, r0
    // blt _0223A6D0
    // ldr r0, [sp, #8]
    // add r2, r2, #4
    // add r0, r0, #4
    // str r0, [sp, #8]
    // ldr r0, [sp, #4]
    // add r1, r0, #1
    // ldr r0, [sp, #0x14]
    // str r1, [sp, #4]
    // cmp r1, r0
    // blt _0223A6BC
    // ldr r1, [sp, #0x30]
    // ldr r0, [sp, #0x10]
    // cmp r1, r0
    // bne _0223A71E
    // ldr r0, [sp]
    // ldr r1, _0223A79C ; =0x000023FC
    // mov r2, #1
    // strb r2, [r0, r1]
    // add sp, #0x40
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [sp]
    // ldr r1, [r0, #0x2c]
    // mov r0, #0x80
    // tst r0, r1
    // bne _0223A792
    // mov r0, #8
    // tst r0, r1
    // beq _0223A784
    // ldr r0, [sp, #0x10]
    // bl sub_020378AC
    // add r4, r0, #0
    // ldr r0, [sp, #0x30]
    // bl sub_020378AC
    // cmp r0, #3
    // bhi _0223A792
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0223A74C: ; jump table
    // mov r0, #1
    // tst r0, r4
    // beq _0223A792
    // ldr r1, _0223A798 ; =0x0000240C
    // ldr r0, [sp]
    // ldr r2, [r0, r1]
    // mov r0, #0x20
    // orr r2, r0
    // ldr r0, [sp]
    // add sp, #0x40
    // str r2, [r0, r1]
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #1
    // tst r0, r4
    // bne _0223A792
    // ldr r1, _0223A798 ; =0x0000240C
    // ldr r0, [sp]
    // ldr r2, [r0, r1]
    // mov r0, #0x20
    // orr r2, r0
    // ldr r0, [sp]
    // add sp, #0x40
    // str r2, [r0, r1]
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r1, _0223A798 ; =0x0000240C
    // ldr r0, [sp]
    // ldr r2, [r0, r1]
    // mov r0, #0x20
    // orr r2, r0
    // ldr r0, [sp]
    // str r2, [r0, r1]
    // add sp, #0x40
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0223A798: .word 0x0000240C
    // _0223A79C: .word 0x000023FC
    // TODO: decompile
}


void ov12_0223A7A0(void) {
    // push {r3, lr}
    // bl sub_0203A880
    // bl sub_02039998
    // cmp r0, #0
    // beq _0223A7BC
    // bl ov00_021EC9D4
    // mov r1, #3
    // sub r0, r1, r0
    // bl sub_0203A930
    // pop {r3, pc}
    // bl sub_02035650
    // cmp r0, #0
    // beq _0223A7D0
    // bl WM_GetLinkLevel
    // mov r1, #3
    // sub r0, r1, r0
    // bl sub_0203A930
    // pop {r3, pc}
    // TODO: decompile
}

