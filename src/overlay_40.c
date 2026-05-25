/* Decompiled from asm/overlay_40.s */
#include "global.h"

void ov40_0222B6E0(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x28
    // add r4, r0, #0
    // mov r0, #0
    // add r1, r0, #0
    // bl Main_SetVBlankIntrCB
    // bl HBlankInterruptDisable
    // bl GfGfx_DisableEngineAPlanes
    // bl GfGfx_DisableEngineBPlanes
    // mov r2, #1
    // lsl r2, r2, #0x1a
    // ldr r1, [r2]
    // ldr r0, _0222B920 ; =0xFFFFE0FF
    // and r1, r0
    // str r1, [r2]
    // ldr r2, _0222B924 ; =0x04001000
    // ldr r1, [r2]
    // and r0, r1
    // str r0, [r2]
    // mov r0, #4
    // mov r1, #0x6d
    // bl GF_CreateVramTransferManager
    // mov r0, #0xbf
    // mov r1, #0x6d
    // bl NARC_New
    // str r0, [r4, #0x14]
    // mov r0, #0x6d
    // bl BgConfig_Alloc
    // str r0, [r4, #0x24]
    // mov r0, #0x6d
    // bl PaletteData_Init
    // str r0, [r4, #0x28]
    // mov r0, #4
    // str r0, [sp]
    // mov r1, #0
    // str r1, [sp, #4]
    // mov r0, #0x6d
    // mov r2, #1
    // add r3, r1, #0
    // bl GF_3DVramMan_Create
    // str r0, [r4, #0x60]
    // mov r0, #0x6d
    // bl PokepicManager_Create
    // str r0, [r4, #0x64]
    // bl NNS_G2dSetupSoftwareSpriteCamera
    // ldr r0, [r4, #0x28]
    // mov r1, #1
    // bl PaletteData_SetAutoTransparent
    // mov r2, #2
    // ldr r0, [r4, #0x28]
    // mov r1, #0
    // lsl r2, r2, #8
    // mov r3, #0x6d
    // bl PaletteData_AllocBuffers
    // mov r1, #1
    // ldr r0, [r4, #0x28]
    // lsl r2, r1, #9
    // mov r3, #0x6d
    // bl PaletteData_AllocBuffers
    // mov r1, #2
    // ldr r0, [r4, #0x28]
    // lsl r2, r1, #8
    // mov r3, #0x6d
    // bl PaletteData_AllocBuffers
    // mov r2, #2
    // ldr r0, [r4, #0x28]
    // mov r1, #3
    // lsl r2, r2, #8
    // mov r3, #0x6d
    // bl PaletteData_AllocBuffers
    // ldr r0, [r4, #0x24]
    // bl ov40_0222BA90
    // add r0, r4, #0
    // bl ov40_0222BC68
    // bl sub_020210BC
    // mov r0, #4
    // bl sub_02021148
    // mov r0, #1
    // str r0, [r4, #0x44]
    // add r0, r4, #0
    // bl ov40_0222C360
    // mov r0, #1
    // bl TextFlags_SetCanTouchSpeedUpPrint
    // ldr r0, _0222B928 ; =ov40_0222BD04
    // add r1, r4, #0
    // bl Main_SetVBlankIntrCB
    // ldr r0, [r4]
    // cmp r0, #0
    // beq _0222B826
    // add r0, r4, #0
    // bl ov40_0223D544
    // ldr r1, _0222B92C ; =0x00200010
    // mov r0, #1
    // bl G2dRenderer_SetObjCharTransferReservedRegion
    // mov r0, #1
    // bl G2dRenderer_SetPlttTransferReservedRegion
    // ldr r1, _0222B92C ; =0x00200010
    // mov r0, #2
    // bl G2dRenderer_SetObjCharTransferReservedRegion
    // mov r0, #2
    // bl G2dRenderer_SetPlttTransferReservedRegion
    // bl sub_0203A880
    // mov r0, #1
    // mov r1, #0x6d
    // bl sub_0203A948
    // mov r0, #0x6d
    // bl sub_0203A4AC
    // add r1, sp, #0x10
    // add r5, r0, #0
    // bl NNS_G2dGetUnpackedPaletteData
    // mov r0, #0x20
    // str r0, [sp]
    // ldr r1, [sp, #0x10]
    // ldr r0, [r4, #0x28]
    // ldr r1, [r1, #0xc]
    // mov r2, #2
    // mov r3, #0xe0
    // bl PaletteData_LoadPalette
    // mov r0, #0x20
    // str r0, [sp]
    // ldr r1, [sp, #0x10]
    // ldr r0, [r4, #0x28]
    // ldr r1, [r1, #0xc]
    // mov r2, #3
    // mov r3, #0xe0
    // bl PaletteData_LoadPalette
    // add r0, r5, #0
    // bl Heap_Free
    // mov r0, #0xc
    // str r0, [sp, #0x14]
    // mov r0, #0x6d
    // str r0, [sp, #0x18]
    // ldr r0, [r4]
    // mov r1, #1
    // str r0, [sp, #0x20]
    // lsl r0, r1, #0x14
    // str r0, [sp, #0x24]
    // ldr r0, [r4, #0x18]
    // mov r5, sp
    // str r0, [sp, #4]
    // ldr r0, [r4, #0x1c]
    // sub r5, #0x10
    // str r0, [sp, #8]
    // ldr r0, [r4, #0x28]
    // add r3, sp, #0x14
    // str r1, [sp, #0x1c]
    // str r0, [sp, #0xc]
    // ldmia r3!, {r0, r1}
    // add r2, r5, #0
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // str r0, [r2]
    // ldmia r5!, {r0, r1, r2, r3}
    // bl sub_02087284
    // mov r1, #0x6f
    // lsl r1, r1, #4
    // str r0, [r4, r1]
    // ldr r0, [r4, r1]
    // add r1, r4, #0
    // add r1, #0x5c
    // ldrb r1, [r1]
    // bl sub_02087878
    // mov r0, #0x6f
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl sub_020878B0
    // mov r0, #0x6f
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl sub_020879E0
    // mov r0, #2
    // str r0, [sp, #0x1c]
    // lsl r0, r0, #0x13
    // str r0, [sp, #0x24]
    // ldr r0, [r4, #0x18]
    // mov r5, sp
    // str r0, [sp, #4]
    // ldr r0, [r4, #0x1c]
    // sub r5, #0x10
    // str r0, [sp, #8]
    // ldr r0, [r4, #0x28]
    // add r3, sp, #0x14
    // str r0, [sp, #0xc]
    // ldmia r3!, {r0, r1}
    // add r2, r5, #0
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // str r0, [r2]
    // ldmia r5!, {r0, r1, r2, r3}
    // bl sub_02087284
    // ldr r1, _0222B930 ; =0x000006F4
    // str r0, [r4, r1]
    // ldr r0, [r4, r1]
    // add r1, r4, #0
    // add r1, #0x5c
    // ldrb r1, [r1]
    // bl sub_02087878
    // ldr r0, _0222B930 ; =0x000006F4
    // mov r1, #0
    // ldr r0, [r4, r0]
    // bl sub_020878B0
    // ldr r0, _0222B930 ; =0x000006F4
    // mov r1, #0
    // ldr r0, [r4, r0]
    // bl sub_020879E0
    // mov r0, #0x14
    // mov r1, #0x6d
    // bl FontSystem_NewInit
    // str r0, [r4, #0x50]
    // mov r0, #0
    // mov r1, #0x1b
    // mov r2, #0xd
    // mov r3, #0x6d
    // bl NewMsgDataFromNarc
    // str r0, [r4, #0x48]
    // mov r0, #0
    // mov r1, #0x1b
    // mov r2, #0x1a
    // mov r3, #0x6d
    // bl NewMsgDataFromNarc
    // str r0, [r4, #0x4c]
    // add r0, r4, #0
    // bl ov40_0222FCCC
    // add r0, r4, #0
    // bl sub_02088030
    // add r0, r4, #0
    // bl ov40_0222C4F8
    // add r0, r4, #0
    // bl ov40_0222FBF8
    // add sp, #0x28
    // pop {r3, r4, r5, pc}
    // nop
    // _0222B920: .word 0xFFFFE0FF
    // _0222B924: .word 0x04001000
    // _0222B928: .word ov40_0222BD04
    // _0222B92C: .word 0x00200010
    // _0222B930: .word 0x000006F4
    // TODO: decompile
}




void ov40_0222B934(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // mov r0, #1
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #2
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #4
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #8
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #1
    // mov r1, #0
    // bl GfGfx_EngineBTogglePlanes
    // mov r0, #2
    // mov r1, #0
    // bl GfGfx_EngineBTogglePlanes
    // mov r0, #4
    // mov r1, #0
    // bl GfGfx_EngineBTogglePlanes
    // mov r0, #8
    // mov r1, #0
    // bl GfGfx_EngineBTogglePlanes
    // ldr r0, [r5, #0x24]
    // mov r1, #0
    // bl FreeBgTilemapBuffer
    // ldr r0, [r5, #0x24]
    // mov r1, #1
    // bl FreeBgTilemapBuffer
    // ldr r0, [r5, #0x24]
    // mov r1, #2
    // bl FreeBgTilemapBuffer
    // ldr r0, [r5, #0x24]
    // mov r1, #3
    // bl FreeBgTilemapBuffer
    // ldr r0, [r5, #0x24]
    // mov r1, #4
    // bl FreeBgTilemapBuffer
    // ldr r0, [r5, #0x24]
    // mov r1, #5
    // bl FreeBgTilemapBuffer
    // ldr r0, [r5, #0x24]
    // mov r1, #6
    // bl FreeBgTilemapBuffer
    // ldr r0, [r5, #0x24]
    // mov r1, #7
    // bl FreeBgTilemapBuffer
    // ldr r0, [r5, #0x24]
    // bl Heap_Free
    // ldr r0, [r5, #0x28]
    // mov r1, #0
    // bl PaletteData_FreeBuffers
    // ldr r0, [r5, #0x28]
    // mov r1, #1
    // bl PaletteData_FreeBuffers
    // ldr r0, [r5, #0x28]
    // mov r1, #2
    // bl PaletteData_FreeBuffers
    // ldr r0, [r5, #0x28]
    // mov r1, #3
    // bl PaletteData_FreeBuffers
    // ldr r0, [r5, #0x28]
    // bl PaletteData_Free
    // ldr r0, [r5]
    // cmp r0, #0
    // bne _0222B9FE
    // mov r0, #0x83
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // bl Save_Misc_Get
    // add r1, r5, #0
    // add r1, #0x5c
    // ldrb r1, [r1]
    // bl sub_0202AC1C
    // ldr r0, [r5, #0x14]
    // bl NARC_Delete
    // ldr r0, _0222BA84 ; =0x0000416C
    // ldr r0, [r5, r0]
    // bl SysTask_Destroy
    // ldr r0, [r5, #0x18]
    // ldr r1, [r5, #0x1c]
    // bl SpriteSystem_FreeResourcesAndManager
    // ldr r0, [r5, #0x18]
    // bl SpriteSystem_Free
    // bl sub_0203A914
    // bl sub_02021238
    // ldr r0, [r5, #0x2c]
    // bl TouchHitboxController_Destroy
    // mov r0, #0
    // bl TextFlags_SetCanTouchSpeedUpPrint
    // ldr r7, _0222BA88 ; =0x0000087C
    // mov r6, #0
    // add r4, r5, #0
    // ldr r0, [r4, r7]
    // cmp r0, #0
    // beq _0222BA3E
    // bl Heap_Free
    // ldr r0, _0222BA8C ; =0x0000088C
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // beq _0222BA4A
    // bl Heap_Free
    // add r6, r6, #1
    // add r4, r4, #4
    // cmp r6, #4
    // blt _0222BA34
    // ldr r0, [r5, #0x50]
    // bl sub_020135AC
    // ldr r0, [r5, #0x48]
    // bl DestroyMsgData
    // ldr r0, [r5, #0x4c]
    // bl DestroyMsgData
    // ldr r0, [r5, #0x60]
    // bl GF_3DVramMan_Delete
    // ldr r0, [r5, #0x64]
    // bl PokepicManager_Delete
    // add r0, r5, #0
    // bl ov40_0223D600
    // mov r0, #0
    // add r1, r0, #0
    // bl Main_SetVBlankIntrCB
    // bl GF_DestroyVramTransferManager
    // pop {r3, r4, r5, r6, r7, pc}
    // _0222BA84: .word 0x0000416C
    // _0222BA88: .word 0x0000087C
    // _0222BA8C: .word 0x0000088C
    // TODO: decompile
}




void ov40_0222BA90(void) {
    // push {r4, r5, lr}
    // sub sp, #0x3c
    // add r4, r0, #0
    // bl GfGfx_DisableEngineAPlanes
    // ldr r5, _0222BC14 ; =_02244C44
    // add r3, sp, #0x2c
    // add r2, r3, #0
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // add r0, r2, #0
    // bl SetBothScreensModesAndDisable
    // ldr r5, _0222BC18 ; =ov40_02244CA0
    // add r3, sp, #4
    // mov r2, #5
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // sub r2, r2, #1
    // bne _0222BAB4
    // add r0, sp, #4
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
    // mov r1, #0
    // ldr r2, _0222BC1C ; =ov40_02244CC8
    // add r0, r4, #0
    // add r3, r1, #0
    // bl InitBgFromTemplate
    // ldr r2, _0222BC20 ; =ov40_02244CE4
    // add r0, r4, #0
    // mov r1, #1
    // mov r3, #0
    // bl InitBgFromTemplate
    // ldr r2, _0222BC24 ; =ov40_02244D00
    // add r0, r4, #0
    // mov r1, #2
    // mov r3, #0
    // bl InitBgFromTemplate
    // ldr r2, _0222BC28 ; =ov40_02244D1C
    // add r0, r4, #0
    // mov r1, #3
    // mov r3, #0
    // bl InitBgFromTemplate
    // add r0, r4, #0
    // mov r1, #0
    // bl BgClearTilemapBufferAndCommit
    // add r0, r4, #0
    // mov r1, #1
    // bl BgClearTilemapBufferAndCommit
    // add r0, r4, #0
    // mov r1, #2
    // bl BgClearTilemapBufferAndCommit
    // add r0, r4, #0
    // mov r1, #3
    // bl BgClearTilemapBufferAndCommit
    // ldr r2, _0222BC2C ; =ov40_02244D38
    // add r0, r4, #0
    // mov r1, #4
    // mov r3, #0
    // bl InitBgFromTemplate
    // ldr r2, _0222BC30 ; =ov40_02244D54
    // add r0, r4, #0
    // mov r1, #5
    // mov r3, #0
    // bl InitBgFromTemplate
    // ldr r2, _0222BC34 ; =ov40_02244D70
    // add r0, r4, #0
    // mov r1, #6
    // mov r3, #0
    // bl InitBgFromTemplate
    // ldr r2, _0222BC38 ; =ov40_02244D8C
    // add r0, r4, #0
    // mov r1, #7
    // mov r3, #0
    // bl InitBgFromTemplate
    // add r0, r4, #0
    // mov r1, #4
    // bl BgClearTilemapBufferAndCommit
    // add r0, r4, #0
    // mov r1, #5
    // bl BgClearTilemapBufferAndCommit
    // add r0, r4, #0
    // mov r1, #6
    // bl BgClearTilemapBufferAndCommit
    // add r0, r4, #0
    // mov r1, #7
    // bl BgClearTilemapBufferAndCommit
    // mov r0, #1
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #2
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #4
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #8
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #0x10
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #1
    // mov r1, #0
    // bl GfGfx_EngineBTogglePlanes
    // mov r0, #2
    // mov r1, #1
    // bl GfGfx_EngineBTogglePlanes
    // mov r0, #4
    // mov r1, #0
    // bl GfGfx_EngineBTogglePlanes
    // mov r0, #8
    // mov r1, #0
    // bl GfGfx_EngineBTogglePlanes
    // mov r0, #0x10
    // mov r1, #1
    // bl GfGfx_EngineBTogglePlanes
    // mov r0, #1
    // bl ov40_0222BC44
    // mov r0, #8
    // str r0, [sp]
    // ldr r0, _0222BC3C ; =0x04000050
    // mov r1, #4
    // mov r2, #0x12
    // mov r3, #7
    // bl G2x_SetBlendAlpha_
    // mov r0, #8
    // str r0, [sp]
    // ldr r0, _0222BC40 ; =0x04001050
    // mov r1, #4
    // mov r2, #0x12
    // mov r3, #7
    // bl G2x_SetBlendAlpha_
    // add sp, #0x3c
    // pop {r4, r5, pc}
    // _0222BC14: .word _02244C44
    // _0222BC18: .word ov40_02244CA0
    // _0222BC1C: .word ov40_02244CC8
    // _0222BC20: .word ov40_02244CE4
    // _0222BC24: .word ov40_02244D00
    // _0222BC28: .word ov40_02244D1C
    // _0222BC2C: .word ov40_02244D38
    // _0222BC30: .word ov40_02244D54
    // _0222BC34: .word ov40_02244D70
    // _0222BC38: .word ov40_02244D8C
    // _0222BC3C: .word 0x04000050
    // _0222BC40: .word 0x04001050
    // TODO: decompile
}




void ov40_0222BC44(void) {
    // ldr r1, _0222BC4C ; =gSystem + 0x60
    // ldr r3, _0222BC50 ; =GfGfx_SwapDisplay
    // strb r0, [r1, #9]
    // bx r3
    // _0222BC4C: .word gSystem + 0x60
    // _0222BC50: .word GfGfx_SwapDisplay
    // TODO: decompile
}




void ov40_0222BC54(void) {
}




void ov40_0222BC68(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0x4c
    // add r4, r0, #0
    // mov r0, #0x6d
    // bl SpriteSystem_Alloc
    // add r2, sp, #0x2c
    // ldr r5, _0222BCF8 ; =ov40_02244C80
    // str r0, [r4, #0x18]
    // ldmia r5!, {r0, r1}
    // add r3, r2, #0
    // stmia r2!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // ldr r6, _0222BCFC ; =ov40_02244C54
    // stmia r2!, {r0, r1}
    // add r5, sp, #0x18
    // ldmia r6!, {r0, r1}
    // add r2, r5, #0
    // stmia r5!, {r0, r1}
    // ldmia r6!, {r0, r1}
    // stmia r5!, {r0, r1}
    // ldr r0, [r6]
    // add r1, r3, #0
    // str r0, [r5]
    // ldr r0, [r4, #0x18]
    // mov r3, #0x20
    // bl SpriteSystem_Init
    // ldr r3, _0222BD00 ; =ov40_02244C68
    // add r2, sp, #0
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldr r0, [r4, #0x18]
    // bl SpriteManager_New
    // str r0, [r4, #0x1c]
    // ldr r0, [r4, #0x18]
    // ldr r1, [r4, #0x1c]
    // mov r2, #0xc0
    // bl SpriteSystem_InitSprites
    // cmp r0, #0
    // bne _0222BCD2
    // bl GF_AssertFail
    // ldr r0, [r4, #0x18]
    // ldr r1, [r4, #0x1c]
    // add r2, sp, #0
    // bl SpriteSystem_InitManagerWithCapacities
    // cmp r0, #0
    // bne _0222BCE4
    // bl GF_AssertFail
    // ldr r0, [r4, #0x18]
    // bl SpriteSystem_GetRenderer
    // mov r2, #1
    // mov r1, #0
    // lsl r2, r2, #0x14
    // bl G2dRenderer_SetSubSurfaceCoords
    // add sp, #0x4c
    // pop {r3, r4, r5, r6, pc}
    // _0222BCF8: .word ov40_02244C80
    // _0222BCFC: .word ov40_02244C54
    // _0222BD00: .word ov40_02244C68
    // TODO: decompile
}




void ov40_0222BD04(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl GF_RunVramTransferTasks
    // ldr r0, [r4, #0x28]
    // bl PaletteData_PushTransparentBuffers
    // ldr r0, [r4, #0x24]
    // bl DoScheduledBgGpuUpdates
    // ldr r3, _0222BD28 ; =0x027E0000
    // ldr r1, _0222BD2C ; =0x00003FF8
    // mov r0, #1
    // ldr r2, [r3, r1]
    // orr r0, r2
    // str r0, [r3, r1]
    // pop {r4, pc}
    // nop
    // _0222BD28: .word 0x027E0000
    // _0222BD2C: .word 0x00003FF8
    // TODO: decompile
}




void ov40_0222BD30(void) {
    // push {r4, r5, r6, lr}
    // add r5, r1, #0
    // ldr r1, [r5]
    // add r4, r0, #0
    // cmp r1, #0x12
    // bls _0222BD3E
    // b _0222BF0A
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _0222BD4A: ; jump table
    // ldr r1, [r4, #4]
    // lsl r2, r1, #2
    // ldr r1, _0222BF2C ; =ov40_022450F0
    // ldr r1, [r1, r2]
    // blx r1
    // add r6, r0, #0
    // add r0, r4, #0
    // mov r1, #1
    // add r2, r6, #0
    // add r3, r5, #0
    // bl ov40_0222BF64
    // cmp r6, #0
    // bne _0222BD8E
    // b _0222BF0E
    // ldr r0, [r4, #0x44]
    // cmp r0, #1
    // bne _0222BD9E
    // add r0, r4, #0
    // mov r1, #0
    // bl ov40_0222BF80
    // b _0222BF0E
    // add r0, r4, #0
    // mov r1, #1
    // bl ov40_0222BF80
    // b _0222BF0E
    // ldr r1, [r4, #4]
    // lsl r2, r1, #2
    // ldr r1, _0222BF30 ; =ov40_02245108
    // ldr r1, [r1, r2]
    // blx r1
    // add r2, r0, #0
    // add r0, r4, #0
    // mov r1, #0x10
    // add r3, r5, #0
    // bl ov40_0222BF64
    // b _0222BF0E
    // ldr r1, [r4, #4]
    // lsl r2, r1, #2
    // ldr r1, _0222BF34 ; =ov40_02245140
    // ldr r1, [r1, r2]
    // blx r1
    // add r2, r0, #0
    // add r0, r4, #0
    // mov r1, #0x10
    // add r3, r5, #0
    // bl ov40_0222BF64
    // b _0222BF0E
    // ldr r1, [r4, #4]
    // lsl r2, r1, #2
    // ldr r1, _0222BF38 ; =ov40_02245168
    // ldr r1, [r1, r2]
    // blx r1
    // add r2, r0, #0
    // add r0, r4, #0
    // mov r1, #0x10
    // add r3, r5, #0
    // bl ov40_0222BF64
    // b _0222BF0E
    // ldr r1, [r4, #4]
    // lsl r2, r1, #2
    // ldr r1, _0222BF3C ; =ov40_02245220
    // ldr r1, [r1, r2]
    // blx r1
    // add r2, r0, #0
    // add r0, r4, #0
    // mov r1, #0x10
    // add r3, r5, #0
    // bl ov40_0222BF64
    // b _0222BF0E
    // ldr r1, [r4, #4]
    // lsl r2, r1, #2
    // ldr r1, _0222BF40 ; =ov40_02245238
    // ldr r1, [r1, r2]
    // blx r1
    // add r2, r0, #0
    // add r0, r4, #0
    // mov r1, #0x10
    // add r3, r5, #0
    // bl ov40_0222BF64
    // b _0222BF0E
    // ldr r1, [r4, #4]
    // lsl r2, r1, #2
    // ldr r1, _0222BF44 ; =ov40_0224533C
    // ldr r1, [r1, r2]
    // blx r1
    // add r2, r0, #0
    // add r0, r4, #0
    // mov r1, #0x10
    // add r3, r5, #0
    // bl ov40_0222BF64
    // b _0222BF0E
    // ldr r1, [r4, #4]
    // lsl r2, r1, #2
    // ldr r1, _0222BF48 ; =ov40_02245368
    // ldr r1, [r1, r2]
    // blx r1
    // add r2, r0, #0
    // add r0, r4, #0
    // mov r1, #0x10
    // add r3, r5, #0
    // bl ov40_0222BF64
    // b _0222BF0E
    // ldr r1, [r4, #4]
    // lsl r2, r1, #2
    // ldr r1, _0222BF4C ; =ov40_02245470
    // ldr r1, [r1, r2]
    // blx r1
    // add r2, r0, #0
    // add r0, r4, #0
    // mov r1, #0x10
    // add r3, r5, #0
    // bl ov40_0222BF64
    // b _0222BF0E
    // ldr r1, [r4, #4]
    // lsl r2, r1, #2
    // ldr r1, _0222BF50 ; =ov40_022455F4
    // ldr r1, [r1, r2]
    // blx r1
    // add r2, r0, #0
    // add r0, r4, #0
    // mov r1, #0x10
    // add r3, r5, #0
    // bl ov40_0222BF64
    // b _0222BF0E
    // ldr r1, [r4, #4]
    // lsl r2, r1, #2
    // ldr r1, _0222BF50 ; =ov40_022455F4
    // ldr r1, [r1, r2]
    // blx r1
    // add r2, r0, #0
    // add r0, r4, #0
    // mov r1, #0x10
    // add r3, r5, #0
    // bl ov40_0222BF64
    // b _0222BF0E
    // ldr r1, [r4, #4]
    // lsl r2, r1, #2
    // ldr r1, _0222BF54 ; =ov40_02245B98
    // ldr r1, [r1, r2]
    // blx r1
    // add r2, r0, #0
    // add r0, r4, #0
    // mov r1, #0x10
    // add r3, r5, #0
    // bl ov40_0222BF64
    // b _0222BF0E
    // ldr r1, [r4, #4]
    // lsl r2, r1, #2
    // ldr r1, _0222BF58 ; =ov40_02245B44
    // ldr r1, [r1, r2]
    // blx r1
    // add r2, r0, #0
    // add r0, r4, #0
    // mov r1, #0x10
    // add r3, r5, #0
    // bl ov40_0222BF64
    // b _0222BF0E
    // ldr r1, [r4, #4]
    // lsl r2, r1, #2
    // ldr r1, _0222BF5C ; =ov40_02245B30
    // ldr r1, [r1, r2]
    // blx r1
    // add r2, r0, #0
    // add r0, r4, #0
    // mov r1, #0x10
    // add r3, r5, #0
    // bl ov40_0222BF64
    // b _0222BF0E
    // mov r1, #0xff
    // mov r2, #1
    // add r3, r5, #0
    // bl ov40_0222BF64
    // b _0222BF0E
    // ldr r1, [r4, #4]
    // lsl r2, r1, #2
    // ldr r1, _0222BF60 ; =ov40_02245CA8
    // ldr r1, [r1, r2]
    // blx r1
    // add r2, r0, #0
    // add r0, r4, #0
    // mov r1, #0x10
    // add r3, r5, #0
    // bl ov40_0222BF64
    // b _0222BF0E
    // bl ov40_02230D20
    // b _0222BF0E
    // mov r0, #1
    // pop {r4, r5, r6, pc}
    // bl Thunk_G3X_Reset
    // ldr r0, [r4, #0x64]
    // bl PokepicManager_DrawAll
    // mov r0, #1
    // mov r1, #0
    // bl RequestSwap3DBuffers
    // add r0, r4, #0
    // bl ov40_0223D5E8
    // mov r0, #0
    // pop {r4, r5, r6, pc}
    // nop
    // _0222BF2C: .word ov40_022450F0
    // _0222BF30: .word ov40_02245108
    // _0222BF34: .word ov40_02245140
    // _0222BF38: .word ov40_02245168
    // _0222BF3C: .word ov40_02245220
    // _0222BF40: .word ov40_02245238
    // _0222BF44: .word ov40_0224533C
    // _0222BF48: .word ov40_02245368
    // _0222BF4C: .word ov40_02245470
    // _0222BF50: .word ov40_022455F4
    // _0222BF54: .word ov40_02245B98
    // _0222BF58: .word ov40_02245B44
    // _0222BF5C: .word ov40_02245B30
    // _0222BF60: .word ov40_02245CA8
    // TODO: decompile
}




void ov40_0222BF64(void) {
    // str r1, [r3]
    ov40_0222BF80(0);
    ov40_0222BF8C(r4, 0);
}




void ov40_0222BF80(void) {
}




void ov40_0222BF8C(void) {
}




void ov40_0222BF94(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl sub_02088030
    // add r0, r4, #0
    // bl ov40_0222CE7C
    // ldr r0, _0222BFAC ; =0x000006E4
    // mov r1, #0
    // str r1, [r4, r0]
    // pop {r4, pc}
    // nop
    // _0222BFAC: .word 0x000006E4
    // TODO: decompile
}




void ov40_0222BFB0(void) {
    // push {r4, r5, r6, lr}
    // ldr r2, _0222C010 ; =0x000006D8
    // ldr r3, _0222C014 ; =0x00000818
    // ldr r4, [r0, r2]
    // ldr r1, [r0, r3]
    // lsl r4, r4, #2
    // add r5, r0, r4
    // add r4, r3, #4
    // str r1, [r5, r4]
    // add r1, r2, #0
    // add r1, #0xc
    // ldr r1, [r0, r1]
    // ldr r5, [r0, r3]
    // add r4, r1, #0
    // ldr r1, [r0, r2]
    // mov r6, #0x24
    // mul r4, r6
    // lsl r1, r1, #2
    // add r5, r5, r4
    // add r4, r0, r1
    // add r1, r2, #0
    // sub r1, #0x14
    // str r5, [r4, r1]
    // add r4, r2, #0
    // add r4, #0xc
    // ldr r4, [r0, r4]
    // ldr r1, [r0, r3]
    // add r5, r4, #0
    // mul r5, r6
    // add r1, r1, r5
    // ldr r1, [r1, #0x20]
    // mov r4, #0
    // str r1, [r0, r3]
    // ldr r1, [r0, r2]
    // add r1, r1, #1
    // str r1, [r0, r2]
    // add r2, #0xc
    // str r4, [r0, r2]
    // ldr r1, [r0, r3]
    // cmp r1, #0
    // bne _0222C006
    // add r0, r4, #0
    // pop {r4, r5, r6, pc}
    // bl ov40_0222BF94
    // mov r0, #1
    // pop {r4, r5, r6, pc}
    // nop
    // _0222C010: .word 0x000006D8
    // _0222C014: .word 0x00000818
    // TODO: decompile
}




void ov40_0222C018(void) {
}




void ov40_0222C03C(void) {
    // push {r3, r4, r5, lr}
    // ldr r3, _0222C154 ; =0x000006E4
    // add r4, r0, #0
    // ldr r1, _0222C158 ; =0x00000818
    // ldr r5, [r4, r3]
    // mov r3, #0x24
    // ldr r2, [r4, r1]
    // mul r3, r5
    // add r2, r2, r3
    // ldr r2, [r2, #0x10]
    // cmp r2, #0x13
    // bhi _0222C150
    // add r2, r2, r2
    // add r2, pc
    // ldrh r2, [r2, #6]
    // lsl r2, r2, #0x10
    // asr r2, r2, #0x10
    // add pc, r2
    // _0222C060: ; jump table
    // add r1, #0x50
    // ldr r0, [r4, r1]
    // mov r1, #0
    // add r2, r1, #0
    // bl sub_02087A84
    // add r0, r4, #0
    // mov r1, #2
    // bl ov40_0222BF80
    // pop {r3, r4, r5, pc}
    // ldr r3, [r4, #0x10]
    // mov r1, #2
    // mov r2, #1
    // bl ov40_0222BF64
    // pop {r3, r4, r5, pc}
    // ldr r3, [r4, #0x10]
    // mov r1, #3
    // mov r2, #1
    // bl ov40_0222BF64
    // pop {r3, r4, r5, pc}
    // ldr r3, [r4, #0x10]
    // mov r1, #4
    // mov r2, #1
    // bl ov40_0222BF64
    // pop {r3, r4, r5, pc}
    // ldr r3, [r4, #0x10]
    // mov r1, #5
    // mov r2, #1
    // bl ov40_0222BF64
    // pop {r3, r4, r5, pc}
    // ldr r3, [r4, #0x10]
    // mov r1, #6
    // mov r2, #1
    // bl ov40_0222BF64
    // pop {r3, r4, r5, pc}
    // ldr r3, [r4, #0x10]
    // mov r1, #7
    // mov r2, #1
    // bl ov40_0222BF64
    // pop {r3, r4, r5, pc}
    // ldr r3, [r4, #0x10]
    // mov r1, #8
    // mov r2, #1
    // bl ov40_0222BF64
    // pop {r3, r4, r5, pc}
    // ldr r3, [r4, #0x10]
    // mov r1, #9
    // mov r2, #1
    // bl ov40_0222BF64
    // pop {r3, r4, r5, pc}
    // ldr r3, [r4, #0x10]
    // mov r1, #0xa
    // mov r2, #1
    // bl ov40_0222BF64
    // pop {r3, r4, r5, pc}
    // ldr r3, [r4, #0x10]
    // mov r1, #0xb
    // mov r2, #1
    // bl ov40_0222BF64
    // pop {r3, r4, r5, pc}
    // ldr r3, [r4, #0x10]
    // mov r1, #0xc
    // mov r2, #1
    // bl ov40_0222BF64
    // pop {r3, r4, r5, pc}
    // ldr r3, [r4, #0x10]
    // mov r1, #0xd
    // mov r2, #1
    // bl ov40_0222BF64
    // pop {r3, r4, r5, pc}
    // ldr r3, [r4, #0x10]
    // mov r1, #0xe
    // mov r2, #1
    // bl ov40_0222BF64
    // pop {r3, r4, r5, pc}
    // ldr r3, [r4, #0x10]
    // mov r1, #0xf
    // mov r2, #1
    // bl ov40_0222BF64
    // pop {r3, r4, r5, pc}
    // ldr r3, [r4, #0x10]
    // mov r1, #0x11
    // mov r2, #1
    // bl ov40_0222BF64
    // pop {r3, r4, r5, pc}
    // nop
    // _0222C154: .word 0x000006E4
    // _0222C158: .word 0x00000818
    // TODO: decompile
}




void ov40_0222C15C(void) {
    // push {r4, r5, r6, lr}
    // ldr r3, _0222C218 ; =0x000006E4
    // add r5, r0, #0
    // ldr r1, _0222C21C ; =0x00000818
    // ldr r4, [r5, r3]
    // mov r3, #0x24
    // ldr r2, [r5, r1]
    // mul r3, r4
    // add r2, r2, r3
    // ldr r4, [r2, #0x18]
    // ldr r2, [r5]
    // mov r6, #1
    // cmp r2, #6
    // bhi _0222C192
    // add r2, r2, r2
    // add r2, pc
    // ldrh r2, [r2, #6]
    // lsl r2, r2, #0x10
    // asr r2, r2, #0x10
    // add pc, r2
    // _0222C184: ; jump table
    // cmp r4, #3
    // bhi _0222C200
    // lsl r0, r4, #2
    // add r1, r5, r0
    // ldr r0, _0222C220 ; =0x0000087C
    // ldr r0, [r1, r0]
    // cmp r0, #0
    // bne _0222C200
    // ldr r1, _0222C224 ; =0x0000010D
    // add r0, r5, #0
    // bl ov40_0222DD9C
    // mov r6, #0
    // b _0222C200
    // cmp r4, #0
    // bne _0222C200
    // add r1, #0x18
    // ldr r0, [r5, r1]
    // bl Save_FashionData_Get
    // add r1, r4, #0
    // bl sub_0202B9B8
    // bl sub_0202BC10
    // add r6, r0, #0
    // bne _0222C200
    // ldr r1, _0222C228 ; =0x00000122
    // add r0, r5, #0
    // bl ov40_0222DD9C
    // b _0222C200
    // cmp r4, #0x64
    // bne _0222C200
    // bl ov40_0222DD94
    // cmp r0, #0
    // beq _0222C200
    // ldr r1, _0222C22C ; =0x00000111
    // add r0, r5, #0
    // bl ov40_0222DD9C
    // mov r6, #0
    // b _0222C200
    // ldr r2, _0222C230 ; =0x0000270F
    // cmp r4, r2
    // bne _0222C200
    // add r1, #0x64
    // ldr r1, [r5, r1]
    // cmp r1, #0
    // bne _0222C200
    // mov r1, #0x81
    // bl ov40_0222DD9C
    // mov r6, #0
    // cmp r6, #0
    // bne _0222C20C
    // ldr r0, _0222C234 ; =0x0000057C
    // bl PlaySE
    // b _0222C212
    // ldr r0, _0222C238 ; =0x0000057B
    // bl PlaySE
    // add r0, r6, #0
    // pop {r4, r5, r6, pc}
    // nop
    // _0222C218: .word 0x000006E4
    // _0222C21C: .word 0x00000818
    // _0222C220: .word 0x0000087C
    // _0222C224: .word 0x0000010D
    // _0222C228: .word 0x00000122
    // _0222C22C: .word 0x00000111
    // _0222C230: .word 0x0000270F
    // _0222C234: .word 0x0000057C
    // _0222C238: .word 0x0000057B
    // TODO: decompile
}




void ov40_0222C23C(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #4
    // add r5, r0, #0
    // add r4, r2, #0
    // cmp r1, #0
    // bne _0222C33C
    // ldr r0, _0222C340 ; =0x000006E4
    // str r5, [r4, r0]
    // add r0, r4, #0
    // bl ov40_0222C15C
    // cmp r0, #0
    // beq _0222C33C
    // cmp r5, #4
    // bhi _0222C33C
    // mov r0, #0x28
    // mul r0, r5
    // add r1, r4, r0
    // ldr r0, _0222C344 ; =0x000005FC
    // add r2, sp, #0
    // ldr r0, [r1, r0]
    // add r1, sp, #0
    // add r1, #2
    // bl ov40_0222D294
    // mov r0, #0x6f
    // lsl r0, r0, #4
    // add r3, sp, #0
    // mov r1, #2
    // ldrsh r1, [r3, r1]
    // mov r2, #0
    // ldrsh r2, [r3, r2]
    // add r1, #0x10
    // lsl r1, r1, #0x10
    // ldr r0, [r4, r0]
    // asr r1, r1, #0x10
    // bl sub_02087948
    // mov r0, #0x6f
    // lsl r0, r0, #4
    // add r3, sp, #0
    // mov r1, #2
    // ldrsh r1, [r3, r1]
    // mov r2, #0
    // ldrsh r2, [r3, r2]
    // add r1, #0x10
    // lsl r1, r1, #0x10
    // ldr r0, [r4, r0]
    // asr r1, r1, #0x10
    // bl sub_020878B8
    // ldr r2, _0222C340 ; =0x000006E4
    // ldr r1, _0222C348 ; =0x00000818
    // ldr r0, [r4, r2]
    // ldr r6, [r4, r1]
    // mov r3, #0x24
    // add r5, r0, #0
    // mul r5, r3
    // add r0, r6, r5
    // ldr r5, [r0, #0x18]
    // add r0, r1, #0
    // add r0, #0x54
    // str r5, [r4, r0]
    // ldr r5, [r4, r1]
    // ldr r1, [r4, r2]
    // add r0, r4, #0
    // add r2, r1, #0
    // mul r2, r3
    // add r1, r5, r2
    // ldr r1, [r1, #0x14]
    // bl ov40_0222BF80
    // ldr r1, _0222C340 ; =0x000006E4
    // ldr r0, _0222C348 ; =0x00000818
    // ldr r2, [r4, r1]
    // mov r1, #0x24
    // ldr r3, [r4, r0]
    // mul r1, r2
    // add r1, r3, r1
    // ldr r1, [r1, #0x14]
    // cmp r1, #2
    // bne _0222C2EE
    // add r0, #0x50
    // mov r1, #0
    // ldr r0, [r4, r0]
    // add r2, r1, #0
    // bl sub_02087A84
    // b _0222C300
    // add r0, r4, #0
    // bl ov40_0222C434
    // mov r0, #0x6f
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #1
    // bl sub_020879E0
    // ldr r1, _0222C34C ; =0x0000086C
    // ldr r0, _0222C350 ; =0x000003E7
    // ldr r2, [r4, r1]
    // cmp r2, r0
    // bne _0222C316
    // add r0, r4, #0
    // mov r1, #0xc1
    // bl ov40_0222DFE8
    // add sp, #4
    // pop {r3, r4, r5, r6, pc}
    // ldr r0, _0222C354 ; =0x0000270F
    // cmp r2, r0
    // bne _0222C328
    // ldr r1, _0222C358 ; =0x0000012D
    // add r0, r4, #0
    // bl ov40_0222DFE8
    // add sp, #4
    // pop {r3, r4, r5, r6, pc}
    // add r1, #0x30
    // ldr r0, [r4, r1]
    // cmp r0, #0
    // beq _0222C33C
    // add r0, r4, #0
    // bl ov40_0222DE40
    // ldr r0, _0222C35C ; =0x0000089C
    // mov r1, #0
    // str r1, [r4, r0]
    // add sp, #4
    // pop {r3, r4, r5, r6, pc}
    // _0222C340: .word 0x000006E4
    // _0222C344: .word 0x000005FC
    // _0222C348: .word 0x00000818
    // _0222C34C: .word 0x0000086C
    // _0222C350: .word 0x000003E7
    // _0222C354: .word 0x0000270F
    // _0222C358: .word 0x0000012D
    // _0222C35C: .word 0x0000089C
    // TODO: decompile
}




void ov40_0222C360(void) {
    // push {r3, r4, lr}
    // sub sp, #4
    // add r4, r0, #0
    // add r2, r4, #0
    // ldr r0, _0222C394 ; =0x0000060C
    // mov r1, #0
    // add r2, #0x30
    // add r3, r4, #0
    // add r1, r1, #1
    // str r2, [r3, r0]
    // add r2, r2, #4
    // add r3, #0x28
    // cmp r1, #5
    // blt _0222C370
    // mov r0, #0x6d
    // str r0, [sp]
    // add r0, r4, #0
    // ldr r2, _0222C398 ; =ov40_0222C23C
    // add r0, #0x30
    // mov r1, #5
    // add r3, r4, #0
    // bl TouchHitboxController_Create
    // str r0, [r4, #0x2c]
    // add sp, #4
    // pop {r3, r4, pc}
    // _0222C394: .word 0x0000060C
    // _0222C398: .word ov40_0222C23C
    // TODO: decompile
}




void ov40_0222C39C(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // ldr r1, _0222C428 ; =0x00000818
    // str r0, [sp]
    // ldr r0, [r0, r1]
    // cmp r0, #0
    // beq _0222C424
    // mov r4, #0
    // ldr r5, [sp]
    // str r4, [sp, #4]
    // add r6, r4, #0
    // add r7, sp, #8
    // ldr r1, [sp]
    // ldr r0, _0222C428 ; =0x00000818
    // ldr r0, [r1, r0]
    // ldr r0, [r0, r4]
    // cmp r0, #0
    // bne _0222C3DA
    // ldr r0, _0222C42C ; =0x0000060C
    // ldr r0, [r5, r0]
    // strb r6, [r0]
    // ldr r0, _0222C42C ; =0x0000060C
    // ldr r0, [r5, r0]
    // strb r6, [r0, #1]
    // ldr r0, _0222C42C ; =0x0000060C
    // ldr r0, [r5, r0]
    // strb r6, [r0, #2]
    // ldr r0, _0222C42C ; =0x0000060C
    // ldr r0, [r5, r0]
    // strb r6, [r0, #3]
    // b _0222C416
    // ldr r0, _0222C430 ; =0x000005FC
    // add r1, sp, #8
    // ldr r0, [r5, r0]
    // add r1, #2
    // add r2, sp, #8
    // bl ManagedSprite_GetPositionXY
    // mov r0, #0
    // ldrsh r1, [r7, r0]
    // ldr r0, _0222C42C ; =0x0000060C
    // ldr r0, [r5, r0]
    // sub r1, #0x10
    // strb r1, [r0]
    // mov r0, #0
    // ldrsh r1, [r7, r0]
    // ldr r0, _0222C42C ; =0x0000060C
    // ldr r0, [r5, r0]
    // add r1, #0x10
    // strb r1, [r0, #1]
    // mov r0, #2
    // ldrsh r1, [r7, r0]
    // ldr r0, _0222C42C ; =0x0000060C
    // ldr r0, [r5, r0]
    // strb r1, [r0, #2]
    // mov r0, #2
    // ldrsh r1, [r7, r0]
    // ldr r0, _0222C42C ; =0x0000060C
    // ldr r0, [r5, r0]
    // add r1, #0xa0
    // strb r1, [r0, #3]
    // ldr r0, [sp, #4]
    // add r4, #0x24
    // add r0, r0, #1
    // add r5, #0x28
    // str r0, [sp, #4]
    // cmp r0, #5
    // blt _0222C3B4
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // _0222C428: .word 0x00000818
    // _0222C42C: .word 0x0000060C
    // _0222C430: .word 0x000005FC
    // TODO: decompile
}




void ov40_0222C434(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // mov r6, #0
    // ldr r7, _0222C46C ; =0x0000060C
    // add r5, r0, #0
    // add r4, r6, #0
    // ldr r0, _0222C470 ; =0x000005FC
    // add r1, sp, #0
    // ldr r0, [r5, r0]
    // add r1, #2
    // add r2, sp, #0
    // bl ManagedSprite_GetPositionXY
    // ldr r0, _0222C46C ; =0x0000060C
    // add r6, r6, #1
    // ldr r0, [r5, r0]
    // strb r4, [r0]
    // ldr r0, _0222C46C ; =0x0000060C
    // ldr r0, [r5, r0]
    // strb r4, [r0, #1]
    // ldr r0, _0222C46C ; =0x0000060C
    // ldr r0, [r5, r0]
    // strb r4, [r0, #2]
    // ldr r0, [r5, r7]
    // add r5, #0x28
    // strb r4, [r0, #3]
    // cmp r6, #5
    // blt _0222C43E
    // pop {r3, r4, r5, r6, r7, pc}
    // _0222C46C: .word 0x0000060C
    // _0222C470: .word 0x000005FC
    // TODO: decompile
}




void ov40_0222C474(void) {
}




void ov40_0222C480(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _0222C4B0 ; =0x000006D8
    // ldr r1, [r4, r0]
    // cmp r1, #0
    // ble _0222C492
    // sub r1, r1, #1
    // str r1, [r4, r0]
    // b _0222C49C
    // beq _0222C49C
    // mov r1, #0
    // str r1, [r4, r0]
    // bl GF_AssertFail
    // ldr r0, _0222C4B0 ; =0x000006D8
    // ldr r0, [r4, r0]
    // lsl r0, r0, #2
    // add r1, r4, r0
    // ldr r0, _0222C4B4 ; =0x0000081C
    // ldr r1, [r1, r0]
    // sub r0, r0, #4
    // str r1, [r4, r0]
    // pop {r4, pc}
    // nop
    // _0222C4B0: .word 0x000006D8
    // _0222C4B4: .word 0x0000081C
    // TODO: decompile
}




void ov40_0222C4B8(void) {
    // ldr r1, _0222C4D8 ; =0x00000838
    // mov r3, #0
    // str r3, [r0, r1]
    // mov r2, #0xff
    // add r1, r1, #4
    // str r2, [r0, r1]
    // mov r1, #0x21
    // add r2, r3, #0
    // lsl r1, r1, #6
    // add r3, r3, #1
    // str r2, [r0, r1]
    // add r0, r0, #4
    // cmp r3, #8
    // blt _0222C4CA
    // bx lr
    // nop
    // _0222C4D8: .word 0x00000838
    // TODO: decompile
}




void ov40_0222C4DC(void) {
    // ldr r1, _0222C4E4 ; =0x00000838
    // ldr r0, [r0, r1]
    // bx lr
    // nop
    // _0222C4E4: .word 0x00000838
    // TODO: decompile
}




void ov40_0222C4E8(void) {
    // ldr r2, _0222C4F4 ; =0x00000838
    // mov r3, #1
    // str r3, [r0, r2]
    // add r2, r2, #4
    // str r1, [r0, r2]
    // bx lr
    // _0222C4F4: .word 0x00000838
    // TODO: decompile
}




void ov40_0222C4F8(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharDataFromOpenNarc(*((u32*)(r0 + 0x14)), 0x43, *((u32*)(r0 + 0x24)), 1);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharDataFromOpenNarc(r6, 0x43, r4, 5);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnDataFromOpenNarc(r6, 0x45, r4, 5);
    ov40_0222DB30(r7, 3);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    PaletteData_LoadNarc(r5, 0xbf, r0, 0x6d);
    ov40_0222DB30(r7, 3);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    PaletteData_LoadNarc(r5, 0xbf, r0, 0x6d);
    ov40_0222DB30(r7, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    PaletteData_LoadNarc(r5, 0xbf, r0, 0x6d);
    ov40_0222DB30(r7, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    PaletteData_LoadNarc(r5, 0xbf, r0, 0x6d);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharDataFromOpenNarc(r6, 0x36, r4, 1);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharDataFromOpenNarc(r6, 0x36, r4, 5);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnDataFromOpenNarc(r6, 0x37, r4, 5);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    PaletteData_LoadNarc(r5, 0xbf, 0x35, 0x6d);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    PaletteData_LoadNarc(r5, 0xbf, 0x35, 0x6d);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    PaletteData_LoadNarc(r5, 0xbf, 0x34, 0x6d);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    PaletteData_LoadNarc(r5, 0xbf, 0x34, 0x6d);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnDataFromOpenNarc(r6, 0x46, r4, 5);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnDataFromOpenNarc(r6, 0x46, r4, 1);
    // str r0, [sp]
    PaletteData_BlendPalettes(r5, 1, 2, 0x10);
}




void ov40_0222C6C8(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharDataFromOpenNarc(*((u32*)(r0 + 0x14)), 0x2d, *((u32*)(r0 + 0x24)), r1);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnDataFromOpenNarc(r6, r5, r4, r7);
}




void ov40_0222C710(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharDataFromOpenNarc(*((u32*)(r0 + 0x14)), 0x2d, *((u32*)(r0 + 0x24)), r1);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnDataFromOpenNarc(r4, 1, r5, r6);
}




void ov40_0222C750(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x1c
    // add r1, r0, #0
    // ldr r6, [r1, #0x18]
    // ldr r5, [r1, #0x1c]
    // ldr r7, [r1, #0x28]
    // ldr r1, [r1]
    // str r0, [sp, #0x18]
    // ldr r4, [r0, #0x14]
    // cmp r1, #0
    // bne _0222C7B4
    // mov r1, #2
    // bl ov40_0222DB30
    // str r4, [sp]
    // str r0, [sp, #4]
    // mov r0, #0
    // str r0, [sp, #8]
    // mov r0, #3
    // str r0, [sp, #0xc]
    // mov r0, #1
    // str r0, [sp, #0x10]
    // ldr r0, _0222C87C ; =0x0000270F
    // mov r1, #2
    // str r0, [sp, #0x14]
    // add r0, r7, #0
    // add r2, r6, #0
    // add r3, r5, #0
    // bl SpriteSystem_LoadPaletteBufferFromOpenNarc
    // ldr r0, [sp, #0x18]
    // mov r1, #2
    // bl ov40_0222DB30
    // str r4, [sp]
    // str r0, [sp, #4]
    // mov r0, #0
    // str r0, [sp, #8]
    // mov r1, #3
    // str r1, [sp, #0xc]
    // mov r0, #2
    // str r0, [sp, #0x10]
    // ldr r0, _0222C880 ; =0x00002710
    // add r2, r6, #0
    // str r0, [sp, #0x14]
    // add r0, r7, #0
    // add r3, r5, #0
    // bl SpriteSystem_LoadPaletteBufferFromOpenNarc
    // b _0222C7F6
    // str r4, [sp]
    // mov r0, #0x33
    // str r0, [sp, #4]
    // mov r0, #0
    // str r0, [sp, #8]
    // mov r0, #3
    // str r0, [sp, #0xc]
    // mov r0, #1
    // str r0, [sp, #0x10]
    // ldr r0, _0222C87C ; =0x0000270F
    // mov r1, #2
    // str r0, [sp, #0x14]
    // add r0, r7, #0
    // add r2, r6, #0
    // add r3, r5, #0
    // bl SpriteSystem_LoadPaletteBufferFromOpenNarc
    // str r4, [sp]
    // mov r0, #0x33
    // str r0, [sp, #4]
    // mov r0, #0
    // str r0, [sp, #8]
    // mov r1, #3
    // str r1, [sp, #0xc]
    // mov r0, #2
    // str r0, [sp, #0x10]
    // ldr r0, _0222C880 ; =0x00002710
    // add r2, r6, #0
    // str r0, [sp, #0x14]
    // add r0, r7, #0
    // add r3, r5, #0
    // bl SpriteSystem_LoadPaletteBufferFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // ldr r0, _0222C87C ; =0x0000270F
    // add r1, r5, #0
    // str r0, [sp, #8]
    // add r0, r6, #0
    // add r2, r4, #0
    // mov r3, #0x41
    // bl SpriteSystem_LoadCharResObjFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // ldr r0, _0222C880 ; =0x00002710
    // add r1, r5, #0
    // str r0, [sp, #8]
    // add r0, r6, #0
    // add r2, r4, #0
    // mov r3, #0x41
    // bl SpriteSystem_LoadCharResObjFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, _0222C87C ; =0x0000270F
    // add r1, r5, #0
    // str r0, [sp, #4]
    // add r0, r6, #0
    // add r2, r4, #0
    // mov r3, #0x2e
    // bl SpriteSystem_LoadCellResObjFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, _0222C87C ; =0x0000270F
    // add r1, r5, #0
    // str r0, [sp, #4]
    // add r0, r6, #0
    // add r2, r4, #0
    // mov r3, #0x2f
    // bl SpriteSystem_LoadAnimResObjFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, _0222C880 ; =0x00002710
    // add r1, r5, #0
    // str r0, [sp, #4]
    // add r0, r6, #0
    // add r2, r4, #0
    // mov r3, #0x2e
    // bl SpriteSystem_LoadCellResObjFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, _0222C880 ; =0x00002710
    // add r1, r5, #0
    // str r0, [sp, #4]
    // add r0, r6, #0
    // add r2, r4, #0
    // mov r3, #0x2f
    // bl SpriteSystem_LoadAnimResObjFromOpenNarc
    // add sp, #0x1c
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _0222C87C: .word 0x0000270F
    // _0222C880: .word 0x00002710
    // TODO: decompile
}




void ov40_0222C884(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x80
    // str r0, [sp]
    // ldr r0, [r0, #0x18]
    // add r4, sp, #0x28
    // str r0, [sp, #0x18]
    // ldr r0, [sp]
    // add r2, sp, #0x20
    // ldr r0, [r0, #0x1c]
    // mov r1, #2
    // str r0, [sp, #0x14]
    // mov r0, #0
    // strh r0, [r2, #0x2c]
    // strh r0, [r2, #0x2e]
    // strh r0, [r2, #0x30]
    // strh r0, [r2, #0x32]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x54]
    // mov r0, #1
    // str r0, [sp, #0x5c]
    // ldr r0, [sp, #0x10]
    // ldr r3, _0222CA60 ; =ov40_02244DA8
    // str r0, [sp, #0x7c]
    // str r0, [sp, #0x58]
    // ldr r0, _0222CA64 ; =0x0000270F
    // str r1, [sp, #0x78]
    // str r0, [sp, #0x60]
    // str r0, [sp, #0x64]
    // str r0, [sp, #0x68]
    // str r0, [sp, #0x6c]
    // sub r0, r1, #3
    // str r0, [sp, #0x70]
    // str r0, [sp, #0x74]
    // add r0, sp, #0x40
    // str r0, [sp, #0xc]
    // ldrh r0, [r3, #0x22]
    // ldr r5, _0222CA68 ; =ov40_02244DF0
    // str r4, [sp, #8]
    // strh r0, [r2, #0x20]
    // ldrh r0, [r3, #0x24]
    // add r6, sp, #0x20
    // strh r0, [r2, #0x22]
    // ldrh r0, [r3, #0x26]
    // strh r0, [r2, #0x24]
    // ldrh r0, [r3, #0x28]
    // strh r0, [r2, #0x26]
    // ldrh r0, [r3, #0x2a]
    // strh r0, [r2, #0x28]
    // ldrh r0, [r3, #0x2c]
    // strh r0, [r2, #0x2a]
    // ldmia r5!, {r0, r1}
    // stmia r4!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r4!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r4!, {r0, r1}
    // ldrb r0, [r3]
    // ldr r4, [sp]
    // ldr r1, _0222CA6C ; =0x000006F8
    // strb r0, [r2]
    // ldrb r0, [r3, #1]
    // strb r0, [r2, #1]
    // ldrb r0, [r3, #2]
    // strb r0, [r2, #2]
    // ldrb r0, [r3, #3]
    // strb r0, [r2, #3]
    // ldrb r0, [r3, #4]
    // strb r0, [r2, #4]
    // ldrb r0, [r3, #5]
    // strb r0, [r2, #5]
    // add r0, r4, #0
    // add r0, r0, r1
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x10]
    // mov r1, #3
    // mov r7, #0
    // add r5, r4, #0
    // bl _s32_div_f
    // lsl r0, r1, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #0x1c]
    // cmp r7, #0
    // bne _0222C93C
    // mov r0, #1
    // str r0, [sp, #0x5c]
    // ldr r0, _0222CA64 ; =0x0000270F
    // str r0, [sp, #0x60]
    // str r0, [sp, #0x64]
    // str r0, [sp, #0x68]
    // str r0, [sp, #0x6c]
    // b _0222C94A
    // mov r0, #2
    // str r0, [sp, #0x5c]
    // ldr r0, _0222CA70 ; =0x00002710
    // str r0, [sp, #0x60]
    // str r0, [sp, #0x64]
    // str r0, [sp, #0x68]
    // str r0, [sp, #0x6c]
    // ldr r0, [sp, #0x18]
    // ldr r1, [sp, #0x14]
    // add r2, sp, #0x4c
    // bl SpriteSystem_NewSprite
    // ldr r1, _0222CA6C ; =0x000006F8
    // ldr r2, [sp, #0xc]
    // str r0, [r5, r1]
    // add r0, r1, #0
    // mov r1, #0
    // ldrsh r1, [r2, r1]
    // ldr r0, [r5, r0]
    // mov r2, #0x60
    // bl ov40_0222D288
    // ldr r0, _0222CA6C ; =0x000006F8
    // ldr r0, [r5, r0]
    // bl ManagedSprite_TickFrame
    // ldr r0, _0222CA6C ; =0x000006F8
    // mov r1, #2
    // ldr r0, [r5, r0]
    // bl ManagedSprite_SetAffineOverwriteMode
    // ldr r0, _0222CA6C ; =0x000006F8
    // ldr r1, [sp, #8]
    // mov r2, #0xfe
    // ldr r0, [r5, r0]
    // ldr r1, [r1]
    // lsl r2, r2, #0x16
    // bl ManagedSprite_SetAffineScale
    // mov r0, #0x72
    // mov r1, #0
    // lsl r0, r0, #4
    // str r1, [r4, r0]
    // ldr r1, [sp, #0x1c]
    // sub r0, #0xf
    // strb r1, [r4, r0]
    // ldr r0, _0222CA74 ; =0x00000724
    // mov r1, #0
    // str r1, [r4, r0]
    // ldr r0, [sp, #8]
    // ldr r1, [r0]
    // ldr r0, _0222CA78 ; =0x00000708
    // str r1, [r4, r0]
    // mov r0, #0
    // ldrsb r0, [r6, r0]
    // lsl r1, r0, #1
    // ldr r0, _0222CA7C ; =0x0000071C
    // add r1, #0xa
    // str r1, [r4, r0]
    // ldr r0, [sp, #0x10]
    // cmp r0, #3
    // ldr r0, _0222CA80 ; =0x00000718
    // bge _0222C9CE
    // mov r1, #0
    // str r1, [r4, r0]
    // add r0, r1, #0
    // ldrsb r1, [r6, r0]
    // ldr r0, _0222CA84 ; =0x0000070E
    // add r1, #8
    // strh r1, [r4, r0]
    // mov r1, #0
    // mvn r1, r1
    // b _0222C9E2
    // mov r1, #0
    // str r1, [r4, r0]
    // add r0, r1, #0
    // ldrsb r1, [r6, r0]
    // mov r0, #0xff
    // add r1, #8
    // sub r1, r0, r1
    // ldr r0, _0222CA84 ; =0x0000070E
    // strh r1, [r4, r0]
    // mov r1, #1
    // add r0, r0, #2
    // add r7, r7, #1
    // add r5, r5, #4
    // strb r1, [r4, r0]
    // cmp r7, #2
    // blt _0222C928
    // ldr r0, _0222CA88 ; =ov40_0222D048
    // ldr r1, [sp, #4]
    // mov r2, #5
    // bl SysTask_CreateOnVBlankQueue
    // mov r1, #7
    // lsl r1, r1, #8
    // str r0, [r4, r1]
    // ldr r0, [sp, #0xc]
    // add r4, #0x30
    // add r0, r0, #2
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #8]
    // add r6, r6, #1
    // add r0, r0, #4
    // str r0, [sp, #8]
    // ldr r0, [sp, #4]
    // add r0, #0x30
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x10]
    // add r0, r0, #1
    // str r0, [sp, #0x10]
    // cmp r0, #6
    // bge _0222CA20
    // b _0222C916
    // ldr r0, [sp]
    // sub r1, #0x28
    // ldr r0, [r0, r1]
    // cmp r0, #0
    // beq _0222CA5A
    // ldr r7, _0222CA74 ; =0x00000724
    // ldr r4, [sp]
    // ldr r1, _0222CA6C ; =0x000006F8
    // mov r0, #0
    // add r2, r4, #0
    // add r6, r0, #0
    // add r5, r2, r1
    // ldr r1, [r4, r7]
    // cmp r1, #3
    // beq _0222CA4C
    // mov r0, #7
    // lsl r0, r0, #8
    // ldr r0, [r4, r0]
    // add r1, r5, #0
    // bl ov40_0222D048
    // mov r0, #1
    // add r6, r6, #1
    // add r4, #0x30
    // add r5, #0x30
    // cmp r6, #6
    // blt _0222CA38
    // cmp r0, #0
    // bne _0222CA2C
    // add sp, #0x80
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0222CA60: .word ov40_02244DA8
    // _0222CA64: .word 0x0000270F
    // _0222CA68: .word ov40_02244DF0
    // _0222CA6C: .word 0x000006F8
    // _0222CA70: .word 0x00002710
    // _0222CA74: .word 0x00000724
    // _0222CA78: .word 0x00000708
    // _0222CA7C: .word 0x0000071C
    // _0222CA80: .word 0x00000718
    // _0222CA84: .word 0x0000070E
    // _0222CA88: .word ov40_0222D048
    // TODO: decompile
}




void ov40_0222CA8C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r7, r0, #0
    // mov r0, #0
    // ldr r6, _0222CAB8 ; =0x000006F8
    // str r0, [sp]
    // mov r4, #0
    // add r5, r7, #0
    // ldr r0, [r5, r6]
    // bl Sprite_DeleteAndFreeResources
    // add r4, r4, #1
    // add r5, r5, #4
    // cmp r4, #2
    // blt _0222CA9A
    // ldr r0, [sp]
    // add r7, #0x30
    // add r0, r0, #1
    // str r0, [sp]
    // cmp r0, #6
    // blt _0222CA96
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0222CAB8: .word 0x000006F8
    // TODO: decompile
}




void ov40_0222CABC(void) {
}




void ov40_0222CAD8(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // ldr r1, [r0, #0x14]
    // ldr r7, [r0, #0x1c]
    // str r1, [sp, #0x10]
    // ldr r1, [r0, #0x18]
    // ldr r0, [r0]
    // str r1, [sp, #0xc]
    // cmp r0, #6
    // bhi _0222CB2E
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222CAF8: ; jump table
    // mov r6, #0x3f
    // mov r4, #0x18
    // mov r5, #0x19
    // b _0222CB34
    // mov r6, #0x11
    // mov r4, #0x12
    // mov r5, #0x13
    // b _0222CB34
    // mov r6, #8
    // mov r4, #9
    // mov r5, #0xa
    // b _0222CB34
    // mov r6, #0xb
    // mov r4, #0xc
    // mov r5, #0xd
    // b _0222CB34
    // mov r6, #0xe
    // mov r4, #0xf
    // mov r5, #0x10
    // b _0222CB34
    // mov r6, #0x30
    // mov r4, #0x16
    // mov r5, #0x17
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // ldr r0, _0222CBB8 ; =0x00002711
    // ldr r2, [sp, #0x10]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0xc]
    // add r1, r7, #0
    // add r3, r6, #0
    // bl SpriteSystem_LoadCharResObjFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // ldr r0, _0222CBBC ; =0x00002712
    // ldr r2, [sp, #0x10]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0xc]
    // add r1, r7, #0
    // add r3, r6, #0
    // bl SpriteSystem_LoadCharResObjFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, _0222CBB8 ; =0x00002711
    // ldr r2, [sp, #0x10]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0xc]
    // add r1, r7, #0
    // add r3, r4, #0
    // bl SpriteSystem_LoadCellResObjFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, _0222CBBC ; =0x00002712
    // ldr r2, [sp, #0x10]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0xc]
    // add r1, r7, #0
    // add r3, r4, #0
    // bl SpriteSystem_LoadCellResObjFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, _0222CBB8 ; =0x00002711
    // ldr r2, [sp, #0x10]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0xc]
    // add r1, r7, #0
    // add r3, r5, #0
    // bl SpriteSystem_LoadAnimResObjFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, _0222CBBC ; =0x00002712
    // ldr r2, [sp, #0x10]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0xc]
    // add r1, r7, #0
    // add r3, r5, #0
    // bl SpriteSystem_LoadAnimResObjFromOpenNarc
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // _0222CBB8: .word 0x00002711
    // _0222CBBC: .word 0x00002712
    // TODO: decompile
}




void ov40_0222CBC0(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4, #0x1c]
    // ldr r1, _0222CBD8 ; =0x00002711
    // bl SpriteManager_UnloadCharObjById
    // ldr r0, [r4, #0x1c]
    // ldr r1, _0222CBDC ; =0x00002712
    // bl SpriteManager_UnloadCharObjById
    // pop {r4, pc}
    // nop
    // _0222CBD8: .word 0x00002711
    // _0222CBDC: .word 0x00002712
    // TODO: decompile
}




void ov40_0222CBE0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r0, #0
    // ldr r0, _0222CCA0 ; =0x00000534
    // mov r7, #0
    // add r4, r6, r0
    // add r5, r6, #0
    // mov r2, #0x6e
    // lsl r2, r2, #4
    // ldr r3, [r6, r2]
    // mov r2, #5
    // sub r2, r2, r3
    // lsl r2, r2, #4
    // add r2, #0xd9
    // lsl r2, r2, #0x10
    // ldr r0, [r4]
    // mov r1, #0x32
    // asr r2, r2, #0x10
    // bl ov40_0222D288
    // ldr r0, _0222CCA4 ; =0x00000548
    // mov r1, #0x24
    // add r2, r1, #0
    // ldr r0, [r5, r0]
    // sub r2, #0x2c
    // bl sub_020136B4
    // add r7, r7, #1
    // add r4, #0x28
    // add r5, #0x28
    // cmp r7, #5
    // blt _0222CBEC
    // mov r5, #0
    // add r4, r6, #0
    // add r7, sp, #0
    // ldr r0, _0222CCA8 ; =0x000006D8
    // ldr r0, [r6, r0]
    // cmp r0, #0
    // beq _0222CC9E
    // ldr r0, _0222CCA0 ; =0x00000534
    // add r1, sp, #0
    // ldr r0, [r4, r0]
    // add r1, #2
    // add r2, sp, #0
    // bl ov40_0222D294
    // ldr r0, _0222CCA8 ; =0x000006D8
    // ldr r1, [r6, r0]
    // sub r0, r1, #1
    // cmp r0, r5
    // bne _0222CC54
    // mov r0, #0xa9
    // strh r0, [r7]
    // ldr r0, _0222CCA0 ; =0x00000534
    // mov r1, #1
    // ldr r0, [r4, r0]
    // bl ManagedSprite_SetPaletteOverrideOffset
    // b _0222CC82
    // mov r0, #2
    // ldrsh r0, [r7, r0]
    // sub r1, r1, r5
    // lsl r1, r1, #2
    // sub r0, r0, r1
    // strh r0, [r7, #2]
    // ldr r0, _0222CCA8 ; =0x000006D8
    // mov r2, #5
    // ldr r0, [r6, r0]
    // sub r1, r0, r5
    // sub r0, r1, #1
    // sub r2, r2, r1
    // mov r1, #0x24
    // mul r1, r2
    // lsl r0, r0, #4
    // add r1, #0x19
    // add r0, r0, r1
    // strh r0, [r7]
    // ldr r0, _0222CCA0 ; =0x00000534
    // mov r1, #2
    // ldr r0, [r4, r0]
    // bl ManagedSprite_SetPaletteOverrideOffset
    // ldr r0, _0222CCA0 ; =0x00000534
    // mov r1, #2
    // mov r2, #0
    // ldrsh r1, [r7, r1]
    // ldrsh r2, [r7, r2]
    // ldr r0, [r4, r0]
    // bl ov40_0222D288
    // ldr r0, _0222CCA8 ; =0x000006D8
    // add r5, r5, #1
    // ldr r0, [r6, r0]
    // add r4, #0x28
    // cmp r5, r0
    // blt _0222CC24
    // pop {r3, r4, r5, r6, r7, pc}
    // _0222CCA0: .word 0x00000534
    // _0222CCA4: .word 0x00000548
    // _0222CCA8: .word 0x000006D8
    // TODO: decompile
}




void ov40_0222CCAC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x50
    // add r5, r0, #0
    // ldr r0, _0222CE64 ; =0x00000534
    // mov r1, #0x6e
    // add r4, r5, r0
    // ldr r0, [r5, #0x18]
    // add r2, sp, #0x18
    // str r0, [sp, #0xc]
    // ldr r0, [r5, #0x1c]
    // lsl r1, r1, #4
    // str r0, [sp, #8]
    // ldr r0, [r5, #0x28]
    // str r0, [sp, #4]
    // mov r0, #0x2a
    // strh r0, [r2, #4]
    // ldr r3, [r5, r1]
    // mov r0, #5
    // sub r0, r0, r3
    // lsl r0, r0, #4
    // add r0, #0xc9
    // strh r0, [r2, #6]
    // ldr r1, [r5, r1]
    // cmp r1, #2
    // bne _0222CCE8
    // mov r0, #4
    // sub r0, r0, r1
    // lsl r0, r0, #4
    // add r0, #0xc9
    // strh r0, [r2, #6]
    // mov r0, #0
    // str r0, [sp, #0x10]
    // add r1, r0, #0
    // add r0, sp, #0x18
    // strh r1, [r0, #8]
    // ldr r1, [sp, #0x10]
    // mov r2, #1
    // strh r1, [r0, #0xa]
    // add r0, r1, #0
    // str r1, [sp, #0x4c]
    // ldr r1, _0222CE68 ; =0x00002711
    // str r0, [sp, #0x24]
    // str r1, [sp, #0x30]
    // sub r1, r1, #2
    // mov r0, #3
    // str r0, [sp, #0x48]
    // sub r0, r0, #4
    // str r1, [sp, #0x14]
    // str r1, [sp, #0x34]
    // ldr r1, _0222CE68 ; =0x00002711
    // ldr r6, _0222CE6C ; =ov40_02244DC0
    // ldr r7, [sp, #0x10]
    // str r2, [sp, #0x2c]
    // str r2, [sp, #0x28]
    // str r1, [sp, #0x38]
    // str r1, [sp, #0x3c]
    // str r0, [sp, #0x40]
    // str r0, [sp, #0x44]
    // mov r0, #2
    // str r0, [sp, #0x2c]
    // ldr r0, _0222CE70 ; =0x00002712
    // ldr r1, [sp, #8]
    // str r0, [sp, #0x30]
    // sub r0, r0, #2
    // str r0, [sp, #0x34]
    // ldr r0, _0222CE70 ; =0x00002712
    // add r2, sp, #0x1c
    // str r0, [sp, #0x38]
    // str r0, [sp, #0x3c]
    // ldrb r0, [r6, #5]
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #0xc]
    // bl SpriteSystem_NewSprite
    // str r0, [r4]
    // bl ManagedSprite_TickFrame
    // ldr r0, [r4]
    // mov r1, #1
    // bl ManagedSprite_SetDrawFlag
    // add r2, sp, #0x18
    // mov r1, #4
    // ldrsh r1, [r2, r1]
    // add r3, r2, #0
    // mov r2, #6
    // add r1, #8
    // lsl r1, r1, #0x10
    // ldrsh r2, [r3, r2]
    // ldr r0, [r4]
    // asr r1, r1, #0x10
    // bl ov40_0222D288
    // mov r0, #1
    // str r0, [sp, #0x2c]
    // ldr r0, _0222CE68 ; =0x00002711
    // ldr r1, [sp, #8]
    // str r0, [sp, #0x30]
    // ldr r0, [sp, #0x14]
    // add r2, sp, #0x1c
    // str r0, [sp, #0x34]
    // ldr r0, _0222CE68 ; =0x00002711
    // str r0, [sp, #0x38]
    // str r0, [sp, #0x3c]
    // ldrb r0, [r6]
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #0xc]
    // bl SpriteSystem_NewSprite
    // add r1, r4, #0
    // add r1, #0xc8
    // str r0, [r1]
    // add r0, r4, #0
    // add r0, #0xc8
    // ldr r0, [r0]
    // bl ManagedSprite_TickFrame
    // add r2, sp, #0x18
    // mov r1, #4
    // add r0, r4, #0
    // add r0, #0xc8
    // ldrsh r1, [r2, r1]
    // add r3, r2, #0
    // mov r2, #6
    // ldrsh r2, [r3, r2]
    // ldr r0, [r0]
    // bl ov40_0222D288
    // ldr r1, _0222CE74 ; =0x00000818
    // add r0, r4, #0
    // ldr r1, [r5, r1]
    // add r0, #0xc8
    // ldr r0, [r0]
    // ldr r1, [r1, r7]
    // bl ManagedSprite_SetDrawFlag
    // ldr r0, [sp, #0x10]
    // add r6, r6, #1
    // add r0, r0, #1
    // add r4, #0x28
    // add r7, #0x24
    // str r0, [sp, #0x10]
    // cmp r0, #5
    // blt _0222CD20
    // mov r4, #0
    // add r6, r5, #0
    // add r7, sp, #0x18
    // ldr r0, _0222CE78 ; =0x000006D8
    // ldr r0, [r5, r0]
    // cmp r0, #0
    // beq _0222CE4C
    // ldr r0, _0222CE64 ; =0x00000534
    // add r1, sp, #0x18
    // ldr r0, [r6, r0]
    // add r1, #2
    // add r2, sp, #0x18
    // bl ov40_0222D294
    // ldr r0, _0222CE78 ; =0x000006D8
    // ldr r1, [r5, r0]
    // sub r0, r1, #1
    // cmp r0, r4
    // bne _0222CE02
    // mov r0, #0xa9
    // strh r0, [r7]
    // ldr r0, _0222CE64 ; =0x00000534
    // mov r1, #1
    // ldr r0, [r6, r0]
    // bl ManagedSprite_SetPaletteOverrideOffset
    // b _0222CE30
    // mov r0, #2
    // ldrsh r0, [r7, r0]
    // sub r1, r1, r4
    // lsl r1, r1, #2
    // sub r0, r0, r1
    // strh r0, [r7, #2]
    // ldr r0, _0222CE78 ; =0x000006D8
    // mov r2, #5
    // ldr r0, [r5, r0]
    // sub r1, r0, r4
    // sub r0, r1, #1
    // sub r2, r2, r1
    // mov r1, #0x24
    // mul r1, r2
    // lsl r0, r0, #4
    // add r1, #0x19
    // add r0, r0, r1
    // strh r0, [r7]
    // ldr r0, _0222CE64 ; =0x00000534
    // mov r1, #2
    // ldr r0, [r6, r0]
    // bl ManagedSprite_SetPaletteOverrideOffset
    // ldr r0, _0222CE64 ; =0x00000534
    // mov r1, #2
    // mov r2, #0
    // ldrsh r1, [r7, r1]
    // ldrsh r2, [r7, r2]
    // ldr r0, [r6, r0]
    // bl ov40_0222D288
    // ldr r0, _0222CE78 ; =0x000006D8
    // add r4, r4, #1
    // ldr r0, [r5, r0]
    // add r6, #0x28
    // cmp r4, r0
    // blt _0222CDD2
    // ldr r0, [r5, #0x58]
    // mov r1, #2
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r0, [sp, #4]
    // mov r2, #0xc
    // mov r3, #0x10
    // bl PaletteData_BlendPalettes
    // add sp, #0x50
    // pop {r3, r4, r5, r6, r7, pc}
    // _0222CE64: .word 0x00000534
    // _0222CE68: .word 0x00002711
    // _0222CE6C: .word ov40_02244DC0
    // _0222CE70: .word 0x00002712
    // _0222CE74: .word 0x00000818
    // _0222CE78: .word 0x000006D8
    // TODO: decompile
}




void ov40_0222CE7C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // ldr r0, _0222CED0 ; =0x000005FC
    // mov r4, #0
    // str r4, [sp]
    // add r6, r5, #0
    // add r7, r5, r0
    // ldr r1, _0222CED4 ; =0x00000818
    // ldr r0, _0222CED0 ; =0x000005FC
    // ldr r1, [r5, r1]
    // ldr r0, [r6, r0]
    // ldr r1, [r1, r4]
    // bl ManagedSprite_SetDrawFlag
    // ldr r0, _0222CED4 ; =0x00000818
    // ldr r0, [r5, r0]
    // add r1, r0, r4
    // ldr r0, [r0, r4]
    // cmp r0, #0
    // beq _0222CEBE
    // ldr r0, _0222CED0 ; =0x000005FC
    // ldr r1, [r1, #0xc]
    // ldr r0, [r6, r0]
    // bl ManagedSprite_SetAnim
    // ldr r0, _0222CED4 ; =0x00000818
    // add r1, r7, #0
    // ldr r2, [r5, r0]
    // add r0, r5, #0
    // add r3, r2, r4
    // ldr r2, [r3, #8]
    // bl ov40_0222D3E8
    // ldr r0, [sp]
    // add r4, #0x24
    // add r0, r0, #1
    // add r6, #0x28
    // add r7, #0x28
    // str r0, [sp]
    // cmp r0, #5
    // blt _0222CE8A
    // pop {r3, r4, r5, r6, r7, pc}
    // _0222CED0: .word 0x000005FC
    // _0222CED4: .word 0x00000818
    // TODO: decompile
}




void ov40_0222CED8(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // ldr r7, _0222CF08 ; =0x00000548
    // add r5, r0, #0
    // add r6, r7, #0
    // mov r4, #0
    // sub r6, #0x14
    // ldr r1, _0222CF0C ; =0x000005FC
    // mov r0, #0x61
    // ldr r1, [r5, r1]
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // ldr r1, [r1]
    // bl sub_02013FD0
    // ldr r1, [r5, r6]
    // ldr r0, [r5, r7]
    // ldr r1, [r1]
    // bl sub_02013FD0
    // add r4, r4, #1
    // add r5, #0x28
    // cmp r4, #5
    // blt _0222CEE4
    // pop {r3, r4, r5, r6, r7, pc}
    // _0222CF08: .word 0x00000548
    // _0222CF0C: .word 0x000005FC
    // TODO: decompile
}




void ov40_0222CF10(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r7, r0, #0
    // ldr r0, _0222CF84 ; =0x000006D8
    // ldr r1, [r7, r0]
    // cmp r1, #0
    // beq _0222CF80
    // mov r0, #0
    // str r0, [sp]
    // cmp r1, #0
    // ble _0222CF80
    // ldr r0, _0222CF88 ; =0x00000534
    // add r4, r7, #0
    // add r5, r7, #0
    // add r6, r7, r0
    // ldr r1, _0222CF8C ; =0x000006C4
    // ldr r0, _0222CF88 ; =0x00000534
    // ldr r1, [r4, r1]
    // ldr r0, [r5, r0]
    // ldr r1, [r1, #0xc]
    // bl ManagedSprite_SetAnim
    // ldr r0, _0222CF8C ; =0x000006C4
    // add r1, r6, #0
    // ldr r3, [r4, r0]
    // add r0, r7, #0
    // ldr r2, [r3, #8]
    // bl ov40_0222D3E8
    // ldr r0, _0222CF90 ; =0x00000548
    // mov r1, #0x24
    // add r2, r1, #0
    // ldr r0, [r5, r0]
    // sub r2, #0x2c
    // bl sub_020136B4
    // ldr r0, _0222CF90 ; =0x00000548
    // mov r1, #1
    // ldr r0, [r5, r0]
    // bl TextOBJ_SetSpritesDrawFlag
    // ldr r0, _0222CF88 ; =0x00000534
    // mov r1, #1
    // ldr r0, [r5, r0]
    // bl ManagedSprite_SetDrawFlag
    // ldr r0, [sp]
    // add r4, r4, #4
    // add r0, r0, #1
    // str r0, [sp]
    // ldr r0, _0222CF84 ; =0x000006D8
    // add r5, #0x28
    // ldr r1, [r7, r0]
    // ldr r0, [sp]
    // add r6, #0x28
    // cmp r0, r1
    // blt _0222CF2C
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0222CF84: .word 0x000006D8
    // _0222CF88: .word 0x00000534
    // _0222CF8C: .word 0x000006C4
    // _0222CF90: .word 0x00000548
    // TODO: decompile
}




void ov40_0222CF94(void) {
    // push {r3, r4, r5, lr}
    // ldr r1, _0222CFB8 ; =0x00000534
    // mov r4, #0
    // add r5, r0, r1
    // ldr r0, [r5]
    // bl Sprite_DeleteAndFreeResources
    // add r0, r5, #0
    // add r0, #0xc8
    // ldr r0, [r0]
    // bl Sprite_DeleteAndFreeResources
    // add r4, r4, #1
    // add r5, #0x28
    // cmp r4, #5
    // blt _0222CF9C
    // pop {r3, r4, r5, pc}
    // nop
    // _0222CFB8: .word 0x00000534
    // TODO: decompile
}




void ov40_0222CFBC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // mov r7, #0x15
    // add r5, r0, #0
    // add r4, r1, #0
    // mov r6, #0
    // lsl r7, r7, #6
    // ldr r0, [r5, r7]
    // cmp r0, #0
    // ldr r0, _0222D038 ; =0x00000548
    // bne _0222CFE4
    // ldr r0, [r5, r0]
    // mov r1, #0
    // bl TextOBJ_SetSpritesDrawFlag
    // ldr r0, _0222D03C ; =0x00000534
    // mov r1, #0
    // ldr r0, [r5, r0]
    // bl ManagedSprite_SetDrawFlag
    // b _0222CFF6
    // ldr r0, [r5, r0]
    // add r1, r4, #0
    // bl TextOBJ_SetSpritesDrawFlag
    // ldr r0, _0222D03C ; =0x00000534
    // add r1, r4, #0
    // ldr r0, [r5, r0]
    // bl ManagedSprite_SetDrawFlag
    // ldr r0, _0222D040 ; =0x00000608
    // ldr r0, [r5, r0]
    // cmp r0, #0
    // bne _0222D016
    // mov r0, #0x61
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // mov r1, #0
    // bl TextOBJ_SetSpritesDrawFlag
    // ldr r0, _0222D044 ; =0x000005FC
    // mov r1, #0
    // ldr r0, [r5, r0]
    // bl ManagedSprite_SetDrawFlag
    // b _0222D02C
    // mov r0, #0x61
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // add r1, r4, #0
    // bl TextOBJ_SetSpritesDrawFlag
    // ldr r0, _0222D044 ; =0x000005FC
    // add r1, r4, #0
    // ldr r0, [r5, r0]
    // bl ManagedSprite_SetDrawFlag
    // add r6, r6, #1
    // add r5, #0x28
    // cmp r6, #5
    // blt _0222CFC8
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0222D038: .word 0x00000548
    // _0222D03C: .word 0x00000534
    // _0222D040: .word 0x00000608
    // _0222D044: .word 0x000005FC
    // TODO: decompile
}




void ov40_0222D048(void) {
    // push {r4, lr}
    // sub sp, #0x40
    // add r4, r1, #0
    // ldr r0, [r4, #0x1c]
    // add r0, r0, #1
    // lsr r2, r0, #0x1f
    // lsl r1, r0, #0x1f
    // sub r1, r1, r2
    // mov r0, #0x1f
    // ror r1, r0
    // add r0, r2, r1
    // str r0, [r4, #0x1c]
    // beq _0222D064
    // b _0222D278
    // ldr r0, [r4, #0x2c]
    // cmp r0, #3
    // bls _0222D06C
    // b _0222D246
    // add r1, r0, r0
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _0222D078: ; jump table
    // ldr r1, [r4, #0x28]
    // cmp r1, #3
    // bne _0222D090
    // add r0, r0, #1
    // str r0, [r4, #0x2c]
    // mov r0, #0
    // str r0, [r4, #0x28]
    // b _0222D246
    // add r0, r1, #1
    // str r0, [r4, #0x28]
    // b _0222D246
    // ldr r1, [r4, #0x28]
    // cmp r1, #4
    // bne _0222D0A6
    // add r0, r0, #1
    // str r0, [r4, #0x2c]
    // mov r0, #0
    // str r0, [r4, #0x28]
    // b _0222D246
    // ldr r0, [r4]
    // add r1, sp, #0x24
    // add r2, sp, #0x20
    // bl ManagedSprite_GetSpritePositionFxXY
    // ldr r0, [r4, #4]
    // add r1, sp, #0x1c
    // add r2, sp, #0x18
    // bl ManagedSprite_GetSpritePositionFxXY
    // ldr r1, [r4, #0x20]
    // ldr r0, _0222D27C ; =0x0000FFFF
    // mul r0, r1
    // mov r1, #0x5a
    // lsl r1, r1, #2
    // bl _s32_div_f
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // bl GF_SinDeg
    // mov r1, #0x18
    // ldrsb r1, [r4, r1]
    // ldr r2, [sp, #0x24]
    // neg r1, r1
    // mul r0, r1
    // add r0, r2, r0
    // mov r1, #0x5a
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x1c]
    // ldr r0, [r4, #0x20]
    // lsl r1, r1, #2
    // add r0, #0x20
    // str r0, [r4, #0x20]
    // bl _s32_div_f
    // str r1, [r4, #0x20]
    // ldr r0, [r4]
    // ldr r1, [sp, #0x24]
    // ldr r2, [sp, #0x20]
    // bl ManagedSprite_SetPositonFxXY
    // ldr r0, [r4, #4]
    // ldr r1, [sp, #0x1c]
    // ldr r2, [sp, #0x18]
    // bl ManagedSprite_SetPositonFxXY
    // ldr r0, [r4, #0x28]
    // add r0, r0, #1
    // str r0, [r4, #0x28]
    // b _0222D246
    // ldr r3, _0222D280 ; =ov40_02244DD8
    // add r2, sp, #0x28
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // add r2, sp, #0
    // ldr r0, [r4]
    // add r1, sp, #4
    // add r2, #2
    // bl ManagedSprite_GetPositionXY
    // ldr r0, [r4, #4]
    // add r1, sp, #4
    // add r2, sp, #0
    // bl ManagedSprite_GetPositionXY
    // ldr r1, [r4, #0x28]
    // cmp r1, #0
    // bne _0222D15A
    // mov r0, #0x16
    // ldrsh r2, [r4, r0]
    // add r1, sp, #0
    // mov r0, #4
    // ldrsh r0, [r1, r0]
    // sub r0, r2, r0
    // strh r0, [r4, #0x14]
    // mov r0, #0x14
    // ldrsh r0, [r4, r0]
    // ldr r1, [r4, #0x24]
    // bl _s32_div_f
    // strh r0, [r4, #0x14]
    // ldr r0, [r4, #0x28]
    // add r0, r0, #1
    // str r0, [r4, #0x28]
    // b _0222D194
    // ldr r0, [r4, #0x24]
    // add r0, r0, #1
    // cmp r1, r0
    // bne _0222D180
    // mov r0, #0x16
    // ldrsh r1, [r4, r0]
    // add r0, sp, #0
    // strh r1, [r0, #4]
    // ldrb r0, [r4, #0x19]
    // lsl r1, r0, #2
    // add r0, sp, #0x28
    // ldr r0, [r0, r1]
    // str r0, [r4, #0x20]
    // ldr r0, [r4, #0x2c]
    // add r0, r0, #1
    // str r0, [r4, #0x2c]
    // mov r0, #0
    // str r0, [r4, #0x28]
    // b _0222D194
    // add r1, sp, #0
    // mov r0, #4
    // ldrsh r2, [r1, r0]
    // mov r0, #0x14
    // ldrsh r0, [r4, r0]
    // add r0, r2, r0
    // strh r0, [r1, #4]
    // ldr r0, [r4, #0x28]
    // add r0, r0, #1
    // str r0, [r4, #0x28]
    // add r3, sp, #0
    // mov r1, #4
    // mov r2, #2
    // ldrsh r1, [r3, r1]
    // ldrsh r2, [r3, r2]
    // ldr r0, [r4]
    // bl ManagedSprite_SetPositionXY
    // add r3, sp, #0
    // mov r1, #4
    // mov r2, #0
    // ldrsh r1, [r3, r1]
    // ldrsh r2, [r3, r2]
    // ldr r0, [r4, #4]
    // bl ManagedSprite_SetPositionXY
    // b _0222D246
    // ldr r0, [r4, #0x28]
    // cmp r0, #0
    // bne _0222D1CE
    // add r1, r4, #0
    // ldr r0, [r4]
    // add r1, #0xc
    // add r2, sp, #0x10
    // bl ManagedSprite_GetSpritePositionFxXY
    // ldr r0, [r4, #0x28]
    // add r0, r0, #1
    // str r0, [r4, #0x28]
    // ldr r0, [r4]
    // add r1, sp, #0x14
    // add r2, sp, #0x10
    // bl ManagedSprite_GetSpritePositionFxXY
    // ldr r0, [r4, #4]
    // add r1, sp, #0xc
    // add r2, sp, #8
    // bl ManagedSprite_GetSpritePositionFxXY
    // ldr r1, [r4, #0x20]
    // ldr r0, _0222D27C ; =0x0000FFFF
    // mul r0, r1
    // mov r1, #0x5a
    // lsl r1, r1, #2
    // bl _s32_div_f
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // bl GF_SinDeg
    // mov r2, #0x18
    // ldrsb r2, [r4, r2]
    // ldr r1, [r4, #0xc]
    // neg r3, r2
    // lsl r2, r0, #1
    // add r0, r0, r2
    // mul r0, r3
    // add r0, r1, r0
    // str r0, [sp, #0x14]
    // str r0, [sp, #0xc]
    // ldrb r0, [r4, #0x19]
    // lsr r2, r0, #0x1f
    // lsl r1, r0, #0x1f
    // sub r1, r1, r2
    // mov r0, #0x1f
    // ror r1, r0
    // add r0, r2, r1
    // ldr r0, [r4, #0x20]
    // beq _0222D222
    // sub r0, r0, #4
    // b _0222D224
    // add r0, r0, #4
    // str r0, [r4, #0x20]
    // mov r1, #0x5a
    // ldr r0, [r4, #0x20]
    // lsl r1, r1, #2
    // bl _s32_div_f
    // str r1, [r4, #0x20]
    // ldr r0, [r4]
    // ldr r1, [sp, #0x14]
    // ldr r2, [sp, #0x10]
    // bl ManagedSprite_SetPositonFxXY
    // ldr r0, [r4, #4]
    // ldr r1, [sp, #0xc]
    // ldr r2, [sp, #8]
    // bl ManagedSprite_SetPositonFxXY
    // ldr r0, [r4, #0x2c]
    // cmp r0, #2
    // blt _0222D278
    // ldr r0, [r4, #0x10]
    // ldr r1, _0222D284 ; =0x3DCCCCCD
    // bl _fgr
    // bls _0222D278
    // ldr r0, [r4, #0x10]
    // ldr r1, _0222D284 ; =0x3DCCCCCD
    // bl _fsub
    // str r0, [r4, #0x10]
    // mov r2, #0xfe
    // ldr r0, [r4]
    // ldr r1, [r4, #0x10]
    // lsl r2, r2, #0x16
    // bl ManagedSprite_SetAffineScale
    // mov r2, #0xfe
    // ldr r0, [r4, #4]
    // ldr r1, [r4, #0x10]
    // lsl r2, r2, #0x16
    // bl ManagedSprite_SetAffineScale
    // add sp, #0x40
    // pop {r4, pc}
    // _0222D27C: .word 0x0000FFFF
    // _0222D280: .word ov40_02244DD8
    // _0222D284: .word 0x3DCCCCCD
    // TODO: decompile
}




void ov40_0222D288(void) {
}




void ov40_0222D294(void) {
}




void ov40_0222D2A0(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x7c
    // add r6, r0, #0
    // ldr r0, _0222D3DC ; =ov40_02244DA8
    // ldr r2, [r0, #8]
    // ldr r1, [r0, #0xc]
    // str r2, [sp, #0x2c]
    // str r1, [sp, #0x30]
    // ldr r1, [r0, #0x10]
    // ldr r0, [r0, #0x14]
    // str r1, [sp, #0x24]
    // str r0, [sp, #0x28]
    // mov r0, #0
    // ldr r1, _0222D3E0 ; =0x000005FC
    // str r0, [sp, #0x1c]
    // add r0, r6, r1
    // sub r1, #0xc8
    // str r0, [sp, #0x14]
    // add r0, r6, r1
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x14]
    // ldr r1, _0222D3E4 ; =ov40_02244DC0
    // str r0, [sp, #0x34]
    // ldr r0, [sp, #0x10]
    // add r4, sp, #0x34
    // str r0, [sp, #0x38]
    // mov r0, #0
    // str r0, [sp, #0x18]
    // add r0, sp, #0x24
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x1c]
    // add r5, sp, #0x2c
    // add r0, r1, r0
    // str r0, [sp, #8]
    // add r7, sp, #0x3c
    // add r0, r7, #0
    // bl InitWindow
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [r6, #0x24]
    // add r1, r7, #0
    // mov r2, #0x14
    // mov r3, #2
    // bl AddTextWindowTopLeftCorner
    // add r0, r7, #0
    // mov r1, #0x6d
    // bl sub_02013910
    // ldr r1, [r4]
    // mov r2, #0x6d
    // str r0, [r1, #0x18]
    // ldr r1, [r5]
    // add r0, r7, #0
    // bl sub_02013688
    // ldr r3, [r4]
    // ldr r2, [r5]
    // mov r1, #1
    // add r3, #0x1c
    // bl sub_02021AC8
    // ldr r0, [r4]
    // add r1, sp, #0x20
    // ldr r0, [r0]
    // add r1, #2
    // add r2, sp, #0x20
    // bl ManagedSprite_GetPositionXY
    // ldr r0, [r6, #0x50]
    // str r7, [sp, #0x50]
    // str r0, [sp, #0x4c]
    // ldr r0, [r6, #0x1c]
    // bl SpriteManager_GetSpriteList
    // str r0, [sp, #0x54]
    // ldr r1, [sp, #0xc]
    // ldr r0, [r6, #0x1c]
    // ldr r1, [r1]
    // bl SpriteManager_FindPlttResourceProxy
    // str r0, [sp, #0x58]
    // ldr r0, [r4]
    // add r1, sp, #0x20
    // ldr r0, [r0]
    // ldr r0, [r0]
    // str r0, [sp, #0x5c]
    // ldr r0, [r4]
    // ldr r0, [r0, #0x20]
    // str r0, [sp, #0x60]
    // mov r0, #2
    // ldrsh r0, [r1, r0]
    // add r0, #0x24
    // str r0, [sp, #0x64]
    // mov r0, #0
    // ldrsh r0, [r1, r0]
    // sub r0, #8
    // str r0, [sp, #0x68]
    // mov r0, #3
    // str r0, [sp, #0x6c]
    // ldr r0, [sp, #8]
    // ldrb r0, [r0]
    // sub r0, r0, #1
    // str r0, [sp, #0x70]
    // ldr r0, [r5]
    // str r0, [sp, #0x74]
    // mov r0, #0x6d
    // str r0, [sp, #0x78]
    // ldr r1, [r4]
    // add r0, sp, #0x4c
    // ldr r1, [r1, #0x18]
    // bl TextOBJ_Create
    // ldr r1, [r4]
    // str r0, [r1, #0x14]
    // ldr r0, [r4]
    // mov r1, #1
    // ldr r0, [r0, #0x14]
    // bl sub_020138E0
    // add r0, r7, #0
    // bl RemoveWindow
    // ldr r0, [r4]
    // mov r1, #0
    // ldr r0, [r0, #0x14]
    // bl TextOBJ_SetSpritesDrawFlag
    // ldr r0, [sp, #0xc]
    // add r4, r4, #4
    // add r0, r0, #4
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #8]
    // add r5, r5, #4
    // add r0, r0, #5
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x18]
    // add r0, r0, #1
    // str r0, [sp, #0x18]
    // cmp r0, #2
    // blt _0222D2E6
    // ldr r0, [sp, #0x14]
    // add r0, #0x28
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x10]
    // add r0, #0x28
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x1c]
    // add r0, r0, #1
    // str r0, [sp, #0x1c]
    // cmp r0, #5
    // bge _0222D3D6
    // b _0222D2C8
    // add sp, #0x7c
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _0222D3DC: .word ov40_02244DA8
    // _0222D3E0: .word 0x000005FC
    // _0222D3E4: .word ov40_02244DC0
    // TODO: decompile
}




void ov40_0222D3E8(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x2c
    // add r4, r0, #0
    // add r5, r3, #0
    // str r1, [sp, #0x10]
    // ldr r0, [r4, #0x48]
    // cmp r2, #8
    // bne _0222D478
    // ldr r1, [r5, #0x18]
    // lsl r1, r1, #2
    // add r3, r4, r1
    // ldr r1, _0222D554 ; =0x0000088C
    // ldr r1, [r3, r1]
    // cmp r1, #0
    // bne _0222D410
    // add r1, r2, #0
    // bl NewString_ReadMsgData
    // add r5, r0, #0
    // b _0222D504
    // mov r0, #0x6d
    // bl ov40_0222DAB0
    // add r6, r0, #0
    // ldr r0, [r4, #0x48]
    // mov r1, #7
    // bl NewString_ReadMsgData
    // add r7, r0, #0
    // ldr r0, [r5, #0x18]
    // lsl r0, r0, #2
    // add r1, r4, r0
    // ldr r0, _0222D554 ; =0x0000088C
    // ldr r0, [r1, r0]
    // mov r1, #0x6d
    // bl sub_020315B8
    // str r0, [sp, #0x14]
    // ldr r1, [sp, #0x14]
    // add r0, r4, #0
    // bl ov40_02230DCC
    // mov r0, #0xff
    // mov r1, #0x6d
    // bl String_New
    // add r5, r0, #0
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #2
    // mov r1, #0
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x14]
    // add r0, r6, #0
    // add r3, r1, #0
    // bl BufferString
    // add r0, r6, #0
    // add r1, r5, #0
    // add r2, r7, #0
    // bl StringExpandPlaceholders
    // add r0, r7, #0
    // bl String_Delete
    // ldr r0, [sp, #0x14]
    // bl String_Delete
    // add r0, r6, #0
    // bl MessageFormat_Delete
    // b _0222D504
    // cmp r2, #0x29
    // bne _0222D4FC
    // ldr r1, [r5, #0x18]
    // lsl r1, r1, #2
    // add r3, r4, r1
    // ldr r1, _0222D554 ; =0x0000088C
    // ldr r1, [r3, r1]
    // cmp r1, #0
    // bne _0222D494
    // add r1, r2, #0
    // bl NewString_ReadMsgData
    // add r5, r0, #0
    // b _0222D504
    // mov r0, #0x6d
    // bl ov40_0222DAB0
    // add r6, r0, #0
    // ldr r0, [r4, #0x48]
    // mov r1, #7
    // bl NewString_ReadMsgData
    // add r7, r0, #0
    // ldr r0, [r5, #0x18]
    // lsl r0, r0, #2
    // add r1, r4, r0
    // ldr r0, _0222D554 ; =0x0000088C
    // ldr r0, [r1, r0]
    // mov r1, #0x6d
    // bl sub_020315B8
    // str r0, [sp, #0x18]
    // ldr r1, [sp, #0x18]
    // add r0, r4, #0
    // bl ov40_02230DCC
    // mov r0, #0xff
    // mov r1, #0x6d
    // bl String_New
    // add r5, r0, #0
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #2
    // mov r1, #0
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x18]
    // add r0, r6, #0
    // add r3, r1, #0
    // bl BufferString
    // add r0, r6, #0
    // add r1, r5, #0
    // add r2, r7, #0
    // bl StringExpandPlaceholders
    // add r0, r7, #0
    // bl String_Delete
    // ldr r0, [sp, #0x18]
    // bl String_Delete
    // add r0, r6, #0
    // bl MessageFormat_Delete
    // b _0222D504
    // add r1, r2, #0
    // bl NewString_ReadMsgData
    // add r5, r0, #0
    // add r0, sp, #0x1c
    // bl InitWindow
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [r4, #0x24]
    // add r1, sp, #0x1c
    // mov r2, #0x14
    // mov r3, #2
    // bl AddTextWindowTopLeftCorner
    // mov r1, #0
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0222D558 ; =0x000E0D00
    // add r2, r5, #0
    // str r0, [sp, #8]
    // add r0, sp, #0x1c
    // add r3, r1, #0
    // str r1, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // ldr r0, [sp, #0x10]
    // ldr r1, [sp, #0x10]
    // ldr r0, [r0, #0x14]
    // ldr r1, [r1, #0x18]
    // add r2, sp, #0x1c
    // mov r3, #0x6d
    // bl TextOBJ_CopyFromBGWindow
    // add r0, r5, #0
    // bl String_Delete
    // add r0, sp, #0x1c
    // bl RemoveWindow
    // add sp, #0x2c
    // pop {r4, r5, r6, r7, pc}
    // _0222D554: .word 0x0000088C
    // _0222D558: .word 0x000E0D00
    // TODO: decompile
}




void ov40_0222D55C(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // mov r1, #0
    // str r1, [sp]
    // ldr r1, _0222D5A8 ; =0x000005FC
    // add r7, r0, r1
    // sub r1, #0xc8
    // add r6, r0, r1
    // str r7, [sp, #4]
    // str r6, [sp, #8]
    // mov r4, #0
    // add r5, sp, #4
    // ldr r0, [r5]
    // ldr r0, [r0, #0x18]
    // bl sub_02013938
    // ldr r0, [r5]
    // ldr r0, [r0, #0x14]
    // bl TextOBJ_Destroy
    // ldr r0, [r5]
    // add r0, #0x1c
    // bl sub_02021B5C
    // add r4, r4, #1
    // add r5, r5, #4
    // cmp r4, #2
    // blt _0222D574
    // ldr r0, [sp]
    // add r7, #0x28
    // add r0, r0, #1
    // add r6, #0x28
    // str r0, [sp]
    // cmp r0, #5
    // blt _0222D56C
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _0222D5A8: .word 0x000005FC
    // TODO: decompile
}




void ov40_0222D5AC(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x4c
    // add r7, r2, #0
    // add r5, r0, #0
    // add r4, r1, #0
    // ldr r6, _0222D668 ; =0x0000270F
    // cmp r7, #2
    // bne _0222D5BE
    // add r6, r6, #1
    // add r0, sp, #0xc
    // bl InitWindow
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [r4, #0x10]
    // add r1, sp, #0xc
    // mov r2, #0x14
    // mov r3, #2
    // bl AddTextWindowTopLeftCorner
    // add r0, sp, #0xc
    // mov r1, #0x6d
    // bl sub_02013910
    // str r0, [r5, #0xc]
    // add r0, sp, #0xc
    // add r1, r7, #0
    // mov r2, #0x6d
    // bl sub_02013688
    // add r3, r5, #0
    // mov r1, #1
    // add r2, r7, #0
    // add r3, #0x10
    // bl sub_02021AC8
    // add r1, sp, #8
    // ldr r0, [r5, #4]
    // add r1, #2
    // add r2, sp, #8
    // bl ManagedSprite_GetPositionXY
    // ldr r0, [r4, #0x3c]
    // str r0, [sp, #0x1c]
    // add r0, sp, #0xc
    // str r0, [sp, #0x20]
    // ldr r0, [r4, #8]
    // bl SpriteManager_GetSpriteList
    // str r0, [sp, #0x24]
    // ldr r0, [r4, #8]
    // add r1, r6, #0
    // bl SpriteManager_FindPlttResourceProxy
    // str r0, [sp, #0x28]
    // ldr r0, [r5, #4]
    // add r1, sp, #8
    // ldr r0, [r0]
    // str r0, [sp, #0x2c]
    // ldr r0, [r5, #0x14]
    // str r0, [sp, #0x30]
    // mov r0, #2
    // ldrsh r0, [r1, r0]
    // add r0, #0x24
    // str r0, [sp, #0x34]
    // mov r0, #0
    // ldrsh r1, [r1, r0]
    // sub r1, #8
    // str r0, [sp, #0x40]
    // mov r0, #0x6d
    // str r1, [sp, #0x38]
    // mov r1, #3
    // str r0, [sp, #0x48]
    // str r7, [sp, #0x44]
    // str r1, [sp, #0x3c]
    // ldr r1, [r5, #0xc]
    // add r0, sp, #0x1c
    // bl TextOBJ_Create
    // mov r1, #1
    // str r0, [r5, #8]
    // bl sub_020138E0
    // add r0, sp, #0xc
    // bl RemoveWindow
    // ldr r0, [r5, #8]
    // mov r1, #0
    // bl TextOBJ_SetSpritesDrawFlag
    // add sp, #0x4c
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _0222D668: .word 0x0000270F
    // TODO: decompile
}




void ov40_0222D66C(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x20
    // add r4, r1, #0
    // add r5, r0, #0
    // ldr r0, [r4, #0x34]
    // add r1, r2, #0
    // bl NewString_ReadMsgData
    // add r6, r0, #0
    // add r0, sp, #0x10
    // bl InitWindow
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [r4, #0x10]
    // add r1, sp, #0x10
    // mov r2, #0x14
    // mov r3, #2
    // bl AddTextWindowTopLeftCorner
    // mov r1, #0
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0222D6CC ; =0x000E0D00
    // add r2, r6, #0
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r0, sp, #0x10
    // add r3, r1, #0
    // bl AddTextPrinterParameterizedWithColor
    // ldr r0, [r5, #8]
    // ldr r1, [r5, #0xc]
    // add r2, sp, #0x10
    // mov r3, #0x6d
    // bl TextOBJ_CopyFromBGWindow
    // add r0, r6, #0
    // bl String_Delete
    // add r0, sp, #0x10
    // bl RemoveWindow
    // add sp, #0x20
    // pop {r4, r5, r6, pc}
    // nop
    // _0222D6CC: .word 0x000E0D00
    // TODO: decompile
}




void ov40_0222D6D0(void) {
}




void ov40_0222D6EC(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0xc
    // ldr r6, [r0, #0x14]
    // ldr r4, [r0, #0x18]
    // ldr r5, [r0, #0x1c]
    // mov r0, #0
    // str r0, [sp]
    // str r1, [sp, #4]
    // ldr r0, _0222D738 ; =0x00002E94
    // add r1, r5, #0
    // str r0, [sp, #8]
    // add r0, r4, #0
    // add r2, r6, #0
    // mov r3, #0x31
    // bl SpriteSystem_LoadCharResObjFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, _0222D738 ; =0x00002E94
    // add r1, r5, #0
    // str r0, [sp, #4]
    // add r0, r4, #0
    // add r2, r6, #0
    // mov r3, #0x1a
    // bl SpriteSystem_LoadCellResObjFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, _0222D738 ; =0x00002E94
    // add r1, r5, #0
    // str r0, [sp, #4]
    // add r0, r4, #0
    // add r2, r6, #0
    // mov r3, #0x1b
    // bl SpriteSystem_LoadAnimResObjFromOpenNarc
    // add sp, #0xc
    // pop {r3, r4, r5, r6, pc}
    // _0222D738: .word 0x00002E94
    // TODO: decompile
}




void ov40_0222D73C(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0xc
    // ldr r6, [r0, #0x14]
    // ldr r4, [r0, #0x18]
    // ldr r5, [r0, #0x1c]
    // mov r0, #0
    // str r0, [sp]
    // str r1, [sp, #4]
    // ldr r0, _0222D788 ; =0x00002E94
    // add r1, r5, #0
    // str r0, [sp, #8]
    // add r0, r4, #0
    // add r2, r6, #0
    // mov r3, #0x7a
    // bl SpriteSystem_LoadCharResObjFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, _0222D788 ; =0x00002E94
    // add r1, r5, #0
    // str r0, [sp, #4]
    // add r0, r4, #0
    // add r2, r6, #0
    // mov r3, #0x7b
    // bl SpriteSystem_LoadCellResObjFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, _0222D788 ; =0x00002E94
    // add r1, r5, #0
    // str r0, [sp, #4]
    // add r0, r4, #0
    // add r2, r6, #0
    // mov r3, #0x7c
    // bl SpriteSystem_LoadAnimResObjFromOpenNarc
    // add sp, #0xc
    // pop {r3, r4, r5, r6, pc}
    // _0222D788: .word 0x00002E94
    // TODO: decompile
}




void ov40_0222D78C(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0xc
    // ldr r6, [r0, #0x14]
    // ldr r4, [r0, #0x18]
    // ldr r5, [r0, #0x1c]
    // mov r0, #0
    // str r0, [sp]
    // str r1, [sp, #4]
    // ldr r0, _0222D7D8 ; =0x00002E94
    // add r1, r5, #0
    // str r0, [sp, #8]
    // add r0, r4, #0
    // add r2, r6, #0
    // mov r3, #0x1e
    // bl SpriteSystem_LoadCharResObjFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, _0222D7D8 ; =0x00002E94
    // add r1, r5, #0
    // str r0, [sp, #4]
    // add r0, r4, #0
    // add r2, r6, #0
    // mov r3, #0x20
    // bl SpriteSystem_LoadCellResObjFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, _0222D7D8 ; =0x00002E94
    // add r1, r5, #0
    // str r0, [sp, #4]
    // add r0, r4, #0
    // add r2, r6, #0
    // mov r3, #0x1f
    // bl SpriteSystem_LoadAnimResObjFromOpenNarc
    // add sp, #0xc
    // pop {r3, r4, r5, r6, pc}
    // _0222D7D8: .word 0x00002E94
    // TODO: decompile
}




void ov40_0222D7DC(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4, #0x1c]
    // ldr r1, _0222D7FC ; =0x00002E94
    // bl SpriteManager_UnloadCharObjById
    // ldr r0, [r4, #0x1c]
    // ldr r1, _0222D7FC ; =0x00002E94
    // bl SpriteManager_UnloadCellObjById
    // ldr r0, [r4, #0x1c]
    // ldr r1, _0222D7FC ; =0x00002E94
    // bl SpriteManager_UnloadAnimObjById
    // pop {r4, pc}
    // nop
    // _0222D7FC: .word 0x00002E94
    // TODO: decompile
}




void ov40_0222D800(void) {
    // push {r3, r4, lr}
    // sub sp, #0x34
    // add r2, r0, #0
    // mov r3, #0x80
    // add r0, sp, #0
    // strh r3, [r0]
    // mov r3, #0x60
    // strh r3, [r0, #2]
    // mov r3, #0
    // strh r3, [r0, #4]
    // strh r3, [r0, #6]
    // mov r0, #1
    // str r0, [sp, #8]
    // mov r0, #3
    // str r0, [sp, #0x2c]
    // sub r0, r0, #4
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x28]
    // ldr r0, _0222D868 ; =0x00002E94
    // str r3, [sp, #0xc]
    // str r1, [sp, #0x10]
    // str r3, [sp, #0x30]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x1c]
    // str r0, [sp, #0x20]
    // cmp r1, #1
    // bne _0222D83C
    // ldr r0, _0222D86C ; =0x0000270F
    // str r0, [sp, #0x18]
    // b _0222D840
    // ldr r0, _0222D870 ; =0x00002710
    // str r0, [sp, #0x18]
    // ldr r0, [r2, #0x18]
    // ldr r1, [r2, #0x1c]
    // add r2, sp, #0
    // bl SpriteSystem_NewSprite
    // add r4, r0, #0
    // mov r1, #2
    // bl ManagedSprite_SetPaletteOverride
    // add r0, r4, #0
    // mov r1, #0
    // bl ManagedSprite_SetAnim
    // add r0, r4, #0
    // bl ManagedSprite_TickFrame
    // add r0, r4, #0
    // add sp, #0x34
    // pop {r3, r4, pc}
    // nop
    // _0222D868: .word 0x00002E94
    // _0222D86C: .word 0x0000270F
    // _0222D870: .word 0x00002710
    // TODO: decompile
}




void ov40_0222D874(void) {
}




void ov40_0222D88C(void) {
}




void ov40_0222D8C8(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl ov40_0222CAD8
    // add r0, r4, #0
    // bl ov40_0222C480
    // add r0, r4, #0
    // bl sub_02088030
    // add r0, r4, #0
    // bl ov40_0222CCAC
    // add r0, r4, #0
    // mov r1, #1
    // bl ov40_0222CFBC
    // add r0, r4, #0
    // bl ov40_0222CE7C
    // add r0, r4, #0
    // bl ov40_0222CED8
    // add r0, r4, #0
    // bl ov40_0222CBE0
    // add r0, r4, #0
    // bl ov40_0222CF10
    // ldr r0, _0222D90C ; =0x000006D8
    // ldr r1, [r4, r0]
    // add r1, r1, #1
    // str r1, [r4, r0]
    // pop {r4, pc}
    // _0222D90C: .word 0x000006D8
    // TODO: decompile
}




void ov40_0222D910(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // mov r0, #0
    // str r0, [r5]
    // add r4, r1, #0
    // mov r0, #0x1f
    // str r0, [r4]
    // ldr r0, [sp, #0x20]
    // add r6, r2, #0
    // add r7, r3, #0
    // cmp r0, #0
    // bne _0222D948
    // ldr r0, [r4]
    // add r1, r6, #0
    // str r0, [sp]
    // ldr r0, _0222D978 ; =0x04000050
    // ldr r3, [r5]
    // add r2, r7, #0
    // bl G2x_SetBlendAlpha_
    // ldr r0, [r4]
    // ldr r1, [sp, #0x18]
    // str r0, [sp]
    // ldr r0, _0222D97C ; =0x04001050
    // ldr r2, [sp, #0x1c]
    // ldr r3, [r5]
    // bl G2x_SetBlendAlpha_
    // ldr r0, [sp, #0x20]
    // cmp r0, #1
    // bne _0222D95E
    // ldr r0, [r4]
    // add r1, r6, #0
    // str r0, [sp]
    // ldr r0, _0222D978 ; =0x04000050
    // ldr r3, [r5]
    // add r2, r7, #0
    // bl G2x_SetBlendAlpha_
    // ldr r0, [sp, #0x20]
    // cmp r0, #2
    // bne _0222D974
    // ldr r0, [r4]
    // ldr r1, [sp, #0x18]
    // str r0, [sp]
    // ldr r0, _0222D97C ; =0x04001050
    // ldr r2, [sp, #0x1c]
    // ldr r3, [r5]
    // bl G2x_SetBlendAlpha_
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0222D978: .word 0x04000050
    // _0222D97C: .word 0x04001050
    // TODO: decompile
}




void ov40_0222D980(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // ldr r0, [sp, #0x20]
    // add r4, r1, #0
    // add r6, r2, #0
    // add r7, r3, #0
    // cmp r0, #0
    // bne _0222D9B0
    // ldr r0, [r4]
    // add r1, r6, #0
    // str r0, [sp]
    // ldr r0, _0222D9E0 ; =0x04000050
    // ldr r3, [r5]
    // add r2, r7, #0
    // bl G2x_SetBlendAlpha_
    // ldr r0, [r4]
    // ldr r1, [sp, #0x18]
    // str r0, [sp]
    // ldr r0, _0222D9E4 ; =0x04001050
    // ldr r2, [sp, #0x1c]
    // ldr r3, [r5]
    // bl G2x_SetBlendAlpha_
    // ldr r0, [sp, #0x20]
    // cmp r0, #1
    // bne _0222D9C6
    // ldr r0, [r4]
    // add r1, r6, #0
    // str r0, [sp]
    // ldr r0, _0222D9E0 ; =0x04000050
    // ldr r3, [r5]
    // add r2, r7, #0
    // bl G2x_SetBlendAlpha_
    // ldr r0, [sp, #0x20]
    // cmp r0, #2
    // bne _0222D9DC
    // ldr r0, [r4]
    // ldr r1, [sp, #0x18]
    // str r0, [sp]
    // ldr r0, _0222D9E4 ; =0x04001050
    // ldr r2, [sp, #0x1c]
    // ldr r3, [r5]
    // bl G2x_SetBlendAlpha_
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0222D9E0: .word 0x04000050
    // _0222D9E4: .word 0x04001050
    // TODO: decompile
}




void ov40_0222D9E8(void) {
}




void ov40_0222DA00(void) {
    // push {r4, r5}
    // mov r4, #1
    // cmp r2, #0
    // ldr r2, [r0]
    // bne _0222DA22
    // cmp r2, #8
    // bge _0222DA14
    // add r2, r2, #1
    // str r2, [r0]
    // mov r4, #0
    // ldr r2, [r1]
    // cmp r2, #7
    // ble _0222DA38
    // sub r2, r2, #3
    // str r2, [r1]
    // mov r4, #0
    // b _0222DA38
    // cmp r2, #0
    // ble _0222DA2C
    // sub r2, r2, #1
    // str r2, [r0]
    // mov r4, #0
    // ldr r2, [r1]
    // cmp r2, #0x1f
    // bge _0222DA38
    // add r2, r2, #3
    // str r2, [r1]
    // mov r4, #0
    // cmp r3, #0
    // bne _0222DA54
    // ldr r2, [r1]
    // ldr r5, [r0]
    // lsl r2, r2, #8
    // orr r5, r2
    // ldr r2, _0222DA7C ; =0x04000052
    // strh r5, [r2]
    // ldr r2, [r1]
    // ldr r5, [r0]
    // lsl r2, r2, #8
    // orr r5, r2
    // ldr r2, _0222DA80 ; =0x04001052
    // strh r5, [r2]
    // cmp r3, #1
    // bne _0222DA64
    // ldr r2, [r1]
    // ldr r5, [r0]
    // lsl r2, r2, #8
    // orr r5, r2
    // ldr r2, _0222DA7C ; =0x04000052
    // strh r5, [r2]
    // cmp r3, #2
    // bne _0222DA76
    // ldr r2, [r0]
    // ldr r0, [r1]
    // add r1, r2, #0
    // lsl r0, r0, #8
    // orr r1, r0
    // ldr r0, _0222DA80 ; =0x04001052
    // strh r1, [r0]
    // add r0, r4, #0
    // pop {r4, r5}
    // bx lr
    // _0222DA7C: .word 0x04000052
    // _0222DA80: .word 0x04001052
    // TODO: decompile
}




void ov40_0222DA84(void) {
    // str r1, [r0]
    // str r1, [r0]
}




void ov40_0222DAA8(void) {
}




void ov40_0222DAB0(void) {
    // ldr r3, _0222DABC ; =MessageFormat_New_Custom
    // add r2, r0, #0
    // mov r0, #4
    // mov r1, #0x40
    // bx r3
    // nop
    // _0222DABC: .word MessageFormat_New_Custom
    // TODO: decompile
}




void ov40_0222DAC0(void) {
    // push {r3, r4, r5}
    // sub sp, #0x1c
    // ldr r4, _0222DAEC ; =ov40_02244E5C
    // add r5, r0, #0
    // ldmia r4!, {r0, r1}
    // add r3, sp, #0
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r4]
    // add r5, #0x5c
    // str r0, [r3]
    // ldrb r0, [r5]
    // lsl r0, r0, #2
    // ldr r0, [r2, r0]
    // add sp, #0x1c
    // pop {r3, r4, r5}
    // bx lr
    // nop
    // _0222DAEC: .word ov40_02244E5C
    // TODO: decompile
}




void ov40_0222DAF0(void) {
    // push {r3, r4, r5}
    // sub sp, #0x1c
    // ldr r4, _0222DB28 ; =ov40_02244E94
    // add r5, r0, #0
    // ldmia r4!, {r0, r1}
    // add r3, sp, #0
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r4]
    // str r0, [r3]
    // ldr r0, [r5]
    // cmp r0, #0
    // beq _0222DB1A
    // add sp, #0x1c
    // ldr r0, _0222DB2C ; =0x00007E05
    // pop {r3, r4, r5}
    // bx lr
    // add r5, #0x5c
    // ldrb r0, [r5]
    // lsl r0, r0, #2
    // ldr r0, [r2, r0]
    // add sp, #0x1c
    // pop {r3, r4, r5}
    // bx lr
    // _0222DB28: .word ov40_02244E94
    // _0222DB2C: .word 0x00007E05
    // TODO: decompile
}




void ov40_0222DB30(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x74
    // ldr r4, _0222DBDC ; =ov40_02244EB0
    // add r5, r0, #0
    // add r2, r1, #0
    // add r3, sp, #0x58
    // ldmia r4!, {r0, r1}
    // str r3, [sp]
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r4]
    // ldr r4, _0222DBE0 ; =ov40_02244E40
    // str r0, [r3]
    // add r3, sp, #0x3c
    // ldmia r4!, {r0, r1}
    // mov ip, r3
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r4]
    // ldr r4, _0222DBE4 ; =ov40_02244ECC
    // str r0, [r3]
    // add r3, sp, #0x20
    // ldmia r4!, {r0, r1}
    // add r7, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r4]
    // ldr r4, _0222DBE8 ; =ov40_02244E78
    // str r0, [r3]
    // add r3, sp, #4
    // ldmia r4!, {r0, r1}
    // add r6, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r4]
    // add r5, #0x5c
    // str r0, [r3]
    // ldrb r0, [r5]
    // cmp r2, #3
    // bhi _0222DBD0
    // add r1, r2, r2
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _0222DBA4: ; jump table
    // lsl r1, r0, #2
    // ldr r0, [sp]
    // add sp, #0x74
    // ldr r0, [r0, r1]
    // pop {r4, r5, r6, r7, pc}
    // lsl r1, r0, #2
    // mov r0, ip
    // add sp, #0x74
    // ldr r0, [r0, r1]
    // pop {r4, r5, r6, r7, pc}
    // lsl r0, r0, #2
    // add sp, #0x74
    // ldr r0, [r7, r0]
    // pop {r4, r5, r6, r7, pc}
    // lsl r0, r0, #2
    // add sp, #0x74
    // ldr r0, [r6, r0]
    // pop {r4, r5, r6, r7, pc}
    // bl GF_AssertFail
    // ldr r0, [sp, #0x58]
    // add sp, #0x74
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _0222DBDC: .word ov40_02244EB0
    // _0222DBE0: .word ov40_02244E40
    // _0222DBE4: .word ov40_02244ECC
    // _0222DBE8: .word ov40_02244E78
    // TODO: decompile
}




void ov40_0222DBEC(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x1c
    // add r5, r0, #0
    // ldr r1, [r5, #0x18]
    // ldr r4, [r5, #0x28]
    // str r1, [sp, #0x18]
    // ldr r7, [r5, #0x1c]
    // ldr r6, [r5, #0x14]
    // mov r1, #3
    // bl ov40_0222DB30
    // add r2, r0, #0
    // mov r1, #0
    // mov r0, #0x12
    // str r1, [sp]
    // lsl r0, r0, #4
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // add r0, r4, #0
    // mov r1, #0xbf
    // mov r3, #0x6d
    // bl PaletteData_LoadNarc
    // add r0, r5, #0
    // mov r1, #3
    // bl ov40_0222DB30
    // add r2, r0, #0
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #0x12
    // lsl r0, r0, #4
    // str r0, [sp, #4]
    // mov r0, #0
    // str r0, [sp, #8]
    // add r0, r4, #0
    // mov r1, #0xbf
    // mov r3, #0x6d
    // bl PaletteData_LoadNarc
    // add r0, r5, #0
    // mov r1, #0
    // bl ov40_0222DB30
    // add r2, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #0x20
    // str r0, [sp, #4]
    // mov r0, #0xe0
    // str r0, [sp, #8]
    // add r0, r4, #0
    // mov r1, #0xbf
    // mov r3, #0x6d
    // bl PaletteData_LoadNarc
    // add r0, r5, #0
    // mov r1, #0
    // bl ov40_0222DB30
    // add r2, r0, #0
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #0x20
    // str r0, [sp, #4]
    // mov r0, #0xe0
    // str r0, [sp, #8]
    // add r0, r4, #0
    // mov r1, #0xbf
    // mov r3, #0x6d
    // bl PaletteData_LoadNarc
    // add r1, r5, #0
    // mov r0, #0x6f
    // add r1, #0x5c
    // lsl r0, r0, #4
    // ldrb r1, [r1]
    // ldr r0, [r5, r0]
    // bl sub_0208763C
    // add r1, r5, #0
    // mov r0, #0x6f
    // add r1, #0x5c
    // lsl r0, r0, #4
    // ldrb r1, [r1]
    // ldr r0, [r5, r0]
    // bl sub_0208763C
    // ldr r1, _0222DD00 ; =0x0000270F
    // add r0, r7, #0
    // bl SpriteManager_UnloadPlttObjById
    // ldr r1, _0222DD04 ; =0x00002710
    // add r0, r7, #0
    // bl SpriteManager_UnloadPlttObjById
    // add r0, r5, #0
    // mov r1, #2
    // bl ov40_0222DB30
    // str r6, [sp]
    // str r0, [sp, #4]
    // mov r0, #0
    // str r0, [sp, #8]
    // mov r0, #3
    // str r0, [sp, #0xc]
    // mov r0, #1
    // str r0, [sp, #0x10]
    // ldr r0, _0222DD00 ; =0x0000270F
    // ldr r2, [sp, #0x18]
    // str r0, [sp, #0x14]
    // add r0, r4, #0
    // mov r1, #2
    // add r3, r7, #0
    // bl SpriteSystem_LoadPaletteBufferFromOpenNarc
    // add r0, r5, #0
    // mov r1, #2
    // bl ov40_0222DB30
    // str r6, [sp]
    // str r0, [sp, #4]
    // mov r0, #0
    // str r0, [sp, #8]
    // mov r1, #3
    // str r1, [sp, #0xc]
    // mov r0, #2
    // str r0, [sp, #0x10]
    // ldr r0, _0222DD04 ; =0x00002710
    // ldr r2, [sp, #0x18]
    // str r0, [sp, #0x14]
    // add r0, r4, #0
    // add r3, r7, #0
    // bl SpriteSystem_LoadPaletteBufferFromOpenNarc
    // add sp, #0x1c
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _0222DD00: .word 0x0000270F
    // _0222DD04: .word 0x00002710
    // TODO: decompile
}




void ov40_0222DD08(void) {
    // push {r3, r4, lr}
    // sub sp, #4
    // add r4, r0, #0
    // ldr r0, [r4, #0x58]
    // ldr r2, _0222DD64 ; =0x0000FFFF
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r0, [r4, #0x28]
    // mov r1, #2
    // mov r3, #0
    // bl PaletteData_BlendPalettes
    // ldr r0, [r4, #0x58]
    // mov r1, #0
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r0, [r4, #0x28]
    // ldr r2, _0222DD64 ; =0x0000FFFF
    // add r3, r1, #0
    // bl PaletteData_BlendPalettes
    // ldr r0, [r4, #0x58]
    // ldr r2, _0222DD64 ; =0x0000FFFF
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r0, [r4, #0x28]
    // mov r1, #3
    // mov r3, #0
    // bl PaletteData_BlendPalettes
    // ldr r0, [r4, #0x58]
    // ldr r2, _0222DD64 ; =0x0000FFFF
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r0, [r4, #0x28]
    // mov r1, #1
    // mov r3, #0
    // bl PaletteData_BlendPalettes
    // add sp, #4
    // pop {r3, r4, pc}
    // nop
    // _0222DD64: .word 0x0000FFFF
    // TODO: decompile
}




void ov40_0222DD68(void) {
}




void ov40_0222DD8C(void) {
    // str r1, [r0, r2]
}




void ov40_0222DD94(void) {
    // ldr r0, [r0, r1]
}




void ov40_0222DD9C(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0x14
    // ldr r4, _0222DE34 ; =0x000008A4
    // add r6, r1, #0
    // add r5, r0, #0
    // sub r1, r4, #4
    // ldr r1, [r5, r1]
    // cmp r1, #1
    // beq _0222DE30
    // mov r2, #1
    // sub r1, r4, #4
    // str r2, [r5, r1]
    // mov r1, #6
    // mov r2, #0
    // bl ov40_0222C6C8
    // ldr r0, _0222DE38 ; =0x04001050
    // mov r1, #0
    // strh r1, [r0]
    // mov r0, #6
    // bl SetBgPriority
    // add r0, r5, r4
    // bl InitWindow
    // mov r0, #0x13
    // str r0, [sp]
    // mov r0, #0x1e
    // str r0, [sp, #4]
    // mov r0, #4
    // str r0, [sp, #8]
    // mov r0, #0xe
    // str r0, [sp, #0xc]
    // mov r0, #0x20
    // str r0, [sp, #0x10]
    // ldr r0, [r5, #0x24]
    // add r1, r5, r4
    // mov r2, #6
    // mov r3, #1
    // bl AddWindowParameterized
    // ldr r0, [r5, #0x48]
    // add r1, r6, #0
    // bl NewString_ReadMsgData
    // add r6, r0, #0
    // add r0, r5, r4
    // mov r1, #0xcc
    // bl FillWindowPixelBuffer
    // mov r1, #0
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0222DE3C ; =0x000F0D0C
    // add r2, r6, #0
    // str r0, [sp, #8]
    // add r0, r5, r4
    // add r3, r1, #0
    // str r1, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r5, r4
    // bl ScheduleWindowCopyToVram
    // add r0, r6, #0
    // bl String_Delete
    // bl OS_WaitVBlankIntr
    // mov r0, #4
    // mov r1, #1
    // bl GfGfx_EngineBTogglePlanes
    // add sp, #0x14
    // pop {r3, r4, r5, r6, pc}
    // _0222DE34: .word 0x000008A4
    // _0222DE38: .word 0x04001050
    // _0222DE3C: .word 0x000F0D0C
    // TODO: decompile
}




void ov40_0222DE40(void) {
    // push {r3, r4, lr}
    // sub sp, #4
    // add r4, r0, #0
    // mov r0, #0x8a
    // lsl r0, r0, #4
    // ldr r1, [r4, r0]
    // cmp r1, #0
    // beq _0222DE9C
    // mov r1, #0
    // str r1, [r4, r0]
    // add r0, r0, #4
    // add r0, r4, r0
    // bl ClearWindowTilemapAndCopyToVram
    // ldr r0, _0222DEA0 ; =0x000008A4
    // add r0, r4, r0
    // bl RemoveWindow
    // ldr r0, [r4, #0x24]
    // mov r1, #6
    // bl BgClearTilemapBufferAndCommit
    // mov r0, #4
    // mov r1, #0
    // bl GfGfx_EngineBTogglePlanes
    // mov r0, #6
    // mov r1, #2
    // bl SetBgPriority
    // mov r0, #8
    // str r0, [sp]
    // ldr r0, _0222DEA4 ; =0x04000050
    // mov r1, #4
    // mov r2, #0x12
    // mov r3, #7
    // bl G2x_SetBlendAlpha_
    // mov r0, #8
    // str r0, [sp]
    // ldr r0, _0222DEA8 ; =0x04001050
    // mov r1, #4
    // mov r2, #0x12
    // mov r3, #7
    // bl G2x_SetBlendAlpha_
    // add sp, #4
    // pop {r3, r4, pc}
    // _0222DEA0: .word 0x000008A4
    // _0222DEA4: .word 0x04000050
    // _0222DEA8: .word 0x04001050
    // TODO: decompile
}




void ov40_0222DEAC(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _0222DECC ; =0x000008A4
    // add r0, r4, r0
    // bl ClearWindowTilemapAndCopyToVram
    // ldr r0, _0222DECC ; =0x000008A4
    // add r0, r4, r0
    // bl RemoveWindow
    // mov r0, #4
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // pop {r4, pc}
    // nop
    // _0222DECC: .word 0x000008A4
    // TODO: decompile
}




void ov40_0222DED0(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0x14
    // ldr r4, _0222DF58 ; =0x000008A4
    // add r6, r1, #0
    // add r5, r0, #0
    // sub r1, r4, #4
    // ldr r1, [r5, r1]
    // cmp r1, #1
    // beq _0222DF54
    // mov r2, #1
    // sub r1, r4, #4
    // str r2, [r5, r1]
    // mov r1, #2
    // mov r2, #0
    // bl ov40_0222C6C8
    // mov r0, #4
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // add r0, r5, r4
    // bl InitWindow
    // mov r0, #0x13
    // str r0, [sp]
    // mov r0, #0x1e
    // str r0, [sp, #4]
    // mov r0, #4
    // str r0, [sp, #8]
    // mov r0, #0xe
    // str r0, [sp, #0xc]
    // mov r0, #0x20
    // str r0, [sp, #0x10]
    // ldr r0, [r5, #0x24]
    // add r1, r5, r4
    // mov r2, #2
    // mov r3, #1
    // bl AddWindowParameterized
    // ldr r0, [r5, #0x48]
    // add r1, r6, #0
    // bl NewString_ReadMsgData
    // add r6, r0, #0
    // add r0, r5, r4
    // mov r1, #0xcc
    // bl FillWindowPixelBuffer
    // mov r1, #0
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0222DF5C ; =0x000F0D0C
    // add r2, r6, #0
    // str r0, [sp, #8]
    // add r0, r5, r4
    // add r3, r1, #0
    // str r1, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r5, r4
    // bl ScheduleWindowCopyToVram
    // add r0, r6, #0
    // bl String_Delete
    // add sp, #0x14
    // pop {r3, r4, r5, r6, pc}
    // _0222DF58: .word 0x000008A4
    // _0222DF5C: .word 0x000F0D0C
    // TODO: decompile
}




void ov40_0222DF60(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x10
    // ldr r6, _0222DFA8 ; =0x000008A4
    // add r5, r0, #0
    // sub r0, r6, #4
    // ldr r0, [r5, r0]
    // cmp r0, #0
    // beq _0222DFA4
    // ldr r0, [r5, #0x48]
    // bl NewString_ReadMsgData
    // add r4, r0, #0
    // add r0, r5, r6
    // mov r1, #0xcc
    // bl FillWindowPixelBuffer
    // mov r1, #0
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0222DFAC ; =0x000F0D0C
    // add r2, r4, #0
    // str r0, [sp, #8]
    // add r0, r5, r6
    // add r3, r1, #0
    // str r1, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r5, r6
    // bl ScheduleWindowCopyToVram
    // add r0, r4, #0
    // bl String_Delete
    // add sp, #0x10
    // pop {r4, r5, r6, pc}
    // _0222DFA8: .word 0x000008A4
    // _0222DFAC: .word 0x000F0D0C
    // TODO: decompile
}




void ov40_0222DFB0(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r0, #0x8a
    // lsl r0, r0, #4
    // ldr r1, [r4, r0]
    // cmp r1, #0
    // beq _0222DFE2
    // mov r1, #0
    // str r1, [r4, r0]
    // add r0, r0, #4
    // add r0, r4, r0
    // bl ClearWindowTilemapAndCopyToVram
    // ldr r0, _0222DFE4 ; =0x000008A4
    // add r0, r4, r0
    // bl RemoveWindow
    // ldr r0, [r4, #0x24]
    // mov r1, #2
    // bl BgClearTilemapBufferAndCommit
    // mov r0, #4
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // pop {r4, pc}
    // _0222DFE4: .word 0x000008A4
    // TODO: decompile
}




void ov40_0222DFE8(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0x14
    // ldr r4, _0222E090 ; =0x000008A4
    // add r5, r0, #0
    // sub r0, r4, #4
    // ldr r0, [r5, r0]
    // add r6, r1, #0
    // cmp r0, #1
    // beq _0222E08A
    // add r0, r4, #0
    // sub r0, #8
    // ldr r0, [r5, r0]
    // cmp r0, #1
    // beq _0222E08A
    // mov r1, #1
    // sub r0, r4, #4
    // str r1, [r5, r0]
    // add r0, r4, #0
    // sub r0, #8
    // str r1, [r5, r0]
    // ldr r0, _0222E094 ; =0x04001050
    // mov r1, #0
    // strh r1, [r0]
    // mov r0, #6
    // bl SetBgPriority
    // add r0, r5, #0
    // mov r1, #6
    // mov r2, #0
    // bl ov40_0222C6C8
    // mov r0, #4
    // mov r1, #1
    // bl GfGfx_EngineBTogglePlanes
    // add r0, r5, r4
    // bl InitWindow
    // mov r0, #0x13
    // str r0, [sp]
    // mov r0, #0x1e
    // str r0, [sp, #4]
    // mov r0, #4
    // str r0, [sp, #8]
    // mov r0, #0xe
    // str r0, [sp, #0xc]
    // mov r0, #0x20
    // str r0, [sp, #0x10]
    // ldr r0, [r5, #0x24]
    // add r1, r5, r4
    // mov r2, #6
    // mov r3, #1
    // bl AddWindowParameterized
    // ldr r0, [r5, #0x48]
    // add r1, r6, #0
    // bl NewString_ReadMsgData
    // add r6, r0, #0
    // add r0, r5, r4
    // mov r1, #0xcc
    // bl FillWindowPixelBuffer
    // mov r1, #0
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0222E098 ; =0x000F0D0C
    // add r2, r6, #0
    // str r0, [sp, #8]
    // add r0, r5, r4
    // add r3, r1, #0
    // str r1, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r5, r4
    // bl ScheduleWindowCopyToVram
    // add r0, r6, #0
    // bl String_Delete
    // add sp, #0x14
    // pop {r3, r4, r5, r6, pc}
    // nop
    // _0222E090: .word 0x000008A4
    // _0222E094: .word 0x04001050
    // _0222E098: .word 0x000F0D0C
    // TODO: decompile
}




void ov40_0222E09C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0xd8
    // ldr r3, _0222E428 ; =ov40_02244F40
    // add r7, r1, #0
    // str r0, [sp, #0x14]
    // add r2, sp, #0x88
    // mov r1, #0x28
    // ldrh r0, [r3]
    // add r3, r3, #2
    // strh r0, [r2]
    // add r2, r2, #2
    // sub r1, r1, #1
    // bne _0222E0AA
    // ldr r4, _0222E42C ; =ov40_02244F10
    // add r3, sp, #0x58
    // mov r2, #6
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // sub r2, r2, #1
    // bne _0222E0BC
    // mov r0, #1
    // str r0, [sp, #0x24]
    // mov r0, #0
    // ldr r4, [sp, #0x14]
    // str r0, [sp, #0x28]
    // add r0, sp, #0x58
    // add r4, #0xc
    // str r0, [sp, #0x1c]
    // add r5, sp, #0x88
    // ldr r1, [sp, #0x1c]
    // ldr r0, [r7, #0x48]
    // ldr r1, [r1]
    // bl NewString_ReadMsgData
    // add r6, r0, #0
    // add r0, r4, #0
    // bl InitWindow
    // mov r0, #2
    // ldrsh r0, [r5, r0]
    // mov r3, #0
    // add r1, r4, #0
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp]
    // mov r0, #4
    // ldrsh r0, [r5, r0]
    // mov r2, #2
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #4]
    // mov r0, #6
    // ldrsh r0, [r5, r0]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #8]
    // mov r0, #0xe
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x24]
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp, #0x10]
    // ldrsh r3, [r5, r3]
    // ldr r0, [r7, #0x24]
    // lsl r3, r3, #0x18
    // lsr r3, r3, #0x18
    // bl AddWindowParameterized
    // add r0, r4, #0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // add r0, r4, #0
    // add r1, r6, #0
    // bl ov40_022306C0
    // add r3, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0222E430 ; =0x000F0D00
    // mov r1, #0
    // str r0, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // add r0, r4, #0
    // add r2, r6, #0
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r4, #0
    // bl ScheduleWindowCopyToVram
    // mov r0, #4
    // ldrsh r1, [r5, r0]
    // mov r0, #6
    // ldrsh r0, [r5, r0]
    // add r2, r1, #0
    // mul r2, r0
    // ldr r0, [sp, #0x24]
    // add r0, r0, r2
    // str r0, [sp, #0x24]
    // add r0, r6, #0
    // bl String_Delete
    // ldr r0, [sp, #0x1c]
    // add r4, #0x10
    // add r0, r0, #4
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x28]
    // add r5, #8
    // add r0, r0, #1
    // str r0, [sp, #0x28]
    // cmp r0, #8
    // blt _0222E0D6
    // ldr r0, [sp, #0x14]
    // ldr r0, [r0]
    // str r0, [sp, #0x20]
    // mov r0, #0x6d
    // bl ov40_0222DAB0
    // add r4, r0, #0
    // ldr r5, [sp, #0x14]
    // ldr r0, [sp, #0x20]
    // mov r1, #0x6d
    // add r5, #0xc
    // bl sub_020315B8
    // str r0, [sp, #0x2c]
    // ldr r1, [sp, #0x2c]
    // add r0, r7, #0
    // bl ov40_02230DCC
    // ldr r0, [r7, #0x48]
    // mov r1, #0xd
    // bl NewString_ReadMsgData
    // str r0, [sp, #0x30]
    // mov r0, #0xff
    // mov r1, #0x6d
    // bl String_New
    // add r6, r0, #0
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #2
    // mov r1, #0
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x2c]
    // add r0, r4, #0
    // add r3, r1, #0
    // bl BufferString
    // ldr r2, [sp, #0x30]
    // add r0, r4, #0
    // add r1, r6, #0
    // bl StringExpandPlaceholders
    // add r0, r5, #0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // add r0, r5, #0
    // add r1, r6, #0
    // bl ov40_022306C0
    // mov r1, #0
    // add r3, r0, #0
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0222E430 ; =0x000F0D00
    // add r2, r6, #0
    // str r0, [sp, #8]
    // add r0, r5, #0
    // str r1, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r5, #0
    // bl ScheduleWindowCopyToVram
    // ldr r0, [sp, #0x2c]
    // bl String_Delete
    // ldr r0, [sp, #0x30]
    // bl String_Delete
    // add r0, r6, #0
    // bl String_Delete
    // add r0, r4, #0
    // bl MessageFormat_ResetBuffers
    // ldr r0, [sp, #0x20]
    // bl sub_020316F0
    // str r0, [sp, #0x34]
    // ldr r5, [sp, #0x14]
    // ldr r0, [r7, #0x48]
    // mov r1, #0xf
    // add r5, #0x2c
    // bl NewString_ReadMsgData
    // str r0, [sp, #0x38]
    // ldr r0, [sp, #0x20]
    // mov r1, #0x6d
    // bl sub_020315B8
    // str r0, [sp, #0x3c]
    // ldr r1, [sp, #0x3c]
    // add r0, r7, #0
    // bl ov40_02230DCC
    // mov r0, #0xff
    // mov r1, #0x6d
    // bl String_New
    // add r6, r0, #0
    // ldr r2, [sp, #0x34]
    // add r0, r4, #0
    // mov r1, #0
    // bl BufferMonthNameAbbr
    // ldr r2, [sp, #0x38]
    // add r0, r4, #0
    // add r1, r6, #0
    // bl StringExpandPlaceholders
    // add r0, r5, #0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // add r0, r5, #0
    // add r1, r6, #0
    // bl ov40_022306C0
    // mov r1, #0
    // add r3, r0, #0
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0222E430 ; =0x000F0D00
    // add r2, r6, #0
    // str r0, [sp, #8]
    // add r0, r5, #0
    // str r1, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r5, #0
    // bl ScheduleWindowCopyToVram
    // ldr r0, [sp, #0x38]
    // bl String_Delete
    // ldr r0, [sp, #0x3c]
    // bl String_Delete
    // add r0, r6, #0
    // bl String_Delete
    // add r0, r4, #0
    // bl MessageFormat_ResetBuffers
    // ldr r5, [sp, #0x14]
    // ldr r0, [r7, #0x48]
    // add r5, #0x3c
    // mov r1, #0x10
    // bl NewString_ReadMsgData
    // add r6, r0, #0
    // add r0, r5, #0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // add r0, r5, #0
    // add r1, r6, #0
    // bl ov40_022306C0
    // mov r1, #0
    // add r3, r0, #0
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0222E430 ; =0x000F0D00
    // add r2, r6, #0
    // str r0, [sp, #8]
    // add r0, r5, #0
    // str r1, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r5, #0
    // bl ScheduleWindowCopyToVram
    // add r0, r6, #0
    // bl String_Delete
    // ldr r0, [sp, #0x20]
    // bl sub_02031620
    // add r6, r0, #0
    // ldr r0, [sp, #0x20]
    // bl sub_0203162C
    // ldr r5, [sp, #0x14]
    // str r0, [sp, #0x40]
    // add r5, #0x4c
    // add r0, r5, #0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // cmp r6, #0
    // bne _0222E33C
    // ldr r0, [r7, #0x48]
    // mov r1, #0x15
    // bl NewString_ReadMsgData
    // mov r1, #0
    // add r6, r0, #0
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0222E430 ; =0x000F0D00
    // add r2, r6, #0
    // str r0, [sp, #8]
    // add r0, r5, #0
    // add r3, r1, #0
    // str r1, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r5, #0
    // bl ScheduleWindowCopyToVram
    // add r0, r6, #0
    // bl String_Delete
    // b _0222E3F6
    // mov r0, #0xff
    // mov r1, #0x6d
    // bl String_New
    // str r0, [sp, #0x44]
    // ldr r0, [r7, #0x48]
    // mov r1, #0x16
    // bl NewString_ReadMsgData
    // str r0, [sp, #0x48]
    // add r0, r4, #0
    // mov r1, #0
    // add r2, r6, #0
    // bl BufferCountryName
    // ldr r1, [sp, #0x44]
    // ldr r2, [sp, #0x48]
    // add r0, r4, #0
    // bl StringExpandPlaceholders
    // mov r1, #0
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0222E430 ; =0x000F0D00
    // ldr r2, [sp, #0x44]
    // str r0, [sp, #8]
    // add r0, r5, #0
    // add r3, r1, #0
    // str r1, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r5, #0
    // bl ScheduleWindowCopyToVram
    // ldr r0, [sp, #0x44]
    // bl String_Delete
    // ldr r0, [sp, #0x48]
    // bl String_Delete
    // ldr r0, [sp, #0x40]
    // cmp r0, #0
    // beq _0222E3F6
    // ldr r0, [sp, #0x14]
    // mov r1, #0
    // str r0, [sp, #0x18]
    // add r0, #0x5c
    // str r0, [sp, #0x18]
    // bl FillWindowPixelBuffer
    // mov r0, #0xff
    // mov r1, #0x6d
    // bl String_New
    // add r5, r0, #0
    // ldr r0, [r7, #0x48]
    // mov r1, #0x17
    // bl NewString_ReadMsgData
    // str r0, [sp, #0x4c]
    // ldr r3, [sp, #0x40]
    // add r0, r4, #0
    // mov r1, #0
    // add r2, r6, #0
    // bl BufferCityName
    // ldr r2, [sp, #0x4c]
    // add r0, r4, #0
    // add r1, r5, #0
    // bl StringExpandPlaceholders
    // mov r1, #0
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0222E430 ; =0x000F0D00
    // add r2, r5, #0
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x18]
    // mov r3, #4
    // str r1, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // ldr r0, [sp, #0x18]
    // bl ScheduleWindowCopyToVram
    // add r0, r5, #0
    // bl String_Delete
    // ldr r0, [sp, #0x4c]
    // bl String_Delete
    // add r0, r4, #0
    // bl MessageFormat_ResetBuffers
    // ldr r5, [sp, #0x14]
    // ldr r0, [r7, #0x48]
    // add r5, #0x6c
    // mov r1, #0x11
    // bl NewString_ReadMsgData
    // add r6, r0, #0
    // add r0, r5, #0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // add r0, r5, #0
    // add r1, r6, #0
    // bl ov40_022306C0
    // mov r1, #0
    // add r3, r0, #0
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0222E430 ; =0x000F0D00
    // b _0222E434
    // _0222E428: .word ov40_02244F40
    // _0222E42C: .word ov40_02244F10
    // _0222E430: .word 0x000F0D00
    // add r2, r6, #0
    // str r0, [sp, #8]
    // add r0, r5, #0
    // str r1, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r5, #0
    // bl ScheduleWindowCopyToVram
    // add r0, r6, #0
    // bl String_Delete
    // ldr r0, [sp, #0x14]
    // add r1, sp, #0x50
    // add r0, #0x7c
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x20]
    // mov r2, #0x6d
    // bl sub_0203164C
    // add r5, r0, #0
    // bne _0222E46A
    // add r0, sp, #0x50
    // mov r1, #0x6d
    // bl MailMsg_GetExpandedString
    // add r5, r0, #0
    // ldr r0, [sp, #0x14]
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // mov r1, #0
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0222E4A0 ; =0x000F0D00
    // add r2, r5, #0
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x14]
    // add r3, r1, #0
    // str r1, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // ldr r0, [sp, #0x14]
    // bl ScheduleWindowCopyToVram
    // add r0, r5, #0
    // bl String_Delete
    // add r0, r4, #0
    // bl MessageFormat_Delete
    // add sp, #0xd8
    // pop {r3, r4, r5, r6, r7, pc}
    // _0222E4A0: .word 0x000F0D00
    // TODO: decompile
}




void ov40_0222E4A4(void) {
    // add r5, #0xc
    ClearWindowTilemapAndCopyToVram(r0);
    RemoveWindow(r5);
    // add r5, #0x10
}




void ov40_0222E4C4(void) {
}




void ov40_0222E4D4(void) {
    // push {r3, r4, r5, lr}
    // add r5, r1, #0
    // add r4, r0, #0
    // ldr r0, [r5, #0x1c]
    // ldr r1, _0222E50C ; =0x000186A0
    // bl SpriteManager_UnloadCharObjById
    // ldr r0, [r5, #0x1c]
    // ldr r1, _0222E50C ; =0x000186A0
    // bl SpriteManager_UnloadPlttObjById
    // ldr r0, [r5, #0x1c]
    // ldr r1, _0222E50C ; =0x000186A0
    // bl SpriteManager_UnloadCellObjById
    // ldr r0, [r5, #0x1c]
    // ldr r1, _0222E50C ; =0x000186A0
    // bl SpriteManager_UnloadAnimObjById
    // ldr r0, [r4, #4]
    // cmp r0, #0
    // beq _0222E508
    // bl Sprite_DeleteAndFreeResources
    // mov r0, #0
    // str r0, [r4, #4]
    // pop {r3, r4, r5, pc}
    // nop
    // _0222E50C: .word 0x000186A0
    // TODO: decompile
}




void ov40_0222E510(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x5c
    // add r5, r0, #0
    // add r0, r1, #0
    // ldr r6, [r1, #0x18]
    // ldr r4, [r0, #0x1c]
    // ldr r7, [r0, #0x28]
    // str r1, [sp, #0x18]
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
    // ldr r0, _0222E614 ; =0x000186A0
    // mov r1, #2
    // str r0, [sp, #0x14]
    // add r0, r7, #0
    // add r2, r6, #0
    // add r3, r4, #0
    // bl SpriteSystem_LoadPaletteBuffer
    // str r0, [sp, #0x1c]
    // bl sub_0207449C
    // add r3, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, _0222E614 ; =0x000186A0
    // add r1, r4, #0
    // str r0, [sp, #4]
    // add r0, r6, #0
    // mov r2, #0x14
    // bl SpriteSystem_LoadCellResObj
    // bl sub_020744A8
    // add r3, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, _0222E614 ; =0x000186A0
    // add r1, r4, #0
    // str r0, [sp, #4]
    // add r0, r6, #0
    // mov r2, #0x14
    // bl SpriteSystem_LoadAnimResObj
    // ldr r0, [r5]
    // bl sub_020315E0
    // add r7, r0, #0
    // ldr r0, [r5]
    // bl sub_020315F0
    // str r0, [sp, #0x20]
    // ldr r0, [r5]
    // bl sub_02031610
    // str r0, [sp, #0x24]
    // cmp r7, #0
    // beq _0222E610
    // ldr r1, [sp, #0x24]
    // ldr r2, [sp, #0x20]
    // add r0, r7, #0
    // bl GetMonIconNaixEx
    // add r3, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // ldr r0, _0222E614 ; =0x000186A0
    // add r1, r4, #0
    // str r0, [sp, #8]
    // add r0, r6, #0
    // mov r2, #0x14
    // bl SpriteSystem_LoadCharResObjAtEndWithHardwareMappingType
    // mov r1, #0x4c
    // add r0, sp, #0x28
    // strh r1, [r0]
    // mov r1, #0x3c
    // strh r1, [r0, #2]
    // mov r2, #0
    // strh r2, [r0, #4]
    // strh r2, [r0, #6]
    // ldr r0, _0222E614 ; =0x000186A0
    // mov r1, #1
    // str r0, [sp, #0x3c]
    // str r0, [sp, #0x40]
    // str r0, [sp, #0x44]
    // str r0, [sp, #0x48]
    // sub r0, r1, #2
    // str r1, [sp, #0x38]
    // str r0, [sp, #0x4c]
    // str r0, [sp, #0x50]
    // ldr r0, [sp, #0x18]
    // ldr r1, [sp, #0x18]
    // str r2, [sp, #0x30]
    // str r2, [sp, #0x34]
    // str r2, [sp, #0x54]
    // str r2, [sp, #0x58]
    // ldr r0, [r0, #0x18]
    // ldr r1, [r1, #0x1c]
    // add r2, sp, #0x28
    // bl SpriteSystem_NewSprite
    // str r0, [r5, #4]
    // ldr r1, [sp, #0x20]
    // ldr r2, [sp, #0x24]
    // add r0, r7, #0
    // bl GetMonIconPaletteEx
    // add r2, r0, #0
    // ldr r1, [sp, #0x1c]
    // ldr r0, [r5, #4]
    // add r1, r1, r2
    // bl ManagedSprite_SetPaletteOverrideOffset
    // ldr r0, [r5, #4]
    // mov r1, #1
    // bl ManagedSprite_SetAnim
    // add sp, #0x5c
    // pop {r4, r5, r6, r7, pc}
    // _0222E614: .word 0x000186A0
    // TODO: decompile
}




void ov40_0222E618(void) {
}




void ov40_0222E624(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // ldr r0, [r4, #0x1c]
    // ldr r1, _0222E654 ; =0x0002869F
    // bl SpriteManager_UnloadCharObjById
    // ldr r0, [r4, #0x1c]
    // ldr r1, _0222E654 ; =0x0002869F
    // bl SpriteManager_UnloadPlttObjById
    // ldr r0, [r4, #0x1c]
    // ldr r1, _0222E654 ; =0x0002869F
    // bl SpriteManager_UnloadCellObjById
    // ldr r0, [r4, #0x1c]
    // ldr r1, _0222E654 ; =0x0002869F
    // bl SpriteManager_UnloadAnimObjById
    // ldr r0, [r5, #8]
    // bl Sprite_DeleteAndFreeResources
    // pop {r3, r4, r5, pc}
    // nop
    // _0222E654: .word 0x0002869F
    // TODO: decompile
}




void ov40_0222E658(void) {
    // push {r4, lr}
    // add r4, r1, #0
    // cmp r0, #0x10
    // bgt _0222E664
    // cmp r0, #0
    // bge _0222E66A
    // bl GF_AssertFail
    // mov r0, #0
    // cmp r4, #4
    // bne _0222E676
    // mov r1, #0x4f
    // lsl r1, r1, #2
    // add r0, r0, r1
    // pop {r4, pc}
    // cmp r4, #5
    // blt _0222E67E
    // mov r0, #0
    // pop {r4, pc}
    // lsl r2, r0, #4
    // ldr r0, _0222E68C ; =ov40_02244FF0
    // lsl r1, r4, #2
    // add r0, r0, r2
    // ldr r0, [r1, r0]
    // pop {r4, pc}
    // nop
    // _0222E68C: .word ov40_02244FF0
    // TODO: decompile
}




void ov40_0222E690(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x5c
    // add r5, r0, #0
    // mov r0, #0xe
    // str r0, [sp, #0x20]
    // ldr r0, [r5]
    // str r1, [sp, #0x18]
    // mov r7, #0xd
    // bl sub_020315D0
    // ldr r1, [sp, #0x18]
    // ldr r2, _0222E794 ; =0x0000086C
    // ldr r6, [r1, #0x18]
    // ldr r4, [r1, #0x1c]
    // ldr r1, [r1, #0x28]
    // str r1, [sp, #0x24]
    // ldr r1, [sp, #0x18]
    // ldr r1, [r1, r2]
    // cmp r1, #0
    // bne _0222E6C4
    // cmp r0, #1
    // bne _0222E6E8
    // mov r0, #0x10
    // mov r7, #0xf
    // str r0, [sp, #0x20]
    // b _0222E6E8
    // ldr r0, [r5]
    // bl sub_02031700
    // str r0, [sp, #0x1c]
    // cmp r0, #0x10
    // blt _0222E6D4
    // mov r0, #0
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x1c]
    // mov r1, #2
    // bl ov40_0222E658
    // add r7, r0, #0
    // ldr r0, [sp, #0x1c]
    // mov r1, #3
    // bl ov40_0222E658
    // str r0, [sp, #0x20]
    // mov r0, #0xb3
    // str r0, [sp]
    // str r7, [sp, #4]
    // mov r0, #0
    // str r0, [sp, #8]
    // mov r0, #1
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r0, _0222E798 ; =0x0002869F
    // mov r1, #2
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x24]
    // add r2, r6, #0
    // add r3, r4, #0
    // bl SpriteSystem_LoadPaletteBuffer
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, _0222E798 ; =0x0002869F
    // add r1, r4, #0
    // str r0, [sp, #4]
    // add r0, r6, #0
    // mov r2, #0xb3
    // mov r3, #9
    // bl SpriteSystem_LoadCellResObj
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, _0222E798 ; =0x0002869F
    // add r1, r4, #0
    // str r0, [sp, #4]
    // add r0, r6, #0
    // mov r2, #0xb3
    // mov r3, #0xa
    // bl SpriteSystem_LoadAnimResObj
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // ldr r0, _0222E798 ; =0x0002869F
    // ldr r3, [sp, #0x20]
    // str r0, [sp, #8]
    // add r0, r6, #0
    // add r1, r4, #0
    // mov r2, #0xb3
    // bl SpriteSystem_LoadCharResObjAtEndWithHardwareMappingType
    // mov r1, #0x28
    // add r0, sp, #0x28
    // strh r1, [r0]
    // mov r1, #0x3c
    // strh r1, [r0, #2]
    // mov r2, #0
    // strh r2, [r0, #4]
    // strh r2, [r0, #6]
    // ldr r0, _0222E798 ; =0x0002869F
    // mov r1, #1
    // str r0, [sp, #0x3c]
    // str r0, [sp, #0x40]
    // str r0, [sp, #0x44]
    // str r0, [sp, #0x48]
    // sub r0, r1, #2
    // str r1, [sp, #0x38]
    // str r0, [sp, #0x4c]
    // str r0, [sp, #0x50]
    // ldr r0, [sp, #0x18]
    // ldr r1, [sp, #0x18]
    // str r2, [sp, #0x30]
    // str r2, [sp, #0x34]
    // str r2, [sp, #0x54]
    // str r2, [sp, #0x58]
    // ldr r0, [r0, #0x18]
    // ldr r1, [r1, #0x1c]
    // add r2, sp, #0x28
    // bl SpriteSystem_NewSprite
    // str r0, [r5, #8]
    // mov r1, #1
    // bl ManagedSprite_SetAnim
    // ldr r0, [r5, #8]
    // bl ManagedSprite_TickFrame
    // add sp, #0x5c
    // pop {r4, r5, r6, r7, pc}
    // _0222E794: .word 0x0000086C
    // _0222E798: .word 0x0002869F
    // TODO: decompile
}




void ov40_0222E79C(void) {
}




void ov40_0222E7B8(void) {
}




void ov40_0222E7DC(void) {
}




void ov40_0222E7F0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x18
    // add r5, r0, #0
    // ldr r0, _0222E8BC ; =0x0000088C
    // add r4, r1, #0
    // ldr r0, [r4, r0]
    // bl sub_02031620
    // str r0, [sp, #0x10]
    // ldr r0, _0222E8BC ; =0x0000088C
    // ldr r0, [r4, r0]
    // bl sub_0203162C
    // add r6, r0, #0
    // ldr r0, [sp, #0x10]
    // add r5, #0x18
    // cmp r0, #0
    // bne _0222E824
    // cmp r6, #0
    // bne _0222E824
    // ldr r0, [r4, #0x48]
    // mov r1, #0x7d
    // bl NewString_ReadMsgData
    // str r0, [sp, #0x14]
    // b _0222E890
    // mov r0, #0x6d
    // bl ov40_0222DAB0
    // add r7, r0, #0
    // cmp r6, #0
    // beq _0222E85C
    // mov r0, #0xff
    // mov r1, #0x6d
    // bl String_New
    // str r0, [sp, #0x14]
    // ldr r0, [r4, #0x48]
    // mov r1, #0x17
    // bl NewString_ReadMsgData
    // add r4, r0, #0
    // ldr r2, [sp, #0x10]
    // add r0, r7, #0
    // mov r1, #0
    // add r3, r6, #0
    // bl BufferCityName
    // ldr r1, [sp, #0x14]
    // add r0, r7, #0
    // add r2, r4, #0
    // bl StringExpandPlaceholders
    // b _0222E884
    // mov r0, #0xff
    // mov r1, #0x6d
    // bl String_New
    // str r0, [sp, #0x14]
    // ldr r0, [r4, #0x48]
    // mov r1, #0x16
    // bl NewString_ReadMsgData
    // add r4, r0, #0
    // ldr r2, [sp, #0x10]
    // add r0, r7, #0
    // mov r1, #0
    // bl BufferCountryName
    // ldr r1, [sp, #0x14]
    // add r0, r7, #0
    // add r2, r4, #0
    // bl StringExpandPlaceholders
    // add r0, r4, #0
    // bl String_Delete
    // add r0, r7, #0
    // bl MessageFormat_Delete
    // mov r0, #0x10
    // str r0, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0222E8C0 ; =0x000F0D00
    // mov r1, #0
    // str r0, [sp, #8]
    // ldr r2, [sp, #0x14]
    // add r0, r5, #0
    // add r3, r1, #0
    // str r1, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r5, #0
    // bl ScheduleWindowCopyToVram
    // ldr r0, [sp, #0x14]
    // bl String_Delete
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0222E8BC: .word 0x0000088C
    // _0222E8C0: .word 0x000F0D00
    // TODO: decompile
}




void ov40_0222E8C4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x20
    // add r5, r0, #0
    // str r0, [sp, #0x18]
    // add r0, #0x18
    // add r4, r2, #0
    // str r0, [sp, #0x18]
    // ldr r0, [r4, #4]
    // str r1, [sp, #0x14]
    // str r0, [r5, #4]
    // mov r0, #0
    // str r0, [r5]
    // str r0, [r5, #0xc]
    // ldr r0, [r4, #0x24]
    // str r0, [r5, #0x10]
    // str r4, [r5, #0x28]
    // add r0, r1, #0
    // ldr r0, [r0, #0x48]
    // str r0, [r5, #0x34]
    // ldr r0, [r5, #4]
    // ldr r1, [r5, #0x10]
    // bl _s32_div_f
    // add r0, r0, #1
    // str r0, [r5, #0x14]
    // ldr r1, [r5, #4]
    // ldr r0, [r5, #0x10]
    // cmp r1, r0
    // bge _0222E90A
    // str r1, [r5, #0x10]
    // sub r0, r1, #1
    // str r0, [r5, #0x40]
    // ldr r0, [r5, #0x10]
    // sub r0, r0, #1
    // str r0, [r5, #0x44]
    // ldr r0, [sp, #0x18]
    // bl InitWindow
    // ldr r0, [r4, #0x10]
    // ldr r1, [sp, #0x18]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp]
    // ldr r0, [r4, #0x14]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #4]
    // ldr r0, [r4, #0x18]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #8]
    // mov r0, #0xe
    // str r0, [sp, #0xc]
    // ldr r0, [r4, #0x1c]
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x14]
    // ldr r2, [r4, #0x20]
    // ldr r3, [r4, #0xc]
    // lsl r2, r2, #0x18
    // lsl r3, r3, #0x18
    // ldr r0, [r0, #0x24]
    // lsr r2, r2, #0x18
    // lsr r3, r3, #0x18
    // bl AddWindowParameterized
    // ldr r0, [sp, #0x18]
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // ldr r0, [r5, #0x10]
    // mov r7, #0
    // cmp r0, #0
    // ble _0222E9A8
    // add r6, r7, #0
    // ldr r1, [r4]
    // ldr r0, [r5, #0x34]
    // ldr r1, [r1, r6]
    // bl NewString_ReadMsgData
    // str r0, [sp, #0x1c]
    // ldr r0, [r4, #8]
    // mov r1, #0
    // lsl r0, r0, #4
    // mul r0, r7
    // str r0, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0222E9B4 ; =0x000F0D00
    // ldr r2, [sp, #0x1c]
    // str r0, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x18]
    // add r3, r1, #0
    // bl AddTextPrinterParameterizedWithColor
    // ldr r0, [sp, #0x1c]
    // bl String_Delete
    // ldr r0, [r4]
    // ldr r0, [r0, r6]
    // cmp r0, #0x10
    // bne _0222E99E
    // ldr r1, [sp, #0x14]
    // add r0, r5, #0
    // bl ov40_0222E7F0
    // ldr r0, [r5, #0x10]
    // add r7, r7, #1
    // add r6, #0x10
    // cmp r7, r0
    // blt _0222E95C
    // ldr r0, [sp, #0x18]
    // bl ScheduleWindowCopyToVram
    // add sp, #0x20
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0222E9B4: .word 0x000F0D00
    // TODO: decompile
}




void ov40_0222E9B8(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x30
    // add r4, r0, #0
    // str r0, [sp, #0x20]
    // add r0, #0x18
    // add r5, r3, #0
    // str r0, [sp, #0x20]
    // ldr r0, [r5, #4]
    // str r1, [sp, #0x14]
    // str r0, [r4, #4]
    // mov r0, #0
    // str r0, [r4]
    // str r0, [r4, #0xc]
    // ldr r0, [r5, #0x24]
    // cmp r2, #0
    // str r0, [r4, #0x10]
    // str r5, [r4, #0x28]
    // beq _0222E9E0
    // str r2, [r4, #0x34]
    // b _0222E9E6
    // add r0, r1, #0
    // ldr r0, [r0, #0x48]
    // str r0, [r4, #0x34]
    // ldr r0, [r4, #4]
    // ldr r1, [r4, #0x10]
    // bl _s32_div_f
    // add r0, r0, #1
    // str r0, [r4, #0x14]
    // ldr r1, [r4, #0x10]
    // lsr r0, r1, #0x1f
    // add r0, r1, r0
    // asr r0, r0, #1
    // str r0, [r4, #0x40]
    // ldr r1, [r4, #0x10]
    // lsr r0, r1, #0x1f
    // add r0, r1, r0
    // asr r0, r0, #1
    // str r0, [r4, #0x44]
    // ldr r1, [r4, #4]
    // ldr r0, [r4, #0x10]
    // cmp r1, r0
    // bge _0222EA1A
    // str r1, [r4, #0x10]
    // sub r0, r1, #1
    // str r0, [r4, #0x40]
    // ldr r0, [r4, #0x10]
    // sub r0, r0, #1
    // str r0, [r4, #0x44]
    // ldr r0, [sp, #0x20]
    // bl InitWindow
    // ldr r0, [r5, #0x10]
    // ldr r1, [sp, #0x20]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp]
    // ldr r0, [r5, #0x14]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #4]
    // ldr r0, [r5, #0x18]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #8]
    // mov r0, #0xe
    // str r0, [sp, #0xc]
    // ldr r0, [r5, #0x1c]
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x14]
    // ldr r2, [r5, #0x20]
    // ldr r3, [r5, #0xc]
    // lsl r2, r2, #0x18
    // lsl r3, r3, #0x18
    // ldr r0, [r0, #0x24]
    // lsr r2, r2, #0x18
    // lsr r3, r3, #0x18
    // bl AddWindowParameterized
    // ldr r0, [sp, #0x20]
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // ldr r0, [r5]
    // cmp r0, #0
    // beq _0222EAB0
    // ldr r0, [r4, #0x10]
    // mov r6, #0
    // cmp r0, #0
    // ble _0222EAAE
    // add r7, r6, #0
    // ldr r1, [r5]
    // ldr r0, [r4, #0x34]
    // ldr r1, [r1, r7]
    // bl NewString_ReadMsgData
    // str r0, [sp, #0x24]
    // ldr r0, [r5, #8]
    // mov r1, #0
    // lsl r0, r0, #4
    // mul r0, r6
    // str r0, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0222EB94 ; =0x000F0D00
    // ldr r2, [sp, #0x24]
    // str r0, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x20]
    // add r3, r1, #0
    // bl AddTextPrinterParameterizedWithColor
    // ldr r0, [sp, #0x24]
    // bl String_Delete
    // ldr r0, [r4, #0x10]
    // add r6, r6, #1
    // add r7, #0x10
    // cmp r6, r0
    // blt _0222EA72
    // b _0222EB8A
    // mov r0, #0
    // str r0, [sp, #0x18]
    // ldr r0, [r4, #0x10]
    // cmp r0, #0
    // ble _0222EB8A
    // ldr r0, [sp, #0x14]
    // mov r5, #4
    // str r0, [sp, #0x1c]
    // mov r0, #0xff
    // mov r1, #0x6d
    // bl String_New
    // add r7, r0, #0
    // mov r0, #0xff
    // mov r1, #0x6d
    // bl String_New
    // str r0, [sp, #0x2c]
    // ldr r0, [sp, #0x14]
    // mov r1, #0x63
    // ldr r0, [r0, #0x48]
    // bl NewString_ReadMsgData
    // str r0, [sp, #0x28]
    // mov r0, #1
    // ldr r1, [sp, #0x18]
    // str r0, [sp]
    // ldr r0, [sp, #0x2c]
    // add r1, r1, #1
    // mov r2, #2
    // mov r3, #1
    // bl String16_FormatInteger
    // ldr r2, [sp, #0x1c]
    // ldr r1, _0222EB98 ; =0x00002608
    // add r0, r7, #0
    // ldr r1, [r2, r1]
    // bl CopyU16ArrayToString
    // ldr r0, [sp, #0x14]
    // add r1, r7, #0
    // bl ov40_02230DCC
    // mov r0, #0
    // ldr r1, [sp, #0x2c]
    // add r2, r0, #0
    // bl FontID_String_GetWidth
    // mov ip, r0
    // str r5, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0222EB94 ; =0x000F0D00
    // ldr r2, [sp, #0x2c]
    // str r0, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x20]
    // mov r3, #0x10
    // mov r6, ip
    // mov r1, #0
    // sub r3, r3, r6
    // bl AddTextPrinterParameterizedWithColor
    // str r5, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0222EB94 ; =0x000F0D00
    // ldr r2, [sp, #0x28]
    // str r0, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x20]
    // mov r1, #0
    // mov r3, #0x10
    // bl AddTextPrinterParameterizedWithColor
    // str r5, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0222EB94 ; =0x000F0D00
    // mov r1, #0
    // str r0, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x20]
    // add r2, r7, #0
    // mov r3, #0x16
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r7, #0
    // bl String_Delete
    // ldr r0, [sp, #0x2c]
    // bl String_Delete
    // ldr r0, [sp, #0x28]
    // bl String_Delete
    // ldr r0, [sp, #0x1c]
    // ldr r1, [r4, #0x10]
    // add r0, r0, #4
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x18]
    // add r5, #0x18
    // add r0, r0, #1
    // str r0, [sp, #0x18]
    // cmp r0, r1
    // blt _0222EAC0
    // ldr r0, [sp, #0x20]
    // bl ScheduleWindowCopyToVram
    // add sp, #0x30
    // pop {r3, r4, r5, r6, r7, pc}
    // _0222EB94: .word 0x000F0D00
    // _0222EB98: .word 0x00002608
    // TODO: decompile
}




void ov40_0222EB9C(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x1fc
    // sub sp, #0xe0
    // add r4, r0, #0
    // ldr r0, [sp, #0x2f4]
    // add r5, r3, #0
    // str r0, [sp, #0x2f4]
    // ldr r0, [sp, #0x2f8]
    // str r1, [sp, #0x14]
    // str r0, [sp, #0x2f8]
    // mov r0, #0
    // str r0, [sp, #0x40]
    // add r6, sp, #0x264
    // add r1, r0, #0
    // mov r3, #7
    // stmia r6!, {r0, r1}
    // stmia r6!, {r0, r1}
    // sub r3, r3, #1
    // bne _0222EBBA
    // stmia r6!, {r0, r1}
    // add r0, r4, #0
    // str r0, [sp, #0x50]
    // add r0, #0x18
    // str r0, [sp, #0x50]
    // ldr r0, [r5, #4]
    // str r0, [r4, #4]
    // mov r0, #0
    // str r0, [r4]
    // str r0, [r4, #0xc]
    // ldr r0, [r5, #0x24]
    // cmp r2, #0
    // str r0, [r4, #0x10]
    // str r5, [r4, #0x28]
    // beq _0222EBE4
    // str r2, [r4, #0x34]
    // b _0222EBEA
    // ldr r0, [sp, #0x14]
    // ldr r0, [r0, #0x48]
    // str r0, [r4, #0x34]
    // ldr r0, [r4, #4]
    // ldr r1, [r4, #0x10]
    // bl _s32_div_f
    // add r0, r0, #1
    // str r0, [r4, #0x14]
    // ldr r1, [r4, #4]
    // ldr r0, [r4, #0x10]
    // cmp r1, r0
    // bge _0222EC0A
    // str r1, [r4, #0x10]
    // sub r0, r1, #1
    // str r0, [r4, #0x40]
    // ldr r0, [r4, #0x10]
    // sub r0, r0, #1
    // str r0, [r4, #0x44]
    // ldr r1, [r4, #0x10]
    // lsr r0, r1, #0x1f
    // add r0, r1, r0
    // asr r0, r0, #1
    // str r0, [r4, #0x40]
    // ldr r1, [r4, #0x10]
    // lsr r0, r1, #0x1f
    // add r0, r1, r0
    // asr r0, r0, #1
    // str r0, [r4, #0x44]
    // ldr r0, [sp, #0x50]
    // bl InitWindow
    // ldr r0, [r5, #0x10]
    // ldr r1, [sp, #0x50]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp]
    // ldr r0, [r5, #0x14]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #4]
    // ldr r0, [r5, #0x18]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #8]
    // mov r0, #0xe
    // str r0, [sp, #0xc]
    // ldr r0, [r5, #0x1c]
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x14]
    // ldr r2, [r5, #0x20]
    // ldr r3, [r5, #0xc]
    // lsl r2, r2, #0x18
    // lsl r3, r3, #0x18
    // ldr r0, [r0, #0x24]
    // lsr r2, r2, #0x18
    // lsr r3, r3, #0x18
    // bl AddWindowParameterized
    // ldr r0, [sp, #0x50]
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // mov r0, #0x6d
    // bl ov40_0222DAB0
    // add r2, sp, #0x58
    // ldr r3, _0222EEC8 ; =ov40_02244E10
    // add r5, r0, #0
    // ldmia r3!, {r0, r1}
    // add r7, r2, #0
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // mov r6, #1
    // str r0, [r2]
    // ldr r0, [r4, #0x28]
    // ldr r1, [r0]
    // ldr r0, [r1, #8]
    // str r0, [sp, #0x38]
    // ldr r0, [r1, #0xc]
    // str r0, [sp, #0x3c]
    // mov r0, #0
    // str r0, [sp, #0x264]
    // ldr r0, [sp, #0x2f4]
    // lsl r0, r0, #2
    // ldr r1, [r7, r0]
    // cmp r1, #1
    // ble _0222ECD4
    // add r0, r1, #0
    // mov r2, #0x10
    // add r3, sp, #0x268
    // mov ip, r0
    // ldr r0, [r4, #0x28]
    // ldr r0, [r0]
    // add r0, r0, r2
    // ldr r1, [r0, #0xc]
    // ldr r7, [r0, #8]
    // ldr r0, [sp, #0x3c]
    // str r1, [sp, #0x54]
    // eor r1, r0
    // ldr r0, [sp, #0x38]
    // eor r0, r7
    // orr r0, r1
    // bne _0222ECBE
    // ldr r0, [sp, #0x40]
    // str r0, [r3]
    // b _0222ECC8
    // ldr r0, [sp, #0x54]
    // str r7, [sp, #0x38]
    // str r0, [sp, #0x3c]
    // str r6, [r3]
    // str r6, [sp, #0x40]
    // add r6, r6, #1
    // mov r0, ip
    // add r2, #0x10
    // add r3, r3, #4
    // cmp r6, r0
    // blt _0222ECA0
    // mov r0, #0
    // str r0, [sp, #0x18]
    // ldr r0, [r4, #0x10]
    // cmp r0, #0
    // bgt _0222ECE0
    // b _0222EEB4
    // add r0, sp, #0x264
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x2f4]
    // ldr r6, [sp, #0x18]
    // str r0, [sp, #0x1c]
    // add r0, #0x58
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp, #0x1c]
    // ldr r0, [r0, #0x48]
    // bl NewString_ReadMsgData
    // str r0, [sp, #0x4c]
    // mov r0, #0xff
    // mov r1, #0x6d
    // bl String_New
    // str r0, [sp, #0x48]
    // mov r0, #0xff
    // mov r1, #0x6d
    // bl String_New
    // add r7, r0, #0
    // mov r0, #0xff
    // mov r1, #0x6d
    // bl String_New
    // str r0, [sp, #0x34]
    // ldr r0, [sp, #0x2f4]
    // cmp r0, #0
    // beq _0222ED28
    // cmp r0, #1
    // beq _0222ED4E
    // cmp r0, #2
    // beq _0222ED6E
    // b _0222EDA8
    // ldr r1, [r4, #0x28]
    // ldr r0, [r4, #0x34]
    // ldr r1, [r1]
    // add r1, r1, r6
    // ldr r1, [r1, #4]
    // bl NewString_ReadMsgData
    // str r0, [sp, #0x44]
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x44]
    // add r0, r5, #0
    // mov r1, #1
    // mov r3, #0
    // bl BufferString
    // b _0222EDA8
    // ldr r0, [r4, #0x28]
    // mov r1, #0x6d
    // ldr r0, [r0]
    // add r0, r0, r6
    // ldr r0, [r0, #4]
    // str r0, [sp, #0x30]
    // mov r0, #0xff
    // bl String_New
    // str r0, [sp, #0x44]
    // ldr r2, [sp, #0x30]
    // add r0, r5, #0
    // mov r1, #1
    // bl BufferMonthNameAbbr
    // b _0222EDA8
    // ldr r0, [r4, #0x28]
    // mov r1, #0x6d
    // ldr r0, [r0]
    // add r0, r0, r6
    // ldr r0, [r0, #4]
    // str r0, [sp, #0x2c]
    // mov r0, #0xff
    // bl String_New
    // str r0, [sp, #0x44]
    // ldr r0, [sp, #0x2c]
    // mov r1, #0x6d
    // add r2, sp, #0x64
    // bl GetSpeciesNameIntoArray
    // ldr r0, [sp, #0x44]
    // add r1, sp, #0x64
    // bl CopyU16ArrayToString
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x44]
    // add r0, r5, #0
    // mov r1, #1
    // mov r3, #0
    // bl BufferString
    // ldr r0, [r4, #0x28]
    // ldr r0, [r0]
    // add r1, r0, r6
    // ldr r0, [r1, #8]
    // str r0, [sp, #0x24]
    // ldr r0, [r1, #0xc]
    // str r0, [sp, #0x28]
    // ldr r0, [sp, #0x24]
    // ldr r1, [sp, #0x28]
    // bl ov40_022307B0
    // add r3, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x34]
    // ldr r1, [sp, #0x24]
    // ldr r2, [sp, #0x28]
    // bl String16_FormatUnsignedLongLong
    // mov r0, #1
    // str r0, [sp]
    // ldr r1, [sp, #0x20]
    // ldr r0, [sp, #0x48]
    // ldr r1, [r1]
    // mov r2, #2
    // add r1, r1, #1
    // mov r3, #1
    // bl String16_FormatInteger
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #2
    // mov r1, #0
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x48]
    // add r0, r5, #0
    // add r3, r1, #0
    // bl BufferString
    // ldr r2, [sp, #0x4c]
    // add r0, r5, #0
    // add r1, r7, #0
    // bl StringExpandPlaceholders
    // ldr r0, [r4, #0x28]
    // add r2, r7, #0
    // ldr r0, [r0, #8]
    // lsl r1, r0, #4
    // ldr r0, [sp, #0x18]
    // mul r1, r0
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0222EECC ; =0x000F0D00
    // mov r1, #0
    // str r0, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x50]
    // add r3, r1, #0
    // bl AddTextPrinterParameterizedWithColor
    // ldr r0, [r4, #0x28]
    // ldr r0, [r0, #8]
    // cmp r0, #2
    // bne _0222EE7A
    // ldr r0, [sp, #0x2f8]
    // cmp r0, #0
    // beq _0222EE7A
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x34]
    // add r0, r5, #0
    // mov r1, #2
    // mov r3, #0
    // bl BufferString
    // ldr r2, [sp, #0x2f8]
    // add r0, r5, #0
    // add r1, r7, #0
    // bl StringExpandPlaceholders
    // ldr r0, [r4, #0x28]
    // add r2, r7, #0
    // ldr r0, [r0, #8]
    // mov r3, #0x10
    // lsl r1, r0, #4
    // ldr r0, [sp, #0x18]
    // mul r1, r0
    // add r1, #0x10
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0222EECC ; =0x000F0D00
    // mov r1, #0
    // str r0, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x50]
    // bl AddTextPrinterParameterizedWithColor
    // ldr r0, [sp, #0x4c]
    // bl String_Delete
    // ldr r0, [sp, #0x48]
    // bl String_Delete
    // ldr r0, [sp, #0x44]
    // bl String_Delete
    // add r0, r7, #0
    // bl String_Delete
    // ldr r0, [sp, #0x34]
    // bl String_Delete
    // add r0, r5, #0
    // bl MessageFormat_ResetBuffers
    // ldr r0, [sp, #0x20]
    // ldr r1, [r4, #0x10]
    // add r0, r0, #4
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x18]
    // add r6, #0x10
    // add r0, r0, #1
    // str r0, [sp, #0x18]
    // cmp r0, r1
    // bge _0222EEB4
    // b _0222ECEE
    // ldr r0, [sp, #0x50]
    // bl ScheduleWindowCopyToVram
    // add r0, r5, #0
    // bl MessageFormat_Delete
    // add sp, #0x1fc
    // add sp, #0xe0
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _0222EEC8: .word ov40_02244E10
    // _0222EECC: .word 0x000F0D00
    // TODO: decompile
}




void ov40_0222EED0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x18
    // add r6, r0, #0
    // str r0, [sp, #0x14]
    // add r0, #0x18
    // add r7, r2, #0
    // str r0, [sp, #0x14]
    // ldr r0, [r7, #4]
    // add r4, r1, #0
    // str r0, [r6, #4]
    // mov r0, #0
    // str r0, [r6]
    // str r0, [r6, #0xc]
    // ldr r0, [r7, #0x24]
    // add r5, r3, #0
    // str r0, [r6, #0x10]
    // str r7, [r6, #0x28]
    // ldr r0, [r4, #0x48]
    // str r0, [r6, #0x34]
    // ldr r0, [r6, #4]
    // ldr r1, [r6, #0x10]
    // bl _s32_div_f
    // add r0, r0, #1
    // str r0, [r6, #0x14]
    // ldr r1, [r6, #0x10]
    // lsr r0, r1, #0x1f
    // add r0, r1, r0
    // asr r0, r0, #1
    // str r0, [r6, #0x40]
    // ldr r1, [r6, #0x10]
    // lsr r0, r1, #0x1f
    // add r0, r1, r0
    // asr r0, r0, #1
    // str r0, [r6, #0x44]
    // ldr r1, [r6, #4]
    // ldr r0, [r6, #0x10]
    // cmp r1, r0
    // bge _0222EF2A
    // str r1, [r6, #0x10]
    // sub r0, r1, #1
    // str r0, [r6, #0x40]
    // ldr r0, [r6, #0x10]
    // sub r0, r0, #1
    // str r0, [r6, #0x44]
    // mov r0, #1
    // str r0, [r6, #0x48]
    // ldr r0, [sp, #0x14]
    // bl InitWindow
    // ldr r0, [r7, #0x10]
    // ldr r1, [sp, #0x14]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp]
    // ldr r0, [r7, #0x14]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #4]
    // ldr r0, [r7, #0x18]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #8]
    // mov r0, #0xe
    // str r0, [sp, #0xc]
    // ldr r0, [r7, #0x1c]
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp, #0x10]
    // ldr r2, [r7, #0x20]
    // ldr r3, [r7, #0xc]
    // lsl r2, r2, #0x18
    // lsl r3, r3, #0x18
    // ldr r0, [r4, #0x24]
    // lsr r2, r2, #0x18
    // lsr r3, r3, #0x18
    // bl AddWindowParameterized
    // ldr r0, [sp, #0x14]
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // ldr r0, [r6, #0x10]
    // mov r4, #0
    // cmp r0, #0
    // ble _0222EFCA
    // ldr r0, [r7, #8]
    // mov r1, #0
    // lsl r0, r0, #3
    // mul r0, r4
    // add r0, r0, #4
    // str r0, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0222EFD4 ; =0x000F0D00
    // add r3, r1, #0
    // str r0, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x14]
    // ldr r2, [r5]
    // bl AddTextPrinterParameterizedWithColor
    // ldr r0, [r7, #8]
    // mov r1, #0
    // lsl r0, r0, #3
    // mul r0, r4
    // add r0, r0, #4
    // str r0, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0222EFD4 ; =0x000F0D00
    // mov r3, #0x88
    // str r0, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x14]
    // ldr r2, [r5, #4]
    // bl AddTextPrinterParameterizedWithColor
    // ldr r0, [r6, #0x10]
    // add r4, r4, #1
    // add r5, #8
    // cmp r4, r0
    // blt _0222EF7C
    // ldr r0, [sp, #0x14]
    // bl ScheduleWindowCopyToVram
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // _0222EFD4: .word 0x000F0D00
    // TODO: decompile
}




void ov40_0222EFD8(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // ldr r1, [r5, #0x38]
    // ldr r0, [r5, #0xc]
    // add r4, r2, #0
    // cmp r1, r0
    // bne _0222EFEE
    // add sp, #0x10
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r1, [r5, #0x10]
    // ldr r0, [r5, #4]
    // cmp r1, r0
    // bne _0222EFFC
    // add sp, #0x10
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // add r7, r5, #0
    // add r7, #0x18
    // add r0, r7, #0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // ldr r3, [r5, #0x40]
    // ldr r1, [r5, #0x3c]
    // mov r0, #0
    // cmp r1, r3
    // blt _0222F024
    // ldr r2, [r5, #0x38]
    // ldr r1, [r5, #4]
    // sub r0, r2, r3
    // add r3, r3, #1
    // sub r3, r1, r3
    // cmp r2, r3
    // blt _0222F024
    // ldr r0, [r5, #0x10]
    // sub r0, r1, r0
    // ldr r1, [r5, #0x10]
    // mov r6, #0
    // cmp r1, #0
    // ble _0222F086
    // lsl r0, r0, #3
    // add r4, r4, r0
    // ldr r2, [r4]
    // cmp r2, #0
    // beq _0222F07C
    // ldr r0, [r5, #0x28]
    // mov r1, #0
    // ldr r0, [r0, #8]
    // add r3, r1, #0
    // lsl r0, r0, #3
    // mul r0, r6
    // add r0, r0, #4
    // str r0, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0222F098 ; =0x000F0D00
    // str r0, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // add r0, r7, #0
    // bl AddTextPrinterParameterizedWithColor
    // ldr r0, [r5, #0x28]
    // mov r1, #0
    // ldr r0, [r0, #8]
    // mov r3, #0x88
    // lsl r0, r0, #3
    // mul r0, r6
    // add r0, r0, #4
    // str r0, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0222F098 ; =0x000F0D00
    // str r0, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // ldr r2, [r4, #4]
    // add r0, r7, #0
    // bl AddTextPrinterParameterizedWithColor
    // ldr r0, [r5, #0x10]
    // add r6, r6, #1
    // add r4, #8
    // cmp r6, r0
    // blt _0222F030
    // add r0, r7, #0
    // bl CopyWindowToVram
    // ldr r0, [r5, #0x38]
    // str r0, [r5, #0xc]
    // mov r0, #0
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0222F098: .word 0x000F0D00
    // TODO: decompile
}




void ov40_0222F09C(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x1fc
    // sub sp, #0xe8
    // add r4, r0, #0
    // ldr r0, [sp, #0x2f8]
    // str r1, [sp, #0x10]
    // str r0, [sp, #0x2f8]
    // mov r0, #8
    // ldrsh r1, [r4, r0]
    // ldr r0, [r4, #0xc]
    // str r3, [sp, #0x14]
    // cmp r1, r0
    // bne _0222F0BE
    // add sp, #0x1fc
    // add sp, #0xe8
    // mov r0, #0
    // pop {r4, r5, r6, r7, pc}
    // ldr r1, [r4, #0x10]
    // ldr r0, [r4, #4]
    // cmp r1, r0
    // bne _0222F0CE
    // add sp, #0x1fc
    // add sp, #0xe8
    // mov r0, #0
    // pop {r4, r5, r6, r7, pc}
    // add r0, r4, #0
    // str r0, [sp, #0x58]
    // add r0, #0x18
    // str r0, [sp, #0x58]
    // mov r0, #0x6d
    // bl ov40_0222DAB0
    // add r5, r0, #0
    // ldr r0, [sp, #0x58]
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // mov r0, #0
    // str r0, [sp, #0x44]
    // str r0, [sp, #0x40]
    // mov r0, #8
    // ldrsh r0, [r4, r0]
    // ldr r1, [r4, #0x10]
    // add r3, sp, #0x26c
    // str r0, [sp, #0x18]
    // add r0, r0, r1
    // str r0, [sp, #0x34]
    // ldr r0, [sp, #0x44]
    // mov r2, #7
    // add r1, r0, #0
    // stmia r3!, {r0, r1}
    // stmia r3!, {r0, r1}
    // sub r2, r2, #1
    // bne _0222F100
    // stmia r3!, {r0, r1}
    // ldr r1, [r4, #4]
    // ldr r0, [sp, #0x34]
    // cmp r0, r1
    // blt _0222F11A
    // ldr r0, [r4, #0x10]
    // str r1, [sp, #0x34]
    // sub r0, r1, r0
    // str r0, [sp, #0x18]
    // ldr r3, _0222F384 ; =ov40_02244E1C
    // add r2, sp, #0x60
    // ldmia r3!, {r0, r1}
    // add r7, r2, #0
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // mov r6, #1
    // str r0, [r2]
    // ldr r0, [r4, #0x28]
    // ldr r1, [r0]
    // ldr r0, [r1, #8]
    // str r0, [sp, #0x38]
    // ldr r0, [r1, #0xc]
    // str r0, [sp, #0x3c]
    // mov r0, #0
    // str r0, [sp, #0x26c]
    // ldr r0, [sp, #0x14]
    // lsl r0, r0, #2
    // ldr r1, [r7, r0]
    // cmp r1, #1
    // ble _0222F180
    // add r0, r1, #0
    // mov r2, #0x10
    // add r3, sp, #0x270
    // mov ip, r0
    // ldr r0, [r4, #0x28]
    // ldr r0, [r0]
    // add r0, r0, r2
    // ldr r1, [r0, #0xc]
    // ldr r7, [r0, #8]
    // ldr r0, [sp, #0x3c]
    // str r1, [sp, #0x5c]
    // eor r1, r0
    // ldr r0, [sp, #0x38]
    // eor r0, r7
    // orr r0, r1
    // bne _0222F16A
    // ldr r0, [sp, #0x40]
    // str r0, [r3]
    // b _0222F174
    // ldr r0, [sp, #0x5c]
    // str r7, [sp, #0x38]
    // str r0, [sp, #0x3c]
    // str r6, [r3]
    // str r6, [sp, #0x40]
    // add r6, r6, #1
    // mov r0, ip
    // add r2, #0x10
    // add r3, r3, #4
    // cmp r6, r0
    // blt _0222F14C
    // ldr r1, [sp, #0x18]
    // ldr r0, [sp, #0x34]
    // cmp r1, r0
    // blt _0222F18A
    // b _0222F36A
    // add r0, r1, #0
    // lsl r6, r0, #4
    // add r1, sp, #0x26c
    // lsl r0, r0, #2
    // add r0, r1, r0
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x14]
    // str r0, [sp, #0x1c]
    // add r0, #0x58
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x10]
    // ldr r1, [sp, #0x1c]
    // ldr r0, [r0, #0x48]
    // bl NewString_ReadMsgData
    // str r0, [sp, #0x54]
    // mov r0, #0xff
    // mov r1, #0x6d
    // bl String_New
    // str r0, [sp, #0x50]
    // mov r0, #0xff
    // mov r1, #0x6d
    // bl String_New
    // add r7, r0, #0
    // mov r0, #0xff
    // mov r1, #0x6d
    // bl String_New
    // str r0, [sp, #0x48]
    // ldr r0, [sp, #0x14]
    // cmp r0, #0
    // beq _0222F1D8
    // cmp r0, #1
    // beq _0222F1FE
    // cmp r0, #2
    // beq _0222F21E
    // b _0222F258
    // ldr r1, [r4, #0x28]
    // ldr r0, [r4, #0x34]
    // ldr r1, [r1]
    // add r1, r1, r6
    // ldr r1, [r1, #4]
    // bl NewString_ReadMsgData
    // str r0, [sp, #0x4c]
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x4c]
    // add r0, r5, #0
    // mov r1, #1
    // mov r3, #0
    // bl BufferString
    // b _0222F258
    // ldr r0, [r4, #0x28]
    // mov r1, #0x6d
    // ldr r0, [r0]
    // add r0, r0, r6
    // ldr r0, [r0, #4]
    // str r0, [sp, #0x30]
    // mov r0, #0xff
    // bl String_New
    // str r0, [sp, #0x4c]
    // ldr r2, [sp, #0x30]
    // add r0, r5, #0
    // mov r1, #1
    // bl BufferMonthNameAbbr
    // b _0222F258
    // ldr r0, [r4, #0x28]
    // mov r1, #0x6d
    // ldr r0, [r0]
    // add r0, r0, r6
    // ldr r0, [r0, #4]
    // str r0, [sp, #0x2c]
    // mov r0, #0xff
    // bl String_New
    // str r0, [sp, #0x4c]
    // ldr r0, [sp, #0x2c]
    // mov r1, #0x6d
    // add r2, sp, #0x6c
    // bl GetSpeciesNameIntoArray
    // ldr r0, [sp, #0x4c]
    // add r1, sp, #0x6c
    // bl CopyU16ArrayToString
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x4c]
    // add r0, r5, #0
    // mov r1, #1
    // mov r3, #0
    // bl BufferString
    // ldr r0, [r4, #0x28]
    // ldr r0, [r0]
    // add r1, r0, r6
    // ldr r0, [r1, #8]
    // str r0, [sp, #0x24]
    // ldr r0, [r1, #0xc]
    // str r0, [sp, #0x28]
    // ldr r0, [sp, #0x24]
    // ldr r1, [sp, #0x28]
    // bl ov40_022307B0
    // add r3, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x48]
    // ldr r1, [sp, #0x24]
    // ldr r2, [sp, #0x28]
    // bl String16_FormatUnsignedLongLong
    // mov r0, #1
    // str r0, [sp]
    // ldr r1, [sp, #0x20]
    // ldr r0, [sp, #0x50]
    // ldr r1, [r1]
    // mov r2, #2
    // add r1, r1, #1
    // mov r3, #1
    // bl String16_FormatInteger
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #2
    // mov r1, #0
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x50]
    // add r0, r5, #0
    // add r3, r1, #0
    // bl BufferString
    // ldr r2, [sp, #0x54]
    // add r0, r5, #0
    // add r1, r7, #0
    // bl StringExpandPlaceholders
    // ldr r0, [r4, #0x28]
    // add r2, r7, #0
    // ldr r0, [r0, #8]
    // lsl r1, r0, #4
    // ldr r0, [sp, #0x44]
    // mul r1, r0
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0222F388 ; =0x000F0D00
    // mov r1, #0
    // str r0, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x58]
    // add r3, r1, #0
    // bl AddTextPrinterParameterizedWithColor
    // ldr r0, [r4, #0x28]
    // ldr r0, [r0, #8]
    // cmp r0, #2
    // bne _0222F32A
    // ldr r0, [sp, #0x2f8]
    // cmp r0, #0
    // beq _0222F32A
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x48]
    // add r0, r5, #0
    // mov r1, #2
    // mov r3, #0
    // bl BufferString
    // ldr r2, [sp, #0x2f8]
    // add r0, r5, #0
    // add r1, r7, #0
    // bl StringExpandPlaceholders
    // ldr r0, [r4, #0x28]
    // add r2, r7, #0
    // ldr r0, [r0, #8]
    // mov r3, #0x10
    // lsl r1, r0, #4
    // ldr r0, [sp, #0x44]
    // mul r1, r0
    // add r1, #0x10
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0222F388 ; =0x000F0D00
    // mov r1, #0
    // str r0, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x58]
    // bl AddTextPrinterParameterizedWithColor
    // ldr r0, [sp, #0x44]
    // add r0, r0, #1
    // str r0, [sp, #0x44]
    // ldr r0, [sp, #0x54]
    // bl String_Delete
    // ldr r0, [sp, #0x50]
    // bl String_Delete
    // ldr r0, [sp, #0x4c]
    // bl String_Delete
    // add r0, r7, #0
    // bl String_Delete
    // ldr r0, [sp, #0x48]
    // bl String_Delete
    // add r0, r5, #0
    // bl MessageFormat_ResetBuffers
    // ldr r0, [sp, #0x20]
    // add r6, #0x10
    // add r0, r0, #4
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x18]
    // add r1, r0, #1
    // ldr r0, [sp, #0x34]
    // str r1, [sp, #0x18]
    // cmp r1, r0
    // bge _0222F36A
    // b _0222F19E
    // ldr r0, [sp, #0x58]
    // bl ScheduleWindowCopyToVram
    // add r0, r5, #0
    // bl MessageFormat_Delete
    // mov r0, #8
    // ldrsh r0, [r4, r0]
    // str r0, [r4, #0xc]
    // mov r0, #0
    // add sp, #0x1fc
    // add sp, #0xe8
    // pop {r4, r5, r6, r7, pc}
    // _0222F384: .word ov40_02244E1C
    // _0222F388: .word 0x000F0D00
    // TODO: decompile
}




void ov40_0222F38C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x20
    // add r5, r0, #0
    // mov r0, #0
    // str r0, [sp, #0x1c]
    // ldr r0, [r5, #0x28]
    // add r7, r1, #0
    // ldr r0, [r0, #0x28]
    // cmp r0, #0
    // beq _0222F3DA
    // ldr r0, [r5, #0x10]
    // ldr r6, [sp, #0x1c]
    // cmp r0, #0
    // ble _0222F3DA
    // add r4, r6, #0
    // ldr r0, [r5, #0x28]
    // ldr r0, [r0, #0x28]
    // add r0, r0, r4
    // bl TouchscreenHitbox_TouchNewIsIn
    // cmp r0, #0
    // beq _0222F3D0
    // add r0, r7, #0
    // bl ov40_02230944
    // mov r1, #8
    // ldrsh r1, [r5, r1]
    // ldr r0, [r5, #0x28]
    // add r1, r1, r6
    // ldr r0, [r0]
    // lsl r1, r1, #4
    // add r0, r0, r1
    // ldr r0, [r0, #4]
    // str r0, [sp, #0x1c]
    // ldr r0, [r5, #0x10]
    // add r6, r6, #1
    // add r4, r4, #4
    // cmp r6, r0
    // blt _0222F3AA
    // mov r0, #8
    // ldrsh r1, [r5, r0]
    // ldr r0, [r5, #0xc]
    // cmp r1, r0
    // bne _0222F3EA
    // ldr r0, [sp, #0x1c]
    // add sp, #0x20
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r1, [r5, #0x10]
    // ldr r0, [r5, #4]
    // cmp r1, r0
    // bne _0222F3F8
    // ldr r0, [sp, #0x1c]
    // add sp, #0x20
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r5, #0
    // str r0, [sp, #0x18]
    // add r0, #0x18
    // mov r1, #0
    // str r0, [sp, #0x18]
    // bl FillWindowPixelBuffer
    // mov r0, #8
    // ldrsh r0, [r5, r0]
    // ldr r2, [r5, #0x10]
    // ldr r1, [r5, #4]
    // str r0, [sp, #0x10]
    // add r0, r0, r2
    // mov r6, #0
    // str r0, [sp, #0x14]
    // cmp r0, r1
    // blt _0222F420
    // sub r0, r1, r2
    // str r0, [sp, #0x10]
    // str r1, [sp, #0x14]
    // ldr r1, [sp, #0x10]
    // ldr r0, [sp, #0x14]
    // cmp r1, r0
    // bge _0222F472
    // add r0, r1, #0
    // lsl r4, r0, #4
    // ldr r1, [r5, #0x28]
    // ldr r0, [r5, #0x34]
    // ldr r1, [r1]
    // ldr r1, [r1, r4]
    // bl NewString_ReadMsgData
    // add r7, r0, #0
    // ldr r0, [r5, #0x28]
    // mov r1, #0
    // ldr r0, [r0, #8]
    // add r2, r7, #0
    // lsl r0, r0, #4
    // mul r0, r6
    // str r0, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0222F484 ; =0x000F0D00
    // add r3, r1, #0
    // str r0, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x18]
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r7, #0
    // bl String_Delete
    // ldr r0, [sp, #0x10]
    // add r6, r6, #1
    // add r1, r0, #1
    // ldr r0, [sp, #0x14]
    // add r4, #0x10
    // str r1, [sp, #0x10]
    // cmp r1, r0
    // blt _0222F42C
    // ldr r0, [sp, #0x18]
    // bl CopyWindowToVram
    // mov r0, #8
    // ldrsh r0, [r5, r0]
    // str r0, [r5, #0xc]
    // ldr r0, [sp, #0x1c]
    // add sp, #0x20
    // pop {r3, r4, r5, r6, r7, pc}
    // _0222F484: .word 0x000F0D00
    // TODO: decompile
}




void ov40_0222F488(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x2c
    // str r1, [sp, #0x14]
    // str r0, [sp, #0x10]
    // ldr r1, [r0, #0x38]
    // ldr r0, [r0, #0xc]
    // cmp r1, r0
    // bne _0222F49E
    // add sp, #0x2c
    // mov r0, #0
    // pop {r4, r5, r6, r7, pc}
    // ldr r0, [sp, #0x10]
    // ldr r1, [r0, #0x10]
    // ldr r0, [r0, #4]
    // cmp r1, r0
    // bne _0222F4AE
    // add sp, #0x2c
    // mov r0, #0
    // pop {r4, r5, r6, r7, pc}
    // ldr r0, [sp, #0x10]
    // mov r1, #0
    // str r0, [sp, #0x28]
    // add r0, #0x18
    // str r0, [sp, #0x28]
    // bl FillWindowPixelBuffer
    // mov r0, #0
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x10]
    // ldr r1, [sp, #0x10]
    // ldr r0, [r0, #0x40]
    // ldr r1, [r1, #0x3c]
    // cmp r1, r0
    // blt _0222F4E8
    // ldr r1, [sp, #0x10]
    // ldr r2, [r1, #0x38]
    // sub r1, r2, r0
    // str r1, [sp, #0x1c]
    // ldr r1, [sp, #0x10]
    // add r0, r0, #1
    // ldr r1, [r1, #4]
    // sub r0, r1, r0
    // cmp r2, r0
    // blt _0222F4E8
    // ldr r0, [sp, #0x10]
    // ldr r0, [r0, #0x10]
    // sub r0, r1, r0
    // str r0, [sp, #0x1c]
    // mov r0, #0
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x10]
    // ldr r0, [r0, #0x10]
    // cmp r0, #0
    // ble _0222F5D2
    // ldr r0, [sp, #0x1c]
    // mov r4, #4
    // lsl r1, r0, #2
    // ldr r0, [sp, #0x14]
    // add r0, r0, r1
    // str r0, [sp, #0x18]
    // mov r0, #0xff
    // mov r1, #0x6d
    // bl String_New
    // add r5, r0, #0
    // mov r0, #0xff
    // mov r1, #0x6d
    // bl String_New
    // add r7, r0, #0
    // ldr r0, [sp, #0x14]
    // mov r1, #0x63
    // ldr r0, [r0, #0x48]
    // bl NewString_ReadMsgData
    // str r0, [sp, #0x24]
    // mov r0, #1
    // str r0, [sp]
    // ldr r2, [sp, #0x1c]
    // ldr r1, [sp, #0x20]
    // add r0, r7, #0
    // add r1, r2, r1
    // add r1, r1, #1
    // mov r2, #2
    // mov r3, #1
    // bl String16_FormatInteger
    // ldr r2, [sp, #0x18]
    // ldr r1, _0222F5E4 ; =0x00002608
    // add r0, r5, #0
    // ldr r1, [r2, r1]
    // bl CopyU16ArrayToString
    // ldr r0, [sp, #0x14]
    // add r1, r5, #0
    // bl ov40_02230DCC
    // mov r0, #0
    // add r1, r7, #0
    // add r2, r0, #0
    // bl FontID_String_GetWidth
    // mov ip, r0
    // str r4, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0222F5E8 ; =0x000F0D00
    // mov r3, #0x10
    // str r0, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // mov r6, ip
    // ldr r0, [sp, #0x28]
    // mov r1, #0
    // add r2, r7, #0
    // sub r3, r3, r6
    // bl AddTextPrinterParameterizedWithColor
    // str r4, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0222F5E8 ; =0x000F0D00
    // ldr r2, [sp, #0x24]
    // str r0, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x28]
    // mov r1, #0
    // mov r3, #0x10
    // bl AddTextPrinterParameterizedWithColor
    // str r4, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0222F5E8 ; =0x000F0D00
    // mov r1, #0
    // str r0, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x28]
    // add r2, r5, #0
    // mov r3, #0x16
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r5, #0
    // bl String_Delete
    // add r0, r7, #0
    // bl String_Delete
    // ldr r0, [sp, #0x24]
    // bl String_Delete
    // ldr r0, [sp, #0x18]
    // add r4, #0x18
    // add r0, r0, #4
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x20]
    // add r0, r0, #1
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x10]
    // ldr r1, [r0, #0x10]
    // ldr r0, [sp, #0x20]
    // cmp r0, r1
    // blt _0222F500
    // ldr r0, [sp, #0x28]
    // bl CopyWindowToVram
    // ldr r0, [sp, #0x10]
    // ldr r1, [r0, #0x38]
    // str r1, [r0, #0xc]
    // mov r0, #0
    // add sp, #0x2c
    // pop {r4, r5, r6, r7, pc}
    // _0222F5E4: .word 0x00002608
    // _0222F5E8: .word 0x000F0D00
    // TODO: decompile
}




void ov40_0222F5EC(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // mov r4, #0
    // mov r6, #0xff
    // cmp r1, #0
    // bge _0222F60C
    // ldr r0, [r5, #0x38]
    // cmp r0, #0
    // ble _0222F624
    // sub r0, r0, #1
    // str r0, [r5, #0x38]
    // ldr r0, _0222F6CC ; =0x00000572
    // add r6, r4, #0
    // bl PlaySE
    // b _0222F624
    // ble _0222F624
    // ldr r0, [r5, #4]
    // ldr r1, [r5, #0x38]
    // sub r0, r0, #1
    // cmp r1, r0
    // bge _0222F624
    // add r0, r1, #1
    // str r0, [r5, #0x38]
    // ldr r0, _0222F6CC ; =0x00000572
    // mov r6, #1
    // bl PlaySE
    // cmp r6, #0
    // beq _0222F62E
    // cmp r6, #1
    // beq _0222F66A
    // b _0222F68E
    // ldr r2, [r5, #0x44]
    // ldr r1, [r5, #0x38]
    // cmp r1, r2
    // bge _0222F63C
    // lsl r0, r1, #0x10
    // asr r4, r0, #0x10
    // b _0222F68E
    // ldr r0, [r5, #4]
    // sub r0, r0, r2
    // cmp r1, r0
    // blt _0222F658
    // add r2, r2, #1
    // lsl r2, r2, #0x10
    // asr r4, r2, #0x10
    // cmp r1, r0
    // blt _0222F68E
    // sub r0, r1, r0
    // add r0, r4, r0
    // lsl r0, r0, #0x10
    // asr r4, r0, #0x10
    // b _0222F68E
    // lsl r0, r2, #0x10
    // asr r4, r0, #0x10
    // cmp r1, r2
    // bgt _0222F68E
    // sub r0, r1, r2
    // add r0, r4, r0
    // lsl r0, r0, #0x10
    // asr r4, r0, #0x10
    // b _0222F68E
    // ldr r0, [r5, #0x38]
    // ldr r2, [r5, #0x40]
    // cmp r0, r2
    // bgt _0222F678
    // lsl r0, r0, #0x10
    // asr r4, r0, #0x10
    // b _0222F68E
    // lsl r1, r2, #0x10
    // asr r4, r1, #0x10
    // ldr r1, [r5, #4]
    // sub r1, r1, r2
    // cmp r0, r1
    // blt _0222F68E
    // sub r1, r1, #1
    // sub r0, r0, r1
    // add r0, r4, r0
    // lsl r0, r0, #0x10
    // asr r4, r0, #0x10
    // cmp r4, #0
    // bge _0222F696
    // bl GF_AssertFail
    // cmp r6, #0xff
    // beq _0222F69C
    // str r4, [r5, #0x3c]
    // ldr r2, [r5, #0x40]
    // ldr r0, [r5, #0x3c]
    // mov r3, #0
    // cmp r0, r2
    // blt _0222F6C0
    // ldr r1, [r5, #0x38]
    // sub r0, r1, r2
    // lsl r0, r0, #0x10
    // asr r3, r0, #0x10
    // ldr r0, [r5, #4]
    // add r2, r2, #1
    // sub r2, r0, r2
    // cmp r1, r2
    // blt _0222F6C0
    // ldr r1, [r5, #0x10]
    // sub r0, r0, r1
    // lsl r0, r0, #0x10
    // asr r3, r0, #0x10
    // add r0, r5, #0
    // strh r3, [r5, #8]
    // bl ov40_0222F8C0
    // pop {r4, r5, r6, pc}
    // nop
    // _0222F6CC: .word 0x00000572
    // TODO: decompile
}




void ov40_0222F6D0(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r2, #8
    // ldrsh r0, [r4, r2]
    // add r1, r0, r1
    // strh r1, [r4, #8]
    // ldrsh r1, [r4, r2]
    // cmp r1, #0
    // bge _0222F6E6
    // mov r1, #0
    // strh r1, [r4, #8]
    // ldr r2, [r4, #0x10]
    // ldr r1, [r4, #4]
    // cmp r2, r1
    // bne _0222F6F2
    // mov r1, #0
    // strh r1, [r4, #8]
    // mov r1, #8
    // ldrsh r1, [r4, r1]
    // ldr r3, [r4, #0x10]
    // ldr r2, [r4, #4]
    // add r1, r1, r3
    // cmp r1, r2
    // ble _0222F704
    // sub r1, r2, r3
    // strh r1, [r4, #8]
    // mov r1, #8
    // ldrsh r1, [r4, r1]
    // cmp r0, r1
    // beq _0222F712
    // ldr r0, _0222F71C ; =0x00000572
    // bl PlaySE
    // add r0, r4, #0
    // bl ov40_0222F878
    // pop {r4, pc}
    // nop
    // _0222F71C: .word 0x00000572
    // TODO: decompile
}




void ov40_0222F720(void) {
}




void ov40_0222F734(void) {
}




void ov40_0222F740(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x48
    // add r4, r1, #0
    // add r5, r0, #0
    // ldr r0, [r4, #0x14]
    // ldr r7, [r4, #0x1c]
    // str r0, [sp, #0x10]
    // ldr r0, [r4, #0x18]
    // add r6, r2, #0
    // str r0, [sp, #0xc]
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, _0222F84C ; =0x00030D40
    // str r6, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0xc]
    // ldr r2, [sp, #0x10]
    // add r1, r7, #0
    // mov r3, #0x7f
    // bl SpriteSystem_LoadCharResObjFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, _0222F84C ; =0x00030D40
    // ldr r2, [sp, #0x10]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0xc]
    // add r1, r7, #0
    // mov r3, #0x7e
    // bl SpriteSystem_LoadCellResObjFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, _0222F84C ; =0x00030D40
    // ldr r2, [sp, #0x10]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0xc]
    // add r1, r7, #0
    // mov r3, #0x7d
    // bl SpriteSystem_LoadAnimResObjFromOpenNarc
    // mov r1, #0x80
    // add r0, sp, #0x14
    // strh r1, [r0]
    // mov r1, #0x60
    // strh r1, [r0, #2]
    // mov r1, #0
    // strh r1, [r0, #4]
    // strh r1, [r0, #6]
    // mov r0, #1
    // str r0, [sp, #0x1c]
    // str r0, [sp, #0x40]
    // sub r0, r0, #2
    // str r0, [sp, #0x38]
    // str r0, [sp, #0x3c]
    // ldr r0, _0222F84C ; =0x00030D40
    // str r1, [sp, #0x20]
    // str r6, [sp, #0x24]
    // str r1, [sp, #0x44]
    // str r0, [sp, #0x28]
    // str r0, [sp, #0x30]
    // str r0, [sp, #0x34]
    // cmp r6, #1
    // bne _0222F7C6
    // ldr r0, _0222F850 ; =0x0000270F
    // str r0, [sp, #0x2c]
    // b _0222F7CA
    // ldr r0, _0222F854 ; =0x00002710
    // str r0, [sp, #0x2c]
    // ldr r0, [r4, #0x18]
    // ldr r1, [r4, #0x1c]
    // add r2, sp, #0x14
    // bl SpriteSystem_NewSprite
    // str r0, [r5, #0x2c]
    // ldr r0, [r4, #0x18]
    // ldr r1, [r4, #0x1c]
    // add r2, sp, #0x14
    // bl SpriteSystem_NewSprite
    // str r0, [r5, #0x30]
    // ldr r0, [r5, #0x2c]
    // mov r1, #2
    // bl ManagedSprite_SetPaletteOverride
    // ldr r0, [r5, #0x30]
    // mov r1, #2
    // bl ManagedSprite_SetPaletteOverride
    // ldr r0, [r5, #0x2c]
    // mov r1, #0
    // bl ManagedSprite_SetAnim
    // ldr r0, [r5, #0x30]
    // mov r1, #0
    // bl ManagedSprite_SetAnim
    // ldr r0, [r5, #0x2c]
    // bl ManagedSprite_TickFrame
    // ldr r0, [r5, #0x30]
    // bl ManagedSprite_TickFrame
    // ldr r0, [r5, #0x30]
    // mov r1, #2
    // bl ManagedSprite_SetFlipMode
    // cmp r6, #1
    // ldr r0, [r5, #0x2c]
    // bne _0222F830
    // mov r1, #0x80
    // mov r2, #0x18
    // bl ManagedSprite_SetPositionXY
    // ldr r0, [r5, #0x30]
    // mov r1, #0x80
    // mov r2, #0x78
    // bl ManagedSprite_SetPositionXY
    // b _0222F842
    // mov r1, #0x80
    // mov r2, #0x58
    // bl ManagedSprite_SetPositionXY
    // ldr r0, [r5, #0x30]
    // mov r1, #0x80
    // mov r2, #0xb8
    // bl ManagedSprite_SetPositionXY
    // add r0, r5, #0
    // bl ov40_0222F878
    // add sp, #0x48
    // pop {r3, r4, r5, r6, r7, pc}
    // _0222F84C: .word 0x00030D40
    // _0222F850: .word 0x0000270F
    // _0222F854: .word 0x00002710
    // TODO: decompile
}




void ov40_0222F858(void) {
}




void ov40_0222F878(void) {
    ManagedSprite_SetDrawFlag(*((u32*)(r0 + 0x2c)), 1);
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 0x30)), 1);
    // ldrsh r0, [r4, r0]
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 0x2c)), 0);
    // ldrsh r1, [r4, r0]
    // add r1, r1, r0
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 0x30)), 0);
    ManagedSprite_TickTwoFrames(*((u32*)(r4 + 0x2c)));
    ManagedSprite_TickTwoFrames(*((u32*)(r4 + 0x30)));
}




void ov40_0222F8C0(void) {
    ManagedSprite_SetDrawFlag(*((u32*)(r0 + 0x2c)), 1);
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 0x30)), 1);
    // ldrsh r0, [r4, r0]
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 0x2c)), 0);
    // ldrsh r1, [r4, r0]
    // add r1, r1, r0
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 0x30)), 0);
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 0x2c)), 0);
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 0x30)), 0);
    ManagedSprite_TickTwoFrames(*((u32*)(r4 + 0x2c)));
    ManagedSprite_TickTwoFrames(*((u32*)(r4 + 0x30)));
}




void ov40_0222F920(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // ldr r0, [r4, #0x1c]
    // ldr r1, _0222F94C ; =0x00030D40
    // bl SpriteManager_UnloadCharObjById
    // ldr r0, [r4, #0x1c]
    // ldr r1, _0222F94C ; =0x00030D40
    // bl SpriteManager_UnloadCellObjById
    // ldr r0, [r4, #0x1c]
    // ldr r1, _0222F94C ; =0x00030D40
    // bl SpriteManager_UnloadAnimObjById
    // ldr r0, [r5, #0x2c]
    // bl Sprite_DeleteAndFreeResources
    // ldr r0, [r5, #0x30]
    // bl Sprite_DeleteAndFreeResources
    // pop {r3, r4, r5, pc}
    // _0222F94C: .word 0x00030D40
    // TODO: decompile
}




void ov40_0222F950(void) {
    // push {r4, r5, lr}
    // sub sp, #0x34
    // add r4, r3, #0
    // mov r3, #0x80
    // add r0, sp, #0
    // strh r3, [r0]
    // mov r3, #0x60
    // strh r3, [r0, #2]
    // mov r3, #0
    // strh r3, [r0, #4]
    // strh r3, [r0, #6]
    // mov r0, #1
    // str r0, [sp, #8]
    // str r0, [sp, #0x2c]
    // sub r0, r0, #2
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x28]
    // ldr r0, _0222F9B4 ; =0x00002E94
    // str r3, [sp, #0xc]
    // str r2, [sp, #0x10]
    // str r3, [sp, #0x30]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x1c]
    // str r0, [sp, #0x20]
    // cmp r2, #1
    // bne _0222F98A
    // ldr r0, _0222F9B8 ; =0x0000270F
    // str r0, [sp, #0x18]
    // b _0222F98E
    // ldr r0, _0222F9BC ; =0x00002710
    // str r0, [sp, #0x18]
    // ldr r0, [r1, #0x18]
    // ldr r1, [r1, #0x1c]
    // add r2, sp, #0
    // bl SpriteSystem_NewSprite
    // add r5, r0, #0
    // mov r1, #2
    // bl ManagedSprite_SetPaletteOverride
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ManagedSprite_SetAnim
    // add r0, r5, #0
    // bl ManagedSprite_TickFrame
    // add r0, r5, #0
    // add sp, #0x34
    // pop {r4, r5, pc}
    // _0222F9B4: .word 0x00002E94
    // _0222F9B8: .word 0x0000270F
    // _0222F9BC: .word 0x00002710
    // TODO: decompile
}




void ov40_0222F9C0(void) {
}




void ov40_0222F9D4(void) {
}




void ov40_0222F9E0(void) {
}




void ov40_0222FA18(void) {
}




void ov40_0222FA24(void) {
}




void ov40_0222FA2C(void) {
    // sub r4, r1, r2
    // mul r3, r4
    // mvn r2, r2
    *((u16*)(r0 + 0x10)) = 1;
    *((u32*)(r0 + 0xc)) = r1;
    *((u16*)(r0 + 0x10)) = 0;
}




void ov40_0222FA5C(void) {
    *((u32*)(r0 + 0x14)) = 0;
    *((u32*)(r0 + 0x14)) = 1;
    *((u32*)(r0 + 0x14)) = 0;
    *((u32*)(r0 + 0x14)) = 1;
}




void ov40_0222FA88(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #8
    // add r5, r0, #0
    // add r0, sp, #4
    // add r1, sp, #0
    // mov r4, #0
    // bl System_GetTouchHeldCoords
    // add r6, r0, #0
    // ldr r0, [r5, #0x14]
    // cmp r0, #0
    // beq _0222FAAC
    // ldr r0, [r5, #0x18]
    // bl ManagedSprite_TickTwoFrames
    // ldr r0, [r5, #0x1c]
    // bl ManagedSprite_TickTwoFrames
    // ldr r0, [r5, #4]
    // cmp r0, #0
    // bne _0222FAC6
    // cmp r6, #0
    // bne _0222FAC6
    // mov r0, #0
    // str r0, [r5, #4]
    // str r0, [r5]
    // str r0, [r5, #8]
    // str r0, [r5, #0xc]
    // add sp, #8
    // strh r0, [r5, #0x10]
    // pop {r4, r5, r6, pc}
    // ldr r0, _0222FB20 ; =ov40_02244E08
    // bl TouchscreenHitbox_TouchHeldIsIn
    // cmp r0, #0
    // bne _0222FADA
    // ldr r0, _0222FB24 ; =ov40_02244E0C
    // bl TouchscreenHitbox_TouchHeldIsIn
    // cmp r0, #0
    // beq _0222FADC
    // mov r4, #1
    // cmp r4, #0
    // ldr r0, [r5, #4]
    // beq _0222FB0C
    // cmp r0, #0
    // bne _0222FAFA
    // mov r0, #1
    // str r0, [r5, #4]
    // ldr r0, [sp, #4]
    // str r0, [r5, #8]
    // ldr r0, [sp]
    // add sp, #8
    // str r0, [r5, #0xc]
    // mov r0, #2
    // str r0, [r5]
    // pop {r4, r5, r6, pc}
    // ldr r0, [r5]
    // sub r0, r0, #1
    // str r0, [r5]
    // ldr r1, [sp]
    // add r0, r5, #0
    // bl ov40_0222FA2C
    // add sp, #8
    // pop {r4, r5, r6, pc}
    // cmp r0, #0
    // beq _0222FB1A
    // mov r0, #0
    // str r0, [r5, #4]
    // str r0, [r5]
    // str r0, [r5, #8]
    // str r0, [r5, #0xc]
    // add sp, #8
    // pop {r4, r5, r6, pc}
    // nop
    // _0222FB20: .word ov40_02244E08
    // _0222FB24: .word ov40_02244E0C
    // TODO: decompile
}




void ov40_0222FB28(void) {
    // ldr r0, [r0, r1]
    Save_GameStats_Get((0x83 << 4));
    GameStats_AddScore(r4);
}




void ov40_0222FB40(void) {
    // push {r4, lr}
    // sub sp, #8
    // add r4, r0, #0
    // mov r0, #0x83
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #0x7e
    // add r2, sp, #4
    // bl sub_0202FBF0
    // ldr r1, _0222FB70 ; =0x000008B4
    // mov r3, #0
    // ldr r0, [r4, r1]
    // sub r1, #0x84
    // ldr r1, [r4, r1]
    // add r2, r0, #0
    // str r1, [sp]
    // add r1, r0, #0
    // add r1, #0x80
    // add r2, #0xe4
    // bl sub_02030814
    // add sp, #8
    // pop {r4, pc}
    // _0222FB70: .word 0x000008B4
    // TODO: decompile
}




void ov40_0222FB74(void) {
}




void ov40_0222FB90(void) {
    // ldr r2, _0222FBA8 ; =0x0000052C
    // add r3, r0, #0
    // str r1, [r3, r2]
    // mov r1, #0
    // add r0, r2, #4
    // str r1, [r3, r0]
    // add r1, r3, r2
    // ldr r3, _0222FBAC ; =SysTask_CreateOnVBlankQueue
    // ldr r0, _0222FBB0 ; =ov40_0222FB74
    // mov r2, #4
    // bx r3
    // nop
    // _0222FBA8: .word 0x0000052C
    // _0222FBAC: .word SysTask_CreateOnVBlankQueue
    // _0222FBB0: .word ov40_0222FB74
    // TODO: decompile
}




void ov40_0222FBB4(void) {
    // ldr r0, [r0, r1]
}




void ov40_0222FBBC(void) {
    // push {r4, lr}
    // add r4, r1, #0
    // ldr r0, [r4, #0x1c]
    // cmp r0, #0
    // beq _0222FBF2
    // add r0, r4, #0
    // bl ov40_02230958
    // cmp r0, #1
    // beq _0222FBF2
    // ldr r0, _0222FBF4 ; =0x00000524
    // ldr r1, [r4, r0]
    // cmp r1, #1
    // beq _0222FBF2
    // mov r1, #1
    // str r1, [r4, r0]
    // ldr r0, [r4, #0x64]
    // bl PokepicManager_HandleLoadImgAndOrPltt
    // ldr r0, [r4, #0x1c]
    // bl SpriteSystem_DrawSprites
    // bl SpriteSystem_TransferOam
    // ldr r0, _0222FBF4 ; =0x00000524
    // mov r1, #0
    // str r1, [r4, r0]
    // pop {r4, pc}
    // _0222FBF4: .word 0x00000524
    // TODO: decompile
}




void ov40_0222FBF8(void) {
}




void ov40_0222FC14(void) {
    // push {r3, r4, lr}
    // sub sp, #4
    // ldr r4, _0222FC3C ; =0x00000836
    // add r3, r0, #0
    // add r0, r3, r4
    // str r0, [sp]
    // sub r0, r4, #6
    // ldr r0, [r3, r0]
    // sub r4, r4, #2
    // add r3, r3, r4
    // bl ov40_02244AB0
    // cmp r0, #1
    // bls _0222FC36
    // add sp, #4
    // mov r0, #1
    // pop {r3, r4, pc}
    // mov r0, #0
    // add sp, #4
    // pop {r3, r4, pc}
    // _0222FC3C: .word 0x00000836
    // TODO: decompile
}




void ov40_0222FC40(void) {
    // ldr r2, _0222FC48 ; =0x00000874
    // str r1, [r0, r2]
    // bx lr
    // nop
    // _0222FC48: .word 0x00000874
    // TODO: decompile
}




void ov40_0222FC4C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // ldr r3, _0222FCB8 ; =0x000008B4
    // add r2, r0, #0
    // ldr r1, [r1]
    // add r7, r2, r3
    // str r0, [sp]
    // cmp r1, #1
    // beq _0222FCB6
    // bl ov40_0223D540
    // ldr r1, _0222FCBC ; =0x00001D54
    // mov r2, #0x1e
    // add r1, r7, r1
    // bl ov39_0222801C
    // ldr r1, _0222FCC0 ; =0x00003884
    // mov r4, #0
    // str r0, [r7, r1]
    // ldr r0, [r7, r1]
    // cmp r0, #0
    // ble _0222FCB6
    // ldr r5, [sp]
    // mov r1, #0x9a
    // lsl r1, r1, #6
    // add r0, r5, #0
    // add r6, r0, r1
    // ldr r0, _0222FCC4 ; =0x00002608
    // ldr r0, [r5, r0]
    // cmp r0, #0
    // bne _0222FC8C
    // bl GF_AssertFail
    // ldr r0, _0222FCC4 ; =0x00002608
    // add r1, r6, #0
    // ldr r0, [r5, r0]
    // mov r2, #0xe4
    // bl MI_CpuCopy8
    // ldr r0, _0222FCC4 ; =0x00002608
    // ldr r1, [sp]
    // ldr r0, [r5, r0]
    // add r2, r1, r4
    // add r0, #0xa7
    // ldrb r0, [r0]
    // ldr r1, _0222FCC8 ; =0x0000413C
    // add r4, r4, #1
    // strb r0, [r2, r1]
    // ldr r0, _0222FCC0 ; =0x00003884
    // add r5, r5, #4
    // ldr r0, [r7, r0]
    // add r6, #0xe4
    // cmp r4, r0
    // blt _0222FC80
    // pop {r3, r4, r5, r6, r7, pc}
    // _0222FCB8: .word 0x000008B4
    // _0222FCBC: .word 0x00001D54
    // _0222FCC0: .word 0x00003884
    // _0222FCC4: .word 0x00002608
    // _0222FCC8: .word 0x0000413C
    // TODO: decompile
}




void ov40_0222FCCC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r6, r0, #0
    // mov r5, #0
    // add r4, r6, #0
    // add r7, r5, #0
    // mov r0, #0x83
    // str r5, [sp]
    // lsl r0, r0, #4
    // ldr r0, [r6, r0]
    // mov r1, #0x6d
    // add r2, sp, #4
    // mov r3, #0
    // bl sub_0202FC90
    // ldr r0, [sp, #4]
    // cmp r0, #3
    // bhi _0222FDA4
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222FCFC: ; jump table
    // ldr r0, _0222FDBC ; =0x0000087C
    // str r7, [r4, r0]
    // add r0, #0x10
    // str r7, [r4, r0]
    // cmp r5, #0
    // bne _0222FDA4
    // mov r0, #0x6d
    // bl sub_020314A4
    // ldr r1, _0222FDC0 ; =0x0000088C
    // str r0, [r4, r1]
    // add r0, r1, #0
    // sub r1, #0x5c
    // ldr r0, [r4, r0]
    // ldr r1, [r6, r1]
    // bl sub_020314C4
    // b _0222FDA4
    // ldr r0, _0222FDBC ; =0x0000087C
    // mov r1, #0
    // str r1, [r4, r0]
    // add r0, #0x10
    // str r1, [r4, r0]
    // cmp r5, #0
    // bne _0222FDA4
    // mov r0, #0x6d
    // bl sub_020314A4
    // ldr r1, _0222FDC0 ; =0x0000088C
    // str r0, [r4, r1]
    // add r0, r1, #0
    // sub r1, #0x5c
    // ldr r0, [r4, r0]
    // ldr r1, [r6, r1]
    // bl sub_020314C4
    // b _0222FDA4
    // ldr r0, _0222FDBC ; =0x0000087C
    // mov r1, #0
    // str r1, [r4, r0]
    // add r0, #0x10
    // str r1, [r4, r0]
    // cmp r5, #0
    // bne _0222FDA4
    // mov r0, #0x6d
    // bl sub_020314A4
    // ldr r1, _0222FDC0 ; =0x0000088C
    // str r0, [r4, r1]
    // add r0, r1, #0
    // sub r1, #0x5c
    // ldr r0, [r4, r0]
    // ldr r1, [r6, r1]
    // bl sub_020314C4
    // b _0222FDA4
    // mov r0, #0x6d
    // bl sub_0203077C
    // ldr r1, _0222FDBC ; =0x0000087C
    // cmp r5, #0
    // str r0, [r4, r1]
    // bne _0222FD9A
    // mov r0, #0x6d
    // bl sub_020314A4
    // ldr r1, _0222FDC0 ; =0x0000088C
    // str r0, [r4, r1]
    // add r0, r1, #0
    // sub r1, #0x5c
    // ldr r0, [r4, r0]
    // ldr r1, [r6, r1]
    // bl sub_020314C4
    // b _0222FDA4
    // mov r0, #0x6d
    // bl sub_020307AC
    // ldr r1, _0222FDC0 ; =0x0000088C
    // str r0, [r4, r1]
    // bl sub_0202FC48
    // cmp r0, #1
    // bne _0222FDB0
    // bl sub_0202FC24
    // add r5, r5, #1
    // add r4, r4, #4
    // cmp r5, #4
    // blt _0222FCD8
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // _0222FDBC: .word 0x0000087C
    // _0222FDC0: .word 0x0000088C
    // TODO: decompile
}




void ov40_0222FDC4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // mov r4, #0
    // add r5, r0, #0
    // add r6, r4, #0
    // add r7, r4, #0
    // ldr r0, _0222FDF8 ; =0x0000087C
    // ldr r0, [r5, r0]
    // cmp r0, #0
    // beq _0222FDDE
    // bl Heap_Free
    // ldr r0, _0222FDF8 ; =0x0000087C
    // str r6, [r5, r0]
    // ldr r0, _0222FDFC ; =0x0000088C
    // ldr r0, [r5, r0]
    // cmp r0, #0
    // beq _0222FDEE
    // bl Heap_Free
    // ldr r0, _0222FDFC ; =0x0000088C
    // str r7, [r5, r0]
    // add r4, r4, #1
    // add r5, r5, #4
    // cmp r4, #4
    // blt _0222FDCE
    // pop {r3, r4, r5, r6, r7, pc}
    // _0222FDF8: .word 0x0000087C
    // _0222FDFC: .word 0x0000088C
    // TODO: decompile
}




void ov40_0222FE00(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x18
    // ldr r4, [r0, #0x18]
    // ldr r5, [r0, #0x1c]
    // ldr r6, [r0, #0x28]
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
    // ldr r0, _0222FE64 ; =0x000186A0
    // mov r1, #2
    // str r0, [sp, #0x14]
    // add r0, r6, #0
    // add r2, r4, #0
    // add r3, r5, #0
    // bl SpriteSystem_LoadPaletteBuffer
    // bl sub_0207449C
    // add r3, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, _0222FE64 ; =0x000186A0
    // add r1, r5, #0
    // str r0, [sp, #4]
    // add r0, r4, #0
    // mov r2, #0x14
    // bl SpriteSystem_LoadCellResObj
    // bl sub_020744A8
    // add r3, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, _0222FE64 ; =0x000186A0
    // add r1, r5, #0
    // str r0, [sp, #4]
    // add r0, r4, #0
    // mov r2, #0x14
    // bl SpriteSystem_LoadAnimResObj
    // add sp, #0x18
    // pop {r4, r5, r6, pc}
    // _0222FE64: .word 0x000186A0
    // TODO: decompile
}




void ov40_0222FE68(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4, #0x1c]
    // ldr r1, _0222FE88 ; =0x000186A0
    // bl SpriteManager_UnloadPlttObjById
    // ldr r0, [r4, #0x1c]
    // ldr r1, _0222FE88 ; =0x000186A0
    // bl SpriteManager_UnloadCellObjById
    // ldr r0, [r4, #0x1c]
    // ldr r1, _0222FE88 ; =0x000186A0
    // bl SpriteManager_UnloadAnimObjById
    // pop {r4, pc}
    // nop
    // _0222FE88: .word 0x000186A0
    // TODO: decompile
}




void ov40_0222FE8C(void) {
}




void ov40_0222FE98(void) {
}




void ov40_0222FEA0(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x4c
    // add r5, r2, #0
    // str r1, [sp, #0xc]
    // add r4, r3, #0
    // ldr r7, [r0, #0x18]
    // ldr r6, [r0, #0x1c]
    // bne _0222FEB6
    // add sp, #0x4c
    // mov r0, #0
    // pop {r4, r5, r6, r7, pc}
    // ldr r0, [sp, #0x60]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x64]
    // ldr r2, [sp, #0x10]
    // str r0, [sp, #0x14]
    // ldr r1, [sp, #0x14]
    // add r0, r4, #0
    // bl GetMonIconNaixEx
    // add r3, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // ldr r0, _0222FF44 ; =0x000186A0
    // ldr r2, [sp, #0xc]
    // add r0, r5, r0
    // str r0, [sp, #8]
    // add r0, r7, #0
    // add r1, r6, #0
    // bl SpriteSystem_LoadCharResObjFromOpenNarcWithHardwareMappingType
    // mov r1, #0
    // add r0, sp, #0x18
    // add r2, r1, #0
    // strh r1, [r0]
    // sub r2, #0x30
    // strh r2, [r0, #2]
    // strh r1, [r0, #4]
    // strh r1, [r0, #6]
    // mov r0, #1
    // str r0, [sp, #0x28]
    // sub r0, r0, #2
    // str r1, [sp, #0x20]
    // str r1, [sp, #0x24]
    // str r1, [sp, #0x44]
    // str r1, [sp, #0x48]
    // ldr r1, _0222FF44 ; =0x000186A0
    // str r0, [sp, #0x3c]
    // add r2, r5, r1
    // str r2, [sp, #0x2c]
    // str r0, [sp, #0x40]
    // str r1, [sp, #0x30]
    // str r1, [sp, #0x34]
    // str r1, [sp, #0x38]
    // add r0, r7, #0
    // add r1, r6, #0
    // add r2, sp, #0x18
    // bl SpriteSystem_NewSprite
    // add r5, r0, #0
    // ldr r1, [sp, #0x10]
    // ldr r2, [sp, #0x14]
    // add r0, r4, #0
    // bl GetMonIconPaletteEx
    // add r1, r0, #0
    // add r0, r5, #0
    // add r1, r1, #4
    // bl ManagedSprite_SetPaletteOverrideOffset
    // add r0, r5, #0
    // mov r1, #1
    // bl ManagedSprite_SetAnim
    // add r0, r5, #0
    // bl ManagedSprite_TickFrame
    // add r0, r5, #0
    // add sp, #0x4c
    // pop {r4, r5, r6, r7, pc}
    // _0222FF44: .word 0x000186A0
    // TODO: decompile
}




void ov40_0222FF48(void) {
    // push {r4, lr}
    // add r4, r2, #0
    // beq _0222FF5E
    // ldr r2, _0222FF60 ; =0x000186A0
    // ldr r0, [r0, #0x1c]
    // add r1, r1, r2
    // bl SpriteManager_UnloadCharObjById
    // add r0, r4, #0
    // bl Sprite_DeleteAndFreeResources
    // pop {r4, pc}
    // _0222FF60: .word 0x000186A0
    // TODO: decompile
}




void ov40_0222FF64(void) {
}




void ov40_0222FF74(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x9c
    // ldr r3, _022302A0 ; =ov40_02244EE8
    // add r7, r1, #0
    // str r0, [sp, #0x14]
    // add r2, sp, #0x74
    // mov r1, #0x14
    // ldrh r0, [r3]
    // add r3, r3, #2
    // strh r0, [r2]
    // add r2, r2, #2
    // sub r1, r1, #1
    // bne _0222FF82
    // ldr r3, _022302A4 ; =ov40_02244E28
    // add r2, sp, #0x5c
    // str r2, [sp, #0x20]
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // mov r0, #1
    // ldr r5, [sp, #0x14]
    // str r0, [sp, #0x3c]
    // mov r0, #0
    // str r0, [sp, #0x40]
    // add r4, sp, #0x74
    // add r5, #0x3c
    // mov r0, #0
    // ldrsh r0, [r4, r0]
    // cmp r0, #0xff
    // beq _02230062
    // ldr r1, [sp, #0x20]
    // ldr r0, [r7, #0x48]
    // ldr r1, [r1]
    // bl NewString_ReadMsgData
    // add r6, r0, #0
    // add r0, r5, #0
    // bl InitWindow
    // mov r0, #2
    // ldrsh r0, [r4, r0]
    // mov r3, #0
    // add r1, r5, #0
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp]
    // mov r0, #4
    // ldrsh r0, [r4, r0]
    // mov r2, #2
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #4]
    // mov r0, #6
    // ldrsh r0, [r4, r0]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #8]
    // mov r0, #0xe
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x3c]
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp, #0x10]
    // ldrsh r3, [r4, r3]
    // ldr r0, [r7, #0x24]
    // lsl r3, r3, #0x18
    // lsr r3, r3, #0x18
    // bl AddWindowParameterized
    // add r0, r5, #0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // add r0, r5, #0
    // add r1, r6, #0
    // bl ov40_022306C0
    // add r3, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _022302A8 ; =0x000F0D00
    // mov r1, #0
    // str r0, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // add r0, r5, #0
    // add r2, r6, #0
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r5, #0
    // bl ScheduleWindowCopyToVram
    // mov r0, #4
    // ldrsh r1, [r4, r0]
    // mov r0, #6
    // ldrsh r0, [r4, r0]
    // add r2, r1, #0
    // mul r2, r0
    // ldr r0, [sp, #0x3c]
    // add r0, r0, r2
    // str r0, [sp, #0x3c]
    // add r0, r6, #0
    // bl String_Delete
    // ldr r0, [sp, #0x20]
    // add r4, #8
    // add r0, r0, #4
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x40]
    // add r5, #0x10
    // add r0, r0, #1
    // str r0, [sp, #0x40]
    // cmp r0, #5
    // blt _0222FFAE
    // ldr r0, [sp, #0x14]
    // ldr r6, [r0]
    // mov r0, #0x6d
    // bl ov40_0222DAB0
    // ldr r5, [sp, #0x14]
    // add r4, r0, #0
    // add r0, r6, #0
    // mov r1, #0x6d
    // add r5, #0x3c
    // bl sub_020315B8
    // str r0, [sp, #0x44]
    // ldr r1, [sp, #0x44]
    // add r0, r7, #0
    // bl ov40_02230DCC
    // ldr r0, [r7, #0x48]
    // mov r1, #7
    // bl NewString_ReadMsgData
    // str r0, [sp, #0x48]
    // mov r0, #0xff
    // mov r1, #0x6d
    // bl String_New
    // add r6, r0, #0
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #2
    // mov r1, #0
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x44]
    // add r0, r4, #0
    // add r3, r1, #0
    // bl BufferString
    // ldr r2, [sp, #0x48]
    // add r0, r4, #0
    // add r1, r6, #0
    // bl StringExpandPlaceholders
    // add r0, r5, #0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // add r0, r5, #0
    // add r1, r6, #0
    // bl ov40_022306C0
    // mov r1, #0
    // add r3, r0, #0
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _022302A8 ; =0x000F0D00
    // add r2, r6, #0
    // str r0, [sp, #8]
    // add r0, r5, #0
    // str r1, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r5, #0
    // bl ScheduleWindowCopyToVram
    // ldr r0, [sp, #0x44]
    // bl String_Delete
    // ldr r0, [sp, #0x48]
    // bl String_Delete
    // add r0, r6, #0
    // bl String_Delete
    // add r0, r4, #0
    // bl MessageFormat_ResetBuffers
    // ldr r0, [sp, #0x14]
    // mov r1, #3
    // ldr r0, [r0, #4]
    // mov r2, #0
    // bl sub_0203088C
    // add r1, r0, #0
    // ldr r5, [sp, #0x14]
    // ldr r0, [r7, #0x48]
    // add r1, #0x84
    // add r5, #0x4c
    // bl NewString_ReadMsgData
    // add r6, r0, #0
    // add r0, r5, #0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // mov r1, #0
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _022302A8 ; =0x000F0D00
    // add r2, r6, #0
    // str r0, [sp, #8]
    // add r0, r5, #0
    // add r3, r1, #0
    // str r1, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r5, #0
    // bl ScheduleWindowCopyToVram
    // add r0, r6, #0
    // bl String_Delete
    // add r0, r4, #0
    // bl MessageFormat_ResetBuffers
    // ldr r0, [sp, #0x14]
    // mov r1, #2
    // ldr r0, [r0, #4]
    // mov r2, #0
    // bl sub_0203088C
    // str r0, [sp, #0x4c]
    // cmp r0, #0
    // beq _022301F4
    // ldr r5, [sp, #0x14]
    // mov r0, #0xff
    // mov r1, #0x6d
    // add r5, #0x5c
    // bl String_New
    // str r0, [sp, #0x50]
    // ldr r0, [r7, #0x48]
    // mov r1, #9
    // bl NewString_ReadMsgData
    // str r0, [sp, #0x54]
    // mov r0, #0xff
    // mov r1, #0x6d
    // bl String_New
    // add r6, r0, #0
    // mov r0, #1
    // str r0, [sp]
    // ldr r0, [sp, #0x50]
    // ldr r1, [sp, #0x4c]
    // mov r2, #4
    // mov r3, #0
    // bl String16_FormatInteger
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #2
    // mov r1, #0
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x50]
    // add r0, r4, #0
    // add r3, r1, #0
    // bl BufferString
    // ldr r2, [sp, #0x54]
    // add r0, r4, #0
    // add r1, r6, #0
    // bl StringExpandPlaceholders
    // add r0, r5, #0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // add r0, r5, #0
    // add r1, r6, #0
    // bl ov40_022306C0
    // mov r1, #0
    // add r3, r0, #0
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _022302A8 ; =0x000F0D00
    // add r2, r6, #0
    // str r0, [sp, #8]
    // add r0, r5, #0
    // str r1, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r5, #0
    // bl ScheduleWindowCopyToVram
    // ldr r0, [sp, #0x50]
    // bl String_Delete
    // ldr r0, [sp, #0x54]
    // bl String_Delete
    // add r0, r6, #0
    // bl String_Delete
    // add r0, r4, #0
    // bl MessageFormat_ResetBuffers
    // b _02230206
    // ldr r5, [sp, #0x14]
    // mov r1, #0
    // add r5, #0x6c
    // add r0, r5, #0
    // bl FillWindowPixelBuffer
    // add r0, r5, #0
    // bl ScheduleWindowCopyToVram
    // ldr r0, [sp, #0x14]
    // mov r1, #4
    // ldr r0, [r0, #4]
    // mov r2, #0
    // bl sub_0203088C
    // add r5, r0, #0
    // str r1, [sp, #0x1c]
    // add r6, r1, #0
    // mov r0, #0xff
    // mov r1, #0x6d
    // bl String_New
    // str r0, [sp, #0x38]
    // mov r0, #0xff
    // mov r1, #0x6d
    // bl String_New
    // str r0, [sp, #0x34]
    // mov r0, #0xff
    // mov r1, #0x6d
    // bl String_New
    // str r0, [sp, #0x30]
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp, #0x1c]
    // add r0, #0x7c
    // str r0, [sp, #0x14]
    // ldr r2, _022302AC ; =0x000186A0
    // add r0, r5, #0
    // mov r3, #0
    // bl _ull_mod
    // str r0, [sp, #0x2c]
    // ldr r2, _022302AC ; =0x000186A0
    // add r0, r5, #0
    // add r1, r6, #0
    // mov r3, #0
    // bl _ll_udiv
    // ldr r2, _022302AC ; =0x000186A0
    // str r0, [sp, #0x58]
    // mov r3, #0
    // add r6, r1, #0
    // bl _ull_mod
    // str r0, [sp, #0x28]
    // ldr r0, [sp, #0x58]
    // ldr r2, _022302AC ; =0x000186A0
    // add r1, r6, #0
    // mov r3, #0
    // bl _ll_udiv
    // mov r1, #0xa
    // str r0, [sp, #0x24]
    // bl _u32_div_f
    // mov r1, #0xa
    // bl _u32_div_f
    // cmp r1, #0
    // bne _022302B0
    // ldr r0, [sp, #0x1c]
    // mov r1, #0
    // eor r1, r0
    // mov r2, #0
    // add r0, r5, #0
    // eor r0, r2
    // orr r0, r1
    // beq _022302B0
    // ldr r0, [r7, #0x48]
    // mov r1, #0xc
    // bl NewString_ReadMsgData
    // add r6, r0, #0
    // b _022302BA
    // nop
    // _022302A0: .word ov40_02244EE8
    // _022302A4: .word ov40_02244E28
    // _022302A8: .word 0x000F0D00
    // _022302AC: .word 0x000186A0
    // ldr r0, [r7, #0x48]
    // mov r1, #0xb
    // bl NewString_ReadMsgData
    // add r6, r0, #0
    // mov r0, #0xff
    // mov r1, #0x6d
    // bl String_New
    // add r5, r0, #0
    // mov r0, #1
    // str r0, [sp]
    // ldr r0, [sp, #0x38]
    // ldr r1, [sp, #0x2c]
    // mov r2, #5
    // mov r3, #2
    // bl String16_FormatInteger
    // mov r0, #1
    // str r0, [sp]
    // ldr r0, [sp, #0x34]
    // ldr r1, [sp, #0x28]
    // mov r2, #5
    // mov r3, #2
    // bl String16_FormatInteger
    // mov r0, #1
    // str r0, [sp]
    // mov r2, #2
    // ldr r0, [sp, #0x30]
    // ldr r1, [sp, #0x24]
    // add r3, r2, #0
    // bl String16_FormatInteger
    // mov r0, #1
    // str r0, [sp]
    // mov r1, #2
    // ldr r2, [sp, #0x38]
    // add r0, r4, #0
    // mov r3, #0
    // str r1, [sp, #4]
    // bl BufferString
    // mov r1, #1
    // str r1, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x34]
    // add r0, r4, #0
    // mov r3, #0
    // bl BufferString
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #2
    // mov r1, #0
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x30]
    // add r0, r4, #0
    // add r3, r1, #0
    // bl BufferString
    // add r0, r4, #0
    // add r1, r5, #0
    // add r2, r6, #0
    // bl StringExpandPlaceholders
    // ldr r0, [sp, #0x14]
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // ldr r0, [sp, #0x14]
    // add r1, r5, #0
    // bl ov40_022306C0
    // mov r1, #0
    // add r3, r0, #0
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _02230394 ; =0x000F0D00
    // add r2, r5, #0
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x14]
    // str r1, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // ldr r0, [sp, #0x14]
    // bl ScheduleWindowCopyToVram
    // ldr r0, [sp, #0x38]
    // bl String_Delete
    // ldr r0, [sp, #0x34]
    // bl String_Delete
    // ldr r0, [sp, #0x30]
    // bl String_Delete
    // add r0, r6, #0
    // bl String_Delete
    // add r0, r5, #0
    // bl String_Delete
    // add r0, r4, #0
    // bl MessageFormat_ResetBuffers
    // add r0, r4, #0
    // bl MessageFormat_Delete
    // add sp, #0x9c
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _02230394: .word 0x000F0D00
    // TODO: decompile
}




void ov40_02230398(void) {
    // add r5, #0x3c
    ClearWindowTilemapAndCopyToVram(r0);
    RemoveWindow(r5);
    // add r5, #0x10
}




void ov40_022303B8(void) {
    sub_0203088C(3, 0);
    // sub r1, #0xe
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _022303DC: ; jump table
}




void ov40_02230404(void) {
}




void ov40_02230410(void) {
}




void ov40_02230424(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x140
    // str r0, [sp, #0x18]
    // mov r0, #0
    // str r1, [sp, #0x1c]
    // ldr r3, _02230630 ; =ov40_02244F90
    // str r0, [sp, #0x44]
    // add r2, sp, #0xe0
    // mov r1, #0x30
    // ldrh r0, [r3]
    // add r3, r3, #2
    // strh r0, [r2]
    // add r2, r2, #2
    // sub r1, r1, #1
    // bne _02230436
    // ldr r0, [sp, #0x1c]
    // ldr r0, [r0, #0x18]
    // str r0, [sp, #0x3c]
    // ldr r0, [sp, #0x1c]
    // ldr r0, [r0, #0x1c]
    // str r0, [sp, #0x38]
    // ldr r0, [sp, #0x1c]
    // ldr r4, [r0, #0x28]
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
    // ldr r0, _02230634 ; =0x000186A0
    // ldr r2, [sp, #0x3c]
    // str r0, [sp, #0x14]
    // ldr r3, [sp, #0x38]
    // add r0, r4, #0
    // mov r1, #2
    // bl SpriteSystem_LoadPaletteBuffer
    // bl sub_0207449C
    // add r3, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, _02230634 ; =0x000186A0
    // ldr r1, [sp, #0x38]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x3c]
    // mov r2, #0x14
    // bl SpriteSystem_LoadCellResObj
    // bl sub_020744A8
    // add r3, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, _02230634 ; =0x000186A0
    // ldr r1, [sp, #0x38]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x3c]
    // mov r2, #0x14
    // bl SpriteSystem_LoadAnimResObj
    // mov r0, #6
    // mov r6, #0
    // str r0, [sp, #0x34]
    // str r0, [sp, #0x2c]
    // ldr r0, [sp, #0x18]
    // str r6, [sp, #0x30]
    // str r6, [sp, #0x40]
    // bl ov40_02230404
    // cmp r0, #1
    // bne _022304C8
    // mov r0, #3
    // str r0, [sp, #0x34]
    // str r0, [sp, #0x2c]
    // mov r0, #1
    // str r0, [sp, #0x40]
    // ldr r4, [sp, #0x30]
    // ldr r0, [sp, #0x2c]
    // add r1, r4, #0
    // cmp r1, r0
    // bge _0223050E
    // lsl r1, r6, #2
    // add r0, sp, #0x7c
    // add r5, r0, r1
    // add r0, sp, #0x4c
    // add r7, r0, r1
    // mov r0, #0xff
    // str r0, [r5]
    // ldr r0, [sp, #0x18]
    // mov r1, #0
    // ldr r0, [r0, #4]
    // add r2, r4, #0
    // bl sub_0203088C
    // str r0, [sp, #0x48]
    // ldr r0, [sp, #0x18]
    // mov r1, #1
    // ldr r0, [r0, #4]
    // add r2, r4, #0
    // bl sub_0203088C
    // ldr r1, [sp, #0x48]
    // cmp r1, #0
    // beq _02230506
    // stmia r5!, {r1}
    // stmia r7!, {r0}
    // add r6, r6, #1
    // ldr r0, [sp, #0x2c]
    // add r4, r4, #1
    // cmp r4, r0
    // blt _022304DC
    // ldr r1, [sp, #0x2c]
    // add r0, r6, #0
    // cmp r6, r1
    // bge _02230530
    // lsl r2, r6, #2
    // add r1, sp, #0x7c
    // add r3, r1, r2
    // add r1, sp, #0x4c
    // add r4, r1, r2
    // mov r2, #0
    // stmia r3!, {r2}
    // ldr r1, [sp, #0x2c]
    // add r0, r0, #1
    // stmia r4!, {r2}
    // add r6, r6, #1
    // cmp r0, r1
    // blt _02230522
    // ldr r1, [sp, #0x30]
    // ldr r0, [sp, #0x34]
    // add r0, r1, r0
    // str r0, [sp, #0x30]
    // ldr r1, [sp, #0x2c]
    // ldr r0, [sp, #0x34]
    // add r0, r1, r0
    // str r0, [sp, #0x2c]
    // cmp r0, #0xc
    // ble _022304C8
    // add r0, sp, #0x7c
    // str r0, [sp, #0x28]
    // ldr r0, [sp, #0x40]
    // mov r1, #0x30
    // add r2, sp, #0xe0
    // mul r1, r0
    // ldr r5, [sp, #0x18]
    // mov r6, #0
    // add r7, sp, #0x4c
    // add r4, r2, r1
    // ldr r0, [sp, #0x18]
    // mov r1, #0
    // str r1, [r0, #0xc]
    // ldr r0, [sp, #0x28]
    // ldr r0, [r0]
    // str r0, [sp, #0x20]
    // cmp r0, #0
    // beq _02230616
    // ldr r0, [r7]
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #0x20]
    // ldr r2, [sp, #0x24]
    // bl GetMonIconNaixEx
    // add r3, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // ldr r1, [sp, #0x44]
    // ldr r0, _02230634 ; =0x000186A0
    // mov r2, #0x14
    // add r0, r1, r0
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x3c]
    // ldr r1, [sp, #0x38]
    // bl SpriteSystem_LoadCharResObjAtEndWithHardwareMappingType
    // mov r0, #0
    // ldrsh r1, [r4, r0]
    // add r0, sp, #0xac
    // add r2, sp, #0xac
    // add r1, #8
    // strh r1, [r0]
    // mov r0, #2
    // ldrsh r1, [r4, r0]
    // add r0, sp, #0xac
    // sub r1, #0xc
    // strh r1, [r0, #2]
    // mov r1, #0
    // strh r1, [r0, #4]
    // strh r1, [r0, #6]
    // add r0, r1, #0
    // str r0, [sp, #0xb4]
    // str r0, [sp, #0xb8]
    // mov r0, #1
    // str r0, [sp, #0xbc]
    // add r0, r1, #0
    // str r0, [sp, #0xd8]
    // str r0, [sp, #0xdc]
    // ldr r1, [sp, #0x44]
    // ldr r0, _02230634 ; =0x000186A0
    // add r0, r1, r0
    // str r0, [sp, #0xc0]
    // ldr r0, _02230634 ; =0x000186A0
    // ldr r1, [sp, #0x1c]
    // str r0, [sp, #0xc4]
    // str r0, [sp, #0xc8]
    // str r0, [sp, #0xcc]
    // mov r0, #0
    // mvn r0, r0
    // str r0, [sp, #0xd0]
    // str r0, [sp, #0xd4]
    // ldr r0, [sp, #0x1c]
    // ldr r1, [r1, #0x1c]
    // ldr r0, [r0, #0x18]
    // bl SpriteSystem_NewSprite
    // str r0, [r5, #0xc]
    // ldr r0, [sp, #0x20]
    // ldr r1, [sp, #0x24]
    // mov r2, #0
    // bl GetMonIconPaletteEx
    // add r1, r0, #0
    // ldr r0, [r5, #0xc]
    // add r1, r1, #4
    // bl ManagedSprite_SetPaletteOverrideOffset
    // ldr r0, [r5, #0xc]
    // mov r1, #1
    // bl ManagedSprite_SetAnim
    // ldr r0, [r5, #0xc]
    // bl ManagedSprite_TickFrame
    // mov r1, #0xc
    // ldr r0, [r5, #0xc]
    // sub r1, r1, r6
    // bl ManagedSprite_SetDrawPriority
    // ldr r0, [sp, #0x44]
    // add r5, r5, #4
    // add r0, r0, #1
    // str r0, [sp, #0x44]
    // ldr r0, [sp, #0x18]
    // add r6, r6, #1
    // add r0, r0, #4
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x28]
    // add r7, r7, #4
    // add r0, r0, #4
    // add r4, r4, #4
    // str r0, [sp, #0x28]
    // cmp r6, #0xc
    // blt _02230558
    // add sp, #0x140
    // pop {r3, r4, r5, r6, r7, pc}
    // _02230630: .word ov40_02244F90
    // _02230634: .word 0x000186A0
    // TODO: decompile
}




void ov40_02230638(void) {
}




void ov40_0223064C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r1, #0
    // str r0, [sp]
    // ldr r0, [r6, #0x1c]
    // ldr r1, _0223069C ; =0x000186A0
    // bl SpriteManager_UnloadPlttObjById
    // ldr r0, [r6, #0x1c]
    // ldr r1, _0223069C ; =0x000186A0
    // bl SpriteManager_UnloadCellObjById
    // ldr r0, [r6, #0x1c]
    // ldr r1, _0223069C ; =0x000186A0
    // bl SpriteManager_UnloadAnimObjById
    // mov r4, #0
    // ldr r5, [sp]
    // add r7, r4, #0
    // ldr r0, [r5, #0xc]
    // cmp r0, #0
    // beq _02230688
    // ldr r1, _0223069C ; =0x000186A0
    // ldr r0, [r6, #0x1c]
    // add r1, r4, r1
    // bl SpriteManager_UnloadCharObjById
    // ldr r0, [r5, #0xc]
    // bl Sprite_DeleteAndFreeResources
    // str r7, [r5, #0xc]
    // add r4, r4, #1
    // add r5, r5, #4
    // cmp r4, #0xc
    // blt _02230670
    // ldr r0, [sp]
    // add r1, r6, #0
    // bl ov40_02230398
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0223069C: .word 0x000186A0
    // TODO: decompile
}




void ov40_022306A0(void) {
}




void ov40_022306C0(void) {
    FontID_String_GetWidth(0, 0);
    GetWindowWidth(r5);
    // sub r1, r0, r4
    // add r0, r1, r0
    // asr r0, r0, #1
}




void ov40_022306E0(void) {
    // ldr r1, _022306EC ; =0x00000834
    // mov r2, #0
    // strh r2, [r0, r1]
    // add r1, r1, #2
    // strh r2, [r0, r1]
    // bx lr
    // _022306EC: .word 0x00000834
    // TODO: decompile
}




void ov40_022306F0(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // mov r0, #0x83
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // bl Save_Misc_Get
    // add r1, sp, #4
    // str r1, [sp]
    // ldr r1, _02230734 ; =0x0000086C
    // add r2, sp, #0xc
    // ldr r1, [r5, r1]
    // add r3, sp, #8
    // add r1, r1, #2
    // add r4, r0, #0
    // bl sub_0202AC38
    // add r0, sp, #4
    // ldrb r0, [r0]
    // mov r2, #0
    // mvn r2, r2
    // str r0, [sp]
    // ldr r1, _02230734 ; =0x0000086C
    // add r0, r4, #0
    // ldr r1, [r5, r1]
    // add r3, r2, #0
    // add r1, r1, #2
    // bl sub_0202AC60
    // mov r0, #1
    // add sp, #0x10
    // pop {r3, r4, r5, pc}
    // nop
    // _02230734: .word 0x0000086C
    // TODO: decompile
}




void ov40_02230738(void) {
}




void ov40_0223077C(void) {
    sub_020879E0(r1, 1);
    sub_020878B0(r5, 1);
    sub_02087948(r5, r4, r6);
    sub_020878B8(r5, r4, r6);
}




void ov40_022307B0(void) {
    // sub r2, r2, r0
    // sbc r3, r1
    _ll_udiv(0xa, 0);
    // sub r3, r3, r0
    // sbc r2, r1
}




void ov40_022307DC(void) {
}




void ov40_022307FC(void) {
    // push {r4, lr}
    // ldr r2, _0223085C ; =0x00004160
    // add r4, r1, #0
    // ldr r1, [r4, r2]
    // add r1, r1, #1
    // str r1, [r4, r2]
    // ldr r1, [r4, r2]
    // cmp r1, #7
    // blt _02230846
    // bl SysTask_Destroy
    // ldr r0, _0223085C ; =0x00004160
    // mov r2, #0
    // str r2, [r4, r0]
    // sub r1, r0, #4
    // str r2, [r4, r1]
    // add r0, r0, #4
    // ldr r0, [r4, r0]
    // bl sub_02087A54
    // ldr r0, _02230860 ; =0x00004164
    // mov r1, #0
    // ldr r0, [r4, r0]
    // add r2, r1, #0
    // bl sub_02087A08
    // ldr r0, _02230860 ; =0x00004164
    // mov r1, #0
    // ldr r0, [r4, r0]
    // bl sub_020878B0
    // ldr r0, _02230860 ; =0x00004164
    // mov r1, #0
    // ldr r0, [r4, r0]
    // bl sub_020879E0
    // pop {r4, pc}
    // lsl r0, r1, #1
    // add r0, r0, #6
    // lsl r0, r0, #0x10
    // asr r1, r0, #0x10
    // add r0, r2, #4
    // ldr r0, [r4, r0]
    // add r2, r1, #0
    // bl sub_02087A08
    // pop {r4, pc}
    // nop
    // _0223085C: .word 0x00004160
    // _02230860: .word 0x00004164
    // TODO: decompile
}




void ov40_02230864(void) {
    // push {r4, lr}
    // sub sp, #8
    // add r4, r0, #0
    // ldr r0, _0223092C ; =0x0000415C
    // ldr r1, [r4, r0]
    // cmp r1, #1
    // bne _02230884
    // add r0, #0xc
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // beq _0223087E
    // bl SysTask_Destroy
    // ldr r0, _02230930 ; =0x00004168
    // mov r1, #0
    // str r1, [r4, r0]
    // ldr r0, _02230934 ; =gSystem + 0x60
    // ldrb r0, [r0, #9]
    // cmp r0, #0
    // bne _02230890
    // ldr r0, _02230938 ; =0x000006F4
    // b _02230894
    // mov r0, #0x6f
    // lsl r0, r0, #4
    // ldr r1, [r4, r0]
    // ldr r0, _0223093C ; =0x00004164
    // str r1, [r4, r0]
    // ldr r0, _0223092C ; =0x0000415C
    // mov r1, #1
    // str r1, [r4, r0]
    // mov r1, #0
    // add r0, r0, #4
    // str r1, [r4, r0]
    // add r0, sp, #4
    // add r1, sp, #0
    // bl System_GetTouchNewCoords
    // ldr r0, _0223093C ; =0x00004164
    // ldr r0, [r4, r0]
    // bl sub_02087A30
    // ldr r0, _0223093C ; =0x00004164
    // mov r1, #1
    // ldr r0, [r4, r0]
    // bl sub_020878B0
    // ldr r0, _0223093C ; =0x00004164
    // mov r1, #1
    // ldr r0, [r4, r0]
    // bl sub_020879E0
    // ldr r0, _0223093C ; =0x00004164
    // ldr r1, [sp, #4]
    // ldr r2, [sp]
    // lsl r1, r1, #0x10
    // lsl r2, r2, #0x10
    // ldr r0, [r4, r0]
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    // bl sub_020878B8
    // ldr r0, _0223093C ; =0x00004164
    // ldr r1, [sp, #4]
    // ldr r2, [sp]
    // lsl r1, r1, #0x10
    // lsl r2, r2, #0x10
    // ldr r0, [r4, r0]
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    // bl sub_02087948
    // mov r2, #1
    // ldr r0, _02230940 ; =ov40_022307FC
    // add r1, r4, #0
    // lsl r2, r2, #0xc
    // bl SysTask_CreateOnMainQueue
    // ldr r2, _02230930 ; =0x00004168
    // str r0, [r4, r2]
    // ldr r0, [r4, r2]
    // cmp r0, #0
    // beq _02230912
    // add r1, r4, #0
    // bl ov40_022307FC
    // add sp, #8
    // pop {r4, pc}
    // add r0, r2, #0
    // mov r1, #0
    // sub r0, #0xc
    // str r1, [r4, r0]
    // sub r0, r2, #4
    // ldr r0, [r4, r0]
    // bl sub_020879E0
    // bl GF_AssertFail
    // add sp, #8
    // pop {r4, pc}
    // nop
    // _0223092C: .word 0x0000415C
    // _02230930: .word 0x00004168
    // _02230934: .word gSystem + 0x60
    // _02230938: .word 0x000006F4
    // _0223093C: .word 0x00004164
    // _02230940: .word ov40_022307FC
    // TODO: decompile
}




void ov40_02230944(void) {
    // push {r3, lr}
    // bl ov40_02230864
    // ldr r0, _02230954 ; =0x0000057B
    // bl PlaySE
    // pop {r3, pc}
    // nop
    // _02230954: .word 0x0000057B
    // TODO: decompile
}




void ov40_02230958(void) {
    // ldr r1, _02230960 ; =0x00000528
    // ldr r0, [r0, r1]
    // bx lr
    // nop
    // _02230960: .word 0x00000528
    // TODO: decompile
}




void ov40_02230964(void) {
    // ldr r2, _0223096C ; =0x00000528
    // str r1, [r0, r2]
    // bx lr
    // nop
    // _0223096C: .word 0x00000528
    // TODO: decompile
}




void ov40_02230970(void) {
    ov40_0222D800(r2);
    *((u32*)(r4 + 4)) = r0;
    // add r1, #0x14
    ov40_0222D5AC(r4, r5, r6);
    // add r5, #0x14
    ov40_0222D66C(r4, r5, r7);
    // add r3, sp, #8
    // ldrsh r1, [r3, r1]
    // ldrsh r2, [r3, r2]
    ManagedSprite_SetPositionXY(*((u32*)(r4 + 4)), 0x10, 0x14);
    // add r3, sp, #8
    // ldrsh r1, [r3, r1]
    // ldrsh r2, [r3, r2]
    sub_020136B4(*((u32*)(r4 + 8)), 0x18, 0x1c);
    // ldr r1, [sp, #0x2c]
    TextOBJ_SetSpritesDrawFlag(*((u32*)(r4 + 8)));
    // ldr r1, [sp, #0x28]
    ManagedSprite_SetAnim(*((u32*)(r4 + 4)));
}




void ov40_022309CC(void) {
}




void ov40_022309DC(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // add r6, r1, #0
    // add r1, r2, #0
    // add r0, r3, #0
    // ldr r2, [r5, #4]
    // ldr r3, _02230C9C ; =0x00000504
    // str r2, [r5, r3]
    // ldr r4, [r5, #8]
    // add r2, r3, #4
    // str r4, [r5, r2]
    // ldr r2, [r5, #0x10]
    // ldr r4, [r2]
    // add r2, r3, #0
    // add r2, #8
    // str r4, [r5, r2]
    // mov r2, #1
    // add r3, #0x18
    // mov r4, #0xc2
    // str r2, [r5, r3]
    // cmp r0, #0
    // beq _02230A12
    // cmp r0, #1
    // beq _02230A82
    // cmp r0, #2
    // beq _02230AD4
    // b _02230CD2
    // cmp r1, #0xe
    // bhi _02230A7C
    // add r0, r1, r1
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _02230A22: ; jump table
    // mov r4, #0xf4
    // b _02230CD2
    // mov r4, #0xf5
    // b _02230CD2
    // mov r4, #0xf6
    // b _02230CD2
    // mov r4, #0xf7
    // b _02230CD2
    // mov r4, #0xf8
    // b _02230CD2
    // mov r4, #0xf9
    // b _02230CD2
    // mov r4, #0xfa
    // b _02230CD2
    // mov r4, #0xfb
    // b _02230CD2
    // mov r4, #0xfc
    // b _02230CD2
    // mov r4, #0xfd
    // b _02230CD2
    // mov r4, #0xfe
    // b _02230CD2
    // mov r4, #0xff
    // b _02230CD2
    // add r4, #0x3e
    // b _02230CD2
    // add r4, #0x3f
    // b _02230CD2
    // add r4, #0x40
    // b _02230CD2
    // bl GF_AssertFail
    // b _02230CD2
    // cmp r1, #9
    // bhi _02230ACE
    // add r0, r1, r1
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _02230A92: ; jump table
    // add r4, #0x41
    // b _02230CD2
    // add r4, #0x42
    // b _02230CD2
    // add r4, #0x43
    // b _02230CD2
    // add r4, #0x44
    // b _02230CD2
    // add r4, #0x45
    // b _02230CD2
    // add r4, #0x46
    // b _02230CD2
    // add r4, #0x47
    // b _02230CD2
    // add r4, #0x48
    // b _02230CD2
    // add r4, #0x49
    // b _02230CD2
    // add r4, #0x4a
    // b _02230CD2
    // bl GF_AssertFail
    // b _02230CD2
    // cmp r6, #8
    // bls _02230ADA
    // b _02230CCE
    // add r0, r6, r6
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _02230AE6: ; jump table
    // cmp r1, #5
    // bhi _02230B2A
    // add r0, r1, r1
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _02230B08: ; jump table
    // b _02230CD2
    // mov r4, #0xc3
    // b _02230CD2
    // mov r4, #0xc4
    // b _02230CD2
    // mov r4, #0xc5
    // b _02230CD2
    // mov r4, #0xc6
    // b _02230CD2
    // mov r4, #0xc7
    // b _02230CD2
    // bl GF_AssertFail
    // b _02230CD2
    // cmp r1, #3
    // bhi _02230B58
    // add r0, r1, r1
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _02230B40: ; jump table
    // mov r4, #0xc8
    // b _02230CD2
    // mov r4, #0xc9
    // b _02230CD2
    // mov r4, #0xca
    // b _02230CD2
    // mov r4, #0xcb
    // b _02230CD2
    // bl GF_AssertFail
    // b _02230CD2
    // cmp r1, #6
    // bhi _02230B98
    // add r0, r1, r1
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _02230B6E: ; jump table
    // mov r4, #0xcc
    // b _02230CD2
    // mov r4, #0xcd
    // b _02230CD2
    // mov r4, #0xce
    // b _02230CD2
    // mov r4, #0xcf
    // b _02230CD2
    // mov r4, #0xd0
    // b _02230CD2
    // mov r4, #0xd1
    // b _02230CD2
    // mov r4, #0xd2
    // b _02230CD2
    // bl GF_AssertFail
    // b _02230CD2
    // cmp r1, #3
    // bhi _02230BC6
    // add r0, r1, r1
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _02230BAE: ; jump table
    // mov r4, #0xd3
    // b _02230CD2
    // mov r4, #0xd4
    // b _02230CD2
    // mov r4, #0xd5
    // b _02230CD2
    // mov r4, #0xd6
    // b _02230CD2
    // bl GF_AssertFail
    // b _02230CD2
    // cmp r1, #0
    // beq _02230BDA
    // cmp r1, #1
    // beq _02230BDE
    // cmp r1, #2
    // beq _02230BE2
    // b _02230BE6
    // mov r4, #0xd7
    // b _02230CD2
    // mov r4, #0xd8
    // b _02230CD2
    // mov r4, #0xd9
    // b _02230CD2
    // bl GF_AssertFail
    // b _02230CD2
    // cmp r1, #5
    // bhi _02230C20
    // add r0, r1, r1
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _02230BFC: ; jump table
    // mov r4, #0xda
    // b _02230CD2
    // mov r4, #0xdb
    // b _02230CD2
    // mov r4, #0xdc
    // b _02230CD2
    // mov r4, #0xdd
    // b _02230CD2
    // mov r4, #0xde
    // b _02230CD2
    // mov r4, #0xdf
    // b _02230CD2
    // bl GF_AssertFail
    // b _02230CD2
    // cmp r1, #7
    // bhi _02230C66
    // add r0, r1, r1
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _02230C36: ; jump table
    // mov r4, #0xe0
    // b _02230CD2
    // mov r4, #0xe1
    // b _02230CD2
    // mov r4, #0xe2
    // b _02230CD2
    // mov r4, #0xe3
    // b _02230CD2
    // mov r4, #0xe4
    // b _02230CD2
    // mov r4, #0xe5
    // b _02230CD2
    // mov r4, #0xe6
    // b _02230CD2
    // mov r4, #0xe7
    // b _02230CD2
    // bl GF_AssertFail
    // b _02230CD2
    // cmp r1, #3
    // bhi _02230C94
    // add r0, r1, r1
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _02230C7C: ; jump table
    // mov r4, #0xe8
    // b _02230CD2
    // mov r4, #0xe9
    // b _02230CD2
    // mov r4, #0xea
    // b _02230CD2
    // mov r4, #0xeb
    // b _02230CD2
    // bl GF_AssertFail
    // b _02230CD2
    // nop
    // _02230C9C: .word 0x00000504
    // cmp r1, #3
    // bhi _02230CC8
    // add r0, r1, r1
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _02230CB0: ; jump table
    // mov r4, #0xec
    // b _02230CD2
    // mov r4, #0xed
    // b _02230CD2
    // mov r4, #0xee
    // b _02230CD2
    // mov r4, #0xef
    // b _02230CD2
    // bl GF_AssertFail
    // b _02230CD2
    // bl GF_AssertFail
    // mov r0, #0x51
    // lsl r0, r0, #4
    // str r4, [r5, r0]
    // ldr r0, [r5, r0]
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}




void ov40_02230CDC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r4, r0, #0
    // ldr r5, [r4, #4]
    // ldr r7, _02230D1C ; =0x00000504
    // str r5, [r4, r7]
    // ldr r6, [r4, #8]
    // add r5, r7, #4
    // str r6, [r4, r5]
    // ldr r5, [r4, #0x10]
    // ldr r6, [r5]
    // add r5, r7, #0
    // add r5, #8
    // str r6, [r4, r5]
    // add r5, r7, #0
    // mov r6, #0
    // add r5, #0x10
    // str r6, [r4, r5]
    // add r7, #0x14
    // str r6, [r4, r7]
    // bl ov40_022309DC
    // mov r1, #0x51
    // lsl r1, r1, #4
    // str r0, [r4, r1]
    // mov r0, #1
    // add r1, #0xc
    // str r0, [r4, r1]
    // ldr r0, [r4, #0x10]
    // mov r1, #0x12
    // str r1, [r0]
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02230D1C: .word 0x00000504
    // TODO: decompile
}




void ov40_02230D20(void) {
    // push {r4, lr}
    // ldr r2, _02230D90 ; =0x00000514
    // add r4, r0, #0
    // ldr r1, [r4, r2]
    // cmp r1, #0
    // beq _02230D32
    // cmp r1, #1
    // beq _02230D58
    // b _02230D70
    // add r1, r2, #4
    // ldr r1, [r4, r1]
    // cmp r1, #8
    // bge _02230D46
    // add r0, r2, #4
    // ldr r0, [r4, r0]
    // add r1, r0, #1
    // add r0, r2, #4
    // str r1, [r4, r0]
    // pop {r4, pc}
    // sub r1, r2, #4
    // ldr r1, [r4, r1]
    // bl ov40_0222DED0
    // ldr r0, _02230D90 ; =0x00000514
    // ldr r1, [r4, r0]
    // add r1, r1, #1
    // str r1, [r4, r0]
    // pop {r4, pc}
    // bl System_GetTouchNew
    // cmp r0, #0
    // beq _02230D8C
    // add r0, r4, #0
    // bl ov40_0222DFB0
    // ldr r0, _02230D90 ; =0x00000514
    // ldr r1, [r4, r0]
    // add r1, r1, #1
    // str r1, [r4, r0]
    // pop {r4, pc}
    // add r0, r2, #4
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // ble _02230D84
    // add r0, r2, #4
    // ldr r0, [r4, r0]
    // sub r1, r0, #1
    // add r0, r2, #4
    // str r1, [r4, r0]
    // pop {r4, pc}
    // sub r2, #8
    // ldr r1, [r4, r2]
    // ldr r0, [r4, #0x10]
    // str r1, [r0]
    // pop {r4, pc}
    // nop
    // _02230D90: .word 0x00000514
    // TODO: decompile
}




void ov40_02230D94(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r1, #0
    // add r7, r2, #0
    // mov r4, #1
    // add r5, r0, #4
    // ldr r0, _02230DC8 ; =0x0000087C
    // ldr r0, [r5, r0]
    // cmp r0, #0
    // beq _02230DBA
    // mov r1, #4
    // mov r2, #0
    // bl sub_0203088C
    // eor r1, r7
    // eor r0, r6
    // orr r0, r1
    // bne _02230DBA
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // add r4, r4, #1
    // add r5, r5, #4
    // cmp r4, #4
    // blt _02230D9E
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02230DC8: .word 0x0000087C
    // TODO: decompile
}




void ov40_02230DCC(void) {
    ov40_0223D540();
    // ldr r1, [r4, r1]
    String_New(0x40, (0x51 << 2));
    FontID_String_AllCharsValid(0, r5, r0);
    // ldr r1, [r4, r1]
    ov40_02230E08(r5, (0x51 << 2));
    String_Delete(r6);
}




void ov40_02230E08(void) {
    String_SetEmpty();
    NewMsgDataFromNarc(1, 0x1b, 0xd, r5);
    ReadMsgDataIntoString((0x53 << 2), r4);
    DestroyMsgData(r5);
}




void ov40_02230E34(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0x14
    // ldr r4, _02230EAC ; =0x000008A4
    // add r5, r0, #0
    // add r0, r5, r4
    // bl InitWindow
    // mov r0, #0x10
    // str r0, [sp]
    // str r0, [sp, #4]
    // mov r2, #2
    // str r2, [sp, #8]
    // mov r0, #0xe
    // str r0, [sp, #0xc]
    // mov r0, #0x4b
    // lsl r0, r0, #2
    // str r0, [sp, #0x10]
    // ldr r0, [r5, #0x24]
    // add r1, r5, r4
    // mov r3, #8
    // bl AddWindowParameterized
    // add r0, r5, r4
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // ldr r0, [r5, #0x48]
    // mov r1, #0xc0
    // bl NewString_ReadMsgData
    // add r6, r0, #0
    // add r0, r5, r4
    // add r1, r6, #0
    // bl ov40_022306C0
    // mov r1, #0
    // add r3, r0, #0
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _02230EB0 ; =0x00010E00
    // add r2, r6, #0
    // str r0, [sp, #8]
    // add r0, r5, r4
    // str r1, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r6, #0
    // bl String_Delete
    // add r0, r5, r4
    // bl ScheduleWindowCopyToVram
    // mov r0, #4
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // add sp, #0x14
    // pop {r3, r4, r5, r6, pc}
    // nop
    // _02230EAC: .word 0x000008A4
    // _02230EB0: .word 0x00010E00
    // TODO: decompile
}




void ov40_02230EB4(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _02230ED4 ; =0x000008A4
    // add r0, r4, r0
    // bl ClearWindowTilemapAndCopyToVram
    // ldr r0, _02230ED4 ; =0x000008A4
    // add r0, r4, r0
    // bl RemoveWindow
    // mov r0, #4
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // pop {r4, pc}
    // nop
    // _02230ED4: .word 0x000008A4
    // TODO: decompile
}




void ov40_02230ED8(void) {
    // push {r3, r4, lr}
    // sub sp, #0xc
    // add r4, r0, #0
    // ldr r1, [r4, #8]
    // cmp r1, #6
    // bls _02230EE6
    // b _022310DA
    // add r2, r1, r1
    // add r2, pc
    // ldrh r2, [r2, #6]
    // lsl r2, r2, #0x10
    // asr r2, r2, #0x10
    // add pc, r2
    // _02230EF2: ; jump table
    // bl ov40_0222C4DC
    // cmp r0, #1
    // bne _02230F12
    // add r0, r4, #0
    // mov r1, #1
    // bl ov40_0222BF80
    // b _022310E2
    // mov r0, #6
    // str r0, [sp]
    // mov r1, #1
    // str r1, [sp, #4]
    // mov r0, #0x6d
    // str r0, [sp, #8]
    // mov r0, #0
    // add r2, r1, #0
    // add r3, r0, #0
    // bl BeginNormalPaletteFade
    // add r0, r4, #0
    // bl ov40_0222DAF0
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r0, [r4, #0x28]
    // ldr r2, _022310E8 ; =0x0000FFFE
    // mov r1, #2
    // mov r3, #0x10
    // bl PaletteData_BlendPalettes
    // add r0, r4, #0
    // bl ov40_0222DAF0
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r0, [r4, #0x28]
    // ldr r2, _022310EC ; =0x0000BFFF
    // mov r1, #0
    // mov r3, #0x10
    // bl PaletteData_BlendPalettes
    // add r0, r4, #0
    // bl ov40_0222DAF0
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r0, [r4, #0x28]
    // ldr r2, _022310F0 ; =0x00003FFE
    // mov r1, #3
    // mov r3, #0x10
    // bl PaletteData_BlendPalettes
    // add r0, r4, #0
    // bl ov40_0222DAF0
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r0, [r4, #0x28]
    // ldr r2, _022310F4 ; =0x0000FFFF
    // mov r1, #1
    // mov r3, #0x10
    // bl PaletteData_BlendPalettes
    // ldr r0, _022310F8 ; =0x000006F4
    // ldr r0, [r4, r0]
    // bl sub_02087A30
    // mov r0, #0x6f
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // bl sub_02087A30
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _022310E2
    // bl IsPaletteFadeFinished
    // cmp r0, #0
    // bne _02230FAC
    // b _022310E2
    // ldr r0, _022310F8 ; =0x000006F4
    // mov r1, #0x80
    // ldr r0, [r4, r0]
    // mov r2, #0x10
    // bl sub_02087948
    // ldr r0, _022310F8 ; =0x000006F4
    // mov r1, #0x80
    // ldr r0, [r4, r0]
    // mov r2, #0xd8
    // bl sub_020878B8
    // ldr r0, _022310F8 ; =0x000006F4
    // mov r1, #1
    // ldr r0, [r4, r0]
    // bl sub_020879E0
    // ldr r0, _022310F8 ; =0x000006F4
    // mov r1, #1
    // ldr r0, [r4, r0]
    // bl sub_020878B0
    // ldr r0, _022310FC ; =0x00000576
    // bl PlaySE
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _022310E2
    // ldr r0, [r4, #0xc]
    // add r0, r0, #1
    // str r0, [r4, #0xc]
    // cmp r0, #0x19
    // blt _022310E2
    // mov r0, #0
    // str r0, [r4, #0xc]
    // mov r0, #0x6f
    // lsl r0, r0, #4
    // mov r1, #0x80
    // add r2, r1, #0
    // ldr r0, [r4, r0]
    // sub r2, #0x90
    // bl sub_02087948
    // mov r0, #0x6f
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #0x80
    // mov r2, #0x60
    // bl sub_020878B8
    // mov r0, #0x6f
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #1
    // bl sub_020879E0
    // mov r0, #0x6f
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #1
    // bl sub_020878B0
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _022310E2
    // ldr r1, [r4, #0xc]
    // add r1, r1, #1
    // str r1, [r4, #0xc]
    // cmp r1, #0x12
    // blt _022310E2
    // bl ov40_02230E34
    // ldr r0, _022310F8 ; =0x000006F4
    // mov r1, #0
    // ldr r0, [r4, r0]
    // bl sub_020879E0
    // mov r0, #0
    // str r0, [r4, #0xc]
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _022310E2
    // ldr r0, [r4, #0xc]
    // cmp r0, #0x10
    // bge _02231078
    // add r0, r0, #4
    // str r0, [r4, #0xc]
    // ldr r0, _022310F4 ; =0x0000FFFF
    // mov r2, #0xf
    // str r0, [sp]
    // ldr r3, [r4, #0xc]
    // ldr r0, [r4, #0x28]
    // lsl r3, r3, #0x18
    // mov r1, #0
    // lsl r2, r2, #0xc
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // b _022310E2
    // add r0, r1, #1
    // str r0, [r4, #8]
    // b _022310E2
    // ldr r0, [r4, #0xc]
    // cmp r0, #0
    // ble _022310A0
    // sub r0, r0, #4
    // str r0, [r4, #0xc]
    // ldr r0, _022310F4 ; =0x0000FFFF
    // mov r2, #0xf
    // str r0, [sp]
    // ldr r3, [r4, #0xc]
    // ldr r0, [r4, #0x28]
    // lsl r3, r3, #0x18
    // mov r1, #0
    // lsl r2, r2, #0xc
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // b _022310E2
    // add r0, r1, #1
    // str r0, [r4, #8]
    // b _022310E2
    // bl System_GetTouchHeld
    // cmp r0, #1
    // bne _022310E2
    // add r0, r4, #0
    // bl ov40_02230EB4
    // mov r0, #0x6f
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl sub_020879E0
    // ldr r0, _022310F8 ; =0x000006F4
    // ldr r0, [r4, r0]
    // bl sub_02087A54
    // mov r0, #0x6f
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // bl sub_02087A54
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _022310E2
    // add r0, r4, #0
    // mov r1, #1
    // bl ov40_0222BF80
    // mov r0, #0
    // add sp, #0xc
    // pop {r3, r4, pc}
    // _022310E8: .word 0x0000FFFE
    // _022310EC: .word 0x0000BFFF
    // _022310F0: .word 0x00003FFE
    // _022310F4: .word 0x0000FFFF
    // _022310F8: .word 0x000006F4
    // _022310FC: .word 0x00000576
    // TODO: decompile
}




void ov40_02231100(void) {
    // push {r4, lr}
    // sub sp, #0x10
    // add r4, r0, #0
    // ldr r1, [r4, #8]
    // cmp r1, #0
    // beq _02231118
    // cmp r1, #1
    // beq _022311E8
    // cmp r1, #2
    // bne _02231116
    // b _022312AE
    // b _022312EE
    // mov r1, #1
    // bl ov40_02230964
    // add r0, r4, #0
    // bl ov40_0222C750
    // add r0, r4, #0
    // bl ov40_0222C884
    // add r0, r4, #0
    // bl ov40_0222CAD8
    // add r0, r4, #0
    // bl ov40_0222CCAC
    // add r0, r4, #0
    // bl ov40_0222D2A0
    // add r0, r4, #0
    // bl ov40_0222CE7C
    // add r0, r4, #0
    // bl ov40_0222CF10
    // add r0, r4, #0
    // mov r1, #0
    // bl ov40_02230964
    // add r0, r4, #0
    // bl ov40_0222C4DC
    // cmp r0, #1
    // bne _022311D6
    // ldr r0, [r4]
    // cmp r0, #0
    // bne _0223117A
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x6d
    // str r0, [sp, #0xc]
    // ldr r0, [r4, #0x14]
    // ldr r2, [r4, #0x24]
    // mov r1, #0x45
    // mov r3, #5
    // bl GfGfxLoader_LoadScrnDataFromOpenNarc
    // b _02231192
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x6d
    // str r0, [sp, #0xc]
    // ldr r0, [r4, #0x14]
    // ldr r2, [r4, #0x24]
    // mov r1, #0x37
    // mov r3, #5
    // bl GfGfxLoader_LoadScrnDataFromOpenNarc
    // mov r0, #0x6f
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #0x80
    // mov r2, #0xe0
    // bl sub_02087948
    // mov r0, #0x6f
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #0x80
    // mov r2, #0xe0
    // bl sub_020878B8
    // mov r0, #0x6f
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl sub_020879E0
    // mov r0, #0x6f
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #1
    // bl sub_020878B0
    // ldr r1, _02231304 ; =0x0000083C
    // ldr r3, [r4, #0x10]
    // ldr r1, [r4, r1]
    // add r0, r4, #0
    // mov r2, #1
    // bl ov40_0222BF64
    // b _022312FC
    // ldr r0, _02231308 ; =0x00000573
    // bl PlaySE
    // mov r0, #0x10
    // str r0, [r4, #0xc]
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _022312FC
    // bl ov40_0222C4DC
    // cmp r0, #1
    // bne _02231202
    // bl IsPaletteFadeFinished
    // cmp r0, #1
    // beq _022311FA
    // b _022312FC
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _022312FC
    // ldr r0, [r4, #0xc]
    // cmp r0, #0
    // beq _0223127E
    // sub r0, r0, #2
    // str r0, [r4, #0xc]
    // add r0, r4, #0
    // bl ov40_0222DAF0
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r4, #0xc]
    // ldr r0, [r4, #0x28]
    // lsl r3, r3, #0x18
    // ldr r2, _0223130C ; =0x0000FFFE
    // mov r1, #2
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // add r0, r4, #0
    // bl ov40_0222DAF0
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r4, #0xc]
    // ldr r0, [r4, #0x28]
    // lsl r3, r3, #0x18
    // ldr r2, _02231310 ; =0x0000FFFF
    // mov r1, #0
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // add r0, r4, #0
    // bl ov40_0222DAF0
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r4, #0xc]
    // ldr r0, [r4, #0x28]
    // lsl r3, r3, #0x18
    // ldr r2, _02231314 ; =0x00003FFE
    // mov r1, #3
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // add r0, r4, #0
    // bl ov40_0222DAF0
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r4, #0xc]
    // ldr r0, [r4, #0x28]
    // lsl r3, r3, #0x18
    // ldr r2, _02231310 ; =0x0000FFFF
    // mov r1, #1
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // b _022312FC
    // ldr r0, [r4, #0x58]
    // mov r1, #1
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r0, [r4, #0x28]
    // mov r2, #2
    // mov r3, #0x10
    // bl PaletteData_BlendPalettes
    // ldr r0, [r4, #0x58]
    // mov r1, #2
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r0, [r4, #0x28]
    // mov r2, #0xc
    // mov r3, #0x10
    // bl PaletteData_BlendPalettes
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _022312FC
    // ldr r0, [r4]
    // cmp r0, #0
    // bne _022312CE
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x6d
    // str r0, [sp, #0xc]
    // ldr r0, [r4, #0x14]
    // ldr r2, [r4, #0x24]
    // mov r1, #0x45
    // mov r3, #5
    // bl GfGfxLoader_LoadScrnDataFromOpenNarc
    // b _022312E6
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x6d
    // str r0, [sp, #0xc]
    // ldr r0, [r4, #0x14]
    // ldr r2, [r4, #0x24]
    // mov r1, #0x37
    // mov r3, #5
    // bl GfGfxLoader_LoadScrnDataFromOpenNarc
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _022312FC
    // ldr r1, _02231318 ; =0x00000724
    // ldr r1, [r4, r1]
    // cmp r1, #3
    // blt _022312FC
    // mov r1, #2
    // bl ov40_0222BF80
    // mov r0, #0
    // add sp, #0x10
    // pop {r4, pc}
    // nop
    // _02231304: .word 0x0000083C
    // _02231308: .word 0x00000573
    // _0223130C: .word 0x0000FFFE
    // _02231310: .word 0x0000FFFF
    // _02231314: .word 0x00003FFE
    // _02231318: .word 0x00000724
    // TODO: decompile
}




void ov40_0223131C(void) {
    // ldr r0, [r4, r0]
    sub_02087948((0x6f << 4), 0x80, 0x60);
    // ldr r0, [r4, r0]
    sub_020878B8((0x6f << 4), 0x80, 0x60);
    // ldr r0, [r4, r0]
    sub_020879E0((0x6f << 4), 1);
    // ldr r0, [r4, r0]
    sub_020878B0((0x6f << 4), 1);
    *((u32*)(r4 + 0xc)) = (*((u32*)(r4 + 0xc)) + 1);
    // str r0, [sp]
    // sub r3, r3, r5
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 1, 2, ((0x10 << 0x18) >> 0x18));
    *((u32*)(r4 + 0xc)) = 0xf;
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 1, 2, ((*((u32*)(r4 + 0xc)) << 0x18) >> 0x18));
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    *((u32*)(r4 + 0xc)) = (*((u32*)(r4 + 0xc)) - 1);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 1, 2, ((*((u32*)(r4 + 0xc)) << 0x18) >> 0x18));
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    ov40_0222BF80((*((u32*)(r4 + 8)) + 1), 3);
}




void ov40_022313F0(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // bl ov40_0223142C
    // add r4, r0, #0
    // ldr r0, _02231428 ; =0x000005FC
    // add r1, sp, #0
    // ldr r0, [r5, r0]
    // add r1, #2
    // add r2, sp, #0
    // bl ov40_0222D294
    // mov r0, #0x6f
    // lsl r0, r0, #4
    // add r3, sp, #0
    // mov r1, #2
    // ldrsh r1, [r3, r1]
    // mov r2, #0
    // ldrsh r2, [r3, r2]
    // add r1, #0x10
    // lsl r1, r1, #0x10
    // ldr r0, [r5, r0]
    // asr r1, r1, #0x10
    // bl sub_020878B8
    // add r0, r4, #0
    // pop {r3, r4, r5, pc}
    // nop
    // _02231428: .word 0x000005FC
    // TODO: decompile
}




void ov40_0223142C(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x24
    // add r5, r0, #0
    // ldr r0, [r5, #8]
    // cmp r0, #0
    // beq _0223143E
    // cmp r0, #1
    // beq _0223152A
    // b _0223161A
    // mov r0, #0x6d
    // mov r1, #0x54
    // bl Heap_Alloc
    // mov r1, #0
    // mov r2, #0x54
    // add r4, r0, #0
    // bl MI_CpuFill8
    // mov r0, #0x86
    // lsl r0, r0, #4
    // str r4, [r5, r0]
    // add r0, r4, #0
    // add r3, r4, #0
    // mov r1, #0x10
    // add r0, #0x50
    // strb r1, [r0]
    // ldr r0, [r5, #0x58]
    // add r3, #0x50
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldrb r3, [r3]
    // ldr r0, [r5, #0x28]
    // mov r1, #2
    // mov r2, #0xc
    // bl PaletteData_BlendPalettes
    // mov r0, #0
    // str r0, [sp, #0x14]
    // mov r0, #0x6e
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // cmp r0, #0
    // ble _02231522
    // ldr r0, [sp, #0x14]
    // mov r7, #0x19
    // str r0, [sp, #4]
    // add r6, r5, #0
    // ldr r0, [sp, #4]
    // mov r2, #0x6e
    // str r0, [r4]
    // mov r0, #0x5a
    // str r0, [r4, #4]
    // mov r0, #0x6e
    // lsl r0, r0, #4
    // ldr r1, [r5, r0]
    // mov r0, #5
    // sub r0, r0, r1
    // lsl r0, r0, #4
    // add r0, r7, r0
    // strh r0, [r4, #8]
    // lsl r2, r2, #4
    // ldr r3, [r5, r2]
    // mov r2, #5
    // sub r2, r2, r3
    // ldr r0, _02231690 ; =0x000005FC
    // lsl r2, r2, #4
    // add r2, #0xa9
    // lsl r2, r2, #0x10
    // ldr r0, [r6, r0]
    // mov r1, #0x2a
    // asr r2, r2, #0x10
    // bl ov40_0222D288
    // ldr r0, _02231690 ; =0x000005FC
    // add r1, r4, #0
    // ldr r0, [r6, r0]
    // add r1, #0xc
    // add r2, sp, #0x20
    // bl ManagedSprite_GetSpritePositionFxXY
    // mov r2, #0x6e
    // lsl r2, r2, #4
    // ldr r3, [r5, r2]
    // mov r2, #5
    // ldr r0, _02231690 ; =0x000005FC
    // sub r2, r2, r3
    // lsl r2, r2, #4
    // add r2, #0xa9
    // ldr r0, [r6, r0]
    // ldr r1, [r4, #0xc]
    // lsl r2, r2, #0xc
    // bl ManagedSprite_SetPositonFxXY
    // mov r0, #0x61
    // lsl r0, r0, #4
    // mov r1, #0x24
    // add r2, r1, #0
    // ldr r0, [r6, r0]
    // sub r2, #0x2c
    // bl sub_020136B4
    // mov r0, #0x61
    // lsl r0, r0, #4
    // ldr r0, [r6, r0]
    // mov r1, #1
    // bl TextOBJ_SetSpritesDrawFlag
    // ldr r0, [sp, #4]
    // add r4, #0x10
    // add r0, r0, #4
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x14]
    // add r7, #0x24
    // add r0, r0, #1
    // str r0, [sp, #0x14]
    // mov r0, #0x6e
    // lsl r0, r0, #4
    // ldr r1, [r5, r0]
    // ldr r0, [sp, #0x14]
    // add r6, #0x28
    // cmp r0, r1
    // blt _0223148C
    // ldr r0, [r5, #8]
    // add r0, r0, #1
    // str r0, [r5, #8]
    // b _0223168A
    // mov r0, #0x86
    // lsl r0, r0, #4
    // ldr r4, [r5, r0]
    // add r0, r4, #0
    // add r0, #0x50
    // ldrb r0, [r0]
    // cmp r0, #0
    // beq _02231560
    // add r0, r4, #0
    // add r0, #0x50
    // ldrb r0, [r0]
    // add r3, r4, #0
    // add r3, #0x50
    // sub r1, r0, #1
    // add r0, r4, #0
    // add r0, #0x50
    // strb r1, [r0]
    // ldr r0, [r5, #0x58]
    // mov r1, #2
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldrb r3, [r3]
    // ldr r0, [r5, #0x28]
    // mov r2, #0xc
    // bl PaletteData_BlendPalettes
    // mov r0, #0
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // mov r0, #0x6e
    // lsl r0, r0, #4
    // ldr r1, [r5, r0]
    // cmp r1, #0
    // ble _0223160C
    // add r6, r5, #0
    // add r7, sp, #0x18
    // ldr r0, [r4]
    // cmp r0, #0
    // beq _02231580
    // sub r0, r0, #1
    // str r0, [r4]
    // b _022315F6
    // ldr r0, _02231690 ; =0x000005FC
    // add r1, sp, #0x1c
    // ldr r0, [r6, r0]
    // add r1, #2
    // add r2, sp, #0x1c
    // bl ov40_0222D294
    // mov r0, #8
    // mov r1, #4
    // ldrsh r0, [r4, r0]
    // ldrsh r2, [r7, r1]
    // cmp r2, r0
    // bne _022315A2
    // ldr r0, [sp, #0xc]
    // add r0, r0, #1
    // str r0, [sp, #0xc]
    // b _022315F6
    // add r1, r2, #0
    // sub r1, #8
    // cmp r1, r0
    // ble _022315B0
    // sub r2, #8
    // strh r2, [r7, #4]
    // b _022315B2
    // strh r0, [r7, #4]
    // mov r0, #4
    // ldrsh r0, [r7, r0]
    // ldr r1, [r4, #4]
    // lsl r0, r0, #0xc
    // str r0, [sp, #8]
    // ldr r0, _02231694 ; =0x0000FFFF
    // mul r0, r1
    // mov r1, #0x5a
    // lsl r1, r1, #2
    // bl _s32_div_f
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // bl GF_SinDeg
    // lsl r1, r0, #4
    // ldr r0, [r4, #4]
    // ldr r2, [r4, #0xc]
    // sub r0, r0, #4
    // str r0, [r4, #4]
    // ldr r0, _02231690 ; =0x000005FC
    // add r1, r2, r1
    // ldr r0, [r6, r0]
    // ldr r2, [sp, #8]
    // bl ManagedSprite_SetPositonFxXY
    // mov r0, #0x61
    // lsl r0, r0, #4
    // mov r1, #0x24
    // add r2, r1, #0
    // ldr r0, [r6, r0]
    // sub r2, #0x2c
    // bl sub_020136B4
    // ldr r0, [sp, #0x10]
    // add r4, #0x10
    // add r0, r0, #1
    // str r0, [sp, #0x10]
    // mov r0, #0x6e
    // lsl r0, r0, #4
    // ldr r1, [r5, r0]
    // ldr r0, [sp, #0x10]
    // add r6, #0x28
    // cmp r0, r1
    // blt _02231574
    // ldr r0, [sp, #0xc]
    // cmp r0, r1
    // bne _0223168A
    // ldr r0, [r5, #8]
    // add r0, r0, #1
    // str r0, [r5, #8]
    // b _0223168A
    // ldr r1, _02231698 ; =0x000006E4
    // mov r0, #0x86
    // lsl r0, r0, #4
    // ldr r2, [r5, r1]
    // ldr r4, [r5, r0]
    // mov r0, #0x28
    // mul r0, r2
    // add r0, r5, r0
    // sub r1, #0xe8
    // ldr r0, [r0, r1]
    // add r1, sp, #0x18
    // add r1, #2
    // add r2, sp, #0x18
    // bl ov40_0222D294
    // mov r0, #0x6f
    // lsl r0, r0, #4
    // add r2, sp, #0x18
    // mov r1, #2
    // ldrsh r1, [r2, r1]
    // mov r3, #0
    // ldrsh r2, [r2, r3]
    // add r1, #0x10
    // lsl r1, r1, #0x10
    // ldr r0, [r5, r0]
    // asr r1, r1, #0x10
    // bl sub_02087948
    // mov r0, #0x6f
    // lsl r0, r0, #4
    // add r2, sp, #0x18
    // mov r1, #2
    // ldrsh r1, [r2, r1]
    // mov r3, #0
    // ldrsh r2, [r2, r3]
    // add r1, #0x10
    // lsl r1, r1, #0x10
    // ldr r0, [r5, r0]
    // asr r1, r1, #0x10
    // bl sub_020878B8
    // mov r0, #0x6f
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // mov r1, #0
    // bl sub_020879E0
    // add r0, r5, #0
    // bl ov40_0222C39C
    // add r0, r4, #0
    // bl Heap_Free
    // add sp, #0x24
    // mov r0, #1
    // pop {r4, r5, r6, r7, pc}
    // mov r0, #0
    // add sp, #0x24
    // pop {r4, r5, r6, r7, pc}
    // _02231690: .word 0x000005FC
    // _02231694: .word 0x0000FFFF
    // _02231698: .word 0x000006E4
    // TODO: decompile
}




void ov40_0223169C(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl System_GetTouchNew
    // cmp r0, #0
    // beq _022316B6
    // ldr r0, _022316F8 ; =0x0000089C
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // bne _022316B6
    // add r0, r4, #0
    // bl ov40_0222DE40
    // ldr r0, [r4]
    // cmp r0, #0
    // bne _022316EE
    // bl ov40_02231700
    // cmp r0, #1
    // beq _022316CA
    // cmp r0, #2
    // beq _022316DC
    // b _022316EE
    // ldr r0, _022316FC ; =0x0000057B
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #7
    // bl ov40_0222BF80
    // mov r0, #0
    // pop {r4, pc}
    // ldr r0, _022316FC ; =0x0000057B
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #8
    // bl ov40_0222BF80
    // mov r0, #0
    // pop {r4, pc}
    // add r0, r4, #0
    // bl ov40_0222C474
    // mov r0, #0
    // pop {r4, pc}
    // _022316F8: .word 0x0000089C
    // _022316FC: .word 0x0000057B
    // TODO: decompile
}




void ov40_02231700(void) {
    // push {r3, lr}
    // ldr r0, _02231724 ; =ov40_02245100
    // bl TouchscreenHitbox_TouchHeldIsIn
    // cmp r0, #0
    // beq _02231710
    // mov r0, #1
    // pop {r3, pc}
    // ldr r0, _02231728 ; =ov40_02245104
    // bl TouchscreenHitbox_TouchHeldIsIn
    // cmp r0, #0
    // beq _0223171E
    // mov r0, #2
    // pop {r3, pc}
    // mov r0, #0
    // pop {r3, pc}
    // nop
    // _02231724: .word ov40_02245100
    // _02231728: .word ov40_02245104
    // TODO: decompile
}




void ov40_0223172C(void) {
}




void ov40_02231748(void) {
    // push {r3, r4, lr}
    // sub sp, #0xc
    // add r4, r0, #0
    // ldr r1, [r4, #8]
    // cmp r1, #0
    // beq _0223175E
    // cmp r1, #1
    // beq _02231788
    // cmp r1, #2
    // beq _0223180E
    // b _0223183A
    // mov r1, #0
    // str r1, [r4, #0x54]
    // mov r0, #0x6f
    // str r1, [r4, #0xc]
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // bl sub_020879E0
    // ldr r0, _02231858 ; =0x000006F4
    // mov r1, #0
    // ldr r0, [r4, r0]
    // bl sub_020879E0
    // add r0, r4, #0
    // mov r1, #1
    // bl ov40_02230964
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _02231850
    // ldr r1, [r4, #0xc]
    // cmp r1, #0x10
    // beq _02231802
    // add r1, r1, #2
    // str r1, [r4, #0xc]
    // bl ov40_0222DAF0
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r4, #0xc]
    // ldr r0, [r4, #0x28]
    // lsl r3, r3, #0x18
    // ldr r2, _0223185C ; =0x0000FFFE
    // mov r1, #2
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // add r0, r4, #0
    // bl ov40_0222DAF0
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r4, #0xc]
    // ldr r0, [r4, #0x28]
    // lsl r3, r3, #0x18
    // ldr r2, _02231860 ; =0x0000FFFF
    // mov r1, #0
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // add r0, r4, #0
    // bl ov40_0222DAF0
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r4, #0xc]
    // ldr r0, [r4, #0x28]
    // lsl r3, r3, #0x18
    // ldr r2, _02231864 ; =0x00003FFE
    // mov r1, #3
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // add r0, r4, #0
    // bl ov40_0222DAF0
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r4, #0xc]
    // ldr r0, [r4, #0x28]
    // lsl r3, r3, #0x18
    // ldr r2, _02231860 ; =0x0000FFFF
    // mov r1, #1
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // b _02231850
    // mov r0, #0x10
    // str r0, [r4, #0xc]
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _02231850
    // ldr r0, [r4, #0xc]
    // cmp r0, #0
    // beq _0223181A
    // sub r0, r0, #4
    // str r0, [r4, #0xc]
    // b _02231850
    // mov r0, #6
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // mov r0, #0x6d
    // str r0, [sp, #8]
    // mov r0, #0
    // add r1, r0, #0
    // add r2, r0, #0
    // add r3, r0, #0
    // bl BeginNormalPaletteFade
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _02231850
    // bl IsPaletteFadeFinished
    // cmp r0, #1
    // bne _02231850
    // add r0, r4, #0
    // mov r1, #0
    // bl ov40_02230964
    // add sp, #0xc
    // mov r0, #1
    // pop {r3, r4, pc}
    // mov r0, #0
    // add sp, #0xc
    // pop {r3, r4, pc}
    // nop
    // _02231858: .word 0x000006F4
    // _0223185C: .word 0x0000FFFE
    // _02231860: .word 0x0000FFFF
    // _02231864: .word 0x00003FFE
    // TODO: decompile
}




void ov40_02231868(void) {
    ov40_0223142C();
    // ldr r0, [r4, r0]
    sub_020879E0((0x6f << 4), 0);
    ov40_0222BF80(r4, 0);
    ov40_0222BF80(r4, 1);
}




void ov40_0223189C(void) {
    // ldr r0, [r4, r0]
    sub_020879E0((0x6f << 4), 0);
    ov40_0222BF80(r4, 0);
    ov40_0222BF80(1);
}




void ov40_022318C8(void) {
    // ldrsh r1, [r4, r0]
    // ldrsh r0, [r4, r0]
    // sub r0, r1, r0
    _s32_div_f(0, *((u8*)(r1 + 0x1c)));
    *((u16*)(r4 + 8)) = r0;
    // ldrsh r1, [r4, r0]
    // ldrsh r0, [r4, r0]
    // sub r0, r1, r0
    _s32_div_f(2, *((u8*)(r4 + 0x1c)));
    *((u16*)(r4 + 0xa)) = r0;
    *((u8*)(r4 + 0x1d)) = (*((u8*)(r4 + 0x1d)) + 1);
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    ov40_0222D294(*((u32*)(r4 + 0x20)));
    // add r1, sp, #0
    *((u8*)(r4 + 0x1c)) = (*((u8*)(r4 + 0x1c)) - 1);
    // ldrsh r0, [r4, r0]
    *((u16*)(r1 + 2)) = 4;
    // ldrsh r0, [r4, r0]
    // strh r0, [r1]
    *((u8*)(r4 + 0x1d)) = (*((u8*)(r4 + 0x1d)) + 1);
    // ldrsh r2, [r1, r0]
    // ldrsh r0, [r4, r0]
    // add r0, r2, r0
    *((u16*)(r1 + 2)) = 8;
    // ldrsh r2, [r1, r0]
    // ldrsh r0, [r4, r0]
    // add r0, r2, r0
    // strh r0, [r1]
    // add r3, sp, #0
    // ldrsh r1, [r3, r1]
    // ldrsh r2, [r3, r2]
    // add r1, #0x10
    // asr r1, r1, #0x10
    sub_020878B8(*((u32*)(r4 + 0x28)), (2 << 0x10), 0);
    // str r1, [r0]
    // add r3, sp, #0
    // ldrsh r1, [r3, r1]
    // ldrsh r2, [r3, r2]
    ov40_0222D288(*((u32*)(r4 + 0x20)), 2, 0);
    // sub r2, #0x2c
    sub_020136B4(*((u32*)(r4 + 0x24)), 0x24, 0x24);
    // str r1, [r0]
    Heap_Free(r4, 1);
    SysTask_Destroy(r5);
}




void ov40_022319A4(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x1c
    // add r4, r0, #0
    // ldr r1, [r4, #8]
    // cmp r1, #0
    // beq _022319BC
    // cmp r1, #1
    // beq _02231A9A
    // cmp r1, #2
    // bne _022319BA
    // b _02231C24
    // b _02231C54
    // mov r0, #0x6d
    // mov r1, #0x10
    // bl Heap_Alloc
    // str r0, [sp, #4]
    // mov r1, #0
    // mov r2, #0x10
    // bl MI_CpuFill8
    // mov r1, #0x86
    // ldr r0, [sp, #4]
    // lsl r1, r1, #4
    // str r0, [r4, r1]
    // mov r7, #0
    // str r7, [r0, #8]
    // mov r0, #0x6e
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // ble _02231A8C
    // ldr r0, [sp, #4]
    // add r6, r4, #0
    // add r0, r0, #4
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #4]
    // str r0, [sp, #0x10]
    // add r0, #0xc
    // str r0, [sp, #0x10]
    // mov r0, #0x6d
    // mov r1, #0x34
    // bl Heap_Alloc
    // mov r1, #0
    // mov r2, #0x34
    // add r5, r0, #0
    // bl memset
    // ldr r0, _02231C5C ; =0x000005FC
    // add r1, r5, #0
    // ldr r0, [r6, r0]
    // add r2, r5, #2
    // bl ov40_0222D294
    // ldr r0, _02231C5C ; =0x000005FC
    // ldr r0, [r6, r0]
    // str r0, [r5, #0x20]
    // mov r0, #0x61
    // lsl r0, r0, #4
    // ldr r0, [r6, r0]
    // str r0, [r5, #0x24]
    // ldr r0, [sp, #0xc]
    // str r0, [r5, #0x2c]
    // ldr r0, [sp, #0x10]
    // str r0, [r5, #0x30]
    // ldr r0, _02231C60 ; =0x000006E4
    // ldr r0, [r4, r0]
    // cmp r7, r0
    // bne _02231A4A
    // mov r0, #0x6f
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // str r0, [r5, #0x28]
    // mov r0, #0
    // ldrsh r0, [r5, r0]
    // strh r0, [r5, #4]
    // mov r0, #0x2f
    // mvn r0, r0
    // strh r0, [r5, #6]
    // mov r0, #8
    // strb r0, [r5, #0x1c]
    // b _02231A72
    // mov r0, #0
    // str r0, [r5, #0x28]
    // ldrsh r0, [r5, r0]
    // strh r0, [r5, #4]
    // mov r0, #0x6e
    // lsl r0, r0, #4
    // ldr r1, [r4, r0]
    // mov r0, #5
    // sub r0, r0, r1
    // lsl r0, r0, #4
    // add r0, #0xcd
    // strh r0, [r5, #6]
    // mov r0, #6
    // ldrsh r0, [r5, r0]
    // cmp r0, #0xdd
    // blt _02231A6E
    // mov r0, #0xdd
    // strh r0, [r5, #6]
    // mov r0, #8
    // strb r0, [r5, #0x1c]
    // mov r2, #2
    // ldr r0, _02231C64 ; =ov40_022318C8
    // add r1, r5, #0
    // lsl r2, r2, #0xc
    // bl SysTask_CreateOnMainQueue
    // mov r0, #0x6e
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // add r7, r7, #1
    // add r6, #0x28
    // cmp r7, r0
    // blt _022319F4
    // ldr r0, [sp, #4]
    // mov r1, #0
    // str r1, [r0]
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _02231C54
    // mov r0, #0x86
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // str r0, [sp, #8]
    // ldr r0, [r0]
    // cmp r0, #0x10
    // beq _02231AC8
    // add r1, r0, #2
    // ldr r0, [sp, #8]
    // ldr r3, [sp, #8]
    // str r1, [r0]
    // ldr r0, [r4, #0x58]
    // mov r1, #2
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r3]
    // ldr r0, [r4, #0x28]
    // lsl r3, r3, #0x18
    // mov r2, #0xc
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // ldr r0, [sp, #8]
    // ldr r0, [r0, #0xc]
    // cmp r0, #1
    // beq _02231AD2
    // b _02231BDC
    // ldr r0, [sp, #8]
    // mov r7, #0
    // ldr r0, [r0, #8]
    // cmp r0, #0
    // bne _02231BD2
    // ldr r0, [sp, #8]
    // mov r1, #1
    // str r1, [r0, #8]
    // ldr r0, _02231C68 ; =0x00000534
    // add r6, r4, #0
    // add r0, r4, r0
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #8]
    // add r0, r0, #4
    // str r0, [sp, #0x14]
    // mov r0, #0x6d
    // mov r1, #0x34
    // bl Heap_Alloc
    // mov r1, #0
    // mov r2, #0x34
    // add r5, r0, #0
    // bl memset
    // ldr r0, _02231C68 ; =0x00000534
    // add r1, r5, #0
    // ldr r0, [r6, r0]
    // add r2, r5, #2
    // bl ov40_0222D294
    // ldr r0, _02231C68 ; =0x00000534
    // ldr r0, [r6, r0]
    // str r0, [r5, #0x20]
    // ldr r0, _02231C6C ; =0x00000548
    // ldr r0, [r6, r0]
    // str r0, [r5, #0x24]
    // ldr r0, [sp, #0x14]
    // str r0, [r5, #0x2c]
    // mov r0, #0
    // str r0, [r5, #0x28]
    // ldrsh r0, [r5, r0]
    // strh r0, [r5, #4]
    // ldr r0, _02231C70 ; =0x000006D8
    // ldr r0, [r4, r0]
    // cmp r0, r7
    // bne _02231B98
    // mov r0, #0
    // ldrsh r0, [r5, r0]
    // ldr r1, _02231C74 ; =0x00000818
    // strh r0, [r5, #4]
    // mov r0, #0xa9
    // strh r0, [r5, #6]
    // ldr r3, [r4, r1]
    // ldr r1, _02231C60 ; =0x000006E4
    // ldr r0, _02231C68 ; =0x00000534
    // ldr r2, [r4, r1]
    // mov r1, #0x24
    // mul r1, r2
    // add r1, r3, r1
    // ldr r0, [r6, r0]
    // ldr r1, [r1, #0xc]
    // bl ManagedSprite_SetAnim
    // ldr r0, _02231C60 ; =0x000006E4
    // mov r2, #0x28
    // ldr r1, [r4, r0]
    // mov r0, #0x24
    // add r3, r1, #0
    // ldr r1, _02231C70 ; =0x000006D8
    // mul r3, r0
    // ldr r0, _02231C74 ; =0x00000818
    // ldr r1, [r4, r1]
    // ldr r0, [r4, r0]
    // mul r2, r1
    // ldr r1, [sp, #0x18]
    // mov ip, r0
    // add r1, r1, r2
    // mov r2, ip
    // add r3, r2, r3
    // ldr r2, [r3, #8]
    // add r0, r4, #0
    // bl ov40_0222D3E8
    // ldr r0, _02231C70 ; =0x000006D8
    // ldr r1, [r4, r0]
    // mov r0, #0x28
    // mul r0, r1
    // add r1, r4, r0
    // ldr r0, _02231C6C ; =0x00000548
    // ldr r0, [r1, r0]
    // mov r1, #1
    // bl TextOBJ_SetSpritesDrawFlag
    // ldr r0, _02231C68 ; =0x00000534
    // mov r1, #1
    // ldr r0, [r6, r0]
    // bl ManagedSprite_SetDrawFlag
    // b _02231BB6
    // mov r0, #0
    // ldrsh r0, [r5, r0]
    // mov r1, #4
    // sub r0, r0, #4
    // strh r0, [r5, #4]
    // ldr r0, _02231C70 ; =0x000006D8
    // ldr r0, [r4, r0]
    // sub r2, r0, r7
    // lsl r0, r2, #4
    // sub r2, r1, r2
    // mov r1, #0x24
    // mul r1, r2
    // add r1, #0x19
    // add r0, r0, r1
    // strh r0, [r5, #6]
    // mov r0, #4
    // strb r0, [r5, #0x1c]
    // mov r2, #2
    // ldr r0, _02231C64 ; =ov40_022318C8
    // add r1, r5, #0
    // lsl r2, r2, #0xc
    // bl SysTask_CreateOnMainQueue
    // ldr r0, _02231C70 ; =0x000006D8
    // add r7, r7, #1
    // ldr r0, [r4, r0]
    // add r6, #0x28
    // cmp r7, r0
    // ble _02231AF0
    // ldr r0, [sp, #8]
    // ldr r1, [r0, #0xc]
    // str r1, [r0, #4]
    // mov r1, #0
    // str r1, [r0, #0xc]
    // ldr r0, _02231C70 ; =0x000006D8
    // mov r5, #0
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // ble _02231C0E
    // ldr r7, _02231C68 ; =0x00000534
    // add r6, r4, #0
    // cmp r5, r0
    // bne _02231BF8
    // ldr r0, [r6, r7]
    // mov r1, #1
    // bl ManagedSprite_SetPaletteOverrideOffset
    // b _02231C02
    // ldr r0, _02231C68 ; =0x00000534
    // mov r1, #2
    // ldr r0, [r6, r0]
    // bl ManagedSprite_SetPaletteOverrideOffset
    // ldr r0, _02231C70 ; =0x000006D8
    // add r5, r5, #1
    // ldr r0, [r4, r0]
    // add r6, #0x28
    // cmp r5, r0
    // blt _02231BEA
    // ldr r0, [sp, #8]
    // ldr r0, [r0, #4]
    // cmp r0, #0
    // bne _02231C1C
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // ldr r0, [sp, #8]
    // mov r1, #0
    // str r1, [r0, #4]
    // b _02231C54
    // ldr r1, _02231C74 ; =0x00000818
    // ldr r3, [r4, r1]
    // ldr r1, _02231C60 ; =0x000006E4
    // ldr r2, [r4, r1]
    // mov r1, #0x24
    // mul r1, r2
    // add r1, r3, r1
    // ldr r1, [r1, #0x20]
    // cmp r1, #0
    // bne _02231C3E
    // bl ov40_0222C03C
    // b _02231C44
    // mov r1, #5
    // bl ov40_0222BF80
    // add r0, r4, #0
    // bl ov40_0222BFB0
    // mov r0, #0x86
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // bl Heap_Free
    // mov r0, #0
    // add sp, #0x1c
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _02231C5C: .word 0x000005FC
    // _02231C60: .word 0x000006E4
    // _02231C64: .word ov40_022318C8
    // _02231C68: .word 0x00000534
    // _02231C6C: .word 0x00000548
    // _02231C70: .word 0x000006D8
    // _02231C74: .word 0x00000818
    // TODO: decompile
}




void ov40_02231C78(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x18
    // add r5, r0, #0
    // ldr r1, [r5, #8]
    // cmp r1, #0
    // beq _02231C90
    // cmp r1, #1
    // beq _02231D52
    // cmp r1, #2
    // bne _02231C8E
    // b _02231E38
    // b _02231E72
    // mov r0, #0x6d
    // mov r1, #0x10
    // bl Heap_Alloc
    // str r0, [sp, #8]
    // mov r1, #0
    // mov r2, #0x10
    // bl MI_CpuFill8
    // mov r1, #0x86
    // ldr r0, [sp, #8]
    // lsl r1, r1, #4
    // str r0, [r5, r1]
    // add r0, r0, #4
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #8]
    // mov r6, #0
    // add r0, #0xc
    // add r7, r5, #0
    // str r0, [sp, #8]
    // mov r0, #0x6d
    // mov r1, #0x34
    // bl Heap_Alloc
    // mov r1, #0
    // mov r2, #0x34
    // add r4, r0, #0
    // bl memset
    // ldr r0, _02231E90 ; =0x00000534
    // add r1, r4, #0
    // ldr r0, [r7, r0]
    // add r2, r4, #2
    // bl ov40_0222D294
    // ldr r0, _02231E90 ; =0x00000534
    // ldr r0, [r7, r0]
    // str r0, [r4, #0x20]
    // ldr r0, _02231E94 ; =0x00000548
    // ldr r0, [r7, r0]
    // str r0, [r4, #0x24]
    // ldr r0, [sp, #0xc]
    // str r0, [r4, #0x2c]
    // ldr r0, [sp, #8]
    // str r0, [r4, #0x30]
    // mov r0, #0
    // str r0, [r4, #0x28]
    // ldrsh r0, [r4, r0]
    // strh r0, [r4, #4]
    // ldr r0, _02231E98 ; =0x000006D8
    // ldr r0, [r5, r0]
    // sub r0, r0, #1
    // cmp r0, r6
    // bne _02231D0E
    // mov r0, #0x6f
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // str r0, [r4, #0x28]
    // mov r0, #0
    // ldrsh r0, [r4, r0]
    // strh r0, [r4, #4]
    // mov r0, #0xd9
    // b _02231D2A
    // mov r0, #0
    // ldrsh r0, [r4, r0]
    // mov r1, #0x24
    // add r0, r0, #4
    // strh r0, [r4, #4]
    // ldr r0, _02231E98 ; =0x000006D8
    // ldr r0, [r5, r0]
    // sub r2, r0, r6
    // mov r0, #5
    // sub r0, r0, r2
    // mul r1, r0
    // add r1, #0x1d
    // lsl r0, r2, #4
    // add r0, r1, r0
    // strh r0, [r4, #6]
    // mov r0, #4
    // strb r0, [r4, #0x1c]
    // mov r2, #2
    // ldr r0, _02231E9C ; =ov40_022318C8
    // add r1, r4, #0
    // lsl r2, r2, #0xc
    // bl SysTask_CreateOnMainQueue
    // ldr r0, _02231E98 ; =0x000006D8
    // add r6, r6, #1
    // ldr r0, [r5, r0]
    // add r7, #0x28
    // sub r0, r0, #1
    // cmp r6, r0
    // ble _02231CB8
    // ldr r0, [r5, #8]
    // add r0, r0, #1
    // str r0, [r5, #8]
    // b _02231E88
    // mov r0, #0x86
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // str r0, [sp, #4]
    // ldr r0, [r0, #0xc]
    // cmp r0, #1
    // bne _02231E36
    // mov r0, #0x6e
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // mov r7, #0
    // cmp r0, #0
    // ble _02231DF2
    // ldr r0, [sp, #4]
    // add r6, r5, #0
    // add r0, r0, #4
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #4]
    // str r0, [sp, #0x14]
    // add r0, #0xc
    // str r0, [sp, #0x14]
    // mov r0, #0x6d
    // mov r1, #0x34
    // bl Heap_Alloc
    // mov r1, #0
    // mov r2, #0x34
    // add r4, r0, #0
    // bl memset
    // ldr r0, _02231EA0 ; =0x000005FC
    // add r1, r4, #0
    // ldr r0, [r6, r0]
    // add r2, r4, #2
    // bl ov40_0222D294
    // ldr r0, _02231EA0 ; =0x000005FC
    // ldr r0, [r6, r0]
    // str r0, [r4, #0x20]
    // mov r0, #0x61
    // lsl r0, r0, #4
    // ldr r0, [r6, r0]
    // str r0, [r4, #0x24]
    // ldr r0, [sp, #0x10]
    // str r0, [r4, #0x2c]
    // ldr r0, [sp, #0x14]
    // str r0, [r4, #0x30]
    // mov r0, #0
    // str r0, [r4, #0x28]
    // ldrsh r0, [r4, r0]
    // strh r0, [r4, #4]
    // mov r0, #0x6e
    // lsl r0, r0, #4
    // ldr r1, [r5, r0]
    // mov r0, #5
    // sub r0, r0, r1
    // lsl r0, r0, #4
    // add r0, #0xcd
    // strh r0, [r4, #6]
    // mov r0, #6
    // ldrsh r0, [r4, r0]
    // cmp r0, #0xdd
    // blt _02231DD4
    // mov r0, #0xdd
    // strh r0, [r4, #6]
    // mov r0, #8
    // strb r0, [r4, #0x1c]
    // mov r2, #2
    // ldr r0, _02231E9C ; =ov40_022318C8
    // add r1, r4, #0
    // lsl r2, r2, #0xc
    // bl SysTask_CreateOnMainQueue
    // mov r0, #0x6e
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // add r7, r7, #1
    // add r6, #0x28
    // cmp r7, r0
    // blt _02231D7C
    // ldr r0, [sp, #4]
    // mov r4, #0
    // str r4, [r0]
    // ldr r0, [r5, #8]
    // add r0, r0, #1
    // str r0, [r5, #8]
    // ldr r0, _02231E98 ; =0x000006D8
    // ldr r1, [r5, r0]
    // sub r1, r1, #1
    // str r1, [r5, r0]
    // ldr r0, [r5, r0]
    // cmp r0, #0
    // ble _02231E88
    // ldr r7, _02231E90 ; =0x00000534
    // add r6, r5, #0
    // sub r0, r0, #1
    // cmp r4, r0
    // bne _02231E20
    // ldr r0, [r6, r7]
    // mov r1, #1
    // bl ManagedSprite_SetPaletteOverrideOffset
    // b _02231E2A
    // ldr r0, _02231E90 ; =0x00000534
    // mov r1, #2
    // ldr r0, [r6, r0]
    // bl ManagedSprite_SetPaletteOverrideOffset
    // ldr r0, _02231E98 ; =0x000006D8
    // add r4, r4, #1
    // ldr r0, [r5, r0]
    // add r6, #0x28
    // cmp r4, r0
    // blt _02231E10
    // b _02231E88
    // mov r0, #0x86
    // lsl r0, r0, #4
    // ldr r4, [r5, r0]
    // ldr r0, [r4]
    // cmp r0, #0x10
    // beq _02231E60
    // add r0, r0, #2
    // str r0, [r4]
    // ldr r0, [r5, #0x58]
    // mov r1, #2
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r4]
    // ldr r0, [r5, #0x28]
    // lsl r3, r3, #0x18
    // mov r2, #0xc
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // ldr r0, [r4, #4]
    // cmp r0, #0
    // bne _02231E6C
    // ldr r0, [r5, #8]
    // add r0, r0, #1
    // str r0, [r5, #8]
    // mov r0, #0
    // str r0, [r4, #4]
    // b _02231E88
    // bl ov40_0222C018
    // mov r0, #0x86
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // bl Heap_Free
    // add r0, r5, #0
    // mov r1, #5
    // bl ov40_0222BF80
    // mov r0, #0
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02231E90: .word 0x00000534
    // _02231E94: .word 0x00000548
    // _02231E98: .word 0x000006D8
    // _02231E9C: .word ov40_022318C8
    // _02231EA0: .word 0x000005FC
    // TODO: decompile
}




void ov40_02231EA4(void) {
    // push {r3, r4, lr}
    // sub sp, #4
    // add r4, r0, #0
    // ldr r0, [r4, #8]
    // cmp r0, #4
    // bls _02231EB2
    // b _02232080
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _02231EBE: ; jump table
    // mov r0, #0
    // str r0, [r4, #0x54]
    // add r0, r4, #0
    // add r0, #0x5c
    // ldrb r0, [r0]
    // cmp r0, #0
    // beq _02231EE0
    // add r0, r4, #0
    // add r0, #0x5c
    // ldrb r0, [r0]
    // sub r1, r0, #1
    // b _02231EE2
    // mov r1, #6
    // add r0, r4, #0
    // add r0, #0x5c
    // strb r1, [r0]
    // add r0, r4, #0
    // bl ov40_0222DAC0
    // str r0, [r4, #0x58]
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _02232088
    // add r0, r4, #0
    // add r0, #0x54
    // mov r1, #1
    // bl ov40_0222DA84
    // cmp r0, #0
    // beq _02231F0C
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // ldr r0, [r4, #0x58]
    // ldr r2, _02232090 ; =0x0000FFFF
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r4, #0x54]
    // ldr r0, [r4, #0x28]
    // lsl r3, r3, #0x18
    // mov r1, #2
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // ldr r0, [r4, #0x58]
    // ldr r2, _02232090 ; =0x0000FFFF
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r4, #0x54]
    // ldr r0, [r4, #0x28]
    // lsl r3, r3, #0x18
    // mov r1, #0
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // ldr r0, [r4, #0x58]
    // ldr r2, _02232090 ; =0x0000FFFF
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r4, #0x54]
    // ldr r0, [r4, #0x28]
    // lsl r3, r3, #0x18
    // mov r1, #3
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // ldr r0, [r4, #0x58]
    // ldr r2, _02232090 ; =0x0000FFFF
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r4, #0x54]
    // ldr r0, [r4, #0x28]
    // lsl r3, r3, #0x18
    // mov r1, #1
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // b _02232088
    // mov r0, #0x10
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #0x10
    // mov r1, #0
    // bl GfGfx_EngineBTogglePlanes
    // add r1, r4, #0
    // add r1, #0x5c
    // ldrb r1, [r1]
    // add r0, r4, #0
    // bl ov40_0222DBEC
    // ldr r0, [r4, #0x58]
    // ldr r2, _02232090 ; =0x0000FFFF
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r4, #0x54]
    // ldr r0, [r4, #0x28]
    // lsl r3, r3, #0x18
    // mov r1, #2
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // ldr r0, [r4, #0x58]
    // ldr r2, _02232090 ; =0x0000FFFF
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r4, #0x54]
    // ldr r0, [r4, #0x28]
    // lsl r3, r3, #0x18
    // mov r1, #0
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // ldr r0, [r4, #0x58]
    // ldr r2, _02232090 ; =0x0000FFFF
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r4, #0x54]
    // ldr r0, [r4, #0x28]
    // lsl r3, r3, #0x18
    // mov r1, #3
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // ldr r0, [r4, #0x58]
    // ldr r2, _02232090 ; =0x0000FFFF
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r4, #0x54]
    // ldr r0, [r4, #0x28]
    // lsl r3, r3, #0x18
    // mov r1, #1
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _02232088
    // mov r0, #0x10
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #0x10
    // mov r1, #1
    // bl GfGfx_EngineBTogglePlanes
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _02232088
    // add r0, r4, #0
    // add r0, #0x54
    // mov r1, #0
    // bl ov40_0222DA84
    // cmp r0, #0
    // beq _0223201E
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // ldr r0, [r4, #0x58]
    // ldr r2, _02232090 ; =0x0000FFFF
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r4, #0x54]
    // ldr r0, [r4, #0x28]
    // lsl r3, r3, #0x18
    // mov r1, #2
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // ldr r0, [r4, #0x58]
    // ldr r2, _02232090 ; =0x0000FFFF
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r4, #0x54]
    // ldr r0, [r4, #0x28]
    // lsl r3, r3, #0x18
    // mov r1, #0
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // ldr r0, [r4, #0x58]
    // ldr r2, _02232090 ; =0x0000FFFF
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r4, #0x54]
    // ldr r0, [r4, #0x28]
    // lsl r3, r3, #0x18
    // mov r1, #3
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // ldr r0, [r4, #0x58]
    // ldr r2, _02232090 ; =0x0000FFFF
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r4, #0x54]
    // ldr r0, [r4, #0x28]
    // lsl r3, r3, #0x18
    // mov r1, #1
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // b _02232088
    // add r0, r4, #0
    // mov r1, #0
    // bl ov40_0222BF80
    // mov r0, #0
    // add sp, #4
    // pop {r3, r4, pc}
    // nop
    // _02232090: .word 0x0000FFFF
    // TODO: decompile
}




void ov40_02232094(void) {
    // push {r3, r4, lr}
    // sub sp, #4
    // add r4, r0, #0
    // ldr r0, [r4, #8]
    // cmp r0, #4
    // bls _022320A2
    // b _02232274
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _022320AE: ; jump table
    // mov r0, #0
    // str r0, [r4, #0x54]
    // add r0, r4, #0
    // add r0, #0x5c
    // ldrb r0, [r0]
    // add r1, r0, #1
    // add r0, r4, #0
    // add r0, #0x5c
    // strb r1, [r0]
    // add r0, r4, #0
    // add r0, #0x5c
    // ldrb r0, [r0]
    // mov r1, #7
    // bl _s32_div_f
    // add r0, r4, #0
    // add r0, #0x5c
    // strb r1, [r0]
    // add r0, r4, #0
    // bl ov40_0222DAC0
    // str r0, [r4, #0x58]
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _0223227E
    // add r0, r4, #0
    // add r0, #0x54
    // mov r1, #1
    // bl ov40_0222DA84
    // cmp r0, #0
    // beq _02232100
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // ldr r0, [r4, #0x58]
    // ldr r2, _02232284 ; =0x0000FFFF
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r4, #0x54]
    // ldr r0, [r4, #0x28]
    // lsl r3, r3, #0x18
    // mov r1, #2
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // ldr r0, [r4, #0x58]
    // ldr r2, _02232284 ; =0x0000FFFF
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r4, #0x54]
    // ldr r0, [r4, #0x28]
    // lsl r3, r3, #0x18
    // mov r1, #0
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // ldr r0, [r4, #0x58]
    // ldr r2, _02232284 ; =0x0000FFFF
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r4, #0x54]
    // ldr r0, [r4, #0x28]
    // lsl r3, r3, #0x18
    // mov r1, #3
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // ldr r0, [r4, #0x58]
    // ldr r2, _02232284 ; =0x0000FFFF
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r4, #0x54]
    // ldr r0, [r4, #0x28]
    // lsl r3, r3, #0x18
    // mov r1, #1
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // b _0223227E
    // mov r0, #0x10
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #0x10
    // mov r1, #0
    // bl GfGfx_EngineBTogglePlanes
    // add r1, r4, #0
    // add r1, #0x5c
    // ldrb r1, [r1]
    // add r0, r4, #0
    // bl ov40_0222DBEC
    // ldr r0, [r4, #0x58]
    // ldr r2, _02232284 ; =0x0000FFFF
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r4, #0x54]
    // ldr r0, [r4, #0x28]
    // lsl r3, r3, #0x18
    // mov r1, #2
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // ldr r0, [r4, #0x58]
    // ldr r2, _02232284 ; =0x0000FFFF
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r4, #0x54]
    // ldr r0, [r4, #0x28]
    // lsl r3, r3, #0x18
    // mov r1, #0
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // ldr r0, [r4, #0x58]
    // ldr r2, _02232284 ; =0x0000FFFF
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r4, #0x54]
    // ldr r0, [r4, #0x28]
    // lsl r3, r3, #0x18
    // mov r1, #3
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // ldr r0, [r4, #0x58]
    // ldr r2, _02232284 ; =0x0000FFFF
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r4, #0x54]
    // ldr r0, [r4, #0x28]
    // lsl r3, r3, #0x18
    // mov r1, #1
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _0223227E
    // mov r0, #0x10
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #0x10
    // mov r1, #1
    // bl GfGfx_EngineBTogglePlanes
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _0223227E
    // add r0, r4, #0
    // add r0, #0x54
    // mov r1, #0
    // bl ov40_0222DA84
    // cmp r0, #0
    // beq _02232212
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // ldr r0, [r4, #0x58]
    // ldr r2, _02232284 ; =0x0000FFFF
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r4, #0x54]
    // ldr r0, [r4, #0x28]
    // lsl r3, r3, #0x18
    // mov r1, #2
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // ldr r0, [r4, #0x58]
    // ldr r2, _02232284 ; =0x0000FFFF
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r4, #0x54]
    // ldr r0, [r4, #0x28]
    // lsl r3, r3, #0x18
    // mov r1, #0
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // ldr r0, [r4, #0x58]
    // ldr r2, _02232284 ; =0x0000FFFF
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r4, #0x54]
    // ldr r0, [r4, #0x28]
    // lsl r3, r3, #0x18
    // mov r1, #3
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // ldr r0, [r4, #0x58]
    // ldr r2, _02232284 ; =0x0000FFFF
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r4, #0x54]
    // ldr r0, [r4, #0x28]
    // lsl r3, r3, #0x18
    // mov r1, #1
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // b _0223227E
    // mov r1, #0
    // add r0, r4, #0
    // str r1, [r4, #0x54]
    // bl ov40_0222BF80
    // mov r0, #0
    // add sp, #4
    // pop {r3, r4, pc}
    // _02232284: .word 0x0000FFFF
    // TODO: decompile
}




void ov40_02232288(void) {
    Heap_Alloc(0x6d, (0x67 << 2));
    memset(0, (0x67 << 2));
    // str r4, [r5, r0]
    BgClearTilemapBufferAndCommit(*((u32*)(r5 + 0x24)), 2);
    BgClearTilemapBufferAndCommit(*((u32*)(r5 + 0x24)), 3);
    BgClearTilemapBufferAndCommit(*((u32*)(r5 + 0x24)), 6);
    BgClearTilemapBufferAndCommit(*((u32*)(r5 + 0x24)), 7);
    ov40_0222D9E8(r4, (r4 + 4), 0);
    ov40_0222BF80(r5, 1);
}




void ov40_022322E0(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x10
    // mov r1, #0x86
    // add r5, r0, #0
    // lsl r1, r1, #4
    // ldr r4, [r5, r1]
    // ldr r1, [r5, #8]
    // cmp r1, #0
    // beq _022322F8
    // cmp r1, #1
    // beq _02232356
    // b _022323E2
    // add r0, r4, #0
    // add r0, #8
    // mov r1, #1
    // bl ov40_0222DA84
    // cmp r0, #0
    // beq _0223230C
    // ldr r0, [r5, #8]
    // add r0, r0, #1
    // str r0, [r5, #8]
    // ldr r0, [r5, #0x58]
    // mov r1, #2
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r4, #8]
    // ldr r0, [r5, #0x28]
    // lsl r3, r3, #0x18
    // mov r2, #0xc
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // ldr r0, [r5, #0x58]
    // mov r1, #3
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r4, #8]
    // ldr r0, [r5, #0x28]
    // lsl r3, r3, #0x18
    // mov r2, #0xc
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // ldr r0, [r5, #0x58]
    // mov r1, #1
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r4, #8]
    // ldr r0, [r5, #0x28]
    // lsl r3, r3, #0x18
    // mov r2, #2
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // b _02232460
    // mov r1, #1
    // bl ov40_02230964
    // add r0, r5, #0
    // bl ov40_0222D874
    // add r0, r5, #0
    // mov r1, #0
    // bl ov40_02230964
    // mov r0, #0
    // add r1, r0, #0
    // bl SetBgPriority
    // mov r0, #1
    // mov r1, #3
    // bl SetBgPriority
    // mov r0, #2
    // mov r1, #0
    // bl SetBgPriority
    // mov r0, #3
    // mov r1, #2
    // bl SetBgPriority
    // mov r0, #4
    // mov r1, #0
    // bl SetBgPriority
    // mov r0, #5
    // mov r1, #3
    // bl SetBgPriority
    // mov r0, #6
    // mov r1, #1
    // bl SetBgPriority
    // mov r0, #7
    // mov r1, #2
    // bl SetBgPriority
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x6d
    // str r0, [sp, #0xc]
    // ldr r0, [r5, #0x14]
    // ldr r2, [r5, #0x24]
    // mov r1, #0x3e
    // mov r3, #3
    // bl GfGfxLoader_LoadCharDataFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x6d
    // str r0, [sp, #0xc]
    // ldr r0, [r5, #0x14]
    // ldr r2, [r5, #0x24]
    // mov r1, #0x3e
    // mov r3, #7
    // bl GfGfxLoader_LoadCharDataFromOpenNarc
    // ldr r0, [r5, #8]
    // add r0, r0, #1
    // str r0, [r5, #8]
    // b _02232460
    // mov r1, #0
    // bl ov40_0222FB90
    // add r0, r5, #0
    // bl ov40_0222C4DC
    // cmp r0, #1
    // bne _02232458
    // ldr r0, _02232468 ; =0x0000086C
    // mov r6, #0
    // ldr r1, [r5, r0]
    // cmp r1, #0
    // bne _02232400
    // mov r6, #1
    // b _0223242A
    // lsl r1, r1, #2
    // add r1, r5, r1
    // add r0, #0x10
    // ldr r0, [r1, r0]
    // mov r1, #5
    // add r2, r6, #0
    // bl sub_0203088C
    // mov r3, #0
    // mov r2, #1
    // eor r1, r3
    // eor r0, r2
    // orr r0, r1
    // bne _02232420
    // mov r6, #1
    // b _0223242A
    // ldr r0, _0223246C ; =0x00000874
    // ldr r0, [r5, r0]
    // cmp r0, #1
    // bne _0223242A
    // mov r6, #1
    // cmp r6, #0
    // beq _02232446
    // add r0, r5, #0
    // bl ov40_02233044
    // mov r0, #0x66
    // mov r1, #0
    // lsl r0, r0, #2
    // str r1, [r4, r0]
    // add r0, r5, #0
    // mov r1, #9
    // bl ov40_0222BF80
    // b _02232460
    // mov r0, #0x66
    // mov r1, #1
    // lsl r0, r0, #2
    // str r1, [r4, r0]
    // add r0, r5, #0
    // mov r1, #6
    // bl ov40_0222BF80
    // b _02232460
    // add r0, r5, #0
    // mov r1, #2
    // bl ov40_0222BF80
    // mov r0, #0
    // add sp, #0x10
    // pop {r4, r5, r6, pc}
    // nop
    // _02232468: .word 0x0000086C
    // _0223246C: .word 0x00000874
    // TODO: decompile
}




void ov40_02232470(void) {
    // push {r3, r4, r5, lr}
    // mov r1, #0x86
    // add r4, r0, #0
    // lsl r1, r1, #4
    // ldr r5, [r4, r1]
    // ldr r1, [r4, #8]
    // cmp r1, #3
    // bls _02232482
    // b _02232584
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _0223248E: ; jump table
    // bl ov40_02233044
    // add r0, r4, #0
    // mov r1, #6
    // mov r2, #7
    // bl ov40_022307DC
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _0223258C
    // bl ov40_02232F50
    // mov r0, #0x6d
    // str r0, [sp]
    // ldr r0, _02232590 ; =ov40_02245134
    // ldr r2, _02232594 ; =ov40_02232ED4
    // mov r1, #3
    // add r3, r4, #0
    // bl TouchHitboxController_Create
    // mov r1, #0x5d
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _0223258C
    // mov r1, #1
    // bl ov40_02230964
    // add r0, r5, #0
    // add r0, #0x9c
    // add r1, r4, #0
    // bl ov40_02230638
    // add r0, r5, #0
    // add r0, #0x9c
    // bl ov40_02230410
    // add r1, r0, #0
    // add r0, r4, #0
    // mov r2, #3
    // bl ov40_022307DC
    // add r5, #0x9c
    // add r0, r5, #0
    // mov r1, #0
    // bl ov40_022306A0
    // add r0, r4, #0
    // mov r1, #0
    // bl ov40_02230964
    // mov r0, #8
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #8
    // mov r1, #1
    // bl GfGfx_EngineBTogglePlanes
    // mov r0, #4
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #4
    // mov r1, #0
    // bl GfGfx_EngineBTogglePlanes
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _0223258C
    // add r0, r5, #0
    // add r0, #8
    // mov r1, #0
    // bl ov40_0222DA84
    // mov r2, #0
    // add r0, r5, #0
    // add r1, r5, #4
    // add r3, r2, #0
    // bl ov40_0222DA00
    // cmp r0, #0
    // beq _0223256A
    // add r0, r5, #0
    // add r0, #0x9c
    // mov r1, #1
    // bl ov40_022306A0
    // add r0, r4, #0
    // bl ov40_02232F88
    // mov r0, #4
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #4
    // mov r1, #1
    // bl GfGfx_EngineBTogglePlanes
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // ldr r0, [r4, #0x58]
    // mov r1, #3
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r5, #8]
    // ldr r0, [r4, #0x28]
    // lsl r3, r3, #0x18
    // mov r2, #0xc
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // b _0223258C
    // add r0, r4, #0
    // mov r1, #3
    // bl ov40_0222BF80
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // _02232590: .word ov40_02245134
    // _02232594: .word ov40_02232ED4
    // TODO: decompile
}




void ov40_02232598(void) {
}




void ov40_022325B0(void) {
    // ldr r4, [r5, r1]
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _022325CC: ; jump table
    // add r4, #0x9c
    ov40_0223064C(r4, r0);
    // add r4, #0x10
    ov40_0222E7B8(r4, r5);
    GfGfx_EngineATogglePlanes(4, 0);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    ov40_0222DA00(r4, (r4 + 4), 1, 1);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    ov40_02230964((*((u32*)(r5 + 8)) + 1), 1);
    // add r0, #0x10
    ov40_0222E79C(r4, r5);
    // add r4, #0x10
    ov40_0222E7DC(r4, 0);
    ov40_022307DC(r5, 0x50, 3);
    // add r0, #0x9c
    ov40_02230638(r4, r5);
    // add r0, #0x9c
    ov40_022306A0(r4, 0);
    // add r4, #0x9c
    ov40_02230410(r4);
    ov40_022307DC(r5, r0, 3);
    ov40_02230964(r5, 0);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    ov40_0222DA00(r4, (r4 + 4), 0, 1);
    // add r4, #0x10
    ov40_0222E7DC(r4, 1);
    // add r4, #0x9c
    ov40_022306A0(r4, 1);
    GfGfx_EngineBTogglePlanes(4, 1);
    GfGfx_EngineATogglePlanes(4, 1);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    // eor r1, r0
    *((u32*)(r4 + 0xc)) = *((u32*)(r4 + 0xc));
    // add r1, #0x79
    ov40_02232FEC(r5, *((u32*)(r4 + 0xc)));
    ov40_0222BF80(r5, 3);
}




void ov40_022326DC(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // add r5, r0, #0
    // mov r0, #0x86
    // lsl r0, r0, #4
    // mov r6, #0x5e
    // ldr r4, [r5, r0]
    // lsl r6, r6, #2
    // add r0, r4, r6
    // bl InitWindow
    // mov r2, #6
    // str r2, [sp]
    // mov r0, #0xa
    // str r0, [sp, #4]
    // mov r0, #2
    // str r0, [sp, #8]
    // mov r0, #0xe
    // str r0, [sp, #0xc]
    // mov r0, #1
    // str r0, [sp, #0x10]
    // ldr r0, [r5, #0x24]
    // add r1, r4, r6
    // mov r3, #4
    // bl AddWindowParameterized
    // add r0, r4, r6
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // ldr r0, [r5, #0x48]
    // mov r1, #0x82
    // bl NewString_ReadMsgData
    // add r7, r0, #0
    // add r0, r4, r6
    // add r1, r7, #0
    // bl ov40_022306C0
    // mov r1, #0
    // add r3, r0, #0
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _022327B8 ; =0x000F0D00
    // add r2, r7, #0
    // str r0, [sp, #8]
    // add r0, r4, r6
    // str r1, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r7, #0
    // bl String_Delete
    // add r0, r4, r6
    // bl ScheduleWindowCopyToVram
    // add r6, #0x10
    // add r0, r4, r6
    // bl InitWindow
    // mov r2, #6
    // str r2, [sp]
    // mov r0, #0xa
    // str r0, [sp, #4]
    // mov r0, #2
    // str r0, [sp, #8]
    // mov r0, #0xe
    // str r0, [sp, #0xc]
    // mov r0, #0x15
    // str r0, [sp, #0x10]
    // ldr r0, [r5, #0x24]
    // add r1, r4, r6
    // mov r3, #0x12
    // bl AddWindowParameterized
    // add r0, r4, r6
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // ldr r0, [r5, #0x48]
    // mov r1, #0x83
    // bl NewString_ReadMsgData
    // add r5, r0, #0
    // add r0, r4, r6
    // add r1, r5, #0
    // bl ov40_022306C0
    // mov r1, #0
    // add r3, r0, #0
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _022327B8 ; =0x000F0D00
    // add r2, r5, #0
    // str r0, [sp, #8]
    // add r0, r4, r6
    // str r1, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r5, #0
    // bl String_Delete
    // add r0, r4, r6
    // bl ScheduleWindowCopyToVram
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _022327B8: .word 0x000F0D00
    // TODO: decompile
}




void ov40_022327BC(void) {
    // ldr r4, [r0, r1]
    // add r0, r4, r0
    ClearWindowTilemapAndCopyToVram((0x5e << 2), (0x86 << 4));
    // add r0, r4, r0
    RemoveWindow((0x5e << 2));
    // add r0, r4, r0
    ClearWindowTilemapAndCopyToVram((0x62 << 2));
    // add r0, r4, r0
    RemoveWindow((0x62 << 2));
}




void ov40_022327F0(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x10
    // add r4, r0, #0
    // mov r1, #0x86
    // lsl r1, r1, #4
    // ldr r2, [r4, #8]
    // ldr r5, [r4, r1]
    // cmp r2, #7
    // bls _02232804
    // b _02232A0E
    // add r2, r2, r2
    // add r2, pc
    // ldrh r2, [r2, #6]
    // lsl r2, r2, #0x10
    // asr r2, r2, #0x10
    // add pc, r2
    // _02232810: ; jump table
    // mov r0, #0x5d
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // bl TouchHitboxController_Destroy
    // mov r0, #4
    // mov r1, #0
    // bl GfGfx_EngineBTogglePlanes
    // mov r0, #4
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // add r0, r4, #0
    // mov r1, #1
    // bl ov40_02230964
    // ldr r0, [r5, #0xc]
    // cmp r0, #0
    // bne _02232854
    // add r0, r5, #0
    // add r0, #0x9c
    // add r1, r4, #0
    // bl ov40_0223064C
    // b _0223285E
    // add r0, r5, #0
    // add r0, #0x10
    // add r1, r4, #0
    // bl ov40_0222E7B8
    // add r0, r4, #0
    // mov r1, #0
    // bl ov40_02230964
    // add r0, r4, #0
    // bl ov40_02232FCC
    // mov r0, #0x66
    // mov r1, #0
    // lsl r0, r0, #2
    // str r1, [r5, r0]
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _02232A30
    // add r0, r5, #0
    // add r0, #8
    // mov r1, #1
    // bl ov40_0222DA84
    // add r0, r5, #0
    // add r1, r5, #4
    // mov r2, #1
    // mov r3, #0
    // bl ov40_0222DA00
    // cmp r0, #0
    // beq _022328B2
    // add r0, r4, #0
    // mov r1, #1
    // bl ov40_02230964
    // add r0, r4, #0
    // bl ov40_022330B8
    // add r0, r4, #0
    // mov r1, #0
    // bl ov40_02230964
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // ldr r0, [r4, #0x58]
    // mov r1, #3
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r5, #8]
    // ldr r0, [r4, #0x28]
    // lsl r3, r3, #0x18
    // mov r2, #0xc
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // b _02232A30
    // bl ov40_022326DC
    // mov r1, #0x4a
    // add r0, r4, #0
    // lsl r1, r1, #2
    // bl ov40_0222DED0
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x6d
    // str r0, [sp, #0xc]
    // ldr r0, [r4, #0x14]
    // ldr r2, [r4, #0x24]
    // mov r1, #0x54
    // mov r3, #7
    // bl GfGfxLoader_LoadScrnDataFromOpenNarc
    // mov r0, #8
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #8
    // mov r1, #1
    // bl GfGfx_EngineBTogglePlanes
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _02232A30
    // add r0, r5, #0
    // add r0, #8
    // mov r1, #0
    // bl ov40_0222DA84
    // add r0, r5, #0
    // add r1, r5, #4
    // mov r2, #0
    // mov r3, #2
    // bl ov40_0222DA00
    // cmp r0, #0
    // beq _0223293A
    // mov r0, #4
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #4
    // mov r1, #1
    // bl GfGfx_EngineBTogglePlanes
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // ldr r0, [r4, #0x58]
    // mov r1, #3
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r5, #8]
    // ldr r0, [r4, #0x28]
    // lsl r3, r3, #0x18
    // mov r2, #0xc
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // b _02232A30
    // ldr r0, _02232A38 ; =ov40_0224512C
    // bl TouchscreenHitbox_TouchNewIsIn
    // cmp r0, #0
    // beq _02232994
    // mov r0, #0x66
    // mov r1, #1
    // lsl r0, r0, #2
    // str r1, [r5, r0]
    // add r0, r4, #0
    // bl ov40_02230944
    // mov r0, #0x83
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // bl Save_NumModifiedPCBoxesIsMany
    // cmp r0, #0
    // beq _02232984
    // ldr r1, _02232A3C ; =0x0000012A
    // add r0, r4, #0
    // bl ov40_0222DF60
    // b _0223298C
    // ldr r1, _02232A40 ; =0x0000012B
    // add r0, r4, #0
    // bl ov40_0222DF60
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _02232A30
    // ldr r0, _02232A44 ; =ov40_02245130
    // bl TouchscreenHitbox_TouchNewIsIn
    // cmp r0, #0
    // beq _02232A30
    // mov r0, #0x66
    // mov r1, #2
    // lsl r0, r0, #2
    // str r1, [r5, r0]
    // add r0, r4, #0
    // bl ov40_02230944
    // mov r0, #6
    // str r0, [r4, #8]
    // b _02232A30
    // sub r1, #0x30
    // ldr r0, [r4, r1]
    // bl SaveGameNormal
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _02232A30
    // bl ov40_0222DFB0
    // add r0, r4, #0
    // bl ov40_022327BC
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _02232A30
    // add r0, r5, #0
    // add r0, #8
    // mov r1, #1
    // bl ov40_0222DA84
    // add r0, r5, #0
    // add r1, r5, #4
    // mov r2, #1
    // mov r3, #2
    // bl ov40_0222DA00
    // cmp r0, #0
    // beq _022329F4
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // ldr r0, [r4, #0x58]
    // mov r1, #3
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r5, #8]
    // ldr r0, [r4, #0x28]
    // lsl r3, r3, #0x18
    // mov r2, #0xc
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // b _02232A30
    // mov r0, #0x66
    // lsl r0, r0, #2
    // ldr r1, [r5, r0]
    // cmp r1, #1
    // bne _02232A22
    // add r0, r4, #0
    // mov r1, #7
    // bl ov40_0222BF80
    // b _02232A30
    // mov r1, #0
    // str r1, [r5, r0]
    // str r1, [r5, #0xc]
    // add r0, r4, #0
    // mov r1, #2
    // bl ov40_0222BF80
    // mov r0, #0
    // add sp, #0x10
    // pop {r3, r4, r5, pc}
    // nop
    // _02232A38: .word ov40_0224512C
    // _02232A3C: .word 0x0000012A
    // _02232A40: .word 0x0000012B
    // _02232A44: .word ov40_02245130
    // TODO: decompile
}




void ov40_02232A48(void) {
    // push {r4, lr}
    // sub sp, #0x10
    // add r4, r0, #0
    // ldr r1, [r4, #8]
    // cmp r1, #0
    // beq _02232A5E
    // cmp r1, #1
    // beq _02232A82
    // cmp r1, #2
    // beq _02232A92
    // b _02232AD6
    // ldr r1, _02232AF0 ; =0x0000012B
    // bl ov40_0222DED0
    // mov r0, #6
    // str r0, [sp]
    // mov r1, #1
    // str r1, [sp, #4]
    // mov r0, #0x6d
    // str r0, [sp, #8]
    // mov r0, #0
    // add r2, r1, #0
    // add r3, r0, #0
    // bl BeginNormalPaletteFade
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _02232AE8
    // bl IsPaletteFadeFinished
    // cmp r0, #1
    // bne _02232AE8
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _02232AE8
    // ldr r1, _02232AF4 ; =0x00000874
    // ldr r0, [r4, r1]
    // cmp r0, #0
    // bne _02232ACE
    // add r0, r1, #0
    // sub r0, #8
    // ldr r0, [r4, r0]
    // sub r1, #0x44
    // str r0, [sp]
    // ldr r0, [r4, r1]
    // mov r1, #0x6d
    // add r2, sp, #0xc
    // mov r3, #0
    // bl sub_0202FC90
    // mov r1, #0x83
    // lsl r1, r1, #4
    // ldr r0, [r4, r1]
    // add r1, #0x3c
    // ldr r1, [r4, r1]
    // bl ov40_02244BBC
    // bl sub_0202FC24
    // add r0, r4, #0
    // bl ov40_0222FDC4
    // add r0, r4, #0
    // bl ov40_0222FCCC
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _02232AE8
    // bl ov40_0222DFB0
    // add r0, r4, #0
    // bl ov40_02233044
    // add r0, r4, #0
    // mov r1, #9
    // bl ov40_0222BF80
    // mov r0, #0
    // add sp, #0x10
    // pop {r4, pc}
    // nop
    // _02232AF0: .word 0x0000012B
    // _02232AF4: .word 0x00000874
    // TODO: decompile
}




void ov40_02232AF8(void) {
    // push {r4, r5, lr}
    // sub sp, #0xc
    // mov r1, #0x86
    // add r5, r0, #0
    // lsl r1, r1, #4
    // ldr r4, [r5, r1]
    // ldr r1, [r5, #8]
    // cmp r1, #0
    // beq _02232B14
    // cmp r1, #1
    // beq _02232B34
    // cmp r1, #2
    // beq _02232B44
    // b _02232BC2
    // mov r0, #6
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // mov r0, #0x6d
    // str r0, [sp, #8]
    // mov r0, #0
    // add r1, r0, #0
    // add r2, r0, #0
    // add r3, r0, #0
    // bl BeginNormalPaletteFade
    // ldr r0, [r5, #8]
    // add r0, r0, #1
    // str r0, [r5, #8]
    // b _02232BCE
    // bl IsPaletteFadeFinished
    // cmp r0, #1
    // bne _02232BCE
    // ldr r0, [r5, #8]
    // add r0, r0, #1
    // str r0, [r5, #8]
    // b _02232BCE
    // mov r1, #0x66
    // lsl r1, r1, #2
    // ldr r1, [r4, r1]
    // cmp r1, #0
    // bne _02232B8E
    // mov r1, #1
    // bl ov40_02230964
    // ldr r0, [r4, #0xc]
    // cmp r0, #0
    // bne _02232B66
    // add r0, r4, #0
    // add r0, #0x9c
    // add r1, r5, #0
    // bl ov40_0223064C
    // b _02232B70
    // add r0, r4, #0
    // add r0, #0x10
    // add r1, r5, #0
    // bl ov40_0222E7B8
    // add r0, r5, #0
    // mov r1, #0
    // bl ov40_02230964
    // mov r0, #0x5d
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl TouchHitboxController_Destroy
    // add r0, r5, #0
    // bl ov40_02232FCC
    // add r0, r5, #0
    // bl ov40_022330B8
    // add r0, r5, #0
    // mov r1, #1
    // bl ov40_02230964
    // add r0, r5, #0
    // bl ov40_0222D8C8
    // add r0, r5, #0
    // mov r1, #0
    // bl ov40_02230964
    // ldr r1, [r5, #0x10]
    // add r0, r5, #0
    // ldr r1, [r1]
    // bl ov40_0222C4E8
    // ldr r0, _02232BD4 ; =0x00000868
    // mov r1, #1
    // ldr r0, [r5, r0]
    // mov r2, #0
    // bl sub_02087A84
    // ldr r0, [r5, #8]
    // add r0, r0, #1
    // str r0, [r5, #8]
    // b _02232BCE
    // add r0, r4, #0
    // bl Heap_Free
    // add sp, #0xc
    // mov r0, #1
    // pop {r4, r5, pc}
    // mov r0, #0
    // add sp, #0xc
    // pop {r4, r5, pc}
    // _02232BD4: .word 0x00000868
    // TODO: decompile
}




void ov40_02232BD8(void) {
    // ldr r4, [r5, r1]
    // ldr r0, [r4, r0]
    TouchHitboxController_Destroy((0x5d << 2), *((u32*)(r0 + 8)));
    GfGfx_EngineBTogglePlanes(4, 0);
    GfGfx_EngineATogglePlanes(4, 0);
    // add r4, #0x9c
    ov40_0223064C(r4, r5);
    // add r4, #0x10
    ov40_0222E7B8(r4, r5);
    ov40_02232FCC(r5);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    // add r0, #8
    ov40_0222DA84(r4, 1);
    ov40_0222DA00(r4, (r4 + 4), 1, 0);
    ov40_022330B8(r5);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r5 + 0x28)), 3, 0xc, ((*((u32*)(r4 + 8)) << 0x18) >> 0x18));
    ov40_0222FB90(1);
    ov40_02230964(r5, 1);
    ov40_0222D88C(r5);
    ov40_02230964(r5, 0);
    BgClearTilemapBufferAndCommit(*((u32*)(r5 + 0x24)), 2);
    BgClearTilemapBufferAndCommit(*((u32*)(r5 + 0x24)), 6);
    BgClearTilemapBufferAndCommit(*((u32*)(r5 + 0x24)), 3);
    BgClearTilemapBufferAndCommit(*((u32*)(r5 + 0x24)), 7);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    ov40_0222FBB4((*((u32*)(r5 + 8)) + 1));
    // add r0, #8
    ov40_0222DA84(r4, 0);
    ov40_0222DD08(r5);
    // add r0, #8
    ov40_0222DAA8(r4);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r5 + 0x28)), 2, 0xc, 0x10);
    ov40_0222BF64(r5, 1, 1, *((u32*)(r5 + 0x10)));
    ov40_0222BF80(r5, 5);
    Heap_Free(r4);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r5 + 0x28)), 3, 0xc, ((*((u32*)(r4 + 8)) << 0x18) >> 0x18));
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r5 + 0x28)), 1, 2, ((*((u32*)(r4 + 8)) << 0x18) >> 0x18));
}




void ov40_02232D44(void) {
    // push {r4, r5, lr}
    // sub sp, #0xc
    // mov r1, #0x86
    // add r4, r0, #0
    // lsl r1, r1, #4
    // ldr r5, [r4, r1]
    // ldr r1, [r4, #8]
    // cmp r1, #5
    // bls _02232D58
    // b _02232EAC
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _02232D64: ; jump table
    // mov r1, #6
    // mov r2, #7
    // bl ov40_022307DC
    // mov r0, #8
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #8
    // mov r1, #1
    // bl GfGfx_EngineBTogglePlanes
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _02232EC2
    // bl ov40_02232F50
    // mov r0, #0x6d
    // str r0, [sp]
    // ldr r0, _02232EC8 ; =ov40_02245134
    // ldr r2, _02232ECC ; =ov40_02232ED4
    // mov r1, #3
    // add r3, r4, #0
    // bl TouchHitboxController_Create
    // mov r1, #0x5d
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _02232EC2
    // mov r1, #1
    // bl ov40_02230964
    // add r0, r5, #0
    // add r0, #0x9c
    // add r1, r4, #0
    // bl ov40_02230638
    // add r0, r5, #0
    // add r0, #0x9c
    // bl ov40_02230410
    // add r1, r0, #0
    // add r0, r4, #0
    // mov r2, #3
    // bl ov40_022307DC
    // add r5, #0x9c
    // add r0, r5, #0
    // mov r1, #0
    // bl ov40_022306A0
    // add r0, r4, #0
    // mov r1, #0
    // bl ov40_02230964
    // mov r0, #8
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #8
    // mov r1, #1
    // bl GfGfx_EngineBTogglePlanes
    // mov r0, #4
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #4
    // mov r1, #0
    // bl GfGfx_EngineBTogglePlanes
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _02232EC2
    // add r0, r5, #0
    // add r0, #8
    // mov r1, #0
    // bl ov40_0222DA84
    // mov r2, #0
    // add r0, r5, #0
    // add r1, r5, #4
    // add r3, r2, #0
    // bl ov40_0222DA00
    // cmp r0, #0
    // beq _02232E64
    // add r0, r5, #0
    // add r0, #0x9c
    // mov r1, #1
    // bl ov40_022306A0
    // add r0, r4, #0
    // bl ov40_02232F88
    // mov r0, #4
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #4
    // mov r1, #1
    // bl GfGfx_EngineBTogglePlanes
    // mov r0, #0x66
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // cmp r0, #1
    // bne _02232E56
    // mov r0, #0xff
    // b _02232E5A
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // mov r0, #0x66
    // mov r1, #0
    // lsl r0, r0, #2
    // str r1, [r5, r0]
    // ldr r0, [r4, #0x58]
    // mov r1, #3
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r5, #8]
    // ldr r0, [r4, #0x28]
    // lsl r3, r3, #0x18
    // mov r2, #0xc
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // b _02232EC2
    // mov r0, #6
    // str r0, [sp]
    // mov r1, #1
    // str r1, [sp, #4]
    // mov r0, #0x6d
    // str r0, [sp, #8]
    // mov r0, #0
    // add r2, r1, #0
    // add r3, r0, #0
    // bl BeginNormalPaletteFade
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _02232EC2
    // bl IsPaletteFadeFinished
    // cmp r0, #1
    // bne _02232EC2
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _02232EC2
    // ldr r0, _02232ED0 ; =0x000006D8
    // ldr r1, [r4, r0]
    // add r1, r1, #1
    // str r1, [r4, r0]
    // add r0, r4, #0
    // bl ov40_0222C4B8
    // add r0, r4, #0
    // mov r1, #3
    // bl ov40_0222BF80
    // mov r0, #0
    // add sp, #0xc
    // pop {r4, r5, pc}
    // _02232EC8: .word ov40_02245134
    // _02232ECC: .word ov40_02232ED4
    // _02232ED0: .word 0x000006D8
    // TODO: decompile
}




void ov40_02232ED4(void) {
    // push {r3, r4, r5, lr}
    // add r5, r2, #0
    // mov r2, #0x86
    // lsl r2, r2, #4
    // ldr r4, [r5, r2]
    // cmp r1, #0
    // bne _02232F48
    // cmp r0, #0
    // beq _02232EF0
    // cmp r0, #1
    // beq _02232F00
    // cmp r0, #2
    // beq _02232F3A
    // pop {r3, r4, r5, pc}
    // add r0, r5, #0
    // bl ov40_02230944
    // add r0, r5, #0
    // mov r1, #4
    // bl ov40_0222BF80
    // pop {r3, r4, r5, pc}
    // add r0, r5, #0
    // bl ov40_02230944
    // ldr r0, _02232F4C ; =0x0000086C
    // ldr r0, [r5, r0]
    // cmp r0, #0
    // beq _02232F26
    // add r4, #0xa0
    // ldr r0, [r4]
    // mov r1, #5
    // mov r2, #0
    // bl sub_0203088C
    // mov r3, #0
    // mov r2, #1
    // eor r1, r3
    // eor r0, r2
    // orr r0, r1
    // bne _02232F30
    // add r0, r5, #0
    // mov r1, #7
    // bl ov40_0222BF80
    // pop {r3, r4, r5, pc}
    // add r0, r5, #0
    // mov r1, #5
    // bl ov40_0222BF80
    // pop {r3, r4, r5, pc}
    // add r0, r5, #0
    // bl ov40_02230944
    // add r0, r5, #0
    // mov r1, #8
    // bl ov40_0222BF80
    // pop {r3, r4, r5, pc}
    // nop
    // _02232F4C: .word 0x0000086C
    // TODO: decompile
}




void ov40_02232F50(void) {
    // add r2, #0xc
    // ldr r2, [r0, r2]
    // ldr r1, [r0, r3]
    // add r4, r0, r2
    // add r2, #0x2c
    // ldr r4, [r4, r2]
    *((u32*)(r1 + 0x10)) = r4;
    // add r2, #0x9c
    // str r4, [r2]
    // add r2, #0xc
    // ldr r2, [r0, r2]
    // add r3, #0x1c
    // add r0, r0, r2
    // ldr r0, [r0, r3]
    // add r1, #0xa0
    // str r0, [r1]
}




void ov40_02232F88(void) {
    // ldr r4, [r5, r0]
    // add r0, r4, r6
    InitWindow((0x86 << 4));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, r4, r6
    AddWindowParameterized(*((u32*)(r5 + 0x24)), 6, 8);
    ov40_02232FEC(r5, 0x79);
}




void ov40_02232FCC(void) {
    // ldr r4, [r0, r1]
    // add r0, r4, r0
    ClearWindowTilemapAndCopyToVram((0x5e << 2), (0x86 << 4));
    // add r0, r4, r0
    RemoveWindow((0x5e << 2));
}




void ov40_02232FEC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // mov r0, #0x86
    // lsl r0, r0, #4
    // mov r6, #0x5e
    // add r7, r1, #0
    // ldr r4, [r5, r0]
    // lsl r6, r6, #2
    // add r0, r4, r6
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // ldr r0, [r5, #0x48]
    // add r1, r7, #0
    // bl NewString_ReadMsgData
    // add r5, r0, #0
    // add r0, r4, r6
    // add r1, r5, #0
    // bl ov40_022306C0
    // mov r1, #0
    // add r3, r0, #0
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _02233040 ; =0x000F0D00
    // add r2, r5, #0
    // str r0, [sp, #8]
    // add r0, r4, r6
    // str r1, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r5, #0
    // bl String_Delete
    // add r0, r4, r6
    // bl ScheduleWindowCopyToVram
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // _02233040: .word 0x000F0D00
    // TODO: decompile
}




void ov40_02233044(void) {
    // ldr r4, [r5, r1]
    ov40_0222D6EC(2);
    ov40_0222D800(r5, 2);
    // str r0, [r4, r1]
    // add r0, r4, r0
    // add r1, #0x14
    ov40_0222D5AC(((0x57 << 2) - 4), r5, 2);
    // add r5, #0x14
    // add r0, r4, r0
    ov40_0222D66C((0x56 << 2), r5, 3);
    // ldr r0, [r4, r0]
    ManagedSprite_SetAnim((0x57 << 2), 0);
    // ldr r0, [r4, r0]
    ManagedSprite_SetPositionXY((0x57 << 2), 0x50, 0xe8);
    // ldr r0, [r4, r0]
    // sub r2, #0x2c
    sub_020136B4((0x16 << 4), 0x24, 0x24);
    // ldr r0, [r4, r0]
    TextOBJ_SetSpritesDrawFlag((0x16 << 4), 1);
}




void ov40_022330B8(void) {
    // ldr r4, [r5, r0]
    // add r0, r4, r0
    ov40_0222D6D0((0x56 << 2));
    // ldr r0, [r4, r0]
    Sprite_DeleteAndFreeResources((0x57 << 2));
    ov40_0222D7DC(r5);
}




void ov40_022330E0(void) {
    // ldr r4, [r0, r2]
    // add r0, #0xbc
    ManagedSprite_SetPositionXY(*((u32*)r4), 0x80, 0xe8);
    // add r0, #0xbc
    ManagedSprite_SetPositionXY(*((u32*)r4), 0x50, 0xe8);
    // add r4, #0xc0
    // sub r2, #0x2c
    sub_020136B4(*((u32*)r4), 0x24, 0x24);
}




void ov40_0223311C(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0xc
    // ldr r6, [r0, #0x14]
    // ldr r4, [r0, #0x18]
    // ldr r5, [r0, #0x1c]
    // mov r0, #0
    // str r0, [sp]
    // str r1, [sp, #4]
    // ldr r0, _02233168 ; =0x00002E94
    // add r1, r5, #0
    // str r0, [sp, #8]
    // add r0, r4, #0
    // add r2, r6, #0
    // mov r3, #0x32
    // bl SpriteSystem_LoadCharResObjFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, _02233168 ; =0x00002E94
    // add r1, r5, #0
    // str r0, [sp, #4]
    // add r0, r4, #0
    // add r2, r6, #0
    // mov r3, #0x1c
    // bl SpriteSystem_LoadCellResObjFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, _02233168 ; =0x00002E94
    // add r1, r5, #0
    // str r0, [sp, #4]
    // add r0, r4, #0
    // add r2, r6, #0
    // mov r3, #0x1d
    // bl SpriteSystem_LoadAnimResObjFromOpenNarc
    // add sp, #0xc
    // pop {r3, r4, r5, r6, pc}
    // _02233168: .word 0x00002E94
    // TODO: decompile
}




void ov40_0223316C(void) {
    // ldr r4, [r5, r1]
    ov40_0223311C(2);
    ov40_0222D800(r5, 2);
    // add r1, #0xbc
    // str r0, [r1]
    // add r0, #0xb8
    // add r1, #0x14
    ov40_0222D5AC(r4, r5, 2);
    // add r0, #0xb8
    // add r1, #0x14
    ov40_0222D66C(r4, r5, 3);
    // add r0, #0xbc
    ManagedSprite_SetPositionXY(*((u32*)r4), 0x80, 0xe8);
    // add r0, #0xc0
    // sub r2, #0x2c
    sub_020136B4(*((u32*)r4), 0x24, 0x24);
    // add r0, #0xc0
    TextOBJ_SetSpritesDrawFlag(*((u32*)r4), 1);
    ov40_0222D800(r5, 2);
    // add r1, #0x98
    // str r0, [r1]
    // add r0, #0x98
    ManagedSprite_SetPositionXY(*((u32*)r4), 0xdc, 0xe0);
    // add r0, #0x98
    ManagedSprite_SetAnim(*((u32*)r4), 2);
    // add r4, #0x98
    ManagedSprite_SetDrawFlag(*((u32*)r4), 0);
    ov40_022330E0(r5, 1);
}




void ov40_0223320C(void) {
    // ldr r4, [r5, r0]
    // add r0, #0xb8
    ov40_0222D6D0(r4);
    // add r0, #0xbc
    Sprite_DeleteAndFreeResources(*((u32*)r4));
    // add r4, #0x98
    Sprite_DeleteAndFreeResources(*((u32*)r4));
    ov40_0222D7DC(r5);
}




void ov40_02233238(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x50
    // ldr r5, [r0, #0x24]
    // str r0, [sp, #0x18]
    // ldr r7, [r0, #0x14]
    // ldr r6, [r0, #0x18]
    // ldr r4, [r0, #0x1c]
    // ldr r0, [r0, #0x28]
    // mov r1, #0x3e
    // str r0, [sp, #0x24]
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x6d
    // str r0, [sp, #0xc]
    // add r0, r7, #0
    // add r2, r5, #0
    // mov r3, #6
    // bl GfGfxLoader_LoadCharDataFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x6d
    // str r0, [sp, #0xc]
    // add r0, r7, #0
    // mov r1, #0x44
    // add r2, r5, #0
    // mov r3, #6
    // bl GfGfxLoader_LoadScrnDataFromOpenNarc
    // ldr r0, [sp, #0x18]
    // mov r1, #0
    // bl ov40_0222DB30
    // str r7, [sp]
    // str r0, [sp, #4]
    // mov r0, #0
    // str r0, [sp, #8]
    // mov r0, #1
    // str r0, [sp, #0xc]
    // mov r0, #2
    // str r0, [sp, #0x10]
    // ldr r0, _022334D8 ; =0x0000726C
    // mov r1, #3
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x24]
    // add r2, r6, #0
    // add r3, r4, #0
    // bl SpriteSystem_LoadPaletteBufferFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // ldr r0, _022334D8 ; =0x0000726C
    // add r1, r4, #0
    // str r0, [sp, #8]
    // add r0, r6, #0
    // add r2, r7, #0
    // mov r3, #0x42
    // bl SpriteSystem_LoadCharResObjFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, _022334D8 ; =0x0000726C
    // add r1, r4, #0
    // str r0, [sp, #4]
    // add r0, r6, #0
    // add r2, r7, #0
    // mov r3, #0x47
    // bl SpriteSystem_LoadCellResObjFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, _022334D8 ; =0x0000726C
    // add r1, r4, #0
    // str r0, [sp, #4]
    // add r0, r6, #0
    // add r2, r7, #0
    // mov r3, #0x48
    // bl SpriteSystem_LoadAnimResObjFromOpenNarc
    // ldr r0, [sp, #0x18]
    // mov r1, #1
    // bl ov40_0222DB30
    // str r7, [sp]
    // str r0, [sp, #4]
    // mov r0, #0
    // str r0, [sp, #8]
    // mov r0, #6
    // str r0, [sp, #0xc]
    // mov r0, #1
    // str r0, [sp, #0x10]
    // ldr r0, _022334DC ; =0x00006E7A
    // mov r1, #2
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x24]
    // add r2, r6, #0
    // add r3, r4, #0
    // bl SpriteSystem_LoadPaletteBufferFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // ldr r0, _022334DC ; =0x00006E7A
    // add r1, r4, #0
    // str r0, [sp, #8]
    // add r0, r6, #0
    // add r2, r7, #0
    // mov r3, #0x40
    // bl SpriteSystem_LoadCharResObjFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, _022334DC ; =0x00006E7A
    // add r1, r4, #0
    // str r0, [sp, #4]
    // add r0, r6, #0
    // add r2, r7, #0
    // mov r3, #0x26
    // bl SpriteSystem_LoadCellResObjFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, _022334DC ; =0x00006E7A
    // add r1, r4, #0
    // str r0, [sp, #4]
    // add r0, r6, #0
    // add r2, r7, #0
    // mov r3, #0x27
    // bl SpriteSystem_LoadAnimResObjFromOpenNarc
    // ldr r3, _022334E0 ; =ov40_0224519C
    // add r2, sp, #0x3c
    // ldmia r3!, {r0, r1}
    // str r2, [sp, #0x20]
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // ldr r3, _022334E4 ; =ov40_02245188
    // str r0, [r2]
    // add r2, sp, #0x28
    // ldmia r3!, {r0, r1}
    // str r2, [sp, #0x1c]
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // mov r5, #0
    // str r0, [r2]
    // cmp r5, #3
    // bne _022333B2
    // str r7, [sp]
    // mov r0, #0x5c
    // str r0, [sp, #4]
    // mov r0, #0
    // str r0, [sp, #8]
    // mov r0, #1
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r0, _022334E8 ; =0x00004705
    // mov r1, #2
    // add r0, r5, r0
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x24]
    // add r2, r6, #0
    // add r3, r4, #0
    // bl SpriteSystem_LoadPaletteBufferFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // ldr r0, _022334E8 ; =0x00004705
    // add r1, r4, #0
    // add r0, r5, r0
    // str r0, [sp, #8]
    // add r0, r6, #0
    // add r2, r7, #0
    // mov r3, #0x5b
    // bl SpriteSystem_LoadCharResObjFromOpenNarc
    // b _022333F4
    // mov r0, #0xb3
    // str r0, [sp]
    // ldr r0, [sp, #0x20]
    // mov r1, #2
    // ldr r0, [r0]
    // add r2, r6, #0
    // str r0, [sp, #4]
    // mov r0, #0
    // str r0, [sp, #8]
    // mov r0, #1
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r0, _022334E8 ; =0x00004705
    // add r3, r4, #0
    // add r0, r5, r0
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x24]
    // bl SpriteSystem_LoadPaletteBuffer
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // ldr r0, _022334E8 ; =0x00004705
    // ldr r3, [sp, #0x1c]
    // add r0, r5, r0
    // str r0, [sp, #8]
    // ldr r3, [r3]
    // add r0, r6, #0
    // add r1, r4, #0
    // mov r2, #0xb3
    // bl SpriteSystem_LoadCharResObjAtEndWithHardwareMappingType
    // ldr r0, [sp, #0x20]
    // add r5, r5, #1
    // add r0, r0, #4
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x1c]
    // add r0, r0, #4
    // str r0, [sp, #0x1c]
    // cmp r5, #5
    // blt _02233370
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, _022334E8 ; =0x00004705
    // add r1, r4, #0
    // str r0, [sp, #4]
    // add r0, r6, #0
    // mov r2, #0xb3
    // mov r3, #9
    // bl SpriteSystem_LoadCellResObj
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, _022334E8 ; =0x00004705
    // add r1, r4, #0
    // str r0, [sp, #4]
    // add r0, r6, #0
    // mov r2, #0xb3
    // mov r3, #0xa
    // bl SpriteSystem_LoadAnimResObj
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, _022334EC ; =0x00004706
    // add r1, r4, #0
    // str r0, [sp, #4]
    // add r0, r6, #0
    // add r2, r7, #0
    // mov r3, #0x59
    // bl SpriteSystem_LoadCellResObjFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, _022334EC ; =0x00004706
    // add r1, r4, #0
    // str r0, [sp, #4]
    // add r0, r6, #0
    // add r2, r7, #0
    // mov r3, #0x5a
    // bl SpriteSystem_LoadAnimResObjFromOpenNarc
    // ldr r1, _022334F0 ; =0x0000088C
    // ldr r0, [sp, #0x18]
    // mov r6, #0xd
    // ldr r0, [r0, r1]
    // mov r7, #0xe
    // bl sub_020315D0
    // ldr r1, [sp, #0x18]
    // cmp r0, #0
    // ldr r4, [r1, #0x18]
    // ldr r5, [r1, #0x1c]
    // ldr r1, [r1, #0x28]
    // beq _02233474
    // mov r6, #0xf
    // mov r7, #0x10
    // mov r0, #0xb3
    // str r0, [sp]
    // str r6, [sp, #4]
    // mov r0, #0
    // str r0, [sp, #8]
    // mov r0, #1
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r0, _022334F4 ; =0x0002869F
    // add r2, r4, #0
    // str r0, [sp, #0x14]
    // add r0, r1, #0
    // mov r1, #2
    // add r3, r5, #0
    // bl SpriteSystem_LoadPaletteBuffer
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, _022334F4 ; =0x0002869F
    // add r1, r5, #0
    // str r0, [sp, #4]
    // add r0, r4, #0
    // mov r2, #0xb3
    // mov r3, #9
    // bl SpriteSystem_LoadCellResObj
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, _022334F4 ; =0x0002869F
    // add r1, r5, #0
    // str r0, [sp, #4]
    // add r0, r4, #0
    // mov r2, #0xb3
    // mov r3, #0xa
    // bl SpriteSystem_LoadAnimResObj
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // ldr r0, _022334F4 ; =0x0002869F
    // add r1, r5, #0
    // str r0, [sp, #8]
    // add r0, r4, #0
    // mov r2, #0xb3
    // add r3, r7, #0
    // bl SpriteSystem_LoadCharResObjAtEndWithHardwareMappingType
    // add sp, #0x50
    // pop {r3, r4, r5, r6, r7, pc}
    // _022334D8: .word 0x0000726C
    // _022334DC: .word 0x00006E7A
    // _022334E0: .word ov40_0224519C
    // _022334E4: .word ov40_02245188
    // _022334E8: .word 0x00004705
    // _022334EC: .word 0x00004706
    // _022334F0: .word 0x0000088C
    // _022334F4: .word 0x0002869F
    // TODO: decompile
}




void ov40_022334F8(void) {
    // add r7, r1, r2
    // ldrh r6, [r3]
    // asr r4, r6, #0xa
    // and r4, r2
    // mul r5, r2
    // and r2, r6
    // mul r4, r2
    // asr r6, r6, #5
    // and r2, r6
    // mul r6, r1
    // add r2, r4, r6
    // add r2, r5, r2
    // asr r5, r2, #8
    // orr r2, r4
    // orr r2, r5
    // strh r2, [r3]
}




void ov40_02233550(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x44
    // str r0, [sp]
    // ldr r0, [r0, #0x28]
    // mov r1, #0x83
    // str r0, [sp, #4]
    // ldr r0, [sp]
    // lsl r1, r1, #4
    // ldr r0, [r0, r1]
    // bl Save_VarsFlags_Get
    // add r4, r0, #0
    // bl Save_VarsFlags_GetBattleTowerPrintProgress
    // str r0, [sp, #0x30]
    // add r0, r4, #0
    // bl Save_VarsFlags_GetBattleFactoryPrintProgress
    // str r0, [sp, #0x34]
    // add r0, r4, #0
    // bl Save_VarsFlags_GetBattleArcadePrintProgress
    // str r0, [sp, #0x38]
    // add r0, r4, #0
    // bl Save_VarsFlags_GetBattleCastlePrintProgress
    // str r0, [sp, #0x3c]
    // add r0, r4, #0
    // bl Save_VarsFlags_GetBattleHallPrintProgress
    // ldr r3, _022335F0 ; =ov40_02245174
    // str r0, [sp, #0x40]
    // ldmia r3!, {r0, r1}
    // add r2, sp, #8
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // mov r7, #0
    // add r4, sp, #0x30
    // add r5, sp, #0x1c
    // str r0, [r2]
    // ldr r6, [r4]
    // cmp r6, #0
    // beq _022335D8
    // add r3, sp, #8
    // ldmia r3!, {r0, r1}
    // add r2, sp, #0x1c
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // str r0, [r2]
    // sub r0, r6, #2
    // cmp r0, #1
    // bhi _022335D8
    // ldr r0, [sp]
    // mov r1, #2
    // ldr r0, [r0, #0x28]
    // bl PaletteData_GetFadedBuf
    // ldr r1, [r5]
    // mov r2, #0x10
    // add r1, r1, #4
    // lsl r1, r1, #0x14
    // lsr r1, r1, #0x10
    // bl ov40_022334F8
    // add r7, r7, #1
    // add r4, r4, #4
    // add r5, r5, #4
    // cmp r7, #5
    // blt _022335A4
    // ldr r0, [sp, #4]
    // mov r1, #1
    // bl PaletteData_SetAutoTransparent
    // add sp, #0x44
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _022335F0: .word ov40_02245174
    // TODO: decompile
}




void ov40_022335F4(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xa4
    // add r7, r0, #0
    // mov r0, #0
    // str r0, [sp, #0x1c]
    // mov r0, #0x86
    // lsl r0, r0, #4
    // ldr r6, [r7, r0]
    // ldr r0, [sp, #0x1c]
    // add r1, sp, #0x20
    // strh r0, [r1, #0x28]
    // mov r0, #1
    // lsl r0, r0, #8
    // strh r0, [r1, #0x2a]
    // ldr r0, [sp, #0x1c]
    // ldr r5, [sp, #0x1c]
    // strh r0, [r1, #0x2c]
    // strh r0, [r1, #0x2e]
    // mov r0, #0xa
    // str r0, [sp, #0x50]
    // ldr r0, [sp, #0x1c]
    // mov r1, #1
    // str r0, [sp, #0x54]
    // str r0, [sp, #0x74]
    // str r0, [sp, #0x78]
    // sub r0, r1, #2
    // str r0, [sp, #0x6c]
    // str r0, [sp, #0x70]
    // ldr r0, _022338B8 ; =0x0002869F
    // str r1, [sp, #0x58]
    // str r0, [sp, #0x5c]
    // str r0, [sp, #0x60]
    // str r0, [sp, #0x64]
    // str r0, [sp, #0x68]
    // add r4, r6, #0
    // ldr r0, [r7, #0x18]
    // ldr r1, [r7, #0x1c]
    // add r2, sp, #0x48
    // bl SpriteSystem_NewSprite
    // str r0, [r4, #0x40]
    // mov r1, #1
    // bl ManagedSprite_SetAnim
    // ldr r0, [r4, #0x40]
    // bl ManagedSprite_TickFrame
    // ldr r1, [r4, #4]
    // ldr r0, [r4, #0x40]
    // add r2, r1, #0
    // bl ManagedSprite_SetAffineScale
    // add r5, r5, #1
    // add r4, r4, #4
    // cmp r5, #5
    // blt _0223363A
    // mov r5, #0
    // add r4, r6, #0
    // ldr r0, _022338BC ; =0x00004705
    // add r0, r5, r0
    // str r0, [sp, #0x5c]
    // str r0, [sp, #0x60]
    // cmp r5, #3
    // bne _0223367C
    // ldr r0, _022338C0 ; =0x00004706
    // str r0, [sp, #0x64]
    // str r0, [sp, #0x68]
    // b _02233682
    // ldr r0, _022338BC ; =0x00004705
    // str r0, [sp, #0x64]
    // str r0, [sp, #0x68]
    // ldr r0, [r7, #0x18]
    // ldr r1, [r7, #0x1c]
    // add r2, sp, #0x48
    // bl SpriteSystem_NewSprite
    // str r0, [r4, #0x54]
    // cmp r5, #3
    // ldr r0, [r4, #0x54]
    // bne _0223369C
    // mov r1, #0
    // bl ManagedSprite_SetAnim
    // b _022336A2
    // mov r1, #1
    // bl ManagedSprite_SetAnim
    // ldr r0, [r4, #0x54]
    // bl ManagedSprite_TickFrame
    // ldr r1, [r4, #4]
    // ldr r0, [r4, #0x54]
    // add r2, r1, #0
    // bl ManagedSprite_SetAffineScale
    // add r1, r5, #0
    // ldr r0, [r4, #0x54]
    // add r1, #0xa
    // bl ManagedSprite_SetPaletteOverride
    // add r5, r5, #1
    // add r4, r4, #4
    // cmp r5, #5
    // blt _02233668
    // ldr r0, _022338C4 ; =0x00006E7A
    // str r0, [sp, #0x5c]
    // str r0, [sp, #0x60]
    // str r0, [sp, #0x64]
    // str r0, [sp, #0x68]
    // mov r0, #0
    // mvn r0, r0
    // str r0, [sp, #0x6c]
    // str r0, [sp, #0x70]
    // mov r0, #0x14
    // str r0, [sp, #0x50]
    // mov r0, #0x83
    // lsl r0, r0, #4
    // ldr r0, [r7, r0]
    // bl Save_VarsFlags_Get
    // add r4, r0, #0
    // bl Save_VarsFlags_GetBattleTowerPrintProgress
    // str r0, [sp, #0x7c]
    // add r0, r4, #0
    // bl Save_VarsFlags_GetBattleFactoryPrintProgress
    // str r0, [sp, #0x80]
    // add r0, r4, #0
    // bl Save_VarsFlags_GetBattleArcadePrintProgress
    // str r0, [sp, #0x84]
    // add r0, r4, #0
    // bl Save_VarsFlags_GetBattleCastlePrintProgress
    // str r0, [sp, #0x88]
    // add r0, r4, #0
    // bl Save_VarsFlags_GetBattleHallPrintProgress
    // str r0, [sp, #0x8c]
    // mov r0, #0
    // str r0, [sp, #4]
    // add r0, sp, #0x7c
    // ldr r2, _022338C8 ; =ov40_022451B0
    // str r0, [sp, #0x10]
    // ldmia r2!, {r0, r1}
    // add r3, sp, #0x20
    // stmia r3!, {r0, r1}
    // ldmia r2!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r2]
    // add r4, r6, #0
    // add r5, sp, #0x34
    // str r0, [r3]
    // ldr r0, [r7, #0x18]
    // ldr r1, [r7, #0x1c]
    // add r2, sp, #0x48
    // bl SpriteSystem_NewSprite
    // str r0, [r4, #0x68]
    // ldr r0, [sp, #0x10]
    // ldr r0, [r0]
    // cmp r0, #1
    // bhi _0223375E
    // ldr r0, [r4, #0x68]
    // mov r1, #5
    // bl ManagedSprite_SetAnim
    // ldr r0, [r4, #0x68]
    // mov r1, #9
    // bl ManagedSprite_SetPaletteOverride
    // ldr r0, [r4, #0x54]
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // ldr r0, [r4, #0x40]
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // b _02233780
    // add r3, sp, #0x20
    // ldmia r3!, {r0, r1}
    // add r2, sp, #0x34
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // str r0, [r2]
    // ldr r0, [r4, #0x68]
    // ldr r1, [r5]
    // bl ManagedSprite_SetAnim
    // ldr r1, [r5]
    // ldr r0, [r4, #0x68]
    // add r1, r1, #4
    // bl ManagedSprite_SetPaletteOverride
    // ldr r0, [r4, #0x68]
    // bl ManagedSprite_TickFrame
    // ldr r1, [r4, #4]
    // ldr r0, [r4, #0x68]
    // add r2, r1, #0
    // bl ManagedSprite_SetAffineScale
    // ldr r0, [sp, #0x10]
    // add r4, r4, #4
    // add r0, r0, #4
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #4]
    // add r5, r5, #4
    // add r0, r0, #1
    // str r0, [sp, #4]
    // cmp r0, #5
    // blt _02233728
    // ldr r0, _022338CC ; =0x0000726C
    // mov r4, #0xfa
    // str r0, [sp, #0x5c]
    // str r0, [sp, #0x60]
    // str r0, [sp, #0x64]
    // str r0, [sp, #0x68]
    // mov r0, #0
    // mvn r0, r0
    // str r0, [sp, #0x6c]
    // str r0, [sp, #0x70]
    // mov r0, #2
    // str r0, [sp, #0x58]
    // mov r0, #0
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x50]
    // add r0, r6, #0
    // add r0, #0x90
    // ldr r0, [r0]
    // lsl r4, r4, #2
    // str r0, [sp]
    // ldr r0, [sp, #0x18]
    // add r5, sp, #0x90
    // str r0, [sp, #8]
    // ldr r0, [sp]
    // add r1, r4, #0
    // bl _s32_div_f
    // str r0, [r5]
    // ldr r0, [sp]
    // add r1, r4, #0
    // bl _s32_div_f
    // str r1, [sp]
    // add r0, r4, #0
    // mov r1, #0xa
    // bl _s32_div_f
    // add r4, r0, #0
    // ldr r0, [r5]
    // cmp r0, #0
    // bne _02233804
    // ldr r0, [sp, #0x18]
    // cmp r0, #0
    // bne _02233804
    // ldr r0, [sp, #0x1c]
    // add r0, r0, #1
    // str r0, [sp, #0x1c]
    // b _02233808
    // mov r0, #1
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #8]
    // add r5, r5, #4
    // add r0, r0, #1
    // str r0, [sp, #8]
    // cmp r0, #4
    // blt _022337D2
    // mov r0, #0xa
    // str r0, [sp, #0xa0]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // mov r0, #0x58
    // add r4, r6, #0
    // add r5, sp, #0x90
    // str r0, [sp, #0x14]
    // ldr r0, [r7, #0x18]
    // ldr r1, [r7, #0x1c]
    // add r2, sp, #0x48
    // bl SpriteSystem_NewSprite
    // str r0, [r4, #0x7c]
    // ldr r0, [r5]
    // cmp r0, #0
    // bne _02233846
    // ldr r1, [sp, #0xc]
    // ldr r0, [sp, #0x1c]
    // cmp r1, r0
    // bge _02233846
    // ldr r0, [r4, #0x7c]
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // ldr r0, [r4, #0x7c]
    // ldr r1, [r5]
    // bl ManagedSprite_SetAnim
    // ldr r1, [sp, #0x14]
    // ldr r0, [r4, #0x7c]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // mov r2, #0x48
    // bl ov40_0222D288
    // ldr r0, [r4, #0x7c]
    // bl ManagedSprite_TickFrame
    // ldr r0, [sp, #0x14]
    // add r4, r4, #4
    // add r0, #0x10
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0xc]
    // add r5, r5, #4
    // add r0, r0, #1
    // str r0, [sp, #0xc]
    // cmp r0, #5
    // blt _02233824
    // add r0, r6, #0
    // add r0, #0x88
    // ldr r0, [r0]
    // mov r1, #1
    // bl ManagedSprite_SetDrawFlag
    // add r0, r6, #0
    // add r0, #0x8c
    // ldr r0, [r0]
    // mov r1, #1
    // bl ManagedSprite_SetDrawFlag
    // mov r5, #2
    // mov r4, #0
    // add r7, r5, #0
    // ldr r0, [r6, #0x40]
    // add r1, r5, #0
    // bl ManagedSprite_SetAffineOverwriteMode
    // ldr r0, [r6, #0x54]
    // add r1, r7, #0
    // bl ManagedSprite_SetAffineOverwriteMode
    // ldr r0, [r6, #0x68]
    // mov r1, #2
    // bl ManagedSprite_SetAffineOverwriteMode
    // add r4, r4, #1
    // add r6, r6, #4
    // cmp r4, #5
    // blt _02233894
    // add sp, #0xa4
    // pop {r4, r5, r6, r7, pc}
    // _022338B8: .word 0x0002869F
    // _022338BC: .word 0x00004705
    // _022338C0: .word 0x00004706
    // _022338C4: .word 0x00006E7A
    // _022338C8: .word ov40_022451B0
    // _022338CC: .word 0x0000726C
    // TODO: decompile
}




void ov40_022338D0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // mov r0, #0x86
    // lsl r0, r0, #4
    // ldr r7, [r5, r0]
    // mov r4, #0
    // add r6, r7, #0
    // ldr r1, _022339B8 ; =0x00004705
    // ldr r0, [r5, #0x1c]
    // add r1, r4, r1
    // bl SpriteManager_UnloadCharObjById
    // ldr r1, _022339B8 ; =0x00004705
    // ldr r0, [r5, #0x1c]
    // add r1, r4, r1
    // bl SpriteManager_UnloadPlttObjById
    // ldr r0, [r6, #0x54]
    // bl Sprite_DeleteAndFreeResources
    // add r4, r4, #1
    // add r6, r6, #4
    // cmp r4, #5
    // blt _022338DE
    // ldr r0, [r5, #0x1c]
    // ldr r1, _022339B8 ; =0x00004705
    // bl SpriteManager_UnloadCellObjById
    // ldr r0, [r5, #0x1c]
    // ldr r1, _022339B8 ; =0x00004705
    // bl SpriteManager_UnloadAnimObjById
    // ldr r0, [r5, #0x1c]
    // ldr r1, _022339BC ; =0x00004706
    // bl SpriteManager_UnloadCellObjById
    // ldr r0, [r5, #0x1c]
    // ldr r1, _022339BC ; =0x00004706
    // bl SpriteManager_UnloadAnimObjById
    // mov r6, #0
    // add r4, r7, #0
    // ldr r0, [r4, #0x40]
    // bl Sprite_DeleteAndFreeResources
    // add r6, r6, #1
    // add r4, r4, #4
    // cmp r6, #5
    // blt _02233924
    // ldr r0, [r5, #0x1c]
    // ldr r1, _022339C0 ; =0x0002869F
    // bl SpriteManager_UnloadCharObjById
    // ldr r0, [r5, #0x1c]
    // ldr r1, _022339C0 ; =0x0002869F
    // bl SpriteManager_UnloadPlttObjById
    // ldr r0, [r5, #0x1c]
    // ldr r1, _022339C0 ; =0x0002869F
    // bl SpriteManager_UnloadCellObjById
    // ldr r0, [r5, #0x1c]
    // ldr r1, _022339C0 ; =0x0002869F
    // bl SpriteManager_UnloadAnimObjById
    // mov r6, #0
    // add r4, r7, #0
    // ldr r0, [r4, #0x68]
    // bl Sprite_DeleteAndFreeResources
    // add r6, r6, #1
    // add r4, r4, #4
    // cmp r6, #5
    // blt _02233956
    // ldr r0, [r5, #0x1c]
    // ldr r1, _022339C4 ; =0x00006E7A
    // bl SpriteManager_UnloadCharObjById
    // ldr r0, [r5, #0x1c]
    // ldr r1, _022339C4 ; =0x00006E7A
    // bl SpriteManager_UnloadPlttObjById
    // ldr r0, [r5, #0x1c]
    // ldr r1, _022339C4 ; =0x00006E7A
    // bl SpriteManager_UnloadCellObjById
    // ldr r0, [r5, #0x1c]
    // ldr r1, _022339C4 ; =0x00006E7A
    // bl SpriteManager_UnloadAnimObjById
    // mov r4, #0
    // ldr r0, [r7, #0x7c]
    // bl Sprite_DeleteAndFreeResources
    // add r4, r4, #1
    // add r7, r7, #4
    // cmp r4, #5
    // blt _02233986
    // ldr r0, [r5, #0x1c]
    // ldr r1, _022339C8 ; =0x0000726C
    // bl SpriteManager_UnloadCharObjById
    // ldr r0, [r5, #0x1c]
    // ldr r1, _022339C8 ; =0x0000726C
    // bl SpriteManager_UnloadPlttObjById
    // ldr r0, [r5, #0x1c]
    // ldr r1, _022339C8 ; =0x0000726C
    // bl SpriteManager_UnloadCellObjById
    // ldr r0, [r5, #0x1c]
    // ldr r1, _022339C8 ; =0x0000726C
    // bl SpriteManager_UnloadAnimObjById
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _022339B8: .word 0x00004705
    // _022339BC: .word 0x00004706
    // _022339C0: .word 0x0002869F
    // _022339C4: .word 0x00006E7A
    // _022339C8: .word 0x0000726C
    // TODO: decompile
}




void ov40_022339CC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // mov r1, #0x86
    // lsl r1, r1, #4
    // ldr r0, [r0, r1]
    // mov r6, #0x5a
    // str r0, [sp]
    // mov r4, #0
    // add r5, r0, #0
    // lsl r6, r6, #2
    // ldr r0, [r5, #0x2c]
    // add r1, r6, #0
    // add r0, #0x14
    // str r0, [r5, #0x2c]
    // bl _s32_div_f
    // str r1, [r5, #0x2c]
    // add r4, r4, #1
    // add r5, r5, #4
    // cmp r4, #5
    // blt _022339E0
    // ldr r0, [sp]
    // ldr r1, [sp]
    // mov r2, #0
    // add r0, #0xd4
    // add r1, #0xd8
    // add r3, r2, #0
    // bl ov40_0222DA00
    // ldr r5, [sp]
    // mov r6, #0
    // add r4, sp, #4
    // ldr r0, [sp]
    // ldr r0, [r0, #0x2c]
    // cmp r0, #0
    // beq _02233A1E
    // ldr r0, [r5, #4]
    // ldr r1, _02233AE8 ; =0x3D4CCCCD
    // bl _fadd
    // b _02233A3A
    // ldr r0, [r5, #0x40]
    // mov r1, #0
    // bl ManagedSprite_SetAffineOverwriteMode
    // ldr r0, [r5, #0x54]
    // mov r1, #0
    // bl ManagedSprite_SetAffineOverwriteMode
    // ldr r0, [r5, #0x68]
    // mov r1, #0
    // bl ManagedSprite_SetAffineOverwriteMode
    // mov r0, #0xfe
    // lsl r0, r0, #0x16
    // str r0, [r5, #4]
    // ldr r0, [r5, #0x2c]
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // bl GF_SinDeg
    // ldr r1, [r5, #0x18]
    // add r7, r1, #0
    // mul r7, r0
    // ldr r0, [r5, #0x2c]
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // bl GF_CosDeg
    // ldr r1, [r5, #0x18]
    // add r2, r1, #0
    // mul r2, r0
    // mov r0, #0x6a
    // lsl r0, r0, #0xc
    // mov r1, #2
    // sub r2, r0, r2
    // lsl r1, r1, #0x12
    // ldr r0, [r5, #0x68]
    // add r1, r7, r1
    // bl ManagedSprite_SetPositonFxXY
    // add r1, sp, #4
    // ldr r0, [r5, #0x68]
    // add r1, #2
    // add r2, sp, #4
    // bl ManagedSprite_GetPositionXY
    // mov r1, #2
    // mov r2, #0
    // ldrsh r1, [r4, r1]
    // ldrsh r2, [r4, r2]
    // ldr r0, [r5, #0x40]
    // sub r1, #0x20
    // sub r2, r2, #2
    // lsl r1, r1, #0x10
    // lsl r2, r2, #0x10
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    // bl ManagedSprite_SetPositionXY
    // mov r1, #2
    // mov r2, #0
    // ldrsh r1, [r4, r1]
    // ldrsh r2, [r4, r2]
    // ldr r0, [r5, #0x54]
    // add r1, #0x10
    // sub r2, r2, #2
    // lsl r1, r1, #0x10
    // lsl r2, r2, #0x10
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    // bl ManagedSprite_SetPositionXY
    // ldr r1, [r5, #4]
    // ldr r0, [r5, #0x68]
    // add r2, r1, #0
    // bl ManagedSprite_SetAffineScale
    // ldr r1, [r5, #4]
    // ldr r0, [r5, #0x40]
    // add r2, r1, #0
    // bl ManagedSprite_SetAffineScale
    // ldr r1, [r5, #4]
    // ldr r0, [r5, #0x54]
    // add r2, r1, #0
    // bl ManagedSprite_SetAffineScale
    // add r6, r6, #1
    // add r5, r5, #4
    // cmp r6, #5
    // blt _02233A0C
    // ldr r0, [sp]
    // ldr r0, [r0, #0x2c]
    // cmp r0, #0
    // beq _02233AE2
    // add sp, #8
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #0
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // _02233AE8: .word 0x3D4CCCCD
    // TODO: decompile
}




void ov40_02233AEC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // mov r1, #0x86
    // lsl r1, r1, #4
    // ldr r0, [r0, r1]
    // mov r6, #0x5a
    // str r0, [sp]
    // mov r4, #0
    // add r5, r0, #0
    // lsl r6, r6, #2
    // ldr r0, [r5, #0x2c]
    // add r1, r6, #0
    // add r0, #0x14
    // str r0, [r5, #0x2c]
    // bl _s32_div_f
    // str r1, [r5, #0x2c]
    // add r4, r4, #1
    // add r5, r5, #4
    // cmp r4, #5
    // blt _02233B00
    // ldr r0, [sp]
    // ldr r0, [r0, #0x2c]
    // cmp r0, #0x14
    // bne _02233B46
    // mov r6, #2
    // ldr r4, [sp]
    // mov r5, #0
    // add r7, r6, #0
    // ldr r0, [r4, #0x40]
    // add r1, r6, #0
    // bl ManagedSprite_SetAffineOverwriteMode
    // ldr r0, [r4, #0x54]
    // add r1, r7, #0
    // bl ManagedSprite_SetAffineOverwriteMode
    // ldr r0, [r4, #0x68]
    // mov r1, #2
    // bl ManagedSprite_SetAffineOverwriteMode
    // add r5, r5, #1
    // add r4, r4, #4
    // cmp r5, #5
    // blt _02233B26
    // ldr r0, [sp]
    // ldr r1, [sp]
    // add r0, #0xd4
    // add r1, #0xd8
    // mov r2, #1
    // mov r3, #0
    // bl ov40_0222DA00
    // ldr r5, [sp]
    // mov r6, #0
    // add r4, sp, #4
    // ldr r0, [sp]
    // ldr r0, [r0, #0x2c]
    // cmp r0, #0
    // beq _02233B70
    // ldr r0, [r5, #4]
    // ldr r1, _02233C38 ; =0x3D4CCCCD
    // bl _fsub
    // str r0, [r5, #4]
    // b _02233B88
    // ldr r0, [r5, #0x68]
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // ldr r0, [r5, #0x40]
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // ldr r0, [r5, #0x54]
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // ldr r0, [r5, #0x2c]
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // bl GF_SinDeg
    // ldr r1, [r5, #0x18]
    // add r2, r1, #0
    // mul r2, r0
    // mov r0, #2
    // lsl r0, r0, #0x12
    // sub r7, r0, r2
    // ldr r0, [r5, #0x2c]
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // bl GF_CosDeg
    // ldr r1, [r5, #0x18]
    // add r2, r1, #0
    // mul r2, r0
    // mov r0, #0x6a
    // lsl r0, r0, #0xc
    // sub r2, r0, r2
    // ldr r0, [r5, #0x68]
    // add r1, r7, #0
    // bl ManagedSprite_SetPositonFxXY
    // add r1, sp, #4
    // ldr r0, [r5, #0x68]
    // add r1, #2
    // add r2, sp, #4
    // bl ManagedSprite_GetPositionXY
    // mov r1, #2
    // mov r2, #0
    // ldrsh r1, [r4, r1]
    // ldrsh r2, [r4, r2]
    // ldr r0, [r5, #0x40]
    // sub r1, #0x20
    // sub r2, r2, #2
    // lsl r1, r1, #0x10
    // lsl r2, r2, #0x10
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    // bl ManagedSprite_SetPositionXY
    // mov r1, #2
    // mov r2, #0
    // ldrsh r1, [r4, r1]
    // ldrsh r2, [r4, r2]
    // ldr r0, [r5, #0x54]
    // add r1, #0x10
    // sub r2, r2, #2
    // lsl r1, r1, #0x10
    // lsl r2, r2, #0x10
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    // bl ManagedSprite_SetPositionXY
    // ldr r1, [r5, #4]
    // ldr r0, [r5, #0x68]
    // add r2, r1, #0
    // bl ManagedSprite_SetAffineScale
    // ldr r1, [r5, #4]
    // ldr r0, [r5, #0x40]
    // add r2, r1, #0
    // bl ManagedSprite_SetAffineScale
    // ldr r1, [r5, #4]
    // ldr r0, [r5, #0x54]
    // add r2, r1, #0
    // bl ManagedSprite_SetAffineScale
    // add r6, r6, #1
    // add r5, r5, #4
    // cmp r6, #5
    // blt _02233B5C
    // ldr r0, [sp]
    // ldr r0, [r0, #0x2c]
    // cmp r0, #0
    // beq _02233C30
    // add sp, #8
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #0
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02233C38: .word 0x3D4CCCCD
    // TODO: decompile
}




void ov40_02233C3C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // mov r1, #0x86
    // lsl r1, r1, #4
    // ldr r4, _02233CA8 ; =_02245CC0
    // ldr r5, [r0, r1]
    // mov r7, #0
    // add r6, sp, #0
    // mov r1, #0
    // mov r2, #2
    // ldrsh r1, [r4, r1]
    // ldrsh r2, [r4, r2]
    // ldr r0, [r5, #0x68]
    // lsl r1, r1, #0xc
    // lsl r2, r2, #0xc
    // bl ManagedSprite_SetPositonFxXY
    // add r1, sp, #0
    // ldr r0, [r5, #0x68]
    // add r1, #2
    // add r2, sp, #0
    // bl ManagedSprite_GetPositionXY
    // mov r1, #2
    // mov r2, #0
    // ldrsh r1, [r6, r1]
    // ldrsh r2, [r6, r2]
    // ldr r0, [r5, #0x40]
    // sub r1, #0x20
    // sub r2, r2, #2
    // lsl r1, r1, #0x10
    // lsl r2, r2, #0x10
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    // bl ManagedSprite_SetPositionXY
    // mov r1, #2
    // mov r2, #0
    // ldrsh r1, [r6, r1]
    // ldrsh r2, [r6, r2]
    // ldr r0, [r5, #0x54]
    // add r1, #0x10
    // sub r2, r2, #2
    // lsl r1, r1, #0x10
    // lsl r2, r2, #0x10
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    // bl ManagedSprite_SetPositionXY
    // add r7, r7, #1
    // add r4, r4, #4
    // add r5, r5, #4
    // cmp r7, #5
    // blt _02233C4A
    // pop {r3, r4, r5, r6, r7, pc}
    // _02233CA8: .word _02245CC0
    // TODO: decompile
}




void ov40_02233CAC(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // add r4, r0, #0
    // ldr r0, [r4, #8]
    // cmp r0, #0
    // bne _02233D4E
    // mov r0, #0x6d
    // mov r1, #0xdc
    // bl Heap_Alloc
    // mov r1, #0
    // mov r2, #0xdc
    // add r5, r0, #0
    // bl MI_CpuFill8
    // mov r0, #0x86
    // lsl r0, r0, #4
    // str r5, [r4, r0]
    // mov r0, #0
    // str r0, [r5]
    // add r1, r5, #0
    // add r2, r0, #0
    // mov r7, #0x40
    // mov r6, #0x34
    // sub r3, r0, #2
    // cmp r3, #1
    // bhi _02233CE6
    // str r6, [r1, #0x18]
    // b _02233CE8
    // str r7, [r1, #0x18]
    // ldr r3, _02233EE0 ; =0x3E4CCCCD
    // str r2, [r1, #0x2c]
    // str r3, [r1, #4]
    // add r0, r0, #1
    // add r1, r1, #4
    // add r2, #0x48
    // cmp r0, #5
    // blt _02233CDC
    // ldr r0, [r4, #0x24]
    // mov r1, #3
    // bl BgClearTilemapBufferAndCommit
    // ldr r0, [r4, #0x24]
    // mov r1, #2
    // bl BgClearTilemapBufferAndCommit
    // ldr r0, [r4, #0x24]
    // mov r1, #7
    // bl BgClearTilemapBufferAndCommit
    // ldr r0, [r4, #0x24]
    // mov r1, #6
    // bl BgClearTilemapBufferAndCommit
    // add r0, r5, #0
    // add r1, r5, #0
    // add r0, #0xd4
    // add r1, #0xd8
    // mov r2, #0
    // bl ov40_0222D9E8
    // mov r0, #4
    // str r0, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // mov r2, #0
    // add r0, r5, #0
    // add r1, r5, #0
    // add r0, #0xd4
    // add r1, #0xd8
    // add r3, r2, #0
    // str r2, [sp, #8]
    // bl ov40_0222D980
    // ldr r0, _02233EE4 ; =0x00000579
    // bl PlaySE
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _02233D54
    // mov r0, #0x86
    // lsl r0, r0, #4
    // ldr r5, [r4, r0]
    // ldr r0, [r4, #8]
    // cmp r0, #4
    // bls _02233D5C
    // b _02233ED0
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _02233D68: ; jump table
    // add r0, r5, #0
    // mov r1, #1
    // bl ov40_0222DA84
    // cmp r0, #0
    // beq _02233D9C
    // mov r0, #0x83
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // bl Save_FrontierData_Get
    // mov r1, #0
    // add r2, r1, #0
    // bl FrontierData_BattlePointAction
    // add r1, r5, #0
    // add r1, #0x90
    // str r0, [r1]
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // ldr r0, [r4, #0x58]
    // mov r1, #2
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r5]
    // ldr r0, [r4, #0x28]
    // lsl r3, r3, #0x18
    // mov r2, #0xc
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // ldr r0, [r4, #0x58]
    // mov r1, #3
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r5]
    // ldr r0, [r4, #0x28]
    // lsl r3, r3, #0x18
    // mov r2, #0xc
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // ldr r0, [r4, #0x58]
    // mov r1, #1
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r5]
    // ldr r0, [r4, #0x28]
    // lsl r3, r3, #0x18
    // mov r2, #2
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // b _02233ED8
    // add r0, r4, #0
    // mov r1, #1
    // bl ov40_02230964
    // add r0, r4, #0
    // bl ov40_0222D874
    // add r0, r4, #0
    // mov r1, #0
    // bl ov40_02230964
    // add r0, r4, #0
    // mov r1, #0
    // bl ov40_0222FB90
    // mov r0, #0x6f
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl sub_020879E0
    // bl ov40_02230738
    // mov r0, #6
    // mov r1, #2
    // bl SetBgPriority
    // add r0, r4, #0
    // bl ov40_02233238
    // ldr r0, [r4, #0x58]
    // mov r1, #3
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r5]
    // ldr r0, [r4, #0x28]
    // lsl r3, r3, #0x18
    // mov r2, #0x1c
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _02233ED8
    // add r0, r4, #0
    // bl ov40_0222FBB4
    // cmp r0, #0
    // beq _02233ED8
    // add r0, r4, #0
    // mov r1, #1
    // bl ov40_02230964
    // add r0, r4, #0
    // bl ov40_0223316C
    // add r0, r4, #0
    // bl ov40_022335F4
    // add r0, r4, #0
    // bl ov40_02233550
    // add r0, r4, #0
    // mov r1, #0
    // bl ov40_02230964
    // mov r0, #8
    // mov r1, #1
    // bl GfGfx_EngineBTogglePlanes
    // mov r0, #4
    // mov r1, #1
    // bl GfGfx_EngineBTogglePlanes
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _02233ED8
    // add r0, r4, #0
    // bl ov40_022339CC
    // add r6, r0, #0
    // add r0, r5, #0
    // add r1, r5, #0
    // mov r2, #0
    // add r0, #0xd4
    // add r1, #0xd8
    // add r3, r2, #0
    // bl ov40_0222DA00
    // add r0, r5, #0
    // mov r1, #0
    // bl ov40_0222DA84
    // cmp r6, #0
    // bne _02233EB6
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // add r0, r4, #0
    // bl ov40_02233C3C
    // ldr r0, [r4, #0x58]
    // mov r1, #3
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r5]
    // ldr r0, [r4, #0x28]
    // lsl r3, r3, #0x18
    // mov r2, #0x1c
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // b _02233ED8
    // add r0, r4, #0
    // mov r1, #1
    // bl ov40_0222BF80
    // mov r0, #0
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _02233EE0: .word 0x3E4CCCCD
    // _02233EE4: .word 0x00000579
    // TODO: decompile
}




void ov40_02233EE8(void) {
    // push {r4, lr}
    // sub sp, #8
    // add r4, r0, #0
    // add r0, sp, #4
    // add r1, sp, #0
    // bl System_GetTouchNewCoords
    // cmp r0, #0
    // beq _02233F1C
    // ldr r0, [sp, #4]
    // cmp r0, #0x50
    // bls _02233F1C
    // cmp r0, #0xb0
    // bhs _02233F1C
    // ldr r0, [sp]
    // cmp r0, #0x98
    // bls _02233F1C
    // cmp r0, #0xb0
    // bhs _02233F1C
    // ldr r0, _02233F24 ; =0x0000057B
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #2
    // bl ov40_0222BF80
    // mov r0, #0
    // add sp, #8
    // pop {r4, pc}
    // nop
    // _02233F24: .word 0x0000057B
    // TODO: decompile
}




void ov40_02233F28(void) {
    // push {r3, r4, r5, lr}
    // add r4, r0, #0
    // mov r0, #0x86
    // lsl r0, r0, #4
    // ldr r5, [r4, r0]
    // ldr r0, [r4, #8]
    // cmp r0, #4
    // bls _02233F3A
    // b _0223409E
    // add r1, r0, r0
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _02233F46: ; jump table
    // ldr r0, [r5]
    // cmp r0, #0
    // bne _02233F5C
    // ldr r0, _0223413C ; =0x0000057A
    // bl PlaySE
    // ldr r0, [r5]
    // cmp r0, #0x10
    // beq _02233F66
    // add r0, r0, #2
    // str r0, [r5]
    // ldr r0, [r4, #0x58]
    // mov r1, #3
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r5]
    // ldr r0, [r4, #0x28]
    // lsl r3, r3, #0x18
    // mov r2, #0x1c
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // ldr r0, [r4, #0x58]
    // ldr r2, _02234140 ; =0x00004018
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r5]
    // ldr r0, [r4, #0x28]
    // lsl r3, r3, #0x18
    // mov r1, #1
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // add r0, r4, #0
    // bl ov40_02233AEC
    // cmp r0, #0
    // beq _02233FA2
    // b _02234136
    // mov r0, #0
    // str r0, [r5]
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _02234136
    // add r0, r0, #1
    // str r0, [r4, #8]
    // add r0, r4, #0
    // mov r1, #1
    // bl ov40_02230964
    // add r0, r4, #0
    // bl ov40_022338D0
    // add r0, r4, #0
    // bl ov40_0223320C
    // add r0, r4, #0
    // mov r1, #0
    // bl ov40_02230964
    // mov r0, #8
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #4
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #8
    // mov r1, #0
    // bl GfGfx_EngineBTogglePlanes
    // mov r0, #4
    // mov r1, #0
    // bl GfGfx_EngineBTogglePlanes
    // mov r0, #0
    // str r0, [r5]
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _02234136
    // mov r0, #1
    // bl ov40_0222BC44
    // add r0, r4, #0
    // mov r1, #1
    // bl ov40_02230964
    // add r0, r4, #0
    // bl ov40_0222D88C
    // add r0, r4, #0
    // mov r1, #0
    // bl ov40_02230964
    // ldr r0, [r4, #0x24]
    // mov r1, #2
    // bl BgClearTilemapBufferAndCommit
    // ldr r0, [r4, #0x24]
    // mov r1, #6
    // bl BgClearTilemapBufferAndCommit
    // ldr r0, [r4, #0x24]
    // mov r1, #3
    // bl BgClearTilemapBufferAndCommit
    // ldr r0, [r4, #0x24]
    // mov r1, #7
    // bl BgClearTilemapBufferAndCommit
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _02234136
    // ldr r1, [r5]
    // cmp r1, #0
    // beq _0223404A
    // sub r0, r1, #2
    // str r0, [r5]
    // b _02234136
    // add r0, r0, #1
    // str r0, [r4, #8]
    // add r0, r5, #0
    // bl ov40_0222DAA8
    // ldr r0, [r4, #0x58]
    // mov r1, #2
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r5]
    // ldr r0, [r4, #0x28]
    // lsl r3, r3, #0x18
    // mov r2, #0xc
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // ldr r0, [r4, #0x58]
    // mov r1, #3
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r5]
    // ldr r0, [r4, #0x28]
    // lsl r3, r3, #0x18
    // mov r2, #0x1c
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // ldr r0, [r4, #0x58]
    // mov r1, #1
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r5]
    // ldr r0, [r4, #0x28]
    // lsl r3, r3, #0x18
    // mov r2, #2
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // b _02234136
    // add r0, r5, #0
    // mov r1, #0
    // bl ov40_0222DA84
    // cmp r0, #0
    // beq _02234106
    // mov r0, #8
    // str r0, [sp]
    // ldr r0, _02234144 ; =0x04000050
    // mov r1, #4
    // mov r2, #0x12
    // mov r3, #7
    // bl G2x_SetBlendAlpha_
    // mov r0, #8
    // str r0, [sp]
    // ldr r0, _02234148 ; =0x04001050
    // mov r1, #4
    // mov r2, #0x12
    // mov r3, #7
    // bl G2x_SetBlendAlpha_
    // add r0, r5, #0
    // bl Heap_Free
    // add r0, r4, #0
    // bl ov40_0222DD08
    // add r0, r5, #0
    // bl ov40_0222DAA8
    // ldr r0, [r4, #0x58]
    // mov r1, #2
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r0, [r4, #0x28]
    // mov r2, #0xc
    // mov r3, #0x10
    // bl PaletteData_BlendPalettes
    // mov r1, #1
    // ldr r3, [r4, #0x10]
    // add r0, r4, #0
    // add r2, r1, #0
    // bl ov40_0222BF64
    // add r0, r4, #0
    // mov r1, #5
    // bl ov40_0222BF80
    // b _02234136
    // ldr r0, [r4, #0x58]
    // mov r1, #3
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r5]
    // ldr r0, [r4, #0x28]
    // lsl r3, r3, #0x18
    // mov r2, #0xc
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // ldr r0, [r4, #0x58]
    // mov r1, #1
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r5]
    // ldr r0, [r4, #0x28]
    // lsl r3, r3, #0x18
    // mov r2, #2
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // nop
    // _0223413C: .word 0x0000057A
    // _02234140: .word 0x00004018
    // _02234144: .word 0x04000050
    // _02234148: .word 0x04001050
    // TODO: decompile
}




void ov40_0223414C(void) {
    // push {r3, r4, r5, lr}
    // mov r1, #0xba
    // add r5, r0, #0
    // mov r0, #0x6d
    // lsl r1, r1, #2
    // bl Heap_Alloc
    // mov r2, #0xba
    // mov r1, #0
    // lsl r2, r2, #2
    // add r4, r0, #0
    // bl memset
    // mov r0, #0x86
    // lsl r0, r0, #4
    // str r4, [r5, r0]
    // ldr r0, _022341DC ; =FS_OVERLAY_ID(OVY_41)
    // mov r1, #2
    // bl HandleLoadOverlay
    // mov r1, #0x86
    // ldr r0, [r5, #0x24]
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // mov r2, #0x48
    // add r0, r1, #4
    // str r2, [r4, r0]
    // add r0, r1, #0
    // mov r2, #0x10
    // add r0, #8
    // str r2, [r4, r0]
    // mov r0, #0x6d
    // add r1, #0xc
    // str r0, [r4, r1]
    // bl sub_0202B998
    // mov r1, #0x8e
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // mov r0, #0x6d
    // bl sub_020314A4
    // mov r1, #0x25
    // lsl r1, r1, #4
    // str r0, [r4, r1]
    // ldr r0, [r5, #0x24]
    // mov r1, #2
    // bl BgClearTilemapBufferAndCommit
    // ldr r0, [r5, #0x24]
    // mov r1, #3
    // bl BgClearTilemapBufferAndCommit
    // ldr r0, [r5, #0x24]
    // mov r1, #6
    // bl BgClearTilemapBufferAndCommit
    // ldr r0, [r5, #0x24]
    // mov r1, #7
    // bl BgClearTilemapBufferAndCommit
    // add r0, r4, #0
    // add r1, r4, #4
    // mov r2, #0
    // bl ov40_0222D9E8
    // add r0, r5, #0
    // mov r1, #1
    // bl ov40_0222BF80
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // _022341DC: .word FS_OVERLAY_ID(OVY_41)
    // TODO: decompile
}




void ov40_022341E0(void) {
    // ldr r4, [r5, r1]
    // add r0, #8
    ov40_0222DA84(r4, 1);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r5 + 0x28)), 2, 0xc, ((*((u32*)(r4 + 8)) << 0x18) >> 0x18));
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r5 + 0x28)), 3, 0xc, ((*((u32*)(r4 + 8)) << 0x18) >> 0x18));
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r5 + 0x28)), 1, 2, ((*((u32*)(r4 + 8)) << 0x18) >> 0x18));
    SetBgPriority(0, 0);
    SetBgPriority(2, 0);
    SetBgPriority(1, 3);
    SetBgPriority(3, 2);
    SetBgPriority(4, 0);
    SetBgPriority(6, 1);
    SetBgPriority(5, 3);
    SetBgPriority(7, 2);
    // ldr r0, [r5, r0]
    sub_020879E0((0x6f << 4), 0);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    ov40_0222FB90((*((u32*)(r5 + 8)) + 1), 0);
    ov40_02230964(r5, 1);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    ov40_0222FBB4((*((u32*)(r5 + 8)) + 1));
    ov40_02230964(r5, 0);
    ov40_02230964(r5, 1);
    ov40_0222D874(r5);
    ov40_02235A30(r5);
    ov40_02230964(r5, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharDataFromOpenNarc(*((u32*)(r5 + 0x14)), 0x3e, *((u32*)(r5 + 0x24)), 3);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharDataFromOpenNarc(*((u32*)(r5 + 0x14)), 0x3e, *((u32*)(r5 + 0x24)), 7);
    ov40_0222BF80(r5, 2);
}




void ov40_02234330(void) {
    // push {r3, r4, r5, lr}
    // mov r1, #0x86
    // add r5, r0, #0
    // lsl r1, r1, #4
    // ldr r4, [r5, r1]
    // ldr r1, [r5, #8]
    // cmp r1, #0
    // beq _0223434A
    // cmp r1, #1
    // beq _022343DA
    // cmp r1, #2
    // beq _022343F0
    // b _02234440
    // bl ov40_02235940
    // add r0, r5, #0
    // mov r1, #0x23
    // mov r2, #3
    // bl ov40_022307DC
    // add r0, r5, #0
    // mov r1, #0x25
    // mov r2, #7
    // bl ov40_022307DC
    // mov r0, #8
    // mov r1, #1
    // bl GfGfx_EngineBTogglePlanes
    // mov r0, #8
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // add r0, r5, #0
    // mov r1, #1
    // bl ov40_02230964
    // mov r0, #0x83
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // bl Save_FashionData_Get
    // mov r1, #0
    // bl sub_0202B9B8
    // mov r1, #0x8b
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // sub r0, r1, #4
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // bne _022343B2
    // add r0, r1, #0
    // sub r0, #0x14
    // ldr r1, [r4, r1]
    // add r0, r4, r0
    // bl ov41_0224B530
    // mov r1, #0x8a
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // ldr r0, [r4, r1]
    // mov r1, #1
    // bl ov41_0224B5D0
    // add r0, r5, #0
    // mov r1, #0
    // bl ov40_02230964
    // mov r0, #4
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #1
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // ldr r0, _0223446C ; =ov40_02235900
    // add r1, r5, #0
    // bl Main_SetVBlankIntrCB
    // ldr r0, [r5, #8]
    // add r0, r0, #1
    // str r0, [r5, #8]
    // b _02234446
    // mov r1, #0
    // mov r3, #2
    // ldr r0, [r5, #0x28]
    // add r2, r1, #0
    // lsl r3, r3, #8
    // bl PaletteData_LoadPaletteSlotFromHardware
    // ldr r0, [r5, #8]
    // add r0, r0, #1
    // str r0, [r5, #8]
    // b _02234446
    // add r0, r4, #0
    // add r0, #8
    // mov r1, #0
    // bl ov40_0222DA84
    // mov r2, #0
    // add r0, r4, #0
    // add r1, r4, #4
    // add r3, r2, #0
    // bl ov40_0222DA00
    // cmp r0, #0
    // beq _02234426
    // mov r0, #4
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #1
    // add r1, r0, #0
    // bl GfGfx_EngineATogglePlanes
    // add r0, r5, #0
    // bl ov40_02235B4C
    // ldr r0, [r5, #8]
    // add r0, r0, #1
    // str r0, [r5, #8]
    // ldr r0, [r5, #0x58]
    // mov r1, #3
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r4, #8]
    // ldr r0, [r5, #0x28]
    // lsl r3, r3, #0x18
    // mov r2, #0xc
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // b _02234446
    // mov r1, #3
    // bl ov40_0222BF80
    // mov r0, #0x8a
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // beq _02234466
    // bl Thunk_G3X_Reset
    // mov r0, #0x8a
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl ov41_0224B554
    // mov r0, #0
    // add r1, r0, #0
    // bl RequestSwap3DBuffers
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // nop
    // _0223446C: .word ov40_02235900
    // TODO: decompile
}




void ov40_02234470(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // mov r0, #0x86
    // lsl r0, r0, #4
    // ldr r4, [r5, r0]
    // ldr r0, _022344D0 ; =ov40_022451C8
    // bl TouchscreenHitbox_TouchNewIsIn
    // cmp r0, #0
    // beq _02234492
    // add r0, r5, #0
    // bl ov40_02230944
    // add r0, r5, #0
    // mov r1, #5
    // bl ov40_0222BF80
    // ldr r0, _022344D4 ; =ov40_022451CC
    // bl TouchscreenHitbox_TouchNewIsIn
    // cmp r0, #0
    // beq _022344AA
    // add r0, r5, #0
    // bl ov40_02230944
    // add r0, r5, #0
    // mov r1, #4
    // bl ov40_0222BF80
    // mov r0, #0x8a
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // beq _022344CA
    // bl Thunk_G3X_Reset
    // mov r0, #0x8a
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl ov41_0224B554
    // mov r0, #0
    // add r1, r0, #0
    // bl RequestSwap3DBuffers
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // nop
    // _022344D0: .word ov40_022451C8
    // _022344D4: .word ov40_022451CC
    // TODO: decompile
}




void ov40_022344D8(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #8
    // mov r1, #0x86
    // add r4, r0, #0
    // lsl r1, r1, #4
    // ldr r5, [r4, r1]
    // bl ov40_0223D5CC
    // cmp r0, #0
    // bne _022344F2
    // add sp, #8
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // ldr r0, [r4, #8]
    // cmp r0, #6
    // bls _022344FA
    // b _0223473E
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _02234506: ; jump table
    // mov r0, #0
    // mov r1, #1
    // bl SetBgPriority
    // mov r0, #1
    // mov r1, #3
    // bl SetBgPriority
    // mov r0, #2
    // add r1, r0, #0
    // bl SetBgPriority
    // mov r0, #3
    // mov r1, #1
    // bl SetBgPriority
    // mov r0, #4
    // mov r1, #1
    // bl SetBgPriority
    // mov r0, #5
    // mov r1, #3
    // bl SetBgPriority
    // mov r0, #6
    // mov r1, #2
    // bl SetBgPriority
    // mov r0, #7
    // mov r1, #1
    // bl SetBgPriority
    // mov r0, #0x8e
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // bl Heap_Free
    // mov r0, #0x25
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // bl sub_020314BC
    // ldr r0, [r4, #0x24]
    // mov r1, #2
    // bl BgClearTilemapBufferAndCommit
    // ldr r0, [r4, #0x24]
    // mov r1, #6
    // bl BgClearTilemapBufferAndCommit
    // add r0, r4, #0
    // bl ov40_02236130
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _022347F2
    // add r0, r5, #0
    // add r0, #8
    // mov r1, #1
    // bl ov40_0222DA84
    // add r0, r5, #0
    // add r1, r5, #4
    // mov r2, #1
    // mov r3, #0
    // bl ov40_0222DA00
    // cmp r0, #0
    // beq _022345E0
    // add r0, r4, #0
    // mov r1, #1
    // bl ov40_02230964
    // add r0, r4, #0
    // bl ov40_02235B10
    // add r0, r4, #0
    // mov r1, #0
    // bl ov40_02230964
    // ldr r0, [r4, #0x24]
    // mov r1, #3
    // bl BgClearTilemapBufferAndCommit
    // ldr r0, [r4, #0x24]
    // mov r1, #7
    // bl BgClearTilemapBufferAndCommit
    // mov r2, #0
    // ldr r0, [r4, #0x24]
    // mov r1, #2
    // add r3, r2, #0
    // bl BgSetPosTextAndCommit
    // mov r0, #2
    // mov r1, #0
    // bl SetBgPriority
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // ldr r0, [r4, #0x58]
    // mov r1, #3
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r5, #8]
    // ldr r0, [r4, #0x28]
    // lsl r3, r3, #0x18
    // mov r2, #0xc
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // b _022347F2
    // mov r1, #0x6f
    // lsl r1, r1, #4
    // ldr r1, [r4, r1]
    // add r0, r4, #0
    // mov r2, #0x80
    // mov r3, #0x60
    // bl ov40_0223077C
    // mov r0, #0x6f
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #1
    // bl sub_020879E0
    // mov r0, #0x6f
    // lsl r0, r0, #4
    // mov r1, #0x18
    // ldr r0, [r4, r0]
    // add r2, r1, #0
    // bl sub_02087A08
    // ldr r1, _022347F8 ; =0x0000011E
    // add r0, r4, #0
    // bl ov40_0222DED0
    // mov r0, #0x6d
    // bl sub_020314A4
    // mov r1, #0xb7
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // ldr r0, [r5, r1]
    // mov r1, #0x83
    // lsl r1, r1, #4
    // ldr r1, [r4, r1]
    // bl sub_020314C4
    // ldr r0, _022347FC ; =0x0000057D
    // bl PlaySE
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _022347F2
    // add r0, r4, #0
    // bl ov40_0223D540
    // mov r2, #0xb7
    // lsl r2, r2, #2
    // ldr r1, [r5, r2]
    // sub r2, #0xb0
    // ldr r2, [r5, r2]
    // bl ov39_022273B0
    // cmp r0, #1
    // beq _0223466C
    // b _022347F2
    // mov r0, #0xb7
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // bl sub_020314BC
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _022347F2
    // add r0, r4, #0
    // bl ov40_0222DFB0
    // add r0, r4, #0
    // bl ov40_0223D540
    // add r1, sp, #4
    // bl ov39_02227D44
    // cmp r0, #1
    // ldr r0, _022347FC ; =0x0000057D
    // bne _022346B2
    // mov r1, #0
    // bl StopSE
    // ldr r3, [sp, #4]
    // add r0, r4, #0
    // ldr r2, [r3, #0xc]
    // ldr r3, [r3, #4]
    // mov r1, #0
    // bl ov40_02230CDC
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _022347F2
    // mov r1, #0
    // bl StopSE
    // add r0, r4, #0
    // mov r1, #0x24
    // bl ov40_0222FB28
    // ldr r0, _02234800 ; =0x00000577
    // bl PlaySE
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _022347F2
    // mov r0, #0x6f
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl sub_020879E0
    // mov r0, #0x6f
    // lsl r0, r0, #4
    // mov r1, #0
    // ldr r0, [r4, r0]
    // add r2, r1, #0
    // bl sub_02087A08
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _022347F2
    // add r0, r4, #0
    // mov r1, #1
    // bl ov40_02230964
    // add r5, #8
    // add r0, r5, #0
    // bl ov40_0222DAA8
    // add r0, r4, #0
    // bl ov40_0222D88C
    // add r0, r4, #0
    // mov r1, #0
    // bl ov40_02230964
    // ldr r0, [r4, #0x24]
    // mov r1, #2
    // bl BgClearTilemapBufferAndCommit
    // ldr r0, [r4, #0x24]
    // mov r1, #6
    // bl BgClearTilemapBufferAndCommit
    // ldr r0, [r4, #0x24]
    // mov r1, #3
    // bl BgClearTilemapBufferAndCommit
    // ldr r0, [r4, #0x24]
    // mov r1, #7
    // bl BgClearTilemapBufferAndCommit
    // add r0, r4, #0
    // mov r1, #1
    // bl ov40_0222FB90
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _022347F2
    // add r0, r4, #0
    // bl ov40_0222FBB4
    // cmp r0, #0
    // beq _022347F2
    // add r0, r5, #0
    // add r0, #8
    // mov r1, #0
    // bl ov40_0222DA84
    // cmp r0, #0
    // beq _022347C2
    // mov r0, #0x8a
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // cmp r0, #0
    // beq _02234776
    // bl ov41_0224B57C
    // add r0, r4, #0
    // bl ov40_0222BC54
    // mov r0, #2
    // mov r1, #0
    // bl SetBgPriority
    // bl ov40_02235994
    // add r0, r4, #0
    // bl ov40_0222DD08
    // add r0, r5, #0
    // add r0, #8
    // bl ov40_0222DAA8
    // ldr r0, [r4, #0x58]
    // mov r1, #2
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r0, [r4, #0x28]
    // mov r2, #0xc
    // mov r3, #0x10
    // bl PaletteData_BlendPalettes
    // mov r1, #1
    // ldr r3, [r4, #0x10]
    // add r0, r4, #0
    // add r2, r1, #0
    // bl ov40_0222BF64
    // add r0, r4, #0
    // mov r1, #5
    // bl ov40_0222BF80
    // add r0, r5, #0
    // bl Heap_Free
    // ldr r0, _02234804 ; =FS_OVERLAY_ID(OVY_41)
    // bl UnloadOverlayByID
    // ldr r0, _02234808 ; =ov40_0222BD04
    // add r1, r4, #0
    // bl Main_SetVBlankIntrCB
    // b _022347F2
    // ldr r0, [r4, #0x58]
    // mov r1, #1
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r5, #8]
    // ldr r0, [r4, #0x28]
    // lsl r3, r3, #0x18
    // mov r2, #2
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // ldr r0, [r4, #0x58]
    // mov r1, #3
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r5, #8]
    // ldr r0, [r4, #0x28]
    // lsl r3, r3, #0x18
    // mov r2, #0xc
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // mov r0, #0
    // add sp, #8
    // pop {r3, r4, r5, pc}
    // _022347F8: .word 0x0000011E
    // _022347FC: .word 0x0000057D
    // _02234800: .word 0x00000577
    // _02234804: .word FS_OVERLAY_ID(OVY_41)
    // _02234808: .word ov40_0222BD04
    // TODO: decompile
}




void ov40_0223480C(void) {
    // push {r3, r4, r5, lr}
    // mov r1, #0x86
    // add r5, r0, #0
    // lsl r1, r1, #4
    // ldr r4, [r5, r1]
    // ldr r1, [r5, #8]
    // cmp r1, #0
    // beq _02234826
    // cmp r1, #1
    // beq _02234898
    // cmp r1, #2
    // beq _022348F8
    // b _02234946
    // mov r0, #0
    // mov r1, #1
    // bl SetBgPriority
    // mov r0, #1
    // mov r1, #3
    // bl SetBgPriority
    // mov r0, #2
    // add r1, r0, #0
    // bl SetBgPriority
    // mov r0, #3
    // mov r1, #1
    // bl SetBgPriority
    // mov r0, #4
    // mov r1, #1
    // bl SetBgPriority
    // mov r0, #5
    // mov r1, #3
    // bl SetBgPriority
    // mov r0, #6
    // mov r1, #2
    // bl SetBgPriority
    // mov r0, #7
    // mov r1, #1
    // bl SetBgPriority
    // mov r0, #0x8e
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl Heap_Free
    // mov r0, #0x25
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // bl sub_020314BC
    // ldr r0, [r5, #0x24]
    // mov r1, #2
    // bl BgClearTilemapBufferAndCommit
    // ldr r0, [r5, #0x24]
    // mov r1, #6
    // bl BgClearTilemapBufferAndCommit
    // add r0, r5, #0
    // bl ov40_02236130
    // ldr r0, [r5, #8]
    // add r0, r0, #1
    // str r0, [r5, #8]
    // b _02234A08
    // add r0, r4, #0
    // add r0, #8
    // mov r1, #1
    // bl ov40_0222DA84
    // add r0, r4, #0
    // add r1, r4, #4
    // mov r2, #1
    // mov r3, #0
    // bl ov40_0222DA00
    // cmp r0, #0
    // beq _022348DE
    // add r0, r5, #0
    // mov r1, #1
    // bl ov40_02230964
    // add r0, r5, #0
    // bl ov40_02235B10
    // add r0, r5, #0
    // mov r1, #0
    // bl ov40_02230964
    // ldr r0, [r5, #0x24]
    // mov r1, #3
    // bl BgClearTilemapBufferAndCommit
    // ldr r0, [r5, #0x24]
    // mov r1, #7
    // bl BgClearTilemapBufferAndCommit
    // ldr r0, [r5, #8]
    // add r0, r0, #1
    // str r0, [r5, #8]
    // ldr r0, [r5, #0x58]
    // mov r1, #3
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r4, #8]
    // ldr r0, [r5, #0x28]
    // lsl r3, r3, #0x18
    // mov r2, #0xc
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // b _02234A08
    // add r4, #8
    // add r0, r4, #0
    // bl ov40_0222DAA8
    // add r0, r5, #0
    // mov r1, #1
    // bl ov40_02230964
    // add r0, r5, #0
    // bl ov40_0222D88C
    // add r0, r5, #0
    // mov r1, #0
    // bl ov40_02230964
    // ldr r0, [r5, #0x24]
    // mov r1, #2
    // bl BgClearTilemapBufferAndCommit
    // ldr r0, [r5, #0x24]
    // mov r1, #6
    // bl BgClearTilemapBufferAndCommit
    // ldr r0, [r5, #0x24]
    // mov r1, #3
    // bl BgClearTilemapBufferAndCommit
    // ldr r0, [r5, #0x24]
    // mov r1, #7
    // bl BgClearTilemapBufferAndCommit
    // add r0, r5, #0
    // mov r1, #1
    // bl ov40_0222FB90
    // ldr r0, [r5, #8]
    // add r0, r0, #1
    // str r0, [r5, #8]
    // b _02234A08
    // bl ov40_0222FBB4
    // cmp r0, #0
    // beq _02234A08
    // add r0, r4, #0
    // add r0, #8
    // mov r1, #0
    // bl ov40_0222DA84
    // cmp r0, #0
    // beq _022349D8
    // add r0, r5, #0
    // mov r1, #1
    // bl ov40_02230964
    // mov r0, #0x8a
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // beq _02234984
    // bl ov41_0224B57C
    // add r0, r5, #0
    // bl ov40_0222BC54
    // mov r0, #2
    // mov r1, #0
    // bl SetBgPriority
    // bl ov40_02235994
    // add r0, r5, #0
    // mov r1, #0
    // bl ov40_02230964
    // add r0, r5, #0
    // bl ov40_0222DD08
    // add r0, r4, #0
    // add r0, #8
    // bl ov40_0222DAA8
    // ldr r0, [r5, #0x58]
    // mov r1, #2
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r0, [r5, #0x28]
    // mov r2, #0xc
    // mov r3, #0x10
    // bl PaletteData_BlendPalettes
    // mov r1, #1
    // ldr r3, [r5, #0x10]
    // add r0, r5, #0
    // add r2, r1, #0
    // bl ov40_0222BF64
    // add r0, r5, #0
    // mov r1, #5
    // bl ov40_0222BF80
    // add r0, r4, #0
    // bl Heap_Free
    // ldr r0, _02234A0C ; =FS_OVERLAY_ID(OVY_41)
    // bl UnloadOverlayByID
    // ldr r0, _02234A10 ; =ov40_0222BD04
    // add r1, r5, #0
    // bl Main_SetVBlankIntrCB
    // b _02234A08
    // ldr r0, [r5, #0x58]
    // mov r1, #1
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r4, #8]
    // ldr r0, [r5, #0x28]
    // lsl r3, r3, #0x18
    // mov r2, #2
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // ldr r0, [r5, #0x58]
    // mov r1, #3
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r4, #8]
    // ldr r0, [r5, #0x28]
    // lsl r3, r3, #0x18
    // mov r2, #0xc
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // _02234A0C: .word FS_OVERLAY_ID(OVY_41)
    // _02234A10: .word ov40_0222BD04
    // TODO: decompile
}




void ov40_02234A14(void) {
    ov40_022359B4(1);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    ov40_0222BF80((*((u32*)(r4 + 8)) + 1), 3);
}




void ov40_02234A38(void) {
    // push {r3, r4, r5, lr}
    // mov r1, #0x86
    // add r4, r0, #0
    // lsl r1, r1, #4
    // ldr r5, [r4, r1]
    // ldr r1, [r4, #8]
    // cmp r1, #4
    // bls _02234A4A
    // b _02234B90
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _02234A56: ; jump table
    // mov r1, #0x3c
    // mov r2, #7
    // bl ov40_022307DC
    // mov r0, #8
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #8
    // mov r1, #1
    // bl GfGfx_EngineBTogglePlanes
    // mov r0, #4
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #4
    // mov r1, #1
    // bl GfGfx_EngineBTogglePlanes
    // mov r0, #0x6d
    // str r0, [sp]
    // ldr r0, _02234BB0 ; =ov40_02245708
    // ldr r2, _02234BB4 ; =ov40_02235FD0
    // mov r1, #9
    // add r3, r4, #0
    // bl TouchHitboxController_Create
    // mov r1, #0x1d
    // lsl r1, r1, #4
    // str r0, [r5, r1]
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _02234BAC
    // add r0, r5, #0
    // add r0, #8
    // mov r1, #0
    // bl ov40_0222DA84
    // mov r2, #0
    // add r0, r5, #0
    // add r1, r5, #4
    // add r3, r2, #0
    // bl ov40_0222DA00
    // cmp r0, #0
    // beq _02234AD4
    // add r0, r4, #0
    // mov r1, #0x72
    // bl ov40_0222DED0
    // add r0, r4, #0
    // bl ov40_02235FFC
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // ldr r0, [r4, #0x58]
    // mov r1, #3
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r5, #8]
    // ldr r0, [r4, #0x28]
    // lsl r3, r3, #0x18
    // mov r2, #0xc
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // b _02234BAC
    // mov r0, #0x1d
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // bl TouchHitboxController_IsTriggered
    // ldr r0, _02234BB8 ; =ov40_022451C4
    // bl TouchscreenHitbox_TouchNewIsIn
    // cmp r0, #0
    // bne _02234B0C
    // mov r0, #0x79
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // cmp r0, #1
    // bne _02234BAC
    // add r0, r4, #0
    // bl ov40_02230944
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _02234BAC
    // bl ov40_0223610C
    // mov r0, #0x1d
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // bl TouchHitboxController_Destroy
    // add r0, r4, #0
    // bl ov40_0222DFB0
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // mov r0, #0x79
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // cmp r0, #1
    // bne _02234B56
    // add r0, r5, #0
    // add r1, r5, #4
    // mov r2, #1
    // mov r3, #2
    // bl ov40_0222DA00
    // cmp r0, #0
    // beq _02234BAC
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _02234BAC
    // add r0, r5, #0
    // add r0, #8
    // mov r1, #1
    // bl ov40_0222DA84
    // add r0, r5, #0
    // add r1, r5, #4
    // mov r2, #1
    // mov r3, #2
    // bl ov40_0222DA00
    // cmp r0, #0
    // beq _02234B76
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // ldr r0, [r4, #0x58]
    // mov r1, #3
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r5, #8]
    // ldr r0, [r4, #0x28]
    // lsl r3, r3, #0x18
    // mov r2, #0xc
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // b _02234BAC
    // mov r0, #0x79
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // cmp r0, #1
    // bne _02234BA4
    // add r0, r4, #0
    // mov r1, #4
    // bl ov40_0222BF80
    // b _02234BAC
    // add r0, r4, #0
    // mov r1, #5
    // bl ov40_0222BF80
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // _02234BB0: .word ov40_02245708
    // _02234BB4: .word ov40_02235FD0
    // _02234BB8: .word ov40_022451C4
    // TODO: decompile
}




void ov40_02234BBC(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #4
    // mov r1, #0x86
    // add r4, r0, #0
    // lsl r1, r1, #4
    // ldr r5, [r4, r1]
    // ldr r1, [r4, #8]
    // cmp r1, #4
    // bls _02234BD0
    // b _02234D5A
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _02234BDC: ; jump table
    // mov r1, #1
    // bl ov40_022359B4
    // add r0, r4, #0
    // mov r1, #0x3a
    // mov r2, #7
    // bl ov40_022307DC
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _02234D7C
    // add r0, r5, #0
    // add r1, r5, #4
    // mov r2, #0
    // mov r3, #2
    // bl ov40_0222DA00
    // cmp r0, #0
    // bne _02234C10
    // b _02234D7C
    // add r0, r4, #0
    // mov r1, #0x72
    // bl ov40_0222DED0
    // add r0, r4, #0
    // mov r1, #1
    // bl ov40_02230964
    // ldr r0, _02234D84 ; =0x0000047C
    // add r1, r4, #0
    // add r0, r4, r0
    // bl ov40_0222F9D4
    // mov r0, #0x7b
    // lsl r0, r0, #2
    // ldr r3, _02234D88 ; =ov40_022451F4
    // add r2, r5, r0
    // mov r6, #5
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // sub r6, r6, #1
    // bne _02234C34
    // ldr r0, [r3]
    // mov r1, #0x7a
    // lsl r1, r1, #2
    // str r0, [r2]
    // ldr r2, [r5, r1]
    // add r0, r1, #4
    // str r2, [r5, r0]
    // add r0, r1, #0
    // sub r0, #0x14
    // ldr r0, [r5, r0]
    // add r1, #8
    // str r0, [r5, r1]
    // ldr r0, _02234D8C ; =0x0000049C
    // add r0, r4, r0
    // bl ov40_0222F734
    // mov r3, #0x1e
    // ldr r0, _02234D8C ; =0x0000049C
    // lsl r3, r3, #4
    // ldr r2, [r5, r3]
    // add r3, #0xc
    // add r0, r4, r0
    // add r1, r4, #0
    // add r3, r5, r3
    // bl ov40_0222E9B8
    // ldr r1, _02234D84 ; =0x0000047C
    // add r0, r4, r1
    // add r1, #0x20
    // add r1, r4, r1
    // bl ov40_0222FA5C
    // ldr r0, _02234D8C ; =0x0000049C
    // add r1, r4, #0
    // add r0, r4, r0
    // mov r2, #2
    // bl ov40_0222F740
    // add r0, r4, #0
    // mov r1, #0
    // bl ov40_02230964
    // mov r0, #0x2e
    // mov r1, #0
    // lsl r0, r0, #4
    // str r1, [r5, r0]
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _02234D7C
    // ldr r0, _02234D84 ; =0x0000047C
    // add r0, r4, r0
    // bl ov40_0222FA88
    // ldr r1, _02234D8C ; =0x0000049C
    // add r0, r4, r1
    // sub r1, #0x10
    // ldrsh r1, [r4, r1]
    // bl ov40_0222F6D0
    // ldr r0, _02234D8C ; =0x0000049C
    // add r1, r4, #0
    // add r0, r4, r0
    // bl ov40_0222F38C
    // cmp r0, #0
    // beq _02234CD4
    // mov r1, #0x2e
    // lsl r1, r1, #4
    // str r0, [r5, r1]
    // add r0, r4, #0
    // bl ov40_02230944
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // ldr r0, _02234D90 ; =ov40_022451C4
    // bl TouchscreenHitbox_TouchNewIsIn
    // cmp r0, #0
    // beq _02234D7C
    // add r0, r4, #0
    // bl ov40_02230944
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _02234D7C
    // bl ov40_0222DFB0
    // add r0, r4, #0
    // mov r1, #1
    // bl ov40_02230964
    // ldr r0, _02234D84 ; =0x0000047C
    // add r0, r4, r0
    // bl ov40_0222FA24
    // ldr r0, _02234D8C ; =0x0000049C
    // add r0, r4, r0
    // bl ov40_0222F720
    // ldr r0, _02234D8C ; =0x0000049C
    // add r1, r4, #0
    // add r0, r4, r0
    // bl ov40_0222F920
    // add r0, r4, #0
    // mov r1, #0
    // bl ov40_02230964
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // add r0, r5, #0
    // add r0, #8
    // mov r1, #1
    // bl ov40_0222DA84
    // add r0, r5, #0
    // add r1, r5, #4
    // mov r2, #1
    // mov r3, #0
    // bl ov40_0222DA00
    // cmp r0, #0
    // beq _02234D40
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // ldr r0, [r4, #0x58]
    // mov r1, #3
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r5, #8]
    // ldr r0, [r4, #0x28]
    // lsl r3, r3, #0x18
    // mov r2, #0xc
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // b _02234D7C
    // add r0, r4, #0
    // bl ov40_02235FA0
    // mov r0, #0x2e
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // cmp r0, #0
    // beq _02234D74
    // add r0, r4, #0
    // mov r1, #6
    // bl ov40_0222BF80
    // b _02234D7C
    // add r0, r4, #0
    // mov r1, #3
    // bl ov40_0222BF80
    // mov r0, #0
    // add sp, #4
    // pop {r3, r4, r5, r6, pc}
    // nop
    // _02234D84: .word 0x0000047C
    // _02234D88: .word ov40_022451F4
    // _02234D8C: .word 0x0000049C
    // _02234D90: .word ov40_022451C4
    // TODO: decompile
}




void ov40_02234D94(void) {
    // push {r3, r4, r5, lr}
    // mov r1, #0x86
    // add r5, r0, #0
    // lsl r1, r1, #4
    // ldr r4, [r5, r1]
    // ldr r1, [r5, #8]
    // cmp r1, #0
    // beq _02234DAE
    // cmp r1, #1
    // beq _02234E1A
    // cmp r1, #2
    // beq _02234E7A
    // b _02234EC8
    // mov r0, #0
    // mov r1, #1
    // bl SetBgPriority
    // mov r0, #1
    // mov r1, #3
    // bl SetBgPriority
    // mov r0, #2
    // add r1, r0, #0
    // bl SetBgPriority
    // mov r0, #3
    // mov r1, #1
    // bl SetBgPriority
    // mov r0, #4
    // mov r1, #1
    // bl SetBgPriority
    // mov r0, #5
    // mov r1, #3
    // bl SetBgPriority
    // mov r0, #6
    // mov r1, #2
    // bl SetBgPriority
    // mov r0, #7
    // mov r1, #1
    // bl SetBgPriority
    // mov r0, #0x8e
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl Heap_Free
    // mov r0, #0x25
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // bl sub_020314BC
    // ldr r0, [r5, #0x24]
    // mov r1, #2
    // bl BgClearTilemapBufferAndCommit
    // ldr r0, [r5, #0x24]
    // mov r1, #6
    // bl BgClearTilemapBufferAndCommit
    // ldr r0, [r5, #8]
    // add r0, r0, #1
    // str r0, [r5, #8]
    // b _02234F8A
    // add r0, r4, #0
    // add r0, #8
    // mov r1, #1
    // bl ov40_0222DA84
    // add r0, r4, #0
    // add r1, r4, #4
    // mov r2, #1
    // mov r3, #0
    // bl ov40_0222DA00
    // cmp r0, #0
    // beq _02234E60
    // add r0, r5, #0
    // mov r1, #1
    // bl ov40_02230964
    // add r0, r5, #0
    // bl ov40_02235B10
    // add r0, r5, #0
    // mov r1, #0
    // bl ov40_02230964
    // ldr r0, [r5, #0x24]
    // mov r1, #3
    // bl BgClearTilemapBufferAndCommit
    // ldr r0, [r5, #0x24]
    // mov r1, #7
    // bl BgClearTilemapBufferAndCommit
    // ldr r0, [r5, #8]
    // add r0, r0, #1
    // str r0, [r5, #8]
    // ldr r0, [r5, #0x58]
    // mov r1, #3
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r4, #8]
    // ldr r0, [r5, #0x28]
    // lsl r3, r3, #0x18
    // mov r2, #0xc
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // b _02234F8A
    // add r4, #8
    // add r0, r4, #0
    // bl ov40_0222DAA8
    // add r0, r5, #0
    // mov r1, #1
    // bl ov40_02230964
    // add r0, r5, #0
    // bl ov40_0222D88C
    // add r0, r5, #0
    // mov r1, #0
    // bl ov40_02230964
    // ldr r0, [r5, #0x24]
    // mov r1, #2
    // bl BgClearTilemapBufferAndCommit
    // ldr r0, [r5, #0x24]
    // mov r1, #6
    // bl BgClearTilemapBufferAndCommit
    // ldr r0, [r5, #0x24]
    // mov r1, #3
    // bl BgClearTilemapBufferAndCommit
    // ldr r0, [r5, #0x24]
    // mov r1, #7
    // bl BgClearTilemapBufferAndCommit
    // add r0, r5, #0
    // mov r1, #1
    // bl ov40_0222FB90
    // ldr r0, [r5, #8]
    // add r0, r0, #1
    // str r0, [r5, #8]
    // b _02234F8A
    // bl ov40_0222FBB4
    // cmp r0, #0
    // beq _02234F8A
    // add r0, r4, #0
    // add r0, #8
    // mov r1, #0
    // bl ov40_0222DA84
    // cmp r0, #0
    // beq _02234F5A
    // add r0, r5, #0
    // mov r1, #1
    // bl ov40_02230964
    // mov r0, #0x8a
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // beq _02234F06
    // bl ov41_0224B57C
    // add r0, r5, #0
    // bl ov40_0222BC54
    // mov r0, #2
    // mov r1, #0
    // bl SetBgPriority
    // bl ov40_02235994
    // add r0, r5, #0
    // mov r1, #0
    // bl ov40_02230964
    // add r0, r5, #0
    // bl ov40_0222DD08
    // add r0, r4, #0
    // add r0, #8
    // bl ov40_0222DAA8
    // ldr r0, [r5, #0x58]
    // mov r1, #2
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r0, [r5, #0x28]
    // mov r2, #0xc
    // mov r3, #0x10
    // bl PaletteData_BlendPalettes
    // mov r1, #1
    // ldr r3, [r5, #0x10]
    // add r0, r5, #0
    // add r2, r1, #0
    // bl ov40_0222BF64
    // add r0, r5, #0
    // mov r1, #5
    // bl ov40_0222BF80
    // add r0, r4, #0
    // bl Heap_Free
    // ldr r0, _02234F90 ; =FS_OVERLAY_ID(OVY_41)
    // bl UnloadOverlayByID
    // ldr r0, _02234F94 ; =ov40_0222BD04
    // add r1, r5, #0
    // bl Main_SetVBlankIntrCB
    // b _02234F8A
    // ldr r0, [r5, #0x58]
    // mov r1, #1
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r4, #8]
    // ldr r0, [r5, #0x28]
    // lsl r3, r3, #0x18
    // mov r2, #2
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // ldr r0, [r5, #0x58]
    // mov r1, #3
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r4, #8]
    // ldr r0, [r5, #0x28]
    // lsl r3, r3, #0x18
    // mov r2, #0xc
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // nop
    // _02234F90: .word FS_OVERLAY_ID(OVY_41)
    // _02234F94: .word ov40_0222BD04
    // TODO: decompile
}




void ov40_02234F98(void) {
    // push {r3, r4, r5, lr}
    // mov r1, #0x86
    // add r4, r0, #0
    // lsl r1, r1, #4
    // ldr r5, [r4, r1]
    // bl ov40_0223D5CC
    // cmp r0, #0
    // bne _02234FAE
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // ldr r0, [r4, #8]
    // cmp r0, #4
    // bls _02234FB6
    // b _022350F4
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _02234FC2: ; jump table
    // mov r1, #0x6f
    // lsl r1, r1, #4
    // ldr r1, [r4, r1]
    // add r0, r4, #0
    // mov r2, #0x80
    // mov r3, #0x60
    // bl ov40_0223077C
    // mov r0, #0x6f
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #1
    // bl sub_020879E0
    // mov r0, #0x6f
    // lsl r0, r0, #4
    // mov r1, #0x18
    // ldr r0, [r4, r0]
    // add r2, r1, #0
    // bl sub_02087A08
    // ldr r1, _0223511C ; =0x0000011F
    // add r0, r4, #0
    // bl ov40_0222DED0
    // ldr r0, _02235120 ; =0x0000057D
    // bl PlaySE
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _02235118
    // add r0, r4, #0
    // bl ov40_0223D540
    // mov r1, #0x2e
    // lsl r1, r1, #4
    // ldr r1, [r5, r1]
    // bl ov39_022273F8
    // cmp r0, #1
    // bne _02235118
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _02235118
    // add r0, r4, #0
    // bl ov40_0222DFB0
    // add r0, r4, #0
    // bl ov40_0223D540
    // add r1, sp, #0
    // bl ov39_02227D44
    // cmp r0, #1
    // ldr r0, _02235120 ; =0x0000057D
    // bne _02235072
    // mov r1, #0
    // bl StopSE
    // ldr r3, [sp]
    // add r0, r4, #0
    // ldr r2, [r3, #0xc]
    // ldr r3, [r3, #4]
    // mov r1, #1
    // bl ov40_02230CDC
    // mov r0, #0xb9
    // mov r1, #0
    // lsl r0, r0, #2
    // str r1, [r5, r0]
    // mov r0, #0x6f
    // str r1, [r4, #0xc]
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // bl sub_020879E0
    // add r0, r4, #0
    // mov r1, #3
    // bl ov40_0222BF80
    // b _02235118
    // mov r1, #0
    // bl StopSE
    // ldr r0, _02235124 ; =0x00000577
    // bl PlaySE
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _02235118
    // mov r0, #1
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #4
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #4
    // mov r1, #0
    // bl GfGfx_EngineBTogglePlanes
    // mov r0, #0x6f
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl sub_020879E0
    // mov r0, #0x6f
    // lsl r0, r0, #4
    // mov r1, #0
    // ldr r0, [r4, r0]
    // add r2, r1, #0
    // bl sub_02087A08
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _02235118
    // mov r1, #0xb9
    // lsl r1, r1, #2
    // ldr r0, [r5, r1]
    // cmp r0, #0
    // beq _022350E0
    // add r0, r1, #0
    // mov r2, #0
    // sub r0, #0xb0
    // str r2, [r5, r0]
    // sub r1, #0xb4
    // str r2, [r5, r1]
    // add r0, r4, #0
    // mov r1, #7
    // bl ov40_0222BF80
    // b _02235118
    // ldr r1, _02235128 ; =0x00000125
    // add r0, r4, #0
    // bl ov40_0222DED0
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // mov r0, #0
    // str r0, [r4, #0xc]
    // b _02235118
    // ldr r0, [r4, #0xc]
    // add r0, r0, #1
    // str r0, [r4, #0xc]
    // cmp r0, #0x3c
    // bge _02235106
    // bl System_GetTouchNew
    // cmp r0, #1
    // bne _02235118
    // mov r0, #0
    // str r0, [r4, #0xc]
    // add r0, r4, #0
    // bl ov40_0222DFB0
    // add r0, r4, #0
    // mov r1, #3
    // bl ov40_0222BF80
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // _0223511C: .word 0x0000011F
    // _02235120: .word 0x0000057D
    // _02235124: .word 0x00000577
    // _02235128: .word 0x00000125
    // TODO: decompile
}




void ov40_0223512C(void) {
    // push {r3, r4, r5, lr}
    // mov r1, #0x86
    // add r5, r0, #0
    // lsl r1, r1, #4
    // ldr r4, [r5, r1]
    // ldr r1, [r5, #8]
    // cmp r1, #0
    // beq _02235146
    // cmp r1, #1
    // beq _022351D0
    // cmp r1, #2
    // beq _022351E6
    // b _0223524E
    // mov r1, #0x8d
    // mov r0, #0
    // lsl r1, r1, #2
    // str r0, [r4, #0xc]
    // ldr r0, [r4, r1]
    // lsl r0, r0, #2
    // add r2, r4, r0
    // add r0, r1, #0
    // add r0, #8
    // ldr r0, [r2, r0]
    // add r1, r1, #4
    // ldr r1, [r4, r1]
    // add r0, #0x80
    // bl ov39_02227080
    // mov r1, #0x86
    // lsl r1, r1, #2
    // add r0, r4, r1
    // add r1, #0x20
    // ldr r1, [r4, r1]
    // bl ov41_0224B530
    // mov r1, #0x8a
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // ldr r0, [r4, r1]
    // mov r1, #0
    // bl ov41_0224B5D0
    // bl ov40_02235940
    // add r0, r5, #0
    // mov r1, #0x23
    // mov r2, #3
    // bl ov40_022307DC
    // add r0, r5, #0
    // mov r1, #0x24
    // mov r2, #7
    // bl ov40_022307DC
    // mov r0, #8
    // mov r1, #1
    // bl GfGfx_EngineBTogglePlanes
    // mov r0, #4
    // mov r1, #1
    // bl GfGfx_EngineBTogglePlanes
    // mov r0, #8
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #4
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #1
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // ldr r0, _02235278 ; =ov40_02235900
    // add r1, r5, #0
    // bl Main_SetVBlankIntrCB
    // ldr r0, [r5, #8]
    // add r0, r0, #1
    // str r0, [r5, #8]
    // b _02235254
    // mov r1, #0
    // mov r3, #2
    // ldr r0, [r5, #0x28]
    // add r2, r1, #0
    // lsl r3, r3, #8
    // bl PaletteData_LoadPaletteSlotFromHardware
    // ldr r0, [r5, #8]
    // add r0, r0, #1
    // str r0, [r5, #8]
    // b _02235254
    // add r0, r4, #0
    // add r0, #8
    // mov r1, #0
    // bl ov40_0222DA84
    // mov r2, #0
    // add r0, r4, #0
    // add r1, r4, #4
    // add r3, r2, #0
    // bl ov40_0222DA00
    // cmp r0, #0
    // beq _02235234
    // mov r0, #0x8a
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #1
    // bl ov41_0224B5D0
    // mov r0, #4
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #1
    // add r1, r0, #0
    // bl GfGfx_EngineATogglePlanes
    // mov r1, #0x8d
    // lsl r1, r1, #2
    // ldr r1, [r4, r1]
    // add r0, r5, #0
    // bl ov40_02235C7C
    // add r0, r5, #0
    // bl ov40_022358C0
    // ldr r0, [r5, #8]
    // add r0, r0, #1
    // str r0, [r5, #8]
    // ldr r0, [r5, #0x58]
    // mov r1, #3
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r4, #8]
    // ldr r0, [r5, #0x28]
    // lsl r3, r3, #0x18
    // mov r2, #0xc
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // b _02235254
    // mov r1, #8
    // bl ov40_0222BF80
    // mov r0, #0x8a
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // beq _02235274
    // bl Thunk_G3X_Reset
    // mov r0, #0x8a
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl ov41_0224B554
    // mov r0, #0
    // add r1, r0, #0
    // bl RequestSwap3DBuffers
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // _02235278: .word ov40_02235900
    // TODO: decompile
}




void ov40_0223527C(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // mov r0, #0x86
    // lsl r0, r0, #4
    // ldr r4, [r5, r0]
    // ldr r0, _0223533C ; =ov40_022451C4
    // bl TouchscreenHitbox_TouchNewIsIn
    // cmp r0, #0
    // beq _0223529E
    // add r0, r5, #0
    // bl ov40_02230944
    // add r0, r5, #0
    // mov r1, #9
    // bl ov40_0222BF80
    // ldr r0, _02235340 ; =ov40_022451D0
    // bl TouchscreenHitbox_TouchNewIsIn
    // cmp r0, #0
    // beq _022352B6
    // add r0, r5, #0
    // bl ov40_02230944
    // add r0, r5, #0
    // mov r1, #0xa
    // bl ov40_0222BF80
    // ldr r0, _02235344 ; =ov40_022451D4
    // bl TouchscreenHitbox_TouchNewIsIn
    // cmp r0, #0
    // beq _022352E4
    // mov r1, #0x8d
    // lsl r1, r1, #2
    // ldr r0, [r4, r1]
    // cmp r0, #0
    // beq _022352CC
    // b _022352D2
    // add r0, r1, #0
    // add r0, #0xb0
    // ldr r0, [r4, r0]
    // sub r0, r0, #1
    // str r0, [r4, r1]
    // add r0, r5, #0
    // bl ov40_02230944
    // add r0, r5, #0
    // mov r1, #0xb
    // bl ov40_0222BF80
    // ldr r0, _02235348 ; =ov40_022451D8
    // bl TouchscreenHitbox_TouchNewIsIn
    // cmp r0, #0
    // beq _02235316
    // mov r1, #0x8d
    // lsl r1, r1, #2
    // ldr r0, [r4, r1]
    // add r0, r0, #1
    // str r0, [r4, r1]
    // ldr r0, [r4, r1]
    // add r1, #0xb0
    // ldr r1, [r4, r1]
    // bl _s32_div_f
    // mov r0, #0x8d
    // lsl r0, r0, #2
    // str r1, [r4, r0]
    // add r0, r5, #0
    // bl ov40_02230944
    // add r0, r5, #0
    // mov r1, #0xb
    // bl ov40_0222BF80
    // mov r0, #0x8a
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // beq _02235336
    // bl Thunk_G3X_Reset
    // mov r0, #0x8a
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl ov41_0224B554
    // mov r0, #0
    // add r1, r0, #0
    // bl RequestSwap3DBuffers
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // nop
    // _0223533C: .word ov40_022451C4
    // _02235340: .word ov40_022451D0
    // _02235344: .word ov40_022451D4
    // _02235348: .word ov40_022451D8
    // TODO: decompile
}




void ov40_0223534C(void) {
    // ldr r4, [r5, r1]
    BgClearTilemapBufferAndCommit(*((u32*)(r0 + 0x24)), 2);
    BgClearTilemapBufferAndCommit(*((u32*)(r5 + 0x24)), 6);
    ov40_02236130(r5);
    ov40_02230964(1);
    // add r0, r4, r0
    ov40_0222E7B8((0x25 << 4), r5);
    ov40_02230964(r5, 0);
    ov40_0223584C(r5);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    // add r0, #8
    ov40_0222DA84(r4, 1);
    ov40_0222DA00(r4, (r4 + 4), 1, 0);
    // ldr r0, [r4, r0]
    ov41_0224B57C((0x8a << 2));
    ov40_0222BC54(r5);
    SetBgPriority(2, 0);
    // str r1, [r4, r0]
    ov40_02235994((0x8a << 2), 0);
    BgClearTilemapBufferAndCommit(*((u32*)(r5 + 0x24)), 3);
    BgClearTilemapBufferAndCommit(*((u32*)(r5 + 0x24)), 7);
    BgClearTilemapBufferAndCommit(*((u32*)(r5 + 0x24)), 2);
    BgClearTilemapBufferAndCommit(*((u32*)(r5 + 0x24)), 6);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r5 + 0x28)), 3, 0xc, ((*((u32*)(r4 + 8)) << 0x18) >> 0x18));
    ov40_0222BF80(3);
}




void ov40_02235434(void) {
    // ldr r4, [r5, r1]
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _02235452: ; jump table
    ov40_02236130(*((u32*)(r4 + 0xc)));
    BgClearTilemapBufferAndCommit(*((u32*)(r5 + 0x24)), 2);
    ov40_02230964(1);
    // add r0, r4, r0
    ov40_0222E7B8((0x25 << 4), r5);
    ov40_02230964(r5, 0);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    ov40_0222DA00(r4, (r4 + 4), 1, 1);
    // ldr r0, [r4, r0]
    ov41_0224B57C((0x8a << 2));
    ov40_0222BC54(r5);
    SetBgPriority(2, 0);
    // str r1, [r4, r0]
    ov40_02235994((0x8a << 2), 0);
    BgClearTilemapBufferAndCommit(*((u32*)(r5 + 0x24)), 2);
    BgClearTilemapBufferAndCommit(*((u32*)(r5 + 0x24)), 3);
    GfGfx_EngineATogglePlanes(4, 0);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    ov40_02230964((*((u32*)(r5 + 8)) + 1), 1);
    // ldr r0, [r4, r1]
    // add r2, r4, r0
    // add r0, #8
    // add r1, #0x1c
    // ldr r0, [r2, r0]
    // ldr r1, [r4, r1]
    ov39_022271C0((0x8d << 2), (0x8d << 2));
    // add r0, r4, r0
    ov40_0222E79C((0x25 << 4), r5);
    // add r0, r4, r0
    ov40_0222E7DC((0x25 << 4), 0);
    ov40_02230964(r5, 0);
    ov40_022307DC(r5, 0x50, 3);
    // ldr r0, [r4, r1]
    // add r2, r4, r0
    // add r0, #8
    // ldr r0, [r2, r0]
    // ldr r1, [r4, r1]
    // add r0, #0x80
    ov39_02227080((0x8d << 2), ((0x8d << 2) + 4));
    // add r0, r4, r1
    // add r1, #0x20
    // ldr r1, [r4, r1]
    ov41_0224B530((0x86 << 2));
    // str r0, [r4, r1]
    // ldr r0, [r4, r1]
    ov41_0224B5D0(0);
    ov40_02235940();
    ov40_022307DC(r5, 0x23, 3);
    GfGfx_EngineBTogglePlanes(8, 1);
    GfGfx_EngineATogglePlanes(8, 1);
    GfGfx_EngineATogglePlanes(4, 0);
    GfGfx_EngineATogglePlanes(1, 0);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    PaletteData_LoadPaletteSlotFromHardware(*((u32*)(r5 + 0x28)), 0, 0, (2 << 8));
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    ov40_0222DA00(r4, (r4 + 4), 0, 1);
    // add r0, r4, r0
    ov40_0222E7DC((0x25 << 4), 1);
    GfGfx_EngineATogglePlanes(4, 1);
    // ldr r1, [r4, r1]
    ov40_02235C7C(r5, (0x8d << 2));
    // ldr r0, [r4, r0]
    ov41_0224B5D0((0x8a << 2), 1);
    GfGfx_EngineATogglePlanes(4, 1);
    GfGfx_EngineATogglePlanes(1, 1);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    // eor r1, r0
    *((u32*)(r4 + 0xc)) = *((u32*)(r4 + 0xc));
    // add r1, #0x79
    ov40_02235868(r5, *((u32*)(r4 + 0xc)));
    ov40_0222BF80(r5, 8);
}




void ov40_02235644(void) {
    // ldr r4, [r5, r1]
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _02235662: ; jump table
    ov40_02236130(*((u32*)(r4 + 0xc)));
    BgClearTilemapBufferAndCommit(*((u32*)(r5 + 0x24)), 2);
    ov40_02230964(1);
    // add r0, r4, r0
    ov40_0222E7B8((0x25 << 4), r5);
    ov40_02230964(r5, 0);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    ov40_0222DA00(r4, (r4 + 4), 1, 1);
    // ldr r0, [r4, r0]
    ov41_0224B57C((0x8a << 2));
    ov40_0222BC54(r5);
    SetBgPriority(2, 0);
    // str r1, [r4, r0]
    ov40_02235994((0x8a << 2), 0);
    BgClearTilemapBufferAndCommit(*((u32*)(r5 + 0x24)), 2);
    BgClearTilemapBufferAndCommit(*((u32*)(r5 + 0x24)), 3);
    GfGfx_EngineATogglePlanes(4, 0);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    ov40_02230964((*((u32*)(r5 + 8)) + 1), 1);
    // ldr r0, [r4, r1]
    // add r2, r4, r0
    // add r0, #8
    // ldr r0, [r2, r0]
    // ldr r1, [r4, r1]
    // add r0, #0x80
    ov39_02227080((0x8d << 2), ((0x8d << 2) + 4));
    // add r0, r4, r1
    // add r1, #0x20
    // ldr r1, [r4, r1]
    ov41_0224B530((0x86 << 2));
    // str r0, [r4, r1]
    // ldr r0, [r4, r1]
    ov41_0224B5D0(0);
    ov40_02235940();
    ov40_022307DC(r5, 0x23, 3);
    GfGfx_EngineBTogglePlanes(8, 1);
    GfGfx_EngineATogglePlanes(8, 1);
    GfGfx_EngineATogglePlanes(4, 0);
    GfGfx_EngineATogglePlanes(1, 0);
    // ldr r0, [r4, r1]
    // add r2, r4, r0
    // add r0, #8
    // add r1, #0x1c
    // ldr r0, [r2, r0]
    // ldr r1, [r4, r1]
    ov39_022271C0((0x8d << 2), (0x8d << 2));
    // add r0, r4, r0
    ov40_0222E79C((0x25 << 4), r5);
    // add r0, r4, r0
    ov40_0222E7DC((0x25 << 4), 0);
    ov40_022307DC(r5, 0x50, 3);
    GfGfx_EngineATogglePlanes(4, 0);
    ov40_02230964(r5, 0);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    PaletteData_LoadPaletteSlotFromHardware(*((u32*)(r5 + 0x28)), 0, 0, (2 << 8));
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    ov40_0222DA00(r4, (r4 + 4), 0, 1);
    // ldr r1, [r4, r1]
    ov40_02235C7C(r5, (0x8d << 2));
    // ldr r0, [r4, r0]
    ov41_0224B5D0((0x8a << 2), 1);
    GfGfx_EngineATogglePlanes(4, 1);
    GfGfx_EngineATogglePlanes(1, 1);
    // add r0, r4, r0
    ov40_0222E7DC((0x25 << 4), 1);
    GfGfx_EngineATogglePlanes(4, 1);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    ov40_0222BF80(r5, 8);
}




void ov40_0223584C(void) {
    // ldr r4, [r0, r1]
    // add r0, #0xd0
    ClearWindowTilemapAndCopyToVram(r4, (0x86 << 4));
    // add r4, #0xd0
    RemoveWindow(r4);
}




void ov40_02235868(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // mov r0, #0x86
    // lsl r0, r0, #4
    // ldr r4, [r5, r0]
    // add r6, r1, #0
    // add r4, #0xd0
    // add r0, r4, #0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // ldr r0, [r5, #0x48]
    // add r1, r6, #0
    // bl NewString_ReadMsgData
    // add r5, r0, #0
    // add r0, r4, #0
    // add r1, r5, #0
    // bl ov40_022306C0
    // mov r1, #0
    // add r3, r0, #0
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _022358BC ; =0x000F0D00
    // add r2, r5, #0
    // str r0, [sp, #8]
    // add r0, r4, #0
    // str r1, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r5, #0
    // bl String_Delete
    // add r0, r4, #0
    // bl ScheduleWindowCopyToVram
    // add sp, #0x10
    // pop {r4, r5, r6, pc}
    // nop
    // _022358BC: .word 0x000F0D00
    // TODO: decompile
}




void ov40_022358C0(void) {
    // ldr r4, [r5, r0]
    // add r4, #0xd0
    InitWindow(r4);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    AddWindowParameterized(*((u32*)(r5 + 0x24)), r4, 6, 8);
    ov40_02235868(r5, 0x79);
}




void ov40_02235900(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r0, #0x86
    // lsl r0, r0, #4
    // ldr r1, [r4, r0]
    // mov r0, #0x8a
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // cmp r0, #0
    // beq _02235918
    // bl ov41_0224B5C8
    // bl GF_RunVramTransferTasks
    // ldr r0, [r4, #0x28]
    // bl PaletteData_PushTransparentBuffers
    // ldr r0, [r4, #0x24]
    // bl DoScheduledBgGpuUpdates
    // ldr r3, _02235938 ; =0x027E0000
    // ldr r1, _0223593C ; =0x00003FF8
    // mov r0, #1
    // ldr r2, [r3, r1]
    // orr r0, r2
    // str r0, [r3, r1]
    // pop {r4, pc}
    // nop
    // _02235938: .word 0x027E0000
    // _0223593C: .word 0x00003FF8
    // TODO: decompile
}




void ov40_02235940(void) {
    // push {r4, r5}
    // mov r0, #1
    // lsl r0, r0, #0x1a
    // ldr r2, [r0]
    // ldr r1, _02235988 ; =0xFFFF1FFF
    // add r4, r0, #0
    // and r2, r1
    // lsr r1, r0, #0xd
    // orr r1, r2
    // str r1, [r0]
    // add r4, #0x48
    // ldrh r3, [r4]
    // mov r2, #0x3f
    // mov r1, #0x1f
    // bic r3, r2
    // orr r1, r3
    // mov r3, #0x20
    // orr r1, r3
    // strh r1, [r4]
    // add r4, r0, #0
    // add r4, #0x4a
    // ldrh r5, [r4]
    // mov r1, #0x1e
    // bic r5, r2
    // orr r1, r5
    // orr r1, r3
    // strh r1, [r4]
    // add r1, r0, #0
    // ldr r2, _0223598C ; =0x000048B8
    // add r1, #0x40
    // strh r2, [r1]
    // ldr r1, _02235990 ; =0x00001090
    // add r0, #0x44
    // strh r1, [r0]
    // pop {r4, r5}
    // bx lr
    // _02235988: .word 0xFFFF1FFF
    // _0223598C: .word 0x000048B8
    // _02235990: .word 0x00001090
    // TODO: decompile
}




void ov40_02235994(void) {
    // mov r2, #1
    // lsl r2, r2, #0x1a
    // ldr r1, [r2]
    // ldr r0, _022359AC ; =0xFFFF1FFF
    // and r1, r0
    // str r1, [r2]
    // ldr r2, _022359B0 ; =0x04001000
    // ldr r1, [r2]
    // and r0, r1
    // str r0, [r2]
    // bx lr
    // nop
    // _022359AC: .word 0xFFFF1FFF
    // _022359B0: .word 0x04001000
    // TODO: decompile
}




void ov40_022359B4(void) {
    // ldr r4, [r0, r2]
    // ldr r0, [r4, r0]
    ManagedSprite_SetDrawFlag((0x6e << 2), 1, (0x86 << 4));
    // ldr r0, [r4, r0]
    TextOBJ_SetSpritesDrawFlag((0x6f << 2), 1);
    // ldr r0, [r4, r0]
    ManagedSprite_SetPositionXY((0x67 << 2), 0x20, 0xe8);
    // ldr r0, [r4, r0]
    ManagedSprite_SetDrawFlag((0x6e << 2), 0);
    // ldr r0, [r4, r0]
    TextOBJ_SetSpritesDrawFlag((0x6f << 2), 0);
    // ldr r0, [r4, r0]
    ManagedSprite_SetPositionXY((0x67 << 2), 0x50, 0xe8);
    // ldr r0, [r4, r0]
    // sub r2, #0x2c
    sub_020136B4((0x1a << 4), 0x24, 0x24);
    // ldr r0, [r4, r0]
    // sub r2, #0x2c
    sub_020136B4((0x6f << 2), 0x24, 0x24);
}




void ov40_02235A30(void) {
    // ldr r4, [r5, r1]
    ov40_0222D6EC(2);
    ov40_0222D800(r5, 2);
    // str r0, [r4, r1]
    ov40_0222D800(r5, 2);
    // str r0, [r4, r1]
    // sub r1, #0x20
    // add r0, r4, r1
    // add r1, #0x14
    ov40_0222D5AC(r5, 2);
    // add r0, r4, r0
    // add r1, #0x14
    ov40_0222D5AC((0x6d << 2), r5, 2);
    // add r0, r4, r0
    // add r1, #0x14
    ov40_0222D66C((0x66 << 2), r5, 3);
    // add r0, r4, r0
    // add r1, #0x14
    ov40_0222D66C((0x6d << 2), r5, 0x35);
    // ldr r0, [r4, r0]
    ManagedSprite_SetAnim((0x67 << 2), 0);
    // ldr r0, [r4, r0]
    ManagedSprite_SetAnim((0x6e << 2), 4);
    // ldr r0, [r4, r0]
    ManagedSprite_SetPositionXY((0x67 << 2), 0x20, 0xe8);
    // ldr r0, [r4, r0]
    ManagedSprite_SetPositionXY((0x6e << 2), 0x80, 0xe8);
    // ldr r0, [r4, r0]
    // sub r2, #0x2c
    sub_020136B4((0x1a << 4), 0x24, 0x24);
    // ldr r0, [r4, r0]
    // sub r2, #0x2c
    sub_020136B4((0x6f << 2), 0x24, 0x24);
    // ldr r0, [r4, r0]
    TextOBJ_SetSpritesDrawFlag((0x1a << 4), 1);
    // ldr r0, [r4, r0]
    TextOBJ_SetSpritesDrawFlag((0x6f << 2), 1);
    ov40_022359B4(r5, 0);
}




void ov40_02235B10(void) {
    // ldr r4, [r5, r0]
    // add r0, r4, r0
    ov40_0222D6D0((0x66 << 2));
    // add r0, r4, r0
    ov40_0222D6D0((0x6d << 2));
    // ldr r0, [r4, r0]
    Sprite_DeleteAndFreeResources((0x67 << 2));
    // ldr r0, [r4, r0]
    Sprite_DeleteAndFreeResources((0x6e << 2));
    ov40_0222D7DC(r5);
}




void ov40_02235B4C(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x24
    // add r5, r0, #0
    // mov r0, #0x86
    // lsl r0, r0, #4
    // ldr r6, [r5, r0]
    // add r0, r6, #0
    // add r0, #0x10
    // bl WindowIsInUse
    // cmp r0, #1
    // bne _02235B66
    // b _02235C72
    // add r0, r6, #0
    // str r0, [sp, #0x20]
    // add r0, #0x10
    // str r0, [sp, #0x20]
    // bl InitWindow
    // mov r0, #0x13
    // str r0, [sp]
    // mov r3, #0x10
    // str r3, [sp, #4]
    // mov r0, #4
    // str r0, [sp, #8]
    // mov r0, #0xe
    // str r0, [sp, #0xc]
    // mov r0, #0x4b
    // lsl r0, r0, #2
    // str r0, [sp, #0x10]
    // ldr r0, [r5, #0x24]
    // ldr r1, [sp, #0x20]
    // mov r2, #2
    // bl AddWindowParameterized
    // ldr r0, [sp, #0x20]
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // mov r0, #0x6d
    // bl ov40_0222DAB0
    // str r0, [sp, #0x18]
    // mov r0, #0xff
    // mov r1, #0x6d
    // bl String_New
    // add r7, r0, #0
    // ldr r0, [r5, #0x48]
    // mov r1, #0x38
    // bl NewString_ReadMsgData
    // str r0, [sp, #0x1c]
    // mov r0, #0xff
    // mov r1, #0x6d
    // bl String_New
    // add r4, r0, #0
    // mov r0, #0x8b
    // lsl r0, r0, #2
    // ldr r0, [r6, r0]
    // add r1, r4, #0
    // bl sub_0202BE60
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov40_02230DCC
    // mov r0, #0x8b
    // lsl r0, r0, #2
    // ldr r0, [r6, r0]
    // bl sub_0202BE98
    // add r5, r0, #0
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // mov r1, #0
    // ldr r0, [sp, #0x18]
    // add r2, r4, #0
    // add r3, r1, #0
    // bl BufferString
    // ldr r0, [sp, #0x18]
    // mov r1, #1
    // add r2, r5, #0
    // bl BufferECWord
    // ldr r0, [sp, #0x18]
    // ldr r2, [sp, #0x1c]
    // add r1, r7, #0
    // bl StringExpandPlaceholders
    // add r0, r7, #0
    // bl String_CountLines
    // mov r5, #0
    // str r0, [sp, #0x14]
    // cmp r0, #0
    // bls _02235C54
    // add r6, r5, #0
    // add r0, r4, #0
    // add r1, r7, #0
    // add r2, r5, #0
    // bl String_GetLineN
    // mov r0, #0
    // add r1, r4, #0
    // add r2, r0, #0
    // bl FontID_String_GetWidth
    // mov r1, #0x80
    // sub r0, r1, r0
    // lsr r3, r0, #1
    // str r6, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _02235C78 ; =0x000F0D00
    // mov r1, #0
    // str r0, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x20]
    // add r2, r4, #0
    // bl AddTextPrinterParameterizedWithColor
    // ldr r0, [sp, #0x14]
    // add r5, r5, #1
    // add r6, #0x10
    // cmp r5, r0
    // blo _02235C18
    // ldr r0, [sp, #0x20]
    // bl ScheduleWindowCopyToVram
    // add r0, r4, #0
    // bl String_Delete
    // ldr r0, [sp, #0x1c]
    // bl String_Delete
    // add r0, r7, #0
    // bl String_Delete
    // ldr r0, [sp, #0x18]
    // bl MessageFormat_Delete
    // add sp, #0x24
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _02235C78: .word 0x000F0D00
    // TODO: decompile
}




void ov40_02235C7C(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x24
    // add r5, r0, #0
    // mov r0, #0x86
    // lsl r0, r0, #4
    // ldr r6, [r5, r0]
    // add r0, r6, #0
    // add r0, #0x10
    // bl WindowIsInUse
    // cmp r0, #1
    // bne _02235C96
    // b _02235DA2
    // add r0, r6, #0
    // str r0, [sp, #0x20]
    // add r0, #0x10
    // str r0, [sp, #0x20]
    // bl InitWindow
    // mov r0, #0x13
    // str r0, [sp]
    // mov r3, #0x10
    // str r3, [sp, #4]
    // mov r0, #4
    // str r0, [sp, #8]
    // mov r0, #0xe
    // str r0, [sp, #0xc]
    // mov r0, #0x4b
    // lsl r0, r0, #2
    // str r0, [sp, #0x10]
    // ldr r0, [r5, #0x24]
    // ldr r1, [sp, #0x20]
    // mov r2, #2
    // bl AddWindowParameterized
    // ldr r0, [sp, #0x20]
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // mov r0, #0x6d
    // bl ov40_0222DAB0
    // str r0, [sp, #0x18]
    // mov r0, #0xff
    // mov r1, #0x6d
    // bl String_New
    // add r7, r0, #0
    // ldr r0, [r5, #0x48]
    // mov r1, #0x38
    // bl NewString_ReadMsgData
    // str r0, [sp, #0x1c]
    // mov r0, #0xff
    // mov r1, #0x6d
    // bl String_New
    // add r4, r0, #0
    // mov r0, #0x8e
    // lsl r0, r0, #2
    // ldr r0, [r6, r0]
    // add r1, r4, #0
    // bl sub_0202BE60
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov40_02230DCC
    // mov r0, #0x8e
    // lsl r0, r0, #2
    // ldr r0, [r6, r0]
    // bl sub_0202BE98
    // add r5, r0, #0
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // mov r1, #0
    // ldr r0, [sp, #0x18]
    // add r2, r4, #0
    // add r3, r1, #0
    // bl BufferString
    // ldr r0, [sp, #0x18]
    // mov r1, #1
    // add r2, r5, #0
    // bl BufferECWord
    // ldr r0, [sp, #0x18]
    // ldr r2, [sp, #0x1c]
    // add r1, r7, #0
    // bl StringExpandPlaceholders
    // add r0, r7, #0
    // bl String_CountLines
    // mov r5, #0
    // str r0, [sp, #0x14]
    // cmp r0, #0
    // bls _02235D84
    // add r6, r5, #0
    // add r0, r4, #0
    // add r1, r7, #0
    // add r2, r5, #0
    // bl String_GetLineN
    // mov r0, #0
    // add r1, r4, #0
    // add r2, r0, #0
    // bl FontID_String_GetWidth
    // mov r1, #0x80
    // sub r0, r1, r0
    // lsr r3, r0, #1
    // str r6, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _02235DA8 ; =0x000F0D00
    // mov r1, #0
    // str r0, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x20]
    // add r2, r4, #0
    // bl AddTextPrinterParameterizedWithColor
    // ldr r0, [sp, #0x14]
    // add r5, r5, #1
    // add r6, #0x10
    // cmp r5, r0
    // blo _02235D48
    // ldr r0, [sp, #0x20]
    // bl ScheduleWindowCopyToVram
    // add r0, r4, #0
    // bl String_Delete
    // ldr r0, [sp, #0x1c]
    // bl String_Delete
    // add r0, r7, #0
    // bl String_Delete
    // ldr r0, [sp, #0x18]
    // bl MessageFormat_Delete
    // add sp, #0x24
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _02235DA8: .word 0x000F0D00
    // TODO: decompile
}




void ov40_02235DAC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // mov r0, #0
    // str r0, [sp, #8]
    // add r0, r1, #1
    // ldr r2, _02235E2C ; =ov40_02245CD4
    // lsl r0, r0, #1
    // ldrh r4, [r2, r0]
    // lsl r0, r1, #1
    // ldrh r6, [r2, r0]
    // ldr r1, [sp, #8]
    // mov r0, #0x6d
    // add r2, sp, #0xc
    // bl ov40_0222DD68
    // str r0, [sp, #4]
    // mov r0, #0x83
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // bl Save_Pokedex_Get
    // str r0, [sp]
    // add r7, r6, #0
    // cmp r6, r4
    // bge _02235DFE
    // ldr r0, [sp, #4]
    // lsl r1, r6, #1
    // add r5, r0, r1
    // ldrh r1, [r5]
    // ldr r0, [sp]
    // bl Pokedex_CheckMonSeenFlag
    // cmp r0, #0
    // bne _02235DF6
    // ldr r0, _02235E30 ; =0x0000FFFF
    // strh r0, [r5]
    // add r7, r7, #1
    // add r5, r5, #2
    // cmp r7, r4
    // blt _02235DE6
    // cmp r6, r4
    // bge _02235E1E
    // ldr r0, [sp, #4]
    // lsl r1, r6, #1
    // add r2, r0, r1
    // ldr r0, _02235E30 ; =0x0000FFFF
    // ldrh r1, [r2]
    // cmp r1, r0
    // beq _02235E16
    // mov r0, #1
    // str r0, [sp, #8]
    // b _02235E1E
    // add r6, r6, #1
    // add r2, r2, #2
    // cmp r6, r4
    // blt _02235E0A
    // ldr r0, [sp, #4]
    // bl Heap_Free
    // ldr r0, [sp, #8]
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02235E2C: .word ov40_02245CD4
    // _02235E30: .word 0x0000FFFF
    // TODO: decompile
}




void ov40_02235E34(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // add r5, r0, #0
    // mov r0, #0x86
    // lsl r0, r0, #4
    // ldr r4, [r5, r0]
    // add r0, r1, #1
    // ldr r2, _02235F98 ; =ov40_02245CD4
    // lsl r0, r0, #1
    // ldrh r6, [r2, r0]
    // lsl r0, r1, #1
    // ldrh r0, [r2, r0]
    // mov r2, #0x76
    // lsl r2, r2, #2
    // str r0, [sp]
    // mov r0, #0x6d
    // mov r1, #0
    // add r2, r4, r2
    // bl ov40_0222DD68
    // mov r2, #0x77
    // lsl r2, r2, #2
    // str r0, [r4, r2]
    // sub r2, r2, #4
    // mov r0, #0x6d
    // mov r1, #0
    // add r2, r4, r2
    // bl ov40_0222DD68
    // str r0, [sp, #8]
    // mov r0, #0x83
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // bl Save_Pokedex_Get
    // str r0, [sp, #4]
    // mov r0, #0x75
    // ldr r7, [sp]
    // mov r1, #0
    // lsl r0, r0, #2
    // str r1, [r4, r0]
    // add r0, r7, #0
    // cmp r0, r6
    // bge _02235EBA
    // lsl r1, r0, #1
    // ldr r0, [sp, #8]
    // add r5, r0, r1
    // ldrh r1, [r5]
    // ldr r0, [sp, #4]
    // bl Pokedex_CheckMonSeenFlag
    // cmp r0, #0
    // bne _02235EA4
    // ldr r0, _02235F9C ; =0x0000FFFF
    // strh r0, [r5]
    // b _02235EB2
    // mov r0, #0x75
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // add r1, r0, #1
    // mov r0, #0x75
    // lsl r0, r0, #2
    // str r1, [r4, r0]
    // add r7, r7, #1
    // add r5, r5, #2
    // cmp r7, r6
    // blt _02235E92
    // ldr r1, [sp]
    // mov r0, #0
    // cmp r1, r6
    // bge _02235EEA
    // lsl r2, r1, #1
    // ldr r1, [sp, #8]
    // ldr r7, _02235F9C ; =0x0000FFFF
    // add r2, r1, r2
    // add r3, r0, #0
    // ldrh r1, [r2]
    // cmp r1, r7
    // beq _02235EDE
    // mov r5, #0x77
    // lsl r5, r5, #2
    // ldr r5, [r4, r5]
    // add r0, r0, #1
    // strh r1, [r5, r3]
    // add r3, r3, #2
    // ldr r1, [sp]
    // add r2, r2, #2
    // add r1, r1, #1
    // str r1, [sp]
    // cmp r1, r6
    // blt _02235ECC
    // mov r1, #0x76
    // lsl r1, r1, #2
    // ldr r1, [r4, r1]
    // cmp r0, r1
    // bge _02235F12
    // mov r7, #0x77
    // ldr r1, [sp, #8]
    // lsl r6, r0, #1
    // lsl r7, r7, #2
    // add r5, r1, r6
    // sub r1, r7, #4
    // ldrh r3, [r5]
    // ldr r2, [r4, r7]
    // add r0, r0, #1
    // strh r3, [r2, r6]
    // ldr r2, [r4, r1]
    // add r5, r5, #2
    // add r6, r6, #2
    // cmp r0, r2
    // blt _02235F00
    // ldr r0, [sp, #8]
    // bl Heap_Free
    // mov r1, #0x75
    // lsl r1, r1, #2
    // ldr r1, [r4, r1]
    // mov r0, #0x6d
    // lsl r1, r1, #4
    // bl Heap_Alloc
    // mov r2, #0x7a
    // lsl r2, r2, #2
    // str r0, [r4, r2]
    // ldr r0, [r4, r2]
    // sub r2, #0x14
    // ldr r2, [r4, r2]
    // mov r1, #0
    // lsl r2, r2, #4
    // bl MI_CpuFill8
    // mov r0, #0x75
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r5, #0
    // cmp r0, #0
    // ble _02235F7C
    // mov r7, #0x7a
    // lsl r7, r7, #2
    // add r0, r7, #0
    // add r2, r5, #0
    // add r3, r5, #0
    // sub r0, #0x14
    // mov r1, #0x77
    // lsl r1, r1, #2
    // ldr r1, [r4, r1]
    // mov r6, #0x7a
    // lsl r6, r6, #2
    // ldrh r1, [r1, r2]
    // ldr r6, [r4, r6]
    // add r5, r5, #1
    // str r1, [r6, r3]
    // mov r1, #0x77
    // lsl r1, r1, #2
    // ldr r1, [r4, r1]
    // ldr r6, [r4, r7]
    // ldrh r1, [r1, r2]
    // add r6, r6, r3
    // add r2, r2, #2
    // str r1, [r6, #4]
    // ldr r1, [r4, r0]
    // add r3, #0x10
    // cmp r5, r1
    // blt _02235F52
    // mov r0, #0
    // mov r1, #0x1b
    // mov r2, #0xed
    // mov r3, #0x6d
    // bl NewMsgDataFromNarc
    // mov r1, #0x1e
    // lsl r1, r1, #4
    // str r0, [r4, r1]
    // mov r2, #1
    // add r0, r1, #4
    // str r2, [r4, r0]
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // _02235F98: .word ov40_02245CD4
    // _02235F9C: .word 0x0000FFFF
    // TODO: decompile
}




void ov40_02235FA0(void) {
    // ldr r4, [r0, r1]
    // ldr r0, [r4, r0]
    DestroyMsgData((0x1e << 4), (0x86 << 4));
    // ldr r0, [r4, r0]
    Heap_Free((0x7a << 2));
    // ldr r0, [r4, r0]
    Heap_Free((0x77 << 2));
    // str r1, [r4, r0]
}




void ov40_02235FD0(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r2, #0
    // cmp r1, #0
    // bne _02235FF6
    // add r0, r4, #0
    // add r1, r5, #0
    // bl ov40_02235DAC
    // cmp r0, #0
    // bne _02235FEE
    // ldr r0, _02235FF8 ; =0x0000057C
    // bl PlaySE
    // pop {r3, r4, r5, pc}
    // add r0, r4, #0
    // add r1, r5, #0
    // bl ov40_02235E34
    // pop {r3, r4, r5, pc}
    // _02235FF8: .word 0x0000057C
    // TODO: decompile
}




void ov40_02235FFC(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x34
    // str r0, [sp, #0x14]
    // mov r0, #1
    // str r0, [sp, #0x28]
    // mov r1, #0x86
    // ldr r0, [sp, #0x14]
    // lsl r1, r1, #4
    // ldr r4, [r0, r1]
    // ldr r5, _02236100 ; =ov40_02245708
    // mov r7, #0
    // add r4, #0xd0
    // ldrb r0, [r5, #2]
    // lsl r0, r0, #0x15
    // lsr r0, r0, #0x18
    // str r0, [sp, #0x24]
    // ldrb r0, [r5]
    // lsl r0, r0, #0x15
    // lsr r0, r0, #0x18
    // str r0, [sp, #0x20]
    // ldrb r0, [r5, #3]
    // lsr r1, r0, #3
    // ldr r0, [sp, #0x24]
    // sub r0, r1, r0
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #0x1c]
    // ldrb r0, [r5, #1]
    // lsr r1, r0, #3
    // ldr r0, [sp, #0x20]
    // sub r0, r1, r0
    // lsl r0, r0, #0x18
    // lsr r6, r0, #0x18
    // add r0, r4, #0
    // bl InitWindow
    // ldr r0, [sp, #0x20]
    // add r1, r4, #0
    // str r0, [sp]
    // ldr r0, [sp, #0x1c]
    // mov r2, #6
    // str r0, [sp, #4]
    // str r6, [sp, #8]
    // mov r0, #0xe
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x28]
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x14]
    // ldr r3, [sp, #0x24]
    // ldr r0, [r0, #0x24]
    // bl AddWindowParameterized
    // add r0, r4, #0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // ldr r0, [sp, #0x14]
    // add r1, r7, #0
    // ldr r0, [r0, #0x48]
    // add r1, #0x44
    // bl NewString_ReadMsgData
    // str r0, [sp, #0x2c]
    // ldr r1, [sp, #0x2c]
    // add r0, r4, #0
    // bl ov40_022306C0
    // lsl r1, r6, #3
    // sub r1, #0x10
    // str r0, [sp, #0x30]
    // lsr r0, r1, #0x1f
    // add r0, r1, r0
    // asr r0, r0, #1
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x14]
    // add r1, r7, #0
    // bl ov40_02235DAC
    // cmp r0, #1
    // bne _022360BE
    // ldr r0, [sp, #0x18]
    // ldr r2, [sp, #0x2c]
    // str r0, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _02236104 ; =0x000F0D00
    // ldr r3, [sp, #0x30]
    // str r0, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // add r0, r4, #0
    // mov r1, #0
    // bl AddTextPrinterParameterizedWithColor
    // b _022360DA
    // ldr r0, [sp, #0x18]
    // ldr r2, [sp, #0x2c]
    // str r0, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _02236108 ; =0x000C0B00
    // ldr r3, [sp, #0x30]
    // str r0, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // add r0, r4, #0
    // mov r1, #0
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r4, #0
    // bl ScheduleWindowCopyToVram
    // ldr r0, [sp, #0x2c]
    // bl String_Delete
    // ldr r0, [sp, #0x1c]
    // add r7, r7, #1
    // add r1, r0, #0
    // ldr r0, [sp, #0x28]
    // mul r1, r6
    // add r0, r0, r1
    // str r0, [sp, #0x28]
    // add r4, #0x10
    // add r5, r5, #4
    // cmp r7, #9
    // blo _02236014
    // add sp, #0x34
    // pop {r4, r5, r6, r7, pc}
    // _02236100: .word ov40_02245708
    // _02236104: .word 0x000F0D00
    // _02236108: .word 0x000C0B00
    // TODO: decompile
}




void ov40_0223610C(void) {
    // ldr r5, [r0, r1]
    // add r5, #0xd0
    ClearWindowTilemapAndCopyToVram(r5, (0x86 << 4));
    RemoveWindow(r5);
    // add r5, #0x10
}




void ov40_02236130(void) {
    // ldr r4, [r0, r1]
    // add r0, #0x10
    WindowIsInUse(r4, (0x86 << 4));
    // add r0, #0x10
    ClearWindowTilemapAndCopyToVram(r4);
    // add r4, #0x10
    RemoveWindow(r4);
}




void ov40_02236158(void) {
    // bx lr
    // TODO: decompile
}




void ov40_0223615C(void) {
    // ldr r4, [r0, r2]
    ov40_0223D540(*((u32*)r1), (0x86 << 4));
    // add r1, r4, r1
    ov39_02227E8C((0x8f << 2), 5);
    // str r0, [r4, r1]
}




void ov40_02236184(void) {
    // push {r3, r4, r5, lr}
    // add r5, r1, #0
    // mov r1, #0x86
    // lsl r1, r1, #4
    // ldr r4, [r0, r1]
    // mov r0, #0x6d
    // bl sub_020314A4
    // ldr r1, _022361AC ; =0x00002ED8
    // str r0, [r4, r1]
    // lsl r0, r5, #2
    // add r2, r4, r0
    // mov r0, #0xe3
    // lsl r0, r0, #2
    // ldr r0, [r2, r0]
    // ldr r1, [r4, r1]
    // bl ov39_022271C0
    // pop {r3, r4, r5, pc}
    // nop
    // _022361AC: .word 0x00002ED8
    // TODO: decompile
}




void ov40_022361B0(void) {
    // mov r1, #0x86
    // lsl r1, r1, #4
    // ldr r1, [r0, r1]
    // ldr r0, _022361C0 ; =0x00002ED8
    // ldr r3, _022361C4 ; =sub_020314BC
    // ldr r0, [r1, r0]
    // bx r3
    // nop
    // _022361C0: .word 0x00002ED8
    // _022361C4: .word sub_020314BC
    // TODO: decompile
}




void ov40_022361C8(void) {
    // mov r2, #0
    // ldrh r1, [r0, #0x28]
    // cmp r1, #0
    // beq _022361D4
    // mov r0, #1
    // bx lr
    // add r2, r2, #1
    // add r0, r0, #2
    // cmp r2, #0x1e
    // blt _022361CA
    // mov r0, #0
    // bx lr
    // TODO: decompile
}




void ov40_022361E0(void) {
    // ldr r4, [r0, r1]
    // add r3, r0, r1
    // str r2, [r0, r1]
    // str r3, [r0, r1]
}




void ov40_02236230(void) {
    // push {r3, r4, r5, lr}
    // add r5, r2, #0
    // mov r2, #0x86
    // lsl r2, r2, #4
    // ldr r4, [r5, r2]
    // cmp r0, #3
    // bhi _022362DE
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0223624A: ; jump table
    // cmp r1, #2
    // bne _022362DE
    // add r0, r5, #0
    // bl ov40_02230944
    // mov r0, #0x1a
    // lsl r0, r0, #4
    // ldr r1, [r4, r0]
    // cmp r1, #0
    // ble _0223626A
    // sub r1, r1, #1
    // b _0223626C
    // mov r1, #0x11
    // str r1, [r4, r0]
    // add r0, r5, #0
    // mov r1, #4
    // bl ov40_0222BF80
    // pop {r3, r4, r5, pc}
    // cmp r1, #2
    // bne _022362DE
    // add r0, r5, #0
    // bl ov40_02230944
    // mov r0, #0x1a
    // lsl r0, r0, #4
    // ldr r1, [r4, r0]
    // add r1, r1, #1
    // str r1, [r4, r0]
    // ldr r0, [r4, r0]
    // mov r1, #0x12
    // bl _s32_div_f
    // mov r0, #0x1a
    // lsl r0, r0, #4
    // str r1, [r4, r0]
    // add r0, r5, #0
    // mov r1, #4
    // bl ov40_0222BF80
    // pop {r3, r4, r5, pc}
    // cmp r1, #0
    // bne _022362DE
    // add r0, r5, #0
    // bl ov40_02230944
    // add r0, r5, #0
    // mov r1, #9
    // bl ov40_0222BF80
    // pop {r3, r4, r5, pc}
    // cmp r1, #0
    // bne _022362DE
    // add r0, r5, #0
    // bl ov40_02230944
    // add r0, r4, #4
    // bl ov40_022361C8
    // cmp r0, #0
    // beq _022362D6
    // add r0, r5, #0
    // mov r1, #5
    // bl ov40_0222BF80
    // pop {r3, r4, r5, pc}
    // ldr r1, _022362E0 ; =0x0000010F
    // add r0, r5, #0
    // bl ov40_02237030
    // pop {r3, r4, r5, pc}
    // _022362E0: .word 0x0000010F
    // TODO: decompile
}




void ov40_022362E4(void) {
    // ldr r6, [r4, r0]
    ov40_02230944(r2);
    // str r5, [r6, r0]
    ov40_0222BF80(r4, 8);
    ov40_02230944(r4);
    ov40_0222BF80(r4, 7);
}




void ov40_02236320(void) {
    // ldr r6, [r4, r0]
    ov40_02230944(r2);
    // str r5, [r6, r0]
    ov40_0222BF80(r4, 4);
    ov40_02230944(r4);
    ov40_0222BF80(r4, 0xc);
}




void ov40_0223635C(void) {
    // push {r3, r4, r5, lr}
    // add r5, r2, #0
    // mov r2, #0x86
    // lsl r2, r2, #4
    // ldr r4, [r5, r2]
    // cmp r1, #0
    // bne _022363B6
    // cmp r0, #0
    // beq _02236376
    // cmp r0, #1
    // beq _02236398
    // cmp r0, #2
    // beq _022363A8
    // add r0, r5, #0
    // bl ov40_02230944
    // ldr r0, _022363B8 ; =0x00002F64
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // bne _0223638E
    // add r0, r5, #0
    // mov r1, #7
    // bl ov40_0222BF80
    // pop {r3, r4, r5, pc}
    // add r0, r5, #0
    // mov r1, #8
    // bl ov40_0222BF80
    // pop {r3, r4, r5, pc}
    // add r0, r5, #0
    // bl ov40_02230944
    // add r0, r5, #0
    // mov r1, #9
    // bl ov40_0222BF80
    // pop {r3, r4, r5, pc}
    // add r0, r5, #0
    // bl ov40_02230944
    // add r0, r5, #0
    // mov r1, #6
    // bl ov40_0222BF80
    // pop {r3, r4, r5, pc}
    // _022363B8: .word 0x00002F64
    // TODO: decompile
}




void ov40_022363BC(void) {
    // push {r3, r4, r5, lr}
    // add r5, r2, #0
    // mov r2, #0x86
    // lsl r2, r2, #4
    // ldr r4, [r5, r2]
    // cmp r1, #0
    // bne _022364C4
    // cmp r0, #0
    // beq _022363D4
    // cmp r0, #1
    // beq _0223649C
    // pop {r3, r4, r5, pc}
    // add r0, r5, #0
    // bl ov40_02230944
    // mov r0, #0x1b
    // lsl r0, r0, #4
    // ldr r1, [r4, r0]
    // add r1, r1, #1
    // str r1, [r4, r0]
    // ldr r0, [r4, r0]
    // mov r1, #0x1e
    // bl _s32_div_f
    // mov r0, #0x1b
    // lsl r0, r0, #4
    // str r1, [r4, r0]
    // add r0, r4, #0
    // bl ov40_022361E0
    // mov r0, #0x1b
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #6
    // bl _s32_div_f
    // ldr r0, _022364C8 ; =0x00002F68
    // str r1, [r4, r0]
    // mov r0, #0x1b
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #6
    // bl _s32_div_f
    // ldr r2, _022364CC ; =0x00002F6C
    // str r0, [r4, r2]
    // sub r1, r2, #4
    // ldr r3, [r4, r1]
    // mov r1, #0x18
    // mul r1, r3
    // ldr r3, [r4, r2]
    // mov r2, #0x16
    // mov r0, #0x6f
    // mul r2, r3
    // lsl r0, r0, #4
    // add r1, #0x6e
    // add r2, #0x34
    // lsl r1, r1, #0x10
    // lsl r2, r2, #0x10
    // ldr r0, [r5, r0]
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    // bl sub_020878B8
    // add r0, r5, #0
    // mov r1, #1
    // bl ov40_02230964
    // add r0, r5, #0
    // bl ov40_02237564
    // add r0, r5, #0
    // bl ov40_02237474
    // add r0, r5, #0
    // mov r1, #0
    // bl ov40_02230964
    // mov r1, #0x1b
    // lsl r1, r1, #4
    // ldr r1, [r4, r1]
    // add r0, r5, #0
    // bl ov40_022371E4
    // mov r0, #0x1b
    // lsl r0, r0, #4
    // ldr r2, [r4, r0]
    // lsl r1, r2, #1
    // add r1, r4, r1
    // ldrh r1, [r1, #0x2c]
    // cmp r1, #0
    // beq _022364C4
    // sub r0, #0x58
    // mov r1, #1
    // ldr r0, [r4, r0]
    // lsl r1, r2
    // bl ov40_022371D4
    // cmp r0, #1
    // beq _022364C4
    // mov r1, #0x1b
    // lsl r1, r1, #4
    // ldr r2, [r4, r1]
    // sub r1, #0x54
    // lsl r0, r2, #1
    // add r0, r4, r0
    // add r2, r4, r2
    // ldrh r0, [r0, #0x2c]
    // ldrb r1, [r2, r1]
    // bl PlayCry
    // pop {r3, r4, r5, pc}
    // add r0, r5, #0
    // bl ov40_02230944
    // mov r0, #0x6f
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // mov r1, #0
    // bl sub_020879E0
    // mov r0, #0x6f
    // lsl r0, r0, #4
    // mov r1, #0
    // ldr r0, [r5, r0]
    // add r2, r1, #0
    // bl sub_02087A08
    // add r0, r5, #0
    // mov r1, #0xb
    // bl ov40_0222BF80
    // pop {r3, r4, r5, pc}
    // nop
    // _022364C8: .word 0x00002F68
    // _022364CC: .word 0x00002F6C
    // TODO: decompile
}




void ov40_022364D0(void) {
    // ldr r4, [r5, r1]
    ov40_0222D73C(2);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // sub r0, #0x2c
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // add r1, r4, r1
    ov40_02230970(r5, (0xd2 << 2), 2, 3);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // sub r0, #0x2c
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // add r1, r4, r1
    ov40_02230970(r5, (0xd9 << 2), 2, 0x35);
}




void ov40_02236534(void) {
    // ldr r4, [r5, r0]
    // add r0, r4, r0
    ov40_022309CC((0xd2 << 2));
    // add r0, r4, r0
    ov40_022309CC((0xd9 << 2));
    ov40_0222D7DC(r5);
}




void ov40_0223655C(void) {
    // str r2, [r0, r1]
}




void ov40_02236578(void) {
    memset(r3, 0, (0x67 << 2));
    // str r0, [sp]
    ov39_02227088(r5, r4, r6, r7);
}




void ov40_022365A0(void) {
    // push {r3, r4, r5, lr}
    // ldr r1, _022366A4 ; =0x00002F70
    // add r5, r0, #0
    // mov r0, #0x6d
    // bl Heap_Alloc
    // ldr r2, _022366A4 ; =0x00002F70
    // mov r1, #0
    // add r4, r0, #0
    // bl memset
    // mov r0, #0x86
    // lsl r0, r0, #4
    // str r4, [r5, r0]
    // ldr r0, [r5, #0x24]
    // mov r1, #2
    // bl BgClearTilemapBufferAndCommit
    // ldr r0, [r5, #0x24]
    // mov r1, #3
    // bl BgClearTilemapBufferAndCommit
    // ldr r0, [r5, #0x24]
    // mov r1, #6
    // bl BgClearTilemapBufferAndCommit
    // ldr r0, [r5, #0x24]
    // mov r1, #7
    // bl BgClearTilemapBufferAndCommit
    // mov r0, #0x83
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // bl SaveArray_PCStorage_Get
    // str r0, [r4]
    // mov r0, #0x83
    // mov r2, #0x1a
    // lsl r0, r0, #4
    // lsl r2, r2, #4
    // ldr r0, [r5, r0]
    // ldr r1, [r4]
    // ldr r2, [r4, r2]
    // add r3, r4, #4
    // bl ov40_02236578
    // add r0, r4, #0
    // bl ov40_0223655C
    // mov r1, #0x69
    // lsl r1, r1, #2
    // add r0, r4, r1
    // add r1, r1, #4
    // add r1, r4, r1
    // mov r2, #0
    // bl ov40_0222D9E8
    // mov r0, #0x6d
    // str r0, [sp]
    // ldr r0, _022366A8 ; =ov40_022452CC
    // ldr r2, _022366AC ; =ov40_02236230
    // mov r1, #4
    // add r3, r5, #0
    // bl TouchHitboxController_Create
    // mov r1, #0x33
    // lsl r1, r1, #4
    // str r0, [r4, r1]
    // mov r0, #0x6d
    // str r0, [sp]
    // ldr r0, _022366B0 ; =ov40_022452F4
    // ldr r2, _022366B4 ; =ov40_022362E4
    // mov r1, #7
    // add r3, r5, #0
    // bl TouchHitboxController_Create
    // mov r1, #0xcd
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // mov r0, #0x6d
    // str r0, [sp]
    // ldr r0, _022366B0 ; =ov40_022452F4
    // ldr r2, _022366B8 ; =ov40_02236320
    // mov r1, #7
    // add r3, r5, #0
    // bl TouchHitboxController_Create
    // mov r1, #0xce
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // mov r0, #0x6d
    // str r0, [sp]
    // ldr r0, _022366BC ; =ov40_02245284
    // ldr r2, _022366C0 ; =ov40_0223635C
    // mov r1, #3
    // add r3, r5, #0
    // bl TouchHitboxController_Create
    // mov r1, #0xcf
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // mov r0, #0x6d
    // str r0, [sp]
    // ldr r0, _022366C4 ; =ov40_0224526C
    // ldr r2, _022366C8 ; =ov40_022363BC
    // mov r1, #2
    // add r3, r5, #0
    // bl TouchHitboxController_Create
    // mov r1, #0xd
    // lsl r1, r1, #6
    // str r0, [r4, r1]
    // mov r0, #0x6d
    // bl sub_020314A4
    // mov r1, #0xe1
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // ldr r0, [r4, r1]
    // mov r1, #0x83
    // lsl r1, r1, #4
    // ldr r1, [r5, r1]
    // bl sub_020314C4
    // add r0, r5, #0
    // mov r1, #1
    // bl ov40_0222BF80
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // _022366A4: .word 0x00002F70
    // _022366A8: .word ov40_022452CC
    // _022366AC: .word ov40_02236230
    // _022366B0: .word ov40_022452F4
    // _022366B4: .word ov40_022362E4
    // _022366B8: .word ov40_02236320
    // _022366BC: .word ov40_02245284
    // _022366C0: .word ov40_0223635C
    // _022366C4: .word ov40_0224526C
    // _022366C8: .word ov40_022363BC
    // TODO: decompile
}




void ov40_022366CC(void) {
    // ldr r4, [r5, r1]
    // add r0, r4, r0
    ov40_0222DA84((0x6b << 2), 1);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    // str r0, [sp]
    // ldr r3, [r4, r3]
    PaletteData_BlendPalettes(*((u32*)(r5 + 0x28)), 2, 0xc, (((0x6b << 2) << 0x18) >> 0x18));
    // str r0, [sp]
    // ldr r3, [r4, r3]
    PaletteData_BlendPalettes(*((u32*)(r5 + 0x28)), 3, 0xc, (((0x6b << 2) << 0x18) >> 0x18));
    // str r0, [sp]
    // ldr r3, [r4, r3]
    PaletteData_BlendPalettes(*((u32*)(r5 + 0x28)), 1, 2, (((0x6b << 2) << 0x18) >> 0x18));
    ov40_02230964(1);
    ov40_0222D874(r5);
    ov40_02230964(r5, 0);
    ov40_0222FB90(r5, 0);
    // ldr r0, [r5, r0]
    sub_020879E0((0x6f << 4), 0);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    ov40_0222FBB4((*((u32*)(r5 + 8)) + 1));
    ov40_02230964(r5, 1);
    ov40_022364D0(r5);
    ov40_02230964(r5, 0);
    ov40_02230738();
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    ov40_0222BF80((*((u32*)(r5 + 8)) + 1), 2);
}




void ov40_022367B8(void) {
    // push {r4, r5, lr}
    // sub sp, #0xc
    // mov r1, #0x86
    // add r4, r0, #0
    // lsl r1, r1, #4
    // ldr r5, [r4, r1]
    // ldr r1, [r4, #8]
    // cmp r1, #3
    // bls _022367CC
    // b _022368DC
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _022367D8: ; jump table
    // mov r2, #8
    // mov r1, #0x69
    // str r2, [sp]
    // mov r3, #0x12
    // str r3, [sp, #4]
    // mov r0, #1
    // lsl r1, r1, #2
    // str r0, [sp, #8]
    // add r0, r5, r1
    // add r1, r1, #4
    // add r1, r5, r1
    // bl ov40_0222D980
    // add r0, r4, #0
    // mov r1, #1
    // bl ov40_02230964
    // add r0, r4, #0
    // bl ov40_02237564
    // add r0, r4, #0
    // bl ov40_02237410
    // add r0, r4, #0
    // bl ov40_022371A0
    // add r0, r4, #0
    // mov r1, #0
    // bl ov40_02230964
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // mov r1, #0x69
    // lsl r1, r1, #2
    // add r0, r5, r1
    // add r1, r1, #4
    // mov r2, #1
    // add r1, r5, r1
    // add r3, r2, #0
    // bl ov40_0222DA00
    // cmp r0, #0
    // beq _022368DC
    // mov r0, #0x83
    // mov r2, #0x1a
    // lsl r0, r0, #4
    // lsl r2, r2, #4
    // ldr r0, [r4, r0]
    // ldr r1, [r5]
    // ldr r2, [r5, r2]
    // add r3, r5, #4
    // bl ov40_02236578
    // add r0, r5, #0
    // bl ov40_0223655C
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _022368DC
    // mov r1, #1
    // bl ov40_02230964
    // add r0, r4, #0
    // bl ov40_02237644
    // add r0, r4, #0
    // mov r1, #1
    // bl ov40_02237548
    // add r0, r4, #0
    // mov r1, #0
    // bl ov40_022373E4
    // add r0, r4, #0
    // mov r1, #0
    // bl ov40_02230964
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _022368DC
    // mov r1, #0x69
    // lsl r1, r1, #2
    // add r0, r5, r1
    // add r1, r1, #4
    // add r1, r5, r1
    // mov r2, #0
    // mov r3, #1
    // bl ov40_0222DA00
    // cmp r0, #0
    // beq _022368DC
    // mov r1, #0x1b
    // lsl r1, r1, #4
    // ldr r1, [r5, r1]
    // add r0, r4, #0
    // bl ov40_022371E4
    // add r0, r4, #0
    // bl ov40_02237144
    // ldr r1, _022368E4 ; =0x0000010E
    // add r0, r4, #0
    // bl ov40_02237030
    // add r0, r4, #0
    // mov r1, #0
    // bl ov40_02237548
    // add r0, r4, #0
    // mov r1, #1
    // bl ov40_022373E4
    // mov r0, #1
    // add r1, r0, #0
    // bl GfGfx_EngineATogglePlanes
    // ldr r0, _022368E8 ; =0x04000050
    // mov r1, #0
    // strh r1, [r0]
    // add r0, r4, #0
    // mov r1, #3
    // bl ov40_0222BF80
    // mov r0, #0
    // add sp, #0xc
    // pop {r4, r5, pc}
    // nop
    // _022368E4: .word 0x0000010E
    // _022368E8: .word 0x04000050
    // TODO: decompile
}




void ov40_022368EC(void) {
    // ldr r4, [r0, r2]
    // ldr r0, [r4, r0]
    ManagedSprite_SetDrawFlag((0xda << 2), 1, (0x86 << 4));
    // ldr r0, [r4, r0]
    TextOBJ_SetSpritesDrawFlag((0xdb << 2), 1);
    // ldr r0, [r4, r0]
    ManagedSprite_SetPositionXY((0xd3 << 2), 0x20, 0xe8);
    // ldr r0, [r4, r0]
    ManagedSprite_SetDrawFlag((0xda << 2), 0);
    // ldr r0, [r4, r0]
    TextOBJ_SetSpritesDrawFlag((0xdb << 2), 0);
    // ldr r0, [r4, r0]
    ManagedSprite_SetPositionXY((0xd3 << 2), 0x50, 0xe8);
    // ldr r0, [r4, r0]
    // sub r2, #0x2c
    sub_020136B4((0x35 << 4), 0x24, 0x24);
    // ldr r0, [r4, r0]
    // sub r2, #0x2c
    sub_020136B4((0xdb << 2), 0x24, 0x24);
}




void ov40_02236968(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // mov r0, #0x86
    // lsl r0, r0, #4
    // ldr r4, [r5, r0]
    // ldr r0, [r5, #8]
    // cmp r0, #0
    // beq _02236980
    // cmp r0, #1
    // beq _022369F6
    // b _02236A4E
    // ldr r0, _02236A54 ; =0x000006F4
    // mov r1, #0
    // ldr r0, [r5, r0]
    // bl sub_020879E0
    // mov r0, #0x6b
    // lsl r0, r0, #2
    // add r0, r4, r0
    // mov r1, #1
    // bl ov40_0222DA84
    // mov r1, #0x69
    // lsl r1, r1, #2
    // add r0, r4, r1
    // add r1, r1, #4
    // add r1, r4, r1
    // mov r2, #1
    // mov r3, #2
    // bl ov40_0222DA00
    // cmp r0, #0
    // beq _022369D8
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x6d
    // str r0, [sp, #0xc]
    // ldr r0, [r5, #0x14]
    // ldr r2, [r5, #0x24]
    // mov r1, #0x4f
    // mov r3, #7
    // bl GfGfxLoader_LoadScrnDataFromOpenNarc
    // add r0, r5, #0
    // bl ov40_02236F38
    // add r0, r5, #0
    // mov r1, #1
    // bl ov40_022368EC
    // ldr r0, [r5, #8]
    // add r0, r0, #1
    // str r0, [r5, #8]
    // ldr r0, [r5, #0x58]
    // mov r3, #0x6b
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // lsl r3, r3, #2
    // ldr r3, [r4, r3]
    // ldr r0, [r5, #0x28]
    // lsl r3, r3, #0x18
    // mov r1, #3
    // mov r2, #0xc
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // b _02236A4E
    // mov r0, #0x6b
    // lsl r0, r0, #2
    // add r0, r4, r0
    // mov r1, #0
    // bl ov40_0222DA84
    // mov r1, #0x69
    // lsl r1, r1, #2
    // add r0, r4, r1
    // add r1, r1, #4
    // add r1, r4, r1
    // mov r2, #0
    // mov r3, #2
    // bl ov40_0222DA00
    // cmp r0, #0
    // beq _02236A32
    // mov r0, #4
    // mov r1, #1
    // bl GfGfx_EngineBTogglePlanes
    // add r0, r5, #0
    // mov r1, #6
    // bl ov40_0222BF80
    // mov r1, #0x11
    // add r0, r5, #0
    // lsl r1, r1, #4
    // bl ov40_02237030
    // ldr r0, [r5, #0x58]
    // mov r3, #0x6b
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // lsl r3, r3, #2
    // ldr r3, [r4, r3]
    // ldr r0, [r5, #0x28]
    // lsl r3, r3, #0x18
    // mov r1, #3
    // mov r2, #0xc
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // mov r0, #0
    // add sp, #0x10
    // pop {r3, r4, r5, pc}
    // _02236A54: .word 0x000006F4
    // TODO: decompile
}




void ov40_02236A58(void) {
}




void ov40_02236A70(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x10
    // mov r1, #0x86
    // add r4, r0, #0
    // lsl r1, r1, #4
    // ldr r5, [r4, r1]
    // bl ov40_0223D5CC
    // cmp r0, #0
    // bne _02236A8A
    // add sp, #0x10
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // ldr r0, [r4, #8]
    // cmp r0, #7
    // bls _02236A92
    // b _02236C48
    // add r1, r0, r0
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _02236A9E: ; jump table
    // add r0, r4, #0
    // bl ov40_02236FE0
    // ldr r0, _02236C58 ; =0x000006F4
    // mov r1, #0
    // ldr r0, [r4, r0]
    // bl sub_020879E0
    // mov r0, #4
    // mov r1, #0
    // bl GfGfx_EngineBTogglePlanes
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // mov r2, #8
    // mov r1, #0x69
    // str r2, [sp]
    // mov r3, #0x12
    // str r3, [sp, #4]
    // mov r0, #1
    // lsl r1, r1, #2
    // str r0, [sp, #8]
    // add r0, r5, r1
    // add r1, r1, #4
    // add r1, r5, r1
    // bl ov40_0222D980
    // add r0, r4, #0
    // bl ov40_02237564
    // add r0, r4, #0
    // mov r1, #1
    // bl ov40_02230964
    // add r0, r4, #0
    // bl ov40_02237410
    // add r0, r4, #0
    // mov r1, #0
    // bl ov40_02230964
    // add r0, r4, #0
    // bl ov40_022371A0
    // mov r0, #4
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _02236C50
    // mov r0, #0x6b
    // lsl r0, r0, #2
    // add r0, r5, r0
    // mov r1, #1
    // bl ov40_0222DA84
    // mov r1, #0x69
    // lsl r1, r1, #2
    // add r0, r5, r1
    // add r1, r1, #4
    // add r1, r5, r1
    // mov r2, #1
    // mov r3, #0
    // bl ov40_0222DA00
    // cmp r0, #0
    // beq _02236B40
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // ldr r0, [r4, #0x58]
    // mov r3, #0x6b
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // lsl r3, r3, #2
    // ldr r3, [r5, r3]
    // ldr r0, [r4, #0x28]
    // lsl r3, r3, #0x18
    // mov r1, #3
    // mov r2, #0xc
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // b _02236C50
    // add r0, r0, #1
    // str r0, [r4, #8]
    // mov r1, #0x6f
    // lsl r1, r1, #4
    // ldr r1, [r4, r1]
    // add r0, r4, #0
    // mov r2, #0x80
    // mov r3, #0x60
    // bl ov40_0223077C
    // mov r0, #0x6f
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #1
    // bl sub_020879E0
    // mov r0, #0x6f
    // lsl r0, r0, #4
    // mov r1, #0x18
    // ldr r0, [r4, r0]
    // add r2, r1, #0
    // bl sub_02087A08
    // mov r1, #0x12
    // add r0, r4, #0
    // lsl r1, r1, #4
    // bl ov40_0222DED0
    // ldr r0, _02236C5C ; =0x0000057D
    // bl PlaySE
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _02236C50
    // add r0, r4, #0
    // bl ov40_0223D540
    // mov r1, #0x1a
    // lsl r1, r1, #4
    // ldr r1, [r5, r1]
    // mov r2, #0xe
    // str r1, [sp]
    // lsl r2, r2, #6
    // ldr r1, [r5, r2]
    // add r2, r2, #4
    // ldr r2, [r5, r2]
    // ldr r3, [r5]
    // bl ov39_02227420
    // cmp r0, #1
    // bne _02236C50
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _02236C50
    // add r0, r4, #0
    // bl ov40_0222DFB0
    // add r0, r4, #0
    // bl ov40_0223D540
    // add r1, sp, #0xc
    // bl ov39_02227D44
    // cmp r0, #1
    // ldr r0, _02236C5C ; =0x0000057D
    // bne _02236C02
    // mov r1, #0
    // bl StopSE
    // ldr r3, [sp, #0xc]
    // add r0, r4, #0
    // ldr r2, [r3, #0xc]
    // ldr r3, [r3, #4]
    // mov r1, #2
    // bl ov40_02230CDC
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _02236C50
    // mov r1, #0
    // bl StopSE
    // add r0, r4, #0
    // mov r1, #0x25
    // bl ov40_0222FB28
    // add r0, r4, #0
    // mov r1, #1
    // bl ov40_0222DD8C
    // ldr r0, _02236C60 ; =0x00000577
    // bl PlaySE
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _02236C50
    // mov r0, #0x6f
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl sub_020879E0
    // mov r0, #0x6f
    // lsl r0, r0, #4
    // mov r1, #0
    // ldr r0, [r4, r0]
    // add r2, r1, #0
    // bl sub_02087A08
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _02236C50
    // add r0, r4, #0
    // mov r1, #0xa
    // bl ov40_0222BF80
    // mov r0, #0
    // add sp, #0x10
    // pop {r3, r4, r5, pc}
    // nop
    // _02236C58: .word 0x000006F4
    // _02236C5C: .word 0x0000057D
    // _02236C60: .word 0x00000577
    // TODO: decompile
}




void ov40_02236C64(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // mov r0, #0x86
    // lsl r0, r0, #4
    // ldr r4, [r5, r0]
    // ldr r0, [r5, #8]
    // cmp r0, #0
    // beq _02236C80
    // cmp r0, #1
    // beq _02236C9E
    // cmp r0, #2
    // beq _02236D04
    // b _02236D52
    // ldr r0, _02236D58 ; =0x000006F4
    // mov r1, #0
    // ldr r0, [r5, r0]
    // bl sub_020879E0
    // add r0, r5, #0
    // bl ov40_02236FE0
    // mov r0, #4
    // mov r1, #0
    // bl GfGfx_EngineBTogglePlanes
    // ldr r0, [r5, #8]
    // add r0, r0, #1
    // str r0, [r5, #8]
    // mov r0, #0x6b
    // lsl r0, r0, #2
    // add r0, r4, r0
    // mov r1, #1
    // bl ov40_0222DA84
    // mov r1, #0x69
    // lsl r1, r1, #2
    // add r0, r4, r1
    // add r1, r1, #4
    // add r1, r4, r1
    // mov r2, #1
    // mov r3, #2
    // bl ov40_0222DA00
    // cmp r0, #0
    // beq _02236CE6
    // add r0, r5, #0
    // mov r1, #0
    // bl ov40_022368EC
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x6d
    // str r0, [sp, #0xc]
    // ldr r0, [r5, #0x14]
    // ldr r2, [r5, #0x24]
    // mov r1, #0x4d
    // mov r3, #7
    // bl GfGfxLoader_LoadScrnDataFromOpenNarc
    // ldr r0, [r5, #8]
    // add r0, r0, #1
    // str r0, [r5, #8]
    // ldr r0, [r5, #0x58]
    // mov r3, #0x6b
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // lsl r3, r3, #2
    // ldr r3, [r4, r3]
    // ldr r0, [r5, #0x28]
    // lsl r3, r3, #0x18
    // mov r1, #3
    // mov r2, #0xc
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // b _02236D52
    // mov r0, #0x6b
    // lsl r0, r0, #2
    // add r0, r4, r0
    // mov r1, #0
    // bl ov40_0222DA84
    // mov r1, #0x69
    // lsl r1, r1, #2
    // add r0, r4, r1
    // add r1, r1, #4
    // add r1, r4, r1
    // mov r2, #0
    // mov r3, #2
    // bl ov40_0222DA00
    // cmp r0, #0
    // beq _02236D36
    // ldr r1, _02236D5C ; =0x0000010E
    // add r0, r5, #0
    // bl ov40_02237030
    // add r0, r5, #0
    // mov r1, #3
    // bl ov40_0222BF80
    // ldr r0, [r5, #0x58]
    // mov r3, #0x6b
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // lsl r3, r3, #2
    // ldr r3, [r4, r3]
    // ldr r0, [r5, #0x28]
    // lsl r3, r3, #0x18
    // mov r1, #3
    // mov r2, #0xc
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // mov r0, #0
    // add sp, #0x10
    // pop {r3, r4, r5, pc}
    // _02236D58: .word 0x000006F4
    // _02236D5C: .word 0x0000010E
    // TODO: decompile
}




void ov40_02236D60(void) {
    // ldr r4, [r5, r1]
    // str r2, [sp]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r4, r1
    // add r1, r4, r1
    ov40_0222D980(1, ((0x69 << 2) + 4), 8, 0x12);
    ov40_02230964(r5, 1);
    ov40_02237564(r5);
    ov40_02237410(r5);
    ov40_022371A0(r5);
    ov40_02230964(r5, 0);
    GfGfx_EngineATogglePlanes(4, 0);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    // add r0, r4, r0
    ov40_0222DA84((0x6b << 2), 1);
    // add r0, r4, r1
    // add r1, r4, r1
    ov40_0222DA00(((0x69 << 2) + 4), 1, 0);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    // str r0, [sp]
    // ldr r3, [r4, r3]
    PaletteData_BlendPalettes(*((u32*)(r5 + 0x28)), 3, 0xc, (((0x6b << 2) << 0x18) >> 0x18));
    ov40_0222BF80(0xa);
}




void ov40_02236E18(void) {
    // ldr r4, [r5, r1]
    ov40_02236FE0(*((u32*)(r0 + 8)));
    // str r2, [sp]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r4, r1
    // add r1, r4, r1
    ov40_0222D980(1, ((0x69 << 2) + 4), 8, 0x12);
    GfGfx_EngineATogglePlanes(4, 0);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    // add r0, r4, r0
    ov40_0222DA84((0x6b << 2), 1);
    // add r0, r4, r1
    // add r1, r4, r1
    ov40_0222DA00(((0x69 << 2) + 4), 1, 0);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    // str r0, [sp]
    // ldr r3, [r4, r3]
    PaletteData_BlendPalettes(*((u32*)(r5 + 0x28)), 3, 0xc, (((0x6b << 2) << 0x18) >> 0x18));
    ov40_0222BF80(0xd);
}




void ov40_02236EB4(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x1c
    // str r0, [sp, #0x14]
    // mov r0, #0
    // str r0, [sp, #0x18]
    // mov r1, #0x86
    // ldr r6, _02236F2C ; =0x00000101
    // ldr r0, [sp, #0x14]
    // lsl r1, r1, #4
    // ldr r1, [r0, r1]
    // add r0, r6, #0
    // add r0, #0xb3
    // ldr r5, _02236F30 ; =ov40_022452B4
    // ldr r7, _02236F34 ; =ov40_02245290
    // add r4, r1, r0
    // add r0, r4, #0
    // bl InitWindow
    // ldrb r0, [r5, #1]
    // add r1, r4, #0
    // mov r2, #2
    // str r0, [sp]
    // ldrb r0, [r5, #2]
    // str r0, [sp, #4]
    // ldrb r0, [r5, #3]
    // str r0, [sp, #8]
    // mov r0, #0xe
    // str r0, [sp, #0xc]
    // lsl r0, r6, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x14]
    // ldrb r3, [r5]
    // ldr r0, [r0, #0x24]
    // bl AddWindowParameterized
    // ldr r1, [r7]
    // add r0, r4, #0
    // lsl r1, r1, #0x18
    // lsr r1, r1, #0x18
    // bl FillWindowPixelBuffer
    // add r0, r4, #0
    // bl ScheduleWindowCopyToVram
    // ldrb r1, [r5, #2]
    // ldrb r0, [r5, #3]
    // add r4, #0x10
    // add r5, r5, #4
    // mul r0, r1
    // add r6, r6, r0
    // ldr r0, [sp, #0x18]
    // add r7, r7, #4
    // add r0, r0, #1
    // str r0, [sp, #0x18]
    // cmp r0, #3
    // blt _02236ED2
    // add sp, #0x1c
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _02236F2C: .word 0x00000101
    // _02236F30: .word ov40_022452B4
    // _02236F34: .word ov40_02245290
    // TODO: decompile
}




void ov40_02236F38(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x20
    // mov r1, #0x86
    // lsl r1, r1, #4
    // str r0, [sp, #0x14]
    // ldr r1, [r0, r1]
    // mov r0, #0x8d
    // lsl r0, r0, #2
    // ldr r5, _02236FD8 ; =ov40_022452DC
    // mov r6, #1
    // mov r7, #0
    // add r4, r1, r0
    // add r0, r4, #0
    // bl InitWindow
    // ldrb r0, [r5, #1]
    // add r1, r4, #0
    // mov r2, #6
    // str r0, [sp]
    // ldrb r0, [r5, #2]
    // str r0, [sp, #4]
    // ldrb r0, [r5, #3]
    // str r0, [sp, #8]
    // mov r0, #0xe
    // str r0, [sp, #0xc]
    // lsl r0, r6, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x14]
    // ldrb r3, [r5]
    // ldr r0, [r0, #0x24]
    // bl AddWindowParameterized
    // ldr r0, [sp, #0x14]
    // add r1, r7, #0
    // ldr r0, [r0, #0x48]
    // add r1, #0x3c
    // bl NewString_ReadMsgData
    // str r0, [sp, #0x18]
    // ldr r1, [sp, #0x18]
    // add r0, r4, #0
    // bl ov40_022306C0
    // str r0, [sp, #0x1c]
    // add r0, r4, #0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _02236FDC ; =0x000F0D00
    // ldr r2, [sp, #0x18]
    // str r0, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // ldr r3, [sp, #0x1c]
    // add r0, r4, #0
    // mov r1, #0
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r4, #0
    // bl ScheduleWindowCopyToVram
    // ldr r0, [sp, #0x18]
    // bl String_Delete
    // ldrb r1, [r5, #2]
    // ldrb r0, [r5, #3]
    // add r7, r7, #1
    // add r4, #0x10
    // mul r0, r1
    // add r6, r6, r0
    // add r5, r5, #4
    // cmp r7, #6
    // blo _02236F50
    // add sp, #0x20
    // pop {r3, r4, r5, r6, r7, pc}
    // _02236FD8: .word ov40_022452DC
    // _02236FDC: .word 0x000F0D00
    // TODO: decompile
}




void ov40_02236FE0(void) {
    // ldr r1, [r0, r1]
    // add r5, r1, r0
    ClearWindowTilemapAndCopyToVram(r5, (0x86 << 4));
    RemoveWindow(r5);
    // add r5, #0x10
}




void ov40_02237008(void) {
    // ldr r1, [r0, r1]
    // add r5, r1, r0
    ClearWindowTilemapAndCopyToVram(r5, (0x86 << 4));
    RemoveWindow(r5);
    // add r5, #0x10
}




void ov40_02237030(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x10
    // mov r2, #0x86
    // lsl r2, r2, #4
    // ldr r5, [r0, r2]
    // mov r6, #0x75
    // ldr r0, [r0, #0x48]
    // lsl r6, r6, #2
    // bl NewString_ReadMsgData
    // add r4, r0, #0
    // add r0, r5, r6
    // mov r1, #0xcc
    // bl FillWindowPixelBuffer
    // mov r1, #0
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _02237078 ; =0x000F0D00
    // add r2, r4, #0
    // str r0, [sp, #8]
    // add r0, r5, r6
    // add r3, r1, #0
    // str r1, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r5, r6
    // bl ScheduleWindowCopyToVram
    // add r0, r4, #0
    // bl String_Delete
    // add sp, #0x10
    // pop {r4, r5, r6, pc}
    // nop
    // _02237078: .word 0x000F0D00
    // TODO: decompile
}




void ov40_0223707C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x18
    // add r5, r0, #0
    // mov r0, #0x86
    // lsl r0, r0, #4
    // ldr r4, [r5, r0]
    // mov r1, #0xe
    // lsl r1, r1, #6
    // ldr r1, [r4, r1]
    // ldr r0, [r5, #0x48]
    // add r1, #0x1c
    // bl NewString_ReadMsgData
    // str r0, [sp, #0x10]
    // mov r0, #0xff
    // mov r1, #0x6d
    // bl String_New
    // add r6, r0, #0
    // mov r0, #0xff
    // mov r1, #0x6d
    // bl String_New
    // add r7, r0, #0
    // mov r0, #0x6d
    // bl ov40_0222DAB0
    // ldr r1, _0223713C ; =0x000004D4
    // str r0, [sp, #0x14]
    // ldr r1, [r5, r1]
    // add r0, r6, #0
    // lsl r1, r1, #2
    // add r2, r4, r1
    // mov r1, #0xe3
    // lsl r1, r1, #2
    // ldr r1, [r2, r1]
    // bl CopyU16ArrayToString
    // add r0, r5, #0
    // add r1, r6, #0
    // bl ov40_02230DCC
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // mov r1, #0
    // ldr r0, [sp, #0x14]
    // add r2, r6, #0
    // add r3, r1, #0
    // bl BufferString
    // ldr r0, [sp, #0x14]
    // ldr r2, [sp, #0x10]
    // add r1, r7, #0
    // bl StringExpandPlaceholders
    // mov r0, #0x75
    // lsl r0, r0, #2
    // add r0, r4, r0
    // mov r1, #0xcc
    // bl FillWindowPixelBuffer
    // mov r1, #0
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _02237140 ; =0x000F0D00
    // add r2, r7, #0
    // str r0, [sp, #8]
    // mov r0, #0x75
    // lsl r0, r0, #2
    // add r0, r4, r0
    // add r3, r1, #0
    // str r1, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // mov r0, #0x75
    // lsl r0, r0, #2
    // add r0, r4, r0
    // bl ScheduleWindowCopyToVram
    // ldr r0, [sp, #0x10]
    // bl String_Delete
    // add r0, r6, #0
    // bl String_Delete
    // add r0, r7, #0
    // bl String_Delete
    // ldr r0, [sp, #0x14]
    // bl MessageFormat_Delete
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // _0223713C: .word 0x000004D4
    // _02237140: .word 0x000F0D00
    // TODO: decompile
}




void ov40_02237144(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x10
    // mov r1, #0x86
    // lsl r1, r1, #4
    // ldr r5, [r0, r1]
    // mov r6, #0x71
    // mov r0, #0xff
    // mov r1, #0x6d
    // lsl r6, r6, #2
    // bl String_New
    // add r1, r5, #4
    // add r4, r0, #0
    // bl CopyU16ArrayToString
    // add r0, r5, r6
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // add r0, r5, r6
    // add r1, r4, #0
    // bl ov40_022306C0
    // add r3, r0, #0
    // mov r0, #4
    // str r0, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0223719C ; =0x000F0100
    // mov r1, #0
    // str r0, [sp, #8]
    // add r0, r5, r6
    // add r2, r4, #0
    // str r1, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r5, r6
    // bl ScheduleWindowCopyToVram
    // add r0, r4, #0
    // bl String_Delete
    // add sp, #0x10
    // pop {r4, r5, r6, pc}
    // _0223719C: .word 0x000F0100
    // TODO: decompile
}




void ov40_022371A0(void) {
    // push {r4, r5, r6, lr}
    // mov r1, #0x86
    // lsl r1, r1, #4
    // ldr r1, [r0, r1]
    // mov r0, #0x6d
    // lsl r0, r0, #2
    // ldr r5, _022371D0 ; =ov40_02245290
    // mov r6, #0
    // add r4, r1, r0
    // ldr r1, [r5]
    // add r0, r4, #0
    // lsl r1, r1, #0x18
    // lsr r1, r1, #0x18
    // bl FillWindowPixelBuffer
    // add r0, r4, #0
    // bl ScheduleWindowCopyToVram
    // add r6, r6, #1
    // add r4, #0x10
    // add r5, r5, #4
    // cmp r6, #2
    // blt _022371B2
    // pop {r4, r5, r6, pc}
    // _022371D0: .word ov40_02245290
    // TODO: decompile
}




void ov40_022371D4(void) {
    // and r0, r1
}




void ov40_022371E4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x1fc
    // sub sp, #0x14
    // add r5, r1, #0
    // mov r1, #0x86
    // lsl r1, r1, #4
    // ldr r4, [r0, r1]
    // mov r7, #0x6d
    // lsl r7, r7, #2
    // add r0, r4, r7
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // lsl r0, r5, #1
    // add r0, r4, r0
    // ldrh r6, [r0, #0x2c]
    // cmp r6, #0
    // bne _02237214
    // add r0, r4, r7
    // bl ScheduleWindowCopyToVram
    // add sp, #0x1fc
    // add sp, #0x14
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #0xff
    // mov r1, #0x6d
    // bl String_New
    // add r2, r7, #0
    // sub r2, #0x5c
    // add r5, r0, #0
    // ldr r0, [r4, r2]
    // add r2, #0x58
    // ldr r2, [r4, r2]
    // mov r1, #1
    // lsl r1, r2
    // bl ov40_022371D4
    // cmp r0, #1
    // bne _02237238
    // add r6, r7, #0
    // add r6, #0x3a
    // add r0, r6, #0
    // mov r1, #0x6d
    // add r2, sp, #0x10
    // bl GetSpeciesNameIntoArray
    // add r0, r5, #0
    // add r1, sp, #0x10
    // bl CopyU16ArrayToString
    // add r0, r4, r7
    // add r1, r5, #0
    // bl ov40_022306C0
    // add r3, r0, #0
    // mov r0, #6
    // str r0, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _02237280 ; =0x000F0D00
    // mov r1, #0
    // str r0, [sp, #8]
    // add r0, r4, r7
    // add r2, r5, #0
    // str r1, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r4, r7
    // bl ScheduleWindowCopyToVram
    // add r0, r5, #0
    // bl String_Delete
    // add sp, #0x1fc
    // add sp, #0x14
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02237280: .word 0x000F0D00
    // TODO: decompile
}




void ov40_02237284(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x60
    // mov r1, #0x86
    // lsl r1, r1, #4
    // ldr r1, [r0, r1]
    // ldr r4, [r0, #0x28]
    // str r1, [sp, #0x24]
    // ldr r1, [r0, #0x18]
    // str r1, [sp, #0x20]
    // ldr r1, [r0, #0x1c]
    // str r1, [sp, #0x1c]
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
    // ldr r0, _022373E0 ; =0x000186A0
    // ldr r2, [sp, #0x20]
    // str r0, [sp, #0x14]
    // ldr r3, [sp, #0x1c]
    // add r0, r4, #0
    // mov r1, #2
    // bl SpriteSystem_LoadPaletteBuffer
    // bl sub_0207449C
    // add r3, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, _022373E0 ; =0x000186A0
    // ldr r1, [sp, #0x1c]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x20]
    // mov r2, #0x14
    // bl SpriteSystem_LoadCellResObj
    // bl sub_020744A8
    // add r3, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, _022373E0 ; =0x000186A0
    // ldr r1, [sp, #0x1c]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x20]
    // mov r2, #0x14
    // bl SpriteSystem_LoadAnimResObj
    // ldr r7, [sp, #0x24]
    // mov r4, #0
    // add r5, r7, #0
    // ldr r0, [sp, #0x24]
    // ldrh r6, [r7, #0x2c]
    // add r1, r0, r4
    // mov r0, #0x57
    // lsl r0, r0, #2
    // ldrb r0, [r1, r0]
    // ldr r1, [sp, #0x24]
    // str r0, [sp, #0x18]
    // mov r0, #0x56
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // mov r1, #1
    // lsl r1, r4
    // bl ov40_022371D4
    // str r0, [sp, #0x28]
    // cmp r6, #0
    // beq _022373D2
    // ldr r1, [sp, #0x28]
    // ldr r2, [sp, #0x18]
    // add r0, r6, #0
    // bl GetMonIconNaixEx
    // add r3, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // ldr r0, _022373E0 ; =0x000186A0
    // ldr r1, [sp, #0x1c]
    // add r0, r4, r0
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x20]
    // mov r2, #0x14
    // bl SpriteSystem_LoadCharResObjAtEndWithHardwareMappingType
    // add r0, r4, #0
    // mov r1, #6
    // bl _s32_div_f
    // add r2, r1, #0
    // mov r0, #0x18
    // mul r2, r0
    // add r2, #0x6e
    // add r0, sp, #0x2c
    // strh r2, [r0]
    // add r0, r4, #0
    // mov r1, #6
    // bl _s32_div_f
    // mov r1, #0x16
    // mul r1, r0
    // add r1, #0x30
    // add r0, sp, #0x2c
    // strh r1, [r0, #2]
    // mov r1, #0
    // strh r1, [r0, #4]
    // strh r1, [r0, #6]
    // add r0, r1, #0
    // str r0, [sp, #0x34]
    // str r0, [sp, #0x38]
    // mov r0, #1
    // str r0, [sp, #0x3c]
    // add r0, r1, #0
    // str r0, [sp, #0x58]
    // str r0, [sp, #0x5c]
    // ldr r0, _022373E0 ; =0x000186A0
    // add r2, sp, #0x2c
    // add r0, r4, r0
    // str r0, [sp, #0x40]
    // ldr r0, _022373E0 ; =0x000186A0
    // str r0, [sp, #0x44]
    // str r0, [sp, #0x48]
    // str r0, [sp, #0x4c]
    // sub r0, r1, #1
    // str r0, [sp, #0x50]
    // sub r0, r1, #1
    // str r0, [sp, #0x54]
    // ldr r0, [sp, #0x20]
    // ldr r1, [sp, #0x1c]
    // bl SpriteSystem_NewSprite
    // mov r1, #0xad
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // ldr r1, [sp, #0x18]
    // ldr r2, [sp, #0x28]
    // add r0, r6, #0
    // bl GetMonIconPaletteEx
    // add r1, r0, #0
    // mov r0, #0xad
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // add r1, r1, #4
    // bl ManagedSprite_SetPaletteOverrideOffset
    // mov r0, #0xad
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #1
    // bl ManagedSprite_SetAnim
    // mov r0, #0xad
    // lsl r0, r0, #2
    // mov r1, #0x1e
    // ldr r0, [r5, r0]
    // sub r1, r1, r4
    // bl ManagedSprite_SetDrawPriority
    // add r4, r4, #1
    // add r7, r7, #2
    // add r5, r5, #4
    // cmp r4, #0x1e
    // blt _022372F6
    // add sp, #0x60
    // pop {r3, r4, r5, r6, r7, pc}
    // _022373E0: .word 0x000186A0
    // TODO: decompile
}




void ov40_022373E4(void) {
    // ldr r4, [r0, r1]
    // ldr r0, [r5, r0]
    ManagedSprite_SetDrawFlag((0xad << 2), r1);
}




void ov40_02237410(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r7, r0, #0
    // mov r0, #0x86
    // lsl r0, r0, #4
    // ldr r4, [r7, r0]
    // ldr r0, [r7, #0x1c]
    // ldr r1, _02237470 ; =0x000186A0
    // bl SpriteManager_UnloadPlttObjById
    // ldr r0, [r7, #0x1c]
    // ldr r1, _02237470 ; =0x000186A0
    // bl SpriteManager_UnloadCellObjById
    // ldr r0, [r7, #0x1c]
    // ldr r1, _02237470 ; =0x000186A0
    // bl SpriteManager_UnloadAnimObjById
    // mov r6, #0
    // add r5, r4, #0
    // ldrh r0, [r4, #0x2c]
    // cmp r0, #0
    // beq _02237462
    // mov r0, #0xad
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // cmp r0, #0
    // beq _02237462
    // ldr r1, _02237470 ; =0x000186A0
    // ldr r0, [r7, #0x1c]
    // add r1, r6, r1
    // bl SpriteManager_UnloadCharObjById
    // mov r0, #0xad
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // bl Sprite_DeleteAndFreeResources
    // mov r0, #0xad
    // mov r1, #0
    // lsl r0, r0, #2
    // str r1, [r5, r0]
    // add r6, r6, #1
    // add r4, r4, #2
    // add r5, r5, #4
    // cmp r6, #0x1e
    // blt _02237436
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02237470: .word 0x000186A0
    // TODO: decompile
}




void ov40_02237474(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x34
    // mov r1, #0x86
    // lsl r1, r1, #4
    // str r0, [sp, #0x10]
    // ldr r4, [r0, r1]
    // mov r0, #0x1b
    // lsl r0, r0, #4
    // ldr r2, [r4, r0]
    // lsl r1, r2, #2
    // add r1, r4, r1
    // add r3, r1, #0
    // add r3, #0xe0
    // ldr r3, [r3]
    // add r5, r4, r2
    // str r3, [sp, #0x14]
    // add r3, r0, #0
    // sub r3, #0x54
    // ldrb r7, [r5, r3]
    // lsl r3, r2, #1
    // add r3, r4, r3
    // ldrh r5, [r3, #0x2c]
    // ldr r6, [r1, #0x68]
    // cmp r5, #0
    // bne _022374B2
    // mov r0, #0xcb
    // mov r1, #0
    // lsl r0, r0, #2
    // add sp, #0x34
    // str r1, [r4, r0]
    // pop {r4, r5, r6, r7, pc}
    // sub r0, #0x58
    // mov r1, #1
    // ldr r0, [r4, r0]
    // lsl r1, r2
    // bl ov40_022371D4
    // cmp r0, #1
    // bne _022374D0
    // ldr r0, _02237540 ; =0x000001EA
    // cmp r5, r0
    // bne _022374CC
    // mov r7, #1
    // b _022374CE
    // mov r7, #0
    // ldr r5, _02237544 ; =0x000001EE
    // add r0, r5, #0
    // mov r1, #0x6d
    // bl AllocAndLoadMonPersonal
    // str r0, [sp, #0x18]
    // add r0, r5, #0
    // add r1, r6, #0
    // bl GetGenderBySpeciesAndPersonality
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x14]
    // add r1, r6, #0
    // bl CalcShininessByOtIdAndPersonality
    // lsl r3, r7, #0x18
    // str r0, [sp, #0x20]
    // ldr r1, [sp, #0x1c]
    // add r0, r5, #0
    // mov r2, #2
    // lsr r3, r3, #0x18
    // str r6, [sp]
    // bl GetMonPicHeightBySpeciesGenderForm
    // ldr r0, [sp, #0x20]
    // ldr r2, [sp, #0x1c]
    // str r0, [sp]
    // lsl r0, r7, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #4]
    // add r0, sp, #0x24
    // add r1, r5, #0
    // mov r3, #2
    // str r6, [sp, #8]
    // bl GetMonSpriteCharAndPlttNarcIdsEx
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x10]
    // add r1, sp, #0x24
    // ldr r0, [r0, #0x64]
    // mov r2, #0x2a
    // mov r3, #0x5b
    // bl PokepicManager_CreatePokepic
    // mov r1, #0xcb
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // ldr r0, [sp, #0x18]
    // bl FreeMonPersonal
    // add sp, #0x34
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _02237540: .word 0x000001EA
    // _02237544: .word 0x000001EE
    // TODO: decompile
}




void ov40_02237548(void) {
}




void ov40_02237564(void) {
}




void ov40_0223757C(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // mov r0, #0x86
    // lsl r0, r0, #4
    // ldr r4, [r5, r0]
    // sub r0, #0x30
    // ldr r0, [r5, r0]
    // bl SaveArray_PCStorage_Get
    // ldr r0, _0223763C ; =0x0000017A
    // ldrb r1, [r4, r0]
    // cmp r1, #0x10
    // blo _022375A0
    // cmp r1, #0x18
    // bhs _022375A0
    // mov r1, #0
    // strb r1, [r4, r0]
    // ldr r0, _0223763C ; =0x0000017A
    // ldrb r1, [r4, r0]
    // cmp r1, #0x28
    // blo _022375AC
    // mov r1, #0
    // strb r1, [r4, r0]
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x6d
    // str r0, [sp, #0xc]
    // ldr r1, _0223763C ; =0x0000017A
    // ldr r0, [r5, #0x14]
    // ldrb r2, [r4, r1]
    // mov r3, #3
    // lsl r1, r2, #1
    // add r1, r2, r1
    // ldr r2, [r5, #0x24]
    // add r1, #0x8a
    // bl GfGfxLoader_LoadCharDataFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x6d
    // str r0, [sp, #0xc]
    // ldr r1, _0223763C ; =0x0000017A
    // ldr r0, [r5, #0x14]
    // ldrb r2, [r4, r1]
    // mov r3, #3
    // lsl r1, r2, #1
    // add r1, r2, r1
    // ldr r2, [r5, #0x24]
    // add r1, #0x8c
    // bl GfGfxLoader_LoadScrnDataFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #0x40
    // str r0, [sp, #4]
    // mov r0, #0xc0
    // mov r1, #0xbf
    // str r0, [sp, #8]
    // add r2, r1, #0
    // str r0, [sp, #0xc]
    // add r2, #0xbb
    // ldrb r3, [r4, r2]
    // ldr r0, [r5, #0x28]
    // lsl r2, r3, #1
    // add r2, r3, r2
    // add r2, #0x8b
    // mov r3, #0x6d
    // bl PaletteData_LoadFromNarc
    // add r0, r5, #0
    // bl ov40_02237474
    // add r0, r5, #0
    // bl ov40_02237284
    // mov r1, #0x1b
    // lsl r1, r1, #4
    // ldr r1, [r4, r1]
    // add r0, r5, #0
    // bl ov40_022371E4
    // add r0, r5, #0
    // bl ov40_02237144
    // ldr r1, _02237640 ; =0x0000010E
    // add r0, r5, #0
    // bl ov40_02237030
    // add sp, #0x10
    // pop {r3, r4, r5, pc}
    // nop
    // _0223763C: .word 0x0000017A
    // _02237640: .word 0x0000010E
    // TODO: decompile
}




void ov40_02237644(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // mov r0, #0x86
    // lsl r0, r0, #4
    // ldr r4, [r5, r0]
    // sub r0, #0x30
    // ldr r0, [r5, r0]
    // bl SaveArray_PCStorage_Get
    // ldr r1, _022376F8 ; =0x0000017A
    // ldrb r2, [r4, r1]
    // cmp r2, #0x10
    // blo _02237668
    // cmp r2, #0x18
    // bhs _02237668
    // mov r2, #0
    // strb r2, [r4, r1]
    // ldr r1, _022376F8 ; =0x0000017A
    // ldrb r1, [r4, r1]
    // cmp r1, #0x18
    // blo _02237684
    // cmp r1, #0x20
    // bhs _02237684
    // sub r1, #0x18
    // bl PCStorage_IsBonusWallpaperUnlocked
    // cmp r0, #0
    // bne _02237684
    // ldr r0, _022376F8 ; =0x0000017A
    // mov r1, #0
    // strb r1, [r4, r0]
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x6d
    // str r0, [sp, #0xc]
    // ldr r1, _022376F8 ; =0x0000017A
    // ldr r0, [r5, #0x14]
    // ldrb r2, [r4, r1]
    // mov r3, #3
    // lsl r1, r2, #1
    // add r1, r2, r1
    // ldr r2, [r5, #0x24]
    // add r1, #0x8a
    // bl GfGfxLoader_LoadCharDataFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x6d
    // str r0, [sp, #0xc]
    // ldr r1, _022376F8 ; =0x0000017A
    // ldr r0, [r5, #0x14]
    // ldrb r2, [r4, r1]
    // mov r3, #3
    // lsl r1, r2, #1
    // add r1, r2, r1
    // ldr r2, [r5, #0x24]
    // add r1, #0x8c
    // bl GfGfxLoader_LoadScrnDataFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #0x40
    // str r0, [sp, #4]
    // mov r0, #0xc0
    // mov r1, #0xbf
    // str r0, [sp, #8]
    // add r2, r1, #0
    // str r0, [sp, #0xc]
    // add r2, #0xbb
    // ldrb r3, [r4, r2]
    // ldr r0, [r5, #0x28]
    // lsl r2, r3, #1
    // add r2, r3, r2
    // add r2, #0x8b
    // mov r3, #0x6d
    // bl PaletteData_LoadFromNarc
    // add r0, r5, #0
    // bl ov40_02237474
    // add r0, r5, #0
    // bl ov40_02237284
    // add sp, #0x10
    // pop {r3, r4, r5, pc}
    // _022376F8: .word 0x0000017A
    // TODO: decompile
}




void ov40_022376FC(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x10
    // mov r1, #0x86
    // add r5, r0, #0
    // lsl r1, r1, #4
    // ldr r4, [r5, r1]
    // ldr r1, [r5, #8]
    // cmp r1, #0
    // beq _02237718
    // cmp r1, #1
    // beq _02237792
    // cmp r1, #2
    // beq _022377D6
    // b _02237814
    // mov r1, #2
    // bl ov40_0222C710
    // add r0, r5, #0
    // mov r1, #1
    // bl ov40_02230964
    // add r0, r5, #0
    // bl ov40_02236EB4
    // add r0, r5, #0
    // bl ov40_0223757C
    // add r0, r5, #0
    // mov r1, #1
    // bl ov40_02237548
    // add r0, r5, #0
    // mov r1, #0
    // bl ov40_022373E4
    // add r0, r5, #0
    // mov r1, #0
    // bl ov40_02230964
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x6d
    // str r0, [sp, #0xc]
    // ldr r0, [r5, #0x14]
    // ldr r2, [r5, #0x24]
    // mov r1, #0x3e
    // mov r3, #7
    // bl GfGfxLoader_LoadCharDataFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x6d
    // str r0, [sp, #0xc]
    // ldr r0, [r5, #0x14]
    // ldr r2, [r5, #0x24]
    // mov r1, #0x4d
    // mov r3, #7
    // bl GfGfxLoader_LoadScrnDataFromOpenNarc
    // mov r0, #8
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #8
    // mov r1, #1
    // bl GfGfx_EngineBTogglePlanes
    // ldr r0, [r5, #8]
    // add r0, r0, #1
    // str r0, [r5, #8]
    // b _02237814
    // mov r1, #0x69
    // lsl r1, r1, #2
    // add r0, r4, r1
    // add r1, r1, #4
    // mov r2, #0
    // add r1, r4, r1
    // add r3, r2, #0
    // bl ov40_0222DA00
    // cmp r0, #0
    // beq _02237814
    // add r0, r5, #0
    // mov r1, #0
    // bl ov40_02237548
    // add r0, r5, #0
    // mov r1, #1
    // bl ov40_022373E4
    // mov r0, #1
    // add r1, r0, #0
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #4
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // ldr r0, _0223781C ; =0x04000050
    // mov r1, #0
    // strh r1, [r0]
    // ldr r0, [r5, #8]
    // add r0, r0, #1
    // str r0, [r5, #8]
    // b _02237814
    // mov r0, #0x6b
    // lsl r0, r0, #2
    // add r0, r4, r0
    // mov r1, #0
    // bl ov40_0222DA84
    // cmp r0, #0
    // beq _022377F8
    // mov r0, #0x33
    // lsl r0, r0, #4
    // ldr r1, [r4, r0]
    // add r0, #0x14
    // str r1, [r4, r0]
    // add r0, r5, #0
    // mov r1, #3
    // bl ov40_0222BF80
    // ldr r0, [r5, #0x58]
    // mov r3, #0x6b
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // lsl r3, r3, #2
    // ldr r3, [r4, r3]
    // ldr r0, [r5, #0x28]
    // lsl r3, r3, #0x18
    // mov r1, #3
    // mov r2, #0xc
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // mov r0, #0
    // add sp, #0x10
    // pop {r3, r4, r5, pc}
    // nop
    // _0223781C: .word 0x04000050
    // TODO: decompile
}




void ov40_02237820(void) {
}




void ov40_02237838(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // mov r1, #0x86
    // add r5, r0, #0
    // lsl r1, r1, #4
    // ldr r7, [r5, r1]
    // ldr r1, [r5, #8]
    // cmp r1, #0
    // beq _0223784E
    // cmp r1, #1
    // beq _02237888
    // b _022378DE
    // bl ov40_02237410
    // add r0, r5, #0
    // bl ov40_02237564
    // add r0, r5, #0
    // bl ov40_02237008
    // add r0, r5, #0
    // bl ov40_02236534
    // ldr r0, _02237974 ; =0x000006F4
    // mov r1, #0
    // ldr r0, [r5, r0]
    // bl sub_020878B0
    // ldr r0, _02237974 ; =0x000006F4
    // mov r1, #0
    // ldr r0, [r5, r0]
    // bl sub_020879E0
    // add r0, r5, #0
    // mov r1, #1
    // bl ov40_0222FB90
    // ldr r0, [r5, #8]
    // add r0, r0, #1
    // str r0, [r5, #8]
    // b _02237970
    // bl ov40_0222FBB4
    // cmp r0, #0
    // beq _02237970
    // mov r6, #0
    // add r4, r7, #0
    // mov r0, #0x33
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // bl TouchHitboxController_Destroy
    // add r6, r6, #1
    // add r4, r4, #4
    // cmp r6, #5
    // blt _02237894
    // mov r0, #0x6b
    // lsl r0, r0, #2
    // add r0, r7, r0
    // bl ov40_0222DAA8
    // add r0, r5, #0
    // bl ov40_0222D88C
    // ldr r0, [r5, #0x24]
    // mov r1, #2
    // bl BgClearTilemapBufferAndCommit
    // ldr r0, [r5, #0x24]
    // mov r1, #6
    // bl BgClearTilemapBufferAndCommit
    // ldr r0, [r5, #0x24]
    // mov r1, #3
    // bl BgClearTilemapBufferAndCommit
    // ldr r0, [r5, #0x24]
    // mov r1, #7
    // bl BgClearTilemapBufferAndCommit
    // ldr r0, [r5, #8]
    // add r0, r0, #1
    // str r0, [r5, #8]
    // b _02237970
    // mov r0, #0x6b
    // lsl r0, r0, #2
    // add r0, r7, r0
    // mov r1, #0
    // bl ov40_0222DA84
    // cmp r0, #0
    // beq _02237938
    // add r0, r5, #0
    // bl ov40_0222DD08
    // mov r0, #0x6b
    // lsl r0, r0, #2
    // add r0, r7, r0
    // bl ov40_0222DAA8
    // ldr r0, [r5, #0x58]
    // mov r1, #2
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r0, [r5, #0x28]
    // mov r2, #0xc
    // mov r3, #0x10
    // bl PaletteData_BlendPalettes
    // mov r1, #1
    // ldr r3, [r5, #0x10]
    // add r0, r5, #0
    // add r2, r1, #0
    // bl ov40_0222BF64
    // add r0, r5, #0
    // mov r1, #5
    // bl ov40_0222BF80
    // mov r0, #0xe1
    // lsl r0, r0, #2
    // ldr r0, [r7, r0]
    // bl sub_020314BC
    // add r0, r7, #0
    // bl Heap_Free
    // b _02237970
    // ldr r0, [r5, #0x58]
    // mov r3, #0x6b
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // lsl r3, r3, #2
    // ldr r3, [r7, r3]
    // ldr r0, [r5, #0x28]
    // lsl r3, r3, #0x18
    // mov r1, #1
    // mov r2, #2
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // ldr r0, [r5, #0x58]
    // mov r3, #0x6b
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // lsl r3, r3, #2
    // ldr r3, [r7, r3]
    // ldr r0, [r5, #0x28]
    // lsl r3, r3, #0x18
    // mov r1, #3
    // mov r2, #0xc
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // _02237974: .word 0x000006F4
    // TODO: decompile
}




void ov40_02237978(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x10
    // mov r1, #0x86
    // add r5, r0, #0
    // lsl r1, r1, #4
    // ldr r4, [r5, r1]
    // ldr r1, [r5, #8]
    // cmp r1, #0
    // beq _02237994
    // cmp r1, #1
    // beq _02237A1E
    // cmp r1, #2
    // beq _02237A5A
    // b _02237A98
    // mov r1, #1
    // bl ov40_02230964
    // add r0, r5, #0
    // mov r1, #2
    // bl ov40_0222C710
    // add r0, r5, #0
    // bl ov40_02236EB4
    // ldr r1, _02237AA0 ; =0x00000113
    // add r0, r5, #0
    // bl ov40_02237030
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x6d
    // str r0, [sp, #0xc]
    // ldr r0, [r5, #0x14]
    // ldr r2, [r5, #0x24]
    // mov r1, #0x3e
    // mov r3, #7
    // bl GfGfxLoader_LoadCharDataFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x6d
    // str r0, [sp, #0xc]
    // ldr r0, [r5, #0x14]
    // ldr r2, [r5, #0x24]
    // mov r1, #0x4f
    // mov r3, #7
    // bl GfGfxLoader_LoadScrnDataFromOpenNarc
    // add r0, r5, #0
    // bl ov40_02236F38
    // add r0, r5, #0
    // mov r1, #1
    // bl ov40_022368EC
    // add r0, r5, #0
    // mov r1, #0
    // bl ov40_02230964
    // mov r0, #8
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #8
    // mov r1, #1
    // bl GfGfx_EngineBTogglePlanes
    // mov r0, #4
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #4
    // mov r1, #0
    // bl GfGfx_EngineBTogglePlanes
    // ldr r0, [r5, #8]
    // add r0, r0, #1
    // str r0, [r5, #8]
    // b _02237A98
    // mov r1, #0x69
    // lsl r1, r1, #2
    // add r0, r4, r1
    // add r1, r1, #4
    // mov r2, #0
    // add r1, r4, r1
    // add r3, r2, #0
    // bl ov40_0222DA00
    // cmp r0, #0
    // beq _02237A98
    // mov r0, #1
    // add r1, r0, #0
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #4
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #4
    // mov r1, #1
    // bl GfGfx_EngineBTogglePlanes
    // ldr r0, _02237AA4 ; =0x04000050
    // mov r1, #0
    // strh r1, [r0]
    // ldr r0, [r5, #8]
    // add r0, r0, #1
    // str r0, [r5, #8]
    // b _02237A98
    // mov r0, #0x6b
    // lsl r0, r0, #2
    // add r0, r4, r0
    // mov r1, #0
    // bl ov40_0222DA84
    // cmp r0, #0
    // beq _02237A7C
    // mov r0, #0xce
    // lsl r0, r0, #2
    // ldr r1, [r4, r0]
    // add r0, #0xc
    // str r1, [r4, r0]
    // add r0, r5, #0
    // mov r1, #3
    // bl ov40_0222BF80
    // ldr r0, [r5, #0x58]
    // mov r3, #0x6b
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // lsl r3, r3, #2
    // ldr r3, [r4, r3]
    // ldr r0, [r5, #0x28]
    // lsl r3, r3, #0x18
    // mov r1, #3
    // mov r2, #0xc
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // mov r0, #0
    // add sp, #0x10
    // pop {r3, r4, r5, pc}
    // nop
    // _02237AA0: .word 0x00000113
    // _02237AA4: .word 0x04000050
    // TODO: decompile
}




void ov40_02237AA8(void) {
}




void ov40_02237AC0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x28
    // mov r1, #0x86
    // lsl r1, r1, #4
    // str r0, [sp, #0x14]
    // ldr r0, [r0, r1]
    // ldr r1, _02237B70 ; =ov40_02245268
    // ldr r5, _02237B74 ; =ov40_02245274
    // ldr r2, [r1, #0x14]
    // ldr r1, [r1, #0x18]
    // mov r7, #1
    // str r1, [sp, #0x24]
    // mov r1, #0
    // str r1, [sp, #0x18]
    // mov r1, #0x8d
    // lsl r1, r1, #2
    // add r6, sp, #0x20
    // str r2, [sp, #0x20]
    // add r4, r0, r1
    // add r0, r4, #0
    // bl InitWindow
    // ldrb r0, [r5, #1]
    // add r1, r4, #0
    // mov r2, #6
    // str r0, [sp]
    // ldrb r0, [r5, #2]
    // str r0, [sp, #4]
    // ldrb r0, [r5, #3]
    // str r0, [sp, #8]
    // mov r0, #0xe
    // str r0, [sp, #0xc]
    // lsl r0, r7, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x14]
    // ldrb r3, [r5]
    // ldr r0, [r0, #0x24]
    // bl AddWindowParameterized
    // add r0, r4, #0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // ldr r0, [sp, #0x14]
    // ldr r1, [r6]
    // ldr r0, [r0, #0x48]
    // bl NewString_ReadMsgData
    // str r0, [sp, #0x1c]
    // ldr r1, [sp, #0x1c]
    // add r0, r4, #0
    // bl ov40_022306C0
    // add r3, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _02237B78 ; =0x000F0D00
    // ldr r2, [sp, #0x1c]
    // str r0, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // add r0, r4, #0
    // mov r1, #0
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r4, #0
    // bl ScheduleWindowCopyToVram
    // ldrb r1, [r5, #2]
    // ldrb r0, [r5, #3]
    // mul r0, r1
    // add r7, r7, r0
    // ldr r0, [sp, #0x1c]
    // bl String_Delete
    // ldr r0, [sp, #0x18]
    // add r4, #0x10
    // add r0, r0, #1
    // add r5, r5, #4
    // add r6, r6, #4
    // str r0, [sp, #0x18]
    // cmp r0, #2
    // blt _02237AE6
    // add sp, #0x28
    // pop {r3, r4, r5, r6, r7, pc}
    // _02237B70: .word ov40_02245268
    // _02237B74: .word ov40_02245274
    // _02237B78: .word 0x000F0D00
    // TODO: decompile
}




void ov40_02237B7C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // mov r0, #0x86
    // lsl r0, r0, #4
    // mov r6, #0x8d
    // add r7, r1, #0
    // ldr r4, [r5, r0]
    // lsl r6, r6, #2
    // add r0, r4, r6
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // ldr r0, [r5, #0x48]
    // add r1, r7, #0
    // bl NewString_ReadMsgData
    // add r5, r0, #0
    // add r0, r4, r6
    // add r1, r5, #0
    // bl ov40_022306C0
    // mov r1, #0
    // add r3, r0, #0
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _02237BD0 ; =0x000F0D00
    // add r2, r5, #0
    // str r0, [sp, #8]
    // add r0, r4, r6
    // str r1, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r5, #0
    // bl String_Delete
    // add r0, r4, r6
    // bl ScheduleWindowCopyToVram
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // _02237BD0: .word 0x000F0D00
    // TODO: decompile
}




void ov40_02237BD4(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0x14
    // add r5, r0, #0
    // mov r0, #0x86
    // lsl r0, r0, #4
    // mov r6, #0x8d
    // ldr r4, [r5, r0]
    // lsl r6, r6, #2
    // add r0, r4, r6
    // bl InitWindow
    // mov r2, #6
    // str r2, [sp]
    // mov r0, #8
    // str r0, [sp, #4]
    // mov r0, #4
    // str r0, [sp, #8]
    // mov r0, #0xe
    // str r0, [sp, #0xc]
    // mov r0, #1
    // str r0, [sp, #0x10]
    // ldr r0, [r5, #0x24]
    // add r1, r4, r6
    // mov r3, #0xc
    // bl AddWindowParameterized
    // add r0, r4, r6
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // ldr r0, [r5, #0x48]
    // mov r1, #0x22
    // bl NewString_ReadMsgData
    // add r5, r0, #0
    // mov r0, #0
    // add r1, r5, #0
    // add r2, r0, #0
    // bl FontID_String_GetWidthMultiline
    // mov r1, #0x40
    // sub r0, r1, r0
    // mov r1, #0
    // lsr r3, r0, #1
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _02237C50 ; =0x000F0D00
    // add r2, r5, #0
    // str r0, [sp, #8]
    // add r0, r4, r6
    // str r1, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r4, r6
    // bl ScheduleWindowCopyToVram
    // add r0, r5, #0
    // bl String_Delete
    // add sp, #0x14
    // pop {r3, r4, r5, r6, pc}
    // _02237C50: .word 0x000F0D00
    // TODO: decompile
}




void ov40_02237C54(void) {
    // ldr r4, [r0, r1]
    // add r0, r4, r0
    ClearWindowTilemapAndCopyToVram((0x8d << 2), (0x86 << 4));
    // add r0, r4, r0
    RemoveWindow((0x8d << 2));
}




void ov40_02237C74(void) {
    // ldr r1, [r0, r1]
    // add r5, r1, r0
    ClearWindowTilemapAndCopyToVram(r5, (0x86 << 4));
    RemoveWindow(r5);
    // add r5, #0x10
}




void ov40_02237C9C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x28
    // mov r1, #0x86
    // lsl r1, r1, #4
    // str r0, [sp, #0x14]
    // ldr r0, [r0, r1]
    // mov r1, #0x6d
    // str r0, [sp, #0x24]
    // mov r0, #1
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x24]
    // lsl r1, r1, #2
    // ldr r5, _02237D60 ; =ov40_02245268
    // mov r7, #0
    // add r4, r0, r1
    // add r0, r4, #0
    // bl InitWindow
    // ldrb r0, [r5, #1]
    // add r1, r4, #0
    // mov r2, #2
    // str r0, [sp]
    // ldrb r0, [r5, #2]
    // str r0, [sp, #4]
    // ldrb r0, [r5, #3]
    // str r0, [sp, #8]
    // mov r0, #0xe
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x20]
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x14]
    // ldrb r3, [r5]
    // ldr r0, [r0, #0x24]
    // bl AddWindowParameterized
    // add r0, r4, #0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // cmp r7, #0
    // bne _02237D16
    // mov r1, #0xe
    // ldr r0, [sp, #0x14]
    // ldr r2, [sp, #0x24]
    // lsl r1, r1, #6
    // ldr r2, [r2, r1]
    // ldr r1, _02237D64 ; =0x00000136
    // ldr r0, [r0, #0x48]
    // add r1, r2, r1
    // bl NewString_ReadMsgData
    // add r6, r0, #0
    // add r0, r4, #0
    // add r1, r6, #0
    // bl ov40_022306C0
    // str r0, [sp, #0x1c]
    // mov r0, #0
    // str r0, [sp, #0x18]
    // cmp r6, #0
    // beq _02237D3C
    // ldr r0, [sp, #0x18]
    // ldr r3, [sp, #0x1c]
    // str r0, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _02237D68 ; =0x000F0D00
    // mov r1, #0
    // str r0, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // add r0, r4, #0
    // add r2, r6, #0
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r6, #0
    // bl String_Delete
    // add r0, r4, #0
    // bl ScheduleWindowCopyToVram
    // ldrb r1, [r5, #2]
    // ldrb r0, [r5, #3]
    // add r7, r7, #1
    // add r2, r1, #0
    // mul r2, r0
    // ldr r0, [sp, #0x20]
    // add r4, #0x10
    // add r0, r0, r2
    // add r5, r5, #4
    // str r0, [sp, #0x20]
    // cmp r7, #1
    // blo _02237CBA
    // add sp, #0x28
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02237D60: .word ov40_02245268
    // _02237D64: .word 0x00000136
    // _02237D68: .word 0x000F0D00
    // TODO: decompile
}




void ov40_02237D6C(void) {
    // ldr r1, [r0, r1]
    // add r5, r1, r0
    ClearWindowTilemapAndCopyToVram(r5, (0x86 << 4));
    RemoveWindow(r5);
    // add r5, #0x10
}




void ov40_02237D94(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0x14
    // mov r1, #0x86
    // add r4, r0, #0
    // lsl r1, r1, #4
    // ldr r5, [r4, r1]
    // bl ov40_0223D5CC
    // cmp r0, #0
    // bne _02237DAE
    // add sp, #0x14
    // mov r0, #0
    // pop {r3, r4, r5, r6, pc}
    // ldr r0, [r4, #8]
    // cmp r0, #8
    // bls _02237DB6
    // b _02238140
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _02237DC2: ; jump table
    // ldr r0, _02238124 ; =0x000006F4
    // mov r1, #0
    // ldr r0, [r4, r0]
    // bl sub_020879E0
    // add r0, r4, #0
    // bl ov40_02237008
    // add r0, r4, #0
    // bl ov40_02236FE0
    // ldr r0, [r4, #0x24]
    // mov r1, #2
    // bl BgClearTilemapBufferAndCommit
    // mov r2, #8
    // mov r1, #0x69
    // str r2, [sp]
    // mov r3, #0x12
    // str r3, [sp, #4]
    // mov r0, #1
    // lsl r1, r1, #2
    // str r0, [sp, #8]
    // add r0, r5, r1
    // add r1, r1, #4
    // add r1, r5, r1
    // bl ov40_0222D980
    // mov r0, #4
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // mov r0, #0x6b
    // lsl r0, r0, #2
    // add r0, r5, r0
    // mov r1, #1
    // bl ov40_0222DA84
    // mov r1, #0x69
    // lsl r1, r1, #2
    // add r0, r5, r1
    // add r1, r1, #4
    // add r1, r5, r1
    // mov r2, #1
    // mov r3, #0
    // bl ov40_0222DA00
    // cmp r0, #0
    // beq _02237E8A
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x6d
    // str r0, [sp, #0xc]
    // ldr r0, [r4, #0x14]
    // ldr r2, [r4, #0x24]
    // mov r1, #0x3e
    // mov r3, #3
    // bl GfGfxLoader_LoadCharDataFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x6d
    // str r0, [sp, #0xc]
    // mov r1, #3
    // ldr r0, [r4, #0x14]
    // ldr r2, [r4, #0x24]
    // add r3, r1, #0
    // bl GfGfxLoader_LoadScrnDataFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x6d
    // str r0, [sp, #0xc]
    // ldr r0, [r4, #0x14]
    // ldr r2, [r4, #0x24]
    // mov r1, #0x4e
    // mov r3, #7
    // bl GfGfxLoader_LoadScrnDataFromOpenNarc
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // ldr r0, [r4, #0x58]
    // mov r3, #0x6b
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // lsl r3, r3, #2
    // ldr r3, [r5, r3]
    // ldr r0, [r4, #0x28]
    // lsl r3, r3, #0x18
    // mov r1, #3
    // mov r2, #0xc
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // b _02238272
    // mov r1, #0x6f
    // lsl r1, r1, #4
    // ldr r1, [r4, r1]
    // add r0, r4, #0
    // mov r2, #0x80
    // mov r3, #0x60
    // bl ov40_0223077C
    // mov r0, #0x6f
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #1
    // bl sub_020879E0
    // mov r0, #0x6f
    // lsl r0, r0, #4
    // mov r1, #0x18
    // ldr r0, [r4, r0]
    // add r2, r1, #0
    // bl sub_02087A08
    // ldr r1, _02238128 ; =0x00000121
    // add r0, r4, #0
    // bl ov40_0222DED0
    // ldr r0, _0223812C ; =0x0000057D
    // bl PlaySE
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _02238272
    // add r0, r4, #0
    // bl ov40_0223D540
    // mov r1, #0xe
    // lsl r1, r1, #6
    // ldr r1, [r5, r1]
    // bl ov39_0222748C
    // cmp r0, #1
    // beq _02237EFE
    // b _02238272
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _02238272
    // add r0, r4, #0
    // bl ov40_0222DFB0
    // add r0, r4, #0
    // bl ov40_0223D540
    // add r1, sp, #0x10
    // bl ov39_02227D44
    // cmp r0, #1
    // ldr r0, _0223812C ; =0x0000057D
    // bne _02237F9A
    // mov r1, #0
    // bl StopSE
    // ldr r3, [sp, #0x10]
    // add r0, r4, #0
    // ldr r2, [r3, #0xc]
    // ldr r3, [r3, #4]
    // mov r1, #3
    // bl ov40_02230CDC
    // mov r0, #0xe2
    // mov r1, #0
    // lsl r0, r0, #2
    // str r1, [r5, r0]
    // ldr r0, _02238130 ; =0x00002F64
    // str r1, [r5, r0]
    // add r0, r4, #0
    // mov r1, #1
    // bl ov40_02230964
    // add r0, r4, #0
    // bl ov40_02236EB4
    // ldr r0, _02238124 ; =0x000006F4
    // mov r1, #0
    // ldr r0, [r4, r0]
    // bl sub_020879E0
    // mov r0, #0x6f
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl sub_020878B0
    // mov r0, #0x6f
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl sub_020879E0
    // mov r0, #0x6f
    // lsl r0, r0, #4
    // mov r1, #0
    // ldr r0, [r4, r0]
    // add r2, r1, #0
    // bl sub_02087A08
    // mov r0, #4
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // ldr r0, [r4, #0x24]
    // mov r1, #3
    // bl BgClearTilemapBufferAndCommit
    // add r0, r4, #0
    // mov r1, #0
    // bl ov40_02230964
    // mov r0, #7
    // str r0, [r4, #8]
    // b _02238272
    // mov r1, #0
    // bl StopSE
    // ldr r0, _02238134 ; =0x00000577
    // bl PlaySE
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _02238272
    // mov r0, #0x6f
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl sub_020879E0
    // mov r0, #0x6f
    // lsl r0, r0, #4
    // mov r1, #0
    // ldr r0, [r4, r0]
    // add r2, r1, #0
    // bl sub_02087A08
    // mov r0, #0xe2
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // cmp r0, #0
    // bne _02237FE6
    // ldr r0, [r4, #8]
    // ldr r1, _02238138 ; =0x00000126
    // add r0, r0, #1
    // str r0, [r4, #8]
    // mov r0, #0
    // str r0, [r4, #0xc]
    // add r0, r4, #0
    // bl ov40_0222DED0
    // b _02238272
    // mov r0, #0xff
    // str r0, [r4, #8]
    // b _02238272
    // ldr r0, [r4, #0xc]
    // add r0, r0, #1
    // str r0, [r4, #0xc]
    // cmp r0, #0x3c
    // bge _02237FFE
    // bl System_GetTouchNew
    // cmp r0, #1
    // bne _02238082
    // mov r0, #0
    // str r0, [r4, #0xc]
    // add r0, r4, #0
    // bl ov40_0222DFB0
    // ldr r0, _02238130 ; =0x00002F64
    // mov r1, #0
    // str r1, [r5, r0]
    // add r0, r4, #0
    // mov r1, #1
    // bl ov40_02230964
    // add r0, r4, #0
    // bl ov40_02236EB4
    // ldr r0, _02238124 ; =0x000006F4
    // mov r1, #0
    // ldr r0, [r4, r0]
    // bl sub_020879E0
    // mov r0, #0x6f
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl sub_020878B0
    // mov r0, #0x6f
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl sub_020879E0
    // mov r0, #0x6f
    // lsl r0, r0, #4
    // mov r1, #0
    // ldr r0, [r4, r0]
    // add r2, r1, #0
    // bl sub_02087A08
    // mov r0, #4
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // ldr r0, [r4, #0x24]
    // mov r1, #3
    // bl BgClearTilemapBufferAndCommit
    // add r0, r4, #0
    // mov r1, #0
    // bl ov40_02230964
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _02238272
    // mov r1, #0x69
    // lsl r1, r1, #2
    // add r0, r5, r1
    // add r1, r1, #4
    // add r1, r5, r1
    // mov r2, #1
    // mov r3, #0
    // bl ov40_0222DA00
    // cmp r0, #0
    // bne _02238084
    // b _02238272
    // mov r0, #4
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #4
    // mov r1, #0
    // bl GfGfx_EngineBTogglePlanes
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x6d
    // str r0, [sp, #0xc]
    // ldr r0, [r4, #0x14]
    // ldr r2, [r4, #0x24]
    // mov r1, #0x4f
    // mov r3, #7
    // bl GfGfxLoader_LoadScrnDataFromOpenNarc
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _02238272
    // mov r0, #0x6b
    // lsl r0, r0, #2
    // add r0, r5, r0
    // mov r1, #0
    // bl ov40_0222DA84
    // mov r1, #0x69
    // lsl r1, r1, #2
    // add r0, r5, r1
    // add r1, r1, #4
    // add r1, r5, r1
    // mov r2, #0
    // mov r3, #2
    // bl ov40_0222DA00
    // cmp r0, #0
    // beq _02238104
    // add r0, r4, #0
    // mov r1, #2
    // bl ov40_0222C710
    // ldr r1, _0223813C ; =0x00000113
    // add r0, r4, #0
    // bl ov40_02237030
    // add r0, r4, #0
    // bl ov40_02236F38
    // mov r0, #4
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #4
    // mov r1, #1
    // bl GfGfx_EngineBTogglePlanes
    // add r0, r4, #0
    // mov r1, #3
    // bl ov40_0222BF80
    // ldr r0, [r4, #0x58]
    // mov r3, #0x6b
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // lsl r3, r3, #2
    // ldr r3, [r5, r3]
    // ldr r0, [r4, #0x28]
    // lsl r3, r3, #0x18
    // mov r1, #3
    // mov r2, #0xc
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // b _02238272
    // nop
    // _02238124: .word 0x000006F4
    // _02238128: .word 0x00000121
    // _0223812C: .word 0x0000057D
    // _02238130: .word 0x00002F64
    // _02238134: .word 0x00000577
    // _02238138: .word 0x00000126
    // _0223813C: .word 0x00000113
    // mov r0, #0x6b
    // lsl r0, r0, #2
    // add r0, r5, r0
    // mov r1, #0
    // bl ov40_0222DA84
    // mov r1, #0x69
    // lsl r1, r1, #2
    // add r0, r5, r1
    // add r1, r1, #4
    // mov r2, #0
    // add r1, r5, r1
    // add r3, r2, #0
    // bl ov40_0222DA00
    // cmp r0, #0
    // beq _0223823A
    // add r0, r4, #0
    // bl ov40_02237C9C
    // add r0, r4, #0
    // bl ov40_02238290
    // add r0, r4, #0
    // mov r1, #1
    // bl ov40_02230964
    // ldr r0, _02238278 ; =0x00002EAC
    // ldr r3, _0223827C ; =ov40_02245310
    // add r2, r5, r0
    // mov r6, #5
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // sub r6, r6, #1
    // bne _0223817E
    // ldr r0, [r3]
    // mov r1, #0xe2
    // str r0, [r2]
    // lsl r1, r1, #2
    // ldr r2, [r5, r1]
    // ldr r0, _02238280 ; =0x00002EB0
    // add r1, #0xf4
    // str r2, [r5, r0]
    // add r0, r4, r1
    // add r1, r4, #0
    // mov r2, #2
    // bl ov40_0222F9E0
    // ldr r0, _02238284 ; =0x0000049C
    // add r0, r4, r0
    // bl ov40_0222F734
    // ldr r3, _02238278 ; =0x00002EAC
    // ldr r0, _02238284 ; =0x0000049C
    // add r2, r5, r3
    // sub r3, #0xa0
    // add r0, r4, r0
    // add r1, r4, #0
    // add r3, r5, r3
    // bl ov40_0222EED0
    // ldr r1, _02238288 ; =0x0000047C
    // add r0, r4, r1
    // add r1, #0x20
    // add r1, r4, r1
    // bl ov40_0222FA5C
    // ldr r0, _02238284 ; =0x0000049C
    // add r1, r4, #0
    // add r0, r4, r0
    // mov r2, #1
    // bl ov40_0222F740
    // ldr r0, _02238284 ; =0x0000049C
    // mov r1, #0x38
    // add r0, r4, r0
    // mov r2, #0xb0
    // bl ov40_0222F858
    // add r0, r4, #0
    // mov r1, #0
    // bl ov40_02230964
    // add r0, r4, #0
    // bl ov40_02237AC0
    // mov r0, #4
    // mov r1, #1
    // bl GfGfx_EngineBTogglePlanes
    // mov r0, #4
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // ldr r3, _0223828C ; =0x000004D8
    // mov r1, #0x6f
    // ldr r6, [r4, r3]
    // mov r3, #0x18
    // mul r3, r6
    // lsl r1, r1, #4
    // add r3, #0x44
    // lsl r3, r3, #0x10
    // ldr r1, [r4, r1]
    // add r0, r4, #0
    // mov r2, #0x10
    // asr r3, r3, #0x10
    // bl ov40_0223077C
    // mov r0, #0x6f
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #1
    // bl sub_020879E0
    // mov r0, #0x6f
    // lsl r0, r0, #4
    // mov r1, #0xc
    // ldr r0, [r4, r0]
    // add r2, r1, #0
    // bl sub_02087A08
    // add r0, r4, #0
    // mov r1, #5
    // bl ov40_0222BF80
    // ldr r0, [r4, #0x58]
    // mov r3, #0x6b
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // lsl r3, r3, #2
    // ldr r3, [r5, r3]
    // ldr r0, [r4, #0x28]
    // lsl r3, r3, #0x18
    // mov r1, #3
    // mov r2, #0xc
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // ldr r0, [r4, #0x58]
    // mov r3, #0x6b
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // lsl r3, r3, #2
    // ldr r3, [r5, r3]
    // ldr r0, [r4, #0x28]
    // lsl r3, r3, #0x18
    // mov r1, #2
    // mov r2, #0xc
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // mov r0, #0
    // add sp, #0x14
    // pop {r3, r4, r5, r6, pc}
    // _02238278: .word 0x00002EAC
    // _0223827C: .word ov40_02245310
    // _02238280: .word 0x00002EB0
    // _02238284: .word 0x0000049C
    // _02238288: .word 0x0000047C
    // _0223828C: .word 0x000004D8
    // TODO: decompile
}




void ov40_02238290(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // mov r1, #0x86
    // lsl r1, r1, #4
    // str r0, [sp]
    // ldr r7, [r0, r1]
    // mov r0, #0xe2
    // lsl r0, r0, #2
    // ldr r0, [r7, r0]
    // mov r6, #0
    // cmp r0, #0
    // ble _022382FA
    // add r4, r7, #0
    // add r5, r7, #0
    // mov r0, #0x14
    // mov r1, #0x6d
    // bl String_New
    // ldr r1, _022382FC ; =0x00002E10
    // str r0, [r4, r1]
    // add r0, r1, #0
    // mov r1, #0xe3
    // lsl r1, r1, #2
    // ldr r0, [r4, r0]
    // ldr r1, [r5, r1]
    // bl CopyU16ArrayToString
    // ldr r1, _022382FC ; =0x00002E10
    // ldr r0, [sp]
    // ldr r1, [r4, r1]
    // bl ov40_02230DCC
    // mov r0, #0x1e
    // mov r1, #0x6d
    // bl String_New
    // ldr r1, _02238300 ; =0x00002E0C
    // str r0, [r4, r1]
    // add r0, r1, #0
    // mov r1, #0xe3
    // lsl r1, r1, #2
    // ldr r1, [r5, r1]
    // ldr r0, [r4, r0]
    // add r1, #0x80
    // bl CopyU16ArrayToString
    // mov r0, #0xe2
    // lsl r0, r0, #2
    // ldr r0, [r7, r0]
    // add r6, r6, #1
    // add r4, #8
    // add r5, r5, #4
    // cmp r6, r0
    // blt _022382AA
    // pop {r3, r4, r5, r6, r7, pc}
    // _022382FC: .word 0x00002E10
    // _02238300: .word 0x00002E0C
    // TODO: decompile
}




void ov40_02238304(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // mov r1, #0x86
    // lsl r1, r1, #4
    // ldr r6, [r0, r1]
    // mov r0, #0xe2
    // lsl r0, r0, #2
    // ldr r0, [r6, r0]
    // mov r4, #0
    // cmp r0, #0
    // ble _0223834C
    // add r5, r6, #0
    // add r7, r4, #0
    // ldr r0, _02238350 ; =0x00002E0C
    // ldr r0, [r5, r0]
    // cmp r0, #0
    // beq _0223832C
    // bl String_Delete
    // ldr r0, _02238350 ; =0x00002E0C
    // str r7, [r5, r0]
    // ldr r0, _02238354 ; =0x00002E10
    // ldr r0, [r5, r0]
    // cmp r0, #0
    // beq _0223833E
    // bl String_Delete
    // ldr r0, _02238354 ; =0x00002E10
    // mov r1, #0
    // str r1, [r5, r0]
    // mov r0, #0xe2
    // lsl r0, r0, #2
    // ldr r0, [r6, r0]
    // add r4, r4, #1
    // add r5, #8
    // cmp r4, r0
    // blt _0223831C
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02238350: .word 0x00002E0C
    // _02238354: .word 0x00002E10
    // TODO: decompile
}




void ov40_02238358(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // mov r0, #0x86
    // lsl r0, r0, #4
    // ldr r4, [r5, r0]
    // ldr r0, _022383B4 ; =0x00002F64
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // bne _022383A6
    // ldr r0, _022383B8 ; =0x0000047C
    // add r0, r5, r0
    // bl ov40_0222FA88
    // ldr r1, _022383BC ; =0x0000049C
    // add r0, r5, r1
    // sub r1, #0x10
    // ldrsh r1, [r5, r1]
    // bl ov40_0222F5EC
    // ldr r0, _022383BC ; =0x0000049C
    // ldr r2, _022383C0 ; =0x00002E0C
    // add r0, r5, r0
    // add r1, r5, #0
    // add r2, r4, r2
    // bl ov40_0222EFD8
    // ldr r2, _022383C4 ; =0x000004D8
    // mov r0, #0x6f
    // ldr r3, [r5, r2]
    // mov r2, #0x18
    // mul r2, r3
    // lsl r0, r0, #4
    // add r2, #0x44
    // lsl r2, r2, #0x10
    // ldr r0, [r5, r0]
    // mov r1, #0x10
    // asr r2, r2, #0x10
    // bl sub_020878EC
    // mov r0, #0xcf
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl TouchHitboxController_IsTriggered
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // _022383B4: .word 0x00002F64
    // _022383B8: .word 0x0000047C
    // _022383BC: .word 0x0000049C
    // _022383C0: .word 0x00002E0C
    // _022383C4: .word 0x000004D8
    // TODO: decompile
}




void ov40_022383C8(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x10
    // mov r1, #0x86
    // add r5, r0, #0
    // lsl r1, r1, #4
    // ldr r4, [r5, r1]
    // ldr r1, [r5, #8]
    // cmp r1, #0
    // beq _022383E6
    // cmp r1, #1
    // beq _022384B4
    // cmp r1, #2
    // bne _022383E4
    // b _022384EA
    // b _0223852E
    // bl ov40_02238304
    // add r0, r5, #0
    // bl ov40_02237C74
    // ldr r0, _02238534 ; =0x00002F64
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // bne _0223842A
    // add r0, r5, #0
    // bl ov40_02237D6C
    // add r0, r5, #0
    // mov r1, #1
    // bl ov40_02230964
    // ldr r0, _02238538 ; =0x0000047C
    // add r0, r5, r0
    // bl ov40_0222FA24
    // ldr r0, _0223853C ; =0x0000049C
    // add r0, r5, r0
    // bl ov40_0222F720
    // ldr r0, _0223853C ; =0x0000049C
    // add r1, r5, #0
    // add r0, r5, r0
    // bl ov40_0222F920
    // add r0, r5, #0
    // mov r1, #0
    // bl ov40_02230964
    // b _0223844A
    // add r0, r5, #0
    // mov r1, #1
    // bl ov40_02230964
    // ldr r0, _02238540 ; =0x00002ED8
    // add r1, r5, #0
    // add r0, r4, r0
    // bl ov40_0222E7B8
    // add r0, r5, #0
    // bl ov40_022361B0
    // add r0, r5, #0
    // mov r1, #0
    // bl ov40_02230964
    // ldr r0, _02238534 ; =0x00002F64
    // mov r1, #0
    // str r1, [r4, r0]
    // add r0, r5, #0
    // mov r1, #1
    // bl ov40_02230964
    // add r0, r5, #0
    // bl ov40_02236EB4
    // add r0, r5, #0
    // mov r1, #0xff
    // bl ov40_0223707C
    // ldr r0, _02238544 ; =0x000006F4
    // mov r1, #0
    // ldr r0, [r5, r0]
    // bl sub_020879E0
    // mov r0, #0x6f
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // mov r1, #0
    // bl sub_020878B0
    // mov r0, #0x6f
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // mov r1, #0
    // bl sub_020879E0
    // mov r0, #0x6f
    // lsl r0, r0, #4
    // mov r1, #0
    // ldr r0, [r5, r0]
    // add r2, r1, #0
    // bl sub_02087A08
    // mov r0, #4
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // ldr r0, [r5, #0x24]
    // mov r1, #3
    // bl BgClearTilemapBufferAndCommit
    // add r0, r5, #0
    // mov r1, #0
    // bl ov40_02230964
    // ldr r0, [r5, #8]
    // add r0, r0, #1
    // str r0, [r5, #8]
    // mov r1, #0x69
    // lsl r1, r1, #2
    // add r0, r4, r1
    // add r1, r1, #4
    // add r1, r4, r1
    // mov r2, #1
    // mov r3, #0
    // bl ov40_0222DA00
    // cmp r0, #0
    // beq _0223852E
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x6d
    // str r0, [sp, #0xc]
    // ldr r0, [r5, #0x14]
    // ldr r2, [r5, #0x24]
    // mov r1, #0x4f
    // mov r3, #7
    // bl GfGfxLoader_LoadScrnDataFromOpenNarc
    // ldr r0, [r5, #8]
    // add r0, r0, #1
    // str r0, [r5, #8]
    // b _0223852E
    // mov r1, #0x69
    // lsl r1, r1, #2
    // add r0, r4, r1
    // add r1, r1, #4
    // add r1, r4, r1
    // mov r2, #0
    // mov r3, #2
    // bl ov40_0222DA00
    // cmp r0, #0
    // beq _0223852E
    // add r0, r5, #0
    // mov r1, #2
    // bl ov40_0222C710
    // mov r0, #4
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #4
    // mov r1, #1
    // bl GfGfx_EngineBTogglePlanes
    // ldr r1, _02238548 ; =0x00000113
    // add r0, r5, #0
    // bl ov40_02237030
    // add r0, r5, #0
    // bl ov40_02236F38
    // add r0, r5, #0
    // mov r1, #3
    // bl ov40_0222BF80
    // mov r0, #0
    // add sp, #0x10
    // pop {r3, r4, r5, pc}
    // _02238534: .word 0x00002F64
    // _02238538: .word 0x0000047C
    // _0223853C: .word 0x0000049C
    // _02238540: .word 0x00002ED8
    // _02238544: .word 0x000006F4
    // _02238548: .word 0x00000113
    // TODO: decompile
}




void ov40_0223854C(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x10
    // mov r1, #0x86
    // add r4, r0, #0
    // lsl r1, r1, #4
    // ldr r5, [r4, r1]
    // ldr r1, [r4, #8]
    // cmp r1, #3
    // bls _02238560
    // b _0223871A
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _0223856C: ; jump table
    // bl ov40_02237C74
    // ldr r0, _022387FC ; =0x00002F64
    // ldr r0, [r5, r0]
    // cmp r0, #0
    // bne _022385B2
    // add r0, r4, #0
    // bl ov40_02237D6C
    // add r0, r4, #0
    // mov r1, #1
    // bl ov40_02230964
    // ldr r0, _02238800 ; =0x0000047C
    // add r0, r4, r0
    // bl ov40_0222FA24
    // ldr r0, _02238804 ; =0x0000049C
    // add r0, r4, r0
    // bl ov40_0222F720
    // ldr r0, _02238804 ; =0x0000049C
    // add r1, r4, #0
    // add r0, r4, r0
    // bl ov40_0222F920
    // add r0, r4, #0
    // mov r1, #0
    // bl ov40_02230964
    // b _022385D2
    // add r0, r4, #0
    // mov r1, #1
    // bl ov40_02230964
    // ldr r0, _02238808 ; =0x00002ED8
    // add r1, r4, #0
    // add r0, r5, r0
    // bl ov40_0222E7B8
    // add r0, r4, #0
    // bl ov40_022361B0
    // add r0, r4, #0
    // mov r1, #0
    // bl ov40_02230964
    // ldr r0, _0223880C ; =0x000006F4
    // mov r1, #0
    // ldr r0, [r4, r0]
    // bl sub_020879E0
    // mov r0, #0x6f
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl sub_020878B0
    // mov r0, #0x6f
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl sub_020879E0
    // mov r0, #0x6f
    // lsl r0, r0, #4
    // mov r1, #0
    // ldr r0, [r4, r0]
    // add r2, r1, #0
    // bl sub_02087A08
    // mov r0, #4
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // mov r1, #0x69
    // lsl r1, r1, #2
    // add r0, r5, r1
    // add r1, r1, #4
    // add r1, r5, r1
    // mov r2, #1
    // mov r3, #0
    // bl ov40_0222DA00
    // cmp r0, #0
    // beq _022386DC
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _022387F4
    // mov r1, #1
    // bl ov40_02230964
    // ldr r0, _02238810 ; =0x000004D4
    // add r3, r5, #4
    // ldr r0, [r4, r0]
    // mov r2, #0x33
    // lsl r0, r0, #2
    // add r1, r5, r0
    // mov r0, #0xe3
    // lsl r0, r0, #2
    // ldr r6, [r1, r0]
    // add r6, #0x80
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // sub r2, r2, #1
    // bne _02238648
    // ldr r0, [r6]
    // str r0, [r3]
    // add r0, r5, #0
    // bl ov40_0223655C
    // add r0, r4, #0
    // mov r1, #2
    // bl ov40_0222C710
    // add r0, r4, #0
    // bl ov40_02236EB4
    // add r0, r4, #0
    // bl ov40_0223757C
    // add r0, r4, #0
    // mov r1, #0xff
    // bl ov40_0223707C
    // add r0, r4, #0
    // mov r1, #1
    // bl ov40_02237548
    // add r0, r4, #0
    // mov r1, #0
    // bl ov40_022373E4
    // add r0, r4, #0
    // mov r1, #0
    // bl ov40_02230964
    // mov r0, #4
    // mov r1, #0
    // bl GfGfx_EngineBTogglePlanes
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x6d
    // str r0, [sp, #0xc]
    // ldr r0, [r4, #0x14]
    // ldr r2, [r4, #0x24]
    // mov r1, #0x4b
    // mov r3, #7
    // bl GfGfxLoader_LoadScrnDataFromOpenNarc
    // mov r0, #8
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #8
    // mov r1, #1
    // bl GfGfx_EngineBTogglePlanes
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _022387F4
    // mov r1, #0x69
    // lsl r1, r1, #2
    // add r0, r5, r1
    // add r1, r1, #4
    // mov r2, #0
    // add r1, r5, r1
    // add r3, r2, #0
    // bl ov40_0222DA00
    // cmp r0, #0
    // bne _022386DE
    // b _022387F4
    // add r0, r4, #0
    // mov r1, #0
    // bl ov40_02237548
    // add r0, r4, #0
    // mov r1, #1
    // bl ov40_022373E4
    // add r0, r4, #0
    // bl ov40_02237BD4
    // mov r0, #4
    // mov r1, #1
    // bl GfGfx_EngineBTogglePlanes
    // mov r0, #1
    // add r1, r0, #0
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #4
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // ldr r0, _02238814 ; =0x04000050
    // mov r1, #0
    // strh r1, [r0]
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _022387F4
    // mov r0, #0x6b
    // lsl r0, r0, #2
    // add r0, r5, r0
    // mov r1, #0
    // bl ov40_0222DA84
    // cmp r0, #0
    // beq _022387D8
    // mov r0, #0x33
    // lsl r0, r0, #4
    // ldr r1, [r5, r0]
    // add r0, #0x14
    // str r1, [r5, r0]
    // add r0, r5, #0
    // bl ov40_0223655C
    // mov r0, #0x1b
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // mov r1, #6
    // bl _s32_div_f
    // ldr r0, _02238818 ; =0x00002F68
    // str r1, [r5, r0]
    // mov r0, #0x1b
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // mov r1, #6
    // bl _s32_div_f
    // ldr r3, _0223881C ; =0x00002F6C
    // mov r1, #0x6f
    // str r0, [r5, r3]
    // sub r2, r3, #4
    // ldr r6, [r5, r2]
    // mov r2, #0x18
    // mul r2, r6
    // ldr r6, [r5, r3]
    // mov r3, #0x16
    // mul r3, r6
    // lsl r1, r1, #4
    // add r2, #0x6e
    // add r3, #0x34
    // lsl r2, r2, #0x10
    // lsl r3, r3, #0x10
    // ldr r1, [r4, r1]
    // add r0, r4, #0
    // asr r2, r2, #0x10
    // asr r3, r3, #0x10
    // bl ov40_0223077C
    // mov r0, #0x6f
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #1
    // bl sub_020879E0
    // mov r0, #0x6f
    // lsl r0, r0, #4
    // mov r1, #0xc
    // ldr r0, [r4, r0]
    // add r2, r1, #0
    // bl sub_02087A08
    // mov r0, #0x1b
    // lsl r0, r0, #4
    // ldr r2, [r5, r0]
    // lsl r1, r2, #1
    // add r1, r5, r1
    // ldrh r1, [r1, #0x2c]
    // cmp r1, #0
    // beq _022387D0
    // sub r0, #0x58
    // mov r1, #1
    // ldr r0, [r5, r0]
    // lsl r1, r2
    // bl ov40_022371D4
    // cmp r0, #1
    // beq _022387D0
    // mov r1, #0x1b
    // lsl r1, r1, #4
    // ldr r2, [r5, r1]
    // sub r1, #0x54
    // lsl r0, r2, #1
    // add r0, r5, r0
    // add r2, r5, r2
    // ldrh r0, [r0, #0x2c]
    // ldrb r1, [r2, r1]
    // bl PlayCry
    // add r0, r4, #0
    // mov r1, #0xa
    // bl ov40_0222BF80
    // ldr r0, [r4, #0x58]
    // mov r3, #0x6b
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // lsl r3, r3, #2
    // ldr r3, [r5, r3]
    // ldr r0, [r4, #0x28]
    // lsl r3, r3, #0x18
    // mov r1, #3
    // mov r2, #0xc
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // mov r0, #0
    // add sp, #0x10
    // pop {r4, r5, r6, pc}
    // nop
    // _022387FC: .word 0x00002F64
    // _02238800: .word 0x0000047C
    // _02238804: .word 0x0000049C
    // _02238808: .word 0x00002ED8
    // _0223880C: .word 0x000006F4
    // _02238810: .word 0x000004D4
    // _02238814: .word 0x04000050
    // _02238818: .word 0x00002F68
    // _0223881C: .word 0x00002F6C
    // TODO: decompile
}




void ov40_02238820(void) {
}




void ov40_02238838(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // mov r0, #0x86
    // lsl r0, r0, #4
    // ldr r4, [r5, r0]
    // ldr r0, [r5, #8]
    // cmp r0, #0
    // beq _02238854
    // cmp r0, #1
    // beq _0223889A
    // cmp r0, #2
    // beq _022388A6
    // b _0223891E
    // mov r2, #8
    // mov r1, #0x69
    // str r2, [sp]
    // mov r3, #0x12
    // str r3, [sp, #4]
    // mov r0, #1
    // lsl r1, r1, #2
    // str r0, [sp, #8]
    // add r0, r4, r1
    // add r1, r1, #4
    // add r1, r4, r1
    // bl ov40_0222D980
    // add r0, r5, #0
    // bl ov40_02237564
    // add r0, r5, #0
    // bl ov40_02237410
    // add r0, r5, #0
    // bl ov40_022371A0
    // ldr r0, [r5, #0x24]
    // mov r1, #2
    // bl BgClearTilemapBufferAndCommit
    // add r0, r5, #0
    // bl ov40_02237008
    // add r0, r5, #0
    // bl ov40_02237C54
    // ldr r0, [r5, #8]
    // add r0, r0, #1
    // str r0, [r5, #8]
    // ldr r0, _02238A38 ; =0x00002F64
    // mov r1, #0
    // str r1, [r4, r0]
    // ldr r0, [r5, #8]
    // add r0, r0, #1
    // str r0, [r5, #8]
    // mov r1, #0x69
    // lsl r1, r1, #2
    // add r0, r4, r1
    // add r1, r1, #4
    // add r1, r4, r1
    // mov r2, #1
    // mov r3, #0
    // bl ov40_0222DA00
    // cmp r0, #0
    // bne _022388BE
    // b _02238A30
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x6d
    // str r0, [sp, #0xc]
    // ldr r0, [r5, #0x14]
    // ldr r2, [r5, #0x24]
    // mov r1, #0x3e
    // mov r3, #3
    // bl GfGfxLoader_LoadCharDataFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x6d
    // str r0, [sp, #0xc]
    // mov r1, #3
    // ldr r0, [r5, #0x14]
    // ldr r2, [r5, #0x24]
    // add r3, r1, #0
    // bl GfGfxLoader_LoadScrnDataFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x6d
    // str r0, [sp, #0xc]
    // ldr r0, [r5, #0x14]
    // ldr r2, [r5, #0x24]
    // mov r1, #0x4e
    // mov r3, #7
    // bl GfGfxLoader_LoadScrnDataFromOpenNarc
    // mov r0, #4
    // mov r1, #0
    // bl GfGfx_EngineBTogglePlanes
    // mov r0, #4
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // ldr r0, [r5, #8]
    // add r0, r0, #1
    // str r0, [r5, #8]
    // b _02238A30
    // mov r1, #0x69
    // lsl r1, r1, #2
    // add r0, r4, r1
    // add r1, r1, #4
    // mov r2, #0
    // add r1, r4, r1
    // add r3, r2, #0
    // bl ov40_0222DA00
    // cmp r0, #0
    // beq _02238A30
    // add r0, r5, #0
    // mov r1, #1
    // bl ov40_02230964
    // mov r0, #0x6f
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // mov r1, #1
    // bl sub_020879E0
    // add r0, r5, #0
    // bl ov40_02237C9C
    // add r0, r5, #0
    // bl ov40_02237AC0
    // ldr r0, _02238A3C ; =0x0000047C
    // add r1, r5, #0
    // add r0, r5, r0
    // mov r2, #2
    // bl ov40_0222F9E0
    // ldr r3, _02238A40 ; =0x00002EAC
    // ldr r0, _02238A44 ; =0x0000049C
    // add r2, r4, r3
    // sub r3, #0xa0
    // add r0, r5, r0
    // add r1, r5, #0
    // add r3, r4, r3
    // bl ov40_0222EED0
    // ldr r1, _02238A3C ; =0x0000047C
    // add r0, r5, r1
    // add r1, #0x20
    // add r1, r5, r1
    // bl ov40_0222FA5C
    // ldr r0, _02238A44 ; =0x0000049C
    // add r1, r5, #0
    // add r0, r5, r0
    // mov r2, #1
    // bl ov40_0222F740
    // ldr r0, _02238A44 ; =0x0000049C
    // mov r1, #0x38
    // add r0, r5, r0
    // mov r2, #0xb0
    // bl ov40_0222F858
    // ldr r3, _02238A48 ; =0x000004D8
    // mov r1, #0x6f
    // ldr r6, [r5, r3]
    // mov r3, #0x18
    // mul r3, r6
    // lsl r1, r1, #4
    // add r3, #0x44
    // lsl r3, r3, #0x10
    // ldr r1, [r5, r1]
    // add r0, r5, #0
    // mov r2, #0x10
    // asr r3, r3, #0x10
    // bl ov40_0223077C
    // mov r0, #0x6f
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // mov r1, #1
    // bl sub_020879E0
    // mov r0, #0x6f
    // lsl r0, r0, #4
    // mov r1, #0xc
    // ldr r0, [r5, r0]
    // add r2, r1, #0
    // bl sub_02087A08
    // ldr r0, _02238A38 ; =0x00002F64
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // bne _02238A10
    // ldr r0, _02238A3C ; =0x0000047C
    // add r0, r5, r0
    // bl ov40_0222FA88
    // ldr r1, _02238A44 ; =0x0000049C
    // add r0, r5, r1
    // sub r1, #0x10
    // ldrsh r1, [r5, r1]
    // bl ov40_0222F5EC
    // ldr r0, _02238A44 ; =0x0000049C
    // ldr r2, _02238A4C ; =0x00002E0C
    // add r0, r5, r0
    // add r1, r5, #0
    // add r2, r4, r2
    // bl ov40_0222EFD8
    // ldr r2, _02238A48 ; =0x000004D8
    // mov r0, #0x6f
    // ldr r3, [r5, r2]
    // mov r2, #0x18
    // mul r2, r3
    // lsl r0, r0, #4
    // add r2, #0x44
    // lsl r2, r2, #0x10
    // ldr r0, [r5, r0]
    // mov r1, #0x10
    // asr r2, r2, #0x10
    // bl sub_020878EC
    // add r0, r5, #0
    // mov r1, #0
    // bl ov40_02230964
    // mov r0, #4
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #4
    // mov r1, #1
    // bl GfGfx_EngineBTogglePlanes
    // add r0, r5, #0
    // mov r1, #5
    // bl ov40_0222BF80
    // mov r0, #0
    // add sp, #0x10
    // pop {r4, r5, r6, pc}
    // nop
    // _02238A38: .word 0x00002F64
    // _02238A3C: .word 0x0000047C
    // _02238A40: .word 0x00002EAC
    // _02238A44: .word 0x0000049C
    // _02238A48: .word 0x000004D8
    // _02238A4C: .word 0x00002E0C
    // TODO: decompile
}




void ov40_02238A50(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // mov r0, #0x86
    // lsl r0, r0, #4
    // ldr r4, [r5, r0]
    // ldr r0, [r5, #8]
    // cmp r0, #0
    // beq _02238A6C
    // cmp r0, #1
    // beq _02238AD6
    // cmp r0, #2
    // beq _02238B52
    // b _02238B96
    // mov r0, #0x6f
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // mov r1, #0
    // bl sub_020879E0
    // ldr r0, _02238B9C ; =0x00002F64
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // bne _02238A86
    // add r0, r5, #0
    // bl ov40_02237D6C
    // ldr r0, _02238BA0 ; =0x0000047C
    // add r0, r5, r0
    // bl ov40_0222FA24
    // ldr r0, _02238BA4 ; =0x0000049C
    // add r0, r5, r0
    // bl ov40_0222F720
    // ldr r0, _02238BA4 ; =0x0000049C
    // add r1, r5, #0
    // add r0, r5, r0
    // bl ov40_0222F920
    // ldr r0, _02238B9C ; =0x00002F64
    // mov r1, #1
    // str r1, [r4, r0]
    // ldr r0, [r5, #0x24]
    // mov r1, #2
    // bl BgClearTilemapBufferAndCommit
    // mov r2, #8
    // mov r1, #0x69
    // str r2, [sp]
    // mov r3, #0x12
    // str r3, [sp, #4]
    // mov r0, #1
    // lsl r1, r1, #2
    // str r0, [sp, #8]
    // add r0, r4, r1
    // add r1, r1, #4
    // add r1, r4, r1
    // bl ov40_0222D980
    // mov r0, #4
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // ldr r0, [r5, #8]
    // add r0, r0, #1
    // str r0, [r5, #8]
    // mov r1, #0x69
    // lsl r1, r1, #2
    // add r0, r4, r1
    // add r1, r1, #4
    // mov r2, #1
    // add r1, r4, r1
    // add r3, r2, #0
    // bl ov40_0222DA00
    // cmp r0, #0
    // beq _02238B96
    // ldr r1, _02238BA8 ; =0x000004D4
    // add r0, r5, #0
    // ldr r1, [r5, r1]
    // bl ov40_02236184
    // add r0, r5, #0
    // mov r1, #1
    // bl ov40_02230964
    // ldr r0, _02238BAC ; =0x00002ED8
    // add r1, r5, #0
    // add r0, r4, r0
    // bl ov40_0222E79C
    // ldr r0, _02238BAC ; =0x00002ED8
    // mov r1, #0
    // add r0, r4, r0
    // bl ov40_0222E7DC
    // add r0, r5, #0
    // mov r1, #0
    // bl ov40_02230964
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x6d
    // str r0, [sp, #0xc]
    // ldr r0, [r5, #0x14]
    // ldr r2, [r5, #0x24]
    // mov r1, #0x3e
    // mov r3, #3
    // bl GfGfxLoader_LoadCharDataFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x6d
    // str r0, [sp, #0xc]
    // ldr r0, [r5, #0x14]
    // ldr r2, [r5, #0x24]
    // mov r1, #0x50
    // mov r3, #3
    // bl GfGfxLoader_LoadScrnDataFromOpenNarc
    // ldr r0, [r5, #8]
    // add r0, r0, #1
    // str r0, [r5, #8]
    // b _02238B96
    // mov r1, #0x69
    // lsl r1, r1, #2
    // add r0, r4, r1
    // add r1, r1, #4
    // add r1, r4, r1
    // mov r2, #0
    // mov r3, #1
    // bl ov40_0222DA00
    // cmp r0, #0
    // beq _02238B96
    // ldr r0, _02238BAC ; =0x00002ED8
    // mov r1, #1
    // add r0, r4, r0
    // bl ov40_0222E7DC
    // ldr r1, _02238B9C ; =0x00002F64
    // add r0, r5, #0
    // ldr r1, [r4, r1]
    // add r1, #0x79
    // bl ov40_02237B7C
    // mov r0, #4
    // mov r1, #1
    // bl GfGfx_EngineBTogglePlanes
    // mov r0, #4
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // add r0, r5, #0
    // mov r1, #5
    // bl ov40_0222BF80
    // mov r0, #0
    // add sp, #0x10
    // pop {r3, r4, r5, pc}
    // _02238B9C: .word 0x00002F64
    // _02238BA0: .word 0x0000047C
    // _02238BA4: .word 0x0000049C
    // _02238BA8: .word 0x000004D4
    // _02238BAC: .word 0x00002ED8
    // TODO: decompile
}




void ov40_02238BB0(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x10
    // mov r1, #0x86
    // add r5, r0, #0
    // lsl r1, r1, #4
    // ldr r4, [r5, r1]
    // ldr r1, [r5, #8]
    // cmp r1, #0
    // beq _02238BCC
    // cmp r1, #1
    // beq _02238BDA
    // cmp r1, #2
    // beq _02238BFE
    // b _02238C5E
    // ldr r0, _02238D40 ; =0x00002F64
    // mov r1, #0
    // str r1, [r4, r0]
    // ldr r0, [r5, #8]
    // add r0, r0, #1
    // str r0, [r5, #8]
    // b _02238D38
    // mov r1, #1
    // bl ov40_02230964
    // ldr r0, _02238D44 ; =0x00002ED8
    // add r1, r5, #0
    // add r0, r4, r0
    // bl ov40_0222E7B8
    // add r0, r5, #0
    // bl ov40_022361B0
    // add r0, r5, #0
    // mov r1, #0
    // bl ov40_02230964
    // ldr r0, [r5, #8]
    // add r0, r0, #1
    // str r0, [r5, #8]
    // mov r1, #0x69
    // lsl r1, r1, #2
    // add r0, r4, r1
    // add r1, r1, #4
    // mov r2, #1
    // add r1, r4, r1
    // add r3, r2, #0
    // bl ov40_0222DA00
    // cmp r0, #0
    // bne _02238C16
    // b _02238D38
    // ldr r0, [r5, #0x24]
    // mov r1, #2
    // bl BgClearTilemapBufferAndCommit
    // mov r0, #4
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x6d
    // str r0, [sp, #0xc]
    // ldr r0, [r5, #0x14]
    // ldr r2, [r5, #0x24]
    // mov r1, #0x3e
    // mov r3, #3
    // bl GfGfxLoader_LoadCharDataFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x6d
    // str r0, [sp, #0xc]
    // mov r1, #3
    // ldr r0, [r5, #0x14]
    // ldr r2, [r5, #0x24]
    // add r3, r1, #0
    // bl GfGfxLoader_LoadScrnDataFromOpenNarc
    // ldr r0, [r5, #8]
    // add r0, r0, #1
    // str r0, [r5, #8]
    // b _02238D38
    // mov r1, #0x69
    // lsl r1, r1, #2
    // add r0, r4, r1
    // add r1, r1, #4
    // add r1, r4, r1
    // mov r2, #0
    // mov r3, #1
    // bl ov40_0222DA00
    // cmp r0, #0
    // beq _02238D38
    // add r0, r5, #0
    // mov r1, #1
    // bl ov40_02230964
    // ldr r1, _02238D40 ; =0x00002F64
    // add r0, r5, #0
    // ldr r1, [r4, r1]
    // add r1, #0x79
    // bl ov40_02237B7C
    // add r0, r5, #0
    // bl ov40_02237C9C
    // ldr r0, _02238D48 ; =0x0000047C
    // add r1, r5, #0
    // add r0, r5, r0
    // mov r2, #2
    // bl ov40_0222F9E0
    // ldr r3, _02238D4C ; =0x00002EAC
    // ldr r0, _02238D50 ; =0x0000049C
    // add r2, r4, r3
    // sub r3, #0xa0
    // add r0, r5, r0
    // add r1, r5, #0
    // add r3, r4, r3
    // bl ov40_0222EED0
    // ldr r1, _02238D48 ; =0x0000047C
    // add r0, r5, r1
    // add r1, #0x20
    // add r1, r5, r1
    // bl ov40_0222FA5C
    // ldr r0, _02238D50 ; =0x0000049C
    // add r1, r5, #0
    // add r0, r5, r0
    // mov r2, #1
    // bl ov40_0222F740
    // ldr r0, _02238D50 ; =0x0000049C
    // mov r1, #0x38
    // add r0, r5, r0
    // mov r2, #0xb0
    // bl ov40_0222F858
    // ldr r0, _02238D40 ; =0x00002F64
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // bne _02238D14
    // ldr r0, _02238D48 ; =0x0000047C
    // add r0, r5, r0
    // bl ov40_0222FA88
    // ldr r1, _02238D50 ; =0x0000049C
    // add r0, r5, r1
    // sub r1, #0x10
    // ldrsh r1, [r5, r1]
    // bl ov40_0222F5EC
    // ldr r0, _02238D50 ; =0x0000049C
    // ldr r2, _02238D54 ; =0x00002E0C
    // add r0, r5, r0
    // add r1, r5, #0
    // add r2, r4, r2
    // bl ov40_0222EFD8
    // ldr r2, _02238D58 ; =0x000004D8
    // mov r0, #0x6f
    // ldr r3, [r5, r2]
    // mov r2, #0x18
    // mul r2, r3
    // lsl r0, r0, #4
    // add r2, #0x44
    // lsl r2, r2, #0x10
    // ldr r0, [r5, r0]
    // mov r1, #0x10
    // asr r2, r2, #0x10
    // bl sub_020878EC
    // mov r0, #0x6f
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // mov r1, #1
    // bl sub_020879E0
    // mov r0, #4
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // add r0, r5, #0
    // mov r1, #0
    // bl ov40_02230964
    // add r0, r5, #0
    // mov r1, #5
    // bl ov40_0222BF80
    // mov r0, #0
    // add sp, #0x10
    // pop {r3, r4, r5, pc}
    // nop
    // _02238D40: .word 0x00002F64
    // _02238D44: .word 0x00002ED8
    // _02238D48: .word 0x0000047C
    // _02238D4C: .word 0x00002EAC
    // _02238D50: .word 0x0000049C
    // _02238D54: .word 0x00002E0C
    // _02238D58: .word 0x000004D8
    // TODO: decompile
}




void ov40_02238D5C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // mov r1, #0x86
    // add r5, r0, #0
    // lsl r1, r1, #4
    // ldr r7, [r5, r1]
    // ldr r1, [r5, #8]
    // cmp r1, #0
    // beq _02238D72
    // cmp r1, #1
    // beq _02238DC8
    // b _02238E1E
    // mov r1, #1
    // bl ov40_02230964
    // add r0, r5, #0
    // bl ov40_02237008
    // add r0, r5, #0
    // bl ov40_02236534
    // ldr r0, _02238EB4 ; =0x000006F4
    // mov r1, #0
    // ldr r0, [r5, r0]
    // bl sub_020878B0
    // ldr r0, _02238EB4 ; =0x000006F4
    // mov r1, #0
    // ldr r0, [r5, r0]
    // bl sub_020879E0
    // mov r0, #0x6f
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // mov r1, #1
    // bl sub_020878B0
    // mov r0, #0x6f
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // mov r1, #0
    // bl sub_020879E0
    // add r0, r5, #0
    // mov r1, #0
    // bl ov40_02230964
    // add r0, r5, #0
    // mov r1, #1
    // bl ov40_0222FB90
    // ldr r0, [r5, #8]
    // add r0, r0, #1
    // str r0, [r5, #8]
    // b _02238EB0
    // bl ov40_0222FBB4
    // cmp r0, #0
    // beq _02238EB0
    // mov r6, #0
    // add r4, r7, #0
    // mov r0, #0x33
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // bl TouchHitboxController_Destroy
    // add r6, r6, #1
    // add r4, r4, #4
    // cmp r6, #5
    // blt _02238DD4
    // mov r0, #0x6b
    // lsl r0, r0, #2
    // add r0, r7, r0
    // bl ov40_0222DAA8
    // add r0, r5, #0
    // bl ov40_0222D88C
    // ldr r0, [r5, #0x24]
    // mov r1, #2
    // bl BgClearTilemapBufferAndCommit
    // ldr r0, [r5, #0x24]
    // mov r1, #6
    // bl BgClearTilemapBufferAndCommit
    // ldr r0, [r5, #0x24]
    // mov r1, #3
    // bl BgClearTilemapBufferAndCommit
    // ldr r0, [r5, #0x24]
    // mov r1, #7
    // bl BgClearTilemapBufferAndCommit
    // ldr r0, [r5, #8]
    // add r0, r0, #1
    // str r0, [r5, #8]
    // b _02238EB0
    // mov r0, #0x6b
    // lsl r0, r0, #2
    // add r0, r7, r0
    // mov r1, #0
    // bl ov40_0222DA84
    // cmp r0, #0
    // beq _02238E78
    // add r0, r5, #0
    // bl ov40_0222DD08
    // mov r0, #0x6b
    // lsl r0, r0, #2
    // add r0, r7, r0
    // bl ov40_0222DAA8
    // ldr r0, [r5, #0x58]
    // mov r1, #2
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r0, [r5, #0x28]
    // mov r2, #0xc
    // mov r3, #0x10
    // bl PaletteData_BlendPalettes
    // mov r1, #1
    // ldr r3, [r5, #0x10]
    // add r0, r5, #0
    // add r2, r1, #0
    // bl ov40_0222BF64
    // add r0, r5, #0
    // mov r1, #5
    // bl ov40_0222BF80
    // mov r0, #0xe1
    // lsl r0, r0, #2
    // ldr r0, [r7, r0]
    // bl sub_020314BC
    // add r0, r7, #0
    // bl Heap_Free
    // b _02238EB0
    // ldr r0, [r5, #0x58]
    // mov r3, #0x6b
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // lsl r3, r3, #2
    // ldr r3, [r7, r3]
    // ldr r0, [r5, #0x28]
    // lsl r3, r3, #0x18
    // mov r1, #1
    // mov r2, #2
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // ldr r0, [r5, #0x58]
    // mov r3, #0x6b
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // lsl r3, r3, #2
    // ldr r3, [r7, r3]
    // ldr r0, [r5, #0x28]
    // lsl r3, r3, #0x18
    // mov r1, #3
    // mov r2, #0xc
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // _02238EB4: .word 0x000006F4
    // TODO: decompile
}




void ov40_02238EB8(void) {
    // bx lr
    // TODO: decompile
}




void ov40_02238EBC(void) {
    // push {r4, lr}
    // mov r2, #0x86
    // lsl r2, r2, #4
    // ldr r1, [r1]
    // ldr r4, [r0, r2]
    // cmp r1, #1
    // bne _02238ED4
    // mov r0, #0xe2
    // mov r1, #0
    // lsl r0, r0, #2
    // str r1, [r4, r0]
    // pop {r4, pc}
    // bl ov40_0223D540
    // mov r1, #0xe3
    // lsl r1, r1, #2
    // add r1, r4, r1
    // mov r2, #0x14
    // bl ov39_02227F14
    // mov r1, #0xe2
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // add r0, r1, #4
    // add r1, #0x54
    // ldr r2, _02238EFC ; =0x00002A30
    // add r0, r4, r0
    // add r1, r4, r1
    // bl MI_CpuCopy8
    // pop {r4, pc}
    // nop
    // _02238EFC: .word 0x00002A30
    // TODO: decompile
}




void ov40_02238F00(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0xc
    // add r5, r0, #0
    // mov r0, #0x86
    // lsl r0, r0, #4
    // ldr r4, [r5, r0]
    // ldr r0, [r4, #0x1c]
    // cmp r0, #0
    // ldr r0, _02238FD4 ; =0x00000B0C
    // bne _02238F2E
    // ldr r3, _02238FD8 ; =ov40_02245418
    // add r2, r4, r0
    // mov r6, #5
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // sub r6, r6, #1
    // bne _02238F1A
    // ldr r0, [r3]
    // mov r1, #0
    // str r0, [r2]
    // ldr r0, _02238FDC ; =0x00000748
    // str r1, [r4, r0]
    // b _02238F5A
    // ldr r3, _02238FE0 ; =ov40_02245444
    // add r2, r4, r0
    // mov r6, #5
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // sub r6, r6, #1
    // bne _02238F34
    // ldr r0, [r3]
    // ldr r1, _02238FE4 ; =0x00000714
    // str r0, [r2]
    // ldr r3, [r4, r1]
    // mov r1, #0x72
    // ldr r2, [r4, #0xc]
    // lsl r1, r1, #2
    // mul r1, r2
    // ldrb r1, [r3, r1]
    // ldr r0, [r5, #0x4c]
    // add r1, #0x5e
    // bl NewString_ReadMsgData
    // ldr r1, _02238FDC ; =0x00000748
    // str r0, [r4, r1]
    // mov r1, #0xb1
    // ldr r0, [r4, #0x20]
    // lsl r1, r1, #4
    // str r0, [r4, r1]
    // ldr r3, [r4, #0xc]
    // ldr r0, _02238FE8 ; =0x0000074C
    // lsl r2, r3, #2
    // add r2, r3, r2
    // add r0, r4, r0
    // lsl r2, r2, #6
    // add r2, r0, r2
    // sub r0, r1, #4
    // str r2, [r4, r0]
    // add r0, r5, #0
    // mov r1, #1
    // bl ov40_02230964
    // ldr r0, _02238FEC ; =0x0000049C
    // add r0, r5, r0
    // bl ov40_0222F734
    // ldr r0, [r4, #0xc]
    // ldr r3, _02238FD4 ; =0x00000B0C
    // str r0, [sp]
    // ldr r0, [r4, #0x14]
    // ldr r2, _02238FDC ; =0x00000748
    // str r0, [sp, #4]
    // ldr r0, [r4, r2]
    // sub r2, r2, #4
    // str r0, [sp, #8]
    // ldr r0, _02238FEC ; =0x0000049C
    // ldr r2, [r4, r2]
    // add r0, r5, r0
    // add r1, r5, #0
    // add r3, r4, r3
    // bl ov40_0222EB9C
    // ldr r1, _02238FF0 ; =0x0000047C
    // add r0, r5, r1
    // add r1, #0x20
    // add r1, r5, r1
    // bl ov40_0222FA5C
    // ldr r0, _02238FEC ; =0x0000049C
    // add r1, r5, #0
    // add r0, r5, r0
    // mov r2, #1
    // bl ov40_0222F740
    // ldr r0, _02238FEC ; =0x0000049C
    // mov r1, #0x70
    // add r0, r5, r0
    // mov r2, #0xb8
    // bl ov40_0222F858
    // add r0, r5, #0
    // mov r1, #0
    // bl ov40_02230964
    // add sp, #0xc
    // pop {r3, r4, r5, r6, pc}
    // _02238FD4: .word 0x00000B0C
    // _02238FD8: .word ov40_02245418
    // _02238FDC: .word 0x00000748
    // _02238FE0: .word ov40_02245444
    // _02238FE4: .word 0x00000714
    // _02238FE8: .word 0x0000074C
    // _02238FEC: .word 0x0000049C
    // _02238FF0: .word 0x0000047C
    // TODO: decompile
}




void ov40_02238FF4(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // mov r1, #0x86
    // lsl r1, r1, #4
    // ldr r4, [r0, r1]
    // ldr r0, _02239314 ; =0x00000714
    // add r1, r4, #0
    // add r1, #0xe0
    // str r1, [r4, r0]
    // add r1, r0, #0
    // sub r1, #0xdc
    // add r1, r4, r1
    // add r0, r0, #4
    // str r1, [r4, r0]
    // ldr r0, [r4, #0x14]
    // cmp r0, #0
    // beq _02239026
    // cmp r0, #1
    // bne _0223901C
    // b _02239120
    // cmp r0, #2
    // bne _02239022
    // b _0223920C
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // mov r6, #0
    // add r5, r6, #0
    // str r6, [sp]
    // ldr r0, [r4, #0x1c]
    // ldr r1, [r4, #0xc]
    // cmp r0, #0
    // bne _02239084
    // lsl r0, r1, #2
    // add r0, r1, r0
    // lsl r0, r0, #6
    // add r0, r4, r0
    // add r2, r5, r0
    // ldr r1, _02239318 ; =0x00002710
    // ldr r0, _0223931C ; =0x0000074C
    // str r1, [r2, r0]
    // sub r0, #0x34
    // ldr r2, [r4, r0]
    // ldr r1, [r4, #0xc]
    // mov r0, #0x48
    // mul r0, r1
    // add r0, r2, r0
    // add r0, r6, r0
    // ldrb r0, [r0, #4]
    // mov r1, #4
    // bl ov40_0222E658
    // ldr r2, [r4, #0xc]
    // lsl r1, r2, #2
    // add r1, r2, r1
    // lsl r1, r1, #6
    // add r1, r4, r1
    // add r2, r5, r1
    // mov r1, #0x75
    // lsl r1, r1, #4
    // str r0, [r2, r1]
    // ldr r2, [r4, #0xc]
    // asr r0, r6, #0x1f
    // lsl r1, r2, #2
    // add r1, r2, r1
    // lsl r1, r1, #6
    // add r1, r4, r1
    // add r2, r5, r1
    // ldr r1, _02239320 ; =0x00000754
    // str r6, [r2, r1]
    // add r1, r1, #4
    // str r0, [r2, r1]
    // b _0223910E
    // lsl r0, r1, #2
    // add r0, r1, r0
    // lsl r0, r0, #6
    // add r0, r4, r0
    // add r2, r5, r0
    // ldr r1, _02239324 ; =0x00004E20
    // ldr r0, _0223931C ; =0x0000074C
    // str r1, [r2, r0]
    // sub r0, #0x38
    // ldr r2, [r4, r0]
    // mov r0, #0x72
    // ldr r1, [r4, #0xc]
    // lsl r0, r0, #2
    // mul r0, r1
    // add r0, r2, r0
    // add r0, r6, r0
    // ldrb r0, [r0, #4]
    // mov r1, #4
    // bl ov40_0222E658
    // ldr r2, [r4, #0xc]
    // lsl r1, r2, #2
    // add r1, r2, r1
    // lsl r1, r1, #6
    // add r1, r4, r1
    // add r2, r5, r1
    // mov r1, #0x75
    // lsl r1, r1, #4
    // str r0, [r2, r1]
    // sub r1, #0x3c
    // ldr r2, [r4, r1]
    // mov r1, #0x72
    // ldr r0, [r4, #0xc]
    // lsl r1, r1, #2
    // mul r1, r0
    // add r2, r2, r1
    // ldr r1, [sp]
    // add r1, r1, r2
    // add r1, #0x14
    // ldmia r1!, {r2, r3}
    // lsl r1, r0, #2
    // add r0, r0, r1
    // lsl r0, r0, #6
    // add r0, r4, r0
    // add r1, r5, r0
    // ldr r0, _02239320 ; =0x00000754
    // add r0, r1, r0
    // stmia r0!, {r2, r3}
    // ldr r1, [r4, #0xc]
    // lsl r0, r1, #2
    // add r0, r1, r0
    // lsl r0, r0, #6
    // add r0, r4, r0
    // add r3, r0, r5
    // ldr r0, _02239320 ; =0x00000754
    // ldr r2, [r3, r0]
    // add r0, r0, #4
    // ldr r1, [r3, r0]
    // ldr r7, _02239328 ; =0x8AC72304
    // ldr r0, _0223932C ; =0x89E7FFFF
    // sub r0, r2, r0
    // sbc r1, r7
    // blo _0223910E
    // ldr r1, _0223932C ; =0x89E7FFFF
    // ldr r0, _02239320 ; =0x00000754
    // str r1, [r3, r0]
    // ldr r1, _02239328 ; =0x8AC72304
    // add r0, r0, #4
    // str r1, [r3, r0]
    // ldr r0, [sp]
    // add r6, r6, #1
    // add r0, #8
    // add r5, #0x10
    // str r0, [sp]
    // cmp r6, #0x10
    // blt _0223902C
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // mov r1, #0
    // add r0, r1, #0
    // add r7, r1, #0
    // ldr r2, [r4, #0x1c]
    // ldr r3, [r4, #0xc]
    // cmp r2, #0
    // bne _02239176
    // lsl r2, r3, #2
    // add r2, r3, r2
    // lsl r2, r2, #6
    // add r2, r4, r2
    // add r5, r0, r2
    // ldr r3, _02239330 ; =0x00007530
    // ldr r2, _0223931C ; =0x0000074C
    // str r3, [r5, r2]
    // sub r2, #0x34
    // ldr r3, [r4, #0xc]
    // mov r5, #0x48
    // ldr r2, [r4, r2]
    // mul r5, r3
    // add r2, r2, r5
    // lsl r5, r3, #2
    // add r3, r3, r5
    // add r2, r1, r2
    // lsl r3, r3, #6
    // add r3, r4, r3
    // add r5, r0, r3
    // mov r3, #0x75
    // ldrb r2, [r2, #0x14]
    // lsl r3, r3, #4
    // str r2, [r5, r3]
    // ldr r5, [r4, #0xc]
    // asr r3, r1, #0x1f
    // lsl r2, r5, #2
    // add r2, r5, r2
    // lsl r2, r2, #6
    // add r2, r4, r2
    // ldr r5, _02239320 ; =0x00000754
    // add r2, r0, r2
    // str r1, [r2, r5]
    // add r5, r5, #4
    // str r3, [r2, r5]
    // b _022391FE
    // lsl r2, r3, #2
    // add r2, r3, r2
    // lsl r2, r2, #6
    // add r2, r4, r2
    // add r5, r0, r2
    // ldr r3, _02239334 ; =0x00009C40
    // ldr r2, _0223931C ; =0x0000074C
    // str r3, [r5, r2]
    // sub r2, #0x38
    // mov r5, #0x72
    // ldr r3, [r4, #0xc]
    // lsl r5, r5, #2
    // ldr r2, [r4, r2]
    // mul r5, r3
    // add r2, r2, r5
    // lsl r5, r3, #2
    // add r2, r1, r2
    // add r3, r3, r5
    // add r2, #0x94
    // lsl r3, r3, #6
    // add r3, r4, r3
    // add r5, r0, r3
    // mov r3, #0x75
    // ldrb r2, [r2]
    // lsl r3, r3, #4
    // str r2, [r5, r3]
    // add r2, r3, #0
    // sub r2, #0x3c
    // mov r3, #0x72
    // ldr r5, [r4, #0xc]
    // lsl r3, r3, #2
    // ldr r2, [r4, r2]
    // mul r3, r5
    // add r2, r2, r3
    // add r6, r7, r2
    // add r6, #0xa0
    // ldmia r6!, {r2, r3}
    // lsl r6, r5, #2
    // add r5, r5, r6
    // lsl r5, r5, #6
    // add r5, r4, r5
    // add r6, r0, r5
    // ldr r5, _02239320 ; =0x00000754
    // add r5, r6, r5
    // stmia r5!, {r2, r3}
    // ldr r3, [r4, #0xc]
    // lsl r2, r3, #2
    // add r2, r3, r2
    // lsl r2, r2, #6
    // add r2, r4, r2
    // add r5, r2, r0
    // ldr r2, _02239320 ; =0x00000754
    // ldr r3, [r5, r2]
    // add r2, r2, #4
    // ldr r2, [r5, r2]
    // ldr r6, _02239328 ; =0x8AC72304
    // str r6, [sp, #0xc]
    // ldr r6, _0223932C ; =0x89E7FFFF
    // sub r3, r3, r6
    // ldr r3, [sp, #0xc]
    // sbc r2, r3
    // blo _022391FE
    // ldr r3, _0223932C ; =0x89E7FFFF
    // ldr r2, _02239320 ; =0x00000754
    // str r3, [r5, r2]
    // ldr r3, _02239328 ; =0x8AC72304
    // add r2, r2, #4
    // str r3, [r5, r2]
    // add r1, r1, #1
    // add r0, #0x10
    // add r7, #8
    // cmp r1, #0xc
    // blt _02239126
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // mov r7, #0
    // add r0, r7, #0
    // add r1, r7, #0
    // str r7, [sp, #0x10]
    // ldr r2, [r4, #0x1c]
    // ldr r3, [r4, #0xc]
    // cmp r2, #0
    // bne _02239264
    // lsl r2, r3, #2
    // add r2, r3, r2
    // lsl r2, r2, #6
    // add r2, r4, r2
    // add r5, r0, r2
    // ldr r3, _02239338 ; =0x0000C350
    // ldr r2, _0223931C ; =0x0000074C
    // str r3, [r5, r2]
    // sub r2, #0x34
    // ldr r3, [r4, #0xc]
    // mov r5, #0x48
    // ldr r2, [r4, r2]
    // mul r5, r3
    // add r2, r2, r5
    // lsl r5, r3, #2
    // add r3, r3, r5
    // add r2, r1, r2
    // lsl r3, r3, #6
    // add r3, r4, r3
    // add r5, r0, r3
    // mov r3, #0x75
    // ldrh r2, [r2, #0x20]
    // lsl r3, r3, #4
    // str r2, [r5, r3]
    // ldr r5, [r4, #0xc]
    // asr r3, r7, #0x1f
    // lsl r2, r5, #2
    // add r2, r5, r2
    // lsl r2, r2, #6
    // add r2, r4, r2
    // ldr r5, _02239320 ; =0x00000754
    // add r2, r0, r2
    // str r7, [r2, r5]
    // add r5, r5, #4
    // str r3, [r2, r5]
    // b _022392FE
    // lsl r2, r3, #2
    // add r2, r3, r2
    // lsl r2, r2, #6
    // add r2, r4, r2
    // add r5, r0, r2
    // ldr r3, _0223933C ; =0x0000EA60
    // ldr r2, _0223931C ; =0x0000074C
    // str r3, [r5, r2]
    // sub r2, #0x38
    // mov r5, #0x72
    // ldr r3, [r4, #0xc]
    // lsl r5, r5, #2
    // ldr r2, [r4, r2]
    // mul r5, r3
    // add r2, r2, r5
    // add r5, r1, r2
    // mov r2, #1
    // lsl r2, r2, #8
    // ldrh r2, [r5, r2]
    // lsl r5, r3, #2
    // add r3, r3, r5
    // lsl r3, r3, #6
    // add r3, r4, r3
    // add r5, r0, r3
    // mov r3, #0x75
    // lsl r3, r3, #4
    // str r2, [r5, r3]
    // ldr r2, [r4, #0xc]
    // str r2, [sp, #4]
    // add r2, r3, #0
    // sub r2, #0x3c
    // mov r3, #0x72
    // ldr r5, [sp, #4]
    // lsl r3, r3, #2
    // ldr r2, [r4, r2]
    // mul r3, r5
    // add r3, r2, r3
    // ldr r2, [sp, #0x10]
    // add r3, r2, r3
    // mov r2, #0x4a
    // lsl r2, r2, #2
    // add r5, r3, r2
    // ldmia r5!, {r2, r3}
    // ldr r5, [sp, #4]
    // lsl r6, r5, #2
    // add r5, r5, r6
    // lsl r5, r5, #6
    // add r5, r4, r5
    // add r6, r0, r5
    // ldr r5, _02239320 ; =0x00000754
    // add r5, r6, r5
    // stmia r5!, {r2, r3}
    // ldr r3, [r4, #0xc]
    // lsl r2, r3, #2
    // add r2, r3, r2
    // lsl r2, r2, #6
    // add r2, r4, r2
    // add r3, r2, r0
    // ldr r2, _02239320 ; =0x00000754
    // str r3, [sp, #8]
    // ldr r5, [r3, r2]
    // add r2, r2, #4
    // ldr r3, [r3, r2]
    // ldr r2, _02239328 ; =0x8AC72304
    // mov ip, r2
    // ldr r2, _0223932C ; =0x89E7FFFF
    // sub r2, r5, r2
    // mov r2, ip
    // sbc r3, r2
    // blo _022392FE
    // ldr r5, _0223932C ; =0x89E7FFFF
    // ldr r3, [sp, #8]
    // ldr r2, _02239320 ; =0x00000754
    // str r5, [r3, r2]
    // ldr r5, _02239328 ; =0x8AC72304
    // add r2, r2, #4
    // str r5, [r3, r2]
    // ldr r2, [sp, #0x10]
    // add r7, r7, #1
    // add r2, #8
    // add r0, #0x10
    // add r1, r1, #2
    // str r2, [sp, #0x10]
    // cmp r7, #0x14
    // blt _02239214
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _02239314: .word 0x00000714
    // _02239318: .word 0x00002710
    // _0223931C: .word 0x0000074C
    // _02239320: .word 0x00000754
    // _02239324: .word 0x00004E20
    // _02239328: .word 0x8AC72304
    // _0223932C: .word 0x89E7FFFF
    // _02239330: .word 0x00007530
    // _02239334: .word 0x00009C40
    // _02239338: .word 0x0000C350
    // _0223933C: .word 0x0000EA60
    // TODO: decompile
}




void ov40_02239340(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x1c
    // str r0, [sp, #0x14]
    // mov r0, #0
    // str r0, [sp, #0x18]
    // mov r1, #0x86
    // ldr r0, [sp, #0x14]
    // lsl r1, r1, #4
    // ldr r4, [r0, r1]
    // ldr r5, _022393EC ; =ov40_022453B8
    // mov r6, #1
    // add r4, #0x84
    // ldr r0, [r5, #4]
    // add r1, r4, #0
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp]
    // ldr r0, [r5, #8]
    // mov r2, #6
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #4]
    // ldr r0, [r5, #0xc]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #8]
    // mov r0, #0xe
    // str r0, [sp, #0xc]
    // lsl r0, r6, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x14]
    // ldr r3, [r5]
    // ldr r0, [r0, #0x24]
    // lsl r3, r3, #0x18
    // lsr r3, r3, #0x18
    // bl AddWindowParameterized
    // ldr r1, [r5, #8]
    // ldr r0, [r5, #0xc]
    // mul r0, r1
    // add r6, r6, r0
    // add r0, r4, #0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp, #0x18]
    // ldr r0, [r0, #0x48]
    // add r1, #0x50
    // bl NewString_ReadMsgData
    // add r7, r0, #0
    // add r0, r4, #0
    // add r1, r7, #0
    // bl ov40_022306C0
    // add r3, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _022393F0 ; =0x000F0D00
    // mov r1, #0
    // str r0, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // add r0, r4, #0
    // add r2, r7, #0
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r4, #0
    // bl ScheduleWindowCopyToVram
    // add r0, r7, #0
    // bl String_Delete
    // ldr r0, [sp, #0x18]
    // add r4, #0x10
    // add r0, r0, #1
    // add r5, #0x10
    // str r0, [sp, #0x18]
    // cmp r0, #2
    // blt _02239358
    // add sp, #0x1c
    // pop {r4, r5, r6, r7, pc}
    // _022393EC: .word ov40_022453B8
    // _022393F0: .word 0x000F0D00
    // TODO: decompile
}




void ov40_022393F4(void) {
    // ldr r5, [r0, r1]
    // add r5, #0x84
    ClearWindowTilemapAndCopyToVram(r5, (0x86 << 4));
    RemoveWindow(r5);
    // add r5, #0x10
}




void ov40_02239418(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x24
    // mov r1, #0x86
    // lsl r1, r1, #4
    // str r0, [sp, #0x14]
    // ldr r0, [r0, r1]
    // ldr r6, _02239508 ; =ov40_022453D8
    // str r0, [sp, #0x1c]
    // ldr r4, [sp, #0x1c]
    // mov r0, #0
    // ldr r5, _0223950C ; =ov40_022453F8
    // mov r7, #1
    // str r0, [sp, #0x18]
    // add r4, #0x24
    // add r0, r4, #0
    // bl InitWindow
    // ldr r0, [sp, #0x1c]
    // ldr r0, [r0, #0x1c]
    // cmp r0, #0
    // bne _0223947C
    // ldr r0, [r6, #4]
    // add r1, r4, #0
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp]
    // ldr r0, [r6, #8]
    // mov r2, #2
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #4]
    // ldr r0, [r6, #0xc]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #8]
    // mov r0, #0xe
    // str r0, [sp, #0xc]
    // lsl r0, r7, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x14]
    // ldr r3, [r6]
    // ldr r0, [r0, #0x24]
    // lsl r3, r3, #0x18
    // lsr r3, r3, #0x18
    // bl AddWindowParameterized
    // ldr r1, [r6, #8]
    // ldr r0, [r6, #0xc]
    // b _022394B4
    // ldr r0, [r5, #4]
    // add r1, r4, #0
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp]
    // ldr r0, [r5, #8]
    // mov r2, #2
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #4]
    // ldr r0, [r5, #0xc]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #8]
    // mov r0, #0xe
    // str r0, [sp, #0xc]
    // lsl r0, r7, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x14]
    // ldr r3, [r5]
    // ldr r0, [r0, #0x24]
    // lsl r3, r3, #0x18
    // lsr r3, r3, #0x18
    // bl AddWindowParameterized
    // ldr r1, [r5, #8]
    // ldr r0, [r5, #0xc]
    // mul r0, r1
    // add r7, r7, r0
    // add r0, r4, #0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // ldr r0, [sp, #0x14]
    // mov r1, #0x43
    // ldr r0, [r0, #0x48]
    // bl NewString_ReadMsgData
    // str r0, [sp, #0x20]
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _02239510 ; =0x000F0D00
    // mov r1, #0
    // str r0, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // ldr r2, [sp, #0x20]
    // add r0, r4, #0
    // add r3, r1, #0
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r4, #0
    // bl ScheduleWindowCopyToVram
    // ldr r0, [sp, #0x20]
    // bl String_Delete
    // ldr r0, [sp, #0x18]
    // add r4, #0x10
    // add r0, r0, #1
    // add r6, #0x10
    // add r5, #0x10
    // str r0, [sp, #0x18]
    // cmp r0, #2
    // blt _02239434
    // add sp, #0x24
    // pop {r4, r5, r6, r7, pc}
    // _02239508: .word ov40_022453D8
    // _0223950C: .word ov40_022453F8
    // _02239510: .word 0x000F0D00
    // TODO: decompile
}




void ov40_02239514(void) {
    // ldr r5, [r0, r1]
    // add r5, #0x24
    ClearWindowTilemapAndCopyToVram(r5, (0x86 << 4));
    RemoveWindow(r5);
    // add r5, #0x10
}




void ov40_02239538(void) {
    // push {r4, r5, r6, lr}
    // add r5, r1, #0
    // add r4, r0, #0
    // cmp r5, #0x57
    // blt _02239548
    // mov r5, #0
    // bl GF_AssertFail
    // ldr r6, _0223956C ; =ov40_02245CE8
    // lsl r5, r5, #2
    // ldr r1, [r6, r5]
    // ldr r0, _02239570 ; =0x0000FFFF
    // cmp r1, r0
    // bne _02239558
    // bl GF_AssertFail
    // mov r0, #0x83
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // bl Save_GameStats_Get
    // ldr r1, [r6, r5]
    // bl GameStats_GetCapped
    // pop {r4, r5, r6, pc}
    // nop
    // _0223956C: .word ov40_02245CE8
    // _02239570: .word 0x0000FFFF
    // TODO: decompile
}




void ov40_02239574(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x1fc
    // sub sp, #0x30
    // add r5, r0, #0
    // mov r0, #0x86
    // lsl r0, r0, #4
    // ldr r4, [r5, r0]
    // mov r0, #0xff
    // mov r1, #0x6d
    // bl String_New
    // str r0, [sp, #0x14]
    // mov r0, #0x6d
    // bl ov40_0222DAB0
    // add r6, r0, #0
    // add r0, r4, #0
    // add r0, #0x24
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // ldr r0, [r4, #0x1c]
    // cmp r0, #0
    // ldr r0, [r5, #0x4c]
    // bne _022395BA
    // ldr r1, _022397A4 ; =0x00000718
    // ldr r3, [r4, #0xc]
    // mov r2, #0x48
    // ldr r1, [r4, r1]
    // mul r2, r3
    // ldrb r1, [r1, r2]
    // sub r1, r1, #1
    // bl NewString_ReadMsgData
    // b _022395CE
    // ldr r1, _022397A8 ; =0x00000714
    // mov r2, #0x72
    // ldr r3, [r4, #0xc]
    // lsl r2, r2, #2
    // ldr r1, [r4, r1]
    // mul r2, r3
    // ldrb r1, [r1, r2]
    // sub r1, r1, #1
    // bl NewString_ReadMsgData
    // mov r1, #0
    // add r7, r0, #0
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _022397AC ; =0x000F0D00
    // add r2, r7, #0
    // str r0, [sp, #8]
    // add r0, r4, #0
    // add r0, #0x24
    // add r3, r1, #0
    // str r1, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r4, #0
    // add r0, #0x24
    // bl ScheduleWindowCopyToVram
    // add r0, r7, #0
    // bl String_Delete
    // add r0, r4, #0
    // add r0, #0x34
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // ldr r0, [r4, #0x1c]
    // cmp r0, #0
    // ldr r0, [r5, #0x48]
    // bne _02239614
    // ldr r1, [r4, #0x14]
    // add r1, #0x52
    // bl NewString_ReadMsgData
    // b _0223961A
    // mov r1, #0x5b
    // bl NewString_ReadMsgData
    // mov r1, #0
    // add r7, r0, #0
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _022397AC ; =0x000F0D00
    // add r2, r7, #0
    // str r0, [sp, #8]
    // add r0, r4, #0
    // add r0, #0x34
    // add r3, r1, #0
    // str r1, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r4, #0
    // add r0, #0x34
    // bl ScheduleWindowCopyToVram
    // add r0, r7, #0
    // bl String_Delete
    // ldr r0, _022397B0 ; =0x0000088C
    // mov r1, #0x6d
    // ldr r0, [r5, r0]
    // bl sub_020315B8
    // str r0, [sp, #0x18]
    // ldr r1, [sp, #0x18]
    // add r0, r5, #0
    // bl ov40_02230DCC
    // ldr r0, [r4, #0x14]
    // cmp r0, #0
    // beq _02239668
    // cmp r0, #1
    // beq _022396A6
    // cmp r0, #2
    // beq _022396D0
    // b _0223973A
    // ldr r0, _022397B0 ; =0x0000088C
    // ldr r0, [r5, r0]
    // bl sub_02031700
    // str r0, [sp, #0x20]
    // ldr r0, [r5, #0x48]
    // mov r1, #0x55
    // bl NewString_ReadMsgData
    // add r7, r0, #0
    // ldr r0, [sp, #0x20]
    // mov r1, #4
    // bl ov40_0222E658
    // add r1, r0, #0
    // ldr r0, _022397B4 ; =0x00000744
    // ldr r0, [r4, r0]
    // bl NewString_ReadMsgData
    // str r0, [sp, #0x1c]
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #2
    // mov r1, #0
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x1c]
    // add r0, r6, #0
    // add r3, r1, #0
    // bl BufferString
    // b _0223973A
    // ldr r0, _022397B0 ; =0x0000088C
    // ldr r0, [r5, r0]
    // bl sub_020316F0
    // str r0, [sp, #0x24]
    // ldr r0, [r5, #0x48]
    // mov r1, #0x56
    // bl NewString_ReadMsgData
    // add r7, r0, #0
    // mov r0, #0xff
    // mov r1, #0x6d
    // bl String_New
    // str r0, [sp, #0x1c]
    // ldr r2, [sp, #0x24]
    // add r0, r6, #0
    // mov r1, #0
    // bl BufferMonthNameAbbr
    // b _0223973A
    // ldr r0, _022397B0 ; =0x0000088C
    // ldr r0, [r5, r0]
    // bl sub_020315E0
    // str r0, [sp, #0x10]
    // ldr r0, _022397B0 ; =0x0000088C
    // ldr r0, [r5, r0]
    // bl sub_02031610
    // str r0, [sp, #0x28]
    // ldr r0, [r5, #0x48]
    // mov r1, #0x57
    // bl NewString_ReadMsgData
    // add r7, r0, #0
    // ldr r0, [sp, #0x28]
    // cmp r0, #0
    // beq _022396F8
    // ldr r0, _022397B8 ; =0x000001EE
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x10]
    // cmp r0, #0
    // beq _0223971C
    // mov r0, #0xff
    // mov r1, #0x6d
    // bl String_New
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x10]
    // mov r1, #0x6d
    // add r2, sp, #0x2c
    // bl GetSpeciesNameIntoArray
    // ldr r0, [sp, #0x1c]
    // add r1, sp, #0x2c
    // bl CopyU16ArrayToString
    // b _02239726
    // ldr r0, [r5, #0x48]
    // mov r1, #0x15
    // bl NewString_ReadMsgData
    // str r0, [sp, #0x1c]
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #2
    // mov r1, #0
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x1c]
    // add r0, r6, #0
    // add r3, r1, #0
    // bl BufferString
    // mov r1, #1
    // str r1, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x18]
    // add r0, r6, #0
    // mov r3, #0
    // bl BufferString
    // ldr r1, [sp, #0x14]
    // add r0, r6, #0
    // add r2, r7, #0
    // bl StringExpandPlaceholders
    // mov r0, #0x10
    // str r0, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _022397AC ; =0x000F0D00
    // mov r1, #0
    // str r0, [sp, #8]
    // add r0, r4, #0
    // ldr r2, [sp, #0x14]
    // add r0, #0x34
    // add r3, r1, #0
    // str r1, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // add r4, #0x34
    // add r0, r4, #0
    // bl ScheduleWindowCopyToVram
    // add r0, r7, #0
    // bl String_Delete
    // ldr r0, [sp, #0x1c]
    // bl String_Delete
    // ldr r0, [sp, #0x14]
    // bl String_Delete
    // ldr r0, [sp, #0x18]
    // bl String_Delete
    // add r0, r6, #0
    // bl MessageFormat_ResetBuffers
    // add r0, r6, #0
    // bl MessageFormat_Delete
    // add sp, #0x1fc
    // add sp, #0x30
    // pop {r4, r5, r6, r7, pc}
    // _022397A4: .word 0x00000718
    // _022397A8: .word 0x00000714
    // _022397AC: .word 0x000F0D00
    // _022397B0: .word 0x0000088C
    // _022397B4: .word 0x00000744
    // _022397B8: .word 0x000001EE
    // TODO: decompile
}




void ov40_022397BC(void) {
    // ldr r4, [r0, r2]
    // add r0, #0xa8
    ManagedSprite_SetDrawFlag(*((u32*)r4), 1, (0x86 << 4));
    // add r0, #0xac
    TextOBJ_SetSpritesDrawFlag(*((u32*)r4), 1);
    // add r0, #0xc4
    ManagedSprite_SetPositionXY(*((u32*)r4), 0x80, 0xe8);
    // add r0, #0xa8
    ManagedSprite_SetDrawFlag(*((u32*)r4), 0);
    // add r0, #0xac
    TextOBJ_SetSpritesDrawFlag(*((u32*)r4), 0);
    // add r0, #0xc4
    ManagedSprite_SetPositionXY(*((u32*)r4), 0x50, 0xe8);
    // add r0, #0xac
    // sub r2, #0x2c
    sub_020136B4(*((u32*)r4), 0x24, 0x24);
    // add r4, #0xc8
    // sub r2, #0x2c
    sub_020136B4(*((u32*)r4), 0x24, 0x24);
}




void ov40_02239838(void) {
    // ldr r4, [r5, r1]
    ov40_0222D73C(2);
    ov40_0222D800(r5, 2);
    // add r1, #0xa8
    // str r0, [r1]
    ov40_0222D800(r5, 2);
    // add r1, #0xc4
    // str r0, [r1]
    // add r0, #0xa4
    // add r1, #0x14
    ov40_0222D5AC(r4, r5, 2);
    // add r0, #0xc0
    // add r1, #0x14
    ov40_0222D5AC(r4, r5, 2);
    // add r0, #0xa4
    // add r1, #0x14
    ov40_0222D66C(r4, r5, 0x35);
    // add r0, #0xc0
    // add r1, #0x14
    ov40_0222D66C(r4, r5, 3);
    // add r0, #0xa8
    ManagedSprite_SetPositionXY(*((u32*)r4), 0x20, 0xe8);
    // add r0, #0xc4
    ManagedSprite_SetPositionXY(*((u32*)r4), 0x80, 0xe8);
    // add r0, #0xac
    // sub r2, #0x2c
    sub_020136B4(*((u32*)r4), 0x24, 0x24);
    // add r0, #0xc8
    // sub r2, #0x2c
    sub_020136B4(*((u32*)r4), 0x24, 0x24);
    // add r0, #0xac
    TextOBJ_SetSpritesDrawFlag(*((u32*)r4), 0);
    // add r4, #0xc8
    TextOBJ_SetSpritesDrawFlag(*((u32*)r4), 1);
    ov40_022397BC(r5, 1);
}




void ov40_022398F8(void) {
    // ldr r4, [r5, r0]
    // add r0, #0xa4
    ov40_0222D6D0(r4);
    // add r0, #0xc0
    ov40_0222D6D0(r4);
    // add r0, #0xa8
    Sprite_DeleteAndFreeResources(*((u32*)r4));
    // add r4, #0xc4
    Sprite_DeleteAndFreeResources(*((u32*)r4));
    ov40_0222D7DC(r5);
}




void ov40_0223992C(void) {
    // push {r3, r4, r5}
    // sub sp, #0xc
    // ldr r5, _02239950 ; =ov40_022453A0
    // add r2, r0, #0
    // ldmia r5!, {r0, r1}
    // add r4, sp, #0
    // add r3, r4, #0
    // stmia r4!, {r0, r1}
    // ldr r0, [r5]
    // str r0, [r4]
    // ldr r0, [r2, #0x14]
    // lsl r0, r0, #2
    // ldr r0, [r3, r0]
    // str r0, [r2, #0x20]
    // add sp, #0xc
    // pop {r3, r4, r5}
    // bx lr
    // nop
    // _02239950: .word ov40_022453A0
    // TODO: decompile
}




void ov40_02239954(void) {
    // ldr r4, [r5, r2]
    ov40_02230944(r2, (0x86 << 4));
    *((u32*)(r4 + 0xc)) = (*((u32*)(r4 + 0xc)) + 1);
    _s32_div_f((*((u32*)(r4 + 0xc)) + 1), *((u32*)(r4 + 0x10)));
    *((u32*)(r4 + 0xc)) = r1;
    ov40_0222BF80(r5, 4);
    ov40_02230944(r5);
    *((u32*)(r4 + 0x14)) = (*((u32*)(r4 + 0x14)) + 1);
    _s32_div_f((*((u32*)(r4 + 0x14)) + 1), *((u32*)(r4 + 0x18)));
    *((u32*)(r4 + 0x14)) = r1;
    ov40_0222BF80(r5, 4);
    ov40_02230944(r5);
    ov40_0222BF80(r5, 7);
}




void ov40_022399B8(void) {
    // push {r3, r4, r5, lr}
    // ldr r1, _02239A48 ; =0x00000B38
    // add r5, r0, #0
    // mov r0, #0x6d
    // bl Heap_Alloc
    // ldr r2, _02239A48 ; =0x00000B38
    // mov r1, #0
    // add r4, r0, #0
    // bl memset
    // mov r0, #0x86
    // lsl r0, r0, #4
    // str r4, [r5, r0]
    // add r0, #0xc
    // ldr r0, [r5, r0]
    // str r0, [r4, #0x1c]
    // mov r0, #3
    // str r0, [r4, #0x10]
    // add r0, r5, #0
    // bl sub_02087E1C
    // cmp r0, #0
    // bne _022399EE
    // ldr r0, [r4, #0x10]
    // sub r0, r0, #1
    // str r0, [r4, #0x10]
    // mov r0, #3
    // str r0, [r4, #0x18]
    // add r0, r4, #0
    // bl ov40_0223992C
    // ldr r1, [r5, #0x48]
    // ldr r0, _02239A4C ; =0x00000744
    // str r1, [r4, r0]
    // ldr r0, [r5, #0x24]
    // mov r1, #2
    // bl BgClearTilemapBufferAndCommit
    // ldr r0, [r5, #0x24]
    // mov r1, #3
    // bl BgClearTilemapBufferAndCommit
    // ldr r0, [r5, #0x24]
    // mov r1, #6
    // bl BgClearTilemapBufferAndCommit
    // ldr r0, [r5, #0x24]
    // mov r1, #7
    // bl BgClearTilemapBufferAndCommit
    // add r0, r4, #0
    // add r1, r4, #4
    // mov r2, #0
    // bl ov40_0222D9E8
    // mov r0, #0x6d
    // str r0, [sp]
    // ldr r0, _02239A50 ; =ov40_022453AC
    // ldr r2, _02239A54 ; =ov40_02239954
    // mov r1, #3
    // add r3, r5, #0
    // bl TouchHitboxController_Create
    // add r4, #0xdc
    // str r0, [r4]
    // add r0, r5, #0
    // mov r1, #1
    // bl ov40_0222BF80
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // _02239A48: .word 0x00000B38
    // _02239A4C: .word 0x00000744
    // _02239A50: .word ov40_022453AC
    // _02239A54: .word ov40_02239954
    // TODO: decompile
}




void ov40_02239A58(void) {
    // ldr r4, [r5, r1]
    // add r0, #8
    ov40_0222DA84(r4, 1);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r5 + 0x28)), 2, 0xc, ((*((u32*)(r4 + 8)) << 0x18) >> 0x18));
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r5 + 0x28)), 3, 0xc, ((*((u32*)(r4 + 8)) << 0x18) >> 0x18));
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r5 + 0x28)), 1, 2, ((*((u32*)(r4 + 8)) << 0x18) >> 0x18));
    ov40_02230964(1);
    ov40_0222D874(r5);
    ov40_02239838(r5);
    ov40_02230964(r5, 0);
    SetBgPriority(0, 1);
    SetBgPriority(1, 3);
    SetBgPriority(2, 0);
    SetBgPriority(3, 1);
    SetBgPriority(4, 1);
    SetBgPriority(5, 3);
    SetBgPriority(6, 0);
    SetBgPriority(7, 2);
    ov40_0222FB90(r5, 0);
    // ldr r0, [r5, r0]
    sub_020879E0((0x6f << 4), 0);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    ov40_0222FBB4((*((u32*)(r5 + 8)) + 1));
    ov40_0222BF80(r5, 2);
}




void ov40_02239B58(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #8
    // mov r1, #0x86
    // add r4, r0, #0
    // lsl r1, r1, #4
    // ldr r5, [r4, r1]
    // bl ov40_0223D5CC
    // cmp r0, #0
    // bne _02239B72
    // add sp, #8
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // ldr r0, [r4, #8]
    // cmp r0, #6
    // bls _02239B7A
    // b _02239EA0
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _02239B86: ; jump table
    // mov r1, #0x6f
    // lsl r1, r1, #4
    // ldr r1, [r4, r1]
    // add r0, r4, #0
    // mov r2, #0x80
    // mov r3, #0x60
    // bl ov40_0223077C
    // mov r0, #0x6f
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #1
    // bl sub_020879E0
    // mov r0, #0x6f
    // lsl r0, r0, #4
    // mov r1, #0x18
    // ldr r0, [r4, r0]
    // add r2, r1, #0
    // bl sub_02087A08
    // ldr r1, _02239ED0 ; =0x00000117
    // add r0, r4, #0
    // bl ov40_0222DED0
    // ldr r0, _02239ED4 ; =0x0000057D
    // bl PlaySE
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _02239EC8
    // add r0, r4, #0
    // bl ov40_0223D540
    // bl ov39_022274B4
    // cmp r0, #1
    // beq _02239BE4
    // b _02239EC8
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _02239EC8
    // add r0, r4, #0
    // bl ov40_0223D540
    // add r1, sp, #4
    // bl ov39_02227D44
    // cmp r0, #1
    // bne _02239C2A
    // ldr r0, _02239ED4 ; =0x0000057D
    // mov r1, #0
    // bl StopSE
    // add r0, r4, #0
    // bl ov40_0222DFB0
    // ldr r3, [sp, #4]
    // add r0, r4, #0
    // ldr r2, [r3, #0xc]
    // ldr r3, [r3, #4]
    // mov r1, #4
    // bl ov40_02230CDC
    // mov r0, #0x6f
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl sub_020879E0
    // mov r0, #5
    // str r0, [r4, #8]
    // b _02239EC8
    // mov r0, #0x71
    // lsl r0, r0, #4
    // add r1, r5, r0
    // add r0, #0xc
    // str r1, [r5, r0]
    // mov r0, #0x83
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // bl Save_PlayerData_GetIGTAddr
    // bl GetIGTHours
    // ldr r1, _02239ED8 ; =0x00000728
    // strh r0, [r5, r1]
    // mov r0, #0x83
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // bl Save_PlayerData_GetIGTAddr
    // bl GetIGTMinutes
    // ldr r1, _02239EDC ; =0x0000072A
    // strb r0, [r5, r1]
    // mov r0, #0x83
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // bl Save_PlayerData_GetIGTAddr
    // bl GetIGTSeconds
    // ldr r1, _02239EE0 ; =0x0000072B
    // strb r0, [r5, r1]
    // add r0, r1, #0
    // sub r0, #0xf
    // ldr r0, [r5, r0]
    // ldrb r2, [r0]
    // add r0, r1, #1
    // strb r2, [r5, r0]
    // add r0, r1, #0
    // sub r0, #0xf
    // ldr r0, [r5, r0]
    // ldrb r2, [r0, #1]
    // add r0, r1, #0
    // add r0, #9
    // strb r2, [r5, r0]
    // add r0, r1, #0
    // sub r0, #0xf
    // ldr r0, [r5, r0]
    // ldrb r2, [r0, #2]
    // add r0, r1, #0
    // add r0, #0x11
    // strb r2, [r5, r0]
    // add r1, r1, #1
    // ldrb r1, [r5, r1]
    // add r0, r4, #0
    // sub r1, r1, #1
    // bl ov40_02239538
    // mov r1, #0x73
    // lsl r1, r1, #4
    // str r0, [r5, r1]
    // add r1, r1, #4
    // ldrb r1, [r5, r1]
    // add r0, r4, #0
    // sub r1, r1, #1
    // bl ov40_02239538
    // ldr r1, _02239EE4 ; =0x00000738
    // str r0, [r5, r1]
    // add r1, r1, #4
    // ldrb r1, [r5, r1]
    // add r0, r4, #0
    // sub r1, r1, #1
    // bl ov40_02239538
    // mov r1, #0x1d
    // lsl r1, r1, #6
    // str r0, [r5, r1]
    // ldr r0, _02239ED4 ; =0x0000057D
    // mov r1, #0
    // bl StopSE
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _02239EC8
    // add r0, r4, #0
    // bl ov40_0223D540
    // ldr r1, _02239EE8 ; =0x0000088C
    // ldr r2, _02239EEC ; =0x0000072C
    // ldr r1, [r4, r1]
    // add r2, r5, r2
    // bl ov39_022274D4
    // cmp r0, #1
    // beq _02239CEE
    // b _02239EC8
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _02239EC8
    // add r0, r4, #0
    // bl ov40_0222DFB0
    // add r0, r4, #0
    // bl ov40_0223D540
    // add r1, sp, #4
    // bl ov39_02227D44
    // cmp r0, #1
    // bne _02239D34
    // ldr r0, _02239ED4 ; =0x0000057D
    // mov r1, #0
    // bl StopSE
    // ldr r3, [sp, #4]
    // add r0, r4, #0
    // ldr r2, [r3, #0xc]
    // ldr r3, [r3, #4]
    // mov r1, #5
    // bl ov40_02230CDC
    // mov r0, #0x6f
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl sub_020879E0
    // mov r0, #5
    // str r0, [r4, #8]
    // b _02239EC8
    // ldr r1, [r5, #0x1c]
    // mov r0, #0
    // cmp r1, #0
    // bne _02239D5C
    // ldr r1, _02239EF0 ; =0x00000718
    // ldr r2, [r5, r1]
    // ldrb r1, [r2]
    // cmp r1, #0
    // beq _02239D58
    // add r1, r2, #0
    // add r1, #0x48
    // ldrb r1, [r1]
    // cmp r1, #0
    // beq _02239D58
    // add r2, #0x90
    // ldrb r1, [r2]
    // cmp r1, #0
    // bne _02239D7A
    // mov r0, #1
    // b _02239D7A
    // ldr r1, _02239EF4 ; =0x00000714
    // ldr r3, [r5, r1]
    // ldrb r1, [r3]
    // cmp r1, #0
    // beq _02239D78
    // mov r1, #0x72
    // lsl r1, r1, #2
    // ldrb r2, [r3, r1]
    // cmp r2, #0
    // beq _02239D78
    // lsl r1, r1, #1
    // ldrb r1, [r3, r1]
    // cmp r1, #0
    // bne _02239D7A
    // mov r0, #1
    // cmp r0, #0
    // beq _02239DA6
    // mov r2, #0
    // add r0, r4, #0
    // mov r1, #5
    // add r3, r2, #0
    // bl ov40_02230CDC
    // mov r1, #0x4b
    // mov r0, #0x51
    // lsl r1, r1, #2
    // lsl r0, r0, #4
    // str r1, [r4, r0]
    // mov r0, #0x6f
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl sub_020879E0
    // mov r0, #5
    // str r0, [r4, #8]
    // b _02239EC8
    // ldr r0, _02239ED4 ; =0x0000057D
    // mov r1, #0
    // bl StopSE
    // ldr r0, _02239EF8 ; =0x00000577
    // bl PlaySE
    // mov r0, #0xff
    // str r0, [r4, #8]
    // b _02239EC8
    // add r0, r4, #0
    // mov r1, #1
    // bl ov40_02230964
    // add r0, r4, #0
    // bl ov40_022398F8
    // add r0, r5, #0
    // add r0, #0xdc
    // ldr r0, [r0]
    // bl TouchHitboxController_Destroy
    // add r5, #8
    // add r0, r5, #0
    // bl ov40_0222DAA8
    // add r0, r4, #0
    // bl ov40_0222D88C
    // add r0, r4, #0
    // mov r1, #0
    // bl ov40_02230964
    // ldr r0, [r4, #0x24]
    // mov r1, #2
    // bl BgClearTilemapBufferAndCommit
    // ldr r0, [r4, #0x24]
    // mov r1, #6
    // bl BgClearTilemapBufferAndCommit
    // ldr r0, [r4, #0x24]
    // mov r1, #3
    // bl BgClearTilemapBufferAndCommit
    // ldr r0, [r4, #0x24]
    // mov r1, #7
    // bl BgClearTilemapBufferAndCommit
    // add r0, r4, #0
    // mov r1, #1
    // bl ov40_0222FB90
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _02239EC8
    // add r0, r4, #0
    // bl ov40_0222FBB4
    // cmp r0, #0
    // beq _02239EC8
    // add r0, r5, #0
    // add r0, #8
    // mov r1, #0
    // bl ov40_0222DA84
    // cmp r0, #0
    // beq _02239E6E
    // add r0, r4, #0
    // bl ov40_0222DD08
    // add r0, r5, #0
    // add r0, #8
    // bl ov40_0222DAA8
    // ldr r0, [r4, #0x58]
    // mov r1, #2
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r0, [r4, #0x28]
    // mov r2, #0xc
    // mov r3, #0x10
    // bl PaletteData_BlendPalettes
    // mov r1, #1
    // ldr r3, [r4, #0x10]
    // add r0, r4, #0
    // add r2, r1, #0
    // bl ov40_0222BF64
    // add r0, r4, #0
    // mov r1, #5
    // bl ov40_0222BF80
    // add r0, r5, #0
    // bl Heap_Free
    // b _02239EC8
    // ldr r0, [r4, #0x58]
    // mov r1, #1
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r5, #8]
    // ldr r0, [r4, #0x28]
    // lsl r3, r3, #0x18
    // mov r2, #2
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // ldr r0, [r4, #0x58]
    // mov r1, #3
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r5, #8]
    // ldr r0, [r4, #0x28]
    // lsl r3, r3, #0x18
    // mov r2, #0xc
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // b _02239EC8
    // add r0, r4, #0
    // bl ov40_02238FF4
    // mov r0, #0x6f
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl sub_020879E0
    // mov r0, #0x6f
    // lsl r0, r0, #4
    // mov r1, #0
    // ldr r0, [r4, r0]
    // add r2, r1, #0
    // bl sub_02087A08
    // add r0, r4, #0
    // mov r1, #5
    // bl ov40_0222BF80
    // mov r0, #0
    // add sp, #8
    // pop {r3, r4, r5, pc}
    // nop
    // _02239ED0: .word 0x00000117
    // _02239ED4: .word 0x0000057D
    // _02239ED8: .word 0x00000728
    // _02239EDC: .word 0x0000072A
    // _02239EE0: .word 0x0000072B
    // _02239EE4: .word 0x00000738
    // _02239EE8: .word 0x0000088C
    // _02239EEC: .word 0x0000072C
    // _02239EF0: .word 0x00000718
    // _02239EF4: .word 0x00000714
    // _02239EF8: .word 0x00000577
    // TODO: decompile
}




void ov40_02239EFC(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x10
    // mov r1, #0x86
    // add r5, r0, #0
    // lsl r1, r1, #4
    // ldr r4, [r5, r1]
    // ldr r1, [r5, #8]
    // cmp r1, #0
    // beq _02239F14
    // cmp r1, #1
    // beq _02239FC0
    // b _0223A022
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x6d
    // str r0, [sp, #0xc]
    // ldr r0, [r5, #0x14]
    // ldr r2, [r5, #0x24]
    // mov r1, #0x3e
    // mov r3, #3
    // bl GfGfxLoader_LoadCharDataFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x6d
    // str r0, [sp, #0xc]
    // ldr r0, [r5, #0x14]
    // ldr r2, [r5, #0x24]
    // mov r1, #0x3e
    // mov r3, #7
    // bl GfGfxLoader_LoadCharDataFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x6d
    // str r0, [sp, #0xc]
    // ldr r0, [r5, #0x14]
    // ldr r2, [r5, #0x24]
    // mov r1, #0x21
    // mov r3, #3
    // bl GfGfxLoader_LoadScrnDataFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x6d
    // str r0, [sp, #0xc]
    // ldr r0, [r5, #0x14]
    // ldr r2, [r5, #0x24]
    // mov r1, #0x22
    // mov r3, #7
    // bl GfGfxLoader_LoadScrnDataFromOpenNarc
    // add r0, r5, #0
    // bl ov40_02239418
    // add r0, r5, #0
    // bl ov40_02239574
    // add r0, r5, #0
    // mov r1, #1
    // bl ov40_02230964
    // ldr r0, _0223A030 ; =0x0000047C
    // add r1, r5, #0
    // add r0, r5, r0
    // mov r2, #2
    // bl ov40_0222F9E0
    // add r0, r5, #0
    // bl ov40_02238F00
    // add r0, r5, #0
    // mov r1, #0
    // bl ov40_02230964
    // add r0, r5, #0
    // bl ov40_02239340
    // mov r0, #8
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #8
    // mov r1, #1
    // bl GfGfx_EngineBTogglePlanes
    // ldr r0, [r5, #8]
    // add r0, r0, #1
    // str r0, [r5, #8]
    // b _0223A028
    // add r0, r4, #0
    // add r0, #8
    // mov r1, #0
    // bl ov40_0222DA84
    // mov r2, #0
    // add r0, r4, #0
    // add r1, r4, #4
    // add r3, r2, #0
    // bl ov40_0222DA00
    // cmp r0, #0
    // beq _02239FF0
    // mov r0, #4
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #4
    // mov r1, #1
    // bl GfGfx_EngineBTogglePlanes
    // ldr r0, [r5, #8]
    // add r0, r0, #1
    // str r0, [r5, #8]
    // ldr r0, [r5, #0x58]
    // mov r1, #3
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r4, #8]
    // ldr r0, [r5, #0x28]
    // lsl r3, r3, #0x18
    // mov r2, #0xc
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // ldr r0, [r5, #0x58]
    // mov r1, #2
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r4, #8]
    // ldr r0, [r5, #0x28]
    // lsl r3, r3, #0x18
    // mov r2, #0xc
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // b _0223A028
    // mov r1, #6
    // bl ov40_0222BF80
    // mov r0, #0
    // add sp, #0x10
    // pop {r3, r4, r5, pc}
    // nop
    // _0223A030: .word 0x0000047C
    // TODO: decompile
}




void ov40_0223A034(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // mov r0, #0x86
    // lsl r0, r0, #4
    // ldr r4, [r5, r0]
    // ldr r0, _0223A074 ; =0x0000047C
    // add r0, r5, r0
    // bl ov40_0222FA88
    // ldr r1, _0223A078 ; =0x0000049C
    // add r0, r5, r1
    // sub r1, #0x10
    // ldrsh r1, [r5, r1]
    // bl ov40_0222F6D0
    // ldr r0, _0223A07C ; =0x00000748
    // add r1, r5, #0
    // ldr r0, [r4, r0]
    // str r0, [sp]
    // ldr r0, _0223A078 ; =0x0000049C
    // ldr r2, [r4, #0xc]
    // ldr r3, [r4, #0x14]
    // add r0, r5, r0
    // bl ov40_0222F09C
    // add r4, #0xdc
    // ldr r0, [r4]
    // bl TouchHitboxController_IsTriggered
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // nop
    // _0223A074: .word 0x0000047C
    // _0223A078: .word 0x0000049C
    // _0223A07C: .word 0x00000748
    // TODO: decompile
}




void ov40_0223A080(void) {
    // push {r3, r4, r5, lr}
    // mov r1, #0x86
    // add r5, r0, #0
    // lsl r1, r1, #4
    // ldr r4, [r5, r1]
    // ldr r1, [r5, #8]
    // cmp r1, #0
    // beq _0223A096
    // cmp r1, #1
    // beq _0223A0EC
    // b _0223A13E
    // mov r1, #1
    // bl ov40_02230964
    // ldr r0, _0223A148 ; =0x0000047C
    // add r0, r5, r0
    // bl ov40_0222FA24
    // ldr r0, _0223A14C ; =0x0000049C
    // add r0, r5, r0
    // bl ov40_0222F720
    // ldr r0, _0223A150 ; =0x00000748
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // beq _0223A0B8
    // bl String_Delete
    // ldr r0, _0223A14C ; =0x0000049C
    // add r1, r5, #0
    // add r0, r5, r0
    // bl ov40_0222F920
    // add r0, r5, #0
    // mov r1, #0
    // bl ov40_02230964
    // ldr r0, _0223A154 ; =0x000006F4
    // mov r1, #0
    // ldr r0, [r5, r0]
    // bl sub_020879E0
    // mov r0, #4
    // mov r1, #0
    // bl GfGfx_EngineBTogglePlanes
    // mov r0, #4
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // ldr r0, [r5, #8]
    // add r0, r0, #1
    // str r0, [r5, #8]
    // b _0223A144
    // add r0, r4, #0
    // add r0, #8
    // mov r1, #1
    // bl ov40_0222DA84
    // add r0, r4, #0
    // add r1, r4, #4
    // mov r2, #1
    // mov r3, #0
    // bl ov40_0222DA00
    // cmp r0, #0
    // beq _0223A10C
    // ldr r0, [r5, #8]
    // add r0, r0, #1
    // str r0, [r5, #8]
    // ldr r0, [r5, #0x58]
    // mov r1, #3
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r4, #8]
    // ldr r0, [r5, #0x28]
    // lsl r3, r3, #0x18
    // mov r2, #0xc
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // ldr r0, [r5, #0x58]
    // mov r1, #2
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r4, #8]
    // ldr r0, [r5, #0x28]
    // lsl r3, r3, #0x18
    // mov r2, #0xc
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // b _0223A144
    // mov r1, #8
    // bl ov40_0222BF80
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // _0223A148: .word 0x0000047C
    // _0223A14C: .word 0x0000049C
    // _0223A150: .word 0x00000748
    // _0223A154: .word 0x000006F4
    // TODO: decompile
}




void ov40_0223A158(void) {
    // ldr r4, [r5, r1]
    ov40_022393F4(*((u32*)(r0 + 8)));
    ov40_02239514(r5);
    ov40_02230964(r5, 1);
    ov40_022398F8(r5);
    ov40_02230964(r5, 0);
    // add r4, #0xdc
    TouchHitboxController_Destroy(*((u32*)r4));
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    ov40_02230964((*((u32*)(r5 + 8)) + 1), 1);
    // add r4, #8
    ov40_0222DAA8(r4);
    ov40_0222D88C(r5);
    ov40_02230964(r5, 0);
    BgClearTilemapBufferAndCommit(*((u32*)(r5 + 0x24)), 2);
    BgClearTilemapBufferAndCommit(*((u32*)(r5 + 0x24)), 6);
    BgClearTilemapBufferAndCommit(*((u32*)(r5 + 0x24)), 3);
    BgClearTilemapBufferAndCommit(*((u32*)(r5 + 0x24)), 7);
    ov40_0222FB90(r5, 1);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    ov40_0222FBB4((*((u32*)(r5 + 8)) + 1));
    // add r0, #8
    ov40_0222DA84(r4, 0);
    ov40_0222DD08(r5);
    // add r0, #8
    ov40_0222DAA8(r4);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r5 + 0x28)), 2, 0xc, 0x10);
    ov40_0222BF64(r5, 1, 1, *((u32*)(r5 + 0x10)));
    ov40_0222BF80(r5, 5);
    Heap_Free(r4);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r5 + 0x28)), 1, 2, ((*((u32*)(r4 + 8)) << 0x18) >> 0x18));
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r5 + 0x28)), 3, 0xc, ((*((u32*)(r4 + 8)) << 0x18) >> 0x18));
}




void ov40_0223A274(void) {
}




void ov40_0223A280(void) {
    // push {r3, r4, r5, lr}
    // mov r1, #0x86
    // add r5, r0, #0
    // lsl r1, r1, #4
    // ldr r4, [r5, r1]
    // ldr r1, [r5, #8]
    // cmp r1, #0
    // beq _0223A29A
    // cmp r1, #1
    // beq _0223A2D0
    // cmp r1, #2
    // beq _0223A2E8
    // b _0223A312
    // bl ov40_02238FF4
    // add r0, r4, #0
    // bl ov40_0223992C
    // add r0, r5, #0
    // bl ov40_02239514
    // ldr r0, _0223A31C ; =0x0000049C
    // add r0, r5, r0
    // bl ov40_0222F720
    // ldr r0, _0223A320 ; =0x00000748
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // beq _0223A2BE
    // bl String_Delete
    // ldr r0, _0223A31C ; =0x0000049C
    // add r1, r5, #0
    // add r0, r5, r0
    // bl ov40_0222F920
    // ldr r0, [r5, #8]
    // add r0, r0, #1
    // str r0, [r5, #8]
    // b _0223A318
    // mov r2, #1
    // add r0, r4, #0
    // add r1, r4, #4
    // add r3, r2, #0
    // bl ov40_0222DA00
    // cmp r0, #0
    // beq _0223A318
    // ldr r0, [r5, #8]
    // add r0, r0, #1
    // str r0, [r5, #8]
    // b _0223A318
    // add r0, r4, #0
    // add r1, r4, #4
    // mov r2, #0
    // mov r3, #1
    // bl ov40_0222DA00
    // cmp r0, #0
    // beq _0223A318
    // add r0, r5, #0
    // bl ov40_02239418
    // add r0, r5, #0
    // bl ov40_02239574
    // add r0, r5, #0
    // bl ov40_02238F00
    // ldr r0, [r5, #8]
    // add r0, r0, #1
    // str r0, [r5, #8]
    // b _0223A318
    // mov r1, #6
    // bl ov40_0222BF80
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // _0223A31C: .word 0x0000049C
    // _0223A320: .word 0x00000748
    // TODO: decompile
}




void ov40_0223A324(void) {
    // push {r4, lr}
    // mov r2, #0x86
    // lsl r2, r2, #4
    // ldr r1, [r1]
    // ldr r4, [r0, r2]
    // cmp r1, #1
    // bne _0223A33E
    // mov r0, #0x71
    // lsl r0, r0, #4
    // add r1, r4, r0
    // add r0, #0xc
    // str r1, [r4, r0]
    // pop {r4, pc}
    // bl ov40_0223D540
    // ldr r1, _0223A35C ; =0x0000071C
    // add r1, r4, r1
    // bl ov39_02227F74
    // ldr r1, _0223A35C ; =0x0000071C
    // mov r2, #4
    // ldr r0, [r4, r1]
    // sub r1, #0xc
    // add r1, r4, r1
    // bl MI_CpuCopy8
    // pop {r4, pc}
    // nop
    // _0223A35C: .word 0x0000071C
    // TODO: decompile
}




void ov40_0223A360(void) {
    // push {r4, lr}
    // mov r2, #0x86
    // lsl r2, r2, #4
    // ldr r1, [r1]
    // ldr r4, [r0, r2]
    // cmp r1, #1
    // bne _0223A382
    // add r1, r4, #0
    // ldr r0, _0223A3B0 ; =0x00000714
    // add r1, #0xe0
    // str r1, [r4, r0]
    // add r1, r0, #0
    // sub r1, #0xdc
    // add r1, r4, r1
    // add r0, r0, #4
    // str r1, [r4, r0]
    // pop {r4, pc}
    // bl ov40_0223D540
    // ldr r2, _0223A3B0 ; =0x00000714
    // add r1, r4, r2
    // add r2, r2, #4
    // add r2, r4, r2
    // bl ov39_02227FA8
    // ldr r0, _0223A3B0 ; =0x00000714
    // add r1, r4, #0
    // ldr r0, [r4, r0]
    // ldr r2, _0223A3B4 ; =0x00000558
    // add r1, #0xe0
    // bl MI_CpuCopy8
    // ldr r1, _0223A3B8 ; =0x00000718
    // mov r2, #0xd8
    // ldr r0, [r4, r1]
    // sub r1, #0xe0
    // add r1, r4, r1
    // bl MI_CpuCopy8
    // pop {r4, pc}
    // _0223A3B0: .word 0x00000714
    // _0223A3B4: .word 0x00000558
    // _0223A3B8: .word 0x00000718
    // TODO: decompile
}




void ov40_0223A3BC(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x84
    // ldr r4, _0223A428 ; =ov40_0224557C
    // add r3, sp, #0xc
    // mov r2, #0x3c
    // ldrh r1, [r4]
    // add r4, r4, #2
    // strh r1, [r3]
    // add r3, r3, #2
    // sub r2, r2, #1
    // bne _0223A3C6
    // mov r1, #0
    // str r1, [sp, #8]
    // mov r1, #0x86
    // lsl r1, r1, #4
    // ldr r0, [r0, r1]
    // ldr r7, _0223A42C ; =0x00002090
    // str r0, [sp, #4]
    // ldr r0, [sp, #8]
    // str r0, [sp]
    // ldr r0, [sp]
    // ldr r4, [sp, #4]
    // lsl r1, r0, #2
    // add r0, sp, #0xc
    // mov r6, #0
    // add r5, r0, r1
    // ldr r0, [r4, r7]
    // cmp r0, #0
    // beq _0223A402
    // mov r1, #0
    // mov r2, #2
    // ldrsh r1, [r5, r1]
    // ldrsh r2, [r5, r2]
    // bl ManagedSprite_SetPositionXY
    // add r6, r6, #1
    // add r4, #8
    // add r5, r5, #4
    // cmp r6, #6
    // blt _0223A3F0
    // ldr r0, [sp, #4]
    // add r0, #0x30
    // str r0, [sp, #4]
    // ldr r0, [sp]
    // add r0, r0, #6
    // str r0, [sp]
    // ldr r0, [sp, #8]
    // add r0, r0, #1
    // str r0, [sp, #8]
    // cmp r0, #5
    // blt _0223A3E4
    // add sp, #0x84
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _0223A428: .word ov40_0224557C
    // _0223A42C: .word 0x00002090
    // TODO: decompile
}




void ov40_0223A430(void) {
    // ldr r4, [r5, r1]
    ov40_0222D6EC(2);
    ov40_0222D800(r5, 2);
    // str r0, [r4, r1]
    ov40_0222D800(r5, 2);
    // str r0, [r4, r1]
    // sub r1, #0x20
    // add r0, r4, r1
    // add r1, #0x14
    ov40_0222D5AC(r5, 2);
    // add r0, r4, r0
    // add r1, #0x14
    ov40_0222D5AC((0x13 << 4), r5, 2);
    // add r0, r4, r0
    // add r1, #0x14
    ov40_0222D66C((0x45 << 2), r5, 3);
    // add r0, r4, r0
    // add r1, #0x14
    ov40_0222D66C((0x13 << 4), r5, 0x5e);
    // ldr r0, [r4, r0]
    ManagedSprite_SetAnim((0x46 << 2), 0);
    // ldr r0, [r4, r0]
    ManagedSprite_SetAnim((0x4d << 2), 3);
    // ldr r0, [r4, r0]
    ManagedSprite_SetPositionXY((0x46 << 2), 0x20, 0xe8);
    // ldr r0, [r4, r0]
    ManagedSprite_SetPositionXY((0x4d << 2), 0x80, 0xe8);
    // ldr r0, [r4, r0]
    // sub r2, #0x2c
    sub_020136B4((0x47 << 2), 0x24, 0x24);
    // ldr r0, [r4, r0]
    // sub r2, #0x2c
    sub_020136B4((0x4e << 2), 0x24, 0x24);
    // ldr r0, [r4, r0]
    TextOBJ_SetSpritesDrawFlag((0x47 << 2), 1);
    // ldr r0, [r4, r0]
    TextOBJ_SetSpritesDrawFlag((0x4e << 2), 1);
    ov40_0223B4BC(r5, 0);
}




void ov40_0223A510(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x20
    // add r5, r0, #0
    // ldr r0, _0223A638 ; =0x000008A4
    // add r4, r1, #0
    // sub r0, #0x44
    // ldr r3, [r5, r0]
    // cmp r4, #0x64
    // bne _0223A58A
    // mov r0, #0x65
    // lsl r0, r0, #2
    // ldr r0, [r3, r0]
    // str r0, [sp, #0x14]
    // mov r0, #0x6d
    // bl ov40_0222DAB0
    // add r7, r0, #0
    // mov r0, #0xff
    // mov r1, #0x6d
    // bl String_New
    // add r6, r0, #0
    // ldr r0, [sp, #0x14]
    // mov r1, #0x6d
    // bl sub_020315B8
    // str r0, [sp, #0x18]
    // ldr r1, [sp, #0x18]
    // add r0, r5, #0
    // bl ov40_02230DCC
    // ldr r0, [r5, #0x48]
    // add r1, r4, #0
    // bl NewString_ReadMsgData
    // add r4, r0, #0
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #2
    // mov r1, #0
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x18]
    // add r0, r7, #0
    // add r3, r1, #0
    // bl BufferString
    // add r0, r7, #0
    // add r1, r6, #0
    // add r2, r4, #0
    // bl StringExpandPlaceholders
    // ldr r0, [sp, #0x18]
    // bl String_Delete
    // add r0, r4, #0
    // bl String_Delete
    // add r0, r7, #0
    // bl MessageFormat_Delete
    // b _0223A602
    // cmp r4, #0x66
    // bne _0223A5FA
    // lsl r0, r2, #2
    // add r1, r5, r0
    // ldr r0, _0223A638 ; =0x000008A4
    // sub r0, #0x18
    // ldr r0, [r1, r0]
    // str r0, [sp, #0x10]
    // mov r0, #0x6d
    // bl ov40_0222DAB0
    // add r7, r0, #0
    // mov r0, #0xff
    // mov r1, #0x6d
    // bl String_New
    // add r6, r0, #0
    // ldr r0, [sp, #0x10]
    // mov r1, #0x6d
    // bl sub_020315B8
    // str r0, [sp, #0x1c]
    // ldr r1, [sp, #0x1c]
    // add r0, r5, #0
    // bl ov40_02230DCC
    // ldr r0, [r5, #0x48]
    // add r1, r4, #0
    // bl NewString_ReadMsgData
    // add r4, r0, #0
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #2
    // mov r1, #0
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x1c]
    // add r0, r7, #0
    // add r3, r1, #0
    // bl BufferString
    // add r0, r7, #0
    // add r1, r6, #0
    // add r2, r4, #0
    // bl StringExpandPlaceholders
    // ldr r0, [sp, #0x1c]
    // bl String_Delete
    // add r0, r4, #0
    // bl String_Delete
    // add r0, r7, #0
    // bl MessageFormat_Delete
    // b _0223A602
    // ldr r0, [r5, #0x48]
    // bl NewString_ReadMsgData
    // add r6, r0, #0
    // ldr r0, _0223A638 ; =0x000008A4
    // mov r1, #0xcc
    // add r0, r5, r0
    // bl FillWindowPixelBuffer
    // mov r1, #0
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0223A63C ; =0x000F0D0C
    // add r2, r6, #0
    // str r0, [sp, #8]
    // ldr r0, _0223A638 ; =0x000008A4
    // add r3, r1, #0
    // add r0, r5, r0
    // str r1, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // ldr r0, _0223A638 ; =0x000008A4
    // add r0, r5, r0
    // bl ScheduleWindowCopyToVram
    // add r0, r6, #0
    // bl String_Delete
    // add sp, #0x20
    // pop {r3, r4, r5, r6, r7, pc}
    // _0223A638: .word 0x000008A4
    // _0223A63C: .word 0x000F0D0C
    // TODO: decompile
}




void ov40_0223A640(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #8
    // mov r1, #0x86
    // add r4, r0, #0
    // lsl r1, r1, #4
    // ldr r5, [r4, r1]
    // bl ov40_0223D5CC
    // cmp r0, #0
    // bne _0223A65A
    // add sp, #8
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // ldr r0, [r4, #8]
    // cmp r0, #4
    // bls _0223A662
    // b _0223A7E8
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0223A66E: ; jump table
    // ldr r0, [r4, #0x24]
    // mov r1, #2
    // bl BgClearTilemapBufferAndCommit
    // ldr r0, [r4, #0x24]
    // mov r1, #6
    // bl BgClearTilemapBufferAndCommit
    // ldr r0, [r5, #0x10]
    // cmp r0, #0
    // bne _0223A69C
    // mov r0, #0x22
    // lsl r0, r0, #4
    // add r0, r5, r0
    // mov r1, #0
    // bl ov40_022306A0
    // b _0223A6A8
    // mov r0, #0x65
    // lsl r0, r0, #2
    // add r0, r5, r0
    // mov r1, #0
    // bl ov40_0222E7DC
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // add r0, r5, #0
    // add r0, #8
    // mov r1, #1
    // bl ov40_0222DA84
    // add r0, r5, #0
    // add r1, r5, #4
    // mov r2, #1
    // mov r3, #0
    // bl ov40_0222DA00
    // cmp r0, #0
    // beq _0223A6CE
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // ldr r0, [r4, #0x58]
    // mov r1, #3
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r5, #8]
    // ldr r0, [r4, #0x28]
    // lsl r3, r3, #0x18
    // mov r2, #0xc
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // b _0223A812
    // add r0, r4, #0
    // mov r1, #0x75
    // bl ov40_0222DED0
    // mov r1, #0x6f
    // lsl r1, r1, #4
    // ldr r1, [r4, r1]
    // add r0, r4, #0
    // mov r2, #0x80
    // mov r3, #0x60
    // bl ov40_0223077C
    // mov r0, #0x6f
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #1
    // bl sub_020879E0
    // mov r0, #0x6f
    // lsl r0, r0, #4
    // mov r1, #0x18
    // ldr r0, [r4, r0]
    // add r2, r1, #0
    // bl sub_02087A08
    // ldr r0, _0223A818 ; =0x00002038
    // mov r1, #0
    // str r1, [r5, r0]
    // ldr r0, _0223A81C ; =0x0000057D
    // bl PlaySE
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _0223A812
    // add r0, r4, #0
    // bl ov40_0223D540
    // ldr r1, _0223A820 ; =0x000004D4
    // ldr r1, [r4, r1]
    // lsl r1, r1, #2
    // add r2, r4, r1
    // ldr r1, _0223A824 ; =0x00002608
    // ldr r2, [r2, r1]
    // add r1, r2, #0
    // add r1, #0xd8
    // add r2, #0xdc
    // ldr r1, [r1]
    // ldr r2, [r2]
    // bl ov39_02227720
    // cmp r0, #1
    // bne _0223A812
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _0223A812
    // add r0, r4, #0
    // bl ov40_0222DFB0
    // add r0, r4, #0
    // bl ov40_0223D540
    // add r1, sp, #4
    // bl ov39_02227D44
    // cmp r0, #1
    // ldr r0, _0223A81C ; =0x0000057D
    // bne _0223A794
    // mov r1, #0
    // bl StopSE
    // ldr r3, [sp, #4]
    // add r0, r4, #0
    // ldr r2, [r3, #0xc]
    // ldr r3, [r3, #4]
    // mov r1, #8
    // bl ov40_02230CDC
    // ldr r0, [r4, #8]
    // mov r1, #0
    // add r0, r0, #1
    // str r0, [r4, #8]
    // ldr r0, _0223A818 ; =0x00002038
    // str r1, [r5, r0]
    // b _0223A7CC
    // mov r1, #0
    // bl StopSE
    // mov r0, #0xff
    // ldr r1, _0223A818 ; =0x00002038
    // str r0, [r4, #8]
    // mov r2, #1
    // str r2, [r5, r1]
    // ldr r1, _0223A828 ; =0x0000413C
    // add r2, r4, r1
    // ldr r1, _0223A820 ; =0x000004D4
    // ldr r1, [r4, r1]
    // add r1, r2, r1
    // ldr r2, _0223A82C ; =0x00000878
    // str r1, [r4, r2]
    // add r1, r2, #0
    // add r1, #0x3c
    // ldr r3, [r4, r1]
    // add r1, r0, #0
    // add r1, #0x85
    // str r3, [r5, r1]
    // add r0, #0x85
    // add r2, #0x40
    // add r1, r4, r2
    // ldr r0, [r5, r0]
    // ldr r2, _0223A830 ; =0x00001D4C
    // bl MI_CpuCopy8
    // mov r0, #0x6f
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl sub_020879E0
    // mov r0, #0x6f
    // lsl r0, r0, #4
    // mov r1, #0
    // ldr r0, [r4, r0]
    // add r2, r1, #0
    // bl sub_02087A08
    // b _0223A812
    // ldr r0, _0223A818 ; =0x00002038
    // ldr r0, [r5, r0]
    // cmp r0, #0
    // beq _0223A80A
    // ldr r0, _0223A834 ; =0x00000577
    // bl PlaySE
    // ldr r1, _0223A838 ; =0x00002034
    // add r0, r4, #0
    // ldr r1, [r5, r1]
    // bl ov40_0222BF80
    // add r0, r4, #0
    // mov r1, #1
    // bl ov40_0222FC40
    // b _0223A812
    // add r0, r4, #0
    // mov r1, #0x14
    // bl ov40_0222BF80
    // mov r0, #0
    // add sp, #8
    // pop {r3, r4, r5, pc}
    // _0223A818: .word 0x00002038
    // _0223A81C: .word 0x0000057D
    // _0223A820: .word 0x000004D4
    // _0223A824: .word 0x00002608
    // _0223A828: .word 0x0000413C
    // _0223A82C: .word 0x00000878
    // _0223A830: .word 0x00001D4C
    // _0223A834: .word 0x00000577
    // _0223A838: .word 0x00002034
    // TODO: decompile
}




void ov40_0223A83C(void) {
    // ldr r4, [r0, r1]
    // ldr r0, [r4, r0]
    sub_02030938((0x89 << 2), (0x86 << 4));
    // ldr r0, [r4, r0]
    sub_020314BC((0x65 << 2));
}




void ov40_0223A85C(void) {
}




void ov40_0223A874(void) {
    // ldr r4, [r5, r1]
    GfGfx_EngineBTogglePlanes(4, 0);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    ov40_0222DA00(r4, (r4 + 4), 1, 2);
    ov40_0223CE38(r5);
    BgClearTilemapBufferAndCommit(*((u32*)(r5 + 0x24)), 6);
    BgClearTilemapBufferAndCommit(*((u32*)(r5 + 0x24)), 7);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    // add r0, #8
    ov40_0222DA84(r4, 0);
    ov40_0222DA00(r4, (r4 + 4), 0, 2);
    ov40_0223A510(r5, 0x64, 0);
    GfGfx_EngineBTogglePlanes(4, 1);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r5 + 0x28)), 3, 0xc, ((*((u32*)(r4 + 8)) << 0x18) >> 0x18));
    ov40_0222BF80(0xc);
}




void ov40_0223A924(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #8
    // mov r1, #0x86
    // add r4, r0, #0
    // lsl r1, r1, #4
    // ldr r5, [r4, r1]
    // ldr r1, [r4, #8]
    // cmp r1, #7
    // bls _0223A938
    // b _0223AB4A
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _0223A944: ; jump table
    // mov r0, #4
    // mov r1, #0
    // bl GfGfx_EngineBTogglePlanes
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _0223ABFC
    // add r0, r5, #0
    // add r0, #8
    // mov r1, #1
    // bl ov40_0222DA84
    // add r0, r5, #0
    // add r1, r5, #4
    // mov r2, #1
    // mov r3, #2
    // bl ov40_0222DA00
    // cmp r0, #0
    // beq _0223A99C
    // ldr r0, [r4, #0x24]
    // mov r1, #6
    // bl BgClearTilemapBufferAndCommit
    // ldr r1, _0223AC04 ; =0x00000116
    // add r0, r4, #0
    // mov r2, #0
    // bl ov40_0223A510
    // add r0, r4, #0
    // bl ov40_022306E0
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // ldr r0, [r4, #0x58]
    // mov r1, #3
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r5, #8]
    // ldr r0, [r4, #0x28]
    // lsl r3, r3, #0x18
    // mov r2, #0xc
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // b _0223ABFC
    // ldr r2, _0223AC08 ; =0x000004D4
    // ldr r1, _0223AC0C ; =0x00002028
    // ldr r2, [r4, r2]
    // ldr r1, [r5, r1]
    // add r3, r4, r2
    // ldr r2, _0223AC10 ; =0x0000413C
    // ldrb r2, [r3, r2]
    // bl ov40_0222FC14
    // cmp r0, #0
    // beq _0223AA9C
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _0223ABFC
    // mov r1, #0x6f
    // lsl r1, r1, #4
    // ldr r1, [r4, r1]
    // mov r2, #0x80
    // mov r3, #0x60
    // bl ov40_0223077C
    // mov r0, #0x6f
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #1
    // bl sub_020879E0
    // mov r0, #0x6f
    // lsl r0, r0, #4
    // mov r1, #0x18
    // ldr r0, [r4, r0]
    // add r2, r1, #0
    // bl sub_02087A08
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // ldr r0, _0223AC14 ; =0x0000057D
    // bl PlaySE
    // b _0223ABFC
    // bl ov40_0223D5CC
    // cmp r0, #0
    // bne _0223AA18
    // add sp, #8
    // mov r0, #0
    // pop {r4, r5, r6, pc}
    // mov r1, #0x46
    // add r0, r4, #0
    // lsl r1, r1, #2
    // mov r2, #0
    // bl ov40_0223A510
    // bl sub_020307F8
    // mov r1, #4
    // mov r2, #0
    // bl sub_0203088C
    // add r6, r0, #0
    // add r5, r1, #0
    // add r0, r4, #0
    // bl ov40_0223D540
    // add r1, r6, #0
    // add r2, r5, #0
    // bl ov39_0222774C
    // cmp r0, #1
    // bne _0223AA9C
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _0223ABFC
    // bl ov40_0223D5CC
    // cmp r0, #0
    // bne _0223AA5C
    // add sp, #8
    // mov r0, #0
    // pop {r4, r5, r6, pc}
    // add r0, r4, #0
    // bl ov40_0223D540
    // add r1, sp, #4
    // bl ov39_02227D44
    // cmp r0, #1
    // ldr r0, _0223AC14 ; =0x0000057D
    // bne _0223AA76
    // mov r1, #0
    // bl StopSE
    // b _0223AA82
    // mov r1, #0
    // bl StopSE
    // ldr r0, _0223AC18 ; =0x00000577
    // bl PlaySE
    // ldr r0, [r4, #8]
    // ldr r1, _0223AC1C ; =0x00000119
    // add r0, r0, #1
    // str r0, [r4, #8]
    // add r0, r4, #0
    // mov r2, #0
    // bl ov40_0223A510
    // b _0223ABFC
    // bl System_GetTouchNew
    // cmp r0, #0
    // bne _0223AA9E
    // b _0223ABFC
    // add r0, r4, #0
    // bl ov40_0222DEAC
    // add r0, r4, #0
    // mov r1, #1
    // bl ov40_02230964
    // add r0, r4, #0
    // bl ov40_0223B44C
    // add r0, r4, #0
    // mov r1, #0
    // bl ov40_02230964
    // mov r0, #0x6f
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl sub_020879E0
    // mov r0, #0x6f
    // lsl r0, r0, #4
    // mov r1, #0
    // ldr r0, [r4, r0]
    // add r2, r1, #0
    // bl sub_02087A08
    // add r0, r4, #0
    // bl ov40_0222FDC4
    // add r0, r4, #0
    // bl ov40_0222FCCC
    // ldr r0, _0223AC20 ; =0x0000049C
    // add r0, r4, r0
    // bl ov40_0222F734
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _0223ABFC
    // mov r0, #0x62
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // bl TouchHitboxController_Destroy
    // mov r0, #0x63
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // bl TouchHitboxController_Destroy
    // mov r0, #0x19
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // bl TouchHitboxController_Destroy
    // add r0, r4, #0
    // bl ov40_0223A83C
    // add r5, #8
    // add r0, r5, #0
    // bl ov40_0222DAA8
    // add r0, r4, #0
    // mov r1, #1
    // bl ov40_02230964
    // add r0, r4, #0
    // bl ov40_0222D88C
    // add r0, r4, #0
    // mov r1, #0
    // bl ov40_02230964
    // mov r0, #1
    // mov r1, #0x6d
    // bl sub_0203A948
    // add r0, r4, #0
    // mov r1, #1
    // bl ov40_0222FB90
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _0223ABFC
    // add r0, r4, #0
    // bl ov40_0222FBB4
    // cmp r0, #0
    // beq _0223ABFC
    // add r0, r5, #0
    // add r0, #8
    // mov r1, #0
    // bl ov40_0222DA84
    // cmp r0, #0
    // beq _0223ABCC
    // add r0, r4, #0
    // bl ov40_0222DD08
    // add r0, r5, #0
    // add r0, #8
    // bl ov40_0222DAA8
    // ldr r0, [r4, #0x58]
    // mov r1, #2
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r0, [r4, #0x28]
    // mov r2, #0xc
    // mov r3, #0x10
    // bl PaletteData_BlendPalettes
    // mov r1, #1
    // ldr r3, [r4, #0x10]
    // add r0, r4, #0
    // add r2, r1, #0
    // bl ov40_0222BF64
    // add r0, r4, #0
    // mov r1, #5
    // bl ov40_0222BF80
    // ldr r0, [r4, #0x24]
    // mov r1, #2
    // bl BgClearTilemapBufferAndCommit
    // ldr r0, [r4, #0x24]
    // mov r1, #6
    // bl BgClearTilemapBufferAndCommit
    // ldr r0, [r4, #0x24]
    // mov r1, #3
    // bl BgClearTilemapBufferAndCommit
    // ldr r0, [r4, #0x24]
    // mov r1, #7
    // bl BgClearTilemapBufferAndCommit
    // add r0, r5, #0
    // bl Heap_Free
    // bl sub_0202FC48
    // cmp r0, #1
    // bne _0223ABFC
    // bl sub_0202FC24
    // b _0223ABFC
    // ldr r0, [r4, #0x58]
    // mov r1, #1
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r5, #8]
    // ldr r0, [r4, #0x28]
    // lsl r3, r3, #0x18
    // mov r2, #2
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // ldr r0, [r4, #0x58]
    // mov r1, #3
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r5, #8]
    // ldr r0, [r4, #0x28]
    // lsl r3, r3, #0x18
    // mov r2, #0xc
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // mov r0, #0
    // add sp, #8
    // pop {r4, r5, r6, pc}
    // nop
    // _0223AC04: .word 0x00000116
    // _0223AC08: .word 0x000004D4
    // _0223AC0C: .word 0x00002028
    // _0223AC10: .word 0x0000413C
    // _0223AC14: .word 0x0000057D
    // _0223AC18: .word 0x00000577
    // _0223AC1C: .word 0x00000119
    // _0223AC20: .word 0x0000049C
    // TODO: decompile
}




void ov40_0223AC24(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x10
    // mov r1, #0x86
    // add r5, r0, #0
    // lsl r1, r1, #4
    // ldr r4, [r5, r1]
    // ldr r1, [r5, #8]
    // cmp r1, #0
    // beq _0223AC3C
    // cmp r1, #1
    // beq _0223AC9A
    // b _0223ACC0
    // add r0, r4, #0
    // add r0, #8
    // mov r1, #1
    // bl ov40_0222DA84
    // add r0, r4, #0
    // add r1, r4, #4
    // mov r2, #1
    // mov r3, #2
    // bl ov40_0222DA00
    // cmp r0, #0
    // beq _0223AC80
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x6d
    // str r0, [sp, #0xc]
    // ldr r0, [r5, #0x14]
    // ldr r2, [r5, #0x24]
    // mov r1, #0x54
    // mov r3, #7
    // bl GfGfxLoader_LoadScrnDataFromOpenNarc
    // ldr r2, _0223ACCC ; =0x00002028
    // add r0, r5, #0
    // ldr r2, [r4, r2]
    // mov r1, #0x66
    // bl ov40_0223A510
    // ldr r0, [r5, #8]
    // add r0, r0, #1
    // str r0, [r5, #8]
    // ldr r0, [r5, #0x58]
    // mov r1, #3
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r4, #8]
    // ldr r0, [r5, #0x28]
    // lsl r3, r3, #0x18
    // mov r2, #0xc
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // b _0223ACC6
    // add r0, r4, #0
    // add r1, r4, #4
    // mov r2, #0
    // mov r3, #2
    // bl ov40_0222DA00
    // cmp r0, #0
    // beq _0223ACC6
    // add r0, r5, #0
    // bl ov40_0223CD58
    // mov r0, #4
    // mov r1, #1
    // bl GfGfx_EngineBTogglePlanes
    // ldr r0, [r5, #8]
    // add r0, r0, #1
    // str r0, [r5, #8]
    // b _0223ACC6
    // mov r1, #0xf
    // bl ov40_0222BF80
    // mov r0, #0
    // add sp, #0x10
    // pop {r3, r4, r5, pc}
    // _0223ACCC: .word 0x00002028
    // TODO: decompile
}




void ov40_0223ACD0(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x10
    // add r4, r0, #0
    // mov r0, #0x86
    // lsl r0, r0, #4
    // ldr r1, [r4, #8]
    // ldr r5, [r4, r0]
    // cmp r1, #3
    // bls _0223ACE4
    // b _0223AEEC
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _0223ACF0: ; jump table
    // ldr r0, [r4, #0x24]
    // mov r1, #2
    // bl BgClearTilemapBufferAndCommit
    // ldr r0, [r4, #0x24]
    // mov r1, #6
    // bl BgClearTilemapBufferAndCommit
    // mov r0, #4
    // mov r1, #0
    // bl GfGfx_EngineBTogglePlanes
    // mov r0, #4
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _0223AF18
    // add r0, r5, #0
    // add r0, #8
    // mov r1, #1
    // bl ov40_0222DA84
    // add r0, r5, #0
    // add r1, r5, #4
    // mov r2, #1
    // mov r3, #0
    // bl ov40_0222DA00
    // cmp r0, #0
    // beq _0223AD40
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // ldr r0, [r4, #0x58]
    // mov r1, #3
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r5, #8]
    // ldr r0, [r4, #0x28]
    // lsl r3, r3, #0x18
    // mov r2, #0xc
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // b _0223AF18
    // add r0, #0xc
    // ldr r0, [r4, r0]
    // cmp r0, #0xd2
    // bne _0223AD9A
    // mov r0, #0x45
    // lsl r0, r0, #2
    // add r1, r4, #0
    // add r0, r5, r0
    // add r1, #0x14
    // mov r2, #3
    // bl ov40_0222D66C
    // mov r0, #0x13
    // lsl r0, r0, #4
    // add r1, r4, #0
    // add r0, r5, r0
    // add r1, #0x14
    // mov r2, #0x5e
    // bl ov40_0222D66C
    // mov r0, #0x46
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #0
    // bl ManagedSprite_SetAnim
    // mov r0, #0x4d
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #3
    // bl ManagedSprite_SetAnim
    // add r0, r4, #0
    // bl ov40_0223CCA0
    // add r0, r4, #0
    // bl ov40_0223CD14
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x6d
    // str r0, [sp, #0xc]
    // ldr r0, [r4, #0x14]
    // ldr r2, [r4, #0x24]
    // mov r1, #0x3e
    // mov r3, #3
    // bl GfGfxLoader_LoadCharDataFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x6d
    // str r0, [sp, #0xc]
    // ldr r0, [r4, #0x14]
    // ldr r2, [r4, #0x24]
    // mov r1, #0x3e
    // mov r3, #7
    // bl GfGfxLoader_LoadCharDataFromOpenNarc
    // add r0, r4, #0
    // mov r1, #1
    // bl ov40_02230964
    // ldr r0, [r5, #0x10]
    // cmp r0, #0
    // bne _0223AE1E
    // mov r0, #0x22
    // lsl r0, r0, #4
    // add r0, r5, r0
    // add r1, r4, #0
    // bl ov40_0223064C
    // mov r0, #0x22
    // lsl r0, r0, #4
    // add r0, r5, r0
    // add r1, r4, #0
    // bl ov40_02230638
    // mov r0, #0x22
    // lsl r0, r0, #4
    // add r0, r5, r0
    // mov r1, #0
    // bl ov40_022306A0
    // mov r0, #0x22
    // lsl r0, r0, #4
    // add r0, r5, r0
    // bl ov40_02230410
    // add r1, r0, #0
    // add r0, r4, #0
    // mov r2, #3
    // bl ov40_022307DC
    // b _0223AE5A
    // mov r0, #0x65
    // lsl r0, r0, #2
    // add r0, r5, r0
    // add r1, r4, #0
    // bl ov40_0222E7B8
    // mov r0, #0x65
    // lsl r0, r0, #2
    // add r0, r5, r0
    // add r1, r4, #0
    // bl ov40_0222E79C
    // mov r0, #0x65
    // lsl r0, r0, #2
    // add r0, r5, r0
    // mov r1, #0
    // bl ov40_0222E7DC
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x6d
    // str r0, [sp, #0xc]
    // ldr r0, [r4, #0x14]
    // ldr r2, [r4, #0x24]
    // mov r1, #0x50
    // mov r3, #3
    // bl GfGfxLoader_LoadScrnDataFromOpenNarc
    // add r0, r4, #0
    // mov r1, #0
    // bl ov40_02230964
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x6d
    // str r0, [sp, #0xc]
    // ldr r0, [r4, #0x14]
    // ldr r2, [r4, #0x24]
    // mov r1, #6
    // mov r3, #7
    // bl GfGfxLoader_LoadScrnDataFromOpenNarc
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _0223AF18
    // add r0, r5, #0
    // add r0, #8
    // mov r1, #0
    // bl ov40_0222DA84
    // mov r2, #0
    // add r0, r5, #0
    // add r1, r5, #4
    // add r3, r2, #0
    // bl ov40_0222DA00
    // cmp r0, #0
    // beq _0223AED2
    // ldr r0, [r5, #0x10]
    // cmp r0, #0
    // bne _0223AEB0
    // mov r0, #0x22
    // lsl r0, r0, #4
    // add r0, r5, r0
    // mov r1, #1
    // bl ov40_022306A0
    // b _0223AEBC
    // mov r0, #0x65
    // lsl r0, r0, #2
    // add r0, r5, r0
    // mov r1, #1
    // bl ov40_0222E7DC
    // mov r0, #4
    // mov r1, #1
    // bl GfGfx_EngineBTogglePlanes
    // mov r0, #4
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // ldr r0, [r4, #0x58]
    // mov r1, #3
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r5, #8]
    // ldr r0, [r4, #0x28]
    // lsl r3, r3, #0x18
    // mov r2, #0xc
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // b _0223AF18
    // ldr r1, _0223AF20 ; =0x00004138
    // mov r0, #0
    // ldr r1, [r4, r1]
    // cmp r1, #0
    // ble _0223AF10
    // mov r1, #0x9a
    // lsl r1, r1, #6
    // add r5, r4, r1
    // ldr r2, _0223AF20 ; =0x00004138
    // add r6, r4, #0
    // sub r1, #0x78
    // str r5, [r6, r1]
    // ldr r3, [r4, r2]
    // add r0, r0, #1
    // add r5, #0xe4
    // add r6, r6, #4
    // cmp r0, r3
    // blt _0223AF02
    // add r0, r4, #0
    // mov r1, #7
    // bl ov40_0222BF80
    // mov r0, #0
    // add sp, #0x10
    // pop {r4, r5, r6, pc}
    // nop
    // _0223AF20: .word 0x00004138
    // TODO: decompile
}




void ov40_0223AF24(void) {
}




void ov40_0223AF3C(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x10
    // mov r1, #0x86
    // add r4, r0, #0
    // lsl r1, r1, #4
    // ldr r5, [r4, r1]
    // ldr r1, [r4, #8]
    // cmp r1, #3
    // bls _0223AF50
    // b _0223B154
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _0223AF5C: ; jump table
    // ldr r0, [r4, #0x24]
    // mov r1, #2
    // bl BgClearTilemapBufferAndCommit
    // ldr r0, [r4, #0x24]
    // mov r1, #6
    // bl BgClearTilemapBufferAndCommit
    // mov r0, #4
    // mov r1, #0
    // bl GfGfx_EngineBTogglePlanes
    // mov r0, #4
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _0223B180
    // add r0, r5, #0
    // add r0, #8
    // mov r1, #1
    // bl ov40_0222DA84
    // add r0, r5, #0
    // add r1, r5, #4
    // mov r2, #1
    // mov r3, #0
    // bl ov40_0222DA00
    // cmp r0, #0
    // beq _0223AFC2
    // add r0, r4, #0
    // mov r1, #1
    // bl ov40_02230964
    // add r0, r4, #0
    // bl ov40_0223B44C
    // add r0, r4, #0
    // mov r1, #0
    // bl ov40_02230964
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // ldr r0, [r4, #0x58]
    // mov r1, #3
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r5, #8]
    // ldr r0, [r4, #0x28]
    // lsl r3, r3, #0x18
    // mov r2, #0xc
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // b _0223B180
    // bl ov40_0223A430
    // ldr r0, _0223B188 ; =0x0000086C
    // ldr r0, [r4, r0]
    // cmp r0, #0xd2
    // bne _0223B020
    // mov r0, #0x45
    // lsl r0, r0, #2
    // add r1, r4, #0
    // add r0, r5, r0
    // add r1, #0x14
    // mov r2, #3
    // bl ov40_0222D66C
    // mov r0, #0x13
    // lsl r0, r0, #4
    // add r1, r4, #0
    // add r0, r5, r0
    // add r1, #0x14
    // mov r2, #0x5e
    // bl ov40_0222D66C
    // mov r0, #0x46
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #0
    // bl ManagedSprite_SetAnim
    // mov r0, #0x4d
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #3
    // bl ManagedSprite_SetAnim
    // add r0, r4, #0
    // bl ov40_0223CD14
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x6d
    // str r0, [sp, #0xc]
    // ldr r0, [r4, #0x14]
    // ldr r2, [r4, #0x24]
    // mov r1, #0x3e
    // mov r3, #3
    // bl GfGfxLoader_LoadCharDataFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x6d
    // str r0, [sp, #0xc]
    // ldr r0, [r4, #0x14]
    // ldr r2, [r4, #0x24]
    // mov r1, #0x3e
    // mov r3, #7
    // bl GfGfxLoader_LoadCharDataFromOpenNarc
    // add r0, r4, #0
    // mov r1, #1
    // bl ov40_02230964
    // ldr r0, [r5, #0x10]
    // cmp r0, #0
    // bne _0223B092
    // mov r0, #0x22
    // lsl r0, r0, #4
    // add r0, r5, r0
    // add r1, r4, #0
    // bl ov40_02230638
    // mov r0, #0x22
    // lsl r0, r0, #4
    // add r0, r5, r0
    // mov r1, #0
    // bl ov40_022306A0
    // mov r0, #0x22
    // lsl r0, r0, #4
    // add r0, r5, r0
    // bl ov40_02230410
    // add r1, r0, #0
    // add r0, r4, #0
    // mov r2, #3
    // bl ov40_022307DC
    // b _0223B0C2
    // mov r0, #0x65
    // lsl r0, r0, #2
    // add r0, r5, r0
    // add r1, r4, #0
    // bl ov40_0222E79C
    // mov r0, #0x65
    // lsl r0, r0, #2
    // add r0, r5, r0
    // mov r1, #0
    // bl ov40_0222E7DC
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x6d
    // str r0, [sp, #0xc]
    // ldr r0, [r4, #0x14]
    // ldr r2, [r4, #0x24]
    // mov r1, #0x50
    // mov r3, #3
    // bl GfGfxLoader_LoadScrnDataFromOpenNarc
    // add r0, r4, #0
    // mov r1, #0
    // bl ov40_02230964
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x6d
    // str r0, [sp, #0xc]
    // ldr r0, [r4, #0x14]
    // ldr r2, [r4, #0x24]
    // mov r1, #6
    // mov r3, #7
    // bl GfGfxLoader_LoadScrnDataFromOpenNarc
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _0223B180
    // add r0, r5, #0
    // add r0, #8
    // mov r1, #0
    // bl ov40_0222DA84
    // mov r2, #0
    // add r0, r5, #0
    // add r1, r5, #4
    // add r3, r2, #0
    // bl ov40_0222DA00
    // cmp r0, #0
    // beq _0223B13A
    // ldr r0, [r5, #0x10]
    // cmp r0, #0
    // bne _0223B118
    // mov r0, #0x22
    // lsl r0, r0, #4
    // add r0, r5, r0
    // mov r1, #1
    // bl ov40_022306A0
    // b _0223B124
    // mov r0, #0x65
    // lsl r0, r0, #2
    // add r0, r5, r0
    // mov r1, #1
    // bl ov40_0222E7DC
    // mov r0, #4
    // mov r1, #1
    // bl GfGfx_EngineBTogglePlanes
    // mov r0, #4
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // ldr r0, [r4, #0x58]
    // mov r1, #3
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r5, #8]
    // ldr r0, [r4, #0x28]
    // lsl r3, r3, #0x18
    // mov r2, #0xc
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // b _0223B180
    // ldr r1, _0223B18C ; =0x00004138
    // mov r0, #0
    // ldr r1, [r4, r1]
    // cmp r1, #0
    // ble _0223B178
    // mov r1, #0x9a
    // lsl r1, r1, #6
    // add r5, r4, r1
    // ldr r2, _0223B18C ; =0x00004138
    // add r6, r4, #0
    // sub r1, #0x78
    // str r5, [r6, r1]
    // ldr r3, [r4, r2]
    // add r0, r0, #1
    // add r5, #0xe4
    // add r6, r6, #4
    // cmp r0, r3
    // blt _0223B16A
    // add r0, r4, #0
    // mov r1, #7
    // bl ov40_0222BF80
    // mov r0, #0
    // add sp, #0x10
    // pop {r4, r5, r6, pc}
    // nop
    // _0223B188: .word 0x0000086C
    // _0223B18C: .word 0x00004138
    // TODO: decompile
}




void ov40_0223B190(void) {
    // ldr r4, [r5, r1]
    // ldr r0, [r4, r0]
    TouchHitboxController_Destroy((0x62 << 2), *((u32*)(r0 + 8)));
    // ldr r0, [r4, r0]
    TouchHitboxController_Destroy((0x63 << 2));
    // ldr r0, [r4, r0]
    TouchHitboxController_Destroy((0x19 << 4));
    GfGfx_EngineBTogglePlanes(4, 0);
    GfGfx_EngineATogglePlanes(4, 0);
    ov40_0223A83C(r5);
    ov40_02230964(r5, 1);
    // add r0, r4, r0
    ov40_0223064C((0x22 << 4), r5);
    // add r0, r4, r0
    ov40_0222E7B8((0x65 << 2), r5);
    ov40_02230964(r5, 0);
    ov40_0223CCA0(r5);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    // add r0, #8
    ov40_0222DA84(r4, 1);
    ov40_0222DA00(r4, (r4 + 4), 1, 0);
    // add r0, r4, r0
    // add r1, #0x14
    ov40_0222D66C((0x45 << 2), r5, 3);
    // add r0, r4, r0
    // add r1, #0x14
    ov40_0222D66C((0x13 << 4), r5, 0x6f);
    // ldr r0, [r4, r0]
    ManagedSprite_SetAnim((0x46 << 2), 0);
    // ldr r0, [r4, r0]
    ManagedSprite_SetAnim((0x4d << 2), 1);
    ov40_0223B4BC(r5, 1);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r5 + 0x28)), 3, 0xc, ((*((u32*)(r4 + 8)) << 0x18) >> 0x18));
    ov40_0222BF80(3);
}




void ov40_0223B29C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x28
    // add r5, r1, #0
    // ldr r1, _0223B36C ; =0x0000088C
    // lsl r6, r2, #2
    // add r4, r5, r1
    // ldr r1, [r4, r6]
    // str r0, [sp, #0x10]
    // ldr r0, [r5, #0x48]
    // cmp r1, #0
    // bne _0223B2BC
    // mov r1, #8
    // bl NewString_ReadMsgData
    // add r4, r0, #0
    // b _0223B31A
    // mov r0, #0x6d
    // bl ov40_0222DAB0
    // add r7, r0, #0
    // ldr r0, [r5, #0x48]
    // mov r1, #7
    // bl NewString_ReadMsgData
    // str r0, [sp, #0x14]
    // ldr r0, [r4, r6]
    // mov r1, #0x6d
    // bl sub_020315B8
    // add r6, r0, #0
    // add r0, r5, #0
    // add r1, r6, #0
    // bl ov40_02230DCC
    // mov r0, #0xff
    // mov r1, #0x6d
    // bl String_New
    // add r4, r0, #0
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #2
    // mov r1, #0
    // str r0, [sp, #4]
    // add r0, r7, #0
    // add r2, r6, #0
    // add r3, r1, #0
    // bl BufferString
    // ldr r2, [sp, #0x14]
    // add r0, r7, #0
    // add r1, r4, #0
    // bl StringExpandPlaceholders
    // ldr r0, [sp, #0x14]
    // bl String_Delete
    // add r0, r6, #0
    // bl String_Delete
    // add r0, r7, #0
    // bl MessageFormat_Delete
    // add r0, sp, #0x18
    // bl InitWindow
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [r5, #0x24]
    // add r1, sp, #0x18
    // mov r2, #0x14
    // mov r3, #2
    // bl AddTextWindowTopLeftCorner
    // mov r1, #0
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0223B370 ; =0x000E0D00
    // add r2, r4, #0
    // str r0, [sp, #8]
    // add r0, sp, #0x18
    // add r3, r1, #0
    // str r1, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // ldr r0, [sp, #0x10]
    // ldr r1, [sp, #0x10]
    // ldr r0, [r0, #8]
    // ldr r1, [r1, #0xc]
    // add r2, sp, #0x18
    // mov r3, #0x6d
    // bl TextOBJ_CopyFromBGWindow
    // add r0, r4, #0
    // bl String_Delete
    // add r0, sp, #0x18
    // bl RemoveWindow
    // add sp, #0x28
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0223B36C: .word 0x0000088C
    // _0223B370: .word 0x000E0D00
    // TODO: decompile
}




void ov40_0223B374(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x30
    // mov r1, #0x86
    // lsl r1, r1, #4
    // ldr r3, _0223B444 ; =ov40_022454C0
    // ldr r4, [r0, r1]
    // str r0, [sp]
    // add r2, sp, #0x20
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldr r3, _0223B448 ; =ov40_022454D0
    // add r2, sp, #0x10
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldr r0, [sp]
    // mov r1, #2
    // bl ov40_0222D78C
    // mov r0, #0x45
    // lsl r0, r0, #2
    // add r5, r4, r0
    // add r0, sp, #0x20
    // str r0, [sp, #8]
    // mov r0, #0x69
    // str r0, [sp, #4]
    // ldr r0, [sp]
    // mov r6, #0
    // str r0, [sp, #0xc]
    // add r0, #0x14
    // add r7, sp, #0x10
    // str r0, [sp, #0xc]
    // ldr r0, [sp]
    // mov r1, #2
    // bl ov40_0222D800
    // mov r1, #0x46
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // ldr r1, [sp, #0xc]
    // add r0, r5, #0
    // mov r2, #2
    // bl ov40_0222D5AC
    // ldr r2, [sp, #8]
    // ldr r1, [sp, #0xc]
    // ldr r2, [r2]
    // add r0, r5, #0
    // bl ov40_0222D66C
    // cmp r6, #3
    // beq _0223B3EC
    // ldr r1, [sp]
    // add r0, r5, #0
    // add r2, r6, #1
    // bl ov40_0223B29C
    // mov r0, #0x46
    // ldr r2, [sp, #4]
    // lsl r0, r0, #2
    // lsl r2, r2, #0x10
    // ldr r0, [r4, r0]
    // mov r1, #0x32
    // asr r2, r2, #0x10
    // bl ManagedSprite_SetPositionXY
    // mov r0, #0x46
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // ldr r1, [r7]
    // bl ManagedSprite_SetAnim
    // mov r0, #0x47
    // lsl r0, r0, #2
    // mov r1, #0x24
    // add r2, r1, #0
    // ldr r0, [r4, r0]
    // sub r2, #0x2c
    // bl sub_020136B4
    // mov r0, #0x47
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #1
    // bl TextOBJ_SetSpritesDrawFlag
    // ldr r0, [sp, #8]
    // add r6, r6, #1
    // add r0, r0, #4
    // str r0, [sp, #8]
    // ldr r0, [sp, #4]
    // add r4, #0x1c
    // add r0, #0x24
    // add r5, #0x1c
    // add r7, r7, #4
    // str r0, [sp, #4]
    // cmp r6, #4
    // blt _0223B3BA
    // add sp, #0x30
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0223B444: .word ov40_022454C0
    // _0223B448: .word ov40_022454D0
    // TODO: decompile
}




void ov40_0223B44C(void) {
    // str r0, [sp]
    // ldr r5, [r0, r1]
    // add r4, r5, r0
    ov40_0222D6D0(r4, (0x86 << 4));
    // ldr r0, [r5, r7]
    Sprite_DeleteAndFreeResources();
    // add r4, #0x1c
    // add r5, #0x1c
    // ldr r0, [sp]
    ov40_0222D7DC();
}




void ov40_0223B480(void) {
    // ldr r4, [r5, r0]
    // add r0, r4, r0
    ov40_0222D6D0((0x45 << 2));
    // add r0, r4, r0
    ov40_0222D6D0((0x13 << 4));
    // ldr r0, [r4, r0]
    Sprite_DeleteAndFreeResources((0x46 << 2));
    // ldr r0, [r4, r0]
    Sprite_DeleteAndFreeResources((0x4d << 2));
    ov40_0222D7DC(r5);
}




void ov40_0223B4BC(void) {
    // ldr r4, [r0, r2]
    // ldr r0, [r4, r0]
    ManagedSprite_SetDrawFlag((0x4d << 2), 1, (0x86 << 4));
    // ldr r0, [r4, r0]
    TextOBJ_SetSpritesDrawFlag((0x4e << 2), 1);
    // ldr r0, [r4, r0]
    ManagedSprite_SetPositionXY((0x46 << 2), 0x20, 0xe8);
    // ldr r0, [r4, r0]
    ManagedSprite_SetDrawFlag((0x4d << 2), 0);
    // ldr r0, [r4, r0]
    TextOBJ_SetSpritesDrawFlag((0x4e << 2), 0);
    // ldr r0, [r4, r0]
    ManagedSprite_SetPositionXY((0x46 << 2), 0x50, 0xe8);
    // ldr r0, [r4, r0]
    // sub r2, #0x2c
    sub_020136B4((0x47 << 2), 0x24, 0x24);
    // ldr r0, [r4, r0]
    // sub r2, #0x2c
    sub_020136B4((0x4e << 2), 0x24, 0x24);
}




void ov40_0223B538(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // mov r1, #0x86
    // lsl r1, r1, #4
    // ldr r6, [r0, r1]
    // ldr r0, _0223B570 ; =0x00002030
    // mov r4, #0
    // ldr r0, [r6, r0]
    // cmp r0, #0
    // ble _0223B566
    // add r5, r6, #0
    // ldr r7, _0223B570 ; =0x00002030
    // add r5, #0x14
    // add r0, r5, #0
    // bl ClearWindowTilemapAndCopyToVram
    // add r0, r5, #0
    // bl RemoveWindow
    // ldr r0, [r6, r7]
    // add r4, r4, #1
    // add r5, #0x10
    // cmp r4, r0
    // blt _0223B550
    // ldr r0, _0223B570 ; =0x00002030
    // mov r1, #0
    // str r1, [r6, r0]
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0223B570: .word 0x00002030
    // TODO: decompile
}




void ov40_0223B574(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // mov r1, #0x86
    // lsl r1, r1, #4
    // ldr r6, [r0, r1]
    // ldr r0, _0223B5AC ; =0x0000202C
    // mov r4, #0
    // ldr r0, [r6, r0]
    // cmp r0, #0
    // ble _0223B5A2
    // add r5, r6, #0
    // ldr r7, _0223B5AC ; =0x0000202C
    // add r5, #0x94
    // add r0, r5, #0
    // bl ClearWindowTilemapAndCopyToVram
    // add r0, r5, #0
    // bl RemoveWindow
    // ldr r0, [r6, r7]
    // add r4, r4, #1
    // add r5, #0x10
    // cmp r4, r0
    // blt _0223B58C
    // ldr r0, _0223B5AC ; =0x0000202C
    // mov r1, #0
    // str r1, [r6, r0]
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0223B5AC: .word 0x0000202C
    // TODO: decompile
}




void ov40_0223B5B0(void) {
    // push {r3, r4, r5, lr}
    // ldr r1, _0223B628 ; =0x0000217C
    // add r5, r0, #0
    // mov r0, #0x6d
    // bl Heap_Alloc
    // ldr r2, _0223B628 ; =0x0000217C
    // mov r1, #0
    // add r4, r0, #0
    // bl memset
    // mov r0, #0x86
    // lsl r0, r0, #4
    // str r4, [r5, r0]
    // add r0, #0xc
    // ldr r1, [r5, r0]
    // mov r0, #0x4b
    // lsl r0, r0, #2
    // cmp r1, r0
    // bne _0223B5DE
    // mov r0, #0
    // str r0, [r4, #0xc]
    // b _0223B5F2
    // add r0, r0, #1
    // cmp r1, r0
    // bne _0223B5EA
    // mov r0, #1
    // str r0, [r4, #0xc]
    // b _0223B5F2
    // cmp r1, #0xc8
    // bne _0223B5F2
    // mov r0, #2
    // str r0, [r4, #0xc]
    // ldr r0, [r5, #0x24]
    // mov r1, #2
    // bl BgClearTilemapBufferAndCommit
    // ldr r0, [r5, #0x24]
    // mov r1, #3
    // bl BgClearTilemapBufferAndCommit
    // ldr r0, [r5, #0x24]
    // mov r1, #6
    // bl BgClearTilemapBufferAndCommit
    // ldr r0, [r5, #0x24]
    // mov r1, #7
    // bl BgClearTilemapBufferAndCommit
    // add r0, r4, #0
    // add r1, r4, #4
    // mov r2, #0
    // bl ov40_0222D9E8
    // add r0, r5, #0
    // mov r1, #1
    // bl ov40_0222BF80
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // _0223B628: .word 0x0000217C
    // TODO: decompile
}




void ov40_0223B62C(void) {
    // ldr r4, [r5, r1]
    // add r0, #8
    ov40_0222DA84(r4, 1);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r5 + 0x28)), 2, 0xc, ((*((u32*)(r4 + 8)) << 0x18) >> 0x18));
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r5 + 0x28)), 3, 0xc, ((*((u32*)(r4 + 8)) << 0x18) >> 0x18));
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r5 + 0x28)), 1, 2, ((*((u32*)(r4 + 8)) << 0x18) >> 0x18));
    SetBgPriority(0, 1);
    SetBgPriority(1, 3);
    SetBgPriority(2, 0);
    SetBgPriority(3, 1);
    SetBgPriority(4, 1);
    SetBgPriority(5, 3);
    SetBgPriority(6, 0);
    SetBgPriority(7, 2);
    ov40_0222FB90(r5, 0);
    // ldr r0, [r5, r0]
    sub_020879E0((0x6f << 4), 0);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    ov40_0222FBB4((*((u32*)(r5 + 8)) + 1));
    ov40_02230964(r5, 1);
    ov40_0222D874(r5);
    ov40_02230964(r5, 0);
    ov40_02230964(r5, 1);
    ov40_0223A430(r5);
    ov40_02230964(r5, 0);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    ov40_0222C4DC((*((u32*)(r5 + 8)) + 1));
    ov40_0222BF80(r5, 0x13);
    ov40_0222BF80(r5, 2);
}




void ov40_0223B75C(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #8
    // mov r1, #0x86
    // add r4, r0, #0
    // lsl r1, r1, #4
    // ldr r5, [r4, r1]
    // bl ov40_0223D5CC
    // cmp r0, #0
    // bne _0223B776
    // add sp, #8
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // ldr r0, [r4, #8]
    // cmp r0, #6
    // bls _0223B77E
    // b _0223BA36
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0223B78A: ; jump table
    // mov r1, #0x6f
    // lsl r1, r1, #4
    // ldr r1, [r4, r1]
    // add r0, r4, #0
    // mov r2, #0x80
    // mov r3, #0x60
    // bl ov40_0223077C
    // mov r0, #0x6f
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #1
    // bl sub_020879E0
    // mov r0, #0x6f
    // lsl r0, r0, #4
    // mov r1, #0x18
    // ldr r0, [r4, r0]
    // add r2, r1, #0
    // bl sub_02087A08
    // ldr r0, _0223BA60 ; =0x0000086C
    // mov r1, #0x4b
    // ldr r0, [r4, r0]
    // lsl r1, r1, #2
    // sub r0, r0, r1
    // cmp r0, #1
    // bhi _0223B7DA
    // add r0, r4, #0
    // sub r1, #0x15
    // bl ov40_0222DED0
    // b _0223B7E2
    // add r0, r4, #0
    // sub r1, #8
    // bl ov40_0222DED0
    // ldr r0, _0223BA64 ; =0x0000057D
    // bl PlaySE
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _0223BA58
    // ldr r0, _0223BA60 ; =0x0000086C
    // ldr r1, [r4, r0]
    // mov r0, #0x4b
    // lsl r0, r0, #2
    // cmp r1, r0
    // bne _0223B816
    // mov r0, #0
    // str r0, [r5, #0xc]
    // add r0, r4, #0
    // bl ov40_0223D540
    // bl ov39_022276A4
    // cmp r0, #1
    // bne _0223B86C
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _0223BA58
    // add r0, r0, #1
    // cmp r1, r0
    // bne _0223B836
    // mov r0, #1
    // str r0, [r5, #0xc]
    // add r0, r4, #0
    // bl ov40_0223D540
    // bl ov39_022276E0
    // cmp r0, #1
    // bne _0223B86C
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _0223BA58
    // cmp r1, #0xc8
    // bne _0223B876
    // mov r0, #2
    // str r0, [r5, #0xc]
    // add r0, r4, #0
    // bl sub_02087E1C
    // cmp r0, #1
    // bne _0223B85E
    // add r0, r4, #0
    // bl ov40_0223D540
    // bl ov39_02227648
    // cmp r0, #1
    // bne _0223B86C
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _0223BA58
    // add r0, r4, #0
    // bl ov40_0223D540
    // bl ov39_022275E8
    // cmp r0, #1
    // beq _0223B86E
    // b _0223BA58
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _0223BA58
    // bl GF_AssertFail
    // b _0223BA58
    // add r0, r4, #0
    // bl ov40_0222DFB0
    // add r0, r4, #0
    // bl ov40_0223D540
    // add r1, sp, #4
    // bl ov39_02227D44
    // cmp r0, #1
    // ldr r0, _0223BA64 ; =0x0000057D
    // bne _0223B8B0
    // mov r1, #0
    // bl StopSE
    // ldr r3, [sp, #4]
    // add r0, r4, #0
    // ldr r2, [r3, #0xc]
    // ldr r3, [r3, #4]
    // mov r1, #7
    // bl ov40_02230CDC
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _0223BA58
    // mov r1, #0
    // bl StopSE
    // ldr r0, _0223BA68 ; =0x00000577
    // bl PlaySE
    // ldr r0, _0223BA6C ; =0x00004138
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // bne _0223B8F8
    // mov r2, #0
    // add r0, r4, #0
    // mov r1, #5
    // add r3, r2, #0
    // bl ov40_02230CDC
    // ldr r0, [r5, #0xc]
    // cmp r0, #2
    // bne _0223B8DA
    // mov r1, #0x76
    // b _0223B8DE
    // mov r1, #0x4b
    // lsl r1, r1, #2
    // mov r0, #0x51
    // lsl r0, r0, #4
    // str r1, [r4, r0]
    // mov r0, #0x6f
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl sub_020879E0
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _0223BA58
    // mov r0, #0xff
    // str r0, [r4, #8]
    // b _0223BA58
    // mov r0, #0x6f
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl sub_020879E0
    // mov r0, #0x6f
    // lsl r0, r0, #4
    // mov r1, #0
    // ldr r0, [r4, r0]
    // add r2, r1, #0
    // bl sub_02087A08
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _0223BA58
    // add r0, r5, #0
    // add r0, #8
    // mov r1, #1
    // bl ov40_0222DA84
    // add r0, r5, #0
    // add r1, r5, #4
    // mov r2, #1
    // mov r3, #0
    // bl ov40_0222DA00
    // cmp r0, #0
    // beq _0223B940
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // ldr r0, [r4, #0x58]
    // mov r1, #3
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r5, #8]
    // ldr r0, [r4, #0x28]
    // lsl r3, r3, #0x18
    // mov r2, #0xc
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // b _0223BA58
    // add r0, r4, #0
    // mov r1, #1
    // bl ov40_02230964
    // add r0, r4, #0
    // bl ov40_0223B480
    // add r0, r4, #0
    // bl ov40_0222D88C
    // add r0, r4, #0
    // mov r1, #0
    // bl ov40_02230964
    // mov r0, #1
    // mov r1, #0x6d
    // bl sub_0203A948
    // add r0, r4, #0
    // mov r1, #1
    // bl ov40_0222FB90
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _0223BA58
    // add r0, r4, #0
    // bl ov40_0222FBB4
    // cmp r0, #0
    // beq _0223BA58
    // add r0, r5, #0
    // add r0, #8
    // mov r1, #0
    // bl ov40_0222DA84
    // cmp r0, #0
    // beq _0223BA04
    // add r0, r4, #0
    // bl ov40_0222DD08
    // add r0, r5, #0
    // add r0, #8
    // bl ov40_0222DAA8
    // ldr r0, [r4, #0x58]
    // mov r1, #2
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r0, [r4, #0x28]
    // mov r2, #0xc
    // mov r3, #0x10
    // bl PaletteData_BlendPalettes
    // mov r1, #1
    // ldr r3, [r4, #0x10]
    // add r0, r4, #0
    // add r2, r1, #0
    // bl ov40_0222BF64
    // add r0, r4, #0
    // mov r1, #5
    // bl ov40_0222BF80
    // ldr r0, [r4, #0x24]
    // mov r1, #2
    // bl BgClearTilemapBufferAndCommit
    // ldr r0, [r4, #0x24]
    // mov r1, #6
    // bl BgClearTilemapBufferAndCommit
    // ldr r0, [r4, #0x24]
    // mov r1, #3
    // bl BgClearTilemapBufferAndCommit
    // ldr r0, [r4, #0x24]
    // mov r1, #7
    // bl BgClearTilemapBufferAndCommit
    // add r0, r5, #0
    // bl Heap_Free
    // b _0223BA58
    // ldr r0, [r4, #0x58]
    // mov r1, #1
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r5, #8]
    // ldr r0, [r4, #0x28]
    // lsl r3, r3, #0x18
    // mov r2, #2
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // ldr r0, [r4, #0x58]
    // mov r1, #3
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r5, #8]
    // ldr r0, [r4, #0x28]
    // lsl r3, r3, #0x18
    // mov r2, #0xc
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // b _0223BA58
    // mov r0, #0x6f
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl sub_020879E0
    // mov r0, #0x6f
    // lsl r0, r0, #4
    // mov r1, #0
    // ldr r0, [r4, r0]
    // add r2, r1, #0
    // bl sub_02087A08
    // add r0, r4, #0
    // mov r1, #3
    // bl ov40_0222BF80
    // mov r0, #0
    // add sp, #8
    // pop {r3, r4, r5, pc}
    // nop
    // _0223BA60: .word 0x0000086C
    // _0223BA64: .word 0x0000057D
    // _0223BA68: .word 0x00000577
    // _0223BA6C: .word 0x00004138
    // TODO: decompile
}




void ov40_0223BA70(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x20
    // add r5, r0, #0
    // mov r0, #0x86
    // lsl r0, r0, #4
    // ldr r4, [r5, r0]
    // ldr r3, _0223BB68 ; =ov40_022454A4
    // add r6, r4, #0
    // ldmia r3!, {r0, r1}
    // add r2, sp, #0x14
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // add r6, #0x14
    // str r0, [r2]
    // add r0, r6, #0
    // bl InitWindow
    // mov r3, #3
    // str r3, [sp]
    // mov r0, #0x14
    // str r0, [sp, #4]
    // mov r0, #4
    // str r0, [sp, #8]
    // mov r0, #0xe
    // str r0, [sp, #0xc]
    // mov r0, #0x20
    // str r0, [sp, #0x10]
    // ldr r0, [r5, #0x24]
    // add r1, r6, #0
    // mov r2, #2
    // bl AddWindowParameterized
    // add r0, r6, #0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // ldr r1, [r4, #0xc]
    // ldr r0, [r5, #0x48]
    // lsl r2, r1, #2
    // add r1, sp, #0x14
    // ldr r1, [r1, r2]
    // bl NewString_ReadMsgData
    // mov r1, #0
    // add r7, r0, #0
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0223BB6C ; =0x000F0D00
    // add r2, r7, #0
    // str r0, [sp, #8]
    // add r0, r6, #0
    // add r3, r1, #0
    // str r1, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r6, #0
    // bl ScheduleWindowCopyToVram
    // add r0, r7, #0
    // bl String_Delete
    // add r6, r4, #0
    // add r6, #0x94
    // add r0, r6, #0
    // bl InitWindow
    // mov r2, #6
    // str r2, [sp]
    // mov r0, #0xa
    // str r0, [sp, #4]
    // mov r0, #4
    // str r0, [sp, #8]
    // mov r0, #0xe
    // str r0, [sp, #0xc]
    // add r0, #0xf2
    // str r0, [sp, #0x10]
    // ldr r0, [r5, #0x24]
    // add r1, r6, #0
    // mov r3, #0xb
    // bl AddWindowParameterized
    // add r0, r6, #0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // ldr r0, [r5, #0x48]
    // mov r1, #0x5f
    // bl NewString_ReadMsgData
    // add r5, r0, #0
    // mov r0, #0
    // add r1, r5, #0
    // add r2, r0, #0
    // bl FontID_String_GetWidthMultiline
    // mov r1, #0x50
    // sub r0, r1, r0
    // mov r1, #0
    // lsr r3, r0, #1
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0223BB6C ; =0x000F0D00
    // add r2, r5, #0
    // str r0, [sp, #8]
    // add r0, r6, #0
    // str r1, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r6, #0
    // bl ScheduleWindowCopyToVram
    // add r0, r5, #0
    // bl String_Delete
    // ldr r0, _0223BB70 ; =0x0000202C
    // mov r1, #1
    // str r1, [r4, r0]
    // add r0, r0, #4
    // str r1, [r4, r0]
    // add sp, #0x20
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0223BB68: .word ov40_022454A4
    // _0223BB6C: .word 0x000F0D00
    // _0223BB70: .word 0x0000202C
    // TODO: decompile
}




void ov40_0223BB74(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x10
    // mov r1, #0x86
    // add r5, r0, #0
    // lsl r1, r1, #4
    // ldr r4, [r5, r1]
    // ldr r1, [r5, #8]
    // cmp r1, #0
    // beq _0223BB8E
    // cmp r1, #1
    // bne _0223BB8C
    // b _0223BCCE
    // b _0223BD6E
    // bl sub_0202FC48
    // cmp r0, #0
    // beq _0223BB9A
    // bl sub_0202FC24
    // ldr r0, _0223BD7C ; =0x00002054
    // ldr r3, _0223BD80 ; =ov40_022454F0
    // add r2, r4, r0
    // mov r6, #5
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // sub r6, r6, #1
    // bne _0223BBA2
    // ldr r0, [r3]
    // mov r1, #0
    // str r0, [r2]
    // ldr r0, _0223BD7C ; =0x00002054
    // str r1, [r4, r0]
    // ldr r1, _0223BD84 ; =0x00004138
    // add r0, r0, #4
    // ldr r1, [r5, r1]
    // str r1, [r4, r0]
    // add r0, r5, #0
    // bl ov40_0222FE00
    // mov r0, #0x6d
    // bl ov40_0222FE8C
    // mov r1, #0x82
    // lsl r1, r1, #6
    // str r0, [r4, r1]
    // mov r0, #0x7d
    // lsl r0, r0, #2
    // add r1, #8
    // str r0, [r4, r1]
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x6d
    // str r0, [sp, #0xc]
    // ldr r0, [r5, #0x14]
    // ldr r2, [r5, #0x24]
    // mov r1, #0x3e
    // mov r3, #3
    // bl GfGfxLoader_LoadCharDataFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x6d
    // str r0, [sp, #0xc]
    // ldr r0, [r5, #0x14]
    // ldr r2, [r5, #0x24]
    // mov r1, #0x3e
    // mov r3, #7
    // bl GfGfxLoader_LoadCharDataFromOpenNarc
    // add r0, r5, #0
    // mov r1, #4
    // mov r2, #3
    // bl ov40_022307DC
    // mov r1, #7
    // add r0, r5, #0
    // add r2, r1, #0
    // bl ov40_022307DC
    // mov r0, #8
    // mov r1, #1
    // bl GfGfx_EngineBTogglePlanes
    // mov r0, #8
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #4
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #4
    // mov r1, #0
    // bl GfGfx_EngineBTogglePlanes
    // add r0, r5, #0
    // mov r1, #1
    // bl ov40_0223B4BC
    // add r0, r5, #0
    // bl ov40_0223BA70
    // add r0, r5, #0
    // mov r1, #1
    // bl ov40_02230964
    // ldr r0, _0223BD88 ; =0x0000047C
    // add r1, r5, #0
    // add r0, r5, r0
    // bl ov40_0222F9D4
    // ldr r0, _0223BD8C ; =0x0000049C
    // ldr r3, _0223BD7C ; =0x00002054
    // add r0, r5, r0
    // add r1, r5, #0
    // mov r2, #0
    // add r3, r4, r3
    // bl ov40_0222E9B8
    // ldr r1, _0223BD90 ; =0x000004E4
    // mov r0, #1
    // str r0, [r5, r1]
    // add r0, r1, #0
    // sub r0, #0x68
    // sub r1, #0x48
    // add r0, r5, r0
    // add r1, r5, r1
    // bl ov40_0222FA5C
    // ldr r0, _0223BD8C ; =0x0000049C
    // add r1, r5, #0
    // add r0, r5, r0
    // mov r2, #1
    // bl ov40_0222F740
    // ldr r0, _0223BD8C ; =0x0000049C
    // mov r1, #0x40
    // add r0, r5, r0
    // mov r2, #0xb8
    // bl ov40_0222F858
    // ldr r0, _0223BD8C ; =0x0000049C
    // add r1, r5, #0
    // add r0, r5, r0
    // bl ov40_0222F488
    // add r0, r5, #0
    // mov r1, #0
    // bl ov40_02230964
    // add r0, r5, #0
    // mov r1, #1
    // bl ov40_02230964
    // add r0, r5, #0
    // bl ov40_0223D008
    // add r0, r5, #0
    // mov r1, #0
    // bl ov40_0223D1AC
    // add r0, r5, #0
    // mov r1, #0
    // bl ov40_02230964
    // ldr r0, [r5, #8]
    // add r0, r0, #1
    // str r0, [r5, #8]
    // b _0223BD74
    // add r0, r4, #0
    // add r0, #8
    // mov r1, #0
    // bl ov40_0222DA84
    // mov r2, #0
    // add r0, r4, #0
    // add r1, r4, #4
    // add r3, r2, #0
    // bl ov40_0222DA00
    // cmp r0, #0
    // beq _0223BD3C
    // mov r0, #4
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #4
    // mov r1, #1
    // bl GfGfx_EngineBTogglePlanes
    // add r0, r5, #0
    // mov r1, #1
    // bl ov40_0223D1AC
    // ldr r3, _0223BD94 ; =0x000004D8
    // mov r1, #0x6f
    // ldr r6, [r5, r3]
    // mov r3, #0x18
    // mul r3, r6
    // lsl r1, r1, #4
    // add r3, #0x4c
    // lsl r3, r3, #0x10
    // ldr r1, [r5, r1]
    // add r0, r5, #0
    // mov r2, #0x10
    // asr r3, r3, #0x10
    // bl ov40_0223077C
    // mov r0, #0x6f
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // mov r1, #1
    // bl sub_020879E0
    // mov r0, #0x6f
    // lsl r0, r0, #4
    // mov r1, #0xc
    // ldr r0, [r5, r0]
    // add r2, r1, #0
    // bl sub_02087A08
    // ldr r0, [r5, #8]
    // add r0, r0, #1
    // str r0, [r5, #8]
    // ldr r0, [r5, #0x58]
    // mov r1, #3
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r4, #8]
    // ldr r0, [r5, #0x28]
    // lsl r3, r3, #0x18
    // mov r2, #0xc
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // ldr r0, [r5, #0x58]
    // mov r1, #2
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r4, #8]
    // ldr r0, [r5, #0x28]
    // lsl r3, r3, #0x18
    // mov r2, #0xc
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // b _0223BD74
    // mov r1, #4
    // bl ov40_0222BF80
    // mov r0, #0
    // add sp, #0x10
    // pop {r4, r5, r6, pc}
    // nop
    // _0223BD7C: .word 0x00002054
    // _0223BD80: .word ov40_022454F0
    // _0223BD84: .word 0x00004138
    // _0223BD88: .word 0x0000047C
    // _0223BD8C: .word 0x0000049C
    // _0223BD90: .word 0x000004E4
    // _0223BD94: .word 0x000004D8
    // TODO: decompile
}




void ov40_0223BD98(void) {
    // push {r3, r4, r5, lr}
    // mov r1, #0x86
    // add r5, r0, #0
    // lsl r1, r1, #4
    // ldr r4, [r5, r1]
    // ldr r1, [r5, #8]
    // cmp r1, #0
    // beq _0223BDB4
    // cmp r1, #1
    // beq _0223BE42
    // cmp r1, #2
    // bne _0223BDB2
    // b _0223BEBC
    // b _0223BF56
    // ldr r0, _0223BF64 ; =0x0000047C
    // add r0, r5, r0
    // bl ov40_0222FA88
    // ldr r1, _0223BF68 ; =0x0000049C
    // add r0, r5, r1
    // sub r1, #0x10
    // ldrsh r1, [r5, r1]
    // bl ov40_0222F5EC
    // ldr r0, _0223BF68 ; =0x0000049C
    // add r1, r5, #0
    // add r0, r5, r0
    // bl ov40_0222F488
    // ldr r2, _0223BF6C ; =0x000004D8
    // mov r0, #0x6f
    // ldr r3, [r5, r2]
    // mov r2, #0x18
    // mul r2, r3
    // lsl r0, r0, #4
    // add r2, #0x4c
    // lsl r2, r2, #0x10
    // ldr r0, [r5, r0]
    // mov r1, #0x10
    // asr r2, r2, #0x10
    // bl sub_020878EC
    // add r0, r5, #0
    // bl ov40_0223D244
    // ldr r0, _0223BF70 ; =ov40_02245494
    // bl TouchscreenHitbox_TouchNewIsIn
    // cmp r0, #0
    // beq _0223BE22
    // add r0, r5, #0
    // bl ov40_02230944
    // ldr r0, _0223BF74 ; =0x000004D4
    // ldr r0, [r5, r0]
    // lsl r0, r0, #2
    // add r1, r5, r0
    // ldr r0, _0223BF78 ; =0x00002608
    // ldr r0, [r1, r0]
    // cmp r0, #0
    // beq _0223BE22
    // ldr r0, _0223BF7C ; =0x00002034
    // mov r1, #6
    // str r1, [r4, r0]
    // mov r0, #0
    // str r0, [r4, #0x10]
    // ldr r0, [r5, #8]
    // add r0, r0, #1
    // str r0, [r5, #8]
    // ldr r0, _0223BF80 ; =ov40_02245498
    // bl TouchscreenHitbox_TouchNewIsIn
    // cmp r0, #0
    // bne _0223BE2E
    // b _0223BF5E
    // add r0, r5, #0
    // bl ov40_02230944
    // ldr r0, _0223BF7C ; =0x00002034
    // mov r1, #5
    // str r1, [r4, r0]
    // ldr r0, [r5, #8]
    // add r0, r0, #1
    // str r0, [r5, #8]
    // b _0223BF5E
    // ldr r0, _0223BF64 ; =0x0000047C
    // add r0, r5, r0
    // bl ov40_0222FA24
    // ldr r0, _0223BF68 ; =0x0000049C
    // add r0, r5, r0
    // bl ov40_0222F720
    // ldr r0, _0223BF68 ; =0x0000049C
    // add r1, r5, #0
    // add r0, r5, r0
    // bl ov40_0222F920
    // mov r0, #0x82
    // lsl r0, r0, #6
    // ldr r0, [r4, r0]
    // bl ov40_0222FE98
    // add r0, r5, #0
    // bl ov40_0223D1F0
    // add r0, r5, #0
    // bl ov40_0222FE68
    // add r0, r5, #0
    // bl ov40_0223B538
    // add r0, r5, #0
    // bl ov40_0223B574
    // mov r0, #0x6f
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // mov r1, #0
    // bl sub_020879E0
    // mov r0, #0x6f
    // lsl r0, r0, #4
    // mov r1, #0
    // ldr r0, [r5, r0]
    // add r2, r1, #0
    // bl sub_02087A08
    // ldr r0, _0223BF7C ; =0x00002034
    // ldr r0, [r4, r0]
    // cmp r0, #5
    // bne _0223BEB6
    // ldr r0, _0223BF64 ; =0x0000047C
    // add r0, r5, r0
    // bl ov40_0222FA18
    // ldr r0, _0223BF68 ; =0x0000049C
    // add r0, r5, r0
    // bl ov40_0222F734
    // ldr r0, _0223BF84 ; =0x00002084
    // mov r1, #0
    // str r1, [r4, r0]
    // ldr r0, [r5, #8]
    // add r0, r0, #1
    // str r0, [r5, #8]
    // add r0, r4, #0
    // add r0, #8
    // mov r1, #1
    // bl ov40_0222DA84
    // add r0, r4, #0
    // add r1, r4, #4
    // mov r2, #1
    // mov r3, #0
    // bl ov40_0222DA00
    // cmp r0, #0
    // beq _0223BF24
    // add r0, r5, #0
    // mov r1, #0
    // bl ov40_0223B4BC
    // ldr r0, _0223BF7C ; =0x00002034
    // ldr r0, [r4, r0]
    // cmp r0, #6
    // bne _0223BF1E
    // mov r0, #0x45
    // lsl r0, r0, #2
    // add r1, r5, #0
    // add r0, r4, r0
    // add r1, #0x14
    // mov r2, #3
    // bl ov40_0222D66C
    // mov r0, #0x13
    // lsl r0, r0, #4
    // add r1, r5, #0
    // add r0, r4, r0
    // add r1, #0x14
    // mov r2, #0x5e
    // bl ov40_0222D66C
    // mov r0, #0x46
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl ManagedSprite_SetAnim
    // mov r0, #0x4d
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #3
    // bl ManagedSprite_SetAnim
    // ldr r0, [r5, #8]
    // add r0, r0, #1
    // str r0, [r5, #8]
    // ldr r0, [r5, #0x58]
    // mov r1, #3
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r4, #8]
    // ldr r0, [r5, #0x28]
    // lsl r3, r3, #0x18
    // mov r2, #0xc
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // ldr r0, [r5, #0x58]
    // mov r1, #2
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r4, #8]
    // ldr r0, [r5, #0x28]
    // lsl r3, r3, #0x18
    // mov r2, #0xc
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // b _0223BF5E
    // ldr r1, _0223BF7C ; =0x00002034
    // ldr r1, [r4, r1]
    // bl ov40_0222BF80
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // nop
    // _0223BF64: .word 0x0000047C
    // _0223BF68: .word 0x0000049C
    // _0223BF6C: .word 0x000004D8
    // _0223BF70: .word ov40_02245494
    // _0223BF74: .word 0x000004D4
    // _0223BF78: .word 0x00002608
    // _0223BF7C: .word 0x00002034
    // _0223BF80: .word ov40_02245498
    // _0223BF84: .word 0x00002084
    // TODO: decompile
}




void ov40_0223BF88(void) {
    // ldr r4, [r5, r1]
    ov40_0223B538(*((u32*)(r0 + 8)));
    ov40_0223B574(r5);
    ov40_0222DFB0(r5);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    // add r0, #8
    ov40_0222DA84(r4, 1);
    ov40_0222DA00(r4, (r4 + 4), 1, 0);
    ov40_02230964(r5, 1);
    ov40_0223B480(r5);
    ov40_02230964(r5, 0);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r5 + 0x28)), 3, 0xc, ((*((u32*)(r4 + 8)) << 0x18) >> 0x18));
    // add r4, #8
    ov40_0222DAA8(r4);
    ov40_0222D88C(r5);
    sub_0203A948(1, 0x6d);
    ov40_0222FB90(r5, 1);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    ov40_0222FBB4((*((u32*)(r5 + 8)) + 1));
    // add r0, #8
    ov40_0222DA84(r4, 0);
    ov40_0222DD08(r5);
    // add r0, #8
    ov40_0222DAA8(r4);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r5 + 0x28)), 2, 0xc, 0x10);
    ov40_0222BF64(r5, 1, 1, *((u32*)(r5 + 0x10)));
    ov40_0222BF80(r5, 5);
    BgClearTilemapBufferAndCommit(*((u32*)(r5 + 0x24)), 2);
    BgClearTilemapBufferAndCommit(*((u32*)(r5 + 0x24)), 6);
    BgClearTilemapBufferAndCommit(*((u32*)(r5 + 0x24)), 3);
    BgClearTilemapBufferAndCommit(*((u32*)(r5 + 0x24)), 7);
    Heap_Free(r4);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r5 + 0x28)), 1, 2, ((*((u32*)(r4 + 8)) << 0x18) >> 0x18));
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r5 + 0x28)), 3, 0xc, ((*((u32*)(r4 + 8)) << 0x18) >> 0x18));
}




void ov40_0223C0D8(void) {
    // push {r3, r4, r5, lr}
    // mov r1, #0x86
    // add r4, r0, #0
    // lsl r1, r1, #4
    // ldr r5, [r4, r1]
    // ldr r1, [r4, #8]
    // cmp r1, #3
    // bls _0223C0EA
    // b _0223C21A
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _0223C0F6: ; jump table
    // mov r1, #6
    // mov r2, #7
    // bl ov40_022307DC
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _0223C222
    // bl ov40_0223CFA8
    // mov r0, #0x6d
    // str r0, [sp]
    // ldr r0, _0223C228 ; =ov40_022454E0
    // ldr r2, _0223C22C ; =ov40_0223CE64
    // mov r1, #4
    // add r3, r4, #0
    // bl TouchHitboxController_Create
    // mov r1, #0x62
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // mov r0, #0x6d
    // str r0, [sp]
    // ldr r0, _0223C230 ; =ov40_022454B0
    // ldr r2, _0223C234 ; =ov40_0223CF00
    // mov r1, #4
    // add r3, r4, #0
    // bl TouchHitboxController_Create
    // mov r1, #0x63
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // mov r0, #0x6d
    // str r0, [sp]
    // ldr r0, _0223C238 ; =ov40_0224549C
    // ldr r2, _0223C23C ; =ov40_0223CF70
    // mov r1, #2
    // add r3, r4, #0
    // bl TouchHitboxController_Create
    // mov r1, #0x19
    // lsl r1, r1, #4
    // str r0, [r5, r1]
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _0223C222
    // mov r1, #1
    // bl ov40_02230964
    // mov r0, #0x22
    // lsl r0, r0, #4
    // add r0, r5, r0
    // add r1, r4, #0
    // bl ov40_02230638
    // mov r0, #0x22
    // lsl r0, r0, #4
    // add r0, r5, r0
    // bl ov40_02230410
    // add r1, r0, #0
    // add r0, r4, #0
    // mov r2, #3
    // bl ov40_022307DC
    // mov r0, #0x22
    // lsl r0, r0, #4
    // add r0, r5, r0
    // mov r1, #0
    // bl ov40_022306A0
    // add r0, r4, #0
    // mov r1, #0
    // bl ov40_02230964
    // mov r0, #8
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #8
    // mov r1, #1
    // bl GfGfx_EngineBTogglePlanes
    // mov r0, #4
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #4
    // mov r1, #0
    // bl GfGfx_EngineBTogglePlanes
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _0223C222
    // add r0, r5, #0
    // add r0, #8
    // mov r1, #0
    // bl ov40_0222DA84
    // mov r2, #0
    // add r0, r5, #0
    // add r1, r5, #4
    // add r3, r2, #0
    // bl ov40_0222DA00
    // cmp r0, #0
    // beq _0223C200
    // mov r0, #0x22
    // lsl r0, r0, #4
    // add r0, r5, r0
    // mov r1, #1
    // bl ov40_022306A0
    // add r0, r4, #0
    // bl ov40_0223CD14
    // mov r0, #4
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #4
    // mov r1, #1
    // bl GfGfx_EngineBTogglePlanes
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // ldr r0, [r4, #0x58]
    // mov r1, #3
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r5, #8]
    // ldr r0, [r4, #0x28]
    // lsl r3, r3, #0x18
    // mov r2, #0xc
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // b _0223C222
    // add r0, r4, #0
    // mov r1, #7
    // bl ov40_0222BF80
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // nop
    // _0223C228: .word ov40_022454E0
    // _0223C22C: .word ov40_0223CE64
    // _0223C230: .word ov40_022454B0
    // _0223C234: .word ov40_0223CF00
    // _0223C238: .word ov40_0224549C
    // _0223C23C: .word ov40_0223CF70
    // TODO: decompile
}




void ov40_0223C240(void) {
}




void ov40_0223C258(void) {
    // ldr r4, [r5, r1]
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0223C276: ; jump table
    ov40_02230964(1);
    // add r0, r4, r0
    ov40_0223064C((0x22 << 4), r5);
    // add r0, r4, r0
    ov40_0222E7B8((0x65 << 2), r5);
    GfGfx_EngineATogglePlanes(4, 0);
    ov40_02230964(r5, 0);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    ov40_0222DA00(r4, (r4 + 4), 1, 1);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    ov40_02230964((*((u32*)(r5 + 8)) + 1), 1);
    // add r0, r4, r0
    ov40_0222E79C((0x65 << 2), r5);
    // add r0, r4, r0
    ov40_0222E7DC((0x65 << 2), 0);
    ov40_022307DC(r5, 0x50, 3);
    // add r0, r4, r0
    ov40_02230638((0x22 << 4), r5);
    // add r0, r4, r0
    ov40_022306A0((0x22 << 4), 0);
    // add r0, r4, r0
    ov40_02230410((0x22 << 4));
    ov40_022307DC(r5, r0, 3);
    ov40_02230964(r5, 0);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    ov40_0222DA00(r4, (r4 + 4), 0, 1);
    // add r0, r4, r0
    ov40_0222E7DC((0x65 << 2), 1);
    // add r0, r4, r0
    ov40_022306A0((0x22 << 4), 1);
    GfGfx_EngineBTogglePlanes(4, 1);
    GfGfx_EngineATogglePlanes(4, 1);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    // eor r1, r0
    *((u32*)(r4 + 0x10)) = *((u32*)(r4 + 0x10));
    // add r1, #0x79
    ov40_0223CCBC(r5, *((u32*)(r4 + 0x10)));
    ov40_0222BF80(r5, 7);
}




void ov40_0223C3A4(void) {
    // push {r4, r5, lr}
    // sub sp, #0xc
    // mov r1, #0x86
    // add r5, r0, #0
    // lsl r1, r1, #4
    // ldr r4, [r5, r1]
    // ldr r1, [r5, #8]
    // cmp r1, #0
    // beq _0223C3C0
    // cmp r1, #1
    // beq _0223C3E0
    // cmp r1, #2
    // beq _0223C3F0
    // b _0223C482
    // mov r0, #6
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // mov r0, #0x6d
    // str r0, [sp, #8]
    // mov r0, #0
    // add r1, r0, #0
    // add r2, r0, #0
    // add r3, r0, #0
    // bl BeginNormalPaletteFade
    // ldr r0, [r5, #8]
    // add r0, r0, #1
    // str r0, [r5, #8]
    // b _0223C48E
    // bl IsPaletteFadeFinished
    // cmp r0, #1
    // bne _0223C48E
    // ldr r0, [r5, #8]
    // add r0, r0, #1
    // str r0, [r5, #8]
    // b _0223C48E
    // mov r1, #1
    // bl ov40_02230964
    // ldr r0, [r4, #0x10]
    // cmp r0, #0
    // bne _0223C40A
    // mov r0, #0x22
    // lsl r0, r0, #4
    // add r0, r4, r0
    // add r1, r5, #0
    // bl ov40_0223064C
    // b _0223C416
    // mov r0, #0x65
    // lsl r0, r0, #2
    // add r0, r4, r0
    // add r1, r5, #0
    // bl ov40_0222E7B8
    // mov r0, #0x62
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl TouchHitboxController_Destroy
    // mov r0, #0x63
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl TouchHitboxController_Destroy
    // mov r0, #0x19
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // bl TouchHitboxController_Destroy
    // add r0, r5, #0
    // bl ov40_0223A83C
    // add r0, r5, #0
    // bl ov40_0223CCA0
    // add r0, r5, #0
    // bl ov40_0223D504
    // add r0, r5, #0
    // mov r1, #0
    // bl ov40_02230964
    // add r0, r5, #0
    // mov r1, #1
    // bl ov40_02230964
    // add r0, r5, #0
    // bl ov40_0222D8C8
    // add r0, r5, #0
    // mov r1, #0
    // bl ov40_02230964
    // ldr r1, [r5, #0x10]
    // add r0, r5, #0
    // ldr r1, [r1]
    // bl ov40_0222C4E8
    // ldr r0, _0223C494 ; =0x00000868
    // mov r1, #1
    // ldr r0, [r5, r0]
    // mov r2, #0
    // bl sub_02087A84
    // ldr r0, [r5, #8]
    // add r0, r0, #1
    // str r0, [r5, #8]
    // b _0223C48E
    // add r0, r4, #0
    // bl Heap_Free
    // add sp, #0xc
    // mov r0, #1
    // pop {r4, r5, pc}
    // mov r0, #0
    // add sp, #0xc
    // pop {r4, r5, pc}
    // _0223C494: .word 0x00000868
    // TODO: decompile
}




void ov40_0223C498(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // mov r1, #0x86
    // add r4, r0, #0
    // lsl r1, r1, #4
    // ldr r5, [r4, r1]
    // ldr r1, [r4, #8]
    // cmp r1, #5
    // bls _0223C4AC
    // b _0223C6CC
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _0223C4B8: ; jump table
    // bl ov40_02230738
    // add r0, r5, #0
    // add r1, r5, #4
    // mov r2, #0
    // bl ov40_0222D9E8
    // ldr r0, _0223C6E8 ; =0x00004138
    // mov r2, #0
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // ble _0223C4F8
    // mov r0, #0x9a
    // lsl r0, r0, #6
    // add r7, r0, #0
    // add r3, r4, r0
    // ldr r0, _0223C6E8 ; =0x00004138
    // add r6, r4, #0
    // sub r7, #0x78
    // str r3, [r6, r7]
    // ldr r1, [r4, r0]
    // add r2, r2, #1
    // add r3, #0xe4
    // add r6, r6, #4
    // cmp r2, r1
    // blt _0223C4EA
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x6d
    // str r0, [sp, #0xc]
    // ldr r0, [r4, #0x14]
    // ldr r2, [r4, #0x24]
    // mov r1, #0x3e
    // mov r3, #3
    // bl GfGfxLoader_LoadCharDataFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x6d
    // str r0, [sp, #0xc]
    // ldr r0, [r4, #0x14]
    // ldr r2, [r4, #0x24]
    // mov r1, #0x3e
    // mov r3, #7
    // bl GfGfxLoader_LoadCharDataFromOpenNarc
    // add r0, r4, #0
    // mov r1, #6
    // mov r2, #7
    // bl ov40_022307DC
    // mov r0, #8
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #8
    // mov r1, #1
    // bl GfGfx_EngineBTogglePlanes
    // mov r0, #0x45
    // lsl r0, r0, #2
    // add r1, r4, #0
    // add r0, r5, r0
    // add r1, #0x14
    // mov r2, #3
    // bl ov40_0222D66C
    // mov r0, #0x13
    // lsl r0, r0, #4
    // add r1, r4, #0
    // add r0, r5, r0
    // add r1, #0x14
    // mov r2, #0x5e
    // bl ov40_0222D66C
    // mov r0, #0x46
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #0
    // bl ManagedSprite_SetAnim
    // mov r0, #0x4d
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #3
    // bl ManagedSprite_SetAnim
    // mov r1, #0x7d
    // ldr r0, _0223C6EC ; =0x00002088
    // lsl r1, r1, #2
    // str r1, [r5, r0]
    // ldr r1, _0223C6F0 ; =0x000004A4
    // sub r0, r0, #4
    // ldrsh r1, [r4, r1]
    // str r1, [r5, r0]
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _0223C6E2
    // bl ov40_0223CFA8
    // mov r0, #0x6d
    // str r0, [sp]
    // ldr r0, _0223C6F4 ; =ov40_022454E0
    // ldr r2, _0223C6F8 ; =ov40_0223CE64
    // mov r1, #4
    // add r3, r4, #0
    // bl TouchHitboxController_Create
    // mov r1, #0x62
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // mov r0, #0x6d
    // str r0, [sp]
    // ldr r0, _0223C6FC ; =ov40_022454B0
    // ldr r2, _0223C700 ; =ov40_0223CF00
    // mov r1, #4
    // add r3, r4, #0
    // bl TouchHitboxController_Create
    // mov r1, #0x63
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // mov r0, #0x6d
    // str r0, [sp]
    // ldr r0, _0223C704 ; =ov40_0224549C
    // ldr r2, _0223C708 ; =ov40_0223CF70
    // mov r1, #2
    // add r3, r4, #0
    // bl TouchHitboxController_Create
    // mov r1, #0x19
    // lsl r1, r1, #4
    // str r0, [r5, r1]
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _0223C6E2
    // mov r1, #1
    // bl ov40_02230964
    // mov r0, #0x22
    // lsl r0, r0, #4
    // add r0, r5, r0
    // add r1, r4, #0
    // bl ov40_02230638
    // mov r0, #0x22
    // lsl r0, r0, #4
    // add r0, r5, r0
    // bl ov40_02230410
    // add r1, r0, #0
    // add r0, r4, #0
    // mov r2, #3
    // bl ov40_022307DC
    // mov r0, #0x22
    // lsl r0, r0, #4
    // add r0, r5, r0
    // mov r1, #0
    // bl ov40_022306A0
    // add r0, r4, #0
    // mov r1, #0
    // bl ov40_02230964
    // mov r0, #8
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #8
    // mov r1, #1
    // bl GfGfx_EngineBTogglePlanes
    // mov r0, #4
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #4
    // mov r1, #0
    // bl GfGfx_EngineBTogglePlanes
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _0223C6E2
    // add r0, r5, #0
    // add r0, #8
    // mov r1, #0
    // bl ov40_0222DA84
    // mov r2, #0
    // add r0, r5, #0
    // add r1, r5, #4
    // add r3, r2, #0
    // bl ov40_0222DA00
    // cmp r0, #0
    // beq _0223C684
    // mov r0, #0x22
    // lsl r0, r0, #4
    // add r0, r5, r0
    // mov r1, #1
    // bl ov40_022306A0
    // add r0, r4, #0
    // bl ov40_0223CD14
    // mov r0, #4
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #4
    // mov r1, #1
    // bl GfGfx_EngineBTogglePlanes
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // ldr r0, [r4, #0x58]
    // mov r1, #3
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r5, #8]
    // ldr r0, [r4, #0x28]
    // lsl r3, r3, #0x18
    // mov r2, #0xc
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // b _0223C6E2
    // mov r0, #6
    // str r0, [sp]
    // mov r1, #1
    // str r1, [sp, #4]
    // mov r0, #0x6d
    // str r0, [sp, #8]
    // mov r0, #0
    // add r2, r1, #0
    // add r3, r0, #0
    // bl BeginNormalPaletteFade
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _0223C6E2
    // bl IsPaletteFadeFinished
    // cmp r0, #1
    // bne _0223C6E2
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _0223C6E2
    // ldr r0, _0223C70C ; =0x000006D8
    // ldr r1, [r4, r0]
    // add r1, r1, #1
    // str r1, [r4, r0]
    // add r0, r4, #0
    // bl ov40_0222C4B8
    // add r0, r4, #0
    // mov r1, #7
    // bl ov40_0222BF80
    // mov r0, #0
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // _0223C6E8: .word 0x00004138
    // _0223C6EC: .word 0x00002088
    // _0223C6F0: .word 0x000004A4
    // _0223C6F4: .word ov40_022454E0
    // _0223C6F8: .word ov40_0223CE64
    // _0223C6FC: .word ov40_022454B0
    // _0223C700: .word ov40_0223CF00
    // _0223C704: .word ov40_0224549C
    // _0223C708: .word ov40_0223CF70
    // _0223C70C: .word 0x000006D8
    // TODO: decompile
}




void ov40_0223C710(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x1c
    // add r4, r1, #0
    // ldr r1, _0223C804 ; =0x000008A4
    // add r5, r0, #0
    // sub r1, #0x44
    // ldr r6, [r5, r1]
    // mov r1, #2
    // bl ov40_0222C6C8
    // mov r0, #4
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // ldr r0, _0223C804 ; =0x000008A4
    // add r0, r5, r0
    // bl InitWindow
    // mov r0, #0x13
    // str r0, [sp]
    // mov r0, #0x1e
    // str r0, [sp, #4]
    // mov r0, #4
    // str r0, [sp, #8]
    // mov r0, #0xe
    // str r0, [sp, #0xc]
    // mov r0, #0x4b
    // lsl r0, r0, #2
    // ldr r1, _0223C804 ; =0x000008A4
    // str r0, [sp, #0x10]
    // ldr r0, [r5, #0x24]
    // add r1, r5, r1
    // mov r2, #2
    // mov r3, #1
    // bl AddWindowParameterized
    // cmp r4, #0x64
    // bne _0223C7C4
    // mov r0, #0x65
    // lsl r0, r0, #2
    // ldr r0, [r6, r0]
    // str r0, [sp, #0x14]
    // mov r0, #0x6d
    // bl ov40_0222DAB0
    // add r7, r0, #0
    // mov r0, #0xff
    // mov r1, #0x6d
    // bl String_New
    // add r6, r0, #0
    // ldr r0, [sp, #0x14]
    // mov r1, #0x6d
    // bl sub_020315B8
    // str r0, [sp, #0x18]
    // ldr r1, [sp, #0x18]
    // add r0, r5, #0
    // bl ov40_02230DCC
    // ldr r0, [r5, #0x48]
    // add r1, r4, #0
    // bl NewString_ReadMsgData
    // add r4, r0, #0
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #2
    // mov r1, #0
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x18]
    // add r0, r7, #0
    // add r3, r1, #0
    // bl BufferString
    // add r0, r7, #0
    // add r1, r6, #0
    // add r2, r4, #0
    // bl StringExpandPlaceholders
    // ldr r0, [sp, #0x18]
    // bl String_Delete
    // add r0, r4, #0
    // bl String_Delete
    // add r0, r7, #0
    // bl MessageFormat_Delete
    // b _0223C7CE
    // ldr r0, [r5, #0x48]
    // add r1, r4, #0
    // bl NewString_ReadMsgData
    // add r6, r0, #0
    // ldr r0, _0223C804 ; =0x000008A4
    // mov r1, #0xcc
    // add r0, r5, r0
    // bl FillWindowPixelBuffer
    // mov r1, #0
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0223C808 ; =0x000F0D0C
    // add r2, r6, #0
    // str r0, [sp, #8]
    // ldr r0, _0223C804 ; =0x000008A4
    // add r3, r1, #0
    // add r0, r5, r0
    // str r1, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // ldr r0, _0223C804 ; =0x000008A4
    // add r0, r5, r0
    // bl ScheduleWindowCopyToVram
    // add r0, r6, #0
    // bl String_Delete
    // add sp, #0x1c
    // pop {r4, r5, r6, r7, pc}
    // _0223C804: .word 0x000008A4
    // _0223C808: .word 0x000F0D0C
    // TODO: decompile
}




void ov40_0223C80C(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x10
    // add r4, r0, #0
    // mov r0, #0x86
    // lsl r0, r0, #4
    // ldr r5, [r4, r0]
    // bl sub_020307F8
    // mov r1, #4
    // mov r2, #0
    // bl sub_0203088C
    // add r3, r0, #0
    // add r2, r1, #0
    // add r0, r4, #0
    // add r1, r3, #0
    // bl ov40_02230D94
    // cmp r0, #0
    // ldr r0, [r4, #8]
    // bne _0223C838
    // b _0223CB6C
    // cmp r0, #6
    // bls _0223C83E
    // b _0223CB3E
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0223C84A: ; jump table
    // add r0, r4, #0
    // mov r1, #1
    // bl ov40_02230964
    // ldr r0, [r5, #0x10]
    // cmp r0, #0
    // bne _0223C874
    // mov r0, #0x22
    // lsl r0, r0, #4
    // add r0, r5, r0
    // add r1, r4, #0
    // bl ov40_0223064C
    // b _0223C880
    // mov r0, #0x65
    // lsl r0, r0, #2
    // add r0, r5, r0
    // add r1, r4, #0
    // bl ov40_0222E7B8
    // add r0, r4, #0
    // bl ov40_0223CCA0
    // add r0, r4, #0
    // mov r1, #0
    // bl ov40_02230964
    // add r0, r4, #0
    // mov r1, #1
    // bl ov40_02230964
    // add r0, r4, #0
    // bl ov40_0223D504
    // add r0, r4, #0
    // mov r1, #0
    // bl ov40_02230964
    // mov r0, #4
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #4
    // mov r1, #0
    // bl GfGfx_EngineBTogglePlanes
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _0223CC98
    // add r0, r5, #0
    // add r0, #8
    // mov r1, #1
    // bl ov40_0222DA84
    // add r0, r5, #0
    // add r1, r5, #4
    // mov r2, #1
    // mov r3, #0
    // bl ov40_0222DA00
    // cmp r0, #0
    // beq _0223C902
    // add r0, r4, #0
    // mov r1, #1
    // bl ov40_02230964
    // add r0, r4, #0
    // bl ov40_0223B374
    // add r0, r4, #0
    // mov r1, #0
    // bl ov40_02230964
    // ldr r0, [r4, #0x24]
    // mov r1, #3
    // bl BgClearTilemapBufferAndCommit
    // ldr r0, [r4, #0x24]
    // mov r1, #7
    // bl BgClearTilemapBufferAndCommit
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // ldr r0, [r4, #0x58]
    // mov r1, #3
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r5, #8]
    // ldr r0, [r4, #0x28]
    // lsl r3, r3, #0x18
    // mov r2, #0xc
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // b _0223CC98
    // ldr r1, _0223CC40 ; =0x00000115
    // add r0, r4, #0
    // bl ov40_0222DED0
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _0223CC98
    // bl System_GetTouchNew
    // cmp r0, #0
    // bne _0223C936
    // b _0223CC98
    // add r0, r4, #0
    // bl ov40_0222DFB0
    // ldr r0, [r4, #0x24]
    // mov r1, #2
    // bl BgClearTilemapBufferAndCommit
    // ldr r0, [r4, #0x24]
    // mov r1, #6
    // bl BgClearTilemapBufferAndCommit
    // mov r0, #4
    // mov r1, #0
    // bl GfGfx_EngineBTogglePlanes
    // mov r0, #4
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _0223CC98
    // add r0, r5, #0
    // add r0, #8
    // mov r1, #1
    // bl ov40_0222DA84
    // add r0, r5, #0
    // add r1, r5, #4
    // mov r2, #1
    // mov r3, #0
    // bl ov40_0222DA00
    // cmp r0, #0
    // beq _0223C99A
    // add r0, r4, #0
    // mov r1, #1
    // bl ov40_02230964
    // add r0, r4, #0
    // bl ov40_0223B44C
    // add r0, r4, #0
    // mov r1, #0
    // bl ov40_02230964
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // ldr r0, [r4, #0x58]
    // mov r1, #3
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r5, #8]
    // ldr r0, [r4, #0x28]
    // lsl r3, r3, #0x18
    // mov r2, #0xc
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // b _0223CC98
    // add r0, r4, #0
    // mov r1, #1
    // bl ov40_02230964
    // add r0, r4, #0
    // bl ov40_0223A430
    // add r0, r4, #0
    // mov r1, #0
    // bl ov40_02230964
    // ldr r0, _0223CC44 ; =0x0000086C
    // ldr r0, [r4, r0]
    // cmp r0, #0xd2
    // bne _0223CA0A
    // mov r0, #0x45
    // lsl r0, r0, #2
    // add r1, r4, #0
    // add r0, r5, r0
    // add r1, #0x14
    // mov r2, #3
    // bl ov40_0222D66C
    // mov r0, #0x13
    // lsl r0, r0, #4
    // add r1, r4, #0
    // add r0, r5, r0
    // add r1, #0x14
    // mov r2, #0x5e
    // bl ov40_0222D66C
    // mov r0, #0x46
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #0
    // bl ManagedSprite_SetAnim
    // mov r0, #0x4d
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #3
    // bl ManagedSprite_SetAnim
    // add r0, r4, #0
    // bl ov40_0223CD14
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x6d
    // str r0, [sp, #0xc]
    // ldr r0, [r4, #0x14]
    // ldr r2, [r4, #0x24]
    // mov r1, #0x3e
    // mov r3, #3
    // bl GfGfxLoader_LoadCharDataFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x6d
    // str r0, [sp, #0xc]
    // ldr r0, [r4, #0x14]
    // ldr r2, [r4, #0x24]
    // mov r1, #0x3e
    // mov r3, #7
    // bl GfGfxLoader_LoadCharDataFromOpenNarc
    // add r0, r4, #0
    // mov r1, #1
    // bl ov40_02230964
    // ldr r0, [r5, #0x10]
    // cmp r0, #0
    // bne _0223CA7C
    // mov r0, #0x22
    // lsl r0, r0, #4
    // add r0, r5, r0
    // add r1, r4, #0
    // bl ov40_02230638
    // mov r0, #0x22
    // lsl r0, r0, #4
    // add r0, r5, r0
    // mov r1, #0
    // bl ov40_022306A0
    // mov r0, #0x22
    // lsl r0, r0, #4
    // add r0, r5, r0
    // bl ov40_02230410
    // add r1, r0, #0
    // add r0, r4, #0
    // mov r2, #3
    // bl ov40_022307DC
    // b _0223CAAC
    // mov r0, #0x65
    // lsl r0, r0, #2
    // add r0, r5, r0
    // add r1, r4, #0
    // bl ov40_0222E79C
    // mov r0, #0x65
    // lsl r0, r0, #2
    // add r0, r5, r0
    // mov r1, #0
    // bl ov40_0222E7DC
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x6d
    // str r0, [sp, #0xc]
    // ldr r0, [r4, #0x14]
    // ldr r2, [r4, #0x24]
    // mov r1, #0x50
    // mov r3, #3
    // bl GfGfxLoader_LoadScrnDataFromOpenNarc
    // add r0, r4, #0
    // mov r1, #0
    // bl ov40_02230964
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x6d
    // str r0, [sp, #0xc]
    // ldr r0, [r4, #0x14]
    // ldr r2, [r4, #0x24]
    // mov r1, #6
    // mov r3, #7
    // bl GfGfxLoader_LoadScrnDataFromOpenNarc
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _0223CC98
    // add r0, r5, #0
    // add r0, #8
    // mov r1, #0
    // bl ov40_0222DA84
    // mov r2, #0
    // add r0, r5, #0
    // add r1, r5, #4
    // add r3, r2, #0
    // bl ov40_0222DA00
    // cmp r0, #0
    // beq _0223CB24
    // ldr r0, [r5, #0x10]
    // cmp r0, #0
    // bne _0223CB02
    // mov r0, #0x22
    // lsl r0, r0, #4
    // add r0, r5, r0
    // mov r1, #1
    // bl ov40_022306A0
    // b _0223CB0E
    // mov r0, #0x65
    // lsl r0, r0, #2
    // add r0, r5, r0
    // mov r1, #1
    // bl ov40_0222E7DC
    // mov r0, #4
    // mov r1, #1
    // bl GfGfx_EngineBTogglePlanes
    // mov r0, #4
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // ldr r0, [r4, #0x58]
    // mov r1, #3
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r5, #8]
    // ldr r0, [r4, #0x28]
    // lsl r3, r3, #0x18
    // mov r2, #0xc
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // b _0223CC98
    // ldr r1, _0223CC48 ; =0x00004138
    // mov r0, #0
    // ldr r1, [r4, r1]
    // cmp r1, #0
    // ble _0223CB62
    // mov r1, #0x9a
    // lsl r1, r1, #6
    // add r5, r4, r1
    // ldr r2, _0223CC48 ; =0x00004138
    // add r6, r4, #0
    // sub r1, #0x78
    // str r5, [r6, r1]
    // ldr r3, [r4, r2]
    // add r0, r0, #1
    // add r5, #0xe4
    // add r6, r6, #4
    // cmp r0, r3
    // blt _0223CB54
    // add r0, r4, #0
    // mov r1, #7
    // bl ov40_0222BF80
    // b _0223CC98
    // cmp r0, #0
    // beq _0223CB7A
    // cmp r0, #1
    // beq _0223CBDE
    // cmp r0, #2
    // beq _0223CC4C
    // b _0223CC90
    // add r0, r4, #0
    // mov r1, #1
    // bl ov40_02230964
    // ldr r0, [r5, #0x10]
    // cmp r0, #0
    // bne _0223CB96
    // mov r0, #0x22
    // lsl r0, r0, #4
    // add r0, r5, r0
    // add r1, r4, #0
    // bl ov40_0223064C
    // b _0223CBA2
    // mov r0, #0x65
    // lsl r0, r0, #2
    // add r0, r5, r0
    // add r1, r4, #0
    // bl ov40_0222E7B8
    // add r0, r4, #0
    // mov r1, #0
    // bl ov40_02230964
    // add r0, r4, #0
    // mov r1, #1
    // bl ov40_02230964
    // add r0, r4, #0
    // bl ov40_0223D504
    // add r0, r4, #0
    // mov r1, #0
    // bl ov40_02230964
    // add r0, r4, #0
    // bl ov40_0223CCA0
    // mov r0, #4
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #4
    // mov r1, #0
    // bl GfGfx_EngineBTogglePlanes
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _0223CC98
    // add r0, r5, #0
    // add r0, #8
    // mov r1, #1
    // bl ov40_0222DA84
    // add r0, r5, #0
    // add r1, r5, #4
    // mov r2, #1
    // mov r3, #0
    // bl ov40_0222DA00
    // cmp r0, #0
    // beq _0223CC24
    // add r0, r4, #0
    // mov r1, #1
    // bl ov40_02230964
    // add r0, r4, #0
    // bl ov40_0223B374
    // add r0, r4, #0
    // mov r1, #0
    // bl ov40_02230964
    // ldr r0, [r4, #0x24]
    // mov r1, #3
    // bl BgClearTilemapBufferAndCommit
    // ldr r0, [r4, #0x24]
    // mov r1, #7
    // bl BgClearTilemapBufferAndCommit
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // ldr r0, [r4, #0x58]
    // mov r1, #3
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r5, #8]
    // ldr r0, [r4, #0x28]
    // lsl r3, r3, #0x18
    // mov r2, #0xc
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // b _0223CC98
    // nop
    // _0223CC40: .word 0x00000115
    // _0223CC44: .word 0x0000086C
    // _0223CC48: .word 0x00004138
    // add r0, r5, #0
    // add r0, #8
    // mov r1, #0
    // bl ov40_0222DA84
    // add r0, r5, #0
    // add r1, r5, #4
    // mov r2, #0
    // mov r3, #1
    // bl ov40_0222DA00
    // cmp r0, #0
    // beq _0223CC76
    // add r0, r4, #0
    // mov r1, #0x64
    // mov r2, #0
    // bl ov40_0223C710
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // ldr r0, [r4, #0x58]
    // mov r1, #3
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r5, #8]
    // ldr r0, [r4, #0x28]
    // lsl r3, r3, #0x18
    // mov r2, #0xc
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // b _0223CC98
    // add r0, r4, #0
    // mov r1, #0xc
    // bl ov40_0222BF80
    // mov r0, #0
    // add sp, #0x10
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}




void ov40_0223CCA0(void) {
    // ldr r4, [r0, r1]
    // add r0, #0x94
    ClearWindowTilemapAndCopyToVram(r4, (0x86 << 4));
    // add r4, #0x94
    RemoveWindow(r4);
}




void ov40_0223CCBC(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // mov r0, #0x86
    // lsl r0, r0, #4
    // ldr r4, [r5, r0]
    // add r6, r1, #0
    // add r4, #0x94
    // add r0, r4, #0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // ldr r0, [r5, #0x48]
    // add r1, r6, #0
    // bl NewString_ReadMsgData
    // add r5, r0, #0
    // add r0, r4, #0
    // add r1, r5, #0
    // bl ov40_022306C0
    // mov r1, #0
    // add r3, r0, #0
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0223CD10 ; =0x000F0D00
    // add r2, r5, #0
    // str r0, [sp, #8]
    // add r0, r4, #0
    // str r1, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r5, #0
    // bl String_Delete
    // add r0, r4, #0
    // bl ScheduleWindowCopyToVram
    // add sp, #0x10
    // pop {r4, r5, r6, pc}
    // nop
    // _0223CD10: .word 0x000F0D00
    // TODO: decompile
}




void ov40_0223CD14(void) {
    // ldr r4, [r5, r0]
    // add r6, #0x94
    InitWindow(r4);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    AddWindowParameterized(*((u32*)(r5 + 0x24)), r6, 6, 8);
    // add r1, #0x79
    ov40_0223CCBC(r5, *((u32*)(r4 + 0x10)));
}




void ov40_0223CD58(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // add r5, r0, #0
    // mov r0, #0x86
    // lsl r0, r0, #4
    // ldr r4, [r5, r0]
    // add r6, r4, #0
    // add r6, #0x94
    // add r0, r6, #0
    // bl InitWindow
    // mov r2, #6
    // str r2, [sp]
    // mov r0, #0xa
    // str r0, [sp, #4]
    // mov r0, #2
    // str r0, [sp, #8]
    // mov r0, #0xe
    // str r0, [sp, #0xc]
    // mov r0, #1
    // str r0, [sp, #0x10]
    // ldr r0, [r5, #0x24]
    // add r1, r6, #0
    // mov r3, #4
    // bl AddWindowParameterized
    // add r0, r6, #0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // ldr r0, [r5, #0x48]
    // mov r1, #0x82
    // bl NewString_ReadMsgData
    // add r7, r0, #0
    // add r0, r6, #0
    // add r1, r7, #0
    // bl ov40_022306C0
    // mov r1, #0
    // add r3, r0, #0
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0223CE34 ; =0x000F0D00
    // add r2, r7, #0
    // str r0, [sp, #8]
    // add r0, r6, #0
    // str r1, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r7, #0
    // bl String_Delete
    // add r0, r6, #0
    // bl ScheduleWindowCopyToVram
    // add r4, #0xa4
    // add r0, r4, #0
    // bl InitWindow
    // mov r2, #6
    // str r2, [sp]
    // mov r0, #0xa
    // str r0, [sp, #4]
    // mov r0, #2
    // str r0, [sp, #8]
    // mov r0, #0xe
    // str r0, [sp, #0xc]
    // mov r0, #0x15
    // str r0, [sp, #0x10]
    // ldr r0, [r5, #0x24]
    // add r1, r4, #0
    // mov r3, #0x12
    // bl AddWindowParameterized
    // add r0, r4, #0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // ldr r0, [r5, #0x48]
    // mov r1, #0x83
    // bl NewString_ReadMsgData
    // add r5, r0, #0
    // add r0, r4, #0
    // add r1, r5, #0
    // bl ov40_022306C0
    // mov r1, #0
    // add r3, r0, #0
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0223CE34 ; =0x000F0D00
    // add r2, r5, #0
    // str r0, [sp, #8]
    // add r0, r4, #0
    // str r1, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r5, #0
    // bl String_Delete
    // add r0, r4, #0
    // bl ScheduleWindowCopyToVram
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _0223CE34: .word 0x000F0D00
    // TODO: decompile
}




void ov40_0223CE38(void) {
    // ldr r4, [r0, r1]
    // add r0, #0x94
    ClearWindowTilemapAndCopyToVram(r4, (0x86 << 4));
    // add r0, #0x94
    RemoveWindow(r4);
    // add r0, #0xa4
    ClearWindowTilemapAndCopyToVram(r4);
    // add r4, #0xa4
    RemoveWindow(r4);
}




void ov40_0223CE64(void) {
    // push {r3, r4, r5, lr}
    // add r4, r2, #0
    // mov r2, #0x86
    // lsl r2, r2, #4
    // ldr r5, [r4, r2]
    // cmp r1, #0
    // bne _0223CEF8
    // cmp r0, #3
    // bhi _0223CEF8
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0223CE82: ; jump table
    // add r0, r4, #0
    // bl ov40_02230944
    // add r0, r4, #0
    // mov r1, #8
    // bl ov40_0222BF80
    // pop {r3, r4, r5, pc}
    // add r0, r4, #0
    // bl ov40_02230944
    // bl sub_0202FC48
    // cmp r0, #0
    // beq _0223CEB2
    // add r0, r4, #0
    // mov r1, #9
    // bl ov40_0222BF80
    // pop {r3, r4, r5, pc}
    // ldr r0, _0223CEFC ; =0x00002034
    // mov r1, #9
    // str r1, [r5, r0]
    // add r0, r4, #0
    // mov r1, #0x12
    // bl ov40_0222BF80
    // pop {r3, r4, r5, pc}
    // add r0, r4, #0
    // bl ov40_02230944
    // bl sub_0202FC48
    // cmp r0, #0
    // beq _0223CEDA
    // add r0, r4, #0
    // mov r1, #0xb
    // bl ov40_0222BF80
    // pop {r3, r4, r5, pc}
    // ldr r0, _0223CEFC ; =0x00002034
    // mov r1, #0xb
    // str r1, [r5, r0]
    // add r0, r4, #0
    // mov r1, #0x12
    // bl ov40_0222BF80
    // pop {r3, r4, r5, pc}
    // add r0, r4, #0
    // bl ov40_02230944
    // add r0, r4, #0
    // mov r1, #0xa
    // bl ov40_0222BF80
    // pop {r3, r4, r5, pc}
    // nop
    // _0223CEFC: .word 0x00002034
    // TODO: decompile
}




void ov40_0223CF00(void) {
    // push {r4, lr}
    // add r4, r2, #0
    // mov r2, #0x86
    // lsl r2, r2, #4
    // ldr r3, [r4, r2]
    // cmp r1, #0
    // bne _0223CF68
    // cmp r0, #3
    // bhi _0223CF68
    // add r1, r0, r0
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _0223CF1E: ; jump table
    // add r1, r0, #1
    // ldr r0, _0223CF6C ; =0x00002028
    // add r2, #0x2c
    // str r1, [r3, r0]
    // ldr r0, [r3, r0]
    // lsl r0, r0, #2
    // add r0, r4, r0
    // ldr r0, [r0, r2]
    // cmp r0, #0
    // beq _0223CF44
    // add r0, r4, #0
    // mov r1, #0xe
    // bl ov40_0222BF80
    // b _0223CF4C
    // add r0, r4, #0
    // mov r1, #0x11
    // bl ov40_0222BF80
    // add r0, r4, #0
    // bl ov40_02230944
    // pop {r4, pc}
    // add r0, r4, #0
    // bl ov40_02230944
    // add r0, r4, #0
    // bl ov40_0222DEAC
    // add r0, r4, #0
    // mov r1, #0xd
    // bl ov40_0222BF80
    // pop {r4, pc}
    // nop
    // _0223CF6C: .word 0x00002028
    // TODO: decompile
}




void ov40_0223CF70(void) {
    ov40_02230944(r2);
    ov40_0223CE38(r4);
    ov40_0222BF80(r4, 0x11);
    ov40_02230944(r4);
    ov40_0222BF80(r4, 0x10);
}




void ov40_0223CFA8(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // mov r0, #0x86
    // lsl r0, r0, #4
    // ldr r4, [r5, r0]
    // mov r0, #0x6d
    // bl sub_020314A4
    // mov r1, #0x65
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // ldr r0, _0223D000 ; =0x000004D4
    // ldr r1, [r4, r1]
    // ldr r0, [r5, r0]
    // lsl r0, r0, #2
    // add r2, r5, r0
    // ldr r0, _0223D004 ; =0x00002608
    // ldr r0, [r2, r0]
    // bl ov39_022271C0
    // mov r0, #0x65
    // lsl r0, r0, #2
    // ldr r1, [r4, r0]
    // add r0, #0x8c
    // str r1, [r4, r0]
    // mov r0, #0x6d
    // bl sub_02030920
    // mov r1, #0x89
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // ldr r0, _0223D000 ; =0x000004D4
    // ldr r1, [r4, r1]
    // ldr r0, [r5, r0]
    // lsl r0, r0, #2
    // add r2, r5, r0
    // ldr r0, _0223D004 ; =0x00002608
    // ldr r0, [r2, r0]
    // mov r2, #0x64
    // add r0, #0x80
    // bl MI_CpuCopy8
    // pop {r3, r4, r5, pc}
    // nop
    // _0223D000: .word 0x000004D4
    // _0223D004: .word 0x00002608
    // TODO: decompile
}




void ov40_0223D008(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x80
    // mov r1, #0x86
    // lsl r1, r1, #4
    // str r0, [sp, #8]
    // ldr r0, [r0, r1]
    // ldr r1, _0223D194 ; =0x000004A4
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #8]
    // ldr r5, _0223D198 ; =ov40_0224554C
    // ldrsh r2, [r0, r1]
    // add r4, sp, #0x50
    // mov r3, #6
    // ldmia r5!, {r0, r1}
    // stmia r4!, {r0, r1}
    // sub r3, r3, #1
    // bne _0223D022
    // mov r1, #0
    // add r0, sp, #0x38
    // str r1, [r0]
    // str r1, [r0, #4]
    // str r1, [r0, #8]
    // str r1, [r0, #0xc]
    // str r1, [r0, #0x10]
    // str r1, [r0, #0x14]
    // add r0, sp, #0x20
    // str r1, [r0]
    // str r1, [r0, #4]
    // str r1, [r0, #8]
    // str r1, [r0, #0xc]
    // str r1, [r0, #0x10]
    // str r1, [r0, #0x14]
    // str r1, [sp, #0x18]
    // ldr r0, [sp, #8]
    // lsl r1, r2, #2
    // add r0, r0, r1
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x14]
    // str r0, [sp, #0xc]
    // ldr r1, _0223D19C ; =0x00002608
    // ldr r0, [sp, #0x10]
    // ldr r0, [r0, r1]
    // cmp r0, #0
    // bne _0223D062
    // b _0223D170
    // add r0, #0x80
    // bl ov40_022303B8
    // cmp r0, #0
    // beq _0223D070
    // mov r0, #1
    // b _0223D072
    // mov r0, #0
    // mov r7, #0
    // add r1, r7, #0
    // add r2, sp, #0x38
    // add r4, sp, #0x20
    // add r3, r7, #0
    // stmia r2!, {r3}
    // add r1, r1, #1
    // stmia r4!, {r3}
    // cmp r1, #6
    // blt _0223D07C
    // mov r1, #0x18
    // mul r1, r0
    // add r0, sp, #0x50
    // str r1, [sp, #0x1c]
    // add r0, r0, r1
    // add r1, sp, #0x38
    // add r2, sp, #0x20
    // ldr r5, [sp, #0x10]
    // ldr r4, _0223D19C ; =0x00002608
    // ldr r6, [r0]
    // ldr r5, [r5, r4]
    // lsl r4, r6, #1
    // add r4, r5, r4
    // add r4, #0x80
    // ldrh r4, [r4]
    // cmp r4, #0
    // beq _0223D0BA
    // stmia r1!, {r4}
    // ldr r5, [sp, #0x10]
    // ldr r4, _0223D19C ; =0x00002608
    // add r7, r7, #1
    // ldr r4, [r5, r4]
    // add r4, r4, r6
    // add r4, #0x98
    // ldrb r4, [r4]
    // stmia r2!, {r4}
    // add r3, r3, #1
    // add r0, r0, #4
    // cmp r3, #3
    // blt _0223D094
    // ldr r1, _0223D19C ; =0x00002608
    // ldr r0, [sp, #0x10]
    // ldr r0, [r0, r1]
    // add r0, #0x80
    // bl ov40_022303B8
    // cmp r0, #0
    // beq _0223D0D4
    // mov r7, #3
    // ldr r0, [sp, #0x1c]
    // add r1, sp, #0x50
    // add r0, r1, r0
    // lsl r4, r7, #2
    // add r1, sp, #0x38
    // add r2, sp, #0x20
    // mov r3, #3
    // add r0, #0xc
    // add r1, r1, r4
    // add r2, r2, r4
    // ldr r5, [sp, #0x10]
    // ldr r4, _0223D19C ; =0x00002608
    // ldr r6, [r0]
    // ldr r5, [r5, r4]
    // lsl r4, r6, #1
    // add r4, r5, r4
    // add r4, #0x80
    // ldrh r4, [r4]
    // cmp r4, #0
    // beq _0223D10E
    // stmia r1!, {r4}
    // ldr r5, [sp, #0x10]
    // ldr r4, _0223D19C ; =0x00002608
    // add r7, r7, #1
    // ldr r4, [r5, r4]
    // add r4, r4, r6
    // add r4, #0x98
    // ldrb r4, [r4]
    // stmia r2!, {r4}
    // add r3, r3, #1
    // add r0, r0, #4
    // cmp r3, #6
    // blt _0223D0E8
    // ldr r5, [sp, #0xc]
    // mov r7, #0
    // add r6, sp, #0x38
    // add r4, sp, #0x20
    // ldr r2, [sp, #0x14]
    // ldr r1, _0223D1A0 ; =0x00002088
    // ldr r3, [r6]
    // ldr r2, [r2, r1]
    // ldr r0, [r4]
    // add r1, r1, #4
    // str r2, [r5, r1]
    // str r0, [sp]
    // mov r0, #0
    // mov r1, #0x82
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x14]
    // lsl r1, r1, #6
    // ldr r1, [r2, r1]
    // ldr r2, _0223D1A4 ; =0x0000208C
    // ldr r0, [sp, #8]
    // ldr r2, [r5, r2]
    // bl ov40_0222FEA0
    // ldr r1, _0223D1A8 ; =0x00002090
    // str r0, [r5, r1]
    // add r0, r1, #0
    // ldr r0, [r5, r0]
    // cmp r0, #0
    // beq _0223D158
    // mov r1, #6
    // sub r1, r1, r7
    // bl ManagedSprite_SetDrawPriority
    // ldr r1, [sp, #0x14]
    // ldr r0, _0223D1A0 ; =0x00002088
    // add r7, r7, #1
    // ldr r0, [r1, r0]
    // add r6, r6, #4
    // add r2, r0, #1
    // ldr r0, _0223D1A0 ; =0x00002088
    // add r4, r4, #4
    // add r5, #8
    // str r2, [r1, r0]
    // cmp r7, #6
    // blt _0223D11E
    // ldr r0, [sp, #0x10]
    // add r0, r0, #4
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0xc]
    // add r0, #0x30
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x18]
    // add r0, r0, #1
    // str r0, [sp, #0x18]
    // cmp r0, #5
    // bge _0223D188
    // b _0223D056
    // ldr r0, [sp, #8]
    // bl ov40_0223A3BC
    // add sp, #0x80
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0223D194: .word 0x000004A4
    // _0223D198: .word ov40_0224554C
    // _0223D19C: .word 0x00002608
    // _0223D1A0: .word 0x00002088
    // _0223D1A4: .word 0x0000208C
    // _0223D1A8: .word 0x00002090
    // TODO: decompile
}




void ov40_0223D1AC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r6, r1, #0
    // mov r1, #0
    // str r1, [sp, #4]
    // mov r1, #0x86
    // lsl r1, r1, #4
    // ldr r0, [r0, r1]
    // ldr r7, _0223D1EC ; =0x00002090
    // str r0, [sp]
    // ldr r5, [sp]
    // mov r4, #0
    // ldr r0, [r5, r7]
    // cmp r0, #0
    // beq _0223D1D0
    // add r1, r6, #0
    // bl ManagedSprite_SetDrawFlag
    // add r4, r4, #1
    // add r5, #8
    // cmp r4, #6
    // blt _0223D1C4
    // ldr r0, [sp]
    // add r0, #0x30
    // str r0, [sp]
    // ldr r0, [sp, #4]
    // add r0, r0, #1
    // str r0, [sp, #4]
    // cmp r0, #5
    // blt _0223D1C0
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // _0223D1EC: .word 0x00002090
    // TODO: decompile
}




void ov40_0223D1F0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r6, r0, #0
    // mov r0, #0
    // str r0, [sp, #4]
    // mov r0, #0x86
    // lsl r0, r0, #4
    // ldr r0, [r6, r0]
    // mov r7, #0
    // str r0, [sp]
    // ldr r5, [sp]
    // mov r4, #0
    // ldr r0, _0223D23C ; =0x00002090
    // ldr r2, [r5, r0]
    // cmp r2, #0
    // beq _0223D21E
    // ldr r1, _0223D240 ; =0x0000208C
    // add r0, r6, #0
    // ldr r1, [r5, r1]
    // bl ov40_0222FF48
    // ldr r0, _0223D23C ; =0x00002090
    // str r7, [r5, r0]
    // add r4, r4, #1
    // add r5, #8
    // cmp r4, #6
    // blt _0223D208
    // ldr r0, [sp]
    // add r0, #0x30
    // str r0, [sp]
    // ldr r0, [sp, #4]
    // add r0, r0, #1
    // str r0, [sp, #4]
    // cmp r0, #5
    // blt _0223D204
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0223D23C: .word 0x00002090
    // _0223D240: .word 0x0000208C
    // TODO: decompile
}




void ov40_0223D244(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xa4
    // mov r1, #0
    // str r1, [sp, #0x20]
    // ldr r2, [sp, #0x20]
    // add r1, sp, #0x8c
    // str r2, [r1]
    // str r2, [r1, #4]
    // str r2, [r1, #8]
    // str r2, [r1, #0xc]
    // str r2, [r1, #0x10]
    // str r2, [r1, #0x14]
    // mov r2, #0x86
    // lsl r2, r2, #4
    // add r1, r0, #0
    // ldr r1, [r1, r2]
    // ldr r2, _0223D4E0 ; =0x00002084
    // str r1, [sp, #0x1c]
    // ldr r3, [r1, r2]
    // ldr r2, _0223D4E4 ; =0x000004A4
    // add r1, r0, #0
    // ldrsh r1, [r1, r2]
    // str r0, [sp, #8]
    // cmp r3, r1
    // bne _0223D278
    // b _0223D4DA
    // mov r1, #1
    // bl ov40_02230964
    // ldr r1, _0223D4E0 ; =0x00002084
    // ldr r0, [sp, #0x1c]
    // ldr r2, [r0, r1]
    // ldr r1, _0223D4E4 ; =0x000004A4
    // ldr r0, [sp, #8]
    // ldrsh r0, [r0, r1]
    // cmp r2, r0
    // ble _0223D292
    // mov r0, #4
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x20]
    // mov r1, #0x30
    // mul r1, r0
    // ldr r0, [sp, #0x1c]
    // mov r6, #0
    // add r4, r0, r1
    // add r5, sp, #0x8c
    // add r7, r6, #0
    // ldr r0, _0223D4E8 ; =0x00002090
    // ldr r2, [r4, r0]
    // cmp r2, #0
    // beq _0223D2BE
    // ldr r1, _0223D4EC ; =0x0000208C
    // ldr r0, [sp, #8]
    // ldr r1, [r4, r1]
    // bl ov40_0222FF64
    // ldr r0, _0223D4EC ; =0x0000208C
    // ldr r0, [r4, r0]
    // str r0, [r5]
    // ldr r0, _0223D4E8 ; =0x00002090
    // str r7, [r4, r0]
    // add r6, r6, #1
    // add r4, #8
    // add r5, r5, #4
    // cmp r6, #6
    // blt _0223D2A2
    // ldr r0, [sp, #0x20]
    // cmp r0, #0
    // beq _0223D308
    // ldr r2, _0223D4F0 ; =0x00002060
    // ldr r7, [sp, #0x1c]
    // mov r0, #4
    // add r3, r2, #0
    // add r5, r2, #0
    // str r0, [sp, #0xc]
    // add r7, #0xc0
    // add r3, #0x30
    // sub r4, r2, #4
    // add r5, #0x2c
    // mov r0, #0
    // add r1, r7, #0
    // ldr r6, [r1, r2]
    // add r0, r0, #1
    // str r6, [r1, r3]
    // ldr r6, [r1, r4]
    // str r6, [r1, r5]
    // add r1, #8
    // cmp r0, #6
    // blt _0223D2E6
    // ldr r0, [sp, #0xc]
    // sub r7, #0x30
    // sub r0, r0, #1
    // str r0, [sp, #0xc]
    // cmp r0, #1
    // bge _0223D2E2
    // mov r0, #0
    // str r0, [sp, #0x10]
    // b _0223D340
    // ldr r6, _0223D4E8 ; =0x00002090
    // ldr r7, [sp, #0x1c]
    // mov r0, #1
    // add r2, r6, #0
    // add r4, r6, #0
    // mov ip, r0
    // add r7, #0x30
    // sub r2, #0x30
    // sub r3, r6, #4
    // sub r4, #0x34
    // mov r1, #0
    // add r0, r7, #0
    // ldr r5, [r0, r6]
    // add r1, r1, #1
    // str r5, [r0, r2]
    // ldr r5, [r0, r3]
    // str r5, [r0, r4]
    // add r0, #8
    // cmp r1, #6
    // blt _0223D320
    // mov r0, ip
    // add r0, r0, #1
    // add r7, #0x30
    // mov ip, r0
    // cmp r0, #5
    // blt _0223D31C
    // mov r0, #4
    // str r0, [sp, #0x10]
    // ldr r1, _0223D4E4 ; =0x000004A4
    // ldr r0, [sp, #8]
    // ldr r5, _0223D4F4 ; =ov40_0224551C
    // ldrsh r1, [r0, r1]
    // ldr r0, [sp, #0x10]
    // add r4, sp, #0x5c
    // add r2, r1, r0
    // mov r3, #6
    // ldmia r5!, {r0, r1}
    // stmia r4!, {r0, r1}
    // sub r3, r3, #1
    // bne _0223D350
    // add r0, sp, #0x44
    // mov r4, #0
    // str r4, [r0]
    // str r4, [r0, #4]
    // str r4, [r0, #8]
    // str r4, [r0, #0xc]
    // str r4, [r0, #0x10]
    // str r4, [r0, #0x14]
    // add r0, sp, #0x2c
    // str r4, [r0]
    // str r4, [r0, #4]
    // str r4, [r0, #8]
    // str r4, [r0, #0xc]
    // str r4, [r0, #0x10]
    // str r4, [r0, #0x14]
    // lsl r0, r2, #2
    // str r0, [sp, #0x14]
    // ldr r1, _0223D4F8 ; =0x00002608
    // ldr r0, [sp, #8]
    // add r1, r0, r1
    // ldr r0, [sp, #0x14]
    // str r1, [sp, #0x24]
    // ldr r0, [r1, r0]
    // add r0, #0x80
    // bl ov40_022303B8
    // cmp r0, #0
    // beq _0223D392
    // mov r4, #1
    // mov r0, #0
    // str r0, [sp, #0x18]
    // add r1, sp, #0x44
    // add r2, sp, #0x2c
    // add r6, r0, #0
    // stmia r1!, {r6}
    // add r0, r0, #1
    // stmia r2!, {r6}
    // cmp r0, #6
    // blt _0223D39C
    // mov r0, #0x18
    // mul r0, r4
    // add r1, sp, #0x5c
    // add r2, r1, r0
    // str r0, [sp, #0x28]
    // ldr r1, [sp, #8]
    // ldr r0, [sp, #0x14]
    // add r3, sp, #0x44
    // add r5, sp, #0x2c
    // add r4, r1, r0
    // ldr r0, _0223D4F8 ; =0x00002608
    // ldr r7, [r2]
    // ldr r1, [r4, r0]
    // lsl r0, r7, #1
    // add r0, r1, r0
    // add r0, #0x80
    // ldrh r0, [r0]
    // cmp r0, #0
    // beq _0223D3E0
    // stmia r3!, {r0}
    // ldr r0, _0223D4F8 ; =0x00002608
    // ldr r0, [r4, r0]
    // add r0, r0, r7
    // add r0, #0x98
    // ldrb r0, [r0]
    // stmia r5!, {r0}
    // ldr r0, [sp, #0x18]
    // add r0, r0, #1
    // str r0, [sp, #0x18]
    // add r6, r6, #1
    // add r2, r2, #4
    // cmp r6, #3
    // blt _0223D3BA
    // ldr r1, [sp, #0x24]
    // ldr r0, [sp, #0x14]
    // ldr r0, [r1, r0]
    // add r0, #0x80
    // bl ov40_022303B8
    // cmp r0, #0
    // beq _0223D3FC
    // mov r0, #3
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x28]
    // add r1, sp, #0x5c
    // add r2, r1, r0
    // ldr r0, [sp, #0x18]
    // mov r6, #3
    // lsl r1, r0, #2
    // add r0, sp, #0x44
    // add r3, r0, r1
    // add r0, sp, #0x2c
    // add r2, #0xc
    // add r5, r0, r1
    // ldr r0, _0223D4F8 ; =0x00002608
    // ldr r7, [r2]
    // ldr r1, [r4, r0]
    // lsl r0, r7, #1
    // add r0, r1, r0
    // add r0, #0x80
    // ldrh r0, [r0]
    // cmp r0, #0
    // beq _0223D438
    // stmia r3!, {r0}
    // ldr r0, _0223D4F8 ; =0x00002608
    // ldr r0, [r4, r0]
    // add r0, r0, r7
    // add r0, #0x98
    // ldrb r0, [r0]
    // stmia r5!, {r0}
    // ldr r0, [sp, #0x18]
    // add r0, r0, #1
    // str r0, [sp, #0x18]
    // add r6, r6, #1
    // add r2, r2, #4
    // cmp r6, #6
    // blt _0223D412
    // ldr r0, [sp, #0x10]
    // mov r1, #0x30
    // mul r1, r0
    // ldr r0, [sp, #0x1c]
    // mov r5, #0
    // add r7, sp, #0x44
    // add r6, sp, #0x2c
    // add r4, r0, r1
    // ldr r2, [sp, #0x1c]
    // ldr r1, _0223D4FC ; =0x00002088
    // ldr r3, [r7]
    // ldr r2, [r2, r1]
    // ldr r0, [r6]
    // add r1, r1, #4
    // str r2, [r4, r1]
    // str r0, [sp]
    // mov r0, #0
    // mov r1, #0x82
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x1c]
    // lsl r1, r1, #6
    // ldr r1, [r2, r1]
    // ldr r2, _0223D4EC ; =0x0000208C
    // ldr r0, [sp, #8]
    // ldr r2, [r4, r2]
    // bl ov40_0222FEA0
    // ldr r1, _0223D4E8 ; =0x00002090
    // str r0, [r4, r1]
    // add r0, r1, #0
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // beq _0223D48A
    // mov r1, #6
    // sub r1, r1, r5
    // bl ManagedSprite_SetDrawPriority
    // ldr r1, [sp, #0x1c]
    // ldr r0, _0223D4FC ; =0x00002088
    // add r5, r5, #1
    // ldr r0, [r1, r0]
    // add r7, r7, #4
    // add r2, r0, #1
    // ldr r0, _0223D4FC ; =0x00002088
    // add r6, r6, #4
    // add r4, #8
    // str r2, [r1, r0]
    // cmp r5, #6
    // blt _0223D450
    // ldr r0, [sp, #8]
    // bl ov40_0223A3BC
    // ldr r1, _0223D4E4 ; =0x000004A4
    // ldr r0, [sp, #8]
    // ldr r6, _0223D500 ; =0x000186A0
    // ldrsh r2, [r0, r1]
    // ldr r1, _0223D4E0 ; =0x00002084
    // ldr r0, [sp, #0x1c]
    // mov r5, #0
    // str r2, [r0, r1]
    // add r4, sp, #0x8c
    // ldr r1, [r4]
    // cmp r1, #0
    // beq _0223D4CA
    // ldr r0, [sp, #8]
    // add r1, r1, r6
    // ldr r0, [r0, #0x1c]
    // bl SpriteManager_UnloadCharObjById
    // add r5, r5, #1
    // add r4, r4, #4
    // cmp r5, #6
    // blt _0223D4BA
    // ldr r0, [sp, #8]
    // mov r1, #0
    // bl ov40_02230964
    // add sp, #0xa4
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _0223D4E0: .word 0x00002084
    // _0223D4E4: .word 0x000004A4
    // _0223D4E8: .word 0x00002090
    // _0223D4EC: .word 0x0000208C
    // _0223D4F0: .word 0x00002060
    // _0223D4F4: .word ov40_0224551C
    // _0223D4F8: .word 0x00002608
    // _0223D4FC: .word 0x00002088
    // _0223D500: .word 0x000186A0
    // TODO: decompile
}




void ov40_0223D504(void) {
    // ldr r4, [r5, r0]
    // add r0, r4, r0
    ov40_0222D6D0((0x45 << 2));
    // add r0, r4, r0
    ov40_0222D6D0((0x13 << 4));
    // ldr r0, [r4, r0]
    Sprite_DeleteAndFreeResources((0x46 << 2));
    // ldr r0, [r4, r0]
    Sprite_DeleteAndFreeResources((0x4d << 2));
    ov40_0222D7DC(r5);
}




void ov40_0223D540(void) {
    // add r0, #0x68
}




void ov40_0223D544(void) {
    // push {r4, lr}
    // sub sp, #0x40
    // add r4, r0, #0
    // mov r0, #0x83
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // bl Save_SysInfo_Get
    // bl Save_SysInfo_GetDwcProfileId
    // str r0, [sp]
    // mov r0, #0x6d
    // str r0, [sp, #4]
    // mov r0, #0x83
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // add r1, sp, #0
    // str r0, [sp, #8]
    // ldr r0, _0223D5A4 ; =ov40_02236158
    // str r4, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r0, _0223D5A8 ; =ov40_0223615C
    // str r4, [sp, #0x3c]
    // str r0, [sp, #0x14]
    // ldr r0, _0223D5AC ; =ov40_02238EB8
    // add r4, #0x68
    // str r0, [sp, #0x18]
    // ldr r0, _0223D5B0 ; =ov40_02238EBC
    // str r0, [sp, #0x1c]
    // ldr r0, _0223D5B4 ; =ov40_0223A324
    // str r0, [sp, #0x20]
    // ldr r0, _0223D5B8 ; =ov40_0223A360
    // str r0, [sp, #0x24]
    // ldr r0, _0223D5BC ; =ov40_02242DF0
    // str r0, [sp, #0x28]
    // ldr r0, _0223D5C0 ; =ov40_0222FC4C
    // str r0, [sp, #0x2c]
    // ldr r0, _0223D5C4 ; =ov40_02242E14
    // str r0, [sp, #0x30]
    // ldr r0, _0223D5C8 ; =ov40_02242E48
    // str r0, [sp, #0x34]
    // mov r0, #0
    // str r0, [sp, #0x38]
    // add r0, r4, #0
    // bl ov39_02227208
    // add sp, #0x40
    // pop {r4, pc}
    // _0223D5A4: .word ov40_02236158
    // _0223D5A8: .word ov40_0223615C
    // _0223D5AC: .word ov40_02238EB8
    // _0223D5B0: .word ov40_02238EBC
    // _0223D5B4: .word ov40_0223A324
    // _0223D5B8: .word ov40_0223A360
    // _0223D5BC: .word ov40_02242DF0
    // _0223D5C0: .word ov40_0222FC4C
    // _0223D5C4: .word ov40_02242E14
    // _0223D5C8: .word ov40_02242E48
    // TODO: decompile
}




void ov40_0223D5CC(void) {
    // ldr r1, [r0, r1]
    ov40_0223D540(0, (0x42 << 4));
    ov39_02227DB8();
}




void ov40_0223D5E8(void) {
    // ldr r1, [r0, r1]
    ov40_0223D540((0x42 << 4));
    ov39_02227778();
}




void ov40_0223D600(void) {
    // ldr r1, [r0, r1]
    ov40_0223D540((0x42 << 4));
    ov39_022272EC();
}




void ov40_0223D618(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x84
    // ldr r4, _0223D684 ; =ov40_02245948
    // add r3, sp, #0xc
    // mov r2, #0x3c
    // ldrh r1, [r4]
    // add r4, r4, #2
    // strh r1, [r3]
    // add r3, r3, #2
    // sub r2, r2, #1
    // bne _0223D622
    // mov r1, #0
    // str r1, [sp, #8]
    // mov r1, #0x86
    // lsl r1, r1, #4
    // ldr r0, [r0, r1]
    // ldr r7, _0223D688 ; =0x0000051C
    // str r0, [sp, #4]
    // ldr r0, [sp, #8]
    // str r0, [sp]
    // ldr r0, [sp]
    // ldr r4, [sp, #4]
    // lsl r1, r0, #2
    // add r0, sp, #0xc
    // mov r6, #0
    // add r5, r0, r1
    // ldr r0, [r4, r7]
    // cmp r0, #0
    // beq _0223D65E
    // mov r1, #0
    // mov r2, #2
    // ldrsh r1, [r5, r1]
    // ldrsh r2, [r5, r2]
    // bl ManagedSprite_SetPositionXY
    // add r6, r6, #1
    // add r4, #8
    // add r5, r5, #4
    // cmp r6, #6
    // blt _0223D64C
    // ldr r0, [sp, #4]
    // add r0, #0x30
    // str r0, [sp, #4]
    // ldr r0, [sp]
    // add r0, r0, #6
    // str r0, [sp]
    // ldr r0, [sp, #8]
    // add r0, r0, #1
    // str r0, [sp, #8]
    // cmp r0, #5
    // blt _0223D640
    // add sp, #0x84
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _0223D684: .word ov40_02245948
    // _0223D688: .word 0x0000051C
    // TODO: decompile
}




void ov40_0223D68C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x80
    // mov r1, #0x86
    // lsl r1, r1, #4
    // str r0, [sp, #8]
    // ldr r0, [r0, r1]
    // ldr r4, _0223D814 ; =ov40_02245808
    // str r0, [sp, #0x14]
    // add r3, sp, #0x50
    // mov r2, #6
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // sub r2, r2, #1
    // bne _0223D6A0
    // mov r0, #0
    // add r1, sp, #0x38
    // str r0, [r1]
    // str r0, [r1, #4]
    // str r0, [r1, #8]
    // str r0, [r1, #0xc]
    // str r0, [r1, #0x10]
    // str r0, [r1, #0x14]
    // add r1, sp, #0x20
    // str r0, [r1]
    // str r0, [r1, #4]
    // str r0, [r1, #8]
    // str r0, [r1, #0xc]
    // str r0, [r1, #0x10]
    // str r0, [r1, #0x14]
    // str r0, [sp, #0x18]
    // ldr r1, _0223D818 ; =0x000004A4
    // ldr r0, [sp, #8]
    // ldrsh r0, [r0, r1]
    // lsl r1, r0, #2
    // ldr r0, [sp, #8]
    // add r0, r0, r1
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x14]
    // str r0, [sp, #0xc]
    // ldr r1, _0223D81C ; =0x00002608
    // ldr r0, [sp, #0x10]
    // ldr r0, [r0, r1]
    // cmp r0, #0
    // bne _0223D6E6
    // b _0223D7F2
    // add r0, #0x80
    // bl ov40_022303B8
    // cmp r0, #0
    // beq _0223D6F4
    // mov r0, #1
    // b _0223D6F6
    // mov r0, #0
    // mov r7, #0
    // add r1, r7, #0
    // add r2, sp, #0x38
    // add r4, sp, #0x20
    // add r3, r7, #0
    // stmia r2!, {r3}
    // add r1, r1, #1
    // stmia r4!, {r3}
    // cmp r1, #6
    // blt _0223D700
    // mov r1, #0x18
    // mul r1, r0
    // add r0, sp, #0x50
    // str r1, [sp, #0x1c]
    // add r0, r0, r1
    // add r1, sp, #0x38
    // add r2, sp, #0x20
    // ldr r5, [sp, #0x10]
    // ldr r4, _0223D81C ; =0x00002608
    // ldr r6, [r0]
    // ldr r5, [r5, r4]
    // lsl r4, r6, #1
    // add r4, r5, r4
    // add r4, #0x80
    // ldrh r4, [r4]
    // cmp r4, #0
    // beq _0223D73E
    // stmia r1!, {r4}
    // ldr r5, [sp, #0x10]
    // ldr r4, _0223D81C ; =0x00002608
    // add r7, r7, #1
    // ldr r4, [r5, r4]
    // add r4, r4, r6
    // add r4, #0x98
    // ldrb r4, [r4]
    // stmia r2!, {r4}
    // add r3, r3, #1
    // add r0, r0, #4
    // cmp r3, #3
    // blt _0223D718
    // ldr r1, _0223D81C ; =0x00002608
    // ldr r0, [sp, #0x10]
    // ldr r0, [r0, r1]
    // add r0, #0x80
    // bl ov40_022303B8
    // cmp r0, #0
    // beq _0223D758
    // mov r7, #3
    // ldr r0, [sp, #0x1c]
    // add r1, sp, #0x50
    // add r0, r1, r0
    // lsl r4, r7, #2
    // add r1, sp, #0x38
    // add r2, sp, #0x20
    // mov r3, #3
    // add r0, #0xc
    // add r1, r1, r4
    // add r2, r2, r4
    // ldr r5, [sp, #0x10]
    // ldr r4, _0223D81C ; =0x00002608
    // ldr r6, [r0]
    // ldr r5, [r5, r4]
    // lsl r4, r6, #1
    // add r4, r5, r4
    // add r4, #0x80
    // ldrh r4, [r4]
    // cmp r4, #0
    // beq _0223D792
    // stmia r1!, {r4}
    // ldr r5, [sp, #0x10]
    // ldr r4, _0223D81C ; =0x00002608
    // add r7, r7, #1
    // ldr r4, [r5, r4]
    // add r4, r4, r6
    // add r4, #0x98
    // ldrb r4, [r4]
    // stmia r2!, {r4}
    // add r3, r3, #1
    // add r0, r0, #4
    // cmp r3, #6
    // blt _0223D76C
    // ldr r5, [sp, #0xc]
    // mov r7, #0
    // add r6, sp, #0x38
    // add r4, sp, #0x20
    // ldr r2, [sp, #0x14]
    // ldr r1, _0223D820 ; =0x00000514
    // ldr r3, [r6]
    // ldr r2, [r2, r1]
    // ldr r0, [r4]
    // add r1, r1, #4
    // str r2, [r5, r1]
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x14]
    // ldr r1, _0223D824 ; =0x0000050C
    // ldr r0, [sp, #8]
    // ldr r1, [r2, r1]
    // ldr r2, _0223D828 ; =0x00000518
    // ldr r2, [r5, r2]
    // bl ov40_0222FEA0
    // ldr r1, _0223D82C ; =0x0000051C
    // str r0, [r5, r1]
    // add r0, r1, #0
    // ldr r0, [r5, r0]
    // cmp r0, #0
    // beq _0223D7DA
    // mov r1, #6
    // sub r1, r1, r7
    // bl ManagedSprite_SetDrawPriority
    // ldr r1, [sp, #0x14]
    // ldr r0, _0223D820 ; =0x00000514
    // add r7, r7, #1
    // ldr r0, [r1, r0]
    // add r6, r6, #4
    // add r2, r0, #1
    // ldr r0, _0223D820 ; =0x00000514
    // add r4, r4, #4
    // add r5, #8
    // str r2, [r1, r0]
    // cmp r7, #6
    // blt _0223D7A2
    // ldr r0, [sp, #0x10]
    // add r0, r0, #4
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0xc]
    // add r0, #0x30
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x18]
    // add r0, r0, #1
    // str r0, [sp, #0x18]
    // cmp r0, #5
    // bge _0223D80A
    // b _0223D6DA
    // ldr r0, [sp, #8]
    // bl ov40_0223D618
    // add sp, #0x80
    // pop {r3, r4, r5, r6, r7, pc}
    // _0223D814: .word ov40_02245808
    // _0223D818: .word 0x000004A4
    // _0223D81C: .word 0x00002608
    // _0223D820: .word 0x00000514
    // _0223D824: .word 0x0000050C
    // _0223D828: .word 0x00000518
    // _0223D82C: .word 0x0000051C
    // TODO: decompile
}




void ov40_0223D830(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r6, r1, #0
    // mov r1, #0
    // str r1, [sp, #4]
    // mov r1, #0x86
    // lsl r1, r1, #4
    // ldr r0, [r0, r1]
    // ldr r7, _0223D870 ; =0x0000051C
    // str r0, [sp]
    // ldr r5, [sp]
    // mov r4, #0
    // ldr r0, [r5, r7]
    // cmp r0, #0
    // beq _0223D854
    // add r1, r6, #0
    // bl ManagedSprite_SetDrawFlag
    // add r4, r4, #1
    // add r5, #8
    // cmp r4, #6
    // blt _0223D848
    // ldr r0, [sp]
    // add r0, #0x30
    // str r0, [sp]
    // ldr r0, [sp, #4]
    // add r0, r0, #1
    // str r0, [sp, #4]
    // cmp r0, #5
    // blt _0223D844
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // _0223D870: .word 0x0000051C
    // TODO: decompile
}




void ov40_0223D874(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // mov r1, #0x86
    // add r6, r0, #0
    // lsl r1, r1, #4
    // ldr r1, [r6, r1]
    // str r1, [sp]
    // mov r1, #1
    // bl ov40_02230964
    // mov r0, #0
    // str r0, [sp, #4]
    // add r7, r0, #0
    // ldr r5, [sp]
    // mov r4, #0
    // ldr r0, _0223D8CC ; =0x0000051C
    // ldr r2, [r5, r0]
    // cmp r2, #0
    // beq _0223D8A8
    // ldr r1, _0223D8D0 ; =0x00000518
    // add r0, r6, #0
    // ldr r1, [r5, r1]
    // bl ov40_0222FF48
    // ldr r0, _0223D8CC ; =0x0000051C
    // str r7, [r5, r0]
    // add r4, r4, #1
    // add r5, #8
    // cmp r4, #6
    // blt _0223D892
    // ldr r0, [sp]
    // add r0, #0x30
    // str r0, [sp]
    // ldr r0, [sp, #4]
    // add r0, r0, #1
    // str r0, [sp, #4]
    // cmp r0, #5
    // blt _0223D88E
    // add r0, r6, #0
    // mov r1, #0
    // bl ov40_02230964
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // _0223D8CC: .word 0x0000051C
    // _0223D8D0: .word 0x00000518
    // TODO: decompile
}




void ov40_0223D8D4(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xa4
    // mov r1, #0
    // str r1, [sp, #0x20]
    // ldr r2, [sp, #0x20]
    // add r1, sp, #0x8c
    // str r2, [r1]
    // str r2, [r1, #4]
    // str r2, [r1, #8]
    // str r2, [r1, #0xc]
    // str r2, [r1, #0x10]
    // str r2, [r1, #0x14]
    // mov r2, #0x86
    // lsl r2, r2, #4
    // add r1, r0, #0
    // ldr r1, [r1, r2]
    // mov r2, #0x51
    // lsl r2, r2, #4
    // ldr r3, [r1, r2]
    // str r1, [sp, #0x1c]
    // sub r2, #0x6c
    // add r1, r0, #0
    // ldrsh r1, [r1, r2]
    // str r0, [sp, #8]
    // cmp r3, r1
    // bne _0223D90A
    // b _0223DB6C
    // mov r1, #1
    // bl ov40_02230964
    // mov r1, #0x51
    // ldr r0, [sp, #0x1c]
    // lsl r1, r1, #4
    // ldr r2, [r0, r1]
    // ldr r0, [sp, #8]
    // sub r1, #0x6c
    // ldrsh r0, [r0, r1]
    // cmp r2, r0
    // ble _0223D926
    // mov r0, #4
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x20]
    // mov r1, #0x30
    // mul r1, r0
    // ldr r0, [sp, #0x1c]
    // mov r6, #0
    // add r4, r0, r1
    // add r5, sp, #0x8c
    // add r7, r6, #0
    // ldr r0, _0223DB70 ; =0x0000051C
    // ldr r2, [r4, r0]
    // cmp r2, #0
    // beq _0223D952
    // ldr r1, _0223DB74 ; =0x00000518
    // ldr r0, [sp, #8]
    // ldr r1, [r4, r1]
    // bl ov40_0222FF64
    // ldr r0, _0223DB74 ; =0x00000518
    // ldr r0, [r4, r0]
    // str r0, [r5]
    // ldr r0, _0223DB70 ; =0x0000051C
    // str r7, [r4, r0]
    // add r6, r6, #1
    // add r4, #8
    // add r5, r5, #4
    // cmp r6, #6
    // blt _0223D936
    // ldr r0, [sp, #0x20]
    // cmp r0, #0
    // beq _0223D99C
    // ldr r2, _0223DB78 ; =0x000004EC
    // ldr r7, [sp, #0x1c]
    // mov r0, #4
    // add r3, r2, #0
    // add r5, r2, #0
    // str r0, [sp, #0xc]
    // add r7, #0xc0
    // add r3, #0x30
    // sub r4, r2, #4
    // add r5, #0x2c
    // mov r0, #0
    // add r1, r7, #0
    // ldr r6, [r1, r2]
    // add r0, r0, #1
    // str r6, [r1, r3]
    // ldr r6, [r1, r4]
    // str r6, [r1, r5]
    // add r1, #8
    // cmp r0, #6
    // blt _0223D97A
    // ldr r0, [sp, #0xc]
    // sub r7, #0x30
    // sub r0, r0, #1
    // str r0, [sp, #0xc]
    // cmp r0, #1
    // bge _0223D976
    // mov r0, #0
    // str r0, [sp, #0x10]
    // b _0223D9D4
    // ldr r6, _0223DB70 ; =0x0000051C
    // ldr r7, [sp, #0x1c]
    // mov r0, #1
    // add r2, r6, #0
    // add r4, r6, #0
    // mov ip, r0
    // add r7, #0x30
    // sub r2, #0x30
    // sub r3, r6, #4
    // sub r4, #0x34
    // mov r1, #0
    // add r0, r7, #0
    // ldr r5, [r0, r6]
    // add r1, r1, #1
    // str r5, [r0, r2]
    // ldr r5, [r0, r3]
    // str r5, [r0, r4]
    // add r0, #8
    // cmp r1, #6
    // blt _0223D9B4
    // mov r0, ip
    // add r0, r0, #1
    // add r7, #0x30
    // mov ip, r0
    // cmp r0, #5
    // blt _0223D9B0
    // mov r0, #4
    // str r0, [sp, #0x10]
    // ldr r1, _0223DB7C ; =0x000004A4
    // ldr r0, [sp, #8]
    // ldr r5, _0223DB80 ; =ov40_02245838
    // ldrsh r1, [r0, r1]
    // ldr r0, [sp, #0x10]
    // add r4, sp, #0x5c
    // add r2, r1, r0
    // mov r3, #6
    // ldmia r5!, {r0, r1}
    // stmia r4!, {r0, r1}
    // sub r3, r3, #1
    // bne _0223D9E4
    // add r0, sp, #0x44
    // mov r4, #0
    // str r4, [r0]
    // str r4, [r0, #4]
    // str r4, [r0, #8]
    // str r4, [r0, #0xc]
    // str r4, [r0, #0x10]
    // str r4, [r0, #0x14]
    // add r0, sp, #0x2c
    // str r4, [r0]
    // str r4, [r0, #4]
    // str r4, [r0, #8]
    // str r4, [r0, #0xc]
    // str r4, [r0, #0x10]
    // str r4, [r0, #0x14]
    // lsl r0, r2, #2
    // str r0, [sp, #0x14]
    // ldr r1, _0223DB84 ; =0x00002608
    // ldr r0, [sp, #8]
    // add r1, r0, r1
    // ldr r0, [sp, #0x14]
    // str r1, [sp, #0x24]
    // ldr r0, [r1, r0]
    // add r0, #0x80
    // bl ov40_022303B8
    // cmp r0, #0
    // beq _0223DA26
    // mov r4, #1
    // mov r0, #0
    // str r0, [sp, #0x18]
    // add r1, sp, #0x44
    // add r2, sp, #0x2c
    // add r6, r0, #0
    // stmia r1!, {r6}
    // add r0, r0, #1
    // stmia r2!, {r6}
    // cmp r0, #6
    // blt _0223DA30
    // mov r0, #0x18
    // mul r0, r4
    // add r1, sp, #0x5c
    // add r2, r1, r0
    // str r0, [sp, #0x28]
    // ldr r1, [sp, #8]
    // ldr r0, [sp, #0x14]
    // add r3, sp, #0x44
    // add r5, sp, #0x2c
    // add r4, r1, r0
    // ldr r0, _0223DB84 ; =0x00002608
    // ldr r7, [r2]
    // ldr r1, [r4, r0]
    // lsl r0, r7, #1
    // add r0, r1, r0
    // add r0, #0x80
    // ldrh r0, [r0]
    // cmp r0, #0
    // beq _0223DA74
    // stmia r3!, {r0}
    // ldr r0, _0223DB84 ; =0x00002608
    // ldr r0, [r4, r0]
    // add r0, r0, r7
    // add r0, #0x98
    // ldrb r0, [r0]
    // stmia r5!, {r0}
    // ldr r0, [sp, #0x18]
    // add r0, r0, #1
    // str r0, [sp, #0x18]
    // add r6, r6, #1
    // add r2, r2, #4
    // cmp r6, #3
    // blt _0223DA4E
    // ldr r1, [sp, #0x24]
    // ldr r0, [sp, #0x14]
    // ldr r0, [r1, r0]
    // add r0, #0x80
    // bl ov40_022303B8
    // cmp r0, #0
    // beq _0223DA90
    // mov r0, #3
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x28]
    // add r1, sp, #0x5c
    // add r2, r1, r0
    // ldr r0, [sp, #0x18]
    // mov r6, #3
    // lsl r1, r0, #2
    // add r0, sp, #0x44
    // add r3, r0, r1
    // add r0, sp, #0x2c
    // add r2, #0xc
    // add r5, r0, r1
    // ldr r0, _0223DB84 ; =0x00002608
    // ldr r7, [r2]
    // ldr r1, [r4, r0]
    // lsl r0, r7, #1
    // add r0, r1, r0
    // add r0, #0x80
    // ldrh r0, [r0]
    // cmp r0, #0
    // beq _0223DACC
    // stmia r3!, {r0}
    // ldr r0, _0223DB84 ; =0x00002608
    // ldr r0, [r4, r0]
    // add r0, r0, r7
    // add r0, #0x98
    // ldrb r0, [r0]
    // stmia r5!, {r0}
    // ldr r0, [sp, #0x18]
    // add r0, r0, #1
    // str r0, [sp, #0x18]
    // add r6, r6, #1
    // add r2, r2, #4
    // cmp r6, #6
    // blt _0223DAA6
    // ldr r0, [sp, #0x10]
    // mov r1, #0x30
    // mul r1, r0
    // ldr r0, [sp, #0x1c]
    // mov r5, #0
    // add r7, sp, #0x44
    // add r6, sp, #0x2c
    // add r4, r0, r1
    // ldr r2, [sp, #0x1c]
    // ldr r1, _0223DB88 ; =0x00000514
    // ldr r3, [r7]
    // ldr r2, [r2, r1]
    // ldr r0, [r6]
    // add r1, r1, #4
    // str r2, [r4, r1]
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x1c]
    // ldr r1, _0223DB8C ; =0x0000050C
    // ldr r0, [sp, #8]
    // ldr r1, [r2, r1]
    // ldr r2, _0223DB74 ; =0x00000518
    // ldr r2, [r4, r2]
    // bl ov40_0222FEA0
    // ldr r1, _0223DB70 ; =0x0000051C
    // str r0, [r4, r1]
    // add r0, r1, #0
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // beq _0223DB1C
    // mov r1, #6
    // sub r1, r1, r5
    // bl ManagedSprite_SetDrawPriority
    // ldr r1, [sp, #0x1c]
    // ldr r0, _0223DB88 ; =0x00000514
    // add r5, r5, #1
    // ldr r0, [r1, r0]
    // add r7, r7, #4
    // add r2, r0, #1
    // ldr r0, _0223DB88 ; =0x00000514
    // add r6, r6, #4
    // add r4, #8
    // str r2, [r1, r0]
    // cmp r5, #6
    // blt _0223DAE4
    // ldr r0, [sp, #8]
    // bl ov40_0223D618
    // ldr r1, _0223DB7C ; =0x000004A4
    // ldr r0, [sp, #8]
    // ldr r6, _0223DB90 ; =0x000186A0
    // ldrsh r2, [r0, r1]
    // ldr r0, [sp, #0x1c]
    // add r1, #0x6c
    // str r2, [r0, r1]
    // mov r5, #0
    // add r4, sp, #0x8c
    // ldr r1, [r4]
    // cmp r1, #0
    // beq _0223DB5C
    // ldr r0, [sp, #8]
    // add r1, r1, r6
    // ldr r0, [r0, #0x1c]
    // bl SpriteManager_UnloadCharObjById
    // add r5, r5, #1
    // add r4, r4, #4
    // cmp r5, #6
    // blt _0223DB4C
    // ldr r0, [sp, #8]
    // mov r1, #0
    // bl ov40_02230964
    // add sp, #0xa4
    // pop {r4, r5, r6, r7, pc}
    // _0223DB70: .word 0x0000051C
    // _0223DB74: .word 0x00000518
    // _0223DB78: .word 0x000004EC
    // _0223DB7C: .word 0x000004A4
    // _0223DB80: .word ov40_02245838
    // _0223DB84: .word 0x00002608
    // _0223DB88: .word 0x00000514
    // _0223DB8C: .word 0x0000050C
    // _0223DB90: .word 0x000186A0
    // TODO: decompile
}




void ov40_0223DB94(void) {
    // mov r1, #0x86
    // lsl r1, r1, #4
    // ldr r0, [r0, r1]
    // mov r2, #0x13
    // lsl r2, r2, #6
    // ldrh r3, [r0, r2]
    // ldr r1, _0223DBD0 ; =0x0000FFFF
    // cmp r3, r1
    // beq _0223DBAA
    // mov r0, #1
    // bx lr
    // add r1, r2, #2
    // ldrb r1, [r0, r1]
    // cmp r1, #0xff
    // beq _0223DBB6
    // mov r0, #1
    // bx lr
    // add r1, r2, #3
    // ldrb r1, [r0, r1]
    // cmp r1, #0xff
    // bne _0223DBC6
    // add r1, r2, #4
    // ldrb r0, [r0, r1]
    // cmp r0, #0xff
    // beq _0223DBCA
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // nop
    // _0223DBD0: .word 0x0000FFFF
    // TODO: decompile
}




void ov40_0223DBD4(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x9c
    // add r3, r1, #0
    // mov r1, #0x86
    // lsl r1, r1, #4
    // str r0, [sp, #0x14]
    // ldr r0, [r0, r1]
    // ldr r6, _0223DCDC ; =ov40_022458E8
    // str r0, [sp, #0x20]
    // add r4, sp, #0x3c
    // mov r2, #0xc
    // ldmia r6!, {r0, r1}
    // stmia r4!, {r0, r1}
    // sub r2, r2, #1
    // bne _0223DBEA
    // ldr r6, _0223DCE0 ; =ov40_022456F0
    // add r4, sp, #0x24
    // add r2, r4, #0
    // ldmia r6!, {r0, r1}
    // stmia r4!, {r0, r1}
    // ldmia r6!, {r0, r1}
    // stmia r4!, {r0, r1}
    // ldmia r6!, {r0, r1}
    // stmia r4!, {r0, r1}
    // cmp r3, #0
    // beq _0223DC0C
    // cmp r3, #1
    // b _0223DC18
    // ldr r1, _0223DCE4 ; =0x00000794
    // ldr r0, [sp, #0x20]
    // mov r3, #6
    // str r3, [r0, r1]
    // add r5, sp, #0x3c
    // str r2, [sp, #0x18]
    // mov r0, #0
    // str r0, [sp, #0x1c]
    // ldr r1, _0223DCE4 ; =0x00000794
    // ldr r0, [sp, #0x20]
    // mov r7, #1
    // ldr r0, [r0, r1]
    // lsl r7, r7, #8
    // cmp r0, #0
    // ble _0223DCD8
    // ldr r1, _0223DCE8 ; =0x00000614
    // ldr r0, [sp, #0x20]
    // add r4, r0, r1
    // add r0, r4, #0
    // bl InitWindow
    // ldr r0, [r5, #4]
    // add r1, r4, #0
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp]
    // ldr r0, [r5, #8]
    // mov r2, #2
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #4]
    // ldr r0, [r5, #0xc]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #8]
    // mov r0, #0xe
    // str r0, [sp, #0xc]
    // lsl r0, r7, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x14]
    // ldr r3, [r5]
    // ldr r0, [r0, #0x24]
    // lsl r3, r3, #0x18
    // lsr r3, r3, #0x18
    // bl AddWindowParameterized
    // add r0, r4, #0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp, #0x18]
    // ldr r0, [r0, #0x48]
    // ldr r1, [r1]
    // bl NewString_ReadMsgData
    // add r6, r0, #0
    // ldr r1, [r5, #8]
    // ldr r0, [r5, #0xc]
    // mul r0, r1
    // add r7, r7, r0
    // mov r0, #0
    // beq _0223DC94
    // add r0, r4, #0
    // add r1, r6, #0
    // bl ov40_022306C0
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0223DCEC ; =0x000F0D00
    // mov r1, #0
    // str r0, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // add r0, r4, #0
    // add r2, r6, #0
    // add r3, r1, #0
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r4, #0
    // bl ScheduleWindowCopyToVram
    // add r0, r6, #0
    // bl String_Delete
    // ldr r0, [sp, #0x18]
    // ldr r1, [sp, #0x20]
    // add r0, r0, #4
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x1c]
    // add r4, #0x10
    // add r0, r0, #1
    // str r0, [sp, #0x1c]
    // ldr r0, _0223DCE4 ; =0x00000794
    // add r5, #0x10
    // ldr r1, [r1, r0]
    // ldr r0, [sp, #0x1c]
    // cmp r0, r1
    // blt _0223DC30
    // add sp, #0x9c
    // pop {r4, r5, r6, r7, pc}
    // _0223DCDC: .word ov40_022458E8
    // _0223DCE0: .word ov40_022456F0
    // _0223DCE4: .word 0x00000794
    // _0223DCE8: .word 0x00000614
    // _0223DCEC: .word 0x000F0D00
    // TODO: decompile
}




void ov40_0223DCF0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // mov r0, #0x86
    // lsl r0, r0, #4
    // ldr r6, [r5, r0]
    // ldr r7, _0223DD60 ; =0x00000644
    // add r4, r1, #0
    // add r0, r6, r7
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // cmp r4, #0xff
    // bne _0223DD18
    // ldr r0, [r5, #0x48]
    // mov r1, #0x7d
    // bl NewString_ReadMsgData
    // add r4, r0, #0
    // b _0223DD38
    // add r0, r4, #0
    // sub r0, #0xfa
    // cmp r0, #3
    // ldr r0, [r5, #0x48]
    // bhi _0223DD2E
    // sub r4, #0x55
    // add r1, r4, #0
    // bl NewString_ReadMsgData
    // add r4, r0, #0
    // b _0223DD38
    // add r4, #0x84
    // add r1, r4, #0
    // bl NewString_ReadMsgData
    // add r4, r0, #0
    // mov r1, #0
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0223DD64 ; =0x000F0D00
    // add r2, r4, #0
    // str r0, [sp, #8]
    // add r0, r6, r7
    // add r3, r1, #0
    // str r1, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r6, r7
    // bl ScheduleWindowCopyToVram
    // add r0, r4, #0
    // bl String_Delete
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // _0223DD60: .word 0x00000644
    // _0223DD64: .word 0x000F0D00
    // TODO: decompile
}




void ov40_0223DD68(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x1fc
    // sub sp, #0x14
    // add r5, r0, #0
    // mov r0, #0x86
    // lsl r0, r0, #4
    // ldr r4, [r5, r0]
    // ldr r7, _0223DDDC ; =0x00000654
    // add r6, r1, #0
    // add r0, r4, r7
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // ldr r0, _0223DDE0 ; =0x0000FFFF
    // cmp r6, r0
    // bne _0223DD94
    // ldr r0, [r5, #0x48]
    // mov r1, #0x7d
    // bl NewString_ReadMsgData
    // add r5, r0, #0
    // b _0223DDB0
    // mov r0, #0xff
    // mov r1, #0x6d
    // bl String_New
    // add r5, r0, #0
    // add r0, r6, #0
    // mov r1, #0x6d
    // add r2, sp, #0x10
    // bl GetSpeciesNameIntoArray
    // add r0, r5, #0
    // add r1, sp, #0x10
    // bl CopyU16ArrayToString
    // mov r1, #0
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0223DDE4 ; =0x000F0D00
    // add r2, r5, #0
    // str r0, [sp, #8]
    // add r0, r4, r7
    // add r3, r1, #0
    // str r1, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r4, r7
    // bl ScheduleWindowCopyToVram
    // add r0, r5, #0
    // bl String_Delete
    // add sp, #0x1fc
    // add sp, #0x14
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0223DDDC: .word 0x00000654
    // _0223DDE0: .word 0x0000FFFF
    // _0223DDE4: .word 0x000F0D00
    // TODO: decompile
}




void ov40_0223DDE8(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x18
    // add r5, r0, #0
    // mov r0, #0x86
    // lsl r0, r0, #4
    // ldr r7, [r5, r0]
    // ldr r0, _0223DEB0 ; =0x00000664
    // str r1, [sp, #0x10]
    // add r0, r7, r0
    // mov r1, #0
    // add r4, r2, #0
    // bl FillWindowPixelBuffer
    // ldr r0, [sp, #0x10]
    // cmp r0, #0xff
    // bne _0223DE18
    // cmp r4, #0xff
    // bne _0223DE18
    // ldr r0, [r5, #0x48]
    // mov r1, #0x7d
    // bl NewString_ReadMsgData
    // str r0, [sp, #0x14]
    // b _0223DE84
    // mov r0, #0x6d
    // bl ov40_0222DAB0
    // add r6, r0, #0
    // cmp r4, #0
    // beq _0223DE50
    // mov r0, #0xff
    // mov r1, #0x6d
    // bl String_New
    // str r0, [sp, #0x14]
    // ldr r0, [r5, #0x48]
    // mov r1, #0x17
    // bl NewString_ReadMsgData
    // add r5, r0, #0
    // ldr r2, [sp, #0x10]
    // add r0, r6, #0
    // mov r1, #0
    // add r3, r4, #0
    // bl BufferCityName
    // ldr r1, [sp, #0x14]
    // add r0, r6, #0
    // add r2, r5, #0
    // bl StringExpandPlaceholders
    // b _0223DE78
    // mov r0, #0xff
    // mov r1, #0x6d
    // bl String_New
    // str r0, [sp, #0x14]
    // ldr r0, [r5, #0x48]
    // mov r1, #0x16
    // bl NewString_ReadMsgData
    // add r5, r0, #0
    // ldr r2, [sp, #0x10]
    // add r0, r6, #0
    // mov r1, #0
    // bl BufferCountryName
    // ldr r1, [sp, #0x14]
    // add r0, r6, #0
    // add r2, r5, #0
    // bl StringExpandPlaceholders
    // add r0, r5, #0
    // bl String_Delete
    // add r0, r6, #0
    // bl MessageFormat_Delete
    // mov r1, #0
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0223DEB4 ; =0x000F0D00
    // ldr r2, [sp, #0x14]
    // str r0, [sp, #8]
    // ldr r0, _0223DEB0 ; =0x00000664
    // add r3, r1, #0
    // add r0, r7, r0
    // str r1, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // ldr r0, _0223DEB0 ; =0x00000664
    // add r0, r7, r0
    // bl ScheduleWindowCopyToVram
    // ldr r0, [sp, #0x14]
    // bl String_Delete
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // _0223DEB0: .word 0x00000664
    // _0223DEB4: .word 0x000F0D00
    // TODO: decompile
}




void ov40_0223DEB8(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x10
    // mov r1, #0x86
    // lsl r1, r1, #4
    // ldr r5, [r0, r1]
    // ldr r1, _0223DF0C ; =0x000004C3
    // ldr r6, _0223DF10 ; =0x000006F4
    // ldrb r1, [r5, r1]
    // cmp r1, #0xff
    // bne _0223DED0
    // mov r1, #0x32
    // b _0223DED2
    // ldr r1, _0223DF14 ; =0x0000014D
    // ldr r0, [r0, #0x48]
    // bl NewString_ReadMsgData
    // add r4, r0, #0
    // add r0, r5, r6
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // mov r1, #0
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0223DF18 ; =0x000F0D00
    // add r2, r4, #0
    // str r0, [sp, #8]
    // add r0, r5, r6
    // add r3, r1, #0
    // str r1, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r5, r6
    // bl ScheduleWindowCopyToVram
    // add r0, r4, #0
    // bl String_Delete
    // add sp, #0x10
    // pop {r4, r5, r6, pc}
    // nop
    // _0223DF0C: .word 0x000004C3
    // _0223DF10: .word 0x000006F4
    // _0223DF14: .word 0x0000014D
    // _0223DF18: .word 0x000F0D00
    // TODO: decompile
}




void ov40_0223DF1C(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x5c
    // add r2, r1, #0
    // mov r1, #0x86
    // lsl r1, r1, #4
    // str r0, [sp, #0x14]
    // ldr r0, [r0, r1]
    // ldr r5, _0223E010 ; =ov40_02245868
    // str r0, [sp, #0x1c]
    // add r4, sp, #0x2c
    // mov r3, #6
    // ldmia r5!, {r0, r1}
    // stmia r4!, {r0, r1}
    // sub r3, r3, #1
    // bne _0223DF32
    // ldr r4, _0223E014 ; =ov40_0224565C
    // add r3, sp, #0x20
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r4]
    // cmp r2, #0
    // str r0, [r3]
    // beq _0223DF4E
    // bl GF_AssertFail
    // ldr r1, _0223E018 ; =0x00000798
    // ldr r0, [sp, #0x1c]
    // mov r6, #3
    // str r6, [r0, r1]
    // mov r0, #0
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x1c]
    // sub r1, #0xc4
    // add r7, sp, #0x20
    // add r6, #0xfd
    // add r4, r0, r1
    // add r5, sp, #0x2c
    // add r0, r4, #0
    // bl InitWindow
    // ldr r0, [r5, #4]
    // add r1, r4, #0
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp]
    // ldr r0, [r5, #8]
    // mov r2, #6
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #4]
    // ldr r0, [r5, #0xc]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #8]
    // mov r0, #0xe
    // str r0, [sp, #0xc]
    // lsl r0, r6, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x14]
    // ldr r3, [r5]
    // ldr r0, [r0, #0x24]
    // lsl r3, r3, #0x18
    // lsr r3, r3, #0x18
    // bl AddWindowParameterized
    // add r0, r4, #0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // ldr r1, [r5, #8]
    // ldr r0, [r5, #0xc]
    // add r4, #0x10
    // mul r0, r1
    // add r6, r6, r0
    // ldr r0, [sp, #0x18]
    // add r5, #0x10
    // add r0, r0, #1
    // str r0, [sp, #0x18]
    // cmp r0, #3
    // blt _0223DF66
    // ldr r1, _0223E01C ; =0x000006D4
    // ldr r0, [sp, #0x1c]
    // mov r6, #0
    // add r5, r0, r1
    // ldr r0, [sp, #0x14]
    // ldr r1, [r7]
    // ldr r0, [r0, #0x48]
    // bl NewString_ReadMsgData
    // add r4, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0223E020 ; =0x000F0D00
    // mov r1, #0
    // str r0, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // add r0, r5, #0
    // add r2, r4, #0
    // add r3, r1, #0
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r5, #0
    // bl ScheduleWindowCopyToVram
    // add r0, r4, #0
    // bl String_Delete
    // add r6, r6, #1
    // add r5, #0x10
    // add r7, r7, #4
    // cmp r6, #2
    // blt _0223DFC6
    // ldr r0, [sp, #0x14]
    // bl ov40_0223DEB8
    // add sp, #0x5c
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _0223E010: .word ov40_02245868
    // _0223E014: .word ov40_0224565C
    // _0223E018: .word 0x00000798
    // _0223E01C: .word 0x000006D4
    // _0223E020: .word 0x000F0D00
    // TODO: decompile
}




void ov40_0223E024(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // mov r1, #0x86
    // lsl r1, r1, #4
    // ldr r6, [r0, r1]
    // sub r1, #0xcc
    // ldr r0, [r6, r1]
    // mov r4, #0
    // cmp r0, #0
    // ble _0223E052
    // ldr r0, _0223E05C ; =0x00000614
    // ldr r7, _0223E060 ; =0x00000794
    // add r5, r6, r0
    // add r0, r5, #0
    // bl ClearWindowTilemapAndCopyToVram
    // add r0, r5, #0
    // bl RemoveWindow
    // ldr r0, [r6, r7]
    // add r4, r4, #1
    // add r5, #0x10
    // cmp r4, r0
    // blt _0223E03C
    // ldr r0, _0223E060 ; =0x00000794
    // mov r1, #0
    // str r1, [r6, r0]
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0223E05C: .word 0x00000614
    // _0223E060: .word 0x00000794
    // TODO: decompile
}




void ov40_0223E064(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // mov r1, #0x86
    // lsl r1, r1, #4
    // ldr r6, [r0, r1]
    // sub r1, #0xc8
    // ldr r0, [r6, r1]
    // mov r4, #0
    // cmp r0, #0
    // ble _0223E094
    // ldr r0, _0223E09C ; =0x000006D4
    // add r7, r0, #0
    // add r5, r6, r0
    // add r7, #0xc4
    // add r0, r5, #0
    // bl ClearWindowTilemapAndCopyToVram
    // add r0, r5, #0
    // bl RemoveWindow
    // ldr r0, [r6, r7]
    // add r4, r4, #1
    // add r5, #0x10
    // cmp r4, r0
    // blt _0223E07E
    // ldr r0, _0223E0A0 ; =0x00000798
    // mov r1, #0
    // str r1, [r6, r0]
    // pop {r3, r4, r5, r6, r7, pc}
    // _0223E09C: .word 0x000006D4
    // _0223E0A0: .word 0x00000798
    // TODO: decompile
}




void ov40_0223E0A4(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // add r5, r0, #0
    // mov r0, #0x86
    // lsl r0, r0, #4
    // ldr r4, [r5, r0]
    // ldr r6, _0223E184 ; =0x00000614
    // add r0, r4, r6
    // bl InitWindow
    // mov r3, #3
    // str r3, [sp]
    // mov r0, #0x14
    // str r0, [sp, #4]
    // mov r0, #4
    // str r0, [sp, #8]
    // mov r0, #0xe
    // str r0, [sp, #0xc]
    // mov r0, #0x20
    // str r0, [sp, #0x10]
    // ldr r0, [r5, #0x24]
    // add r1, r4, r6
    // mov r2, #2
    // bl AddWindowParameterized
    // add r0, r4, r6
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // ldr r0, [r5, #0x48]
    // mov r1, #0x7e
    // bl NewString_ReadMsgData
    // mov r1, #0
    // add r7, r0, #0
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0223E188 ; =0x000F0D00
    // add r2, r7, #0
    // str r0, [sp, #8]
    // add r0, r4, r6
    // add r3, r1, #0
    // str r1, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r4, r6
    // bl ScheduleWindowCopyToVram
    // add r0, r7, #0
    // bl String_Delete
    // add r6, #0xc0
    // add r0, r4, r6
    // bl InitWindow
    // mov r2, #6
    // str r2, [sp]
    // mov r0, #0xa
    // str r0, [sp, #4]
    // mov r0, #4
    // str r0, [sp, #8]
    // mov r0, #0xe
    // str r0, [sp, #0xc]
    // add r0, #0xf2
    // str r0, [sp, #0x10]
    // ldr r0, [r5, #0x24]
    // add r1, r4, r6
    // mov r3, #0xb
    // bl AddWindowParameterized
    // add r0, r4, r6
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // ldr r0, [r5, #0x48]
    // mov r1, #0x5f
    // bl NewString_ReadMsgData
    // add r5, r0, #0
    // mov r0, #0
    // add r1, r5, #0
    // add r2, r0, #0
    // bl FontID_String_GetWidthMultiline
    // mov r1, #0x50
    // sub r0, r1, r0
    // mov r1, #0
    // lsr r3, r0, #1
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0223E188 ; =0x000F0D00
    // add r2, r5, #0
    // str r0, [sp, #8]
    // add r0, r4, r6
    // str r1, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r4, r6
    // bl ScheduleWindowCopyToVram
    // add r0, r5, #0
    // bl String_Delete
    // ldr r0, _0223E18C ; =0x00000798
    // mov r1, #1
    // str r1, [r4, r0]
    // sub r0, r0, #4
    // str r1, [r4, r0]
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // _0223E184: .word 0x00000614
    // _0223E188: .word 0x000F0D00
    // _0223E18C: .word 0x00000798
    // TODO: decompile
}




void ov40_0223E190(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x10
    // mov r1, #0x86
    // add r5, r0, #0
    // lsl r1, r1, #4
    // ldr r4, [r5, r1]
    // ldr r1, [r5, #8]
    // cmp r1, #0
    // beq _0223E1A8
    // cmp r1, #1
    // beq _0223E252
    // b _0223E2EE
    // bl ov40_02230738
    // add r0, r4, #0
    // add r1, r4, #4
    // mov r2, #0
    // bl ov40_0222D9E8
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x6d
    // str r0, [sp, #0xc]
    // ldr r0, [r5, #0x14]
    // ldr r2, [r5, #0x24]
    // mov r1, #0x3e
    // mov r3, #3
    // bl GfGfxLoader_LoadCharDataFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x6d
    // str r0, [sp, #0xc]
    // ldr r0, [r5, #0x14]
    // ldr r2, [r5, #0x24]
    // mov r1, #0x3e
    // mov r3, #7
    // bl GfGfxLoader_LoadCharDataFromOpenNarc
    // add r0, r5, #0
    // mov r1, #0x38
    // mov r2, #3
    // bl ov40_022307DC
    // add r0, r5, #0
    // mov r1, #0x3b
    // mov r2, #7
    // bl ov40_022307DC
    // mov r0, #8
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #8
    // mov r1, #1
    // bl GfGfx_EngineBTogglePlanes
    // add r0, r5, #0
    // bl ov40_02242110
    // add r0, r5, #0
    // mov r1, #0
    // bl ov40_022420B4
    // mov r1, #0x7d
    // ldr r0, _0223E2FC ; =0x00000514
    // lsl r1, r1, #2
    // str r1, [r4, r0]
    // mov r0, #0x6d
    // str r0, [sp]
    // ldr r0, _0223E300 ; =ov40_022456C4
    // ldr r2, _0223E304 ; =ov40_02241D10
    // mov r1, #5
    // add r3, r5, #0
    // bl TouchHitboxController_Create
    // ldr r1, _0223E308 ; =0x00000608
    // ldr r2, _0223E30C ; =ov40_02241E14
    // str r0, [r4, r1]
    // mov r0, #0x6d
    // str r0, [sp]
    // ldr r0, _0223E310 ; =ov40_02245708
    // mov r1, #9
    // add r3, r5, #0
    // bl TouchHitboxController_Create
    // ldr r1, _0223E314 ; =0x0000060C
    // add r5, #8
    // str r0, [r4, r1]
    // ldr r0, [r5]
    // add r0, r0, #1
    // str r0, [r5]
    // b _0223E2F4
    // add r0, r4, #0
    // add r0, #8
    // mov r1, #0
    // bl ov40_0222DA84
    // mov r2, #0
    // add r0, r4, #0
    // add r1, r4, #4
    // add r3, r2, #0
    // bl ov40_0222DA00
    // cmp r0, #0
    // beq _0223E2D4
    // add r0, r5, #0
    // mov r1, #0x7c
    // bl ov40_0222DED0
    // mov r0, #0x13
    // ldr r1, _0223E318 ; =0x0000FFFF
    // lsl r0, r0, #6
    // strh r1, [r4, r0]
    // mov r2, #0xff
    // add r1, r0, #2
    // strb r2, [r4, r1]
    // add r1, r0, #3
    // strb r2, [r4, r1]
    // add r0, r0, #4
    // strb r2, [r4, r0]
    // add r0, r5, #0
    // mov r1, #0
    // bl ov40_0223DBD4
    // add r0, r5, #0
    // mov r1, #0
    // bl ov40_0223DF1C
    // mov r1, #0x13
    // lsl r1, r1, #6
    // ldrh r1, [r4, r1]
    // add r0, r5, #0
    // bl ov40_0223DD68
    // ldr r1, _0223E31C ; =0x000004C2
    // add r0, r5, #0
    // ldrb r1, [r4, r1]
    // bl ov40_0223DCF0
    // ldr r2, _0223E320 ; =0x000004C3
    // add r0, r5, #0
    // ldrb r1, [r4, r2]
    // add r2, r2, #1
    // ldrb r2, [r4, r2]
    // bl ov40_0223DDE8
    // mov r0, #4
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #4
    // mov r1, #1
    // bl GfGfx_EngineBTogglePlanes
    // ldr r0, [r5, #8]
    // add r0, r0, #1
    // str r0, [r5, #8]
    // ldr r0, [r5, #0x58]
    // mov r1, #3
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r4, #8]
    // ldr r0, [r5, #0x28]
    // lsl r3, r3, #0x18
    // mov r2, #0xc
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // b _0223E2F4
    // mov r1, #3
    // bl ov40_0222BF80
    // mov r0, #0
    // add sp, #0x10
    // pop {r3, r4, r5, pc}
    // nop
    // _0223E2FC: .word 0x00000514
    // _0223E300: .word ov40_022456C4
    // _0223E304: .word ov40_02241D10
    // _0223E308: .word 0x00000608
    // _0223E30C: .word ov40_02241E14
    // _0223E310: .word ov40_02245708
    // _0223E314: .word 0x0000060C
    // _0223E318: .word 0x0000FFFF
    // _0223E31C: .word 0x000004C2
    // _0223E320: .word 0x000004C3
    // TODO: decompile
}




void ov40_0223E324(void) {
}




void ov40_0223E33C(void) {
    // push {r3, r4, r5, lr}
    // mov r1, #0x86
    // add r5, r0, #0
    // lsl r1, r1, #4
    // ldr r4, [r5, r1]
    // ldr r1, [r5, #8]
    // cmp r1, #0
    // beq _0223E356
    // cmp r1, #1
    // beq _0223E37E
    // cmp r1, #2
    // beq _0223E3B8
    // b _0223E3E2
    // bl ov40_0223E024
    // add r0, r5, #0
    // bl ov40_0223E064
    // add r0, r5, #0
    // bl ov40_0222DFB0
    // ldr r0, _0223E48C ; =0x00000608
    // ldr r0, [r4, r0]
    // bl TouchHitboxController_Destroy
    // ldr r0, _0223E490 ; =0x0000060C
    // ldr r0, [r4, r0]
    // bl TouchHitboxController_Destroy
    // ldr r0, [r5, #8]
    // add r0, r0, #1
    // str r0, [r5, #8]
    // b _0223E486
    // add r0, r4, #0
    // add r0, #8
    // mov r1, #1
    // bl ov40_0222DA84
    // add r0, r4, #0
    // add r1, r4, #4
    // mov r2, #1
    // mov r3, #0
    // bl ov40_0222DA00
    // cmp r0, #0
    // beq _0223E39E
    // ldr r0, [r5, #8]
    // add r0, r0, #1
    // str r0, [r5, #8]
    // ldr r0, [r5, #0x58]
    // mov r1, #3
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r4, #8]
    // ldr r0, [r5, #0x28]
    // lsl r3, r3, #0x18
    // mov r2, #0xc
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // b _0223E486
    // mov r1, #1
    // bl ov40_02230964
    // add r0, r5, #0
    // bl ov40_022421FC
    // add r0, r5, #0
    // bl ov40_0222D88C
    // add r0, r5, #0
    // mov r1, #0
    // bl ov40_02230964
    // add r0, r5, #0
    // mov r1, #1
    // bl ov40_0222FB90
    // ldr r0, [r5, #8]
    // add r0, r0, #1
    // str r0, [r5, #8]
    // b _0223E486
    // bl ov40_0222FBB4
    // cmp r0, #0
    // beq _0223E486
    // add r0, r4, #0
    // add r0, #8
    // mov r1, #0
    // bl ov40_0222DA84
    // cmp r0, #0
    // beq _0223E456
    // add r0, r5, #0
    // bl ov40_0222DD08
    // add r0, r4, #0
    // add r0, #8
    // bl ov40_0222DAA8
    // ldr r0, [r5, #0x58]
    // mov r1, #2
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r0, [r5, #0x28]
    // mov r2, #0xc
    // mov r3, #0x10
    // bl PaletteData_BlendPalettes
    // mov r1, #1
    // ldr r3, [r5, #0x10]
    // add r0, r5, #0
    // add r2, r1, #0
    // bl ov40_0222BF64
    // add r0, r5, #0
    // mov r1, #5
    // bl ov40_0222BF80
    // ldr r0, [r5, #0x24]
    // mov r1, #2
    // bl BgClearTilemapBufferAndCommit
    // ldr r0, [r5, #0x24]
    // mov r1, #6
    // bl BgClearTilemapBufferAndCommit
    // ldr r0, [r5, #0x24]
    // mov r1, #3
    // bl BgClearTilemapBufferAndCommit
    // ldr r0, [r5, #0x24]
    // mov r1, #7
    // bl BgClearTilemapBufferAndCommit
    // add r0, r4, #0
    // bl Heap_Free
    // b _0223E486
    // ldr r0, [r5, #0x58]
    // mov r1, #1
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r4, #8]
    // ldr r0, [r5, #0x28]
    // lsl r3, r3, #0x18
    // mov r2, #2
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // ldr r0, [r5, #0x58]
    // mov r1, #3
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r4, #8]
    // ldr r0, [r5, #0x28]
    // lsl r3, r3, #0x18
    // mov r2, #0xc
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // nop
    // _0223E48C: .word 0x00000608
    // _0223E490: .word 0x0000060C
    // TODO: decompile
}




void ov40_0223E494(void) {
    // push {r3, r4, r5, lr}
    // mov r1, #0x86
    // add r5, r0, #0
    // lsl r1, r1, #4
    // ldr r4, [r5, r1]
    // ldr r1, [r5, #8]
    // cmp r1, #0
    // beq _0223E4AA
    // cmp r1, #1
    // beq _0223E4B4
    // b _0223E4EE
    // bl ov40_0223E064
    // ldr r0, [r5, #8]
    // add r0, r0, #1
    // str r0, [r5, #8]
    // add r0, r4, #0
    // add r0, #8
    // mov r1, #1
    // bl ov40_0222DA84
    // add r0, r4, #0
    // add r1, r4, #4
    // mov r2, #1
    // mov r3, #2
    // bl ov40_0222DA00
    // cmp r0, #0
    // beq _0223E4D4
    // ldr r0, [r5, #8]
    // add r0, r0, #1
    // str r0, [r5, #8]
    // ldr r0, [r5, #0x58]
    // mov r1, #3
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r4, #8]
    // ldr r0, [r5, #0x28]
    // lsl r3, r3, #0x18
    // mov r2, #0xc
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // b _0223E516
    // ldr r1, _0223E51C ; =0x000004C5
    // ldrb r1, [r4, r1]
    // cmp r1, #0
    // beq _0223E500
    // cmp r1, #1
    // beq _0223E508
    // cmp r1, #2
    // beq _0223E510
    // b _0223E516
    // mov r1, #6
    // bl ov40_0222BF80
    // b _0223E516
    // mov r1, #7
    // bl ov40_0222BF80
    // b _0223E516
    // mov r1, #0xa
    // bl ov40_0222BF80
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // nop
    // _0223E51C: .word 0x000004C5
    // TODO: decompile
}




void ov40_0223E520(void) {
    // push {r3, r4, r5, lr}
    // mov r1, #0x86
    // add r4, r0, #0
    // lsl r1, r1, #4
    // ldr r5, [r4, r1]
    // ldr r1, [r4, #8]
    // cmp r1, #4
    // bls _0223E532
    // b _0223E6C8
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _0223E53E: ; jump table
    // mov r1, #0x71
    // bl ov40_0222DF60
    // ldr r1, _0223E6D4 ; =0x000004C2
    // mov r0, #0xff
    // strb r0, [r5, r1]
    // ldrb r1, [r5, r1]
    // add r0, r4, #0
    // bl ov40_0223DCF0
    // add r0, r4, #0
    // mov r1, #1
    // bl ov40_022420B4
    // add r0, r4, #0
    // mov r1, #0x3d
    // mov r2, #7
    // bl ov40_022307DC
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _0223E6D0
    // add r0, r5, #0
    // add r0, #8
    // mov r1, #0
    // bl ov40_0222DA84
    // add r0, r5, #0
    // add r1, r5, #4
    // mov r2, #0
    // mov r3, #2
    // bl ov40_0222DA00
    // cmp r0, #0
    // beq _0223E5F2
    // add r0, r4, #0
    // mov r1, #1
    // bl ov40_02230964
    // ldr r0, _0223E6D8 ; =0x0000047C
    // add r1, r4, #0
    // add r0, r4, r0
    // bl ov40_0222F9D4
    // ldr r0, _0223E6DC ; =0x0000049C
    // add r0, r4, r0
    // bl ov40_0222F734
    // add r0, r4, #0
    // bl sub_02087E1C
    // cmp r0, #1
    // ldr r0, _0223E6DC ; =0x0000049C
    // bne _0223E5C2
    // ldr r2, _0223E6E0 ; =ov40_02245784
    // add r0, r4, r0
    // add r1, r4, #0
    // bl ov40_0222E8C4
    // b _0223E5CC
    // ldr r2, _0223E6E4 ; =ov40_02245758
    // add r0, r4, r0
    // add r1, r4, #0
    // bl ov40_0222E8C4
    // ldr r1, _0223E6D8 ; =0x0000047C
    // add r0, r4, r1
    // add r1, #0x20
    // add r1, r4, r1
    // bl ov40_0222FA5C
    // ldr r0, _0223E6DC ; =0x0000049C
    // add r1, r4, #0
    // add r0, r4, r0
    // mov r2, #2
    // bl ov40_0222F740
    // add r0, r4, #0
    // mov r1, #0
    // bl ov40_02230964
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // ldr r0, [r4, #0x58]
    // mov r1, #3
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r5, #8]
    // ldr r0, [r4, #0x28]
    // lsl r3, r3, #0x18
    // mov r2, #0xc
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // b _0223E6D0
    // ldr r0, _0223E6D8 ; =0x0000047C
    // add r0, r4, r0
    // bl ov40_0222FA88
    // ldr r1, _0223E6DC ; =0x0000049C
    // add r0, r4, r1
    // sub r1, #0x10
    // ldrsh r1, [r4, r1]
    // bl ov40_0222F6D0
    // ldr r0, _0223E6DC ; =0x0000049C
    // add r1, r4, #0
    // add r0, r4, r0
    // bl ov40_0222F38C
    // add r1, r0, #0
    // beq _0223E63E
    // ldr r0, _0223E6D4 ; =0x000004C2
    // strb r1, [r5, r0]
    // add r0, r4, #0
    // bl ov40_0223DCF0
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // ldr r0, _0223E6E8 ; =ov40_02245650
    // bl TouchscreenHitbox_TouchNewIsIn
    // cmp r0, #0
    // beq _0223E6D0
    // add r0, r4, #0
    // bl ov40_02230944
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _0223E6D0
    // ldr r0, _0223E6D8 ; =0x0000047C
    // add r0, r4, r0
    // bl ov40_0222FA24
    // ldr r0, _0223E6DC ; =0x0000049C
    // add r0, r4, r0
    // bl ov40_0222F720
    // ldr r0, _0223E6DC ; =0x0000049C
    // add r1, r4, #0
    // add r0, r4, r0
    // bl ov40_0222F920
    // ldr r0, _0223E6D8 ; =0x0000047C
    // add r0, r4, r0
    // bl ov40_0222FA18
    // ldr r0, _0223E6DC ; =0x0000049C
    // add r0, r4, r0
    // bl ov40_0222F734
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // add r0, r5, #0
    // add r0, #8
    // mov r1, #1
    // bl ov40_0222DA84
    // add r0, r5, #0
    // add r1, r5, #4
    // mov r2, #1
    // mov r3, #2
    // bl ov40_0222DA00
    // cmp r0, #0
    // beq _0223E6AE
    // add r0, r4, #0
    // mov r1, #0
    // bl ov40_022420B4
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // ldr r0, [r4, #0x58]
    // mov r1, #3
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r5, #8]
    // ldr r0, [r4, #0x28]
    // lsl r3, r3, #0x18
    // mov r2, #0xc
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // b _0223E6D0
    // add r0, r4, #0
    // mov r1, #0xb
    // bl ov40_0222BF80
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // _0223E6D4: .word 0x000004C2
    // _0223E6D8: .word 0x0000047C
    // _0223E6DC: .word 0x0000049C
    // _0223E6E0: .word ov40_02245784
    // _0223E6E4: .word ov40_02245758
    // _0223E6E8: .word ov40_02245650
    // TODO: decompile
}




void ov40_0223E6EC(void) {
    // push {r3, r4, r5, lr}
    // mov r1, #0x86
    // add r5, r0, #0
    // lsl r1, r1, #4
    // ldr r4, [r5, r1]
    // ldr r1, [r5, #8]
    // cmp r1, #0
    // bne _0223E720
    // mov r1, #0x72
    // bl ov40_0222DF60
    // mov r1, #0x13
    // ldr r0, _0223E72C ; =0x0000FFFF
    // lsl r1, r1, #6
    // strh r0, [r4, r1]
    // ldrh r1, [r4, r1]
    // add r0, r5, #0
    // bl ov40_0223DD68
    // add r0, r5, #0
    // mov r1, #1
    // bl ov40_022420B4
    // ldr r0, [r5, #8]
    // add r0, r0, #1
    // str r0, [r5, #8]
    // add r0, r5, #0
    // mov r1, #8
    // bl ov40_0222BF80
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // _0223E72C: .word 0x0000FFFF
    // TODO: decompile
}




void ov40_0223E730(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x34
    // str r0, [sp, #0x14]
    // mov r0, #1
    // str r0, [sp, #0x28]
    // mov r1, #0x86
    // ldr r0, [sp, #0x14]
    // lsl r1, r1, #4
    // ldr r1, [r0, r1]
    // ldr r0, _0223E838 ; =0x000006D4
    // ldr r5, _0223E83C ; =ov40_02245708
    // mov r7, #0
    // add r4, r1, r0
    // ldrb r0, [r5, #2]
    // lsl r0, r0, #0x15
    // lsr r0, r0, #0x18
    // str r0, [sp, #0x24]
    // ldrb r0, [r5]
    // lsl r0, r0, #0x15
    // lsr r0, r0, #0x18
    // str r0, [sp, #0x20]
    // ldrb r0, [r5, #3]
    // lsr r1, r0, #3
    // ldr r0, [sp, #0x24]
    // sub r0, r1, r0
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #0x1c]
    // ldrb r0, [r5, #1]
    // lsr r1, r0, #3
    // ldr r0, [sp, #0x20]
    // sub r0, r1, r0
    // lsl r0, r0, #0x18
    // lsr r6, r0, #0x18
    // add r0, r4, #0
    // bl InitWindow
    // ldr r0, [sp, #0x20]
    // add r1, r4, #0
    // str r0, [sp]
    // ldr r0, [sp, #0x1c]
    // mov r2, #6
    // str r0, [sp, #4]
    // str r6, [sp, #8]
    // mov r0, #0xe
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x28]
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x14]
    // ldr r3, [sp, #0x24]
    // ldr r0, [r0, #0x24]
    // bl AddWindowParameterized
    // add r0, r4, #0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // ldr r0, [sp, #0x14]
    // add r1, r7, #0
    // ldr r0, [r0, #0x48]
    // add r1, #0x44
    // bl NewString_ReadMsgData
    // str r0, [sp, #0x2c]
    // ldr r1, [sp, #0x2c]
    // add r0, r4, #0
    // bl ov40_022306C0
    // lsl r1, r6, #3
    // sub r1, #0x10
    // str r0, [sp, #0x30]
    // lsr r0, r1, #0x1f
    // add r0, r1, r0
    // asr r0, r0, #1
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x14]
    // add r1, r7, #0
    // bl ov40_0223EBB8
    // cmp r0, #1
    // bne _0223E7F4
    // ldr r0, [sp, #0x18]
    // ldr r2, [sp, #0x2c]
    // str r0, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0223E840 ; =0x000F0D00
    // ldr r3, [sp, #0x30]
    // str r0, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // add r0, r4, #0
    // mov r1, #0
    // bl AddTextPrinterParameterizedWithColor
    // b _0223E810
    // ldr r0, [sp, #0x18]
    // ldr r2, [sp, #0x2c]
    // str r0, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0223E844 ; =0x000C0B00
    // ldr r3, [sp, #0x30]
    // str r0, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // add r0, r4, #0
    // mov r1, #0
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r4, #0
    // bl ScheduleWindowCopyToVram
    // ldr r0, [sp, #0x2c]
    // bl String_Delete
    // ldr r0, [sp, #0x1c]
    // add r7, r7, #1
    // add r1, r0, #0
    // ldr r0, [sp, #0x28]
    // mul r1, r6
    // add r0, r0, r1
    // str r0, [sp, #0x28]
    // add r4, #0x10
    // add r5, r5, #4
    // cmp r7, #9
    // blo _0223E74A
    // add sp, #0x34
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _0223E838: .word 0x000006D4
    // _0223E83C: .word ov40_02245708
    // _0223E840: .word 0x000F0D00
    // _0223E844: .word 0x000C0B00
    // TODO: decompile
}




void ov40_0223E848(void) {
    // push {r3, r4, r5, lr}
    // mov r1, #0x86
    // lsl r1, r1, #4
    // ldr r1, [r0, r1]
    // ldr r0, _0223E86C ; =0x000006D4
    // mov r4, #0
    // add r5, r1, r0
    // add r0, r5, #0
    // bl ClearWindowTilemapAndCopyToVram
    // add r0, r5, #0
    // bl RemoveWindow
    // add r4, r4, #1
    // add r5, #0x10
    // cmp r4, #9
    // blo _0223E856
    // pop {r3, r4, r5, pc}
    // _0223E86C: .word 0x000006D4
    // TODO: decompile
}




void ov40_0223E870(void) {
    // push {r3, r4, r5, lr}
    // mov r1, #0x86
    // add r4, r0, #0
    // lsl r1, r1, #4
    // ldr r5, [r4, r1]
    // ldr r1, [r4, #8]
    // cmp r1, #4
    // bhi _0223E97A
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _0223E88C: ; jump table
    // mov r1, #0x3c
    // mov r2, #7
    // bl ov40_022307DC
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _0223E994
    // add r0, r5, #0
    // add r0, #8
    // mov r1, #0
    // bl ov40_0222DA84
    // add r0, r5, #0
    // add r1, r5, #4
    // mov r2, #0
    // mov r3, #2
    // bl ov40_0222DA00
    // cmp r0, #0
    // beq _0223E8CC
    // add r0, r4, #0
    // bl ov40_0223E730
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // ldr r0, [r4, #0x58]
    // mov r1, #3
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r5, #8]
    // ldr r0, [r4, #0x28]
    // lsl r3, r3, #0x18
    // mov r2, #0xc
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // b _0223E994
    // ldr r0, _0223E998 ; =0x0000060C
    // ldr r0, [r5, r0]
    // bl TouchHitboxController_IsTriggered
    // ldr r0, _0223E99C ; =ov40_02245650
    // bl TouchscreenHitbox_TouchNewIsIn
    // cmp r0, #0
    // bne _0223E900
    // ldr r0, _0223E9A0 ; =0x000004D8
    // ldr r0, [r5, r0]
    // cmp r0, #1
    // bne _0223E994
    // add r0, r4, #0
    // bl ov40_02230944
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _0223E994
    // bl ov40_0223E848
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // ldr r0, _0223E9A0 ; =0x000004D8
    // ldr r0, [r5, r0]
    // cmp r0, #1
    // bne _0223E938
    // add r0, r5, #0
    // add r1, r5, #4
    // mov r2, #1
    // mov r3, #2
    // bl ov40_0222DA00
    // cmp r0, #0
    // beq _0223E994
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _0223E994
    // add r0, r5, #0
    // add r0, #8
    // mov r1, #1
    // bl ov40_0222DA84
    // add r0, r5, #0
    // add r1, r5, #4
    // mov r2, #1
    // mov r3, #2
    // bl ov40_0222DA00
    // cmp r0, #0
    // beq _0223E960
    // add r0, r4, #0
    // mov r1, #0
    // bl ov40_022420B4
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // ldr r0, [r4, #0x58]
    // mov r1, #3
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r5, #8]
    // ldr r0, [r4, #0x28]
    // lsl r3, r3, #0x18
    // mov r2, #0xc
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // b _0223E994
    // ldr r0, _0223E9A0 ; =0x000004D8
    // ldr r0, [r5, r0]
    // cmp r0, #1
    // bne _0223E98C
    // add r0, r4, #0
    // mov r1, #9
    // bl ov40_0222BF80
    // b _0223E994
    // add r0, r4, #0
    // mov r1, #0xb
    // bl ov40_0222BF80
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // _0223E998: .word 0x0000060C
    // _0223E99C: .word ov40_02245650
    // _0223E9A0: .word 0x000004D8
    // TODO: decompile
}




void ov40_0223E9A4(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #4
    // mov r1, #0x86
    // add r4, r0, #0
    // lsl r1, r1, #4
    // ldr r5, [r4, r1]
    // ldr r1, [r4, #8]
    // cmp r1, #4
    // bls _0223E9B8
    // b _0223EB72
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _0223E9C4: ; jump table
    // mov r1, #0x72
    // bl ov40_0222DF60
    // add r0, r4, #0
    // mov r1, #1
    // bl ov40_022420B4
    // add r0, r4, #0
    // mov r1, #0x3a
    // mov r2, #7
    // bl ov40_022307DC
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _0223EB96
    // add r0, r5, #0
    // add r1, r5, #4
    // mov r2, #0
    // mov r3, #2
    // bl ov40_0222DA00
    // cmp r0, #0
    // bne _0223EA00
    // b _0223EB96
    // add r0, r4, #0
    // mov r1, #1
    // bl ov40_02230964
    // ldr r0, _0223EB9C ; =0x0000047C
    // add r1, r4, #0
    // add r0, r4, r0
    // bl ov40_0222F9D4
    // mov r0, #0x4e
    // lsl r0, r0, #4
    // ldr r3, _0223EBA0 ; =ov40_022457DC
    // add r2, r5, r0
    // mov r6, #5
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // sub r6, r6, #1
    // bne _0223EA1C
    // ldr r0, [r3]
    // ldr r1, _0223EBA4 ; =0x000004DC
    // str r0, [r2]
    // ldr r2, [r5, r1]
    // add r0, r1, #4
    // str r2, [r5, r0]
    // add r0, r1, #0
    // sub r0, #0x14
    // ldr r2, [r5, r0]
    // add r0, r1, #0
    // add r0, #8
    // sub r1, #0x40
    // str r2, [r5, r0]
    // add r0, r4, r1
    // bl ov40_0222F734
    // ldr r3, _0223EBA8 ; =0x0000049C
    // add r1, r4, #0
    // add r2, r3, #0
    // add r2, #0x38
    // add r0, r4, r3
    // add r3, #0x44
    // ldr r2, [r5, r2]
    // add r3, r5, r3
    // bl ov40_0222E9B8
    // ldr r1, _0223EBAC ; =0x000004E4
    // mov r0, #0
    // str r0, [r4, r1]
    // add r0, r1, #0
    // sub r0, #0x68
    // sub r1, #0x48
    // add r0, r4, r0
    // add r1, r4, r1
    // bl ov40_0222FA5C
    // ldr r0, _0223EBA8 ; =0x0000049C
    // add r1, r4, #0
    // add r0, r4, r0
    // mov r2, #2
    // bl ov40_0222F740
    // add r0, r4, #0
    // mov r1, #0
    // bl ov40_02230964
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _0223EB96
    // ldr r0, _0223EB9C ; =0x0000047C
    // add r0, r4, r0
    // bl ov40_0222FA88
    // ldr r1, _0223EBA8 ; =0x0000049C
    // add r0, r4, r1
    // sub r1, #0x10
    // ldrsh r1, [r4, r1]
    // bl ov40_0222F6D0
    // ldr r0, _0223EBA8 ; =0x0000049C
    // add r1, r4, #0
    // add r0, r4, r0
    // bl ov40_0222F38C
    // add r1, r0, #0
    // beq _0223EABC
    // mov r0, #0x13
    // lsl r0, r0, #6
    // strh r1, [r5, r0]
    // add r0, r4, #0
    // bl ov40_0223DD68
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // ldr r0, _0223EBB0 ; =ov40_02245650
    // bl TouchscreenHitbox_TouchNewIsIn
    // cmp r0, #0
    // beq _0223EB96
    // mov r0, #0x13
    // ldr r1, _0223EBB4 ; =0x0000FFFF
    // lsl r0, r0, #6
    // strh r1, [r5, r0]
    // add r0, r4, #0
    // bl ov40_02230944
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _0223EB96
    // ldr r0, _0223EB9C ; =0x0000047C
    // add r0, r4, r0
    // bl ov40_0222FA24
    // ldr r0, _0223EBA8 ; =0x0000049C
    // add r0, r4, r0
    // bl ov40_0222F720
    // ldr r0, _0223EBA8 ; =0x0000049C
    // add r1, r4, #0
    // add r0, r4, r0
    // bl ov40_0222F920
    // ldr r0, _0223EB9C ; =0x0000047C
    // add r0, r4, r0
    // bl ov40_0222FA18
    // ldr r0, _0223EBA8 ; =0x0000049C
    // add r0, r4, r0
    // bl ov40_0222F734
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // mov r0, #0x13
    // lsl r0, r0, #6
    // ldrh r1, [r5, r0]
    // ldr r0, _0223EBB4 ; =0x0000FFFF
    // cmp r1, r0
    // beq _0223EB5A
    // add r0, r5, #0
    // add r0, #8
    // mov r1, #1
    // bl ov40_0222DA84
    // add r0, r5, #0
    // add r1, r5, #4
    // mov r2, #1
    // mov r3, #2
    // bl ov40_0222DA00
    // cmp r0, #0
    // beq _0223EB40
    // add r0, r4, #0
    // mov r1, #0
    // bl ov40_022420B4
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // ldr r0, [r4, #0x58]
    // mov r1, #3
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r5, #8]
    // ldr r0, [r4, #0x28]
    // lsl r3, r3, #0x18
    // mov r2, #0xc
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // b _0223EB96
    // add r0, r5, #0
    // add r1, r5, #4
    // mov r2, #1
    // mov r3, #2
    // bl ov40_0222DA00
    // cmp r0, #0
    // beq _0223EB96
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _0223EB96
    // add r0, r4, #0
    // bl ov40_0223EDA8
    // mov r0, #0x13
    // lsl r0, r0, #6
    // ldrh r1, [r5, r0]
    // ldr r0, _0223EBB4 ; =0x0000FFFF
    // cmp r1, r0
    // beq _0223EB8E
    // add r0, r4, #0
    // mov r1, #0xb
    // bl ov40_0222BF80
    // b _0223EB96
    // add r0, r4, #0
    // mov r1, #8
    // bl ov40_0222BF80
    // mov r0, #0
    // add sp, #4
    // pop {r3, r4, r5, r6, pc}
    // _0223EB9C: .word 0x0000047C
    // _0223EBA0: .word ov40_022457DC
    // _0223EBA4: .word 0x000004DC
    // _0223EBA8: .word 0x0000049C
    // _0223EBAC: .word 0x000004E4
    // _0223EBB0: .word ov40_02245650
    // _0223EBB4: .word 0x0000FFFF
    // TODO: decompile
}




void ov40_0223EBB8(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // mov r0, #0
    // str r0, [sp, #8]
    // add r0, r1, #1
    // ldr r2, _0223EC38 ; =ov40_02245E44
    // lsl r0, r0, #1
    // ldrh r4, [r2, r0]
    // lsl r0, r1, #1
    // ldrh r6, [r2, r0]
    // ldr r1, [sp, #8]
    // mov r0, #0x6d
    // add r2, sp, #0xc
    // bl ov40_0222DD68
    // str r0, [sp, #4]
    // mov r0, #0x83
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // bl Save_Pokedex_Get
    // str r0, [sp]
    // add r7, r6, #0
    // cmp r6, r4
    // bge _0223EC0A
    // ldr r0, [sp, #4]
    // lsl r1, r6, #1
    // add r5, r0, r1
    // ldrh r1, [r5]
    // ldr r0, [sp]
    // bl Pokedex_CheckMonSeenFlag
    // cmp r0, #0
    // bne _0223EC02
    // ldr r0, _0223EC3C ; =0x0000FFFF
    // strh r0, [r5]
    // add r7, r7, #1
    // add r5, r5, #2
    // cmp r7, r4
    // blt _0223EBF2
    // cmp r6, r4
    // bge _0223EC2A
    // ldr r0, [sp, #4]
    // lsl r1, r6, #1
    // add r2, r0, r1
    // ldr r0, _0223EC3C ; =0x0000FFFF
    // ldrh r1, [r2]
    // cmp r1, r0
    // beq _0223EC22
    // mov r0, #1
    // str r0, [sp, #8]
    // b _0223EC2A
    // add r6, r6, #1
    // add r2, r2, #2
    // cmp r6, r4
    // blt _0223EC16
    // ldr r0, [sp, #4]
    // bl Heap_Free
    // ldr r0, [sp, #8]
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0223EC38: .word ov40_02245E44
    // _0223EC3C: .word 0x0000FFFF
    // TODO: decompile
}




void ov40_0223EC40(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // add r5, r0, #0
    // mov r0, #0x86
    // lsl r0, r0, #4
    // ldr r4, [r5, r0]
    // add r0, r1, #1
    // ldr r2, _0223ED90 ; =ov40_02245E44
    // lsl r0, r0, #1
    // ldrh r6, [r2, r0]
    // lsl r0, r1, #1
    // ldrh r0, [r2, r0]
    // ldr r2, _0223ED94 ; =0x000004CC
    // mov r1, #0
    // str r0, [sp]
    // mov r0, #0x6d
    // add r2, r4, r2
    // bl ov40_0222DD68
    // mov r2, #0x4d
    // lsl r2, r2, #4
    // str r0, [r4, r2]
    // sub r2, r2, #4
    // mov r0, #0x6d
    // mov r1, #0
    // add r2, r4, r2
    // bl ov40_0222DD68
    // str r0, [sp, #8]
    // mov r0, #0x83
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // bl Save_Pokedex_Get
    // str r0, [sp, #4]
    // ldr r0, _0223ED98 ; =0x000004C8
    // mov r1, #0
    // ldr r7, [sp]
    // str r1, [r4, r0]
    // add r0, r7, #0
    // cmp r0, r6
    // bge _0223ECBE
    // lsl r1, r0, #1
    // ldr r0, [sp, #8]
    // add r5, r0, r1
    // ldrh r1, [r5]
    // ldr r0, [sp, #4]
    // bl Pokedex_CheckMonSeenFlag
    // cmp r0, #0
    // bne _0223ECAC
    // ldr r0, _0223ED9C ; =0x0000FFFF
    // strh r0, [r5]
    // b _0223ECB6
    // ldr r0, _0223ED98 ; =0x000004C8
    // ldr r0, [r4, r0]
    // add r1, r0, #1
    // ldr r0, _0223ED98 ; =0x000004C8
    // str r1, [r4, r0]
    // add r7, r7, #1
    // add r5, r5, #2
    // cmp r7, r6
    // blt _0223EC9A
    // ldr r1, [sp]
    // mov r0, #0
    // cmp r1, r6
    // bge _0223ECEE
    // lsl r2, r1, #1
    // ldr r1, [sp, #8]
    // ldr r7, _0223ED9C ; =0x0000FFFF
    // add r2, r1, r2
    // add r3, r0, #0
    // ldrh r1, [r2]
    // cmp r1, r7
    // beq _0223ECE2
    // mov r5, #0x4d
    // lsl r5, r5, #4
    // ldr r5, [r4, r5]
    // add r0, r0, #1
    // strh r1, [r5, r3]
    // add r3, r3, #2
    // ldr r1, [sp]
    // add r2, r2, #2
    // add r1, r1, #1
    // str r1, [sp]
    // cmp r1, r6
    // blt _0223ECD0
    // ldr r1, _0223ED94 ; =0x000004CC
    // ldr r1, [r4, r1]
    // cmp r0, r1
    // bge _0223ED14
    // mov r7, #0x4d
    // ldr r1, [sp, #8]
    // lsl r6, r0, #1
    // lsl r7, r7, #4
    // add r5, r1, r6
    // sub r1, r7, #4
    // ldrh r3, [r5]
    // ldr r2, [r4, r7]
    // add r0, r0, #1
    // strh r3, [r2, r6]
    // ldr r2, [r4, r1]
    // add r5, r5, #2
    // add r6, r6, #2
    // cmp r0, r2
    // blt _0223ED02
    // ldr r0, [sp, #8]
    // bl Heap_Free
    // ldr r1, _0223ED98 ; =0x000004C8
    // mov r0, #0x6d
    // ldr r1, [r4, r1]
    // lsl r1, r1, #4
    // bl Heap_Alloc
    // ldr r2, _0223EDA0 ; =0x000004DC
    // mov r1, #0
    // str r0, [r4, r2]
    // ldr r0, [r4, r2]
    // sub r2, #0x14
    // ldr r2, [r4, r2]
    // lsl r2, r2, #4
    // bl MI_CpuFill8
    // ldr r0, _0223ED98 ; =0x000004C8
    // mov r5, #0
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // ble _0223ED74
    // ldr r7, _0223EDA0 ; =0x000004DC
    // add r2, r5, #0
    // add r0, r7, #0
    // add r3, r5, #0
    // sub r0, #0x14
    // mov r1, #0x4d
    // lsl r1, r1, #4
    // ldr r1, [r4, r1]
    // ldr r6, _0223EDA0 ; =0x000004DC
    // ldrh r1, [r1, r2]
    // ldr r6, [r4, r6]
    // add r5, r5, #1
    // str r1, [r6, r3]
    // mov r1, #0x4d
    // lsl r1, r1, #4
    // ldr r1, [r4, r1]
    // ldr r6, [r4, r7]
    // ldrh r1, [r1, r2]
    // add r6, r6, r3
    // add r2, r2, #2
    // str r1, [r6, #4]
    // ldr r1, [r4, r0]
    // add r3, #0x10
    // cmp r5, r1
    // blt _0223ED4C
    // mov r0, #0
    // mov r1, #0x1b
    // mov r2, #0xed
    // mov r3, #0x6d
    // bl NewMsgDataFromNarc
    // ldr r1, _0223EDA4 ; =0x000004D4
    // mov r2, #1
    // str r0, [r4, r1]
    // add r0, r1, #4
    // str r2, [r4, r0]
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _0223ED90: .word ov40_02245E44
    // _0223ED94: .word 0x000004CC
    // _0223ED98: .word 0x000004C8
    // _0223ED9C: .word 0x0000FFFF
    // _0223EDA0: .word 0x000004DC
    // _0223EDA4: .word 0x000004D4
    // TODO: decompile
}




void ov40_0223EDA8(void) {
    // push {r4, lr}
    // mov r1, #0x86
    // lsl r1, r1, #4
    // ldr r4, [r0, r1]
    // ldr r0, _0223EDD4 ; =0x000004D4
    // ldr r0, [r4, r0]
    // bl DestroyMsgData
    // ldr r0, _0223EDD8 ; =0x000004DC
    // ldr r0, [r4, r0]
    // bl Heap_Free
    // mov r0, #0x4d
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // bl Heap_Free
    // ldr r0, _0223EDDC ; =0x000004D8
    // mov r1, #0
    // str r1, [r4, r0]
    // pop {r4, pc}
    // nop
    // _0223EDD4: .word 0x000004D4
    // _0223EDD8: .word 0x000004DC
    // _0223EDDC: .word 0x000004D8
    // TODO: decompile
}




void ov40_0223EDE0(void) {
    // push {r3, r4, r5, lr}
    // mov r1, #0x86
    // add r4, r0, #0
    // lsl r1, r1, #4
    // ldr r5, [r4, r1]
    // ldr r1, [r4, #8]
    // cmp r1, #4
    // bls _0223EDF2
    // b _0223EF7C
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _0223EDFE: ; jump table
    // mov r1, #0x73
    // bl ov40_0222DF60
    // ldr r2, _0223EF88 ; =0x000004C3
    // mov r1, #0xff
    // strb r1, [r5, r2]
    // add r0, r2, #1
    // strb r1, [r5, r0]
    // ldrb r1, [r5, r2]
    // add r2, r2, #1
    // ldrb r2, [r5, r2]
    // add r0, r4, #0
    // bl ov40_0223DDE8
    // add r0, r4, #0
    // mov r1, #1
    // bl ov40_022420B4
    // add r0, r4, #0
    // mov r1, #0x39
    // mov r2, #7
    // bl ov40_022307DC
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _0223EF84
    // add r0, r5, #0
    // add r0, #8
    // mov r1, #0
    // bl ov40_0222DA84
    // add r0, r5, #0
    // add r1, r5, #4
    // mov r2, #0
    // mov r3, #2
    // bl ov40_0222DA00
    // cmp r0, #0
    // beq _0223EE9C
    // add r0, r4, #0
    // mov r1, #1
    // bl ov40_02230964
    // ldr r0, _0223EF8C ; =0x0000047C
    // add r1, r4, #0
    // add r0, r4, r0
    // bl ov40_0222F9D4
    // ldr r0, _0223EF90 ; =0x0000049C
    // ldr r2, _0223EF94 ; =ov40_0224572C
    // add r0, r4, r0
    // add r1, r4, #0
    // bl ov40_0222E8C4
    // ldr r1, _0223EF8C ; =0x0000047C
    // add r0, r4, r1
    // add r1, #0x20
    // add r1, r4, r1
    // bl ov40_0222FA5C
    // ldr r0, _0223EF90 ; =0x0000049C
    // add r1, r4, #0
    // add r0, r4, r0
    // mov r2, #2
    // bl ov40_0222F740
    // add r0, r4, #0
    // mov r1, #0
    // bl ov40_02230964
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // ldr r0, [r4, #0x58]
    // mov r1, #3
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r5, #8]
    // ldr r0, [r4, #0x28]
    // lsl r3, r3, #0x18
    // mov r2, #0xc
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // b _0223EF84
    // ldr r0, _0223EF8C ; =0x0000047C
    // add r0, r4, r0
    // bl ov40_0222FA88
    // ldr r1, _0223EF90 ; =0x0000049C
    // add r0, r4, r1
    // sub r1, #0x10
    // ldrsh r1, [r4, r1]
    // bl ov40_0222F6D0
    // ldr r0, _0223EF90 ; =0x0000049C
    // add r1, r4, #0
    // add r0, r4, r0
    // bl ov40_0222F38C
    // cmp r0, #0
    // beq _0223EF02
    // ldr r0, _0223EF98 ; =0x0000088C
    // ldr r0, [r4, r0]
    // bl sub_02031620
    // ldr r1, _0223EF88 ; =0x000004C3
    // strb r0, [r5, r1]
    // ldr r0, _0223EF98 ; =0x0000088C
    // ldr r0, [r4, r0]
    // bl sub_0203162C
    // ldr r2, _0223EF9C ; =0x000004C4
    // strb r0, [r5, r2]
    // sub r1, r2, #1
    // ldrb r1, [r5, r1]
    // ldrb r2, [r5, r2]
    // add r0, r4, #0
    // bl ov40_0223DDE8
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // ldr r0, _0223EFA0 ; =ov40_02245650
    // bl TouchscreenHitbox_TouchNewIsIn
    // cmp r0, #0
    // beq _0223EF84
    // add r0, r4, #0
    // bl ov40_02230944
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _0223EF84
    // ldr r0, _0223EF8C ; =0x0000047C
    // add r0, r4, r0
    // bl ov40_0222FA24
    // ldr r0, _0223EF90 ; =0x0000049C
    // add r0, r4, r0
    // bl ov40_0222F720
    // ldr r0, _0223EF90 ; =0x0000049C
    // add r1, r4, #0
    // add r0, r4, r0
    // bl ov40_0222F920
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // add r0, r5, #0
    // add r0, #8
    // mov r1, #1
    // bl ov40_0222DA84
    // add r0, r5, #0
    // add r1, r5, #4
    // mov r2, #1
    // mov r3, #2
    // bl ov40_0222DA00
    // cmp r0, #0
    // beq _0223EF62
    // add r0, r4, #0
    // mov r1, #0
    // bl ov40_022420B4
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // ldr r0, [r4, #0x58]
    // mov r1, #3
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r5, #8]
    // ldr r0, [r4, #0x28]
    // lsl r3, r3, #0x18
    // mov r2, #0xc
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // b _0223EF84
    // add r0, r4, #0
    // mov r1, #0xb
    // bl ov40_0222BF80
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // _0223EF88: .word 0x000004C3
    // _0223EF8C: .word 0x0000047C
    // _0223EF90: .word 0x0000049C
    // _0223EF94: .word ov40_0224572C
    // _0223EF98: .word 0x0000088C
    // _0223EF9C: .word 0x000004C4
    // _0223EFA0: .word ov40_02245650
    // TODO: decompile
}




void ov40_0223EFA4(void) {
    // ldr r4, [r5, r1]
    ov40_022307DC(0x38, 3);
    ov40_022307DC(r5, 0x3b, 7);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    // add r0, #8
    ov40_0222DA84(r4, 0);
    ov40_0222DA00(r4, (r4 + 4), 0, 2);
    ov40_0222DF60(r5, 0x7c);
    ov40_0223DF1C(r5, 0);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r5 + 0x28)), 3, 0xc, ((*((u32*)(r4 + 8)) << 0x18) >> 0x18));
    ov40_0222BF80(3);
}




void ov40_0223F028(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #8
    // mov r1, #0x86
    // add r4, r0, #0
    // lsl r1, r1, #4
    // ldr r5, [r4, r1]
    // bl ov40_0223D5CC
    // cmp r0, #0
    // bne _0223F042
    // add sp, #8
    // mov r0, #0
    // pop {r4, r5, r6, pc}
    // ldr r0, [r4, #8]
    // cmp r0, #3
    // bhi _0223F126
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0223F054: ; jump table
    // add r0, r4, #0
    // mov r1, #0x75
    // bl ov40_0222DF60
    // ldr r0, _0223F150 ; =0x0000057D
    // bl PlaySE
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _0223F148
    // ldr r0, _0223F154 ; =0x000004C2
    // ldrb r6, [r5, r0]
    // cmp r6, #0xff
    // bne _0223F08A
    // add r0, r4, #0
    // bl sub_02087E1C
    // cmp r0, #1
    // bne _0223F088
    // mov r6, #0xff
    // b _0223F08A
    // mov r6, #0xfe
    // add r0, r4, #0
    // bl ov40_0223D540
    // ldr r3, _0223F158 ; =0x000004C4
    // lsl r2, r6, #0x18
    // ldrb r1, [r5, r3]
    // lsr r2, r2, #0x18
    // str r1, [sp]
    // sub r1, r3, #4
    // sub r3, r3, #1
    // ldrh r1, [r5, r1]
    // ldrb r3, [r5, r3]
    // bl ov39_02227590
    // cmp r0, #1
    // bne _0223F148
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _0223F148
    // add r0, r4, #0
    // bl ov40_0223D540
    // add r1, sp, #4
    // bl ov39_02227D44
    // cmp r0, #1
    // ldr r0, _0223F150 ; =0x0000057D
    // bne _0223F0E6
    // mov r1, #0
    // bl StopSE
    // ldr r3, [sp, #4]
    // add r0, r4, #0
    // ldr r2, [r3, #0xc]
    // ldr r3, [r3, #4]
    // mov r1, #7
    // bl ov40_022309DC
    // ldr r0, _0223F15C ; =0x00004138
    // mov r1, #0
    // str r1, [r4, r0]
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _0223F148
    // mov r1, #0
    // bl StopSE
    // mov r0, #0x51
    // mov r1, #0x76
    // lsl r0, r0, #4
    // str r1, [r4, r0]
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _0223F148
    // ldr r0, _0223F15C ; =0x00004138
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // bne _0223F118
    // mov r1, #0x51
    // lsl r1, r1, #4
    // ldr r1, [r4, r1]
    // add r0, r4, #0
    // bl ov40_0222DF60
    // ldr r0, _0223F160 ; =0x0000057C
    // bl PlaySE
    // b _0223F11E
    // ldr r0, _0223F164 ; =0x00000577
    // bl PlaySE
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _0223F148
    // ldr r0, _0223F168 ; =0x0000049C
    // add r0, r4, r0
    // bl ov40_0222F734
    // ldr r0, _0223F15C ; =0x00004138
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // bne _0223F140
    // add r0, r4, #0
    // mov r1, #3
    // bl ov40_0222BF80
    // b _0223F148
    // add r0, r4, #0
    // mov r1, #0xd
    // bl ov40_0222BF80
    // mov r0, #0
    // add sp, #8
    // pop {r4, r5, r6, pc}
    // nop
    // _0223F150: .word 0x0000057D
    // _0223F154: .word 0x000004C2
    // _0223F158: .word 0x000004C4
    // _0223F15C: .word 0x00004138
    // _0223F160: .word 0x0000057C
    // _0223F164: .word 0x00000577
    // _0223F168: .word 0x0000049C
    // TODO: decompile
}




void ov40_0223F16C(void) {
    // push {r3, r4, r5, lr}
    // mov r1, #0x86
    // add r5, r0, #0
    // lsl r1, r1, #4
    // ldr r4, [r5, r1]
    // ldr r1, [r5, #8]
    // cmp r1, #0
    // beq _0223F182
    // cmp r1, #1
    // beq _0223F1AA
    // b _0223F1EC
    // bl ov40_0223E024
    // add r0, r5, #0
    // bl ov40_0223E064
    // add r0, r5, #0
    // bl ov40_0222DFB0
    // ldr r0, _0223F1F8 ; =0x00000608
    // ldr r0, [r4, r0]
    // bl TouchHitboxController_Destroy
    // ldr r0, _0223F1FC ; =0x0000060C
    // ldr r0, [r4, r0]
    // bl TouchHitboxController_Destroy
    // ldr r0, [r5, #8]
    // add r0, r0, #1
    // str r0, [r5, #8]
    // b _0223F1F2
    // add r0, r4, #0
    // add r0, #8
    // mov r1, #1
    // bl ov40_0222DA84
    // add r0, r4, #0
    // add r1, r4, #4
    // mov r2, #1
    // mov r3, #0
    // bl ov40_0222DA00
    // cmp r0, #0
    // beq _0223F1D2
    // add r0, r5, #0
    // mov r1, #1
    // bl ov40_022420B4
    // ldr r0, [r5, #8]
    // add r0, r0, #1
    // str r0, [r5, #8]
    // ldr r0, [r5, #0x58]
    // mov r1, #3
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r4, #8]
    // ldr r0, [r5, #0x28]
    // lsl r3, r3, #0x18
    // mov r2, #0xc
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // b _0223F1F2
    // mov r1, #0xe
    // bl ov40_0222BF80
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // nop
    // _0223F1F8: .word 0x00000608
    // _0223F1FC: .word 0x0000060C
    // TODO: decompile
}




void ov40_0223F200(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #4
    // mov r1, #0x86
    // add r5, r0, #0
    // lsl r1, r1, #4
    // ldr r4, [r5, r1]
    // ldr r1, [r5, #8]
    // cmp r1, #0
    // beq _0223F21A
    // cmp r1, #1
    // bne _0223F218
    // b _0223F31C
    // b _0223F3BC
    // bl sub_0202FC48
    // cmp r0, #0
    // beq _0223F226
    // bl sub_0202FC24
    // mov r0, #0x4e
    // lsl r0, r0, #4
    // ldr r3, _0223F3C8 ; =ov40_022457B0
    // add r2, r4, r0
    // mov r6, #5
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // sub r6, r6, #1
    // bne _0223F230
    // ldr r0, [r3]
    // mov r1, #0
    // str r0, [r2]
    // mov r0, #0x4e
    // lsl r0, r0, #4
    // str r1, [r4, r0]
    // ldr r1, _0223F3CC ; =0x00004138
    // add r0, r0, #4
    // ldr r1, [r5, r1]
    // str r1, [r4, r0]
    // add r0, r5, #0
    // bl ov40_0222FE00
    // mov r0, #0x6d
    // bl ov40_0222FE8C
    // ldr r1, _0223F3D0 ; =0x0000050C
    // mov r2, #3
    // str r0, [r4, r1]
    // add r0, r5, #0
    // mov r1, #4
    // bl ov40_022307DC
    // mov r1, #7
    // add r0, r5, #0
    // add r2, r1, #0
    // bl ov40_022307DC
    // mov r0, #4
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #4
    // mov r1, #0
    // bl GfGfx_EngineBTogglePlanes
    // add r0, r5, #0
    // bl ov40_0223E0A4
    // add r0, r5, #0
    // mov r1, #1
    // bl ov40_02230964
    // ldr r0, _0223F3D4 ; =0x0000047C
    // add r1, r5, #0
    // add r0, r5, r0
    // bl ov40_0222F9D4
    // ldr r3, _0223F3D8 ; =0x0000049C
    // add r1, r5, #0
    // add r0, r5, r3
    // add r3, #0x44
    // mov r2, #0
    // add r3, r4, r3
    // bl ov40_0222E9B8
    // ldr r1, _0223F3DC ; =0x000004E4
    // mov r0, #1
    // str r0, [r5, r1]
    // add r0, r1, #0
    // sub r0, #0x68
    // sub r1, #0x48
    // add r0, r5, r0
    // add r1, r5, r1
    // bl ov40_0222FA5C
    // add r0, r5, #0
    // mov r1, #0
    // bl ov40_02230964
    // add r0, r5, #0
    // mov r1, #1
    // bl ov40_02230964
    // ldr r0, _0223F3D8 ; =0x0000049C
    // add r1, r5, #0
    // add r0, r5, r0
    // mov r2, #1
    // bl ov40_0222F740
    // ldr r0, _0223F3D8 ; =0x0000049C
    // mov r1, #0x40
    // add r0, r5, r0
    // mov r2, #0xb8
    // bl ov40_0222F858
    // ldr r0, _0223F3D8 ; =0x0000049C
    // add r1, r5, #0
    // add r0, r5, r0
    // bl ov40_0222F488
    // add r0, r5, #0
    // mov r1, #0
    // bl ov40_02230964
    // add r0, r5, #0
    // mov r1, #1
    // bl ov40_02230964
    // add r0, r5, #0
    // bl ov40_0223D68C
    // add r0, r5, #0
    // mov r1, #0
    // bl ov40_0223D830
    // add r0, r5, #0
    // mov r1, #0
    // bl ov40_02230964
    // ldr r0, [r5, #8]
    // add r0, r0, #1
    // str r0, [r5, #8]
    // b _0223F3C2
    // add r0, r4, #0
    // add r0, #8
    // mov r1, #0
    // bl ov40_0222DA84
    // mov r2, #0
    // add r0, r4, #0
    // add r1, r4, #4
    // add r3, r2, #0
    // bl ov40_0222DA00
    // cmp r0, #0
    // beq _0223F38A
    // mov r0, #4
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #4
    // mov r1, #1
    // bl GfGfx_EngineBTogglePlanes
    // add r0, r5, #0
    // mov r1, #1
    // bl ov40_0223D830
    // ldr r3, _0223F3E0 ; =0x000004D8
    // mov r1, #0x6f
    // ldr r6, [r5, r3]
    // mov r3, #0x18
    // mul r3, r6
    // lsl r1, r1, #4
    // add r3, #0x4c
    // lsl r3, r3, #0x10
    // ldr r1, [r5, r1]
    // add r0, r5, #0
    // mov r2, #0x10
    // asr r3, r3, #0x10
    // bl ov40_0223077C
    // mov r0, #0x6f
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // mov r1, #1
    // bl sub_020879E0
    // mov r0, #0x6f
    // lsl r0, r0, #4
    // mov r1, #0xc
    // ldr r0, [r5, r0]
    // add r2, r1, #0
    // bl sub_02087A08
    // ldr r0, [r5, #8]
    // add r0, r0, #1
    // str r0, [r5, #8]
    // ldr r0, [r5, #0x58]
    // mov r1, #3
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r4, #8]
    // ldr r0, [r5, #0x28]
    // lsl r3, r3, #0x18
    // mov r2, #0xc
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // ldr r0, [r5, #0x58]
    // mov r1, #2
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r4, #8]
    // ldr r0, [r5, #0x28]
    // lsl r3, r3, #0x18
    // mov r2, #0xc
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // b _0223F3C2
    // mov r1, #0xf
    // bl ov40_0222BF80
    // mov r0, #0
    // add sp, #4
    // pop {r3, r4, r5, r6, pc}
    // _0223F3C8: .word ov40_022457B0
    // _0223F3CC: .word 0x00004138
    // _0223F3D0: .word 0x0000050C
    // _0223F3D4: .word 0x0000047C
    // _0223F3D8: .word 0x0000049C
    // _0223F3DC: .word 0x000004E4
    // _0223F3E0: .word 0x000004D8
    // TODO: decompile
}




void ov40_0223F3E4(void) {
    // push {r3, r4, r5, lr}
    // mov r1, #0x86
    // add r5, r0, #0
    // lsl r1, r1, #4
    // ldr r4, [r5, r1]
    // ldr r1, [r5, #8]
    // cmp r1, #0
    // beq _0223F3FE
    // cmp r1, #1
    // beq _0223F474
    // cmp r1, #2
    // beq _0223F4EC
    // b _0223F578
    // ldr r0, _0223F584 ; =0x0000047C
    // add r0, r5, r0
    // bl ov40_0222FA88
    // ldr r1, _0223F588 ; =0x0000049C
    // add r0, r5, r1
    // sub r1, #0x10
    // ldrsh r1, [r5, r1]
    // bl ov40_0222F5EC
    // ldr r0, _0223F588 ; =0x0000049C
    // add r1, r5, #0
    // add r0, r5, r0
    // bl ov40_0222F488
    // ldr r2, _0223F58C ; =0x000004D8
    // mov r0, #0x6f
    // ldr r3, [r5, r2]
    // mov r2, #0x18
    // mul r2, r3
    // lsl r0, r0, #4
    // add r2, #0x4c
    // lsl r2, r2, #0x10
    // ldr r0, [r5, r0]
    // mov r1, #0x10
    // asr r2, r2, #0x10
    // bl sub_020878EC
    // add r0, r5, #0
    // bl ov40_0223D8D4
    // ldr r0, _0223F590 ; =ov40_0224564C
    // bl TouchscreenHitbox_TouchNewIsIn
    // cmp r0, #0
    // beq _0223F456
    // add r0, r5, #0
    // bl ov40_02230944
    // mov r0, #0x11
    // str r0, [r4, #0xc]
    // ldr r0, [r5, #8]
    // add r0, r0, #1
    // str r0, [r5, #8]
    // ldr r0, _0223F594 ; =ov40_02245650
    // bl TouchscreenHitbox_TouchNewIsIn
    // cmp r0, #0
    // bne _0223F462
    // b _0223F57E
    // add r0, r5, #0
    // bl ov40_02230944
    // mov r0, #0x10
    // str r0, [r4, #0xc]
    // ldr r0, [r5, #8]
    // add r0, r0, #1
    // str r0, [r5, #8]
    // b _0223F57E
    // ldr r0, _0223F584 ; =0x0000047C
    // add r0, r5, r0
    // bl ov40_0222FA24
    // ldr r0, _0223F588 ; =0x0000049C
    // add r0, r5, r0
    // bl ov40_0222F720
    // ldr r0, _0223F588 ; =0x0000049C
    // add r1, r5, #0
    // add r0, r5, r0
    // bl ov40_0222F920
    // ldr r0, _0223F598 ; =0x0000050C
    // ldr r0, [r4, r0]
    // bl ov40_0222FE98
    // add r0, r5, #0
    // bl ov40_0223D874
    // add r0, r5, #0
    // bl ov40_0222FE68
    // add r0, r5, #0
    // bl ov40_0223E024
    // add r0, r5, #0
    // bl ov40_0223E064
    // mov r0, #0x6f
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // mov r1, #0
    // bl sub_020879E0
    // mov r0, #0x6f
    // lsl r0, r0, #4
    // mov r1, #0
    // ldr r0, [r5, r0]
    // add r2, r1, #0
    // bl sub_02087A08
    // ldr r0, [r4, #0xc]
    // cmp r0, #0x10
    // bne _0223F4E6
    // ldr r0, _0223F584 ; =0x0000047C
    // add r0, r5, r0
    // bl ov40_0222FA18
    // ldr r0, _0223F588 ; =0x0000049C
    // add r0, r5, r0
    // bl ov40_0222F734
    // mov r0, #0x51
    // mov r1, #0
    // lsl r0, r0, #4
    // str r1, [r4, r0]
    // ldr r0, [r5, #8]
    // add r0, r0, #1
    // str r0, [r5, #8]
    // add r0, r4, #0
    // add r0, #8
    // mov r1, #1
    // bl ov40_0222DA84
    // add r0, r4, #0
    // add r1, r4, #4
    // mov r2, #1
    // mov r3, #0
    // bl ov40_0222DA00
    // cmp r0, #0
    // beq _0223F546
    // add r0, r5, #0
    // mov r1, #0
    // bl ov40_022420B4
    // ldr r0, [r4, #0xc]
    // cmp r0, #0x11
    // bne _0223F540
    // add r0, r4, #0
    // add r1, r5, #0
    // add r0, #0x10
    // add r1, #0x14
    // mov r2, #3
    // bl ov40_0222D66C
    // add r0, r4, #0
    // add r1, r5, #0
    // add r0, #0x2c
    // add r1, #0x14
    // mov r2, #0x5e
    // bl ov40_0222D66C
    // ldr r0, [r4, #0x14]
    // mov r1, #0
    // bl ManagedSprite_SetAnim
    // ldr r0, [r4, #0x30]
    // mov r1, #3
    // bl ManagedSprite_SetAnim
    // ldr r0, [r5, #8]
    // add r0, r0, #1
    // str r0, [r5, #8]
    // ldr r0, [r5, #0x58]
    // mov r1, #3
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r4, #8]
    // ldr r0, [r5, #0x28]
    // lsl r3, r3, #0x18
    // mov r2, #0xc
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // ldr r0, [r5, #0x58]
    // mov r1, #2
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r4, #8]
    // ldr r0, [r5, #0x28]
    // lsl r3, r3, #0x18
    // mov r2, #0xc
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // b _0223F57E
    // ldr r1, [r4, #0xc]
    // bl ov40_0222BF80
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // nop
    // _0223F584: .word 0x0000047C
    // _0223F588: .word 0x0000049C
    // _0223F58C: .word 0x000004D8
    // _0223F590: .word ov40_0224564C
    // _0223F594: .word ov40_02245650
    // _0223F598: .word 0x0000050C
    // TODO: decompile
}




void ov40_0223F59C(void) {
    // push {r3, r4, r5, lr}
    // mov r1, #0x86
    // add r5, r0, #0
    // lsl r1, r1, #4
    // ldr r4, [r5, r1]
    // ldr r1, [r5, #8]
    // cmp r1, #0
    // beq _0223F5B2
    // cmp r1, #1
    // beq _0223F614
    // b _0223F692
    // mov r1, #0x38
    // mov r2, #3
    // bl ov40_022307DC
    // add r0, r5, #0
    // mov r1, #0x3b
    // mov r2, #7
    // bl ov40_022307DC
    // add r0, r5, #0
    // mov r1, #0
    // bl ov40_022420B4
    // mov r0, #0x6d
    // str r0, [sp]
    // ldr r0, _0223F69C ; =ov40_022456C4
    // ldr r2, _0223F6A0 ; =ov40_02241D10
    // mov r1, #5
    // add r3, r5, #0
    // bl TouchHitboxController_Create
    // ldr r1, _0223F6A4 ; =0x00000608
    // ldr r2, _0223F6A8 ; =ov40_02241E14
    // str r0, [r4, r1]
    // mov r0, #0x6d
    // str r0, [sp]
    // ldr r0, _0223F6AC ; =ov40_02245708
    // mov r1, #9
    // add r3, r5, #0
    // bl TouchHitboxController_Create
    // ldr r1, _0223F6B0 ; =0x0000060C
    // str r0, [r4, r1]
    // add r0, r5, #0
    // mov r1, #0
    // bl ov40_0223DF1C
    // mov r0, #4
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #4
    // mov r1, #0
    // bl GfGfx_EngineBTogglePlanes
    // ldr r0, [r5, #8]
    // add r0, r0, #1
    // str r0, [r5, #8]
    // b _0223F698
    // add r0, r4, #0
    // add r0, #8
    // mov r1, #0
    // bl ov40_0222DA84
    // mov r2, #0
    // add r0, r4, #0
    // add r1, r4, #4
    // add r3, r2, #0
    // bl ov40_0222DA00
    // cmp r0, #0
    // beq _0223F678
    // add r0, r5, #0
    // mov r1, #0x7c
    // bl ov40_0222DED0
    // add r0, r5, #0
    // mov r1, #0
    // bl ov40_0223DBD4
    // mov r1, #0x13
    // lsl r1, r1, #6
    // ldrh r1, [r4, r1]
    // add r0, r5, #0
    // bl ov40_0223DD68
    // ldr r1, _0223F6B4 ; =0x000004C2
    // add r0, r5, #0
    // ldrb r1, [r4, r1]
    // bl ov40_0223DCF0
    // ldr r2, _0223F6B8 ; =0x000004C3
    // add r0, r5, #0
    // ldrb r1, [r4, r2]
    // add r2, r2, #1
    // ldrb r2, [r4, r2]
    // bl ov40_0223DDE8
    // mov r0, #4
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #4
    // mov r1, #1
    // bl GfGfx_EngineBTogglePlanes
    // ldr r0, [r5, #8]
    // add r0, r0, #1
    // str r0, [r5, #8]
    // ldr r0, [r5, #0x58]
    // mov r1, #3
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r4, #8]
    // ldr r0, [r5, #0x28]
    // lsl r3, r3, #0x18
    // mov r2, #0xc
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // b _0223F698
    // mov r1, #3
    // bl ov40_0222BF80
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // _0223F69C: .word ov40_022456C4
    // _0223F6A0: .word ov40_02241D10
    // _0223F6A4: .word 0x00000608
    // _0223F6A8: .word ov40_02241E14
    // _0223F6AC: .word ov40_02245708
    // _0223F6B0: .word 0x0000060C
    // _0223F6B4: .word 0x000004C2
    // _0223F6B8: .word 0x000004C3
    // TODO: decompile
}




void ov40_0223F6BC(void) {
    // push {r3, r4, r5, lr}
    // mov r1, #0x86
    // add r4, r0, #0
    // lsl r1, r1, #4
    // ldr r5, [r4, r1]
    // ldr r1, [r4, #8]
    // cmp r1, #3
    // bls _0223F6CE
    // b _0223F802
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _0223F6DA: ; jump table
    // mov r1, #6
    // mov r2, #7
    // bl ov40_022307DC
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _0223F80A
    // bl ov40_022408AC
    // mov r0, #0x6d
    // str r0, [sp]
    // ldr r0, _0223F810 ; =ov40_022456B4
    // ldr r2, _0223F814 ; =ov40_02241E40
    // mov r1, #4
    // add r3, r4, #0
    // bl TouchHitboxController_Create
    // ldr r1, _0223F818 ; =0x00000608
    // ldr r2, _0223F81C ; =ov40_02241ED4
    // str r0, [r5, r1]
    // mov r0, #0x6d
    // str r0, [sp]
    // ldr r0, _0223F820 ; =ov40_02245674
    // mov r1, #4
    // add r3, r4, #0
    // bl TouchHitboxController_Create
    // ldr r1, _0223F824 ; =0x0000060C
    // ldr r2, _0223F828 ; =ov40_02241F3C
    // str r0, [r5, r1]
    // mov r0, #0x6d
    // str r0, [sp]
    // ldr r0, _0223F82C ; =ov40_02245654
    // mov r1, #2
    // add r3, r4, #0
    // bl TouchHitboxController_Create
    // mov r1, #0x61
    // lsl r1, r1, #4
    // str r0, [r5, r1]
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _0223F80A
    // mov r1, #0x73
    // mov r2, #0
    // lsl r1, r1, #2
    // str r2, [r5, r1]
    // mov r1, #1
    // bl ov40_02230964
    // mov r0, #0x43
    // lsl r0, r0, #2
    // add r0, r5, r0
    // add r1, r4, #0
    // bl ov40_02230638
    // mov r0, #0x43
    // lsl r0, r0, #2
    // add r0, r5, r0
    // bl ov40_02230410
    // add r1, r0, #0
    // add r0, r4, #0
    // mov r2, #3
    // bl ov40_022307DC
    // mov r0, #0x43
    // lsl r0, r0, #2
    // add r0, r5, r0
    // mov r1, #0
    // bl ov40_022306A0
    // add r0, r4, #0
    // mov r1, #0
    // bl ov40_02230964
    // mov r0, #8
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #8
    // mov r1, #1
    // bl GfGfx_EngineBTogglePlanes
    // mov r0, #4
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #4
    // mov r1, #0
    // bl GfGfx_EngineBTogglePlanes
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _0223F80A
    // add r0, r5, #0
    // add r0, #8
    // mov r1, #0
    // bl ov40_0222DA84
    // mov r2, #0
    // add r0, r5, #0
    // add r1, r5, #4
    // add r3, r2, #0
    // bl ov40_0222DA00
    // cmp r0, #0
    // beq _0223F7E8
    // mov r0, #0x43
    // lsl r0, r0, #2
    // add r0, r5, r0
    // mov r1, #1
    // bl ov40_022306A0
    // add r0, r4, #0
    // bl ov40_02241AB0
    // mov r0, #4
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #4
    // mov r1, #1
    // bl GfGfx_EngineBTogglePlanes
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // ldr r0, [r4, #0x58]
    // mov r1, #3
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r5, #8]
    // ldr r0, [r4, #0x28]
    // lsl r3, r3, #0x18
    // mov r2, #0xc
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // b _0223F80A
    // add r0, r4, #0
    // mov r1, #0x12
    // bl ov40_0222BF80
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // nop
    // _0223F810: .word ov40_022456B4
    // _0223F814: .word ov40_02241E40
    // _0223F818: .word 0x00000608
    // _0223F81C: .word ov40_02241ED4
    // _0223F820: .word ov40_02245674
    // _0223F824: .word 0x0000060C
    // _0223F828: .word ov40_02241F3C
    // _0223F82C: .word ov40_02245654
    // TODO: decompile
}




void ov40_0223F830(void) {
}




void ov40_0223F848(void) {
    ov40_0224222C();
    ov40_0222BF80(r4, 0x12);
}




void ov40_0223F860(void) {
    // ldr r4, [r0, r1]
    ov40_02242CFC((0x86 << 4));
    Heap_Free(r4);
}




void ov40_0223F880(void) {
    // push {r3, r4, r5, lr}
    // mov r1, #0x86
    // add r5, r0, #0
    // lsl r1, r1, #4
    // ldr r4, [r5, r1]
    // ldr r1, [r5, #8]
    // cmp r1, #0
    // beq _0223F896
    // cmp r1, #1
    // beq _0223F904
    // b _0223F972
    // ldr r0, _0223F97C ; =0x00000608
    // ldr r0, [r4, r0]
    // bl TouchHitboxController_Destroy
    // ldr r0, _0223F980 ; =0x0000060C
    // ldr r0, [r4, r0]
    // bl TouchHitboxController_Destroy
    // mov r0, #0x61
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // bl TouchHitboxController_Destroy
    // mov r0, #4
    // mov r1, #0
    // bl GfGfx_EngineBTogglePlanes
    // mov r0, #4
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // add r0, r5, #0
    // bl ov40_02240910
    // add r0, r5, #0
    // mov r1, #1
    // bl ov40_02230964
    // mov r0, #0x73
    // lsl r0, r0, #2
    // ldr r1, [r4, r0]
    // cmp r1, #0
    // bne _0223F8E4
    // sub r0, #0xc0
    // add r0, r4, r0
    // add r1, r5, #0
    // bl ov40_0223064C
    // b _0223F8EE
    // add r4, #0x80
    // add r0, r4, #0
    // add r1, r5, #0
    // bl ov40_0222E7B8
    // add r0, r5, #0
    // mov r1, #0
    // bl ov40_02230964
    // add r0, r5, #0
    // bl ov40_02241A34
    // ldr r0, [r5, #8]
    // add r0, r0, #1
    // str r0, [r5, #8]
    // b _0223F978
    // add r0, r4, #0
    // add r0, #8
    // mov r1, #1
    // bl ov40_0222DA84
    // add r0, r4, #0
    // add r1, r4, #4
    // mov r2, #1
    // mov r3, #0
    // bl ov40_0222DA00
    // cmp r0, #0
    // beq _0223F958
    // add r0, r4, #0
    // add r1, r5, #0
    // add r0, #0x10
    // add r1, #0x14
    // mov r2, #3
    // bl ov40_0222D66C
    // add r0, r4, #0
    // add r1, r5, #0
    // add r0, #0x2c
    // add r1, #0x14
    // mov r2, #0x6f
    // bl ov40_0222D66C
    // ldr r0, [r4, #0x14]
    // mov r1, #0
    // bl ManagedSprite_SetAnim
    // ldr r0, [r4, #0x30]
    // mov r1, #1
    // bl ManagedSprite_SetAnim
    // add r0, r5, #0
    // mov r1, #1
    // bl ov40_022420B4
    // ldr r0, [r5, #8]
    // add r0, r0, #1
    // str r0, [r5, #8]
    // ldr r0, [r5, #0x58]
    // mov r1, #3
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r4, #8]
    // ldr r0, [r5, #0x28]
    // lsl r3, r3, #0x18
    // mov r2, #0xc
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // b _0223F978
    // mov r1, #0xe
    // bl ov40_0222BF80
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // _0223F97C: .word 0x00000608
    // _0223F980: .word 0x0000060C
    // TODO: decompile
}




void ov40_0223F984(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x10
    // add r4, r0, #0
    // mov r0, #0x86
    // lsl r0, r0, #4
    // ldr r5, [r4, r0]
    // bl sub_020307F8
    // mov r1, #4
    // mov r2, #0
    // bl sub_0203088C
    // add r3, r0, #0
    // add r2, r1, #0
    // add r0, r4, #0
    // add r1, r3, #0
    // bl ov40_02230D94
    // cmp r0, #0
    // bne _0223F9AE
    // b _0223FC7A
    // ldr r0, [r4, #8]
    // cmp r0, #5
    // bls _0223F9B6
    // b _0223FC4C
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0223F9C2: ; jump table
    // add r0, r4, #0
    // mov r1, #1
    // bl ov40_02230964
    // mov r0, #0x73
    // lsl r0, r0, #2
    // ldr r1, [r5, r0]
    // cmp r1, #0
    // bne _0223F9EC
    // sub r0, #0xc0
    // add r0, r5, r0
    // add r1, r4, #0
    // bl ov40_0223064C
    // b _0223F9F6
    // add r5, #0x80
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov40_0222E7B8
    // add r0, r4, #0
    // bl ov40_02241A34
    // add r0, r4, #0
    // mov r1, #0
    // bl ov40_02230964
    // mov r0, #4
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #4
    // mov r1, #0
    // bl GfGfx_EngineBTogglePlanes
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _0223FC8C
    // add r0, r5, #0
    // add r0, #8
    // mov r1, #1
    // bl ov40_0222DA84
    // add r0, r5, #0
    // add r1, r5, #4
    // mov r2, #1
    // mov r3, #0
    // bl ov40_0222DA00
    // cmp r0, #0
    // beq _0223FA68
    // add r0, r4, #0
    // mov r1, #1
    // bl ov40_02230964
    // add r0, r4, #0
    // bl ov40_022421FC
    // add r0, r4, #0
    // bl ov40_02241054
    // add r0, r4, #0
    // mov r1, #0
    // bl ov40_02230964
    // ldr r0, [r4, #0x24]
    // mov r1, #3
    // bl BgClearTilemapBufferAndCommit
    // ldr r0, [r4, #0x24]
    // mov r1, #7
    // bl BgClearTilemapBufferAndCommit
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // ldr r0, [r4, #0x58]
    // mov r1, #3
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r5, #8]
    // ldr r0, [r4, #0x28]
    // lsl r3, r3, #0x18
    // mov r2, #0xc
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // b _0223FC8C
    // ldr r1, _0223FC94 ; =0x00000115
    // add r0, r4, #0
    // bl ov40_0222DED0
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _0223FC8C
    // bl System_GetTouchNew
    // cmp r0, #0
    // bne _0223FA9C
    // b _0223FC8C
    // add r0, r4, #0
    // bl ov40_02241114
    // add r0, r4, #0
    // bl ov40_0222DFB0
    // ldr r0, [r4, #0x24]
    // mov r1, #2
    // bl BgClearTilemapBufferAndCommit
    // ldr r0, [r4, #0x24]
    // mov r1, #6
    // bl BgClearTilemapBufferAndCommit
    // mov r0, #4
    // mov r1, #0
    // bl GfGfx_EngineBTogglePlanes
    // mov r0, #4
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _0223FC8C
    // add r0, r4, #0
    // mov r1, #1
    // bl ov40_02230964
    // add r0, r4, #0
    // bl ov40_02242110
    // ldr r0, _0223FC98 ; =0x0000086C
    // ldr r0, [r4, r0]
    // cmp r0, #0xd2
    // bne _0223FB12
    // add r0, r5, #0
    // add r1, r4, #0
    // add r0, #0x10
    // add r1, #0x14
    // mov r2, #3
    // bl ov40_0222D66C
    // add r0, r5, #0
    // add r1, r4, #0
    // add r0, #0x2c
    // add r1, #0x14
    // mov r2, #0x5e
    // bl ov40_0222D66C
    // ldr r0, [r5, #0x14]
    // mov r1, #0
    // bl ManagedSprite_SetAnim
    // ldr r0, [r5, #0x30]
    // mov r1, #3
    // bl ManagedSprite_SetAnim
    // add r0, r4, #0
    // mov r1, #0
    // bl ov40_02230964
    // add r0, r4, #0
    // bl ov40_02241AB0
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x6d
    // str r0, [sp, #0xc]
    // ldr r0, [r4, #0x14]
    // ldr r2, [r4, #0x24]
    // mov r1, #0x3e
    // mov r3, #3
    // bl GfGfxLoader_LoadCharDataFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x6d
    // str r0, [sp, #0xc]
    // ldr r0, [r4, #0x14]
    // ldr r2, [r4, #0x24]
    // mov r1, #0x3e
    // mov r3, #7
    // bl GfGfxLoader_LoadCharDataFromOpenNarc
    // add r0, r4, #0
    // mov r1, #1
    // bl ov40_02230964
    // mov r0, #0x73
    // lsl r0, r0, #2
    // ldr r1, [r5, r0]
    // cmp r1, #0
    // bne _0223FB8E
    // sub r0, #0xc0
    // add r0, r5, r0
    // add r1, r4, #0
    // bl ov40_02230638
    // mov r0, #0x43
    // lsl r0, r0, #2
    // add r0, r5, r0
    // mov r1, #0
    // bl ov40_022306A0
    // mov r0, #0x43
    // lsl r0, r0, #2
    // add r0, r5, r0
    // bl ov40_02230410
    // add r1, r0, #0
    // add r0, r4, #0
    // mov r2, #3
    // bl ov40_022307DC
    // b _0223FBBA
    // add r0, r5, #0
    // add r0, #0x80
    // add r1, r4, #0
    // bl ov40_0222E79C
    // add r5, #0x80
    // add r0, r5, #0
    // mov r1, #0
    // bl ov40_0222E7DC
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x6d
    // str r0, [sp, #0xc]
    // ldr r0, [r4, #0x14]
    // ldr r2, [r4, #0x24]
    // mov r1, #0x50
    // mov r3, #3
    // bl GfGfxLoader_LoadScrnDataFromOpenNarc
    // add r0, r4, #0
    // mov r1, #0
    // bl ov40_02230964
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x6d
    // str r0, [sp, #0xc]
    // ldr r0, [r4, #0x14]
    // ldr r2, [r4, #0x24]
    // mov r1, #6
    // mov r3, #7
    // bl GfGfxLoader_LoadScrnDataFromOpenNarc
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _0223FC8C
    // add r0, r5, #0
    // add r0, #8
    // mov r1, #0
    // bl ov40_0222DA84
    // mov r2, #0
    // add r0, r5, #0
    // add r1, r5, #4
    // add r3, r2, #0
    // bl ov40_0222DA00
    // cmp r0, #0
    // beq _0223FC32
    // mov r0, #0x73
    // lsl r0, r0, #2
    // ldr r1, [r5, r0]
    // cmp r1, #0
    // bne _0223FC12
    // sub r0, #0xc0
    // add r0, r5, r0
    // mov r1, #1
    // bl ov40_022306A0
    // b _0223FC1C
    // add r0, r5, #0
    // add r0, #0x80
    // mov r1, #1
    // bl ov40_0222E7DC
    // mov r0, #4
    // mov r1, #1
    // bl GfGfx_EngineBTogglePlanes
    // mov r0, #4
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // ldr r0, [r4, #0x58]
    // mov r1, #3
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r5, #8]
    // ldr r0, [r4, #0x28]
    // lsl r3, r3, #0x18
    // mov r2, #0xc
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // b _0223FC8C
    // ldr r1, _0223FC9C ; =0x00004138
    // mov r0, #0
    // ldr r1, [r4, r1]
    // cmp r1, #0
    // ble _0223FC70
    // mov r1, #0x9a
    // lsl r1, r1, #6
    // add r5, r4, r1
    // ldr r2, _0223FC9C ; =0x00004138
    // add r6, r4, #0
    // sub r1, #0x78
    // str r5, [r6, r1]
    // ldr r3, [r4, r2]
    // add r0, r0, #1
    // add r5, #0xe4
    // add r6, r6, #4
    // cmp r0, r3
    // blt _0223FC62
    // add r0, r4, #0
    // mov r1, #0x12
    // bl ov40_0222BF80
    // b _0223FC8C
    // add r0, r4, #0
    // bl ov40_02242378
    // cmp r0, #0
    // beq _0223FC8C
    // add r0, r4, #0
    // mov r1, #0x17
    // bl ov40_0222BF80
    // mov r0, #0
    // add sp, #0x10
    // pop {r4, r5, r6, pc}
    // nop
    // _0223FC94: .word 0x00000115
    // _0223FC98: .word 0x0000086C
    // _0223FC9C: .word 0x00004138
    // TODO: decompile
}




void ov40_0223FCA0(void) {
}




void ov40_0223FCB8(void) {
    // push {r4, r5, r6, lr}
    // add r4, r0, #0
    // bl ov40_02242AEC
    // cmp r0, #0
    // beq _0223FCF0
    // ldr r1, _0223FCF4 ; =0x00004138
    // mov r0, #0
    // ldr r1, [r4, r1]
    // cmp r1, #0
    // ble _0223FCE8
    // mov r1, #0x9a
    // lsl r1, r1, #6
    // add r5, r4, r1
    // ldr r2, _0223FCF4 ; =0x00004138
    // add r6, r4, #0
    // sub r1, #0x78
    // str r5, [r6, r1]
    // ldr r3, [r4, r2]
    // add r0, r0, #1
    // add r5, #0xe4
    // add r6, r6, #4
    // cmp r0, r3
    // blt _0223FCDA
    // add r0, r4, #0
    // mov r1, #0x12
    // bl ov40_0222BF80
    // mov r0, #0
    // pop {r4, r5, r6, pc}
    // _0223FCF4: .word 0x00004138
    // TODO: decompile
}




void ov40_0223FCF8(void) {
    // push {r4, r5, r6, lr}
    // add r4, r0, #0
    // bl ov40_022428D4
    // cmp r0, #0
    // beq _0223FD30
    // ldr r1, _0223FD34 ; =0x00004138
    // mov r0, #0
    // ldr r1, [r4, r1]
    // cmp r1, #0
    // ble _0223FD28
    // mov r1, #0x9a
    // lsl r1, r1, #6
    // add r5, r4, r1
    // ldr r2, _0223FD34 ; =0x00004138
    // add r6, r4, #0
    // sub r1, #0x78
    // str r5, [r6, r1]
    // ldr r3, [r4, r2]
    // add r0, r0, #1
    // add r5, #0xe4
    // add r6, r6, #4
    // cmp r0, r3
    // blt _0223FD1A
    // add r0, r4, #0
    // mov r1, #0x12
    // bl ov40_0222BF80
    // mov r0, #0
    // pop {r4, r5, r6, pc}
    // _0223FD34: .word 0x00004138
    // TODO: decompile
}




void ov40_0223FD38(void) {
    ov40_02242490();
    ov40_0222BF80(r4, 0x1a);
}




void ov40_0223FD50(void) {
}




void ov40_0223FD68(void) {
    ov40_0224253C();
    ov40_0222BF80(r4, 0x17);
}




void ov40_0223FD80(void) {
}




void ov40_0223FD8C(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #8
    // mov r1, #0x86
    // add r4, r0, #0
    // lsl r1, r1, #4
    // ldr r5, [r4, r1]
    // bl ov40_0223D5CC
    // cmp r0, #0
    // bne _0223FDA6
    // add sp, #8
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // ldr r0, [r4, #8]
    // cmp r0, #4
    // bls _0223FDAE
    // b _0223FF34
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0223FDBA: ; jump table
    // ldr r0, [r4, #0x24]
    // mov r1, #2
    // bl BgClearTilemapBufferAndCommit
    // ldr r0, [r4, #0x24]
    // mov r1, #6
    // bl BgClearTilemapBufferAndCommit
    // mov r0, #0x73
    // lsl r0, r0, #2
    // ldr r1, [r5, r0]
    // cmp r1, #0
    // bne _0223FDEA
    // sub r0, #0xc0
    // add r0, r5, r0
    // mov r1, #0
    // bl ov40_022306A0
    // b _0223FDF4
    // add r0, r5, #0
    // add r0, #0x80
    // mov r1, #0
    // bl ov40_0222E7DC
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // add r0, r5, #0
    // add r0, #8
    // mov r1, #1
    // bl ov40_0222DA84
    // add r0, r5, #0
    // add r1, r5, #4
    // mov r2, #1
    // mov r3, #0
    // bl ov40_0222DA00
    // cmp r0, #0
    // beq _0223FE1A
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // ldr r0, [r4, #0x58]
    // mov r1, #3
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r5, #8]
    // ldr r0, [r4, #0x28]
    // lsl r3, r3, #0x18
    // mov r2, #0xc
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // b _0223FF68
    // add r0, r4, #0
    // mov r1, #0x75
    // bl ov40_0222DED0
    // mov r1, #0x6f
    // lsl r1, r1, #4
    // ldr r1, [r4, r1]
    // add r0, r4, #0
    // mov r2, #0x80
    // mov r3, #0x60
    // bl ov40_0223077C
    // mov r0, #0x6f
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #1
    // bl sub_020879E0
    // mov r0, #0x6f
    // lsl r0, r0, #4
    // mov r1, #0x18
    // ldr r0, [r4, r0]
    // add r2, r1, #0
    // bl sub_02087A08
    // ldr r0, _0223FF70 ; =0x000004B8
    // mov r1, #0
    // str r1, [r5, r0]
    // add r0, #0xc5
    // bl PlaySE
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _0223FF68
    // add r0, r4, #0
    // bl ov40_0223D540
    // ldr r1, _0223FF74 ; =0x000004D4
    // ldr r1, [r4, r1]
    // lsl r1, r1, #2
    // add r2, r4, r1
    // ldr r1, _0223FF78 ; =0x00002608
    // ldr r2, [r2, r1]
    // add r1, r2, #0
    // add r1, #0xd8
    // add r2, #0xdc
    // ldr r1, [r1]
    // ldr r2, [r2]
    // bl ov39_02227720
    // cmp r0, #1
    // bne _0223FF68
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _0223FF68
    // add r0, r4, #0
    // bl ov40_0223D540
    // add r1, sp, #4
    // bl ov39_02227D44
    // cmp r0, #1
    // ldr r0, _0223FF7C ; =0x0000057D
    // bne _0223FEE0
    // mov r1, #0
    // bl StopSE
    // add r0, r4, #0
    // bl ov40_0222DFB0
    // ldr r3, [sp, #4]
    // add r0, r4, #0
    // ldr r2, [r3, #0xc]
    // ldr r3, [r3, #4]
    // mov r1, #8
    // bl ov40_02230CDC
    // ldr r0, [r4, #8]
    // mov r1, #0
    // add r0, r0, #1
    // str r0, [r4, #8]
    // ldr r0, _0223FF70 ; =0x000004B8
    // str r1, [r5, r0]
    // b _0223FF18
    // mov r1, #0
    // bl StopSE
    // mov r0, #0xff
    // str r0, [r4, #8]
    // ldr r0, _0223FF70 ; =0x000004B8
    // mov r1, #1
    // str r1, [r5, r0]
    // ldr r1, _0223FF80 ; =0x0000413C
    // add r2, r4, r1
    // add r1, r0, #0
    // add r1, #0x1c
    // ldr r1, [r4, r1]
    // add r2, r2, r1
    // ldr r1, _0223FF84 ; =0x00000878
    // str r2, [r4, r1]
    // add r2, r1, #0
    // add r2, #0x3c
    // ldr r3, [r4, r2]
    // add r2, r0, #4
    // str r3, [r5, r2]
    // add r0, r0, #4
    // add r1, #0x40
    // ldr r0, [r5, r0]
    // ldr r2, _0223FF88 ; =0x00001D4C
    // add r1, r4, r1
    // bl MI_CpuCopy8
    // mov r0, #0x6f
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl sub_020879E0
    // mov r0, #0x6f
    // lsl r0, r0, #4
    // mov r1, #0
    // ldr r0, [r4, r0]
    // add r2, r1, #0
    // bl sub_02087A08
    // b _0223FF68
    // ldr r0, _0223FF70 ; =0x000004B8
    // ldr r1, [r5, r0]
    // cmp r1, #0
    // beq _0223FF5A
    // add r0, #0xbf
    // bl PlaySE
    // add r0, r4, #0
    // bl ov40_0222DFB0
    // ldr r1, [r5, #0xc]
    // add r0, r4, #0
    // bl ov40_0222BF80
    // add r0, r4, #0
    // mov r1, #1
    // bl ov40_0222FC40
    // b _0223FF68
    // add r0, r4, #0
    // bl ov40_0222DFB0
    // add r0, r4, #0
    // mov r1, #0x1f
    // bl ov40_0222BF80
    // mov r0, #0
    // add sp, #8
    // pop {r3, r4, r5, pc}
    // nop
    // _0223FF70: .word 0x000004B8
    // _0223FF74: .word 0x000004D4
    // _0223FF78: .word 0x00002608
    // _0223FF7C: .word 0x0000057D
    // _0223FF80: .word 0x0000413C
    // _0223FF84: .word 0x00000878
    // _0223FF88: .word 0x00001D4C
    // TODO: decompile
}




void ov40_0223FF8C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // mov r1, #0x86
    // add r4, r0, #0
    // lsl r1, r1, #4
    // ldr r5, [r4, r1]
    // ldr r1, [r4, #8]
    // cmp r1, #5
    // bls _0223FFA0
    // b _022401E4
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _0223FFAC: ; jump table
    // bl ov40_02230738
    // add r0, r5, #0
    // add r1, r5, #4
    // mov r2, #0
    // bl ov40_0222D9E8
    // ldr r0, _02240200 ; =0x00004138
    // mov r2, #0
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // ble _0223FFEC
    // mov r0, #0x9a
    // lsl r0, r0, #6
    // add r7, r0, #0
    // add r3, r4, r0
    // ldr r0, _02240200 ; =0x00004138
    // add r6, r4, #0
    // sub r7, #0x78
    // str r3, [r6, r7]
    // ldr r1, [r4, r0]
    // add r2, r2, #1
    // add r3, #0xe4
    // add r6, r6, #4
    // cmp r2, r1
    // blt _0223FFDE
    // ldr r0, _02240204 ; =0x000004D4
    // mov r3, #3
    // ldr r0, [r4, r0]
    // add r1, r4, r0
    // ldr r0, _02240208 ; =0x0000413C
    // ldrb r1, [r1, r0]
    // ldr r0, _0224020C ; =0x0000079C
    // strb r1, [r5, r0]
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x6d
    // str r0, [sp, #0xc]
    // ldr r0, [r4, #0x14]
    // ldr r2, [r4, #0x24]
    // mov r1, #0x3e
    // bl GfGfxLoader_LoadCharDataFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x6d
    // str r0, [sp, #0xc]
    // ldr r0, [r4, #0x14]
    // ldr r2, [r4, #0x24]
    // mov r1, #0x3e
    // mov r3, #7
    // bl GfGfxLoader_LoadCharDataFromOpenNarc
    // add r0, r4, #0
    // mov r1, #6
    // mov r2, #7
    // bl ov40_022307DC
    // mov r0, #8
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #8
    // mov r1, #1
    // bl GfGfx_EngineBTogglePlanes
    // add r0, r4, #0
    // bl ov40_02242110
    // add r0, r4, #0
    // mov r1, #0
    // bl ov40_022420B4
    // add r0, r5, #0
    // add r1, r4, #0
    // add r0, #0x10
    // add r1, #0x14
    // mov r2, #3
    // bl ov40_0222D66C
    // add r0, r5, #0
    // add r1, r4, #0
    // add r0, #0x2c
    // add r1, #0x14
    // mov r2, #0x5e
    // bl ov40_0222D66C
    // ldr r0, [r5, #0x14]
    // mov r1, #0
    // bl ManagedSprite_SetAnim
    // ldr r0, [r5, #0x30]
    // mov r1, #3
    // bl ManagedSprite_SetAnim
    // mov r1, #0x13
    // ldr r0, _02240210 ; =0x0000FFFF
    // lsl r1, r1, #6
    // strh r0, [r5, r1]
    // mov r2, #0xff
    // add r0, r1, #2
    // strb r2, [r5, r0]
    // add r0, r1, #3
    // strb r2, [r5, r0]
    // add r0, r1, #4
    // strb r2, [r5, r0]
    // add r0, r1, #0
    // add r2, #0xf5
    // add r0, #0x54
    // str r2, [r5, r0]
    // add r0, r1, #0
    // sub r0, #0x1c
    // ldrsh r0, [r4, r0]
    // add r1, #0x50
    // str r0, [r5, r1]
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _022401FA
    // bl ov40_022408AC
    // mov r0, #0x6d
    // str r0, [sp]
    // ldr r0, _02240214 ; =ov40_022456B4
    // ldr r2, _02240218 ; =ov40_02241E40
    // mov r1, #4
    // add r3, r4, #0
    // bl TouchHitboxController_Create
    // ldr r1, _0224021C ; =0x00000608
    // ldr r2, _02240220 ; =ov40_02241ED4
    // str r0, [r5, r1]
    // mov r0, #0x6d
    // str r0, [sp]
    // ldr r0, _02240224 ; =ov40_02245674
    // mov r1, #4
    // add r3, r4, #0
    // bl TouchHitboxController_Create
    // ldr r1, _02240228 ; =0x0000060C
    // ldr r2, _0224022C ; =ov40_02241F3C
    // str r0, [r5, r1]
    // mov r0, #0x6d
    // str r0, [sp]
    // ldr r0, _02240230 ; =ov40_02245654
    // mov r1, #2
    // add r3, r4, #0
    // bl TouchHitboxController_Create
    // mov r1, #0x61
    // lsl r1, r1, #4
    // str r0, [r5, r1]
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _022401FA
    // mov r1, #1
    // bl ov40_02230964
    // mov r0, #0x43
    // lsl r0, r0, #2
    // add r0, r5, r0
    // add r1, r4, #0
    // bl ov40_02230638
    // mov r0, #0x43
    // lsl r0, r0, #2
    // add r0, r5, r0
    // bl ov40_02230410
    // add r1, r0, #0
    // add r0, r4, #0
    // mov r2, #3
    // bl ov40_022307DC
    // mov r0, #0x43
    // lsl r0, r0, #2
    // add r0, r5, r0
    // mov r1, #0
    // bl ov40_022306A0
    // add r0, r4, #0
    // mov r1, #0
    // bl ov40_02230964
    // mov r0, #8
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #8
    // mov r1, #1
    // bl GfGfx_EngineBTogglePlanes
    // mov r0, #4
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #4
    // mov r1, #0
    // bl GfGfx_EngineBTogglePlanes
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _022401FA
    // add r0, r5, #0
    // add r0, #8
    // mov r1, #0
    // bl ov40_0222DA84
    // mov r2, #0
    // add r0, r5, #0
    // add r1, r5, #4
    // add r3, r2, #0
    // bl ov40_0222DA00
    // cmp r0, #0
    // beq _0224019C
    // mov r0, #0x43
    // lsl r0, r0, #2
    // add r0, r5, r0
    // mov r1, #1
    // bl ov40_022306A0
    // add r0, r4, #0
    // bl ov40_02241AB0
    // mov r0, #4
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #4
    // mov r1, #1
    // bl GfGfx_EngineBTogglePlanes
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // ldr r0, [r4, #0x58]
    // mov r1, #3
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r5, #8]
    // ldr r0, [r4, #0x28]
    // lsl r3, r3, #0x18
    // mov r2, #0xc
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // b _022401FA
    // mov r0, #6
    // str r0, [sp]
    // mov r1, #1
    // str r1, [sp, #4]
    // mov r0, #0x6d
    // str r0, [sp, #8]
    // mov r0, #0
    // add r2, r1, #0
    // add r3, r0, #0
    // bl BeginNormalPaletteFade
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _022401FA
    // bl IsPaletteFadeFinished
    // cmp r0, #1
    // bne _022401FA
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _022401FA
    // ldr r0, _02240234 ; =0x000006D8
    // ldr r1, [r4, r0]
    // add r1, r1, #1
    // str r1, [r4, r0]
    // add r0, r4, #0
    // bl ov40_0222C4B8
    // add r0, r4, #0
    // mov r1, #0x12
    // bl ov40_0222BF80
    // mov r0, #0
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // _02240200: .word 0x00004138
    // _02240204: .word 0x000004D4
    // _02240208: .word 0x0000413C
    // _0224020C: .word 0x0000079C
    // _02240210: .word 0x0000FFFF
    // _02240214: .word ov40_022456B4
    // _02240218: .word ov40_02241E40
    // _0224021C: .word 0x00000608
    // _02240220: .word ov40_02241ED4
    // _02240224: .word ov40_02245674
    // _02240228: .word 0x0000060C
    // _0224022C: .word ov40_02241F3C
    // _02240230: .word ov40_02245654
    // _02240234: .word 0x000006D8
    // TODO: decompile
}




void ov40_02240238(void) {
    Heap_Alloc(0x6d, (0x7a << 4));
    memset(0, (0x7a << 4));
    // str r4, [r5, r0]
    BgClearTilemapBufferAndCommit(*((u32*)(r5 + 0x24)), 2);
    BgClearTilemapBufferAndCommit(*((u32*)(r5 + 0x24)), 3);
    BgClearTilemapBufferAndCommit(*((u32*)(r5 + 0x24)), 6);
    BgClearTilemapBufferAndCommit(*((u32*)(r5 + 0x24)), 7);
    ov40_0222D9E8(r4, (r4 + 4), 0);
    ov40_0222BF80(r5, 1);
}




void ov40_02240290(void) {
    // ldr r4, [r5, r1]
    // add r0, #8
    ov40_0222DA84(r4, 1, *((u32*)(r0 + 8)));
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r5 + 0x28)), 2, 0xc, ((*((u32*)(r4 + 8)) << 0x18) >> 0x18));
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r5 + 0x28)), 3, 0xc, ((*((u32*)(r4 + 8)) << 0x18) >> 0x18));
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r5 + 0x28)), 1, 2, ((*((u32*)(r4 + 8)) << 0x18) >> 0x18));
    ov40_02230964(1);
    ov40_0222D874(r5);
    ov40_02230964(r5, 0);
    SetBgPriority(0, 0);
    SetBgPriority(1, 3);
    SetBgPriority(2, 0);
    SetBgPriority(3, 2);
    SetBgPriority(4, 0);
    SetBgPriority(5, 3);
    SetBgPriority(6, 1);
    SetBgPriority(7, 2);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    // add r1, #0xc
    // ldr r1, [r5, r1]
    ov40_0222FB90((*((u32*)(r5 + 8)) + 1), 0);
    // ldr r0, [r5, r0]
    sub_020879E0((0x6f << 4), 0);
    ov40_0222C4DC(r5);
    ov40_0222BF80(r5, 6);
    ov40_0222BF80(r5, 2);
    ov40_0222FB90(0);
    // ldr r0, [r5, r0]
    sub_020879E0((0x6f << 4), 0);
    ov40_0222C4DC(r5);
    ov40_0222BF80(r5, 0x1e);
    ov40_0222BF80(r5, 2);
    ov40_0222C4DC();
    ov40_0222BF80(r5, 0x13);
    ov40_0222BF80(r5, 2);
    // ldr r0, [r5, r0]
    sub_020879E0((0x6f << 4), 0);
    ov40_0222FB90(0);
    // ldr r0, [r5, r0]
    sub_020879E0((0x6f << 4), 0);
    ov40_0222BF80(r5, 2);
}




void ov40_02240418(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x18
    // mov r1, #0x86
    // add r5, r0, #0
    // lsl r1, r1, #4
    // mov r2, #0x75
    // ldr r6, [r5, r1]
    // lsl r2, r2, #2
    // add r4, r6, r2
    // ldr r2, [r5, #8]
    // cmp r2, #0
    // beq _0224043A
    // cmp r2, #1
    // beq _022404AA
    // cmp r2, #2
    // beq _022404CE
    // b _02240510
    // mov r0, #2
    // str r0, [sp, #0xc]
    // mov r0, #5
    // sub r1, #0x30
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // ldr r0, [r5, r1]
    // bl Save_PlayerData_GetOptionsAddr
    // add r3, r0, #0
    // mov r0, #0x6d
    // mov r1, #0xc
    // add r2, sp, #0xc
    // bl ov40_02242FAC
    // ldr r1, _0224051C ; =0x000004AC
    // mov r2, #0x22
    // str r0, [r6, r1]
    // ldr r0, [r5, #0x14]
    // lsl r2, r2, #4
    // str r0, [r4, r2]
    // ldr r3, [r5, #0x18]
    // add r0, r2, #4
    // str r3, [r4, r0]
    // add r0, r2, #0
    // ldr r3, [r5, #0x1c]
    // add r0, #8
    // str r3, [r4, r0]
    // add r0, r2, #0
    // ldr r3, [r5, #0x24]
    // add r0, #0xc
    // str r3, [r4, r0]
    // add r0, r2, #0
    // ldr r3, [r5, #0x28]
    // add r0, #0x10
    // str r3, [r4, r0]
    // add r0, r2, #0
    // add r0, #0x88
    // ldr r3, [r6, r1]
    // add r7, r4, r0
    // ldmia r3!, {r0, r1}
    // stmia r7!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r7!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r7!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r7!, {r0, r1}
    // add r2, #0xb4
    // str r5, [r4, r2]
    // add r0, r5, #0
    // bl ov40_02241FD0
    // ldr r0, [r5, #8]
    // add r0, r0, #1
    // str r0, [r5, #8]
    // mov r2, #8
    // str r2, [sp]
    // mov r3, #0x12
    // str r3, [sp, #4]
    // mov r0, #0
    // str r0, [sp, #8]
    // add r0, r6, #0
    // add r1, r6, #4
    // bl ov40_0222D910
    // mov r0, #8
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // ldr r0, [r5, #8]
    // add r0, r0, #1
    // str r0, [r5, #8]
    // b _02240516
    // add r0, r6, #0
    // add r0, #8
    // mov r1, #0
    // bl ov40_0222DA84
    // mov r2, #0
    // add r0, r6, #0
    // add r1, r6, #4
    // add r3, r2, #0
    // bl ov40_0222DA00
    // cmp r0, #0
    // beq _022404F6
    // add r0, r5, #0
    // mov r1, #0x70
    // bl ov40_0222DD9C
    // ldr r0, [r5, #8]
    // add r0, r0, #1
    // str r0, [r5, #8]
    // ldr r0, [r5, #0x58]
    // mov r1, #2
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r6, #8]
    // ldr r0, [r5, #0x28]
    // lsl r3, r3, #0x18
    // mov r2, #0xc
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // b _02240516
    // mov r1, #3
    // bl ov40_0222BF80
    // mov r0, #0
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // _0224051C: .word 0x000004AC
    // TODO: decompile
}




void ov40_02240520(void) {
    // ldr r1, [r4, r0]
    // add r0, r1, r0
    ov40_02243538((0x75 << 2));
    ov40_0222BF80(r4, 4);
}




void ov40_02240544(void) {
    // push {r4, r5, lr}
    // sub sp, #0xc
    // mov r1, #0x86
    // add r5, r0, #0
    // lsl r1, r1, #4
    // ldr r4, [r5, r1]
    // mov r1, #0x75
    // lsl r1, r1, #2
    // ldr r2, [r5, #8]
    // add r3, r4, r1
    // cmp r2, #0
    // beq _02240562
    // cmp r2, #1
    // beq _02240588
    // b _022405D0
    // bl ov40_0222DE40
    // mov r2, #8
    // str r2, [sp]
    // mov r3, #0x12
    // str r3, [sp, #4]
    // mov r0, #0
    // str r0, [sp, #8]
    // add r0, r4, #0
    // add r1, r4, #4
    // bl ov40_0222D980
    // ldr r0, _022405EC ; =0x000004AC
    // ldr r0, [r4, r0]
    // bl ov40_02242FF8
    // ldr r0, [r5, #8]
    // add r0, r0, #1
    // str r0, [r5, #8]
    // add r0, r4, #0
    // add r0, #8
    // mov r1, #1
    // bl ov40_0222DA84
    // add r0, r4, #0
    // add r1, r4, #4
    // mov r2, #1
    // mov r3, #0
    // bl ov40_0222DA00
    // cmp r0, #0
    // beq _022405B6
    // mov r0, #8
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // add r0, r5, #0
    // bl ov40_02242084
    // ldr r0, [r5, #8]
    // add r0, r0, #1
    // str r0, [r5, #8]
    // ldr r0, [r5, #0x58]
    // mov r1, #2
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r4, #8]
    // ldr r0, [r5, #0x28]
    // lsl r3, r3, #0x18
    // mov r2, #0xc
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // b _022405E6
    // add r1, #0xf4
    // ldr r1, [r3, r1]
    // cmp r1, #0
    // beq _022405E0
    // mov r1, #6
    // bl ov40_0222BF80
    // b _022405E6
    // mov r1, #5
    // bl ov40_0222BF80
    // mov r0, #0
    // add sp, #0xc
    // pop {r4, r5, pc}
    // _022405EC: .word 0x000004AC
    // TODO: decompile
}




void ov40_022405F0(void) {
    // ldr r4, [r5, r0]
    // add r4, #8
    ov40_0222DAA8(r4);
    ov40_02230964(r5, 1);
    ov40_0222D88C(r5);
    ov40_02230964(r5, 0);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    // add r0, #8
    ov40_0222DA84(r4, 0);
    ov40_0222DD08(r5);
    // add r0, #8
    ov40_0222DAA8(r4);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r5 + 0x28)), 2, 0xc, 0x10);
    ov40_0222BF64(r5, 1, 1, *((u32*)(r5 + 0x10)));
    ov40_0222BF80(r5, 5);
    BgClearTilemapBufferAndCommit(*((u32*)(r5 + 0x24)), 2);
    BgClearTilemapBufferAndCommit(*((u32*)(r5 + 0x24)), 6);
    BgClearTilemapBufferAndCommit(*((u32*)(r5 + 0x24)), 3);
    BgClearTilemapBufferAndCommit(*((u32*)(r5 + 0x24)), 7);
    Heap_Free(r4);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r5 + 0x28)), 3, 0xc, ((*((u32*)(r4 + 8)) << 0x18) >> 0x18));
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r5 + 0x28)), 1, 2, ((*((u32*)(r4 + 8)) << 0x18) >> 0x18));
}




void ov40_022406C8(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #4
    // mov r1, #0x86
    // add r4, r0, #0
    // lsl r1, r1, #4
    // ldr r5, [r4, r1]
    // mov r1, #0x75
    // lsl r1, r1, #2
    // add r6, r5, r1
    // ldr r1, [r4, #8]
    // cmp r1, #4
    // bls _022406E2
    // b _0224081A
    // add r2, r1, r1
    // add r2, pc
    // ldrh r2, [r2, #6]
    // lsl r2, r2, #0x10
    // asr r2, r2, #0x10
    // add pc, r2
    // _022406EE: ; jump table
    // mov r1, #0x75
    // bl ov40_0222DD9C
    // ldr r1, _0224083C ; =0x000006F4
    // add r0, r4, #0
    // ldr r1, [r4, r1]
    // mov r2, #0x80
    // mov r3, #0x60
    // bl ov40_0223077C
    // ldr r0, _0224083C ; =0x000006F4
    // mov r1, #1
    // ldr r0, [r4, r0]
    // bl sub_020879E0
    // ldr r0, _0224083C ; =0x000006F4
    // mov r1, #0x18
    // ldr r0, [r4, r0]
    // add r2, r1, #0
    // bl sub_02087A08
    // ldr r0, _02240840 ; =0x000004B8
    // mov r1, #0
    // str r1, [r5, r0]
    // add r0, #0xc5
    // bl PlaySE
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _02240834
    // bl ov40_0223D5CC
    // cmp r0, #0
    // bne _02240744
    // add sp, #4
    // mov r0, #0
    // pop {r3, r4, r5, r6, pc}
    // add r0, r4, #0
    // bl ov40_0223D540
    // mov r2, #0xb3
    // lsl r2, r2, #2
    // ldr r1, [r6, r2]
    // add r2, r2, #4
    // ldr r2, [r6, r2]
    // bl ov39_02227720
    // cmp r0, #1
    // bne _02240834
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _02240834
    // bl ov40_0223D5CC
    // cmp r0, #0
    // bne _02240772
    // add sp, #4
    // mov r0, #0
    // pop {r3, r4, r5, r6, pc}
    // add r0, r4, #0
    // bl ov40_0222DE40
    // add r0, r4, #0
    // bl ov40_0223D540
    // add r1, sp, #0
    // bl ov39_02227D44
    // cmp r0, #1
    // ldr r0, _02240844 ; =0x0000057D
    // bne _022407BA
    // mov r1, #0
    // bl StopSE
    // ldr r0, _02240848 ; =0x04000050
    // mov r1, #0
    // strh r1, [r0]
    // ldr r3, [sp]
    // add r0, r4, #0
    // ldr r2, [r3, #0xc]
    // ldr r3, [r3, #4]
    // mov r1, #8
    // bl ov40_02230CDC
    // add r0, r4, #0
    // mov r1, #0
    // bl ov40_0222FB90
    // ldr r0, [r4, #8]
    // mov r1, #0
    // add r0, r0, #1
    // str r0, [r4, #8]
    // ldr r0, _02240840 ; =0x000004B8
    // str r1, [r5, r0]
    // b _022407EE
    // mov r1, #0
    // bl StopSE
    // mov r0, #0xff
    // str r0, [r4, #8]
    // ldr r0, _02240840 ; =0x000004B8
    // mov r1, #1
    // str r1, [r5, r0]
    // add r0, #0xbf
    // bl PlaySE
    // ldr r0, _0224084C ; =0x00002604
    // ldr r1, _02240850 ; =0x00000878
    // add r0, r4, r0
    // str r0, [r4, r1]
    // add r0, r1, #0
    // add r0, #0x3c
    // ldr r2, [r4, r0]
    // ldr r0, _02240854 ; =0x000004BC
    // add r1, #0x40
    // str r2, [r5, r0]
    // ldr r0, [r5, r0]
    // ldr r2, _02240858 ; =0x00001D4C
    // add r1, r4, r1
    // bl MI_CpuCopy8
    // ldr r0, _0224083C ; =0x000006F4
    // mov r1, #0
    // ldr r0, [r4, r0]
    // bl sub_020879E0
    // ldr r0, _0224083C ; =0x000006F4
    // mov r1, #0
    // ldr r0, [r4, r0]
    // add r2, r1, #0
    // bl sub_02087A08
    // b _02240834
    // mov r1, #1
    // bl ov40_0222FB90
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _02240834
    // add r0, r1, #1
    // str r0, [r4, #8]
    // b _02240834
    // ldr r0, _02240840 ; =0x000004B8
    // ldr r0, [r5, r0]
    // cmp r0, #0
    // beq _0224082C
    // add r0, r4, #0
    // mov r1, #7
    // bl ov40_0222BF80
    // b _02240834
    // add r0, r4, #0
    // mov r1, #5
    // bl ov40_0222BF80
    // mov r0, #0
    // add sp, #4
    // pop {r3, r4, r5, r6, pc}
    // nop
    // _0224083C: .word 0x000006F4
    // _02240840: .word 0x000004B8
    // _02240844: .word 0x0000057D
    // _02240848: .word 0x04000050
    // _0224084C: .word 0x00002604
    // _02240850: .word 0x00000878
    // _02240854: .word 0x000004BC
    // _02240858: .word 0x00001D4C
    // TODO: decompile
}




void ov40_0224085C(void) {
    // push {r4, lr}
    // mov r1, #0x86
    // lsl r1, r1, #4
    // ldr r4, [r0, r1]
    // mov r0, #0x6d
    // bl sub_020314A4
    // add r1, r4, #0
    // add r1, #0x80
    // str r0, [r1]
    // ldr r0, _022408A8 ; =0x000004BC
    // add r1, r4, #0
    // add r1, #0x80
    // ldr r0, [r4, r0]
    // ldr r1, [r1]
    // bl ov39_022271C0
    // add r0, r4, #0
    // add r0, #0x80
    // ldr r1, [r0]
    // mov r0, #0x43
    // lsl r0, r0, #2
    // str r1, [r4, r0]
    // mov r0, #0x6d
    // bl sub_02030920
    // mov r1, #0x11
    // lsl r1, r1, #4
    // str r0, [r4, r1]
    // ldr r0, _022408A8 ; =0x000004BC
    // ldr r1, [r4, r1]
    // ldr r0, [r4, r0]
    // mov r2, #0x64
    // add r0, #0x80
    // bl MI_CpuCopy8
    // pop {r4, pc}
    // nop
    // _022408A8: .word 0x000004BC
    // TODO: decompile
}




void ov40_022408AC(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // mov r0, #0x86
    // lsl r0, r0, #4
    // ldr r4, [r5, r0]
    // mov r0, #0x6d
    // bl sub_020314A4
    // add r1, r4, #0
    // add r1, #0x80
    // str r0, [r1]
    // ldr r0, _02240908 ; =0x000004D4
    // ldr r0, [r5, r0]
    // lsl r0, r0, #2
    // add r1, r5, r0
    // ldr r0, _0224090C ; =0x00002608
    // ldr r0, [r1, r0]
    // add r1, r4, #0
    // add r1, #0x80
    // ldr r1, [r1]
    // bl ov39_022271C0
    // add r0, r4, #0
    // add r0, #0x80
    // ldr r1, [r0]
    // mov r0, #0x43
    // lsl r0, r0, #2
    // str r1, [r4, r0]
    // mov r0, #0x6d
    // bl sub_02030920
    // mov r1, #0x11
    // lsl r1, r1, #4
    // str r0, [r4, r1]
    // ldr r0, _02240908 ; =0x000004D4
    // ldr r1, [r4, r1]
    // ldr r0, [r5, r0]
    // lsl r0, r0, #2
    // add r2, r5, r0
    // ldr r0, _0224090C ; =0x00002608
    // ldr r0, [r2, r0]
    // mov r2, #0x64
    // add r0, #0x80
    // bl MI_CpuCopy8
    // pop {r3, r4, r5, pc}
    // _02240908: .word 0x000004D4
    // _0224090C: .word 0x00002608
    // TODO: decompile
}




void ov40_02240910(void) {
    // ldr r4, [r0, r1]
    // ldr r0, [r4, r0]
    sub_02030938((0x11 << 4), (0x86 << 4));
    // add r4, #0x80
    sub_020314BC(*((u32*)r4));
}




void ov40_0224092C(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x10
    // mov r1, #0x86
    // add r4, r0, #0
    // lsl r1, r1, #4
    // ldr r5, [r4, r1]
    // ldr r1, [r4, #8]
    // cmp r1, #3
    // bls _02240940
    // b _02240B10
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _0224094C: ; jump table
    // mov r1, #0
    // bl ov40_0222FB90
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _02240B18
    // bl ov40_0222FBB4
    // cmp r0, #0
    // bne _0224096C
    // b _02240B18
    // mov r2, #8
    // str r2, [sp]
    // mov r3, #0x12
    // str r3, [sp, #4]
    // mov r0, #0
    // str r0, [sp, #8]
    // add r0, r5, #0
    // add r1, r5, #4
    // bl ov40_0222D980
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x6d
    // str r0, [sp, #0xc]
    // ldr r0, [r4, #0x14]
    // ldr r2, [r4, #0x24]
    // mov r1, #0x3e
    // mov r3, #3
    // bl GfGfxLoader_LoadCharDataFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x6d
    // str r0, [sp, #0xc]
    // ldr r0, [r4, #0x14]
    // ldr r2, [r4, #0x24]
    // mov r1, #0x3e
    // mov r3, #7
    // bl GfGfxLoader_LoadCharDataFromOpenNarc
    // add r0, r4, #0
    // mov r1, #6
    // mov r2, #7
    // bl ov40_022307DC
    // mov r0, #0
    // mov r1, #1
    // bl SetBgPriority
    // mov r0, #1
    // mov r1, #3
    // bl SetBgPriority
    // mov r0, #2
    // mov r1, #0
    // bl SetBgPriority
    // mov r0, #3
    // mov r1, #1
    // bl SetBgPriority
    // mov r0, #4
    // mov r1, #1
    // bl SetBgPriority
    // mov r0, #5
    // mov r1, #3
    // bl SetBgPriority
    // mov r0, #6
    // mov r1, #0
    // bl SetBgPriority
    // mov r0, #7
    // mov r1, #2
    // bl SetBgPriority
    // add r0, r4, #0
    // bl ov40_0224085C
    // add r0, r4, #0
    // bl ov40_02242110
    // mov r0, #0x6d
    // str r0, [sp]
    // ldr r0, _02240B20 ; =ov40_022456B4
    // ldr r2, _02240B24 ; =ov40_02241C10
    // mov r1, #4
    // add r3, r4, #0
    // bl TouchHitboxController_Create
    // ldr r1, _02240B28 ; =0x00000608
    // ldr r2, _02240B2C ; =ov40_02241C70
    // str r0, [r5, r1]
    // mov r0, #0x6d
    // str r0, [sp]
    // ldr r0, _02240B30 ; =ov40_02245674
    // mov r1, #4
    // add r3, r4, #0
    // bl TouchHitboxController_Create
    // ldr r1, _02240B34 ; =0x0000060C
    // ldr r2, _02240B38 ; =ov40_02241CD8
    // str r0, [r5, r1]
    // mov r0, #0x6d
    // str r0, [sp]
    // ldr r0, _02240B3C ; =ov40_02245654
    // mov r1, #2
    // add r3, r4, #0
    // bl TouchHitboxController_Create
    // mov r1, #0x61
    // lsl r1, r1, #4
    // str r0, [r5, r1]
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _02240B18
    // mov r1, #1
    // bl ov40_02230964
    // mov r0, #0x73
    // mov r1, #0
    // lsl r0, r0, #2
    // str r1, [r5, r0]
    // sub r0, #0xc0
    // add r0, r5, r0
    // add r1, r4, #0
    // bl ov40_02230638
    // mov r0, #0x43
    // lsl r0, r0, #2
    // add r0, r5, r0
    // bl ov40_02230410
    // add r1, r0, #0
    // add r0, r4, #0
    // mov r2, #3
    // bl ov40_022307DC
    // mov r0, #0x43
    // lsl r0, r0, #2
    // add r0, r5, r0
    // mov r1, #0
    // bl ov40_022306A0
    // add r0, r4, #0
    // mov r1, #0
    // bl ov40_02230964
    // mov r0, #8
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #8
    // mov r1, #1
    // bl GfGfx_EngineBTogglePlanes
    // mov r0, #4
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #4
    // mov r1, #0
    // bl GfGfx_EngineBTogglePlanes
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _02240B18
    // add r0, r5, #0
    // add r0, #8
    // mov r1, #0
    // bl ov40_0222DA84
    // mov r2, #0
    // add r0, r5, #0
    // add r1, r5, #4
    // add r3, r2, #0
    // bl ov40_0222DA00
    // cmp r0, #0
    // beq _02240AF6
    // mov r0, #0x43
    // lsl r0, r0, #2
    // add r0, r5, r0
    // mov r1, #1
    // bl ov40_022306A0
    // add r0, r4, #0
    // bl ov40_02241AB0
    // mov r0, #4
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #4
    // mov r1, #1
    // bl GfGfx_EngineBTogglePlanes
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // ldr r0, [r4, #0x58]
    // mov r1, #3
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r5, #8]
    // ldr r0, [r4, #0x28]
    // lsl r3, r3, #0x18
    // mov r2, #0xc
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // b _02240B18
    // add r0, r4, #0
    // mov r1, #8
    // bl ov40_0222BF80
    // mov r0, #0
    // add sp, #0x10
    // pop {r3, r4, r5, pc}
    // nop
    // _02240B20: .word ov40_022456B4
    // _02240B24: .word ov40_02241C10
    // _02240B28: .word 0x00000608
    // _02240B2C: .word ov40_02241C70
    // _02240B30: .word ov40_02245674
    // _02240B34: .word 0x0000060C
    // _02240B38: .word ov40_02241CD8
    // _02240B3C: .word ov40_02245654
    // TODO: decompile
}




void ov40_02240B40(void) {
}




void ov40_02240B58(void) {
    ov40_0224222C();
    ov40_0222BF80(r4, 8);
}




void ov40_02240B70(void) {
    // ldr r4, [r0, r1]
    ov40_02242CFC((0x86 << 4));
    Heap_Free(r4);
}




void ov40_02240B90(void) {
    // push {r3, r4, r5, lr}
    // mov r1, #0x86
    // add r4, r0, #0
    // lsl r1, r1, #4
    // ldr r5, [r4, r1]
    // ldr r1, [r4, #8]
    // cmp r1, #3
    // bls _02240BA2
    // b _02240D42
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _02240BAE: ; jump table
    // ldr r0, _02240D48 ; =0x00000608
    // ldr r0, [r5, r0]
    // bl TouchHitboxController_Destroy
    // ldr r0, _02240D4C ; =0x0000060C
    // ldr r0, [r5, r0]
    // bl TouchHitboxController_Destroy
    // mov r0, #0x61
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // bl TouchHitboxController_Destroy
    // mov r0, #4
    // mov r1, #0
    // bl GfGfx_EngineBTogglePlanes
    // mov r0, #4
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // add r0, r4, #0
    // bl ov40_02240910
    // add r0, r4, #0
    // mov r1, #1
    // bl ov40_02230964
    // mov r0, #0x73
    // lsl r0, r0, #2
    // ldr r1, [r5, r0]
    // cmp r1, #0
    // bne _02240C04
    // sub r0, #0xc0
    // add r0, r5, r0
    // add r1, r4, #0
    // bl ov40_0223064C
    // b _02240C0E
    // add r5, #0x80
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov40_0222E7B8
    // add r0, r4, #0
    // mov r1, #0
    // bl ov40_02230964
    // add r0, r4, #0
    // bl ov40_02241A34
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _02240D42
    // add r0, r5, #0
    // add r0, #8
    // mov r1, #1
    // bl ov40_0222DA84
    // add r0, r5, #0
    // add r1, r5, #4
    // mov r2, #1
    // mov r3, #0
    // bl ov40_0222DA00
    // cmp r0, #0
    // beq _02240C4A
    // add r0, r4, #0
    // bl ov40_022421FC
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // ldr r0, [r4, #0x58]
    // mov r1, #3
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r5, #8]
    // ldr r0, [r4, #0x28]
    // lsl r3, r3, #0x18
    // mov r2, #0xc
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // b _02240D42
    // add r5, #8
    // add r0, r5, #0
    // bl ov40_0222DAA8
    // add r0, r4, #0
    // mov r1, #1
    // bl ov40_02230964
    // add r0, r4, #0
    // bl ov40_0222D88C
    // add r0, r4, #0
    // mov r1, #0
    // bl ov40_02230964
    // add r0, r4, #0
    // mov r1, #1
    // bl ov40_0222FB90
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _02240D42
    // bl ov40_0222FBB4
    // cmp r0, #0
    // beq _02240D42
    // add r0, r5, #0
    // add r0, #8
    // mov r1, #0
    // bl ov40_0222DA84
    // cmp r0, #0
    // beq _02240D12
    // add r0, r4, #0
    // bl ov40_0222DD08
    // add r0, r5, #0
    // add r0, #8
    // bl ov40_0222DAA8
    // ldr r0, [r4, #0x58]
    // mov r1, #2
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r0, [r4, #0x28]
    // mov r2, #0xc
    // mov r3, #0x10
    // bl PaletteData_BlendPalettes
    // mov r1, #1
    // ldr r3, [r4, #0x10]
    // add r0, r4, #0
    // add r2, r1, #0
    // bl ov40_0222BF64
    // add r0, r4, #0
    // mov r1, #5
    // bl ov40_0222BF80
    // add r0, r5, #0
    // bl Heap_Free
    // ldr r0, [r4, #0x24]
    // mov r1, #2
    // bl BgClearTilemapBufferAndCommit
    // ldr r0, [r4, #0x24]
    // mov r1, #6
    // bl BgClearTilemapBufferAndCommit
    // ldr r0, [r4, #0x24]
    // mov r1, #3
    // bl BgClearTilemapBufferAndCommit
    // ldr r0, [r4, #0x24]
    // mov r1, #7
    // bl BgClearTilemapBufferAndCommit
    // bl sub_0202FC48
    // cmp r0, #1
    // bne _02240D42
    // bl sub_0202FC24
    // b _02240D42
    // ldr r0, [r4, #0x58]
    // mov r1, #1
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r5, #8]
    // ldr r0, [r4, #0x28]
    // lsl r3, r3, #0x18
    // mov r2, #2
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // ldr r0, [r4, #0x58]
    // mov r1, #3
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r5, #8]
    // ldr r0, [r4, #0x28]
    // lsl r3, r3, #0x18
    // mov r2, #0xc
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // nop
    // _02240D48: .word 0x00000608
    // _02240D4C: .word 0x0000060C
    // TODO: decompile
}




void ov40_02240D50(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x28
    // add r5, r1, #0
    // ldr r1, _02240E20 ; =0x0000088C
    // lsl r6, r2, #2
    // add r4, r5, r1
    // ldr r1, [r4, r6]
    // str r0, [sp, #0x10]
    // ldr r0, [r5, #0x48]
    // cmp r1, #0
    // bne _02240D70
    // mov r1, #8
    // bl NewString_ReadMsgData
    // add r4, r0, #0
    // b _02240DCE
    // mov r0, #0x6d
    // bl ov40_0222DAB0
    // add r7, r0, #0
    // ldr r0, [r5, #0x48]
    // mov r1, #7
    // bl NewString_ReadMsgData
    // str r0, [sp, #0x14]
    // ldr r0, [r4, r6]
    // mov r1, #0x6d
    // bl sub_020315B8
    // add r6, r0, #0
    // add r0, r5, #0
    // add r1, r6, #0
    // bl ov40_02230DCC
    // mov r0, #0xff
    // mov r1, #0x6d
    // bl String_New
    // add r4, r0, #0
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #2
    // mov r1, #0
    // str r0, [sp, #4]
    // add r0, r7, #0
    // add r2, r6, #0
    // add r3, r1, #0
    // bl BufferString
    // ldr r2, [sp, #0x14]
    // add r0, r7, #0
    // add r1, r4, #0
    // bl StringExpandPlaceholders
    // ldr r0, [sp, #0x14]
    // bl String_Delete
    // add r0, r6, #0
    // bl String_Delete
    // add r0, r7, #0
    // bl MessageFormat_Delete
    // add r0, sp, #0x18
    // bl InitWindow
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [r5, #0x24]
    // add r1, sp, #0x18
    // mov r2, #0x14
    // mov r3, #2
    // bl AddTextWindowTopLeftCorner
    // mov r1, #0
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _02240E24 ; =0x000E0D00
    // add r2, r4, #0
    // str r0, [sp, #8]
    // add r0, sp, #0x18
    // add r3, r1, #0
    // str r1, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // ldr r0, [sp, #0x10]
    // ldr r1, [sp, #0x10]
    // ldr r0, [r0, #8]
    // ldr r1, [r1, #0xc]
    // add r2, sp, #0x18
    // mov r3, #0x6d
    // bl TextOBJ_CopyFromBGWindow
    // add r0, r4, #0
    // bl String_Delete
    // add r0, sp, #0x18
    // bl RemoveWindow
    // add sp, #0x28
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02240E20: .word 0x0000088C
    // _02240E24: .word 0x000E0D00
    // TODO: decompile
}




void ov40_02240E28(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x1c
    // add r4, r1, #0
    // ldr r1, _02240F1C ; =0x000008A4
    // add r5, r0, #0
    // sub r1, #0x44
    // ldr r6, [r5, r1]
    // mov r1, #2
    // bl ov40_0222C6C8
    // mov r0, #4
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // ldr r0, _02240F1C ; =0x000008A4
    // add r0, r5, r0
    // bl InitWindow
    // mov r0, #0x13
    // str r0, [sp]
    // mov r0, #0x1e
    // str r0, [sp, #4]
    // mov r0, #4
    // str r0, [sp, #8]
    // mov r0, #0xe
    // str r0, [sp, #0xc]
    // mov r0, #0x4b
    // lsl r0, r0, #2
    // ldr r1, _02240F1C ; =0x000008A4
    // str r0, [sp, #0x10]
    // ldr r0, [r5, #0x24]
    // add r1, r5, r1
    // mov r2, #2
    // mov r3, #1
    // bl AddWindowParameterized
    // cmp r4, #0x64
    // bne _02240EDA
    // add r6, #0x80
    // ldr r0, [r6]
    // str r0, [sp, #0x14]
    // mov r0, #0x6d
    // bl ov40_0222DAB0
    // add r7, r0, #0
    // mov r0, #0xff
    // mov r1, #0x6d
    // bl String_New
    // add r6, r0, #0
    // ldr r0, [sp, #0x14]
    // mov r1, #0x6d
    // bl sub_020315B8
    // str r0, [sp, #0x18]
    // ldr r1, [sp, #0x18]
    // add r0, r5, #0
    // bl ov40_02230DCC
    // ldr r0, [r5, #0x48]
    // add r1, r4, #0
    // bl NewString_ReadMsgData
    // add r4, r0, #0
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #2
    // mov r1, #0
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x18]
    // add r0, r7, #0
    // add r3, r1, #0
    // bl BufferString
    // add r0, r7, #0
    // add r1, r6, #0
    // add r2, r4, #0
    // bl StringExpandPlaceholders
    // ldr r0, [sp, #0x18]
    // bl String_Delete
    // add r0, r4, #0
    // bl String_Delete
    // add r0, r7, #0
    // bl MessageFormat_Delete
    // b _02240EE4
    // ldr r0, [r5, #0x48]
    // add r1, r4, #0
    // bl NewString_ReadMsgData
    // add r6, r0, #0
    // ldr r0, _02240F1C ; =0x000008A4
    // mov r1, #0xcc
    // add r0, r5, r0
    // bl FillWindowPixelBuffer
    // mov r1, #0
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _02240F20 ; =0x000F0D0C
    // add r2, r6, #0
    // str r0, [sp, #8]
    // ldr r0, _02240F1C ; =0x000008A4
    // add r3, r1, #0
    // add r0, r5, r0
    // str r1, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // ldr r0, _02240F1C ; =0x000008A4
    // add r0, r5, r0
    // bl ScheduleWindowCopyToVram
    // add r0, r6, #0
    // bl String_Delete
    // add sp, #0x1c
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _02240F1C: .word 0x000008A4
    // _02240F20: .word 0x000F0D0C
    // TODO: decompile
}




void ov40_02240F24(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x20
    // add r5, r0, #0
    // ldr r0, _0224104C ; =0x000008A4
    // add r4, r1, #0
    // sub r0, #0x44
    // ldr r0, [r5, r0]
    // cmp r4, #0x64
    // bne _02240F9C
    // add r0, #0x80
    // ldr r0, [r0]
    // str r0, [sp, #0x14]
    // mov r0, #0x6d
    // bl ov40_0222DAB0
    // add r7, r0, #0
    // mov r0, #0xff
    // mov r1, #0x6d
    // bl String_New
    // add r6, r0, #0
    // ldr r0, [sp, #0x14]
    // mov r1, #0x6d
    // bl sub_020315B8
    // str r0, [sp, #0x18]
    // ldr r1, [sp, #0x18]
    // add r0, r5, #0
    // bl ov40_02230DCC
    // ldr r0, [r5, #0x48]
    // add r1, r4, #0
    // bl NewString_ReadMsgData
    // add r4, r0, #0
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #2
    // mov r1, #0
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x18]
    // add r0, r7, #0
    // add r3, r1, #0
    // bl BufferString
    // add r0, r7, #0
    // add r1, r6, #0
    // add r2, r4, #0
    // bl StringExpandPlaceholders
    // ldr r0, [sp, #0x18]
    // bl String_Delete
    // add r0, r4, #0
    // bl String_Delete
    // add r0, r7, #0
    // bl MessageFormat_Delete
    // b _02241014
    // cmp r4, #0x66
    // bne _0224100C
    // lsl r0, r2, #2
    // add r1, r5, r0
    // ldr r0, _0224104C ; =0x000008A4
    // sub r0, #0x18
    // ldr r0, [r1, r0]
    // str r0, [sp, #0x10]
    // mov r0, #0x6d
    // bl ov40_0222DAB0
    // add r7, r0, #0
    // mov r0, #0xff
    // mov r1, #0x6d
    // bl String_New
    // add r6, r0, #0
    // ldr r0, [sp, #0x10]
    // mov r1, #0x6d
    // bl sub_020315B8
    // str r0, [sp, #0x1c]
    // ldr r1, [sp, #0x1c]
    // add r0, r5, #0
    // bl ov40_02230DCC
    // ldr r0, [r5, #0x48]
    // add r1, r4, #0
    // bl NewString_ReadMsgData
    // add r4, r0, #0
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #2
    // mov r1, #0
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x1c]
    // add r0, r7, #0
    // add r3, r1, #0
    // bl BufferString
    // add r0, r7, #0
    // add r1, r6, #0
    // add r2, r4, #0
    // bl StringExpandPlaceholders
    // ldr r0, [sp, #0x1c]
    // bl String_Delete
    // add r0, r4, #0
    // bl String_Delete
    // add r0, r7, #0
    // bl MessageFormat_Delete
    // b _02241014
    // ldr r0, [r5, #0x48]
    // bl NewString_ReadMsgData
    // add r6, r0, #0
    // ldr r0, _0224104C ; =0x000008A4
    // mov r1, #0xcc
    // add r0, r5, r0
    // bl FillWindowPixelBuffer
    // mov r1, #0
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _02241050 ; =0x000F0D0C
    // add r2, r6, #0
    // str r0, [sp, #8]
    // ldr r0, _0224104C ; =0x000008A4
    // add r3, r1, #0
    // add r0, r5, r0
    // str r1, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // ldr r0, _0224104C ; =0x000008A4
    // add r0, r5, r0
    // bl ScheduleWindowCopyToVram
    // add r0, r6, #0
    // bl String_Delete
    // add sp, #0x20
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0224104C: .word 0x000008A4
    // _02241050: .word 0x000F0D0C
    // TODO: decompile
}




void ov40_02241054(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x30
    // mov r1, #0x86
    // lsl r1, r1, #4
    // ldr r3, _0224110C ; =ov40_02245684
    // ldr r4, [r0, r1]
    // str r0, [sp]
    // add r2, sp, #0x20
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldr r3, _02241110 ; =ov40_02245694
    // add r2, sp, #0x10
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldr r0, [sp]
    // mov r1, #2
    // bl ov40_0222D78C
    // add r0, sp, #0x20
    // str r0, [sp, #8]
    // mov r0, #0x69
    // str r0, [sp, #4]
    // ldr r0, [sp]
    // add r5, r4, #0
    // str r0, [sp, #0xc]
    // add r0, #0x14
    // mov r6, #0
    // add r5, #0x10
    // add r7, sp, #0x10
    // str r0, [sp, #0xc]
    // ldr r0, [sp]
    // mov r1, #2
    // bl ov40_0222D800
    // str r0, [r4, #0x14]
    // ldr r1, [sp, #0xc]
    // add r0, r5, #0
    // mov r2, #2
    // bl ov40_0222D5AC
    // ldr r2, [sp, #8]
    // ldr r1, [sp, #0xc]
    // ldr r2, [r2]
    // add r0, r5, #0
    // bl ov40_0222D66C
    // cmp r6, #3
    // beq _022410C6
    // ldr r1, [sp]
    // add r0, r5, #0
    // add r2, r6, #1
    // bl ov40_02240D50
    // ldr r2, [sp, #4]
    // ldr r0, [r4, #0x14]
    // lsl r2, r2, #0x10
    // mov r1, #0x32
    // asr r2, r2, #0x10
    // bl ManagedSprite_SetPositionXY
    // ldr r0, [r4, #0x14]
    // ldr r1, [r7]
    // bl ManagedSprite_SetAnim
    // mov r1, #0x24
    // add r2, r1, #0
    // ldr r0, [r4, #0x18]
    // sub r2, #0x2c
    // bl sub_020136B4
    // ldr r0, [r4, #0x18]
    // mov r1, #1
    // bl TextOBJ_SetSpritesDrawFlag
    // ldr r0, [sp, #8]
    // add r6, r6, #1
    // add r0, r0, #4
    // str r0, [sp, #8]
    // ldr r0, [sp, #4]
    // add r4, #0x1c
    // add r0, #0x24
    // add r5, #0x1c
    // add r7, r7, #4
    // str r0, [sp, #4]
    // cmp r6, #4
    // blt _02241098
    // add sp, #0x30
    // pop {r3, r4, r5, r6, r7, pc}
    // _0224110C: .word ov40_02245684
    // _02241110: .word ov40_02245694
    // TODO: decompile
}




void ov40_02241114(void) {
    // ldr r5, [r7, r0]
    // add r4, #0x10
    ov40_0222D6D0(r5);
    Sprite_DeleteAndFreeResources(*((u32*)(r5 + 0x14)));
    // add r4, #0x1c
    // add r5, #0x1c
    ov40_0222D7DC(r7);
}




void ov40_02241144(void) {
    // push {r3, r4, r5, lr}
    // add r4, r0, #0
    // mov r0, #0x86
    // lsl r0, r0, #4
    // ldr r5, [r4, r0]
    // bl sub_020307F8
    // mov r1, #4
    // mov r2, #0
    // bl sub_0203088C
    // add r3, r0, #0
    // add r2, r1, #0
    // add r0, r4, #0
    // add r1, r3, #0
    // bl ov40_02230D94
    // cmp r0, #0
    // bne _0224116C
    // b _022413CA
    // ldr r0, [r4, #8]
    // cmp r0, #5
    // bls _02241174
    // b _02241316
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _02241180: ; jump table
    // add r0, r4, #0
    // mov r1, #1
    // bl ov40_02230964
    // mov r0, #0x73
    // lsl r0, r0, #2
    // ldr r1, [r5, r0]
    // cmp r1, #0
    // bne _022411AA
    // sub r0, #0xc0
    // add r0, r5, r0
    // add r1, r4, #0
    // bl ov40_0223064C
    // b _022411B4
    // add r5, #0x80
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov40_0222E7B8
    // add r0, r4, #0
    // mov r1, #0
    // bl ov40_02230964
    // add r0, r4, #0
    // bl ov40_02241A34
    // mov r0, #4
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #4
    // mov r1, #0
    // bl GfGfx_EngineBTogglePlanes
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _022413DC
    // add r0, r5, #0
    // add r0, #8
    // mov r1, #1
    // bl ov40_0222DA84
    // add r0, r5, #0
    // add r1, r5, #4
    // mov r2, #1
    // mov r3, #0
    // bl ov40_0222DA00
    // cmp r0, #0
    // beq _02241226
    // add r0, r4, #0
    // mov r1, #1
    // bl ov40_02230964
    // add r0, r4, #0
    // bl ov40_022421FC
    // add r0, r4, #0
    // bl ov40_02241054
    // add r0, r4, #0
    // mov r1, #0
    // bl ov40_02230964
    // ldr r0, [r4, #0x24]
    // mov r1, #3
    // bl BgClearTilemapBufferAndCommit
    // ldr r0, [r4, #0x24]
    // mov r1, #7
    // bl BgClearTilemapBufferAndCommit
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // ldr r0, [r4, #0x58]
    // mov r1, #3
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r5, #8]
    // ldr r0, [r4, #0x28]
    // lsl r3, r3, #0x18
    // mov r2, #0xc
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // b _022413DC
    // ldr r1, _022413E0 ; =0x00000115
    // add r0, r4, #0
    // bl ov40_0222DED0
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _022413DC
    // bl System_GetTouchNew
    // cmp r0, #0
    // bne _0224125A
    // b _022413DC
    // add r0, r4, #0
    // bl ov40_0222DFB0
    // ldr r0, [r4, #0x24]
    // mov r1, #2
    // bl BgClearTilemapBufferAndCommit
    // ldr r0, [r4, #0x24]
    // mov r1, #6
    // bl BgClearTilemapBufferAndCommit
    // mov r0, #4
    // mov r1, #0
    // bl GfGfx_EngineBTogglePlanes
    // mov r0, #4
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _022413DC
    // add r0, r5, #0
    // add r0, #8
    // mov r1, #1
    // bl ov40_0222DA84
    // add r0, r5, #0
    // add r1, r5, #4
    // mov r2, #1
    // mov r3, #0
    // bl ov40_0222DA00
    // cmp r0, #0
    // beq _022412AE
    // add r0, r4, #0
    // bl ov40_02241114
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // ldr r0, [r4, #0x58]
    // mov r1, #3
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r5, #8]
    // ldr r0, [r4, #0x28]
    // lsl r3, r3, #0x18
    // mov r2, #0xc
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // b _022413DC
    // ldr r0, _022413E4 ; =0x00000608
    // ldr r0, [r5, r0]
    // bl TouchHitboxController_Destroy
    // ldr r0, _022413E8 ; =0x0000060C
    // ldr r0, [r5, r0]
    // bl TouchHitboxController_Destroy
    // mov r0, #0x61
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // bl TouchHitboxController_Destroy
    // add r5, #8
    // add r0, r5, #0
    // bl ov40_0222DAA8
    // add r0, r4, #0
    // mov r1, #1
    // bl ov40_02230964
    // add r0, r4, #0
    // bl ov40_02240910
    // add r0, r4, #0
    // bl ov40_0222D88C
    // add r0, r4, #0
    // mov r1, #0
    // bl ov40_02230964
    // add r0, r4, #0
    // mov r1, #1
    // bl ov40_0222FB90
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _022413DC
    // add r0, r4, #0
    // bl ov40_0222FBB4
    // cmp r0, #0
    // beq _022413DC
    // add r0, r5, #0
    // add r0, #8
    // mov r1, #0
    // bl ov40_0222DA84
    // cmp r0, #0
    // beq _02241398
    // add r0, r4, #0
    // bl ov40_0222DD08
    // add r0, r5, #0
    // add r0, #8
    // bl ov40_0222DAA8
    // ldr r0, [r4, #0x58]
    // mov r1, #2
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r0, [r4, #0x28]
    // mov r2, #0xc
    // mov r3, #0x10
    // bl PaletteData_BlendPalettes
    // mov r1, #1
    // ldr r3, [r4, #0x10]
    // add r0, r4, #0
    // add r2, r1, #0
    // bl ov40_0222BF64
    // add r0, r4, #0
    // mov r1, #5
    // bl ov40_0222BF80
    // add r0, r5, #0
    // bl Heap_Free
    // ldr r0, [r4, #0x24]
    // mov r1, #2
    // bl BgClearTilemapBufferAndCommit
    // ldr r0, [r4, #0x24]
    // mov r1, #6
    // bl BgClearTilemapBufferAndCommit
    // ldr r0, [r4, #0x24]
    // mov r1, #3
    // bl BgClearTilemapBufferAndCommit
    // ldr r0, [r4, #0x24]
    // mov r1, #7
    // bl BgClearTilemapBufferAndCommit
    // bl sub_0202FC48
    // cmp r0, #1
    // bne _022413DC
    // bl sub_0202FC24
    // b _022413DC
    // ldr r0, [r4, #0x58]
    // mov r1, #1
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r5, #8]
    // ldr r0, [r4, #0x28]
    // lsl r3, r3, #0x18
    // mov r2, #2
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // ldr r0, [r4, #0x58]
    // mov r1, #3
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r5, #8]
    // ldr r0, [r4, #0x28]
    // lsl r3, r3, #0x18
    // mov r2, #0xc
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // b _022413DC
    // add r0, r4, #0
    // bl ov40_02242378
    // cmp r0, #0
    // beq _022413DC
    // add r0, r4, #0
    // mov r1, #0xd
    // bl ov40_0222BF80
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // _022413E0: .word 0x00000115
    // _022413E4: .word 0x00000608
    // _022413E8: .word 0x0000060C
    // TODO: decompile
}




void ov40_022413EC(void) {
}




void ov40_02241404(void) {
    ov40_02242AEC();
    ov40_0222BF80(r4, 8);
}




void ov40_0224141C(void) {
    ov40_022428D4();
    ov40_0222BF80(r4, 8);
}




void ov40_02241434(void) {
    ov40_02242490();
    ov40_0222BF80(r4, 0x10);
}




void ov40_0224144C(void) {
}




void ov40_02241464(void) {
    ov40_0224253C();
    ov40_0222BF80(r4, 0xd);
}




void ov40_0224147C(void) {
}




void ov40_02241488(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x10
    // mov r1, #0x86
    // add r4, r0, #0
    // lsl r1, r1, #4
    // ldr r5, [r4, r1]
    // ldr r1, [r4, #8]
    // cmp r1, #5
    // bls _0224149C
    // b _02241754
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _022414A8: ; jump table
    // bl ov40_0222FBB4
    // cmp r0, #0
    // beq _02241560
    // add r0, r5, #0
    // add r1, r5, #4
    // mov r2, #0
    // bl ov40_0222D9E8
    // ldr r0, _02241770 ; =0x00002604
    // ldrb r1, [r4, r0]
    // ldr r0, _02241774 ; =0x0000079C
    // strb r1, [r5, r0]
    // ldr r0, _02241778 ; =0x000008B8
    // ldr r1, _0224177C ; =0x000004BC
    // add r2, r4, r0
    // str r2, [r5, r1]
    // ldr r1, [r5, r1]
    // sub r0, r0, #4
    // str r1, [r4, r0]
    // add r0, r4, #0
    // bl ov40_0222FB40
    // add r0, r4, #0
    // bl ov40_0224085C
    // ldr r0, [r4, #0x24]
    // mov r1, #2
    // bl BgClearTilemapBufferAndCommit
    // ldr r0, [r4, #0x24]
    // mov r1, #6
    // bl BgClearTilemapBufferAndCommit
    // mov r0, #4
    // mov r1, #0
    // bl GfGfx_EngineBTogglePlanes
    // mov r0, #4
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x6d
    // str r0, [sp, #0xc]
    // ldr r0, [r4, #0x14]
    // ldr r2, [r4, #0x24]
    // mov r1, #0x3e
    // mov r3, #3
    // bl GfGfxLoader_LoadCharDataFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x6d
    // str r0, [sp, #0xc]
    // ldr r0, [r4, #0x14]
    // ldr r2, [r4, #0x24]
    // mov r1, #0x3e
    // mov r3, #7
    // bl GfGfxLoader_LoadCharDataFromOpenNarc
    // add r0, r4, #0
    // mov r1, #0
    // bl ov40_0222FB90
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _0224176A
    // bl ov40_0222FBB4
    // cmp r0, #0
    // beq _02241560
    // add r0, r5, #0
    // add r1, r5, #4
    // mov r2, #0
    // mov r3, #1
    // bl ov40_0222DA00
    // cmp r0, #0
    // bne _02241562
    // b _0224176A
    // mov r0, #0
    // mov r1, #1
    // bl SetBgPriority
    // mov r0, #1
    // mov r1, #3
    // bl SetBgPriority
    // mov r0, #2
    // mov r1, #0
    // bl SetBgPriority
    // mov r0, #3
    // mov r1, #1
    // bl SetBgPriority
    // mov r0, #4
    // mov r1, #1
    // bl SetBgPriority
    // mov r0, #5
    // mov r1, #3
    // bl SetBgPriority
    // mov r0, #6
    // mov r1, #0
    // bl SetBgPriority
    // mov r0, #7
    // mov r1, #2
    // bl SetBgPriority
    // mov r0, #0x6d
    // str r0, [sp]
    // ldr r0, _02241780 ; =ov40_022456B4
    // ldr r2, _02241784 ; =ov40_02241C10
    // mov r1, #4
    // add r3, r4, #0
    // bl TouchHitboxController_Create
    // ldr r1, _02241788 ; =0x00000608
    // ldr r2, _0224178C ; =ov40_02241C70
    // str r0, [r5, r1]
    // mov r0, #0x6d
    // str r0, [sp]
    // ldr r0, _02241790 ; =ov40_02245674
    // mov r1, #4
    // add r3, r4, #0
    // bl TouchHitboxController_Create
    // ldr r1, _02241794 ; =0x0000060C
    // ldr r2, _02241798 ; =ov40_02241CD8
    // str r0, [r5, r1]
    // mov r0, #0x6d
    // str r0, [sp]
    // ldr r0, _0224179C ; =ov40_02245654
    // mov r1, #2
    // add r3, r4, #0
    // bl TouchHitboxController_Create
    // mov r1, #0x61
    // lsl r1, r1, #4
    // str r0, [r5, r1]
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _0224176A
    // bl ov40_02242110
    // add r0, r4, #0
    // bl ov40_02241AB0
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x6d
    // str r0, [sp, #0xc]
    // ldr r0, [r4, #0x14]
    // ldr r2, [r4, #0x24]
    // mov r1, #0x3e
    // mov r3, #3
    // bl GfGfxLoader_LoadCharDataFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x6d
    // str r0, [sp, #0xc]
    // ldr r0, [r4, #0x14]
    // ldr r2, [r4, #0x24]
    // mov r1, #0x3e
    // mov r3, #7
    // bl GfGfxLoader_LoadCharDataFromOpenNarc
    // add r0, r4, #0
    // mov r1, #1
    // bl ov40_02230964
    // mov r0, #0x73
    // lsl r0, r0, #2
    // ldr r1, [r5, r0]
    // cmp r1, #0
    // bne _02241660
    // sub r0, #0xc0
    // add r0, r5, r0
    // add r1, r4, #0
    // bl ov40_02230638
    // mov r0, #0x43
    // lsl r0, r0, #2
    // add r0, r5, r0
    // mov r1, #0
    // bl ov40_022306A0
    // mov r0, #0x43
    // lsl r0, r0, #2
    // add r0, r5, r0
    // bl ov40_02230410
    // add r1, r0, #0
    // add r0, r4, #0
    // mov r2, #3
    // bl ov40_022307DC
    // b _0224168C
    // add r0, r5, #0
    // add r0, #0x80
    // add r1, r4, #0
    // bl ov40_0222E79C
    // add r5, #0x80
    // add r0, r5, #0
    // mov r1, #0
    // bl ov40_0222E7DC
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x6d
    // str r0, [sp, #0xc]
    // ldr r0, [r4, #0x14]
    // ldr r2, [r4, #0x24]
    // mov r1, #0x50
    // mov r3, #3
    // bl GfGfxLoader_LoadScrnDataFromOpenNarc
    // add r0, r4, #0
    // mov r1, #0
    // bl ov40_02230964
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x6d
    // str r0, [sp, #0xc]
    // ldr r0, [r4, #0x14]
    // ldr r2, [r4, #0x24]
    // mov r1, #6
    // mov r3, #7
    // bl GfGfxLoader_LoadScrnDataFromOpenNarc
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _0224176A
    // mov r2, #0
    // add r0, r5, #0
    // add r1, r5, #4
    // add r3, r2, #0
    // str r2, [r5, #8]
    // bl ov40_0222DA00
    // cmp r0, #0
    // beq _0224170C
    // mov r0, #0x73
    // lsl r0, r0, #2
    // ldr r1, [r5, r0]
    // cmp r1, #0
    // bne _022416DC
    // sub r0, #0xc0
    // add r0, r5, r0
    // mov r1, #1
    // bl ov40_022306A0
    // b _022416E6
    // add r0, r5, #0
    // add r0, #0x80
    // mov r1, #1
    // bl ov40_0222E7DC
    // mov r0, #4
    // mov r1, #1
    // bl GfGfx_EngineBTogglePlanes
    // mov r0, #4
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #8
    // mov r1, #1
    // bl GfGfx_EngineBTogglePlanes
    // mov r0, #8
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // ldr r0, [r4, #0x58]
    // mov r1, #3
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r5, #8]
    // ldr r0, [r4, #0x28]
    // lsl r3, r3, #0x18
    // mov r2, #0xc
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // b _0224176A
    // mov r0, #6
    // str r0, [sp]
    // mov r1, #1
    // str r1, [sp, #4]
    // mov r0, #0x6d
    // str r0, [sp, #8]
    // mov r0, #0
    // add r2, r1, #0
    // add r3, r0, #0
    // bl BeginNormalPaletteFade
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _0224176A
    // bl IsPaletteFadeFinished
    // cmp r0, #1
    // bne _0224176A
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _0224176A
    // ldr r0, _022417A0 ; =0x000006D8
    // ldr r1, [r4, r0]
    // add r1, r1, #1
    // str r1, [r4, r0]
    // add r0, r4, #0
    // bl ov40_0222C4B8
    // add r0, r4, #0
    // mov r1, #8
    // bl ov40_0222BF80
    // mov r0, #0
    // add sp, #0x10
    // pop {r3, r4, r5, pc}
    // _02241770: .word 0x00002604
    // _02241774: .word 0x0000079C
    // _02241778: .word 0x000008B8
    // _0224177C: .word 0x000004BC
    // _02241780: .word ov40_022456B4
    // _02241784: .word ov40_02241C10
    // _02241788: .word 0x00000608
    // _0224178C: .word ov40_02241C70
    // _02241790: .word ov40_02245674
    // _02241794: .word 0x0000060C
    // _02241798: .word ov40_02241CD8
    // _0224179C: .word ov40_02245654
    // _022417A0: .word 0x000006D8
    // TODO: decompile
}




void ov40_022417A4(void) {
    // ldr r1, [r4, r1]
    ov40_0223077C((0x6f << 4), 0x80, 0x60);
    // ldr r0, [r4, r0]
    sub_020879E0((0x6f << 4), 1);
    // ldr r0, [r4, r0]
    sub_02087A08((0x6f << 4), 0x18, 0x18);
    ov40_0222BF80(r4, 3);
}




void ov40_022417DC(void) {
    // push {r4, r5, lr}
    // sub sp, #0xc
    // mov r1, #0x86
    // add r4, r0, #0
    // lsl r1, r1, #4
    // ldr r5, [r4, r1]
    // ldr r1, [r4, #8]
    // cmp r1, #3
    // bls _022417F0
    // b _02241910
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _022417FC: ; jump table
    // mov r1, #0x77
    // bl ov40_0222DED0
    // ldr r0, _02241940 ; =0x0000057D
    // bl PlaySE
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _0224193A
    // bl ov40_0223D5CC
    // cmp r0, #0
    // bne _02241826
    // add sp, #0xc
    // mov r0, #0
    // pop {r4, r5, pc}
    // mov r3, #0
    // mov r0, #0x83
    // str r3, [sp]
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #0x6d
    // add r2, sp, #4
    // bl sub_0202FC90
    // mov r0, #0x6d
    // bl sub_020314A4
    // mov r1, #0x1d
    // lsl r1, r1, #4
    // str r0, [r5, r1]
    // ldr r0, [r5, r1]
    // mov r1, #0x83
    // lsl r1, r1, #4
    // ldr r1, [r4, r1]
    // bl sub_020314C4
    // add r0, r4, #0
    // bl ov40_0223D540
    // mov r1, #0x1d
    // lsl r1, r1, #4
    // ldr r1, [r5, r1]
    // bl ov39_02227534
    // cmp r0, #1
    // bne _0224193A
    // mov r0, #0x1d
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // bl sub_020314BC
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _0224193A
    // bl ov40_0223D5CC
    // cmp r0, #0
    // bne _02241884
    // add sp, #0xc
    // mov r0, #0
    // pop {r4, r5, pc}
    // bl sub_0202FC24
    // add r0, r4, #0
    // bl ov40_0222DFB0
    // add r0, r4, #0
    // bl ov40_0223D540
    // add r1, sp, #8
    // bl ov39_02227D44
    // cmp r0, #1
    // bne _022418D4
    // ldr r0, _02241940 ; =0x0000057D
    // mov r1, #0
    // bl StopSE
    // ldr r3, [sp, #8]
    // add r0, r4, #0
    // ldr r2, [r3, #0xc]
    // ldr r3, [r3, #4]
    // mov r1, #6
    // bl ov40_02230CDC
    // mov r0, #0x6f
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl sub_020879E0
    // mov r0, #0x6f
    // lsl r0, r0, #4
    // mov r1, #0
    // ldr r0, [r4, r0]
    // add r2, r1, #0
    // bl sub_02087A08
    // mov r0, #0xff
    // str r0, [r4, #8]
    // b _0224193A
    // add r0, r4, #0
    // mov r1, #0x77
    // bl ov40_0222DED0
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov40_02242E4C
    // ldr r0, _02241940 ; =0x0000057D
    // mov r1, #0
    // bl StopSE
    // ldr r0, _02241944 ; =0x00000577
    // bl PlaySE
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _0224193A
    // bl System_GetTouchNew
    // cmp r0, #0
    // beq _0224193A
    // add r0, r4, #0
    // bl ov40_0222DFB0
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _0224193A
    // mov r0, #0x6f
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl sub_020879E0
    // mov r0, #0x6f
    // lsl r0, r0, #4
    // mov r1, #0
    // ldr r0, [r4, r0]
    // add r2, r1, #0
    // bl sub_02087A08
    // add r0, r4, #0
    // mov r1, #0x23
    // bl ov40_0222FB28
    // add r0, r4, #0
    // mov r1, #4
    // bl ov40_0222BF80
    // mov r0, #0
    // add sp, #0xc
    // pop {r4, r5, pc}
    // _02241940: .word 0x0000057D
    // _02241944: .word 0x00000577
    // TODO: decompile
}




void ov40_02241948(void) {
    // ldr r4, [r5, r1]
    // add r4, #8
    ov40_0222DAA8(r4, *((u32*)(r0 + 8)));
    ov40_0222C480(r5);
    ov40_02230964(r5, 1);
    ov40_0222D88C(r5);
    ov40_02230964(r5, 0);
    ov40_0222FB90(r5, 1);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    ov40_0222FBB4((*((u32*)(r5 + 8)) + 1));
    // add r0, #8
    ov40_0222DA84(r4, 0);
    ov40_0222DD08(r5);
    // add r0, #8
    ov40_0222DAA8(r4);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r5 + 0x28)), 2, 0xc, 0x10);
    ov40_0222BF64(r5, 1, 1, *((u32*)(r5 + 0x10)));
    ov40_0222BF80(r5, 5);
    Heap_Free(r4);
    BgClearTilemapBufferAndCommit(*((u32*)(r5 + 0x24)), 2);
    BgClearTilemapBufferAndCommit(*((u32*)(r5 + 0x24)), 6);
    BgClearTilemapBufferAndCommit(*((u32*)(r5 + 0x24)), 3);
    BgClearTilemapBufferAndCommit(*((u32*)(r5 + 0x24)), 7);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r5 + 0x28)), 1, 2, ((*((u32*)(r4 + 8)) << 0x18) >> 0x18));
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r5 + 0x28)), 3, 0xc, ((*((u32*)(r4 + 8)) << 0x18) >> 0x18));
}




void ov40_02241A34(void) {
    // push {r4, lr}
    // mov r1, #0x86
    // lsl r1, r1, #4
    // ldr r4, [r0, r1]
    // ldr r0, _02241A50 ; =0x000006D4
    // add r0, r4, r0
    // bl ClearWindowTilemapAndCopyToVram
    // ldr r0, _02241A50 ; =0x000006D4
    // add r0, r4, r0
    // bl RemoveWindow
    // pop {r4, pc}
    // nop
    // _02241A50: .word 0x000006D4
    // TODO: decompile
}




void ov40_02241A54(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // mov r0, #0x86
    // lsl r0, r0, #4
    // ldr r4, [r5, r0]
    // ldr r6, _02241AA8 ; =0x000006D4
    // add r7, r1, #0
    // add r0, r4, r6
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // ldr r0, [r5, #0x48]
    // add r1, r7, #0
    // bl NewString_ReadMsgData
    // add r5, r0, #0
    // add r0, r4, r6
    // add r1, r5, #0
    // bl ov40_022306C0
    // mov r1, #0
    // add r3, r0, #0
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _02241AAC ; =0x000F0D00
    // add r2, r5, #0
    // str r0, [sp, #8]
    // add r0, r4, r6
    // str r1, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r5, #0
    // bl String_Delete
    // add r0, r4, r6
    // bl ScheduleWindowCopyToVram
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02241AA8: .word 0x000006D4
    // _02241AAC: .word 0x000F0D00
    // TODO: decompile
}




void ov40_02241AB0(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0x14
    // add r5, r0, #0
    // mov r0, #0x86
    // lsl r0, r0, #4
    // ldr r4, [r5, r0]
    // ldr r6, _02241AF8 ; =0x000006D4
    // add r0, r4, r6
    // bl InitWindow
    // mov r0, #3
    // str r0, [sp]
    // mov r0, #0x10
    // str r0, [sp, #4]
    // mov r0, #2
    // str r0, [sp, #8]
    // mov r0, #0xe
    // str r0, [sp, #0xc]
    // mov r0, #1
    // str r0, [sp, #0x10]
    // ldr r0, [r5, #0x24]
    // add r1, r4, r6
    // mov r2, #6
    // mov r3, #8
    // bl AddWindowParameterized
    // mov r1, #0x73
    // lsl r1, r1, #2
    // ldr r1, [r4, r1]
    // add r0, r5, #0
    // add r1, #0x79
    // bl ov40_02241A54
    // add sp, #0x14
    // pop {r3, r4, r5, r6, pc}
    // nop
    // _02241AF8: .word 0x000006D4
    // TODO: decompile
}




void ov40_02241AFC(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // add r5, r0, #0
    // mov r0, #0x86
    // lsl r0, r0, #4
    // ldr r4, [r5, r0]
    // ldr r6, _02241BD4 ; =0x000006D4
    // add r0, r4, r6
    // bl InitWindow
    // mov r2, #6
    // str r2, [sp]
    // mov r0, #0xa
    // str r0, [sp, #4]
    // mov r0, #2
    // str r0, [sp, #8]
    // mov r0, #0xe
    // str r0, [sp, #0xc]
    // mov r0, #1
    // str r0, [sp, #0x10]
    // ldr r0, [r5, #0x24]
    // add r1, r4, r6
    // mov r3, #4
    // bl AddWindowParameterized
    // add r0, r4, r6
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // ldr r0, [r5, #0x48]
    // mov r1, #0x82
    // bl NewString_ReadMsgData
    // add r7, r0, #0
    // add r0, r4, r6
    // add r1, r7, #0
    // bl ov40_022306C0
    // mov r1, #0
    // add r3, r0, #0
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _02241BD8 ; =0x000F0D00
    // add r2, r7, #0
    // str r0, [sp, #8]
    // add r0, r4, r6
    // str r1, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r7, #0
    // bl String_Delete
    // add r0, r4, r6
    // bl ScheduleWindowCopyToVram
    // add r6, #0x10
    // add r0, r4, r6
    // bl InitWindow
    // mov r2, #6
    // str r2, [sp]
    // mov r0, #0xa
    // str r0, [sp, #4]
    // mov r0, #2
    // str r0, [sp, #8]
    // mov r0, #0xe
    // str r0, [sp, #0xc]
    // mov r0, #0x15
    // str r0, [sp, #0x10]
    // ldr r0, [r5, #0x24]
    // add r1, r4, r6
    // mov r3, #0x12
    // bl AddWindowParameterized
    // add r0, r4, r6
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // ldr r0, [r5, #0x48]
    // mov r1, #0x83
    // bl NewString_ReadMsgData
    // add r5, r0, #0
    // add r0, r4, r6
    // add r1, r5, #0
    // bl ov40_022306C0
    // mov r1, #0
    // add r3, r0, #0
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _02241BD8 ; =0x000F0D00
    // add r2, r5, #0
    // str r0, [sp, #8]
    // add r0, r4, r6
    // str r1, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r5, #0
    // bl String_Delete
    // add r0, r4, r6
    // bl ScheduleWindowCopyToVram
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // _02241BD4: .word 0x000006D4
    // _02241BD8: .word 0x000F0D00
    // TODO: decompile
}




void ov40_02241BDC(void) {
    // push {r4, lr}
    // mov r1, #0x86
    // lsl r1, r1, #4
    // ldr r4, [r0, r1]
    // ldr r0, _02241C08 ; =0x000006D4
    // add r0, r4, r0
    // bl ClearWindowTilemapAndCopyToVram
    // ldr r0, _02241C08 ; =0x000006D4
    // add r0, r4, r0
    // bl RemoveWindow
    // ldr r0, _02241C0C ; =0x000006E4
    // add r0, r4, r0
    // bl ClearWindowTilemapAndCopyToVram
    // ldr r0, _02241C0C ; =0x000006E4
    // add r0, r4, r0
    // bl RemoveWindow
    // pop {r4, pc}
    // nop
    // _02241C08: .word 0x000006D4
    // _02241C0C: .word 0x000006E4
    // TODO: decompile
}




void ov40_02241C10(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02241C28: ; jump table
    ov40_02230944(r2);
    ov40_0222BF80(r4, 9);
    ov40_02230944(r4);
    ov40_0222BF80(r4, 0xa);
    ov40_02230944(r4);
    ov40_0222BF80(r4, 0xc);
    ov40_02230944(r4);
    ov40_0222BF80(r4, 0xb);
}




void ov40_02241C70(void) {
    // ldr r3, [r4, r2]
    // add r1, r0, r0
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _02241C8E: ; jump table
    // str r1, [r3, r0]
    // ldr r0, [r3, r0]
    // add r2, #0x2c
    // add r0, r4, r0
    // ldr r0, [r0, r2]
    ov40_0222BF80(r2, 0xf, (0x86 << 4));
    ov40_0222BF80(r4, 0x12);
    ov40_02230944(r4);
    ov40_02230944(r4);
    ov40_0222BF80(r4, 0xe);
}




void ov40_02241CD8(void) {
    ov40_02230944(r2);
    ov40_02241BDC(r4);
    ov40_0222BF80(r4, 0x12);
    ov40_02230944(r4);
    ov40_0222BF80(r4, 0x11);
}




void ov40_02241D10(void) {
    // push {r4, r5, r6, lr}
    // add r6, r0, #0
    // mov r0, #0x86
    // add r4, r2, #0
    // lsl r0, r0, #4
    // ldr r5, [r4, r0]
    // cmp r1, #0
    // bne _02241DFE
    // cmp r6, #4
    // bhi _02241DFE
    // add r1, r6, r6
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _02241D30: ; jump table
    // add r0, r4, #0
    // bl ov40_02230944
    // ldr r0, _02241E00 ; =0x000004C5
    // mov r1, #5
    // strb r6, [r5, r0]
    // add r0, r4, #0
    // bl ov40_0222BF80
    // pop {r4, r5, r6, pc}
    // add r0, r4, #0
    // bl ov40_02230944
    // ldr r0, _02241E00 ; =0x000004C5
    // mov r1, #5
    // strb r6, [r5, r0]
    // add r0, r4, #0
    // bl ov40_0222BF80
    // pop {r4, r5, r6, pc}
    // add r0, #0x2c
    // ldr r0, [r4, r0]
    // bl sub_02031620
    // add r6, r0, #0
    // add r0, r4, #0
    // bl ov40_02230944
    // cmp r6, #0
    // bne _02241D86
    // ldr r0, _02241E04 ; =0x0000057C
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #0x80
    // bl ov40_0222DF60
    // pop {r4, r5, r6, pc}
    // ldr r0, _02241E08 ; =0x000004C3
    // ldrb r1, [r5, r0]
    // cmp r1, #0xff
    // bne _02241DA8
    // ldr r0, _02241E0C ; =0x0000088C
    // ldr r0, [r4, r0]
    // bl sub_02031620
    // ldr r1, _02241E08 ; =0x000004C3
    // strb r0, [r5, r1]
    // ldr r0, _02241E0C ; =0x0000088C
    // ldr r0, [r4, r0]
    // bl sub_0203162C
    // ldr r1, _02241E10 ; =0x000004C4
    // strb r0, [r5, r1]
    // b _02241DB0
    // mov r1, #0xff
    // strb r1, [r5, r0]
    // add r0, r0, #1
    // strb r1, [r5, r0]
    // ldr r2, _02241E08 ; =0x000004C3
    // add r0, r4, #0
    // ldrb r1, [r5, r2]
    // add r2, r2, #1
    // ldrb r2, [r5, r2]
    // bl ov40_0223DDE8
    // add r0, r4, #0
    // bl ov40_0223DEB8
    // pop {r4, r5, r6, pc}
    // add r0, r4, #0
    // bl ov40_02230944
    // add r0, r4, #0
    // mov r1, #4
    // bl ov40_0222BF80
    // pop {r4, r5, r6, pc}
    // add r0, r4, #0
    // bl ov40_02230944
    // add r0, r4, #0
    // bl ov40_0223DB94
    // cmp r0, #0
    // bne _02241DF6
    // ldr r0, _02241E04 ; =0x0000057C
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #0x74
    // bl ov40_0222DF60
    // pop {r4, r5, r6, pc}
    // add r0, r4, #0
    // mov r1, #0xc
    // bl ov40_0222BF80
    // pop {r4, r5, r6, pc}
    // _02241E00: .word 0x000004C5
    // _02241E04: .word 0x0000057C
    // _02241E08: .word 0x000004C3
    // _02241E0C: .word 0x0000088C
    // _02241E10: .word 0x000004C4
    // TODO: decompile
}




void ov40_02241E14(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r2, #0
    // cmp r1, #0
    // bne _02241E3A
    // add r0, r4, #0
    // add r1, r5, #0
    // bl ov40_0223EBB8
    // cmp r0, #0
    // bne _02241E32
    // ldr r0, _02241E3C ; =0x0000057C
    // bl PlaySE
    // pop {r3, r4, r5, pc}
    // add r0, r4, #0
    // add r1, r5, #0
    // bl ov40_0223EC40
    // pop {r3, r4, r5, pc}
    // _02241E3C: .word 0x0000057C
    // TODO: decompile
}




void ov40_02241E40(void) {
    // ldr r5, [r4, r2]
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02241E5E: ; jump table
    ov40_02230944(r2, (0x86 << 4));
    ov40_0222BF80(r4, 0x13);
    ov40_02230944(r4);
    sub_0202FC48();
    ov40_0222BF80(r4, 0x14);
    *((u32*)(r5 + 0xc)) = 0x14;
    ov40_0222BF80(r4, 0x1d);
    ov40_02230944(r4);
    sub_0202FC48();
    ov40_0222BF80(r4, 0x16);
    *((u32*)(r5 + 0xc)) = 0x16;
    ov40_0222BF80(r4, 0x1d);
    ov40_02230944(r4);
    ov40_0222BF80(r4, 0x15);
}




void ov40_02241ED4(void) {
    // ldr r3, [r4, r2]
    // add r1, r0, r0
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _02241EF2: ; jump table
    // str r1, [r3, r0]
    // ldr r0, [r3, r0]
    // add r2, #0x2c
    // add r0, r4, r0
    // ldr r0, [r0, r2]
    ov40_0222BF80(r2, 0x19, (0x86 << 4));
    ov40_0222BF80(r4, 0x1c);
    ov40_02230944(r4);
    ov40_02230944(r4);
    ov40_0222BF80(r4, 0x18);
}




void ov40_02241F3C(void) {
    ov40_02230944(r2);
    ov40_02241BDC(r4);
    ov40_0222BF80(r4, 0x1c);
    ov40_02230944(r4);
    ov40_0222BF80(r4, 0x1b);
}




void ov40_02241F74(void) {
    // ldr r4, [r0, r2]
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 0x14)), 1, (0x86 << 4));
    TextOBJ_SetSpritesDrawFlag(*((u32*)(r4 + 0x18)), 1);
    ManagedSprite_SetPositionXY(*((u32*)(r4 + 0x30)), 0x80, 0xa8);
    ManagedSprite_SetDrawFlag(0);
    TextOBJ_SetSpritesDrawFlag(*((u32*)(r4 + 0x18)), 0);
    ManagedSprite_SetPositionXY(*((u32*)(r4 + 0x30)), 0x50, 0xa8);
    // sub r2, #0x2c
    sub_020136B4(*((u32*)(r4 + 0x18)), 0x24, 0x24);
    // sub r2, #0x2c
    sub_020136B4(*((u32*)(r4 + 0x34)), 0x24, 0x24);
}




void ov40_02241FD0(void) {
    // ldr r5, [r4, r1]
    ov40_0222D6EC(1);
    ov40_0222D800(r4, 1);
    *((u32*)(r5 + 0x14)) = r0;
    ov40_0222D800(r4, 1);
    *((u32*)(r5 + 0x30)) = r0;
    // add r0, #0x10
    // add r1, #0x14
    ov40_0222D5AC(r5, r4, 1);
    // add r0, #0x2c
    // add r1, #0x14
    ov40_0222D5AC(r5, r4, 1);
    // add r0, #0x10
    // add r1, #0x14
    ov40_0222D66C(r5, r4, 3);
    // add r0, #0x2c
    // add r1, #0x14
    ov40_0222D66C(r5, r4, 0x6f);
    ManagedSprite_SetPositionXY(*((u32*)(r5 + 0x14)), 0x20, 0xa8);
    ManagedSprite_SetPositionXY(*((u32*)(r5 + 0x30)), 0x80, 0xa8);
    // sub r2, #0x2c
    sub_020136B4(*((u32*)(r5 + 0x18)), 0x24, 0x24);
    // sub r2, #0x2c
    sub_020136B4(*((u32*)(r5 + 0x34)), 0x24, 0x24);
    TextOBJ_SetSpritesDrawFlag(*((u32*)(r5 + 0x18)), 1);
    TextOBJ_SetSpritesDrawFlag(*((u32*)(r5 + 0x34)), 1);
    ManagedSprite_SetAnim(*((u32*)(r5 + 0x14)), 0);
    ManagedSprite_SetAnim(*((u32*)(r5 + 0x30)), 1);
    ov40_02241F74(r4, 0);
}




void ov40_02242084(void) {
    // ldr r5, [r4, r0]
    // add r0, #0x10
    ov40_0222D6D0(r5);
    // add r0, #0x2c
    ov40_0222D6D0(r5);
    Sprite_DeleteAndFreeResources(*((u32*)(r5 + 0x14)));
    Sprite_DeleteAndFreeResources(*((u32*)(r5 + 0x30)));
    ov40_0222D7DC(r4);
}




void ov40_022420B4(void) {
    // ldr r4, [r0, r2]
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 0x30)), 1, (0x86 << 4));
    TextOBJ_SetSpritesDrawFlag(*((u32*)(r4 + 0x34)), 1);
    ManagedSprite_SetPositionXY(*((u32*)(r4 + 0x14)), 0x20, 0xe8);
    ManagedSprite_SetDrawFlag(0);
    TextOBJ_SetSpritesDrawFlag(*((u32*)(r4 + 0x34)), 0);
    ManagedSprite_SetPositionXY(*((u32*)(r4 + 0x14)), 0x50, 0xe8);
    // sub r2, #0x2c
    sub_020136B4(*((u32*)(r4 + 0x18)), 0x24, 0x24);
    // sub r2, #0x2c
    sub_020136B4(*((u32*)(r4 + 0x34)), 0x24, 0x24);
}




void ov40_02242110(void) {
    // push {r3, r4, r5, lr}
    // mov r1, #0x86
    // add r5, r0, #0
    // lsl r1, r1, #4
    // ldr r4, [r5, r1]
    // mov r1, #2
    // bl ov40_0222D6EC
    // add r0, r5, #0
    // mov r1, #2
    // bl ov40_0222D800
    // str r0, [r4, #0x14]
    // add r0, r5, #0
    // mov r1, #2
    // bl ov40_0222D800
    // str r0, [r4, #0x30]
    // add r0, r4, #0
    // add r1, r5, #0
    // add r0, #0x10
    // add r1, #0x14
    // mov r2, #2
    // bl ov40_0222D5AC
    // add r0, r4, #0
    // add r1, r5, #0
    // add r0, #0x2c
    // add r1, #0x14
    // mov r2, #2
    // bl ov40_0222D5AC
    // ldr r0, _022421F8 ; =0x0000086C
    // ldr r0, [r5, r0]
    // cmp r0, #0xd2
    // bne _02242186
    // add r0, r4, #0
    // add r1, r5, #0
    // add r0, #0x10
    // add r1, #0x14
    // mov r2, #3
    // bl ov40_0222D66C
    // add r0, r4, #0
    // add r1, r5, #0
    // add r0, #0x2c
    // add r1, #0x14
    // mov r2, #0x6f
    // bl ov40_0222D66C
    // ldr r0, [r4, #0x14]
    // mov r1, #0
    // bl ManagedSprite_SetAnim
    // ldr r0, [r4, #0x30]
    // mov r1, #1
    // bl ManagedSprite_SetAnim
    // b _022421B2
    // add r0, r4, #0
    // add r1, r5, #0
    // add r0, #0x10
    // add r1, #0x14
    // mov r2, #3
    // bl ov40_0222D66C
    // add r0, r4, #0
    // add r1, r5, #0
    // add r0, #0x2c
    // add r1, #0x14
    // mov r2, #0x5e
    // bl ov40_0222D66C
    // ldr r0, [r4, #0x14]
    // mov r1, #0
    // bl ManagedSprite_SetAnim
    // ldr r0, [r4, #0x30]
    // mov r1, #3
    // bl ManagedSprite_SetAnim
    // ldr r0, [r4, #0x14]
    // mov r1, #0x20
    // mov r2, #0xe8
    // bl ManagedSprite_SetPositionXY
    // ldr r0, [r4, #0x30]
    // mov r1, #0x80
    // mov r2, #0xe8
    // bl ManagedSprite_SetPositionXY
    // mov r1, #0x24
    // add r2, r1, #0
    // ldr r0, [r4, #0x18]
    // sub r2, #0x2c
    // bl sub_020136B4
    // mov r1, #0x24
    // add r2, r1, #0
    // ldr r0, [r4, #0x34]
    // sub r2, #0x2c
    // bl sub_020136B4
    // ldr r0, [r4, #0x18]
    // mov r1, #1
    // bl TextOBJ_SetSpritesDrawFlag
    // ldr r0, [r4, #0x34]
    // mov r1, #1
    // bl TextOBJ_SetSpritesDrawFlag
    // add r0, r5, #0
    // mov r1, #0
    // bl ov40_022420B4
    // pop {r3, r4, r5, pc}
    // _022421F8: .word 0x0000086C
    // TODO: decompile
}




void ov40_022421FC(void) {
    // ldr r5, [r4, r0]
    // add r0, #0x10
    ov40_0222D6D0(r5);
    // add r0, #0x2c
    ov40_0222D6D0(r5);
    Sprite_DeleteAndFreeResources(*((u32*)(r5 + 0x14)));
    Sprite_DeleteAndFreeResources(*((u32*)(r5 + 0x30)));
    ov40_0222D7DC(r4);
}




void ov40_0224222C(void) {
    // ldr r4, [r5, r1]
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0224224A: ; jump table
    ov40_02230964(1);
    // ldr r1, [r4, r0]
    // sub r0, #0xc0
    // add r0, r4, r0
    ov40_0223064C((0x73 << 2), r5);
    // add r4, #0x80
    ov40_0222E7B8(r4, r5);
    ov40_02230964(r5, 0);
    GfGfx_EngineATogglePlanes(4, 0);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    ov40_0222DA00(r4, (r4 + 4), 1, 1);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    ov40_02230964((*((u32*)(r5 + 8)) + 1), 1);
    // ldr r1, [r4, r0]
    // add r0, #0x80
    ov40_0222E79C(r4, r5);
    // add r4, #0x80
    ov40_0222E7DC(r4, 0);
    ov40_022307DC(r5, 0x50, 3);
    // sub r0, #0xc0
    // add r0, r4, r0
    ov40_02230638(r5);
    // add r0, r4, r0
    ov40_022306A0((0x43 << 2), 0);
    // add r0, r4, r0
    ov40_02230410((0x43 << 2));
    ov40_022307DC(r5, r0, 3);
    ov40_02230964(r5, 0);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    ov40_0222DA00(r4, (r4 + 4), 0, 1);
    // ldr r1, [r4, r0]
    // add r4, #0x80
    ov40_0222E7DC(r4, 1);
    // sub r0, #0xc0
    // add r0, r4, r0
    ov40_022306A0(1);
    GfGfx_EngineBTogglePlanes(4, 1);
    GfGfx_EngineATogglePlanes(4, 1);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    // ldr r2, [r4, r1]
    // eor r0, r2
    // str r0, [r4, r1]
    // ldr r1, [r4, r1]
    // add r1, #0x79
    ov40_02241A54(r5, (0x73 << 2));
}




void ov40_02242378(void) {
    // ldr r4, [r5, r1]
    ov40_02230964(1);
    // ldr r1, [r4, r0]
    // sub r0, #0xc0
    // add r0, r4, r0
    ov40_0223064C((0x73 << 2), r5);
    // add r4, #0x80
    ov40_0222E7B8(r4, r5);
    ov40_02230964(r5, 0);
    ov40_02241A34(r5);
    GfGfx_EngineATogglePlanes(4, 0);
    GfGfx_EngineBTogglePlanes(4, 0);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    // add r0, #8
    ov40_0222DA84(r4, 1);
    ov40_0222DA00(r4, (r4 + 4), 1, 0);
    ov40_02230964(r5, 1);
    ov40_022421FC(r5);
    ov40_02241054(r5);
    ov40_02230964(r5, 0);
    BgClearTilemapBufferAndCommit(*((u32*)(r5 + 0x24)), 3);
    BgClearTilemapBufferAndCommit(*((u32*)(r5 + 0x24)), 7);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r5 + 0x28)), 3, 0xc, ((*((u32*)(r4 + 8)) << 0x18) >> 0x18));
    // add r0, #8
    ov40_0222DA84(r4, 0);
    ov40_0222DA00(r4, (r4 + 4), 0, 1);
    ov40_02240E28(r5, 0x64, 0);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r5 + 0x28)), 3, 0xc, ((*((u32*)(r4 + 8)) << 0x18) >> 0x18));
}




void ov40_02242490(void) {
    // ldr r4, [r5, r0]
    // add r0, #8
    ov40_0222DA84(r4, 1);
    ov40_0222DA00(r4, (r4 + 4), 1, 2);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnDataFromOpenNarc(*((u32*)(r5 + 0x14)), 0x54, *((u32*)(r5 + 0x24)), 7);
    // ldr r2, [r4, r2]
    ov40_02240F24(r5, 0x66, (0x72 << 2));
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r5 + 0x28)), 3, 0xc, ((*((u32*)(r4 + 8)) << 0x18) >> 0x18));
    ov40_0222DA00(r4, (r4 + 4), 0, 2);
    ov40_02241AFC(r5);
    GfGfx_EngineBTogglePlanes(4, 1);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
}




void ov40_0224253C(void) {
    // ldr r4, [r5, r0]
    GfGfx_EngineBTogglePlanes(4, 0);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    ov40_0222DA00(r4, (r4 + 4), 1, 2);
    ov40_02241BDC(r5);
    BgClearTilemapBufferAndCommit(*((u32*)(r5 + 0x24)), 6);
    BgClearTilemapBufferAndCommit(*((u32*)(r5 + 0x24)), 7);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    // add r0, #8
    ov40_0222DA84(r4, 0);
    ov40_0222DA00(r4, (r4 + 4), 0, 2);
    ov40_02240F24(r5, 0x64, 0);
    GfGfx_EngineBTogglePlanes(4, 1);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r5 + 0x28)), 3, 0xc, ((*((u32*)(r4 + 8)) << 0x18) >> 0x18));
}




void ov40_022425E8(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #8
    // add r4, r0, #0
    // mov r2, #0x86
    // lsl r2, r2, #4
    // ldr r1, [r4, #8]
    // ldr r5, [r4, r2]
    // cmp r1, #7
    // bls _022425FC
    // b _022427FC
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _02242608: ; jump table
    // mov r0, #4
    // mov r1, #0
    // bl GfGfx_EngineBTogglePlanes
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _022428AE
    // add r0, r5, #0
    // add r0, #8
    // mov r1, #1
    // bl ov40_0222DA84
    // add r0, r5, #0
    // add r1, r5, #4
    // mov r2, #1
    // mov r3, #2
    // bl ov40_0222DA00
    // cmp r0, #0
    // beq _02242660
    // ldr r0, [r4, #0x24]
    // mov r1, #6
    // bl BgClearTilemapBufferAndCommit
    // ldr r1, _022428B4 ; =0x00000116
    // add r0, r4, #0
    // mov r2, #0
    // bl ov40_02240F24
    // add r0, r4, #0
    // bl ov40_022306E0
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // ldr r0, [r4, #0x58]
    // mov r1, #3
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r5, #8]
    // ldr r0, [r4, #0x28]
    // lsl r3, r3, #0x18
    // mov r2, #0xc
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // b _022428AE
    // mov r1, #0x72
    // sub r2, #0xc4
    // lsl r1, r1, #2
    // ldrb r2, [r5, r2]
    // ldr r1, [r5, r1]
    // bl ov40_0222FC14
    // cmp r0, #0
    // beq _02242762
    // ldr r0, _022428B8 ; =0x0000079C
    // mov r1, #0
    // strb r1, [r5, r0]
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _022428AE
    // mov r1, #0x6f
    // lsl r1, r1, #4
    // ldr r1, [r4, r1]
    // mov r2, #0x80
    // mov r3, #0x60
    // bl ov40_0223077C
    // mov r0, #0x6f
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #1
    // bl sub_020879E0
    // mov r0, #0x6f
    // lsl r0, r0, #4
    // mov r1, #0x18
    // ldr r0, [r4, r0]
    // add r2, r1, #0
    // bl sub_02087A08
    // ldr r0, _022428BC ; =0x0000057D
    // bl PlaySE
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _022428AE
    // bl ov40_0223D5CC
    // cmp r0, #0
    // bne _022426DE
    // add sp, #8
    // mov r0, #0
    // pop {r4, r5, r6, pc}
    // mov r1, #0x46
    // add r0, r4, #0
    // lsl r1, r1, #2
    // mov r2, #0
    // bl ov40_02240F24
    // bl sub_020307F8
    // mov r1, #4
    // mov r2, #0
    // bl sub_0203088C
    // add r6, r0, #0
    // add r5, r1, #0
    // add r0, r4, #0
    // bl ov40_0223D540
    // add r1, r6, #0
    // add r2, r5, #0
    // bl ov39_0222774C
    // cmp r0, #1
    // bne _02242762
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _022428AE
    // bl ov40_0223D5CC
    // cmp r0, #0
    // bne _02242722
    // add sp, #8
    // mov r0, #0
    // pop {r4, r5, r6, pc}
    // add r0, r4, #0
    // bl ov40_0223D540
    // add r1, sp, #4
    // bl ov39_02227D44
    // cmp r0, #1
    // ldr r0, _022428BC ; =0x0000057D
    // bne _0224273C
    // mov r1, #0
    // bl StopSE
    // b _02242748
    // mov r1, #0
    // bl StopSE
    // ldr r0, _022428C0 ; =0x00000577
    // bl PlaySE
    // ldr r0, [r4, #8]
    // ldr r1, _022428C4 ; =0x00000119
    // add r0, r0, #1
    // str r0, [r4, #8]
    // add r0, r4, #0
    // mov r2, #0
    // bl ov40_02240F24
    // b _022428AE
    // bl System_GetTouchNew
    // cmp r0, #0
    // bne _02242764
    // b _022428AE
    // add r0, r4, #0
    // bl ov40_0222DEAC
    // add r0, r4, #0
    // bl ov40_02241114
    // mov r0, #0x6f
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl sub_020879E0
    // mov r0, #0x6f
    // lsl r0, r0, #4
    // mov r1, #0
    // ldr r0, [r4, r0]
    // add r2, r1, #0
    // bl sub_02087A08
    // add r0, r4, #0
    // bl ov40_0222FDC4
    // add r0, r4, #0
    // bl ov40_0222FCCC
    // ldr r0, _022428C8 ; =0x0000049C
    // add r0, r4, r0
    // bl ov40_0222F734
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _022428AE
    // ldr r0, _022428CC ; =0x00000608
    // ldr r0, [r5, r0]
    // bl TouchHitboxController_Destroy
    // ldr r0, _022428D0 ; =0x0000060C
    // ldr r0, [r5, r0]
    // bl TouchHitboxController_Destroy
    // mov r0, #0x61
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // bl TouchHitboxController_Destroy
    // add r5, #8
    // add r0, r5, #0
    // bl ov40_0222DAA8
    // add r0, r4, #0
    // mov r1, #1
    // bl ov40_02230964
    // add r0, r4, #0
    // bl ov40_02240910
    // add r0, r4, #0
    // bl ov40_0222D88C
    // add r0, r4, #0
    // mov r1, #0
    // bl ov40_02230964
    // mov r0, #1
    // mov r1, #0x6d
    // bl sub_0203A948
    // add r0, r4, #0
    // mov r1, #1
    // bl ov40_0222FB90
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _022428AE
    // add r0, r4, #0
    // bl ov40_0222FBB4
    // cmp r0, #0
    // beq _022428AE
    // add r0, r5, #0
    // add r0, #8
    // mov r1, #0
    // bl ov40_0222DA84
    // cmp r0, #0
    // beq _0224287E
    // add r0, r4, #0
    // bl ov40_0222DD08
    // add r0, r5, #0
    // add r0, #8
    // bl ov40_0222DAA8
    // ldr r0, [r4, #0x58]
    // mov r1, #2
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r0, [r4, #0x28]
    // mov r2, #0xc
    // mov r3, #0x10
    // bl PaletteData_BlendPalettes
    // mov r1, #1
    // ldr r3, [r4, #0x10]
    // add r0, r4, #0
    // add r2, r1, #0
    // bl ov40_0222BF64
    // add r0, r4, #0
    // mov r1, #5
    // bl ov40_0222BF80
    // add r0, r5, #0
    // bl Heap_Free
    // ldr r0, [r4, #0x24]
    // mov r1, #2
    // bl BgClearTilemapBufferAndCommit
    // ldr r0, [r4, #0x24]
    // mov r1, #6
    // bl BgClearTilemapBufferAndCommit
    // ldr r0, [r4, #0x24]
    // mov r1, #3
    // bl BgClearTilemapBufferAndCommit
    // ldr r0, [r4, #0x24]
    // mov r1, #7
    // bl BgClearTilemapBufferAndCommit
    // bl sub_0202FC48
    // cmp r0, #1
    // bne _022428AE
    // bl sub_0202FC24
    // b _022428AE
    // ldr r0, [r4, #0x58]
    // mov r1, #1
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r5, #8]
    // ldr r0, [r4, #0x28]
    // lsl r3, r3, #0x18
    // mov r2, #2
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // ldr r0, [r4, #0x58]
    // mov r1, #3
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r5, #8]
    // ldr r0, [r4, #0x28]
    // lsl r3, r3, #0x18
    // mov r2, #0xc
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // mov r0, #0
    // add sp, #8
    // pop {r4, r5, r6, pc}
    // _022428B4: .word 0x00000116
    // _022428B8: .word 0x0000079C
    // _022428BC: .word 0x0000057D
    // _022428C0: .word 0x00000577
    // _022428C4: .word 0x00000119
    // _022428C8: .word 0x0000049C
    // _022428CC: .word 0x00000608
    // _022428D0: .word 0x0000060C
    // TODO: decompile
}




void ov40_022428D4(void) {
    // ldr r5, [r4, r0]
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _022428F4: ; jump table
    BgClearTilemapBufferAndCommit(*((u32*)(r0 + 0x24)), 2);
    BgClearTilemapBufferAndCommit(*((u32*)(r4 + 0x24)), 6);
    GfGfx_EngineBTogglePlanes(4, 0);
    GfGfx_EngineATogglePlanes(4, 0);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // add r0, #8
    ov40_0222DA84(r5, 1);
    ov40_0222DA00(r5, (r5 + 4), 1, 0);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 3, 0xc, ((*((u32*)(r5 + 8)) << 0x18) >> 0x18));
    // add r0, #0xc
    // ldr r0, [r4, r0]
    // add r0, #0x10
    // add r1, #0x14
    ov40_0222D66C(r5, r4, 3);
    // add r0, #0x2c
    // add r1, #0x14
    ov40_0222D66C(r5, r4, 0x5e);
    ManagedSprite_SetAnim(*((u32*)(r5 + 0x14)), 0);
    ManagedSprite_SetAnim(*((u32*)(r5 + 0x30)), 3);
    ov40_02241A34(r4);
    ov40_02241AB0(r4);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharDataFromOpenNarc(*((u32*)(r4 + 0x14)), 0x3e, *((u32*)(r4 + 0x24)), 3);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharDataFromOpenNarc(*((u32*)(r4 + 0x14)), 0x3e, *((u32*)(r4 + 0x24)), 7);
    ov40_02230964(r4, 1);
    // ldr r1, [r5, r0]
    // sub r0, #0xc0
    // add r0, r5, r0
    ov40_0223064C((0x73 << 2), r4);
    // add r0, r5, r0
    ov40_02230638((0x43 << 2), r4);
    // add r0, r5, r0
    ov40_022306A0((0x43 << 2), 0);
    // add r0, r5, r0
    ov40_02230410((0x43 << 2));
    ov40_022307DC(r4, r0, 3);
    // add r0, #0x80
    ov40_0222E7B8(r5, r4);
    // add r0, #0x80
    ov40_0222E79C(r5, r4);
    // add r5, #0x80
    ov40_0222E7DC(r5, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnDataFromOpenNarc(*((u32*)(r4 + 0x14)), 0x50, *((u32*)(r4 + 0x24)), 3);
    ov40_02230964(r4, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnDataFromOpenNarc(*((u32*)(r4 + 0x14)), 6, *((u32*)(r4 + 0x24)), 7);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // add r0, #8
    ov40_0222DA84(r5, 0);
    ov40_0222DA00(r5, (r5 + 4), 0, 0);
    // ldr r1, [r5, r0]
    // sub r0, #0xc0
    // add r0, r5, r0
    ov40_022306A0((0x73 << 2), 1);
    // add r0, #0x80
    ov40_0222E7DC(r5, 1);
    GfGfx_EngineBTogglePlanes(4, 1);
    GfGfx_EngineATogglePlanes(4, 1);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x28)), 3, 0xc, ((*((u32*)(r5 + 8)) << 0x18) >> 0x18));
}




void ov40_02242AEC(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x10
    // mov r1, #0x86
    // add r4, r0, #0
    // lsl r1, r1, #4
    // ldr r5, [r4, r1]
    // ldr r1, [r4, #8]
    // cmp r1, #3
    // bls _02242B00
    // b _02242CEA
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _02242B0C: ; jump table
    // bl ov40_0222DEAC
    // ldr r0, [r4, #0x24]
    // mov r1, #2
    // bl BgClearTilemapBufferAndCommit
    // ldr r0, [r4, #0x24]
    // mov r1, #6
    // bl BgClearTilemapBufferAndCommit
    // mov r0, #4
    // mov r1, #0
    // bl GfGfx_EngineBTogglePlanes
    // mov r0, #4
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _02242CF0
    // add r0, r5, #0
    // add r0, #8
    // mov r1, #1
    // bl ov40_0222DA84
    // add r0, r5, #0
    // add r1, r5, #4
    // mov r2, #1
    // mov r3, #0
    // bl ov40_0222DA00
    // cmp r0, #0
    // beq _02242B66
    // add r0, r4, #0
    // bl ov40_02241114
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // ldr r0, [r4, #0x58]
    // mov r1, #3
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r5, #8]
    // ldr r0, [r4, #0x28]
    // lsl r3, r3, #0x18
    // mov r2, #0xc
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // b _02242CF0
    // bl ov40_02242110
    // ldr r0, _02242CF8 ; =0x0000086C
    // ldr r0, [r4, r0]
    // cmp r0, #0xd2
    // bne _02242BB8
    // add r0, r5, #0
    // add r1, r4, #0
    // add r0, #0x10
    // add r1, #0x14
    // mov r2, #3
    // bl ov40_0222D66C
    // add r0, r5, #0
    // add r1, r4, #0
    // add r0, #0x2c
    // add r1, #0x14
    // mov r2, #0x5e
    // bl ov40_0222D66C
    // ldr r0, [r5, #0x14]
    // mov r1, #0
    // bl ManagedSprite_SetAnim
    // ldr r0, [r5, #0x30]
    // mov r1, #3
    // bl ManagedSprite_SetAnim
    // add r0, r4, #0
    // bl ov40_02241AB0
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x6d
    // str r0, [sp, #0xc]
    // ldr r0, [r4, #0x14]
    // ldr r2, [r4, #0x24]
    // mov r1, #0x3e
    // mov r3, #3
    // bl GfGfxLoader_LoadCharDataFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x6d
    // str r0, [sp, #0xc]
    // ldr r0, [r4, #0x14]
    // ldr r2, [r4, #0x24]
    // mov r1, #0x3e
    // mov r3, #7
    // bl GfGfxLoader_LoadCharDataFromOpenNarc
    // add r0, r4, #0
    // mov r1, #1
    // bl ov40_02230964
    // mov r0, #0x73
    // lsl r0, r0, #2
    // ldr r1, [r5, r0]
    // cmp r1, #0
    // bne _02242C2C
    // sub r0, #0xc0
    // add r0, r5, r0
    // add r1, r4, #0
    // bl ov40_02230638
    // mov r0, #0x43
    // lsl r0, r0, #2
    // add r0, r5, r0
    // mov r1, #0
    // bl ov40_022306A0
    // mov r0, #0x43
    // lsl r0, r0, #2
    // add r0, r5, r0
    // bl ov40_02230410
    // add r1, r0, #0
    // add r0, r4, #0
    // mov r2, #3
    // bl ov40_022307DC
    // b _02242C58
    // add r0, r5, #0
    // add r0, #0x80
    // add r1, r4, #0
    // bl ov40_0222E79C
    // add r5, #0x80
    // add r0, r5, #0
    // mov r1, #0
    // bl ov40_0222E7DC
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x6d
    // str r0, [sp, #0xc]
    // ldr r0, [r4, #0x14]
    // ldr r2, [r4, #0x24]
    // mov r1, #0x50
    // mov r3, #3
    // bl GfGfxLoader_LoadScrnDataFromOpenNarc
    // add r0, r4, #0
    // mov r1, #0
    // bl ov40_02230964
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x6d
    // str r0, [sp, #0xc]
    // ldr r0, [r4, #0x14]
    // ldr r2, [r4, #0x24]
    // mov r1, #6
    // mov r3, #7
    // bl GfGfxLoader_LoadScrnDataFromOpenNarc
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _02242CF0
    // add r0, r5, #0
    // add r0, #8
    // mov r1, #0
    // bl ov40_0222DA84
    // mov r2, #0
    // add r0, r5, #0
    // add r1, r5, #4
    // add r3, r2, #0
    // bl ov40_0222DA00
    // cmp r0, #0
    // beq _02242CD0
    // mov r0, #0x73
    // lsl r0, r0, #2
    // ldr r1, [r5, r0]
    // cmp r1, #0
    // bne _02242CB0
    // sub r0, #0xc0
    // add r0, r5, r0
    // mov r1, #1
    // bl ov40_022306A0
    // b _02242CBA
    // add r0, r5, #0
    // add r0, #0x80
    // mov r1, #1
    // bl ov40_0222E7DC
    // mov r0, #4
    // mov r1, #1
    // bl GfGfx_EngineBTogglePlanes
    // mov r0, #4
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // ldr r0, [r4, #0x58]
    // mov r1, #3
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r5, #8]
    // ldr r0, [r4, #0x28]
    // lsl r3, r3, #0x18
    // mov r2, #0xc
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // b _02242CF0
    // add sp, #0x10
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // mov r0, #0
    // add sp, #0x10
    // pop {r3, r4, r5, pc}
    // nop
    // _02242CF8: .word 0x0000086C
    // TODO: decompile
}




void ov40_02242CFC(void) {
    // push {r4, r5, lr}
    // sub sp, #0xc
    // mov r1, #0x86
    // add r5, r0, #0
    // lsl r1, r1, #4
    // ldr r4, [r5, r1]
    // ldr r1, [r5, #8]
    // cmp r1, #0
    // beq _02242D18
    // cmp r1, #1
    // beq _02242D38
    // cmp r1, #2
    // beq _02242D48
    // b _02242DD6
    // mov r0, #6
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // mov r0, #0x6d
    // str r0, [sp, #8]
    // mov r0, #0
    // add r1, r0, #0
    // add r2, r0, #0
    // add r3, r0, #0
    // bl BeginNormalPaletteFade
    // ldr r0, [r5, #8]
    // add r0, r0, #1
    // str r0, [r5, #8]
    // b _02242DDC
    // bl IsPaletteFadeFinished
    // cmp r0, #1
    // bne _02242DDC
    // ldr r0, [r5, #8]
    // add r0, r0, #1
    // str r0, [r5, #8]
    // b _02242DDC
    // mov r1, #1
    // bl ov40_02230964
    // mov r0, #0x73
    // lsl r0, r0, #2
    // ldr r1, [r4, r0]
    // cmp r1, #0
    // bne _02242D64
    // sub r0, #0xc0
    // add r0, r4, r0
    // add r1, r5, #0
    // bl ov40_0223064C
    // b _02242D6E
    // add r0, r4, #0
    // add r0, #0x80
    // add r1, r5, #0
    // bl ov40_0222E7B8
    // add r0, r5, #0
    // mov r1, #0
    // bl ov40_02230964
    // ldr r0, _02242DE4 ; =0x00000608
    // ldr r0, [r4, r0]
    // bl TouchHitboxController_Destroy
    // ldr r0, _02242DE8 ; =0x0000060C
    // ldr r0, [r4, r0]
    // bl TouchHitboxController_Destroy
    // mov r0, #0x61
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // bl TouchHitboxController_Destroy
    // add r0, r5, #0
    // mov r1, #1
    // bl ov40_02230964
    // add r0, r5, #0
    // bl ov40_02240910
    // add r0, r5, #0
    // bl ov40_02241A34
    // add r0, r5, #0
    // bl ov40_022421FC
    // add r0, r5, #0
    // bl ov40_0222D8C8
    // add r0, r5, #0
    // mov r1, #0
    // bl ov40_02230964
    // ldr r1, [r5, #0x10]
    // add r0, r5, #0
    // ldr r1, [r1]
    // bl ov40_0222C4E8
    // ldr r0, _02242DEC ; =0x00000868
    // mov r1, #1
    // ldr r0, [r5, r0]
    // mov r2, #0
    // bl sub_02087A84
    // ldr r0, [r5, #8]
    // add r0, r0, #1
    // str r0, [r5, #8]
    // b _02242DDC
    // add sp, #0xc
    // mov r0, #1
    // pop {r4, r5, pc}
    // mov r0, #0
    // add sp, #0xc
    // pop {r4, r5, pc}
    // nop
    // _02242DE4: .word 0x00000608
    // _02242DE8: .word 0x0000060C
    // _02242DEC: .word 0x00000868
    // TODO: decompile
}




void ov40_02242DF0(void) {
    // ldr r4, [r0, r2]
    ov40_0223D540(*((u32*)r1), (0x86 << 4));
    ov39_02227FEC();
    // str r0, [r4, r2]
    // str r1, [r4, r0]
}




void ov40_02242E14(void) {
    // push {r4, lr}
    // ldr r1, [r1]
    // add r4, r0, #0
    // cmp r1, #1
    // beq _02242E3C
    // bl ov40_0223D540
    // ldr r1, _02242E40 ; =0x000008B4
    // add r1, r4, r1
    // bl ov39_022280D4
    // add r0, r4, #0
    // bl ov40_0222FB40
    // ldr r0, _02242E40 ; =0x000008B4
    // ldr r0, [r4, r0]
    // add r0, #0xa7
    // ldrb r1, [r0]
    // ldr r0, _02242E44 ; =0x00002604
    // strb r1, [r4, r0]
    // pop {r4, pc}
    // nop
    // _02242E40: .word 0x000008B4
    // _02242E44: .word 0x00002604
    // TODO: decompile
}




void ov40_02242E48(void) {
    // bx lr
    // TODO: decompile
}




void ov40_02242E4C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x30
    // add r4, r0, #0
    // mov r0, #0x6d
    // add r5, r1, #0
    // bl ov40_0222DAB0
    // add r6, r0, #0
    // mov r0, #0x4b
    // lsl r0, r0, #4
    // ldr r7, [r4, r0]
    // add r0, r0, #4
    // ldr r4, [r4, r0]
    // mov r0, #0xff
    // mov r1, #0x6d
    // str r4, [sp, #0x14]
    // bl String_New
    // str r0, [sp, #0x18]
    // mov r0, #0xff
    // mov r1, #0x6d
    // bl String_New
    // str r0, [sp, #0x1c]
    // mov r0, #0xff
    // mov r1, #0x6d
    // bl String_New
    // str r0, [sp, #0x20]
    // ldr r2, _02242F9C ; =0x000186A0
    // add r0, r7, #0
    // add r1, r4, #0
    // mov r3, #0
    // bl _ll_udiv
    // str r0, [sp, #0x24]
    // add r4, r1, #0
    // ldr r0, [r5, #0x48]
    // ldr r1, _02242FA0 ; =0x00000127
    // bl NewString_ReadMsgData
    // str r0, [sp, #0x28]
    // mov r0, #0xff
    // mov r1, #0x6d
    // bl String_New
    // str r0, [sp, #0x2c]
    // ldr r1, [sp, #0x14]
    // ldr r2, _02242F9C ; =0x000186A0
    // add r0, r7, #0
    // mov r3, #0
    // bl _ull_mod
    // add r1, r0, #0
    // mov r0, #1
    // str r0, [sp]
    // ldr r0, [sp, #0x18]
    // mov r2, #5
    // mov r3, #2
    // bl String16_FormatInteger
    // ldr r0, [sp, #0x24]
    // ldr r2, _02242F9C ; =0x000186A0
    // add r1, r4, #0
    // mov r3, #0
    // bl _ull_mod
    // add r1, r0, #0
    // mov r0, #1
    // str r0, [sp]
    // ldr r0, [sp, #0x1c]
    // mov r2, #5
    // mov r3, #2
    // bl String16_FormatInteger
    // ldr r0, [sp, #0x24]
    // ldr r2, _02242F9C ; =0x000186A0
    // add r1, r4, #0
    // mov r3, #0
    // bl _ll_udiv
    // add r1, r0, #0
    // mov r0, #1
    // str r0, [sp]
    // mov r2, #2
    // ldr r0, [sp, #0x20]
    // add r3, r2, #0
    // bl String16_FormatInteger
    // mov r0, #1
    // str r0, [sp]
    // mov r1, #2
    // ldr r2, [sp, #0x18]
    // add r0, r6, #0
    // mov r3, #0
    // str r1, [sp, #4]
    // bl BufferString
    // mov r1, #1
    // str r1, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x1c]
    // add r0, r6, #0
    // mov r3, #0
    // bl BufferString
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #2
    // mov r1, #0
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x20]
    // add r0, r6, #0
    // add r3, r1, #0
    // bl BufferString
    // ldr r1, [sp, #0x2c]
    // ldr r2, [sp, #0x28]
    // add r0, r6, #0
    // bl StringExpandPlaceholders
    // ldr r0, _02242FA4 ; =0x000008A4
    // mov r1, #0xcc
    // add r0, r5, r0
    // bl FillWindowPixelBuffer
    // mov r1, #0
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _02242FA8 ; =0x000F0D00
    // ldr r2, [sp, #0x2c]
    // str r0, [sp, #8]
    // ldr r0, _02242FA4 ; =0x000008A4
    // add r3, r1, #0
    // add r0, r5, r0
    // str r1, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // ldr r0, _02242FA4 ; =0x000008A4
    // add r0, r5, r0
    // bl ScheduleWindowCopyToVram
    // ldr r0, [sp, #0x18]
    // bl String_Delete
    // ldr r0, [sp, #0x1c]
    // bl String_Delete
    // ldr r0, [sp, #0x20]
    // bl String_Delete
    // ldr r0, [sp, #0x28]
    // bl String_Delete
    // ldr r0, [sp, #0x2c]
    // bl String_Delete
    // add r0, r6, #0
    // bl MessageFormat_ResetBuffers
    // add r0, r6, #0
    // bl MessageFormat_Delete
    // add sp, #0x30
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02242F9C: .word 0x000186A0
    // _02242FA0: .word 0x00000127
    // _02242FA4: .word 0x000008A4
    // _02242FA8: .word 0x000F0D00
    // TODO: decompile
}




void ov40_02242FAC(void) {
    // str r0, [sp]
    Heap_Alloc(0x20);
    MI_CpuFill8(0, 0x20);
    // ldr r1, [sp]
    // str r6, [r4]
    String_New((r6 + 1));
    *((u32*)(r4 + 0x18)) = r0;
    *((u32*)(r4 + 0x1c)) = r7;
    *((u32*)(r4 + 4)) = *((u32*)r5);
    // ldr r1, [r5, r0]
    // add r0, r4, r0
    *((u32*)(((0 + 1) << 2) + 4)) = (r5 + 4);
}




void ov40_02242FF8(void) {
    GF_AssertFail(*((u32*)(r0 + 0x18)));
    GF_AssertFail();
    String_Delete(*((u32*)(r4 + 0x18)));
    Heap_Free(r4);
}




void ov40_0224301C(void) {
    // ldr r4, [r0, r2]
    // str r4, [r0, r3]
    // str r1, [r0, r2]
    // add r1, #8
    // str r3, [r0, r1]
    // add r1, #0xc
    // str r3, [r0, r1]
    // add r1, #0x10
    // str r3, [r0, r1]
    // add r1, #0x14
    // str r3, [r0, r1]
    // ldr r1, [r0, r2]
    // add r3, r0, r1
    // sub r1, #0x24
    // ldrh r3, [r3, r1]
    // add r1, #8
    // str r3, [r0, r1]
    // ldr r1, [r0, r2]
    // add r3, r0, r1
    // sub r1, #0x22
    // ldrh r1, [r3, r1]
    // add r2, #0xc
    // str r1, [r0, r2]
    // ldr r1, [r0, r2]
    // add r3, r0, r1
    // sub r1, #0x28
    // ldrh r3, [r3, r1]
    // add r1, #0xc
    // str r3, [r0, r1]
    // ldr r1, [r0, r2]
    // add r3, r0, r1
    // sub r1, #0x26
    // ldrh r1, [r3, r1]
    // add r2, #0x10
    // str r1, [r0, r2]
}




void ov40_022430A0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x20
    // mov r2, #0xa6
    // lsl r2, r2, #2
    // add r4, r2, #0
    // mov r1, #1
    // add r3, r0, #0
    // str r1, [r3, r2]
    // mov r5, #0
    // sub r4, #0xb4
    // strh r5, [r3, r4]
    // add r4, r2, #0
    // add r4, #0x14
    // ldr r5, [r3, r4]
    // add r4, r2, #0
    // sub r4, #0xb2
    // strh r5, [r3, r4]
    // add r4, r2, #0
    // add r4, #0x14
    // ldr r5, [r3, r4]
    // add r4, r2, #0
    // sub r4, #0xb0
    // strh r5, [r3, r4]
    // add r4, r2, #0
    // add r4, #0x14
    // ldr r5, [r3, r4]
    // add r4, r2, #0
    // add r4, #0x18
    // ldr r3, [r3, r4]
    // add r4, r2, #0
    // add r5, r5, r3
    // add r6, r2, #0
    // sub r4, #0xae
    // add r3, r0, #0
    // strh r5, [r3, r4]
    // add r4, r2, #0
    // add r4, #0x14
    // ldr r5, [r3, r4]
    // add r4, r2, #0
    // add r4, #0x18
    // ldr r3, [r3, r4]
    // add r4, r2, #0
    // add r5, r5, r3
    // sub r4, #0xac
    // add r3, r0, #0
    // strh r5, [r3, r4]
    // add r4, r2, #0
    // add r5, r2, #0
    // add r4, #0x1c
    // add r5, #0x14
    // ldr r4, [r3, r4]
    // ldr r3, [r3, r5]
    // add r6, #0x18
    // add r5, r0, #0
    // ldr r5, [r5, r6]
    // sub r2, #0xaa
    // add r3, r3, r5
    // add r4, r4, r3
    // add r3, r0, #0
    // str r0, [sp]
    // strh r4, [r3, r2]
    // bl ov40_0224301C
    // mov r4, #0x81
    // lsl r4, r4, #2
    // add r3, r4, #0
    // ldr r1, [sp]
    // mov r0, #0
    // add r3, #0xa8
    // ldr r2, [sp]
    // add r0, r0, #1
    // ldr r5, [r2, r4]
    // ldr r2, [r1, r3]
    // add r1, r1, #4
    // add r5, r5, r2
    // ldr r2, [sp]
    // cmp r0, #3
    // str r5, [r2, r4]
    // blt _0224312A
    // ldr r4, _02243208 ; =ov40_02245C28
    // add r3, sp, #8
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // mov r1, #0xab
    // ldr r0, [sp]
    // lsl r1, r1, #2
    // ldr r0, [r0, r1]
    // mov r2, #0
    // cmp r0, #4
    // beq _0224315E
    // mov r2, #1
    // mov r0, #0xc
    // mul r0, r2
    // add r3, sp, #8
    // add r0, r3, r0
    // mov r2, #0x77
    // ldr r5, [sp]
    // mov r1, #0
    // add r4, r0, #0
    // lsl r2, r2, #2
    // ldr r3, [r4]
    // add r1, r1, #1
    // strh r3, [r5, r2]
    // add r4, r4, #4
    // add r5, r5, #2
    // cmp r1, #3
    // blt _02243170
    // sub r2, r1, #1
    // lsl r2, r2, #2
    // ldr r2, [r0, r2]
    // ldr r0, [sp]
    // lsl r1, r1, #1
    // add r1, r0, r1
    // mov r0, #0x77
    // lsl r0, r0, #2
    // strh r2, [r1, r0]
    // ldr r1, [sp]
    // mov r0, #0
    // mov r4, #0xab
    // mov r5, #0x15
    // add r3, r0, #0
    // add r2, r1, #0
    // lsl r4, r4, #2
    // lsl r5, r5, #4
    // ldr r6, [r1, r4]
    // add r3, r3, #1
    // add r0, r0, r6
    // sub r6, r0, #1
    // str r6, [r2, r5]
    // add r1, r1, #4
    // add r2, #0x1c
    // cmp r3, #2
    // blt _022431A0
    // ldr r0, [sp]
    // mov r5, #0
    // mov r7, #0xab
    // mov ip, r5
    // str r0, [sp, #4]
    // add r4, r0, #0
    // lsl r7, r7, #2
    // mov r0, #0xab
    // ldr r2, [sp, #4]
    // lsl r0, r0, #2
    // ldr r0, [r2, r0]
    // mov r1, #0
    // cmp r0, #0
    // ble _022431EC
    // mov r0, ip
    // lsl r3, r0, #2
    // ldr r0, [sp]
    // add r2, r4, #0
    // add r3, r0, r3
    // mov r0, ip
    // add r6, r0, #1
    // str r6, [r2, #4]
    // ldr r0, [r3, r7]
    // add r1, r1, #1
    // add r2, #0x1c
    // add r4, #0x1c
    // add r5, r5, #1
    // cmp r1, r0
    // blt _022431DC
    // ldr r0, [sp, #4]
    // ldr r1, [sp]
    // add r0, r0, #4
    // str r0, [sp, #4]
    // mov r0, ip
    // add r0, r0, #1
    // mov ip, r0
    // mov r0, #0x81
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // cmp r5, r0
    // blt _022431C0
    // add sp, #0x20
    // pop {r3, r4, r5, r6, r7, pc}
    // _02243208: .word ov40_02245C28
    // TODO: decompile
}




void ov40_0224320C(void) {
    // str r1, [r0, r2]
    // str r3, [r0, r1]
    // add r1, #8
    // str r3, [r0, r1]
    // add r2, #0xc
    // str r3, [r0, r2]
}




void ov40_02243224(void) {
}




void ov40_0224326C(void) {
    // ldr r0, [r4, r0]
    TouchHitboxController_Destroy((0x8d << 2));
    ov40_02243B94(r4);
}




void ov40_02243284(void) {
    // ldr r2, [r4, r1]
    // str r0, [r4, r1]
    ov40_0224395C((r2 + 1), (0x7f << 2));
    // ldr r0, [r4, r0]
    TouchHitboxController_IsTriggered((0x8d << 2));
}




void ov40_022432AC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // mov r1, #0x7f
    // add r5, r0, #0
    // lsl r1, r1, #2
    // ldr r2, [r5, r1]
    // cmp r2, #0
    // beq _022432C2
    // cmp r2, #1
    // bne _022432C0
    // b _02243428
    // b _022434D0
    // mov r1, #0
    // add r2, r1, #0
    // bl ov40_02243E80
    // mov r0, #0x81
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r6, #0
    // cmp r0, #0
    // ble _02243364
    // ldr r7, _0224352C ; =ov40_02245E74
    // add r4, r5, #0
    // ldrb r0, [r4, #0x18]
    // cmp r0, #0
    // beq _02243356
    // mov r1, #0x14
    // mov r2, #0x16
    // ldrsh r1, [r4, r1]
    // ldrsh r2, [r4, r2]
    // ldr r0, [r4, #0xc]
    // bl ManagedSprite_OffsetPositionXY
    // ldrb r0, [r4, #0x18]
    // sub r0, r0, #1
    // strb r0, [r4, #0x18]
    // mov r0, #0x21
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // cmp r6, r0
    // blt _02243324
    // mov r0, #0x85
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // cmp r6, r0
    // bge _02243324
    // ldrb r0, [r4, #0x19]
    // lsl r1, r0, #2
    // ldr r1, [r7, r1]
    // ldr r0, [r4, #0xc]
    // add r2, r1, #0
    // bl ManagedSprite_SetAffineScale
    // ldrb r0, [r4, #0x19]
    // mov r1, #2
    // add r0, r0, #1
    // strb r0, [r4, #0x19]
    // ldr r0, [r4, #0xc]
    // bl ManagedSprite_SetAffineOverwriteMode
    // mov r0, #0x86
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // cmp r6, r0
    // blt _02243356
    // mov r0, #0x87
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // cmp r6, r0
    // bge _02243356
    // ldrb r0, [r4, #0x19]
    // ldr r1, _02243530 ; =ov40_02245E58
    // lsl r2, r0, #2
    // ldr r1, [r1, r2]
    // ldr r0, [r4, #0xc]
    // add r2, r1, #0
    // bl ManagedSprite_SetAffineScale
    // ldrb r0, [r4, #0x19]
    // mov r1, #2
    // add r0, r0, #1
    // strb r0, [r4, #0x19]
    // ldr r0, [r4, #0xc]
    // bl ManagedSprite_SetAffineOverwriteMode
    // mov r0, #0x81
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // add r6, r6, #1
    // add r4, #0x1c
    // cmp r6, r0
    // blt _022432DA
    // mov r7, #0x5a
    // mov r6, #0
    // add r4, r5, #0
    // lsl r7, r7, #2
    // ldrb r0, [r4, r7]
    // cmp r0, #0
    // beq _02243394
    // mov r1, #0x59
    // ldr r2, _02243534 ; =0x00000166
    // mov r0, #0x57
    // lsl r1, r1, #2
    // lsl r0, r0, #2
    // ldrsh r1, [r4, r1]
    // ldrsh r2, [r4, r2]
    // ldr r0, [r4, r0]
    // bl ManagedSprite_OffsetPositionXY
    // mov r0, #0x5a
    // lsl r0, r0, #2
    // ldrb r0, [r4, r0]
    // sub r1, r0, #1
    // mov r0, #0x5a
    // lsl r0, r0, #2
    // strb r1, [r4, r0]
    // add r6, r6, #1
    // add r4, #0x1c
    // cmp r6, #2
    // blt _0224336C
    // ldrb r0, [r5, #0x18]
    // cmp r0, #0
    // bne _0224341C
    // mov r0, #0x21
    // lsl r0, r0, #4
    // ldr r6, [r5, r0]
    // add r0, r0, #4
    // ldr r0, [r5, r0]
    // cmp r6, r0
    // bge _022433DA
    // mov r0, #0x1c
    // mul r0, r6
    // mov r7, #0x85
    // add r4, r5, r0
    // lsl r7, r7, #2
    // ldr r0, [r4]
    // ldr r1, [r4, #8]
    // bl ov40_02244054
    // add r1, r0, #0
    // ldr r0, [r4, #0xc]
    // bl ManagedSprite_SetAnim
    // ldr r0, [r4, #0xc]
    // bl ManagedSprite_TickFrame
    // ldr r0, [r5, r7]
    // add r6, r6, #1
    // add r4, #0x1c
    // cmp r6, r0
    // blt _022433BA
    // mov r0, #0x86
    // lsl r0, r0, #2
    // ldr r6, [r5, r0]
    // add r0, r0, #4
    // ldr r0, [r5, r0]
    // cmp r6, r0
    // bge _02243412
    // mov r0, #0x1c
    // mul r0, r6
    // mov r7, #0x87
    // add r4, r5, r0
    // lsl r7, r7, #2
    // ldr r0, [r4]
    // ldr r1, [r4, #8]
    // bl ov40_02244054
    // add r1, r0, #0
    // ldr r0, [r4, #0xc]
    // bl ManagedSprite_SetAnim
    // ldr r0, [r4, #0xc]
    // bl ManagedSprite_TickFrame
    // ldr r0, [r5, r7]
    // add r6, r6, #1
    // add r4, #0x1c
    // cmp r6, r0
    // blt _022433F2
    // mov r0, #0x7f
    // lsl r0, r0, #2
    // ldr r1, [r5, r0]
    // add r1, r1, #1
    // str r1, [r5, r0]
    // mov r0, #2
    // lsl r0, r0, #8
    // ldr r1, [r5, r0]
    // add r1, r1, #1
    // str r1, [r5, r0]
    // b _02243526
    // add r0, r1, #0
    // add r0, #0x14
    // add r1, #0x18
    // ldr r6, [r5, r0]
    // ldr r0, [r5, r1]
    // cmp r6, r0
    // bge _0224346E
    // mov r0, #0x1c
    // mul r0, r6
    // ldr r7, _0224352C ; =ov40_02245E74
    // add r4, r5, r0
    // ldrb r0, [r4, #0x19]
    // cmp r0, #6
    // bne _0224344E
    // ldr r0, [r4, #0xc]
    // mov r1, #1
    // bl ManagedSprite_SetAffineOverwriteMode
    // b _02243460
    // lsl r1, r0, #2
    // ldr r1, [r7, r1]
    // ldr r0, [r4, #0xc]
    // add r2, r1, #0
    // bl ManagedSprite_SetAffineScale
    // ldrb r0, [r4, #0x19]
    // add r0, r0, #1
    // strb r0, [r4, #0x19]
    // mov r0, #0x85
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // add r6, r6, #1
    // add r4, #0x1c
    // cmp r6, r0
    // blt _0224343E
    // mov r0, #0x86
    // lsl r0, r0, #2
    // ldr r6, [r5, r0]
    // add r0, r0, #4
    // ldr r0, [r5, r0]
    // cmp r6, r0
    // bge _022434B4
    // mov r0, #0x1c
    // mul r0, r6
    // ldr r7, _02243530 ; =ov40_02245E58
    // add r4, r5, r0
    // ldrb r0, [r4, #0x19]
    // cmp r0, #6
    // bne _02243494
    // ldr r0, [r4, #0xc]
    // mov r1, #1
    // bl ManagedSprite_SetAffineOverwriteMode
    // b _022434A6
    // lsl r1, r0, #2
    // ldr r1, [r7, r1]
    // ldr r0, [r4, #0xc]
    // add r2, r1, #0
    // bl ManagedSprite_SetAffineScale
    // ldrb r0, [r4, #0x19]
    // add r0, r0, #1
    // strb r0, [r4, #0x19]
    // mov r0, #0x87
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // add r6, r6, #1
    // add r4, #0x1c
    // cmp r6, r0
    // blt _02243484
    // mov r1, #2
    // lsl r1, r1, #8
    // ldr r0, [r5, r1]
    // add r0, r0, #1
    // str r0, [r5, r1]
    // ldr r0, [r5, r1]
    // cmp r0, #6
    // bne _02243526
    // sub r0, r1, #4
    // ldr r0, [r5, r0]
    // add r2, r0, #1
    // sub r0, r1, #4
    // str r2, [r5, r0]
    // b _02243526
    // bl ov40_022441F8
    // mov r1, #0xa9
    // lsl r1, r1, #2
    // ldr r0, [r5, r1]
    // cmp r0, #0
    // bne _022434F2
    // sub r1, r1, #4
    // ldr r1, [r5, r1]
    // add r0, r5, #0
    // bl ov40_022439CC
    // add r1, r0, #0
    // add r0, r5, #0
    // bl ov40_02243EB0
    // b _02243504
    // sub r1, r1, #4
    // ldr r1, [r5, r1]
    // add r0, r5, #0
    // bl ov40_022439F4
    // add r1, r0, #0
    // add r0, r5, #0
    // bl ov40_02243EB0
    // mov r0, #0x82
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // cmp r0, #0
    // beq _02243518
    // add r0, r5, #0
    // mov r1, #0
    // mov r2, #1
    // bl ov40_02243E80
    // add r0, r5, #0
    // bl ov40_022439B8
    // add r0, r5, #0
    // mov r1, #1
    // bl ov40_0224320C
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0224352C: .word ov40_02245E74
    // _02243530: .word ov40_02245E58
    // _02243534: .word 0x00000166
    // TODO: decompile
}




void ov40_02243538(void) {
    // push {r3, r4, r5, lr}
    // mov r1, #0x7d
    // add r4, r0, #0
    // lsl r1, r1, #2
    // ldr r1, [r4, r1]
    // lsl r2, r1, #2
    // ldr r1, _02243558 ; =ov40_02245C18
    // ldr r1, [r1, r2]
    // blx r1
    // add r5, r0, #0
    // bne _02243554
    // add r0, r4, #0
    // bl ov40_02243F88
    // add r0, r5, #0
    // pop {r3, r4, r5, pc}
    // _02243558: .word ov40_02245C18
    // TODO: decompile
}




void ov40_0224355C(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // add r7, r0, #0
    // mov r0, #0x64
    // mov r1, #0x6d
    // bl String_New
    // mov r1, #0xb2
    // str r0, [sp, #4]
    // mov r0, #1
    // lsl r1, r1, #2
    // str r0, [r7, r1]
    // mov r6, #0
    // add r0, r1, #4
    // str r6, [r7, r0]
    // add r0, r1, #0
    // add r0, #8
    // sub r1, #0xc4
    // str r6, [r7, r0]
    // ldr r0, [r7, r1]
    // cmp r0, #0
    // ble _022435FC
    // mov r0, #0xb3
    // lsl r0, r0, #2
    // add r4, r7, #0
    // add r5, r7, r0
    // ldr r0, [r4]
    // cmp r0, #0
    // bne _022435A8
    // mov r0, #1
    // str r0, [r4]
    // ldr r1, [r4, #8]
    // bl ov40_02244054
    // add r1, r0, #0
    // ldr r0, [r4, #0xc]
    // bl ManagedSprite_SetAnim
    // ldr r0, [r4]
    // sub r0, r0, #1
    // str r0, [sp, #8]
    // cmp r6, #0
    // beq _022435C2
    // ldr r0, [r5]
    // ldr r1, [r5, #4]
    // mov r2, #0xa
    // mov r3, #0
    // bl _ll_mul
    // str r0, [r5]
    // str r1, [r5, #4]
    // ldr r2, [r5]
    // ldr r1, [sp, #8]
    // ldr r0, [r5, #4]
    // add r2, r2, r1
    // ldr r1, _02243610 ; =0x00000000
    // str r2, [r5]
    // adc r0, r1
    // str r0, [r5, #4]
    // mov r0, #1
    // str r0, [sp]
    // mov r2, #1
    // ldr r0, [sp, #4]
    // ldr r1, [sp, #8]
    // add r3, r2, #0
    // bl String16_FormatInteger
    // mov r0, #0xb
    // lsl r0, r0, #6
    // ldr r0, [r7, r0]
    // ldr r1, [sp, #4]
    // bl String_Cat
    // mov r0, #0x81
    // lsl r0, r0, #2
    // ldr r0, [r7, r0]
    // add r6, r6, #1
    // add r4, #0x1c
    // cmp r6, r0
    // blt _02243590
    // ldr r0, [sp, #4]
    // bl String_Delete
    // add r0, r7, #0
    // mov r1, #3
    // bl ov40_0224320C
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _02243610: .word 0x00000000
    // TODO: decompile
}




void ov40_02243614(void) {
    // ldr r1, [r5, r0]
    // ldr r1, [r5, r1]
    // sub r1, #0x80
    // str r2, [r5, r1]
    // sub r1, #0x80
    // ldr r2, [r5, r1]
    // mul r1, r2
    // add r1, r5, r1
    // add r1, #0x94
    // str r2, [r5, r1]
    // add r1, #0x98
    // str r3, [r5, r1]
    // add r0, #0x9c
    // str r2, [r5, r0]
    // sub r0, #0x80
    // ldr r6, [r5, r0]
    // mul r4, r0
    // str r0, [r5, r4]
    // add r1, r5, r4
    // ldr r0, [r5, r4]
    ov40_02244054(0, *((u32*)((0x82 << 2) + 8)), 1, *((u32*)(0x1c + 4)));
    // add r0, r5, r4
    ManagedSprite_SetAnim(*((u32*)(r0 + 0xc)), r0);
    // add r0, r5, r4
    // mul r4, r0
    // add r1, r5, r4
    // ldr r0, [r5, r4]
    ov40_02244054(0x1c, *((u32*)((r6 - 1) + 8)));
    // add r0, r5, r4
    ManagedSprite_SetAnim(*((u32*)(r0 + 0xc)), r0);
    // add r0, r5, r4
    // str r2, [r5, r1]
    // str r3, [r5, r0]
    // add r1, #8
    // str r2, [r5, r1]
    // str r1, [r5, r0]
    // str r1, [r5, r0]
    // str r1, [r5, r0]
    ov40_0224320C(r5, 3, 1, *((u32*)(r0 + 4)));
}




void ov40_022436D4(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x64
    // mov r1, #0x8e
    // add r4, r0, #0
    // lsl r1, r1, #2
    // mov r0, #0
    // add r1, r4, r1
    // add r2, r4, #0
    // add r0, r0, #1
    // str r1, [r2, #0x10]
    // add r1, r1, #4
    // add r2, #0x1c
    // cmp r0, #0xc
    // blt _022436E4
    // ldr r5, _022437AC ; =ov40_02245C40
    // add r3, sp, #4
    // mov r2, #0x30
    // ldrh r1, [r5]
    // add r5, r5, #2
    // strh r1, [r3]
    // add r3, r3, #2
    // sub r2, r2, #1
    // bne _022436F6
    // cmp r0, #0x18
    // bge _02243764
    // add r2, sp, #4
    // lsl r1, r0, #3
    // add r1, r2, r1
    // lsl r2, r0, #2
    // mov r7, #0x5b
    // ldr r3, _022437B0 ; =0x0000023B
    // add r2, r4, r2
    // mvn r7, r7
    // mov r5, #0x5d
    // mov r6, #0x59
    // mvn r5, r5
    // mvn r6, r6
    // ldrsh r5, [r1, r5]
    // ldrsh r6, [r1, r6]
    // add r0, r0, #1
    // sub r6, r5, r6
    // mov r5, #0x8e
    // lsl r5, r5, #2
    // strb r6, [r2, r5]
    // mov r5, #0x5f
    // mov r6, #0x5b
    // mvn r5, r5
    // mvn r6, r6
    // ldrsh r5, [r1, r5]
    // ldrsh r6, [r1, r6]
    // sub r6, r5, r6
    // ldr r5, _022437B4 ; =0x0000023A
    // strb r6, [r2, r5]
    // mov r5, #0x5d
    // mov r6, #0x59
    // mvn r5, r5
    // mvn r6, r6
    // ldrsh r5, [r1, r5]
    // ldrsh r6, [r1, r6]
    // add r6, r5, r6
    // ldr r5, _022437B8 ; =0x00000239
    // strb r6, [r2, r5]
    // mov r5, #0x5f
    // mvn r5, r5
    // ldrsh r6, [r1, r5]
    // ldrsh r5, [r1, r7]
    // add r1, #8
    // add r5, r6, r5
    // strb r5, [r2, r3]
    // add r2, r2, #4
    // cmp r0, #0x18
    // blt _02243716
    // mov r0, #0x29
    // lsl r0, r0, #4
    // mov r3, #0x98
    // strb r3, [r4, r0]
    // mov r2, #0x20
    // add r1, r0, #2
    // strb r2, [r4, r1]
    // mov r2, #0xb8
    // add r1, r0, #1
    // strb r2, [r4, r1]
    // mov r1, #0x80
    // add r5, r0, #3
    // strb r1, [r4, r5]
    // add r5, r0, #4
    // strb r3, [r4, r5]
    // add r3, r0, #6
    // strb r1, [r4, r3]
    // add r1, r0, #5
    // strb r2, [r4, r1]
    // add r1, r0, #7
    // mov r2, #0xe0
    // strb r2, [r4, r1]
    // mov r1, #0x6d
    // sub r0, #0x58
    // str r1, [sp]
    // ldr r2, _022437BC ; =ov40_022437C0
    // add r0, r4, r0
    // mov r1, #0x18
    // add r3, r4, #0
    // bl TouchHitboxController_Create
    // mov r1, #0x8d
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // add sp, #0x64
    // pop {r4, r5, r6, r7, pc}
    // _022437AC: .word ov40_02245C40
    // _022437B0: .word 0x0000023B
    // _022437B4: .word 0x0000023A
    // _022437B8: .word 0x00000239
    // _022437BC: .word ov40_022437C0
    // TODO: decompile
}




void ov40_022437C0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r4, r2, #0
    // mov r2, #0x7d
    // lsl r2, r2, #2
    // add r5, r0, #0
    // ldr r0, [r4, r2]
    // cmp r0, #1
    // beq _022437D2
    // b _02243950
    // add r0, r2, #0
    // add r0, #0xa4
    // ldr r0, [r4, r0]
    // cmp r0, #1
    // beq _022437E2
    // mov r0, #1
    // add r2, #0xa4
    // str r0, [r4, r2]
    // cmp r1, #0
    // beq _022437E8
    // b _02243950
    // cmp r5, #0xb
    // bhi _0224381C
    // mov r0, #0x1c
    // mul r0, r5
    // add r2, r4, r0
    // ldr r0, [r2, #8]
    // cmp r0, #1
    // bne _02243806
    // mov r0, #0xa7
    // mov r1, #2
    // lsl r0, r0, #2
    // str r1, [r4, r0]
    // add r0, r0, #4
    // str r5, [r4, r0]
    // b _02243814
    // mov r0, #0xa7
    // mov r1, #1
    // lsl r0, r0, #2
    // str r1, [r4, r0]
    // ldr r1, [r2, #4]
    // add r0, r0, #4
    // str r1, [r4, r0]
    // ldr r0, _02243954 ; =0x0000057B
    // bl PlaySE
    // pop {r3, r4, r5, r6, r7, pc}
    // cmp r5, #0x16
    // bne _02243830
    // mov r0, #0x6e
    // mov r1, #0
    // lsl r0, r0, #2
    // strh r1, [r4, r0]
    // mov r1, #2
    // add r0, r0, #2
    // strh r1, [r4, r0]
    // b _02243862
    // cmp r5, #0x17
    // bne _02243844
    // mov r0, #0x6e
    // mov r1, #3
    // lsl r0, r0, #2
    // strh r1, [r4, r0]
    // mov r1, #2
    // add r0, r0, #2
    // strh r1, [r4, r0]
    // b _02243862
    // add r0, r5, #0
    // sub r0, #0xc
    // mov r1, #5
    // bl _u32_div_f
    // mov r0, #0x6e
    // lsl r0, r0, #2
    // strh r1, [r4, r0]
    // add r0, r5, #0
    // sub r0, #0xc
    // mov r1, #5
    // bl _u32_div_f
    // ldr r1, _02243958 ; =0x000001BA
    // strh r0, [r4, r1]
    // cmp r5, #0xc
    // blo _02243934
    // cmp r5, #0x15
    // bhi _02243934
    // mov r0, #0x82
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // beq _02243950
    // ldr r0, _02243954 ; =0x0000057B
    // bl PlaySE
    // mov r0, #0x62
    // lsl r0, r0, #2
    // ldr r7, [r4, r0]
    // mov r0, #0x1c
    // add r6, r7, #0
    // mul r6, r0
    // add r0, r5, #0
    // sub r0, #0xb
    // str r0, [r4, r6]
    // add r1, r4, r6
    // ldr r0, [r4, r6]
    // ldr r1, [r1, #8]
    // bl ov40_02244054
    // add r1, r0, #0
    // add r0, r4, r6
    // ldr r0, [r0, #0xc]
    // bl ManagedSprite_SetAnim
    // mov r1, #1
    // add r0, r4, #0
    // add r2, r1, #0
    // bl ov40_02243E80
    // sub r5, #0xc
    // add r0, r4, #0
    // add r1, r5, #0
    // bl ov40_02243EEC
    // add r0, r4, #0
    // mov r1, #1
    // mov r2, #0
    // bl ov40_02243E80
    // add r0, r4, #0
    // mov r1, #2
    // mov r2, #1
    // bl ov40_02243E80
    // add r0, r4, #0
    // add r1, r5, #0
    // mov r2, #2
    // bl ov40_02243F38
    // mov r0, #0x73
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #3
    // bl ManagedSprite_SetAnim
    // add r0, r4, r6
    // ldr r2, [r0, #4]
    // mov r0, #0x81
    // lsl r0, r0, #2
    // ldr r3, [r4, r0]
    // add r1, r7, #1
    // cmp r1, r3
    // bne _02243904
    // add r1, r0, #0
    // mov r2, #1
    // add r1, #0x98
    // str r2, [r4, r1]
    // add r1, r0, #0
    // mov r2, #0
    // add r1, #0x9c
    // str r2, [r4, r1]
    // add r0, #0xa0
    // str r2, [r4, r0]
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r3, #0x1c
    // mul r3, r1
    // add r3, r4, r3
    // ldr r3, [r3, #4]
    // cmp r2, r3
    // beq _02243926
    // add r1, r0, #0
    // mov r2, #1
    // add r1, #0x98
    // str r2, [r4, r1]
    // add r1, r0, #0
    // add r1, #0x9c
    // str r3, [r4, r1]
    // mov r1, #0
    // add r0, #0xa0
    // str r1, [r4, r0]
    // pop {r3, r4, r5, r6, r7, pc}
    // add r2, r0, #0
    // mov r3, #2
    // add r2, #0x98
    // str r3, [r4, r2]
    // add r0, #0x9c
    // str r1, [r4, r0]
    // pop {r3, r4, r5, r6, r7, pc}
    // cmp r5, #0x16
    // ldr r0, _02243954 ; =0x0000057B
    // bne _02243946
    // bl PlaySE
    // add r0, r4, #0
    // bl ov40_02243614
    // pop {r3, r4, r5, r6, r7, pc}
    // bl PlaySE
    // add r0, r4, #0
    // bl ov40_0224355C
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02243954: .word 0x0000057B
    // _02243958: .word 0x000001BA
    // TODO: decompile
}




void ov40_0224395C(void) {
    // ldr r2, [r4, r1]
    // ldr r1, [r4, r1]
    ov40_0224301C(((0xa7 << 2) + 4));
    ov40_02244060(r4);
    ov40_022440A0(r4, 1);
    ov40_0224320C(r4, 2);
    // str r1, [r4, r0]
    // ldr r1, [r4, r1]
    ov40_02243EB0((0xa7 << 2), (0xff + 4));
    ov40_022439B8(r4);
}




void ov40_022439B8(void) {
    // str r3, [r0, r2]
    // str r3, [r0, r1]
    // add r2, #8
    // str r3, [r0, r2]
}




void ov40_022439CC(void) {
    // ldr r4, [r0, r2]
    // add r0, #0x1c
}




void ov40_022439F4(void) {
    // ldr r6, [r0, r2]
    // add r0, #0x1c
}




void ov40_02243A28(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x1c
    // mov r2, #0x89
    // lsl r2, r2, #2
    // add r1, r2, #4
    // ldr r5, [r0, r1]
    // add r1, r2, #0
    // add r1, #0xc
    // ldr r1, [r0, r1]
    // ldr r6, [r0, r2]
    // str r1, [sp, #0x18]
    // add r1, r2, #0
    // add r1, #8
    // ldr r7, [r0, r1]
    // sub r1, r2, #4
    // ldr r4, [r0, r1]
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x6d
    // str r0, [sp, #0xc]
    // add r0, r4, #0
    // mov r1, #0x36
    // add r2, r7, #0
    // mov r3, #3
    // bl GfGfxLoader_LoadCharDataFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x6d
    // str r0, [sp, #0xc]
    // add r0, r4, #0
    // mov r1, #0x2b
    // add r2, r7, #0
    // mov r3, #3
    // bl GfGfxLoader_LoadScrnDataFromOpenNarc
    // str r4, [sp]
    // mov r0, #0x2c
    // str r0, [sp, #4]
    // mov r0, #0
    // str r0, [sp, #8]
    // mov r0, #1
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // mov r0, #0xfa
    // lsl r0, r0, #2
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x18]
    // mov r1, #2
    // add r2, r6, #0
    // add r3, r5, #0
    // bl SpriteSystem_LoadPaletteBufferFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // mov r0, #0xfa
    // lsl r0, r0, #2
    // str r0, [sp, #8]
    // add r0, r6, #0
    // add r1, r5, #0
    // add r2, r4, #0
    // mov r3, #0x28
    // bl SpriteSystem_LoadCharResObjFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #0xfa
    // lsl r0, r0, #2
    // str r0, [sp, #4]
    // add r0, r6, #0
    // add r1, r5, #0
    // add r2, r4, #0
    // mov r3, #0x29
    // bl SpriteSystem_LoadCellResObjFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #0xfa
    // lsl r0, r0, #2
    // str r0, [sp, #4]
    // add r0, r6, #0
    // add r1, r5, #0
    // add r2, r4, #0
    // mov r3, #0x2a
    // bl SpriteSystem_LoadAnimResObjFromOpenNarc
    // str r4, [sp]
    // mov r0, #0x58
    // str r0, [sp, #4]
    // mov r0, #0
    // str r0, [sp, #8]
    // mov r0, #1
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r0, _02243B44 ; =0x000003E9
    // mov r1, #2
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x18]
    // add r2, r6, #0
    // add r3, r5, #0
    // bl SpriteSystem_LoadPaletteBufferFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // ldr r0, _02243B44 ; =0x000003E9
    // add r1, r5, #0
    // str r0, [sp, #8]
    // add r0, r6, #0
    // add r2, r4, #0
    // mov r3, #0x57
    // bl SpriteSystem_LoadCharResObjFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, _02243B44 ; =0x000003E9
    // add r1, r5, #0
    // str r0, [sp, #4]
    // add r0, r6, #0
    // add r2, r4, #0
    // mov r3, #0x55
    // bl SpriteSystem_LoadCellResObjFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, _02243B44 ; =0x000003E9
    // add r1, r5, #0
    // str r0, [sp, #4]
    // add r0, r6, #0
    // add r2, r4, #0
    // mov r3, #0x56
    // bl SpriteSystem_LoadAnimResObjFromOpenNarc
    // add sp, #0x1c
    // pop {r4, r5, r6, r7, pc}
    // _02243B44: .word 0x000003E9
    // TODO: decompile
}




void ov40_02243B48(void) {
    // ldr r0, [r5, r0]
    ManagedSprite_SetDrawFlag(*((u32*)(r0 + 0xc)), 1);
    // ldr r0, [r5, r7]
    // add r4, #0x1c
    // ldr r0, [r5, r6]
    ManagedSprite_SetDrawFlag(1);
    // add r5, #0x1c
}




void ov40_02243B94(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r0, #0
    // mov r0, #0x81
    // lsl r0, r0, #2
    // ldr r0, [r6, r0]
    // mov r4, #0
    // cmp r0, #0
    // ble _02243BBA
    // mov r7, #0x81
    // add r5, r6, #0
    // lsl r7, r7, #2
    // ldr r0, [r5, #0xc]
    // bl Sprite_DeleteAndFreeResources
    // ldr r0, [r6, r7]
    // add r4, r4, #1
    // add r5, #0x1c
    // cmp r4, r0
    // blt _02243BAA
    // mov r7, #0x57
    // mov r5, #0
    // add r4, r6, #0
    // lsl r7, r7, #2
    // ldr r0, [r4, r7]
    // bl Sprite_DeleteAndFreeResources
    // add r5, r5, #1
    // add r4, #0x1c
    // cmp r5, #2
    // blt _02243BC2
    // mov r7, #0x65
    // mov r5, #0
    // add r4, r6, #0
    // lsl r7, r7, #2
    // ldr r0, [r4, r7]
    // bl Sprite_DeleteAndFreeResources
    // add r5, r5, #1
    // add r4, #0x1c
    // cmp r5, #3
    // blt _02243BD8
    // mov r0, #0x8a
    // lsl r0, r0, #2
    // mov r1, #0xfa
    // ldr r0, [r6, r0]
    // lsl r1, r1, #2
    // bl SpriteManager_UnloadCharObjById
    // mov r0, #0x8a
    // lsl r0, r0, #2
    // mov r1, #0xfa
    // ldr r0, [r6, r0]
    // lsl r1, r1, #2
    // bl SpriteManager_UnloadPlttObjById
    // mov r0, #0x8a
    // lsl r0, r0, #2
    // mov r1, #0xfa
    // ldr r0, [r6, r0]
    // lsl r1, r1, #2
    // bl SpriteManager_UnloadCellObjById
    // mov r0, #0x8a
    // lsl r0, r0, #2
    // mov r1, #0xfa
    // ldr r0, [r6, r0]
    // lsl r1, r1, #2
    // bl SpriteManager_UnloadAnimObjById
    // mov r0, #0x8a
    // lsl r0, r0, #2
    // ldr r0, [r6, r0]
    // ldr r1, _02243C50 ; =0x000003E9
    // bl SpriteManager_UnloadCharObjById
    // mov r0, #0x8a
    // lsl r0, r0, #2
    // ldr r0, [r6, r0]
    // ldr r1, _02243C50 ; =0x000003E9
    // bl SpriteManager_UnloadPlttObjById
    // mov r0, #0x8a
    // lsl r0, r0, #2
    // ldr r0, [r6, r0]
    // ldr r1, _02243C50 ; =0x000003E9
    // bl SpriteManager_UnloadCellObjById
    // mov r0, #0x8a
    // lsl r0, r0, #2
    // ldr r0, [r6, r0]
    // ldr r1, _02243C50 ; =0x000003E9
    // bl SpriteManager_UnloadAnimObjById
    // pop {r3, r4, r5, r6, r7, pc}
    // _02243C50: .word 0x000003E9
    // TODO: decompile
}




void ov40_02243C54(void) {
    // str r0, [sp]
    // str r0, [sp, #0xc]
    // ldr r1, [sp]
    // ldr r1, [r1, r0]
    // ldr r7, [sp, #0xc]
    // str r1, [sp, #8]
    // ldr r1, [sp]
    // ldr r1, [r1, r2]
    // add r2, sp, #0x10
    // str r1, [sp, #4]
    // sub r1, #0xf4
    // strh r1, [r2]
    *((u16*)(((0x89 << 2) + 4) + 2)) = 0xe0;
    // ldr r1, [sp, #0xc]
    // sub r0, #0x20
    *((u16*)(((0x89 << 2) + 4) + 4)) = 0xe0;
    *((u16*)(((0x89 << 2) + 4) + 6)) = 0xe0;
    // str r1, [sp, #0x18]
    // ldr r1, [sp, #0xc]
    // str r1, [sp, #0x3c]
    // str r1, [sp, #0x40]
    // str r1, [sp, #0x1c]
    // str r1, [sp, #0x24]
    // str r1, [sp, #0x28]
    // str r1, [sp, #0x2c]
    // str r1, [sp, #0x30]
    // str r1, [sp, #0x34]
    // str r1, [sp, #0x38]
    // ldr r1, [sp]
    // str r2, [sp, #0x20]
    // ldr r0, [r1, r0]
    // ldr r1, [r4, r0]
    // ldr r0, [sp, #0xc]
    // add r0, r0, r1
    // add r2, sp, #0x10
    // ldr r0, [sp, #8]
    // ldr r1, [sp, #4]
    SpriteSystem_NewSprite(((0x15 << 4) + 1), (1 - 2), 1);
    // str r0, [r4, r1]
    // ldr r0, [r4, r0]
    ManagedSprite_SetDrawFlag((0x57 << 2), 0);
    // ldr r0, [r4, r0]
    // asr r1, r1, #0x10
    ManagedSprite_SetPositionXY((0x57 << 2), (r6 << 0x10), 0x18);
    // ldr r0, [r4, r0]
    ManagedSprite_SetAnim((0x57 << 2), 0x16);
    // ldr r0, [r4, r0]
    ManagedSprite_TickFrame((0x57 << 2));
    // ldr r0, [sp, #0xc]
    // add r4, #0x1c
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #8]
    // ldr r1, [sp, #4]
    SpriteSystem_NewSprite((r0 + 1));
    *((u32*)(r5 + 0xc)) = r0;
    ManagedSprite_SetDrawFlag(0);
    // asr r1, r1, #0x10
    ManagedSprite_SetPositionXY(*((u32*)(r5 + 0xc)), (r6 << 0x10), 0x18);
    ov40_02244054(*((u32*)r5), *((u32*)(r5 + 8)));
    ManagedSprite_SetAnim(*((u32*)(r5 + 0xc)), r0);
    ManagedSprite_SetAffineOverwriteMode(*((u32*)(r5 + 0xc)), 0);
    ManagedSprite_TickFrame(*((u32*)(r5 + 0xc)));
    // add r5, #0x1c
    // ldr r1, [sp]
    // ldr r0, [r1, r0]
    // add r6, #8
}




void ov40_02243D64(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0x34
    // add r5, r0, #0
    // mov r0, #0x89
    // lsl r0, r0, #2
    // ldr r6, [r5, r0]
    // add r0, r0, #4
    // ldr r4, [r5, r0]
    // mov r2, #0
    // add r0, sp, #0
    // strh r2, [r0]
    // strh r2, [r0, #2]
    // strh r2, [r0, #4]
    // strh r2, [r0, #6]
    // ldr r0, _02243E7C ; =0x000003E9
    // mov r1, #1
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x1c]
    // str r0, [sp, #0x20]
    // sub r0, r1, #2
    // str r1, [sp, #0x10]
    // str r2, [sp, #8]
    // str r2, [sp, #0x2c]
    // str r2, [sp, #0x30]
    // str r2, [sp, #0xc]
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x28]
    // add r0, r6, #0
    // add r1, r4, #0
    // add r2, sp, #0
    // bl SpriteSystem_NewSprite
    // mov r1, #0x65
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // add r0, r6, #0
    // add r1, r4, #0
    // add r2, sp, #0
    // bl SpriteSystem_NewSprite
    // mov r1, #0x1b
    // lsl r1, r1, #4
    // str r0, [r5, r1]
    // add r0, r6, #0
    // add r1, r4, #0
    // add r2, sp, #0
    // bl SpriteSystem_NewSprite
    // mov r1, #0x73
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // add r0, r5, #0
    // mov r1, #0
    // bl ov40_02243EB0
    // mov r0, #0x65
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #0
    // bl ManagedSprite_SetAnim
    // mov r0, #0x65
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // bl ManagedSprite_TickFrame
    // mov r2, #0x6e
    // lsl r2, r2, #2
    // mov r1, #0
    // strh r1, [r5, r2]
    // add r0, r2, #2
    // strh r1, [r5, r0]
    // mov r0, #1
    // sub r2, #0x14
    // str r0, [r5, r2]
    // add r0, r5, #0
    // bl ov40_02243EEC
    // mov r1, #0x1b
    // lsl r1, r1, #4
    // ldr r0, [r5, r1]
    // sub r1, #0xc
    // ldr r1, [r5, r1]
    // bl ManagedSprite_SetAnim
    // mov r0, #0x1b
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // bl ManagedSprite_TickFrame
    // mov r0, #0x1b
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // mov r1, #1
    // bl ManagedSprite_SetOamMode
    // mov r2, #0x75
    // lsl r2, r2, #2
    // mov r1, #0
    // strh r1, [r5, r2]
    // add r0, r2, #2
    // strh r1, [r5, r0]
    // mov r0, #1
    // sub r2, #0x14
    // str r0, [r5, r2]
    // add r0, r5, #0
    // bl ov40_02243EEC
    // mov r1, #0x73
    // lsl r1, r1, #2
    // ldr r0, [r5, r1]
    // sub r1, #0xc
    // ldr r1, [r5, r1]
    // bl ManagedSprite_SetAnim
    // mov r0, #0x73
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // bl ManagedSprite_TickFrame
    // mov r0, #0x73
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #1
    // bl ManagedSprite_SetOamMode
    // add r0, r5, #0
    // mov r1, #1
    // mov r2, #0
    // bl ov40_02243E80
    // add r0, r5, #0
    // mov r1, #2
    // mov r2, #0
    // bl ov40_02243E80
    // add sp, #0x34
    // pop {r3, r4, r5, r6, pc}
    // nop
    // _02243E7C: .word 0x000003E9
    // TODO: decompile
}




void ov40_02243E80(void) {
    // mul r2, r1
    // add r1, r0, r2
    // ldr r0, [r1, r0]
    ManagedSprite_SetDrawFlag((0x65 << 2), 1, 0x1c);
    // mul r2, r1
    // add r1, r0, r2
    // ldr r0, [r1, r0]
    ManagedSprite_SetDrawFlag((0x65 << 2), 0, 0x1c);
}




void ov40_02243EB0(void) {
    // mul r0, r1
    // add r0, r4, r0
    // str r1, [r4, r2]
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    ManagedSprite_GetPositionXY(*((u32*)(0x1c + 0xc)), (0x62 << 2));
    // add r3, sp, #0
    // ldrsh r2, [r3, r2]
    // ldrsh r1, [r3, r1]
    // add r2, #0x10
    // ldr r0, [r4, r0]
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXY((0x65 << 2), 2, (0 << 0x10));
}




void ov40_02243EEC(void) {
    // add r1, #0xc
    // ldr r0, [r3, r2]
    // add r3, r3, r1
    // add r1, #0x8a
    // ldrb r4, [r3, r1]
    // add r1, #0x8b
    // ldrb r1, [r3, r1]
    // add r4, r4, r1
    // add r1, r4, r1
    // add r4, #0x88
    // add r2, #0x89
    // asr r1, r1, #0x10
    // ldrb r4, [r3, r4]
    // ldrb r2, [r3, r2]
    // asr r1, r1, #0x10
    // add r3, r4, r2
    // add r2, r3, r2
    // asr r2, r2, #0x10
    // sub r2, #8
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXY((((r4 >> 0x1f) << 0xf) << 0x10), (((r0 >> 0x1f) << 0xf) << 0x10), r0);
}




void ov40_02243F38(void) {
    // mul r0, r2
    // add r1, #0xc
    // add r0, r3, r0
    // add r3, r3, r1
    // add r1, #0xa6
    // ldrb r4, [r3, r1]
    // add r1, #0xa7
    // ldrb r1, [r3, r1]
    // ldr r0, [r0, r2]
    // add r4, r4, r1
    // add r1, r4, r1
    // add r4, #0xa4
    // add r2, #0xa5
    // asr r1, r1, #0x10
    // ldrb r4, [r3, r4]
    // ldrb r2, [r3, r2]
    // asr r1, r1, #0x10
    // add r3, r4, r2
    // add r2, r3, r2
    // asr r2, r2, #0x10
    // sub r2, #8
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXY(0x1c, (((r4 >> 0x1f) << 0xf) << 0x10), (((r0 >> 0x1f) << 0xf) << 0x10), r0);
}




void ov40_02243F88(void) {
    // ldr r0, [r5, r0]
    ManagedSprite_TickFrame((0x65 << 2));
    // ldr r0, [r5, r0]
    ManagedSprite_TickFrame((0x1b << 4));
    // ldr r0, [r5, r0]
    ManagedSprite_TickFrame((0x73 << 2));
    // add r4, #0x1c
    // ldr r0, [r4, r7]
    ManagedSprite_GetActiveAnim();
    // ldr r0, [r4, r0]
    ManagedSprite_IsAnimated((0x65 << 2));
    // ldr r0, [r4, r0]
    // ldr r1, [r4, r1]
    ManagedSprite_SetAnim((0x65 << 2), (0x62 << 2));
    // ldr r0, [r5, r0]
    ov40_02243E80(r5, 1, 0);
    ov40_02243E80(r5, 1, 1);
    ov40_02243E80(r5, 2, 0);
    // ldr r1, [r4, r1]
    // ldr r0, [r4, r0]
    ManagedSprite_SetAnim((0x65 << 2), (0x62 << 2));
    // ldr r0, [r5, r0]
    ManagedSprite_GetActiveAnim((0x73 << 2));
    // ldr r0, [r5, r0]
    ov40_02243E80(r5, 1, 0);
    ov40_02243E80(r5, 1, 1);
    // add r4, #0x1c
}




void ov40_02244054(void) {
    // add r0, r2, r0
}




void ov40_02244060(void) {
    // ldr r1, [r0, r1]
    // ldr r5, [r0, r7]
    // ldr r5, [r0, r6]
    *((u32*)(r0 + 8)) = 1;
    *((u32*)(r0 + 8)) = 0;
    // ldr r5, [r0, r5]
    // add r4, #0x1c
}




void ov40_022440A0(void) {
    // str r1, [sp, #4]
    // str r0, [sp]
    // ldr r0, [r0, r1]
    // ldr r0, [sp]
    // str r4, [sp, #8]
    // add r2, r0, r2
    // sub r0, #0x2c
    // ldrsh r5, [r2, r0]
    // ldr r0, [sp]
    // ldr r0, [r0, r1]
    // ldr r7, [sp]
    // ldr r1, [sp]
    // ldr r0, [r1, r0]
    // ldr r1, [r2, r1]
    // add r5, #0x14
    // asr r5, r0, #0x10
    // add r5, #0x20
    // asr r5, r0, #0x10
    // add r5, #0x14
    // asr r5, r0, #0x10
    // add r5, #8
    // asr r5, r0, #0x10
    // add r1, sp, #0xc
    // add r1, #2
    // add r2, sp, #0xc
    ManagedSprite_GetPositionXY(*((u32*)(r7 + 0xc)), (0x85 << 2), ((0x82 << 2) - 4));
    // ldr r0, [sp, #4]
    // add r3, sp, #0xc
    // ldrsh r2, [r3, r2]
    ManagedSprite_SetPositionXY(*((u32*)(r7 + 0xc)), r5, 0);
    // add r1, sp, #0xc
    // ldrsh r0, [r1, r0]
    // sub r1, r5, r0
    // add r0, r1, r0
    // asr r0, r0, #1
    *((u16*)(r7 + 0x14)) = (r1 >> 0x1f);
    *((u16*)(r7 + 0x16)) = 0;
    *((u8*)(r7 + 0x18)) = 2;
    *((u8*)(r7 + 0x19)) = 0;
    // ldr r0, [r6, r0]
    // ldr r0, [sp, #8]
    // add r1, sp, #0xc
    // ldr r0, [r6, r0]
    // add r1, #2
    // add r2, sp, #0xc
    ManagedSprite_GetPositionXY((0x57 << 2));
    // ldr r1, [sp]
    // ldr r0, [r1, r0]
    // ldr r1, [r2, r1]
    // add r5, #8
    // asr r5, r0, #0x10
    // add r5, #0x14
    // asr r5, r0, #0x10
    // add r5, #8
    // asr r5, r0, #0x10
    // ldr r0, [sp, #4]
    // add r3, sp, #0xc
    // ldrsh r2, [r3, r2]
    // ldr r0, [r6, r0]
    ManagedSprite_SetPositionXY((0x57 << 2), r5, 0);
    // add r1, sp, #0xc
    // ldrsh r0, [r1, r0]
    // sub r1, r5, r0
    // add r0, r1, r0
    // asr r1, r0, #1
    // strh r1, [r6, r0]
    // strh r1, [r6, r0]
    // strb r1, [r6, r0]
    // ldr r0, [sp, #8]
    // add r6, #0x1c
    // str r0, [sp, #8]
    // ldr r1, [sp]
    // ldr r0, [r1, r0]
    // add r7, #0x1c
}




void ov40_022441F8(void) {
    // ldr r0, [r6, r0]
    // ldr r0, [r6, r0]
    // ldr r0, [r6, r0]
    // str r0, [sp]
    // str r0, [sp]
    // add r2, sp, #4
    // add r1, sp, #4
    // add r2, #2
    ManagedSprite_GetPositionXY(*((u32*)(r0 + 0xc)));
    // add r1, sp, #4
    // ldrsh r0, [r1, r0]
    // sub r1, r0, r7
    // strb r1, [r0]
    // add r1, sp, #4
    // ldrsh r1, [r1, r0]
    // ldr r0, [sp]
    // sub r1, r1, r0
    *((u8*)(*((u32*)(r5 + 0x10)) + 2)) = r1;
    // add r1, sp, #4
    // ldrsh r0, [r1, r0]
    // add r1, r0, r7
    *((u8*)(*((u32*)(r5 + 0x10)) + 1)) = r1;
    // add r1, sp, #4
    // ldrsh r1, [r1, r0]
    // ldr r0, [sp]
    // add r1, r1, r0
    *((u8*)(*((u32*)(r5 + 0x10)) + 3)) = r1;
    *((u8*)(*((u32*)(r5 + 0x10)) + 2)) = (*((u8*)(*((u32*)(r5 + 0x10)) + 2)) - 4);
    // ldr r0, [r6, r0]
    // add r5, #0x1c
}




void ov40_0224428C(void) {
    // push {r4, r5, lr}
    // sub sp, #0x14
    // ldr r5, _022442C8 ; =0x000008A4
    // add r2, r1, #0
    // add r4, r0, #0
    // mov r1, #2
    // bl ov40_0222C6C8
    // add r0, r4, r5
    // bl InitWindow
    // mov r0, #0x13
    // str r0, [sp]
    // mov r0, #0x1e
    // str r0, [sp, #4]
    // mov r0, #4
    // str r0, [sp, #8]
    // mov r0, #0xe
    // str r0, [sp, #0xc]
    // mov r0, #0x4b
    // lsl r0, r0, #2
    // str r0, [sp, #0x10]
    // ldr r0, [r4, #0x24]
    // add r1, r4, r5
    // mov r2, #2
    // mov r3, #1
    // bl AddWindowParameterized
    // add sp, #0x14
    // pop {r4, r5, pc}
    // _022442C8: .word 0x000008A4
    // TODO: decompile
}




void ov40_022442CC(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _022442EC ; =0x000008A4
    // add r0, r4, r0
    // bl ClearWindowTilemapAndCopyToVram
    // ldr r0, _022442EC ; =0x000008A4
    // add r0, r4, r0
    // bl RemoveWindow
    // mov r0, #4
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // pop {r4, pc}
    // nop
    // _022442EC: .word 0x000008A4
    // TODO: decompile
}




void ov40_022442F0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x18
    // ldr r3, _022443A8 ; =0x0000011A
    // add r5, r0, #0
    // add r0, r1, #0
    // str r1, [sp, #0x10]
    // cmp r0, r3
    // bne _0224436A
    // lsl r0, r2, #2
    // add r1, r5, r0
    // ldr r0, _022443AC ; =0x000008A4
    // sub r0, #0x18
    // ldr r7, [r1, r0]
    // mov r0, #0x6d
    // bl ov40_0222DAB0
    // add r6, r0, #0
    // mov r0, #0xff
    // mov r1, #0x6d
    // bl String_New
    // add r4, r0, #0
    // add r0, r7, #0
    // mov r1, #0x6d
    // bl sub_020315B8
    // str r0, [sp, #0x14]
    // ldr r1, [sp, #0x14]
    // add r0, r5, #0
    // bl ov40_02230DCC
    // ldr r0, [r5, #0x48]
    // ldr r1, [sp, #0x10]
    // bl NewString_ReadMsgData
    // add r7, r0, #0
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #2
    // mov r1, #0
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x14]
    // add r0, r6, #0
    // add r3, r1, #0
    // bl BufferString
    // add r0, r6, #0
    // add r1, r4, #0
    // add r2, r7, #0
    // bl StringExpandPlaceholders
    // ldr r0, [sp, #0x14]
    // bl String_Delete
    // add r0, r7, #0
    // bl String_Delete
    // add r0, r6, #0
    // bl MessageFormat_Delete
    // b _02244372
    // ldr r0, [r5, #0x48]
    // bl NewString_ReadMsgData
    // add r4, r0, #0
    // ldr r0, _022443AC ; =0x000008A4
    // mov r1, #0xcc
    // add r0, r5, r0
    // bl FillWindowPixelBuffer
    // mov r1, #0
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _022443B0 ; =0x000F0D0C
    // add r2, r4, #0
    // str r0, [sp, #8]
    // ldr r0, _022443AC ; =0x000008A4
    // add r3, r1, #0
    // add r0, r5, r0
    // str r1, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // ldr r0, _022443AC ; =0x000008A4
    // add r0, r5, r0
    // bl ScheduleWindowCopyToVram
    // add r0, r4, #0
    // bl String_Delete
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // _022443A8: .word 0x0000011A
    // _022443AC: .word 0x000008A4
    // _022443B0: .word 0x000F0D0C
    // TODO: decompile
}




void ov40_022443B4(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // add r5, r0, #0
    // mov r0, #0x86
    // lsl r0, r0, #4
    // ldr r4, [r5, r0]
    // add r6, r4, #0
    // add r6, #0x10
    // add r0, r6, #0
    // bl InitWindow
    // mov r2, #6
    // str r2, [sp]
    // mov r0, #0xa
    // str r0, [sp, #4]
    // mov r0, #2
    // str r0, [sp, #8]
    // mov r0, #0xe
    // str r0, [sp, #0xc]
    // mov r0, #1
    // str r0, [sp, #0x10]
    // ldr r0, [r5, #0x24]
    // add r1, r6, #0
    // mov r3, #4
    // bl AddWindowParameterized
    // add r0, r6, #0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // ldr r0, [r5, #0x48]
    // mov r1, #0x82
    // bl NewString_ReadMsgData
    // add r7, r0, #0
    // add r0, r6, #0
    // add r1, r7, #0
    // bl ov40_022306C0
    // mov r1, #0
    // add r3, r0, #0
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _02244490 ; =0x000F0D00
    // add r2, r7, #0
    // str r0, [sp, #8]
    // add r0, r6, #0
    // str r1, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r7, #0
    // bl String_Delete
    // add r0, r6, #0
    // bl ScheduleWindowCopyToVram
    // add r4, #0x20
    // add r0, r4, #0
    // bl InitWindow
    // mov r2, #6
    // str r2, [sp]
    // mov r0, #0xa
    // str r0, [sp, #4]
    // mov r0, #2
    // str r0, [sp, #8]
    // mov r0, #0xe
    // str r0, [sp, #0xc]
    // mov r0, #0x15
    // str r0, [sp, #0x10]
    // ldr r0, [r5, #0x24]
    // add r1, r4, #0
    // mov r3, #0x12
    // bl AddWindowParameterized
    // add r0, r4, #0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // ldr r0, [r5, #0x48]
    // mov r1, #0x83
    // bl NewString_ReadMsgData
    // add r5, r0, #0
    // add r0, r4, #0
    // add r1, r5, #0
    // bl ov40_022306C0
    // mov r1, #0
    // add r3, r0, #0
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _02244490 ; =0x000F0D00
    // add r2, r5, #0
    // str r0, [sp, #8]
    // add r0, r4, #0
    // str r1, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r5, #0
    // bl String_Delete
    // add r0, r4, #0
    // bl ScheduleWindowCopyToVram
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _02244490: .word 0x000F0D00
    // TODO: decompile
}




void ov40_02244494(void) {
    // ldr r4, [r0, r1]
    // add r0, #0x10
    ClearWindowTilemapAndCopyToVram(r4, (0x86 << 4));
    // add r0, #0x10
    RemoveWindow(r4);
    // add r0, #0x20
    ClearWindowTilemapAndCopyToVram(r4);
    // add r4, #0x20
    RemoveWindow(r4);
}




void ov40_022444C0(void) {
    Heap_Alloc(0x6d, 0x30);
    memset(0, 0x30);
    // str r4, [r5, r0]
    BgClearTilemapBufferAndCommit(*((u32*)(r5 + 0x24)), 2);
    BgClearTilemapBufferAndCommit(*((u32*)(r5 + 0x24)), 3);
    BgClearTilemapBufferAndCommit(*((u32*)(r5 + 0x24)), 6);
    BgClearTilemapBufferAndCommit(*((u32*)(r5 + 0x24)), 7);
    ov40_0222D9E8(r4, (r4 + 4), 0);
    ov40_0222BF80(r5, 1);
}




void ov40_02244514(void) {
    // ldr r4, [r5, r1]
    // add r0, #8
    ov40_0222DA84(r4, 1);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r5 + 0x28)), 2, 0xc, ((*((u32*)(r4 + 8)) << 0x18) >> 0x18));
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r5 + 0x28)), 3, 0xc, ((*((u32*)(r4 + 8)) << 0x18) >> 0x18));
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r5 + 0x28)), 1, 2, ((*((u32*)(r4 + 8)) << 0x18) >> 0x18));
    SetBgPriority(0, 0);
    SetBgPriority(1, 3);
    SetBgPriority(2, 0);
    SetBgPriority(3, 2);
    SetBgPriority(4, 0);
    SetBgPriority(5, 3);
    SetBgPriority(6, 1);
    SetBgPriority(7, 2);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharDataFromOpenNarc(*((u32*)(r5 + 0x14)), 0x3e, *((u32*)(r5 + 0x24)), 3);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharDataFromOpenNarc(*((u32*)(r5 + 0x14)), 0x3e, *((u32*)(r5 + 0x24)), 7);
    ov40_02230964(r5, 1);
    ov40_0222D874(r5);
    ov40_02230964(r5, 0);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    ov40_0222FB90((*((u32*)(r5 + 8)) + 1), 0);
    ov40_0222BF80(r5, 2);
}




void ov40_0224462C(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x10
    // mov r1, #0x86
    // add r4, r0, #0
    // lsl r1, r1, #4
    // ldr r5, [r4, r1]
    // ldr r1, [r4, #8]
    // cmp r1, #6
    // bls _02244640
    // b _02244808
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _0224464C: ; jump table
    // bl ov40_022443B4
    // add r0, r4, #0
    // mov r1, #0
    // bl ov40_0224428C
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x6d
    // str r0, [sp, #0xc]
    // ldr r0, [r4, #0x14]
    // ldr r2, [r4, #0x24]
    // mov r1, #0x54
    // mov r3, #7
    // bl GfGfxLoader_LoadScrnDataFromOpenNarc
    // mov r0, #8
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #8
    // mov r1, #1
    // bl GfGfx_EngineBTogglePlanes
    // mov r0, #4
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #4
    // mov r1, #0
    // bl GfGfx_EngineBTogglePlanes
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _0224481E
    // add r0, r5, #0
    // add r0, #8
    // mov r1, #0
    // bl ov40_0222DA84
    // add r0, r5, #0
    // add r1, r5, #4
    // mov r2, #0
    // mov r3, #2
    // bl ov40_0222DA00
    // cmp r0, #0
    // beq _022446E2
    // ldr r2, _02244824 ; =0x0000086C
    // ldr r1, _02244828 ; =0x0000011A
    // ldr r2, [r4, r2]
    // add r0, r4, #0
    // bl ov40_022442F0
    // mov r0, #4
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #4
    // mov r1, #1
    // bl GfGfx_EngineBTogglePlanes
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // ldr r0, [r4, #0x58]
    // mov r1, #3
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r5, #8]
    // ldr r0, [r4, #0x28]
    // lsl r3, r3, #0x18
    // mov r2, #0xc
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // b _0224481E
    // ldr r0, _0224482C ; =ov40_02245CA0
    // bl TouchscreenHitbox_TouchNewIsIn
    // cmp r0, #0
    // beq _0224471E
    // add r0, r4, #0
    // bl ov40_02230944
    // ldr r1, _02244830 ; =0x0000011B
    // add r0, r4, #0
    // mov r2, #0
    // bl ov40_022442F0
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _0224481E
    // ldr r0, _02244834 ; =ov40_02245CA4
    // bl TouchscreenHitbox_TouchNewIsIn
    // cmp r0, #0
    // beq _0224481E
    // add r0, r4, #0
    // bl ov40_02230944
    // mov r0, #1
    // str r0, [r5, #0xc]
    // add r0, r4, #0
    // bl ov40_022442CC
    // mov r0, #4
    // str r0, [r4, #8]
    // b _0224481E
    // ldr r0, _0224482C ; =ov40_02245CA0
    // bl TouchscreenHitbox_TouchNewIsIn
    // cmp r0, #0
    // beq _02244760
    // add r0, r4, #0
    // bl ov40_02230944
    // add r0, r4, #0
    // bl ov40_022306E0
    // mov r0, #0
    // str r0, [r5, #0xc]
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _0224481E
    // ldr r0, _02244834 ; =ov40_02245CA4
    // bl TouchscreenHitbox_TouchNewIsIn
    // cmp r0, #0
    // beq _0224481E
    // add r0, r4, #0
    // bl ov40_02230944
    // add r0, r4, #0
    // bl ov40_022442CC
    // mov r0, #1
    // str r0, [r5, #0xc]
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _0224481E
    // bl ov40_02244494
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _0224481E
    // add r0, r5, #0
    // add r0, #8
    // mov r1, #1
    // bl ov40_0222DA84
    // add r0, r5, #0
    // add r1, r5, #4
    // mov r2, #1
    // mov r3, #0
    // bl ov40_0222DA00
    // cmp r0, #0
    // beq _022447BE
    // ldr r0, [r5, #0xc]
    // cmp r0, #1
    // bne _022447B8
    // add r0, r4, #0
    // mov r1, #3
    // bl ov40_0222BF80
    // b _022447BE
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // ldr r0, [r4, #0x58]
    // mov r1, #3
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r3, [r5, #8]
    // ldr r0, [r4, #0x28]
    // lsl r3, r3, #0x18
    // mov r2, #0xc
    // lsr r3, r3, #0x18
    // bl PaletteData_BlendPalettes
    // b _0224481E
    // bl ov40_022306F0
    // cmp r0, #0
    // beq _022447FE
    // add r0, r4, #0
    // bl ov40_0222FDC4
    // add r0, r4, #0
    // bl ov40_0222FCCC
    // ldr r1, _02244838 ; =0x0000011D
    // add r0, r4, #0
    // mov r2, #0
    // bl ov40_022442F0
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _0224481E
    // add r0, r4, #0
    // mov r1, #3
    // bl ov40_0222BF80
    // b _0224481E
    // bl System_GetTouchNew
    // cmp r0, #0
    // beq _0224481E
    // add r0, r4, #0
    // bl ov40_022442CC
    // add r0, r4, #0
    // mov r1, #3
    // bl ov40_0222BF80
    // mov r0, #0
    // add sp, #0x10
    // pop {r3, r4, r5, pc}
    // _02244824: .word 0x0000086C
    // _02244828: .word 0x0000011A
    // _0224482C: .word ov40_02245CA0
    // _02244830: .word 0x0000011B
    // _02244834: .word ov40_02245CA4
    // _02244838: .word 0x0000011D
    // TODO: decompile
}




void ov40_0224483C(void) {
    // ldr r4, [r5, r1]
    *((u32*)(r0 + 8)) = (*((u32*)(r0 + 8)) + 1);
    *((u32*)(r0 + 8)) = (*((u32*)(r0 + 8)) + 1);
    ov40_0222D88C(r0, *((u32*)(r0 + 8)));
    BgClearTilemapBufferAndCommit(*((u32*)(r5 + 0x24)), 2);
    BgClearTilemapBufferAndCommit(*((u32*)(r5 + 0x24)), 6);
    BgClearTilemapBufferAndCommit(*((u32*)(r5 + 0x24)), 3);
    BgClearTilemapBufferAndCommit(*((u32*)(r5 + 0x24)), 7);
    ov40_0222FB90(r5, 1);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    ov40_0222FBB4((*((u32*)(r5 + 8)) + 1));
    // add r0, #8
    ov40_0222DA84(r4, 0);
    ov40_0222DD08(r5);
    // add r0, #8
    ov40_0222DAA8(r4);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r5 + 0x28)), 2, 0xc, 0x10);
    ov40_0222BF64(r5, 1, 1, *((u32*)(r5 + 0x10)));
    ov40_0222BF80(r5, 5);
    Heap_Free(r4);
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r5 + 0x28)), 1, 2, ((*((u32*)(r4 + 8)) << 0x18) >> 0x18));
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)(r5 + 0x28)), 3, 0xc, ((*((u32*)(r4 + 8)) << 0x18) >> 0x18));
}




void ov40_02244920(void) {
    // add r0, #0xaa
    // ldrb r0, [r0]
    // str r1, [sp]
    // str r2, [sp, #4]
    // add r1, sp, #0x28
    // add r2, sp, #0x24
    sub_0202FEB8();
    // ldr r1, [sp, #4]
    String_New(0x40);
    // ldr r1, [sp, #4]
    String_New(0x40);
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #4]
    Heap_Alloc(0x80);
    // ldr r1, [sp, #0x28]
    // str r0, [sp, #0x20]
    // ldr r0, [sp]
    // mvn r7, r7
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x10]
    // add r0, #0x3c
    // str r0, [sp, #0x10]
    // str r0, [sp, #0xc]
    // ldr r2, [sp, #0x14]
    // add r2, #0xe
    // mvn r0, r0
    // ldr r0, [sp, #0x1c]
    // ldr r1, [sp, #4]
    ov40_02244A84(0, (7 - 1), (r2 - 2));
    // ldr r0, [sp, #0x1c]
    // ldr r1, [sp, #0x10]
    CopyStringToU16Array(8);
    String_SetEmpty(r4);
    // ldr r1, [sp, #0xc]
    CopyU16ArrayToString(r4);
    // ldr r2, [sp, #0x1c]
    FontID_String_AllCharsValid(0, r4);
    // ldr r0, [sp, #0x1c]
    // ldr r1, [sp, #4]
    ov40_02244A84();
    // ldr r0, [sp, #0x1c]
    // ldr r1, [sp, #0x10]
    CopyStringToU16Array(8);
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp, #0x28]
    // add r0, #0x34
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x10]
    // add r0, #0x34
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0xc]
    // add r0, #0x34
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x20]
    // str r0, [sp, #0x20]
    // str r0, [sp, #8]
    // ldr r0, [sp]
    Party_GetCount(*((u32*)(0 + 4)));
    // str r0, [sp, #0x18]
    // ldr r0, [sp]
    Party_GetMonByIndex(*((u32*)(r0 + 4)), 0);
    GetMonData(0xac, 0);
    MIi_CpuClear16(0, r5, 0x80);
    GetMonData(r7, 0x75, r5);
    String_SetEmpty(r4);
    CopyU16ArrayToString(r4, r5);
    // ldr r2, [sp, #0x1c]
    FontID_String_AllCharsValid(0, r4);
    SetMonData(r7, 0xb3, 0);
    // ldr r0, [sp, #0x18]
    // ldr r0, [sp]
    // ldr r1, [sp, #0x28]
    // str r0, [sp]
    // ldr r0, [sp, #8]
    // str r0, [sp, #8]
    String_Delete(r4);
    // ldr r0, [sp, #0x1c]
    String_Delete();
    Heap_Free(r5);
}




void ov40_02244A84(void) {
    String_SetEmpty();
    NewMsgDataFromNarc(1, 0x1b, 0xd, r5);
    ReadMsgDataIntoString((0x53 << 2), r4);
    DestroyMsgData(r5);
}




void ov40_02244AB0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r4, r3, #0
    // add r6, r1, #0
    // ldrh r1, [r4]
    // add r7, r0, #0
    // add r5, r2, #0
    // cmp r1, #0
    // beq _02244AC6
    // cmp r1, #1
    // beq _02244B1A
    // b _02244B28
    // ldr r0, _02244B2C ; =_021D2AF8
    // ldr r0, [r0]
    // cmp r0, #0
    // bne _02244AD2
    // bl GF_AssertFail
    // cmp r5, #1
    // bne _02244AFA
    // ldr r1, _02244B2C ; =_021D2AF8
    // ldr r2, _02244B30 ; =0x0000E281
    // ldr r0, [r1]
    // add r0, #0xab
    // strb r5, [r0]
    // ldr r0, [r1]
    // add r0, #0xcc
    // strh r2, [r0]
    // ldr r1, [r1]
    // add r0, r7, #0
    // add r1, #0x84
    // mov r2, #0x58
    // bl SaveArray_CalcCRC16
    // ldr r1, _02244B2C ; =_021D2AF8
    // ldr r1, [r1]
    // add r1, #0xe4
    // strh r0, [r1]
    // ldr r0, _02244B2C ; =_021D2AF8
    // ldr r1, _02244B34 ; =0x00001D4C
    // ldr r0, [r0]
    // ldr r2, _02244B38 ; =0x0000FFFF
    // ldrh r3, [r0, r1]
    // add r0, #0xe8
    // sub r1, #0xe8
    // eor r2, r3
    // lsl r2, r2, #0x10
    // add r2, r3, r2
    // bl sub_02030250
    // ldrh r0, [r4]
    // add r0, r0, #1
    // strh r0, [r4]
    // b _02244B28
    // ldr r1, _02244B2C ; =_021D2AF8
    // ldr r3, [sp, #0x18]
    // ldr r1, [r1]
    // add r2, r6, #0
    // bl sub_0202FDA4
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // _02244B2C: .word _021D2AF8
    // _02244B30: .word 0x0000E281
    // _02244B34: .word 0x00001D4C
    // _02244B38: .word 0x0000FFFF
    // TODO: decompile
}




void ov40_02244B3C(void) {
    // push {r3, lr}
    // ldr r0, _02244B64 ; =_021D2AF8
    // ldr r0, [r0]
    // cmp r0, #0
    // bne _02244B4A
    // bl GF_AssertFail
    // ldr r0, _02244B64 ; =_021D2AF8
    // ldr r1, _02244B68 ; =0x00001D4C
    // ldr r0, [r0]
    // ldr r2, _02244B6C ; =0x0000FFFF
    // ldrh r3, [r0, r1]
    // add r0, #0xe8
    // sub r1, #0xe8
    // eor r2, r3
    // lsl r2, r2, #0x10
    // add r2, r3, r2
    // bl sub_02030250
    // pop {r3, pc}
    // _02244B64: .word _021D2AF8
    // _02244B68: .word 0x00001D4C
    // _02244B6C: .word 0x0000FFFF
    // TODO: decompile
}




void ov40_02244B70(void) {
    // push {r4, r5, r6, lr}
    // add r4, r3, #0
    // add r5, r1, #0
    // ldrh r1, [r4]
    // add r6, r2, #0
    // cmp r1, #0
    // beq _02244B84
    // cmp r1, #1
    // beq _02244BA6
    // b _02244BB4
    // ldr r0, _02244BB8 ; =_021D2AF8
    // ldr r0, [r0]
    // cmp r0, #0
    // bne _02244B90
    // bl GF_AssertFail
    // ldr r0, _02244BB8 ; =_021D2AF8
    // ldr r1, [r0]
    // add r0, r1, #0
    // add r0, #0xdc
    // str r5, [r0]
    // add r1, #0xe0
    // str r6, [r1]
    // ldrh r0, [r4]
    // add r0, r0, #1
    // strh r0, [r4]
    // b _02244BB4
    // ldr r1, _02244BB8 ; =_021D2AF8
    // ldr r3, [sp, #0x10]
    // ldr r1, [r1]
    // mov r2, #0
    // bl sub_0202FDA4
    // pop {r4, r5, r6, pc}
    // mov r0, #0
    // pop {r4, r5, r6, pc}
    // _02244BB8: .word _021D2AF8
    // TODO: decompile
}




void ov40_02244BBC(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, _02244C34 ; =_021D2AF8
    // add r4, r1, #0
    // ldr r0, [r0]
    // cmp r0, #0
    // bne _02244BCE
    // bl GF_AssertFail
    // ldr r1, _02244C34 ; =_021D2AF8
    // mov r2, #1
    // ldr r0, [r1]
    // add r0, #0xab
    // strb r2, [r0]
    // ldr r0, [r1]
    // ldr r2, _02244C38 ; =0x0000E281
    // add r0, #0xcc
    // strh r2, [r0]
    // ldr r1, [r1]
    // add r0, r5, #0
    // add r1, #0x84
    // mov r2, #0x58
    // bl SaveArray_CalcCRC16
    // ldr r1, _02244C34 ; =_021D2AF8
    // ldr r3, _02244C3C ; =0x0000FFFF
    // ldr r2, [r1]
    // add r2, #0xe4
    // strh r0, [r2]
    // ldr r0, [r1]
    // ldr r1, _02244C40 ; =0x00001D4C
    // ldrh r2, [r0, r1]
    // add r0, #0xe8
    // sub r1, #0xe8
    // eor r3, r2
    // lsl r3, r3, #0x10
    // add r2, r2, r3
    // bl sub_02030250
    // mov r0, #8
    // bl sub_0201A728
    // ldr r1, _02244C34 ; =_021D2AF8
    // add r0, r5, #0
    // ldr r1, [r1]
    // add r2, r4, #0
    // bl sub_02027134
    // add r4, r0, #0
    // cmp r4, #2
    // bne _02244C2A
    // add r0, r5, #0
    // bl SaveGameNormal
    // add r4, r0, #0
    // mov r0, #8
    // bl sub_0201A738
    // add r0, r4, #0
    // pop {r3, r4, r5, pc}
    // _02244C34: .word _021D2AF8
    // _02244C38: .word 0x0000E281
    // _02244C3C: .word 0x0000FFFF
    // _02244C40: .word 0x00001D4C
    // TODO: decompile
}



